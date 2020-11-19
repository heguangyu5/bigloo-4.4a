/*===========================================================================*/
/*   (Llib/srfi4.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/srfi4.scm -indent -o objs/obj_s/Llib/srfi4.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_u8vectorzd2setz12zc0zz__srfi4z00(obj_t, long, uint8_t);
static obj_t BGl_symbol3370z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_z62s64vectorzd2refzb0zz__srfi4z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3375z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_z62f64vectorzf3z91zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_u8vectorzd2ze3listz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long, uint8_t);
static obj_t BGl_z62s8vectorzd2ze3listz53zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__f64vectorzd2copyz12zc0zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_u16vectorzd2ze3listz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_s8vectorz00zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL uint16_t BGl_u16vectorzd2refzd2zz__srfi4z00(obj_t, long);
static obj_t BGl_z62u16vectorzd2ze3listz53zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_symbol3380z00zz__srfi4z00 = BUNSPEC;
BGL_EXPORTED_DECL long BGl_u16vectorzd2lengthzd2zz__srfi4z00(obj_t);
static obj_t BGl_symbol3385z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl__f32vectorzd2copyz12zc0zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_homogeneouszd2vectorzf3z21zz__srfi4z00(obj_t);
static obj_t BGl_z62s16vectorz62zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62u32vectorzf3z91zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3s16vectorz31zz__srfi4z00(obj_t);
static obj_t BGl__makezd2u32vectorzd2zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2s16vectorzd2zz__srfi4z00(long, int16_t);
static obj_t BGl_requirezd2initializa7ationz75zz__srfi4z00 = BUNSPEC;
static obj_t BGl_z62listzd2ze3s16vectorz53zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62s8vectorzf3z91zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_symbol3470z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3390z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3395z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3478z00zz__srfi4z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_hvectorzd2rangezd2errorz00zz__srfi4z00(obj_t, obj_t, long);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62u32vectorzd2refzb0zz__srfi4z00(obj_t, obj_t, obj_t);
static obj_t BGl__makezd2u64vectorzd2zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_s16vectorzd2lengthzd2zz__srfi4z00(obj_t);
static obj_t BGl_symbol3481z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3484z00zz__srfi4z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_s32vectorzd2setz12zc0zz__srfi4z00(obj_t, long, int32_t);
static obj_t BGl_symbol3487z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_z62f64vectorzd2refzb0zz__srfi4z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL uint64_t BGl_u64vectorzd2refzd2zz__srfi4z00(obj_t, long);
static obj_t BGl_symbol3490z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3493z00zz__srfi4z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3u8vectorz31zz__srfi4z00(obj_t);
static obj_t BGl_symbol3496z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3499z00zz__srfi4z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_s16vectorzd2ze3listz31zz__srfi4z00(obj_t);
static obj_t BGl_z62s16vectorzd2ze3listz53zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62u8vectorz62zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_s16vectorz00zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_u64vectorzf3zf3zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_s8vectorzf3zf3zz__srfi4z00(obj_t);
static obj_t BGl_genericzd2initzd2zz__srfi4z00();
BGL_EXPORTED_DECL obj_t BGl_s8vectorzd2ze3listz31zz__srfi4z00(obj_t);
static obj_t BGl_objectzd2initzd2zz__srfi4z00();
extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_z62u16vectorzd2lengthzb0zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_f64vectorzd2copyz12zc0zz__srfi4z00(obj_t, long, obj_t, obj_t, obj_t);
static obj_t BGl_z62u32vectorz62zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_f32vectorzd2lengthzd2zz__srfi4z00(obj_t);
static obj_t BGl_z62homogeneouszd2vectorzd2infoz62zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62u64vectorzf3z91zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3u32vectorz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_s8vectorzd2setz12zc0zz__srfi4z00(obj_t, long, int8_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2u32vectorzd2zz__srfi4z00(long, uint32_t);
static obj_t BGl_z62listzd2ze3u32vectorz53zz__srfi4z00(obj_t, obj_t);
extern obj_t string_append_3(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int8_t BGl_s8vectorzd2refzd2zz__srfi4z00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_f32vectorzd2copyz12zc0zz__srfi4z00(obj_t, long, obj_t, obj_t, obj_t);
static obj_t BGl_z62u64vectorz62zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL int16_t BGl_s16vectorzd2refzd2zz__srfi4z00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3u64vectorz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2u64vectorzd2zz__srfi4z00(long, uint64_t);
BGL_EXPORTED_DECL long BGl_u32vectorzd2lengthzd2zz__srfi4z00(obj_t);
static obj_t BGl_z62listzd2ze3u64vectorz53zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62s16vectorzd2lengthzb0zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__makezd2f32vectorzd2zz__srfi4z00(obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl__u16vectorzd2copyz12zc0zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_u64vectorzd2ze3listz31zz__srfi4z00(obj_t);
static obj_t BGl_z62u64vectorzd2ze3listz53zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__u8vectorzd2copyz12zc0zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__makezd2f64vectorzd2zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_u32vectorzd2ze3listz31zz__srfi4z00(obj_t);
static obj_t BGl_z62s32vectorzd2refzb0zz__srfi4z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62u32vectorzd2ze3listz53zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_s32vectorzd2lengthzd2zz__srfi4z00(obj_t);
static obj_t BGl_methodzd2initzd2zz__srfi4z00();
BGL_EXPORTED_DECL obj_t BGl_u32vectorz00zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_u16vectorzf3zf3zz__srfi4z00(obj_t);
static obj_t BGl_z62u16vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_f64vectorzd2lengthzd2zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL int64_t BGl_s64vectorzd2refzd2zz__srfi4z00(obj_t, long);
static obj_t BGl__makezd2u16vectorzd2zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_u64vectorz00zz__srfi4z00(obj_t);
static obj_t BGl_z62u8vectorzd2refzb0zz__srfi4z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_u64vectorzd2lengthzd2zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_s32vectorzf3zf3zz__srfi4z00(obj_t);
static obj_t BGl__makezd2s8vectorzd2zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62u16vectorzf3z91zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62f32vectorzd2lengthzb0zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__s16vectorzd2copyz12zc0zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_s64vectorzd2ze3listz31zz__srfi4z00(obj_t);
static obj_t BGl_z62s64vectorzd2ze3listz53zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62f64vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62f32vectorzd2refzb0zz__srfi4z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_s32vectorzd2ze3listz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL uint32_t BGl_u32vectorzd2refzd2zz__srfi4z00(obj_t, long);
static obj_t BGl_z62s32vectorzd2ze3listz53zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_u8vectorz00zz__srfi4z00(obj_t);
static obj_t BGl_z62f32vectorz62zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_s64vectorzd2lengthzd2zz__srfi4z00(obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62u32vectorzd2lengthzb0zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3f32vectorz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2f32vectorzd2zz__srfi4z00(long, float);
BGL_EXPORTED_DECL double BGl_f64vectorzd2refzd2zz__srfi4z00(obj_t, long);
static obj_t BGl_z62listzd2ze3f32vectorz53zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62s32vectorzf3z91zz__srfi4z00(obj_t, obj_t);
extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_z62f64vectorz62zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__s8vectorzd2copyz12zc0zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_u8vectorzd2copyz12zc0zz__srfi4z00(obj_t, long, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3f64vectorz31zz__srfi4z00(obj_t);
static obj_t BGl_z62listzd2ze3s8vectorz53zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2f64vectorzd2zz__srfi4z00(long, double);
static obj_t BGl_z62listzd2ze3f64vectorz53zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_u16vectorzd2copyz12zc0zz__srfi4z00(obj_t, long, obj_t, obj_t, obj_t);
static obj_t BGl_z62s32vectorzd2lengthzb0zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_u16vectorzd2setz12zc0zz__srfi4z00(obj_t, long, uint16_t);
static obj_t BGl_z62s16vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_u8vectorzd2lengthzd2zz__srfi4z00(obj_t);
static obj_t BGl_z62u16vectorz62zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62u64vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__makezd2s32vectorzd2zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62u8vectorzd2lengthzb0zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3u16vectorz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2u16vectorzd2zz__srfi4z00(long, uint16_t);
static obj_t BGl_z62f64vectorzd2lengthzb0zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62listzd2ze3u16vectorz53zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62u8vectorzf3z91zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2s8vectorzd2zz__srfi4z00(long, int8_t);
BGL_EXPORTED_DECL obj_t BGl_f32vectorz00zz__srfi4z00(obj_t);
static obj_t BGl__makezd2s64vectorzd2zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__u64vectorzd2copyz12zc0zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__srfi4z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_z62u64vectorzd2lengthzb0zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_s64vectorzf3zf3zz__srfi4z00(obj_t);
static obj_t BGl__u32vectorzd2copyz12zc0zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_f64vectorzd2setz12zc0zz__srfi4z00(obj_t, long, double);
BGL_EXPORTED_DECL obj_t BGl_f64vectorz00zz__srfi4z00(obj_t);
static obj_t BGl_z62f32vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62u8vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL obj_t BGl_s16vectorzd2copyz12zc0zz__srfi4z00(obj_t, long, obj_t, obj_t, obj_t);
static obj_t BGl_z62u16vectorzd2refzb0zz__srfi4z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62s64vectorzd2lengthzb0zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_u16vectorz00zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL long BGl_s8vectorzd2lengthzd2zz__srfi4z00(obj_t);
static obj_t BGl_z62s64vectorzf3z91zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__srfi4z00();
static obj_t BGl_z62s8vectorzd2lengthzb0zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_u8vectorzf3zf3zz__srfi4z00(obj_t);
extern long bgl_list_length(obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3s8vectorz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_s8vectorzd2copyz12zc0zz__srfi4z00(obj_t, long, obj_t, obj_t, obj_t);
static obj_t BGl_z62s8vectorzd2refzb0zz__srfi4z00(obj_t, obj_t, obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__srfi4z00();
static obj_t BGl_importedzd2moduleszd2initz00zz__srfi4z00();
BGL_EXPORTED_DECL int32_t BGl_s32vectorzd2refzd2zz__srfi4z00(obj_t, long);
static obj_t BGl__s64vectorzd2copyz12zc0zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62s8vectorz62zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_s16vectorzd2setz12zc0zz__srfi4z00(obj_t, long, int16_t);
BGL_EXPORTED_DECL obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_f64vectorzd2ze3listz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_u64vectorzd2setz12zc0zz__srfi4z00(obj_t, long, uint64_t);
static obj_t BGl_z62s32vectorz62zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62u32vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62s64vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62f64vectorzd2ze3listz53zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3s32vectorz31zz__srfi4z00(obj_t);
static obj_t BGl__s32vectorzd2copyz12zc0zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2s32vectorzd2zz__srfi4z00(long, int32_t);
BGL_EXPORTED_DECL bool_t BGl_f32vectorzf3zf3zz__srfi4z00(obj_t);
static obj_t BGl_z62listzd2ze3s32vectorz53zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62u64vectorzd2refzb0zz__srfi4z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_f32vectorzd2ze3listz31zz__srfi4z00(obj_t);
static obj_t BGl_z62f32vectorzd2ze3listz53zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62s64vectorz62zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3s64vectorz31zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2s64vectorzd2zz__srfi4z00(long, int64_t);
static obj_t BGl_z62listzd2ze3s64vectorz53zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_s16vectorzf3zf3zz__srfi4z00(obj_t);
static obj_t BGl_z62homogeneouszd2vectorzf3z43zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_f32vectorzd2setz12zc0zz__srfi4z00(obj_t, long, float);
BGL_EXPORTED_DECL obj_t BGl_u64vectorzd2copyz12zc0zz__srfi4z00(obj_t, long, obj_t, obj_t, obj_t);
static obj_t BGl_z62f32vectorzf3z91zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL float BGl_f32vectorzd2refzd2zz__srfi4z00(obj_t, long);
static obj_t BGl_z62u8vectorzd2ze3listz53zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_u32vectorzd2copyz12zc0zz__srfi4z00(obj_t, long, obj_t, obj_t, obj_t);
static obj_t BGl_z62hvectorzd2rangezd2errorz62zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3400z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3320z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3322z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3405z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3324z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3326z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3328z00zz__srfi4z00 = BUNSPEC;
extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_s32vectorz00zz__srfi4z00(obj_t);
static obj_t BGl__makezd2u8vectorzd2zz__srfi4z00(obj_t, obj_t);
static obj_t BGl_z62s16vectorzf3z91zz__srfi4z00(obj_t, obj_t);
static obj_t BGl__makezd2s16vectorzd2zz__srfi4z00(obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
static obj_t BGl_symbol3410z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3330z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3332z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_z62s8vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3334z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3336z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_symbol3338z00zz__srfi4z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_s64vectorz00zz__srfi4z00(obj_t);
static obj_t BGl_symbol3502z00zz__srfi4z00 = BUNSPEC;
static obj_t BGl_z62s16vectorzd2refzb0zz__srfi4z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_u32vectorzd2setz12zc0zz__srfi4z00(obj_t, long, uint32_t);
BGL_EXPORTED_DECL obj_t BGl_s64vectorzd2setz12zc0zz__srfi4z00(obj_t, long, int64_t);
static obj_t BGl_z62s32vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_s64vectorzd2copyz12zc0zz__srfi4z00(obj_t, long, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_f64vectorzf3zf3zz__srfi4z00(obj_t);
BGL_EXPORTED_DECL uint8_t BGl_u8vectorzd2refzd2zz__srfi4z00(obj_t, long);
static obj_t BGl_z62listzd2ze3u8vectorz53zz__srfi4z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_s32vectorzd2copyz12zc0zz__srfi4z00(obj_t, long, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3363z00zz__srfi4z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_u32vectorzf3zf3zz__srfi4z00(obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_homogeneouszd2vectorzf3zd2envzf3zz__srfi4z00, BgL_bgl_za762homogeneousza7d3516z00, BGl_z62homogeneouszd2vectorzf3z43zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2s16vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2s16vecto3517za7, opt_generic_entry, BGl__makezd2s16vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s64vectorzd2copyz12zd2envz12zz__srfi4z00, BgL_bgl__s64vectorza7d2cop3518za7, opt_generic_entry, BGl__s64vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3f32vectorzd2envze3zz__srfi4z00, BgL_bgl_za762listza7d2za7e3f323519za7, BGl_z62listzd2ze3f32vectorz53zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u16vectorzf3zd2envz21zz__srfi4z00, BgL_bgl_za762u16vectorza7f3za73520za7, BGl_z62u16vectorzf3z91zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f64vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl_za762f64vectorza7d2r3521z00, BGl_z62f64vectorzd2refzb0zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f32vectorzd2copyz12zd2envz12zz__srfi4z00, BgL_bgl__f32vectorza7d2cop3522za7, opt_generic_entry, BGl__f32vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s16vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl_za762s16vectorza7d2r3523z00, BGl_z62s16vectorzd2refzb0zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u16vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl_za762u16vectorza7d2r3524z00, BGl_z62u16vectorzd2refzb0zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2s64vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2s64vecto3525za7, opt_generic_entry, BGl__makezd2s64vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s64vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl_za762s64vectorza7d2s3526z00, BGl_z62s64vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u64vectorzd2copyz12zd2envz12zz__srfi4z00, BgL_bgl__u64vectorza7d2cop3527za7, opt_generic_entry, BGl__u64vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f64vectorzf3zd2envz21zz__srfi4z00, BgL_bgl_za762f64vectorza7f3za73528za7, BGl_z62f64vectorzf3z91zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u8vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl_za762u8vectorza7d2re3529z00, BGl_z62u8vectorzd2refzb0zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s32vectorzd2envzd2zz__srfi4z00, BgL_bgl_za762s32vectorza762za73530za7, va_generic_entry, BGl_z62s32vectorz62zz__srfi4z00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string3318z00zz__srfi4z00, BgL_bgl_string3318za700za7za7_3531za7, "homogeneous-vector-info", 23 );
DEFINE_STRING( BGl_string3319z00zz__srfi4z00, BgL_bgl_string3319za700za7za7_3532za7, "Illegal hvector ident", 21 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u64vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl_za762u64vectorza7d2s3533z00, BGl_z62u64vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s8vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl_za762s8vectorza7d2se3534z00, BGl_z62s8vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2u32vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2u32vecto3535za7, opt_generic_entry, BGl__makezd2u32vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u8vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl_za762u8vectorza7d2se3536z00, BGl_z62u8vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f64vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl_za762f64vectorza7d2s3537z00, BGl_z62f64vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string3401z00zz__srfi4z00, BgL_bgl_string3401za700za7za7_3538za7, "make-u64vector", 14 );
DEFINE_STRING( BGl_string3402z00zz__srfi4z00, BgL_bgl_string3402za700za7za7_3539za7, "_make-u64vector", 15 );
DEFINE_STRING( BGl_string3321z00zz__srfi4z00, BgL_bgl_string3321za700za7za7_3540za7, "s8", 2 );
DEFINE_STRING( BGl_string3403z00zz__srfi4z00, BgL_bgl_string3403za700za7za7_3541za7, "buint64", 7 );
DEFINE_STRING( BGl_string3404z00zz__srfi4z00, BgL_bgl_string3404za700za7za7_3542za7, "u64vector-set!", 14 );
DEFINE_STRING( BGl_string3323z00zz__srfi4z00, BgL_bgl_string3323za700za7za7_3543za7, "u8", 2 );
DEFINE_STRING( BGl_string3406z00zz__srfi4z00, BgL_bgl_string3406za700za7za7_3544za7, "make-f32vector", 14 );
DEFINE_STRING( BGl_string3325z00zz__srfi4z00, BgL_bgl_string3325za700za7za7_3545za7, "s16", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s8vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl_za762s8vectorza7d2re3546z00, BGl_z62s8vectorzd2refzb0zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3407z00zz__srfi4z00, BgL_bgl_string3407za700za7za7_3547za7, "_make-f32vector", 15 );
DEFINE_STRING( BGl_string3408z00zz__srfi4z00, BgL_bgl_string3408za700za7za7_3548za7, "real", 4 );
DEFINE_STRING( BGl_string3327z00zz__srfi4z00, BgL_bgl_string3327za700za7za7_3549za7, "u16", 3 );
DEFINE_STRING( BGl_string3409z00zz__srfi4z00, BgL_bgl_string3409za700za7za7_3550za7, "f32vector-set!", 14 );
DEFINE_STRING( BGl_string3329z00zz__srfi4z00, BgL_bgl_string3329za700za7za7_3551za7, "s32", 3 );
extern obj_t BGl_zd3s32zd2envz01zz__r4_numbers_6_5_fixnumz00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2f64vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2f64vecto3552za7, opt_generic_entry, BGl__makezd2f64vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_STRING( BGl_string3411z00zz__srfi4z00, BgL_bgl_string3411za700za7za7_3553za7, "make-f64vector", 14 );
DEFINE_STRING( BGl_string3412z00zz__srfi4z00, BgL_bgl_string3412za700za7za7_3554za7, "_make-f64vector", 15 );
DEFINE_STRING( BGl_string3331z00zz__srfi4z00, BgL_bgl_string3331za700za7za7_3555za7, "u32", 3 );
DEFINE_STRING( BGl_string3413z00zz__srfi4z00, BgL_bgl_string3413za700za7za7_3556za7, "f64vector-set!", 14 );
DEFINE_STRING( BGl_string3414z00zz__srfi4z00, BgL_bgl_string3414za700za7za7_3557za7, "index out of range [0..", 23 );
DEFINE_STRING( BGl_string3333z00zz__srfi4z00, BgL_bgl_string3333za700za7za7_3558za7, "s64", 3 );
DEFINE_STRING( BGl_string3415z00zz__srfi4z00, BgL_bgl_string3415za700za7za7_3559za7, "]", 1 );
DEFINE_STRING( BGl_string3416z00zz__srfi4z00, BgL_bgl_string3416za700za7za7_3560za7, "&hvector-range-error", 20 );
DEFINE_STRING( BGl_string3335z00zz__srfi4z00, BgL_bgl_string3335za700za7za7_3561za7, "u64", 3 );
DEFINE_STRING( BGl_string3417z00zz__srfi4z00, BgL_bgl_string3417za700za7za7_3562za7, "bstring", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s16vectorzf3zd2envz21zz__srfi4z00, BgL_bgl_za762s16vectorza7f3za73563za7, BGl_z62s16vectorzf3z91zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3418z00zz__srfi4z00, BgL_bgl_string3418za700za7za7_3564za7, "s8vector-ref", 12 );
DEFINE_STRING( BGl_string3337z00zz__srfi4z00, BgL_bgl_string3337za700za7za7_3565za7, "f32", 3 );
DEFINE_STRING( BGl_string3419z00zz__srfi4z00, BgL_bgl_string3419za700za7za7_3566za7, "&s8vector-ref", 13 );
DEFINE_STRING( BGl_string3339z00zz__srfi4z00, BgL_bgl_string3339za700za7za7_3567za7, "f64", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u64vectorzf3zd2envz21zz__srfi4z00, BgL_bgl_za762u64vectorza7f3za73568za7, BGl_z62u64vectorzf3z91zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s8vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl_za762s8vectorza7d2le3569z00, BGl_z62s8vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3u16vectorzd2envze3zz__srfi4z00, BgL_bgl_za762listza7d2za7e3u163570za7, BGl_z62listzd2ze3u16vectorz53zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s64vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl_za762s64vectorza7d2za73571za7, BGl_z62s64vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3500z00zz__srfi4z00, BgL_bgl_string3500za700za7za7_3572za7, "f32vector-copy!", 15 );
DEFINE_STRING( BGl_string3501z00zz__srfi4z00, BgL_bgl_string3501za700za7za7_3573za7, "_f32vector-copy!", 16 );
DEFINE_STRING( BGl_string3420z00zz__srfi4z00, BgL_bgl_string3420za700za7za7_3574za7, "u8vector-ref", 12 );
DEFINE_STRING( BGl_string3421z00zz__srfi4z00, BgL_bgl_string3421za700za7za7_3575za7, "&u8vector-ref", 13 );
DEFINE_STRING( BGl_string3340z00zz__srfi4z00, BgL_bgl_string3340za700za7za7_3576za7, "hvector", 7 );
DEFINE_STRING( BGl_string3503z00zz__srfi4z00, BgL_bgl_string3503za700za7za7_3577za7, "f64vector-copy!", 15 );
DEFINE_STRING( BGl_string3422z00zz__srfi4z00, BgL_bgl_string3422za700za7za7_3578za7, "s16vector-ref", 13 );
DEFINE_STRING( BGl_string3341z00zz__srfi4z00, BgL_bgl_string3341za700za7za7_3579za7, "/tmp/4.4a/runtime/Llib/srfi4.scm", 32 );
DEFINE_STRING( BGl_string3504z00zz__srfi4z00, BgL_bgl_string3504za700za7za7_3580za7, "_f64vector-copy!", 16 );
DEFINE_STRING( BGl_string3423z00zz__srfi4z00, BgL_bgl_string3423za700za7za7_3581za7, "&s16vector-ref", 14 );
DEFINE_STRING( BGl_string3342z00zz__srfi4z00, BgL_bgl_string3342za700za7za7_3582za7, "&s8vector-length", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3s8vectorzd2envze3zz__srfi4z00, BgL_bgl_za762listza7d2za7e3s8v3583za7, BGl_z62listzd2ze3s8vectorz53zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3505z00zz__srfi4z00, BgL_bgl_string3505za700za7za7_3584za7, "__srfi4", 7 );
DEFINE_STRING( BGl_string3424z00zz__srfi4z00, BgL_bgl_string3424za700za7za7_3585za7, "u16vector-ref", 13 );
DEFINE_STRING( BGl_string3343z00zz__srfi4z00, BgL_bgl_string3343za700za7za7_3586za7, "s8vector", 8 );
DEFINE_STRING( BGl_string3425z00zz__srfi4z00, BgL_bgl_string3425za700za7za7_3587za7, "&u16vector-ref", 14 );
DEFINE_STRING( BGl_string3344z00zz__srfi4z00, BgL_bgl_string3344za700za7za7_3588za7, "&u8vector-length", 16 );
DEFINE_STRING( BGl_string3426z00zz__srfi4z00, BgL_bgl_string3426za700za7za7_3589za7, "s32vector-ref", 13 );
DEFINE_STRING( BGl_string3345z00zz__srfi4z00, BgL_bgl_string3345za700za7za7_3590za7, "u8vector", 8 );
DEFINE_STRING( BGl_string3427z00zz__srfi4z00, BgL_bgl_string3427za700za7za7_3591za7, "&s32vector-ref", 14 );
DEFINE_STRING( BGl_string3346z00zz__srfi4z00, BgL_bgl_string3346za700za7za7_3592za7, "&s16vector-length", 17 );
DEFINE_STRING( BGl_string3428z00zz__srfi4z00, BgL_bgl_string3428za700za7za7_3593za7, "u32vector-ref", 13 );
DEFINE_STRING( BGl_string3347z00zz__srfi4z00, BgL_bgl_string3347za700za7za7_3594za7, "s16vector", 9 );
DEFINE_STRING( BGl_string3429z00zz__srfi4z00, BgL_bgl_string3429za700za7za7_3595za7, "&u32vector-ref", 14 );
DEFINE_STRING( BGl_string3348z00zz__srfi4z00, BgL_bgl_string3348za700za7za7_3596za7, "&u16vector-length", 17 );
DEFINE_STRING( BGl_string3349z00zz__srfi4z00, BgL_bgl_string3349za700za7za7_3597za7, "u16vector", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s32vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl_za762s32vectorza7d2r3598z00, BGl_z62s32vectorzd2refzb0zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u32vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl_za762u32vectorza7d2r3599z00, BGl_z62u32vectorzd2refzb0zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f32vectorzd2envzd2zz__srfi4z00, BgL_bgl_za762f32vectorza762za73600za7, va_generic_entry, BGl_z62f32vectorz62zz__srfi4z00, BUNSPEC, -1 );
extern obj_t BGl_zd3s8zd2envz01zz__r4_numbers_6_5_fixnumz00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s64vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl_za762s64vectorza7d2l3601z00, BGl_z62s64vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3430z00zz__srfi4z00, BgL_bgl_string3430za700za7za7_3602za7, "s64vector-ref", 13 );
DEFINE_STRING( BGl_string3431z00zz__srfi4z00, BgL_bgl_string3431za700za7za7_3603za7, "&s64vector-ref", 14 );
DEFINE_STRING( BGl_string3350z00zz__srfi4z00, BgL_bgl_string3350za700za7za7_3604za7, "&s32vector-length", 17 );
DEFINE_STRING( BGl_string3432z00zz__srfi4z00, BgL_bgl_string3432za700za7za7_3605za7, "u64vector-ref", 13 );
DEFINE_STRING( BGl_string3351z00zz__srfi4z00, BgL_bgl_string3351za700za7za7_3606za7, "s32vector", 9 );
DEFINE_STRING( BGl_string3433z00zz__srfi4z00, BgL_bgl_string3433za700za7za7_3607za7, "&u64vector-ref", 14 );
DEFINE_STRING( BGl_string3352z00zz__srfi4z00, BgL_bgl_string3352za700za7za7_3608za7, "&u32vector-length", 17 );
DEFINE_STRING( BGl_string3434z00zz__srfi4z00, BgL_bgl_string3434za700za7za7_3609za7, "f32vector-ref", 13 );
DEFINE_STRING( BGl_string3353z00zz__srfi4z00, BgL_bgl_string3353za700za7za7_3610za7, "u32vector", 9 );
DEFINE_STRING( BGl_string3435z00zz__srfi4z00, BgL_bgl_string3435za700za7za7_3611za7, "&f32vector-ref", 14 );
DEFINE_STRING( BGl_string3354z00zz__srfi4z00, BgL_bgl_string3354za700za7za7_3612za7, "&s64vector-length", 17 );
DEFINE_STRING( BGl_string3436z00zz__srfi4z00, BgL_bgl_string3436za700za7za7_3613za7, "f64vector-ref", 13 );
DEFINE_STRING( BGl_string3355z00zz__srfi4z00, BgL_bgl_string3355za700za7za7_3614za7, "s64vector", 9 );
DEFINE_STRING( BGl_string3437z00zz__srfi4z00, BgL_bgl_string3437za700za7za7_3615za7, "&f64vector-ref", 14 );
DEFINE_STRING( BGl_string3356z00zz__srfi4z00, BgL_bgl_string3356za700za7za7_3616za7, "&u64vector-length", 17 );
DEFINE_STRING( BGl_string3438z00zz__srfi4z00, BgL_bgl_string3438za700za7za7_3617za7, "&s8vector-set!", 14 );
DEFINE_STRING( BGl_string3357z00zz__srfi4z00, BgL_bgl_string3357za700za7za7_3618za7, "u64vector", 9 );
DEFINE_STRING( BGl_string3439z00zz__srfi4z00, BgL_bgl_string3439za700za7za7_3619za7, "&u8vector-set!", 14 );
DEFINE_STRING( BGl_string3358z00zz__srfi4z00, BgL_bgl_string3358za700za7za7_3620za7, "&f32vector-length", 17 );
DEFINE_STRING( BGl_string3359z00zz__srfi4z00, BgL_bgl_string3359za700za7za7_3621za7, "f32vector", 9 );
extern obj_t BGl_zd3u64zd2envz01zz__r4_numbers_6_5_fixnumz00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f32vectorzf3zd2envz21zz__srfi4z00, BgL_bgl_za762f32vectorza7f3za73622za7, BGl_z62f32vectorzf3z91zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3440z00zz__srfi4z00, BgL_bgl_string3440za700za7za7_3623za7, "&s16vector-set!", 15 );
DEFINE_STRING( BGl_string3441z00zz__srfi4z00, BgL_bgl_string3441za700za7za7_3624za7, "&u16vector-set!", 15 );
DEFINE_STRING( BGl_string3360z00zz__srfi4z00, BgL_bgl_string3360za700za7za7_3625za7, "&f64vector-length", 17 );
DEFINE_STRING( BGl_string3442z00zz__srfi4z00, BgL_bgl_string3442za700za7za7_3626za7, "&s32vector-set!", 15 );
DEFINE_STRING( BGl_string3361z00zz__srfi4z00, BgL_bgl_string3361za700za7za7_3627za7, "f64vector", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f32vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl_za762f32vectorza7d2za73628za7, BGl_z62f32vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3443z00zz__srfi4z00, BgL_bgl_string3443za700za7za7_3629za7, "&u32vector-set!", 15 );
DEFINE_STRING( BGl_string3362z00zz__srfi4z00, BgL_bgl_string3362za700za7za7_3630za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string3444z00zz__srfi4z00, BgL_bgl_string3444za700za7za7_3631za7, "&s64vector-set!", 15 );
DEFINE_STRING( BGl_string3445z00zz__srfi4z00, BgL_bgl_string3445za700za7za7_3632za7, "&u64vector-set!", 15 );
DEFINE_STRING( BGl_string3364z00zz__srfi4z00, BgL_bgl_string3364za700za7za7_3633za7, "make-s8vector", 13 );
DEFINE_STRING( BGl_string3446z00zz__srfi4z00, BgL_bgl_string3446za700za7za7_3634za7, "&f32vector-set!", 15 );
DEFINE_STRING( BGl_string3365z00zz__srfi4z00, BgL_bgl_string3365za700za7za7_3635za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2u8vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2u8vector3636za7, opt_generic_entry, BGl__makezd2u8vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_STRING( BGl_string3447z00zz__srfi4z00, BgL_bgl_string3447za700za7za7_3637za7, "&f64vector-set!", 15 );
DEFINE_STRING( BGl_string3366z00zz__srfi4z00, BgL_bgl_string3366za700za7za7_3638za7, "_make-s8vector", 14 );
DEFINE_STRING( BGl_string3448z00zz__srfi4z00, BgL_bgl_string3448za700za7za7_3639za7, "&s8vector->list", 15 );
DEFINE_STRING( BGl_string3367z00zz__srfi4z00, BgL_bgl_string3367za700za7za7_3640za7, "bint", 4 );
DEFINE_STRING( BGl_string3449z00zz__srfi4z00, BgL_bgl_string3449za700za7za7_3641za7, "&u8vector->list", 15 );
DEFINE_STRING( BGl_string3368z00zz__srfi4z00, BgL_bgl_string3368za700za7za7_3642za7, "bint8", 5 );
DEFINE_STRING( BGl_string3369z00zz__srfi4z00, BgL_bgl_string3369za700za7za7_3643za7, "s8vector-set!", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s16vectorzd2copyz12zd2envz12zz__srfi4z00, BgL_bgl__s16vectorza7d2cop3644za7, opt_generic_entry, BGl__s16vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3u64vectorzd2envze3zz__srfi4z00, BgL_bgl_za762listza7d2za7e3u643645za7, BGl_z62listzd2ze3u64vectorz53zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3450z00zz__srfi4z00, BgL_bgl_string3450za700za7za7_3646za7, "&s16vector->list", 16 );
DEFINE_STRING( BGl_string3451z00zz__srfi4z00, BgL_bgl_string3451za700za7za7_3647za7, "&u16vector->list", 16 );
DEFINE_STRING( BGl_string3452z00zz__srfi4z00, BgL_bgl_string3452za700za7za7_3648za7, "&s32vector->list", 16 );
DEFINE_STRING( BGl_string3371z00zz__srfi4z00, BgL_bgl_string3371za700za7za7_3649za7, "make-u8vector", 13 );
DEFINE_STRING( BGl_string3453z00zz__srfi4z00, BgL_bgl_string3453za700za7za7_3650za7, "&u32vector->list", 16 );
DEFINE_STRING( BGl_string3372z00zz__srfi4z00, BgL_bgl_string3372za700za7za7_3651za7, "_make-u8vector", 14 );
DEFINE_STRING( BGl_string3454z00zz__srfi4z00, BgL_bgl_string3454za700za7za7_3652za7, "&s64vector->list", 16 );
DEFINE_STRING( BGl_string3373z00zz__srfi4z00, BgL_bgl_string3373za700za7za7_3653za7, "buint8", 6 );
DEFINE_STRING( BGl_string3455z00zz__srfi4z00, BgL_bgl_string3455za700za7za7_3654za7, "&u64vector->list", 16 );
DEFINE_STRING( BGl_string3374z00zz__srfi4z00, BgL_bgl_string3374za700za7za7_3655za7, "u8vector-set!", 13 );
DEFINE_STRING( BGl_string3456z00zz__srfi4z00, BgL_bgl_string3456za700za7za7_3656za7, "&f32vector->list", 16 );
DEFINE_STRING( BGl_string3457z00zz__srfi4z00, BgL_bgl_string3457za700za7za7_3657za7, "&f64vector->list", 16 );
DEFINE_STRING( BGl_string3376z00zz__srfi4z00, BgL_bgl_string3376za700za7za7_3658za7, "make-s16vector", 14 );
DEFINE_STRING( BGl_string3458z00zz__srfi4z00, BgL_bgl_string3458za700za7za7_3659za7, "loop", 4 );
DEFINE_STRING( BGl_string3377z00zz__srfi4z00, BgL_bgl_string3377za700za7za7_3660za7, "_make-s16vector", 15 );
DEFINE_STRING( BGl_string3459z00zz__srfi4z00, BgL_bgl_string3459za700za7za7_3661za7, "pair", 4 );
DEFINE_STRING( BGl_string3378z00zz__srfi4z00, BgL_bgl_string3378za700za7za7_3662za7, "bint16", 6 );
DEFINE_STRING( BGl_string3379z00zz__srfi4z00, BgL_bgl_string3379za700za7za7_3663za7, "s16vector-set!", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u8vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl_za762u8vectorza7d2le3664z00, BGl_z62u8vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u64vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl_za762u64vectorza7d2za73665za7, BGl_z62u64vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3460z00zz__srfi4z00, BgL_bgl_string3460za700za7za7_3666za7, "&list->s8vector", 15 );
DEFINE_STRING( BGl_string3461z00zz__srfi4z00, BgL_bgl_string3461za700za7za7_3667za7, "&list->u8vector", 15 );
DEFINE_STRING( BGl_string3462z00zz__srfi4z00, BgL_bgl_string3462za700za7za7_3668za7, "&list->s16vector", 16 );
DEFINE_STRING( BGl_string3381z00zz__srfi4z00, BgL_bgl_string3381za700za7za7_3669za7, "make-u16vector", 14 );
DEFINE_STRING( BGl_string3463z00zz__srfi4z00, BgL_bgl_string3463za700za7za7_3670za7, "&list->u16vector", 16 );
DEFINE_STRING( BGl_string3382z00zz__srfi4z00, BgL_bgl_string3382za700za7za7_3671za7, "_make-u16vector", 15 );
DEFINE_STRING( BGl_string3464z00zz__srfi4z00, BgL_bgl_string3464za700za7za7_3672za7, "&list->s32vector", 16 );
DEFINE_STRING( BGl_string3383z00zz__srfi4z00, BgL_bgl_string3383za700za7za7_3673za7, "buint16", 7 );
DEFINE_STRING( BGl_string3465z00zz__srfi4z00, BgL_bgl_string3465za700za7za7_3674za7, "&list->u32vector", 16 );
DEFINE_STRING( BGl_string3384z00zz__srfi4z00, BgL_bgl_string3384za700za7za7_3675za7, "u16vector-set!", 14 );
DEFINE_STRING( BGl_string3466z00zz__srfi4z00, BgL_bgl_string3466za700za7za7_3676za7, "&list->s64vector", 16 );
DEFINE_STRING( BGl_string3467z00zz__srfi4z00, BgL_bgl_string3467za700za7za7_3677za7, "&list->u64vector", 16 );
DEFINE_STRING( BGl_string3386z00zz__srfi4z00, BgL_bgl_string3386za700za7za7_3678za7, "make-s32vector", 14 );
extern obj_t BGl_zd3s16zd2envz01zz__r4_numbers_6_5_fixnumz00;
DEFINE_STRING( BGl_string3468z00zz__srfi4z00, BgL_bgl_string3468za700za7za7_3679za7, "&list->f32vector", 16 );
DEFINE_STRING( BGl_string3387z00zz__srfi4z00, BgL_bgl_string3387za700za7za7_3680za7, "_make-s32vector", 15 );
DEFINE_STRING( BGl_string3469z00zz__srfi4z00, BgL_bgl_string3469za700za7za7_3681za7, "&list->f64vector", 16 );
DEFINE_STRING( BGl_string3388z00zz__srfi4z00, BgL_bgl_string3388za700za7za7_3682za7, "bint32", 6 );
DEFINE_STRING( BGl_string3389z00zz__srfi4z00, BgL_bgl_string3389za700za7za7_3683za7, "s32vector-set!", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s32vectorzd2copyz12zd2envz12zz__srfi4z00, BgL_bgl__s32vectorza7d2cop3684za7, opt_generic_entry, BGl__s32vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u8vectorzd2envzd2zz__srfi4z00, BgL_bgl_za762u8vectorza762za7za73685z00, va_generic_entry, BGl_z62u8vectorz62zz__srfi4z00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string3471z00zz__srfi4z00, BgL_bgl_string3471za700za7za7_3686za7, "s8vector-copy!", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u32vectorzf3zd2envz21zz__srfi4z00, BgL_bgl_za762u32vectorza7f3za73687za7, BGl_z62u32vectorzf3z91zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3472z00zz__srfi4z00, BgL_bgl_string3472za700za7za7_3688za7, "wrong number of arguments: [3..5] expected, provided", 52 );
DEFINE_STRING( BGl_string3391z00zz__srfi4z00, BgL_bgl_string3391za700za7za7_3689za7, "make-u32vector", 14 );
DEFINE_STRING( BGl_string3473z00zz__srfi4z00, BgL_bgl_string3473za700za7za7_3690za7, "_s8vector-copy!", 15 );
DEFINE_STRING( BGl_string3392z00zz__srfi4z00, BgL_bgl_string3392za700za7za7_3691za7, "_make-u32vector", 15 );
DEFINE_STRING( BGl_string3474z00zz__srfi4z00, BgL_bgl_string3474za700za7za7_3692za7, "Illegal target start index", 26 );
DEFINE_STRING( BGl_string3393z00zz__srfi4z00, BgL_bgl_string3393za700za7za7_3693za7, "buint32", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s64vectorzf3zd2envz21zz__srfi4z00, BgL_bgl_za762s64vectorza7f3za73694za7, BGl_z62s64vectorzf3z91zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3475z00zz__srfi4z00, BgL_bgl_string3475za700za7za7_3695za7, "Illegal source start index", 26 );
DEFINE_STRING( BGl_string3394z00zz__srfi4z00, BgL_bgl_string3394za700za7za7_3696za7, "u32vector-set!", 14 );
DEFINE_STRING( BGl_string3476z00zz__srfi4z00, BgL_bgl_string3476za700za7za7_3697za7, "Illegal source end index", 24 );
DEFINE_STRING( BGl_string3477z00zz__srfi4z00, BgL_bgl_string3477za700za7za7_3698za7, "Illegal source length", 21 );
DEFINE_STRING( BGl_string3396z00zz__srfi4z00, BgL_bgl_string3396za700za7za7_3699za7, "make-s64vector", 14 );
DEFINE_STRING( BGl_string3397z00zz__srfi4z00, BgL_bgl_string3397za700za7za7_3700za7, "_make-s64vector", 15 );
DEFINE_STRING( BGl_string3479z00zz__srfi4z00, BgL_bgl_string3479za700za7za7_3701za7, "u8vector-copy!", 14 );
DEFINE_STRING( BGl_string3398z00zz__srfi4z00, BgL_bgl_string3398za700za7za7_3702za7, "bint64", 6 );
DEFINE_STRING( BGl_string3399z00zz__srfi4z00, BgL_bgl_string3399za700za7za7_3703za7, "s64vector-set!", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2s32vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2s32vecto3704za7, opt_generic_entry, BGl__makezd2s32vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_STRING( BGl_string3480z00zz__srfi4z00, BgL_bgl_string3480za700za7za7_3705za7, "_u8vector-copy!", 15 );
DEFINE_STRING( BGl_string3482z00zz__srfi4z00, BgL_bgl_string3482za700za7za7_3706za7, "s16vector-copy!", 15 );
DEFINE_STRING( BGl_string3483z00zz__srfi4z00, BgL_bgl_string3483za700za7za7_3707za7, "_s16vector-copy!", 16 );
DEFINE_STRING( BGl_string3485z00zz__srfi4z00, BgL_bgl_string3485za700za7za7_3708za7, "u16vector-copy!", 15 );
DEFINE_STRING( BGl_string3486z00zz__srfi4z00, BgL_bgl_string3486za700za7za7_3709za7, "_u16vector-copy!", 16 );
DEFINE_STRING( BGl_string3488z00zz__srfi4z00, BgL_bgl_string3488za700za7za7_3710za7, "s32vector-copy!", 15 );
DEFINE_STRING( BGl_string3489z00zz__srfi4z00, BgL_bgl_string3489za700za7za7_3711za7, "_s32vector-copy!", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u16vectorzd2copyz12zd2envz12zz__srfi4z00, BgL_bgl__u16vectorza7d2cop3712za7, opt_generic_entry, BGl__u16vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u64vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl_za762u64vectorza7d2l3713z00, BGl_z62u64vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3491z00zz__srfi4z00, BgL_bgl_string3491za700za7za7_3714za7, "u32vector-copy!", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u16vectorzd2envzd2zz__srfi4z00, BgL_bgl_za762u16vectorza762za73715za7, va_generic_entry, BGl_z62u16vectorz62zz__srfi4z00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string3492z00zz__srfi4z00, BgL_bgl_string3492za700za7za7_3716za7, "_u32vector-copy!", 16 );
DEFINE_STRING( BGl_string3494z00zz__srfi4z00, BgL_bgl_string3494za700za7za7_3717za7, "s64vector-copy!", 15 );
DEFINE_STRING( BGl_string3495z00zz__srfi4z00, BgL_bgl_string3495za700za7za7_3718za7, "_s64vector-copy!", 16 );
DEFINE_STRING( BGl_string3497z00zz__srfi4z00, BgL_bgl_string3497za700za7za7_3719za7, "u64vector-copy!", 15 );
DEFINE_STRING( BGl_string3498z00zz__srfi4z00, BgL_bgl_string3498za700za7za7_3720za7, "_u64vector-copy!", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3s16vectorzd2envze3zz__srfi4z00, BgL_bgl_za762listza7d2za7e3s163721za7, BGl_z62listzd2ze3s16vectorz53zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u8vectorzf3zd2envz21zz__srfi4z00, BgL_bgl_za762u8vectorza7f3za793722za7, BGl_z62u8vectorzf3z91zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s8vectorzd2copyz12zd2envz12zz__srfi4z00, BgL_bgl__s8vectorza7d2copy3723za7, opt_generic_entry, BGl__s8vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hvectorzd2rangezd2errorzd2envzd2zz__srfi4z00, BgL_bgl_za762hvectorza7d2ran3724z00, BGl_z62hvectorzd2rangezd2errorz62zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u32vectorzd2copyz12zd2envz12zz__srfi4z00, BgL_bgl__u32vectorza7d2cop3725za7, opt_generic_entry, BGl__u32vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s32vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl_za762s32vectorza7d2l3726z00, BGl_z62s32vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s16vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl_za762s16vectorza7d2l3727z00, BGl_z62s16vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s16vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl_za762s16vectorza7d2s3728z00, BGl_z62s16vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2f32vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2f32vecto3729za7, opt_generic_entry, BGl__makezd2f32vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f64vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl_za762f64vectorza7d2l3730z00, BGl_z62f64vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s64vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl_za762s64vectorza7d2r3731z00, BGl_z62s64vectorzd2refzb0zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u64vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl_za762u64vectorza7d2r3732z00, BGl_z62u64vectorzd2refzb0zz__srfi4z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u8vectorzd2copyz12zd2envz12zz__srfi4z00, BgL_bgl__u8vectorza7d2copy3733za7, opt_generic_entry, BGl__u8vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u64vectorzd2envzd2zz__srfi4z00, BgL_bgl_za762u64vectorza762za73734za7, va_generic_entry, BGl_z62u64vectorz62zz__srfi4z00, BUNSPEC, -1 );
extern obj_t BGl_zd3u32zd2envz01zz__r4_numbers_6_5_fixnumz00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s16vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl_za762s16vectorza7d2za73735za7, BGl_z62s16vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3s64vectorzd2envze3zz__srfi4z00, BgL_bgl_za762listza7d2za7e3s643736za7, BGl_z62listzd2ze3s64vectorz53zz__srfi4z00, 0L, BUNSPEC, 1 );
extern obj_t BGl_zd3u8zd2envz01zz__r4_numbers_6_5_fixnumz00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s32vectorzf3zd2envz21zz__srfi4z00, BgL_bgl_za762s32vectorza7f3za73737za7, BGl_z62s32vectorzf3z91zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u16vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl_za762u16vectorza7d2s3738z00, BGl_z62u16vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2s8vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2s8vector3739za7, opt_generic_entry, BGl__makezd2s8vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s32vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl_za762s32vectorza7d2za73740za7, BGl_z62s32vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s32vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl_za762s32vectorza7d2s3741z00, BGl_z62s32vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f64vectorzd2copyz12zd2envz12zz__srfi4z00, BgL_bgl__f64vectorza7d2cop3742za7, opt_generic_entry, BGl__f64vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3u32vectorzd2envze3zz__srfi4z00, BgL_bgl_za762listza7d2za7e3u323743za7, BGl_z62listzd2ze3u32vectorz53zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3f64vectorzd2envze3zz__srfi4z00, BgL_bgl_za762listza7d2za7e3f643744za7, BGl_z62listzd2ze3f64vectorz53zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u16vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl_za762u16vectorza7d2za73745za7, BGl_z62u16vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s8vectorzd2envzd2zz__srfi4z00, BgL_bgl_za762s8vectorza762za7za73746z00, va_generic_entry, BGl_z62s8vectorz62zz__srfi4z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u32vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl_za762u32vectorza7d2l3747z00, BGl_z62u32vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u16vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl_za762u16vectorza7d2l3748z00, BGl_z62u16vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u32vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl_za762u32vectorza7d2s3749z00, BGl_z62u32vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s16vectorzd2envzd2zz__srfi4z00, BgL_bgl_za762s16vectorza762za73750za7, va_generic_entry, BGl_z62s16vectorz62zz__srfi4z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f32vectorzd2setz12zd2envz12zz__srfi4z00, BgL_bgl_za762f32vectorza7d2s3751z00, BGl_z62f32vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s8vectorzf3zd2envz21zz__srfi4z00, BgL_bgl_za762s8vectorza7f3za793752za7, BGl_z62s8vectorzf3z91zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2u16vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2u16vecto3753za7, opt_generic_entry, BGl__makezd2u16vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s8vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl_za762s8vectorza7d2za7e3754za7, BGl_z62s8vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f32vectorzd2refzd2envz00zz__srfi4z00, BgL_bgl_za762f32vectorza7d2r3755z00, BGl_z62f32vectorzd2refzb0zz__srfi4z00, 0L, BUNSPEC, 2 );
extern obj_t BGl_zd3u16zd2envz01zz__r4_numbers_6_5_fixnumz00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u32vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl_za762u32vectorza7d2za73756za7, BGl_z62u32vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1 );
extern obj_t BGl_zd3flzd2envz01zz__r4_numbers_6_5_flonumz00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f32vectorzd2lengthzd2envz00zz__srfi4z00, BgL_bgl_za762f32vectorza7d2l3757z00, BGl_z62f32vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u8vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl_za762u8vectorza7d2za7e3758za7, BGl_z62u8vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_s64vectorzd2envzd2zz__srfi4z00, BgL_bgl_za762s64vectorza762za73759za7, va_generic_entry, BGl_z62s64vectorz62zz__srfi4z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2u64vectorzd2envz00zz__srfi4z00, BgL_bgl__makeza7d2u64vecto3760za7, opt_generic_entry, BGl__makezd2u64vectorzd2zz__srfi4z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_u32vectorzd2envzd2zz__srfi4z00, BgL_bgl_za762u32vectorza762za73761za7, va_generic_entry, BGl_z62u32vectorz62zz__srfi4z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f64vectorzd2ze3listzd2envze3zz__srfi4z00, BgL_bgl_za762f64vectorza7d2za73762za7, BGl_z62f64vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_homogeneouszd2vectorzd2infozd2envzd2zz__srfi4z00, BgL_bgl_za762homogeneousza7d3763z00, BGl_z62homogeneouszd2vectorzd2infoz62zz__srfi4z00, 0L, BUNSPEC, 1 );
extern obj_t BGl_zd3s64zd2envz01zz__r4_numbers_6_5_fixnumz00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3s32vectorzd2envze3zz__srfi4z00, BgL_bgl_za762listza7d2za7e3s323764za7, BGl_z62listzd2ze3s32vectorz53zz__srfi4z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_f64vectorzd2envzd2zz__srfi4z00, BgL_bgl_za762f64vectorza762za73765za7, va_generic_entry, BGl_z62f64vectorz62zz__srfi4z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3u8vectorzd2envze3zz__srfi4z00, BgL_bgl_za762listza7d2za7e3u8v3766za7, BGl_z62listzd2ze3u8vectorz53zz__srfi4z00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol3370z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3375z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3380z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3385z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3470z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3390z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3395z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3478z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3481z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3484z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3487z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3490z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3493z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3496z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3499z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3400z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3320z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3322z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3405z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3324z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3326z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3328z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3410z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3330z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3332z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3334z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3336z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3338z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3502z00zz__srfi4z00) );
ADD_ROOT( (void *)(&BGl_symbol3363z00zz__srfi4z00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__srfi4z00(long BgL_checksumz00_4529, char * BgL_fromz00_4530)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__srfi4z00))
{ 
BGl_requirezd2initializa7ationz75zz__srfi4z00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__srfi4z00(); 
BGl_cnstzd2initzd2zz__srfi4z00(); 
BGl_importedzd2moduleszd2initz00zz__srfi4z00(); 
return 
BGl_methodzd2initzd2zz__srfi4z00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__srfi4z00()
{
{ /* Llib/srfi4.scm 15 */
BGl_symbol3320z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3321z00zz__srfi4z00); 
BGl_symbol3322z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3323z00zz__srfi4z00); 
BGl_symbol3324z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3325z00zz__srfi4z00); 
BGl_symbol3326z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3327z00zz__srfi4z00); 
BGl_symbol3328z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3329z00zz__srfi4z00); 
BGl_symbol3330z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3331z00zz__srfi4z00); 
BGl_symbol3332z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3333z00zz__srfi4z00); 
BGl_symbol3334z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3335z00zz__srfi4z00); 
BGl_symbol3336z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3337z00zz__srfi4z00); 
BGl_symbol3338z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3339z00zz__srfi4z00); 
BGl_symbol3363z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3364z00zz__srfi4z00); 
BGl_symbol3370z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3371z00zz__srfi4z00); 
BGl_symbol3375z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3376z00zz__srfi4z00); 
BGl_symbol3380z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3381z00zz__srfi4z00); 
BGl_symbol3385z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3386z00zz__srfi4z00); 
BGl_symbol3390z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3391z00zz__srfi4z00); 
BGl_symbol3395z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3396z00zz__srfi4z00); 
BGl_symbol3400z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3401z00zz__srfi4z00); 
BGl_symbol3405z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3406z00zz__srfi4z00); 
BGl_symbol3410z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3411z00zz__srfi4z00); 
BGl_symbol3470z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3471z00zz__srfi4z00); 
BGl_symbol3478z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3479z00zz__srfi4z00); 
BGl_symbol3481z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3482z00zz__srfi4z00); 
BGl_symbol3484z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3485z00zz__srfi4z00); 
BGl_symbol3487z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3488z00zz__srfi4z00); 
BGl_symbol3490z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3491z00zz__srfi4z00); 
BGl_symbol3493z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3494z00zz__srfi4z00); 
BGl_symbol3496z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3497z00zz__srfi4z00); 
BGl_symbol3499z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3500z00zz__srfi4z00); 
return ( 
BGl_symbol3502z00zz__srfi4z00 = 
bstring_to_symbol(BGl_string3503z00zz__srfi4z00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__srfi4z00()
{
{ /* Llib/srfi4.scm 15 */
return 
bgl_gc_roots_register();} 

}



/* homogeneous-vector? */
BGL_EXPORTED_DEF obj_t BGl_homogeneouszd2vectorzf3z21zz__srfi4z00(obj_t BgL_xz00_3)
{
{ /* Llib/srfi4.scm 569 */
return 
BBOOL(
BGL_HVECTORP(BgL_xz00_3));} 

}



/* &homogeneous-vector? */
obj_t BGl_z62homogeneouszd2vectorzf3z43zz__srfi4z00(obj_t BgL_envz00_3210, obj_t BgL_xz00_3211)
{
{ /* Llib/srfi4.scm 569 */
return 
BGl_homogeneouszd2vectorzf3z21zz__srfi4z00(BgL_xz00_3211);} 

}



/* s8vector? */
BGL_EXPORTED_DEF bool_t BGl_s8vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_4)
{
{ /* Llib/srfi4.scm 570 */
return 
BGL_S8VECTORP(BgL_xz00_4);} 

}



/* &s8vector? */
obj_t BGl_z62s8vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3212, obj_t BgL_xz00_3213)
{
{ /* Llib/srfi4.scm 570 */
return 
BBOOL(
BGl_s8vectorzf3zf3zz__srfi4z00(BgL_xz00_3213));} 

}



/* u8vector? */
BGL_EXPORTED_DEF bool_t BGl_u8vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_5)
{
{ /* Llib/srfi4.scm 571 */
return 
BGL_U8VECTORP(BgL_xz00_5);} 

}



/* &u8vector? */
obj_t BGl_z62u8vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3214, obj_t BgL_xz00_3215)
{
{ /* Llib/srfi4.scm 571 */
return 
BBOOL(
BGl_u8vectorzf3zf3zz__srfi4z00(BgL_xz00_3215));} 

}



/* s16vector? */
BGL_EXPORTED_DEF bool_t BGl_s16vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_6)
{
{ /* Llib/srfi4.scm 572 */
return 
BGL_S16VECTORP(BgL_xz00_6);} 

}



/* &s16vector? */
obj_t BGl_z62s16vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3216, obj_t BgL_xz00_3217)
{
{ /* Llib/srfi4.scm 572 */
return 
BBOOL(
BGl_s16vectorzf3zf3zz__srfi4z00(BgL_xz00_3217));} 

}



/* u16vector? */
BGL_EXPORTED_DEF bool_t BGl_u16vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_7)
{
{ /* Llib/srfi4.scm 573 */
return 
BGL_U16VECTORP(BgL_xz00_7);} 

}



/* &u16vector? */
obj_t BGl_z62u16vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3218, obj_t BgL_xz00_3219)
{
{ /* Llib/srfi4.scm 573 */
return 
BBOOL(
BGl_u16vectorzf3zf3zz__srfi4z00(BgL_xz00_3219));} 

}



/* s32vector? */
BGL_EXPORTED_DEF bool_t BGl_s32vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_8)
{
{ /* Llib/srfi4.scm 574 */
return 
BGL_S32VECTORP(BgL_xz00_8);} 

}



/* &s32vector? */
obj_t BGl_z62s32vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3220, obj_t BgL_xz00_3221)
{
{ /* Llib/srfi4.scm 574 */
return 
BBOOL(
BGl_s32vectorzf3zf3zz__srfi4z00(BgL_xz00_3221));} 

}



/* u32vector? */
BGL_EXPORTED_DEF bool_t BGl_u32vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_9)
{
{ /* Llib/srfi4.scm 575 */
return 
BGL_U32VECTORP(BgL_xz00_9);} 

}



/* &u32vector? */
obj_t BGl_z62u32vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3222, obj_t BgL_xz00_3223)
{
{ /* Llib/srfi4.scm 575 */
return 
BBOOL(
BGl_u32vectorzf3zf3zz__srfi4z00(BgL_xz00_3223));} 

}



/* s64vector? */
BGL_EXPORTED_DEF bool_t BGl_s64vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_10)
{
{ /* Llib/srfi4.scm 576 */
return 
BGL_S64VECTORP(BgL_xz00_10);} 

}



/* &s64vector? */
obj_t BGl_z62s64vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3224, obj_t BgL_xz00_3225)
{
{ /* Llib/srfi4.scm 576 */
return 
BBOOL(
BGl_s64vectorzf3zf3zz__srfi4z00(BgL_xz00_3225));} 

}



/* u64vector? */
BGL_EXPORTED_DEF bool_t BGl_u64vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_11)
{
{ /* Llib/srfi4.scm 577 */
return 
BGL_U64VECTORP(BgL_xz00_11);} 

}



/* &u64vector? */
obj_t BGl_z62u64vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3226, obj_t BgL_xz00_3227)
{
{ /* Llib/srfi4.scm 577 */
return 
BBOOL(
BGl_u64vectorzf3zf3zz__srfi4z00(BgL_xz00_3227));} 

}



/* f32vector? */
BGL_EXPORTED_DEF bool_t BGl_f32vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_12)
{
{ /* Llib/srfi4.scm 578 */
return 
BGL_F32VECTORP(BgL_xz00_12);} 

}



/* &f32vector? */
obj_t BGl_z62f32vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3228, obj_t BgL_xz00_3229)
{
{ /* Llib/srfi4.scm 578 */
return 
BBOOL(
BGl_f32vectorzf3zf3zz__srfi4z00(BgL_xz00_3229));} 

}



/* f64vector? */
BGL_EXPORTED_DEF bool_t BGl_f64vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_13)
{
{ /* Llib/srfi4.scm 579 */
return 
BGL_F64VECTORP(BgL_xz00_13);} 

}



/* &f64vector? */
obj_t BGl_z62f64vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3230, obj_t BgL_xz00_3231)
{
{ /* Llib/srfi4.scm 579 */
return 
BBOOL(
BGl_f64vectorzf3zf3zz__srfi4z00(BgL_xz00_3231));} 

}



/* homogeneous-vector-info */
BGL_EXPORTED_DEF obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t BgL_oz00_14)
{
{ /* Llib/srfi4.scm 584 */
if(
BGL_HVECTORP(BgL_oz00_14))
{ 

{ /* Llib/srfi4.scm 586 */
int BgL_aux1043z00_1286;
BgL_aux1043z00_1286 = 
BGL_HVECTOR_IDENT(BgL_oz00_14); 
switch( 
(long)(BgL_aux1043z00_1286)) { case ((long)0) : 

{ /* Llib/srfi4.scm 590 */
obj_t BgL_val0_1143z00_1288;
BgL_val0_1143z00_1288 = BGl_symbol3320z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 590 */
int BgL_res2093z00_2403;
{ /* Llib/srfi4.scm 590 */
int BgL_tmpz00_4605;
BgL_tmpz00_4605 = 
(int)(((long)5)); 
BgL_res2093z00_2403 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4605); } BgL_res2093z00_2403; } 
{ /* Llib/srfi4.scm 590 */
obj_t BgL_auxz00_4610;int BgL_tmpz00_4608;
BgL_auxz00_4610 = 
BINT(((long)1)); 
BgL_tmpz00_4608 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4608, BgL_auxz00_4610); } 
{ /* Llib/srfi4.scm 590 */
int BgL_tmpz00_4613;
BgL_tmpz00_4613 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4613, BGl_s8vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 590 */
int BgL_tmpz00_4616;
BgL_tmpz00_4616 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4616, BGl_s8vectorzd2setz12zd2envz12zz__srfi4z00); } 
{ /* Llib/srfi4.scm 590 */
int BgL_tmpz00_4619;
BgL_tmpz00_4619 = 
(int)(((long)4)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4619, BGl_zd3s8zd2envz01zz__r4_numbers_6_5_fixnumz00); } 
return BgL_val0_1143z00_1288;} break;case ((long)1) : 

{ /* Llib/srfi4.scm 592 */
obj_t BgL_val0_1148z00_1293;
BgL_val0_1148z00_1293 = BGl_symbol3322z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 592 */
int BgL_res2094z00_2404;
{ /* Llib/srfi4.scm 592 */
int BgL_tmpz00_4622;
BgL_tmpz00_4622 = 
(int)(((long)5)); 
BgL_res2094z00_2404 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4622); } BgL_res2094z00_2404; } 
{ /* Llib/srfi4.scm 592 */
obj_t BgL_auxz00_4627;int BgL_tmpz00_4625;
BgL_auxz00_4627 = 
BINT(((long)1)); 
BgL_tmpz00_4625 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4625, BgL_auxz00_4627); } 
{ /* Llib/srfi4.scm 592 */
int BgL_tmpz00_4630;
BgL_tmpz00_4630 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4630, BGl_u8vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 592 */
int BgL_tmpz00_4633;
BgL_tmpz00_4633 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4633, BGl_u8vectorzd2setz12zd2envz12zz__srfi4z00); } 
{ /* Llib/srfi4.scm 592 */
int BgL_tmpz00_4636;
BgL_tmpz00_4636 = 
(int)(((long)4)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4636, BGl_zd3u8zd2envz01zz__r4_numbers_6_5_fixnumz00); } 
return BgL_val0_1148z00_1293;} break;case ((long)2) : 

{ /* Llib/srfi4.scm 594 */
obj_t BgL_val0_1153z00_1298;
BgL_val0_1153z00_1298 = BGl_symbol3324z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 594 */
int BgL_res2095z00_2405;
{ /* Llib/srfi4.scm 594 */
int BgL_tmpz00_4639;
BgL_tmpz00_4639 = 
(int)(((long)5)); 
BgL_res2095z00_2405 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4639); } BgL_res2095z00_2405; } 
{ /* Llib/srfi4.scm 594 */
obj_t BgL_auxz00_4644;int BgL_tmpz00_4642;
BgL_auxz00_4644 = 
BINT(((long)2)); 
BgL_tmpz00_4642 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4642, BgL_auxz00_4644); } 
{ /* Llib/srfi4.scm 594 */
int BgL_tmpz00_4647;
BgL_tmpz00_4647 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4647, BGl_s16vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 594 */
int BgL_tmpz00_4650;
BgL_tmpz00_4650 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4650, BGl_s16vectorzd2setz12zd2envz12zz__srfi4z00); } 
{ /* Llib/srfi4.scm 594 */
int BgL_tmpz00_4653;
BgL_tmpz00_4653 = 
(int)(((long)4)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4653, BGl_zd3s16zd2envz01zz__r4_numbers_6_5_fixnumz00); } 
return BgL_val0_1153z00_1298;} break;case ((long)3) : 

{ /* Llib/srfi4.scm 596 */
obj_t BgL_val0_1158z00_1303;
BgL_val0_1158z00_1303 = BGl_symbol3326z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 596 */
int BgL_res2096z00_2406;
{ /* Llib/srfi4.scm 596 */
int BgL_tmpz00_4656;
BgL_tmpz00_4656 = 
(int)(((long)5)); 
BgL_res2096z00_2406 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4656); } BgL_res2096z00_2406; } 
{ /* Llib/srfi4.scm 596 */
obj_t BgL_auxz00_4661;int BgL_tmpz00_4659;
BgL_auxz00_4661 = 
BINT(((long)2)); 
BgL_tmpz00_4659 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4659, BgL_auxz00_4661); } 
{ /* Llib/srfi4.scm 596 */
int BgL_tmpz00_4664;
BgL_tmpz00_4664 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4664, BGl_u16vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 596 */
int BgL_tmpz00_4667;
BgL_tmpz00_4667 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4667, BGl_u16vectorzd2setz12zd2envz12zz__srfi4z00); } 
{ /* Llib/srfi4.scm 596 */
int BgL_tmpz00_4670;
BgL_tmpz00_4670 = 
(int)(((long)4)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4670, BGl_zd3u16zd2envz01zz__r4_numbers_6_5_fixnumz00); } 
return BgL_val0_1158z00_1303;} break;case ((long)4) : 

{ /* Llib/srfi4.scm 598 */
obj_t BgL_val0_1163z00_1308;
BgL_val0_1163z00_1308 = BGl_symbol3328z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 598 */
int BgL_res2097z00_2407;
{ /* Llib/srfi4.scm 598 */
int BgL_tmpz00_4673;
BgL_tmpz00_4673 = 
(int)(((long)5)); 
BgL_res2097z00_2407 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4673); } BgL_res2097z00_2407; } 
{ /* Llib/srfi4.scm 598 */
obj_t BgL_auxz00_4678;int BgL_tmpz00_4676;
BgL_auxz00_4678 = 
BINT(((long)4)); 
BgL_tmpz00_4676 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4676, BgL_auxz00_4678); } 
{ /* Llib/srfi4.scm 598 */
int BgL_tmpz00_4681;
BgL_tmpz00_4681 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4681, BGl_s32vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 598 */
int BgL_tmpz00_4684;
BgL_tmpz00_4684 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4684, BGl_s32vectorzd2setz12zd2envz12zz__srfi4z00); } 
{ /* Llib/srfi4.scm 598 */
int BgL_tmpz00_4687;
BgL_tmpz00_4687 = 
(int)(((long)4)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4687, BGl_zd3s32zd2envz01zz__r4_numbers_6_5_fixnumz00); } 
return BgL_val0_1163z00_1308;} break;case ((long)5) : 

{ /* Llib/srfi4.scm 600 */
obj_t BgL_val0_1168z00_1313;
BgL_val0_1168z00_1313 = BGl_symbol3330z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 600 */
int BgL_res2098z00_2408;
{ /* Llib/srfi4.scm 600 */
int BgL_tmpz00_4690;
BgL_tmpz00_4690 = 
(int)(((long)5)); 
BgL_res2098z00_2408 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4690); } BgL_res2098z00_2408; } 
{ /* Llib/srfi4.scm 600 */
obj_t BgL_auxz00_4695;int BgL_tmpz00_4693;
BgL_auxz00_4695 = 
BINT(((long)4)); 
BgL_tmpz00_4693 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4693, BgL_auxz00_4695); } 
{ /* Llib/srfi4.scm 600 */
int BgL_tmpz00_4698;
BgL_tmpz00_4698 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4698, BGl_u32vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 600 */
int BgL_tmpz00_4701;
BgL_tmpz00_4701 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4701, BGl_u32vectorzd2setz12zd2envz12zz__srfi4z00); } 
{ /* Llib/srfi4.scm 600 */
int BgL_tmpz00_4704;
BgL_tmpz00_4704 = 
(int)(((long)4)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4704, BGl_zd3u32zd2envz01zz__r4_numbers_6_5_fixnumz00); } 
return BgL_val0_1168z00_1313;} break;case ((long)6) : 

{ /* Llib/srfi4.scm 602 */
obj_t BgL_val0_1173z00_1318;
BgL_val0_1173z00_1318 = BGl_symbol3332z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 602 */
int BgL_res2099z00_2409;
{ /* Llib/srfi4.scm 602 */
int BgL_tmpz00_4707;
BgL_tmpz00_4707 = 
(int)(((long)5)); 
BgL_res2099z00_2409 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4707); } BgL_res2099z00_2409; } 
{ /* Llib/srfi4.scm 602 */
obj_t BgL_auxz00_4712;int BgL_tmpz00_4710;
BgL_auxz00_4712 = 
BINT(((long)8)); 
BgL_tmpz00_4710 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4710, BgL_auxz00_4712); } 
{ /* Llib/srfi4.scm 602 */
int BgL_tmpz00_4715;
BgL_tmpz00_4715 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4715, BGl_s64vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 602 */
int BgL_tmpz00_4718;
BgL_tmpz00_4718 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4718, BGl_s64vectorzd2setz12zd2envz12zz__srfi4z00); } 
{ /* Llib/srfi4.scm 602 */
int BgL_tmpz00_4721;
BgL_tmpz00_4721 = 
(int)(((long)4)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4721, BGl_zd3s64zd2envz01zz__r4_numbers_6_5_fixnumz00); } 
return BgL_val0_1173z00_1318;} break;case ((long)7) : 

{ /* Llib/srfi4.scm 604 */
obj_t BgL_val0_1178z00_1323;
BgL_val0_1178z00_1323 = BGl_symbol3334z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 604 */
int BgL_res2100z00_2410;
{ /* Llib/srfi4.scm 604 */
int BgL_tmpz00_4724;
BgL_tmpz00_4724 = 
(int)(((long)5)); 
BgL_res2100z00_2410 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4724); } BgL_res2100z00_2410; } 
{ /* Llib/srfi4.scm 604 */
obj_t BgL_auxz00_4729;int BgL_tmpz00_4727;
BgL_auxz00_4729 = 
BINT(((long)8)); 
BgL_tmpz00_4727 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4727, BgL_auxz00_4729); } 
{ /* Llib/srfi4.scm 604 */
int BgL_tmpz00_4732;
BgL_tmpz00_4732 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4732, BGl_u64vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 604 */
int BgL_tmpz00_4735;
BgL_tmpz00_4735 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4735, BGl_u64vectorzd2setz12zd2envz12zz__srfi4z00); } 
{ /* Llib/srfi4.scm 604 */
int BgL_tmpz00_4738;
BgL_tmpz00_4738 = 
(int)(((long)4)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4738, BGl_zd3u64zd2envz01zz__r4_numbers_6_5_fixnumz00); } 
return BgL_val0_1178z00_1323;} break;case ((long)8) : 

{ /* Llib/srfi4.scm 606 */
obj_t BgL_val0_1183z00_1328;
BgL_val0_1183z00_1328 = BGl_symbol3336z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 606 */
int BgL_res2101z00_2411;
{ /* Llib/srfi4.scm 606 */
int BgL_tmpz00_4741;
BgL_tmpz00_4741 = 
(int)(((long)5)); 
BgL_res2101z00_2411 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4741); } BgL_res2101z00_2411; } 
{ /* Llib/srfi4.scm 606 */
obj_t BgL_auxz00_4746;int BgL_tmpz00_4744;
BgL_auxz00_4746 = 
BINT(((long)4)); 
BgL_tmpz00_4744 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4744, BgL_auxz00_4746); } 
{ /* Llib/srfi4.scm 606 */
int BgL_tmpz00_4749;
BgL_tmpz00_4749 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4749, BGl_f32vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 606 */
int BgL_tmpz00_4752;
BgL_tmpz00_4752 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4752, BGl_f32vectorzd2setz12zd2envz12zz__srfi4z00); } 
{ /* Llib/srfi4.scm 606 */
int BgL_tmpz00_4755;
BgL_tmpz00_4755 = 
(int)(((long)4)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4755, BGl_zd3flzd2envz01zz__r4_numbers_6_5_flonumz00); } 
return BgL_val0_1183z00_1328;} break;case ((long)9) : 

{ /* Llib/srfi4.scm 608 */
obj_t BgL_val0_1188z00_1333;
BgL_val0_1188z00_1333 = BGl_symbol3338z00zz__srfi4z00; 
{ /* Llib/srfi4.scm 608 */
int BgL_res2102z00_2412;
{ /* Llib/srfi4.scm 608 */
int BgL_tmpz00_4758;
BgL_tmpz00_4758 = 
(int)(((long)5)); 
BgL_res2102z00_2412 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4758); } BgL_res2102z00_2412; } 
{ /* Llib/srfi4.scm 608 */
obj_t BgL_auxz00_4763;int BgL_tmpz00_4761;
BgL_auxz00_4763 = 
BINT(((long)8)); 
BgL_tmpz00_4761 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4761, BgL_auxz00_4763); } 
{ /* Llib/srfi4.scm 608 */
int BgL_tmpz00_4766;
BgL_tmpz00_4766 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4766, BGl_f64vectorzd2refzd2envz00zz__srfi4z00); } 
{ /* Llib/srfi4.scm 608 */
int BgL_tmpz00_4769;
BgL_tmpz00_4769 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4769, BGl_f64vectorzd2setz12zd2envz12zz__srfi4z00); } 
{ /* Llib/srfi4.scm 608 */
int BgL_tmpz00_4772;
BgL_tmpz00_4772 = 
(int)(((long)4)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_4772, BGl_zd3flzd2envz01zz__r4_numbers_6_5_flonumz00); } 
return BgL_val0_1188z00_1333;} break;
default: 
{ /* Llib/srfi4.scm 611 */
int BgL_arg1387z00_1338;
BgL_arg1387z00_1338 = 
BGL_HVECTOR_IDENT(BgL_oz00_14); 
return 
BGl_errorz00zz__errorz00(BGl_string3318z00zz__srfi4z00, BGl_string3319z00zz__srfi4z00, 
BINT(BgL_arg1387z00_1338));} } } }  else 
{ /* Llib/srfi4.scm 585 */
return 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3318z00zz__srfi4z00, BGl_string3340z00zz__srfi4z00, BgL_oz00_14);} } 

}



/* &homogeneous-vector-info */
obj_t BGl_z62homogeneouszd2vectorzd2infoz62zz__srfi4z00(obj_t BgL_envz00_3232, obj_t BgL_oz00_3233)
{
{ /* Llib/srfi4.scm 584 */
return 
BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(BgL_oz00_3233);} 

}



/* s8vector-length */
BGL_EXPORTED_DEF long BGl_s8vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_15)
{
{ /* Llib/srfi4.scm 617 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_15);} 

}



/* &s8vector-length */
obj_t BGl_z62s8vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3331, obj_t BgL_xz00_3332)
{
{ /* Llib/srfi4.scm 617 */
{ /* Llib/srfi4.scm 617 */
long BgL_tmpz00_4783;
{ /* Llib/srfi4.scm 617 */
obj_t BgL_auxz00_4784;
if(
BGL_S8VECTORP(BgL_xz00_3332))
{ /* Llib/srfi4.scm 617 */
BgL_auxz00_4784 = BgL_xz00_3332
; }  else 
{ 
obj_t BgL_auxz00_4787;
BgL_auxz00_4787 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)25371)), BGl_string3342z00zz__srfi4z00, BGl_string3343z00zz__srfi4z00, BgL_xz00_3332); 
FAILURE(BgL_auxz00_4787,BFALSE,BFALSE);} 
BgL_tmpz00_4783 = 
BGl_s8vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4784); } 
return 
BINT(BgL_tmpz00_4783);} } 

}



/* u8vector-length */
BGL_EXPORTED_DEF long BGl_u8vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_16)
{
{ /* Llib/srfi4.scm 618 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_16);} 

}



/* &u8vector-length */
obj_t BGl_z62u8vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3333, obj_t BgL_xz00_3334)
{
{ /* Llib/srfi4.scm 618 */
{ /* Llib/srfi4.scm 618 */
long BgL_tmpz00_4794;
{ /* Llib/srfi4.scm 618 */
obj_t BgL_auxz00_4795;
if(
BGL_U8VECTORP(BgL_xz00_3334))
{ /* Llib/srfi4.scm 618 */
BgL_auxz00_4795 = BgL_xz00_3334
; }  else 
{ 
obj_t BgL_auxz00_4798;
BgL_auxz00_4798 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)25427)), BGl_string3344z00zz__srfi4z00, BGl_string3345z00zz__srfi4z00, BgL_xz00_3334); 
FAILURE(BgL_auxz00_4798,BFALSE,BFALSE);} 
BgL_tmpz00_4794 = 
BGl_u8vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4795); } 
return 
BINT(BgL_tmpz00_4794);} } 

}



/* s16vector-length */
BGL_EXPORTED_DEF long BGl_s16vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_17)
{
{ /* Llib/srfi4.scm 619 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_17);} 

}



/* &s16vector-length */
obj_t BGl_z62s16vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3335, obj_t BgL_xz00_3336)
{
{ /* Llib/srfi4.scm 619 */
{ /* Llib/srfi4.scm 619 */
long BgL_tmpz00_4805;
{ /* Llib/srfi4.scm 619 */
obj_t BgL_auxz00_4806;
if(
BGL_S16VECTORP(BgL_xz00_3336))
{ /* Llib/srfi4.scm 619 */
BgL_auxz00_4806 = BgL_xz00_3336
; }  else 
{ 
obj_t BgL_auxz00_4809;
BgL_auxz00_4809 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)25484)), BGl_string3346z00zz__srfi4z00, BGl_string3347z00zz__srfi4z00, BgL_xz00_3336); 
FAILURE(BgL_auxz00_4809,BFALSE,BFALSE);} 
BgL_tmpz00_4805 = 
BGl_s16vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4806); } 
return 
BINT(BgL_tmpz00_4805);} } 

}



/* u16vector-length */
BGL_EXPORTED_DEF long BGl_u16vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_18)
{
{ /* Llib/srfi4.scm 620 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_18);} 

}



/* &u16vector-length */
obj_t BGl_z62u16vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3337, obj_t BgL_xz00_3338)
{
{ /* Llib/srfi4.scm 620 */
{ /* Llib/srfi4.scm 620 */
long BgL_tmpz00_4816;
{ /* Llib/srfi4.scm 620 */
obj_t BgL_auxz00_4817;
if(
BGL_U16VECTORP(BgL_xz00_3338))
{ /* Llib/srfi4.scm 620 */
BgL_auxz00_4817 = BgL_xz00_3338
; }  else 
{ 
obj_t BgL_auxz00_4820;
BgL_auxz00_4820 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)25541)), BGl_string3348z00zz__srfi4z00, BGl_string3349z00zz__srfi4z00, BgL_xz00_3338); 
FAILURE(BgL_auxz00_4820,BFALSE,BFALSE);} 
BgL_tmpz00_4816 = 
BGl_u16vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4817); } 
return 
BINT(BgL_tmpz00_4816);} } 

}



/* s32vector-length */
BGL_EXPORTED_DEF long BGl_s32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_19)
{
{ /* Llib/srfi4.scm 621 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_19);} 

}



/* &s32vector-length */
obj_t BGl_z62s32vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3339, obj_t BgL_xz00_3340)
{
{ /* Llib/srfi4.scm 621 */
{ /* Llib/srfi4.scm 621 */
long BgL_tmpz00_4827;
{ /* Llib/srfi4.scm 621 */
obj_t BgL_auxz00_4828;
if(
BGL_S32VECTORP(BgL_xz00_3340))
{ /* Llib/srfi4.scm 621 */
BgL_auxz00_4828 = BgL_xz00_3340
; }  else 
{ 
obj_t BgL_auxz00_4831;
BgL_auxz00_4831 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)25598)), BGl_string3350z00zz__srfi4z00, BGl_string3351z00zz__srfi4z00, BgL_xz00_3340); 
FAILURE(BgL_auxz00_4831,BFALSE,BFALSE);} 
BgL_tmpz00_4827 = 
BGl_s32vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4828); } 
return 
BINT(BgL_tmpz00_4827);} } 

}



/* u32vector-length */
BGL_EXPORTED_DEF long BGl_u32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_20)
{
{ /* Llib/srfi4.scm 622 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_20);} 

}



/* &u32vector-length */
obj_t BGl_z62u32vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3341, obj_t BgL_xz00_3342)
{
{ /* Llib/srfi4.scm 622 */
{ /* Llib/srfi4.scm 622 */
long BgL_tmpz00_4838;
{ /* Llib/srfi4.scm 622 */
obj_t BgL_auxz00_4839;
if(
BGL_U32VECTORP(BgL_xz00_3342))
{ /* Llib/srfi4.scm 622 */
BgL_auxz00_4839 = BgL_xz00_3342
; }  else 
{ 
obj_t BgL_auxz00_4842;
BgL_auxz00_4842 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)25655)), BGl_string3352z00zz__srfi4z00, BGl_string3353z00zz__srfi4z00, BgL_xz00_3342); 
FAILURE(BgL_auxz00_4842,BFALSE,BFALSE);} 
BgL_tmpz00_4838 = 
BGl_u32vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4839); } 
return 
BINT(BgL_tmpz00_4838);} } 

}



/* s64vector-length */
BGL_EXPORTED_DEF long BGl_s64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_21)
{
{ /* Llib/srfi4.scm 623 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_21);} 

}



/* &s64vector-length */
obj_t BGl_z62s64vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3343, obj_t BgL_xz00_3344)
{
{ /* Llib/srfi4.scm 623 */
{ /* Llib/srfi4.scm 623 */
long BgL_tmpz00_4849;
{ /* Llib/srfi4.scm 623 */
obj_t BgL_auxz00_4850;
if(
BGL_S64VECTORP(BgL_xz00_3344))
{ /* Llib/srfi4.scm 623 */
BgL_auxz00_4850 = BgL_xz00_3344
; }  else 
{ 
obj_t BgL_auxz00_4853;
BgL_auxz00_4853 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)25712)), BGl_string3354z00zz__srfi4z00, BGl_string3355z00zz__srfi4z00, BgL_xz00_3344); 
FAILURE(BgL_auxz00_4853,BFALSE,BFALSE);} 
BgL_tmpz00_4849 = 
BGl_s64vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4850); } 
return 
BINT(BgL_tmpz00_4849);} } 

}



/* u64vector-length */
BGL_EXPORTED_DEF long BGl_u64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_22)
{
{ /* Llib/srfi4.scm 624 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_22);} 

}



/* &u64vector-length */
obj_t BGl_z62u64vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3345, obj_t BgL_xz00_3346)
{
{ /* Llib/srfi4.scm 624 */
{ /* Llib/srfi4.scm 624 */
long BgL_tmpz00_4860;
{ /* Llib/srfi4.scm 624 */
obj_t BgL_auxz00_4861;
if(
BGL_U64VECTORP(BgL_xz00_3346))
{ /* Llib/srfi4.scm 624 */
BgL_auxz00_4861 = BgL_xz00_3346
; }  else 
{ 
obj_t BgL_auxz00_4864;
BgL_auxz00_4864 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)25769)), BGl_string3356z00zz__srfi4z00, BGl_string3357z00zz__srfi4z00, BgL_xz00_3346); 
FAILURE(BgL_auxz00_4864,BFALSE,BFALSE);} 
BgL_tmpz00_4860 = 
BGl_u64vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4861); } 
return 
BINT(BgL_tmpz00_4860);} } 

}



/* f32vector-length */
BGL_EXPORTED_DEF long BGl_f32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_23)
{
{ /* Llib/srfi4.scm 625 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_23);} 

}



/* &f32vector-length */
obj_t BGl_z62f32vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3347, obj_t BgL_xz00_3348)
{
{ /* Llib/srfi4.scm 625 */
{ /* Llib/srfi4.scm 625 */
long BgL_tmpz00_4871;
{ /* Llib/srfi4.scm 625 */
obj_t BgL_auxz00_4872;
if(
BGL_F32VECTORP(BgL_xz00_3348))
{ /* Llib/srfi4.scm 625 */
BgL_auxz00_4872 = BgL_xz00_3348
; }  else 
{ 
obj_t BgL_auxz00_4875;
BgL_auxz00_4875 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)25826)), BGl_string3358z00zz__srfi4z00, BGl_string3359z00zz__srfi4z00, BgL_xz00_3348); 
FAILURE(BgL_auxz00_4875,BFALSE,BFALSE);} 
BgL_tmpz00_4871 = 
BGl_f32vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4872); } 
return 
BINT(BgL_tmpz00_4871);} } 

}



/* f64vector-length */
BGL_EXPORTED_DEF long BGl_f64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_24)
{
{ /* Llib/srfi4.scm 626 */
return 
BGL_HVECTOR_LENGTH(BgL_xz00_24);} 

}



/* &f64vector-length */
obj_t BGl_z62f64vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3349, obj_t BgL_xz00_3350)
{
{ /* Llib/srfi4.scm 626 */
{ /* Llib/srfi4.scm 626 */
long BgL_tmpz00_4882;
{ /* Llib/srfi4.scm 626 */
obj_t BgL_auxz00_4883;
if(
BGL_F64VECTORP(BgL_xz00_3350))
{ /* Llib/srfi4.scm 626 */
BgL_auxz00_4883 = BgL_xz00_3350
; }  else 
{ 
obj_t BgL_auxz00_4886;
BgL_auxz00_4886 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)25883)), BGl_string3360z00zz__srfi4z00, BGl_string3361z00zz__srfi4z00, BgL_xz00_3350); 
FAILURE(BgL_auxz00_4886,BFALSE,BFALSE);} 
BgL_tmpz00_4882 = 
BGl_f64vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4883); } 
return 
BINT(BgL_tmpz00_4882);} } 

}



/* s8vector */
BGL_EXPORTED_DEF obj_t BGl_s8vectorz00zz__srfi4z00(obj_t BgL_xz00_25)
{
{ /* Llib/srfi4.scm 637 */
{ /* Llib/srfi4.scm 637 */
obj_t BgL_auxz00_4892;
{ /* Llib/srfi4.scm 637 */
bool_t BgL_test3779z00_4893;
if(
PAIRP(BgL_xz00_25))
{ /* Llib/srfi4.scm 637 */
BgL_test3779z00_4893 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 637 */
BgL_test3779z00_4893 = 
NULLP(BgL_xz00_25)
; } 
if(BgL_test3779z00_4893)
{ /* Llib/srfi4.scm 637 */
BgL_auxz00_4892 = BgL_xz00_25
; }  else 
{ 
obj_t BgL_auxz00_4897;
BgL_auxz00_4897 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)26350)), BGl_string3343z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_25); 
FAILURE(BgL_auxz00_4897,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3s8vectorz31zz__srfi4z00(BgL_auxz00_4892);} } 

}



/* &s8vector */
obj_t BGl_z62s8vectorz62zz__srfi4z00(obj_t BgL_envz00_3351, obj_t BgL_xz00_3352)
{
{ /* Llib/srfi4.scm 637 */
return 
BGl_s8vectorz00zz__srfi4z00(BgL_xz00_3352);} 

}



/* u8vector */
BGL_EXPORTED_DEF obj_t BGl_u8vectorz00zz__srfi4z00(obj_t BgL_xz00_26)
{
{ /* Llib/srfi4.scm 637 */
{ /* Llib/srfi4.scm 637 */
obj_t BgL_auxz00_4903;
{ /* Llib/srfi4.scm 637 */
bool_t BgL_test3781z00_4904;
if(
PAIRP(BgL_xz00_26))
{ /* Llib/srfi4.scm 637 */
BgL_test3781z00_4904 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 637 */
BgL_test3781z00_4904 = 
NULLP(BgL_xz00_26)
; } 
if(BgL_test3781z00_4904)
{ /* Llib/srfi4.scm 637 */
BgL_auxz00_4903 = BgL_xz00_26
; }  else 
{ 
obj_t BgL_auxz00_4908;
BgL_auxz00_4908 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)26350)), BGl_string3345z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_26); 
FAILURE(BgL_auxz00_4908,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3u8vectorz31zz__srfi4z00(BgL_auxz00_4903);} } 

}



/* &u8vector */
obj_t BGl_z62u8vectorz62zz__srfi4z00(obj_t BgL_envz00_3353, obj_t BgL_xz00_3354)
{
{ /* Llib/srfi4.scm 637 */
return 
BGl_u8vectorz00zz__srfi4z00(BgL_xz00_3354);} 

}



/* s16vector */
BGL_EXPORTED_DEF obj_t BGl_s16vectorz00zz__srfi4z00(obj_t BgL_xz00_27)
{
{ /* Llib/srfi4.scm 637 */
{ /* Llib/srfi4.scm 637 */
obj_t BgL_auxz00_4914;
{ /* Llib/srfi4.scm 637 */
bool_t BgL_test3783z00_4915;
if(
PAIRP(BgL_xz00_27))
{ /* Llib/srfi4.scm 637 */
BgL_test3783z00_4915 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 637 */
BgL_test3783z00_4915 = 
NULLP(BgL_xz00_27)
; } 
if(BgL_test3783z00_4915)
{ /* Llib/srfi4.scm 637 */
BgL_auxz00_4914 = BgL_xz00_27
; }  else 
{ 
obj_t BgL_auxz00_4919;
BgL_auxz00_4919 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)26350)), BGl_string3347z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_27); 
FAILURE(BgL_auxz00_4919,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3s16vectorz31zz__srfi4z00(BgL_auxz00_4914);} } 

}



/* &s16vector */
obj_t BGl_z62s16vectorz62zz__srfi4z00(obj_t BgL_envz00_3355, obj_t BgL_xz00_3356)
{
{ /* Llib/srfi4.scm 637 */
return 
BGl_s16vectorz00zz__srfi4z00(BgL_xz00_3356);} 

}



/* u16vector */
BGL_EXPORTED_DEF obj_t BGl_u16vectorz00zz__srfi4z00(obj_t BgL_xz00_28)
{
{ /* Llib/srfi4.scm 637 */
{ /* Llib/srfi4.scm 637 */
obj_t BgL_auxz00_4925;
{ /* Llib/srfi4.scm 637 */
bool_t BgL_test3785z00_4926;
if(
PAIRP(BgL_xz00_28))
{ /* Llib/srfi4.scm 637 */
BgL_test3785z00_4926 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 637 */
BgL_test3785z00_4926 = 
NULLP(BgL_xz00_28)
; } 
if(BgL_test3785z00_4926)
{ /* Llib/srfi4.scm 637 */
BgL_auxz00_4925 = BgL_xz00_28
; }  else 
{ 
obj_t BgL_auxz00_4930;
BgL_auxz00_4930 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)26350)), BGl_string3349z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_28); 
FAILURE(BgL_auxz00_4930,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3u16vectorz31zz__srfi4z00(BgL_auxz00_4925);} } 

}



/* &u16vector */
obj_t BGl_z62u16vectorz62zz__srfi4z00(obj_t BgL_envz00_3357, obj_t BgL_xz00_3358)
{
{ /* Llib/srfi4.scm 637 */
return 
BGl_u16vectorz00zz__srfi4z00(BgL_xz00_3358);} 

}



/* s32vector */
BGL_EXPORTED_DEF obj_t BGl_s32vectorz00zz__srfi4z00(obj_t BgL_xz00_29)
{
{ /* Llib/srfi4.scm 637 */
{ /* Llib/srfi4.scm 637 */
obj_t BgL_auxz00_4936;
{ /* Llib/srfi4.scm 637 */
bool_t BgL_test3787z00_4937;
if(
PAIRP(BgL_xz00_29))
{ /* Llib/srfi4.scm 637 */
BgL_test3787z00_4937 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 637 */
BgL_test3787z00_4937 = 
NULLP(BgL_xz00_29)
; } 
if(BgL_test3787z00_4937)
{ /* Llib/srfi4.scm 637 */
BgL_auxz00_4936 = BgL_xz00_29
; }  else 
{ 
obj_t BgL_auxz00_4941;
BgL_auxz00_4941 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)26350)), BGl_string3351z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_29); 
FAILURE(BgL_auxz00_4941,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3s32vectorz31zz__srfi4z00(BgL_auxz00_4936);} } 

}



/* &s32vector */
obj_t BGl_z62s32vectorz62zz__srfi4z00(obj_t BgL_envz00_3359, obj_t BgL_xz00_3360)
{
{ /* Llib/srfi4.scm 637 */
return 
BGl_s32vectorz00zz__srfi4z00(BgL_xz00_3360);} 

}



/* u32vector */
BGL_EXPORTED_DEF obj_t BGl_u32vectorz00zz__srfi4z00(obj_t BgL_xz00_30)
{
{ /* Llib/srfi4.scm 637 */
{ /* Llib/srfi4.scm 637 */
obj_t BgL_auxz00_4947;
{ /* Llib/srfi4.scm 637 */
bool_t BgL_test3789z00_4948;
if(
PAIRP(BgL_xz00_30))
{ /* Llib/srfi4.scm 637 */
BgL_test3789z00_4948 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 637 */
BgL_test3789z00_4948 = 
NULLP(BgL_xz00_30)
; } 
if(BgL_test3789z00_4948)
{ /* Llib/srfi4.scm 637 */
BgL_auxz00_4947 = BgL_xz00_30
; }  else 
{ 
obj_t BgL_auxz00_4952;
BgL_auxz00_4952 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)26350)), BGl_string3353z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_30); 
FAILURE(BgL_auxz00_4952,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3u32vectorz31zz__srfi4z00(BgL_auxz00_4947);} } 

}



/* &u32vector */
obj_t BGl_z62u32vectorz62zz__srfi4z00(obj_t BgL_envz00_3361, obj_t BgL_xz00_3362)
{
{ /* Llib/srfi4.scm 637 */
return 
BGl_u32vectorz00zz__srfi4z00(BgL_xz00_3362);} 

}



/* s64vector */
BGL_EXPORTED_DEF obj_t BGl_s64vectorz00zz__srfi4z00(obj_t BgL_xz00_31)
{
{ /* Llib/srfi4.scm 637 */
{ /* Llib/srfi4.scm 637 */
obj_t BgL_auxz00_4958;
{ /* Llib/srfi4.scm 637 */
bool_t BgL_test3791z00_4959;
if(
PAIRP(BgL_xz00_31))
{ /* Llib/srfi4.scm 637 */
BgL_test3791z00_4959 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 637 */
BgL_test3791z00_4959 = 
NULLP(BgL_xz00_31)
; } 
if(BgL_test3791z00_4959)
{ /* Llib/srfi4.scm 637 */
BgL_auxz00_4958 = BgL_xz00_31
; }  else 
{ 
obj_t BgL_auxz00_4963;
BgL_auxz00_4963 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)26350)), BGl_string3355z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_31); 
FAILURE(BgL_auxz00_4963,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3s64vectorz31zz__srfi4z00(BgL_auxz00_4958);} } 

}



/* &s64vector */
obj_t BGl_z62s64vectorz62zz__srfi4z00(obj_t BgL_envz00_3363, obj_t BgL_xz00_3364)
{
{ /* Llib/srfi4.scm 637 */
return 
BGl_s64vectorz00zz__srfi4z00(BgL_xz00_3364);} 

}



/* u64vector */
BGL_EXPORTED_DEF obj_t BGl_u64vectorz00zz__srfi4z00(obj_t BgL_xz00_32)
{
{ /* Llib/srfi4.scm 637 */
{ /* Llib/srfi4.scm 637 */
obj_t BgL_auxz00_4969;
{ /* Llib/srfi4.scm 637 */
bool_t BgL_test3793z00_4970;
if(
PAIRP(BgL_xz00_32))
{ /* Llib/srfi4.scm 637 */
BgL_test3793z00_4970 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 637 */
BgL_test3793z00_4970 = 
NULLP(BgL_xz00_32)
; } 
if(BgL_test3793z00_4970)
{ /* Llib/srfi4.scm 637 */
BgL_auxz00_4969 = BgL_xz00_32
; }  else 
{ 
obj_t BgL_auxz00_4974;
BgL_auxz00_4974 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)26350)), BGl_string3357z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_32); 
FAILURE(BgL_auxz00_4974,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3u64vectorz31zz__srfi4z00(BgL_auxz00_4969);} } 

}



/* &u64vector */
obj_t BGl_z62u64vectorz62zz__srfi4z00(obj_t BgL_envz00_3365, obj_t BgL_xz00_3366)
{
{ /* Llib/srfi4.scm 637 */
return 
BGl_u64vectorz00zz__srfi4z00(BgL_xz00_3366);} 

}



/* f32vector */
BGL_EXPORTED_DEF obj_t BGl_f32vectorz00zz__srfi4z00(obj_t BgL_xz00_33)
{
{ /* Llib/srfi4.scm 637 */
{ /* Llib/srfi4.scm 637 */
obj_t BgL_auxz00_4980;
{ /* Llib/srfi4.scm 637 */
bool_t BgL_test3795z00_4981;
if(
PAIRP(BgL_xz00_33))
{ /* Llib/srfi4.scm 637 */
BgL_test3795z00_4981 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 637 */
BgL_test3795z00_4981 = 
NULLP(BgL_xz00_33)
; } 
if(BgL_test3795z00_4981)
{ /* Llib/srfi4.scm 637 */
BgL_auxz00_4980 = BgL_xz00_33
; }  else 
{ 
obj_t BgL_auxz00_4985;
BgL_auxz00_4985 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)26350)), BGl_string3359z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_33); 
FAILURE(BgL_auxz00_4985,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3f32vectorz31zz__srfi4z00(BgL_auxz00_4980);} } 

}



/* &f32vector */
obj_t BGl_z62f32vectorz62zz__srfi4z00(obj_t BgL_envz00_3367, obj_t BgL_xz00_3368)
{
{ /* Llib/srfi4.scm 637 */
return 
BGl_f32vectorz00zz__srfi4z00(BgL_xz00_3368);} 

}



/* f64vector */
BGL_EXPORTED_DEF obj_t BGl_f64vectorz00zz__srfi4z00(obj_t BgL_xz00_34)
{
{ /* Llib/srfi4.scm 637 */
{ /* Llib/srfi4.scm 637 */
obj_t BgL_auxz00_4991;
{ /* Llib/srfi4.scm 637 */
bool_t BgL_test3797z00_4992;
if(
PAIRP(BgL_xz00_34))
{ /* Llib/srfi4.scm 637 */
BgL_test3797z00_4992 = ((bool_t)1)
; }  else 
{ /* Llib/srfi4.scm 637 */
BgL_test3797z00_4992 = 
NULLP(BgL_xz00_34)
; } 
if(BgL_test3797z00_4992)
{ /* Llib/srfi4.scm 637 */
BgL_auxz00_4991 = BgL_xz00_34
; }  else 
{ 
obj_t BgL_auxz00_4996;
BgL_auxz00_4996 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)26350)), BGl_string3361z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_34); 
FAILURE(BgL_auxz00_4996,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3f64vectorz31zz__srfi4z00(BgL_auxz00_4991);} } 

}



/* &f64vector */
obj_t BGl_z62f64vectorz62zz__srfi4z00(obj_t BgL_envz00_3369, obj_t BgL_xz00_3370)
{
{ /* Llib/srfi4.scm 637 */
return 
BGl_f64vectorz00zz__srfi4z00(BgL_xz00_3370);} 

}



/* _make-s8vector */
obj_t BGl__makezd2s8vectorzd2zz__srfi4z00(obj_t BgL_env1227z00_38, obj_t BgL_opt1226z00_37)
{
{ /* Llib/srfi4.scm 661 */
{ /* Llib/srfi4.scm 661 */
obj_t BgL_g1228z00_1339;
BgL_g1228z00_1339 = 
VECTOR_REF(BgL_opt1226z00_37,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1226z00_37)) { case ((long)1) : 

{ /* Llib/srfi4.scm 661 */

{ /* Llib/srfi4.scm 661 */
long BgL_auxz00_5003;
{ /* Llib/srfi4.scm 661 */
obj_t BgL_tmpz00_5004;
if(
INTEGERP(BgL_g1228z00_1339))
{ /* Llib/srfi4.scm 661 */
BgL_tmpz00_5004 = BgL_g1228z00_1339
; }  else 
{ 
obj_t BgL_auxz00_5007;
BgL_auxz00_5007 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27216)), BGl_string3366z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1228z00_1339); 
FAILURE(BgL_auxz00_5007,BFALSE,BFALSE);} 
BgL_auxz00_5003 = 
(long)CINT(BgL_tmpz00_5004); } 
return 
BGl_makezd2s8vectorzd2zz__srfi4z00(BgL_auxz00_5003, (int8_t)(0));} } break;case ((long)2) : 

{ /* Llib/srfi4.scm 661 */
obj_t BgL_initz00_1344;
BgL_initz00_1344 = 
VECTOR_REF(BgL_opt1226z00_37,((long)1)); 
{ /* Llib/srfi4.scm 661 */

{ /* Llib/srfi4.scm 661 */
int8_t BgL_auxz00_5023;long BgL_auxz00_5014;
{ /* Llib/srfi4.scm 661 */
obj_t BgL_tmpz00_5024;
if(
BGL_INT8P(BgL_initz00_1344))
{ /* Llib/srfi4.scm 661 */
BgL_tmpz00_5024 = BgL_initz00_1344
; }  else 
{ 
obj_t BgL_auxz00_5027;
BgL_auxz00_5027 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27216)), BGl_string3366z00zz__srfi4z00, BGl_string3368z00zz__srfi4z00, BgL_initz00_1344); 
FAILURE(BgL_auxz00_5027,BFALSE,BFALSE);} 
BgL_auxz00_5023 = 
BGL_BINT8_TO_INT8(BgL_tmpz00_5024); } 
{ /* Llib/srfi4.scm 661 */
obj_t BgL_tmpz00_5015;
if(
INTEGERP(BgL_g1228z00_1339))
{ /* Llib/srfi4.scm 661 */
BgL_tmpz00_5015 = BgL_g1228z00_1339
; }  else 
{ 
obj_t BgL_auxz00_5018;
BgL_auxz00_5018 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27216)), BGl_string3366z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1228z00_1339); 
FAILURE(BgL_auxz00_5018,BFALSE,BFALSE);} 
BgL_auxz00_5014 = 
(long)CINT(BgL_tmpz00_5015); } 
return 
BGl_makezd2s8vectorzd2zz__srfi4z00(BgL_auxz00_5014, BgL_auxz00_5023);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3363z00zz__srfi4z00, BGl_string3365z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1226z00_37)));} } } } 

}



/* make-s8vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2s8vectorzd2zz__srfi4z00(long BgL_lenz00_35, int8_t BgL_initz00_36)
{
{ /* Llib/srfi4.scm 661 */
{ /* Llib/srfi4.scm 661 */
obj_t BgL_vz00_1346;
{ /* Llib/srfi4.scm 661 */
int32_t BgL_tmpz00_5038;
BgL_tmpz00_5038 = 
(int32_t)(BgL_lenz00_35); 
BgL_vz00_1346 = 
BGL_ALLOC_S8VECTOR(BgL_tmpz00_5038); } 
{ 
long BgL_iz00_2419;
BgL_iz00_2419 = ((long)0); 
BgL_loopz00_2418:
if(
(BgL_iz00_2419<BgL_lenz00_35))
{ /* Llib/srfi4.scm 661 */
{ /* Llib/srfi4.scm 661 */
long BgL_l2336z00_3417;
BgL_l2336z00_3417 = 
BGL_HVECTOR_LENGTH(BgL_vz00_1346); 
if(
BOUND_CHECK(BgL_iz00_2419, BgL_l2336z00_3417))
{ /* Llib/srfi4.scm 661 */
BGL_S8VSET(BgL_vz00_1346, BgL_iz00_2419, BgL_initz00_36); }  else 
{ 
obj_t BgL_auxz00_5047;
BgL_auxz00_5047 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27216)), BGl_string3369z00zz__srfi4z00, BgL_vz00_1346, 
(int)(BgL_l2336z00_3417), 
(int)(BgL_iz00_2419)); 
FAILURE(BgL_auxz00_5047,BFALSE,BFALSE);} } BUNSPEC; 
{ 
long BgL_iz00_5053;
BgL_iz00_5053 = 
(BgL_iz00_2419+((long)1)); 
BgL_iz00_2419 = BgL_iz00_5053; 
goto BgL_loopz00_2418;} }  else 
{ /* Llib/srfi4.scm 661 */((bool_t)0); } } 
return BgL_vz00_1346;} } 

}



/* _make-u8vector */
obj_t BGl__makezd2u8vectorzd2zz__srfi4z00(obj_t BgL_env1232z00_42, obj_t BgL_opt1231z00_41)
{
{ /* Llib/srfi4.scm 662 */
{ /* Llib/srfi4.scm 662 */
obj_t BgL_g1233z00_1353;
BgL_g1233z00_1353 = 
VECTOR_REF(BgL_opt1231z00_41,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1231z00_41)) { case ((long)1) : 

{ /* Llib/srfi4.scm 662 */

{ /* Llib/srfi4.scm 662 */
long BgL_auxz00_5056;
{ /* Llib/srfi4.scm 662 */
obj_t BgL_tmpz00_5057;
if(
INTEGERP(BgL_g1233z00_1353))
{ /* Llib/srfi4.scm 662 */
BgL_tmpz00_5057 = BgL_g1233z00_1353
; }  else 
{ 
obj_t BgL_auxz00_5060;
BgL_auxz00_5060 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27248)), BGl_string3372z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1233z00_1353); 
FAILURE(BgL_auxz00_5060,BFALSE,BFALSE);} 
BgL_auxz00_5056 = 
(long)CINT(BgL_tmpz00_5057); } 
return 
BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_auxz00_5056, (uint8_t)(0));} } break;case ((long)2) : 

{ /* Llib/srfi4.scm 662 */
obj_t BgL_initz00_1358;
BgL_initz00_1358 = 
VECTOR_REF(BgL_opt1231z00_41,((long)1)); 
{ /* Llib/srfi4.scm 662 */

{ /* Llib/srfi4.scm 662 */
uint8_t BgL_auxz00_5076;long BgL_auxz00_5067;
{ /* Llib/srfi4.scm 662 */
obj_t BgL_tmpz00_5077;
if(
BGL_UINT8P(BgL_initz00_1358))
{ /* Llib/srfi4.scm 662 */
BgL_tmpz00_5077 = BgL_initz00_1358
; }  else 
{ 
obj_t BgL_auxz00_5080;
BgL_auxz00_5080 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27248)), BGl_string3372z00zz__srfi4z00, BGl_string3373z00zz__srfi4z00, BgL_initz00_1358); 
FAILURE(BgL_auxz00_5080,BFALSE,BFALSE);} 
BgL_auxz00_5076 = 
BGL_BUINT8_TO_UINT8(BgL_tmpz00_5077); } 
{ /* Llib/srfi4.scm 662 */
obj_t BgL_tmpz00_5068;
if(
INTEGERP(BgL_g1233z00_1353))
{ /* Llib/srfi4.scm 662 */
BgL_tmpz00_5068 = BgL_g1233z00_1353
; }  else 
{ 
obj_t BgL_auxz00_5071;
BgL_auxz00_5071 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27248)), BGl_string3372z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1233z00_1353); 
FAILURE(BgL_auxz00_5071,BFALSE,BFALSE);} 
BgL_auxz00_5067 = 
(long)CINT(BgL_tmpz00_5068); } 
return 
BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_auxz00_5067, BgL_auxz00_5076);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3370z00zz__srfi4z00, BGl_string3365z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1231z00_41)));} } } } 

}



/* make-u8vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long BgL_lenz00_39, uint8_t BgL_initz00_40)
{
{ /* Llib/srfi4.scm 662 */
{ /* Llib/srfi4.scm 662 */
obj_t BgL_vz00_1360;
{ /* Llib/srfi4.scm 662 */
int32_t BgL_tmpz00_5091;
BgL_tmpz00_5091 = 
(int32_t)(BgL_lenz00_39); 
BgL_vz00_1360 = 
BGL_ALLOC_U8VECTOR(BgL_tmpz00_5091); } 
{ 
long BgL_iz00_2433;
BgL_iz00_2433 = ((long)0); 
BgL_loopz00_2432:
if(
(BgL_iz00_2433<BgL_lenz00_39))
{ /* Llib/srfi4.scm 662 */
{ /* Llib/srfi4.scm 662 */
long BgL_l2340z00_3421;
BgL_l2340z00_3421 = 
BGL_HVECTOR_LENGTH(BgL_vz00_1360); 
if(
BOUND_CHECK(BgL_iz00_2433, BgL_l2340z00_3421))
{ /* Llib/srfi4.scm 662 */
BGL_U8VSET(BgL_vz00_1360, BgL_iz00_2433, BgL_initz00_40); }  else 
{ 
obj_t BgL_auxz00_5100;
BgL_auxz00_5100 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27248)), BGl_string3374z00zz__srfi4z00, BgL_vz00_1360, 
(int)(BgL_l2340z00_3421), 
(int)(BgL_iz00_2433)); 
FAILURE(BgL_auxz00_5100,BFALSE,BFALSE);} } BUNSPEC; 
{ 
long BgL_iz00_5106;
BgL_iz00_5106 = 
(BgL_iz00_2433+((long)1)); 
BgL_iz00_2433 = BgL_iz00_5106; 
goto BgL_loopz00_2432;} }  else 
{ /* Llib/srfi4.scm 662 */((bool_t)0); } } 
return BgL_vz00_1360;} } 

}



/* _make-s16vector */
obj_t BGl__makezd2s16vectorzd2zz__srfi4z00(obj_t BgL_env1237z00_46, obj_t BgL_opt1236z00_45)
{
{ /* Llib/srfi4.scm 663 */
{ /* Llib/srfi4.scm 663 */
obj_t BgL_g1238z00_1367;
BgL_g1238z00_1367 = 
VECTOR_REF(BgL_opt1236z00_45,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1236z00_45)) { case ((long)1) : 

{ /* Llib/srfi4.scm 663 */

{ /* Llib/srfi4.scm 663 */
long BgL_auxz00_5109;
{ /* Llib/srfi4.scm 663 */
obj_t BgL_tmpz00_5110;
if(
INTEGERP(BgL_g1238z00_1367))
{ /* Llib/srfi4.scm 663 */
BgL_tmpz00_5110 = BgL_g1238z00_1367
; }  else 
{ 
obj_t BgL_auxz00_5113;
BgL_auxz00_5113 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27280)), BGl_string3377z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1238z00_1367); 
FAILURE(BgL_auxz00_5113,BFALSE,BFALSE);} 
BgL_auxz00_5109 = 
(long)CINT(BgL_tmpz00_5110); } 
return 
BGl_makezd2s16vectorzd2zz__srfi4z00(BgL_auxz00_5109, (int16_t)(0));} } break;case ((long)2) : 

{ /* Llib/srfi4.scm 663 */
obj_t BgL_initz00_1372;
BgL_initz00_1372 = 
VECTOR_REF(BgL_opt1236z00_45,((long)1)); 
{ /* Llib/srfi4.scm 663 */

{ /* Llib/srfi4.scm 663 */
int16_t BgL_auxz00_5129;long BgL_auxz00_5120;
{ /* Llib/srfi4.scm 663 */
obj_t BgL_tmpz00_5130;
if(
BGL_INT16P(BgL_initz00_1372))
{ /* Llib/srfi4.scm 663 */
BgL_tmpz00_5130 = BgL_initz00_1372
; }  else 
{ 
obj_t BgL_auxz00_5133;
BgL_auxz00_5133 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27280)), BGl_string3377z00zz__srfi4z00, BGl_string3378z00zz__srfi4z00, BgL_initz00_1372); 
FAILURE(BgL_auxz00_5133,BFALSE,BFALSE);} 
BgL_auxz00_5129 = 
BGL_BINT16_TO_INT16(BgL_tmpz00_5130); } 
{ /* Llib/srfi4.scm 663 */
obj_t BgL_tmpz00_5121;
if(
INTEGERP(BgL_g1238z00_1367))
{ /* Llib/srfi4.scm 663 */
BgL_tmpz00_5121 = BgL_g1238z00_1367
; }  else 
{ 
obj_t BgL_auxz00_5124;
BgL_auxz00_5124 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27280)), BGl_string3377z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1238z00_1367); 
FAILURE(BgL_auxz00_5124,BFALSE,BFALSE);} 
BgL_auxz00_5120 = 
(long)CINT(BgL_tmpz00_5121); } 
return 
BGl_makezd2s16vectorzd2zz__srfi4z00(BgL_auxz00_5120, BgL_auxz00_5129);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3375z00zz__srfi4z00, BGl_string3365z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1236z00_45)));} } } } 

}



/* make-s16vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2s16vectorzd2zz__srfi4z00(long BgL_lenz00_43, int16_t BgL_initz00_44)
{
{ /* Llib/srfi4.scm 663 */
{ /* Llib/srfi4.scm 663 */
obj_t BgL_vz00_1374;
{ /* Llib/srfi4.scm 663 */
int32_t BgL_tmpz00_5144;
BgL_tmpz00_5144 = 
(int32_t)(BgL_lenz00_43); 
BgL_vz00_1374 = 
BGL_ALLOC_S16VECTOR(BgL_tmpz00_5144); } 
{ 
long BgL_iz00_2447;
BgL_iz00_2447 = ((long)0); 
BgL_loopz00_2446:
if(
(BgL_iz00_2447<BgL_lenz00_43))
{ /* Llib/srfi4.scm 663 */
{ /* Llib/srfi4.scm 663 */
long BgL_l2344z00_3425;
BgL_l2344z00_3425 = 
BGL_HVECTOR_LENGTH(BgL_vz00_1374); 
if(
BOUND_CHECK(BgL_iz00_2447, BgL_l2344z00_3425))
{ /* Llib/srfi4.scm 663 */
BGL_S16VSET(BgL_vz00_1374, BgL_iz00_2447, BgL_initz00_44); }  else 
{ 
obj_t BgL_auxz00_5153;
BgL_auxz00_5153 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27280)), BGl_string3379z00zz__srfi4z00, BgL_vz00_1374, 
(int)(BgL_l2344z00_3425), 
(int)(BgL_iz00_2447)); 
FAILURE(BgL_auxz00_5153,BFALSE,BFALSE);} } BUNSPEC; 
{ 
long BgL_iz00_5159;
BgL_iz00_5159 = 
(BgL_iz00_2447+((long)1)); 
BgL_iz00_2447 = BgL_iz00_5159; 
goto BgL_loopz00_2446;} }  else 
{ /* Llib/srfi4.scm 663 */((bool_t)0); } } 
return BgL_vz00_1374;} } 

}



/* _make-u16vector */
obj_t BGl__makezd2u16vectorzd2zz__srfi4z00(obj_t BgL_env1242z00_50, obj_t BgL_opt1241z00_49)
{
{ /* Llib/srfi4.scm 664 */
{ /* Llib/srfi4.scm 664 */
obj_t BgL_g1243z00_1381;
BgL_g1243z00_1381 = 
VECTOR_REF(BgL_opt1241z00_49,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1241z00_49)) { case ((long)1) : 

{ /* Llib/srfi4.scm 664 */

{ /* Llib/srfi4.scm 664 */
long BgL_auxz00_5162;
{ /* Llib/srfi4.scm 664 */
obj_t BgL_tmpz00_5163;
if(
INTEGERP(BgL_g1243z00_1381))
{ /* Llib/srfi4.scm 664 */
BgL_tmpz00_5163 = BgL_g1243z00_1381
; }  else 
{ 
obj_t BgL_auxz00_5166;
BgL_auxz00_5166 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27314)), BGl_string3382z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1243z00_1381); 
FAILURE(BgL_auxz00_5166,BFALSE,BFALSE);} 
BgL_auxz00_5162 = 
(long)CINT(BgL_tmpz00_5163); } 
return 
BGl_makezd2u16vectorzd2zz__srfi4z00(BgL_auxz00_5162, (uint16_t)(0));} } break;case ((long)2) : 

{ /* Llib/srfi4.scm 664 */
obj_t BgL_initz00_1386;
BgL_initz00_1386 = 
VECTOR_REF(BgL_opt1241z00_49,((long)1)); 
{ /* Llib/srfi4.scm 664 */

{ /* Llib/srfi4.scm 664 */
uint16_t BgL_auxz00_5182;long BgL_auxz00_5173;
{ /* Llib/srfi4.scm 664 */
obj_t BgL_tmpz00_5183;
if(
BGL_UINT16P(BgL_initz00_1386))
{ /* Llib/srfi4.scm 664 */
BgL_tmpz00_5183 = BgL_initz00_1386
; }  else 
{ 
obj_t BgL_auxz00_5186;
BgL_auxz00_5186 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27314)), BGl_string3382z00zz__srfi4z00, BGl_string3383z00zz__srfi4z00, BgL_initz00_1386); 
FAILURE(BgL_auxz00_5186,BFALSE,BFALSE);} 
BgL_auxz00_5182 = 
BGL_BUINT16_TO_UINT16(BgL_tmpz00_5183); } 
{ /* Llib/srfi4.scm 664 */
obj_t BgL_tmpz00_5174;
if(
INTEGERP(BgL_g1243z00_1381))
{ /* Llib/srfi4.scm 664 */
BgL_tmpz00_5174 = BgL_g1243z00_1381
; }  else 
{ 
obj_t BgL_auxz00_5177;
BgL_auxz00_5177 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27314)), BGl_string3382z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1243z00_1381); 
FAILURE(BgL_auxz00_5177,BFALSE,BFALSE);} 
BgL_auxz00_5173 = 
(long)CINT(BgL_tmpz00_5174); } 
return 
BGl_makezd2u16vectorzd2zz__srfi4z00(BgL_auxz00_5173, BgL_auxz00_5182);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3380z00zz__srfi4z00, BGl_string3365z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1241z00_49)));} } } } 

}



/* make-u16vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2u16vectorzd2zz__srfi4z00(long BgL_lenz00_47, uint16_t BgL_initz00_48)
{
{ /* Llib/srfi4.scm 664 */
{ /* Llib/srfi4.scm 664 */
obj_t BgL_vz00_1388;
{ /* Llib/srfi4.scm 664 */
int32_t BgL_tmpz00_5197;
BgL_tmpz00_5197 = 
(int32_t)(BgL_lenz00_47); 
BgL_vz00_1388 = 
BGL_ALLOC_U16VECTOR(BgL_tmpz00_5197); } 
{ 
long BgL_iz00_2461;
BgL_iz00_2461 = ((long)0); 
BgL_loopz00_2460:
if(
(BgL_iz00_2461<BgL_lenz00_47))
{ /* Llib/srfi4.scm 664 */
{ /* Llib/srfi4.scm 664 */
long BgL_l2348z00_3429;
BgL_l2348z00_3429 = 
BGL_HVECTOR_LENGTH(BgL_vz00_1388); 
if(
BOUND_CHECK(BgL_iz00_2461, BgL_l2348z00_3429))
{ /* Llib/srfi4.scm 664 */
BGL_U16VSET(BgL_vz00_1388, BgL_iz00_2461, BgL_initz00_48); }  else 
{ 
obj_t BgL_auxz00_5206;
BgL_auxz00_5206 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27314)), BGl_string3384z00zz__srfi4z00, BgL_vz00_1388, 
(int)(BgL_l2348z00_3429), 
(int)(BgL_iz00_2461)); 
FAILURE(BgL_auxz00_5206,BFALSE,BFALSE);} } BUNSPEC; 
{ 
long BgL_iz00_5212;
BgL_iz00_5212 = 
(BgL_iz00_2461+((long)1)); 
BgL_iz00_2461 = BgL_iz00_5212; 
goto BgL_loopz00_2460;} }  else 
{ /* Llib/srfi4.scm 664 */((bool_t)0); } } 
return BgL_vz00_1388;} } 

}



/* _make-s32vector */
obj_t BGl__makezd2s32vectorzd2zz__srfi4z00(obj_t BgL_env1247z00_54, obj_t BgL_opt1246z00_53)
{
{ /* Llib/srfi4.scm 665 */
{ /* Llib/srfi4.scm 665 */
obj_t BgL_g1248z00_1395;
BgL_g1248z00_1395 = 
VECTOR_REF(BgL_opt1246z00_53,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1246z00_53)) { case ((long)1) : 

{ /* Llib/srfi4.scm 665 */

{ /* Llib/srfi4.scm 665 */
long BgL_auxz00_5215;
{ /* Llib/srfi4.scm 665 */
obj_t BgL_tmpz00_5216;
if(
INTEGERP(BgL_g1248z00_1395))
{ /* Llib/srfi4.scm 665 */
BgL_tmpz00_5216 = BgL_g1248z00_1395
; }  else 
{ 
obj_t BgL_auxz00_5219;
BgL_auxz00_5219 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27348)), BGl_string3387z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1248z00_1395); 
FAILURE(BgL_auxz00_5219,BFALSE,BFALSE);} 
BgL_auxz00_5215 = 
(long)CINT(BgL_tmpz00_5216); } 
return 
BGl_makezd2s32vectorzd2zz__srfi4z00(BgL_auxz00_5215, (int32_t)(0));} } break;case ((long)2) : 

{ /* Llib/srfi4.scm 665 */
obj_t BgL_initz00_1400;
BgL_initz00_1400 = 
VECTOR_REF(BgL_opt1246z00_53,((long)1)); 
{ /* Llib/srfi4.scm 665 */

{ /* Llib/srfi4.scm 665 */
int32_t BgL_auxz00_5235;long BgL_auxz00_5226;
{ /* Llib/srfi4.scm 665 */
obj_t BgL_tmpz00_5236;
if(
BGL_INT32P(BgL_initz00_1400))
{ /* Llib/srfi4.scm 665 */
BgL_tmpz00_5236 = BgL_initz00_1400
; }  else 
{ 
obj_t BgL_auxz00_5239;
BgL_auxz00_5239 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27348)), BGl_string3387z00zz__srfi4z00, BGl_string3388z00zz__srfi4z00, BgL_initz00_1400); 
FAILURE(BgL_auxz00_5239,BFALSE,BFALSE);} 
BgL_auxz00_5235 = 
BGL_BINT32_TO_INT32(BgL_tmpz00_5236); } 
{ /* Llib/srfi4.scm 665 */
obj_t BgL_tmpz00_5227;
if(
INTEGERP(BgL_g1248z00_1395))
{ /* Llib/srfi4.scm 665 */
BgL_tmpz00_5227 = BgL_g1248z00_1395
; }  else 
{ 
obj_t BgL_auxz00_5230;
BgL_auxz00_5230 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27348)), BGl_string3387z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1248z00_1395); 
FAILURE(BgL_auxz00_5230,BFALSE,BFALSE);} 
BgL_auxz00_5226 = 
(long)CINT(BgL_tmpz00_5227); } 
return 
BGl_makezd2s32vectorzd2zz__srfi4z00(BgL_auxz00_5226, BgL_auxz00_5235);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3385z00zz__srfi4z00, BGl_string3365z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1246z00_53)));} } } } 

}



/* make-s32vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2s32vectorzd2zz__srfi4z00(long BgL_lenz00_51, int32_t BgL_initz00_52)
{
{ /* Llib/srfi4.scm 665 */
{ /* Llib/srfi4.scm 665 */
obj_t BgL_vz00_1402;
{ /* Llib/srfi4.scm 665 */
int32_t BgL_tmpz00_5250;
BgL_tmpz00_5250 = 
(int32_t)(BgL_lenz00_51); 
BgL_vz00_1402 = 
BGL_ALLOC_S32VECTOR(BgL_tmpz00_5250); } 
{ 
long BgL_iz00_2475;
BgL_iz00_2475 = ((long)0); 
BgL_loopz00_2474:
if(
(BgL_iz00_2475<BgL_lenz00_51))
{ /* Llib/srfi4.scm 665 */
{ /* Llib/srfi4.scm 665 */
long BgL_l2352z00_3433;
BgL_l2352z00_3433 = 
BGL_HVECTOR_LENGTH(BgL_vz00_1402); 
if(
BOUND_CHECK(BgL_iz00_2475, BgL_l2352z00_3433))
{ /* Llib/srfi4.scm 665 */
BGL_S32VSET(BgL_vz00_1402, BgL_iz00_2475, BgL_initz00_52); }  else 
{ 
obj_t BgL_auxz00_5259;
BgL_auxz00_5259 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27348)), BGl_string3389z00zz__srfi4z00, BgL_vz00_1402, 
(int)(BgL_l2352z00_3433), 
(int)(BgL_iz00_2475)); 
FAILURE(BgL_auxz00_5259,BFALSE,BFALSE);} } BUNSPEC; 
{ 
long BgL_iz00_5265;
BgL_iz00_5265 = 
(BgL_iz00_2475+((long)1)); 
BgL_iz00_2475 = BgL_iz00_5265; 
goto BgL_loopz00_2474;} }  else 
{ /* Llib/srfi4.scm 665 */((bool_t)0); } } 
return BgL_vz00_1402;} } 

}



/* _make-u32vector */
obj_t BGl__makezd2u32vectorzd2zz__srfi4z00(obj_t BgL_env1252z00_58, obj_t BgL_opt1251z00_57)
{
{ /* Llib/srfi4.scm 666 */
{ /* Llib/srfi4.scm 666 */
obj_t BgL_g1253z00_1409;
BgL_g1253z00_1409 = 
VECTOR_REF(BgL_opt1251z00_57,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1251z00_57)) { case ((long)1) : 

{ /* Llib/srfi4.scm 666 */

{ /* Llib/srfi4.scm 666 */
long BgL_auxz00_5268;
{ /* Llib/srfi4.scm 666 */
obj_t BgL_tmpz00_5269;
if(
INTEGERP(BgL_g1253z00_1409))
{ /* Llib/srfi4.scm 666 */
BgL_tmpz00_5269 = BgL_g1253z00_1409
; }  else 
{ 
obj_t BgL_auxz00_5272;
BgL_auxz00_5272 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27382)), BGl_string3392z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1253z00_1409); 
FAILURE(BgL_auxz00_5272,BFALSE,BFALSE);} 
BgL_auxz00_5268 = 
(long)CINT(BgL_tmpz00_5269); } 
return 
BGl_makezd2u32vectorzd2zz__srfi4z00(BgL_auxz00_5268, (uint32_t)(0));} } break;case ((long)2) : 

{ /* Llib/srfi4.scm 666 */
obj_t BgL_initz00_1414;
BgL_initz00_1414 = 
VECTOR_REF(BgL_opt1251z00_57,((long)1)); 
{ /* Llib/srfi4.scm 666 */

{ /* Llib/srfi4.scm 666 */
uint32_t BgL_auxz00_5288;long BgL_auxz00_5279;
{ /* Llib/srfi4.scm 666 */
obj_t BgL_tmpz00_5289;
if(
BGL_UINT32P(BgL_initz00_1414))
{ /* Llib/srfi4.scm 666 */
BgL_tmpz00_5289 = BgL_initz00_1414
; }  else 
{ 
obj_t BgL_auxz00_5292;
BgL_auxz00_5292 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27382)), BGl_string3392z00zz__srfi4z00, BGl_string3393z00zz__srfi4z00, BgL_initz00_1414); 
FAILURE(BgL_auxz00_5292,BFALSE,BFALSE);} 
BgL_auxz00_5288 = 
BGL_BUINT32_TO_UINT32(BgL_tmpz00_5289); } 
{ /* Llib/srfi4.scm 666 */
obj_t BgL_tmpz00_5280;
if(
INTEGERP(BgL_g1253z00_1409))
{ /* Llib/srfi4.scm 666 */
BgL_tmpz00_5280 = BgL_g1253z00_1409
; }  else 
{ 
obj_t BgL_auxz00_5283;
BgL_auxz00_5283 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27382)), BGl_string3392z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1253z00_1409); 
FAILURE(BgL_auxz00_5283,BFALSE,BFALSE);} 
BgL_auxz00_5279 = 
(long)CINT(BgL_tmpz00_5280); } 
return 
BGl_makezd2u32vectorzd2zz__srfi4z00(BgL_auxz00_5279, BgL_auxz00_5288);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3390z00zz__srfi4z00, BGl_string3365z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1251z00_57)));} } } } 

}



/* make-u32vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2u32vectorzd2zz__srfi4z00(long BgL_lenz00_55, uint32_t BgL_initz00_56)
{
{ /* Llib/srfi4.scm 666 */
{ /* Llib/srfi4.scm 666 */
obj_t BgL_vz00_1416;
{ /* Llib/srfi4.scm 666 */
int32_t BgL_tmpz00_5303;
BgL_tmpz00_5303 = 
(int32_t)(BgL_lenz00_55); 
BgL_vz00_1416 = 
BGL_ALLOC_U32VECTOR(BgL_tmpz00_5303); } 
{ 
long BgL_iz00_2489;
BgL_iz00_2489 = ((long)0); 
BgL_loopz00_2488:
if(
(BgL_iz00_2489<BgL_lenz00_55))
{ /* Llib/srfi4.scm 666 */
{ /* Llib/srfi4.scm 666 */
long BgL_l2356z00_3437;
BgL_l2356z00_3437 = 
BGL_HVECTOR_LENGTH(BgL_vz00_1416); 
if(
BOUND_CHECK(BgL_iz00_2489, BgL_l2356z00_3437))
{ /* Llib/srfi4.scm 666 */
BGL_U32VSET(BgL_vz00_1416, BgL_iz00_2489, BgL_initz00_56); }  else 
{ 
obj_t BgL_auxz00_5312;
BgL_auxz00_5312 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27382)), BGl_string3394z00zz__srfi4z00, BgL_vz00_1416, 
(int)(BgL_l2356z00_3437), 
(int)(BgL_iz00_2489)); 
FAILURE(BgL_auxz00_5312,BFALSE,BFALSE);} } BUNSPEC; 
{ 
long BgL_iz00_5318;
BgL_iz00_5318 = 
(BgL_iz00_2489+((long)1)); 
BgL_iz00_2489 = BgL_iz00_5318; 
goto BgL_loopz00_2488;} }  else 
{ /* Llib/srfi4.scm 666 */((bool_t)0); } } 
return BgL_vz00_1416;} } 

}



/* _make-s64vector */
obj_t BGl__makezd2s64vectorzd2zz__srfi4z00(obj_t BgL_env1257z00_62, obj_t BgL_opt1256z00_61)
{
{ /* Llib/srfi4.scm 667 */
{ /* Llib/srfi4.scm 667 */
obj_t BgL_g1258z00_1423;
BgL_g1258z00_1423 = 
VECTOR_REF(BgL_opt1256z00_61,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1256z00_61)) { case ((long)1) : 

{ /* Llib/srfi4.scm 667 */

{ /* Llib/srfi4.scm 667 */
long BgL_auxz00_5321;
{ /* Llib/srfi4.scm 667 */
obj_t BgL_tmpz00_5322;
if(
INTEGERP(BgL_g1258z00_1423))
{ /* Llib/srfi4.scm 667 */
BgL_tmpz00_5322 = BgL_g1258z00_1423
; }  else 
{ 
obj_t BgL_auxz00_5325;
BgL_auxz00_5325 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27416)), BGl_string3397z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1258z00_1423); 
FAILURE(BgL_auxz00_5325,BFALSE,BFALSE);} 
BgL_auxz00_5321 = 
(long)CINT(BgL_tmpz00_5322); } 
return 
BGl_makezd2s64vectorzd2zz__srfi4z00(BgL_auxz00_5321, (int64_t)(0));} } break;case ((long)2) : 

{ /* Llib/srfi4.scm 667 */
obj_t BgL_initz00_1428;
BgL_initz00_1428 = 
VECTOR_REF(BgL_opt1256z00_61,((long)1)); 
{ /* Llib/srfi4.scm 667 */

{ /* Llib/srfi4.scm 667 */
int64_t BgL_auxz00_5341;long BgL_auxz00_5332;
{ /* Llib/srfi4.scm 667 */
obj_t BgL_tmpz00_5342;
if(
BGL_INT64P(BgL_initz00_1428))
{ /* Llib/srfi4.scm 667 */
BgL_tmpz00_5342 = BgL_initz00_1428
; }  else 
{ 
obj_t BgL_auxz00_5345;
BgL_auxz00_5345 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27416)), BGl_string3397z00zz__srfi4z00, BGl_string3398z00zz__srfi4z00, BgL_initz00_1428); 
FAILURE(BgL_auxz00_5345,BFALSE,BFALSE);} 
BgL_auxz00_5341 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_5342); } 
{ /* Llib/srfi4.scm 667 */
obj_t BgL_tmpz00_5333;
if(
INTEGERP(BgL_g1258z00_1423))
{ /* Llib/srfi4.scm 667 */
BgL_tmpz00_5333 = BgL_g1258z00_1423
; }  else 
{ 
obj_t BgL_auxz00_5336;
BgL_auxz00_5336 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27416)), BGl_string3397z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1258z00_1423); 
FAILURE(BgL_auxz00_5336,BFALSE,BFALSE);} 
BgL_auxz00_5332 = 
(long)CINT(BgL_tmpz00_5333); } 
return 
BGl_makezd2s64vectorzd2zz__srfi4z00(BgL_auxz00_5332, BgL_auxz00_5341);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3395z00zz__srfi4z00, BGl_string3365z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1256z00_61)));} } } } 

}



/* make-s64vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2s64vectorzd2zz__srfi4z00(long BgL_lenz00_59, int64_t BgL_initz00_60)
{
{ /* Llib/srfi4.scm 667 */
{ /* Llib/srfi4.scm 667 */
obj_t BgL_vz00_1430;
{ /* Llib/srfi4.scm 667 */
int32_t BgL_tmpz00_5356;
BgL_tmpz00_5356 = 
(int32_t)(BgL_lenz00_59); 
BgL_vz00_1430 = 
BGL_ALLOC_S64VECTOR(BgL_tmpz00_5356); } 
{ 
long BgL_iz00_2503;
BgL_iz00_2503 = ((long)0); 
BgL_loopz00_2502:
if(
(BgL_iz00_2503<BgL_lenz00_59))
{ /* Llib/srfi4.scm 667 */
{ /* Llib/srfi4.scm 667 */
long BgL_l2360z00_3441;
BgL_l2360z00_3441 = 
BGL_HVECTOR_LENGTH(BgL_vz00_1430); 
if(
BOUND_CHECK(BgL_iz00_2503, BgL_l2360z00_3441))
{ /* Llib/srfi4.scm 667 */
BGL_S64VSET(BgL_vz00_1430, BgL_iz00_2503, BgL_initz00_60); }  else 
{ 
obj_t BgL_auxz00_5365;
BgL_auxz00_5365 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27416)), BGl_string3399z00zz__srfi4z00, BgL_vz00_1430, 
(int)(BgL_l2360z00_3441), 
(int)(BgL_iz00_2503)); 
FAILURE(BgL_auxz00_5365,BFALSE,BFALSE);} } BUNSPEC; 
{ 
long BgL_iz00_5371;
BgL_iz00_5371 = 
(BgL_iz00_2503+((long)1)); 
BgL_iz00_2503 = BgL_iz00_5371; 
goto BgL_loopz00_2502;} }  else 
{ /* Llib/srfi4.scm 667 */((bool_t)0); } } 
return BgL_vz00_1430;} } 

}



/* _make-u64vector */
obj_t BGl__makezd2u64vectorzd2zz__srfi4z00(obj_t BgL_env1262z00_66, obj_t BgL_opt1261z00_65)
{
{ /* Llib/srfi4.scm 668 */
{ /* Llib/srfi4.scm 668 */
obj_t BgL_g1263z00_1437;
BgL_g1263z00_1437 = 
VECTOR_REF(BgL_opt1261z00_65,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1261z00_65)) { case ((long)1) : 

{ /* Llib/srfi4.scm 668 */

{ /* Llib/srfi4.scm 668 */
long BgL_auxz00_5374;
{ /* Llib/srfi4.scm 668 */
obj_t BgL_tmpz00_5375;
if(
INTEGERP(BgL_g1263z00_1437))
{ /* Llib/srfi4.scm 668 */
BgL_tmpz00_5375 = BgL_g1263z00_1437
; }  else 
{ 
obj_t BgL_auxz00_5378;
BgL_auxz00_5378 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27450)), BGl_string3402z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1263z00_1437); 
FAILURE(BgL_auxz00_5378,BFALSE,BFALSE);} 
BgL_auxz00_5374 = 
(long)CINT(BgL_tmpz00_5375); } 
return 
BGl_makezd2u64vectorzd2zz__srfi4z00(BgL_auxz00_5374, (uint64_t)(0));} } break;case ((long)2) : 

{ /* Llib/srfi4.scm 668 */
obj_t BgL_initz00_1442;
BgL_initz00_1442 = 
VECTOR_REF(BgL_opt1261z00_65,((long)1)); 
{ /* Llib/srfi4.scm 668 */

{ /* Llib/srfi4.scm 668 */
uint64_t BgL_auxz00_5394;long BgL_auxz00_5385;
{ /* Llib/srfi4.scm 668 */
obj_t BgL_tmpz00_5395;
if(
BGL_UINT64P(BgL_initz00_1442))
{ /* Llib/srfi4.scm 668 */
BgL_tmpz00_5395 = BgL_initz00_1442
; }  else 
{ 
obj_t BgL_auxz00_5398;
BgL_auxz00_5398 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27450)), BGl_string3402z00zz__srfi4z00, BGl_string3403z00zz__srfi4z00, BgL_initz00_1442); 
FAILURE(BgL_auxz00_5398,BFALSE,BFALSE);} 
BgL_auxz00_5394 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_5395); } 
{ /* Llib/srfi4.scm 668 */
obj_t BgL_tmpz00_5386;
if(
INTEGERP(BgL_g1263z00_1437))
{ /* Llib/srfi4.scm 668 */
BgL_tmpz00_5386 = BgL_g1263z00_1437
; }  else 
{ 
obj_t BgL_auxz00_5389;
BgL_auxz00_5389 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27450)), BGl_string3402z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1263z00_1437); 
FAILURE(BgL_auxz00_5389,BFALSE,BFALSE);} 
BgL_auxz00_5385 = 
(long)CINT(BgL_tmpz00_5386); } 
return 
BGl_makezd2u64vectorzd2zz__srfi4z00(BgL_auxz00_5385, BgL_auxz00_5394);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3400z00zz__srfi4z00, BGl_string3365z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1261z00_65)));} } } } 

}



/* make-u64vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2u64vectorzd2zz__srfi4z00(long BgL_lenz00_63, uint64_t BgL_initz00_64)
{
{ /* Llib/srfi4.scm 668 */
{ /* Llib/srfi4.scm 668 */
obj_t BgL_vz00_1444;
{ /* Llib/srfi4.scm 668 */
int32_t BgL_tmpz00_5409;
BgL_tmpz00_5409 = 
(int32_t)(BgL_lenz00_63); 
BgL_vz00_1444 = 
BGL_ALLOC_U64VECTOR(BgL_tmpz00_5409); } 
{ 
long BgL_iz00_2517;
BgL_iz00_2517 = ((long)0); 
BgL_loopz00_2516:
if(
(BgL_iz00_2517<BgL_lenz00_63))
{ /* Llib/srfi4.scm 668 */
{ /* Llib/srfi4.scm 668 */
long BgL_l2364z00_3445;
BgL_l2364z00_3445 = 
BGL_HVECTOR_LENGTH(BgL_vz00_1444); 
if(
BOUND_CHECK(BgL_iz00_2517, BgL_l2364z00_3445))
{ /* Llib/srfi4.scm 668 */
BGL_U64VSET(BgL_vz00_1444, BgL_iz00_2517, BgL_initz00_64); }  else 
{ 
obj_t BgL_auxz00_5418;
BgL_auxz00_5418 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27450)), BGl_string3404z00zz__srfi4z00, BgL_vz00_1444, 
(int)(BgL_l2364z00_3445), 
(int)(BgL_iz00_2517)); 
FAILURE(BgL_auxz00_5418,BFALSE,BFALSE);} } BUNSPEC; 
{ 
long BgL_iz00_5424;
BgL_iz00_5424 = 
(BgL_iz00_2517+((long)1)); 
BgL_iz00_2517 = BgL_iz00_5424; 
goto BgL_loopz00_2516;} }  else 
{ /* Llib/srfi4.scm 668 */((bool_t)0); } } 
return BgL_vz00_1444;} } 

}



/* _make-f32vector */
obj_t BGl__makezd2f32vectorzd2zz__srfi4z00(obj_t BgL_env1267z00_70, obj_t BgL_opt1266z00_69)
{
{ /* Llib/srfi4.scm 669 */
{ /* Llib/srfi4.scm 669 */
obj_t BgL_g1268z00_1451;
BgL_g1268z00_1451 = 
VECTOR_REF(BgL_opt1266z00_69,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1266z00_69)) { case ((long)1) : 

{ /* Llib/srfi4.scm 669 */

{ /* Llib/srfi4.scm 669 */
long BgL_auxz00_5427;
{ /* Llib/srfi4.scm 669 */
obj_t BgL_tmpz00_5428;
if(
INTEGERP(BgL_g1268z00_1451))
{ /* Llib/srfi4.scm 669 */
BgL_tmpz00_5428 = BgL_g1268z00_1451
; }  else 
{ 
obj_t BgL_auxz00_5431;
BgL_auxz00_5431 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27484)), BGl_string3407z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1268z00_1451); 
FAILURE(BgL_auxz00_5431,BFALSE,BFALSE);} 
BgL_auxz00_5427 = 
(long)CINT(BgL_tmpz00_5428); } 
return 
BGl_makezd2f32vectorzd2zz__srfi4z00(BgL_auxz00_5427, 
(float)(((double)0.0)));} } break;case ((long)2) : 

{ /* Llib/srfi4.scm 669 */
obj_t BgL_initz00_1456;
BgL_initz00_1456 = 
VECTOR_REF(BgL_opt1266z00_69,((long)1)); 
{ /* Llib/srfi4.scm 669 */

{ /* Llib/srfi4.scm 669 */
float BgL_auxz00_5448;long BgL_auxz00_5439;
{ /* Llib/srfi4.scm 669 */
obj_t BgL_tmpz00_5449;
if(
REALP(BgL_initz00_1456))
{ /* Llib/srfi4.scm 669 */
BgL_tmpz00_5449 = BgL_initz00_1456
; }  else 
{ 
obj_t BgL_auxz00_5452;
BgL_auxz00_5452 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27484)), BGl_string3407z00zz__srfi4z00, BGl_string3408z00zz__srfi4z00, BgL_initz00_1456); 
FAILURE(BgL_auxz00_5452,BFALSE,BFALSE);} 
BgL_auxz00_5448 = 
REAL_TO_FLOAT(BgL_tmpz00_5449); } 
{ /* Llib/srfi4.scm 669 */
obj_t BgL_tmpz00_5440;
if(
INTEGERP(BgL_g1268z00_1451))
{ /* Llib/srfi4.scm 669 */
BgL_tmpz00_5440 = BgL_g1268z00_1451
; }  else 
{ 
obj_t BgL_auxz00_5443;
BgL_auxz00_5443 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27484)), BGl_string3407z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1268z00_1451); 
FAILURE(BgL_auxz00_5443,BFALSE,BFALSE);} 
BgL_auxz00_5439 = 
(long)CINT(BgL_tmpz00_5440); } 
return 
BGl_makezd2f32vectorzd2zz__srfi4z00(BgL_auxz00_5439, BgL_auxz00_5448);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3405z00zz__srfi4z00, BGl_string3365z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1266z00_69)));} } } } 

}



/* make-f32vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2f32vectorzd2zz__srfi4z00(long BgL_lenz00_67, float BgL_initz00_68)
{
{ /* Llib/srfi4.scm 669 */
{ /* Llib/srfi4.scm 669 */
obj_t BgL_vz00_1458;
{ /* Llib/srfi4.scm 669 */
int32_t BgL_tmpz00_5463;
BgL_tmpz00_5463 = 
(int32_t)(BgL_lenz00_67); 
BgL_vz00_1458 = 
BGL_ALLOC_F32VECTOR(BgL_tmpz00_5463); } 
{ 
long BgL_iz00_2531;
BgL_iz00_2531 = ((long)0); 
BgL_loopz00_2530:
if(
(BgL_iz00_2531<BgL_lenz00_67))
{ /* Llib/srfi4.scm 669 */
{ /* Llib/srfi4.scm 669 */
long BgL_l2368z00_3449;
BgL_l2368z00_3449 = 
BGL_HVECTOR_LENGTH(BgL_vz00_1458); 
if(
BOUND_CHECK(BgL_iz00_2531, BgL_l2368z00_3449))
{ /* Llib/srfi4.scm 669 */
BGL_F32VSET(BgL_vz00_1458, BgL_iz00_2531, BgL_initz00_68); }  else 
{ 
obj_t BgL_auxz00_5472;
BgL_auxz00_5472 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27484)), BGl_string3409z00zz__srfi4z00, BgL_vz00_1458, 
(int)(BgL_l2368z00_3449), 
(int)(BgL_iz00_2531)); 
FAILURE(BgL_auxz00_5472,BFALSE,BFALSE);} } BUNSPEC; 
{ 
long BgL_iz00_5478;
BgL_iz00_5478 = 
(BgL_iz00_2531+((long)1)); 
BgL_iz00_2531 = BgL_iz00_5478; 
goto BgL_loopz00_2530;} }  else 
{ /* Llib/srfi4.scm 669 */((bool_t)0); } } 
return BgL_vz00_1458;} } 

}



/* _make-f64vector */
obj_t BGl__makezd2f64vectorzd2zz__srfi4z00(obj_t BgL_env1272z00_74, obj_t BgL_opt1271z00_73)
{
{ /* Llib/srfi4.scm 670 */
{ /* Llib/srfi4.scm 670 */
obj_t BgL_g1273z00_1465;
BgL_g1273z00_1465 = 
VECTOR_REF(BgL_opt1271z00_73,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1271z00_73)) { case ((long)1) : 

{ /* Llib/srfi4.scm 670 */

{ /* Llib/srfi4.scm 670 */
long BgL_auxz00_5481;
{ /* Llib/srfi4.scm 670 */
obj_t BgL_tmpz00_5482;
if(
INTEGERP(BgL_g1273z00_1465))
{ /* Llib/srfi4.scm 670 */
BgL_tmpz00_5482 = BgL_g1273z00_1465
; }  else 
{ 
obj_t BgL_auxz00_5485;
BgL_auxz00_5485 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27515)), BGl_string3412z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1273z00_1465); 
FAILURE(BgL_auxz00_5485,BFALSE,BFALSE);} 
BgL_auxz00_5481 = 
(long)CINT(BgL_tmpz00_5482); } 
return 
BGl_makezd2f64vectorzd2zz__srfi4z00(BgL_auxz00_5481, ((double)0.0));} } break;case ((long)2) : 

{ /* Llib/srfi4.scm 670 */
obj_t BgL_initz00_1470;
BgL_initz00_1470 = 
VECTOR_REF(BgL_opt1271z00_73,((long)1)); 
{ /* Llib/srfi4.scm 670 */

{ /* Llib/srfi4.scm 670 */
double BgL_auxz00_5501;long BgL_auxz00_5492;
{ /* Llib/srfi4.scm 670 */
obj_t BgL_tmpz00_5502;
if(
REALP(BgL_initz00_1470))
{ /* Llib/srfi4.scm 670 */
BgL_tmpz00_5502 = BgL_initz00_1470
; }  else 
{ 
obj_t BgL_auxz00_5505;
BgL_auxz00_5505 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27515)), BGl_string3412z00zz__srfi4z00, BGl_string3408z00zz__srfi4z00, BgL_initz00_1470); 
FAILURE(BgL_auxz00_5505,BFALSE,BFALSE);} 
BgL_auxz00_5501 = 
REAL_TO_DOUBLE(BgL_tmpz00_5502); } 
{ /* Llib/srfi4.scm 670 */
obj_t BgL_tmpz00_5493;
if(
INTEGERP(BgL_g1273z00_1465))
{ /* Llib/srfi4.scm 670 */
BgL_tmpz00_5493 = BgL_g1273z00_1465
; }  else 
{ 
obj_t BgL_auxz00_5496;
BgL_auxz00_5496 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27515)), BGl_string3412z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_g1273z00_1465); 
FAILURE(BgL_auxz00_5496,BFALSE,BFALSE);} 
BgL_auxz00_5492 = 
(long)CINT(BgL_tmpz00_5493); } 
return 
BGl_makezd2f64vectorzd2zz__srfi4z00(BgL_auxz00_5492, BgL_auxz00_5501);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3410z00zz__srfi4z00, BGl_string3365z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1271z00_73)));} } } } 

}



/* make-f64vector */
BGL_EXPORTED_DEF obj_t BGl_makezd2f64vectorzd2zz__srfi4z00(long BgL_lenz00_71, double BgL_initz00_72)
{
{ /* Llib/srfi4.scm 670 */
{ /* Llib/srfi4.scm 670 */
obj_t BgL_vz00_1472;
{ /* Llib/srfi4.scm 670 */
int32_t BgL_tmpz00_5516;
BgL_tmpz00_5516 = 
(int32_t)(BgL_lenz00_71); 
BgL_vz00_1472 = 
BGL_ALLOC_F64VECTOR(BgL_tmpz00_5516); } 
{ 
long BgL_iz00_2545;
BgL_iz00_2545 = ((long)0); 
BgL_loopz00_2544:
if(
(BgL_iz00_2545<BgL_lenz00_71))
{ /* Llib/srfi4.scm 670 */
{ /* Llib/srfi4.scm 670 */
long BgL_l2372z00_3453;
BgL_l2372z00_3453 = 
BGL_HVECTOR_LENGTH(BgL_vz00_1472); 
if(
BOUND_CHECK(BgL_iz00_2545, BgL_l2372z00_3453))
{ /* Llib/srfi4.scm 670 */
BGL_F64VSET(BgL_vz00_1472, BgL_iz00_2545, BgL_initz00_72); }  else 
{ 
obj_t BgL_auxz00_5525;
BgL_auxz00_5525 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27515)), BGl_string3413z00zz__srfi4z00, BgL_vz00_1472, 
(int)(BgL_l2372z00_3453), 
(int)(BgL_iz00_2545)); 
FAILURE(BgL_auxz00_5525,BFALSE,BFALSE);} } BUNSPEC; 
{ 
long BgL_iz00_5531;
BgL_iz00_5531 = 
(BgL_iz00_2545+((long)1)); 
BgL_iz00_2545 = BgL_iz00_5531; 
goto BgL_loopz00_2544;} }  else 
{ /* Llib/srfi4.scm 670 */((bool_t)0); } } 
return BgL_vz00_1472;} } 

}



/* hvector-range-error */
BGL_EXPORTED_DEF obj_t BGl_hvectorzd2rangezd2errorz00zz__srfi4z00(obj_t BgL_funz00_75, obj_t BgL_vz00_76, long BgL_kz00_77)
{
{ /* Llib/srfi4.scm 675 */
{ /* Llib/srfi4.scm 678 */
obj_t BgL_arg1438z00_2553;
{ /* Llib/srfi4.scm 678 */
obj_t BgL_arg1439z00_2554;
{ /* Llib/srfi4.scm 678 */
long BgL_arg1440z00_2555;
{ /* Llib/srfi4.scm 678 */
long BgL_arg1442z00_2556;
BgL_arg1442z00_2556 = 
BGL_HVECTOR_LENGTH(BgL_vz00_76); 
BgL_arg1440z00_2555 = 
(BgL_arg1442z00_2556-((long)1)); } 
{ /* Llib/srfi4.scm 678 */

BgL_arg1439z00_2554 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg1440z00_2555, ((long)10)); } } 
BgL_arg1438z00_2553 = 
string_append_3(BGl_string3414z00zz__srfi4z00, BgL_arg1439z00_2554, BGl_string3415z00zz__srfi4z00); } 
return 
BGl_errorz00zz__errorz00(BgL_funz00_75, BgL_arg1438z00_2553, 
BINT(BgL_kz00_77));} } 

}



/* &hvector-range-error */
obj_t BGl_z62hvectorzd2rangezd2errorz62zz__srfi4z00(obj_t BgL_envz00_3371, obj_t BgL_funz00_3372, obj_t BgL_vz00_3373, obj_t BgL_kz00_3374)
{
{ /* Llib/srfi4.scm 675 */
{ /* Llib/srfi4.scm 678 */
long BgL_auxz00_5546;obj_t BgL_auxz00_5539;
{ /* Llib/srfi4.scm 678 */
obj_t BgL_tmpz00_5547;
if(
INTEGERP(BgL_kz00_3374))
{ /* Llib/srfi4.scm 678 */
BgL_tmpz00_5547 = BgL_kz00_3374
; }  else 
{ 
obj_t BgL_auxz00_5550;
BgL_auxz00_5550 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27892)), BGl_string3416z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3374); 
FAILURE(BgL_auxz00_5550,BFALSE,BFALSE);} 
BgL_auxz00_5546 = 
(long)CINT(BgL_tmpz00_5547); } 
if(
STRINGP(BgL_funz00_3372))
{ /* Llib/srfi4.scm 678 */
BgL_auxz00_5539 = BgL_funz00_3372
; }  else 
{ 
obj_t BgL_auxz00_5542;
BgL_auxz00_5542 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)27892)), BGl_string3416z00zz__srfi4z00, BGl_string3417z00zz__srfi4z00, BgL_funz00_3372); 
FAILURE(BgL_auxz00_5542,BFALSE,BFALSE);} 
return 
BGl_hvectorzd2rangezd2errorz00zz__srfi4z00(BgL_auxz00_5539, BgL_vz00_3373, BgL_auxz00_5546);} } 

}



/* s8vector-ref */
BGL_EXPORTED_DEF int8_t BGl_s8vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_78, long BgL_kz00_79)
{
{ /* Llib/srfi4.scm 685 */
{ /* Llib/srfi4.scm 686 */
long BgL_l2376z00_4439;
BgL_l2376z00_4439 = 
BGL_HVECTOR_LENGTH(BgL_vz00_78); 
if(
BOUND_CHECK(BgL_kz00_79, BgL_l2376z00_4439))
{ /* Llib/srfi4.scm 686 */
return 
BGL_S8VREF(BgL_vz00_78, BgL_kz00_79);}  else 
{ 
obj_t BgL_auxz00_5560;
BgL_auxz00_5560 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28196)), BGl_string3418z00zz__srfi4z00, BgL_vz00_78, 
(int)(BgL_l2376z00_4439), 
(int)(BgL_kz00_79)); 
FAILURE(BgL_auxz00_5560,BFALSE,BFALSE);} } } 

}



/* &s8vector-ref */
obj_t BGl_z62s8vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3234, obj_t BgL_vz00_3235, obj_t BgL_kz00_3236)
{
{ /* Llib/srfi4.scm 685 */
{ /* Llib/srfi4.scm 686 */
int8_t BgL_tmpz00_5566;
{ /* Llib/srfi4.scm 686 */
obj_t BgL_vz00_4440;long BgL_kz00_4441;
if(
BGL_S8VECTORP(BgL_vz00_3235))
{ /* Llib/srfi4.scm 686 */
BgL_vz00_4440 = BgL_vz00_3235; }  else 
{ 
obj_t BgL_auxz00_5569;
BgL_auxz00_5569 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28196)), BGl_string3419z00zz__srfi4z00, BGl_string3343z00zz__srfi4z00, BgL_vz00_3235); 
FAILURE(BgL_auxz00_5569,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 686 */
obj_t BgL_tmpz00_5573;
if(
INTEGERP(BgL_kz00_3236))
{ /* Llib/srfi4.scm 686 */
BgL_tmpz00_5573 = BgL_kz00_3236
; }  else 
{ 
obj_t BgL_auxz00_5576;
BgL_auxz00_5576 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28196)), BGl_string3419z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3236); 
FAILURE(BgL_auxz00_5576,BFALSE,BFALSE);} 
BgL_kz00_4441 = 
(long)CINT(BgL_tmpz00_5573); } 
{ /* Llib/srfi4.scm 686 */
long BgL_l2376z00_4442;
BgL_l2376z00_4442 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4440); 
if(
BOUND_CHECK(BgL_kz00_4441, BgL_l2376z00_4442))
{ /* Llib/srfi4.scm 686 */
BgL_tmpz00_5566 = 
BGL_S8VREF(BgL_vz00_4440, BgL_kz00_4441)
; }  else 
{ 
obj_t BgL_auxz00_5585;
BgL_auxz00_5585 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28196)), BGl_string3418z00zz__srfi4z00, BgL_vz00_4440, 
(int)(BgL_l2376z00_4442), 
(int)(BgL_kz00_4441)); 
FAILURE(BgL_auxz00_5585,BFALSE,BFALSE);} } } 
return 
BGL_INT8_TO_BINT8(BgL_tmpz00_5566);} } 

}



/* u8vector-ref */
BGL_EXPORTED_DEF uint8_t BGl_u8vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_80, long BgL_kz00_81)
{
{ /* Llib/srfi4.scm 688 */
{ /* Llib/srfi4.scm 689 */
long BgL_l2380z00_4443;
BgL_l2380z00_4443 = 
BGL_HVECTOR_LENGTH(BgL_vz00_80); 
if(
BOUND_CHECK(BgL_kz00_81, BgL_l2380z00_4443))
{ /* Llib/srfi4.scm 689 */
return 
BGL_U8VREF(BgL_vz00_80, BgL_kz00_81);}  else 
{ 
obj_t BgL_auxz00_5596;
BgL_auxz00_5596 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28255)), BGl_string3420z00zz__srfi4z00, BgL_vz00_80, 
(int)(BgL_l2380z00_4443), 
(int)(BgL_kz00_81)); 
FAILURE(BgL_auxz00_5596,BFALSE,BFALSE);} } } 

}



/* &u8vector-ref */
obj_t BGl_z62u8vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3244, obj_t BgL_vz00_3245, obj_t BgL_kz00_3246)
{
{ /* Llib/srfi4.scm 688 */
{ /* Llib/srfi4.scm 689 */
uint8_t BgL_tmpz00_5602;
{ /* Llib/srfi4.scm 689 */
obj_t BgL_vz00_4444;long BgL_kz00_4445;
if(
BGL_U8VECTORP(BgL_vz00_3245))
{ /* Llib/srfi4.scm 689 */
BgL_vz00_4444 = BgL_vz00_3245; }  else 
{ 
obj_t BgL_auxz00_5605;
BgL_auxz00_5605 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28255)), BGl_string3421z00zz__srfi4z00, BGl_string3345z00zz__srfi4z00, BgL_vz00_3245); 
FAILURE(BgL_auxz00_5605,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 689 */
obj_t BgL_tmpz00_5609;
if(
INTEGERP(BgL_kz00_3246))
{ /* Llib/srfi4.scm 689 */
BgL_tmpz00_5609 = BgL_kz00_3246
; }  else 
{ 
obj_t BgL_auxz00_5612;
BgL_auxz00_5612 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28255)), BGl_string3421z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3246); 
FAILURE(BgL_auxz00_5612,BFALSE,BFALSE);} 
BgL_kz00_4445 = 
(long)CINT(BgL_tmpz00_5609); } 
{ /* Llib/srfi4.scm 689 */
long BgL_l2380z00_4446;
BgL_l2380z00_4446 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4444); 
if(
BOUND_CHECK(BgL_kz00_4445, BgL_l2380z00_4446))
{ /* Llib/srfi4.scm 689 */
BgL_tmpz00_5602 = 
BGL_U8VREF(BgL_vz00_4444, BgL_kz00_4445)
; }  else 
{ 
obj_t BgL_auxz00_5621;
BgL_auxz00_5621 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28255)), BGl_string3420z00zz__srfi4z00, BgL_vz00_4444, 
(int)(BgL_l2380z00_4446), 
(int)(BgL_kz00_4445)); 
FAILURE(BgL_auxz00_5621,BFALSE,BFALSE);} } } 
return 
BGL_UINT8_TO_BUINT8(BgL_tmpz00_5602);} } 

}



/* s16vector-ref */
BGL_EXPORTED_DEF int16_t BGl_s16vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_82, long BgL_kz00_83)
{
{ /* Llib/srfi4.scm 691 */
{ /* Llib/srfi4.scm 692 */
long BgL_l2384z00_4447;
BgL_l2384z00_4447 = 
BGL_HVECTOR_LENGTH(BgL_vz00_82); 
if(
BOUND_CHECK(BgL_kz00_83, BgL_l2384z00_4447))
{ /* Llib/srfi4.scm 692 */
return 
BGL_S16VREF(BgL_vz00_82, BgL_kz00_83);}  else 
{ 
obj_t BgL_auxz00_5632;
BgL_auxz00_5632 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28315)), BGl_string3422z00zz__srfi4z00, BgL_vz00_82, 
(int)(BgL_l2384z00_4447), 
(int)(BgL_kz00_83)); 
FAILURE(BgL_auxz00_5632,BFALSE,BFALSE);} } } 

}



/* &s16vector-ref */
obj_t BGl_z62s16vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3254, obj_t BgL_vz00_3255, obj_t BgL_kz00_3256)
{
{ /* Llib/srfi4.scm 691 */
{ /* Llib/srfi4.scm 692 */
int16_t BgL_tmpz00_5638;
{ /* Llib/srfi4.scm 692 */
obj_t BgL_vz00_4448;long BgL_kz00_4449;
if(
BGL_S16VECTORP(BgL_vz00_3255))
{ /* Llib/srfi4.scm 692 */
BgL_vz00_4448 = BgL_vz00_3255; }  else 
{ 
obj_t BgL_auxz00_5641;
BgL_auxz00_5641 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28315)), BGl_string3423z00zz__srfi4z00, BGl_string3347z00zz__srfi4z00, BgL_vz00_3255); 
FAILURE(BgL_auxz00_5641,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 692 */
obj_t BgL_tmpz00_5645;
if(
INTEGERP(BgL_kz00_3256))
{ /* Llib/srfi4.scm 692 */
BgL_tmpz00_5645 = BgL_kz00_3256
; }  else 
{ 
obj_t BgL_auxz00_5648;
BgL_auxz00_5648 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28315)), BGl_string3423z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3256); 
FAILURE(BgL_auxz00_5648,BFALSE,BFALSE);} 
BgL_kz00_4449 = 
(long)CINT(BgL_tmpz00_5645); } 
{ /* Llib/srfi4.scm 692 */
long BgL_l2384z00_4450;
BgL_l2384z00_4450 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4448); 
if(
BOUND_CHECK(BgL_kz00_4449, BgL_l2384z00_4450))
{ /* Llib/srfi4.scm 692 */
BgL_tmpz00_5638 = 
BGL_S16VREF(BgL_vz00_4448, BgL_kz00_4449)
; }  else 
{ 
obj_t BgL_auxz00_5657;
BgL_auxz00_5657 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28315)), BGl_string3422z00zz__srfi4z00, BgL_vz00_4448, 
(int)(BgL_l2384z00_4450), 
(int)(BgL_kz00_4449)); 
FAILURE(BgL_auxz00_5657,BFALSE,BFALSE);} } } 
return 
BGL_INT16_TO_BINT16(BgL_tmpz00_5638);} } 

}



/* u16vector-ref */
BGL_EXPORTED_DEF uint16_t BGl_u16vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_84, long BgL_kz00_85)
{
{ /* Llib/srfi4.scm 694 */
{ /* Llib/srfi4.scm 695 */
long BgL_l2388z00_4451;
BgL_l2388z00_4451 = 
BGL_HVECTOR_LENGTH(BgL_vz00_84); 
if(
BOUND_CHECK(BgL_kz00_85, BgL_l2388z00_4451))
{ /* Llib/srfi4.scm 695 */
return 
BGL_U16VREF(BgL_vz00_84, BgL_kz00_85);}  else 
{ 
obj_t BgL_auxz00_5668;
BgL_auxz00_5668 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28376)), BGl_string3424z00zz__srfi4z00, BgL_vz00_84, 
(int)(BgL_l2388z00_4451), 
(int)(BgL_kz00_85)); 
FAILURE(BgL_auxz00_5668,BFALSE,BFALSE);} } } 

}



/* &u16vector-ref */
obj_t BGl_z62u16vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3264, obj_t BgL_vz00_3265, obj_t BgL_kz00_3266)
{
{ /* Llib/srfi4.scm 694 */
{ /* Llib/srfi4.scm 695 */
uint16_t BgL_tmpz00_5674;
{ /* Llib/srfi4.scm 695 */
obj_t BgL_vz00_4452;long BgL_kz00_4453;
if(
BGL_U16VECTORP(BgL_vz00_3265))
{ /* Llib/srfi4.scm 695 */
BgL_vz00_4452 = BgL_vz00_3265; }  else 
{ 
obj_t BgL_auxz00_5677;
BgL_auxz00_5677 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28376)), BGl_string3425z00zz__srfi4z00, BGl_string3349z00zz__srfi4z00, BgL_vz00_3265); 
FAILURE(BgL_auxz00_5677,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 695 */
obj_t BgL_tmpz00_5681;
if(
INTEGERP(BgL_kz00_3266))
{ /* Llib/srfi4.scm 695 */
BgL_tmpz00_5681 = BgL_kz00_3266
; }  else 
{ 
obj_t BgL_auxz00_5684;
BgL_auxz00_5684 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28376)), BGl_string3425z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3266); 
FAILURE(BgL_auxz00_5684,BFALSE,BFALSE);} 
BgL_kz00_4453 = 
(long)CINT(BgL_tmpz00_5681); } 
{ /* Llib/srfi4.scm 695 */
long BgL_l2388z00_4454;
BgL_l2388z00_4454 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4452); 
if(
BOUND_CHECK(BgL_kz00_4453, BgL_l2388z00_4454))
{ /* Llib/srfi4.scm 695 */
BgL_tmpz00_5674 = 
BGL_U16VREF(BgL_vz00_4452, BgL_kz00_4453)
; }  else 
{ 
obj_t BgL_auxz00_5693;
BgL_auxz00_5693 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28376)), BGl_string3424z00zz__srfi4z00, BgL_vz00_4452, 
(int)(BgL_l2388z00_4454), 
(int)(BgL_kz00_4453)); 
FAILURE(BgL_auxz00_5693,BFALSE,BFALSE);} } } 
return 
BGL_UINT16_TO_BUINT16(BgL_tmpz00_5674);} } 

}



/* s32vector-ref */
BGL_EXPORTED_DEF int32_t BGl_s32vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_86, long BgL_kz00_87)
{
{ /* Llib/srfi4.scm 697 */
{ /* Llib/srfi4.scm 698 */
long BgL_l2392z00_4455;
BgL_l2392z00_4455 = 
BGL_HVECTOR_LENGTH(BgL_vz00_86); 
if(
BOUND_CHECK(BgL_kz00_87, BgL_l2392z00_4455))
{ /* Llib/srfi4.scm 698 */
return 
BGL_S32VREF(BgL_vz00_86, BgL_kz00_87);}  else 
{ 
obj_t BgL_auxz00_5704;
BgL_auxz00_5704 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28437)), BGl_string3426z00zz__srfi4z00, BgL_vz00_86, 
(int)(BgL_l2392z00_4455), 
(int)(BgL_kz00_87)); 
FAILURE(BgL_auxz00_5704,BFALSE,BFALSE);} } } 

}



/* &s32vector-ref */
obj_t BGl_z62s32vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3274, obj_t BgL_vz00_3275, obj_t BgL_kz00_3276)
{
{ /* Llib/srfi4.scm 697 */
{ /* Llib/srfi4.scm 698 */
int32_t BgL_tmpz00_5710;
{ /* Llib/srfi4.scm 698 */
obj_t BgL_vz00_4456;long BgL_kz00_4457;
if(
BGL_S32VECTORP(BgL_vz00_3275))
{ /* Llib/srfi4.scm 698 */
BgL_vz00_4456 = BgL_vz00_3275; }  else 
{ 
obj_t BgL_auxz00_5713;
BgL_auxz00_5713 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28437)), BGl_string3427z00zz__srfi4z00, BGl_string3351z00zz__srfi4z00, BgL_vz00_3275); 
FAILURE(BgL_auxz00_5713,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 698 */
obj_t BgL_tmpz00_5717;
if(
INTEGERP(BgL_kz00_3276))
{ /* Llib/srfi4.scm 698 */
BgL_tmpz00_5717 = BgL_kz00_3276
; }  else 
{ 
obj_t BgL_auxz00_5720;
BgL_auxz00_5720 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28437)), BGl_string3427z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3276); 
FAILURE(BgL_auxz00_5720,BFALSE,BFALSE);} 
BgL_kz00_4457 = 
(long)CINT(BgL_tmpz00_5717); } 
{ /* Llib/srfi4.scm 698 */
long BgL_l2392z00_4458;
BgL_l2392z00_4458 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4456); 
if(
BOUND_CHECK(BgL_kz00_4457, BgL_l2392z00_4458))
{ /* Llib/srfi4.scm 698 */
BgL_tmpz00_5710 = 
BGL_S32VREF(BgL_vz00_4456, BgL_kz00_4457)
; }  else 
{ 
obj_t BgL_auxz00_5729;
BgL_auxz00_5729 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28437)), BGl_string3426z00zz__srfi4z00, BgL_vz00_4456, 
(int)(BgL_l2392z00_4458), 
(int)(BgL_kz00_4457)); 
FAILURE(BgL_auxz00_5729,BFALSE,BFALSE);} } } 
return 
BGL_INT32_TO_BINT32(BgL_tmpz00_5710);} } 

}



/* u32vector-ref */
BGL_EXPORTED_DEF uint32_t BGl_u32vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_88, long BgL_kz00_89)
{
{ /* Llib/srfi4.scm 700 */
{ /* Llib/srfi4.scm 701 */
long BgL_l2396z00_4459;
BgL_l2396z00_4459 = 
BGL_HVECTOR_LENGTH(BgL_vz00_88); 
if(
BOUND_CHECK(BgL_kz00_89, BgL_l2396z00_4459))
{ /* Llib/srfi4.scm 701 */
return 
BGL_U32VREF(BgL_vz00_88, BgL_kz00_89);}  else 
{ 
obj_t BgL_auxz00_5740;
BgL_auxz00_5740 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28498)), BGl_string3428z00zz__srfi4z00, BgL_vz00_88, 
(int)(BgL_l2396z00_4459), 
(int)(BgL_kz00_89)); 
FAILURE(BgL_auxz00_5740,BFALSE,BFALSE);} } } 

}



/* &u32vector-ref */
obj_t BGl_z62u32vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3284, obj_t BgL_vz00_3285, obj_t BgL_kz00_3286)
{
{ /* Llib/srfi4.scm 700 */
{ /* Llib/srfi4.scm 701 */
uint32_t BgL_tmpz00_5746;
{ /* Llib/srfi4.scm 701 */
obj_t BgL_vz00_4460;long BgL_kz00_4461;
if(
BGL_U32VECTORP(BgL_vz00_3285))
{ /* Llib/srfi4.scm 701 */
BgL_vz00_4460 = BgL_vz00_3285; }  else 
{ 
obj_t BgL_auxz00_5749;
BgL_auxz00_5749 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28498)), BGl_string3429z00zz__srfi4z00, BGl_string3353z00zz__srfi4z00, BgL_vz00_3285); 
FAILURE(BgL_auxz00_5749,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 701 */
obj_t BgL_tmpz00_5753;
if(
INTEGERP(BgL_kz00_3286))
{ /* Llib/srfi4.scm 701 */
BgL_tmpz00_5753 = BgL_kz00_3286
; }  else 
{ 
obj_t BgL_auxz00_5756;
BgL_auxz00_5756 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28498)), BGl_string3429z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3286); 
FAILURE(BgL_auxz00_5756,BFALSE,BFALSE);} 
BgL_kz00_4461 = 
(long)CINT(BgL_tmpz00_5753); } 
{ /* Llib/srfi4.scm 701 */
long BgL_l2396z00_4462;
BgL_l2396z00_4462 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4460); 
if(
BOUND_CHECK(BgL_kz00_4461, BgL_l2396z00_4462))
{ /* Llib/srfi4.scm 701 */
BgL_tmpz00_5746 = 
BGL_U32VREF(BgL_vz00_4460, BgL_kz00_4461)
; }  else 
{ 
obj_t BgL_auxz00_5765;
BgL_auxz00_5765 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28498)), BGl_string3428z00zz__srfi4z00, BgL_vz00_4460, 
(int)(BgL_l2396z00_4462), 
(int)(BgL_kz00_4461)); 
FAILURE(BgL_auxz00_5765,BFALSE,BFALSE);} } } 
return 
BGL_UINT32_TO_BUINT32(BgL_tmpz00_5746);} } 

}



/* s64vector-ref */
BGL_EXPORTED_DEF int64_t BGl_s64vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_90, long BgL_kz00_91)
{
{ /* Llib/srfi4.scm 703 */
{ /* Llib/srfi4.scm 704 */
long BgL_l2400z00_4463;
BgL_l2400z00_4463 = 
BGL_HVECTOR_LENGTH(BgL_vz00_90); 
if(
BOUND_CHECK(BgL_kz00_91, BgL_l2400z00_4463))
{ /* Llib/srfi4.scm 704 */
return 
BGL_S64VREF(BgL_vz00_90, BgL_kz00_91);}  else 
{ 
obj_t BgL_auxz00_5776;
BgL_auxz00_5776 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28559)), BGl_string3430z00zz__srfi4z00, BgL_vz00_90, 
(int)(BgL_l2400z00_4463), 
(int)(BgL_kz00_91)); 
FAILURE(BgL_auxz00_5776,BFALSE,BFALSE);} } } 

}



/* &s64vector-ref */
obj_t BGl_z62s64vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3294, obj_t BgL_vz00_3295, obj_t BgL_kz00_3296)
{
{ /* Llib/srfi4.scm 703 */
{ /* Llib/srfi4.scm 704 */
int64_t BgL_tmpz00_5782;
{ /* Llib/srfi4.scm 704 */
obj_t BgL_vz00_4464;long BgL_kz00_4465;
if(
BGL_S64VECTORP(BgL_vz00_3295))
{ /* Llib/srfi4.scm 704 */
BgL_vz00_4464 = BgL_vz00_3295; }  else 
{ 
obj_t BgL_auxz00_5785;
BgL_auxz00_5785 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28559)), BGl_string3431z00zz__srfi4z00, BGl_string3355z00zz__srfi4z00, BgL_vz00_3295); 
FAILURE(BgL_auxz00_5785,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 704 */
obj_t BgL_tmpz00_5789;
if(
INTEGERP(BgL_kz00_3296))
{ /* Llib/srfi4.scm 704 */
BgL_tmpz00_5789 = BgL_kz00_3296
; }  else 
{ 
obj_t BgL_auxz00_5792;
BgL_auxz00_5792 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28559)), BGl_string3431z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3296); 
FAILURE(BgL_auxz00_5792,BFALSE,BFALSE);} 
BgL_kz00_4465 = 
(long)CINT(BgL_tmpz00_5789); } 
{ /* Llib/srfi4.scm 704 */
long BgL_l2400z00_4466;
BgL_l2400z00_4466 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4464); 
if(
BOUND_CHECK(BgL_kz00_4465, BgL_l2400z00_4466))
{ /* Llib/srfi4.scm 704 */
BgL_tmpz00_5782 = 
BGL_S64VREF(BgL_vz00_4464, BgL_kz00_4465)
; }  else 
{ 
obj_t BgL_auxz00_5801;
BgL_auxz00_5801 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28559)), BGl_string3430z00zz__srfi4z00, BgL_vz00_4464, 
(int)(BgL_l2400z00_4466), 
(int)(BgL_kz00_4465)); 
FAILURE(BgL_auxz00_5801,BFALSE,BFALSE);} } } 
return 
BGL_INT64_TO_BINT64(BgL_tmpz00_5782);} } 

}



/* u64vector-ref */
BGL_EXPORTED_DEF uint64_t BGl_u64vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_92, long BgL_kz00_93)
{
{ /* Llib/srfi4.scm 706 */
{ /* Llib/srfi4.scm 707 */
long BgL_l2404z00_4467;
BgL_l2404z00_4467 = 
BGL_HVECTOR_LENGTH(BgL_vz00_92); 
if(
BOUND_CHECK(BgL_kz00_93, BgL_l2404z00_4467))
{ /* Llib/srfi4.scm 707 */
return 
BGL_U64VREF(BgL_vz00_92, BgL_kz00_93);}  else 
{ 
obj_t BgL_auxz00_5812;
BgL_auxz00_5812 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28620)), BGl_string3432z00zz__srfi4z00, BgL_vz00_92, 
(int)(BgL_l2404z00_4467), 
(int)(BgL_kz00_93)); 
FAILURE(BgL_auxz00_5812,BFALSE,BFALSE);} } } 

}



/* &u64vector-ref */
obj_t BGl_z62u64vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3304, obj_t BgL_vz00_3305, obj_t BgL_kz00_3306)
{
{ /* Llib/srfi4.scm 706 */
{ /* Llib/srfi4.scm 707 */
uint64_t BgL_tmpz00_5818;
{ /* Llib/srfi4.scm 707 */
obj_t BgL_vz00_4468;long BgL_kz00_4469;
if(
BGL_U64VECTORP(BgL_vz00_3305))
{ /* Llib/srfi4.scm 707 */
BgL_vz00_4468 = BgL_vz00_3305; }  else 
{ 
obj_t BgL_auxz00_5821;
BgL_auxz00_5821 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28620)), BGl_string3433z00zz__srfi4z00, BGl_string3357z00zz__srfi4z00, BgL_vz00_3305); 
FAILURE(BgL_auxz00_5821,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 707 */
obj_t BgL_tmpz00_5825;
if(
INTEGERP(BgL_kz00_3306))
{ /* Llib/srfi4.scm 707 */
BgL_tmpz00_5825 = BgL_kz00_3306
; }  else 
{ 
obj_t BgL_auxz00_5828;
BgL_auxz00_5828 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28620)), BGl_string3433z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3306); 
FAILURE(BgL_auxz00_5828,BFALSE,BFALSE);} 
BgL_kz00_4469 = 
(long)CINT(BgL_tmpz00_5825); } 
{ /* Llib/srfi4.scm 707 */
long BgL_l2404z00_4470;
BgL_l2404z00_4470 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4468); 
if(
BOUND_CHECK(BgL_kz00_4469, BgL_l2404z00_4470))
{ /* Llib/srfi4.scm 707 */
BgL_tmpz00_5818 = 
BGL_U64VREF(BgL_vz00_4468, BgL_kz00_4469)
; }  else 
{ 
obj_t BgL_auxz00_5837;
BgL_auxz00_5837 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28620)), BGl_string3432z00zz__srfi4z00, BgL_vz00_4468, 
(int)(BgL_l2404z00_4470), 
(int)(BgL_kz00_4469)); 
FAILURE(BgL_auxz00_5837,BFALSE,BFALSE);} } } 
return 
BGL_UINT64_TO_BUINT64(BgL_tmpz00_5818);} } 

}



/* f32vector-ref */
BGL_EXPORTED_DEF float BGl_f32vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_94, long BgL_kz00_95)
{
{ /* Llib/srfi4.scm 709 */
{ /* Llib/srfi4.scm 710 */
long BgL_l2408z00_4471;
BgL_l2408z00_4471 = 
BGL_HVECTOR_LENGTH(BgL_vz00_94); 
if(
BOUND_CHECK(BgL_kz00_95, BgL_l2408z00_4471))
{ /* Llib/srfi4.scm 710 */
return 
BGL_F32VREF(BgL_vz00_94, BgL_kz00_95);}  else 
{ 
obj_t BgL_auxz00_5848;
BgL_auxz00_5848 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28681)), BGl_string3434z00zz__srfi4z00, BgL_vz00_94, 
(int)(BgL_l2408z00_4471), 
(int)(BgL_kz00_95)); 
FAILURE(BgL_auxz00_5848,BFALSE,BFALSE);} } } 

}



/* &f32vector-ref */
obj_t BGl_z62f32vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3314, obj_t BgL_vz00_3315, obj_t BgL_kz00_3316)
{
{ /* Llib/srfi4.scm 709 */
{ /* Llib/srfi4.scm 710 */
float BgL_tmpz00_5854;
{ /* Llib/srfi4.scm 710 */
obj_t BgL_vz00_4472;long BgL_kz00_4473;
if(
BGL_F32VECTORP(BgL_vz00_3315))
{ /* Llib/srfi4.scm 710 */
BgL_vz00_4472 = BgL_vz00_3315; }  else 
{ 
obj_t BgL_auxz00_5857;
BgL_auxz00_5857 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28681)), BGl_string3435z00zz__srfi4z00, BGl_string3359z00zz__srfi4z00, BgL_vz00_3315); 
FAILURE(BgL_auxz00_5857,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 710 */
obj_t BgL_tmpz00_5861;
if(
INTEGERP(BgL_kz00_3316))
{ /* Llib/srfi4.scm 710 */
BgL_tmpz00_5861 = BgL_kz00_3316
; }  else 
{ 
obj_t BgL_auxz00_5864;
BgL_auxz00_5864 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28681)), BGl_string3435z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3316); 
FAILURE(BgL_auxz00_5864,BFALSE,BFALSE);} 
BgL_kz00_4473 = 
(long)CINT(BgL_tmpz00_5861); } 
{ /* Llib/srfi4.scm 710 */
long BgL_l2408z00_4474;
BgL_l2408z00_4474 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4472); 
if(
BOUND_CHECK(BgL_kz00_4473, BgL_l2408z00_4474))
{ /* Llib/srfi4.scm 710 */
BgL_tmpz00_5854 = 
BGL_F32VREF(BgL_vz00_4472, BgL_kz00_4473)
; }  else 
{ 
obj_t BgL_auxz00_5873;
BgL_auxz00_5873 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28681)), BGl_string3434z00zz__srfi4z00, BgL_vz00_4472, 
(int)(BgL_l2408z00_4474), 
(int)(BgL_kz00_4473)); 
FAILURE(BgL_auxz00_5873,BFALSE,BFALSE);} } } 
return 
FLOAT_TO_REAL(BgL_tmpz00_5854);} } 

}



/* f64vector-ref */
BGL_EXPORTED_DEF double BGl_f64vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_96, long BgL_kz00_97)
{
{ /* Llib/srfi4.scm 712 */
{ /* Llib/srfi4.scm 713 */
long BgL_l2412z00_4475;
BgL_l2412z00_4475 = 
BGL_HVECTOR_LENGTH(BgL_vz00_96); 
if(
BOUND_CHECK(BgL_kz00_97, BgL_l2412z00_4475))
{ /* Llib/srfi4.scm 713 */
return 
BGL_F64VREF(BgL_vz00_96, BgL_kz00_97);}  else 
{ 
obj_t BgL_auxz00_5884;
BgL_auxz00_5884 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28742)), BGl_string3436z00zz__srfi4z00, BgL_vz00_96, 
(int)(BgL_l2412z00_4475), 
(int)(BgL_kz00_97)); 
FAILURE(BgL_auxz00_5884,BFALSE,BFALSE);} } } 

}



/* &f64vector-ref */
obj_t BGl_z62f64vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3324, obj_t BgL_vz00_3325, obj_t BgL_kz00_3326)
{
{ /* Llib/srfi4.scm 712 */
{ /* Llib/srfi4.scm 713 */
double BgL_tmpz00_5890;
{ /* Llib/srfi4.scm 713 */
obj_t BgL_vz00_4476;long BgL_kz00_4477;
if(
BGL_F64VECTORP(BgL_vz00_3325))
{ /* Llib/srfi4.scm 713 */
BgL_vz00_4476 = BgL_vz00_3325; }  else 
{ 
obj_t BgL_auxz00_5893;
BgL_auxz00_5893 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28742)), BGl_string3437z00zz__srfi4z00, BGl_string3361z00zz__srfi4z00, BgL_vz00_3325); 
FAILURE(BgL_auxz00_5893,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 713 */
obj_t BgL_tmpz00_5897;
if(
INTEGERP(BgL_kz00_3326))
{ /* Llib/srfi4.scm 713 */
BgL_tmpz00_5897 = BgL_kz00_3326
; }  else 
{ 
obj_t BgL_auxz00_5900;
BgL_auxz00_5900 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28742)), BGl_string3437z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3326); 
FAILURE(BgL_auxz00_5900,BFALSE,BFALSE);} 
BgL_kz00_4477 = 
(long)CINT(BgL_tmpz00_5897); } 
{ /* Llib/srfi4.scm 713 */
long BgL_l2412z00_4478;
BgL_l2412z00_4478 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4476); 
if(
BOUND_CHECK(BgL_kz00_4477, BgL_l2412z00_4478))
{ /* Llib/srfi4.scm 713 */
BgL_tmpz00_5890 = 
BGL_F64VREF(BgL_vz00_4476, BgL_kz00_4477)
; }  else 
{ 
obj_t BgL_auxz00_5909;
BgL_auxz00_5909 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)28742)), BGl_string3436z00zz__srfi4z00, BgL_vz00_4476, 
(int)(BgL_l2412z00_4478), 
(int)(BgL_kz00_4477)); 
FAILURE(BgL_auxz00_5909,BFALSE,BFALSE);} } } 
return 
DOUBLE_TO_REAL(BgL_tmpz00_5890);} } 

}



/* s8vector-set! */
BGL_EXPORTED_DEF obj_t BGl_s8vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_100, long BgL_kz00_101, int8_t BgL_valz00_102)
{
{ /* Llib/srfi4.scm 721 */
{ /* Llib/srfi4.scm 722 */
long BgL_l2416z00_4479;
BgL_l2416z00_4479 = 
BGL_HVECTOR_LENGTH(BgL_vz00_100); 
if(
BOUND_CHECK(BgL_kz00_101, BgL_l2416z00_4479))
{ /* Llib/srfi4.scm 722 */
BGL_S8VSET(BgL_vz00_100, BgL_kz00_101, BgL_valz00_102); }  else 
{ 
obj_t BgL_auxz00_5920;
BgL_auxz00_5920 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29099)), BGl_string3369z00zz__srfi4z00, BgL_vz00_100, 
(int)(BgL_l2416z00_4479), 
(int)(BgL_kz00_101)); 
FAILURE(BgL_auxz00_5920,BFALSE,BFALSE);} } 
return BUNSPEC;} 

}



/* &s8vector-set! */
obj_t BGl_z62s8vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3237, obj_t BgL_vz00_3238, obj_t BgL_kz00_3239, obj_t BgL_valz00_3240)
{
{ /* Llib/srfi4.scm 721 */
{ /* Llib/srfi4.scm 721 */
obj_t BgL_vz00_4480;long BgL_kz00_4481;int8_t BgL_valz00_4482;
if(
BGL_S8VECTORP(BgL_vz00_3238))
{ /* Llib/srfi4.scm 721 */
BgL_vz00_4480 = BgL_vz00_3238; }  else 
{ 
obj_t BgL_auxz00_5928;
BgL_auxz00_5928 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29057)), BGl_string3438z00zz__srfi4z00, BGl_string3343z00zz__srfi4z00, BgL_vz00_3238); 
FAILURE(BgL_auxz00_5928,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 721 */
obj_t BgL_tmpz00_5932;
if(
INTEGERP(BgL_kz00_3239))
{ /* Llib/srfi4.scm 721 */
BgL_tmpz00_5932 = BgL_kz00_3239
; }  else 
{ 
obj_t BgL_auxz00_5935;
BgL_auxz00_5935 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29057)), BGl_string3438z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3239); 
FAILURE(BgL_auxz00_5935,BFALSE,BFALSE);} 
BgL_kz00_4481 = 
(long)CINT(BgL_tmpz00_5932); } 
{ /* Llib/srfi4.scm 721 */
obj_t BgL_tmpz00_5940;
if(
BGL_INT8P(BgL_valz00_3240))
{ /* Llib/srfi4.scm 721 */
BgL_tmpz00_5940 = BgL_valz00_3240
; }  else 
{ 
obj_t BgL_auxz00_5943;
BgL_auxz00_5943 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29057)), BGl_string3438z00zz__srfi4z00, BGl_string3368z00zz__srfi4z00, BgL_valz00_3240); 
FAILURE(BgL_auxz00_5943,BFALSE,BFALSE);} 
BgL_valz00_4482 = 
BGL_BINT8_TO_INT8(BgL_tmpz00_5940); } 
{ /* Llib/srfi4.scm 722 */
long BgL_l2416z00_4483;
BgL_l2416z00_4483 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4480); 
if(
BOUND_CHECK(BgL_kz00_4481, BgL_l2416z00_4483))
{ /* Llib/srfi4.scm 722 */
BGL_S8VSET(BgL_vz00_4480, BgL_kz00_4481, BgL_valz00_4482); }  else 
{ 
obj_t BgL_auxz00_5952;
BgL_auxz00_5952 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29099)), BGl_string3369z00zz__srfi4z00, BgL_vz00_4480, 
(int)(BgL_l2416z00_4483), 
(int)(BgL_kz00_4481)); 
FAILURE(BgL_auxz00_5952,BFALSE,BFALSE);} } 
return BUNSPEC;} } 

}



/* u8vector-set! */
BGL_EXPORTED_DEF obj_t BGl_u8vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_103, long BgL_kz00_104, uint8_t BgL_valz00_105)
{
{ /* Llib/srfi4.scm 724 */
{ /* Llib/srfi4.scm 725 */
long BgL_l2420z00_4484;
BgL_l2420z00_4484 = 
BGL_HVECTOR_LENGTH(BgL_vz00_103); 
if(
BOUND_CHECK(BgL_kz00_104, BgL_l2420z00_4484))
{ /* Llib/srfi4.scm 725 */
BGL_U8VSET(BgL_vz00_103, BgL_kz00_104, BgL_valz00_105); }  else 
{ 
obj_t BgL_auxz00_5962;
BgL_auxz00_5962 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29168)), BGl_string3374z00zz__srfi4z00, BgL_vz00_103, 
(int)(BgL_l2420z00_4484), 
(int)(BgL_kz00_104)); 
FAILURE(BgL_auxz00_5962,BFALSE,BFALSE);} } 
return BUNSPEC;} 

}



/* &u8vector-set! */
obj_t BGl_z62u8vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3247, obj_t BgL_vz00_3248, obj_t BgL_kz00_3249, obj_t BgL_valz00_3250)
{
{ /* Llib/srfi4.scm 724 */
{ /* Llib/srfi4.scm 724 */
obj_t BgL_vz00_4485;long BgL_kz00_4486;uint8_t BgL_valz00_4487;
if(
BGL_U8VECTORP(BgL_vz00_3248))
{ /* Llib/srfi4.scm 724 */
BgL_vz00_4485 = BgL_vz00_3248; }  else 
{ 
obj_t BgL_auxz00_5970;
BgL_auxz00_5970 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29126)), BGl_string3439z00zz__srfi4z00, BGl_string3345z00zz__srfi4z00, BgL_vz00_3248); 
FAILURE(BgL_auxz00_5970,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 724 */
obj_t BgL_tmpz00_5974;
if(
INTEGERP(BgL_kz00_3249))
{ /* Llib/srfi4.scm 724 */
BgL_tmpz00_5974 = BgL_kz00_3249
; }  else 
{ 
obj_t BgL_auxz00_5977;
BgL_auxz00_5977 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29126)), BGl_string3439z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3249); 
FAILURE(BgL_auxz00_5977,BFALSE,BFALSE);} 
BgL_kz00_4486 = 
(long)CINT(BgL_tmpz00_5974); } 
{ /* Llib/srfi4.scm 724 */
obj_t BgL_tmpz00_5982;
if(
BGL_UINT8P(BgL_valz00_3250))
{ /* Llib/srfi4.scm 724 */
BgL_tmpz00_5982 = BgL_valz00_3250
; }  else 
{ 
obj_t BgL_auxz00_5985;
BgL_auxz00_5985 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29126)), BGl_string3439z00zz__srfi4z00, BGl_string3373z00zz__srfi4z00, BgL_valz00_3250); 
FAILURE(BgL_auxz00_5985,BFALSE,BFALSE);} 
BgL_valz00_4487 = 
BGL_BUINT8_TO_UINT8(BgL_tmpz00_5982); } 
{ /* Llib/srfi4.scm 725 */
long BgL_l2420z00_4488;
BgL_l2420z00_4488 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4485); 
if(
BOUND_CHECK(BgL_kz00_4486, BgL_l2420z00_4488))
{ /* Llib/srfi4.scm 725 */
BGL_U8VSET(BgL_vz00_4485, BgL_kz00_4486, BgL_valz00_4487); }  else 
{ 
obj_t BgL_auxz00_5994;
BgL_auxz00_5994 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29168)), BGl_string3374z00zz__srfi4z00, BgL_vz00_4485, 
(int)(BgL_l2420z00_4488), 
(int)(BgL_kz00_4486)); 
FAILURE(BgL_auxz00_5994,BFALSE,BFALSE);} } 
return BUNSPEC;} } 

}



/* s16vector-set! */
BGL_EXPORTED_DEF obj_t BGl_s16vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_106, long BgL_kz00_107, int16_t BgL_valz00_108)
{
{ /* Llib/srfi4.scm 727 */
{ /* Llib/srfi4.scm 728 */
long BgL_l2424z00_4489;
BgL_l2424z00_4489 = 
BGL_HVECTOR_LENGTH(BgL_vz00_106); 
if(
BOUND_CHECK(BgL_kz00_107, BgL_l2424z00_4489))
{ /* Llib/srfi4.scm 728 */
BGL_S16VSET(BgL_vz00_106, BgL_kz00_107, BgL_valz00_108); }  else 
{ 
obj_t BgL_auxz00_6004;
BgL_auxz00_6004 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29238)), BGl_string3379z00zz__srfi4z00, BgL_vz00_106, 
(int)(BgL_l2424z00_4489), 
(int)(BgL_kz00_107)); 
FAILURE(BgL_auxz00_6004,BFALSE,BFALSE);} } 
return BUNSPEC;} 

}



/* &s16vector-set! */
obj_t BGl_z62s16vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3257, obj_t BgL_vz00_3258, obj_t BgL_kz00_3259, obj_t BgL_valz00_3260)
{
{ /* Llib/srfi4.scm 727 */
{ /* Llib/srfi4.scm 727 */
obj_t BgL_vz00_4490;long BgL_kz00_4491;int16_t BgL_valz00_4492;
if(
BGL_S16VECTORP(BgL_vz00_3258))
{ /* Llib/srfi4.scm 727 */
BgL_vz00_4490 = BgL_vz00_3258; }  else 
{ 
obj_t BgL_auxz00_6012;
BgL_auxz00_6012 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29195)), BGl_string3440z00zz__srfi4z00, BGl_string3347z00zz__srfi4z00, BgL_vz00_3258); 
FAILURE(BgL_auxz00_6012,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 727 */
obj_t BgL_tmpz00_6016;
if(
INTEGERP(BgL_kz00_3259))
{ /* Llib/srfi4.scm 727 */
BgL_tmpz00_6016 = BgL_kz00_3259
; }  else 
{ 
obj_t BgL_auxz00_6019;
BgL_auxz00_6019 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29195)), BGl_string3440z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3259); 
FAILURE(BgL_auxz00_6019,BFALSE,BFALSE);} 
BgL_kz00_4491 = 
(long)CINT(BgL_tmpz00_6016); } 
{ /* Llib/srfi4.scm 727 */
obj_t BgL_tmpz00_6024;
if(
BGL_INT16P(BgL_valz00_3260))
{ /* Llib/srfi4.scm 727 */
BgL_tmpz00_6024 = BgL_valz00_3260
; }  else 
{ 
obj_t BgL_auxz00_6027;
BgL_auxz00_6027 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29195)), BGl_string3440z00zz__srfi4z00, BGl_string3378z00zz__srfi4z00, BgL_valz00_3260); 
FAILURE(BgL_auxz00_6027,BFALSE,BFALSE);} 
BgL_valz00_4492 = 
BGL_BINT16_TO_INT16(BgL_tmpz00_6024); } 
{ /* Llib/srfi4.scm 728 */
long BgL_l2424z00_4493;
BgL_l2424z00_4493 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4490); 
if(
BOUND_CHECK(BgL_kz00_4491, BgL_l2424z00_4493))
{ /* Llib/srfi4.scm 728 */
BGL_S16VSET(BgL_vz00_4490, BgL_kz00_4491, BgL_valz00_4492); }  else 
{ 
obj_t BgL_auxz00_6036;
BgL_auxz00_6036 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29238)), BGl_string3379z00zz__srfi4z00, BgL_vz00_4490, 
(int)(BgL_l2424z00_4493), 
(int)(BgL_kz00_4491)); 
FAILURE(BgL_auxz00_6036,BFALSE,BFALSE);} } 
return BUNSPEC;} } 

}



/* u16vector-set! */
BGL_EXPORTED_DEF obj_t BGl_u16vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_109, long BgL_kz00_110, uint16_t BgL_valz00_111)
{
{ /* Llib/srfi4.scm 730 */
{ /* Llib/srfi4.scm 731 */
long BgL_l2428z00_4494;
BgL_l2428z00_4494 = 
BGL_HVECTOR_LENGTH(BgL_vz00_109); 
if(
BOUND_CHECK(BgL_kz00_110, BgL_l2428z00_4494))
{ /* Llib/srfi4.scm 731 */
BGL_U16VSET(BgL_vz00_109, BgL_kz00_110, BgL_valz00_111); }  else 
{ 
obj_t BgL_auxz00_6046;
BgL_auxz00_6046 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29309)), BGl_string3384z00zz__srfi4z00, BgL_vz00_109, 
(int)(BgL_l2428z00_4494), 
(int)(BgL_kz00_110)); 
FAILURE(BgL_auxz00_6046,BFALSE,BFALSE);} } 
return BUNSPEC;} 

}



/* &u16vector-set! */
obj_t BGl_z62u16vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3267, obj_t BgL_vz00_3268, obj_t BgL_kz00_3269, obj_t BgL_valz00_3270)
{
{ /* Llib/srfi4.scm 730 */
{ /* Llib/srfi4.scm 730 */
obj_t BgL_vz00_4495;long BgL_kz00_4496;uint16_t BgL_valz00_4497;
if(
BGL_U16VECTORP(BgL_vz00_3268))
{ /* Llib/srfi4.scm 730 */
BgL_vz00_4495 = BgL_vz00_3268; }  else 
{ 
obj_t BgL_auxz00_6054;
BgL_auxz00_6054 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29266)), BGl_string3441z00zz__srfi4z00, BGl_string3349z00zz__srfi4z00, BgL_vz00_3268); 
FAILURE(BgL_auxz00_6054,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 730 */
obj_t BgL_tmpz00_6058;
if(
INTEGERP(BgL_kz00_3269))
{ /* Llib/srfi4.scm 730 */
BgL_tmpz00_6058 = BgL_kz00_3269
; }  else 
{ 
obj_t BgL_auxz00_6061;
BgL_auxz00_6061 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29266)), BGl_string3441z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3269); 
FAILURE(BgL_auxz00_6061,BFALSE,BFALSE);} 
BgL_kz00_4496 = 
(long)CINT(BgL_tmpz00_6058); } 
{ /* Llib/srfi4.scm 730 */
obj_t BgL_tmpz00_6066;
if(
BGL_UINT16P(BgL_valz00_3270))
{ /* Llib/srfi4.scm 730 */
BgL_tmpz00_6066 = BgL_valz00_3270
; }  else 
{ 
obj_t BgL_auxz00_6069;
BgL_auxz00_6069 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29266)), BGl_string3441z00zz__srfi4z00, BGl_string3383z00zz__srfi4z00, BgL_valz00_3270); 
FAILURE(BgL_auxz00_6069,BFALSE,BFALSE);} 
BgL_valz00_4497 = 
BGL_BUINT16_TO_UINT16(BgL_tmpz00_6066); } 
{ /* Llib/srfi4.scm 731 */
long BgL_l2428z00_4498;
BgL_l2428z00_4498 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4495); 
if(
BOUND_CHECK(BgL_kz00_4496, BgL_l2428z00_4498))
{ /* Llib/srfi4.scm 731 */
BGL_U16VSET(BgL_vz00_4495, BgL_kz00_4496, BgL_valz00_4497); }  else 
{ 
obj_t BgL_auxz00_6078;
BgL_auxz00_6078 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29309)), BGl_string3384z00zz__srfi4z00, BgL_vz00_4495, 
(int)(BgL_l2428z00_4498), 
(int)(BgL_kz00_4496)); 
FAILURE(BgL_auxz00_6078,BFALSE,BFALSE);} } 
return BUNSPEC;} } 

}



/* s32vector-set! */
BGL_EXPORTED_DEF obj_t BGl_s32vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_112, long BgL_kz00_113, int32_t BgL_valz00_114)
{
{ /* Llib/srfi4.scm 733 */
{ /* Llib/srfi4.scm 734 */
long BgL_l2432z00_4499;
BgL_l2432z00_4499 = 
BGL_HVECTOR_LENGTH(BgL_vz00_112); 
if(
BOUND_CHECK(BgL_kz00_113, BgL_l2432z00_4499))
{ /* Llib/srfi4.scm 734 */
BGL_S32VSET(BgL_vz00_112, BgL_kz00_113, BgL_valz00_114); }  else 
{ 
obj_t BgL_auxz00_6088;
BgL_auxz00_6088 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29380)), BGl_string3389z00zz__srfi4z00, BgL_vz00_112, 
(int)(BgL_l2432z00_4499), 
(int)(BgL_kz00_113)); 
FAILURE(BgL_auxz00_6088,BFALSE,BFALSE);} } 
return BUNSPEC;} 

}



/* &s32vector-set! */
obj_t BGl_z62s32vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3277, obj_t BgL_vz00_3278, obj_t BgL_kz00_3279, obj_t BgL_valz00_3280)
{
{ /* Llib/srfi4.scm 733 */
{ /* Llib/srfi4.scm 733 */
obj_t BgL_vz00_4500;long BgL_kz00_4501;int32_t BgL_valz00_4502;
if(
BGL_S32VECTORP(BgL_vz00_3278))
{ /* Llib/srfi4.scm 733 */
BgL_vz00_4500 = BgL_vz00_3278; }  else 
{ 
obj_t BgL_auxz00_6096;
BgL_auxz00_6096 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29337)), BGl_string3442z00zz__srfi4z00, BGl_string3351z00zz__srfi4z00, BgL_vz00_3278); 
FAILURE(BgL_auxz00_6096,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 733 */
obj_t BgL_tmpz00_6100;
if(
INTEGERP(BgL_kz00_3279))
{ /* Llib/srfi4.scm 733 */
BgL_tmpz00_6100 = BgL_kz00_3279
; }  else 
{ 
obj_t BgL_auxz00_6103;
BgL_auxz00_6103 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29337)), BGl_string3442z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3279); 
FAILURE(BgL_auxz00_6103,BFALSE,BFALSE);} 
BgL_kz00_4501 = 
(long)CINT(BgL_tmpz00_6100); } 
{ /* Llib/srfi4.scm 733 */
obj_t BgL_tmpz00_6108;
if(
BGL_INT32P(BgL_valz00_3280))
{ /* Llib/srfi4.scm 733 */
BgL_tmpz00_6108 = BgL_valz00_3280
; }  else 
{ 
obj_t BgL_auxz00_6111;
BgL_auxz00_6111 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29337)), BGl_string3442z00zz__srfi4z00, BGl_string3388z00zz__srfi4z00, BgL_valz00_3280); 
FAILURE(BgL_auxz00_6111,BFALSE,BFALSE);} 
BgL_valz00_4502 = 
BGL_BINT32_TO_INT32(BgL_tmpz00_6108); } 
{ /* Llib/srfi4.scm 734 */
long BgL_l2432z00_4503;
BgL_l2432z00_4503 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4500); 
if(
BOUND_CHECK(BgL_kz00_4501, BgL_l2432z00_4503))
{ /* Llib/srfi4.scm 734 */
BGL_S32VSET(BgL_vz00_4500, BgL_kz00_4501, BgL_valz00_4502); }  else 
{ 
obj_t BgL_auxz00_6120;
BgL_auxz00_6120 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29380)), BGl_string3389z00zz__srfi4z00, BgL_vz00_4500, 
(int)(BgL_l2432z00_4503), 
(int)(BgL_kz00_4501)); 
FAILURE(BgL_auxz00_6120,BFALSE,BFALSE);} } 
return BUNSPEC;} } 

}



/* u32vector-set! */
BGL_EXPORTED_DEF obj_t BGl_u32vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_115, long BgL_kz00_116, uint32_t BgL_valz00_117)
{
{ /* Llib/srfi4.scm 736 */
{ /* Llib/srfi4.scm 737 */
long BgL_l2436z00_4504;
BgL_l2436z00_4504 = 
BGL_HVECTOR_LENGTH(BgL_vz00_115); 
if(
BOUND_CHECK(BgL_kz00_116, BgL_l2436z00_4504))
{ /* Llib/srfi4.scm 737 */
BGL_U32VSET(BgL_vz00_115, BgL_kz00_116, BgL_valz00_117); }  else 
{ 
obj_t BgL_auxz00_6130;
BgL_auxz00_6130 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29451)), BGl_string3394z00zz__srfi4z00, BgL_vz00_115, 
(int)(BgL_l2436z00_4504), 
(int)(BgL_kz00_116)); 
FAILURE(BgL_auxz00_6130,BFALSE,BFALSE);} } 
return BUNSPEC;} 

}



/* &u32vector-set! */
obj_t BGl_z62u32vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3287, obj_t BgL_vz00_3288, obj_t BgL_kz00_3289, obj_t BgL_valz00_3290)
{
{ /* Llib/srfi4.scm 736 */
{ /* Llib/srfi4.scm 736 */
obj_t BgL_vz00_4505;long BgL_kz00_4506;uint32_t BgL_valz00_4507;
if(
BGL_U32VECTORP(BgL_vz00_3288))
{ /* Llib/srfi4.scm 736 */
BgL_vz00_4505 = BgL_vz00_3288; }  else 
{ 
obj_t BgL_auxz00_6138;
BgL_auxz00_6138 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29408)), BGl_string3443z00zz__srfi4z00, BGl_string3353z00zz__srfi4z00, BgL_vz00_3288); 
FAILURE(BgL_auxz00_6138,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 736 */
obj_t BgL_tmpz00_6142;
if(
INTEGERP(BgL_kz00_3289))
{ /* Llib/srfi4.scm 736 */
BgL_tmpz00_6142 = BgL_kz00_3289
; }  else 
{ 
obj_t BgL_auxz00_6145;
BgL_auxz00_6145 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29408)), BGl_string3443z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3289); 
FAILURE(BgL_auxz00_6145,BFALSE,BFALSE);} 
BgL_kz00_4506 = 
(long)CINT(BgL_tmpz00_6142); } 
{ /* Llib/srfi4.scm 736 */
obj_t BgL_tmpz00_6150;
if(
BGL_UINT32P(BgL_valz00_3290))
{ /* Llib/srfi4.scm 736 */
BgL_tmpz00_6150 = BgL_valz00_3290
; }  else 
{ 
obj_t BgL_auxz00_6153;
BgL_auxz00_6153 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29408)), BGl_string3443z00zz__srfi4z00, BGl_string3393z00zz__srfi4z00, BgL_valz00_3290); 
FAILURE(BgL_auxz00_6153,BFALSE,BFALSE);} 
BgL_valz00_4507 = 
BGL_BUINT32_TO_UINT32(BgL_tmpz00_6150); } 
{ /* Llib/srfi4.scm 737 */
long BgL_l2436z00_4508;
BgL_l2436z00_4508 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4505); 
if(
BOUND_CHECK(BgL_kz00_4506, BgL_l2436z00_4508))
{ /* Llib/srfi4.scm 737 */
BGL_U32VSET(BgL_vz00_4505, BgL_kz00_4506, BgL_valz00_4507); }  else 
{ 
obj_t BgL_auxz00_6162;
BgL_auxz00_6162 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29451)), BGl_string3394z00zz__srfi4z00, BgL_vz00_4505, 
(int)(BgL_l2436z00_4508), 
(int)(BgL_kz00_4506)); 
FAILURE(BgL_auxz00_6162,BFALSE,BFALSE);} } 
return BUNSPEC;} } 

}



/* s64vector-set! */
BGL_EXPORTED_DEF obj_t BGl_s64vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_118, long BgL_kz00_119, int64_t BgL_valz00_120)
{
{ /* Llib/srfi4.scm 739 */
{ /* Llib/srfi4.scm 740 */
long BgL_l2440z00_4509;
BgL_l2440z00_4509 = 
BGL_HVECTOR_LENGTH(BgL_vz00_118); 
if(
BOUND_CHECK(BgL_kz00_119, BgL_l2440z00_4509))
{ /* Llib/srfi4.scm 740 */
BGL_S64VSET(BgL_vz00_118, BgL_kz00_119, BgL_valz00_120); }  else 
{ 
obj_t BgL_auxz00_6172;
BgL_auxz00_6172 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29522)), BGl_string3399z00zz__srfi4z00, BgL_vz00_118, 
(int)(BgL_l2440z00_4509), 
(int)(BgL_kz00_119)); 
FAILURE(BgL_auxz00_6172,BFALSE,BFALSE);} } 
return BUNSPEC;} 

}



/* &s64vector-set! */
obj_t BGl_z62s64vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3297, obj_t BgL_vz00_3298, obj_t BgL_kz00_3299, obj_t BgL_valz00_3300)
{
{ /* Llib/srfi4.scm 739 */
{ /* Llib/srfi4.scm 739 */
obj_t BgL_vz00_4510;long BgL_kz00_4511;int64_t BgL_valz00_4512;
if(
BGL_S64VECTORP(BgL_vz00_3298))
{ /* Llib/srfi4.scm 739 */
BgL_vz00_4510 = BgL_vz00_3298; }  else 
{ 
obj_t BgL_auxz00_6180;
BgL_auxz00_6180 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29479)), BGl_string3444z00zz__srfi4z00, BGl_string3355z00zz__srfi4z00, BgL_vz00_3298); 
FAILURE(BgL_auxz00_6180,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 739 */
obj_t BgL_tmpz00_6184;
if(
INTEGERP(BgL_kz00_3299))
{ /* Llib/srfi4.scm 739 */
BgL_tmpz00_6184 = BgL_kz00_3299
; }  else 
{ 
obj_t BgL_auxz00_6187;
BgL_auxz00_6187 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29479)), BGl_string3444z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3299); 
FAILURE(BgL_auxz00_6187,BFALSE,BFALSE);} 
BgL_kz00_4511 = 
(long)CINT(BgL_tmpz00_6184); } 
{ /* Llib/srfi4.scm 739 */
obj_t BgL_tmpz00_6192;
if(
BGL_INT64P(BgL_valz00_3300))
{ /* Llib/srfi4.scm 739 */
BgL_tmpz00_6192 = BgL_valz00_3300
; }  else 
{ 
obj_t BgL_auxz00_6195;
BgL_auxz00_6195 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29479)), BGl_string3444z00zz__srfi4z00, BGl_string3398z00zz__srfi4z00, BgL_valz00_3300); 
FAILURE(BgL_auxz00_6195,BFALSE,BFALSE);} 
BgL_valz00_4512 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_6192); } 
{ /* Llib/srfi4.scm 740 */
long BgL_l2440z00_4513;
BgL_l2440z00_4513 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4510); 
if(
BOUND_CHECK(BgL_kz00_4511, BgL_l2440z00_4513))
{ /* Llib/srfi4.scm 740 */
BGL_S64VSET(BgL_vz00_4510, BgL_kz00_4511, BgL_valz00_4512); }  else 
{ 
obj_t BgL_auxz00_6204;
BgL_auxz00_6204 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29522)), BGl_string3399z00zz__srfi4z00, BgL_vz00_4510, 
(int)(BgL_l2440z00_4513), 
(int)(BgL_kz00_4511)); 
FAILURE(BgL_auxz00_6204,BFALSE,BFALSE);} } 
return BUNSPEC;} } 

}



/* u64vector-set! */
BGL_EXPORTED_DEF obj_t BGl_u64vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_121, long BgL_kz00_122, uint64_t BgL_valz00_123)
{
{ /* Llib/srfi4.scm 742 */
{ /* Llib/srfi4.scm 743 */
long BgL_l2444z00_4514;
BgL_l2444z00_4514 = 
BGL_HVECTOR_LENGTH(BgL_vz00_121); 
if(
BOUND_CHECK(BgL_kz00_122, BgL_l2444z00_4514))
{ /* Llib/srfi4.scm 743 */
BGL_U64VSET(BgL_vz00_121, BgL_kz00_122, BgL_valz00_123); }  else 
{ 
obj_t BgL_auxz00_6214;
BgL_auxz00_6214 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29593)), BGl_string3404z00zz__srfi4z00, BgL_vz00_121, 
(int)(BgL_l2444z00_4514), 
(int)(BgL_kz00_122)); 
FAILURE(BgL_auxz00_6214,BFALSE,BFALSE);} } 
return BUNSPEC;} 

}



/* &u64vector-set! */
obj_t BGl_z62u64vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3307, obj_t BgL_vz00_3308, obj_t BgL_kz00_3309, obj_t BgL_valz00_3310)
{
{ /* Llib/srfi4.scm 742 */
{ /* Llib/srfi4.scm 742 */
obj_t BgL_vz00_4515;long BgL_kz00_4516;uint64_t BgL_valz00_4517;
if(
BGL_U64VECTORP(BgL_vz00_3308))
{ /* Llib/srfi4.scm 742 */
BgL_vz00_4515 = BgL_vz00_3308; }  else 
{ 
obj_t BgL_auxz00_6222;
BgL_auxz00_6222 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29550)), BGl_string3445z00zz__srfi4z00, BGl_string3357z00zz__srfi4z00, BgL_vz00_3308); 
FAILURE(BgL_auxz00_6222,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 742 */
obj_t BgL_tmpz00_6226;
if(
INTEGERP(BgL_kz00_3309))
{ /* Llib/srfi4.scm 742 */
BgL_tmpz00_6226 = BgL_kz00_3309
; }  else 
{ 
obj_t BgL_auxz00_6229;
BgL_auxz00_6229 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29550)), BGl_string3445z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3309); 
FAILURE(BgL_auxz00_6229,BFALSE,BFALSE);} 
BgL_kz00_4516 = 
(long)CINT(BgL_tmpz00_6226); } 
{ /* Llib/srfi4.scm 742 */
obj_t BgL_tmpz00_6234;
if(
BGL_UINT64P(BgL_valz00_3310))
{ /* Llib/srfi4.scm 742 */
BgL_tmpz00_6234 = BgL_valz00_3310
; }  else 
{ 
obj_t BgL_auxz00_6237;
BgL_auxz00_6237 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29550)), BGl_string3445z00zz__srfi4z00, BGl_string3403z00zz__srfi4z00, BgL_valz00_3310); 
FAILURE(BgL_auxz00_6237,BFALSE,BFALSE);} 
BgL_valz00_4517 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_6234); } 
{ /* Llib/srfi4.scm 743 */
long BgL_l2444z00_4518;
BgL_l2444z00_4518 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4515); 
if(
BOUND_CHECK(BgL_kz00_4516, BgL_l2444z00_4518))
{ /* Llib/srfi4.scm 743 */
BGL_U64VSET(BgL_vz00_4515, BgL_kz00_4516, BgL_valz00_4517); }  else 
{ 
obj_t BgL_auxz00_6246;
BgL_auxz00_6246 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29593)), BGl_string3404z00zz__srfi4z00, BgL_vz00_4515, 
(int)(BgL_l2444z00_4518), 
(int)(BgL_kz00_4516)); 
FAILURE(BgL_auxz00_6246,BFALSE,BFALSE);} } 
return BUNSPEC;} } 

}



/* f32vector-set! */
BGL_EXPORTED_DEF obj_t BGl_f32vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_124, long BgL_kz00_125, float BgL_valz00_126)
{
{ /* Llib/srfi4.scm 745 */
{ /* Llib/srfi4.scm 746 */
long BgL_l2448z00_4519;
BgL_l2448z00_4519 = 
BGL_HVECTOR_LENGTH(BgL_vz00_124); 
if(
BOUND_CHECK(BgL_kz00_125, BgL_l2448z00_4519))
{ /* Llib/srfi4.scm 746 */
BGL_F32VSET(BgL_vz00_124, BgL_kz00_125, BgL_valz00_126); }  else 
{ 
obj_t BgL_auxz00_6256;
BgL_auxz00_6256 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29664)), BGl_string3409z00zz__srfi4z00, BgL_vz00_124, 
(int)(BgL_l2448z00_4519), 
(int)(BgL_kz00_125)); 
FAILURE(BgL_auxz00_6256,BFALSE,BFALSE);} } 
return BUNSPEC;} 

}



/* &f32vector-set! */
obj_t BGl_z62f32vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3317, obj_t BgL_vz00_3318, obj_t BgL_kz00_3319, obj_t BgL_valz00_3320)
{
{ /* Llib/srfi4.scm 745 */
{ /* Llib/srfi4.scm 745 */
obj_t BgL_vz00_4520;long BgL_kz00_4521;float BgL_valz00_4522;
if(
BGL_F32VECTORP(BgL_vz00_3318))
{ /* Llib/srfi4.scm 745 */
BgL_vz00_4520 = BgL_vz00_3318; }  else 
{ 
obj_t BgL_auxz00_6264;
BgL_auxz00_6264 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29621)), BGl_string3446z00zz__srfi4z00, BGl_string3359z00zz__srfi4z00, BgL_vz00_3318); 
FAILURE(BgL_auxz00_6264,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 745 */
obj_t BgL_tmpz00_6268;
if(
INTEGERP(BgL_kz00_3319))
{ /* Llib/srfi4.scm 745 */
BgL_tmpz00_6268 = BgL_kz00_3319
; }  else 
{ 
obj_t BgL_auxz00_6271;
BgL_auxz00_6271 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29621)), BGl_string3446z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3319); 
FAILURE(BgL_auxz00_6271,BFALSE,BFALSE);} 
BgL_kz00_4521 = 
(long)CINT(BgL_tmpz00_6268); } 
{ /* Llib/srfi4.scm 745 */
obj_t BgL_tmpz00_6276;
if(
REALP(BgL_valz00_3320))
{ /* Llib/srfi4.scm 745 */
BgL_tmpz00_6276 = BgL_valz00_3320
; }  else 
{ 
obj_t BgL_auxz00_6279;
BgL_auxz00_6279 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29621)), BGl_string3446z00zz__srfi4z00, BGl_string3408z00zz__srfi4z00, BgL_valz00_3320); 
FAILURE(BgL_auxz00_6279,BFALSE,BFALSE);} 
BgL_valz00_4522 = 
REAL_TO_FLOAT(BgL_tmpz00_6276); } 
{ /* Llib/srfi4.scm 746 */
long BgL_l2448z00_4523;
BgL_l2448z00_4523 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4520); 
if(
BOUND_CHECK(BgL_kz00_4521, BgL_l2448z00_4523))
{ /* Llib/srfi4.scm 746 */
BGL_F32VSET(BgL_vz00_4520, BgL_kz00_4521, BgL_valz00_4522); }  else 
{ 
obj_t BgL_auxz00_6288;
BgL_auxz00_6288 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29664)), BGl_string3409z00zz__srfi4z00, BgL_vz00_4520, 
(int)(BgL_l2448z00_4523), 
(int)(BgL_kz00_4521)); 
FAILURE(BgL_auxz00_6288,BFALSE,BFALSE);} } 
return BUNSPEC;} } 

}



/* f64vector-set! */
BGL_EXPORTED_DEF obj_t BGl_f64vectorzd2setz12zc0zz__srfi4z00(obj_t BgL_vz00_127, long BgL_kz00_128, double BgL_valz00_129)
{
{ /* Llib/srfi4.scm 748 */
{ /* Llib/srfi4.scm 749 */
long BgL_l2452z00_4524;
BgL_l2452z00_4524 = 
BGL_HVECTOR_LENGTH(BgL_vz00_127); 
if(
BOUND_CHECK(BgL_kz00_128, BgL_l2452z00_4524))
{ /* Llib/srfi4.scm 749 */
BGL_F64VSET(BgL_vz00_127, BgL_kz00_128, BgL_valz00_129); }  else 
{ 
obj_t BgL_auxz00_6298;
BgL_auxz00_6298 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29735)), BGl_string3413z00zz__srfi4z00, BgL_vz00_127, 
(int)(BgL_l2452z00_4524), 
(int)(BgL_kz00_128)); 
FAILURE(BgL_auxz00_6298,BFALSE,BFALSE);} } 
return BUNSPEC;} 

}



/* &f64vector-set! */
obj_t BGl_z62f64vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3327, obj_t BgL_vz00_3328, obj_t BgL_kz00_3329, obj_t BgL_valz00_3330)
{
{ /* Llib/srfi4.scm 748 */
{ /* Llib/srfi4.scm 748 */
obj_t BgL_vz00_4525;long BgL_kz00_4526;double BgL_valz00_4527;
if(
BGL_F64VECTORP(BgL_vz00_3328))
{ /* Llib/srfi4.scm 748 */
BgL_vz00_4525 = BgL_vz00_3328; }  else 
{ 
obj_t BgL_auxz00_6306;
BgL_auxz00_6306 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29692)), BGl_string3447z00zz__srfi4z00, BGl_string3361z00zz__srfi4z00, BgL_vz00_3328); 
FAILURE(BgL_auxz00_6306,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 748 */
obj_t BgL_tmpz00_6310;
if(
INTEGERP(BgL_kz00_3329))
{ /* Llib/srfi4.scm 748 */
BgL_tmpz00_6310 = BgL_kz00_3329
; }  else 
{ 
obj_t BgL_auxz00_6313;
BgL_auxz00_6313 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29692)), BGl_string3447z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_kz00_3329); 
FAILURE(BgL_auxz00_6313,BFALSE,BFALSE);} 
BgL_kz00_4526 = 
(long)CINT(BgL_tmpz00_6310); } 
{ /* Llib/srfi4.scm 748 */
obj_t BgL_tmpz00_6318;
if(
REALP(BgL_valz00_3330))
{ /* Llib/srfi4.scm 748 */
BgL_tmpz00_6318 = BgL_valz00_3330
; }  else 
{ 
obj_t BgL_auxz00_6321;
BgL_auxz00_6321 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29692)), BGl_string3447z00zz__srfi4z00, BGl_string3408z00zz__srfi4z00, BgL_valz00_3330); 
FAILURE(BgL_auxz00_6321,BFALSE,BFALSE);} 
BgL_valz00_4527 = 
REAL_TO_DOUBLE(BgL_tmpz00_6318); } 
{ /* Llib/srfi4.scm 749 */
long BgL_l2452z00_4528;
BgL_l2452z00_4528 = 
BGL_HVECTOR_LENGTH(BgL_vz00_4525); 
if(
BOUND_CHECK(BgL_kz00_4526, BgL_l2452z00_4528))
{ /* Llib/srfi4.scm 749 */
BGL_F64VSET(BgL_vz00_4525, BgL_kz00_4526, BgL_valz00_4527); }  else 
{ 
obj_t BgL_auxz00_6330;
BgL_auxz00_6330 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)29735)), BGl_string3413z00zz__srfi4z00, BgL_vz00_4525, 
(int)(BgL_l2452z00_4528), 
(int)(BgL_kz00_4526)); 
FAILURE(BgL_auxz00_6330,BFALSE,BFALSE);} } 
return BUNSPEC;} } 

}



/* s8vector->list */
BGL_EXPORTED_DEF obj_t BGl_s8vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_133)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
long BgL_g1063z00_1485;
BgL_g1063z00_1485 = 
BGL_HVECTOR_LENGTH(BgL_xz00_133); 
{ 
long BgL_iz00_1488;obj_t BgL_resz00_1489;
BgL_iz00_1488 = BgL_g1063z00_1485; 
BgL_resz00_1489 = BNIL; 
BgL_zc3z04anonymousza31443ze3z87_1490:
if(
(BgL_iz00_1488==((long)0)))
{ /* Llib/srfi4.scm 771 */
return BgL_resz00_1489;}  else 
{ /* Llib/srfi4.scm 771 */
long BgL_niz00_1492;
BgL_niz00_1492 = 
(BgL_iz00_1488-((long)1)); 
{ /* Llib/srfi4.scm 771 */
obj_t BgL_arg1445z00_1493;
{ /* Llib/srfi4.scm 771 */
int8_t BgL_arg1446z00_1494;
{ /* Llib/srfi4.scm 771 */
long BgL_l2456z00_3537;
BgL_l2456z00_3537 = 
BGL_HVECTOR_LENGTH(BgL_xz00_133); 
if(
BOUND_CHECK(BgL_niz00_1492, BgL_l2456z00_3537))
{ /* Llib/srfi4.scm 771 */
BgL_arg1446z00_1494 = 
BGL_S8VREF(BgL_xz00_133, BgL_niz00_1492); }  else 
{ 
obj_t BgL_auxz00_6344;
BgL_auxz00_6344 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3418z00zz__srfi4z00, BgL_xz00_133, 
(int)(BgL_l2456z00_3537), 
(int)(BgL_niz00_1492)); 
FAILURE(BgL_auxz00_6344,BFALSE,BFALSE);} } 
BgL_arg1445z00_1493 = 
MAKE_YOUNG_PAIR(
BGL_INT8_TO_BINT8(BgL_arg1446z00_1494), BgL_resz00_1489); } 
{ 
obj_t BgL_resz00_6353;long BgL_iz00_6352;
BgL_iz00_6352 = BgL_niz00_1492; 
BgL_resz00_6353 = BgL_arg1445z00_1493; 
BgL_resz00_1489 = BgL_resz00_6353; 
BgL_iz00_1488 = BgL_iz00_6352; 
goto BgL_zc3z04anonymousza31443ze3z87_1490;} } } } } } 

}



/* &s8vector->list */
obj_t BGl_z62s8vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3375, obj_t BgL_xz00_3376)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
obj_t BgL_auxz00_6354;
if(
BGL_S8VECTORP(BgL_xz00_3376))
{ /* Llib/srfi4.scm 771 */
BgL_auxz00_6354 = BgL_xz00_3376
; }  else 
{ 
obj_t BgL_auxz00_6357;
BgL_auxz00_6357 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3448z00zz__srfi4z00, BGl_string3343z00zz__srfi4z00, BgL_xz00_3376); 
FAILURE(BgL_auxz00_6357,BFALSE,BFALSE);} 
return 
BGl_s8vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_6354);} } 

}



/* u8vector->list */
BGL_EXPORTED_DEF obj_t BGl_u8vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_134)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
long BgL_g1065z00_1496;
BgL_g1065z00_1496 = 
BGL_HVECTOR_LENGTH(BgL_xz00_134); 
{ 
long BgL_iz00_1499;obj_t BgL_resz00_1500;
BgL_iz00_1499 = BgL_g1065z00_1496; 
BgL_resz00_1500 = BNIL; 
BgL_zc3z04anonymousza31447ze3z87_1501:
if(
(BgL_iz00_1499==((long)0)))
{ /* Llib/srfi4.scm 771 */
return BgL_resz00_1500;}  else 
{ /* Llib/srfi4.scm 771 */
long BgL_niz00_1503;
BgL_niz00_1503 = 
(BgL_iz00_1499-((long)1)); 
{ /* Llib/srfi4.scm 771 */
obj_t BgL_arg1449z00_1504;
{ /* Llib/srfi4.scm 771 */
uint8_t BgL_arg1451z00_1505;
{ /* Llib/srfi4.scm 771 */
long BgL_l2460z00_3541;
BgL_l2460z00_3541 = 
BGL_HVECTOR_LENGTH(BgL_xz00_134); 
if(
BOUND_CHECK(BgL_niz00_1503, BgL_l2460z00_3541))
{ /* Llib/srfi4.scm 771 */
BgL_arg1451z00_1505 = 
BGL_U8VREF(BgL_xz00_134, BgL_niz00_1503); }  else 
{ 
obj_t BgL_auxz00_6370;
BgL_auxz00_6370 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3420z00zz__srfi4z00, BgL_xz00_134, 
(int)(BgL_l2460z00_3541), 
(int)(BgL_niz00_1503)); 
FAILURE(BgL_auxz00_6370,BFALSE,BFALSE);} } 
BgL_arg1449z00_1504 = 
MAKE_YOUNG_PAIR(
BGL_UINT8_TO_BUINT8(BgL_arg1451z00_1505), BgL_resz00_1500); } 
{ 
obj_t BgL_resz00_6379;long BgL_iz00_6378;
BgL_iz00_6378 = BgL_niz00_1503; 
BgL_resz00_6379 = BgL_arg1449z00_1504; 
BgL_resz00_1500 = BgL_resz00_6379; 
BgL_iz00_1499 = BgL_iz00_6378; 
goto BgL_zc3z04anonymousza31447ze3z87_1501;} } } } } } 

}



/* &u8vector->list */
obj_t BGl_z62u8vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3377, obj_t BgL_xz00_3378)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
obj_t BgL_auxz00_6380;
if(
BGL_U8VECTORP(BgL_xz00_3378))
{ /* Llib/srfi4.scm 771 */
BgL_auxz00_6380 = BgL_xz00_3378
; }  else 
{ 
obj_t BgL_auxz00_6383;
BgL_auxz00_6383 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3449z00zz__srfi4z00, BGl_string3345z00zz__srfi4z00, BgL_xz00_3378); 
FAILURE(BgL_auxz00_6383,BFALSE,BFALSE);} 
return 
BGl_u8vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_6380);} } 

}



/* s16vector->list */
BGL_EXPORTED_DEF obj_t BGl_s16vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_135)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
long BgL_g1067z00_1507;
BgL_g1067z00_1507 = 
BGL_HVECTOR_LENGTH(BgL_xz00_135); 
{ 
long BgL_iz00_1510;obj_t BgL_resz00_1511;
BgL_iz00_1510 = BgL_g1067z00_1507; 
BgL_resz00_1511 = BNIL; 
BgL_zc3z04anonymousza31452ze3z87_1512:
if(
(BgL_iz00_1510==((long)0)))
{ /* Llib/srfi4.scm 771 */
return BgL_resz00_1511;}  else 
{ /* Llib/srfi4.scm 771 */
long BgL_niz00_1514;
BgL_niz00_1514 = 
(BgL_iz00_1510-((long)1)); 
{ /* Llib/srfi4.scm 771 */
obj_t BgL_arg1454z00_1515;
{ /* Llib/srfi4.scm 771 */
int16_t BgL_arg1455z00_1516;
{ /* Llib/srfi4.scm 771 */
long BgL_l2464z00_3545;
BgL_l2464z00_3545 = 
BGL_HVECTOR_LENGTH(BgL_xz00_135); 
if(
BOUND_CHECK(BgL_niz00_1514, BgL_l2464z00_3545))
{ /* Llib/srfi4.scm 771 */
BgL_arg1455z00_1516 = 
BGL_S16VREF(BgL_xz00_135, BgL_niz00_1514); }  else 
{ 
obj_t BgL_auxz00_6396;
BgL_auxz00_6396 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3422z00zz__srfi4z00, BgL_xz00_135, 
(int)(BgL_l2464z00_3545), 
(int)(BgL_niz00_1514)); 
FAILURE(BgL_auxz00_6396,BFALSE,BFALSE);} } 
BgL_arg1454z00_1515 = 
MAKE_YOUNG_PAIR(
BGL_INT16_TO_BINT16(BgL_arg1455z00_1516), BgL_resz00_1511); } 
{ 
obj_t BgL_resz00_6405;long BgL_iz00_6404;
BgL_iz00_6404 = BgL_niz00_1514; 
BgL_resz00_6405 = BgL_arg1454z00_1515; 
BgL_resz00_1511 = BgL_resz00_6405; 
BgL_iz00_1510 = BgL_iz00_6404; 
goto BgL_zc3z04anonymousza31452ze3z87_1512;} } } } } } 

}



/* &s16vector->list */
obj_t BGl_z62s16vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3379, obj_t BgL_xz00_3380)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
obj_t BgL_auxz00_6406;
if(
BGL_S16VECTORP(BgL_xz00_3380))
{ /* Llib/srfi4.scm 771 */
BgL_auxz00_6406 = BgL_xz00_3380
; }  else 
{ 
obj_t BgL_auxz00_6409;
BgL_auxz00_6409 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3450z00zz__srfi4z00, BGl_string3347z00zz__srfi4z00, BgL_xz00_3380); 
FAILURE(BgL_auxz00_6409,BFALSE,BFALSE);} 
return 
BGl_s16vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_6406);} } 

}



/* u16vector->list */
BGL_EXPORTED_DEF obj_t BGl_u16vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_136)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
long BgL_g1069z00_1518;
BgL_g1069z00_1518 = 
BGL_HVECTOR_LENGTH(BgL_xz00_136); 
{ 
long BgL_iz00_1521;obj_t BgL_resz00_1522;
BgL_iz00_1521 = BgL_g1069z00_1518; 
BgL_resz00_1522 = BNIL; 
BgL_zc3z04anonymousza31456ze3z87_1523:
if(
(BgL_iz00_1521==((long)0)))
{ /* Llib/srfi4.scm 771 */
return BgL_resz00_1522;}  else 
{ /* Llib/srfi4.scm 771 */
long BgL_niz00_1525;
BgL_niz00_1525 = 
(BgL_iz00_1521-((long)1)); 
{ /* Llib/srfi4.scm 771 */
obj_t BgL_arg1458z00_1526;
{ /* Llib/srfi4.scm 771 */
uint16_t BgL_arg1459z00_1527;
{ /* Llib/srfi4.scm 771 */
long BgL_l2468z00_3549;
BgL_l2468z00_3549 = 
BGL_HVECTOR_LENGTH(BgL_xz00_136); 
if(
BOUND_CHECK(BgL_niz00_1525, BgL_l2468z00_3549))
{ /* Llib/srfi4.scm 771 */
BgL_arg1459z00_1527 = 
BGL_U16VREF(BgL_xz00_136, BgL_niz00_1525); }  else 
{ 
obj_t BgL_auxz00_6422;
BgL_auxz00_6422 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3424z00zz__srfi4z00, BgL_xz00_136, 
(int)(BgL_l2468z00_3549), 
(int)(BgL_niz00_1525)); 
FAILURE(BgL_auxz00_6422,BFALSE,BFALSE);} } 
BgL_arg1458z00_1526 = 
MAKE_YOUNG_PAIR(
BGL_UINT16_TO_BUINT16(BgL_arg1459z00_1527), BgL_resz00_1522); } 
{ 
obj_t BgL_resz00_6431;long BgL_iz00_6430;
BgL_iz00_6430 = BgL_niz00_1525; 
BgL_resz00_6431 = BgL_arg1458z00_1526; 
BgL_resz00_1522 = BgL_resz00_6431; 
BgL_iz00_1521 = BgL_iz00_6430; 
goto BgL_zc3z04anonymousza31456ze3z87_1523;} } } } } } 

}



/* &u16vector->list */
obj_t BGl_z62u16vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3381, obj_t BgL_xz00_3382)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
obj_t BgL_auxz00_6432;
if(
BGL_U16VECTORP(BgL_xz00_3382))
{ /* Llib/srfi4.scm 771 */
BgL_auxz00_6432 = BgL_xz00_3382
; }  else 
{ 
obj_t BgL_auxz00_6435;
BgL_auxz00_6435 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3451z00zz__srfi4z00, BGl_string3349z00zz__srfi4z00, BgL_xz00_3382); 
FAILURE(BgL_auxz00_6435,BFALSE,BFALSE);} 
return 
BGl_u16vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_6432);} } 

}



/* s32vector->list */
BGL_EXPORTED_DEF obj_t BGl_s32vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_137)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
long BgL_g1071z00_1529;
BgL_g1071z00_1529 = 
BGL_HVECTOR_LENGTH(BgL_xz00_137); 
{ 
long BgL_iz00_1532;obj_t BgL_resz00_1533;
BgL_iz00_1532 = BgL_g1071z00_1529; 
BgL_resz00_1533 = BNIL; 
BgL_zc3z04anonymousza31460ze3z87_1534:
if(
(BgL_iz00_1532==((long)0)))
{ /* Llib/srfi4.scm 771 */
return BgL_resz00_1533;}  else 
{ /* Llib/srfi4.scm 771 */
long BgL_niz00_1536;
BgL_niz00_1536 = 
(BgL_iz00_1532-((long)1)); 
{ /* Llib/srfi4.scm 771 */
obj_t BgL_arg1462z00_1537;
{ /* Llib/srfi4.scm 771 */
int32_t BgL_arg1463z00_1538;
{ /* Llib/srfi4.scm 771 */
long BgL_l2472z00_3553;
BgL_l2472z00_3553 = 
BGL_HVECTOR_LENGTH(BgL_xz00_137); 
if(
BOUND_CHECK(BgL_niz00_1536, BgL_l2472z00_3553))
{ /* Llib/srfi4.scm 771 */
BgL_arg1463z00_1538 = 
BGL_S32VREF(BgL_xz00_137, BgL_niz00_1536); }  else 
{ 
obj_t BgL_auxz00_6448;
BgL_auxz00_6448 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3426z00zz__srfi4z00, BgL_xz00_137, 
(int)(BgL_l2472z00_3553), 
(int)(BgL_niz00_1536)); 
FAILURE(BgL_auxz00_6448,BFALSE,BFALSE);} } 
BgL_arg1462z00_1537 = 
MAKE_YOUNG_PAIR(
BGL_INT32_TO_BINT32(BgL_arg1463z00_1538), BgL_resz00_1533); } 
{ 
obj_t BgL_resz00_6457;long BgL_iz00_6456;
BgL_iz00_6456 = BgL_niz00_1536; 
BgL_resz00_6457 = BgL_arg1462z00_1537; 
BgL_resz00_1533 = BgL_resz00_6457; 
BgL_iz00_1532 = BgL_iz00_6456; 
goto BgL_zc3z04anonymousza31460ze3z87_1534;} } } } } } 

}



/* &s32vector->list */
obj_t BGl_z62s32vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3383, obj_t BgL_xz00_3384)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
obj_t BgL_auxz00_6458;
if(
BGL_S32VECTORP(BgL_xz00_3384))
{ /* Llib/srfi4.scm 771 */
BgL_auxz00_6458 = BgL_xz00_3384
; }  else 
{ 
obj_t BgL_auxz00_6461;
BgL_auxz00_6461 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3452z00zz__srfi4z00, BGl_string3351z00zz__srfi4z00, BgL_xz00_3384); 
FAILURE(BgL_auxz00_6461,BFALSE,BFALSE);} 
return 
BGl_s32vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_6458);} } 

}



/* u32vector->list */
BGL_EXPORTED_DEF obj_t BGl_u32vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_138)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
long BgL_g1073z00_1540;
BgL_g1073z00_1540 = 
BGL_HVECTOR_LENGTH(BgL_xz00_138); 
{ 
long BgL_iz00_1543;obj_t BgL_resz00_1544;
BgL_iz00_1543 = BgL_g1073z00_1540; 
BgL_resz00_1544 = BNIL; 
BgL_zc3z04anonymousza31464ze3z87_1545:
if(
(BgL_iz00_1543==((long)0)))
{ /* Llib/srfi4.scm 771 */
return BgL_resz00_1544;}  else 
{ /* Llib/srfi4.scm 771 */
long BgL_niz00_1547;
BgL_niz00_1547 = 
(BgL_iz00_1543-((long)1)); 
{ /* Llib/srfi4.scm 771 */
obj_t BgL_arg1466z00_1548;
{ /* Llib/srfi4.scm 771 */
uint32_t BgL_arg1467z00_1549;
{ /* Llib/srfi4.scm 771 */
long BgL_l2476z00_3557;
BgL_l2476z00_3557 = 
BGL_HVECTOR_LENGTH(BgL_xz00_138); 
if(
BOUND_CHECK(BgL_niz00_1547, BgL_l2476z00_3557))
{ /* Llib/srfi4.scm 771 */
BgL_arg1467z00_1549 = 
BGL_U32VREF(BgL_xz00_138, BgL_niz00_1547); }  else 
{ 
obj_t BgL_auxz00_6474;
BgL_auxz00_6474 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3428z00zz__srfi4z00, BgL_xz00_138, 
(int)(BgL_l2476z00_3557), 
(int)(BgL_niz00_1547)); 
FAILURE(BgL_auxz00_6474,BFALSE,BFALSE);} } 
BgL_arg1466z00_1548 = 
MAKE_YOUNG_PAIR(
BGL_UINT32_TO_BUINT32(BgL_arg1467z00_1549), BgL_resz00_1544); } 
{ 
obj_t BgL_resz00_6483;long BgL_iz00_6482;
BgL_iz00_6482 = BgL_niz00_1547; 
BgL_resz00_6483 = BgL_arg1466z00_1548; 
BgL_resz00_1544 = BgL_resz00_6483; 
BgL_iz00_1543 = BgL_iz00_6482; 
goto BgL_zc3z04anonymousza31464ze3z87_1545;} } } } } } 

}



/* &u32vector->list */
obj_t BGl_z62u32vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3385, obj_t BgL_xz00_3386)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
obj_t BgL_auxz00_6484;
if(
BGL_U32VECTORP(BgL_xz00_3386))
{ /* Llib/srfi4.scm 771 */
BgL_auxz00_6484 = BgL_xz00_3386
; }  else 
{ 
obj_t BgL_auxz00_6487;
BgL_auxz00_6487 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3453z00zz__srfi4z00, BGl_string3353z00zz__srfi4z00, BgL_xz00_3386); 
FAILURE(BgL_auxz00_6487,BFALSE,BFALSE);} 
return 
BGl_u32vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_6484);} } 

}



/* s64vector->list */
BGL_EXPORTED_DEF obj_t BGl_s64vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_139)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
long BgL_g1076z00_1551;
BgL_g1076z00_1551 = 
BGL_HVECTOR_LENGTH(BgL_xz00_139); 
{ 
long BgL_iz00_1554;obj_t BgL_resz00_1555;
BgL_iz00_1554 = BgL_g1076z00_1551; 
BgL_resz00_1555 = BNIL; 
BgL_zc3z04anonymousza31468ze3z87_1556:
if(
(BgL_iz00_1554==((long)0)))
{ /* Llib/srfi4.scm 771 */
return BgL_resz00_1555;}  else 
{ /* Llib/srfi4.scm 771 */
long BgL_niz00_1558;
BgL_niz00_1558 = 
(BgL_iz00_1554-((long)1)); 
{ /* Llib/srfi4.scm 771 */
obj_t BgL_arg1470z00_1559;
{ /* Llib/srfi4.scm 771 */
int64_t BgL_arg1471z00_1560;
{ /* Llib/srfi4.scm 771 */
long BgL_l2480z00_3561;
BgL_l2480z00_3561 = 
BGL_HVECTOR_LENGTH(BgL_xz00_139); 
if(
BOUND_CHECK(BgL_niz00_1558, BgL_l2480z00_3561))
{ /* Llib/srfi4.scm 771 */
BgL_arg1471z00_1560 = 
BGL_S64VREF(BgL_xz00_139, BgL_niz00_1558); }  else 
{ 
obj_t BgL_auxz00_6500;
BgL_auxz00_6500 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3430z00zz__srfi4z00, BgL_xz00_139, 
(int)(BgL_l2480z00_3561), 
(int)(BgL_niz00_1558)); 
FAILURE(BgL_auxz00_6500,BFALSE,BFALSE);} } 
BgL_arg1470z00_1559 = 
MAKE_YOUNG_PAIR(
BGL_INT64_TO_BINT64(BgL_arg1471z00_1560), BgL_resz00_1555); } 
{ 
obj_t BgL_resz00_6509;long BgL_iz00_6508;
BgL_iz00_6508 = BgL_niz00_1558; 
BgL_resz00_6509 = BgL_arg1470z00_1559; 
BgL_resz00_1555 = BgL_resz00_6509; 
BgL_iz00_1554 = BgL_iz00_6508; 
goto BgL_zc3z04anonymousza31468ze3z87_1556;} } } } } } 

}



/* &s64vector->list */
obj_t BGl_z62s64vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3387, obj_t BgL_xz00_3388)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
obj_t BgL_auxz00_6510;
if(
BGL_S64VECTORP(BgL_xz00_3388))
{ /* Llib/srfi4.scm 771 */
BgL_auxz00_6510 = BgL_xz00_3388
; }  else 
{ 
obj_t BgL_auxz00_6513;
BgL_auxz00_6513 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3454z00zz__srfi4z00, BGl_string3355z00zz__srfi4z00, BgL_xz00_3388); 
FAILURE(BgL_auxz00_6513,BFALSE,BFALSE);} 
return 
BGl_s64vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_6510);} } 

}



/* u64vector->list */
BGL_EXPORTED_DEF obj_t BGl_u64vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_140)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
long BgL_g1078z00_1562;
BgL_g1078z00_1562 = 
BGL_HVECTOR_LENGTH(BgL_xz00_140); 
{ 
long BgL_iz00_1565;obj_t BgL_resz00_1566;
BgL_iz00_1565 = BgL_g1078z00_1562; 
BgL_resz00_1566 = BNIL; 
BgL_zc3z04anonymousza31472ze3z87_1567:
if(
(BgL_iz00_1565==((long)0)))
{ /* Llib/srfi4.scm 771 */
return BgL_resz00_1566;}  else 
{ /* Llib/srfi4.scm 771 */
long BgL_niz00_1569;
BgL_niz00_1569 = 
(BgL_iz00_1565-((long)1)); 
{ /* Llib/srfi4.scm 771 */
obj_t BgL_arg1474z00_1570;
{ /* Llib/srfi4.scm 771 */
uint64_t BgL_arg1475z00_1571;
{ /* Llib/srfi4.scm 771 */
long BgL_l2484z00_3565;
BgL_l2484z00_3565 = 
BGL_HVECTOR_LENGTH(BgL_xz00_140); 
if(
BOUND_CHECK(BgL_niz00_1569, BgL_l2484z00_3565))
{ /* Llib/srfi4.scm 771 */
BgL_arg1475z00_1571 = 
BGL_U64VREF(BgL_xz00_140, BgL_niz00_1569); }  else 
{ 
obj_t BgL_auxz00_6526;
BgL_auxz00_6526 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3432z00zz__srfi4z00, BgL_xz00_140, 
(int)(BgL_l2484z00_3565), 
(int)(BgL_niz00_1569)); 
FAILURE(BgL_auxz00_6526,BFALSE,BFALSE);} } 
BgL_arg1474z00_1570 = 
MAKE_YOUNG_PAIR(
BGL_UINT64_TO_BUINT64(BgL_arg1475z00_1571), BgL_resz00_1566); } 
{ 
obj_t BgL_resz00_6535;long BgL_iz00_6534;
BgL_iz00_6534 = BgL_niz00_1569; 
BgL_resz00_6535 = BgL_arg1474z00_1570; 
BgL_resz00_1566 = BgL_resz00_6535; 
BgL_iz00_1565 = BgL_iz00_6534; 
goto BgL_zc3z04anonymousza31472ze3z87_1567;} } } } } } 

}



/* &u64vector->list */
obj_t BGl_z62u64vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3389, obj_t BgL_xz00_3390)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
obj_t BgL_auxz00_6536;
if(
BGL_U64VECTORP(BgL_xz00_3390))
{ /* Llib/srfi4.scm 771 */
BgL_auxz00_6536 = BgL_xz00_3390
; }  else 
{ 
obj_t BgL_auxz00_6539;
BgL_auxz00_6539 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3455z00zz__srfi4z00, BGl_string3357z00zz__srfi4z00, BgL_xz00_3390); 
FAILURE(BgL_auxz00_6539,BFALSE,BFALSE);} 
return 
BGl_u64vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_6536);} } 

}



/* f32vector->list */
BGL_EXPORTED_DEF obj_t BGl_f32vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_141)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
long BgL_g1080z00_1573;
BgL_g1080z00_1573 = 
BGL_HVECTOR_LENGTH(BgL_xz00_141); 
{ 
long BgL_iz00_1576;obj_t BgL_resz00_1577;
BgL_iz00_1576 = BgL_g1080z00_1573; 
BgL_resz00_1577 = BNIL; 
BgL_zc3z04anonymousza31476ze3z87_1578:
if(
(BgL_iz00_1576==((long)0)))
{ /* Llib/srfi4.scm 771 */
return BgL_resz00_1577;}  else 
{ /* Llib/srfi4.scm 771 */
long BgL_niz00_1580;
BgL_niz00_1580 = 
(BgL_iz00_1576-((long)1)); 
{ /* Llib/srfi4.scm 771 */
obj_t BgL_arg1478z00_1581;
{ /* Llib/srfi4.scm 771 */
float BgL_arg1479z00_1582;
{ /* Llib/srfi4.scm 771 */
long BgL_l2488z00_3569;
BgL_l2488z00_3569 = 
BGL_HVECTOR_LENGTH(BgL_xz00_141); 
if(
BOUND_CHECK(BgL_niz00_1580, BgL_l2488z00_3569))
{ /* Llib/srfi4.scm 771 */
BgL_arg1479z00_1582 = 
BGL_F32VREF(BgL_xz00_141, BgL_niz00_1580); }  else 
{ 
obj_t BgL_auxz00_6552;
BgL_auxz00_6552 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3434z00zz__srfi4z00, BgL_xz00_141, 
(int)(BgL_l2488z00_3569), 
(int)(BgL_niz00_1580)); 
FAILURE(BgL_auxz00_6552,BFALSE,BFALSE);} } 
BgL_arg1478z00_1581 = 
MAKE_YOUNG_PAIR(
FLOAT_TO_REAL(BgL_arg1479z00_1582), BgL_resz00_1577); } 
{ 
obj_t BgL_resz00_6561;long BgL_iz00_6560;
BgL_iz00_6560 = BgL_niz00_1580; 
BgL_resz00_6561 = BgL_arg1478z00_1581; 
BgL_resz00_1577 = BgL_resz00_6561; 
BgL_iz00_1576 = BgL_iz00_6560; 
goto BgL_zc3z04anonymousza31476ze3z87_1578;} } } } } } 

}



/* &f32vector->list */
obj_t BGl_z62f32vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3391, obj_t BgL_xz00_3392)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
obj_t BgL_auxz00_6562;
if(
BGL_F32VECTORP(BgL_xz00_3392))
{ /* Llib/srfi4.scm 771 */
BgL_auxz00_6562 = BgL_xz00_3392
; }  else 
{ 
obj_t BgL_auxz00_6565;
BgL_auxz00_6565 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3456z00zz__srfi4z00, BGl_string3359z00zz__srfi4z00, BgL_xz00_3392); 
FAILURE(BgL_auxz00_6565,BFALSE,BFALSE);} 
return 
BGl_f32vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_6562);} } 

}



/* f64vector->list */
BGL_EXPORTED_DEF obj_t BGl_f64vectorzd2ze3listz31zz__srfi4z00(obj_t BgL_xz00_142)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
long BgL_g1082z00_1584;
BgL_g1082z00_1584 = 
BGL_HVECTOR_LENGTH(BgL_xz00_142); 
{ 
long BgL_iz00_1587;obj_t BgL_resz00_1588;
BgL_iz00_1587 = BgL_g1082z00_1584; 
BgL_resz00_1588 = BNIL; 
BgL_zc3z04anonymousza31480ze3z87_1589:
if(
(BgL_iz00_1587==((long)0)))
{ /* Llib/srfi4.scm 771 */
return BgL_resz00_1588;}  else 
{ /* Llib/srfi4.scm 771 */
long BgL_niz00_1591;
BgL_niz00_1591 = 
(BgL_iz00_1587-((long)1)); 
{ /* Llib/srfi4.scm 771 */
obj_t BgL_arg1483z00_1592;
{ /* Llib/srfi4.scm 771 */
double BgL_arg1484z00_1593;
{ /* Llib/srfi4.scm 771 */
long BgL_l2492z00_3573;
BgL_l2492z00_3573 = 
BGL_HVECTOR_LENGTH(BgL_xz00_142); 
if(
BOUND_CHECK(BgL_niz00_1591, BgL_l2492z00_3573))
{ /* Llib/srfi4.scm 771 */
BgL_arg1484z00_1593 = 
BGL_F64VREF(BgL_xz00_142, BgL_niz00_1591); }  else 
{ 
obj_t BgL_auxz00_6578;
BgL_auxz00_6578 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3436z00zz__srfi4z00, BgL_xz00_142, 
(int)(BgL_l2492z00_3573), 
(int)(BgL_niz00_1591)); 
FAILURE(BgL_auxz00_6578,BFALSE,BFALSE);} } 
BgL_arg1483z00_1592 = 
MAKE_YOUNG_PAIR(
DOUBLE_TO_REAL(BgL_arg1484z00_1593), BgL_resz00_1588); } 
{ 
obj_t BgL_resz00_6587;long BgL_iz00_6586;
BgL_iz00_6586 = BgL_niz00_1591; 
BgL_resz00_6587 = BgL_arg1483z00_1592; 
BgL_resz00_1588 = BgL_resz00_6587; 
BgL_iz00_1587 = BgL_iz00_6586; 
goto BgL_zc3z04anonymousza31480ze3z87_1589;} } } } } } 

}



/* &f64vector->list */
obj_t BGl_z62f64vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3393, obj_t BgL_xz00_3394)
{
{ /* Llib/srfi4.scm 771 */
{ /* Llib/srfi4.scm 771 */
obj_t BgL_auxz00_6588;
if(
BGL_F64VECTORP(BgL_xz00_3394))
{ /* Llib/srfi4.scm 771 */
BgL_auxz00_6588 = BgL_xz00_3394
; }  else 
{ 
obj_t BgL_auxz00_6591;
BgL_auxz00_6591 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)30505)), BGl_string3457z00zz__srfi4z00, BGl_string3361z00zz__srfi4z00, BgL_xz00_3394); 
FAILURE(BgL_auxz00_6591,BFALSE,BFALSE);} 
return 
BGl_f64vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_6588);} } 

}



/* list->s8vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3s8vectorz31zz__srfi4z00(obj_t BgL_xz00_143)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
long BgL_lenz00_1595;
BgL_lenz00_1595 = 
bgl_list_length(BgL_xz00_143); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_vecz00_1596;
{ /* Llib/srfi4.scm 796 */
int32_t BgL_tmpz00_6597;
BgL_tmpz00_6597 = 
(int32_t)(BgL_lenz00_1595); 
BgL_vecz00_1596 = 
BGL_ALLOC_S8VECTOR(BgL_tmpz00_6597); } 
{ /* Llib/srfi4.scm 796 */

{ 
long BgL_iz00_1598;obj_t BgL_lz00_1599;
BgL_iz00_1598 = ((long)0); 
BgL_lz00_1599 = BgL_xz00_143; 
BgL_zc3z04anonymousza31485ze3z87_1600:
if(
(BgL_iz00_1598==BgL_lenz00_1595))
{ /* Llib/srfi4.scm 796 */
return BgL_vecz00_1596;}  else 
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1487z00_1602;
{ /* Llib/srfi4.scm 796 */
bool_t BgL_test3972z00_6602;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_6603;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2604;
if(
PAIRP(BgL_lz00_1599))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2604 = BgL_lz00_1599; }  else 
{ 
obj_t BgL_auxz00_6606;
BgL_auxz00_6606 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1599); 
FAILURE(BgL_auxz00_6606,BFALSE,BFALSE);} 
BgL_tmpz00_6603 = 
CAR(BgL_pairz00_2604); } 
BgL_test3972z00_6602 = 
INTEGERP(BgL_tmpz00_6603); } 
if(BgL_test3972z00_6602)
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1491z00_1605;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2606;
if(
PAIRP(BgL_lz00_1599))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2606 = BgL_lz00_1599; }  else 
{ 
obj_t BgL_auxz00_6614;
BgL_auxz00_6614 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1599); 
FAILURE(BgL_auxz00_6614,BFALSE,BFALSE);} 
BgL_arg1491z00_1605 = 
CAR(BgL_pairz00_2606); } 
{ /* Llib/srfi4.scm 796 */
int8_t BgL_res2146z00_2608;
{ /* Llib/srfi4.scm 796 */
long BgL_xz00_2607;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_6619;
if(
INTEGERP(BgL_arg1491z00_1605))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_6619 = BgL_arg1491z00_1605
; }  else 
{ 
obj_t BgL_auxz00_6622;
BgL_auxz00_6622 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_arg1491z00_1605); 
FAILURE(BgL_auxz00_6622,BFALSE,BFALSE);} 
BgL_xz00_2607 = 
(long)CINT(BgL_tmpz00_6619); } 
BgL_res2146z00_2608 = 
(int8_t)(BgL_xz00_2607); } 
BgL_arg1487z00_1602 = 
BGL_INT8_TO_BINT8(BgL_res2146z00_2608); } }  else 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2609;
if(
PAIRP(BgL_lz00_1599))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2609 = BgL_lz00_1599; }  else 
{ 
obj_t BgL_auxz00_6631;
BgL_auxz00_6631 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1599); 
FAILURE(BgL_auxz00_6631,BFALSE,BFALSE);} 
BgL_arg1487z00_1602 = 
CAR(BgL_pairz00_2609); } } 
{ /* Llib/srfi4.scm 796 */
long BgL_l2496z00_3577;
BgL_l2496z00_3577 = 
BGL_HVECTOR_LENGTH(BgL_vecz00_1596); 
if(
BOUND_CHECK(BgL_iz00_1598, BgL_l2496z00_3577))
{ /* Llib/srfi4.scm 796 */
int8_t BgL_tmpz00_6639;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_6640;
if(
BGL_INT8P(BgL_arg1487z00_1602))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_6640 = BgL_arg1487z00_1602
; }  else 
{ 
obj_t BgL_auxz00_6643;
BgL_auxz00_6643 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3368z00zz__srfi4z00, BgL_arg1487z00_1602); 
FAILURE(BgL_auxz00_6643,BFALSE,BFALSE);} 
BgL_tmpz00_6639 = 
BGL_BINT8_TO_INT8(BgL_tmpz00_6640); } 
BGL_S8VSET(BgL_vecz00_1596, BgL_iz00_1598, BgL_tmpz00_6639); }  else 
{ 
obj_t BgL_auxz00_6649;
BgL_auxz00_6649 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3369z00zz__srfi4z00, BgL_vecz00_1596, 
(int)(BgL_l2496z00_3577), 
(int)(BgL_iz00_1598)); 
FAILURE(BgL_auxz00_6649,BFALSE,BFALSE);} } BUNSPEC; } 
{ /* Llib/srfi4.scm 796 */
long BgL_arg1493z00_1607;obj_t BgL_arg1494z00_1608;
BgL_arg1493z00_1607 = 
(BgL_iz00_1598+((long)1)); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2612;
if(
PAIRP(BgL_lz00_1599))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2612 = BgL_lz00_1599; }  else 
{ 
obj_t BgL_auxz00_6658;
BgL_auxz00_6658 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1599); 
FAILURE(BgL_auxz00_6658,BFALSE,BFALSE);} 
BgL_arg1494z00_1608 = 
CDR(BgL_pairz00_2612); } 
{ 
obj_t BgL_lz00_6664;long BgL_iz00_6663;
BgL_iz00_6663 = BgL_arg1493z00_1607; 
BgL_lz00_6664 = BgL_arg1494z00_1608; 
BgL_lz00_1599 = BgL_lz00_6664; 
BgL_iz00_1598 = BgL_iz00_6663; 
goto BgL_zc3z04anonymousza31485ze3z87_1600;} } } } } } } } 

}



/* &list->s8vector */
obj_t BGl_z62listzd2ze3s8vectorz53zz__srfi4z00(obj_t BgL_envz00_3395, obj_t BgL_xz00_3396)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_auxz00_6665;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_xz00_3396))
{ /* Llib/srfi4.scm 796 */
BgL_auxz00_6665 = BgL_xz00_3396
; }  else 
{ 
obj_t BgL_auxz00_6668;
BgL_auxz00_6668 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3460z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_3396); 
FAILURE(BgL_auxz00_6668,BFALSE,BFALSE);} 
return 
BGl_listzd2ze3s8vectorz31zz__srfi4z00(BgL_auxz00_6665);} } 

}



/* list->u8vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3u8vectorz31zz__srfi4z00(obj_t BgL_xz00_144)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
long BgL_lenz00_1610;
BgL_lenz00_1610 = 
bgl_list_length(BgL_xz00_144); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_vecz00_1611;
{ /* Llib/srfi4.scm 796 */
int32_t BgL_tmpz00_6674;
BgL_tmpz00_6674 = 
(int32_t)(BgL_lenz00_1610); 
BgL_vecz00_1611 = 
BGL_ALLOC_U8VECTOR(BgL_tmpz00_6674); } 
{ /* Llib/srfi4.scm 796 */

{ 
long BgL_iz00_1613;obj_t BgL_lz00_1614;
BgL_iz00_1613 = ((long)0); 
BgL_lz00_1614 = BgL_xz00_144; 
BgL_zc3z04anonymousza31495ze3z87_1615:
if(
(BgL_iz00_1613==BgL_lenz00_1610))
{ /* Llib/srfi4.scm 796 */
return BgL_vecz00_1611;}  else 
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1497z00_1617;
{ /* Llib/srfi4.scm 796 */
bool_t BgL_test3982z00_6679;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_6680;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2616;
if(
PAIRP(BgL_lz00_1614))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2616 = BgL_lz00_1614; }  else 
{ 
obj_t BgL_auxz00_6683;
BgL_auxz00_6683 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1614); 
FAILURE(BgL_auxz00_6683,BFALSE,BFALSE);} 
BgL_tmpz00_6680 = 
CAR(BgL_pairz00_2616); } 
BgL_test3982z00_6679 = 
INTEGERP(BgL_tmpz00_6680); } 
if(BgL_test3982z00_6679)
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1500z00_1620;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2618;
if(
PAIRP(BgL_lz00_1614))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2618 = BgL_lz00_1614; }  else 
{ 
obj_t BgL_auxz00_6691;
BgL_auxz00_6691 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1614); 
FAILURE(BgL_auxz00_6691,BFALSE,BFALSE);} 
BgL_arg1500z00_1620 = 
CAR(BgL_pairz00_2618); } 
{ /* Llib/srfi4.scm 796 */
uint8_t BgL_res2150z00_2620;
{ /* Llib/srfi4.scm 796 */
long BgL_xz00_2619;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_6696;
if(
INTEGERP(BgL_arg1500z00_1620))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_6696 = BgL_arg1500z00_1620
; }  else 
{ 
obj_t BgL_auxz00_6699;
BgL_auxz00_6699 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_arg1500z00_1620); 
FAILURE(BgL_auxz00_6699,BFALSE,BFALSE);} 
BgL_xz00_2619 = 
(long)CINT(BgL_tmpz00_6696); } 
BgL_res2150z00_2620 = 
(uint8_t)(BgL_xz00_2619); } 
BgL_arg1497z00_1617 = 
BGL_UINT8_TO_BUINT8(BgL_res2150z00_2620); } }  else 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2621;
if(
PAIRP(BgL_lz00_1614))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2621 = BgL_lz00_1614; }  else 
{ 
obj_t BgL_auxz00_6708;
BgL_auxz00_6708 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1614); 
FAILURE(BgL_auxz00_6708,BFALSE,BFALSE);} 
BgL_arg1497z00_1617 = 
CAR(BgL_pairz00_2621); } } 
{ /* Llib/srfi4.scm 796 */
long BgL_l2500z00_3581;
BgL_l2500z00_3581 = 
BGL_HVECTOR_LENGTH(BgL_vecz00_1611); 
if(
BOUND_CHECK(BgL_iz00_1613, BgL_l2500z00_3581))
{ /* Llib/srfi4.scm 796 */
uint8_t BgL_tmpz00_6716;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_6717;
if(
BGL_UINT8P(BgL_arg1497z00_1617))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_6717 = BgL_arg1497z00_1617
; }  else 
{ 
obj_t BgL_auxz00_6720;
BgL_auxz00_6720 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3373z00zz__srfi4z00, BgL_arg1497z00_1617); 
FAILURE(BgL_auxz00_6720,BFALSE,BFALSE);} 
BgL_tmpz00_6716 = 
BGL_BUINT8_TO_UINT8(BgL_tmpz00_6717); } 
BGL_U8VSET(BgL_vecz00_1611, BgL_iz00_1613, BgL_tmpz00_6716); }  else 
{ 
obj_t BgL_auxz00_6726;
BgL_auxz00_6726 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3374z00zz__srfi4z00, BgL_vecz00_1611, 
(int)(BgL_l2500z00_3581), 
(int)(BgL_iz00_1613)); 
FAILURE(BgL_auxz00_6726,BFALSE,BFALSE);} } BUNSPEC; } 
{ /* Llib/srfi4.scm 796 */
long BgL_arg1505z00_1622;obj_t BgL_arg1506z00_1623;
BgL_arg1505z00_1622 = 
(BgL_iz00_1613+((long)1)); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2624;
if(
PAIRP(BgL_lz00_1614))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2624 = BgL_lz00_1614; }  else 
{ 
obj_t BgL_auxz00_6735;
BgL_auxz00_6735 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1614); 
FAILURE(BgL_auxz00_6735,BFALSE,BFALSE);} 
BgL_arg1506z00_1623 = 
CDR(BgL_pairz00_2624); } 
{ 
obj_t BgL_lz00_6741;long BgL_iz00_6740;
BgL_iz00_6740 = BgL_arg1505z00_1622; 
BgL_lz00_6741 = BgL_arg1506z00_1623; 
BgL_lz00_1614 = BgL_lz00_6741; 
BgL_iz00_1613 = BgL_iz00_6740; 
goto BgL_zc3z04anonymousza31495ze3z87_1615;} } } } } } } } 

}



/* &list->u8vector */
obj_t BGl_z62listzd2ze3u8vectorz53zz__srfi4z00(obj_t BgL_envz00_3397, obj_t BgL_xz00_3398)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_auxz00_6742;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_xz00_3398))
{ /* Llib/srfi4.scm 796 */
BgL_auxz00_6742 = BgL_xz00_3398
; }  else 
{ 
obj_t BgL_auxz00_6745;
BgL_auxz00_6745 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3461z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_3398); 
FAILURE(BgL_auxz00_6745,BFALSE,BFALSE);} 
return 
BGl_listzd2ze3u8vectorz31zz__srfi4z00(BgL_auxz00_6742);} } 

}



/* list->s16vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3s16vectorz31zz__srfi4z00(obj_t BgL_xz00_145)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
long BgL_lenz00_1625;
BgL_lenz00_1625 = 
bgl_list_length(BgL_xz00_145); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_vecz00_1626;
{ /* Llib/srfi4.scm 796 */
int32_t BgL_tmpz00_6751;
BgL_tmpz00_6751 = 
(int32_t)(BgL_lenz00_1625); 
BgL_vecz00_1626 = 
BGL_ALLOC_S16VECTOR(BgL_tmpz00_6751); } 
{ /* Llib/srfi4.scm 796 */

{ 
long BgL_iz00_1628;obj_t BgL_lz00_1629;
BgL_iz00_1628 = ((long)0); 
BgL_lz00_1629 = BgL_xz00_145; 
BgL_zc3z04anonymousza31507ze3z87_1630:
if(
(BgL_iz00_1628==BgL_lenz00_1625))
{ /* Llib/srfi4.scm 796 */
return BgL_vecz00_1626;}  else 
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1509z00_1632;
{ /* Llib/srfi4.scm 796 */
bool_t BgL_test3992z00_6756;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_6757;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2628;
if(
PAIRP(BgL_lz00_1629))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2628 = BgL_lz00_1629; }  else 
{ 
obj_t BgL_auxz00_6760;
BgL_auxz00_6760 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1629); 
FAILURE(BgL_auxz00_6760,BFALSE,BFALSE);} 
BgL_tmpz00_6757 = 
CAR(BgL_pairz00_2628); } 
BgL_test3992z00_6756 = 
INTEGERP(BgL_tmpz00_6757); } 
if(BgL_test3992z00_6756)
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1512z00_1635;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2630;
if(
PAIRP(BgL_lz00_1629))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2630 = BgL_lz00_1629; }  else 
{ 
obj_t BgL_auxz00_6768;
BgL_auxz00_6768 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1629); 
FAILURE(BgL_auxz00_6768,BFALSE,BFALSE);} 
BgL_arg1512z00_1635 = 
CAR(BgL_pairz00_2630); } 
{ /* Llib/srfi4.scm 796 */
int16_t BgL_res2154z00_2632;
{ /* Llib/srfi4.scm 796 */
long BgL_xz00_2631;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_6773;
if(
INTEGERP(BgL_arg1512z00_1635))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_6773 = BgL_arg1512z00_1635
; }  else 
{ 
obj_t BgL_auxz00_6776;
BgL_auxz00_6776 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_arg1512z00_1635); 
FAILURE(BgL_auxz00_6776,BFALSE,BFALSE);} 
BgL_xz00_2631 = 
(long)CINT(BgL_tmpz00_6773); } 
BgL_res2154z00_2632 = 
(int16_t)(BgL_xz00_2631); } 
BgL_arg1509z00_1632 = 
BGL_INT16_TO_BINT16(BgL_res2154z00_2632); } }  else 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2633;
if(
PAIRP(BgL_lz00_1629))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2633 = BgL_lz00_1629; }  else 
{ 
obj_t BgL_auxz00_6785;
BgL_auxz00_6785 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1629); 
FAILURE(BgL_auxz00_6785,BFALSE,BFALSE);} 
BgL_arg1509z00_1632 = 
CAR(BgL_pairz00_2633); } } 
{ /* Llib/srfi4.scm 796 */
long BgL_l2504z00_3585;
BgL_l2504z00_3585 = 
BGL_HVECTOR_LENGTH(BgL_vecz00_1626); 
if(
BOUND_CHECK(BgL_iz00_1628, BgL_l2504z00_3585))
{ /* Llib/srfi4.scm 796 */
int16_t BgL_tmpz00_6793;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_6794;
if(
BGL_INT16P(BgL_arg1509z00_1632))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_6794 = BgL_arg1509z00_1632
; }  else 
{ 
obj_t BgL_auxz00_6797;
BgL_auxz00_6797 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3378z00zz__srfi4z00, BgL_arg1509z00_1632); 
FAILURE(BgL_auxz00_6797,BFALSE,BFALSE);} 
BgL_tmpz00_6793 = 
BGL_BINT16_TO_INT16(BgL_tmpz00_6794); } 
BGL_S16VSET(BgL_vecz00_1626, BgL_iz00_1628, BgL_tmpz00_6793); }  else 
{ 
obj_t BgL_auxz00_6803;
BgL_auxz00_6803 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3379z00zz__srfi4z00, BgL_vecz00_1626, 
(int)(BgL_l2504z00_3585), 
(int)(BgL_iz00_1628)); 
FAILURE(BgL_auxz00_6803,BFALSE,BFALSE);} } BUNSPEC; } 
{ /* Llib/srfi4.scm 796 */
long BgL_arg1514z00_1637;obj_t BgL_arg1515z00_1638;
BgL_arg1514z00_1637 = 
(BgL_iz00_1628+((long)1)); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2636;
if(
PAIRP(BgL_lz00_1629))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2636 = BgL_lz00_1629; }  else 
{ 
obj_t BgL_auxz00_6812;
BgL_auxz00_6812 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1629); 
FAILURE(BgL_auxz00_6812,BFALSE,BFALSE);} 
BgL_arg1515z00_1638 = 
CDR(BgL_pairz00_2636); } 
{ 
obj_t BgL_lz00_6818;long BgL_iz00_6817;
BgL_iz00_6817 = BgL_arg1514z00_1637; 
BgL_lz00_6818 = BgL_arg1515z00_1638; 
BgL_lz00_1629 = BgL_lz00_6818; 
BgL_iz00_1628 = BgL_iz00_6817; 
goto BgL_zc3z04anonymousza31507ze3z87_1630;} } } } } } } } 

}



/* &list->s16vector */
obj_t BGl_z62listzd2ze3s16vectorz53zz__srfi4z00(obj_t BgL_envz00_3399, obj_t BgL_xz00_3400)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_auxz00_6819;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_xz00_3400))
{ /* Llib/srfi4.scm 796 */
BgL_auxz00_6819 = BgL_xz00_3400
; }  else 
{ 
obj_t BgL_auxz00_6822;
BgL_auxz00_6822 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3462z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_3400); 
FAILURE(BgL_auxz00_6822,BFALSE,BFALSE);} 
return 
BGl_listzd2ze3s16vectorz31zz__srfi4z00(BgL_auxz00_6819);} } 

}



/* list->u16vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3u16vectorz31zz__srfi4z00(obj_t BgL_xz00_146)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
long BgL_lenz00_1640;
BgL_lenz00_1640 = 
bgl_list_length(BgL_xz00_146); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_vecz00_1641;
{ /* Llib/srfi4.scm 796 */
int32_t BgL_tmpz00_6828;
BgL_tmpz00_6828 = 
(int32_t)(BgL_lenz00_1640); 
BgL_vecz00_1641 = 
BGL_ALLOC_U16VECTOR(BgL_tmpz00_6828); } 
{ /* Llib/srfi4.scm 796 */

{ 
long BgL_iz00_1643;obj_t BgL_lz00_1644;
BgL_iz00_1643 = ((long)0); 
BgL_lz00_1644 = BgL_xz00_146; 
BgL_zc3z04anonymousza31516ze3z87_1645:
if(
(BgL_iz00_1643==BgL_lenz00_1640))
{ /* Llib/srfi4.scm 796 */
return BgL_vecz00_1641;}  else 
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1518z00_1647;
{ /* Llib/srfi4.scm 796 */
bool_t BgL_test4002z00_6833;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_6834;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2640;
if(
PAIRP(BgL_lz00_1644))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2640 = BgL_lz00_1644; }  else 
{ 
obj_t BgL_auxz00_6837;
BgL_auxz00_6837 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1644); 
FAILURE(BgL_auxz00_6837,BFALSE,BFALSE);} 
BgL_tmpz00_6834 = 
CAR(BgL_pairz00_2640); } 
BgL_test4002z00_6833 = 
INTEGERP(BgL_tmpz00_6834); } 
if(BgL_test4002z00_6833)
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1521z00_1650;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2642;
if(
PAIRP(BgL_lz00_1644))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2642 = BgL_lz00_1644; }  else 
{ 
obj_t BgL_auxz00_6845;
BgL_auxz00_6845 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1644); 
FAILURE(BgL_auxz00_6845,BFALSE,BFALSE);} 
BgL_arg1521z00_1650 = 
CAR(BgL_pairz00_2642); } 
{ /* Llib/srfi4.scm 796 */
uint16_t BgL_res2158z00_2644;
{ /* Llib/srfi4.scm 796 */
long BgL_xz00_2643;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_6850;
if(
INTEGERP(BgL_arg1521z00_1650))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_6850 = BgL_arg1521z00_1650
; }  else 
{ 
obj_t BgL_auxz00_6853;
BgL_auxz00_6853 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_arg1521z00_1650); 
FAILURE(BgL_auxz00_6853,BFALSE,BFALSE);} 
BgL_xz00_2643 = 
(long)CINT(BgL_tmpz00_6850); } 
BgL_res2158z00_2644 = 
(uint16_t)(BgL_xz00_2643); } 
BgL_arg1518z00_1647 = 
BGL_UINT16_TO_BUINT16(BgL_res2158z00_2644); } }  else 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2645;
if(
PAIRP(BgL_lz00_1644))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2645 = BgL_lz00_1644; }  else 
{ 
obj_t BgL_auxz00_6862;
BgL_auxz00_6862 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1644); 
FAILURE(BgL_auxz00_6862,BFALSE,BFALSE);} 
BgL_arg1518z00_1647 = 
CAR(BgL_pairz00_2645); } } 
{ /* Llib/srfi4.scm 796 */
long BgL_l2508z00_3589;
BgL_l2508z00_3589 = 
BGL_HVECTOR_LENGTH(BgL_vecz00_1641); 
if(
BOUND_CHECK(BgL_iz00_1643, BgL_l2508z00_3589))
{ /* Llib/srfi4.scm 796 */
uint16_t BgL_tmpz00_6870;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_6871;
if(
BGL_UINT16P(BgL_arg1518z00_1647))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_6871 = BgL_arg1518z00_1647
; }  else 
{ 
obj_t BgL_auxz00_6874;
BgL_auxz00_6874 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3383z00zz__srfi4z00, BgL_arg1518z00_1647); 
FAILURE(BgL_auxz00_6874,BFALSE,BFALSE);} 
BgL_tmpz00_6870 = 
BGL_BUINT16_TO_UINT16(BgL_tmpz00_6871); } 
BGL_U16VSET(BgL_vecz00_1641, BgL_iz00_1643, BgL_tmpz00_6870); }  else 
{ 
obj_t BgL_auxz00_6880;
BgL_auxz00_6880 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3384z00zz__srfi4z00, BgL_vecz00_1641, 
(int)(BgL_l2508z00_3589), 
(int)(BgL_iz00_1643)); 
FAILURE(BgL_auxz00_6880,BFALSE,BFALSE);} } BUNSPEC; } 
{ /* Llib/srfi4.scm 796 */
long BgL_arg1524z00_1652;obj_t BgL_arg1525z00_1653;
BgL_arg1524z00_1652 = 
(BgL_iz00_1643+((long)1)); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2648;
if(
PAIRP(BgL_lz00_1644))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2648 = BgL_lz00_1644; }  else 
{ 
obj_t BgL_auxz00_6889;
BgL_auxz00_6889 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1644); 
FAILURE(BgL_auxz00_6889,BFALSE,BFALSE);} 
BgL_arg1525z00_1653 = 
CDR(BgL_pairz00_2648); } 
{ 
obj_t BgL_lz00_6895;long BgL_iz00_6894;
BgL_iz00_6894 = BgL_arg1524z00_1652; 
BgL_lz00_6895 = BgL_arg1525z00_1653; 
BgL_lz00_1644 = BgL_lz00_6895; 
BgL_iz00_1643 = BgL_iz00_6894; 
goto BgL_zc3z04anonymousza31516ze3z87_1645;} } } } } } } } 

}



/* &list->u16vector */
obj_t BGl_z62listzd2ze3u16vectorz53zz__srfi4z00(obj_t BgL_envz00_3401, obj_t BgL_xz00_3402)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_auxz00_6896;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_xz00_3402))
{ /* Llib/srfi4.scm 796 */
BgL_auxz00_6896 = BgL_xz00_3402
; }  else 
{ 
obj_t BgL_auxz00_6899;
BgL_auxz00_6899 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3463z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_3402); 
FAILURE(BgL_auxz00_6899,BFALSE,BFALSE);} 
return 
BGl_listzd2ze3u16vectorz31zz__srfi4z00(BgL_auxz00_6896);} } 

}



/* list->s32vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3s32vectorz31zz__srfi4z00(obj_t BgL_xz00_147)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
long BgL_lenz00_1655;
BgL_lenz00_1655 = 
bgl_list_length(BgL_xz00_147); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_vecz00_1656;
{ /* Llib/srfi4.scm 796 */
int32_t BgL_tmpz00_6905;
BgL_tmpz00_6905 = 
(int32_t)(BgL_lenz00_1655); 
BgL_vecz00_1656 = 
BGL_ALLOC_S32VECTOR(BgL_tmpz00_6905); } 
{ /* Llib/srfi4.scm 796 */

{ 
long BgL_iz00_1658;obj_t BgL_lz00_1659;
BgL_iz00_1658 = ((long)0); 
BgL_lz00_1659 = BgL_xz00_147; 
BgL_zc3z04anonymousza31526ze3z87_1660:
if(
(BgL_iz00_1658==BgL_lenz00_1655))
{ /* Llib/srfi4.scm 796 */
return BgL_vecz00_1656;}  else 
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1528z00_1662;
{ /* Llib/srfi4.scm 796 */
bool_t BgL_test4012z00_6910;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_6911;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2652;
if(
PAIRP(BgL_lz00_1659))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2652 = BgL_lz00_1659; }  else 
{ 
obj_t BgL_auxz00_6914;
BgL_auxz00_6914 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1659); 
FAILURE(BgL_auxz00_6914,BFALSE,BFALSE);} 
BgL_tmpz00_6911 = 
CAR(BgL_pairz00_2652); } 
BgL_test4012z00_6910 = 
INTEGERP(BgL_tmpz00_6911); } 
if(BgL_test4012z00_6910)
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1532z00_1665;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2654;
if(
PAIRP(BgL_lz00_1659))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2654 = BgL_lz00_1659; }  else 
{ 
obj_t BgL_auxz00_6922;
BgL_auxz00_6922 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1659); 
FAILURE(BgL_auxz00_6922,BFALSE,BFALSE);} 
BgL_arg1532z00_1665 = 
CAR(BgL_pairz00_2654); } 
{ /* Llib/srfi4.scm 796 */
int32_t BgL_res2162z00_2656;
{ /* Llib/srfi4.scm 796 */
long BgL_xz00_2655;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_6927;
if(
INTEGERP(BgL_arg1532z00_1665))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_6927 = BgL_arg1532z00_1665
; }  else 
{ 
obj_t BgL_auxz00_6930;
BgL_auxz00_6930 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_arg1532z00_1665); 
FAILURE(BgL_auxz00_6930,BFALSE,BFALSE);} 
BgL_xz00_2655 = 
(long)CINT(BgL_tmpz00_6927); } 
BgL_res2162z00_2656 = 
(int32_t)(BgL_xz00_2655); } 
BgL_arg1528z00_1662 = 
BGL_INT32_TO_BINT32(BgL_res2162z00_2656); } }  else 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2657;
if(
PAIRP(BgL_lz00_1659))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2657 = BgL_lz00_1659; }  else 
{ 
obj_t BgL_auxz00_6939;
BgL_auxz00_6939 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1659); 
FAILURE(BgL_auxz00_6939,BFALSE,BFALSE);} 
BgL_arg1528z00_1662 = 
CAR(BgL_pairz00_2657); } } 
{ /* Llib/srfi4.scm 796 */
long BgL_l2512z00_3593;
BgL_l2512z00_3593 = 
BGL_HVECTOR_LENGTH(BgL_vecz00_1656); 
if(
BOUND_CHECK(BgL_iz00_1658, BgL_l2512z00_3593))
{ /* Llib/srfi4.scm 796 */
int32_t BgL_tmpz00_6947;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_6948;
if(
BGL_INT32P(BgL_arg1528z00_1662))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_6948 = BgL_arg1528z00_1662
; }  else 
{ 
obj_t BgL_auxz00_6951;
BgL_auxz00_6951 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3388z00zz__srfi4z00, BgL_arg1528z00_1662); 
FAILURE(BgL_auxz00_6951,BFALSE,BFALSE);} 
BgL_tmpz00_6947 = 
BGL_BINT32_TO_INT32(BgL_tmpz00_6948); } 
BGL_S32VSET(BgL_vecz00_1656, BgL_iz00_1658, BgL_tmpz00_6947); }  else 
{ 
obj_t BgL_auxz00_6957;
BgL_auxz00_6957 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3389z00zz__srfi4z00, BgL_vecz00_1656, 
(int)(BgL_l2512z00_3593), 
(int)(BgL_iz00_1658)); 
FAILURE(BgL_auxz00_6957,BFALSE,BFALSE);} } BUNSPEC; } 
{ /* Llib/srfi4.scm 796 */
long BgL_arg1534z00_1667;obj_t BgL_arg1535z00_1668;
BgL_arg1534z00_1667 = 
(BgL_iz00_1658+((long)1)); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2660;
if(
PAIRP(BgL_lz00_1659))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2660 = BgL_lz00_1659; }  else 
{ 
obj_t BgL_auxz00_6966;
BgL_auxz00_6966 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1659); 
FAILURE(BgL_auxz00_6966,BFALSE,BFALSE);} 
BgL_arg1535z00_1668 = 
CDR(BgL_pairz00_2660); } 
{ 
obj_t BgL_lz00_6972;long BgL_iz00_6971;
BgL_iz00_6971 = BgL_arg1534z00_1667; 
BgL_lz00_6972 = BgL_arg1535z00_1668; 
BgL_lz00_1659 = BgL_lz00_6972; 
BgL_iz00_1658 = BgL_iz00_6971; 
goto BgL_zc3z04anonymousza31526ze3z87_1660;} } } } } } } } 

}



/* &list->s32vector */
obj_t BGl_z62listzd2ze3s32vectorz53zz__srfi4z00(obj_t BgL_envz00_3403, obj_t BgL_xz00_3404)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_auxz00_6973;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_xz00_3404))
{ /* Llib/srfi4.scm 796 */
BgL_auxz00_6973 = BgL_xz00_3404
; }  else 
{ 
obj_t BgL_auxz00_6976;
BgL_auxz00_6976 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3464z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_3404); 
FAILURE(BgL_auxz00_6976,BFALSE,BFALSE);} 
return 
BGl_listzd2ze3s32vectorz31zz__srfi4z00(BgL_auxz00_6973);} } 

}



/* list->u32vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3u32vectorz31zz__srfi4z00(obj_t BgL_xz00_148)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
long BgL_lenz00_1670;
BgL_lenz00_1670 = 
bgl_list_length(BgL_xz00_148); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_vecz00_1671;
{ /* Llib/srfi4.scm 796 */
int32_t BgL_tmpz00_6982;
BgL_tmpz00_6982 = 
(int32_t)(BgL_lenz00_1670); 
BgL_vecz00_1671 = 
BGL_ALLOC_U32VECTOR(BgL_tmpz00_6982); } 
{ /* Llib/srfi4.scm 796 */

{ 
long BgL_iz00_1673;obj_t BgL_lz00_1674;
BgL_iz00_1673 = ((long)0); 
BgL_lz00_1674 = BgL_xz00_148; 
BgL_zc3z04anonymousza31536ze3z87_1675:
if(
(BgL_iz00_1673==BgL_lenz00_1670))
{ /* Llib/srfi4.scm 796 */
return BgL_vecz00_1671;}  else 
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1540z00_1677;
{ /* Llib/srfi4.scm 796 */
bool_t BgL_test4022z00_6987;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_6988;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2664;
if(
PAIRP(BgL_lz00_1674))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2664 = BgL_lz00_1674; }  else 
{ 
obj_t BgL_auxz00_6991;
BgL_auxz00_6991 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1674); 
FAILURE(BgL_auxz00_6991,BFALSE,BFALSE);} 
BgL_tmpz00_6988 = 
CAR(BgL_pairz00_2664); } 
BgL_test4022z00_6987 = 
INTEGERP(BgL_tmpz00_6988); } 
if(BgL_test4022z00_6987)
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1544z00_1680;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2666;
if(
PAIRP(BgL_lz00_1674))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2666 = BgL_lz00_1674; }  else 
{ 
obj_t BgL_auxz00_6999;
BgL_auxz00_6999 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1674); 
FAILURE(BgL_auxz00_6999,BFALSE,BFALSE);} 
BgL_arg1544z00_1680 = 
CAR(BgL_pairz00_2666); } 
{ /* Llib/srfi4.scm 796 */
uint32_t BgL_res2166z00_2668;
{ /* Llib/srfi4.scm 796 */
long BgL_xz00_2667;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_7004;
if(
INTEGERP(BgL_arg1544z00_1680))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_7004 = BgL_arg1544z00_1680
; }  else 
{ 
obj_t BgL_auxz00_7007;
BgL_auxz00_7007 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_arg1544z00_1680); 
FAILURE(BgL_auxz00_7007,BFALSE,BFALSE);} 
BgL_xz00_2667 = 
(long)CINT(BgL_tmpz00_7004); } 
BgL_res2166z00_2668 = 
(uint32_t)(BgL_xz00_2667); } 
BgL_arg1540z00_1677 = 
BGL_UINT32_TO_BUINT32(BgL_res2166z00_2668); } }  else 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2669;
if(
PAIRP(BgL_lz00_1674))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2669 = BgL_lz00_1674; }  else 
{ 
obj_t BgL_auxz00_7016;
BgL_auxz00_7016 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1674); 
FAILURE(BgL_auxz00_7016,BFALSE,BFALSE);} 
BgL_arg1540z00_1677 = 
CAR(BgL_pairz00_2669); } } 
{ /* Llib/srfi4.scm 796 */
long BgL_l2516z00_3597;
BgL_l2516z00_3597 = 
BGL_HVECTOR_LENGTH(BgL_vecz00_1671); 
if(
BOUND_CHECK(BgL_iz00_1673, BgL_l2516z00_3597))
{ /* Llib/srfi4.scm 796 */
uint32_t BgL_tmpz00_7024;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_7025;
if(
BGL_UINT32P(BgL_arg1540z00_1677))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_7025 = BgL_arg1540z00_1677
; }  else 
{ 
obj_t BgL_auxz00_7028;
BgL_auxz00_7028 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3393z00zz__srfi4z00, BgL_arg1540z00_1677); 
FAILURE(BgL_auxz00_7028,BFALSE,BFALSE);} 
BgL_tmpz00_7024 = 
BGL_BUINT32_TO_UINT32(BgL_tmpz00_7025); } 
BGL_U32VSET(BgL_vecz00_1671, BgL_iz00_1673, BgL_tmpz00_7024); }  else 
{ 
obj_t BgL_auxz00_7034;
BgL_auxz00_7034 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3394z00zz__srfi4z00, BgL_vecz00_1671, 
(int)(BgL_l2516z00_3597), 
(int)(BgL_iz00_1673)); 
FAILURE(BgL_auxz00_7034,BFALSE,BFALSE);} } BUNSPEC; } 
{ /* Llib/srfi4.scm 796 */
long BgL_arg1546z00_1682;obj_t BgL_arg1547z00_1683;
BgL_arg1546z00_1682 = 
(BgL_iz00_1673+((long)1)); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2672;
if(
PAIRP(BgL_lz00_1674))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2672 = BgL_lz00_1674; }  else 
{ 
obj_t BgL_auxz00_7043;
BgL_auxz00_7043 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1674); 
FAILURE(BgL_auxz00_7043,BFALSE,BFALSE);} 
BgL_arg1547z00_1683 = 
CDR(BgL_pairz00_2672); } 
{ 
obj_t BgL_lz00_7049;long BgL_iz00_7048;
BgL_iz00_7048 = BgL_arg1546z00_1682; 
BgL_lz00_7049 = BgL_arg1547z00_1683; 
BgL_lz00_1674 = BgL_lz00_7049; 
BgL_iz00_1673 = BgL_iz00_7048; 
goto BgL_zc3z04anonymousza31536ze3z87_1675;} } } } } } } } 

}



/* &list->u32vector */
obj_t BGl_z62listzd2ze3u32vectorz53zz__srfi4z00(obj_t BgL_envz00_3405, obj_t BgL_xz00_3406)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_auxz00_7050;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_xz00_3406))
{ /* Llib/srfi4.scm 796 */
BgL_auxz00_7050 = BgL_xz00_3406
; }  else 
{ 
obj_t BgL_auxz00_7053;
BgL_auxz00_7053 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3465z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_3406); 
FAILURE(BgL_auxz00_7053,BFALSE,BFALSE);} 
return 
BGl_listzd2ze3u32vectorz31zz__srfi4z00(BgL_auxz00_7050);} } 

}



/* list->s64vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3s64vectorz31zz__srfi4z00(obj_t BgL_xz00_149)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
long BgL_lenz00_1685;
BgL_lenz00_1685 = 
bgl_list_length(BgL_xz00_149); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_vecz00_1686;
{ /* Llib/srfi4.scm 796 */
int32_t BgL_tmpz00_7059;
BgL_tmpz00_7059 = 
(int32_t)(BgL_lenz00_1685); 
BgL_vecz00_1686 = 
BGL_ALLOC_S64VECTOR(BgL_tmpz00_7059); } 
{ /* Llib/srfi4.scm 796 */

{ 
long BgL_iz00_1688;obj_t BgL_lz00_1689;
BgL_iz00_1688 = ((long)0); 
BgL_lz00_1689 = BgL_xz00_149; 
BgL_zc3z04anonymousza31548ze3z87_1690:
if(
(BgL_iz00_1688==BgL_lenz00_1685))
{ /* Llib/srfi4.scm 796 */
return BgL_vecz00_1686;}  else 
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1551z00_1692;
{ /* Llib/srfi4.scm 796 */
bool_t BgL_test4032z00_7064;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_7065;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2676;
if(
PAIRP(BgL_lz00_1689))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2676 = BgL_lz00_1689; }  else 
{ 
obj_t BgL_auxz00_7068;
BgL_auxz00_7068 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1689); 
FAILURE(BgL_auxz00_7068,BFALSE,BFALSE);} 
BgL_tmpz00_7065 = 
CAR(BgL_pairz00_2676); } 
BgL_test4032z00_7064 = 
INTEGERP(BgL_tmpz00_7065); } 
if(BgL_test4032z00_7064)
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1554z00_1695;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2678;
if(
PAIRP(BgL_lz00_1689))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2678 = BgL_lz00_1689; }  else 
{ 
obj_t BgL_auxz00_7076;
BgL_auxz00_7076 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1689); 
FAILURE(BgL_auxz00_7076,BFALSE,BFALSE);} 
BgL_arg1554z00_1695 = 
CAR(BgL_pairz00_2678); } 
{ /* Llib/srfi4.scm 796 */
int64_t BgL_res2170z00_2680;
{ /* Llib/srfi4.scm 796 */
long BgL_xz00_2679;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_7081;
if(
INTEGERP(BgL_arg1554z00_1695))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_7081 = BgL_arg1554z00_1695
; }  else 
{ 
obj_t BgL_auxz00_7084;
BgL_auxz00_7084 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_arg1554z00_1695); 
FAILURE(BgL_auxz00_7084,BFALSE,BFALSE);} 
BgL_xz00_2679 = 
(long)CINT(BgL_tmpz00_7081); } 
BgL_res2170z00_2680 = 
(int64_t)(BgL_xz00_2679); } 
BgL_arg1551z00_1692 = 
BGL_INT64_TO_BINT64(BgL_res2170z00_2680); } }  else 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2681;
if(
PAIRP(BgL_lz00_1689))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2681 = BgL_lz00_1689; }  else 
{ 
obj_t BgL_auxz00_7093;
BgL_auxz00_7093 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1689); 
FAILURE(BgL_auxz00_7093,BFALSE,BFALSE);} 
BgL_arg1551z00_1692 = 
CAR(BgL_pairz00_2681); } } 
{ /* Llib/srfi4.scm 796 */
long BgL_l2520z00_3601;
BgL_l2520z00_3601 = 
BGL_HVECTOR_LENGTH(BgL_vecz00_1686); 
if(
BOUND_CHECK(BgL_iz00_1688, BgL_l2520z00_3601))
{ /* Llib/srfi4.scm 796 */
int64_t BgL_tmpz00_7101;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_7102;
if(
BGL_INT64P(BgL_arg1551z00_1692))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_7102 = BgL_arg1551z00_1692
; }  else 
{ 
obj_t BgL_auxz00_7105;
BgL_auxz00_7105 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3398z00zz__srfi4z00, BgL_arg1551z00_1692); 
FAILURE(BgL_auxz00_7105,BFALSE,BFALSE);} 
BgL_tmpz00_7101 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_7102); } 
BGL_S64VSET(BgL_vecz00_1686, BgL_iz00_1688, BgL_tmpz00_7101); }  else 
{ 
obj_t BgL_auxz00_7111;
BgL_auxz00_7111 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3399z00zz__srfi4z00, BgL_vecz00_1686, 
(int)(BgL_l2520z00_3601), 
(int)(BgL_iz00_1688)); 
FAILURE(BgL_auxz00_7111,BFALSE,BFALSE);} } BUNSPEC; } 
{ /* Llib/srfi4.scm 796 */
long BgL_arg1557z00_1697;obj_t BgL_arg1558z00_1698;
BgL_arg1557z00_1697 = 
(BgL_iz00_1688+((long)1)); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2684;
if(
PAIRP(BgL_lz00_1689))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2684 = BgL_lz00_1689; }  else 
{ 
obj_t BgL_auxz00_7120;
BgL_auxz00_7120 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1689); 
FAILURE(BgL_auxz00_7120,BFALSE,BFALSE);} 
BgL_arg1558z00_1698 = 
CDR(BgL_pairz00_2684); } 
{ 
obj_t BgL_lz00_7126;long BgL_iz00_7125;
BgL_iz00_7125 = BgL_arg1557z00_1697; 
BgL_lz00_7126 = BgL_arg1558z00_1698; 
BgL_lz00_1689 = BgL_lz00_7126; 
BgL_iz00_1688 = BgL_iz00_7125; 
goto BgL_zc3z04anonymousza31548ze3z87_1690;} } } } } } } } 

}



/* &list->s64vector */
obj_t BGl_z62listzd2ze3s64vectorz53zz__srfi4z00(obj_t BgL_envz00_3407, obj_t BgL_xz00_3408)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_auxz00_7127;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_xz00_3408))
{ /* Llib/srfi4.scm 796 */
BgL_auxz00_7127 = BgL_xz00_3408
; }  else 
{ 
obj_t BgL_auxz00_7130;
BgL_auxz00_7130 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3466z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_3408); 
FAILURE(BgL_auxz00_7130,BFALSE,BFALSE);} 
return 
BGl_listzd2ze3s64vectorz31zz__srfi4z00(BgL_auxz00_7127);} } 

}



/* list->u64vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3u64vectorz31zz__srfi4z00(obj_t BgL_xz00_150)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
long BgL_lenz00_1700;
BgL_lenz00_1700 = 
bgl_list_length(BgL_xz00_150); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_vecz00_1701;
{ /* Llib/srfi4.scm 796 */
int32_t BgL_tmpz00_7136;
BgL_tmpz00_7136 = 
(int32_t)(BgL_lenz00_1700); 
BgL_vecz00_1701 = 
BGL_ALLOC_U64VECTOR(BgL_tmpz00_7136); } 
{ /* Llib/srfi4.scm 796 */

{ 
long BgL_iz00_1703;obj_t BgL_lz00_1704;
BgL_iz00_1703 = ((long)0); 
BgL_lz00_1704 = BgL_xz00_150; 
BgL_zc3z04anonymousza31559ze3z87_1705:
if(
(BgL_iz00_1703==BgL_lenz00_1700))
{ /* Llib/srfi4.scm 796 */
return BgL_vecz00_1701;}  else 
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1561z00_1707;
{ /* Llib/srfi4.scm 796 */
bool_t BgL_test4042z00_7141;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_7142;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2688;
if(
PAIRP(BgL_lz00_1704))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2688 = BgL_lz00_1704; }  else 
{ 
obj_t BgL_auxz00_7145;
BgL_auxz00_7145 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1704); 
FAILURE(BgL_auxz00_7145,BFALSE,BFALSE);} 
BgL_tmpz00_7142 = 
CAR(BgL_pairz00_2688); } 
BgL_test4042z00_7141 = 
INTEGERP(BgL_tmpz00_7142); } 
if(BgL_test4042z00_7141)
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1564z00_1710;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2690;
if(
PAIRP(BgL_lz00_1704))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2690 = BgL_lz00_1704; }  else 
{ 
obj_t BgL_auxz00_7153;
BgL_auxz00_7153 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1704); 
FAILURE(BgL_auxz00_7153,BFALSE,BFALSE);} 
BgL_arg1564z00_1710 = 
CAR(BgL_pairz00_2690); } 
{ /* Llib/srfi4.scm 796 */
uint64_t BgL_res2174z00_2692;
{ /* Llib/srfi4.scm 796 */
long BgL_xz00_2691;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_7158;
if(
INTEGERP(BgL_arg1564z00_1710))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_7158 = BgL_arg1564z00_1710
; }  else 
{ 
obj_t BgL_auxz00_7161;
BgL_auxz00_7161 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_arg1564z00_1710); 
FAILURE(BgL_auxz00_7161,BFALSE,BFALSE);} 
BgL_xz00_2691 = 
(long)CINT(BgL_tmpz00_7158); } 
BgL_res2174z00_2692 = 
(uint64_t)(BgL_xz00_2691); } 
BgL_arg1561z00_1707 = 
BGL_UINT64_TO_BUINT64(BgL_res2174z00_2692); } }  else 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2693;
if(
PAIRP(BgL_lz00_1704))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2693 = BgL_lz00_1704; }  else 
{ 
obj_t BgL_auxz00_7170;
BgL_auxz00_7170 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1704); 
FAILURE(BgL_auxz00_7170,BFALSE,BFALSE);} 
BgL_arg1561z00_1707 = 
CAR(BgL_pairz00_2693); } } 
{ /* Llib/srfi4.scm 796 */
long BgL_l2524z00_3605;
BgL_l2524z00_3605 = 
BGL_HVECTOR_LENGTH(BgL_vecz00_1701); 
if(
BOUND_CHECK(BgL_iz00_1703, BgL_l2524z00_3605))
{ /* Llib/srfi4.scm 796 */
uint64_t BgL_tmpz00_7178;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_7179;
if(
BGL_UINT64P(BgL_arg1561z00_1707))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_7179 = BgL_arg1561z00_1707
; }  else 
{ 
obj_t BgL_auxz00_7182;
BgL_auxz00_7182 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3403z00zz__srfi4z00, BgL_arg1561z00_1707); 
FAILURE(BgL_auxz00_7182,BFALSE,BFALSE);} 
BgL_tmpz00_7178 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_7179); } 
BGL_U64VSET(BgL_vecz00_1701, BgL_iz00_1703, BgL_tmpz00_7178); }  else 
{ 
obj_t BgL_auxz00_7188;
BgL_auxz00_7188 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3404z00zz__srfi4z00, BgL_vecz00_1701, 
(int)(BgL_l2524z00_3605), 
(int)(BgL_iz00_1703)); 
FAILURE(BgL_auxz00_7188,BFALSE,BFALSE);} } BUNSPEC; } 
{ /* Llib/srfi4.scm 796 */
long BgL_arg1566z00_1712;obj_t BgL_arg1567z00_1713;
BgL_arg1566z00_1712 = 
(BgL_iz00_1703+((long)1)); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2696;
if(
PAIRP(BgL_lz00_1704))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2696 = BgL_lz00_1704; }  else 
{ 
obj_t BgL_auxz00_7197;
BgL_auxz00_7197 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1704); 
FAILURE(BgL_auxz00_7197,BFALSE,BFALSE);} 
BgL_arg1567z00_1713 = 
CDR(BgL_pairz00_2696); } 
{ 
obj_t BgL_lz00_7203;long BgL_iz00_7202;
BgL_iz00_7202 = BgL_arg1566z00_1712; 
BgL_lz00_7203 = BgL_arg1567z00_1713; 
BgL_lz00_1704 = BgL_lz00_7203; 
BgL_iz00_1703 = BgL_iz00_7202; 
goto BgL_zc3z04anonymousza31559ze3z87_1705;} } } } } } } } 

}



/* &list->u64vector */
obj_t BGl_z62listzd2ze3u64vectorz53zz__srfi4z00(obj_t BgL_envz00_3409, obj_t BgL_xz00_3410)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_auxz00_7204;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_xz00_3410))
{ /* Llib/srfi4.scm 796 */
BgL_auxz00_7204 = BgL_xz00_3410
; }  else 
{ 
obj_t BgL_auxz00_7207;
BgL_auxz00_7207 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3467z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_3410); 
FAILURE(BgL_auxz00_7207,BFALSE,BFALSE);} 
return 
BGl_listzd2ze3u64vectorz31zz__srfi4z00(BgL_auxz00_7204);} } 

}



/* list->f32vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3f32vectorz31zz__srfi4z00(obj_t BgL_xz00_151)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
long BgL_lenz00_1715;
BgL_lenz00_1715 = 
bgl_list_length(BgL_xz00_151); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_vecz00_1716;
{ /* Llib/srfi4.scm 796 */
int32_t BgL_tmpz00_7213;
BgL_tmpz00_7213 = 
(int32_t)(BgL_lenz00_1715); 
BgL_vecz00_1716 = 
BGL_ALLOC_F32VECTOR(BgL_tmpz00_7213); } 
{ /* Llib/srfi4.scm 796 */

{ 
long BgL_iz00_1718;obj_t BgL_lz00_1719;
BgL_iz00_1718 = ((long)0); 
BgL_lz00_1719 = BgL_xz00_151; 
BgL_zc3z04anonymousza31568ze3z87_1720:
if(
(BgL_iz00_1718==BgL_lenz00_1715))
{ /* Llib/srfi4.scm 796 */
return BgL_vecz00_1716;}  else 
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1570z00_1722;
{ /* Llib/srfi4.scm 796 */
bool_t BgL_test4052z00_7218;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_7219;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2700;
if(
PAIRP(BgL_lz00_1719))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2700 = BgL_lz00_1719; }  else 
{ 
obj_t BgL_auxz00_7222;
BgL_auxz00_7222 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1719); 
FAILURE(BgL_auxz00_7222,BFALSE,BFALSE);} 
BgL_tmpz00_7219 = 
CAR(BgL_pairz00_2700); } 
BgL_test4052z00_7218 = 
INTEGERP(BgL_tmpz00_7219); } 
if(BgL_test4052z00_7218)
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1575z00_1725;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2702;
if(
PAIRP(BgL_lz00_1719))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2702 = BgL_lz00_1719; }  else 
{ 
obj_t BgL_auxz00_7230;
BgL_auxz00_7230 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1719); 
FAILURE(BgL_auxz00_7230,BFALSE,BFALSE);} 
BgL_arg1575z00_1725 = 
CAR(BgL_pairz00_2702); } 
{ /* Llib/srfi4.scm 796 */
uint32_t BgL_res2178z00_2704;
{ /* Llib/srfi4.scm 796 */
long BgL_xz00_2703;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_7235;
if(
INTEGERP(BgL_arg1575z00_1725))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_7235 = BgL_arg1575z00_1725
; }  else 
{ 
obj_t BgL_auxz00_7238;
BgL_auxz00_7238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_arg1575z00_1725); 
FAILURE(BgL_auxz00_7238,BFALSE,BFALSE);} 
BgL_xz00_2703 = 
(long)CINT(BgL_tmpz00_7235); } 
BgL_res2178z00_2704 = 
(uint32_t)(BgL_xz00_2703); } 
BgL_arg1570z00_1722 = 
BGL_UINT32_TO_BUINT32(BgL_res2178z00_2704); } }  else 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2705;
if(
PAIRP(BgL_lz00_1719))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2705 = BgL_lz00_1719; }  else 
{ 
obj_t BgL_auxz00_7247;
BgL_auxz00_7247 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1719); 
FAILURE(BgL_auxz00_7247,BFALSE,BFALSE);} 
BgL_arg1570z00_1722 = 
CAR(BgL_pairz00_2705); } } 
{ /* Llib/srfi4.scm 796 */
long BgL_l2528z00_3609;
BgL_l2528z00_3609 = 
BGL_HVECTOR_LENGTH(BgL_vecz00_1716); 
if(
BOUND_CHECK(BgL_iz00_1718, BgL_l2528z00_3609))
{ /* Llib/srfi4.scm 796 */
float BgL_tmpz00_7255;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_7256;
if(
REALP(BgL_arg1570z00_1722))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_7256 = BgL_arg1570z00_1722
; }  else 
{ 
obj_t BgL_auxz00_7259;
BgL_auxz00_7259 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3408z00zz__srfi4z00, BgL_arg1570z00_1722); 
FAILURE(BgL_auxz00_7259,BFALSE,BFALSE);} 
BgL_tmpz00_7255 = 
REAL_TO_FLOAT(BgL_tmpz00_7256); } 
BGL_F32VSET(BgL_vecz00_1716, BgL_iz00_1718, BgL_tmpz00_7255); }  else 
{ 
obj_t BgL_auxz00_7265;
BgL_auxz00_7265 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3409z00zz__srfi4z00, BgL_vecz00_1716, 
(int)(BgL_l2528z00_3609), 
(int)(BgL_iz00_1718)); 
FAILURE(BgL_auxz00_7265,BFALSE,BFALSE);} } BUNSPEC; } 
{ /* Llib/srfi4.scm 796 */
long BgL_arg1578z00_1727;obj_t BgL_arg1579z00_1728;
BgL_arg1578z00_1727 = 
(BgL_iz00_1718+((long)1)); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2708;
if(
PAIRP(BgL_lz00_1719))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2708 = BgL_lz00_1719; }  else 
{ 
obj_t BgL_auxz00_7274;
BgL_auxz00_7274 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1719); 
FAILURE(BgL_auxz00_7274,BFALSE,BFALSE);} 
BgL_arg1579z00_1728 = 
CDR(BgL_pairz00_2708); } 
{ 
obj_t BgL_lz00_7280;long BgL_iz00_7279;
BgL_iz00_7279 = BgL_arg1578z00_1727; 
BgL_lz00_7280 = BgL_arg1579z00_1728; 
BgL_lz00_1719 = BgL_lz00_7280; 
BgL_iz00_1718 = BgL_iz00_7279; 
goto BgL_zc3z04anonymousza31568ze3z87_1720;} } } } } } } } 

}



/* &list->f32vector */
obj_t BGl_z62listzd2ze3f32vectorz53zz__srfi4z00(obj_t BgL_envz00_3411, obj_t BgL_xz00_3412)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_auxz00_7281;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_xz00_3412))
{ /* Llib/srfi4.scm 796 */
BgL_auxz00_7281 = BgL_xz00_3412
; }  else 
{ 
obj_t BgL_auxz00_7284;
BgL_auxz00_7284 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3468z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_3412); 
FAILURE(BgL_auxz00_7284,BFALSE,BFALSE);} 
return 
BGl_listzd2ze3f32vectorz31zz__srfi4z00(BgL_auxz00_7281);} } 

}



/* list->f64vector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3f64vectorz31zz__srfi4z00(obj_t BgL_xz00_152)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
long BgL_lenz00_1730;
BgL_lenz00_1730 = 
bgl_list_length(BgL_xz00_152); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_vecz00_1731;
{ /* Llib/srfi4.scm 796 */
int32_t BgL_tmpz00_7290;
BgL_tmpz00_7290 = 
(int32_t)(BgL_lenz00_1730); 
BgL_vecz00_1731 = 
BGL_ALLOC_F64VECTOR(BgL_tmpz00_7290); } 
{ /* Llib/srfi4.scm 796 */

{ 
long BgL_iz00_1733;obj_t BgL_lz00_1734;
BgL_iz00_1733 = ((long)0); 
BgL_lz00_1734 = BgL_xz00_152; 
BgL_zc3z04anonymousza31580ze3z87_1735:
if(
(BgL_iz00_1733==BgL_lenz00_1730))
{ /* Llib/srfi4.scm 796 */
return BgL_vecz00_1731;}  else 
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1582z00_1737;
{ /* Llib/srfi4.scm 796 */
bool_t BgL_test4062z00_7295;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_7296;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2712;
if(
PAIRP(BgL_lz00_1734))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2712 = BgL_lz00_1734; }  else 
{ 
obj_t BgL_auxz00_7299;
BgL_auxz00_7299 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1734); 
FAILURE(BgL_auxz00_7299,BFALSE,BFALSE);} 
BgL_tmpz00_7296 = 
CAR(BgL_pairz00_2712); } 
BgL_test4062z00_7295 = 
INTEGERP(BgL_tmpz00_7296); } 
if(BgL_test4062z00_7295)
{ /* Llib/srfi4.scm 796 */
obj_t BgL_arg1587z00_1740;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2714;
if(
PAIRP(BgL_lz00_1734))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2714 = BgL_lz00_1734; }  else 
{ 
obj_t BgL_auxz00_7307;
BgL_auxz00_7307 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1734); 
FAILURE(BgL_auxz00_7307,BFALSE,BFALSE);} 
BgL_arg1587z00_1740 = 
CAR(BgL_pairz00_2714); } 
{ /* Llib/srfi4.scm 796 */
uint64_t BgL_res2182z00_2716;
{ /* Llib/srfi4.scm 796 */
long BgL_xz00_2715;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_7312;
if(
INTEGERP(BgL_arg1587z00_1740))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_7312 = BgL_arg1587z00_1740
; }  else 
{ 
obj_t BgL_auxz00_7315;
BgL_auxz00_7315 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_arg1587z00_1740); 
FAILURE(BgL_auxz00_7315,BFALSE,BFALSE);} 
BgL_xz00_2715 = 
(long)CINT(BgL_tmpz00_7312); } 
BgL_res2182z00_2716 = 
(uint64_t)(BgL_xz00_2715); } 
BgL_arg1582z00_1737 = 
BGL_UINT64_TO_BUINT64(BgL_res2182z00_2716); } }  else 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2717;
if(
PAIRP(BgL_lz00_1734))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2717 = BgL_lz00_1734; }  else 
{ 
obj_t BgL_auxz00_7324;
BgL_auxz00_7324 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1734); 
FAILURE(BgL_auxz00_7324,BFALSE,BFALSE);} 
BgL_arg1582z00_1737 = 
CAR(BgL_pairz00_2717); } } 
{ /* Llib/srfi4.scm 796 */
long BgL_l2532z00_3613;
BgL_l2532z00_3613 = 
BGL_HVECTOR_LENGTH(BgL_vecz00_1731); 
if(
BOUND_CHECK(BgL_iz00_1733, BgL_l2532z00_3613))
{ /* Llib/srfi4.scm 796 */
double BgL_tmpz00_7332;
{ /* Llib/srfi4.scm 796 */
obj_t BgL_tmpz00_7333;
if(
REALP(BgL_arg1582z00_1737))
{ /* Llib/srfi4.scm 796 */
BgL_tmpz00_7333 = BgL_arg1582z00_1737
; }  else 
{ 
obj_t BgL_auxz00_7336;
BgL_auxz00_7336 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3408z00zz__srfi4z00, BgL_arg1582z00_1737); 
FAILURE(BgL_auxz00_7336,BFALSE,BFALSE);} 
BgL_tmpz00_7332 = 
REAL_TO_DOUBLE(BgL_tmpz00_7333); } 
BGL_F64VSET(BgL_vecz00_1731, BgL_iz00_1733, BgL_tmpz00_7332); }  else 
{ 
obj_t BgL_auxz00_7342;
BgL_auxz00_7342 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3413z00zz__srfi4z00, BgL_vecz00_1731, 
(int)(BgL_l2532z00_3613), 
(int)(BgL_iz00_1733)); 
FAILURE(BgL_auxz00_7342,BFALSE,BFALSE);} } BUNSPEC; } 
{ /* Llib/srfi4.scm 796 */
long BgL_arg1589z00_1742;obj_t BgL_arg1592z00_1743;
BgL_arg1589z00_1742 = 
(BgL_iz00_1733+((long)1)); 
{ /* Llib/srfi4.scm 796 */
obj_t BgL_pairz00_2720;
if(
PAIRP(BgL_lz00_1734))
{ /* Llib/srfi4.scm 796 */
BgL_pairz00_2720 = BgL_lz00_1734; }  else 
{ 
obj_t BgL_auxz00_7351;
BgL_auxz00_7351 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3458z00zz__srfi4z00, BGl_string3459z00zz__srfi4z00, BgL_lz00_1734); 
FAILURE(BgL_auxz00_7351,BFALSE,BFALSE);} 
BgL_arg1592z00_1743 = 
CDR(BgL_pairz00_2720); } 
{ 
obj_t BgL_lz00_7357;long BgL_iz00_7356;
BgL_iz00_7356 = BgL_arg1589z00_1742; 
BgL_lz00_7357 = BgL_arg1592z00_1743; 
BgL_lz00_1734 = BgL_lz00_7357; 
BgL_iz00_1733 = BgL_iz00_7356; 
goto BgL_zc3z04anonymousza31580ze3z87_1735;} } } } } } } } 

}



/* &list->f64vector */
obj_t BGl_z62listzd2ze3f64vectorz53zz__srfi4z00(obj_t BgL_envz00_3413, obj_t BgL_xz00_3414)
{
{ /* Llib/srfi4.scm 796 */
{ /* Llib/srfi4.scm 796 */
obj_t BgL_auxz00_7358;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_xz00_3414))
{ /* Llib/srfi4.scm 796 */
BgL_auxz00_7358 = BgL_xz00_3414
; }  else 
{ 
obj_t BgL_auxz00_7361;
BgL_auxz00_7361 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)31419)), BGl_string3469z00zz__srfi4z00, BGl_string3362z00zz__srfi4z00, BgL_xz00_3414); 
FAILURE(BgL_auxz00_7361,BFALSE,BFALSE);} 
return 
BGl_listzd2ze3f64vectorz31zz__srfi4z00(BgL_auxz00_7358);} } 

}



/* _s8vector-copy! */
obj_t BGl__s8vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1277z00_159, obj_t BgL_opt1276z00_158)
{
{ /* Llib/srfi4.scm 838 */
{ /* Llib/srfi4.scm 838 */
obj_t BgL_targetz00_1745;obj_t BgL_tstartz00_1746;obj_t BgL_sourcez00_1747;
BgL_targetz00_1745 = 
VECTOR_REF(BgL_opt1276z00_158,((long)0)); 
BgL_tstartz00_1746 = 
VECTOR_REF(BgL_opt1276z00_158,((long)1)); 
BgL_sourcez00_1747 = 
VECTOR_REF(BgL_opt1276z00_158,((long)2)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1276z00_158)) { case ((long)3) : 

{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1752;
{ /* Llib/srfi4.scm 838 */
long BgL_res2184z00_2722;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2721;
if(
BGL_S8VECTORP(BgL_sourcez00_1747))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2721 = BgL_sourcez00_1747; }  else 
{ 
obj_t BgL_auxz00_7371;
BgL_auxz00_7371 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3473z00zz__srfi4z00, BGl_string3343z00zz__srfi4z00, BgL_sourcez00_1747); 
FAILURE(BgL_auxz00_7371,BFALSE,BFALSE);} 
BgL_res2184z00_2722 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2721); } 
BgL_sendz00_1752 = BgL_res2184z00_2722; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_7392;long BgL_auxz00_7383;obj_t BgL_auxz00_7376;
if(
BGL_S8VECTORP(BgL_sourcez00_1747))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7392 = BgL_sourcez00_1747
; }  else 
{ 
obj_t BgL_auxz00_7395;
BgL_auxz00_7395 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3473z00zz__srfi4z00, BGl_string3343z00zz__srfi4z00, BgL_sourcez00_1747); 
FAILURE(BgL_auxz00_7395,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7384;
if(
INTEGERP(BgL_tstartz00_1746))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7384 = BgL_tstartz00_1746
; }  else 
{ 
obj_t BgL_auxz00_7387;
BgL_auxz00_7387 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3473z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1746); 
FAILURE(BgL_auxz00_7387,BFALSE,BFALSE);} 
BgL_auxz00_7383 = 
(long)CINT(BgL_tmpz00_7384); } 
if(
BGL_S8VECTORP(BgL_targetz00_1745))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7376 = BgL_targetz00_1745
; }  else 
{ 
obj_t BgL_auxz00_7379;
BgL_auxz00_7379 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3473z00zz__srfi4z00, BGl_string3343z00zz__srfi4z00, BgL_targetz00_1745); 
FAILURE(BgL_auxz00_7379,BFALSE,BFALSE);} 
return 
BGl_s8vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_7376, BgL_auxz00_7383, BgL_auxz00_7392, 
BINT(((long)0)), 
BINT(BgL_sendz00_1752));} } } break;case ((long)4) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1753;
BgL_sstartz00_1753 = 
VECTOR_REF(BgL_opt1276z00_158,((long)3)); 
{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1754;
{ /* Llib/srfi4.scm 838 */
long BgL_res2185z00_2724;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2723;
if(
BGL_S8VECTORP(BgL_sourcez00_1747))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2723 = BgL_sourcez00_1747; }  else 
{ 
obj_t BgL_auxz00_7405;
BgL_auxz00_7405 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3473z00zz__srfi4z00, BGl_string3343z00zz__srfi4z00, BgL_sourcez00_1747); 
FAILURE(BgL_auxz00_7405,BFALSE,BFALSE);} 
BgL_res2185z00_2724 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2723); } 
BgL_sendz00_1754 = BgL_res2185z00_2724; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_7426;long BgL_auxz00_7417;obj_t BgL_auxz00_7410;
if(
BGL_S8VECTORP(BgL_sourcez00_1747))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7426 = BgL_sourcez00_1747
; }  else 
{ 
obj_t BgL_auxz00_7429;
BgL_auxz00_7429 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3473z00zz__srfi4z00, BGl_string3343z00zz__srfi4z00, BgL_sourcez00_1747); 
FAILURE(BgL_auxz00_7429,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7418;
if(
INTEGERP(BgL_tstartz00_1746))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7418 = BgL_tstartz00_1746
; }  else 
{ 
obj_t BgL_auxz00_7421;
BgL_auxz00_7421 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3473z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1746); 
FAILURE(BgL_auxz00_7421,BFALSE,BFALSE);} 
BgL_auxz00_7417 = 
(long)CINT(BgL_tmpz00_7418); } 
if(
BGL_S8VECTORP(BgL_targetz00_1745))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7410 = BgL_targetz00_1745
; }  else 
{ 
obj_t BgL_auxz00_7413;
BgL_auxz00_7413 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3473z00zz__srfi4z00, BGl_string3343z00zz__srfi4z00, BgL_targetz00_1745); 
FAILURE(BgL_auxz00_7413,BFALSE,BFALSE);} 
return 
BGl_s8vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_7410, BgL_auxz00_7417, BgL_auxz00_7426, BgL_sstartz00_1753, 
BINT(BgL_sendz00_1754));} } } } break;case ((long)5) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1755;
BgL_sstartz00_1755 = 
VECTOR_REF(BgL_opt1276z00_158,((long)3)); 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_sendz00_1756;
BgL_sendz00_1756 = 
VECTOR_REF(BgL_opt1276z00_158,((long)4)); 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_7453;long BgL_auxz00_7444;obj_t BgL_auxz00_7437;
if(
BGL_S8VECTORP(BgL_sourcez00_1747))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7453 = BgL_sourcez00_1747
; }  else 
{ 
obj_t BgL_auxz00_7456;
BgL_auxz00_7456 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3473z00zz__srfi4z00, BGl_string3343z00zz__srfi4z00, BgL_sourcez00_1747); 
FAILURE(BgL_auxz00_7456,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7445;
if(
INTEGERP(BgL_tstartz00_1746))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7445 = BgL_tstartz00_1746
; }  else 
{ 
obj_t BgL_auxz00_7448;
BgL_auxz00_7448 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3473z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1746); 
FAILURE(BgL_auxz00_7448,BFALSE,BFALSE);} 
BgL_auxz00_7444 = 
(long)CINT(BgL_tmpz00_7445); } 
if(
BGL_S8VECTORP(BgL_targetz00_1745))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7437 = BgL_targetz00_1745
; }  else 
{ 
obj_t BgL_auxz00_7440;
BgL_auxz00_7440 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3473z00zz__srfi4z00, BGl_string3343z00zz__srfi4z00, BgL_targetz00_1745); 
FAILURE(BgL_auxz00_7440,BFALSE,BFALSE);} 
return 
BGl_s8vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_7437, BgL_auxz00_7444, BgL_auxz00_7453, BgL_sstartz00_1755, BgL_sendz00_1756);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3470z00zz__srfi4z00, BGl_string3472z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1276z00_158)));} } } } 

}



/* s8vector-copy! */
BGL_EXPORTED_DEF obj_t BGl_s8vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_targetz00_153, long BgL_tstartz00_154, obj_t BgL_sourcez00_155, obj_t BgL_sstartz00_156, obj_t BgL_sendz00_157)
{
{ /* Llib/srfi4.scm 838 */
if(
(BgL_tstartz00_154<((long)0)))
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3471z00zz__srfi4z00, BGl_string3474z00zz__srfi4z00, 
BINT(BgL_tstartz00_154)); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4083z00_7470;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2727;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7471;
if(
INTEGERP(BgL_sstartz00_156))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7471 = BgL_sstartz00_156
; }  else 
{ 
obj_t BgL_auxz00_7474;
BgL_auxz00_7474 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3471z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_156); 
FAILURE(BgL_auxz00_7474,BFALSE,BFALSE);} 
BgL_n1z00_2727 = 
(long)CINT(BgL_tmpz00_7471); } 
BgL_test4083z00_7470 = 
(BgL_n1z00_2727<((long)0)); } 
if(BgL_test4083z00_7470)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3471z00zz__srfi4z00, BGl_string3475z00zz__srfi4z00, BgL_sstartz00_156); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4085z00_7481;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1608z00_1769;
{ /* Llib/srfi4.scm 838 */
long BgL_res2188z00_2730;
BgL_res2188z00_2730 = 
BGL_HVECTOR_LENGTH(BgL_sourcez00_155); 
BgL_arg1608z00_1769 = BgL_res2188z00_2730; } 
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2731;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7483;
if(
INTEGERP(BgL_sendz00_157))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7483 = BgL_sendz00_157
; }  else 
{ 
obj_t BgL_auxz00_7486;
BgL_auxz00_7486 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3471z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_157); 
FAILURE(BgL_auxz00_7486,BFALSE,BFALSE);} 
BgL_n1z00_2731 = 
(long)CINT(BgL_tmpz00_7483); } 
BgL_test4085z00_7481 = 
(BgL_n1z00_2731>BgL_arg1608z00_1769); } } 
if(BgL_test4085z00_7481)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3471z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_157); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4087z00_7493;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2734;long BgL_n2z00_2735;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7494;
if(
INTEGERP(BgL_sendz00_157))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7494 = BgL_sendz00_157
; }  else 
{ 
obj_t BgL_auxz00_7497;
BgL_auxz00_7497 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3471z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_157); 
FAILURE(BgL_auxz00_7497,BFALSE,BFALSE);} 
BgL_n1z00_2734 = 
(long)CINT(BgL_tmpz00_7494); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7502;
if(
INTEGERP(BgL_sstartz00_156))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7502 = BgL_sstartz00_156
; }  else 
{ 
obj_t BgL_auxz00_7505;
BgL_auxz00_7505 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3471z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_156); 
FAILURE(BgL_auxz00_7505,BFALSE,BFALSE);} 
BgL_n2z00_2735 = 
(long)CINT(BgL_tmpz00_7502); } 
BgL_test4087z00_7493 = 
(BgL_n1z00_2734<BgL_n2z00_2735); } 
if(BgL_test4087z00_7493)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3471z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_157); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4090z00_7512;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1606z00_1767;long BgL_arg1607z00_1768;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2737;long BgL_za72za7_2738;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7513;
if(
INTEGERP(BgL_sendz00_157))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7513 = BgL_sendz00_157
; }  else 
{ 
obj_t BgL_auxz00_7516;
BgL_auxz00_7516 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3471z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_157); 
FAILURE(BgL_auxz00_7516,BFALSE,BFALSE);} 
BgL_za71za7_2737 = 
(long)CINT(BgL_tmpz00_7513); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7521;
if(
INTEGERP(BgL_sstartz00_156))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7521 = BgL_sstartz00_156
; }  else 
{ 
obj_t BgL_auxz00_7524;
BgL_auxz00_7524 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3471z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_156); 
FAILURE(BgL_auxz00_7524,BFALSE,BFALSE);} 
BgL_za72za7_2738 = 
(long)CINT(BgL_tmpz00_7521); } 
BgL_arg1606z00_1767 = 
(BgL_za71za7_2737-BgL_za72za7_2738); } 
{ /* Llib/srfi4.scm 838 */
long BgL_res2192z00_2741;
BgL_res2192z00_2741 = 
BGL_HVECTOR_LENGTH(BgL_targetz00_153); 
BgL_arg1607z00_1768 = BgL_res2192z00_2741; } 
BgL_test4090z00_7512 = 
BGl_2ze3ze3zz__r4_numbers_6_5z00(
BINT(BgL_arg1606z00_1767), 
BINT(BgL_arg1607z00_1768)); } 
if(BgL_test4090z00_7512)
{ /* Llib/srfi4.scm 838 */
long BgL_arg1605z00_1766;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2742;long BgL_za72za7_2743;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7534;
if(
INTEGERP(BgL_sendz00_157))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7534 = BgL_sendz00_157
; }  else 
{ 
obj_t BgL_auxz00_7537;
BgL_auxz00_7537 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3471z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_157); 
FAILURE(BgL_auxz00_7537,BFALSE,BFALSE);} 
BgL_za71za7_2742 = 
(long)CINT(BgL_tmpz00_7534); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7542;
if(
INTEGERP(BgL_sstartz00_156))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7542 = BgL_sstartz00_156
; }  else 
{ 
obj_t BgL_auxz00_7545;
BgL_auxz00_7545 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3471z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_156); 
FAILURE(BgL_auxz00_7545,BFALSE,BFALSE);} 
BgL_za72za7_2743 = 
(long)CINT(BgL_tmpz00_7542); } 
BgL_arg1605z00_1766 = 
(BgL_za71za7_2742-BgL_za72za7_2743); } 
BGl_errorz00zz__errorz00(BGl_string3471z00zz__srfi4z00, BGl_string3477z00zz__srfi4z00, 
BINT(BgL_arg1605z00_1766)); }  else 
{ /* Llib/srfi4.scm 838 */BFALSE; } } } } } 
{ /* Llib/srfi4.scm 838 */
long BgL_auxz00_7562;long BgL_tmpz00_7553;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7563;
if(
INTEGERP(BgL_sendz00_157))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7563 = BgL_sendz00_157
; }  else 
{ 
obj_t BgL_auxz00_7566;
BgL_auxz00_7566 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3471z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_157); 
FAILURE(BgL_auxz00_7566,BFALSE,BFALSE);} 
BgL_auxz00_7562 = 
(long)CINT(BgL_tmpz00_7563); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7554;
if(
INTEGERP(BgL_sstartz00_156))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7554 = BgL_sstartz00_156
; }  else 
{ 
obj_t BgL_auxz00_7557;
BgL_auxz00_7557 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3471z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_156); 
FAILURE(BgL_auxz00_7557,BFALSE,BFALSE);} 
BgL_tmpz00_7553 = 
(long)CINT(BgL_tmpz00_7554); } 
BGL_SU8VECTOR_COPY(BgL_targetz00_153, BgL_tstartz00_154, BgL_sourcez00_155, BgL_tmpz00_7553, BgL_auxz00_7562); } 
return BUNSPEC;} 

}



/* _u8vector-copy! */
obj_t BGl__u8vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1281z00_166, obj_t BgL_opt1280z00_165)
{
{ /* Llib/srfi4.scm 838 */
{ /* Llib/srfi4.scm 838 */
obj_t BgL_targetz00_1770;obj_t BgL_tstartz00_1771;obj_t BgL_sourcez00_1772;
BgL_targetz00_1770 = 
VECTOR_REF(BgL_opt1280z00_165,((long)0)); 
BgL_tstartz00_1771 = 
VECTOR_REF(BgL_opt1280z00_165,((long)1)); 
BgL_sourcez00_1772 = 
VECTOR_REF(BgL_opt1280z00_165,((long)2)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1280z00_165)) { case ((long)3) : 

{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1777;
{ /* Llib/srfi4.scm 838 */
long BgL_res2194z00_2746;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2745;
if(
BGL_U8VECTORP(BgL_sourcez00_1772))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2745 = BgL_sourcez00_1772; }  else 
{ 
obj_t BgL_auxz00_7577;
BgL_auxz00_7577 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3480z00zz__srfi4z00, BGl_string3345z00zz__srfi4z00, BgL_sourcez00_1772); 
FAILURE(BgL_auxz00_7577,BFALSE,BFALSE);} 
BgL_res2194z00_2746 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2745); } 
BgL_sendz00_1777 = BgL_res2194z00_2746; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_7598;long BgL_auxz00_7589;obj_t BgL_auxz00_7582;
if(
BGL_U8VECTORP(BgL_sourcez00_1772))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7598 = BgL_sourcez00_1772
; }  else 
{ 
obj_t BgL_auxz00_7601;
BgL_auxz00_7601 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3480z00zz__srfi4z00, BGl_string3345z00zz__srfi4z00, BgL_sourcez00_1772); 
FAILURE(BgL_auxz00_7601,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7590;
if(
INTEGERP(BgL_tstartz00_1771))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7590 = BgL_tstartz00_1771
; }  else 
{ 
obj_t BgL_auxz00_7593;
BgL_auxz00_7593 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3480z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1771); 
FAILURE(BgL_auxz00_7593,BFALSE,BFALSE);} 
BgL_auxz00_7589 = 
(long)CINT(BgL_tmpz00_7590); } 
if(
BGL_U8VECTORP(BgL_targetz00_1770))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7582 = BgL_targetz00_1770
; }  else 
{ 
obj_t BgL_auxz00_7585;
BgL_auxz00_7585 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3480z00zz__srfi4z00, BGl_string3345z00zz__srfi4z00, BgL_targetz00_1770); 
FAILURE(BgL_auxz00_7585,BFALSE,BFALSE);} 
return 
BGl_u8vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_7582, BgL_auxz00_7589, BgL_auxz00_7598, 
BINT(((long)0)), 
BINT(BgL_sendz00_1777));} } } break;case ((long)4) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1778;
BgL_sstartz00_1778 = 
VECTOR_REF(BgL_opt1280z00_165,((long)3)); 
{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1779;
{ /* Llib/srfi4.scm 838 */
long BgL_res2195z00_2748;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2747;
if(
BGL_U8VECTORP(BgL_sourcez00_1772))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2747 = BgL_sourcez00_1772; }  else 
{ 
obj_t BgL_auxz00_7611;
BgL_auxz00_7611 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3480z00zz__srfi4z00, BGl_string3345z00zz__srfi4z00, BgL_sourcez00_1772); 
FAILURE(BgL_auxz00_7611,BFALSE,BFALSE);} 
BgL_res2195z00_2748 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2747); } 
BgL_sendz00_1779 = BgL_res2195z00_2748; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_7632;long BgL_auxz00_7623;obj_t BgL_auxz00_7616;
if(
BGL_U8VECTORP(BgL_sourcez00_1772))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7632 = BgL_sourcez00_1772
; }  else 
{ 
obj_t BgL_auxz00_7635;
BgL_auxz00_7635 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3480z00zz__srfi4z00, BGl_string3345z00zz__srfi4z00, BgL_sourcez00_1772); 
FAILURE(BgL_auxz00_7635,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7624;
if(
INTEGERP(BgL_tstartz00_1771))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7624 = BgL_tstartz00_1771
; }  else 
{ 
obj_t BgL_auxz00_7627;
BgL_auxz00_7627 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3480z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1771); 
FAILURE(BgL_auxz00_7627,BFALSE,BFALSE);} 
BgL_auxz00_7623 = 
(long)CINT(BgL_tmpz00_7624); } 
if(
BGL_U8VECTORP(BgL_targetz00_1770))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7616 = BgL_targetz00_1770
; }  else 
{ 
obj_t BgL_auxz00_7619;
BgL_auxz00_7619 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3480z00zz__srfi4z00, BGl_string3345z00zz__srfi4z00, BgL_targetz00_1770); 
FAILURE(BgL_auxz00_7619,BFALSE,BFALSE);} 
return 
BGl_u8vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_7616, BgL_auxz00_7623, BgL_auxz00_7632, BgL_sstartz00_1778, 
BINT(BgL_sendz00_1779));} } } } break;case ((long)5) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1780;
BgL_sstartz00_1780 = 
VECTOR_REF(BgL_opt1280z00_165,((long)3)); 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_sendz00_1781;
BgL_sendz00_1781 = 
VECTOR_REF(BgL_opt1280z00_165,((long)4)); 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_7659;long BgL_auxz00_7650;obj_t BgL_auxz00_7643;
if(
BGL_U8VECTORP(BgL_sourcez00_1772))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7659 = BgL_sourcez00_1772
; }  else 
{ 
obj_t BgL_auxz00_7662;
BgL_auxz00_7662 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3480z00zz__srfi4z00, BGl_string3345z00zz__srfi4z00, BgL_sourcez00_1772); 
FAILURE(BgL_auxz00_7662,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7651;
if(
INTEGERP(BgL_tstartz00_1771))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7651 = BgL_tstartz00_1771
; }  else 
{ 
obj_t BgL_auxz00_7654;
BgL_auxz00_7654 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3480z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1771); 
FAILURE(BgL_auxz00_7654,BFALSE,BFALSE);} 
BgL_auxz00_7650 = 
(long)CINT(BgL_tmpz00_7651); } 
if(
BGL_U8VECTORP(BgL_targetz00_1770))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7643 = BgL_targetz00_1770
; }  else 
{ 
obj_t BgL_auxz00_7646;
BgL_auxz00_7646 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3480z00zz__srfi4z00, BGl_string3345z00zz__srfi4z00, BgL_targetz00_1770); 
FAILURE(BgL_auxz00_7646,BFALSE,BFALSE);} 
return 
BGl_u8vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_7643, BgL_auxz00_7650, BgL_auxz00_7659, BgL_sstartz00_1780, BgL_sendz00_1781);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3478z00zz__srfi4z00, BGl_string3472z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1280z00_165)));} } } } 

}



/* u8vector-copy! */
BGL_EXPORTED_DEF obj_t BGl_u8vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_targetz00_160, long BgL_tstartz00_161, obj_t BgL_sourcez00_162, obj_t BgL_sstartz00_163, obj_t BgL_sendz00_164)
{
{ /* Llib/srfi4.scm 838 */
if(
(BgL_tstartz00_161<((long)0)))
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3479z00zz__srfi4z00, BGl_string3474z00zz__srfi4z00, 
BINT(BgL_tstartz00_161)); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4109z00_7676;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2751;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7677;
if(
INTEGERP(BgL_sstartz00_163))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7677 = BgL_sstartz00_163
; }  else 
{ 
obj_t BgL_auxz00_7680;
BgL_auxz00_7680 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3479z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_163); 
FAILURE(BgL_auxz00_7680,BFALSE,BFALSE);} 
BgL_n1z00_2751 = 
(long)CINT(BgL_tmpz00_7677); } 
BgL_test4109z00_7676 = 
(BgL_n1z00_2751<((long)0)); } 
if(BgL_test4109z00_7676)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3479z00zz__srfi4z00, BGl_string3475z00zz__srfi4z00, BgL_sstartz00_163); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4111z00_7687;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1624z00_1794;
{ /* Llib/srfi4.scm 838 */
long BgL_res2198z00_2754;
BgL_res2198z00_2754 = 
BGL_HVECTOR_LENGTH(BgL_sourcez00_162); 
BgL_arg1624z00_1794 = BgL_res2198z00_2754; } 
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2755;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7689;
if(
INTEGERP(BgL_sendz00_164))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7689 = BgL_sendz00_164
; }  else 
{ 
obj_t BgL_auxz00_7692;
BgL_auxz00_7692 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3479z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_164); 
FAILURE(BgL_auxz00_7692,BFALSE,BFALSE);} 
BgL_n1z00_2755 = 
(long)CINT(BgL_tmpz00_7689); } 
BgL_test4111z00_7687 = 
(BgL_n1z00_2755>BgL_arg1624z00_1794); } } 
if(BgL_test4111z00_7687)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3479z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_164); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4113z00_7699;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2758;long BgL_n2z00_2759;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7700;
if(
INTEGERP(BgL_sendz00_164))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7700 = BgL_sendz00_164
; }  else 
{ 
obj_t BgL_auxz00_7703;
BgL_auxz00_7703 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3479z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_164); 
FAILURE(BgL_auxz00_7703,BFALSE,BFALSE);} 
BgL_n1z00_2758 = 
(long)CINT(BgL_tmpz00_7700); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7708;
if(
INTEGERP(BgL_sstartz00_163))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7708 = BgL_sstartz00_163
; }  else 
{ 
obj_t BgL_auxz00_7711;
BgL_auxz00_7711 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3479z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_163); 
FAILURE(BgL_auxz00_7711,BFALSE,BFALSE);} 
BgL_n2z00_2759 = 
(long)CINT(BgL_tmpz00_7708); } 
BgL_test4113z00_7699 = 
(BgL_n1z00_2758<BgL_n2z00_2759); } 
if(BgL_test4113z00_7699)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3479z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_164); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4116z00_7718;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1621z00_1792;long BgL_arg1623z00_1793;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2761;long BgL_za72za7_2762;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7719;
if(
INTEGERP(BgL_sendz00_164))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7719 = BgL_sendz00_164
; }  else 
{ 
obj_t BgL_auxz00_7722;
BgL_auxz00_7722 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3479z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_164); 
FAILURE(BgL_auxz00_7722,BFALSE,BFALSE);} 
BgL_za71za7_2761 = 
(long)CINT(BgL_tmpz00_7719); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7727;
if(
INTEGERP(BgL_sstartz00_163))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7727 = BgL_sstartz00_163
; }  else 
{ 
obj_t BgL_auxz00_7730;
BgL_auxz00_7730 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3479z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_163); 
FAILURE(BgL_auxz00_7730,BFALSE,BFALSE);} 
BgL_za72za7_2762 = 
(long)CINT(BgL_tmpz00_7727); } 
BgL_arg1621z00_1792 = 
(BgL_za71za7_2761-BgL_za72za7_2762); } 
{ /* Llib/srfi4.scm 838 */
long BgL_res2202z00_2765;
BgL_res2202z00_2765 = 
BGL_HVECTOR_LENGTH(BgL_targetz00_160); 
BgL_arg1623z00_1793 = BgL_res2202z00_2765; } 
BgL_test4116z00_7718 = 
BGl_2ze3ze3zz__r4_numbers_6_5z00(
BINT(BgL_arg1621z00_1792), 
BINT(BgL_arg1623z00_1793)); } 
if(BgL_test4116z00_7718)
{ /* Llib/srfi4.scm 838 */
long BgL_arg1620z00_1791;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2766;long BgL_za72za7_2767;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7740;
if(
INTEGERP(BgL_sendz00_164))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7740 = BgL_sendz00_164
; }  else 
{ 
obj_t BgL_auxz00_7743;
BgL_auxz00_7743 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3479z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_164); 
FAILURE(BgL_auxz00_7743,BFALSE,BFALSE);} 
BgL_za71za7_2766 = 
(long)CINT(BgL_tmpz00_7740); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7748;
if(
INTEGERP(BgL_sstartz00_163))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7748 = BgL_sstartz00_163
; }  else 
{ 
obj_t BgL_auxz00_7751;
BgL_auxz00_7751 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3479z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_163); 
FAILURE(BgL_auxz00_7751,BFALSE,BFALSE);} 
BgL_za72za7_2767 = 
(long)CINT(BgL_tmpz00_7748); } 
BgL_arg1620z00_1791 = 
(BgL_za71za7_2766-BgL_za72za7_2767); } 
BGl_errorz00zz__errorz00(BGl_string3479z00zz__srfi4z00, BGl_string3477z00zz__srfi4z00, 
BINT(BgL_arg1620z00_1791)); }  else 
{ /* Llib/srfi4.scm 838 */BFALSE; } } } } } 
{ /* Llib/srfi4.scm 838 */
long BgL_auxz00_7768;long BgL_tmpz00_7759;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7769;
if(
INTEGERP(BgL_sendz00_164))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7769 = BgL_sendz00_164
; }  else 
{ 
obj_t BgL_auxz00_7772;
BgL_auxz00_7772 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3479z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_164); 
FAILURE(BgL_auxz00_7772,BFALSE,BFALSE);} 
BgL_auxz00_7768 = 
(long)CINT(BgL_tmpz00_7769); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7760;
if(
INTEGERP(BgL_sstartz00_163))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7760 = BgL_sstartz00_163
; }  else 
{ 
obj_t BgL_auxz00_7763;
BgL_auxz00_7763 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3479z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_163); 
FAILURE(BgL_auxz00_7763,BFALSE,BFALSE);} 
BgL_tmpz00_7759 = 
(long)CINT(BgL_tmpz00_7760); } 
BGL_SU8VECTOR_COPY(BgL_targetz00_160, BgL_tstartz00_161, BgL_sourcez00_162, BgL_tmpz00_7759, BgL_auxz00_7768); } 
return BUNSPEC;} 

}



/* _s16vector-copy! */
obj_t BGl__s16vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1285z00_173, obj_t BgL_opt1284z00_172)
{
{ /* Llib/srfi4.scm 838 */
{ /* Llib/srfi4.scm 838 */
obj_t BgL_targetz00_1795;obj_t BgL_tstartz00_1796;obj_t BgL_sourcez00_1797;
BgL_targetz00_1795 = 
VECTOR_REF(BgL_opt1284z00_172,((long)0)); 
BgL_tstartz00_1796 = 
VECTOR_REF(BgL_opt1284z00_172,((long)1)); 
BgL_sourcez00_1797 = 
VECTOR_REF(BgL_opt1284z00_172,((long)2)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1284z00_172)) { case ((long)3) : 

{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1802;
{ /* Llib/srfi4.scm 838 */
long BgL_res2204z00_2770;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2769;
if(
BGL_S16VECTORP(BgL_sourcez00_1797))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2769 = BgL_sourcez00_1797; }  else 
{ 
obj_t BgL_auxz00_7783;
BgL_auxz00_7783 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3483z00zz__srfi4z00, BGl_string3347z00zz__srfi4z00, BgL_sourcez00_1797); 
FAILURE(BgL_auxz00_7783,BFALSE,BFALSE);} 
BgL_res2204z00_2770 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2769); } 
BgL_sendz00_1802 = BgL_res2204z00_2770; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_7804;long BgL_auxz00_7795;obj_t BgL_auxz00_7788;
if(
BGL_S16VECTORP(BgL_sourcez00_1797))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7804 = BgL_sourcez00_1797
; }  else 
{ 
obj_t BgL_auxz00_7807;
BgL_auxz00_7807 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3483z00zz__srfi4z00, BGl_string3347z00zz__srfi4z00, BgL_sourcez00_1797); 
FAILURE(BgL_auxz00_7807,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7796;
if(
INTEGERP(BgL_tstartz00_1796))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7796 = BgL_tstartz00_1796
; }  else 
{ 
obj_t BgL_auxz00_7799;
BgL_auxz00_7799 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3483z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1796); 
FAILURE(BgL_auxz00_7799,BFALSE,BFALSE);} 
BgL_auxz00_7795 = 
(long)CINT(BgL_tmpz00_7796); } 
if(
BGL_S16VECTORP(BgL_targetz00_1795))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7788 = BgL_targetz00_1795
; }  else 
{ 
obj_t BgL_auxz00_7791;
BgL_auxz00_7791 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3483z00zz__srfi4z00, BGl_string3347z00zz__srfi4z00, BgL_targetz00_1795); 
FAILURE(BgL_auxz00_7791,BFALSE,BFALSE);} 
return 
BGl_s16vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_7788, BgL_auxz00_7795, BgL_auxz00_7804, 
BINT(((long)0)), 
BINT(BgL_sendz00_1802));} } } break;case ((long)4) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1803;
BgL_sstartz00_1803 = 
VECTOR_REF(BgL_opt1284z00_172,((long)3)); 
{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1804;
{ /* Llib/srfi4.scm 838 */
long BgL_res2205z00_2772;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2771;
if(
BGL_S16VECTORP(BgL_sourcez00_1797))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2771 = BgL_sourcez00_1797; }  else 
{ 
obj_t BgL_auxz00_7817;
BgL_auxz00_7817 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3483z00zz__srfi4z00, BGl_string3347z00zz__srfi4z00, BgL_sourcez00_1797); 
FAILURE(BgL_auxz00_7817,BFALSE,BFALSE);} 
BgL_res2205z00_2772 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2771); } 
BgL_sendz00_1804 = BgL_res2205z00_2772; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_7838;long BgL_auxz00_7829;obj_t BgL_auxz00_7822;
if(
BGL_S16VECTORP(BgL_sourcez00_1797))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7838 = BgL_sourcez00_1797
; }  else 
{ 
obj_t BgL_auxz00_7841;
BgL_auxz00_7841 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3483z00zz__srfi4z00, BGl_string3347z00zz__srfi4z00, BgL_sourcez00_1797); 
FAILURE(BgL_auxz00_7841,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7830;
if(
INTEGERP(BgL_tstartz00_1796))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7830 = BgL_tstartz00_1796
; }  else 
{ 
obj_t BgL_auxz00_7833;
BgL_auxz00_7833 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3483z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1796); 
FAILURE(BgL_auxz00_7833,BFALSE,BFALSE);} 
BgL_auxz00_7829 = 
(long)CINT(BgL_tmpz00_7830); } 
if(
BGL_S16VECTORP(BgL_targetz00_1795))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7822 = BgL_targetz00_1795
; }  else 
{ 
obj_t BgL_auxz00_7825;
BgL_auxz00_7825 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3483z00zz__srfi4z00, BGl_string3347z00zz__srfi4z00, BgL_targetz00_1795); 
FAILURE(BgL_auxz00_7825,BFALSE,BFALSE);} 
return 
BGl_s16vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_7822, BgL_auxz00_7829, BgL_auxz00_7838, BgL_sstartz00_1803, 
BINT(BgL_sendz00_1804));} } } } break;case ((long)5) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1805;
BgL_sstartz00_1805 = 
VECTOR_REF(BgL_opt1284z00_172,((long)3)); 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_sendz00_1806;
BgL_sendz00_1806 = 
VECTOR_REF(BgL_opt1284z00_172,((long)4)); 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_7865;long BgL_auxz00_7856;obj_t BgL_auxz00_7849;
if(
BGL_S16VECTORP(BgL_sourcez00_1797))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7865 = BgL_sourcez00_1797
; }  else 
{ 
obj_t BgL_auxz00_7868;
BgL_auxz00_7868 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3483z00zz__srfi4z00, BGl_string3347z00zz__srfi4z00, BgL_sourcez00_1797); 
FAILURE(BgL_auxz00_7868,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7857;
if(
INTEGERP(BgL_tstartz00_1796))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7857 = BgL_tstartz00_1796
; }  else 
{ 
obj_t BgL_auxz00_7860;
BgL_auxz00_7860 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3483z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1796); 
FAILURE(BgL_auxz00_7860,BFALSE,BFALSE);} 
BgL_auxz00_7856 = 
(long)CINT(BgL_tmpz00_7857); } 
if(
BGL_S16VECTORP(BgL_targetz00_1795))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7849 = BgL_targetz00_1795
; }  else 
{ 
obj_t BgL_auxz00_7852;
BgL_auxz00_7852 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3483z00zz__srfi4z00, BGl_string3347z00zz__srfi4z00, BgL_targetz00_1795); 
FAILURE(BgL_auxz00_7852,BFALSE,BFALSE);} 
return 
BGl_s16vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_7849, BgL_auxz00_7856, BgL_auxz00_7865, BgL_sstartz00_1805, BgL_sendz00_1806);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3481z00zz__srfi4z00, BGl_string3472z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1284z00_172)));} } } } 

}



/* s16vector-copy! */
BGL_EXPORTED_DEF obj_t BGl_s16vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_targetz00_167, long BgL_tstartz00_168, obj_t BgL_sourcez00_169, obj_t BgL_sstartz00_170, obj_t BgL_sendz00_171)
{
{ /* Llib/srfi4.scm 838 */
if(
(BgL_tstartz00_168<((long)0)))
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3482z00zz__srfi4z00, BGl_string3474z00zz__srfi4z00, 
BINT(BgL_tstartz00_168)); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4135z00_7882;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2775;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7883;
if(
INTEGERP(BgL_sstartz00_170))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7883 = BgL_sstartz00_170
; }  else 
{ 
obj_t BgL_auxz00_7886;
BgL_auxz00_7886 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3482z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_170); 
FAILURE(BgL_auxz00_7886,BFALSE,BFALSE);} 
BgL_n1z00_2775 = 
(long)CINT(BgL_tmpz00_7883); } 
BgL_test4135z00_7882 = 
(BgL_n1z00_2775<((long)0)); } 
if(BgL_test4135z00_7882)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3482z00zz__srfi4z00, BGl_string3475z00zz__srfi4z00, BgL_sstartz00_170); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4137z00_7893;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1640z00_1819;
{ /* Llib/srfi4.scm 838 */
long BgL_res2208z00_2778;
BgL_res2208z00_2778 = 
BGL_HVECTOR_LENGTH(BgL_sourcez00_169); 
BgL_arg1640z00_1819 = BgL_res2208z00_2778; } 
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2779;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7895;
if(
INTEGERP(BgL_sendz00_171))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7895 = BgL_sendz00_171
; }  else 
{ 
obj_t BgL_auxz00_7898;
BgL_auxz00_7898 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3482z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_171); 
FAILURE(BgL_auxz00_7898,BFALSE,BFALSE);} 
BgL_n1z00_2779 = 
(long)CINT(BgL_tmpz00_7895); } 
BgL_test4137z00_7893 = 
(BgL_n1z00_2779>BgL_arg1640z00_1819); } } 
if(BgL_test4137z00_7893)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3482z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_171); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4139z00_7905;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2782;long BgL_n2z00_2783;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7906;
if(
INTEGERP(BgL_sendz00_171))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7906 = BgL_sendz00_171
; }  else 
{ 
obj_t BgL_auxz00_7909;
BgL_auxz00_7909 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3482z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_171); 
FAILURE(BgL_auxz00_7909,BFALSE,BFALSE);} 
BgL_n1z00_2782 = 
(long)CINT(BgL_tmpz00_7906); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7914;
if(
INTEGERP(BgL_sstartz00_170))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7914 = BgL_sstartz00_170
; }  else 
{ 
obj_t BgL_auxz00_7917;
BgL_auxz00_7917 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3482z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_170); 
FAILURE(BgL_auxz00_7917,BFALSE,BFALSE);} 
BgL_n2z00_2783 = 
(long)CINT(BgL_tmpz00_7914); } 
BgL_test4139z00_7905 = 
(BgL_n1z00_2782<BgL_n2z00_2783); } 
if(BgL_test4139z00_7905)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3482z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_171); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4142z00_7924;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1637z00_1817;long BgL_arg1639z00_1818;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2785;long BgL_za72za7_2786;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7925;
if(
INTEGERP(BgL_sendz00_171))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7925 = BgL_sendz00_171
; }  else 
{ 
obj_t BgL_auxz00_7928;
BgL_auxz00_7928 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3482z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_171); 
FAILURE(BgL_auxz00_7928,BFALSE,BFALSE);} 
BgL_za71za7_2785 = 
(long)CINT(BgL_tmpz00_7925); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7933;
if(
INTEGERP(BgL_sstartz00_170))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7933 = BgL_sstartz00_170
; }  else 
{ 
obj_t BgL_auxz00_7936;
BgL_auxz00_7936 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3482z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_170); 
FAILURE(BgL_auxz00_7936,BFALSE,BFALSE);} 
BgL_za72za7_2786 = 
(long)CINT(BgL_tmpz00_7933); } 
BgL_arg1637z00_1817 = 
(BgL_za71za7_2785-BgL_za72za7_2786); } 
{ /* Llib/srfi4.scm 838 */
long BgL_res2212z00_2789;
BgL_res2212z00_2789 = 
BGL_HVECTOR_LENGTH(BgL_targetz00_167); 
BgL_arg1639z00_1818 = BgL_res2212z00_2789; } 
BgL_test4142z00_7924 = 
BGl_2ze3ze3zz__r4_numbers_6_5z00(
BINT(BgL_arg1637z00_1817), 
BINT(BgL_arg1639z00_1818)); } 
if(BgL_test4142z00_7924)
{ /* Llib/srfi4.scm 838 */
long BgL_arg1635z00_1816;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2790;long BgL_za72za7_2791;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7946;
if(
INTEGERP(BgL_sendz00_171))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7946 = BgL_sendz00_171
; }  else 
{ 
obj_t BgL_auxz00_7949;
BgL_auxz00_7949 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3482z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_171); 
FAILURE(BgL_auxz00_7949,BFALSE,BFALSE);} 
BgL_za71za7_2790 = 
(long)CINT(BgL_tmpz00_7946); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7954;
if(
INTEGERP(BgL_sstartz00_170))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7954 = BgL_sstartz00_170
; }  else 
{ 
obj_t BgL_auxz00_7957;
BgL_auxz00_7957 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3482z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_170); 
FAILURE(BgL_auxz00_7957,BFALSE,BFALSE);} 
BgL_za72za7_2791 = 
(long)CINT(BgL_tmpz00_7954); } 
BgL_arg1635z00_1816 = 
(BgL_za71za7_2790-BgL_za72za7_2791); } 
BGl_errorz00zz__errorz00(BGl_string3482z00zz__srfi4z00, BGl_string3477z00zz__srfi4z00, 
BINT(BgL_arg1635z00_1816)); }  else 
{ /* Llib/srfi4.scm 838 */BFALSE; } } } } } 
{ /* Llib/srfi4.scm 838 */
long BgL_auxz00_7974;long BgL_tmpz00_7965;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7975;
if(
INTEGERP(BgL_sendz00_171))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7975 = BgL_sendz00_171
; }  else 
{ 
obj_t BgL_auxz00_7978;
BgL_auxz00_7978 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3482z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_171); 
FAILURE(BgL_auxz00_7978,BFALSE,BFALSE);} 
BgL_auxz00_7974 = 
(long)CINT(BgL_tmpz00_7975); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_7966;
if(
INTEGERP(BgL_sstartz00_170))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_7966 = BgL_sstartz00_170
; }  else 
{ 
obj_t BgL_auxz00_7969;
BgL_auxz00_7969 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3482z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_170); 
FAILURE(BgL_auxz00_7969,BFALSE,BFALSE);} 
BgL_tmpz00_7965 = 
(long)CINT(BgL_tmpz00_7966); } 
BGL_SU16VECTOR_COPY(BgL_targetz00_167, BgL_tstartz00_168, BgL_sourcez00_169, BgL_tmpz00_7965, BgL_auxz00_7974); } 
return BUNSPEC;} 

}



/* _u16vector-copy! */
obj_t BGl__u16vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1289z00_180, obj_t BgL_opt1288z00_179)
{
{ /* Llib/srfi4.scm 838 */
{ /* Llib/srfi4.scm 838 */
obj_t BgL_targetz00_1820;obj_t BgL_tstartz00_1821;obj_t BgL_sourcez00_1822;
BgL_targetz00_1820 = 
VECTOR_REF(BgL_opt1288z00_179,((long)0)); 
BgL_tstartz00_1821 = 
VECTOR_REF(BgL_opt1288z00_179,((long)1)); 
BgL_sourcez00_1822 = 
VECTOR_REF(BgL_opt1288z00_179,((long)2)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1288z00_179)) { case ((long)3) : 

{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1827;
{ /* Llib/srfi4.scm 838 */
long BgL_res2214z00_2794;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2793;
if(
BGL_U16VECTORP(BgL_sourcez00_1822))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2793 = BgL_sourcez00_1822; }  else 
{ 
obj_t BgL_auxz00_7989;
BgL_auxz00_7989 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3486z00zz__srfi4z00, BGl_string3349z00zz__srfi4z00, BgL_sourcez00_1822); 
FAILURE(BgL_auxz00_7989,BFALSE,BFALSE);} 
BgL_res2214z00_2794 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2793); } 
BgL_sendz00_1827 = BgL_res2214z00_2794; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_8010;long BgL_auxz00_8001;obj_t BgL_auxz00_7994;
if(
BGL_U16VECTORP(BgL_sourcez00_1822))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8010 = BgL_sourcez00_1822
; }  else 
{ 
obj_t BgL_auxz00_8013;
BgL_auxz00_8013 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3486z00zz__srfi4z00, BGl_string3349z00zz__srfi4z00, BgL_sourcez00_1822); 
FAILURE(BgL_auxz00_8013,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8002;
if(
INTEGERP(BgL_tstartz00_1821))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8002 = BgL_tstartz00_1821
; }  else 
{ 
obj_t BgL_auxz00_8005;
BgL_auxz00_8005 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3486z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1821); 
FAILURE(BgL_auxz00_8005,BFALSE,BFALSE);} 
BgL_auxz00_8001 = 
(long)CINT(BgL_tmpz00_8002); } 
if(
BGL_U16VECTORP(BgL_targetz00_1820))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_7994 = BgL_targetz00_1820
; }  else 
{ 
obj_t BgL_auxz00_7997;
BgL_auxz00_7997 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3486z00zz__srfi4z00, BGl_string3349z00zz__srfi4z00, BgL_targetz00_1820); 
FAILURE(BgL_auxz00_7997,BFALSE,BFALSE);} 
return 
BGl_u16vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_7994, BgL_auxz00_8001, BgL_auxz00_8010, 
BINT(((long)0)), 
BINT(BgL_sendz00_1827));} } } break;case ((long)4) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1828;
BgL_sstartz00_1828 = 
VECTOR_REF(BgL_opt1288z00_179,((long)3)); 
{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1829;
{ /* Llib/srfi4.scm 838 */
long BgL_res2215z00_2796;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2795;
if(
BGL_U16VECTORP(BgL_sourcez00_1822))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2795 = BgL_sourcez00_1822; }  else 
{ 
obj_t BgL_auxz00_8023;
BgL_auxz00_8023 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3486z00zz__srfi4z00, BGl_string3349z00zz__srfi4z00, BgL_sourcez00_1822); 
FAILURE(BgL_auxz00_8023,BFALSE,BFALSE);} 
BgL_res2215z00_2796 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2795); } 
BgL_sendz00_1829 = BgL_res2215z00_2796; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_8044;long BgL_auxz00_8035;obj_t BgL_auxz00_8028;
if(
BGL_U16VECTORP(BgL_sourcez00_1822))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8044 = BgL_sourcez00_1822
; }  else 
{ 
obj_t BgL_auxz00_8047;
BgL_auxz00_8047 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3486z00zz__srfi4z00, BGl_string3349z00zz__srfi4z00, BgL_sourcez00_1822); 
FAILURE(BgL_auxz00_8047,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8036;
if(
INTEGERP(BgL_tstartz00_1821))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8036 = BgL_tstartz00_1821
; }  else 
{ 
obj_t BgL_auxz00_8039;
BgL_auxz00_8039 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3486z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1821); 
FAILURE(BgL_auxz00_8039,BFALSE,BFALSE);} 
BgL_auxz00_8035 = 
(long)CINT(BgL_tmpz00_8036); } 
if(
BGL_U16VECTORP(BgL_targetz00_1820))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8028 = BgL_targetz00_1820
; }  else 
{ 
obj_t BgL_auxz00_8031;
BgL_auxz00_8031 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3486z00zz__srfi4z00, BGl_string3349z00zz__srfi4z00, BgL_targetz00_1820); 
FAILURE(BgL_auxz00_8031,BFALSE,BFALSE);} 
return 
BGl_u16vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_8028, BgL_auxz00_8035, BgL_auxz00_8044, BgL_sstartz00_1828, 
BINT(BgL_sendz00_1829));} } } } break;case ((long)5) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1830;
BgL_sstartz00_1830 = 
VECTOR_REF(BgL_opt1288z00_179,((long)3)); 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_sendz00_1831;
BgL_sendz00_1831 = 
VECTOR_REF(BgL_opt1288z00_179,((long)4)); 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_8071;long BgL_auxz00_8062;obj_t BgL_auxz00_8055;
if(
BGL_U16VECTORP(BgL_sourcez00_1822))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8071 = BgL_sourcez00_1822
; }  else 
{ 
obj_t BgL_auxz00_8074;
BgL_auxz00_8074 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3486z00zz__srfi4z00, BGl_string3349z00zz__srfi4z00, BgL_sourcez00_1822); 
FAILURE(BgL_auxz00_8074,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8063;
if(
INTEGERP(BgL_tstartz00_1821))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8063 = BgL_tstartz00_1821
; }  else 
{ 
obj_t BgL_auxz00_8066;
BgL_auxz00_8066 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3486z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1821); 
FAILURE(BgL_auxz00_8066,BFALSE,BFALSE);} 
BgL_auxz00_8062 = 
(long)CINT(BgL_tmpz00_8063); } 
if(
BGL_U16VECTORP(BgL_targetz00_1820))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8055 = BgL_targetz00_1820
; }  else 
{ 
obj_t BgL_auxz00_8058;
BgL_auxz00_8058 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3486z00zz__srfi4z00, BGl_string3349z00zz__srfi4z00, BgL_targetz00_1820); 
FAILURE(BgL_auxz00_8058,BFALSE,BFALSE);} 
return 
BGl_u16vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_8055, BgL_auxz00_8062, BgL_auxz00_8071, BgL_sstartz00_1830, BgL_sendz00_1831);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3484z00zz__srfi4z00, BGl_string3472z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1288z00_179)));} } } } 

}



/* u16vector-copy! */
BGL_EXPORTED_DEF obj_t BGl_u16vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_targetz00_174, long BgL_tstartz00_175, obj_t BgL_sourcez00_176, obj_t BgL_sstartz00_177, obj_t BgL_sendz00_178)
{
{ /* Llib/srfi4.scm 838 */
if(
(BgL_tstartz00_175<((long)0)))
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3485z00zz__srfi4z00, BGl_string3474z00zz__srfi4z00, 
BINT(BgL_tstartz00_175)); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4161z00_8088;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2799;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8089;
if(
INTEGERP(BgL_sstartz00_177))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8089 = BgL_sstartz00_177
; }  else 
{ 
obj_t BgL_auxz00_8092;
BgL_auxz00_8092 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3485z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_177); 
FAILURE(BgL_auxz00_8092,BFALSE,BFALSE);} 
BgL_n1z00_2799 = 
(long)CINT(BgL_tmpz00_8089); } 
BgL_test4161z00_8088 = 
(BgL_n1z00_2799<((long)0)); } 
if(BgL_test4161z00_8088)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3485z00zz__srfi4z00, BGl_string3475z00zz__srfi4z00, BgL_sstartz00_177); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4163z00_8099;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1656z00_1844;
{ /* Llib/srfi4.scm 838 */
long BgL_res2218z00_2802;
BgL_res2218z00_2802 = 
BGL_HVECTOR_LENGTH(BgL_sourcez00_176); 
BgL_arg1656z00_1844 = BgL_res2218z00_2802; } 
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2803;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8101;
if(
INTEGERP(BgL_sendz00_178))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8101 = BgL_sendz00_178
; }  else 
{ 
obj_t BgL_auxz00_8104;
BgL_auxz00_8104 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3485z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_178); 
FAILURE(BgL_auxz00_8104,BFALSE,BFALSE);} 
BgL_n1z00_2803 = 
(long)CINT(BgL_tmpz00_8101); } 
BgL_test4163z00_8099 = 
(BgL_n1z00_2803>BgL_arg1656z00_1844); } } 
if(BgL_test4163z00_8099)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3485z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_178); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4165z00_8111;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2806;long BgL_n2z00_2807;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8112;
if(
INTEGERP(BgL_sendz00_178))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8112 = BgL_sendz00_178
; }  else 
{ 
obj_t BgL_auxz00_8115;
BgL_auxz00_8115 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3485z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_178); 
FAILURE(BgL_auxz00_8115,BFALSE,BFALSE);} 
BgL_n1z00_2806 = 
(long)CINT(BgL_tmpz00_8112); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8120;
if(
INTEGERP(BgL_sstartz00_177))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8120 = BgL_sstartz00_177
; }  else 
{ 
obj_t BgL_auxz00_8123;
BgL_auxz00_8123 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3485z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_177); 
FAILURE(BgL_auxz00_8123,BFALSE,BFALSE);} 
BgL_n2z00_2807 = 
(long)CINT(BgL_tmpz00_8120); } 
BgL_test4165z00_8111 = 
(BgL_n1z00_2806<BgL_n2z00_2807); } 
if(BgL_test4165z00_8111)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3485z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_178); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4168z00_8130;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1652z00_1842;long BgL_arg1654z00_1843;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2809;long BgL_za72za7_2810;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8131;
if(
INTEGERP(BgL_sendz00_178))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8131 = BgL_sendz00_178
; }  else 
{ 
obj_t BgL_auxz00_8134;
BgL_auxz00_8134 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3485z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_178); 
FAILURE(BgL_auxz00_8134,BFALSE,BFALSE);} 
BgL_za71za7_2809 = 
(long)CINT(BgL_tmpz00_8131); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8139;
if(
INTEGERP(BgL_sstartz00_177))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8139 = BgL_sstartz00_177
; }  else 
{ 
obj_t BgL_auxz00_8142;
BgL_auxz00_8142 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3485z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_177); 
FAILURE(BgL_auxz00_8142,BFALSE,BFALSE);} 
BgL_za72za7_2810 = 
(long)CINT(BgL_tmpz00_8139); } 
BgL_arg1652z00_1842 = 
(BgL_za71za7_2809-BgL_za72za7_2810); } 
{ /* Llib/srfi4.scm 838 */
long BgL_res2222z00_2813;
BgL_res2222z00_2813 = 
BGL_HVECTOR_LENGTH(BgL_targetz00_174); 
BgL_arg1654z00_1843 = BgL_res2222z00_2813; } 
BgL_test4168z00_8130 = 
BGl_2ze3ze3zz__r4_numbers_6_5z00(
BINT(BgL_arg1652z00_1842), 
BINT(BgL_arg1654z00_1843)); } 
if(BgL_test4168z00_8130)
{ /* Llib/srfi4.scm 838 */
long BgL_arg1651z00_1841;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2814;long BgL_za72za7_2815;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8152;
if(
INTEGERP(BgL_sendz00_178))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8152 = BgL_sendz00_178
; }  else 
{ 
obj_t BgL_auxz00_8155;
BgL_auxz00_8155 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3485z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_178); 
FAILURE(BgL_auxz00_8155,BFALSE,BFALSE);} 
BgL_za71za7_2814 = 
(long)CINT(BgL_tmpz00_8152); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8160;
if(
INTEGERP(BgL_sstartz00_177))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8160 = BgL_sstartz00_177
; }  else 
{ 
obj_t BgL_auxz00_8163;
BgL_auxz00_8163 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3485z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_177); 
FAILURE(BgL_auxz00_8163,BFALSE,BFALSE);} 
BgL_za72za7_2815 = 
(long)CINT(BgL_tmpz00_8160); } 
BgL_arg1651z00_1841 = 
(BgL_za71za7_2814-BgL_za72za7_2815); } 
BGl_errorz00zz__errorz00(BGl_string3485z00zz__srfi4z00, BGl_string3477z00zz__srfi4z00, 
BINT(BgL_arg1651z00_1841)); }  else 
{ /* Llib/srfi4.scm 838 */BFALSE; } } } } } 
{ /* Llib/srfi4.scm 838 */
long BgL_auxz00_8180;long BgL_tmpz00_8171;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8181;
if(
INTEGERP(BgL_sendz00_178))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8181 = BgL_sendz00_178
; }  else 
{ 
obj_t BgL_auxz00_8184;
BgL_auxz00_8184 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3485z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_178); 
FAILURE(BgL_auxz00_8184,BFALSE,BFALSE);} 
BgL_auxz00_8180 = 
(long)CINT(BgL_tmpz00_8181); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8172;
if(
INTEGERP(BgL_sstartz00_177))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8172 = BgL_sstartz00_177
; }  else 
{ 
obj_t BgL_auxz00_8175;
BgL_auxz00_8175 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3485z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_177); 
FAILURE(BgL_auxz00_8175,BFALSE,BFALSE);} 
BgL_tmpz00_8171 = 
(long)CINT(BgL_tmpz00_8172); } 
BGL_SU16VECTOR_COPY(BgL_targetz00_174, BgL_tstartz00_175, BgL_sourcez00_176, BgL_tmpz00_8171, BgL_auxz00_8180); } 
return BUNSPEC;} 

}



/* _s32vector-copy! */
obj_t BGl__s32vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1293z00_187, obj_t BgL_opt1292z00_186)
{
{ /* Llib/srfi4.scm 838 */
{ /* Llib/srfi4.scm 838 */
obj_t BgL_targetz00_1845;obj_t BgL_tstartz00_1846;obj_t BgL_sourcez00_1847;
BgL_targetz00_1845 = 
VECTOR_REF(BgL_opt1292z00_186,((long)0)); 
BgL_tstartz00_1846 = 
VECTOR_REF(BgL_opt1292z00_186,((long)1)); 
BgL_sourcez00_1847 = 
VECTOR_REF(BgL_opt1292z00_186,((long)2)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1292z00_186)) { case ((long)3) : 

{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1852;
{ /* Llib/srfi4.scm 838 */
long BgL_res2224z00_2818;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2817;
if(
BGL_S32VECTORP(BgL_sourcez00_1847))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2817 = BgL_sourcez00_1847; }  else 
{ 
obj_t BgL_auxz00_8195;
BgL_auxz00_8195 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3489z00zz__srfi4z00, BGl_string3351z00zz__srfi4z00, BgL_sourcez00_1847); 
FAILURE(BgL_auxz00_8195,BFALSE,BFALSE);} 
BgL_res2224z00_2818 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2817); } 
BgL_sendz00_1852 = BgL_res2224z00_2818; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_8216;long BgL_auxz00_8207;obj_t BgL_auxz00_8200;
if(
BGL_S32VECTORP(BgL_sourcez00_1847))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8216 = BgL_sourcez00_1847
; }  else 
{ 
obj_t BgL_auxz00_8219;
BgL_auxz00_8219 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3489z00zz__srfi4z00, BGl_string3351z00zz__srfi4z00, BgL_sourcez00_1847); 
FAILURE(BgL_auxz00_8219,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8208;
if(
INTEGERP(BgL_tstartz00_1846))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8208 = BgL_tstartz00_1846
; }  else 
{ 
obj_t BgL_auxz00_8211;
BgL_auxz00_8211 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3489z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1846); 
FAILURE(BgL_auxz00_8211,BFALSE,BFALSE);} 
BgL_auxz00_8207 = 
(long)CINT(BgL_tmpz00_8208); } 
if(
BGL_S32VECTORP(BgL_targetz00_1845))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8200 = BgL_targetz00_1845
; }  else 
{ 
obj_t BgL_auxz00_8203;
BgL_auxz00_8203 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3489z00zz__srfi4z00, BGl_string3351z00zz__srfi4z00, BgL_targetz00_1845); 
FAILURE(BgL_auxz00_8203,BFALSE,BFALSE);} 
return 
BGl_s32vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_8200, BgL_auxz00_8207, BgL_auxz00_8216, 
BINT(((long)0)), 
BINT(BgL_sendz00_1852));} } } break;case ((long)4) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1853;
BgL_sstartz00_1853 = 
VECTOR_REF(BgL_opt1292z00_186,((long)3)); 
{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1854;
{ /* Llib/srfi4.scm 838 */
long BgL_res2225z00_2820;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2819;
if(
BGL_S32VECTORP(BgL_sourcez00_1847))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2819 = BgL_sourcez00_1847; }  else 
{ 
obj_t BgL_auxz00_8229;
BgL_auxz00_8229 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3489z00zz__srfi4z00, BGl_string3351z00zz__srfi4z00, BgL_sourcez00_1847); 
FAILURE(BgL_auxz00_8229,BFALSE,BFALSE);} 
BgL_res2225z00_2820 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2819); } 
BgL_sendz00_1854 = BgL_res2225z00_2820; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_8250;long BgL_auxz00_8241;obj_t BgL_auxz00_8234;
if(
BGL_S32VECTORP(BgL_sourcez00_1847))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8250 = BgL_sourcez00_1847
; }  else 
{ 
obj_t BgL_auxz00_8253;
BgL_auxz00_8253 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3489z00zz__srfi4z00, BGl_string3351z00zz__srfi4z00, BgL_sourcez00_1847); 
FAILURE(BgL_auxz00_8253,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8242;
if(
INTEGERP(BgL_tstartz00_1846))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8242 = BgL_tstartz00_1846
; }  else 
{ 
obj_t BgL_auxz00_8245;
BgL_auxz00_8245 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3489z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1846); 
FAILURE(BgL_auxz00_8245,BFALSE,BFALSE);} 
BgL_auxz00_8241 = 
(long)CINT(BgL_tmpz00_8242); } 
if(
BGL_S32VECTORP(BgL_targetz00_1845))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8234 = BgL_targetz00_1845
; }  else 
{ 
obj_t BgL_auxz00_8237;
BgL_auxz00_8237 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3489z00zz__srfi4z00, BGl_string3351z00zz__srfi4z00, BgL_targetz00_1845); 
FAILURE(BgL_auxz00_8237,BFALSE,BFALSE);} 
return 
BGl_s32vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_8234, BgL_auxz00_8241, BgL_auxz00_8250, BgL_sstartz00_1853, 
BINT(BgL_sendz00_1854));} } } } break;case ((long)5) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1855;
BgL_sstartz00_1855 = 
VECTOR_REF(BgL_opt1292z00_186,((long)3)); 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_sendz00_1856;
BgL_sendz00_1856 = 
VECTOR_REF(BgL_opt1292z00_186,((long)4)); 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_8277;long BgL_auxz00_8268;obj_t BgL_auxz00_8261;
if(
BGL_S32VECTORP(BgL_sourcez00_1847))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8277 = BgL_sourcez00_1847
; }  else 
{ 
obj_t BgL_auxz00_8280;
BgL_auxz00_8280 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3489z00zz__srfi4z00, BGl_string3351z00zz__srfi4z00, BgL_sourcez00_1847); 
FAILURE(BgL_auxz00_8280,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8269;
if(
INTEGERP(BgL_tstartz00_1846))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8269 = BgL_tstartz00_1846
; }  else 
{ 
obj_t BgL_auxz00_8272;
BgL_auxz00_8272 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3489z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1846); 
FAILURE(BgL_auxz00_8272,BFALSE,BFALSE);} 
BgL_auxz00_8268 = 
(long)CINT(BgL_tmpz00_8269); } 
if(
BGL_S32VECTORP(BgL_targetz00_1845))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8261 = BgL_targetz00_1845
; }  else 
{ 
obj_t BgL_auxz00_8264;
BgL_auxz00_8264 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3489z00zz__srfi4z00, BGl_string3351z00zz__srfi4z00, BgL_targetz00_1845); 
FAILURE(BgL_auxz00_8264,BFALSE,BFALSE);} 
return 
BGl_s32vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_8261, BgL_auxz00_8268, BgL_auxz00_8277, BgL_sstartz00_1855, BgL_sendz00_1856);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3487z00zz__srfi4z00, BGl_string3472z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1292z00_186)));} } } } 

}



/* s32vector-copy! */
BGL_EXPORTED_DEF obj_t BGl_s32vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_targetz00_181, long BgL_tstartz00_182, obj_t BgL_sourcez00_183, obj_t BgL_sstartz00_184, obj_t BgL_sendz00_185)
{
{ /* Llib/srfi4.scm 838 */
if(
(BgL_tstartz00_182<((long)0)))
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3488z00zz__srfi4z00, BGl_string3474z00zz__srfi4z00, 
BINT(BgL_tstartz00_182)); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4187z00_8294;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2823;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8295;
if(
INTEGERP(BgL_sstartz00_184))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8295 = BgL_sstartz00_184
; }  else 
{ 
obj_t BgL_auxz00_8298;
BgL_auxz00_8298 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3488z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_184); 
FAILURE(BgL_auxz00_8298,BFALSE,BFALSE);} 
BgL_n1z00_2823 = 
(long)CINT(BgL_tmpz00_8295); } 
BgL_test4187z00_8294 = 
(BgL_n1z00_2823<((long)0)); } 
if(BgL_test4187z00_8294)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3488z00zz__srfi4z00, BGl_string3475z00zz__srfi4z00, BgL_sstartz00_184); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4189z00_8305;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1672z00_1869;
{ /* Llib/srfi4.scm 838 */
long BgL_res2228z00_2826;
BgL_res2228z00_2826 = 
BGL_HVECTOR_LENGTH(BgL_sourcez00_183); 
BgL_arg1672z00_1869 = BgL_res2228z00_2826; } 
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2827;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8307;
if(
INTEGERP(BgL_sendz00_185))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8307 = BgL_sendz00_185
; }  else 
{ 
obj_t BgL_auxz00_8310;
BgL_auxz00_8310 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3488z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_185); 
FAILURE(BgL_auxz00_8310,BFALSE,BFALSE);} 
BgL_n1z00_2827 = 
(long)CINT(BgL_tmpz00_8307); } 
BgL_test4189z00_8305 = 
(BgL_n1z00_2827>BgL_arg1672z00_1869); } } 
if(BgL_test4189z00_8305)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3488z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_185); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4191z00_8317;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2830;long BgL_n2z00_2831;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8318;
if(
INTEGERP(BgL_sendz00_185))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8318 = BgL_sendz00_185
; }  else 
{ 
obj_t BgL_auxz00_8321;
BgL_auxz00_8321 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3488z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_185); 
FAILURE(BgL_auxz00_8321,BFALSE,BFALSE);} 
BgL_n1z00_2830 = 
(long)CINT(BgL_tmpz00_8318); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8326;
if(
INTEGERP(BgL_sstartz00_184))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8326 = BgL_sstartz00_184
; }  else 
{ 
obj_t BgL_auxz00_8329;
BgL_auxz00_8329 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3488z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_184); 
FAILURE(BgL_auxz00_8329,BFALSE,BFALSE);} 
BgL_n2z00_2831 = 
(long)CINT(BgL_tmpz00_8326); } 
BgL_test4191z00_8317 = 
(BgL_n1z00_2830<BgL_n2z00_2831); } 
if(BgL_test4191z00_8317)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3488z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_185); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4194z00_8336;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1668z00_1867;long BgL_arg1669z00_1868;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2833;long BgL_za72za7_2834;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8337;
if(
INTEGERP(BgL_sendz00_185))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8337 = BgL_sendz00_185
; }  else 
{ 
obj_t BgL_auxz00_8340;
BgL_auxz00_8340 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3488z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_185); 
FAILURE(BgL_auxz00_8340,BFALSE,BFALSE);} 
BgL_za71za7_2833 = 
(long)CINT(BgL_tmpz00_8337); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8345;
if(
INTEGERP(BgL_sstartz00_184))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8345 = BgL_sstartz00_184
; }  else 
{ 
obj_t BgL_auxz00_8348;
BgL_auxz00_8348 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3488z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_184); 
FAILURE(BgL_auxz00_8348,BFALSE,BFALSE);} 
BgL_za72za7_2834 = 
(long)CINT(BgL_tmpz00_8345); } 
BgL_arg1668z00_1867 = 
(BgL_za71za7_2833-BgL_za72za7_2834); } 
{ /* Llib/srfi4.scm 838 */
long BgL_res2232z00_2837;
BgL_res2232z00_2837 = 
BGL_HVECTOR_LENGTH(BgL_targetz00_181); 
BgL_arg1669z00_1868 = BgL_res2232z00_2837; } 
BgL_test4194z00_8336 = 
BGl_2ze3ze3zz__r4_numbers_6_5z00(
BINT(BgL_arg1668z00_1867), 
BINT(BgL_arg1669z00_1868)); } 
if(BgL_test4194z00_8336)
{ /* Llib/srfi4.scm 838 */
long BgL_arg1667z00_1866;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2838;long BgL_za72za7_2839;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8358;
if(
INTEGERP(BgL_sendz00_185))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8358 = BgL_sendz00_185
; }  else 
{ 
obj_t BgL_auxz00_8361;
BgL_auxz00_8361 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3488z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_185); 
FAILURE(BgL_auxz00_8361,BFALSE,BFALSE);} 
BgL_za71za7_2838 = 
(long)CINT(BgL_tmpz00_8358); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8366;
if(
INTEGERP(BgL_sstartz00_184))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8366 = BgL_sstartz00_184
; }  else 
{ 
obj_t BgL_auxz00_8369;
BgL_auxz00_8369 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3488z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_184); 
FAILURE(BgL_auxz00_8369,BFALSE,BFALSE);} 
BgL_za72za7_2839 = 
(long)CINT(BgL_tmpz00_8366); } 
BgL_arg1667z00_1866 = 
(BgL_za71za7_2838-BgL_za72za7_2839); } 
BGl_errorz00zz__errorz00(BGl_string3488z00zz__srfi4z00, BGl_string3477z00zz__srfi4z00, 
BINT(BgL_arg1667z00_1866)); }  else 
{ /* Llib/srfi4.scm 838 */BFALSE; } } } } } 
{ /* Llib/srfi4.scm 838 */
long BgL_auxz00_8386;long BgL_tmpz00_8377;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8387;
if(
INTEGERP(BgL_sendz00_185))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8387 = BgL_sendz00_185
; }  else 
{ 
obj_t BgL_auxz00_8390;
BgL_auxz00_8390 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3488z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_185); 
FAILURE(BgL_auxz00_8390,BFALSE,BFALSE);} 
BgL_auxz00_8386 = 
(long)CINT(BgL_tmpz00_8387); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8378;
if(
INTEGERP(BgL_sstartz00_184))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8378 = BgL_sstartz00_184
; }  else 
{ 
obj_t BgL_auxz00_8381;
BgL_auxz00_8381 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3488z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_184); 
FAILURE(BgL_auxz00_8381,BFALSE,BFALSE);} 
BgL_tmpz00_8377 = 
(long)CINT(BgL_tmpz00_8378); } 
BGL_SU32VECTOR_COPY(BgL_targetz00_181, BgL_tstartz00_182, BgL_sourcez00_183, BgL_tmpz00_8377, BgL_auxz00_8386); } 
return BUNSPEC;} 

}



/* _u32vector-copy! */
obj_t BGl__u32vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1297z00_194, obj_t BgL_opt1296z00_193)
{
{ /* Llib/srfi4.scm 838 */
{ /* Llib/srfi4.scm 838 */
obj_t BgL_targetz00_1870;obj_t BgL_tstartz00_1871;obj_t BgL_sourcez00_1872;
BgL_targetz00_1870 = 
VECTOR_REF(BgL_opt1296z00_193,((long)0)); 
BgL_tstartz00_1871 = 
VECTOR_REF(BgL_opt1296z00_193,((long)1)); 
BgL_sourcez00_1872 = 
VECTOR_REF(BgL_opt1296z00_193,((long)2)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1296z00_193)) { case ((long)3) : 

{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1877;
{ /* Llib/srfi4.scm 838 */
long BgL_res2234z00_2842;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2841;
if(
BGL_U32VECTORP(BgL_sourcez00_1872))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2841 = BgL_sourcez00_1872; }  else 
{ 
obj_t BgL_auxz00_8401;
BgL_auxz00_8401 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3492z00zz__srfi4z00, BGl_string3353z00zz__srfi4z00, BgL_sourcez00_1872); 
FAILURE(BgL_auxz00_8401,BFALSE,BFALSE);} 
BgL_res2234z00_2842 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2841); } 
BgL_sendz00_1877 = BgL_res2234z00_2842; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_8422;long BgL_auxz00_8413;obj_t BgL_auxz00_8406;
if(
BGL_U32VECTORP(BgL_sourcez00_1872))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8422 = BgL_sourcez00_1872
; }  else 
{ 
obj_t BgL_auxz00_8425;
BgL_auxz00_8425 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3492z00zz__srfi4z00, BGl_string3353z00zz__srfi4z00, BgL_sourcez00_1872); 
FAILURE(BgL_auxz00_8425,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8414;
if(
INTEGERP(BgL_tstartz00_1871))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8414 = BgL_tstartz00_1871
; }  else 
{ 
obj_t BgL_auxz00_8417;
BgL_auxz00_8417 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3492z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1871); 
FAILURE(BgL_auxz00_8417,BFALSE,BFALSE);} 
BgL_auxz00_8413 = 
(long)CINT(BgL_tmpz00_8414); } 
if(
BGL_U32VECTORP(BgL_targetz00_1870))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8406 = BgL_targetz00_1870
; }  else 
{ 
obj_t BgL_auxz00_8409;
BgL_auxz00_8409 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3492z00zz__srfi4z00, BGl_string3353z00zz__srfi4z00, BgL_targetz00_1870); 
FAILURE(BgL_auxz00_8409,BFALSE,BFALSE);} 
return 
BGl_u32vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_8406, BgL_auxz00_8413, BgL_auxz00_8422, 
BINT(((long)0)), 
BINT(BgL_sendz00_1877));} } } break;case ((long)4) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1878;
BgL_sstartz00_1878 = 
VECTOR_REF(BgL_opt1296z00_193,((long)3)); 
{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1879;
{ /* Llib/srfi4.scm 838 */
long BgL_res2235z00_2844;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2843;
if(
BGL_U32VECTORP(BgL_sourcez00_1872))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2843 = BgL_sourcez00_1872; }  else 
{ 
obj_t BgL_auxz00_8435;
BgL_auxz00_8435 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3492z00zz__srfi4z00, BGl_string3353z00zz__srfi4z00, BgL_sourcez00_1872); 
FAILURE(BgL_auxz00_8435,BFALSE,BFALSE);} 
BgL_res2235z00_2844 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2843); } 
BgL_sendz00_1879 = BgL_res2235z00_2844; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_8456;long BgL_auxz00_8447;obj_t BgL_auxz00_8440;
if(
BGL_U32VECTORP(BgL_sourcez00_1872))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8456 = BgL_sourcez00_1872
; }  else 
{ 
obj_t BgL_auxz00_8459;
BgL_auxz00_8459 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3492z00zz__srfi4z00, BGl_string3353z00zz__srfi4z00, BgL_sourcez00_1872); 
FAILURE(BgL_auxz00_8459,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8448;
if(
INTEGERP(BgL_tstartz00_1871))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8448 = BgL_tstartz00_1871
; }  else 
{ 
obj_t BgL_auxz00_8451;
BgL_auxz00_8451 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3492z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1871); 
FAILURE(BgL_auxz00_8451,BFALSE,BFALSE);} 
BgL_auxz00_8447 = 
(long)CINT(BgL_tmpz00_8448); } 
if(
BGL_U32VECTORP(BgL_targetz00_1870))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8440 = BgL_targetz00_1870
; }  else 
{ 
obj_t BgL_auxz00_8443;
BgL_auxz00_8443 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3492z00zz__srfi4z00, BGl_string3353z00zz__srfi4z00, BgL_targetz00_1870); 
FAILURE(BgL_auxz00_8443,BFALSE,BFALSE);} 
return 
BGl_u32vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_8440, BgL_auxz00_8447, BgL_auxz00_8456, BgL_sstartz00_1878, 
BINT(BgL_sendz00_1879));} } } } break;case ((long)5) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1880;
BgL_sstartz00_1880 = 
VECTOR_REF(BgL_opt1296z00_193,((long)3)); 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_sendz00_1881;
BgL_sendz00_1881 = 
VECTOR_REF(BgL_opt1296z00_193,((long)4)); 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_8483;long BgL_auxz00_8474;obj_t BgL_auxz00_8467;
if(
BGL_U32VECTORP(BgL_sourcez00_1872))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8483 = BgL_sourcez00_1872
; }  else 
{ 
obj_t BgL_auxz00_8486;
BgL_auxz00_8486 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3492z00zz__srfi4z00, BGl_string3353z00zz__srfi4z00, BgL_sourcez00_1872); 
FAILURE(BgL_auxz00_8486,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8475;
if(
INTEGERP(BgL_tstartz00_1871))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8475 = BgL_tstartz00_1871
; }  else 
{ 
obj_t BgL_auxz00_8478;
BgL_auxz00_8478 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3492z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1871); 
FAILURE(BgL_auxz00_8478,BFALSE,BFALSE);} 
BgL_auxz00_8474 = 
(long)CINT(BgL_tmpz00_8475); } 
if(
BGL_U32VECTORP(BgL_targetz00_1870))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8467 = BgL_targetz00_1870
; }  else 
{ 
obj_t BgL_auxz00_8470;
BgL_auxz00_8470 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3492z00zz__srfi4z00, BGl_string3353z00zz__srfi4z00, BgL_targetz00_1870); 
FAILURE(BgL_auxz00_8470,BFALSE,BFALSE);} 
return 
BGl_u32vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_8467, BgL_auxz00_8474, BgL_auxz00_8483, BgL_sstartz00_1880, BgL_sendz00_1881);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3490z00zz__srfi4z00, BGl_string3472z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1296z00_193)));} } } } 

}



/* u32vector-copy! */
BGL_EXPORTED_DEF obj_t BGl_u32vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_targetz00_188, long BgL_tstartz00_189, obj_t BgL_sourcez00_190, obj_t BgL_sstartz00_191, obj_t BgL_sendz00_192)
{
{ /* Llib/srfi4.scm 838 */
if(
(BgL_tstartz00_189<((long)0)))
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3491z00zz__srfi4z00, BGl_string3474z00zz__srfi4z00, 
BINT(BgL_tstartz00_189)); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4213z00_8500;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2847;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8501;
if(
INTEGERP(BgL_sstartz00_191))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8501 = BgL_sstartz00_191
; }  else 
{ 
obj_t BgL_auxz00_8504;
BgL_auxz00_8504 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3491z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_191); 
FAILURE(BgL_auxz00_8504,BFALSE,BFALSE);} 
BgL_n1z00_2847 = 
(long)CINT(BgL_tmpz00_8501); } 
BgL_test4213z00_8500 = 
(BgL_n1z00_2847<((long)0)); } 
if(BgL_test4213z00_8500)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3491z00zz__srfi4z00, BGl_string3475z00zz__srfi4z00, BgL_sstartz00_191); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4215z00_8511;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1695z00_1894;
{ /* Llib/srfi4.scm 838 */
long BgL_res2238z00_2850;
BgL_res2238z00_2850 = 
BGL_HVECTOR_LENGTH(BgL_sourcez00_190); 
BgL_arg1695z00_1894 = BgL_res2238z00_2850; } 
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2851;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8513;
if(
INTEGERP(BgL_sendz00_192))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8513 = BgL_sendz00_192
; }  else 
{ 
obj_t BgL_auxz00_8516;
BgL_auxz00_8516 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3491z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_192); 
FAILURE(BgL_auxz00_8516,BFALSE,BFALSE);} 
BgL_n1z00_2851 = 
(long)CINT(BgL_tmpz00_8513); } 
BgL_test4215z00_8511 = 
(BgL_n1z00_2851>BgL_arg1695z00_1894); } } 
if(BgL_test4215z00_8511)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3491z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_192); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4217z00_8523;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2854;long BgL_n2z00_2855;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8524;
if(
INTEGERP(BgL_sendz00_192))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8524 = BgL_sendz00_192
; }  else 
{ 
obj_t BgL_auxz00_8527;
BgL_auxz00_8527 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3491z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_192); 
FAILURE(BgL_auxz00_8527,BFALSE,BFALSE);} 
BgL_n1z00_2854 = 
(long)CINT(BgL_tmpz00_8524); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8532;
if(
INTEGERP(BgL_sstartz00_191))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8532 = BgL_sstartz00_191
; }  else 
{ 
obj_t BgL_auxz00_8535;
BgL_auxz00_8535 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3491z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_191); 
FAILURE(BgL_auxz00_8535,BFALSE,BFALSE);} 
BgL_n2z00_2855 = 
(long)CINT(BgL_tmpz00_8532); } 
BgL_test4217z00_8523 = 
(BgL_n1z00_2854<BgL_n2z00_2855); } 
if(BgL_test4217z00_8523)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3491z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_192); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4220z00_8542;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1692z00_1892;long BgL_arg1693z00_1893;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2857;long BgL_za72za7_2858;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8543;
if(
INTEGERP(BgL_sendz00_192))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8543 = BgL_sendz00_192
; }  else 
{ 
obj_t BgL_auxz00_8546;
BgL_auxz00_8546 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3491z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_192); 
FAILURE(BgL_auxz00_8546,BFALSE,BFALSE);} 
BgL_za71za7_2857 = 
(long)CINT(BgL_tmpz00_8543); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8551;
if(
INTEGERP(BgL_sstartz00_191))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8551 = BgL_sstartz00_191
; }  else 
{ 
obj_t BgL_auxz00_8554;
BgL_auxz00_8554 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3491z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_191); 
FAILURE(BgL_auxz00_8554,BFALSE,BFALSE);} 
BgL_za72za7_2858 = 
(long)CINT(BgL_tmpz00_8551); } 
BgL_arg1692z00_1892 = 
(BgL_za71za7_2857-BgL_za72za7_2858); } 
{ /* Llib/srfi4.scm 838 */
long BgL_res2242z00_2861;
BgL_res2242z00_2861 = 
BGL_HVECTOR_LENGTH(BgL_targetz00_188); 
BgL_arg1693z00_1893 = BgL_res2242z00_2861; } 
BgL_test4220z00_8542 = 
BGl_2ze3ze3zz__r4_numbers_6_5z00(
BINT(BgL_arg1692z00_1892), 
BINT(BgL_arg1693z00_1893)); } 
if(BgL_test4220z00_8542)
{ /* Llib/srfi4.scm 838 */
long BgL_arg1691z00_1891;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2862;long BgL_za72za7_2863;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8564;
if(
INTEGERP(BgL_sendz00_192))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8564 = BgL_sendz00_192
; }  else 
{ 
obj_t BgL_auxz00_8567;
BgL_auxz00_8567 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3491z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_192); 
FAILURE(BgL_auxz00_8567,BFALSE,BFALSE);} 
BgL_za71za7_2862 = 
(long)CINT(BgL_tmpz00_8564); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8572;
if(
INTEGERP(BgL_sstartz00_191))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8572 = BgL_sstartz00_191
; }  else 
{ 
obj_t BgL_auxz00_8575;
BgL_auxz00_8575 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3491z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_191); 
FAILURE(BgL_auxz00_8575,BFALSE,BFALSE);} 
BgL_za72za7_2863 = 
(long)CINT(BgL_tmpz00_8572); } 
BgL_arg1691z00_1891 = 
(BgL_za71za7_2862-BgL_za72za7_2863); } 
BGl_errorz00zz__errorz00(BGl_string3491z00zz__srfi4z00, BGl_string3477z00zz__srfi4z00, 
BINT(BgL_arg1691z00_1891)); }  else 
{ /* Llib/srfi4.scm 838 */BFALSE; } } } } } 
{ /* Llib/srfi4.scm 838 */
long BgL_auxz00_8592;long BgL_tmpz00_8583;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8593;
if(
INTEGERP(BgL_sendz00_192))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8593 = BgL_sendz00_192
; }  else 
{ 
obj_t BgL_auxz00_8596;
BgL_auxz00_8596 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3491z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_192); 
FAILURE(BgL_auxz00_8596,BFALSE,BFALSE);} 
BgL_auxz00_8592 = 
(long)CINT(BgL_tmpz00_8593); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8584;
if(
INTEGERP(BgL_sstartz00_191))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8584 = BgL_sstartz00_191
; }  else 
{ 
obj_t BgL_auxz00_8587;
BgL_auxz00_8587 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3491z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_191); 
FAILURE(BgL_auxz00_8587,BFALSE,BFALSE);} 
BgL_tmpz00_8583 = 
(long)CINT(BgL_tmpz00_8584); } 
BGL_SU32VECTOR_COPY(BgL_targetz00_188, BgL_tstartz00_189, BgL_sourcez00_190, BgL_tmpz00_8583, BgL_auxz00_8592); } 
return BUNSPEC;} 

}



/* _s64vector-copy! */
obj_t BGl__s64vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1301z00_201, obj_t BgL_opt1300z00_200)
{
{ /* Llib/srfi4.scm 838 */
{ /* Llib/srfi4.scm 838 */
obj_t BgL_targetz00_1895;obj_t BgL_tstartz00_1896;obj_t BgL_sourcez00_1897;
BgL_targetz00_1895 = 
VECTOR_REF(BgL_opt1300z00_200,((long)0)); 
BgL_tstartz00_1896 = 
VECTOR_REF(BgL_opt1300z00_200,((long)1)); 
BgL_sourcez00_1897 = 
VECTOR_REF(BgL_opt1300z00_200,((long)2)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1300z00_200)) { case ((long)3) : 

{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1902;
{ /* Llib/srfi4.scm 838 */
long BgL_res2244z00_2866;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2865;
if(
BGL_S64VECTORP(BgL_sourcez00_1897))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2865 = BgL_sourcez00_1897; }  else 
{ 
obj_t BgL_auxz00_8607;
BgL_auxz00_8607 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3495z00zz__srfi4z00, BGl_string3355z00zz__srfi4z00, BgL_sourcez00_1897); 
FAILURE(BgL_auxz00_8607,BFALSE,BFALSE);} 
BgL_res2244z00_2866 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2865); } 
BgL_sendz00_1902 = BgL_res2244z00_2866; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_8628;long BgL_auxz00_8619;obj_t BgL_auxz00_8612;
if(
BGL_S64VECTORP(BgL_sourcez00_1897))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8628 = BgL_sourcez00_1897
; }  else 
{ 
obj_t BgL_auxz00_8631;
BgL_auxz00_8631 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3495z00zz__srfi4z00, BGl_string3355z00zz__srfi4z00, BgL_sourcez00_1897); 
FAILURE(BgL_auxz00_8631,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8620;
if(
INTEGERP(BgL_tstartz00_1896))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8620 = BgL_tstartz00_1896
; }  else 
{ 
obj_t BgL_auxz00_8623;
BgL_auxz00_8623 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3495z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1896); 
FAILURE(BgL_auxz00_8623,BFALSE,BFALSE);} 
BgL_auxz00_8619 = 
(long)CINT(BgL_tmpz00_8620); } 
if(
BGL_S64VECTORP(BgL_targetz00_1895))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8612 = BgL_targetz00_1895
; }  else 
{ 
obj_t BgL_auxz00_8615;
BgL_auxz00_8615 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3495z00zz__srfi4z00, BGl_string3355z00zz__srfi4z00, BgL_targetz00_1895); 
FAILURE(BgL_auxz00_8615,BFALSE,BFALSE);} 
return 
BGl_s64vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_8612, BgL_auxz00_8619, BgL_auxz00_8628, 
BINT(((long)0)), 
BINT(BgL_sendz00_1902));} } } break;case ((long)4) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1903;
BgL_sstartz00_1903 = 
VECTOR_REF(BgL_opt1300z00_200,((long)3)); 
{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1904;
{ /* Llib/srfi4.scm 838 */
long BgL_res2245z00_2868;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2867;
if(
BGL_S64VECTORP(BgL_sourcez00_1897))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2867 = BgL_sourcez00_1897; }  else 
{ 
obj_t BgL_auxz00_8641;
BgL_auxz00_8641 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3495z00zz__srfi4z00, BGl_string3355z00zz__srfi4z00, BgL_sourcez00_1897); 
FAILURE(BgL_auxz00_8641,BFALSE,BFALSE);} 
BgL_res2245z00_2868 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2867); } 
BgL_sendz00_1904 = BgL_res2245z00_2868; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_8662;long BgL_auxz00_8653;obj_t BgL_auxz00_8646;
if(
BGL_S64VECTORP(BgL_sourcez00_1897))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8662 = BgL_sourcez00_1897
; }  else 
{ 
obj_t BgL_auxz00_8665;
BgL_auxz00_8665 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3495z00zz__srfi4z00, BGl_string3355z00zz__srfi4z00, BgL_sourcez00_1897); 
FAILURE(BgL_auxz00_8665,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8654;
if(
INTEGERP(BgL_tstartz00_1896))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8654 = BgL_tstartz00_1896
; }  else 
{ 
obj_t BgL_auxz00_8657;
BgL_auxz00_8657 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3495z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1896); 
FAILURE(BgL_auxz00_8657,BFALSE,BFALSE);} 
BgL_auxz00_8653 = 
(long)CINT(BgL_tmpz00_8654); } 
if(
BGL_S64VECTORP(BgL_targetz00_1895))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8646 = BgL_targetz00_1895
; }  else 
{ 
obj_t BgL_auxz00_8649;
BgL_auxz00_8649 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3495z00zz__srfi4z00, BGl_string3355z00zz__srfi4z00, BgL_targetz00_1895); 
FAILURE(BgL_auxz00_8649,BFALSE,BFALSE);} 
return 
BGl_s64vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_8646, BgL_auxz00_8653, BgL_auxz00_8662, BgL_sstartz00_1903, 
BINT(BgL_sendz00_1904));} } } } break;case ((long)5) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1905;
BgL_sstartz00_1905 = 
VECTOR_REF(BgL_opt1300z00_200,((long)3)); 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_sendz00_1906;
BgL_sendz00_1906 = 
VECTOR_REF(BgL_opt1300z00_200,((long)4)); 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_8689;long BgL_auxz00_8680;obj_t BgL_auxz00_8673;
if(
BGL_S64VECTORP(BgL_sourcez00_1897))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8689 = BgL_sourcez00_1897
; }  else 
{ 
obj_t BgL_auxz00_8692;
BgL_auxz00_8692 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3495z00zz__srfi4z00, BGl_string3355z00zz__srfi4z00, BgL_sourcez00_1897); 
FAILURE(BgL_auxz00_8692,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8681;
if(
INTEGERP(BgL_tstartz00_1896))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8681 = BgL_tstartz00_1896
; }  else 
{ 
obj_t BgL_auxz00_8684;
BgL_auxz00_8684 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3495z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1896); 
FAILURE(BgL_auxz00_8684,BFALSE,BFALSE);} 
BgL_auxz00_8680 = 
(long)CINT(BgL_tmpz00_8681); } 
if(
BGL_S64VECTORP(BgL_targetz00_1895))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8673 = BgL_targetz00_1895
; }  else 
{ 
obj_t BgL_auxz00_8676;
BgL_auxz00_8676 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3495z00zz__srfi4z00, BGl_string3355z00zz__srfi4z00, BgL_targetz00_1895); 
FAILURE(BgL_auxz00_8676,BFALSE,BFALSE);} 
return 
BGl_s64vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_8673, BgL_auxz00_8680, BgL_auxz00_8689, BgL_sstartz00_1905, BgL_sendz00_1906);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3493z00zz__srfi4z00, BGl_string3472z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1300z00_200)));} } } } 

}



/* s64vector-copy! */
BGL_EXPORTED_DEF obj_t BGl_s64vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_targetz00_195, long BgL_tstartz00_196, obj_t BgL_sourcez00_197, obj_t BgL_sstartz00_198, obj_t BgL_sendz00_199)
{
{ /* Llib/srfi4.scm 838 */
if(
(BgL_tstartz00_196<((long)0)))
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3494z00zz__srfi4z00, BGl_string3474z00zz__srfi4z00, 
BINT(BgL_tstartz00_196)); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4239z00_8706;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2871;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8707;
if(
INTEGERP(BgL_sstartz00_198))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8707 = BgL_sstartz00_198
; }  else 
{ 
obj_t BgL_auxz00_8710;
BgL_auxz00_8710 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3494z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_198); 
FAILURE(BgL_auxz00_8710,BFALSE,BFALSE);} 
BgL_n1z00_2871 = 
(long)CINT(BgL_tmpz00_8707); } 
BgL_test4239z00_8706 = 
(BgL_n1z00_2871<((long)0)); } 
if(BgL_test4239z00_8706)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3494z00zz__srfi4z00, BGl_string3475z00zz__srfi4z00, BgL_sstartz00_198); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4241z00_8717;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1712z00_1919;
{ /* Llib/srfi4.scm 838 */
long BgL_res2248z00_2874;
BgL_res2248z00_2874 = 
BGL_HVECTOR_LENGTH(BgL_sourcez00_197); 
BgL_arg1712z00_1919 = BgL_res2248z00_2874; } 
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2875;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8719;
if(
INTEGERP(BgL_sendz00_199))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8719 = BgL_sendz00_199
; }  else 
{ 
obj_t BgL_auxz00_8722;
BgL_auxz00_8722 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3494z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_199); 
FAILURE(BgL_auxz00_8722,BFALSE,BFALSE);} 
BgL_n1z00_2875 = 
(long)CINT(BgL_tmpz00_8719); } 
BgL_test4241z00_8717 = 
(BgL_n1z00_2875>BgL_arg1712z00_1919); } } 
if(BgL_test4241z00_8717)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3494z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_199); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4243z00_8729;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2878;long BgL_n2z00_2879;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8730;
if(
INTEGERP(BgL_sendz00_199))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8730 = BgL_sendz00_199
; }  else 
{ 
obj_t BgL_auxz00_8733;
BgL_auxz00_8733 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3494z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_199); 
FAILURE(BgL_auxz00_8733,BFALSE,BFALSE);} 
BgL_n1z00_2878 = 
(long)CINT(BgL_tmpz00_8730); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8738;
if(
INTEGERP(BgL_sstartz00_198))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8738 = BgL_sstartz00_198
; }  else 
{ 
obj_t BgL_auxz00_8741;
BgL_auxz00_8741 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3494z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_198); 
FAILURE(BgL_auxz00_8741,BFALSE,BFALSE);} 
BgL_n2z00_2879 = 
(long)CINT(BgL_tmpz00_8738); } 
BgL_test4243z00_8729 = 
(BgL_n1z00_2878<BgL_n2z00_2879); } 
if(BgL_test4243z00_8729)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3494z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_199); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4246z00_8748;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1710z00_1917;long BgL_arg1711z00_1918;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2881;long BgL_za72za7_2882;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8749;
if(
INTEGERP(BgL_sendz00_199))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8749 = BgL_sendz00_199
; }  else 
{ 
obj_t BgL_auxz00_8752;
BgL_auxz00_8752 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3494z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_199); 
FAILURE(BgL_auxz00_8752,BFALSE,BFALSE);} 
BgL_za71za7_2881 = 
(long)CINT(BgL_tmpz00_8749); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8757;
if(
INTEGERP(BgL_sstartz00_198))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8757 = BgL_sstartz00_198
; }  else 
{ 
obj_t BgL_auxz00_8760;
BgL_auxz00_8760 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3494z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_198); 
FAILURE(BgL_auxz00_8760,BFALSE,BFALSE);} 
BgL_za72za7_2882 = 
(long)CINT(BgL_tmpz00_8757); } 
BgL_arg1710z00_1917 = 
(BgL_za71za7_2881-BgL_za72za7_2882); } 
{ /* Llib/srfi4.scm 838 */
long BgL_res2252z00_2885;
BgL_res2252z00_2885 = 
BGL_HVECTOR_LENGTH(BgL_targetz00_195); 
BgL_arg1711z00_1918 = BgL_res2252z00_2885; } 
BgL_test4246z00_8748 = 
BGl_2ze3ze3zz__r4_numbers_6_5z00(
BINT(BgL_arg1710z00_1917), 
BINT(BgL_arg1711z00_1918)); } 
if(BgL_test4246z00_8748)
{ /* Llib/srfi4.scm 838 */
long BgL_arg1709z00_1916;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2886;long BgL_za72za7_2887;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8770;
if(
INTEGERP(BgL_sendz00_199))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8770 = BgL_sendz00_199
; }  else 
{ 
obj_t BgL_auxz00_8773;
BgL_auxz00_8773 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3494z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_199); 
FAILURE(BgL_auxz00_8773,BFALSE,BFALSE);} 
BgL_za71za7_2886 = 
(long)CINT(BgL_tmpz00_8770); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8778;
if(
INTEGERP(BgL_sstartz00_198))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8778 = BgL_sstartz00_198
; }  else 
{ 
obj_t BgL_auxz00_8781;
BgL_auxz00_8781 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3494z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_198); 
FAILURE(BgL_auxz00_8781,BFALSE,BFALSE);} 
BgL_za72za7_2887 = 
(long)CINT(BgL_tmpz00_8778); } 
BgL_arg1709z00_1916 = 
(BgL_za71za7_2886-BgL_za72za7_2887); } 
BGl_errorz00zz__errorz00(BGl_string3494z00zz__srfi4z00, BGl_string3477z00zz__srfi4z00, 
BINT(BgL_arg1709z00_1916)); }  else 
{ /* Llib/srfi4.scm 838 */BFALSE; } } } } } 
{ /* Llib/srfi4.scm 838 */
long BgL_auxz00_8798;long BgL_tmpz00_8789;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8799;
if(
INTEGERP(BgL_sendz00_199))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8799 = BgL_sendz00_199
; }  else 
{ 
obj_t BgL_auxz00_8802;
BgL_auxz00_8802 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3494z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_199); 
FAILURE(BgL_auxz00_8802,BFALSE,BFALSE);} 
BgL_auxz00_8798 = 
(long)CINT(BgL_tmpz00_8799); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8790;
if(
INTEGERP(BgL_sstartz00_198))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8790 = BgL_sstartz00_198
; }  else 
{ 
obj_t BgL_auxz00_8793;
BgL_auxz00_8793 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3494z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_198); 
FAILURE(BgL_auxz00_8793,BFALSE,BFALSE);} 
BgL_tmpz00_8789 = 
(long)CINT(BgL_tmpz00_8790); } 
BGL_SU64VECTOR_COPY(BgL_targetz00_195, BgL_tstartz00_196, BgL_sourcez00_197, BgL_tmpz00_8789, BgL_auxz00_8798); } 
return BUNSPEC;} 

}



/* _u64vector-copy! */
obj_t BGl__u64vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1305z00_208, obj_t BgL_opt1304z00_207)
{
{ /* Llib/srfi4.scm 838 */
{ /* Llib/srfi4.scm 838 */
obj_t BgL_targetz00_1920;obj_t BgL_tstartz00_1921;obj_t BgL_sourcez00_1922;
BgL_targetz00_1920 = 
VECTOR_REF(BgL_opt1304z00_207,((long)0)); 
BgL_tstartz00_1921 = 
VECTOR_REF(BgL_opt1304z00_207,((long)1)); 
BgL_sourcez00_1922 = 
VECTOR_REF(BgL_opt1304z00_207,((long)2)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1304z00_207)) { case ((long)3) : 

{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1927;
{ /* Llib/srfi4.scm 838 */
long BgL_res2254z00_2890;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2889;
if(
BGL_U64VECTORP(BgL_sourcez00_1922))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2889 = BgL_sourcez00_1922; }  else 
{ 
obj_t BgL_auxz00_8813;
BgL_auxz00_8813 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3498z00zz__srfi4z00, BGl_string3357z00zz__srfi4z00, BgL_sourcez00_1922); 
FAILURE(BgL_auxz00_8813,BFALSE,BFALSE);} 
BgL_res2254z00_2890 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2889); } 
BgL_sendz00_1927 = BgL_res2254z00_2890; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_8834;long BgL_auxz00_8825;obj_t BgL_auxz00_8818;
if(
BGL_U64VECTORP(BgL_sourcez00_1922))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8834 = BgL_sourcez00_1922
; }  else 
{ 
obj_t BgL_auxz00_8837;
BgL_auxz00_8837 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3498z00zz__srfi4z00, BGl_string3357z00zz__srfi4z00, BgL_sourcez00_1922); 
FAILURE(BgL_auxz00_8837,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8826;
if(
INTEGERP(BgL_tstartz00_1921))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8826 = BgL_tstartz00_1921
; }  else 
{ 
obj_t BgL_auxz00_8829;
BgL_auxz00_8829 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3498z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1921); 
FAILURE(BgL_auxz00_8829,BFALSE,BFALSE);} 
BgL_auxz00_8825 = 
(long)CINT(BgL_tmpz00_8826); } 
if(
BGL_U64VECTORP(BgL_targetz00_1920))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8818 = BgL_targetz00_1920
; }  else 
{ 
obj_t BgL_auxz00_8821;
BgL_auxz00_8821 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3498z00zz__srfi4z00, BGl_string3357z00zz__srfi4z00, BgL_targetz00_1920); 
FAILURE(BgL_auxz00_8821,BFALSE,BFALSE);} 
return 
BGl_u64vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_8818, BgL_auxz00_8825, BgL_auxz00_8834, 
BINT(((long)0)), 
BINT(BgL_sendz00_1927));} } } break;case ((long)4) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1928;
BgL_sstartz00_1928 = 
VECTOR_REF(BgL_opt1304z00_207,((long)3)); 
{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1929;
{ /* Llib/srfi4.scm 838 */
long BgL_res2255z00_2892;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2891;
if(
BGL_U64VECTORP(BgL_sourcez00_1922))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2891 = BgL_sourcez00_1922; }  else 
{ 
obj_t BgL_auxz00_8847;
BgL_auxz00_8847 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3498z00zz__srfi4z00, BGl_string3357z00zz__srfi4z00, BgL_sourcez00_1922); 
FAILURE(BgL_auxz00_8847,BFALSE,BFALSE);} 
BgL_res2255z00_2892 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2891); } 
BgL_sendz00_1929 = BgL_res2255z00_2892; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_8868;long BgL_auxz00_8859;obj_t BgL_auxz00_8852;
if(
BGL_U64VECTORP(BgL_sourcez00_1922))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8868 = BgL_sourcez00_1922
; }  else 
{ 
obj_t BgL_auxz00_8871;
BgL_auxz00_8871 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3498z00zz__srfi4z00, BGl_string3357z00zz__srfi4z00, BgL_sourcez00_1922); 
FAILURE(BgL_auxz00_8871,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8860;
if(
INTEGERP(BgL_tstartz00_1921))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8860 = BgL_tstartz00_1921
; }  else 
{ 
obj_t BgL_auxz00_8863;
BgL_auxz00_8863 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3498z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1921); 
FAILURE(BgL_auxz00_8863,BFALSE,BFALSE);} 
BgL_auxz00_8859 = 
(long)CINT(BgL_tmpz00_8860); } 
if(
BGL_U64VECTORP(BgL_targetz00_1920))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8852 = BgL_targetz00_1920
; }  else 
{ 
obj_t BgL_auxz00_8855;
BgL_auxz00_8855 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3498z00zz__srfi4z00, BGl_string3357z00zz__srfi4z00, BgL_targetz00_1920); 
FAILURE(BgL_auxz00_8855,BFALSE,BFALSE);} 
return 
BGl_u64vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_8852, BgL_auxz00_8859, BgL_auxz00_8868, BgL_sstartz00_1928, 
BINT(BgL_sendz00_1929));} } } } break;case ((long)5) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1930;
BgL_sstartz00_1930 = 
VECTOR_REF(BgL_opt1304z00_207,((long)3)); 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_sendz00_1931;
BgL_sendz00_1931 = 
VECTOR_REF(BgL_opt1304z00_207,((long)4)); 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_8895;long BgL_auxz00_8886;obj_t BgL_auxz00_8879;
if(
BGL_U64VECTORP(BgL_sourcez00_1922))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8895 = BgL_sourcez00_1922
; }  else 
{ 
obj_t BgL_auxz00_8898;
BgL_auxz00_8898 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3498z00zz__srfi4z00, BGl_string3357z00zz__srfi4z00, BgL_sourcez00_1922); 
FAILURE(BgL_auxz00_8898,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8887;
if(
INTEGERP(BgL_tstartz00_1921))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8887 = BgL_tstartz00_1921
; }  else 
{ 
obj_t BgL_auxz00_8890;
BgL_auxz00_8890 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3498z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1921); 
FAILURE(BgL_auxz00_8890,BFALSE,BFALSE);} 
BgL_auxz00_8886 = 
(long)CINT(BgL_tmpz00_8887); } 
if(
BGL_U64VECTORP(BgL_targetz00_1920))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_8879 = BgL_targetz00_1920
; }  else 
{ 
obj_t BgL_auxz00_8882;
BgL_auxz00_8882 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3498z00zz__srfi4z00, BGl_string3357z00zz__srfi4z00, BgL_targetz00_1920); 
FAILURE(BgL_auxz00_8882,BFALSE,BFALSE);} 
return 
BGl_u64vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_8879, BgL_auxz00_8886, BgL_auxz00_8895, BgL_sstartz00_1930, BgL_sendz00_1931);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3496z00zz__srfi4z00, BGl_string3472z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1304z00_207)));} } } } 

}



/* u64vector-copy! */
BGL_EXPORTED_DEF obj_t BGl_u64vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_targetz00_202, long BgL_tstartz00_203, obj_t BgL_sourcez00_204, obj_t BgL_sstartz00_205, obj_t BgL_sendz00_206)
{
{ /* Llib/srfi4.scm 838 */
if(
(BgL_tstartz00_203<((long)0)))
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3497z00zz__srfi4z00, BGl_string3474z00zz__srfi4z00, 
BINT(BgL_tstartz00_203)); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4265z00_8912;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2895;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8913;
if(
INTEGERP(BgL_sstartz00_205))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8913 = BgL_sstartz00_205
; }  else 
{ 
obj_t BgL_auxz00_8916;
BgL_auxz00_8916 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3497z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_205); 
FAILURE(BgL_auxz00_8916,BFALSE,BFALSE);} 
BgL_n1z00_2895 = 
(long)CINT(BgL_tmpz00_8913); } 
BgL_test4265z00_8912 = 
(BgL_n1z00_2895<((long)0)); } 
if(BgL_test4265z00_8912)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3497z00zz__srfi4z00, BGl_string3475z00zz__srfi4z00, BgL_sstartz00_205); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4267z00_8923;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1730z00_1944;
{ /* Llib/srfi4.scm 838 */
long BgL_res2258z00_2898;
BgL_res2258z00_2898 = 
BGL_HVECTOR_LENGTH(BgL_sourcez00_204); 
BgL_arg1730z00_1944 = BgL_res2258z00_2898; } 
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2899;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8925;
if(
INTEGERP(BgL_sendz00_206))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8925 = BgL_sendz00_206
; }  else 
{ 
obj_t BgL_auxz00_8928;
BgL_auxz00_8928 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3497z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_206); 
FAILURE(BgL_auxz00_8928,BFALSE,BFALSE);} 
BgL_n1z00_2899 = 
(long)CINT(BgL_tmpz00_8925); } 
BgL_test4267z00_8923 = 
(BgL_n1z00_2899>BgL_arg1730z00_1944); } } 
if(BgL_test4267z00_8923)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3497z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_206); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4269z00_8935;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2902;long BgL_n2z00_2903;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8936;
if(
INTEGERP(BgL_sendz00_206))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8936 = BgL_sendz00_206
; }  else 
{ 
obj_t BgL_auxz00_8939;
BgL_auxz00_8939 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3497z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_206); 
FAILURE(BgL_auxz00_8939,BFALSE,BFALSE);} 
BgL_n1z00_2902 = 
(long)CINT(BgL_tmpz00_8936); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8944;
if(
INTEGERP(BgL_sstartz00_205))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8944 = BgL_sstartz00_205
; }  else 
{ 
obj_t BgL_auxz00_8947;
BgL_auxz00_8947 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3497z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_205); 
FAILURE(BgL_auxz00_8947,BFALSE,BFALSE);} 
BgL_n2z00_2903 = 
(long)CINT(BgL_tmpz00_8944); } 
BgL_test4269z00_8935 = 
(BgL_n1z00_2902<BgL_n2z00_2903); } 
if(BgL_test4269z00_8935)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3497z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_206); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4272z00_8954;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1728z00_1942;long BgL_arg1729z00_1943;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2905;long BgL_za72za7_2906;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8955;
if(
INTEGERP(BgL_sendz00_206))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8955 = BgL_sendz00_206
; }  else 
{ 
obj_t BgL_auxz00_8958;
BgL_auxz00_8958 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3497z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_206); 
FAILURE(BgL_auxz00_8958,BFALSE,BFALSE);} 
BgL_za71za7_2905 = 
(long)CINT(BgL_tmpz00_8955); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8963;
if(
INTEGERP(BgL_sstartz00_205))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8963 = BgL_sstartz00_205
; }  else 
{ 
obj_t BgL_auxz00_8966;
BgL_auxz00_8966 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3497z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_205); 
FAILURE(BgL_auxz00_8966,BFALSE,BFALSE);} 
BgL_za72za7_2906 = 
(long)CINT(BgL_tmpz00_8963); } 
BgL_arg1728z00_1942 = 
(BgL_za71za7_2905-BgL_za72za7_2906); } 
{ /* Llib/srfi4.scm 838 */
long BgL_res2262z00_2909;
BgL_res2262z00_2909 = 
BGL_HVECTOR_LENGTH(BgL_targetz00_202); 
BgL_arg1729z00_1943 = BgL_res2262z00_2909; } 
BgL_test4272z00_8954 = 
BGl_2ze3ze3zz__r4_numbers_6_5z00(
BINT(BgL_arg1728z00_1942), 
BINT(BgL_arg1729z00_1943)); } 
if(BgL_test4272z00_8954)
{ /* Llib/srfi4.scm 838 */
long BgL_arg1727z00_1941;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2910;long BgL_za72za7_2911;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8976;
if(
INTEGERP(BgL_sendz00_206))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8976 = BgL_sendz00_206
; }  else 
{ 
obj_t BgL_auxz00_8979;
BgL_auxz00_8979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3497z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_206); 
FAILURE(BgL_auxz00_8979,BFALSE,BFALSE);} 
BgL_za71za7_2910 = 
(long)CINT(BgL_tmpz00_8976); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8984;
if(
INTEGERP(BgL_sstartz00_205))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8984 = BgL_sstartz00_205
; }  else 
{ 
obj_t BgL_auxz00_8987;
BgL_auxz00_8987 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3497z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_205); 
FAILURE(BgL_auxz00_8987,BFALSE,BFALSE);} 
BgL_za72za7_2911 = 
(long)CINT(BgL_tmpz00_8984); } 
BgL_arg1727z00_1941 = 
(BgL_za71za7_2910-BgL_za72za7_2911); } 
BGl_errorz00zz__errorz00(BGl_string3497z00zz__srfi4z00, BGl_string3477z00zz__srfi4z00, 
BINT(BgL_arg1727z00_1941)); }  else 
{ /* Llib/srfi4.scm 838 */BFALSE; } } } } } 
{ /* Llib/srfi4.scm 838 */
long BgL_auxz00_9004;long BgL_tmpz00_8995;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9005;
if(
INTEGERP(BgL_sendz00_206))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9005 = BgL_sendz00_206
; }  else 
{ 
obj_t BgL_auxz00_9008;
BgL_auxz00_9008 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3497z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_206); 
FAILURE(BgL_auxz00_9008,BFALSE,BFALSE);} 
BgL_auxz00_9004 = 
(long)CINT(BgL_tmpz00_9005); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_8996;
if(
INTEGERP(BgL_sstartz00_205))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_8996 = BgL_sstartz00_205
; }  else 
{ 
obj_t BgL_auxz00_8999;
BgL_auxz00_8999 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3497z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_205); 
FAILURE(BgL_auxz00_8999,BFALSE,BFALSE);} 
BgL_tmpz00_8995 = 
(long)CINT(BgL_tmpz00_8996); } 
BGL_SU64VECTOR_COPY(BgL_targetz00_202, BgL_tstartz00_203, BgL_sourcez00_204, BgL_tmpz00_8995, BgL_auxz00_9004); } 
return BUNSPEC;} 

}



/* _f32vector-copy! */
obj_t BGl__f32vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1309z00_215, obj_t BgL_opt1308z00_214)
{
{ /* Llib/srfi4.scm 838 */
{ /* Llib/srfi4.scm 838 */
obj_t BgL_targetz00_1945;obj_t BgL_tstartz00_1946;obj_t BgL_sourcez00_1947;
BgL_targetz00_1945 = 
VECTOR_REF(BgL_opt1308z00_214,((long)0)); 
BgL_tstartz00_1946 = 
VECTOR_REF(BgL_opt1308z00_214,((long)1)); 
BgL_sourcez00_1947 = 
VECTOR_REF(BgL_opt1308z00_214,((long)2)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1308z00_214)) { case ((long)3) : 

{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1952;
{ /* Llib/srfi4.scm 838 */
long BgL_res2264z00_2914;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2913;
if(
BGL_F32VECTORP(BgL_sourcez00_1947))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2913 = BgL_sourcez00_1947; }  else 
{ 
obj_t BgL_auxz00_9019;
BgL_auxz00_9019 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3501z00zz__srfi4z00, BGl_string3359z00zz__srfi4z00, BgL_sourcez00_1947); 
FAILURE(BgL_auxz00_9019,BFALSE,BFALSE);} 
BgL_res2264z00_2914 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2913); } 
BgL_sendz00_1952 = BgL_res2264z00_2914; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_9040;long BgL_auxz00_9031;obj_t BgL_auxz00_9024;
if(
BGL_F32VECTORP(BgL_sourcez00_1947))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_9040 = BgL_sourcez00_1947
; }  else 
{ 
obj_t BgL_auxz00_9043;
BgL_auxz00_9043 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3501z00zz__srfi4z00, BGl_string3359z00zz__srfi4z00, BgL_sourcez00_1947); 
FAILURE(BgL_auxz00_9043,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9032;
if(
INTEGERP(BgL_tstartz00_1946))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9032 = BgL_tstartz00_1946
; }  else 
{ 
obj_t BgL_auxz00_9035;
BgL_auxz00_9035 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3501z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1946); 
FAILURE(BgL_auxz00_9035,BFALSE,BFALSE);} 
BgL_auxz00_9031 = 
(long)CINT(BgL_tmpz00_9032); } 
if(
BGL_F32VECTORP(BgL_targetz00_1945))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_9024 = BgL_targetz00_1945
; }  else 
{ 
obj_t BgL_auxz00_9027;
BgL_auxz00_9027 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3501z00zz__srfi4z00, BGl_string3359z00zz__srfi4z00, BgL_targetz00_1945); 
FAILURE(BgL_auxz00_9027,BFALSE,BFALSE);} 
return 
BGl_f32vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_9024, BgL_auxz00_9031, BgL_auxz00_9040, 
BINT(((long)0)), 
BINT(BgL_sendz00_1952));} } } break;case ((long)4) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1953;
BgL_sstartz00_1953 = 
VECTOR_REF(BgL_opt1308z00_214,((long)3)); 
{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1954;
{ /* Llib/srfi4.scm 838 */
long BgL_res2265z00_2916;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2915;
if(
BGL_F32VECTORP(BgL_sourcez00_1947))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2915 = BgL_sourcez00_1947; }  else 
{ 
obj_t BgL_auxz00_9053;
BgL_auxz00_9053 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3501z00zz__srfi4z00, BGl_string3359z00zz__srfi4z00, BgL_sourcez00_1947); 
FAILURE(BgL_auxz00_9053,BFALSE,BFALSE);} 
BgL_res2265z00_2916 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2915); } 
BgL_sendz00_1954 = BgL_res2265z00_2916; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_9074;long BgL_auxz00_9065;obj_t BgL_auxz00_9058;
if(
BGL_F32VECTORP(BgL_sourcez00_1947))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_9074 = BgL_sourcez00_1947
; }  else 
{ 
obj_t BgL_auxz00_9077;
BgL_auxz00_9077 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3501z00zz__srfi4z00, BGl_string3359z00zz__srfi4z00, BgL_sourcez00_1947); 
FAILURE(BgL_auxz00_9077,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9066;
if(
INTEGERP(BgL_tstartz00_1946))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9066 = BgL_tstartz00_1946
; }  else 
{ 
obj_t BgL_auxz00_9069;
BgL_auxz00_9069 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3501z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1946); 
FAILURE(BgL_auxz00_9069,BFALSE,BFALSE);} 
BgL_auxz00_9065 = 
(long)CINT(BgL_tmpz00_9066); } 
if(
BGL_F32VECTORP(BgL_targetz00_1945))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_9058 = BgL_targetz00_1945
; }  else 
{ 
obj_t BgL_auxz00_9061;
BgL_auxz00_9061 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3501z00zz__srfi4z00, BGl_string3359z00zz__srfi4z00, BgL_targetz00_1945); 
FAILURE(BgL_auxz00_9061,BFALSE,BFALSE);} 
return 
BGl_f32vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_9058, BgL_auxz00_9065, BgL_auxz00_9074, BgL_sstartz00_1953, 
BINT(BgL_sendz00_1954));} } } } break;case ((long)5) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1955;
BgL_sstartz00_1955 = 
VECTOR_REF(BgL_opt1308z00_214,((long)3)); 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_sendz00_1956;
BgL_sendz00_1956 = 
VECTOR_REF(BgL_opt1308z00_214,((long)4)); 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_9101;long BgL_auxz00_9092;obj_t BgL_auxz00_9085;
if(
BGL_F32VECTORP(BgL_sourcez00_1947))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_9101 = BgL_sourcez00_1947
; }  else 
{ 
obj_t BgL_auxz00_9104;
BgL_auxz00_9104 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3501z00zz__srfi4z00, BGl_string3359z00zz__srfi4z00, BgL_sourcez00_1947); 
FAILURE(BgL_auxz00_9104,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9093;
if(
INTEGERP(BgL_tstartz00_1946))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9093 = BgL_tstartz00_1946
; }  else 
{ 
obj_t BgL_auxz00_9096;
BgL_auxz00_9096 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3501z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1946); 
FAILURE(BgL_auxz00_9096,BFALSE,BFALSE);} 
BgL_auxz00_9092 = 
(long)CINT(BgL_tmpz00_9093); } 
if(
BGL_F32VECTORP(BgL_targetz00_1945))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_9085 = BgL_targetz00_1945
; }  else 
{ 
obj_t BgL_auxz00_9088;
BgL_auxz00_9088 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3501z00zz__srfi4z00, BGl_string3359z00zz__srfi4z00, BgL_targetz00_1945); 
FAILURE(BgL_auxz00_9088,BFALSE,BFALSE);} 
return 
BGl_f32vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_9085, BgL_auxz00_9092, BgL_auxz00_9101, BgL_sstartz00_1955, BgL_sendz00_1956);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3499z00zz__srfi4z00, BGl_string3472z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1308z00_214)));} } } } 

}



/* f32vector-copy! */
BGL_EXPORTED_DEF obj_t BGl_f32vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_targetz00_209, long BgL_tstartz00_210, obj_t BgL_sourcez00_211, obj_t BgL_sstartz00_212, obj_t BgL_sendz00_213)
{
{ /* Llib/srfi4.scm 838 */
if(
(BgL_tstartz00_210<((long)0)))
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3500z00zz__srfi4z00, BGl_string3474z00zz__srfi4z00, 
BINT(BgL_tstartz00_210)); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4291z00_9118;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2919;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9119;
if(
INTEGERP(BgL_sstartz00_212))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9119 = BgL_sstartz00_212
; }  else 
{ 
obj_t BgL_auxz00_9122;
BgL_auxz00_9122 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3500z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_212); 
FAILURE(BgL_auxz00_9122,BFALSE,BFALSE);} 
BgL_n1z00_2919 = 
(long)CINT(BgL_tmpz00_9119); } 
BgL_test4291z00_9118 = 
(BgL_n1z00_2919<((long)0)); } 
if(BgL_test4291z00_9118)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3500z00zz__srfi4z00, BGl_string3475z00zz__srfi4z00, BgL_sstartz00_212); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4293z00_9129;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1745z00_1969;
{ /* Llib/srfi4.scm 838 */
long BgL_res2268z00_2922;
BgL_res2268z00_2922 = 
BGL_HVECTOR_LENGTH(BgL_sourcez00_211); 
BgL_arg1745z00_1969 = BgL_res2268z00_2922; } 
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2923;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9131;
if(
INTEGERP(BgL_sendz00_213))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9131 = BgL_sendz00_213
; }  else 
{ 
obj_t BgL_auxz00_9134;
BgL_auxz00_9134 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3500z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_213); 
FAILURE(BgL_auxz00_9134,BFALSE,BFALSE);} 
BgL_n1z00_2923 = 
(long)CINT(BgL_tmpz00_9131); } 
BgL_test4293z00_9129 = 
(BgL_n1z00_2923>BgL_arg1745z00_1969); } } 
if(BgL_test4293z00_9129)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3500z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_213); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4295z00_9141;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2926;long BgL_n2z00_2927;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9142;
if(
INTEGERP(BgL_sendz00_213))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9142 = BgL_sendz00_213
; }  else 
{ 
obj_t BgL_auxz00_9145;
BgL_auxz00_9145 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3500z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_213); 
FAILURE(BgL_auxz00_9145,BFALSE,BFALSE);} 
BgL_n1z00_2926 = 
(long)CINT(BgL_tmpz00_9142); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9150;
if(
INTEGERP(BgL_sstartz00_212))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9150 = BgL_sstartz00_212
; }  else 
{ 
obj_t BgL_auxz00_9153;
BgL_auxz00_9153 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3500z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_212); 
FAILURE(BgL_auxz00_9153,BFALSE,BFALSE);} 
BgL_n2z00_2927 = 
(long)CINT(BgL_tmpz00_9150); } 
BgL_test4295z00_9141 = 
(BgL_n1z00_2926<BgL_n2z00_2927); } 
if(BgL_test4295z00_9141)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3500z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_213); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4298z00_9160;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1743z00_1967;long BgL_arg1744z00_1968;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2929;long BgL_za72za7_2930;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9161;
if(
INTEGERP(BgL_sendz00_213))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9161 = BgL_sendz00_213
; }  else 
{ 
obj_t BgL_auxz00_9164;
BgL_auxz00_9164 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3500z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_213); 
FAILURE(BgL_auxz00_9164,BFALSE,BFALSE);} 
BgL_za71za7_2929 = 
(long)CINT(BgL_tmpz00_9161); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9169;
if(
INTEGERP(BgL_sstartz00_212))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9169 = BgL_sstartz00_212
; }  else 
{ 
obj_t BgL_auxz00_9172;
BgL_auxz00_9172 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3500z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_212); 
FAILURE(BgL_auxz00_9172,BFALSE,BFALSE);} 
BgL_za72za7_2930 = 
(long)CINT(BgL_tmpz00_9169); } 
BgL_arg1743z00_1967 = 
(BgL_za71za7_2929-BgL_za72za7_2930); } 
{ /* Llib/srfi4.scm 838 */
long BgL_res2272z00_2933;
BgL_res2272z00_2933 = 
BGL_HVECTOR_LENGTH(BgL_targetz00_209); 
BgL_arg1744z00_1968 = BgL_res2272z00_2933; } 
BgL_test4298z00_9160 = 
BGl_2ze3ze3zz__r4_numbers_6_5z00(
BINT(BgL_arg1743z00_1967), 
BINT(BgL_arg1744z00_1968)); } 
if(BgL_test4298z00_9160)
{ /* Llib/srfi4.scm 838 */
long BgL_arg1742z00_1966;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2934;long BgL_za72za7_2935;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9182;
if(
INTEGERP(BgL_sendz00_213))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9182 = BgL_sendz00_213
; }  else 
{ 
obj_t BgL_auxz00_9185;
BgL_auxz00_9185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3500z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_213); 
FAILURE(BgL_auxz00_9185,BFALSE,BFALSE);} 
BgL_za71za7_2934 = 
(long)CINT(BgL_tmpz00_9182); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9190;
if(
INTEGERP(BgL_sstartz00_212))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9190 = BgL_sstartz00_212
; }  else 
{ 
obj_t BgL_auxz00_9193;
BgL_auxz00_9193 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3500z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_212); 
FAILURE(BgL_auxz00_9193,BFALSE,BFALSE);} 
BgL_za72za7_2935 = 
(long)CINT(BgL_tmpz00_9190); } 
BgL_arg1742z00_1966 = 
(BgL_za71za7_2934-BgL_za72za7_2935); } 
BGl_errorz00zz__errorz00(BGl_string3500z00zz__srfi4z00, BGl_string3477z00zz__srfi4z00, 
BINT(BgL_arg1742z00_1966)); }  else 
{ /* Llib/srfi4.scm 838 */BFALSE; } } } } } 
{ /* Llib/srfi4.scm 838 */
long BgL_auxz00_9210;long BgL_tmpz00_9201;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9211;
if(
INTEGERP(BgL_sendz00_213))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9211 = BgL_sendz00_213
; }  else 
{ 
obj_t BgL_auxz00_9214;
BgL_auxz00_9214 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3500z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_213); 
FAILURE(BgL_auxz00_9214,BFALSE,BFALSE);} 
BgL_auxz00_9210 = 
(long)CINT(BgL_tmpz00_9211); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9202;
if(
INTEGERP(BgL_sstartz00_212))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9202 = BgL_sstartz00_212
; }  else 
{ 
obj_t BgL_auxz00_9205;
BgL_auxz00_9205 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3500z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_212); 
FAILURE(BgL_auxz00_9205,BFALSE,BFALSE);} 
BgL_tmpz00_9201 = 
(long)CINT(BgL_tmpz00_9202); } 
BGL_F32VECTOR_COPY(BgL_targetz00_209, BgL_tstartz00_210, BgL_sourcez00_211, BgL_tmpz00_9201, BgL_auxz00_9210); } 
return BUNSPEC;} 

}



/* _f64vector-copy! */
obj_t BGl__f64vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1313z00_222, obj_t BgL_opt1312z00_221)
{
{ /* Llib/srfi4.scm 838 */
{ /* Llib/srfi4.scm 838 */
obj_t BgL_targetz00_1970;obj_t BgL_tstartz00_1971;obj_t BgL_sourcez00_1972;
BgL_targetz00_1970 = 
VECTOR_REF(BgL_opt1312z00_221,((long)0)); 
BgL_tstartz00_1971 = 
VECTOR_REF(BgL_opt1312z00_221,((long)1)); 
BgL_sourcez00_1972 = 
VECTOR_REF(BgL_opt1312z00_221,((long)2)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1312z00_221)) { case ((long)3) : 

{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1977;
{ /* Llib/srfi4.scm 838 */
long BgL_res2274z00_2938;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2937;
if(
BGL_F64VECTORP(BgL_sourcez00_1972))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2937 = BgL_sourcez00_1972; }  else 
{ 
obj_t BgL_auxz00_9225;
BgL_auxz00_9225 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3504z00zz__srfi4z00, BGl_string3361z00zz__srfi4z00, BgL_sourcez00_1972); 
FAILURE(BgL_auxz00_9225,BFALSE,BFALSE);} 
BgL_res2274z00_2938 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2937); } 
BgL_sendz00_1977 = BgL_res2274z00_2938; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_9246;long BgL_auxz00_9237;obj_t BgL_auxz00_9230;
if(
BGL_F64VECTORP(BgL_sourcez00_1972))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_9246 = BgL_sourcez00_1972
; }  else 
{ 
obj_t BgL_auxz00_9249;
BgL_auxz00_9249 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3504z00zz__srfi4z00, BGl_string3361z00zz__srfi4z00, BgL_sourcez00_1972); 
FAILURE(BgL_auxz00_9249,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9238;
if(
INTEGERP(BgL_tstartz00_1971))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9238 = BgL_tstartz00_1971
; }  else 
{ 
obj_t BgL_auxz00_9241;
BgL_auxz00_9241 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3504z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1971); 
FAILURE(BgL_auxz00_9241,BFALSE,BFALSE);} 
BgL_auxz00_9237 = 
(long)CINT(BgL_tmpz00_9238); } 
if(
BGL_F64VECTORP(BgL_targetz00_1970))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_9230 = BgL_targetz00_1970
; }  else 
{ 
obj_t BgL_auxz00_9233;
BgL_auxz00_9233 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3504z00zz__srfi4z00, BGl_string3361z00zz__srfi4z00, BgL_targetz00_1970); 
FAILURE(BgL_auxz00_9233,BFALSE,BFALSE);} 
return 
BGl_f64vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_9230, BgL_auxz00_9237, BgL_auxz00_9246, 
BINT(((long)0)), 
BINT(BgL_sendz00_1977));} } } break;case ((long)4) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1978;
BgL_sstartz00_1978 = 
VECTOR_REF(BgL_opt1312z00_221,((long)3)); 
{ /* Llib/srfi4.scm 838 */
long BgL_sendz00_1979;
{ /* Llib/srfi4.scm 838 */
long BgL_res2275z00_2940;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_xz00_2939;
if(
BGL_F64VECTORP(BgL_sourcez00_1972))
{ /* Llib/srfi4.scm 838 */
BgL_xz00_2939 = BgL_sourcez00_1972; }  else 
{ 
obj_t BgL_auxz00_9259;
BgL_auxz00_9259 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3504z00zz__srfi4z00, BGl_string3361z00zz__srfi4z00, BgL_sourcez00_1972); 
FAILURE(BgL_auxz00_9259,BFALSE,BFALSE);} 
BgL_res2275z00_2940 = 
BGL_HVECTOR_LENGTH(BgL_xz00_2939); } 
BgL_sendz00_1979 = BgL_res2275z00_2940; } 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_9280;long BgL_auxz00_9271;obj_t BgL_auxz00_9264;
if(
BGL_F64VECTORP(BgL_sourcez00_1972))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_9280 = BgL_sourcez00_1972
; }  else 
{ 
obj_t BgL_auxz00_9283;
BgL_auxz00_9283 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3504z00zz__srfi4z00, BGl_string3361z00zz__srfi4z00, BgL_sourcez00_1972); 
FAILURE(BgL_auxz00_9283,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9272;
if(
INTEGERP(BgL_tstartz00_1971))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9272 = BgL_tstartz00_1971
; }  else 
{ 
obj_t BgL_auxz00_9275;
BgL_auxz00_9275 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3504z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1971); 
FAILURE(BgL_auxz00_9275,BFALSE,BFALSE);} 
BgL_auxz00_9271 = 
(long)CINT(BgL_tmpz00_9272); } 
if(
BGL_F64VECTORP(BgL_targetz00_1970))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_9264 = BgL_targetz00_1970
; }  else 
{ 
obj_t BgL_auxz00_9267;
BgL_auxz00_9267 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3504z00zz__srfi4z00, BGl_string3361z00zz__srfi4z00, BgL_targetz00_1970); 
FAILURE(BgL_auxz00_9267,BFALSE,BFALSE);} 
return 
BGl_f64vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_9264, BgL_auxz00_9271, BgL_auxz00_9280, BgL_sstartz00_1978, 
BINT(BgL_sendz00_1979));} } } } break;case ((long)5) : 

{ /* Llib/srfi4.scm 838 */
obj_t BgL_sstartz00_1980;
BgL_sstartz00_1980 = 
VECTOR_REF(BgL_opt1312z00_221,((long)3)); 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_sendz00_1981;
BgL_sendz00_1981 = 
VECTOR_REF(BgL_opt1312z00_221,((long)4)); 
{ /* Llib/srfi4.scm 838 */

{ /* Llib/srfi4.scm 838 */
obj_t BgL_auxz00_9307;long BgL_auxz00_9298;obj_t BgL_auxz00_9291;
if(
BGL_F64VECTORP(BgL_sourcez00_1972))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_9307 = BgL_sourcez00_1972
; }  else 
{ 
obj_t BgL_auxz00_9310;
BgL_auxz00_9310 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3504z00zz__srfi4z00, BGl_string3361z00zz__srfi4z00, BgL_sourcez00_1972); 
FAILURE(BgL_auxz00_9310,BFALSE,BFALSE);} 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9299;
if(
INTEGERP(BgL_tstartz00_1971))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9299 = BgL_tstartz00_1971
; }  else 
{ 
obj_t BgL_auxz00_9302;
BgL_auxz00_9302 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3504z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_tstartz00_1971); 
FAILURE(BgL_auxz00_9302,BFALSE,BFALSE);} 
BgL_auxz00_9298 = 
(long)CINT(BgL_tmpz00_9299); } 
if(
BGL_F64VECTORP(BgL_targetz00_1970))
{ /* Llib/srfi4.scm 838 */
BgL_auxz00_9291 = BgL_targetz00_1970
; }  else 
{ 
obj_t BgL_auxz00_9294;
BgL_auxz00_9294 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3504z00zz__srfi4z00, BGl_string3361z00zz__srfi4z00, BgL_targetz00_1970); 
FAILURE(BgL_auxz00_9294,BFALSE,BFALSE);} 
return 
BGl_f64vectorzd2copyz12zc0zz__srfi4z00(BgL_auxz00_9291, BgL_auxz00_9298, BgL_auxz00_9307, BgL_sstartz00_1980, BgL_sendz00_1981);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3502z00zz__srfi4z00, BGl_string3472z00zz__srfi4z00, 
BINT(
VECTOR_LENGTH(BgL_opt1312z00_221)));} } } } 

}



/* f64vector-copy! */
BGL_EXPORTED_DEF obj_t BGl_f64vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_targetz00_216, long BgL_tstartz00_217, obj_t BgL_sourcez00_218, obj_t BgL_sstartz00_219, obj_t BgL_sendz00_220)
{
{ /* Llib/srfi4.scm 838 */
if(
(BgL_tstartz00_217<((long)0)))
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3503z00zz__srfi4z00, BGl_string3474z00zz__srfi4z00, 
BINT(BgL_tstartz00_217)); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4317z00_9324;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2943;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9325;
if(
INTEGERP(BgL_sstartz00_219))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9325 = BgL_sstartz00_219
; }  else 
{ 
obj_t BgL_auxz00_9328;
BgL_auxz00_9328 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3503z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_219); 
FAILURE(BgL_auxz00_9328,BFALSE,BFALSE);} 
BgL_n1z00_2943 = 
(long)CINT(BgL_tmpz00_9325); } 
BgL_test4317z00_9324 = 
(BgL_n1z00_2943<((long)0)); } 
if(BgL_test4317z00_9324)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3503z00zz__srfi4z00, BGl_string3475z00zz__srfi4z00, BgL_sstartz00_219); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4319z00_9335;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1761z00_1994;
{ /* Llib/srfi4.scm 838 */
long BgL_res2278z00_2946;
BgL_res2278z00_2946 = 
BGL_HVECTOR_LENGTH(BgL_sourcez00_218); 
BgL_arg1761z00_1994 = BgL_res2278z00_2946; } 
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2947;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9337;
if(
INTEGERP(BgL_sendz00_220))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9337 = BgL_sendz00_220
; }  else 
{ 
obj_t BgL_auxz00_9340;
BgL_auxz00_9340 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3503z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_220); 
FAILURE(BgL_auxz00_9340,BFALSE,BFALSE);} 
BgL_n1z00_2947 = 
(long)CINT(BgL_tmpz00_9337); } 
BgL_test4319z00_9335 = 
(BgL_n1z00_2947>BgL_arg1761z00_1994); } } 
if(BgL_test4319z00_9335)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3503z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_220); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4321z00_9347;
{ /* Llib/srfi4.scm 838 */
long BgL_n1z00_2950;long BgL_n2z00_2951;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9348;
if(
INTEGERP(BgL_sendz00_220))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9348 = BgL_sendz00_220
; }  else 
{ 
obj_t BgL_auxz00_9351;
BgL_auxz00_9351 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3503z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_220); 
FAILURE(BgL_auxz00_9351,BFALSE,BFALSE);} 
BgL_n1z00_2950 = 
(long)CINT(BgL_tmpz00_9348); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9356;
if(
INTEGERP(BgL_sstartz00_219))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9356 = BgL_sstartz00_219
; }  else 
{ 
obj_t BgL_auxz00_9359;
BgL_auxz00_9359 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3503z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_219); 
FAILURE(BgL_auxz00_9359,BFALSE,BFALSE);} 
BgL_n2z00_2951 = 
(long)CINT(BgL_tmpz00_9356); } 
BgL_test4321z00_9347 = 
(BgL_n1z00_2950<BgL_n2z00_2951); } 
if(BgL_test4321z00_9347)
{ /* Llib/srfi4.scm 838 */
BGl_errorz00zz__errorz00(BGl_string3503z00zz__srfi4z00, BGl_string3476z00zz__srfi4z00, BgL_sendz00_220); }  else 
{ /* Llib/srfi4.scm 838 */
bool_t BgL_test4324z00_9366;
{ /* Llib/srfi4.scm 838 */
long BgL_arg1759z00_1992;long BgL_arg1760z00_1993;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2953;long BgL_za72za7_2954;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9367;
if(
INTEGERP(BgL_sendz00_220))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9367 = BgL_sendz00_220
; }  else 
{ 
obj_t BgL_auxz00_9370;
BgL_auxz00_9370 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3503z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_220); 
FAILURE(BgL_auxz00_9370,BFALSE,BFALSE);} 
BgL_za71za7_2953 = 
(long)CINT(BgL_tmpz00_9367); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9375;
if(
INTEGERP(BgL_sstartz00_219))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9375 = BgL_sstartz00_219
; }  else 
{ 
obj_t BgL_auxz00_9378;
BgL_auxz00_9378 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3503z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_219); 
FAILURE(BgL_auxz00_9378,BFALSE,BFALSE);} 
BgL_za72za7_2954 = 
(long)CINT(BgL_tmpz00_9375); } 
BgL_arg1759z00_1992 = 
(BgL_za71za7_2953-BgL_za72za7_2954); } 
{ /* Llib/srfi4.scm 838 */
long BgL_res2282z00_2957;
BgL_res2282z00_2957 = 
BGL_HVECTOR_LENGTH(BgL_targetz00_216); 
BgL_arg1760z00_1993 = BgL_res2282z00_2957; } 
BgL_test4324z00_9366 = 
BGl_2ze3ze3zz__r4_numbers_6_5z00(
BINT(BgL_arg1759z00_1992), 
BINT(BgL_arg1760z00_1993)); } 
if(BgL_test4324z00_9366)
{ /* Llib/srfi4.scm 838 */
long BgL_arg1757z00_1991;
{ /* Llib/srfi4.scm 838 */
long BgL_za71za7_2958;long BgL_za72za7_2959;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9388;
if(
INTEGERP(BgL_sendz00_220))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9388 = BgL_sendz00_220
; }  else 
{ 
obj_t BgL_auxz00_9391;
BgL_auxz00_9391 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3503z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_220); 
FAILURE(BgL_auxz00_9391,BFALSE,BFALSE);} 
BgL_za71za7_2958 = 
(long)CINT(BgL_tmpz00_9388); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9396;
if(
INTEGERP(BgL_sstartz00_219))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9396 = BgL_sstartz00_219
; }  else 
{ 
obj_t BgL_auxz00_9399;
BgL_auxz00_9399 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3503z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_219); 
FAILURE(BgL_auxz00_9399,BFALSE,BFALSE);} 
BgL_za72za7_2959 = 
(long)CINT(BgL_tmpz00_9396); } 
BgL_arg1757z00_1991 = 
(BgL_za71za7_2958-BgL_za72za7_2959); } 
BGl_errorz00zz__errorz00(BGl_string3503z00zz__srfi4z00, BGl_string3477z00zz__srfi4z00, 
BINT(BgL_arg1757z00_1991)); }  else 
{ /* Llib/srfi4.scm 838 */BFALSE; } } } } } 
{ /* Llib/srfi4.scm 838 */
long BgL_auxz00_9416;long BgL_tmpz00_9407;
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9417;
if(
INTEGERP(BgL_sendz00_220))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9417 = BgL_sendz00_220
; }  else 
{ 
obj_t BgL_auxz00_9420;
BgL_auxz00_9420 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3503z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sendz00_220); 
FAILURE(BgL_auxz00_9420,BFALSE,BFALSE);} 
BgL_auxz00_9416 = 
(long)CINT(BgL_tmpz00_9417); } 
{ /* Llib/srfi4.scm 838 */
obj_t BgL_tmpz00_9408;
if(
INTEGERP(BgL_sstartz00_219))
{ /* Llib/srfi4.scm 838 */
BgL_tmpz00_9408 = BgL_sstartz00_219
; }  else 
{ 
obj_t BgL_auxz00_9411;
BgL_auxz00_9411 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3341z00zz__srfi4z00, 
BINT(((long)33208)), BGl_string3503z00zz__srfi4z00, BGl_string3367z00zz__srfi4z00, BgL_sstartz00_219); 
FAILURE(BgL_auxz00_9411,BFALSE,BFALSE);} 
BgL_tmpz00_9407 = 
(long)CINT(BgL_tmpz00_9408); } 
BGL_F64VECTOR_COPY(BgL_targetz00_216, BgL_tstartz00_217, BgL_sourcez00_218, BgL_tmpz00_9407, BgL_auxz00_9416); } 
return BUNSPEC;} 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__srfi4z00()
{
{ /* Llib/srfi4.scm 15 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__srfi4z00()
{
{ /* Llib/srfi4.scm 15 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__srfi4z00()
{
{ /* Llib/srfi4.scm 15 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__srfi4z00()
{
{ /* Llib/srfi4.scm 15 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string3505z00zz__srfi4z00)); 
BGl_modulezd2initializa7ationz75zz__hashz00(((long)214649622), 
BSTRING_TO_STRING(BGl_string3505z00zz__srfi4z00)); 
BGl_modulezd2initializa7ationz75zz__readerz00(((long)220647683), 
BSTRING_TO_STRING(BGl_string3505z00zz__srfi4z00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string3505z00zz__srfi4z00)); 
return 
BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long)460263341), 
BSTRING_TO_STRING(BGl_string3505z00zz__srfi4z00));} 

}

#ifdef __cplusplus
}
#endif
