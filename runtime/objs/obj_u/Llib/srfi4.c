/*===========================================================================*/
/*   (Llib/srfi4.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/srfi4.scm -indent -o objs/obj_u/Llib/srfi4.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_u8vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		uint8_t);
	static obj_t BGl_symbol2640z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2642z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_z62s64vectorzd2refzb0zz__srfi4z00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2644z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2646z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_z62f64vectorzf3z91zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl_symbol2648z00zz__srfi4z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_u8vectorzd2ze3listz31zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long, uint8_t);
	static obj_t BGl_z62s8vectorzd2ze3listz53zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__f64vectorzd2copyz12zc0zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_u16vectorzd2ze3listz31zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s8vectorz00zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL uint16_t BGl_u16vectorzd2refzd2zz__srfi4z00(obj_t, long);
	static obj_t BGl_z62u16vectorzd2ze3listz53zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl_symbol2650z00zz__srfi4z00 = BUNSPEC;
	BGL_EXPORTED_DECL long BGl_u16vectorzd2lengthzd2zz__srfi4z00(obj_t);
	static obj_t BGl_symbol2652z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2654z00zz__srfi4z00 = BUNSPEC;
	static obj_t BGl_symbol2656z00zz__srfi4z00 = BUNSPEC;
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
	BGL_EXPORTED_DECL obj_t BGl_hvectorzd2rangezd2errorz00zz__srfi4z00(obj_t,
		obj_t, long);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62u32vectorzd2refzb0zz__srfi4z00(obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2u64vectorzd2zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_s16vectorzd2lengthzd2zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s32vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		int32_t);
	static obj_t BGl_z62f64vectorzd2refzb0zz__srfi4z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL uint64_t BGl_u64vectorzd2refzd2zz__srfi4z00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3u8vectorz31zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s16vectorzd2ze3listz31zz__srfi4z00(obj_t);
	static obj_t BGl_z62s16vectorzd2ze3listz53zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl_z62u8vectorz62zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s16vectorz00zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_u64vectorzf3zf3zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_s8vectorzf3zf3zz__srfi4z00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__srfi4z00();
	BGL_EXPORTED_DECL obj_t BGl_s8vectorzd2ze3listz31zz__srfi4z00(obj_t);
	static obj_t BGl_objectzd2initzd2zz__srfi4z00();
	static obj_t BGl_z62u16vectorzd2lengthzb0zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_f64vectorzd2copyz12zc0zz__srfi4z00(obj_t, long,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62u32vectorz62zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_f32vectorzd2lengthzd2zz__srfi4z00(obj_t);
	static obj_t BGl_z62homogeneouszd2vectorzd2infoz62zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl_z62u64vectorzf3z91zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3u32vectorz31zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s8vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		int8_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2u32vectorzd2zz__srfi4z00(long, uint32_t);
	static obj_t BGl_z62listzd2ze3u32vectorz53zz__srfi4z00(obj_t, obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL int8_t BGl_s8vectorzd2refzd2zz__srfi4z00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_f32vectorzd2copyz12zc0zz__srfi4z00(obj_t, long,
		obj_t, obj_t, obj_t);
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
	static obj_t BGl_z62u16vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
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
	static obj_t BGl_z62f64vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
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
	BGL_EXPORTED_DECL obj_t BGl_u8vectorzd2copyz12zc0zz__srfi4z00(obj_t, long,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3f64vectorz31zz__srfi4z00(obj_t);
	static obj_t BGl_z62listzd2ze3s8vectorz53zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2f64vectorzd2zz__srfi4z00(long, double);
	static obj_t BGl_z62listzd2ze3f64vectorz53zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_u16vectorzd2copyz12zc0zz__srfi4z00(obj_t, long,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62s32vectorzd2lengthzb0zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_u16vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		uint16_t);
	static obj_t BGl_z62s16vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_u8vectorzd2lengthzd2zz__srfi4z00(obj_t);
	static obj_t BGl_z62u16vectorz62zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl_z62u64vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
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
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__srfi4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62u64vectorzd2lengthzb0zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_s64vectorzf3zf3zz__srfi4z00(obj_t);
	static obj_t BGl__u32vectorzd2copyz12zc0zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_f64vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		double);
	BGL_EXPORTED_DECL obj_t BGl_f64vectorz00zz__srfi4z00(obj_t);
	static obj_t BGl_z62f32vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62u8vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_EXPORTED_DECL obj_t BGl_s16vectorzd2copyz12zc0zz__srfi4z00(obj_t, long,
		obj_t, obj_t, obj_t);
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
	BGL_EXPORTED_DECL obj_t BGl_s8vectorzd2copyz12zc0zz__srfi4z00(obj_t, long,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62s8vectorzd2refzb0zz__srfi4z00(obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__srfi4z00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__srfi4z00();
	BGL_EXPORTED_DECL int32_t BGl_s32vectorzd2refzd2zz__srfi4z00(obj_t, long);
	static obj_t BGl__s64vectorzd2copyz12zc0zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl_z62s8vectorz62zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s16vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		int16_t);
	BGL_EXPORTED_DECL obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_f64vectorzd2ze3listz31zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_u64vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		uint64_t);
	static obj_t BGl_z62s32vectorz62zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl_z62u32vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62s64vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
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
	BGL_EXPORTED_DECL obj_t BGl_f32vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		float);
	BGL_EXPORTED_DECL obj_t BGl_u64vectorzd2copyz12zc0zz__srfi4z00(obj_t, long,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62f32vectorzf3z91zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL float BGl_f32vectorzd2refzd2zz__srfi4z00(obj_t, long);
	static obj_t BGl_z62u8vectorzd2ze3listz53zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_u32vectorzd2copyz12zc0zz__srfi4z00(obj_t, long,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62hvectorzd2rangezd2errorz62zz__srfi4z00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s32vectorz00zz__srfi4z00(obj_t);
	static obj_t BGl__makezd2u8vectorzd2zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl_z62s16vectorzf3z91zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl__makezd2s16vectorzd2zz__srfi4z00(obj_t, obj_t);
	static obj_t BGl_z62s8vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s64vectorz00zz__srfi4z00(obj_t);
	static obj_t BGl_z62s16vectorzd2refzb0zz__srfi4z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_u32vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		uint32_t);
	BGL_EXPORTED_DECL obj_t BGl_s64vectorzd2setz12zc0zz__srfi4z00(obj_t, long,
		int64_t);
	static obj_t BGl_z62s32vectorzd2setz12za2zz__srfi4z00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s64vectorzd2copyz12zc0zz__srfi4z00(obj_t, long,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_f64vectorzf3zf3zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL uint8_t BGl_u8vectorzd2refzd2zz__srfi4z00(obj_t, long);
	static obj_t BGl_z62listzd2ze3u8vectorz53zz__srfi4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_s32vectorzd2copyz12zc0zz__srfi4z00(obj_t, long,
		obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2638z00zz__srfi4z00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_u32vectorzf3zf3zz__srfi4z00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_homogeneouszd2vectorzf3zd2envzf3zz__srfi4z00,
		BgL_bgl_za762homogeneousza7d2758z00,
		BGl_z62homogeneouszd2vectorzf3z43zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2s16vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2s16vecto2759za7, opt_generic_entry,
		BGl__makezd2s16vectorzd2zz__srfi4z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_s64vectorzd2copyz12zd2envz12zz__srfi4z00,
		BgL_bgl__s64vectorza7d2cop2760za7, opt_generic_entry,
		BGl__s64vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3f32vectorzd2envze3zz__srfi4z00,
		BgL_bgl_za762listza7d2za7e3f322761za7,
		BGl_z62listzd2ze3f32vectorz53zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u16vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl_za762u16vectorza7f3za72762za7, BGl_z62u16vectorzf3z91zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f64vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl_za762f64vectorza7d2r2763z00, BGl_z62f64vectorzd2refzb0zz__srfi4z00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_f32vectorzd2copyz12zd2envz12zz__srfi4z00,
		BgL_bgl__f32vectorza7d2cop2764za7, opt_generic_entry,
		BGl__f32vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s16vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl_za762s16vectorza7d2r2765z00, BGl_z62s16vectorzd2refzb0zz__srfi4z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u16vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl_za762u16vectorza7d2r2766z00, BGl_z62u16vectorzd2refzb0zz__srfi4z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2s64vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2s64vecto2767za7, opt_generic_entry,
		BGl__makezd2s64vectorzd2zz__srfi4z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s64vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl_za762s64vectorza7d2s2768z00,
		BGl_z62s64vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_u64vectorzd2copyz12zd2envz12zz__srfi4z00,
		BgL_bgl__u64vectorza7d2cop2769za7, opt_generic_entry,
		BGl__u64vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f64vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl_za762f64vectorza7f3za72770za7, BGl_z62f64vectorzf3z91zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u8vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl_za762u8vectorza7d2re2771z00, BGl_z62u8vectorzd2refzb0zz__srfi4z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s32vectorzd2envzd2zz__srfi4z00,
		BgL_bgl_za762s32vectorza762za72772za7, va_generic_entry,
		BGl_z62s32vectorz62zz__srfi4z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u64vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl_za762u64vectorza7d2s2773z00,
		BGl_z62u64vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s8vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl_za762s8vectorza7d2se2774z00,
		BGl_z62s8vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2u32vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2u32vecto2775za7, opt_generic_entry,
		BGl__makezd2u32vectorzd2zz__srfi4z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u8vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl_za762u8vectorza7d2se2776z00,
		BGl_z62u8vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f64vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl_za762f64vectorza7d2s2777z00,
		BGl_z62f64vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s8vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl_za762s8vectorza7d2re2778z00, BGl_z62s8vectorzd2refzb0zz__srfi4z00,
		0L, BUNSPEC, 2);
	extern obj_t BGl_zd3s32zd2envz01zz__r4_numbers_6_5_fixnumz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2f64vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2f64vecto2779za7, opt_generic_entry,
		BGl__makezd2f64vectorzd2zz__srfi4z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s16vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl_za762s16vectorza7f3za72780za7, BGl_z62s16vectorzf3z91zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u64vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl_za762u64vectorza7f3za72781za7, BGl_z62u64vectorzf3z91zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s8vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl_za762s8vectorza7d2le2782z00,
		BGl_z62s8vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3u16vectorzd2envze3zz__srfi4z00,
		BgL_bgl_za762listza7d2za7e3u162783za7,
		BGl_z62listzd2ze3u16vectorz53zz__srfi4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_s64vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl_za762s64vectorza7d2za72784za7,
		BGl_z62s64vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3s8vectorzd2envze3zz__srfi4z00,
		BgL_bgl_za762listza7d2za7e3s8v2785za7,
		BGl_z62listzd2ze3s8vectorz53zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s32vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl_za762s32vectorza7d2r2786z00, BGl_z62s32vectorzd2refzb0zz__srfi4z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u32vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl_za762u32vectorza7d2r2787z00, BGl_z62u32vectorzd2refzb0zz__srfi4z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f32vectorzd2envzd2zz__srfi4z00,
		BgL_bgl_za762f32vectorza762za72788za7, va_generic_entry,
		BGl_z62f32vectorz62zz__srfi4z00, BUNSPEC, -1);
	extern obj_t BGl_zd3s8zd2envz01zz__r4_numbers_6_5_fixnumz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_s64vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl_za762s64vectorza7d2l2789z00,
		BGl_z62s64vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2700z00zz__srfi4z00,
		BgL_bgl_string2700za700za7za7_2790za7, "real", 4);
	      DEFINE_STRING(BGl_string2701z00zz__srfi4z00,
		BgL_bgl_string2701za700za7za7_2791za7, "_make-f64vector", 15);
	      DEFINE_STRING(BGl_string2702z00zz__srfi4z00,
		BgL_bgl_string2702za700za7za7_2792za7, "index out of range [0..", 23);
	      DEFINE_STRING(BGl_string2703z00zz__srfi4z00,
		BgL_bgl_string2703za700za7za7_2793za7, "]", 1);
	      DEFINE_STRING(BGl_string2704z00zz__srfi4z00,
		BgL_bgl_string2704za700za7za7_2794za7, "&hvector-range-error", 20);
	      DEFINE_STRING(BGl_string2705z00zz__srfi4z00,
		BgL_bgl_string2705za700za7za7_2795za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2706z00zz__srfi4z00,
		BgL_bgl_string2706za700za7za7_2796za7, "&s8vector-ref", 13);
	      DEFINE_STRING(BGl_string2707z00zz__srfi4z00,
		BgL_bgl_string2707za700za7za7_2797za7, "&u8vector-ref", 13);
	      DEFINE_STRING(BGl_string2708z00zz__srfi4z00,
		BgL_bgl_string2708za700za7za7_2798za7, "&s16vector-ref", 14);
	      DEFINE_STRING(BGl_string2709z00zz__srfi4z00,
		BgL_bgl_string2709za700za7za7_2799za7, "&u16vector-ref", 14);
	extern obj_t BGl_zd3u64zd2envz01zz__r4_numbers_6_5_fixnumz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_f32vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl_za762f32vectorza7f3za72800za7, BGl_z62f32vectorzf3z91zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2710z00zz__srfi4z00,
		BgL_bgl_string2710za700za7za7_2801za7, "&s32vector-ref", 14);
	      DEFINE_STRING(BGl_string2711z00zz__srfi4z00,
		BgL_bgl_string2711za700za7za7_2802za7, "&u32vector-ref", 14);
	      DEFINE_STRING(BGl_string2712z00zz__srfi4z00,
		BgL_bgl_string2712za700za7za7_2803za7, "&s64vector-ref", 14);
	      DEFINE_STRING(BGl_string2713z00zz__srfi4z00,
		BgL_bgl_string2713za700za7za7_2804za7, "&u64vector-ref", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_f32vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl_za762f32vectorza7d2za72805za7,
		BGl_z62f32vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2714z00zz__srfi4z00,
		BgL_bgl_string2714za700za7za7_2806za7, "&f32vector-ref", 14);
	      DEFINE_STRING(BGl_string2715z00zz__srfi4z00,
		BgL_bgl_string2715za700za7za7_2807za7, "&f64vector-ref", 14);
	      DEFINE_STRING(BGl_string2716z00zz__srfi4z00,
		BgL_bgl_string2716za700za7za7_2808za7, "&s8vector-set!", 14);
	      DEFINE_STRING(BGl_string2717z00zz__srfi4z00,
		BgL_bgl_string2717za700za7za7_2809za7, "&u8vector-set!", 14);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2u8vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2u8vector2810za7, opt_generic_entry,
		BGl__makezd2u8vectorzd2zz__srfi4z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2718z00zz__srfi4z00,
		BgL_bgl_string2718za700za7za7_2811za7, "&s16vector-set!", 15);
	      DEFINE_STRING(BGl_string2719z00zz__srfi4z00,
		BgL_bgl_string2719za700za7za7_2812za7, "&u16vector-set!", 15);
	      DEFINE_STRING(BGl_string2639z00zz__srfi4z00,
		BgL_bgl_string2639za700za7za7_2813za7, "s8", 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_s16vectorzd2copyz12zd2envz12zz__srfi4z00,
		BgL_bgl__s16vectorza7d2cop2814za7, opt_generic_entry,
		BGl__s16vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3u64vectorzd2envze3zz__srfi4z00,
		BgL_bgl_za762listza7d2za7e3u642815za7,
		BGl_z62listzd2ze3u64vectorz53zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2720z00zz__srfi4z00,
		BgL_bgl_string2720za700za7za7_2816za7, "&s32vector-set!", 15);
	      DEFINE_STRING(BGl_string2721z00zz__srfi4z00,
		BgL_bgl_string2721za700za7za7_2817za7, "&u32vector-set!", 15);
	      DEFINE_STRING(BGl_string2722z00zz__srfi4z00,
		BgL_bgl_string2722za700za7za7_2818za7, "&s64vector-set!", 15);
	      DEFINE_STRING(BGl_string2641z00zz__srfi4z00,
		BgL_bgl_string2641za700za7za7_2819za7, "u8", 2);
	      DEFINE_STRING(BGl_string2723z00zz__srfi4z00,
		BgL_bgl_string2723za700za7za7_2820za7, "&u64vector-set!", 15);
	      DEFINE_STRING(BGl_string2724z00zz__srfi4z00,
		BgL_bgl_string2724za700za7za7_2821za7, "&f32vector-set!", 15);
	      DEFINE_STRING(BGl_string2643z00zz__srfi4z00,
		BgL_bgl_string2643za700za7za7_2822za7, "s16", 3);
	      DEFINE_STRING(BGl_string2725z00zz__srfi4z00,
		BgL_bgl_string2725za700za7za7_2823za7, "&f64vector-set!", 15);
	      DEFINE_STRING(BGl_string2726z00zz__srfi4z00,
		BgL_bgl_string2726za700za7za7_2824za7, "&s8vector->list", 15);
	      DEFINE_STRING(BGl_string2645z00zz__srfi4z00,
		BgL_bgl_string2645za700za7za7_2825za7, "u16", 3);
	      DEFINE_STRING(BGl_string2727z00zz__srfi4z00,
		BgL_bgl_string2727za700za7za7_2826za7, "&u8vector->list", 15);
	      DEFINE_STRING(BGl_string2728z00zz__srfi4z00,
		BgL_bgl_string2728za700za7za7_2827za7, "&s16vector->list", 16);
	      DEFINE_STRING(BGl_string2647z00zz__srfi4z00,
		BgL_bgl_string2647za700za7za7_2828za7, "s32", 3);
	      DEFINE_STRING(BGl_string2729z00zz__srfi4z00,
		BgL_bgl_string2729za700za7za7_2829za7, "&u16vector->list", 16);
	      DEFINE_STRING(BGl_string2649z00zz__srfi4z00,
		BgL_bgl_string2649za700za7za7_2830za7, "u32", 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u8vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl_za762u8vectorza7d2le2831z00,
		BGl_z62u8vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_u64vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl_za762u64vectorza7d2za72832za7,
		BGl_z62u64vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2730z00zz__srfi4z00,
		BgL_bgl_string2730za700za7za7_2833za7, "&s32vector->list", 16);
	      DEFINE_STRING(BGl_string2731z00zz__srfi4z00,
		BgL_bgl_string2731za700za7za7_2834za7, "&u32vector->list", 16);
	      DEFINE_STRING(BGl_string2732z00zz__srfi4z00,
		BgL_bgl_string2732za700za7za7_2835za7, "&s64vector->list", 16);
	      DEFINE_STRING(BGl_string2651z00zz__srfi4z00,
		BgL_bgl_string2651za700za7za7_2836za7, "s64", 3);
	      DEFINE_STRING(BGl_string2733z00zz__srfi4z00,
		BgL_bgl_string2733za700za7za7_2837za7, "&u64vector->list", 16);
	      DEFINE_STRING(BGl_string2734z00zz__srfi4z00,
		BgL_bgl_string2734za700za7za7_2838za7, "&f32vector->list", 16);
	      DEFINE_STRING(BGl_string2653z00zz__srfi4z00,
		BgL_bgl_string2653za700za7za7_2839za7, "u64", 3);
	      DEFINE_STRING(BGl_string2735z00zz__srfi4z00,
		BgL_bgl_string2735za700za7za7_2840za7, "&f64vector->list", 16);
	      DEFINE_STRING(BGl_string2736z00zz__srfi4z00,
		BgL_bgl_string2736za700za7za7_2841za7, "&list->s8vector", 15);
	      DEFINE_STRING(BGl_string2655z00zz__srfi4z00,
		BgL_bgl_string2655za700za7za7_2842za7, "f32", 3);
	      DEFINE_STRING(BGl_string2737z00zz__srfi4z00,
		BgL_bgl_string2737za700za7za7_2843za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2738z00zz__srfi4z00,
		BgL_bgl_string2738za700za7za7_2844za7, "&list->u8vector", 15);
	      DEFINE_STRING(BGl_string2657z00zz__srfi4z00,
		BgL_bgl_string2657za700za7za7_2845za7, "f64", 3);
	extern obj_t BGl_zd3s16zd2envz01zz__r4_numbers_6_5_fixnumz00;
	   
		 
		DEFINE_STRING(BGl_string2739z00zz__srfi4z00,
		BgL_bgl_string2739za700za7za7_2846za7, "&list->s16vector", 16);
	      DEFINE_STRING(BGl_string2658z00zz__srfi4z00,
		BgL_bgl_string2658za700za7za7_2847za7, "homogeneous-vector-info", 23);
	      DEFINE_STRING(BGl_string2659z00zz__srfi4z00,
		BgL_bgl_string2659za700za7za7_2848za7, "Illegal hvector ident", 21);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_s32vectorzd2copyz12zd2envz12zz__srfi4z00,
		BgL_bgl__s32vectorza7d2cop2849za7, opt_generic_entry,
		BGl__s32vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u8vectorzd2envzd2zz__srfi4z00,
		BgL_bgl_za762u8vectorza762za7za72850z00, va_generic_entry,
		BGl_z62u8vectorz62zz__srfi4z00, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string2740z00zz__srfi4z00,
		BgL_bgl_string2740za700za7za7_2851za7, "&list->u16vector", 16);
	      DEFINE_STRING(BGl_string2741z00zz__srfi4z00,
		BgL_bgl_string2741za700za7za7_2852za7, "&list->s32vector", 16);
	      DEFINE_STRING(BGl_string2660z00zz__srfi4z00,
		BgL_bgl_string2660za700za7za7_2853za7, "hvector", 7);
	      DEFINE_STRING(BGl_string2742z00zz__srfi4z00,
		BgL_bgl_string2742za700za7za7_2854za7, "&list->u32vector", 16);
	      DEFINE_STRING(BGl_string2661z00zz__srfi4z00,
		BgL_bgl_string2661za700za7za7_2855za7, "/tmp/4.4a/runtime/Llib/srfi4.scm",
		32);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u32vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl_za762u32vectorza7f3za72856za7, BGl_z62u32vectorzf3z91zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2743z00zz__srfi4z00,
		BgL_bgl_string2743za700za7za7_2857za7, "&list->s64vector", 16);
	      DEFINE_STRING(BGl_string2662z00zz__srfi4z00,
		BgL_bgl_string2662za700za7za7_2858za7, "&s8vector-length", 16);
	      DEFINE_STRING(BGl_string2744z00zz__srfi4z00,
		BgL_bgl_string2744za700za7za7_2859za7, "&list->u64vector", 16);
	      DEFINE_STRING(BGl_string2663z00zz__srfi4z00,
		BgL_bgl_string2663za700za7za7_2860za7, "s8vector", 8);
	      DEFINE_STRING(BGl_string2745z00zz__srfi4z00,
		BgL_bgl_string2745za700za7za7_2861za7, "&list->f32vector", 16);
	      DEFINE_STRING(BGl_string2664z00zz__srfi4z00,
		BgL_bgl_string2664za700za7za7_2862za7, "&u8vector-length", 16);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s64vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl_za762s64vectorza7f3za72863za7, BGl_z62s64vectorzf3z91zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2746z00zz__srfi4z00,
		BgL_bgl_string2746za700za7za7_2864za7, "&list->f64vector", 16);
	      DEFINE_STRING(BGl_string2665z00zz__srfi4z00,
		BgL_bgl_string2665za700za7za7_2865za7, "u8vector", 8);
	      DEFINE_STRING(BGl_string2747z00zz__srfi4z00,
		BgL_bgl_string2747za700za7za7_2866za7, "_s8vector-copy!", 15);
	      DEFINE_STRING(BGl_string2666z00zz__srfi4z00,
		BgL_bgl_string2666za700za7za7_2867za7, "&s16vector-length", 17);
	      DEFINE_STRING(BGl_string2748z00zz__srfi4z00,
		BgL_bgl_string2748za700za7za7_2868za7, "_u8vector-copy!", 15);
	      DEFINE_STRING(BGl_string2667z00zz__srfi4z00,
		BgL_bgl_string2667za700za7za7_2869za7, "s16vector", 9);
	      DEFINE_STRING(BGl_string2749z00zz__srfi4z00,
		BgL_bgl_string2749za700za7za7_2870za7, "_s16vector-copy!", 16);
	      DEFINE_STRING(BGl_string2668z00zz__srfi4z00,
		BgL_bgl_string2668za700za7za7_2871za7, "&u16vector-length", 17);
	      DEFINE_STRING(BGl_string2669z00zz__srfi4z00,
		BgL_bgl_string2669za700za7za7_2872za7, "u16vector", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2s32vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2s32vecto2873za7, opt_generic_entry,
		BGl__makezd2s32vectorzd2zz__srfi4z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2750z00zz__srfi4z00,
		BgL_bgl_string2750za700za7za7_2874za7, "_u16vector-copy!", 16);
	      DEFINE_STRING(BGl_string2751z00zz__srfi4z00,
		BgL_bgl_string2751za700za7za7_2875za7, "_s32vector-copy!", 16);
	      DEFINE_STRING(BGl_string2670z00zz__srfi4z00,
		BgL_bgl_string2670za700za7za7_2876za7, "&s32vector-length", 17);
	      DEFINE_STRING(BGl_string2752z00zz__srfi4z00,
		BgL_bgl_string2752za700za7za7_2877za7, "_u32vector-copy!", 16);
	      DEFINE_STRING(BGl_string2671z00zz__srfi4z00,
		BgL_bgl_string2671za700za7za7_2878za7, "s32vector", 9);
	      DEFINE_STRING(BGl_string2753z00zz__srfi4z00,
		BgL_bgl_string2753za700za7za7_2879za7, "_s64vector-copy!", 16);
	      DEFINE_STRING(BGl_string2672z00zz__srfi4z00,
		BgL_bgl_string2672za700za7za7_2880za7, "&u32vector-length", 17);
	      DEFINE_STRING(BGl_string2754z00zz__srfi4z00,
		BgL_bgl_string2754za700za7za7_2881za7, "_u64vector-copy!", 16);
	      DEFINE_STRING(BGl_string2673z00zz__srfi4z00,
		BgL_bgl_string2673za700za7za7_2882za7, "u32vector", 9);
	      DEFINE_STRING(BGl_string2755z00zz__srfi4z00,
		BgL_bgl_string2755za700za7za7_2883za7, "_f32vector-copy!", 16);
	      DEFINE_STRING(BGl_string2674z00zz__srfi4z00,
		BgL_bgl_string2674za700za7za7_2884za7, "&s64vector-length", 17);
	      DEFINE_STRING(BGl_string2756z00zz__srfi4z00,
		BgL_bgl_string2756za700za7za7_2885za7, "_f64vector-copy!", 16);
	      DEFINE_STRING(BGl_string2675z00zz__srfi4z00,
		BgL_bgl_string2675za700za7za7_2886za7, "s64vector", 9);
	      DEFINE_STRING(BGl_string2757z00zz__srfi4z00,
		BgL_bgl_string2757za700za7za7_2887za7, "__srfi4", 7);
	      DEFINE_STRING(BGl_string2676z00zz__srfi4z00,
		BgL_bgl_string2676za700za7za7_2888za7, "&u64vector-length", 17);
	      DEFINE_STRING(BGl_string2677z00zz__srfi4z00,
		BgL_bgl_string2677za700za7za7_2889za7, "u64vector", 9);
	      DEFINE_STRING(BGl_string2678z00zz__srfi4z00,
		BgL_bgl_string2678za700za7za7_2890za7, "&f32vector-length", 17);
	      DEFINE_STRING(BGl_string2679z00zz__srfi4z00,
		BgL_bgl_string2679za700za7za7_2891za7, "f32vector", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_u16vectorzd2copyz12zd2envz12zz__srfi4z00,
		BgL_bgl__u16vectorza7d2cop2892za7, opt_generic_entry,
		BGl__u16vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u64vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl_za762u64vectorza7d2l2893z00,
		BGl_z62u64vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2680z00zz__srfi4z00,
		BgL_bgl_string2680za700za7za7_2894za7, "&f64vector-length", 17);
	      DEFINE_STRING(BGl_string2681z00zz__srfi4z00,
		BgL_bgl_string2681za700za7za7_2895za7, "f64vector", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u16vectorzd2envzd2zz__srfi4z00,
		BgL_bgl_za762u16vectorza762za72896za7, va_generic_entry,
		BGl_z62u16vectorz62zz__srfi4z00, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string2682z00zz__srfi4z00,
		BgL_bgl_string2682za700za7za7_2897za7, "_make-s8vector", 14);
	      DEFINE_STRING(BGl_string2683z00zz__srfi4z00,
		BgL_bgl_string2683za700za7za7_2898za7, "bint", 4);
	      DEFINE_STRING(BGl_string2684z00zz__srfi4z00,
		BgL_bgl_string2684za700za7za7_2899za7, "bint8", 5);
	      DEFINE_STRING(BGl_string2685z00zz__srfi4z00,
		BgL_bgl_string2685za700za7za7_2900za7, "_make-u8vector", 14);
	      DEFINE_STRING(BGl_string2686z00zz__srfi4z00,
		BgL_bgl_string2686za700za7za7_2901za7, "buint8", 6);
	      DEFINE_STRING(BGl_string2687z00zz__srfi4z00,
		BgL_bgl_string2687za700za7za7_2902za7, "_make-s16vector", 15);
	      DEFINE_STRING(BGl_string2688z00zz__srfi4z00,
		BgL_bgl_string2688za700za7za7_2903za7, "bint16", 6);
	      DEFINE_STRING(BGl_string2689z00zz__srfi4z00,
		BgL_bgl_string2689za700za7za7_2904za7, "_make-u16vector", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3s16vectorzd2envze3zz__srfi4z00,
		BgL_bgl_za762listza7d2za7e3s162905za7,
		BGl_z62listzd2ze3s16vectorz53zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u8vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl_za762u8vectorza7f3za792906za7, BGl_z62u8vectorzf3z91zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s8vectorzd2copyz12zd2envz12zz__srfi4z00,
		BgL_bgl__s8vectorza7d2copy2907za7, opt_generic_entry,
		BGl__s8vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2690z00zz__srfi4z00,
		BgL_bgl_string2690za700za7za7_2908za7, "buint16", 7);
	      DEFINE_STRING(BGl_string2691z00zz__srfi4z00,
		BgL_bgl_string2691za700za7za7_2909za7, "_make-s32vector", 15);
	      DEFINE_STRING(BGl_string2692z00zz__srfi4z00,
		BgL_bgl_string2692za700za7za7_2910za7, "bint32", 6);
	      DEFINE_STRING(BGl_string2693z00zz__srfi4z00,
		BgL_bgl_string2693za700za7za7_2911za7, "_make-u32vector", 15);
	      DEFINE_STRING(BGl_string2694z00zz__srfi4z00,
		BgL_bgl_string2694za700za7za7_2912za7, "buint32", 7);
	      DEFINE_STRING(BGl_string2695z00zz__srfi4z00,
		BgL_bgl_string2695za700za7za7_2913za7, "_make-s64vector", 15);
	      DEFINE_STRING(BGl_string2696z00zz__srfi4z00,
		BgL_bgl_string2696za700za7za7_2914za7, "bint64", 6);
	      DEFINE_STRING(BGl_string2697z00zz__srfi4z00,
		BgL_bgl_string2697za700za7za7_2915za7, "_make-u64vector", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_hvectorzd2rangezd2errorzd2envzd2zz__srfi4z00,
		BgL_bgl_za762hvectorza7d2ran2916z00,
		BGl_z62hvectorzd2rangezd2errorz62zz__srfi4z00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2698z00zz__srfi4z00,
		BgL_bgl_string2698za700za7za7_2917za7, "buint64", 7);
	      DEFINE_STRING(BGl_string2699z00zz__srfi4z00,
		BgL_bgl_string2699za700za7za7_2918za7, "_make-f32vector", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_u32vectorzd2copyz12zd2envz12zz__srfi4z00,
		BgL_bgl__u32vectorza7d2cop2919za7, opt_generic_entry,
		BGl__u32vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s32vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl_za762s32vectorza7d2l2920z00,
		BGl_z62s32vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s16vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl_za762s16vectorza7d2l2921z00,
		BGl_z62s16vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s16vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl_za762s16vectorza7d2s2922z00,
		BGl_z62s16vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2f32vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2f32vecto2923za7, opt_generic_entry,
		BGl__makezd2f32vectorzd2zz__srfi4z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f64vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl_za762f64vectorza7d2l2924z00,
		BGl_z62f64vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s64vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl_za762s64vectorza7d2r2925z00, BGl_z62s64vectorzd2refzb0zz__srfi4z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u64vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl_za762u64vectorza7d2r2926z00, BGl_z62u64vectorzd2refzb0zz__srfi4z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u8vectorzd2copyz12zd2envz12zz__srfi4z00,
		BgL_bgl__u8vectorza7d2copy2927za7, opt_generic_entry,
		BGl__u8vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u64vectorzd2envzd2zz__srfi4z00,
		BgL_bgl_za762u64vectorza762za72928za7, va_generic_entry,
		BGl_z62u64vectorz62zz__srfi4z00, BUNSPEC, -1);
	extern obj_t BGl_zd3u32zd2envz01zz__r4_numbers_6_5_fixnumz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_s16vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl_za762s16vectorza7d2za72929za7,
		BGl_z62s16vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3s64vectorzd2envze3zz__srfi4z00,
		BgL_bgl_za762listza7d2za7e3s642930za7,
		BGl_z62listzd2ze3s64vectorz53zz__srfi4z00, 0L, BUNSPEC, 1);
	extern obj_t BGl_zd3u8zd2envz01zz__r4_numbers_6_5_fixnumz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_s32vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl_za762s32vectorza7f3za72931za7, BGl_z62s32vectorzf3z91zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u16vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl_za762u16vectorza7d2s2932z00,
		BGl_z62u16vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2s8vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2s8vector2933za7, opt_generic_entry,
		BGl__makezd2s8vectorzd2zz__srfi4z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_s32vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl_za762s32vectorza7d2za72934za7,
		BGl_z62s32vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s32vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl_za762s32vectorza7d2s2935z00,
		BGl_z62s32vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_f64vectorzd2copyz12zd2envz12zz__srfi4z00,
		BgL_bgl__f64vectorza7d2cop2936za7, opt_generic_entry,
		BGl__f64vectorzd2copyz12zc0zz__srfi4z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3u32vectorzd2envze3zz__srfi4z00,
		BgL_bgl_za762listza7d2za7e3u322937za7,
		BGl_z62listzd2ze3u32vectorz53zz__srfi4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3f64vectorzd2envze3zz__srfi4z00,
		BgL_bgl_za762listza7d2za7e3f642938za7,
		BGl_z62listzd2ze3f64vectorz53zz__srfi4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_u16vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl_za762u16vectorza7d2za72939za7,
		BGl_z62u16vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s8vectorzd2envzd2zz__srfi4z00,
		BgL_bgl_za762s8vectorza762za7za72940z00, va_generic_entry,
		BGl_z62s8vectorz62zz__srfi4z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u32vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl_za762u32vectorza7d2l2941z00,
		BGl_z62u32vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u16vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl_za762u16vectorza7d2l2942z00,
		BGl_z62u16vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u32vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl_za762u32vectorza7d2s2943z00,
		BGl_z62u32vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s16vectorzd2envzd2zz__srfi4z00,
		BgL_bgl_za762s16vectorza762za72944za7, va_generic_entry,
		BGl_z62s16vectorz62zz__srfi4z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f32vectorzd2setz12zd2envz12zz__srfi4z00,
		BgL_bgl_za762f32vectorza7d2s2945z00,
		BGl_z62f32vectorzd2setz12za2zz__srfi4z00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s8vectorzf3zd2envz21zz__srfi4z00,
		BgL_bgl_za762s8vectorza7f3za792946za7, BGl_z62s8vectorzf3z91zz__srfi4z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2u16vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2u16vecto2947za7, opt_generic_entry,
		BGl__makezd2u16vectorzd2zz__srfi4z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s8vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl_za762s8vectorza7d2za7e2948za7,
		BGl_z62s8vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f32vectorzd2refzd2envz00zz__srfi4z00,
		BgL_bgl_za762f32vectorza7d2r2949z00, BGl_z62f32vectorzd2refzb0zz__srfi4z00,
		0L, BUNSPEC, 2);
	extern obj_t BGl_zd3u16zd2envz01zz__r4_numbers_6_5_fixnumz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_u32vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl_za762u32vectorza7d2za72950za7,
		BGl_z62u32vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1);
	extern obj_t BGl_zd3flzd2envz01zz__r4_numbers_6_5_flonumz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_f32vectorzd2lengthzd2envz00zz__srfi4z00,
		BgL_bgl_za762f32vectorza7d2l2951z00,
		BGl_z62f32vectorzd2lengthzb0zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u8vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl_za762u8vectorza7d2za7e2952za7,
		BGl_z62u8vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_s64vectorzd2envzd2zz__srfi4z00,
		BgL_bgl_za762s64vectorza762za72953za7, va_generic_entry,
		BGl_z62s64vectorz62zz__srfi4z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2u64vectorzd2envz00zz__srfi4z00,
		BgL_bgl__makeza7d2u64vecto2954za7, opt_generic_entry,
		BGl__makezd2u64vectorzd2zz__srfi4z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u32vectorzd2envzd2zz__srfi4z00,
		BgL_bgl_za762u32vectorza762za72955za7, va_generic_entry,
		BGl_z62u32vectorz62zz__srfi4z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_f64vectorzd2ze3listzd2envze3zz__srfi4z00,
		BgL_bgl_za762f64vectorza7d2za72956za7,
		BGl_z62f64vectorzd2ze3listz53zz__srfi4z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_homogeneouszd2vectorzd2infozd2envzd2zz__srfi4z00,
		BgL_bgl_za762homogeneousza7d2957z00,
		BGl_z62homogeneouszd2vectorzd2infoz62zz__srfi4z00, 0L, BUNSPEC, 1);
	extern obj_t BGl_zd3s64zd2envz01zz__r4_numbers_6_5_fixnumz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3s32vectorzd2envze3zz__srfi4z00,
		BgL_bgl_za762listza7d2za7e3s322958za7,
		BGl_z62listzd2ze3s32vectorz53zz__srfi4z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f64vectorzd2envzd2zz__srfi4z00,
		BgL_bgl_za762f64vectorza762za72959za7, va_generic_entry,
		BGl_z62f64vectorz62zz__srfi4z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3u8vectorzd2envze3zz__srfi4z00,
		BgL_bgl_za762listza7d2za7e3u8v2960za7,
		BGl_z62listzd2ze3u8vectorz53zz__srfi4z00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol2640z00zz__srfi4z00));
		     ADD_ROOT((void *) (&BGl_symbol2642z00zz__srfi4z00));
		     ADD_ROOT((void *) (&BGl_symbol2644z00zz__srfi4z00));
		     ADD_ROOT((void *) (&BGl_symbol2646z00zz__srfi4z00));
		     ADD_ROOT((void *) (&BGl_symbol2648z00zz__srfi4z00));
		     ADD_ROOT((void *) (&BGl_symbol2650z00zz__srfi4z00));
		     ADD_ROOT((void *) (&BGl_symbol2652z00zz__srfi4z00));
		     ADD_ROOT((void *) (&BGl_symbol2654z00zz__srfi4z00));
		     ADD_ROOT((void *) (&BGl_symbol2656z00zz__srfi4z00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__srfi4z00));
		     ADD_ROOT((void *) (&BGl_symbol2638z00zz__srfi4z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__srfi4z00(long
		BgL_checksumz00_4189, char *BgL_fromz00_4190)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__srfi4z00))
				{
					BGl_requirezd2initializa7ationz75zz__srfi4z00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__srfi4z00();
					BGl_cnstzd2initzd2zz__srfi4z00();
					BGl_importedzd2moduleszd2initz00zz__srfi4z00();
					return BGl_methodzd2initzd2zz__srfi4z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__srfi4z00()
	{
		{	/* Llib/srfi4.scm 15 */
			BGl_symbol2638z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2639z00zz__srfi4z00);
			BGl_symbol2640z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2641z00zz__srfi4z00);
			BGl_symbol2642z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2643z00zz__srfi4z00);
			BGl_symbol2644z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2645z00zz__srfi4z00);
			BGl_symbol2646z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2647z00zz__srfi4z00);
			BGl_symbol2648z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2649z00zz__srfi4z00);
			BGl_symbol2650z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2651z00zz__srfi4z00);
			BGl_symbol2652z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2653z00zz__srfi4z00);
			BGl_symbol2654z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2655z00zz__srfi4z00);
			return (BGl_symbol2656z00zz__srfi4z00 =
				bstring_to_symbol(BGl_string2657z00zz__srfi4z00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__srfi4z00()
	{
		{	/* Llib/srfi4.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* homogeneous-vector? */
	BGL_EXPORTED_DEF obj_t BGl_homogeneouszd2vectorzf3z21zz__srfi4z00(obj_t
		BgL_xz00_3)
	{
		{	/* Llib/srfi4.scm 569 */
			return BBOOL(BGL_HVECTORP(BgL_xz00_3));
		}

	}



/* &homogeneous-vector? */
	obj_t BGl_z62homogeneouszd2vectorzf3z43zz__srfi4z00(obj_t BgL_envz00_3430,
		obj_t BgL_xz00_3431)
	{
		{	/* Llib/srfi4.scm 569 */
			return BGl_homogeneouszd2vectorzf3z21zz__srfi4z00(BgL_xz00_3431);
		}

	}



/* s8vector? */
	BGL_EXPORTED_DEF bool_t BGl_s8vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_4)
	{
		{	/* Llib/srfi4.scm 570 */
			return BGL_S8VECTORP(BgL_xz00_4);
		}

	}



/* &s8vector? */
	obj_t BGl_z62s8vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3432,
		obj_t BgL_xz00_3433)
	{
		{	/* Llib/srfi4.scm 570 */
			return BBOOL(BGl_s8vectorzf3zf3zz__srfi4z00(BgL_xz00_3433));
		}

	}



/* u8vector? */
	BGL_EXPORTED_DEF bool_t BGl_u8vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_5)
	{
		{	/* Llib/srfi4.scm 571 */
			return BGL_U8VECTORP(BgL_xz00_5);
		}

	}



/* &u8vector? */
	obj_t BGl_z62u8vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3434,
		obj_t BgL_xz00_3435)
	{
		{	/* Llib/srfi4.scm 571 */
			return BBOOL(BGl_u8vectorzf3zf3zz__srfi4z00(BgL_xz00_3435));
		}

	}



/* s16vector? */
	BGL_EXPORTED_DEF bool_t BGl_s16vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_6)
	{
		{	/* Llib/srfi4.scm 572 */
			return BGL_S16VECTORP(BgL_xz00_6);
		}

	}



/* &s16vector? */
	obj_t BGl_z62s16vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3436,
		obj_t BgL_xz00_3437)
	{
		{	/* Llib/srfi4.scm 572 */
			return BBOOL(BGl_s16vectorzf3zf3zz__srfi4z00(BgL_xz00_3437));
		}

	}



/* u16vector? */
	BGL_EXPORTED_DEF bool_t BGl_u16vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_7)
	{
		{	/* Llib/srfi4.scm 573 */
			return BGL_U16VECTORP(BgL_xz00_7);
		}

	}



/* &u16vector? */
	obj_t BGl_z62u16vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3438,
		obj_t BgL_xz00_3439)
	{
		{	/* Llib/srfi4.scm 573 */
			return BBOOL(BGl_u16vectorzf3zf3zz__srfi4z00(BgL_xz00_3439));
		}

	}



/* s32vector? */
	BGL_EXPORTED_DEF bool_t BGl_s32vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_8)
	{
		{	/* Llib/srfi4.scm 574 */
			return BGL_S32VECTORP(BgL_xz00_8);
		}

	}



/* &s32vector? */
	obj_t BGl_z62s32vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3440,
		obj_t BgL_xz00_3441)
	{
		{	/* Llib/srfi4.scm 574 */
			return BBOOL(BGl_s32vectorzf3zf3zz__srfi4z00(BgL_xz00_3441));
		}

	}



/* u32vector? */
	BGL_EXPORTED_DEF bool_t BGl_u32vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_9)
	{
		{	/* Llib/srfi4.scm 575 */
			return BGL_U32VECTORP(BgL_xz00_9);
		}

	}



/* &u32vector? */
	obj_t BGl_z62u32vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3442,
		obj_t BgL_xz00_3443)
	{
		{	/* Llib/srfi4.scm 575 */
			return BBOOL(BGl_u32vectorzf3zf3zz__srfi4z00(BgL_xz00_3443));
		}

	}



/* s64vector? */
	BGL_EXPORTED_DEF bool_t BGl_s64vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_10)
	{
		{	/* Llib/srfi4.scm 576 */
			return BGL_S64VECTORP(BgL_xz00_10);
		}

	}



/* &s64vector? */
	obj_t BGl_z62s64vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3444,
		obj_t BgL_xz00_3445)
	{
		{	/* Llib/srfi4.scm 576 */
			return BBOOL(BGl_s64vectorzf3zf3zz__srfi4z00(BgL_xz00_3445));
		}

	}



/* u64vector? */
	BGL_EXPORTED_DEF bool_t BGl_u64vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_11)
	{
		{	/* Llib/srfi4.scm 577 */
			return BGL_U64VECTORP(BgL_xz00_11);
		}

	}



/* &u64vector? */
	obj_t BGl_z62u64vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3446,
		obj_t BgL_xz00_3447)
	{
		{	/* Llib/srfi4.scm 577 */
			return BBOOL(BGl_u64vectorzf3zf3zz__srfi4z00(BgL_xz00_3447));
		}

	}



/* f32vector? */
	BGL_EXPORTED_DEF bool_t BGl_f32vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_12)
	{
		{	/* Llib/srfi4.scm 578 */
			return BGL_F32VECTORP(BgL_xz00_12);
		}

	}



/* &f32vector? */
	obj_t BGl_z62f32vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3448,
		obj_t BgL_xz00_3449)
	{
		{	/* Llib/srfi4.scm 578 */
			return BBOOL(BGl_f32vectorzf3zf3zz__srfi4z00(BgL_xz00_3449));
		}

	}



/* f64vector? */
	BGL_EXPORTED_DEF bool_t BGl_f64vectorzf3zf3zz__srfi4z00(obj_t BgL_xz00_13)
	{
		{	/* Llib/srfi4.scm 579 */
			return BGL_F64VECTORP(BgL_xz00_13);
		}

	}



/* &f64vector? */
	obj_t BGl_z62f64vectorzf3z91zz__srfi4z00(obj_t BgL_envz00_3450,
		obj_t BgL_xz00_3451)
	{
		{	/* Llib/srfi4.scm 579 */
			return BBOOL(BGl_f64vectorzf3zf3zz__srfi4z00(BgL_xz00_3451));
		}

	}



/* homogeneous-vector-info */
	BGL_EXPORTED_DEF obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t
		BgL_oz00_14)
	{
		{	/* Llib/srfi4.scm 584 */
			if (BGL_HVECTORP(BgL_oz00_14))
				{	/* Llib/srfi4.scm 586 */
					int BgL_aux1043z00_1286;

					BgL_aux1043z00_1286 = BGL_HVECTOR_IDENT(BgL_oz00_14);
					switch ((long) (BgL_aux1043z00_1286))
						{
						case ((long) 0):

							{	/* Llib/srfi4.scm 590 */
								obj_t BgL_val0_1143z00_1288;

								BgL_val0_1143z00_1288 = BGl_symbol2638z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 590 */
									int BgL_res1929z00_2252;

									{	/* Llib/srfi4.scm 590 */
										int BgL_tmpz00_4245;

										BgL_tmpz00_4245 = (int) (((long) 5));
										BgL_res1929z00_2252 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4245);
									} BgL_res1929z00_2252;
								}
								{	/* Llib/srfi4.scm 590 */
									obj_t BgL_auxz00_4250;
									int BgL_tmpz00_4248;

									BgL_auxz00_4250 = BINT(((long) 1));
									BgL_tmpz00_4248 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4248, BgL_auxz00_4250);
								}
								{	/* Llib/srfi4.scm 590 */
									int BgL_tmpz00_4253;

									BgL_tmpz00_4253 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4253,
										BGl_s8vectorzd2refzd2envz00zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 590 */
									int BgL_tmpz00_4256;

									BgL_tmpz00_4256 = (int) (((long) 3));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4256,
										BGl_s8vectorzd2setz12zd2envz12zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 590 */
									int BgL_tmpz00_4259;

									BgL_tmpz00_4259 = (int) (((long) 4));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4259,
										BGl_zd3s8zd2envz01zz__r4_numbers_6_5_fixnumz00);
								}
								return BgL_val0_1143z00_1288;
							}
							break;
						case ((long) 1):

							{	/* Llib/srfi4.scm 592 */
								obj_t BgL_val0_1148z00_1293;

								BgL_val0_1148z00_1293 = BGl_symbol2640z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 592 */
									int BgL_res1930z00_2253;

									{	/* Llib/srfi4.scm 592 */
										int BgL_tmpz00_4262;

										BgL_tmpz00_4262 = (int) (((long) 5));
										BgL_res1930z00_2253 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4262);
									} BgL_res1930z00_2253;
								}
								{	/* Llib/srfi4.scm 592 */
									obj_t BgL_auxz00_4267;
									int BgL_tmpz00_4265;

									BgL_auxz00_4267 = BINT(((long) 1));
									BgL_tmpz00_4265 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4265, BgL_auxz00_4267);
								}
								{	/* Llib/srfi4.scm 592 */
									int BgL_tmpz00_4270;

									BgL_tmpz00_4270 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4270,
										BGl_u8vectorzd2refzd2envz00zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 592 */
									int BgL_tmpz00_4273;

									BgL_tmpz00_4273 = (int) (((long) 3));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4273,
										BGl_u8vectorzd2setz12zd2envz12zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 592 */
									int BgL_tmpz00_4276;

									BgL_tmpz00_4276 = (int) (((long) 4));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4276,
										BGl_zd3u8zd2envz01zz__r4_numbers_6_5_fixnumz00);
								}
								return BgL_val0_1148z00_1293;
							}
							break;
						case ((long) 2):

							{	/* Llib/srfi4.scm 594 */
								obj_t BgL_val0_1153z00_1298;

								BgL_val0_1153z00_1298 = BGl_symbol2642z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 594 */
									int BgL_res1931z00_2254;

									{	/* Llib/srfi4.scm 594 */
										int BgL_tmpz00_4279;

										BgL_tmpz00_4279 = (int) (((long) 5));
										BgL_res1931z00_2254 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4279);
									} BgL_res1931z00_2254;
								}
								{	/* Llib/srfi4.scm 594 */
									obj_t BgL_auxz00_4284;
									int BgL_tmpz00_4282;

									BgL_auxz00_4284 = BINT(((long) 2));
									BgL_tmpz00_4282 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4282, BgL_auxz00_4284);
								}
								{	/* Llib/srfi4.scm 594 */
									int BgL_tmpz00_4287;

									BgL_tmpz00_4287 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4287,
										BGl_s16vectorzd2refzd2envz00zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 594 */
									int BgL_tmpz00_4290;

									BgL_tmpz00_4290 = (int) (((long) 3));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4290,
										BGl_s16vectorzd2setz12zd2envz12zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 594 */
									int BgL_tmpz00_4293;

									BgL_tmpz00_4293 = (int) (((long) 4));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4293,
										BGl_zd3s16zd2envz01zz__r4_numbers_6_5_fixnumz00);
								}
								return BgL_val0_1153z00_1298;
							}
							break;
						case ((long) 3):

							{	/* Llib/srfi4.scm 596 */
								obj_t BgL_val0_1158z00_1303;

								BgL_val0_1158z00_1303 = BGl_symbol2644z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 596 */
									int BgL_res1932z00_2255;

									{	/* Llib/srfi4.scm 596 */
										int BgL_tmpz00_4296;

										BgL_tmpz00_4296 = (int) (((long) 5));
										BgL_res1932z00_2255 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4296);
									} BgL_res1932z00_2255;
								}
								{	/* Llib/srfi4.scm 596 */
									obj_t BgL_auxz00_4301;
									int BgL_tmpz00_4299;

									BgL_auxz00_4301 = BINT(((long) 2));
									BgL_tmpz00_4299 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4299, BgL_auxz00_4301);
								}
								{	/* Llib/srfi4.scm 596 */
									int BgL_tmpz00_4304;

									BgL_tmpz00_4304 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4304,
										BGl_u16vectorzd2refzd2envz00zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 596 */
									int BgL_tmpz00_4307;

									BgL_tmpz00_4307 = (int) (((long) 3));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4307,
										BGl_u16vectorzd2setz12zd2envz12zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 596 */
									int BgL_tmpz00_4310;

									BgL_tmpz00_4310 = (int) (((long) 4));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4310,
										BGl_zd3u16zd2envz01zz__r4_numbers_6_5_fixnumz00);
								}
								return BgL_val0_1158z00_1303;
							}
							break;
						case ((long) 4):

							{	/* Llib/srfi4.scm 598 */
								obj_t BgL_val0_1163z00_1308;

								BgL_val0_1163z00_1308 = BGl_symbol2646z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 598 */
									int BgL_res1933z00_2256;

									{	/* Llib/srfi4.scm 598 */
										int BgL_tmpz00_4313;

										BgL_tmpz00_4313 = (int) (((long) 5));
										BgL_res1933z00_2256 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4313);
									} BgL_res1933z00_2256;
								}
								{	/* Llib/srfi4.scm 598 */
									obj_t BgL_auxz00_4318;
									int BgL_tmpz00_4316;

									BgL_auxz00_4318 = BINT(((long) 4));
									BgL_tmpz00_4316 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4316, BgL_auxz00_4318);
								}
								{	/* Llib/srfi4.scm 598 */
									int BgL_tmpz00_4321;

									BgL_tmpz00_4321 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4321,
										BGl_s32vectorzd2refzd2envz00zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 598 */
									int BgL_tmpz00_4324;

									BgL_tmpz00_4324 = (int) (((long) 3));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4324,
										BGl_s32vectorzd2setz12zd2envz12zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 598 */
									int BgL_tmpz00_4327;

									BgL_tmpz00_4327 = (int) (((long) 4));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4327,
										BGl_zd3s32zd2envz01zz__r4_numbers_6_5_fixnumz00);
								}
								return BgL_val0_1163z00_1308;
							}
							break;
						case ((long) 5):

							{	/* Llib/srfi4.scm 600 */
								obj_t BgL_val0_1168z00_1313;

								BgL_val0_1168z00_1313 = BGl_symbol2648z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 600 */
									int BgL_res1934z00_2257;

									{	/* Llib/srfi4.scm 600 */
										int BgL_tmpz00_4330;

										BgL_tmpz00_4330 = (int) (((long) 5));
										BgL_res1934z00_2257 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4330);
									} BgL_res1934z00_2257;
								}
								{	/* Llib/srfi4.scm 600 */
									obj_t BgL_auxz00_4335;
									int BgL_tmpz00_4333;

									BgL_auxz00_4335 = BINT(((long) 4));
									BgL_tmpz00_4333 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4333, BgL_auxz00_4335);
								}
								{	/* Llib/srfi4.scm 600 */
									int BgL_tmpz00_4338;

									BgL_tmpz00_4338 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4338,
										BGl_u32vectorzd2refzd2envz00zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 600 */
									int BgL_tmpz00_4341;

									BgL_tmpz00_4341 = (int) (((long) 3));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4341,
										BGl_u32vectorzd2setz12zd2envz12zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 600 */
									int BgL_tmpz00_4344;

									BgL_tmpz00_4344 = (int) (((long) 4));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4344,
										BGl_zd3u32zd2envz01zz__r4_numbers_6_5_fixnumz00);
								}
								return BgL_val0_1168z00_1313;
							}
							break;
						case ((long) 6):

							{	/* Llib/srfi4.scm 602 */
								obj_t BgL_val0_1173z00_1318;

								BgL_val0_1173z00_1318 = BGl_symbol2650z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 602 */
									int BgL_res1935z00_2258;

									{	/* Llib/srfi4.scm 602 */
										int BgL_tmpz00_4347;

										BgL_tmpz00_4347 = (int) (((long) 5));
										BgL_res1935z00_2258 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4347);
									} BgL_res1935z00_2258;
								}
								{	/* Llib/srfi4.scm 602 */
									obj_t BgL_auxz00_4352;
									int BgL_tmpz00_4350;

									BgL_auxz00_4352 = BINT(((long) 8));
									BgL_tmpz00_4350 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4350, BgL_auxz00_4352);
								}
								{	/* Llib/srfi4.scm 602 */
									int BgL_tmpz00_4355;

									BgL_tmpz00_4355 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4355,
										BGl_s64vectorzd2refzd2envz00zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 602 */
									int BgL_tmpz00_4358;

									BgL_tmpz00_4358 = (int) (((long) 3));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4358,
										BGl_s64vectorzd2setz12zd2envz12zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 602 */
									int BgL_tmpz00_4361;

									BgL_tmpz00_4361 = (int) (((long) 4));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4361,
										BGl_zd3s64zd2envz01zz__r4_numbers_6_5_fixnumz00);
								}
								return BgL_val0_1173z00_1318;
							}
							break;
						case ((long) 7):

							{	/* Llib/srfi4.scm 604 */
								obj_t BgL_val0_1178z00_1323;

								BgL_val0_1178z00_1323 = BGl_symbol2652z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 604 */
									int BgL_res1936z00_2259;

									{	/* Llib/srfi4.scm 604 */
										int BgL_tmpz00_4364;

										BgL_tmpz00_4364 = (int) (((long) 5));
										BgL_res1936z00_2259 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4364);
									} BgL_res1936z00_2259;
								}
								{	/* Llib/srfi4.scm 604 */
									obj_t BgL_auxz00_4369;
									int BgL_tmpz00_4367;

									BgL_auxz00_4369 = BINT(((long) 8));
									BgL_tmpz00_4367 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4367, BgL_auxz00_4369);
								}
								{	/* Llib/srfi4.scm 604 */
									int BgL_tmpz00_4372;

									BgL_tmpz00_4372 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4372,
										BGl_u64vectorzd2refzd2envz00zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 604 */
									int BgL_tmpz00_4375;

									BgL_tmpz00_4375 = (int) (((long) 3));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4375,
										BGl_u64vectorzd2setz12zd2envz12zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 604 */
									int BgL_tmpz00_4378;

									BgL_tmpz00_4378 = (int) (((long) 4));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4378,
										BGl_zd3u64zd2envz01zz__r4_numbers_6_5_fixnumz00);
								}
								return BgL_val0_1178z00_1323;
							}
							break;
						case ((long) 8):

							{	/* Llib/srfi4.scm 606 */
								obj_t BgL_val0_1183z00_1328;

								BgL_val0_1183z00_1328 = BGl_symbol2654z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 606 */
									int BgL_res1937z00_2260;

									{	/* Llib/srfi4.scm 606 */
										int BgL_tmpz00_4381;

										BgL_tmpz00_4381 = (int) (((long) 5));
										BgL_res1937z00_2260 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4381);
									} BgL_res1937z00_2260;
								}
								{	/* Llib/srfi4.scm 606 */
									obj_t BgL_auxz00_4386;
									int BgL_tmpz00_4384;

									BgL_auxz00_4386 = BINT(((long) 4));
									BgL_tmpz00_4384 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4384, BgL_auxz00_4386);
								}
								{	/* Llib/srfi4.scm 606 */
									int BgL_tmpz00_4389;

									BgL_tmpz00_4389 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4389,
										BGl_f32vectorzd2refzd2envz00zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 606 */
									int BgL_tmpz00_4392;

									BgL_tmpz00_4392 = (int) (((long) 3));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4392,
										BGl_f32vectorzd2setz12zd2envz12zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 606 */
									int BgL_tmpz00_4395;

									BgL_tmpz00_4395 = (int) (((long) 4));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4395,
										BGl_zd3flzd2envz01zz__r4_numbers_6_5_flonumz00);
								}
								return BgL_val0_1183z00_1328;
							}
							break;
						case ((long) 9):

							{	/* Llib/srfi4.scm 608 */
								obj_t BgL_val0_1188z00_1333;

								BgL_val0_1188z00_1333 = BGl_symbol2656z00zz__srfi4z00;
								{	/* Llib/srfi4.scm 608 */
									int BgL_res1938z00_2261;

									{	/* Llib/srfi4.scm 608 */
										int BgL_tmpz00_4398;

										BgL_tmpz00_4398 = (int) (((long) 5));
										BgL_res1938z00_2261 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4398);
									} BgL_res1938z00_2261;
								}
								{	/* Llib/srfi4.scm 608 */
									obj_t BgL_auxz00_4403;
									int BgL_tmpz00_4401;

									BgL_auxz00_4403 = BINT(((long) 8));
									BgL_tmpz00_4401 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4401, BgL_auxz00_4403);
								}
								{	/* Llib/srfi4.scm 608 */
									int BgL_tmpz00_4406;

									BgL_tmpz00_4406 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4406,
										BGl_f64vectorzd2refzd2envz00zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 608 */
									int BgL_tmpz00_4409;

									BgL_tmpz00_4409 = (int) (((long) 3));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4409,
										BGl_f64vectorzd2setz12zd2envz12zz__srfi4z00);
								}
								{	/* Llib/srfi4.scm 608 */
									int BgL_tmpz00_4412;

									BgL_tmpz00_4412 = (int) (((long) 4));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_4412,
										BGl_zd3flzd2envz01zz__r4_numbers_6_5_flonumz00);
								}
								return BgL_val0_1188z00_1333;
							}
							break;
						default:
							{	/* Llib/srfi4.scm 611 */
								int BgL_arg1387z00_2262;

								BgL_arg1387z00_2262 = BGL_HVECTOR_IDENT(BgL_oz00_14);
								return
									BGl_errorz00zz__errorz00(BGl_string2658z00zz__srfi4z00,
									BGl_string2659z00zz__srfi4z00, BINT(BgL_arg1387z00_2262));
							}
						}
				}
			else
				{	/* Llib/srfi4.scm 585 */
					return
						BGl_bigloozd2typezd2errorz00zz__errorz00
						(BGl_string2658z00zz__srfi4z00, BGl_string2660z00zz__srfi4z00,
						BgL_oz00_14);
				}
		}

	}



/* &homogeneous-vector-info */
	obj_t BGl_z62homogeneouszd2vectorzd2infoz62zz__srfi4z00(obj_t BgL_envz00_3452,
		obj_t BgL_oz00_3453)
	{
		{	/* Llib/srfi4.scm 584 */
			return BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(BgL_oz00_3453);
		}

	}



/* s8vector-length */
	BGL_EXPORTED_DEF long BGl_s8vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_15)
	{
		{	/* Llib/srfi4.scm 617 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_15);
		}

	}



/* &s8vector-length */
	obj_t BGl_z62s8vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3551,
		obj_t BgL_xz00_3552)
	{
		{	/* Llib/srfi4.scm 617 */
			{	/* Llib/srfi4.scm 617 */
				long BgL_tmpz00_4423;

				{	/* Llib/srfi4.scm 617 */
					obj_t BgL_auxz00_4424;

					if (BGL_S8VECTORP(BgL_xz00_3552))
						{	/* Llib/srfi4.scm 617 */
							BgL_auxz00_4424 = BgL_xz00_3552;
						}
					else
						{
							obj_t BgL_auxz00_4427;

							BgL_auxz00_4427 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 25371)), BGl_string2662z00zz__srfi4z00,
								BGl_string2663z00zz__srfi4z00, BgL_xz00_3552);
							FAILURE(BgL_auxz00_4427, BFALSE, BFALSE);
						}
					BgL_tmpz00_4423 =
						BGl_s8vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4424);
				}
				return BINT(BgL_tmpz00_4423);
			}
		}

	}



/* u8vector-length */
	BGL_EXPORTED_DEF long BGl_u8vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_16)
	{
		{	/* Llib/srfi4.scm 618 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_16);
		}

	}



/* &u8vector-length */
	obj_t BGl_z62u8vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3553,
		obj_t BgL_xz00_3554)
	{
		{	/* Llib/srfi4.scm 618 */
			{	/* Llib/srfi4.scm 618 */
				long BgL_tmpz00_4434;

				{	/* Llib/srfi4.scm 618 */
					obj_t BgL_auxz00_4435;

					if (BGL_U8VECTORP(BgL_xz00_3554))
						{	/* Llib/srfi4.scm 618 */
							BgL_auxz00_4435 = BgL_xz00_3554;
						}
					else
						{
							obj_t BgL_auxz00_4438;

							BgL_auxz00_4438 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 25427)), BGl_string2664z00zz__srfi4z00,
								BGl_string2665z00zz__srfi4z00, BgL_xz00_3554);
							FAILURE(BgL_auxz00_4438, BFALSE, BFALSE);
						}
					BgL_tmpz00_4434 =
						BGl_u8vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4435);
				}
				return BINT(BgL_tmpz00_4434);
			}
		}

	}



/* s16vector-length */
	BGL_EXPORTED_DEF long BGl_s16vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_17)
	{
		{	/* Llib/srfi4.scm 619 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_17);
		}

	}



/* &s16vector-length */
	obj_t BGl_z62s16vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3555,
		obj_t BgL_xz00_3556)
	{
		{	/* Llib/srfi4.scm 619 */
			{	/* Llib/srfi4.scm 619 */
				long BgL_tmpz00_4445;

				{	/* Llib/srfi4.scm 619 */
					obj_t BgL_auxz00_4446;

					if (BGL_S16VECTORP(BgL_xz00_3556))
						{	/* Llib/srfi4.scm 619 */
							BgL_auxz00_4446 = BgL_xz00_3556;
						}
					else
						{
							obj_t BgL_auxz00_4449;

							BgL_auxz00_4449 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 25484)), BGl_string2666z00zz__srfi4z00,
								BGl_string2667z00zz__srfi4z00, BgL_xz00_3556);
							FAILURE(BgL_auxz00_4449, BFALSE, BFALSE);
						}
					BgL_tmpz00_4445 =
						BGl_s16vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4446);
				}
				return BINT(BgL_tmpz00_4445);
			}
		}

	}



/* u16vector-length */
	BGL_EXPORTED_DEF long BGl_u16vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_18)
	{
		{	/* Llib/srfi4.scm 620 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_18);
		}

	}



/* &u16vector-length */
	obj_t BGl_z62u16vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3557,
		obj_t BgL_xz00_3558)
	{
		{	/* Llib/srfi4.scm 620 */
			{	/* Llib/srfi4.scm 620 */
				long BgL_tmpz00_4456;

				{	/* Llib/srfi4.scm 620 */
					obj_t BgL_auxz00_4457;

					if (BGL_U16VECTORP(BgL_xz00_3558))
						{	/* Llib/srfi4.scm 620 */
							BgL_auxz00_4457 = BgL_xz00_3558;
						}
					else
						{
							obj_t BgL_auxz00_4460;

							BgL_auxz00_4460 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 25541)), BGl_string2668z00zz__srfi4z00,
								BGl_string2669z00zz__srfi4z00, BgL_xz00_3558);
							FAILURE(BgL_auxz00_4460, BFALSE, BFALSE);
						}
					BgL_tmpz00_4456 =
						BGl_u16vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4457);
				}
				return BINT(BgL_tmpz00_4456);
			}
		}

	}



/* s32vector-length */
	BGL_EXPORTED_DEF long BGl_s32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_19)
	{
		{	/* Llib/srfi4.scm 621 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_19);
		}

	}



/* &s32vector-length */
	obj_t BGl_z62s32vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3559,
		obj_t BgL_xz00_3560)
	{
		{	/* Llib/srfi4.scm 621 */
			{	/* Llib/srfi4.scm 621 */
				long BgL_tmpz00_4467;

				{	/* Llib/srfi4.scm 621 */
					obj_t BgL_auxz00_4468;

					if (BGL_S32VECTORP(BgL_xz00_3560))
						{	/* Llib/srfi4.scm 621 */
							BgL_auxz00_4468 = BgL_xz00_3560;
						}
					else
						{
							obj_t BgL_auxz00_4471;

							BgL_auxz00_4471 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 25598)), BGl_string2670z00zz__srfi4z00,
								BGl_string2671z00zz__srfi4z00, BgL_xz00_3560);
							FAILURE(BgL_auxz00_4471, BFALSE, BFALSE);
						}
					BgL_tmpz00_4467 =
						BGl_s32vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4468);
				}
				return BINT(BgL_tmpz00_4467);
			}
		}

	}



/* u32vector-length */
	BGL_EXPORTED_DEF long BGl_u32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_20)
	{
		{	/* Llib/srfi4.scm 622 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_20);
		}

	}



/* &u32vector-length */
	obj_t BGl_z62u32vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3561,
		obj_t BgL_xz00_3562)
	{
		{	/* Llib/srfi4.scm 622 */
			{	/* Llib/srfi4.scm 622 */
				long BgL_tmpz00_4478;

				{	/* Llib/srfi4.scm 622 */
					obj_t BgL_auxz00_4479;

					if (BGL_U32VECTORP(BgL_xz00_3562))
						{	/* Llib/srfi4.scm 622 */
							BgL_auxz00_4479 = BgL_xz00_3562;
						}
					else
						{
							obj_t BgL_auxz00_4482;

							BgL_auxz00_4482 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 25655)), BGl_string2672z00zz__srfi4z00,
								BGl_string2673z00zz__srfi4z00, BgL_xz00_3562);
							FAILURE(BgL_auxz00_4482, BFALSE, BFALSE);
						}
					BgL_tmpz00_4478 =
						BGl_u32vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4479);
				}
				return BINT(BgL_tmpz00_4478);
			}
		}

	}



/* s64vector-length */
	BGL_EXPORTED_DEF long BGl_s64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_21)
	{
		{	/* Llib/srfi4.scm 623 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_21);
		}

	}



/* &s64vector-length */
	obj_t BGl_z62s64vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3563,
		obj_t BgL_xz00_3564)
	{
		{	/* Llib/srfi4.scm 623 */
			{	/* Llib/srfi4.scm 623 */
				long BgL_tmpz00_4489;

				{	/* Llib/srfi4.scm 623 */
					obj_t BgL_auxz00_4490;

					if (BGL_S64VECTORP(BgL_xz00_3564))
						{	/* Llib/srfi4.scm 623 */
							BgL_auxz00_4490 = BgL_xz00_3564;
						}
					else
						{
							obj_t BgL_auxz00_4493;

							BgL_auxz00_4493 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 25712)), BGl_string2674z00zz__srfi4z00,
								BGl_string2675z00zz__srfi4z00, BgL_xz00_3564);
							FAILURE(BgL_auxz00_4493, BFALSE, BFALSE);
						}
					BgL_tmpz00_4489 =
						BGl_s64vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4490);
				}
				return BINT(BgL_tmpz00_4489);
			}
		}

	}



/* u64vector-length */
	BGL_EXPORTED_DEF long BGl_u64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_22)
	{
		{	/* Llib/srfi4.scm 624 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_22);
		}

	}



/* &u64vector-length */
	obj_t BGl_z62u64vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3565,
		obj_t BgL_xz00_3566)
	{
		{	/* Llib/srfi4.scm 624 */
			{	/* Llib/srfi4.scm 624 */
				long BgL_tmpz00_4500;

				{	/* Llib/srfi4.scm 624 */
					obj_t BgL_auxz00_4501;

					if (BGL_U64VECTORP(BgL_xz00_3566))
						{	/* Llib/srfi4.scm 624 */
							BgL_auxz00_4501 = BgL_xz00_3566;
						}
					else
						{
							obj_t BgL_auxz00_4504;

							BgL_auxz00_4504 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 25769)), BGl_string2676z00zz__srfi4z00,
								BGl_string2677z00zz__srfi4z00, BgL_xz00_3566);
							FAILURE(BgL_auxz00_4504, BFALSE, BFALSE);
						}
					BgL_tmpz00_4500 =
						BGl_u64vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4501);
				}
				return BINT(BgL_tmpz00_4500);
			}
		}

	}



/* f32vector-length */
	BGL_EXPORTED_DEF long BGl_f32vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_23)
	{
		{	/* Llib/srfi4.scm 625 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_23);
		}

	}



/* &f32vector-length */
	obj_t BGl_z62f32vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3567,
		obj_t BgL_xz00_3568)
	{
		{	/* Llib/srfi4.scm 625 */
			{	/* Llib/srfi4.scm 625 */
				long BgL_tmpz00_4511;

				{	/* Llib/srfi4.scm 625 */
					obj_t BgL_auxz00_4512;

					if (BGL_F32VECTORP(BgL_xz00_3568))
						{	/* Llib/srfi4.scm 625 */
							BgL_auxz00_4512 = BgL_xz00_3568;
						}
					else
						{
							obj_t BgL_auxz00_4515;

							BgL_auxz00_4515 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 25826)), BGl_string2678z00zz__srfi4z00,
								BGl_string2679z00zz__srfi4z00, BgL_xz00_3568);
							FAILURE(BgL_auxz00_4515, BFALSE, BFALSE);
						}
					BgL_tmpz00_4511 =
						BGl_f32vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4512);
				}
				return BINT(BgL_tmpz00_4511);
			}
		}

	}



/* f64vector-length */
	BGL_EXPORTED_DEF long BGl_f64vectorzd2lengthzd2zz__srfi4z00(obj_t BgL_xz00_24)
	{
		{	/* Llib/srfi4.scm 626 */
			return BGL_HVECTOR_LENGTH(BgL_xz00_24);
		}

	}



/* &f64vector-length */
	obj_t BGl_z62f64vectorzd2lengthzb0zz__srfi4z00(obj_t BgL_envz00_3569,
		obj_t BgL_xz00_3570)
	{
		{	/* Llib/srfi4.scm 626 */
			{	/* Llib/srfi4.scm 626 */
				long BgL_tmpz00_4522;

				{	/* Llib/srfi4.scm 626 */
					obj_t BgL_auxz00_4523;

					if (BGL_F64VECTORP(BgL_xz00_3570))
						{	/* Llib/srfi4.scm 626 */
							BgL_auxz00_4523 = BgL_xz00_3570;
						}
					else
						{
							obj_t BgL_auxz00_4526;

							BgL_auxz00_4526 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 25883)), BGl_string2680z00zz__srfi4z00,
								BGl_string2681z00zz__srfi4z00, BgL_xz00_3570);
							FAILURE(BgL_auxz00_4526, BFALSE, BFALSE);
						}
					BgL_tmpz00_4522 =
						BGl_f64vectorzd2lengthzd2zz__srfi4z00(BgL_auxz00_4523);
				}
				return BINT(BgL_tmpz00_4522);
			}
		}

	}



/* s8vector */
	BGL_EXPORTED_DEF obj_t BGl_s8vectorz00zz__srfi4z00(obj_t BgL_xz00_25)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_listzd2ze3s8vectorz31zz__srfi4z00(BgL_xz00_25);
		}

	}



/* &s8vector */
	obj_t BGl_z62s8vectorz62zz__srfi4z00(obj_t BgL_envz00_3571,
		obj_t BgL_xz00_3572)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_s8vectorz00zz__srfi4z00(BgL_xz00_3572);
		}

	}



/* u8vector */
	BGL_EXPORTED_DEF obj_t BGl_u8vectorz00zz__srfi4z00(obj_t BgL_xz00_26)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_listzd2ze3u8vectorz31zz__srfi4z00(BgL_xz00_26);
		}

	}



/* &u8vector */
	obj_t BGl_z62u8vectorz62zz__srfi4z00(obj_t BgL_envz00_3573,
		obj_t BgL_xz00_3574)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_u8vectorz00zz__srfi4z00(BgL_xz00_3574);
		}

	}



/* s16vector */
	BGL_EXPORTED_DEF obj_t BGl_s16vectorz00zz__srfi4z00(obj_t BgL_xz00_27)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_listzd2ze3s16vectorz31zz__srfi4z00(BgL_xz00_27);
		}

	}



/* &s16vector */
	obj_t BGl_z62s16vectorz62zz__srfi4z00(obj_t BgL_envz00_3575,
		obj_t BgL_xz00_3576)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_s16vectorz00zz__srfi4z00(BgL_xz00_3576);
		}

	}



/* u16vector */
	BGL_EXPORTED_DEF obj_t BGl_u16vectorz00zz__srfi4z00(obj_t BgL_xz00_28)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_listzd2ze3u16vectorz31zz__srfi4z00(BgL_xz00_28);
		}

	}



/* &u16vector */
	obj_t BGl_z62u16vectorz62zz__srfi4z00(obj_t BgL_envz00_3577,
		obj_t BgL_xz00_3578)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_u16vectorz00zz__srfi4z00(BgL_xz00_3578);
		}

	}



/* s32vector */
	BGL_EXPORTED_DEF obj_t BGl_s32vectorz00zz__srfi4z00(obj_t BgL_xz00_29)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_listzd2ze3s32vectorz31zz__srfi4z00(BgL_xz00_29);
		}

	}



/* &s32vector */
	obj_t BGl_z62s32vectorz62zz__srfi4z00(obj_t BgL_envz00_3579,
		obj_t BgL_xz00_3580)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_s32vectorz00zz__srfi4z00(BgL_xz00_3580);
		}

	}



/* u32vector */
	BGL_EXPORTED_DEF obj_t BGl_u32vectorz00zz__srfi4z00(obj_t BgL_xz00_30)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_listzd2ze3u32vectorz31zz__srfi4z00(BgL_xz00_30);
		}

	}



/* &u32vector */
	obj_t BGl_z62u32vectorz62zz__srfi4z00(obj_t BgL_envz00_3581,
		obj_t BgL_xz00_3582)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_u32vectorz00zz__srfi4z00(BgL_xz00_3582);
		}

	}



/* s64vector */
	BGL_EXPORTED_DEF obj_t BGl_s64vectorz00zz__srfi4z00(obj_t BgL_xz00_31)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_listzd2ze3s64vectorz31zz__srfi4z00(BgL_xz00_31);
		}

	}



/* &s64vector */
	obj_t BGl_z62s64vectorz62zz__srfi4z00(obj_t BgL_envz00_3583,
		obj_t BgL_xz00_3584)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_s64vectorz00zz__srfi4z00(BgL_xz00_3584);
		}

	}



/* u64vector */
	BGL_EXPORTED_DEF obj_t BGl_u64vectorz00zz__srfi4z00(obj_t BgL_xz00_32)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_listzd2ze3u64vectorz31zz__srfi4z00(BgL_xz00_32);
		}

	}



/* &u64vector */
	obj_t BGl_z62u64vectorz62zz__srfi4z00(obj_t BgL_envz00_3585,
		obj_t BgL_xz00_3586)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_u64vectorz00zz__srfi4z00(BgL_xz00_3586);
		}

	}



/* f32vector */
	BGL_EXPORTED_DEF obj_t BGl_f32vectorz00zz__srfi4z00(obj_t BgL_xz00_33)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_listzd2ze3f32vectorz31zz__srfi4z00(BgL_xz00_33);
		}

	}



/* &f32vector */
	obj_t BGl_z62f32vectorz62zz__srfi4z00(obj_t BgL_envz00_3587,
		obj_t BgL_xz00_3588)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_f32vectorz00zz__srfi4z00(BgL_xz00_3588);
		}

	}



/* f64vector */
	BGL_EXPORTED_DEF obj_t BGl_f64vectorz00zz__srfi4z00(obj_t BgL_xz00_34)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_listzd2ze3f64vectorz31zz__srfi4z00(BgL_xz00_34);
		}

	}



/* &f64vector */
	obj_t BGl_z62f64vectorz62zz__srfi4z00(obj_t BgL_envz00_3589,
		obj_t BgL_xz00_3590)
	{
		{	/* Llib/srfi4.scm 637 */
			return BGl_f64vectorz00zz__srfi4z00(BgL_xz00_3590);
		}

	}



/* _make-s8vector */
	obj_t BGl__makezd2s8vectorzd2zz__srfi4z00(obj_t BgL_env1227z00_38,
		obj_t BgL_opt1226z00_37)
	{
		{	/* Llib/srfi4.scm 661 */
			{	/* Llib/srfi4.scm 661 */
				obj_t BgL_g1228z00_1339;

				BgL_g1228z00_1339 = VECTOR_REF(BgL_opt1226z00_37, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1226z00_37))
					{
					case ((long) 1):

						{	/* Llib/srfi4.scm 661 */

							{	/* Llib/srfi4.scm 661 */
								long BgL_auxz00_4553;

								{	/* Llib/srfi4.scm 661 */
									obj_t BgL_tmpz00_4554;

									if (INTEGERP(BgL_g1228z00_1339))
										{	/* Llib/srfi4.scm 661 */
											BgL_tmpz00_4554 = BgL_g1228z00_1339;
										}
									else
										{
											obj_t BgL_auxz00_4557;

											BgL_auxz00_4557 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 27216)),
												BGl_string2682z00zz__srfi4z00,
												BGl_string2683z00zz__srfi4z00, BgL_g1228z00_1339);
											FAILURE(BgL_auxz00_4557, BFALSE, BFALSE);
										}
									BgL_auxz00_4553 = (long) CINT(BgL_tmpz00_4554);
								}
								return
									BGl_makezd2s8vectorzd2zz__srfi4z00(BgL_auxz00_4553,
									(int8_t) (0));
							}
						}
						break;
					case ((long) 2):

						{	/* Llib/srfi4.scm 661 */
							obj_t BgL_initz00_1344;

							BgL_initz00_1344 = VECTOR_REF(BgL_opt1226z00_37, ((long) 1));
							{	/* Llib/srfi4.scm 661 */

								{	/* Llib/srfi4.scm 661 */
									int8_t BgL_auxz00_4573;
									long BgL_auxz00_4564;

									{	/* Llib/srfi4.scm 661 */
										obj_t BgL_tmpz00_4574;

										if (BGL_INT8P(BgL_initz00_1344))
											{	/* Llib/srfi4.scm 661 */
												BgL_tmpz00_4574 = BgL_initz00_1344;
											}
										else
											{
												obj_t BgL_auxz00_4577;

												BgL_auxz00_4577 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27216)),
													BGl_string2682z00zz__srfi4z00,
													BGl_string2684z00zz__srfi4z00, BgL_initz00_1344);
												FAILURE(BgL_auxz00_4577, BFALSE, BFALSE);
											}
										BgL_auxz00_4573 = BGL_BINT8_TO_INT8(BgL_tmpz00_4574);
									}
									{	/* Llib/srfi4.scm 661 */
										obj_t BgL_tmpz00_4565;

										if (INTEGERP(BgL_g1228z00_1339))
											{	/* Llib/srfi4.scm 661 */
												BgL_tmpz00_4565 = BgL_g1228z00_1339;
											}
										else
											{
												obj_t BgL_auxz00_4568;

												BgL_auxz00_4568 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27216)),
													BGl_string2682z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_g1228z00_1339);
												FAILURE(BgL_auxz00_4568, BFALSE, BFALSE);
											}
										BgL_auxz00_4564 = (long) CINT(BgL_tmpz00_4565);
									}
									return
										BGl_makezd2s8vectorzd2zz__srfi4z00(BgL_auxz00_4564,
										BgL_auxz00_4573);
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



/* make-s8vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2s8vectorzd2zz__srfi4z00(long BgL_lenz00_35,
		int8_t BgL_initz00_36)
	{
		{	/* Llib/srfi4.scm 661 */
			{	/* Llib/srfi4.scm 661 */
				obj_t BgL_vz00_1345;

				{	/* Llib/srfi4.scm 661 */
					int32_t BgL_tmpz00_4585;

					BgL_tmpz00_4585 = (int32_t) (BgL_lenz00_35);
					BgL_vz00_1345 = BGL_ALLOC_S8VECTOR(BgL_tmpz00_4585);
				}
				{
					long BgL_iz00_2270;

					BgL_iz00_2270 = ((long) 0);
				BgL_loopz00_2269:
					if ((BgL_iz00_2270 < BgL_lenz00_35))
						{	/* Llib/srfi4.scm 661 */
							BGL_S8VSET(BgL_vz00_1345, BgL_iz00_2270, BgL_initz00_36);
							BUNSPEC;
							{
								long BgL_iz00_4591;

								BgL_iz00_4591 = (BgL_iz00_2270 + ((long) 1));
								BgL_iz00_2270 = BgL_iz00_4591;
								goto BgL_loopz00_2269;
							}
						}
					else
						{	/* Llib/srfi4.scm 661 */
							((bool_t) 0);
						}
				}
				return BgL_vz00_1345;
			}
		}

	}



/* _make-u8vector */
	obj_t BGl__makezd2u8vectorzd2zz__srfi4z00(obj_t BgL_env1232z00_42,
		obj_t BgL_opt1231z00_41)
	{
		{	/* Llib/srfi4.scm 662 */
			{	/* Llib/srfi4.scm 662 */
				obj_t BgL_g1233z00_1352;

				BgL_g1233z00_1352 = VECTOR_REF(BgL_opt1231z00_41, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1231z00_41))
					{
					case ((long) 1):

						{	/* Llib/srfi4.scm 662 */

							{	/* Llib/srfi4.scm 662 */
								long BgL_auxz00_4594;

								{	/* Llib/srfi4.scm 662 */
									obj_t BgL_tmpz00_4595;

									if (INTEGERP(BgL_g1233z00_1352))
										{	/* Llib/srfi4.scm 662 */
											BgL_tmpz00_4595 = BgL_g1233z00_1352;
										}
									else
										{
											obj_t BgL_auxz00_4598;

											BgL_auxz00_4598 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 27248)),
												BGl_string2685z00zz__srfi4z00,
												BGl_string2683z00zz__srfi4z00, BgL_g1233z00_1352);
											FAILURE(BgL_auxz00_4598, BFALSE, BFALSE);
										}
									BgL_auxz00_4594 = (long) CINT(BgL_tmpz00_4595);
								}
								return
									BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_auxz00_4594,
									(uint8_t) (0));
							}
						}
						break;
					case ((long) 2):

						{	/* Llib/srfi4.scm 662 */
							obj_t BgL_initz00_1357;

							BgL_initz00_1357 = VECTOR_REF(BgL_opt1231z00_41, ((long) 1));
							{	/* Llib/srfi4.scm 662 */

								{	/* Llib/srfi4.scm 662 */
									uint8_t BgL_auxz00_4614;
									long BgL_auxz00_4605;

									{	/* Llib/srfi4.scm 662 */
										obj_t BgL_tmpz00_4615;

										if (BGL_UINT8P(BgL_initz00_1357))
											{	/* Llib/srfi4.scm 662 */
												BgL_tmpz00_4615 = BgL_initz00_1357;
											}
										else
											{
												obj_t BgL_auxz00_4618;

												BgL_auxz00_4618 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27248)),
													BGl_string2685z00zz__srfi4z00,
													BGl_string2686z00zz__srfi4z00, BgL_initz00_1357);
												FAILURE(BgL_auxz00_4618, BFALSE, BFALSE);
											}
										BgL_auxz00_4614 = BGL_BUINT8_TO_UINT8(BgL_tmpz00_4615);
									}
									{	/* Llib/srfi4.scm 662 */
										obj_t BgL_tmpz00_4606;

										if (INTEGERP(BgL_g1233z00_1352))
											{	/* Llib/srfi4.scm 662 */
												BgL_tmpz00_4606 = BgL_g1233z00_1352;
											}
										else
											{
												obj_t BgL_auxz00_4609;

												BgL_auxz00_4609 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27248)),
													BGl_string2685z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_g1233z00_1352);
												FAILURE(BgL_auxz00_4609, BFALSE, BFALSE);
											}
										BgL_auxz00_4605 = (long) CINT(BgL_tmpz00_4606);
									}
									return
										BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_auxz00_4605,
										BgL_auxz00_4614);
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



/* make-u8vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long BgL_lenz00_39,
		uint8_t BgL_initz00_40)
	{
		{	/* Llib/srfi4.scm 662 */
			{	/* Llib/srfi4.scm 662 */
				obj_t BgL_vz00_1358;

				{	/* Llib/srfi4.scm 662 */
					int32_t BgL_tmpz00_4626;

					BgL_tmpz00_4626 = (int32_t) (BgL_lenz00_39);
					BgL_vz00_1358 = BGL_ALLOC_U8VECTOR(BgL_tmpz00_4626);
				}
				{
					long BgL_iz00_2284;

					BgL_iz00_2284 = ((long) 0);
				BgL_loopz00_2283:
					if ((BgL_iz00_2284 < BgL_lenz00_39))
						{	/* Llib/srfi4.scm 662 */
							BGL_U8VSET(BgL_vz00_1358, BgL_iz00_2284, BgL_initz00_40);
							BUNSPEC;
							{
								long BgL_iz00_4632;

								BgL_iz00_4632 = (BgL_iz00_2284 + ((long) 1));
								BgL_iz00_2284 = BgL_iz00_4632;
								goto BgL_loopz00_2283;
							}
						}
					else
						{	/* Llib/srfi4.scm 662 */
							((bool_t) 0);
						}
				}
				return BgL_vz00_1358;
			}
		}

	}



/* _make-s16vector */
	obj_t BGl__makezd2s16vectorzd2zz__srfi4z00(obj_t BgL_env1237z00_46,
		obj_t BgL_opt1236z00_45)
	{
		{	/* Llib/srfi4.scm 663 */
			{	/* Llib/srfi4.scm 663 */
				obj_t BgL_g1238z00_1365;

				BgL_g1238z00_1365 = VECTOR_REF(BgL_opt1236z00_45, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1236z00_45))
					{
					case ((long) 1):

						{	/* Llib/srfi4.scm 663 */

							{	/* Llib/srfi4.scm 663 */
								long BgL_auxz00_4635;

								{	/* Llib/srfi4.scm 663 */
									obj_t BgL_tmpz00_4636;

									if (INTEGERP(BgL_g1238z00_1365))
										{	/* Llib/srfi4.scm 663 */
											BgL_tmpz00_4636 = BgL_g1238z00_1365;
										}
									else
										{
											obj_t BgL_auxz00_4639;

											BgL_auxz00_4639 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 27280)),
												BGl_string2687z00zz__srfi4z00,
												BGl_string2683z00zz__srfi4z00, BgL_g1238z00_1365);
											FAILURE(BgL_auxz00_4639, BFALSE, BFALSE);
										}
									BgL_auxz00_4635 = (long) CINT(BgL_tmpz00_4636);
								}
								return
									BGl_makezd2s16vectorzd2zz__srfi4z00(BgL_auxz00_4635,
									(int16_t) (0));
							}
						}
						break;
					case ((long) 2):

						{	/* Llib/srfi4.scm 663 */
							obj_t BgL_initz00_1370;

							BgL_initz00_1370 = VECTOR_REF(BgL_opt1236z00_45, ((long) 1));
							{	/* Llib/srfi4.scm 663 */

								{	/* Llib/srfi4.scm 663 */
									int16_t BgL_auxz00_4655;
									long BgL_auxz00_4646;

									{	/* Llib/srfi4.scm 663 */
										obj_t BgL_tmpz00_4656;

										if (BGL_INT16P(BgL_initz00_1370))
											{	/* Llib/srfi4.scm 663 */
												BgL_tmpz00_4656 = BgL_initz00_1370;
											}
										else
											{
												obj_t BgL_auxz00_4659;

												BgL_auxz00_4659 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27280)),
													BGl_string2687z00zz__srfi4z00,
													BGl_string2688z00zz__srfi4z00, BgL_initz00_1370);
												FAILURE(BgL_auxz00_4659, BFALSE, BFALSE);
											}
										BgL_auxz00_4655 = BGL_BINT16_TO_INT16(BgL_tmpz00_4656);
									}
									{	/* Llib/srfi4.scm 663 */
										obj_t BgL_tmpz00_4647;

										if (INTEGERP(BgL_g1238z00_1365))
											{	/* Llib/srfi4.scm 663 */
												BgL_tmpz00_4647 = BgL_g1238z00_1365;
											}
										else
											{
												obj_t BgL_auxz00_4650;

												BgL_auxz00_4650 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27280)),
													BGl_string2687z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_g1238z00_1365);
												FAILURE(BgL_auxz00_4650, BFALSE, BFALSE);
											}
										BgL_auxz00_4646 = (long) CINT(BgL_tmpz00_4647);
									}
									return
										BGl_makezd2s16vectorzd2zz__srfi4z00(BgL_auxz00_4646,
										BgL_auxz00_4655);
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



/* make-s16vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2s16vectorzd2zz__srfi4z00(long BgL_lenz00_43,
		int16_t BgL_initz00_44)
	{
		{	/* Llib/srfi4.scm 663 */
			{	/* Llib/srfi4.scm 663 */
				obj_t BgL_vz00_1371;

				{	/* Llib/srfi4.scm 663 */
					int32_t BgL_tmpz00_4667;

					BgL_tmpz00_4667 = (int32_t) (BgL_lenz00_43);
					BgL_vz00_1371 = BGL_ALLOC_S16VECTOR(BgL_tmpz00_4667);
				}
				{
					long BgL_iz00_2298;

					BgL_iz00_2298 = ((long) 0);
				BgL_loopz00_2297:
					if ((BgL_iz00_2298 < BgL_lenz00_43))
						{	/* Llib/srfi4.scm 663 */
							BGL_S16VSET(BgL_vz00_1371, BgL_iz00_2298, BgL_initz00_44);
							BUNSPEC;
							{
								long BgL_iz00_4673;

								BgL_iz00_4673 = (BgL_iz00_2298 + ((long) 1));
								BgL_iz00_2298 = BgL_iz00_4673;
								goto BgL_loopz00_2297;
							}
						}
					else
						{	/* Llib/srfi4.scm 663 */
							((bool_t) 0);
						}
				}
				return BgL_vz00_1371;
			}
		}

	}



/* _make-u16vector */
	obj_t BGl__makezd2u16vectorzd2zz__srfi4z00(obj_t BgL_env1242z00_50,
		obj_t BgL_opt1241z00_49)
	{
		{	/* Llib/srfi4.scm 664 */
			{	/* Llib/srfi4.scm 664 */
				obj_t BgL_g1243z00_1378;

				BgL_g1243z00_1378 = VECTOR_REF(BgL_opt1241z00_49, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1241z00_49))
					{
					case ((long) 1):

						{	/* Llib/srfi4.scm 664 */

							{	/* Llib/srfi4.scm 664 */
								long BgL_auxz00_4676;

								{	/* Llib/srfi4.scm 664 */
									obj_t BgL_tmpz00_4677;

									if (INTEGERP(BgL_g1243z00_1378))
										{	/* Llib/srfi4.scm 664 */
											BgL_tmpz00_4677 = BgL_g1243z00_1378;
										}
									else
										{
											obj_t BgL_auxz00_4680;

											BgL_auxz00_4680 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 27314)),
												BGl_string2689z00zz__srfi4z00,
												BGl_string2683z00zz__srfi4z00, BgL_g1243z00_1378);
											FAILURE(BgL_auxz00_4680, BFALSE, BFALSE);
										}
									BgL_auxz00_4676 = (long) CINT(BgL_tmpz00_4677);
								}
								return
									BGl_makezd2u16vectorzd2zz__srfi4z00(BgL_auxz00_4676,
									(uint16_t) (0));
							}
						}
						break;
					case ((long) 2):

						{	/* Llib/srfi4.scm 664 */
							obj_t BgL_initz00_1383;

							BgL_initz00_1383 = VECTOR_REF(BgL_opt1241z00_49, ((long) 1));
							{	/* Llib/srfi4.scm 664 */

								{	/* Llib/srfi4.scm 664 */
									uint16_t BgL_auxz00_4696;
									long BgL_auxz00_4687;

									{	/* Llib/srfi4.scm 664 */
										obj_t BgL_tmpz00_4697;

										if (BGL_UINT16P(BgL_initz00_1383))
											{	/* Llib/srfi4.scm 664 */
												BgL_tmpz00_4697 = BgL_initz00_1383;
											}
										else
											{
												obj_t BgL_auxz00_4700;

												BgL_auxz00_4700 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27314)),
													BGl_string2689z00zz__srfi4z00,
													BGl_string2690z00zz__srfi4z00, BgL_initz00_1383);
												FAILURE(BgL_auxz00_4700, BFALSE, BFALSE);
											}
										BgL_auxz00_4696 = BGL_BUINT16_TO_UINT16(BgL_tmpz00_4697);
									}
									{	/* Llib/srfi4.scm 664 */
										obj_t BgL_tmpz00_4688;

										if (INTEGERP(BgL_g1243z00_1378))
											{	/* Llib/srfi4.scm 664 */
												BgL_tmpz00_4688 = BgL_g1243z00_1378;
											}
										else
											{
												obj_t BgL_auxz00_4691;

												BgL_auxz00_4691 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27314)),
													BGl_string2689z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_g1243z00_1378);
												FAILURE(BgL_auxz00_4691, BFALSE, BFALSE);
											}
										BgL_auxz00_4687 = (long) CINT(BgL_tmpz00_4688);
									}
									return
										BGl_makezd2u16vectorzd2zz__srfi4z00(BgL_auxz00_4687,
										BgL_auxz00_4696);
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



/* make-u16vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2u16vectorzd2zz__srfi4z00(long BgL_lenz00_47,
		uint16_t BgL_initz00_48)
	{
		{	/* Llib/srfi4.scm 664 */
			{	/* Llib/srfi4.scm 664 */
				obj_t BgL_vz00_1384;

				{	/* Llib/srfi4.scm 664 */
					int32_t BgL_tmpz00_4708;

					BgL_tmpz00_4708 = (int32_t) (BgL_lenz00_47);
					BgL_vz00_1384 = BGL_ALLOC_U16VECTOR(BgL_tmpz00_4708);
				}
				{
					long BgL_iz00_2312;

					BgL_iz00_2312 = ((long) 0);
				BgL_loopz00_2311:
					if ((BgL_iz00_2312 < BgL_lenz00_47))
						{	/* Llib/srfi4.scm 664 */
							BGL_U16VSET(BgL_vz00_1384, BgL_iz00_2312, BgL_initz00_48);
							BUNSPEC;
							{
								long BgL_iz00_4714;

								BgL_iz00_4714 = (BgL_iz00_2312 + ((long) 1));
								BgL_iz00_2312 = BgL_iz00_4714;
								goto BgL_loopz00_2311;
							}
						}
					else
						{	/* Llib/srfi4.scm 664 */
							((bool_t) 0);
						}
				}
				return BgL_vz00_1384;
			}
		}

	}



/* _make-s32vector */
	obj_t BGl__makezd2s32vectorzd2zz__srfi4z00(obj_t BgL_env1247z00_54,
		obj_t BgL_opt1246z00_53)
	{
		{	/* Llib/srfi4.scm 665 */
			{	/* Llib/srfi4.scm 665 */
				obj_t BgL_g1248z00_1391;

				BgL_g1248z00_1391 = VECTOR_REF(BgL_opt1246z00_53, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1246z00_53))
					{
					case ((long) 1):

						{	/* Llib/srfi4.scm 665 */

							{	/* Llib/srfi4.scm 665 */
								long BgL_auxz00_4717;

								{	/* Llib/srfi4.scm 665 */
									obj_t BgL_tmpz00_4718;

									if (INTEGERP(BgL_g1248z00_1391))
										{	/* Llib/srfi4.scm 665 */
											BgL_tmpz00_4718 = BgL_g1248z00_1391;
										}
									else
										{
											obj_t BgL_auxz00_4721;

											BgL_auxz00_4721 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 27348)),
												BGl_string2691z00zz__srfi4z00,
												BGl_string2683z00zz__srfi4z00, BgL_g1248z00_1391);
											FAILURE(BgL_auxz00_4721, BFALSE, BFALSE);
										}
									BgL_auxz00_4717 = (long) CINT(BgL_tmpz00_4718);
								}
								return
									BGl_makezd2s32vectorzd2zz__srfi4z00(BgL_auxz00_4717,
									(int32_t) (0));
							}
						}
						break;
					case ((long) 2):

						{	/* Llib/srfi4.scm 665 */
							obj_t BgL_initz00_1396;

							BgL_initz00_1396 = VECTOR_REF(BgL_opt1246z00_53, ((long) 1));
							{	/* Llib/srfi4.scm 665 */

								{	/* Llib/srfi4.scm 665 */
									int32_t BgL_auxz00_4737;
									long BgL_auxz00_4728;

									{	/* Llib/srfi4.scm 665 */
										obj_t BgL_tmpz00_4738;

										if (BGL_INT32P(BgL_initz00_1396))
											{	/* Llib/srfi4.scm 665 */
												BgL_tmpz00_4738 = BgL_initz00_1396;
											}
										else
											{
												obj_t BgL_auxz00_4741;

												BgL_auxz00_4741 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27348)),
													BGl_string2691z00zz__srfi4z00,
													BGl_string2692z00zz__srfi4z00, BgL_initz00_1396);
												FAILURE(BgL_auxz00_4741, BFALSE, BFALSE);
											}
										BgL_auxz00_4737 = BGL_BINT32_TO_INT32(BgL_tmpz00_4738);
									}
									{	/* Llib/srfi4.scm 665 */
										obj_t BgL_tmpz00_4729;

										if (INTEGERP(BgL_g1248z00_1391))
											{	/* Llib/srfi4.scm 665 */
												BgL_tmpz00_4729 = BgL_g1248z00_1391;
											}
										else
											{
												obj_t BgL_auxz00_4732;

												BgL_auxz00_4732 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27348)),
													BGl_string2691z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_g1248z00_1391);
												FAILURE(BgL_auxz00_4732, BFALSE, BFALSE);
											}
										BgL_auxz00_4728 = (long) CINT(BgL_tmpz00_4729);
									}
									return
										BGl_makezd2s32vectorzd2zz__srfi4z00(BgL_auxz00_4728,
										BgL_auxz00_4737);
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



/* make-s32vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2s32vectorzd2zz__srfi4z00(long BgL_lenz00_51,
		int32_t BgL_initz00_52)
	{
		{	/* Llib/srfi4.scm 665 */
			{	/* Llib/srfi4.scm 665 */
				obj_t BgL_vz00_1397;

				{	/* Llib/srfi4.scm 665 */
					int32_t BgL_tmpz00_4749;

					BgL_tmpz00_4749 = (int32_t) (BgL_lenz00_51);
					BgL_vz00_1397 = BGL_ALLOC_S32VECTOR(BgL_tmpz00_4749);
				}
				{
					long BgL_iz00_2326;

					BgL_iz00_2326 = ((long) 0);
				BgL_loopz00_2325:
					if ((BgL_iz00_2326 < BgL_lenz00_51))
						{	/* Llib/srfi4.scm 665 */
							BGL_S32VSET(BgL_vz00_1397, BgL_iz00_2326, BgL_initz00_52);
							BUNSPEC;
							{
								long BgL_iz00_4755;

								BgL_iz00_4755 = (BgL_iz00_2326 + ((long) 1));
								BgL_iz00_2326 = BgL_iz00_4755;
								goto BgL_loopz00_2325;
							}
						}
					else
						{	/* Llib/srfi4.scm 665 */
							((bool_t) 0);
						}
				}
				return BgL_vz00_1397;
			}
		}

	}



/* _make-u32vector */
	obj_t BGl__makezd2u32vectorzd2zz__srfi4z00(obj_t BgL_env1252z00_58,
		obj_t BgL_opt1251z00_57)
	{
		{	/* Llib/srfi4.scm 666 */
			{	/* Llib/srfi4.scm 666 */
				obj_t BgL_g1253z00_1404;

				BgL_g1253z00_1404 = VECTOR_REF(BgL_opt1251z00_57, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1251z00_57))
					{
					case ((long) 1):

						{	/* Llib/srfi4.scm 666 */

							{	/* Llib/srfi4.scm 666 */
								long BgL_auxz00_4758;

								{	/* Llib/srfi4.scm 666 */
									obj_t BgL_tmpz00_4759;

									if (INTEGERP(BgL_g1253z00_1404))
										{	/* Llib/srfi4.scm 666 */
											BgL_tmpz00_4759 = BgL_g1253z00_1404;
										}
									else
										{
											obj_t BgL_auxz00_4762;

											BgL_auxz00_4762 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 27382)),
												BGl_string2693z00zz__srfi4z00,
												BGl_string2683z00zz__srfi4z00, BgL_g1253z00_1404);
											FAILURE(BgL_auxz00_4762, BFALSE, BFALSE);
										}
									BgL_auxz00_4758 = (long) CINT(BgL_tmpz00_4759);
								}
								return
									BGl_makezd2u32vectorzd2zz__srfi4z00(BgL_auxz00_4758,
									(uint32_t) (0));
							}
						}
						break;
					case ((long) 2):

						{	/* Llib/srfi4.scm 666 */
							obj_t BgL_initz00_1409;

							BgL_initz00_1409 = VECTOR_REF(BgL_opt1251z00_57, ((long) 1));
							{	/* Llib/srfi4.scm 666 */

								{	/* Llib/srfi4.scm 666 */
									uint32_t BgL_auxz00_4778;
									long BgL_auxz00_4769;

									{	/* Llib/srfi4.scm 666 */
										obj_t BgL_tmpz00_4779;

										if (BGL_UINT32P(BgL_initz00_1409))
											{	/* Llib/srfi4.scm 666 */
												BgL_tmpz00_4779 = BgL_initz00_1409;
											}
										else
											{
												obj_t BgL_auxz00_4782;

												BgL_auxz00_4782 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27382)),
													BGl_string2693z00zz__srfi4z00,
													BGl_string2694z00zz__srfi4z00, BgL_initz00_1409);
												FAILURE(BgL_auxz00_4782, BFALSE, BFALSE);
											}
										BgL_auxz00_4778 = BGL_BUINT32_TO_UINT32(BgL_tmpz00_4779);
									}
									{	/* Llib/srfi4.scm 666 */
										obj_t BgL_tmpz00_4770;

										if (INTEGERP(BgL_g1253z00_1404))
											{	/* Llib/srfi4.scm 666 */
												BgL_tmpz00_4770 = BgL_g1253z00_1404;
											}
										else
											{
												obj_t BgL_auxz00_4773;

												BgL_auxz00_4773 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27382)),
													BGl_string2693z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_g1253z00_1404);
												FAILURE(BgL_auxz00_4773, BFALSE, BFALSE);
											}
										BgL_auxz00_4769 = (long) CINT(BgL_tmpz00_4770);
									}
									return
										BGl_makezd2u32vectorzd2zz__srfi4z00(BgL_auxz00_4769,
										BgL_auxz00_4778);
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



/* make-u32vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2u32vectorzd2zz__srfi4z00(long BgL_lenz00_55,
		uint32_t BgL_initz00_56)
	{
		{	/* Llib/srfi4.scm 666 */
			{	/* Llib/srfi4.scm 666 */
				obj_t BgL_vz00_1410;

				{	/* Llib/srfi4.scm 666 */
					int32_t BgL_tmpz00_4790;

					BgL_tmpz00_4790 = (int32_t) (BgL_lenz00_55);
					BgL_vz00_1410 = BGL_ALLOC_U32VECTOR(BgL_tmpz00_4790);
				}
				{
					long BgL_iz00_2340;

					BgL_iz00_2340 = ((long) 0);
				BgL_loopz00_2339:
					if ((BgL_iz00_2340 < BgL_lenz00_55))
						{	/* Llib/srfi4.scm 666 */
							BGL_U32VSET(BgL_vz00_1410, BgL_iz00_2340, BgL_initz00_56);
							BUNSPEC;
							{
								long BgL_iz00_4796;

								BgL_iz00_4796 = (BgL_iz00_2340 + ((long) 1));
								BgL_iz00_2340 = BgL_iz00_4796;
								goto BgL_loopz00_2339;
							}
						}
					else
						{	/* Llib/srfi4.scm 666 */
							((bool_t) 0);
						}
				}
				return BgL_vz00_1410;
			}
		}

	}



/* _make-s64vector */
	obj_t BGl__makezd2s64vectorzd2zz__srfi4z00(obj_t BgL_env1257z00_62,
		obj_t BgL_opt1256z00_61)
	{
		{	/* Llib/srfi4.scm 667 */
			{	/* Llib/srfi4.scm 667 */
				obj_t BgL_g1258z00_1417;

				BgL_g1258z00_1417 = VECTOR_REF(BgL_opt1256z00_61, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1256z00_61))
					{
					case ((long) 1):

						{	/* Llib/srfi4.scm 667 */

							{	/* Llib/srfi4.scm 667 */
								long BgL_auxz00_4799;

								{	/* Llib/srfi4.scm 667 */
									obj_t BgL_tmpz00_4800;

									if (INTEGERP(BgL_g1258z00_1417))
										{	/* Llib/srfi4.scm 667 */
											BgL_tmpz00_4800 = BgL_g1258z00_1417;
										}
									else
										{
											obj_t BgL_auxz00_4803;

											BgL_auxz00_4803 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 27416)),
												BGl_string2695z00zz__srfi4z00,
												BGl_string2683z00zz__srfi4z00, BgL_g1258z00_1417);
											FAILURE(BgL_auxz00_4803, BFALSE, BFALSE);
										}
									BgL_auxz00_4799 = (long) CINT(BgL_tmpz00_4800);
								}
								return
									BGl_makezd2s64vectorzd2zz__srfi4z00(BgL_auxz00_4799,
									(int64_t) (0));
							}
						}
						break;
					case ((long) 2):

						{	/* Llib/srfi4.scm 667 */
							obj_t BgL_initz00_1422;

							BgL_initz00_1422 = VECTOR_REF(BgL_opt1256z00_61, ((long) 1));
							{	/* Llib/srfi4.scm 667 */

								{	/* Llib/srfi4.scm 667 */
									int64_t BgL_auxz00_4819;
									long BgL_auxz00_4810;

									{	/* Llib/srfi4.scm 667 */
										obj_t BgL_tmpz00_4820;

										if (BGL_INT64P(BgL_initz00_1422))
											{	/* Llib/srfi4.scm 667 */
												BgL_tmpz00_4820 = BgL_initz00_1422;
											}
										else
											{
												obj_t BgL_auxz00_4823;

												BgL_auxz00_4823 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27416)),
													BGl_string2695z00zz__srfi4z00,
													BGl_string2696z00zz__srfi4z00, BgL_initz00_1422);
												FAILURE(BgL_auxz00_4823, BFALSE, BFALSE);
											}
										BgL_auxz00_4819 = BGL_BINT64_TO_INT64(BgL_tmpz00_4820);
									}
									{	/* Llib/srfi4.scm 667 */
										obj_t BgL_tmpz00_4811;

										if (INTEGERP(BgL_g1258z00_1417))
											{	/* Llib/srfi4.scm 667 */
												BgL_tmpz00_4811 = BgL_g1258z00_1417;
											}
										else
											{
												obj_t BgL_auxz00_4814;

												BgL_auxz00_4814 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27416)),
													BGl_string2695z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_g1258z00_1417);
												FAILURE(BgL_auxz00_4814, BFALSE, BFALSE);
											}
										BgL_auxz00_4810 = (long) CINT(BgL_tmpz00_4811);
									}
									return
										BGl_makezd2s64vectorzd2zz__srfi4z00(BgL_auxz00_4810,
										BgL_auxz00_4819);
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



/* make-s64vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2s64vectorzd2zz__srfi4z00(long BgL_lenz00_59,
		int64_t BgL_initz00_60)
	{
		{	/* Llib/srfi4.scm 667 */
			{	/* Llib/srfi4.scm 667 */
				obj_t BgL_vz00_1423;

				{	/* Llib/srfi4.scm 667 */
					int32_t BgL_tmpz00_4831;

					BgL_tmpz00_4831 = (int32_t) (BgL_lenz00_59);
					BgL_vz00_1423 = BGL_ALLOC_S64VECTOR(BgL_tmpz00_4831);
				}
				{
					long BgL_iz00_2354;

					BgL_iz00_2354 = ((long) 0);
				BgL_loopz00_2353:
					if ((BgL_iz00_2354 < BgL_lenz00_59))
						{	/* Llib/srfi4.scm 667 */
							BGL_S64VSET(BgL_vz00_1423, BgL_iz00_2354, BgL_initz00_60);
							BUNSPEC;
							{
								long BgL_iz00_4837;

								BgL_iz00_4837 = (BgL_iz00_2354 + ((long) 1));
								BgL_iz00_2354 = BgL_iz00_4837;
								goto BgL_loopz00_2353;
							}
						}
					else
						{	/* Llib/srfi4.scm 667 */
							((bool_t) 0);
						}
				}
				return BgL_vz00_1423;
			}
		}

	}



/* _make-u64vector */
	obj_t BGl__makezd2u64vectorzd2zz__srfi4z00(obj_t BgL_env1262z00_66,
		obj_t BgL_opt1261z00_65)
	{
		{	/* Llib/srfi4.scm 668 */
			{	/* Llib/srfi4.scm 668 */
				obj_t BgL_g1263z00_1430;

				BgL_g1263z00_1430 = VECTOR_REF(BgL_opt1261z00_65, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1261z00_65))
					{
					case ((long) 1):

						{	/* Llib/srfi4.scm 668 */

							{	/* Llib/srfi4.scm 668 */
								long BgL_auxz00_4840;

								{	/* Llib/srfi4.scm 668 */
									obj_t BgL_tmpz00_4841;

									if (INTEGERP(BgL_g1263z00_1430))
										{	/* Llib/srfi4.scm 668 */
											BgL_tmpz00_4841 = BgL_g1263z00_1430;
										}
									else
										{
											obj_t BgL_auxz00_4844;

											BgL_auxz00_4844 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 27450)),
												BGl_string2697z00zz__srfi4z00,
												BGl_string2683z00zz__srfi4z00, BgL_g1263z00_1430);
											FAILURE(BgL_auxz00_4844, BFALSE, BFALSE);
										}
									BgL_auxz00_4840 = (long) CINT(BgL_tmpz00_4841);
								}
								return
									BGl_makezd2u64vectorzd2zz__srfi4z00(BgL_auxz00_4840,
									(uint64_t) (0));
							}
						}
						break;
					case ((long) 2):

						{	/* Llib/srfi4.scm 668 */
							obj_t BgL_initz00_1435;

							BgL_initz00_1435 = VECTOR_REF(BgL_opt1261z00_65, ((long) 1));
							{	/* Llib/srfi4.scm 668 */

								{	/* Llib/srfi4.scm 668 */
									uint64_t BgL_auxz00_4860;
									long BgL_auxz00_4851;

									{	/* Llib/srfi4.scm 668 */
										obj_t BgL_tmpz00_4861;

										if (BGL_UINT64P(BgL_initz00_1435))
											{	/* Llib/srfi4.scm 668 */
												BgL_tmpz00_4861 = BgL_initz00_1435;
											}
										else
											{
												obj_t BgL_auxz00_4864;

												BgL_auxz00_4864 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27450)),
													BGl_string2697z00zz__srfi4z00,
													BGl_string2698z00zz__srfi4z00, BgL_initz00_1435);
												FAILURE(BgL_auxz00_4864, BFALSE, BFALSE);
											}
										BgL_auxz00_4860 = BGL_BINT64_TO_INT64(BgL_tmpz00_4861);
									}
									{	/* Llib/srfi4.scm 668 */
										obj_t BgL_tmpz00_4852;

										if (INTEGERP(BgL_g1263z00_1430))
											{	/* Llib/srfi4.scm 668 */
												BgL_tmpz00_4852 = BgL_g1263z00_1430;
											}
										else
											{
												obj_t BgL_auxz00_4855;

												BgL_auxz00_4855 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27450)),
													BGl_string2697z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_g1263z00_1430);
												FAILURE(BgL_auxz00_4855, BFALSE, BFALSE);
											}
										BgL_auxz00_4851 = (long) CINT(BgL_tmpz00_4852);
									}
									return
										BGl_makezd2u64vectorzd2zz__srfi4z00(BgL_auxz00_4851,
										BgL_auxz00_4860);
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



/* make-u64vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2u64vectorzd2zz__srfi4z00(long BgL_lenz00_63,
		uint64_t BgL_initz00_64)
	{
		{	/* Llib/srfi4.scm 668 */
			{	/* Llib/srfi4.scm 668 */
				obj_t BgL_vz00_1436;

				{	/* Llib/srfi4.scm 668 */
					int32_t BgL_tmpz00_4872;

					BgL_tmpz00_4872 = (int32_t) (BgL_lenz00_63);
					BgL_vz00_1436 = BGL_ALLOC_U64VECTOR(BgL_tmpz00_4872);
				}
				{
					long BgL_iz00_2368;

					BgL_iz00_2368 = ((long) 0);
				BgL_loopz00_2367:
					if ((BgL_iz00_2368 < BgL_lenz00_63))
						{	/* Llib/srfi4.scm 668 */
							BGL_U64VSET(BgL_vz00_1436, BgL_iz00_2368, BgL_initz00_64);
							BUNSPEC;
							{
								long BgL_iz00_4878;

								BgL_iz00_4878 = (BgL_iz00_2368 + ((long) 1));
								BgL_iz00_2368 = BgL_iz00_4878;
								goto BgL_loopz00_2367;
							}
						}
					else
						{	/* Llib/srfi4.scm 668 */
							((bool_t) 0);
						}
				}
				return BgL_vz00_1436;
			}
		}

	}



/* _make-f32vector */
	obj_t BGl__makezd2f32vectorzd2zz__srfi4z00(obj_t BgL_env1267z00_70,
		obj_t BgL_opt1266z00_69)
	{
		{	/* Llib/srfi4.scm 669 */
			{	/* Llib/srfi4.scm 669 */
				obj_t BgL_g1268z00_1443;

				BgL_g1268z00_1443 = VECTOR_REF(BgL_opt1266z00_69, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1266z00_69))
					{
					case ((long) 1):

						{	/* Llib/srfi4.scm 669 */

							{	/* Llib/srfi4.scm 669 */
								long BgL_auxz00_4881;

								{	/* Llib/srfi4.scm 669 */
									obj_t BgL_tmpz00_4882;

									if (INTEGERP(BgL_g1268z00_1443))
										{	/* Llib/srfi4.scm 669 */
											BgL_tmpz00_4882 = BgL_g1268z00_1443;
										}
									else
										{
											obj_t BgL_auxz00_4885;

											BgL_auxz00_4885 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 27484)),
												BGl_string2699z00zz__srfi4z00,
												BGl_string2683z00zz__srfi4z00, BgL_g1268z00_1443);
											FAILURE(BgL_auxz00_4885, BFALSE, BFALSE);
										}
									BgL_auxz00_4881 = (long) CINT(BgL_tmpz00_4882);
								}
								return
									BGl_makezd2f32vectorzd2zz__srfi4z00(BgL_auxz00_4881,
									(float) (((double) 0.0)));
						}} break;
					case ((long) 2):

						{	/* Llib/srfi4.scm 669 */
							obj_t BgL_initz00_1448;

							BgL_initz00_1448 = VECTOR_REF(BgL_opt1266z00_69, ((long) 1));
							{	/* Llib/srfi4.scm 669 */

								{	/* Llib/srfi4.scm 669 */
									float BgL_auxz00_4902;
									long BgL_auxz00_4893;

									{	/* Llib/srfi4.scm 669 */
										obj_t BgL_tmpz00_4903;

										if (REALP(BgL_initz00_1448))
											{	/* Llib/srfi4.scm 669 */
												BgL_tmpz00_4903 = BgL_initz00_1448;
											}
										else
											{
												obj_t BgL_auxz00_4906;

												BgL_auxz00_4906 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27484)),
													BGl_string2699z00zz__srfi4z00,
													BGl_string2700z00zz__srfi4z00, BgL_initz00_1448);
												FAILURE(BgL_auxz00_4906, BFALSE, BFALSE);
											}
										BgL_auxz00_4902 = REAL_TO_FLOAT(BgL_tmpz00_4903);
									}
									{	/* Llib/srfi4.scm 669 */
										obj_t BgL_tmpz00_4894;

										if (INTEGERP(BgL_g1268z00_1443))
											{	/* Llib/srfi4.scm 669 */
												BgL_tmpz00_4894 = BgL_g1268z00_1443;
											}
										else
											{
												obj_t BgL_auxz00_4897;

												BgL_auxz00_4897 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27484)),
													BGl_string2699z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_g1268z00_1443);
												FAILURE(BgL_auxz00_4897, BFALSE, BFALSE);
											}
										BgL_auxz00_4893 = (long) CINT(BgL_tmpz00_4894);
									}
									return
										BGl_makezd2f32vectorzd2zz__srfi4z00(BgL_auxz00_4893,
										BgL_auxz00_4902);
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



/* make-f32vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2f32vectorzd2zz__srfi4z00(long BgL_lenz00_67,
		float BgL_initz00_68)
	{
		{	/* Llib/srfi4.scm 669 */
			{	/* Llib/srfi4.scm 669 */
				obj_t BgL_vz00_1449;

				{	/* Llib/srfi4.scm 669 */
					int32_t BgL_tmpz00_4914;

					BgL_tmpz00_4914 = (int32_t) (BgL_lenz00_67);
					BgL_vz00_1449 = BGL_ALLOC_F32VECTOR(BgL_tmpz00_4914);
				}
				{
					long BgL_iz00_2382;

					BgL_iz00_2382 = ((long) 0);
				BgL_loopz00_2381:
					if ((BgL_iz00_2382 < BgL_lenz00_67))
						{	/* Llib/srfi4.scm 669 */
							BGL_F32VSET(BgL_vz00_1449, BgL_iz00_2382, BgL_initz00_68);
							BUNSPEC;
							{
								long BgL_iz00_4920;

								BgL_iz00_4920 = (BgL_iz00_2382 + ((long) 1));
								BgL_iz00_2382 = BgL_iz00_4920;
								goto BgL_loopz00_2381;
							}
						}
					else
						{	/* Llib/srfi4.scm 669 */
							((bool_t) 0);
						}
				}
				return BgL_vz00_1449;
			}
		}

	}



/* _make-f64vector */
	obj_t BGl__makezd2f64vectorzd2zz__srfi4z00(obj_t BgL_env1272z00_74,
		obj_t BgL_opt1271z00_73)
	{
		{	/* Llib/srfi4.scm 670 */
			{	/* Llib/srfi4.scm 670 */
				obj_t BgL_g1273z00_1456;

				BgL_g1273z00_1456 = VECTOR_REF(BgL_opt1271z00_73, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1271z00_73))
					{
					case ((long) 1):

						{	/* Llib/srfi4.scm 670 */

							{	/* Llib/srfi4.scm 670 */
								long BgL_auxz00_4923;

								{	/* Llib/srfi4.scm 670 */
									obj_t BgL_tmpz00_4924;

									if (INTEGERP(BgL_g1273z00_1456))
										{	/* Llib/srfi4.scm 670 */
											BgL_tmpz00_4924 = BgL_g1273z00_1456;
										}
									else
										{
											obj_t BgL_auxz00_4927;

											BgL_auxz00_4927 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 27515)),
												BGl_string2701z00zz__srfi4z00,
												BGl_string2683z00zz__srfi4z00, BgL_g1273z00_1456);
											FAILURE(BgL_auxz00_4927, BFALSE, BFALSE);
										}
									BgL_auxz00_4923 = (long) CINT(BgL_tmpz00_4924);
								}
								return
									BGl_makezd2f64vectorzd2zz__srfi4z00(BgL_auxz00_4923,
									((double) 0.0));
						}} break;
					case ((long) 2):

						{	/* Llib/srfi4.scm 670 */
							obj_t BgL_initz00_1461;

							BgL_initz00_1461 = VECTOR_REF(BgL_opt1271z00_73, ((long) 1));
							{	/* Llib/srfi4.scm 670 */

								{	/* Llib/srfi4.scm 670 */
									double BgL_auxz00_4943;
									long BgL_auxz00_4934;

									{	/* Llib/srfi4.scm 670 */
										obj_t BgL_tmpz00_4944;

										if (REALP(BgL_initz00_1461))
											{	/* Llib/srfi4.scm 670 */
												BgL_tmpz00_4944 = BgL_initz00_1461;
											}
										else
											{
												obj_t BgL_auxz00_4947;

												BgL_auxz00_4947 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27515)),
													BGl_string2701z00zz__srfi4z00,
													BGl_string2700z00zz__srfi4z00, BgL_initz00_1461);
												FAILURE(BgL_auxz00_4947, BFALSE, BFALSE);
											}
										BgL_auxz00_4943 = REAL_TO_DOUBLE(BgL_tmpz00_4944);
									}
									{	/* Llib/srfi4.scm 670 */
										obj_t BgL_tmpz00_4935;

										if (INTEGERP(BgL_g1273z00_1456))
											{	/* Llib/srfi4.scm 670 */
												BgL_tmpz00_4935 = BgL_g1273z00_1456;
											}
										else
											{
												obj_t BgL_auxz00_4938;

												BgL_auxz00_4938 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 27515)),
													BGl_string2701z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_g1273z00_1456);
												FAILURE(BgL_auxz00_4938, BFALSE, BFALSE);
											}
										BgL_auxz00_4934 = (long) CINT(BgL_tmpz00_4935);
									}
									return
										BGl_makezd2f64vectorzd2zz__srfi4z00(BgL_auxz00_4934,
										BgL_auxz00_4943);
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



/* make-f64vector */
	BGL_EXPORTED_DEF obj_t BGl_makezd2f64vectorzd2zz__srfi4z00(long BgL_lenz00_71,
		double BgL_initz00_72)
	{
		{	/* Llib/srfi4.scm 670 */
			{	/* Llib/srfi4.scm 670 */
				obj_t BgL_vz00_1462;

				{	/* Llib/srfi4.scm 670 */
					int32_t BgL_tmpz00_4955;

					BgL_tmpz00_4955 = (int32_t) (BgL_lenz00_71);
					BgL_vz00_1462 = BGL_ALLOC_F64VECTOR(BgL_tmpz00_4955);
				}
				{
					long BgL_iz00_2396;

					BgL_iz00_2396 = ((long) 0);
				BgL_loopz00_2395:
					if ((BgL_iz00_2396 < BgL_lenz00_71))
						{	/* Llib/srfi4.scm 670 */
							BGL_F64VSET(BgL_vz00_1462, BgL_iz00_2396, BgL_initz00_72);
							BUNSPEC;
							{
								long BgL_iz00_4961;

								BgL_iz00_4961 = (BgL_iz00_2396 + ((long) 1));
								BgL_iz00_2396 = BgL_iz00_4961;
								goto BgL_loopz00_2395;
							}
						}
					else
						{	/* Llib/srfi4.scm 670 */
							((bool_t) 0);
						}
				}
				return BgL_vz00_1462;
			}
		}

	}



/* hvector-range-error */
	BGL_EXPORTED_DEF obj_t BGl_hvectorzd2rangezd2errorz00zz__srfi4z00(obj_t
		BgL_funz00_75, obj_t BgL_vz00_76, long BgL_kz00_77)
	{
		{	/* Llib/srfi4.scm 675 */
			{	/* Llib/srfi4.scm 678 */
				obj_t BgL_arg1430z00_2404;

				{	/* Llib/srfi4.scm 678 */
					obj_t BgL_arg1431z00_2405;

					{	/* Llib/srfi4.scm 678 */
						long BgL_arg1432z00_2406;

						{	/* Llib/srfi4.scm 678 */
							long BgL_arg1434z00_2407;

							BgL_arg1434z00_2407 = BGL_HVECTOR_LENGTH(BgL_vz00_76);
							BgL_arg1432z00_2406 = (BgL_arg1434z00_2407 - ((long) 1));
						}
						{	/* Llib/srfi4.scm 678 */

							BgL_arg1431z00_2405 =
								BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
								(BgL_arg1432z00_2406, ((long) 10));
					}}
					BgL_arg1430z00_2404 =
						string_append_3(BGl_string2702z00zz__srfi4z00, BgL_arg1431z00_2405,
						BGl_string2703z00zz__srfi4z00);
				}
				return
					BGl_errorz00zz__errorz00(BgL_funz00_75, BgL_arg1430z00_2404,
					BINT(BgL_kz00_77));
			}
		}

	}



/* &hvector-range-error */
	obj_t BGl_z62hvectorzd2rangezd2errorz62zz__srfi4z00(obj_t BgL_envz00_3591,
		obj_t BgL_funz00_3592, obj_t BgL_vz00_3593, obj_t BgL_kz00_3594)
	{
		{	/* Llib/srfi4.scm 675 */
			{	/* Llib/srfi4.scm 678 */
				long BgL_auxz00_4976;
				obj_t BgL_auxz00_4969;

				{	/* Llib/srfi4.scm 678 */
					obj_t BgL_tmpz00_4977;

					if (INTEGERP(BgL_kz00_3594))
						{	/* Llib/srfi4.scm 678 */
							BgL_tmpz00_4977 = BgL_kz00_3594;
						}
					else
						{
							obj_t BgL_auxz00_4980;

							BgL_auxz00_4980 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 27892)), BGl_string2704z00zz__srfi4z00,
								BGl_string2683z00zz__srfi4z00, BgL_kz00_3594);
							FAILURE(BgL_auxz00_4980, BFALSE, BFALSE);
						}
					BgL_auxz00_4976 = (long) CINT(BgL_tmpz00_4977);
				}
				if (STRINGP(BgL_funz00_3592))
					{	/* Llib/srfi4.scm 678 */
						BgL_auxz00_4969 = BgL_funz00_3592;
					}
				else
					{
						obj_t BgL_auxz00_4972;

						BgL_auxz00_4972 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 27892)), BGl_string2704z00zz__srfi4z00,
							BGl_string2705z00zz__srfi4z00, BgL_funz00_3592);
						FAILURE(BgL_auxz00_4972, BFALSE, BFALSE);
					}
				return
					BGl_hvectorzd2rangezd2errorz00zz__srfi4z00(BgL_auxz00_4969,
					BgL_vz00_3593, BgL_auxz00_4976);
			}
		}

	}



/* s8vector-ref */
	BGL_EXPORTED_DEF int8_t BGl_s8vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_78,
		long BgL_kz00_79)
	{
		{	/* Llib/srfi4.scm 685 */
			return BGL_S8VREF(BgL_vz00_78, BgL_kz00_79);
		}

	}



/* &s8vector-ref */
	obj_t BGl_z62s8vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3454,
		obj_t BgL_vz00_3455, obj_t BgL_kz00_3456)
	{
		{	/* Llib/srfi4.scm 685 */
			{	/* Llib/srfi4.scm 686 */
				int8_t BgL_tmpz00_4987;

				{	/* Llib/srfi4.scm 686 */
					obj_t BgL_vz00_4139;
					long BgL_kz00_4140;

					if (BGL_S8VECTORP(BgL_vz00_3455))
						{	/* Llib/srfi4.scm 686 */
							BgL_vz00_4139 = BgL_vz00_3455;
						}
					else
						{
							obj_t BgL_auxz00_4990;

							BgL_auxz00_4990 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 28196)), BGl_string2706z00zz__srfi4z00,
								BGl_string2663z00zz__srfi4z00, BgL_vz00_3455);
							FAILURE(BgL_auxz00_4990, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 686 */
						obj_t BgL_tmpz00_4994;

						if (INTEGERP(BgL_kz00_3456))
							{	/* Llib/srfi4.scm 686 */
								BgL_tmpz00_4994 = BgL_kz00_3456;
							}
						else
							{
								obj_t BgL_auxz00_4997;

								BgL_auxz00_4997 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
									BINT(((long) 28196)), BGl_string2706z00zz__srfi4z00,
									BGl_string2683z00zz__srfi4z00, BgL_kz00_3456);
								FAILURE(BgL_auxz00_4997, BFALSE, BFALSE);
							}
						BgL_kz00_4140 = (long) CINT(BgL_tmpz00_4994);
					}
					BgL_tmpz00_4987 = BGL_S8VREF(BgL_vz00_4139, BgL_kz00_4140);
				}
				return BGL_INT8_TO_BINT8(BgL_tmpz00_4987);
			}
		}

	}



/* u8vector-ref */
	BGL_EXPORTED_DEF uint8_t BGl_u8vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_80,
		long BgL_kz00_81)
	{
		{	/* Llib/srfi4.scm 688 */
			return BGL_U8VREF(BgL_vz00_80, BgL_kz00_81);
		}

	}



/* &u8vector-ref */
	obj_t BGl_z62u8vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3464,
		obj_t BgL_vz00_3465, obj_t BgL_kz00_3466)
	{
		{	/* Llib/srfi4.scm 688 */
			{	/* Llib/srfi4.scm 689 */
				uint8_t BgL_tmpz00_5005;

				{	/* Llib/srfi4.scm 689 */
					obj_t BgL_vz00_4141;
					long BgL_kz00_4142;

					if (BGL_U8VECTORP(BgL_vz00_3465))
						{	/* Llib/srfi4.scm 689 */
							BgL_vz00_4141 = BgL_vz00_3465;
						}
					else
						{
							obj_t BgL_auxz00_5008;

							BgL_auxz00_5008 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 28255)), BGl_string2707z00zz__srfi4z00,
								BGl_string2665z00zz__srfi4z00, BgL_vz00_3465);
							FAILURE(BgL_auxz00_5008, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 689 */
						obj_t BgL_tmpz00_5012;

						if (INTEGERP(BgL_kz00_3466))
							{	/* Llib/srfi4.scm 689 */
								BgL_tmpz00_5012 = BgL_kz00_3466;
							}
						else
							{
								obj_t BgL_auxz00_5015;

								BgL_auxz00_5015 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
									BINT(((long) 28255)), BGl_string2707z00zz__srfi4z00,
									BGl_string2683z00zz__srfi4z00, BgL_kz00_3466);
								FAILURE(BgL_auxz00_5015, BFALSE, BFALSE);
							}
						BgL_kz00_4142 = (long) CINT(BgL_tmpz00_5012);
					}
					BgL_tmpz00_5005 = BGL_U8VREF(BgL_vz00_4141, BgL_kz00_4142);
				}
				return BGL_UINT8_TO_BUINT8(BgL_tmpz00_5005);
			}
		}

	}



/* s16vector-ref */
	BGL_EXPORTED_DEF int16_t BGl_s16vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_82,
		long BgL_kz00_83)
	{
		{	/* Llib/srfi4.scm 691 */
			return BGL_S16VREF(BgL_vz00_82, BgL_kz00_83);
		}

	}



/* &s16vector-ref */
	obj_t BGl_z62s16vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3474,
		obj_t BgL_vz00_3475, obj_t BgL_kz00_3476)
	{
		{	/* Llib/srfi4.scm 691 */
			{	/* Llib/srfi4.scm 692 */
				int16_t BgL_tmpz00_5023;

				{	/* Llib/srfi4.scm 692 */
					obj_t BgL_vz00_4143;
					long BgL_kz00_4144;

					if (BGL_S16VECTORP(BgL_vz00_3475))
						{	/* Llib/srfi4.scm 692 */
							BgL_vz00_4143 = BgL_vz00_3475;
						}
					else
						{
							obj_t BgL_auxz00_5026;

							BgL_auxz00_5026 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 28315)), BGl_string2708z00zz__srfi4z00,
								BGl_string2667z00zz__srfi4z00, BgL_vz00_3475);
							FAILURE(BgL_auxz00_5026, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 692 */
						obj_t BgL_tmpz00_5030;

						if (INTEGERP(BgL_kz00_3476))
							{	/* Llib/srfi4.scm 692 */
								BgL_tmpz00_5030 = BgL_kz00_3476;
							}
						else
							{
								obj_t BgL_auxz00_5033;

								BgL_auxz00_5033 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
									BINT(((long) 28315)), BGl_string2708z00zz__srfi4z00,
									BGl_string2683z00zz__srfi4z00, BgL_kz00_3476);
								FAILURE(BgL_auxz00_5033, BFALSE, BFALSE);
							}
						BgL_kz00_4144 = (long) CINT(BgL_tmpz00_5030);
					}
					BgL_tmpz00_5023 = BGL_S16VREF(BgL_vz00_4143, BgL_kz00_4144);
				}
				return BGL_INT16_TO_BINT16(BgL_tmpz00_5023);
			}
		}

	}



/* u16vector-ref */
	BGL_EXPORTED_DEF uint16_t BGl_u16vectorzd2refzd2zz__srfi4z00(obj_t
		BgL_vz00_84, long BgL_kz00_85)
	{
		{	/* Llib/srfi4.scm 694 */
			return BGL_U16VREF(BgL_vz00_84, BgL_kz00_85);
		}

	}



/* &u16vector-ref */
	obj_t BGl_z62u16vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3484,
		obj_t BgL_vz00_3485, obj_t BgL_kz00_3486)
	{
		{	/* Llib/srfi4.scm 694 */
			{	/* Llib/srfi4.scm 695 */
				uint16_t BgL_tmpz00_5041;

				{	/* Llib/srfi4.scm 695 */
					obj_t BgL_vz00_4145;
					long BgL_kz00_4146;

					if (BGL_U16VECTORP(BgL_vz00_3485))
						{	/* Llib/srfi4.scm 695 */
							BgL_vz00_4145 = BgL_vz00_3485;
						}
					else
						{
							obj_t BgL_auxz00_5044;

							BgL_auxz00_5044 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 28376)), BGl_string2709z00zz__srfi4z00,
								BGl_string2669z00zz__srfi4z00, BgL_vz00_3485);
							FAILURE(BgL_auxz00_5044, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 695 */
						obj_t BgL_tmpz00_5048;

						if (INTEGERP(BgL_kz00_3486))
							{	/* Llib/srfi4.scm 695 */
								BgL_tmpz00_5048 = BgL_kz00_3486;
							}
						else
							{
								obj_t BgL_auxz00_5051;

								BgL_auxz00_5051 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
									BINT(((long) 28376)), BGl_string2709z00zz__srfi4z00,
									BGl_string2683z00zz__srfi4z00, BgL_kz00_3486);
								FAILURE(BgL_auxz00_5051, BFALSE, BFALSE);
							}
						BgL_kz00_4146 = (long) CINT(BgL_tmpz00_5048);
					}
					BgL_tmpz00_5041 = BGL_U16VREF(BgL_vz00_4145, BgL_kz00_4146);
				}
				return BGL_UINT16_TO_BUINT16(BgL_tmpz00_5041);
			}
		}

	}



/* s32vector-ref */
	BGL_EXPORTED_DEF int32_t BGl_s32vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_86,
		long BgL_kz00_87)
	{
		{	/* Llib/srfi4.scm 697 */
			return BGL_S32VREF(BgL_vz00_86, BgL_kz00_87);
		}

	}



/* &s32vector-ref */
	obj_t BGl_z62s32vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3494,
		obj_t BgL_vz00_3495, obj_t BgL_kz00_3496)
	{
		{	/* Llib/srfi4.scm 697 */
			{	/* Llib/srfi4.scm 698 */
				int32_t BgL_tmpz00_5059;

				{	/* Llib/srfi4.scm 698 */
					obj_t BgL_vz00_4147;
					long BgL_kz00_4148;

					if (BGL_S32VECTORP(BgL_vz00_3495))
						{	/* Llib/srfi4.scm 698 */
							BgL_vz00_4147 = BgL_vz00_3495;
						}
					else
						{
							obj_t BgL_auxz00_5062;

							BgL_auxz00_5062 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 28437)), BGl_string2710z00zz__srfi4z00,
								BGl_string2671z00zz__srfi4z00, BgL_vz00_3495);
							FAILURE(BgL_auxz00_5062, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 698 */
						obj_t BgL_tmpz00_5066;

						if (INTEGERP(BgL_kz00_3496))
							{	/* Llib/srfi4.scm 698 */
								BgL_tmpz00_5066 = BgL_kz00_3496;
							}
						else
							{
								obj_t BgL_auxz00_5069;

								BgL_auxz00_5069 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
									BINT(((long) 28437)), BGl_string2710z00zz__srfi4z00,
									BGl_string2683z00zz__srfi4z00, BgL_kz00_3496);
								FAILURE(BgL_auxz00_5069, BFALSE, BFALSE);
							}
						BgL_kz00_4148 = (long) CINT(BgL_tmpz00_5066);
					}
					BgL_tmpz00_5059 = BGL_S32VREF(BgL_vz00_4147, BgL_kz00_4148);
				}
				return BGL_INT32_TO_BINT32(BgL_tmpz00_5059);
			}
		}

	}



/* u32vector-ref */
	BGL_EXPORTED_DEF uint32_t BGl_u32vectorzd2refzd2zz__srfi4z00(obj_t
		BgL_vz00_88, long BgL_kz00_89)
	{
		{	/* Llib/srfi4.scm 700 */
			return BGL_U32VREF(BgL_vz00_88, BgL_kz00_89);
		}

	}



/* &u32vector-ref */
	obj_t BGl_z62u32vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3504,
		obj_t BgL_vz00_3505, obj_t BgL_kz00_3506)
	{
		{	/* Llib/srfi4.scm 700 */
			{	/* Llib/srfi4.scm 701 */
				uint32_t BgL_tmpz00_5077;

				{	/* Llib/srfi4.scm 701 */
					obj_t BgL_vz00_4149;
					long BgL_kz00_4150;

					if (BGL_U32VECTORP(BgL_vz00_3505))
						{	/* Llib/srfi4.scm 701 */
							BgL_vz00_4149 = BgL_vz00_3505;
						}
					else
						{
							obj_t BgL_auxz00_5080;

							BgL_auxz00_5080 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 28498)), BGl_string2711z00zz__srfi4z00,
								BGl_string2673z00zz__srfi4z00, BgL_vz00_3505);
							FAILURE(BgL_auxz00_5080, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 701 */
						obj_t BgL_tmpz00_5084;

						if (INTEGERP(BgL_kz00_3506))
							{	/* Llib/srfi4.scm 701 */
								BgL_tmpz00_5084 = BgL_kz00_3506;
							}
						else
							{
								obj_t BgL_auxz00_5087;

								BgL_auxz00_5087 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
									BINT(((long) 28498)), BGl_string2711z00zz__srfi4z00,
									BGl_string2683z00zz__srfi4z00, BgL_kz00_3506);
								FAILURE(BgL_auxz00_5087, BFALSE, BFALSE);
							}
						BgL_kz00_4150 = (long) CINT(BgL_tmpz00_5084);
					}
					BgL_tmpz00_5077 = BGL_U32VREF(BgL_vz00_4149, BgL_kz00_4150);
				}
				return BGL_UINT32_TO_BUINT32(BgL_tmpz00_5077);
			}
		}

	}



/* s64vector-ref */
	BGL_EXPORTED_DEF int64_t BGl_s64vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_90,
		long BgL_kz00_91)
	{
		{	/* Llib/srfi4.scm 703 */
			return BGL_S64VREF(BgL_vz00_90, BgL_kz00_91);
		}

	}



/* &s64vector-ref */
	obj_t BGl_z62s64vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3514,
		obj_t BgL_vz00_3515, obj_t BgL_kz00_3516)
	{
		{	/* Llib/srfi4.scm 703 */
			{	/* Llib/srfi4.scm 704 */
				int64_t BgL_tmpz00_5095;

				{	/* Llib/srfi4.scm 704 */
					obj_t BgL_vz00_4151;
					long BgL_kz00_4152;

					if (BGL_S64VECTORP(BgL_vz00_3515))
						{	/* Llib/srfi4.scm 704 */
							BgL_vz00_4151 = BgL_vz00_3515;
						}
					else
						{
							obj_t BgL_auxz00_5098;

							BgL_auxz00_5098 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 28559)), BGl_string2712z00zz__srfi4z00,
								BGl_string2675z00zz__srfi4z00, BgL_vz00_3515);
							FAILURE(BgL_auxz00_5098, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 704 */
						obj_t BgL_tmpz00_5102;

						if (INTEGERP(BgL_kz00_3516))
							{	/* Llib/srfi4.scm 704 */
								BgL_tmpz00_5102 = BgL_kz00_3516;
							}
						else
							{
								obj_t BgL_auxz00_5105;

								BgL_auxz00_5105 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
									BINT(((long) 28559)), BGl_string2712z00zz__srfi4z00,
									BGl_string2683z00zz__srfi4z00, BgL_kz00_3516);
								FAILURE(BgL_auxz00_5105, BFALSE, BFALSE);
							}
						BgL_kz00_4152 = (long) CINT(BgL_tmpz00_5102);
					}
					BgL_tmpz00_5095 = BGL_S64VREF(BgL_vz00_4151, BgL_kz00_4152);
				}
				return BGL_INT64_TO_BINT64(BgL_tmpz00_5095);
			}
		}

	}



/* u64vector-ref */
	BGL_EXPORTED_DEF uint64_t BGl_u64vectorzd2refzd2zz__srfi4z00(obj_t
		BgL_vz00_92, long BgL_kz00_93)
	{
		{	/* Llib/srfi4.scm 706 */
			return BGL_U64VREF(BgL_vz00_92, BgL_kz00_93);
		}

	}



/* &u64vector-ref */
	obj_t BGl_z62u64vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3524,
		obj_t BgL_vz00_3525, obj_t BgL_kz00_3526)
	{
		{	/* Llib/srfi4.scm 706 */
			{	/* Llib/srfi4.scm 707 */
				uint64_t BgL_tmpz00_5113;

				{	/* Llib/srfi4.scm 707 */
					obj_t BgL_vz00_4153;
					long BgL_kz00_4154;

					if (BGL_U64VECTORP(BgL_vz00_3525))
						{	/* Llib/srfi4.scm 707 */
							BgL_vz00_4153 = BgL_vz00_3525;
						}
					else
						{
							obj_t BgL_auxz00_5116;

							BgL_auxz00_5116 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 28620)), BGl_string2713z00zz__srfi4z00,
								BGl_string2677z00zz__srfi4z00, BgL_vz00_3525);
							FAILURE(BgL_auxz00_5116, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 707 */
						obj_t BgL_tmpz00_5120;

						if (INTEGERP(BgL_kz00_3526))
							{	/* Llib/srfi4.scm 707 */
								BgL_tmpz00_5120 = BgL_kz00_3526;
							}
						else
							{
								obj_t BgL_auxz00_5123;

								BgL_auxz00_5123 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
									BINT(((long) 28620)), BGl_string2713z00zz__srfi4z00,
									BGl_string2683z00zz__srfi4z00, BgL_kz00_3526);
								FAILURE(BgL_auxz00_5123, BFALSE, BFALSE);
							}
						BgL_kz00_4154 = (long) CINT(BgL_tmpz00_5120);
					}
					BgL_tmpz00_5113 = BGL_U64VREF(BgL_vz00_4153, BgL_kz00_4154);
				}
				return BGL_UINT64_TO_BUINT64(BgL_tmpz00_5113);
			}
		}

	}



/* f32vector-ref */
	BGL_EXPORTED_DEF float BGl_f32vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_94,
		long BgL_kz00_95)
	{
		{	/* Llib/srfi4.scm 709 */
			return BGL_F32VREF(BgL_vz00_94, BgL_kz00_95);
		}

	}



/* &f32vector-ref */
	obj_t BGl_z62f32vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3534,
		obj_t BgL_vz00_3535, obj_t BgL_kz00_3536)
	{
		{	/* Llib/srfi4.scm 709 */
			{	/* Llib/srfi4.scm 710 */
				float BgL_tmpz00_5131;

				{	/* Llib/srfi4.scm 710 */
					obj_t BgL_vz00_4155;
					long BgL_kz00_4156;

					if (BGL_F32VECTORP(BgL_vz00_3535))
						{	/* Llib/srfi4.scm 710 */
							BgL_vz00_4155 = BgL_vz00_3535;
						}
					else
						{
							obj_t BgL_auxz00_5134;

							BgL_auxz00_5134 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 28681)), BGl_string2714z00zz__srfi4z00,
								BGl_string2679z00zz__srfi4z00, BgL_vz00_3535);
							FAILURE(BgL_auxz00_5134, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 710 */
						obj_t BgL_tmpz00_5138;

						if (INTEGERP(BgL_kz00_3536))
							{	/* Llib/srfi4.scm 710 */
								BgL_tmpz00_5138 = BgL_kz00_3536;
							}
						else
							{
								obj_t BgL_auxz00_5141;

								BgL_auxz00_5141 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
									BINT(((long) 28681)), BGl_string2714z00zz__srfi4z00,
									BGl_string2683z00zz__srfi4z00, BgL_kz00_3536);
								FAILURE(BgL_auxz00_5141, BFALSE, BFALSE);
							}
						BgL_kz00_4156 = (long) CINT(BgL_tmpz00_5138);
					}
					BgL_tmpz00_5131 = BGL_F32VREF(BgL_vz00_4155, BgL_kz00_4156);
				}
				return FLOAT_TO_REAL(BgL_tmpz00_5131);
			}
		}

	}



/* f64vector-ref */
	BGL_EXPORTED_DEF double BGl_f64vectorzd2refzd2zz__srfi4z00(obj_t BgL_vz00_96,
		long BgL_kz00_97)
	{
		{	/* Llib/srfi4.scm 712 */
			return BGL_F64VREF(BgL_vz00_96, BgL_kz00_97);
		}

	}



/* &f64vector-ref */
	obj_t BGl_z62f64vectorzd2refzb0zz__srfi4z00(obj_t BgL_envz00_3544,
		obj_t BgL_vz00_3545, obj_t BgL_kz00_3546)
	{
		{	/* Llib/srfi4.scm 712 */
			{	/* Llib/srfi4.scm 713 */
				double BgL_tmpz00_5149;

				{	/* Llib/srfi4.scm 713 */
					obj_t BgL_vz00_4157;
					long BgL_kz00_4158;

					if (BGL_F64VECTORP(BgL_vz00_3545))
						{	/* Llib/srfi4.scm 713 */
							BgL_vz00_4157 = BgL_vz00_3545;
						}
					else
						{
							obj_t BgL_auxz00_5152;

							BgL_auxz00_5152 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 28742)), BGl_string2715z00zz__srfi4z00,
								BGl_string2681z00zz__srfi4z00, BgL_vz00_3545);
							FAILURE(BgL_auxz00_5152, BFALSE, BFALSE);
						}
					{	/* Llib/srfi4.scm 713 */
						obj_t BgL_tmpz00_5156;

						if (INTEGERP(BgL_kz00_3546))
							{	/* Llib/srfi4.scm 713 */
								BgL_tmpz00_5156 = BgL_kz00_3546;
							}
						else
							{
								obj_t BgL_auxz00_5159;

								BgL_auxz00_5159 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
									BINT(((long) 28742)), BGl_string2715z00zz__srfi4z00,
									BGl_string2683z00zz__srfi4z00, BgL_kz00_3546);
								FAILURE(BgL_auxz00_5159, BFALSE, BFALSE);
							}
						BgL_kz00_4158 = (long) CINT(BgL_tmpz00_5156);
					}
					BgL_tmpz00_5149 = BGL_F64VREF(BgL_vz00_4157, BgL_kz00_4158);
				}
				return DOUBLE_TO_REAL(BgL_tmpz00_5149);
			}
		}

	}



/* s8vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_s8vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_100, long BgL_kz00_101, int8_t BgL_valz00_102)
	{
		{	/* Llib/srfi4.scm 721 */
			BGL_S8VSET(BgL_vz00_100, BgL_kz00_101, BgL_valz00_102);
			return BUNSPEC;
		}

	}



/* &s8vector-set! */
	obj_t BGl_z62s8vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3457,
		obj_t BgL_vz00_3458, obj_t BgL_kz00_3459, obj_t BgL_valz00_3460)
	{
		{	/* Llib/srfi4.scm 721 */
			{	/* Llib/srfi4.scm 721 */
				obj_t BgL_vz00_4159;
				long BgL_kz00_4160;
				int8_t BgL_valz00_4161;

				if (BGL_S8VECTORP(BgL_vz00_3458))
					{	/* Llib/srfi4.scm 721 */
						BgL_vz00_4159 = BgL_vz00_3458;
					}
				else
					{
						obj_t BgL_auxz00_5169;

						BgL_auxz00_5169 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 29057)), BGl_string2716z00zz__srfi4z00,
							BGl_string2663z00zz__srfi4z00, BgL_vz00_3458);
						FAILURE(BgL_auxz00_5169, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 721 */
					obj_t BgL_tmpz00_5173;

					if (INTEGERP(BgL_kz00_3459))
						{	/* Llib/srfi4.scm 721 */
							BgL_tmpz00_5173 = BgL_kz00_3459;
						}
					else
						{
							obj_t BgL_auxz00_5176;

							BgL_auxz00_5176 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29057)), BGl_string2716z00zz__srfi4z00,
								BGl_string2683z00zz__srfi4z00, BgL_kz00_3459);
							FAILURE(BgL_auxz00_5176, BFALSE, BFALSE);
						}
					BgL_kz00_4160 = (long) CINT(BgL_tmpz00_5173);
				}
				{	/* Llib/srfi4.scm 721 */
					obj_t BgL_tmpz00_5181;

					if (BGL_INT8P(BgL_valz00_3460))
						{	/* Llib/srfi4.scm 721 */
							BgL_tmpz00_5181 = BgL_valz00_3460;
						}
					else
						{
							obj_t BgL_auxz00_5184;

							BgL_auxz00_5184 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29057)), BGl_string2716z00zz__srfi4z00,
								BGl_string2684z00zz__srfi4z00, BgL_valz00_3460);
							FAILURE(BgL_auxz00_5184, BFALSE, BFALSE);
						}
					BgL_valz00_4161 = BGL_BINT8_TO_INT8(BgL_tmpz00_5181);
				}
				BGL_S8VSET(BgL_vz00_4159, BgL_kz00_4160, BgL_valz00_4161);
				return BUNSPEC;
			}
		}

	}



/* u8vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_u8vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_103, long BgL_kz00_104, uint8_t BgL_valz00_105)
	{
		{	/* Llib/srfi4.scm 724 */
			BGL_U8VSET(BgL_vz00_103, BgL_kz00_104, BgL_valz00_105);
			return BUNSPEC;
		}

	}



/* &u8vector-set! */
	obj_t BGl_z62u8vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3467,
		obj_t BgL_vz00_3468, obj_t BgL_kz00_3469, obj_t BgL_valz00_3470)
	{
		{	/* Llib/srfi4.scm 724 */
			{	/* Llib/srfi4.scm 724 */
				obj_t BgL_vz00_4162;
				long BgL_kz00_4163;
				uint8_t BgL_valz00_4164;

				if (BGL_U8VECTORP(BgL_vz00_3468))
					{	/* Llib/srfi4.scm 724 */
						BgL_vz00_4162 = BgL_vz00_3468;
					}
				else
					{
						obj_t BgL_auxz00_5193;

						BgL_auxz00_5193 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 29126)), BGl_string2717z00zz__srfi4z00,
							BGl_string2665z00zz__srfi4z00, BgL_vz00_3468);
						FAILURE(BgL_auxz00_5193, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 724 */
					obj_t BgL_tmpz00_5197;

					if (INTEGERP(BgL_kz00_3469))
						{	/* Llib/srfi4.scm 724 */
							BgL_tmpz00_5197 = BgL_kz00_3469;
						}
					else
						{
							obj_t BgL_auxz00_5200;

							BgL_auxz00_5200 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29126)), BGl_string2717z00zz__srfi4z00,
								BGl_string2683z00zz__srfi4z00, BgL_kz00_3469);
							FAILURE(BgL_auxz00_5200, BFALSE, BFALSE);
						}
					BgL_kz00_4163 = (long) CINT(BgL_tmpz00_5197);
				}
				{	/* Llib/srfi4.scm 724 */
					obj_t BgL_tmpz00_5205;

					if (BGL_UINT8P(BgL_valz00_3470))
						{	/* Llib/srfi4.scm 724 */
							BgL_tmpz00_5205 = BgL_valz00_3470;
						}
					else
						{
							obj_t BgL_auxz00_5208;

							BgL_auxz00_5208 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29126)), BGl_string2717z00zz__srfi4z00,
								BGl_string2686z00zz__srfi4z00, BgL_valz00_3470);
							FAILURE(BgL_auxz00_5208, BFALSE, BFALSE);
						}
					BgL_valz00_4164 = BGL_BUINT8_TO_UINT8(BgL_tmpz00_5205);
				}
				BGL_U8VSET(BgL_vz00_4162, BgL_kz00_4163, BgL_valz00_4164);
				return BUNSPEC;
			}
		}

	}



/* s16vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_s16vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_106, long BgL_kz00_107, int16_t BgL_valz00_108)
	{
		{	/* Llib/srfi4.scm 727 */
			BGL_S16VSET(BgL_vz00_106, BgL_kz00_107, BgL_valz00_108);
			return BUNSPEC;
		}

	}



/* &s16vector-set! */
	obj_t BGl_z62s16vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3477,
		obj_t BgL_vz00_3478, obj_t BgL_kz00_3479, obj_t BgL_valz00_3480)
	{
		{	/* Llib/srfi4.scm 727 */
			{	/* Llib/srfi4.scm 727 */
				obj_t BgL_vz00_4165;
				long BgL_kz00_4166;
				int16_t BgL_valz00_4167;

				if (BGL_S16VECTORP(BgL_vz00_3478))
					{	/* Llib/srfi4.scm 727 */
						BgL_vz00_4165 = BgL_vz00_3478;
					}
				else
					{
						obj_t BgL_auxz00_5217;

						BgL_auxz00_5217 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 29195)), BGl_string2718z00zz__srfi4z00,
							BGl_string2667z00zz__srfi4z00, BgL_vz00_3478);
						FAILURE(BgL_auxz00_5217, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 727 */
					obj_t BgL_tmpz00_5221;

					if (INTEGERP(BgL_kz00_3479))
						{	/* Llib/srfi4.scm 727 */
							BgL_tmpz00_5221 = BgL_kz00_3479;
						}
					else
						{
							obj_t BgL_auxz00_5224;

							BgL_auxz00_5224 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29195)), BGl_string2718z00zz__srfi4z00,
								BGl_string2683z00zz__srfi4z00, BgL_kz00_3479);
							FAILURE(BgL_auxz00_5224, BFALSE, BFALSE);
						}
					BgL_kz00_4166 = (long) CINT(BgL_tmpz00_5221);
				}
				{	/* Llib/srfi4.scm 727 */
					obj_t BgL_tmpz00_5229;

					if (BGL_INT16P(BgL_valz00_3480))
						{	/* Llib/srfi4.scm 727 */
							BgL_tmpz00_5229 = BgL_valz00_3480;
						}
					else
						{
							obj_t BgL_auxz00_5232;

							BgL_auxz00_5232 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29195)), BGl_string2718z00zz__srfi4z00,
								BGl_string2688z00zz__srfi4z00, BgL_valz00_3480);
							FAILURE(BgL_auxz00_5232, BFALSE, BFALSE);
						}
					BgL_valz00_4167 = BGL_BINT16_TO_INT16(BgL_tmpz00_5229);
				}
				BGL_S16VSET(BgL_vz00_4165, BgL_kz00_4166, BgL_valz00_4167);
				return BUNSPEC;
			}
		}

	}



/* u16vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_u16vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_109, long BgL_kz00_110, uint16_t BgL_valz00_111)
	{
		{	/* Llib/srfi4.scm 730 */
			BGL_U16VSET(BgL_vz00_109, BgL_kz00_110, BgL_valz00_111);
			return BUNSPEC;
		}

	}



/* &u16vector-set! */
	obj_t BGl_z62u16vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3487,
		obj_t BgL_vz00_3488, obj_t BgL_kz00_3489, obj_t BgL_valz00_3490)
	{
		{	/* Llib/srfi4.scm 730 */
			{	/* Llib/srfi4.scm 730 */
				obj_t BgL_vz00_4168;
				long BgL_kz00_4169;
				uint16_t BgL_valz00_4170;

				if (BGL_U16VECTORP(BgL_vz00_3488))
					{	/* Llib/srfi4.scm 730 */
						BgL_vz00_4168 = BgL_vz00_3488;
					}
				else
					{
						obj_t BgL_auxz00_5241;

						BgL_auxz00_5241 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 29266)), BGl_string2719z00zz__srfi4z00,
							BGl_string2669z00zz__srfi4z00, BgL_vz00_3488);
						FAILURE(BgL_auxz00_5241, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 730 */
					obj_t BgL_tmpz00_5245;

					if (INTEGERP(BgL_kz00_3489))
						{	/* Llib/srfi4.scm 730 */
							BgL_tmpz00_5245 = BgL_kz00_3489;
						}
					else
						{
							obj_t BgL_auxz00_5248;

							BgL_auxz00_5248 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29266)), BGl_string2719z00zz__srfi4z00,
								BGl_string2683z00zz__srfi4z00, BgL_kz00_3489);
							FAILURE(BgL_auxz00_5248, BFALSE, BFALSE);
						}
					BgL_kz00_4169 = (long) CINT(BgL_tmpz00_5245);
				}
				{	/* Llib/srfi4.scm 730 */
					obj_t BgL_tmpz00_5253;

					if (BGL_UINT16P(BgL_valz00_3490))
						{	/* Llib/srfi4.scm 730 */
							BgL_tmpz00_5253 = BgL_valz00_3490;
						}
					else
						{
							obj_t BgL_auxz00_5256;

							BgL_auxz00_5256 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29266)), BGl_string2719z00zz__srfi4z00,
								BGl_string2690z00zz__srfi4z00, BgL_valz00_3490);
							FAILURE(BgL_auxz00_5256, BFALSE, BFALSE);
						}
					BgL_valz00_4170 = BGL_BUINT16_TO_UINT16(BgL_tmpz00_5253);
				}
				BGL_U16VSET(BgL_vz00_4168, BgL_kz00_4169, BgL_valz00_4170);
				return BUNSPEC;
			}
		}

	}



/* s32vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_s32vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_112, long BgL_kz00_113, int32_t BgL_valz00_114)
	{
		{	/* Llib/srfi4.scm 733 */
			BGL_S32VSET(BgL_vz00_112, BgL_kz00_113, BgL_valz00_114);
			return BUNSPEC;
		}

	}



/* &s32vector-set! */
	obj_t BGl_z62s32vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3497,
		obj_t BgL_vz00_3498, obj_t BgL_kz00_3499, obj_t BgL_valz00_3500)
	{
		{	/* Llib/srfi4.scm 733 */
			{	/* Llib/srfi4.scm 733 */
				obj_t BgL_vz00_4171;
				long BgL_kz00_4172;
				int32_t BgL_valz00_4173;

				if (BGL_S32VECTORP(BgL_vz00_3498))
					{	/* Llib/srfi4.scm 733 */
						BgL_vz00_4171 = BgL_vz00_3498;
					}
				else
					{
						obj_t BgL_auxz00_5265;

						BgL_auxz00_5265 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 29337)), BGl_string2720z00zz__srfi4z00,
							BGl_string2671z00zz__srfi4z00, BgL_vz00_3498);
						FAILURE(BgL_auxz00_5265, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 733 */
					obj_t BgL_tmpz00_5269;

					if (INTEGERP(BgL_kz00_3499))
						{	/* Llib/srfi4.scm 733 */
							BgL_tmpz00_5269 = BgL_kz00_3499;
						}
					else
						{
							obj_t BgL_auxz00_5272;

							BgL_auxz00_5272 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29337)), BGl_string2720z00zz__srfi4z00,
								BGl_string2683z00zz__srfi4z00, BgL_kz00_3499);
							FAILURE(BgL_auxz00_5272, BFALSE, BFALSE);
						}
					BgL_kz00_4172 = (long) CINT(BgL_tmpz00_5269);
				}
				{	/* Llib/srfi4.scm 733 */
					obj_t BgL_tmpz00_5277;

					if (BGL_INT32P(BgL_valz00_3500))
						{	/* Llib/srfi4.scm 733 */
							BgL_tmpz00_5277 = BgL_valz00_3500;
						}
					else
						{
							obj_t BgL_auxz00_5280;

							BgL_auxz00_5280 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29337)), BGl_string2720z00zz__srfi4z00,
								BGl_string2692z00zz__srfi4z00, BgL_valz00_3500);
							FAILURE(BgL_auxz00_5280, BFALSE, BFALSE);
						}
					BgL_valz00_4173 = BGL_BINT32_TO_INT32(BgL_tmpz00_5277);
				}
				BGL_S32VSET(BgL_vz00_4171, BgL_kz00_4172, BgL_valz00_4173);
				return BUNSPEC;
			}
		}

	}



/* u32vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_u32vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_115, long BgL_kz00_116, uint32_t BgL_valz00_117)
	{
		{	/* Llib/srfi4.scm 736 */
			BGL_U32VSET(BgL_vz00_115, BgL_kz00_116, BgL_valz00_117);
			return BUNSPEC;
		}

	}



/* &u32vector-set! */
	obj_t BGl_z62u32vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3507,
		obj_t BgL_vz00_3508, obj_t BgL_kz00_3509, obj_t BgL_valz00_3510)
	{
		{	/* Llib/srfi4.scm 736 */
			{	/* Llib/srfi4.scm 736 */
				obj_t BgL_vz00_4174;
				long BgL_kz00_4175;
				uint32_t BgL_valz00_4176;

				if (BGL_U32VECTORP(BgL_vz00_3508))
					{	/* Llib/srfi4.scm 736 */
						BgL_vz00_4174 = BgL_vz00_3508;
					}
				else
					{
						obj_t BgL_auxz00_5289;

						BgL_auxz00_5289 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 29408)), BGl_string2721z00zz__srfi4z00,
							BGl_string2673z00zz__srfi4z00, BgL_vz00_3508);
						FAILURE(BgL_auxz00_5289, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 736 */
					obj_t BgL_tmpz00_5293;

					if (INTEGERP(BgL_kz00_3509))
						{	/* Llib/srfi4.scm 736 */
							BgL_tmpz00_5293 = BgL_kz00_3509;
						}
					else
						{
							obj_t BgL_auxz00_5296;

							BgL_auxz00_5296 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29408)), BGl_string2721z00zz__srfi4z00,
								BGl_string2683z00zz__srfi4z00, BgL_kz00_3509);
							FAILURE(BgL_auxz00_5296, BFALSE, BFALSE);
						}
					BgL_kz00_4175 = (long) CINT(BgL_tmpz00_5293);
				}
				{	/* Llib/srfi4.scm 736 */
					obj_t BgL_tmpz00_5301;

					if (BGL_UINT32P(BgL_valz00_3510))
						{	/* Llib/srfi4.scm 736 */
							BgL_tmpz00_5301 = BgL_valz00_3510;
						}
					else
						{
							obj_t BgL_auxz00_5304;

							BgL_auxz00_5304 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29408)), BGl_string2721z00zz__srfi4z00,
								BGl_string2694z00zz__srfi4z00, BgL_valz00_3510);
							FAILURE(BgL_auxz00_5304, BFALSE, BFALSE);
						}
					BgL_valz00_4176 = BGL_BUINT32_TO_UINT32(BgL_tmpz00_5301);
				}
				BGL_U32VSET(BgL_vz00_4174, BgL_kz00_4175, BgL_valz00_4176);
				return BUNSPEC;
			}
		}

	}



/* s64vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_s64vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_118, long BgL_kz00_119, int64_t BgL_valz00_120)
	{
		{	/* Llib/srfi4.scm 739 */
			BGL_S64VSET(BgL_vz00_118, BgL_kz00_119, BgL_valz00_120);
			return BUNSPEC;
		}

	}



/* &s64vector-set! */
	obj_t BGl_z62s64vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3517,
		obj_t BgL_vz00_3518, obj_t BgL_kz00_3519, obj_t BgL_valz00_3520)
	{
		{	/* Llib/srfi4.scm 739 */
			{	/* Llib/srfi4.scm 739 */
				obj_t BgL_vz00_4177;
				long BgL_kz00_4178;
				int64_t BgL_valz00_4179;

				if (BGL_S64VECTORP(BgL_vz00_3518))
					{	/* Llib/srfi4.scm 739 */
						BgL_vz00_4177 = BgL_vz00_3518;
					}
				else
					{
						obj_t BgL_auxz00_5313;

						BgL_auxz00_5313 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 29479)), BGl_string2722z00zz__srfi4z00,
							BGl_string2675z00zz__srfi4z00, BgL_vz00_3518);
						FAILURE(BgL_auxz00_5313, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 739 */
					obj_t BgL_tmpz00_5317;

					if (INTEGERP(BgL_kz00_3519))
						{	/* Llib/srfi4.scm 739 */
							BgL_tmpz00_5317 = BgL_kz00_3519;
						}
					else
						{
							obj_t BgL_auxz00_5320;

							BgL_auxz00_5320 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29479)), BGl_string2722z00zz__srfi4z00,
								BGl_string2683z00zz__srfi4z00, BgL_kz00_3519);
							FAILURE(BgL_auxz00_5320, BFALSE, BFALSE);
						}
					BgL_kz00_4178 = (long) CINT(BgL_tmpz00_5317);
				}
				{	/* Llib/srfi4.scm 739 */
					obj_t BgL_tmpz00_5325;

					if (BGL_INT64P(BgL_valz00_3520))
						{	/* Llib/srfi4.scm 739 */
							BgL_tmpz00_5325 = BgL_valz00_3520;
						}
					else
						{
							obj_t BgL_auxz00_5328;

							BgL_auxz00_5328 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29479)), BGl_string2722z00zz__srfi4z00,
								BGl_string2696z00zz__srfi4z00, BgL_valz00_3520);
							FAILURE(BgL_auxz00_5328, BFALSE, BFALSE);
						}
					BgL_valz00_4179 = BGL_BINT64_TO_INT64(BgL_tmpz00_5325);
				}
				BGL_S64VSET(BgL_vz00_4177, BgL_kz00_4178, BgL_valz00_4179);
				return BUNSPEC;
			}
		}

	}



/* u64vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_u64vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_121, long BgL_kz00_122, uint64_t BgL_valz00_123)
	{
		{	/* Llib/srfi4.scm 742 */
			BGL_U64VSET(BgL_vz00_121, BgL_kz00_122, BgL_valz00_123);
			return BUNSPEC;
		}

	}



/* &u64vector-set! */
	obj_t BGl_z62u64vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3527,
		obj_t BgL_vz00_3528, obj_t BgL_kz00_3529, obj_t BgL_valz00_3530)
	{
		{	/* Llib/srfi4.scm 742 */
			{	/* Llib/srfi4.scm 742 */
				obj_t BgL_vz00_4180;
				long BgL_kz00_4181;
				uint64_t BgL_valz00_4182;

				if (BGL_U64VECTORP(BgL_vz00_3528))
					{	/* Llib/srfi4.scm 742 */
						BgL_vz00_4180 = BgL_vz00_3528;
					}
				else
					{
						obj_t BgL_auxz00_5337;

						BgL_auxz00_5337 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 29550)), BGl_string2723z00zz__srfi4z00,
							BGl_string2677z00zz__srfi4z00, BgL_vz00_3528);
						FAILURE(BgL_auxz00_5337, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 742 */
					obj_t BgL_tmpz00_5341;

					if (INTEGERP(BgL_kz00_3529))
						{	/* Llib/srfi4.scm 742 */
							BgL_tmpz00_5341 = BgL_kz00_3529;
						}
					else
						{
							obj_t BgL_auxz00_5344;

							BgL_auxz00_5344 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29550)), BGl_string2723z00zz__srfi4z00,
								BGl_string2683z00zz__srfi4z00, BgL_kz00_3529);
							FAILURE(BgL_auxz00_5344, BFALSE, BFALSE);
						}
					BgL_kz00_4181 = (long) CINT(BgL_tmpz00_5341);
				}
				{	/* Llib/srfi4.scm 742 */
					obj_t BgL_tmpz00_5349;

					if (BGL_UINT64P(BgL_valz00_3530))
						{	/* Llib/srfi4.scm 742 */
							BgL_tmpz00_5349 = BgL_valz00_3530;
						}
					else
						{
							obj_t BgL_auxz00_5352;

							BgL_auxz00_5352 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29550)), BGl_string2723z00zz__srfi4z00,
								BGl_string2698z00zz__srfi4z00, BgL_valz00_3530);
							FAILURE(BgL_auxz00_5352, BFALSE, BFALSE);
						}
					BgL_valz00_4182 = BGL_BINT64_TO_INT64(BgL_tmpz00_5349);
				}
				BGL_U64VSET(BgL_vz00_4180, BgL_kz00_4181, BgL_valz00_4182);
				return BUNSPEC;
			}
		}

	}



/* f32vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_f32vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_124, long BgL_kz00_125, float BgL_valz00_126)
	{
		{	/* Llib/srfi4.scm 745 */
			BGL_F32VSET(BgL_vz00_124, BgL_kz00_125, BgL_valz00_126);
			return BUNSPEC;
		}

	}



/* &f32vector-set! */
	obj_t BGl_z62f32vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3537,
		obj_t BgL_vz00_3538, obj_t BgL_kz00_3539, obj_t BgL_valz00_3540)
	{
		{	/* Llib/srfi4.scm 745 */
			{	/* Llib/srfi4.scm 745 */
				obj_t BgL_vz00_4183;
				long BgL_kz00_4184;
				float BgL_valz00_4185;

				if (BGL_F32VECTORP(BgL_vz00_3538))
					{	/* Llib/srfi4.scm 745 */
						BgL_vz00_4183 = BgL_vz00_3538;
					}
				else
					{
						obj_t BgL_auxz00_5361;

						BgL_auxz00_5361 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 29621)), BGl_string2724z00zz__srfi4z00,
							BGl_string2679z00zz__srfi4z00, BgL_vz00_3538);
						FAILURE(BgL_auxz00_5361, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 745 */
					obj_t BgL_tmpz00_5365;

					if (INTEGERP(BgL_kz00_3539))
						{	/* Llib/srfi4.scm 745 */
							BgL_tmpz00_5365 = BgL_kz00_3539;
						}
					else
						{
							obj_t BgL_auxz00_5368;

							BgL_auxz00_5368 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29621)), BGl_string2724z00zz__srfi4z00,
								BGl_string2683z00zz__srfi4z00, BgL_kz00_3539);
							FAILURE(BgL_auxz00_5368, BFALSE, BFALSE);
						}
					BgL_kz00_4184 = (long) CINT(BgL_tmpz00_5365);
				}
				{	/* Llib/srfi4.scm 745 */
					obj_t BgL_tmpz00_5373;

					if (REALP(BgL_valz00_3540))
						{	/* Llib/srfi4.scm 745 */
							BgL_tmpz00_5373 = BgL_valz00_3540;
						}
					else
						{
							obj_t BgL_auxz00_5376;

							BgL_auxz00_5376 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29621)), BGl_string2724z00zz__srfi4z00,
								BGl_string2700z00zz__srfi4z00, BgL_valz00_3540);
							FAILURE(BgL_auxz00_5376, BFALSE, BFALSE);
						}
					BgL_valz00_4185 = REAL_TO_FLOAT(BgL_tmpz00_5373);
				}
				BGL_F32VSET(BgL_vz00_4183, BgL_kz00_4184, BgL_valz00_4185);
				return BUNSPEC;
			}
		}

	}



/* f64vector-set! */
	BGL_EXPORTED_DEF obj_t BGl_f64vectorzd2setz12zc0zz__srfi4z00(obj_t
		BgL_vz00_127, long BgL_kz00_128, double BgL_valz00_129)
	{
		{	/* Llib/srfi4.scm 748 */
			BGL_F64VSET(BgL_vz00_127, BgL_kz00_128, BgL_valz00_129);
			return BUNSPEC;
		}

	}



/* &f64vector-set! */
	obj_t BGl_z62f64vectorzd2setz12za2zz__srfi4z00(obj_t BgL_envz00_3547,
		obj_t BgL_vz00_3548, obj_t BgL_kz00_3549, obj_t BgL_valz00_3550)
	{
		{	/* Llib/srfi4.scm 748 */
			{	/* Llib/srfi4.scm 748 */
				obj_t BgL_vz00_4186;
				long BgL_kz00_4187;
				double BgL_valz00_4188;

				if (BGL_F64VECTORP(BgL_vz00_3548))
					{	/* Llib/srfi4.scm 748 */
						BgL_vz00_4186 = BgL_vz00_3548;
					}
				else
					{
						obj_t BgL_auxz00_5385;

						BgL_auxz00_5385 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 29692)), BGl_string2725z00zz__srfi4z00,
							BGl_string2681z00zz__srfi4z00, BgL_vz00_3548);
						FAILURE(BgL_auxz00_5385, BFALSE, BFALSE);
					}
				{	/* Llib/srfi4.scm 748 */
					obj_t BgL_tmpz00_5389;

					if (INTEGERP(BgL_kz00_3549))
						{	/* Llib/srfi4.scm 748 */
							BgL_tmpz00_5389 = BgL_kz00_3549;
						}
					else
						{
							obj_t BgL_auxz00_5392;

							BgL_auxz00_5392 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29692)), BGl_string2725z00zz__srfi4z00,
								BGl_string2683z00zz__srfi4z00, BgL_kz00_3549);
							FAILURE(BgL_auxz00_5392, BFALSE, BFALSE);
						}
					BgL_kz00_4187 = (long) CINT(BgL_tmpz00_5389);
				}
				{	/* Llib/srfi4.scm 748 */
					obj_t BgL_tmpz00_5397;

					if (REALP(BgL_valz00_3550))
						{	/* Llib/srfi4.scm 748 */
							BgL_tmpz00_5397 = BgL_valz00_3550;
						}
					else
						{
							obj_t BgL_auxz00_5400;

							BgL_auxz00_5400 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
								BINT(((long) 29692)), BGl_string2725z00zz__srfi4z00,
								BGl_string2700z00zz__srfi4z00, BgL_valz00_3550);
							FAILURE(BgL_auxz00_5400, BFALSE, BFALSE);
						}
					BgL_valz00_4188 = REAL_TO_DOUBLE(BgL_tmpz00_5397);
				}
				BGL_F64VSET(BgL_vz00_4186, BgL_kz00_4187, BgL_valz00_4188);
				return BUNSPEC;
			}
		}

	}



/* s8vector->list */
	BGL_EXPORTED_DEF obj_t BGl_s8vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_133)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				long BgL_g1063z00_1475;

				BgL_g1063z00_1475 = BGL_HVECTOR_LENGTH(BgL_xz00_133);
				{
					long BgL_iz00_2429;
					obj_t BgL_resz00_2430;

					BgL_iz00_2429 = BgL_g1063z00_1475;
					BgL_resz00_2430 = BNIL;
				BgL_loopz00_2428:
					if ((BgL_iz00_2429 == ((long) 0)))
						{	/* Llib/srfi4.scm 771 */
							return BgL_resz00_2430;
						}
					else
						{	/* Llib/srfi4.scm 771 */
							long BgL_niz00_2436;

							BgL_niz00_2436 = (BgL_iz00_2429 - ((long) 1));
							{	/* Llib/srfi4.scm 771 */
								obj_t BgL_arg1437z00_2437;

								{	/* Llib/srfi4.scm 771 */
									int8_t BgL_arg1438z00_2438;

									BgL_arg1438z00_2438 =
										BGL_S8VREF(BgL_xz00_133, BgL_niz00_2436);
									BgL_arg1437z00_2437 =
										MAKE_YOUNG_PAIR(BGL_INT8_TO_BINT8(BgL_arg1438z00_2438),
										BgL_resz00_2430);
								}
								{
									obj_t BgL_resz00_5414;
									long BgL_iz00_5413;

									BgL_iz00_5413 = BgL_niz00_2436;
									BgL_resz00_5414 = BgL_arg1437z00_2437;
									BgL_resz00_2430 = BgL_resz00_5414;
									BgL_iz00_2429 = BgL_iz00_5413;
									goto BgL_loopz00_2428;
								}
							}
						}
				}
			}
		}

	}



/* &s8vector->list */
	obj_t BGl_z62s8vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3595,
		obj_t BgL_xz00_3596)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				obj_t BgL_auxz00_5415;

				if (BGL_S8VECTORP(BgL_xz00_3596))
					{	/* Llib/srfi4.scm 771 */
						BgL_auxz00_5415 = BgL_xz00_3596;
					}
				else
					{
						obj_t BgL_auxz00_5418;

						BgL_auxz00_5418 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 30505)), BGl_string2726z00zz__srfi4z00,
							BGl_string2663z00zz__srfi4z00, BgL_xz00_3596);
						FAILURE(BgL_auxz00_5418, BFALSE, BFALSE);
					}
				return BGl_s8vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5415);
			}
		}

	}



/* u8vector->list */
	BGL_EXPORTED_DEF obj_t BGl_u8vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_134)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				long BgL_g1065z00_1486;

				BgL_g1065z00_1486 = BGL_HVECTOR_LENGTH(BgL_xz00_134);
				{
					long BgL_iz00_2460;
					obj_t BgL_resz00_2461;

					BgL_iz00_2460 = BgL_g1065z00_1486;
					BgL_resz00_2461 = BNIL;
				BgL_loopz00_2459:
					if ((BgL_iz00_2460 == ((long) 0)))
						{	/* Llib/srfi4.scm 771 */
							return BgL_resz00_2461;
						}
					else
						{	/* Llib/srfi4.scm 771 */
							long BgL_niz00_2467;

							BgL_niz00_2467 = (BgL_iz00_2460 - ((long) 1));
							{	/* Llib/srfi4.scm 771 */
								obj_t BgL_arg1441z00_2468;

								{	/* Llib/srfi4.scm 771 */
									uint8_t BgL_arg1442z00_2469;

									BgL_arg1442z00_2469 =
										BGL_U8VREF(BgL_xz00_134, BgL_niz00_2467);
									BgL_arg1441z00_2468 =
										MAKE_YOUNG_PAIR(BGL_UINT8_TO_BUINT8(BgL_arg1442z00_2469),
										BgL_resz00_2461);
								}
								{
									obj_t BgL_resz00_5431;
									long BgL_iz00_5430;

									BgL_iz00_5430 = BgL_niz00_2467;
									BgL_resz00_5431 = BgL_arg1441z00_2468;
									BgL_resz00_2461 = BgL_resz00_5431;
									BgL_iz00_2460 = BgL_iz00_5430;
									goto BgL_loopz00_2459;
								}
							}
						}
				}
			}
		}

	}



/* &u8vector->list */
	obj_t BGl_z62u8vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3597,
		obj_t BgL_xz00_3598)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				obj_t BgL_auxz00_5432;

				if (BGL_U8VECTORP(BgL_xz00_3598))
					{	/* Llib/srfi4.scm 771 */
						BgL_auxz00_5432 = BgL_xz00_3598;
					}
				else
					{
						obj_t BgL_auxz00_5435;

						BgL_auxz00_5435 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 30505)), BGl_string2727z00zz__srfi4z00,
							BGl_string2665z00zz__srfi4z00, BgL_xz00_3598);
						FAILURE(BgL_auxz00_5435, BFALSE, BFALSE);
					}
				return BGl_u8vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5432);
			}
		}

	}



/* s16vector->list */
	BGL_EXPORTED_DEF obj_t BGl_s16vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_135)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				long BgL_g1067z00_1497;

				BgL_g1067z00_1497 = BGL_HVECTOR_LENGTH(BgL_xz00_135);
				{
					long BgL_iz00_2491;
					obj_t BgL_resz00_2492;

					BgL_iz00_2491 = BgL_g1067z00_1497;
					BgL_resz00_2492 = BNIL;
				BgL_loopz00_2490:
					if ((BgL_iz00_2491 == ((long) 0)))
						{	/* Llib/srfi4.scm 771 */
							return BgL_resz00_2492;
						}
					else
						{	/* Llib/srfi4.scm 771 */
							long BgL_niz00_2498;

							BgL_niz00_2498 = (BgL_iz00_2491 - ((long) 1));
							{	/* Llib/srfi4.scm 771 */
								obj_t BgL_arg1445z00_2499;

								{	/* Llib/srfi4.scm 771 */
									int16_t BgL_arg1446z00_2500;

									BgL_arg1446z00_2500 =
										BGL_S16VREF(BgL_xz00_135, BgL_niz00_2498);
									BgL_arg1445z00_2499 =
										MAKE_YOUNG_PAIR(BGL_INT16_TO_BINT16(BgL_arg1446z00_2500),
										BgL_resz00_2492);
								}
								{
									obj_t BgL_resz00_5448;
									long BgL_iz00_5447;

									BgL_iz00_5447 = BgL_niz00_2498;
									BgL_resz00_5448 = BgL_arg1445z00_2499;
									BgL_resz00_2492 = BgL_resz00_5448;
									BgL_iz00_2491 = BgL_iz00_5447;
									goto BgL_loopz00_2490;
								}
							}
						}
				}
			}
		}

	}



/* &s16vector->list */
	obj_t BGl_z62s16vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3599,
		obj_t BgL_xz00_3600)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				obj_t BgL_auxz00_5449;

				if (BGL_S16VECTORP(BgL_xz00_3600))
					{	/* Llib/srfi4.scm 771 */
						BgL_auxz00_5449 = BgL_xz00_3600;
					}
				else
					{
						obj_t BgL_auxz00_5452;

						BgL_auxz00_5452 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 30505)), BGl_string2728z00zz__srfi4z00,
							BGl_string2667z00zz__srfi4z00, BgL_xz00_3600);
						FAILURE(BgL_auxz00_5452, BFALSE, BFALSE);
					}
				return BGl_s16vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5449);
			}
		}

	}



/* u16vector->list */
	BGL_EXPORTED_DEF obj_t BGl_u16vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_136)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				long BgL_g1069z00_1508;

				BgL_g1069z00_1508 = BGL_HVECTOR_LENGTH(BgL_xz00_136);
				{
					long BgL_iz00_2522;
					obj_t BgL_resz00_2523;

					BgL_iz00_2522 = BgL_g1069z00_1508;
					BgL_resz00_2523 = BNIL;
				BgL_loopz00_2521:
					if ((BgL_iz00_2522 == ((long) 0)))
						{	/* Llib/srfi4.scm 771 */
							return BgL_resz00_2523;
						}
					else
						{	/* Llib/srfi4.scm 771 */
							long BgL_niz00_2529;

							BgL_niz00_2529 = (BgL_iz00_2522 - ((long) 1));
							{	/* Llib/srfi4.scm 771 */
								obj_t BgL_arg1449z00_2530;

								{	/* Llib/srfi4.scm 771 */
									uint16_t BgL_arg1451z00_2531;

									BgL_arg1451z00_2531 =
										BGL_U16VREF(BgL_xz00_136, BgL_niz00_2529);
									BgL_arg1449z00_2530 =
										MAKE_YOUNG_PAIR(BGL_UINT16_TO_BUINT16(BgL_arg1451z00_2531),
										BgL_resz00_2523);
								}
								{
									obj_t BgL_resz00_5465;
									long BgL_iz00_5464;

									BgL_iz00_5464 = BgL_niz00_2529;
									BgL_resz00_5465 = BgL_arg1449z00_2530;
									BgL_resz00_2523 = BgL_resz00_5465;
									BgL_iz00_2522 = BgL_iz00_5464;
									goto BgL_loopz00_2521;
								}
							}
						}
				}
			}
		}

	}



/* &u16vector->list */
	obj_t BGl_z62u16vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3601,
		obj_t BgL_xz00_3602)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				obj_t BgL_auxz00_5466;

				if (BGL_U16VECTORP(BgL_xz00_3602))
					{	/* Llib/srfi4.scm 771 */
						BgL_auxz00_5466 = BgL_xz00_3602;
					}
				else
					{
						obj_t BgL_auxz00_5469;

						BgL_auxz00_5469 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 30505)), BGl_string2729z00zz__srfi4z00,
							BGl_string2669z00zz__srfi4z00, BgL_xz00_3602);
						FAILURE(BgL_auxz00_5469, BFALSE, BFALSE);
					}
				return BGl_u16vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5466);
			}
		}

	}



/* s32vector->list */
	BGL_EXPORTED_DEF obj_t BGl_s32vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_137)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				long BgL_g1071z00_1519;

				BgL_g1071z00_1519 = BGL_HVECTOR_LENGTH(BgL_xz00_137);
				{
					long BgL_iz00_2553;
					obj_t BgL_resz00_2554;

					BgL_iz00_2553 = BgL_g1071z00_1519;
					BgL_resz00_2554 = BNIL;
				BgL_loopz00_2552:
					if ((BgL_iz00_2553 == ((long) 0)))
						{	/* Llib/srfi4.scm 771 */
							return BgL_resz00_2554;
						}
					else
						{	/* Llib/srfi4.scm 771 */
							long BgL_niz00_2560;

							BgL_niz00_2560 = (BgL_iz00_2553 - ((long) 1));
							{	/* Llib/srfi4.scm 771 */
								obj_t BgL_arg1454z00_2561;

								{	/* Llib/srfi4.scm 771 */
									int32_t BgL_arg1455z00_2562;

									BgL_arg1455z00_2562 =
										BGL_S32VREF(BgL_xz00_137, BgL_niz00_2560);
									BgL_arg1454z00_2561 =
										MAKE_YOUNG_PAIR(BGL_INT32_TO_BINT32(BgL_arg1455z00_2562),
										BgL_resz00_2554);
								}
								{
									obj_t BgL_resz00_5482;
									long BgL_iz00_5481;

									BgL_iz00_5481 = BgL_niz00_2560;
									BgL_resz00_5482 = BgL_arg1454z00_2561;
									BgL_resz00_2554 = BgL_resz00_5482;
									BgL_iz00_2553 = BgL_iz00_5481;
									goto BgL_loopz00_2552;
								}
							}
						}
				}
			}
		}

	}



/* &s32vector->list */
	obj_t BGl_z62s32vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3603,
		obj_t BgL_xz00_3604)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				obj_t BgL_auxz00_5483;

				if (BGL_S32VECTORP(BgL_xz00_3604))
					{	/* Llib/srfi4.scm 771 */
						BgL_auxz00_5483 = BgL_xz00_3604;
					}
				else
					{
						obj_t BgL_auxz00_5486;

						BgL_auxz00_5486 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 30505)), BGl_string2730z00zz__srfi4z00,
							BGl_string2671z00zz__srfi4z00, BgL_xz00_3604);
						FAILURE(BgL_auxz00_5486, BFALSE, BFALSE);
					}
				return BGl_s32vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5483);
			}
		}

	}



/* u32vector->list */
	BGL_EXPORTED_DEF obj_t BGl_u32vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_138)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				long BgL_g1073z00_1530;

				BgL_g1073z00_1530 = BGL_HVECTOR_LENGTH(BgL_xz00_138);
				{
					long BgL_iz00_2584;
					obj_t BgL_resz00_2585;

					BgL_iz00_2584 = BgL_g1073z00_1530;
					BgL_resz00_2585 = BNIL;
				BgL_loopz00_2583:
					if ((BgL_iz00_2584 == ((long) 0)))
						{	/* Llib/srfi4.scm 771 */
							return BgL_resz00_2585;
						}
					else
						{	/* Llib/srfi4.scm 771 */
							long BgL_niz00_2591;

							BgL_niz00_2591 = (BgL_iz00_2584 - ((long) 1));
							{	/* Llib/srfi4.scm 771 */
								obj_t BgL_arg1458z00_2592;

								{	/* Llib/srfi4.scm 771 */
									uint32_t BgL_arg1459z00_2593;

									BgL_arg1459z00_2593 =
										BGL_U32VREF(BgL_xz00_138, BgL_niz00_2591);
									BgL_arg1458z00_2592 =
										MAKE_YOUNG_PAIR(BGL_UINT32_TO_BUINT32(BgL_arg1459z00_2593),
										BgL_resz00_2585);
								}
								{
									obj_t BgL_resz00_5499;
									long BgL_iz00_5498;

									BgL_iz00_5498 = BgL_niz00_2591;
									BgL_resz00_5499 = BgL_arg1458z00_2592;
									BgL_resz00_2585 = BgL_resz00_5499;
									BgL_iz00_2584 = BgL_iz00_5498;
									goto BgL_loopz00_2583;
								}
							}
						}
				}
			}
		}

	}



/* &u32vector->list */
	obj_t BGl_z62u32vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3605,
		obj_t BgL_xz00_3606)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				obj_t BgL_auxz00_5500;

				if (BGL_U32VECTORP(BgL_xz00_3606))
					{	/* Llib/srfi4.scm 771 */
						BgL_auxz00_5500 = BgL_xz00_3606;
					}
				else
					{
						obj_t BgL_auxz00_5503;

						BgL_auxz00_5503 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 30505)), BGl_string2731z00zz__srfi4z00,
							BGl_string2673z00zz__srfi4z00, BgL_xz00_3606);
						FAILURE(BgL_auxz00_5503, BFALSE, BFALSE);
					}
				return BGl_u32vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5500);
			}
		}

	}



/* s64vector->list */
	BGL_EXPORTED_DEF obj_t BGl_s64vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_139)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				long BgL_g1076z00_1541;

				BgL_g1076z00_1541 = BGL_HVECTOR_LENGTH(BgL_xz00_139);
				{
					long BgL_iz00_2615;
					obj_t BgL_resz00_2616;

					BgL_iz00_2615 = BgL_g1076z00_1541;
					BgL_resz00_2616 = BNIL;
				BgL_loopz00_2614:
					if ((BgL_iz00_2615 == ((long) 0)))
						{	/* Llib/srfi4.scm 771 */
							return BgL_resz00_2616;
						}
					else
						{	/* Llib/srfi4.scm 771 */
							long BgL_niz00_2622;

							BgL_niz00_2622 = (BgL_iz00_2615 - ((long) 1));
							{	/* Llib/srfi4.scm 771 */
								obj_t BgL_arg1462z00_2623;

								{	/* Llib/srfi4.scm 771 */
									int64_t BgL_arg1463z00_2624;

									BgL_arg1463z00_2624 =
										BGL_S64VREF(BgL_xz00_139, BgL_niz00_2622);
									BgL_arg1462z00_2623 =
										MAKE_YOUNG_PAIR(BGL_INT64_TO_BINT64(BgL_arg1463z00_2624),
										BgL_resz00_2616);
								}
								{
									obj_t BgL_resz00_5516;
									long BgL_iz00_5515;

									BgL_iz00_5515 = BgL_niz00_2622;
									BgL_resz00_5516 = BgL_arg1462z00_2623;
									BgL_resz00_2616 = BgL_resz00_5516;
									BgL_iz00_2615 = BgL_iz00_5515;
									goto BgL_loopz00_2614;
								}
							}
						}
				}
			}
		}

	}



/* &s64vector->list */
	obj_t BGl_z62s64vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3607,
		obj_t BgL_xz00_3608)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				obj_t BgL_auxz00_5517;

				if (BGL_S64VECTORP(BgL_xz00_3608))
					{	/* Llib/srfi4.scm 771 */
						BgL_auxz00_5517 = BgL_xz00_3608;
					}
				else
					{
						obj_t BgL_auxz00_5520;

						BgL_auxz00_5520 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 30505)), BGl_string2732z00zz__srfi4z00,
							BGl_string2675z00zz__srfi4z00, BgL_xz00_3608);
						FAILURE(BgL_auxz00_5520, BFALSE, BFALSE);
					}
				return BGl_s64vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5517);
			}
		}

	}



/* u64vector->list */
	BGL_EXPORTED_DEF obj_t BGl_u64vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_140)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				long BgL_g1078z00_1552;

				BgL_g1078z00_1552 = BGL_HVECTOR_LENGTH(BgL_xz00_140);
				{
					long BgL_iz00_2646;
					obj_t BgL_resz00_2647;

					BgL_iz00_2646 = BgL_g1078z00_1552;
					BgL_resz00_2647 = BNIL;
				BgL_loopz00_2645:
					if ((BgL_iz00_2646 == ((long) 0)))
						{	/* Llib/srfi4.scm 771 */
							return BgL_resz00_2647;
						}
					else
						{	/* Llib/srfi4.scm 771 */
							long BgL_niz00_2653;

							BgL_niz00_2653 = (BgL_iz00_2646 - ((long) 1));
							{	/* Llib/srfi4.scm 771 */
								obj_t BgL_arg1466z00_2654;

								{	/* Llib/srfi4.scm 771 */
									uint64_t BgL_arg1467z00_2655;

									BgL_arg1467z00_2655 =
										BGL_U64VREF(BgL_xz00_140, BgL_niz00_2653);
									BgL_arg1466z00_2654 =
										MAKE_YOUNG_PAIR(BGL_UINT64_TO_BUINT64(BgL_arg1467z00_2655),
										BgL_resz00_2647);
								}
								{
									obj_t BgL_resz00_5533;
									long BgL_iz00_5532;

									BgL_iz00_5532 = BgL_niz00_2653;
									BgL_resz00_5533 = BgL_arg1466z00_2654;
									BgL_resz00_2647 = BgL_resz00_5533;
									BgL_iz00_2646 = BgL_iz00_5532;
									goto BgL_loopz00_2645;
								}
							}
						}
				}
			}
		}

	}



/* &u64vector->list */
	obj_t BGl_z62u64vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3609,
		obj_t BgL_xz00_3610)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				obj_t BgL_auxz00_5534;

				if (BGL_U64VECTORP(BgL_xz00_3610))
					{	/* Llib/srfi4.scm 771 */
						BgL_auxz00_5534 = BgL_xz00_3610;
					}
				else
					{
						obj_t BgL_auxz00_5537;

						BgL_auxz00_5537 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 30505)), BGl_string2733z00zz__srfi4z00,
							BGl_string2677z00zz__srfi4z00, BgL_xz00_3610);
						FAILURE(BgL_auxz00_5537, BFALSE, BFALSE);
					}
				return BGl_u64vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5534);
			}
		}

	}



/* f32vector->list */
	BGL_EXPORTED_DEF obj_t BGl_f32vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_141)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				long BgL_g1080z00_1563;

				BgL_g1080z00_1563 = BGL_HVECTOR_LENGTH(BgL_xz00_141);
				{
					long BgL_iz00_2677;
					obj_t BgL_resz00_2678;

					BgL_iz00_2677 = BgL_g1080z00_1563;
					BgL_resz00_2678 = BNIL;
				BgL_loopz00_2676:
					if ((BgL_iz00_2677 == ((long) 0)))
						{	/* Llib/srfi4.scm 771 */
							return BgL_resz00_2678;
						}
					else
						{	/* Llib/srfi4.scm 771 */
							long BgL_niz00_2684;

							BgL_niz00_2684 = (BgL_iz00_2677 - ((long) 1));
							{	/* Llib/srfi4.scm 771 */
								obj_t BgL_arg1470z00_2685;

								{	/* Llib/srfi4.scm 771 */
									float BgL_arg1471z00_2686;

									BgL_arg1471z00_2686 =
										BGL_F32VREF(BgL_xz00_141, BgL_niz00_2684);
									BgL_arg1470z00_2685 =
										MAKE_YOUNG_PAIR(FLOAT_TO_REAL(BgL_arg1471z00_2686),
										BgL_resz00_2678);
								}
								{
									obj_t BgL_resz00_5550;
									long BgL_iz00_5549;

									BgL_iz00_5549 = BgL_niz00_2684;
									BgL_resz00_5550 = BgL_arg1470z00_2685;
									BgL_resz00_2678 = BgL_resz00_5550;
									BgL_iz00_2677 = BgL_iz00_5549;
									goto BgL_loopz00_2676;
								}
							}
						}
				}
			}
		}

	}



/* &f32vector->list */
	obj_t BGl_z62f32vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3611,
		obj_t BgL_xz00_3612)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				obj_t BgL_auxz00_5551;

				if (BGL_F32VECTORP(BgL_xz00_3612))
					{	/* Llib/srfi4.scm 771 */
						BgL_auxz00_5551 = BgL_xz00_3612;
					}
				else
					{
						obj_t BgL_auxz00_5554;

						BgL_auxz00_5554 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 30505)), BGl_string2734z00zz__srfi4z00,
							BGl_string2679z00zz__srfi4z00, BgL_xz00_3612);
						FAILURE(BgL_auxz00_5554, BFALSE, BFALSE);
					}
				return BGl_f32vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5551);
			}
		}

	}



/* f64vector->list */
	BGL_EXPORTED_DEF obj_t BGl_f64vectorzd2ze3listz31zz__srfi4z00(obj_t
		BgL_xz00_142)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				long BgL_g1082z00_1574;

				BgL_g1082z00_1574 = BGL_HVECTOR_LENGTH(BgL_xz00_142);
				{
					long BgL_iz00_2708;
					obj_t BgL_resz00_2709;

					BgL_iz00_2708 = BgL_g1082z00_1574;
					BgL_resz00_2709 = BNIL;
				BgL_loopz00_2707:
					if ((BgL_iz00_2708 == ((long) 0)))
						{	/* Llib/srfi4.scm 771 */
							return BgL_resz00_2709;
						}
					else
						{	/* Llib/srfi4.scm 771 */
							long BgL_niz00_2715;

							BgL_niz00_2715 = (BgL_iz00_2708 - ((long) 1));
							{	/* Llib/srfi4.scm 771 */
								obj_t BgL_arg1474z00_2716;

								{	/* Llib/srfi4.scm 771 */
									double BgL_arg1475z00_2717;

									BgL_arg1475z00_2717 =
										BGL_F64VREF(BgL_xz00_142, BgL_niz00_2715);
									BgL_arg1474z00_2716 =
										MAKE_YOUNG_PAIR(DOUBLE_TO_REAL(BgL_arg1475z00_2717),
										BgL_resz00_2709);
								}
								{
									obj_t BgL_resz00_5567;
									long BgL_iz00_5566;

									BgL_iz00_5566 = BgL_niz00_2715;
									BgL_resz00_5567 = BgL_arg1474z00_2716;
									BgL_resz00_2709 = BgL_resz00_5567;
									BgL_iz00_2708 = BgL_iz00_5566;
									goto BgL_loopz00_2707;
								}
							}
						}
				}
			}
		}

	}



/* &f64vector->list */
	obj_t BGl_z62f64vectorzd2ze3listz53zz__srfi4z00(obj_t BgL_envz00_3613,
		obj_t BgL_xz00_3614)
	{
		{	/* Llib/srfi4.scm 771 */
			{	/* Llib/srfi4.scm 771 */
				obj_t BgL_auxz00_5568;

				if (BGL_F64VECTORP(BgL_xz00_3614))
					{	/* Llib/srfi4.scm 771 */
						BgL_auxz00_5568 = BgL_xz00_3614;
					}
				else
					{
						obj_t BgL_auxz00_5571;

						BgL_auxz00_5571 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 30505)), BGl_string2735z00zz__srfi4z00,
							BGl_string2681z00zz__srfi4z00, BgL_xz00_3614);
						FAILURE(BgL_auxz00_5571, BFALSE, BFALSE);
					}
				return BGl_f64vectorzd2ze3listz31zz__srfi4z00(BgL_auxz00_5568);
			}
		}

	}



/* list->s8vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3s8vectorz31zz__srfi4z00(obj_t
		BgL_xz00_143)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				long BgL_lenz00_1585;

				BgL_lenz00_1585 = bgl_list_length(BgL_xz00_143);
				{	/* Llib/srfi4.scm 796 */
					obj_t BgL_vecz00_1586;

					{	/* Llib/srfi4.scm 796 */
						int32_t BgL_tmpz00_5577;

						BgL_tmpz00_5577 = (int32_t) (BgL_lenz00_1585);
						BgL_vecz00_1586 = BGL_ALLOC_S8VECTOR(BgL_tmpz00_5577);
					}
					{	/* Llib/srfi4.scm 796 */

						{
							long BgL_iz00_2735;
							obj_t BgL_lz00_2736;

							BgL_iz00_2735 = ((long) 0);
							BgL_lz00_2736 = BgL_xz00_143;
						BgL_loopz00_2734:
							if ((BgL_iz00_2735 == BgL_lenz00_1585))
								{	/* Llib/srfi4.scm 796 */
									return BgL_vecz00_1586;
								}
							else
								{	/* Llib/srfi4.scm 796 */
									{	/* Llib/srfi4.scm 796 */
										obj_t BgL_arg1478z00_2741;

										if (INTEGERP(CAR(((obj_t) BgL_lz00_2736))))
											{	/* Llib/srfi4.scm 796 */
												obj_t BgL_arg1483z00_2746;

												BgL_arg1483z00_2746 = CAR(((obj_t) BgL_lz00_2736));
												{	/* Llib/srfi4.scm 796 */
													int8_t BgL_res2026z00_2748;

													{	/* Llib/srfi4.scm 796 */
														long BgL_tmpz00_5588;

														BgL_tmpz00_5588 = (long) CINT(BgL_arg1483z00_2746);
														BgL_res2026z00_2748 = (int8_t) (BgL_tmpz00_5588);
													}
													BgL_arg1478z00_2741 =
														BGL_INT8_TO_BINT8(BgL_res2026z00_2748);
											}}
										else
											{	/* Llib/srfi4.scm 796 */
												BgL_arg1478z00_2741 = CAR(((obj_t) BgL_lz00_2736));
											}
										{	/* Llib/srfi4.scm 796 */
											int8_t BgL_tmpz00_5594;

											BgL_tmpz00_5594 = BGL_BINT8_TO_INT8(BgL_arg1478z00_2741);
											BGL_S8VSET(BgL_vecz00_1586, BgL_iz00_2735,
												BgL_tmpz00_5594);
										}
										BUNSPEC;
									}
									{	/* Llib/srfi4.scm 796 */
										long BgL_arg1485z00_2751;
										obj_t BgL_arg1486z00_2752;

										BgL_arg1485z00_2751 = (BgL_iz00_2735 + ((long) 1));
										BgL_arg1486z00_2752 = CDR(((obj_t) BgL_lz00_2736));
										{
											obj_t BgL_lz00_5601;
											long BgL_iz00_5600;

											BgL_iz00_5600 = BgL_arg1485z00_2751;
											BgL_lz00_5601 = BgL_arg1486z00_2752;
											BgL_lz00_2736 = BgL_lz00_5601;
											BgL_iz00_2735 = BgL_iz00_5600;
											goto BgL_loopz00_2734;
										}
									}
								}
						}
					}
				}
			}
		}

	}



/* &list->s8vector */
	obj_t BGl_z62listzd2ze3s8vectorz53zz__srfi4z00(obj_t BgL_envz00_3615,
		obj_t BgL_xz00_3616)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				obj_t BgL_auxz00_5602;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_xz00_3616))
					{	/* Llib/srfi4.scm 796 */
						BgL_auxz00_5602 = BgL_xz00_3616;
					}
				else
					{
						obj_t BgL_auxz00_5605;

						BgL_auxz00_5605 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 31419)), BGl_string2736z00zz__srfi4z00,
							BGl_string2737z00zz__srfi4z00, BgL_xz00_3616);
						FAILURE(BgL_auxz00_5605, BFALSE, BFALSE);
					}
				return BGl_listzd2ze3s8vectorz31zz__srfi4z00(BgL_auxz00_5602);
			}
		}

	}



/* list->u8vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3u8vectorz31zz__srfi4z00(obj_t
		BgL_xz00_144)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				long BgL_lenz00_1600;

				BgL_lenz00_1600 = bgl_list_length(BgL_xz00_144);
				{	/* Llib/srfi4.scm 796 */
					obj_t BgL_vecz00_1601;

					{	/* Llib/srfi4.scm 796 */
						int32_t BgL_tmpz00_5611;

						BgL_tmpz00_5611 = (int32_t) (BgL_lenz00_1600);
						BgL_vecz00_1601 = BGL_ALLOC_U8VECTOR(BgL_tmpz00_5611);
					}
					{	/* Llib/srfi4.scm 796 */

						{
							long BgL_iz00_2769;
							obj_t BgL_lz00_2770;

							BgL_iz00_2769 = ((long) 0);
							BgL_lz00_2770 = BgL_xz00_144;
						BgL_loopz00_2768:
							if ((BgL_iz00_2769 == BgL_lenz00_1600))
								{	/* Llib/srfi4.scm 796 */
									return BgL_vecz00_1601;
								}
							else
								{	/* Llib/srfi4.scm 796 */
									{	/* Llib/srfi4.scm 796 */
										obj_t BgL_arg1489z00_2775;

										if (INTEGERP(CAR(((obj_t) BgL_lz00_2770))))
											{	/* Llib/srfi4.scm 796 */
												obj_t BgL_arg1493z00_2780;

												BgL_arg1493z00_2780 = CAR(((obj_t) BgL_lz00_2770));
												{	/* Llib/srfi4.scm 796 */
													uint8_t BgL_res2030z00_2782;

													{	/* Llib/srfi4.scm 796 */
														long BgL_tmpz00_5622;

														BgL_tmpz00_5622 = (long) CINT(BgL_arg1493z00_2780);
														BgL_res2030z00_2782 = (uint8_t) (BgL_tmpz00_5622);
													}
													BgL_arg1489z00_2775 =
														BGL_UINT8_TO_BUINT8(BgL_res2030z00_2782);
											}}
										else
											{	/* Llib/srfi4.scm 796 */
												BgL_arg1489z00_2775 = CAR(((obj_t) BgL_lz00_2770));
											}
										{	/* Llib/srfi4.scm 796 */
											uint8_t BgL_tmpz00_5628;

											BgL_tmpz00_5628 =
												BGL_BUINT8_TO_UINT8(BgL_arg1489z00_2775);
											BGL_U8VSET(BgL_vecz00_1601, BgL_iz00_2769,
												BgL_tmpz00_5628);
										}
										BUNSPEC;
									}
									{	/* Llib/srfi4.scm 796 */
										long BgL_arg1495z00_2785;
										obj_t BgL_arg1496z00_2786;

										BgL_arg1495z00_2785 = (BgL_iz00_2769 + ((long) 1));
										BgL_arg1496z00_2786 = CDR(((obj_t) BgL_lz00_2770));
										{
											obj_t BgL_lz00_5635;
											long BgL_iz00_5634;

											BgL_iz00_5634 = BgL_arg1495z00_2785;
											BgL_lz00_5635 = BgL_arg1496z00_2786;
											BgL_lz00_2770 = BgL_lz00_5635;
											BgL_iz00_2769 = BgL_iz00_5634;
											goto BgL_loopz00_2768;
										}
									}
								}
						}
					}
				}
			}
		}

	}



/* &list->u8vector */
	obj_t BGl_z62listzd2ze3u8vectorz53zz__srfi4z00(obj_t BgL_envz00_3617,
		obj_t BgL_xz00_3618)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				obj_t BgL_auxz00_5636;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_xz00_3618))
					{	/* Llib/srfi4.scm 796 */
						BgL_auxz00_5636 = BgL_xz00_3618;
					}
				else
					{
						obj_t BgL_auxz00_5639;

						BgL_auxz00_5639 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 31419)), BGl_string2738z00zz__srfi4z00,
							BGl_string2737z00zz__srfi4z00, BgL_xz00_3618);
						FAILURE(BgL_auxz00_5639, BFALSE, BFALSE);
					}
				return BGl_listzd2ze3u8vectorz31zz__srfi4z00(BgL_auxz00_5636);
			}
		}

	}



/* list->s16vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3s16vectorz31zz__srfi4z00(obj_t
		BgL_xz00_145)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				long BgL_lenz00_1615;

				BgL_lenz00_1615 = bgl_list_length(BgL_xz00_145);
				{	/* Llib/srfi4.scm 796 */
					obj_t BgL_vecz00_1616;

					{	/* Llib/srfi4.scm 796 */
						int32_t BgL_tmpz00_5645;

						BgL_tmpz00_5645 = (int32_t) (BgL_lenz00_1615);
						BgL_vecz00_1616 = BGL_ALLOC_S16VECTOR(BgL_tmpz00_5645);
					}
					{	/* Llib/srfi4.scm 796 */

						{
							long BgL_iz00_2803;
							obj_t BgL_lz00_2804;

							BgL_iz00_2803 = ((long) 0);
							BgL_lz00_2804 = BgL_xz00_145;
						BgL_loopz00_2802:
							if ((BgL_iz00_2803 == BgL_lenz00_1615))
								{	/* Llib/srfi4.scm 796 */
									return BgL_vecz00_1616;
								}
							else
								{	/* Llib/srfi4.scm 796 */
									{	/* Llib/srfi4.scm 796 */
										obj_t BgL_arg1500z00_2809;

										if (INTEGERP(CAR(((obj_t) BgL_lz00_2804))))
											{	/* Llib/srfi4.scm 796 */
												obj_t BgL_arg1505z00_2814;

												BgL_arg1505z00_2814 = CAR(((obj_t) BgL_lz00_2804));
												{	/* Llib/srfi4.scm 796 */
													int16_t BgL_res2034z00_2816;

													{	/* Llib/srfi4.scm 796 */
														long BgL_tmpz00_5656;

														BgL_tmpz00_5656 = (long) CINT(BgL_arg1505z00_2814);
														BgL_res2034z00_2816 = (int16_t) (BgL_tmpz00_5656);
													}
													BgL_arg1500z00_2809 =
														BGL_INT16_TO_BINT16(BgL_res2034z00_2816);
											}}
										else
											{	/* Llib/srfi4.scm 796 */
												BgL_arg1500z00_2809 = CAR(((obj_t) BgL_lz00_2804));
											}
										{	/* Llib/srfi4.scm 796 */
											int16_t BgL_tmpz00_5662;

											BgL_tmpz00_5662 =
												BGL_BINT16_TO_INT16(BgL_arg1500z00_2809);
											BGL_S16VSET(BgL_vecz00_1616, BgL_iz00_2803,
												BgL_tmpz00_5662);
										}
										BUNSPEC;
									}
									{	/* Llib/srfi4.scm 796 */
										long BgL_arg1507z00_2819;
										obj_t BgL_arg1508z00_2820;

										BgL_arg1507z00_2819 = (BgL_iz00_2803 + ((long) 1));
										BgL_arg1508z00_2820 = CDR(((obj_t) BgL_lz00_2804));
										{
											obj_t BgL_lz00_5669;
											long BgL_iz00_5668;

											BgL_iz00_5668 = BgL_arg1507z00_2819;
											BgL_lz00_5669 = BgL_arg1508z00_2820;
											BgL_lz00_2804 = BgL_lz00_5669;
											BgL_iz00_2803 = BgL_iz00_5668;
											goto BgL_loopz00_2802;
										}
									}
								}
						}
					}
				}
			}
		}

	}



/* &list->s16vector */
	obj_t BGl_z62listzd2ze3s16vectorz53zz__srfi4z00(obj_t BgL_envz00_3619,
		obj_t BgL_xz00_3620)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				obj_t BgL_auxz00_5670;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_xz00_3620))
					{	/* Llib/srfi4.scm 796 */
						BgL_auxz00_5670 = BgL_xz00_3620;
					}
				else
					{
						obj_t BgL_auxz00_5673;

						BgL_auxz00_5673 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 31419)), BGl_string2739z00zz__srfi4z00,
							BGl_string2737z00zz__srfi4z00, BgL_xz00_3620);
						FAILURE(BgL_auxz00_5673, BFALSE, BFALSE);
					}
				return BGl_listzd2ze3s16vectorz31zz__srfi4z00(BgL_auxz00_5670);
			}
		}

	}



/* list->u16vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3u16vectorz31zz__srfi4z00(obj_t
		BgL_xz00_146)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				long BgL_lenz00_1630;

				BgL_lenz00_1630 = bgl_list_length(BgL_xz00_146);
				{	/* Llib/srfi4.scm 796 */
					obj_t BgL_vecz00_1631;

					{	/* Llib/srfi4.scm 796 */
						int32_t BgL_tmpz00_5679;

						BgL_tmpz00_5679 = (int32_t) (BgL_lenz00_1630);
						BgL_vecz00_1631 = BGL_ALLOC_U16VECTOR(BgL_tmpz00_5679);
					}
					{	/* Llib/srfi4.scm 796 */

						{
							long BgL_iz00_2837;
							obj_t BgL_lz00_2838;

							BgL_iz00_2837 = ((long) 0);
							BgL_lz00_2838 = BgL_xz00_146;
						BgL_loopz00_2836:
							if ((BgL_iz00_2837 == BgL_lenz00_1630))
								{	/* Llib/srfi4.scm 796 */
									return BgL_vecz00_1631;
								}
							else
								{	/* Llib/srfi4.scm 796 */
									{	/* Llib/srfi4.scm 796 */
										obj_t BgL_arg1511z00_2843;

										if (INTEGERP(CAR(((obj_t) BgL_lz00_2838))))
											{	/* Llib/srfi4.scm 796 */
												obj_t BgL_arg1514z00_2848;

												BgL_arg1514z00_2848 = CAR(((obj_t) BgL_lz00_2838));
												{	/* Llib/srfi4.scm 796 */
													uint16_t BgL_res2038z00_2850;

													{	/* Llib/srfi4.scm 796 */
														long BgL_tmpz00_5690;

														BgL_tmpz00_5690 = (long) CINT(BgL_arg1514z00_2848);
														BgL_res2038z00_2850 = (uint16_t) (BgL_tmpz00_5690);
													}
													BgL_arg1511z00_2843 =
														BGL_UINT16_TO_BUINT16(BgL_res2038z00_2850);
											}}
										else
											{	/* Llib/srfi4.scm 796 */
												BgL_arg1511z00_2843 = CAR(((obj_t) BgL_lz00_2838));
											}
										{	/* Llib/srfi4.scm 796 */
											uint16_t BgL_tmpz00_5696;

											BgL_tmpz00_5696 =
												BGL_BUINT16_TO_UINT16(BgL_arg1511z00_2843);
											BGL_U16VSET(BgL_vecz00_1631, BgL_iz00_2837,
												BgL_tmpz00_5696);
										}
										BUNSPEC;
									}
									{	/* Llib/srfi4.scm 796 */
										long BgL_arg1516z00_2853;
										obj_t BgL_arg1518z00_2854;

										BgL_arg1516z00_2853 = (BgL_iz00_2837 + ((long) 1));
										BgL_arg1518z00_2854 = CDR(((obj_t) BgL_lz00_2838));
										{
											obj_t BgL_lz00_5703;
											long BgL_iz00_5702;

											BgL_iz00_5702 = BgL_arg1516z00_2853;
											BgL_lz00_5703 = BgL_arg1518z00_2854;
											BgL_lz00_2838 = BgL_lz00_5703;
											BgL_iz00_2837 = BgL_iz00_5702;
											goto BgL_loopz00_2836;
										}
									}
								}
						}
					}
				}
			}
		}

	}



/* &list->u16vector */
	obj_t BGl_z62listzd2ze3u16vectorz53zz__srfi4z00(obj_t BgL_envz00_3621,
		obj_t BgL_xz00_3622)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				obj_t BgL_auxz00_5704;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_xz00_3622))
					{	/* Llib/srfi4.scm 796 */
						BgL_auxz00_5704 = BgL_xz00_3622;
					}
				else
					{
						obj_t BgL_auxz00_5707;

						BgL_auxz00_5707 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 31419)), BGl_string2740z00zz__srfi4z00,
							BGl_string2737z00zz__srfi4z00, BgL_xz00_3622);
						FAILURE(BgL_auxz00_5707, BFALSE, BFALSE);
					}
				return BGl_listzd2ze3u16vectorz31zz__srfi4z00(BgL_auxz00_5704);
			}
		}

	}



/* list->s32vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3s32vectorz31zz__srfi4z00(obj_t
		BgL_xz00_147)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				long BgL_lenz00_1645;

				BgL_lenz00_1645 = bgl_list_length(BgL_xz00_147);
				{	/* Llib/srfi4.scm 796 */
					obj_t BgL_vecz00_1646;

					{	/* Llib/srfi4.scm 796 */
						int32_t BgL_tmpz00_5713;

						BgL_tmpz00_5713 = (int32_t) (BgL_lenz00_1645);
						BgL_vecz00_1646 = BGL_ALLOC_S32VECTOR(BgL_tmpz00_5713);
					}
					{	/* Llib/srfi4.scm 796 */

						{
							long BgL_iz00_2871;
							obj_t BgL_lz00_2872;

							BgL_iz00_2871 = ((long) 0);
							BgL_lz00_2872 = BgL_xz00_147;
						BgL_loopz00_2870:
							if ((BgL_iz00_2871 == BgL_lenz00_1645))
								{	/* Llib/srfi4.scm 796 */
									return BgL_vecz00_1646;
								}
							else
								{	/* Llib/srfi4.scm 796 */
									{	/* Llib/srfi4.scm 796 */
										obj_t BgL_arg1521z00_2877;

										if (INTEGERP(CAR(((obj_t) BgL_lz00_2872))))
											{	/* Llib/srfi4.scm 796 */
												obj_t BgL_arg1525z00_2882;

												BgL_arg1525z00_2882 = CAR(((obj_t) BgL_lz00_2872));
												{	/* Llib/srfi4.scm 796 */
													int32_t BgL_res2042z00_2884;

													{	/* Llib/srfi4.scm 796 */
														long BgL_tmpz00_5724;

														BgL_tmpz00_5724 = (long) CINT(BgL_arg1525z00_2882);
														BgL_res2042z00_2884 = (int32_t) (BgL_tmpz00_5724);
													}
													BgL_arg1521z00_2877 =
														BGL_INT32_TO_BINT32(BgL_res2042z00_2884);
											}}
										else
											{	/* Llib/srfi4.scm 796 */
												BgL_arg1521z00_2877 = CAR(((obj_t) BgL_lz00_2872));
											}
										{	/* Llib/srfi4.scm 796 */
											int32_t BgL_tmpz00_5730;

											BgL_tmpz00_5730 =
												BGL_BINT32_TO_INT32(BgL_arg1521z00_2877);
											BGL_S32VSET(BgL_vecz00_1646, BgL_iz00_2871,
												BgL_tmpz00_5730);
										}
										BUNSPEC;
									}
									{	/* Llib/srfi4.scm 796 */
										long BgL_arg1528z00_2887;
										obj_t BgL_arg1530z00_2888;

										BgL_arg1528z00_2887 = (BgL_iz00_2871 + ((long) 1));
										BgL_arg1530z00_2888 = CDR(((obj_t) BgL_lz00_2872));
										{
											obj_t BgL_lz00_5737;
											long BgL_iz00_5736;

											BgL_iz00_5736 = BgL_arg1528z00_2887;
											BgL_lz00_5737 = BgL_arg1530z00_2888;
											BgL_lz00_2872 = BgL_lz00_5737;
											BgL_iz00_2871 = BgL_iz00_5736;
											goto BgL_loopz00_2870;
										}
									}
								}
						}
					}
				}
			}
		}

	}



/* &list->s32vector */
	obj_t BGl_z62listzd2ze3s32vectorz53zz__srfi4z00(obj_t BgL_envz00_3623,
		obj_t BgL_xz00_3624)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				obj_t BgL_auxz00_5738;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_xz00_3624))
					{	/* Llib/srfi4.scm 796 */
						BgL_auxz00_5738 = BgL_xz00_3624;
					}
				else
					{
						obj_t BgL_auxz00_5741;

						BgL_auxz00_5741 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 31419)), BGl_string2741z00zz__srfi4z00,
							BGl_string2737z00zz__srfi4z00, BgL_xz00_3624);
						FAILURE(BgL_auxz00_5741, BFALSE, BFALSE);
					}
				return BGl_listzd2ze3s32vectorz31zz__srfi4z00(BgL_auxz00_5738);
			}
		}

	}



/* list->u32vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3u32vectorz31zz__srfi4z00(obj_t
		BgL_xz00_148)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				long BgL_lenz00_1660;

				BgL_lenz00_1660 = bgl_list_length(BgL_xz00_148);
				{	/* Llib/srfi4.scm 796 */
					obj_t BgL_vecz00_1661;

					{	/* Llib/srfi4.scm 796 */
						int32_t BgL_tmpz00_5747;

						BgL_tmpz00_5747 = (int32_t) (BgL_lenz00_1660);
						BgL_vecz00_1661 = BGL_ALLOC_U32VECTOR(BgL_tmpz00_5747);
					}
					{	/* Llib/srfi4.scm 796 */

						{
							long BgL_iz00_2905;
							obj_t BgL_lz00_2906;

							BgL_iz00_2905 = ((long) 0);
							BgL_lz00_2906 = BgL_xz00_148;
						BgL_loopz00_2904:
							if ((BgL_iz00_2905 == BgL_lenz00_1660))
								{	/* Llib/srfi4.scm 796 */
									return BgL_vecz00_1661;
								}
							else
								{	/* Llib/srfi4.scm 796 */
									{	/* Llib/srfi4.scm 796 */
										obj_t BgL_arg1533z00_2911;

										if (INTEGERP(CAR(((obj_t) BgL_lz00_2906))))
											{	/* Llib/srfi4.scm 796 */
												obj_t BgL_arg1536z00_2916;

												BgL_arg1536z00_2916 = CAR(((obj_t) BgL_lz00_2906));
												{	/* Llib/srfi4.scm 796 */
													uint32_t BgL_res2046z00_2918;

													{	/* Llib/srfi4.scm 796 */
														long BgL_tmpz00_5758;

														BgL_tmpz00_5758 = (long) CINT(BgL_arg1536z00_2916);
														BgL_res2046z00_2918 = (uint32_t) (BgL_tmpz00_5758);
													}
													BgL_arg1533z00_2911 =
														BGL_UINT32_TO_BUINT32(BgL_res2046z00_2918);
											}}
										else
											{	/* Llib/srfi4.scm 796 */
												BgL_arg1533z00_2911 = CAR(((obj_t) BgL_lz00_2906));
											}
										{	/* Llib/srfi4.scm 796 */
											uint32_t BgL_tmpz00_5764;

											BgL_tmpz00_5764 =
												BGL_BUINT32_TO_UINT32(BgL_arg1533z00_2911);
											BGL_U32VSET(BgL_vecz00_1661, BgL_iz00_2905,
												BgL_tmpz00_5764);
										}
										BUNSPEC;
									}
									{	/* Llib/srfi4.scm 796 */
										long BgL_arg1540z00_2921;
										obj_t BgL_arg1541z00_2922;

										BgL_arg1540z00_2921 = (BgL_iz00_2905 + ((long) 1));
										BgL_arg1541z00_2922 = CDR(((obj_t) BgL_lz00_2906));
										{
											obj_t BgL_lz00_5771;
											long BgL_iz00_5770;

											BgL_iz00_5770 = BgL_arg1540z00_2921;
											BgL_lz00_5771 = BgL_arg1541z00_2922;
											BgL_lz00_2906 = BgL_lz00_5771;
											BgL_iz00_2905 = BgL_iz00_5770;
											goto BgL_loopz00_2904;
										}
									}
								}
						}
					}
				}
			}
		}

	}



/* &list->u32vector */
	obj_t BGl_z62listzd2ze3u32vectorz53zz__srfi4z00(obj_t BgL_envz00_3625,
		obj_t BgL_xz00_3626)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				obj_t BgL_auxz00_5772;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_xz00_3626))
					{	/* Llib/srfi4.scm 796 */
						BgL_auxz00_5772 = BgL_xz00_3626;
					}
				else
					{
						obj_t BgL_auxz00_5775;

						BgL_auxz00_5775 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 31419)), BGl_string2742z00zz__srfi4z00,
							BGl_string2737z00zz__srfi4z00, BgL_xz00_3626);
						FAILURE(BgL_auxz00_5775, BFALSE, BFALSE);
					}
				return BGl_listzd2ze3u32vectorz31zz__srfi4z00(BgL_auxz00_5772);
			}
		}

	}



/* list->s64vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3s64vectorz31zz__srfi4z00(obj_t
		BgL_xz00_149)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				long BgL_lenz00_1675;

				BgL_lenz00_1675 = bgl_list_length(BgL_xz00_149);
				{	/* Llib/srfi4.scm 796 */
					obj_t BgL_vecz00_1676;

					{	/* Llib/srfi4.scm 796 */
						int32_t BgL_tmpz00_5781;

						BgL_tmpz00_5781 = (int32_t) (BgL_lenz00_1675);
						BgL_vecz00_1676 = BGL_ALLOC_S64VECTOR(BgL_tmpz00_5781);
					}
					{	/* Llib/srfi4.scm 796 */

						{
							long BgL_iz00_2939;
							obj_t BgL_lz00_2940;

							BgL_iz00_2939 = ((long) 0);
							BgL_lz00_2940 = BgL_xz00_149;
						BgL_loopz00_2938:
							if ((BgL_iz00_2939 == BgL_lenz00_1675))
								{	/* Llib/srfi4.scm 796 */
									return BgL_vecz00_1676;
								}
							else
								{	/* Llib/srfi4.scm 796 */
									{	/* Llib/srfi4.scm 796 */
										obj_t BgL_arg1544z00_2945;

										if (INTEGERP(CAR(((obj_t) BgL_lz00_2940))))
											{	/* Llib/srfi4.scm 796 */
												obj_t BgL_arg1547z00_2950;

												BgL_arg1547z00_2950 = CAR(((obj_t) BgL_lz00_2940));
												{	/* Llib/srfi4.scm 796 */
													int64_t BgL_res2050z00_2952;

													{	/* Llib/srfi4.scm 796 */
														long BgL_tmpz00_5792;

														BgL_tmpz00_5792 = (long) CINT(BgL_arg1547z00_2950);
														BgL_res2050z00_2952 = (int64_t) (BgL_tmpz00_5792);
													}
													BgL_arg1544z00_2945 =
														BGL_INT64_TO_BINT64(BgL_res2050z00_2952);
											}}
										else
											{	/* Llib/srfi4.scm 796 */
												BgL_arg1544z00_2945 = CAR(((obj_t) BgL_lz00_2940));
											}
										{	/* Llib/srfi4.scm 796 */
											int64_t BgL_tmpz00_5798;

											BgL_tmpz00_5798 =
												BGL_BINT64_TO_INT64(BgL_arg1544z00_2945);
											BGL_S64VSET(BgL_vecz00_1676, BgL_iz00_2939,
												BgL_tmpz00_5798);
										}
										BUNSPEC;
									}
									{	/* Llib/srfi4.scm 796 */
										long BgL_arg1552z00_2955;
										obj_t BgL_arg1553z00_2956;

										BgL_arg1552z00_2955 = (BgL_iz00_2939 + ((long) 1));
										BgL_arg1553z00_2956 = CDR(((obj_t) BgL_lz00_2940));
										{
											obj_t BgL_lz00_5805;
											long BgL_iz00_5804;

											BgL_iz00_5804 = BgL_arg1552z00_2955;
											BgL_lz00_5805 = BgL_arg1553z00_2956;
											BgL_lz00_2940 = BgL_lz00_5805;
											BgL_iz00_2939 = BgL_iz00_5804;
											goto BgL_loopz00_2938;
										}
									}
								}
						}
					}
				}
			}
		}

	}



/* &list->s64vector */
	obj_t BGl_z62listzd2ze3s64vectorz53zz__srfi4z00(obj_t BgL_envz00_3627,
		obj_t BgL_xz00_3628)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				obj_t BgL_auxz00_5806;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_xz00_3628))
					{	/* Llib/srfi4.scm 796 */
						BgL_auxz00_5806 = BgL_xz00_3628;
					}
				else
					{
						obj_t BgL_auxz00_5809;

						BgL_auxz00_5809 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 31419)), BGl_string2743z00zz__srfi4z00,
							BGl_string2737z00zz__srfi4z00, BgL_xz00_3628);
						FAILURE(BgL_auxz00_5809, BFALSE, BFALSE);
					}
				return BGl_listzd2ze3s64vectorz31zz__srfi4z00(BgL_auxz00_5806);
			}
		}

	}



/* list->u64vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3u64vectorz31zz__srfi4z00(obj_t
		BgL_xz00_150)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				long BgL_lenz00_1690;

				BgL_lenz00_1690 = bgl_list_length(BgL_xz00_150);
				{	/* Llib/srfi4.scm 796 */
					obj_t BgL_vecz00_1691;

					{	/* Llib/srfi4.scm 796 */
						int32_t BgL_tmpz00_5815;

						BgL_tmpz00_5815 = (int32_t) (BgL_lenz00_1690);
						BgL_vecz00_1691 = BGL_ALLOC_U64VECTOR(BgL_tmpz00_5815);
					}
					{	/* Llib/srfi4.scm 796 */

						{
							long BgL_iz00_2973;
							obj_t BgL_lz00_2974;

							BgL_iz00_2973 = ((long) 0);
							BgL_lz00_2974 = BgL_xz00_150;
						BgL_loopz00_2972:
							if ((BgL_iz00_2973 == BgL_lenz00_1690))
								{	/* Llib/srfi4.scm 796 */
									return BgL_vecz00_1691;
								}
							else
								{	/* Llib/srfi4.scm 796 */
									{	/* Llib/srfi4.scm 796 */
										obj_t BgL_arg1556z00_2979;

										if (INTEGERP(CAR(((obj_t) BgL_lz00_2974))))
											{	/* Llib/srfi4.scm 796 */
												obj_t BgL_arg1560z00_2984;

												BgL_arg1560z00_2984 = CAR(((obj_t) BgL_lz00_2974));
												{	/* Llib/srfi4.scm 796 */
													uint64_t BgL_res2054z00_2986;

													{	/* Llib/srfi4.scm 796 */
														long BgL_tmpz00_5826;

														BgL_tmpz00_5826 = (long) CINT(BgL_arg1560z00_2984);
														BgL_res2054z00_2986 = (uint64_t) (BgL_tmpz00_5826);
													}
													BgL_arg1556z00_2979 =
														BGL_UINT64_TO_BUINT64(BgL_res2054z00_2986);
											}}
										else
											{	/* Llib/srfi4.scm 796 */
												BgL_arg1556z00_2979 = CAR(((obj_t) BgL_lz00_2974));
											}
										{	/* Llib/srfi4.scm 796 */
											uint64_t BgL_tmpz00_5832;

											BgL_tmpz00_5832 =
												BGL_BINT64_TO_INT64(BgL_arg1556z00_2979);
											BGL_U64VSET(BgL_vecz00_1691, BgL_iz00_2973,
												BgL_tmpz00_5832);
										}
										BUNSPEC;
									}
									{	/* Llib/srfi4.scm 796 */
										long BgL_arg1562z00_2989;
										obj_t BgL_arg1563z00_2990;

										BgL_arg1562z00_2989 = (BgL_iz00_2973 + ((long) 1));
										BgL_arg1563z00_2990 = CDR(((obj_t) BgL_lz00_2974));
										{
											obj_t BgL_lz00_5839;
											long BgL_iz00_5838;

											BgL_iz00_5838 = BgL_arg1562z00_2989;
											BgL_lz00_5839 = BgL_arg1563z00_2990;
											BgL_lz00_2974 = BgL_lz00_5839;
											BgL_iz00_2973 = BgL_iz00_5838;
											goto BgL_loopz00_2972;
										}
									}
								}
						}
					}
				}
			}
		}

	}



/* &list->u64vector */
	obj_t BGl_z62listzd2ze3u64vectorz53zz__srfi4z00(obj_t BgL_envz00_3629,
		obj_t BgL_xz00_3630)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				obj_t BgL_auxz00_5840;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_xz00_3630))
					{	/* Llib/srfi4.scm 796 */
						BgL_auxz00_5840 = BgL_xz00_3630;
					}
				else
					{
						obj_t BgL_auxz00_5843;

						BgL_auxz00_5843 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 31419)), BGl_string2744z00zz__srfi4z00,
							BGl_string2737z00zz__srfi4z00, BgL_xz00_3630);
						FAILURE(BgL_auxz00_5843, BFALSE, BFALSE);
					}
				return BGl_listzd2ze3u64vectorz31zz__srfi4z00(BgL_auxz00_5840);
			}
		}

	}



/* list->f32vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3f32vectorz31zz__srfi4z00(obj_t
		BgL_xz00_151)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				long BgL_lenz00_1705;

				BgL_lenz00_1705 = bgl_list_length(BgL_xz00_151);
				{	/* Llib/srfi4.scm 796 */
					obj_t BgL_vecz00_1706;

					{	/* Llib/srfi4.scm 796 */
						int32_t BgL_tmpz00_5849;

						BgL_tmpz00_5849 = (int32_t) (BgL_lenz00_1705);
						BgL_vecz00_1706 = BGL_ALLOC_F32VECTOR(BgL_tmpz00_5849);
					}
					{	/* Llib/srfi4.scm 796 */

						{
							long BgL_iz00_3007;
							obj_t BgL_lz00_3008;

							BgL_iz00_3007 = ((long) 0);
							BgL_lz00_3008 = BgL_xz00_151;
						BgL_loopz00_3006:
							if ((BgL_iz00_3007 == BgL_lenz00_1705))
								{	/* Llib/srfi4.scm 796 */
									return BgL_vecz00_1706;
								}
							else
								{	/* Llib/srfi4.scm 796 */
									{	/* Llib/srfi4.scm 796 */
										obj_t BgL_arg1566z00_3013;

										if (INTEGERP(CAR(((obj_t) BgL_lz00_3008))))
											{	/* Llib/srfi4.scm 796 */
												obj_t BgL_arg1569z00_3018;

												BgL_arg1569z00_3018 = CAR(((obj_t) BgL_lz00_3008));
												{	/* Llib/srfi4.scm 796 */
													uint32_t BgL_res2058z00_3020;

													{	/* Llib/srfi4.scm 796 */
														long BgL_tmpz00_5860;

														BgL_tmpz00_5860 = (long) CINT(BgL_arg1569z00_3018);
														BgL_res2058z00_3020 = (uint32_t) (BgL_tmpz00_5860);
													}
													BgL_arg1566z00_3013 =
														BGL_UINT32_TO_BUINT32(BgL_res2058z00_3020);
											}}
										else
											{	/* Llib/srfi4.scm 796 */
												BgL_arg1566z00_3013 = CAR(((obj_t) BgL_lz00_3008));
											}
										{	/* Llib/srfi4.scm 796 */
											float BgL_tmpz00_5866;

											BgL_tmpz00_5866 = REAL_TO_FLOAT(BgL_arg1566z00_3013);
											BGL_F32VSET(BgL_vecz00_1706, BgL_iz00_3007,
												BgL_tmpz00_5866);
										} BUNSPEC;
									}
									{	/* Llib/srfi4.scm 796 */
										long BgL_arg1573z00_3023;
										obj_t BgL_arg1574z00_3024;

										BgL_arg1573z00_3023 = (BgL_iz00_3007 + ((long) 1));
										BgL_arg1574z00_3024 = CDR(((obj_t) BgL_lz00_3008));
										{
											obj_t BgL_lz00_5873;
											long BgL_iz00_5872;

											BgL_iz00_5872 = BgL_arg1573z00_3023;
											BgL_lz00_5873 = BgL_arg1574z00_3024;
											BgL_lz00_3008 = BgL_lz00_5873;
											BgL_iz00_3007 = BgL_iz00_5872;
											goto BgL_loopz00_3006;
										}
									}
								}
						}
					}
				}
			}
		}

	}



/* &list->f32vector */
	obj_t BGl_z62listzd2ze3f32vectorz53zz__srfi4z00(obj_t BgL_envz00_3631,
		obj_t BgL_xz00_3632)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				obj_t BgL_auxz00_5874;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_xz00_3632))
					{	/* Llib/srfi4.scm 796 */
						BgL_auxz00_5874 = BgL_xz00_3632;
					}
				else
					{
						obj_t BgL_auxz00_5877;

						BgL_auxz00_5877 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 31419)), BGl_string2745z00zz__srfi4z00,
							BGl_string2737z00zz__srfi4z00, BgL_xz00_3632);
						FAILURE(BgL_auxz00_5877, BFALSE, BFALSE);
					}
				return BGl_listzd2ze3f32vectorz31zz__srfi4z00(BgL_auxz00_5874);
			}
		}

	}



/* list->f64vector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3f64vectorz31zz__srfi4z00(obj_t
		BgL_xz00_152)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				long BgL_lenz00_1720;

				BgL_lenz00_1720 = bgl_list_length(BgL_xz00_152);
				{	/* Llib/srfi4.scm 796 */
					obj_t BgL_vecz00_1721;

					{	/* Llib/srfi4.scm 796 */
						int32_t BgL_tmpz00_5883;

						BgL_tmpz00_5883 = (int32_t) (BgL_lenz00_1720);
						BgL_vecz00_1721 = BGL_ALLOC_F64VECTOR(BgL_tmpz00_5883);
					}
					{	/* Llib/srfi4.scm 796 */

						{
							long BgL_iz00_3041;
							obj_t BgL_lz00_3042;

							BgL_iz00_3041 = ((long) 0);
							BgL_lz00_3042 = BgL_xz00_152;
						BgL_loopz00_3040:
							if ((BgL_iz00_3041 == BgL_lenz00_1720))
								{	/* Llib/srfi4.scm 796 */
									return BgL_vecz00_1721;
								}
							else
								{	/* Llib/srfi4.scm 796 */
									{	/* Llib/srfi4.scm 796 */
										obj_t BgL_arg1577z00_3047;

										if (INTEGERP(CAR(((obj_t) BgL_lz00_3042))))
											{	/* Llib/srfi4.scm 796 */
												obj_t BgL_arg1580z00_3052;

												BgL_arg1580z00_3052 = CAR(((obj_t) BgL_lz00_3042));
												{	/* Llib/srfi4.scm 796 */
													uint64_t BgL_res2062z00_3054;

													{	/* Llib/srfi4.scm 796 */
														long BgL_tmpz00_5894;

														BgL_tmpz00_5894 = (long) CINT(BgL_arg1580z00_3052);
														BgL_res2062z00_3054 = (uint64_t) (BgL_tmpz00_5894);
													}
													BgL_arg1577z00_3047 =
														BGL_UINT64_TO_BUINT64(BgL_res2062z00_3054);
											}}
										else
											{	/* Llib/srfi4.scm 796 */
												BgL_arg1577z00_3047 = CAR(((obj_t) BgL_lz00_3042));
											}
										{	/* Llib/srfi4.scm 796 */
											double BgL_tmpz00_5900;

											BgL_tmpz00_5900 = REAL_TO_DOUBLE(BgL_arg1577z00_3047);
											BGL_F64VSET(BgL_vecz00_1721, BgL_iz00_3041,
												BgL_tmpz00_5900);
										} BUNSPEC;
									}
									{	/* Llib/srfi4.scm 796 */
										long BgL_arg1583z00_3057;
										obj_t BgL_arg1584z00_3058;

										BgL_arg1583z00_3057 = (BgL_iz00_3041 + ((long) 1));
										BgL_arg1584z00_3058 = CDR(((obj_t) BgL_lz00_3042));
										{
											obj_t BgL_lz00_5907;
											long BgL_iz00_5906;

											BgL_iz00_5906 = BgL_arg1583z00_3057;
											BgL_lz00_5907 = BgL_arg1584z00_3058;
											BgL_lz00_3042 = BgL_lz00_5907;
											BgL_iz00_3041 = BgL_iz00_5906;
											goto BgL_loopz00_3040;
										}
									}
								}
						}
					}
				}
			}
		}

	}



/* &list->f64vector */
	obj_t BGl_z62listzd2ze3f64vectorz53zz__srfi4z00(obj_t BgL_envz00_3633,
		obj_t BgL_xz00_3634)
	{
		{	/* Llib/srfi4.scm 796 */
			{	/* Llib/srfi4.scm 796 */
				obj_t BgL_auxz00_5908;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_xz00_3634))
					{	/* Llib/srfi4.scm 796 */
						BgL_auxz00_5908 = BgL_xz00_3634;
					}
				else
					{
						obj_t BgL_auxz00_5911;

						BgL_auxz00_5911 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2661z00zz__srfi4z00,
							BINT(((long) 31419)), BGl_string2746z00zz__srfi4z00,
							BGl_string2737z00zz__srfi4z00, BgL_xz00_3634);
						FAILURE(BgL_auxz00_5911, BFALSE, BFALSE);
					}
				return BGl_listzd2ze3f64vectorz31zz__srfi4z00(BgL_auxz00_5908);
			}
		}

	}



/* _s8vector-copy! */
	obj_t BGl__s8vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1277z00_159,
		obj_t BgL_opt1276z00_158)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				obj_t BgL_targetz00_1735;
				obj_t BgL_tstartz00_1736;
				obj_t BgL_sourcez00_1737;

				BgL_targetz00_1735 = VECTOR_REF(BgL_opt1276z00_158, ((long) 0));
				BgL_tstartz00_1736 = VECTOR_REF(BgL_opt1276z00_158, ((long) 1));
				BgL_sourcez00_1737 = VECTOR_REF(BgL_opt1276z00_158, ((long) 2));
				switch (VECTOR_LENGTH(BgL_opt1276z00_158))
					{
					case ((long) 3):

						{	/* Llib/srfi4.scm 838 */
							long BgL_sendz00_1742;

							{	/* Llib/srfi4.scm 838 */
								long BgL_res2064z00_3063;

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_xz00_3062;

									if (BGL_S8VECTORP(BgL_sourcez00_1737))
										{	/* Llib/srfi4.scm 838 */
											BgL_xz00_3062 = BgL_sourcez00_1737;
										}
									else
										{
											obj_t BgL_auxz00_5921;

											BgL_auxz00_5921 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2747z00zz__srfi4z00,
												BGl_string2663z00zz__srfi4z00, BgL_sourcez00_1737);
											FAILURE(BgL_auxz00_5921, BFALSE, BFALSE);
										}
									BgL_res2064z00_3063 = BGL_HVECTOR_LENGTH(BgL_xz00_3062);
								}
								BgL_sendz00_1742 = BgL_res2064z00_3063;
							}
							{	/* Llib/srfi4.scm 838 */

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_targetz00_3064;
									long BgL_tstartz00_3065;
									obj_t BgL_sourcez00_3066;

									if (BGL_S8VECTORP(BgL_targetz00_1735))
										{	/* Llib/srfi4.scm 838 */
											BgL_targetz00_3064 = BgL_targetz00_1735;
										}
									else
										{
											obj_t BgL_auxz00_5928;

											BgL_auxz00_5928 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2747z00zz__srfi4z00,
												BGl_string2663z00zz__srfi4z00, BgL_targetz00_1735);
											FAILURE(BgL_auxz00_5928, BFALSE, BFALSE);
										}
									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_tmpz00_5932;

										if (INTEGERP(BgL_tstartz00_1736))
											{	/* Llib/srfi4.scm 838 */
												BgL_tmpz00_5932 = BgL_tstartz00_1736;
											}
										else
											{
												obj_t BgL_auxz00_5935;

												BgL_auxz00_5935 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2747z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1736);
												FAILURE(BgL_auxz00_5935, BFALSE, BFALSE);
											}
										BgL_tstartz00_3065 = (long) CINT(BgL_tmpz00_5932);
									}
									if (BGL_S8VECTORP(BgL_sourcez00_1737))
										{	/* Llib/srfi4.scm 838 */
											BgL_sourcez00_3066 = BgL_sourcez00_1737;
										}
									else
										{
											obj_t BgL_auxz00_5942;

											BgL_auxz00_5942 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2747z00zz__srfi4z00,
												BGl_string2663z00zz__srfi4z00, BgL_sourcez00_1737);
											FAILURE(BgL_auxz00_5942, BFALSE, BFALSE);
										}
									BGL_SU8VECTOR_COPY(BgL_targetz00_3064, BgL_tstartz00_3065,
										BgL_sourcez00_3066, ((long) 0), BgL_sendz00_1742);
									return BUNSPEC;
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1743;

							BgL_sstartz00_1743 = VECTOR_REF(BgL_opt1276z00_158, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								long BgL_sendz00_1744;

								{	/* Llib/srfi4.scm 838 */
									long BgL_res2065z00_3068;

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_xz00_3067;

										if (BGL_S8VECTORP(BgL_sourcez00_1737))
											{	/* Llib/srfi4.scm 838 */
												BgL_xz00_3067 = BgL_sourcez00_1737;
											}
										else
											{
												obj_t BgL_auxz00_5950;

												BgL_auxz00_5950 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2747z00zz__srfi4z00,
													BGl_string2663z00zz__srfi4z00, BgL_sourcez00_1737);
												FAILURE(BgL_auxz00_5950, BFALSE, BFALSE);
											}
										BgL_res2065z00_3068 = BGL_HVECTOR_LENGTH(BgL_xz00_3067);
									}
									BgL_sendz00_1744 = BgL_res2065z00_3068;
								}
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3069;
										long BgL_tstartz00_3070;
										obj_t BgL_sourcez00_3071;

										if (BGL_S8VECTORP(BgL_targetz00_1735))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3069 = BgL_targetz00_1735;
											}
										else
											{
												obj_t BgL_auxz00_5957;

												BgL_auxz00_5957 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2747z00zz__srfi4z00,
													BGl_string2663z00zz__srfi4z00, BgL_targetz00_1735);
												FAILURE(BgL_auxz00_5957, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_5961;

											if (INTEGERP(BgL_tstartz00_1736))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_5961 = BgL_tstartz00_1736;
												}
											else
												{
													obj_t BgL_auxz00_5964;

													BgL_auxz00_5964 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2747z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1736);
													FAILURE(BgL_auxz00_5964, BFALSE, BFALSE);
												}
											BgL_tstartz00_3070 = (long) CINT(BgL_tmpz00_5961);
										}
										if (BGL_S8VECTORP(BgL_sourcez00_1737))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3071 = BgL_sourcez00_1737;
											}
										else
											{
												obj_t BgL_auxz00_5971;

												BgL_auxz00_5971 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2747z00zz__srfi4z00,
													BGl_string2663z00zz__srfi4z00, BgL_sourcez00_1737);
												FAILURE(BgL_auxz00_5971, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_tmpz00_5975;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_5976;

												if (INTEGERP(BgL_sstartz00_1743))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_5976 = BgL_sstartz00_1743;
													}
												else
													{
														obj_t BgL_auxz00_5979;

														BgL_auxz00_5979 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2747z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1743);
														FAILURE(BgL_auxz00_5979, BFALSE, BFALSE);
													}
												BgL_tmpz00_5975 = (long) CINT(BgL_tmpz00_5976);
											}
											BGL_SU8VECTOR_COPY(BgL_targetz00_3069, BgL_tstartz00_3070,
												BgL_sourcez00_3071, BgL_tmpz00_5975, BgL_sendz00_1744);
										}
										return BUNSPEC;
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1745;

							BgL_sstartz00_1745 = VECTOR_REF(BgL_opt1276z00_158, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								obj_t BgL_sendz00_1746;

								BgL_sendz00_1746 = VECTOR_REF(BgL_opt1276z00_158, ((long) 4));
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3072;
										long BgL_tstartz00_3073;
										obj_t BgL_sourcez00_3074;

										if (BGL_S8VECTORP(BgL_targetz00_1735))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3072 = BgL_targetz00_1735;
											}
										else
											{
												obj_t BgL_auxz00_5989;

												BgL_auxz00_5989 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2747z00zz__srfi4z00,
													BGl_string2663z00zz__srfi4z00, BgL_targetz00_1735);
												FAILURE(BgL_auxz00_5989, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_5993;

											if (INTEGERP(BgL_tstartz00_1736))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_5993 = BgL_tstartz00_1736;
												}
											else
												{
													obj_t BgL_auxz00_5996;

													BgL_auxz00_5996 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2747z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1736);
													FAILURE(BgL_auxz00_5996, BFALSE, BFALSE);
												}
											BgL_tstartz00_3073 = (long) CINT(BgL_tmpz00_5993);
										}
										if (BGL_S8VECTORP(BgL_sourcez00_1737))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3074 = BgL_sourcez00_1737;
											}
										else
											{
												obj_t BgL_auxz00_6003;

												BgL_auxz00_6003 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2747z00zz__srfi4z00,
													BGl_string2663z00zz__srfi4z00, BgL_sourcez00_1737);
												FAILURE(BgL_auxz00_6003, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_auxz00_6016;
											long BgL_tmpz00_6007;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6017;

												if (INTEGERP(BgL_sendz00_1746))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6017 = BgL_sendz00_1746;
													}
												else
													{
														obj_t BgL_auxz00_6020;

														BgL_auxz00_6020 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2747z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00, BgL_sendz00_1746);
														FAILURE(BgL_auxz00_6020, BFALSE, BFALSE);
													}
												BgL_auxz00_6016 = (long) CINT(BgL_tmpz00_6017);
											}
											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6008;

												if (INTEGERP(BgL_sstartz00_1745))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6008 = BgL_sstartz00_1745;
													}
												else
													{
														obj_t BgL_auxz00_6011;

														BgL_auxz00_6011 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2747z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1745);
														FAILURE(BgL_auxz00_6011, BFALSE, BFALSE);
													}
												BgL_tmpz00_6007 = (long) CINT(BgL_tmpz00_6008);
											}
											BGL_SU8VECTOR_COPY(BgL_targetz00_3072, BgL_tstartz00_3073,
												BgL_sourcez00_3074, BgL_tmpz00_6007, BgL_auxz00_6016);
										}
										return BUNSPEC;
									}
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



/* s8vector-copy! */
	BGL_EXPORTED_DEF obj_t BGl_s8vectorzd2copyz12zc0zz__srfi4z00(obj_t
		BgL_targetz00_153, long BgL_tstartz00_154, obj_t BgL_sourcez00_155,
		obj_t BgL_sstartz00_156, obj_t BgL_sendz00_157)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				long BgL_auxz00_6030;
				long BgL_tmpz00_6028;

				BgL_auxz00_6030 = (long) CINT(BgL_sendz00_157);
				BgL_tmpz00_6028 = (long) CINT(BgL_sstartz00_156);
				BGL_SU8VECTOR_COPY(BgL_targetz00_153, BgL_tstartz00_154,
					BgL_sourcez00_155, BgL_tmpz00_6028, BgL_auxz00_6030);
			}
			return BUNSPEC;
		}

	}



/* _u8vector-copy! */
	obj_t BGl__u8vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1281z00_166,
		obj_t BgL_opt1280z00_165)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				obj_t BgL_targetz00_1747;
				obj_t BgL_tstartz00_1748;
				obj_t BgL_sourcez00_1749;

				BgL_targetz00_1747 = VECTOR_REF(BgL_opt1280z00_165, ((long) 0));
				BgL_tstartz00_1748 = VECTOR_REF(BgL_opt1280z00_165, ((long) 1));
				BgL_sourcez00_1749 = VECTOR_REF(BgL_opt1280z00_165, ((long) 2));
				switch (VECTOR_LENGTH(BgL_opt1280z00_165))
					{
					case ((long) 3):

						{	/* Llib/srfi4.scm 838 */
							long BgL_sendz00_1754;

							{	/* Llib/srfi4.scm 838 */
								long BgL_res2066z00_3076;

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_xz00_3075;

									if (BGL_U8VECTORP(BgL_sourcez00_1749))
										{	/* Llib/srfi4.scm 838 */
											BgL_xz00_3075 = BgL_sourcez00_1749;
										}
									else
										{
											obj_t BgL_auxz00_6038;

											BgL_auxz00_6038 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2748z00zz__srfi4z00,
												BGl_string2665z00zz__srfi4z00, BgL_sourcez00_1749);
											FAILURE(BgL_auxz00_6038, BFALSE, BFALSE);
										}
									BgL_res2066z00_3076 = BGL_HVECTOR_LENGTH(BgL_xz00_3075);
								}
								BgL_sendz00_1754 = BgL_res2066z00_3076;
							}
							{	/* Llib/srfi4.scm 838 */

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_targetz00_3077;
									long BgL_tstartz00_3078;
									obj_t BgL_sourcez00_3079;

									if (BGL_U8VECTORP(BgL_targetz00_1747))
										{	/* Llib/srfi4.scm 838 */
											BgL_targetz00_3077 = BgL_targetz00_1747;
										}
									else
										{
											obj_t BgL_auxz00_6045;

											BgL_auxz00_6045 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2748z00zz__srfi4z00,
												BGl_string2665z00zz__srfi4z00, BgL_targetz00_1747);
											FAILURE(BgL_auxz00_6045, BFALSE, BFALSE);
										}
									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_tmpz00_6049;

										if (INTEGERP(BgL_tstartz00_1748))
											{	/* Llib/srfi4.scm 838 */
												BgL_tmpz00_6049 = BgL_tstartz00_1748;
											}
										else
											{
												obj_t BgL_auxz00_6052;

												BgL_auxz00_6052 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2748z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1748);
												FAILURE(BgL_auxz00_6052, BFALSE, BFALSE);
											}
										BgL_tstartz00_3078 = (long) CINT(BgL_tmpz00_6049);
									}
									if (BGL_U8VECTORP(BgL_sourcez00_1749))
										{	/* Llib/srfi4.scm 838 */
											BgL_sourcez00_3079 = BgL_sourcez00_1749;
										}
									else
										{
											obj_t BgL_auxz00_6059;

											BgL_auxz00_6059 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2748z00zz__srfi4z00,
												BGl_string2665z00zz__srfi4z00, BgL_sourcez00_1749);
											FAILURE(BgL_auxz00_6059, BFALSE, BFALSE);
										}
									BGL_SU8VECTOR_COPY(BgL_targetz00_3077, BgL_tstartz00_3078,
										BgL_sourcez00_3079, ((long) 0), BgL_sendz00_1754);
									return BUNSPEC;
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1755;

							BgL_sstartz00_1755 = VECTOR_REF(BgL_opt1280z00_165, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								long BgL_sendz00_1756;

								{	/* Llib/srfi4.scm 838 */
									long BgL_res2067z00_3081;

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_xz00_3080;

										if (BGL_U8VECTORP(BgL_sourcez00_1749))
											{	/* Llib/srfi4.scm 838 */
												BgL_xz00_3080 = BgL_sourcez00_1749;
											}
										else
											{
												obj_t BgL_auxz00_6067;

												BgL_auxz00_6067 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2748z00zz__srfi4z00,
													BGl_string2665z00zz__srfi4z00, BgL_sourcez00_1749);
												FAILURE(BgL_auxz00_6067, BFALSE, BFALSE);
											}
										BgL_res2067z00_3081 = BGL_HVECTOR_LENGTH(BgL_xz00_3080);
									}
									BgL_sendz00_1756 = BgL_res2067z00_3081;
								}
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3082;
										long BgL_tstartz00_3083;
										obj_t BgL_sourcez00_3084;

										if (BGL_U8VECTORP(BgL_targetz00_1747))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3082 = BgL_targetz00_1747;
											}
										else
											{
												obj_t BgL_auxz00_6074;

												BgL_auxz00_6074 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2748z00zz__srfi4z00,
													BGl_string2665z00zz__srfi4z00, BgL_targetz00_1747);
												FAILURE(BgL_auxz00_6074, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_6078;

											if (INTEGERP(BgL_tstartz00_1748))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_6078 = BgL_tstartz00_1748;
												}
											else
												{
													obj_t BgL_auxz00_6081;

													BgL_auxz00_6081 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2748z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1748);
													FAILURE(BgL_auxz00_6081, BFALSE, BFALSE);
												}
											BgL_tstartz00_3083 = (long) CINT(BgL_tmpz00_6078);
										}
										if (BGL_U8VECTORP(BgL_sourcez00_1749))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3084 = BgL_sourcez00_1749;
											}
										else
											{
												obj_t BgL_auxz00_6088;

												BgL_auxz00_6088 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2748z00zz__srfi4z00,
													BGl_string2665z00zz__srfi4z00, BgL_sourcez00_1749);
												FAILURE(BgL_auxz00_6088, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_tmpz00_6092;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6093;

												if (INTEGERP(BgL_sstartz00_1755))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6093 = BgL_sstartz00_1755;
													}
												else
													{
														obj_t BgL_auxz00_6096;

														BgL_auxz00_6096 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2748z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1755);
														FAILURE(BgL_auxz00_6096, BFALSE, BFALSE);
													}
												BgL_tmpz00_6092 = (long) CINT(BgL_tmpz00_6093);
											}
											BGL_SU8VECTOR_COPY(BgL_targetz00_3082, BgL_tstartz00_3083,
												BgL_sourcez00_3084, BgL_tmpz00_6092, BgL_sendz00_1756);
										}
										return BUNSPEC;
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1757;

							BgL_sstartz00_1757 = VECTOR_REF(BgL_opt1280z00_165, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								obj_t BgL_sendz00_1758;

								BgL_sendz00_1758 = VECTOR_REF(BgL_opt1280z00_165, ((long) 4));
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3085;
										long BgL_tstartz00_3086;
										obj_t BgL_sourcez00_3087;

										if (BGL_U8VECTORP(BgL_targetz00_1747))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3085 = BgL_targetz00_1747;
											}
										else
											{
												obj_t BgL_auxz00_6106;

												BgL_auxz00_6106 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2748z00zz__srfi4z00,
													BGl_string2665z00zz__srfi4z00, BgL_targetz00_1747);
												FAILURE(BgL_auxz00_6106, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_6110;

											if (INTEGERP(BgL_tstartz00_1748))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_6110 = BgL_tstartz00_1748;
												}
											else
												{
													obj_t BgL_auxz00_6113;

													BgL_auxz00_6113 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2748z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1748);
													FAILURE(BgL_auxz00_6113, BFALSE, BFALSE);
												}
											BgL_tstartz00_3086 = (long) CINT(BgL_tmpz00_6110);
										}
										if (BGL_U8VECTORP(BgL_sourcez00_1749))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3087 = BgL_sourcez00_1749;
											}
										else
											{
												obj_t BgL_auxz00_6120;

												BgL_auxz00_6120 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2748z00zz__srfi4z00,
													BGl_string2665z00zz__srfi4z00, BgL_sourcez00_1749);
												FAILURE(BgL_auxz00_6120, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_auxz00_6133;
											long BgL_tmpz00_6124;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6134;

												if (INTEGERP(BgL_sendz00_1758))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6134 = BgL_sendz00_1758;
													}
												else
													{
														obj_t BgL_auxz00_6137;

														BgL_auxz00_6137 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2748z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00, BgL_sendz00_1758);
														FAILURE(BgL_auxz00_6137, BFALSE, BFALSE);
													}
												BgL_auxz00_6133 = (long) CINT(BgL_tmpz00_6134);
											}
											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6125;

												if (INTEGERP(BgL_sstartz00_1757))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6125 = BgL_sstartz00_1757;
													}
												else
													{
														obj_t BgL_auxz00_6128;

														BgL_auxz00_6128 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2748z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1757);
														FAILURE(BgL_auxz00_6128, BFALSE, BFALSE);
													}
												BgL_tmpz00_6124 = (long) CINT(BgL_tmpz00_6125);
											}
											BGL_SU8VECTOR_COPY(BgL_targetz00_3085, BgL_tstartz00_3086,
												BgL_sourcez00_3087, BgL_tmpz00_6124, BgL_auxz00_6133);
										}
										return BUNSPEC;
									}
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



/* u8vector-copy! */
	BGL_EXPORTED_DEF obj_t BGl_u8vectorzd2copyz12zc0zz__srfi4z00(obj_t
		BgL_targetz00_160, long BgL_tstartz00_161, obj_t BgL_sourcez00_162,
		obj_t BgL_sstartz00_163, obj_t BgL_sendz00_164)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				long BgL_auxz00_6147;
				long BgL_tmpz00_6145;

				BgL_auxz00_6147 = (long) CINT(BgL_sendz00_164);
				BgL_tmpz00_6145 = (long) CINT(BgL_sstartz00_163);
				BGL_SU8VECTOR_COPY(BgL_targetz00_160, BgL_tstartz00_161,
					BgL_sourcez00_162, BgL_tmpz00_6145, BgL_auxz00_6147);
			}
			return BUNSPEC;
		}

	}



/* _s16vector-copy! */
	obj_t BGl__s16vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1285z00_173,
		obj_t BgL_opt1284z00_172)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				obj_t BgL_targetz00_1759;
				obj_t BgL_tstartz00_1760;
				obj_t BgL_sourcez00_1761;

				BgL_targetz00_1759 = VECTOR_REF(BgL_opt1284z00_172, ((long) 0));
				BgL_tstartz00_1760 = VECTOR_REF(BgL_opt1284z00_172, ((long) 1));
				BgL_sourcez00_1761 = VECTOR_REF(BgL_opt1284z00_172, ((long) 2));
				switch (VECTOR_LENGTH(BgL_opt1284z00_172))
					{
					case ((long) 3):

						{	/* Llib/srfi4.scm 838 */
							long BgL_sendz00_1766;

							{	/* Llib/srfi4.scm 838 */
								long BgL_res2068z00_3089;

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_xz00_3088;

									if (BGL_S16VECTORP(BgL_sourcez00_1761))
										{	/* Llib/srfi4.scm 838 */
											BgL_xz00_3088 = BgL_sourcez00_1761;
										}
									else
										{
											obj_t BgL_auxz00_6155;

											BgL_auxz00_6155 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2749z00zz__srfi4z00,
												BGl_string2667z00zz__srfi4z00, BgL_sourcez00_1761);
											FAILURE(BgL_auxz00_6155, BFALSE, BFALSE);
										}
									BgL_res2068z00_3089 = BGL_HVECTOR_LENGTH(BgL_xz00_3088);
								}
								BgL_sendz00_1766 = BgL_res2068z00_3089;
							}
							{	/* Llib/srfi4.scm 838 */

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_targetz00_3090;
									long BgL_tstartz00_3091;
									obj_t BgL_sourcez00_3092;

									if (BGL_S16VECTORP(BgL_targetz00_1759))
										{	/* Llib/srfi4.scm 838 */
											BgL_targetz00_3090 = BgL_targetz00_1759;
										}
									else
										{
											obj_t BgL_auxz00_6162;

											BgL_auxz00_6162 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2749z00zz__srfi4z00,
												BGl_string2667z00zz__srfi4z00, BgL_targetz00_1759);
											FAILURE(BgL_auxz00_6162, BFALSE, BFALSE);
										}
									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_tmpz00_6166;

										if (INTEGERP(BgL_tstartz00_1760))
											{	/* Llib/srfi4.scm 838 */
												BgL_tmpz00_6166 = BgL_tstartz00_1760;
											}
										else
											{
												obj_t BgL_auxz00_6169;

												BgL_auxz00_6169 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2749z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1760);
												FAILURE(BgL_auxz00_6169, BFALSE, BFALSE);
											}
										BgL_tstartz00_3091 = (long) CINT(BgL_tmpz00_6166);
									}
									if (BGL_S16VECTORP(BgL_sourcez00_1761))
										{	/* Llib/srfi4.scm 838 */
											BgL_sourcez00_3092 = BgL_sourcez00_1761;
										}
									else
										{
											obj_t BgL_auxz00_6176;

											BgL_auxz00_6176 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2749z00zz__srfi4z00,
												BGl_string2667z00zz__srfi4z00, BgL_sourcez00_1761);
											FAILURE(BgL_auxz00_6176, BFALSE, BFALSE);
										}
									BGL_SU16VECTOR_COPY(BgL_targetz00_3090, BgL_tstartz00_3091,
										BgL_sourcez00_3092, ((long) 0), BgL_sendz00_1766);
									return BUNSPEC;
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1767;

							BgL_sstartz00_1767 = VECTOR_REF(BgL_opt1284z00_172, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								long BgL_sendz00_1768;

								{	/* Llib/srfi4.scm 838 */
									long BgL_res2069z00_3094;

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_xz00_3093;

										if (BGL_S16VECTORP(BgL_sourcez00_1761))
											{	/* Llib/srfi4.scm 838 */
												BgL_xz00_3093 = BgL_sourcez00_1761;
											}
										else
											{
												obj_t BgL_auxz00_6184;

												BgL_auxz00_6184 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2749z00zz__srfi4z00,
													BGl_string2667z00zz__srfi4z00, BgL_sourcez00_1761);
												FAILURE(BgL_auxz00_6184, BFALSE, BFALSE);
											}
										BgL_res2069z00_3094 = BGL_HVECTOR_LENGTH(BgL_xz00_3093);
									}
									BgL_sendz00_1768 = BgL_res2069z00_3094;
								}
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3095;
										long BgL_tstartz00_3096;
										obj_t BgL_sourcez00_3097;

										if (BGL_S16VECTORP(BgL_targetz00_1759))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3095 = BgL_targetz00_1759;
											}
										else
											{
												obj_t BgL_auxz00_6191;

												BgL_auxz00_6191 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2749z00zz__srfi4z00,
													BGl_string2667z00zz__srfi4z00, BgL_targetz00_1759);
												FAILURE(BgL_auxz00_6191, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_6195;

											if (INTEGERP(BgL_tstartz00_1760))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_6195 = BgL_tstartz00_1760;
												}
											else
												{
													obj_t BgL_auxz00_6198;

													BgL_auxz00_6198 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2749z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1760);
													FAILURE(BgL_auxz00_6198, BFALSE, BFALSE);
												}
											BgL_tstartz00_3096 = (long) CINT(BgL_tmpz00_6195);
										}
										if (BGL_S16VECTORP(BgL_sourcez00_1761))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3097 = BgL_sourcez00_1761;
											}
										else
											{
												obj_t BgL_auxz00_6205;

												BgL_auxz00_6205 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2749z00zz__srfi4z00,
													BGl_string2667z00zz__srfi4z00, BgL_sourcez00_1761);
												FAILURE(BgL_auxz00_6205, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_tmpz00_6209;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6210;

												if (INTEGERP(BgL_sstartz00_1767))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6210 = BgL_sstartz00_1767;
													}
												else
													{
														obj_t BgL_auxz00_6213;

														BgL_auxz00_6213 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2749z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1767);
														FAILURE(BgL_auxz00_6213, BFALSE, BFALSE);
													}
												BgL_tmpz00_6209 = (long) CINT(BgL_tmpz00_6210);
											}
											BGL_SU16VECTOR_COPY(BgL_targetz00_3095,
												BgL_tstartz00_3096, BgL_sourcez00_3097, BgL_tmpz00_6209,
												BgL_sendz00_1768);
										}
										return BUNSPEC;
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1769;

							BgL_sstartz00_1769 = VECTOR_REF(BgL_opt1284z00_172, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								obj_t BgL_sendz00_1770;

								BgL_sendz00_1770 = VECTOR_REF(BgL_opt1284z00_172, ((long) 4));
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3098;
										long BgL_tstartz00_3099;
										obj_t BgL_sourcez00_3100;

										if (BGL_S16VECTORP(BgL_targetz00_1759))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3098 = BgL_targetz00_1759;
											}
										else
											{
												obj_t BgL_auxz00_6223;

												BgL_auxz00_6223 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2749z00zz__srfi4z00,
													BGl_string2667z00zz__srfi4z00, BgL_targetz00_1759);
												FAILURE(BgL_auxz00_6223, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_6227;

											if (INTEGERP(BgL_tstartz00_1760))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_6227 = BgL_tstartz00_1760;
												}
											else
												{
													obj_t BgL_auxz00_6230;

													BgL_auxz00_6230 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2749z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1760);
													FAILURE(BgL_auxz00_6230, BFALSE, BFALSE);
												}
											BgL_tstartz00_3099 = (long) CINT(BgL_tmpz00_6227);
										}
										if (BGL_S16VECTORP(BgL_sourcez00_1761))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3100 = BgL_sourcez00_1761;
											}
										else
											{
												obj_t BgL_auxz00_6237;

												BgL_auxz00_6237 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2749z00zz__srfi4z00,
													BGl_string2667z00zz__srfi4z00, BgL_sourcez00_1761);
												FAILURE(BgL_auxz00_6237, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_auxz00_6250;
											long BgL_tmpz00_6241;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6251;

												if (INTEGERP(BgL_sendz00_1770))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6251 = BgL_sendz00_1770;
													}
												else
													{
														obj_t BgL_auxz00_6254;

														BgL_auxz00_6254 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2749z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00, BgL_sendz00_1770);
														FAILURE(BgL_auxz00_6254, BFALSE, BFALSE);
													}
												BgL_auxz00_6250 = (long) CINT(BgL_tmpz00_6251);
											}
											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6242;

												if (INTEGERP(BgL_sstartz00_1769))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6242 = BgL_sstartz00_1769;
													}
												else
													{
														obj_t BgL_auxz00_6245;

														BgL_auxz00_6245 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2749z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1769);
														FAILURE(BgL_auxz00_6245, BFALSE, BFALSE);
													}
												BgL_tmpz00_6241 = (long) CINT(BgL_tmpz00_6242);
											}
											BGL_SU16VECTOR_COPY(BgL_targetz00_3098,
												BgL_tstartz00_3099, BgL_sourcez00_3100, BgL_tmpz00_6241,
												BgL_auxz00_6250);
										}
										return BUNSPEC;
									}
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



/* s16vector-copy! */
	BGL_EXPORTED_DEF obj_t BGl_s16vectorzd2copyz12zc0zz__srfi4z00(obj_t
		BgL_targetz00_167, long BgL_tstartz00_168, obj_t BgL_sourcez00_169,
		obj_t BgL_sstartz00_170, obj_t BgL_sendz00_171)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				long BgL_auxz00_6264;
				long BgL_tmpz00_6262;

				BgL_auxz00_6264 = (long) CINT(BgL_sendz00_171);
				BgL_tmpz00_6262 = (long) CINT(BgL_sstartz00_170);
				BGL_SU16VECTOR_COPY(BgL_targetz00_167, BgL_tstartz00_168,
					BgL_sourcez00_169, BgL_tmpz00_6262, BgL_auxz00_6264);
			}
			return BUNSPEC;
		}

	}



/* _u16vector-copy! */
	obj_t BGl__u16vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1289z00_180,
		obj_t BgL_opt1288z00_179)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				obj_t BgL_targetz00_1771;
				obj_t BgL_tstartz00_1772;
				obj_t BgL_sourcez00_1773;

				BgL_targetz00_1771 = VECTOR_REF(BgL_opt1288z00_179, ((long) 0));
				BgL_tstartz00_1772 = VECTOR_REF(BgL_opt1288z00_179, ((long) 1));
				BgL_sourcez00_1773 = VECTOR_REF(BgL_opt1288z00_179, ((long) 2));
				switch (VECTOR_LENGTH(BgL_opt1288z00_179))
					{
					case ((long) 3):

						{	/* Llib/srfi4.scm 838 */
							long BgL_sendz00_1778;

							{	/* Llib/srfi4.scm 838 */
								long BgL_res2070z00_3102;

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_xz00_3101;

									if (BGL_U16VECTORP(BgL_sourcez00_1773))
										{	/* Llib/srfi4.scm 838 */
											BgL_xz00_3101 = BgL_sourcez00_1773;
										}
									else
										{
											obj_t BgL_auxz00_6272;

											BgL_auxz00_6272 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2750z00zz__srfi4z00,
												BGl_string2669z00zz__srfi4z00, BgL_sourcez00_1773);
											FAILURE(BgL_auxz00_6272, BFALSE, BFALSE);
										}
									BgL_res2070z00_3102 = BGL_HVECTOR_LENGTH(BgL_xz00_3101);
								}
								BgL_sendz00_1778 = BgL_res2070z00_3102;
							}
							{	/* Llib/srfi4.scm 838 */

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_targetz00_3103;
									long BgL_tstartz00_3104;
									obj_t BgL_sourcez00_3105;

									if (BGL_U16VECTORP(BgL_targetz00_1771))
										{	/* Llib/srfi4.scm 838 */
											BgL_targetz00_3103 = BgL_targetz00_1771;
										}
									else
										{
											obj_t BgL_auxz00_6279;

											BgL_auxz00_6279 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2750z00zz__srfi4z00,
												BGl_string2669z00zz__srfi4z00, BgL_targetz00_1771);
											FAILURE(BgL_auxz00_6279, BFALSE, BFALSE);
										}
									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_tmpz00_6283;

										if (INTEGERP(BgL_tstartz00_1772))
											{	/* Llib/srfi4.scm 838 */
												BgL_tmpz00_6283 = BgL_tstartz00_1772;
											}
										else
											{
												obj_t BgL_auxz00_6286;

												BgL_auxz00_6286 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2750z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1772);
												FAILURE(BgL_auxz00_6286, BFALSE, BFALSE);
											}
										BgL_tstartz00_3104 = (long) CINT(BgL_tmpz00_6283);
									}
									if (BGL_U16VECTORP(BgL_sourcez00_1773))
										{	/* Llib/srfi4.scm 838 */
											BgL_sourcez00_3105 = BgL_sourcez00_1773;
										}
									else
										{
											obj_t BgL_auxz00_6293;

											BgL_auxz00_6293 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2750z00zz__srfi4z00,
												BGl_string2669z00zz__srfi4z00, BgL_sourcez00_1773);
											FAILURE(BgL_auxz00_6293, BFALSE, BFALSE);
										}
									BGL_SU16VECTOR_COPY(BgL_targetz00_3103, BgL_tstartz00_3104,
										BgL_sourcez00_3105, ((long) 0), BgL_sendz00_1778);
									return BUNSPEC;
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1779;

							BgL_sstartz00_1779 = VECTOR_REF(BgL_opt1288z00_179, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								long BgL_sendz00_1780;

								{	/* Llib/srfi4.scm 838 */
									long BgL_res2071z00_3107;

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_xz00_3106;

										if (BGL_U16VECTORP(BgL_sourcez00_1773))
											{	/* Llib/srfi4.scm 838 */
												BgL_xz00_3106 = BgL_sourcez00_1773;
											}
										else
											{
												obj_t BgL_auxz00_6301;

												BgL_auxz00_6301 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2750z00zz__srfi4z00,
													BGl_string2669z00zz__srfi4z00, BgL_sourcez00_1773);
												FAILURE(BgL_auxz00_6301, BFALSE, BFALSE);
											}
										BgL_res2071z00_3107 = BGL_HVECTOR_LENGTH(BgL_xz00_3106);
									}
									BgL_sendz00_1780 = BgL_res2071z00_3107;
								}
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3108;
										long BgL_tstartz00_3109;
										obj_t BgL_sourcez00_3110;

										if (BGL_U16VECTORP(BgL_targetz00_1771))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3108 = BgL_targetz00_1771;
											}
										else
											{
												obj_t BgL_auxz00_6308;

												BgL_auxz00_6308 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2750z00zz__srfi4z00,
													BGl_string2669z00zz__srfi4z00, BgL_targetz00_1771);
												FAILURE(BgL_auxz00_6308, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_6312;

											if (INTEGERP(BgL_tstartz00_1772))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_6312 = BgL_tstartz00_1772;
												}
											else
												{
													obj_t BgL_auxz00_6315;

													BgL_auxz00_6315 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2750z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1772);
													FAILURE(BgL_auxz00_6315, BFALSE, BFALSE);
												}
											BgL_tstartz00_3109 = (long) CINT(BgL_tmpz00_6312);
										}
										if (BGL_U16VECTORP(BgL_sourcez00_1773))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3110 = BgL_sourcez00_1773;
											}
										else
											{
												obj_t BgL_auxz00_6322;

												BgL_auxz00_6322 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2750z00zz__srfi4z00,
													BGl_string2669z00zz__srfi4z00, BgL_sourcez00_1773);
												FAILURE(BgL_auxz00_6322, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_tmpz00_6326;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6327;

												if (INTEGERP(BgL_sstartz00_1779))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6327 = BgL_sstartz00_1779;
													}
												else
													{
														obj_t BgL_auxz00_6330;

														BgL_auxz00_6330 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2750z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1779);
														FAILURE(BgL_auxz00_6330, BFALSE, BFALSE);
													}
												BgL_tmpz00_6326 = (long) CINT(BgL_tmpz00_6327);
											}
											BGL_SU16VECTOR_COPY(BgL_targetz00_3108,
												BgL_tstartz00_3109, BgL_sourcez00_3110, BgL_tmpz00_6326,
												BgL_sendz00_1780);
										}
										return BUNSPEC;
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1781;

							BgL_sstartz00_1781 = VECTOR_REF(BgL_opt1288z00_179, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								obj_t BgL_sendz00_1782;

								BgL_sendz00_1782 = VECTOR_REF(BgL_opt1288z00_179, ((long) 4));
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3111;
										long BgL_tstartz00_3112;
										obj_t BgL_sourcez00_3113;

										if (BGL_U16VECTORP(BgL_targetz00_1771))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3111 = BgL_targetz00_1771;
											}
										else
											{
												obj_t BgL_auxz00_6340;

												BgL_auxz00_6340 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2750z00zz__srfi4z00,
													BGl_string2669z00zz__srfi4z00, BgL_targetz00_1771);
												FAILURE(BgL_auxz00_6340, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_6344;

											if (INTEGERP(BgL_tstartz00_1772))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_6344 = BgL_tstartz00_1772;
												}
											else
												{
													obj_t BgL_auxz00_6347;

													BgL_auxz00_6347 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2750z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1772);
													FAILURE(BgL_auxz00_6347, BFALSE, BFALSE);
												}
											BgL_tstartz00_3112 = (long) CINT(BgL_tmpz00_6344);
										}
										if (BGL_U16VECTORP(BgL_sourcez00_1773))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3113 = BgL_sourcez00_1773;
											}
										else
											{
												obj_t BgL_auxz00_6354;

												BgL_auxz00_6354 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2750z00zz__srfi4z00,
													BGl_string2669z00zz__srfi4z00, BgL_sourcez00_1773);
												FAILURE(BgL_auxz00_6354, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_auxz00_6367;
											long BgL_tmpz00_6358;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6368;

												if (INTEGERP(BgL_sendz00_1782))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6368 = BgL_sendz00_1782;
													}
												else
													{
														obj_t BgL_auxz00_6371;

														BgL_auxz00_6371 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2750z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00, BgL_sendz00_1782);
														FAILURE(BgL_auxz00_6371, BFALSE, BFALSE);
													}
												BgL_auxz00_6367 = (long) CINT(BgL_tmpz00_6368);
											}
											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6359;

												if (INTEGERP(BgL_sstartz00_1781))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6359 = BgL_sstartz00_1781;
													}
												else
													{
														obj_t BgL_auxz00_6362;

														BgL_auxz00_6362 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2750z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1781);
														FAILURE(BgL_auxz00_6362, BFALSE, BFALSE);
													}
												BgL_tmpz00_6358 = (long) CINT(BgL_tmpz00_6359);
											}
											BGL_SU16VECTOR_COPY(BgL_targetz00_3111,
												BgL_tstartz00_3112, BgL_sourcez00_3113, BgL_tmpz00_6358,
												BgL_auxz00_6367);
										}
										return BUNSPEC;
									}
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



/* u16vector-copy! */
	BGL_EXPORTED_DEF obj_t BGl_u16vectorzd2copyz12zc0zz__srfi4z00(obj_t
		BgL_targetz00_174, long BgL_tstartz00_175, obj_t BgL_sourcez00_176,
		obj_t BgL_sstartz00_177, obj_t BgL_sendz00_178)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				long BgL_auxz00_6381;
				long BgL_tmpz00_6379;

				BgL_auxz00_6381 = (long) CINT(BgL_sendz00_178);
				BgL_tmpz00_6379 = (long) CINT(BgL_sstartz00_177);
				BGL_SU16VECTOR_COPY(BgL_targetz00_174, BgL_tstartz00_175,
					BgL_sourcez00_176, BgL_tmpz00_6379, BgL_auxz00_6381);
			}
			return BUNSPEC;
		}

	}



/* _s32vector-copy! */
	obj_t BGl__s32vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1293z00_187,
		obj_t BgL_opt1292z00_186)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				obj_t BgL_targetz00_1783;
				obj_t BgL_tstartz00_1784;
				obj_t BgL_sourcez00_1785;

				BgL_targetz00_1783 = VECTOR_REF(BgL_opt1292z00_186, ((long) 0));
				BgL_tstartz00_1784 = VECTOR_REF(BgL_opt1292z00_186, ((long) 1));
				BgL_sourcez00_1785 = VECTOR_REF(BgL_opt1292z00_186, ((long) 2));
				switch (VECTOR_LENGTH(BgL_opt1292z00_186))
					{
					case ((long) 3):

						{	/* Llib/srfi4.scm 838 */
							long BgL_sendz00_1790;

							{	/* Llib/srfi4.scm 838 */
								long BgL_res2072z00_3115;

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_xz00_3114;

									if (BGL_S32VECTORP(BgL_sourcez00_1785))
										{	/* Llib/srfi4.scm 838 */
											BgL_xz00_3114 = BgL_sourcez00_1785;
										}
									else
										{
											obj_t BgL_auxz00_6389;

											BgL_auxz00_6389 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2751z00zz__srfi4z00,
												BGl_string2671z00zz__srfi4z00, BgL_sourcez00_1785);
											FAILURE(BgL_auxz00_6389, BFALSE, BFALSE);
										}
									BgL_res2072z00_3115 = BGL_HVECTOR_LENGTH(BgL_xz00_3114);
								}
								BgL_sendz00_1790 = BgL_res2072z00_3115;
							}
							{	/* Llib/srfi4.scm 838 */

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_targetz00_3116;
									long BgL_tstartz00_3117;
									obj_t BgL_sourcez00_3118;

									if (BGL_S32VECTORP(BgL_targetz00_1783))
										{	/* Llib/srfi4.scm 838 */
											BgL_targetz00_3116 = BgL_targetz00_1783;
										}
									else
										{
											obj_t BgL_auxz00_6396;

											BgL_auxz00_6396 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2751z00zz__srfi4z00,
												BGl_string2671z00zz__srfi4z00, BgL_targetz00_1783);
											FAILURE(BgL_auxz00_6396, BFALSE, BFALSE);
										}
									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_tmpz00_6400;

										if (INTEGERP(BgL_tstartz00_1784))
											{	/* Llib/srfi4.scm 838 */
												BgL_tmpz00_6400 = BgL_tstartz00_1784;
											}
										else
											{
												obj_t BgL_auxz00_6403;

												BgL_auxz00_6403 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2751z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1784);
												FAILURE(BgL_auxz00_6403, BFALSE, BFALSE);
											}
										BgL_tstartz00_3117 = (long) CINT(BgL_tmpz00_6400);
									}
									if (BGL_S32VECTORP(BgL_sourcez00_1785))
										{	/* Llib/srfi4.scm 838 */
											BgL_sourcez00_3118 = BgL_sourcez00_1785;
										}
									else
										{
											obj_t BgL_auxz00_6410;

											BgL_auxz00_6410 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2751z00zz__srfi4z00,
												BGl_string2671z00zz__srfi4z00, BgL_sourcez00_1785);
											FAILURE(BgL_auxz00_6410, BFALSE, BFALSE);
										}
									BGL_SU32VECTOR_COPY(BgL_targetz00_3116, BgL_tstartz00_3117,
										BgL_sourcez00_3118, ((long) 0), BgL_sendz00_1790);
									return BUNSPEC;
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1791;

							BgL_sstartz00_1791 = VECTOR_REF(BgL_opt1292z00_186, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								long BgL_sendz00_1792;

								{	/* Llib/srfi4.scm 838 */
									long BgL_res2073z00_3120;

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_xz00_3119;

										if (BGL_S32VECTORP(BgL_sourcez00_1785))
											{	/* Llib/srfi4.scm 838 */
												BgL_xz00_3119 = BgL_sourcez00_1785;
											}
										else
											{
												obj_t BgL_auxz00_6418;

												BgL_auxz00_6418 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2751z00zz__srfi4z00,
													BGl_string2671z00zz__srfi4z00, BgL_sourcez00_1785);
												FAILURE(BgL_auxz00_6418, BFALSE, BFALSE);
											}
										BgL_res2073z00_3120 = BGL_HVECTOR_LENGTH(BgL_xz00_3119);
									}
									BgL_sendz00_1792 = BgL_res2073z00_3120;
								}
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3121;
										long BgL_tstartz00_3122;
										obj_t BgL_sourcez00_3123;

										if (BGL_S32VECTORP(BgL_targetz00_1783))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3121 = BgL_targetz00_1783;
											}
										else
											{
												obj_t BgL_auxz00_6425;

												BgL_auxz00_6425 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2751z00zz__srfi4z00,
													BGl_string2671z00zz__srfi4z00, BgL_targetz00_1783);
												FAILURE(BgL_auxz00_6425, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_6429;

											if (INTEGERP(BgL_tstartz00_1784))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_6429 = BgL_tstartz00_1784;
												}
											else
												{
													obj_t BgL_auxz00_6432;

													BgL_auxz00_6432 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2751z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1784);
													FAILURE(BgL_auxz00_6432, BFALSE, BFALSE);
												}
											BgL_tstartz00_3122 = (long) CINT(BgL_tmpz00_6429);
										}
										if (BGL_S32VECTORP(BgL_sourcez00_1785))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3123 = BgL_sourcez00_1785;
											}
										else
											{
												obj_t BgL_auxz00_6439;

												BgL_auxz00_6439 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2751z00zz__srfi4z00,
													BGl_string2671z00zz__srfi4z00, BgL_sourcez00_1785);
												FAILURE(BgL_auxz00_6439, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_tmpz00_6443;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6444;

												if (INTEGERP(BgL_sstartz00_1791))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6444 = BgL_sstartz00_1791;
													}
												else
													{
														obj_t BgL_auxz00_6447;

														BgL_auxz00_6447 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2751z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1791);
														FAILURE(BgL_auxz00_6447, BFALSE, BFALSE);
													}
												BgL_tmpz00_6443 = (long) CINT(BgL_tmpz00_6444);
											}
											BGL_SU32VECTOR_COPY(BgL_targetz00_3121,
												BgL_tstartz00_3122, BgL_sourcez00_3123, BgL_tmpz00_6443,
												BgL_sendz00_1792);
										}
										return BUNSPEC;
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1793;

							BgL_sstartz00_1793 = VECTOR_REF(BgL_opt1292z00_186, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								obj_t BgL_sendz00_1794;

								BgL_sendz00_1794 = VECTOR_REF(BgL_opt1292z00_186, ((long) 4));
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3124;
										long BgL_tstartz00_3125;
										obj_t BgL_sourcez00_3126;

										if (BGL_S32VECTORP(BgL_targetz00_1783))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3124 = BgL_targetz00_1783;
											}
										else
											{
												obj_t BgL_auxz00_6457;

												BgL_auxz00_6457 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2751z00zz__srfi4z00,
													BGl_string2671z00zz__srfi4z00, BgL_targetz00_1783);
												FAILURE(BgL_auxz00_6457, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_6461;

											if (INTEGERP(BgL_tstartz00_1784))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_6461 = BgL_tstartz00_1784;
												}
											else
												{
													obj_t BgL_auxz00_6464;

													BgL_auxz00_6464 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2751z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1784);
													FAILURE(BgL_auxz00_6464, BFALSE, BFALSE);
												}
											BgL_tstartz00_3125 = (long) CINT(BgL_tmpz00_6461);
										}
										if (BGL_S32VECTORP(BgL_sourcez00_1785))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3126 = BgL_sourcez00_1785;
											}
										else
											{
												obj_t BgL_auxz00_6471;

												BgL_auxz00_6471 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2751z00zz__srfi4z00,
													BGl_string2671z00zz__srfi4z00, BgL_sourcez00_1785);
												FAILURE(BgL_auxz00_6471, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_auxz00_6484;
											long BgL_tmpz00_6475;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6485;

												if (INTEGERP(BgL_sendz00_1794))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6485 = BgL_sendz00_1794;
													}
												else
													{
														obj_t BgL_auxz00_6488;

														BgL_auxz00_6488 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2751z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00, BgL_sendz00_1794);
														FAILURE(BgL_auxz00_6488, BFALSE, BFALSE);
													}
												BgL_auxz00_6484 = (long) CINT(BgL_tmpz00_6485);
											}
											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6476;

												if (INTEGERP(BgL_sstartz00_1793))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6476 = BgL_sstartz00_1793;
													}
												else
													{
														obj_t BgL_auxz00_6479;

														BgL_auxz00_6479 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2751z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1793);
														FAILURE(BgL_auxz00_6479, BFALSE, BFALSE);
													}
												BgL_tmpz00_6475 = (long) CINT(BgL_tmpz00_6476);
											}
											BGL_SU32VECTOR_COPY(BgL_targetz00_3124,
												BgL_tstartz00_3125, BgL_sourcez00_3126, BgL_tmpz00_6475,
												BgL_auxz00_6484);
										}
										return BUNSPEC;
									}
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



/* s32vector-copy! */
	BGL_EXPORTED_DEF obj_t BGl_s32vectorzd2copyz12zc0zz__srfi4z00(obj_t
		BgL_targetz00_181, long BgL_tstartz00_182, obj_t BgL_sourcez00_183,
		obj_t BgL_sstartz00_184, obj_t BgL_sendz00_185)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				long BgL_auxz00_6498;
				long BgL_tmpz00_6496;

				BgL_auxz00_6498 = (long) CINT(BgL_sendz00_185);
				BgL_tmpz00_6496 = (long) CINT(BgL_sstartz00_184);
				BGL_SU32VECTOR_COPY(BgL_targetz00_181, BgL_tstartz00_182,
					BgL_sourcez00_183, BgL_tmpz00_6496, BgL_auxz00_6498);
			}
			return BUNSPEC;
		}

	}



/* _u32vector-copy! */
	obj_t BGl__u32vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1297z00_194,
		obj_t BgL_opt1296z00_193)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				obj_t BgL_targetz00_1795;
				obj_t BgL_tstartz00_1796;
				obj_t BgL_sourcez00_1797;

				BgL_targetz00_1795 = VECTOR_REF(BgL_opt1296z00_193, ((long) 0));
				BgL_tstartz00_1796 = VECTOR_REF(BgL_opt1296z00_193, ((long) 1));
				BgL_sourcez00_1797 = VECTOR_REF(BgL_opt1296z00_193, ((long) 2));
				switch (VECTOR_LENGTH(BgL_opt1296z00_193))
					{
					case ((long) 3):

						{	/* Llib/srfi4.scm 838 */
							long BgL_sendz00_1802;

							{	/* Llib/srfi4.scm 838 */
								long BgL_res2074z00_3128;

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_xz00_3127;

									if (BGL_U32VECTORP(BgL_sourcez00_1797))
										{	/* Llib/srfi4.scm 838 */
											BgL_xz00_3127 = BgL_sourcez00_1797;
										}
									else
										{
											obj_t BgL_auxz00_6506;

											BgL_auxz00_6506 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2752z00zz__srfi4z00,
												BGl_string2673z00zz__srfi4z00, BgL_sourcez00_1797);
											FAILURE(BgL_auxz00_6506, BFALSE, BFALSE);
										}
									BgL_res2074z00_3128 = BGL_HVECTOR_LENGTH(BgL_xz00_3127);
								}
								BgL_sendz00_1802 = BgL_res2074z00_3128;
							}
							{	/* Llib/srfi4.scm 838 */

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_targetz00_3129;
									long BgL_tstartz00_3130;
									obj_t BgL_sourcez00_3131;

									if (BGL_U32VECTORP(BgL_targetz00_1795))
										{	/* Llib/srfi4.scm 838 */
											BgL_targetz00_3129 = BgL_targetz00_1795;
										}
									else
										{
											obj_t BgL_auxz00_6513;

											BgL_auxz00_6513 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2752z00zz__srfi4z00,
												BGl_string2673z00zz__srfi4z00, BgL_targetz00_1795);
											FAILURE(BgL_auxz00_6513, BFALSE, BFALSE);
										}
									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_tmpz00_6517;

										if (INTEGERP(BgL_tstartz00_1796))
											{	/* Llib/srfi4.scm 838 */
												BgL_tmpz00_6517 = BgL_tstartz00_1796;
											}
										else
											{
												obj_t BgL_auxz00_6520;

												BgL_auxz00_6520 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2752z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1796);
												FAILURE(BgL_auxz00_6520, BFALSE, BFALSE);
											}
										BgL_tstartz00_3130 = (long) CINT(BgL_tmpz00_6517);
									}
									if (BGL_U32VECTORP(BgL_sourcez00_1797))
										{	/* Llib/srfi4.scm 838 */
											BgL_sourcez00_3131 = BgL_sourcez00_1797;
										}
									else
										{
											obj_t BgL_auxz00_6527;

											BgL_auxz00_6527 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2752z00zz__srfi4z00,
												BGl_string2673z00zz__srfi4z00, BgL_sourcez00_1797);
											FAILURE(BgL_auxz00_6527, BFALSE, BFALSE);
										}
									BGL_SU32VECTOR_COPY(BgL_targetz00_3129, BgL_tstartz00_3130,
										BgL_sourcez00_3131, ((long) 0), BgL_sendz00_1802);
									return BUNSPEC;
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1803;

							BgL_sstartz00_1803 = VECTOR_REF(BgL_opt1296z00_193, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								long BgL_sendz00_1804;

								{	/* Llib/srfi4.scm 838 */
									long BgL_res2075z00_3133;

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_xz00_3132;

										if (BGL_U32VECTORP(BgL_sourcez00_1797))
											{	/* Llib/srfi4.scm 838 */
												BgL_xz00_3132 = BgL_sourcez00_1797;
											}
										else
											{
												obj_t BgL_auxz00_6535;

												BgL_auxz00_6535 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2752z00zz__srfi4z00,
													BGl_string2673z00zz__srfi4z00, BgL_sourcez00_1797);
												FAILURE(BgL_auxz00_6535, BFALSE, BFALSE);
											}
										BgL_res2075z00_3133 = BGL_HVECTOR_LENGTH(BgL_xz00_3132);
									}
									BgL_sendz00_1804 = BgL_res2075z00_3133;
								}
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3134;
										long BgL_tstartz00_3135;
										obj_t BgL_sourcez00_3136;

										if (BGL_U32VECTORP(BgL_targetz00_1795))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3134 = BgL_targetz00_1795;
											}
										else
											{
												obj_t BgL_auxz00_6542;

												BgL_auxz00_6542 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2752z00zz__srfi4z00,
													BGl_string2673z00zz__srfi4z00, BgL_targetz00_1795);
												FAILURE(BgL_auxz00_6542, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_6546;

											if (INTEGERP(BgL_tstartz00_1796))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_6546 = BgL_tstartz00_1796;
												}
											else
												{
													obj_t BgL_auxz00_6549;

													BgL_auxz00_6549 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2752z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1796);
													FAILURE(BgL_auxz00_6549, BFALSE, BFALSE);
												}
											BgL_tstartz00_3135 = (long) CINT(BgL_tmpz00_6546);
										}
										if (BGL_U32VECTORP(BgL_sourcez00_1797))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3136 = BgL_sourcez00_1797;
											}
										else
											{
												obj_t BgL_auxz00_6556;

												BgL_auxz00_6556 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2752z00zz__srfi4z00,
													BGl_string2673z00zz__srfi4z00, BgL_sourcez00_1797);
												FAILURE(BgL_auxz00_6556, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_tmpz00_6560;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6561;

												if (INTEGERP(BgL_sstartz00_1803))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6561 = BgL_sstartz00_1803;
													}
												else
													{
														obj_t BgL_auxz00_6564;

														BgL_auxz00_6564 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2752z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1803);
														FAILURE(BgL_auxz00_6564, BFALSE, BFALSE);
													}
												BgL_tmpz00_6560 = (long) CINT(BgL_tmpz00_6561);
											}
											BGL_SU32VECTOR_COPY(BgL_targetz00_3134,
												BgL_tstartz00_3135, BgL_sourcez00_3136, BgL_tmpz00_6560,
												BgL_sendz00_1804);
										}
										return BUNSPEC;
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1805;

							BgL_sstartz00_1805 = VECTOR_REF(BgL_opt1296z00_193, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								obj_t BgL_sendz00_1806;

								BgL_sendz00_1806 = VECTOR_REF(BgL_opt1296z00_193, ((long) 4));
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3137;
										long BgL_tstartz00_3138;
										obj_t BgL_sourcez00_3139;

										if (BGL_U32VECTORP(BgL_targetz00_1795))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3137 = BgL_targetz00_1795;
											}
										else
											{
												obj_t BgL_auxz00_6574;

												BgL_auxz00_6574 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2752z00zz__srfi4z00,
													BGl_string2673z00zz__srfi4z00, BgL_targetz00_1795);
												FAILURE(BgL_auxz00_6574, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_6578;

											if (INTEGERP(BgL_tstartz00_1796))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_6578 = BgL_tstartz00_1796;
												}
											else
												{
													obj_t BgL_auxz00_6581;

													BgL_auxz00_6581 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2752z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1796);
													FAILURE(BgL_auxz00_6581, BFALSE, BFALSE);
												}
											BgL_tstartz00_3138 = (long) CINT(BgL_tmpz00_6578);
										}
										if (BGL_U32VECTORP(BgL_sourcez00_1797))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3139 = BgL_sourcez00_1797;
											}
										else
											{
												obj_t BgL_auxz00_6588;

												BgL_auxz00_6588 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2752z00zz__srfi4z00,
													BGl_string2673z00zz__srfi4z00, BgL_sourcez00_1797);
												FAILURE(BgL_auxz00_6588, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_auxz00_6601;
											long BgL_tmpz00_6592;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6602;

												if (INTEGERP(BgL_sendz00_1806))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6602 = BgL_sendz00_1806;
													}
												else
													{
														obj_t BgL_auxz00_6605;

														BgL_auxz00_6605 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2752z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00, BgL_sendz00_1806);
														FAILURE(BgL_auxz00_6605, BFALSE, BFALSE);
													}
												BgL_auxz00_6601 = (long) CINT(BgL_tmpz00_6602);
											}
											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6593;

												if (INTEGERP(BgL_sstartz00_1805))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6593 = BgL_sstartz00_1805;
													}
												else
													{
														obj_t BgL_auxz00_6596;

														BgL_auxz00_6596 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2752z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1805);
														FAILURE(BgL_auxz00_6596, BFALSE, BFALSE);
													}
												BgL_tmpz00_6592 = (long) CINT(BgL_tmpz00_6593);
											}
											BGL_SU32VECTOR_COPY(BgL_targetz00_3137,
												BgL_tstartz00_3138, BgL_sourcez00_3139, BgL_tmpz00_6592,
												BgL_auxz00_6601);
										}
										return BUNSPEC;
									}
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



/* u32vector-copy! */
	BGL_EXPORTED_DEF obj_t BGl_u32vectorzd2copyz12zc0zz__srfi4z00(obj_t
		BgL_targetz00_188, long BgL_tstartz00_189, obj_t BgL_sourcez00_190,
		obj_t BgL_sstartz00_191, obj_t BgL_sendz00_192)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				long BgL_auxz00_6615;
				long BgL_tmpz00_6613;

				BgL_auxz00_6615 = (long) CINT(BgL_sendz00_192);
				BgL_tmpz00_6613 = (long) CINT(BgL_sstartz00_191);
				BGL_SU32VECTOR_COPY(BgL_targetz00_188, BgL_tstartz00_189,
					BgL_sourcez00_190, BgL_tmpz00_6613, BgL_auxz00_6615);
			}
			return BUNSPEC;
		}

	}



/* _s64vector-copy! */
	obj_t BGl__s64vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1301z00_201,
		obj_t BgL_opt1300z00_200)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				obj_t BgL_targetz00_1807;
				obj_t BgL_tstartz00_1808;
				obj_t BgL_sourcez00_1809;

				BgL_targetz00_1807 = VECTOR_REF(BgL_opt1300z00_200, ((long) 0));
				BgL_tstartz00_1808 = VECTOR_REF(BgL_opt1300z00_200, ((long) 1));
				BgL_sourcez00_1809 = VECTOR_REF(BgL_opt1300z00_200, ((long) 2));
				switch (VECTOR_LENGTH(BgL_opt1300z00_200))
					{
					case ((long) 3):

						{	/* Llib/srfi4.scm 838 */
							long BgL_sendz00_1814;

							{	/* Llib/srfi4.scm 838 */
								long BgL_res2076z00_3141;

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_xz00_3140;

									if (BGL_S64VECTORP(BgL_sourcez00_1809))
										{	/* Llib/srfi4.scm 838 */
											BgL_xz00_3140 = BgL_sourcez00_1809;
										}
									else
										{
											obj_t BgL_auxz00_6623;

											BgL_auxz00_6623 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2753z00zz__srfi4z00,
												BGl_string2675z00zz__srfi4z00, BgL_sourcez00_1809);
											FAILURE(BgL_auxz00_6623, BFALSE, BFALSE);
										}
									BgL_res2076z00_3141 = BGL_HVECTOR_LENGTH(BgL_xz00_3140);
								}
								BgL_sendz00_1814 = BgL_res2076z00_3141;
							}
							{	/* Llib/srfi4.scm 838 */

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_targetz00_3142;
									long BgL_tstartz00_3143;
									obj_t BgL_sourcez00_3144;

									if (BGL_S64VECTORP(BgL_targetz00_1807))
										{	/* Llib/srfi4.scm 838 */
											BgL_targetz00_3142 = BgL_targetz00_1807;
										}
									else
										{
											obj_t BgL_auxz00_6630;

											BgL_auxz00_6630 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2753z00zz__srfi4z00,
												BGl_string2675z00zz__srfi4z00, BgL_targetz00_1807);
											FAILURE(BgL_auxz00_6630, BFALSE, BFALSE);
										}
									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_tmpz00_6634;

										if (INTEGERP(BgL_tstartz00_1808))
											{	/* Llib/srfi4.scm 838 */
												BgL_tmpz00_6634 = BgL_tstartz00_1808;
											}
										else
											{
												obj_t BgL_auxz00_6637;

												BgL_auxz00_6637 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2753z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1808);
												FAILURE(BgL_auxz00_6637, BFALSE, BFALSE);
											}
										BgL_tstartz00_3143 = (long) CINT(BgL_tmpz00_6634);
									}
									if (BGL_S64VECTORP(BgL_sourcez00_1809))
										{	/* Llib/srfi4.scm 838 */
											BgL_sourcez00_3144 = BgL_sourcez00_1809;
										}
									else
										{
											obj_t BgL_auxz00_6644;

											BgL_auxz00_6644 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2753z00zz__srfi4z00,
												BGl_string2675z00zz__srfi4z00, BgL_sourcez00_1809);
											FAILURE(BgL_auxz00_6644, BFALSE, BFALSE);
										}
									BGL_SU64VECTOR_COPY(BgL_targetz00_3142, BgL_tstartz00_3143,
										BgL_sourcez00_3144, ((long) 0), BgL_sendz00_1814);
									return BUNSPEC;
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1815;

							BgL_sstartz00_1815 = VECTOR_REF(BgL_opt1300z00_200, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								long BgL_sendz00_1816;

								{	/* Llib/srfi4.scm 838 */
									long BgL_res2077z00_3146;

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_xz00_3145;

										if (BGL_S64VECTORP(BgL_sourcez00_1809))
											{	/* Llib/srfi4.scm 838 */
												BgL_xz00_3145 = BgL_sourcez00_1809;
											}
										else
											{
												obj_t BgL_auxz00_6652;

												BgL_auxz00_6652 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2753z00zz__srfi4z00,
													BGl_string2675z00zz__srfi4z00, BgL_sourcez00_1809);
												FAILURE(BgL_auxz00_6652, BFALSE, BFALSE);
											}
										BgL_res2077z00_3146 = BGL_HVECTOR_LENGTH(BgL_xz00_3145);
									}
									BgL_sendz00_1816 = BgL_res2077z00_3146;
								}
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3147;
										long BgL_tstartz00_3148;
										obj_t BgL_sourcez00_3149;

										if (BGL_S64VECTORP(BgL_targetz00_1807))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3147 = BgL_targetz00_1807;
											}
										else
											{
												obj_t BgL_auxz00_6659;

												BgL_auxz00_6659 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2753z00zz__srfi4z00,
													BGl_string2675z00zz__srfi4z00, BgL_targetz00_1807);
												FAILURE(BgL_auxz00_6659, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_6663;

											if (INTEGERP(BgL_tstartz00_1808))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_6663 = BgL_tstartz00_1808;
												}
											else
												{
													obj_t BgL_auxz00_6666;

													BgL_auxz00_6666 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2753z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1808);
													FAILURE(BgL_auxz00_6666, BFALSE, BFALSE);
												}
											BgL_tstartz00_3148 = (long) CINT(BgL_tmpz00_6663);
										}
										if (BGL_S64VECTORP(BgL_sourcez00_1809))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3149 = BgL_sourcez00_1809;
											}
										else
											{
												obj_t BgL_auxz00_6673;

												BgL_auxz00_6673 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2753z00zz__srfi4z00,
													BGl_string2675z00zz__srfi4z00, BgL_sourcez00_1809);
												FAILURE(BgL_auxz00_6673, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_tmpz00_6677;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6678;

												if (INTEGERP(BgL_sstartz00_1815))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6678 = BgL_sstartz00_1815;
													}
												else
													{
														obj_t BgL_auxz00_6681;

														BgL_auxz00_6681 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2753z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1815);
														FAILURE(BgL_auxz00_6681, BFALSE, BFALSE);
													}
												BgL_tmpz00_6677 = (long) CINT(BgL_tmpz00_6678);
											}
											BGL_SU64VECTOR_COPY(BgL_targetz00_3147,
												BgL_tstartz00_3148, BgL_sourcez00_3149, BgL_tmpz00_6677,
												BgL_sendz00_1816);
										}
										return BUNSPEC;
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1817;

							BgL_sstartz00_1817 = VECTOR_REF(BgL_opt1300z00_200, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								obj_t BgL_sendz00_1818;

								BgL_sendz00_1818 = VECTOR_REF(BgL_opt1300z00_200, ((long) 4));
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3150;
										long BgL_tstartz00_3151;
										obj_t BgL_sourcez00_3152;

										if (BGL_S64VECTORP(BgL_targetz00_1807))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3150 = BgL_targetz00_1807;
											}
										else
											{
												obj_t BgL_auxz00_6691;

												BgL_auxz00_6691 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2753z00zz__srfi4z00,
													BGl_string2675z00zz__srfi4z00, BgL_targetz00_1807);
												FAILURE(BgL_auxz00_6691, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_6695;

											if (INTEGERP(BgL_tstartz00_1808))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_6695 = BgL_tstartz00_1808;
												}
											else
												{
													obj_t BgL_auxz00_6698;

													BgL_auxz00_6698 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2753z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1808);
													FAILURE(BgL_auxz00_6698, BFALSE, BFALSE);
												}
											BgL_tstartz00_3151 = (long) CINT(BgL_tmpz00_6695);
										}
										if (BGL_S64VECTORP(BgL_sourcez00_1809))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3152 = BgL_sourcez00_1809;
											}
										else
											{
												obj_t BgL_auxz00_6705;

												BgL_auxz00_6705 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2753z00zz__srfi4z00,
													BGl_string2675z00zz__srfi4z00, BgL_sourcez00_1809);
												FAILURE(BgL_auxz00_6705, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_auxz00_6718;
											long BgL_tmpz00_6709;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6719;

												if (INTEGERP(BgL_sendz00_1818))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6719 = BgL_sendz00_1818;
													}
												else
													{
														obj_t BgL_auxz00_6722;

														BgL_auxz00_6722 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2753z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00, BgL_sendz00_1818);
														FAILURE(BgL_auxz00_6722, BFALSE, BFALSE);
													}
												BgL_auxz00_6718 = (long) CINT(BgL_tmpz00_6719);
											}
											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6710;

												if (INTEGERP(BgL_sstartz00_1817))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6710 = BgL_sstartz00_1817;
													}
												else
													{
														obj_t BgL_auxz00_6713;

														BgL_auxz00_6713 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2753z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1817);
														FAILURE(BgL_auxz00_6713, BFALSE, BFALSE);
													}
												BgL_tmpz00_6709 = (long) CINT(BgL_tmpz00_6710);
											}
											BGL_SU64VECTOR_COPY(BgL_targetz00_3150,
												BgL_tstartz00_3151, BgL_sourcez00_3152, BgL_tmpz00_6709,
												BgL_auxz00_6718);
										}
										return BUNSPEC;
									}
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



/* s64vector-copy! */
	BGL_EXPORTED_DEF obj_t BGl_s64vectorzd2copyz12zc0zz__srfi4z00(obj_t
		BgL_targetz00_195, long BgL_tstartz00_196, obj_t BgL_sourcez00_197,
		obj_t BgL_sstartz00_198, obj_t BgL_sendz00_199)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				long BgL_auxz00_6732;
				long BgL_tmpz00_6730;

				BgL_auxz00_6732 = (long) CINT(BgL_sendz00_199);
				BgL_tmpz00_6730 = (long) CINT(BgL_sstartz00_198);
				BGL_SU64VECTOR_COPY(BgL_targetz00_195, BgL_tstartz00_196,
					BgL_sourcez00_197, BgL_tmpz00_6730, BgL_auxz00_6732);
			}
			return BUNSPEC;
		}

	}



/* _u64vector-copy! */
	obj_t BGl__u64vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1305z00_208,
		obj_t BgL_opt1304z00_207)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				obj_t BgL_targetz00_1819;
				obj_t BgL_tstartz00_1820;
				obj_t BgL_sourcez00_1821;

				BgL_targetz00_1819 = VECTOR_REF(BgL_opt1304z00_207, ((long) 0));
				BgL_tstartz00_1820 = VECTOR_REF(BgL_opt1304z00_207, ((long) 1));
				BgL_sourcez00_1821 = VECTOR_REF(BgL_opt1304z00_207, ((long) 2));
				switch (VECTOR_LENGTH(BgL_opt1304z00_207))
					{
					case ((long) 3):

						{	/* Llib/srfi4.scm 838 */
							long BgL_sendz00_1826;

							{	/* Llib/srfi4.scm 838 */
								long BgL_res2078z00_3154;

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_xz00_3153;

									if (BGL_U64VECTORP(BgL_sourcez00_1821))
										{	/* Llib/srfi4.scm 838 */
											BgL_xz00_3153 = BgL_sourcez00_1821;
										}
									else
										{
											obj_t BgL_auxz00_6740;

											BgL_auxz00_6740 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2754z00zz__srfi4z00,
												BGl_string2677z00zz__srfi4z00, BgL_sourcez00_1821);
											FAILURE(BgL_auxz00_6740, BFALSE, BFALSE);
										}
									BgL_res2078z00_3154 = BGL_HVECTOR_LENGTH(BgL_xz00_3153);
								}
								BgL_sendz00_1826 = BgL_res2078z00_3154;
							}
							{	/* Llib/srfi4.scm 838 */

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_targetz00_3155;
									long BgL_tstartz00_3156;
									obj_t BgL_sourcez00_3157;

									if (BGL_U64VECTORP(BgL_targetz00_1819))
										{	/* Llib/srfi4.scm 838 */
											BgL_targetz00_3155 = BgL_targetz00_1819;
										}
									else
										{
											obj_t BgL_auxz00_6747;

											BgL_auxz00_6747 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2754z00zz__srfi4z00,
												BGl_string2677z00zz__srfi4z00, BgL_targetz00_1819);
											FAILURE(BgL_auxz00_6747, BFALSE, BFALSE);
										}
									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_tmpz00_6751;

										if (INTEGERP(BgL_tstartz00_1820))
											{	/* Llib/srfi4.scm 838 */
												BgL_tmpz00_6751 = BgL_tstartz00_1820;
											}
										else
											{
												obj_t BgL_auxz00_6754;

												BgL_auxz00_6754 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2754z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1820);
												FAILURE(BgL_auxz00_6754, BFALSE, BFALSE);
											}
										BgL_tstartz00_3156 = (long) CINT(BgL_tmpz00_6751);
									}
									if (BGL_U64VECTORP(BgL_sourcez00_1821))
										{	/* Llib/srfi4.scm 838 */
											BgL_sourcez00_3157 = BgL_sourcez00_1821;
										}
									else
										{
											obj_t BgL_auxz00_6761;

											BgL_auxz00_6761 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2754z00zz__srfi4z00,
												BGl_string2677z00zz__srfi4z00, BgL_sourcez00_1821);
											FAILURE(BgL_auxz00_6761, BFALSE, BFALSE);
										}
									BGL_SU64VECTOR_COPY(BgL_targetz00_3155, BgL_tstartz00_3156,
										BgL_sourcez00_3157, ((long) 0), BgL_sendz00_1826);
									return BUNSPEC;
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1827;

							BgL_sstartz00_1827 = VECTOR_REF(BgL_opt1304z00_207, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								long BgL_sendz00_1828;

								{	/* Llib/srfi4.scm 838 */
									long BgL_res2079z00_3159;

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_xz00_3158;

										if (BGL_U64VECTORP(BgL_sourcez00_1821))
											{	/* Llib/srfi4.scm 838 */
												BgL_xz00_3158 = BgL_sourcez00_1821;
											}
										else
											{
												obj_t BgL_auxz00_6769;

												BgL_auxz00_6769 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2754z00zz__srfi4z00,
													BGl_string2677z00zz__srfi4z00, BgL_sourcez00_1821);
												FAILURE(BgL_auxz00_6769, BFALSE, BFALSE);
											}
										BgL_res2079z00_3159 = BGL_HVECTOR_LENGTH(BgL_xz00_3158);
									}
									BgL_sendz00_1828 = BgL_res2079z00_3159;
								}
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3160;
										long BgL_tstartz00_3161;
										obj_t BgL_sourcez00_3162;

										if (BGL_U64VECTORP(BgL_targetz00_1819))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3160 = BgL_targetz00_1819;
											}
										else
											{
												obj_t BgL_auxz00_6776;

												BgL_auxz00_6776 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2754z00zz__srfi4z00,
													BGl_string2677z00zz__srfi4z00, BgL_targetz00_1819);
												FAILURE(BgL_auxz00_6776, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_6780;

											if (INTEGERP(BgL_tstartz00_1820))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_6780 = BgL_tstartz00_1820;
												}
											else
												{
													obj_t BgL_auxz00_6783;

													BgL_auxz00_6783 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2754z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1820);
													FAILURE(BgL_auxz00_6783, BFALSE, BFALSE);
												}
											BgL_tstartz00_3161 = (long) CINT(BgL_tmpz00_6780);
										}
										if (BGL_U64VECTORP(BgL_sourcez00_1821))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3162 = BgL_sourcez00_1821;
											}
										else
											{
												obj_t BgL_auxz00_6790;

												BgL_auxz00_6790 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2754z00zz__srfi4z00,
													BGl_string2677z00zz__srfi4z00, BgL_sourcez00_1821);
												FAILURE(BgL_auxz00_6790, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_tmpz00_6794;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6795;

												if (INTEGERP(BgL_sstartz00_1827))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6795 = BgL_sstartz00_1827;
													}
												else
													{
														obj_t BgL_auxz00_6798;

														BgL_auxz00_6798 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2754z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1827);
														FAILURE(BgL_auxz00_6798, BFALSE, BFALSE);
													}
												BgL_tmpz00_6794 = (long) CINT(BgL_tmpz00_6795);
											}
											BGL_SU64VECTOR_COPY(BgL_targetz00_3160,
												BgL_tstartz00_3161, BgL_sourcez00_3162, BgL_tmpz00_6794,
												BgL_sendz00_1828);
										}
										return BUNSPEC;
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1829;

							BgL_sstartz00_1829 = VECTOR_REF(BgL_opt1304z00_207, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								obj_t BgL_sendz00_1830;

								BgL_sendz00_1830 = VECTOR_REF(BgL_opt1304z00_207, ((long) 4));
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3163;
										long BgL_tstartz00_3164;
										obj_t BgL_sourcez00_3165;

										if (BGL_U64VECTORP(BgL_targetz00_1819))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3163 = BgL_targetz00_1819;
											}
										else
											{
												obj_t BgL_auxz00_6808;

												BgL_auxz00_6808 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2754z00zz__srfi4z00,
													BGl_string2677z00zz__srfi4z00, BgL_targetz00_1819);
												FAILURE(BgL_auxz00_6808, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_6812;

											if (INTEGERP(BgL_tstartz00_1820))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_6812 = BgL_tstartz00_1820;
												}
											else
												{
													obj_t BgL_auxz00_6815;

													BgL_auxz00_6815 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2754z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1820);
													FAILURE(BgL_auxz00_6815, BFALSE, BFALSE);
												}
											BgL_tstartz00_3164 = (long) CINT(BgL_tmpz00_6812);
										}
										if (BGL_U64VECTORP(BgL_sourcez00_1821))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3165 = BgL_sourcez00_1821;
											}
										else
											{
												obj_t BgL_auxz00_6822;

												BgL_auxz00_6822 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2754z00zz__srfi4z00,
													BGl_string2677z00zz__srfi4z00, BgL_sourcez00_1821);
												FAILURE(BgL_auxz00_6822, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_auxz00_6835;
											long BgL_tmpz00_6826;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6836;

												if (INTEGERP(BgL_sendz00_1830))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6836 = BgL_sendz00_1830;
													}
												else
													{
														obj_t BgL_auxz00_6839;

														BgL_auxz00_6839 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2754z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00, BgL_sendz00_1830);
														FAILURE(BgL_auxz00_6839, BFALSE, BFALSE);
													}
												BgL_auxz00_6835 = (long) CINT(BgL_tmpz00_6836);
											}
											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6827;

												if (INTEGERP(BgL_sstartz00_1829))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6827 = BgL_sstartz00_1829;
													}
												else
													{
														obj_t BgL_auxz00_6830;

														BgL_auxz00_6830 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2754z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1829);
														FAILURE(BgL_auxz00_6830, BFALSE, BFALSE);
													}
												BgL_tmpz00_6826 = (long) CINT(BgL_tmpz00_6827);
											}
											BGL_SU64VECTOR_COPY(BgL_targetz00_3163,
												BgL_tstartz00_3164, BgL_sourcez00_3165, BgL_tmpz00_6826,
												BgL_auxz00_6835);
										}
										return BUNSPEC;
									}
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



/* u64vector-copy! */
	BGL_EXPORTED_DEF obj_t BGl_u64vectorzd2copyz12zc0zz__srfi4z00(obj_t
		BgL_targetz00_202, long BgL_tstartz00_203, obj_t BgL_sourcez00_204,
		obj_t BgL_sstartz00_205, obj_t BgL_sendz00_206)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				long BgL_auxz00_6849;
				long BgL_tmpz00_6847;

				BgL_auxz00_6849 = (long) CINT(BgL_sendz00_206);
				BgL_tmpz00_6847 = (long) CINT(BgL_sstartz00_205);
				BGL_SU64VECTOR_COPY(BgL_targetz00_202, BgL_tstartz00_203,
					BgL_sourcez00_204, BgL_tmpz00_6847, BgL_auxz00_6849);
			}
			return BUNSPEC;
		}

	}



/* _f32vector-copy! */
	obj_t BGl__f32vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1309z00_215,
		obj_t BgL_opt1308z00_214)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				obj_t BgL_targetz00_1831;
				obj_t BgL_tstartz00_1832;
				obj_t BgL_sourcez00_1833;

				BgL_targetz00_1831 = VECTOR_REF(BgL_opt1308z00_214, ((long) 0));
				BgL_tstartz00_1832 = VECTOR_REF(BgL_opt1308z00_214, ((long) 1));
				BgL_sourcez00_1833 = VECTOR_REF(BgL_opt1308z00_214, ((long) 2));
				switch (VECTOR_LENGTH(BgL_opt1308z00_214))
					{
					case ((long) 3):

						{	/* Llib/srfi4.scm 838 */
							long BgL_sendz00_1838;

							{	/* Llib/srfi4.scm 838 */
								long BgL_res2080z00_3167;

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_xz00_3166;

									if (BGL_F32VECTORP(BgL_sourcez00_1833))
										{	/* Llib/srfi4.scm 838 */
											BgL_xz00_3166 = BgL_sourcez00_1833;
										}
									else
										{
											obj_t BgL_auxz00_6857;

											BgL_auxz00_6857 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2755z00zz__srfi4z00,
												BGl_string2679z00zz__srfi4z00, BgL_sourcez00_1833);
											FAILURE(BgL_auxz00_6857, BFALSE, BFALSE);
										}
									BgL_res2080z00_3167 = BGL_HVECTOR_LENGTH(BgL_xz00_3166);
								}
								BgL_sendz00_1838 = BgL_res2080z00_3167;
							}
							{	/* Llib/srfi4.scm 838 */

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_targetz00_3168;
									long BgL_tstartz00_3169;
									obj_t BgL_sourcez00_3170;

									if (BGL_F32VECTORP(BgL_targetz00_1831))
										{	/* Llib/srfi4.scm 838 */
											BgL_targetz00_3168 = BgL_targetz00_1831;
										}
									else
										{
											obj_t BgL_auxz00_6864;

											BgL_auxz00_6864 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2755z00zz__srfi4z00,
												BGl_string2679z00zz__srfi4z00, BgL_targetz00_1831);
											FAILURE(BgL_auxz00_6864, BFALSE, BFALSE);
										}
									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_tmpz00_6868;

										if (INTEGERP(BgL_tstartz00_1832))
											{	/* Llib/srfi4.scm 838 */
												BgL_tmpz00_6868 = BgL_tstartz00_1832;
											}
										else
											{
												obj_t BgL_auxz00_6871;

												BgL_auxz00_6871 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2755z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1832);
												FAILURE(BgL_auxz00_6871, BFALSE, BFALSE);
											}
										BgL_tstartz00_3169 = (long) CINT(BgL_tmpz00_6868);
									}
									if (BGL_F32VECTORP(BgL_sourcez00_1833))
										{	/* Llib/srfi4.scm 838 */
											BgL_sourcez00_3170 = BgL_sourcez00_1833;
										}
									else
										{
											obj_t BgL_auxz00_6878;

											BgL_auxz00_6878 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2755z00zz__srfi4z00,
												BGl_string2679z00zz__srfi4z00, BgL_sourcez00_1833);
											FAILURE(BgL_auxz00_6878, BFALSE, BFALSE);
										}
									BGL_F32VECTOR_COPY(BgL_targetz00_3168, BgL_tstartz00_3169,
										BgL_sourcez00_3170, ((long) 0), BgL_sendz00_1838);
									return BUNSPEC;
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1839;

							BgL_sstartz00_1839 = VECTOR_REF(BgL_opt1308z00_214, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								long BgL_sendz00_1840;

								{	/* Llib/srfi4.scm 838 */
									long BgL_res2081z00_3172;

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_xz00_3171;

										if (BGL_F32VECTORP(BgL_sourcez00_1833))
											{	/* Llib/srfi4.scm 838 */
												BgL_xz00_3171 = BgL_sourcez00_1833;
											}
										else
											{
												obj_t BgL_auxz00_6886;

												BgL_auxz00_6886 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2755z00zz__srfi4z00,
													BGl_string2679z00zz__srfi4z00, BgL_sourcez00_1833);
												FAILURE(BgL_auxz00_6886, BFALSE, BFALSE);
											}
										BgL_res2081z00_3172 = BGL_HVECTOR_LENGTH(BgL_xz00_3171);
									}
									BgL_sendz00_1840 = BgL_res2081z00_3172;
								}
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3173;
										long BgL_tstartz00_3174;
										obj_t BgL_sourcez00_3175;

										if (BGL_F32VECTORP(BgL_targetz00_1831))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3173 = BgL_targetz00_1831;
											}
										else
											{
												obj_t BgL_auxz00_6893;

												BgL_auxz00_6893 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2755z00zz__srfi4z00,
													BGl_string2679z00zz__srfi4z00, BgL_targetz00_1831);
												FAILURE(BgL_auxz00_6893, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_6897;

											if (INTEGERP(BgL_tstartz00_1832))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_6897 = BgL_tstartz00_1832;
												}
											else
												{
													obj_t BgL_auxz00_6900;

													BgL_auxz00_6900 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2755z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1832);
													FAILURE(BgL_auxz00_6900, BFALSE, BFALSE);
												}
											BgL_tstartz00_3174 = (long) CINT(BgL_tmpz00_6897);
										}
										if (BGL_F32VECTORP(BgL_sourcez00_1833))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3175 = BgL_sourcez00_1833;
											}
										else
											{
												obj_t BgL_auxz00_6907;

												BgL_auxz00_6907 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2755z00zz__srfi4z00,
													BGl_string2679z00zz__srfi4z00, BgL_sourcez00_1833);
												FAILURE(BgL_auxz00_6907, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_tmpz00_6911;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6912;

												if (INTEGERP(BgL_sstartz00_1839))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6912 = BgL_sstartz00_1839;
													}
												else
													{
														obj_t BgL_auxz00_6915;

														BgL_auxz00_6915 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2755z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1839);
														FAILURE(BgL_auxz00_6915, BFALSE, BFALSE);
													}
												BgL_tmpz00_6911 = (long) CINT(BgL_tmpz00_6912);
											}
											BGL_F32VECTOR_COPY(BgL_targetz00_3173, BgL_tstartz00_3174,
												BgL_sourcez00_3175, BgL_tmpz00_6911, BgL_sendz00_1840);
										}
										return BUNSPEC;
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1841;

							BgL_sstartz00_1841 = VECTOR_REF(BgL_opt1308z00_214, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								obj_t BgL_sendz00_1842;

								BgL_sendz00_1842 = VECTOR_REF(BgL_opt1308z00_214, ((long) 4));
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3176;
										long BgL_tstartz00_3177;
										obj_t BgL_sourcez00_3178;

										if (BGL_F32VECTORP(BgL_targetz00_1831))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3176 = BgL_targetz00_1831;
											}
										else
											{
												obj_t BgL_auxz00_6925;

												BgL_auxz00_6925 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2755z00zz__srfi4z00,
													BGl_string2679z00zz__srfi4z00, BgL_targetz00_1831);
												FAILURE(BgL_auxz00_6925, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_6929;

											if (INTEGERP(BgL_tstartz00_1832))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_6929 = BgL_tstartz00_1832;
												}
											else
												{
													obj_t BgL_auxz00_6932;

													BgL_auxz00_6932 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2755z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1832);
													FAILURE(BgL_auxz00_6932, BFALSE, BFALSE);
												}
											BgL_tstartz00_3177 = (long) CINT(BgL_tmpz00_6929);
										}
										if (BGL_F32VECTORP(BgL_sourcez00_1833))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3178 = BgL_sourcez00_1833;
											}
										else
											{
												obj_t BgL_auxz00_6939;

												BgL_auxz00_6939 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2755z00zz__srfi4z00,
													BGl_string2679z00zz__srfi4z00, BgL_sourcez00_1833);
												FAILURE(BgL_auxz00_6939, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_auxz00_6952;
											long BgL_tmpz00_6943;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6953;

												if (INTEGERP(BgL_sendz00_1842))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6953 = BgL_sendz00_1842;
													}
												else
													{
														obj_t BgL_auxz00_6956;

														BgL_auxz00_6956 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2755z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00, BgL_sendz00_1842);
														FAILURE(BgL_auxz00_6956, BFALSE, BFALSE);
													}
												BgL_auxz00_6952 = (long) CINT(BgL_tmpz00_6953);
											}
											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_6944;

												if (INTEGERP(BgL_sstartz00_1841))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_6944 = BgL_sstartz00_1841;
													}
												else
													{
														obj_t BgL_auxz00_6947;

														BgL_auxz00_6947 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2755z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1841);
														FAILURE(BgL_auxz00_6947, BFALSE, BFALSE);
													}
												BgL_tmpz00_6943 = (long) CINT(BgL_tmpz00_6944);
											}
											BGL_F32VECTOR_COPY(BgL_targetz00_3176, BgL_tstartz00_3177,
												BgL_sourcez00_3178, BgL_tmpz00_6943, BgL_auxz00_6952);
										}
										return BUNSPEC;
									}
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



/* f32vector-copy! */
	BGL_EXPORTED_DEF obj_t BGl_f32vectorzd2copyz12zc0zz__srfi4z00(obj_t
		BgL_targetz00_209, long BgL_tstartz00_210, obj_t BgL_sourcez00_211,
		obj_t BgL_sstartz00_212, obj_t BgL_sendz00_213)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				long BgL_auxz00_6966;
				long BgL_tmpz00_6964;

				BgL_auxz00_6966 = (long) CINT(BgL_sendz00_213);
				BgL_tmpz00_6964 = (long) CINT(BgL_sstartz00_212);
				BGL_F32VECTOR_COPY(BgL_targetz00_209, BgL_tstartz00_210,
					BgL_sourcez00_211, BgL_tmpz00_6964, BgL_auxz00_6966);
			}
			return BUNSPEC;
		}

	}



/* _f64vector-copy! */
	obj_t BGl__f64vectorzd2copyz12zc0zz__srfi4z00(obj_t BgL_env1313z00_222,
		obj_t BgL_opt1312z00_221)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				obj_t BgL_targetz00_1843;
				obj_t BgL_tstartz00_1844;
				obj_t BgL_sourcez00_1845;

				BgL_targetz00_1843 = VECTOR_REF(BgL_opt1312z00_221, ((long) 0));
				BgL_tstartz00_1844 = VECTOR_REF(BgL_opt1312z00_221, ((long) 1));
				BgL_sourcez00_1845 = VECTOR_REF(BgL_opt1312z00_221, ((long) 2));
				switch (VECTOR_LENGTH(BgL_opt1312z00_221))
					{
					case ((long) 3):

						{	/* Llib/srfi4.scm 838 */
							long BgL_sendz00_1850;

							{	/* Llib/srfi4.scm 838 */
								long BgL_res2082z00_3180;

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_xz00_3179;

									if (BGL_F64VECTORP(BgL_sourcez00_1845))
										{	/* Llib/srfi4.scm 838 */
											BgL_xz00_3179 = BgL_sourcez00_1845;
										}
									else
										{
											obj_t BgL_auxz00_6974;

											BgL_auxz00_6974 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2756z00zz__srfi4z00,
												BGl_string2681z00zz__srfi4z00, BgL_sourcez00_1845);
											FAILURE(BgL_auxz00_6974, BFALSE, BFALSE);
										}
									BgL_res2082z00_3180 = BGL_HVECTOR_LENGTH(BgL_xz00_3179);
								}
								BgL_sendz00_1850 = BgL_res2082z00_3180;
							}
							{	/* Llib/srfi4.scm 838 */

								{	/* Llib/srfi4.scm 838 */
									obj_t BgL_targetz00_3181;
									long BgL_tstartz00_3182;
									obj_t BgL_sourcez00_3183;

									if (BGL_F64VECTORP(BgL_targetz00_1843))
										{	/* Llib/srfi4.scm 838 */
											BgL_targetz00_3181 = BgL_targetz00_1843;
										}
									else
										{
											obj_t BgL_auxz00_6981;

											BgL_auxz00_6981 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2756z00zz__srfi4z00,
												BGl_string2681z00zz__srfi4z00, BgL_targetz00_1843);
											FAILURE(BgL_auxz00_6981, BFALSE, BFALSE);
										}
									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_tmpz00_6985;

										if (INTEGERP(BgL_tstartz00_1844))
											{	/* Llib/srfi4.scm 838 */
												BgL_tmpz00_6985 = BgL_tstartz00_1844;
											}
										else
											{
												obj_t BgL_auxz00_6988;

												BgL_auxz00_6988 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2756z00zz__srfi4z00,
													BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1844);
												FAILURE(BgL_auxz00_6988, BFALSE, BFALSE);
											}
										BgL_tstartz00_3182 = (long) CINT(BgL_tmpz00_6985);
									}
									if (BGL_F64VECTORP(BgL_sourcez00_1845))
										{	/* Llib/srfi4.scm 838 */
											BgL_sourcez00_3183 = BgL_sourcez00_1845;
										}
									else
										{
											obj_t BgL_auxz00_6995;

											BgL_auxz00_6995 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
												BGl_string2756z00zz__srfi4z00,
												BGl_string2681z00zz__srfi4z00, BgL_sourcez00_1845);
											FAILURE(BgL_auxz00_6995, BFALSE, BFALSE);
										}
									BGL_F64VECTOR_COPY(BgL_targetz00_3181, BgL_tstartz00_3182,
										BgL_sourcez00_3183, ((long) 0), BgL_sendz00_1850);
									return BUNSPEC;
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1851;

							BgL_sstartz00_1851 = VECTOR_REF(BgL_opt1312z00_221, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								long BgL_sendz00_1852;

								{	/* Llib/srfi4.scm 838 */
									long BgL_res2083z00_3185;

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_xz00_3184;

										if (BGL_F64VECTORP(BgL_sourcez00_1845))
											{	/* Llib/srfi4.scm 838 */
												BgL_xz00_3184 = BgL_sourcez00_1845;
											}
										else
											{
												obj_t BgL_auxz00_7003;

												BgL_auxz00_7003 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2756z00zz__srfi4z00,
													BGl_string2681z00zz__srfi4z00, BgL_sourcez00_1845);
												FAILURE(BgL_auxz00_7003, BFALSE, BFALSE);
											}
										BgL_res2083z00_3185 = BGL_HVECTOR_LENGTH(BgL_xz00_3184);
									}
									BgL_sendz00_1852 = BgL_res2083z00_3185;
								}
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3186;
										long BgL_tstartz00_3187;
										obj_t BgL_sourcez00_3188;

										if (BGL_F64VECTORP(BgL_targetz00_1843))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3186 = BgL_targetz00_1843;
											}
										else
											{
												obj_t BgL_auxz00_7010;

												BgL_auxz00_7010 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2756z00zz__srfi4z00,
													BGl_string2681z00zz__srfi4z00, BgL_targetz00_1843);
												FAILURE(BgL_auxz00_7010, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_7014;

											if (INTEGERP(BgL_tstartz00_1844))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_7014 = BgL_tstartz00_1844;
												}
											else
												{
													obj_t BgL_auxz00_7017;

													BgL_auxz00_7017 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2756z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1844);
													FAILURE(BgL_auxz00_7017, BFALSE, BFALSE);
												}
											BgL_tstartz00_3187 = (long) CINT(BgL_tmpz00_7014);
										}
										if (BGL_F64VECTORP(BgL_sourcez00_1845))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3188 = BgL_sourcez00_1845;
											}
										else
											{
												obj_t BgL_auxz00_7024;

												BgL_auxz00_7024 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2756z00zz__srfi4z00,
													BGl_string2681z00zz__srfi4z00, BgL_sourcez00_1845);
												FAILURE(BgL_auxz00_7024, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_tmpz00_7028;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_7029;

												if (INTEGERP(BgL_sstartz00_1851))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_7029 = BgL_sstartz00_1851;
													}
												else
													{
														obj_t BgL_auxz00_7032;

														BgL_auxz00_7032 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2756z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1851);
														FAILURE(BgL_auxz00_7032, BFALSE, BFALSE);
													}
												BgL_tmpz00_7028 = (long) CINT(BgL_tmpz00_7029);
											}
											BGL_F64VECTOR_COPY(BgL_targetz00_3186, BgL_tstartz00_3187,
												BgL_sourcez00_3188, BgL_tmpz00_7028, BgL_sendz00_1852);
										}
										return BUNSPEC;
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Llib/srfi4.scm 838 */
							obj_t BgL_sstartz00_1853;

							BgL_sstartz00_1853 = VECTOR_REF(BgL_opt1312z00_221, ((long) 3));
							{	/* Llib/srfi4.scm 838 */
								obj_t BgL_sendz00_1854;

								BgL_sendz00_1854 = VECTOR_REF(BgL_opt1312z00_221, ((long) 4));
								{	/* Llib/srfi4.scm 838 */

									{	/* Llib/srfi4.scm 838 */
										obj_t BgL_targetz00_3189;
										long BgL_tstartz00_3190;
										obj_t BgL_sourcez00_3191;

										if (BGL_F64VECTORP(BgL_targetz00_1843))
											{	/* Llib/srfi4.scm 838 */
												BgL_targetz00_3189 = BgL_targetz00_1843;
											}
										else
											{
												obj_t BgL_auxz00_7042;

												BgL_auxz00_7042 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2756z00zz__srfi4z00,
													BGl_string2681z00zz__srfi4z00, BgL_targetz00_1843);
												FAILURE(BgL_auxz00_7042, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											obj_t BgL_tmpz00_7046;

											if (INTEGERP(BgL_tstartz00_1844))
												{	/* Llib/srfi4.scm 838 */
													BgL_tmpz00_7046 = BgL_tstartz00_1844;
												}
											else
												{
													obj_t BgL_auxz00_7049;

													BgL_auxz00_7049 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2661z00zz__srfi4z00,
														BINT(((long) 33208)), BGl_string2756z00zz__srfi4z00,
														BGl_string2683z00zz__srfi4z00, BgL_tstartz00_1844);
													FAILURE(BgL_auxz00_7049, BFALSE, BFALSE);
												}
											BgL_tstartz00_3190 = (long) CINT(BgL_tmpz00_7046);
										}
										if (BGL_F64VECTORP(BgL_sourcez00_1845))
											{	/* Llib/srfi4.scm 838 */
												BgL_sourcez00_3191 = BgL_sourcez00_1845;
											}
										else
											{
												obj_t BgL_auxz00_7056;

												BgL_auxz00_7056 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2661z00zz__srfi4z00, BINT(((long) 33208)),
													BGl_string2756z00zz__srfi4z00,
													BGl_string2681z00zz__srfi4z00, BgL_sourcez00_1845);
												FAILURE(BgL_auxz00_7056, BFALSE, BFALSE);
											}
										{	/* Llib/srfi4.scm 838 */
											long BgL_auxz00_7069;
											long BgL_tmpz00_7060;

											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_7070;

												if (INTEGERP(BgL_sendz00_1854))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_7070 = BgL_sendz00_1854;
													}
												else
													{
														obj_t BgL_auxz00_7073;

														BgL_auxz00_7073 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2756z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00, BgL_sendz00_1854);
														FAILURE(BgL_auxz00_7073, BFALSE, BFALSE);
													}
												BgL_auxz00_7069 = (long) CINT(BgL_tmpz00_7070);
											}
											{	/* Llib/srfi4.scm 838 */
												obj_t BgL_tmpz00_7061;

												if (INTEGERP(BgL_sstartz00_1853))
													{	/* Llib/srfi4.scm 838 */
														BgL_tmpz00_7061 = BgL_sstartz00_1853;
													}
												else
													{
														obj_t BgL_auxz00_7064;

														BgL_auxz00_7064 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2661z00zz__srfi4z00,
															BINT(((long) 33208)),
															BGl_string2756z00zz__srfi4z00,
															BGl_string2683z00zz__srfi4z00,
															BgL_sstartz00_1853);
														FAILURE(BgL_auxz00_7064, BFALSE, BFALSE);
													}
												BgL_tmpz00_7060 = (long) CINT(BgL_tmpz00_7061);
											}
											BGL_F64VECTOR_COPY(BgL_targetz00_3189, BgL_tstartz00_3190,
												BgL_sourcez00_3191, BgL_tmpz00_7060, BgL_auxz00_7069);
										}
										return BUNSPEC;
									}
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



/* f64vector-copy! */
	BGL_EXPORTED_DEF obj_t BGl_f64vectorzd2copyz12zc0zz__srfi4z00(obj_t
		BgL_targetz00_216, long BgL_tstartz00_217, obj_t BgL_sourcez00_218,
		obj_t BgL_sstartz00_219, obj_t BgL_sendz00_220)
	{
		{	/* Llib/srfi4.scm 838 */
			{	/* Llib/srfi4.scm 838 */
				long BgL_auxz00_7083;
				long BgL_tmpz00_7081;

				BgL_auxz00_7083 = (long) CINT(BgL_sendz00_220);
				BgL_tmpz00_7081 = (long) CINT(BgL_sstartz00_219);
				BGL_F64VECTOR_COPY(BgL_targetz00_216, BgL_tstartz00_217,
					BgL_sourcez00_218, BgL_tmpz00_7081, BgL_auxz00_7083);
			}
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__srfi4z00()
	{
		{	/* Llib/srfi4.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__srfi4z00()
	{
		{	/* Llib/srfi4.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__srfi4z00()
	{
		{	/* Llib/srfi4.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__srfi4z00()
	{
		{	/* Llib/srfi4.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2757z00zz__srfi4z00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 214649622),
				BSTRING_TO_STRING(BGl_string2757z00zz__srfi4z00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 220647683),
				BSTRING_TO_STRING(BGl_string2757z00zz__srfi4z00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2757z00zz__srfi4z00));
			return
				BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long)
					460263341), BSTRING_TO_STRING(BGl_string2757z00zz__srfi4z00));
		}

	}

#ifdef __cplusplus
}
#endif
