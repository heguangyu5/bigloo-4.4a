/*===========================================================================*/
/*   (Ieee/string.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Ieee/string.scm -indent -o objs/obj_u/Ieee/string.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL bool_t
		BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringz00zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62stringzd2cutzb0zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62stringze3zf3z72zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62stringzd2shrinkz12za2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long,
		long);
	static obj_t BGl_z62substringzd2cizd3zf3z90zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern bool_t bigloo_strncmp_ci_at(obj_t, obj_t, long, long);
	static obj_t BGl_z62escapezd2schemezd2stringz62zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl__stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2charzd2indexz00zz__r4_strings_6_7z00(obj_t, unsigned char,
		obj_t, obj_t);
	static obj_t BGl__stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl_z62stringzd2cizc3zd3zf3z53zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_emptyzd2stringzf3z21zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2forzd2readz00zz__r4_strings_6_7z00(obj_t);
	extern bool_t bigloo_string_cile(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2deletezd2zz__r4_strings_6_7z00(obj_t,
		obj_t, int, long);
	static obj_t BGl_z62stringzd2forzd2readz62zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t,
		unsigned char, unsigned char);
	static obj_t BGl__stringzd2containszd2zz__r4_strings_6_7z00(obj_t, obj_t);
	extern bool_t bigloo_string_cilt(obj_t, obj_t);
	extern bool_t bigloo_string_le(obj_t, obj_t);
	extern bool_t bigloo_string_lt(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_strings_6_7z00 = BUNSPEC;
	static obj_t BGl__stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl__substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_escapezd2schemezd2stringz00zz__r4_strings_6_7z00(obj_t);
	extern bool_t bigloo_strcicmp(obj_t, obj_t);
	static obj_t BGl_symbol3557z00zz__r4_strings_6_7z00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t
		BGl_stringzd2cizc3zd3zf3z31zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringzd2cizc3zf3ze2zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl_z62stringzd2upcasezb0zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringze3zd3zf3zc3zz__r4_strings_6_7z00(obj_t,
		obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t string_for_read(obj_t);
	static obj_t BGl_z62stringzd2downcasez12za2zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static bool_t BGl_delimzf3zf3zz__r4_strings_6_7z00(obj_t, unsigned char);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62stringzd2nullzf3z43zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_stringzd2lengthzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_symbol3569z00zz__r4_strings_6_7z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2skipzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl_z62stringzd2upcasez12za2zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2setz12zc0zz__r4_strings_6_7z00(obj_t,
		long, unsigned char);
	static obj_t BGl__stringzd2skipzd2zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern bool_t bigloo_strncmp_ci(obj_t, obj_t, long);
	static obj_t BGl_symbol3572z00zz__r4_strings_6_7z00 = BUNSPEC;
	static obj_t BGl_symbol3575z00zz__r4_strings_6_7z00 = BUNSPEC;
	BGL_EXPORTED_DECL int
		BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_symbol3578z00zz__r4_strings_6_7z00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_stringzd2cize3zf3zc2zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl_z62stringzd2cize3zd3zf3z73zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL unsigned char
		BGl_stringzd2refzd2urz00zz__r4_strings_6_7z00(obj_t, long);
	static obj_t BGl_z62emptyzd2stringzf3z43zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringzd2nullzf3z21zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t, obj_t, int);
	static obj_t BGl_z62substringzd3zf3z42zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol3581z00zz__r4_strings_6_7z00 = BUNSPEC;
	static obj_t BGl_z62listzd2ze3stringz53zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl_symbol3584z00zz__r4_strings_6_7z00 = BUNSPEC;
	extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_z62stringzd2aszd2readz62zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl_symbol3589z00zz__r4_strings_6_7z00 = BUNSPEC;
	extern bool_t bigloo_strcmp_ci_at(obj_t, obj_t, long);
	static obj_t BGl__stringzd2hexzd2externz00zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__r4_strings_6_7z00();
	static obj_t BGl_z62stringzd2capitaliza7ez17zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2shrinkz12zc0zz__r4_strings_6_7z00(obj_t,
		long);
	BGL_EXPORTED_DECL bool_t
		BGl_substringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t, obj_t, long);
	extern long bgl_list_length(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blitzd2stringzd2urz12z12zz__r4_strings_6_7z00(obj_t, long, obj_t, long,
		long);
	BGL_EXPORTED_DECL bool_t
		BGl_stringzd2cize3zd3zf3z11zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62blitzd2stringzd2urz12z70zz__r4_strings_6_7z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__r4_strings_6_7z00();
	static obj_t BGl_z62stringzd2hexzd2internz62zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl__stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_strings_6_7z00();
	static obj_t BGl_z62stringzd2splitzb0zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2skipzd2zz__r4_strings_6_7z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00(obj_t,
		unsigned char, unsigned char);
	static obj_t
		BGl__stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl_z62stringzd2replacez12za2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__stringzd2charzd2indexz00zz__r4_strings_6_7z00(obj_t, obj_t);
	extern obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62stringzd2lengthzb0zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringzc3zf3z30zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl__stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(obj_t,
		obj_t);
	extern bool_t bigloo_strcmp_at(obj_t, obj_t, long);
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_z62substringzd2urzb0zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_stringzd2compare3zd2ciz00zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl__makezd2stringzd2zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl_z62stringzd2appendzb0zz__r4_strings_6_7z00(obj_t, obj_t);
	extern obj_t bgl_escape_scheme_string(char *, long, long);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2containszd2zz__r4_strings_6_7z00(obj_t,
		obj_t, int);
	static obj_t BGl__stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62stringzd2setzd2urz12z70zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringzd3zf3z20zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2splitzd2zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl_z62stringzd2hexzd2internz12z70zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(obj_t, long);
	static obj_t BGl_z62stringzd2refzd2urz62zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62stringzd2ze3listz53zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_escapezd2Czd2stringz00zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2upcasez12zc0zz__r4_strings_6_7z00(obj_t);
	extern bool_t bigloo_strncmp_at(obj_t, obj_t, long, long);
	BGL_EXPORTED_DECL int
		BGl_stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62escapezd2Czd2stringz62zz__r4_strings_6_7z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2capitaliza7ez75zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringze3zf3z10zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_substringzd2urzd2zz__r4_strings_6_7z00(obj_t,
		long, long);
	BGL_EXPORTED_DECL bool_t
		BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62stringz62zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl_comparezd2leftzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00(obj_t, obj_t, long,
		obj_t);
	BGL_EXPORTED_DECL long BGl_stringzd2compare3zd2zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl__substringzd2atzf3z21zz__r4_strings_6_7z00(obj_t, obj_t);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_z62stringzd2compare3zd2ciz62zz__r4_strings_6_7z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62stringzd2compare3zb0zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62stringzd2charzd2indexzd2urzb0zz__r4_strings_6_7z00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__stringzd2skipzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2hexzd2internz00zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62stringzd2cizc3zf3z80zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62stringzc3zd3zf3z81zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL unsigned char
		BGl_stringzd2refzd2zz__r4_strings_6_7z00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_makezd2stringzd2zz__r4_strings_6_7z00(long,
		obj_t);
	static obj_t BGl__stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2aszd2readz00zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL int
		BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62stringzd2replacezb0zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t bgl_escape_C_string(char *, long, long);
	static obj_t BGl_z62stringzd2cizd3zf3z90zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	extern bool_t bigloo_string_cige(obj_t, obj_t);
	static obj_t BGl_comparezd2rightzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	static obj_t BGl_z62stringzd2setz12za2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62stringzd2capitaliza7ez12z05zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl__stringzd2deletezd2zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl__stringzd2suffixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t);
	extern bool_t bigloo_string_cigt(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2charzd2indexzd2urzd2zz__r4_strings_6_7z00(obj_t, unsigned char,
		long, long);
	extern bool_t bigloo_string_ge(obj_t, obj_t);
	static obj_t BGl__stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl_z62stringzd2cize3zf3za0zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern bool_t bigloo_string_gt(obj_t, obj_t);
	static obj_t BGl_z62blitzd2stringz12za2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_strnatcmpz00zz__r4_strings_6_7z00(obj_t, obj_t, bool_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_substringzd3zf3z20zz__r4_strings_6_7z00(obj_t,
		obj_t, long);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2downcasez12zc0zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62stringzd2refzb0zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	extern obj_t make_string(long, unsigned char);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2cutzd2zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_stringzf3zf3zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62stringzd2fillz12za2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62stringzc3zf3z52zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62stringzf3z91zz__r4_strings_6_7z00(obj_t, obj_t);
	extern obj_t string_append(obj_t, obj_t);
	static obj_t BGl_z62stringzd2copyzb0zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2setzd2urz12z12zz__r4_strings_6_7z00(obj_t, long,
		unsigned char);
	BGL_EXPORTED_DECL bool_t BGl_stringzc3zd3zf3ze3zz__r4_strings_6_7z00(obj_t,
		obj_t);
	static obj_t BGl__stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t,
		long, obj_t, long, long);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2hexzd2externz00zz__r4_strings_6_7z00(obj_t, int, long);
	static obj_t BGl_z62stringze3zd3zf3za1zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62stringzd3zf3z42zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	extern obj_t make_string_sans_fill(long);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__substringz00zz__r4_strings_6_7z00(obj_t, obj_t);
	extern bool_t bigloo_strncmp(obj_t, obj_t, long);
	static obj_t BGl_z62stringzd2downcasezb0zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_substringzd2atzf3z21zz__r4_strings_6_7z00(obj_t,
		obj_t, long, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2fillz12zc0zz__r4_strings_6_7z00(obj_t,
		unsigned char);
	BGL_EXPORTED_DECL int
		BGl_stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2forzd2readzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2forza73602za7,
		BGl_z62stringzd2forzd2readz62zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_substringzd3zf3zd2envzf2zz__r4_strings_6_7z00,
		BgL_bgl_za762substringza7d3za73603za7,
		BGl_z62substringzd3zf3z42zz__r4_strings_6_7z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2downcasez12zd2envz12zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2down3604z00,
		BGl_z62stringzd2downcasez12za2zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2replacezd2envz00zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2repl3605z00,
		BGl_z62stringzd2replacezb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2upcasez12zd2envz12zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2upca3606z00,
		BGl_z62stringzd2upcasez12za2zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3570z00zz__r4_strings_6_7z00,
		BgL_bgl_string3570za700za7za7_3607za7, "string-prefix-length-ci", 23);
	      DEFINE_STRING(BGl_string3571z00zz__r4_strings_6_7z00,
		BgL_bgl_string3571za700za7za7_3608za7, "_string-suffix-length", 21);
	      DEFINE_STRING(BGl_string3490z00zz__r4_strings_6_7z00,
		BgL_bgl_string3490za700za7za7_3609za7, "&substring-ci=?", 15);
	      DEFINE_STRING(BGl_string3491z00zz__r4_strings_6_7z00,
		BgL_bgl_string3491za700za7za7_3610za7, "_substring-ci-at?", 17);
	      DEFINE_STRING(BGl_string3573z00zz__r4_strings_6_7z00,
		BgL_bgl_string3573za700za7za7_3611za7, "string-suffix-length", 20);
	      DEFINE_STRING(BGl_string3492z00zz__r4_strings_6_7z00,
		BgL_bgl_string3492za700za7za7_3612za7, "&empty-string?", 14);
	      DEFINE_STRING(BGl_string3574z00zz__r4_strings_6_7z00,
		BgL_bgl_string3574za700za7za7_3613za7, "_string-suffix-length-ci", 24);
	      DEFINE_STRING(BGl_string3493z00zz__r4_strings_6_7z00,
		BgL_bgl_string3493za700za7za7_3614za7, "&string-ci=?", 12);
	      DEFINE_STRING(BGl_string3494z00zz__r4_strings_6_7z00,
		BgL_bgl_string3494za700za7za7_3615za7, "&string<?", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2capitaliza7ezd2envza7zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2capi3616z00,
		BGl_z62stringzd2capitaliza7ez17zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3576z00zz__r4_strings_6_7z00,
		BgL_bgl_string3576za700za7za7_3617za7, "string-suffix-length-ci", 23);
	      DEFINE_STRING(BGl_string3495z00zz__r4_strings_6_7z00,
		BgL_bgl_string3495za700za7za7_3618za7, "&string>?", 9);
	      DEFINE_STRING(BGl_string3577z00zz__r4_strings_6_7z00,
		BgL_bgl_string3577za700za7za7_3619za7, "_string-prefix?", 15);
	      DEFINE_STRING(BGl_string3496z00zz__r4_strings_6_7z00,
		BgL_bgl_string3496za700za7za7_3620za7, "&string<=?", 10);
	      DEFINE_STRING(BGl_string3497z00zz__r4_strings_6_7z00,
		BgL_bgl_string3497za700za7za7_3621za7, "&string>=?", 10);
	      DEFINE_STRING(BGl_string3579z00zz__r4_strings_6_7z00,
		BgL_bgl_string3579za700za7za7_3622za7, "string-prefix?", 14);
	      DEFINE_STRING(BGl_string3498z00zz__r4_strings_6_7z00,
		BgL_bgl_string3498za700za7za7_3623za7, "&string-ci<?", 12);
	      DEFINE_STRING(BGl_string3499z00zz__r4_strings_6_7z00,
		BgL_bgl_string3499za700za7za7_3624za7, "&string-ci>?", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2suffixzf3zd2envzf3zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2suffix3625za7, opt_generic_entry,
		BGl__stringzd2suffixzf3z21zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2copyzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2copy3626z00,
		BGl_z62stringzd2copyzb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2compare3zd2envz00zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2comp3627z00,
		BGl_z62stringzd2compare3zb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2upcasezd2envz00zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2upca3628z00,
		BGl_z62stringzd2upcasezb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2setzd2urz12zd2envzc0zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2setza73629za7,
		BGl_z62stringzd2setzd2urz12z70zz__r4_strings_6_7z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2cizc3zd3zf3zd2envze3zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2ciza7c3630za7,
		BGl_z62stringzd2cizc3zd3zf3z53zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3580z00zz__r4_strings_6_7z00,
		BgL_bgl_string3580za700za7za7_3631za7, "_string-prefix-ci?", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2hexzd2internzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2hexza73632za7,
		BGl_z62stringzd2hexzd2internz62zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3582z00zz__r4_strings_6_7z00,
		BgL_bgl_string3582za700za7za7_3633za7, "string-prefix-ci?", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2hexzd2internz12zd2envzc0zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2hexza73634za7,
		BGl_z62stringzd2hexzd2internz12z70zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3583z00zz__r4_strings_6_7z00,
		BgL_bgl_string3583za700za7za7_3635za7, "_string-suffix?", 15);
	      DEFINE_STRING(BGl_string3585z00zz__r4_strings_6_7z00,
		BgL_bgl_string3585za700za7za7_3636za7, "string-suffix?", 14);
	      DEFINE_STRING(BGl_string3586z00zz__r4_strings_6_7z00,
		BgL_bgl_string3586za700za7za7_3637za7, "_string-suffix-ci?", 18);
	      DEFINE_STRING(BGl_string3587z00zz__r4_strings_6_7z00,
		BgL_bgl_string3587za700za7za7_3638za7, "_string-natural-compare3", 24);
	      DEFINE_STRING(BGl_string3588z00zz__r4_strings_6_7z00,
		BgL_bgl_string3588za700za7za7_3639za7, "_string-natural-compare3-ci", 27);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2skipzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2skipza7d3640z00, opt_generic_entry,
		BGl__stringzd2skipzd2zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ze3listzd2envze3zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2za7e3l3641za7,
		BGl_z62stringzd2ze3listz53zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2stringzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__makeza7d2stringza7d3642z00, opt_generic_entry,
		BGl__makezd2stringzd2zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2prefixzd2lengthzd2cizd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2prefix3643za7, opt_generic_entry,
		BGl__stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2cizd3zf3zd2envz20zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2ciza7d3644za7,
		BGl_z62stringzd2cizd3zf3z90zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3590z00zz__r4_strings_6_7z00,
		BgL_bgl_string3590za700za7za7_3645za7, "an-awful-hack", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2suffixzd2lengthzd2cizd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2suffix3646za7, opt_generic_entry,
		BGl__stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string3591z00zz__r4_strings_6_7z00,
		BgL_bgl_string3591za700za7za7_3647za7, "hex-string->string", 18);
	      DEFINE_STRING(BGl_string3592z00zz__r4_strings_6_7z00,
		BgL_bgl_string3592za700za7za7_3648za7, "Illegal string (illegal character)",
		34);
	      DEFINE_STRING(BGl_string3593z00zz__r4_strings_6_7z00,
		BgL_bgl_string3593za700za7za7_3649za7, "string-hex-intern", 17);
	      DEFINE_STRING(BGl_string3594z00zz__r4_strings_6_7z00,
		BgL_bgl_string3594za700za7za7_3650za7, "Illegal string (length is odd)",
		30);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2suffixzd2lengthzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2suffix3651za7, opt_generic_entry,
		BGl__stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string3595z00zz__r4_strings_6_7z00,
		BgL_bgl_string3595za700za7za7_3652za7, "&string-hex-intern", 18);
	      DEFINE_STRING(BGl_string3596z00zz__r4_strings_6_7z00,
		BgL_bgl_string3596za700za7za7_3653za7, "string-hex-intern!", 18);
	      DEFINE_STRING(BGl_string3597z00zz__r4_strings_6_7z00,
		BgL_bgl_string3597za700za7za7_3654za7, "&string-hex-intern!", 19);
	      DEFINE_STRING(BGl_string3598z00zz__r4_strings_6_7z00,
		BgL_bgl_string3598za700za7za7_3655za7, "_string-hex-extern", 18);
	      DEFINE_STRING(BGl_string3599z00zz__r4_strings_6_7z00,
		BgL_bgl_string3599za700za7za7_3656za7, "string-hex-extern", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2appendzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2appe3657z00, va_generic_entry,
		BGl_z62stringzd2appendzb0zz__r4_strings_6_7z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2compare3zd2cizd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2comp3658z00,
		BGl_z62stringzd2compare3zd2ciz62zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_substringzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__substringza700za7za7_3659za7, opt_generic_entry,
		BGl__substringz00zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2containszd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2contai3660za7, opt_generic_entry,
		BGl__stringzd2containszd2zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2indexzd2rightzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2indexza73661z00, opt_generic_entry,
		BGl__stringzd2indexzd2rightz00zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd3zf3zd2envzf2zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d3za7f3za73662z00,
		BGl_z62stringzd3zf3z42zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2containszd2cizd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2contai3663za7, opt_generic_entry,
		BGl__stringzd2containszd2ciz00zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2naturalzd2compare3zd2cizd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2natura3664za7, opt_generic_entry,
		BGl__stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2capitaliza7ez12zd2envzb5zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2capi3665z00,
		BGl_z62stringzd2capitaliza7ez12z05zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzf3zd2envz21zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7f3za791za73666z00,
		BGl_z62stringzf3z91zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2shrinkz12zd2envz12zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2shri3667z00,
		BGl_z62stringzd2shrinkz12za2zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2indexzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2indexza73668z00, opt_generic_entry,
		BGl__stringzd2indexzd2zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_substringzd2cizd2atzf3zd2envz21zz__r4_strings_6_7z00,
		BgL_bgl__substringza7d2ciza73669z00, opt_generic_entry,
		BGl__substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blitzd2stringzd2urz12zd2envzc0zz__r4_strings_6_7z00,
		BgL_bgl_za762blitza7d2string3670z00,
		BGl_z62blitzd2stringzd2urz12z70zz__r4_strings_6_7z00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringze3zd3zf3zd2envz11zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7e3za7d3za73671z00,
		BGl_z62stringze3zd3zf3za1zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_substringzd2atzf3zd2envzf3zz__r4_strings_6_7z00,
		BgL_bgl__substringza7d2atza73672z00, opt_generic_entry,
		BGl__substringzd2atzf3z21zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2naturalzd2compare3zd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2natura3673za7, opt_generic_entry,
		BGl__stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2prefixzd2cizf3zd2envz21zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2prefix3674za7, opt_generic_entry,
		BGl__stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2setz12zd2envz12zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2setza73675za7,
		BGl_z62stringzd2setz12za2zz__r4_strings_6_7z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2charzd2indexzd2urzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2char3676z00,
		BGl_z62stringzd2charzd2indexzd2urzb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2prefixzd2lengthzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2prefix3677za7, opt_generic_entry,
		BGl__stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2cize3zf3zd2envz10zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2ciza7e3678za7,
		BGl_z62stringzd2cize3zf3za0zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2splitzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2spli3679z00, va_generic_entry,
		BGl_z62stringzd2splitzb0zz__r4_strings_6_7z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emptyzd2stringzf3zd2envzf3zz__r4_strings_6_7z00,
		BgL_bgl_za762emptyza7d2strin3680z00,
		BGl_z62emptyzd2stringzf3z43zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2refzd2urzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2refza73681za7,
		BGl_z62stringzd2refzd2urz62zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringze3zf3zd2envzc2zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7e3za7f3za73682z00,
		BGl_z62stringze3zf3z72zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3500z00zz__r4_strings_6_7z00,
		BgL_bgl_string3500za700za7za7_3683za7, "&string-ci<=?", 13);
	      DEFINE_STRING(BGl_string3501z00zz__r4_strings_6_7z00,
		BgL_bgl_string3501za700za7za7_3684za7, "&string-ci>=?", 13);
	      DEFINE_STRING(BGl_string3502z00zz__r4_strings_6_7z00,
		BgL_bgl_string3502za700za7za7_3685za7, "_substring", 10);
	      DEFINE_STRING(BGl_string3503z00zz__r4_strings_6_7z00,
		BgL_bgl_string3503za700za7za7_3686za7, "Illegal start index ", 20);
	      DEFINE_STRING(BGl_string3504z00zz__r4_strings_6_7z00,
		BgL_bgl_string3504za700za7za7_3687za7, "substring", 9);
	      DEFINE_STRING(BGl_string3505z00zz__r4_strings_6_7z00,
		BgL_bgl_string3505za700za7za7_3688za7, "Illegal end index ", 18);
	      DEFINE_STRING(BGl_string3506z00zz__r4_strings_6_7z00,
		BgL_bgl_string3506za700za7za7_3689za7, "&substring-ur", 13);
	      DEFINE_STRING(BGl_string3507z00zz__r4_strings_6_7z00,
		BgL_bgl_string3507za700za7za7_3690za7, "_string-contains", 16);
	      DEFINE_STRING(BGl_string3508z00zz__r4_strings_6_7z00,
		BgL_bgl_string3508za700za7za7_3691za7, "_string-contains-ci", 19);
	      DEFINE_STRING(BGl_string3509z00zz__r4_strings_6_7z00,
		BgL_bgl_string3509za700za7za7_3692za7, "&string-compare3", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzc3zd3zf3zd2envz31zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7c3za7d3za73693z00,
		BGl_z62stringzc3zd3zf3z81zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3510z00zz__r4_strings_6_7z00,
		BgL_bgl_string3510za700za7za7_3694za7, "&string-compare3-ci", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2replacez12zd2envz12zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2repl3695z00,
		BGl_z62stringzd2replacez12za2zz__r4_strings_6_7z00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string3511z00zz__r4_strings_6_7z00,
		BgL_bgl_string3511za700za7za7_3696za7, "", 0);
	      DEFINE_STRING(BGl_string3512z00zz__r4_strings_6_7z00,
		BgL_bgl_string3512za700za7za7_3697za7, "&list->string", 13);
	      DEFINE_STRING(BGl_string3513z00zz__r4_strings_6_7z00,
		BgL_bgl_string3513za700za7za7_3698za7, "pair-nil", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2lengthzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2leng3699z00,
		BGl_z62stringzd2lengthzb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3514z00zz__r4_strings_6_7z00,
		BgL_bgl_string3514za700za7za7_3700za7, "&string->list", 13);
	      DEFINE_STRING(BGl_string3515z00zz__r4_strings_6_7z00,
		BgL_bgl_string3515za700za7za7_3701za7, "&string-copy", 12);
	      DEFINE_STRING(BGl_string3516z00zz__r4_strings_6_7z00,
		BgL_bgl_string3516za700za7za7_3702za7, "&string-fill!", 13);
	      DEFINE_STRING(BGl_string3517z00zz__r4_strings_6_7z00,
		BgL_bgl_string3517za700za7za7_3703za7, "&string-upcase", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2skipzd2rightzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2skipza7d3704z00, opt_generic_entry,
		BGl__stringzd2skipzd2rightz00zz__r4_strings_6_7z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string3518z00zz__r4_strings_6_7z00,
		BgL_bgl_string3518za700za7za7_3705za7, "&string-downcase", 16);
	      DEFINE_STRING(BGl_string3519z00zz__r4_strings_6_7z00,
		BgL_bgl_string3519za700za7za7_3706za7, "&string-upcase!", 15);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza762za7za7__3707z00, va_generic_entry,
		BGl_z62stringz62zz__r4_strings_6_7z00, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string3600z00zz__r4_strings_6_7z00,
		BgL_bgl_string3600za700za7za7_3708za7, "0123456789abcdef", 16);
	      DEFINE_STRING(BGl_string3601z00zz__r4_strings_6_7z00,
		BgL_bgl_string3601za700za7za7_3709za7, "__r4_strings_6_7", 16);
	      DEFINE_STRING(BGl_string3520z00zz__r4_strings_6_7z00,
		BgL_bgl_string3520za700za7za7_3710za7, "&string-downcase!", 17);
	      DEFINE_STRING(BGl_string3521z00zz__r4_strings_6_7z00,
		BgL_bgl_string3521za700za7za7_3711za7, "&string-capitalize!", 19);
	      DEFINE_STRING(BGl_string3522z00zz__r4_strings_6_7z00,
		BgL_bgl_string3522za700za7za7_3712za7, "&string-capitalize", 18);
	      DEFINE_STRING(BGl_string3523z00zz__r4_strings_6_7z00,
		BgL_bgl_string3523za700za7za7_3713za7, "&string-for-read", 16);
	      DEFINE_STRING(BGl_string3524z00zz__r4_strings_6_7z00,
		BgL_bgl_string3524za700za7za7_3714za7, "&escape-C-string", 16);
	      DEFINE_STRING(BGl_string3525z00zz__r4_strings_6_7z00,
		BgL_bgl_string3525za700za7za7_3715za7, "&escape-scheme-string", 21);
	      DEFINE_STRING(BGl_string3526z00zz__r4_strings_6_7z00,
		BgL_bgl_string3526za700za7za7_3716za7, "&string-as-read", 15);
	      DEFINE_STRING(BGl_string3527z00zz__r4_strings_6_7z00,
		BgL_bgl_string3527za700za7za7_3717za7, "&blit-string-ur!", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2charzd2indexzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2charza7d3718z00, opt_generic_entry,
		BGl__stringzd2charzd2indexz00zz__r4_strings_6_7z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string3528z00zz__r4_strings_6_7z00,
		BgL_bgl_string3528za700za7za7_3719za7, "]", 1);
	      DEFINE_STRING(BGl_string3529z00zz__r4_strings_6_7z00,
		BgL_bgl_string3529za700za7za7_3720za7, "] [dest:", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2deletezd2envz00zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2delete3721za7, opt_generic_entry,
		BGl__stringzd2deletezd2zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2nullzf3zd2envzf3zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2null3722z00,
		BGl_z62stringzd2nullzf3z43zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3530z00zz__r4_strings_6_7z00,
		BgL_bgl_string3530za700za7za7_3723za7, "[src:", 5);
	      DEFINE_STRING(BGl_string3531z00zz__r4_strings_6_7z00,
		BgL_bgl_string3531za700za7za7_3724za7,
		"blit-string!:Index and length out of range", 42);
	      DEFINE_STRING(BGl_string3532z00zz__r4_strings_6_7z00,
		BgL_bgl_string3532za700za7za7_3725za7, "&blit-string!", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_escapezd2Czd2stringzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl_za762escapeza7d2cza7d23726za7,
		BGl_z62escapezd2Czd2stringz62zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3533z00zz__r4_strings_6_7z00,
		BgL_bgl_string3533za700za7za7_3727za7, "&string-shrink!", 15);
	      DEFINE_STRING(BGl_string3534z00zz__r4_strings_6_7z00,
		BgL_bgl_string3534za700za7za7_3728za7, "&string-replace", 15);
	      DEFINE_STRING(BGl_string3535z00zz__r4_strings_6_7z00,
		BgL_bgl_string3535za700za7za7_3729za7, "&string-replace!", 16);
	      DEFINE_STRING(BGl_string3536z00zz__r4_strings_6_7z00,
		BgL_bgl_string3536za700za7za7_3730za7, "_string-delete", 14);
	      DEFINE_STRING(BGl_string3537z00zz__r4_strings_6_7z00,
		BgL_bgl_string3537za700za7za7_3731za7, "string-delete", 13);
	      DEFINE_STRING(BGl_string3538z00zz__r4_strings_6_7z00,
		BgL_bgl_string3538za700za7za7_3732za7, "start index out of range", 24);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2cutzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2cutza73733za7, va_generic_entry,
		BGl_z62stringzd2cutzb0zz__r4_strings_6_7z00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string3539z00zz__r4_strings_6_7z00,
		BgL_bgl_string3539za700za7za7_3734za7, "end index out of range", 22);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_substringzd2urzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl_za762substringza7d2u3735z00,
		BGl_z62substringzd2urzb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2suffixzd2cizf3zd2envz21zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2suffix3736za7, opt_generic_entry,
		BGl__stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_substringzd2cizd3zf3zd2envz20zz__r4_strings_6_7z00,
		BgL_bgl_za762substringza7d2c3737z00,
		BGl_z62substringzd2cizd3zf3z90zz__r4_strings_6_7z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_escapezd2schemezd2stringzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl_za762escapeza7d2sche3738z00,
		BGl_z62escapezd2schemezd2stringz62zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3540z00zz__r4_strings_6_7z00,
		BgL_bgl_string3540za700za7za7_3739za7, "Illegal indices", 15);
	      DEFINE_STRING(BGl_string3541z00zz__r4_strings_6_7z00,
		BgL_bgl_string3541za700za7za7_3740za7, "Illegal char/charset/predicate",
		30);
	      DEFINE_STRING(BGl_string3542z00zz__r4_strings_6_7z00,
		BgL_bgl_string3542za700za7za7_3741za7, " \t\n", 3);
	      DEFINE_STRING(BGl_string3543z00zz__r4_strings_6_7z00,
		BgL_bgl_string3543za700za7za7_3742za7, "&string-split", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2cize3zd3zf3zd2envzc3zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2ciza7e3743za7,
		BGl_z62stringzd2cize3zd3zf3z73zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2cizc3zf3zd2envz30zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2ciza7c3744za7,
		BGl_z62stringzd2cizc3zf3z80zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3544z00zz__r4_strings_6_7z00,
		BgL_bgl_string3544za700za7za7_3745za7, "&string-cut", 11);
	      DEFINE_STRING(BGl_string3545z00zz__r4_strings_6_7z00,
		BgL_bgl_string3545za700za7za7_3746za7, "&string-char-index-ur", 21);
	      DEFINE_STRING(BGl_string3546z00zz__r4_strings_6_7z00,
		BgL_bgl_string3546za700za7za7_3747za7, "_string-char-index", 18);
	      DEFINE_STRING(BGl_string3547z00zz__r4_strings_6_7z00,
		BgL_bgl_string3547za700za7za7_3748za7, "_string-index", 13);
	      DEFINE_STRING(BGl_string3548z00zz__r4_strings_6_7z00,
		BgL_bgl_string3548za700za7za7_3749za7, "string-index", 12);
	      DEFINE_STRING(BGl_string3549z00zz__r4_strings_6_7z00,
		BgL_bgl_string3549za700za7za7_3750za7, "Illegal regset", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blitzd2stringz12zd2envz12zz__r4_strings_6_7z00,
		BgL_bgl_za762blitza7d2string3751z00,
		BGl_z62blitzd2stringz12za2zz__r4_strings_6_7z00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2hexzd2externzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2hexza7d23752z00, opt_generic_entry,
		BGl__stringzd2hexzd2externz00zz__r4_strings_6_7z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2downcasezd2envz00zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2down3753z00,
		BGl_z62stringzd2downcasezb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2ze3stringzd2envze3zz__r4_strings_6_7z00,
		BgL_bgl_za762listza7d2za7e3str3754za7,
		BGl_z62listzd2ze3stringz53zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2refzd2envz00zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2refza73755za7,
		BGl_z62stringzd2refzb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2aszd2readzd2envzd2zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2asza7d3756za7,
		BGl_z62stringzd2aszd2readz62zz__r4_strings_6_7z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3550z00zz__r4_strings_6_7z00,
		BgL_bgl_string3550za700za7za7_3757za7, "_string-index-right", 19);
	      DEFINE_STRING(BGl_string3551z00zz__r4_strings_6_7z00,
		BgL_bgl_string3551za700za7za7_3758za7, "string-index-right", 18);
	      DEFINE_STRING(BGl_string3552z00zz__r4_strings_6_7z00,
		BgL_bgl_string3552za700za7za7_3759za7, "index out of bound", 18);
	      DEFINE_STRING(BGl_string3553z00zz__r4_strings_6_7z00,
		BgL_bgl_string3553za700za7za7_3760za7, "_string-skip", 12);
	      DEFINE_STRING(BGl_string3554z00zz__r4_strings_6_7z00,
		BgL_bgl_string3554za700za7za7_3761za7, "string-skip", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2fillz12zd2envz12zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7d2fill3762z00,
		BGl_z62stringzd2fillz12za2zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3555z00zz__r4_strings_6_7z00,
		BgL_bgl_string3555za700za7za7_3763za7, "_string-skip-right", 18);
	      DEFINE_STRING(BGl_string3556z00zz__r4_strings_6_7z00,
		BgL_bgl_string3556za700za7za7_3764za7, "_string-prefix-length", 21);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzc3zf3zd2envze2zz__r4_strings_6_7z00,
		BgL_bgl_za762stringza7c3za7f3za73765z00,
		BGl_z62stringzc3zf3z52zz__r4_strings_6_7z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3476z00zz__r4_strings_6_7z00,
		BgL_bgl_string3476za700za7za7_3766za7, "/tmp/4.4a/runtime/Ieee/string.scm",
		33);
	      DEFINE_STRING(BGl_string3558z00zz__r4_strings_6_7z00,
		BgL_bgl_string3558za700za7za7_3767za7, "string-prefix-length", 20);
	      DEFINE_STRING(BGl_string3477z00zz__r4_strings_6_7z00,
		BgL_bgl_string3477za700za7za7_3768za7, "&string-null?", 13);
	      DEFINE_STRING(BGl_string3559z00zz__r4_strings_6_7z00,
		BgL_bgl_string3559za700za7za7_3769za7, "Index negative end index `", 26);
	      DEFINE_STRING(BGl_string3478z00zz__r4_strings_6_7z00,
		BgL_bgl_string3478za700za7za7_3770za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3479z00zz__r4_strings_6_7z00,
		BgL_bgl_string3479za700za7za7_3771za7, "_make-string", 12);
	      DEFINE_STRING(BGl_string3560z00zz__r4_strings_6_7z00,
		BgL_bgl_string3560za700za7za7_3772za7, "end1", 4);
	      DEFINE_STRING(BGl_string3561z00zz__r4_strings_6_7z00,
		BgL_bgl_string3561za700za7za7_3773za7, "'", 1);
	      DEFINE_STRING(BGl_string3480z00zz__r4_strings_6_7z00,
		BgL_bgl_string3480za700za7za7_3774za7, "bint", 4);
	      DEFINE_STRING(BGl_string3562z00zz__r4_strings_6_7z00,
		BgL_bgl_string3562za700za7za7_3775za7, "Too large end index `", 21);
	      DEFINE_STRING(BGl_string3481z00zz__r4_strings_6_7z00,
		BgL_bgl_string3481za700za7za7_3776za7, "bchar", 5);
	      DEFINE_STRING(BGl_string3563z00zz__r4_strings_6_7z00,
		BgL_bgl_string3563za700za7za7_3777za7, "end2", 4);
	      DEFINE_STRING(BGl_string3482z00zz__r4_strings_6_7z00,
		BgL_bgl_string3482za700za7za7_3778za7, "&string-length", 14);
	      DEFINE_STRING(BGl_string3564z00zz__r4_strings_6_7z00,
		BgL_bgl_string3564za700za7za7_3779za7, "Index negative start index `", 28);
	      DEFINE_STRING(BGl_string3483z00zz__r4_strings_6_7z00,
		BgL_bgl_string3483za700za7za7_3780za7, "&string-ref", 11);
	      DEFINE_STRING(BGl_string3565z00zz__r4_strings_6_7z00,
		BgL_bgl_string3565za700za7za7_3781za7, "start1", 6);
	      DEFINE_STRING(BGl_string3484z00zz__r4_strings_6_7z00,
		BgL_bgl_string3484za700za7za7_3782za7, "&string-set!", 12);
	      DEFINE_STRING(BGl_string3566z00zz__r4_strings_6_7z00,
		BgL_bgl_string3566za700za7za7_3783za7, "Too large start index `", 23);
	      DEFINE_STRING(BGl_string3485z00zz__r4_strings_6_7z00,
		BgL_bgl_string3485za700za7za7_3784za7, "&string-ref-ur", 14);
	      DEFINE_STRING(BGl_string3567z00zz__r4_strings_6_7z00,
		BgL_bgl_string3567za700za7za7_3785za7, "start2", 6);
	      DEFINE_STRING(BGl_string3486z00zz__r4_strings_6_7z00,
		BgL_bgl_string3486za700za7za7_3786za7, "&string-set-ur!", 15);
	      DEFINE_STRING(BGl_string3568z00zz__r4_strings_6_7z00,
		BgL_bgl_string3568za700za7za7_3787za7, "_string-prefix-length-ci", 24);
	      DEFINE_STRING(BGl_string3487z00zz__r4_strings_6_7z00,
		BgL_bgl_string3487za700za7za7_3788za7, "&string=?", 9);
	      DEFINE_STRING(BGl_string3488z00zz__r4_strings_6_7z00,
		BgL_bgl_string3488za700za7za7_3789za7, "&substring=?", 12);
	      DEFINE_STRING(BGl_string3489z00zz__r4_strings_6_7z00,
		BgL_bgl_string3489za700za7za7_3790za7, "_substring-at?", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2prefixzf3zd2envzf3zz__r4_strings_6_7z00,
		BgL_bgl__stringza7d2prefix3791za7, opt_generic_entry,
		BGl__stringzd2prefixzf3z21zz__r4_strings_6_7z00, BFALSE, -1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__r4_strings_6_7z00));
		     ADD_ROOT((void *) (&BGl_symbol3557z00zz__r4_strings_6_7z00));
		     ADD_ROOT((void *) (&BGl_symbol3569z00zz__r4_strings_6_7z00));
		     ADD_ROOT((void *) (&BGl_symbol3572z00zz__r4_strings_6_7z00));
		     ADD_ROOT((void *) (&BGl_symbol3575z00zz__r4_strings_6_7z00));
		     ADD_ROOT((void *) (&BGl_symbol3578z00zz__r4_strings_6_7z00));
		     ADD_ROOT((void *) (&BGl_symbol3581z00zz__r4_strings_6_7z00));
		     ADD_ROOT((void *) (&BGl_symbol3584z00zz__r4_strings_6_7z00));
		     ADD_ROOT((void *) (&BGl_symbol3589z00zz__r4_strings_6_7z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long
		BgL_checksumz00_5843, char *BgL_fromz00_5844)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_strings_6_7z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_strings_6_7z00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__r4_strings_6_7z00();
					BGl_cnstzd2initzd2zz__r4_strings_6_7z00();
					return BGl_importedzd2moduleszd2initz00zz__r4_strings_6_7z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__r4_strings_6_7z00()
	{
		{	/* Ieee/string.scm 18 */
			BGl_symbol3557z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string3558z00zz__r4_strings_6_7z00);
			BGl_symbol3569z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string3570z00zz__r4_strings_6_7z00);
			BGl_symbol3572z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string3573z00zz__r4_strings_6_7z00);
			BGl_symbol3575z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string3576z00zz__r4_strings_6_7z00);
			BGl_symbol3578z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string3579z00zz__r4_strings_6_7z00);
			BGl_symbol3581z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string3582z00zz__r4_strings_6_7z00);
			BGl_symbol3584z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string3585z00zz__r4_strings_6_7z00);
			return (BGl_symbol3589z00zz__r4_strings_6_7z00 =
				bstring_to_symbol(BGl_string3590z00zz__r4_strings_6_7z00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__r4_strings_6_7z00()
	{
		{	/* Ieee/string.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* string? */
	BGL_EXPORTED_DEF bool_t BGl_stringzf3zf3zz__r4_strings_6_7z00(obj_t
		BgL_objz00_3)
	{
		{	/* Ieee/string.scm 296 */
			return STRINGP(BgL_objz00_3);
		}

	}



/* &string? */
	obj_t BGl_z62stringzf3z91zz__r4_strings_6_7z00(obj_t BgL_envz00_5140,
		obj_t BgL_objz00_5141)
	{
		{	/* Ieee/string.scm 296 */
			return BBOOL(BGl_stringzf3zf3zz__r4_strings_6_7z00(BgL_objz00_5141));
		}

	}



/* string-null? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2nullzf3z21zz__r4_strings_6_7z00(obj_t
		BgL_strz00_4)
	{
		{	/* Ieee/string.scm 302 */
			return (STRING_LENGTH(BgL_strz00_4) == ((long) 0));
		}

	}



/* &string-null? */
	obj_t BGl_z62stringzd2nullzf3z43zz__r4_strings_6_7z00(obj_t BgL_envz00_5142,
		obj_t BgL_strz00_5143)
	{
		{	/* Ieee/string.scm 302 */
			{	/* Ieee/string.scm 303 */
				bool_t BgL_tmpz00_5865;

				{	/* Ieee/string.scm 303 */
					obj_t BgL_auxz00_5866;

					if (STRINGP(BgL_strz00_5143))
						{	/* Ieee/string.scm 303 */
							BgL_auxz00_5866 = BgL_strz00_5143;
						}
					else
						{
							obj_t BgL_auxz00_5869;

							BgL_auxz00_5869 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 14952)),
								BGl_string3477z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_strz00_5143);
							FAILURE(BgL_auxz00_5869, BFALSE, BFALSE);
						}
					BgL_tmpz00_5865 =
						BGl_stringzd2nullzf3z21zz__r4_strings_6_7z00(BgL_auxz00_5866);
				}
				return BBOOL(BgL_tmpz00_5865);
			}
		}

	}



/* _make-string */
	obj_t BGl__makezd2stringzd2zz__r4_strings_6_7z00(obj_t BgL_env1093z00_8,
		obj_t BgL_opt1092z00_7)
	{
		{	/* Ieee/string.scm 308 */
			{	/* Ieee/string.scm 308 */
				obj_t BgL_g1094z00_5807;

				BgL_g1094z00_5807 = VECTOR_REF(BgL_opt1092z00_7, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1092z00_7))
					{
					case ((long) 1):

						{	/* Ieee/string.scm 308 */

							{	/* Ieee/string.scm 308 */
								obj_t BgL_res2180z00_5808;

								{	/* Ieee/string.scm 308 */
									long BgL_kz00_5809;

									{	/* Ieee/string.scm 308 */
										obj_t BgL_tmpz00_5876;

										if (INTEGERP(BgL_g1094z00_5807))
											{	/* Ieee/string.scm 308 */
												BgL_tmpz00_5876 = BgL_g1094z00_5807;
											}
										else
											{
												obj_t BgL_auxz00_5879;

												BgL_auxz00_5879 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 15199)),
													BGl_string3479z00zz__r4_strings_6_7z00,
													BGl_string3480z00zz__r4_strings_6_7z00,
													BgL_g1094z00_5807);
												FAILURE(BgL_auxz00_5879, BFALSE, BFALSE);
											}
										BgL_kz00_5809 = (long) CINT(BgL_tmpz00_5876);
									}
									BgL_res2180z00_5808 =
										make_string(BgL_kz00_5809, ((unsigned char) ' '));
								}
								return BgL_res2180z00_5808;
							}
						}
						break;
					case ((long) 2):

						{	/* Ieee/string.scm 308 */
							obj_t BgL_charz00_5810;

							BgL_charz00_5810 = VECTOR_REF(BgL_opt1092z00_7, ((long) 1));
							{	/* Ieee/string.scm 308 */

								{	/* Ieee/string.scm 308 */
									obj_t BgL_res2181z00_5811;

									{	/* Ieee/string.scm 308 */
										long BgL_kz00_5812;

										{	/* Ieee/string.scm 308 */
											obj_t BgL_tmpz00_5886;

											if (INTEGERP(BgL_g1094z00_5807))
												{	/* Ieee/string.scm 308 */
													BgL_tmpz00_5886 = BgL_g1094z00_5807;
												}
											else
												{
													obj_t BgL_auxz00_5889;

													BgL_auxz00_5889 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 15199)),
														BGl_string3479z00zz__r4_strings_6_7z00,
														BGl_string3480z00zz__r4_strings_6_7z00,
														BgL_g1094z00_5807);
													FAILURE(BgL_auxz00_5889, BFALSE, BFALSE);
												}
											BgL_kz00_5812 = (long) CINT(BgL_tmpz00_5886);
										}
										{	/* Ieee/string.scm 309 */
											unsigned char BgL_tmpz00_5894;

											{	/* Ieee/string.scm 309 */
												obj_t BgL_tmpz00_5895;

												if (CHARP(BgL_charz00_5810))
													{	/* Ieee/string.scm 309 */
														BgL_tmpz00_5895 = BgL_charz00_5810;
													}
												else
													{
														obj_t BgL_auxz00_5898;

														BgL_auxz00_5898 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 15275)),
															BGl_string3479z00zz__r4_strings_6_7z00,
															BGl_string3481z00zz__r4_strings_6_7z00,
															BgL_charz00_5810);
														FAILURE(BgL_auxz00_5898, BFALSE, BFALSE);
													}
												BgL_tmpz00_5894 = CCHAR(BgL_tmpz00_5895);
											}
											BgL_res2181z00_5811 =
												make_string(BgL_kz00_5812, BgL_tmpz00_5894);
									}}
									return BgL_res2181z00_5811;
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



/* make-string */
	BGL_EXPORTED_DEF obj_t BGl_makezd2stringzd2zz__r4_strings_6_7z00(long
		BgL_kz00_5, obj_t BgL_charz00_6)
	{
		{	/* Ieee/string.scm 308 */
			return make_string(BgL_kz00_5, CCHAR(BgL_charz00_6));
		}

	}



/* string */
	BGL_EXPORTED_DEF obj_t BGl_stringz00zz__r4_strings_6_7z00(obj_t
		BgL_charsz00_9)
	{
		{	/* Ieee/string.scm 314 */
			return BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_charsz00_9);
		}

	}



/* &string */
	obj_t BGl_z62stringz62zz__r4_strings_6_7z00(obj_t BgL_envz00_5144,
		obj_t BgL_charsz00_5145)
	{
		{	/* Ieee/string.scm 314 */
			return BGl_stringz00zz__r4_strings_6_7z00(BgL_charsz00_5145);
		}

	}



/* string-length */
	BGL_EXPORTED_DEF long BGl_stringzd2lengthzd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_10)
	{
		{	/* Ieee/string.scm 320 */
			return STRING_LENGTH(BgL_stringz00_10);
		}

	}



/* &string-length */
	obj_t BGl_z62stringzd2lengthzb0zz__r4_strings_6_7z00(obj_t BgL_envz00_5146,
		obj_t BgL_stringz00_5147)
	{
		{	/* Ieee/string.scm 320 */
			{	/* Ieee/string.scm 321 */
				long BgL_tmpz00_5911;

				{	/* Ieee/string.scm 321 */
					obj_t BgL_auxz00_5912;

					if (STRINGP(BgL_stringz00_5147))
						{	/* Ieee/string.scm 321 */
							BgL_auxz00_5912 = BgL_stringz00_5147;
						}
					else
						{
							obj_t BgL_auxz00_5915;

							BgL_auxz00_5915 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 15827)),
								BGl_string3482z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5147);
							FAILURE(BgL_auxz00_5915, BFALSE, BFALSE);
						}
					BgL_tmpz00_5911 =
						BGl_stringzd2lengthzd2zz__r4_strings_6_7z00(BgL_auxz00_5912);
				}
				return BINT(BgL_tmpz00_5911);
			}
		}

	}



/* string-ref */
	BGL_EXPORTED_DEF unsigned char BGl_stringzd2refzd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_11, long BgL_kz00_12)
	{
		{	/* Ieee/string.scm 326 */
			return STRING_REF(BgL_stringz00_11, BgL_kz00_12);
		}

	}



/* &string-ref */
	obj_t BGl_z62stringzd2refzb0zz__r4_strings_6_7z00(obj_t BgL_envz00_5148,
		obj_t BgL_stringz00_5149, obj_t BgL_kz00_5150)
	{
		{	/* Ieee/string.scm 326 */
			{	/* Ieee/string.scm 327 */
				unsigned char BgL_tmpz00_5922;

				{	/* Ieee/string.scm 327 */
					long BgL_auxz00_5930;
					obj_t BgL_auxz00_5923;

					{	/* Ieee/string.scm 327 */
						obj_t BgL_tmpz00_5931;

						if (INTEGERP(BgL_kz00_5150))
							{	/* Ieee/string.scm 327 */
								BgL_tmpz00_5931 = BgL_kz00_5150;
							}
						else
							{
								obj_t BgL_auxz00_5934;

								BgL_auxz00_5934 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 16115)),
									BGl_string3483z00zz__r4_strings_6_7z00,
									BGl_string3480z00zz__r4_strings_6_7z00, BgL_kz00_5150);
								FAILURE(BgL_auxz00_5934, BFALSE, BFALSE);
							}
						BgL_auxz00_5930 = (long) CINT(BgL_tmpz00_5931);
					}
					if (STRINGP(BgL_stringz00_5149))
						{	/* Ieee/string.scm 327 */
							BgL_auxz00_5923 = BgL_stringz00_5149;
						}
					else
						{
							obj_t BgL_auxz00_5926;

							BgL_auxz00_5926 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 16115)),
								BGl_string3483z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5149);
							FAILURE(BgL_auxz00_5926, BFALSE, BFALSE);
						}
					BgL_tmpz00_5922 =
						BGl_stringzd2refzd2zz__r4_strings_6_7z00(BgL_auxz00_5923,
						BgL_auxz00_5930);
				}
				return BCHAR(BgL_tmpz00_5922);
			}
		}

	}



/* string-set! */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2setz12zc0zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_13, long BgL_kz00_14, unsigned char BgL_charz00_15)
	{
		{	/* Ieee/string.scm 332 */
			return STRING_SET(BgL_stringz00_13, BgL_kz00_14, BgL_charz00_15);
		}

	}



/* &string-set! */
	obj_t BGl_z62stringzd2setz12za2zz__r4_strings_6_7z00(obj_t BgL_envz00_5151,
		obj_t BgL_stringz00_5152, obj_t BgL_kz00_5153, obj_t BgL_charz00_5154)
	{
		{	/* Ieee/string.scm 332 */
			{	/* Ieee/string.scm 333 */
				unsigned char BgL_auxz00_5958;
				long BgL_auxz00_5949;
				obj_t BgL_auxz00_5942;

				{	/* Ieee/string.scm 333 */
					obj_t BgL_tmpz00_5959;

					if (CHARP(BgL_charz00_5154))
						{	/* Ieee/string.scm 333 */
							BgL_tmpz00_5959 = BgL_charz00_5154;
						}
					else
						{
							obj_t BgL_auxz00_5962;

							BgL_auxz00_5962 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 16409)),
								BGl_string3484z00zz__r4_strings_6_7z00,
								BGl_string3481z00zz__r4_strings_6_7z00, BgL_charz00_5154);
							FAILURE(BgL_auxz00_5962, BFALSE, BFALSE);
						}
					BgL_auxz00_5958 = CCHAR(BgL_tmpz00_5959);
				}
				{	/* Ieee/string.scm 333 */
					obj_t BgL_tmpz00_5950;

					if (INTEGERP(BgL_kz00_5153))
						{	/* Ieee/string.scm 333 */
							BgL_tmpz00_5950 = BgL_kz00_5153;
						}
					else
						{
							obj_t BgL_auxz00_5953;

							BgL_auxz00_5953 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 16409)),
								BGl_string3484z00zz__r4_strings_6_7z00,
								BGl_string3480z00zz__r4_strings_6_7z00, BgL_kz00_5153);
							FAILURE(BgL_auxz00_5953, BFALSE, BFALSE);
						}
					BgL_auxz00_5949 = (long) CINT(BgL_tmpz00_5950);
				}
				if (STRINGP(BgL_stringz00_5152))
					{	/* Ieee/string.scm 333 */
						BgL_auxz00_5942 = BgL_stringz00_5152;
					}
				else
					{
						obj_t BgL_auxz00_5945;

						BgL_auxz00_5945 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 16409)),
							BGl_string3484z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5152);
						FAILURE(BgL_auxz00_5945, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2setz12zc0zz__r4_strings_6_7z00(BgL_auxz00_5942,
					BgL_auxz00_5949, BgL_auxz00_5958);
			}
		}

	}



/* string-ref-ur */
	BGL_EXPORTED_DEF unsigned char
		BGl_stringzd2refzd2urz00zz__r4_strings_6_7z00(obj_t BgL_stringz00_16,
		long BgL_kz00_17)
	{
		{	/* Ieee/string.scm 338 */
			return STRING_REF(BgL_stringz00_16, BgL_kz00_17);
		}

	}



/* &string-ref-ur */
	obj_t BGl_z62stringzd2refzd2urz62zz__r4_strings_6_7z00(obj_t BgL_envz00_5155,
		obj_t BgL_stringz00_5156, obj_t BgL_kz00_5157)
	{
		{	/* Ieee/string.scm 338 */
			{	/* Ieee/string.scm 339 */
				unsigned char BgL_tmpz00_5969;

				{	/* Ieee/string.scm 339 */
					long BgL_auxz00_5977;
					obj_t BgL_auxz00_5970;

					{	/* Ieee/string.scm 339 */
						obj_t BgL_tmpz00_5978;

						if (INTEGERP(BgL_kz00_5157))
							{	/* Ieee/string.scm 339 */
								BgL_tmpz00_5978 = BgL_kz00_5157;
							}
						else
							{
								obj_t BgL_auxz00_5981;

								BgL_auxz00_5981 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 16705)),
									BGl_string3485z00zz__r4_strings_6_7z00,
									BGl_string3480z00zz__r4_strings_6_7z00, BgL_kz00_5157);
								FAILURE(BgL_auxz00_5981, BFALSE, BFALSE);
							}
						BgL_auxz00_5977 = (long) CINT(BgL_tmpz00_5978);
					}
					if (STRINGP(BgL_stringz00_5156))
						{	/* Ieee/string.scm 339 */
							BgL_auxz00_5970 = BgL_stringz00_5156;
						}
					else
						{
							obj_t BgL_auxz00_5973;

							BgL_auxz00_5973 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 16705)),
								BGl_string3485z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5156);
							FAILURE(BgL_auxz00_5973, BFALSE, BFALSE);
						}
					BgL_tmpz00_5969 =
						BGl_stringzd2refzd2urz00zz__r4_strings_6_7z00(BgL_auxz00_5970,
						BgL_auxz00_5977);
				}
				return BCHAR(BgL_tmpz00_5969);
			}
		}

	}



/* string-set-ur! */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2setzd2urz12z12zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_18, long BgL_kz00_19, unsigned char BgL_charz00_20)
	{
		{	/* Ieee/string.scm 344 */
			return STRING_SET(BgL_stringz00_18, BgL_kz00_19, BgL_charz00_20);
		}

	}



/* &string-set-ur! */
	obj_t BGl_z62stringzd2setzd2urz12z70zz__r4_strings_6_7z00(obj_t
		BgL_envz00_5158, obj_t BgL_stringz00_5159, obj_t BgL_kz00_5160,
		obj_t BgL_charz00_5161)
	{
		{	/* Ieee/string.scm 344 */
			{	/* Ieee/string.scm 345 */
				unsigned char BgL_auxz00_6005;
				long BgL_auxz00_5996;
				obj_t BgL_auxz00_5989;

				{	/* Ieee/string.scm 345 */
					obj_t BgL_tmpz00_6006;

					if (CHARP(BgL_charz00_5161))
						{	/* Ieee/string.scm 345 */
							BgL_tmpz00_6006 = BgL_charz00_5161;
						}
					else
						{
							obj_t BgL_auxz00_6009;

							BgL_auxz00_6009 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 17002)),
								BGl_string3486z00zz__r4_strings_6_7z00,
								BGl_string3481z00zz__r4_strings_6_7z00, BgL_charz00_5161);
							FAILURE(BgL_auxz00_6009, BFALSE, BFALSE);
						}
					BgL_auxz00_6005 = CCHAR(BgL_tmpz00_6006);
				}
				{	/* Ieee/string.scm 345 */
					obj_t BgL_tmpz00_5997;

					if (INTEGERP(BgL_kz00_5160))
						{	/* Ieee/string.scm 345 */
							BgL_tmpz00_5997 = BgL_kz00_5160;
						}
					else
						{
							obj_t BgL_auxz00_6000;

							BgL_auxz00_6000 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 17002)),
								BGl_string3486z00zz__r4_strings_6_7z00,
								BGl_string3480z00zz__r4_strings_6_7z00, BgL_kz00_5160);
							FAILURE(BgL_auxz00_6000, BFALSE, BFALSE);
						}
					BgL_auxz00_5996 = (long) CINT(BgL_tmpz00_5997);
				}
				if (STRINGP(BgL_stringz00_5159))
					{	/* Ieee/string.scm 345 */
						BgL_auxz00_5989 = BgL_stringz00_5159;
					}
				else
					{
						obj_t BgL_auxz00_5992;

						BgL_auxz00_5992 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 17002)),
							BGl_string3486z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5159);
						FAILURE(BgL_auxz00_5992, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2setzd2urz12z12zz__r4_strings_6_7z00(BgL_auxz00_5989,
					BgL_auxz00_5996, BgL_auxz00_6005);
			}
		}

	}



/* string=? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd3zf3z20zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_21, obj_t BgL_string2z00_22)
	{
		{	/* Ieee/string.scm 350 */
			{	/* Ieee/string.scm 353 */
				long BgL_l1z00_5813;

				BgL_l1z00_5813 = STRING_LENGTH(BgL_string1z00_21);
				if ((BgL_l1z00_5813 == STRING_LENGTH(BgL_string2z00_22)))
					{	/* Ieee/string.scm 355 */
						int BgL_arg1227z00_5814;

						{	/* Ieee/string.scm 355 */
							char *BgL_auxz00_6021;
							char *BgL_tmpz00_6019;

							BgL_auxz00_6021 = BSTRING_TO_STRING(BgL_string2z00_22);
							BgL_tmpz00_6019 = BSTRING_TO_STRING(BgL_string1z00_21);
							BgL_arg1227z00_5814 =
								memcmp(BgL_tmpz00_6019, BgL_auxz00_6021, BgL_l1z00_5813);
						}
						return ((long) (BgL_arg1227z00_5814) == ((long) 0));
					}
				else
					{	/* Ieee/string.scm 354 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &string=? */
	obj_t BGl_z62stringzd3zf3z42zz__r4_strings_6_7z00(obj_t BgL_envz00_5162,
		obj_t BgL_string1z00_5163, obj_t BgL_string2z00_5164)
	{
		{	/* Ieee/string.scm 350 */
			{	/* Ieee/string.scm 353 */
				bool_t BgL_tmpz00_6026;

				{	/* Ieee/string.scm 353 */
					obj_t BgL_auxz00_6034;
					obj_t BgL_auxz00_6027;

					if (STRINGP(BgL_string2z00_5164))
						{	/* Ieee/string.scm 353 */
							BgL_auxz00_6034 = BgL_string2z00_5164;
						}
					else
						{
							obj_t BgL_auxz00_6037;

							BgL_auxz00_6037 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 17336)),
								BGl_string3487z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string2z00_5164);
							FAILURE(BgL_auxz00_6037, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string1z00_5163))
						{	/* Ieee/string.scm 353 */
							BgL_auxz00_6027 = BgL_string1z00_5163;
						}
					else
						{
							obj_t BgL_auxz00_6030;

							BgL_auxz00_6030 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 17336)),
								BGl_string3487z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string1z00_5163);
							FAILURE(BgL_auxz00_6030, BFALSE, BFALSE);
						}
					BgL_tmpz00_6026 =
						BGl_stringzd3zf3z20zz__r4_strings_6_7z00(BgL_auxz00_6027,
						BgL_auxz00_6034);
				}
				return BBOOL(BgL_tmpz00_6026);
			}
		}

	}



/* substring=? */
	BGL_EXPORTED_DEF bool_t BGl_substringzd3zf3z20zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_23, obj_t BgL_string2z00_24, long BgL_lenz00_25)
	{
		{	/* Ieee/string.scm 362 */
			return
				bigloo_strncmp(BgL_string1z00_23, BgL_string2z00_24, BgL_lenz00_25);
		}

	}



/* &substring=? */
	obj_t BGl_z62substringzd3zf3z42zz__r4_strings_6_7z00(obj_t BgL_envz00_5165,
		obj_t BgL_string1z00_5166, obj_t BgL_string2z00_5167, obj_t BgL_lenz00_5168)
	{
		{	/* Ieee/string.scm 362 */
			{	/* Ieee/string.scm 363 */
				bool_t BgL_tmpz00_6044;

				{	/* Ieee/string.scm 363 */
					long BgL_auxz00_6059;
					obj_t BgL_auxz00_6052;
					obj_t BgL_auxz00_6045;

					{	/* Ieee/string.scm 363 */
						obj_t BgL_tmpz00_6060;

						if (INTEGERP(BgL_lenz00_5168))
							{	/* Ieee/string.scm 363 */
								BgL_tmpz00_6060 = BgL_lenz00_5168;
							}
						else
							{
								obj_t BgL_auxz00_6063;

								BgL_auxz00_6063 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 17785)),
									BGl_string3488z00zz__r4_strings_6_7z00,
									BGl_string3480z00zz__r4_strings_6_7z00, BgL_lenz00_5168);
								FAILURE(BgL_auxz00_6063, BFALSE, BFALSE);
							}
						BgL_auxz00_6059 = (long) CINT(BgL_tmpz00_6060);
					}
					if (STRINGP(BgL_string2z00_5167))
						{	/* Ieee/string.scm 363 */
							BgL_auxz00_6052 = BgL_string2z00_5167;
						}
					else
						{
							obj_t BgL_auxz00_6055;

							BgL_auxz00_6055 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 17785)),
								BGl_string3488z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string2z00_5167);
							FAILURE(BgL_auxz00_6055, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string1z00_5166))
						{	/* Ieee/string.scm 363 */
							BgL_auxz00_6045 = BgL_string1z00_5166;
						}
					else
						{
							obj_t BgL_auxz00_6048;

							BgL_auxz00_6048 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 17785)),
								BGl_string3488z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string1z00_5166);
							FAILURE(BgL_auxz00_6048, BFALSE, BFALSE);
						}
					BgL_tmpz00_6044 =
						BGl_substringzd3zf3z20zz__r4_strings_6_7z00(BgL_auxz00_6045,
						BgL_auxz00_6052, BgL_auxz00_6059);
				}
				return BBOOL(BgL_tmpz00_6044);
			}
		}

	}



/* _substring-at? */
	obj_t BGl__substringzd2atzf3z21zz__r4_strings_6_7z00(obj_t BgL_env1098z00_31,
		obj_t BgL_opt1097z00_30)
	{
		{	/* Ieee/string.scm 368 */
			{	/* Ieee/string.scm 368 */
				obj_t BgL_g1099z00_5815;
				obj_t BgL_g1100z00_5816;
				obj_t BgL_g1101z00_5817;

				BgL_g1099z00_5815 = VECTOR_REF(BgL_opt1097z00_30, ((long) 0));
				BgL_g1100z00_5816 = VECTOR_REF(BgL_opt1097z00_30, ((long) 1));
				BgL_g1101z00_5817 = VECTOR_REF(BgL_opt1097z00_30, ((long) 2));
				switch (VECTOR_LENGTH(BgL_opt1097z00_30))
					{
					case ((long) 3):

						{	/* Ieee/string.scm 368 */

							{	/* Ieee/string.scm 368 */
								bool_t BgL_res2187z00_5818;

								{	/* Ieee/string.scm 368 */
									obj_t BgL_string1z00_5819;
									obj_t BgL_string2z00_5820;
									long BgL_offz00_5821;

									if (STRINGP(BgL_g1099z00_5815))
										{	/* Ieee/string.scm 368 */
											BgL_string1z00_5819 = BgL_g1099z00_5815;
										}
									else
										{
											obj_t BgL_auxz00_6075;

											BgL_auxz00_6075 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 18044)),
												BGl_string3489z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_g1099z00_5815);
											FAILURE(BgL_auxz00_6075, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_g1100z00_5816))
										{	/* Ieee/string.scm 368 */
											BgL_string2z00_5820 = BgL_g1100z00_5816;
										}
									else
										{
											obj_t BgL_auxz00_6081;

											BgL_auxz00_6081 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 18044)),
												BGl_string3489z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_g1100z00_5816);
											FAILURE(BgL_auxz00_6081, BFALSE, BFALSE);
										}
									{	/* Ieee/string.scm 368 */
										obj_t BgL_tmpz00_6085;

										if (INTEGERP(BgL_g1101z00_5817))
											{	/* Ieee/string.scm 368 */
												BgL_tmpz00_6085 = BgL_g1101z00_5817;
											}
										else
											{
												obj_t BgL_auxz00_6088;

												BgL_auxz00_6088 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 18044)),
													BGl_string3489z00zz__r4_strings_6_7z00,
													BGl_string3480z00zz__r4_strings_6_7z00,
													BgL_g1101z00_5817);
												FAILURE(BgL_auxz00_6088, BFALSE, BFALSE);
											}
										BgL_offz00_5821 = (long) CINT(BgL_tmpz00_6085);
									}
									BgL_res2187z00_5818 =
										bigloo_strcmp_at(BgL_string1z00_5819, BgL_string2z00_5820,
										BgL_offz00_5821);
								}
								return BBOOL(BgL_res2187z00_5818);
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/string.scm 368 */
							obj_t BgL_lenz00_5822;

							BgL_lenz00_5822 = VECTOR_REF(BgL_opt1097z00_30, ((long) 3));
							{	/* Ieee/string.scm 368 */

								{	/* Ieee/string.scm 368 */
									bool_t BgL_res2189z00_5823;

									{	/* Ieee/string.scm 368 */
										obj_t BgL_string1z00_5824;
										obj_t BgL_string2z00_5825;
										long BgL_offz00_5826;

										if (STRINGP(BgL_g1099z00_5815))
											{	/* Ieee/string.scm 368 */
												BgL_string1z00_5824 = BgL_g1099z00_5815;
											}
										else
											{
												obj_t BgL_auxz00_6098;

												BgL_auxz00_6098 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 18044)),
													BGl_string3489z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_g1099z00_5815);
												FAILURE(BgL_auxz00_6098, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_g1100z00_5816))
											{	/* Ieee/string.scm 368 */
												BgL_string2z00_5825 = BgL_g1100z00_5816;
											}
										else
											{
												obj_t BgL_auxz00_6104;

												BgL_auxz00_6104 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 18044)),
													BGl_string3489z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_g1100z00_5816);
												FAILURE(BgL_auxz00_6104, BFALSE, BFALSE);
											}
										{	/* Ieee/string.scm 368 */
											obj_t BgL_tmpz00_6108;

											if (INTEGERP(BgL_g1101z00_5817))
												{	/* Ieee/string.scm 368 */
													BgL_tmpz00_6108 = BgL_g1101z00_5817;
												}
											else
												{
													obj_t BgL_auxz00_6111;

													BgL_auxz00_6111 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 18044)),
														BGl_string3489z00zz__r4_strings_6_7z00,
														BGl_string3480z00zz__r4_strings_6_7z00,
														BgL_g1101z00_5817);
													FAILURE(BgL_auxz00_6111, BFALSE, BFALSE);
												}
											BgL_offz00_5826 = (long) CINT(BgL_tmpz00_6108);
										}
										{	/* Ieee/string.scm 369 */
											bool_t BgL_test3820z00_6116;

											{	/* Ieee/string.scm 369 */
												long BgL_n1z00_5827;

												{	/* Ieee/string.scm 369 */
													obj_t BgL_tmpz00_6117;

													if (INTEGERP(BgL_lenz00_5822))
														{	/* Ieee/string.scm 369 */
															BgL_tmpz00_6117 = BgL_lenz00_5822;
														}
													else
														{
															obj_t BgL_auxz00_6120;

															BgL_auxz00_6120 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 18127)),
																BGl_string3489z00zz__r4_strings_6_7z00,
																BGl_string3480z00zz__r4_strings_6_7z00,
																BgL_lenz00_5822);
															FAILURE(BgL_auxz00_6120, BFALSE, BFALSE);
														}
													BgL_n1z00_5827 = (long) CINT(BgL_tmpz00_6117);
												}
												BgL_test3820z00_6116 = (BgL_n1z00_5827 == ((long) -1));
											}
											if (BgL_test3820z00_6116)
												{	/* Ieee/string.scm 369 */
													BgL_res2189z00_5823 =
														bigloo_strcmp_at(BgL_string1z00_5824,
														BgL_string2z00_5825, BgL_offz00_5826);
												}
											else
												{	/* Ieee/string.scm 371 */
													long BgL_tmpz00_6127;

													{	/* Ieee/string.scm 371 */
														obj_t BgL_tmpz00_6128;

														if (INTEGERP(BgL_lenz00_5822))
															{	/* Ieee/string.scm 371 */
																BgL_tmpz00_6128 = BgL_lenz00_5822;
															}
														else
															{
																obj_t BgL_auxz00_6131;

																BgL_auxz00_6131 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3476z00zz__r4_strings_6_7z00,
																	BINT(((long) 18219)),
																	BGl_string3489z00zz__r4_strings_6_7z00,
																	BGl_string3480z00zz__r4_strings_6_7z00,
																	BgL_lenz00_5822);
																FAILURE(BgL_auxz00_6131, BFALSE, BFALSE);
															}
														BgL_tmpz00_6127 = (long) CINT(BgL_tmpz00_6128);
													}
													BgL_res2189z00_5823 =
														bigloo_strncmp_at(BgL_string1z00_5824,
														BgL_string2z00_5825, BgL_offz00_5826,
														BgL_tmpz00_6127);
									}}}
									return BBOOL(BgL_res2189z00_5823);
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



/* substring-at? */
	BGL_EXPORTED_DEF bool_t BGl_substringzd2atzf3z21zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_26, obj_t BgL_string2z00_27, long BgL_offz00_28,
		obj_t BgL_lenz00_29)
	{
		{	/* Ieee/string.scm 368 */
			if (((long) CINT(BgL_lenz00_29) == ((long) -1)))
				{	/* Ieee/string.scm 369 */
					return
						bigloo_strcmp_at(BgL_string1z00_26, BgL_string2z00_27,
						BgL_offz00_28);
				}
			else
				{	/* Ieee/string.scm 369 */
					return
						bigloo_strncmp_at(BgL_string1z00_26, BgL_string2z00_27,
						BgL_offz00_28, (long) CINT(BgL_lenz00_29));
		}}

	}



/* substring-ci=? */
	BGL_EXPORTED_DEF bool_t BGl_substringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_32, obj_t BgL_string2z00_33, long BgL_lenz00_34)
	{
		{	/* Ieee/string.scm 376 */
			return
				bigloo_strncmp_ci(BgL_string1z00_32, BgL_string2z00_33, BgL_lenz00_34);
		}

	}



/* &substring-ci=? */
	obj_t BGl_z62substringzd2cizd3zf3z90zz__r4_strings_6_7z00(obj_t
		BgL_envz00_5169, obj_t BgL_string1z00_5170, obj_t BgL_string2z00_5171,
		obj_t BgL_lenz00_5172)
	{
		{	/* Ieee/string.scm 376 */
			{	/* Ieee/string.scm 377 */
				bool_t BgL_tmpz00_6147;

				{	/* Ieee/string.scm 377 */
					long BgL_auxz00_6162;
					obj_t BgL_auxz00_6155;
					obj_t BgL_auxz00_6148;

					{	/* Ieee/string.scm 377 */
						obj_t BgL_tmpz00_6163;

						if (INTEGERP(BgL_lenz00_5172))
							{	/* Ieee/string.scm 377 */
								BgL_tmpz00_6163 = BgL_lenz00_5172;
							}
						else
							{
								obj_t BgL_auxz00_6166;

								BgL_auxz00_6166 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 18504)),
									BGl_string3490z00zz__r4_strings_6_7z00,
									BGl_string3480z00zz__r4_strings_6_7z00, BgL_lenz00_5172);
								FAILURE(BgL_auxz00_6166, BFALSE, BFALSE);
							}
						BgL_auxz00_6162 = (long) CINT(BgL_tmpz00_6163);
					}
					if (STRINGP(BgL_string2z00_5171))
						{	/* Ieee/string.scm 377 */
							BgL_auxz00_6155 = BgL_string2z00_5171;
						}
					else
						{
							obj_t BgL_auxz00_6158;

							BgL_auxz00_6158 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 18504)),
								BGl_string3490z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string2z00_5171);
							FAILURE(BgL_auxz00_6158, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string1z00_5170))
						{	/* Ieee/string.scm 377 */
							BgL_auxz00_6148 = BgL_string1z00_5170;
						}
					else
						{
							obj_t BgL_auxz00_6151;

							BgL_auxz00_6151 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 18504)),
								BGl_string3490z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string1z00_5170);
							FAILURE(BgL_auxz00_6151, BFALSE, BFALSE);
						}
					BgL_tmpz00_6147 =
						BGl_substringzd2cizd3zf3zf2zz__r4_strings_6_7z00(BgL_auxz00_6148,
						BgL_auxz00_6155, BgL_auxz00_6162);
				}
				return BBOOL(BgL_tmpz00_6147);
			}
		}

	}



/* _substring-ci-at? */
	obj_t BGl__substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00(obj_t
		BgL_env1105z00_40, obj_t BgL_opt1104z00_39)
	{
		{	/* Ieee/string.scm 382 */
			{	/* Ieee/string.scm 382 */
				obj_t BgL_g1106z00_5828;
				obj_t BgL_g1107z00_5829;
				obj_t BgL_g1108z00_5830;

				BgL_g1106z00_5828 = VECTOR_REF(BgL_opt1104z00_39, ((long) 0));
				BgL_g1107z00_5829 = VECTOR_REF(BgL_opt1104z00_39, ((long) 1));
				BgL_g1108z00_5830 = VECTOR_REF(BgL_opt1104z00_39, ((long) 2));
				switch (VECTOR_LENGTH(BgL_opt1104z00_39))
					{
					case ((long) 3):

						{	/* Ieee/string.scm 382 */

							{	/* Ieee/string.scm 382 */
								bool_t BgL_res2192z00_5831;

								{	/* Ieee/string.scm 382 */
									obj_t BgL_string1z00_5832;
									obj_t BgL_string2z00_5833;
									long BgL_offz00_5834;

									if (STRINGP(BgL_g1106z00_5828))
										{	/* Ieee/string.scm 382 */
											BgL_string1z00_5832 = BgL_g1106z00_5828;
										}
									else
										{
											obj_t BgL_auxz00_6178;

											BgL_auxz00_6178 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 18766)),
												BGl_string3491z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_g1106z00_5828);
											FAILURE(BgL_auxz00_6178, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_g1107z00_5829))
										{	/* Ieee/string.scm 382 */
											BgL_string2z00_5833 = BgL_g1107z00_5829;
										}
									else
										{
											obj_t BgL_auxz00_6184;

											BgL_auxz00_6184 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 18766)),
												BGl_string3491z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_g1107z00_5829);
											FAILURE(BgL_auxz00_6184, BFALSE, BFALSE);
										}
									{	/* Ieee/string.scm 382 */
										obj_t BgL_tmpz00_6188;

										if (INTEGERP(BgL_g1108z00_5830))
											{	/* Ieee/string.scm 382 */
												BgL_tmpz00_6188 = BgL_g1108z00_5830;
											}
										else
											{
												obj_t BgL_auxz00_6191;

												BgL_auxz00_6191 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 18766)),
													BGl_string3491z00zz__r4_strings_6_7z00,
													BGl_string3480z00zz__r4_strings_6_7z00,
													BgL_g1108z00_5830);
												FAILURE(BgL_auxz00_6191, BFALSE, BFALSE);
											}
										BgL_offz00_5834 = (long) CINT(BgL_tmpz00_6188);
									}
									BgL_res2192z00_5831 =
										bigloo_strcmp_ci_at(BgL_string1z00_5832,
										BgL_string2z00_5833, BgL_offz00_5834);
								}
								return BBOOL(BgL_res2192z00_5831);
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/string.scm 382 */
							obj_t BgL_lenz00_5835;

							BgL_lenz00_5835 = VECTOR_REF(BgL_opt1104z00_39, ((long) 3));
							{	/* Ieee/string.scm 382 */

								{	/* Ieee/string.scm 382 */
									bool_t BgL_res2194z00_5836;

									{	/* Ieee/string.scm 382 */
										obj_t BgL_string1z00_5837;
										obj_t BgL_string2z00_5838;
										long BgL_offz00_5839;

										if (STRINGP(BgL_g1106z00_5828))
											{	/* Ieee/string.scm 382 */
												BgL_string1z00_5837 = BgL_g1106z00_5828;
											}
										else
											{
												obj_t BgL_auxz00_6201;

												BgL_auxz00_6201 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 18766)),
													BGl_string3491z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_g1106z00_5828);
												FAILURE(BgL_auxz00_6201, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_g1107z00_5829))
											{	/* Ieee/string.scm 382 */
												BgL_string2z00_5838 = BgL_g1107z00_5829;
											}
										else
											{
												obj_t BgL_auxz00_6207;

												BgL_auxz00_6207 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 18766)),
													BGl_string3491z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_g1107z00_5829);
												FAILURE(BgL_auxz00_6207, BFALSE, BFALSE);
											}
										{	/* Ieee/string.scm 382 */
											obj_t BgL_tmpz00_6211;

											if (INTEGERP(BgL_g1108z00_5830))
												{	/* Ieee/string.scm 382 */
													BgL_tmpz00_6211 = BgL_g1108z00_5830;
												}
											else
												{
													obj_t BgL_auxz00_6214;

													BgL_auxz00_6214 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 18766)),
														BGl_string3491z00zz__r4_strings_6_7z00,
														BGl_string3480z00zz__r4_strings_6_7z00,
														BgL_g1108z00_5830);
													FAILURE(BgL_auxz00_6214, BFALSE, BFALSE);
												}
											BgL_offz00_5839 = (long) CINT(BgL_tmpz00_6211);
										}
										{	/* Ieee/string.scm 383 */
											bool_t BgL_test3833z00_6219;

											{	/* Ieee/string.scm 383 */
												long BgL_n1z00_5840;

												{	/* Ieee/string.scm 383 */
													obj_t BgL_tmpz00_6220;

													if (INTEGERP(BgL_lenz00_5835))
														{	/* Ieee/string.scm 383 */
															BgL_tmpz00_6220 = BgL_lenz00_5835;
														}
													else
														{
															obj_t BgL_auxz00_6223;

															BgL_auxz00_6223 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 18852)),
																BGl_string3491z00zz__r4_strings_6_7z00,
																BGl_string3480z00zz__r4_strings_6_7z00,
																BgL_lenz00_5835);
															FAILURE(BgL_auxz00_6223, BFALSE, BFALSE);
														}
													BgL_n1z00_5840 = (long) CINT(BgL_tmpz00_6220);
												}
												BgL_test3833z00_6219 = (BgL_n1z00_5840 == ((long) -1));
											}
											if (BgL_test3833z00_6219)
												{	/* Ieee/string.scm 383 */
													BgL_res2194z00_5836 =
														bigloo_strcmp_ci_at(BgL_string1z00_5837,
														BgL_string2z00_5838, BgL_offz00_5839);
												}
											else
												{	/* Ieee/string.scm 385 */
													long BgL_tmpz00_6230;

													{	/* Ieee/string.scm 385 */
														obj_t BgL_tmpz00_6231;

														if (INTEGERP(BgL_lenz00_5835))
															{	/* Ieee/string.scm 385 */
																BgL_tmpz00_6231 = BgL_lenz00_5835;
															}
														else
															{
																obj_t BgL_auxz00_6234;

																BgL_auxz00_6234 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3476z00zz__r4_strings_6_7z00,
																	BINT(((long) 18950)),
																	BGl_string3491z00zz__r4_strings_6_7z00,
																	BGl_string3480z00zz__r4_strings_6_7z00,
																	BgL_lenz00_5835);
																FAILURE(BgL_auxz00_6234, BFALSE, BFALSE);
															}
														BgL_tmpz00_6230 = (long) CINT(BgL_tmpz00_6231);
													}
													BgL_res2194z00_5836 =
														bigloo_strncmp_ci_at(BgL_string1z00_5837,
														BgL_string2z00_5838, BgL_offz00_5839,
														BgL_tmpz00_6230);
									}}}
									return BBOOL(BgL_res2194z00_5836);
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



/* substring-ci-at? */
	BGL_EXPORTED_DEF bool_t
		BGl_substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00(obj_t BgL_string1z00_35,
		obj_t BgL_string2z00_36, long BgL_offz00_37, obj_t BgL_lenz00_38)
	{
		{	/* Ieee/string.scm 382 */
			if (((long) CINT(BgL_lenz00_38) == ((long) -1)))
				{	/* Ieee/string.scm 383 */
					return
						bigloo_strcmp_ci_at(BgL_string1z00_35, BgL_string2z00_36,
						BgL_offz00_37);
				}
			else
				{	/* Ieee/string.scm 383 */
					return
						bigloo_strncmp_ci_at(BgL_string1z00_35, BgL_string2z00_36,
						BgL_offz00_37, (long) CINT(BgL_lenz00_38));
		}}

	}



/* empty-string? */
	BGL_EXPORTED_DEF bool_t BGl_emptyzd2stringzf3z21zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_41)
	{
		{	/* Ieee/string.scm 390 */
			return (STRING_LENGTH(BgL_stringz00_41) == ((long) 0));
		}

	}



/* &empty-string? */
	obj_t BGl_z62emptyzd2stringzf3z43zz__r4_strings_6_7z00(obj_t BgL_envz00_5173,
		obj_t BgL_stringz00_5174)
	{
		{	/* Ieee/string.scm 390 */
			{	/* Ieee/string.scm 391 */
				bool_t BgL_tmpz00_6251;

				{	/* Ieee/string.scm 391 */
					obj_t BgL_auxz00_6252;

					if (STRINGP(BgL_stringz00_5174))
						{	/* Ieee/string.scm 391 */
							BgL_auxz00_6252 = BgL_stringz00_5174;
						}
					else
						{
							obj_t BgL_auxz00_6255;

							BgL_auxz00_6255 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 19226)),
								BGl_string3492z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5174);
							FAILURE(BgL_auxz00_6255, BFALSE, BFALSE);
						}
					BgL_tmpz00_6251 =
						BGl_emptyzd2stringzf3z21zz__r4_strings_6_7z00(BgL_auxz00_6252);
				}
				return BBOOL(BgL_tmpz00_6251);
			}
		}

	}



/* string-ci=? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_42, obj_t BgL_string2z00_43)
	{
		{	/* Ieee/string.scm 396 */
			return bigloo_strcicmp(BgL_string1z00_42, BgL_string2z00_43);
		}

	}



/* &string-ci=? */
	obj_t BGl_z62stringzd2cizd3zf3z90zz__r4_strings_6_7z00(obj_t BgL_envz00_5175,
		obj_t BgL_string1z00_5176, obj_t BgL_string2z00_5177)
	{
		{	/* Ieee/string.scm 396 */
			{	/* Ieee/string.scm 397 */
				bool_t BgL_tmpz00_6262;

				{	/* Ieee/string.scm 397 */
					obj_t BgL_auxz00_6270;
					obj_t BgL_auxz00_6263;

					if (STRINGP(BgL_string2z00_5177))
						{	/* Ieee/string.scm 397 */
							BgL_auxz00_6270 = BgL_string2z00_5177;
						}
					else
						{
							obj_t BgL_auxz00_6273;

							BgL_auxz00_6273 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 19524)),
								BGl_string3493z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string2z00_5177);
							FAILURE(BgL_auxz00_6273, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string1z00_5176))
						{	/* Ieee/string.scm 397 */
							BgL_auxz00_6263 = BgL_string1z00_5176;
						}
					else
						{
							obj_t BgL_auxz00_6266;

							BgL_auxz00_6266 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 19524)),
								BGl_string3493z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string1z00_5176);
							FAILURE(BgL_auxz00_6266, BFALSE, BFALSE);
						}
					BgL_tmpz00_6262 =
						BGl_stringzd2cizd3zf3zf2zz__r4_strings_6_7z00(BgL_auxz00_6263,
						BgL_auxz00_6270);
				}
				return BBOOL(BgL_tmpz00_6262);
			}
		}

	}



/* string<? */
	BGL_EXPORTED_DEF bool_t BGl_stringzc3zf3z30zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_44, obj_t BgL_string2z00_45)
	{
		{	/* Ieee/string.scm 402 */
			return bigloo_string_lt(BgL_string1z00_44, BgL_string2z00_45);
		}

	}



/* &string<? */
	obj_t BGl_z62stringzc3zf3z52zz__r4_strings_6_7z00(obj_t BgL_envz00_5178,
		obj_t BgL_string1z00_5179, obj_t BgL_string2z00_5180)
	{
		{	/* Ieee/string.scm 402 */
			{	/* Ieee/string.scm 403 */
				bool_t BgL_tmpz00_6280;

				{	/* Ieee/string.scm 403 */
					obj_t BgL_auxz00_6288;
					obj_t BgL_auxz00_6281;

					if (STRINGP(BgL_string2z00_5180))
						{	/* Ieee/string.scm 403 */
							BgL_auxz00_6288 = BgL_string2z00_5180;
						}
					else
						{
							obj_t BgL_auxz00_6291;

							BgL_auxz00_6291 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 19821)),
								BGl_string3494z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string2z00_5180);
							FAILURE(BgL_auxz00_6291, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string1z00_5179))
						{	/* Ieee/string.scm 403 */
							BgL_auxz00_6281 = BgL_string1z00_5179;
						}
					else
						{
							obj_t BgL_auxz00_6284;

							BgL_auxz00_6284 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 19821)),
								BGl_string3494z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string1z00_5179);
							FAILURE(BgL_auxz00_6284, BFALSE, BFALSE);
						}
					BgL_tmpz00_6280 =
						BGl_stringzc3zf3z30zz__r4_strings_6_7z00(BgL_auxz00_6281,
						BgL_auxz00_6288);
				}
				return BBOOL(BgL_tmpz00_6280);
			}
		}

	}



/* string>? */
	BGL_EXPORTED_DEF bool_t BGl_stringze3zf3z10zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_46, obj_t BgL_string2z00_47)
	{
		{	/* Ieee/string.scm 408 */
			return bigloo_string_gt(BgL_string1z00_46, BgL_string2z00_47);
		}

	}



/* &string>? */
	obj_t BGl_z62stringze3zf3z72zz__r4_strings_6_7z00(obj_t BgL_envz00_5181,
		obj_t BgL_string1z00_5182, obj_t BgL_string2z00_5183)
	{
		{	/* Ieee/string.scm 408 */
			{	/* Ieee/string.scm 409 */
				bool_t BgL_tmpz00_6298;

				{	/* Ieee/string.scm 409 */
					obj_t BgL_auxz00_6306;
					obj_t BgL_auxz00_6299;

					if (STRINGP(BgL_string2z00_5183))
						{	/* Ieee/string.scm 409 */
							BgL_auxz00_6306 = BgL_string2z00_5183;
						}
					else
						{
							obj_t BgL_auxz00_6309;

							BgL_auxz00_6309 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 20119)),
								BGl_string3495z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string2z00_5183);
							FAILURE(BgL_auxz00_6309, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string1z00_5182))
						{	/* Ieee/string.scm 409 */
							BgL_auxz00_6299 = BgL_string1z00_5182;
						}
					else
						{
							obj_t BgL_auxz00_6302;

							BgL_auxz00_6302 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 20119)),
								BGl_string3495z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string1z00_5182);
							FAILURE(BgL_auxz00_6302, BFALSE, BFALSE);
						}
					BgL_tmpz00_6298 =
						BGl_stringze3zf3z10zz__r4_strings_6_7z00(BgL_auxz00_6299,
						BgL_auxz00_6306);
				}
				return BBOOL(BgL_tmpz00_6298);
			}
		}

	}



/* string<=? */
	BGL_EXPORTED_DEF bool_t BGl_stringzc3zd3zf3ze3zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_48, obj_t BgL_string2z00_49)
	{
		{	/* Ieee/string.scm 414 */
			return bigloo_string_le(BgL_string1z00_48, BgL_string2z00_49);
		}

	}



/* &string<=? */
	obj_t BGl_z62stringzc3zd3zf3z81zz__r4_strings_6_7z00(obj_t BgL_envz00_5184,
		obj_t BgL_string1z00_5185, obj_t BgL_string2z00_5186)
	{
		{	/* Ieee/string.scm 414 */
			{	/* Ieee/string.scm 415 */
				bool_t BgL_tmpz00_6316;

				{	/* Ieee/string.scm 415 */
					obj_t BgL_auxz00_6324;
					obj_t BgL_auxz00_6317;

					if (STRINGP(BgL_string2z00_5186))
						{	/* Ieee/string.scm 415 */
							BgL_auxz00_6324 = BgL_string2z00_5186;
						}
					else
						{
							obj_t BgL_auxz00_6327;

							BgL_auxz00_6327 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 20418)),
								BGl_string3496z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string2z00_5186);
							FAILURE(BgL_auxz00_6327, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string1z00_5185))
						{	/* Ieee/string.scm 415 */
							BgL_auxz00_6317 = BgL_string1z00_5185;
						}
					else
						{
							obj_t BgL_auxz00_6320;

							BgL_auxz00_6320 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 20418)),
								BGl_string3496z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string1z00_5185);
							FAILURE(BgL_auxz00_6320, BFALSE, BFALSE);
						}
					BgL_tmpz00_6316 =
						BGl_stringzc3zd3zf3ze3zz__r4_strings_6_7z00(BgL_auxz00_6317,
						BgL_auxz00_6324);
				}
				return BBOOL(BgL_tmpz00_6316);
			}
		}

	}



/* string>=? */
	BGL_EXPORTED_DEF bool_t BGl_stringze3zd3zf3zc3zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_50, obj_t BgL_string2z00_51)
	{
		{	/* Ieee/string.scm 420 */
			return bigloo_string_ge(BgL_string1z00_50, BgL_string2z00_51);
		}

	}



/* &string>=? */
	obj_t BGl_z62stringze3zd3zf3za1zz__r4_strings_6_7z00(obj_t BgL_envz00_5187,
		obj_t BgL_string1z00_5188, obj_t BgL_string2z00_5189)
	{
		{	/* Ieee/string.scm 420 */
			{	/* Ieee/string.scm 421 */
				bool_t BgL_tmpz00_6334;

				{	/* Ieee/string.scm 421 */
					obj_t BgL_auxz00_6342;
					obj_t BgL_auxz00_6335;

					if (STRINGP(BgL_string2z00_5189))
						{	/* Ieee/string.scm 421 */
							BgL_auxz00_6342 = BgL_string2z00_5189;
						}
					else
						{
							obj_t BgL_auxz00_6345;

							BgL_auxz00_6345 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 20717)),
								BGl_string3497z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string2z00_5189);
							FAILURE(BgL_auxz00_6345, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string1z00_5188))
						{	/* Ieee/string.scm 421 */
							BgL_auxz00_6335 = BgL_string1z00_5188;
						}
					else
						{
							obj_t BgL_auxz00_6338;

							BgL_auxz00_6338 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 20717)),
								BGl_string3497z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string1z00_5188);
							FAILURE(BgL_auxz00_6338, BFALSE, BFALSE);
						}
					BgL_tmpz00_6334 =
						BGl_stringze3zd3zf3zc3zz__r4_strings_6_7z00(BgL_auxz00_6335,
						BgL_auxz00_6342);
				}
				return BBOOL(BgL_tmpz00_6334);
			}
		}

	}



/* string-ci<? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2cizc3zf3ze2zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_52, obj_t BgL_string2z00_53)
	{
		{	/* Ieee/string.scm 426 */
			return bigloo_string_cilt(BgL_string1z00_52, BgL_string2z00_53);
		}

	}



/* &string-ci<? */
	obj_t BGl_z62stringzd2cizc3zf3z80zz__r4_strings_6_7z00(obj_t BgL_envz00_5190,
		obj_t BgL_string1z00_5191, obj_t BgL_string2z00_5192)
	{
		{	/* Ieee/string.scm 426 */
			{	/* Ieee/string.scm 427 */
				bool_t BgL_tmpz00_6352;

				{	/* Ieee/string.scm 427 */
					obj_t BgL_auxz00_6360;
					obj_t BgL_auxz00_6353;

					if (STRINGP(BgL_string2z00_5192))
						{	/* Ieee/string.scm 427 */
							BgL_auxz00_6360 = BgL_string2z00_5192;
						}
					else
						{
							obj_t BgL_auxz00_6363;

							BgL_auxz00_6363 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 21018)),
								BGl_string3498z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string2z00_5192);
							FAILURE(BgL_auxz00_6363, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string1z00_5191))
						{	/* Ieee/string.scm 427 */
							BgL_auxz00_6353 = BgL_string1z00_5191;
						}
					else
						{
							obj_t BgL_auxz00_6356;

							BgL_auxz00_6356 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 21018)),
								BGl_string3498z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string1z00_5191);
							FAILURE(BgL_auxz00_6356, BFALSE, BFALSE);
						}
					BgL_tmpz00_6352 =
						BGl_stringzd2cizc3zf3ze2zz__r4_strings_6_7z00(BgL_auxz00_6353,
						BgL_auxz00_6360);
				}
				return BBOOL(BgL_tmpz00_6352);
			}
		}

	}



/* string-ci>? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2cize3zf3zc2zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_54, obj_t BgL_string2z00_55)
	{
		{	/* Ieee/string.scm 432 */
			return bigloo_string_cigt(BgL_string1z00_54, BgL_string2z00_55);
		}

	}



/* &string-ci>? */
	obj_t BGl_z62stringzd2cize3zf3za0zz__r4_strings_6_7z00(obj_t BgL_envz00_5193,
		obj_t BgL_string1z00_5194, obj_t BgL_string2z00_5195)
	{
		{	/* Ieee/string.scm 432 */
			{	/* Ieee/string.scm 433 */
				bool_t BgL_tmpz00_6370;

				{	/* Ieee/string.scm 433 */
					obj_t BgL_auxz00_6378;
					obj_t BgL_auxz00_6371;

					if (STRINGP(BgL_string2z00_5195))
						{	/* Ieee/string.scm 433 */
							BgL_auxz00_6378 = BgL_string2z00_5195;
						}
					else
						{
							obj_t BgL_auxz00_6381;

							BgL_auxz00_6381 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 21321)),
								BGl_string3499z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string2z00_5195);
							FAILURE(BgL_auxz00_6381, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string1z00_5194))
						{	/* Ieee/string.scm 433 */
							BgL_auxz00_6371 = BgL_string1z00_5194;
						}
					else
						{
							obj_t BgL_auxz00_6374;

							BgL_auxz00_6374 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 21321)),
								BGl_string3499z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string1z00_5194);
							FAILURE(BgL_auxz00_6374, BFALSE, BFALSE);
						}
					BgL_tmpz00_6370 =
						BGl_stringzd2cize3zf3zc2zz__r4_strings_6_7z00(BgL_auxz00_6371,
						BgL_auxz00_6378);
				}
				return BBOOL(BgL_tmpz00_6370);
			}
		}

	}



/* string-ci<=? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2cizc3zd3zf3z31zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_56, obj_t BgL_string2z00_57)
	{
		{	/* Ieee/string.scm 438 */
			return bigloo_string_cile(BgL_string1z00_56, BgL_string2z00_57);
		}

	}



/* &string-ci<=? */
	obj_t BGl_z62stringzd2cizc3zd3zf3z53zz__r4_strings_6_7z00(obj_t
		BgL_envz00_5196, obj_t BgL_string1z00_5197, obj_t BgL_string2z00_5198)
	{
		{	/* Ieee/string.scm 438 */
			{	/* Ieee/string.scm 439 */
				bool_t BgL_tmpz00_6388;

				{	/* Ieee/string.scm 439 */
					obj_t BgL_auxz00_6396;
					obj_t BgL_auxz00_6389;

					if (STRINGP(BgL_string2z00_5198))
						{	/* Ieee/string.scm 439 */
							BgL_auxz00_6396 = BgL_string2z00_5198;
						}
					else
						{
							obj_t BgL_auxz00_6399;

							BgL_auxz00_6399 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 21625)),
								BGl_string3500z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string2z00_5198);
							FAILURE(BgL_auxz00_6399, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string1z00_5197))
						{	/* Ieee/string.scm 439 */
							BgL_auxz00_6389 = BgL_string1z00_5197;
						}
					else
						{
							obj_t BgL_auxz00_6392;

							BgL_auxz00_6392 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 21625)),
								BGl_string3500z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string1z00_5197);
							FAILURE(BgL_auxz00_6392, BFALSE, BFALSE);
						}
					BgL_tmpz00_6388 =
						BGl_stringzd2cizc3zd3zf3z31zz__r4_strings_6_7z00(BgL_auxz00_6389,
						BgL_auxz00_6396);
				}
				return BBOOL(BgL_tmpz00_6388);
			}
		}

	}



/* string-ci>=? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2cize3zd3zf3z11zz__r4_strings_6_7z00(obj_t
		BgL_string1z00_58, obj_t BgL_string2z00_59)
	{
		{	/* Ieee/string.scm 444 */
			return bigloo_string_cige(BgL_string1z00_58, BgL_string2z00_59);
		}

	}



/* &string-ci>=? */
	obj_t BGl_z62stringzd2cize3zd3zf3z73zz__r4_strings_6_7z00(obj_t
		BgL_envz00_5199, obj_t BgL_string1z00_5200, obj_t BgL_string2z00_5201)
	{
		{	/* Ieee/string.scm 444 */
			{	/* Ieee/string.scm 445 */
				bool_t BgL_tmpz00_6406;

				{	/* Ieee/string.scm 445 */
					obj_t BgL_auxz00_6414;
					obj_t BgL_auxz00_6407;

					if (STRINGP(BgL_string2z00_5201))
						{	/* Ieee/string.scm 445 */
							BgL_auxz00_6414 = BgL_string2z00_5201;
						}
					else
						{
							obj_t BgL_auxz00_6417;

							BgL_auxz00_6417 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 21929)),
								BGl_string3501z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string2z00_5201);
							FAILURE(BgL_auxz00_6417, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_string1z00_5200))
						{	/* Ieee/string.scm 445 */
							BgL_auxz00_6407 = BgL_string1z00_5200;
						}
					else
						{
							obj_t BgL_auxz00_6410;

							BgL_auxz00_6410 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 21929)),
								BGl_string3501z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_string1z00_5200);
							FAILURE(BgL_auxz00_6410, BFALSE, BFALSE);
						}
					BgL_tmpz00_6406 =
						BGl_stringzd2cize3zd3zf3z11zz__r4_strings_6_7z00(BgL_auxz00_6407,
						BgL_auxz00_6414);
				}
				return BBOOL(BgL_tmpz00_6406);
			}
		}

	}



/* _substring */
	obj_t BGl__substringz00zz__r4_strings_6_7z00(obj_t BgL_env1112z00_64,
		obj_t BgL_opt1111z00_63)
	{
		{	/* Ieee/string.scm 450 */
			{	/* Ieee/string.scm 450 */
				obj_t BgL_stringz00_952;
				obj_t BgL_g1113z00_953;

				BgL_stringz00_952 = VECTOR_REF(BgL_opt1111z00_63, ((long) 0));
				BgL_g1113z00_953 = VECTOR_REF(BgL_opt1111z00_63, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1111z00_63))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 450 */
							long BgL_endz00_957;

							{	/* Ieee/string.scm 450 */
								obj_t BgL_stringz00_2636;

								if (STRINGP(BgL_stringz00_952))
									{	/* Ieee/string.scm 450 */
										BgL_stringz00_2636 = BgL_stringz00_952;
									}
								else
									{
										obj_t BgL_auxz00_6427;

										BgL_auxz00_6427 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3476z00zz__r4_strings_6_7z00,
											BINT(((long) 22238)),
											BGl_string3502z00zz__r4_strings_6_7z00,
											BGl_string3478z00zz__r4_strings_6_7z00,
											BgL_stringz00_952);
										FAILURE(BgL_auxz00_6427, BFALSE, BFALSE);
									}
								BgL_endz00_957 = STRING_LENGTH(BgL_stringz00_2636);
							}
							{	/* Ieee/string.scm 450 */

								{	/* Ieee/string.scm 450 */
									long BgL_auxz00_6439;
									obj_t BgL_auxz00_6432;

									{	/* Ieee/string.scm 450 */
										obj_t BgL_tmpz00_6440;

										if (INTEGERP(BgL_g1113z00_953))
											{	/* Ieee/string.scm 450 */
												BgL_tmpz00_6440 = BgL_g1113z00_953;
											}
										else
											{
												obj_t BgL_auxz00_6443;

												BgL_auxz00_6443 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 22184)),
													BGl_string3502z00zz__r4_strings_6_7z00,
													BGl_string3480z00zz__r4_strings_6_7z00,
													BgL_g1113z00_953);
												FAILURE(BgL_auxz00_6443, BFALSE, BFALSE);
											}
										BgL_auxz00_6439 = (long) CINT(BgL_tmpz00_6440);
									}
									if (STRINGP(BgL_stringz00_952))
										{	/* Ieee/string.scm 450 */
											BgL_auxz00_6432 = BgL_stringz00_952;
										}
									else
										{
											obj_t BgL_auxz00_6435;

											BgL_auxz00_6435 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 22184)),
												BGl_string3502z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_stringz00_952);
											FAILURE(BgL_auxz00_6435, BFALSE, BFALSE);
										}
									return
										BGl_substringz00zz__r4_strings_6_7z00(BgL_auxz00_6432,
										BgL_auxz00_6439, BgL_endz00_957);
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/string.scm 450 */
							obj_t BgL_endz00_958;

							BgL_endz00_958 = VECTOR_REF(BgL_opt1111z00_63, ((long) 2));
							{	/* Ieee/string.scm 450 */

								{	/* Ieee/string.scm 450 */
									long BgL_auxz00_6466;
									long BgL_auxz00_6457;
									obj_t BgL_auxz00_6450;

									{	/* Ieee/string.scm 450 */
										obj_t BgL_tmpz00_6467;

										if (INTEGERP(BgL_endz00_958))
											{	/* Ieee/string.scm 450 */
												BgL_tmpz00_6467 = BgL_endz00_958;
											}
										else
											{
												obj_t BgL_auxz00_6470;

												BgL_auxz00_6470 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 22184)),
													BGl_string3502z00zz__r4_strings_6_7z00,
													BGl_string3480z00zz__r4_strings_6_7z00,
													BgL_endz00_958);
												FAILURE(BgL_auxz00_6470, BFALSE, BFALSE);
											}
										BgL_auxz00_6466 = (long) CINT(BgL_tmpz00_6467);
									}
									{	/* Ieee/string.scm 450 */
										obj_t BgL_tmpz00_6458;

										if (INTEGERP(BgL_g1113z00_953))
											{	/* Ieee/string.scm 450 */
												BgL_tmpz00_6458 = BgL_g1113z00_953;
											}
										else
											{
												obj_t BgL_auxz00_6461;

												BgL_auxz00_6461 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 22184)),
													BGl_string3502z00zz__r4_strings_6_7z00,
													BGl_string3480z00zz__r4_strings_6_7z00,
													BgL_g1113z00_953);
												FAILURE(BgL_auxz00_6461, BFALSE, BFALSE);
											}
										BgL_auxz00_6457 = (long) CINT(BgL_tmpz00_6458);
									}
									if (STRINGP(BgL_stringz00_952))
										{	/* Ieee/string.scm 450 */
											BgL_auxz00_6450 = BgL_stringz00_952;
										}
									else
										{
											obj_t BgL_auxz00_6453;

											BgL_auxz00_6453 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 22184)),
												BGl_string3502z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_stringz00_952);
											FAILURE(BgL_auxz00_6453, BFALSE, BFALSE);
										}
									return
										BGl_substringz00zz__r4_strings_6_7z00(BgL_auxz00_6450,
										BgL_auxz00_6457, BgL_auxz00_6466);
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



/* substring */
	BGL_EXPORTED_DEF obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_60, long BgL_startz00_61, long BgL_endz00_62)
	{
		{	/* Ieee/string.scm 450 */
			{	/* Ieee/string.scm 451 */
				long BgL_lenz00_959;

				BgL_lenz00_959 = STRING_LENGTH(BgL_stringz00_60);
				{	/* Ieee/string.scm 453 */
					bool_t BgL_test3862z00_6479;

					if ((BgL_startz00_61 < ((long) 0)))
						{	/* Ieee/string.scm 453 */
							BgL_test3862z00_6479 = ((bool_t) 1);
						}
					else
						{	/* Ieee/string.scm 453 */
							BgL_test3862z00_6479 = (BgL_startz00_61 > BgL_lenz00_959);
						}
					if (BgL_test3862z00_6479)
						{	/* Ieee/string.scm 455 */
							obj_t BgL_arg1243z00_962;
							obj_t BgL_arg1245z00_963;

							{	/* Ieee/string.scm 455 */
								obj_t BgL_arg1246z00_964;

								{	/* Ieee/fixnum.scm 980 */

									BgL_arg1246z00_964 =
										BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_startz00_61, ((long) 10));
								}
								BgL_arg1243z00_962 =
									string_append(BGl_string3503z00zz__r4_strings_6_7z00,
									BgL_arg1246z00_964);
							}
							{	/* Ieee/string.scm 456 */
								obj_t BgL_list1251z00_968;

								{	/* Ieee/string.scm 456 */
									obj_t BgL_arg1252z00_969;

									BgL_arg1252z00_969 = MAKE_YOUNG_PAIR(BgL_stringz00_60, BNIL);
									BgL_list1251z00_968 =
										MAKE_YOUNG_PAIR(BINT(BgL_lenz00_959), BgL_arg1252z00_969);
								}
								BgL_arg1245z00_963 = BgL_list1251z00_968;
							}
							return
								BGl_errorz00zz__errorz00(BGl_string3504z00zz__r4_strings_6_7z00,
								BgL_arg1243z00_962, BgL_arg1245z00_963);
						}
					else
						{	/* Ieee/string.scm 457 */
							bool_t BgL_test3864z00_6489;

							if ((BgL_endz00_62 < BgL_startz00_61))
								{	/* Ieee/string.scm 457 */
									BgL_test3864z00_6489 = ((bool_t) 1);
								}
							else
								{	/* Ieee/string.scm 457 */
									BgL_test3864z00_6489 = (BgL_endz00_62 > BgL_lenz00_959);
								}
							if (BgL_test3864z00_6489)
								{	/* Ieee/string.scm 459 */
									obj_t BgL_arg1256z00_972;
									obj_t BgL_arg1258z00_973;

									{	/* Ieee/string.scm 459 */
										obj_t BgL_arg1263z00_974;

										{	/* Ieee/fixnum.scm 980 */

											BgL_arg1263z00_974 =
												BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_endz00_62, ((long) 10));
										}
										BgL_arg1256z00_972 =
											string_append(BGl_string3505z00zz__r4_strings_6_7z00,
											BgL_arg1263z00_974);
									}
									{	/* Ieee/string.scm 460 */
										obj_t BgL_list1269z00_978;

										{	/* Ieee/string.scm 460 */
											obj_t BgL_arg1270z00_979;

											BgL_arg1270z00_979 =
												MAKE_YOUNG_PAIR(BgL_stringz00_60, BNIL);
											BgL_list1269z00_978 =
												MAKE_YOUNG_PAIR(BINT(BgL_lenz00_959),
												BgL_arg1270z00_979);
										}
										BgL_arg1258z00_973 = BgL_list1269z00_978;
									}
									return
										BGl_errorz00zz__errorz00
										(BGl_string3504z00zz__r4_strings_6_7z00, BgL_arg1256z00_972,
										BgL_arg1258z00_973);
								}
							else
								{	/* Ieee/string.scm 457 */
									return
										c_substring(BgL_stringz00_60, BgL_startz00_61,
										BgL_endz00_62);
								}
						}
				}
			}
		}

	}



/* substring-ur */
	BGL_EXPORTED_DEF obj_t BGl_substringzd2urzd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_65, long BgL_startz00_66, long BgL_endz00_67)
	{
		{	/* Ieee/string.scm 467 */
			return c_substring(BgL_stringz00_65, BgL_startz00_66, BgL_endz00_67);
		}

	}



/* &substring-ur */
	obj_t BGl_z62substringzd2urzb0zz__r4_strings_6_7z00(obj_t BgL_envz00_5202,
		obj_t BgL_stringz00_5203, obj_t BgL_startz00_5204, obj_t BgL_endz00_5205)
	{
		{	/* Ieee/string.scm 467 */
			{	/* Ieee/string.scm 468 */
				long BgL_auxz00_6517;
				long BgL_auxz00_6508;
				obj_t BgL_auxz00_6501;

				{	/* Ieee/string.scm 468 */
					obj_t BgL_tmpz00_6518;

					if (INTEGERP(BgL_endz00_5205))
						{	/* Ieee/string.scm 468 */
							BgL_tmpz00_6518 = BgL_endz00_5205;
						}
					else
						{
							obj_t BgL_auxz00_6521;

							BgL_auxz00_6521 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 22962)),
								BGl_string3506z00zz__r4_strings_6_7z00,
								BGl_string3480z00zz__r4_strings_6_7z00, BgL_endz00_5205);
							FAILURE(BgL_auxz00_6521, BFALSE, BFALSE);
						}
					BgL_auxz00_6517 = (long) CINT(BgL_tmpz00_6518);
				}
				{	/* Ieee/string.scm 468 */
					obj_t BgL_tmpz00_6509;

					if (INTEGERP(BgL_startz00_5204))
						{	/* Ieee/string.scm 468 */
							BgL_tmpz00_6509 = BgL_startz00_5204;
						}
					else
						{
							obj_t BgL_auxz00_6512;

							BgL_auxz00_6512 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 22962)),
								BGl_string3506z00zz__r4_strings_6_7z00,
								BGl_string3480z00zz__r4_strings_6_7z00, BgL_startz00_5204);
							FAILURE(BgL_auxz00_6512, BFALSE, BFALSE);
						}
					BgL_auxz00_6508 = (long) CINT(BgL_tmpz00_6509);
				}
				if (STRINGP(BgL_stringz00_5203))
					{	/* Ieee/string.scm 468 */
						BgL_auxz00_6501 = BgL_stringz00_5203;
					}
				else
					{
						obj_t BgL_auxz00_6504;

						BgL_auxz00_6504 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 22962)),
							BGl_string3506z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5203);
						FAILURE(BgL_auxz00_6504, BFALSE, BFALSE);
					}
				return
					BGl_substringzd2urzd2zz__r4_strings_6_7z00(BgL_auxz00_6501,
					BgL_auxz00_6508, BgL_auxz00_6517);
			}
		}

	}



/* _string-contains */
	obj_t BGl__stringzd2containszd2zz__r4_strings_6_7z00(obj_t BgL_env1117z00_72,
		obj_t BgL_opt1116z00_71)
	{
		{	/* Ieee/string.scm 473 */
			{	/* Ieee/string.scm 473 */
				obj_t BgL_g1118z00_982;
				obj_t BgL_g1119z00_983;

				BgL_g1118z00_982 = VECTOR_REF(BgL_opt1116z00_71, ((long) 0));
				BgL_g1119z00_983 = VECTOR_REF(BgL_opt1116z00_71, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1116z00_71))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 473 */

							{	/* Ieee/string.scm 473 */
								obj_t BgL_auxz00_6536;
								obj_t BgL_auxz00_6529;

								if (STRINGP(BgL_g1119z00_983))
									{	/* Ieee/string.scm 473 */
										BgL_auxz00_6536 = BgL_g1119z00_983;
									}
								else
									{
										obj_t BgL_auxz00_6539;

										BgL_auxz00_6539 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3476z00zz__r4_strings_6_7z00,
											BINT(((long) 23216)),
											BGl_string3507z00zz__r4_strings_6_7z00,
											BGl_string3478z00zz__r4_strings_6_7z00, BgL_g1119z00_983);
										FAILURE(BgL_auxz00_6539, BFALSE, BFALSE);
									}
								if (STRINGP(BgL_g1118z00_982))
									{	/* Ieee/string.scm 473 */
										BgL_auxz00_6529 = BgL_g1118z00_982;
									}
								else
									{
										obj_t BgL_auxz00_6532;

										BgL_auxz00_6532 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3476z00zz__r4_strings_6_7z00,
											BINT(((long) 23216)),
											BGl_string3507z00zz__r4_strings_6_7z00,
											BGl_string3478z00zz__r4_strings_6_7z00, BgL_g1118z00_982);
										FAILURE(BgL_auxz00_6532, BFALSE, BFALSE);
									}
								return
									BGl_stringzd2containszd2zz__r4_strings_6_7z00(BgL_auxz00_6529,
									BgL_auxz00_6536, (int) (((long) 0)));
						}} break;
					case ((long) 3):

						{	/* Ieee/string.scm 473 */
							obj_t BgL_startz00_988;

							BgL_startz00_988 = VECTOR_REF(BgL_opt1116z00_71, ((long) 2));
							{	/* Ieee/string.scm 473 */

								{	/* Ieee/string.scm 473 */
									int BgL_auxz00_6560;
									obj_t BgL_auxz00_6553;
									obj_t BgL_auxz00_6546;

									{	/* Ieee/string.scm 473 */
										obj_t BgL_tmpz00_6561;

										if (INTEGERP(BgL_startz00_988))
											{	/* Ieee/string.scm 473 */
												BgL_tmpz00_6561 = BgL_startz00_988;
											}
										else
											{
												obj_t BgL_auxz00_6564;

												BgL_auxz00_6564 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 23216)),
													BGl_string3507z00zz__r4_strings_6_7z00,
													BGl_string3480z00zz__r4_strings_6_7z00,
													BgL_startz00_988);
												FAILURE(BgL_auxz00_6564, BFALSE, BFALSE);
											}
										BgL_auxz00_6560 = CINT(BgL_tmpz00_6561);
									}
									if (STRINGP(BgL_g1119z00_983))
										{	/* Ieee/string.scm 473 */
											BgL_auxz00_6553 = BgL_g1119z00_983;
										}
									else
										{
											obj_t BgL_auxz00_6556;

											BgL_auxz00_6556 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 23216)),
												BGl_string3507z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_g1119z00_983);
											FAILURE(BgL_auxz00_6556, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_g1118z00_982))
										{	/* Ieee/string.scm 473 */
											BgL_auxz00_6546 = BgL_g1118z00_982;
										}
									else
										{
											obj_t BgL_auxz00_6549;

											BgL_auxz00_6549 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 23216)),
												BGl_string3507z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_g1118z00_982);
											FAILURE(BgL_auxz00_6549, BFALSE, BFALSE);
										}
									return
										BGl_stringzd2containszd2zz__r4_strings_6_7z00
										(BgL_auxz00_6546, BgL_auxz00_6553, BgL_auxz00_6560);
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



/* string-contains */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2containszd2zz__r4_strings_6_7z00(obj_t
		BgL_s1z00_68, obj_t BgL_s2z00_69, int BgL_startz00_70)
	{
		{	/* Ieee/string.scm 473 */
			{	/* Ieee/string.scm 474 */
				long BgL_l2z00_989;

				BgL_l2z00_989 = STRING_LENGTH(BgL_s2z00_69);
				if ((BgL_l2z00_989 == ((long) 1)))
					{	/* Ieee/string.scm 476 */
						unsigned char BgL_arg1273z00_991;

						BgL_arg1273z00_991 = STRING_REF(BgL_s2z00_69, ((long) 0));
						return
							BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL_s1z00_68,
							BCHAR(BgL_arg1273z00_991), BINT(BgL_startz00_70));
					}
				else
					{	/* Ieee/string.scm 477 */
						long BgL_l1z00_992;
						long BgL_i0z00_993;

						BgL_l1z00_992 = STRING_LENGTH(BgL_s1z00_68);
						if (((long) (BgL_startz00_70) < ((long) 0)))
							{	/* Ieee/string.scm 478 */
								BgL_i0z00_993 = ((long) 0);
							}
						else
							{	/* Ieee/string.scm 478 */
								BgL_i0z00_993 = (long) (BgL_startz00_70);
							}
						if ((BgL_l1z00_992 < (BgL_i0z00_993 + BgL_l2z00_989)))
							{	/* Ieee/string.scm 479 */
								return BFALSE;
							}
						else
							{	/* Ieee/string.scm 481 */
								long BgL_stopz00_996;

								BgL_stopz00_996 = (BgL_l1z00_992 - BgL_l2z00_989);
								{
									long BgL_iz00_998;

									BgL_iz00_998 = BgL_i0z00_993;
								BgL_zc3z04anonymousza31276ze3z87_999:
									if (bigloo_strcmp_at(BgL_s1z00_68, BgL_s2z00_69,
											BgL_iz00_998))
										{	/* Ieee/string.scm 484 */
											return BINT(BgL_iz00_998);
										}
									else
										{	/* Ieee/string.scm 484 */
											if ((BgL_iz00_998 == BgL_stopz00_996))
												{	/* Ieee/string.scm 486 */
													return BFALSE;
												}
											else
												{
													long BgL_iz00_6593;

													BgL_iz00_6593 = (BgL_iz00_998 + ((long) 1));
													BgL_iz00_998 = BgL_iz00_6593;
													goto BgL_zc3z04anonymousza31276ze3z87_999;
												}
										}
								}
							}
					}
			}
		}

	}



/* _string-contains-ci */
	obj_t BGl__stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t
		BgL_env1123z00_77, obj_t BgL_opt1122z00_76)
	{
		{	/* Ieee/string.scm 494 */
			{	/* Ieee/string.scm 494 */
				obj_t BgL_g1124z00_1006;
				obj_t BgL_g1125z00_1007;

				BgL_g1124z00_1006 = VECTOR_REF(BgL_opt1122z00_76, ((long) 0));
				BgL_g1125z00_1007 = VECTOR_REF(BgL_opt1122z00_76, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1122z00_76))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 494 */

							{	/* Ieee/string.scm 494 */
								obj_t BgL_auxz00_6604;
								obj_t BgL_auxz00_6597;

								if (STRINGP(BgL_g1125z00_1007))
									{	/* Ieee/string.scm 494 */
										BgL_auxz00_6604 = BgL_g1125z00_1007;
									}
								else
									{
										obj_t BgL_auxz00_6607;

										BgL_auxz00_6607 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3476z00zz__r4_strings_6_7z00,
											BINT(((long) 23882)),
											BGl_string3508z00zz__r4_strings_6_7z00,
											BGl_string3478z00zz__r4_strings_6_7z00,
											BgL_g1125z00_1007);
										FAILURE(BgL_auxz00_6607, BFALSE, BFALSE);
									}
								if (STRINGP(BgL_g1124z00_1006))
									{	/* Ieee/string.scm 494 */
										BgL_auxz00_6597 = BgL_g1124z00_1006;
									}
								else
									{
										obj_t BgL_auxz00_6600;

										BgL_auxz00_6600 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3476z00zz__r4_strings_6_7z00,
											BINT(((long) 23882)),
											BGl_string3508z00zz__r4_strings_6_7z00,
											BGl_string3478z00zz__r4_strings_6_7z00,
											BgL_g1124z00_1006);
										FAILURE(BgL_auxz00_6600, BFALSE, BFALSE);
									}
								return
									BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00
									(BgL_auxz00_6597, BgL_auxz00_6604, (int) (((long) 0)));
						}} break;
					case ((long) 3):

						{	/* Ieee/string.scm 494 */
							obj_t BgL_startz00_1012;

							BgL_startz00_1012 = VECTOR_REF(BgL_opt1122z00_76, ((long) 2));
							{	/* Ieee/string.scm 494 */

								{	/* Ieee/string.scm 494 */
									int BgL_auxz00_6628;
									obj_t BgL_auxz00_6621;
									obj_t BgL_auxz00_6614;

									{	/* Ieee/string.scm 494 */
										obj_t BgL_tmpz00_6629;

										if (INTEGERP(BgL_startz00_1012))
											{	/* Ieee/string.scm 494 */
												BgL_tmpz00_6629 = BgL_startz00_1012;
											}
										else
											{
												obj_t BgL_auxz00_6632;

												BgL_auxz00_6632 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 23882)),
													BGl_string3508z00zz__r4_strings_6_7z00,
													BGl_string3480z00zz__r4_strings_6_7z00,
													BgL_startz00_1012);
												FAILURE(BgL_auxz00_6632, BFALSE, BFALSE);
											}
										BgL_auxz00_6628 = CINT(BgL_tmpz00_6629);
									}
									if (STRINGP(BgL_g1125z00_1007))
										{	/* Ieee/string.scm 494 */
											BgL_auxz00_6621 = BgL_g1125z00_1007;
										}
									else
										{
											obj_t BgL_auxz00_6624;

											BgL_auxz00_6624 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 23882)),
												BGl_string3508z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_g1125z00_1007);
											FAILURE(BgL_auxz00_6624, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_g1124z00_1006))
										{	/* Ieee/string.scm 494 */
											BgL_auxz00_6614 = BgL_g1124z00_1006;
										}
									else
										{
											obj_t BgL_auxz00_6617;

											BgL_auxz00_6617 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 23882)),
												BGl_string3508z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_g1124z00_1006);
											FAILURE(BgL_auxz00_6617, BFALSE, BFALSE);
										}
									return
										BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00
										(BgL_auxz00_6614, BgL_auxz00_6621, BgL_auxz00_6628);
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



/* string-contains-ci */
	BGL_EXPORTED_DEF obj_t
		BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t BgL_s1z00_73,
		obj_t BgL_s2z00_74, int BgL_startz00_75)
	{
		{	/* Ieee/string.scm 494 */
			{	/* Ieee/string.scm 495 */
				long BgL_l1z00_1013;
				long BgL_l2z00_1014;
				long BgL_i0z00_1015;

				BgL_l1z00_1013 = STRING_LENGTH(BgL_s1z00_73);
				BgL_l2z00_1014 = STRING_LENGTH(BgL_s2z00_74);
				if (((long) (BgL_startz00_75) < ((long) 0)))
					{	/* Ieee/string.scm 497 */
						BgL_i0z00_1015 = ((long) 0);
					}
				else
					{	/* Ieee/string.scm 497 */
						BgL_i0z00_1015 = (long) (BgL_startz00_75);
					}
				if ((BgL_l1z00_1013 < (BgL_i0z00_1015 + BgL_l2z00_1014)))
					{	/* Ieee/string.scm 498 */
						return BFALSE;
					}
				else
					{	/* Ieee/string.scm 500 */
						long BgL_stopz00_1018;

						BgL_stopz00_1018 = (BgL_l1z00_1013 - BgL_l2z00_1014);
						{
							long BgL_iz00_1020;

							BgL_iz00_1020 = BgL_i0z00_1015;
						BgL_zc3z04anonymousza31286ze3z87_1021:
							if (bigloo_strcmp_ci_at(BgL_s1z00_73, BgL_s2z00_74,
									BgL_iz00_1020))
								{	/* Ieee/string.scm 503 */
									return BINT(BgL_iz00_1020);
								}
							else
								{	/* Ieee/string.scm 503 */
									if ((BgL_iz00_1020 == BgL_stopz00_1018))
										{	/* Ieee/string.scm 505 */
											return BFALSE;
										}
									else
										{
											long BgL_iz00_6655;

											BgL_iz00_6655 = (BgL_iz00_1020 + ((long) 1));
											BgL_iz00_1020 = BgL_iz00_6655;
											goto BgL_zc3z04anonymousza31286ze3z87_1021;
										}
								}
						}
					}
			}
		}

	}



/* string-compare3 */
	BGL_EXPORTED_DEF long BGl_stringzd2compare3zd2zz__r4_strings_6_7z00(obj_t
		BgL_az00_78, obj_t BgL_bz00_79)
	{
		{	/* Ieee/string.scm 517 */
			{	/* Ieee/string.scm 518 */
				long BgL_alz00_1028;

				BgL_alz00_1028 = STRING_LENGTH(BgL_az00_78);
				{	/* Ieee/string.scm 518 */
					long BgL_blz00_1029;

					BgL_blz00_1029 = STRING_LENGTH(BgL_bz00_79);
					{	/* Ieee/string.scm 519 */
						long BgL_lz00_1030;

						if ((BgL_alz00_1028 < BgL_blz00_1029))
							{	/* Ieee/string.scm 520 */
								BgL_lz00_1030 = BgL_alz00_1028;
							}
						else
							{	/* Ieee/string.scm 520 */
								BgL_lz00_1030 = BgL_blz00_1029;
							}
						{	/* Ieee/string.scm 520 */

							{
								long BgL_rz00_1032;

								BgL_rz00_1032 = ((long) 0);
							BgL_zc3z04anonymousza31292ze3z87_1033:
								if ((BgL_rz00_1032 == BgL_lz00_1030))
									{	/* Ieee/string.scm 522 */
										return (BgL_alz00_1028 - BgL_blz00_1029);
									}
								else
									{	/* Ieee/string.scm 524 */
										long BgL_cz00_1035;

										BgL_cz00_1035 =
											(
											(STRING_REF(BgL_az00_78, BgL_rz00_1032)) -
											(STRING_REF(BgL_bz00_79, BgL_rz00_1032)));
										if ((BgL_cz00_1035 == ((long) 0)))
											{
												long BgL_rz00_6671;

												BgL_rz00_6671 = (BgL_rz00_1032 + ((long) 1));
												BgL_rz00_1032 = BgL_rz00_6671;
												goto BgL_zc3z04anonymousza31292ze3z87_1033;
											}
										else
											{	/* Ieee/string.scm 526 */
												return BgL_cz00_1035;
											}
									}
							}
						}
					}
				}
			}
		}

	}



/* &string-compare3 */
	obj_t BGl_z62stringzd2compare3zb0zz__r4_strings_6_7z00(obj_t BgL_envz00_5206,
		obj_t BgL_az00_5207, obj_t BgL_bz00_5208)
	{
		{	/* Ieee/string.scm 517 */
			{	/* Ieee/string.scm 518 */
				long BgL_tmpz00_6673;

				{	/* Ieee/string.scm 518 */
					obj_t BgL_auxz00_6681;
					obj_t BgL_auxz00_6674;

					if (STRINGP(BgL_bz00_5208))
						{	/* Ieee/string.scm 518 */
							BgL_auxz00_6681 = BgL_bz00_5208;
						}
					else
						{
							obj_t BgL_auxz00_6684;

							BgL_auxz00_6684 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 24823)),
								BGl_string3509z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_bz00_5208);
							FAILURE(BgL_auxz00_6684, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_az00_5207))
						{	/* Ieee/string.scm 518 */
							BgL_auxz00_6674 = BgL_az00_5207;
						}
					else
						{
							obj_t BgL_auxz00_6677;

							BgL_auxz00_6677 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 24823)),
								BGl_string3509z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_az00_5207);
							FAILURE(BgL_auxz00_6677, BFALSE, BFALSE);
						}
					BgL_tmpz00_6673 =
						BGl_stringzd2compare3zd2zz__r4_strings_6_7z00(BgL_auxz00_6674,
						BgL_auxz00_6681);
				}
				return BINT(BgL_tmpz00_6673);
			}
		}

	}



/* string-compare3-ci */
	BGL_EXPORTED_DEF long BGl_stringzd2compare3zd2ciz00zz__r4_strings_6_7z00(obj_t
		BgL_az00_80, obj_t BgL_bz00_81)
	{
		{	/* Ieee/string.scm 533 */
			{	/* Ieee/string.scm 534 */
				long BgL_alz00_1046;

				BgL_alz00_1046 = STRING_LENGTH(BgL_az00_80);
				{	/* Ieee/string.scm 534 */
					long BgL_blz00_1047;

					BgL_blz00_1047 = STRING_LENGTH(BgL_bz00_81);
					{	/* Ieee/string.scm 535 */
						long BgL_lz00_1048;

						if ((BgL_alz00_1046 < BgL_blz00_1047))
							{	/* Ieee/string.scm 536 */
								BgL_lz00_1048 = BgL_alz00_1046;
							}
						else
							{	/* Ieee/string.scm 536 */
								BgL_lz00_1048 = BgL_blz00_1047;
							}
						{	/* Ieee/string.scm 536 */

							{
								long BgL_rz00_1050;

								BgL_rz00_1050 = ((long) 0);
							BgL_zc3z04anonymousza31301ze3z87_1051:
								if ((BgL_rz00_1050 == BgL_lz00_1048))
									{	/* Ieee/string.scm 538 */
										return (BgL_alz00_1046 - BgL_blz00_1047);
									}
								else
									{	/* Ieee/string.scm 540 */
										long BgL_cz00_1053;

										BgL_cz00_1053 =
											(
											(tolower(STRING_REF(BgL_az00_80, BgL_rz00_1050))) -
											(tolower(STRING_REF(BgL_bz00_81, BgL_rz00_1050))));
										if ((BgL_cz00_1053 == ((long) 0)))
											{
												long BgL_rz00_6706;

												BgL_rz00_6706 = (BgL_rz00_1050 + ((long) 1));
												BgL_rz00_1050 = BgL_rz00_6706;
												goto BgL_zc3z04anonymousza31301ze3z87_1051;
											}
										else
											{	/* Ieee/string.scm 542 */
												return BgL_cz00_1053;
											}
									}
							}
						}
					}
				}
			}
		}

	}



/* &string-compare3-ci */
	obj_t BGl_z62stringzd2compare3zd2ciz62zz__r4_strings_6_7z00(obj_t
		BgL_envz00_5209, obj_t BgL_az00_5210, obj_t BgL_bz00_5211)
	{
		{	/* Ieee/string.scm 533 */
			{	/* Ieee/string.scm 534 */
				long BgL_tmpz00_6708;

				{	/* Ieee/string.scm 534 */
					obj_t BgL_auxz00_6716;
					obj_t BgL_auxz00_6709;

					if (STRINGP(BgL_bz00_5211))
						{	/* Ieee/string.scm 534 */
							BgL_auxz00_6716 = BgL_bz00_5211;
						}
					else
						{
							obj_t BgL_auxz00_6719;

							BgL_auxz00_6719 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 25475)),
								BGl_string3510z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_bz00_5211);
							FAILURE(BgL_auxz00_6719, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_az00_5210))
						{	/* Ieee/string.scm 534 */
							BgL_auxz00_6709 = BgL_az00_5210;
						}
					else
						{
							obj_t BgL_auxz00_6712;

							BgL_auxz00_6712 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 25475)),
								BGl_string3510z00zz__r4_strings_6_7z00,
								BGl_string3478z00zz__r4_strings_6_7z00, BgL_az00_5210);
							FAILURE(BgL_auxz00_6712, BFALSE, BFALSE);
						}
					BgL_tmpz00_6708 =
						BGl_stringzd2compare3zd2ciz00zz__r4_strings_6_7z00(BgL_auxz00_6709,
						BgL_auxz00_6716);
				}
				return BINT(BgL_tmpz00_6708);
			}
		}

	}



/* string-append */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t
		BgL_listz00_82)
	{
		{	/* Ieee/string.scm 553 */
			if (NULLP(BgL_listz00_82))
				{	/* Ieee/string.scm 554 */
					return BGl_string3511z00zz__r4_strings_6_7z00;
				}
			else
				{	/* Ieee/string.scm 556 */
					long BgL_lenz00_1067;

					{
						obj_t BgL_listz00_2793;
						long BgL_resz00_2794;

						BgL_listz00_2793 = BgL_listz00_82;
						BgL_resz00_2794 = ((long) 0);
					BgL_stringzd2appendzd2_2792:
						if (NULLP(BgL_listz00_2793))
							{	/* Ieee/string.scm 558 */
								BgL_lenz00_1067 = BgL_resz00_2794;
							}
						else
							{
								long BgL_resz00_6732;
								obj_t BgL_listz00_6729;

								BgL_listz00_6729 = CDR(((obj_t) BgL_listz00_2793));
								{	/* Ieee/string.scm 561 */
									long BgL_tmpz00_6733;

									{	/* Ieee/string.scm 562 */
										obj_t BgL_stringz00_2808;

										BgL_stringz00_2808 = CAR(((obj_t) BgL_listz00_2793));
										BgL_tmpz00_6733 = STRING_LENGTH(BgL_stringz00_2808);
									}
									BgL_resz00_6732 = (BgL_resz00_2794 + BgL_tmpz00_6733);
								}
								BgL_resz00_2794 = BgL_resz00_6732;
								BgL_listz00_2793 = BgL_listz00_6729;
								goto BgL_stringzd2appendzd2_2792;
							}
					}
					{	/* Ieee/string.scm 556 */
						obj_t BgL_resz00_1068;

						BgL_resz00_1068 = make_string_sans_fill(BgL_lenz00_1067);
						{	/* Ieee/string.scm 563 */

							{
								obj_t BgL_listz00_2848;
								long BgL_wz00_2849;

								BgL_listz00_2848 = BgL_listz00_82;
								BgL_wz00_2849 = ((long) 0);
							BgL_stringzd2appendzd2_2847:
								if (NULLP(BgL_listz00_2848))
									{	/* Ieee/string.scm 566 */
										return BgL_resz00_1068;
									}
								else
									{	/* Ieee/string.scm 568 */
										obj_t BgL_sz00_2856;

										BgL_sz00_2856 = CAR(((obj_t) BgL_listz00_2848));
										{	/* Ieee/string.scm 568 */
											long BgL_lz00_2857;

											BgL_lz00_2857 = STRING_LENGTH(((obj_t) BgL_sz00_2856));
											{	/* Ieee/string.scm 569 */

												blit_string(
													((obj_t) BgL_sz00_2856), ((long) 0), BgL_resz00_1068,
													BgL_wz00_2849, BgL_lz00_2857);
												{	/* Ieee/string.scm 571 */
													obj_t BgL_arg1316z00_2858;
													long BgL_arg1317z00_2859;

													BgL_arg1316z00_2858 = CDR(((obj_t) BgL_listz00_2848));
													BgL_arg1317z00_2859 = (BgL_wz00_2849 + BgL_lz00_2857);
													{
														long BgL_wz00_6751;
														obj_t BgL_listz00_6750;

														BgL_listz00_6750 = BgL_arg1316z00_2858;
														BgL_wz00_6751 = BgL_arg1317z00_2859;
														BgL_wz00_2849 = BgL_wz00_6751;
														BgL_listz00_2848 = BgL_listz00_6750;
														goto BgL_stringzd2appendzd2_2847;
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



/* &string-append */
	obj_t BGl_z62stringzd2appendzb0zz__r4_strings_6_7z00(obj_t BgL_envz00_5212,
		obj_t BgL_listz00_5213)
	{
		{	/* Ieee/string.scm 553 */
			return BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_listz00_5213);
		}

	}



/* list->string */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t
		BgL_listz00_83)
	{
		{	/* Ieee/string.scm 576 */
			{	/* Ieee/string.scm 577 */
				long BgL_lenz00_1089;

				BgL_lenz00_1089 = bgl_list_length(BgL_listz00_83);
				{	/* Ieee/string.scm 577 */
					obj_t BgL_stringz00_1090;

					BgL_stringz00_1090 = make_string_sans_fill(BgL_lenz00_1089);
					{	/* Ieee/string.scm 578 */

						{
							long BgL_iz00_2901;
							obj_t BgL_lz00_2902;

							BgL_iz00_2901 = ((long) 0);
							BgL_lz00_2902 = BgL_listz00_83;
						BgL_loopz00_2900:
							if ((BgL_iz00_2901 == BgL_lenz00_1089))
								{	/* Ieee/string.scm 581 */
									return BgL_stringz00_1090;
								}
							else
								{	/* Ieee/string.scm 581 */
									{	/* Ieee/string.scm 584 */
										obj_t BgL_arg1329z00_2908;

										BgL_arg1329z00_2908 = CAR(((obj_t) BgL_lz00_2902));
										{	/* Ieee/string.scm 345 */
											unsigned char BgL_tmpz00_6759;

											BgL_tmpz00_6759 = CCHAR(BgL_arg1329z00_2908);
											STRING_SET(BgL_stringz00_1090, BgL_iz00_2901,
												BgL_tmpz00_6759);
									}}
									{	/* Ieee/string.scm 585 */
										long BgL_arg1330z00_2909;
										obj_t BgL_arg1331z00_2910;

										BgL_arg1330z00_2909 = (BgL_iz00_2901 + ((long) 1));
										BgL_arg1331z00_2910 = CDR(((obj_t) BgL_lz00_2902));
										{
											obj_t BgL_lz00_6766;
											long BgL_iz00_6765;

											BgL_iz00_6765 = BgL_arg1330z00_2909;
											BgL_lz00_6766 = BgL_arg1331z00_2910;
											BgL_lz00_2902 = BgL_lz00_6766;
											BgL_iz00_2901 = BgL_iz00_6765;
											goto BgL_loopz00_2900;
										}
									}
								}
						}
					}
				}
			}
		}

	}



/* &list->string */
	obj_t BGl_z62listzd2ze3stringz53zz__r4_strings_6_7z00(obj_t BgL_envz00_5214,
		obj_t BgL_listz00_5215)
	{
		{	/* Ieee/string.scm 576 */
			{	/* Ieee/string.scm 577 */
				obj_t BgL_auxz00_6767;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_listz00_5215))
					{	/* Ieee/string.scm 577 */
						BgL_auxz00_6767 = BgL_listz00_5215;
					}
				else
					{
						obj_t BgL_auxz00_6770;

						BgL_auxz00_6770 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 27160)),
							BGl_string3512z00zz__r4_strings_6_7z00,
							BGl_string3513z00zz__r4_strings_6_7z00, BgL_listz00_5215);
						FAILURE(BgL_auxz00_6770, BFALSE, BFALSE);
					}
				return BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_auxz00_6767);
			}
		}

	}



/* string->list */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_84)
	{
		{	/* Ieee/string.scm 590 */
			{	/* Ieee/string.scm 591 */
				long BgL_lenz00_1100;

				BgL_lenz00_1100 = STRING_LENGTH(BgL_stringz00_84);
				{	/* Ieee/string.scm 592 */
					long BgL_g1021z00_1101;

					BgL_g1021z00_1101 = (BgL_lenz00_1100 - ((long) 1));
					{
						long BgL_iz00_2948;
						obj_t BgL_resz00_2949;

						BgL_iz00_2948 = BgL_g1021z00_1101;
						BgL_resz00_2949 = BNIL;
					BgL_loopz00_2947:
						if ((BgL_iz00_2948 == ((long) -1)))
							{	/* Ieee/string.scm 594 */
								return BgL_resz00_2949;
							}
						else
							{	/* Ieee/string.scm 596 */
								long BgL_arg1334z00_2955;
								obj_t BgL_arg1335z00_2956;

								BgL_arg1334z00_2955 = (BgL_iz00_2948 - ((long) 1));
								{	/* Ieee/string.scm 597 */
									unsigned char BgL_arg1337z00_2957;

									BgL_arg1337z00_2957 =
										STRING_REF(BgL_stringz00_84, BgL_iz00_2948);
									BgL_arg1335z00_2956 =
										MAKE_YOUNG_PAIR(BCHAR(BgL_arg1337z00_2957),
										BgL_resz00_2949);
								}
								{
									obj_t BgL_resz00_6784;
									long BgL_iz00_6783;

									BgL_iz00_6783 = BgL_arg1334z00_2955;
									BgL_resz00_6784 = BgL_arg1335z00_2956;
									BgL_resz00_2949 = BgL_resz00_6784;
									BgL_iz00_2948 = BgL_iz00_6783;
									goto BgL_loopz00_2947;
								}
							}
					}
				}
			}
		}

	}



/* &string->list */
	obj_t BGl_z62stringzd2ze3listz53zz__r4_strings_6_7z00(obj_t BgL_envz00_5216,
		obj_t BgL_stringz00_5217)
	{
		{	/* Ieee/string.scm 590 */
			{	/* Ieee/string.scm 591 */
				obj_t BgL_auxz00_6785;

				if (STRINGP(BgL_stringz00_5217))
					{	/* Ieee/string.scm 591 */
						BgL_auxz00_6785 = BgL_stringz00_5217;
					}
				else
					{
						obj_t BgL_auxz00_6788;

						BgL_auxz00_6788 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 27634)),
							BGl_string3514z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5217);
						FAILURE(BgL_auxz00_6788, BFALSE, BFALSE);
					}
				return BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(BgL_auxz00_6785);
			}
		}

	}



/* string-copy */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_85)
	{
		{	/* Ieee/string.scm 602 */
			{	/* Ieee/string.scm 603 */
				long BgL_lenz00_1112;

				BgL_lenz00_1112 = STRING_LENGTH(BgL_stringz00_85);
				{	/* Ieee/string.scm 603 */
					obj_t BgL_newz00_1113;

					BgL_newz00_1113 = make_string_sans_fill(BgL_lenz00_1112);
					{	/* Ieee/string.scm 604 */

						{	/* Ieee/string.scm 605 */
							long BgL_g1023z00_1114;

							BgL_g1023z00_1114 = (BgL_lenz00_1112 - ((long) 1));
							{
								long BgL_iz00_1116;

								BgL_iz00_1116 = BgL_g1023z00_1114;
							BgL_zc3z04anonymousza31338ze3z87_1117:
								if ((BgL_iz00_1116 == ((long) -1)))
									{	/* Ieee/string.scm 606 */
										return BgL_newz00_1113;
									}
								else
									{	/* Ieee/string.scm 606 */
										{	/* Ieee/string.scm 345 */
											unsigned char BgL_tmpz00_6798;

											BgL_tmpz00_6798 =
												STRING_REF(BgL_stringz00_85, BgL_iz00_1116);
											STRING_SET(BgL_newz00_1113, BgL_iz00_1116,
												BgL_tmpz00_6798);
										}
										{
											long BgL_iz00_6801;

											BgL_iz00_6801 = (BgL_iz00_1116 - ((long) 1));
											BgL_iz00_1116 = BgL_iz00_6801;
											goto BgL_zc3z04anonymousza31338ze3z87_1117;
										}
									}
							}
						}
					}
				}
			}
		}

	}



/* &string-copy */
	obj_t BGl_z62stringzd2copyzb0zz__r4_strings_6_7z00(obj_t BgL_envz00_5218,
		obj_t BgL_stringz00_5219)
	{
		{	/* Ieee/string.scm 602 */
			{	/* Ieee/string.scm 603 */
				obj_t BgL_auxz00_6803;

				if (STRINGP(BgL_stringz00_5219))
					{	/* Ieee/string.scm 603 */
						BgL_auxz00_6803 = BgL_stringz00_5219;
					}
				else
					{
						obj_t BgL_auxz00_6806;

						BgL_auxz00_6806 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 28069)),
							BGl_string3515z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5219);
						FAILURE(BgL_auxz00_6806, BFALSE, BFALSE);
					}
				return BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_auxz00_6803);
			}
		}

	}



/* string-fill! */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2fillz12zc0zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_86, unsigned char BgL_charz00_87)
	{
		{	/* Ieee/string.scm 615 */
			{	/* Ieee/string.scm 616 */
				long BgL_lenz00_2979;

				BgL_lenz00_2979 = STRING_LENGTH(BgL_stringz00_86);
				{
					long BgL_iz00_3007;

					BgL_iz00_3007 = ((long) 0);
				BgL_loopz00_3006:
					if ((BgL_iz00_3007 == BgL_lenz00_2979))
						{	/* Ieee/string.scm 618 */
							return BUNSPEC;
						}
					else
						{	/* Ieee/string.scm 618 */
							STRING_SET(BgL_stringz00_86, BgL_iz00_3007, BgL_charz00_87);
							{
								long BgL_iz00_6815;

								BgL_iz00_6815 = (BgL_iz00_3007 + ((long) 1));
								BgL_iz00_3007 = BgL_iz00_6815;
								goto BgL_loopz00_3006;
							}
						}
				}
			}
		}

	}



/* &string-fill! */
	obj_t BGl_z62stringzd2fillz12za2zz__r4_strings_6_7z00(obj_t BgL_envz00_5220,
		obj_t BgL_stringz00_5221, obj_t BgL_charz00_5222)
	{
		{	/* Ieee/string.scm 615 */
			{	/* Ieee/string.scm 616 */
				unsigned char BgL_auxz00_6824;
				obj_t BgL_auxz00_6817;

				{	/* Ieee/string.scm 616 */
					obj_t BgL_tmpz00_6825;

					if (CHARP(BgL_charz00_5222))
						{	/* Ieee/string.scm 616 */
							BgL_tmpz00_6825 = BgL_charz00_5222;
						}
					else
						{
							obj_t BgL_auxz00_6828;

							BgL_auxz00_6828 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 28551)),
								BGl_string3516z00zz__r4_strings_6_7z00,
								BGl_string3481z00zz__r4_strings_6_7z00, BgL_charz00_5222);
							FAILURE(BgL_auxz00_6828, BFALSE, BFALSE);
						}
					BgL_auxz00_6824 = CCHAR(BgL_tmpz00_6825);
				}
				if (STRINGP(BgL_stringz00_5221))
					{	/* Ieee/string.scm 616 */
						BgL_auxz00_6817 = BgL_stringz00_5221;
					}
				else
					{
						obj_t BgL_auxz00_6820;

						BgL_auxz00_6820 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 28551)),
							BGl_string3516z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5221);
						FAILURE(BgL_auxz00_6820, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2fillz12zc0zz__r4_strings_6_7z00(BgL_auxz00_6817,
					BgL_auxz00_6824);
			}
		}

	}



/* string-upcase */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_88)
	{
		{	/* Ieee/string.scm 627 */
			{	/* Ieee/string.scm 628 */
				long BgL_lenz00_1129;

				BgL_lenz00_1129 = STRING_LENGTH(BgL_stringz00_88);
				{	/* Ieee/string.scm 628 */
					obj_t BgL_resz00_1130;

					BgL_resz00_1130 = make_string_sans_fill(BgL_lenz00_1129);
					{	/* Ieee/string.scm 629 */

						{
							long BgL_iz00_3036;

							BgL_iz00_3036 = ((long) 0);
						BgL_loopz00_3035:
							if ((BgL_iz00_3036 == BgL_lenz00_1129))
								{	/* Ieee/string.scm 631 */
									return BgL_resz00_1130;
								}
							else
								{	/* Ieee/string.scm 631 */
									{	/* Ieee/string.scm 345 */
										unsigned char BgL_tmpz00_6838;

										BgL_tmpz00_6838 =
											toupper(STRING_REF(BgL_stringz00_88, BgL_iz00_3036));
										STRING_SET(BgL_resz00_1130, BgL_iz00_3036, BgL_tmpz00_6838);
									}
									{
										long BgL_iz00_6842;

										BgL_iz00_6842 = (BgL_iz00_3036 + ((long) 1));
										BgL_iz00_3036 = BgL_iz00_6842;
										goto BgL_loopz00_3035;
									}
								}
						}
					}
				}
			}
		}

	}



/* &string-upcase */
	obj_t BGl_z62stringzd2upcasezb0zz__r4_strings_6_7z00(obj_t BgL_envz00_5223,
		obj_t BgL_stringz00_5224)
	{
		{	/* Ieee/string.scm 627 */
			{	/* Ieee/string.scm 628 */
				obj_t BgL_auxz00_6844;

				if (STRINGP(BgL_stringz00_5224))
					{	/* Ieee/string.scm 628 */
						BgL_auxz00_6844 = BgL_stringz00_5224;
					}
				else
					{
						obj_t BgL_auxz00_6847;

						BgL_auxz00_6847 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 28975)),
							BGl_string3517z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5224);
						FAILURE(BgL_auxz00_6847, BFALSE, BFALSE);
					}
				return BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(BgL_auxz00_6844);
			}
		}

	}



/* string-downcase */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_89)
	{
		{	/* Ieee/string.scm 640 */
			{	/* Ieee/string.scm 641 */
				long BgL_lenz00_1139;

				BgL_lenz00_1139 = STRING_LENGTH(BgL_stringz00_89);
				{	/* Ieee/string.scm 641 */
					obj_t BgL_resz00_1140;

					BgL_resz00_1140 = make_string_sans_fill(BgL_lenz00_1139);
					{	/* Ieee/string.scm 642 */

						{
							long BgL_iz00_3070;

							BgL_iz00_3070 = ((long) 0);
						BgL_loopz00_3069:
							if ((BgL_iz00_3070 == BgL_lenz00_1139))
								{	/* Ieee/string.scm 644 */
									return BgL_resz00_1140;
								}
							else
								{	/* Ieee/string.scm 644 */
									{	/* Ieee/string.scm 345 */
										unsigned char BgL_tmpz00_6856;

										BgL_tmpz00_6856 =
											tolower(STRING_REF(BgL_stringz00_89, BgL_iz00_3070));
										STRING_SET(BgL_resz00_1140, BgL_iz00_3070, BgL_tmpz00_6856);
									}
									{
										long BgL_iz00_6860;

										BgL_iz00_6860 = (BgL_iz00_3070 + ((long) 1));
										BgL_iz00_3070 = BgL_iz00_6860;
										goto BgL_loopz00_3069;
									}
								}
						}
					}
				}
			}
		}

	}



/* &string-downcase */
	obj_t BGl_z62stringzd2downcasezb0zz__r4_strings_6_7z00(obj_t BgL_envz00_5225,
		obj_t BgL_stringz00_5226)
	{
		{	/* Ieee/string.scm 640 */
			{	/* Ieee/string.scm 641 */
				obj_t BgL_auxz00_6862;

				if (STRINGP(BgL_stringz00_5226))
					{	/* Ieee/string.scm 641 */
						BgL_auxz00_6862 = BgL_stringz00_5226;
					}
				else
					{
						obj_t BgL_auxz00_6865;

						BgL_auxz00_6865 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 29460)),
							BGl_string3518z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5226);
						FAILURE(BgL_auxz00_6865, BFALSE, BFALSE);
					}
				return BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(BgL_auxz00_6862);
			}
		}

	}



/* string-upcase! */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2upcasez12zc0zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_90)
	{
		{	/* Ieee/string.scm 653 */
			{	/* Ieee/string.scm 654 */
				long BgL_lenz00_1149;

				BgL_lenz00_1149 = STRING_LENGTH(BgL_stringz00_90);
				{
					long BgL_iz00_3104;

					BgL_iz00_3104 = ((long) 0);
				BgL_loopz00_3103:
					if ((BgL_iz00_3104 == BgL_lenz00_1149))
						{	/* Ieee/string.scm 656 */
							return BgL_stringz00_90;
						}
					else
						{	/* Ieee/string.scm 656 */
							{	/* Ieee/string.scm 345 */
								unsigned char BgL_tmpz00_6873;

								BgL_tmpz00_6873 =
									toupper(STRING_REF(BgL_stringz00_90, BgL_iz00_3104));
								STRING_SET(BgL_stringz00_90, BgL_iz00_3104, BgL_tmpz00_6873);
							}
							{
								long BgL_iz00_6877;

								BgL_iz00_6877 = (BgL_iz00_3104 + ((long) 1));
								BgL_iz00_3104 = BgL_iz00_6877;
								goto BgL_loopz00_3103;
							}
						}
				}
			}
		}

	}



/* &string-upcase! */
	obj_t BGl_z62stringzd2upcasez12za2zz__r4_strings_6_7z00(obj_t BgL_envz00_5227,
		obj_t BgL_stringz00_5228)
	{
		{	/* Ieee/string.scm 653 */
			{	/* Ieee/string.scm 654 */
				obj_t BgL_auxz00_6879;

				if (STRINGP(BgL_stringz00_5228))
					{	/* Ieee/string.scm 654 */
						BgL_auxz00_6879 = BgL_stringz00_5228;
					}
				else
					{
						obj_t BgL_auxz00_6882;

						BgL_auxz00_6882 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 29946)),
							BGl_string3519z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5228);
						FAILURE(BgL_auxz00_6882, BFALSE, BFALSE);
					}
				return BGl_stringzd2upcasez12zc0zz__r4_strings_6_7z00(BgL_auxz00_6879);
			}
		}

	}



/* string-downcase! */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2downcasez12zc0zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_91)
	{
		{	/* Ieee/string.scm 665 */
			{	/* Ieee/string.scm 666 */
				long BgL_lenz00_1158;

				BgL_lenz00_1158 = STRING_LENGTH(BgL_stringz00_91);
				{
					long BgL_iz00_3138;

					BgL_iz00_3138 = ((long) 0);
				BgL_loopz00_3137:
					if ((BgL_iz00_3138 == BgL_lenz00_1158))
						{	/* Ieee/string.scm 668 */
							return BgL_stringz00_91;
						}
					else
						{	/* Ieee/string.scm 668 */
							{	/* Ieee/string.scm 345 */
								unsigned char BgL_tmpz00_6890;

								BgL_tmpz00_6890 =
									tolower(STRING_REF(BgL_stringz00_91, BgL_iz00_3138));
								STRING_SET(BgL_stringz00_91, BgL_iz00_3138, BgL_tmpz00_6890);
							}
							{
								long BgL_iz00_6894;

								BgL_iz00_6894 = (BgL_iz00_3138 + ((long) 1));
								BgL_iz00_3138 = BgL_iz00_6894;
								goto BgL_loopz00_3137;
							}
						}
				}
			}
		}

	}



/* &string-downcase! */
	obj_t BGl_z62stringzd2downcasez12za2zz__r4_strings_6_7z00(obj_t
		BgL_envz00_5229, obj_t BgL_stringz00_5230)
	{
		{	/* Ieee/string.scm 665 */
			{	/* Ieee/string.scm 666 */
				obj_t BgL_auxz00_6896;

				if (STRINGP(BgL_stringz00_5230))
					{	/* Ieee/string.scm 666 */
						BgL_auxz00_6896 = BgL_stringz00_5230;
					}
				else
					{
						obj_t BgL_auxz00_6899;

						BgL_auxz00_6899 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 30401)),
							BGl_string3520z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5230);
						FAILURE(BgL_auxz00_6899, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2downcasez12zc0zz__r4_strings_6_7z00(BgL_auxz00_6896);
			}
		}

	}



/* string-capitalize! */
	BGL_EXPORTED_DEF obj_t
		BGl_stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(obj_t BgL_stringz00_92)
	{
		{	/* Ieee/string.scm 681 */
			{	/* Ieee/string.scm 682 */
				bool_t BgL_nonzd2firstzd2alphaz00_1167;
				long BgL_stringzd2lenzd2_1168;

				BgL_nonzd2firstzd2alphaz00_1167 = ((bool_t) 0);
				BgL_stringzd2lenzd2_1168 = STRING_LENGTH(BgL_stringz00_92);
				{
					long BgL_iz00_1170;

					BgL_iz00_1170 = ((long) 0);
				BgL_zc3z04anonymousza31368ze3z87_1171:
					if ((BgL_iz00_1170 == BgL_stringzd2lenzd2_1168))
						{	/* Ieee/string.scm 684 */
							return BgL_stringz00_92;
						}
					else
						{	/* Ieee/string.scm 684 */
							{	/* Ieee/string.scm 686 */
								unsigned char BgL_cz00_1173;

								BgL_cz00_1173 = STRING_REF(BgL_stringz00_92, BgL_iz00_1170);
								{	/* Ieee/string.scm 687 */
									bool_t BgL_test3919z00_6908;

									{	/* Ieee/string.scm 687 */
										bool_t BgL_test3920z00_6909;

										{	/* Ieee/string.scm 687 */
											bool_t BgL_res2323z00_3165;

											BgL_res2323z00_3165 = isalpha(BgL_cz00_1173);
											BgL_test3920z00_6909 = BgL_res2323z00_3165;
										}
										if (BgL_test3920z00_6909)
											{	/* Ieee/string.scm 687 */
												BgL_test3919z00_6908 = ((bool_t) 1);
											}
										else
											{	/* Ieee/string.scm 687 */
												BgL_test3919z00_6908 = ((BgL_cz00_1173) > ((long) 127));
									}}
									if (BgL_test3919z00_6908)
										{	/* Ieee/string.scm 687 */
											if (BgL_nonzd2firstzd2alphaz00_1167)
												{	/* Ieee/string.scm 345 */
													unsigned char BgL_tmpz00_6914;

													BgL_tmpz00_6914 = tolower(BgL_cz00_1173);
													STRING_SET(BgL_stringz00_92, BgL_iz00_1170,
														BgL_tmpz00_6914);
												}
											else
												{	/* Ieee/string.scm 688 */
													BgL_nonzd2firstzd2alphaz00_1167 = ((bool_t) 1);
													{	/* Ieee/string.scm 345 */
														unsigned char BgL_tmpz00_6917;

														BgL_tmpz00_6917 = toupper(BgL_cz00_1173);
														STRING_SET(BgL_stringz00_92, BgL_iz00_1170,
															BgL_tmpz00_6917);
										}}}
									else
										{	/* Ieee/string.scm 687 */
											BgL_nonzd2firstzd2alphaz00_1167 = ((bool_t) 0);
										}
								}
							}
							{
								long BgL_iz00_6920;

								BgL_iz00_6920 = (BgL_iz00_1170 + ((long) 1));
								BgL_iz00_1170 = BgL_iz00_6920;
								goto BgL_zc3z04anonymousza31368ze3z87_1171;
							}
						}
				}
			}
		}

	}



/* &string-capitalize! */
	obj_t BGl_z62stringzd2capitaliza7ez12z05zz__r4_strings_6_7z00(obj_t
		BgL_envz00_5231, obj_t BgL_stringz00_5232)
	{
		{	/* Ieee/string.scm 681 */
			{	/* Ieee/string.scm 682 */
				obj_t BgL_auxz00_6922;

				if (STRINGP(BgL_stringz00_5232))
					{	/* Ieee/string.scm 682 */
						BgL_auxz00_6922 = BgL_stringz00_5232;
					}
				else
					{
						obj_t BgL_auxz00_6925;

						BgL_auxz00_6925 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 31156)),
							BGl_string3521z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5232);
						FAILURE(BgL_auxz00_6925, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(BgL_auxz00_6922);
			}
		}

	}



/* string-capitalize */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2capitaliza7ez75zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_93)
	{
		{	/* Ieee/string.scm 698 */
			return
				BGl_stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00
				(BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_stringz00_93));
		}

	}



/* &string-capitalize */
	obj_t BGl_z62stringzd2capitaliza7ez17zz__r4_strings_6_7z00(obj_t
		BgL_envz00_5233, obj_t BgL_stringz00_5234)
	{
		{	/* Ieee/string.scm 698 */
			{	/* Ieee/string.scm 699 */
				obj_t BgL_auxz00_6932;

				if (STRINGP(BgL_stringz00_5234))
					{	/* Ieee/string.scm 699 */
						BgL_auxz00_6932 = BgL_stringz00_5234;
					}
				else
					{
						obj_t BgL_auxz00_6935;

						BgL_auxz00_6935 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 31880)),
							BGl_string3522z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5234);
						FAILURE(BgL_auxz00_6935, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2capitaliza7ez75zz__r4_strings_6_7z00(BgL_auxz00_6932);
			}
		}

	}



/* string-for-read */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2forzd2readz00zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_94)
	{
		{	/* Ieee/string.scm 704 */
			return string_for_read(BgL_stringz00_94);
		}

	}



/* &string-for-read */
	obj_t BGl_z62stringzd2forzd2readz62zz__r4_strings_6_7z00(obj_t
		BgL_envz00_5235, obj_t BgL_stringz00_5236)
	{
		{	/* Ieee/string.scm 704 */
			{	/* Ieee/string.scm 705 */
				obj_t BgL_auxz00_6941;

				if (STRINGP(BgL_stringz00_5236))
					{	/* Ieee/string.scm 705 */
						BgL_auxz00_6941 = BgL_stringz00_5236;
					}
				else
					{
						obj_t BgL_auxz00_6944;

						BgL_auxz00_6944 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 32169)),
							BGl_string3523z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5236);
						FAILURE(BgL_auxz00_6944, BFALSE, BFALSE);
					}
				return BGl_stringzd2forzd2readz00zz__r4_strings_6_7z00(BgL_auxz00_6941);
			}
		}

	}



/* escape-C-string */
	BGL_EXPORTED_DEF obj_t BGl_escapezd2Czd2stringz00zz__r4_strings_6_7z00(obj_t
		BgL_strz00_95)
	{
		{	/* Ieee/string.scm 712 */
			{	/* Ieee/string.scm 713 */
				obj_t BgL_arg1378z00_5841;

				{	/* Ieee/string.scm 190 */
					long BgL_endz00_5842;

					BgL_endz00_5842 = STRING_LENGTH(BgL_strz00_95);
					{	/* Ieee/string.scm 190 */

						BgL_arg1378z00_5841 =
							BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_95, ((long) 1),
							BgL_endz00_5842);
				}}
				return
					bgl_escape_C_string(BSTRING_TO_STRING(BgL_arg1378z00_5841),
					((long) 0), STRING_LENGTH(BgL_arg1378z00_5841));
		}}

	}



/* &escape-C-string */
	obj_t BGl_z62escapezd2Czd2stringz62zz__r4_strings_6_7z00(obj_t
		BgL_envz00_5237, obj_t BgL_strz00_5238)
	{
		{	/* Ieee/string.scm 712 */
			{	/* Ieee/string.scm 713 */
				obj_t BgL_auxz00_6954;

				if (STRINGP(BgL_strz00_5238))
					{	/* Ieee/string.scm 713 */
						BgL_auxz00_6954 = BgL_strz00_5238;
					}
				else
					{
						obj_t BgL_auxz00_6957;

						BgL_auxz00_6957 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 32623)),
							BGl_string3524z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_strz00_5238);
						FAILURE(BgL_auxz00_6957, BFALSE, BFALSE);
					}
				return BGl_escapezd2Czd2stringz00zz__r4_strings_6_7z00(BgL_auxz00_6954);
			}
		}

	}



/* escape-scheme-string */
	BGL_EXPORTED_DEF obj_t
		BGl_escapezd2schemezd2stringz00zz__r4_strings_6_7z00(obj_t BgL_strz00_96)
	{
		{	/* Ieee/string.scm 720 */
			return
				bgl_escape_scheme_string(BSTRING_TO_STRING(BgL_strz00_96), ((long) 0),
				STRING_LENGTH(BgL_strz00_96));
		}

	}



/* &escape-scheme-string */
	obj_t BGl_z62escapezd2schemezd2stringz62zz__r4_strings_6_7z00(obj_t
		BgL_envz00_5239, obj_t BgL_strz00_5240)
	{
		{	/* Ieee/string.scm 720 */
			{	/* Ieee/string.scm 721 */
				obj_t BgL_auxz00_6965;

				if (STRINGP(BgL_strz00_5240))
					{	/* Ieee/string.scm 721 */
						BgL_auxz00_6965 = BgL_strz00_5240;
					}
				else
					{
						obj_t BgL_auxz00_6968;

						BgL_auxz00_6968 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 33088)),
							BGl_string3525z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_strz00_5240);
						FAILURE(BgL_auxz00_6968, BFALSE, BFALSE);
					}
				return
					BGl_escapezd2schemezd2stringz00zz__r4_strings_6_7z00(BgL_auxz00_6965);
			}
		}

	}



/* string-as-read */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2aszd2readz00zz__r4_strings_6_7z00(obj_t
		BgL_strz00_97)
	{
		{	/* Ieee/string.scm 726 */
			return
				bgl_escape_C_string(BSTRING_TO_STRING(BgL_strz00_97), ((long) 0),
				STRING_LENGTH(BgL_strz00_97));
		}

	}



/* &string-as-read */
	obj_t BGl_z62stringzd2aszd2readz62zz__r4_strings_6_7z00(obj_t BgL_envz00_5241,
		obj_t BgL_strz00_5242)
	{
		{	/* Ieee/string.scm 726 */
			{	/* Ieee/string.scm 727 */
				obj_t BgL_auxz00_6976;

				if (STRINGP(BgL_strz00_5242))
					{	/* Ieee/string.scm 727 */
						BgL_auxz00_6976 = BgL_strz00_5242;
					}
				else
					{
						obj_t BgL_auxz00_6979;

						BgL_auxz00_6979 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 33396)),
							BGl_string3526z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_strz00_5242);
						FAILURE(BgL_auxz00_6979, BFALSE, BFALSE);
					}
				return BGl_stringzd2aszd2readz00zz__r4_strings_6_7z00(BgL_auxz00_6976);
			}
		}

	}



/* blit-string-ur! */
	BGL_EXPORTED_DEF obj_t BGl_blitzd2stringzd2urz12z12zz__r4_strings_6_7z00(obj_t
		BgL_s1z00_98, long BgL_o1z00_99, obj_t BgL_s2z00_100, long BgL_o2z00_101,
		long BgL_lz00_102)
	{
		{	/* Ieee/string.scm 732 */
			return
				blit_string(BgL_s1z00_98, BgL_o1z00_99, BgL_s2z00_100, BgL_o2z00_101,
				BgL_lz00_102);
		}

	}



/* &blit-string-ur! */
	obj_t BGl_z62blitzd2stringzd2urz12z70zz__r4_strings_6_7z00(obj_t
		BgL_envz00_5243, obj_t BgL_s1z00_5244, obj_t BgL_o1z00_5245,
		obj_t BgL_s2z00_5246, obj_t BgL_o2z00_5247, obj_t BgL_lz00_5248)
	{
		{	/* Ieee/string.scm 732 */
			{	/* Ieee/string.scm 733 */
				long BgL_auxz00_7017;
				long BgL_auxz00_7008;
				obj_t BgL_auxz00_7001;
				long BgL_auxz00_6992;
				obj_t BgL_auxz00_6985;

				{	/* Ieee/string.scm 733 */
					obj_t BgL_tmpz00_7018;

					if (INTEGERP(BgL_lz00_5248))
						{	/* Ieee/string.scm 733 */
							BgL_tmpz00_7018 = BgL_lz00_5248;
						}
					else
						{
							obj_t BgL_auxz00_7021;

							BgL_auxz00_7021 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 33691)),
								BGl_string3527z00zz__r4_strings_6_7z00,
								BGl_string3480z00zz__r4_strings_6_7z00, BgL_lz00_5248);
							FAILURE(BgL_auxz00_7021, BFALSE, BFALSE);
						}
					BgL_auxz00_7017 = (long) CINT(BgL_tmpz00_7018);
				}
				{	/* Ieee/string.scm 733 */
					obj_t BgL_tmpz00_7009;

					if (INTEGERP(BgL_o2z00_5247))
						{	/* Ieee/string.scm 733 */
							BgL_tmpz00_7009 = BgL_o2z00_5247;
						}
					else
						{
							obj_t BgL_auxz00_7012;

							BgL_auxz00_7012 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 33691)),
								BGl_string3527z00zz__r4_strings_6_7z00,
								BGl_string3480z00zz__r4_strings_6_7z00, BgL_o2z00_5247);
							FAILURE(BgL_auxz00_7012, BFALSE, BFALSE);
						}
					BgL_auxz00_7008 = (long) CINT(BgL_tmpz00_7009);
				}
				if (STRINGP(BgL_s2z00_5246))
					{	/* Ieee/string.scm 733 */
						BgL_auxz00_7001 = BgL_s2z00_5246;
					}
				else
					{
						obj_t BgL_auxz00_7004;

						BgL_auxz00_7004 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 33691)),
							BGl_string3527z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_s2z00_5246);
						FAILURE(BgL_auxz00_7004, BFALSE, BFALSE);
					}
				{	/* Ieee/string.scm 733 */
					obj_t BgL_tmpz00_6993;

					if (INTEGERP(BgL_o1z00_5245))
						{	/* Ieee/string.scm 733 */
							BgL_tmpz00_6993 = BgL_o1z00_5245;
						}
					else
						{
							obj_t BgL_auxz00_6996;

							BgL_auxz00_6996 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 33691)),
								BGl_string3527z00zz__r4_strings_6_7z00,
								BGl_string3480z00zz__r4_strings_6_7z00, BgL_o1z00_5245);
							FAILURE(BgL_auxz00_6996, BFALSE, BFALSE);
						}
					BgL_auxz00_6992 = (long) CINT(BgL_tmpz00_6993);
				}
				if (STRINGP(BgL_s1z00_5244))
					{	/* Ieee/string.scm 733 */
						BgL_auxz00_6985 = BgL_s1z00_5244;
					}
				else
					{
						obj_t BgL_auxz00_6988;

						BgL_auxz00_6988 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 33691)),
							BGl_string3527z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_s1z00_5244);
						FAILURE(BgL_auxz00_6988, BFALSE, BFALSE);
					}
				return
					BGl_blitzd2stringzd2urz12z12zz__r4_strings_6_7z00(BgL_auxz00_6985,
					BgL_auxz00_6992, BgL_auxz00_7001, BgL_auxz00_7008, BgL_auxz00_7017);
			}
		}

	}



/* blit-string! */
	BGL_EXPORTED_DEF obj_t BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t
		BgL_s1z00_103, long BgL_o1z00_104, obj_t BgL_s2z00_105, long BgL_o2z00_106,
		long BgL_lz00_107)
	{
		{	/* Ieee/string.scm 738 */
			{	/* Ieee/string.scm 739 */
				bool_t BgL_test3933z00_7027;

				{	/* Ieee/string.scm 739 */
					bool_t BgL_test3934z00_7028;

					{	/* Ieee/string.scm 739 */
						long BgL_auxz00_7031;
						long BgL_tmpz00_7029;

						BgL_auxz00_7031 = (STRING_LENGTH(BgL_s1z00_103) + ((long) 1));
						BgL_tmpz00_7029 = (BgL_lz00_107 + BgL_o1z00_104);
						BgL_test3934z00_7028 =
							BOUND_CHECK(BgL_tmpz00_7029, BgL_auxz00_7031);
					}
					if (BgL_test3934z00_7028)
						{	/* Ieee/string.scm 740 */
							long BgL_auxz00_7037;
							long BgL_tmpz00_7035;

							BgL_auxz00_7037 = (STRING_LENGTH(BgL_s2z00_105) + ((long) 1));
							BgL_tmpz00_7035 = (BgL_lz00_107 + BgL_o2z00_106);
							BgL_test3933z00_7027 =
								BOUND_CHECK(BgL_tmpz00_7035, BgL_auxz00_7037);
						}
					else
						{	/* Ieee/string.scm 739 */
							BgL_test3933z00_7027 = ((bool_t) 0);
						}
				}
				if (BgL_test3933z00_7027)
					{	/* Ieee/string.scm 739 */
						return
							blit_string(BgL_s1z00_103, BgL_o1z00_104, BgL_s2z00_105,
							BgL_o2z00_106, BgL_lz00_107);
					}
				else
					{	/* Ieee/string.scm 743 */
						obj_t BgL_arg1392z00_1201;
						obj_t BgL_arg1393z00_1202;

						{	/* Ieee/string.scm 743 */
							obj_t BgL_list1394z00_1203;

							{	/* Ieee/string.scm 743 */
								obj_t BgL_arg1395z00_1204;

								{	/* Ieee/string.scm 743 */
									obj_t BgL_arg1396z00_1205;

									{	/* Ieee/string.scm 743 */
										obj_t BgL_arg1397z00_1206;

										{	/* Ieee/string.scm 743 */
											obj_t BgL_arg1398z00_1207;

											BgL_arg1398z00_1207 =
												MAKE_YOUNG_PAIR(BGl_string3528z00zz__r4_strings_6_7z00,
												BNIL);
											BgL_arg1397z00_1206 =
												MAKE_YOUNG_PAIR(BgL_s2z00_105, BgL_arg1398z00_1207);
										}
										BgL_arg1396z00_1205 =
											MAKE_YOUNG_PAIR(BGl_string3529z00zz__r4_strings_6_7z00,
											BgL_arg1397z00_1206);
									}
									BgL_arg1395z00_1204 =
										MAKE_YOUNG_PAIR(BgL_s1z00_103, BgL_arg1396z00_1205);
								}
								BgL_list1394z00_1203 =
									MAKE_YOUNG_PAIR(BGl_string3530z00zz__r4_strings_6_7z00,
									BgL_arg1395z00_1204);
							}
							BgL_arg1392z00_1201 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list1394z00_1203);
						}
						{	/* Ieee/string.scm 744 */
							long BgL_arg1399z00_1208;
							long BgL_arg1400z00_1209;

							BgL_arg1399z00_1208 = STRING_LENGTH(BgL_s1z00_103);
							BgL_arg1400z00_1209 = STRING_LENGTH(BgL_s2z00_105);
							{	/* Ieee/string.scm 744 */
								obj_t BgL_list1401z00_1210;

								{	/* Ieee/string.scm 744 */
									obj_t BgL_arg1402z00_1211;

									{	/* Ieee/string.scm 744 */
										obj_t BgL_arg1404z00_1212;

										{	/* Ieee/string.scm 744 */
											obj_t BgL_arg1405z00_1213;

											{	/* Ieee/string.scm 744 */
												obj_t BgL_arg1406z00_1214;

												BgL_arg1406z00_1214 =
													MAKE_YOUNG_PAIR(BINT(BgL_lz00_107), BNIL);
												BgL_arg1405z00_1213 =
													MAKE_YOUNG_PAIR(BINT(BgL_o2z00_106),
													BgL_arg1406z00_1214);
											}
											BgL_arg1404z00_1212 =
												MAKE_YOUNG_PAIR(BINT(BgL_arg1400z00_1209),
												BgL_arg1405z00_1213);
										}
										BgL_arg1402z00_1211 =
											MAKE_YOUNG_PAIR(BINT(BgL_o1z00_104), BgL_arg1404z00_1212);
									}
									BgL_list1401z00_1210 =
										MAKE_YOUNG_PAIR(BINT(BgL_arg1399z00_1208),
										BgL_arg1402z00_1211);
								}
								BgL_arg1393z00_1202 = BgL_list1401z00_1210;
						}}
						return
							BGl_errorz00zz__errorz00(BGl_string3531z00zz__r4_strings_6_7z00,
							BgL_arg1392z00_1201, BgL_arg1393z00_1202);
					}
			}
		}

	}



/* &blit-string! */
	obj_t BGl_z62blitzd2stringz12za2zz__r4_strings_6_7z00(obj_t BgL_envz00_5249,
		obj_t BgL_s1z00_5250, obj_t BgL_o1z00_5251, obj_t BgL_s2z00_5252,
		obj_t BgL_o2z00_5253, obj_t BgL_lz00_5254)
	{
		{	/* Ieee/string.scm 738 */
			{	/* Ieee/string.scm 739 */
				long BgL_auxz00_7093;
				long BgL_auxz00_7084;
				obj_t BgL_auxz00_7077;
				long BgL_auxz00_7068;
				obj_t BgL_auxz00_7061;

				{	/* Ieee/string.scm 739 */
					obj_t BgL_tmpz00_7094;

					if (INTEGERP(BgL_lz00_5254))
						{	/* Ieee/string.scm 739 */
							BgL_tmpz00_7094 = BgL_lz00_5254;
						}
					else
						{
							obj_t BgL_auxz00_7097;

							BgL_auxz00_7097 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 33984)),
								BGl_string3532z00zz__r4_strings_6_7z00,
								BGl_string3480z00zz__r4_strings_6_7z00, BgL_lz00_5254);
							FAILURE(BgL_auxz00_7097, BFALSE, BFALSE);
						}
					BgL_auxz00_7093 = (long) CINT(BgL_tmpz00_7094);
				}
				{	/* Ieee/string.scm 739 */
					obj_t BgL_tmpz00_7085;

					if (INTEGERP(BgL_o2z00_5253))
						{	/* Ieee/string.scm 739 */
							BgL_tmpz00_7085 = BgL_o2z00_5253;
						}
					else
						{
							obj_t BgL_auxz00_7088;

							BgL_auxz00_7088 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 33984)),
								BGl_string3532z00zz__r4_strings_6_7z00,
								BGl_string3480z00zz__r4_strings_6_7z00, BgL_o2z00_5253);
							FAILURE(BgL_auxz00_7088, BFALSE, BFALSE);
						}
					BgL_auxz00_7084 = (long) CINT(BgL_tmpz00_7085);
				}
				if (STRINGP(BgL_s2z00_5252))
					{	/* Ieee/string.scm 739 */
						BgL_auxz00_7077 = BgL_s2z00_5252;
					}
				else
					{
						obj_t BgL_auxz00_7080;

						BgL_auxz00_7080 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 33984)),
							BGl_string3532z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_s2z00_5252);
						FAILURE(BgL_auxz00_7080, BFALSE, BFALSE);
					}
				{	/* Ieee/string.scm 739 */
					obj_t BgL_tmpz00_7069;

					if (INTEGERP(BgL_o1z00_5251))
						{	/* Ieee/string.scm 739 */
							BgL_tmpz00_7069 = BgL_o1z00_5251;
						}
					else
						{
							obj_t BgL_auxz00_7072;

							BgL_auxz00_7072 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 33984)),
								BGl_string3532z00zz__r4_strings_6_7z00,
								BGl_string3480z00zz__r4_strings_6_7z00, BgL_o1z00_5251);
							FAILURE(BgL_auxz00_7072, BFALSE, BFALSE);
						}
					BgL_auxz00_7068 = (long) CINT(BgL_tmpz00_7069);
				}
				if (STRINGP(BgL_s1z00_5250))
					{	/* Ieee/string.scm 739 */
						BgL_auxz00_7061 = BgL_s1z00_5250;
					}
				else
					{
						obj_t BgL_auxz00_7064;

						BgL_auxz00_7064 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 33984)),
							BGl_string3532z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_s1z00_5250);
						FAILURE(BgL_auxz00_7064, BFALSE, BFALSE);
					}
				return
					BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_auxz00_7061,
					BgL_auxz00_7068, BgL_auxz00_7077, BgL_auxz00_7084, BgL_auxz00_7093);
			}
		}

	}



/* string-shrink! */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2shrinkz12zc0zz__r4_strings_6_7z00(obj_t
		BgL_sz00_108, long BgL_lz00_109)
	{
		{	/* Ieee/string.scm 749 */
			return bgl_string_shrink(BgL_sz00_108, BgL_lz00_109);
		}

	}



/* &string-shrink! */
	obj_t BGl_z62stringzd2shrinkz12za2zz__r4_strings_6_7z00(obj_t BgL_envz00_5255,
		obj_t BgL_sz00_5256, obj_t BgL_lz00_5257)
	{
		{	/* Ieee/string.scm 749 */
			{	/* Ieee/string.scm 750 */
				long BgL_auxz00_7111;
				obj_t BgL_auxz00_7104;

				{	/* Ieee/string.scm 750 */
					obj_t BgL_tmpz00_7112;

					if (INTEGERP(BgL_lz00_5257))
						{	/* Ieee/string.scm 750 */
							BgL_tmpz00_7112 = BgL_lz00_5257;
						}
					else
						{
							obj_t BgL_auxz00_7115;

							BgL_auxz00_7115 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 34593)),
								BGl_string3533z00zz__r4_strings_6_7z00,
								BGl_string3480z00zz__r4_strings_6_7z00, BgL_lz00_5257);
							FAILURE(BgL_auxz00_7115, BFALSE, BFALSE);
						}
					BgL_auxz00_7111 = (long) CINT(BgL_tmpz00_7112);
				}
				if (STRINGP(BgL_sz00_5256))
					{	/* Ieee/string.scm 750 */
						BgL_auxz00_7104 = BgL_sz00_5256;
					}
				else
					{
						obj_t BgL_auxz00_7107;

						BgL_auxz00_7107 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 34593)),
							BGl_string3533z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_sz00_5256);
						FAILURE(BgL_auxz00_7107, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2shrinkz12zc0zz__r4_strings_6_7z00(BgL_auxz00_7104,
					BgL_auxz00_7111);
			}
		}

	}



/* string-replace */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t
		BgL_strz00_110, unsigned char BgL_c1z00_111, unsigned char BgL_c2z00_112)
	{
		{	/* Ieee/string.scm 755 */
			{	/* Ieee/string.scm 756 */
				long BgL_lenz00_1222;

				BgL_lenz00_1222 = STRING_LENGTH(BgL_strz00_110);
				{	/* Ieee/string.scm 756 */
					obj_t BgL_newz00_1223;

					{	/* Ieee/string.scm 168 */

						BgL_newz00_1223 =
							make_string(BgL_lenz00_1222, ((unsigned char) ' '));
					}
					{	/* Ieee/string.scm 757 */

						{
							long BgL_iz00_1225;

							BgL_iz00_1225 = ((long) 0);
						BgL_zc3z04anonymousza31414ze3z87_1226:
							if ((BgL_iz00_1225 == BgL_lenz00_1222))
								{	/* Ieee/string.scm 759 */
									return BgL_newz00_1223;
								}
							else
								{	/* Ieee/string.scm 761 */
									unsigned char BgL_cz00_1228;

									BgL_cz00_1228 = STRING_REF(BgL_strz00_110, BgL_iz00_1225);
									if ((BgL_cz00_1228 == (unsigned char) (BgL_c1z00_111)))
										{	/* Ieee/string.scm 345 */
											unsigned char BgL_tmpz00_7129;

											BgL_tmpz00_7129 = (unsigned char) (BgL_c2z00_112);
											STRING_SET(BgL_newz00_1223, BgL_iz00_1225,
												BgL_tmpz00_7129);
										}
									else
										{	/* Ieee/string.scm 762 */
											STRING_SET(BgL_newz00_1223, BgL_iz00_1225, BgL_cz00_1228);
										}
									{
										long BgL_iz00_7133;

										BgL_iz00_7133 = (BgL_iz00_1225 + ((long) 1));
										BgL_iz00_1225 = BgL_iz00_7133;
										goto BgL_zc3z04anonymousza31414ze3z87_1226;
									}
								}
						}
					}
				}
			}
		}

	}



/* &string-replace */
	obj_t BGl_z62stringzd2replacezb0zz__r4_strings_6_7z00(obj_t BgL_envz00_5258,
		obj_t BgL_strz00_5259, obj_t BgL_c1z00_5260, obj_t BgL_c2z00_5261)
	{
		{	/* Ieee/string.scm 755 */
			{	/* Ieee/string.scm 756 */
				unsigned char BgL_auxz00_7151;
				unsigned char BgL_auxz00_7142;
				obj_t BgL_auxz00_7135;

				{	/* Ieee/string.scm 756 */
					obj_t BgL_tmpz00_7152;

					if (CHARP(BgL_c2z00_5261))
						{	/* Ieee/string.scm 756 */
							BgL_tmpz00_7152 = BgL_c2z00_5261;
						}
					else
						{
							obj_t BgL_auxz00_7155;

							BgL_auxz00_7155 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 34877)),
								BGl_string3534z00zz__r4_strings_6_7z00,
								BGl_string3481z00zz__r4_strings_6_7z00, BgL_c2z00_5261);
							FAILURE(BgL_auxz00_7155, BFALSE, BFALSE);
						}
					BgL_auxz00_7151 = CCHAR(BgL_tmpz00_7152);
				}
				{	/* Ieee/string.scm 756 */
					obj_t BgL_tmpz00_7143;

					if (CHARP(BgL_c1z00_5260))
						{	/* Ieee/string.scm 756 */
							BgL_tmpz00_7143 = BgL_c1z00_5260;
						}
					else
						{
							obj_t BgL_auxz00_7146;

							BgL_auxz00_7146 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 34877)),
								BGl_string3534z00zz__r4_strings_6_7z00,
								BGl_string3481z00zz__r4_strings_6_7z00, BgL_c1z00_5260);
							FAILURE(BgL_auxz00_7146, BFALSE, BFALSE);
						}
					BgL_auxz00_7142 = CCHAR(BgL_tmpz00_7143);
				}
				if (STRINGP(BgL_strz00_5259))
					{	/* Ieee/string.scm 756 */
						BgL_auxz00_7135 = BgL_strz00_5259;
					}
				else
					{
						obj_t BgL_auxz00_7138;

						BgL_auxz00_7138 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 34877)),
							BGl_string3534z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_strz00_5259);
						FAILURE(BgL_auxz00_7138, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2replacezd2zz__r4_strings_6_7z00(BgL_auxz00_7135,
					BgL_auxz00_7142, BgL_auxz00_7151);
			}
		}

	}



/* string-replace! */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00(obj_t
		BgL_strz00_113, unsigned char BgL_c1z00_114, unsigned char BgL_c2z00_115)
	{
		{	/* Ieee/string.scm 770 */
			{	/* Ieee/string.scm 771 */
				long BgL_lenz00_1234;

				BgL_lenz00_1234 = STRING_LENGTH(BgL_strz00_113);
				{
					long BgL_iz00_1236;

					BgL_iz00_1236 = ((long) 0);
				BgL_zc3z04anonymousza31418ze3z87_1237:
					if ((BgL_iz00_1236 == BgL_lenz00_1234))
						{	/* Ieee/string.scm 774 */
							return BgL_strz00_113;
						}
					else
						{	/* Ieee/string.scm 774 */
							if (
								(STRING_REF(BgL_strz00_113, BgL_iz00_1236) ==
									(unsigned char) (BgL_c1z00_114)))
								{	/* Ieee/string.scm 776 */
									{	/* Ieee/string.scm 345 */
										unsigned char BgL_tmpz00_7168;

										BgL_tmpz00_7168 = (unsigned char) (BgL_c2z00_115);
										STRING_SET(BgL_strz00_113, BgL_iz00_1236, BgL_tmpz00_7168);
									}
									{
										long BgL_iz00_7171;

										BgL_iz00_7171 = (BgL_iz00_1236 + ((long) 1));
										BgL_iz00_1236 = BgL_iz00_7171;
										goto BgL_zc3z04anonymousza31418ze3z87_1237;
									}
								}
							else
								{
									long BgL_iz00_7173;

									BgL_iz00_7173 = (BgL_iz00_1236 + ((long) 1));
									BgL_iz00_1236 = BgL_iz00_7173;
									goto BgL_zc3z04anonymousza31418ze3z87_1237;
								}
						}
				}
			}
		}

	}



/* &string-replace! */
	obj_t BGl_z62stringzd2replacez12za2zz__r4_strings_6_7z00(obj_t
		BgL_envz00_5262, obj_t BgL_strz00_5263, obj_t BgL_c1z00_5264,
		obj_t BgL_c2z00_5265)
	{
		{	/* Ieee/string.scm 770 */
			{	/* Ieee/string.scm 771 */
				unsigned char BgL_auxz00_7191;
				unsigned char BgL_auxz00_7182;
				obj_t BgL_auxz00_7175;

				{	/* Ieee/string.scm 771 */
					obj_t BgL_tmpz00_7192;

					if (CHARP(BgL_c2z00_5265))
						{	/* Ieee/string.scm 771 */
							BgL_tmpz00_7192 = BgL_c2z00_5265;
						}
					else
						{
							obj_t BgL_auxz00_7195;

							BgL_auxz00_7195 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 35399)),
								BGl_string3535z00zz__r4_strings_6_7z00,
								BGl_string3481z00zz__r4_strings_6_7z00, BgL_c2z00_5265);
							FAILURE(BgL_auxz00_7195, BFALSE, BFALSE);
						}
					BgL_auxz00_7191 = CCHAR(BgL_tmpz00_7192);
				}
				{	/* Ieee/string.scm 771 */
					obj_t BgL_tmpz00_7183;

					if (CHARP(BgL_c1z00_5264))
						{	/* Ieee/string.scm 771 */
							BgL_tmpz00_7183 = BgL_c1z00_5264;
						}
					else
						{
							obj_t BgL_auxz00_7186;

							BgL_auxz00_7186 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 35399)),
								BGl_string3535z00zz__r4_strings_6_7z00,
								BGl_string3481z00zz__r4_strings_6_7z00, BgL_c1z00_5264);
							FAILURE(BgL_auxz00_7186, BFALSE, BFALSE);
						}
					BgL_auxz00_7182 = CCHAR(BgL_tmpz00_7183);
				}
				if (STRINGP(BgL_strz00_5263))
					{	/* Ieee/string.scm 771 */
						BgL_auxz00_7175 = BgL_strz00_5263;
					}
				else
					{
						obj_t BgL_auxz00_7178;

						BgL_auxz00_7178 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 35399)),
							BGl_string3535z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_strz00_5263);
						FAILURE(BgL_auxz00_7178, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00(BgL_auxz00_7175,
					BgL_auxz00_7182, BgL_auxz00_7191);
			}
		}

	}



/* _string-delete */
	obj_t BGl__stringzd2deletezd2zz__r4_strings_6_7z00(obj_t BgL_env1129z00_121,
		obj_t BgL_opt1128z00_120)
	{
		{	/* Ieee/string.scm 785 */
			{	/* Ieee/string.scm 785 */
				obj_t BgL_stringz00_1245;
				obj_t BgL_g1130z00_1246;

				BgL_stringz00_1245 = VECTOR_REF(BgL_opt1128z00_120, ((long) 0));
				BgL_g1130z00_1246 = VECTOR_REF(BgL_opt1128z00_120, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1128z00_120))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 785 */
							long BgL_endz00_1251;

							{	/* Ieee/string.scm 785 */
								obj_t BgL_stringz00_3258;

								if (STRINGP(BgL_stringz00_1245))
									{	/* Ieee/string.scm 785 */
										BgL_stringz00_3258 = BgL_stringz00_1245;
									}
								else
									{
										obj_t BgL_auxz00_7205;

										BgL_auxz00_7205 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3476z00zz__r4_strings_6_7z00,
											BINT(((long) 35922)),
											BGl_string3536z00zz__r4_strings_6_7z00,
											BGl_string3478z00zz__r4_strings_6_7z00,
											BgL_stringz00_1245);
										FAILURE(BgL_auxz00_7205, BFALSE, BFALSE);
									}
								BgL_endz00_1251 = STRING_LENGTH(BgL_stringz00_3258);
							}
							{	/* Ieee/string.scm 785 */

								{	/* Ieee/string.scm 785 */
									obj_t BgL_auxz00_7210;

									if (STRINGP(BgL_stringz00_1245))
										{	/* Ieee/string.scm 785 */
											BgL_auxz00_7210 = BgL_stringz00_1245;
										}
									else
										{
											obj_t BgL_auxz00_7213;

											BgL_auxz00_7213 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 35851)),
												BGl_string3536z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_stringz00_1245);
											FAILURE(BgL_auxz00_7213, BFALSE, BFALSE);
										}
									return
										BGl_stringzd2deletezd2zz__r4_strings_6_7z00(BgL_auxz00_7210,
										BgL_g1130z00_1246, (int) (((long) 0)), BgL_endz00_1251);
						}}} break;
					case ((long) 3):

						{	/* Ieee/string.scm 785 */
							obj_t BgL_startz00_1252;

							BgL_startz00_1252 = VECTOR_REF(BgL_opt1128z00_120, ((long) 2));
							{	/* Ieee/string.scm 785 */
								long BgL_endz00_1253;

								{	/* Ieee/string.scm 785 */
									obj_t BgL_stringz00_3260;

									if (STRINGP(BgL_stringz00_1245))
										{	/* Ieee/string.scm 785 */
											BgL_stringz00_3260 = BgL_stringz00_1245;
										}
									else
										{
											obj_t BgL_auxz00_7222;

											BgL_auxz00_7222 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 35922)),
												BGl_string3536z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_stringz00_1245);
											FAILURE(BgL_auxz00_7222, BFALSE, BFALSE);
										}
									BgL_endz00_1253 = STRING_LENGTH(BgL_stringz00_3260);
								}
								{	/* Ieee/string.scm 785 */

									{	/* Ieee/string.scm 785 */
										int BgL_auxz00_7234;
										obj_t BgL_auxz00_7227;

										{	/* Ieee/string.scm 785 */
											obj_t BgL_tmpz00_7235;

											if (INTEGERP(BgL_startz00_1252))
												{	/* Ieee/string.scm 785 */
													BgL_tmpz00_7235 = BgL_startz00_1252;
												}
											else
												{
													obj_t BgL_auxz00_7238;

													BgL_auxz00_7238 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 35851)),
														BGl_string3536z00zz__r4_strings_6_7z00,
														BGl_string3480z00zz__r4_strings_6_7z00,
														BgL_startz00_1252);
													FAILURE(BgL_auxz00_7238, BFALSE, BFALSE);
												}
											BgL_auxz00_7234 = CINT(BgL_tmpz00_7235);
										}
										if (STRINGP(BgL_stringz00_1245))
											{	/* Ieee/string.scm 785 */
												BgL_auxz00_7227 = BgL_stringz00_1245;
											}
										else
											{
												obj_t BgL_auxz00_7230;

												BgL_auxz00_7230 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 35851)),
													BGl_string3536z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_stringz00_1245);
												FAILURE(BgL_auxz00_7230, BFALSE, BFALSE);
											}
										return
											BGl_stringzd2deletezd2zz__r4_strings_6_7z00
											(BgL_auxz00_7227, BgL_g1130z00_1246, BgL_auxz00_7234,
											BgL_endz00_1253);
									}
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/string.scm 785 */
							obj_t BgL_startz00_1254;

							BgL_startz00_1254 = VECTOR_REF(BgL_opt1128z00_120, ((long) 2));
							{	/* Ieee/string.scm 785 */
								obj_t BgL_endz00_1255;

								BgL_endz00_1255 = VECTOR_REF(BgL_opt1128z00_120, ((long) 3));
								{	/* Ieee/string.scm 785 */

									{	/* Ieee/string.scm 785 */
										long BgL_auxz00_7262;
										int BgL_auxz00_7253;
										obj_t BgL_auxz00_7246;

										{	/* Ieee/string.scm 785 */
											obj_t BgL_tmpz00_7263;

											if (INTEGERP(BgL_endz00_1255))
												{	/* Ieee/string.scm 785 */
													BgL_tmpz00_7263 = BgL_endz00_1255;
												}
											else
												{
													obj_t BgL_auxz00_7266;

													BgL_auxz00_7266 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 35851)),
														BGl_string3536z00zz__r4_strings_6_7z00,
														BGl_string3480z00zz__r4_strings_6_7z00,
														BgL_endz00_1255);
													FAILURE(BgL_auxz00_7266, BFALSE, BFALSE);
												}
											BgL_auxz00_7262 = (long) CINT(BgL_tmpz00_7263);
										}
										{	/* Ieee/string.scm 785 */
											obj_t BgL_tmpz00_7254;

											if (INTEGERP(BgL_startz00_1254))
												{	/* Ieee/string.scm 785 */
													BgL_tmpz00_7254 = BgL_startz00_1254;
												}
											else
												{
													obj_t BgL_auxz00_7257;

													BgL_auxz00_7257 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 35851)),
														BGl_string3536z00zz__r4_strings_6_7z00,
														BGl_string3480z00zz__r4_strings_6_7z00,
														BgL_startz00_1254);
													FAILURE(BgL_auxz00_7257, BFALSE, BFALSE);
												}
											BgL_auxz00_7253 = CINT(BgL_tmpz00_7254);
										}
										if (STRINGP(BgL_stringz00_1245))
											{	/* Ieee/string.scm 785 */
												BgL_auxz00_7246 = BgL_stringz00_1245;
											}
										else
											{
												obj_t BgL_auxz00_7249;

												BgL_auxz00_7249 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 35851)),
													BGl_string3536z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_stringz00_1245);
												FAILURE(BgL_auxz00_7249, BFALSE, BFALSE);
											}
										return
											BGl_stringzd2deletezd2zz__r4_strings_6_7z00
											(BgL_auxz00_7246, BgL_g1130z00_1246, BgL_auxz00_7253,
											BgL_auxz00_7262);
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



/* string-delete */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2deletezd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_116, obj_t BgL_objz00_117, int BgL_startz00_118,
		long BgL_endz00_119)
	{
		{	/* Ieee/string.scm 785 */
			{
				obj_t BgL_newz00_1303;
				obj_t BgL_predz00_1304;
				int BgL_startz00_1305;
				long BgL_endz00_1306;
				obj_t BgL_newz00_1287;
				obj_t BgL_lz00_1288;
				int BgL_startz00_1289;
				long BgL_endz00_1290;
				obj_t BgL_newz00_1271;
				obj_t BgL_cz00_1272;
				int BgL_startz00_1273;
				long BgL_endz00_1274;

				if (((long) (BgL_startz00_118) < ((long) 0)))
					{	/* Ieee/string.scm 824 */
						return
							BGl_errorz00zz__errorz00(BGl_string3537z00zz__r4_strings_6_7z00,
							BGl_string3538z00zz__r4_strings_6_7z00, BINT(BgL_startz00_118));
					}
				else
					{	/* Ieee/string.scm 824 */
						if ((BgL_endz00_119 > STRING_LENGTH(BgL_stringz00_116)))
							{	/* Ieee/string.scm 826 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string3537z00zz__r4_strings_6_7z00,
									BGl_string3539z00zz__r4_strings_6_7z00, BINT(BgL_endz00_119));
							}
						else
							{	/* Ieee/string.scm 826 */
								if ((BgL_endz00_119 < (long) (BgL_startz00_118)))
									{	/* Ieee/string.scm 829 */
										obj_t BgL_arg1431z00_1263;

										BgL_arg1431z00_1263 =
											MAKE_YOUNG_PAIR(BINT(BgL_startz00_118),
											BINT(BgL_endz00_119));
										return
											BGl_errorz00zz__errorz00
											(BGl_string3537z00zz__r4_strings_6_7z00,
											BGl_string3540z00zz__r4_strings_6_7z00,
											BgL_arg1431z00_1263);
									}
								else
									{	/* Ieee/string.scm 831 */
										obj_t BgL_newz00_1265;

										BgL_newz00_1265 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_stringz00_116);
										{	/* Ieee/string.scm 832 */

											if (CHARP(BgL_objz00_117))
												{	/* Ieee/string.scm 834 */
													BgL_newz00_1271 = BgL_newz00_1265;
													BgL_cz00_1272 = BgL_objz00_117;
													BgL_startz00_1273 = BgL_startz00_118;
													BgL_endz00_1274 = BgL_endz00_119;
													{
														int BgL_iz00_1277;
														long BgL_jz00_1278;

														BgL_iz00_1277 = BgL_startz00_1273;
														BgL_jz00_1278 = ((long) 0);
													BgL_zc3z04anonymousza31438ze3z87_1279:
														if (((long) (BgL_iz00_1277) == BgL_endz00_1274))
															{	/* Ieee/string.scm 790 */
																return
																	bgl_string_shrink(BgL_newz00_1271,
																	BgL_jz00_1278);
															}
														else
															{	/* Ieee/string.scm 792 */
																unsigned char BgL_ccz00_1281;

																BgL_ccz00_1281 =
																	STRING_REF(BgL_stringz00_116,
																	(long) (BgL_iz00_1277));
																if ((BgL_ccz00_1281 == CCHAR(BgL_cz00_1272)))
																	{	/* Ieee/string.scm 794 */
																		long BgL_arg1441z00_1283;

																		BgL_arg1441z00_1283 =
																			((long) (BgL_iz00_1277) + ((long) 1));
																		{
																			int BgL_iz00_7305;

																			BgL_iz00_7305 =
																				(int) (BgL_arg1441z00_1283);
																			BgL_iz00_1277 = BgL_iz00_7305;
																			goto
																				BgL_zc3z04anonymousza31438ze3z87_1279;
																		}
																	}
																else
																	{	/* Ieee/string.scm 793 */
																		STRING_SET(BgL_newz00_1271, BgL_jz00_1278,
																			BgL_ccz00_1281);
																		{	/* Ieee/string.scm 797 */
																			long BgL_arg1442z00_1284;
																			long BgL_arg1443z00_1285;

																			BgL_arg1442z00_1284 =
																				((long) (BgL_iz00_1277) + ((long) 1));
																			BgL_arg1443z00_1285 =
																				(BgL_jz00_1278 + ((long) 1));
																			{
																				long BgL_jz00_7313;
																				int BgL_iz00_7311;

																				BgL_iz00_7311 =
																					(int) (BgL_arg1442z00_1284);
																				BgL_jz00_7313 = BgL_arg1443z00_1285;
																				BgL_jz00_1278 = BgL_jz00_7313;
																				BgL_iz00_1277 = BgL_iz00_7311;
																				goto
																					BgL_zc3z04anonymousza31438ze3z87_1279;
																			}
																		}
																	}
															}
													}
												}
											else
												{	/* Ieee/string.scm 834 */
													if (STRINGP(BgL_objz00_117))
														{	/* Ieee/string.scm 836 */
															BgL_newz00_1287 = BgL_newz00_1265;
															BgL_lz00_1288 =
																BGl_stringzd2ze3listz31zz__r4_strings_6_7z00
																(BgL_objz00_117);
															BgL_startz00_1289 = BgL_startz00_118;
															BgL_endz00_1290 = BgL_endz00_119;
															{
																int BgL_iz00_1293;
																long BgL_jz00_1294;

																BgL_iz00_1293 = BgL_startz00_1289;
																BgL_jz00_1294 = ((long) 0);
															BgL_zc3z04anonymousza31445ze3z87_1295:
																if (((long) (BgL_iz00_1293) == BgL_endz00_1290))
																	{	/* Ieee/string.scm 802 */
																		return
																			bgl_string_shrink(BgL_newz00_1287,
																			BgL_jz00_1294);
																	}
																else
																	{	/* Ieee/string.scm 804 */
																		unsigned char BgL_ccz00_1297;

																		BgL_ccz00_1297 =
																			STRING_REF(BgL_stringz00_116,
																			(long) (BgL_iz00_1293));
																		if (CBOOL
																			(BGl_memvz00zz__r4_pairs_and_lists_6_3z00
																				(BCHAR(BgL_ccz00_1297), BgL_lz00_1288)))
																			{	/* Ieee/string.scm 806 */
																				long BgL_arg1448z00_1299;

																				BgL_arg1448z00_1299 =
																					((long) (BgL_iz00_1293) + ((long) 1));
																				{
																					int BgL_iz00_7328;

																					BgL_iz00_7328 =
																						(int) (BgL_arg1448z00_1299);
																					BgL_iz00_1293 = BgL_iz00_7328;
																					goto
																						BgL_zc3z04anonymousza31445ze3z87_1295;
																				}
																			}
																		else
																			{	/* Ieee/string.scm 805 */
																				STRING_SET(BgL_newz00_1287,
																					BgL_jz00_1294, BgL_ccz00_1297);
																				{	/* Ieee/string.scm 809 */
																					long BgL_arg1449z00_1300;
																					long BgL_arg1451z00_1301;

																					BgL_arg1449z00_1300 =
																						(
																						(long) (BgL_iz00_1293) +
																						((long) 1));
																					BgL_arg1451z00_1301 =
																						(BgL_jz00_1294 + ((long) 1));
																					{
																						long BgL_jz00_7336;
																						int BgL_iz00_7334;

																						BgL_iz00_7334 =
																							(int) (BgL_arg1449z00_1300);
																						BgL_jz00_7336 = BgL_arg1451z00_1301;
																						BgL_jz00_1294 = BgL_jz00_7336;
																						BgL_iz00_1293 = BgL_iz00_7334;
																						goto
																							BgL_zc3z04anonymousza31445ze3z87_1295;
																					}
																				}
																			}
																	}
															}
														}
													else
														{	/* Ieee/string.scm 836 */
															if (PROCEDUREP(BgL_objz00_117))
																{	/* Ieee/string.scm 838 */
																	BgL_newz00_1303 = BgL_newz00_1265;
																	BgL_predz00_1304 = BgL_objz00_117;
																	BgL_startz00_1305 = BgL_startz00_118;
																	BgL_endz00_1306 = BgL_endz00_119;
																	{
																		int BgL_iz00_1309;
																		long BgL_jz00_1310;

																		BgL_iz00_1309 = BgL_startz00_1305;
																		BgL_jz00_1310 = ((long) 0);
																	BgL_zc3z04anonymousza31453ze3z87_1311:
																		if (
																			((long) (BgL_iz00_1309) ==
																				BgL_endz00_1306))
																			{	/* Ieee/string.scm 814 */
																				return
																					bgl_string_shrink(BgL_newz00_1303,
																					BgL_jz00_1310);
																			}
																		else
																			{	/* Ieee/string.scm 816 */
																				unsigned char BgL_ccz00_1313;

																				BgL_ccz00_1313 =
																					STRING_REF(BgL_stringz00_116,
																					(long) (BgL_iz00_1309));
																				if (CBOOL(PROCEDURE_ENTRY
																						(BgL_predz00_1304)
																						(BgL_predz00_1304,
																							BCHAR(BgL_ccz00_1313), BEOA)))
																					{	/* Ieee/string.scm 818 */
																						long BgL_arg1456z00_1315;

																						BgL_arg1456z00_1315 =
																							(
																							(long) (BgL_iz00_1309) +
																							((long) 1));
																						{
																							int BgL_iz00_7355;

																							BgL_iz00_7355 =
																								(int) (BgL_arg1456z00_1315);
																							BgL_iz00_1309 = BgL_iz00_7355;
																							goto
																								BgL_zc3z04anonymousza31453ze3z87_1311;
																						}
																					}
																				else
																					{	/* Ieee/string.scm 817 */
																						STRING_SET(BgL_newz00_1303,
																							BgL_jz00_1310, BgL_ccz00_1313);
																						{	/* Ieee/string.scm 821 */
																							long BgL_arg1457z00_1316;
																							long BgL_arg1458z00_1317;

																							BgL_arg1457z00_1316 =
																								(
																								(long) (BgL_iz00_1309) +
																								((long) 1));
																							BgL_arg1458z00_1317 =
																								(BgL_jz00_1310 + ((long) 1));
																							{
																								long BgL_jz00_7363;
																								int BgL_iz00_7361;

																								BgL_iz00_7361 =
																									(int) (BgL_arg1457z00_1316);
																								BgL_jz00_7363 =
																									BgL_arg1458z00_1317;
																								BgL_jz00_1310 = BgL_jz00_7363;
																								BgL_iz00_1309 = BgL_iz00_7361;
																								goto
																									BgL_zc3z04anonymousza31453ze3z87_1311;
																							}
																						}
																					}
																			}
																	}
																}
															else
																{	/* Ieee/string.scm 838 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_string3537z00zz__r4_strings_6_7z00,
																		BGl_string3541z00zz__r4_strings_6_7z00,
																		BgL_objz00_117);
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



/* delim? */
	bool_t BGl_delimzf3zf3zz__r4_strings_6_7z00(obj_t BgL_delimsz00_122,
		unsigned char BgL_charz00_123)
	{
		{	/* Ieee/string.scm 846 */
			{	/* Ieee/string.scm 847 */
				long BgL_lenz00_1322;

				BgL_lenz00_1322 = STRING_LENGTH(((obj_t) BgL_delimsz00_122));
				{
					long BgL_iz00_3346;

					BgL_iz00_3346 = ((long) 0);
				BgL_loopz00_3345:
					if ((BgL_iz00_3346 == BgL_lenz00_1322))
						{	/* Ieee/string.scm 850 */
							return ((bool_t) 0);
						}
					else
						{	/* Ieee/string.scm 850 */
							if (
								(BgL_charz00_123 ==
									STRING_REF(((obj_t) BgL_delimsz00_122), BgL_iz00_3346)))
								{	/* Ieee/string.scm 852 */
									return ((bool_t) 1);
								}
							else
								{
									long BgL_iz00_7373;

									BgL_iz00_7373 = (BgL_iz00_3346 + ((long) 1));
									BgL_iz00_3346 = BgL_iz00_7373;
									goto BgL_loopz00_3345;
								}
						}
				}
			}
		}

	}



/* string-split */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2splitzd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_132, obj_t BgL_delimitersz00_133)
	{
		{	/* Ieee/string.scm 884 */
			{	/* Ieee/string.scm 885 */
				obj_t BgL_dz00_1342;

				if (PAIRP(BgL_delimitersz00_133))
					{	/* Ieee/string.scm 885 */
						BgL_dz00_1342 = CAR(BgL_delimitersz00_133);
					}
				else
					{	/* Ieee/string.scm 885 */
						BgL_dz00_1342 = BGl_string3542z00zz__r4_strings_6_7z00;
					}
				{	/* Ieee/string.scm 885 */
					long BgL_lenz00_1343;

					BgL_lenz00_1343 = STRING_LENGTH(BgL_stringz00_132);
					{	/* Ieee/string.scm 888 */
						long BgL_iz00_1344;

						{
							long BgL_iz00_3415;

							BgL_iz00_3415 = ((long) 0);
						BgL_skipzd2separatorzd2_3414:
							if ((BgL_iz00_3415 == BgL_lenz00_1343))
								{	/* Ieee/string.scm 862 */
									BgL_iz00_1344 = BgL_lenz00_1343;
								}
							else
								{	/* Ieee/string.scm 862 */
									if (BGl_delimzf3zf3zz__r4_strings_6_7z00(BgL_dz00_1342,
											STRING_REF(BgL_stringz00_132, BgL_iz00_3415)))
										{
											long BgL_iz00_7384;

											BgL_iz00_7384 = (BgL_iz00_3415 + ((long) 1));
											BgL_iz00_3415 = BgL_iz00_7384;
											goto BgL_skipzd2separatorzd2_3414;
										}
									else
										{	/* Ieee/string.scm 864 */
											BgL_iz00_1344 = BgL_iz00_3415;
										}
								}
						}
						{	/* Ieee/string.scm 889 */

							{
								long BgL_iz00_1347;
								obj_t BgL_resz00_1348;

								BgL_iz00_1347 = BgL_iz00_1344;
								BgL_resz00_1348 = BNIL;
							BgL_zc3z04anonymousza31475ze3z87_1349:
								if ((BgL_iz00_1347 == BgL_lenz00_1343))
									{	/* Ieee/string.scm 892 */
										return bgl_reverse_bang(BgL_resz00_1348);
									}
								else
									{	/* Ieee/string.scm 894 */
										long BgL_ez00_1351;

										{
											long BgL_iz00_3434;

											BgL_iz00_3434 = (BgL_iz00_1347 + ((long) 1));
										BgL_skipzd2nonzd2separatorz00_3433:
											if ((BgL_iz00_3434 == BgL_lenz00_1343))
												{	/* Ieee/string.scm 874 */
													BgL_ez00_1351 = BgL_lenz00_1343;
												}
											else
												{	/* Ieee/string.scm 874 */
													if (BGl_delimzf3zf3zz__r4_strings_6_7z00
														(BgL_dz00_1342, STRING_REF(BgL_stringz00_132,
																BgL_iz00_3434)))
														{	/* Ieee/string.scm 876 */
															BgL_ez00_1351 = BgL_iz00_3434;
														}
													else
														{
															long BgL_iz00_7394;

															BgL_iz00_7394 = (BgL_iz00_3434 + ((long) 1));
															BgL_iz00_3434 = BgL_iz00_7394;
															goto BgL_skipzd2nonzd2separatorz00_3433;
														}
												}
										}
										{	/* Ieee/string.scm 894 */
											obj_t BgL_nresz00_1352;

											BgL_nresz00_1352 =
												MAKE_YOUNG_PAIR(c_substring(BgL_stringz00_132,
													BgL_iz00_1347, BgL_ez00_1351), BgL_resz00_1348);
											{	/* Ieee/string.scm 895 */

												if ((BgL_ez00_1351 == BgL_lenz00_1343))
													{	/* Ieee/string.scm 896 */
														return bgl_reverse_bang(BgL_nresz00_1352);
													}
												else
													{	/* Ieee/string.scm 898 */
														long BgL_arg1478z00_1354;

														{
															long BgL_iz00_3457;

															BgL_iz00_3457 = (BgL_ez00_1351 + ((long) 1));
														BgL_skipzd2separatorzd2_3456:
															if ((BgL_iz00_3457 == BgL_lenz00_1343))
																{	/* Ieee/string.scm 862 */
																	BgL_arg1478z00_1354 = BgL_lenz00_1343;
																}
															else
																{	/* Ieee/string.scm 862 */
																	if (BGl_delimzf3zf3zz__r4_strings_6_7z00
																		(BgL_dz00_1342,
																			STRING_REF(BgL_stringz00_132,
																				BgL_iz00_3457)))
																		{
																			long BgL_iz00_7407;

																			BgL_iz00_7407 =
																				(BgL_iz00_3457 + ((long) 1));
																			BgL_iz00_3457 = BgL_iz00_7407;
																			goto BgL_skipzd2separatorzd2_3456;
																		}
																	else
																		{	/* Ieee/string.scm 864 */
																			BgL_arg1478z00_1354 = BgL_iz00_3457;
																		}
																}
														}
														{
															obj_t BgL_resz00_7411;
															long BgL_iz00_7410;

															BgL_iz00_7410 = BgL_arg1478z00_1354;
															BgL_resz00_7411 = BgL_nresz00_1352;
															BgL_resz00_1348 = BgL_resz00_7411;
															BgL_iz00_1347 = BgL_iz00_7410;
															goto BgL_zc3z04anonymousza31475ze3z87_1349;
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



/* &string-split */
	obj_t BGl_z62stringzd2splitzb0zz__r4_strings_6_7z00(obj_t BgL_envz00_5266,
		obj_t BgL_stringz00_5267, obj_t BgL_delimitersz00_5268)
	{
		{	/* Ieee/string.scm 884 */
			{	/* Ieee/string.scm 885 */
				obj_t BgL_auxz00_7412;

				if (STRINGP(BgL_stringz00_5267))
					{	/* Ieee/string.scm 885 */
						BgL_auxz00_7412 = BgL_stringz00_5267;
					}
				else
					{
						obj_t BgL_auxz00_7415;

						BgL_auxz00_7415 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 39158)),
							BGl_string3543z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5267);
						FAILURE(BgL_auxz00_7415, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2splitzd2zz__r4_strings_6_7z00(BgL_auxz00_7412,
					BgL_delimitersz00_5268);
			}
		}

	}



/* string-cut */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2cutzd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_134, obj_t BgL_delimitersz00_135)
	{
		{	/* Ieee/string.scm 904 */
			{	/* Ieee/string.scm 905 */
				obj_t BgL_dz00_1360;

				if (PAIRP(BgL_delimitersz00_135))
					{	/* Ieee/string.scm 905 */
						BgL_dz00_1360 = CAR(BgL_delimitersz00_135);
					}
				else
					{	/* Ieee/string.scm 905 */
						BgL_dz00_1360 = BGl_string3542z00zz__r4_strings_6_7z00;
					}
				{	/* Ieee/string.scm 905 */
					long BgL_lenz00_1361;

					BgL_lenz00_1361 = STRING_LENGTH(BgL_stringz00_134);
					{	/* Ieee/string.scm 908 */

						{
							long BgL_iz00_1364;
							obj_t BgL_resz00_1365;

							BgL_iz00_1364 = ((long) 0);
							BgL_resz00_1365 = BNIL;
						BgL_zc3z04anonymousza31485ze3z87_1366:
							if ((BgL_iz00_1364 >= BgL_lenz00_1361))
								{	/* Ieee/string.scm 912 */
									obj_t BgL_arg1487z00_1368;

									BgL_arg1487z00_1368 =
										MAKE_YOUNG_PAIR(BGl_string3511z00zz__r4_strings_6_7z00,
										BgL_resz00_1365);
									return bgl_reverse_bang(BgL_arg1487z00_1368);
								}
							else
								{	/* Ieee/string.scm 913 */
									long BgL_ez00_1369;

									{
										long BgL_iz00_3478;

										BgL_iz00_3478 = BgL_iz00_1364;
									BgL_skipzd2nonzd2separatorz00_3477:
										if ((BgL_iz00_3478 == BgL_lenz00_1361))
											{	/* Ieee/string.scm 874 */
												BgL_ez00_1369 = BgL_lenz00_1361;
											}
										else
											{	/* Ieee/string.scm 874 */
												if (BGl_delimzf3zf3zz__r4_strings_6_7z00(BgL_dz00_1360,
														STRING_REF(BgL_stringz00_134, BgL_iz00_3478)))
													{	/* Ieee/string.scm 876 */
														BgL_ez00_1369 = BgL_iz00_3478;
													}
												else
													{
														long BgL_iz00_7433;

														BgL_iz00_7433 = (BgL_iz00_3478 + ((long) 1));
														BgL_iz00_3478 = BgL_iz00_7433;
														goto BgL_skipzd2nonzd2separatorz00_3477;
													}
											}
									}
									{	/* Ieee/string.scm 913 */
										obj_t BgL_sz00_1370;

										BgL_sz00_1370 =
											c_substring(BgL_stringz00_134, BgL_iz00_1364,
											BgL_ez00_1369);
										{	/* Ieee/string.scm 914 */
											obj_t BgL_nrz00_1371;

											BgL_nrz00_1371 =
												MAKE_YOUNG_PAIR(BgL_sz00_1370, BgL_resz00_1365);
											{	/* Ieee/string.scm 915 */

												if ((BgL_ez00_1369 == BgL_lenz00_1361))
													{	/* Ieee/string.scm 916 */
														return bgl_reverse_bang(BgL_nrz00_1371);
													}
												else
													{
														obj_t BgL_resz00_7442;
														long BgL_iz00_7440;

														BgL_iz00_7440 = (BgL_ez00_1369 + ((long) 1));
														BgL_resz00_7442 = BgL_nrz00_1371;
														BgL_resz00_1365 = BgL_resz00_7442;
														BgL_iz00_1364 = BgL_iz00_7440;
														goto BgL_zc3z04anonymousza31485ze3z87_1366;
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



/* &string-cut */
	obj_t BGl_z62stringzd2cutzb0zz__r4_strings_6_7z00(obj_t BgL_envz00_5269,
		obj_t BgL_stringz00_5270, obj_t BgL_delimitersz00_5271)
	{
		{	/* Ieee/string.scm 904 */
			{	/* Ieee/string.scm 905 */
				obj_t BgL_auxz00_7443;

				if (STRINGP(BgL_stringz00_5270))
					{	/* Ieee/string.scm 905 */
						BgL_auxz00_7443 = BgL_stringz00_5270;
					}
				else
					{
						obj_t BgL_auxz00_7446;

						BgL_auxz00_7446 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 39857)),
							BGl_string3544z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5270);
						FAILURE(BgL_auxz00_7446, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2cutzd2zz__r4_strings_6_7z00(BgL_auxz00_7443,
					BgL_delimitersz00_5271);
			}
		}

	}



/* string-char-index-ur */
	BGL_EXPORTED_DEF obj_t
		BGl_stringzd2charzd2indexzd2urzd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_136, unsigned char BgL_charz00_137, long BgL_startz00_138,
		long BgL_nz00_139)
	{
		{	/* Ieee/string.scm 923 */
			{	/* Ieee/string.scm 926 */
				char *BgL_s0z00_3500;

				BgL_s0z00_3500 = BSTRING_TO_STRING(BgL_stringz00_136);
				{	/* Ieee/string.scm 926 */
					char *BgL_s1z00_3501;

					{	/* Ieee/string.scm 927 */
						int BgL_tmpz00_7452;

						BgL_tmpz00_7452 = (int) (((unsigned char) (BgL_charz00_137)));
						BgL_s1z00_3501 =
							BGL_MEMCHR(BgL_s0z00_3500, BgL_tmpz00_7452, BgL_nz00_139,
							BgL_startz00_138);
					}
					{	/* Ieee/string.scm 927 */

						if (BGL_MEMCHR_ZERO(BgL_s1z00_3501))
							{	/* Ieee/string.scm 928 */
								return BFALSE;
							}
						else
							{	/* Ieee/string.scm 928 */
								return BINT(BGL_MEMCHR_DIFF(BgL_s1z00_3501, BgL_s0z00_3500));
							}
					}
				}
			}
		}

	}



/* &string-char-index-ur */
	obj_t BGl_z62stringzd2charzd2indexzd2urzb0zz__r4_strings_6_7z00(obj_t
		BgL_envz00_5272, obj_t BgL_stringz00_5273, obj_t BgL_charz00_5274,
		obj_t BgL_startz00_5275, obj_t BgL_nz00_5276)
	{
		{	/* Ieee/string.scm 923 */
			{	/* Ieee/string.scm 926 */
				long BgL_auxz00_7486;
				long BgL_auxz00_7477;
				unsigned char BgL_auxz00_7468;
				obj_t BgL_auxz00_7461;

				{	/* Ieee/string.scm 926 */
					obj_t BgL_tmpz00_7487;

					if (INTEGERP(BgL_nz00_5276))
						{	/* Ieee/string.scm 926 */
							BgL_tmpz00_7487 = BgL_nz00_5276;
						}
					else
						{
							obj_t BgL_auxz00_7490;

							BgL_auxz00_7490 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 40549)),
								BGl_string3545z00zz__r4_strings_6_7z00,
								BGl_string3480z00zz__r4_strings_6_7z00, BgL_nz00_5276);
							FAILURE(BgL_auxz00_7490, BFALSE, BFALSE);
						}
					BgL_auxz00_7486 = (long) CINT(BgL_tmpz00_7487);
				}
				{	/* Ieee/string.scm 926 */
					obj_t BgL_tmpz00_7478;

					if (INTEGERP(BgL_startz00_5275))
						{	/* Ieee/string.scm 926 */
							BgL_tmpz00_7478 = BgL_startz00_5275;
						}
					else
						{
							obj_t BgL_auxz00_7481;

							BgL_auxz00_7481 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 40549)),
								BGl_string3545z00zz__r4_strings_6_7z00,
								BGl_string3480z00zz__r4_strings_6_7z00, BgL_startz00_5275);
							FAILURE(BgL_auxz00_7481, BFALSE, BFALSE);
						}
					BgL_auxz00_7477 = (long) CINT(BgL_tmpz00_7478);
				}
				{	/* Ieee/string.scm 926 */
					obj_t BgL_tmpz00_7469;

					if (CHARP(BgL_charz00_5274))
						{	/* Ieee/string.scm 926 */
							BgL_tmpz00_7469 = BgL_charz00_5274;
						}
					else
						{
							obj_t BgL_auxz00_7472;

							BgL_auxz00_7472 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 40549)),
								BGl_string3545z00zz__r4_strings_6_7z00,
								BGl_string3481z00zz__r4_strings_6_7z00, BgL_charz00_5274);
							FAILURE(BgL_auxz00_7472, BFALSE, BFALSE);
						}
					BgL_auxz00_7468 = CCHAR(BgL_tmpz00_7469);
				}
				if (STRINGP(BgL_stringz00_5273))
					{	/* Ieee/string.scm 926 */
						BgL_auxz00_7461 = BgL_stringz00_5273;
					}
				else
					{
						obj_t BgL_auxz00_7464;

						BgL_auxz00_7464 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 40549)),
							BGl_string3545z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_stringz00_5273);
						FAILURE(BgL_auxz00_7464, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2charzd2indexzd2urzd2zz__r4_strings_6_7z00
					(BgL_auxz00_7461, BgL_auxz00_7468, BgL_auxz00_7477, BgL_auxz00_7486);
			}
		}

	}



/* _string-char-index */
	obj_t BGl__stringzd2charzd2indexz00zz__r4_strings_6_7z00(obj_t
		BgL_env1134z00_145, obj_t BgL_opt1133z00_144)
	{
		{	/* Ieee/string.scm 944 */
			{	/* Ieee/string.scm 944 */
				obj_t BgL_g1135z00_1380;
				obj_t BgL_g1136z00_1381;

				BgL_g1135z00_1380 = VECTOR_REF(BgL_opt1133z00_144, ((long) 0));
				BgL_g1136z00_1381 = VECTOR_REF(BgL_opt1133z00_144, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1133z00_144))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 944 */

							{	/* Ieee/string.scm 944 */
								obj_t BgL_stringz00_3506;
								unsigned char BgL_charz00_3507;

								if (STRINGP(BgL_g1135z00_1380))
									{	/* Ieee/string.scm 944 */
										BgL_stringz00_3506 = BgL_g1135z00_1380;
									}
								else
									{
										obj_t BgL_auxz00_7500;

										BgL_auxz00_7500 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3476z00zz__r4_strings_6_7z00,
											BINT(((long) 41111)),
											BGl_string3546z00zz__r4_strings_6_7z00,
											BGl_string3478z00zz__r4_strings_6_7z00,
											BgL_g1135z00_1380);
										FAILURE(BgL_auxz00_7500, BFALSE, BFALSE);
									}
								{	/* Ieee/string.scm 944 */
									obj_t BgL_tmpz00_7504;

									if (CHARP(BgL_g1136z00_1381))
										{	/* Ieee/string.scm 944 */
											BgL_tmpz00_7504 = BgL_g1136z00_1381;
										}
									else
										{
											obj_t BgL_auxz00_7507;

											BgL_auxz00_7507 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 41111)),
												BGl_string3546z00zz__r4_strings_6_7z00,
												BGl_string3481z00zz__r4_strings_6_7z00,
												BgL_g1136z00_1381);
											FAILURE(BgL_auxz00_7507, BFALSE, BFALSE);
										}
									BgL_charz00_3507 = CCHAR(BgL_tmpz00_7504);
								}
								{	/* Ieee/string.scm 945 */
									long BgL_lenz00_3508;

									BgL_lenz00_3508 = STRING_LENGTH(BgL_stringz00_3506);
									{	/* Ieee/string.scm 946 */

										if ((BgL_lenz00_3508 > ((long) 0)))
											{	/* Ieee/string.scm 926 */
												char *BgL_s0z00_3535;

												BgL_s0z00_3535 = BSTRING_TO_STRING(BgL_stringz00_3506);
												{	/* Ieee/string.scm 926 */
													char *BgL_s1z00_3536;

													{	/* Ieee/string.scm 927 */
														long BgL_auxz00_7520;
														int BgL_tmpz00_7516;

														{	/* Ieee/string.scm 946 */
															bool_t BgL_test3998z00_7521;

															if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
																(BINT(((long) -1))))
																{	/* Ieee/string.scm 946 */
																	if ((((long) -1) >= ((long) 0)))
																		{	/* Ieee/string.scm 947 */
																			BgL_test3998z00_7521 =
																				(((long) -1) <=
																				(BgL_lenz00_3508 - ((long) 0)));
																		}
																	else
																		{	/* Ieee/string.scm 947 */
																			BgL_test3998z00_7521 = ((bool_t) 0);
																		}
																}
															else
																{	/* Ieee/string.scm 946 */
																	BgL_test3998z00_7521 = ((bool_t) 0);
																}
															if (BgL_test3998z00_7521)
																{	/* Ieee/string.scm 946 */
																	BgL_auxz00_7520 = ((long) -1);
																}
															else
																{	/* Ieee/string.scm 946 */
																	BgL_auxz00_7520 =
																		(BgL_lenz00_3508 - ((long) 0));
														}}
														BgL_tmpz00_7516 =
															(int) (((unsigned char) (BgL_charz00_3507)));
														BgL_s1z00_3536 =
															BGL_MEMCHR(BgL_s0z00_3535, BgL_tmpz00_7516,
															BgL_auxz00_7520, ((long) 0));
													}
													{	/* Ieee/string.scm 927 */

														if (BGL_MEMCHR_ZERO(BgL_s1z00_3536))
															{	/* Ieee/string.scm 928 */
																return BFALSE;
															}
														else
															{	/* Ieee/string.scm 928 */
																return
																	BINT(BGL_MEMCHR_DIFF(BgL_s1z00_3536,
																		BgL_s0z00_3535));
															}
													}
												}
											}
										else
											{	/* Ieee/string.scm 950 */
												return BFALSE;
											}
									}
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/string.scm 944 */
							obj_t BgL_startz00_1387;

							BgL_startz00_1387 = VECTOR_REF(BgL_opt1133z00_144, ((long) 2));
							{	/* Ieee/string.scm 944 */

								{	/* Ieee/string.scm 944 */
									obj_t BgL_stringz00_3541;
									unsigned char BgL_charz00_3542;

									if (STRINGP(BgL_g1135z00_1380))
										{	/* Ieee/string.scm 944 */
											BgL_stringz00_3541 = BgL_g1135z00_1380;
										}
									else
										{
											obj_t BgL_auxz00_7538;

											BgL_auxz00_7538 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 41111)),
												BGl_string3546z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_g1135z00_1380);
											FAILURE(BgL_auxz00_7538, BFALSE, BFALSE);
										}
									{	/* Ieee/string.scm 944 */
										obj_t BgL_tmpz00_7542;

										if (CHARP(BgL_g1136z00_1381))
											{	/* Ieee/string.scm 944 */
												BgL_tmpz00_7542 = BgL_g1136z00_1381;
											}
										else
											{
												obj_t BgL_auxz00_7545;

												BgL_auxz00_7545 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 41111)),
													BGl_string3546z00zz__r4_strings_6_7z00,
													BGl_string3481z00zz__r4_strings_6_7z00,
													BgL_g1136z00_1381);
												FAILURE(BgL_auxz00_7545, BFALSE, BFALSE);
											}
										BgL_charz00_3542 = CCHAR(BgL_tmpz00_7542);
									}
									{	/* Ieee/string.scm 945 */
										long BgL_lenz00_3543;

										BgL_lenz00_3543 = STRING_LENGTH(BgL_stringz00_3541);
										{	/* Ieee/string.scm 946 */

											{	/* Ieee/string.scm 950 */
												bool_t BgL_test4004z00_7551;

												{	/* Ieee/string.scm 950 */
													long BgL_n2z00_3564;

													{	/* Ieee/string.scm 950 */
														obj_t BgL_tmpz00_7552;

														if (INTEGERP(BgL_startz00_1387))
															{	/* Ieee/string.scm 950 */
																BgL_tmpz00_7552 = BgL_startz00_1387;
															}
														else
															{
																obj_t BgL_auxz00_7555;

																BgL_auxz00_7555 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3476z00zz__r4_strings_6_7z00,
																	BINT(((long) 41359)),
																	BGl_string3546z00zz__r4_strings_6_7z00,
																	BGl_string3480z00zz__r4_strings_6_7z00,
																	BgL_startz00_1387);
																FAILURE(BgL_auxz00_7555, BFALSE, BFALSE);
															}
														BgL_n2z00_3564 = (long) CINT(BgL_tmpz00_7552);
													}
													BgL_test4004z00_7551 =
														(BgL_lenz00_3543 > BgL_n2z00_3564);
												}
												if (BgL_test4004z00_7551)
													{	/* Ieee/string.scm 951 */
														long BgL_startz00_3568;

														{	/* Ieee/string.scm 951 */
															obj_t BgL_tmpz00_7561;

															if (INTEGERP(BgL_startz00_1387))
																{	/* Ieee/string.scm 951 */
																	BgL_tmpz00_7561 = BgL_startz00_1387;
																}
															else
																{
																	obj_t BgL_auxz00_7564;

																	BgL_auxz00_7564 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string3476z00zz__r4_strings_6_7z00,
																		BINT(((long) 41402)),
																		BGl_string3546z00zz__r4_strings_6_7z00,
																		BGl_string3480z00zz__r4_strings_6_7z00,
																		BgL_startz00_1387);
																	FAILURE(BgL_auxz00_7564, BFALSE, BFALSE);
																}
															BgL_startz00_3568 = (long) CINT(BgL_tmpz00_7561);
														}
														{	/* Ieee/string.scm 926 */
															char *BgL_s0z00_3570;

															BgL_s0z00_3570 =
																BSTRING_TO_STRING(BgL_stringz00_3541);
															{	/* Ieee/string.scm 926 */
																char *BgL_s1z00_3571;

																{	/* Ieee/string.scm 927 */
																	long BgL_auxz00_7574;
																	int BgL_tmpz00_7570;

																	{	/* Ieee/string.scm 946 */
																		bool_t BgL_test4007z00_7575;

																		if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BINT(((long) -1))))
																			{	/* Ieee/string.scm 946 */
																				if ((((long) -1) >= ((long) 0)))
																					{	/* Ieee/string.scm 947 */
																						long BgL_tmpz00_7581;

																						{	/* Ieee/string.scm 947 */
																							long BgL_za72za7_3555;

																							{	/* Ieee/string.scm 947 */
																								obj_t BgL_tmpz00_7582;

																								if (INTEGERP(BgL_startz00_1387))
																									{	/* Ieee/string.scm 947 */
																										BgL_tmpz00_7582 =
																											BgL_startz00_1387;
																									}
																								else
																									{
																										obj_t BgL_auxz00_7585;

																										BgL_auxz00_7585 =
																											BGl_typezd2errorzd2zz__errorz00
																											(BGl_string3476z00zz__r4_strings_6_7z00,
																											BINT(((long) 41298)),
																											BGl_string3546z00zz__r4_strings_6_7z00,
																											BGl_string3480z00zz__r4_strings_6_7z00,
																											BgL_startz00_1387);
																										FAILURE(BgL_auxz00_7585,
																											BFALSE, BFALSE);
																									}
																								BgL_za72za7_3555 =
																									(long) CINT(BgL_tmpz00_7582);
																							}
																							BgL_tmpz00_7581 =
																								(BgL_lenz00_3543 -
																								BgL_za72za7_3555);
																						}
																						BgL_test4007z00_7575 =
																							(((long) -1) <= BgL_tmpz00_7581);
																					}
																				else
																					{	/* Ieee/string.scm 947 */
																						BgL_test4007z00_7575 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Ieee/string.scm 946 */
																				BgL_test4007z00_7575 = ((bool_t) 0);
																			}
																		if (BgL_test4007z00_7575)
																			{	/* Ieee/string.scm 946 */
																				BgL_auxz00_7574 = ((long) -1);
																			}
																		else
																			{	/* Ieee/string.scm 949 */
																				long BgL_za72za7_3561;

																				{	/* Ieee/string.scm 949 */
																					obj_t BgL_tmpz00_7592;

																					if (INTEGERP(BgL_startz00_1387))
																						{	/* Ieee/string.scm 949 */
																							BgL_tmpz00_7592 =
																								BgL_startz00_1387;
																						}
																					else
																						{
																							obj_t BgL_auxz00_7595;

																							BgL_auxz00_7595 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3476z00zz__r4_strings_6_7z00,
																								BINT(((long) 41328)),
																								BGl_string3546z00zz__r4_strings_6_7z00,
																								BGl_string3480z00zz__r4_strings_6_7z00,
																								BgL_startz00_1387);
																							FAILURE(BgL_auxz00_7595, BFALSE,
																								BFALSE);
																						}
																					BgL_za72za7_3561 =
																						(long) CINT(BgL_tmpz00_7592);
																				}
																				BgL_auxz00_7574 =
																					(BgL_lenz00_3543 - BgL_za72za7_3561);
																	}}
																	BgL_tmpz00_7570 =
																		(int) (
																		((unsigned char) (BgL_charz00_3542)));
																	BgL_s1z00_3571 =
																		BGL_MEMCHR(BgL_s0z00_3570, BgL_tmpz00_7570,
																		BgL_auxz00_7574, BgL_startz00_3568);
																}
																{	/* Ieee/string.scm 927 */

																	if (BGL_MEMCHR_ZERO(BgL_s1z00_3571))
																		{	/* Ieee/string.scm 928 */
																			return BFALSE;
																		}
																	else
																		{	/* Ieee/string.scm 928 */
																			return
																				BINT(BGL_MEMCHR_DIFF(BgL_s1z00_3571,
																					BgL_s0z00_3570));
																		}
																}
															}
														}
													}
												else
													{	/* Ieee/string.scm 950 */
														return BFALSE;
													}
											}
										}
									}
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/string.scm 944 */
							obj_t BgL_startz00_1389;

							BgL_startz00_1389 = VECTOR_REF(BgL_opt1133z00_144, ((long) 2));
							{	/* Ieee/string.scm 944 */
								obj_t BgL_countz00_1390;

								BgL_countz00_1390 = VECTOR_REF(BgL_opt1133z00_144, ((long) 3));
								{	/* Ieee/string.scm 944 */

									{	/* Ieee/string.scm 944 */
										obj_t BgL_stringz00_3576;
										unsigned char BgL_charz00_3577;

										if (STRINGP(BgL_g1135z00_1380))
											{	/* Ieee/string.scm 944 */
												BgL_stringz00_3576 = BgL_g1135z00_1380;
											}
										else
											{
												obj_t BgL_auxz00_7610;

												BgL_auxz00_7610 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 41111)),
													BGl_string3546z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_g1135z00_1380);
												FAILURE(BgL_auxz00_7610, BFALSE, BFALSE);
											}
										{	/* Ieee/string.scm 944 */
											obj_t BgL_tmpz00_7614;

											if (CHARP(BgL_g1136z00_1381))
												{	/* Ieee/string.scm 944 */
													BgL_tmpz00_7614 = BgL_g1136z00_1381;
												}
											else
												{
													obj_t BgL_auxz00_7617;

													BgL_auxz00_7617 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 41111)),
														BGl_string3546z00zz__r4_strings_6_7z00,
														BGl_string3481z00zz__r4_strings_6_7z00,
														BgL_g1136z00_1381);
													FAILURE(BgL_auxz00_7617, BFALSE, BFALSE);
												}
											BgL_charz00_3577 = CCHAR(BgL_tmpz00_7614);
										}
										{	/* Ieee/string.scm 945 */
											long BgL_lenz00_3578;

											BgL_lenz00_3578 = STRING_LENGTH(BgL_stringz00_3576);
											{	/* Ieee/string.scm 946 */

												{	/* Ieee/string.scm 950 */
													bool_t BgL_test4015z00_7623;

													{	/* Ieee/string.scm 950 */
														long BgL_n2z00_3599;

														{	/* Ieee/string.scm 950 */
															obj_t BgL_tmpz00_7624;

															if (INTEGERP(BgL_startz00_1389))
																{	/* Ieee/string.scm 950 */
																	BgL_tmpz00_7624 = BgL_startz00_1389;
																}
															else
																{
																	obj_t BgL_auxz00_7627;

																	BgL_auxz00_7627 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string3476z00zz__r4_strings_6_7z00,
																		BINT(((long) 41359)),
																		BGl_string3546z00zz__r4_strings_6_7z00,
																		BGl_string3480z00zz__r4_strings_6_7z00,
																		BgL_startz00_1389);
																	FAILURE(BgL_auxz00_7627, BFALSE, BFALSE);
																}
															BgL_n2z00_3599 = (long) CINT(BgL_tmpz00_7624);
														}
														BgL_test4015z00_7623 =
															(BgL_lenz00_3578 > BgL_n2z00_3599);
													}
													if (BgL_test4015z00_7623)
														{	/* Ieee/string.scm 951 */
															long BgL_startz00_3603;
															long BgL_nz00_3604;

															{	/* Ieee/string.scm 951 */
																obj_t BgL_tmpz00_7633;

																if (INTEGERP(BgL_startz00_1389))
																	{	/* Ieee/string.scm 951 */
																		BgL_tmpz00_7633 = BgL_startz00_1389;
																	}
																else
																	{
																		obj_t BgL_auxz00_7636;

																		BgL_auxz00_7636 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3476z00zz__r4_strings_6_7z00,
																			BINT(((long) 41402)),
																			BGl_string3546z00zz__r4_strings_6_7z00,
																			BGl_string3480z00zz__r4_strings_6_7z00,
																			BgL_startz00_1389);
																		FAILURE(BgL_auxz00_7636, BFALSE, BFALSE);
																	}
																BgL_startz00_3603 =
																	(long) CINT(BgL_tmpz00_7633);
															}
															{	/* Ieee/string.scm 946 */
																bool_t BgL_test4018z00_7641;

																if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_countz00_1390))
																	{	/* Ieee/string.scm 947 */
																		bool_t BgL_test4020z00_7644;

																		{	/* Ieee/string.scm 947 */
																			long BgL_n1z00_3587;

																			{	/* Ieee/string.scm 947 */
																				obj_t BgL_tmpz00_7645;

																				if (INTEGERP(BgL_countz00_1390))
																					{	/* Ieee/string.scm 947 */
																						BgL_tmpz00_7645 = BgL_countz00_1390;
																					}
																				else
																					{
																						obj_t BgL_auxz00_7648;

																						BgL_auxz00_7648 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string3476z00zz__r4_strings_6_7z00,
																							BINT(((long) 41268)),
																							BGl_string3546z00zz__r4_strings_6_7z00,
																							BGl_string3480z00zz__r4_strings_6_7z00,
																							BgL_countz00_1390);
																						FAILURE(BgL_auxz00_7648, BFALSE,
																							BFALSE);
																					}
																				BgL_n1z00_3587 =
																					(long) CINT(BgL_tmpz00_7645);
																			}
																			BgL_test4020z00_7644 =
																				(BgL_n1z00_3587 >= ((long) 0));
																		}
																		if (BgL_test4020z00_7644)
																			{	/* Ieee/string.scm 947 */
																				long BgL_n1z00_3592;

																				{	/* Ieee/string.scm 947 */
																					obj_t BgL_tmpz00_7654;

																					if (INTEGERP(BgL_countz00_1390))
																						{	/* Ieee/string.scm 947 */
																							BgL_tmpz00_7654 =
																								BgL_countz00_1390;
																						}
																					else
																						{
																							obj_t BgL_auxz00_7657;

																							BgL_auxz00_7657 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3476z00zz__r4_strings_6_7z00,
																								BINT(((long) 41283)),
																								BGl_string3546z00zz__r4_strings_6_7z00,
																								BGl_string3480z00zz__r4_strings_6_7z00,
																								BgL_countz00_1390);
																							FAILURE(BgL_auxz00_7657, BFALSE,
																								BFALSE);
																						}
																					BgL_n1z00_3592 =
																						(long) CINT(BgL_tmpz00_7654);
																				}
																				{	/* Ieee/string.scm 947 */
																					long BgL_tmpz00_7662;

																					{	/* Ieee/string.scm 947 */
																						long BgL_za72za7_3590;

																						{	/* Ieee/string.scm 947 */
																							obj_t BgL_tmpz00_7663;

																							if (INTEGERP(BgL_startz00_1389))
																								{	/* Ieee/string.scm 947 */
																									BgL_tmpz00_7663 =
																										BgL_startz00_1389;
																								}
																							else
																								{
																									obj_t BgL_auxz00_7666;

																									BgL_auxz00_7666 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string3476z00zz__r4_strings_6_7z00,
																										BINT(((long) 41298)),
																										BGl_string3546z00zz__r4_strings_6_7z00,
																										BGl_string3480z00zz__r4_strings_6_7z00,
																										BgL_startz00_1389);
																									FAILURE(BgL_auxz00_7666,
																										BFALSE, BFALSE);
																								}
																							BgL_za72za7_3590 =
																								(long) CINT(BgL_tmpz00_7663);
																						}
																						BgL_tmpz00_7662 =
																							(BgL_lenz00_3578 -
																							BgL_za72za7_3590);
																					}
																					BgL_test4018z00_7641 =
																						(BgL_n1z00_3592 <= BgL_tmpz00_7662);
																			}}
																		else
																			{	/* Ieee/string.scm 947 */
																				BgL_test4018z00_7641 = ((bool_t) 0);
																			}
																	}
																else
																	{	/* Ieee/string.scm 946 */
																		BgL_test4018z00_7641 = ((bool_t) 0);
																	}
																if (BgL_test4018z00_7641)
																	{	/* Ieee/string.scm 948 */
																		obj_t BgL_tmpz00_7673;

																		if (INTEGERP(BgL_countz00_1390))
																			{	/* Ieee/string.scm 948 */
																				BgL_tmpz00_7673 = BgL_countz00_1390;
																			}
																		else
																			{
																				obj_t BgL_auxz00_7676;

																				BgL_auxz00_7676 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3476z00zz__r4_strings_6_7z00,
																					BINT(((long) 41310)),
																					BGl_string3546z00zz__r4_strings_6_7z00,
																					BGl_string3480z00zz__r4_strings_6_7z00,
																					BgL_countz00_1390);
																				FAILURE(BgL_auxz00_7676, BFALSE,
																					BFALSE);
																			}
																		BgL_nz00_3604 =
																			(long) CINT(BgL_tmpz00_7673);
																	}
																else
																	{	/* Ieee/string.scm 949 */
																		long BgL_za72za7_3596;

																		{	/* Ieee/string.scm 949 */
																			obj_t BgL_tmpz00_7681;

																			if (INTEGERP(BgL_startz00_1389))
																				{	/* Ieee/string.scm 949 */
																					BgL_tmpz00_7681 = BgL_startz00_1389;
																				}
																			else
																				{
																					obj_t BgL_auxz00_7684;

																					BgL_auxz00_7684 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string3476z00zz__r4_strings_6_7z00,
																						BINT(((long) 41328)),
																						BGl_string3546z00zz__r4_strings_6_7z00,
																						BGl_string3480z00zz__r4_strings_6_7z00,
																						BgL_startz00_1389);
																					FAILURE(BgL_auxz00_7684, BFALSE,
																						BFALSE);
																				}
																			BgL_za72za7_3596 =
																				(long) CINT(BgL_tmpz00_7681);
																		}
																		BgL_nz00_3604 =
																			(BgL_lenz00_3578 - BgL_za72za7_3596);
															}}
															{	/* Ieee/string.scm 926 */
																char *BgL_s0z00_3605;

																BgL_s0z00_3605 =
																	BSTRING_TO_STRING(BgL_stringz00_3576);
																{	/* Ieee/string.scm 926 */
																	char *BgL_s1z00_3606;

																	{	/* Ieee/string.scm 927 */
																		int BgL_tmpz00_7691;

																		BgL_tmpz00_7691 =
																			(int) (
																			((unsigned char) (BgL_charz00_3577)));
																		BgL_s1z00_3606 =
																			BGL_MEMCHR(BgL_s0z00_3605,
																			BgL_tmpz00_7691, BgL_nz00_3604,
																			BgL_startz00_3603);
																	}
																	{	/* Ieee/string.scm 927 */

																		if (BGL_MEMCHR_ZERO(BgL_s1z00_3606))
																			{	/* Ieee/string.scm 928 */
																				return BFALSE;
																			}
																		else
																			{	/* Ieee/string.scm 928 */
																				return
																					BINT(BGL_MEMCHR_DIFF(BgL_s1z00_3606,
																						BgL_s0z00_3605));
																			}
																	}
																}
															}
														}
													else
														{	/* Ieee/string.scm 950 */
															return BFALSE;
														}
												}
											}
										}
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



/* string-char-index */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2charzd2indexz00zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_140, unsigned char BgL_charz00_141, obj_t BgL_startz00_142,
		obj_t BgL_countz00_143)
	{
		{	/* Ieee/string.scm 944 */
			{	/* Ieee/string.scm 945 */
				long BgL_lenz00_3611;

				BgL_lenz00_3611 = STRING_LENGTH(BgL_stringz00_140);
				{	/* Ieee/string.scm 946 */

					if ((BgL_lenz00_3611 > (long) CINT(BgL_startz00_142)))
						{	/* Ieee/string.scm 926 */
							char *BgL_s0z00_3638;

							BgL_s0z00_3638 = BSTRING_TO_STRING(BgL_stringz00_140);
							{	/* Ieee/string.scm 926 */
								char *BgL_s1z00_3639;

								{	/* Ieee/string.scm 927 */
									long BgL_auxz00_7725;
									long BgL_auxz00_7711;
									int BgL_tmpz00_7707;

									BgL_auxz00_7725 = (long) CINT(BgL_startz00_142);
									{	/* Ieee/string.scm 946 */
										bool_t BgL_test4028z00_7712;

										if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
											(BgL_countz00_143))
											{	/* Ieee/string.scm 946 */
												if (((long) CINT(BgL_countz00_143) >= ((long) 0)))
													{	/* Ieee/string.scm 947 */
														BgL_test4028z00_7712 =
															(
															(long) CINT(BgL_countz00_143) <=
															(BgL_lenz00_3611 -
																(long) CINT(BgL_startz00_142)));
													}
												else
													{	/* Ieee/string.scm 947 */
														BgL_test4028z00_7712 = ((bool_t) 0);
													}
											}
										else
											{	/* Ieee/string.scm 946 */
												BgL_test4028z00_7712 = ((bool_t) 0);
											}
										if (BgL_test4028z00_7712)
											{	/* Ieee/string.scm 946 */
												BgL_auxz00_7711 = (long) CINT(BgL_countz00_143);
											}
										else
											{	/* Ieee/string.scm 946 */
												BgL_auxz00_7711 =
													(BgL_lenz00_3611 - (long) CINT(BgL_startz00_142));
									}}
									BgL_tmpz00_7707 = (int) (((unsigned char) (BgL_charz00_141)));
									BgL_s1z00_3639 =
										BGL_MEMCHR(BgL_s0z00_3638, BgL_tmpz00_7707, BgL_auxz00_7711,
										BgL_auxz00_7725);
								}
								{	/* Ieee/string.scm 927 */

									if (BGL_MEMCHR_ZERO(BgL_s1z00_3639))
										{	/* Ieee/string.scm 928 */
											return BFALSE;
										}
									else
										{	/* Ieee/string.scm 928 */
											return
												BINT(BGL_MEMCHR_DIFF(BgL_s1z00_3639, BgL_s0z00_3638));
										}
								}
							}
						}
					else
						{	/* Ieee/string.scm 950 */
							return BFALSE;
						}
				}
			}
		}

	}



/* _string-index */
	obj_t BGl__stringzd2indexzd2zz__r4_strings_6_7z00(obj_t BgL_env1140z00_150,
		obj_t BgL_opt1139z00_149)
	{
		{	/* Ieee/string.scm 956 */
			{	/* Ieee/string.scm 956 */
				obj_t BgL_g1141z00_1401;
				obj_t BgL_g1142z00_1402;

				BgL_g1141z00_1401 = VECTOR_REF(BgL_opt1139z00_149, ((long) 0));
				BgL_g1142z00_1402 = VECTOR_REF(BgL_opt1139z00_149, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1139z00_149))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 956 */

							{	/* Ieee/string.scm 956 */
								obj_t BgL_auxz00_7734;

								if (STRINGP(BgL_g1141z00_1401))
									{	/* Ieee/string.scm 956 */
										BgL_auxz00_7734 = BgL_g1141z00_1401;
									}
								else
									{
										obj_t BgL_auxz00_7737;

										BgL_auxz00_7737 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3476z00zz__r4_strings_6_7z00,
											BINT(((long) 41637)),
											BGl_string3547z00zz__r4_strings_6_7z00,
											BGl_string3478z00zz__r4_strings_6_7z00,
											BgL_g1141z00_1401);
										FAILURE(BgL_auxz00_7737, BFALSE, BFALSE);
									}
								return
									BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL_auxz00_7734,
									BgL_g1142z00_1402, BINT(((long) 0)));
						}} break;
					case ((long) 3):

						{	/* Ieee/string.scm 956 */
							obj_t BgL_startz00_1407;

							BgL_startz00_1407 = VECTOR_REF(BgL_opt1139z00_149, ((long) 2));
							{	/* Ieee/string.scm 956 */

								{	/* Ieee/string.scm 956 */
									obj_t BgL_auxz00_7744;

									if (STRINGP(BgL_g1141z00_1401))
										{	/* Ieee/string.scm 956 */
											BgL_auxz00_7744 = BgL_g1141z00_1401;
										}
									else
										{
											obj_t BgL_auxz00_7747;

											BgL_auxz00_7747 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 41637)),
												BGl_string3547z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_g1141z00_1401);
											FAILURE(BgL_auxz00_7747, BFALSE, BFALSE);
										}
									return
										BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL_auxz00_7744,
										BgL_g1142z00_1402, BgL_startz00_1407);
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



/* string-index */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_146, obj_t BgL_rsz00_147, obj_t BgL_startz00_148)
	{
		{	/* Ieee/string.scm 956 */
			if (CHARP(BgL_rsz00_147))
				{	/* Ieee/string.scm 220 */

					{	/* Ieee/string.scm 945 */
						long BgL_lenz00_3647;

						BgL_lenz00_3647 = STRING_LENGTH(BgL_stringz00_146);
						{	/* Ieee/string.scm 946 */

							if ((BgL_lenz00_3647 > (long) CINT(BgL_startz00_148)))
								{	/* Ieee/string.scm 951 */
									long BgL_startz00_3672;

									BgL_startz00_3672 = (long) CINT(BgL_startz00_148);
									{	/* Ieee/string.scm 926 */
										char *BgL_s0z00_3674;

										BgL_s0z00_3674 = BSTRING_TO_STRING(BgL_stringz00_146);
										{	/* Ieee/string.scm 926 */
											char *BgL_s1z00_3675;

											{	/* Ieee/string.scm 927 */
												long BgL_auxz00_7767;
												int BgL_tmpz00_7762;

												{	/* Ieee/string.scm 946 */
													bool_t BgL_test4036z00_7768;

													if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BINT
															(((long) -1))))
														{	/* Ieee/string.scm 946 */
															if ((((long) -1) >= ((long) 0)))
																{	/* Ieee/string.scm 947 */
																	BgL_test4036z00_7768 =
																		(((long) -1) <=
																		(BgL_lenz00_3647 - BgL_startz00_3672));
																}
															else
																{	/* Ieee/string.scm 947 */
																	BgL_test4036z00_7768 = ((bool_t) 0);
																}
														}
													else
														{	/* Ieee/string.scm 946 */
															BgL_test4036z00_7768 = ((bool_t) 0);
														}
													if (BgL_test4036z00_7768)
														{	/* Ieee/string.scm 946 */
															BgL_auxz00_7767 = ((long) -1);
														}
													else
														{	/* Ieee/string.scm 946 */
															BgL_auxz00_7767 =
																(BgL_lenz00_3647 - BgL_startz00_3672);
														}
												}
												BgL_tmpz00_7762 =
													(int) (((unsigned char) (CCHAR(BgL_rsz00_147))));
												BgL_s1z00_3675 =
													BGL_MEMCHR(BgL_s0z00_3674, BgL_tmpz00_7762,
													BgL_auxz00_7767, BgL_startz00_3672);
											}
											{	/* Ieee/string.scm 927 */

												if (BGL_MEMCHR_ZERO(BgL_s1z00_3675))
													{	/* Ieee/string.scm 928 */
														return BFALSE;
													}
												else
													{	/* Ieee/string.scm 928 */
														return
															BINT(BGL_MEMCHR_DIFF(BgL_s1z00_3675,
																BgL_s0z00_3674));
													}
											}
										}
									}
								}
							else
								{	/* Ieee/string.scm 950 */
									return BFALSE;
								}
						}
					}
				}
			else
				{	/* Ieee/string.scm 958 */
					if (STRINGP(BgL_rsz00_147))
						{	/* Ieee/string.scm 960 */
							if ((STRING_LENGTH(BgL_rsz00_147) == ((long) 1)))
								{	/* Ieee/string.scm 220 */

									{	/* Ieee/string.scm 945 */
										long BgL_lenz00_3689;

										BgL_lenz00_3689 = STRING_LENGTH(BgL_stringz00_146);
										{	/* Ieee/string.scm 946 */

											if ((BgL_lenz00_3689 > (long) CINT(BgL_startz00_148)))
												{	/* Ieee/string.scm 951 */
													long BgL_startz00_3714;

													BgL_startz00_3714 = (long) CINT(BgL_startz00_148);
													{	/* Ieee/string.scm 926 */
														char *BgL_s0z00_3716;

														BgL_s0z00_3716 =
															BSTRING_TO_STRING(BgL_stringz00_146);
														{	/* Ieee/string.scm 926 */
															char *BgL_s1z00_3717;

															{	/* Ieee/string.scm 927 */
																long BgL_auxz00_7799;
																int BgL_tmpz00_7793;

																{	/* Ieee/string.scm 946 */
																	bool_t BgL_test4043z00_7800;

																	if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BINT(((long) -1))))
																		{	/* Ieee/string.scm 946 */
																			if ((((long) -1) >= ((long) 0)))
																				{	/* Ieee/string.scm 947 */
																					BgL_test4043z00_7800 =
																						(((long) -1) <=
																						(BgL_lenz00_3689 -
																							BgL_startz00_3714));
																				}
																			else
																				{	/* Ieee/string.scm 947 */
																					BgL_test4043z00_7800 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Ieee/string.scm 946 */
																			BgL_test4043z00_7800 = ((bool_t) 0);
																		}
																	if (BgL_test4043z00_7800)
																		{	/* Ieee/string.scm 946 */
																			BgL_auxz00_7799 = ((long) -1);
																		}
																	else
																		{	/* Ieee/string.scm 946 */
																			BgL_auxz00_7799 =
																				(BgL_lenz00_3689 - BgL_startz00_3714);
																		}
																}
																BgL_tmpz00_7793 =
																	(int) (
																	((unsigned char) (
																			(char) (STRING_REF(BgL_rsz00_147,
																					((long) 0))))));
																BgL_s1z00_3717 =
																	BGL_MEMCHR(BgL_s0z00_3716, BgL_tmpz00_7793,
																	BgL_auxz00_7799, BgL_startz00_3714);
															}
															{	/* Ieee/string.scm 927 */

																if (BGL_MEMCHR_ZERO(BgL_s1z00_3717))
																	{	/* Ieee/string.scm 928 */
																		return BFALSE;
																	}
																else
																	{	/* Ieee/string.scm 928 */
																		return
																			BINT(BGL_MEMCHR_DIFF(BgL_s1z00_3717,
																				BgL_s0z00_3716));
																	}
															}
														}
													}
												}
											else
												{	/* Ieee/string.scm 950 */
													return BFALSE;
												}
										}
									}
								}
							else
								{	/* Ieee/string.scm 962 */
									if ((STRING_LENGTH(BgL_rsz00_147) <= ((long) 10)))
										{	/* Ieee/string.scm 965 */
											long BgL_lenz00_1423;
											long BgL_lenjz00_1424;

											BgL_lenz00_1423 = STRING_LENGTH(BgL_stringz00_146);
											BgL_lenjz00_1424 = STRING_LENGTH(BgL_rsz00_147);
											{
												obj_t BgL_iz00_1426;

												BgL_iz00_1426 = BgL_startz00_148;
											BgL_zc3z04anonymousza31510ze3z87_1427:
												if (((long) CINT(BgL_iz00_1426) >= BgL_lenz00_1423))
													{	/* Ieee/string.scm 968 */
														return BFALSE;
													}
												else
													{	/* Ieee/string.scm 970 */
														unsigned char BgL_cz00_1429;

														BgL_cz00_1429 =
															STRING_REF(BgL_stringz00_146,
															(long) CINT(BgL_iz00_1426));
														{
															long BgL_jz00_1431;

															BgL_jz00_1431 = ((long) 0);
														BgL_zc3z04anonymousza31512ze3z87_1432:
															if ((BgL_jz00_1431 == BgL_lenjz00_1424))
																{
																	obj_t BgL_iz00_7826;

																	BgL_iz00_7826 =
																		ADDFX(BgL_iz00_1426, BINT(((long) 1)));
																	BgL_iz00_1426 = BgL_iz00_7826;
																	goto BgL_zc3z04anonymousza31510ze3z87_1427;
																}
															else
																{	/* Ieee/string.scm 972 */
																	if (
																		(BgL_cz00_1429 ==
																			STRING_REF(
																				((obj_t) BgL_rsz00_147),
																				BgL_jz00_1431)))
																		{	/* Ieee/string.scm 974 */
																			return BgL_iz00_1426;
																		}
																	else
																		{
																			long BgL_jz00_7833;

																			BgL_jz00_7833 =
																				(BgL_jz00_1431 + ((long) 1));
																			BgL_jz00_1431 = BgL_jz00_7833;
																			goto
																				BgL_zc3z04anonymousza31512ze3z87_1432;
																		}
																}
														}
													}
											}
										}
									else
										{	/* Ieee/string.scm 978 */
											obj_t BgL_tz00_1441;
											long BgL_lenz00_1442;

											BgL_tz00_1441 =
												make_string(((long) 256), ((unsigned char) 'n'));
											BgL_lenz00_1442 = STRING_LENGTH(BgL_stringz00_146);
											{	/* Ieee/string.scm 980 */
												long BgL_g1030z00_1443;

												BgL_g1030z00_1443 =
													(STRING_LENGTH(BgL_rsz00_147) - ((long) 1));
												{
													long BgL_iz00_1445;

													BgL_iz00_1445 = BgL_g1030z00_1443;
												BgL_zc3z04anonymousza31520ze3z87_1446:
													if ((BgL_iz00_1445 == ((long) -1)))
														{
															obj_t BgL_iz00_1449;

															BgL_iz00_1449 = BgL_startz00_148;
														BgL_zc3z04anonymousza31522ze3z87_1450:
															if (
																((long) CINT(BgL_iz00_1449) >= BgL_lenz00_1442))
																{	/* Ieee/string.scm 984 */
																	return BFALSE;
																}
															else
																{	/* Ieee/string.scm 984 */
																	if (
																		(STRING_REF(BgL_tz00_1441,
																				(STRING_REF(BgL_stringz00_146,
																						(long) CINT(BgL_iz00_1449)))) ==
																			((unsigned char) 'y')))
																		{	/* Ieee/string.scm 986 */
																			return BgL_iz00_1449;
																		}
																	else
																		{
																			obj_t BgL_iz00_7850;

																			BgL_iz00_7850 =
																				ADDFX(BgL_iz00_1449, BINT(((long) 1)));
																			BgL_iz00_1449 = BgL_iz00_7850;
																			goto
																				BgL_zc3z04anonymousza31522ze3z87_1450;
																		}
																}
														}
													else
														{	/* Ieee/string.scm 981 */
															{	/* Ieee/string.scm 993 */
																long BgL_arg1533z00_1461;

																BgL_arg1533z00_1461 =
																	(STRING_REF(
																		((obj_t) BgL_rsz00_147), BgL_iz00_1445));
																STRING_SET(BgL_tz00_1441, BgL_arg1533z00_1461,
																	((unsigned char) 'y'));
															}
															{
																long BgL_iz00_7857;

																BgL_iz00_7857 = (BgL_iz00_1445 - ((long) 1));
																BgL_iz00_1445 = BgL_iz00_7857;
																goto BgL_zc3z04anonymousza31520ze3z87_1446;
															}
														}
												}
											}
										}
								}
						}
					else
						{	/* Ieee/string.scm 960 */
							return
								BGl_errorz00zz__errorz00(BGl_string3548z00zz__r4_strings_6_7z00,
								BGl_string3549z00zz__r4_strings_6_7z00, BgL_rsz00_147);
						}
				}
		}

	}



/* _string-index-right */
	obj_t BGl__stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t
		BgL_env1146z00_155, obj_t BgL_opt1145z00_154)
	{
		{	/* Ieee/string.scm 999 */
			{	/* Ieee/string.scm 999 */
				obj_t BgL_sz00_1468;
				obj_t BgL_g1147z00_1469;

				BgL_sz00_1468 = VECTOR_REF(BgL_opt1145z00_154, ((long) 0));
				BgL_g1147z00_1469 = VECTOR_REF(BgL_opt1145z00_154, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1145z00_154))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 999 */
							long BgL_startz00_1473;

							{	/* Ieee/string.scm 999 */
								obj_t BgL_stringz00_3784;

								if (STRINGP(BgL_sz00_1468))
									{	/* Ieee/string.scm 999 */
										BgL_stringz00_3784 = BgL_sz00_1468;
									}
								else
									{
										obj_t BgL_auxz00_7864;

										BgL_auxz00_7864 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3476z00zz__r4_strings_6_7z00,
											BINT(((long) 43032)),
											BGl_string3550z00zz__r4_strings_6_7z00,
											BGl_string3478z00zz__r4_strings_6_7z00, BgL_sz00_1468);
										FAILURE(BgL_auxz00_7864, BFALSE, BFALSE);
									}
								BgL_startz00_1473 = STRING_LENGTH(BgL_stringz00_3784);
							}
							{	/* Ieee/string.scm 999 */

								{	/* Ieee/string.scm 999 */
									obj_t BgL_auxz00_7869;

									if (STRINGP(BgL_sz00_1468))
										{	/* Ieee/string.scm 999 */
											BgL_auxz00_7869 = BgL_sz00_1468;
										}
									else
										{
											obj_t BgL_auxz00_7872;

											BgL_auxz00_7872 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 42981)),
												BGl_string3550z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_sz00_1468);
											FAILURE(BgL_auxz00_7872, BFALSE, BFALSE);
										}
									return
										BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00
										(BgL_auxz00_7869, BgL_g1147z00_1469,
										BINT(BgL_startz00_1473));
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/string.scm 999 */
							obj_t BgL_startz00_1474;

							BgL_startz00_1474 = VECTOR_REF(BgL_opt1145z00_154, ((long) 2));
							{	/* Ieee/string.scm 999 */

								{	/* Ieee/string.scm 999 */
									obj_t BgL_auxz00_7879;

									if (STRINGP(BgL_sz00_1468))
										{	/* Ieee/string.scm 999 */
											BgL_auxz00_7879 = BgL_sz00_1468;
										}
									else
										{
											obj_t BgL_auxz00_7882;

											BgL_auxz00_7882 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 42981)),
												BGl_string3550z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_sz00_1468);
											FAILURE(BgL_auxz00_7882, BFALSE, BFALSE);
										}
									return
										BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00
										(BgL_auxz00_7879, BgL_g1147z00_1469, BgL_startz00_1474);
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



/* string-index-right */
	BGL_EXPORTED_DEF obj_t
		BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t BgL_sz00_151,
		obj_t BgL_rsz00_152, obj_t BgL_startz00_153)
	{
		{	/* Ieee/string.scm 999 */
			{
				obj_t BgL_sz00_1533;
				obj_t BgL_cz00_1534;

				if (((long) CINT(BgL_startz00_153) > STRING_LENGTH(BgL_sz00_151)))
					{	/* Ieee/string.scm 1010 */
						return
							BGl_errorz00zz__errorz00(BGl_string3551z00zz__r4_strings_6_7z00,
							BGl_string3552z00zz__r4_strings_6_7z00, BgL_startz00_153);
					}
				else
					{	/* Ieee/string.scm 1010 */
						if (CHARP(BgL_rsz00_152))
							{	/* Ieee/string.scm 1012 */
								BgL_sz00_1533 = BgL_sz00_151;
								BgL_cz00_1534 = BgL_rsz00_152;
							BgL_zc3z04anonymousza31588ze3z87_1535:
								{
									long BgL_iz00_1538;

									BgL_iz00_1538 = ((long) CINT(BgL_startz00_153) - ((long) 1));
								BgL_zc3z04anonymousza31589ze3z87_1539:
									if ((BgL_iz00_1538 < ((long) 0)))
										{	/* Ieee/string.scm 1003 */
											return BFALSE;
										}
									else
										{	/* Ieee/string.scm 1003 */
											if (
												(STRING_REF(BgL_sz00_1533, BgL_iz00_1538) ==
													CCHAR(BgL_cz00_1534)))
												{	/* Ieee/string.scm 1005 */
													return BINT(BgL_iz00_1538);
												}
											else
												{
													long BgL_iz00_7903;

													BgL_iz00_7903 = (BgL_iz00_1538 - ((long) 1));
													BgL_iz00_1538 = BgL_iz00_7903;
													goto BgL_zc3z04anonymousza31589ze3z87_1539;
												}
										}
								}
							}
						else
							{	/* Ieee/string.scm 1012 */
								if (STRINGP(BgL_rsz00_152))
									{	/* Ieee/string.scm 1014 */
										if ((STRING_LENGTH(BgL_rsz00_152) == ((long) 1)))
											{
												obj_t BgL_cz00_7913;
												obj_t BgL_sz00_7912;

												BgL_sz00_7912 = BgL_sz00_151;
												BgL_cz00_7913 =
													BCHAR(STRING_REF(BgL_rsz00_152, ((long) 0)));
												BgL_cz00_1534 = BgL_cz00_7913;
												BgL_sz00_1533 = BgL_sz00_7912;
												goto BgL_zc3z04anonymousza31588ze3z87_1535;
											}
										else
											{	/* Ieee/string.scm 1016 */
												if ((STRING_LENGTH(BgL_rsz00_152) <= ((long) 10)))
													{	/* Ieee/string.scm 1019 */
														long BgL_lenjz00_1486;

														BgL_lenjz00_1486 = STRING_LENGTH(BgL_rsz00_152);
														{
															long BgL_iz00_1489;

															BgL_iz00_1489 =
																((long) CINT(BgL_startz00_153) - ((long) 1));
														BgL_zc3z04anonymousza31554ze3z87_1490:
															if ((BgL_iz00_1489 < ((long) 0)))
																{	/* Ieee/string.scm 1022 */
																	return BFALSE;
																}
															else
																{	/* Ieee/string.scm 1024 */
																	unsigned char BgL_cz00_1492;

																	BgL_cz00_1492 =
																		STRING_REF(BgL_sz00_151, BgL_iz00_1489);
																	{
																		long BgL_jz00_1494;

																		BgL_jz00_1494 = ((long) 0);
																	BgL_zc3z04anonymousza31556ze3z87_1495:
																		if ((BgL_jz00_1494 == BgL_lenjz00_1486))
																			{
																				long BgL_iz00_7925;

																				BgL_iz00_7925 =
																					(BgL_iz00_1489 - ((long) 1));
																				BgL_iz00_1489 = BgL_iz00_7925;
																				goto
																					BgL_zc3z04anonymousza31554ze3z87_1490;
																			}
																		else
																			{	/* Ieee/string.scm 1026 */
																				if (
																					(BgL_cz00_1492 ==
																						STRING_REF(
																							((obj_t) BgL_rsz00_152),
																							BgL_jz00_1494)))
																					{	/* Ieee/string.scm 1028 */
																						return BINT(BgL_iz00_1489);
																					}
																				else
																					{
																						long BgL_jz00_7932;

																						BgL_jz00_7932 =
																							(BgL_jz00_1494 + ((long) 1));
																						BgL_jz00_1494 = BgL_jz00_7932;
																						goto
																							BgL_zc3z04anonymousza31556ze3z87_1495;
																					}
																			}
																	}
																}
														}
													}
												else
													{	/* Ieee/string.scm 1032 */
														obj_t BgL_tz00_1504;

														BgL_tz00_1504 =
															make_string(((long) 256), ((unsigned char) 'n'));
														{	/* Ieee/string.scm 1034 */
															long BgL_g1034z00_1506;

															BgL_g1034z00_1506 =
																(STRING_LENGTH(BgL_rsz00_152) - ((long) 1));
															{
																long BgL_iz00_1508;

																BgL_iz00_1508 = BgL_g1034z00_1506;
															BgL_zc3z04anonymousza31564ze3z87_1509:
																if ((BgL_iz00_1508 == ((long) -1)))
																	{
																		long BgL_iz00_1513;

																		BgL_iz00_1513 =
																			(
																			(long) CINT(BgL_startz00_153) -
																			((long) 1));
																	BgL_zc3z04anonymousza31566ze3z87_1514:
																		if ((BgL_iz00_1513 < ((long) 0)))
																			{	/* Ieee/string.scm 1038 */
																				return BFALSE;
																			}
																		else
																			{	/* Ieee/string.scm 1038 */
																				if (
																					(STRING_REF(BgL_tz00_1504,
																							(STRING_REF(BgL_sz00_151,
																									BgL_iz00_1513))) ==
																						((unsigned char) 'y')))
																					{	/* Ieee/string.scm 1040 */
																						return BINT(BgL_iz00_1513);
																					}
																				else
																					{
																						long BgL_iz00_7949;

																						BgL_iz00_7949 =
																							(BgL_iz00_1513 - ((long) 1));
																						BgL_iz00_1513 = BgL_iz00_7949;
																						goto
																							BgL_zc3z04anonymousza31566ze3z87_1514;
																					}
																			}
																	}
																else
																	{	/* Ieee/string.scm 1035 */
																		{	/* Ieee/string.scm 1047 */
																			long BgL_arg1578z00_1525;

																			BgL_arg1578z00_1525 =
																				(STRING_REF(
																					((obj_t) BgL_rsz00_152),
																					BgL_iz00_1508));
																			STRING_SET(BgL_tz00_1504,
																				BgL_arg1578z00_1525,
																				((unsigned char) 'y'));
																		}
																		{
																			long BgL_iz00_7957;

																			BgL_iz00_7957 =
																				(BgL_iz00_1508 - ((long) 1));
																			BgL_iz00_1508 = BgL_iz00_7957;
																			goto
																				BgL_zc3z04anonymousza31564ze3z87_1509;
																		}
																	}
															}
														}
													}
											}
									}
								else
									{	/* Ieee/string.scm 1014 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string3551z00zz__r4_strings_6_7z00,
											BGl_string3549z00zz__r4_strings_6_7z00, BgL_rsz00_152);
									}
							}
					}
			}
		}

	}



/* _string-skip */
	obj_t BGl__stringzd2skipzd2zz__r4_strings_6_7z00(obj_t BgL_env1151z00_160,
		obj_t BgL_opt1150z00_159)
	{
		{	/* Ieee/string.scm 1053 */
			{	/* Ieee/string.scm 1053 */
				obj_t BgL_g1152z00_1547;
				obj_t BgL_g1153z00_1548;

				BgL_g1152z00_1547 = VECTOR_REF(BgL_opt1150z00_159, ((long) 0));
				BgL_g1153z00_1548 = VECTOR_REF(BgL_opt1150z00_159, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1150z00_159))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 1053 */

							{	/* Ieee/string.scm 1053 */
								obj_t BgL_auxz00_7962;

								if (STRINGP(BgL_g1152z00_1547))
									{	/* Ieee/string.scm 1053 */
										BgL_auxz00_7962 = BgL_g1152z00_1547;
									}
								else
									{
										obj_t BgL_auxz00_7965;

										BgL_auxz00_7965 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3476z00zz__r4_strings_6_7z00,
											BINT(((long) 44602)),
											BGl_string3553z00zz__r4_strings_6_7z00,
											BGl_string3478z00zz__r4_strings_6_7z00,
											BgL_g1152z00_1547);
										FAILURE(BgL_auxz00_7965, BFALSE, BFALSE);
									}
								return
									BGl_stringzd2skipzd2zz__r4_strings_6_7z00(BgL_auxz00_7962,
									BgL_g1153z00_1548, BINT(((long) 0)));
						}} break;
					case ((long) 3):

						{	/* Ieee/string.scm 1053 */
							obj_t BgL_startz00_1553;

							BgL_startz00_1553 = VECTOR_REF(BgL_opt1150z00_159, ((long) 2));
							{	/* Ieee/string.scm 1053 */

								{	/* Ieee/string.scm 1053 */
									obj_t BgL_auxz00_7972;

									if (STRINGP(BgL_g1152z00_1547))
										{	/* Ieee/string.scm 1053 */
											BgL_auxz00_7972 = BgL_g1152z00_1547;
										}
									else
										{
											obj_t BgL_auxz00_7975;

											BgL_auxz00_7975 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 44602)),
												BGl_string3553z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_g1152z00_1547);
											FAILURE(BgL_auxz00_7975, BFALSE, BFALSE);
										}
									return
										BGl_stringzd2skipzd2zz__r4_strings_6_7z00(BgL_auxz00_7972,
										BgL_g1153z00_1548, BgL_startz00_1553);
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



/* string-skip */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2skipzd2zz__r4_strings_6_7z00(obj_t
		BgL_stringz00_156, obj_t BgL_rsz00_157, obj_t BgL_startz00_158)
	{
		{	/* Ieee/string.scm 1053 */
			{
				obj_t BgL_sz00_1622;
				obj_t BgL_predz00_1623;
				obj_t BgL_sz00_1609;
				obj_t BgL_cz00_1610;

				if (CHARP(BgL_rsz00_157))
					{	/* Ieee/string.scm 1077 */
						BgL_sz00_1609 = BgL_stringz00_156;
						BgL_cz00_1610 = BgL_rsz00_157;
					BgL_zc3z04anonymousza31636ze3z87_1611:
						{	/* Ieee/string.scm 1056 */
							long BgL_lenz00_1612;

							BgL_lenz00_1612 = STRING_LENGTH(BgL_sz00_1609);
							{
								obj_t BgL_iz00_1614;

								BgL_iz00_1614 = BgL_startz00_158;
							BgL_zc3z04anonymousza31637ze3z87_1615:
								if (((long) CINT(BgL_iz00_1614) >= BgL_lenz00_1612))
									{	/* Ieee/string.scm 1059 */
										return BFALSE;
									}
								else
									{	/* Ieee/string.scm 1059 */
										if (
											(STRING_REF(BgL_sz00_1609,
													(long) CINT(BgL_iz00_1614)) == CCHAR(BgL_cz00_1610)))
											{
												obj_t BgL_iz00_7993;

												BgL_iz00_7993 = ADDFX(BgL_iz00_1614, BINT(((long) 1)));
												BgL_iz00_1614 = BgL_iz00_7993;
												goto BgL_zc3z04anonymousza31637ze3z87_1615;
											}
										else
											{	/* Ieee/string.scm 1061 */
												return BgL_iz00_1614;
											}
									}
							}
						}
					}
				else
					{	/* Ieee/string.scm 1077 */
						if (PROCEDUREP(BgL_rsz00_157))
							{	/* Ieee/string.scm 1079 */
								BgL_sz00_1622 = BgL_stringz00_156;
								BgL_predz00_1623 = BgL_rsz00_157;
								{	/* Ieee/string.scm 1066 */
									long BgL_lenz00_1625;

									BgL_lenz00_1625 = STRING_LENGTH(BgL_sz00_1622);
									{
										obj_t BgL_iz00_1627;

										BgL_iz00_1627 = BgL_startz00_158;
									BgL_zc3z04anonymousza31644ze3z87_1628:
										if (((long) CINT(BgL_iz00_1627) >= BgL_lenz00_1625))
											{	/* Ieee/string.scm 1069 */
												return BFALSE;
											}
										else
											{	/* Ieee/string.scm 1071 */
												bool_t BgL_test4077z00_8002;

												{	/* Ieee/string.scm 1071 */
													unsigned char BgL_arg1651z00_1633;

													BgL_arg1651z00_1633 =
														STRING_REF(BgL_sz00_1622,
														(long) CINT(BgL_iz00_1627));
													BgL_test4077z00_8002 =
														CBOOL(PROCEDURE_ENTRY(BgL_predz00_1623)
														(BgL_predz00_1623, BCHAR(BgL_arg1651z00_1633),
															BEOA));
												}
												if (BgL_test4077z00_8002)
													{	/* Ieee/string.scm 1072 */
														long BgL_arg1650z00_1632;

														BgL_arg1650z00_1632 =
															((long) CINT(BgL_iz00_1627) + ((long) 1));
														{
															obj_t BgL_iz00_8013;

															BgL_iz00_8013 = BINT(BgL_arg1650z00_1632);
															BgL_iz00_1627 = BgL_iz00_8013;
															goto BgL_zc3z04anonymousza31644ze3z87_1628;
														}
													}
												else
													{	/* Ieee/string.scm 1071 */
														return BgL_iz00_1627;
													}
											}
									}
								}
							}
						else
							{	/* Ieee/string.scm 1079 */
								if (STRINGP(BgL_rsz00_157))
									{	/* Ieee/string.scm 1081 */
										if ((STRING_LENGTH(BgL_rsz00_157) == ((long) 1)))
											{
												obj_t BgL_cz00_8021;
												obj_t BgL_sz00_8020;

												BgL_sz00_8020 = BgL_stringz00_156;
												BgL_cz00_8021 =
													BCHAR(STRING_REF(BgL_rsz00_157, ((long) 0)));
												BgL_cz00_1610 = BgL_cz00_8021;
												BgL_sz00_1609 = BgL_sz00_8020;
												goto BgL_zc3z04anonymousza31636ze3z87_1611;
											}
										else
											{	/* Ieee/string.scm 1083 */
												if ((STRING_LENGTH(BgL_rsz00_157) <= ((long) 10)))
													{	/* Ieee/string.scm 1086 */
														long BgL_lenz00_1564;
														long BgL_lenjz00_1565;

														BgL_lenz00_1564 = STRING_LENGTH(BgL_stringz00_156);
														BgL_lenjz00_1565 = STRING_LENGTH(BgL_rsz00_157);
														{
															obj_t BgL_iz00_1567;

															BgL_iz00_1567 = BgL_startz00_158;
														BgL_zc3z04anonymousza31607ze3z87_1568:
															if (
																((long) CINT(BgL_iz00_1567) >= BgL_lenz00_1564))
																{	/* Ieee/string.scm 1089 */
																	return BFALSE;
																}
															else
																{	/* Ieee/string.scm 1091 */
																	unsigned char BgL_cz00_1570;

																	BgL_cz00_1570 =
																		STRING_REF(BgL_stringz00_156,
																		(long) CINT(BgL_iz00_1567));
																	{
																		long BgL_jz00_1572;

																		BgL_jz00_1572 = ((long) 0);
																	BgL_zc3z04anonymousza31609ze3z87_1573:
																		if ((BgL_jz00_1572 == BgL_lenjz00_1565))
																			{	/* Ieee/string.scm 1093 */
																				return BgL_iz00_1567;
																			}
																		else
																			{	/* Ieee/string.scm 1093 */
																				if (
																					(BgL_cz00_1570 ==
																						STRING_REF(
																							((obj_t) BgL_rsz00_157),
																							BgL_jz00_1572)))
																					{
																						obj_t BgL_iz00_8040;

																						BgL_iz00_8040 =
																							ADDFX(BgL_iz00_1567,
																							BINT(((long) 1)));
																						BgL_iz00_1567 = BgL_iz00_8040;
																						goto
																							BgL_zc3z04anonymousza31607ze3z87_1568;
																					}
																				else
																					{
																						long BgL_jz00_8043;

																						BgL_jz00_8043 =
																							(BgL_jz00_1572 + ((long) 1));
																						BgL_jz00_1572 = BgL_jz00_8043;
																						goto
																							BgL_zc3z04anonymousza31609ze3z87_1573;
																					}
																			}
																	}
																}
														}
													}
												else
													{	/* Ieee/string.scm 1099 */
														obj_t BgL_tz00_1582;
														long BgL_lenz00_1583;

														BgL_tz00_1582 =
															make_string(((long) 256), ((unsigned char) 'n'));
														BgL_lenz00_1583 = STRING_LENGTH(BgL_stringz00_156);
														{	/* Ieee/string.scm 1101 */
															long BgL_g1037z00_1584;

															BgL_g1037z00_1584 =
																(STRING_LENGTH(BgL_rsz00_157) - ((long) 1));
															{
																long BgL_iz00_1586;

																BgL_iz00_1586 = BgL_g1037z00_1584;
															BgL_zc3z04anonymousza31616ze3z87_1587:
																if ((BgL_iz00_1586 == ((long) -1)))
																	{
																		obj_t BgL_iz00_1590;

																		BgL_iz00_1590 = BgL_startz00_158;
																	BgL_zc3z04anonymousza31618ze3z87_1591:
																		if (
																			((long) CINT(BgL_iz00_1590) >=
																				BgL_lenz00_1583))
																			{	/* Ieee/string.scm 1105 */
																				return BFALSE;
																			}
																		else
																			{	/* Ieee/string.scm 1105 */
																				if (
																					(STRING_REF(BgL_tz00_1582,
																							(STRING_REF(BgL_stringz00_156,
																									(long) CINT(BgL_iz00_1590))))
																						== ((unsigned char) 'y')))
																					{
																						obj_t BgL_iz00_8060;

																						BgL_iz00_8060 =
																							ADDFX(BgL_iz00_1590,
																							BINT(((long) 1)));
																						BgL_iz00_1590 = BgL_iz00_8060;
																						goto
																							BgL_zc3z04anonymousza31618ze3z87_1591;
																					}
																				else
																					{	/* Ieee/string.scm 1107 */
																						return BgL_iz00_1590;
																					}
																			}
																	}
																else
																	{	/* Ieee/string.scm 1102 */
																		{	/* Ieee/string.scm 1114 */
																			long BgL_arg1630z00_1602;

																			BgL_arg1630z00_1602 =
																				(STRING_REF(
																					((obj_t) BgL_rsz00_157),
																					BgL_iz00_1586));
																			STRING_SET(BgL_tz00_1582,
																				BgL_arg1630z00_1602,
																				((unsigned char) 'y'));
																		}
																		{
																			long BgL_iz00_8067;

																			BgL_iz00_8067 =
																				(BgL_iz00_1586 - ((long) 1));
																			BgL_iz00_1586 = BgL_iz00_8067;
																			goto
																				BgL_zc3z04anonymousza31616ze3z87_1587;
																		}
																	}
															}
														}
													}
											}
									}
								else
									{	/* Ieee/string.scm 1081 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string3554z00zz__r4_strings_6_7z00,
											BGl_string3549z00zz__r4_strings_6_7z00, BgL_rsz00_157);
									}
							}
					}
			}
		}

	}



/* _string-skip-right */
	obj_t BGl__stringzd2skipzd2rightz00zz__r4_strings_6_7z00(obj_t
		BgL_env1157z00_165, obj_t BgL_opt1156z00_164)
	{
		{	/* Ieee/string.scm 1120 */
			{	/* Ieee/string.scm 1120 */
				obj_t BgL_sz00_1637;
				obj_t BgL_g1158z00_1638;

				BgL_sz00_1637 = VECTOR_REF(BgL_opt1156z00_164, ((long) 0));
				BgL_g1158z00_1638 = VECTOR_REF(BgL_opt1156z00_164, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1156z00_164))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 1120 */
							long BgL_startz00_1642;

							{	/* Ieee/string.scm 1120 */
								obj_t BgL_stringz00_3969;

								if (STRINGP(BgL_sz00_1637))
									{	/* Ieee/string.scm 1120 */
										BgL_stringz00_3969 = BgL_sz00_1637;
									}
								else
									{
										obj_t BgL_auxz00_8074;

										BgL_auxz00_8074 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3476z00zz__r4_strings_6_7z00,
											BINT(((long) 46477)),
											BGl_string3555z00zz__r4_strings_6_7z00,
											BGl_string3478z00zz__r4_strings_6_7z00, BgL_sz00_1637);
										FAILURE(BgL_auxz00_8074, BFALSE, BFALSE);
									}
								BgL_startz00_1642 = STRING_LENGTH(BgL_stringz00_3969);
							}
							{	/* Ieee/string.scm 1120 */

								{	/* Ieee/string.scm 1120 */
									obj_t BgL_auxz00_8079;

									if (STRINGP(BgL_sz00_1637))
										{	/* Ieee/string.scm 1120 */
											BgL_auxz00_8079 = BgL_sz00_1637;
										}
									else
										{
											obj_t BgL_auxz00_8082;

											BgL_auxz00_8082 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 46427)),
												BGl_string3555z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_sz00_1637);
											FAILURE(BgL_auxz00_8082, BFALSE, BFALSE);
										}
									return
										BGl_stringzd2skipzd2rightz00zz__r4_strings_6_7z00
										(BgL_auxz00_8079, BgL_g1158z00_1638,
										BINT(BgL_startz00_1642));
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/string.scm 1120 */
							obj_t BgL_startz00_1643;

							BgL_startz00_1643 = VECTOR_REF(BgL_opt1156z00_164, ((long) 2));
							{	/* Ieee/string.scm 1120 */

								{	/* Ieee/string.scm 1120 */
									obj_t BgL_auxz00_8089;

									if (STRINGP(BgL_sz00_1637))
										{	/* Ieee/string.scm 1120 */
											BgL_auxz00_8089 = BgL_sz00_1637;
										}
									else
										{
											obj_t BgL_auxz00_8092;

											BgL_auxz00_8092 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 46427)),
												BGl_string3555z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_sz00_1637);
											FAILURE(BgL_auxz00_8092, BFALSE, BFALSE);
										}
									return
										BGl_stringzd2skipzd2rightz00zz__r4_strings_6_7z00
										(BgL_auxz00_8089, BgL_g1158z00_1638, BgL_startz00_1643);
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



/* string-skip-right */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2skipzd2rightz00zz__r4_strings_6_7z00(obj_t
		BgL_sz00_161, obj_t BgL_rsz00_162, obj_t BgL_startz00_163)
	{
		{	/* Ieee/string.scm 1120 */
			{
				obj_t BgL_sz00_1717;
				obj_t BgL_predz00_1718;
				obj_t BgL_sz00_1704;
				obj_t BgL_cz00_1705;

				if (((long) CINT(BgL_startz00_163) > STRING_LENGTH(BgL_sz00_161)))
					{	/* Ieee/string.scm 1143 */
						return
							BGl_errorz00zz__errorz00(BGl_string3548z00zz__r4_strings_6_7z00,
							BGl_string3552z00zz__r4_strings_6_7z00, BgL_startz00_163);
					}
				else
					{	/* Ieee/string.scm 1143 */
						if (CHARP(BgL_rsz00_162))
							{	/* Ieee/string.scm 1145 */
								BgL_sz00_1704 = BgL_sz00_161;
								BgL_cz00_1705 = BgL_rsz00_162;
							BgL_zc3z04anonymousza31709ze3z87_1706:
								{
									long BgL_iz00_1709;

									BgL_iz00_1709 = ((long) CINT(BgL_startz00_163) - ((long) 1));
								BgL_zc3z04anonymousza31710ze3z87_1710:
									if ((BgL_iz00_1709 < ((long) 0)))
										{	/* Ieee/string.scm 1125 */
											return BFALSE;
										}
									else
										{	/* Ieee/string.scm 1125 */
											if (
												(STRING_REF(BgL_sz00_1704, BgL_iz00_1709) ==
													CCHAR(BgL_cz00_1705)))
												{
													long BgL_iz00_8112;

													BgL_iz00_8112 = (BgL_iz00_1709 - ((long) 1));
													BgL_iz00_1709 = BgL_iz00_8112;
													goto BgL_zc3z04anonymousza31710ze3z87_1710;
												}
											else
												{	/* Ieee/string.scm 1127 */
													return BINT(BgL_iz00_1709);
												}
										}
								}
							}
						else
							{	/* Ieee/string.scm 1145 */
								if (PROCEDUREP(BgL_rsz00_162))
									{	/* Ieee/string.scm 1147 */
										BgL_sz00_1717 = BgL_sz00_161;
										BgL_predz00_1718 = BgL_rsz00_162;
										{	/* Ieee/string.scm 1133 */
											long BgL_g1040z00_1720;

											BgL_g1040z00_1720 =
												((long) CINT(BgL_startz00_163) - ((long) 1));
											{
												long BgL_iz00_1722;

												BgL_iz00_1722 = BgL_g1040z00_1720;
											BgL_zc3z04anonymousza31719ze3z87_1723:
												if ((BgL_iz00_1722 < ((long) 0)))
													{	/* Ieee/string.scm 1135 */
														return BFALSE;
													}
												else
													{	/* Ieee/string.scm 1137 */
														bool_t BgL_test4096z00_8123;

														{	/* Ieee/string.scm 1137 */
															unsigned char BgL_arg1725z00_1728;

															BgL_arg1725z00_1728 =
																STRING_REF(BgL_sz00_1717, BgL_iz00_1722);
															BgL_test4096z00_8123 =
																CBOOL(PROCEDURE_ENTRY(BgL_predz00_1718)
																(BgL_predz00_1718, BCHAR(BgL_arg1725z00_1728),
																	BEOA));
														}
														if (BgL_test4096z00_8123)
															{
																long BgL_iz00_8131;

																BgL_iz00_8131 = (BgL_iz00_1722 - ((long) 1));
																BgL_iz00_1722 = BgL_iz00_8131;
																goto BgL_zc3z04anonymousza31719ze3z87_1723;
															}
														else
															{	/* Ieee/string.scm 1137 */
																return BINT(BgL_iz00_1722);
															}
													}
											}
										}
									}
								else
									{	/* Ieee/string.scm 1147 */
										if (STRINGP(BgL_rsz00_162))
											{	/* Ieee/string.scm 1149 */
												if ((STRING_LENGTH(BgL_rsz00_162) == ((long) 1)))
													{
														obj_t BgL_cz00_8140;
														obj_t BgL_sz00_8139;

														BgL_sz00_8139 = BgL_sz00_161;
														BgL_cz00_8140 =
															BCHAR(STRING_REF(BgL_rsz00_162, ((long) 0)));
														BgL_cz00_1705 = BgL_cz00_8140;
														BgL_sz00_1704 = BgL_sz00_8139;
														goto BgL_zc3z04anonymousza31709ze3z87_1706;
													}
												else
													{	/* Ieee/string.scm 1151 */
														if ((STRING_LENGTH(BgL_rsz00_162) <= ((long) 10)))
															{	/* Ieee/string.scm 1154 */
																long BgL_lenjz00_1657;

																BgL_lenjz00_1657 = STRING_LENGTH(BgL_rsz00_162);
																{
																	long BgL_iz00_1660;

																	BgL_iz00_1660 =
																		(
																		(long) CINT(BgL_startz00_163) - ((long) 1));
																BgL_zc3z04anonymousza31664ze3z87_1661:
																	if ((BgL_iz00_1660 < ((long) 0)))
																		{	/* Ieee/string.scm 1157 */
																			return BFALSE;
																		}
																	else
																		{	/* Ieee/string.scm 1159 */
																			unsigned char BgL_cz00_1663;

																			BgL_cz00_1663 =
																				STRING_REF(BgL_sz00_161, BgL_iz00_1660);
																			{
																				long BgL_jz00_1665;

																				BgL_jz00_1665 = ((long) 0);
																			BgL_zc3z04anonymousza31666ze3z87_1666:
																				if ((BgL_jz00_1665 == BgL_lenjz00_1657))
																					{	/* Ieee/string.scm 1161 */
																						return BINT(BgL_iz00_1660);
																					}
																				else
																					{	/* Ieee/string.scm 1161 */
																						if (
																							(BgL_cz00_1663 ==
																								STRING_REF(
																									((obj_t) BgL_rsz00_162),
																									BgL_jz00_1665)))
																							{
																								long BgL_iz00_8157;

																								BgL_iz00_8157 =
																									(BgL_iz00_1660 - ((long) 1));
																								BgL_iz00_1660 = BgL_iz00_8157;
																								goto
																									BgL_zc3z04anonymousza31664ze3z87_1661;
																							}
																						else
																							{
																								long BgL_jz00_8159;

																								BgL_jz00_8159 =
																									(BgL_jz00_1665 + ((long) 1));
																								BgL_jz00_1665 = BgL_jz00_8159;
																								goto
																									BgL_zc3z04anonymousza31666ze3z87_1666;
																							}
																					}
																			}
																		}
																}
															}
														else
															{	/* Ieee/string.scm 1167 */
																obj_t BgL_tz00_1675;

																BgL_tz00_1675 =
																	make_string(((long) 256),
																	((unsigned char) 'n'));
																{	/* Ieee/string.scm 1169 */
																	long BgL_g1042z00_1677;

																	BgL_g1042z00_1677 =
																		(STRING_LENGTH(BgL_rsz00_162) - ((long) 1));
																	{
																		long BgL_iz00_1679;

																		BgL_iz00_1679 = BgL_g1042z00_1677;
																	BgL_zc3z04anonymousza31684ze3z87_1680:
																		if ((BgL_iz00_1679 == ((long) -1)))
																			{
																				long BgL_iz00_1684;

																				BgL_iz00_1684 =
																					(
																					(long) CINT(BgL_startz00_163) -
																					((long) 1));
																			BgL_zc3z04anonymousza31686ze3z87_1685:
																				if ((BgL_iz00_1684 < ((long) 0)))
																					{	/* Ieee/string.scm 1173 */
																						return BFALSE;
																					}
																				else
																					{	/* Ieee/string.scm 1173 */
																						if (
																							(STRING_REF(BgL_tz00_1675,
																									(STRING_REF(BgL_sz00_161,
																											BgL_iz00_1684))) ==
																								((unsigned char) 'y')))
																							{
																								long BgL_iz00_8175;

																								BgL_iz00_8175 =
																									(BgL_iz00_1684 - ((long) 1));
																								BgL_iz00_1684 = BgL_iz00_8175;
																								goto
																									BgL_zc3z04anonymousza31686ze3z87_1685;
																							}
																						else
																							{	/* Ieee/string.scm 1175 */
																								return BINT(BgL_iz00_1684);
																							}
																					}
																			}
																		else
																			{	/* Ieee/string.scm 1170 */
																				{	/* Ieee/string.scm 1182 */
																					long BgL_arg1699z00_1696;

																					BgL_arg1699z00_1696 =
																						(STRING_REF(
																							((obj_t) BgL_rsz00_162),
																							BgL_iz00_1679));
																					STRING_SET(BgL_tz00_1675,
																						BgL_arg1699z00_1696,
																						((unsigned char) 'y'));
																				}
																				{
																					long BgL_iz00_8184;

																					BgL_iz00_8184 =
																						(BgL_iz00_1679 - ((long) 1));
																					BgL_iz00_1679 = BgL_iz00_8184;
																					goto
																						BgL_zc3z04anonymousza31684ze3z87_1680;
																				}
																			}
																	}
																}
															}
													}
											}
										else
											{	/* Ieee/string.scm 1149 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string3551z00zz__r4_strings_6_7z00,
													BGl_string3549z00zz__r4_strings_6_7z00,
													BgL_rsz00_162);
											}
									}
							}
					}
			}
		}

	}



/* _string-prefix-length */
	obj_t BGl__stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(obj_t
		BgL_env1162z00_183, obj_t BgL_opt1161z00_182)
	{
		{	/* Ieee/string.scm 1216 */
			{	/* Ieee/string.scm 1216 */
				obj_t BgL_s1z00_1740;
				obj_t BgL_s2z00_1741;

				BgL_s1z00_1740 = VECTOR_REF(BgL_opt1161z00_182, ((long) 0));
				BgL_s2z00_1741 = VECTOR_REF(BgL_opt1161z00_182, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1161z00_182))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 1216 */

							{	/* Ieee/string.scm 1216 */
								int BgL_tmpz00_8189;

								{	/* Ieee/string.scm 1216 */
									obj_t BgL_auxz00_8197;
									obj_t BgL_auxz00_8190;

									if (STRINGP(BgL_s2z00_1741))
										{	/* Ieee/string.scm 1216 */
											BgL_auxz00_8197 = BgL_s2z00_1741;
										}
									else
										{
											obj_t BgL_auxz00_8200;

											BgL_auxz00_8200 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 49330)),
												BGl_string3556z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_s2z00_1741);
											FAILURE(BgL_auxz00_8200, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_s1z00_1740))
										{	/* Ieee/string.scm 1216 */
											BgL_auxz00_8190 = BgL_s1z00_1740;
										}
									else
										{
											obj_t BgL_auxz00_8193;

											BgL_auxz00_8193 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 49330)),
												BGl_string3556z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_s1z00_1740);
											FAILURE(BgL_auxz00_8193, BFALSE, BFALSE);
										}
									BgL_tmpz00_8189 =
										BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00
										(BgL_auxz00_8190, BgL_auxz00_8197, BFALSE, BFALSE, BFALSE,
										BFALSE);
								}
								return BINT(BgL_tmpz00_8189);
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/string.scm 1216 */
							obj_t BgL_start1z00_1749;

							BgL_start1z00_1749 = VECTOR_REF(BgL_opt1161z00_182, ((long) 2));
							{	/* Ieee/string.scm 1216 */

								{	/* Ieee/string.scm 1216 */
									int BgL_tmpz00_8207;

									{	/* Ieee/string.scm 1216 */
										obj_t BgL_auxz00_8215;
										obj_t BgL_auxz00_8208;

										if (STRINGP(BgL_s2z00_1741))
											{	/* Ieee/string.scm 1216 */
												BgL_auxz00_8215 = BgL_s2z00_1741;
											}
										else
											{
												obj_t BgL_auxz00_8218;

												BgL_auxz00_8218 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 49330)),
													BGl_string3556z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_s2z00_1741);
												FAILURE(BgL_auxz00_8218, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_s1z00_1740))
											{	/* Ieee/string.scm 1216 */
												BgL_auxz00_8208 = BgL_s1z00_1740;
											}
										else
											{
												obj_t BgL_auxz00_8211;

												BgL_auxz00_8211 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 49330)),
													BGl_string3556z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_s1z00_1740);
												FAILURE(BgL_auxz00_8211, BFALSE, BFALSE);
											}
										BgL_tmpz00_8207 =
											BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00
											(BgL_auxz00_8208, BgL_auxz00_8215, BgL_start1z00_1749,
											BFALSE, BFALSE, BFALSE);
									}
									return BINT(BgL_tmpz00_8207);
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/string.scm 1216 */
							obj_t BgL_start1z00_1753;

							BgL_start1z00_1753 = VECTOR_REF(BgL_opt1161z00_182, ((long) 2));
							{	/* Ieee/string.scm 1216 */
								obj_t BgL_end1z00_1754;

								BgL_end1z00_1754 = VECTOR_REF(BgL_opt1161z00_182, ((long) 3));
								{	/* Ieee/string.scm 1216 */

									{	/* Ieee/string.scm 1216 */
										int BgL_tmpz00_8226;

										{	/* Ieee/string.scm 1216 */
											obj_t BgL_auxz00_8234;
											obj_t BgL_auxz00_8227;

											if (STRINGP(BgL_s2z00_1741))
												{	/* Ieee/string.scm 1216 */
													BgL_auxz00_8234 = BgL_s2z00_1741;
												}
											else
												{
													obj_t BgL_auxz00_8237;

													BgL_auxz00_8237 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 49330)),
														BGl_string3556z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_s2z00_1741);
													FAILURE(BgL_auxz00_8237, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_s1z00_1740))
												{	/* Ieee/string.scm 1216 */
													BgL_auxz00_8227 = BgL_s1z00_1740;
												}
											else
												{
													obj_t BgL_auxz00_8230;

													BgL_auxz00_8230 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 49330)),
														BGl_string3556z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_s1z00_1740);
													FAILURE(BgL_auxz00_8230, BFALSE, BFALSE);
												}
											BgL_tmpz00_8226 =
												BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00
												(BgL_auxz00_8227, BgL_auxz00_8234, BgL_start1z00_1753,
												BgL_end1z00_1754, BFALSE, BFALSE);
										}
										return BINT(BgL_tmpz00_8226);
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Ieee/string.scm 1216 */
							obj_t BgL_start1z00_1757;

							BgL_start1z00_1757 = VECTOR_REF(BgL_opt1161z00_182, ((long) 2));
							{	/* Ieee/string.scm 1216 */
								obj_t BgL_end1z00_1758;

								BgL_end1z00_1758 = VECTOR_REF(BgL_opt1161z00_182, ((long) 3));
								{	/* Ieee/string.scm 1216 */
									obj_t BgL_start2z00_1759;

									BgL_start2z00_1759 =
										VECTOR_REF(BgL_opt1161z00_182, ((long) 4));
									{	/* Ieee/string.scm 1216 */

										{	/* Ieee/string.scm 1216 */
											int BgL_tmpz00_8246;

											{	/* Ieee/string.scm 1216 */
												obj_t BgL_auxz00_8254;
												obj_t BgL_auxz00_8247;

												if (STRINGP(BgL_s2z00_1741))
													{	/* Ieee/string.scm 1216 */
														BgL_auxz00_8254 = BgL_s2z00_1741;
													}
												else
													{
														obj_t BgL_auxz00_8257;

														BgL_auxz00_8257 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 49330)),
															BGl_string3556z00zz__r4_strings_6_7z00,
															BGl_string3478z00zz__r4_strings_6_7z00,
															BgL_s2z00_1741);
														FAILURE(BgL_auxz00_8257, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_s1z00_1740))
													{	/* Ieee/string.scm 1216 */
														BgL_auxz00_8247 = BgL_s1z00_1740;
													}
												else
													{
														obj_t BgL_auxz00_8250;

														BgL_auxz00_8250 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 49330)),
															BGl_string3556z00zz__r4_strings_6_7z00,
															BGl_string3478z00zz__r4_strings_6_7z00,
															BgL_s1z00_1740);
														FAILURE(BgL_auxz00_8250, BFALSE, BFALSE);
													}
												BgL_tmpz00_8246 =
													BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00
													(BgL_auxz00_8247, BgL_auxz00_8254, BgL_start1z00_1757,
													BgL_end1z00_1758, BgL_start2z00_1759, BFALSE);
											}
											return BINT(BgL_tmpz00_8246);
										}
									}
								}
							}
						}
						break;
					case ((long) 6):

						{	/* Ieee/string.scm 1216 */
							obj_t BgL_start1z00_1761;

							BgL_start1z00_1761 = VECTOR_REF(BgL_opt1161z00_182, ((long) 2));
							{	/* Ieee/string.scm 1216 */
								obj_t BgL_end1z00_1762;

								BgL_end1z00_1762 = VECTOR_REF(BgL_opt1161z00_182, ((long) 3));
								{	/* Ieee/string.scm 1216 */
									obj_t BgL_start2z00_1763;

									BgL_start2z00_1763 =
										VECTOR_REF(BgL_opt1161z00_182, ((long) 4));
									{	/* Ieee/string.scm 1216 */
										obj_t BgL_end2z00_1764;

										BgL_end2z00_1764 =
											VECTOR_REF(BgL_opt1161z00_182, ((long) 5));
										{	/* Ieee/string.scm 1216 */

											{	/* Ieee/string.scm 1216 */
												int BgL_tmpz00_8267;

												{	/* Ieee/string.scm 1216 */
													obj_t BgL_auxz00_8275;
													obj_t BgL_auxz00_8268;

													if (STRINGP(BgL_s2z00_1741))
														{	/* Ieee/string.scm 1216 */
															BgL_auxz00_8275 = BgL_s2z00_1741;
														}
													else
														{
															obj_t BgL_auxz00_8278;

															BgL_auxz00_8278 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 49330)),
																BGl_string3556z00zz__r4_strings_6_7z00,
																BGl_string3478z00zz__r4_strings_6_7z00,
																BgL_s2z00_1741);
															FAILURE(BgL_auxz00_8278, BFALSE, BFALSE);
														}
													if (STRINGP(BgL_s1z00_1740))
														{	/* Ieee/string.scm 1216 */
															BgL_auxz00_8268 = BgL_s1z00_1740;
														}
													else
														{
															obj_t BgL_auxz00_8271;

															BgL_auxz00_8271 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 49330)),
																BGl_string3556z00zz__r4_strings_6_7z00,
																BGl_string3478z00zz__r4_strings_6_7z00,
																BgL_s1z00_1740);
															FAILURE(BgL_auxz00_8271, BFALSE, BFALSE);
														}
													BgL_tmpz00_8267 =
														BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00
														(BgL_auxz00_8268, BgL_auxz00_8275,
														BgL_start1z00_1761, BgL_end1z00_1762,
														BgL_start2z00_1763, BgL_end2z00_1764);
												}
												return BINT(BgL_tmpz00_8267);
											}
										}
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



/* string-prefix-length */
	BGL_EXPORTED_DEF int
		BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(obj_t BgL_s1z00_176,
		obj_t BgL_s2z00_177, obj_t BgL_start1z00_178, obj_t BgL_end1z00_179,
		obj_t BgL_start2z00_180, obj_t BgL_end2z00_181)
	{
		{	/* Ieee/string.scm 1216 */
			{	/* Ieee/string.scm 1218 */
				long BgL_l1z00_1765;

				BgL_l1z00_1765 = STRING_LENGTH(BgL_s1z00_176);
				{	/* Ieee/string.scm 1218 */
					long BgL_l2z00_1766;

					BgL_l2z00_1766 = STRING_LENGTH(BgL_s2z00_177);
					{	/* Ieee/string.scm 1219 */
						obj_t BgL_e1z00_1767;

						{	/* Ieee/string.scm 1220 */
							obj_t BgL_procz00_4092;

							BgL_procz00_4092 = BGl_symbol3557z00zz__r4_strings_6_7z00;
							if (CBOOL(BgL_end1z00_179))
								{	/* Ieee/string.scm 1204 */
									if (((long) CINT(BgL_end1z00_179) <= ((long) 0)))
										{	/* Ieee/string.scm 1206 */
											BgL_e1z00_1767 =
												BGl_errorz00zz__errorz00(BgL_procz00_4092,
												string_append_3(BGl_string3559z00zz__r4_strings_6_7z00,
													BGl_string3560z00zz__r4_strings_6_7z00,
													BGl_string3561z00zz__r4_strings_6_7z00),
												BgL_end1z00_179);
										}
									else
										{	/* Ieee/string.scm 1206 */
											if (((long) CINT(BgL_end1z00_179) > BgL_l1z00_1765))
												{	/* Ieee/string.scm 1208 */
													BgL_e1z00_1767 =
														BGl_errorz00zz__errorz00(BgL_procz00_4092,
														string_append_3
														(BGl_string3562z00zz__r4_strings_6_7z00,
															BGl_string3560z00zz__r4_strings_6_7z00,
															BGl_string3561z00zz__r4_strings_6_7z00),
														BgL_end1z00_179);
												}
											else
												{	/* Ieee/string.scm 1208 */
													BgL_e1z00_1767 = BgL_end1z00_179;
												}
										}
								}
							else
								{	/* Ieee/string.scm 1204 */
									BgL_e1z00_1767 = BINT(BgL_l1z00_1765);
								}
						}
						{	/* Ieee/string.scm 1220 */
							obj_t BgL_e2z00_1768;

							{	/* Ieee/string.scm 1221 */
								obj_t BgL_procz00_4102;

								BgL_procz00_4102 = BGl_symbol3557z00zz__r4_strings_6_7z00;
								if (CBOOL(BgL_end2z00_181))
									{	/* Ieee/string.scm 1204 */
										if (((long) CINT(BgL_end2z00_181) <= ((long) 0)))
											{	/* Ieee/string.scm 1206 */
												BgL_e2z00_1768 =
													BGl_errorz00zz__errorz00(BgL_procz00_4102,
													string_append_3
													(BGl_string3559z00zz__r4_strings_6_7z00,
														BGl_string3563z00zz__r4_strings_6_7z00,
														BGl_string3561z00zz__r4_strings_6_7z00),
													BgL_end2z00_181);
											}
										else
											{	/* Ieee/string.scm 1206 */
												if (((long) CINT(BgL_end2z00_181) > BgL_l2z00_1766))
													{	/* Ieee/string.scm 1208 */
														BgL_e2z00_1768 =
															BGl_errorz00zz__errorz00(BgL_procz00_4102,
															string_append_3
															(BGl_string3562z00zz__r4_strings_6_7z00,
																BGl_string3563z00zz__r4_strings_6_7z00,
																BGl_string3561z00zz__r4_strings_6_7z00),
															BgL_end2z00_181);
													}
												else
													{	/* Ieee/string.scm 1208 */
														BgL_e2z00_1768 = BgL_end2z00_181;
													}
											}
									}
								else
									{	/* Ieee/string.scm 1204 */
										BgL_e2z00_1768 = BINT(BgL_l2z00_1766);
									}
							}
							{	/* Ieee/string.scm 1221 */
								obj_t BgL_b1z00_1769;

								{	/* Ieee/string.scm 1222 */
									obj_t BgL_procz00_4112;

									BgL_procz00_4112 = BGl_symbol3557z00zz__r4_strings_6_7z00;
									if (CBOOL(BgL_start1z00_178))
										{	/* Ieee/string.scm 1190 */
											if (((long) CINT(BgL_start1z00_178) < ((long) 0)))
												{	/* Ieee/string.scm 1192 */
													BgL_b1z00_1769 =
														BGl_errorz00zz__errorz00(BgL_procz00_4112,
														string_append_3
														(BGl_string3564z00zz__r4_strings_6_7z00,
															BGl_string3565z00zz__r4_strings_6_7z00,
															BGl_string3561z00zz__r4_strings_6_7z00),
														BgL_start1z00_178);
												}
											else
												{	/* Ieee/string.scm 1192 */
													if (
														((long) CINT(BgL_start1z00_178) >= BgL_l1z00_1765))
														{	/* Ieee/string.scm 1194 */
															BgL_b1z00_1769 =
																BGl_errorz00zz__errorz00(BgL_procz00_4112,
																string_append_3
																(BGl_string3566z00zz__r4_strings_6_7z00,
																	BGl_string3565z00zz__r4_strings_6_7z00,
																	BGl_string3561z00zz__r4_strings_6_7z00),
																BgL_start1z00_178);
														}
													else
														{	/* Ieee/string.scm 1194 */
															BgL_b1z00_1769 = BgL_start1z00_178;
														}
												}
										}
									else
										{	/* Ieee/string.scm 1190 */
											BgL_b1z00_1769 = BINT(((long) 0));
								}}
								{	/* Ieee/string.scm 1222 */
									obj_t BgL_b2z00_1770;

									{	/* Ieee/string.scm 1223 */
										obj_t BgL_procz00_4122;

										BgL_procz00_4122 = BGl_symbol3557z00zz__r4_strings_6_7z00;
										if (CBOOL(BgL_start2z00_180))
											{	/* Ieee/string.scm 1190 */
												if (((long) CINT(BgL_start2z00_180) < ((long) 0)))
													{	/* Ieee/string.scm 1192 */
														BgL_b2z00_1770 =
															BGl_errorz00zz__errorz00(BgL_procz00_4122,
															string_append_3
															(BGl_string3564z00zz__r4_strings_6_7z00,
																BGl_string3567z00zz__r4_strings_6_7z00,
																BGl_string3561z00zz__r4_strings_6_7z00),
															BgL_start2z00_180);
													}
												else
													{	/* Ieee/string.scm 1192 */
														if (
															((long) CINT(BgL_start2z00_180) >=
																BgL_l2z00_1766))
															{	/* Ieee/string.scm 1194 */
																BgL_b2z00_1770 =
																	BGl_errorz00zz__errorz00(BgL_procz00_4122,
																	string_append_3
																	(BGl_string3566z00zz__r4_strings_6_7z00,
																		BGl_string3567z00zz__r4_strings_6_7z00,
																		BGl_string3561z00zz__r4_strings_6_7z00),
																	BgL_start2z00_180);
															}
														else
															{	/* Ieee/string.scm 1194 */
																BgL_b2z00_1770 = BgL_start2z00_180;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1190 */
												BgL_b2z00_1770 = BINT(((long) 0));
									}}
									{	/* Ieee/string.scm 1223 */

										{
											obj_t BgL_i1z00_1772;
											obj_t BgL_i2z00_1773;

											{	/* Ieee/string.scm 1224 */
												long BgL_tmpz00_8340;

												BgL_i1z00_1772 = BgL_b1z00_1769;
												BgL_i2z00_1773 = BgL_b2z00_1770;
											BgL_zc3z04anonymousza31735ze3z87_1774:
												{	/* Ieee/string.scm 1227 */
													bool_t BgL_test4128z00_8341;

													if (
														((long) CINT(BgL_i1z00_1772) ==
															(long) CINT(BgL_e1z00_1767)))
														{	/* Ieee/string.scm 1227 */
															BgL_test4128z00_8341 = ((bool_t) 1);
														}
													else
														{	/* Ieee/string.scm 1227 */
															BgL_test4128z00_8341 =
																(
																(long) CINT(BgL_i2z00_1773) ==
																(long) CINT(BgL_e2z00_1768));
														}
													if (BgL_test4128z00_8341)
														{	/* Ieee/string.scm 1227 */
															BgL_tmpz00_8340 =
																(
																(long) CINT(BgL_i1z00_1772) -
																(long) CINT(BgL_b1z00_1769));
														}
													else
														{	/* Ieee/string.scm 1227 */
															if (
																(STRING_REF(BgL_s1z00_176,
																		(long) CINT(BgL_i1z00_1772)) ==
																	STRING_REF(BgL_s2z00_177,
																		(long) CINT(BgL_i2z00_1773))))
																{
																	obj_t BgL_i2z00_8361;
																	obj_t BgL_i1z00_8358;

																	BgL_i1z00_8358 =
																		ADDFX(BgL_i1z00_1772, BINT(((long) 1)));
																	BgL_i2z00_8361 =
																		ADDFX(BgL_i2z00_1773, BINT(((long) 1)));
																	BgL_i2z00_1773 = BgL_i2z00_8361;
																	BgL_i1z00_1772 = BgL_i1z00_8358;
																	goto BgL_zc3z04anonymousza31735ze3z87_1774;
																}
															else
																{	/* Ieee/string.scm 1229 */
																	BgL_tmpz00_8340 =
																		(
																		(long) CINT(BgL_i1z00_1772) -
																		(long) CINT(BgL_b1z00_1769));
												}}}
												return (int) (BgL_tmpz00_8340);
		}}}}}}}}}}

	}



/* _string-prefix-length-ci */
	obj_t BGl__stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t
		BgL_env1166z00_191, obj_t BgL_opt1165z00_190)
	{
		{	/* Ieee/string.scm 1237 */
			{	/* Ieee/string.scm 1237 */
				obj_t BgL_s1z00_1786;
				obj_t BgL_s2z00_1787;

				BgL_s1z00_1786 = VECTOR_REF(BgL_opt1165z00_190, ((long) 0));
				BgL_s2z00_1787 = VECTOR_REF(BgL_opt1165z00_190, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1165z00_190))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 1237 */

							{	/* Ieee/string.scm 1237 */
								int BgL_tmpz00_8370;

								{	/* Ieee/string.scm 1237 */
									obj_t BgL_auxz00_8378;
									obj_t BgL_auxz00_8371;

									if (STRINGP(BgL_s2z00_1787))
										{	/* Ieee/string.scm 1237 */
											BgL_auxz00_8378 = BgL_s2z00_1787;
										}
									else
										{
											obj_t BgL_auxz00_8381;

											BgL_auxz00_8381 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 50211)),
												BGl_string3568z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_s2z00_1787);
											FAILURE(BgL_auxz00_8381, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_s1z00_1786))
										{	/* Ieee/string.scm 1237 */
											BgL_auxz00_8371 = BgL_s1z00_1786;
										}
									else
										{
											obj_t BgL_auxz00_8374;

											BgL_auxz00_8374 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 50211)),
												BGl_string3568z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_s1z00_1786);
											FAILURE(BgL_auxz00_8374, BFALSE, BFALSE);
										}
									BgL_tmpz00_8370 =
										BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00
										(BgL_auxz00_8371, BgL_auxz00_8378, BFALSE, BFALSE, BFALSE,
										BFALSE);
								}
								return BINT(BgL_tmpz00_8370);
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/string.scm 1237 */
							obj_t BgL_start1z00_1795;

							BgL_start1z00_1795 = VECTOR_REF(BgL_opt1165z00_190, ((long) 2));
							{	/* Ieee/string.scm 1237 */

								{	/* Ieee/string.scm 1237 */
									int BgL_tmpz00_8388;

									{	/* Ieee/string.scm 1237 */
										obj_t BgL_auxz00_8396;
										obj_t BgL_auxz00_8389;

										if (STRINGP(BgL_s2z00_1787))
											{	/* Ieee/string.scm 1237 */
												BgL_auxz00_8396 = BgL_s2z00_1787;
											}
										else
											{
												obj_t BgL_auxz00_8399;

												BgL_auxz00_8399 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 50211)),
													BGl_string3568z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_s2z00_1787);
												FAILURE(BgL_auxz00_8399, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_s1z00_1786))
											{	/* Ieee/string.scm 1237 */
												BgL_auxz00_8389 = BgL_s1z00_1786;
											}
										else
											{
												obj_t BgL_auxz00_8392;

												BgL_auxz00_8392 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 50211)),
													BGl_string3568z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_s1z00_1786);
												FAILURE(BgL_auxz00_8392, BFALSE, BFALSE);
											}
										BgL_tmpz00_8388 =
											BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00
											(BgL_auxz00_8389, BgL_auxz00_8396, BgL_start1z00_1795,
											BFALSE, BFALSE, BFALSE);
									}
									return BINT(BgL_tmpz00_8388);
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/string.scm 1237 */
							obj_t BgL_start1z00_1799;

							BgL_start1z00_1799 = VECTOR_REF(BgL_opt1165z00_190, ((long) 2));
							{	/* Ieee/string.scm 1237 */
								obj_t BgL_end1z00_1800;

								BgL_end1z00_1800 = VECTOR_REF(BgL_opt1165z00_190, ((long) 3));
								{	/* Ieee/string.scm 1237 */

									{	/* Ieee/string.scm 1237 */
										int BgL_tmpz00_8407;

										{	/* Ieee/string.scm 1237 */
											obj_t BgL_auxz00_8415;
											obj_t BgL_auxz00_8408;

											if (STRINGP(BgL_s2z00_1787))
												{	/* Ieee/string.scm 1237 */
													BgL_auxz00_8415 = BgL_s2z00_1787;
												}
											else
												{
													obj_t BgL_auxz00_8418;

													BgL_auxz00_8418 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 50211)),
														BGl_string3568z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_s2z00_1787);
													FAILURE(BgL_auxz00_8418, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_s1z00_1786))
												{	/* Ieee/string.scm 1237 */
													BgL_auxz00_8408 = BgL_s1z00_1786;
												}
											else
												{
													obj_t BgL_auxz00_8411;

													BgL_auxz00_8411 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 50211)),
														BGl_string3568z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_s1z00_1786);
													FAILURE(BgL_auxz00_8411, BFALSE, BFALSE);
												}
											BgL_tmpz00_8407 =
												BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00
												(BgL_auxz00_8408, BgL_auxz00_8415, BgL_start1z00_1799,
												BgL_end1z00_1800, BFALSE, BFALSE);
										}
										return BINT(BgL_tmpz00_8407);
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Ieee/string.scm 1237 */
							obj_t BgL_start1z00_1803;

							BgL_start1z00_1803 = VECTOR_REF(BgL_opt1165z00_190, ((long) 2));
							{	/* Ieee/string.scm 1237 */
								obj_t BgL_end1z00_1804;

								BgL_end1z00_1804 = VECTOR_REF(BgL_opt1165z00_190, ((long) 3));
								{	/* Ieee/string.scm 1237 */
									obj_t BgL_start2z00_1805;

									BgL_start2z00_1805 =
										VECTOR_REF(BgL_opt1165z00_190, ((long) 4));
									{	/* Ieee/string.scm 1237 */

										{	/* Ieee/string.scm 1237 */
											int BgL_tmpz00_8427;

											{	/* Ieee/string.scm 1237 */
												obj_t BgL_auxz00_8435;
												obj_t BgL_auxz00_8428;

												if (STRINGP(BgL_s2z00_1787))
													{	/* Ieee/string.scm 1237 */
														BgL_auxz00_8435 = BgL_s2z00_1787;
													}
												else
													{
														obj_t BgL_auxz00_8438;

														BgL_auxz00_8438 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 50211)),
															BGl_string3568z00zz__r4_strings_6_7z00,
															BGl_string3478z00zz__r4_strings_6_7z00,
															BgL_s2z00_1787);
														FAILURE(BgL_auxz00_8438, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_s1z00_1786))
													{	/* Ieee/string.scm 1237 */
														BgL_auxz00_8428 = BgL_s1z00_1786;
													}
												else
													{
														obj_t BgL_auxz00_8431;

														BgL_auxz00_8431 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 50211)),
															BGl_string3568z00zz__r4_strings_6_7z00,
															BGl_string3478z00zz__r4_strings_6_7z00,
															BgL_s1z00_1786);
														FAILURE(BgL_auxz00_8431, BFALSE, BFALSE);
													}
												BgL_tmpz00_8427 =
													BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00
													(BgL_auxz00_8428, BgL_auxz00_8435, BgL_start1z00_1803,
													BgL_end1z00_1804, BgL_start2z00_1805, BFALSE);
											}
											return BINT(BgL_tmpz00_8427);
										}
									}
								}
							}
						}
						break;
					case ((long) 6):

						{	/* Ieee/string.scm 1237 */
							obj_t BgL_start1z00_1807;

							BgL_start1z00_1807 = VECTOR_REF(BgL_opt1165z00_190, ((long) 2));
							{	/* Ieee/string.scm 1237 */
								obj_t BgL_end1z00_1808;

								BgL_end1z00_1808 = VECTOR_REF(BgL_opt1165z00_190, ((long) 3));
								{	/* Ieee/string.scm 1237 */
									obj_t BgL_start2z00_1809;

									BgL_start2z00_1809 =
										VECTOR_REF(BgL_opt1165z00_190, ((long) 4));
									{	/* Ieee/string.scm 1237 */
										obj_t BgL_end2z00_1810;

										BgL_end2z00_1810 =
											VECTOR_REF(BgL_opt1165z00_190, ((long) 5));
										{	/* Ieee/string.scm 1237 */

											{	/* Ieee/string.scm 1237 */
												int BgL_tmpz00_8448;

												{	/* Ieee/string.scm 1237 */
													obj_t BgL_auxz00_8456;
													obj_t BgL_auxz00_8449;

													if (STRINGP(BgL_s2z00_1787))
														{	/* Ieee/string.scm 1237 */
															BgL_auxz00_8456 = BgL_s2z00_1787;
														}
													else
														{
															obj_t BgL_auxz00_8459;

															BgL_auxz00_8459 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 50211)),
																BGl_string3568z00zz__r4_strings_6_7z00,
																BGl_string3478z00zz__r4_strings_6_7z00,
																BgL_s2z00_1787);
															FAILURE(BgL_auxz00_8459, BFALSE, BFALSE);
														}
													if (STRINGP(BgL_s1z00_1786))
														{	/* Ieee/string.scm 1237 */
															BgL_auxz00_8449 = BgL_s1z00_1786;
														}
													else
														{
															obj_t BgL_auxz00_8452;

															BgL_auxz00_8452 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 50211)),
																BGl_string3568z00zz__r4_strings_6_7z00,
																BGl_string3478z00zz__r4_strings_6_7z00,
																BgL_s1z00_1786);
															FAILURE(BgL_auxz00_8452, BFALSE, BFALSE);
														}
													BgL_tmpz00_8448 =
														BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00
														(BgL_auxz00_8449, BgL_auxz00_8456,
														BgL_start1z00_1807, BgL_end1z00_1808,
														BgL_start2z00_1809, BgL_end2z00_1810);
												}
												return BINT(BgL_tmpz00_8448);
											}
										}
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



/* string-prefix-length-ci */
	BGL_EXPORTED_DEF int
		BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t
		BgL_s1z00_184, obj_t BgL_s2z00_185, obj_t BgL_start1z00_186,
		obj_t BgL_end1z00_187, obj_t BgL_start2z00_188, obj_t BgL_end2z00_189)
	{
		{	/* Ieee/string.scm 1237 */
			{	/* Ieee/string.scm 1239 */
				long BgL_l1z00_1811;

				BgL_l1z00_1811 = STRING_LENGTH(BgL_s1z00_184);
				{	/* Ieee/string.scm 1239 */
					long BgL_l2z00_1812;

					BgL_l2z00_1812 = STRING_LENGTH(BgL_s2z00_185);
					{	/* Ieee/string.scm 1240 */
						obj_t BgL_e1z00_1813;

						{	/* Ieee/string.scm 1241 */
							obj_t BgL_procz00_4161;

							BgL_procz00_4161 = BGl_symbol3569z00zz__r4_strings_6_7z00;
							if (CBOOL(BgL_end1z00_187))
								{	/* Ieee/string.scm 1204 */
									if (((long) CINT(BgL_end1z00_187) <= ((long) 0)))
										{	/* Ieee/string.scm 1206 */
											BgL_e1z00_1813 =
												BGl_errorz00zz__errorz00(BgL_procz00_4161,
												string_append_3(BGl_string3559z00zz__r4_strings_6_7z00,
													BGl_string3560z00zz__r4_strings_6_7z00,
													BGl_string3561z00zz__r4_strings_6_7z00),
												BgL_end1z00_187);
										}
									else
										{	/* Ieee/string.scm 1206 */
											if (((long) CINT(BgL_end1z00_187) > BgL_l1z00_1811))
												{	/* Ieee/string.scm 1208 */
													BgL_e1z00_1813 =
														BGl_errorz00zz__errorz00(BgL_procz00_4161,
														string_append_3
														(BGl_string3562z00zz__r4_strings_6_7z00,
															BGl_string3560z00zz__r4_strings_6_7z00,
															BGl_string3561z00zz__r4_strings_6_7z00),
														BgL_end1z00_187);
												}
											else
												{	/* Ieee/string.scm 1208 */
													BgL_e1z00_1813 = BgL_end1z00_187;
												}
										}
								}
							else
								{	/* Ieee/string.scm 1204 */
									BgL_e1z00_1813 = BINT(BgL_l1z00_1811);
								}
						}
						{	/* Ieee/string.scm 1241 */
							obj_t BgL_e2z00_1814;

							{	/* Ieee/string.scm 1242 */
								obj_t BgL_procz00_4171;

								BgL_procz00_4171 = BGl_symbol3569z00zz__r4_strings_6_7z00;
								if (CBOOL(BgL_end2z00_189))
									{	/* Ieee/string.scm 1204 */
										if (((long) CINT(BgL_end2z00_189) <= ((long) 0)))
											{	/* Ieee/string.scm 1206 */
												BgL_e2z00_1814 =
													BGl_errorz00zz__errorz00(BgL_procz00_4171,
													string_append_3
													(BGl_string3559z00zz__r4_strings_6_7z00,
														BGl_string3563z00zz__r4_strings_6_7z00,
														BGl_string3561z00zz__r4_strings_6_7z00),
													BgL_end2z00_189);
											}
										else
											{	/* Ieee/string.scm 1206 */
												if (((long) CINT(BgL_end2z00_189) > BgL_l2z00_1812))
													{	/* Ieee/string.scm 1208 */
														BgL_e2z00_1814 =
															BGl_errorz00zz__errorz00(BgL_procz00_4171,
															string_append_3
															(BGl_string3562z00zz__r4_strings_6_7z00,
																BGl_string3563z00zz__r4_strings_6_7z00,
																BGl_string3561z00zz__r4_strings_6_7z00),
															BgL_end2z00_189);
													}
												else
													{	/* Ieee/string.scm 1208 */
														BgL_e2z00_1814 = BgL_end2z00_189;
													}
											}
									}
								else
									{	/* Ieee/string.scm 1204 */
										BgL_e2z00_1814 = BINT(BgL_l2z00_1812);
									}
							}
							{	/* Ieee/string.scm 1242 */
								obj_t BgL_b1z00_1815;

								{	/* Ieee/string.scm 1243 */
									obj_t BgL_procz00_4181;

									BgL_procz00_4181 = BGl_symbol3569z00zz__r4_strings_6_7z00;
									if (CBOOL(BgL_start1z00_186))
										{	/* Ieee/string.scm 1190 */
											if (((long) CINT(BgL_start1z00_186) < ((long) 0)))
												{	/* Ieee/string.scm 1192 */
													BgL_b1z00_1815 =
														BGl_errorz00zz__errorz00(BgL_procz00_4181,
														string_append_3
														(BGl_string3564z00zz__r4_strings_6_7z00,
															BGl_string3565z00zz__r4_strings_6_7z00,
															BGl_string3561z00zz__r4_strings_6_7z00),
														BgL_start1z00_186);
												}
											else
												{	/* Ieee/string.scm 1192 */
													if (
														((long) CINT(BgL_start1z00_186) >= BgL_l1z00_1811))
														{	/* Ieee/string.scm 1194 */
															BgL_b1z00_1815 =
																BGl_errorz00zz__errorz00(BgL_procz00_4181,
																string_append_3
																(BGl_string3566z00zz__r4_strings_6_7z00,
																	BGl_string3565z00zz__r4_strings_6_7z00,
																	BGl_string3561z00zz__r4_strings_6_7z00),
																BgL_start1z00_186);
														}
													else
														{	/* Ieee/string.scm 1194 */
															BgL_b1z00_1815 = BgL_start1z00_186;
														}
												}
										}
									else
										{	/* Ieee/string.scm 1190 */
											BgL_b1z00_1815 = BINT(((long) 0));
								}}
								{	/* Ieee/string.scm 1243 */
									obj_t BgL_b2z00_1816;

									{	/* Ieee/string.scm 1244 */
										obj_t BgL_procz00_4191;

										BgL_procz00_4191 = BGl_symbol3569z00zz__r4_strings_6_7z00;
										if (CBOOL(BgL_start2z00_188))
											{	/* Ieee/string.scm 1190 */
												if (((long) CINT(BgL_start2z00_188) < ((long) 0)))
													{	/* Ieee/string.scm 1192 */
														BgL_b2z00_1816 =
															BGl_errorz00zz__errorz00(BgL_procz00_4191,
															string_append_3
															(BGl_string3564z00zz__r4_strings_6_7z00,
																BGl_string3567z00zz__r4_strings_6_7z00,
																BGl_string3561z00zz__r4_strings_6_7z00),
															BgL_start2z00_188);
													}
												else
													{	/* Ieee/string.scm 1192 */
														if (
															((long) CINT(BgL_start2z00_188) >=
																BgL_l2z00_1812))
															{	/* Ieee/string.scm 1194 */
																BgL_b2z00_1816 =
																	BGl_errorz00zz__errorz00(BgL_procz00_4191,
																	string_append_3
																	(BGl_string3566z00zz__r4_strings_6_7z00,
																		BGl_string3567z00zz__r4_strings_6_7z00,
																		BGl_string3561z00zz__r4_strings_6_7z00),
																	BgL_start2z00_188);
															}
														else
															{	/* Ieee/string.scm 1194 */
																BgL_b2z00_1816 = BgL_start2z00_188;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1190 */
												BgL_b2z00_1816 = BINT(((long) 0));
									}}
									{	/* Ieee/string.scm 1244 */

										{
											obj_t BgL_i1z00_1818;
											obj_t BgL_i2z00_1819;

											{	/* Ieee/string.scm 1245 */
												long BgL_tmpz00_8521;

												BgL_i1z00_1818 = BgL_b1z00_1815;
												BgL_i2z00_1819 = BgL_b2z00_1816;
											BgL_zc3z04anonymousza31746ze3z87_1820:
												{	/* Ieee/string.scm 1248 */
													bool_t BgL_test4153z00_8522;

													if (
														((long) CINT(BgL_i1z00_1818) ==
															(long) CINT(BgL_e1z00_1813)))
														{	/* Ieee/string.scm 1248 */
															BgL_test4153z00_8522 = ((bool_t) 1);
														}
													else
														{	/* Ieee/string.scm 1248 */
															BgL_test4153z00_8522 =
																(
																(long) CINT(BgL_i2z00_1819) ==
																(long) CINT(BgL_e2z00_1814));
														}
													if (BgL_test4153z00_8522)
														{	/* Ieee/string.scm 1248 */
															BgL_tmpz00_8521 =
																(
																(long) CINT(BgL_i1z00_1818) -
																(long) CINT(BgL_b1z00_1815));
														}
													else
														{	/* Ieee/string.scm 1248 */
															if (
																(toupper(STRING_REF(BgL_s1z00_184,
																			(long) CINT(BgL_i1z00_1818))) ==
																	toupper(STRING_REF(BgL_s2z00_185,
																			(long) CINT(BgL_i2z00_1819)))))
																{
																	obj_t BgL_i2z00_8544;
																	obj_t BgL_i1z00_8541;

																	BgL_i1z00_8541 =
																		ADDFX(BgL_i1z00_1818, BINT(((long) 1)));
																	BgL_i2z00_8544 =
																		ADDFX(BgL_i2z00_1819, BINT(((long) 1)));
																	BgL_i2z00_1819 = BgL_i2z00_8544;
																	BgL_i1z00_1818 = BgL_i1z00_8541;
																	goto BgL_zc3z04anonymousza31746ze3z87_1820;
																}
															else
																{	/* Ieee/string.scm 1250 */
																	BgL_tmpz00_8521 =
																		(
																		(long) CINT(BgL_i1z00_1818) -
																		(long) CINT(BgL_b1z00_1815));
												}}}
												return (int) (BgL_tmpz00_8521);
		}}}}}}}}}}

	}



/* _string-suffix-length */
	obj_t BGl__stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(obj_t
		BgL_env1170z00_199, obj_t BgL_opt1169z00_198)
	{
		{	/* Ieee/string.scm 1258 */
			{	/* Ieee/string.scm 1258 */
				obj_t BgL_s1z00_1832;
				obj_t BgL_s2z00_1833;

				BgL_s1z00_1832 = VECTOR_REF(BgL_opt1169z00_198, ((long) 0));
				BgL_s2z00_1833 = VECTOR_REF(BgL_opt1169z00_198, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1169z00_198))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 1258 */

							{	/* Ieee/string.scm 1258 */
								int BgL_tmpz00_8553;

								{	/* Ieee/string.scm 1258 */
									obj_t BgL_auxz00_8561;
									obj_t BgL_auxz00_8554;

									if (STRINGP(BgL_s2z00_1833))
										{	/* Ieee/string.scm 1258 */
											BgL_auxz00_8561 = BgL_s2z00_1833;
										}
									else
										{
											obj_t BgL_auxz00_8564;

											BgL_auxz00_8564 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 51113)),
												BGl_string3571z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_s2z00_1833);
											FAILURE(BgL_auxz00_8564, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_s1z00_1832))
										{	/* Ieee/string.scm 1258 */
											BgL_auxz00_8554 = BgL_s1z00_1832;
										}
									else
										{
											obj_t BgL_auxz00_8557;

											BgL_auxz00_8557 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 51113)),
												BGl_string3571z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_s1z00_1832);
											FAILURE(BgL_auxz00_8557, BFALSE, BFALSE);
										}
									BgL_tmpz00_8553 =
										BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00
										(BgL_auxz00_8554, BgL_auxz00_8561, BFALSE, BFALSE, BFALSE,
										BFALSE);
								}
								return BINT(BgL_tmpz00_8553);
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/string.scm 1258 */
							obj_t BgL_start1z00_1841;

							BgL_start1z00_1841 = VECTOR_REF(BgL_opt1169z00_198, ((long) 2));
							{	/* Ieee/string.scm 1258 */

								{	/* Ieee/string.scm 1258 */
									int BgL_tmpz00_8571;

									{	/* Ieee/string.scm 1258 */
										obj_t BgL_auxz00_8579;
										obj_t BgL_auxz00_8572;

										if (STRINGP(BgL_s2z00_1833))
											{	/* Ieee/string.scm 1258 */
												BgL_auxz00_8579 = BgL_s2z00_1833;
											}
										else
											{
												obj_t BgL_auxz00_8582;

												BgL_auxz00_8582 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 51113)),
													BGl_string3571z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_s2z00_1833);
												FAILURE(BgL_auxz00_8582, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_s1z00_1832))
											{	/* Ieee/string.scm 1258 */
												BgL_auxz00_8572 = BgL_s1z00_1832;
											}
										else
											{
												obj_t BgL_auxz00_8575;

												BgL_auxz00_8575 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 51113)),
													BGl_string3571z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_s1z00_1832);
												FAILURE(BgL_auxz00_8575, BFALSE, BFALSE);
											}
										BgL_tmpz00_8571 =
											BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00
											(BgL_auxz00_8572, BgL_auxz00_8579, BgL_start1z00_1841,
											BFALSE, BFALSE, BFALSE);
									}
									return BINT(BgL_tmpz00_8571);
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/string.scm 1258 */
							obj_t BgL_start1z00_1845;

							BgL_start1z00_1845 = VECTOR_REF(BgL_opt1169z00_198, ((long) 2));
							{	/* Ieee/string.scm 1258 */
								obj_t BgL_end1z00_1846;

								BgL_end1z00_1846 = VECTOR_REF(BgL_opt1169z00_198, ((long) 3));
								{	/* Ieee/string.scm 1258 */

									{	/* Ieee/string.scm 1258 */
										int BgL_tmpz00_8590;

										{	/* Ieee/string.scm 1258 */
											obj_t BgL_auxz00_8598;
											obj_t BgL_auxz00_8591;

											if (STRINGP(BgL_s2z00_1833))
												{	/* Ieee/string.scm 1258 */
													BgL_auxz00_8598 = BgL_s2z00_1833;
												}
											else
												{
													obj_t BgL_auxz00_8601;

													BgL_auxz00_8601 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 51113)),
														BGl_string3571z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_s2z00_1833);
													FAILURE(BgL_auxz00_8601, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_s1z00_1832))
												{	/* Ieee/string.scm 1258 */
													BgL_auxz00_8591 = BgL_s1z00_1832;
												}
											else
												{
													obj_t BgL_auxz00_8594;

													BgL_auxz00_8594 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 51113)),
														BGl_string3571z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_s1z00_1832);
													FAILURE(BgL_auxz00_8594, BFALSE, BFALSE);
												}
											BgL_tmpz00_8590 =
												BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00
												(BgL_auxz00_8591, BgL_auxz00_8598, BgL_start1z00_1845,
												BgL_end1z00_1846, BFALSE, BFALSE);
										}
										return BINT(BgL_tmpz00_8590);
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Ieee/string.scm 1258 */
							obj_t BgL_start1z00_1849;

							BgL_start1z00_1849 = VECTOR_REF(BgL_opt1169z00_198, ((long) 2));
							{	/* Ieee/string.scm 1258 */
								obj_t BgL_end1z00_1850;

								BgL_end1z00_1850 = VECTOR_REF(BgL_opt1169z00_198, ((long) 3));
								{	/* Ieee/string.scm 1258 */
									obj_t BgL_start2z00_1851;

									BgL_start2z00_1851 =
										VECTOR_REF(BgL_opt1169z00_198, ((long) 4));
									{	/* Ieee/string.scm 1258 */

										{	/* Ieee/string.scm 1258 */
											int BgL_tmpz00_8610;

											{	/* Ieee/string.scm 1258 */
												obj_t BgL_auxz00_8618;
												obj_t BgL_auxz00_8611;

												if (STRINGP(BgL_s2z00_1833))
													{	/* Ieee/string.scm 1258 */
														BgL_auxz00_8618 = BgL_s2z00_1833;
													}
												else
													{
														obj_t BgL_auxz00_8621;

														BgL_auxz00_8621 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 51113)),
															BGl_string3571z00zz__r4_strings_6_7z00,
															BGl_string3478z00zz__r4_strings_6_7z00,
															BgL_s2z00_1833);
														FAILURE(BgL_auxz00_8621, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_s1z00_1832))
													{	/* Ieee/string.scm 1258 */
														BgL_auxz00_8611 = BgL_s1z00_1832;
													}
												else
													{
														obj_t BgL_auxz00_8614;

														BgL_auxz00_8614 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 51113)),
															BGl_string3571z00zz__r4_strings_6_7z00,
															BGl_string3478z00zz__r4_strings_6_7z00,
															BgL_s1z00_1832);
														FAILURE(BgL_auxz00_8614, BFALSE, BFALSE);
													}
												BgL_tmpz00_8610 =
													BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00
													(BgL_auxz00_8611, BgL_auxz00_8618, BgL_start1z00_1849,
													BgL_end1z00_1850, BgL_start2z00_1851, BFALSE);
											}
											return BINT(BgL_tmpz00_8610);
										}
									}
								}
							}
						}
						break;
					case ((long) 6):

						{	/* Ieee/string.scm 1258 */
							obj_t BgL_start1z00_1853;

							BgL_start1z00_1853 = VECTOR_REF(BgL_opt1169z00_198, ((long) 2));
							{	/* Ieee/string.scm 1258 */
								obj_t BgL_end1z00_1854;

								BgL_end1z00_1854 = VECTOR_REF(BgL_opt1169z00_198, ((long) 3));
								{	/* Ieee/string.scm 1258 */
									obj_t BgL_start2z00_1855;

									BgL_start2z00_1855 =
										VECTOR_REF(BgL_opt1169z00_198, ((long) 4));
									{	/* Ieee/string.scm 1258 */
										obj_t BgL_end2z00_1856;

										BgL_end2z00_1856 =
											VECTOR_REF(BgL_opt1169z00_198, ((long) 5));
										{	/* Ieee/string.scm 1258 */

											{	/* Ieee/string.scm 1258 */
												int BgL_tmpz00_8631;

												{	/* Ieee/string.scm 1258 */
													obj_t BgL_auxz00_8639;
													obj_t BgL_auxz00_8632;

													if (STRINGP(BgL_s2z00_1833))
														{	/* Ieee/string.scm 1258 */
															BgL_auxz00_8639 = BgL_s2z00_1833;
														}
													else
														{
															obj_t BgL_auxz00_8642;

															BgL_auxz00_8642 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 51113)),
																BGl_string3571z00zz__r4_strings_6_7z00,
																BGl_string3478z00zz__r4_strings_6_7z00,
																BgL_s2z00_1833);
															FAILURE(BgL_auxz00_8642, BFALSE, BFALSE);
														}
													if (STRINGP(BgL_s1z00_1832))
														{	/* Ieee/string.scm 1258 */
															BgL_auxz00_8632 = BgL_s1z00_1832;
														}
													else
														{
															obj_t BgL_auxz00_8635;

															BgL_auxz00_8635 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 51113)),
																BGl_string3571z00zz__r4_strings_6_7z00,
																BGl_string3478z00zz__r4_strings_6_7z00,
																BgL_s1z00_1832);
															FAILURE(BgL_auxz00_8635, BFALSE, BFALSE);
														}
													BgL_tmpz00_8631 =
														BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00
														(BgL_auxz00_8632, BgL_auxz00_8639,
														BgL_start1z00_1853, BgL_end1z00_1854,
														BgL_start2z00_1855, BgL_end2z00_1856);
												}
												return BINT(BgL_tmpz00_8631);
											}
										}
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



/* string-suffix-length */
	BGL_EXPORTED_DEF int
		BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(obj_t BgL_s1z00_192,
		obj_t BgL_s2z00_193, obj_t BgL_start1z00_194, obj_t BgL_end1z00_195,
		obj_t BgL_start2z00_196, obj_t BgL_end2z00_197)
	{
		{	/* Ieee/string.scm 1258 */
			{	/* Ieee/string.scm 1260 */
				long BgL_l1z00_1857;

				BgL_l1z00_1857 = STRING_LENGTH(BgL_s1z00_192);
				{	/* Ieee/string.scm 1260 */
					long BgL_l2z00_1858;

					BgL_l2z00_1858 = STRING_LENGTH(BgL_s2z00_193);
					{	/* Ieee/string.scm 1261 */
						obj_t BgL_b1z00_1859;

						{	/* Ieee/string.scm 1262 */
							obj_t BgL_procz00_4239;

							BgL_procz00_4239 = BGl_symbol3572z00zz__r4_strings_6_7z00;
							if (CBOOL(BgL_end1z00_195))
								{	/* Ieee/string.scm 1204 */
									if (((long) CINT(BgL_end1z00_195) <= ((long) 0)))
										{	/* Ieee/string.scm 1206 */
											BgL_b1z00_1859 =
												BGl_errorz00zz__errorz00(BgL_procz00_4239,
												string_append_3(BGl_string3559z00zz__r4_strings_6_7z00,
													BGl_string3560z00zz__r4_strings_6_7z00,
													BGl_string3561z00zz__r4_strings_6_7z00),
												BgL_end1z00_195);
										}
									else
										{	/* Ieee/string.scm 1206 */
											if (((long) CINT(BgL_end1z00_195) > BgL_l1z00_1857))
												{	/* Ieee/string.scm 1208 */
													BgL_b1z00_1859 =
														BGl_errorz00zz__errorz00(BgL_procz00_4239,
														string_append_3
														(BGl_string3562z00zz__r4_strings_6_7z00,
															BGl_string3560z00zz__r4_strings_6_7z00,
															BGl_string3561z00zz__r4_strings_6_7z00),
														BgL_end1z00_195);
												}
											else
												{	/* Ieee/string.scm 1208 */
													BgL_b1z00_1859 = BgL_end1z00_195;
												}
										}
								}
							else
								{	/* Ieee/string.scm 1204 */
									BgL_b1z00_1859 = BINT(BgL_l1z00_1857);
								}
						}
						{	/* Ieee/string.scm 1262 */
							obj_t BgL_b2z00_1860;

							{	/* Ieee/string.scm 1263 */
								obj_t BgL_procz00_4249;

								BgL_procz00_4249 = BGl_symbol3572z00zz__r4_strings_6_7z00;
								if (CBOOL(BgL_end2z00_197))
									{	/* Ieee/string.scm 1204 */
										if (((long) CINT(BgL_end2z00_197) <= ((long) 0)))
											{	/* Ieee/string.scm 1206 */
												BgL_b2z00_1860 =
													BGl_errorz00zz__errorz00(BgL_procz00_4249,
													string_append_3
													(BGl_string3559z00zz__r4_strings_6_7z00,
														BGl_string3563z00zz__r4_strings_6_7z00,
														BGl_string3561z00zz__r4_strings_6_7z00),
													BgL_end2z00_197);
											}
										else
											{	/* Ieee/string.scm 1206 */
												if (((long) CINT(BgL_end2z00_197) > BgL_l2z00_1858))
													{	/* Ieee/string.scm 1208 */
														BgL_b2z00_1860 =
															BGl_errorz00zz__errorz00(BgL_procz00_4249,
															string_append_3
															(BGl_string3562z00zz__r4_strings_6_7z00,
																BGl_string3563z00zz__r4_strings_6_7z00,
																BGl_string3561z00zz__r4_strings_6_7z00),
															BgL_end2z00_197);
													}
												else
													{	/* Ieee/string.scm 1208 */
														BgL_b2z00_1860 = BgL_end2z00_197;
													}
											}
									}
								else
									{	/* Ieee/string.scm 1204 */
										BgL_b2z00_1860 = BINT(BgL_l2z00_1858);
									}
							}
							{	/* Ieee/string.scm 1263 */
								obj_t BgL_e1z00_1861;

								{	/* Ieee/string.scm 1264 */
									obj_t BgL_procz00_4259;

									BgL_procz00_4259 = BGl_symbol3572z00zz__r4_strings_6_7z00;
									if (CBOOL(BgL_start1z00_194))
										{	/* Ieee/string.scm 1190 */
											if (((long) CINT(BgL_start1z00_194) < ((long) 0)))
												{	/* Ieee/string.scm 1192 */
													BgL_e1z00_1861 =
														BGl_errorz00zz__errorz00(BgL_procz00_4259,
														string_append_3
														(BGl_string3564z00zz__r4_strings_6_7z00,
															BGl_string3565z00zz__r4_strings_6_7z00,
															BGl_string3561z00zz__r4_strings_6_7z00),
														BgL_start1z00_194);
												}
											else
												{	/* Ieee/string.scm 1192 */
													if (
														((long) CINT(BgL_start1z00_194) >= BgL_l1z00_1857))
														{	/* Ieee/string.scm 1194 */
															BgL_e1z00_1861 =
																BGl_errorz00zz__errorz00(BgL_procz00_4259,
																string_append_3
																(BGl_string3566z00zz__r4_strings_6_7z00,
																	BGl_string3565z00zz__r4_strings_6_7z00,
																	BGl_string3561z00zz__r4_strings_6_7z00),
																BgL_start1z00_194);
														}
													else
														{	/* Ieee/string.scm 1194 */
															BgL_e1z00_1861 = BgL_start1z00_194;
														}
												}
										}
									else
										{	/* Ieee/string.scm 1190 */
											BgL_e1z00_1861 = BINT(((long) 0));
								}}
								{	/* Ieee/string.scm 1264 */
									obj_t BgL_e2z00_1862;

									{	/* Ieee/string.scm 1265 */
										obj_t BgL_procz00_4269;

										BgL_procz00_4269 = BGl_symbol3572z00zz__r4_strings_6_7z00;
										if (CBOOL(BgL_start2z00_196))
											{	/* Ieee/string.scm 1190 */
												if (((long) CINT(BgL_start2z00_196) < ((long) 0)))
													{	/* Ieee/string.scm 1192 */
														BgL_e2z00_1862 =
															BGl_errorz00zz__errorz00(BgL_procz00_4269,
															string_append_3
															(BGl_string3564z00zz__r4_strings_6_7z00,
																BGl_string3567z00zz__r4_strings_6_7z00,
																BGl_string3561z00zz__r4_strings_6_7z00),
															BgL_start2z00_196);
													}
												else
													{	/* Ieee/string.scm 1192 */
														if (
															((long) CINT(BgL_start2z00_196) >=
																BgL_l2z00_1858))
															{	/* Ieee/string.scm 1194 */
																BgL_e2z00_1862 =
																	BGl_errorz00zz__errorz00(BgL_procz00_4269,
																	string_append_3
																	(BGl_string3566z00zz__r4_strings_6_7z00,
																		BGl_string3567z00zz__r4_strings_6_7z00,
																		BGl_string3561z00zz__r4_strings_6_7z00),
																	BgL_start2z00_196);
															}
														else
															{	/* Ieee/string.scm 1194 */
																BgL_e2z00_1862 = BgL_start2z00_196;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1190 */
												BgL_e2z00_1862 = BINT(((long) 0));
									}}
									{	/* Ieee/string.scm 1265 */

										{
											long BgL_i1z00_1866;
											long BgL_i2z00_1867;

											{	/* Ieee/string.scm 1266 */
												long BgL_tmpz00_8704;

												BgL_i1z00_1866 =
													((long) CINT(BgL_b1z00_1859) - ((long) 1));
												BgL_i2z00_1867 =
													((long) CINT(BgL_b2z00_1860) - ((long) 1));
											BgL_zc3z04anonymousza31759ze3z87_1868:
												{	/* Ieee/string.scm 1269 */
													bool_t BgL_test4178z00_8705;

													if ((BgL_i1z00_1866 < (long) CINT(BgL_e1z00_1861)))
														{	/* Ieee/string.scm 1269 */
															BgL_test4178z00_8705 = ((bool_t) 1);
														}
													else
														{	/* Ieee/string.scm 1269 */
															BgL_test4178z00_8705 =
																(BgL_i2z00_1867 < (long) CINT(BgL_e2z00_1862));
														}
													if (BgL_test4178z00_8705)
														{	/* Ieee/string.scm 1269 */
															BgL_tmpz00_8704 =
																(
																(long) CINT(BgL_b1z00_1859) -
																(BgL_i1z00_1866 + ((long) 1)));
														}
													else
														{	/* Ieee/string.scm 1269 */
															if (
																(STRING_REF(BgL_s1z00_192, BgL_i1z00_1866) ==
																	STRING_REF(BgL_s2z00_193, BgL_i2z00_1867)))
																{
																	long BgL_i2z00_8720;
																	long BgL_i1z00_8718;

																	BgL_i1z00_8718 =
																		(BgL_i1z00_1866 - ((long) 1));
																	BgL_i2z00_8720 =
																		(BgL_i2z00_1867 - ((long) 1));
																	BgL_i2z00_1867 = BgL_i2z00_8720;
																	BgL_i1z00_1866 = BgL_i1z00_8718;
																	goto BgL_zc3z04anonymousza31759ze3z87_1868;
																}
															else
																{	/* Ieee/string.scm 1271 */
																	BgL_tmpz00_8704 =
																		(
																		(long) CINT(BgL_b1z00_1859) -
																		(BgL_i1z00_1866 + ((long) 1)));
												}}}
												return (int) (BgL_tmpz00_8704);
		}}}}}}}}}}

	}



/* _string-suffix-length-ci */
	obj_t BGl__stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t
		BgL_env1174z00_207, obj_t BgL_opt1173z00_206)
	{
		{	/* Ieee/string.scm 1279 */
			{	/* Ieee/string.scm 1279 */
				obj_t BgL_s1z00_1882;
				obj_t BgL_s2z00_1883;

				BgL_s1z00_1882 = VECTOR_REF(BgL_opt1173z00_206, ((long) 0));
				BgL_s2z00_1883 = VECTOR_REF(BgL_opt1173z00_206, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1173z00_206))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 1279 */

							{	/* Ieee/string.scm 1279 */
								int BgL_tmpz00_8732;

								{	/* Ieee/string.scm 1279 */
									obj_t BgL_auxz00_8740;
									obj_t BgL_auxz00_8733;

									if (STRINGP(BgL_s2z00_1883))
										{	/* Ieee/string.scm 1279 */
											BgL_auxz00_8740 = BgL_s2z00_1883;
										}
									else
										{
											obj_t BgL_auxz00_8743;

											BgL_auxz00_8743 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 52024)),
												BGl_string3574z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_s2z00_1883);
											FAILURE(BgL_auxz00_8743, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_s1z00_1882))
										{	/* Ieee/string.scm 1279 */
											BgL_auxz00_8733 = BgL_s1z00_1882;
										}
									else
										{
											obj_t BgL_auxz00_8736;

											BgL_auxz00_8736 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 52024)),
												BGl_string3574z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_s1z00_1882);
											FAILURE(BgL_auxz00_8736, BFALSE, BFALSE);
										}
									BgL_tmpz00_8732 =
										BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00
										(BgL_auxz00_8733, BgL_auxz00_8740, BFALSE, BFALSE, BFALSE,
										BFALSE);
								}
								return BINT(BgL_tmpz00_8732);
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/string.scm 1279 */
							obj_t BgL_start1z00_1891;

							BgL_start1z00_1891 = VECTOR_REF(BgL_opt1173z00_206, ((long) 2));
							{	/* Ieee/string.scm 1279 */

								{	/* Ieee/string.scm 1279 */
									int BgL_tmpz00_8750;

									{	/* Ieee/string.scm 1279 */
										obj_t BgL_auxz00_8758;
										obj_t BgL_auxz00_8751;

										if (STRINGP(BgL_s2z00_1883))
											{	/* Ieee/string.scm 1279 */
												BgL_auxz00_8758 = BgL_s2z00_1883;
											}
										else
											{
												obj_t BgL_auxz00_8761;

												BgL_auxz00_8761 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 52024)),
													BGl_string3574z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_s2z00_1883);
												FAILURE(BgL_auxz00_8761, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_s1z00_1882))
											{	/* Ieee/string.scm 1279 */
												BgL_auxz00_8751 = BgL_s1z00_1882;
											}
										else
											{
												obj_t BgL_auxz00_8754;

												BgL_auxz00_8754 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 52024)),
													BGl_string3574z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_s1z00_1882);
												FAILURE(BgL_auxz00_8754, BFALSE, BFALSE);
											}
										BgL_tmpz00_8750 =
											BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00
											(BgL_auxz00_8751, BgL_auxz00_8758, BgL_start1z00_1891,
											BFALSE, BFALSE, BFALSE);
									}
									return BINT(BgL_tmpz00_8750);
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/string.scm 1279 */
							obj_t BgL_start1z00_1895;

							BgL_start1z00_1895 = VECTOR_REF(BgL_opt1173z00_206, ((long) 2));
							{	/* Ieee/string.scm 1279 */
								obj_t BgL_end1z00_1896;

								BgL_end1z00_1896 = VECTOR_REF(BgL_opt1173z00_206, ((long) 3));
								{	/* Ieee/string.scm 1279 */

									{	/* Ieee/string.scm 1279 */
										int BgL_tmpz00_8769;

										{	/* Ieee/string.scm 1279 */
											obj_t BgL_auxz00_8777;
											obj_t BgL_auxz00_8770;

											if (STRINGP(BgL_s2z00_1883))
												{	/* Ieee/string.scm 1279 */
													BgL_auxz00_8777 = BgL_s2z00_1883;
												}
											else
												{
													obj_t BgL_auxz00_8780;

													BgL_auxz00_8780 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 52024)),
														BGl_string3574z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_s2z00_1883);
													FAILURE(BgL_auxz00_8780, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_s1z00_1882))
												{	/* Ieee/string.scm 1279 */
													BgL_auxz00_8770 = BgL_s1z00_1882;
												}
											else
												{
													obj_t BgL_auxz00_8773;

													BgL_auxz00_8773 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 52024)),
														BGl_string3574z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_s1z00_1882);
													FAILURE(BgL_auxz00_8773, BFALSE, BFALSE);
												}
											BgL_tmpz00_8769 =
												BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00
												(BgL_auxz00_8770, BgL_auxz00_8777, BgL_start1z00_1895,
												BgL_end1z00_1896, BFALSE, BFALSE);
										}
										return BINT(BgL_tmpz00_8769);
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Ieee/string.scm 1279 */
							obj_t BgL_start1z00_1899;

							BgL_start1z00_1899 = VECTOR_REF(BgL_opt1173z00_206, ((long) 2));
							{	/* Ieee/string.scm 1279 */
								obj_t BgL_end1z00_1900;

								BgL_end1z00_1900 = VECTOR_REF(BgL_opt1173z00_206, ((long) 3));
								{	/* Ieee/string.scm 1279 */
									obj_t BgL_start2z00_1901;

									BgL_start2z00_1901 =
										VECTOR_REF(BgL_opt1173z00_206, ((long) 4));
									{	/* Ieee/string.scm 1279 */

										{	/* Ieee/string.scm 1279 */
											int BgL_tmpz00_8789;

											{	/* Ieee/string.scm 1279 */
												obj_t BgL_auxz00_8797;
												obj_t BgL_auxz00_8790;

												if (STRINGP(BgL_s2z00_1883))
													{	/* Ieee/string.scm 1279 */
														BgL_auxz00_8797 = BgL_s2z00_1883;
													}
												else
													{
														obj_t BgL_auxz00_8800;

														BgL_auxz00_8800 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 52024)),
															BGl_string3574z00zz__r4_strings_6_7z00,
															BGl_string3478z00zz__r4_strings_6_7z00,
															BgL_s2z00_1883);
														FAILURE(BgL_auxz00_8800, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_s1z00_1882))
													{	/* Ieee/string.scm 1279 */
														BgL_auxz00_8790 = BgL_s1z00_1882;
													}
												else
													{
														obj_t BgL_auxz00_8793;

														BgL_auxz00_8793 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 52024)),
															BGl_string3574z00zz__r4_strings_6_7z00,
															BGl_string3478z00zz__r4_strings_6_7z00,
															BgL_s1z00_1882);
														FAILURE(BgL_auxz00_8793, BFALSE, BFALSE);
													}
												BgL_tmpz00_8789 =
													BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00
													(BgL_auxz00_8790, BgL_auxz00_8797, BgL_start1z00_1899,
													BgL_end1z00_1900, BgL_start2z00_1901, BFALSE);
											}
											return BINT(BgL_tmpz00_8789);
										}
									}
								}
							}
						}
						break;
					case ((long) 6):

						{	/* Ieee/string.scm 1279 */
							obj_t BgL_start1z00_1903;

							BgL_start1z00_1903 = VECTOR_REF(BgL_opt1173z00_206, ((long) 2));
							{	/* Ieee/string.scm 1279 */
								obj_t BgL_end1z00_1904;

								BgL_end1z00_1904 = VECTOR_REF(BgL_opt1173z00_206, ((long) 3));
								{	/* Ieee/string.scm 1279 */
									obj_t BgL_start2z00_1905;

									BgL_start2z00_1905 =
										VECTOR_REF(BgL_opt1173z00_206, ((long) 4));
									{	/* Ieee/string.scm 1279 */
										obj_t BgL_end2z00_1906;

										BgL_end2z00_1906 =
											VECTOR_REF(BgL_opt1173z00_206, ((long) 5));
										{	/* Ieee/string.scm 1279 */

											{	/* Ieee/string.scm 1279 */
												int BgL_tmpz00_8810;

												{	/* Ieee/string.scm 1279 */
													obj_t BgL_auxz00_8818;
													obj_t BgL_auxz00_8811;

													if (STRINGP(BgL_s2z00_1883))
														{	/* Ieee/string.scm 1279 */
															BgL_auxz00_8818 = BgL_s2z00_1883;
														}
													else
														{
															obj_t BgL_auxz00_8821;

															BgL_auxz00_8821 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 52024)),
																BGl_string3574z00zz__r4_strings_6_7z00,
																BGl_string3478z00zz__r4_strings_6_7z00,
																BgL_s2z00_1883);
															FAILURE(BgL_auxz00_8821, BFALSE, BFALSE);
														}
													if (STRINGP(BgL_s1z00_1882))
														{	/* Ieee/string.scm 1279 */
															BgL_auxz00_8811 = BgL_s1z00_1882;
														}
													else
														{
															obj_t BgL_auxz00_8814;

															BgL_auxz00_8814 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 52024)),
																BGl_string3574z00zz__r4_strings_6_7z00,
																BGl_string3478z00zz__r4_strings_6_7z00,
																BgL_s1z00_1882);
															FAILURE(BgL_auxz00_8814, BFALSE, BFALSE);
														}
													BgL_tmpz00_8810 =
														BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00
														(BgL_auxz00_8811, BgL_auxz00_8818,
														BgL_start1z00_1903, BgL_end1z00_1904,
														BgL_start2z00_1905, BgL_end2z00_1906);
												}
												return BINT(BgL_tmpz00_8810);
											}
										}
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



/* string-suffix-length-ci */
	BGL_EXPORTED_DEF int
		BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t
		BgL_s1z00_200, obj_t BgL_s2z00_201, obj_t BgL_start1z00_202,
		obj_t BgL_end1z00_203, obj_t BgL_start2z00_204, obj_t BgL_end2z00_205)
	{
		{	/* Ieee/string.scm 1279 */
			{	/* Ieee/string.scm 1281 */
				long BgL_l1z00_1907;

				BgL_l1z00_1907 = STRING_LENGTH(BgL_s1z00_200);
				{	/* Ieee/string.scm 1281 */
					long BgL_l2z00_1908;

					BgL_l2z00_1908 = STRING_LENGTH(BgL_s2z00_201);
					{	/* Ieee/string.scm 1282 */
						obj_t BgL_b1z00_1909;

						{	/* Ieee/string.scm 1283 */
							obj_t BgL_procz00_4316;

							BgL_procz00_4316 = BGl_symbol3575z00zz__r4_strings_6_7z00;
							if (CBOOL(BgL_end1z00_203))
								{	/* Ieee/string.scm 1204 */
									if (((long) CINT(BgL_end1z00_203) <= ((long) 0)))
										{	/* Ieee/string.scm 1206 */
											BgL_b1z00_1909 =
												BGl_errorz00zz__errorz00(BgL_procz00_4316,
												string_append_3(BGl_string3559z00zz__r4_strings_6_7z00,
													BGl_string3560z00zz__r4_strings_6_7z00,
													BGl_string3561z00zz__r4_strings_6_7z00),
												BgL_end1z00_203);
										}
									else
										{	/* Ieee/string.scm 1206 */
											if (((long) CINT(BgL_end1z00_203) > BgL_l1z00_1907))
												{	/* Ieee/string.scm 1208 */
													BgL_b1z00_1909 =
														BGl_errorz00zz__errorz00(BgL_procz00_4316,
														string_append_3
														(BGl_string3562z00zz__r4_strings_6_7z00,
															BGl_string3560z00zz__r4_strings_6_7z00,
															BGl_string3561z00zz__r4_strings_6_7z00),
														BgL_end1z00_203);
												}
											else
												{	/* Ieee/string.scm 1208 */
													BgL_b1z00_1909 = BgL_end1z00_203;
												}
										}
								}
							else
								{	/* Ieee/string.scm 1204 */
									BgL_b1z00_1909 = BINT(BgL_l1z00_1907);
								}
						}
						{	/* Ieee/string.scm 1283 */
							obj_t BgL_b2z00_1910;

							{	/* Ieee/string.scm 1284 */
								obj_t BgL_procz00_4326;

								BgL_procz00_4326 = BGl_symbol3575z00zz__r4_strings_6_7z00;
								if (CBOOL(BgL_end2z00_205))
									{	/* Ieee/string.scm 1204 */
										if (((long) CINT(BgL_end2z00_205) <= ((long) 0)))
											{	/* Ieee/string.scm 1206 */
												BgL_b2z00_1910 =
													BGl_errorz00zz__errorz00(BgL_procz00_4326,
													string_append_3
													(BGl_string3559z00zz__r4_strings_6_7z00,
														BGl_string3563z00zz__r4_strings_6_7z00,
														BGl_string3561z00zz__r4_strings_6_7z00),
													BgL_end2z00_205);
											}
										else
											{	/* Ieee/string.scm 1206 */
												if (((long) CINT(BgL_end2z00_205) > BgL_l2z00_1908))
													{	/* Ieee/string.scm 1208 */
														BgL_b2z00_1910 =
															BGl_errorz00zz__errorz00(BgL_procz00_4326,
															string_append_3
															(BGl_string3562z00zz__r4_strings_6_7z00,
																BGl_string3563z00zz__r4_strings_6_7z00,
																BGl_string3561z00zz__r4_strings_6_7z00),
															BgL_end2z00_205);
													}
												else
													{	/* Ieee/string.scm 1208 */
														BgL_b2z00_1910 = BgL_end2z00_205;
													}
											}
									}
								else
									{	/* Ieee/string.scm 1204 */
										BgL_b2z00_1910 = BINT(BgL_l2z00_1908);
									}
							}
							{	/* Ieee/string.scm 1284 */
								obj_t BgL_e1z00_1911;

								{	/* Ieee/string.scm 1285 */
									obj_t BgL_procz00_4336;

									BgL_procz00_4336 = BGl_symbol3575z00zz__r4_strings_6_7z00;
									if (CBOOL(BgL_start1z00_202))
										{	/* Ieee/string.scm 1190 */
											if (((long) CINT(BgL_start1z00_202) < ((long) 0)))
												{	/* Ieee/string.scm 1192 */
													BgL_e1z00_1911 =
														BGl_errorz00zz__errorz00(BgL_procz00_4336,
														string_append_3
														(BGl_string3564z00zz__r4_strings_6_7z00,
															BGl_string3565z00zz__r4_strings_6_7z00,
															BGl_string3561z00zz__r4_strings_6_7z00),
														BgL_start1z00_202);
												}
											else
												{	/* Ieee/string.scm 1192 */
													if (
														((long) CINT(BgL_start1z00_202) >= BgL_l1z00_1907))
														{	/* Ieee/string.scm 1194 */
															BgL_e1z00_1911 =
																BGl_errorz00zz__errorz00(BgL_procz00_4336,
																string_append_3
																(BGl_string3566z00zz__r4_strings_6_7z00,
																	BGl_string3565z00zz__r4_strings_6_7z00,
																	BGl_string3561z00zz__r4_strings_6_7z00),
																BgL_start1z00_202);
														}
													else
														{	/* Ieee/string.scm 1194 */
															BgL_e1z00_1911 = BgL_start1z00_202;
														}
												}
										}
									else
										{	/* Ieee/string.scm 1190 */
											BgL_e1z00_1911 = BINT(((long) 0));
								}}
								{	/* Ieee/string.scm 1285 */
									obj_t BgL_e2z00_1912;

									{	/* Ieee/string.scm 1286 */
										obj_t BgL_procz00_4346;

										BgL_procz00_4346 = BGl_symbol3575z00zz__r4_strings_6_7z00;
										if (CBOOL(BgL_start2z00_204))
											{	/* Ieee/string.scm 1190 */
												if (((long) CINT(BgL_start2z00_204) < ((long) 0)))
													{	/* Ieee/string.scm 1192 */
														BgL_e2z00_1912 =
															BGl_errorz00zz__errorz00(BgL_procz00_4346,
															string_append_3
															(BGl_string3564z00zz__r4_strings_6_7z00,
																BGl_string3567z00zz__r4_strings_6_7z00,
																BGl_string3561z00zz__r4_strings_6_7z00),
															BgL_start2z00_204);
													}
												else
													{	/* Ieee/string.scm 1192 */
														if (
															((long) CINT(BgL_start2z00_204) >=
																BgL_l2z00_1908))
															{	/* Ieee/string.scm 1194 */
																BgL_e2z00_1912 =
																	BGl_errorz00zz__errorz00(BgL_procz00_4346,
																	string_append_3
																	(BGl_string3566z00zz__r4_strings_6_7z00,
																		BGl_string3567z00zz__r4_strings_6_7z00,
																		BGl_string3561z00zz__r4_strings_6_7z00),
																	BgL_start2z00_204);
															}
														else
															{	/* Ieee/string.scm 1194 */
																BgL_e2z00_1912 = BgL_start2z00_204;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1190 */
												BgL_e2z00_1912 = BINT(((long) 0));
									}}
									{	/* Ieee/string.scm 1286 */

										{
											long BgL_i1z00_1916;
											long BgL_i2z00_1917;

											{	/* Ieee/string.scm 1287 */
												long BgL_tmpz00_8883;

												BgL_i1z00_1916 =
													((long) CINT(BgL_b1z00_1909) - ((long) 1));
												BgL_i2z00_1917 =
													((long) CINT(BgL_b2z00_1910) - ((long) 1));
											BgL_zc3z04anonymousza31773ze3z87_1918:
												{	/* Ieee/string.scm 1290 */
													bool_t BgL_test4203z00_8884;

													if ((BgL_i1z00_1916 < (long) CINT(BgL_e1z00_1911)))
														{	/* Ieee/string.scm 1290 */
															BgL_test4203z00_8884 = ((bool_t) 1);
														}
													else
														{	/* Ieee/string.scm 1290 */
															BgL_test4203z00_8884 =
																(BgL_i2z00_1917 < (long) CINT(BgL_e2z00_1912));
														}
													if (BgL_test4203z00_8884)
														{	/* Ieee/string.scm 1290 */
															BgL_tmpz00_8883 =
																(
																(long) CINT(BgL_b1z00_1909) -
																(BgL_i1z00_1916 + ((long) 1)));
														}
													else
														{	/* Ieee/string.scm 1290 */
															if (
																(toupper(STRING_REF(BgL_s1z00_200,
																			BgL_i1z00_1916)) ==
																	toupper(STRING_REF(BgL_s2z00_201,
																			BgL_i2z00_1917))))
																{
																	long BgL_i2z00_8901;
																	long BgL_i1z00_8899;

																	BgL_i1z00_8899 =
																		(BgL_i1z00_1916 - ((long) 1));
																	BgL_i2z00_8901 =
																		(BgL_i2z00_1917 - ((long) 1));
																	BgL_i2z00_1917 = BgL_i2z00_8901;
																	BgL_i1z00_1916 = BgL_i1z00_8899;
																	goto BgL_zc3z04anonymousza31773ze3z87_1918;
																}
															else
																{	/* Ieee/string.scm 1292 */
																	BgL_tmpz00_8883 =
																		(
																		(long) CINT(BgL_b1z00_1909) -
																		(BgL_i1z00_1916 + ((long) 1)));
												}}}
												return (int) (BgL_tmpz00_8883);
		}}}}}}}}}}

	}



/* _string-prefix? */
	obj_t BGl__stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t
		BgL_env1178z00_215, obj_t BgL_opt1177z00_214)
	{
		{	/* Ieee/string.scm 1300 */
			{	/* Ieee/string.scm 1300 */
				obj_t BgL_s1z00_1932;
				obj_t BgL_s2z00_1933;

				BgL_s1z00_1932 = VECTOR_REF(BgL_opt1177z00_214, ((long) 0));
				BgL_s2z00_1933 = VECTOR_REF(BgL_opt1177z00_214, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1177z00_214))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 1300 */

							{	/* Ieee/string.scm 1300 */
								bool_t BgL_tmpz00_8913;

								{	/* Ieee/string.scm 1300 */
									obj_t BgL_auxz00_8921;
									obj_t BgL_auxz00_8914;

									if (STRINGP(BgL_s2z00_1933))
										{	/* Ieee/string.scm 1300 */
											BgL_auxz00_8921 = BgL_s2z00_1933;
										}
									else
										{
											obj_t BgL_auxz00_8924;

											BgL_auxz00_8924 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 52956)),
												BGl_string3577z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_s2z00_1933);
											FAILURE(BgL_auxz00_8924, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_s1z00_1932))
										{	/* Ieee/string.scm 1300 */
											BgL_auxz00_8914 = BgL_s1z00_1932;
										}
									else
										{
											obj_t BgL_auxz00_8917;

											BgL_auxz00_8917 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 52956)),
												BGl_string3577z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_s1z00_1932);
											FAILURE(BgL_auxz00_8917, BFALSE, BFALSE);
										}
									BgL_tmpz00_8913 =
										BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00
										(BgL_auxz00_8914, BgL_auxz00_8921, BFALSE, BFALSE, BFALSE,
										BFALSE);
								}
								return BBOOL(BgL_tmpz00_8913);
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/string.scm 1300 */
							obj_t BgL_start1z00_1941;

							BgL_start1z00_1941 = VECTOR_REF(BgL_opt1177z00_214, ((long) 2));
							{	/* Ieee/string.scm 1300 */

								{	/* Ieee/string.scm 1300 */
									bool_t BgL_tmpz00_8931;

									{	/* Ieee/string.scm 1300 */
										obj_t BgL_auxz00_8939;
										obj_t BgL_auxz00_8932;

										if (STRINGP(BgL_s2z00_1933))
											{	/* Ieee/string.scm 1300 */
												BgL_auxz00_8939 = BgL_s2z00_1933;
											}
										else
											{
												obj_t BgL_auxz00_8942;

												BgL_auxz00_8942 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 52956)),
													BGl_string3577z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_s2z00_1933);
												FAILURE(BgL_auxz00_8942, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_s1z00_1932))
											{	/* Ieee/string.scm 1300 */
												BgL_auxz00_8932 = BgL_s1z00_1932;
											}
										else
											{
												obj_t BgL_auxz00_8935;

												BgL_auxz00_8935 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 52956)),
													BGl_string3577z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_s1z00_1932);
												FAILURE(BgL_auxz00_8935, BFALSE, BFALSE);
											}
										BgL_tmpz00_8931 =
											BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00
											(BgL_auxz00_8932, BgL_auxz00_8939, BgL_start1z00_1941,
											BFALSE, BFALSE, BFALSE);
									}
									return BBOOL(BgL_tmpz00_8931);
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/string.scm 1300 */
							obj_t BgL_start1z00_1945;

							BgL_start1z00_1945 = VECTOR_REF(BgL_opt1177z00_214, ((long) 2));
							{	/* Ieee/string.scm 1300 */
								obj_t BgL_end1z00_1946;

								BgL_end1z00_1946 = VECTOR_REF(BgL_opt1177z00_214, ((long) 3));
								{	/* Ieee/string.scm 1300 */

									{	/* Ieee/string.scm 1300 */
										bool_t BgL_tmpz00_8950;

										{	/* Ieee/string.scm 1300 */
											obj_t BgL_auxz00_8958;
											obj_t BgL_auxz00_8951;

											if (STRINGP(BgL_s2z00_1933))
												{	/* Ieee/string.scm 1300 */
													BgL_auxz00_8958 = BgL_s2z00_1933;
												}
											else
												{
													obj_t BgL_auxz00_8961;

													BgL_auxz00_8961 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 52956)),
														BGl_string3577z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_s2z00_1933);
													FAILURE(BgL_auxz00_8961, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_s1z00_1932))
												{	/* Ieee/string.scm 1300 */
													BgL_auxz00_8951 = BgL_s1z00_1932;
												}
											else
												{
													obj_t BgL_auxz00_8954;

													BgL_auxz00_8954 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 52956)),
														BGl_string3577z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_s1z00_1932);
													FAILURE(BgL_auxz00_8954, BFALSE, BFALSE);
												}
											BgL_tmpz00_8950 =
												BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00
												(BgL_auxz00_8951, BgL_auxz00_8958, BgL_start1z00_1945,
												BgL_end1z00_1946, BFALSE, BFALSE);
										}
										return BBOOL(BgL_tmpz00_8950);
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Ieee/string.scm 1300 */
							obj_t BgL_start1z00_1949;

							BgL_start1z00_1949 = VECTOR_REF(BgL_opt1177z00_214, ((long) 2));
							{	/* Ieee/string.scm 1300 */
								obj_t BgL_end1z00_1950;

								BgL_end1z00_1950 = VECTOR_REF(BgL_opt1177z00_214, ((long) 3));
								{	/* Ieee/string.scm 1300 */
									obj_t BgL_start2z00_1951;

									BgL_start2z00_1951 =
										VECTOR_REF(BgL_opt1177z00_214, ((long) 4));
									{	/* Ieee/string.scm 1300 */

										{	/* Ieee/string.scm 1300 */
											bool_t BgL_tmpz00_8970;

											{	/* Ieee/string.scm 1300 */
												obj_t BgL_auxz00_8978;
												obj_t BgL_auxz00_8971;

												if (STRINGP(BgL_s2z00_1933))
													{	/* Ieee/string.scm 1300 */
														BgL_auxz00_8978 = BgL_s2z00_1933;
													}
												else
													{
														obj_t BgL_auxz00_8981;

														BgL_auxz00_8981 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 52956)),
															BGl_string3577z00zz__r4_strings_6_7z00,
															BGl_string3478z00zz__r4_strings_6_7z00,
															BgL_s2z00_1933);
														FAILURE(BgL_auxz00_8981, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_s1z00_1932))
													{	/* Ieee/string.scm 1300 */
														BgL_auxz00_8971 = BgL_s1z00_1932;
													}
												else
													{
														obj_t BgL_auxz00_8974;

														BgL_auxz00_8974 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 52956)),
															BGl_string3577z00zz__r4_strings_6_7z00,
															BGl_string3478z00zz__r4_strings_6_7z00,
															BgL_s1z00_1932);
														FAILURE(BgL_auxz00_8974, BFALSE, BFALSE);
													}
												BgL_tmpz00_8970 =
													BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00
													(BgL_auxz00_8971, BgL_auxz00_8978, BgL_start1z00_1949,
													BgL_end1z00_1950, BgL_start2z00_1951, BFALSE);
											}
											return BBOOL(BgL_tmpz00_8970);
										}
									}
								}
							}
						}
						break;
					case ((long) 6):

						{	/* Ieee/string.scm 1300 */
							obj_t BgL_start1z00_1953;

							BgL_start1z00_1953 = VECTOR_REF(BgL_opt1177z00_214, ((long) 2));
							{	/* Ieee/string.scm 1300 */
								obj_t BgL_end1z00_1954;

								BgL_end1z00_1954 = VECTOR_REF(BgL_opt1177z00_214, ((long) 3));
								{	/* Ieee/string.scm 1300 */
									obj_t BgL_start2z00_1955;

									BgL_start2z00_1955 =
										VECTOR_REF(BgL_opt1177z00_214, ((long) 4));
									{	/* Ieee/string.scm 1300 */
										obj_t BgL_end2z00_1956;

										BgL_end2z00_1956 =
											VECTOR_REF(BgL_opt1177z00_214, ((long) 5));
										{	/* Ieee/string.scm 1300 */

											{	/* Ieee/string.scm 1300 */
												bool_t BgL_tmpz00_8991;

												{	/* Ieee/string.scm 1300 */
													obj_t BgL_auxz00_8999;
													obj_t BgL_auxz00_8992;

													if (STRINGP(BgL_s2z00_1933))
														{	/* Ieee/string.scm 1300 */
															BgL_auxz00_8999 = BgL_s2z00_1933;
														}
													else
														{
															obj_t BgL_auxz00_9002;

															BgL_auxz00_9002 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 52956)),
																BGl_string3577z00zz__r4_strings_6_7z00,
																BGl_string3478z00zz__r4_strings_6_7z00,
																BgL_s2z00_1933);
															FAILURE(BgL_auxz00_9002, BFALSE, BFALSE);
														}
													if (STRINGP(BgL_s1z00_1932))
														{	/* Ieee/string.scm 1300 */
															BgL_auxz00_8992 = BgL_s1z00_1932;
														}
													else
														{
															obj_t BgL_auxz00_8995;

															BgL_auxz00_8995 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 52956)),
																BGl_string3577z00zz__r4_strings_6_7z00,
																BGl_string3478z00zz__r4_strings_6_7z00,
																BgL_s1z00_1932);
															FAILURE(BgL_auxz00_8995, BFALSE, BFALSE);
														}
													BgL_tmpz00_8991 =
														BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00
														(BgL_auxz00_8992, BgL_auxz00_8999,
														BgL_start1z00_1953, BgL_end1z00_1954,
														BgL_start2z00_1955, BgL_end2z00_1956);
												}
												return BBOOL(BgL_tmpz00_8991);
											}
										}
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



/* string-prefix? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t
		BgL_s1z00_208, obj_t BgL_s2z00_209, obj_t BgL_start1z00_210,
		obj_t BgL_end1z00_211, obj_t BgL_start2z00_212, obj_t BgL_end2z00_213)
	{
		{	/* Ieee/string.scm 1300 */
			{	/* Ieee/string.scm 1302 */
				long BgL_l1z00_1957;

				BgL_l1z00_1957 = STRING_LENGTH(BgL_s1z00_208);
				{	/* Ieee/string.scm 1302 */
					long BgL_l2z00_1958;

					BgL_l2z00_1958 = STRING_LENGTH(BgL_s2z00_209);
					{	/* Ieee/string.scm 1303 */
						obj_t BgL_e1z00_1959;

						{	/* Ieee/string.scm 1304 */
							obj_t BgL_procz00_4402;

							BgL_procz00_4402 = BGl_symbol3578z00zz__r4_strings_6_7z00;
							if (CBOOL(BgL_end1z00_211))
								{	/* Ieee/string.scm 1204 */
									if (((long) CINT(BgL_end1z00_211) <= ((long) 0)))
										{	/* Ieee/string.scm 1206 */
											BgL_e1z00_1959 =
												BGl_errorz00zz__errorz00(BgL_procz00_4402,
												string_append_3(BGl_string3559z00zz__r4_strings_6_7z00,
													BGl_string3560z00zz__r4_strings_6_7z00,
													BGl_string3561z00zz__r4_strings_6_7z00),
												BgL_end1z00_211);
										}
									else
										{	/* Ieee/string.scm 1206 */
											if (((long) CINT(BgL_end1z00_211) > BgL_l1z00_1957))
												{	/* Ieee/string.scm 1208 */
													BgL_e1z00_1959 =
														BGl_errorz00zz__errorz00(BgL_procz00_4402,
														string_append_3
														(BGl_string3562z00zz__r4_strings_6_7z00,
															BGl_string3560z00zz__r4_strings_6_7z00,
															BGl_string3561z00zz__r4_strings_6_7z00),
														BgL_end1z00_211);
												}
											else
												{	/* Ieee/string.scm 1208 */
													BgL_e1z00_1959 = BgL_end1z00_211;
												}
										}
								}
							else
								{	/* Ieee/string.scm 1204 */
									BgL_e1z00_1959 = BINT(BgL_l1z00_1957);
								}
						}
						{	/* Ieee/string.scm 1304 */
							obj_t BgL_e2z00_1960;

							{	/* Ieee/string.scm 1305 */
								obj_t BgL_procz00_4412;

								BgL_procz00_4412 = BGl_symbol3578z00zz__r4_strings_6_7z00;
								if (CBOOL(BgL_end2z00_213))
									{	/* Ieee/string.scm 1204 */
										if (((long) CINT(BgL_end2z00_213) <= ((long) 0)))
											{	/* Ieee/string.scm 1206 */
												BgL_e2z00_1960 =
													BGl_errorz00zz__errorz00(BgL_procz00_4412,
													string_append_3
													(BGl_string3559z00zz__r4_strings_6_7z00,
														BGl_string3563z00zz__r4_strings_6_7z00,
														BGl_string3561z00zz__r4_strings_6_7z00),
													BgL_end2z00_213);
											}
										else
											{	/* Ieee/string.scm 1206 */
												if (((long) CINT(BgL_end2z00_213) > BgL_l2z00_1958))
													{	/* Ieee/string.scm 1208 */
														BgL_e2z00_1960 =
															BGl_errorz00zz__errorz00(BgL_procz00_4412,
															string_append_3
															(BGl_string3562z00zz__r4_strings_6_7z00,
																BGl_string3563z00zz__r4_strings_6_7z00,
																BGl_string3561z00zz__r4_strings_6_7z00),
															BgL_end2z00_213);
													}
												else
													{	/* Ieee/string.scm 1208 */
														BgL_e2z00_1960 = BgL_end2z00_213;
													}
											}
									}
								else
									{	/* Ieee/string.scm 1204 */
										BgL_e2z00_1960 = BINT(BgL_l2z00_1958);
									}
							}
							{	/* Ieee/string.scm 1305 */
								obj_t BgL_b1z00_1961;

								{	/* Ieee/string.scm 1306 */
									obj_t BgL_procz00_4422;

									BgL_procz00_4422 = BGl_symbol3578z00zz__r4_strings_6_7z00;
									if (CBOOL(BgL_start1z00_210))
										{	/* Ieee/string.scm 1190 */
											if (((long) CINT(BgL_start1z00_210) < ((long) 0)))
												{	/* Ieee/string.scm 1192 */
													BgL_b1z00_1961 =
														BGl_errorz00zz__errorz00(BgL_procz00_4422,
														string_append_3
														(BGl_string3564z00zz__r4_strings_6_7z00,
															BGl_string3565z00zz__r4_strings_6_7z00,
															BGl_string3561z00zz__r4_strings_6_7z00),
														BgL_start1z00_210);
												}
											else
												{	/* Ieee/string.scm 1192 */
													if (
														((long) CINT(BgL_start1z00_210) >= BgL_l1z00_1957))
														{	/* Ieee/string.scm 1194 */
															BgL_b1z00_1961 =
																BGl_errorz00zz__errorz00(BgL_procz00_4422,
																string_append_3
																(BGl_string3566z00zz__r4_strings_6_7z00,
																	BGl_string3565z00zz__r4_strings_6_7z00,
																	BGl_string3561z00zz__r4_strings_6_7z00),
																BgL_start1z00_210);
														}
													else
														{	/* Ieee/string.scm 1194 */
															BgL_b1z00_1961 = BgL_start1z00_210;
														}
												}
										}
									else
										{	/* Ieee/string.scm 1190 */
											BgL_b1z00_1961 = BINT(((long) 0));
								}}
								{	/* Ieee/string.scm 1306 */
									obj_t BgL_b2z00_1962;

									{	/* Ieee/string.scm 1307 */
										obj_t BgL_procz00_4432;

										BgL_procz00_4432 = BGl_symbol3578z00zz__r4_strings_6_7z00;
										if (CBOOL(BgL_start2z00_212))
											{	/* Ieee/string.scm 1190 */
												if (((long) CINT(BgL_start2z00_212) < ((long) 0)))
													{	/* Ieee/string.scm 1192 */
														BgL_b2z00_1962 =
															BGl_errorz00zz__errorz00(BgL_procz00_4432,
															string_append_3
															(BGl_string3564z00zz__r4_strings_6_7z00,
																BGl_string3567z00zz__r4_strings_6_7z00,
																BGl_string3561z00zz__r4_strings_6_7z00),
															BgL_start2z00_212);
													}
												else
													{	/* Ieee/string.scm 1192 */
														if (
															((long) CINT(BgL_start2z00_212) >=
																BgL_l2z00_1958))
															{	/* Ieee/string.scm 1194 */
																BgL_b2z00_1962 =
																	BGl_errorz00zz__errorz00(BgL_procz00_4432,
																	string_append_3
																	(BGl_string3566z00zz__r4_strings_6_7z00,
																		BGl_string3567z00zz__r4_strings_6_7z00,
																		BGl_string3561z00zz__r4_strings_6_7z00),
																	BgL_start2z00_212);
															}
														else
															{	/* Ieee/string.scm 1194 */
																BgL_b2z00_1962 = BgL_start2z00_212;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1190 */
												BgL_b2z00_1962 = BINT(((long) 0));
									}}
									{	/* Ieee/string.scm 1307 */

										{
											obj_t BgL_i1z00_1964;
											obj_t BgL_i2z00_1965;

											BgL_i1z00_1964 = BgL_b1z00_1961;
											BgL_i2z00_1965 = BgL_b2z00_1962;
										BgL_zc3z04anonymousza31786ze3z87_1966:
											if (
												((long) CINT(BgL_i1z00_1964) ==
													(long) CINT(BgL_e1z00_1959)))
												{	/* Ieee/string.scm 1311 */
													return ((bool_t) 1);
												}
											else
												{	/* Ieee/string.scm 1311 */
													if (
														((long) CINT(BgL_i2z00_1965) ==
															(long) CINT(BgL_e2z00_1960)))
														{	/* Ieee/string.scm 1313 */
															return ((bool_t) 0);
														}
													else
														{	/* Ieee/string.scm 1313 */
															if (
																(STRING_REF(BgL_s1z00_208,
																		(long) CINT(BgL_i1z00_1964)) ==
																	STRING_REF(BgL_s2z00_209,
																		(long) CINT(BgL_i2z00_1965))))
																{
																	obj_t BgL_i2z00_9081;
																	obj_t BgL_i1z00_9078;

																	BgL_i1z00_9078 =
																		ADDFX(BgL_i1z00_1964, BINT(((long) 1)));
																	BgL_i2z00_9081 =
																		ADDFX(BgL_i2z00_1965, BINT(((long) 1)));
																	BgL_i2z00_1965 = BgL_i2z00_9081;
																	BgL_i1z00_1964 = BgL_i1z00_9078;
																	goto BgL_zc3z04anonymousza31786ze3z87_1966;
																}
															else
																{	/* Ieee/string.scm 1315 */
																	return ((bool_t) 0);
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



/* _string-prefix-ci? */
	obj_t BGl__stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t
		BgL_env1182z00_223, obj_t BgL_opt1181z00_222)
	{
		{	/* Ieee/string.scm 1323 */
			{	/* Ieee/string.scm 1323 */
				obj_t BgL_s1z00_1977;
				obj_t BgL_s2z00_1978;

				BgL_s1z00_1977 = VECTOR_REF(BgL_opt1181z00_222, ((long) 0));
				BgL_s2z00_1978 = VECTOR_REF(BgL_opt1181z00_222, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1181z00_222))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 1323 */

							{	/* Ieee/string.scm 1323 */
								bool_t BgL_tmpz00_9086;

								{	/* Ieee/string.scm 1323 */
									obj_t BgL_auxz00_9094;
									obj_t BgL_auxz00_9087;

									if (STRINGP(BgL_s2z00_1978))
										{	/* Ieee/string.scm 1323 */
											BgL_auxz00_9094 = BgL_s2z00_1978;
										}
									else
										{
											obj_t BgL_auxz00_9097;

											BgL_auxz00_9097 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 53801)),
												BGl_string3580z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_s2z00_1978);
											FAILURE(BgL_auxz00_9097, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_s1z00_1977))
										{	/* Ieee/string.scm 1323 */
											BgL_auxz00_9087 = BgL_s1z00_1977;
										}
									else
										{
											obj_t BgL_auxz00_9090;

											BgL_auxz00_9090 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 53801)),
												BGl_string3580z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_s1z00_1977);
											FAILURE(BgL_auxz00_9090, BFALSE, BFALSE);
										}
									BgL_tmpz00_9086 =
										BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00
										(BgL_auxz00_9087, BgL_auxz00_9094, BFALSE, BFALSE, BFALSE,
										BFALSE);
								}
								return BBOOL(BgL_tmpz00_9086);
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/string.scm 1323 */
							obj_t BgL_start1z00_1986;

							BgL_start1z00_1986 = VECTOR_REF(BgL_opt1181z00_222, ((long) 2));
							{	/* Ieee/string.scm 1323 */

								{	/* Ieee/string.scm 1323 */
									bool_t BgL_tmpz00_9104;

									{	/* Ieee/string.scm 1323 */
										obj_t BgL_auxz00_9112;
										obj_t BgL_auxz00_9105;

										if (STRINGP(BgL_s2z00_1978))
											{	/* Ieee/string.scm 1323 */
												BgL_auxz00_9112 = BgL_s2z00_1978;
											}
										else
											{
												obj_t BgL_auxz00_9115;

												BgL_auxz00_9115 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 53801)),
													BGl_string3580z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_s2z00_1978);
												FAILURE(BgL_auxz00_9115, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_s1z00_1977))
											{	/* Ieee/string.scm 1323 */
												BgL_auxz00_9105 = BgL_s1z00_1977;
											}
										else
											{
												obj_t BgL_auxz00_9108;

												BgL_auxz00_9108 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 53801)),
													BGl_string3580z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_s1z00_1977);
												FAILURE(BgL_auxz00_9108, BFALSE, BFALSE);
											}
										BgL_tmpz00_9104 =
											BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00
											(BgL_auxz00_9105, BgL_auxz00_9112, BgL_start1z00_1986,
											BFALSE, BFALSE, BFALSE);
									}
									return BBOOL(BgL_tmpz00_9104);
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/string.scm 1323 */
							obj_t BgL_start1z00_1990;

							BgL_start1z00_1990 = VECTOR_REF(BgL_opt1181z00_222, ((long) 2));
							{	/* Ieee/string.scm 1323 */
								obj_t BgL_end1z00_1991;

								BgL_end1z00_1991 = VECTOR_REF(BgL_opt1181z00_222, ((long) 3));
								{	/* Ieee/string.scm 1323 */

									{	/* Ieee/string.scm 1323 */
										bool_t BgL_tmpz00_9123;

										{	/* Ieee/string.scm 1323 */
											obj_t BgL_auxz00_9131;
											obj_t BgL_auxz00_9124;

											if (STRINGP(BgL_s2z00_1978))
												{	/* Ieee/string.scm 1323 */
													BgL_auxz00_9131 = BgL_s2z00_1978;
												}
											else
												{
													obj_t BgL_auxz00_9134;

													BgL_auxz00_9134 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 53801)),
														BGl_string3580z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_s2z00_1978);
													FAILURE(BgL_auxz00_9134, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_s1z00_1977))
												{	/* Ieee/string.scm 1323 */
													BgL_auxz00_9124 = BgL_s1z00_1977;
												}
											else
												{
													obj_t BgL_auxz00_9127;

													BgL_auxz00_9127 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 53801)),
														BGl_string3580z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_s1z00_1977);
													FAILURE(BgL_auxz00_9127, BFALSE, BFALSE);
												}
											BgL_tmpz00_9123 =
												BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00
												(BgL_auxz00_9124, BgL_auxz00_9131, BgL_start1z00_1990,
												BgL_end1z00_1991, BFALSE, BFALSE);
										}
										return BBOOL(BgL_tmpz00_9123);
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Ieee/string.scm 1323 */
							obj_t BgL_start1z00_1994;

							BgL_start1z00_1994 = VECTOR_REF(BgL_opt1181z00_222, ((long) 2));
							{	/* Ieee/string.scm 1323 */
								obj_t BgL_end1z00_1995;

								BgL_end1z00_1995 = VECTOR_REF(BgL_opt1181z00_222, ((long) 3));
								{	/* Ieee/string.scm 1323 */
									obj_t BgL_start2z00_1996;

									BgL_start2z00_1996 =
										VECTOR_REF(BgL_opt1181z00_222, ((long) 4));
									{	/* Ieee/string.scm 1323 */

										{	/* Ieee/string.scm 1323 */
											bool_t BgL_tmpz00_9143;

											{	/* Ieee/string.scm 1323 */
												obj_t BgL_auxz00_9151;
												obj_t BgL_auxz00_9144;

												if (STRINGP(BgL_s2z00_1978))
													{	/* Ieee/string.scm 1323 */
														BgL_auxz00_9151 = BgL_s2z00_1978;
													}
												else
													{
														obj_t BgL_auxz00_9154;

														BgL_auxz00_9154 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 53801)),
															BGl_string3580z00zz__r4_strings_6_7z00,
															BGl_string3478z00zz__r4_strings_6_7z00,
															BgL_s2z00_1978);
														FAILURE(BgL_auxz00_9154, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_s1z00_1977))
													{	/* Ieee/string.scm 1323 */
														BgL_auxz00_9144 = BgL_s1z00_1977;
													}
												else
													{
														obj_t BgL_auxz00_9147;

														BgL_auxz00_9147 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 53801)),
															BGl_string3580z00zz__r4_strings_6_7z00,
															BGl_string3478z00zz__r4_strings_6_7z00,
															BgL_s1z00_1977);
														FAILURE(BgL_auxz00_9147, BFALSE, BFALSE);
													}
												BgL_tmpz00_9143 =
													BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00
													(BgL_auxz00_9144, BgL_auxz00_9151, BgL_start1z00_1994,
													BgL_end1z00_1995, BgL_start2z00_1996, BFALSE);
											}
											return BBOOL(BgL_tmpz00_9143);
										}
									}
								}
							}
						}
						break;
					case ((long) 6):

						{	/* Ieee/string.scm 1323 */
							obj_t BgL_start1z00_1998;

							BgL_start1z00_1998 = VECTOR_REF(BgL_opt1181z00_222, ((long) 2));
							{	/* Ieee/string.scm 1323 */
								obj_t BgL_end1z00_1999;

								BgL_end1z00_1999 = VECTOR_REF(BgL_opt1181z00_222, ((long) 3));
								{	/* Ieee/string.scm 1323 */
									obj_t BgL_start2z00_2000;

									BgL_start2z00_2000 =
										VECTOR_REF(BgL_opt1181z00_222, ((long) 4));
									{	/* Ieee/string.scm 1323 */
										obj_t BgL_end2z00_2001;

										BgL_end2z00_2001 =
											VECTOR_REF(BgL_opt1181z00_222, ((long) 5));
										{	/* Ieee/string.scm 1323 */

											{	/* Ieee/string.scm 1323 */
												bool_t BgL_tmpz00_9164;

												{	/* Ieee/string.scm 1323 */
													obj_t BgL_auxz00_9172;
													obj_t BgL_auxz00_9165;

													if (STRINGP(BgL_s2z00_1978))
														{	/* Ieee/string.scm 1323 */
															BgL_auxz00_9172 = BgL_s2z00_1978;
														}
													else
														{
															obj_t BgL_auxz00_9175;

															BgL_auxz00_9175 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 53801)),
																BGl_string3580z00zz__r4_strings_6_7z00,
																BGl_string3478z00zz__r4_strings_6_7z00,
																BgL_s2z00_1978);
															FAILURE(BgL_auxz00_9175, BFALSE, BFALSE);
														}
													if (STRINGP(BgL_s1z00_1977))
														{	/* Ieee/string.scm 1323 */
															BgL_auxz00_9165 = BgL_s1z00_1977;
														}
													else
														{
															obj_t BgL_auxz00_9168;

															BgL_auxz00_9168 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 53801)),
																BGl_string3580z00zz__r4_strings_6_7z00,
																BGl_string3478z00zz__r4_strings_6_7z00,
																BgL_s1z00_1977);
															FAILURE(BgL_auxz00_9168, BFALSE, BFALSE);
														}
													BgL_tmpz00_9164 =
														BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00
														(BgL_auxz00_9165, BgL_auxz00_9172,
														BgL_start1z00_1998, BgL_end1z00_1999,
														BgL_start2z00_2000, BgL_end2z00_2001);
												}
												return BBOOL(BgL_tmpz00_9164);
											}
										}
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



/* string-prefix-ci? */
	BGL_EXPORTED_DEF bool_t
		BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t BgL_s1z00_216,
		obj_t BgL_s2z00_217, obj_t BgL_start1z00_218, obj_t BgL_end1z00_219,
		obj_t BgL_start2z00_220, obj_t BgL_end2z00_221)
	{
		{	/* Ieee/string.scm 1323 */
			{	/* Ieee/string.scm 1325 */
				long BgL_l1z00_2002;

				BgL_l1z00_2002 = STRING_LENGTH(BgL_s1z00_216);
				{	/* Ieee/string.scm 1325 */
					long BgL_l2z00_2003;

					BgL_l2z00_2003 = STRING_LENGTH(BgL_s2z00_217);
					{	/* Ieee/string.scm 1326 */
						obj_t BgL_e1z00_2004;

						{	/* Ieee/string.scm 1327 */
							obj_t BgL_procz00_4465;

							BgL_procz00_4465 = BGl_symbol3581z00zz__r4_strings_6_7z00;
							if (CBOOL(BgL_end1z00_219))
								{	/* Ieee/string.scm 1204 */
									if (((long) CINT(BgL_end1z00_219) <= ((long) 0)))
										{	/* Ieee/string.scm 1206 */
											BgL_e1z00_2004 =
												BGl_errorz00zz__errorz00(BgL_procz00_4465,
												string_append_3(BGl_string3559z00zz__r4_strings_6_7z00,
													BGl_string3560z00zz__r4_strings_6_7z00,
													BGl_string3561z00zz__r4_strings_6_7z00),
												BgL_end1z00_219);
										}
									else
										{	/* Ieee/string.scm 1206 */
											if (((long) CINT(BgL_end1z00_219) > BgL_l1z00_2002))
												{	/* Ieee/string.scm 1208 */
													BgL_e1z00_2004 =
														BGl_errorz00zz__errorz00(BgL_procz00_4465,
														string_append_3
														(BGl_string3562z00zz__r4_strings_6_7z00,
															BGl_string3560z00zz__r4_strings_6_7z00,
															BGl_string3561z00zz__r4_strings_6_7z00),
														BgL_end1z00_219);
												}
											else
												{	/* Ieee/string.scm 1208 */
													BgL_e1z00_2004 = BgL_end1z00_219;
												}
										}
								}
							else
								{	/* Ieee/string.scm 1204 */
									BgL_e1z00_2004 = BINT(BgL_l1z00_2002);
								}
						}
						{	/* Ieee/string.scm 1327 */
							obj_t BgL_e2z00_2005;

							{	/* Ieee/string.scm 1328 */
								obj_t BgL_procz00_4475;

								BgL_procz00_4475 = BGl_symbol3581z00zz__r4_strings_6_7z00;
								if (CBOOL(BgL_end2z00_221))
									{	/* Ieee/string.scm 1204 */
										if (((long) CINT(BgL_end2z00_221) <= ((long) 0)))
											{	/* Ieee/string.scm 1206 */
												BgL_e2z00_2005 =
													BGl_errorz00zz__errorz00(BgL_procz00_4475,
													string_append_3
													(BGl_string3559z00zz__r4_strings_6_7z00,
														BGl_string3563z00zz__r4_strings_6_7z00,
														BGl_string3561z00zz__r4_strings_6_7z00),
													BgL_end2z00_221);
											}
										else
											{	/* Ieee/string.scm 1206 */
												if (((long) CINT(BgL_end2z00_221) > BgL_l2z00_2003))
													{	/* Ieee/string.scm 1208 */
														BgL_e2z00_2005 =
															BGl_errorz00zz__errorz00(BgL_procz00_4475,
															string_append_3
															(BGl_string3562z00zz__r4_strings_6_7z00,
																BGl_string3563z00zz__r4_strings_6_7z00,
																BGl_string3561z00zz__r4_strings_6_7z00),
															BgL_end2z00_221);
													}
												else
													{	/* Ieee/string.scm 1208 */
														BgL_e2z00_2005 = BgL_end2z00_221;
													}
											}
									}
								else
									{	/* Ieee/string.scm 1204 */
										BgL_e2z00_2005 = BINT(BgL_l2z00_2003);
									}
							}
							{	/* Ieee/string.scm 1328 */
								obj_t BgL_b1z00_2006;

								{	/* Ieee/string.scm 1329 */
									obj_t BgL_procz00_4485;

									BgL_procz00_4485 = BGl_symbol3581z00zz__r4_strings_6_7z00;
									if (CBOOL(BgL_start1z00_218))
										{	/* Ieee/string.scm 1190 */
											if (((long) CINT(BgL_start1z00_218) < ((long) 0)))
												{	/* Ieee/string.scm 1192 */
													BgL_b1z00_2006 =
														BGl_errorz00zz__errorz00(BgL_procz00_4485,
														string_append_3
														(BGl_string3564z00zz__r4_strings_6_7z00,
															BGl_string3565z00zz__r4_strings_6_7z00,
															BGl_string3561z00zz__r4_strings_6_7z00),
														BgL_start1z00_218);
												}
											else
												{	/* Ieee/string.scm 1192 */
													if (
														((long) CINT(BgL_start1z00_218) >= BgL_l1z00_2002))
														{	/* Ieee/string.scm 1194 */
															BgL_b1z00_2006 =
																BGl_errorz00zz__errorz00(BgL_procz00_4485,
																string_append_3
																(BGl_string3566z00zz__r4_strings_6_7z00,
																	BGl_string3565z00zz__r4_strings_6_7z00,
																	BGl_string3561z00zz__r4_strings_6_7z00),
																BgL_start1z00_218);
														}
													else
														{	/* Ieee/string.scm 1194 */
															BgL_b1z00_2006 = BgL_start1z00_218;
														}
												}
										}
									else
										{	/* Ieee/string.scm 1190 */
											BgL_b1z00_2006 = BINT(((long) 0));
								}}
								{	/* Ieee/string.scm 1329 */
									obj_t BgL_b2z00_2007;

									{	/* Ieee/string.scm 1330 */
										obj_t BgL_procz00_4495;

										BgL_procz00_4495 = BGl_symbol3581z00zz__r4_strings_6_7z00;
										if (CBOOL(BgL_start2z00_220))
											{	/* Ieee/string.scm 1190 */
												if (((long) CINT(BgL_start2z00_220) < ((long) 0)))
													{	/* Ieee/string.scm 1192 */
														BgL_b2z00_2007 =
															BGl_errorz00zz__errorz00(BgL_procz00_4495,
															string_append_3
															(BGl_string3564z00zz__r4_strings_6_7z00,
																BGl_string3567z00zz__r4_strings_6_7z00,
																BGl_string3561z00zz__r4_strings_6_7z00),
															BgL_start2z00_220);
													}
												else
													{	/* Ieee/string.scm 1192 */
														if (
															((long) CINT(BgL_start2z00_220) >=
																BgL_l2z00_2003))
															{	/* Ieee/string.scm 1194 */
																BgL_b2z00_2007 =
																	BGl_errorz00zz__errorz00(BgL_procz00_4495,
																	string_append_3
																	(BGl_string3566z00zz__r4_strings_6_7z00,
																		BGl_string3567z00zz__r4_strings_6_7z00,
																		BGl_string3561z00zz__r4_strings_6_7z00),
																	BgL_start2z00_220);
															}
														else
															{	/* Ieee/string.scm 1194 */
																BgL_b2z00_2007 = BgL_start2z00_220;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1190 */
												BgL_b2z00_2007 = BINT(((long) 0));
									}}
									{	/* Ieee/string.scm 1330 */

										{
											obj_t BgL_i1z00_2009;
											obj_t BgL_i2z00_2010;

											BgL_i1z00_2009 = BgL_b1z00_2006;
											BgL_i2z00_2010 = BgL_b2z00_2007;
										BgL_zc3z04anonymousza31798ze3z87_2011:
											if (
												((long) CINT(BgL_i1z00_2009) ==
													(long) CINT(BgL_e1z00_2004)))
												{	/* Ieee/string.scm 1334 */
													return ((bool_t) 1);
												}
											else
												{	/* Ieee/string.scm 1334 */
													if (
														((long) CINT(BgL_i2z00_2010) ==
															(long) CINT(BgL_e2z00_2005)))
														{	/* Ieee/string.scm 1336 */
															return ((bool_t) 0);
														}
													else
														{	/* Ieee/string.scm 1336 */
															if (
																(toupper(STRING_REF(BgL_s1z00_216,
																			(long) CINT(BgL_i1z00_2009))) ==
																	toupper(STRING_REF(BgL_s2z00_217,
																			(long) CINT(BgL_i2z00_2010)))))
																{
																	obj_t BgL_i2z00_9256;
																	obj_t BgL_i1z00_9253;

																	BgL_i1z00_9253 =
																		ADDFX(BgL_i1z00_2009, BINT(((long) 1)));
																	BgL_i2z00_9256 =
																		ADDFX(BgL_i2z00_2010, BINT(((long) 1)));
																	BgL_i2z00_2010 = BgL_i2z00_9256;
																	BgL_i1z00_2009 = BgL_i1z00_9253;
																	goto BgL_zc3z04anonymousza31798ze3z87_2011;
																}
															else
																{	/* Ieee/string.scm 1338 */
																	return ((bool_t) 0);
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



/* _string-suffix? */
	obj_t BGl__stringzd2suffixzf3z21zz__r4_strings_6_7z00(obj_t
		BgL_env1186z00_231, obj_t BgL_opt1185z00_230)
	{
		{	/* Ieee/string.scm 1346 */
			{	/* Ieee/string.scm 1346 */
				obj_t BgL_s1z00_2022;
				obj_t BgL_s2z00_2023;

				BgL_s1z00_2022 = VECTOR_REF(BgL_opt1185z00_230, ((long) 0));
				BgL_s2z00_2023 = VECTOR_REF(BgL_opt1185z00_230, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1185z00_230))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 1346 */

							{	/* Ieee/string.scm 1346 */
								bool_t BgL_tmpz00_9261;

								{	/* Ieee/string.scm 1346 */
									obj_t BgL_auxz00_9269;
									obj_t BgL_auxz00_9262;

									if (STRINGP(BgL_s2z00_2023))
										{	/* Ieee/string.scm 1346 */
											BgL_auxz00_9269 = BgL_s2z00_2023;
										}
									else
										{
											obj_t BgL_auxz00_9272;

											BgL_auxz00_9272 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 54660)),
												BGl_string3583z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_s2z00_2023);
											FAILURE(BgL_auxz00_9272, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_s1z00_2022))
										{	/* Ieee/string.scm 1346 */
											BgL_auxz00_9262 = BgL_s1z00_2022;
										}
									else
										{
											obj_t BgL_auxz00_9265;

											BgL_auxz00_9265 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 54660)),
												BGl_string3583z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_s1z00_2022);
											FAILURE(BgL_auxz00_9265, BFALSE, BFALSE);
										}
									BgL_tmpz00_9261 =
										BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00
										(BgL_auxz00_9262, BgL_auxz00_9269, BFALSE, BFALSE, BFALSE,
										BFALSE);
								}
								return BBOOL(BgL_tmpz00_9261);
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/string.scm 1346 */
							obj_t BgL_start1z00_2031;

							BgL_start1z00_2031 = VECTOR_REF(BgL_opt1185z00_230, ((long) 2));
							{	/* Ieee/string.scm 1346 */

								{	/* Ieee/string.scm 1346 */
									bool_t BgL_tmpz00_9279;

									{	/* Ieee/string.scm 1346 */
										obj_t BgL_auxz00_9287;
										obj_t BgL_auxz00_9280;

										if (STRINGP(BgL_s2z00_2023))
											{	/* Ieee/string.scm 1346 */
												BgL_auxz00_9287 = BgL_s2z00_2023;
											}
										else
											{
												obj_t BgL_auxz00_9290;

												BgL_auxz00_9290 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 54660)),
													BGl_string3583z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_s2z00_2023);
												FAILURE(BgL_auxz00_9290, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_s1z00_2022))
											{	/* Ieee/string.scm 1346 */
												BgL_auxz00_9280 = BgL_s1z00_2022;
											}
										else
											{
												obj_t BgL_auxz00_9283;

												BgL_auxz00_9283 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 54660)),
													BGl_string3583z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_s1z00_2022);
												FAILURE(BgL_auxz00_9283, BFALSE, BFALSE);
											}
										BgL_tmpz00_9279 =
											BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00
											(BgL_auxz00_9280, BgL_auxz00_9287, BgL_start1z00_2031,
											BFALSE, BFALSE, BFALSE);
									}
									return BBOOL(BgL_tmpz00_9279);
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/string.scm 1346 */
							obj_t BgL_start1z00_2035;

							BgL_start1z00_2035 = VECTOR_REF(BgL_opt1185z00_230, ((long) 2));
							{	/* Ieee/string.scm 1346 */
								obj_t BgL_end1z00_2036;

								BgL_end1z00_2036 = VECTOR_REF(BgL_opt1185z00_230, ((long) 3));
								{	/* Ieee/string.scm 1346 */

									{	/* Ieee/string.scm 1346 */
										bool_t BgL_tmpz00_9298;

										{	/* Ieee/string.scm 1346 */
											obj_t BgL_auxz00_9306;
											obj_t BgL_auxz00_9299;

											if (STRINGP(BgL_s2z00_2023))
												{	/* Ieee/string.scm 1346 */
													BgL_auxz00_9306 = BgL_s2z00_2023;
												}
											else
												{
													obj_t BgL_auxz00_9309;

													BgL_auxz00_9309 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 54660)),
														BGl_string3583z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_s2z00_2023);
													FAILURE(BgL_auxz00_9309, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_s1z00_2022))
												{	/* Ieee/string.scm 1346 */
													BgL_auxz00_9299 = BgL_s1z00_2022;
												}
											else
												{
													obj_t BgL_auxz00_9302;

													BgL_auxz00_9302 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 54660)),
														BGl_string3583z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_s1z00_2022);
													FAILURE(BgL_auxz00_9302, BFALSE, BFALSE);
												}
											BgL_tmpz00_9298 =
												BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00
												(BgL_auxz00_9299, BgL_auxz00_9306, BgL_start1z00_2035,
												BgL_end1z00_2036, BFALSE, BFALSE);
										}
										return BBOOL(BgL_tmpz00_9298);
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Ieee/string.scm 1346 */
							obj_t BgL_start1z00_2039;

							BgL_start1z00_2039 = VECTOR_REF(BgL_opt1185z00_230, ((long) 2));
							{	/* Ieee/string.scm 1346 */
								obj_t BgL_end1z00_2040;

								BgL_end1z00_2040 = VECTOR_REF(BgL_opt1185z00_230, ((long) 3));
								{	/* Ieee/string.scm 1346 */
									obj_t BgL_start2z00_2041;

									BgL_start2z00_2041 =
										VECTOR_REF(BgL_opt1185z00_230, ((long) 4));
									{	/* Ieee/string.scm 1346 */

										{	/* Ieee/string.scm 1346 */
											bool_t BgL_tmpz00_9318;

											{	/* Ieee/string.scm 1346 */
												obj_t BgL_auxz00_9326;
												obj_t BgL_auxz00_9319;

												if (STRINGP(BgL_s2z00_2023))
													{	/* Ieee/string.scm 1346 */
														BgL_auxz00_9326 = BgL_s2z00_2023;
													}
												else
													{
														obj_t BgL_auxz00_9329;

														BgL_auxz00_9329 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 54660)),
															BGl_string3583z00zz__r4_strings_6_7z00,
															BGl_string3478z00zz__r4_strings_6_7z00,
															BgL_s2z00_2023);
														FAILURE(BgL_auxz00_9329, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_s1z00_2022))
													{	/* Ieee/string.scm 1346 */
														BgL_auxz00_9319 = BgL_s1z00_2022;
													}
												else
													{
														obj_t BgL_auxz00_9322;

														BgL_auxz00_9322 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 54660)),
															BGl_string3583z00zz__r4_strings_6_7z00,
															BGl_string3478z00zz__r4_strings_6_7z00,
															BgL_s1z00_2022);
														FAILURE(BgL_auxz00_9322, BFALSE, BFALSE);
													}
												BgL_tmpz00_9318 =
													BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00
													(BgL_auxz00_9319, BgL_auxz00_9326, BgL_start1z00_2039,
													BgL_end1z00_2040, BgL_start2z00_2041, BFALSE);
											}
											return BBOOL(BgL_tmpz00_9318);
										}
									}
								}
							}
						}
						break;
					case ((long) 6):

						{	/* Ieee/string.scm 1346 */
							obj_t BgL_start1z00_2043;

							BgL_start1z00_2043 = VECTOR_REF(BgL_opt1185z00_230, ((long) 2));
							{	/* Ieee/string.scm 1346 */
								obj_t BgL_end1z00_2044;

								BgL_end1z00_2044 = VECTOR_REF(BgL_opt1185z00_230, ((long) 3));
								{	/* Ieee/string.scm 1346 */
									obj_t BgL_start2z00_2045;

									BgL_start2z00_2045 =
										VECTOR_REF(BgL_opt1185z00_230, ((long) 4));
									{	/* Ieee/string.scm 1346 */
										obj_t BgL_end2z00_2046;

										BgL_end2z00_2046 =
											VECTOR_REF(BgL_opt1185z00_230, ((long) 5));
										{	/* Ieee/string.scm 1346 */

											{	/* Ieee/string.scm 1346 */
												bool_t BgL_tmpz00_9339;

												{	/* Ieee/string.scm 1346 */
													obj_t BgL_auxz00_9347;
													obj_t BgL_auxz00_9340;

													if (STRINGP(BgL_s2z00_2023))
														{	/* Ieee/string.scm 1346 */
															BgL_auxz00_9347 = BgL_s2z00_2023;
														}
													else
														{
															obj_t BgL_auxz00_9350;

															BgL_auxz00_9350 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 54660)),
																BGl_string3583z00zz__r4_strings_6_7z00,
																BGl_string3478z00zz__r4_strings_6_7z00,
																BgL_s2z00_2023);
															FAILURE(BgL_auxz00_9350, BFALSE, BFALSE);
														}
													if (STRINGP(BgL_s1z00_2022))
														{	/* Ieee/string.scm 1346 */
															BgL_auxz00_9340 = BgL_s1z00_2022;
														}
													else
														{
															obj_t BgL_auxz00_9343;

															BgL_auxz00_9343 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 54660)),
																BGl_string3583z00zz__r4_strings_6_7z00,
																BGl_string3478z00zz__r4_strings_6_7z00,
																BgL_s1z00_2022);
															FAILURE(BgL_auxz00_9343, BFALSE, BFALSE);
														}
													BgL_tmpz00_9339 =
														BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00
														(BgL_auxz00_9340, BgL_auxz00_9347,
														BgL_start1z00_2043, BgL_end1z00_2044,
														BgL_start2z00_2045, BgL_end2z00_2046);
												}
												return BBOOL(BgL_tmpz00_9339);
											}
										}
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



/* string-suffix? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(obj_t
		BgL_s1z00_224, obj_t BgL_s2z00_225, obj_t BgL_start1z00_226,
		obj_t BgL_end1z00_227, obj_t BgL_start2z00_228, obj_t BgL_end2z00_229)
	{
		{	/* Ieee/string.scm 1346 */
			{	/* Ieee/string.scm 1348 */
				long BgL_l1z00_2047;

				BgL_l1z00_2047 = STRING_LENGTH(BgL_s1z00_224);
				{	/* Ieee/string.scm 1348 */
					long BgL_l2z00_2048;

					BgL_l2z00_2048 = STRING_LENGTH(BgL_s2z00_225);
					{	/* Ieee/string.scm 1349 */
						obj_t BgL_b1z00_2049;

						{	/* Ieee/string.scm 1350 */
							obj_t BgL_procz00_4537;

							BgL_procz00_4537 = BGl_symbol3584z00zz__r4_strings_6_7z00;
							if (CBOOL(BgL_end1z00_227))
								{	/* Ieee/string.scm 1204 */
									if (((long) CINT(BgL_end1z00_227) <= ((long) 0)))
										{	/* Ieee/string.scm 1206 */
											BgL_b1z00_2049 =
												BGl_errorz00zz__errorz00(BgL_procz00_4537,
												string_append_3(BGl_string3559z00zz__r4_strings_6_7z00,
													BGl_string3560z00zz__r4_strings_6_7z00,
													BGl_string3561z00zz__r4_strings_6_7z00),
												BgL_end1z00_227);
										}
									else
										{	/* Ieee/string.scm 1206 */
											if (((long) CINT(BgL_end1z00_227) > BgL_l1z00_2047))
												{	/* Ieee/string.scm 1208 */
													BgL_b1z00_2049 =
														BGl_errorz00zz__errorz00(BgL_procz00_4537,
														string_append_3
														(BGl_string3562z00zz__r4_strings_6_7z00,
															BGl_string3560z00zz__r4_strings_6_7z00,
															BGl_string3561z00zz__r4_strings_6_7z00),
														BgL_end1z00_227);
												}
											else
												{	/* Ieee/string.scm 1208 */
													BgL_b1z00_2049 = BgL_end1z00_227;
												}
										}
								}
							else
								{	/* Ieee/string.scm 1204 */
									BgL_b1z00_2049 = BINT(BgL_l1z00_2047);
								}
						}
						{	/* Ieee/string.scm 1350 */
							obj_t BgL_b2z00_2050;

							{	/* Ieee/string.scm 1351 */
								obj_t BgL_procz00_4547;

								BgL_procz00_4547 = BGl_symbol3584z00zz__r4_strings_6_7z00;
								if (CBOOL(BgL_end2z00_229))
									{	/* Ieee/string.scm 1204 */
										if (((long) CINT(BgL_end2z00_229) <= ((long) 0)))
											{	/* Ieee/string.scm 1206 */
												BgL_b2z00_2050 =
													BGl_errorz00zz__errorz00(BgL_procz00_4547,
													string_append_3
													(BGl_string3559z00zz__r4_strings_6_7z00,
														BGl_string3563z00zz__r4_strings_6_7z00,
														BGl_string3561z00zz__r4_strings_6_7z00),
													BgL_end2z00_229);
											}
										else
											{	/* Ieee/string.scm 1206 */
												if (((long) CINT(BgL_end2z00_229) > BgL_l2z00_2048))
													{	/* Ieee/string.scm 1208 */
														BgL_b2z00_2050 =
															BGl_errorz00zz__errorz00(BgL_procz00_4547,
															string_append_3
															(BGl_string3562z00zz__r4_strings_6_7z00,
																BGl_string3563z00zz__r4_strings_6_7z00,
																BGl_string3561z00zz__r4_strings_6_7z00),
															BgL_end2z00_229);
													}
												else
													{	/* Ieee/string.scm 1208 */
														BgL_b2z00_2050 = BgL_end2z00_229;
													}
											}
									}
								else
									{	/* Ieee/string.scm 1204 */
										BgL_b2z00_2050 = BINT(BgL_l2z00_2048);
									}
							}
							{	/* Ieee/string.scm 1351 */
								obj_t BgL_e1z00_2051;

								{	/* Ieee/string.scm 1352 */
									obj_t BgL_procz00_4557;

									BgL_procz00_4557 = BGl_symbol3584z00zz__r4_strings_6_7z00;
									if (CBOOL(BgL_start1z00_226))
										{	/* Ieee/string.scm 1190 */
											if (((long) CINT(BgL_start1z00_226) < ((long) 0)))
												{	/* Ieee/string.scm 1192 */
													BgL_e1z00_2051 =
														BGl_errorz00zz__errorz00(BgL_procz00_4557,
														string_append_3
														(BGl_string3564z00zz__r4_strings_6_7z00,
															BGl_string3565z00zz__r4_strings_6_7z00,
															BGl_string3561z00zz__r4_strings_6_7z00),
														BgL_start1z00_226);
												}
											else
												{	/* Ieee/string.scm 1192 */
													if (
														((long) CINT(BgL_start1z00_226) >= BgL_l1z00_2047))
														{	/* Ieee/string.scm 1194 */
															BgL_e1z00_2051 =
																BGl_errorz00zz__errorz00(BgL_procz00_4557,
																string_append_3
																(BGl_string3566z00zz__r4_strings_6_7z00,
																	BGl_string3565z00zz__r4_strings_6_7z00,
																	BGl_string3561z00zz__r4_strings_6_7z00),
																BgL_start1z00_226);
														}
													else
														{	/* Ieee/string.scm 1194 */
															BgL_e1z00_2051 = BgL_start1z00_226;
														}
												}
										}
									else
										{	/* Ieee/string.scm 1190 */
											BgL_e1z00_2051 = BINT(((long) 0));
								}}
								{	/* Ieee/string.scm 1352 */
									obj_t BgL_e2z00_2052;

									{	/* Ieee/string.scm 1353 */
										obj_t BgL_procz00_4567;

										BgL_procz00_4567 = BGl_symbol3584z00zz__r4_strings_6_7z00;
										if (CBOOL(BgL_start2z00_228))
											{	/* Ieee/string.scm 1190 */
												if (((long) CINT(BgL_start2z00_228) < ((long) 0)))
													{	/* Ieee/string.scm 1192 */
														BgL_e2z00_2052 =
															BGl_errorz00zz__errorz00(BgL_procz00_4567,
															string_append_3
															(BGl_string3564z00zz__r4_strings_6_7z00,
																BGl_string3567z00zz__r4_strings_6_7z00,
																BGl_string3561z00zz__r4_strings_6_7z00),
															BgL_start2z00_228);
													}
												else
													{	/* Ieee/string.scm 1192 */
														if (
															((long) CINT(BgL_start2z00_228) >=
																BgL_l2z00_2048))
															{	/* Ieee/string.scm 1194 */
																BgL_e2z00_2052 =
																	BGl_errorz00zz__errorz00(BgL_procz00_4567,
																	string_append_3
																	(BGl_string3566z00zz__r4_strings_6_7z00,
																		BGl_string3567z00zz__r4_strings_6_7z00,
																		BGl_string3561z00zz__r4_strings_6_7z00),
																	BgL_start2z00_228);
															}
														else
															{	/* Ieee/string.scm 1194 */
																BgL_e2z00_2052 = BgL_start2z00_228;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1190 */
												BgL_e2z00_2052 = BINT(((long) 0));
									}}
									{	/* Ieee/string.scm 1353 */

										{
											long BgL_i1z00_2056;
											long BgL_i2z00_2057;

											BgL_i1z00_2056 =
												((long) CINT(BgL_b1z00_2049) - ((long) 1));
											BgL_i2z00_2057 =
												((long) CINT(BgL_b2z00_2050) - ((long) 1));
										BgL_zc3z04anonymousza31810ze3z87_2058:
											if ((BgL_i1z00_2056 < (long) CINT(BgL_e1z00_2051)))
												{	/* Ieee/string.scm 1357 */
													return ((bool_t) 1);
												}
											else
												{	/* Ieee/string.scm 1357 */
													if ((BgL_i2z00_2057 < (long) CINT(BgL_e2z00_2052)))
														{	/* Ieee/string.scm 1359 */
															return ((bool_t) 0);
														}
													else
														{	/* Ieee/string.scm 1359 */
															if (
																(STRING_REF(BgL_s1z00_224, BgL_i1z00_2056) ==
																	STRING_REF(BgL_s2z00_225, BgL_i2z00_2057)))
																{
																	long BgL_i2z00_9424;
																	long BgL_i1z00_9422;

																	BgL_i1z00_9422 =
																		(BgL_i1z00_2056 - ((long) 1));
																	BgL_i2z00_9424 =
																		(BgL_i2z00_2057 - ((long) 1));
																	BgL_i2z00_2057 = BgL_i2z00_9424;
																	BgL_i1z00_2056 = BgL_i1z00_9422;
																	goto BgL_zc3z04anonymousza31810ze3z87_2058;
																}
															else
																{	/* Ieee/string.scm 1361 */
																	return ((bool_t) 0);
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



/* _string-suffix-ci? */
	obj_t BGl__stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t
		BgL_env1190z00_239, obj_t BgL_opt1189z00_238)
	{
		{	/* Ieee/string.scm 1369 */
			{	/* Ieee/string.scm 1369 */
				obj_t BgL_s1z00_2069;
				obj_t BgL_s2z00_2070;

				BgL_s1z00_2069 = VECTOR_REF(BgL_opt1189z00_238, ((long) 0));
				BgL_s2z00_2070 = VECTOR_REF(BgL_opt1189z00_238, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1189z00_238))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 1369 */

							{	/* Ieee/string.scm 1369 */
								bool_t BgL_tmpz00_9432;

								{	/* Ieee/string.scm 1369 */
									obj_t BgL_auxz00_9440;
									obj_t BgL_auxz00_9433;

									if (STRINGP(BgL_s2z00_2070))
										{	/* Ieee/string.scm 1369 */
											BgL_auxz00_9440 = BgL_s2z00_2070;
										}
									else
										{
											obj_t BgL_auxz00_9443;

											BgL_auxz00_9443 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 55521)),
												BGl_string3586z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_s2z00_2070);
											FAILURE(BgL_auxz00_9443, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_s1z00_2069))
										{	/* Ieee/string.scm 1369 */
											BgL_auxz00_9433 = BgL_s1z00_2069;
										}
									else
										{
											obj_t BgL_auxz00_9436;

											BgL_auxz00_9436 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 55521)),
												BGl_string3586z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00, BgL_s1z00_2069);
											FAILURE(BgL_auxz00_9436, BFALSE, BFALSE);
										}
									BgL_tmpz00_9432 =
										BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00
										(BgL_auxz00_9433, BgL_auxz00_9440, BFALSE, BFALSE, BFALSE,
										BFALSE);
								}
								return BBOOL(BgL_tmpz00_9432);
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/string.scm 1369 */
							obj_t BgL_start1z00_2078;

							BgL_start1z00_2078 = VECTOR_REF(BgL_opt1189z00_238, ((long) 2));
							{	/* Ieee/string.scm 1369 */

								{	/* Ieee/string.scm 1369 */
									bool_t BgL_tmpz00_9450;

									{	/* Ieee/string.scm 1369 */
										obj_t BgL_auxz00_9458;
										obj_t BgL_auxz00_9451;

										if (STRINGP(BgL_s2z00_2070))
											{	/* Ieee/string.scm 1369 */
												BgL_auxz00_9458 = BgL_s2z00_2070;
											}
										else
											{
												obj_t BgL_auxz00_9461;

												BgL_auxz00_9461 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 55521)),
													BGl_string3586z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_s2z00_2070);
												FAILURE(BgL_auxz00_9461, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_s1z00_2069))
											{	/* Ieee/string.scm 1369 */
												BgL_auxz00_9451 = BgL_s1z00_2069;
											}
										else
											{
												obj_t BgL_auxz00_9454;

												BgL_auxz00_9454 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 55521)),
													BGl_string3586z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_s1z00_2069);
												FAILURE(BgL_auxz00_9454, BFALSE, BFALSE);
											}
										BgL_tmpz00_9450 =
											BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00
											(BgL_auxz00_9451, BgL_auxz00_9458, BgL_start1z00_2078,
											BFALSE, BFALSE, BFALSE);
									}
									return BBOOL(BgL_tmpz00_9450);
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/string.scm 1369 */
							obj_t BgL_start1z00_2082;

							BgL_start1z00_2082 = VECTOR_REF(BgL_opt1189z00_238, ((long) 2));
							{	/* Ieee/string.scm 1369 */
								obj_t BgL_end1z00_2083;

								BgL_end1z00_2083 = VECTOR_REF(BgL_opt1189z00_238, ((long) 3));
								{	/* Ieee/string.scm 1369 */

									{	/* Ieee/string.scm 1369 */
										bool_t BgL_tmpz00_9469;

										{	/* Ieee/string.scm 1369 */
											obj_t BgL_auxz00_9477;
											obj_t BgL_auxz00_9470;

											if (STRINGP(BgL_s2z00_2070))
												{	/* Ieee/string.scm 1369 */
													BgL_auxz00_9477 = BgL_s2z00_2070;
												}
											else
												{
													obj_t BgL_auxz00_9480;

													BgL_auxz00_9480 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 55521)),
														BGl_string3586z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_s2z00_2070);
													FAILURE(BgL_auxz00_9480, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_s1z00_2069))
												{	/* Ieee/string.scm 1369 */
													BgL_auxz00_9470 = BgL_s1z00_2069;
												}
											else
												{
													obj_t BgL_auxz00_9473;

													BgL_auxz00_9473 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 55521)),
														BGl_string3586z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_s1z00_2069);
													FAILURE(BgL_auxz00_9473, BFALSE, BFALSE);
												}
											BgL_tmpz00_9469 =
												BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00
												(BgL_auxz00_9470, BgL_auxz00_9477, BgL_start1z00_2082,
												BgL_end1z00_2083, BFALSE, BFALSE);
										}
										return BBOOL(BgL_tmpz00_9469);
									}
								}
							}
						}
						break;
					case ((long) 5):

						{	/* Ieee/string.scm 1369 */
							obj_t BgL_start1z00_2086;

							BgL_start1z00_2086 = VECTOR_REF(BgL_opt1189z00_238, ((long) 2));
							{	/* Ieee/string.scm 1369 */
								obj_t BgL_end1z00_2087;

								BgL_end1z00_2087 = VECTOR_REF(BgL_opt1189z00_238, ((long) 3));
								{	/* Ieee/string.scm 1369 */
									obj_t BgL_start2z00_2088;

									BgL_start2z00_2088 =
										VECTOR_REF(BgL_opt1189z00_238, ((long) 4));
									{	/* Ieee/string.scm 1369 */

										{	/* Ieee/string.scm 1369 */
											bool_t BgL_tmpz00_9489;

											{	/* Ieee/string.scm 1369 */
												obj_t BgL_auxz00_9497;
												obj_t BgL_auxz00_9490;

												if (STRINGP(BgL_s2z00_2070))
													{	/* Ieee/string.scm 1369 */
														BgL_auxz00_9497 = BgL_s2z00_2070;
													}
												else
													{
														obj_t BgL_auxz00_9500;

														BgL_auxz00_9500 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 55521)),
															BGl_string3586z00zz__r4_strings_6_7z00,
															BGl_string3478z00zz__r4_strings_6_7z00,
															BgL_s2z00_2070);
														FAILURE(BgL_auxz00_9500, BFALSE, BFALSE);
													}
												if (STRINGP(BgL_s1z00_2069))
													{	/* Ieee/string.scm 1369 */
														BgL_auxz00_9490 = BgL_s1z00_2069;
													}
												else
													{
														obj_t BgL_auxz00_9493;

														BgL_auxz00_9493 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 55521)),
															BGl_string3586z00zz__r4_strings_6_7z00,
															BGl_string3478z00zz__r4_strings_6_7z00,
															BgL_s1z00_2069);
														FAILURE(BgL_auxz00_9493, BFALSE, BFALSE);
													}
												BgL_tmpz00_9489 =
													BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00
													(BgL_auxz00_9490, BgL_auxz00_9497, BgL_start1z00_2086,
													BgL_end1z00_2087, BgL_start2z00_2088, BFALSE);
											}
											return BBOOL(BgL_tmpz00_9489);
										}
									}
								}
							}
						}
						break;
					case ((long) 6):

						{	/* Ieee/string.scm 1369 */
							obj_t BgL_start1z00_2090;

							BgL_start1z00_2090 = VECTOR_REF(BgL_opt1189z00_238, ((long) 2));
							{	/* Ieee/string.scm 1369 */
								obj_t BgL_end1z00_2091;

								BgL_end1z00_2091 = VECTOR_REF(BgL_opt1189z00_238, ((long) 3));
								{	/* Ieee/string.scm 1369 */
									obj_t BgL_start2z00_2092;

									BgL_start2z00_2092 =
										VECTOR_REF(BgL_opt1189z00_238, ((long) 4));
									{	/* Ieee/string.scm 1369 */
										obj_t BgL_end2z00_2093;

										BgL_end2z00_2093 =
											VECTOR_REF(BgL_opt1189z00_238, ((long) 5));
										{	/* Ieee/string.scm 1369 */

											{	/* Ieee/string.scm 1369 */
												bool_t BgL_tmpz00_9510;

												{	/* Ieee/string.scm 1369 */
													obj_t BgL_auxz00_9518;
													obj_t BgL_auxz00_9511;

													if (STRINGP(BgL_s2z00_2070))
														{	/* Ieee/string.scm 1369 */
															BgL_auxz00_9518 = BgL_s2z00_2070;
														}
													else
														{
															obj_t BgL_auxz00_9521;

															BgL_auxz00_9521 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 55521)),
																BGl_string3586z00zz__r4_strings_6_7z00,
																BGl_string3478z00zz__r4_strings_6_7z00,
																BgL_s2z00_2070);
															FAILURE(BgL_auxz00_9521, BFALSE, BFALSE);
														}
													if (STRINGP(BgL_s1z00_2069))
														{	/* Ieee/string.scm 1369 */
															BgL_auxz00_9511 = BgL_s1z00_2069;
														}
													else
														{
															obj_t BgL_auxz00_9514;

															BgL_auxz00_9514 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 55521)),
																BGl_string3586z00zz__r4_strings_6_7z00,
																BGl_string3478z00zz__r4_strings_6_7z00,
																BgL_s1z00_2069);
															FAILURE(BgL_auxz00_9514, BFALSE, BFALSE);
														}
													BgL_tmpz00_9510 =
														BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00
														(BgL_auxz00_9511, BgL_auxz00_9518,
														BgL_start1z00_2090, BgL_end1z00_2091,
														BgL_start2z00_2092, BgL_end2z00_2093);
												}
												return BBOOL(BgL_tmpz00_9510);
											}
										}
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



/* string-suffix-ci? */
	BGL_EXPORTED_DEF bool_t
		BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t BgL_s1z00_232,
		obj_t BgL_s2z00_233, obj_t BgL_start1z00_234, obj_t BgL_end1z00_235,
		obj_t BgL_start2z00_236, obj_t BgL_end2z00_237)
	{
		{	/* Ieee/string.scm 1369 */
			{	/* Ieee/string.scm 1371 */
				long BgL_l1z00_2094;

				BgL_l1z00_2094 = STRING_LENGTH(BgL_s1z00_232);
				{	/* Ieee/string.scm 1371 */
					long BgL_l2z00_2095;

					BgL_l2z00_2095 = STRING_LENGTH(BgL_s2z00_233);
					{	/* Ieee/string.scm 1372 */
						obj_t BgL_b1z00_2096;

						{	/* Ieee/string.scm 1373 */
							obj_t BgL_procz00_4604;

							BgL_procz00_4604 = BGl_symbol3557z00zz__r4_strings_6_7z00;
							if (CBOOL(BgL_end1z00_235))
								{	/* Ieee/string.scm 1204 */
									if (((long) CINT(BgL_end1z00_235) <= ((long) 0)))
										{	/* Ieee/string.scm 1206 */
											BgL_b1z00_2096 =
												BGl_errorz00zz__errorz00(BgL_procz00_4604,
												string_append_3(BGl_string3559z00zz__r4_strings_6_7z00,
													BGl_string3560z00zz__r4_strings_6_7z00,
													BGl_string3561z00zz__r4_strings_6_7z00),
												BgL_end1z00_235);
										}
									else
										{	/* Ieee/string.scm 1206 */
											if (((long) CINT(BgL_end1z00_235) > BgL_l1z00_2094))
												{	/* Ieee/string.scm 1208 */
													BgL_b1z00_2096 =
														BGl_errorz00zz__errorz00(BgL_procz00_4604,
														string_append_3
														(BGl_string3562z00zz__r4_strings_6_7z00,
															BGl_string3560z00zz__r4_strings_6_7z00,
															BGl_string3561z00zz__r4_strings_6_7z00),
														BgL_end1z00_235);
												}
											else
												{	/* Ieee/string.scm 1208 */
													BgL_b1z00_2096 = BgL_end1z00_235;
												}
										}
								}
							else
								{	/* Ieee/string.scm 1204 */
									BgL_b1z00_2096 = BINT(BgL_l1z00_2094);
								}
						}
						{	/* Ieee/string.scm 1373 */
							obj_t BgL_b2z00_2097;

							{	/* Ieee/string.scm 1374 */
								obj_t BgL_procz00_4614;

								BgL_procz00_4614 = BGl_symbol3557z00zz__r4_strings_6_7z00;
								if (CBOOL(BgL_end2z00_237))
									{	/* Ieee/string.scm 1204 */
										if (((long) CINT(BgL_end2z00_237) <= ((long) 0)))
											{	/* Ieee/string.scm 1206 */
												BgL_b2z00_2097 =
													BGl_errorz00zz__errorz00(BgL_procz00_4614,
													string_append_3
													(BGl_string3559z00zz__r4_strings_6_7z00,
														BGl_string3563z00zz__r4_strings_6_7z00,
														BGl_string3561z00zz__r4_strings_6_7z00),
													BgL_end2z00_237);
											}
										else
											{	/* Ieee/string.scm 1206 */
												if (((long) CINT(BgL_end2z00_237) > BgL_l2z00_2095))
													{	/* Ieee/string.scm 1208 */
														BgL_b2z00_2097 =
															BGl_errorz00zz__errorz00(BgL_procz00_4614,
															string_append_3
															(BGl_string3562z00zz__r4_strings_6_7z00,
																BGl_string3563z00zz__r4_strings_6_7z00,
																BGl_string3561z00zz__r4_strings_6_7z00),
															BgL_end2z00_237);
													}
												else
													{	/* Ieee/string.scm 1208 */
														BgL_b2z00_2097 = BgL_end2z00_237;
													}
											}
									}
								else
									{	/* Ieee/string.scm 1204 */
										BgL_b2z00_2097 = BINT(BgL_l2z00_2095);
									}
							}
							{	/* Ieee/string.scm 1374 */
								obj_t BgL_e1z00_2098;

								{	/* Ieee/string.scm 1375 */
									obj_t BgL_procz00_4624;

									BgL_procz00_4624 = BGl_symbol3557z00zz__r4_strings_6_7z00;
									if (CBOOL(BgL_start1z00_234))
										{	/* Ieee/string.scm 1190 */
											if (((long) CINT(BgL_start1z00_234) < ((long) 0)))
												{	/* Ieee/string.scm 1192 */
													BgL_e1z00_2098 =
														BGl_errorz00zz__errorz00(BgL_procz00_4624,
														string_append_3
														(BGl_string3564z00zz__r4_strings_6_7z00,
															BGl_string3565z00zz__r4_strings_6_7z00,
															BGl_string3561z00zz__r4_strings_6_7z00),
														BgL_start1z00_234);
												}
											else
												{	/* Ieee/string.scm 1192 */
													if (
														((long) CINT(BgL_start1z00_234) >= BgL_l1z00_2094))
														{	/* Ieee/string.scm 1194 */
															BgL_e1z00_2098 =
																BGl_errorz00zz__errorz00(BgL_procz00_4624,
																string_append_3
																(BGl_string3566z00zz__r4_strings_6_7z00,
																	BGl_string3565z00zz__r4_strings_6_7z00,
																	BGl_string3561z00zz__r4_strings_6_7z00),
																BgL_start1z00_234);
														}
													else
														{	/* Ieee/string.scm 1194 */
															BgL_e1z00_2098 = BgL_start1z00_234;
														}
												}
										}
									else
										{	/* Ieee/string.scm 1190 */
											BgL_e1z00_2098 = BINT(((long) 0));
								}}
								{	/* Ieee/string.scm 1375 */
									obj_t BgL_e2z00_2099;

									{	/* Ieee/string.scm 1376 */
										obj_t BgL_procz00_4634;

										BgL_procz00_4634 = BGl_symbol3557z00zz__r4_strings_6_7z00;
										if (CBOOL(BgL_start2z00_236))
											{	/* Ieee/string.scm 1190 */
												if (((long) CINT(BgL_start2z00_236) < ((long) 0)))
													{	/* Ieee/string.scm 1192 */
														BgL_e2z00_2099 =
															BGl_errorz00zz__errorz00(BgL_procz00_4634,
															string_append_3
															(BGl_string3564z00zz__r4_strings_6_7z00,
																BGl_string3567z00zz__r4_strings_6_7z00,
																BGl_string3561z00zz__r4_strings_6_7z00),
															BgL_start2z00_236);
													}
												else
													{	/* Ieee/string.scm 1192 */
														if (
															((long) CINT(BgL_start2z00_236) >=
																BgL_l2z00_2095))
															{	/* Ieee/string.scm 1194 */
																BgL_e2z00_2099 =
																	BGl_errorz00zz__errorz00(BgL_procz00_4634,
																	string_append_3
																	(BGl_string3566z00zz__r4_strings_6_7z00,
																		BGl_string3567z00zz__r4_strings_6_7z00,
																		BGl_string3561z00zz__r4_strings_6_7z00),
																	BgL_start2z00_236);
															}
														else
															{	/* Ieee/string.scm 1194 */
																BgL_e2z00_2099 = BgL_start2z00_236;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1190 */
												BgL_e2z00_2099 = BINT(((long) 0));
									}}
									{	/* Ieee/string.scm 1376 */

										{
											long BgL_i1z00_2103;
											long BgL_i2z00_2104;

											BgL_i1z00_2103 =
												((long) CINT(BgL_b1z00_2096) - ((long) 1));
											BgL_i2z00_2104 =
												((long) CINT(BgL_b2z00_2097) - ((long) 1));
										BgL_zc3z04anonymousza31821ze3z87_2105:
											if ((BgL_i1z00_2103 < (long) CINT(BgL_e1z00_2098)))
												{	/* Ieee/string.scm 1380 */
													return ((bool_t) 1);
												}
											else
												{	/* Ieee/string.scm 1380 */
													if ((BgL_i2z00_2104 < (long) CINT(BgL_e2z00_2099)))
														{	/* Ieee/string.scm 1382 */
															return ((bool_t) 0);
														}
													else
														{	/* Ieee/string.scm 1382 */
															if (
																(toupper(STRING_REF(BgL_s1z00_232,
																			BgL_i1z00_2103)) ==
																	toupper(STRING_REF(BgL_s2z00_233,
																			BgL_i2z00_2104))))
																{
																	long BgL_i2z00_9597;
																	long BgL_i1z00_9595;

																	BgL_i1z00_9595 =
																		(BgL_i1z00_2103 - ((long) 1));
																	BgL_i2z00_9597 =
																		(BgL_i2z00_2104 - ((long) 1));
																	BgL_i2z00_2104 = BgL_i2z00_9597;
																	BgL_i1z00_2103 = BgL_i1z00_9595;
																	goto BgL_zc3z04anonymousza31821ze3z87_2105;
																}
															else
																{	/* Ieee/string.scm 1384 */
																	return ((bool_t) 0);
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



/* _string-natural-compare3 */
	obj_t BGl__stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00(obj_t
		BgL_env1194z00_245, obj_t BgL_opt1193z00_244)
	{
		{	/* Ieee/string.scm 1392 */
			{	/* Ieee/string.scm 1392 */
				obj_t BgL_g1195z00_2116;
				obj_t BgL_g1196z00_2117;

				BgL_g1195z00_2116 = VECTOR_REF(BgL_opt1193z00_244, ((long) 0));
				BgL_g1196z00_2117 = VECTOR_REF(BgL_opt1193z00_244, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1193z00_244))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 1392 */

							{	/* Ieee/string.scm 1392 */
								int BgL_res2793z00_4678;

								{	/* Ieee/string.scm 1392 */
									obj_t BgL_az00_4676;
									obj_t BgL_bz00_4677;

									if (STRINGP(BgL_g1195z00_2116))
										{	/* Ieee/string.scm 1392 */
											BgL_az00_4676 = BgL_g1195z00_2116;
										}
									else
										{
											obj_t BgL_auxz00_9607;

											BgL_auxz00_9607 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 56408)),
												BGl_string3587z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_g1195z00_2116);
											FAILURE(BgL_auxz00_9607, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_g1196z00_2117))
										{	/* Ieee/string.scm 1392 */
											BgL_bz00_4677 = BgL_g1196z00_2117;
										}
									else
										{
											obj_t BgL_auxz00_9613;

											BgL_auxz00_9613 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 56408)),
												BGl_string3587z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_g1196z00_2117);
											FAILURE(BgL_auxz00_9613, BFALSE, BFALSE);
										}
									{	/* Ieee/string.scm 1393 */
										obj_t BgL_tmpz00_9617;

										{	/* Ieee/string.scm 1393 */
											obj_t BgL_aux3424z00_5755;

											BgL_aux3424z00_5755 =
												BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_4676,
												BgL_bz00_4677, ((bool_t) 0), BINT(((long) 0)),
												BINT(((long) 0)));
											if (INTEGERP(BgL_aux3424z00_5755))
												{	/* Ieee/string.scm 1393 */
													BgL_tmpz00_9617 = BgL_aux3424z00_5755;
												}
											else
												{
													obj_t BgL_auxz00_9623;

													BgL_auxz00_9623 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 56482)),
														BGl_string3587z00zz__r4_strings_6_7z00,
														BGl_string3480z00zz__r4_strings_6_7z00,
														BgL_aux3424z00_5755);
													FAILURE(BgL_auxz00_9623, BFALSE, BFALSE);
										}}
										BgL_res2793z00_4678 = CINT(BgL_tmpz00_9617);
								}}
								return BINT(BgL_res2793z00_4678);
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/string.scm 1392 */
							obj_t BgL_start1z00_2123;

							BgL_start1z00_2123 = VECTOR_REF(BgL_opt1193z00_244, ((long) 2));
							{	/* Ieee/string.scm 1392 */

								{	/* Ieee/string.scm 1392 */
									int BgL_res2794z00_4681;

									{	/* Ieee/string.scm 1392 */
										obj_t BgL_az00_4679;
										obj_t BgL_bz00_4680;

										if (STRINGP(BgL_g1195z00_2116))
											{	/* Ieee/string.scm 1392 */
												BgL_az00_4679 = BgL_g1195z00_2116;
											}
										else
											{
												obj_t BgL_auxz00_9632;

												BgL_auxz00_9632 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 56408)),
													BGl_string3587z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_g1195z00_2116);
												FAILURE(BgL_auxz00_9632, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_g1196z00_2117))
											{	/* Ieee/string.scm 1392 */
												BgL_bz00_4680 = BgL_g1196z00_2117;
											}
										else
											{
												obj_t BgL_auxz00_9638;

												BgL_auxz00_9638 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 56408)),
													BGl_string3587z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_g1196z00_2117);
												FAILURE(BgL_auxz00_9638, BFALSE, BFALSE);
											}
										{	/* Ieee/string.scm 1393 */
											obj_t BgL_tmpz00_9642;

											{	/* Ieee/string.scm 1393 */
												obj_t BgL_aux3430z00_5761;

												BgL_aux3430z00_5761 =
													BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_4679,
													BgL_bz00_4680, ((bool_t) 0), BgL_start1z00_2123,
													BINT(((long) 0)));
												if (INTEGERP(BgL_aux3430z00_5761))
													{	/* Ieee/string.scm 1393 */
														BgL_tmpz00_9642 = BgL_aux3430z00_5761;
													}
												else
													{
														obj_t BgL_auxz00_9647;

														BgL_auxz00_9647 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 56482)),
															BGl_string3587z00zz__r4_strings_6_7z00,
															BGl_string3480z00zz__r4_strings_6_7z00,
															BgL_aux3430z00_5761);
														FAILURE(BgL_auxz00_9647, BFALSE, BFALSE);
											}}
											BgL_res2794z00_4681 = CINT(BgL_tmpz00_9642);
									}}
									return BINT(BgL_res2794z00_4681);
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/string.scm 1392 */
							obj_t BgL_start1z00_2125;

							BgL_start1z00_2125 = VECTOR_REF(BgL_opt1193z00_244, ((long) 2));
							{	/* Ieee/string.scm 1392 */
								obj_t BgL_start2z00_2126;

								BgL_start2z00_2126 = VECTOR_REF(BgL_opt1193z00_244, ((long) 3));
								{	/* Ieee/string.scm 1392 */

									{	/* Ieee/string.scm 1392 */
										int BgL_res2795z00_4684;

										{	/* Ieee/string.scm 1392 */
											obj_t BgL_az00_4682;
											obj_t BgL_bz00_4683;

											if (STRINGP(BgL_g1195z00_2116))
												{	/* Ieee/string.scm 1392 */
													BgL_az00_4682 = BgL_g1195z00_2116;
												}
											else
												{
													obj_t BgL_auxz00_9657;

													BgL_auxz00_9657 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 56408)),
														BGl_string3587z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_g1195z00_2116);
													FAILURE(BgL_auxz00_9657, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_g1196z00_2117))
												{	/* Ieee/string.scm 1392 */
													BgL_bz00_4683 = BgL_g1196z00_2117;
												}
											else
												{
													obj_t BgL_auxz00_9663;

													BgL_auxz00_9663 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 56408)),
														BGl_string3587z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_g1196z00_2117);
													FAILURE(BgL_auxz00_9663, BFALSE, BFALSE);
												}
											{	/* Ieee/string.scm 1393 */
												obj_t BgL_tmpz00_9667;

												{	/* Ieee/string.scm 1393 */
													obj_t BgL_aux3436z00_5767;

													BgL_aux3436z00_5767 =
														BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_4682,
														BgL_bz00_4683, ((bool_t) 0), BgL_start1z00_2125,
														BgL_start2z00_2126);
													if (INTEGERP(BgL_aux3436z00_5767))
														{	/* Ieee/string.scm 1393 */
															BgL_tmpz00_9667 = BgL_aux3436z00_5767;
														}
													else
														{
															obj_t BgL_auxz00_9671;

															BgL_auxz00_9671 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 56482)),
																BGl_string3587z00zz__r4_strings_6_7z00,
																BGl_string3480z00zz__r4_strings_6_7z00,
																BgL_aux3436z00_5767);
															FAILURE(BgL_auxz00_9671, BFALSE, BFALSE);
												}}
												BgL_res2795z00_4684 = CINT(BgL_tmpz00_9667);
										}}
										return BINT(BgL_res2795z00_4684);
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



/* string-natural-compare3 */
	BGL_EXPORTED_DEF int
		BGl_stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00(obj_t BgL_az00_240,
		obj_t BgL_bz00_241, obj_t BgL_start1z00_242, obj_t BgL_start2z00_243)
	{
		{	/* Ieee/string.scm 1392 */
			return
				CINT(BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_240, BgL_bz00_241,
					((bool_t) 0), BgL_start1z00_242, BgL_start2z00_243));
		}

	}



/* _string-natural-compare3-ci */
	obj_t BGl__stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00(obj_t
		BgL_env1200z00_251, obj_t BgL_opt1199z00_250)
	{
		{	/* Ieee/string.scm 1398 */
			{	/* Ieee/string.scm 1398 */
				obj_t BgL_g1201z00_2127;
				obj_t BgL_g1202z00_2128;

				BgL_g1201z00_2127 = VECTOR_REF(BgL_opt1199z00_250, ((long) 0));
				BgL_g1202z00_2128 = VECTOR_REF(BgL_opt1199z00_250, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1199z00_250))
					{
					case ((long) 2):

						{	/* Ieee/string.scm 1398 */

							{	/* Ieee/string.scm 1398 */
								int BgL_res2796z00_4687;

								{	/* Ieee/string.scm 1398 */
									obj_t BgL_az00_4685;
									obj_t BgL_bz00_4686;

									if (STRINGP(BgL_g1201z00_2127))
										{	/* Ieee/string.scm 1398 */
											BgL_az00_4685 = BgL_g1201z00_2127;
										}
									else
										{
											obj_t BgL_auxz00_9685;

											BgL_auxz00_9685 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 56739)),
												BGl_string3588z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_g1201z00_2127);
											FAILURE(BgL_auxz00_9685, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_g1202z00_2128))
										{	/* Ieee/string.scm 1398 */
											BgL_bz00_4686 = BgL_g1202z00_2128;
										}
									else
										{
											obj_t BgL_auxz00_9691;

											BgL_auxz00_9691 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 56739)),
												BGl_string3588z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_g1202z00_2128);
											FAILURE(BgL_auxz00_9691, BFALSE, BFALSE);
										}
									{	/* Ieee/string.scm 1399 */
										obj_t BgL_tmpz00_9695;

										{	/* Ieee/string.scm 1399 */
											obj_t BgL_aux3442z00_5773;

											BgL_aux3442z00_5773 =
												BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_4685,
												BgL_bz00_4686, ((bool_t) 1), BINT(((long) 0)),
												BINT(((long) 0)));
											if (INTEGERP(BgL_aux3442z00_5773))
												{	/* Ieee/string.scm 1399 */
													BgL_tmpz00_9695 = BgL_aux3442z00_5773;
												}
											else
												{
													obj_t BgL_auxz00_9701;

													BgL_auxz00_9701 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 56816)),
														BGl_string3588z00zz__r4_strings_6_7z00,
														BGl_string3480z00zz__r4_strings_6_7z00,
														BgL_aux3442z00_5773);
													FAILURE(BgL_auxz00_9701, BFALSE, BFALSE);
										}}
										BgL_res2796z00_4687 = CINT(BgL_tmpz00_9695);
								}}
								return BINT(BgL_res2796z00_4687);
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/string.scm 1398 */
							obj_t BgL_start1z00_2134;

							BgL_start1z00_2134 = VECTOR_REF(BgL_opt1199z00_250, ((long) 2));
							{	/* Ieee/string.scm 1398 */

								{	/* Ieee/string.scm 1398 */
									int BgL_res2797z00_4690;

									{	/* Ieee/string.scm 1398 */
										obj_t BgL_az00_4688;
										obj_t BgL_bz00_4689;

										if (STRINGP(BgL_g1201z00_2127))
											{	/* Ieee/string.scm 1398 */
												BgL_az00_4688 = BgL_g1201z00_2127;
											}
										else
											{
												obj_t BgL_auxz00_9710;

												BgL_auxz00_9710 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 56739)),
													BGl_string3588z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_g1201z00_2127);
												FAILURE(BgL_auxz00_9710, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_g1202z00_2128))
											{	/* Ieee/string.scm 1398 */
												BgL_bz00_4689 = BgL_g1202z00_2128;
											}
										else
											{
												obj_t BgL_auxz00_9716;

												BgL_auxz00_9716 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 56739)),
													BGl_string3588z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_g1202z00_2128);
												FAILURE(BgL_auxz00_9716, BFALSE, BFALSE);
											}
										{	/* Ieee/string.scm 1399 */
											obj_t BgL_tmpz00_9720;

											{	/* Ieee/string.scm 1399 */
												obj_t BgL_aux3448z00_5779;

												BgL_aux3448z00_5779 =
													BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_4688,
													BgL_bz00_4689, ((bool_t) 1), BgL_start1z00_2134,
													BINT(((long) 0)));
												if (INTEGERP(BgL_aux3448z00_5779))
													{	/* Ieee/string.scm 1399 */
														BgL_tmpz00_9720 = BgL_aux3448z00_5779;
													}
												else
													{
														obj_t BgL_auxz00_9725;

														BgL_auxz00_9725 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3476z00zz__r4_strings_6_7z00,
															BINT(((long) 56816)),
															BGl_string3588z00zz__r4_strings_6_7z00,
															BGl_string3480z00zz__r4_strings_6_7z00,
															BgL_aux3448z00_5779);
														FAILURE(BgL_auxz00_9725, BFALSE, BFALSE);
											}}
											BgL_res2797z00_4690 = CINT(BgL_tmpz00_9720);
									}}
									return BINT(BgL_res2797z00_4690);
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/string.scm 1398 */
							obj_t BgL_start1z00_2136;

							BgL_start1z00_2136 = VECTOR_REF(BgL_opt1199z00_250, ((long) 2));
							{	/* Ieee/string.scm 1398 */
								obj_t BgL_start2z00_2137;

								BgL_start2z00_2137 = VECTOR_REF(BgL_opt1199z00_250, ((long) 3));
								{	/* Ieee/string.scm 1398 */

									{	/* Ieee/string.scm 1398 */
										int BgL_res2798z00_4693;

										{	/* Ieee/string.scm 1398 */
											obj_t BgL_az00_4691;
											obj_t BgL_bz00_4692;

											if (STRINGP(BgL_g1201z00_2127))
												{	/* Ieee/string.scm 1398 */
													BgL_az00_4691 = BgL_g1201z00_2127;
												}
											else
												{
													obj_t BgL_auxz00_9735;

													BgL_auxz00_9735 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 56739)),
														BGl_string3588z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_g1201z00_2127);
													FAILURE(BgL_auxz00_9735, BFALSE, BFALSE);
												}
											if (STRINGP(BgL_g1202z00_2128))
												{	/* Ieee/string.scm 1398 */
													BgL_bz00_4692 = BgL_g1202z00_2128;
												}
											else
												{
													obj_t BgL_auxz00_9741;

													BgL_auxz00_9741 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 56739)),
														BGl_string3588z00zz__r4_strings_6_7z00,
														BGl_string3478z00zz__r4_strings_6_7z00,
														BgL_g1202z00_2128);
													FAILURE(BgL_auxz00_9741, BFALSE, BFALSE);
												}
											{	/* Ieee/string.scm 1399 */
												obj_t BgL_tmpz00_9745;

												{	/* Ieee/string.scm 1399 */
													obj_t BgL_aux3454z00_5785;

													BgL_aux3454z00_5785 =
														BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_4691,
														BgL_bz00_4692, ((bool_t) 1), BgL_start1z00_2136,
														BgL_start2z00_2137);
													if (INTEGERP(BgL_aux3454z00_5785))
														{	/* Ieee/string.scm 1399 */
															BgL_tmpz00_9745 = BgL_aux3454z00_5785;
														}
													else
														{
															obj_t BgL_auxz00_9749;

															BgL_auxz00_9749 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3476z00zz__r4_strings_6_7z00,
																BINT(((long) 56816)),
																BGl_string3588z00zz__r4_strings_6_7z00,
																BGl_string3480z00zz__r4_strings_6_7z00,
																BgL_aux3454z00_5785);
															FAILURE(BgL_auxz00_9749, BFALSE, BFALSE);
												}}
												BgL_res2798z00_4693 = CINT(BgL_tmpz00_9745);
										}}
										return BINT(BgL_res2798z00_4693);
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



/* string-natural-compare3-ci */
	BGL_EXPORTED_DEF int
		BGl_stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00(obj_t
		BgL_az00_246, obj_t BgL_bz00_247, obj_t BgL_start1z00_248,
		obj_t BgL_start2z00_249)
	{
		{	/* Ieee/string.scm 1398 */
			return
				CINT(BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_246, BgL_bz00_247,
					((bool_t) 1), BgL_start1z00_248, BgL_start2z00_249));
		}

	}



/* strnatcmp */
	obj_t BGl_strnatcmpz00zz__r4_strings_6_7z00(obj_t BgL_az00_252,
		obj_t BgL_bz00_253, bool_t BgL_foldcasez00_254, obj_t BgL_start1z00_255,
		obj_t BgL_start2z00_256)
	{
		{	/* Ieee/string.scm 1404 */
			{
				obj_t BgL_iaz00_2139;
				obj_t BgL_ibz00_2140;

				BgL_iaz00_2139 = BgL_start1z00_255;
				BgL_ibz00_2140 = BgL_start2z00_256;
			BgL_zc3z04anonymousza31833ze3z87_2141:
				{	/* Ieee/string.scm 1407 */
					unsigned char BgL_caz00_2142;
					unsigned char BgL_cbz00_2143;

					{	/* Ieee/string.scm 1407 */
						obj_t BgL_iz00_4694;

						BgL_iz00_4694 = BgL_iaz00_2139;
						if (((long) CINT(BgL_iz00_4694) >= STRING_LENGTH(BgL_az00_252)))
							{	/* Ieee/string.scm 1494 */
								BgL_caz00_2142 = ((unsigned char) '\000');
							}
						else
							{	/* Ieee/string.scm 1494 */
								BgL_caz00_2142 =
									STRING_REF(BgL_az00_252, (long) CINT(BgL_iz00_4694));
					}}
					{	/* Ieee/string.scm 1408 */
						obj_t BgL_iz00_4705;

						BgL_iz00_4705 = BgL_ibz00_2140;
						if (((long) CINT(BgL_iz00_4705) >= STRING_LENGTH(BgL_bz00_253)))
							{	/* Ieee/string.scm 1494 */
								BgL_cbz00_2143 = ((unsigned char) '\000');
							}
						else
							{	/* Ieee/string.scm 1494 */
								BgL_cbz00_2143 =
									STRING_REF(BgL_bz00_253, (long) CINT(BgL_iz00_4705));
					}}
					{

						{	/* Ieee/string.scm 1410 */
							bool_t BgL_test4326z00_9771;

							{	/* Ieee/string.scm 1410 */
								bool_t BgL_res2805z00_4717;

								BgL_res2805z00_4717 = isspace(BgL_caz00_2142);
								BgL_test4326z00_9771 = BgL_res2805z00_4717;
							}
							if (BgL_test4326z00_9771)
								{	/* Ieee/string.scm 1410 */
									BgL_iaz00_2139 = ADDFX(BgL_iaz00_2139, BINT(((long) 1)));
									{	/* Ieee/string.scm 1412 */
										long BgL_iz00_4720;

										BgL_iz00_4720 = (long) CINT(BgL_iaz00_2139);
										if ((BgL_iz00_4720 >= STRING_LENGTH(BgL_az00_252)))
											{	/* Ieee/string.scm 1494 */
												BgL_caz00_2142 = ((unsigned char) '\000');
											}
										else
											{	/* Ieee/string.scm 1494 */
												BgL_caz00_2142 =
													STRING_REF(BgL_az00_252, BgL_iz00_4720);
											}
									}
								}
							else
								{	/* Ieee/string.scm 1410 */
									BFALSE;
								}
						}
					}
					{

						{	/* Ieee/string.scm 1414 */
							bool_t BgL_test4328z00_9780;

							{	/* Ieee/string.scm 1414 */
								bool_t BgL_res2810z00_4732;

								BgL_res2810z00_4732 = isspace(BgL_cbz00_2143);
								BgL_test4328z00_9780 = BgL_res2810z00_4732;
							}
							if (BgL_test4328z00_9780)
								{	/* Ieee/string.scm 1414 */
									BgL_ibz00_2140 = ADDFX(BgL_ibz00_2140, BINT(((long) 1)));
									{	/* Ieee/string.scm 1416 */
										long BgL_iz00_4735;

										BgL_iz00_4735 = (long) CINT(BgL_ibz00_2140);
										if ((BgL_iz00_4735 >= STRING_LENGTH(BgL_bz00_253)))
											{	/* Ieee/string.scm 1494 */
												BgL_cbz00_2143 = ((unsigned char) '\000');
											}
										else
											{	/* Ieee/string.scm 1494 */
												BgL_cbz00_2143 =
													STRING_REF(BgL_bz00_253, BgL_iz00_4735);
											}
									}
								}
							else
								{	/* Ieee/string.scm 1414 */
									BFALSE;
								}
						}
					}
					{	/* Ieee/string.scm 1418 */
						bool_t BgL_test4330z00_9789;

						{	/* Ieee/string.scm 1418 */
							bool_t BgL_test4331z00_9790;

							{	/* Ieee/string.scm 1418 */
								bool_t BgL_res2815z00_4747;

								BgL_res2815z00_4747 = isdigit(BgL_caz00_2142);
								BgL_test4331z00_9790 = BgL_res2815z00_4747;
							}
							if (BgL_test4331z00_9790)
								{	/* Ieee/string.scm 1418 */
									bool_t BgL_res2816z00_4749;

									BgL_res2816z00_4749 = isdigit(BgL_cbz00_2143);
									BgL_test4330z00_9789 = BgL_res2816z00_4749;
								}
							else
								{	/* Ieee/string.scm 1418 */
									BgL_test4330z00_9789 = ((bool_t) 0);
								}
						}
						if (BgL_test4330z00_9789)
							{	/* Ieee/string.scm 1419 */
								bool_t BgL_test4332z00_9793;

								if ((BgL_caz00_2142 == ((unsigned char) '0')))
									{	/* Ieee/string.scm 1419 */
										BgL_test4332z00_9793 =
											(BgL_cbz00_2143 == ((unsigned char) '0'));
									}
								else
									{	/* Ieee/string.scm 1419 */
										BgL_test4332z00_9793 = ((bool_t) 0);
									}
								if (BgL_test4332z00_9793)
									{	/* Ieee/string.scm 1420 */
										long BgL_arg1842z00_2156;
										long BgL_arg1845z00_2157;

										BgL_arg1842z00_2156 =
											((long) CINT(BgL_iaz00_2139) + ((long) 1));
										BgL_arg1845z00_2157 =
											((long) CINT(BgL_ibz00_2140) + ((long) 1));
										{
											obj_t BgL_ibz00_9803;
											obj_t BgL_iaz00_9801;

											BgL_iaz00_9801 = BINT(BgL_arg1842z00_2156);
											BgL_ibz00_9803 = BINT(BgL_arg1845z00_2157);
											BgL_ibz00_2140 = BgL_ibz00_9803;
											BgL_iaz00_2139 = BgL_iaz00_9801;
											goto BgL_zc3z04anonymousza31833ze3z87_2141;
										}
									}
								else
									{	/* Ieee/string.scm 1421 */
										obj_t BgL_resultz00_2158;

										{	/* Ieee/string.scm 1421 */
											bool_t BgL_test4334z00_9805;

											if ((BgL_caz00_2142 == ((unsigned char) '0')))
												{	/* Ieee/string.scm 1421 */
													BgL_test4334z00_9805 = ((bool_t) 1);
												}
											else
												{	/* Ieee/string.scm 1421 */
													BgL_test4334z00_9805 =
														(BgL_cbz00_2143 == ((unsigned char) '0'));
												}
											if (BgL_test4334z00_9805)
												{	/* Ieee/string.scm 1421 */
													BgL_resultz00_2158 =
														BGl_comparezd2leftzd2zz__r4_strings_6_7z00
														(BgL_az00_252, BgL_iaz00_2139, BgL_bz00_253,
														BgL_ibz00_2140);
												}
											else
												{	/* Ieee/string.scm 1421 */
													BgL_resultz00_2158 =
														BGl_comparezd2rightzd2zz__r4_strings_6_7z00
														(BgL_az00_252, BgL_iaz00_2139, BgL_bz00_253,
														BgL_ibz00_2140);
												}
										}
										if (INTEGERP(BgL_resultz00_2158))
											{	/* Ieee/string.scm 1426 */
												long BgL_arg1847z00_2160;
												long BgL_arg1848z00_2161;

												BgL_arg1847z00_2160 =
													(
													(long) CINT(BgL_iaz00_2139) +
													(long) CINT(BgL_resultz00_2158));
												BgL_arg1848z00_2161 =
													(
													(long) CINT(BgL_ibz00_2140) +
													(long) CINT(BgL_resultz00_2158));
												{
													obj_t BgL_ibz00_9821;
													obj_t BgL_iaz00_9819;

													BgL_iaz00_9819 = BINT(BgL_arg1847z00_2160);
													BgL_ibz00_9821 = BINT(BgL_arg1848z00_2161);
													BgL_ibz00_2140 = BgL_ibz00_9821;
													BgL_iaz00_2139 = BgL_iaz00_9819;
													goto BgL_zc3z04anonymousza31833ze3z87_2141;
												}
											}
										else
											{	/* Ieee/string.scm 1425 */
												if (CBOOL(BgL_resultz00_2158))
													{	/* Ieee/string.scm 1427 */
														return BINT(((long) 1));
													}
												else
													{	/* Ieee/string.scm 1427 */
														return BINT(((long) -1));
							}}}}
						else
							{	/* Ieee/string.scm 1431 */
								bool_t BgL_test4338z00_9827;

								if ((BgL_caz00_2142 == ((unsigned char) '\000')))
									{	/* Ieee/string.scm 1431 */
										BgL_test4338z00_9827 =
											(BgL_cbz00_2143 == ((unsigned char) '\000'));
									}
								else
									{	/* Ieee/string.scm 1431 */
										BgL_test4338z00_9827 = ((bool_t) 0);
									}
								if (BgL_test4338z00_9827)
									{	/* Ieee/string.scm 1431 */
										return BINT(((long) 0));
									}
								else
									{	/* Ieee/string.scm 1433 */
										bool_t BgL_test4340z00_9832;

										if (BgL_foldcasez00_254)
											{	/* Ieee/string.scm 1433 */
												BgL_caz00_2142 = toupper(BgL_caz00_2142);
												BgL_cbz00_2143 = toupper(BgL_cbz00_2143);
												BgL_test4340z00_9832 = ((bool_t) 0);
											}
										else
											{	/* Ieee/string.scm 1433 */
												BgL_test4340z00_9832 = ((bool_t) 0);
											}
										if (BgL_test4340z00_9832)
											{	/* Ieee/string.scm 1433 */
												return BGl_symbol3589z00zz__r4_strings_6_7z00;
											}
										else
											{	/* Ieee/string.scm 1433 */
												if ((BgL_caz00_2142 < BgL_cbz00_2143))
													{	/* Ieee/string.scm 1438 */
														return BINT(((long) -1));
													}
												else
													{	/* Ieee/string.scm 1438 */
														if ((BgL_caz00_2142 > BgL_cbz00_2143))
															{	/* Ieee/string.scm 1440 */
																return BINT(((long) 1));
															}
														else
															{	/* Ieee/string.scm 1443 */
																long BgL_arg1856z00_2171;
																long BgL_arg1857z00_2172;

																BgL_arg1856z00_2171 =
																	((long) CINT(BgL_iaz00_2139) + ((long) 1));
																BgL_arg1857z00_2172 =
																	((long) CINT(BgL_ibz00_2140) + ((long) 1));
																{
																	obj_t BgL_ibz00_9848;
																	obj_t BgL_iaz00_9846;

																	BgL_iaz00_9846 = BINT(BgL_arg1856z00_2171);
																	BgL_ibz00_9848 = BINT(BgL_arg1857z00_2172);
																	BgL_ibz00_2140 = BgL_ibz00_9848;
																	BgL_iaz00_2139 = BgL_iaz00_9846;
																	goto BgL_zc3z04anonymousza31833ze3z87_2141;
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



/* compare-right */
	obj_t BGl_comparezd2rightzd2zz__r4_strings_6_7z00(obj_t BgL_az00_257,
		obj_t BgL_iaz00_258, obj_t BgL_bz00_259, obj_t BgL_ibz00_260)
	{
		{	/* Ieee/string.scm 1448 */
			{
				obj_t BgL_biasz00_2177;
				long BgL_iz00_2178;

				BgL_biasz00_2177 = BUNSPEC;
				BgL_iz00_2178 = ((long) 0);
			BgL_zc3z04anonymousza31858ze3z87_2179:
				{	/* Ieee/string.scm 1451 */
					unsigned char BgL_caz00_2180;
					unsigned char BgL_cbz00_2181;

					{	/* Ieee/string.scm 1451 */
						long BgL_arg1878z00_2203;

						BgL_arg1878z00_2203 = (BgL_iz00_2178 + (long) CINT(BgL_iaz00_258));
						if ((BgL_arg1878z00_2203 >= STRING_LENGTH(BgL_az00_257)))
							{	/* Ieee/string.scm 1494 */
								BgL_caz00_2180 = ((unsigned char) '\000');
							}
						else
							{	/* Ieee/string.scm 1494 */
								BgL_caz00_2180 = STRING_REF(BgL_az00_257, BgL_arg1878z00_2203);
							}
					}
					{	/* Ieee/string.scm 1452 */
						long BgL_arg1879z00_2204;

						BgL_arg1879z00_2204 = (BgL_iz00_2178 + (long) CINT(BgL_ibz00_260));
						if ((BgL_arg1879z00_2204 >= STRING_LENGTH(BgL_bz00_259)))
							{	/* Ieee/string.scm 1494 */
								BgL_cbz00_2181 = ((unsigned char) '\000');
							}
						else
							{	/* Ieee/string.scm 1494 */
								BgL_cbz00_2181 = STRING_REF(BgL_bz00_259, BgL_arg1879z00_2204);
							}
					}
					{	/* Ieee/string.scm 1454 */
						bool_t BgL_test4346z00_9862;

						{	/* Ieee/string.scm 1454 */
							bool_t BgL_test4347z00_9863;

							{	/* Ieee/string.scm 1454 */
								bool_t BgL_res2842z00_4820;

								BgL_res2842z00_4820 = isdigit(BgL_caz00_2180);
								BgL_test4347z00_9863 = BgL_res2842z00_4820;
							}
							if (BgL_test4347z00_9863)
								{	/* Ieee/string.scm 1454 */
									BgL_test4346z00_9862 = ((bool_t) 0);
								}
							else
								{	/* Ieee/string.scm 1454 */
									bool_t BgL_test4348z00_9865;

									{	/* Ieee/string.scm 1454 */
										bool_t BgL_res2843z00_4822;

										BgL_res2843z00_4822 = isdigit(BgL_cbz00_2181);
										BgL_test4348z00_9865 = BgL_res2843z00_4822;
									}
									if (BgL_test4348z00_9865)
										{	/* Ieee/string.scm 1454 */
											BgL_test4346z00_9862 = ((bool_t) 0);
										}
									else
										{	/* Ieee/string.scm 1454 */
											BgL_test4346z00_9862 = ((bool_t) 1);
										}
								}
						}
						if (BgL_test4346z00_9862)
							{	/* Ieee/string.scm 1454 */
								if ((BgL_biasz00_2177 == BUNSPEC))
									{	/* Ieee/string.scm 1455 */
										return BINT(BgL_iz00_2178);
									}
								else
									{	/* Ieee/string.scm 1455 */
										return BgL_biasz00_2177;
									}
							}
						else
							{	/* Ieee/string.scm 1456 */
								bool_t BgL_test4350z00_9870;

								{	/* Ieee/string.scm 1456 */
									bool_t BgL_res2844z00_4824;

									BgL_res2844z00_4824 = isdigit(BgL_caz00_2180);
									BgL_test4350z00_9870 = BgL_res2844z00_4824;
								}
								if (BgL_test4350z00_9870)
									{	/* Ieee/string.scm 1458 */
										bool_t BgL_test4351z00_9872;

										{	/* Ieee/string.scm 1458 */
											bool_t BgL_res2845z00_4826;

											BgL_res2845z00_4826 = isdigit(BgL_cbz00_2181);
											BgL_test4351z00_9872 = BgL_res2845z00_4826;
										}
										if (BgL_test4351z00_9872)
											{	/* Ieee/string.scm 1458 */
												if ((BgL_caz00_2180 < BgL_cbz00_2181))
													{
														long BgL_iz00_9879;
														obj_t BgL_biasz00_9876;

														if ((BgL_biasz00_2177 == BUNSPEC))
															{	/* Ieee/string.scm 1461 */
																BgL_biasz00_9876 = BFALSE;
															}
														else
															{	/* Ieee/string.scm 1461 */
																BgL_biasz00_9876 = BgL_biasz00_2177;
															}
														BgL_iz00_9879 = (BgL_iz00_2178 + ((long) 1));
														BgL_iz00_2178 = BgL_iz00_9879;
														BgL_biasz00_2177 = BgL_biasz00_9876;
														goto BgL_zc3z04anonymousza31858ze3z87_2179;
													}
												else
													{	/* Ieee/string.scm 1460 */
														if ((BgL_caz00_2180 > BgL_cbz00_2181))
															{
																long BgL_iz00_9886;
																obj_t BgL_biasz00_9883;

																if ((BgL_biasz00_2177 == BUNSPEC))
																	{	/* Ieee/string.scm 1463 */
																		BgL_biasz00_9883 = BTRUE;
																	}
																else
																	{	/* Ieee/string.scm 1463 */
																		BgL_biasz00_9883 = BgL_biasz00_2177;
																	}
																BgL_iz00_9886 = (BgL_iz00_2178 + ((long) 1));
																BgL_iz00_2178 = BgL_iz00_9886;
																BgL_biasz00_2177 = BgL_biasz00_9883;
																goto BgL_zc3z04anonymousza31858ze3z87_2179;
															}
														else
															{	/* Ieee/string.scm 1464 */
																bool_t BgL_test4356z00_9888;

																if (
																	(BgL_caz00_2180 == ((unsigned char) '\000')))
																	{	/* Ieee/string.scm 1464 */
																		BgL_test4356z00_9888 =
																			(BgL_cbz00_2181 ==
																			((unsigned char) '\000'));
																	}
																else
																	{	/* Ieee/string.scm 1464 */
																		BgL_test4356z00_9888 = ((bool_t) 0);
																	}
																if (BgL_test4356z00_9888)
																	{	/* Ieee/string.scm 1464 */
																		if ((BgL_biasz00_2177 == BUNSPEC))
																			{	/* Ieee/string.scm 1465 */
																				return BINT(BgL_iz00_2178);
																			}
																		else
																			{	/* Ieee/string.scm 1465 */
																				return BgL_biasz00_2177;
																			}
																	}
																else
																	{
																		long BgL_iz00_9895;

																		BgL_iz00_9895 =
																			(BgL_iz00_2178 + ((long) 1));
																		BgL_iz00_2178 = BgL_iz00_9895;
																		goto BgL_zc3z04anonymousza31858ze3z87_2179;
																	}
															}
													}
											}
										else
											{	/* Ieee/string.scm 1458 */
												return BTRUE;
											}
									}
								else
									{	/* Ieee/string.scm 1456 */
										return BFALSE;
									}
							}
					}
				}
			}
		}

	}



/* compare-left */
	obj_t BGl_comparezd2leftzd2zz__r4_strings_6_7z00(obj_t BgL_az00_261,
		obj_t BgL_iaz00_262, obj_t BgL_bz00_263, obj_t BgL_ibz00_264)
	{
		{	/* Ieee/string.scm 1472 */
			{
				long BgL_iz00_2207;

				BgL_iz00_2207 = ((long) 0);
			BgL_zc3z04anonymousza31880ze3z87_2208:
				{	/* Ieee/string.scm 1474 */
					unsigned char BgL_caz00_2209;
					unsigned char BgL_cbz00_2210;

					{	/* Ieee/string.scm 1474 */
						long BgL_arg1889z00_2221;

						BgL_arg1889z00_2221 = ((long) CINT(BgL_iaz00_262) + BgL_iz00_2207);
						if ((BgL_arg1889z00_2221 >= STRING_LENGTH(BgL_az00_261)))
							{	/* Ieee/string.scm 1494 */
								BgL_caz00_2209 = ((unsigned char) '\000');
							}
						else
							{	/* Ieee/string.scm 1494 */
								BgL_caz00_2209 = STRING_REF(BgL_az00_261, BgL_arg1889z00_2221);
							}
					}
					{	/* Ieee/string.scm 1475 */
						long BgL_arg1891z00_2222;

						BgL_arg1891z00_2222 = ((long) CINT(BgL_ibz00_264) + BgL_iz00_2207);
						if ((BgL_arg1891z00_2222 >= STRING_LENGTH(BgL_bz00_263)))
							{	/* Ieee/string.scm 1494 */
								BgL_cbz00_2210 = ((unsigned char) '\000');
							}
						else
							{	/* Ieee/string.scm 1494 */
								BgL_cbz00_2210 = STRING_REF(BgL_bz00_263, BgL_arg1891z00_2222);
							}
					}
					{	/* Ieee/string.scm 1477 */
						bool_t BgL_test4361z00_9909;

						{	/* Ieee/string.scm 1477 */
							bool_t BgL_test4362z00_9910;

							{	/* Ieee/string.scm 1477 */
								bool_t BgL_res2861z00_4872;

								BgL_res2861z00_4872 = isdigit(BgL_caz00_2209);
								BgL_test4362z00_9910 = BgL_res2861z00_4872;
							}
							if (BgL_test4362z00_9910)
								{	/* Ieee/string.scm 1477 */
									BgL_test4361z00_9909 = ((bool_t) 0);
								}
							else
								{	/* Ieee/string.scm 1477 */
									bool_t BgL_test4363z00_9912;

									{	/* Ieee/string.scm 1477 */
										bool_t BgL_res2862z00_4874;

										BgL_res2862z00_4874 = isdigit(BgL_cbz00_2210);
										BgL_test4363z00_9912 = BgL_res2862z00_4874;
									}
									if (BgL_test4363z00_9912)
										{	/* Ieee/string.scm 1477 */
											BgL_test4361z00_9909 = ((bool_t) 0);
										}
									else
										{	/* Ieee/string.scm 1477 */
											BgL_test4361z00_9909 = ((bool_t) 1);
										}
								}
						}
						if (BgL_test4361z00_9909)
							{	/* Ieee/string.scm 1477 */
								return BINT(BgL_iz00_2207);
							}
						else
							{	/* Ieee/string.scm 1479 */
								bool_t BgL_test4364z00_9915;

								{	/* Ieee/string.scm 1479 */
									bool_t BgL_res2863z00_4876;

									BgL_res2863z00_4876 = isdigit(BgL_caz00_2209);
									BgL_test4364z00_9915 = BgL_res2863z00_4876;
								}
								if (BgL_test4364z00_9915)
									{	/* Ieee/string.scm 1481 */
										bool_t BgL_test4365z00_9917;

										{	/* Ieee/string.scm 1481 */
											bool_t BgL_res2864z00_4878;

											BgL_res2864z00_4878 = isdigit(BgL_cbz00_2210);
											BgL_test4365z00_9917 = BgL_res2864z00_4878;
										}
										if (BgL_test4365z00_9917)
											{	/* Ieee/string.scm 1481 */
												if ((BgL_caz00_2209 < BgL_cbz00_2210))
													{	/* Ieee/string.scm 1483 */
														return BFALSE;
													}
												else
													{	/* Ieee/string.scm 1483 */
														if ((BgL_caz00_2209 > BgL_cbz00_2210))
															{	/* Ieee/string.scm 1485 */
																return BTRUE;
															}
														else
															{
																long BgL_iz00_9923;

																BgL_iz00_9923 = (BgL_iz00_2207 + ((long) 1));
																BgL_iz00_2207 = BgL_iz00_9923;
																goto BgL_zc3z04anonymousza31880ze3z87_2208;
															}
													}
											}
										else
											{	/* Ieee/string.scm 1481 */
												return BTRUE;
											}
									}
								else
									{	/* Ieee/string.scm 1479 */
										return BFALSE;
									}
							}
					}
				}
			}
		}

	}



/* hex-string-ref */
	obj_t BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(obj_t BgL_strz00_267,
		long BgL_iz00_268)
	{
		{	/* Ieee/string.scm 1501 */
			{	/* Ieee/string.scm 1502 */
				unsigned char BgL_nz00_2227;

				BgL_nz00_2227 = STRING_REF(BgL_strz00_267, BgL_iz00_268);
				{	/* Ieee/string.scm 1504 */
					bool_t BgL_test4368z00_9926;

					if ((BgL_nz00_2227 >= ((unsigned char) '0')))
						{	/* Ieee/string.scm 1504 */
							BgL_test4368z00_9926 = (BgL_nz00_2227 <= ((unsigned char) '9'));
						}
					else
						{	/* Ieee/string.scm 1504 */
							BgL_test4368z00_9926 = ((bool_t) 0);
						}
					if (BgL_test4368z00_9926)
						{	/* Ieee/string.scm 1504 */
							return BINT(((BgL_nz00_2227) - ((long) 48)));
						}
					else
						{	/* Ieee/string.scm 1506 */
							bool_t BgL_test4370z00_9933;

							if ((BgL_nz00_2227 >= ((unsigned char) 'a')))
								{	/* Ieee/string.scm 1506 */
									BgL_test4370z00_9933 =
										(BgL_nz00_2227 <= ((unsigned char) 'f'));
								}
							else
								{	/* Ieee/string.scm 1506 */
									BgL_test4370z00_9933 = ((bool_t) 0);
								}
							if (BgL_test4370z00_9933)
								{	/* Ieee/string.scm 1506 */
									return BINT((((long) 10) + ((BgL_nz00_2227) - ((long) 97))));
								}
							else
								{	/* Ieee/string.scm 1508 */
									bool_t BgL_test4372z00_9941;

									if ((BgL_nz00_2227 >= ((unsigned char) 'A')))
										{	/* Ieee/string.scm 1508 */
											BgL_test4372z00_9941 =
												(BgL_nz00_2227 <= ((unsigned char) 'F'));
										}
									else
										{	/* Ieee/string.scm 1508 */
											BgL_test4372z00_9941 = ((bool_t) 0);
										}
									if (BgL_test4372z00_9941)
										{	/* Ieee/string.scm 1508 */
											return
												BINT((((long) 10) + ((BgL_nz00_2227) - ((long) 65))));
										}
									else
										{	/* Ieee/string.scm 1508 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string3591z00zz__r4_strings_6_7z00,
												BGl_string3592z00zz__r4_strings_6_7z00, BgL_strz00_267);
										}
								}
						}
				}
			}
		}

	}



/* string-hex-intern */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2hexzd2internz00zz__r4_strings_6_7z00(obj_t
		BgL_strz00_269)
	{
		{	/* Ieee/string.scm 1518 */
			{	/* Ieee/string.scm 1519 */
				long BgL_lenz00_2242;

				BgL_lenz00_2242 = STRING_LENGTH(BgL_strz00_269);
				if (ODDP_FX(BgL_lenz00_2242))
					{	/* Ieee/string.scm 1520 */
						return
							BGl_errorz00zz__errorz00(BGl_string3593z00zz__r4_strings_6_7z00,
							BGl_string3594z00zz__r4_strings_6_7z00, BgL_strz00_269);
					}
				else
					{	/* Ieee/string.scm 1522 */
						obj_t BgL_resz00_2244;

						{	/* Ieee/string.scm 1522 */
							long BgL_arg1915z00_2259;

							BgL_arg1915z00_2259 = (BgL_lenz00_2242 / ((long) 2));
							{	/* Ieee/string.scm 168 */

								BgL_resz00_2244 =
									make_string(BgL_arg1915z00_2259, ((unsigned char) ' '));
						}}
						{
							long BgL_iz00_4962;
							long BgL_jz00_4963;

							BgL_iz00_4962 = ((long) 0);
							BgL_jz00_4963 = ((long) 0);
						BgL_loopz00_4961:
							if ((BgL_iz00_4962 == BgL_lenz00_2242))
								{	/* Ieee/string.scm 1525 */
									return BgL_resz00_2244;
								}
							else
								{	/* Ieee/string.scm 1527 */
									obj_t BgL_c1z00_4968;

									BgL_c1z00_4968 =
										BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00
										(BgL_strz00_269, BgL_iz00_4962);
									{	/* Ieee/string.scm 1527 */
										obj_t BgL_c2z00_4969;

										BgL_c2z00_4969 =
											BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00
											(BgL_strz00_269, (BgL_iz00_4962 + ((long) 1)));
										{	/* Ieee/string.scm 1528 */
											long BgL_cz00_4973;

											BgL_cz00_4973 =
												(
												((long) CINT(BgL_c1z00_4968) * ((long) 16)) +
												(long) CINT(BgL_c2z00_4969));
											{	/* Ieee/string.scm 1529 */

												{	/* Ieee/string.scm 333 */
													unsigned char BgL_tmpz00_9965;

													BgL_tmpz00_9965 = (BgL_cz00_4973);
													STRING_SET(BgL_resz00_2244, BgL_jz00_4963,
														BgL_tmpz00_9965);
												}
												{
													long BgL_jz00_9970;
													long BgL_iz00_9968;

													BgL_iz00_9968 = (BgL_iz00_4962 + ((long) 2));
													BgL_jz00_9970 = (BgL_jz00_4963 + ((long) 1));
													BgL_jz00_4963 = BgL_jz00_9970;
													BgL_iz00_4962 = BgL_iz00_9968;
													goto BgL_loopz00_4961;
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



/* &string-hex-intern */
	obj_t BGl_z62stringzd2hexzd2internz62zz__r4_strings_6_7z00(obj_t
		BgL_envz00_5277, obj_t BgL_strz00_5278)
	{
		{	/* Ieee/string.scm 1518 */
			{	/* Ieee/string.scm 1519 */
				obj_t BgL_auxz00_9972;

				if (STRINGP(BgL_strz00_5278))
					{	/* Ieee/string.scm 1519 */
						BgL_auxz00_9972 = BgL_strz00_5278;
					}
				else
					{
						obj_t BgL_auxz00_9975;

						BgL_auxz00_9975 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 60885)),
							BGl_string3595z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_strz00_5278);
						FAILURE(BgL_auxz00_9975, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2hexzd2internz00zz__r4_strings_6_7z00(BgL_auxz00_9972);
			}
		}

	}



/* string-hex-intern! */
	BGL_EXPORTED_DEF obj_t
		BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00(obj_t BgL_strz00_270)
	{
		{	/* Ieee/string.scm 1536 */
			{	/* Ieee/string.scm 1537 */
				long BgL_lenz00_2262;

				BgL_lenz00_2262 = STRING_LENGTH(BgL_strz00_270);
				if (ODDP_FX(BgL_lenz00_2262))
					{	/* Ieee/string.scm 1538 */
						return
							BGl_errorz00zz__errorz00(BGl_string3596z00zz__r4_strings_6_7z00,
							BGl_string3594z00zz__r4_strings_6_7z00, BgL_strz00_270);
					}
				else
					{
						long BgL_iz00_2265;
						long BgL_jz00_2266;

						BgL_iz00_2265 = ((long) 0);
						BgL_jz00_2266 = ((long) 0);
					BgL_zc3z04anonymousza31917ze3z87_2267:
						if ((BgL_iz00_2265 == BgL_lenz00_2262))
							{	/* Ieee/string.scm 750 */
								long BgL_tmpz00_9986;

								BgL_tmpz00_9986 = (BgL_lenz00_2262 / ((long) 2));
								return bgl_string_shrink(BgL_strz00_270, BgL_tmpz00_9986);
							}
						else
							{	/* Ieee/string.scm 1544 */
								obj_t BgL_c1z00_2270;

								BgL_c1z00_2270 =
									BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(BgL_strz00_270,
									BgL_iz00_2265);
								{	/* Ieee/string.scm 1544 */
									obj_t BgL_c2z00_2271;

									BgL_c2z00_2271 =
										BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00
										(BgL_strz00_270, (BgL_iz00_2265 + ((long) 1)));
									{	/* Ieee/string.scm 1545 */
										long BgL_cz00_2272;

										BgL_cz00_2272 =
											(
											((long) CINT(BgL_c1z00_2270) * ((long) 16)) +
											(long) CINT(BgL_c2z00_2271));
										{	/* Ieee/string.scm 1546 */

											{	/* Ieee/string.scm 333 */
												unsigned char BgL_tmpz00_9996;

												BgL_tmpz00_9996 = (BgL_cz00_2272);
												STRING_SET(BgL_strz00_270, BgL_jz00_2266,
													BgL_tmpz00_9996);
											}
											{
												long BgL_jz00_10001;
												long BgL_iz00_9999;

												BgL_iz00_9999 = (BgL_iz00_2265 + ((long) 2));
												BgL_jz00_10001 = (BgL_jz00_2266 + ((long) 1));
												BgL_jz00_2266 = BgL_jz00_10001;
												BgL_iz00_2265 = BgL_iz00_9999;
												goto BgL_zc3z04anonymousza31917ze3z87_2267;
											}
										}
									}
								}
							}
					}
			}
		}

	}



/* &string-hex-intern! */
	obj_t BGl_z62stringzd2hexzd2internz12z70zz__r4_strings_6_7z00(obj_t
		BgL_envz00_5279, obj_t BgL_strz00_5280)
	{
		{	/* Ieee/string.scm 1536 */
			{	/* Ieee/string.scm 1537 */
				obj_t BgL_auxz00_10003;

				if (STRINGP(BgL_strz00_5280))
					{	/* Ieee/string.scm 1537 */
						BgL_auxz00_10003 = BgL_strz00_5280;
					}
				else
					{
						obj_t BgL_auxz00_10006;

						BgL_auxz00_10006 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string3476z00zz__r4_strings_6_7z00, BINT(((long) 61576)),
							BGl_string3597z00zz__r4_strings_6_7z00,
							BGl_string3478z00zz__r4_strings_6_7z00, BgL_strz00_5280);
						FAILURE(BgL_auxz00_10006, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00
					(BgL_auxz00_10003);
			}
		}

	}



/* _string-hex-extern */
	obj_t BGl__stringzd2hexzd2externz00zz__r4_strings_6_7z00(obj_t
		BgL_env1206z00_275, obj_t BgL_opt1205z00_274)
	{
		{	/* Ieee/string.scm 1553 */
			{	/* Ieee/string.scm 1553 */
				obj_t BgL_strz00_2279;

				BgL_strz00_2279 = VECTOR_REF(BgL_opt1205z00_274, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1205z00_274))
					{
					case ((long) 1):

						{	/* Ieee/string.scm 1554 */
							long BgL_endz00_2284;

							{	/* Ieee/string.scm 1554 */
								obj_t BgL_stringz00_5019;

								if (STRINGP(BgL_strz00_2279))
									{	/* Ieee/string.scm 1554 */
										BgL_stringz00_5019 = BgL_strz00_2279;
									}
								else
									{
										obj_t BgL_auxz00_10014;

										BgL_auxz00_10014 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3476z00zz__r4_strings_6_7z00,
											BINT(((long) 62295)),
											BGl_string3598z00zz__r4_strings_6_7z00,
											BGl_string3478z00zz__r4_strings_6_7z00, BgL_strz00_2279);
										FAILURE(BgL_auxz00_10014, BFALSE, BFALSE);
									}
								BgL_endz00_2284 = STRING_LENGTH(BgL_stringz00_5019);
							}
							{	/* Ieee/string.scm 1553 */

								{	/* Ieee/string.scm 1553 */
									obj_t BgL_auxz00_10019;

									if (STRINGP(BgL_strz00_2279))
										{	/* Ieee/string.scm 1553 */
											BgL_auxz00_10019 = BgL_strz00_2279;
										}
									else
										{
											obj_t BgL_auxz00_10022;

											BgL_auxz00_10022 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 62205)),
												BGl_string3598z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_strz00_2279);
											FAILURE(BgL_auxz00_10022, BFALSE, BFALSE);
										}
									return
										BGl_stringzd2hexzd2externz00zz__r4_strings_6_7z00
										(BgL_auxz00_10019, (int) (((long) 0)), BgL_endz00_2284);
						}}} break;
					case ((long) 2):

						{	/* Ieee/string.scm 1553 */
							obj_t BgL_startz00_2285;

							BgL_startz00_2285 = VECTOR_REF(BgL_opt1205z00_274, ((long) 1));
							{	/* Ieee/string.scm 1554 */
								long BgL_endz00_2286;

								{	/* Ieee/string.scm 1554 */
									obj_t BgL_stringz00_5021;

									if (STRINGP(BgL_strz00_2279))
										{	/* Ieee/string.scm 1554 */
											BgL_stringz00_5021 = BgL_strz00_2279;
										}
									else
										{
											obj_t BgL_auxz00_10031;

											BgL_auxz00_10031 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3476z00zz__r4_strings_6_7z00,
												BINT(((long) 62295)),
												BGl_string3598z00zz__r4_strings_6_7z00,
												BGl_string3478z00zz__r4_strings_6_7z00,
												BgL_strz00_2279);
											FAILURE(BgL_auxz00_10031, BFALSE, BFALSE);
										}
									BgL_endz00_2286 = STRING_LENGTH(BgL_stringz00_5021);
								}
								{	/* Ieee/string.scm 1553 */

									{	/* Ieee/string.scm 1553 */
										int BgL_auxz00_10043;
										obj_t BgL_auxz00_10036;

										{	/* Ieee/string.scm 1553 */
											obj_t BgL_tmpz00_10044;

											if (INTEGERP(BgL_startz00_2285))
												{	/* Ieee/string.scm 1553 */
													BgL_tmpz00_10044 = BgL_startz00_2285;
												}
											else
												{
													obj_t BgL_auxz00_10047;

													BgL_auxz00_10047 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 62205)),
														BGl_string3598z00zz__r4_strings_6_7z00,
														BGl_string3480z00zz__r4_strings_6_7z00,
														BgL_startz00_2285);
													FAILURE(BgL_auxz00_10047, BFALSE, BFALSE);
												}
											BgL_auxz00_10043 = CINT(BgL_tmpz00_10044);
										}
										if (STRINGP(BgL_strz00_2279))
											{	/* Ieee/string.scm 1553 */
												BgL_auxz00_10036 = BgL_strz00_2279;
											}
										else
											{
												obj_t BgL_auxz00_10039;

												BgL_auxz00_10039 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 62205)),
													BGl_string3598z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_strz00_2279);
												FAILURE(BgL_auxz00_10039, BFALSE, BFALSE);
											}
										return
											BGl_stringzd2hexzd2externz00zz__r4_strings_6_7z00
											(BgL_auxz00_10036, BgL_auxz00_10043, BgL_endz00_2286);
									}
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/string.scm 1553 */
							obj_t BgL_startz00_2287;

							BgL_startz00_2287 = VECTOR_REF(BgL_opt1205z00_274, ((long) 1));
							{	/* Ieee/string.scm 1553 */
								obj_t BgL_endz00_2288;

								BgL_endz00_2288 = VECTOR_REF(BgL_opt1205z00_274, ((long) 2));
								{	/* Ieee/string.scm 1553 */

									{	/* Ieee/string.scm 1553 */
										long BgL_auxz00_10071;
										int BgL_auxz00_10062;
										obj_t BgL_auxz00_10055;

										{	/* Ieee/string.scm 1553 */
											obj_t BgL_tmpz00_10072;

											if (INTEGERP(BgL_endz00_2288))
												{	/* Ieee/string.scm 1553 */
													BgL_tmpz00_10072 = BgL_endz00_2288;
												}
											else
												{
													obj_t BgL_auxz00_10075;

													BgL_auxz00_10075 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 62205)),
														BGl_string3598z00zz__r4_strings_6_7z00,
														BGl_string3480z00zz__r4_strings_6_7z00,
														BgL_endz00_2288);
													FAILURE(BgL_auxz00_10075, BFALSE, BFALSE);
												}
											BgL_auxz00_10071 = (long) CINT(BgL_tmpz00_10072);
										}
										{	/* Ieee/string.scm 1553 */
											obj_t BgL_tmpz00_10063;

											if (INTEGERP(BgL_startz00_2287))
												{	/* Ieee/string.scm 1553 */
													BgL_tmpz00_10063 = BgL_startz00_2287;
												}
											else
												{
													obj_t BgL_auxz00_10066;

													BgL_auxz00_10066 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3476z00zz__r4_strings_6_7z00,
														BINT(((long) 62205)),
														BGl_string3598z00zz__r4_strings_6_7z00,
														BGl_string3480z00zz__r4_strings_6_7z00,
														BgL_startz00_2287);
													FAILURE(BgL_auxz00_10066, BFALSE, BFALSE);
												}
											BgL_auxz00_10062 = CINT(BgL_tmpz00_10063);
										}
										if (STRINGP(BgL_strz00_2279))
											{	/* Ieee/string.scm 1553 */
												BgL_auxz00_10055 = BgL_strz00_2279;
											}
										else
											{
												obj_t BgL_auxz00_10058;

												BgL_auxz00_10058 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3476z00zz__r4_strings_6_7z00,
													BINT(((long) 62205)),
													BGl_string3598z00zz__r4_strings_6_7z00,
													BGl_string3478z00zz__r4_strings_6_7z00,
													BgL_strz00_2279);
												FAILURE(BgL_auxz00_10058, BFALSE, BFALSE);
											}
										return
											BGl_stringzd2hexzd2externz00zz__r4_strings_6_7z00
											(BgL_auxz00_10055, BgL_auxz00_10062, BgL_auxz00_10071);
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



/* string-hex-extern */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2hexzd2externz00zz__r4_strings_6_7z00(obj_t
		BgL_strz00_271, int BgL_startz00_272, long BgL_endz00_273)
	{
		{	/* Ieee/string.scm 1553 */
			{	/* Ieee/string.scm 1558 */
				long BgL_lenz00_2290;

				BgL_lenz00_2290 = STRING_LENGTH(BgL_strz00_271);
				{	/* Ieee/string.scm 1560 */
					bool_t BgL_test4388z00_10084;

					if (((long) (BgL_startz00_272) < ((long) 0)))
						{	/* Ieee/string.scm 1560 */
							BgL_test4388z00_10084 = ((bool_t) 1);
						}
					else
						{	/* Ieee/string.scm 1560 */
							BgL_test4388z00_10084 =
								((long) (BgL_startz00_272) > BgL_lenz00_2290);
						}
					if (BgL_test4388z00_10084)
						{	/* Ieee/string.scm 1562 */
							obj_t BgL_arg1929z00_2293;
							obj_t BgL_arg1930z00_2294;

							{	/* Ieee/string.scm 1562 */
								obj_t BgL_arg1931z00_2295;

								{	/* Ieee/fixnum.scm 980 */

									BgL_arg1931z00_2295 =
										BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
										(long) (BgL_startz00_272), ((long) 10));
								}
								BgL_arg1929z00_2293 =
									string_append(BGl_string3503z00zz__r4_strings_6_7z00,
									BgL_arg1931z00_2295);
							}
							{	/* Ieee/string.scm 1563 */
								obj_t BgL_list1933z00_2299;

								{	/* Ieee/string.scm 1563 */
									obj_t BgL_arg1934z00_2300;

									BgL_arg1934z00_2300 = MAKE_YOUNG_PAIR(BgL_strz00_271, BNIL);
									BgL_list1933z00_2299 =
										MAKE_YOUNG_PAIR(BINT(BgL_lenz00_2290), BgL_arg1934z00_2300);
								}
								BgL_arg1930z00_2294 = BgL_list1933z00_2299;
							}
							return
								BGl_errorz00zz__errorz00(BGl_string3599z00zz__r4_strings_6_7z00,
								BgL_arg1929z00_2293, BgL_arg1930z00_2294);
						}
					else
						{	/* Ieee/string.scm 1564 */
							bool_t BgL_test4390z00_10097;

							if ((BgL_endz00_273 < (long) (BgL_startz00_272)))
								{	/* Ieee/string.scm 1564 */
									BgL_test4390z00_10097 = ((bool_t) 1);
								}
							else
								{	/* Ieee/string.scm 1564 */
									BgL_test4390z00_10097 = (BgL_endz00_273 > BgL_lenz00_2290);
								}
							if (BgL_test4390z00_10097)
								{	/* Ieee/string.scm 1566 */
									obj_t BgL_arg1937z00_2303;
									obj_t BgL_arg1938z00_2304;

									{	/* Ieee/string.scm 1566 */
										obj_t BgL_arg1939z00_2305;

										{	/* Ieee/fixnum.scm 980 */

											BgL_arg1939z00_2305 =
												BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_endz00_273, ((long) 10));
										}
										BgL_arg1937z00_2303 =
											string_append(BGl_string3505z00zz__r4_strings_6_7z00,
											BgL_arg1939z00_2305);
									}
									{	/* Ieee/string.scm 1567 */
										obj_t BgL_list1941z00_2309;

										{	/* Ieee/string.scm 1567 */
											obj_t BgL_arg1942z00_2310;

											BgL_arg1942z00_2310 =
												MAKE_YOUNG_PAIR(BgL_strz00_271, BNIL);
											BgL_list1941z00_2309 =
												MAKE_YOUNG_PAIR(BINT(BgL_lenz00_2290),
												BgL_arg1942z00_2310);
										}
										BgL_arg1938z00_2304 = BgL_list1941z00_2309;
									}
									return
										BGl_errorz00zz__errorz00
										(BGl_string3599z00zz__r4_strings_6_7z00,
										BgL_arg1937z00_2303, BgL_arg1938z00_2304);
								}
							else
								{	/* Ieee/string.scm 1569 */
									obj_t BgL_resz00_2311;

									{	/* Ieee/string.scm 1569 */
										long BgL_arg1952z00_2327;

										BgL_arg1952z00_2327 =
											(((long) 2) *
											(BgL_endz00_273 - (long) (BgL_startz00_272)));
										{	/* Ieee/string.scm 168 */

											BgL_resz00_2311 =
												make_string(BgL_arg1952z00_2327, ((unsigned char) ' '));
									}}
									{
										int BgL_iz00_2313;
										long BgL_jz00_2314;

										BgL_iz00_2313 = BgL_startz00_272;
										BgL_jz00_2314 = ((long) 0);
									BgL_zc3z04anonymousza31943ze3z87_2315:
										if (((long) (BgL_iz00_2313) == BgL_endz00_273))
											{	/* Ieee/string.scm 1572 */
												return BgL_resz00_2311;
											}
										else
											{	/* Ieee/string.scm 1574 */
												long BgL_nz00_2317;

												BgL_nz00_2317 =
													(STRING_REF(BgL_strz00_271, (long) (BgL_iz00_2313)));
												{	/* Ieee/string.scm 1574 */
													long BgL_d0z00_2318;

													{	/* Ieee/string.scm 1575 */
														long BgL_res2930z00_5078;

														{	/* Ieee/string.scm 1575 */
															long BgL_n1z00_5060;
															long BgL_n2z00_5061;

															BgL_n1z00_5060 = BgL_nz00_2317;
															BgL_n2z00_5061 = ((long) 16);
															{	/* Ieee/string.scm 1575 */
																bool_t BgL_test4393z00_10118;

																{	/* Ieee/string.scm 1575 */
																	long BgL_arg2076z00_5063;

																	BgL_arg2076z00_5063 =
																		(((BgL_n1z00_5060) | (BgL_n2z00_5061)) &
																		-2147483648);
																	BgL_test4393z00_10118 =
																		(BgL_arg2076z00_5063 == ((long) 0));
																}
																if (BgL_test4393z00_10118)
																	{	/* Ieee/string.scm 1575 */
																		int32_t BgL_arg2071z00_5064;

																		{	/* Ieee/string.scm 1575 */
																			int32_t BgL_arg2072z00_5065;
																			int32_t BgL_arg2075z00_5066;

																			{	/* Ieee/string.scm 1575 */
																				int32_t BgL_res2926z00_5070;

																				BgL_res2926z00_5070 =
																					(int32_t) (BgL_n1z00_5060);
																				BgL_arg2072z00_5065 =
																					BgL_res2926z00_5070;
																			}
																			{	/* Ieee/string.scm 1575 */
																				int32_t BgL_res2927z00_5072;

																				BgL_res2927z00_5072 =
																					(int32_t) (BgL_n2z00_5061);
																				BgL_arg2075z00_5066 =
																					BgL_res2927z00_5072;
																			}
																			BgL_arg2071z00_5064 =
																				(BgL_arg2072z00_5065 %
																				BgL_arg2075z00_5066);
																		}
																		{	/* Ieee/string.scm 1575 */
																			long BgL_res2929z00_5077;

																			{	/* Ieee/string.scm 1575 */
																				long BgL_arg2173z00_5074;

																				BgL_arg2173z00_5074 =
																					(long) (BgL_arg2071z00_5064);
																				{	/* Ieee/string.scm 1575 */
																					long BgL_res2928z00_5076;

																					BgL_res2928z00_5076 =
																						(long) (BgL_arg2173z00_5074);
																					BgL_res2929z00_5077 =
																						BgL_res2928z00_5076;
																			}}
																			BgL_res2930z00_5078 = BgL_res2929z00_5077;
																	}}
																else
																	{	/* Ieee/string.scm 1575 */
																		BgL_res2930z00_5078 =
																			(BgL_n1z00_5060 % BgL_n2z00_5061);
																	}
															}
														}
														BgL_d0z00_2318 = BgL_res2930z00_5078;
													}
													{	/* Ieee/string.scm 1575 */
														long BgL_d1z00_2319;

														BgL_d1z00_2319 = (BgL_nz00_2317 / ((long) 16));
														{	/* Ieee/string.scm 1576 */

															{	/* Ieee/string.scm 333 */
																unsigned char BgL_tmpz00_10128;

																BgL_tmpz00_10128 =
																	STRING_REF
																	(BGl_string3600z00zz__r4_strings_6_7z00,
																	BgL_d1z00_2319);
																STRING_SET(BgL_resz00_2311, BgL_jz00_2314,
																	BgL_tmpz00_10128);
															}
															{	/* Ieee/string.scm 333 */
																unsigned char BgL_auxz00_10133;
																long BgL_tmpz00_10131;

																BgL_auxz00_10133 =
																	STRING_REF
																	(BGl_string3600z00zz__r4_strings_6_7z00,
																	BgL_d0z00_2318);
																BgL_tmpz00_10131 = (BgL_jz00_2314 + ((long) 1));
																STRING_SET(BgL_resz00_2311, BgL_tmpz00_10131,
																	BgL_auxz00_10133);
															}
															{	/* Ieee/string.scm 1579 */
																long BgL_arg1948z00_2323;
																long BgL_arg1949z00_2324;

																BgL_arg1948z00_2323 =
																	((long) (BgL_iz00_2313) + ((long) 1));
																BgL_arg1949z00_2324 =
																	(BgL_jz00_2314 + ((long) 2));
																{
																	long BgL_jz00_10141;
																	int BgL_iz00_10139;

																	BgL_iz00_10139 = (int) (BgL_arg1948z00_2323);
																	BgL_jz00_10141 = BgL_arg1949z00_2324;
																	BgL_jz00_2314 = BgL_jz00_10141;
																	BgL_iz00_2313 = BgL_iz00_10139;
																	goto BgL_zc3z04anonymousza31943ze3z87_2315;
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



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_strings_6_7z00()
	{
		{	/* Ieee/string.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string3601z00zz__r4_strings_6_7z00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string3601z00zz__r4_strings_6_7z00));
		}

	}

#ifdef __cplusplus
}
#endif
