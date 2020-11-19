/*===========================================================================*/
/*   (Ieee/string.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Ieee/string.scm -indent -o objs/obj_s/Ieee/string.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL bool_t BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringz00zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_z62stringzd2cutzb0zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62stringze3zf3z72zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62stringzd2shrinkz12za2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
static obj_t BGl_z62substringzd2cizd3zf3z90zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol4423z00zz__r4_strings_6_7z00 = BUNSPEC;
extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
static obj_t BGl_symbol4426z00zz__r4_strings_6_7z00 = BUNSPEC;
extern bool_t bigloo_strncmp_ci_at(obj_t, obj_t, long, long);
static obj_t BGl_symbol4428z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_z62escapezd2schemezd2stringz62zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2charzd2indexz00zz__r4_strings_6_7z00(obj_t, unsigned char, obj_t, obj_t);
static obj_t BGl__stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_z62stringzd2cizc3zd3zf3z53zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_emptyzd2stringzf3z21zz__r4_strings_6_7z00(obj_t);
static obj_t BGl__stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2forzd2readz00zz__r4_strings_6_7z00(obj_t);
extern bool_t bigloo_string_cile(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2deletezd2zz__r4_strings_6_7z00(obj_t, obj_t, int, long);
static obj_t BGl_z62stringzd2forzd2readz62zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_symbol4431z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol4433z00zz__r4_strings_6_7z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t, unsigned char, unsigned char);
static obj_t BGl_symbol4436z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_list4405z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl__stringzd2containszd2zz__r4_strings_6_7z00(obj_t, obj_t);
extern bool_t bigloo_string_cilt(obj_t, obj_t);
static obj_t BGl_symbol4438z00zz__r4_strings_6_7z00 = BUNSPEC;
extern bool_t bigloo_string_le(obj_t, obj_t);
extern bool_t bigloo_string_lt(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl__stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_escapezd2schemezd2stringz00zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_symbol4441z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol4361z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol4443z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol4446z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol4284z00zz__r4_strings_6_7z00 = BUNSPEC;
extern bool_t bigloo_strcicmp(obj_t, obj_t);
static obj_t BGl_symbol4448z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol4367z00zz__r4_strings_6_7z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_stringzd2cizc3zd3zf3z31zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_symbol4369z00zz__r4_strings_6_7z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_stringzd2cizc3zf3ze2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_z62stringzd2upcasezb0zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringze3zd3zf3zc3zz__r4_strings_6_7z00(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t string_for_read(obj_t);
static obj_t BGl_symbol4451z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol4371z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol4453z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_z62stringzd2downcasez12za2zz__r4_strings_6_7z00(obj_t, obj_t);
static bool_t BGl_delimzf3zf3zz__r4_strings_6_7z00(obj_t, unsigned char);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_z62stringzd2nullzf3z43zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_stringzd2lengthzd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_symbol4457z00zz__r4_strings_6_7z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_stringzd2skipzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_z62stringzd2upcasez12za2zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2setz12zc0zz__r4_strings_6_7z00(obj_t, long, unsigned char);
static obj_t BGl__stringzd2skipzd2zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
extern bool_t bigloo_strncmp_ci(obj_t, obj_t, long);
static obj_t BGl_symbol4460z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol4382z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol4464z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol4385z00zz__r4_strings_6_7z00 = BUNSPEC;
BGL_EXPORTED_DECL int BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringzd2cize3zf3zc2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_z62stringzd2cize3zd3zf3z73zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL unsigned char BGl_stringzd2refzd2urz00zz__r4_strings_6_7z00(obj_t, long);
static obj_t BGl_z62emptyzd2stringzf3z43zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringzd2nullzf3z21zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t, obj_t, int);
static obj_t BGl_z62substringzd3zf3z42zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol4390z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_z62listzd2ze3stringz53zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_symbol4473z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol4394z00zz__r4_strings_6_7z00 = BUNSPEC;
extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl_z62stringzd2aszd2readz62zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_list4366z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol4398z00zz__r4_strings_6_7z00 = BUNSPEC;
extern bool_t bigloo_strcmp_ci_at(obj_t, obj_t, long);
static obj_t BGl__stringzd2hexzd2externz00zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__r4_strings_6_7z00();
static obj_t BGl_z62stringzd2capitaliza7ez17zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2shrinkz12zc0zz__r4_strings_6_7z00(obj_t, long);
extern unsigned char BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long);
BGL_EXPORTED_DECL bool_t BGl_substringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t, obj_t, long);
extern long bgl_list_length(obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_blitzd2stringzd2urz12z12zz__r4_strings_6_7z00(obj_t, long, obj_t, long, long);
BGL_EXPORTED_DECL bool_t BGl_stringzd2cize3zd3zf3z11zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_z62blitzd2stringzd2urz12z70zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__r4_strings_6_7z00();
static obj_t BGl_z62stringzd2hexzd2internz62zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_strings_6_7z00();
static obj_t BGl_z62stringzd2splitzb0zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2skipzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00(obj_t, unsigned char, unsigned char);
static obj_t BGl__stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_z62stringzd2replacez12za2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2charzd2indexz00zz__r4_strings_6_7z00(obj_t, obj_t);
extern obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62stringzd2lengthzb0zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringzc3zf3z30zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(obj_t, obj_t);
extern bool_t bigloo_strcmp_at(obj_t, obj_t, long);
extern obj_t bgl_reverse_bang(obj_t);
static obj_t BGl_z62substringzd2urzb0zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_stringzd2compare3zd2ciz00zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__makezd2stringzd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_z62stringzd2appendzb0zz__r4_strings_6_7z00(obj_t, obj_t);
extern obj_t bgl_escape_scheme_string(char *, long, long);
extern obj_t string_append_3(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2containszd2zz__r4_strings_6_7z00(obj_t, obj_t, int);
static obj_t BGl__stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62stringzd2setzd2urz12z70zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list4397z00zz__r4_strings_6_7z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_stringzd3zf3z20zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2splitzd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_z62stringzd2hexzd2internz12z70zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(obj_t, long);
static obj_t BGl_z62stringzd2refzd2urz62zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62stringzd2ze3listz53zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_escapezd2Czd2stringz00zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2upcasez12zc0zz__r4_strings_6_7z00(obj_t);
extern bool_t bigloo_strncmp_at(obj_t, obj_t, long, long);
BGL_EXPORTED_DECL int BGl_stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62escapezd2Czd2stringz62zz__r4_strings_6_7z00(obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2capitaliza7ez75zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringze3zf3z10zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_substringzd2urzd2zz__r4_strings_6_7z00(obj_t, long, long);
BGL_EXPORTED_DECL bool_t BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62stringz62zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_comparezd2leftzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00(obj_t, obj_t, long, obj_t);
BGL_EXPORTED_DECL long BGl_stringzd2compare3zd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__substringzd2atzf3z21zz__r4_strings_6_7z00(obj_t, obj_t);
extern obj_t c_substring(obj_t, long, long);
static obj_t BGl_z62stringzd2compare3zd2ciz62zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62stringzd2compare3zb0zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62stringzd2charzd2indexzd2urzb0zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__stringzd2skipzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2hexzd2internz00zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_z62stringzd2cizc3zf3z80zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62stringzc3zd3zf3z81zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL unsigned char BGl_stringzd2refzd2zz__r4_strings_6_7z00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_makezd2stringzd2zz__r4_strings_6_7z00(long, obj_t);
static obj_t BGl__stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2aszd2readz00zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL int BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62stringzd2replacezb0zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
extern obj_t bgl_escape_C_string(char *, long, long);
static obj_t BGl_z62stringzd2cizd3zf3z90zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
extern bool_t bigloo_string_cige(obj_t, obj_t);
static obj_t BGl_comparezd2rightzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
extern obj_t blit_string(obj_t, long, obj_t, long, long);
static obj_t BGl_z62stringzd2setz12za2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62stringzd2capitaliza7ez12z05zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2deletezd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2suffixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
static obj_t BGl_symbol4301z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol4306z00zz__r4_strings_6_7z00 = BUNSPEC;
extern bool_t bigloo_string_cigt(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2charzd2indexzd2urzd2zz__r4_strings_6_7z00(obj_t, unsigned char, long, long);
extern bool_t bigloo_string_ge(obj_t, obj_t);
static obj_t BGl__stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_z62stringzd2cize3zf3za0zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
extern bool_t bigloo_string_gt(obj_t, obj_t);
static obj_t BGl_z62blitzd2stringz12za2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_strnatcmpz00zz__r4_strings_6_7z00(obj_t, obj_t, bool_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_substringzd3zf3z20zz__r4_strings_6_7z00(obj_t, obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_stringzd2downcasez12zc0zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_symbol4319z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_z62stringzd2refzb0zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
extern obj_t make_string(long, unsigned char);
BGL_EXPORTED_DECL obj_t BGl_stringzd2cutzd2zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringzf3zf3zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_z62stringzd2fillz12za2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62stringzc3zf3z52zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62stringzf3z91zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_symbol4400z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol4406z00zz__r4_strings_6_7z00 = BUNSPEC;
extern obj_t string_append(obj_t, obj_t);
static obj_t BGl_symbol4326z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_symbol4408z00zz__r4_strings_6_7z00 = BUNSPEC;
static obj_t BGl_z62stringzd2copyzb0zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_symbol4329z00zz__r4_strings_6_7z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2setzd2urz12z12zz__r4_strings_6_7z00(obj_t, long, unsigned char);
BGL_EXPORTED_DECL bool_t BGl_stringzc3zd3zf3ze3zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl__stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t, long, obj_t, long, long);
BGL_EXPORTED_DECL obj_t BGl_stringzd2hexzd2externz00zz__r4_strings_6_7z00(obj_t, int, long);
static obj_t BGl_z62stringze3zd3zf3za1zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62stringzd3zf3z42zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
extern obj_t make_string_sans_fill(long);
BGL_EXPORTED_DECL obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl__substringz00zz__r4_strings_6_7z00(obj_t, obj_t);
static obj_t BGl_symbol4412z00zz__r4_strings_6_7z00 = BUNSPEC;
extern bool_t bigloo_strncmp(obj_t, obj_t, long);
static obj_t BGl_z62stringzd2downcasezb0zz__r4_strings_6_7z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_substringzd2atzf3z21zz__r4_strings_6_7z00(obj_t, obj_t, long, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2fillz12zc0zz__r4_strings_6_7z00(obj_t, unsigned char);
BGL_EXPORTED_DECL int BGl_stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2forzd2readzd2envzd2zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2forza74481za7, BGl_z62stringzd2forzd2readz62zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_substringzd3zf3zd2envzf2zz__r4_strings_6_7z00, BgL_bgl_za762substringza7d3za74482za7, BGl_z62substringzd3zf3z42zz__r4_strings_6_7z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2downcasez12zd2envz12zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2down4483z00, BGl_z62stringzd2downcasez12za2zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2replacezd2envz00zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2repl4484z00, BGl_z62stringzd2replacezb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2upcasez12zd2envz12zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2upca4485z00, BGl_z62stringzd2upcasez12za2zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4461z00zz__r4_strings_6_7z00, BgL_bgl_string4461za700za7za7_4486za7, "string-natural-compare3-ci", 26 );
DEFINE_STRING( BGl_string4380z00zz__r4_strings_6_7z00, BgL_bgl_string4380za700za7za7_4487za7, "&string-cut", 11 );
DEFINE_STRING( BGl_string4462z00zz__r4_strings_6_7z00, BgL_bgl_string4462za700za7za7_4488za7, "_string-natural-compare3-ci", 27 );
DEFINE_STRING( BGl_string4381z00zz__r4_strings_6_7z00, BgL_bgl_string4381za700za7za7_4489za7, "&string-char-index-ur", 21 );
DEFINE_STRING( BGl_string4463z00zz__r4_strings_6_7z00, BgL_bgl_string4463za700za7za7_4490za7, "while", 5 );
DEFINE_STRING( BGl_string4383z00zz__r4_strings_6_7z00, BgL_bgl_string4383za700za7za7_4491za7, "string-char-index", 17 );
DEFINE_STRING( BGl_string4465z00zz__r4_strings_6_7z00, BgL_bgl_string4465za700za7za7_4492za7, "an-awful-hack", 13 );
DEFINE_STRING( BGl_string4384z00zz__r4_strings_6_7z00, BgL_bgl_string4384za700za7za7_4493za7, "_string-char-index", 18 );
DEFINE_STRING( BGl_string4466z00zz__r4_strings_6_7z00, BgL_bgl_string4466za700za7za7_4494za7, "hex-string->string", 18 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2capitaliza7ezd2envza7zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2capi4495z00, BGl_z62stringzd2capitaliza7ez17zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4467z00zz__r4_strings_6_7z00, BgL_bgl_string4467za700za7za7_4496za7, "Illegal string (illegal character)", 34 );
DEFINE_STRING( BGl_string4386z00zz__r4_strings_6_7z00, BgL_bgl_string4386za700za7za7_4497za7, "string-index", 12 );
DEFINE_STRING( BGl_string4468z00zz__r4_strings_6_7z00, BgL_bgl_string4468za700za7za7_4498za7, "string-hex-intern", 17 );
DEFINE_STRING( BGl_string4387z00zz__r4_strings_6_7z00, BgL_bgl_string4387za700za7za7_4499za7, "_string-index", 13 );
DEFINE_STRING( BGl_string4469z00zz__r4_strings_6_7z00, BgL_bgl_string4469za700za7za7_4500za7, "Illegal string (length is odd)", 30 );
DEFINE_STRING( BGl_string4388z00zz__r4_strings_6_7z00, BgL_bgl_string4388za700za7za7_4501za7, "liip", 4 );
DEFINE_STRING( BGl_string4389z00zz__r4_strings_6_7z00, BgL_bgl_string4389za700za7za7_4502za7, "Illegal regset", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2suffixzf3zd2envzf3zz__r4_strings_6_7z00, BgL_bgl__stringza7d2suffix4503za7, opt_generic_entry, BGl__stringzd2suffixzf3z21zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2copyzd2envz00zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2copy4504z00, BGl_z62stringzd2copyzb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2compare3zd2envz00zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2comp4505z00, BGl_z62stringzd2compare3zb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2upcasezd2envz00zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2upca4506z00, BGl_z62stringzd2upcasezb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2setzd2urz12zd2envzc0zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2setza74507za7, BGl_z62stringzd2setzd2urz12z70zz__r4_strings_6_7z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2cizc3zd3zf3zd2envze3zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2ciza7c4508za7, BGl_z62stringzd2cizc3zd3zf3z53zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4470z00zz__r4_strings_6_7z00, BgL_bgl_string4470za700za7za7_4509za7, "&string-hex-intern", 18 );
DEFINE_STRING( BGl_string4471z00zz__r4_strings_6_7z00, BgL_bgl_string4471za700za7za7_4510za7, "string-hex-intern!", 18 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2hexzd2internzd2envzd2zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2hexza74511za7, BGl_z62stringzd2hexzd2internz62zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4472z00zz__r4_strings_6_7z00, BgL_bgl_string4472za700za7za7_4512za7, "&string-hex-intern!", 19 );
DEFINE_STRING( BGl_string4391z00zz__r4_strings_6_7z00, BgL_bgl_string4391za700za7za7_4513za7, "string-index-right", 18 );
DEFINE_STRING( BGl_string4392z00zz__r4_strings_6_7z00, BgL_bgl_string4392za700za7za7_4514za7, "_string-index-right", 19 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2hexzd2internz12zd2envzc0zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2hexza74515za7, BGl_z62stringzd2hexzd2internz12z70zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4474z00zz__r4_strings_6_7z00, BgL_bgl_string4474za700za7za7_4516za7, "string-hex-extern::bstring", 26 );
DEFINE_STRING( BGl_string4393z00zz__r4_strings_6_7z00, BgL_bgl_string4393za700za7za7_4517za7, "index out of bound", 18 );
DEFINE_STRING( BGl_string4475z00zz__r4_strings_6_7z00, BgL_bgl_string4475za700za7za7_4518za7, "wrong number of arguments: [1..3] expected, provided", 52 );
DEFINE_STRING( BGl_string4476z00zz__r4_strings_6_7z00, BgL_bgl_string4476za700za7za7_4519za7, "_string-hex-extern", 18 );
DEFINE_STRING( BGl_string4395z00zz__r4_strings_6_7z00, BgL_bgl_string4395za700za7za7_4520za7, "string-skip", 11 );
DEFINE_STRING( BGl_string4477z00zz__r4_strings_6_7z00, BgL_bgl_string4477za700za7za7_4521za7, "string-hex-extern", 17 );
DEFINE_STRING( BGl_string4396z00zz__r4_strings_6_7z00, BgL_bgl_string4396za700za7za7_4522za7, "_string-skip", 12 );
DEFINE_STRING( BGl_string4478z00zz__r4_strings_6_7z00, BgL_bgl_string4478za700za7za7_4523za7, "0123456789abcdef", 16 );
DEFINE_STRING( BGl_string4479z00zz__r4_strings_6_7z00, BgL_bgl_string4479za700za7za7_4524za7, "__r4_strings_6_7", 16 );
DEFINE_STRING( BGl_string4399z00zz__r4_strings_6_7z00, BgL_bgl_string4399za700za7za7_4525za7, "arg1663", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2skipzd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2skipza7d4526z00, opt_generic_entry, BGl__stringzd2skipzd2zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3listzd2envze3zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2za7e3l4527za7, BGl_z62stringzd2ze3listz53zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2stringzd2envz00zz__r4_strings_6_7z00, BgL_bgl__makeza7d2stringza7d4528z00, opt_generic_entry, BGl__makezd2stringzd2zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2prefixzd2lengthzd2cizd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2prefix4529za7, opt_generic_entry, BGl__stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2cizd3zf3zd2envz20zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2ciza7d4530za7, BGl_z62stringzd2cizd3zf3z90zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2suffixzd2lengthzd2cizd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2suffix4531za7, opt_generic_entry, BGl__stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2suffixzd2lengthzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2suffix4532za7, opt_generic_entry, BGl__stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2appendzd2envz00zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2appe4533z00, va_generic_entry, BGl_z62stringzd2appendzb0zz__r4_strings_6_7z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2compare3zd2cizd2envzd2zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2comp4534z00, BGl_z62stringzd2compare3zd2ciz62zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_substringzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__substringza700za7za7_4535za7, opt_generic_entry, BGl__substringz00zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2containszd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2contai4536za7, opt_generic_entry, BGl__stringzd2containszd2zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2indexzd2rightzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2indexza74537z00, opt_generic_entry, BGl__stringzd2indexzd2rightz00zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd3zf3zd2envzf2zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d3za7f3za74538z00, BGl_z62stringzd3zf3z42zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2containszd2cizd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2contai4539za7, opt_generic_entry, BGl__stringzd2containszd2ciz00zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2naturalzd2compare3zd2cizd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2natura4540za7, opt_generic_entry, BGl__stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2capitaliza7ez12zd2envzb5zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2capi4541z00, BGl_z62stringzd2capitaliza7ez12z05zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzf3zd2envz21zz__r4_strings_6_7z00, BgL_bgl_za762stringza7f3za791za74542z00, BGl_z62stringzf3z91zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2shrinkz12zd2envz12zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2shri4543z00, BGl_z62stringzd2shrinkz12za2zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2indexzd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2indexza74544z00, opt_generic_entry, BGl__stringzd2indexzd2zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_substringzd2cizd2atzf3zd2envz21zz__r4_strings_6_7z00, BgL_bgl__substringza7d2ciza74545z00, opt_generic_entry, BGl__substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_blitzd2stringzd2urz12zd2envzc0zz__r4_strings_6_7z00, BgL_bgl_za762blitza7d2string4546z00, BGl_z62blitzd2stringzd2urz12z70zz__r4_strings_6_7z00, 0L, BUNSPEC, 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringze3zd3zf3zd2envz11zz__r4_strings_6_7z00, BgL_bgl_za762stringza7e3za7d3za74547z00, BGl_z62stringze3zd3zf3za1zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_substringzd2atzf3zd2envzf3zz__r4_strings_6_7z00, BgL_bgl__substringza7d2atza74548z00, opt_generic_entry, BGl__substringzd2atzf3z21zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2naturalzd2compare3zd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2natura4549za7, opt_generic_entry, BGl__stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2prefixzd2cizf3zd2envz21zz__r4_strings_6_7z00, BgL_bgl__stringza7d2prefix4550za7, opt_generic_entry, BGl__stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2setz12zd2envz12zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2setza74551za7, BGl_z62stringzd2setz12za2zz__r4_strings_6_7z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2charzd2indexzd2urzd2envz00zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2char4552z00, BGl_z62stringzd2charzd2indexzd2urzb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2prefixzd2lengthzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2prefix4553za7, opt_generic_entry, BGl__stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2cize3zf3zd2envz10zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2ciza7e4554za7, BGl_z62stringzd2cize3zf3za0zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2splitzd2envz00zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2spli4555z00, va_generic_entry, BGl_z62stringzd2splitzb0zz__r4_strings_6_7z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_emptyzd2stringzf3zd2envzf3zz__r4_strings_6_7z00, BgL_bgl_za762emptyza7d2strin4556z00, BGl_z62emptyzd2stringzf3z43zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2refzd2urzd2envzd2zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2refza74557za7, BGl_z62stringzd2refzd2urz62zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4300z00zz__r4_strings_6_7z00, BgL_bgl_string4300za700za7za7_4558za7, "&substring=?", 12 );
DEFINE_STRING( BGl_string4302z00zz__r4_strings_6_7z00, BgL_bgl_string4302za700za7za7_4559za7, "substring-at?", 13 );
DEFINE_STRING( BGl_string4303z00zz__r4_strings_6_7z00, BgL_bgl_string4303za700za7za7_4560za7, "wrong number of arguments: [3..4] expected, provided", 52 );
DEFINE_STRING( BGl_string4304z00zz__r4_strings_6_7z00, BgL_bgl_string4304za700za7za7_4561za7, "_substring-at?", 14 );
DEFINE_STRING( BGl_string4305z00zz__r4_strings_6_7z00, BgL_bgl_string4305za700za7za7_4562za7, "&substring-ci=?", 15 );
DEFINE_STRING( BGl_string4307z00zz__r4_strings_6_7z00, BgL_bgl_string4307za700za7za7_4563za7, "substring-ci-at?", 16 );
DEFINE_STRING( BGl_string4308z00zz__r4_strings_6_7z00, BgL_bgl_string4308za700za7za7_4564za7, "_substring-ci-at?", 17 );
DEFINE_STRING( BGl_string4309z00zz__r4_strings_6_7z00, BgL_bgl_string4309za700za7za7_4565za7, "&empty-string?", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringze3zf3zd2envzc2zz__r4_strings_6_7z00, BgL_bgl_za762stringza7e3za7f3za74566z00, BGl_z62stringze3zf3z72zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4310z00zz__r4_strings_6_7z00, BgL_bgl_string4310za700za7za7_4567za7, "&string-ci=?", 12 );
DEFINE_STRING( BGl_string4311z00zz__r4_strings_6_7z00, BgL_bgl_string4311za700za7za7_4568za7, "&string<?", 9 );
DEFINE_STRING( BGl_string4312z00zz__r4_strings_6_7z00, BgL_bgl_string4312za700za7za7_4569za7, "&string>?", 9 );
DEFINE_STRING( BGl_string4313z00zz__r4_strings_6_7z00, BgL_bgl_string4313za700za7za7_4570za7, "&string<=?", 10 );
DEFINE_STRING( BGl_string4314z00zz__r4_strings_6_7z00, BgL_bgl_string4314za700za7za7_4571za7, "&string>=?", 10 );
DEFINE_STRING( BGl_string4315z00zz__r4_strings_6_7z00, BgL_bgl_string4315za700za7za7_4572za7, "&string-ci<?", 12 );
DEFINE_STRING( BGl_string4316z00zz__r4_strings_6_7z00, BgL_bgl_string4316za700za7za7_4573za7, "&string-ci>?", 12 );
DEFINE_STRING( BGl_string4317z00zz__r4_strings_6_7z00, BgL_bgl_string4317za700za7za7_4574za7, "&string-ci<=?", 13 );
DEFINE_STRING( BGl_string4318z00zz__r4_strings_6_7z00, BgL_bgl_string4318za700za7za7_4575za7, "&string-ci>=?", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzc3zd3zf3zd2envz31zz__r4_strings_6_7z00, BgL_bgl_za762stringza7c3za7d3za74576z00, BGl_z62stringzc3zd3zf3z81zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4401z00zz__r4_strings_6_7z00, BgL_bgl_string4401za700za7za7_4577za7, "string-skip-right", 17 );
DEFINE_STRING( BGl_string4320z00zz__r4_strings_6_7z00, BgL_bgl_string4320za700za7za7_4578za7, "substring", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2replacez12zd2envz12zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2repl4579z00, BGl_z62stringzd2replacez12za2zz__r4_strings_6_7z00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string4402z00zz__r4_strings_6_7z00, BgL_bgl_string4402za700za7za7_4580za7, "_string-skip-right", 18 );
DEFINE_STRING( BGl_string4321z00zz__r4_strings_6_7z00, BgL_bgl_string4321za700za7za7_4581za7, "wrong number of arguments: [2..3] expected, provided", 52 );
DEFINE_STRING( BGl_string4403z00zz__r4_strings_6_7z00, BgL_bgl_string4403za700za7za7_4582za7, "string-char-skip", 16 );
DEFINE_STRING( BGl_string4322z00zz__r4_strings_6_7z00, BgL_bgl_string4322za700za7za7_4583za7, "_substring", 10 );
DEFINE_STRING( BGl_string4404z00zz__r4_strings_6_7z00, BgL_bgl_string4404za700za7za7_4584za7, "string-pred-skip", 16 );
DEFINE_STRING( BGl_string4323z00zz__r4_strings_6_7z00, BgL_bgl_string4323za700za7za7_4585za7, "Illegal start index ", 20 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2lengthzd2envz00zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2leng4586z00, BGl_z62stringzd2lengthzb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4324z00zz__r4_strings_6_7z00, BgL_bgl_string4324za700za7za7_4587za7, "Illegal end index ", 18 );
DEFINE_STRING( BGl_string4325z00zz__r4_strings_6_7z00, BgL_bgl_string4325za700za7za7_4588za7, "&substring-ur", 13 );
DEFINE_STRING( BGl_string4407z00zz__r4_strings_6_7z00, BgL_bgl_string4407za700za7za7_4589za7, "arg1736", 7 );
DEFINE_STRING( BGl_string4327z00zz__r4_strings_6_7z00, BgL_bgl_string4327za700za7za7_4590za7, "string-contains", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2skipzd2rightzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2skipza7d4591z00, opt_generic_entry, BGl__stringzd2skipzd2rightz00zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_STRING( BGl_string4409z00zz__r4_strings_6_7z00, BgL_bgl_string4409za700za7za7_4592za7, "string-prefix-length::int", 25 );
DEFINE_STRING( BGl_string4328z00zz__r4_strings_6_7z00, BgL_bgl_string4328za700za7za7_4593za7, "_string-contains", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2envzd2zz__r4_strings_6_7z00, BgL_bgl_za762stringza762za7za7__4594z00, va_generic_entry, BGl_z62stringz62zz__r4_strings_6_7z00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string4410z00zz__r4_strings_6_7z00, BgL_bgl_string4410za700za7za7_4595za7, "wrong number of arguments: [2..6] expected, provided", 52 );
DEFINE_STRING( BGl_string4411z00zz__r4_strings_6_7z00, BgL_bgl_string4411za700za7za7_4596za7, "_string-prefix-length", 21 );
DEFINE_STRING( BGl_string4330z00zz__r4_strings_6_7z00, BgL_bgl_string4330za700za7za7_4597za7, "string-contains-ci", 18 );
DEFINE_STRING( BGl_string4331z00zz__r4_strings_6_7z00, BgL_bgl_string4331za700za7za7_4598za7, "_string-contains-ci", 19 );
DEFINE_STRING( BGl_string4413z00zz__r4_strings_6_7z00, BgL_bgl_string4413za700za7za7_4599za7, "string-prefix-length", 20 );
DEFINE_STRING( BGl_string4332z00zz__r4_strings_6_7z00, BgL_bgl_string4332za700za7za7_4600za7, "&string-compare3", 16 );
DEFINE_STRING( BGl_string4414z00zz__r4_strings_6_7z00, BgL_bgl_string4414za700za7za7_4601za7, "Index negative end index `", 26 );
DEFINE_STRING( BGl_string4333z00zz__r4_strings_6_7z00, BgL_bgl_string4333za700za7za7_4602za7, "&string-compare3-ci", 19 );
DEFINE_STRING( BGl_string4415z00zz__r4_strings_6_7z00, BgL_bgl_string4415za700za7za7_4603za7, "end1", 4 );
DEFINE_STRING( BGl_string4334z00zz__r4_strings_6_7z00, BgL_bgl_string4334za700za7za7_4604za7, "", 0 );
DEFINE_STRING( BGl_string4416z00zz__r4_strings_6_7z00, BgL_bgl_string4416za700za7za7_4605za7, "'", 1 );
DEFINE_STRING( BGl_string4335z00zz__r4_strings_6_7z00, BgL_bgl_string4335za700za7za7_4606za7, "string-append", 13 );
DEFINE_STRING( BGl_string4417z00zz__r4_strings_6_7z00, BgL_bgl_string4417za700za7za7_4607za7, "Too large end index `", 21 );
DEFINE_STRING( BGl_string4336z00zz__r4_strings_6_7z00, BgL_bgl_string4336za700za7za7_4608za7, "pair", 4 );
DEFINE_STRING( BGl_string4418z00zz__r4_strings_6_7z00, BgL_bgl_string4418za700za7za7_4609za7, "end2", 4 );
DEFINE_STRING( BGl_string4337z00zz__r4_strings_6_7z00, BgL_bgl_string4337za700za7za7_4610za7, "loop", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2charzd2indexzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2charza7d4611z00, opt_generic_entry, BGl__stringzd2charzd2indexz00zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_STRING( BGl_string4419z00zz__r4_strings_6_7z00, BgL_bgl_string4419za700za7za7_4612za7, "Index negative start index `", 28 );
DEFINE_STRING( BGl_string4338z00zz__r4_strings_6_7z00, BgL_bgl_string4338za700za7za7_4613za7, "&list->string", 13 );
DEFINE_STRING( BGl_string4339z00zz__r4_strings_6_7z00, BgL_bgl_string4339za700za7za7_4614za7, "&string->list", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2deletezd2envz00zz__r4_strings_6_7z00, BgL_bgl__stringza7d2delete4615za7, opt_generic_entry, BGl__stringzd2deletezd2zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2nullzf3zd2envzf3zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2null4616z00, BGl_z62stringzd2nullzf3z43zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4420z00zz__r4_strings_6_7z00, BgL_bgl_string4420za700za7za7_4617za7, "start1", 6 );
DEFINE_STRING( BGl_string4421z00zz__r4_strings_6_7z00, BgL_bgl_string4421za700za7za7_4618za7, "Too large start index `", 23 );
DEFINE_STRING( BGl_string4340z00zz__r4_strings_6_7z00, BgL_bgl_string4340za700za7za7_4619za7, "&string-copy", 12 );
DEFINE_STRING( BGl_string4422z00zz__r4_strings_6_7z00, BgL_bgl_string4422za700za7za7_4620za7, "start2", 6 );
DEFINE_STRING( BGl_string4341z00zz__r4_strings_6_7z00, BgL_bgl_string4341za700za7za7_4621za7, "&string-fill!", 13 );
DEFINE_STRING( BGl_string4342z00zz__r4_strings_6_7z00, BgL_bgl_string4342za700za7za7_4622za7, "&string-upcase", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_escapezd2Czd2stringzd2envzd2zz__r4_strings_6_7z00, BgL_bgl_za762escapeza7d2cza7d24623za7, BGl_z62escapezd2Czd2stringz62zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4424z00zz__r4_strings_6_7z00, BgL_bgl_string4424za700za7za7_4624za7, "string-prefix-length-ci::int", 28 );
DEFINE_STRING( BGl_string4343z00zz__r4_strings_6_7z00, BgL_bgl_string4343za700za7za7_4625za7, "&string-downcase", 16 );
DEFINE_STRING( BGl_string4425z00zz__r4_strings_6_7z00, BgL_bgl_string4425za700za7za7_4626za7, "_string-prefix-length-ci", 24 );
DEFINE_STRING( BGl_string4344z00zz__r4_strings_6_7z00, BgL_bgl_string4344za700za7za7_4627za7, "&string-upcase!", 15 );
DEFINE_STRING( BGl_string4345z00zz__r4_strings_6_7z00, BgL_bgl_string4345za700za7za7_4628za7, "&string-downcase!", 17 );
DEFINE_STRING( BGl_string4427z00zz__r4_strings_6_7z00, BgL_bgl_string4427za700za7za7_4629za7, "string-prefix-length-ci", 23 );
DEFINE_STRING( BGl_string4346z00zz__r4_strings_6_7z00, BgL_bgl_string4346za700za7za7_4630za7, "&string-capitalize!", 19 );
DEFINE_STRING( BGl_string4347z00zz__r4_strings_6_7z00, BgL_bgl_string4347za700za7za7_4631za7, "&string-capitalize", 18 );
DEFINE_STRING( BGl_string4429z00zz__r4_strings_6_7z00, BgL_bgl_string4429za700za7za7_4632za7, "string-suffix-length::int", 25 );
DEFINE_STRING( BGl_string4348z00zz__r4_strings_6_7z00, BgL_bgl_string4348za700za7za7_4633za7, "&string-for-read", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2cutzd2envz00zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2cutza74634za7, va_generic_entry, BGl_z62stringzd2cutzb0zz__r4_strings_6_7z00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string4349z00zz__r4_strings_6_7z00, BgL_bgl_string4349za700za7za7_4635za7, "&escape-C-string", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_substringzd2urzd2envz00zz__r4_strings_6_7z00, BgL_bgl_za762substringza7d2u4636z00, BGl_z62substringzd2urzb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2suffixzd2cizf3zd2envz21zz__r4_strings_6_7z00, BgL_bgl__stringza7d2suffix4637za7, opt_generic_entry, BGl__stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_substringzd2cizd3zf3zd2envz20zz__r4_strings_6_7z00, BgL_bgl_za762substringza7d2c4638z00, BGl_z62substringzd2cizd3zf3z90zz__r4_strings_6_7z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_escapezd2schemezd2stringzd2envzd2zz__r4_strings_6_7z00, BgL_bgl_za762escapeza7d2sche4639z00, BGl_z62escapezd2schemezd2stringz62zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4430z00zz__r4_strings_6_7z00, BgL_bgl_string4430za700za7za7_4640za7, "_string-suffix-length", 21 );
DEFINE_STRING( BGl_string4350z00zz__r4_strings_6_7z00, BgL_bgl_string4350za700za7za7_4641za7, "&escape-scheme-string", 21 );
DEFINE_STRING( BGl_string4432z00zz__r4_strings_6_7z00, BgL_bgl_string4432za700za7za7_4642za7, "string-suffix-length", 20 );
DEFINE_STRING( BGl_string4351z00zz__r4_strings_6_7z00, BgL_bgl_string4351za700za7za7_4643za7, "&string-as-read", 15 );
DEFINE_STRING( BGl_string4352z00zz__r4_strings_6_7z00, BgL_bgl_string4352za700za7za7_4644za7, "&blit-string-ur!", 16 );
DEFINE_STRING( BGl_string4434z00zz__r4_strings_6_7z00, BgL_bgl_string4434za700za7za7_4645za7, "string-suffix-length-ci::int", 28 );
DEFINE_STRING( BGl_string4353z00zz__r4_strings_6_7z00, BgL_bgl_string4353za700za7za7_4646za7, "]", 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2cize3zd3zf3zd2envzc3zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2ciza7e4647za7, BGl_z62stringzd2cize3zd3zf3z73zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2cizc3zf3zd2envz30zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2ciza7c4648za7, BGl_z62stringzd2cizc3zf3z80zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4435z00zz__r4_strings_6_7z00, BgL_bgl_string4435za700za7za7_4649za7, "_string-suffix-length-ci", 24 );
DEFINE_STRING( BGl_string4354z00zz__r4_strings_6_7z00, BgL_bgl_string4354za700za7za7_4650za7, "] [dest:", 8 );
DEFINE_STRING( BGl_string4355z00zz__r4_strings_6_7z00, BgL_bgl_string4355za700za7za7_4651za7, "[src:", 5 );
DEFINE_STRING( BGl_string4437z00zz__r4_strings_6_7z00, BgL_bgl_string4437za700za7za7_4652za7, "string-suffix-length-ci", 23 );
DEFINE_STRING( BGl_string4356z00zz__r4_strings_6_7z00, BgL_bgl_string4356za700za7za7_4653za7, "blit-string!:Index and length out of range", 42 );
DEFINE_STRING( BGl_string4357z00zz__r4_strings_6_7z00, BgL_bgl_string4357za700za7za7_4654za7, "&blit-string!", 13 );
DEFINE_STRING( BGl_string4439z00zz__r4_strings_6_7z00, BgL_bgl_string4439za700za7za7_4655za7, "string-prefix?::bool", 20 );
DEFINE_STRING( BGl_string4358z00zz__r4_strings_6_7z00, BgL_bgl_string4358za700za7za7_4656za7, "&string-shrink!", 15 );
DEFINE_STRING( BGl_string4359z00zz__r4_strings_6_7z00, BgL_bgl_string4359za700za7za7_4657za7, "&string-replace", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_blitzd2stringz12zd2envz12zz__r4_strings_6_7z00, BgL_bgl_za762blitza7d2string4658z00, BGl_z62blitzd2stringz12za2zz__r4_strings_6_7z00, 0L, BUNSPEC, 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2hexzd2externzd2envzd2zz__r4_strings_6_7z00, BgL_bgl__stringza7d2hexza7d24659z00, opt_generic_entry, BGl__stringzd2hexzd2externz00zz__r4_strings_6_7z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2downcasezd2envz00zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2down4660z00, BGl_z62stringzd2downcasezb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3stringzd2envze3zz__r4_strings_6_7z00, BgL_bgl_za762listza7d2za7e3str4661za7, BGl_z62listzd2ze3stringz53zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2refzd2envz00zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2refza74662za7, BGl_z62stringzd2refzb0zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2aszd2readzd2envzd2zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2asza7d4663za7, BGl_z62stringzd2aszd2readz62zz__r4_strings_6_7z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4440z00zz__r4_strings_6_7z00, BgL_bgl_string4440za700za7za7_4664za7, "_string-prefix?", 15 );
DEFINE_STRING( BGl_string4360z00zz__r4_strings_6_7z00, BgL_bgl_string4360za700za7za7_4665za7, "&string-replace!", 16 );
DEFINE_STRING( BGl_string4442z00zz__r4_strings_6_7z00, BgL_bgl_string4442za700za7za7_4666za7, "string-prefix?", 14 );
DEFINE_STRING( BGl_string4362z00zz__r4_strings_6_7z00, BgL_bgl_string4362za700za7za7_4667za7, "string-delete", 13 );
DEFINE_STRING( BGl_string4281z00zz__r4_strings_6_7z00, BgL_bgl_string4281za700za7za7_4668za7, "/tmp/4.4a/runtime/Ieee/string.scm", 33 );
DEFINE_STRING( BGl_string4444z00zz__r4_strings_6_7z00, BgL_bgl_string4444za700za7za7_4669za7, "string-prefix-ci?::bool", 23 );
DEFINE_STRING( BGl_string4363z00zz__r4_strings_6_7z00, BgL_bgl_string4363za700za7za7_4670za7, "wrong number of arguments: [2..4] expected, provided", 52 );
DEFINE_STRING( BGl_string4282z00zz__r4_strings_6_7z00, BgL_bgl_string4282za700za7za7_4671za7, "&string-null?", 13 );
DEFINE_STRING( BGl_string4445z00zz__r4_strings_6_7z00, BgL_bgl_string4445za700za7za7_4672za7, "_string-prefix-ci?", 18 );
DEFINE_STRING( BGl_string4364z00zz__r4_strings_6_7z00, BgL_bgl_string4364za700za7za7_4673za7, "_string-delete", 14 );
DEFINE_STRING( BGl_string4283z00zz__r4_strings_6_7z00, BgL_bgl_string4283za700za7za7_4674za7, "bstring", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2fillz12zd2envz12zz__r4_strings_6_7z00, BgL_bgl_za762stringza7d2fill4675z00, BGl_z62stringzd2fillz12za2zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4365z00zz__r4_strings_6_7z00, BgL_bgl_string4365za700za7za7_4676za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string4447z00zz__r4_strings_6_7z00, BgL_bgl_string4447za700za7za7_4677za7, "string-prefix-ci?", 17 );
DEFINE_STRING( BGl_string4285z00zz__r4_strings_6_7z00, BgL_bgl_string4285za700za7za7_4678za7, "make-string", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzc3zf3zd2envze2zz__r4_strings_6_7z00, BgL_bgl_za762stringza7c3za7f3za74679z00, BGl_z62stringzc3zf3z52zz__r4_strings_6_7z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4286z00zz__r4_strings_6_7z00, BgL_bgl_string4286za700za7za7_4680za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string4449z00zz__r4_strings_6_7z00, BgL_bgl_string4449za700za7za7_4681za7, "string-suffix?::bool", 20 );
DEFINE_STRING( BGl_string4368z00zz__r4_strings_6_7z00, BgL_bgl_string4368za700za7za7_4682za7, "funcall", 7 );
DEFINE_STRING( BGl_string4287z00zz__r4_strings_6_7z00, BgL_bgl_string4287za700za7za7_4683za7, "_make-string", 12 );
DEFINE_STRING( BGl_string4288z00zz__r4_strings_6_7z00, BgL_bgl_string4288za700za7za7_4684za7, "bint", 4 );
DEFINE_STRING( BGl_string4289z00zz__r4_strings_6_7z00, BgL_bgl_string4289za700za7za7_4685za7, "bchar", 5 );
DEFINE_STRING( BGl_string4450z00zz__r4_strings_6_7z00, BgL_bgl_string4450za700za7za7_4686za7, "_string-suffix?", 15 );
DEFINE_STRING( BGl_string4370z00zz__r4_strings_6_7z00, BgL_bgl_string4370za700za7za7_4687za7, "pred", 4 );
DEFINE_STRING( BGl_string4452z00zz__r4_strings_6_7z00, BgL_bgl_string4452za700za7za7_4688za7, "string-suffix?", 14 );
DEFINE_STRING( BGl_string4290z00zz__r4_strings_6_7z00, BgL_bgl_string4290za700za7za7_4689za7, "string", 6 );
DEFINE_STRING( BGl_string4372z00zz__r4_strings_6_7z00, BgL_bgl_string4372za700za7za7_4690za7, "cc", 2 );
DEFINE_STRING( BGl_string4291z00zz__r4_strings_6_7z00, BgL_bgl_string4291za700za7za7_4691za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string4454z00zz__r4_strings_6_7z00, BgL_bgl_string4454za700za7za7_4692za7, "string-suffix-ci?::bool", 23 );
DEFINE_STRING( BGl_string4373z00zz__r4_strings_6_7z00, BgL_bgl_string4373za700za7za7_4693za7, "start index out of range", 24 );
DEFINE_STRING( BGl_string4292z00zz__r4_strings_6_7z00, BgL_bgl_string4292za700za7za7_4694za7, "&string-length", 14 );
DEFINE_STRING( BGl_string4455z00zz__r4_strings_6_7z00, BgL_bgl_string4455za700za7za7_4695za7, "_string-suffix-ci?", 18 );
DEFINE_STRING( BGl_string4374z00zz__r4_strings_6_7z00, BgL_bgl_string4374za700za7za7_4696za7, "end index out of range", 22 );
DEFINE_STRING( BGl_string4293z00zz__r4_strings_6_7z00, BgL_bgl_string4293za700za7za7_4697za7, "string-ref", 10 );
DEFINE_STRING( BGl_string4456z00zz__r4_strings_6_7z00, BgL_bgl_string4456za700za7za7_4698za7, "string-suffix-ci?", 17 );
DEFINE_STRING( BGl_string4375z00zz__r4_strings_6_7z00, BgL_bgl_string4375za700za7za7_4699za7, "Illegal indices", 15 );
DEFINE_STRING( BGl_string4294z00zz__r4_strings_6_7z00, BgL_bgl_string4294za700za7za7_4700za7, "&string-ref", 11 );
DEFINE_STRING( BGl_string4376z00zz__r4_strings_6_7z00, BgL_bgl_string4376za700za7za7_4701za7, "Illegal char/charset/predicate", 30 );
DEFINE_STRING( BGl_string4295z00zz__r4_strings_6_7z00, BgL_bgl_string4295za700za7za7_4702za7, "string-set!", 11 );
DEFINE_STRING( BGl_string4458z00zz__r4_strings_6_7z00, BgL_bgl_string4458za700za7za7_4703za7, "string-natural-compare3", 23 );
DEFINE_STRING( BGl_string4377z00zz__r4_strings_6_7z00, BgL_bgl_string4377za700za7za7_4704za7, "delim?", 6 );
DEFINE_STRING( BGl_string4296z00zz__r4_strings_6_7z00, BgL_bgl_string4296za700za7za7_4705za7, "&string-set!", 12 );
DEFINE_STRING( BGl_string4459z00zz__r4_strings_6_7z00, BgL_bgl_string4459za700za7za7_4706za7, "_string-natural-compare3", 24 );
DEFINE_STRING( BGl_string4378z00zz__r4_strings_6_7z00, BgL_bgl_string4378za700za7za7_4707za7, " \t\n", 3 );
DEFINE_STRING( BGl_string4297z00zz__r4_strings_6_7z00, BgL_bgl_string4297za700za7za7_4708za7, "&string-ref-ur", 14 );
DEFINE_STRING( BGl_string4379z00zz__r4_strings_6_7z00, BgL_bgl_string4379za700za7za7_4709za7, "&string-split", 13 );
DEFINE_STRING( BGl_string4298z00zz__r4_strings_6_7z00, BgL_bgl_string4298za700za7za7_4710za7, "&string-set-ur!", 15 );
DEFINE_STRING( BGl_string4299z00zz__r4_strings_6_7z00, BgL_bgl_string4299za700za7za7_4711za7, "&string=?", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2prefixzf3zd2envzf3zz__r4_strings_6_7z00, BgL_bgl__stringza7d2prefix4712za7, opt_generic_entry, BGl__stringzd2prefixzf3z21zz__r4_strings_6_7z00, BFALSE, -1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol4423z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4426z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4428z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4431z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4433z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4436z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_list4405z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4438z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4441z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4361z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4443z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4446z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4284z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4448z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4367z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4369z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4451z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4371z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4453z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4457z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4460z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4382z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4464z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4385z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4390z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4473z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4394z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_list4366z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4398z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_list4397z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4301z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4306z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4319z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4400z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4406z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4326z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4408z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4329z00zz__r4_strings_6_7z00) );
ADD_ROOT( (void *)(&BGl_symbol4412z00zz__r4_strings_6_7z00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long BgL_checksumz00_6308, char * BgL_fromz00_6309)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_strings_6_7z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_strings_6_7z00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__r4_strings_6_7z00(); 
BGl_cnstzd2initzd2zz__r4_strings_6_7z00(); 
return 
BGl_importedzd2moduleszd2initz00zz__r4_strings_6_7z00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_strings_6_7z00()
{
{ /* Ieee/string.scm 18 */
BGl_symbol4284z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4285z00zz__r4_strings_6_7z00); 
BGl_symbol4301z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4302z00zz__r4_strings_6_7z00); 
BGl_symbol4306z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4307z00zz__r4_strings_6_7z00); 
BGl_symbol4319z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4320z00zz__r4_strings_6_7z00); 
BGl_symbol4326z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4327z00zz__r4_strings_6_7z00); 
BGl_symbol4329z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4330z00zz__r4_strings_6_7z00); 
BGl_symbol4361z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4362z00zz__r4_strings_6_7z00); 
BGl_symbol4367z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4368z00zz__r4_strings_6_7z00); 
BGl_symbol4369z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4370z00zz__r4_strings_6_7z00); 
BGl_symbol4371z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4372z00zz__r4_strings_6_7z00); 
BGl_list4366z00zz__r4_strings_6_7z00 = 
MAKE_YOUNG_PAIR(BGl_symbol4367z00zz__r4_strings_6_7z00, 
MAKE_YOUNG_PAIR(BGl_symbol4369z00zz__r4_strings_6_7z00, 
MAKE_YOUNG_PAIR(BGl_symbol4369z00zz__r4_strings_6_7z00, 
MAKE_YOUNG_PAIR(BGl_symbol4371z00zz__r4_strings_6_7z00, BNIL)))); 
BGl_symbol4382z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4383z00zz__r4_strings_6_7z00); 
BGl_symbol4385z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4386z00zz__r4_strings_6_7z00); 
BGl_symbol4390z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4391z00zz__r4_strings_6_7z00); 
BGl_symbol4394z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4395z00zz__r4_strings_6_7z00); 
BGl_symbol4398z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4399z00zz__r4_strings_6_7z00); 
BGl_list4397z00zz__r4_strings_6_7z00 = 
MAKE_YOUNG_PAIR(BGl_symbol4367z00zz__r4_strings_6_7z00, 
MAKE_YOUNG_PAIR(BGl_symbol4369z00zz__r4_strings_6_7z00, 
MAKE_YOUNG_PAIR(BGl_symbol4369z00zz__r4_strings_6_7z00, 
MAKE_YOUNG_PAIR(BGl_symbol4398z00zz__r4_strings_6_7z00, BNIL)))); 
BGl_symbol4400z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4401z00zz__r4_strings_6_7z00); 
BGl_symbol4406z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4407z00zz__r4_strings_6_7z00); 
BGl_list4405z00zz__r4_strings_6_7z00 = 
MAKE_YOUNG_PAIR(BGl_symbol4367z00zz__r4_strings_6_7z00, 
MAKE_YOUNG_PAIR(BGl_symbol4369z00zz__r4_strings_6_7z00, 
MAKE_YOUNG_PAIR(BGl_symbol4369z00zz__r4_strings_6_7z00, 
MAKE_YOUNG_PAIR(BGl_symbol4406z00zz__r4_strings_6_7z00, BNIL)))); 
BGl_symbol4408z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4409z00zz__r4_strings_6_7z00); 
BGl_symbol4412z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4413z00zz__r4_strings_6_7z00); 
BGl_symbol4423z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4424z00zz__r4_strings_6_7z00); 
BGl_symbol4426z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4427z00zz__r4_strings_6_7z00); 
BGl_symbol4428z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4429z00zz__r4_strings_6_7z00); 
BGl_symbol4431z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4432z00zz__r4_strings_6_7z00); 
BGl_symbol4433z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4434z00zz__r4_strings_6_7z00); 
BGl_symbol4436z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4437z00zz__r4_strings_6_7z00); 
BGl_symbol4438z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4439z00zz__r4_strings_6_7z00); 
BGl_symbol4441z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4442z00zz__r4_strings_6_7z00); 
BGl_symbol4443z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4444z00zz__r4_strings_6_7z00); 
BGl_symbol4446z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4447z00zz__r4_strings_6_7z00); 
BGl_symbol4448z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4449z00zz__r4_strings_6_7z00); 
BGl_symbol4451z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4452z00zz__r4_strings_6_7z00); 
BGl_symbol4453z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4454z00zz__r4_strings_6_7z00); 
BGl_symbol4457z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4458z00zz__r4_strings_6_7z00); 
BGl_symbol4460z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4461z00zz__r4_strings_6_7z00); 
BGl_symbol4464z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4465z00zz__r4_strings_6_7z00); 
return ( 
BGl_symbol4473z00zz__r4_strings_6_7z00 = 
bstring_to_symbol(BGl_string4474z00zz__r4_strings_6_7z00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__r4_strings_6_7z00()
{
{ /* Ieee/string.scm 18 */
return 
bgl_gc_roots_register();} 

}



/* string? */
BGL_EXPORTED_DEF bool_t BGl_stringzf3zf3zz__r4_strings_6_7z00(obj_t BgL_objz00_3)
{
{ /* Ieee/string.scm 296 */
return 
STRINGP(BgL_objz00_3);} 

}



/* &string? */
obj_t BGl_z62stringzf3z91zz__r4_strings_6_7z00(obj_t BgL_envz00_4749, obj_t BgL_objz00_4750)
{
{ /* Ieee/string.scm 296 */
return 
BBOOL(
BGl_stringzf3zf3zz__r4_strings_6_7z00(BgL_objz00_4750));} 

}



/* string-null? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2nullzf3z21zz__r4_strings_6_7z00(obj_t BgL_strz00_4)
{
{ /* Ieee/string.scm 302 */
return 
(
STRING_LENGTH(BgL_strz00_4)==((long)0));} 

}



/* &string-null? */
obj_t BGl_z62stringzd2nullzf3z43zz__r4_strings_6_7z00(obj_t BgL_envz00_4751, obj_t BgL_strz00_4752)
{
{ /* Ieee/string.scm 302 */
{ /* Ieee/string.scm 303 */
bool_t BgL_tmpz00_6370;
{ /* Ieee/string.scm 303 */
obj_t BgL_auxz00_6371;
if(
STRINGP(BgL_strz00_4752))
{ /* Ieee/string.scm 303 */
BgL_auxz00_6371 = BgL_strz00_4752
; }  else 
{ 
obj_t BgL_auxz00_6374;
BgL_auxz00_6374 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)14952)), BGl_string4282z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_strz00_4752); 
FAILURE(BgL_auxz00_6374,BFALSE,BFALSE);} 
BgL_tmpz00_6370 = 
BGl_stringzd2nullzf3z21zz__r4_strings_6_7z00(BgL_auxz00_6371); } 
return 
BBOOL(BgL_tmpz00_6370);} } 

}



/* _make-string */
obj_t BGl__makezd2stringzd2zz__r4_strings_6_7z00(obj_t BgL_env1093z00_8, obj_t BgL_opt1092z00_7)
{
{ /* Ieee/string.scm 308 */
{ /* Ieee/string.scm 308 */
obj_t BgL_g1094z00_6259;
BgL_g1094z00_6259 = 
VECTOR_REF(BgL_opt1092z00_7,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1092z00_7)) { case ((long)1) : 

{ /* Ieee/string.scm 308 */

{ /* Ieee/string.scm 308 */
obj_t BgL_res2204z00_6261;
{ /* Ieee/string.scm 308 */
long BgL_kz00_6262;
{ /* Ieee/string.scm 308 */
obj_t BgL_tmpz00_6381;
if(
INTEGERP(BgL_g1094z00_6259))
{ /* Ieee/string.scm 308 */
BgL_tmpz00_6381 = BgL_g1094z00_6259
; }  else 
{ 
obj_t BgL_auxz00_6384;
BgL_auxz00_6384 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)15199)), BGl_string4287z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_g1094z00_6259); 
FAILURE(BgL_auxz00_6384,BFALSE,BFALSE);} 
BgL_kz00_6262 = 
(long)CINT(BgL_tmpz00_6381); } 
BgL_res2204z00_6261 = 
make_string(BgL_kz00_6262, ((unsigned char)' ')); } 
return BgL_res2204z00_6261;} } break;case ((long)2) : 

{ /* Ieee/string.scm 308 */
obj_t BgL_charz00_6263;
BgL_charz00_6263 = 
VECTOR_REF(BgL_opt1092z00_7,((long)1)); 
{ /* Ieee/string.scm 308 */

{ /* Ieee/string.scm 308 */
obj_t BgL_res2205z00_6264;
{ /* Ieee/string.scm 308 */
long BgL_kz00_6265;
{ /* Ieee/string.scm 308 */
obj_t BgL_tmpz00_6391;
if(
INTEGERP(BgL_g1094z00_6259))
{ /* Ieee/string.scm 308 */
BgL_tmpz00_6391 = BgL_g1094z00_6259
; }  else 
{ 
obj_t BgL_auxz00_6394;
BgL_auxz00_6394 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)15199)), BGl_string4287z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_g1094z00_6259); 
FAILURE(BgL_auxz00_6394,BFALSE,BFALSE);} 
BgL_kz00_6265 = 
(long)CINT(BgL_tmpz00_6391); } 
{ /* Ieee/string.scm 309 */
unsigned char BgL_tmpz00_6399;
{ /* Ieee/string.scm 309 */
obj_t BgL_tmpz00_6400;
if(
CHARP(BgL_charz00_6263))
{ /* Ieee/string.scm 309 */
BgL_tmpz00_6400 = BgL_charz00_6263
; }  else 
{ 
obj_t BgL_auxz00_6403;
BgL_auxz00_6403 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)15275)), BGl_string4287z00zz__r4_strings_6_7z00, BGl_string4289z00zz__r4_strings_6_7z00, BgL_charz00_6263); 
FAILURE(BgL_auxz00_6403,BFALSE,BFALSE);} 
BgL_tmpz00_6399 = 
CCHAR(BgL_tmpz00_6400); } 
BgL_res2205z00_6264 = 
make_string(BgL_kz00_6265, BgL_tmpz00_6399); } } 
return BgL_res2205z00_6264;} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4284z00zz__r4_strings_6_7z00, BGl_string4286z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1092z00_7)));} } } } 

}



/* make-string */
BGL_EXPORTED_DEF obj_t BGl_makezd2stringzd2zz__r4_strings_6_7z00(long BgL_kz00_5, obj_t BgL_charz00_6)
{
{ /* Ieee/string.scm 308 */
{ /* Ieee/string.scm 309 */
unsigned char BgL_tmpz00_6414;
{ /* Ieee/string.scm 309 */
obj_t BgL_tmpz00_6415;
if(
CHARP(BgL_charz00_6))
{ /* Ieee/string.scm 309 */
BgL_tmpz00_6415 = BgL_charz00_6
; }  else 
{ 
obj_t BgL_auxz00_6418;
BgL_auxz00_6418 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)15275)), BGl_string4285z00zz__r4_strings_6_7z00, BGl_string4289z00zz__r4_strings_6_7z00, BgL_charz00_6); 
FAILURE(BgL_auxz00_6418,BFALSE,BFALSE);} 
BgL_tmpz00_6414 = 
CCHAR(BgL_tmpz00_6415); } 
return 
make_string(BgL_kz00_5, BgL_tmpz00_6414);} } 

}



/* string */
BGL_EXPORTED_DEF obj_t BGl_stringz00zz__r4_strings_6_7z00(obj_t BgL_charsz00_9)
{
{ /* Ieee/string.scm 314 */
{ /* Ieee/string.scm 315 */
obj_t BgL_auxz00_6424;
{ /* Ieee/string.scm 315 */
bool_t BgL_test4719z00_6425;
if(
PAIRP(BgL_charsz00_9))
{ /* Ieee/string.scm 315 */
BgL_test4719z00_6425 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 315 */
BgL_test4719z00_6425 = 
NULLP(BgL_charsz00_9)
; } 
if(BgL_test4719z00_6425)
{ /* Ieee/string.scm 315 */
BgL_auxz00_6424 = BgL_charsz00_9
; }  else 
{ 
obj_t BgL_auxz00_6429;
BgL_auxz00_6429 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)15555)), BGl_string4290z00zz__r4_strings_6_7z00, BGl_string4291z00zz__r4_strings_6_7z00, BgL_charsz00_9); 
FAILURE(BgL_auxz00_6429,BFALSE,BFALSE);} } 
return 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_auxz00_6424);} } 

}



/* &string */
obj_t BGl_z62stringz62zz__r4_strings_6_7z00(obj_t BgL_envz00_4753, obj_t BgL_charsz00_4754)
{
{ /* Ieee/string.scm 314 */
return 
BGl_stringz00zz__r4_strings_6_7z00(BgL_charsz00_4754);} 

}



/* string-length */
BGL_EXPORTED_DEF long BGl_stringzd2lengthzd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_10)
{
{ /* Ieee/string.scm 320 */
return 
STRING_LENGTH(BgL_stringz00_10);} 

}



/* &string-length */
obj_t BGl_z62stringzd2lengthzb0zz__r4_strings_6_7z00(obj_t BgL_envz00_4755, obj_t BgL_stringz00_4756)
{
{ /* Ieee/string.scm 320 */
{ /* Ieee/string.scm 321 */
long BgL_tmpz00_6436;
{ /* Ieee/string.scm 321 */
obj_t BgL_auxz00_6437;
if(
STRINGP(BgL_stringz00_4756))
{ /* Ieee/string.scm 321 */
BgL_auxz00_6437 = BgL_stringz00_4756
; }  else 
{ 
obj_t BgL_auxz00_6440;
BgL_auxz00_6440 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)15827)), BGl_string4292z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4756); 
FAILURE(BgL_auxz00_6440,BFALSE,BFALSE);} 
BgL_tmpz00_6436 = 
BGl_stringzd2lengthzd2zz__r4_strings_6_7z00(BgL_auxz00_6437); } 
return 
BINT(BgL_tmpz00_6436);} } 

}



/* string-ref */
BGL_EXPORTED_DEF unsigned char BGl_stringzd2refzd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_11, long BgL_kz00_12)
{
{ /* Ieee/string.scm 326 */
{ /* Ieee/string.scm 327 */
long BgL_l2917z00_6270;
BgL_l2917z00_6270 = 
STRING_LENGTH(BgL_stringz00_11); 
if(
BOUND_CHECK(BgL_kz00_12, BgL_l2917z00_6270))
{ /* Ieee/string.scm 327 */
return 
STRING_REF(BgL_stringz00_11, BgL_kz00_12);}  else 
{ 
obj_t BgL_auxz00_6450;
BgL_auxz00_6450 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_11, 
(int)(BgL_l2917z00_6270), 
(int)(BgL_kz00_12)); 
FAILURE(BgL_auxz00_6450,BFALSE,BFALSE);} } } 

}



/* &string-ref */
obj_t BGl_z62stringzd2refzb0zz__r4_strings_6_7z00(obj_t BgL_envz00_4757, obj_t BgL_stringz00_4758, obj_t BgL_kz00_4759)
{
{ /* Ieee/string.scm 326 */
{ /* Ieee/string.scm 327 */
unsigned char BgL_tmpz00_6456;
{ /* Ieee/string.scm 327 */
long BgL_auxz00_6464;obj_t BgL_auxz00_6457;
{ /* Ieee/string.scm 327 */
obj_t BgL_tmpz00_6465;
if(
INTEGERP(BgL_kz00_4759))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_6465 = BgL_kz00_4759
; }  else 
{ 
obj_t BgL_auxz00_6468;
BgL_auxz00_6468 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4294z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_kz00_4759); 
FAILURE(BgL_auxz00_6468,BFALSE,BFALSE);} 
BgL_auxz00_6464 = 
(long)CINT(BgL_tmpz00_6465); } 
if(
STRINGP(BgL_stringz00_4758))
{ /* Ieee/string.scm 327 */
BgL_auxz00_6457 = BgL_stringz00_4758
; }  else 
{ 
obj_t BgL_auxz00_6460;
BgL_auxz00_6460 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4294z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4758); 
FAILURE(BgL_auxz00_6460,BFALSE,BFALSE);} 
BgL_tmpz00_6456 = 
BGl_stringzd2refzd2zz__r4_strings_6_7z00(BgL_auxz00_6457, BgL_auxz00_6464); } 
return 
BCHAR(BgL_tmpz00_6456);} } 

}



/* string-set! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2setz12zc0zz__r4_strings_6_7z00(obj_t BgL_stringz00_13, long BgL_kz00_14, unsigned char BgL_charz00_15)
{
{ /* Ieee/string.scm 332 */
{ /* Ieee/string.scm 333 */
long BgL_l2921z00_6271;
BgL_l2921z00_6271 = 
STRING_LENGTH(BgL_stringz00_13); 
if(
BOUND_CHECK(BgL_kz00_14, BgL_l2921z00_6271))
{ /* Ieee/string.scm 333 */
return 
STRING_SET(BgL_stringz00_13, BgL_kz00_14, BgL_charz00_15);}  else 
{ 
obj_t BgL_auxz00_6479;
BgL_auxz00_6479 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16409)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_stringz00_13, 
(int)(BgL_l2921z00_6271), 
(int)(BgL_kz00_14)); 
FAILURE(BgL_auxz00_6479,BFALSE,BFALSE);} } } 

}



/* &string-set! */
obj_t BGl_z62stringzd2setz12za2zz__r4_strings_6_7z00(obj_t BgL_envz00_4760, obj_t BgL_stringz00_4761, obj_t BgL_kz00_4762, obj_t BgL_charz00_4763)
{
{ /* Ieee/string.scm 332 */
{ /* Ieee/string.scm 333 */
unsigned char BgL_auxz00_6501;long BgL_auxz00_6492;obj_t BgL_auxz00_6485;
{ /* Ieee/string.scm 333 */
obj_t BgL_tmpz00_6502;
if(
CHARP(BgL_charz00_4763))
{ /* Ieee/string.scm 333 */
BgL_tmpz00_6502 = BgL_charz00_4763
; }  else 
{ 
obj_t BgL_auxz00_6505;
BgL_auxz00_6505 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16409)), BGl_string4296z00zz__r4_strings_6_7z00, BGl_string4289z00zz__r4_strings_6_7z00, BgL_charz00_4763); 
FAILURE(BgL_auxz00_6505,BFALSE,BFALSE);} 
BgL_auxz00_6501 = 
CCHAR(BgL_tmpz00_6502); } 
{ /* Ieee/string.scm 333 */
obj_t BgL_tmpz00_6493;
if(
INTEGERP(BgL_kz00_4762))
{ /* Ieee/string.scm 333 */
BgL_tmpz00_6493 = BgL_kz00_4762
; }  else 
{ 
obj_t BgL_auxz00_6496;
BgL_auxz00_6496 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16409)), BGl_string4296z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_kz00_4762); 
FAILURE(BgL_auxz00_6496,BFALSE,BFALSE);} 
BgL_auxz00_6492 = 
(long)CINT(BgL_tmpz00_6493); } 
if(
STRINGP(BgL_stringz00_4761))
{ /* Ieee/string.scm 333 */
BgL_auxz00_6485 = BgL_stringz00_4761
; }  else 
{ 
obj_t BgL_auxz00_6488;
BgL_auxz00_6488 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16409)), BGl_string4296z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4761); 
FAILURE(BgL_auxz00_6488,BFALSE,BFALSE);} 
return 
BGl_stringzd2setz12zc0zz__r4_strings_6_7z00(BgL_auxz00_6485, BgL_auxz00_6492, BgL_auxz00_6501);} } 

}



/* string-ref-ur */
BGL_EXPORTED_DEF unsigned char BGl_stringzd2refzd2urz00zz__r4_strings_6_7z00(obj_t BgL_stringz00_16, long BgL_kz00_17)
{
{ /* Ieee/string.scm 338 */
{ /* Ieee/string.scm 339 */
long BgL_l2925z00_6272;
BgL_l2925z00_6272 = 
STRING_LENGTH(BgL_stringz00_16); 
if(
BOUND_CHECK(BgL_kz00_17, BgL_l2925z00_6272))
{ /* Ieee/string.scm 339 */
return 
STRING_REF(BgL_stringz00_16, BgL_kz00_17);}  else 
{ 
obj_t BgL_auxz00_6515;
BgL_auxz00_6515 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_16, 
(int)(BgL_l2925z00_6272), 
(int)(BgL_kz00_17)); 
FAILURE(BgL_auxz00_6515,BFALSE,BFALSE);} } } 

}



/* &string-ref-ur */
obj_t BGl_z62stringzd2refzd2urz62zz__r4_strings_6_7z00(obj_t BgL_envz00_4764, obj_t BgL_stringz00_4765, obj_t BgL_kz00_4766)
{
{ /* Ieee/string.scm 338 */
{ /* Ieee/string.scm 339 */
unsigned char BgL_tmpz00_6521;
{ /* Ieee/string.scm 339 */
long BgL_auxz00_6529;obj_t BgL_auxz00_6522;
{ /* Ieee/string.scm 339 */
obj_t BgL_tmpz00_6530;
if(
INTEGERP(BgL_kz00_4766))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_6530 = BgL_kz00_4766
; }  else 
{ 
obj_t BgL_auxz00_6533;
BgL_auxz00_6533 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4297z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_kz00_4766); 
FAILURE(BgL_auxz00_6533,BFALSE,BFALSE);} 
BgL_auxz00_6529 = 
(long)CINT(BgL_tmpz00_6530); } 
if(
STRINGP(BgL_stringz00_4765))
{ /* Ieee/string.scm 339 */
BgL_auxz00_6522 = BgL_stringz00_4765
; }  else 
{ 
obj_t BgL_auxz00_6525;
BgL_auxz00_6525 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4297z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4765); 
FAILURE(BgL_auxz00_6525,BFALSE,BFALSE);} 
BgL_tmpz00_6521 = 
BGl_stringzd2refzd2urz00zz__r4_strings_6_7z00(BgL_auxz00_6522, BgL_auxz00_6529); } 
return 
BCHAR(BgL_tmpz00_6521);} } 

}



/* string-set-ur! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2setzd2urz12z12zz__r4_strings_6_7z00(obj_t BgL_stringz00_18, long BgL_kz00_19, unsigned char BgL_charz00_20)
{
{ /* Ieee/string.scm 344 */
{ /* Ieee/string.scm 345 */
long BgL_l2929z00_6273;
BgL_l2929z00_6273 = 
STRING_LENGTH(BgL_stringz00_18); 
if(
BOUND_CHECK(BgL_kz00_19, BgL_l2929z00_6273))
{ /* Ieee/string.scm 345 */
return 
STRING_SET(BgL_stringz00_18, BgL_kz00_19, BgL_charz00_20);}  else 
{ 
obj_t BgL_auxz00_6544;
BgL_auxz00_6544 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_stringz00_18, 
(int)(BgL_l2929z00_6273), 
(int)(BgL_kz00_19)); 
FAILURE(BgL_auxz00_6544,BFALSE,BFALSE);} } } 

}



/* &string-set-ur! */
obj_t BGl_z62stringzd2setzd2urz12z70zz__r4_strings_6_7z00(obj_t BgL_envz00_4767, obj_t BgL_stringz00_4768, obj_t BgL_kz00_4769, obj_t BgL_charz00_4770)
{
{ /* Ieee/string.scm 344 */
{ /* Ieee/string.scm 345 */
unsigned char BgL_auxz00_6566;long BgL_auxz00_6557;obj_t BgL_auxz00_6550;
{ /* Ieee/string.scm 345 */
obj_t BgL_tmpz00_6567;
if(
CHARP(BgL_charz00_4770))
{ /* Ieee/string.scm 345 */
BgL_tmpz00_6567 = BgL_charz00_4770
; }  else 
{ 
obj_t BgL_auxz00_6570;
BgL_auxz00_6570 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4298z00zz__r4_strings_6_7z00, BGl_string4289z00zz__r4_strings_6_7z00, BgL_charz00_4770); 
FAILURE(BgL_auxz00_6570,BFALSE,BFALSE);} 
BgL_auxz00_6566 = 
CCHAR(BgL_tmpz00_6567); } 
{ /* Ieee/string.scm 345 */
obj_t BgL_tmpz00_6558;
if(
INTEGERP(BgL_kz00_4769))
{ /* Ieee/string.scm 345 */
BgL_tmpz00_6558 = BgL_kz00_4769
; }  else 
{ 
obj_t BgL_auxz00_6561;
BgL_auxz00_6561 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4298z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_kz00_4769); 
FAILURE(BgL_auxz00_6561,BFALSE,BFALSE);} 
BgL_auxz00_6557 = 
(long)CINT(BgL_tmpz00_6558); } 
if(
STRINGP(BgL_stringz00_4768))
{ /* Ieee/string.scm 345 */
BgL_auxz00_6550 = BgL_stringz00_4768
; }  else 
{ 
obj_t BgL_auxz00_6553;
BgL_auxz00_6553 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4298z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4768); 
FAILURE(BgL_auxz00_6553,BFALSE,BFALSE);} 
return 
BGl_stringzd2setzd2urz12z12zz__r4_strings_6_7z00(BgL_auxz00_6550, BgL_auxz00_6557, BgL_auxz00_6566);} } 

}



/* string=? */
BGL_EXPORTED_DEF bool_t BGl_stringzd3zf3z20zz__r4_strings_6_7z00(obj_t BgL_string1z00_21, obj_t BgL_string2z00_22)
{
{ /* Ieee/string.scm 350 */
{ /* Ieee/string.scm 353 */
long BgL_l1z00_6274;
BgL_l1z00_6274 = 
STRING_LENGTH(BgL_string1z00_21); 
if(
(BgL_l1z00_6274==
STRING_LENGTH(BgL_string2z00_22)))
{ /* Ieee/string.scm 355 */
int BgL_arg1229z00_6275;
{ /* Ieee/string.scm 355 */
char * BgL_auxz00_6582;char * BgL_tmpz00_6580;
BgL_auxz00_6582 = 
BSTRING_TO_STRING(BgL_string2z00_22); 
BgL_tmpz00_6580 = 
BSTRING_TO_STRING(BgL_string1z00_21); 
BgL_arg1229z00_6275 = 
memcmp(BgL_tmpz00_6580, BgL_auxz00_6582, BgL_l1z00_6274); } 
return 
(
(long)(BgL_arg1229z00_6275)==((long)0));}  else 
{ /* Ieee/string.scm 354 */
return ((bool_t)0);} } } 

}



/* &string=? */
obj_t BGl_z62stringzd3zf3z42zz__r4_strings_6_7z00(obj_t BgL_envz00_4771, obj_t BgL_string1z00_4772, obj_t BgL_string2z00_4773)
{
{ /* Ieee/string.scm 350 */
{ /* Ieee/string.scm 353 */
bool_t BgL_tmpz00_6587;
{ /* Ieee/string.scm 353 */
obj_t BgL_auxz00_6595;obj_t BgL_auxz00_6588;
if(
STRINGP(BgL_string2z00_4773))
{ /* Ieee/string.scm 353 */
BgL_auxz00_6595 = BgL_string2z00_4773
; }  else 
{ 
obj_t BgL_auxz00_6598;
BgL_auxz00_6598 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17336)), BGl_string4299z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string2z00_4773); 
FAILURE(BgL_auxz00_6598,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string1z00_4772))
{ /* Ieee/string.scm 353 */
BgL_auxz00_6588 = BgL_string1z00_4772
; }  else 
{ 
obj_t BgL_auxz00_6591;
BgL_auxz00_6591 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17336)), BGl_string4299z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string1z00_4772); 
FAILURE(BgL_auxz00_6591,BFALSE,BFALSE);} 
BgL_tmpz00_6587 = 
BGl_stringzd3zf3z20zz__r4_strings_6_7z00(BgL_auxz00_6588, BgL_auxz00_6595); } 
return 
BBOOL(BgL_tmpz00_6587);} } 

}



/* substring=? */
BGL_EXPORTED_DEF bool_t BGl_substringzd3zf3z20zz__r4_strings_6_7z00(obj_t BgL_string1z00_23, obj_t BgL_string2z00_24, long BgL_lenz00_25)
{
{ /* Ieee/string.scm 362 */
return 
bigloo_strncmp(BgL_string1z00_23, BgL_string2z00_24, BgL_lenz00_25);} 

}



/* &substring=? */
obj_t BGl_z62substringzd3zf3z42zz__r4_strings_6_7z00(obj_t BgL_envz00_4774, obj_t BgL_string1z00_4775, obj_t BgL_string2z00_4776, obj_t BgL_lenz00_4777)
{
{ /* Ieee/string.scm 362 */
{ /* Ieee/string.scm 363 */
bool_t BgL_tmpz00_6605;
{ /* Ieee/string.scm 363 */
long BgL_auxz00_6620;obj_t BgL_auxz00_6613;obj_t BgL_auxz00_6606;
{ /* Ieee/string.scm 363 */
obj_t BgL_tmpz00_6621;
if(
INTEGERP(BgL_lenz00_4777))
{ /* Ieee/string.scm 363 */
BgL_tmpz00_6621 = BgL_lenz00_4777
; }  else 
{ 
obj_t BgL_auxz00_6624;
BgL_auxz00_6624 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17785)), BGl_string4300z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_lenz00_4777); 
FAILURE(BgL_auxz00_6624,BFALSE,BFALSE);} 
BgL_auxz00_6620 = 
(long)CINT(BgL_tmpz00_6621); } 
if(
STRINGP(BgL_string2z00_4776))
{ /* Ieee/string.scm 363 */
BgL_auxz00_6613 = BgL_string2z00_4776
; }  else 
{ 
obj_t BgL_auxz00_6616;
BgL_auxz00_6616 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17785)), BGl_string4300z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string2z00_4776); 
FAILURE(BgL_auxz00_6616,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string1z00_4775))
{ /* Ieee/string.scm 363 */
BgL_auxz00_6606 = BgL_string1z00_4775
; }  else 
{ 
obj_t BgL_auxz00_6609;
BgL_auxz00_6609 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17785)), BGl_string4300z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string1z00_4775); 
FAILURE(BgL_auxz00_6609,BFALSE,BFALSE);} 
BgL_tmpz00_6605 = 
BGl_substringzd3zf3z20zz__r4_strings_6_7z00(BgL_auxz00_6606, BgL_auxz00_6613, BgL_auxz00_6620); } 
return 
BBOOL(BgL_tmpz00_6605);} } 

}



/* _substring-at? */
obj_t BGl__substringzd2atzf3z21zz__r4_strings_6_7z00(obj_t BgL_env1098z00_31, obj_t BgL_opt1097z00_30)
{
{ /* Ieee/string.scm 368 */
{ /* Ieee/string.scm 368 */
obj_t BgL_g1099z00_6276;obj_t BgL_g1100z00_6277;obj_t BgL_g1101z00_6278;
BgL_g1099z00_6276 = 
VECTOR_REF(BgL_opt1097z00_30,((long)0)); 
BgL_g1100z00_6277 = 
VECTOR_REF(BgL_opt1097z00_30,((long)1)); 
BgL_g1101z00_6278 = 
VECTOR_REF(BgL_opt1097z00_30,((long)2)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1097z00_30)) { case ((long)3) : 

{ /* Ieee/string.scm 368 */

{ /* Ieee/string.scm 368 */
bool_t BgL_res2211z00_6280;
{ /* Ieee/string.scm 368 */
obj_t BgL_string1z00_6281;obj_t BgL_string2z00_6282;long BgL_offz00_6283;
if(
STRINGP(BgL_g1099z00_6276))
{ /* Ieee/string.scm 368 */
BgL_string1z00_6281 = BgL_g1099z00_6276; }  else 
{ 
obj_t BgL_auxz00_6636;
BgL_auxz00_6636 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18044)), BGl_string4304z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1099z00_6276); 
FAILURE(BgL_auxz00_6636,BFALSE,BFALSE);} 
if(
STRINGP(BgL_g1100z00_6277))
{ /* Ieee/string.scm 368 */
BgL_string2z00_6282 = BgL_g1100z00_6277; }  else 
{ 
obj_t BgL_auxz00_6642;
BgL_auxz00_6642 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18044)), BGl_string4304z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1100z00_6277); 
FAILURE(BgL_auxz00_6642,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 368 */
obj_t BgL_tmpz00_6646;
if(
INTEGERP(BgL_g1101z00_6278))
{ /* Ieee/string.scm 368 */
BgL_tmpz00_6646 = BgL_g1101z00_6278
; }  else 
{ 
obj_t BgL_auxz00_6649;
BgL_auxz00_6649 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18044)), BGl_string4304z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_g1101z00_6278); 
FAILURE(BgL_auxz00_6649,BFALSE,BFALSE);} 
BgL_offz00_6283 = 
(long)CINT(BgL_tmpz00_6646); } 
BgL_res2211z00_6280 = 
bigloo_strcmp_at(BgL_string1z00_6281, BgL_string2z00_6282, BgL_offz00_6283); } 
return 
BBOOL(BgL_res2211z00_6280);} } break;case ((long)4) : 

{ /* Ieee/string.scm 368 */
obj_t BgL_lenz00_6284;
BgL_lenz00_6284 = 
VECTOR_REF(BgL_opt1097z00_30,((long)3)); 
{ /* Ieee/string.scm 368 */

{ /* Ieee/string.scm 368 */
bool_t BgL_res2213z00_6285;
{ /* Ieee/string.scm 368 */
obj_t BgL_string1z00_6286;obj_t BgL_string2z00_6287;long BgL_offz00_6288;
if(
STRINGP(BgL_g1099z00_6276))
{ /* Ieee/string.scm 368 */
BgL_string1z00_6286 = BgL_g1099z00_6276; }  else 
{ 
obj_t BgL_auxz00_6659;
BgL_auxz00_6659 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18044)), BGl_string4304z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1099z00_6276); 
FAILURE(BgL_auxz00_6659,BFALSE,BFALSE);} 
if(
STRINGP(BgL_g1100z00_6277))
{ /* Ieee/string.scm 368 */
BgL_string2z00_6287 = BgL_g1100z00_6277; }  else 
{ 
obj_t BgL_auxz00_6665;
BgL_auxz00_6665 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18044)), BGl_string4304z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1100z00_6277); 
FAILURE(BgL_auxz00_6665,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 368 */
obj_t BgL_tmpz00_6669;
if(
INTEGERP(BgL_g1101z00_6278))
{ /* Ieee/string.scm 368 */
BgL_tmpz00_6669 = BgL_g1101z00_6278
; }  else 
{ 
obj_t BgL_auxz00_6672;
BgL_auxz00_6672 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18044)), BGl_string4304z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_g1101z00_6278); 
FAILURE(BgL_auxz00_6672,BFALSE,BFALSE);} 
BgL_offz00_6288 = 
(long)CINT(BgL_tmpz00_6669); } 
{ /* Ieee/string.scm 369 */
bool_t BgL_test4748z00_6677;
{ /* Ieee/string.scm 369 */
long BgL_n1z00_6289;
{ /* Ieee/string.scm 369 */
obj_t BgL_tmpz00_6678;
if(
INTEGERP(BgL_lenz00_6284))
{ /* Ieee/string.scm 369 */
BgL_tmpz00_6678 = BgL_lenz00_6284
; }  else 
{ 
obj_t BgL_auxz00_6681;
BgL_auxz00_6681 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18127)), BGl_string4304z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_lenz00_6284); 
FAILURE(BgL_auxz00_6681,BFALSE,BFALSE);} 
BgL_n1z00_6289 = 
(long)CINT(BgL_tmpz00_6678); } 
BgL_test4748z00_6677 = 
(BgL_n1z00_6289==((long)-1)); } 
if(BgL_test4748z00_6677)
{ /* Ieee/string.scm 369 */
BgL_res2213z00_6285 = 
bigloo_strcmp_at(BgL_string1z00_6286, BgL_string2z00_6287, BgL_offz00_6288); }  else 
{ /* Ieee/string.scm 371 */
long BgL_tmpz00_6688;
{ /* Ieee/string.scm 371 */
obj_t BgL_tmpz00_6689;
if(
INTEGERP(BgL_lenz00_6284))
{ /* Ieee/string.scm 371 */
BgL_tmpz00_6689 = BgL_lenz00_6284
; }  else 
{ 
obj_t BgL_auxz00_6692;
BgL_auxz00_6692 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18219)), BGl_string4304z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_lenz00_6284); 
FAILURE(BgL_auxz00_6692,BFALSE,BFALSE);} 
BgL_tmpz00_6688 = 
(long)CINT(BgL_tmpz00_6689); } 
BgL_res2213z00_6285 = 
bigloo_strncmp_at(BgL_string1z00_6286, BgL_string2z00_6287, BgL_offz00_6288, BgL_tmpz00_6688); } } } 
return 
BBOOL(BgL_res2213z00_6285);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4301z00zz__r4_strings_6_7z00, BGl_string4303z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1097z00_30)));} } } } 

}



/* substring-at? */
BGL_EXPORTED_DEF bool_t BGl_substringzd2atzf3z21zz__r4_strings_6_7z00(obj_t BgL_string1z00_26, obj_t BgL_string2z00_27, long BgL_offz00_28, obj_t BgL_lenz00_29)
{
{ /* Ieee/string.scm 368 */
{ /* Ieee/string.scm 369 */
bool_t BgL_test4751z00_6704;
{ /* Ieee/string.scm 369 */
long BgL_n1z00_6290;
{ /* Ieee/string.scm 369 */
obj_t BgL_tmpz00_6705;
if(
INTEGERP(BgL_lenz00_29))
{ /* Ieee/string.scm 369 */
BgL_tmpz00_6705 = BgL_lenz00_29
; }  else 
{ 
obj_t BgL_auxz00_6708;
BgL_auxz00_6708 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18127)), BGl_string4302z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_lenz00_29); 
FAILURE(BgL_auxz00_6708,BFALSE,BFALSE);} 
BgL_n1z00_6290 = 
(long)CINT(BgL_tmpz00_6705); } 
BgL_test4751z00_6704 = 
(BgL_n1z00_6290==((long)-1)); } 
if(BgL_test4751z00_6704)
{ /* Ieee/string.scm 369 */
return 
bigloo_strcmp_at(BgL_string1z00_26, BgL_string2z00_27, BgL_offz00_28);}  else 
{ /* Ieee/string.scm 371 */
long BgL_tmpz00_6715;
{ /* Ieee/string.scm 371 */
obj_t BgL_tmpz00_6716;
if(
INTEGERP(BgL_lenz00_29))
{ /* Ieee/string.scm 371 */
BgL_tmpz00_6716 = BgL_lenz00_29
; }  else 
{ 
obj_t BgL_auxz00_6719;
BgL_auxz00_6719 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18219)), BGl_string4302z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_lenz00_29); 
FAILURE(BgL_auxz00_6719,BFALSE,BFALSE);} 
BgL_tmpz00_6715 = 
(long)CINT(BgL_tmpz00_6716); } 
return 
bigloo_strncmp_at(BgL_string1z00_26, BgL_string2z00_27, BgL_offz00_28, BgL_tmpz00_6715);} } } 

}



/* substring-ci=? */
BGL_EXPORTED_DEF bool_t BGl_substringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t BgL_string1z00_32, obj_t BgL_string2z00_33, long BgL_lenz00_34)
{
{ /* Ieee/string.scm 376 */
return 
bigloo_strncmp_ci(BgL_string1z00_32, BgL_string2z00_33, BgL_lenz00_34);} 

}



/* &substring-ci=? */
obj_t BGl_z62substringzd2cizd3zf3z90zz__r4_strings_6_7z00(obj_t BgL_envz00_4778, obj_t BgL_string1z00_4779, obj_t BgL_string2z00_4780, obj_t BgL_lenz00_4781)
{
{ /* Ieee/string.scm 376 */
{ /* Ieee/string.scm 377 */
bool_t BgL_tmpz00_6726;
{ /* Ieee/string.scm 377 */
long BgL_auxz00_6741;obj_t BgL_auxz00_6734;obj_t BgL_auxz00_6727;
{ /* Ieee/string.scm 377 */
obj_t BgL_tmpz00_6742;
if(
INTEGERP(BgL_lenz00_4781))
{ /* Ieee/string.scm 377 */
BgL_tmpz00_6742 = BgL_lenz00_4781
; }  else 
{ 
obj_t BgL_auxz00_6745;
BgL_auxz00_6745 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18504)), BGl_string4305z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_lenz00_4781); 
FAILURE(BgL_auxz00_6745,BFALSE,BFALSE);} 
BgL_auxz00_6741 = 
(long)CINT(BgL_tmpz00_6742); } 
if(
STRINGP(BgL_string2z00_4780))
{ /* Ieee/string.scm 377 */
BgL_auxz00_6734 = BgL_string2z00_4780
; }  else 
{ 
obj_t BgL_auxz00_6737;
BgL_auxz00_6737 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18504)), BGl_string4305z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string2z00_4780); 
FAILURE(BgL_auxz00_6737,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string1z00_4779))
{ /* Ieee/string.scm 377 */
BgL_auxz00_6727 = BgL_string1z00_4779
; }  else 
{ 
obj_t BgL_auxz00_6730;
BgL_auxz00_6730 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18504)), BGl_string4305z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string1z00_4779); 
FAILURE(BgL_auxz00_6730,BFALSE,BFALSE);} 
BgL_tmpz00_6726 = 
BGl_substringzd2cizd3zf3zf2zz__r4_strings_6_7z00(BgL_auxz00_6727, BgL_auxz00_6734, BgL_auxz00_6741); } 
return 
BBOOL(BgL_tmpz00_6726);} } 

}



/* _substring-ci-at? */
obj_t BGl__substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00(obj_t BgL_env1105z00_40, obj_t BgL_opt1104z00_39)
{
{ /* Ieee/string.scm 382 */
{ /* Ieee/string.scm 382 */
obj_t BgL_g1106z00_6291;obj_t BgL_g1107z00_6292;obj_t BgL_g1108z00_6293;
BgL_g1106z00_6291 = 
VECTOR_REF(BgL_opt1104z00_39,((long)0)); 
BgL_g1107z00_6292 = 
VECTOR_REF(BgL_opt1104z00_39,((long)1)); 
BgL_g1108z00_6293 = 
VECTOR_REF(BgL_opt1104z00_39,((long)2)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1104z00_39)) { case ((long)3) : 

{ /* Ieee/string.scm 382 */

{ /* Ieee/string.scm 382 */
bool_t BgL_res2216z00_6295;
{ /* Ieee/string.scm 382 */
obj_t BgL_string1z00_6296;obj_t BgL_string2z00_6297;long BgL_offz00_6298;
if(
STRINGP(BgL_g1106z00_6291))
{ /* Ieee/string.scm 382 */
BgL_string1z00_6296 = BgL_g1106z00_6291; }  else 
{ 
obj_t BgL_auxz00_6757;
BgL_auxz00_6757 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18766)), BGl_string4308z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1106z00_6291); 
FAILURE(BgL_auxz00_6757,BFALSE,BFALSE);} 
if(
STRINGP(BgL_g1107z00_6292))
{ /* Ieee/string.scm 382 */
BgL_string2z00_6297 = BgL_g1107z00_6292; }  else 
{ 
obj_t BgL_auxz00_6763;
BgL_auxz00_6763 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18766)), BGl_string4308z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1107z00_6292); 
FAILURE(BgL_auxz00_6763,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 382 */
obj_t BgL_tmpz00_6767;
if(
INTEGERP(BgL_g1108z00_6293))
{ /* Ieee/string.scm 382 */
BgL_tmpz00_6767 = BgL_g1108z00_6293
; }  else 
{ 
obj_t BgL_auxz00_6770;
BgL_auxz00_6770 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18766)), BGl_string4308z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_g1108z00_6293); 
FAILURE(BgL_auxz00_6770,BFALSE,BFALSE);} 
BgL_offz00_6298 = 
(long)CINT(BgL_tmpz00_6767); } 
BgL_res2216z00_6295 = 
bigloo_strcmp_ci_at(BgL_string1z00_6296, BgL_string2z00_6297, BgL_offz00_6298); } 
return 
BBOOL(BgL_res2216z00_6295);} } break;case ((long)4) : 

{ /* Ieee/string.scm 382 */
obj_t BgL_lenz00_6299;
BgL_lenz00_6299 = 
VECTOR_REF(BgL_opt1104z00_39,((long)3)); 
{ /* Ieee/string.scm 382 */

{ /* Ieee/string.scm 382 */
bool_t BgL_res2218z00_6300;
{ /* Ieee/string.scm 382 */
obj_t BgL_string1z00_6301;obj_t BgL_string2z00_6302;long BgL_offz00_6303;
if(
STRINGP(BgL_g1106z00_6291))
{ /* Ieee/string.scm 382 */
BgL_string1z00_6301 = BgL_g1106z00_6291; }  else 
{ 
obj_t BgL_auxz00_6780;
BgL_auxz00_6780 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18766)), BGl_string4308z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1106z00_6291); 
FAILURE(BgL_auxz00_6780,BFALSE,BFALSE);} 
if(
STRINGP(BgL_g1107z00_6292))
{ /* Ieee/string.scm 382 */
BgL_string2z00_6302 = BgL_g1107z00_6292; }  else 
{ 
obj_t BgL_auxz00_6786;
BgL_auxz00_6786 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18766)), BGl_string4308z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1107z00_6292); 
FAILURE(BgL_auxz00_6786,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 382 */
obj_t BgL_tmpz00_6790;
if(
INTEGERP(BgL_g1108z00_6293))
{ /* Ieee/string.scm 382 */
BgL_tmpz00_6790 = BgL_g1108z00_6293
; }  else 
{ 
obj_t BgL_auxz00_6793;
BgL_auxz00_6793 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18766)), BGl_string4308z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_g1108z00_6293); 
FAILURE(BgL_auxz00_6793,BFALSE,BFALSE);} 
BgL_offz00_6303 = 
(long)CINT(BgL_tmpz00_6790); } 
{ /* Ieee/string.scm 383 */
bool_t BgL_test4763z00_6798;
{ /* Ieee/string.scm 383 */
long BgL_n1z00_6304;
{ /* Ieee/string.scm 383 */
obj_t BgL_tmpz00_6799;
if(
INTEGERP(BgL_lenz00_6299))
{ /* Ieee/string.scm 383 */
BgL_tmpz00_6799 = BgL_lenz00_6299
; }  else 
{ 
obj_t BgL_auxz00_6802;
BgL_auxz00_6802 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18852)), BGl_string4308z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_lenz00_6299); 
FAILURE(BgL_auxz00_6802,BFALSE,BFALSE);} 
BgL_n1z00_6304 = 
(long)CINT(BgL_tmpz00_6799); } 
BgL_test4763z00_6798 = 
(BgL_n1z00_6304==((long)-1)); } 
if(BgL_test4763z00_6798)
{ /* Ieee/string.scm 383 */
BgL_res2218z00_6300 = 
bigloo_strcmp_ci_at(BgL_string1z00_6301, BgL_string2z00_6302, BgL_offz00_6303); }  else 
{ /* Ieee/string.scm 385 */
long BgL_tmpz00_6809;
{ /* Ieee/string.scm 385 */
obj_t BgL_tmpz00_6810;
if(
INTEGERP(BgL_lenz00_6299))
{ /* Ieee/string.scm 385 */
BgL_tmpz00_6810 = BgL_lenz00_6299
; }  else 
{ 
obj_t BgL_auxz00_6813;
BgL_auxz00_6813 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18950)), BGl_string4308z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_lenz00_6299); 
FAILURE(BgL_auxz00_6813,BFALSE,BFALSE);} 
BgL_tmpz00_6809 = 
(long)CINT(BgL_tmpz00_6810); } 
BgL_res2218z00_6300 = 
bigloo_strncmp_ci_at(BgL_string1z00_6301, BgL_string2z00_6302, BgL_offz00_6303, BgL_tmpz00_6809); } } } 
return 
BBOOL(BgL_res2218z00_6300);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4306z00zz__r4_strings_6_7z00, BGl_string4303z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1104z00_39)));} } } } 

}



/* substring-ci-at? */
BGL_EXPORTED_DEF bool_t BGl_substringzd2cizd2atzf3zf3zz__r4_strings_6_7z00(obj_t BgL_string1z00_35, obj_t BgL_string2z00_36, long BgL_offz00_37, obj_t BgL_lenz00_38)
{
{ /* Ieee/string.scm 382 */
{ /* Ieee/string.scm 383 */
bool_t BgL_test4766z00_6825;
{ /* Ieee/string.scm 383 */
long BgL_n1z00_6305;
{ /* Ieee/string.scm 383 */
obj_t BgL_tmpz00_6826;
if(
INTEGERP(BgL_lenz00_38))
{ /* Ieee/string.scm 383 */
BgL_tmpz00_6826 = BgL_lenz00_38
; }  else 
{ 
obj_t BgL_auxz00_6829;
BgL_auxz00_6829 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18852)), BGl_string4307z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_lenz00_38); 
FAILURE(BgL_auxz00_6829,BFALSE,BFALSE);} 
BgL_n1z00_6305 = 
(long)CINT(BgL_tmpz00_6826); } 
BgL_test4766z00_6825 = 
(BgL_n1z00_6305==((long)-1)); } 
if(BgL_test4766z00_6825)
{ /* Ieee/string.scm 383 */
return 
bigloo_strcmp_ci_at(BgL_string1z00_35, BgL_string2z00_36, BgL_offz00_37);}  else 
{ /* Ieee/string.scm 385 */
long BgL_tmpz00_6836;
{ /* Ieee/string.scm 385 */
obj_t BgL_tmpz00_6837;
if(
INTEGERP(BgL_lenz00_38))
{ /* Ieee/string.scm 385 */
BgL_tmpz00_6837 = BgL_lenz00_38
; }  else 
{ 
obj_t BgL_auxz00_6840;
BgL_auxz00_6840 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)18950)), BGl_string4307z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_lenz00_38); 
FAILURE(BgL_auxz00_6840,BFALSE,BFALSE);} 
BgL_tmpz00_6836 = 
(long)CINT(BgL_tmpz00_6837); } 
return 
bigloo_strncmp_ci_at(BgL_string1z00_35, BgL_string2z00_36, BgL_offz00_37, BgL_tmpz00_6836);} } } 

}



/* empty-string? */
BGL_EXPORTED_DEF bool_t BGl_emptyzd2stringzf3z21zz__r4_strings_6_7z00(obj_t BgL_stringz00_41)
{
{ /* Ieee/string.scm 390 */
return 
(
STRING_LENGTH(BgL_stringz00_41)==((long)0));} 

}



/* &empty-string? */
obj_t BGl_z62emptyzd2stringzf3z43zz__r4_strings_6_7z00(obj_t BgL_envz00_4782, obj_t BgL_stringz00_4783)
{
{ /* Ieee/string.scm 390 */
{ /* Ieee/string.scm 391 */
bool_t BgL_tmpz00_6848;
{ /* Ieee/string.scm 391 */
obj_t BgL_auxz00_6849;
if(
STRINGP(BgL_stringz00_4783))
{ /* Ieee/string.scm 391 */
BgL_auxz00_6849 = BgL_stringz00_4783
; }  else 
{ 
obj_t BgL_auxz00_6852;
BgL_auxz00_6852 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)19226)), BGl_string4309z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4783); 
FAILURE(BgL_auxz00_6852,BFALSE,BFALSE);} 
BgL_tmpz00_6848 = 
BGl_emptyzd2stringzf3z21zz__r4_strings_6_7z00(BgL_auxz00_6849); } 
return 
BBOOL(BgL_tmpz00_6848);} } 

}



/* string-ci=? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2cizd3zf3zf2zz__r4_strings_6_7z00(obj_t BgL_string1z00_42, obj_t BgL_string2z00_43)
{
{ /* Ieee/string.scm 396 */
return 
bigloo_strcicmp(BgL_string1z00_42, BgL_string2z00_43);} 

}



/* &string-ci=? */
obj_t BGl_z62stringzd2cizd3zf3z90zz__r4_strings_6_7z00(obj_t BgL_envz00_4784, obj_t BgL_string1z00_4785, obj_t BgL_string2z00_4786)
{
{ /* Ieee/string.scm 396 */
{ /* Ieee/string.scm 397 */
bool_t BgL_tmpz00_6859;
{ /* Ieee/string.scm 397 */
obj_t BgL_auxz00_6867;obj_t BgL_auxz00_6860;
if(
STRINGP(BgL_string2z00_4786))
{ /* Ieee/string.scm 397 */
BgL_auxz00_6867 = BgL_string2z00_4786
; }  else 
{ 
obj_t BgL_auxz00_6870;
BgL_auxz00_6870 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)19524)), BGl_string4310z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string2z00_4786); 
FAILURE(BgL_auxz00_6870,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string1z00_4785))
{ /* Ieee/string.scm 397 */
BgL_auxz00_6860 = BgL_string1z00_4785
; }  else 
{ 
obj_t BgL_auxz00_6863;
BgL_auxz00_6863 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)19524)), BGl_string4310z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string1z00_4785); 
FAILURE(BgL_auxz00_6863,BFALSE,BFALSE);} 
BgL_tmpz00_6859 = 
BGl_stringzd2cizd3zf3zf2zz__r4_strings_6_7z00(BgL_auxz00_6860, BgL_auxz00_6867); } 
return 
BBOOL(BgL_tmpz00_6859);} } 

}



/* string<? */
BGL_EXPORTED_DEF bool_t BGl_stringzc3zf3z30zz__r4_strings_6_7z00(obj_t BgL_string1z00_44, obj_t BgL_string2z00_45)
{
{ /* Ieee/string.scm 402 */
return 
bigloo_string_lt(BgL_string1z00_44, BgL_string2z00_45);} 

}



/* &string<? */
obj_t BGl_z62stringzc3zf3z52zz__r4_strings_6_7z00(obj_t BgL_envz00_4787, obj_t BgL_string1z00_4788, obj_t BgL_string2z00_4789)
{
{ /* Ieee/string.scm 402 */
{ /* Ieee/string.scm 403 */
bool_t BgL_tmpz00_6877;
{ /* Ieee/string.scm 403 */
obj_t BgL_auxz00_6885;obj_t BgL_auxz00_6878;
if(
STRINGP(BgL_string2z00_4789))
{ /* Ieee/string.scm 403 */
BgL_auxz00_6885 = BgL_string2z00_4789
; }  else 
{ 
obj_t BgL_auxz00_6888;
BgL_auxz00_6888 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)19821)), BGl_string4311z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string2z00_4789); 
FAILURE(BgL_auxz00_6888,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string1z00_4788))
{ /* Ieee/string.scm 403 */
BgL_auxz00_6878 = BgL_string1z00_4788
; }  else 
{ 
obj_t BgL_auxz00_6881;
BgL_auxz00_6881 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)19821)), BGl_string4311z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string1z00_4788); 
FAILURE(BgL_auxz00_6881,BFALSE,BFALSE);} 
BgL_tmpz00_6877 = 
BGl_stringzc3zf3z30zz__r4_strings_6_7z00(BgL_auxz00_6878, BgL_auxz00_6885); } 
return 
BBOOL(BgL_tmpz00_6877);} } 

}



/* string>? */
BGL_EXPORTED_DEF bool_t BGl_stringze3zf3z10zz__r4_strings_6_7z00(obj_t BgL_string1z00_46, obj_t BgL_string2z00_47)
{
{ /* Ieee/string.scm 408 */
return 
bigloo_string_gt(BgL_string1z00_46, BgL_string2z00_47);} 

}



/* &string>? */
obj_t BGl_z62stringze3zf3z72zz__r4_strings_6_7z00(obj_t BgL_envz00_4790, obj_t BgL_string1z00_4791, obj_t BgL_string2z00_4792)
{
{ /* Ieee/string.scm 408 */
{ /* Ieee/string.scm 409 */
bool_t BgL_tmpz00_6895;
{ /* Ieee/string.scm 409 */
obj_t BgL_auxz00_6903;obj_t BgL_auxz00_6896;
if(
STRINGP(BgL_string2z00_4792))
{ /* Ieee/string.scm 409 */
BgL_auxz00_6903 = BgL_string2z00_4792
; }  else 
{ 
obj_t BgL_auxz00_6906;
BgL_auxz00_6906 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)20119)), BGl_string4312z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string2z00_4792); 
FAILURE(BgL_auxz00_6906,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string1z00_4791))
{ /* Ieee/string.scm 409 */
BgL_auxz00_6896 = BgL_string1z00_4791
; }  else 
{ 
obj_t BgL_auxz00_6899;
BgL_auxz00_6899 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)20119)), BGl_string4312z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string1z00_4791); 
FAILURE(BgL_auxz00_6899,BFALSE,BFALSE);} 
BgL_tmpz00_6895 = 
BGl_stringze3zf3z10zz__r4_strings_6_7z00(BgL_auxz00_6896, BgL_auxz00_6903); } 
return 
BBOOL(BgL_tmpz00_6895);} } 

}



/* string<=? */
BGL_EXPORTED_DEF bool_t BGl_stringzc3zd3zf3ze3zz__r4_strings_6_7z00(obj_t BgL_string1z00_48, obj_t BgL_string2z00_49)
{
{ /* Ieee/string.scm 414 */
return 
bigloo_string_le(BgL_string1z00_48, BgL_string2z00_49);} 

}



/* &string<=? */
obj_t BGl_z62stringzc3zd3zf3z81zz__r4_strings_6_7z00(obj_t BgL_envz00_4793, obj_t BgL_string1z00_4794, obj_t BgL_string2z00_4795)
{
{ /* Ieee/string.scm 414 */
{ /* Ieee/string.scm 415 */
bool_t BgL_tmpz00_6913;
{ /* Ieee/string.scm 415 */
obj_t BgL_auxz00_6921;obj_t BgL_auxz00_6914;
if(
STRINGP(BgL_string2z00_4795))
{ /* Ieee/string.scm 415 */
BgL_auxz00_6921 = BgL_string2z00_4795
; }  else 
{ 
obj_t BgL_auxz00_6924;
BgL_auxz00_6924 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)20418)), BGl_string4313z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string2z00_4795); 
FAILURE(BgL_auxz00_6924,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string1z00_4794))
{ /* Ieee/string.scm 415 */
BgL_auxz00_6914 = BgL_string1z00_4794
; }  else 
{ 
obj_t BgL_auxz00_6917;
BgL_auxz00_6917 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)20418)), BGl_string4313z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string1z00_4794); 
FAILURE(BgL_auxz00_6917,BFALSE,BFALSE);} 
BgL_tmpz00_6913 = 
BGl_stringzc3zd3zf3ze3zz__r4_strings_6_7z00(BgL_auxz00_6914, BgL_auxz00_6921); } 
return 
BBOOL(BgL_tmpz00_6913);} } 

}



/* string>=? */
BGL_EXPORTED_DEF bool_t BGl_stringze3zd3zf3zc3zz__r4_strings_6_7z00(obj_t BgL_string1z00_50, obj_t BgL_string2z00_51)
{
{ /* Ieee/string.scm 420 */
return 
bigloo_string_ge(BgL_string1z00_50, BgL_string2z00_51);} 

}



/* &string>=? */
obj_t BGl_z62stringze3zd3zf3za1zz__r4_strings_6_7z00(obj_t BgL_envz00_4796, obj_t BgL_string1z00_4797, obj_t BgL_string2z00_4798)
{
{ /* Ieee/string.scm 420 */
{ /* Ieee/string.scm 421 */
bool_t BgL_tmpz00_6931;
{ /* Ieee/string.scm 421 */
obj_t BgL_auxz00_6939;obj_t BgL_auxz00_6932;
if(
STRINGP(BgL_string2z00_4798))
{ /* Ieee/string.scm 421 */
BgL_auxz00_6939 = BgL_string2z00_4798
; }  else 
{ 
obj_t BgL_auxz00_6942;
BgL_auxz00_6942 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)20717)), BGl_string4314z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string2z00_4798); 
FAILURE(BgL_auxz00_6942,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string1z00_4797))
{ /* Ieee/string.scm 421 */
BgL_auxz00_6932 = BgL_string1z00_4797
; }  else 
{ 
obj_t BgL_auxz00_6935;
BgL_auxz00_6935 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)20717)), BGl_string4314z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string1z00_4797); 
FAILURE(BgL_auxz00_6935,BFALSE,BFALSE);} 
BgL_tmpz00_6931 = 
BGl_stringze3zd3zf3zc3zz__r4_strings_6_7z00(BgL_auxz00_6932, BgL_auxz00_6939); } 
return 
BBOOL(BgL_tmpz00_6931);} } 

}



/* string-ci<? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2cizc3zf3ze2zz__r4_strings_6_7z00(obj_t BgL_string1z00_52, obj_t BgL_string2z00_53)
{
{ /* Ieee/string.scm 426 */
return 
bigloo_string_cilt(BgL_string1z00_52, BgL_string2z00_53);} 

}



/* &string-ci<? */
obj_t BGl_z62stringzd2cizc3zf3z80zz__r4_strings_6_7z00(obj_t BgL_envz00_4799, obj_t BgL_string1z00_4800, obj_t BgL_string2z00_4801)
{
{ /* Ieee/string.scm 426 */
{ /* Ieee/string.scm 427 */
bool_t BgL_tmpz00_6949;
{ /* Ieee/string.scm 427 */
obj_t BgL_auxz00_6957;obj_t BgL_auxz00_6950;
if(
STRINGP(BgL_string2z00_4801))
{ /* Ieee/string.scm 427 */
BgL_auxz00_6957 = BgL_string2z00_4801
; }  else 
{ 
obj_t BgL_auxz00_6960;
BgL_auxz00_6960 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)21018)), BGl_string4315z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string2z00_4801); 
FAILURE(BgL_auxz00_6960,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string1z00_4800))
{ /* Ieee/string.scm 427 */
BgL_auxz00_6950 = BgL_string1z00_4800
; }  else 
{ 
obj_t BgL_auxz00_6953;
BgL_auxz00_6953 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)21018)), BGl_string4315z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string1z00_4800); 
FAILURE(BgL_auxz00_6953,BFALSE,BFALSE);} 
BgL_tmpz00_6949 = 
BGl_stringzd2cizc3zf3ze2zz__r4_strings_6_7z00(BgL_auxz00_6950, BgL_auxz00_6957); } 
return 
BBOOL(BgL_tmpz00_6949);} } 

}



/* string-ci>? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2cize3zf3zc2zz__r4_strings_6_7z00(obj_t BgL_string1z00_54, obj_t BgL_string2z00_55)
{
{ /* Ieee/string.scm 432 */
return 
bigloo_string_cigt(BgL_string1z00_54, BgL_string2z00_55);} 

}



/* &string-ci>? */
obj_t BGl_z62stringzd2cize3zf3za0zz__r4_strings_6_7z00(obj_t BgL_envz00_4802, obj_t BgL_string1z00_4803, obj_t BgL_string2z00_4804)
{
{ /* Ieee/string.scm 432 */
{ /* Ieee/string.scm 433 */
bool_t BgL_tmpz00_6967;
{ /* Ieee/string.scm 433 */
obj_t BgL_auxz00_6975;obj_t BgL_auxz00_6968;
if(
STRINGP(BgL_string2z00_4804))
{ /* Ieee/string.scm 433 */
BgL_auxz00_6975 = BgL_string2z00_4804
; }  else 
{ 
obj_t BgL_auxz00_6978;
BgL_auxz00_6978 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)21321)), BGl_string4316z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string2z00_4804); 
FAILURE(BgL_auxz00_6978,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string1z00_4803))
{ /* Ieee/string.scm 433 */
BgL_auxz00_6968 = BgL_string1z00_4803
; }  else 
{ 
obj_t BgL_auxz00_6971;
BgL_auxz00_6971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)21321)), BGl_string4316z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string1z00_4803); 
FAILURE(BgL_auxz00_6971,BFALSE,BFALSE);} 
BgL_tmpz00_6967 = 
BGl_stringzd2cize3zf3zc2zz__r4_strings_6_7z00(BgL_auxz00_6968, BgL_auxz00_6975); } 
return 
BBOOL(BgL_tmpz00_6967);} } 

}



/* string-ci<=? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2cizc3zd3zf3z31zz__r4_strings_6_7z00(obj_t BgL_string1z00_56, obj_t BgL_string2z00_57)
{
{ /* Ieee/string.scm 438 */
return 
bigloo_string_cile(BgL_string1z00_56, BgL_string2z00_57);} 

}



/* &string-ci<=? */
obj_t BGl_z62stringzd2cizc3zd3zf3z53zz__r4_strings_6_7z00(obj_t BgL_envz00_4805, obj_t BgL_string1z00_4806, obj_t BgL_string2z00_4807)
{
{ /* Ieee/string.scm 438 */
{ /* Ieee/string.scm 439 */
bool_t BgL_tmpz00_6985;
{ /* Ieee/string.scm 439 */
obj_t BgL_auxz00_6993;obj_t BgL_auxz00_6986;
if(
STRINGP(BgL_string2z00_4807))
{ /* Ieee/string.scm 439 */
BgL_auxz00_6993 = BgL_string2z00_4807
; }  else 
{ 
obj_t BgL_auxz00_6996;
BgL_auxz00_6996 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)21625)), BGl_string4317z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string2z00_4807); 
FAILURE(BgL_auxz00_6996,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string1z00_4806))
{ /* Ieee/string.scm 439 */
BgL_auxz00_6986 = BgL_string1z00_4806
; }  else 
{ 
obj_t BgL_auxz00_6989;
BgL_auxz00_6989 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)21625)), BGl_string4317z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string1z00_4806); 
FAILURE(BgL_auxz00_6989,BFALSE,BFALSE);} 
BgL_tmpz00_6985 = 
BGl_stringzd2cizc3zd3zf3z31zz__r4_strings_6_7z00(BgL_auxz00_6986, BgL_auxz00_6993); } 
return 
BBOOL(BgL_tmpz00_6985);} } 

}



/* string-ci>=? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2cize3zd3zf3z11zz__r4_strings_6_7z00(obj_t BgL_string1z00_58, obj_t BgL_string2z00_59)
{
{ /* Ieee/string.scm 444 */
return 
bigloo_string_cige(BgL_string1z00_58, BgL_string2z00_59);} 

}



/* &string-ci>=? */
obj_t BGl_z62stringzd2cize3zd3zf3z73zz__r4_strings_6_7z00(obj_t BgL_envz00_4808, obj_t BgL_string1z00_4809, obj_t BgL_string2z00_4810)
{
{ /* Ieee/string.scm 444 */
{ /* Ieee/string.scm 445 */
bool_t BgL_tmpz00_7003;
{ /* Ieee/string.scm 445 */
obj_t BgL_auxz00_7011;obj_t BgL_auxz00_7004;
if(
STRINGP(BgL_string2z00_4810))
{ /* Ieee/string.scm 445 */
BgL_auxz00_7011 = BgL_string2z00_4810
; }  else 
{ 
obj_t BgL_auxz00_7014;
BgL_auxz00_7014 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)21929)), BGl_string4318z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string2z00_4810); 
FAILURE(BgL_auxz00_7014,BFALSE,BFALSE);} 
if(
STRINGP(BgL_string1z00_4809))
{ /* Ieee/string.scm 445 */
BgL_auxz00_7004 = BgL_string1z00_4809
; }  else 
{ 
obj_t BgL_auxz00_7007;
BgL_auxz00_7007 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)21929)), BGl_string4318z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_string1z00_4809); 
FAILURE(BgL_auxz00_7007,BFALSE,BFALSE);} 
BgL_tmpz00_7003 = 
BGl_stringzd2cize3zd3zf3z11zz__r4_strings_6_7z00(BgL_auxz00_7004, BgL_auxz00_7011); } 
return 
BBOOL(BgL_tmpz00_7003);} } 

}



/* _substring */
obj_t BGl__substringz00zz__r4_strings_6_7z00(obj_t BgL_env1112z00_64, obj_t BgL_opt1111z00_63)
{
{ /* Ieee/string.scm 450 */
{ /* Ieee/string.scm 450 */
obj_t BgL_stringz00_955;obj_t BgL_g1113z00_956;
BgL_stringz00_955 = 
VECTOR_REF(BgL_opt1111z00_63,((long)0)); 
BgL_g1113z00_956 = 
VECTOR_REF(BgL_opt1111z00_63,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1111z00_63)) { case ((long)2) : 

{ /* Ieee/string.scm 450 */
long BgL_endz00_960;
{ /* Ieee/string.scm 450 */
obj_t BgL_stringz00_2663;
if(
STRINGP(BgL_stringz00_955))
{ /* Ieee/string.scm 450 */
BgL_stringz00_2663 = BgL_stringz00_955; }  else 
{ 
obj_t BgL_auxz00_7024;
BgL_auxz00_7024 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)22238)), BGl_string4322z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_955); 
FAILURE(BgL_auxz00_7024,BFALSE,BFALSE);} 
BgL_endz00_960 = 
STRING_LENGTH(BgL_stringz00_2663); } 
{ /* Ieee/string.scm 450 */

{ /* Ieee/string.scm 450 */
long BgL_auxz00_7036;obj_t BgL_auxz00_7029;
{ /* Ieee/string.scm 450 */
obj_t BgL_tmpz00_7037;
if(
INTEGERP(BgL_g1113z00_956))
{ /* Ieee/string.scm 450 */
BgL_tmpz00_7037 = BgL_g1113z00_956
; }  else 
{ 
obj_t BgL_auxz00_7040;
BgL_auxz00_7040 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)22184)), BGl_string4322z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_g1113z00_956); 
FAILURE(BgL_auxz00_7040,BFALSE,BFALSE);} 
BgL_auxz00_7036 = 
(long)CINT(BgL_tmpz00_7037); } 
if(
STRINGP(BgL_stringz00_955))
{ /* Ieee/string.scm 450 */
BgL_auxz00_7029 = BgL_stringz00_955
; }  else 
{ 
obj_t BgL_auxz00_7032;
BgL_auxz00_7032 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)22184)), BGl_string4322z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_955); 
FAILURE(BgL_auxz00_7032,BFALSE,BFALSE);} 
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_auxz00_7029, BgL_auxz00_7036, BgL_endz00_960);} } } break;case ((long)3) : 

{ /* Ieee/string.scm 450 */
obj_t BgL_endz00_961;
BgL_endz00_961 = 
VECTOR_REF(BgL_opt1111z00_63,((long)2)); 
{ /* Ieee/string.scm 450 */

{ /* Ieee/string.scm 450 */
long BgL_auxz00_7063;long BgL_auxz00_7054;obj_t BgL_auxz00_7047;
{ /* Ieee/string.scm 450 */
obj_t BgL_tmpz00_7064;
if(
INTEGERP(BgL_endz00_961))
{ /* Ieee/string.scm 450 */
BgL_tmpz00_7064 = BgL_endz00_961
; }  else 
{ 
obj_t BgL_auxz00_7067;
BgL_auxz00_7067 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)22184)), BGl_string4322z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_endz00_961); 
FAILURE(BgL_auxz00_7067,BFALSE,BFALSE);} 
BgL_auxz00_7063 = 
(long)CINT(BgL_tmpz00_7064); } 
{ /* Ieee/string.scm 450 */
obj_t BgL_tmpz00_7055;
if(
INTEGERP(BgL_g1113z00_956))
{ /* Ieee/string.scm 450 */
BgL_tmpz00_7055 = BgL_g1113z00_956
; }  else 
{ 
obj_t BgL_auxz00_7058;
BgL_auxz00_7058 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)22184)), BGl_string4322z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_g1113z00_956); 
FAILURE(BgL_auxz00_7058,BFALSE,BFALSE);} 
BgL_auxz00_7054 = 
(long)CINT(BgL_tmpz00_7055); } 
if(
STRINGP(BgL_stringz00_955))
{ /* Ieee/string.scm 450 */
BgL_auxz00_7047 = BgL_stringz00_955
; }  else 
{ 
obj_t BgL_auxz00_7050;
BgL_auxz00_7050 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)22184)), BGl_string4322z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_955); 
FAILURE(BgL_auxz00_7050,BFALSE,BFALSE);} 
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_auxz00_7047, BgL_auxz00_7054, BgL_auxz00_7063);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4319z00zz__r4_strings_6_7z00, BGl_string4321z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1111z00_63)));} } } } 

}



/* substring */
BGL_EXPORTED_DEF obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t BgL_stringz00_60, long BgL_startz00_61, long BgL_endz00_62)
{
{ /* Ieee/string.scm 450 */
{ /* Ieee/string.scm 451 */
long BgL_lenz00_963;
BgL_lenz00_963 = 
STRING_LENGTH(BgL_stringz00_60); 
{ /* Ieee/string.scm 453 */
bool_t BgL_test4794z00_7079;
if(
(BgL_startz00_61<((long)0)))
{ /* Ieee/string.scm 453 */
BgL_test4794z00_7079 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 453 */
BgL_test4794z00_7079 = 
(BgL_startz00_61>BgL_lenz00_963)
; } 
if(BgL_test4794z00_7079)
{ /* Ieee/string.scm 455 */
obj_t BgL_arg1250z00_966;obj_t BgL_arg1252z00_967;
{ /* Ieee/string.scm 455 */
obj_t BgL_arg1253z00_968;
{ /* Ieee/fixnum.scm 980 */

BgL_arg1253z00_968 = 
BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_startz00_61, ((long)10)); } 
BgL_arg1250z00_966 = 
string_append(BGl_string4323z00zz__r4_strings_6_7z00, BgL_arg1253z00_968); } 
{ /* Ieee/string.scm 456 */
obj_t BgL_list1257z00_972;
{ /* Ieee/string.scm 456 */
obj_t BgL_arg1258z00_973;
BgL_arg1258z00_973 = 
MAKE_YOUNG_PAIR(BgL_stringz00_60, BNIL); 
BgL_list1257z00_972 = 
MAKE_YOUNG_PAIR(
BINT(BgL_lenz00_963), BgL_arg1258z00_973); } 
BgL_arg1252z00_967 = BgL_list1257z00_972; } 
{ /* Ieee/string.scm 454 */
obj_t BgL_aux3479z00_5454;
BgL_aux3479z00_5454 = 
BGl_errorz00zz__errorz00(BGl_string4320z00zz__r4_strings_6_7z00, BgL_arg1250z00_966, BgL_arg1252z00_967); 
if(
STRINGP(BgL_aux3479z00_5454))
{ /* Ieee/string.scm 454 */
return BgL_aux3479z00_5454;}  else 
{ 
obj_t BgL_auxz00_7091;
BgL_auxz00_7091 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)22355)), BGl_string4320z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_aux3479z00_5454); 
FAILURE(BgL_auxz00_7091,BFALSE,BFALSE);} } }  else 
{ /* Ieee/string.scm 457 */
bool_t BgL_test4797z00_7095;
if(
(BgL_endz00_62<BgL_startz00_61))
{ /* Ieee/string.scm 457 */
BgL_test4797z00_7095 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 457 */
BgL_test4797z00_7095 = 
(BgL_endz00_62>BgL_lenz00_963)
; } 
if(BgL_test4797z00_7095)
{ /* Ieee/string.scm 459 */
obj_t BgL_arg1263z00_976;obj_t BgL_arg1268z00_977;
{ /* Ieee/string.scm 459 */
obj_t BgL_arg1270z00_978;
{ /* Ieee/fixnum.scm 980 */

BgL_arg1270z00_978 = 
BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_endz00_62, ((long)10)); } 
BgL_arg1263z00_976 = 
string_append(BGl_string4324z00zz__r4_strings_6_7z00, BgL_arg1270z00_978); } 
{ /* Ieee/string.scm 460 */
obj_t BgL_list1272z00_982;
{ /* Ieee/string.scm 460 */
obj_t BgL_arg1273z00_983;
BgL_arg1273z00_983 = 
MAKE_YOUNG_PAIR(BgL_stringz00_60, BNIL); 
BgL_list1272z00_982 = 
MAKE_YOUNG_PAIR(
BINT(BgL_lenz00_963), BgL_arg1273z00_983); } 
BgL_arg1268z00_977 = BgL_list1272z00_982; } 
{ /* Ieee/string.scm 458 */
obj_t BgL_aux3481z00_5456;
BgL_aux3481z00_5456 = 
BGl_errorz00zz__errorz00(BGl_string4320z00zz__r4_strings_6_7z00, BgL_arg1263z00_976, BgL_arg1268z00_977); 
if(
STRINGP(BgL_aux3481z00_5456))
{ /* Ieee/string.scm 458 */
return BgL_aux3481z00_5456;}  else 
{ 
obj_t BgL_auxz00_7107;
BgL_auxz00_7107 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)22522)), BGl_string4320z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_aux3481z00_5456); 
FAILURE(BgL_auxz00_7107,BFALSE,BFALSE);} } }  else 
{ /* Ieee/string.scm 457 */
return 
c_substring(BgL_stringz00_60, BgL_startz00_61, BgL_endz00_62);} } } } } 

}



/* substring-ur */
BGL_EXPORTED_DEF obj_t BGl_substringzd2urzd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_65, long BgL_startz00_66, long BgL_endz00_67)
{
{ /* Ieee/string.scm 467 */
return 
c_substring(BgL_stringz00_65, BgL_startz00_66, BgL_endz00_67);} 

}



/* &substring-ur */
obj_t BGl_z62substringzd2urzb0zz__r4_strings_6_7z00(obj_t BgL_envz00_4811, obj_t BgL_stringz00_4812, obj_t BgL_startz00_4813, obj_t BgL_endz00_4814)
{
{ /* Ieee/string.scm 467 */
{ /* Ieee/string.scm 468 */
long BgL_auxz00_7129;long BgL_auxz00_7120;obj_t BgL_auxz00_7113;
{ /* Ieee/string.scm 468 */
obj_t BgL_tmpz00_7130;
if(
INTEGERP(BgL_endz00_4814))
{ /* Ieee/string.scm 468 */
BgL_tmpz00_7130 = BgL_endz00_4814
; }  else 
{ 
obj_t BgL_auxz00_7133;
BgL_auxz00_7133 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)22962)), BGl_string4325z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_endz00_4814); 
FAILURE(BgL_auxz00_7133,BFALSE,BFALSE);} 
BgL_auxz00_7129 = 
(long)CINT(BgL_tmpz00_7130); } 
{ /* Ieee/string.scm 468 */
obj_t BgL_tmpz00_7121;
if(
INTEGERP(BgL_startz00_4813))
{ /* Ieee/string.scm 468 */
BgL_tmpz00_7121 = BgL_startz00_4813
; }  else 
{ 
obj_t BgL_auxz00_7124;
BgL_auxz00_7124 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)22962)), BGl_string4325z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_4813); 
FAILURE(BgL_auxz00_7124,BFALSE,BFALSE);} 
BgL_auxz00_7120 = 
(long)CINT(BgL_tmpz00_7121); } 
if(
STRINGP(BgL_stringz00_4812))
{ /* Ieee/string.scm 468 */
BgL_auxz00_7113 = BgL_stringz00_4812
; }  else 
{ 
obj_t BgL_auxz00_7116;
BgL_auxz00_7116 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)22962)), BGl_string4325z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4812); 
FAILURE(BgL_auxz00_7116,BFALSE,BFALSE);} 
return 
BGl_substringzd2urzd2zz__r4_strings_6_7z00(BgL_auxz00_7113, BgL_auxz00_7120, BgL_auxz00_7129);} } 

}



/* _string-contains */
obj_t BGl__stringzd2containszd2zz__r4_strings_6_7z00(obj_t BgL_env1117z00_72, obj_t BgL_opt1116z00_71)
{
{ /* Ieee/string.scm 473 */
{ /* Ieee/string.scm 473 */
obj_t BgL_g1118z00_986;obj_t BgL_g1119z00_987;
BgL_g1118z00_986 = 
VECTOR_REF(BgL_opt1116z00_71,((long)0)); 
BgL_g1119z00_987 = 
VECTOR_REF(BgL_opt1116z00_71,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1116z00_71)) { case ((long)2) : 

{ /* Ieee/string.scm 473 */

{ /* Ieee/string.scm 473 */
obj_t BgL_auxz00_7148;obj_t BgL_auxz00_7141;
if(
STRINGP(BgL_g1119z00_987))
{ /* Ieee/string.scm 473 */
BgL_auxz00_7148 = BgL_g1119z00_987
; }  else 
{ 
obj_t BgL_auxz00_7151;
BgL_auxz00_7151 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)23216)), BGl_string4328z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1119z00_987); 
FAILURE(BgL_auxz00_7151,BFALSE,BFALSE);} 
if(
STRINGP(BgL_g1118z00_986))
{ /* Ieee/string.scm 473 */
BgL_auxz00_7141 = BgL_g1118z00_986
; }  else 
{ 
obj_t BgL_auxz00_7144;
BgL_auxz00_7144 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)23216)), BGl_string4328z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1118z00_986); 
FAILURE(BgL_auxz00_7144,BFALSE,BFALSE);} 
return 
BGl_stringzd2containszd2zz__r4_strings_6_7z00(BgL_auxz00_7141, BgL_auxz00_7148, 
(int)(((long)0)));} } break;case ((long)3) : 

{ /* Ieee/string.scm 473 */
obj_t BgL_startz00_992;
BgL_startz00_992 = 
VECTOR_REF(BgL_opt1116z00_71,((long)2)); 
{ /* Ieee/string.scm 473 */

{ /* Ieee/string.scm 473 */
int BgL_auxz00_7172;obj_t BgL_auxz00_7165;obj_t BgL_auxz00_7158;
{ /* Ieee/string.scm 473 */
obj_t BgL_tmpz00_7173;
if(
INTEGERP(BgL_startz00_992))
{ /* Ieee/string.scm 473 */
BgL_tmpz00_7173 = BgL_startz00_992
; }  else 
{ 
obj_t BgL_auxz00_7176;
BgL_auxz00_7176 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)23216)), BGl_string4328z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_992); 
FAILURE(BgL_auxz00_7176,BFALSE,BFALSE);} 
BgL_auxz00_7172 = 
CINT(BgL_tmpz00_7173); } 
if(
STRINGP(BgL_g1119z00_987))
{ /* Ieee/string.scm 473 */
BgL_auxz00_7165 = BgL_g1119z00_987
; }  else 
{ 
obj_t BgL_auxz00_7168;
BgL_auxz00_7168 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)23216)), BGl_string4328z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1119z00_987); 
FAILURE(BgL_auxz00_7168,BFALSE,BFALSE);} 
if(
STRINGP(BgL_g1118z00_986))
{ /* Ieee/string.scm 473 */
BgL_auxz00_7158 = BgL_g1118z00_986
; }  else 
{ 
obj_t BgL_auxz00_7161;
BgL_auxz00_7161 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)23216)), BGl_string4328z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1118z00_986); 
FAILURE(BgL_auxz00_7161,BFALSE,BFALSE);} 
return 
BGl_stringzd2containszd2zz__r4_strings_6_7z00(BgL_auxz00_7158, BgL_auxz00_7165, BgL_auxz00_7172);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4326z00zz__r4_strings_6_7z00, BGl_string4321z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1116z00_71)));} } } } 

}



/* string-contains */
BGL_EXPORTED_DEF obj_t BGl_stringzd2containszd2zz__r4_strings_6_7z00(obj_t BgL_s1z00_68, obj_t BgL_s2z00_69, int BgL_startz00_70)
{
{ /* Ieee/string.scm 473 */
{ /* Ieee/string.scm 474 */
long BgL_l2z00_994;
BgL_l2z00_994 = 
STRING_LENGTH(BgL_s2z00_69); 
if(
(BgL_l2z00_994==((long)1)))
{ /* Ieee/string.scm 476 */
unsigned char BgL_arg1277z00_996;
if(
BOUND_CHECK(((long)0), BgL_l2z00_994))
{ /* Ieee/string.scm 327 */
BgL_arg1277z00_996 = 
STRING_REF(BgL_s2z00_69, ((long)0)); }  else 
{ 
obj_t BgL_auxz00_7193;
BgL_auxz00_7193 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_s2z00_69, 
(int)(BgL_l2z00_994), 
(int)(((long)0))); 
FAILURE(BgL_auxz00_7193,BFALSE,BFALSE);} 
return 
BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL_s1z00_68, 
BCHAR(BgL_arg1277z00_996), 
BINT(BgL_startz00_70));}  else 
{ /* Ieee/string.scm 477 */
long BgL_l1z00_997;long BgL_i0z00_998;
BgL_l1z00_997 = 
STRING_LENGTH(BgL_s1z00_68); 
if(
(
(long)(BgL_startz00_70)<((long)0)))
{ /* Ieee/string.scm 478 */
BgL_i0z00_998 = ((long)0); }  else 
{ /* Ieee/string.scm 478 */
BgL_i0z00_998 = 
(long)(BgL_startz00_70); } 
if(
(BgL_l1z00_997<
(BgL_i0z00_998+BgL_l2z00_994)))
{ /* Ieee/string.scm 479 */
return BFALSE;}  else 
{ /* Ieee/string.scm 481 */
long BgL_stopz00_1001;
BgL_stopz00_1001 = 
(BgL_l1z00_997-BgL_l2z00_994); 
{ 
long BgL_iz00_1003;
BgL_iz00_1003 = BgL_i0z00_998; 
BgL_zc3z04anonymousza31282ze3z87_1004:
if(
bigloo_strcmp_at(BgL_s1z00_68, BgL_s2z00_69, BgL_iz00_1003))
{ /* Ieee/string.scm 484 */
return 
BINT(BgL_iz00_1003);}  else 
{ /* Ieee/string.scm 484 */
if(
(BgL_iz00_1003==BgL_stopz00_1001))
{ /* Ieee/string.scm 486 */
return BFALSE;}  else 
{ 
long BgL_iz00_7216;
BgL_iz00_7216 = 
(BgL_iz00_1003+((long)1)); 
BgL_iz00_1003 = BgL_iz00_7216; 
goto BgL_zc3z04anonymousza31282ze3z87_1004;} } } } } } } 

}



/* _string-contains-ci */
obj_t BGl__stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t BgL_env1123z00_77, obj_t BgL_opt1122z00_76)
{
{ /* Ieee/string.scm 494 */
{ /* Ieee/string.scm 494 */
obj_t BgL_g1124z00_1011;obj_t BgL_g1125z00_1012;
BgL_g1124z00_1011 = 
VECTOR_REF(BgL_opt1122z00_76,((long)0)); 
BgL_g1125z00_1012 = 
VECTOR_REF(BgL_opt1122z00_76,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1122z00_76)) { case ((long)2) : 

{ /* Ieee/string.scm 494 */

{ /* Ieee/string.scm 494 */
obj_t BgL_auxz00_7227;obj_t BgL_auxz00_7220;
if(
STRINGP(BgL_g1125z00_1012))
{ /* Ieee/string.scm 494 */
BgL_auxz00_7227 = BgL_g1125z00_1012
; }  else 
{ 
obj_t BgL_auxz00_7230;
BgL_auxz00_7230 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)23882)), BGl_string4331z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1125z00_1012); 
FAILURE(BgL_auxz00_7230,BFALSE,BFALSE);} 
if(
STRINGP(BgL_g1124z00_1011))
{ /* Ieee/string.scm 494 */
BgL_auxz00_7220 = BgL_g1124z00_1011
; }  else 
{ 
obj_t BgL_auxz00_7223;
BgL_auxz00_7223 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)23882)), BGl_string4331z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1124z00_1011); 
FAILURE(BgL_auxz00_7223,BFALSE,BFALSE);} 
return 
BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00(BgL_auxz00_7220, BgL_auxz00_7227, 
(int)(((long)0)));} } break;case ((long)3) : 

{ /* Ieee/string.scm 494 */
obj_t BgL_startz00_1017;
BgL_startz00_1017 = 
VECTOR_REF(BgL_opt1122z00_76,((long)2)); 
{ /* Ieee/string.scm 494 */

{ /* Ieee/string.scm 494 */
int BgL_auxz00_7251;obj_t BgL_auxz00_7244;obj_t BgL_auxz00_7237;
{ /* Ieee/string.scm 494 */
obj_t BgL_tmpz00_7252;
if(
INTEGERP(BgL_startz00_1017))
{ /* Ieee/string.scm 494 */
BgL_tmpz00_7252 = BgL_startz00_1017
; }  else 
{ 
obj_t BgL_auxz00_7255;
BgL_auxz00_7255 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)23882)), BGl_string4331z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_1017); 
FAILURE(BgL_auxz00_7255,BFALSE,BFALSE);} 
BgL_auxz00_7251 = 
CINT(BgL_tmpz00_7252); } 
if(
STRINGP(BgL_g1125z00_1012))
{ /* Ieee/string.scm 494 */
BgL_auxz00_7244 = BgL_g1125z00_1012
; }  else 
{ 
obj_t BgL_auxz00_7247;
BgL_auxz00_7247 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)23882)), BGl_string4331z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1125z00_1012); 
FAILURE(BgL_auxz00_7247,BFALSE,BFALSE);} 
if(
STRINGP(BgL_g1124z00_1011))
{ /* Ieee/string.scm 494 */
BgL_auxz00_7237 = BgL_g1124z00_1011
; }  else 
{ 
obj_t BgL_auxz00_7240;
BgL_auxz00_7240 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)23882)), BGl_string4331z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1124z00_1011); 
FAILURE(BgL_auxz00_7240,BFALSE,BFALSE);} 
return 
BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00(BgL_auxz00_7237, BgL_auxz00_7244, BgL_auxz00_7251);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4329z00zz__r4_strings_6_7z00, BGl_string4321z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1122z00_76)));} } } } 

}



/* string-contains-ci */
BGL_EXPORTED_DEF obj_t BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t BgL_s1z00_73, obj_t BgL_s2z00_74, int BgL_startz00_75)
{
{ /* Ieee/string.scm 494 */
{ /* Ieee/string.scm 495 */
long BgL_l1z00_1019;long BgL_l2z00_1020;long BgL_i0z00_1021;
BgL_l1z00_1019 = 
STRING_LENGTH(BgL_s1z00_73); 
BgL_l2z00_1020 = 
STRING_LENGTH(BgL_s2z00_74); 
if(
(
(long)(BgL_startz00_75)<((long)0)))
{ /* Ieee/string.scm 497 */
BgL_i0z00_1021 = ((long)0); }  else 
{ /* Ieee/string.scm 497 */
BgL_i0z00_1021 = 
(long)(BgL_startz00_75); } 
if(
(BgL_l1z00_1019<
(BgL_i0z00_1021+BgL_l2z00_1020)))
{ /* Ieee/string.scm 498 */
return BFALSE;}  else 
{ /* Ieee/string.scm 500 */
long BgL_stopz00_1024;
BgL_stopz00_1024 = 
(BgL_l1z00_1019-BgL_l2z00_1020); 
{ 
long BgL_iz00_1026;
BgL_iz00_1026 = BgL_i0z00_1021; 
BgL_zc3z04anonymousza31292ze3z87_1027:
if(
bigloo_strcmp_ci_at(BgL_s1z00_73, BgL_s2z00_74, BgL_iz00_1026))
{ /* Ieee/string.scm 503 */
return 
BINT(BgL_iz00_1026);}  else 
{ /* Ieee/string.scm 503 */
if(
(BgL_iz00_1026==BgL_stopz00_1024))
{ /* Ieee/string.scm 505 */
return BFALSE;}  else 
{ 
long BgL_iz00_7281;
BgL_iz00_7281 = 
(BgL_iz00_1026+((long)1)); 
BgL_iz00_1026 = BgL_iz00_7281; 
goto BgL_zc3z04anonymousza31292ze3z87_1027;} } } } } } 

}



/* string-compare3 */
BGL_EXPORTED_DEF long BGl_stringzd2compare3zd2zz__r4_strings_6_7z00(obj_t BgL_az00_78, obj_t BgL_bz00_79)
{
{ /* Ieee/string.scm 517 */
{ /* Ieee/string.scm 518 */
long BgL_alz00_1034;
BgL_alz00_1034 = 
STRING_LENGTH(BgL_az00_78); 
{ /* Ieee/string.scm 518 */
long BgL_blz00_1035;
BgL_blz00_1035 = 
STRING_LENGTH(BgL_bz00_79); 
{ /* Ieee/string.scm 519 */
long BgL_lz00_1036;
if(
(BgL_alz00_1034<BgL_blz00_1035))
{ /* Ieee/string.scm 520 */
BgL_lz00_1036 = BgL_alz00_1034; }  else 
{ /* Ieee/string.scm 520 */
BgL_lz00_1036 = BgL_blz00_1035; } 
{ /* Ieee/string.scm 520 */

{ 
long BgL_rz00_1038;
BgL_rz00_1038 = ((long)0); 
BgL_zc3z04anonymousza31298ze3z87_1039:
if(
(BgL_rz00_1038==BgL_lz00_1036))
{ /* Ieee/string.scm 522 */
return 
(BgL_alz00_1034-BgL_blz00_1035);}  else 
{ /* Ieee/string.scm 524 */
long BgL_cz00_1041;
{ /* Ieee/string.scm 524 */
long BgL_auxz00_7303;long BgL_tmpz00_7290;
{ /* Ieee/string.scm 525 */
unsigned char BgL_tmpz00_7304;
{ /* Ieee/string.scm 339 */
long BgL_l2941z00_4916;
BgL_l2941z00_4916 = 
STRING_LENGTH(BgL_bz00_79); 
if(
BOUND_CHECK(BgL_rz00_1038, BgL_l2941z00_4916))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_7304 = 
STRING_REF(BgL_bz00_79, BgL_rz00_1038)
; }  else 
{ 
obj_t BgL_auxz00_7309;
BgL_auxz00_7309 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_bz00_79, 
(int)(BgL_l2941z00_4916), 
(int)(BgL_rz00_1038)); 
FAILURE(BgL_auxz00_7309,BFALSE,BFALSE);} } 
BgL_auxz00_7303 = 
(BgL_tmpz00_7304); } 
{ /* Ieee/string.scm 524 */
unsigned char BgL_tmpz00_7291;
{ /* Ieee/string.scm 339 */
long BgL_l2937z00_4912;
BgL_l2937z00_4912 = 
STRING_LENGTH(BgL_az00_78); 
if(
BOUND_CHECK(BgL_rz00_1038, BgL_l2937z00_4912))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_7291 = 
STRING_REF(BgL_az00_78, BgL_rz00_1038)
; }  else 
{ 
obj_t BgL_auxz00_7296;
BgL_auxz00_7296 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_az00_78, 
(int)(BgL_l2937z00_4912), 
(int)(BgL_rz00_1038)); 
FAILURE(BgL_auxz00_7296,BFALSE,BFALSE);} } 
BgL_tmpz00_7290 = 
(BgL_tmpz00_7291); } 
BgL_cz00_1041 = 
(BgL_tmpz00_7290-BgL_auxz00_7303); } 
if(
(BgL_cz00_1041==((long)0)))
{ 
long BgL_rz00_7319;
BgL_rz00_7319 = 
(BgL_rz00_1038+((long)1)); 
BgL_rz00_1038 = BgL_rz00_7319; 
goto BgL_zc3z04anonymousza31298ze3z87_1039;}  else 
{ /* Ieee/string.scm 526 */
return BgL_cz00_1041;} } } } } } } } 

}



/* &string-compare3 */
obj_t BGl_z62stringzd2compare3zb0zz__r4_strings_6_7z00(obj_t BgL_envz00_4815, obj_t BgL_az00_4816, obj_t BgL_bz00_4817)
{
{ /* Ieee/string.scm 517 */
{ /* Ieee/string.scm 518 */
long BgL_tmpz00_7321;
{ /* Ieee/string.scm 518 */
obj_t BgL_auxz00_7329;obj_t BgL_auxz00_7322;
if(
STRINGP(BgL_bz00_4817))
{ /* Ieee/string.scm 518 */
BgL_auxz00_7329 = BgL_bz00_4817
; }  else 
{ 
obj_t BgL_auxz00_7332;
BgL_auxz00_7332 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)24823)), BGl_string4332z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_bz00_4817); 
FAILURE(BgL_auxz00_7332,BFALSE,BFALSE);} 
if(
STRINGP(BgL_az00_4816))
{ /* Ieee/string.scm 518 */
BgL_auxz00_7322 = BgL_az00_4816
; }  else 
{ 
obj_t BgL_auxz00_7325;
BgL_auxz00_7325 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)24823)), BGl_string4332z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_az00_4816); 
FAILURE(BgL_auxz00_7325,BFALSE,BFALSE);} 
BgL_tmpz00_7321 = 
BGl_stringzd2compare3zd2zz__r4_strings_6_7z00(BgL_auxz00_7322, BgL_auxz00_7329); } 
return 
BINT(BgL_tmpz00_7321);} } 

}



/* string-compare3-ci */
BGL_EXPORTED_DEF long BGl_stringzd2compare3zd2ciz00zz__r4_strings_6_7z00(obj_t BgL_az00_80, obj_t BgL_bz00_81)
{
{ /* Ieee/string.scm 533 */
{ /* Ieee/string.scm 534 */
long BgL_alz00_1052;
BgL_alz00_1052 = 
STRING_LENGTH(BgL_az00_80); 
{ /* Ieee/string.scm 534 */
long BgL_blz00_1053;
BgL_blz00_1053 = 
STRING_LENGTH(BgL_bz00_81); 
{ /* Ieee/string.scm 535 */
long BgL_lz00_1054;
if(
(BgL_alz00_1052<BgL_blz00_1053))
{ /* Ieee/string.scm 536 */
BgL_lz00_1054 = BgL_alz00_1052; }  else 
{ /* Ieee/string.scm 536 */
BgL_lz00_1054 = BgL_blz00_1053; } 
{ /* Ieee/string.scm 536 */

{ 
long BgL_rz00_1056;
BgL_rz00_1056 = ((long)0); 
BgL_zc3z04anonymousza31308ze3z87_1057:
if(
(BgL_rz00_1056==BgL_lz00_1054))
{ /* Ieee/string.scm 538 */
return 
(BgL_alz00_1052-BgL_blz00_1053);}  else 
{ /* Ieee/string.scm 540 */
long BgL_cz00_1059;
{ /* Ieee/string.scm 540 */
long BgL_auxz00_7360;long BgL_tmpz00_7345;
{ /* Ieee/string.scm 541 */
unsigned char BgL_tmpz00_7361;
{ /* Ieee/string.scm 541 */
unsigned char BgL_tmpz00_7362;
{ /* Ieee/string.scm 339 */
long BgL_l2949z00_4924;
BgL_l2949z00_4924 = 
STRING_LENGTH(BgL_bz00_81); 
if(
BOUND_CHECK(BgL_rz00_1056, BgL_l2949z00_4924))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_7362 = 
STRING_REF(BgL_bz00_81, BgL_rz00_1056)
; }  else 
{ 
obj_t BgL_auxz00_7367;
BgL_auxz00_7367 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_bz00_81, 
(int)(BgL_l2949z00_4924), 
(int)(BgL_rz00_1056)); 
FAILURE(BgL_auxz00_7367,BFALSE,BFALSE);} } 
BgL_tmpz00_7361 = 
tolower(BgL_tmpz00_7362); } 
BgL_auxz00_7360 = 
(BgL_tmpz00_7361); } 
{ /* Ieee/string.scm 540 */
unsigned char BgL_tmpz00_7346;
{ /* Ieee/string.scm 540 */
unsigned char BgL_tmpz00_7347;
{ /* Ieee/string.scm 339 */
long BgL_l2945z00_4920;
BgL_l2945z00_4920 = 
STRING_LENGTH(BgL_az00_80); 
if(
BOUND_CHECK(BgL_rz00_1056, BgL_l2945z00_4920))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_7347 = 
STRING_REF(BgL_az00_80, BgL_rz00_1056)
; }  else 
{ 
obj_t BgL_auxz00_7352;
BgL_auxz00_7352 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_az00_80, 
(int)(BgL_l2945z00_4920), 
(int)(BgL_rz00_1056)); 
FAILURE(BgL_auxz00_7352,BFALSE,BFALSE);} } 
BgL_tmpz00_7346 = 
tolower(BgL_tmpz00_7347); } 
BgL_tmpz00_7345 = 
(BgL_tmpz00_7346); } 
BgL_cz00_1059 = 
(BgL_tmpz00_7345-BgL_auxz00_7360); } 
if(
(BgL_cz00_1059==((long)0)))
{ 
long BgL_rz00_7378;
BgL_rz00_7378 = 
(BgL_rz00_1056+((long)1)); 
BgL_rz00_1056 = BgL_rz00_7378; 
goto BgL_zc3z04anonymousza31308ze3z87_1057;}  else 
{ /* Ieee/string.scm 542 */
return BgL_cz00_1059;} } } } } } } } 

}



/* &string-compare3-ci */
obj_t BGl_z62stringzd2compare3zd2ciz62zz__r4_strings_6_7z00(obj_t BgL_envz00_4818, obj_t BgL_az00_4819, obj_t BgL_bz00_4820)
{
{ /* Ieee/string.scm 533 */
{ /* Ieee/string.scm 534 */
long BgL_tmpz00_7380;
{ /* Ieee/string.scm 534 */
obj_t BgL_auxz00_7388;obj_t BgL_auxz00_7381;
if(
STRINGP(BgL_bz00_4820))
{ /* Ieee/string.scm 534 */
BgL_auxz00_7388 = BgL_bz00_4820
; }  else 
{ 
obj_t BgL_auxz00_7391;
BgL_auxz00_7391 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)25475)), BGl_string4333z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_bz00_4820); 
FAILURE(BgL_auxz00_7391,BFALSE,BFALSE);} 
if(
STRINGP(BgL_az00_4819))
{ /* Ieee/string.scm 534 */
BgL_auxz00_7381 = BgL_az00_4819
; }  else 
{ 
obj_t BgL_auxz00_7384;
BgL_auxz00_7384 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)25475)), BGl_string4333z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_az00_4819); 
FAILURE(BgL_auxz00_7384,BFALSE,BFALSE);} 
BgL_tmpz00_7380 = 
BGl_stringzd2compare3zd2ciz00zz__r4_strings_6_7z00(BgL_auxz00_7381, BgL_auxz00_7388); } 
return 
BINT(BgL_tmpz00_7380);} } 

}



/* string-append */
BGL_EXPORTED_DEF obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t BgL_listz00_82)
{
{ /* Ieee/string.scm 553 */
if(
NULLP(BgL_listz00_82))
{ /* Ieee/string.scm 554 */
return BGl_string4334z00zz__r4_strings_6_7z00;}  else 
{ /* Ieee/string.scm 556 */
long BgL_lenz00_1073;
{ 
obj_t BgL_listz00_2820;long BgL_resz00_2821;
BgL_listz00_2820 = BgL_listz00_82; 
BgL_resz00_2821 = ((long)0); 
BgL_stringzd2appendzd2_2819:
if(
NULLP(BgL_listz00_2820))
{ /* Ieee/string.scm 558 */
BgL_lenz00_1073 = BgL_resz00_2821; }  else 
{ 
long BgL_resz00_7409;obj_t BgL_listz00_7401;
{ /* Ieee/string.scm 560 */
obj_t BgL_pairz00_2833;
if(
PAIRP(BgL_listz00_2820))
{ /* Ieee/string.scm 560 */
BgL_pairz00_2833 = BgL_listz00_2820; }  else 
{ 
obj_t BgL_auxz00_7404;
BgL_auxz00_7404 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)26588)), BGl_string4335z00zz__r4_strings_6_7z00, BGl_string4336z00zz__r4_strings_6_7z00, BgL_listz00_2820); 
FAILURE(BgL_auxz00_7404,BFALSE,BFALSE);} 
BgL_listz00_7401 = 
CDR(BgL_pairz00_2833); } 
{ /* Ieee/string.scm 561 */
long BgL_tmpz00_7410;
{ /* Ieee/string.scm 562 */
obj_t BgL_stringz00_2835;
{ /* Ieee/string.scm 562 */
obj_t BgL_pairz00_2834;
if(
PAIRP(BgL_listz00_2820))
{ /* Ieee/string.scm 562 */
BgL_pairz00_2834 = BgL_listz00_2820; }  else 
{ 
obj_t BgL_auxz00_7413;
BgL_auxz00_7413 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)26635)), BGl_string4335z00zz__r4_strings_6_7z00, BGl_string4336z00zz__r4_strings_6_7z00, BgL_listz00_2820); 
FAILURE(BgL_auxz00_7413,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 562 */
obj_t BgL_aux3521z00_5496;
BgL_aux3521z00_5496 = 
CAR(BgL_pairz00_2834); 
if(
STRINGP(BgL_aux3521z00_5496))
{ /* Ieee/string.scm 562 */
BgL_stringz00_2835 = BgL_aux3521z00_5496; }  else 
{ 
obj_t BgL_auxz00_7420;
BgL_auxz00_7420 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)26630)), BGl_string4335z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_aux3521z00_5496); 
FAILURE(BgL_auxz00_7420,BFALSE,BFALSE);} } } 
BgL_tmpz00_7410 = 
STRING_LENGTH(BgL_stringz00_2835); } 
BgL_resz00_7409 = 
(BgL_resz00_2821+BgL_tmpz00_7410); } 
BgL_resz00_2821 = BgL_resz00_7409; 
BgL_listz00_2820 = BgL_listz00_7401; 
goto BgL_stringzd2appendzd2_2819;} } 
{ /* Ieee/string.scm 556 */
obj_t BgL_resz00_1074;
BgL_resz00_1074 = 
make_string_sans_fill(BgL_lenz00_1073); 
{ /* Ieee/string.scm 563 */

{ 
obj_t BgL_listz00_2853;long BgL_wz00_2854;
BgL_listz00_2853 = BgL_listz00_82; 
BgL_wz00_2854 = ((long)0); 
BgL_stringzd2appendzd2_2852:
if(
NULLP(BgL_listz00_2853))
{ /* Ieee/string.scm 566 */
return BgL_resz00_1074;}  else 
{ /* Ieee/string.scm 568 */
obj_t BgL_sz00_2857;
{ /* Ieee/string.scm 568 */
obj_t BgL_pairz00_2858;
if(
PAIRP(BgL_listz00_2853))
{ /* Ieee/string.scm 568 */
BgL_pairz00_2858 = BgL_listz00_2853; }  else 
{ 
obj_t BgL_auxz00_7431;
BgL_auxz00_7431 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)26787)), BGl_string4335z00zz__r4_strings_6_7z00, BGl_string4336z00zz__r4_strings_6_7z00, BgL_listz00_2853); 
FAILURE(BgL_auxz00_7431,BFALSE,BFALSE);} 
BgL_sz00_2857 = 
CAR(BgL_pairz00_2858); } 
{ /* Ieee/string.scm 568 */
long BgL_lz00_2859;
{ /* Ieee/string.scm 569 */
obj_t BgL_stringz00_2861;
if(
STRINGP(BgL_sz00_2857))
{ /* Ieee/string.scm 569 */
BgL_stringz00_2861 = BgL_sz00_2857; }  else 
{ 
obj_t BgL_auxz00_7438;
BgL_auxz00_7438 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)26800)), BGl_string4335z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_sz00_2857); 
FAILURE(BgL_auxz00_7438,BFALSE,BFALSE);} 
BgL_lz00_2859 = 
STRING_LENGTH(BgL_stringz00_2861); } 
{ /* Ieee/string.scm 569 */

{ /* Ieee/string.scm 570 */
obj_t BgL_s1z00_2862;
if(
STRINGP(BgL_sz00_2857))
{ /* Ieee/string.scm 570 */
BgL_s1z00_2862 = BgL_sz00_2857; }  else 
{ 
obj_t BgL_auxz00_7445;
BgL_auxz00_7445 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)26843)), BGl_string4335z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_sz00_2857); 
FAILURE(BgL_auxz00_7445,BFALSE,BFALSE);} 
blit_string(BgL_s1z00_2862, ((long)0), BgL_resz00_1074, BgL_wz00_2854, BgL_lz00_2859); } 
{ /* Ieee/string.scm 571 */
obj_t BgL_arg1322z00_2866;long BgL_arg1324z00_2867;
{ /* Ieee/string.scm 571 */
obj_t BgL_pairz00_2868;
if(
PAIRP(BgL_listz00_2853))
{ /* Ieee/string.scm 571 */
BgL_pairz00_2868 = BgL_listz00_2853; }  else 
{ 
obj_t BgL_auxz00_7452;
BgL_auxz00_7452 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)26882)), BGl_string4335z00zz__r4_strings_6_7z00, BGl_string4336z00zz__r4_strings_6_7z00, BgL_listz00_2853); 
FAILURE(BgL_auxz00_7452,BFALSE,BFALSE);} 
BgL_arg1322z00_2866 = 
CDR(BgL_pairz00_2868); } 
BgL_arg1324z00_2867 = 
(BgL_wz00_2854+BgL_lz00_2859); 
{ 
long BgL_wz00_7459;obj_t BgL_listz00_7458;
BgL_listz00_7458 = BgL_arg1322z00_2866; 
BgL_wz00_7459 = BgL_arg1324z00_2867; 
BgL_wz00_2854 = BgL_wz00_7459; 
BgL_listz00_2853 = BgL_listz00_7458; 
goto BgL_stringzd2appendzd2_2852;} } } } } } } } } } 

}



/* &string-append */
obj_t BGl_z62stringzd2appendzb0zz__r4_strings_6_7z00(obj_t BgL_envz00_4821, obj_t BgL_listz00_4822)
{
{ /* Ieee/string.scm 553 */
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_listz00_4822);} 

}



/* list->string */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t BgL_listz00_83)
{
{ /* Ieee/string.scm 576 */
{ /* Ieee/string.scm 577 */
long BgL_lenz00_1095;
BgL_lenz00_1095 = 
bgl_list_length(BgL_listz00_83); 
{ /* Ieee/string.scm 577 */
obj_t BgL_stringz00_1096;
BgL_stringz00_1096 = 
make_string_sans_fill(BgL_lenz00_1095); 
{ /* Ieee/string.scm 578 */

{ 
long BgL_iz00_2883;obj_t BgL_lz00_2884;
BgL_iz00_2883 = ((long)0); 
BgL_lz00_2884 = BgL_listz00_83; 
BgL_loopz00_2882:
if(
(BgL_iz00_2883==BgL_lenz00_1095))
{ /* Ieee/string.scm 581 */
return BgL_stringz00_1096;}  else 
{ /* Ieee/string.scm 581 */
{ /* Ieee/string.scm 584 */
obj_t BgL_arg1333z00_2889;
{ /* Ieee/string.scm 584 */
obj_t BgL_pairz00_2890;
if(
PAIRP(BgL_lz00_2884))
{ /* Ieee/string.scm 584 */
BgL_pairz00_2890 = BgL_lz00_2884; }  else 
{ 
obj_t BgL_auxz00_7467;
BgL_auxz00_7467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)27342)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4336z00zz__r4_strings_6_7z00, BgL_lz00_2884); 
FAILURE(BgL_auxz00_7467,BFALSE,BFALSE);} 
BgL_arg1333z00_2889 = 
CAR(BgL_pairz00_2890); } 
{ /* Ieee/string.scm 584 */
unsigned char BgL_charz00_2893;
{ /* Ieee/string.scm 584 */
obj_t BgL_tmpz00_7472;
if(
CHARP(BgL_arg1333z00_2889))
{ /* Ieee/string.scm 584 */
BgL_tmpz00_7472 = BgL_arg1333z00_2889
; }  else 
{ 
obj_t BgL_auxz00_7475;
BgL_auxz00_7475 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)27343)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4289z00zz__r4_strings_6_7z00, BgL_arg1333z00_2889); 
FAILURE(BgL_auxz00_7475,BFALSE,BFALSE);} 
BgL_charz00_2893 = 
CCHAR(BgL_tmpz00_7472); } 
{ /* Ieee/string.scm 345 */
long BgL_l2953z00_4928;
BgL_l2953z00_4928 = 
STRING_LENGTH(BgL_stringz00_1096); 
if(
BOUND_CHECK(BgL_iz00_2883, BgL_l2953z00_4928))
{ /* Ieee/string.scm 345 */
STRING_SET(BgL_stringz00_1096, BgL_iz00_2883, BgL_charz00_2893); }  else 
{ 
obj_t BgL_auxz00_7484;
BgL_auxz00_7484 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_stringz00_1096, 
(int)(BgL_l2953z00_4928), 
(int)(BgL_iz00_2883)); 
FAILURE(BgL_auxz00_7484,BFALSE,BFALSE);} } } } 
{ /* Ieee/string.scm 585 */
long BgL_arg1334z00_2894;obj_t BgL_arg1335z00_2895;
BgL_arg1334z00_2894 = 
(BgL_iz00_2883+((long)1)); 
{ /* Ieee/string.scm 585 */
obj_t BgL_pairz00_2898;
if(
PAIRP(BgL_lz00_2884))
{ /* Ieee/string.scm 585 */
BgL_pairz00_2898 = BgL_lz00_2884; }  else 
{ 
obj_t BgL_auxz00_7493;
BgL_auxz00_7493 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)27369)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4336z00zz__r4_strings_6_7z00, BgL_lz00_2884); 
FAILURE(BgL_auxz00_7493,BFALSE,BFALSE);} 
BgL_arg1335z00_2895 = 
CDR(BgL_pairz00_2898); } 
{ 
obj_t BgL_lz00_7499;long BgL_iz00_7498;
BgL_iz00_7498 = BgL_arg1334z00_2894; 
BgL_lz00_7499 = BgL_arg1335z00_2895; 
BgL_lz00_2884 = BgL_lz00_7499; 
BgL_iz00_2883 = BgL_iz00_7498; 
goto BgL_loopz00_2882;} } } } } } } } 

}



/* &list->string */
obj_t BGl_z62listzd2ze3stringz53zz__r4_strings_6_7z00(obj_t BgL_envz00_4823, obj_t BgL_listz00_4824)
{
{ /* Ieee/string.scm 576 */
{ /* Ieee/string.scm 577 */
obj_t BgL_auxz00_7500;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_listz00_4824))
{ /* Ieee/string.scm 577 */
BgL_auxz00_7500 = BgL_listz00_4824
; }  else 
{ 
obj_t BgL_auxz00_7503;
BgL_auxz00_7503 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)27160)), BGl_string4338z00zz__r4_strings_6_7z00, BGl_string4291z00zz__r4_strings_6_7z00, BgL_listz00_4824); 
FAILURE(BgL_auxz00_7503,BFALSE,BFALSE);} 
return 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_auxz00_7500);} } 

}



/* string->list */
BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(obj_t BgL_stringz00_84)
{
{ /* Ieee/string.scm 590 */
{ /* Ieee/string.scm 591 */
long BgL_lenz00_1106;
BgL_lenz00_1106 = 
STRING_LENGTH(BgL_stringz00_84); 
{ /* Ieee/string.scm 592 */
long BgL_g1021z00_1107;
BgL_g1021z00_1107 = 
(BgL_lenz00_1106-((long)1)); 
{ 
long BgL_iz00_1110;obj_t BgL_resz00_1111;
BgL_iz00_1110 = BgL_g1021z00_1107; 
BgL_resz00_1111 = BNIL; 
BgL_zc3z04anonymousza31336ze3z87_1112:
if(
(BgL_iz00_1110==((long)-1)))
{ /* Ieee/string.scm 594 */
return BgL_resz00_1111;}  else 
{ /* Ieee/string.scm 596 */
long BgL_arg1338z00_1114;obj_t BgL_arg1339z00_1115;
BgL_arg1338z00_1114 = 
(BgL_iz00_1110-((long)1)); 
{ /* Ieee/string.scm 597 */
unsigned char BgL_arg1340z00_1116;
{ /* Ieee/string.scm 339 */
long BgL_l2957z00_4932;
BgL_l2957z00_4932 = 
STRING_LENGTH(BgL_stringz00_84); 
if(
BOUND_CHECK(BgL_iz00_1110, BgL_l2957z00_4932))
{ /* Ieee/string.scm 339 */
BgL_arg1340z00_1116 = 
STRING_REF(BgL_stringz00_84, BgL_iz00_1110); }  else 
{ 
obj_t BgL_auxz00_7517;
BgL_auxz00_7517 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_84, 
(int)(BgL_l2957z00_4932), 
(int)(BgL_iz00_1110)); 
FAILURE(BgL_auxz00_7517,BFALSE,BFALSE);} } 
BgL_arg1339z00_1115 = 
MAKE_YOUNG_PAIR(
BCHAR(BgL_arg1340z00_1116), BgL_resz00_1111); } 
{ 
obj_t BgL_resz00_7526;long BgL_iz00_7525;
BgL_iz00_7525 = BgL_arg1338z00_1114; 
BgL_resz00_7526 = BgL_arg1339z00_1115; 
BgL_resz00_1111 = BgL_resz00_7526; 
BgL_iz00_1110 = BgL_iz00_7525; 
goto BgL_zc3z04anonymousza31336ze3z87_1112;} } } } } } 

}



/* &string->list */
obj_t BGl_z62stringzd2ze3listz53zz__r4_strings_6_7z00(obj_t BgL_envz00_4825, obj_t BgL_stringz00_4826)
{
{ /* Ieee/string.scm 590 */
{ /* Ieee/string.scm 591 */
obj_t BgL_auxz00_7527;
if(
STRINGP(BgL_stringz00_4826))
{ /* Ieee/string.scm 591 */
BgL_auxz00_7527 = BgL_stringz00_4826
; }  else 
{ 
obj_t BgL_auxz00_7530;
BgL_auxz00_7530 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)27634)), BGl_string4339z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4826); 
FAILURE(BgL_auxz00_7530,BFALSE,BFALSE);} 
return 
BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(BgL_auxz00_7527);} } 

}



/* string-copy */
BGL_EXPORTED_DEF obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_85)
{
{ /* Ieee/string.scm 602 */
{ /* Ieee/string.scm 603 */
long BgL_lenz00_1118;
BgL_lenz00_1118 = 
STRING_LENGTH(BgL_stringz00_85); 
{ /* Ieee/string.scm 603 */
obj_t BgL_newz00_1119;
BgL_newz00_1119 = 
make_string_sans_fill(BgL_lenz00_1118); 
{ /* Ieee/string.scm 604 */

{ /* Ieee/string.scm 605 */
long BgL_g1023z00_1120;
BgL_g1023z00_1120 = 
(BgL_lenz00_1118-((long)1)); 
{ 
long BgL_iz00_1122;
BgL_iz00_1122 = BgL_g1023z00_1120; 
BgL_zc3z04anonymousza31341ze3z87_1123:
if(
(BgL_iz00_1122==((long)-1)))
{ /* Ieee/string.scm 606 */
return BgL_newz00_1119;}  else 
{ /* Ieee/string.scm 606 */
{ /* Ieee/string.scm 609 */
unsigned char BgL_arg1343z00_1125;
{ /* Ieee/string.scm 339 */
long BgL_l2961z00_4936;
BgL_l2961z00_4936 = 
STRING_LENGTH(BgL_stringz00_85); 
if(
BOUND_CHECK(BgL_iz00_1122, BgL_l2961z00_4936))
{ /* Ieee/string.scm 339 */
BgL_arg1343z00_1125 = 
STRING_REF(BgL_stringz00_85, BgL_iz00_1122); }  else 
{ 
obj_t BgL_auxz00_7544;
BgL_auxz00_7544 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_85, 
(int)(BgL_l2961z00_4936), 
(int)(BgL_iz00_1122)); 
FAILURE(BgL_auxz00_7544,BFALSE,BFALSE);} } 
{ /* Ieee/string.scm 345 */
long BgL_l2965z00_4940;
BgL_l2965z00_4940 = 
STRING_LENGTH(BgL_newz00_1119); 
if(
BOUND_CHECK(BgL_iz00_1122, BgL_l2965z00_4940))
{ /* Ieee/string.scm 345 */
STRING_SET(BgL_newz00_1119, BgL_iz00_1122, BgL_arg1343z00_1125); }  else 
{ 
obj_t BgL_auxz00_7554;
BgL_auxz00_7554 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_newz00_1119, 
(int)(BgL_l2965z00_4940), 
(int)(BgL_iz00_1122)); 
FAILURE(BgL_auxz00_7554,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_7560;
BgL_iz00_7560 = 
(BgL_iz00_1122-((long)1)); 
BgL_iz00_1122 = BgL_iz00_7560; 
goto BgL_zc3z04anonymousza31341ze3z87_1123;} } } } } } } } 

}



/* &string-copy */
obj_t BGl_z62stringzd2copyzb0zz__r4_strings_6_7z00(obj_t BgL_envz00_4827, obj_t BgL_stringz00_4828)
{
{ /* Ieee/string.scm 602 */
{ /* Ieee/string.scm 603 */
obj_t BgL_auxz00_7562;
if(
STRINGP(BgL_stringz00_4828))
{ /* Ieee/string.scm 603 */
BgL_auxz00_7562 = BgL_stringz00_4828
; }  else 
{ 
obj_t BgL_auxz00_7565;
BgL_auxz00_7565 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)28069)), BGl_string4340z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4828); 
FAILURE(BgL_auxz00_7565,BFALSE,BFALSE);} 
return 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_auxz00_7562);} } 

}



/* string-fill! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2fillz12zc0zz__r4_strings_6_7z00(obj_t BgL_stringz00_86, unsigned char BgL_charz00_87)
{
{ /* Ieee/string.scm 615 */
{ /* Ieee/string.scm 616 */
long BgL_lenz00_1128;
BgL_lenz00_1128 = 
STRING_LENGTH(BgL_stringz00_86); 
{ 
long BgL_iz00_2935;
BgL_iz00_2935 = ((long)0); 
BgL_loopz00_2934:
if(
(BgL_iz00_2935==BgL_lenz00_1128))
{ /* Ieee/string.scm 618 */
return BUNSPEC;}  else 
{ /* Ieee/string.scm 618 */
{ /* Ieee/string.scm 345 */
long BgL_l2969z00_4944;
BgL_l2969z00_4944 = 
STRING_LENGTH(BgL_stringz00_86); 
if(
BOUND_CHECK(BgL_iz00_2935, BgL_l2969z00_4944))
{ /* Ieee/string.scm 345 */
STRING_SET(BgL_stringz00_86, BgL_iz00_2935, BgL_charz00_87); }  else 
{ 
obj_t BgL_auxz00_7577;
BgL_auxz00_7577 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_stringz00_86, 
(int)(BgL_l2969z00_4944), 
(int)(BgL_iz00_2935)); 
FAILURE(BgL_auxz00_7577,BFALSE,BFALSE);} } 
{ 
long BgL_iz00_7583;
BgL_iz00_7583 = 
(BgL_iz00_2935+((long)1)); 
BgL_iz00_2935 = BgL_iz00_7583; 
goto BgL_loopz00_2934;} } } } } 

}



/* &string-fill! */
obj_t BGl_z62stringzd2fillz12za2zz__r4_strings_6_7z00(obj_t BgL_envz00_4829, obj_t BgL_stringz00_4830, obj_t BgL_charz00_4831)
{
{ /* Ieee/string.scm 615 */
{ /* Ieee/string.scm 616 */
unsigned char BgL_auxz00_7592;obj_t BgL_auxz00_7585;
{ /* Ieee/string.scm 616 */
obj_t BgL_tmpz00_7593;
if(
CHARP(BgL_charz00_4831))
{ /* Ieee/string.scm 616 */
BgL_tmpz00_7593 = BgL_charz00_4831
; }  else 
{ 
obj_t BgL_auxz00_7596;
BgL_auxz00_7596 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)28551)), BGl_string4341z00zz__r4_strings_6_7z00, BGl_string4289z00zz__r4_strings_6_7z00, BgL_charz00_4831); 
FAILURE(BgL_auxz00_7596,BFALSE,BFALSE);} 
BgL_auxz00_7592 = 
CCHAR(BgL_tmpz00_7593); } 
if(
STRINGP(BgL_stringz00_4830))
{ /* Ieee/string.scm 616 */
BgL_auxz00_7585 = BgL_stringz00_4830
; }  else 
{ 
obj_t BgL_auxz00_7588;
BgL_auxz00_7588 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)28551)), BGl_string4341z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4830); 
FAILURE(BgL_auxz00_7588,BFALSE,BFALSE);} 
return 
BGl_stringzd2fillz12zc0zz__r4_strings_6_7z00(BgL_auxz00_7585, BgL_auxz00_7592);} } 

}



/* string-upcase */
BGL_EXPORTED_DEF obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_88)
{
{ /* Ieee/string.scm 627 */
{ /* Ieee/string.scm 628 */
long BgL_lenz00_1135;
BgL_lenz00_1135 = 
STRING_LENGTH(BgL_stringz00_88); 
{ /* Ieee/string.scm 628 */
obj_t BgL_resz00_1136;
BgL_resz00_1136 = 
make_string_sans_fill(BgL_lenz00_1135); 
{ /* Ieee/string.scm 629 */

{ 
long BgL_iz00_1138;
BgL_iz00_1138 = ((long)0); 
BgL_zc3z04anonymousza31348ze3z87_1139:
if(
(BgL_iz00_1138==BgL_lenz00_1135))
{ /* Ieee/string.scm 631 */
return BgL_resz00_1136;}  else 
{ /* Ieee/string.scm 631 */
{ /* Ieee/string.scm 634 */
unsigned char BgL_arg1350z00_1141;
{ /* Ieee/string.scm 634 */
unsigned char BgL_tmpz00_7606;
{ /* Ieee/string.scm 339 */
long BgL_l2973z00_4948;
BgL_l2973z00_4948 = 
STRING_LENGTH(BgL_stringz00_88); 
if(
BOUND_CHECK(BgL_iz00_1138, BgL_l2973z00_4948))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_7606 = 
STRING_REF(BgL_stringz00_88, BgL_iz00_1138)
; }  else 
{ 
obj_t BgL_auxz00_7611;
BgL_auxz00_7611 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_88, 
(int)(BgL_l2973z00_4948), 
(int)(BgL_iz00_1138)); 
FAILURE(BgL_auxz00_7611,BFALSE,BFALSE);} } 
BgL_arg1350z00_1141 = 
toupper(BgL_tmpz00_7606); } 
{ /* Ieee/string.scm 345 */
long BgL_l2977z00_4952;
BgL_l2977z00_4952 = 
STRING_LENGTH(BgL_resz00_1136); 
if(
BOUND_CHECK(BgL_iz00_1138, BgL_l2977z00_4952))
{ /* Ieee/string.scm 345 */
STRING_SET(BgL_resz00_1136, BgL_iz00_1138, BgL_arg1350z00_1141); }  else 
{ 
obj_t BgL_auxz00_7622;
BgL_auxz00_7622 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_resz00_1136, 
(int)(BgL_l2977z00_4952), 
(int)(BgL_iz00_1138)); 
FAILURE(BgL_auxz00_7622,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_7628;
BgL_iz00_7628 = 
(BgL_iz00_1138+((long)1)); 
BgL_iz00_1138 = BgL_iz00_7628; 
goto BgL_zc3z04anonymousza31348ze3z87_1139;} } } } } } } 

}



/* &string-upcase */
obj_t BGl_z62stringzd2upcasezb0zz__r4_strings_6_7z00(obj_t BgL_envz00_4832, obj_t BgL_stringz00_4833)
{
{ /* Ieee/string.scm 627 */
{ /* Ieee/string.scm 628 */
obj_t BgL_auxz00_7630;
if(
STRINGP(BgL_stringz00_4833))
{ /* Ieee/string.scm 628 */
BgL_auxz00_7630 = BgL_stringz00_4833
; }  else 
{ 
obj_t BgL_auxz00_7633;
BgL_auxz00_7633 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)28975)), BGl_string4342z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4833); 
FAILURE(BgL_auxz00_7633,BFALSE,BFALSE);} 
return 
BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(BgL_auxz00_7630);} } 

}



/* string-downcase */
BGL_EXPORTED_DEF obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_89)
{
{ /* Ieee/string.scm 640 */
{ /* Ieee/string.scm 641 */
long BgL_lenz00_1145;
BgL_lenz00_1145 = 
STRING_LENGTH(BgL_stringz00_89); 
{ /* Ieee/string.scm 641 */
obj_t BgL_resz00_1146;
BgL_resz00_1146 = 
make_string_sans_fill(BgL_lenz00_1145); 
{ /* Ieee/string.scm 642 */

{ 
long BgL_iz00_1148;
BgL_iz00_1148 = ((long)0); 
BgL_zc3z04anonymousza31353ze3z87_1149:
if(
(BgL_iz00_1148==BgL_lenz00_1145))
{ /* Ieee/string.scm 644 */
return BgL_resz00_1146;}  else 
{ /* Ieee/string.scm 644 */
{ /* Ieee/string.scm 647 */
unsigned char BgL_arg1355z00_1151;
{ /* Ieee/string.scm 647 */
unsigned char BgL_tmpz00_7642;
{ /* Ieee/string.scm 339 */
long BgL_l2981z00_4956;
BgL_l2981z00_4956 = 
STRING_LENGTH(BgL_stringz00_89); 
if(
BOUND_CHECK(BgL_iz00_1148, BgL_l2981z00_4956))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_7642 = 
STRING_REF(BgL_stringz00_89, BgL_iz00_1148)
; }  else 
{ 
obj_t BgL_auxz00_7647;
BgL_auxz00_7647 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_89, 
(int)(BgL_l2981z00_4956), 
(int)(BgL_iz00_1148)); 
FAILURE(BgL_auxz00_7647,BFALSE,BFALSE);} } 
BgL_arg1355z00_1151 = 
tolower(BgL_tmpz00_7642); } 
{ /* Ieee/string.scm 345 */
long BgL_l2985z00_4960;
BgL_l2985z00_4960 = 
STRING_LENGTH(BgL_resz00_1146); 
if(
BOUND_CHECK(BgL_iz00_1148, BgL_l2985z00_4960))
{ /* Ieee/string.scm 345 */
STRING_SET(BgL_resz00_1146, BgL_iz00_1148, BgL_arg1355z00_1151); }  else 
{ 
obj_t BgL_auxz00_7658;
BgL_auxz00_7658 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_resz00_1146, 
(int)(BgL_l2985z00_4960), 
(int)(BgL_iz00_1148)); 
FAILURE(BgL_auxz00_7658,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_7664;
BgL_iz00_7664 = 
(BgL_iz00_1148+((long)1)); 
BgL_iz00_1148 = BgL_iz00_7664; 
goto BgL_zc3z04anonymousza31353ze3z87_1149;} } } } } } } 

}



/* &string-downcase */
obj_t BGl_z62stringzd2downcasezb0zz__r4_strings_6_7z00(obj_t BgL_envz00_4834, obj_t BgL_stringz00_4835)
{
{ /* Ieee/string.scm 640 */
{ /* Ieee/string.scm 641 */
obj_t BgL_auxz00_7666;
if(
STRINGP(BgL_stringz00_4835))
{ /* Ieee/string.scm 641 */
BgL_auxz00_7666 = BgL_stringz00_4835
; }  else 
{ 
obj_t BgL_auxz00_7669;
BgL_auxz00_7669 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)29460)), BGl_string4343z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4835); 
FAILURE(BgL_auxz00_7669,BFALSE,BFALSE);} 
return 
BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(BgL_auxz00_7666);} } 

}



/* string-upcase! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2upcasez12zc0zz__r4_strings_6_7z00(obj_t BgL_stringz00_90)
{
{ /* Ieee/string.scm 653 */
{ /* Ieee/string.scm 654 */
long BgL_lenz00_1155;
BgL_lenz00_1155 = 
STRING_LENGTH(BgL_stringz00_90); 
{ 
long BgL_iz00_1157;
BgL_iz00_1157 = ((long)0); 
BgL_zc3z04anonymousza31358ze3z87_1158:
if(
(BgL_iz00_1157==BgL_lenz00_1155))
{ /* Ieee/string.scm 656 */
return BgL_stringz00_90;}  else 
{ /* Ieee/string.scm 656 */
{ /* Ieee/string.scm 659 */
unsigned char BgL_arg1360z00_1160;
{ /* Ieee/string.scm 659 */
unsigned char BgL_tmpz00_7677;
{ /* Ieee/string.scm 339 */
long BgL_l2989z00_4964;
BgL_l2989z00_4964 = 
STRING_LENGTH(BgL_stringz00_90); 
if(
BOUND_CHECK(BgL_iz00_1157, BgL_l2989z00_4964))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_7677 = 
STRING_REF(BgL_stringz00_90, BgL_iz00_1157)
; }  else 
{ 
obj_t BgL_auxz00_7682;
BgL_auxz00_7682 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_90, 
(int)(BgL_l2989z00_4964), 
(int)(BgL_iz00_1157)); 
FAILURE(BgL_auxz00_7682,BFALSE,BFALSE);} } 
BgL_arg1360z00_1160 = 
toupper(BgL_tmpz00_7677); } 
{ /* Ieee/string.scm 345 */
long BgL_l2993z00_4968;
BgL_l2993z00_4968 = 
STRING_LENGTH(BgL_stringz00_90); 
if(
BOUND_CHECK(BgL_iz00_1157, BgL_l2993z00_4968))
{ /* Ieee/string.scm 345 */
STRING_SET(BgL_stringz00_90, BgL_iz00_1157, BgL_arg1360z00_1160); }  else 
{ 
obj_t BgL_auxz00_7693;
BgL_auxz00_7693 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_stringz00_90, 
(int)(BgL_l2993z00_4968), 
(int)(BgL_iz00_1157)); 
FAILURE(BgL_auxz00_7693,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_7699;
BgL_iz00_7699 = 
(BgL_iz00_1157+((long)1)); 
BgL_iz00_1157 = BgL_iz00_7699; 
goto BgL_zc3z04anonymousza31358ze3z87_1158;} } } } } 

}



/* &string-upcase! */
obj_t BGl_z62stringzd2upcasez12za2zz__r4_strings_6_7z00(obj_t BgL_envz00_4836, obj_t BgL_stringz00_4837)
{
{ /* Ieee/string.scm 653 */
{ /* Ieee/string.scm 654 */
obj_t BgL_auxz00_7701;
if(
STRINGP(BgL_stringz00_4837))
{ /* Ieee/string.scm 654 */
BgL_auxz00_7701 = BgL_stringz00_4837
; }  else 
{ 
obj_t BgL_auxz00_7704;
BgL_auxz00_7704 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)29946)), BGl_string4344z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4837); 
FAILURE(BgL_auxz00_7704,BFALSE,BFALSE);} 
return 
BGl_stringzd2upcasez12zc0zz__r4_strings_6_7z00(BgL_auxz00_7701);} } 

}



/* string-downcase! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2downcasez12zc0zz__r4_strings_6_7z00(obj_t BgL_stringz00_91)
{
{ /* Ieee/string.scm 665 */
{ /* Ieee/string.scm 666 */
long BgL_lenz00_1164;
BgL_lenz00_1164 = 
STRING_LENGTH(BgL_stringz00_91); 
{ 
long BgL_iz00_1166;
BgL_iz00_1166 = ((long)0); 
BgL_zc3z04anonymousza31363ze3z87_1167:
if(
(BgL_iz00_1166==BgL_lenz00_1164))
{ /* Ieee/string.scm 668 */
return BgL_stringz00_91;}  else 
{ /* Ieee/string.scm 668 */
{ /* Ieee/string.scm 671 */
unsigned char BgL_arg1365z00_1169;
{ /* Ieee/string.scm 671 */
unsigned char BgL_tmpz00_7712;
{ /* Ieee/string.scm 339 */
long BgL_l2997z00_4972;
BgL_l2997z00_4972 = 
STRING_LENGTH(BgL_stringz00_91); 
if(
BOUND_CHECK(BgL_iz00_1166, BgL_l2997z00_4972))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_7712 = 
STRING_REF(BgL_stringz00_91, BgL_iz00_1166)
; }  else 
{ 
obj_t BgL_auxz00_7717;
BgL_auxz00_7717 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_91, 
(int)(BgL_l2997z00_4972), 
(int)(BgL_iz00_1166)); 
FAILURE(BgL_auxz00_7717,BFALSE,BFALSE);} } 
BgL_arg1365z00_1169 = 
tolower(BgL_tmpz00_7712); } 
{ /* Ieee/string.scm 345 */
long BgL_l3001z00_4976;
BgL_l3001z00_4976 = 
STRING_LENGTH(BgL_stringz00_91); 
if(
BOUND_CHECK(BgL_iz00_1166, BgL_l3001z00_4976))
{ /* Ieee/string.scm 345 */
STRING_SET(BgL_stringz00_91, BgL_iz00_1166, BgL_arg1365z00_1169); }  else 
{ 
obj_t BgL_auxz00_7728;
BgL_auxz00_7728 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_stringz00_91, 
(int)(BgL_l3001z00_4976), 
(int)(BgL_iz00_1166)); 
FAILURE(BgL_auxz00_7728,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_7734;
BgL_iz00_7734 = 
(BgL_iz00_1166+((long)1)); 
BgL_iz00_1166 = BgL_iz00_7734; 
goto BgL_zc3z04anonymousza31363ze3z87_1167;} } } } } 

}



/* &string-downcase! */
obj_t BGl_z62stringzd2downcasez12za2zz__r4_strings_6_7z00(obj_t BgL_envz00_4838, obj_t BgL_stringz00_4839)
{
{ /* Ieee/string.scm 665 */
{ /* Ieee/string.scm 666 */
obj_t BgL_auxz00_7736;
if(
STRINGP(BgL_stringz00_4839))
{ /* Ieee/string.scm 666 */
BgL_auxz00_7736 = BgL_stringz00_4839
; }  else 
{ 
obj_t BgL_auxz00_7739;
BgL_auxz00_7739 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)30401)), BGl_string4345z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4839); 
FAILURE(BgL_auxz00_7739,BFALSE,BFALSE);} 
return 
BGl_stringzd2downcasez12zc0zz__r4_strings_6_7z00(BgL_auxz00_7736);} } 

}



/* string-capitalize! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(obj_t BgL_stringz00_92)
{
{ /* Ieee/string.scm 681 */
{ /* Ieee/string.scm 682 */
bool_t BgL_nonzd2firstzd2alphaz00_1173;long BgL_stringzd2lenzd2_1174;
BgL_nonzd2firstzd2alphaz00_1173 = ((bool_t)0); 
BgL_stringzd2lenzd2_1174 = 
STRING_LENGTH(BgL_stringz00_92); 
{ 
long BgL_iz00_1176;
BgL_iz00_1176 = ((long)0); 
BgL_zc3z04anonymousza31369ze3z87_1177:
if(
(BgL_iz00_1176==BgL_stringzd2lenzd2_1174))
{ /* Ieee/string.scm 684 */
return BgL_stringz00_92;}  else 
{ /* Ieee/string.scm 684 */
{ /* Ieee/string.scm 686 */
unsigned char BgL_cz00_1179;
{ /* Ieee/string.scm 339 */
long BgL_l3005z00_4980;
BgL_l3005z00_4980 = 
STRING_LENGTH(BgL_stringz00_92); 
if(
BOUND_CHECK(BgL_iz00_1176, BgL_l3005z00_4980))
{ /* Ieee/string.scm 339 */
BgL_cz00_1179 = 
STRING_REF(BgL_stringz00_92, BgL_iz00_1176); }  else 
{ 
obj_t BgL_auxz00_7751;
BgL_auxz00_7751 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_92, 
(int)(BgL_l3005z00_4980), 
(int)(BgL_iz00_1176)); 
FAILURE(BgL_auxz00_7751,BFALSE,BFALSE);} } 
{ /* Ieee/string.scm 687 */
bool_t BgL_test4882z00_7757;
{ /* Ieee/string.scm 687 */
bool_t BgL_test4883z00_7758;
{ /* Ieee/string.scm 687 */
bool_t BgL_res2327z00_3015;
BgL_res2327z00_3015 = 
isalpha(BgL_cz00_1179); 
BgL_test4883z00_7758 = BgL_res2327z00_3015; } 
if(BgL_test4883z00_7758)
{ /* Ieee/string.scm 687 */
BgL_test4882z00_7757 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 687 */
BgL_test4882z00_7757 = 
(
(BgL_cz00_1179)>((long)127))
; } } 
if(BgL_test4882z00_7757)
{ /* Ieee/string.scm 687 */
if(BgL_nonzd2firstzd2alphaz00_1173)
{ /* Ieee/string.scm 689 */
unsigned char BgL_arg1374z00_1183;
BgL_arg1374z00_1183 = 
tolower(BgL_cz00_1179); 
{ /* Ieee/string.scm 345 */
long BgL_l3009z00_4984;
BgL_l3009z00_4984 = 
STRING_LENGTH(BgL_stringz00_92); 
if(
BOUND_CHECK(BgL_iz00_1176, BgL_l3009z00_4984))
{ /* Ieee/string.scm 345 */
STRING_SET(BgL_stringz00_92, BgL_iz00_1176, BgL_arg1374z00_1183); }  else 
{ 
obj_t BgL_auxz00_7768;
BgL_auxz00_7768 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_stringz00_92, 
(int)(BgL_l3009z00_4984), 
(int)(BgL_iz00_1176)); 
FAILURE(BgL_auxz00_7768,BFALSE,BFALSE);} } }  else 
{ /* Ieee/string.scm 688 */
BgL_nonzd2firstzd2alphaz00_1173 = ((bool_t)1); 
{ /* Ieee/string.scm 692 */
unsigned char BgL_arg1375z00_1184;
BgL_arg1375z00_1184 = 
toupper(BgL_cz00_1179); 
{ /* Ieee/string.scm 345 */
long BgL_l3013z00_4988;
BgL_l3013z00_4988 = 
STRING_LENGTH(BgL_stringz00_92); 
if(
BOUND_CHECK(BgL_iz00_1176, BgL_l3013z00_4988))
{ /* Ieee/string.scm 345 */
STRING_SET(BgL_stringz00_92, BgL_iz00_1176, BgL_arg1375z00_1184); }  else 
{ 
obj_t BgL_auxz00_7779;
BgL_auxz00_7779 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_stringz00_92, 
(int)(BgL_l3013z00_4988), 
(int)(BgL_iz00_1176)); 
FAILURE(BgL_auxz00_7779,BFALSE,BFALSE);} } } } }  else 
{ /* Ieee/string.scm 687 */
BgL_nonzd2firstzd2alphaz00_1173 = ((bool_t)0); } } } 
{ 
long BgL_iz00_7785;
BgL_iz00_7785 = 
(BgL_iz00_1176+((long)1)); 
BgL_iz00_1176 = BgL_iz00_7785; 
goto BgL_zc3z04anonymousza31369ze3z87_1177;} } } } } 

}



/* &string-capitalize! */
obj_t BGl_z62stringzd2capitaliza7ez12z05zz__r4_strings_6_7z00(obj_t BgL_envz00_4840, obj_t BgL_stringz00_4841)
{
{ /* Ieee/string.scm 681 */
{ /* Ieee/string.scm 682 */
obj_t BgL_auxz00_7787;
if(
STRINGP(BgL_stringz00_4841))
{ /* Ieee/string.scm 682 */
BgL_auxz00_7787 = BgL_stringz00_4841
; }  else 
{ 
obj_t BgL_auxz00_7790;
BgL_auxz00_7790 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)31156)), BGl_string4346z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4841); 
FAILURE(BgL_auxz00_7790,BFALSE,BFALSE);} 
return 
BGl_stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(BgL_auxz00_7787);} } 

}



/* string-capitalize */
BGL_EXPORTED_DEF obj_t BGl_stringzd2capitaliza7ez75zz__r4_strings_6_7z00(obj_t BgL_stringz00_93)
{
{ /* Ieee/string.scm 698 */
return 
BGl_stringzd2capitaliza7ez12z67zz__r4_strings_6_7z00(
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_stringz00_93));} 

}



/* &string-capitalize */
obj_t BGl_z62stringzd2capitaliza7ez17zz__r4_strings_6_7z00(obj_t BgL_envz00_4842, obj_t BgL_stringz00_4843)
{
{ /* Ieee/string.scm 698 */
{ /* Ieee/string.scm 699 */
obj_t BgL_auxz00_7797;
if(
STRINGP(BgL_stringz00_4843))
{ /* Ieee/string.scm 699 */
BgL_auxz00_7797 = BgL_stringz00_4843
; }  else 
{ 
obj_t BgL_auxz00_7800;
BgL_auxz00_7800 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)31880)), BGl_string4347z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4843); 
FAILURE(BgL_auxz00_7800,BFALSE,BFALSE);} 
return 
BGl_stringzd2capitaliza7ez75zz__r4_strings_6_7z00(BgL_auxz00_7797);} } 

}



/* string-for-read */
BGL_EXPORTED_DEF obj_t BGl_stringzd2forzd2readz00zz__r4_strings_6_7z00(obj_t BgL_stringz00_94)
{
{ /* Ieee/string.scm 704 */
return 
string_for_read(BgL_stringz00_94);} 

}



/* &string-for-read */
obj_t BGl_z62stringzd2forzd2readz62zz__r4_strings_6_7z00(obj_t BgL_envz00_4844, obj_t BgL_stringz00_4845)
{
{ /* Ieee/string.scm 704 */
{ /* Ieee/string.scm 705 */
obj_t BgL_auxz00_7806;
if(
STRINGP(BgL_stringz00_4845))
{ /* Ieee/string.scm 705 */
BgL_auxz00_7806 = BgL_stringz00_4845
; }  else 
{ 
obj_t BgL_auxz00_7809;
BgL_auxz00_7809 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)32169)), BGl_string4348z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4845); 
FAILURE(BgL_auxz00_7809,BFALSE,BFALSE);} 
return 
BGl_stringzd2forzd2readz00zz__r4_strings_6_7z00(BgL_auxz00_7806);} } 

}



/* escape-C-string */
BGL_EXPORTED_DEF obj_t BGl_escapezd2Czd2stringz00zz__r4_strings_6_7z00(obj_t BgL_strz00_95)
{
{ /* Ieee/string.scm 712 */
{ /* Ieee/string.scm 713 */
obj_t BgL_arg1379z00_6306;
{ /* Ieee/string.scm 190 */
long BgL_endz00_6307;
BgL_endz00_6307 = 
STRING_LENGTH(BgL_strz00_95); 
{ /* Ieee/string.scm 190 */

BgL_arg1379z00_6306 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_95, ((long)1), BgL_endz00_6307); } } 
return 
bgl_escape_C_string(
BSTRING_TO_STRING(BgL_arg1379z00_6306), ((long)0), 
STRING_LENGTH(BgL_arg1379z00_6306));} } 

}



/* &escape-C-string */
obj_t BGl_z62escapezd2Czd2stringz62zz__r4_strings_6_7z00(obj_t BgL_envz00_4846, obj_t BgL_strz00_4847)
{
{ /* Ieee/string.scm 712 */
{ /* Ieee/string.scm 713 */
obj_t BgL_auxz00_7819;
if(
STRINGP(BgL_strz00_4847))
{ /* Ieee/string.scm 713 */
BgL_auxz00_7819 = BgL_strz00_4847
; }  else 
{ 
obj_t BgL_auxz00_7822;
BgL_auxz00_7822 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)32623)), BGl_string4349z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_strz00_4847); 
FAILURE(BgL_auxz00_7822,BFALSE,BFALSE);} 
return 
BGl_escapezd2Czd2stringz00zz__r4_strings_6_7z00(BgL_auxz00_7819);} } 

}



/* escape-scheme-string */
BGL_EXPORTED_DEF obj_t BGl_escapezd2schemezd2stringz00zz__r4_strings_6_7z00(obj_t BgL_strz00_96)
{
{ /* Ieee/string.scm 720 */
return 
bgl_escape_scheme_string(
BSTRING_TO_STRING(BgL_strz00_96), ((long)0), 
STRING_LENGTH(BgL_strz00_96));} 

}



/* &escape-scheme-string */
obj_t BGl_z62escapezd2schemezd2stringz62zz__r4_strings_6_7z00(obj_t BgL_envz00_4848, obj_t BgL_strz00_4849)
{
{ /* Ieee/string.scm 720 */
{ /* Ieee/string.scm 721 */
obj_t BgL_auxz00_7830;
if(
STRINGP(BgL_strz00_4849))
{ /* Ieee/string.scm 721 */
BgL_auxz00_7830 = BgL_strz00_4849
; }  else 
{ 
obj_t BgL_auxz00_7833;
BgL_auxz00_7833 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)33088)), BGl_string4350z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_strz00_4849); 
FAILURE(BgL_auxz00_7833,BFALSE,BFALSE);} 
return 
BGl_escapezd2schemezd2stringz00zz__r4_strings_6_7z00(BgL_auxz00_7830);} } 

}



/* string-as-read */
BGL_EXPORTED_DEF obj_t BGl_stringzd2aszd2readz00zz__r4_strings_6_7z00(obj_t BgL_strz00_97)
{
{ /* Ieee/string.scm 726 */
return 
bgl_escape_C_string(
BSTRING_TO_STRING(BgL_strz00_97), ((long)0), 
STRING_LENGTH(BgL_strz00_97));} 

}



/* &string-as-read */
obj_t BGl_z62stringzd2aszd2readz62zz__r4_strings_6_7z00(obj_t BgL_envz00_4850, obj_t BgL_strz00_4851)
{
{ /* Ieee/string.scm 726 */
{ /* Ieee/string.scm 727 */
obj_t BgL_auxz00_7841;
if(
STRINGP(BgL_strz00_4851))
{ /* Ieee/string.scm 727 */
BgL_auxz00_7841 = BgL_strz00_4851
; }  else 
{ 
obj_t BgL_auxz00_7844;
BgL_auxz00_7844 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)33396)), BGl_string4351z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_strz00_4851); 
FAILURE(BgL_auxz00_7844,BFALSE,BFALSE);} 
return 
BGl_stringzd2aszd2readz00zz__r4_strings_6_7z00(BgL_auxz00_7841);} } 

}



/* blit-string-ur! */
BGL_EXPORTED_DEF obj_t BGl_blitzd2stringzd2urz12z12zz__r4_strings_6_7z00(obj_t BgL_s1z00_98, long BgL_o1z00_99, obj_t BgL_s2z00_100, long BgL_o2z00_101, long BgL_lz00_102)
{
{ /* Ieee/string.scm 732 */
return 
blit_string(BgL_s1z00_98, BgL_o1z00_99, BgL_s2z00_100, BgL_o2z00_101, BgL_lz00_102);} 

}



/* &blit-string-ur! */
obj_t BGl_z62blitzd2stringzd2urz12z70zz__r4_strings_6_7z00(obj_t BgL_envz00_4852, obj_t BgL_s1z00_4853, obj_t BgL_o1z00_4854, obj_t BgL_s2z00_4855, obj_t BgL_o2z00_4856, obj_t BgL_lz00_4857)
{
{ /* Ieee/string.scm 732 */
{ /* Ieee/string.scm 733 */
long BgL_auxz00_7882;long BgL_auxz00_7873;obj_t BgL_auxz00_7866;long BgL_auxz00_7857;obj_t BgL_auxz00_7850;
{ /* Ieee/string.scm 733 */
obj_t BgL_tmpz00_7883;
if(
INTEGERP(BgL_lz00_4857))
{ /* Ieee/string.scm 733 */
BgL_tmpz00_7883 = BgL_lz00_4857
; }  else 
{ 
obj_t BgL_auxz00_7886;
BgL_auxz00_7886 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)33691)), BGl_string4352z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_lz00_4857); 
FAILURE(BgL_auxz00_7886,BFALSE,BFALSE);} 
BgL_auxz00_7882 = 
(long)CINT(BgL_tmpz00_7883); } 
{ /* Ieee/string.scm 733 */
obj_t BgL_tmpz00_7874;
if(
INTEGERP(BgL_o2z00_4856))
{ /* Ieee/string.scm 733 */
BgL_tmpz00_7874 = BgL_o2z00_4856
; }  else 
{ 
obj_t BgL_auxz00_7877;
BgL_auxz00_7877 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)33691)), BGl_string4352z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_o2z00_4856); 
FAILURE(BgL_auxz00_7877,BFALSE,BFALSE);} 
BgL_auxz00_7873 = 
(long)CINT(BgL_tmpz00_7874); } 
if(
STRINGP(BgL_s2z00_4855))
{ /* Ieee/string.scm 733 */
BgL_auxz00_7866 = BgL_s2z00_4855
; }  else 
{ 
obj_t BgL_auxz00_7869;
BgL_auxz00_7869 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)33691)), BGl_string4352z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_4855); 
FAILURE(BgL_auxz00_7869,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 733 */
obj_t BgL_tmpz00_7858;
if(
INTEGERP(BgL_o1z00_4854))
{ /* Ieee/string.scm 733 */
BgL_tmpz00_7858 = BgL_o1z00_4854
; }  else 
{ 
obj_t BgL_auxz00_7861;
BgL_auxz00_7861 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)33691)), BGl_string4352z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_o1z00_4854); 
FAILURE(BgL_auxz00_7861,BFALSE,BFALSE);} 
BgL_auxz00_7857 = 
(long)CINT(BgL_tmpz00_7858); } 
if(
STRINGP(BgL_s1z00_4853))
{ /* Ieee/string.scm 733 */
BgL_auxz00_7850 = BgL_s1z00_4853
; }  else 
{ 
obj_t BgL_auxz00_7853;
BgL_auxz00_7853 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)33691)), BGl_string4352z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_4853); 
FAILURE(BgL_auxz00_7853,BFALSE,BFALSE);} 
return 
BGl_blitzd2stringzd2urz12z12zz__r4_strings_6_7z00(BgL_auxz00_7850, BgL_auxz00_7857, BgL_auxz00_7866, BgL_auxz00_7873, BgL_auxz00_7882);} } 

}



/* blit-string! */
BGL_EXPORTED_DEF obj_t BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t BgL_s1z00_103, long BgL_o1z00_104, obj_t BgL_s2z00_105, long BgL_o2z00_106, long BgL_lz00_107)
{
{ /* Ieee/string.scm 738 */
{ /* Ieee/string.scm 739 */
bool_t BgL_test4898z00_7892;
{ /* Ieee/string.scm 739 */
bool_t BgL_test4899z00_7893;
{ /* Ieee/string.scm 739 */
long BgL_auxz00_7896;long BgL_tmpz00_7894;
BgL_auxz00_7896 = 
(
STRING_LENGTH(BgL_s1z00_103)+((long)1)); 
BgL_tmpz00_7894 = 
(BgL_lz00_107+BgL_o1z00_104); 
BgL_test4899z00_7893 = 
BOUND_CHECK(BgL_tmpz00_7894, BgL_auxz00_7896); } 
if(BgL_test4899z00_7893)
{ /* Ieee/string.scm 740 */
long BgL_auxz00_7902;long BgL_tmpz00_7900;
BgL_auxz00_7902 = 
(
STRING_LENGTH(BgL_s2z00_105)+((long)1)); 
BgL_tmpz00_7900 = 
(BgL_lz00_107+BgL_o2z00_106); 
BgL_test4898z00_7892 = 
BOUND_CHECK(BgL_tmpz00_7900, BgL_auxz00_7902); }  else 
{ /* Ieee/string.scm 739 */
BgL_test4898z00_7892 = ((bool_t)0)
; } } 
if(BgL_test4898z00_7892)
{ /* Ieee/string.scm 739 */
return 
blit_string(BgL_s1z00_103, BgL_o1z00_104, BgL_s2z00_105, BgL_o2z00_106, BgL_lz00_107);}  else 
{ /* Ieee/string.scm 743 */
obj_t BgL_arg1393z00_1207;obj_t BgL_arg1394z00_1208;
{ /* Ieee/string.scm 743 */
obj_t BgL_list1395z00_1209;
{ /* Ieee/string.scm 743 */
obj_t BgL_arg1396z00_1210;
{ /* Ieee/string.scm 743 */
obj_t BgL_arg1397z00_1211;
{ /* Ieee/string.scm 743 */
obj_t BgL_arg1398z00_1212;
{ /* Ieee/string.scm 743 */
obj_t BgL_arg1399z00_1213;
BgL_arg1399z00_1213 = 
MAKE_YOUNG_PAIR(BGl_string4353z00zz__r4_strings_6_7z00, BNIL); 
BgL_arg1398z00_1212 = 
MAKE_YOUNG_PAIR(BgL_s2z00_105, BgL_arg1399z00_1213); } 
BgL_arg1397z00_1211 = 
MAKE_YOUNG_PAIR(BGl_string4354z00zz__r4_strings_6_7z00, BgL_arg1398z00_1212); } 
BgL_arg1396z00_1210 = 
MAKE_YOUNG_PAIR(BgL_s1z00_103, BgL_arg1397z00_1211); } 
BgL_list1395z00_1209 = 
MAKE_YOUNG_PAIR(BGl_string4355z00zz__r4_strings_6_7z00, BgL_arg1396z00_1210); } 
BgL_arg1393z00_1207 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1395z00_1209); } 
{ /* Ieee/string.scm 744 */
long BgL_arg1400z00_1214;long BgL_arg1401z00_1215;
BgL_arg1400z00_1214 = 
STRING_LENGTH(BgL_s1z00_103); 
BgL_arg1401z00_1215 = 
STRING_LENGTH(BgL_s2z00_105); 
{ /* Ieee/string.scm 744 */
obj_t BgL_list1402z00_1216;
{ /* Ieee/string.scm 744 */
obj_t BgL_arg1404z00_1217;
{ /* Ieee/string.scm 744 */
obj_t BgL_arg1405z00_1218;
{ /* Ieee/string.scm 744 */
obj_t BgL_arg1406z00_1219;
{ /* Ieee/string.scm 744 */
obj_t BgL_arg1407z00_1220;
BgL_arg1407z00_1220 = 
MAKE_YOUNG_PAIR(
BINT(BgL_lz00_107), BNIL); 
BgL_arg1406z00_1219 = 
MAKE_YOUNG_PAIR(
BINT(BgL_o2z00_106), BgL_arg1407z00_1220); } 
BgL_arg1405z00_1218 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg1401z00_1215), BgL_arg1406z00_1219); } 
BgL_arg1404z00_1217 = 
MAKE_YOUNG_PAIR(
BINT(BgL_o1z00_104), BgL_arg1405z00_1218); } 
BgL_list1402z00_1216 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg1400z00_1214), BgL_arg1404z00_1217); } 
BgL_arg1394z00_1208 = BgL_list1402z00_1216; } } 
return 
BGl_errorz00zz__errorz00(BGl_string4356z00zz__r4_strings_6_7z00, BgL_arg1393z00_1207, BgL_arg1394z00_1208);} } } 

}



/* &blit-string! */
obj_t BGl_z62blitzd2stringz12za2zz__r4_strings_6_7z00(obj_t BgL_envz00_4858, obj_t BgL_s1z00_4859, obj_t BgL_o1z00_4860, obj_t BgL_s2z00_4861, obj_t BgL_o2z00_4862, obj_t BgL_lz00_4863)
{
{ /* Ieee/string.scm 738 */
{ /* Ieee/string.scm 739 */
long BgL_auxz00_7958;long BgL_auxz00_7949;obj_t BgL_auxz00_7942;long BgL_auxz00_7933;obj_t BgL_auxz00_7926;
{ /* Ieee/string.scm 739 */
obj_t BgL_tmpz00_7959;
if(
INTEGERP(BgL_lz00_4863))
{ /* Ieee/string.scm 739 */
BgL_tmpz00_7959 = BgL_lz00_4863
; }  else 
{ 
obj_t BgL_auxz00_7962;
BgL_auxz00_7962 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)33984)), BGl_string4357z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_lz00_4863); 
FAILURE(BgL_auxz00_7962,BFALSE,BFALSE);} 
BgL_auxz00_7958 = 
(long)CINT(BgL_tmpz00_7959); } 
{ /* Ieee/string.scm 739 */
obj_t BgL_tmpz00_7950;
if(
INTEGERP(BgL_o2z00_4862))
{ /* Ieee/string.scm 739 */
BgL_tmpz00_7950 = BgL_o2z00_4862
; }  else 
{ 
obj_t BgL_auxz00_7953;
BgL_auxz00_7953 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)33984)), BGl_string4357z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_o2z00_4862); 
FAILURE(BgL_auxz00_7953,BFALSE,BFALSE);} 
BgL_auxz00_7949 = 
(long)CINT(BgL_tmpz00_7950); } 
if(
STRINGP(BgL_s2z00_4861))
{ /* Ieee/string.scm 739 */
BgL_auxz00_7942 = BgL_s2z00_4861
; }  else 
{ 
obj_t BgL_auxz00_7945;
BgL_auxz00_7945 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)33984)), BGl_string4357z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_4861); 
FAILURE(BgL_auxz00_7945,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 739 */
obj_t BgL_tmpz00_7934;
if(
INTEGERP(BgL_o1z00_4860))
{ /* Ieee/string.scm 739 */
BgL_tmpz00_7934 = BgL_o1z00_4860
; }  else 
{ 
obj_t BgL_auxz00_7937;
BgL_auxz00_7937 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)33984)), BGl_string4357z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_o1z00_4860); 
FAILURE(BgL_auxz00_7937,BFALSE,BFALSE);} 
BgL_auxz00_7933 = 
(long)CINT(BgL_tmpz00_7934); } 
if(
STRINGP(BgL_s1z00_4859))
{ /* Ieee/string.scm 739 */
BgL_auxz00_7926 = BgL_s1z00_4859
; }  else 
{ 
obj_t BgL_auxz00_7929;
BgL_auxz00_7929 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)33984)), BGl_string4357z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_4859); 
FAILURE(BgL_auxz00_7929,BFALSE,BFALSE);} 
return 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_auxz00_7926, BgL_auxz00_7933, BgL_auxz00_7942, BgL_auxz00_7949, BgL_auxz00_7958);} } 

}



/* string-shrink! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2shrinkz12zc0zz__r4_strings_6_7z00(obj_t BgL_sz00_108, long BgL_lz00_109)
{
{ /* Ieee/string.scm 749 */
return 
bgl_string_shrink(BgL_sz00_108, BgL_lz00_109);} 

}



/* &string-shrink! */
obj_t BGl_z62stringzd2shrinkz12za2zz__r4_strings_6_7z00(obj_t BgL_envz00_4864, obj_t BgL_sz00_4865, obj_t BgL_lz00_4866)
{
{ /* Ieee/string.scm 749 */
{ /* Ieee/string.scm 750 */
long BgL_auxz00_7976;obj_t BgL_auxz00_7969;
{ /* Ieee/string.scm 750 */
obj_t BgL_tmpz00_7977;
if(
INTEGERP(BgL_lz00_4866))
{ /* Ieee/string.scm 750 */
BgL_tmpz00_7977 = BgL_lz00_4866
; }  else 
{ 
obj_t BgL_auxz00_7980;
BgL_auxz00_7980 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)34593)), BGl_string4358z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_lz00_4866); 
FAILURE(BgL_auxz00_7980,BFALSE,BFALSE);} 
BgL_auxz00_7976 = 
(long)CINT(BgL_tmpz00_7977); } 
if(
STRINGP(BgL_sz00_4865))
{ /* Ieee/string.scm 750 */
BgL_auxz00_7969 = BgL_sz00_4865
; }  else 
{ 
obj_t BgL_auxz00_7972;
BgL_auxz00_7972 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)34593)), BGl_string4358z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_sz00_4865); 
FAILURE(BgL_auxz00_7972,BFALSE,BFALSE);} 
return 
BGl_stringzd2shrinkz12zc0zz__r4_strings_6_7z00(BgL_auxz00_7969, BgL_auxz00_7976);} } 

}



/* string-replace */
BGL_EXPORTED_DEF obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t BgL_strz00_110, unsigned char BgL_c1z00_111, unsigned char BgL_c2z00_112)
{
{ /* Ieee/string.scm 755 */
{ /* Ieee/string.scm 756 */
long BgL_lenz00_1228;
BgL_lenz00_1228 = 
STRING_LENGTH(BgL_strz00_110); 
{ /* Ieee/string.scm 756 */
obj_t BgL_newz00_1229;
{ /* Ieee/string.scm 168 */

BgL_newz00_1229 = 
make_string(BgL_lenz00_1228, ((unsigned char)' ')); } 
{ /* Ieee/string.scm 757 */

{ 
long BgL_iz00_1231;
BgL_iz00_1231 = ((long)0); 
BgL_zc3z04anonymousza31415ze3z87_1232:
if(
(BgL_iz00_1231==BgL_lenz00_1228))
{ /* Ieee/string.scm 759 */
return BgL_newz00_1229;}  else 
{ /* Ieee/string.scm 761 */
unsigned char BgL_cz00_1234;
{ /* Ieee/string.scm 339 */
long BgL_l3017z00_4992;
BgL_l3017z00_4992 = 
STRING_LENGTH(BgL_strz00_110); 
if(
BOUND_CHECK(BgL_iz00_1231, BgL_l3017z00_4992))
{ /* Ieee/string.scm 339 */
BgL_cz00_1234 = 
STRING_REF(BgL_strz00_110, BgL_iz00_1231); }  else 
{ 
obj_t BgL_auxz00_7994;
BgL_auxz00_7994 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_strz00_110, 
(int)(BgL_l3017z00_4992), 
(int)(BgL_iz00_1231)); 
FAILURE(BgL_auxz00_7994,BFALSE,BFALSE);} } 
if(
(BgL_cz00_1234==
(unsigned char)(BgL_c1z00_111)))
{ /* Ieee/string.scm 763 */
unsigned char BgL_charz00_3084;
BgL_charz00_3084 = 
(unsigned char)(BgL_c2z00_112); 
{ /* Ieee/string.scm 345 */
long BgL_l3021z00_4996;
BgL_l3021z00_4996 = 
STRING_LENGTH(BgL_newz00_1229); 
if(
BOUND_CHECK(BgL_iz00_1231, BgL_l3021z00_4996))
{ /* Ieee/string.scm 345 */
STRING_SET(BgL_newz00_1229, BgL_iz00_1231, BgL_charz00_3084); }  else 
{ 
obj_t BgL_auxz00_8008;
BgL_auxz00_8008 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_newz00_1229, 
(int)(BgL_l3021z00_4996), 
(int)(BgL_iz00_1231)); 
FAILURE(BgL_auxz00_8008,BFALSE,BFALSE);} } }  else 
{ /* Ieee/string.scm 345 */
long BgL_l3025z00_5000;
BgL_l3025z00_5000 = 
STRING_LENGTH(BgL_newz00_1229); 
if(
BOUND_CHECK(BgL_iz00_1231, BgL_l3025z00_5000))
{ /* Ieee/string.scm 345 */
STRING_SET(BgL_newz00_1229, BgL_iz00_1231, BgL_cz00_1234); }  else 
{ 
obj_t BgL_auxz00_8018;
BgL_auxz00_8018 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_newz00_1229, 
(int)(BgL_l3025z00_5000), 
(int)(BgL_iz00_1231)); 
FAILURE(BgL_auxz00_8018,BFALSE,BFALSE);} } 
{ 
long BgL_iz00_8024;
BgL_iz00_8024 = 
(BgL_iz00_1231+((long)1)); 
BgL_iz00_1231 = BgL_iz00_8024; 
goto BgL_zc3z04anonymousza31415ze3z87_1232;} } } } } } } 

}



/* &string-replace */
obj_t BGl_z62stringzd2replacezb0zz__r4_strings_6_7z00(obj_t BgL_envz00_4867, obj_t BgL_strz00_4868, obj_t BgL_c1z00_4869, obj_t BgL_c2z00_4870)
{
{ /* Ieee/string.scm 755 */
{ /* Ieee/string.scm 756 */
unsigned char BgL_auxz00_8042;unsigned char BgL_auxz00_8033;obj_t BgL_auxz00_8026;
{ /* Ieee/string.scm 756 */
obj_t BgL_tmpz00_8043;
if(
CHARP(BgL_c2z00_4870))
{ /* Ieee/string.scm 756 */
BgL_tmpz00_8043 = BgL_c2z00_4870
; }  else 
{ 
obj_t BgL_auxz00_8046;
BgL_auxz00_8046 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)34877)), BGl_string4359z00zz__r4_strings_6_7z00, BGl_string4289z00zz__r4_strings_6_7z00, BgL_c2z00_4870); 
FAILURE(BgL_auxz00_8046,BFALSE,BFALSE);} 
BgL_auxz00_8042 = 
CCHAR(BgL_tmpz00_8043); } 
{ /* Ieee/string.scm 756 */
obj_t BgL_tmpz00_8034;
if(
CHARP(BgL_c1z00_4869))
{ /* Ieee/string.scm 756 */
BgL_tmpz00_8034 = BgL_c1z00_4869
; }  else 
{ 
obj_t BgL_auxz00_8037;
BgL_auxz00_8037 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)34877)), BGl_string4359z00zz__r4_strings_6_7z00, BGl_string4289z00zz__r4_strings_6_7z00, BgL_c1z00_4869); 
FAILURE(BgL_auxz00_8037,BFALSE,BFALSE);} 
BgL_auxz00_8033 = 
CCHAR(BgL_tmpz00_8034); } 
if(
STRINGP(BgL_strz00_4868))
{ /* Ieee/string.scm 756 */
BgL_auxz00_8026 = BgL_strz00_4868
; }  else 
{ 
obj_t BgL_auxz00_8029;
BgL_auxz00_8029 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)34877)), BGl_string4359z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_strz00_4868); 
FAILURE(BgL_auxz00_8029,BFALSE,BFALSE);} 
return 
BGl_stringzd2replacezd2zz__r4_strings_6_7z00(BgL_auxz00_8026, BgL_auxz00_8033, BgL_auxz00_8042);} } 

}



/* string-replace! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00(obj_t BgL_strz00_113, unsigned char BgL_c1z00_114, unsigned char BgL_c2z00_115)
{
{ /* Ieee/string.scm 770 */
{ /* Ieee/string.scm 771 */
long BgL_lenz00_1240;
BgL_lenz00_1240 = 
STRING_LENGTH(BgL_strz00_113); 
{ 
long BgL_iz00_1242;
BgL_iz00_1242 = ((long)0); 
BgL_zc3z04anonymousza31419ze3z87_1243:
if(
(BgL_iz00_1242==BgL_lenz00_1240))
{ /* Ieee/string.scm 774 */
return BgL_strz00_113;}  else 
{ /* Ieee/string.scm 776 */
bool_t BgL_test4916z00_8055;
{ /* Ieee/string.scm 776 */
unsigned char BgL_char2z00_3099;
BgL_char2z00_3099 = 
(unsigned char)(BgL_c1z00_114); 
{ /* Ieee/string.scm 776 */
unsigned char BgL_tmpz00_8057;
{ /* Ieee/string.scm 339 */
long BgL_l3029z00_5004;
BgL_l3029z00_5004 = 
STRING_LENGTH(BgL_strz00_113); 
if(
BOUND_CHECK(BgL_iz00_1242, BgL_l3029z00_5004))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_8057 = 
STRING_REF(BgL_strz00_113, BgL_iz00_1242)
; }  else 
{ 
obj_t BgL_auxz00_8062;
BgL_auxz00_8062 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_strz00_113, 
(int)(BgL_l3029z00_5004), 
(int)(BgL_iz00_1242)); 
FAILURE(BgL_auxz00_8062,BFALSE,BFALSE);} } 
BgL_test4916z00_8055 = 
(BgL_tmpz00_8057==BgL_char2z00_3099); } } 
if(BgL_test4916z00_8055)
{ /* Ieee/string.scm 776 */
{ /* Ieee/string.scm 777 */
unsigned char BgL_charz00_3103;
BgL_charz00_3103 = 
(unsigned char)(BgL_c2z00_115); 
{ /* Ieee/string.scm 345 */
long BgL_l3033z00_5008;
BgL_l3033z00_5008 = 
STRING_LENGTH(BgL_strz00_113); 
if(
BOUND_CHECK(BgL_iz00_1242, BgL_l3033z00_5008))
{ /* Ieee/string.scm 345 */
STRING_SET(BgL_strz00_113, BgL_iz00_1242, BgL_charz00_3103); }  else 
{ 
obj_t BgL_auxz00_8074;
BgL_auxz00_8074 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_strz00_113, 
(int)(BgL_l3033z00_5008), 
(int)(BgL_iz00_1242)); 
FAILURE(BgL_auxz00_8074,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_8080;
BgL_iz00_8080 = 
(BgL_iz00_1242+((long)1)); 
BgL_iz00_1242 = BgL_iz00_8080; 
goto BgL_zc3z04anonymousza31419ze3z87_1243;} }  else 
{ 
long BgL_iz00_8082;
BgL_iz00_8082 = 
(BgL_iz00_1242+((long)1)); 
BgL_iz00_1242 = BgL_iz00_8082; 
goto BgL_zc3z04anonymousza31419ze3z87_1243;} } } } } 

}



/* &string-replace! */
obj_t BGl_z62stringzd2replacez12za2zz__r4_strings_6_7z00(obj_t BgL_envz00_4871, obj_t BgL_strz00_4872, obj_t BgL_c1z00_4873, obj_t BgL_c2z00_4874)
{
{ /* Ieee/string.scm 770 */
{ /* Ieee/string.scm 771 */
unsigned char BgL_auxz00_8100;unsigned char BgL_auxz00_8091;obj_t BgL_auxz00_8084;
{ /* Ieee/string.scm 771 */
obj_t BgL_tmpz00_8101;
if(
CHARP(BgL_c2z00_4874))
{ /* Ieee/string.scm 771 */
BgL_tmpz00_8101 = BgL_c2z00_4874
; }  else 
{ 
obj_t BgL_auxz00_8104;
BgL_auxz00_8104 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)35399)), BGl_string4360z00zz__r4_strings_6_7z00, BGl_string4289z00zz__r4_strings_6_7z00, BgL_c2z00_4874); 
FAILURE(BgL_auxz00_8104,BFALSE,BFALSE);} 
BgL_auxz00_8100 = 
CCHAR(BgL_tmpz00_8101); } 
{ /* Ieee/string.scm 771 */
obj_t BgL_tmpz00_8092;
if(
CHARP(BgL_c1z00_4873))
{ /* Ieee/string.scm 771 */
BgL_tmpz00_8092 = BgL_c1z00_4873
; }  else 
{ 
obj_t BgL_auxz00_8095;
BgL_auxz00_8095 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)35399)), BGl_string4360z00zz__r4_strings_6_7z00, BGl_string4289z00zz__r4_strings_6_7z00, BgL_c1z00_4873); 
FAILURE(BgL_auxz00_8095,BFALSE,BFALSE);} 
BgL_auxz00_8091 = 
CCHAR(BgL_tmpz00_8092); } 
if(
STRINGP(BgL_strz00_4872))
{ /* Ieee/string.scm 771 */
BgL_auxz00_8084 = BgL_strz00_4872
; }  else 
{ 
obj_t BgL_auxz00_8087;
BgL_auxz00_8087 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)35399)), BGl_string4360z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_strz00_4872); 
FAILURE(BgL_auxz00_8087,BFALSE,BFALSE);} 
return 
BGl_stringzd2replacez12zc0zz__r4_strings_6_7z00(BgL_auxz00_8084, BgL_auxz00_8091, BgL_auxz00_8100);} } 

}



/* _string-delete */
obj_t BGl__stringzd2deletezd2zz__r4_strings_6_7z00(obj_t BgL_env1129z00_121, obj_t BgL_opt1128z00_120)
{
{ /* Ieee/string.scm 785 */
{ /* Ieee/string.scm 785 */
obj_t BgL_stringz00_1251;obj_t BgL_g1130z00_1252;
BgL_stringz00_1251 = 
VECTOR_REF(BgL_opt1128z00_120,((long)0)); 
BgL_g1130z00_1252 = 
VECTOR_REF(BgL_opt1128z00_120,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1128z00_120)) { case ((long)2) : 

{ /* Ieee/string.scm 785 */
long BgL_endz00_1257;
{ /* Ieee/string.scm 785 */
obj_t BgL_stringz00_3108;
if(
STRINGP(BgL_stringz00_1251))
{ /* Ieee/string.scm 785 */
BgL_stringz00_3108 = BgL_stringz00_1251; }  else 
{ 
obj_t BgL_auxz00_8114;
BgL_auxz00_8114 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)35922)), BGl_string4364z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_1251); 
FAILURE(BgL_auxz00_8114,BFALSE,BFALSE);} 
BgL_endz00_1257 = 
STRING_LENGTH(BgL_stringz00_3108); } 
{ /* Ieee/string.scm 785 */

{ /* Ieee/string.scm 785 */
obj_t BgL_auxz00_8119;
if(
STRINGP(BgL_stringz00_1251))
{ /* Ieee/string.scm 785 */
BgL_auxz00_8119 = BgL_stringz00_1251
; }  else 
{ 
obj_t BgL_auxz00_8122;
BgL_auxz00_8122 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)35851)), BGl_string4364z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_1251); 
FAILURE(BgL_auxz00_8122,BFALSE,BFALSE);} 
return 
BGl_stringzd2deletezd2zz__r4_strings_6_7z00(BgL_auxz00_8119, BgL_g1130z00_1252, 
(int)(((long)0)), BgL_endz00_1257);} } } break;case ((long)3) : 

{ /* Ieee/string.scm 785 */
obj_t BgL_startz00_1258;
BgL_startz00_1258 = 
VECTOR_REF(BgL_opt1128z00_120,((long)2)); 
{ /* Ieee/string.scm 785 */
long BgL_endz00_1259;
{ /* Ieee/string.scm 785 */
obj_t BgL_stringz00_3110;
if(
STRINGP(BgL_stringz00_1251))
{ /* Ieee/string.scm 785 */
BgL_stringz00_3110 = BgL_stringz00_1251; }  else 
{ 
obj_t BgL_auxz00_8131;
BgL_auxz00_8131 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)35922)), BGl_string4364z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_1251); 
FAILURE(BgL_auxz00_8131,BFALSE,BFALSE);} 
BgL_endz00_1259 = 
STRING_LENGTH(BgL_stringz00_3110); } 
{ /* Ieee/string.scm 785 */

{ /* Ieee/string.scm 785 */
int BgL_auxz00_8143;obj_t BgL_auxz00_8136;
{ /* Ieee/string.scm 785 */
obj_t BgL_tmpz00_8144;
if(
INTEGERP(BgL_startz00_1258))
{ /* Ieee/string.scm 785 */
BgL_tmpz00_8144 = BgL_startz00_1258
; }  else 
{ 
obj_t BgL_auxz00_8147;
BgL_auxz00_8147 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)35851)), BGl_string4364z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_1258); 
FAILURE(BgL_auxz00_8147,BFALSE,BFALSE);} 
BgL_auxz00_8143 = 
CINT(BgL_tmpz00_8144); } 
if(
STRINGP(BgL_stringz00_1251))
{ /* Ieee/string.scm 785 */
BgL_auxz00_8136 = BgL_stringz00_1251
; }  else 
{ 
obj_t BgL_auxz00_8139;
BgL_auxz00_8139 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)35851)), BGl_string4364z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_1251); 
FAILURE(BgL_auxz00_8139,BFALSE,BFALSE);} 
return 
BGl_stringzd2deletezd2zz__r4_strings_6_7z00(BgL_auxz00_8136, BgL_g1130z00_1252, BgL_auxz00_8143, BgL_endz00_1259);} } } } break;case ((long)4) : 

{ /* Ieee/string.scm 785 */
obj_t BgL_startz00_1260;
BgL_startz00_1260 = 
VECTOR_REF(BgL_opt1128z00_120,((long)2)); 
{ /* Ieee/string.scm 785 */
obj_t BgL_endz00_1261;
BgL_endz00_1261 = 
VECTOR_REF(BgL_opt1128z00_120,((long)3)); 
{ /* Ieee/string.scm 785 */

{ /* Ieee/string.scm 785 */
long BgL_auxz00_8171;int BgL_auxz00_8162;obj_t BgL_auxz00_8155;
{ /* Ieee/string.scm 785 */
obj_t BgL_tmpz00_8172;
if(
INTEGERP(BgL_endz00_1261))
{ /* Ieee/string.scm 785 */
BgL_tmpz00_8172 = BgL_endz00_1261
; }  else 
{ 
obj_t BgL_auxz00_8175;
BgL_auxz00_8175 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)35851)), BGl_string4364z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_endz00_1261); 
FAILURE(BgL_auxz00_8175,BFALSE,BFALSE);} 
BgL_auxz00_8171 = 
(long)CINT(BgL_tmpz00_8172); } 
{ /* Ieee/string.scm 785 */
obj_t BgL_tmpz00_8163;
if(
INTEGERP(BgL_startz00_1260))
{ /* Ieee/string.scm 785 */
BgL_tmpz00_8163 = BgL_startz00_1260
; }  else 
{ 
obj_t BgL_auxz00_8166;
BgL_auxz00_8166 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)35851)), BGl_string4364z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_1260); 
FAILURE(BgL_auxz00_8166,BFALSE,BFALSE);} 
BgL_auxz00_8162 = 
CINT(BgL_tmpz00_8163); } 
if(
STRINGP(BgL_stringz00_1251))
{ /* Ieee/string.scm 785 */
BgL_auxz00_8155 = BgL_stringz00_1251
; }  else 
{ 
obj_t BgL_auxz00_8158;
BgL_auxz00_8158 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)35851)), BGl_string4364z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_1251); 
FAILURE(BgL_auxz00_8158,BFALSE,BFALSE);} 
return 
BGl_stringzd2deletezd2zz__r4_strings_6_7z00(BgL_auxz00_8155, BgL_g1130z00_1252, BgL_auxz00_8162, BgL_auxz00_8171);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4361z00zz__r4_strings_6_7z00, BGl_string4363z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1128z00_120)));} } } } 

}



/* string-delete */
BGL_EXPORTED_DEF obj_t BGl_stringzd2deletezd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_116, obj_t BgL_objz00_117, int BgL_startz00_118, long BgL_endz00_119)
{
{ /* Ieee/string.scm 785 */
{ 
obj_t BgL_newz00_1310;obj_t BgL_predz00_1311;int BgL_startz00_1312;long BgL_endz00_1313;obj_t BgL_newz00_1294;obj_t BgL_lz00_1295;int BgL_startz00_1296;long BgL_endz00_1297;obj_t BgL_newz00_1278;obj_t BgL_cz00_1279;int BgL_startz00_1280;long BgL_endz00_1281;
if(
(
(long)(BgL_startz00_118)<((long)0)))
{ /* Ieee/string.scm 825 */
obj_t BgL_aux3621z00_5597;
BgL_aux3621z00_5597 = 
BGl_errorz00zz__errorz00(BGl_string4362z00zz__r4_strings_6_7z00, BGl_string4373z00zz__r4_strings_6_7z00, 
BINT(BgL_startz00_118)); 
if(
STRINGP(BgL_aux3621z00_5597))
{ /* Ieee/string.scm 825 */
return BgL_aux3621z00_5597;}  else 
{ 
obj_t BgL_auxz00_8193;
BgL_auxz00_8193 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)36916)), BGl_string4362z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_aux3621z00_5597); 
FAILURE(BgL_auxz00_8193,BFALSE,BFALSE);} }  else 
{ /* Ieee/string.scm 824 */
if(
(BgL_endz00_119>
STRING_LENGTH(BgL_stringz00_116)))
{ /* Ieee/string.scm 827 */
obj_t BgL_aux3623z00_5599;
BgL_aux3623z00_5599 = 
BGl_errorz00zz__errorz00(BGl_string4362z00zz__r4_strings_6_7z00, BGl_string4374z00zz__r4_strings_6_7z00, 
BINT(BgL_endz00_119)); 
if(
STRINGP(BgL_aux3623z00_5599))
{ /* Ieee/string.scm 827 */
return BgL_aux3623z00_5599;}  else 
{ 
obj_t BgL_auxz00_8204;
BgL_auxz00_8204 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)37021)), BGl_string4362z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_aux3623z00_5599); 
FAILURE(BgL_auxz00_8204,BFALSE,BFALSE);} }  else 
{ /* Ieee/string.scm 826 */
if(
(BgL_endz00_119<
(long)(BgL_startz00_118)))
{ /* Ieee/string.scm 829 */
obj_t BgL_arg1433z00_1270;
BgL_arg1433z00_1270 = 
MAKE_YOUNG_PAIR(
BINT(BgL_startz00_118), 
BINT(BgL_endz00_119)); 
{ /* Ieee/string.scm 829 */
obj_t BgL_aux3625z00_5601;
BgL_aux3625z00_5601 = 
BGl_errorz00zz__errorz00(BGl_string4362z00zz__r4_strings_6_7z00, BGl_string4375z00zz__r4_strings_6_7z00, BgL_arg1433z00_1270); 
if(
STRINGP(BgL_aux3625z00_5601))
{ /* Ieee/string.scm 829 */
return BgL_aux3625z00_5601;}  else 
{ 
obj_t BgL_auxz00_8217;
BgL_auxz00_8217 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)37105)), BGl_string4362z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_aux3625z00_5601); 
FAILURE(BgL_auxz00_8217,BFALSE,BFALSE);} } }  else 
{ /* Ieee/string.scm 831 */
obj_t BgL_newz00_1272;
BgL_newz00_1272 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_stringz00_116); 
{ /* Ieee/string.scm 832 */

if(
CHARP(BgL_objz00_117))
{ /* Ieee/string.scm 834 */
BgL_newz00_1278 = BgL_newz00_1272; 
BgL_cz00_1279 = BgL_objz00_117; 
BgL_startz00_1280 = BgL_startz00_118; 
BgL_endz00_1281 = BgL_endz00_119; 
{ 
int BgL_iz00_1284;long BgL_jz00_1285;
BgL_iz00_1284 = BgL_startz00_1280; 
BgL_jz00_1285 = ((long)0); 
BgL_zc3z04anonymousza31440ze3z87_1286:
if(
(
(long)(BgL_iz00_1284)==BgL_endz00_1281))
{ /* Ieee/string.scm 790 */
return 
bgl_string_shrink(BgL_newz00_1278, BgL_jz00_1285);}  else 
{ /* Ieee/string.scm 792 */
unsigned char BgL_ccz00_1288;
{ /* Ieee/string.scm 792 */
long BgL_kz00_3118;
BgL_kz00_3118 = 
(long)(BgL_iz00_1284); 
{ /* Ieee/string.scm 327 */
long BgL_l3037z00_5012;
BgL_l3037z00_5012 = 
STRING_LENGTH(BgL_stringz00_116); 
if(
BOUND_CHECK(BgL_kz00_3118, BgL_l3037z00_5012))
{ /* Ieee/string.scm 327 */
BgL_ccz00_1288 = 
STRING_REF(BgL_stringz00_116, BgL_kz00_3118); }  else 
{ 
obj_t BgL_auxz00_8233;
BgL_auxz00_8233 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_116, 
(int)(BgL_l3037z00_5012), 
(int)(BgL_kz00_3118)); 
FAILURE(BgL_auxz00_8233,BFALSE,BFALSE);} } } 
if(
(BgL_ccz00_1288==
CCHAR(BgL_cz00_1279)))
{ /* Ieee/string.scm 794 */
long BgL_arg1443z00_1290;
BgL_arg1443z00_1290 = 
(
(long)(BgL_iz00_1284)+((long)1)); 
{ 
int BgL_iz00_8244;
BgL_iz00_8244 = 
(int)(BgL_arg1443z00_1290); 
BgL_iz00_1284 = BgL_iz00_8244; 
goto BgL_zc3z04anonymousza31440ze3z87_1286;} }  else 
{ /* Ieee/string.scm 793 */
{ /* Ieee/string.scm 333 */
long BgL_l3041z00_5016;
BgL_l3041z00_5016 = 
STRING_LENGTH(BgL_newz00_1278); 
if(
BOUND_CHECK(BgL_jz00_1285, BgL_l3041z00_5016))
{ /* Ieee/string.scm 333 */
STRING_SET(BgL_newz00_1278, BgL_jz00_1285, BgL_ccz00_1288); }  else 
{ 
obj_t BgL_auxz00_8250;
BgL_auxz00_8250 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16409)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_newz00_1278, 
(int)(BgL_l3041z00_5016), 
(int)(BgL_jz00_1285)); 
FAILURE(BgL_auxz00_8250,BFALSE,BFALSE);} } 
{ /* Ieee/string.scm 797 */
long BgL_arg1444z00_1291;long BgL_arg1445z00_1292;
BgL_arg1444z00_1291 = 
(
(long)(BgL_iz00_1284)+((long)1)); 
BgL_arg1445z00_1292 = 
(BgL_jz00_1285+((long)1)); 
{ 
long BgL_jz00_8261;int BgL_iz00_8259;
BgL_iz00_8259 = 
(int)(BgL_arg1444z00_1291); 
BgL_jz00_8261 = BgL_arg1445z00_1292; 
BgL_jz00_1285 = BgL_jz00_8261; 
BgL_iz00_1284 = BgL_iz00_8259; 
goto BgL_zc3z04anonymousza31440ze3z87_1286;} } } } } }  else 
{ /* Ieee/string.scm 834 */
if(
STRINGP(BgL_objz00_117))
{ /* Ieee/string.scm 836 */
BgL_newz00_1294 = BgL_newz00_1272; 
BgL_lz00_1295 = 
BGl_stringzd2ze3listz31zz__r4_strings_6_7z00(BgL_objz00_117); 
BgL_startz00_1296 = BgL_startz00_118; 
BgL_endz00_1297 = BgL_endz00_119; 
{ 
int BgL_iz00_1300;long BgL_jz00_1301;
BgL_iz00_1300 = BgL_startz00_1296; 
BgL_jz00_1301 = ((long)0); 
BgL_zc3z04anonymousza31447ze3z87_1302:
if(
(
(long)(BgL_iz00_1300)==BgL_endz00_1297))
{ /* Ieee/string.scm 802 */
return 
bgl_string_shrink(BgL_newz00_1294, BgL_jz00_1301);}  else 
{ /* Ieee/string.scm 804 */
unsigned char BgL_ccz00_1304;
{ /* Ieee/string.scm 804 */
long BgL_kz00_3138;
BgL_kz00_3138 = 
(long)(BgL_iz00_1300); 
{ /* Ieee/string.scm 327 */
long BgL_l3045z00_5020;
BgL_l3045z00_5020 = 
STRING_LENGTH(BgL_stringz00_116); 
if(
BOUND_CHECK(BgL_kz00_3138, BgL_l3045z00_5020))
{ /* Ieee/string.scm 327 */
BgL_ccz00_1304 = 
STRING_REF(BgL_stringz00_116, BgL_kz00_3138); }  else 
{ 
obj_t BgL_auxz00_8273;
BgL_auxz00_8273 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_116, 
(int)(BgL_l3045z00_5020), 
(int)(BgL_kz00_3138)); 
FAILURE(BgL_auxz00_8273,BFALSE,BFALSE);} } } 
if(
CBOOL(
BGl_memvz00zz__r4_pairs_and_lists_6_3z00(
BCHAR(BgL_ccz00_1304), BgL_lz00_1295)))
{ /* Ieee/string.scm 806 */
long BgL_arg1451z00_1306;
BgL_arg1451z00_1306 = 
(
(long)(BgL_iz00_1300)+((long)1)); 
{ 
int BgL_iz00_8285;
BgL_iz00_8285 = 
(int)(BgL_arg1451z00_1306); 
BgL_iz00_1300 = BgL_iz00_8285; 
goto BgL_zc3z04anonymousza31447ze3z87_1302;} }  else 
{ /* Ieee/string.scm 805 */
{ /* Ieee/string.scm 333 */
long BgL_l3049z00_5024;
BgL_l3049z00_5024 = 
STRING_LENGTH(BgL_newz00_1294); 
if(
BOUND_CHECK(BgL_jz00_1301, BgL_l3049z00_5024))
{ /* Ieee/string.scm 333 */
STRING_SET(BgL_newz00_1294, BgL_jz00_1301, BgL_ccz00_1304); }  else 
{ 
obj_t BgL_auxz00_8291;
BgL_auxz00_8291 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16409)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_newz00_1294, 
(int)(BgL_l3049z00_5024), 
(int)(BgL_jz00_1301)); 
FAILURE(BgL_auxz00_8291,BFALSE,BFALSE);} } 
{ /* Ieee/string.scm 809 */
long BgL_arg1452z00_1307;long BgL_arg1453z00_1308;
BgL_arg1452z00_1307 = 
(
(long)(BgL_iz00_1300)+((long)1)); 
BgL_arg1453z00_1308 = 
(BgL_jz00_1301+((long)1)); 
{ 
long BgL_jz00_8302;int BgL_iz00_8300;
BgL_iz00_8300 = 
(int)(BgL_arg1452z00_1307); 
BgL_jz00_8302 = BgL_arg1453z00_1308; 
BgL_jz00_1301 = BgL_jz00_8302; 
BgL_iz00_1300 = BgL_iz00_8300; 
goto BgL_zc3z04anonymousza31447ze3z87_1302;} } } } } }  else 
{ /* Ieee/string.scm 836 */
if(
PROCEDUREP(BgL_objz00_117))
{ /* Ieee/string.scm 838 */
BgL_newz00_1310 = BgL_newz00_1272; 
BgL_predz00_1311 = BgL_objz00_117; 
BgL_startz00_1312 = BgL_startz00_118; 
BgL_endz00_1313 = BgL_endz00_119; 
{ 
int BgL_iz00_1316;long BgL_jz00_1317;
BgL_iz00_1316 = BgL_startz00_1312; 
BgL_jz00_1317 = ((long)0); 
BgL_zc3z04anonymousza31455ze3z87_1318:
if(
(
(long)(BgL_iz00_1316)==BgL_endz00_1313))
{ /* Ieee/string.scm 814 */
return 
bgl_string_shrink(BgL_newz00_1310, BgL_jz00_1317);}  else 
{ /* Ieee/string.scm 816 */
unsigned char BgL_ccz00_1320;
{ /* Ieee/string.scm 816 */
long BgL_kz00_3155;
BgL_kz00_3155 = 
(long)(BgL_iz00_1316); 
{ /* Ieee/string.scm 327 */
long BgL_l3053z00_5028;
BgL_l3053z00_5028 = 
STRING_LENGTH(BgL_stringz00_116); 
if(
BOUND_CHECK(BgL_kz00_3155, BgL_l3053z00_5028))
{ /* Ieee/string.scm 327 */
BgL_ccz00_1320 = 
STRING_REF(BgL_stringz00_116, BgL_kz00_3155); }  else 
{ 
obj_t BgL_auxz00_8315;
BgL_auxz00_8315 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_116, 
(int)(BgL_l3053z00_5028), 
(int)(BgL_kz00_3155)); 
FAILURE(BgL_auxz00_8315,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 817 */
bool_t BgL_test4949z00_8321;
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_1311, ((long)1)))
{ /* Ieee/string.scm 817 */
BgL_test4949z00_8321 = 
CBOOL(
PROCEDURE_ENTRY(BgL_predz00_1311)(BgL_predz00_1311, 
BCHAR(BgL_ccz00_1320), BEOA))
; }  else 
{ /* Ieee/string.scm 817 */
FAILURE(BGl_string4365z00zz__r4_strings_6_7z00,BGl_list4366z00zz__r4_strings_6_7z00,BgL_predz00_1311);} 
if(BgL_test4949z00_8321)
{ /* Ieee/string.scm 818 */
long BgL_arg1458z00_1322;
BgL_arg1458z00_1322 = 
(
(long)(BgL_iz00_1316)+((long)1)); 
{ 
int BgL_iz00_8333;
BgL_iz00_8333 = 
(int)(BgL_arg1458z00_1322); 
BgL_iz00_1316 = BgL_iz00_8333; 
goto BgL_zc3z04anonymousza31455ze3z87_1318;} }  else 
{ /* Ieee/string.scm 817 */
{ /* Ieee/string.scm 333 */
long BgL_l3057z00_5032;
BgL_l3057z00_5032 = 
STRING_LENGTH(BgL_newz00_1310); 
if(
BOUND_CHECK(BgL_jz00_1317, BgL_l3057z00_5032))
{ /* Ieee/string.scm 333 */
STRING_SET(BgL_newz00_1310, BgL_jz00_1317, BgL_ccz00_1320); }  else 
{ 
obj_t BgL_auxz00_8339;
BgL_auxz00_8339 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16409)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_newz00_1310, 
(int)(BgL_l3057z00_5032), 
(int)(BgL_jz00_1317)); 
FAILURE(BgL_auxz00_8339,BFALSE,BFALSE);} } 
{ /* Ieee/string.scm 821 */
long BgL_arg1459z00_1323;long BgL_arg1460z00_1324;
BgL_arg1459z00_1323 = 
(
(long)(BgL_iz00_1316)+((long)1)); 
BgL_arg1460z00_1324 = 
(BgL_jz00_1317+((long)1)); 
{ 
long BgL_jz00_8350;int BgL_iz00_8348;
BgL_iz00_8348 = 
(int)(BgL_arg1459z00_1323); 
BgL_jz00_8350 = BgL_arg1460z00_1324; 
BgL_jz00_1317 = BgL_jz00_8350; 
BgL_iz00_1316 = BgL_iz00_8348; 
goto BgL_zc3z04anonymousza31455ze3z87_1318;} } } } } } }  else 
{ /* Ieee/string.scm 841 */
obj_t BgL_aux3627z00_5603;
BgL_aux3627z00_5603 = 
BGl_errorz00zz__errorz00(BGl_string4362z00zz__r4_strings_6_7z00, BGl_string4376z00zz__r4_strings_6_7z00, BgL_objz00_117); 
if(
STRINGP(BgL_aux3627z00_5603))
{ /* Ieee/string.scm 841 */
return BgL_aux3627z00_5603;}  else 
{ 
obj_t BgL_auxz00_8354;
BgL_auxz00_8354 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)37503)), BGl_string4362z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_aux3627z00_5603); 
FAILURE(BgL_auxz00_8354,BFALSE,BFALSE);} } } } } } } } } } 

}



/* delim? */
bool_t BGl_delimzf3zf3zz__r4_strings_6_7z00(obj_t BgL_delimsz00_122, unsigned char BgL_charz00_123)
{
{ /* Ieee/string.scm 846 */
{ /* Ieee/string.scm 847 */
long BgL_lenz00_1329;
{ /* Ieee/string.scm 847 */
obj_t BgL_stringz00_3182;
if(
STRINGP(BgL_delimsz00_122))
{ /* Ieee/string.scm 847 */
BgL_stringz00_3182 = BgL_delimsz00_122; }  else 
{ 
obj_t BgL_auxz00_8360;
BgL_auxz00_8360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)37836)), BGl_string4377z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_delimsz00_122); 
FAILURE(BgL_auxz00_8360,BFALSE,BFALSE);} 
BgL_lenz00_1329 = 
STRING_LENGTH(BgL_stringz00_3182); } 
{ 
long BgL_iz00_1331;
BgL_iz00_1331 = ((long)0); 
BgL_zc3z04anonymousza31461ze3z87_1332:
if(
(BgL_iz00_1331==BgL_lenz00_1329))
{ /* Ieee/string.scm 850 */
return ((bool_t)0);}  else 
{ /* Ieee/string.scm 852 */
bool_t BgL_test4955z00_8367;
{ /* Ieee/string.scm 852 */
unsigned char BgL_tmpz00_8368;
{ /* Ieee/string.scm 852 */
obj_t BgL_stringz00_3187;
if(
STRINGP(BgL_delimsz00_122))
{ /* Ieee/string.scm 852 */
BgL_stringz00_3187 = BgL_delimsz00_122; }  else 
{ 
obj_t BgL_auxz00_8371;
BgL_auxz00_8371 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)37955)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_delimsz00_122); 
FAILURE(BgL_auxz00_8371,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 339 */
long BgL_l3061z00_5036;
BgL_l3061z00_5036 = 
STRING_LENGTH(BgL_stringz00_3187); 
if(
BOUND_CHECK(BgL_iz00_1331, BgL_l3061z00_5036))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_8368 = 
STRING_REF(BgL_stringz00_3187, BgL_iz00_1331)
; }  else 
{ 
obj_t BgL_auxz00_8379;
BgL_auxz00_8379 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_3187, 
(int)(BgL_l3061z00_5036), 
(int)(BgL_iz00_1331)); 
FAILURE(BgL_auxz00_8379,BFALSE,BFALSE);} } } 
BgL_test4955z00_8367 = 
(BgL_charz00_123==BgL_tmpz00_8368); } 
if(BgL_test4955z00_8367)
{ /* Ieee/string.scm 852 */
return ((bool_t)1);}  else 
{ 
long BgL_iz00_8386;
BgL_iz00_8386 = 
(BgL_iz00_1331+((long)1)); 
BgL_iz00_1331 = BgL_iz00_8386; 
goto BgL_zc3z04anonymousza31461ze3z87_1332;} } } } } 

}



/* string-split */
BGL_EXPORTED_DEF obj_t BGl_stringzd2splitzd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_132, obj_t BgL_delimitersz00_133)
{
{ /* Ieee/string.scm 884 */
{ /* Ieee/string.scm 885 */
obj_t BgL_dz00_1349;
if(
PAIRP(BgL_delimitersz00_133))
{ /* Ieee/string.scm 885 */
BgL_dz00_1349 = 
CAR(BgL_delimitersz00_133); }  else 
{ /* Ieee/string.scm 885 */
BgL_dz00_1349 = BGl_string4378z00zz__r4_strings_6_7z00; } 
{ /* Ieee/string.scm 885 */
long BgL_lenz00_1350;
BgL_lenz00_1350 = 
STRING_LENGTH(BgL_stringz00_132); 
{ /* Ieee/string.scm 888 */
long BgL_iz00_1351;
{ 
long BgL_iz00_3248;
BgL_iz00_3248 = ((long)0); 
BgL_skipzd2separatorzd2_3247:
if(
(BgL_iz00_3248==BgL_lenz00_1350))
{ /* Ieee/string.scm 862 */
BgL_iz00_1351 = BgL_lenz00_1350; }  else 
{ /* Ieee/string.scm 864 */
bool_t BgL_test4960z00_8394;
{ /* Ieee/string.scm 864 */
unsigned char BgL_auxz00_8395;
{ /* Ieee/string.scm 339 */
long BgL_l3065z00_5040;
BgL_l3065z00_5040 = 
STRING_LENGTH(BgL_stringz00_132); 
if(
BOUND_CHECK(BgL_iz00_3248, BgL_l3065z00_5040))
{ /* Ieee/string.scm 339 */
BgL_auxz00_8395 = 
STRING_REF(BgL_stringz00_132, BgL_iz00_3248)
; }  else 
{ 
obj_t BgL_auxz00_8400;
BgL_auxz00_8400 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_132, 
(int)(BgL_l3065z00_5040), 
(int)(BgL_iz00_3248)); 
FAILURE(BgL_auxz00_8400,BFALSE,BFALSE);} } 
BgL_test4960z00_8394 = 
BGl_delimzf3zf3zz__r4_strings_6_7z00(BgL_dz00_1349, BgL_auxz00_8395); } 
if(BgL_test4960z00_8394)
{ 
long BgL_iz00_8407;
BgL_iz00_8407 = 
(BgL_iz00_3248+((long)1)); 
BgL_iz00_3248 = BgL_iz00_8407; 
goto BgL_skipzd2separatorzd2_3247;}  else 
{ /* Ieee/string.scm 864 */
BgL_iz00_1351 = BgL_iz00_3248; } } } 
{ /* Ieee/string.scm 889 */

{ 
long BgL_iz00_1354;obj_t BgL_resz00_1355;
BgL_iz00_1354 = BgL_iz00_1351; 
BgL_resz00_1355 = BNIL; 
BgL_zc3z04anonymousza31477ze3z87_1356:
if(
(BgL_iz00_1354==BgL_lenz00_1350))
{ /* Ieee/string.scm 892 */
return 
bgl_reverse_bang(BgL_resz00_1355);}  else 
{ /* Ieee/string.scm 894 */
long BgL_ez00_1358;
{ /* Ieee/string.scm 894 */
long BgL_arg1485z00_1364;
BgL_arg1485z00_1364 = 
(BgL_iz00_1354+((long)1)); 
{ 
long BgL_iz00_3267;
BgL_iz00_3267 = BgL_arg1485z00_1364; 
BgL_skipzd2nonzd2separatorz00_3266:
if(
(BgL_iz00_3267==BgL_lenz00_1350))
{ /* Ieee/string.scm 874 */
BgL_ez00_1358 = BgL_lenz00_1350; }  else 
{ /* Ieee/string.scm 876 */
bool_t BgL_test4964z00_8415;
{ /* Ieee/string.scm 876 */
unsigned char BgL_auxz00_8416;
{ /* Ieee/string.scm 339 */
long BgL_l3069z00_5044;
BgL_l3069z00_5044 = 
STRING_LENGTH(BgL_stringz00_132); 
if(
BOUND_CHECK(BgL_iz00_3267, BgL_l3069z00_5044))
{ /* Ieee/string.scm 339 */
BgL_auxz00_8416 = 
STRING_REF(BgL_stringz00_132, BgL_iz00_3267)
; }  else 
{ 
obj_t BgL_auxz00_8421;
BgL_auxz00_8421 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_132, 
(int)(BgL_l3069z00_5044), 
(int)(BgL_iz00_3267)); 
FAILURE(BgL_auxz00_8421,BFALSE,BFALSE);} } 
BgL_test4964z00_8415 = 
BGl_delimzf3zf3zz__r4_strings_6_7z00(BgL_dz00_1349, BgL_auxz00_8416); } 
if(BgL_test4964z00_8415)
{ /* Ieee/string.scm 876 */
BgL_ez00_1358 = BgL_iz00_3267; }  else 
{ 
long BgL_iz00_8428;
BgL_iz00_8428 = 
(BgL_iz00_3267+((long)1)); 
BgL_iz00_3267 = BgL_iz00_8428; 
goto BgL_skipzd2nonzd2separatorz00_3266;} } } } 
{ /* Ieee/string.scm 894 */
obj_t BgL_nresz00_1359;
BgL_nresz00_1359 = 
MAKE_YOUNG_PAIR(
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_132, BgL_iz00_1354, BgL_ez00_1358), BgL_resz00_1355); 
{ /* Ieee/string.scm 895 */

if(
(BgL_ez00_1358==BgL_lenz00_1350))
{ /* Ieee/string.scm 896 */
return 
bgl_reverse_bang(BgL_nresz00_1359);}  else 
{ /* Ieee/string.scm 898 */
long BgL_arg1480z00_1361;
{ /* Ieee/string.scm 898 */
long BgL_arg1483z00_1362;
BgL_arg1483z00_1362 = 
(BgL_ez00_1358+((long)1)); 
{ 
long BgL_iz00_3286;
BgL_iz00_3286 = BgL_arg1483z00_1362; 
BgL_skipzd2separatorzd2_3285:
if(
(BgL_iz00_3286==BgL_lenz00_1350))
{ /* Ieee/string.scm 862 */
BgL_arg1480z00_1361 = BgL_lenz00_1350; }  else 
{ /* Ieee/string.scm 864 */
bool_t BgL_test4968z00_8438;
{ /* Ieee/string.scm 864 */
unsigned char BgL_auxz00_8439;
{ /* Ieee/string.scm 339 */
long BgL_l3073z00_5048;
BgL_l3073z00_5048 = 
STRING_LENGTH(BgL_stringz00_132); 
if(
BOUND_CHECK(BgL_iz00_3286, BgL_l3073z00_5048))
{ /* Ieee/string.scm 339 */
BgL_auxz00_8439 = 
STRING_REF(BgL_stringz00_132, BgL_iz00_3286)
; }  else 
{ 
obj_t BgL_auxz00_8444;
BgL_auxz00_8444 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_132, 
(int)(BgL_l3073z00_5048), 
(int)(BgL_iz00_3286)); 
FAILURE(BgL_auxz00_8444,BFALSE,BFALSE);} } 
BgL_test4968z00_8438 = 
BGl_delimzf3zf3zz__r4_strings_6_7z00(BgL_dz00_1349, BgL_auxz00_8439); } 
if(BgL_test4968z00_8438)
{ 
long BgL_iz00_8451;
BgL_iz00_8451 = 
(BgL_iz00_3286+((long)1)); 
BgL_iz00_3286 = BgL_iz00_8451; 
goto BgL_skipzd2separatorzd2_3285;}  else 
{ /* Ieee/string.scm 864 */
BgL_arg1480z00_1361 = BgL_iz00_3286; } } } } 
{ 
obj_t BgL_resz00_8454;long BgL_iz00_8453;
BgL_iz00_8453 = BgL_arg1480z00_1361; 
BgL_resz00_8454 = BgL_nresz00_1359; 
BgL_resz00_1355 = BgL_resz00_8454; 
BgL_iz00_1354 = BgL_iz00_8453; 
goto BgL_zc3z04anonymousza31477ze3z87_1356;} } } } } } } } } } } 

}



/* &string-split */
obj_t BGl_z62stringzd2splitzb0zz__r4_strings_6_7z00(obj_t BgL_envz00_4875, obj_t BgL_stringz00_4876, obj_t BgL_delimitersz00_4877)
{
{ /* Ieee/string.scm 884 */
{ /* Ieee/string.scm 885 */
obj_t BgL_auxz00_8455;
if(
STRINGP(BgL_stringz00_4876))
{ /* Ieee/string.scm 885 */
BgL_auxz00_8455 = BgL_stringz00_4876
; }  else 
{ 
obj_t BgL_auxz00_8458;
BgL_auxz00_8458 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)39158)), BGl_string4379z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4876); 
FAILURE(BgL_auxz00_8458,BFALSE,BFALSE);} 
return 
BGl_stringzd2splitzd2zz__r4_strings_6_7z00(BgL_auxz00_8455, BgL_delimitersz00_4877);} } 

}



/* string-cut */
BGL_EXPORTED_DEF obj_t BGl_stringzd2cutzd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_134, obj_t BgL_delimitersz00_135)
{
{ /* Ieee/string.scm 904 */
{ /* Ieee/string.scm 905 */
obj_t BgL_dz00_1367;
if(
PAIRP(BgL_delimitersz00_135))
{ /* Ieee/string.scm 905 */
BgL_dz00_1367 = 
CAR(BgL_delimitersz00_135); }  else 
{ /* Ieee/string.scm 905 */
BgL_dz00_1367 = BGl_string4378z00zz__r4_strings_6_7z00; } 
{ /* Ieee/string.scm 905 */
long BgL_lenz00_1368;
BgL_lenz00_1368 = 
STRING_LENGTH(BgL_stringz00_134); 
{ /* Ieee/string.scm 908 */

{ 
long BgL_iz00_1371;obj_t BgL_resz00_1372;
BgL_iz00_1371 = ((long)0); 
BgL_resz00_1372 = BNIL; 
BgL_zc3z04anonymousza31487ze3z87_1373:
if(
(BgL_iz00_1371>=BgL_lenz00_1368))
{ /* Ieee/string.scm 912 */
obj_t BgL_arg1489z00_1375;
BgL_arg1489z00_1375 = 
MAKE_YOUNG_PAIR(BGl_string4334z00zz__r4_strings_6_7z00, BgL_resz00_1372); 
return 
bgl_reverse_bang(BgL_arg1489z00_1375);}  else 
{ /* Ieee/string.scm 913 */
long BgL_ez00_1376;
{ 
long BgL_iz00_3307;
BgL_iz00_3307 = BgL_iz00_1371; 
BgL_skipzd2nonzd2separatorz00_3306:
if(
(BgL_iz00_3307==BgL_lenz00_1368))
{ /* Ieee/string.scm 874 */
BgL_ez00_1376 = BgL_lenz00_1368; }  else 
{ /* Ieee/string.scm 876 */
bool_t BgL_test4974z00_8473;
{ /* Ieee/string.scm 876 */
unsigned char BgL_auxz00_8474;
{ /* Ieee/string.scm 339 */
long BgL_l3077z00_5052;
BgL_l3077z00_5052 = 
STRING_LENGTH(BgL_stringz00_134); 
if(
BOUND_CHECK(BgL_iz00_3307, BgL_l3077z00_5052))
{ /* Ieee/string.scm 339 */
BgL_auxz00_8474 = 
STRING_REF(BgL_stringz00_134, BgL_iz00_3307)
; }  else 
{ 
obj_t BgL_auxz00_8479;
BgL_auxz00_8479 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_134, 
(int)(BgL_l3077z00_5052), 
(int)(BgL_iz00_3307)); 
FAILURE(BgL_auxz00_8479,BFALSE,BFALSE);} } 
BgL_test4974z00_8473 = 
BGl_delimzf3zf3zz__r4_strings_6_7z00(BgL_dz00_1367, BgL_auxz00_8474); } 
if(BgL_test4974z00_8473)
{ /* Ieee/string.scm 876 */
BgL_ez00_1376 = BgL_iz00_3307; }  else 
{ 
long BgL_iz00_8486;
BgL_iz00_8486 = 
(BgL_iz00_3307+((long)1)); 
BgL_iz00_3307 = BgL_iz00_8486; 
goto BgL_skipzd2nonzd2separatorz00_3306;} } } 
{ /* Ieee/string.scm 913 */
obj_t BgL_sz00_1377;
BgL_sz00_1377 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_134, BgL_iz00_1371, BgL_ez00_1376); 
{ /* Ieee/string.scm 914 */
obj_t BgL_nrz00_1378;
BgL_nrz00_1378 = 
MAKE_YOUNG_PAIR(BgL_sz00_1377, BgL_resz00_1372); 
{ /* Ieee/string.scm 915 */

if(
(BgL_ez00_1376==BgL_lenz00_1368))
{ /* Ieee/string.scm 916 */
return 
bgl_reverse_bang(BgL_nrz00_1378);}  else 
{ 
obj_t BgL_resz00_8495;long BgL_iz00_8493;
BgL_iz00_8493 = 
(BgL_ez00_1376+((long)1)); 
BgL_resz00_8495 = BgL_nrz00_1378; 
BgL_resz00_1372 = BgL_resz00_8495; 
BgL_iz00_1371 = BgL_iz00_8493; 
goto BgL_zc3z04anonymousza31487ze3z87_1373;} } } } } } } } } } 

}



/* &string-cut */
obj_t BGl_z62stringzd2cutzb0zz__r4_strings_6_7z00(obj_t BgL_envz00_4878, obj_t BgL_stringz00_4879, obj_t BgL_delimitersz00_4880)
{
{ /* Ieee/string.scm 904 */
{ /* Ieee/string.scm 905 */
obj_t BgL_auxz00_8496;
if(
STRINGP(BgL_stringz00_4879))
{ /* Ieee/string.scm 905 */
BgL_auxz00_8496 = BgL_stringz00_4879
; }  else 
{ 
obj_t BgL_auxz00_8499;
BgL_auxz00_8499 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)39857)), BGl_string4380z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4879); 
FAILURE(BgL_auxz00_8499,BFALSE,BFALSE);} 
return 
BGl_stringzd2cutzd2zz__r4_strings_6_7z00(BgL_auxz00_8496, BgL_delimitersz00_4880);} } 

}



/* string-char-index-ur */
BGL_EXPORTED_DEF obj_t BGl_stringzd2charzd2indexzd2urzd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_136, unsigned char BgL_charz00_137, long BgL_startz00_138, long BgL_nz00_139)
{
{ /* Ieee/string.scm 923 */
{ /* Ieee/string.scm 926 */
char * BgL_s0z00_3325;
BgL_s0z00_3325 = 
BSTRING_TO_STRING(BgL_stringz00_136); 
{ /* Ieee/string.scm 926 */
char * BgL_s1z00_3326;
{ /* Ieee/string.scm 927 */
int BgL_tmpz00_8505;
BgL_tmpz00_8505 = 
(int)(
(
(unsigned char)(BgL_charz00_137))); 
BgL_s1z00_3326 = 
BGL_MEMCHR(BgL_s0z00_3325, BgL_tmpz00_8505, BgL_nz00_139, BgL_startz00_138); } 
{ /* Ieee/string.scm 927 */

if(
BGL_MEMCHR_ZERO(BgL_s1z00_3326))
{ /* Ieee/string.scm 928 */
return BFALSE;}  else 
{ /* Ieee/string.scm 928 */
return 
BINT(
BGL_MEMCHR_DIFF(BgL_s1z00_3326, BgL_s0z00_3325));} } } } } 

}



/* &string-char-index-ur */
obj_t BGl_z62stringzd2charzd2indexzd2urzb0zz__r4_strings_6_7z00(obj_t BgL_envz00_4881, obj_t BgL_stringz00_4882, obj_t BgL_charz00_4883, obj_t BgL_startz00_4884, obj_t BgL_nz00_4885)
{
{ /* Ieee/string.scm 923 */
{ /* Ieee/string.scm 926 */
long BgL_auxz00_8539;long BgL_auxz00_8530;unsigned char BgL_auxz00_8521;obj_t BgL_auxz00_8514;
{ /* Ieee/string.scm 926 */
obj_t BgL_tmpz00_8540;
if(
INTEGERP(BgL_nz00_4885))
{ /* Ieee/string.scm 926 */
BgL_tmpz00_8540 = BgL_nz00_4885
; }  else 
{ 
obj_t BgL_auxz00_8543;
BgL_auxz00_8543 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)40549)), BGl_string4381z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_nz00_4885); 
FAILURE(BgL_auxz00_8543,BFALSE,BFALSE);} 
BgL_auxz00_8539 = 
(long)CINT(BgL_tmpz00_8540); } 
{ /* Ieee/string.scm 926 */
obj_t BgL_tmpz00_8531;
if(
INTEGERP(BgL_startz00_4884))
{ /* Ieee/string.scm 926 */
BgL_tmpz00_8531 = BgL_startz00_4884
; }  else 
{ 
obj_t BgL_auxz00_8534;
BgL_auxz00_8534 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)40549)), BGl_string4381z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_4884); 
FAILURE(BgL_auxz00_8534,BFALSE,BFALSE);} 
BgL_auxz00_8530 = 
(long)CINT(BgL_tmpz00_8531); } 
{ /* Ieee/string.scm 926 */
obj_t BgL_tmpz00_8522;
if(
CHARP(BgL_charz00_4883))
{ /* Ieee/string.scm 926 */
BgL_tmpz00_8522 = BgL_charz00_4883
; }  else 
{ 
obj_t BgL_auxz00_8525;
BgL_auxz00_8525 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)40549)), BGl_string4381z00zz__r4_strings_6_7z00, BGl_string4289z00zz__r4_strings_6_7z00, BgL_charz00_4883); 
FAILURE(BgL_auxz00_8525,BFALSE,BFALSE);} 
BgL_auxz00_8521 = 
CCHAR(BgL_tmpz00_8522); } 
if(
STRINGP(BgL_stringz00_4882))
{ /* Ieee/string.scm 926 */
BgL_auxz00_8514 = BgL_stringz00_4882
; }  else 
{ 
obj_t BgL_auxz00_8517;
BgL_auxz00_8517 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)40549)), BGl_string4381z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_stringz00_4882); 
FAILURE(BgL_auxz00_8517,BFALSE,BFALSE);} 
return 
BGl_stringzd2charzd2indexzd2urzd2zz__r4_strings_6_7z00(BgL_auxz00_8514, BgL_auxz00_8521, BgL_auxz00_8530, BgL_auxz00_8539);} } 

}



/* _string-char-index */
obj_t BGl__stringzd2charzd2indexz00zz__r4_strings_6_7z00(obj_t BgL_env1134z00_145, obj_t BgL_opt1133z00_144)
{
{ /* Ieee/string.scm 944 */
{ /* Ieee/string.scm 944 */
obj_t BgL_g1135z00_1387;obj_t BgL_g1136z00_1388;
BgL_g1135z00_1387 = 
VECTOR_REF(BgL_opt1133z00_144,((long)0)); 
BgL_g1136z00_1388 = 
VECTOR_REF(BgL_opt1133z00_144,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1133z00_144)) { case ((long)2) : 

{ /* Ieee/string.scm 944 */

{ /* Ieee/string.scm 944 */
unsigned char BgL_auxz00_8558;obj_t BgL_auxz00_8551;
{ /* Ieee/string.scm 944 */
obj_t BgL_tmpz00_8559;
if(
CHARP(BgL_g1136z00_1388))
{ /* Ieee/string.scm 944 */
BgL_tmpz00_8559 = BgL_g1136z00_1388
; }  else 
{ 
obj_t BgL_auxz00_8562;
BgL_auxz00_8562 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)41111)), BGl_string4384z00zz__r4_strings_6_7z00, BGl_string4289z00zz__r4_strings_6_7z00, BgL_g1136z00_1388); 
FAILURE(BgL_auxz00_8562,BFALSE,BFALSE);} 
BgL_auxz00_8558 = 
CCHAR(BgL_tmpz00_8559); } 
if(
STRINGP(BgL_g1135z00_1387))
{ /* Ieee/string.scm 944 */
BgL_auxz00_8551 = BgL_g1135z00_1387
; }  else 
{ 
obj_t BgL_auxz00_8554;
BgL_auxz00_8554 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)41111)), BGl_string4384z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1135z00_1387); 
FAILURE(BgL_auxz00_8554,BFALSE,BFALSE);} 
return 
BGl_stringzd2charzd2indexz00zz__r4_strings_6_7z00(BgL_auxz00_8551, BgL_auxz00_8558, 
BINT(((long)0)), 
BINT(((long)-1)));} } break;case ((long)3) : 

{ /* Ieee/string.scm 944 */
obj_t BgL_startz00_1394;
BgL_startz00_1394 = 
VECTOR_REF(BgL_opt1133z00_144,((long)2)); 
{ /* Ieee/string.scm 944 */

{ /* Ieee/string.scm 944 */
unsigned char BgL_auxz00_8578;obj_t BgL_auxz00_8571;
{ /* Ieee/string.scm 944 */
obj_t BgL_tmpz00_8579;
if(
CHARP(BgL_g1136z00_1388))
{ /* Ieee/string.scm 944 */
BgL_tmpz00_8579 = BgL_g1136z00_1388
; }  else 
{ 
obj_t BgL_auxz00_8582;
BgL_auxz00_8582 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)41111)), BGl_string4384z00zz__r4_strings_6_7z00, BGl_string4289z00zz__r4_strings_6_7z00, BgL_g1136z00_1388); 
FAILURE(BgL_auxz00_8582,BFALSE,BFALSE);} 
BgL_auxz00_8578 = 
CCHAR(BgL_tmpz00_8579); } 
if(
STRINGP(BgL_g1135z00_1387))
{ /* Ieee/string.scm 944 */
BgL_auxz00_8571 = BgL_g1135z00_1387
; }  else 
{ 
obj_t BgL_auxz00_8574;
BgL_auxz00_8574 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)41111)), BGl_string4384z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1135z00_1387); 
FAILURE(BgL_auxz00_8574,BFALSE,BFALSE);} 
return 
BGl_stringzd2charzd2indexz00zz__r4_strings_6_7z00(BgL_auxz00_8571, BgL_auxz00_8578, BgL_startz00_1394, 
BINT(((long)-1)));} } } break;case ((long)4) : 

{ /* Ieee/string.scm 944 */
obj_t BgL_startz00_1396;
BgL_startz00_1396 = 
VECTOR_REF(BgL_opt1133z00_144,((long)2)); 
{ /* Ieee/string.scm 944 */
obj_t BgL_countz00_1397;
BgL_countz00_1397 = 
VECTOR_REF(BgL_opt1133z00_144,((long)3)); 
{ /* Ieee/string.scm 944 */

{ /* Ieee/string.scm 944 */
unsigned char BgL_auxz00_8598;obj_t BgL_auxz00_8591;
{ /* Ieee/string.scm 944 */
obj_t BgL_tmpz00_8599;
if(
CHARP(BgL_g1136z00_1388))
{ /* Ieee/string.scm 944 */
BgL_tmpz00_8599 = BgL_g1136z00_1388
; }  else 
{ 
obj_t BgL_auxz00_8602;
BgL_auxz00_8602 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)41111)), BGl_string4384z00zz__r4_strings_6_7z00, BGl_string4289z00zz__r4_strings_6_7z00, BgL_g1136z00_1388); 
FAILURE(BgL_auxz00_8602,BFALSE,BFALSE);} 
BgL_auxz00_8598 = 
CCHAR(BgL_tmpz00_8599); } 
if(
STRINGP(BgL_g1135z00_1387))
{ /* Ieee/string.scm 944 */
BgL_auxz00_8591 = BgL_g1135z00_1387
; }  else 
{ 
obj_t BgL_auxz00_8594;
BgL_auxz00_8594 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)41111)), BGl_string4384z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1135z00_1387); 
FAILURE(BgL_auxz00_8594,BFALSE,BFALSE);} 
return 
BGl_stringzd2charzd2indexz00zz__r4_strings_6_7z00(BgL_auxz00_8591, BgL_auxz00_8598, BgL_startz00_1396, BgL_countz00_1397);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4382z00zz__r4_strings_6_7z00, BGl_string4363z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1133z00_144)));} } } } 

}



/* string-char-index */
BGL_EXPORTED_DEF obj_t BGl_stringzd2charzd2indexz00zz__r4_strings_6_7z00(obj_t BgL_stringz00_140, unsigned char BgL_charz00_141, obj_t BgL_startz00_142, obj_t BgL_countz00_143)
{
{ /* Ieee/string.scm 944 */
{ /* Ieee/string.scm 945 */
long BgL_lenz00_1399;
BgL_lenz00_1399 = 
STRING_LENGTH(BgL_stringz00_140); 
{ /* Ieee/string.scm 946 */

{ /* Ieee/string.scm 950 */
bool_t BgL_test4989z00_8614;
{ /* Ieee/string.scm 950 */
long BgL_n2z00_3345;
{ /* Ieee/string.scm 950 */
obj_t BgL_tmpz00_8615;
if(
INTEGERP(BgL_startz00_142))
{ /* Ieee/string.scm 950 */
BgL_tmpz00_8615 = BgL_startz00_142
; }  else 
{ 
obj_t BgL_auxz00_8618;
BgL_auxz00_8618 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)41359)), BGl_string4383z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_142); 
FAILURE(BgL_auxz00_8618,BFALSE,BFALSE);} 
BgL_n2z00_3345 = 
(long)CINT(BgL_tmpz00_8615); } 
BgL_test4989z00_8614 = 
(BgL_lenz00_1399>BgL_n2z00_3345); } 
if(BgL_test4989z00_8614)
{ /* Ieee/string.scm 951 */
long BgL_startz00_3349;long BgL_nz00_3350;
{ /* Ieee/string.scm 951 */
obj_t BgL_tmpz00_8624;
if(
INTEGERP(BgL_startz00_142))
{ /* Ieee/string.scm 951 */
BgL_tmpz00_8624 = BgL_startz00_142
; }  else 
{ 
obj_t BgL_auxz00_8627;
BgL_auxz00_8627 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)41402)), BGl_string4383z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_142); 
FAILURE(BgL_auxz00_8627,BFALSE,BFALSE);} 
BgL_startz00_3349 = 
(long)CINT(BgL_tmpz00_8624); } 
{ /* Ieee/string.scm 946 */
bool_t BgL_test4992z00_8632;
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_countz00_143))
{ /* Ieee/string.scm 947 */
bool_t BgL_test4994z00_8635;
{ /* Ieee/string.scm 947 */
long BgL_n1z00_3333;
{ /* Ieee/string.scm 947 */
obj_t BgL_tmpz00_8636;
if(
INTEGERP(BgL_countz00_143))
{ /* Ieee/string.scm 947 */
BgL_tmpz00_8636 = BgL_countz00_143
; }  else 
{ 
obj_t BgL_auxz00_8639;
BgL_auxz00_8639 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)41268)), BGl_string4383z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_countz00_143); 
FAILURE(BgL_auxz00_8639,BFALSE,BFALSE);} 
BgL_n1z00_3333 = 
(long)CINT(BgL_tmpz00_8636); } 
BgL_test4994z00_8635 = 
(BgL_n1z00_3333>=((long)0)); } 
if(BgL_test4994z00_8635)
{ /* Ieee/string.scm 947 */
long BgL_n1z00_3338;
{ /* Ieee/string.scm 947 */
obj_t BgL_tmpz00_8645;
if(
INTEGERP(BgL_countz00_143))
{ /* Ieee/string.scm 947 */
BgL_tmpz00_8645 = BgL_countz00_143
; }  else 
{ 
obj_t BgL_auxz00_8648;
BgL_auxz00_8648 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)41283)), BGl_string4383z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_countz00_143); 
FAILURE(BgL_auxz00_8648,BFALSE,BFALSE);} 
BgL_n1z00_3338 = 
(long)CINT(BgL_tmpz00_8645); } 
{ /* Ieee/string.scm 947 */
long BgL_tmpz00_8653;
{ /* Ieee/string.scm 947 */
long BgL_za72za7_3336;
{ /* Ieee/string.scm 947 */
obj_t BgL_tmpz00_8654;
if(
INTEGERP(BgL_startz00_142))
{ /* Ieee/string.scm 947 */
BgL_tmpz00_8654 = BgL_startz00_142
; }  else 
{ 
obj_t BgL_auxz00_8657;
BgL_auxz00_8657 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)41298)), BGl_string4383z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_142); 
FAILURE(BgL_auxz00_8657,BFALSE,BFALSE);} 
BgL_za72za7_3336 = 
(long)CINT(BgL_tmpz00_8654); } 
BgL_tmpz00_8653 = 
(BgL_lenz00_1399-BgL_za72za7_3336); } 
BgL_test4992z00_8632 = 
(BgL_n1z00_3338<=BgL_tmpz00_8653); } }  else 
{ /* Ieee/string.scm 947 */
BgL_test4992z00_8632 = ((bool_t)0)
; } }  else 
{ /* Ieee/string.scm 946 */
BgL_test4992z00_8632 = ((bool_t)0)
; } 
if(BgL_test4992z00_8632)
{ /* Ieee/string.scm 948 */
obj_t BgL_tmpz00_8664;
if(
INTEGERP(BgL_countz00_143))
{ /* Ieee/string.scm 948 */
BgL_tmpz00_8664 = BgL_countz00_143
; }  else 
{ 
obj_t BgL_auxz00_8667;
BgL_auxz00_8667 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)41310)), BGl_string4383z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_countz00_143); 
FAILURE(BgL_auxz00_8667,BFALSE,BFALSE);} 
BgL_nz00_3350 = 
(long)CINT(BgL_tmpz00_8664); }  else 
{ /* Ieee/string.scm 949 */
long BgL_za72za7_3342;
{ /* Ieee/string.scm 949 */
obj_t BgL_tmpz00_8672;
if(
INTEGERP(BgL_startz00_142))
{ /* Ieee/string.scm 949 */
BgL_tmpz00_8672 = BgL_startz00_142
; }  else 
{ 
obj_t BgL_auxz00_8675;
BgL_auxz00_8675 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)41328)), BGl_string4383z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_142); 
FAILURE(BgL_auxz00_8675,BFALSE,BFALSE);} 
BgL_za72za7_3342 = 
(long)CINT(BgL_tmpz00_8672); } 
BgL_nz00_3350 = 
(BgL_lenz00_1399-BgL_za72za7_3342); } } 
{ /* Ieee/string.scm 926 */
char * BgL_s0z00_3351;
BgL_s0z00_3351 = 
BSTRING_TO_STRING(BgL_stringz00_140); 
{ /* Ieee/string.scm 926 */
char * BgL_s1z00_3352;
{ /* Ieee/string.scm 927 */
int BgL_tmpz00_8682;
BgL_tmpz00_8682 = 
(int)(
(
(unsigned char)(BgL_charz00_141))); 
BgL_s1z00_3352 = 
BGL_MEMCHR(BgL_s0z00_3351, BgL_tmpz00_8682, BgL_nz00_3350, BgL_startz00_3349); } 
{ /* Ieee/string.scm 927 */

if(
BGL_MEMCHR_ZERO(BgL_s1z00_3352))
{ /* Ieee/string.scm 928 */
return BFALSE;}  else 
{ /* Ieee/string.scm 928 */
return 
BINT(
BGL_MEMCHR_DIFF(BgL_s1z00_3352, BgL_s0z00_3351));} } } } }  else 
{ /* Ieee/string.scm 950 */
return BFALSE;} } } } } 

}



/* _string-index */
obj_t BGl__stringzd2indexzd2zz__r4_strings_6_7z00(obj_t BgL_env1140z00_150, obj_t BgL_opt1139z00_149)
{
{ /* Ieee/string.scm 956 */
{ /* Ieee/string.scm 956 */
obj_t BgL_g1141z00_1409;obj_t BgL_g1142z00_1410;
BgL_g1141z00_1409 = 
VECTOR_REF(BgL_opt1139z00_149,((long)0)); 
BgL_g1142z00_1410 = 
VECTOR_REF(BgL_opt1139z00_149,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1139z00_149)) { case ((long)2) : 

{ /* Ieee/string.scm 956 */

{ /* Ieee/string.scm 956 */
obj_t BgL_auxz00_8693;
if(
STRINGP(BgL_g1141z00_1409))
{ /* Ieee/string.scm 956 */
BgL_auxz00_8693 = BgL_g1141z00_1409
; }  else 
{ 
obj_t BgL_auxz00_8696;
BgL_auxz00_8696 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)41637)), BGl_string4387z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1141z00_1409); 
FAILURE(BgL_auxz00_8696,BFALSE,BFALSE);} 
return 
BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL_auxz00_8693, BgL_g1142z00_1410, 
BINT(((long)0)));} } break;case ((long)3) : 

{ /* Ieee/string.scm 956 */
obj_t BgL_startz00_1415;
BgL_startz00_1415 = 
VECTOR_REF(BgL_opt1139z00_149,((long)2)); 
{ /* Ieee/string.scm 956 */

{ /* Ieee/string.scm 956 */
obj_t BgL_auxz00_8703;
if(
STRINGP(BgL_g1141z00_1409))
{ /* Ieee/string.scm 956 */
BgL_auxz00_8703 = BgL_g1141z00_1409
; }  else 
{ 
obj_t BgL_auxz00_8706;
BgL_auxz00_8706 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)41637)), BGl_string4387z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1141z00_1409); 
FAILURE(BgL_auxz00_8706,BFALSE,BFALSE);} 
return 
BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL_auxz00_8703, BgL_g1142z00_1410, BgL_startz00_1415);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4385z00zz__r4_strings_6_7z00, BGl_string4321z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1139z00_149)));} } } } 

}



/* string-index */
BGL_EXPORTED_DEF obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_146, obj_t BgL_rsz00_147, obj_t BgL_startz00_148)
{
{ /* Ieee/string.scm 956 */
if(
CHARP(BgL_rsz00_147))
{ /* Ieee/string.scm 220 */

return 
BGl_stringzd2charzd2indexz00zz__r4_strings_6_7z00(BgL_stringz00_146, 
CCHAR(BgL_rsz00_147), BgL_startz00_148, 
BINT(((long)-1)));}  else 
{ /* Ieee/string.scm 958 */
if(
STRINGP(BgL_rsz00_147))
{ /* Ieee/string.scm 960 */
if(
(
STRING_LENGTH(BgL_rsz00_147)==((long)1)))
{ /* Ieee/string.scm 220 */

{ /* Ieee/string.scm 220 */
unsigned char BgL_auxz00_8726;
{ /* Ieee/string.scm 327 */
long BgL_l3081z00_5056;
BgL_l3081z00_5056 = 
STRING_LENGTH(BgL_rsz00_147); 
if(
BOUND_CHECK(((long)0), BgL_l3081z00_5056))
{ /* Ieee/string.scm 327 */
BgL_auxz00_8726 = 
(char)(
STRING_REF(BgL_rsz00_147, ((long)0)))
; }  else 
{ 
obj_t BgL_auxz00_8732;
BgL_auxz00_8732 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_rsz00_147, 
(int)(BgL_l3081z00_5056), 
(int)(((long)0))); 
FAILURE(BgL_auxz00_8732,BFALSE,BFALSE);} } 
return 
BGl_stringzd2charzd2indexz00zz__r4_strings_6_7z00(BgL_stringz00_146, BgL_auxz00_8726, BgL_startz00_148, 
BINT(((long)-1)));} }  else 
{ /* Ieee/string.scm 962 */
if(
(
STRING_LENGTH(BgL_rsz00_147)<=((long)10)))
{ /* Ieee/string.scm 965 */
long BgL_lenz00_1432;long BgL_lenjz00_1433;
BgL_lenz00_1432 = 
STRING_LENGTH(BgL_stringz00_146); 
BgL_lenjz00_1433 = 
STRING_LENGTH(BgL_rsz00_147); 
{ 
obj_t BgL_iz00_1435;
BgL_iz00_1435 = BgL_startz00_148; 
BgL_zc3z04anonymousza31513ze3z87_1436:
{ /* Ieee/string.scm 968 */
bool_t BgL_test5008z00_8745;
{ /* Ieee/string.scm 968 */
long BgL_n1z00_3373;
{ /* Ieee/string.scm 968 */
obj_t BgL_tmpz00_8746;
if(
INTEGERP(BgL_iz00_1435))
{ /* Ieee/string.scm 968 */
BgL_tmpz00_8746 = BgL_iz00_1435
; }  else 
{ 
obj_t BgL_auxz00_8749;
BgL_auxz00_8749 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)42084)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1435); 
FAILURE(BgL_auxz00_8749,BFALSE,BFALSE);} 
BgL_n1z00_3373 = 
(long)CINT(BgL_tmpz00_8746); } 
BgL_test5008z00_8745 = 
(BgL_n1z00_3373>=BgL_lenz00_1432); } 
if(BgL_test5008z00_8745)
{ /* Ieee/string.scm 968 */
return BFALSE;}  else 
{ /* Ieee/string.scm 970 */
unsigned char BgL_cz00_1438;
{ /* Ieee/string.scm 970 */
long BgL_kz00_3377;
{ /* Ieee/string.scm 970 */
obj_t BgL_tmpz00_8755;
if(
INTEGERP(BgL_iz00_1435))
{ /* Ieee/string.scm 970 */
BgL_tmpz00_8755 = BgL_iz00_1435
; }  else 
{ 
obj_t BgL_auxz00_8758;
BgL_auxz00_8758 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)42128)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1435); 
FAILURE(BgL_auxz00_8758,BFALSE,BFALSE);} 
BgL_kz00_3377 = 
(long)CINT(BgL_tmpz00_8755); } 
{ /* Ieee/string.scm 327 */
long BgL_l3085z00_5060;
BgL_l3085z00_5060 = 
STRING_LENGTH(BgL_stringz00_146); 
if(
BOUND_CHECK(BgL_kz00_3377, BgL_l3085z00_5060))
{ /* Ieee/string.scm 327 */
BgL_cz00_1438 = 
STRING_REF(BgL_stringz00_146, BgL_kz00_3377); }  else 
{ 
obj_t BgL_auxz00_8767;
BgL_auxz00_8767 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_146, 
(int)(BgL_l3085z00_5060), 
(int)(BgL_kz00_3377)); 
FAILURE(BgL_auxz00_8767,BFALSE,BFALSE);} } } 
{ 
long BgL_jz00_1440;
BgL_jz00_1440 = ((long)0); 
BgL_zc3z04anonymousza31515ze3z87_1441:
if(
(BgL_jz00_1440==BgL_lenjz00_1433))
{ 
obj_t BgL_iz00_8775;
{ 
obj_t BgL_tmpz00_8776;
if(
INTEGERP(BgL_iz00_1435))
{ /* Ieee/string.scm 973 */
BgL_tmpz00_8776 = BgL_iz00_1435
; }  else 
{ 
obj_t BgL_auxz00_8779;
BgL_auxz00_8779 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)42200)), BGl_string4388z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1435); 
FAILURE(BgL_auxz00_8779,BFALSE,BFALSE);} 
BgL_iz00_8775 = 
ADDFX(BgL_tmpz00_8776, 
BINT(((long)1))); } 
BgL_iz00_1435 = BgL_iz00_8775; 
goto BgL_zc3z04anonymousza31513ze3z87_1436;}  else 
{ /* Ieee/string.scm 974 */
bool_t BgL_test5014z00_8785;
{ /* Ieee/string.scm 974 */
unsigned char BgL_tmpz00_8786;
{ /* Ieee/string.scm 339 */
long BgL_l3089z00_5064;
BgL_l3089z00_5064 = 
STRING_LENGTH(
((obj_t)BgL_rsz00_147)); 
if(
BOUND_CHECK(BgL_jz00_1440, BgL_l3089z00_5064))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_8786 = 
STRING_REF(
((obj_t)BgL_rsz00_147), BgL_jz00_1440)
; }  else 
{ 
obj_t BgL_auxz00_8793;
BgL_auxz00_8793 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, 
((obj_t)BgL_rsz00_147), 
(int)(BgL_l3089z00_5064), 
(int)(BgL_jz00_1440)); 
FAILURE(BgL_auxz00_8793,BFALSE,BFALSE);} } 
BgL_test5014z00_8785 = 
(BgL_cz00_1438==BgL_tmpz00_8786); } 
if(BgL_test5014z00_8785)
{ /* Ieee/string.scm 974 */
return BgL_iz00_1435;}  else 
{ 
long BgL_jz00_8801;
BgL_jz00_8801 = 
(BgL_jz00_1440+((long)1)); 
BgL_jz00_1440 = BgL_jz00_8801; 
goto BgL_zc3z04anonymousza31515ze3z87_1441;} } } } } } }  else 
{ /* Ieee/string.scm 978 */
obj_t BgL_tz00_1450;long BgL_lenz00_1451;
BgL_tz00_1450 = 
make_string(((long)256), ((unsigned char)'n')); 
BgL_lenz00_1451 = 
STRING_LENGTH(BgL_stringz00_146); 
{ /* Ieee/string.scm 980 */
long BgL_g1030z00_1452;
BgL_g1030z00_1452 = 
(
STRING_LENGTH(BgL_rsz00_147)-((long)1)); 
{ 
long BgL_iz00_1454;
BgL_iz00_1454 = BgL_g1030z00_1452; 
BgL_zc3z04anonymousza31524ze3z87_1455:
if(
(BgL_iz00_1454==((long)-1)))
{ 
obj_t BgL_iz00_1458;
BgL_iz00_1458 = BgL_startz00_148; 
BgL_zc3z04anonymousza31526ze3z87_1459:
{ /* Ieee/string.scm 984 */
bool_t BgL_test5017z00_8809;
{ /* Ieee/string.scm 984 */
long BgL_n1z00_3401;
{ /* Ieee/string.scm 984 */
obj_t BgL_tmpz00_8810;
if(
INTEGERP(BgL_iz00_1458))
{ /* Ieee/string.scm 984 */
BgL_tmpz00_8810 = BgL_iz00_1458
; }  else 
{ 
obj_t BgL_auxz00_8813;
BgL_auxz00_8813 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)42502)), BGl_string4388z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1458); 
FAILURE(BgL_auxz00_8813,BFALSE,BFALSE);} 
BgL_n1z00_3401 = 
(long)CINT(BgL_tmpz00_8810); } 
BgL_test5017z00_8809 = 
(BgL_n1z00_3401>=BgL_lenz00_1451); } 
if(BgL_test5017z00_8809)
{ /* Ieee/string.scm 984 */
return BFALSE;}  else 
{ /* Ieee/string.scm 986 */
bool_t BgL_test5019z00_8819;
{ /* Ieee/string.scm 986 */
unsigned char BgL_tmpz00_8820;
{ /* Ieee/string.scm 987 */
long BgL_i3096z00_5071;
{ /* Ieee/string.scm 987 */
unsigned char BgL_tmpz00_8821;
{ /* Ieee/string.scm 987 */
long BgL_kz00_3405;
{ /* Ieee/string.scm 987 */
obj_t BgL_tmpz00_8822;
if(
INTEGERP(BgL_iz00_1458))
{ /* Ieee/string.scm 987 */
BgL_tmpz00_8822 = BgL_iz00_1458
; }  else 
{ 
obj_t BgL_auxz00_8825;
BgL_auxz00_8825 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)42592)), BGl_string4388z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1458); 
FAILURE(BgL_auxz00_8825,BFALSE,BFALSE);} 
BgL_kz00_3405 = 
(long)CINT(BgL_tmpz00_8822); } 
{ /* Ieee/string.scm 339 */
long BgL_l3093z00_5068;
BgL_l3093z00_5068 = 
STRING_LENGTH(BgL_stringz00_146); 
if(
BOUND_CHECK(BgL_kz00_3405, BgL_l3093z00_5068))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_8821 = 
STRING_REF(BgL_stringz00_146, BgL_kz00_3405)
; }  else 
{ 
obj_t BgL_auxz00_8834;
BgL_auxz00_8834 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_146, 
(int)(BgL_l3093z00_5068), 
(int)(BgL_kz00_3405)); 
FAILURE(BgL_auxz00_8834,BFALSE,BFALSE);} } } 
BgL_i3096z00_5071 = 
(BgL_tmpz00_8821); } 
{ /* Ieee/string.scm 327 */
long BgL_l3097z00_5072;
BgL_l3097z00_5072 = 
STRING_LENGTH(BgL_tz00_1450); 
if(
BOUND_CHECK(BgL_i3096z00_5071, BgL_l3097z00_5072))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_8820 = 
STRING_REF(BgL_tz00_1450, BgL_i3096z00_5071)
; }  else 
{ 
obj_t BgL_auxz00_8845;
BgL_auxz00_8845 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_tz00_1450, 
(int)(BgL_l3097z00_5072), 
(int)(BgL_i3096z00_5071)); 
FAILURE(BgL_auxz00_8845,BFALSE,BFALSE);} } } 
BgL_test5019z00_8819 = 
(BgL_tmpz00_8820==((unsigned char)'y')); } 
if(BgL_test5019z00_8819)
{ /* Ieee/string.scm 986 */
return BgL_iz00_1458;}  else 
{ 
obj_t BgL_iz00_8852;
{ 
obj_t BgL_tmpz00_8853;
if(
INTEGERP(BgL_iz00_1458))
{ /* Ieee/string.scm 991 */
BgL_tmpz00_8853 = BgL_iz00_1458
; }  else 
{ 
obj_t BgL_auxz00_8856;
BgL_auxz00_8856 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)42643)), BGl_string4388z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1458); 
FAILURE(BgL_auxz00_8856,BFALSE,BFALSE);} 
BgL_iz00_8852 = 
ADDFX(BgL_tmpz00_8853, 
BINT(((long)1))); } 
BgL_iz00_1458 = BgL_iz00_8852; 
goto BgL_zc3z04anonymousza31526ze3z87_1459;} } } }  else 
{ /* Ieee/string.scm 981 */
{ /* Ieee/string.scm 993 */
long BgL_arg1537z00_1470;
{ /* Ieee/string.scm 993 */
unsigned char BgL_tmpz00_8862;
{ /* Ieee/string.scm 339 */
long BgL_l3101z00_5076;
BgL_l3101z00_5076 = 
STRING_LENGTH(
((obj_t)BgL_rsz00_147)); 
if(
BOUND_CHECK(BgL_iz00_1454, BgL_l3101z00_5076))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_8862 = 
STRING_REF(
((obj_t)BgL_rsz00_147), BgL_iz00_1454)
; }  else 
{ 
obj_t BgL_auxz00_8869;
BgL_auxz00_8869 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, 
((obj_t)BgL_rsz00_147), 
(int)(BgL_l3101z00_5076), 
(int)(BgL_iz00_1454)); 
FAILURE(BgL_auxz00_8869,BFALSE,BFALSE);} } 
BgL_arg1537z00_1470 = 
(BgL_tmpz00_8862); } 
{ /* Ieee/string.scm 345 */
long BgL_l3105z00_5080;
BgL_l3105z00_5080 = 
STRING_LENGTH(BgL_tz00_1450); 
if(
BOUND_CHECK(BgL_arg1537z00_1470, BgL_l3105z00_5080))
{ /* Ieee/string.scm 345 */
STRING_SET(BgL_tz00_1450, BgL_arg1537z00_1470, ((unsigned char)'y')); }  else 
{ 
obj_t BgL_auxz00_8881;
BgL_auxz00_8881 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_tz00_1450, 
(int)(BgL_l3105z00_5080), 
(int)(BgL_arg1537z00_1470)); 
FAILURE(BgL_auxz00_8881,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_8887;
BgL_iz00_8887 = 
(BgL_iz00_1454-((long)1)); 
BgL_iz00_1454 = BgL_iz00_8887; 
goto BgL_zc3z04anonymousza31524ze3z87_1455;} } } } } } }  else 
{ /* Ieee/string.scm 960 */
return 
BGl_errorz00zz__errorz00(BGl_string4386z00zz__r4_strings_6_7z00, BGl_string4389z00zz__r4_strings_6_7z00, BgL_rsz00_147);} } } 

}



/* _string-index-right */
obj_t BGl__stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t BgL_env1146z00_155, obj_t BgL_opt1145z00_154)
{
{ /* Ieee/string.scm 999 */
{ /* Ieee/string.scm 999 */
obj_t BgL_sz00_1477;obj_t BgL_g1147z00_1478;
BgL_sz00_1477 = 
VECTOR_REF(BgL_opt1145z00_154,((long)0)); 
BgL_g1147z00_1478 = 
VECTOR_REF(BgL_opt1145z00_154,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1145z00_154)) { case ((long)2) : 

{ /* Ieee/string.scm 999 */
long BgL_startz00_1482;
{ /* Ieee/string.scm 999 */
obj_t BgL_stringz00_3427;
if(
STRINGP(BgL_sz00_1477))
{ /* Ieee/string.scm 999 */
BgL_stringz00_3427 = BgL_sz00_1477; }  else 
{ 
obj_t BgL_auxz00_8894;
BgL_auxz00_8894 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)43032)), BGl_string4392z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_sz00_1477); 
FAILURE(BgL_auxz00_8894,BFALSE,BFALSE);} 
BgL_startz00_1482 = 
STRING_LENGTH(BgL_stringz00_3427); } 
{ /* Ieee/string.scm 999 */

{ /* Ieee/string.scm 999 */
obj_t BgL_auxz00_8899;
if(
STRINGP(BgL_sz00_1477))
{ /* Ieee/string.scm 999 */
BgL_auxz00_8899 = BgL_sz00_1477
; }  else 
{ 
obj_t BgL_auxz00_8902;
BgL_auxz00_8902 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)42981)), BGl_string4392z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_sz00_1477); 
FAILURE(BgL_auxz00_8902,BFALSE,BFALSE);} 
return 
BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(BgL_auxz00_8899, BgL_g1147z00_1478, 
BINT(BgL_startz00_1482));} } } break;case ((long)3) : 

{ /* Ieee/string.scm 999 */
obj_t BgL_startz00_1483;
BgL_startz00_1483 = 
VECTOR_REF(BgL_opt1145z00_154,((long)2)); 
{ /* Ieee/string.scm 999 */

{ /* Ieee/string.scm 999 */
obj_t BgL_auxz00_8909;
if(
STRINGP(BgL_sz00_1477))
{ /* Ieee/string.scm 999 */
BgL_auxz00_8909 = BgL_sz00_1477
; }  else 
{ 
obj_t BgL_auxz00_8912;
BgL_auxz00_8912 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)42981)), BGl_string4392z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_sz00_1477); 
FAILURE(BgL_auxz00_8912,BFALSE,BFALSE);} 
return 
BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(BgL_auxz00_8909, BgL_g1147z00_1478, BgL_startz00_1483);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4390z00zz__r4_strings_6_7z00, BGl_string4321z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1145z00_154)));} } } } 

}



/* string-index-right */
BGL_EXPORTED_DEF obj_t BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t BgL_sz00_151, obj_t BgL_rsz00_152, obj_t BgL_startz00_153)
{
{ /* Ieee/string.scm 999 */
{ 
obj_t BgL_sz00_1543;obj_t BgL_cz00_1544;
{ /* Ieee/string.scm 1010 */
bool_t BgL_test5029z00_8922;
{ /* Ieee/string.scm 1010 */
long BgL_n1z00_3443;
{ /* Ieee/string.scm 1010 */
obj_t BgL_tmpz00_8923;
if(
INTEGERP(BgL_startz00_153))
{ /* Ieee/string.scm 1010 */
BgL_tmpz00_8923 = BgL_startz00_153
; }  else 
{ 
obj_t BgL_auxz00_8926;
BgL_auxz00_8926 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)43262)), BGl_string4391z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_153); 
FAILURE(BgL_auxz00_8926,BFALSE,BFALSE);} 
BgL_n1z00_3443 = 
(long)CINT(BgL_tmpz00_8923); } 
BgL_test5029z00_8922 = 
(BgL_n1z00_3443>
STRING_LENGTH(BgL_sz00_151)); } 
if(BgL_test5029z00_8922)
{ /* Ieee/string.scm 1010 */
return 
BGl_errorz00zz__errorz00(BGl_string4391z00zz__r4_strings_6_7z00, BGl_string4393z00zz__r4_strings_6_7z00, BgL_startz00_153);}  else 
{ /* Ieee/string.scm 1010 */
if(
CHARP(BgL_rsz00_152))
{ /* Ieee/string.scm 1012 */
BgL_sz00_1543 = BgL_sz00_151; 
BgL_cz00_1544 = BgL_rsz00_152; 
BgL_zc3z04anonymousza31598ze3z87_1545:
{ 
long BgL_iz00_1548;
{ /* Ieee/string.scm 1001 */
long BgL_za71za7_3429;
{ /* Ieee/string.scm 1001 */
obj_t BgL_tmpz00_8955;
if(
INTEGERP(BgL_startz00_153))
{ /* Ieee/string.scm 1001 */
BgL_tmpz00_8955 = BgL_startz00_153
; }  else 
{ 
obj_t BgL_auxz00_8958;
BgL_auxz00_8958 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)43112)), BGl_string4383z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_153); 
FAILURE(BgL_auxz00_8958,BFALSE,BFALSE);} 
BgL_za71za7_3429 = 
(long)CINT(BgL_tmpz00_8955); } 
BgL_iz00_1548 = 
(BgL_za71za7_3429-((long)1)); } 
BgL_zc3z04anonymousza31599ze3z87_1549:
if(
(BgL_iz00_1548<((long)0)))
{ /* Ieee/string.scm 1003 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1005 */
bool_t BgL_test5033z00_8938;
{ /* Ieee/string.scm 1005 */
unsigned char BgL_char2z00_3437;
BgL_char2z00_3437 = 
CCHAR(BgL_cz00_1544); 
{ /* Ieee/string.scm 1005 */
unsigned char BgL_tmpz00_8940;
{ /* Ieee/string.scm 339 */
long BgL_l3109z00_5084;
BgL_l3109z00_5084 = 
STRING_LENGTH(BgL_sz00_1543); 
if(
BOUND_CHECK(BgL_iz00_1548, BgL_l3109z00_5084))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_8940 = 
STRING_REF(BgL_sz00_1543, BgL_iz00_1548)
; }  else 
{ 
obj_t BgL_auxz00_8945;
BgL_auxz00_8945 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_sz00_1543, 
(int)(BgL_l3109z00_5084), 
(int)(BgL_iz00_1548)); 
FAILURE(BgL_auxz00_8945,BFALSE,BFALSE);} } 
BgL_test5033z00_8938 = 
(BgL_tmpz00_8940==BgL_char2z00_3437); } } 
if(BgL_test5033z00_8938)
{ /* Ieee/string.scm 1005 */
return 
BINT(BgL_iz00_1548);}  else 
{ 
long BgL_iz00_8953;
BgL_iz00_8953 = 
(BgL_iz00_1548-((long)1)); 
BgL_iz00_1548 = BgL_iz00_8953; 
goto BgL_zc3z04anonymousza31599ze3z87_1549;} } } }  else 
{ /* Ieee/string.scm 1012 */
if(
STRINGP(BgL_rsz00_152))
{ /* Ieee/string.scm 1014 */
if(
(
STRING_LENGTH(BgL_rsz00_152)==((long)1)))
{ 
obj_t BgL_cz00_8970;obj_t BgL_sz00_8969;
BgL_sz00_8969 = BgL_sz00_151; 
{ /* Ieee/string.scm 327 */
long BgL_l3113z00_5088;
BgL_l3113z00_5088 = 
STRING_LENGTH(BgL_rsz00_152); 
if(
BOUND_CHECK(((long)0), BgL_l3113z00_5088))
{ /* Ieee/string.scm 327 */
BgL_cz00_8970 = 
BCHAR(
STRING_REF(BgL_rsz00_152, ((long)0))); }  else 
{ 
obj_t BgL_auxz00_8976;
BgL_auxz00_8976 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_rsz00_152, 
(int)(BgL_l3113z00_5088), 
(int)(((long)0))); 
FAILURE(BgL_auxz00_8976,BFALSE,BFALSE);} } 
BgL_cz00_1544 = BgL_cz00_8970; 
BgL_sz00_1543 = BgL_sz00_8969; 
goto BgL_zc3z04anonymousza31598ze3z87_1545;}  else 
{ /* Ieee/string.scm 1016 */
if(
(
STRING_LENGTH(BgL_rsz00_152)<=((long)10)))
{ /* Ieee/string.scm 1019 */
long BgL_lenjz00_1496;
BgL_lenjz00_1496 = 
STRING_LENGTH(BgL_rsz00_152); 
{ 
long BgL_iz00_1499;
{ /* Ieee/string.scm 1021 */
long BgL_za71za7_3462;
{ /* Ieee/string.scm 1021 */
obj_t BgL_tmpz00_9021;
if(
INTEGERP(BgL_startz00_153))
{ /* Ieee/string.scm 1021 */
BgL_tmpz00_9021 = BgL_startz00_153
; }  else 
{ 
obj_t BgL_auxz00_9024;
BgL_auxz00_9024 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)43695)), BGl_string4391z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_153); 
FAILURE(BgL_auxz00_9024,BFALSE,BFALSE);} 
BgL_za71za7_3462 = 
(long)CINT(BgL_tmpz00_9021); } 
BgL_iz00_1499 = 
(BgL_za71za7_3462-((long)1)); } 
BgL_zc3z04anonymousza31562ze3z87_1500:
if(
(BgL_iz00_1499<((long)0)))
{ /* Ieee/string.scm 1022 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1024 */
unsigned char BgL_cz00_1502;
{ /* Ieee/string.scm 327 */
long BgL_l3117z00_5092;
BgL_l3117z00_5092 = 
STRING_LENGTH(BgL_sz00_151); 
if(
BOUND_CHECK(BgL_iz00_1499, BgL_l3117z00_5092))
{ /* Ieee/string.scm 327 */
BgL_cz00_1502 = 
STRING_REF(BgL_sz00_151, BgL_iz00_1499); }  else 
{ 
obj_t BgL_auxz00_8992;
BgL_auxz00_8992 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_sz00_151, 
(int)(BgL_l3117z00_5092), 
(int)(BgL_iz00_1499)); 
FAILURE(BgL_auxz00_8992,BFALSE,BFALSE);} } 
{ 
long BgL_jz00_1504;
BgL_jz00_1504 = ((long)0); 
BgL_zc3z04anonymousza31564ze3z87_1505:
if(
(BgL_jz00_1504==BgL_lenjz00_1496))
{ 
long BgL_iz00_9000;
BgL_iz00_9000 = 
(BgL_iz00_1499-((long)1)); 
BgL_iz00_1499 = BgL_iz00_9000; 
goto BgL_zc3z04anonymousza31562ze3z87_1500;}  else 
{ /* Ieee/string.scm 1028 */
bool_t BgL_test5043z00_9002;
{ /* Ieee/string.scm 1028 */
unsigned char BgL_tmpz00_9003;
{ /* Ieee/string.scm 339 */
long BgL_l3121z00_5096;
BgL_l3121z00_5096 = 
STRING_LENGTH(
((obj_t)BgL_rsz00_152)); 
if(
BOUND_CHECK(BgL_jz00_1504, BgL_l3121z00_5096))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_9003 = 
STRING_REF(
((obj_t)BgL_rsz00_152), BgL_jz00_1504)
; }  else 
{ 
obj_t BgL_auxz00_9010;
BgL_auxz00_9010 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, 
((obj_t)BgL_rsz00_152), 
(int)(BgL_l3121z00_5096), 
(int)(BgL_jz00_1504)); 
FAILURE(BgL_auxz00_9010,BFALSE,BFALSE);} } 
BgL_test5043z00_9002 = 
(BgL_cz00_1502==BgL_tmpz00_9003); } 
if(BgL_test5043z00_9002)
{ /* Ieee/string.scm 1028 */
return 
BINT(BgL_iz00_1499);}  else 
{ 
long BgL_jz00_9019;
BgL_jz00_9019 = 
(BgL_jz00_1504+((long)1)); 
BgL_jz00_1504 = BgL_jz00_9019; 
goto BgL_zc3z04anonymousza31564ze3z87_1505;} } } } } }  else 
{ /* Ieee/string.scm 1032 */
obj_t BgL_tz00_1514;
BgL_tz00_1514 = 
make_string(((long)256), ((unsigned char)'n')); 
{ /* Ieee/string.scm 1034 */
long BgL_g1034z00_1516;
BgL_g1034z00_1516 = 
(
STRING_LENGTH(BgL_rsz00_152)-((long)1)); 
{ 
long BgL_iz00_1518;
BgL_iz00_1518 = BgL_g1034z00_1516; 
BgL_zc3z04anonymousza31571ze3z87_1519:
if(
(BgL_iz00_1518==((long)-1)))
{ 
long BgL_iz00_1523;
{ /* Ieee/string.scm 1036 */
long BgL_za71za7_3491;
{ /* Ieee/string.scm 1036 */
obj_t BgL_tmpz00_9065;
if(
INTEGERP(BgL_startz00_153))
{ /* Ieee/string.scm 1036 */
BgL_tmpz00_9065 = BgL_startz00_153
; }  else 
{ 
obj_t BgL_auxz00_9068;
BgL_auxz00_9068 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)44096)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_153); 
FAILURE(BgL_auxz00_9068,BFALSE,BFALSE);} 
BgL_za71za7_3491 = 
(long)CINT(BgL_tmpz00_9065); } 
BgL_iz00_1523 = 
(BgL_za71za7_3491-((long)1)); } 
BgL_zc3z04anonymousza31573ze3z87_1524:
if(
(BgL_iz00_1523<((long)0)))
{ /* Ieee/string.scm 1038 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1040 */
bool_t BgL_test5048z00_9037;
{ /* Ieee/string.scm 1040 */
unsigned char BgL_tmpz00_9038;
{ /* Ieee/string.scm 1041 */
long BgL_i3128z00_5103;
{ /* Ieee/string.scm 1041 */
unsigned char BgL_tmpz00_9039;
{ /* Ieee/string.scm 339 */
long BgL_l3125z00_5100;
BgL_l3125z00_5100 = 
STRING_LENGTH(BgL_sz00_151); 
if(
BOUND_CHECK(BgL_iz00_1523, BgL_l3125z00_5100))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_9039 = 
STRING_REF(BgL_sz00_151, BgL_iz00_1523)
; }  else 
{ 
obj_t BgL_auxz00_9044;
BgL_auxz00_9044 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_sz00_151, 
(int)(BgL_l3125z00_5100), 
(int)(BgL_iz00_1523)); 
FAILURE(BgL_auxz00_9044,BFALSE,BFALSE);} } 
BgL_i3128z00_5103 = 
(BgL_tmpz00_9039); } 
{ /* Ieee/string.scm 327 */
long BgL_l3129z00_5104;
BgL_l3129z00_5104 = 
STRING_LENGTH(BgL_tz00_1514); 
if(
BOUND_CHECK(BgL_i3128z00_5103, BgL_l3129z00_5104))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_9038 = 
STRING_REF(BgL_tz00_1514, BgL_i3128z00_5103)
; }  else 
{ 
obj_t BgL_auxz00_9055;
BgL_auxz00_9055 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_tz00_1514, 
(int)(BgL_l3129z00_5104), 
(int)(BgL_i3128z00_5103)); 
FAILURE(BgL_auxz00_9055,BFALSE,BFALSE);} } } 
BgL_test5048z00_9037 = 
(BgL_tmpz00_9038==((unsigned char)'y')); } 
if(BgL_test5048z00_9037)
{ /* Ieee/string.scm 1040 */
return 
BINT(BgL_iz00_1523);}  else 
{ 
long BgL_iz00_9063;
BgL_iz00_9063 = 
(BgL_iz00_1523-((long)1)); 
BgL_iz00_1523 = BgL_iz00_9063; 
goto BgL_zc3z04anonymousza31573ze3z87_1524;} } }  else 
{ /* Ieee/string.scm 1035 */
{ /* Ieee/string.scm 1047 */
long BgL_arg1587z00_1535;
{ /* Ieee/string.scm 1047 */
unsigned char BgL_tmpz00_9074;
{ /* Ieee/string.scm 339 */
long BgL_l3133z00_5108;
BgL_l3133z00_5108 = 
STRING_LENGTH(
((obj_t)BgL_rsz00_152)); 
if(
BOUND_CHECK(BgL_iz00_1518, BgL_l3133z00_5108))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_9074 = 
STRING_REF(
((obj_t)BgL_rsz00_152), BgL_iz00_1518)
; }  else 
{ 
obj_t BgL_auxz00_9081;
BgL_auxz00_9081 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, 
((obj_t)BgL_rsz00_152), 
(int)(BgL_l3133z00_5108), 
(int)(BgL_iz00_1518)); 
FAILURE(BgL_auxz00_9081,BFALSE,BFALSE);} } 
BgL_arg1587z00_1535 = 
(BgL_tmpz00_9074); } 
{ /* Ieee/string.scm 345 */
long BgL_l3137z00_5112;
BgL_l3137z00_5112 = 
STRING_LENGTH(BgL_tz00_1514); 
if(
BOUND_CHECK(BgL_arg1587z00_1535, BgL_l3137z00_5112))
{ /* Ieee/string.scm 345 */
STRING_SET(BgL_tz00_1514, BgL_arg1587z00_1535, ((unsigned char)'y')); }  else 
{ 
obj_t BgL_auxz00_9093;
BgL_auxz00_9093 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_tz00_1514, 
(int)(BgL_l3137z00_5112), 
(int)(BgL_arg1587z00_1535)); 
FAILURE(BgL_auxz00_9093,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_9099;
BgL_iz00_9099 = 
(BgL_iz00_1518-((long)1)); 
BgL_iz00_1518 = BgL_iz00_9099; 
goto BgL_zc3z04anonymousza31571ze3z87_1519;} } } } } } }  else 
{ /* Ieee/string.scm 1014 */
return 
BGl_errorz00zz__errorz00(BGl_string4391z00zz__r4_strings_6_7z00, BGl_string4389z00zz__r4_strings_6_7z00, BgL_rsz00_152);} } } } } } 

}



/* _string-skip */
obj_t BGl__stringzd2skipzd2zz__r4_strings_6_7z00(obj_t BgL_env1151z00_160, obj_t BgL_opt1150z00_159)
{
{ /* Ieee/string.scm 1053 */
{ /* Ieee/string.scm 1053 */
obj_t BgL_g1152z00_1557;obj_t BgL_g1153z00_1558;
BgL_g1152z00_1557 = 
VECTOR_REF(BgL_opt1150z00_159,((long)0)); 
BgL_g1153z00_1558 = 
VECTOR_REF(BgL_opt1150z00_159,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1150z00_159)) { case ((long)2) : 

{ /* Ieee/string.scm 1053 */

{ /* Ieee/string.scm 1053 */
obj_t BgL_auxz00_9104;
if(
STRINGP(BgL_g1152z00_1557))
{ /* Ieee/string.scm 1053 */
BgL_auxz00_9104 = BgL_g1152z00_1557
; }  else 
{ 
obj_t BgL_auxz00_9107;
BgL_auxz00_9107 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)44602)), BGl_string4396z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1152z00_1557); 
FAILURE(BgL_auxz00_9107,BFALSE,BFALSE);} 
return 
BGl_stringzd2skipzd2zz__r4_strings_6_7z00(BgL_auxz00_9104, BgL_g1153z00_1558, 
BINT(((long)0)));} } break;case ((long)3) : 

{ /* Ieee/string.scm 1053 */
obj_t BgL_startz00_1563;
BgL_startz00_1563 = 
VECTOR_REF(BgL_opt1150z00_159,((long)2)); 
{ /* Ieee/string.scm 1053 */

{ /* Ieee/string.scm 1053 */
obj_t BgL_auxz00_9114;
if(
STRINGP(BgL_g1152z00_1557))
{ /* Ieee/string.scm 1053 */
BgL_auxz00_9114 = BgL_g1152z00_1557
; }  else 
{ 
obj_t BgL_auxz00_9117;
BgL_auxz00_9117 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)44602)), BGl_string4396z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1152z00_1557); 
FAILURE(BgL_auxz00_9117,BFALSE,BFALSE);} 
return 
BGl_stringzd2skipzd2zz__r4_strings_6_7z00(BgL_auxz00_9114, BgL_g1153z00_1558, BgL_startz00_1563);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4394z00zz__r4_strings_6_7z00, BGl_string4321z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1150z00_159)));} } } } 

}



/* string-skip */
BGL_EXPORTED_DEF obj_t BGl_stringzd2skipzd2zz__r4_strings_6_7z00(obj_t BgL_stringz00_156, obj_t BgL_rsz00_157, obj_t BgL_startz00_158)
{
{ /* Ieee/string.scm 1053 */
{ 
obj_t BgL_sz00_1633;obj_t BgL_predz00_1634;obj_t BgL_sz00_1620;obj_t BgL_cz00_1621;
if(
CHARP(BgL_rsz00_157))
{ /* Ieee/string.scm 1077 */
BgL_sz00_1620 = BgL_stringz00_156; 
BgL_cz00_1621 = BgL_rsz00_157; 
BgL_zc3z04anonymousza31649ze3z87_1622:
{ /* Ieee/string.scm 1056 */
long BgL_lenz00_1623;
BgL_lenz00_1623 = 
STRING_LENGTH(BgL_sz00_1620); 
{ 
obj_t BgL_iz00_1625;
BgL_iz00_1625 = BgL_startz00_158; 
BgL_zc3z04anonymousza31650ze3z87_1626:
{ /* Ieee/string.scm 1059 */
bool_t BgL_test5057z00_9130;
{ /* Ieee/string.scm 1059 */
long BgL_n1z00_3520;
{ /* Ieee/string.scm 1059 */
obj_t BgL_tmpz00_9131;
if(
INTEGERP(BgL_iz00_1625))
{ /* Ieee/string.scm 1059 */
BgL_tmpz00_9131 = BgL_iz00_1625
; }  else 
{ 
obj_t BgL_auxz00_9134;
BgL_auxz00_9134 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)44780)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1625); 
FAILURE(BgL_auxz00_9134,BFALSE,BFALSE);} 
BgL_n1z00_3520 = 
(long)CINT(BgL_tmpz00_9131); } 
BgL_test5057z00_9130 = 
(BgL_n1z00_3520>=BgL_lenz00_1623); } 
if(BgL_test5057z00_9130)
{ /* Ieee/string.scm 1059 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1061 */
bool_t BgL_test5059z00_9140;
{ /* Ieee/string.scm 1061 */
unsigned char BgL_char2z00_3527;
BgL_char2z00_3527 = 
CCHAR(BgL_cz00_1621); 
{ /* Ieee/string.scm 1061 */
unsigned char BgL_tmpz00_9142;
{ /* Ieee/string.scm 1061 */
long BgL_kz00_3524;
{ /* Ieee/string.scm 1061 */
obj_t BgL_tmpz00_9143;
if(
INTEGERP(BgL_iz00_1625))
{ /* Ieee/string.scm 1061 */
BgL_tmpz00_9143 = BgL_iz00_1625
; }  else 
{ 
obj_t BgL_auxz00_9146;
BgL_auxz00_9146 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)44827)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1625); 
FAILURE(BgL_auxz00_9146,BFALSE,BFALSE);} 
BgL_kz00_3524 = 
(long)CINT(BgL_tmpz00_9143); } 
{ /* Ieee/string.scm 339 */
long BgL_l3141z00_5116;
BgL_l3141z00_5116 = 
STRING_LENGTH(BgL_sz00_1620); 
if(
BOUND_CHECK(BgL_kz00_3524, BgL_l3141z00_5116))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_9142 = 
STRING_REF(BgL_sz00_1620, BgL_kz00_3524)
; }  else 
{ 
obj_t BgL_auxz00_9155;
BgL_auxz00_9155 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_sz00_1620, 
(int)(BgL_l3141z00_5116), 
(int)(BgL_kz00_3524)); 
FAILURE(BgL_auxz00_9155,BFALSE,BFALSE);} } } 
BgL_test5059z00_9140 = 
(BgL_tmpz00_9142==BgL_char2z00_3527); } } 
if(BgL_test5059z00_9140)
{ 
obj_t BgL_iz00_9162;
{ 
obj_t BgL_tmpz00_9163;
if(
INTEGERP(BgL_iz00_1625))
{ /* Ieee/string.scm 1062 */
BgL_tmpz00_9163 = BgL_iz00_1625
; }  else 
{ 
obj_t BgL_auxz00_9166;
BgL_auxz00_9166 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)44846)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1625); 
FAILURE(BgL_auxz00_9166,BFALSE,BFALSE);} 
BgL_iz00_9162 = 
ADDFX(BgL_tmpz00_9163, 
BINT(((long)1))); } 
BgL_iz00_1625 = BgL_iz00_9162; 
goto BgL_zc3z04anonymousza31650ze3z87_1626;}  else 
{ /* Ieee/string.scm 1061 */
return BgL_iz00_1625;} } } } } }  else 
{ /* Ieee/string.scm 1077 */
if(
PROCEDUREP(BgL_rsz00_157))
{ /* Ieee/string.scm 1079 */
BgL_sz00_1633 = BgL_stringz00_156; 
BgL_predz00_1634 = BgL_rsz00_157; 
{ /* Ieee/string.scm 1066 */
long BgL_lenz00_1636;
BgL_lenz00_1636 = 
STRING_LENGTH(BgL_sz00_1633); 
{ 
obj_t BgL_iz00_1638;
BgL_iz00_1638 = BgL_startz00_158; 
BgL_zc3z04anonymousza31658ze3z87_1639:
{ /* Ieee/string.scm 1069 */
bool_t BgL_test5064z00_9175;
{ /* Ieee/string.scm 1069 */
long BgL_n1z00_3533;
{ /* Ieee/string.scm 1069 */
obj_t BgL_tmpz00_9176;
if(
INTEGERP(BgL_iz00_1638))
{ /* Ieee/string.scm 1069 */
BgL_tmpz00_9176 = BgL_iz00_1638
; }  else 
{ 
obj_t BgL_auxz00_9179;
BgL_auxz00_9179 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)45000)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1638); 
FAILURE(BgL_auxz00_9179,BFALSE,BFALSE);} 
BgL_n1z00_3533 = 
(long)CINT(BgL_tmpz00_9176); } 
BgL_test5064z00_9175 = 
(BgL_n1z00_3533>=BgL_lenz00_1636); } 
if(BgL_test5064z00_9175)
{ /* Ieee/string.scm 1069 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1071 */
bool_t BgL_test5066z00_9185;
{ /* Ieee/string.scm 1071 */
unsigned char BgL_arg1663z00_1644;
{ /* Ieee/string.scm 1071 */
long BgL_kz00_3537;
{ /* Ieee/string.scm 1071 */
obj_t BgL_tmpz00_9186;
if(
INTEGERP(BgL_iz00_1638))
{ /* Ieee/string.scm 1071 */
BgL_tmpz00_9186 = BgL_iz00_1638
; }  else 
{ 
obj_t BgL_auxz00_9189;
BgL_auxz00_9189 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)45045)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1638); 
FAILURE(BgL_auxz00_9189,BFALSE,BFALSE);} 
BgL_kz00_3537 = 
(long)CINT(BgL_tmpz00_9186); } 
{ /* Ieee/string.scm 339 */
long BgL_l3145z00_5120;
BgL_l3145z00_5120 = 
STRING_LENGTH(BgL_sz00_1633); 
if(
BOUND_CHECK(BgL_kz00_3537, BgL_l3145z00_5120))
{ /* Ieee/string.scm 339 */
BgL_arg1663z00_1644 = 
STRING_REF(BgL_sz00_1633, BgL_kz00_3537); }  else 
{ 
obj_t BgL_auxz00_9198;
BgL_auxz00_9198 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_sz00_1633, 
(int)(BgL_l3145z00_5120), 
(int)(BgL_kz00_3537)); 
FAILURE(BgL_auxz00_9198,BFALSE,BFALSE);} } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_1634, ((long)1)))
{ /* Ieee/string.scm 1071 */
BgL_test5066z00_9185 = 
CBOOL(
PROCEDURE_ENTRY(BgL_predz00_1634)(BgL_predz00_1634, 
BCHAR(BgL_arg1663z00_1644), BEOA))
; }  else 
{ /* Ieee/string.scm 1071 */
FAILURE(BGl_string4365z00zz__r4_strings_6_7z00,BGl_list4397z00zz__r4_strings_6_7z00,BgL_predz00_1634);} } 
if(BgL_test5066z00_9185)
{ /* Ieee/string.scm 1072 */
long BgL_arg1662z00_1643;
{ /* Ieee/string.scm 1072 */
long BgL_za71za7_3539;
{ /* Ieee/string.scm 1072 */
obj_t BgL_tmpz00_9213;
if(
INTEGERP(BgL_iz00_1638))
{ /* Ieee/string.scm 1072 */
BgL_tmpz00_9213 = BgL_iz00_1638
; }  else 
{ 
obj_t BgL_auxz00_9216;
BgL_auxz00_9216 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)45062)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1638); 
FAILURE(BgL_auxz00_9216,BFALSE,BFALSE);} 
BgL_za71za7_3539 = 
(long)CINT(BgL_tmpz00_9213); } 
BgL_arg1662z00_1643 = 
(BgL_za71za7_3539+((long)1)); } 
{ 
obj_t BgL_iz00_9222;
BgL_iz00_9222 = 
BINT(BgL_arg1662z00_1643); 
BgL_iz00_1638 = BgL_iz00_9222; 
goto BgL_zc3z04anonymousza31658ze3z87_1639;} }  else 
{ /* Ieee/string.scm 1071 */
return BgL_iz00_1638;} } } } } }  else 
{ /* Ieee/string.scm 1079 */
if(
STRINGP(BgL_rsz00_157))
{ /* Ieee/string.scm 1081 */
if(
(
STRING_LENGTH(BgL_rsz00_157)==((long)1)))
{ 
obj_t BgL_cz00_9230;obj_t BgL_sz00_9229;
BgL_sz00_9229 = BgL_stringz00_156; 
{ /* Ieee/string.scm 327 */
long BgL_l3149z00_5124;
BgL_l3149z00_5124 = 
STRING_LENGTH(BgL_rsz00_157); 
if(
BOUND_CHECK(((long)0), BgL_l3149z00_5124))
{ /* Ieee/string.scm 327 */
BgL_cz00_9230 = 
BCHAR(
STRING_REF(BgL_rsz00_157, ((long)0))); }  else 
{ 
obj_t BgL_auxz00_9236;
BgL_auxz00_9236 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_rsz00_157, 
(int)(BgL_l3149z00_5124), 
(int)(((long)0))); 
FAILURE(BgL_auxz00_9236,BFALSE,BFALSE);} } 
BgL_cz00_1621 = BgL_cz00_9230; 
BgL_sz00_1620 = BgL_sz00_9229; 
goto BgL_zc3z04anonymousza31649ze3z87_1622;}  else 
{ /* Ieee/string.scm 1083 */
if(
(
STRING_LENGTH(BgL_rsz00_157)<=((long)10)))
{ /* Ieee/string.scm 1086 */
long BgL_lenz00_1575;long BgL_lenjz00_1576;
BgL_lenz00_1575 = 
STRING_LENGTH(BgL_stringz00_156); 
BgL_lenjz00_1576 = 
STRING_LENGTH(BgL_rsz00_157); 
{ 
obj_t BgL_iz00_1578;
BgL_iz00_1578 = BgL_startz00_158; 
BgL_zc3z04anonymousza31616ze3z87_1579:
{ /* Ieee/string.scm 1089 */
bool_t BgL_test5075z00_9247;
{ /* Ieee/string.scm 1089 */
long BgL_n1z00_3558;
{ /* Ieee/string.scm 1089 */
obj_t BgL_tmpz00_9248;
if(
INTEGERP(BgL_iz00_1578))
{ /* Ieee/string.scm 1089 */
BgL_tmpz00_9248 = BgL_iz00_1578
; }  else 
{ 
obj_t BgL_auxz00_9251;
BgL_auxz00_9251 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)45534)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1578); 
FAILURE(BgL_auxz00_9251,BFALSE,BFALSE);} 
BgL_n1z00_3558 = 
(long)CINT(BgL_tmpz00_9248); } 
BgL_test5075z00_9247 = 
(BgL_n1z00_3558>=BgL_lenz00_1575); } 
if(BgL_test5075z00_9247)
{ /* Ieee/string.scm 1089 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1091 */
unsigned char BgL_cz00_1581;
{ /* Ieee/string.scm 1091 */
long BgL_kz00_3562;
{ /* Ieee/string.scm 1091 */
obj_t BgL_tmpz00_9257;
if(
INTEGERP(BgL_iz00_1578))
{ /* Ieee/string.scm 1091 */
BgL_tmpz00_9257 = BgL_iz00_1578
; }  else 
{ 
obj_t BgL_auxz00_9260;
BgL_auxz00_9260 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)45578)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1578); 
FAILURE(BgL_auxz00_9260,BFALSE,BFALSE);} 
BgL_kz00_3562 = 
(long)CINT(BgL_tmpz00_9257); } 
{ /* Ieee/string.scm 327 */
long BgL_l3153z00_5128;
BgL_l3153z00_5128 = 
STRING_LENGTH(BgL_stringz00_156); 
if(
BOUND_CHECK(BgL_kz00_3562, BgL_l3153z00_5128))
{ /* Ieee/string.scm 327 */
BgL_cz00_1581 = 
STRING_REF(BgL_stringz00_156, BgL_kz00_3562); }  else 
{ 
obj_t BgL_auxz00_9269;
BgL_auxz00_9269 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_156, 
(int)(BgL_l3153z00_5128), 
(int)(BgL_kz00_3562)); 
FAILURE(BgL_auxz00_9269,BFALSE,BFALSE);} } } 
{ 
long BgL_jz00_1583;
BgL_jz00_1583 = ((long)0); 
BgL_zc3z04anonymousza31618ze3z87_1584:
if(
(BgL_jz00_1583==BgL_lenjz00_1576))
{ /* Ieee/string.scm 1093 */
return BgL_iz00_1578;}  else 
{ /* Ieee/string.scm 1095 */
bool_t BgL_test5080z00_9277;
{ /* Ieee/string.scm 1095 */
unsigned char BgL_tmpz00_9278;
{ /* Ieee/string.scm 339 */
long BgL_l3157z00_5132;
BgL_l3157z00_5132 = 
STRING_LENGTH(
((obj_t)BgL_rsz00_157)); 
if(
BOUND_CHECK(BgL_jz00_1583, BgL_l3157z00_5132))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_9278 = 
STRING_REF(
((obj_t)BgL_rsz00_157), BgL_jz00_1583)
; }  else 
{ 
obj_t BgL_auxz00_9285;
BgL_auxz00_9285 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, 
((obj_t)BgL_rsz00_157), 
(int)(BgL_l3157z00_5132), 
(int)(BgL_jz00_1583)); 
FAILURE(BgL_auxz00_9285,BFALSE,BFALSE);} } 
BgL_test5080z00_9277 = 
(BgL_cz00_1581==BgL_tmpz00_9278); } 
if(BgL_test5080z00_9277)
{ 
obj_t BgL_iz00_9293;
{ 
obj_t BgL_tmpz00_9294;
if(
INTEGERP(BgL_iz00_1578))
{ /* Ieee/string.scm 1096 */
BgL_tmpz00_9294 = BgL_iz00_1578
; }  else 
{ 
obj_t BgL_auxz00_9297;
BgL_auxz00_9297 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)45704)), BGl_string4388z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1578); 
FAILURE(BgL_auxz00_9297,BFALSE,BFALSE);} 
BgL_iz00_9293 = 
ADDFX(BgL_tmpz00_9294, 
BINT(((long)1))); } 
BgL_iz00_1578 = BgL_iz00_9293; 
goto BgL_zc3z04anonymousza31616ze3z87_1579;}  else 
{ 
long BgL_jz00_9303;
BgL_jz00_9303 = 
(BgL_jz00_1583+((long)1)); 
BgL_jz00_1583 = BgL_jz00_9303; 
goto BgL_zc3z04anonymousza31618ze3z87_1584;} } } } } } }  else 
{ /* Ieee/string.scm 1099 */
obj_t BgL_tz00_1593;long BgL_lenz00_1594;
BgL_tz00_1593 = 
make_string(((long)256), ((unsigned char)'n')); 
BgL_lenz00_1594 = 
STRING_LENGTH(BgL_stringz00_156); 
{ /* Ieee/string.scm 1101 */
long BgL_g1037z00_1595;
BgL_g1037z00_1595 = 
(
STRING_LENGTH(BgL_rsz00_157)-((long)1)); 
{ 
long BgL_iz00_1597;
BgL_iz00_1597 = BgL_g1037z00_1595; 
BgL_zc3z04anonymousza31627ze3z87_1598:
if(
(BgL_iz00_1597==((long)-1)))
{ 
obj_t BgL_iz00_1601;
BgL_iz00_1601 = BgL_startz00_158; 
BgL_zc3z04anonymousza31629ze3z87_1602:
{ /* Ieee/string.scm 1105 */
bool_t BgL_test5084z00_9311;
{ /* Ieee/string.scm 1105 */
long BgL_n1z00_3586;
{ /* Ieee/string.scm 1105 */
obj_t BgL_tmpz00_9312;
if(
INTEGERP(BgL_iz00_1601))
{ /* Ieee/string.scm 1105 */
BgL_tmpz00_9312 = BgL_iz00_1601
; }  else 
{ 
obj_t BgL_auxz00_9315;
BgL_auxz00_9315 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)45952)), BGl_string4388z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1601); 
FAILURE(BgL_auxz00_9315,BFALSE,BFALSE);} 
BgL_n1z00_3586 = 
(long)CINT(BgL_tmpz00_9312); } 
BgL_test5084z00_9311 = 
(BgL_n1z00_3586>=BgL_lenz00_1594); } 
if(BgL_test5084z00_9311)
{ /* Ieee/string.scm 1105 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1107 */
bool_t BgL_test5086z00_9321;
{ /* Ieee/string.scm 1107 */
unsigned char BgL_tmpz00_9322;
{ /* Ieee/string.scm 1108 */
long BgL_i3164z00_5139;
{ /* Ieee/string.scm 1108 */
unsigned char BgL_tmpz00_9323;
{ /* Ieee/string.scm 1108 */
long BgL_kz00_3590;
{ /* Ieee/string.scm 1108 */
obj_t BgL_tmpz00_9324;
if(
INTEGERP(BgL_iz00_1601))
{ /* Ieee/string.scm 1108 */
BgL_tmpz00_9324 = BgL_iz00_1601
; }  else 
{ 
obj_t BgL_auxz00_9327;
BgL_auxz00_9327 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)46040)), BGl_string4388z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1601); 
FAILURE(BgL_auxz00_9327,BFALSE,BFALSE);} 
BgL_kz00_3590 = 
(long)CINT(BgL_tmpz00_9324); } 
{ /* Ieee/string.scm 339 */
long BgL_l3161z00_5136;
BgL_l3161z00_5136 = 
STRING_LENGTH(BgL_stringz00_156); 
if(
BOUND_CHECK(BgL_kz00_3590, BgL_l3161z00_5136))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_9323 = 
STRING_REF(BgL_stringz00_156, BgL_kz00_3590)
; }  else 
{ 
obj_t BgL_auxz00_9336;
BgL_auxz00_9336 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_stringz00_156, 
(int)(BgL_l3161z00_5136), 
(int)(BgL_kz00_3590)); 
FAILURE(BgL_auxz00_9336,BFALSE,BFALSE);} } } 
BgL_i3164z00_5139 = 
(BgL_tmpz00_9323); } 
{ /* Ieee/string.scm 327 */
long BgL_l3165z00_5140;
BgL_l3165z00_5140 = 
STRING_LENGTH(BgL_tz00_1593); 
if(
BOUND_CHECK(BgL_i3164z00_5139, BgL_l3165z00_5140))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_9322 = 
STRING_REF(BgL_tz00_1593, BgL_i3164z00_5139)
; }  else 
{ 
obj_t BgL_auxz00_9347;
BgL_auxz00_9347 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_tz00_1593, 
(int)(BgL_l3165z00_5140), 
(int)(BgL_i3164z00_5139)); 
FAILURE(BgL_auxz00_9347,BFALSE,BFALSE);} } } 
BgL_test5086z00_9321 = 
(BgL_tmpz00_9322==((unsigned char)'y')); } 
if(BgL_test5086z00_9321)
{ 
obj_t BgL_iz00_9354;
{ 
obj_t BgL_tmpz00_9355;
if(
INTEGERP(BgL_iz00_1601))
{ /* Ieee/string.scm 1110 */
BgL_tmpz00_9355 = BgL_iz00_1601
; }  else 
{ 
obj_t BgL_auxz00_9358;
BgL_auxz00_9358 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)46068)), BGl_string4388z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_1601); 
FAILURE(BgL_auxz00_9358,BFALSE,BFALSE);} 
BgL_iz00_9354 = 
ADDFX(BgL_tmpz00_9355, 
BINT(((long)1))); } 
BgL_iz00_1601 = BgL_iz00_9354; 
goto BgL_zc3z04anonymousza31629ze3z87_1602;}  else 
{ /* Ieee/string.scm 1107 */
return BgL_iz00_1601;} } } }  else 
{ /* Ieee/string.scm 1102 */
{ /* Ieee/string.scm 1114 */
long BgL_arg1641z00_1613;
{ /* Ieee/string.scm 1114 */
unsigned char BgL_tmpz00_9364;
{ /* Ieee/string.scm 339 */
long BgL_l3169z00_5144;
BgL_l3169z00_5144 = 
STRING_LENGTH(
((obj_t)BgL_rsz00_157)); 
if(
BOUND_CHECK(BgL_iz00_1597, BgL_l3169z00_5144))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_9364 = 
STRING_REF(
((obj_t)BgL_rsz00_157), BgL_iz00_1597)
; }  else 
{ 
obj_t BgL_auxz00_9371;
BgL_auxz00_9371 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, 
((obj_t)BgL_rsz00_157), 
(int)(BgL_l3169z00_5144), 
(int)(BgL_iz00_1597)); 
FAILURE(BgL_auxz00_9371,BFALSE,BFALSE);} } 
BgL_arg1641z00_1613 = 
(BgL_tmpz00_9364); } 
{ /* Ieee/string.scm 345 */
long BgL_l3173z00_5148;
BgL_l3173z00_5148 = 
STRING_LENGTH(BgL_tz00_1593); 
if(
BOUND_CHECK(BgL_arg1641z00_1613, BgL_l3173z00_5148))
{ /* Ieee/string.scm 345 */
STRING_SET(BgL_tz00_1593, BgL_arg1641z00_1613, ((unsigned char)'y')); }  else 
{ 
obj_t BgL_auxz00_9383;
BgL_auxz00_9383 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_tz00_1593, 
(int)(BgL_l3173z00_5148), 
(int)(BgL_arg1641z00_1613)); 
FAILURE(BgL_auxz00_9383,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_9389;
BgL_iz00_9389 = 
(BgL_iz00_1597-((long)1)); 
BgL_iz00_1597 = BgL_iz00_9389; 
goto BgL_zc3z04anonymousza31627ze3z87_1598;} } } } } } }  else 
{ /* Ieee/string.scm 1081 */
return 
BGl_errorz00zz__errorz00(BGl_string4395z00zz__r4_strings_6_7z00, BGl_string4389z00zz__r4_strings_6_7z00, BgL_rsz00_157);} } } } } 

}



/* _string-skip-right */
obj_t BGl__stringzd2skipzd2rightz00zz__r4_strings_6_7z00(obj_t BgL_env1157z00_165, obj_t BgL_opt1156z00_164)
{
{ /* Ieee/string.scm 1120 */
{ /* Ieee/string.scm 1120 */
obj_t BgL_sz00_1648;obj_t BgL_g1158z00_1649;
BgL_sz00_1648 = 
VECTOR_REF(BgL_opt1156z00_164,((long)0)); 
BgL_g1158z00_1649 = 
VECTOR_REF(BgL_opt1156z00_164,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1156z00_164)) { case ((long)2) : 

{ /* Ieee/string.scm 1120 */
long BgL_startz00_1653;
{ /* Ieee/string.scm 1120 */
obj_t BgL_stringz00_3612;
if(
STRINGP(BgL_sz00_1648))
{ /* Ieee/string.scm 1120 */
BgL_stringz00_3612 = BgL_sz00_1648; }  else 
{ 
obj_t BgL_auxz00_9396;
BgL_auxz00_9396 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)46477)), BGl_string4402z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_sz00_1648); 
FAILURE(BgL_auxz00_9396,BFALSE,BFALSE);} 
BgL_startz00_1653 = 
STRING_LENGTH(BgL_stringz00_3612); } 
{ /* Ieee/string.scm 1120 */

{ /* Ieee/string.scm 1120 */
obj_t BgL_auxz00_9401;
if(
STRINGP(BgL_sz00_1648))
{ /* Ieee/string.scm 1120 */
BgL_auxz00_9401 = BgL_sz00_1648
; }  else 
{ 
obj_t BgL_auxz00_9404;
BgL_auxz00_9404 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)46427)), BGl_string4402z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_sz00_1648); 
FAILURE(BgL_auxz00_9404,BFALSE,BFALSE);} 
return 
BGl_stringzd2skipzd2rightz00zz__r4_strings_6_7z00(BgL_auxz00_9401, BgL_g1158z00_1649, 
BINT(BgL_startz00_1653));} } } break;case ((long)3) : 

{ /* Ieee/string.scm 1120 */
obj_t BgL_startz00_1654;
BgL_startz00_1654 = 
VECTOR_REF(BgL_opt1156z00_164,((long)2)); 
{ /* Ieee/string.scm 1120 */

{ /* Ieee/string.scm 1120 */
obj_t BgL_auxz00_9411;
if(
STRINGP(BgL_sz00_1648))
{ /* Ieee/string.scm 1120 */
BgL_auxz00_9411 = BgL_sz00_1648
; }  else 
{ 
obj_t BgL_auxz00_9414;
BgL_auxz00_9414 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)46427)), BGl_string4402z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_sz00_1648); 
FAILURE(BgL_auxz00_9414,BFALSE,BFALSE);} 
return 
BGl_stringzd2skipzd2rightz00zz__r4_strings_6_7z00(BgL_auxz00_9411, BgL_g1158z00_1649, BgL_startz00_1654);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4400z00zz__r4_strings_6_7z00, BGl_string4321z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1156z00_164)));} } } } 

}



/* string-skip-right */
BGL_EXPORTED_DEF obj_t BGl_stringzd2skipzd2rightz00zz__r4_strings_6_7z00(obj_t BgL_sz00_161, obj_t BgL_rsz00_162, obj_t BgL_startz00_163)
{
{ /* Ieee/string.scm 1120 */
{ 
obj_t BgL_sz00_1729;obj_t BgL_predz00_1730;obj_t BgL_sz00_1716;obj_t BgL_cz00_1717;
{ /* Ieee/string.scm 1143 */
bool_t BgL_test5096z00_9424;
{ /* Ieee/string.scm 1143 */
long BgL_n1z00_3637;
{ /* Ieee/string.scm 1143 */
obj_t BgL_tmpz00_9425;
if(
INTEGERP(BgL_startz00_163))
{ /* Ieee/string.scm 1143 */
BgL_tmpz00_9425 = BgL_startz00_163
; }  else 
{ 
obj_t BgL_auxz00_9428;
BgL_auxz00_9428 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)46905)), BGl_string4401z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_163); 
FAILURE(BgL_auxz00_9428,BFALSE,BFALSE);} 
BgL_n1z00_3637 = 
(long)CINT(BgL_tmpz00_9425); } 
BgL_test5096z00_9424 = 
(BgL_n1z00_3637>
STRING_LENGTH(BgL_sz00_161)); } 
if(BgL_test5096z00_9424)
{ /* Ieee/string.scm 1143 */
return 
BGl_errorz00zz__errorz00(BGl_string4386z00zz__r4_strings_6_7z00, BGl_string4393z00zz__r4_strings_6_7z00, BgL_startz00_163);}  else 
{ /* Ieee/string.scm 1143 */
if(
CHARP(BgL_rsz00_162))
{ /* Ieee/string.scm 1145 */
BgL_sz00_1716 = BgL_sz00_161; 
BgL_cz00_1717 = BgL_rsz00_162; 
BgL_zc3z04anonymousza31721ze3z87_1718:
{ 
long BgL_iz00_1721;
{ /* Ieee/string.scm 1123 */
long BgL_za71za7_3614;
{ /* Ieee/string.scm 1123 */
obj_t BgL_tmpz00_9457;
if(
INTEGERP(BgL_startz00_163))
{ /* Ieee/string.scm 1123 */
BgL_tmpz00_9457 = BgL_startz00_163
; }  else 
{ 
obj_t BgL_auxz00_9460;
BgL_auxz00_9460 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)46560)), BGl_string4403z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_163); 
FAILURE(BgL_auxz00_9460,BFALSE,BFALSE);} 
BgL_za71za7_3614 = 
(long)CINT(BgL_tmpz00_9457); } 
BgL_iz00_1721 = 
(BgL_za71za7_3614-((long)1)); } 
BgL_zc3z04anonymousza31722ze3z87_1722:
if(
(BgL_iz00_1721<((long)0)))
{ /* Ieee/string.scm 1125 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1127 */
bool_t BgL_test5100z00_9440;
{ /* Ieee/string.scm 1127 */
unsigned char BgL_char2z00_3622;
BgL_char2z00_3622 = 
CCHAR(BgL_cz00_1717); 
{ /* Ieee/string.scm 1127 */
unsigned char BgL_tmpz00_9442;
{ /* Ieee/string.scm 339 */
long BgL_l3177z00_5152;
BgL_l3177z00_5152 = 
STRING_LENGTH(BgL_sz00_1716); 
if(
BOUND_CHECK(BgL_iz00_1721, BgL_l3177z00_5152))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_9442 = 
STRING_REF(BgL_sz00_1716, BgL_iz00_1721)
; }  else 
{ 
obj_t BgL_auxz00_9447;
BgL_auxz00_9447 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_sz00_1716, 
(int)(BgL_l3177z00_5152), 
(int)(BgL_iz00_1721)); 
FAILURE(BgL_auxz00_9447,BFALSE,BFALSE);} } 
BgL_test5100z00_9440 = 
(BgL_tmpz00_9442==BgL_char2z00_3622); } } 
if(BgL_test5100z00_9440)
{ 
long BgL_iz00_9454;
BgL_iz00_9454 = 
(BgL_iz00_1721-((long)1)); 
BgL_iz00_1721 = BgL_iz00_9454; 
goto BgL_zc3z04anonymousza31722ze3z87_1722;}  else 
{ /* Ieee/string.scm 1127 */
return 
BINT(BgL_iz00_1721);} } } }  else 
{ /* Ieee/string.scm 1145 */
if(
PROCEDUREP(BgL_rsz00_162))
{ /* Ieee/string.scm 1147 */
BgL_sz00_1729 = BgL_sz00_161; 
BgL_predz00_1730 = BgL_rsz00_162; 
{ /* Ieee/string.scm 1133 */
long BgL_g1040z00_1732;
{ /* Ieee/string.scm 1133 */
long BgL_za71za7_3626;
{ /* Ieee/string.scm 1133 */
obj_t BgL_tmpz00_9468;
if(
INTEGERP(BgL_startz00_163))
{ /* Ieee/string.scm 1133 */
BgL_tmpz00_9468 = BgL_startz00_163
; }  else 
{ 
obj_t BgL_auxz00_9471;
BgL_auxz00_9471 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)46755)), BGl_string4404z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_163); 
FAILURE(BgL_auxz00_9471,BFALSE,BFALSE);} 
BgL_za71za7_3626 = 
(long)CINT(BgL_tmpz00_9468); } 
BgL_g1040z00_1732 = 
(BgL_za71za7_3626-((long)1)); } 
{ 
long BgL_iz00_1734;
BgL_iz00_1734 = BgL_g1040z00_1732; 
BgL_zc3z04anonymousza31730ze3z87_1735:
if(
(BgL_iz00_1734<((long)0)))
{ /* Ieee/string.scm 1135 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1137 */
bool_t BgL_test5106z00_9479;
{ /* Ieee/string.scm 1137 */
unsigned char BgL_arg1736z00_1740;
{ /* Ieee/string.scm 339 */
long BgL_l3181z00_5156;
BgL_l3181z00_5156 = 
STRING_LENGTH(BgL_sz00_1729); 
if(
BOUND_CHECK(BgL_iz00_1734, BgL_l3181z00_5156))
{ /* Ieee/string.scm 339 */
BgL_arg1736z00_1740 = 
STRING_REF(BgL_sz00_1729, BgL_iz00_1734); }  else 
{ 
obj_t BgL_auxz00_9484;
BgL_auxz00_9484 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_sz00_1729, 
(int)(BgL_l3181z00_5156), 
(int)(BgL_iz00_1734)); 
FAILURE(BgL_auxz00_9484,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_predz00_1730, ((long)1)))
{ /* Ieee/string.scm 1137 */
BgL_test5106z00_9479 = 
CBOOL(
PROCEDURE_ENTRY(BgL_predz00_1730)(BgL_predz00_1730, 
BCHAR(BgL_arg1736z00_1740), BEOA))
; }  else 
{ /* Ieee/string.scm 1137 */
FAILURE(BGl_string4365z00zz__r4_strings_6_7z00,BGl_list4405z00zz__r4_strings_6_7z00,BgL_predz00_1730);} } 
if(BgL_test5106z00_9479)
{ 
long BgL_iz00_9499;
BgL_iz00_9499 = 
(BgL_iz00_1734-((long)1)); 
BgL_iz00_1734 = BgL_iz00_9499; 
goto BgL_zc3z04anonymousza31730ze3z87_1735;}  else 
{ /* Ieee/string.scm 1137 */
return 
BINT(BgL_iz00_1734);} } } } }  else 
{ /* Ieee/string.scm 1147 */
if(
STRINGP(BgL_rsz00_162))
{ /* Ieee/string.scm 1149 */
if(
(
STRING_LENGTH(BgL_rsz00_162)==((long)1)))
{ 
obj_t BgL_cz00_9508;obj_t BgL_sz00_9507;
BgL_sz00_9507 = BgL_sz00_161; 
{ /* Ieee/string.scm 327 */
long BgL_l3185z00_5160;
BgL_l3185z00_5160 = 
STRING_LENGTH(BgL_rsz00_162); 
if(
BOUND_CHECK(((long)0), BgL_l3185z00_5160))
{ /* Ieee/string.scm 327 */
BgL_cz00_9508 = 
BCHAR(
STRING_REF(BgL_rsz00_162, ((long)0))); }  else 
{ 
obj_t BgL_auxz00_9514;
BgL_auxz00_9514 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_rsz00_162, 
(int)(BgL_l3185z00_5160), 
(int)(((long)0))); 
FAILURE(BgL_auxz00_9514,BFALSE,BFALSE);} } 
BgL_cz00_1717 = BgL_cz00_9508; 
BgL_sz00_1716 = BgL_sz00_9507; 
goto BgL_zc3z04anonymousza31721ze3z87_1718;}  else 
{ /* Ieee/string.scm 1151 */
if(
(
STRING_LENGTH(BgL_rsz00_162)<=((long)10)))
{ /* Ieee/string.scm 1154 */
long BgL_lenjz00_1669;
BgL_lenjz00_1669 = 
STRING_LENGTH(BgL_rsz00_162); 
{ 
long BgL_iz00_1672;
{ /* Ieee/string.scm 1156 */
long BgL_za71za7_3657;
{ /* Ieee/string.scm 1156 */
obj_t BgL_tmpz00_9559;
if(
INTEGERP(BgL_startz00_163))
{ /* Ieee/string.scm 1156 */
BgL_tmpz00_9559 = BgL_startz00_163
; }  else 
{ 
obj_t BgL_auxz00_9562;
BgL_auxz00_9562 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)47385)), BGl_string4401z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_163); 
FAILURE(BgL_auxz00_9562,BFALSE,BFALSE);} 
BgL_za71za7_3657 = 
(long)CINT(BgL_tmpz00_9559); } 
BgL_iz00_1672 = 
(BgL_za71za7_3657-((long)1)); } 
BgL_zc3z04anonymousza31685ze3z87_1673:
if(
(BgL_iz00_1672<((long)0)))
{ /* Ieee/string.scm 1157 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1159 */
unsigned char BgL_cz00_1675;
{ /* Ieee/string.scm 327 */
long BgL_l3189z00_5164;
BgL_l3189z00_5164 = 
STRING_LENGTH(BgL_sz00_161); 
if(
BOUND_CHECK(BgL_iz00_1672, BgL_l3189z00_5164))
{ /* Ieee/string.scm 327 */
BgL_cz00_1675 = 
STRING_REF(BgL_sz00_161, BgL_iz00_1672); }  else 
{ 
obj_t BgL_auxz00_9530;
BgL_auxz00_9530 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_sz00_161, 
(int)(BgL_l3189z00_5164), 
(int)(BgL_iz00_1672)); 
FAILURE(BgL_auxz00_9530,BFALSE,BFALSE);} } 
{ 
long BgL_jz00_1677;
BgL_jz00_1677 = ((long)0); 
BgL_zc3z04anonymousza31687ze3z87_1678:
if(
(BgL_jz00_1677==BgL_lenjz00_1669))
{ /* Ieee/string.scm 1161 */
return 
BINT(BgL_iz00_1672);}  else 
{ /* Ieee/string.scm 1163 */
bool_t BgL_test5116z00_9539;
{ /* Ieee/string.scm 1163 */
unsigned char BgL_tmpz00_9540;
{ /* Ieee/string.scm 339 */
long BgL_l3193z00_5168;
BgL_l3193z00_5168 = 
STRING_LENGTH(
((obj_t)BgL_rsz00_162)); 
if(
BOUND_CHECK(BgL_jz00_1677, BgL_l3193z00_5168))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_9540 = 
STRING_REF(
((obj_t)BgL_rsz00_162), BgL_jz00_1677)
; }  else 
{ 
obj_t BgL_auxz00_9547;
BgL_auxz00_9547 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, 
((obj_t)BgL_rsz00_162), 
(int)(BgL_l3193z00_5168), 
(int)(BgL_jz00_1677)); 
FAILURE(BgL_auxz00_9547,BFALSE,BFALSE);} } 
BgL_test5116z00_9539 = 
(BgL_cz00_1675==BgL_tmpz00_9540); } 
if(BgL_test5116z00_9539)
{ 
long BgL_iz00_9555;
BgL_iz00_9555 = 
(BgL_iz00_1672-((long)1)); 
BgL_iz00_1672 = BgL_iz00_9555; 
goto BgL_zc3z04anonymousza31685ze3z87_1673;}  else 
{ 
long BgL_jz00_9557;
BgL_jz00_9557 = 
(BgL_jz00_1677+((long)1)); 
BgL_jz00_1677 = BgL_jz00_9557; 
goto BgL_zc3z04anonymousza31687ze3z87_1678;} } } } } }  else 
{ /* Ieee/string.scm 1167 */
obj_t BgL_tz00_1687;
BgL_tz00_1687 = 
make_string(((long)256), ((unsigned char)'n')); 
{ /* Ieee/string.scm 1169 */
long BgL_g1042z00_1689;
BgL_g1042z00_1689 = 
(
STRING_LENGTH(BgL_rsz00_162)-((long)1)); 
{ 
long BgL_iz00_1691;
BgL_iz00_1691 = BgL_g1042z00_1689; 
BgL_zc3z04anonymousza31697ze3z87_1692:
if(
(BgL_iz00_1691==((long)-1)))
{ 
long BgL_iz00_1696;
{ /* Ieee/string.scm 1171 */
long BgL_za71za7_3686;
{ /* Ieee/string.scm 1171 */
obj_t BgL_tmpz00_9603;
if(
INTEGERP(BgL_startz00_163))
{ /* Ieee/string.scm 1171 */
BgL_tmpz00_9603 = BgL_startz00_163
; }  else 
{ 
obj_t BgL_auxz00_9606;
BgL_auxz00_9606 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)47786)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_163); 
FAILURE(BgL_auxz00_9606,BFALSE,BFALSE);} 
BgL_za71za7_3686 = 
(long)CINT(BgL_tmpz00_9603); } 
BgL_iz00_1696 = 
(BgL_za71za7_3686-((long)1)); } 
BgL_zc3z04anonymousza31699ze3z87_1697:
if(
(BgL_iz00_1696<((long)0)))
{ /* Ieee/string.scm 1173 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1175 */
bool_t BgL_test5121z00_9575;
{ /* Ieee/string.scm 1175 */
unsigned char BgL_tmpz00_9576;
{ /* Ieee/string.scm 1176 */
long BgL_i3200z00_5175;
{ /* Ieee/string.scm 1176 */
unsigned char BgL_tmpz00_9577;
{ /* Ieee/string.scm 339 */
long BgL_l3197z00_5172;
BgL_l3197z00_5172 = 
STRING_LENGTH(BgL_sz00_161); 
if(
BOUND_CHECK(BgL_iz00_1696, BgL_l3197z00_5172))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_9577 = 
STRING_REF(BgL_sz00_161, BgL_iz00_1696)
; }  else 
{ 
obj_t BgL_auxz00_9582;
BgL_auxz00_9582 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_sz00_161, 
(int)(BgL_l3197z00_5172), 
(int)(BgL_iz00_1696)); 
FAILURE(BgL_auxz00_9582,BFALSE,BFALSE);} } 
BgL_i3200z00_5175 = 
(BgL_tmpz00_9577); } 
{ /* Ieee/string.scm 327 */
long BgL_l3201z00_5176;
BgL_l3201z00_5176 = 
STRING_LENGTH(BgL_tz00_1687); 
if(
BOUND_CHECK(BgL_i3200z00_5175, BgL_l3201z00_5176))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_9576 = 
STRING_REF(BgL_tz00_1687, BgL_i3200z00_5175)
; }  else 
{ 
obj_t BgL_auxz00_9593;
BgL_auxz00_9593 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_tz00_1687, 
(int)(BgL_l3201z00_5176), 
(int)(BgL_i3200z00_5175)); 
FAILURE(BgL_auxz00_9593,BFALSE,BFALSE);} } } 
BgL_test5121z00_9575 = 
(BgL_tmpz00_9576==((unsigned char)'y')); } 
if(BgL_test5121z00_9575)
{ 
long BgL_iz00_9600;
BgL_iz00_9600 = 
(BgL_iz00_1696-((long)1)); 
BgL_iz00_1696 = BgL_iz00_9600; 
goto BgL_zc3z04anonymousza31699ze3z87_1697;}  else 
{ /* Ieee/string.scm 1175 */
return 
BINT(BgL_iz00_1696);} } }  else 
{ /* Ieee/string.scm 1170 */
{ /* Ieee/string.scm 1182 */
long BgL_arg1711z00_1708;
{ /* Ieee/string.scm 1182 */
unsigned char BgL_tmpz00_9612;
{ /* Ieee/string.scm 339 */
long BgL_l3205z00_5180;
BgL_l3205z00_5180 = 
STRING_LENGTH(
((obj_t)BgL_rsz00_162)); 
if(
BOUND_CHECK(BgL_iz00_1691, BgL_l3205z00_5180))
{ /* Ieee/string.scm 339 */
BgL_tmpz00_9612 = 
STRING_REF(
((obj_t)BgL_rsz00_162), BgL_iz00_1691)
; }  else 
{ 
obj_t BgL_auxz00_9619;
BgL_auxz00_9619 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, 
((obj_t)BgL_rsz00_162), 
(int)(BgL_l3205z00_5180), 
(int)(BgL_iz00_1691)); 
FAILURE(BgL_auxz00_9619,BFALSE,BFALSE);} } 
BgL_arg1711z00_1708 = 
(BgL_tmpz00_9612); } 
{ /* Ieee/string.scm 345 */
long BgL_l3209z00_5184;
BgL_l3209z00_5184 = 
STRING_LENGTH(BgL_tz00_1687); 
if(
BOUND_CHECK(BgL_arg1711z00_1708, BgL_l3209z00_5184))
{ /* Ieee/string.scm 345 */
STRING_SET(BgL_tz00_1687, BgL_arg1711z00_1708, ((unsigned char)'y')); }  else 
{ 
obj_t BgL_auxz00_9631;
BgL_auxz00_9631 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)17002)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_tz00_1687, 
(int)(BgL_l3209z00_5184), 
(int)(BgL_arg1711z00_1708)); 
FAILURE(BgL_auxz00_9631,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_9637;
BgL_iz00_9637 = 
(BgL_iz00_1691-((long)1)); 
BgL_iz00_1691 = BgL_iz00_9637; 
goto BgL_zc3z04anonymousza31697ze3z87_1692;} } } } } } }  else 
{ /* Ieee/string.scm 1149 */
return 
BGl_errorz00zz__errorz00(BGl_string4391z00zz__r4_strings_6_7z00, BGl_string4389z00zz__r4_strings_6_7z00, BgL_rsz00_162);} } } } } } } 

}



/* _string-prefix-length */
obj_t BGl__stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(obj_t BgL_env1162z00_183, obj_t BgL_opt1161z00_182)
{
{ /* Ieee/string.scm 1216 */
{ /* Ieee/string.scm 1216 */
obj_t BgL_s1z00_1752;obj_t BgL_s2z00_1753;
BgL_s1z00_1752 = 
VECTOR_REF(BgL_opt1161z00_182,((long)0)); 
BgL_s2z00_1753 = 
VECTOR_REF(BgL_opt1161z00_182,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1161z00_182)) { case ((long)2) : 

{ /* Ieee/string.scm 1216 */

{ /* Ieee/string.scm 1216 */
int BgL_tmpz00_9642;
{ /* Ieee/string.scm 1216 */
obj_t BgL_auxz00_9650;obj_t BgL_auxz00_9643;
if(
STRINGP(BgL_s2z00_1753))
{ /* Ieee/string.scm 1216 */
BgL_auxz00_9650 = BgL_s2z00_1753
; }  else 
{ 
obj_t BgL_auxz00_9653;
BgL_auxz00_9653 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49330)), BGl_string4411z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1753); 
FAILURE(BgL_auxz00_9653,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1752))
{ /* Ieee/string.scm 1216 */
BgL_auxz00_9643 = BgL_s1z00_1752
; }  else 
{ 
obj_t BgL_auxz00_9646;
BgL_auxz00_9646 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49330)), BGl_string4411z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1752); 
FAILURE(BgL_auxz00_9646,BFALSE,BFALSE);} 
BgL_tmpz00_9642 = 
BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_9643, BgL_auxz00_9650, BFALSE, BFALSE, BFALSE, BFALSE); } 
return 
BINT(BgL_tmpz00_9642);} } break;case ((long)3) : 

{ /* Ieee/string.scm 1216 */
obj_t BgL_start1z00_1761;
BgL_start1z00_1761 = 
VECTOR_REF(BgL_opt1161z00_182,((long)2)); 
{ /* Ieee/string.scm 1216 */

{ /* Ieee/string.scm 1216 */
int BgL_tmpz00_9660;
{ /* Ieee/string.scm 1216 */
obj_t BgL_auxz00_9668;obj_t BgL_auxz00_9661;
if(
STRINGP(BgL_s2z00_1753))
{ /* Ieee/string.scm 1216 */
BgL_auxz00_9668 = BgL_s2z00_1753
; }  else 
{ 
obj_t BgL_auxz00_9671;
BgL_auxz00_9671 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49330)), BGl_string4411z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1753); 
FAILURE(BgL_auxz00_9671,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1752))
{ /* Ieee/string.scm 1216 */
BgL_auxz00_9661 = BgL_s1z00_1752
; }  else 
{ 
obj_t BgL_auxz00_9664;
BgL_auxz00_9664 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49330)), BGl_string4411z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1752); 
FAILURE(BgL_auxz00_9664,BFALSE,BFALSE);} 
BgL_tmpz00_9660 = 
BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_9661, BgL_auxz00_9668, BgL_start1z00_1761, BFALSE, BFALSE, BFALSE); } 
return 
BINT(BgL_tmpz00_9660);} } } break;case ((long)4) : 

{ /* Ieee/string.scm 1216 */
obj_t BgL_start1z00_1765;
BgL_start1z00_1765 = 
VECTOR_REF(BgL_opt1161z00_182,((long)2)); 
{ /* Ieee/string.scm 1216 */
obj_t BgL_end1z00_1766;
BgL_end1z00_1766 = 
VECTOR_REF(BgL_opt1161z00_182,((long)3)); 
{ /* Ieee/string.scm 1216 */

{ /* Ieee/string.scm 1216 */
int BgL_tmpz00_9679;
{ /* Ieee/string.scm 1216 */
obj_t BgL_auxz00_9687;obj_t BgL_auxz00_9680;
if(
STRINGP(BgL_s2z00_1753))
{ /* Ieee/string.scm 1216 */
BgL_auxz00_9687 = BgL_s2z00_1753
; }  else 
{ 
obj_t BgL_auxz00_9690;
BgL_auxz00_9690 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49330)), BGl_string4411z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1753); 
FAILURE(BgL_auxz00_9690,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1752))
{ /* Ieee/string.scm 1216 */
BgL_auxz00_9680 = BgL_s1z00_1752
; }  else 
{ 
obj_t BgL_auxz00_9683;
BgL_auxz00_9683 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49330)), BGl_string4411z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1752); 
FAILURE(BgL_auxz00_9683,BFALSE,BFALSE);} 
BgL_tmpz00_9679 = 
BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_9680, BgL_auxz00_9687, BgL_start1z00_1765, BgL_end1z00_1766, BFALSE, BFALSE); } 
return 
BINT(BgL_tmpz00_9679);} } } } break;case ((long)5) : 

{ /* Ieee/string.scm 1216 */
obj_t BgL_start1z00_1769;
BgL_start1z00_1769 = 
VECTOR_REF(BgL_opt1161z00_182,((long)2)); 
{ /* Ieee/string.scm 1216 */
obj_t BgL_end1z00_1770;
BgL_end1z00_1770 = 
VECTOR_REF(BgL_opt1161z00_182,((long)3)); 
{ /* Ieee/string.scm 1216 */
obj_t BgL_start2z00_1771;
BgL_start2z00_1771 = 
VECTOR_REF(BgL_opt1161z00_182,((long)4)); 
{ /* Ieee/string.scm 1216 */

{ /* Ieee/string.scm 1216 */
int BgL_tmpz00_9699;
{ /* Ieee/string.scm 1216 */
obj_t BgL_auxz00_9707;obj_t BgL_auxz00_9700;
if(
STRINGP(BgL_s2z00_1753))
{ /* Ieee/string.scm 1216 */
BgL_auxz00_9707 = BgL_s2z00_1753
; }  else 
{ 
obj_t BgL_auxz00_9710;
BgL_auxz00_9710 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49330)), BGl_string4411z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1753); 
FAILURE(BgL_auxz00_9710,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1752))
{ /* Ieee/string.scm 1216 */
BgL_auxz00_9700 = BgL_s1z00_1752
; }  else 
{ 
obj_t BgL_auxz00_9703;
BgL_auxz00_9703 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49330)), BGl_string4411z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1752); 
FAILURE(BgL_auxz00_9703,BFALSE,BFALSE);} 
BgL_tmpz00_9699 = 
BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_9700, BgL_auxz00_9707, BgL_start1z00_1769, BgL_end1z00_1770, BgL_start2z00_1771, BFALSE); } 
return 
BINT(BgL_tmpz00_9699);} } } } } break;case ((long)6) : 

{ /* Ieee/string.scm 1216 */
obj_t BgL_start1z00_1773;
BgL_start1z00_1773 = 
VECTOR_REF(BgL_opt1161z00_182,((long)2)); 
{ /* Ieee/string.scm 1216 */
obj_t BgL_end1z00_1774;
BgL_end1z00_1774 = 
VECTOR_REF(BgL_opt1161z00_182,((long)3)); 
{ /* Ieee/string.scm 1216 */
obj_t BgL_start2z00_1775;
BgL_start2z00_1775 = 
VECTOR_REF(BgL_opt1161z00_182,((long)4)); 
{ /* Ieee/string.scm 1216 */
obj_t BgL_end2z00_1776;
BgL_end2z00_1776 = 
VECTOR_REF(BgL_opt1161z00_182,((long)5)); 
{ /* Ieee/string.scm 1216 */

{ /* Ieee/string.scm 1216 */
int BgL_tmpz00_9720;
{ /* Ieee/string.scm 1216 */
obj_t BgL_auxz00_9728;obj_t BgL_auxz00_9721;
if(
STRINGP(BgL_s2z00_1753))
{ /* Ieee/string.scm 1216 */
BgL_auxz00_9728 = BgL_s2z00_1753
; }  else 
{ 
obj_t BgL_auxz00_9731;
BgL_auxz00_9731 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49330)), BGl_string4411z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1753); 
FAILURE(BgL_auxz00_9731,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1752))
{ /* Ieee/string.scm 1216 */
BgL_auxz00_9721 = BgL_s1z00_1752
; }  else 
{ 
obj_t BgL_auxz00_9724;
BgL_auxz00_9724 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49330)), BGl_string4411z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1752); 
FAILURE(BgL_auxz00_9724,BFALSE,BFALSE);} 
BgL_tmpz00_9720 = 
BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_9721, BgL_auxz00_9728, BgL_start1z00_1773, BgL_end1z00_1774, BgL_start2z00_1775, BgL_end2z00_1776); } 
return 
BINT(BgL_tmpz00_9720);} } } } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4408z00zz__r4_strings_6_7z00, BGl_string4410z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1161z00_182)));} } } } 

}



/* string-prefix-length */
BGL_EXPORTED_DEF int BGl_stringzd2prefixzd2lengthz00zz__r4_strings_6_7z00(obj_t BgL_s1z00_176, obj_t BgL_s2z00_177, obj_t BgL_start1z00_178, obj_t BgL_end1z00_179, obj_t BgL_start2z00_180, obj_t BgL_end2z00_181)
{
{ /* Ieee/string.scm 1216 */
{ /* Ieee/string.scm 1218 */
long BgL_l1z00_1778;
BgL_l1z00_1778 = 
STRING_LENGTH(BgL_s1z00_176); 
{ /* Ieee/string.scm 1218 */
long BgL_l2z00_1779;
BgL_l2z00_1779 = 
STRING_LENGTH(BgL_s2z00_177); 
{ /* Ieee/string.scm 1219 */
obj_t BgL_e1z00_1780;
{ /* Ieee/string.scm 1220 */
obj_t BgL_procz00_3735;
BgL_procz00_3735 = BGl_symbol4412z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end1z00_179))
{ /* Ieee/string.scm 1206 */
bool_t BgL_test5138z00_9746;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_3740;
{ /* Ieee/string.scm 1206 */
obj_t BgL_tmpz00_9747;
if(
INTEGERP(BgL_end1z00_179))
{ /* Ieee/string.scm 1206 */
BgL_tmpz00_9747 = BgL_end1z00_179
; }  else 
{ 
obj_t BgL_auxz00_9750;
BgL_auxz00_9750 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48914)), BGl_string4413z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end1z00_179); 
FAILURE(BgL_auxz00_9750,BFALSE,BFALSE);} 
BgL_n1z00_3740 = 
(long)CINT(BgL_tmpz00_9747); } 
BgL_test5138z00_9746 = 
(BgL_n1z00_3740<=((long)0)); } 
if(BgL_test5138z00_9746)
{ /* Ieee/string.scm 1206 */
BgL_e1z00_1780 = 
BGl_errorz00zz__errorz00(BgL_procz00_3735, 
string_append_3(BGl_string4414z00zz__r4_strings_6_7z00, BGl_string4415z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end1z00_179); }  else 
{ /* Ieee/string.scm 1208 */
bool_t BgL_test5140z00_9758;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_3742;
{ /* Ieee/string.scm 1208 */
obj_t BgL_tmpz00_9759;
if(
INTEGERP(BgL_end1z00_179))
{ /* Ieee/string.scm 1208 */
BgL_tmpz00_9759 = BgL_end1z00_179
; }  else 
{ 
obj_t BgL_auxz00_9762;
BgL_auxz00_9762 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49006)), BGl_string4413z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end1z00_179); 
FAILURE(BgL_auxz00_9762,BFALSE,BFALSE);} 
BgL_n1z00_3742 = 
(long)CINT(BgL_tmpz00_9759); } 
BgL_test5140z00_9758 = 
(BgL_n1z00_3742>BgL_l1z00_1778); } 
if(BgL_test5140z00_9758)
{ /* Ieee/string.scm 1208 */
BgL_e1z00_1780 = 
BGl_errorz00zz__errorz00(BgL_procz00_3735, 
string_append_3(BGl_string4417z00zz__r4_strings_6_7z00, BGl_string4415z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end1z00_179); }  else 
{ /* Ieee/string.scm 1208 */
BgL_e1z00_1780 = BgL_end1z00_179; } } }  else 
{ /* Ieee/string.scm 1204 */
BgL_e1z00_1780 = 
BINT(BgL_l1z00_1778); } } 
{ /* Ieee/string.scm 1220 */
obj_t BgL_e2z00_1781;
{ /* Ieee/string.scm 1221 */
obj_t BgL_procz00_3745;
BgL_procz00_3745 = BGl_symbol4412z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end2z00_181))
{ /* Ieee/string.scm 1206 */
bool_t BgL_test5143z00_9773;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_3750;
{ /* Ieee/string.scm 1206 */
obj_t BgL_tmpz00_9774;
if(
INTEGERP(BgL_end2z00_181))
{ /* Ieee/string.scm 1206 */
BgL_tmpz00_9774 = BgL_end2z00_181
; }  else 
{ 
obj_t BgL_auxz00_9777;
BgL_auxz00_9777 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48914)), BGl_string4413z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end2z00_181); 
FAILURE(BgL_auxz00_9777,BFALSE,BFALSE);} 
BgL_n1z00_3750 = 
(long)CINT(BgL_tmpz00_9774); } 
BgL_test5143z00_9773 = 
(BgL_n1z00_3750<=((long)0)); } 
if(BgL_test5143z00_9773)
{ /* Ieee/string.scm 1206 */
BgL_e2z00_1781 = 
BGl_errorz00zz__errorz00(BgL_procz00_3745, 
string_append_3(BGl_string4414z00zz__r4_strings_6_7z00, BGl_string4418z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end2z00_181); }  else 
{ /* Ieee/string.scm 1208 */
bool_t BgL_test5145z00_9785;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_3752;
{ /* Ieee/string.scm 1208 */
obj_t BgL_tmpz00_9786;
if(
INTEGERP(BgL_end2z00_181))
{ /* Ieee/string.scm 1208 */
BgL_tmpz00_9786 = BgL_end2z00_181
; }  else 
{ 
obj_t BgL_auxz00_9789;
BgL_auxz00_9789 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49006)), BGl_string4413z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end2z00_181); 
FAILURE(BgL_auxz00_9789,BFALSE,BFALSE);} 
BgL_n1z00_3752 = 
(long)CINT(BgL_tmpz00_9786); } 
BgL_test5145z00_9785 = 
(BgL_n1z00_3752>BgL_l2z00_1779); } 
if(BgL_test5145z00_9785)
{ /* Ieee/string.scm 1208 */
BgL_e2z00_1781 = 
BGl_errorz00zz__errorz00(BgL_procz00_3745, 
string_append_3(BGl_string4417z00zz__r4_strings_6_7z00, BGl_string4418z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end2z00_181); }  else 
{ /* Ieee/string.scm 1208 */
BgL_e2z00_1781 = BgL_end2z00_181; } } }  else 
{ /* Ieee/string.scm 1204 */
BgL_e2z00_1781 = 
BINT(BgL_l2z00_1779); } } 
{ /* Ieee/string.scm 1221 */
obj_t BgL_b1z00_1782;
{ /* Ieee/string.scm 1222 */
obj_t BgL_procz00_3755;
BgL_procz00_3755 = BGl_symbol4412z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start1z00_178))
{ /* Ieee/string.scm 1192 */
bool_t BgL_test5148z00_9800;
{ /* Ieee/string.scm 1192 */
long BgL_n1z00_3760;
{ /* Ieee/string.scm 1192 */
obj_t BgL_tmpz00_9801;
if(
INTEGERP(BgL_start1z00_178))
{ /* Ieee/string.scm 1192 */
BgL_tmpz00_9801 = BgL_start1z00_178
; }  else 
{ 
obj_t BgL_auxz00_9804;
BgL_auxz00_9804 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48393)), BGl_string4413z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start1z00_178); 
FAILURE(BgL_auxz00_9804,BFALSE,BFALSE);} 
BgL_n1z00_3760 = 
(long)CINT(BgL_tmpz00_9801); } 
BgL_test5148z00_9800 = 
(BgL_n1z00_3760<((long)0)); } 
if(BgL_test5148z00_9800)
{ /* Ieee/string.scm 1192 */
BgL_b1z00_1782 = 
BGl_errorz00zz__errorz00(BgL_procz00_3755, 
string_append_3(BGl_string4419z00zz__r4_strings_6_7z00, BGl_string4420z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start1z00_178); }  else 
{ /* Ieee/string.scm 1194 */
bool_t BgL_test5150z00_9812;
{ /* Ieee/string.scm 1194 */
long BgL_n1z00_3762;
{ /* Ieee/string.scm 1194 */
obj_t BgL_tmpz00_9813;
if(
INTEGERP(BgL_start1z00_178))
{ /* Ieee/string.scm 1194 */
BgL_tmpz00_9813 = BgL_start1z00_178
; }  else 
{ 
obj_t BgL_auxz00_9816;
BgL_auxz00_9816 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48488)), BGl_string4413z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start1z00_178); 
FAILURE(BgL_auxz00_9816,BFALSE,BFALSE);} 
BgL_n1z00_3762 = 
(long)CINT(BgL_tmpz00_9813); } 
BgL_test5150z00_9812 = 
(BgL_n1z00_3762>=BgL_l1z00_1778); } 
if(BgL_test5150z00_9812)
{ /* Ieee/string.scm 1194 */
BgL_b1z00_1782 = 
BGl_errorz00zz__errorz00(BgL_procz00_3755, 
string_append_3(BGl_string4421z00zz__r4_strings_6_7z00, BGl_string4420z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start1z00_178); }  else 
{ /* Ieee/string.scm 1194 */
BgL_b1z00_1782 = BgL_start1z00_178; } } }  else 
{ /* Ieee/string.scm 1190 */
BgL_b1z00_1782 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1222 */
obj_t BgL_b2z00_1783;
{ /* Ieee/string.scm 1223 */
obj_t BgL_procz00_3765;
BgL_procz00_3765 = BGl_symbol4412z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start2z00_180))
{ /* Ieee/string.scm 1192 */
bool_t BgL_test5153z00_9827;
{ /* Ieee/string.scm 1192 */
long BgL_n1z00_3770;
{ /* Ieee/string.scm 1192 */
obj_t BgL_tmpz00_9828;
if(
INTEGERP(BgL_start2z00_180))
{ /* Ieee/string.scm 1192 */
BgL_tmpz00_9828 = BgL_start2z00_180
; }  else 
{ 
obj_t BgL_auxz00_9831;
BgL_auxz00_9831 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48393)), BGl_string4413z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start2z00_180); 
FAILURE(BgL_auxz00_9831,BFALSE,BFALSE);} 
BgL_n1z00_3770 = 
(long)CINT(BgL_tmpz00_9828); } 
BgL_test5153z00_9827 = 
(BgL_n1z00_3770<((long)0)); } 
if(BgL_test5153z00_9827)
{ /* Ieee/string.scm 1192 */
BgL_b2z00_1783 = 
BGl_errorz00zz__errorz00(BgL_procz00_3765, 
string_append_3(BGl_string4419z00zz__r4_strings_6_7z00, BGl_string4422z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start2z00_180); }  else 
{ /* Ieee/string.scm 1194 */
bool_t BgL_test5155z00_9839;
{ /* Ieee/string.scm 1194 */
long BgL_n1z00_3772;
{ /* Ieee/string.scm 1194 */
obj_t BgL_tmpz00_9840;
if(
INTEGERP(BgL_start2z00_180))
{ /* Ieee/string.scm 1194 */
BgL_tmpz00_9840 = BgL_start2z00_180
; }  else 
{ 
obj_t BgL_auxz00_9843;
BgL_auxz00_9843 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48488)), BGl_string4413z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start2z00_180); 
FAILURE(BgL_auxz00_9843,BFALSE,BFALSE);} 
BgL_n1z00_3772 = 
(long)CINT(BgL_tmpz00_9840); } 
BgL_test5155z00_9839 = 
(BgL_n1z00_3772>=BgL_l2z00_1779); } 
if(BgL_test5155z00_9839)
{ /* Ieee/string.scm 1194 */
BgL_b2z00_1783 = 
BGl_errorz00zz__errorz00(BgL_procz00_3765, 
string_append_3(BGl_string4421z00zz__r4_strings_6_7z00, BGl_string4422z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start2z00_180); }  else 
{ /* Ieee/string.scm 1194 */
BgL_b2z00_1783 = BgL_start2z00_180; } } }  else 
{ /* Ieee/string.scm 1190 */
BgL_b2z00_1783 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1223 */

{ 
obj_t BgL_i1z00_1785;obj_t BgL_i2z00_1786;
{ /* Ieee/string.scm 1224 */
long BgL_tmpz00_9852;
BgL_i1z00_1785 = BgL_b1z00_1782; 
BgL_i2z00_1786 = BgL_b2z00_1783; 
BgL_zc3z04anonymousza31747ze3z87_1787:
{ /* Ieee/string.scm 1227 */
bool_t BgL_test5157z00_9853;
{ /* Ieee/string.scm 1227 */
bool_t BgL_test5158z00_9854;
{ /* Ieee/string.scm 1227 */
long BgL_n1z00_3775;long BgL_n2z00_3776;
{ /* Ieee/string.scm 1227 */
obj_t BgL_tmpz00_9855;
if(
INTEGERP(BgL_i1z00_1785))
{ /* Ieee/string.scm 1227 */
BgL_tmpz00_9855 = BgL_i1z00_1785
; }  else 
{ 
obj_t BgL_auxz00_9858;
BgL_auxz00_9858 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49824)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i1z00_1785); 
FAILURE(BgL_auxz00_9858,BFALSE,BFALSE);} 
BgL_n1z00_3775 = 
(long)CINT(BgL_tmpz00_9855); } 
{ /* Ieee/string.scm 1227 */
obj_t BgL_tmpz00_9863;
if(
INTEGERP(BgL_e1z00_1780))
{ /* Ieee/string.scm 1227 */
BgL_tmpz00_9863 = BgL_e1z00_1780
; }  else 
{ 
obj_t BgL_auxz00_9866;
BgL_auxz00_9866 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49827)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_e1z00_1780); 
FAILURE(BgL_auxz00_9866,BFALSE,BFALSE);} 
BgL_n2z00_3776 = 
(long)CINT(BgL_tmpz00_9863); } 
BgL_test5158z00_9854 = 
(BgL_n1z00_3775==BgL_n2z00_3776); } 
if(BgL_test5158z00_9854)
{ /* Ieee/string.scm 1227 */
BgL_test5157z00_9853 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 1227 */
long BgL_n1z00_3778;long BgL_n2z00_3779;
{ /* Ieee/string.scm 1227 */
obj_t BgL_tmpz00_9872;
if(
INTEGERP(BgL_i2z00_1786))
{ /* Ieee/string.scm 1227 */
BgL_tmpz00_9872 = BgL_i2z00_1786
; }  else 
{ 
obj_t BgL_auxz00_9875;
BgL_auxz00_9875 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49836)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i2z00_1786); 
FAILURE(BgL_auxz00_9875,BFALSE,BFALSE);} 
BgL_n1z00_3778 = 
(long)CINT(BgL_tmpz00_9872); } 
{ /* Ieee/string.scm 1227 */
obj_t BgL_tmpz00_9880;
if(
INTEGERP(BgL_e2z00_1781))
{ /* Ieee/string.scm 1227 */
BgL_tmpz00_9880 = BgL_e2z00_1781
; }  else 
{ 
obj_t BgL_auxz00_9883;
BgL_auxz00_9883 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49839)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_e2z00_1781); 
FAILURE(BgL_auxz00_9883,BFALSE,BFALSE);} 
BgL_n2z00_3779 = 
(long)CINT(BgL_tmpz00_9880); } 
BgL_test5157z00_9853 = 
(BgL_n1z00_3778==BgL_n2z00_3779); } } 
if(BgL_test5157z00_9853)
{ /* Ieee/string.scm 1228 */
long BgL_za71za7_3781;long BgL_za72za7_3782;
{ /* Ieee/string.scm 1228 */
obj_t BgL_tmpz00_9889;
if(
INTEGERP(BgL_i1z00_1785))
{ /* Ieee/string.scm 1228 */
BgL_tmpz00_9889 = BgL_i1z00_1785
; }  else 
{ 
obj_t BgL_auxz00_9892;
BgL_auxz00_9892 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49855)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i1z00_1785); 
FAILURE(BgL_auxz00_9892,BFALSE,BFALSE);} 
BgL_za71za7_3781 = 
(long)CINT(BgL_tmpz00_9889); } 
{ /* Ieee/string.scm 1228 */
obj_t BgL_tmpz00_9897;
if(
INTEGERP(BgL_b1z00_1782))
{ /* Ieee/string.scm 1228 */
BgL_tmpz00_9897 = BgL_b1z00_1782
; }  else 
{ 
obj_t BgL_auxz00_9900;
BgL_auxz00_9900 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49858)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_b1z00_1782); 
FAILURE(BgL_auxz00_9900,BFALSE,BFALSE);} 
BgL_za72za7_3782 = 
(long)CINT(BgL_tmpz00_9897); } 
BgL_tmpz00_9852 = 
(BgL_za71za7_3781-BgL_za72za7_3782); }  else 
{ /* Ieee/string.scm 1229 */
bool_t BgL_test5165z00_9906;
{ /* Ieee/string.scm 1229 */
unsigned char BgL_auxz00_9926;unsigned char BgL_tmpz00_9907;
{ /* Ieee/string.scm 1229 */
long BgL_kz00_3788;
{ /* Ieee/string.scm 1229 */
obj_t BgL_tmpz00_9927;
if(
INTEGERP(BgL_i2z00_1786))
{ /* Ieee/string.scm 1229 */
BgL_tmpz00_9927 = BgL_i2z00_1786
; }  else 
{ 
obj_t BgL_auxz00_9930;
BgL_auxz00_9930 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49911)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i2z00_1786); 
FAILURE(BgL_auxz00_9930,BFALSE,BFALSE);} 
BgL_kz00_3788 = 
(long)CINT(BgL_tmpz00_9927); } 
{ /* Ieee/string.scm 327 */
long BgL_l3217z00_5192;
BgL_l3217z00_5192 = 
STRING_LENGTH(BgL_s2z00_177); 
if(
BOUND_CHECK(BgL_kz00_3788, BgL_l3217z00_5192))
{ /* Ieee/string.scm 327 */
BgL_auxz00_9926 = 
STRING_REF(BgL_s2z00_177, BgL_kz00_3788)
; }  else 
{ 
obj_t BgL_auxz00_9939;
BgL_auxz00_9939 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_s2z00_177, 
(int)(BgL_l3217z00_5192), 
(int)(BgL_kz00_3788)); 
FAILURE(BgL_auxz00_9939,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 1229 */
long BgL_kz00_3785;
{ /* Ieee/string.scm 1229 */
obj_t BgL_tmpz00_9908;
if(
INTEGERP(BgL_i1z00_1785))
{ /* Ieee/string.scm 1229 */
BgL_tmpz00_9908 = BgL_i1z00_1785
; }  else 
{ 
obj_t BgL_auxz00_9911;
BgL_auxz00_9911 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49892)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i1z00_1785); 
FAILURE(BgL_auxz00_9911,BFALSE,BFALSE);} 
BgL_kz00_3785 = 
(long)CINT(BgL_tmpz00_9908); } 
{ /* Ieee/string.scm 327 */
long BgL_l3213z00_5188;
BgL_l3213z00_5188 = 
STRING_LENGTH(BgL_s1z00_176); 
if(
BOUND_CHECK(BgL_kz00_3785, BgL_l3213z00_5188))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_9907 = 
STRING_REF(BgL_s1z00_176, BgL_kz00_3785)
; }  else 
{ 
obj_t BgL_auxz00_9920;
BgL_auxz00_9920 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_s1z00_176, 
(int)(BgL_l3213z00_5188), 
(int)(BgL_kz00_3785)); 
FAILURE(BgL_auxz00_9920,BFALSE,BFALSE);} } } 
BgL_test5165z00_9906 = 
(BgL_tmpz00_9907==BgL_auxz00_9926); } 
if(BgL_test5165z00_9906)
{ 
obj_t BgL_i2z00_9956;obj_t BgL_i1z00_9946;
{ 
obj_t BgL_tmpz00_9947;
if(
INTEGERP(BgL_i1z00_1785))
{ /* Ieee/string.scm 1230 */
BgL_tmpz00_9947 = BgL_i1z00_1785
; }  else 
{ 
obj_t BgL_auxz00_9950;
BgL_auxz00_9950 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49933)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i1z00_1785); 
FAILURE(BgL_auxz00_9950,BFALSE,BFALSE);} 
BgL_i1z00_9946 = 
ADDFX(BgL_tmpz00_9947, 
BINT(((long)1))); } 
{ 
obj_t BgL_tmpz00_9957;
if(
INTEGERP(BgL_i2z00_1786))
{ /* Ieee/string.scm 1230 */
BgL_tmpz00_9957 = BgL_i2z00_1786
; }  else 
{ 
obj_t BgL_auxz00_9960;
BgL_auxz00_9960 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49944)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i2z00_1786); 
FAILURE(BgL_auxz00_9960,BFALSE,BFALSE);} 
BgL_i2z00_9956 = 
ADDFX(BgL_tmpz00_9957, 
BINT(((long)1))); } 
BgL_i2z00_1786 = BgL_i2z00_9956; 
BgL_i1z00_1785 = BgL_i1z00_9946; 
goto BgL_zc3z04anonymousza31747ze3z87_1787;}  else 
{ /* Ieee/string.scm 1232 */
long BgL_za71za7_3797;long BgL_za72za7_3798;
{ /* Ieee/string.scm 1232 */
obj_t BgL_tmpz00_9966;
if(
INTEGERP(BgL_i1z00_1785))
{ /* Ieee/string.scm 1232 */
BgL_tmpz00_9966 = BgL_i1z00_1785
; }  else 
{ 
obj_t BgL_auxz00_9969;
BgL_auxz00_9969 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49974)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i1z00_1785); 
FAILURE(BgL_auxz00_9969,BFALSE,BFALSE);} 
BgL_za71za7_3797 = 
(long)CINT(BgL_tmpz00_9966); } 
{ /* Ieee/string.scm 1232 */
obj_t BgL_tmpz00_9974;
if(
INTEGERP(BgL_b1z00_1782))
{ /* Ieee/string.scm 1232 */
BgL_tmpz00_9974 = BgL_b1z00_1782
; }  else 
{ 
obj_t BgL_auxz00_9977;
BgL_auxz00_9977 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49977)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_b1z00_1782); 
FAILURE(BgL_auxz00_9977,BFALSE,BFALSE);} 
BgL_za72za7_3798 = 
(long)CINT(BgL_tmpz00_9974); } 
BgL_tmpz00_9852 = 
(BgL_za71za7_3797-BgL_za72za7_3798); } } } 
return 
(int)(BgL_tmpz00_9852);} } } } } } } } } } 

}



/* _string-prefix-length-ci */
obj_t BGl__stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t BgL_env1166z00_191, obj_t BgL_opt1165z00_190)
{
{ /* Ieee/string.scm 1237 */
{ /* Ieee/string.scm 1237 */
obj_t BgL_s1z00_1799;obj_t BgL_s2z00_1800;
BgL_s1z00_1799 = 
VECTOR_REF(BgL_opt1165z00_190,((long)0)); 
BgL_s2z00_1800 = 
VECTOR_REF(BgL_opt1165z00_190,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1165z00_190)) { case ((long)2) : 

{ /* Ieee/string.scm 1237 */

{ /* Ieee/string.scm 1237 */
int BgL_tmpz00_9986;
{ /* Ieee/string.scm 1237 */
obj_t BgL_auxz00_9994;obj_t BgL_auxz00_9987;
if(
STRINGP(BgL_s2z00_1800))
{ /* Ieee/string.scm 1237 */
BgL_auxz00_9994 = BgL_s2z00_1800
; }  else 
{ 
obj_t BgL_auxz00_9997;
BgL_auxz00_9997 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50211)), BGl_string4425z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1800); 
FAILURE(BgL_auxz00_9997,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1799))
{ /* Ieee/string.scm 1237 */
BgL_auxz00_9987 = BgL_s1z00_1799
; }  else 
{ 
obj_t BgL_auxz00_9990;
BgL_auxz00_9990 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50211)), BGl_string4425z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1799); 
FAILURE(BgL_auxz00_9990,BFALSE,BFALSE);} 
BgL_tmpz00_9986 = 
BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_9987, BgL_auxz00_9994, BFALSE, BFALSE, BFALSE, BFALSE); } 
return 
BINT(BgL_tmpz00_9986);} } break;case ((long)3) : 

{ /* Ieee/string.scm 1237 */
obj_t BgL_start1z00_1808;
BgL_start1z00_1808 = 
VECTOR_REF(BgL_opt1165z00_190,((long)2)); 
{ /* Ieee/string.scm 1237 */

{ /* Ieee/string.scm 1237 */
int BgL_tmpz00_10004;
{ /* Ieee/string.scm 1237 */
obj_t BgL_auxz00_10012;obj_t BgL_auxz00_10005;
if(
STRINGP(BgL_s2z00_1800))
{ /* Ieee/string.scm 1237 */
BgL_auxz00_10012 = BgL_s2z00_1800
; }  else 
{ 
obj_t BgL_auxz00_10015;
BgL_auxz00_10015 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50211)), BGl_string4425z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1800); 
FAILURE(BgL_auxz00_10015,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1799))
{ /* Ieee/string.scm 1237 */
BgL_auxz00_10005 = BgL_s1z00_1799
; }  else 
{ 
obj_t BgL_auxz00_10008;
BgL_auxz00_10008 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50211)), BGl_string4425z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1799); 
FAILURE(BgL_auxz00_10008,BFALSE,BFALSE);} 
BgL_tmpz00_10004 = 
BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_10005, BgL_auxz00_10012, BgL_start1z00_1808, BFALSE, BFALSE, BFALSE); } 
return 
BINT(BgL_tmpz00_10004);} } } break;case ((long)4) : 

{ /* Ieee/string.scm 1237 */
obj_t BgL_start1z00_1812;
BgL_start1z00_1812 = 
VECTOR_REF(BgL_opt1165z00_190,((long)2)); 
{ /* Ieee/string.scm 1237 */
obj_t BgL_end1z00_1813;
BgL_end1z00_1813 = 
VECTOR_REF(BgL_opt1165z00_190,((long)3)); 
{ /* Ieee/string.scm 1237 */

{ /* Ieee/string.scm 1237 */
int BgL_tmpz00_10023;
{ /* Ieee/string.scm 1237 */
obj_t BgL_auxz00_10031;obj_t BgL_auxz00_10024;
if(
STRINGP(BgL_s2z00_1800))
{ /* Ieee/string.scm 1237 */
BgL_auxz00_10031 = BgL_s2z00_1800
; }  else 
{ 
obj_t BgL_auxz00_10034;
BgL_auxz00_10034 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50211)), BGl_string4425z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1800); 
FAILURE(BgL_auxz00_10034,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1799))
{ /* Ieee/string.scm 1237 */
BgL_auxz00_10024 = BgL_s1z00_1799
; }  else 
{ 
obj_t BgL_auxz00_10027;
BgL_auxz00_10027 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50211)), BGl_string4425z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1799); 
FAILURE(BgL_auxz00_10027,BFALSE,BFALSE);} 
BgL_tmpz00_10023 = 
BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_10024, BgL_auxz00_10031, BgL_start1z00_1812, BgL_end1z00_1813, BFALSE, BFALSE); } 
return 
BINT(BgL_tmpz00_10023);} } } } break;case ((long)5) : 

{ /* Ieee/string.scm 1237 */
obj_t BgL_start1z00_1816;
BgL_start1z00_1816 = 
VECTOR_REF(BgL_opt1165z00_190,((long)2)); 
{ /* Ieee/string.scm 1237 */
obj_t BgL_end1z00_1817;
BgL_end1z00_1817 = 
VECTOR_REF(BgL_opt1165z00_190,((long)3)); 
{ /* Ieee/string.scm 1237 */
obj_t BgL_start2z00_1818;
BgL_start2z00_1818 = 
VECTOR_REF(BgL_opt1165z00_190,((long)4)); 
{ /* Ieee/string.scm 1237 */

{ /* Ieee/string.scm 1237 */
int BgL_tmpz00_10043;
{ /* Ieee/string.scm 1237 */
obj_t BgL_auxz00_10051;obj_t BgL_auxz00_10044;
if(
STRINGP(BgL_s2z00_1800))
{ /* Ieee/string.scm 1237 */
BgL_auxz00_10051 = BgL_s2z00_1800
; }  else 
{ 
obj_t BgL_auxz00_10054;
BgL_auxz00_10054 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50211)), BGl_string4425z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1800); 
FAILURE(BgL_auxz00_10054,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1799))
{ /* Ieee/string.scm 1237 */
BgL_auxz00_10044 = BgL_s1z00_1799
; }  else 
{ 
obj_t BgL_auxz00_10047;
BgL_auxz00_10047 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50211)), BGl_string4425z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1799); 
FAILURE(BgL_auxz00_10047,BFALSE,BFALSE);} 
BgL_tmpz00_10043 = 
BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_10044, BgL_auxz00_10051, BgL_start1z00_1816, BgL_end1z00_1817, BgL_start2z00_1818, BFALSE); } 
return 
BINT(BgL_tmpz00_10043);} } } } } break;case ((long)6) : 

{ /* Ieee/string.scm 1237 */
obj_t BgL_start1z00_1820;
BgL_start1z00_1820 = 
VECTOR_REF(BgL_opt1165z00_190,((long)2)); 
{ /* Ieee/string.scm 1237 */
obj_t BgL_end1z00_1821;
BgL_end1z00_1821 = 
VECTOR_REF(BgL_opt1165z00_190,((long)3)); 
{ /* Ieee/string.scm 1237 */
obj_t BgL_start2z00_1822;
BgL_start2z00_1822 = 
VECTOR_REF(BgL_opt1165z00_190,((long)4)); 
{ /* Ieee/string.scm 1237 */
obj_t BgL_end2z00_1823;
BgL_end2z00_1823 = 
VECTOR_REF(BgL_opt1165z00_190,((long)5)); 
{ /* Ieee/string.scm 1237 */

{ /* Ieee/string.scm 1237 */
int BgL_tmpz00_10064;
{ /* Ieee/string.scm 1237 */
obj_t BgL_auxz00_10072;obj_t BgL_auxz00_10065;
if(
STRINGP(BgL_s2z00_1800))
{ /* Ieee/string.scm 1237 */
BgL_auxz00_10072 = BgL_s2z00_1800
; }  else 
{ 
obj_t BgL_auxz00_10075;
BgL_auxz00_10075 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50211)), BGl_string4425z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1800); 
FAILURE(BgL_auxz00_10075,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1799))
{ /* Ieee/string.scm 1237 */
BgL_auxz00_10065 = BgL_s1z00_1799
; }  else 
{ 
obj_t BgL_auxz00_10068;
BgL_auxz00_10068 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50211)), BGl_string4425z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1799); 
FAILURE(BgL_auxz00_10068,BFALSE,BFALSE);} 
BgL_tmpz00_10064 = 
BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_10065, BgL_auxz00_10072, BgL_start1z00_1820, BgL_end1z00_1821, BgL_start2z00_1822, BgL_end2z00_1823); } 
return 
BINT(BgL_tmpz00_10064);} } } } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4423z00zz__r4_strings_6_7z00, BGl_string4410z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1165z00_190)));} } } } 

}



/* string-prefix-length-ci */
BGL_EXPORTED_DEF int BGl_stringzd2prefixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t BgL_s1z00_184, obj_t BgL_s2z00_185, obj_t BgL_start1z00_186, obj_t BgL_end1z00_187, obj_t BgL_start2z00_188, obj_t BgL_end2z00_189)
{
{ /* Ieee/string.scm 1237 */
{ /* Ieee/string.scm 1239 */
long BgL_l1z00_1825;
BgL_l1z00_1825 = 
STRING_LENGTH(BgL_s1z00_184); 
{ /* Ieee/string.scm 1239 */
long BgL_l2z00_1826;
BgL_l2z00_1826 = 
STRING_LENGTH(BgL_s2z00_185); 
{ /* Ieee/string.scm 1240 */
obj_t BgL_e1z00_1827;
{ /* Ieee/string.scm 1241 */
obj_t BgL_procz00_3804;
BgL_procz00_3804 = BGl_symbol4426z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end1z00_187))
{ /* Ieee/string.scm 1206 */
bool_t BgL_test5185z00_10090;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_3809;
{ /* Ieee/string.scm 1206 */
obj_t BgL_tmpz00_10091;
if(
INTEGERP(BgL_end1z00_187))
{ /* Ieee/string.scm 1206 */
BgL_tmpz00_10091 = BgL_end1z00_187
; }  else 
{ 
obj_t BgL_auxz00_10094;
BgL_auxz00_10094 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48914)), BGl_string4427z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end1z00_187); 
FAILURE(BgL_auxz00_10094,BFALSE,BFALSE);} 
BgL_n1z00_3809 = 
(long)CINT(BgL_tmpz00_10091); } 
BgL_test5185z00_10090 = 
(BgL_n1z00_3809<=((long)0)); } 
if(BgL_test5185z00_10090)
{ /* Ieee/string.scm 1206 */
BgL_e1z00_1827 = 
BGl_errorz00zz__errorz00(BgL_procz00_3804, 
string_append_3(BGl_string4414z00zz__r4_strings_6_7z00, BGl_string4415z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end1z00_187); }  else 
{ /* Ieee/string.scm 1208 */
bool_t BgL_test5187z00_10102;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_3811;
{ /* Ieee/string.scm 1208 */
obj_t BgL_tmpz00_10103;
if(
INTEGERP(BgL_end1z00_187))
{ /* Ieee/string.scm 1208 */
BgL_tmpz00_10103 = BgL_end1z00_187
; }  else 
{ 
obj_t BgL_auxz00_10106;
BgL_auxz00_10106 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49006)), BGl_string4427z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end1z00_187); 
FAILURE(BgL_auxz00_10106,BFALSE,BFALSE);} 
BgL_n1z00_3811 = 
(long)CINT(BgL_tmpz00_10103); } 
BgL_test5187z00_10102 = 
(BgL_n1z00_3811>BgL_l1z00_1825); } 
if(BgL_test5187z00_10102)
{ /* Ieee/string.scm 1208 */
BgL_e1z00_1827 = 
BGl_errorz00zz__errorz00(BgL_procz00_3804, 
string_append_3(BGl_string4417z00zz__r4_strings_6_7z00, BGl_string4415z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end1z00_187); }  else 
{ /* Ieee/string.scm 1208 */
BgL_e1z00_1827 = BgL_end1z00_187; } } }  else 
{ /* Ieee/string.scm 1204 */
BgL_e1z00_1827 = 
BINT(BgL_l1z00_1825); } } 
{ /* Ieee/string.scm 1241 */
obj_t BgL_e2z00_1828;
{ /* Ieee/string.scm 1242 */
obj_t BgL_procz00_3814;
BgL_procz00_3814 = BGl_symbol4426z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end2z00_189))
{ /* Ieee/string.scm 1206 */
bool_t BgL_test5190z00_10117;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_3819;
{ /* Ieee/string.scm 1206 */
obj_t BgL_tmpz00_10118;
if(
INTEGERP(BgL_end2z00_189))
{ /* Ieee/string.scm 1206 */
BgL_tmpz00_10118 = BgL_end2z00_189
; }  else 
{ 
obj_t BgL_auxz00_10121;
BgL_auxz00_10121 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48914)), BGl_string4427z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end2z00_189); 
FAILURE(BgL_auxz00_10121,BFALSE,BFALSE);} 
BgL_n1z00_3819 = 
(long)CINT(BgL_tmpz00_10118); } 
BgL_test5190z00_10117 = 
(BgL_n1z00_3819<=((long)0)); } 
if(BgL_test5190z00_10117)
{ /* Ieee/string.scm 1206 */
BgL_e2z00_1828 = 
BGl_errorz00zz__errorz00(BgL_procz00_3814, 
string_append_3(BGl_string4414z00zz__r4_strings_6_7z00, BGl_string4418z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end2z00_189); }  else 
{ /* Ieee/string.scm 1208 */
bool_t BgL_test5192z00_10129;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_3821;
{ /* Ieee/string.scm 1208 */
obj_t BgL_tmpz00_10130;
if(
INTEGERP(BgL_end2z00_189))
{ /* Ieee/string.scm 1208 */
BgL_tmpz00_10130 = BgL_end2z00_189
; }  else 
{ 
obj_t BgL_auxz00_10133;
BgL_auxz00_10133 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49006)), BGl_string4427z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end2z00_189); 
FAILURE(BgL_auxz00_10133,BFALSE,BFALSE);} 
BgL_n1z00_3821 = 
(long)CINT(BgL_tmpz00_10130); } 
BgL_test5192z00_10129 = 
(BgL_n1z00_3821>BgL_l2z00_1826); } 
if(BgL_test5192z00_10129)
{ /* Ieee/string.scm 1208 */
BgL_e2z00_1828 = 
BGl_errorz00zz__errorz00(BgL_procz00_3814, 
string_append_3(BGl_string4417z00zz__r4_strings_6_7z00, BGl_string4418z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end2z00_189); }  else 
{ /* Ieee/string.scm 1208 */
BgL_e2z00_1828 = BgL_end2z00_189; } } }  else 
{ /* Ieee/string.scm 1204 */
BgL_e2z00_1828 = 
BINT(BgL_l2z00_1826); } } 
{ /* Ieee/string.scm 1242 */
obj_t BgL_b1z00_1829;
{ /* Ieee/string.scm 1243 */
obj_t BgL_procz00_3824;
BgL_procz00_3824 = BGl_symbol4426z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start1z00_186))
{ /* Ieee/string.scm 1192 */
bool_t BgL_test5195z00_10144;
{ /* Ieee/string.scm 1192 */
long BgL_n1z00_3829;
{ /* Ieee/string.scm 1192 */
obj_t BgL_tmpz00_10145;
if(
INTEGERP(BgL_start1z00_186))
{ /* Ieee/string.scm 1192 */
BgL_tmpz00_10145 = BgL_start1z00_186
; }  else 
{ 
obj_t BgL_auxz00_10148;
BgL_auxz00_10148 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48393)), BGl_string4427z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start1z00_186); 
FAILURE(BgL_auxz00_10148,BFALSE,BFALSE);} 
BgL_n1z00_3829 = 
(long)CINT(BgL_tmpz00_10145); } 
BgL_test5195z00_10144 = 
(BgL_n1z00_3829<((long)0)); } 
if(BgL_test5195z00_10144)
{ /* Ieee/string.scm 1192 */
BgL_b1z00_1829 = 
BGl_errorz00zz__errorz00(BgL_procz00_3824, 
string_append_3(BGl_string4419z00zz__r4_strings_6_7z00, BGl_string4420z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start1z00_186); }  else 
{ /* Ieee/string.scm 1194 */
bool_t BgL_test5197z00_10156;
{ /* Ieee/string.scm 1194 */
long BgL_n1z00_3831;
{ /* Ieee/string.scm 1194 */
obj_t BgL_tmpz00_10157;
if(
INTEGERP(BgL_start1z00_186))
{ /* Ieee/string.scm 1194 */
BgL_tmpz00_10157 = BgL_start1z00_186
; }  else 
{ 
obj_t BgL_auxz00_10160;
BgL_auxz00_10160 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48488)), BGl_string4427z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start1z00_186); 
FAILURE(BgL_auxz00_10160,BFALSE,BFALSE);} 
BgL_n1z00_3831 = 
(long)CINT(BgL_tmpz00_10157); } 
BgL_test5197z00_10156 = 
(BgL_n1z00_3831>=BgL_l1z00_1825); } 
if(BgL_test5197z00_10156)
{ /* Ieee/string.scm 1194 */
BgL_b1z00_1829 = 
BGl_errorz00zz__errorz00(BgL_procz00_3824, 
string_append_3(BGl_string4421z00zz__r4_strings_6_7z00, BGl_string4420z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start1z00_186); }  else 
{ /* Ieee/string.scm 1194 */
BgL_b1z00_1829 = BgL_start1z00_186; } } }  else 
{ /* Ieee/string.scm 1190 */
BgL_b1z00_1829 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1243 */
obj_t BgL_b2z00_1830;
{ /* Ieee/string.scm 1244 */
obj_t BgL_procz00_3834;
BgL_procz00_3834 = BGl_symbol4426z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start2z00_188))
{ /* Ieee/string.scm 1192 */
bool_t BgL_test5200z00_10171;
{ /* Ieee/string.scm 1192 */
long BgL_n1z00_3839;
{ /* Ieee/string.scm 1192 */
obj_t BgL_tmpz00_10172;
if(
INTEGERP(BgL_start2z00_188))
{ /* Ieee/string.scm 1192 */
BgL_tmpz00_10172 = BgL_start2z00_188
; }  else 
{ 
obj_t BgL_auxz00_10175;
BgL_auxz00_10175 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48393)), BGl_string4427z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start2z00_188); 
FAILURE(BgL_auxz00_10175,BFALSE,BFALSE);} 
BgL_n1z00_3839 = 
(long)CINT(BgL_tmpz00_10172); } 
BgL_test5200z00_10171 = 
(BgL_n1z00_3839<((long)0)); } 
if(BgL_test5200z00_10171)
{ /* Ieee/string.scm 1192 */
BgL_b2z00_1830 = 
BGl_errorz00zz__errorz00(BgL_procz00_3834, 
string_append_3(BGl_string4419z00zz__r4_strings_6_7z00, BGl_string4422z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start2z00_188); }  else 
{ /* Ieee/string.scm 1194 */
bool_t BgL_test5202z00_10183;
{ /* Ieee/string.scm 1194 */
long BgL_n1z00_3841;
{ /* Ieee/string.scm 1194 */
obj_t BgL_tmpz00_10184;
if(
INTEGERP(BgL_start2z00_188))
{ /* Ieee/string.scm 1194 */
BgL_tmpz00_10184 = BgL_start2z00_188
; }  else 
{ 
obj_t BgL_auxz00_10187;
BgL_auxz00_10187 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48488)), BGl_string4427z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start2z00_188); 
FAILURE(BgL_auxz00_10187,BFALSE,BFALSE);} 
BgL_n1z00_3841 = 
(long)CINT(BgL_tmpz00_10184); } 
BgL_test5202z00_10183 = 
(BgL_n1z00_3841>=BgL_l2z00_1826); } 
if(BgL_test5202z00_10183)
{ /* Ieee/string.scm 1194 */
BgL_b2z00_1830 = 
BGl_errorz00zz__errorz00(BgL_procz00_3834, 
string_append_3(BGl_string4421z00zz__r4_strings_6_7z00, BGl_string4422z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start2z00_188); }  else 
{ /* Ieee/string.scm 1194 */
BgL_b2z00_1830 = BgL_start2z00_188; } } }  else 
{ /* Ieee/string.scm 1190 */
BgL_b2z00_1830 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1244 */

{ 
obj_t BgL_i1z00_1832;obj_t BgL_i2z00_1833;
{ /* Ieee/string.scm 1245 */
long BgL_tmpz00_10196;
BgL_i1z00_1832 = BgL_b1z00_1829; 
BgL_i2z00_1833 = BgL_b2z00_1830; 
BgL_zc3z04anonymousza31760ze3z87_1834:
{ /* Ieee/string.scm 1248 */
bool_t BgL_test5204z00_10197;
{ /* Ieee/string.scm 1248 */
bool_t BgL_test5205z00_10198;
{ /* Ieee/string.scm 1248 */
long BgL_n1z00_3844;long BgL_n2z00_3845;
{ /* Ieee/string.scm 1248 */
obj_t BgL_tmpz00_10199;
if(
INTEGERP(BgL_i1z00_1832))
{ /* Ieee/string.scm 1248 */
BgL_tmpz00_10199 = BgL_i1z00_1832
; }  else 
{ 
obj_t BgL_auxz00_10202;
BgL_auxz00_10202 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50723)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i1z00_1832); 
FAILURE(BgL_auxz00_10202,BFALSE,BFALSE);} 
BgL_n1z00_3844 = 
(long)CINT(BgL_tmpz00_10199); } 
{ /* Ieee/string.scm 1248 */
obj_t BgL_tmpz00_10207;
if(
INTEGERP(BgL_e1z00_1827))
{ /* Ieee/string.scm 1248 */
BgL_tmpz00_10207 = BgL_e1z00_1827
; }  else 
{ 
obj_t BgL_auxz00_10210;
BgL_auxz00_10210 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50726)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_e1z00_1827); 
FAILURE(BgL_auxz00_10210,BFALSE,BFALSE);} 
BgL_n2z00_3845 = 
(long)CINT(BgL_tmpz00_10207); } 
BgL_test5205z00_10198 = 
(BgL_n1z00_3844==BgL_n2z00_3845); } 
if(BgL_test5205z00_10198)
{ /* Ieee/string.scm 1248 */
BgL_test5204z00_10197 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 1248 */
long BgL_n1z00_3847;long BgL_n2z00_3848;
{ /* Ieee/string.scm 1248 */
obj_t BgL_tmpz00_10216;
if(
INTEGERP(BgL_i2z00_1833))
{ /* Ieee/string.scm 1248 */
BgL_tmpz00_10216 = BgL_i2z00_1833
; }  else 
{ 
obj_t BgL_auxz00_10219;
BgL_auxz00_10219 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50735)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i2z00_1833); 
FAILURE(BgL_auxz00_10219,BFALSE,BFALSE);} 
BgL_n1z00_3847 = 
(long)CINT(BgL_tmpz00_10216); } 
{ /* Ieee/string.scm 1248 */
obj_t BgL_tmpz00_10224;
if(
INTEGERP(BgL_e2z00_1828))
{ /* Ieee/string.scm 1248 */
BgL_tmpz00_10224 = BgL_e2z00_1828
; }  else 
{ 
obj_t BgL_auxz00_10227;
BgL_auxz00_10227 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50738)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_e2z00_1828); 
FAILURE(BgL_auxz00_10227,BFALSE,BFALSE);} 
BgL_n2z00_3848 = 
(long)CINT(BgL_tmpz00_10224); } 
BgL_test5204z00_10197 = 
(BgL_n1z00_3847==BgL_n2z00_3848); } } 
if(BgL_test5204z00_10197)
{ /* Ieee/string.scm 1249 */
long BgL_za71za7_3850;long BgL_za72za7_3851;
{ /* Ieee/string.scm 1249 */
obj_t BgL_tmpz00_10233;
if(
INTEGERP(BgL_i1z00_1832))
{ /* Ieee/string.scm 1249 */
BgL_tmpz00_10233 = BgL_i1z00_1832
; }  else 
{ 
obj_t BgL_auxz00_10236;
BgL_auxz00_10236 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50754)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i1z00_1832); 
FAILURE(BgL_auxz00_10236,BFALSE,BFALSE);} 
BgL_za71za7_3850 = 
(long)CINT(BgL_tmpz00_10233); } 
{ /* Ieee/string.scm 1249 */
obj_t BgL_tmpz00_10241;
if(
INTEGERP(BgL_b1z00_1829))
{ /* Ieee/string.scm 1249 */
BgL_tmpz00_10241 = BgL_b1z00_1829
; }  else 
{ 
obj_t BgL_auxz00_10244;
BgL_auxz00_10244 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50757)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_b1z00_1829); 
FAILURE(BgL_auxz00_10244,BFALSE,BFALSE);} 
BgL_za72za7_3851 = 
(long)CINT(BgL_tmpz00_10241); } 
BgL_tmpz00_10196 = 
(BgL_za71za7_3850-BgL_za72za7_3851); }  else 
{ /* Ieee/string.scm 1250 */
bool_t BgL_test5212z00_10250;
{ /* Ieee/string.scm 1250 */
unsigned char BgL_auxz00_10272;unsigned char BgL_tmpz00_10251;
{ /* Ieee/string.scm 1250 */
unsigned char BgL_tmpz00_10273;
{ /* Ieee/string.scm 1250 */
long BgL_kz00_3857;
{ /* Ieee/string.scm 1250 */
obj_t BgL_tmpz00_10274;
if(
INTEGERP(BgL_i2z00_1833))
{ /* Ieee/string.scm 1250 */
BgL_tmpz00_10274 = BgL_i2z00_1833
; }  else 
{ 
obj_t BgL_auxz00_10277;
BgL_auxz00_10277 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50813)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i2z00_1833); 
FAILURE(BgL_auxz00_10277,BFALSE,BFALSE);} 
BgL_kz00_3857 = 
(long)CINT(BgL_tmpz00_10274); } 
{ /* Ieee/string.scm 327 */
long BgL_l3225z00_5200;
BgL_l3225z00_5200 = 
STRING_LENGTH(BgL_s2z00_185); 
if(
BOUND_CHECK(BgL_kz00_3857, BgL_l3225z00_5200))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_10273 = 
STRING_REF(BgL_s2z00_185, BgL_kz00_3857)
; }  else 
{ 
obj_t BgL_auxz00_10286;
BgL_auxz00_10286 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_s2z00_185, 
(int)(BgL_l3225z00_5200), 
(int)(BgL_kz00_3857)); 
FAILURE(BgL_auxz00_10286,BFALSE,BFALSE);} } } 
BgL_auxz00_10272 = 
toupper(BgL_tmpz00_10273); } 
{ /* Ieee/string.scm 1250 */
unsigned char BgL_tmpz00_10252;
{ /* Ieee/string.scm 1250 */
long BgL_kz00_3854;
{ /* Ieee/string.scm 1250 */
obj_t BgL_tmpz00_10253;
if(
INTEGERP(BgL_i1z00_1832))
{ /* Ieee/string.scm 1250 */
BgL_tmpz00_10253 = BgL_i1z00_1832
; }  else 
{ 
obj_t BgL_auxz00_10256;
BgL_auxz00_10256 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50794)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i1z00_1832); 
FAILURE(BgL_auxz00_10256,BFALSE,BFALSE);} 
BgL_kz00_3854 = 
(long)CINT(BgL_tmpz00_10253); } 
{ /* Ieee/string.scm 327 */
long BgL_l3221z00_5196;
BgL_l3221z00_5196 = 
STRING_LENGTH(BgL_s1z00_184); 
if(
BOUND_CHECK(BgL_kz00_3854, BgL_l3221z00_5196))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_10252 = 
STRING_REF(BgL_s1z00_184, BgL_kz00_3854)
; }  else 
{ 
obj_t BgL_auxz00_10265;
BgL_auxz00_10265 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_s1z00_184, 
(int)(BgL_l3221z00_5196), 
(int)(BgL_kz00_3854)); 
FAILURE(BgL_auxz00_10265,BFALSE,BFALSE);} } } 
BgL_tmpz00_10251 = 
toupper(BgL_tmpz00_10252); } 
BgL_test5212z00_10250 = 
(BgL_tmpz00_10251==BgL_auxz00_10272); } 
if(BgL_test5212z00_10250)
{ 
obj_t BgL_i2z00_10304;obj_t BgL_i1z00_10294;
{ 
obj_t BgL_tmpz00_10295;
if(
INTEGERP(BgL_i1z00_1832))
{ /* Ieee/string.scm 1251 */
BgL_tmpz00_10295 = BgL_i1z00_1832
; }  else 
{ 
obj_t BgL_auxz00_10298;
BgL_auxz00_10298 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50835)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i1z00_1832); 
FAILURE(BgL_auxz00_10298,BFALSE,BFALSE);} 
BgL_i1z00_10294 = 
ADDFX(BgL_tmpz00_10295, 
BINT(((long)1))); } 
{ 
obj_t BgL_tmpz00_10305;
if(
INTEGERP(BgL_i2z00_1833))
{ /* Ieee/string.scm 1251 */
BgL_tmpz00_10305 = BgL_i2z00_1833
; }  else 
{ 
obj_t BgL_auxz00_10308;
BgL_auxz00_10308 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50846)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i2z00_1833); 
FAILURE(BgL_auxz00_10308,BFALSE,BFALSE);} 
BgL_i2z00_10304 = 
ADDFX(BgL_tmpz00_10305, 
BINT(((long)1))); } 
BgL_i2z00_1833 = BgL_i2z00_10304; 
BgL_i1z00_1832 = BgL_i1z00_10294; 
goto BgL_zc3z04anonymousza31760ze3z87_1834;}  else 
{ /* Ieee/string.scm 1253 */
long BgL_za71za7_3875;long BgL_za72za7_3876;
{ /* Ieee/string.scm 1253 */
obj_t BgL_tmpz00_10314;
if(
INTEGERP(BgL_i1z00_1832))
{ /* Ieee/string.scm 1253 */
BgL_tmpz00_10314 = BgL_i1z00_1832
; }  else 
{ 
obj_t BgL_auxz00_10317;
BgL_auxz00_10317 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50876)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i1z00_1832); 
FAILURE(BgL_auxz00_10317,BFALSE,BFALSE);} 
BgL_za71za7_3875 = 
(long)CINT(BgL_tmpz00_10314); } 
{ /* Ieee/string.scm 1253 */
obj_t BgL_tmpz00_10322;
if(
INTEGERP(BgL_b1z00_1829))
{ /* Ieee/string.scm 1253 */
BgL_tmpz00_10322 = BgL_b1z00_1829
; }  else 
{ 
obj_t BgL_auxz00_10325;
BgL_auxz00_10325 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)50879)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_b1z00_1829); 
FAILURE(BgL_auxz00_10325,BFALSE,BFALSE);} 
BgL_za72za7_3876 = 
(long)CINT(BgL_tmpz00_10322); } 
BgL_tmpz00_10196 = 
(BgL_za71za7_3875-BgL_za72za7_3876); } } } 
return 
(int)(BgL_tmpz00_10196);} } } } } } } } } } 

}



/* _string-suffix-length */
obj_t BGl__stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(obj_t BgL_env1170z00_199, obj_t BgL_opt1169z00_198)
{
{ /* Ieee/string.scm 1258 */
{ /* Ieee/string.scm 1258 */
obj_t BgL_s1z00_1846;obj_t BgL_s2z00_1847;
BgL_s1z00_1846 = 
VECTOR_REF(BgL_opt1169z00_198,((long)0)); 
BgL_s2z00_1847 = 
VECTOR_REF(BgL_opt1169z00_198,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1169z00_198)) { case ((long)2) : 

{ /* Ieee/string.scm 1258 */

{ /* Ieee/string.scm 1258 */
int BgL_tmpz00_10334;
{ /* Ieee/string.scm 1258 */
obj_t BgL_auxz00_10342;obj_t BgL_auxz00_10335;
if(
STRINGP(BgL_s2z00_1847))
{ /* Ieee/string.scm 1258 */
BgL_auxz00_10342 = BgL_s2z00_1847
; }  else 
{ 
obj_t BgL_auxz00_10345;
BgL_auxz00_10345 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)51113)), BGl_string4430z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1847); 
FAILURE(BgL_auxz00_10345,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1846))
{ /* Ieee/string.scm 1258 */
BgL_auxz00_10335 = BgL_s1z00_1846
; }  else 
{ 
obj_t BgL_auxz00_10338;
BgL_auxz00_10338 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)51113)), BGl_string4430z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1846); 
FAILURE(BgL_auxz00_10338,BFALSE,BFALSE);} 
BgL_tmpz00_10334 = 
BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_10335, BgL_auxz00_10342, BFALSE, BFALSE, BFALSE, BFALSE); } 
return 
BINT(BgL_tmpz00_10334);} } break;case ((long)3) : 

{ /* Ieee/string.scm 1258 */
obj_t BgL_start1z00_1855;
BgL_start1z00_1855 = 
VECTOR_REF(BgL_opt1169z00_198,((long)2)); 
{ /* Ieee/string.scm 1258 */

{ /* Ieee/string.scm 1258 */
int BgL_tmpz00_10352;
{ /* Ieee/string.scm 1258 */
obj_t BgL_auxz00_10360;obj_t BgL_auxz00_10353;
if(
STRINGP(BgL_s2z00_1847))
{ /* Ieee/string.scm 1258 */
BgL_auxz00_10360 = BgL_s2z00_1847
; }  else 
{ 
obj_t BgL_auxz00_10363;
BgL_auxz00_10363 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)51113)), BGl_string4430z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1847); 
FAILURE(BgL_auxz00_10363,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1846))
{ /* Ieee/string.scm 1258 */
BgL_auxz00_10353 = BgL_s1z00_1846
; }  else 
{ 
obj_t BgL_auxz00_10356;
BgL_auxz00_10356 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)51113)), BGl_string4430z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1846); 
FAILURE(BgL_auxz00_10356,BFALSE,BFALSE);} 
BgL_tmpz00_10352 = 
BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_10353, BgL_auxz00_10360, BgL_start1z00_1855, BFALSE, BFALSE, BFALSE); } 
return 
BINT(BgL_tmpz00_10352);} } } break;case ((long)4) : 

{ /* Ieee/string.scm 1258 */
obj_t BgL_start1z00_1859;
BgL_start1z00_1859 = 
VECTOR_REF(BgL_opt1169z00_198,((long)2)); 
{ /* Ieee/string.scm 1258 */
obj_t BgL_end1z00_1860;
BgL_end1z00_1860 = 
VECTOR_REF(BgL_opt1169z00_198,((long)3)); 
{ /* Ieee/string.scm 1258 */

{ /* Ieee/string.scm 1258 */
int BgL_tmpz00_10371;
{ /* Ieee/string.scm 1258 */
obj_t BgL_auxz00_10379;obj_t BgL_auxz00_10372;
if(
STRINGP(BgL_s2z00_1847))
{ /* Ieee/string.scm 1258 */
BgL_auxz00_10379 = BgL_s2z00_1847
; }  else 
{ 
obj_t BgL_auxz00_10382;
BgL_auxz00_10382 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)51113)), BGl_string4430z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1847); 
FAILURE(BgL_auxz00_10382,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1846))
{ /* Ieee/string.scm 1258 */
BgL_auxz00_10372 = BgL_s1z00_1846
; }  else 
{ 
obj_t BgL_auxz00_10375;
BgL_auxz00_10375 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)51113)), BGl_string4430z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1846); 
FAILURE(BgL_auxz00_10375,BFALSE,BFALSE);} 
BgL_tmpz00_10371 = 
BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_10372, BgL_auxz00_10379, BgL_start1z00_1859, BgL_end1z00_1860, BFALSE, BFALSE); } 
return 
BINT(BgL_tmpz00_10371);} } } } break;case ((long)5) : 

{ /* Ieee/string.scm 1258 */
obj_t BgL_start1z00_1863;
BgL_start1z00_1863 = 
VECTOR_REF(BgL_opt1169z00_198,((long)2)); 
{ /* Ieee/string.scm 1258 */
obj_t BgL_end1z00_1864;
BgL_end1z00_1864 = 
VECTOR_REF(BgL_opt1169z00_198,((long)3)); 
{ /* Ieee/string.scm 1258 */
obj_t BgL_start2z00_1865;
BgL_start2z00_1865 = 
VECTOR_REF(BgL_opt1169z00_198,((long)4)); 
{ /* Ieee/string.scm 1258 */

{ /* Ieee/string.scm 1258 */
int BgL_tmpz00_10391;
{ /* Ieee/string.scm 1258 */
obj_t BgL_auxz00_10399;obj_t BgL_auxz00_10392;
if(
STRINGP(BgL_s2z00_1847))
{ /* Ieee/string.scm 1258 */
BgL_auxz00_10399 = BgL_s2z00_1847
; }  else 
{ 
obj_t BgL_auxz00_10402;
BgL_auxz00_10402 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)51113)), BGl_string4430z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1847); 
FAILURE(BgL_auxz00_10402,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1846))
{ /* Ieee/string.scm 1258 */
BgL_auxz00_10392 = BgL_s1z00_1846
; }  else 
{ 
obj_t BgL_auxz00_10395;
BgL_auxz00_10395 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)51113)), BGl_string4430z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1846); 
FAILURE(BgL_auxz00_10395,BFALSE,BFALSE);} 
BgL_tmpz00_10391 = 
BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_10392, BgL_auxz00_10399, BgL_start1z00_1863, BgL_end1z00_1864, BgL_start2z00_1865, BFALSE); } 
return 
BINT(BgL_tmpz00_10391);} } } } } break;case ((long)6) : 

{ /* Ieee/string.scm 1258 */
obj_t BgL_start1z00_1867;
BgL_start1z00_1867 = 
VECTOR_REF(BgL_opt1169z00_198,((long)2)); 
{ /* Ieee/string.scm 1258 */
obj_t BgL_end1z00_1868;
BgL_end1z00_1868 = 
VECTOR_REF(BgL_opt1169z00_198,((long)3)); 
{ /* Ieee/string.scm 1258 */
obj_t BgL_start2z00_1869;
BgL_start2z00_1869 = 
VECTOR_REF(BgL_opt1169z00_198,((long)4)); 
{ /* Ieee/string.scm 1258 */
obj_t BgL_end2z00_1870;
BgL_end2z00_1870 = 
VECTOR_REF(BgL_opt1169z00_198,((long)5)); 
{ /* Ieee/string.scm 1258 */

{ /* Ieee/string.scm 1258 */
int BgL_tmpz00_10412;
{ /* Ieee/string.scm 1258 */
obj_t BgL_auxz00_10420;obj_t BgL_auxz00_10413;
if(
STRINGP(BgL_s2z00_1847))
{ /* Ieee/string.scm 1258 */
BgL_auxz00_10420 = BgL_s2z00_1847
; }  else 
{ 
obj_t BgL_auxz00_10423;
BgL_auxz00_10423 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)51113)), BGl_string4430z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1847); 
FAILURE(BgL_auxz00_10423,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1846))
{ /* Ieee/string.scm 1258 */
BgL_auxz00_10413 = BgL_s1z00_1846
; }  else 
{ 
obj_t BgL_auxz00_10416;
BgL_auxz00_10416 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)51113)), BGl_string4430z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1846); 
FAILURE(BgL_auxz00_10416,BFALSE,BFALSE);} 
BgL_tmpz00_10412 = 
BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(BgL_auxz00_10413, BgL_auxz00_10420, BgL_start1z00_1867, BgL_end1z00_1868, BgL_start2z00_1869, BgL_end2z00_1870); } 
return 
BINT(BgL_tmpz00_10412);} } } } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4428z00zz__r4_strings_6_7z00, BGl_string4410z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1169z00_198)));} } } } 

}



/* string-suffix-length */
BGL_EXPORTED_DEF int BGl_stringzd2suffixzd2lengthz00zz__r4_strings_6_7z00(obj_t BgL_s1z00_192, obj_t BgL_s2z00_193, obj_t BgL_start1z00_194, obj_t BgL_end1z00_195, obj_t BgL_start2z00_196, obj_t BgL_end2z00_197)
{
{ /* Ieee/string.scm 1258 */
{ /* Ieee/string.scm 1260 */
long BgL_l1z00_1872;
BgL_l1z00_1872 = 
STRING_LENGTH(BgL_s1z00_192); 
{ /* Ieee/string.scm 1260 */
long BgL_l2z00_1873;
BgL_l2z00_1873 = 
STRING_LENGTH(BgL_s2z00_193); 
{ /* Ieee/string.scm 1261 */
obj_t BgL_b1z00_1874;
{ /* Ieee/string.scm 1262 */
obj_t BgL_procz00_3882;
BgL_procz00_3882 = BGl_symbol4431z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end1z00_195))
{ /* Ieee/string.scm 1206 */
bool_t BgL_test5232z00_10438;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_3887;
{ /* Ieee/string.scm 1206 */
obj_t BgL_tmpz00_10439;
if(
INTEGERP(BgL_end1z00_195))
{ /* Ieee/string.scm 1206 */
BgL_tmpz00_10439 = BgL_end1z00_195
; }  else 
{ 
obj_t BgL_auxz00_10442;
BgL_auxz00_10442 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48914)), BGl_string4432z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end1z00_195); 
FAILURE(BgL_auxz00_10442,BFALSE,BFALSE);} 
BgL_n1z00_3887 = 
(long)CINT(BgL_tmpz00_10439); } 
BgL_test5232z00_10438 = 
(BgL_n1z00_3887<=((long)0)); } 
if(BgL_test5232z00_10438)
{ /* Ieee/string.scm 1206 */
BgL_b1z00_1874 = 
BGl_errorz00zz__errorz00(BgL_procz00_3882, 
string_append_3(BGl_string4414z00zz__r4_strings_6_7z00, BGl_string4415z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end1z00_195); }  else 
{ /* Ieee/string.scm 1208 */
bool_t BgL_test5234z00_10450;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_3889;
{ /* Ieee/string.scm 1208 */
obj_t BgL_tmpz00_10451;
if(
INTEGERP(BgL_end1z00_195))
{ /* Ieee/string.scm 1208 */
BgL_tmpz00_10451 = BgL_end1z00_195
; }  else 
{ 
obj_t BgL_auxz00_10454;
BgL_auxz00_10454 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49006)), BGl_string4432z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end1z00_195); 
FAILURE(BgL_auxz00_10454,BFALSE,BFALSE);} 
BgL_n1z00_3889 = 
(long)CINT(BgL_tmpz00_10451); } 
BgL_test5234z00_10450 = 
(BgL_n1z00_3889>BgL_l1z00_1872); } 
if(BgL_test5234z00_10450)
{ /* Ieee/string.scm 1208 */
BgL_b1z00_1874 = 
BGl_errorz00zz__errorz00(BgL_procz00_3882, 
string_append_3(BGl_string4417z00zz__r4_strings_6_7z00, BGl_string4415z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end1z00_195); }  else 
{ /* Ieee/string.scm 1208 */
BgL_b1z00_1874 = BgL_end1z00_195; } } }  else 
{ /* Ieee/string.scm 1204 */
BgL_b1z00_1874 = 
BINT(BgL_l1z00_1872); } } 
{ /* Ieee/string.scm 1262 */
obj_t BgL_b2z00_1875;
{ /* Ieee/string.scm 1263 */
obj_t BgL_procz00_3892;
BgL_procz00_3892 = BGl_symbol4431z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end2z00_197))
{ /* Ieee/string.scm 1206 */
bool_t BgL_test5237z00_10465;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_3897;
{ /* Ieee/string.scm 1206 */
obj_t BgL_tmpz00_10466;
if(
INTEGERP(BgL_end2z00_197))
{ /* Ieee/string.scm 1206 */
BgL_tmpz00_10466 = BgL_end2z00_197
; }  else 
{ 
obj_t BgL_auxz00_10469;
BgL_auxz00_10469 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48914)), BGl_string4432z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end2z00_197); 
FAILURE(BgL_auxz00_10469,BFALSE,BFALSE);} 
BgL_n1z00_3897 = 
(long)CINT(BgL_tmpz00_10466); } 
BgL_test5237z00_10465 = 
(BgL_n1z00_3897<=((long)0)); } 
if(BgL_test5237z00_10465)
{ /* Ieee/string.scm 1206 */
BgL_b2z00_1875 = 
BGl_errorz00zz__errorz00(BgL_procz00_3892, 
string_append_3(BGl_string4414z00zz__r4_strings_6_7z00, BGl_string4418z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end2z00_197); }  else 
{ /* Ieee/string.scm 1208 */
bool_t BgL_test5239z00_10477;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_3899;
{ /* Ieee/string.scm 1208 */
obj_t BgL_tmpz00_10478;
if(
INTEGERP(BgL_end2z00_197))
{ /* Ieee/string.scm 1208 */
BgL_tmpz00_10478 = BgL_end2z00_197
; }  else 
{ 
obj_t BgL_auxz00_10481;
BgL_auxz00_10481 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49006)), BGl_string4432z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end2z00_197); 
FAILURE(BgL_auxz00_10481,BFALSE,BFALSE);} 
BgL_n1z00_3899 = 
(long)CINT(BgL_tmpz00_10478); } 
BgL_test5239z00_10477 = 
(BgL_n1z00_3899>BgL_l2z00_1873); } 
if(BgL_test5239z00_10477)
{ /* Ieee/string.scm 1208 */
BgL_b2z00_1875 = 
BGl_errorz00zz__errorz00(BgL_procz00_3892, 
string_append_3(BGl_string4417z00zz__r4_strings_6_7z00, BGl_string4418z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end2z00_197); }  else 
{ /* Ieee/string.scm 1208 */
BgL_b2z00_1875 = BgL_end2z00_197; } } }  else 
{ /* Ieee/string.scm 1204 */
BgL_b2z00_1875 = 
BINT(BgL_l2z00_1873); } } 
{ /* Ieee/string.scm 1263 */
obj_t BgL_e1z00_1876;
{ /* Ieee/string.scm 1264 */
obj_t BgL_procz00_3902;
BgL_procz00_3902 = BGl_symbol4431z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start1z00_194))
{ /* Ieee/string.scm 1192 */
bool_t BgL_test5242z00_10492;
{ /* Ieee/string.scm 1192 */
long BgL_n1z00_3907;
{ /* Ieee/string.scm 1192 */
obj_t BgL_tmpz00_10493;
if(
INTEGERP(BgL_start1z00_194))
{ /* Ieee/string.scm 1192 */
BgL_tmpz00_10493 = BgL_start1z00_194
; }  else 
{ 
obj_t BgL_auxz00_10496;
BgL_auxz00_10496 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48393)), BGl_string4432z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start1z00_194); 
FAILURE(BgL_auxz00_10496,BFALSE,BFALSE);} 
BgL_n1z00_3907 = 
(long)CINT(BgL_tmpz00_10493); } 
BgL_test5242z00_10492 = 
(BgL_n1z00_3907<((long)0)); } 
if(BgL_test5242z00_10492)
{ /* Ieee/string.scm 1192 */
BgL_e1z00_1876 = 
BGl_errorz00zz__errorz00(BgL_procz00_3902, 
string_append_3(BGl_string4419z00zz__r4_strings_6_7z00, BGl_string4420z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start1z00_194); }  else 
{ /* Ieee/string.scm 1194 */
bool_t BgL_test5244z00_10504;
{ /* Ieee/string.scm 1194 */
long BgL_n1z00_3909;
{ /* Ieee/string.scm 1194 */
obj_t BgL_tmpz00_10505;
if(
INTEGERP(BgL_start1z00_194))
{ /* Ieee/string.scm 1194 */
BgL_tmpz00_10505 = BgL_start1z00_194
; }  else 
{ 
obj_t BgL_auxz00_10508;
BgL_auxz00_10508 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48488)), BGl_string4432z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start1z00_194); 
FAILURE(BgL_auxz00_10508,BFALSE,BFALSE);} 
BgL_n1z00_3909 = 
(long)CINT(BgL_tmpz00_10505); } 
BgL_test5244z00_10504 = 
(BgL_n1z00_3909>=BgL_l1z00_1872); } 
if(BgL_test5244z00_10504)
{ /* Ieee/string.scm 1194 */
BgL_e1z00_1876 = 
BGl_errorz00zz__errorz00(BgL_procz00_3902, 
string_append_3(BGl_string4421z00zz__r4_strings_6_7z00, BGl_string4420z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start1z00_194); }  else 
{ /* Ieee/string.scm 1194 */
BgL_e1z00_1876 = BgL_start1z00_194; } } }  else 
{ /* Ieee/string.scm 1190 */
BgL_e1z00_1876 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1264 */
obj_t BgL_e2z00_1877;
{ /* Ieee/string.scm 1265 */
obj_t BgL_procz00_3912;
BgL_procz00_3912 = BGl_symbol4431z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start2z00_196))
{ /* Ieee/string.scm 1192 */
bool_t BgL_test5247z00_10519;
{ /* Ieee/string.scm 1192 */
long BgL_n1z00_3917;
{ /* Ieee/string.scm 1192 */
obj_t BgL_tmpz00_10520;
if(
INTEGERP(BgL_start2z00_196))
{ /* Ieee/string.scm 1192 */
BgL_tmpz00_10520 = BgL_start2z00_196
; }  else 
{ 
obj_t BgL_auxz00_10523;
BgL_auxz00_10523 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48393)), BGl_string4432z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start2z00_196); 
FAILURE(BgL_auxz00_10523,BFALSE,BFALSE);} 
BgL_n1z00_3917 = 
(long)CINT(BgL_tmpz00_10520); } 
BgL_test5247z00_10519 = 
(BgL_n1z00_3917<((long)0)); } 
if(BgL_test5247z00_10519)
{ /* Ieee/string.scm 1192 */
BgL_e2z00_1877 = 
BGl_errorz00zz__errorz00(BgL_procz00_3912, 
string_append_3(BGl_string4419z00zz__r4_strings_6_7z00, BGl_string4422z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start2z00_196); }  else 
{ /* Ieee/string.scm 1194 */
bool_t BgL_test5249z00_10531;
{ /* Ieee/string.scm 1194 */
long BgL_n1z00_3919;
{ /* Ieee/string.scm 1194 */
obj_t BgL_tmpz00_10532;
if(
INTEGERP(BgL_start2z00_196))
{ /* Ieee/string.scm 1194 */
BgL_tmpz00_10532 = BgL_start2z00_196
; }  else 
{ 
obj_t BgL_auxz00_10535;
BgL_auxz00_10535 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48488)), BGl_string4432z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start2z00_196); 
FAILURE(BgL_auxz00_10535,BFALSE,BFALSE);} 
BgL_n1z00_3919 = 
(long)CINT(BgL_tmpz00_10532); } 
BgL_test5249z00_10531 = 
(BgL_n1z00_3919>=BgL_l2z00_1873); } 
if(BgL_test5249z00_10531)
{ /* Ieee/string.scm 1194 */
BgL_e2z00_1877 = 
BGl_errorz00zz__errorz00(BgL_procz00_3912, 
string_append_3(BGl_string4421z00zz__r4_strings_6_7z00, BGl_string4422z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start2z00_196); }  else 
{ /* Ieee/string.scm 1194 */
BgL_e2z00_1877 = BgL_start2z00_196; } } }  else 
{ /* Ieee/string.scm 1190 */
BgL_e2z00_1877 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1265 */

{ 
long BgL_i1z00_1881;long BgL_i2z00_1882;
{ /* Ieee/string.scm 1266 */
long BgL_tmpz00_10544;
{ /* Ieee/string.scm 1266 */
long BgL_za71za7_3922;
{ /* Ieee/string.scm 1266 */
obj_t BgL_tmpz00_10613;
if(
INTEGERP(BgL_b1z00_1874))
{ /* Ieee/string.scm 1266 */
BgL_tmpz00_10613 = BgL_b1z00_1874
; }  else 
{ 
obj_t BgL_auxz00_10616;
BgL_auxz00_10616 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)51573)), BGl_string4432z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_b1z00_1874); 
FAILURE(BgL_auxz00_10616,BFALSE,BFALSE);} 
BgL_za71za7_3922 = 
(long)CINT(BgL_tmpz00_10613); } 
BgL_i1z00_1881 = 
(BgL_za71za7_3922-((long)1)); } 
{ /* Ieee/string.scm 1267 */
long BgL_za71za7_3924;
{ /* Ieee/string.scm 1267 */
obj_t BgL_tmpz00_10622;
if(
INTEGERP(BgL_b2z00_1875))
{ /* Ieee/string.scm 1267 */
BgL_tmpz00_10622 = BgL_b2z00_1875
; }  else 
{ 
obj_t BgL_auxz00_10625;
BgL_auxz00_10625 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)51592)), BGl_string4432z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_b2z00_1875); 
FAILURE(BgL_auxz00_10625,BFALSE,BFALSE);} 
BgL_za71za7_3924 = 
(long)CINT(BgL_tmpz00_10622); } 
BgL_i2z00_1882 = 
(BgL_za71za7_3924-((long)1)); } 
BgL_zc3z04anonymousza31773ze3z87_1883:
{ /* Ieee/string.scm 1269 */
bool_t BgL_test5251z00_10545;
{ /* Ieee/string.scm 1269 */
bool_t BgL_test5252z00_10546;
{ /* Ieee/string.scm 1269 */
long BgL_n2z00_3927;
{ /* Ieee/string.scm 1269 */
obj_t BgL_tmpz00_10547;
if(
INTEGERP(BgL_e1z00_1876))
{ /* Ieee/string.scm 1269 */
BgL_tmpz00_10547 = BgL_e1z00_1876
; }  else 
{ 
obj_t BgL_auxz00_10550;
BgL_auxz00_10550 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)51626)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_e1z00_1876); 
FAILURE(BgL_auxz00_10550,BFALSE,BFALSE);} 
BgL_n2z00_3927 = 
(long)CINT(BgL_tmpz00_10547); } 
BgL_test5252z00_10546 = 
(BgL_i1z00_1881<BgL_n2z00_3927); } 
if(BgL_test5252z00_10546)
{ /* Ieee/string.scm 1269 */
BgL_test5251z00_10545 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 1269 */
long BgL_n2z00_3930;
{ /* Ieee/string.scm 1269 */
obj_t BgL_tmpz00_10556;
if(
INTEGERP(BgL_e2z00_1877))
{ /* Ieee/string.scm 1269 */
BgL_tmpz00_10556 = BgL_e2z00_1877
; }  else 
{ 
obj_t BgL_auxz00_10559;
BgL_auxz00_10559 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)51638)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_e2z00_1877); 
FAILURE(BgL_auxz00_10559,BFALSE,BFALSE);} 
BgL_n2z00_3930 = 
(long)CINT(BgL_tmpz00_10556); } 
BgL_test5251z00_10545 = 
(BgL_i2z00_1882<BgL_n2z00_3930); } } 
if(BgL_test5251z00_10545)
{ /* Ieee/string.scm 1270 */
long BgL_za71za7_3934;
{ /* Ieee/string.scm 1270 */
obj_t BgL_tmpz00_10565;
if(
INTEGERP(BgL_b1z00_1874))
{ /* Ieee/string.scm 1270 */
BgL_tmpz00_10565 = BgL_b1z00_1874
; }  else 
{ 
obj_t BgL_auxz00_10568;
BgL_auxz00_10568 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)51654)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_b1z00_1874); 
FAILURE(BgL_auxz00_10568,BFALSE,BFALSE);} 
BgL_za71za7_3934 = 
(long)CINT(BgL_tmpz00_10565); } 
BgL_tmpz00_10544 = 
(BgL_za71za7_3934-
(BgL_i1z00_1881+((long)1))); }  else 
{ /* Ieee/string.scm 1271 */
bool_t BgL_test5256z00_10575;
{ /* Ieee/string.scm 1271 */
unsigned char BgL_auxz00_10587;unsigned char BgL_tmpz00_10576;
{ /* Ieee/string.scm 327 */
long BgL_l3233z00_5208;
BgL_l3233z00_5208 = 
STRING_LENGTH(BgL_s2z00_193); 
if(
BOUND_CHECK(BgL_i2z00_1882, BgL_l3233z00_5208))
{ /* Ieee/string.scm 327 */
BgL_auxz00_10587 = 
STRING_REF(BgL_s2z00_193, BgL_i2z00_1882)
; }  else 
{ 
obj_t BgL_auxz00_10592;
BgL_auxz00_10592 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_s2z00_193, 
(int)(BgL_l3233z00_5208), 
(int)(BgL_i2z00_1882)); 
FAILURE(BgL_auxz00_10592,BFALSE,BFALSE);} } 
{ /* Ieee/string.scm 327 */
long BgL_l3229z00_5204;
BgL_l3229z00_5204 = 
STRING_LENGTH(BgL_s1z00_192); 
if(
BOUND_CHECK(BgL_i1z00_1881, BgL_l3229z00_5204))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_10576 = 
STRING_REF(BgL_s1z00_192, BgL_i1z00_1881)
; }  else 
{ 
obj_t BgL_auxz00_10581;
BgL_auxz00_10581 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_s1z00_192, 
(int)(BgL_l3229z00_5204), 
(int)(BgL_i1z00_1881)); 
FAILURE(BgL_auxz00_10581,BFALSE,BFALSE);} } 
BgL_test5256z00_10575 = 
(BgL_tmpz00_10576==BgL_auxz00_10587); } 
if(BgL_test5256z00_10575)
{ 
long BgL_i2z00_10601;long BgL_i1z00_10599;
BgL_i1z00_10599 = 
(BgL_i1z00_1881-((long)1)); 
BgL_i2z00_10601 = 
(BgL_i2z00_1882-((long)1)); 
BgL_i2z00_1882 = BgL_i2z00_10601; 
BgL_i1z00_1881 = BgL_i1z00_10599; 
goto BgL_zc3z04anonymousza31773ze3z87_1883;}  else 
{ /* Ieee/string.scm 1274 */
long BgL_za71za7_3952;
{ /* Ieee/string.scm 1274 */
obj_t BgL_tmpz00_10603;
if(
INTEGERP(BgL_b1z00_1874))
{ /* Ieee/string.scm 1274 */
BgL_tmpz00_10603 = BgL_b1z00_1874
; }  else 
{ 
obj_t BgL_auxz00_10606;
BgL_auxz00_10606 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)51781)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_b1z00_1874); 
FAILURE(BgL_auxz00_10606,BFALSE,BFALSE);} 
BgL_za71za7_3952 = 
(long)CINT(BgL_tmpz00_10603); } 
BgL_tmpz00_10544 = 
(BgL_za71za7_3952-
(BgL_i1z00_1881+((long)1))); } } } 
return 
(int)(BgL_tmpz00_10544);} } } } } } } } } } 

}



/* _string-suffix-length-ci */
obj_t BGl__stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t BgL_env1174z00_207, obj_t BgL_opt1173z00_206)
{
{ /* Ieee/string.scm 1279 */
{ /* Ieee/string.scm 1279 */
obj_t BgL_s1z00_1897;obj_t BgL_s2z00_1898;
BgL_s1z00_1897 = 
VECTOR_REF(BgL_opt1173z00_206,((long)0)); 
BgL_s2z00_1898 = 
VECTOR_REF(BgL_opt1173z00_206,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1173z00_206)) { case ((long)2) : 

{ /* Ieee/string.scm 1279 */

{ /* Ieee/string.scm 1279 */
int BgL_tmpz00_10634;
{ /* Ieee/string.scm 1279 */
obj_t BgL_auxz00_10642;obj_t BgL_auxz00_10635;
if(
STRINGP(BgL_s2z00_1898))
{ /* Ieee/string.scm 1279 */
BgL_auxz00_10642 = BgL_s2z00_1898
; }  else 
{ 
obj_t BgL_auxz00_10645;
BgL_auxz00_10645 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52024)), BGl_string4435z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1898); 
FAILURE(BgL_auxz00_10645,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1897))
{ /* Ieee/string.scm 1279 */
BgL_auxz00_10635 = BgL_s1z00_1897
; }  else 
{ 
obj_t BgL_auxz00_10638;
BgL_auxz00_10638 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52024)), BGl_string4435z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1897); 
FAILURE(BgL_auxz00_10638,BFALSE,BFALSE);} 
BgL_tmpz00_10634 = 
BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_10635, BgL_auxz00_10642, BFALSE, BFALSE, BFALSE, BFALSE); } 
return 
BINT(BgL_tmpz00_10634);} } break;case ((long)3) : 

{ /* Ieee/string.scm 1279 */
obj_t BgL_start1z00_1906;
BgL_start1z00_1906 = 
VECTOR_REF(BgL_opt1173z00_206,((long)2)); 
{ /* Ieee/string.scm 1279 */

{ /* Ieee/string.scm 1279 */
int BgL_tmpz00_10652;
{ /* Ieee/string.scm 1279 */
obj_t BgL_auxz00_10660;obj_t BgL_auxz00_10653;
if(
STRINGP(BgL_s2z00_1898))
{ /* Ieee/string.scm 1279 */
BgL_auxz00_10660 = BgL_s2z00_1898
; }  else 
{ 
obj_t BgL_auxz00_10663;
BgL_auxz00_10663 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52024)), BGl_string4435z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1898); 
FAILURE(BgL_auxz00_10663,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1897))
{ /* Ieee/string.scm 1279 */
BgL_auxz00_10653 = BgL_s1z00_1897
; }  else 
{ 
obj_t BgL_auxz00_10656;
BgL_auxz00_10656 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52024)), BGl_string4435z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1897); 
FAILURE(BgL_auxz00_10656,BFALSE,BFALSE);} 
BgL_tmpz00_10652 = 
BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_10653, BgL_auxz00_10660, BgL_start1z00_1906, BFALSE, BFALSE, BFALSE); } 
return 
BINT(BgL_tmpz00_10652);} } } break;case ((long)4) : 

{ /* Ieee/string.scm 1279 */
obj_t BgL_start1z00_1910;
BgL_start1z00_1910 = 
VECTOR_REF(BgL_opt1173z00_206,((long)2)); 
{ /* Ieee/string.scm 1279 */
obj_t BgL_end1z00_1911;
BgL_end1z00_1911 = 
VECTOR_REF(BgL_opt1173z00_206,((long)3)); 
{ /* Ieee/string.scm 1279 */

{ /* Ieee/string.scm 1279 */
int BgL_tmpz00_10671;
{ /* Ieee/string.scm 1279 */
obj_t BgL_auxz00_10679;obj_t BgL_auxz00_10672;
if(
STRINGP(BgL_s2z00_1898))
{ /* Ieee/string.scm 1279 */
BgL_auxz00_10679 = BgL_s2z00_1898
; }  else 
{ 
obj_t BgL_auxz00_10682;
BgL_auxz00_10682 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52024)), BGl_string4435z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1898); 
FAILURE(BgL_auxz00_10682,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1897))
{ /* Ieee/string.scm 1279 */
BgL_auxz00_10672 = BgL_s1z00_1897
; }  else 
{ 
obj_t BgL_auxz00_10675;
BgL_auxz00_10675 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52024)), BGl_string4435z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1897); 
FAILURE(BgL_auxz00_10675,BFALSE,BFALSE);} 
BgL_tmpz00_10671 = 
BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_10672, BgL_auxz00_10679, BgL_start1z00_1910, BgL_end1z00_1911, BFALSE, BFALSE); } 
return 
BINT(BgL_tmpz00_10671);} } } } break;case ((long)5) : 

{ /* Ieee/string.scm 1279 */
obj_t BgL_start1z00_1914;
BgL_start1z00_1914 = 
VECTOR_REF(BgL_opt1173z00_206,((long)2)); 
{ /* Ieee/string.scm 1279 */
obj_t BgL_end1z00_1915;
BgL_end1z00_1915 = 
VECTOR_REF(BgL_opt1173z00_206,((long)3)); 
{ /* Ieee/string.scm 1279 */
obj_t BgL_start2z00_1916;
BgL_start2z00_1916 = 
VECTOR_REF(BgL_opt1173z00_206,((long)4)); 
{ /* Ieee/string.scm 1279 */

{ /* Ieee/string.scm 1279 */
int BgL_tmpz00_10691;
{ /* Ieee/string.scm 1279 */
obj_t BgL_auxz00_10699;obj_t BgL_auxz00_10692;
if(
STRINGP(BgL_s2z00_1898))
{ /* Ieee/string.scm 1279 */
BgL_auxz00_10699 = BgL_s2z00_1898
; }  else 
{ 
obj_t BgL_auxz00_10702;
BgL_auxz00_10702 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52024)), BGl_string4435z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1898); 
FAILURE(BgL_auxz00_10702,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1897))
{ /* Ieee/string.scm 1279 */
BgL_auxz00_10692 = BgL_s1z00_1897
; }  else 
{ 
obj_t BgL_auxz00_10695;
BgL_auxz00_10695 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52024)), BGl_string4435z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1897); 
FAILURE(BgL_auxz00_10695,BFALSE,BFALSE);} 
BgL_tmpz00_10691 = 
BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_10692, BgL_auxz00_10699, BgL_start1z00_1914, BgL_end1z00_1915, BgL_start2z00_1916, BFALSE); } 
return 
BINT(BgL_tmpz00_10691);} } } } } break;case ((long)6) : 

{ /* Ieee/string.scm 1279 */
obj_t BgL_start1z00_1918;
BgL_start1z00_1918 = 
VECTOR_REF(BgL_opt1173z00_206,((long)2)); 
{ /* Ieee/string.scm 1279 */
obj_t BgL_end1z00_1919;
BgL_end1z00_1919 = 
VECTOR_REF(BgL_opt1173z00_206,((long)3)); 
{ /* Ieee/string.scm 1279 */
obj_t BgL_start2z00_1920;
BgL_start2z00_1920 = 
VECTOR_REF(BgL_opt1173z00_206,((long)4)); 
{ /* Ieee/string.scm 1279 */
obj_t BgL_end2z00_1921;
BgL_end2z00_1921 = 
VECTOR_REF(BgL_opt1173z00_206,((long)5)); 
{ /* Ieee/string.scm 1279 */

{ /* Ieee/string.scm 1279 */
int BgL_tmpz00_10712;
{ /* Ieee/string.scm 1279 */
obj_t BgL_auxz00_10720;obj_t BgL_auxz00_10713;
if(
STRINGP(BgL_s2z00_1898))
{ /* Ieee/string.scm 1279 */
BgL_auxz00_10720 = BgL_s2z00_1898
; }  else 
{ 
obj_t BgL_auxz00_10723;
BgL_auxz00_10723 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52024)), BGl_string4435z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1898); 
FAILURE(BgL_auxz00_10723,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1897))
{ /* Ieee/string.scm 1279 */
BgL_auxz00_10713 = BgL_s1z00_1897
; }  else 
{ 
obj_t BgL_auxz00_10716;
BgL_auxz00_10716 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52024)), BGl_string4435z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1897); 
FAILURE(BgL_auxz00_10716,BFALSE,BFALSE);} 
BgL_tmpz00_10712 = 
BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(BgL_auxz00_10713, BgL_auxz00_10720, BgL_start1z00_1918, BgL_end1z00_1919, BgL_start2z00_1920, BgL_end2z00_1921); } 
return 
BINT(BgL_tmpz00_10712);} } } } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4433z00zz__r4_strings_6_7z00, BGl_string4410z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1173z00_206)));} } } } 

}



/* string-suffix-length-ci */
BGL_EXPORTED_DEF int BGl_stringzd2suffixzd2lengthzd2cizd2zz__r4_strings_6_7z00(obj_t BgL_s1z00_200, obj_t BgL_s2z00_201, obj_t BgL_start1z00_202, obj_t BgL_end1z00_203, obj_t BgL_start2z00_204, obj_t BgL_end2z00_205)
{
{ /* Ieee/string.scm 1279 */
{ /* Ieee/string.scm 1281 */
long BgL_l1z00_1923;
BgL_l1z00_1923 = 
STRING_LENGTH(BgL_s1z00_200); 
{ /* Ieee/string.scm 1281 */
long BgL_l2z00_1924;
BgL_l2z00_1924 = 
STRING_LENGTH(BgL_s2z00_201); 
{ /* Ieee/string.scm 1282 */
obj_t BgL_b1z00_1925;
{ /* Ieee/string.scm 1283 */
obj_t BgL_procz00_3959;
BgL_procz00_3959 = BGl_symbol4436z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end1z00_203))
{ /* Ieee/string.scm 1206 */
bool_t BgL_test5273z00_10738;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_3964;
{ /* Ieee/string.scm 1206 */
obj_t BgL_tmpz00_10739;
if(
INTEGERP(BgL_end1z00_203))
{ /* Ieee/string.scm 1206 */
BgL_tmpz00_10739 = BgL_end1z00_203
; }  else 
{ 
obj_t BgL_auxz00_10742;
BgL_auxz00_10742 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48914)), BGl_string4437z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end1z00_203); 
FAILURE(BgL_auxz00_10742,BFALSE,BFALSE);} 
BgL_n1z00_3964 = 
(long)CINT(BgL_tmpz00_10739); } 
BgL_test5273z00_10738 = 
(BgL_n1z00_3964<=((long)0)); } 
if(BgL_test5273z00_10738)
{ /* Ieee/string.scm 1206 */
BgL_b1z00_1925 = 
BGl_errorz00zz__errorz00(BgL_procz00_3959, 
string_append_3(BGl_string4414z00zz__r4_strings_6_7z00, BGl_string4415z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end1z00_203); }  else 
{ /* Ieee/string.scm 1208 */
bool_t BgL_test5275z00_10750;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_3966;
{ /* Ieee/string.scm 1208 */
obj_t BgL_tmpz00_10751;
if(
INTEGERP(BgL_end1z00_203))
{ /* Ieee/string.scm 1208 */
BgL_tmpz00_10751 = BgL_end1z00_203
; }  else 
{ 
obj_t BgL_auxz00_10754;
BgL_auxz00_10754 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49006)), BGl_string4437z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end1z00_203); 
FAILURE(BgL_auxz00_10754,BFALSE,BFALSE);} 
BgL_n1z00_3966 = 
(long)CINT(BgL_tmpz00_10751); } 
BgL_test5275z00_10750 = 
(BgL_n1z00_3966>BgL_l1z00_1923); } 
if(BgL_test5275z00_10750)
{ /* Ieee/string.scm 1208 */
BgL_b1z00_1925 = 
BGl_errorz00zz__errorz00(BgL_procz00_3959, 
string_append_3(BGl_string4417z00zz__r4_strings_6_7z00, BGl_string4415z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end1z00_203); }  else 
{ /* Ieee/string.scm 1208 */
BgL_b1z00_1925 = BgL_end1z00_203; } } }  else 
{ /* Ieee/string.scm 1204 */
BgL_b1z00_1925 = 
BINT(BgL_l1z00_1923); } } 
{ /* Ieee/string.scm 1283 */
obj_t BgL_b2z00_1926;
{ /* Ieee/string.scm 1284 */
obj_t BgL_procz00_3969;
BgL_procz00_3969 = BGl_symbol4436z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end2z00_205))
{ /* Ieee/string.scm 1206 */
bool_t BgL_test5278z00_10765;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_3974;
{ /* Ieee/string.scm 1206 */
obj_t BgL_tmpz00_10766;
if(
INTEGERP(BgL_end2z00_205))
{ /* Ieee/string.scm 1206 */
BgL_tmpz00_10766 = BgL_end2z00_205
; }  else 
{ 
obj_t BgL_auxz00_10769;
BgL_auxz00_10769 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48914)), BGl_string4437z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end2z00_205); 
FAILURE(BgL_auxz00_10769,BFALSE,BFALSE);} 
BgL_n1z00_3974 = 
(long)CINT(BgL_tmpz00_10766); } 
BgL_test5278z00_10765 = 
(BgL_n1z00_3974<=((long)0)); } 
if(BgL_test5278z00_10765)
{ /* Ieee/string.scm 1206 */
BgL_b2z00_1926 = 
BGl_errorz00zz__errorz00(BgL_procz00_3969, 
string_append_3(BGl_string4414z00zz__r4_strings_6_7z00, BGl_string4418z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end2z00_205); }  else 
{ /* Ieee/string.scm 1208 */
bool_t BgL_test5280z00_10777;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_3976;
{ /* Ieee/string.scm 1208 */
obj_t BgL_tmpz00_10778;
if(
INTEGERP(BgL_end2z00_205))
{ /* Ieee/string.scm 1208 */
BgL_tmpz00_10778 = BgL_end2z00_205
; }  else 
{ 
obj_t BgL_auxz00_10781;
BgL_auxz00_10781 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49006)), BGl_string4437z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end2z00_205); 
FAILURE(BgL_auxz00_10781,BFALSE,BFALSE);} 
BgL_n1z00_3976 = 
(long)CINT(BgL_tmpz00_10778); } 
BgL_test5280z00_10777 = 
(BgL_n1z00_3976>BgL_l2z00_1924); } 
if(BgL_test5280z00_10777)
{ /* Ieee/string.scm 1208 */
BgL_b2z00_1926 = 
BGl_errorz00zz__errorz00(BgL_procz00_3969, 
string_append_3(BGl_string4417z00zz__r4_strings_6_7z00, BGl_string4418z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end2z00_205); }  else 
{ /* Ieee/string.scm 1208 */
BgL_b2z00_1926 = BgL_end2z00_205; } } }  else 
{ /* Ieee/string.scm 1204 */
BgL_b2z00_1926 = 
BINT(BgL_l2z00_1924); } } 
{ /* Ieee/string.scm 1284 */
obj_t BgL_e1z00_1927;
{ /* Ieee/string.scm 1285 */
obj_t BgL_procz00_3979;
BgL_procz00_3979 = BGl_symbol4436z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start1z00_202))
{ /* Ieee/string.scm 1192 */
bool_t BgL_test5283z00_10792;
{ /* Ieee/string.scm 1192 */
long BgL_n1z00_3984;
{ /* Ieee/string.scm 1192 */
obj_t BgL_tmpz00_10793;
if(
INTEGERP(BgL_start1z00_202))
{ /* Ieee/string.scm 1192 */
BgL_tmpz00_10793 = BgL_start1z00_202
; }  else 
{ 
obj_t BgL_auxz00_10796;
BgL_auxz00_10796 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48393)), BGl_string4437z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start1z00_202); 
FAILURE(BgL_auxz00_10796,BFALSE,BFALSE);} 
BgL_n1z00_3984 = 
(long)CINT(BgL_tmpz00_10793); } 
BgL_test5283z00_10792 = 
(BgL_n1z00_3984<((long)0)); } 
if(BgL_test5283z00_10792)
{ /* Ieee/string.scm 1192 */
BgL_e1z00_1927 = 
BGl_errorz00zz__errorz00(BgL_procz00_3979, 
string_append_3(BGl_string4419z00zz__r4_strings_6_7z00, BGl_string4420z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start1z00_202); }  else 
{ /* Ieee/string.scm 1194 */
bool_t BgL_test5285z00_10804;
{ /* Ieee/string.scm 1194 */
long BgL_n1z00_3986;
{ /* Ieee/string.scm 1194 */
obj_t BgL_tmpz00_10805;
if(
INTEGERP(BgL_start1z00_202))
{ /* Ieee/string.scm 1194 */
BgL_tmpz00_10805 = BgL_start1z00_202
; }  else 
{ 
obj_t BgL_auxz00_10808;
BgL_auxz00_10808 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48488)), BGl_string4437z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start1z00_202); 
FAILURE(BgL_auxz00_10808,BFALSE,BFALSE);} 
BgL_n1z00_3986 = 
(long)CINT(BgL_tmpz00_10805); } 
BgL_test5285z00_10804 = 
(BgL_n1z00_3986>=BgL_l1z00_1923); } 
if(BgL_test5285z00_10804)
{ /* Ieee/string.scm 1194 */
BgL_e1z00_1927 = 
BGl_errorz00zz__errorz00(BgL_procz00_3979, 
string_append_3(BGl_string4421z00zz__r4_strings_6_7z00, BGl_string4420z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start1z00_202); }  else 
{ /* Ieee/string.scm 1194 */
BgL_e1z00_1927 = BgL_start1z00_202; } } }  else 
{ /* Ieee/string.scm 1190 */
BgL_e1z00_1927 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1285 */
obj_t BgL_e2z00_1928;
{ /* Ieee/string.scm 1286 */
obj_t BgL_procz00_3989;
BgL_procz00_3989 = BGl_symbol4436z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start2z00_204))
{ /* Ieee/string.scm 1192 */
bool_t BgL_test5288z00_10819;
{ /* Ieee/string.scm 1192 */
long BgL_n1z00_3994;
{ /* Ieee/string.scm 1192 */
obj_t BgL_tmpz00_10820;
if(
INTEGERP(BgL_start2z00_204))
{ /* Ieee/string.scm 1192 */
BgL_tmpz00_10820 = BgL_start2z00_204
; }  else 
{ 
obj_t BgL_auxz00_10823;
BgL_auxz00_10823 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48393)), BGl_string4437z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start2z00_204); 
FAILURE(BgL_auxz00_10823,BFALSE,BFALSE);} 
BgL_n1z00_3994 = 
(long)CINT(BgL_tmpz00_10820); } 
BgL_test5288z00_10819 = 
(BgL_n1z00_3994<((long)0)); } 
if(BgL_test5288z00_10819)
{ /* Ieee/string.scm 1192 */
BgL_e2z00_1928 = 
BGl_errorz00zz__errorz00(BgL_procz00_3989, 
string_append_3(BGl_string4419z00zz__r4_strings_6_7z00, BGl_string4422z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start2z00_204); }  else 
{ /* Ieee/string.scm 1194 */
bool_t BgL_test5290z00_10831;
{ /* Ieee/string.scm 1194 */
long BgL_n1z00_3996;
{ /* Ieee/string.scm 1194 */
obj_t BgL_tmpz00_10832;
if(
INTEGERP(BgL_start2z00_204))
{ /* Ieee/string.scm 1194 */
BgL_tmpz00_10832 = BgL_start2z00_204
; }  else 
{ 
obj_t BgL_auxz00_10835;
BgL_auxz00_10835 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48488)), BGl_string4437z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start2z00_204); 
FAILURE(BgL_auxz00_10835,BFALSE,BFALSE);} 
BgL_n1z00_3996 = 
(long)CINT(BgL_tmpz00_10832); } 
BgL_test5290z00_10831 = 
(BgL_n1z00_3996>=BgL_l2z00_1924); } 
if(BgL_test5290z00_10831)
{ /* Ieee/string.scm 1194 */
BgL_e2z00_1928 = 
BGl_errorz00zz__errorz00(BgL_procz00_3989, 
string_append_3(BGl_string4421z00zz__r4_strings_6_7z00, BGl_string4422z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start2z00_204); }  else 
{ /* Ieee/string.scm 1194 */
BgL_e2z00_1928 = BgL_start2z00_204; } } }  else 
{ /* Ieee/string.scm 1190 */
BgL_e2z00_1928 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1286 */

{ 
long BgL_i1z00_1932;long BgL_i2z00_1933;
{ /* Ieee/string.scm 1287 */
long BgL_tmpz00_10844;
{ /* Ieee/string.scm 1287 */
long BgL_za71za7_3999;
{ /* Ieee/string.scm 1287 */
obj_t BgL_tmpz00_10917;
if(
INTEGERP(BgL_b1z00_1925))
{ /* Ieee/string.scm 1287 */
BgL_tmpz00_10917 = BgL_b1z00_1925
; }  else 
{ 
obj_t BgL_auxz00_10920;
BgL_auxz00_10920 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52502)), BGl_string4437z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_b1z00_1925); 
FAILURE(BgL_auxz00_10920,BFALSE,BFALSE);} 
BgL_za71za7_3999 = 
(long)CINT(BgL_tmpz00_10917); } 
BgL_i1z00_1932 = 
(BgL_za71za7_3999-((long)1)); } 
{ /* Ieee/string.scm 1288 */
long BgL_za71za7_4001;
{ /* Ieee/string.scm 1288 */
obj_t BgL_tmpz00_10926;
if(
INTEGERP(BgL_b2z00_1926))
{ /* Ieee/string.scm 1288 */
BgL_tmpz00_10926 = BgL_b2z00_1926
; }  else 
{ 
obj_t BgL_auxz00_10929;
BgL_auxz00_10929 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52521)), BGl_string4437z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_b2z00_1926); 
FAILURE(BgL_auxz00_10929,BFALSE,BFALSE);} 
BgL_za71za7_4001 = 
(long)CINT(BgL_tmpz00_10926); } 
BgL_i2z00_1933 = 
(BgL_za71za7_4001-((long)1)); } 
BgL_zc3z04anonymousza31787ze3z87_1934:
{ /* Ieee/string.scm 1290 */
bool_t BgL_test5292z00_10845;
{ /* Ieee/string.scm 1290 */
bool_t BgL_test5293z00_10846;
{ /* Ieee/string.scm 1290 */
long BgL_n2z00_4004;
{ /* Ieee/string.scm 1290 */
obj_t BgL_tmpz00_10847;
if(
INTEGERP(BgL_e1z00_1927))
{ /* Ieee/string.scm 1290 */
BgL_tmpz00_10847 = BgL_e1z00_1927
; }  else 
{ 
obj_t BgL_auxz00_10850;
BgL_auxz00_10850 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52555)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_e1z00_1927); 
FAILURE(BgL_auxz00_10850,BFALSE,BFALSE);} 
BgL_n2z00_4004 = 
(long)CINT(BgL_tmpz00_10847); } 
BgL_test5293z00_10846 = 
(BgL_i1z00_1932<BgL_n2z00_4004); } 
if(BgL_test5293z00_10846)
{ /* Ieee/string.scm 1290 */
BgL_test5292z00_10845 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 1290 */
long BgL_n2z00_4007;
{ /* Ieee/string.scm 1290 */
obj_t BgL_tmpz00_10856;
if(
INTEGERP(BgL_e2z00_1928))
{ /* Ieee/string.scm 1290 */
BgL_tmpz00_10856 = BgL_e2z00_1928
; }  else 
{ 
obj_t BgL_auxz00_10859;
BgL_auxz00_10859 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52567)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_e2z00_1928); 
FAILURE(BgL_auxz00_10859,BFALSE,BFALSE);} 
BgL_n2z00_4007 = 
(long)CINT(BgL_tmpz00_10856); } 
BgL_test5292z00_10845 = 
(BgL_i2z00_1933<BgL_n2z00_4007); } } 
if(BgL_test5292z00_10845)
{ /* Ieee/string.scm 1291 */
long BgL_za71za7_4011;
{ /* Ieee/string.scm 1291 */
obj_t BgL_tmpz00_10865;
if(
INTEGERP(BgL_b1z00_1925))
{ /* Ieee/string.scm 1291 */
BgL_tmpz00_10865 = BgL_b1z00_1925
; }  else 
{ 
obj_t BgL_auxz00_10868;
BgL_auxz00_10868 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52583)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_b1z00_1925); 
FAILURE(BgL_auxz00_10868,BFALSE,BFALSE);} 
BgL_za71za7_4011 = 
(long)CINT(BgL_tmpz00_10865); } 
BgL_tmpz00_10844 = 
(BgL_za71za7_4011-
(BgL_i1z00_1932+((long)1))); }  else 
{ /* Ieee/string.scm 1292 */
bool_t BgL_test5297z00_10875;
{ /* Ieee/string.scm 1292 */
unsigned char BgL_auxz00_10889;unsigned char BgL_tmpz00_10876;
{ /* Ieee/string.scm 1292 */
unsigned char BgL_tmpz00_10890;
{ /* Ieee/string.scm 327 */
long BgL_l3241z00_5216;
BgL_l3241z00_5216 = 
STRING_LENGTH(BgL_s2z00_201); 
if(
BOUND_CHECK(BgL_i2z00_1933, BgL_l3241z00_5216))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_10890 = 
STRING_REF(BgL_s2z00_201, BgL_i2z00_1933)
; }  else 
{ 
obj_t BgL_auxz00_10895;
BgL_auxz00_10895 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_s2z00_201, 
(int)(BgL_l3241z00_5216), 
(int)(BgL_i2z00_1933)); 
FAILURE(BgL_auxz00_10895,BFALSE,BFALSE);} } 
BgL_auxz00_10889 = 
toupper(BgL_tmpz00_10890); } 
{ /* Ieee/string.scm 1292 */
unsigned char BgL_tmpz00_10877;
{ /* Ieee/string.scm 327 */
long BgL_l3237z00_5212;
BgL_l3237z00_5212 = 
STRING_LENGTH(BgL_s1z00_200); 
if(
BOUND_CHECK(BgL_i1z00_1932, BgL_l3237z00_5212))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_10877 = 
STRING_REF(BgL_s1z00_200, BgL_i1z00_1932)
; }  else 
{ 
obj_t BgL_auxz00_10882;
BgL_auxz00_10882 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_s1z00_200, 
(int)(BgL_l3237z00_5212), 
(int)(BgL_i1z00_1932)); 
FAILURE(BgL_auxz00_10882,BFALSE,BFALSE);} } 
BgL_tmpz00_10876 = 
toupper(BgL_tmpz00_10877); } 
BgL_test5297z00_10875 = 
(BgL_tmpz00_10876==BgL_auxz00_10889); } 
if(BgL_test5297z00_10875)
{ 
long BgL_i2z00_10905;long BgL_i1z00_10903;
BgL_i1z00_10903 = 
(BgL_i1z00_1932-((long)1)); 
BgL_i2z00_10905 = 
(BgL_i2z00_1933-((long)1)); 
BgL_i2z00_1933 = BgL_i2z00_10905; 
BgL_i1z00_1932 = BgL_i1z00_10903; 
goto BgL_zc3z04anonymousza31787ze3z87_1934;}  else 
{ /* Ieee/string.scm 1295 */
long BgL_za71za7_4038;
{ /* Ieee/string.scm 1295 */
obj_t BgL_tmpz00_10907;
if(
INTEGERP(BgL_b1z00_1925))
{ /* Ieee/string.scm 1295 */
BgL_tmpz00_10907 = BgL_b1z00_1925
; }  else 
{ 
obj_t BgL_auxz00_10910;
BgL_auxz00_10910 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52713)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_b1z00_1925); 
FAILURE(BgL_auxz00_10910,BFALSE,BFALSE);} 
BgL_za71za7_4038 = 
(long)CINT(BgL_tmpz00_10907); } 
BgL_tmpz00_10844 = 
(BgL_za71za7_4038-
(BgL_i1z00_1932+((long)1))); } } } 
return 
(int)(BgL_tmpz00_10844);} } } } } } } } } } 

}



/* _string-prefix? */
obj_t BGl__stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t BgL_env1178z00_215, obj_t BgL_opt1177z00_214)
{
{ /* Ieee/string.scm 1300 */
{ /* Ieee/string.scm 1300 */
obj_t BgL_s1z00_1948;obj_t BgL_s2z00_1949;
BgL_s1z00_1948 = 
VECTOR_REF(BgL_opt1177z00_214,((long)0)); 
BgL_s2z00_1949 = 
VECTOR_REF(BgL_opt1177z00_214,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1177z00_214)) { case ((long)2) : 

{ /* Ieee/string.scm 1300 */

{ /* Ieee/string.scm 1300 */
bool_t BgL_tmpz00_10938;
{ /* Ieee/string.scm 1300 */
obj_t BgL_auxz00_10946;obj_t BgL_auxz00_10939;
if(
STRINGP(BgL_s2z00_1949))
{ /* Ieee/string.scm 1300 */
BgL_auxz00_10946 = BgL_s2z00_1949
; }  else 
{ 
obj_t BgL_auxz00_10949;
BgL_auxz00_10949 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52956)), BGl_string4440z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1949); 
FAILURE(BgL_auxz00_10949,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1948))
{ /* Ieee/string.scm 1300 */
BgL_auxz00_10939 = BgL_s1z00_1948
; }  else 
{ 
obj_t BgL_auxz00_10942;
BgL_auxz00_10942 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52956)), BGl_string4440z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1948); 
FAILURE(BgL_auxz00_10942,BFALSE,BFALSE);} 
BgL_tmpz00_10938 = 
BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_10939, BgL_auxz00_10946, BFALSE, BFALSE, BFALSE, BFALSE); } 
return 
BBOOL(BgL_tmpz00_10938);} } break;case ((long)3) : 

{ /* Ieee/string.scm 1300 */
obj_t BgL_start1z00_1957;
BgL_start1z00_1957 = 
VECTOR_REF(BgL_opt1177z00_214,((long)2)); 
{ /* Ieee/string.scm 1300 */

{ /* Ieee/string.scm 1300 */
bool_t BgL_tmpz00_10956;
{ /* Ieee/string.scm 1300 */
obj_t BgL_auxz00_10964;obj_t BgL_auxz00_10957;
if(
STRINGP(BgL_s2z00_1949))
{ /* Ieee/string.scm 1300 */
BgL_auxz00_10964 = BgL_s2z00_1949
; }  else 
{ 
obj_t BgL_auxz00_10967;
BgL_auxz00_10967 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52956)), BGl_string4440z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1949); 
FAILURE(BgL_auxz00_10967,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1948))
{ /* Ieee/string.scm 1300 */
BgL_auxz00_10957 = BgL_s1z00_1948
; }  else 
{ 
obj_t BgL_auxz00_10960;
BgL_auxz00_10960 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52956)), BGl_string4440z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1948); 
FAILURE(BgL_auxz00_10960,BFALSE,BFALSE);} 
BgL_tmpz00_10956 = 
BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_10957, BgL_auxz00_10964, BgL_start1z00_1957, BFALSE, BFALSE, BFALSE); } 
return 
BBOOL(BgL_tmpz00_10956);} } } break;case ((long)4) : 

{ /* Ieee/string.scm 1300 */
obj_t BgL_start1z00_1961;
BgL_start1z00_1961 = 
VECTOR_REF(BgL_opt1177z00_214,((long)2)); 
{ /* Ieee/string.scm 1300 */
obj_t BgL_end1z00_1962;
BgL_end1z00_1962 = 
VECTOR_REF(BgL_opt1177z00_214,((long)3)); 
{ /* Ieee/string.scm 1300 */

{ /* Ieee/string.scm 1300 */
bool_t BgL_tmpz00_10975;
{ /* Ieee/string.scm 1300 */
obj_t BgL_auxz00_10983;obj_t BgL_auxz00_10976;
if(
STRINGP(BgL_s2z00_1949))
{ /* Ieee/string.scm 1300 */
BgL_auxz00_10983 = BgL_s2z00_1949
; }  else 
{ 
obj_t BgL_auxz00_10986;
BgL_auxz00_10986 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52956)), BGl_string4440z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1949); 
FAILURE(BgL_auxz00_10986,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1948))
{ /* Ieee/string.scm 1300 */
BgL_auxz00_10976 = BgL_s1z00_1948
; }  else 
{ 
obj_t BgL_auxz00_10979;
BgL_auxz00_10979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52956)), BGl_string4440z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1948); 
FAILURE(BgL_auxz00_10979,BFALSE,BFALSE);} 
BgL_tmpz00_10975 = 
BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_10976, BgL_auxz00_10983, BgL_start1z00_1961, BgL_end1z00_1962, BFALSE, BFALSE); } 
return 
BBOOL(BgL_tmpz00_10975);} } } } break;case ((long)5) : 

{ /* Ieee/string.scm 1300 */
obj_t BgL_start1z00_1965;
BgL_start1z00_1965 = 
VECTOR_REF(BgL_opt1177z00_214,((long)2)); 
{ /* Ieee/string.scm 1300 */
obj_t BgL_end1z00_1966;
BgL_end1z00_1966 = 
VECTOR_REF(BgL_opt1177z00_214,((long)3)); 
{ /* Ieee/string.scm 1300 */
obj_t BgL_start2z00_1967;
BgL_start2z00_1967 = 
VECTOR_REF(BgL_opt1177z00_214,((long)4)); 
{ /* Ieee/string.scm 1300 */

{ /* Ieee/string.scm 1300 */
bool_t BgL_tmpz00_10995;
{ /* Ieee/string.scm 1300 */
obj_t BgL_auxz00_11003;obj_t BgL_auxz00_10996;
if(
STRINGP(BgL_s2z00_1949))
{ /* Ieee/string.scm 1300 */
BgL_auxz00_11003 = BgL_s2z00_1949
; }  else 
{ 
obj_t BgL_auxz00_11006;
BgL_auxz00_11006 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52956)), BGl_string4440z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1949); 
FAILURE(BgL_auxz00_11006,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1948))
{ /* Ieee/string.scm 1300 */
BgL_auxz00_10996 = BgL_s1z00_1948
; }  else 
{ 
obj_t BgL_auxz00_10999;
BgL_auxz00_10999 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52956)), BGl_string4440z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1948); 
FAILURE(BgL_auxz00_10999,BFALSE,BFALSE);} 
BgL_tmpz00_10995 = 
BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_10996, BgL_auxz00_11003, BgL_start1z00_1965, BgL_end1z00_1966, BgL_start2z00_1967, BFALSE); } 
return 
BBOOL(BgL_tmpz00_10995);} } } } } break;case ((long)6) : 

{ /* Ieee/string.scm 1300 */
obj_t BgL_start1z00_1969;
BgL_start1z00_1969 = 
VECTOR_REF(BgL_opt1177z00_214,((long)2)); 
{ /* Ieee/string.scm 1300 */
obj_t BgL_end1z00_1970;
BgL_end1z00_1970 = 
VECTOR_REF(BgL_opt1177z00_214,((long)3)); 
{ /* Ieee/string.scm 1300 */
obj_t BgL_start2z00_1971;
BgL_start2z00_1971 = 
VECTOR_REF(BgL_opt1177z00_214,((long)4)); 
{ /* Ieee/string.scm 1300 */
obj_t BgL_end2z00_1972;
BgL_end2z00_1972 = 
VECTOR_REF(BgL_opt1177z00_214,((long)5)); 
{ /* Ieee/string.scm 1300 */

{ /* Ieee/string.scm 1300 */
bool_t BgL_tmpz00_11016;
{ /* Ieee/string.scm 1300 */
obj_t BgL_auxz00_11024;obj_t BgL_auxz00_11017;
if(
STRINGP(BgL_s2z00_1949))
{ /* Ieee/string.scm 1300 */
BgL_auxz00_11024 = BgL_s2z00_1949
; }  else 
{ 
obj_t BgL_auxz00_11027;
BgL_auxz00_11027 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52956)), BGl_string4440z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1949); 
FAILURE(BgL_auxz00_11027,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1948))
{ /* Ieee/string.scm 1300 */
BgL_auxz00_11017 = BgL_s1z00_1948
; }  else 
{ 
obj_t BgL_auxz00_11020;
BgL_auxz00_11020 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)52956)), BGl_string4440z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1948); 
FAILURE(BgL_auxz00_11020,BFALSE,BFALSE);} 
BgL_tmpz00_11016 = 
BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_11017, BgL_auxz00_11024, BgL_start1z00_1969, BgL_end1z00_1970, BgL_start2z00_1971, BgL_end2z00_1972); } 
return 
BBOOL(BgL_tmpz00_11016);} } } } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4438z00zz__r4_strings_6_7z00, BGl_string4410z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1177z00_214)));} } } } 

}



/* string-prefix? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t BgL_s1z00_208, obj_t BgL_s2z00_209, obj_t BgL_start1z00_210, obj_t BgL_end1z00_211, obj_t BgL_start2z00_212, obj_t BgL_end2z00_213)
{
{ /* Ieee/string.scm 1300 */
{ /* Ieee/string.scm 1302 */
long BgL_l1z00_1974;
BgL_l1z00_1974 = 
STRING_LENGTH(BgL_s1z00_208); 
{ /* Ieee/string.scm 1302 */
long BgL_l2z00_1975;
BgL_l2z00_1975 = 
STRING_LENGTH(BgL_s2z00_209); 
{ /* Ieee/string.scm 1303 */
obj_t BgL_e1z00_1976;
{ /* Ieee/string.scm 1304 */
obj_t BgL_procz00_4045;
BgL_procz00_4045 = BGl_symbol4441z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end1z00_211))
{ /* Ieee/string.scm 1206 */
bool_t BgL_test5314z00_11042;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_4050;
{ /* Ieee/string.scm 1206 */
obj_t BgL_tmpz00_11043;
if(
INTEGERP(BgL_end1z00_211))
{ /* Ieee/string.scm 1206 */
BgL_tmpz00_11043 = BgL_end1z00_211
; }  else 
{ 
obj_t BgL_auxz00_11046;
BgL_auxz00_11046 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48914)), BGl_string4442z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end1z00_211); 
FAILURE(BgL_auxz00_11046,BFALSE,BFALSE);} 
BgL_n1z00_4050 = 
(long)CINT(BgL_tmpz00_11043); } 
BgL_test5314z00_11042 = 
(BgL_n1z00_4050<=((long)0)); } 
if(BgL_test5314z00_11042)
{ /* Ieee/string.scm 1206 */
BgL_e1z00_1976 = 
BGl_errorz00zz__errorz00(BgL_procz00_4045, 
string_append_3(BGl_string4414z00zz__r4_strings_6_7z00, BGl_string4415z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end1z00_211); }  else 
{ /* Ieee/string.scm 1208 */
bool_t BgL_test5316z00_11054;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_4052;
{ /* Ieee/string.scm 1208 */
obj_t BgL_tmpz00_11055;
if(
INTEGERP(BgL_end1z00_211))
{ /* Ieee/string.scm 1208 */
BgL_tmpz00_11055 = BgL_end1z00_211
; }  else 
{ 
obj_t BgL_auxz00_11058;
BgL_auxz00_11058 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49006)), BGl_string4442z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end1z00_211); 
FAILURE(BgL_auxz00_11058,BFALSE,BFALSE);} 
BgL_n1z00_4052 = 
(long)CINT(BgL_tmpz00_11055); } 
BgL_test5316z00_11054 = 
(BgL_n1z00_4052>BgL_l1z00_1974); } 
if(BgL_test5316z00_11054)
{ /* Ieee/string.scm 1208 */
BgL_e1z00_1976 = 
BGl_errorz00zz__errorz00(BgL_procz00_4045, 
string_append_3(BGl_string4417z00zz__r4_strings_6_7z00, BGl_string4415z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end1z00_211); }  else 
{ /* Ieee/string.scm 1208 */
BgL_e1z00_1976 = BgL_end1z00_211; } } }  else 
{ /* Ieee/string.scm 1204 */
BgL_e1z00_1976 = 
BINT(BgL_l1z00_1974); } } 
{ /* Ieee/string.scm 1304 */
obj_t BgL_e2z00_1977;
{ /* Ieee/string.scm 1305 */
obj_t BgL_procz00_4055;
BgL_procz00_4055 = BGl_symbol4441z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end2z00_213))
{ /* Ieee/string.scm 1206 */
bool_t BgL_test5319z00_11069;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_4060;
{ /* Ieee/string.scm 1206 */
obj_t BgL_tmpz00_11070;
if(
INTEGERP(BgL_end2z00_213))
{ /* Ieee/string.scm 1206 */
BgL_tmpz00_11070 = BgL_end2z00_213
; }  else 
{ 
obj_t BgL_auxz00_11073;
BgL_auxz00_11073 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48914)), BGl_string4442z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end2z00_213); 
FAILURE(BgL_auxz00_11073,BFALSE,BFALSE);} 
BgL_n1z00_4060 = 
(long)CINT(BgL_tmpz00_11070); } 
BgL_test5319z00_11069 = 
(BgL_n1z00_4060<=((long)0)); } 
if(BgL_test5319z00_11069)
{ /* Ieee/string.scm 1206 */
BgL_e2z00_1977 = 
BGl_errorz00zz__errorz00(BgL_procz00_4055, 
string_append_3(BGl_string4414z00zz__r4_strings_6_7z00, BGl_string4418z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end2z00_213); }  else 
{ /* Ieee/string.scm 1208 */
bool_t BgL_test5321z00_11081;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_4062;
{ /* Ieee/string.scm 1208 */
obj_t BgL_tmpz00_11082;
if(
INTEGERP(BgL_end2z00_213))
{ /* Ieee/string.scm 1208 */
BgL_tmpz00_11082 = BgL_end2z00_213
; }  else 
{ 
obj_t BgL_auxz00_11085;
BgL_auxz00_11085 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49006)), BGl_string4442z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end2z00_213); 
FAILURE(BgL_auxz00_11085,BFALSE,BFALSE);} 
BgL_n1z00_4062 = 
(long)CINT(BgL_tmpz00_11082); } 
BgL_test5321z00_11081 = 
(BgL_n1z00_4062>BgL_l2z00_1975); } 
if(BgL_test5321z00_11081)
{ /* Ieee/string.scm 1208 */
BgL_e2z00_1977 = 
BGl_errorz00zz__errorz00(BgL_procz00_4055, 
string_append_3(BGl_string4417z00zz__r4_strings_6_7z00, BGl_string4418z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end2z00_213); }  else 
{ /* Ieee/string.scm 1208 */
BgL_e2z00_1977 = BgL_end2z00_213; } } }  else 
{ /* Ieee/string.scm 1204 */
BgL_e2z00_1977 = 
BINT(BgL_l2z00_1975); } } 
{ /* Ieee/string.scm 1305 */
obj_t BgL_b1z00_1978;
{ /* Ieee/string.scm 1306 */
obj_t BgL_procz00_4065;
BgL_procz00_4065 = BGl_symbol4441z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start1z00_210))
{ /* Ieee/string.scm 1192 */
bool_t BgL_test5324z00_11096;
{ /* Ieee/string.scm 1192 */
long BgL_n1z00_4070;
{ /* Ieee/string.scm 1192 */
obj_t BgL_tmpz00_11097;
if(
INTEGERP(BgL_start1z00_210))
{ /* Ieee/string.scm 1192 */
BgL_tmpz00_11097 = BgL_start1z00_210
; }  else 
{ 
obj_t BgL_auxz00_11100;
BgL_auxz00_11100 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48393)), BGl_string4442z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start1z00_210); 
FAILURE(BgL_auxz00_11100,BFALSE,BFALSE);} 
BgL_n1z00_4070 = 
(long)CINT(BgL_tmpz00_11097); } 
BgL_test5324z00_11096 = 
(BgL_n1z00_4070<((long)0)); } 
if(BgL_test5324z00_11096)
{ /* Ieee/string.scm 1192 */
BgL_b1z00_1978 = 
BGl_errorz00zz__errorz00(BgL_procz00_4065, 
string_append_3(BGl_string4419z00zz__r4_strings_6_7z00, BGl_string4420z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start1z00_210); }  else 
{ /* Ieee/string.scm 1194 */
bool_t BgL_test5326z00_11108;
{ /* Ieee/string.scm 1194 */
long BgL_n1z00_4072;
{ /* Ieee/string.scm 1194 */
obj_t BgL_tmpz00_11109;
if(
INTEGERP(BgL_start1z00_210))
{ /* Ieee/string.scm 1194 */
BgL_tmpz00_11109 = BgL_start1z00_210
; }  else 
{ 
obj_t BgL_auxz00_11112;
BgL_auxz00_11112 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48488)), BGl_string4442z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start1z00_210); 
FAILURE(BgL_auxz00_11112,BFALSE,BFALSE);} 
BgL_n1z00_4072 = 
(long)CINT(BgL_tmpz00_11109); } 
BgL_test5326z00_11108 = 
(BgL_n1z00_4072>=BgL_l1z00_1974); } 
if(BgL_test5326z00_11108)
{ /* Ieee/string.scm 1194 */
BgL_b1z00_1978 = 
BGl_errorz00zz__errorz00(BgL_procz00_4065, 
string_append_3(BGl_string4421z00zz__r4_strings_6_7z00, BGl_string4420z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start1z00_210); }  else 
{ /* Ieee/string.scm 1194 */
BgL_b1z00_1978 = BgL_start1z00_210; } } }  else 
{ /* Ieee/string.scm 1190 */
BgL_b1z00_1978 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1306 */
obj_t BgL_b2z00_1979;
{ /* Ieee/string.scm 1307 */
obj_t BgL_procz00_4075;
BgL_procz00_4075 = BGl_symbol4441z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start2z00_212))
{ /* Ieee/string.scm 1192 */
bool_t BgL_test5329z00_11123;
{ /* Ieee/string.scm 1192 */
long BgL_n1z00_4080;
{ /* Ieee/string.scm 1192 */
obj_t BgL_tmpz00_11124;
if(
INTEGERP(BgL_start2z00_212))
{ /* Ieee/string.scm 1192 */
BgL_tmpz00_11124 = BgL_start2z00_212
; }  else 
{ 
obj_t BgL_auxz00_11127;
BgL_auxz00_11127 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48393)), BGl_string4442z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start2z00_212); 
FAILURE(BgL_auxz00_11127,BFALSE,BFALSE);} 
BgL_n1z00_4080 = 
(long)CINT(BgL_tmpz00_11124); } 
BgL_test5329z00_11123 = 
(BgL_n1z00_4080<((long)0)); } 
if(BgL_test5329z00_11123)
{ /* Ieee/string.scm 1192 */
BgL_b2z00_1979 = 
BGl_errorz00zz__errorz00(BgL_procz00_4075, 
string_append_3(BGl_string4419z00zz__r4_strings_6_7z00, BGl_string4422z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start2z00_212); }  else 
{ /* Ieee/string.scm 1194 */
bool_t BgL_test5331z00_11135;
{ /* Ieee/string.scm 1194 */
long BgL_n1z00_4082;
{ /* Ieee/string.scm 1194 */
obj_t BgL_tmpz00_11136;
if(
INTEGERP(BgL_start2z00_212))
{ /* Ieee/string.scm 1194 */
BgL_tmpz00_11136 = BgL_start2z00_212
; }  else 
{ 
obj_t BgL_auxz00_11139;
BgL_auxz00_11139 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48488)), BGl_string4442z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start2z00_212); 
FAILURE(BgL_auxz00_11139,BFALSE,BFALSE);} 
BgL_n1z00_4082 = 
(long)CINT(BgL_tmpz00_11136); } 
BgL_test5331z00_11135 = 
(BgL_n1z00_4082>=BgL_l2z00_1975); } 
if(BgL_test5331z00_11135)
{ /* Ieee/string.scm 1194 */
BgL_b2z00_1979 = 
BGl_errorz00zz__errorz00(BgL_procz00_4075, 
string_append_3(BGl_string4421z00zz__r4_strings_6_7z00, BGl_string4422z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start2z00_212); }  else 
{ /* Ieee/string.scm 1194 */
BgL_b2z00_1979 = BgL_start2z00_212; } } }  else 
{ /* Ieee/string.scm 1190 */
BgL_b2z00_1979 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1307 */

{ 
obj_t BgL_i1z00_1981;obj_t BgL_i2z00_1982;
BgL_i1z00_1981 = BgL_b1z00_1978; 
BgL_i2z00_1982 = BgL_b2z00_1979; 
BgL_zc3z04anonymousza31801ze3z87_1983:
{ /* Ieee/string.scm 1311 */
bool_t BgL_test5333z00_11148;
{ /* Ieee/string.scm 1311 */
long BgL_n1z00_4085;long BgL_n2z00_4086;
{ /* Ieee/string.scm 1311 */
obj_t BgL_tmpz00_11149;
if(
INTEGERP(BgL_i1z00_1981))
{ /* Ieee/string.scm 1311 */
BgL_tmpz00_11149 = BgL_i1z00_1981
; }  else 
{ 
obj_t BgL_auxz00_11152;
BgL_auxz00_11152 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53419)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i1z00_1981); 
FAILURE(BgL_auxz00_11152,BFALSE,BFALSE);} 
BgL_n1z00_4085 = 
(long)CINT(BgL_tmpz00_11149); } 
{ /* Ieee/string.scm 1311 */
obj_t BgL_tmpz00_11157;
if(
INTEGERP(BgL_e1z00_1976))
{ /* Ieee/string.scm 1311 */
BgL_tmpz00_11157 = BgL_e1z00_1976
; }  else 
{ 
obj_t BgL_auxz00_11160;
BgL_auxz00_11160 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53422)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_e1z00_1976); 
FAILURE(BgL_auxz00_11160,BFALSE,BFALSE);} 
BgL_n2z00_4086 = 
(long)CINT(BgL_tmpz00_11157); } 
BgL_test5333z00_11148 = 
(BgL_n1z00_4085==BgL_n2z00_4086); } 
if(BgL_test5333z00_11148)
{ /* Ieee/string.scm 1311 */
return ((bool_t)1);}  else 
{ /* Ieee/string.scm 1313 */
bool_t BgL_test5336z00_11166;
{ /* Ieee/string.scm 1313 */
long BgL_n1z00_4088;long BgL_n2z00_4089;
{ /* Ieee/string.scm 1313 */
obj_t BgL_tmpz00_11167;
if(
INTEGERP(BgL_i2z00_1982))
{ /* Ieee/string.scm 1313 */
BgL_tmpz00_11167 = BgL_i2z00_1982
; }  else 
{ 
obj_t BgL_auxz00_11170;
BgL_auxz00_11170 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53447)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i2z00_1982); 
FAILURE(BgL_auxz00_11170,BFALSE,BFALSE);} 
BgL_n1z00_4088 = 
(long)CINT(BgL_tmpz00_11167); } 
{ /* Ieee/string.scm 1313 */
obj_t BgL_tmpz00_11175;
if(
INTEGERP(BgL_e2z00_1977))
{ /* Ieee/string.scm 1313 */
BgL_tmpz00_11175 = BgL_e2z00_1977
; }  else 
{ 
obj_t BgL_auxz00_11178;
BgL_auxz00_11178 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53450)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_e2z00_1977); 
FAILURE(BgL_auxz00_11178,BFALSE,BFALSE);} 
BgL_n2z00_4089 = 
(long)CINT(BgL_tmpz00_11175); } 
BgL_test5336z00_11166 = 
(BgL_n1z00_4088==BgL_n2z00_4089); } 
if(BgL_test5336z00_11166)
{ /* Ieee/string.scm 1313 */
return ((bool_t)0);}  else 
{ /* Ieee/string.scm 1315 */
bool_t BgL_test5339z00_11184;
{ /* Ieee/string.scm 1315 */
unsigned char BgL_auxz00_11204;unsigned char BgL_tmpz00_11185;
{ /* Ieee/string.scm 1315 */
long BgL_kz00_4095;
{ /* Ieee/string.scm 1315 */
obj_t BgL_tmpz00_11205;
if(
INTEGERP(BgL_i2z00_1982))
{ /* Ieee/string.scm 1315 */
BgL_tmpz00_11205 = BgL_i2z00_1982
; }  else 
{ 
obj_t BgL_auxz00_11208;
BgL_auxz00_11208 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53512)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i2z00_1982); 
FAILURE(BgL_auxz00_11208,BFALSE,BFALSE);} 
BgL_kz00_4095 = 
(long)CINT(BgL_tmpz00_11205); } 
{ /* Ieee/string.scm 327 */
long BgL_l3249z00_5224;
BgL_l3249z00_5224 = 
STRING_LENGTH(BgL_s2z00_209); 
if(
BOUND_CHECK(BgL_kz00_4095, BgL_l3249z00_5224))
{ /* Ieee/string.scm 327 */
BgL_auxz00_11204 = 
STRING_REF(BgL_s2z00_209, BgL_kz00_4095)
; }  else 
{ 
obj_t BgL_auxz00_11217;
BgL_auxz00_11217 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_s2z00_209, 
(int)(BgL_l3249z00_5224), 
(int)(BgL_kz00_4095)); 
FAILURE(BgL_auxz00_11217,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 1315 */
long BgL_kz00_4092;
{ /* Ieee/string.scm 1315 */
obj_t BgL_tmpz00_11186;
if(
INTEGERP(BgL_i1z00_1981))
{ /* Ieee/string.scm 1315 */
BgL_tmpz00_11186 = BgL_i1z00_1981
; }  else 
{ 
obj_t BgL_auxz00_11189;
BgL_auxz00_11189 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53493)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i1z00_1981); 
FAILURE(BgL_auxz00_11189,BFALSE,BFALSE);} 
BgL_kz00_4092 = 
(long)CINT(BgL_tmpz00_11186); } 
{ /* Ieee/string.scm 327 */
long BgL_l3245z00_5220;
BgL_l3245z00_5220 = 
STRING_LENGTH(BgL_s1z00_208); 
if(
BOUND_CHECK(BgL_kz00_4092, BgL_l3245z00_5220))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_11185 = 
STRING_REF(BgL_s1z00_208, BgL_kz00_4092)
; }  else 
{ 
obj_t BgL_auxz00_11198;
BgL_auxz00_11198 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_s1z00_208, 
(int)(BgL_l3245z00_5220), 
(int)(BgL_kz00_4092)); 
FAILURE(BgL_auxz00_11198,BFALSE,BFALSE);} } } 
BgL_test5339z00_11184 = 
(BgL_tmpz00_11185==BgL_auxz00_11204); } 
if(BgL_test5339z00_11184)
{ 
obj_t BgL_i2z00_11234;obj_t BgL_i1z00_11224;
{ 
obj_t BgL_tmpz00_11225;
if(
INTEGERP(BgL_i1z00_1981))
{ /* Ieee/string.scm 1316 */
BgL_tmpz00_11225 = BgL_i1z00_1981
; }  else 
{ 
obj_t BgL_auxz00_11228;
BgL_auxz00_11228 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53534)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i1z00_1981); 
FAILURE(BgL_auxz00_11228,BFALSE,BFALSE);} 
BgL_i1z00_11224 = 
ADDFX(BgL_tmpz00_11225, 
BINT(((long)1))); } 
{ 
obj_t BgL_tmpz00_11235;
if(
INTEGERP(BgL_i2z00_1982))
{ /* Ieee/string.scm 1316 */
BgL_tmpz00_11235 = BgL_i2z00_1982
; }  else 
{ 
obj_t BgL_auxz00_11238;
BgL_auxz00_11238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53545)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i2z00_1982); 
FAILURE(BgL_auxz00_11238,BFALSE,BFALSE);} 
BgL_i2z00_11234 = 
ADDFX(BgL_tmpz00_11235, 
BINT(((long)1))); } 
BgL_i2z00_1982 = BgL_i2z00_11234; 
BgL_i1z00_1981 = BgL_i1z00_11224; 
goto BgL_zc3z04anonymousza31801ze3z87_1983;}  else 
{ /* Ieee/string.scm 1315 */
return ((bool_t)0);} } } } } } } } } } } } } 

}



/* _string-prefix-ci? */
obj_t BGl__stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t BgL_env1182z00_223, obj_t BgL_opt1181z00_222)
{
{ /* Ieee/string.scm 1323 */
{ /* Ieee/string.scm 1323 */
obj_t BgL_s1z00_1994;obj_t BgL_s2z00_1995;
BgL_s1z00_1994 = 
VECTOR_REF(BgL_opt1181z00_222,((long)0)); 
BgL_s2z00_1995 = 
VECTOR_REF(BgL_opt1181z00_222,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1181z00_222)) { case ((long)2) : 

{ /* Ieee/string.scm 1323 */

{ /* Ieee/string.scm 1323 */
bool_t BgL_tmpz00_11246;
{ /* Ieee/string.scm 1323 */
obj_t BgL_auxz00_11254;obj_t BgL_auxz00_11247;
if(
STRINGP(BgL_s2z00_1995))
{ /* Ieee/string.scm 1323 */
BgL_auxz00_11254 = BgL_s2z00_1995
; }  else 
{ 
obj_t BgL_auxz00_11257;
BgL_auxz00_11257 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53801)), BGl_string4445z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1995); 
FAILURE(BgL_auxz00_11257,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1994))
{ /* Ieee/string.scm 1323 */
BgL_auxz00_11247 = BgL_s1z00_1994
; }  else 
{ 
obj_t BgL_auxz00_11250;
BgL_auxz00_11250 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53801)), BGl_string4445z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1994); 
FAILURE(BgL_auxz00_11250,BFALSE,BFALSE);} 
BgL_tmpz00_11246 = 
BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_11247, BgL_auxz00_11254, BFALSE, BFALSE, BFALSE, BFALSE); } 
return 
BBOOL(BgL_tmpz00_11246);} } break;case ((long)3) : 

{ /* Ieee/string.scm 1323 */
obj_t BgL_start1z00_2003;
BgL_start1z00_2003 = 
VECTOR_REF(BgL_opt1181z00_222,((long)2)); 
{ /* Ieee/string.scm 1323 */

{ /* Ieee/string.scm 1323 */
bool_t BgL_tmpz00_11264;
{ /* Ieee/string.scm 1323 */
obj_t BgL_auxz00_11272;obj_t BgL_auxz00_11265;
if(
STRINGP(BgL_s2z00_1995))
{ /* Ieee/string.scm 1323 */
BgL_auxz00_11272 = BgL_s2z00_1995
; }  else 
{ 
obj_t BgL_auxz00_11275;
BgL_auxz00_11275 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53801)), BGl_string4445z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1995); 
FAILURE(BgL_auxz00_11275,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1994))
{ /* Ieee/string.scm 1323 */
BgL_auxz00_11265 = BgL_s1z00_1994
; }  else 
{ 
obj_t BgL_auxz00_11268;
BgL_auxz00_11268 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53801)), BGl_string4445z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1994); 
FAILURE(BgL_auxz00_11268,BFALSE,BFALSE);} 
BgL_tmpz00_11264 = 
BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_11265, BgL_auxz00_11272, BgL_start1z00_2003, BFALSE, BFALSE, BFALSE); } 
return 
BBOOL(BgL_tmpz00_11264);} } } break;case ((long)4) : 

{ /* Ieee/string.scm 1323 */
obj_t BgL_start1z00_2007;
BgL_start1z00_2007 = 
VECTOR_REF(BgL_opt1181z00_222,((long)2)); 
{ /* Ieee/string.scm 1323 */
obj_t BgL_end1z00_2008;
BgL_end1z00_2008 = 
VECTOR_REF(BgL_opt1181z00_222,((long)3)); 
{ /* Ieee/string.scm 1323 */

{ /* Ieee/string.scm 1323 */
bool_t BgL_tmpz00_11283;
{ /* Ieee/string.scm 1323 */
obj_t BgL_auxz00_11291;obj_t BgL_auxz00_11284;
if(
STRINGP(BgL_s2z00_1995))
{ /* Ieee/string.scm 1323 */
BgL_auxz00_11291 = BgL_s2z00_1995
; }  else 
{ 
obj_t BgL_auxz00_11294;
BgL_auxz00_11294 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53801)), BGl_string4445z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1995); 
FAILURE(BgL_auxz00_11294,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1994))
{ /* Ieee/string.scm 1323 */
BgL_auxz00_11284 = BgL_s1z00_1994
; }  else 
{ 
obj_t BgL_auxz00_11287;
BgL_auxz00_11287 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53801)), BGl_string4445z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1994); 
FAILURE(BgL_auxz00_11287,BFALSE,BFALSE);} 
BgL_tmpz00_11283 = 
BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_11284, BgL_auxz00_11291, BgL_start1z00_2007, BgL_end1z00_2008, BFALSE, BFALSE); } 
return 
BBOOL(BgL_tmpz00_11283);} } } } break;case ((long)5) : 

{ /* Ieee/string.scm 1323 */
obj_t BgL_start1z00_2011;
BgL_start1z00_2011 = 
VECTOR_REF(BgL_opt1181z00_222,((long)2)); 
{ /* Ieee/string.scm 1323 */
obj_t BgL_end1z00_2012;
BgL_end1z00_2012 = 
VECTOR_REF(BgL_opt1181z00_222,((long)3)); 
{ /* Ieee/string.scm 1323 */
obj_t BgL_start2z00_2013;
BgL_start2z00_2013 = 
VECTOR_REF(BgL_opt1181z00_222,((long)4)); 
{ /* Ieee/string.scm 1323 */

{ /* Ieee/string.scm 1323 */
bool_t BgL_tmpz00_11303;
{ /* Ieee/string.scm 1323 */
obj_t BgL_auxz00_11311;obj_t BgL_auxz00_11304;
if(
STRINGP(BgL_s2z00_1995))
{ /* Ieee/string.scm 1323 */
BgL_auxz00_11311 = BgL_s2z00_1995
; }  else 
{ 
obj_t BgL_auxz00_11314;
BgL_auxz00_11314 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53801)), BGl_string4445z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1995); 
FAILURE(BgL_auxz00_11314,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1994))
{ /* Ieee/string.scm 1323 */
BgL_auxz00_11304 = BgL_s1z00_1994
; }  else 
{ 
obj_t BgL_auxz00_11307;
BgL_auxz00_11307 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53801)), BGl_string4445z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1994); 
FAILURE(BgL_auxz00_11307,BFALSE,BFALSE);} 
BgL_tmpz00_11303 = 
BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_11304, BgL_auxz00_11311, BgL_start1z00_2011, BgL_end1z00_2012, BgL_start2z00_2013, BFALSE); } 
return 
BBOOL(BgL_tmpz00_11303);} } } } } break;case ((long)6) : 

{ /* Ieee/string.scm 1323 */
obj_t BgL_start1z00_2015;
BgL_start1z00_2015 = 
VECTOR_REF(BgL_opt1181z00_222,((long)2)); 
{ /* Ieee/string.scm 1323 */
obj_t BgL_end1z00_2016;
BgL_end1z00_2016 = 
VECTOR_REF(BgL_opt1181z00_222,((long)3)); 
{ /* Ieee/string.scm 1323 */
obj_t BgL_start2z00_2017;
BgL_start2z00_2017 = 
VECTOR_REF(BgL_opt1181z00_222,((long)4)); 
{ /* Ieee/string.scm 1323 */
obj_t BgL_end2z00_2018;
BgL_end2z00_2018 = 
VECTOR_REF(BgL_opt1181z00_222,((long)5)); 
{ /* Ieee/string.scm 1323 */

{ /* Ieee/string.scm 1323 */
bool_t BgL_tmpz00_11324;
{ /* Ieee/string.scm 1323 */
obj_t BgL_auxz00_11332;obj_t BgL_auxz00_11325;
if(
STRINGP(BgL_s2z00_1995))
{ /* Ieee/string.scm 1323 */
BgL_auxz00_11332 = BgL_s2z00_1995
; }  else 
{ 
obj_t BgL_auxz00_11335;
BgL_auxz00_11335 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53801)), BGl_string4445z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_1995); 
FAILURE(BgL_auxz00_11335,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_1994))
{ /* Ieee/string.scm 1323 */
BgL_auxz00_11325 = BgL_s1z00_1994
; }  else 
{ 
obj_t BgL_auxz00_11328;
BgL_auxz00_11328 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)53801)), BGl_string4445z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_1994); 
FAILURE(BgL_auxz00_11328,BFALSE,BFALSE);} 
BgL_tmpz00_11324 = 
BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_11325, BgL_auxz00_11332, BgL_start1z00_2015, BgL_end1z00_2016, BgL_start2z00_2017, BgL_end2z00_2018); } 
return 
BBOOL(BgL_tmpz00_11324);} } } } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4443z00zz__r4_strings_6_7z00, BGl_string4410z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1181z00_222)));} } } } 

}



/* string-prefix-ci? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2prefixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t BgL_s1z00_216, obj_t BgL_s2z00_217, obj_t BgL_start1z00_218, obj_t BgL_end1z00_219, obj_t BgL_start2z00_220, obj_t BgL_end2z00_221)
{
{ /* Ieee/string.scm 1323 */
{ /* Ieee/string.scm 1325 */
long BgL_l1z00_2020;
BgL_l1z00_2020 = 
STRING_LENGTH(BgL_s1z00_216); 
{ /* Ieee/string.scm 1325 */
long BgL_l2z00_2021;
BgL_l2z00_2021 = 
STRING_LENGTH(BgL_s2z00_217); 
{ /* Ieee/string.scm 1326 */
obj_t BgL_e1z00_2022;
{ /* Ieee/string.scm 1327 */
obj_t BgL_procz00_4108;
BgL_procz00_4108 = BGl_symbol4446z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end1z00_219))
{ /* Ieee/string.scm 1206 */
bool_t BgL_test5357z00_11350;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_4113;
{ /* Ieee/string.scm 1206 */
obj_t BgL_tmpz00_11351;
if(
INTEGERP(BgL_end1z00_219))
{ /* Ieee/string.scm 1206 */
BgL_tmpz00_11351 = BgL_end1z00_219
; }  else 
{ 
obj_t BgL_auxz00_11354;
BgL_auxz00_11354 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48914)), BGl_string4447z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end1z00_219); 
FAILURE(BgL_auxz00_11354,BFALSE,BFALSE);} 
BgL_n1z00_4113 = 
(long)CINT(BgL_tmpz00_11351); } 
BgL_test5357z00_11350 = 
(BgL_n1z00_4113<=((long)0)); } 
if(BgL_test5357z00_11350)
{ /* Ieee/string.scm 1206 */
BgL_e1z00_2022 = 
BGl_errorz00zz__errorz00(BgL_procz00_4108, 
string_append_3(BGl_string4414z00zz__r4_strings_6_7z00, BGl_string4415z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end1z00_219); }  else 
{ /* Ieee/string.scm 1208 */
bool_t BgL_test5359z00_11362;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_4115;
{ /* Ieee/string.scm 1208 */
obj_t BgL_tmpz00_11363;
if(
INTEGERP(BgL_end1z00_219))
{ /* Ieee/string.scm 1208 */
BgL_tmpz00_11363 = BgL_end1z00_219
; }  else 
{ 
obj_t BgL_auxz00_11366;
BgL_auxz00_11366 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49006)), BGl_string4447z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end1z00_219); 
FAILURE(BgL_auxz00_11366,BFALSE,BFALSE);} 
BgL_n1z00_4115 = 
(long)CINT(BgL_tmpz00_11363); } 
BgL_test5359z00_11362 = 
(BgL_n1z00_4115>BgL_l1z00_2020); } 
if(BgL_test5359z00_11362)
{ /* Ieee/string.scm 1208 */
BgL_e1z00_2022 = 
BGl_errorz00zz__errorz00(BgL_procz00_4108, 
string_append_3(BGl_string4417z00zz__r4_strings_6_7z00, BGl_string4415z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end1z00_219); }  else 
{ /* Ieee/string.scm 1208 */
BgL_e1z00_2022 = BgL_end1z00_219; } } }  else 
{ /* Ieee/string.scm 1204 */
BgL_e1z00_2022 = 
BINT(BgL_l1z00_2020); } } 
{ /* Ieee/string.scm 1327 */
obj_t BgL_e2z00_2023;
{ /* Ieee/string.scm 1328 */
obj_t BgL_procz00_4118;
BgL_procz00_4118 = BGl_symbol4446z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end2z00_221))
{ /* Ieee/string.scm 1206 */
bool_t BgL_test5362z00_11377;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_4123;
{ /* Ieee/string.scm 1206 */
obj_t BgL_tmpz00_11378;
if(
INTEGERP(BgL_end2z00_221))
{ /* Ieee/string.scm 1206 */
BgL_tmpz00_11378 = BgL_end2z00_221
; }  else 
{ 
obj_t BgL_auxz00_11381;
BgL_auxz00_11381 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48914)), BGl_string4447z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end2z00_221); 
FAILURE(BgL_auxz00_11381,BFALSE,BFALSE);} 
BgL_n1z00_4123 = 
(long)CINT(BgL_tmpz00_11378); } 
BgL_test5362z00_11377 = 
(BgL_n1z00_4123<=((long)0)); } 
if(BgL_test5362z00_11377)
{ /* Ieee/string.scm 1206 */
BgL_e2z00_2023 = 
BGl_errorz00zz__errorz00(BgL_procz00_4118, 
string_append_3(BGl_string4414z00zz__r4_strings_6_7z00, BGl_string4418z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end2z00_221); }  else 
{ /* Ieee/string.scm 1208 */
bool_t BgL_test5364z00_11389;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_4125;
{ /* Ieee/string.scm 1208 */
obj_t BgL_tmpz00_11390;
if(
INTEGERP(BgL_end2z00_221))
{ /* Ieee/string.scm 1208 */
BgL_tmpz00_11390 = BgL_end2z00_221
; }  else 
{ 
obj_t BgL_auxz00_11393;
BgL_auxz00_11393 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49006)), BGl_string4447z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end2z00_221); 
FAILURE(BgL_auxz00_11393,BFALSE,BFALSE);} 
BgL_n1z00_4125 = 
(long)CINT(BgL_tmpz00_11390); } 
BgL_test5364z00_11389 = 
(BgL_n1z00_4125>BgL_l2z00_2021); } 
if(BgL_test5364z00_11389)
{ /* Ieee/string.scm 1208 */
BgL_e2z00_2023 = 
BGl_errorz00zz__errorz00(BgL_procz00_4118, 
string_append_3(BGl_string4417z00zz__r4_strings_6_7z00, BGl_string4418z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end2z00_221); }  else 
{ /* Ieee/string.scm 1208 */
BgL_e2z00_2023 = BgL_end2z00_221; } } }  else 
{ /* Ieee/string.scm 1204 */
BgL_e2z00_2023 = 
BINT(BgL_l2z00_2021); } } 
{ /* Ieee/string.scm 1328 */
obj_t BgL_b1z00_2024;
{ /* Ieee/string.scm 1329 */
obj_t BgL_procz00_4128;
BgL_procz00_4128 = BGl_symbol4446z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start1z00_218))
{ /* Ieee/string.scm 1192 */
bool_t BgL_test5367z00_11404;
{ /* Ieee/string.scm 1192 */
long BgL_n1z00_4133;
{ /* Ieee/string.scm 1192 */
obj_t BgL_tmpz00_11405;
if(
INTEGERP(BgL_start1z00_218))
{ /* Ieee/string.scm 1192 */
BgL_tmpz00_11405 = BgL_start1z00_218
; }  else 
{ 
obj_t BgL_auxz00_11408;
BgL_auxz00_11408 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48393)), BGl_string4447z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start1z00_218); 
FAILURE(BgL_auxz00_11408,BFALSE,BFALSE);} 
BgL_n1z00_4133 = 
(long)CINT(BgL_tmpz00_11405); } 
BgL_test5367z00_11404 = 
(BgL_n1z00_4133<((long)0)); } 
if(BgL_test5367z00_11404)
{ /* Ieee/string.scm 1192 */
BgL_b1z00_2024 = 
BGl_errorz00zz__errorz00(BgL_procz00_4128, 
string_append_3(BGl_string4419z00zz__r4_strings_6_7z00, BGl_string4420z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start1z00_218); }  else 
{ /* Ieee/string.scm 1194 */
bool_t BgL_test5369z00_11416;
{ /* Ieee/string.scm 1194 */
long BgL_n1z00_4135;
{ /* Ieee/string.scm 1194 */
obj_t BgL_tmpz00_11417;
if(
INTEGERP(BgL_start1z00_218))
{ /* Ieee/string.scm 1194 */
BgL_tmpz00_11417 = BgL_start1z00_218
; }  else 
{ 
obj_t BgL_auxz00_11420;
BgL_auxz00_11420 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48488)), BGl_string4447z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start1z00_218); 
FAILURE(BgL_auxz00_11420,BFALSE,BFALSE);} 
BgL_n1z00_4135 = 
(long)CINT(BgL_tmpz00_11417); } 
BgL_test5369z00_11416 = 
(BgL_n1z00_4135>=BgL_l1z00_2020); } 
if(BgL_test5369z00_11416)
{ /* Ieee/string.scm 1194 */
BgL_b1z00_2024 = 
BGl_errorz00zz__errorz00(BgL_procz00_4128, 
string_append_3(BGl_string4421z00zz__r4_strings_6_7z00, BGl_string4420z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start1z00_218); }  else 
{ /* Ieee/string.scm 1194 */
BgL_b1z00_2024 = BgL_start1z00_218; } } }  else 
{ /* Ieee/string.scm 1190 */
BgL_b1z00_2024 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1329 */
obj_t BgL_b2z00_2025;
{ /* Ieee/string.scm 1330 */
obj_t BgL_procz00_4138;
BgL_procz00_4138 = BGl_symbol4446z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start2z00_220))
{ /* Ieee/string.scm 1192 */
bool_t BgL_test5372z00_11431;
{ /* Ieee/string.scm 1192 */
long BgL_n1z00_4143;
{ /* Ieee/string.scm 1192 */
obj_t BgL_tmpz00_11432;
if(
INTEGERP(BgL_start2z00_220))
{ /* Ieee/string.scm 1192 */
BgL_tmpz00_11432 = BgL_start2z00_220
; }  else 
{ 
obj_t BgL_auxz00_11435;
BgL_auxz00_11435 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48393)), BGl_string4447z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start2z00_220); 
FAILURE(BgL_auxz00_11435,BFALSE,BFALSE);} 
BgL_n1z00_4143 = 
(long)CINT(BgL_tmpz00_11432); } 
BgL_test5372z00_11431 = 
(BgL_n1z00_4143<((long)0)); } 
if(BgL_test5372z00_11431)
{ /* Ieee/string.scm 1192 */
BgL_b2z00_2025 = 
BGl_errorz00zz__errorz00(BgL_procz00_4138, 
string_append_3(BGl_string4419z00zz__r4_strings_6_7z00, BGl_string4422z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start2z00_220); }  else 
{ /* Ieee/string.scm 1194 */
bool_t BgL_test5374z00_11443;
{ /* Ieee/string.scm 1194 */
long BgL_n1z00_4145;
{ /* Ieee/string.scm 1194 */
obj_t BgL_tmpz00_11444;
if(
INTEGERP(BgL_start2z00_220))
{ /* Ieee/string.scm 1194 */
BgL_tmpz00_11444 = BgL_start2z00_220
; }  else 
{ 
obj_t BgL_auxz00_11447;
BgL_auxz00_11447 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48488)), BGl_string4447z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start2z00_220); 
FAILURE(BgL_auxz00_11447,BFALSE,BFALSE);} 
BgL_n1z00_4145 = 
(long)CINT(BgL_tmpz00_11444); } 
BgL_test5374z00_11443 = 
(BgL_n1z00_4145>=BgL_l2z00_2021); } 
if(BgL_test5374z00_11443)
{ /* Ieee/string.scm 1194 */
BgL_b2z00_2025 = 
BGl_errorz00zz__errorz00(BgL_procz00_4138, 
string_append_3(BGl_string4421z00zz__r4_strings_6_7z00, BGl_string4422z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start2z00_220); }  else 
{ /* Ieee/string.scm 1194 */
BgL_b2z00_2025 = BgL_start2z00_220; } } }  else 
{ /* Ieee/string.scm 1190 */
BgL_b2z00_2025 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1330 */

{ 
obj_t BgL_i1z00_2027;obj_t BgL_i2z00_2028;
BgL_i1z00_2027 = BgL_b1z00_2024; 
BgL_i2z00_2028 = BgL_b2z00_2025; 
BgL_zc3z04anonymousza31814ze3z87_2029:
{ /* Ieee/string.scm 1334 */
bool_t BgL_test5376z00_11456;
{ /* Ieee/string.scm 1334 */
long BgL_n1z00_4148;long BgL_n2z00_4149;
{ /* Ieee/string.scm 1334 */
obj_t BgL_tmpz00_11457;
if(
INTEGERP(BgL_i1z00_2027))
{ /* Ieee/string.scm 1334 */
BgL_tmpz00_11457 = BgL_i1z00_2027
; }  else 
{ 
obj_t BgL_auxz00_11460;
BgL_auxz00_11460 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54275)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i1z00_2027); 
FAILURE(BgL_auxz00_11460,BFALSE,BFALSE);} 
BgL_n1z00_4148 = 
(long)CINT(BgL_tmpz00_11457); } 
{ /* Ieee/string.scm 1334 */
obj_t BgL_tmpz00_11465;
if(
INTEGERP(BgL_e1z00_2022))
{ /* Ieee/string.scm 1334 */
BgL_tmpz00_11465 = BgL_e1z00_2022
; }  else 
{ 
obj_t BgL_auxz00_11468;
BgL_auxz00_11468 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54278)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_e1z00_2022); 
FAILURE(BgL_auxz00_11468,BFALSE,BFALSE);} 
BgL_n2z00_4149 = 
(long)CINT(BgL_tmpz00_11465); } 
BgL_test5376z00_11456 = 
(BgL_n1z00_4148==BgL_n2z00_4149); } 
if(BgL_test5376z00_11456)
{ /* Ieee/string.scm 1334 */
return ((bool_t)1);}  else 
{ /* Ieee/string.scm 1336 */
bool_t BgL_test5379z00_11474;
{ /* Ieee/string.scm 1336 */
long BgL_n1z00_4151;long BgL_n2z00_4152;
{ /* Ieee/string.scm 1336 */
obj_t BgL_tmpz00_11475;
if(
INTEGERP(BgL_i2z00_2028))
{ /* Ieee/string.scm 1336 */
BgL_tmpz00_11475 = BgL_i2z00_2028
; }  else 
{ 
obj_t BgL_auxz00_11478;
BgL_auxz00_11478 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54303)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i2z00_2028); 
FAILURE(BgL_auxz00_11478,BFALSE,BFALSE);} 
BgL_n1z00_4151 = 
(long)CINT(BgL_tmpz00_11475); } 
{ /* Ieee/string.scm 1336 */
obj_t BgL_tmpz00_11483;
if(
INTEGERP(BgL_e2z00_2023))
{ /* Ieee/string.scm 1336 */
BgL_tmpz00_11483 = BgL_e2z00_2023
; }  else 
{ 
obj_t BgL_auxz00_11486;
BgL_auxz00_11486 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54306)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_e2z00_2023); 
FAILURE(BgL_auxz00_11486,BFALSE,BFALSE);} 
BgL_n2z00_4152 = 
(long)CINT(BgL_tmpz00_11483); } 
BgL_test5379z00_11474 = 
(BgL_n1z00_4151==BgL_n2z00_4152); } 
if(BgL_test5379z00_11474)
{ /* Ieee/string.scm 1336 */
return ((bool_t)0);}  else 
{ /* Ieee/string.scm 1338 */
bool_t BgL_test5382z00_11492;
{ /* Ieee/string.scm 1338 */
unsigned char BgL_auxz00_11514;unsigned char BgL_tmpz00_11493;
{ /* Ieee/string.scm 1338 */
unsigned char BgL_tmpz00_11515;
{ /* Ieee/string.scm 1338 */
long BgL_kz00_4158;
{ /* Ieee/string.scm 1338 */
obj_t BgL_tmpz00_11516;
if(
INTEGERP(BgL_i2z00_2028))
{ /* Ieee/string.scm 1338 */
BgL_tmpz00_11516 = BgL_i2z00_2028
; }  else 
{ 
obj_t BgL_auxz00_11519;
BgL_auxz00_11519 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54371)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i2z00_2028); 
FAILURE(BgL_auxz00_11519,BFALSE,BFALSE);} 
BgL_kz00_4158 = 
(long)CINT(BgL_tmpz00_11516); } 
{ /* Ieee/string.scm 327 */
long BgL_l3257z00_5232;
BgL_l3257z00_5232 = 
STRING_LENGTH(BgL_s2z00_217); 
if(
BOUND_CHECK(BgL_kz00_4158, BgL_l3257z00_5232))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_11515 = 
STRING_REF(BgL_s2z00_217, BgL_kz00_4158)
; }  else 
{ 
obj_t BgL_auxz00_11528;
BgL_auxz00_11528 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_s2z00_217, 
(int)(BgL_l3257z00_5232), 
(int)(BgL_kz00_4158)); 
FAILURE(BgL_auxz00_11528,BFALSE,BFALSE);} } } 
BgL_auxz00_11514 = 
toupper(BgL_tmpz00_11515); } 
{ /* Ieee/string.scm 1338 */
unsigned char BgL_tmpz00_11494;
{ /* Ieee/string.scm 1338 */
long BgL_kz00_4155;
{ /* Ieee/string.scm 1338 */
obj_t BgL_tmpz00_11495;
if(
INTEGERP(BgL_i1z00_2027))
{ /* Ieee/string.scm 1338 */
BgL_tmpz00_11495 = BgL_i1z00_2027
; }  else 
{ 
obj_t BgL_auxz00_11498;
BgL_auxz00_11498 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54352)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i1z00_2027); 
FAILURE(BgL_auxz00_11498,BFALSE,BFALSE);} 
BgL_kz00_4155 = 
(long)CINT(BgL_tmpz00_11495); } 
{ /* Ieee/string.scm 327 */
long BgL_l3253z00_5228;
BgL_l3253z00_5228 = 
STRING_LENGTH(BgL_s1z00_216); 
if(
BOUND_CHECK(BgL_kz00_4155, BgL_l3253z00_5228))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_11494 = 
STRING_REF(BgL_s1z00_216, BgL_kz00_4155)
; }  else 
{ 
obj_t BgL_auxz00_11507;
BgL_auxz00_11507 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_s1z00_216, 
(int)(BgL_l3253z00_5228), 
(int)(BgL_kz00_4155)); 
FAILURE(BgL_auxz00_11507,BFALSE,BFALSE);} } } 
BgL_tmpz00_11493 = 
toupper(BgL_tmpz00_11494); } 
BgL_test5382z00_11492 = 
(BgL_tmpz00_11493==BgL_auxz00_11514); } 
if(BgL_test5382z00_11492)
{ 
obj_t BgL_i2z00_11546;obj_t BgL_i1z00_11536;
{ 
obj_t BgL_tmpz00_11537;
if(
INTEGERP(BgL_i1z00_2027))
{ /* Ieee/string.scm 1339 */
BgL_tmpz00_11537 = BgL_i1z00_2027
; }  else 
{ 
obj_t BgL_auxz00_11540;
BgL_auxz00_11540 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54393)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i1z00_2027); 
FAILURE(BgL_auxz00_11540,BFALSE,BFALSE);} 
BgL_i1z00_11536 = 
ADDFX(BgL_tmpz00_11537, 
BINT(((long)1))); } 
{ 
obj_t BgL_tmpz00_11547;
if(
INTEGERP(BgL_i2z00_2028))
{ /* Ieee/string.scm 1339 */
BgL_tmpz00_11547 = BgL_i2z00_2028
; }  else 
{ 
obj_t BgL_auxz00_11550;
BgL_auxz00_11550 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54404)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_i2z00_2028); 
FAILURE(BgL_auxz00_11550,BFALSE,BFALSE);} 
BgL_i2z00_11546 = 
ADDFX(BgL_tmpz00_11547, 
BINT(((long)1))); } 
BgL_i2z00_2028 = BgL_i2z00_11546; 
BgL_i1z00_2027 = BgL_i1z00_11536; 
goto BgL_zc3z04anonymousza31814ze3z87_2029;}  else 
{ /* Ieee/string.scm 1338 */
return ((bool_t)0);} } } } } } } } } } } } } 

}



/* _string-suffix? */
obj_t BGl__stringzd2suffixzf3z21zz__r4_strings_6_7z00(obj_t BgL_env1186z00_231, obj_t BgL_opt1185z00_230)
{
{ /* Ieee/string.scm 1346 */
{ /* Ieee/string.scm 1346 */
obj_t BgL_s1z00_2040;obj_t BgL_s2z00_2041;
BgL_s1z00_2040 = 
VECTOR_REF(BgL_opt1185z00_230,((long)0)); 
BgL_s2z00_2041 = 
VECTOR_REF(BgL_opt1185z00_230,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1185z00_230)) { case ((long)2) : 

{ /* Ieee/string.scm 1346 */

{ /* Ieee/string.scm 1346 */
bool_t BgL_tmpz00_11558;
{ /* Ieee/string.scm 1346 */
obj_t BgL_auxz00_11566;obj_t BgL_auxz00_11559;
if(
STRINGP(BgL_s2z00_2041))
{ /* Ieee/string.scm 1346 */
BgL_auxz00_11566 = BgL_s2z00_2041
; }  else 
{ 
obj_t BgL_auxz00_11569;
BgL_auxz00_11569 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54660)), BGl_string4450z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_2041); 
FAILURE(BgL_auxz00_11569,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_2040))
{ /* Ieee/string.scm 1346 */
BgL_auxz00_11559 = BgL_s1z00_2040
; }  else 
{ 
obj_t BgL_auxz00_11562;
BgL_auxz00_11562 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54660)), BGl_string4450z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_2040); 
FAILURE(BgL_auxz00_11562,BFALSE,BFALSE);} 
BgL_tmpz00_11558 = 
BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_11559, BgL_auxz00_11566, BFALSE, BFALSE, BFALSE, BFALSE); } 
return 
BBOOL(BgL_tmpz00_11558);} } break;case ((long)3) : 

{ /* Ieee/string.scm 1346 */
obj_t BgL_start1z00_2049;
BgL_start1z00_2049 = 
VECTOR_REF(BgL_opt1185z00_230,((long)2)); 
{ /* Ieee/string.scm 1346 */

{ /* Ieee/string.scm 1346 */
bool_t BgL_tmpz00_11576;
{ /* Ieee/string.scm 1346 */
obj_t BgL_auxz00_11584;obj_t BgL_auxz00_11577;
if(
STRINGP(BgL_s2z00_2041))
{ /* Ieee/string.scm 1346 */
BgL_auxz00_11584 = BgL_s2z00_2041
; }  else 
{ 
obj_t BgL_auxz00_11587;
BgL_auxz00_11587 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54660)), BGl_string4450z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_2041); 
FAILURE(BgL_auxz00_11587,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_2040))
{ /* Ieee/string.scm 1346 */
BgL_auxz00_11577 = BgL_s1z00_2040
; }  else 
{ 
obj_t BgL_auxz00_11580;
BgL_auxz00_11580 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54660)), BGl_string4450z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_2040); 
FAILURE(BgL_auxz00_11580,BFALSE,BFALSE);} 
BgL_tmpz00_11576 = 
BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_11577, BgL_auxz00_11584, BgL_start1z00_2049, BFALSE, BFALSE, BFALSE); } 
return 
BBOOL(BgL_tmpz00_11576);} } } break;case ((long)4) : 

{ /* Ieee/string.scm 1346 */
obj_t BgL_start1z00_2053;
BgL_start1z00_2053 = 
VECTOR_REF(BgL_opt1185z00_230,((long)2)); 
{ /* Ieee/string.scm 1346 */
obj_t BgL_end1z00_2054;
BgL_end1z00_2054 = 
VECTOR_REF(BgL_opt1185z00_230,((long)3)); 
{ /* Ieee/string.scm 1346 */

{ /* Ieee/string.scm 1346 */
bool_t BgL_tmpz00_11595;
{ /* Ieee/string.scm 1346 */
obj_t BgL_auxz00_11603;obj_t BgL_auxz00_11596;
if(
STRINGP(BgL_s2z00_2041))
{ /* Ieee/string.scm 1346 */
BgL_auxz00_11603 = BgL_s2z00_2041
; }  else 
{ 
obj_t BgL_auxz00_11606;
BgL_auxz00_11606 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54660)), BGl_string4450z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_2041); 
FAILURE(BgL_auxz00_11606,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_2040))
{ /* Ieee/string.scm 1346 */
BgL_auxz00_11596 = BgL_s1z00_2040
; }  else 
{ 
obj_t BgL_auxz00_11599;
BgL_auxz00_11599 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54660)), BGl_string4450z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_2040); 
FAILURE(BgL_auxz00_11599,BFALSE,BFALSE);} 
BgL_tmpz00_11595 = 
BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_11596, BgL_auxz00_11603, BgL_start1z00_2053, BgL_end1z00_2054, BFALSE, BFALSE); } 
return 
BBOOL(BgL_tmpz00_11595);} } } } break;case ((long)5) : 

{ /* Ieee/string.scm 1346 */
obj_t BgL_start1z00_2057;
BgL_start1z00_2057 = 
VECTOR_REF(BgL_opt1185z00_230,((long)2)); 
{ /* Ieee/string.scm 1346 */
obj_t BgL_end1z00_2058;
BgL_end1z00_2058 = 
VECTOR_REF(BgL_opt1185z00_230,((long)3)); 
{ /* Ieee/string.scm 1346 */
obj_t BgL_start2z00_2059;
BgL_start2z00_2059 = 
VECTOR_REF(BgL_opt1185z00_230,((long)4)); 
{ /* Ieee/string.scm 1346 */

{ /* Ieee/string.scm 1346 */
bool_t BgL_tmpz00_11615;
{ /* Ieee/string.scm 1346 */
obj_t BgL_auxz00_11623;obj_t BgL_auxz00_11616;
if(
STRINGP(BgL_s2z00_2041))
{ /* Ieee/string.scm 1346 */
BgL_auxz00_11623 = BgL_s2z00_2041
; }  else 
{ 
obj_t BgL_auxz00_11626;
BgL_auxz00_11626 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54660)), BGl_string4450z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_2041); 
FAILURE(BgL_auxz00_11626,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_2040))
{ /* Ieee/string.scm 1346 */
BgL_auxz00_11616 = BgL_s1z00_2040
; }  else 
{ 
obj_t BgL_auxz00_11619;
BgL_auxz00_11619 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54660)), BGl_string4450z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_2040); 
FAILURE(BgL_auxz00_11619,BFALSE,BFALSE);} 
BgL_tmpz00_11615 = 
BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_11616, BgL_auxz00_11623, BgL_start1z00_2057, BgL_end1z00_2058, BgL_start2z00_2059, BFALSE); } 
return 
BBOOL(BgL_tmpz00_11615);} } } } } break;case ((long)6) : 

{ /* Ieee/string.scm 1346 */
obj_t BgL_start1z00_2061;
BgL_start1z00_2061 = 
VECTOR_REF(BgL_opt1185z00_230,((long)2)); 
{ /* Ieee/string.scm 1346 */
obj_t BgL_end1z00_2062;
BgL_end1z00_2062 = 
VECTOR_REF(BgL_opt1185z00_230,((long)3)); 
{ /* Ieee/string.scm 1346 */
obj_t BgL_start2z00_2063;
BgL_start2z00_2063 = 
VECTOR_REF(BgL_opt1185z00_230,((long)4)); 
{ /* Ieee/string.scm 1346 */
obj_t BgL_end2z00_2064;
BgL_end2z00_2064 = 
VECTOR_REF(BgL_opt1185z00_230,((long)5)); 
{ /* Ieee/string.scm 1346 */

{ /* Ieee/string.scm 1346 */
bool_t BgL_tmpz00_11636;
{ /* Ieee/string.scm 1346 */
obj_t BgL_auxz00_11644;obj_t BgL_auxz00_11637;
if(
STRINGP(BgL_s2z00_2041))
{ /* Ieee/string.scm 1346 */
BgL_auxz00_11644 = BgL_s2z00_2041
; }  else 
{ 
obj_t BgL_auxz00_11647;
BgL_auxz00_11647 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54660)), BGl_string4450z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_2041); 
FAILURE(BgL_auxz00_11647,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_2040))
{ /* Ieee/string.scm 1346 */
BgL_auxz00_11637 = BgL_s1z00_2040
; }  else 
{ 
obj_t BgL_auxz00_11640;
BgL_auxz00_11640 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)54660)), BGl_string4450z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_2040); 
FAILURE(BgL_auxz00_11640,BFALSE,BFALSE);} 
BgL_tmpz00_11636 = 
BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(BgL_auxz00_11637, BgL_auxz00_11644, BgL_start1z00_2061, BgL_end1z00_2062, BgL_start2z00_2063, BgL_end2z00_2064); } 
return 
BBOOL(BgL_tmpz00_11636);} } } } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4448z00zz__r4_strings_6_7z00, BGl_string4410z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1185z00_230)));} } } } 

}



/* string-suffix? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2suffixzf3z21zz__r4_strings_6_7z00(obj_t BgL_s1z00_224, obj_t BgL_s2z00_225, obj_t BgL_start1z00_226, obj_t BgL_end1z00_227, obj_t BgL_start2z00_228, obj_t BgL_end2z00_229)
{
{ /* Ieee/string.scm 1346 */
{ /* Ieee/string.scm 1348 */
long BgL_l1z00_2066;
BgL_l1z00_2066 = 
STRING_LENGTH(BgL_s1z00_224); 
{ /* Ieee/string.scm 1348 */
long BgL_l2z00_2067;
BgL_l2z00_2067 = 
STRING_LENGTH(BgL_s2z00_225); 
{ /* Ieee/string.scm 1349 */
obj_t BgL_b1z00_2068;
{ /* Ieee/string.scm 1350 */
obj_t BgL_procz00_4180;
BgL_procz00_4180 = BGl_symbol4451z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end1z00_227))
{ /* Ieee/string.scm 1206 */
bool_t BgL_test5400z00_11662;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_4185;
{ /* Ieee/string.scm 1206 */
obj_t BgL_tmpz00_11663;
if(
INTEGERP(BgL_end1z00_227))
{ /* Ieee/string.scm 1206 */
BgL_tmpz00_11663 = BgL_end1z00_227
; }  else 
{ 
obj_t BgL_auxz00_11666;
BgL_auxz00_11666 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48914)), BGl_string4452z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end1z00_227); 
FAILURE(BgL_auxz00_11666,BFALSE,BFALSE);} 
BgL_n1z00_4185 = 
(long)CINT(BgL_tmpz00_11663); } 
BgL_test5400z00_11662 = 
(BgL_n1z00_4185<=((long)0)); } 
if(BgL_test5400z00_11662)
{ /* Ieee/string.scm 1206 */
BgL_b1z00_2068 = 
BGl_errorz00zz__errorz00(BgL_procz00_4180, 
string_append_3(BGl_string4414z00zz__r4_strings_6_7z00, BGl_string4415z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end1z00_227); }  else 
{ /* Ieee/string.scm 1208 */
bool_t BgL_test5402z00_11674;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_4187;
{ /* Ieee/string.scm 1208 */
obj_t BgL_tmpz00_11675;
if(
INTEGERP(BgL_end1z00_227))
{ /* Ieee/string.scm 1208 */
BgL_tmpz00_11675 = BgL_end1z00_227
; }  else 
{ 
obj_t BgL_auxz00_11678;
BgL_auxz00_11678 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49006)), BGl_string4452z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end1z00_227); 
FAILURE(BgL_auxz00_11678,BFALSE,BFALSE);} 
BgL_n1z00_4187 = 
(long)CINT(BgL_tmpz00_11675); } 
BgL_test5402z00_11674 = 
(BgL_n1z00_4187>BgL_l1z00_2066); } 
if(BgL_test5402z00_11674)
{ /* Ieee/string.scm 1208 */
BgL_b1z00_2068 = 
BGl_errorz00zz__errorz00(BgL_procz00_4180, 
string_append_3(BGl_string4417z00zz__r4_strings_6_7z00, BGl_string4415z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end1z00_227); }  else 
{ /* Ieee/string.scm 1208 */
BgL_b1z00_2068 = BgL_end1z00_227; } } }  else 
{ /* Ieee/string.scm 1204 */
BgL_b1z00_2068 = 
BINT(BgL_l1z00_2066); } } 
{ /* Ieee/string.scm 1350 */
obj_t BgL_b2z00_2069;
{ /* Ieee/string.scm 1351 */
obj_t BgL_procz00_4190;
BgL_procz00_4190 = BGl_symbol4451z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end2z00_229))
{ /* Ieee/string.scm 1206 */
bool_t BgL_test5405z00_11689;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_4195;
{ /* Ieee/string.scm 1206 */
obj_t BgL_tmpz00_11690;
if(
INTEGERP(BgL_end2z00_229))
{ /* Ieee/string.scm 1206 */
BgL_tmpz00_11690 = BgL_end2z00_229
; }  else 
{ 
obj_t BgL_auxz00_11693;
BgL_auxz00_11693 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48914)), BGl_string4452z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end2z00_229); 
FAILURE(BgL_auxz00_11693,BFALSE,BFALSE);} 
BgL_n1z00_4195 = 
(long)CINT(BgL_tmpz00_11690); } 
BgL_test5405z00_11689 = 
(BgL_n1z00_4195<=((long)0)); } 
if(BgL_test5405z00_11689)
{ /* Ieee/string.scm 1206 */
BgL_b2z00_2069 = 
BGl_errorz00zz__errorz00(BgL_procz00_4190, 
string_append_3(BGl_string4414z00zz__r4_strings_6_7z00, BGl_string4418z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end2z00_229); }  else 
{ /* Ieee/string.scm 1208 */
bool_t BgL_test5407z00_11701;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_4197;
{ /* Ieee/string.scm 1208 */
obj_t BgL_tmpz00_11702;
if(
INTEGERP(BgL_end2z00_229))
{ /* Ieee/string.scm 1208 */
BgL_tmpz00_11702 = BgL_end2z00_229
; }  else 
{ 
obj_t BgL_auxz00_11705;
BgL_auxz00_11705 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49006)), BGl_string4452z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end2z00_229); 
FAILURE(BgL_auxz00_11705,BFALSE,BFALSE);} 
BgL_n1z00_4197 = 
(long)CINT(BgL_tmpz00_11702); } 
BgL_test5407z00_11701 = 
(BgL_n1z00_4197>BgL_l2z00_2067); } 
if(BgL_test5407z00_11701)
{ /* Ieee/string.scm 1208 */
BgL_b2z00_2069 = 
BGl_errorz00zz__errorz00(BgL_procz00_4190, 
string_append_3(BGl_string4417z00zz__r4_strings_6_7z00, BGl_string4418z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end2z00_229); }  else 
{ /* Ieee/string.scm 1208 */
BgL_b2z00_2069 = BgL_end2z00_229; } } }  else 
{ /* Ieee/string.scm 1204 */
BgL_b2z00_2069 = 
BINT(BgL_l2z00_2067); } } 
{ /* Ieee/string.scm 1351 */
obj_t BgL_e1z00_2070;
{ /* Ieee/string.scm 1352 */
obj_t BgL_procz00_4200;
BgL_procz00_4200 = BGl_symbol4451z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start1z00_226))
{ /* Ieee/string.scm 1192 */
bool_t BgL_test5410z00_11716;
{ /* Ieee/string.scm 1192 */
long BgL_n1z00_4205;
{ /* Ieee/string.scm 1192 */
obj_t BgL_tmpz00_11717;
if(
INTEGERP(BgL_start1z00_226))
{ /* Ieee/string.scm 1192 */
BgL_tmpz00_11717 = BgL_start1z00_226
; }  else 
{ 
obj_t BgL_auxz00_11720;
BgL_auxz00_11720 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48393)), BGl_string4452z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start1z00_226); 
FAILURE(BgL_auxz00_11720,BFALSE,BFALSE);} 
BgL_n1z00_4205 = 
(long)CINT(BgL_tmpz00_11717); } 
BgL_test5410z00_11716 = 
(BgL_n1z00_4205<((long)0)); } 
if(BgL_test5410z00_11716)
{ /* Ieee/string.scm 1192 */
BgL_e1z00_2070 = 
BGl_errorz00zz__errorz00(BgL_procz00_4200, 
string_append_3(BGl_string4419z00zz__r4_strings_6_7z00, BGl_string4420z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start1z00_226); }  else 
{ /* Ieee/string.scm 1194 */
bool_t BgL_test5412z00_11728;
{ /* Ieee/string.scm 1194 */
long BgL_n1z00_4207;
{ /* Ieee/string.scm 1194 */
obj_t BgL_tmpz00_11729;
if(
INTEGERP(BgL_start1z00_226))
{ /* Ieee/string.scm 1194 */
BgL_tmpz00_11729 = BgL_start1z00_226
; }  else 
{ 
obj_t BgL_auxz00_11732;
BgL_auxz00_11732 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48488)), BGl_string4452z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start1z00_226); 
FAILURE(BgL_auxz00_11732,BFALSE,BFALSE);} 
BgL_n1z00_4207 = 
(long)CINT(BgL_tmpz00_11729); } 
BgL_test5412z00_11728 = 
(BgL_n1z00_4207>=BgL_l1z00_2066); } 
if(BgL_test5412z00_11728)
{ /* Ieee/string.scm 1194 */
BgL_e1z00_2070 = 
BGl_errorz00zz__errorz00(BgL_procz00_4200, 
string_append_3(BGl_string4421z00zz__r4_strings_6_7z00, BGl_string4420z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start1z00_226); }  else 
{ /* Ieee/string.scm 1194 */
BgL_e1z00_2070 = BgL_start1z00_226; } } }  else 
{ /* Ieee/string.scm 1190 */
BgL_e1z00_2070 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1352 */
obj_t BgL_e2z00_2071;
{ /* Ieee/string.scm 1353 */
obj_t BgL_procz00_4210;
BgL_procz00_4210 = BGl_symbol4451z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start2z00_228))
{ /* Ieee/string.scm 1192 */
bool_t BgL_test5415z00_11743;
{ /* Ieee/string.scm 1192 */
long BgL_n1z00_4215;
{ /* Ieee/string.scm 1192 */
obj_t BgL_tmpz00_11744;
if(
INTEGERP(BgL_start2z00_228))
{ /* Ieee/string.scm 1192 */
BgL_tmpz00_11744 = BgL_start2z00_228
; }  else 
{ 
obj_t BgL_auxz00_11747;
BgL_auxz00_11747 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48393)), BGl_string4452z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start2z00_228); 
FAILURE(BgL_auxz00_11747,BFALSE,BFALSE);} 
BgL_n1z00_4215 = 
(long)CINT(BgL_tmpz00_11744); } 
BgL_test5415z00_11743 = 
(BgL_n1z00_4215<((long)0)); } 
if(BgL_test5415z00_11743)
{ /* Ieee/string.scm 1192 */
BgL_e2z00_2071 = 
BGl_errorz00zz__errorz00(BgL_procz00_4210, 
string_append_3(BGl_string4419z00zz__r4_strings_6_7z00, BGl_string4422z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start2z00_228); }  else 
{ /* Ieee/string.scm 1194 */
bool_t BgL_test5417z00_11755;
{ /* Ieee/string.scm 1194 */
long BgL_n1z00_4217;
{ /* Ieee/string.scm 1194 */
obj_t BgL_tmpz00_11756;
if(
INTEGERP(BgL_start2z00_228))
{ /* Ieee/string.scm 1194 */
BgL_tmpz00_11756 = BgL_start2z00_228
; }  else 
{ 
obj_t BgL_auxz00_11759;
BgL_auxz00_11759 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48488)), BGl_string4452z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start2z00_228); 
FAILURE(BgL_auxz00_11759,BFALSE,BFALSE);} 
BgL_n1z00_4217 = 
(long)CINT(BgL_tmpz00_11756); } 
BgL_test5417z00_11755 = 
(BgL_n1z00_4217>=BgL_l2z00_2067); } 
if(BgL_test5417z00_11755)
{ /* Ieee/string.scm 1194 */
BgL_e2z00_2071 = 
BGl_errorz00zz__errorz00(BgL_procz00_4210, 
string_append_3(BGl_string4421z00zz__r4_strings_6_7z00, BGl_string4422z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start2z00_228); }  else 
{ /* Ieee/string.scm 1194 */
BgL_e2z00_2071 = BgL_start2z00_228; } } }  else 
{ /* Ieee/string.scm 1190 */
BgL_e2z00_2071 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1353 */

{ 
long BgL_i1z00_2075;long BgL_i2z00_2076;
{ /* Ieee/string.scm 1354 */
long BgL_za71za7_4220;
{ /* Ieee/string.scm 1354 */
obj_t BgL_tmpz00_11816;
if(
INTEGERP(BgL_b1z00_2068))
{ /* Ieee/string.scm 1354 */
BgL_tmpz00_11816 = BgL_b1z00_2068
; }  else 
{ 
obj_t BgL_auxz00_11819;
BgL_auxz00_11819 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)55093)), BGl_string4452z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_b1z00_2068); 
FAILURE(BgL_auxz00_11819,BFALSE,BFALSE);} 
BgL_za71za7_4220 = 
(long)CINT(BgL_tmpz00_11816); } 
BgL_i1z00_2075 = 
(BgL_za71za7_4220-((long)1)); } 
{ /* Ieee/string.scm 1355 */
long BgL_za71za7_4222;
{ /* Ieee/string.scm 1355 */
obj_t BgL_tmpz00_11825;
if(
INTEGERP(BgL_b2z00_2069))
{ /* Ieee/string.scm 1355 */
BgL_tmpz00_11825 = BgL_b2z00_2069
; }  else 
{ 
obj_t BgL_auxz00_11828;
BgL_auxz00_11828 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)55112)), BGl_string4452z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_b2z00_2069); 
FAILURE(BgL_auxz00_11828,BFALSE,BFALSE);} 
BgL_za71za7_4222 = 
(long)CINT(BgL_tmpz00_11825); } 
BgL_i2z00_2076 = 
(BgL_za71za7_4222-((long)1)); } 
BgL_zc3z04anonymousza31826ze3z87_2077:
{ /* Ieee/string.scm 1357 */
bool_t BgL_test5419z00_11768;
{ /* Ieee/string.scm 1357 */
long BgL_n2z00_4225;
{ /* Ieee/string.scm 1357 */
obj_t BgL_tmpz00_11769;
if(
INTEGERP(BgL_e1z00_2070))
{ /* Ieee/string.scm 1357 */
BgL_tmpz00_11769 = BgL_e1z00_2070
; }  else 
{ 
obj_t BgL_auxz00_11772;
BgL_auxz00_11772 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)55142)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_e1z00_2070); 
FAILURE(BgL_auxz00_11772,BFALSE,BFALSE);} 
BgL_n2z00_4225 = 
(long)CINT(BgL_tmpz00_11769); } 
BgL_test5419z00_11768 = 
(BgL_i1z00_2075<BgL_n2z00_4225); } 
if(BgL_test5419z00_11768)
{ /* Ieee/string.scm 1357 */
return ((bool_t)1);}  else 
{ /* Ieee/string.scm 1359 */
bool_t BgL_test5421z00_11778;
{ /* Ieee/string.scm 1359 */
long BgL_n2z00_4228;
{ /* Ieee/string.scm 1359 */
obj_t BgL_tmpz00_11779;
if(
INTEGERP(BgL_e2z00_2071))
{ /* Ieee/string.scm 1359 */
BgL_tmpz00_11779 = BgL_e2z00_2071
; }  else 
{ 
obj_t BgL_auxz00_11782;
BgL_auxz00_11782 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)55170)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_e2z00_2071); 
FAILURE(BgL_auxz00_11782,BFALSE,BFALSE);} 
BgL_n2z00_4228 = 
(long)CINT(BgL_tmpz00_11779); } 
BgL_test5421z00_11778 = 
(BgL_i2z00_2076<BgL_n2z00_4228); } 
if(BgL_test5421z00_11778)
{ /* Ieee/string.scm 1359 */
return ((bool_t)0);}  else 
{ /* Ieee/string.scm 1361 */
bool_t BgL_test5423z00_11788;
{ /* Ieee/string.scm 1361 */
unsigned char BgL_auxz00_11800;unsigned char BgL_tmpz00_11789;
{ /* Ieee/string.scm 327 */
long BgL_l3265z00_5240;
BgL_l3265z00_5240 = 
STRING_LENGTH(BgL_s2z00_225); 
if(
BOUND_CHECK(BgL_i2z00_2076, BgL_l3265z00_5240))
{ /* Ieee/string.scm 327 */
BgL_auxz00_11800 = 
STRING_REF(BgL_s2z00_225, BgL_i2z00_2076)
; }  else 
{ 
obj_t BgL_auxz00_11805;
BgL_auxz00_11805 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_s2z00_225, 
(int)(BgL_l3265z00_5240), 
(int)(BgL_i2z00_2076)); 
FAILURE(BgL_auxz00_11805,BFALSE,BFALSE);} } 
{ /* Ieee/string.scm 327 */
long BgL_l3261z00_5236;
BgL_l3261z00_5236 = 
STRING_LENGTH(BgL_s1z00_224); 
if(
BOUND_CHECK(BgL_i1z00_2075, BgL_l3261z00_5236))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_11789 = 
STRING_REF(BgL_s1z00_224, BgL_i1z00_2075)
; }  else 
{ 
obj_t BgL_auxz00_11794;
BgL_auxz00_11794 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_s1z00_224, 
(int)(BgL_l3261z00_5236), 
(int)(BgL_i1z00_2075)); 
FAILURE(BgL_auxz00_11794,BFALSE,BFALSE);} } 
BgL_test5423z00_11788 = 
(BgL_tmpz00_11789==BgL_auxz00_11800); } 
if(BgL_test5423z00_11788)
{ 
long BgL_i2z00_11814;long BgL_i1z00_11812;
BgL_i1z00_11812 = 
(BgL_i1z00_2075-((long)1)); 
BgL_i2z00_11814 = 
(BgL_i2z00_2076-((long)1)); 
BgL_i2z00_2076 = BgL_i2z00_11814; 
BgL_i1z00_2075 = BgL_i1z00_11812; 
goto BgL_zc3z04anonymousza31826ze3z87_2077;}  else 
{ /* Ieee/string.scm 1361 */
return ((bool_t)0);} } } } } } } } } } } } } 

}



/* _string-suffix-ci? */
obj_t BGl__stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t BgL_env1190z00_239, obj_t BgL_opt1189z00_238)
{
{ /* Ieee/string.scm 1369 */
{ /* Ieee/string.scm 1369 */
obj_t BgL_s1z00_2088;obj_t BgL_s2z00_2089;
BgL_s1z00_2088 = 
VECTOR_REF(BgL_opt1189z00_238,((long)0)); 
BgL_s2z00_2089 = 
VECTOR_REF(BgL_opt1189z00_238,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1189z00_238)) { case ((long)2) : 

{ /* Ieee/string.scm 1369 */

{ /* Ieee/string.scm 1369 */
bool_t BgL_tmpz00_11836;
{ /* Ieee/string.scm 1369 */
obj_t BgL_auxz00_11844;obj_t BgL_auxz00_11837;
if(
STRINGP(BgL_s2z00_2089))
{ /* Ieee/string.scm 1369 */
BgL_auxz00_11844 = BgL_s2z00_2089
; }  else 
{ 
obj_t BgL_auxz00_11847;
BgL_auxz00_11847 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)55521)), BGl_string4455z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_2089); 
FAILURE(BgL_auxz00_11847,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_2088))
{ /* Ieee/string.scm 1369 */
BgL_auxz00_11837 = BgL_s1z00_2088
; }  else 
{ 
obj_t BgL_auxz00_11840;
BgL_auxz00_11840 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)55521)), BGl_string4455z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_2088); 
FAILURE(BgL_auxz00_11840,BFALSE,BFALSE);} 
BgL_tmpz00_11836 = 
BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_11837, BgL_auxz00_11844, BFALSE, BFALSE, BFALSE, BFALSE); } 
return 
BBOOL(BgL_tmpz00_11836);} } break;case ((long)3) : 

{ /* Ieee/string.scm 1369 */
obj_t BgL_start1z00_2097;
BgL_start1z00_2097 = 
VECTOR_REF(BgL_opt1189z00_238,((long)2)); 
{ /* Ieee/string.scm 1369 */

{ /* Ieee/string.scm 1369 */
bool_t BgL_tmpz00_11854;
{ /* Ieee/string.scm 1369 */
obj_t BgL_auxz00_11862;obj_t BgL_auxz00_11855;
if(
STRINGP(BgL_s2z00_2089))
{ /* Ieee/string.scm 1369 */
BgL_auxz00_11862 = BgL_s2z00_2089
; }  else 
{ 
obj_t BgL_auxz00_11865;
BgL_auxz00_11865 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)55521)), BGl_string4455z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_2089); 
FAILURE(BgL_auxz00_11865,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_2088))
{ /* Ieee/string.scm 1369 */
BgL_auxz00_11855 = BgL_s1z00_2088
; }  else 
{ 
obj_t BgL_auxz00_11858;
BgL_auxz00_11858 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)55521)), BGl_string4455z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_2088); 
FAILURE(BgL_auxz00_11858,BFALSE,BFALSE);} 
BgL_tmpz00_11854 = 
BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_11855, BgL_auxz00_11862, BgL_start1z00_2097, BFALSE, BFALSE, BFALSE); } 
return 
BBOOL(BgL_tmpz00_11854);} } } break;case ((long)4) : 

{ /* Ieee/string.scm 1369 */
obj_t BgL_start1z00_2101;
BgL_start1z00_2101 = 
VECTOR_REF(BgL_opt1189z00_238,((long)2)); 
{ /* Ieee/string.scm 1369 */
obj_t BgL_end1z00_2102;
BgL_end1z00_2102 = 
VECTOR_REF(BgL_opt1189z00_238,((long)3)); 
{ /* Ieee/string.scm 1369 */

{ /* Ieee/string.scm 1369 */
bool_t BgL_tmpz00_11873;
{ /* Ieee/string.scm 1369 */
obj_t BgL_auxz00_11881;obj_t BgL_auxz00_11874;
if(
STRINGP(BgL_s2z00_2089))
{ /* Ieee/string.scm 1369 */
BgL_auxz00_11881 = BgL_s2z00_2089
; }  else 
{ 
obj_t BgL_auxz00_11884;
BgL_auxz00_11884 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)55521)), BGl_string4455z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_2089); 
FAILURE(BgL_auxz00_11884,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_2088))
{ /* Ieee/string.scm 1369 */
BgL_auxz00_11874 = BgL_s1z00_2088
; }  else 
{ 
obj_t BgL_auxz00_11877;
BgL_auxz00_11877 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)55521)), BGl_string4455z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_2088); 
FAILURE(BgL_auxz00_11877,BFALSE,BFALSE);} 
BgL_tmpz00_11873 = 
BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_11874, BgL_auxz00_11881, BgL_start1z00_2101, BgL_end1z00_2102, BFALSE, BFALSE); } 
return 
BBOOL(BgL_tmpz00_11873);} } } } break;case ((long)5) : 

{ /* Ieee/string.scm 1369 */
obj_t BgL_start1z00_2105;
BgL_start1z00_2105 = 
VECTOR_REF(BgL_opt1189z00_238,((long)2)); 
{ /* Ieee/string.scm 1369 */
obj_t BgL_end1z00_2106;
BgL_end1z00_2106 = 
VECTOR_REF(BgL_opt1189z00_238,((long)3)); 
{ /* Ieee/string.scm 1369 */
obj_t BgL_start2z00_2107;
BgL_start2z00_2107 = 
VECTOR_REF(BgL_opt1189z00_238,((long)4)); 
{ /* Ieee/string.scm 1369 */

{ /* Ieee/string.scm 1369 */
bool_t BgL_tmpz00_11893;
{ /* Ieee/string.scm 1369 */
obj_t BgL_auxz00_11901;obj_t BgL_auxz00_11894;
if(
STRINGP(BgL_s2z00_2089))
{ /* Ieee/string.scm 1369 */
BgL_auxz00_11901 = BgL_s2z00_2089
; }  else 
{ 
obj_t BgL_auxz00_11904;
BgL_auxz00_11904 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)55521)), BGl_string4455z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_2089); 
FAILURE(BgL_auxz00_11904,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_2088))
{ /* Ieee/string.scm 1369 */
BgL_auxz00_11894 = BgL_s1z00_2088
; }  else 
{ 
obj_t BgL_auxz00_11897;
BgL_auxz00_11897 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)55521)), BGl_string4455z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_2088); 
FAILURE(BgL_auxz00_11897,BFALSE,BFALSE);} 
BgL_tmpz00_11893 = 
BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_11894, BgL_auxz00_11901, BgL_start1z00_2105, BgL_end1z00_2106, BgL_start2z00_2107, BFALSE); } 
return 
BBOOL(BgL_tmpz00_11893);} } } } } break;case ((long)6) : 

{ /* Ieee/string.scm 1369 */
obj_t BgL_start1z00_2109;
BgL_start1z00_2109 = 
VECTOR_REF(BgL_opt1189z00_238,((long)2)); 
{ /* Ieee/string.scm 1369 */
obj_t BgL_end1z00_2110;
BgL_end1z00_2110 = 
VECTOR_REF(BgL_opt1189z00_238,((long)3)); 
{ /* Ieee/string.scm 1369 */
obj_t BgL_start2z00_2111;
BgL_start2z00_2111 = 
VECTOR_REF(BgL_opt1189z00_238,((long)4)); 
{ /* Ieee/string.scm 1369 */
obj_t BgL_end2z00_2112;
BgL_end2z00_2112 = 
VECTOR_REF(BgL_opt1189z00_238,((long)5)); 
{ /* Ieee/string.scm 1369 */

{ /* Ieee/string.scm 1369 */
bool_t BgL_tmpz00_11914;
{ /* Ieee/string.scm 1369 */
obj_t BgL_auxz00_11922;obj_t BgL_auxz00_11915;
if(
STRINGP(BgL_s2z00_2089))
{ /* Ieee/string.scm 1369 */
BgL_auxz00_11922 = BgL_s2z00_2089
; }  else 
{ 
obj_t BgL_auxz00_11925;
BgL_auxz00_11925 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)55521)), BGl_string4455z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s2z00_2089); 
FAILURE(BgL_auxz00_11925,BFALSE,BFALSE);} 
if(
STRINGP(BgL_s1z00_2088))
{ /* Ieee/string.scm 1369 */
BgL_auxz00_11915 = BgL_s1z00_2088
; }  else 
{ 
obj_t BgL_auxz00_11918;
BgL_auxz00_11918 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)55521)), BGl_string4455z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_s1z00_2088); 
FAILURE(BgL_auxz00_11918,BFALSE,BFALSE);} 
BgL_tmpz00_11914 = 
BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(BgL_auxz00_11915, BgL_auxz00_11922, BgL_start1z00_2109, BgL_end1z00_2110, BgL_start2z00_2111, BgL_end2z00_2112); } 
return 
BBOOL(BgL_tmpz00_11914);} } } } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4453z00zz__r4_strings_6_7z00, BGl_string4410z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1189z00_238)));} } } } 

}



/* string-suffix-ci? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2suffixzd2cizf3zf3zz__r4_strings_6_7z00(obj_t BgL_s1z00_232, obj_t BgL_s2z00_233, obj_t BgL_start1z00_234, obj_t BgL_end1z00_235, obj_t BgL_start2z00_236, obj_t BgL_end2z00_237)
{
{ /* Ieee/string.scm 1369 */
{ /* Ieee/string.scm 1371 */
long BgL_l1z00_2114;
BgL_l1z00_2114 = 
STRING_LENGTH(BgL_s1z00_232); 
{ /* Ieee/string.scm 1371 */
long BgL_l2z00_2115;
BgL_l2z00_2115 = 
STRING_LENGTH(BgL_s2z00_233); 
{ /* Ieee/string.scm 1372 */
obj_t BgL_b1z00_2116;
{ /* Ieee/string.scm 1373 */
obj_t BgL_procz00_4247;
BgL_procz00_4247 = BGl_symbol4412z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end1z00_235))
{ /* Ieee/string.scm 1206 */
bool_t BgL_test5439z00_11940;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_4252;
{ /* Ieee/string.scm 1206 */
obj_t BgL_tmpz00_11941;
if(
INTEGERP(BgL_end1z00_235))
{ /* Ieee/string.scm 1206 */
BgL_tmpz00_11941 = BgL_end1z00_235
; }  else 
{ 
obj_t BgL_auxz00_11944;
BgL_auxz00_11944 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48914)), BGl_string4456z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end1z00_235); 
FAILURE(BgL_auxz00_11944,BFALSE,BFALSE);} 
BgL_n1z00_4252 = 
(long)CINT(BgL_tmpz00_11941); } 
BgL_test5439z00_11940 = 
(BgL_n1z00_4252<=((long)0)); } 
if(BgL_test5439z00_11940)
{ /* Ieee/string.scm 1206 */
BgL_b1z00_2116 = 
BGl_errorz00zz__errorz00(BgL_procz00_4247, 
string_append_3(BGl_string4414z00zz__r4_strings_6_7z00, BGl_string4415z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end1z00_235); }  else 
{ /* Ieee/string.scm 1208 */
bool_t BgL_test5441z00_11952;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_4254;
{ /* Ieee/string.scm 1208 */
obj_t BgL_tmpz00_11953;
if(
INTEGERP(BgL_end1z00_235))
{ /* Ieee/string.scm 1208 */
BgL_tmpz00_11953 = BgL_end1z00_235
; }  else 
{ 
obj_t BgL_auxz00_11956;
BgL_auxz00_11956 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49006)), BGl_string4456z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end1z00_235); 
FAILURE(BgL_auxz00_11956,BFALSE,BFALSE);} 
BgL_n1z00_4254 = 
(long)CINT(BgL_tmpz00_11953); } 
BgL_test5441z00_11952 = 
(BgL_n1z00_4254>BgL_l1z00_2114); } 
if(BgL_test5441z00_11952)
{ /* Ieee/string.scm 1208 */
BgL_b1z00_2116 = 
BGl_errorz00zz__errorz00(BgL_procz00_4247, 
string_append_3(BGl_string4417z00zz__r4_strings_6_7z00, BGl_string4415z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end1z00_235); }  else 
{ /* Ieee/string.scm 1208 */
BgL_b1z00_2116 = BgL_end1z00_235; } } }  else 
{ /* Ieee/string.scm 1204 */
BgL_b1z00_2116 = 
BINT(BgL_l1z00_2114); } } 
{ /* Ieee/string.scm 1373 */
obj_t BgL_b2z00_2117;
{ /* Ieee/string.scm 1374 */
obj_t BgL_procz00_4257;
BgL_procz00_4257 = BGl_symbol4412z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_end2z00_237))
{ /* Ieee/string.scm 1206 */
bool_t BgL_test5444z00_11967;
{ /* Ieee/string.scm 1206 */
long BgL_n1z00_4262;
{ /* Ieee/string.scm 1206 */
obj_t BgL_tmpz00_11968;
if(
INTEGERP(BgL_end2z00_237))
{ /* Ieee/string.scm 1206 */
BgL_tmpz00_11968 = BgL_end2z00_237
; }  else 
{ 
obj_t BgL_auxz00_11971;
BgL_auxz00_11971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48914)), BGl_string4456z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end2z00_237); 
FAILURE(BgL_auxz00_11971,BFALSE,BFALSE);} 
BgL_n1z00_4262 = 
(long)CINT(BgL_tmpz00_11968); } 
BgL_test5444z00_11967 = 
(BgL_n1z00_4262<=((long)0)); } 
if(BgL_test5444z00_11967)
{ /* Ieee/string.scm 1206 */
BgL_b2z00_2117 = 
BGl_errorz00zz__errorz00(BgL_procz00_4257, 
string_append_3(BGl_string4414z00zz__r4_strings_6_7z00, BGl_string4418z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end2z00_237); }  else 
{ /* Ieee/string.scm 1208 */
bool_t BgL_test5446z00_11979;
{ /* Ieee/string.scm 1208 */
long BgL_n1z00_4264;
{ /* Ieee/string.scm 1208 */
obj_t BgL_tmpz00_11980;
if(
INTEGERP(BgL_end2z00_237))
{ /* Ieee/string.scm 1208 */
BgL_tmpz00_11980 = BgL_end2z00_237
; }  else 
{ 
obj_t BgL_auxz00_11983;
BgL_auxz00_11983 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)49006)), BGl_string4456z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_end2z00_237); 
FAILURE(BgL_auxz00_11983,BFALSE,BFALSE);} 
BgL_n1z00_4264 = 
(long)CINT(BgL_tmpz00_11980); } 
BgL_test5446z00_11979 = 
(BgL_n1z00_4264>BgL_l2z00_2115); } 
if(BgL_test5446z00_11979)
{ /* Ieee/string.scm 1208 */
BgL_b2z00_2117 = 
BGl_errorz00zz__errorz00(BgL_procz00_4257, 
string_append_3(BGl_string4417z00zz__r4_strings_6_7z00, BGl_string4418z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_end2z00_237); }  else 
{ /* Ieee/string.scm 1208 */
BgL_b2z00_2117 = BgL_end2z00_237; } } }  else 
{ /* Ieee/string.scm 1204 */
BgL_b2z00_2117 = 
BINT(BgL_l2z00_2115); } } 
{ /* Ieee/string.scm 1374 */
obj_t BgL_e1z00_2118;
{ /* Ieee/string.scm 1375 */
obj_t BgL_procz00_4267;
BgL_procz00_4267 = BGl_symbol4412z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start1z00_234))
{ /* Ieee/string.scm 1192 */
bool_t BgL_test5449z00_11994;
{ /* Ieee/string.scm 1192 */
long BgL_n1z00_4272;
{ /* Ieee/string.scm 1192 */
obj_t BgL_tmpz00_11995;
if(
INTEGERP(BgL_start1z00_234))
{ /* Ieee/string.scm 1192 */
BgL_tmpz00_11995 = BgL_start1z00_234
; }  else 
{ 
obj_t BgL_auxz00_11998;
BgL_auxz00_11998 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48393)), BGl_string4456z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start1z00_234); 
FAILURE(BgL_auxz00_11998,BFALSE,BFALSE);} 
BgL_n1z00_4272 = 
(long)CINT(BgL_tmpz00_11995); } 
BgL_test5449z00_11994 = 
(BgL_n1z00_4272<((long)0)); } 
if(BgL_test5449z00_11994)
{ /* Ieee/string.scm 1192 */
BgL_e1z00_2118 = 
BGl_errorz00zz__errorz00(BgL_procz00_4267, 
string_append_3(BGl_string4419z00zz__r4_strings_6_7z00, BGl_string4420z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start1z00_234); }  else 
{ /* Ieee/string.scm 1194 */
bool_t BgL_test5451z00_12006;
{ /* Ieee/string.scm 1194 */
long BgL_n1z00_4274;
{ /* Ieee/string.scm 1194 */
obj_t BgL_tmpz00_12007;
if(
INTEGERP(BgL_start1z00_234))
{ /* Ieee/string.scm 1194 */
BgL_tmpz00_12007 = BgL_start1z00_234
; }  else 
{ 
obj_t BgL_auxz00_12010;
BgL_auxz00_12010 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48488)), BGl_string4456z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start1z00_234); 
FAILURE(BgL_auxz00_12010,BFALSE,BFALSE);} 
BgL_n1z00_4274 = 
(long)CINT(BgL_tmpz00_12007); } 
BgL_test5451z00_12006 = 
(BgL_n1z00_4274>=BgL_l1z00_2114); } 
if(BgL_test5451z00_12006)
{ /* Ieee/string.scm 1194 */
BgL_e1z00_2118 = 
BGl_errorz00zz__errorz00(BgL_procz00_4267, 
string_append_3(BGl_string4421z00zz__r4_strings_6_7z00, BGl_string4420z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start1z00_234); }  else 
{ /* Ieee/string.scm 1194 */
BgL_e1z00_2118 = BgL_start1z00_234; } } }  else 
{ /* Ieee/string.scm 1190 */
BgL_e1z00_2118 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1375 */
obj_t BgL_e2z00_2119;
{ /* Ieee/string.scm 1376 */
obj_t BgL_procz00_4277;
BgL_procz00_4277 = BGl_symbol4412z00zz__r4_strings_6_7z00; 
if(
CBOOL(BgL_start2z00_236))
{ /* Ieee/string.scm 1192 */
bool_t BgL_test5454z00_12021;
{ /* Ieee/string.scm 1192 */
long BgL_n1z00_4282;
{ /* Ieee/string.scm 1192 */
obj_t BgL_tmpz00_12022;
if(
INTEGERP(BgL_start2z00_236))
{ /* Ieee/string.scm 1192 */
BgL_tmpz00_12022 = BgL_start2z00_236
; }  else 
{ 
obj_t BgL_auxz00_12025;
BgL_auxz00_12025 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48393)), BGl_string4456z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start2z00_236); 
FAILURE(BgL_auxz00_12025,BFALSE,BFALSE);} 
BgL_n1z00_4282 = 
(long)CINT(BgL_tmpz00_12022); } 
BgL_test5454z00_12021 = 
(BgL_n1z00_4282<((long)0)); } 
if(BgL_test5454z00_12021)
{ /* Ieee/string.scm 1192 */
BgL_e2z00_2119 = 
BGl_errorz00zz__errorz00(BgL_procz00_4277, 
string_append_3(BGl_string4419z00zz__r4_strings_6_7z00, BGl_string4422z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start2z00_236); }  else 
{ /* Ieee/string.scm 1194 */
bool_t BgL_test5456z00_12033;
{ /* Ieee/string.scm 1194 */
long BgL_n1z00_4284;
{ /* Ieee/string.scm 1194 */
obj_t BgL_tmpz00_12034;
if(
INTEGERP(BgL_start2z00_236))
{ /* Ieee/string.scm 1194 */
BgL_tmpz00_12034 = BgL_start2z00_236
; }  else 
{ 
obj_t BgL_auxz00_12037;
BgL_auxz00_12037 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)48488)), BGl_string4456z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_start2z00_236); 
FAILURE(BgL_auxz00_12037,BFALSE,BFALSE);} 
BgL_n1z00_4284 = 
(long)CINT(BgL_tmpz00_12034); } 
BgL_test5456z00_12033 = 
(BgL_n1z00_4284>=BgL_l2z00_2115); } 
if(BgL_test5456z00_12033)
{ /* Ieee/string.scm 1194 */
BgL_e2z00_2119 = 
BGl_errorz00zz__errorz00(BgL_procz00_4277, 
string_append_3(BGl_string4421z00zz__r4_strings_6_7z00, BGl_string4422z00zz__r4_strings_6_7z00, BGl_string4416z00zz__r4_strings_6_7z00), BgL_start2z00_236); }  else 
{ /* Ieee/string.scm 1194 */
BgL_e2z00_2119 = BgL_start2z00_236; } } }  else 
{ /* Ieee/string.scm 1190 */
BgL_e2z00_2119 = 
BINT(((long)0)); } } 
{ /* Ieee/string.scm 1376 */

{ 
long BgL_i1z00_2123;long BgL_i2z00_2124;
{ /* Ieee/string.scm 1377 */
long BgL_za71za7_4287;
{ /* Ieee/string.scm 1377 */
obj_t BgL_tmpz00_12098;
if(
INTEGERP(BgL_b1z00_2116))
{ /* Ieee/string.scm 1377 */
BgL_tmpz00_12098 = BgL_b1z00_2116
; }  else 
{ 
obj_t BgL_auxz00_12101;
BgL_auxz00_12101 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)55977)), BGl_string4456z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_b1z00_2116); 
FAILURE(BgL_auxz00_12101,BFALSE,BFALSE);} 
BgL_za71za7_4287 = 
(long)CINT(BgL_tmpz00_12098); } 
BgL_i1z00_2123 = 
(BgL_za71za7_4287-((long)1)); } 
{ /* Ieee/string.scm 1378 */
long BgL_za71za7_4289;
{ /* Ieee/string.scm 1378 */
obj_t BgL_tmpz00_12107;
if(
INTEGERP(BgL_b2z00_2117))
{ /* Ieee/string.scm 1378 */
BgL_tmpz00_12107 = BgL_b2z00_2117
; }  else 
{ 
obj_t BgL_auxz00_12110;
BgL_auxz00_12110 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)55996)), BGl_string4456z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_b2z00_2117); 
FAILURE(BgL_auxz00_12110,BFALSE,BFALSE);} 
BgL_za71za7_4289 = 
(long)CINT(BgL_tmpz00_12107); } 
BgL_i2z00_2124 = 
(BgL_za71za7_4289-((long)1)); } 
BgL_zc3z04anonymousza31839ze3z87_2125:
{ /* Ieee/string.scm 1380 */
bool_t BgL_test5458z00_12046;
{ /* Ieee/string.scm 1380 */
long BgL_n2z00_4292;
{ /* Ieee/string.scm 1380 */
obj_t BgL_tmpz00_12047;
if(
INTEGERP(BgL_e1z00_2118))
{ /* Ieee/string.scm 1380 */
BgL_tmpz00_12047 = BgL_e1z00_2118
; }  else 
{ 
obj_t BgL_auxz00_12050;
BgL_auxz00_12050 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56026)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_e1z00_2118); 
FAILURE(BgL_auxz00_12050,BFALSE,BFALSE);} 
BgL_n2z00_4292 = 
(long)CINT(BgL_tmpz00_12047); } 
BgL_test5458z00_12046 = 
(BgL_i1z00_2123<BgL_n2z00_4292); } 
if(BgL_test5458z00_12046)
{ /* Ieee/string.scm 1380 */
return ((bool_t)1);}  else 
{ /* Ieee/string.scm 1382 */
bool_t BgL_test5460z00_12056;
{ /* Ieee/string.scm 1382 */
long BgL_n2z00_4295;
{ /* Ieee/string.scm 1382 */
obj_t BgL_tmpz00_12057;
if(
INTEGERP(BgL_e2z00_2119))
{ /* Ieee/string.scm 1382 */
BgL_tmpz00_12057 = BgL_e2z00_2119
; }  else 
{ 
obj_t BgL_auxz00_12060;
BgL_auxz00_12060 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56054)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_e2z00_2119); 
FAILURE(BgL_auxz00_12060,BFALSE,BFALSE);} 
BgL_n2z00_4295 = 
(long)CINT(BgL_tmpz00_12057); } 
BgL_test5460z00_12056 = 
(BgL_i2z00_2124<BgL_n2z00_4295); } 
if(BgL_test5460z00_12056)
{ /* Ieee/string.scm 1382 */
return ((bool_t)0);}  else 
{ /* Ieee/string.scm 1384 */
bool_t BgL_test5462z00_12066;
{ /* Ieee/string.scm 1384 */
unsigned char BgL_auxz00_12080;unsigned char BgL_tmpz00_12067;
{ /* Ieee/string.scm 1384 */
unsigned char BgL_tmpz00_12081;
{ /* Ieee/string.scm 327 */
long BgL_l3273z00_5248;
BgL_l3273z00_5248 = 
STRING_LENGTH(BgL_s2z00_233); 
if(
BOUND_CHECK(BgL_i2z00_2124, BgL_l3273z00_5248))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_12081 = 
STRING_REF(BgL_s2z00_233, BgL_i2z00_2124)
; }  else 
{ 
obj_t BgL_auxz00_12086;
BgL_auxz00_12086 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_s2z00_233, 
(int)(BgL_l3273z00_5248), 
(int)(BgL_i2z00_2124)); 
FAILURE(BgL_auxz00_12086,BFALSE,BFALSE);} } 
BgL_auxz00_12080 = 
toupper(BgL_tmpz00_12081); } 
{ /* Ieee/string.scm 1384 */
unsigned char BgL_tmpz00_12068;
{ /* Ieee/string.scm 327 */
long BgL_l3269z00_5244;
BgL_l3269z00_5244 = 
STRING_LENGTH(BgL_s1z00_232); 
if(
BOUND_CHECK(BgL_i1z00_2123, BgL_l3269z00_5244))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_12068 = 
STRING_REF(BgL_s1z00_232, BgL_i1z00_2123)
; }  else 
{ 
obj_t BgL_auxz00_12073;
BgL_auxz00_12073 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_s1z00_232, 
(int)(BgL_l3269z00_5244), 
(int)(BgL_i1z00_2123)); 
FAILURE(BgL_auxz00_12073,BFALSE,BFALSE);} } 
BgL_tmpz00_12067 = 
toupper(BgL_tmpz00_12068); } 
BgL_test5462z00_12066 = 
(BgL_tmpz00_12067==BgL_auxz00_12080); } 
if(BgL_test5462z00_12066)
{ 
long BgL_i2z00_12096;long BgL_i1z00_12094;
BgL_i1z00_12094 = 
(BgL_i1z00_2123-((long)1)); 
BgL_i2z00_12096 = 
(BgL_i2z00_2124-((long)1)); 
BgL_i2z00_2124 = BgL_i2z00_12096; 
BgL_i1z00_2123 = BgL_i1z00_12094; 
goto BgL_zc3z04anonymousza31839ze3z87_2125;}  else 
{ /* Ieee/string.scm 1384 */
return ((bool_t)0);} } } } } } } } } } } } } 

}



/* _string-natural-compare3 */
obj_t BGl__stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00(obj_t BgL_env1194z00_245, obj_t BgL_opt1193z00_244)
{
{ /* Ieee/string.scm 1392 */
{ /* Ieee/string.scm 1392 */
obj_t BgL_g1195z00_2136;obj_t BgL_g1196z00_2137;
BgL_g1195z00_2136 = 
VECTOR_REF(BgL_opt1193z00_244,((long)0)); 
BgL_g1196z00_2137 = 
VECTOR_REF(BgL_opt1193z00_244,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1193z00_244)) { case ((long)2) : 

{ /* Ieee/string.scm 1392 */

{ /* Ieee/string.scm 1392 */
int BgL_res2760z00_4321;
{ /* Ieee/string.scm 1392 */
obj_t BgL_az00_4319;obj_t BgL_bz00_4320;
if(
STRINGP(BgL_g1195z00_2136))
{ /* Ieee/string.scm 1392 */
BgL_az00_4319 = BgL_g1195z00_2136; }  else 
{ 
obj_t BgL_auxz00_12120;
BgL_auxz00_12120 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56408)), BGl_string4459z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1195z00_2136); 
FAILURE(BgL_auxz00_12120,BFALSE,BFALSE);} 
if(
STRINGP(BgL_g1196z00_2137))
{ /* Ieee/string.scm 1392 */
BgL_bz00_4320 = BgL_g1196z00_2137; }  else 
{ 
obj_t BgL_auxz00_12126;
BgL_auxz00_12126 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56408)), BGl_string4459z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1196z00_2137); 
FAILURE(BgL_auxz00_12126,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 1393 */
obj_t BgL_tmpz00_12130;
{ /* Ieee/string.scm 1393 */
obj_t BgL_aux4177z00_6155;
BgL_aux4177z00_6155 = 
BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_4319, BgL_bz00_4320, ((bool_t)0), 
BINT(((long)0)), 
BINT(((long)0))); 
if(
INTEGERP(BgL_aux4177z00_6155))
{ /* Ieee/string.scm 1393 */
BgL_tmpz00_12130 = BgL_aux4177z00_6155
; }  else 
{ 
obj_t BgL_auxz00_12136;
BgL_auxz00_12136 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56482)), BGl_string4459z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_aux4177z00_6155); 
FAILURE(BgL_auxz00_12136,BFALSE,BFALSE);} } 
BgL_res2760z00_4321 = 
CINT(BgL_tmpz00_12130); } } 
return 
BINT(BgL_res2760z00_4321);} } break;case ((long)3) : 

{ /* Ieee/string.scm 1392 */
obj_t BgL_start1z00_2143;
BgL_start1z00_2143 = 
VECTOR_REF(BgL_opt1193z00_244,((long)2)); 
{ /* Ieee/string.scm 1392 */

{ /* Ieee/string.scm 1392 */
int BgL_res2761z00_4324;
{ /* Ieee/string.scm 1392 */
obj_t BgL_az00_4322;obj_t BgL_bz00_4323;
if(
STRINGP(BgL_g1195z00_2136))
{ /* Ieee/string.scm 1392 */
BgL_az00_4322 = BgL_g1195z00_2136; }  else 
{ 
obj_t BgL_auxz00_12145;
BgL_auxz00_12145 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56408)), BGl_string4459z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1195z00_2136); 
FAILURE(BgL_auxz00_12145,BFALSE,BFALSE);} 
if(
STRINGP(BgL_g1196z00_2137))
{ /* Ieee/string.scm 1392 */
BgL_bz00_4323 = BgL_g1196z00_2137; }  else 
{ 
obj_t BgL_auxz00_12151;
BgL_auxz00_12151 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56408)), BGl_string4459z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1196z00_2137); 
FAILURE(BgL_auxz00_12151,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 1393 */
obj_t BgL_tmpz00_12155;
{ /* Ieee/string.scm 1393 */
obj_t BgL_aux4183z00_6161;
BgL_aux4183z00_6161 = 
BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_4322, BgL_bz00_4323, ((bool_t)0), BgL_start1z00_2143, 
BINT(((long)0))); 
if(
INTEGERP(BgL_aux4183z00_6161))
{ /* Ieee/string.scm 1393 */
BgL_tmpz00_12155 = BgL_aux4183z00_6161
; }  else 
{ 
obj_t BgL_auxz00_12160;
BgL_auxz00_12160 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56482)), BGl_string4459z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_aux4183z00_6161); 
FAILURE(BgL_auxz00_12160,BFALSE,BFALSE);} } 
BgL_res2761z00_4324 = 
CINT(BgL_tmpz00_12155); } } 
return 
BINT(BgL_res2761z00_4324);} } } break;case ((long)4) : 

{ /* Ieee/string.scm 1392 */
obj_t BgL_start1z00_2145;
BgL_start1z00_2145 = 
VECTOR_REF(BgL_opt1193z00_244,((long)2)); 
{ /* Ieee/string.scm 1392 */
obj_t BgL_start2z00_2146;
BgL_start2z00_2146 = 
VECTOR_REF(BgL_opt1193z00_244,((long)3)); 
{ /* Ieee/string.scm 1392 */

{ /* Ieee/string.scm 1392 */
int BgL_res2762z00_4327;
{ /* Ieee/string.scm 1392 */
obj_t BgL_az00_4325;obj_t BgL_bz00_4326;
if(
STRINGP(BgL_g1195z00_2136))
{ /* Ieee/string.scm 1392 */
BgL_az00_4325 = BgL_g1195z00_2136; }  else 
{ 
obj_t BgL_auxz00_12170;
BgL_auxz00_12170 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56408)), BGl_string4459z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1195z00_2136); 
FAILURE(BgL_auxz00_12170,BFALSE,BFALSE);} 
if(
STRINGP(BgL_g1196z00_2137))
{ /* Ieee/string.scm 1392 */
BgL_bz00_4326 = BgL_g1196z00_2137; }  else 
{ 
obj_t BgL_auxz00_12176;
BgL_auxz00_12176 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56408)), BGl_string4459z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1196z00_2137); 
FAILURE(BgL_auxz00_12176,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 1393 */
obj_t BgL_tmpz00_12180;
{ /* Ieee/string.scm 1393 */
obj_t BgL_aux4189z00_6167;
BgL_aux4189z00_6167 = 
BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_4325, BgL_bz00_4326, ((bool_t)0), BgL_start1z00_2145, BgL_start2z00_2146); 
if(
INTEGERP(BgL_aux4189z00_6167))
{ /* Ieee/string.scm 1393 */
BgL_tmpz00_12180 = BgL_aux4189z00_6167
; }  else 
{ 
obj_t BgL_auxz00_12184;
BgL_auxz00_12184 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56482)), BGl_string4459z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_aux4189z00_6167); 
FAILURE(BgL_auxz00_12184,BFALSE,BFALSE);} } 
BgL_res2762z00_4327 = 
CINT(BgL_tmpz00_12180); } } 
return 
BINT(BgL_res2762z00_4327);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4457z00zz__r4_strings_6_7z00, BGl_string4363z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1193z00_244)));} } } } 

}



/* string-natural-compare3 */
BGL_EXPORTED_DEF int BGl_stringzd2naturalzd2compare3z00zz__r4_strings_6_7z00(obj_t BgL_az00_240, obj_t BgL_bz00_241, obj_t BgL_start1z00_242, obj_t BgL_start2z00_243)
{
{ /* Ieee/string.scm 1392 */
{ /* Ieee/string.scm 1393 */
obj_t BgL_tmpz00_12195;
{ /* Ieee/string.scm 1393 */
obj_t BgL_aux4191z00_6169;
BgL_aux4191z00_6169 = 
BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_240, BgL_bz00_241, ((bool_t)0), BgL_start1z00_242, BgL_start2z00_243); 
if(
INTEGERP(BgL_aux4191z00_6169))
{ /* Ieee/string.scm 1393 */
BgL_tmpz00_12195 = BgL_aux4191z00_6169
; }  else 
{ 
obj_t BgL_auxz00_12199;
BgL_auxz00_12199 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56482)), BGl_string4458z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_aux4191z00_6169); 
FAILURE(BgL_auxz00_12199,BFALSE,BFALSE);} } 
return 
CINT(BgL_tmpz00_12195);} } 

}



/* _string-natural-compare3-ci */
obj_t BGl__stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00(obj_t BgL_env1200z00_251, obj_t BgL_opt1199z00_250)
{
{ /* Ieee/string.scm 1398 */
{ /* Ieee/string.scm 1398 */
obj_t BgL_g1201z00_2148;obj_t BgL_g1202z00_2149;
BgL_g1201z00_2148 = 
VECTOR_REF(BgL_opt1199z00_250,((long)0)); 
BgL_g1202z00_2149 = 
VECTOR_REF(BgL_opt1199z00_250,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1199z00_250)) { case ((long)2) : 

{ /* Ieee/string.scm 1398 */

{ /* Ieee/string.scm 1398 */
int BgL_res2763z00_4330;
{ /* Ieee/string.scm 1398 */
obj_t BgL_az00_4328;obj_t BgL_bz00_4329;
if(
STRINGP(BgL_g1201z00_2148))
{ /* Ieee/string.scm 1398 */
BgL_az00_4328 = BgL_g1201z00_2148; }  else 
{ 
obj_t BgL_auxz00_12208;
BgL_auxz00_12208 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56739)), BGl_string4462z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1201z00_2148); 
FAILURE(BgL_auxz00_12208,BFALSE,BFALSE);} 
if(
STRINGP(BgL_g1202z00_2149))
{ /* Ieee/string.scm 1398 */
BgL_bz00_4329 = BgL_g1202z00_2149; }  else 
{ 
obj_t BgL_auxz00_12214;
BgL_auxz00_12214 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56739)), BGl_string4462z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1202z00_2149); 
FAILURE(BgL_auxz00_12214,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 1399 */
obj_t BgL_tmpz00_12218;
{ /* Ieee/string.scm 1399 */
obj_t BgL_aux4197z00_6175;
BgL_aux4197z00_6175 = 
BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_4328, BgL_bz00_4329, ((bool_t)1), 
BINT(((long)0)), 
BINT(((long)0))); 
if(
INTEGERP(BgL_aux4197z00_6175))
{ /* Ieee/string.scm 1399 */
BgL_tmpz00_12218 = BgL_aux4197z00_6175
; }  else 
{ 
obj_t BgL_auxz00_12224;
BgL_auxz00_12224 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56816)), BGl_string4462z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_aux4197z00_6175); 
FAILURE(BgL_auxz00_12224,BFALSE,BFALSE);} } 
BgL_res2763z00_4330 = 
CINT(BgL_tmpz00_12218); } } 
return 
BINT(BgL_res2763z00_4330);} } break;case ((long)3) : 

{ /* Ieee/string.scm 1398 */
obj_t BgL_start1z00_2155;
BgL_start1z00_2155 = 
VECTOR_REF(BgL_opt1199z00_250,((long)2)); 
{ /* Ieee/string.scm 1398 */

{ /* Ieee/string.scm 1398 */
int BgL_res2764z00_4333;
{ /* Ieee/string.scm 1398 */
obj_t BgL_az00_4331;obj_t BgL_bz00_4332;
if(
STRINGP(BgL_g1201z00_2148))
{ /* Ieee/string.scm 1398 */
BgL_az00_4331 = BgL_g1201z00_2148; }  else 
{ 
obj_t BgL_auxz00_12233;
BgL_auxz00_12233 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56739)), BGl_string4462z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1201z00_2148); 
FAILURE(BgL_auxz00_12233,BFALSE,BFALSE);} 
if(
STRINGP(BgL_g1202z00_2149))
{ /* Ieee/string.scm 1398 */
BgL_bz00_4332 = BgL_g1202z00_2149; }  else 
{ 
obj_t BgL_auxz00_12239;
BgL_auxz00_12239 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56739)), BGl_string4462z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1202z00_2149); 
FAILURE(BgL_auxz00_12239,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 1399 */
obj_t BgL_tmpz00_12243;
{ /* Ieee/string.scm 1399 */
obj_t BgL_aux4203z00_6181;
BgL_aux4203z00_6181 = 
BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_4331, BgL_bz00_4332, ((bool_t)1), BgL_start1z00_2155, 
BINT(((long)0))); 
if(
INTEGERP(BgL_aux4203z00_6181))
{ /* Ieee/string.scm 1399 */
BgL_tmpz00_12243 = BgL_aux4203z00_6181
; }  else 
{ 
obj_t BgL_auxz00_12248;
BgL_auxz00_12248 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56816)), BGl_string4462z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_aux4203z00_6181); 
FAILURE(BgL_auxz00_12248,BFALSE,BFALSE);} } 
BgL_res2764z00_4333 = 
CINT(BgL_tmpz00_12243); } } 
return 
BINT(BgL_res2764z00_4333);} } } break;case ((long)4) : 

{ /* Ieee/string.scm 1398 */
obj_t BgL_start1z00_2157;
BgL_start1z00_2157 = 
VECTOR_REF(BgL_opt1199z00_250,((long)2)); 
{ /* Ieee/string.scm 1398 */
obj_t BgL_start2z00_2158;
BgL_start2z00_2158 = 
VECTOR_REF(BgL_opt1199z00_250,((long)3)); 
{ /* Ieee/string.scm 1398 */

{ /* Ieee/string.scm 1398 */
int BgL_res2765z00_4336;
{ /* Ieee/string.scm 1398 */
obj_t BgL_az00_4334;obj_t BgL_bz00_4335;
if(
STRINGP(BgL_g1201z00_2148))
{ /* Ieee/string.scm 1398 */
BgL_az00_4334 = BgL_g1201z00_2148; }  else 
{ 
obj_t BgL_auxz00_12258;
BgL_auxz00_12258 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56739)), BGl_string4462z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1201z00_2148); 
FAILURE(BgL_auxz00_12258,BFALSE,BFALSE);} 
if(
STRINGP(BgL_g1202z00_2149))
{ /* Ieee/string.scm 1398 */
BgL_bz00_4335 = BgL_g1202z00_2149; }  else 
{ 
obj_t BgL_auxz00_12264;
BgL_auxz00_12264 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56739)), BGl_string4462z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_g1202z00_2149); 
FAILURE(BgL_auxz00_12264,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 1399 */
obj_t BgL_tmpz00_12268;
{ /* Ieee/string.scm 1399 */
obj_t BgL_aux4209z00_6187;
BgL_aux4209z00_6187 = 
BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_4334, BgL_bz00_4335, ((bool_t)1), BgL_start1z00_2157, BgL_start2z00_2158); 
if(
INTEGERP(BgL_aux4209z00_6187))
{ /* Ieee/string.scm 1399 */
BgL_tmpz00_12268 = BgL_aux4209z00_6187
; }  else 
{ 
obj_t BgL_auxz00_12272;
BgL_auxz00_12272 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56816)), BGl_string4462z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_aux4209z00_6187); 
FAILURE(BgL_auxz00_12272,BFALSE,BFALSE);} } 
BgL_res2765z00_4336 = 
CINT(BgL_tmpz00_12268); } } 
return 
BINT(BgL_res2765z00_4336);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4460z00zz__r4_strings_6_7z00, BGl_string4363z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1199z00_250)));} } } } 

}



/* string-natural-compare3-ci */
BGL_EXPORTED_DEF int BGl_stringzd2naturalzd2compare3zd2cizd2zz__r4_strings_6_7z00(obj_t BgL_az00_246, obj_t BgL_bz00_247, obj_t BgL_start1z00_248, obj_t BgL_start2z00_249)
{
{ /* Ieee/string.scm 1398 */
{ /* Ieee/string.scm 1399 */
obj_t BgL_tmpz00_12283;
{ /* Ieee/string.scm 1399 */
obj_t BgL_aux4211z00_6189;
BgL_aux4211z00_6189 = 
BGl_strnatcmpz00zz__r4_strings_6_7z00(BgL_az00_246, BgL_bz00_247, ((bool_t)1), BgL_start1z00_248, BgL_start2z00_249); 
if(
INTEGERP(BgL_aux4211z00_6189))
{ /* Ieee/string.scm 1399 */
BgL_tmpz00_12283 = BgL_aux4211z00_6189
; }  else 
{ 
obj_t BgL_auxz00_12287;
BgL_auxz00_12287 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)56816)), BGl_string4461z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_aux4211z00_6189); 
FAILURE(BgL_auxz00_12287,BFALSE,BFALSE);} } 
return 
CINT(BgL_tmpz00_12283);} } 

}



/* strnatcmp */
obj_t BGl_strnatcmpz00zz__r4_strings_6_7z00(obj_t BgL_az00_252, obj_t BgL_bz00_253, bool_t BgL_foldcasez00_254, obj_t BgL_start1z00_255, obj_t BgL_start2z00_256)
{
{ /* Ieee/string.scm 1404 */
{ 
obj_t BgL_iaz00_2161;obj_t BgL_ibz00_2162;
BgL_iaz00_2161 = BgL_start1z00_255; 
BgL_ibz00_2162 = BgL_start2z00_256; 
BgL_zc3z04anonymousza31856ze3z87_2163:
{ /* Ieee/string.scm 1407 */
unsigned char BgL_caz00_2164;unsigned char BgL_cbz00_2165;
{ /* Ieee/string.scm 1407 */
obj_t BgL_iz00_4337;
BgL_iz00_4337 = BgL_iaz00_2161; 
{ /* Ieee/string.scm 1494 */
bool_t BgL_test5487z00_12292;
{ /* Ieee/string.scm 1494 */
long BgL_n1z00_4342;
{ /* Ieee/string.scm 1494 */
obj_t BgL_tmpz00_12293;
if(
INTEGERP(BgL_iz00_4337))
{ /* Ieee/string.scm 1494 */
BgL_tmpz00_12293 = BgL_iz00_4337
; }  else 
{ 
obj_t BgL_auxz00_12296;
BgL_auxz00_12296 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)59886)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_4337); 
FAILURE(BgL_auxz00_12296,BFALSE,BFALSE);} 
BgL_n1z00_4342 = 
(long)CINT(BgL_tmpz00_12293); } 
BgL_test5487z00_12292 = 
(BgL_n1z00_4342>=
STRING_LENGTH(BgL_az00_252)); } 
if(BgL_test5487z00_12292)
{ /* Ieee/string.scm 1494 */
BgL_caz00_2164 = ((unsigned char)'\000'); }  else 
{ /* Ieee/string.scm 1496 */
long BgL_kz00_4346;
{ /* Ieee/string.scm 1496 */
obj_t BgL_tmpz00_12303;
if(
INTEGERP(BgL_iz00_4337))
{ /* Ieee/string.scm 1496 */
BgL_tmpz00_12303 = BgL_iz00_4337
; }  else 
{ 
obj_t BgL_auxz00_12306;
BgL_auxz00_12306 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)59944)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_4337); 
FAILURE(BgL_auxz00_12306,BFALSE,BFALSE);} 
BgL_kz00_4346 = 
(long)CINT(BgL_tmpz00_12303); } 
{ /* Ieee/string.scm 339 */
long BgL_l3277z00_5252;
BgL_l3277z00_5252 = 
STRING_LENGTH(BgL_az00_252); 
if(
BOUND_CHECK(BgL_kz00_4346, BgL_l3277z00_5252))
{ /* Ieee/string.scm 339 */
BgL_caz00_2164 = 
STRING_REF(BgL_az00_252, BgL_kz00_4346); }  else 
{ 
obj_t BgL_auxz00_12315;
BgL_auxz00_12315 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_az00_252, 
(int)(BgL_l3277z00_5252), 
(int)(BgL_kz00_4346)); 
FAILURE(BgL_auxz00_12315,BFALSE,BFALSE);} } } } } 
{ /* Ieee/string.scm 1408 */
obj_t BgL_iz00_4348;
BgL_iz00_4348 = BgL_ibz00_2162; 
{ /* Ieee/string.scm 1494 */
bool_t BgL_test5491z00_12321;
{ /* Ieee/string.scm 1494 */
long BgL_n1z00_4353;
{ /* Ieee/string.scm 1494 */
obj_t BgL_tmpz00_12322;
if(
INTEGERP(BgL_iz00_4348))
{ /* Ieee/string.scm 1494 */
BgL_tmpz00_12322 = BgL_iz00_4348
; }  else 
{ 
obj_t BgL_auxz00_12325;
BgL_auxz00_12325 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)59886)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_4348); 
FAILURE(BgL_auxz00_12325,BFALSE,BFALSE);} 
BgL_n1z00_4353 = 
(long)CINT(BgL_tmpz00_12322); } 
BgL_test5491z00_12321 = 
(BgL_n1z00_4353>=
STRING_LENGTH(BgL_bz00_253)); } 
if(BgL_test5491z00_12321)
{ /* Ieee/string.scm 1494 */
BgL_cbz00_2165 = ((unsigned char)'\000'); }  else 
{ /* Ieee/string.scm 1496 */
long BgL_kz00_4357;
{ /* Ieee/string.scm 1496 */
obj_t BgL_tmpz00_12332;
if(
INTEGERP(BgL_iz00_4348))
{ /* Ieee/string.scm 1496 */
BgL_tmpz00_12332 = BgL_iz00_4348
; }  else 
{ 
obj_t BgL_auxz00_12335;
BgL_auxz00_12335 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)59944)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iz00_4348); 
FAILURE(BgL_auxz00_12335,BFALSE,BFALSE);} 
BgL_kz00_4357 = 
(long)CINT(BgL_tmpz00_12332); } 
{ /* Ieee/string.scm 339 */
long BgL_l3281z00_5256;
BgL_l3281z00_5256 = 
STRING_LENGTH(BgL_bz00_253); 
if(
BOUND_CHECK(BgL_kz00_4357, BgL_l3281z00_5256))
{ /* Ieee/string.scm 339 */
BgL_cbz00_2165 = 
STRING_REF(BgL_bz00_253, BgL_kz00_4357); }  else 
{ 
obj_t BgL_auxz00_12344;
BgL_auxz00_12344 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_bz00_253, 
(int)(BgL_l3281z00_5256), 
(int)(BgL_kz00_4357)); 
FAILURE(BgL_auxz00_12344,BFALSE,BFALSE);} } } } } 
{ 

{ /* Ieee/string.scm 1410 */
bool_t BgL_test5495z00_12350;
{ /* Ieee/string.scm 1410 */
bool_t BgL_res2772z00_4360;
BgL_res2772z00_4360 = 
isspace(BgL_caz00_2164); 
BgL_test5495z00_12350 = BgL_res2772z00_4360; } 
if(BgL_test5495z00_12350)
{ /* Ieee/string.scm 1410 */
{ 
obj_t BgL_tmpz00_12352;
{ /* Ieee/string.scm 1411 */
obj_t BgL_aux4221z00_6199;
BgL_aux4221z00_6199 = BgL_iaz00_2161; 
if(
INTEGERP(BgL_aux4221z00_6199))
{ /* Ieee/string.scm 1411 */
BgL_tmpz00_12352 = BgL_aux4221z00_6199
; }  else 
{ 
obj_t BgL_auxz00_12355;
BgL_auxz00_12355 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)57295)), BGl_string4463z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_aux4221z00_6199); 
FAILURE(BgL_auxz00_12355,BFALSE,BFALSE);} } 
BgL_iaz00_2161 = 
ADDFX(BgL_tmpz00_12352, 
BINT(((long)1))); } 
{ /* Ieee/string.scm 1412 */
long BgL_iz00_4363;
BgL_iz00_4363 = 
(long)CINT(BgL_iaz00_2161); 
if(
(BgL_iz00_4363>=
STRING_LENGTH(BgL_az00_252)))
{ /* Ieee/string.scm 1494 */
BgL_caz00_2164 = ((unsigned char)'\000'); }  else 
{ /* Ieee/string.scm 339 */
long BgL_l3285z00_5260;
BgL_l3285z00_5260 = 
STRING_LENGTH(BgL_az00_252); 
if(
BOUND_CHECK(BgL_iz00_4363, BgL_l3285z00_5260))
{ /* Ieee/string.scm 339 */
BgL_caz00_2164 = 
STRING_REF(BgL_az00_252, BgL_iz00_4363); }  else 
{ 
obj_t BgL_auxz00_12369;
BgL_auxz00_12369 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_az00_252, 
(int)(BgL_l3285z00_5260), 
(int)(BgL_iz00_4363)); 
FAILURE(BgL_auxz00_12369,BFALSE,BFALSE);} } } }  else 
{ /* Ieee/string.scm 1410 */BFALSE; } } } 
{ 

{ /* Ieee/string.scm 1414 */
bool_t BgL_test5499z00_12375;
{ /* Ieee/string.scm 1414 */
bool_t BgL_res2777z00_4375;
BgL_res2777z00_4375 = 
isspace(BgL_cbz00_2165); 
BgL_test5499z00_12375 = BgL_res2777z00_4375; } 
if(BgL_test5499z00_12375)
{ /* Ieee/string.scm 1414 */
{ 
obj_t BgL_tmpz00_12377;
{ /* Ieee/string.scm 1415 */
obj_t BgL_aux4223z00_6201;
BgL_aux4223z00_6201 = BgL_ibz00_2162; 
if(
INTEGERP(BgL_aux4223z00_6201))
{ /* Ieee/string.scm 1415 */
BgL_tmpz00_12377 = BgL_aux4223z00_6201
; }  else 
{ 
obj_t BgL_auxz00_12380;
BgL_auxz00_12380 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)57408)), BGl_string4463z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_aux4223z00_6201); 
FAILURE(BgL_auxz00_12380,BFALSE,BFALSE);} } 
BgL_ibz00_2162 = 
ADDFX(BgL_tmpz00_12377, 
BINT(((long)1))); } 
{ /* Ieee/string.scm 1416 */
long BgL_iz00_4378;
BgL_iz00_4378 = 
(long)CINT(BgL_ibz00_2162); 
if(
(BgL_iz00_4378>=
STRING_LENGTH(BgL_bz00_253)))
{ /* Ieee/string.scm 1494 */
BgL_cbz00_2165 = ((unsigned char)'\000'); }  else 
{ /* Ieee/string.scm 339 */
long BgL_l3289z00_5264;
BgL_l3289z00_5264 = 
STRING_LENGTH(BgL_bz00_253); 
if(
BOUND_CHECK(BgL_iz00_4378, BgL_l3289z00_5264))
{ /* Ieee/string.scm 339 */
BgL_cbz00_2165 = 
STRING_REF(BgL_bz00_253, BgL_iz00_4378); }  else 
{ 
obj_t BgL_auxz00_12394;
BgL_auxz00_12394 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_bz00_253, 
(int)(BgL_l3289z00_5264), 
(int)(BgL_iz00_4378)); 
FAILURE(BgL_auxz00_12394,BFALSE,BFALSE);} } } }  else 
{ /* Ieee/string.scm 1414 */BFALSE; } } } 
{ /* Ieee/string.scm 1418 */
bool_t BgL_test5503z00_12400;
{ /* Ieee/string.scm 1418 */
bool_t BgL_test5504z00_12401;
{ /* Ieee/string.scm 1418 */
bool_t BgL_res2782z00_4390;
BgL_res2782z00_4390 = 
isdigit(BgL_caz00_2164); 
BgL_test5504z00_12401 = BgL_res2782z00_4390; } 
if(BgL_test5504z00_12401)
{ /* Ieee/string.scm 1418 */
bool_t BgL_res2783z00_4392;
BgL_res2783z00_4392 = 
isdigit(BgL_cbz00_2165); 
BgL_test5503z00_12400 = BgL_res2783z00_4392; }  else 
{ /* Ieee/string.scm 1418 */
BgL_test5503z00_12400 = ((bool_t)0)
; } } 
if(BgL_test5503z00_12400)
{ /* Ieee/string.scm 1419 */
bool_t BgL_test5505z00_12404;
if(
(BgL_caz00_2164==((unsigned char)'0')))
{ /* Ieee/string.scm 1419 */
BgL_test5505z00_12404 = 
(BgL_cbz00_2165==((unsigned char)'0'))
; }  else 
{ /* Ieee/string.scm 1419 */
BgL_test5505z00_12404 = ((bool_t)0)
; } 
if(BgL_test5505z00_12404)
{ /* Ieee/string.scm 1420 */
long BgL_arg1865z00_2178;long BgL_arg1866z00_2179;
{ /* Ieee/string.scm 1420 */
long BgL_za71za7_4399;
{ /* Ieee/string.scm 1420 */
obj_t BgL_tmpz00_12408;
{ /* Ieee/string.scm 1420 */
obj_t BgL_aux4225z00_6203;
BgL_aux4225z00_6203 = BgL_iaz00_2161; 
if(
INTEGERP(BgL_aux4225z00_6203))
{ /* Ieee/string.scm 1420 */
BgL_tmpz00_12408 = BgL_aux4225z00_6203
; }  else 
{ 
obj_t BgL_auxz00_12411;
BgL_auxz00_12411 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)57570)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_aux4225z00_6203); 
FAILURE(BgL_auxz00_12411,BFALSE,BFALSE);} } 
BgL_za71za7_4399 = 
(long)CINT(BgL_tmpz00_12408); } 
BgL_arg1865z00_2178 = 
(BgL_za71za7_4399+((long)1)); } 
{ /* Ieee/string.scm 1420 */
long BgL_za71za7_4401;
{ /* Ieee/string.scm 1420 */
obj_t BgL_tmpz00_12417;
{ /* Ieee/string.scm 1420 */
obj_t BgL_aux4227z00_6205;
BgL_aux4227z00_6205 = BgL_ibz00_2162; 
if(
INTEGERP(BgL_aux4227z00_6205))
{ /* Ieee/string.scm 1420 */
BgL_tmpz00_12417 = BgL_aux4227z00_6205
; }  else 
{ 
obj_t BgL_auxz00_12420;
BgL_auxz00_12420 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)57581)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_aux4227z00_6205); 
FAILURE(BgL_auxz00_12420,BFALSE,BFALSE);} } 
BgL_za71za7_4401 = 
(long)CINT(BgL_tmpz00_12417); } 
BgL_arg1866z00_2179 = 
(BgL_za71za7_4401+((long)1)); } 
{ 
obj_t BgL_ibz00_12428;obj_t BgL_iaz00_12426;
BgL_iaz00_12426 = 
BINT(BgL_arg1865z00_2178); 
BgL_ibz00_12428 = 
BINT(BgL_arg1866z00_2179); 
BgL_ibz00_2162 = BgL_ibz00_12428; 
BgL_iaz00_2161 = BgL_iaz00_12426; 
goto BgL_zc3z04anonymousza31856ze3z87_2163;} }  else 
{ /* Ieee/string.scm 1421 */
obj_t BgL_resultz00_2180;
{ /* Ieee/string.scm 1421 */
bool_t BgL_test5509z00_12430;
if(
(BgL_caz00_2164==((unsigned char)'0')))
{ /* Ieee/string.scm 1421 */
BgL_test5509z00_12430 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 1421 */
BgL_test5509z00_12430 = 
(BgL_cbz00_2165==((unsigned char)'0'))
; } 
if(BgL_test5509z00_12430)
{ /* Ieee/string.scm 1421 */
BgL_resultz00_2180 = 
BGl_comparezd2leftzd2zz__r4_strings_6_7z00(BgL_az00_252, BgL_iaz00_2161, BgL_bz00_253, BgL_ibz00_2162); }  else 
{ /* Ieee/string.scm 1421 */
BgL_resultz00_2180 = 
BGl_comparezd2rightzd2zz__r4_strings_6_7z00(BgL_az00_252, BgL_iaz00_2161, BgL_bz00_253, BgL_ibz00_2162); } } 
if(
INTEGERP(BgL_resultz00_2180))
{ /* Ieee/string.scm 1426 */
long BgL_arg1868z00_2182;long BgL_arg1870z00_2183;
{ /* Ieee/string.scm 1426 */
long BgL_za71za7_4410;long BgL_za72za7_4411;
{ /* Ieee/string.scm 1426 */
obj_t BgL_tmpz00_12438;
{ /* Ieee/string.scm 1426 */
obj_t BgL_aux4229z00_6207;
BgL_aux4229z00_6207 = BgL_iaz00_2161; 
if(
INTEGERP(BgL_aux4229z00_6207))
{ /* Ieee/string.scm 1426 */
BgL_tmpz00_12438 = BgL_aux4229z00_6207
; }  else 
{ 
obj_t BgL_auxz00_12441;
BgL_auxz00_12441 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)57767)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_aux4229z00_6207); 
FAILURE(BgL_auxz00_12441,BFALSE,BFALSE);} } 
BgL_za71za7_4410 = 
(long)CINT(BgL_tmpz00_12438); } 
BgL_za72za7_4411 = 
(long)CINT(BgL_resultz00_2180); 
BgL_arg1868z00_2182 = 
(BgL_za71za7_4410+BgL_za72za7_4411); } 
{ /* Ieee/string.scm 1426 */
long BgL_za71za7_4413;long BgL_za72za7_4414;
{ /* Ieee/string.scm 1426 */
obj_t BgL_tmpz00_12448;
{ /* Ieee/string.scm 1426 */
obj_t BgL_aux4231z00_6209;
BgL_aux4231z00_6209 = BgL_ibz00_2162; 
if(
INTEGERP(BgL_aux4231z00_6209))
{ /* Ieee/string.scm 1426 */
BgL_tmpz00_12448 = BgL_aux4231z00_6209
; }  else 
{ 
obj_t BgL_auxz00_12451;
BgL_auxz00_12451 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)57783)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_aux4231z00_6209); 
FAILURE(BgL_auxz00_12451,BFALSE,BFALSE);} } 
BgL_za71za7_4413 = 
(long)CINT(BgL_tmpz00_12448); } 
BgL_za72za7_4414 = 
(long)CINT(BgL_resultz00_2180); 
BgL_arg1870z00_2183 = 
(BgL_za71za7_4413+BgL_za72za7_4414); } 
{ 
obj_t BgL_ibz00_12460;obj_t BgL_iaz00_12458;
BgL_iaz00_12458 = 
BINT(BgL_arg1868z00_2182); 
BgL_ibz00_12460 = 
BINT(BgL_arg1870z00_2183); 
BgL_ibz00_2162 = BgL_ibz00_12460; 
BgL_iaz00_2161 = BgL_iaz00_12458; 
goto BgL_zc3z04anonymousza31856ze3z87_2163;} }  else 
{ /* Ieee/string.scm 1425 */
if(
CBOOL(BgL_resultz00_2180))
{ /* Ieee/string.scm 1427 */
return 
BINT(((long)1));}  else 
{ /* Ieee/string.scm 1427 */
return 
BINT(((long)-1));} } } }  else 
{ /* Ieee/string.scm 1431 */
bool_t BgL_test5515z00_12466;
if(
(BgL_caz00_2164==((unsigned char)'\000')))
{ /* Ieee/string.scm 1431 */
BgL_test5515z00_12466 = 
(BgL_cbz00_2165==((unsigned char)'\000'))
; }  else 
{ /* Ieee/string.scm 1431 */
BgL_test5515z00_12466 = ((bool_t)0)
; } 
if(BgL_test5515z00_12466)
{ /* Ieee/string.scm 1431 */
return 
BINT(((long)0));}  else 
{ /* Ieee/string.scm 1433 */
bool_t BgL_test5517z00_12471;
if(BgL_foldcasez00_254)
{ /* Ieee/string.scm 1433 */
BgL_caz00_2164 = 
toupper(BgL_caz00_2164); 
BgL_cbz00_2165 = 
toupper(BgL_cbz00_2165); 
BgL_test5517z00_12471 = ((bool_t)0); }  else 
{ /* Ieee/string.scm 1433 */
BgL_test5517z00_12471 = ((bool_t)0)
; } 
if(BgL_test5517z00_12471)
{ /* Ieee/string.scm 1433 */
return BGl_symbol4464z00zz__r4_strings_6_7z00;}  else 
{ /* Ieee/string.scm 1433 */
if(
(BgL_caz00_2164<BgL_cbz00_2165))
{ /* Ieee/string.scm 1438 */
return 
BINT(((long)-1));}  else 
{ /* Ieee/string.scm 1438 */
if(
(BgL_caz00_2164>BgL_cbz00_2165))
{ /* Ieee/string.scm 1440 */
return 
BINT(((long)1));}  else 
{ /* Ieee/string.scm 1443 */
long BgL_arg1878z00_2193;long BgL_arg1879z00_2194;
{ /* Ieee/string.scm 1443 */
long BgL_za71za7_4432;
{ /* Ieee/string.scm 1443 */
obj_t BgL_tmpz00_12481;
{ /* Ieee/string.scm 1443 */
obj_t BgL_aux4233z00_6211;
BgL_aux4233z00_6211 = BgL_iaz00_2161; 
if(
INTEGERP(BgL_aux4233z00_6211))
{ /* Ieee/string.scm 1443 */
BgL_tmpz00_12481 = BgL_aux4233z00_6211
; }  else 
{ 
obj_t BgL_auxz00_12484;
BgL_auxz00_12484 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)58113)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_aux4233z00_6211); 
FAILURE(BgL_auxz00_12484,BFALSE,BFALSE);} } 
BgL_za71za7_4432 = 
(long)CINT(BgL_tmpz00_12481); } 
BgL_arg1878z00_2193 = 
(BgL_za71za7_4432+((long)1)); } 
{ /* Ieee/string.scm 1443 */
long BgL_za71za7_4434;
{ /* Ieee/string.scm 1443 */
obj_t BgL_tmpz00_12490;
{ /* Ieee/string.scm 1443 */
obj_t BgL_aux4235z00_6213;
BgL_aux4235z00_6213 = BgL_ibz00_2162; 
if(
INTEGERP(BgL_aux4235z00_6213))
{ /* Ieee/string.scm 1443 */
BgL_tmpz00_12490 = BgL_aux4235z00_6213
; }  else 
{ 
obj_t BgL_auxz00_12493;
BgL_auxz00_12493 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)58124)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_aux4235z00_6213); 
FAILURE(BgL_auxz00_12493,BFALSE,BFALSE);} } 
BgL_za71za7_4434 = 
(long)CINT(BgL_tmpz00_12490); } 
BgL_arg1879z00_2194 = 
(BgL_za71za7_4434+((long)1)); } 
{ 
obj_t BgL_ibz00_12501;obj_t BgL_iaz00_12499;
BgL_iaz00_12499 = 
BINT(BgL_arg1878z00_2193); 
BgL_ibz00_12501 = 
BINT(BgL_arg1879z00_2194); 
BgL_ibz00_2162 = BgL_ibz00_12501; 
BgL_iaz00_2161 = BgL_iaz00_12499; 
goto BgL_zc3z04anonymousza31856ze3z87_2163;} } } } } } } } } } 

}



/* compare-right */
obj_t BGl_comparezd2rightzd2zz__r4_strings_6_7z00(obj_t BgL_az00_257, obj_t BgL_iaz00_258, obj_t BgL_bz00_259, obj_t BgL_ibz00_260)
{
{ /* Ieee/string.scm 1448 */
{ 
obj_t BgL_biasz00_2199;long BgL_iz00_2200;
BgL_biasz00_2199 = BUNSPEC; 
BgL_iz00_2200 = ((long)0); 
BgL_zc3z04anonymousza31880ze3z87_2201:
{ /* Ieee/string.scm 1451 */
unsigned char BgL_caz00_2202;unsigned char BgL_cbz00_2203;
{ /* Ieee/string.scm 1451 */
long BgL_arg1901z00_2225;
{ /* Ieee/string.scm 1451 */
long BgL_za72za7_4437;
{ /* Ieee/string.scm 1451 */
obj_t BgL_tmpz00_12503;
if(
INTEGERP(BgL_iaz00_258))
{ /* Ieee/string.scm 1451 */
BgL_tmpz00_12503 = BgL_iaz00_258
; }  else 
{ 
obj_t BgL_auxz00_12506;
BgL_auxz00_12506 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)58475)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iaz00_258); 
FAILURE(BgL_auxz00_12506,BFALSE,BFALSE);} 
BgL_za72za7_4437 = 
(long)CINT(BgL_tmpz00_12503); } 
BgL_arg1901z00_2225 = 
(BgL_iz00_2200+BgL_za72za7_4437); } 
if(
(BgL_arg1901z00_2225>=
STRING_LENGTH(BgL_az00_257)))
{ /* Ieee/string.scm 1494 */
BgL_caz00_2202 = ((unsigned char)'\000'); }  else 
{ /* Ieee/string.scm 339 */
long BgL_l3293z00_5268;
BgL_l3293z00_5268 = 
STRING_LENGTH(BgL_az00_257); 
if(
BOUND_CHECK(BgL_arg1901z00_2225, BgL_l3293z00_5268))
{ /* Ieee/string.scm 339 */
BgL_caz00_2202 = 
STRING_REF(BgL_az00_257, BgL_arg1901z00_2225); }  else 
{ 
obj_t BgL_auxz00_12519;
BgL_auxz00_12519 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_az00_257, 
(int)(BgL_l3293z00_5268), 
(int)(BgL_arg1901z00_2225)); 
FAILURE(BgL_auxz00_12519,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 1452 */
long BgL_arg1902z00_2226;
{ /* Ieee/string.scm 1452 */
long BgL_za72za7_4450;
{ /* Ieee/string.scm 1452 */
obj_t BgL_tmpz00_12525;
if(
INTEGERP(BgL_ibz00_260))
{ /* Ieee/string.scm 1452 */
BgL_tmpz00_12525 = BgL_ibz00_260
; }  else 
{ 
obj_t BgL_auxz00_12528;
BgL_auxz00_12528 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)58508)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_ibz00_260); 
FAILURE(BgL_auxz00_12528,BFALSE,BFALSE);} 
BgL_za72za7_4450 = 
(long)CINT(BgL_tmpz00_12525); } 
BgL_arg1902z00_2226 = 
(BgL_iz00_2200+BgL_za72za7_4450); } 
if(
(BgL_arg1902z00_2226>=
STRING_LENGTH(BgL_bz00_259)))
{ /* Ieee/string.scm 1494 */
BgL_cbz00_2203 = ((unsigned char)'\000'); }  else 
{ /* Ieee/string.scm 339 */
long BgL_l3297z00_5272;
BgL_l3297z00_5272 = 
STRING_LENGTH(BgL_bz00_259); 
if(
BOUND_CHECK(BgL_arg1902z00_2226, BgL_l3297z00_5272))
{ /* Ieee/string.scm 339 */
BgL_cbz00_2203 = 
STRING_REF(BgL_bz00_259, BgL_arg1902z00_2226); }  else 
{ 
obj_t BgL_auxz00_12541;
BgL_auxz00_12541 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_bz00_259, 
(int)(BgL_l3297z00_5272), 
(int)(BgL_arg1902z00_2226)); 
FAILURE(BgL_auxz00_12541,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 1454 */
bool_t BgL_test5529z00_12547;
{ /* Ieee/string.scm 1454 */
bool_t BgL_test5530z00_12548;
{ /* Ieee/string.scm 1454 */
bool_t BgL_res2809z00_4463;
BgL_res2809z00_4463 = 
isdigit(BgL_caz00_2202); 
BgL_test5530z00_12548 = BgL_res2809z00_4463; } 
if(BgL_test5530z00_12548)
{ /* Ieee/string.scm 1454 */
BgL_test5529z00_12547 = ((bool_t)0)
; }  else 
{ /* Ieee/string.scm 1454 */
bool_t BgL_test5531z00_12550;
{ /* Ieee/string.scm 1454 */
bool_t BgL_res2810z00_4465;
BgL_res2810z00_4465 = 
isdigit(BgL_cbz00_2203); 
BgL_test5531z00_12550 = BgL_res2810z00_4465; } 
if(BgL_test5531z00_12550)
{ /* Ieee/string.scm 1454 */
BgL_test5529z00_12547 = ((bool_t)0)
; }  else 
{ /* Ieee/string.scm 1454 */
BgL_test5529z00_12547 = ((bool_t)1)
; } } } 
if(BgL_test5529z00_12547)
{ /* Ieee/string.scm 1454 */
if(
(BgL_biasz00_2199==BUNSPEC))
{ /* Ieee/string.scm 1455 */
return 
BINT(BgL_iz00_2200);}  else 
{ /* Ieee/string.scm 1455 */
return BgL_biasz00_2199;} }  else 
{ /* Ieee/string.scm 1456 */
bool_t BgL_test5533z00_12555;
{ /* Ieee/string.scm 1456 */
bool_t BgL_res2811z00_4467;
BgL_res2811z00_4467 = 
isdigit(BgL_caz00_2202); 
BgL_test5533z00_12555 = BgL_res2811z00_4467; } 
if(BgL_test5533z00_12555)
{ /* Ieee/string.scm 1458 */
bool_t BgL_test5534z00_12557;
{ /* Ieee/string.scm 1458 */
bool_t BgL_res2812z00_4469;
BgL_res2812z00_4469 = 
isdigit(BgL_cbz00_2203); 
BgL_test5534z00_12557 = BgL_res2812z00_4469; } 
if(BgL_test5534z00_12557)
{ /* Ieee/string.scm 1458 */
if(
(BgL_caz00_2202<BgL_cbz00_2203))
{ 
long BgL_iz00_12564;obj_t BgL_biasz00_12561;
if(
(BgL_biasz00_2199==BUNSPEC))
{ /* Ieee/string.scm 1461 */
BgL_biasz00_12561 = BFALSE; }  else 
{ /* Ieee/string.scm 1461 */
BgL_biasz00_12561 = BgL_biasz00_2199; } 
BgL_iz00_12564 = 
(BgL_iz00_2200+((long)1)); 
BgL_iz00_2200 = BgL_iz00_12564; 
BgL_biasz00_2199 = BgL_biasz00_12561; 
goto BgL_zc3z04anonymousza31880ze3z87_2201;}  else 
{ /* Ieee/string.scm 1460 */
if(
(BgL_caz00_2202>BgL_cbz00_2203))
{ 
long BgL_iz00_12571;obj_t BgL_biasz00_12568;
if(
(BgL_biasz00_2199==BUNSPEC))
{ /* Ieee/string.scm 1463 */
BgL_biasz00_12568 = BTRUE; }  else 
{ /* Ieee/string.scm 1463 */
BgL_biasz00_12568 = BgL_biasz00_2199; } 
BgL_iz00_12571 = 
(BgL_iz00_2200+((long)1)); 
BgL_iz00_2200 = BgL_iz00_12571; 
BgL_biasz00_2199 = BgL_biasz00_12568; 
goto BgL_zc3z04anonymousza31880ze3z87_2201;}  else 
{ /* Ieee/string.scm 1464 */
bool_t BgL_test5540z00_12573;
if(
(BgL_caz00_2202==((unsigned char)'\000')))
{ /* Ieee/string.scm 1464 */
BgL_test5540z00_12573 = 
(BgL_cbz00_2203==((unsigned char)'\000'))
; }  else 
{ /* Ieee/string.scm 1464 */
BgL_test5540z00_12573 = ((bool_t)0)
; } 
if(BgL_test5540z00_12573)
{ /* Ieee/string.scm 1464 */
if(
(BgL_biasz00_2199==BUNSPEC))
{ /* Ieee/string.scm 1465 */
return 
BINT(BgL_iz00_2200);}  else 
{ /* Ieee/string.scm 1465 */
return BgL_biasz00_2199;} }  else 
{ 
long BgL_iz00_12580;
BgL_iz00_12580 = 
(BgL_iz00_2200+((long)1)); 
BgL_iz00_2200 = BgL_iz00_12580; 
goto BgL_zc3z04anonymousza31880ze3z87_2201;} } } }  else 
{ /* Ieee/string.scm 1458 */
return BTRUE;} }  else 
{ /* Ieee/string.scm 1456 */
return BFALSE;} } } } } } 

}



/* compare-left */
obj_t BGl_comparezd2leftzd2zz__r4_strings_6_7z00(obj_t BgL_az00_261, obj_t BgL_iaz00_262, obj_t BgL_bz00_263, obj_t BgL_ibz00_264)
{
{ /* Ieee/string.scm 1472 */
{ 
long BgL_iz00_2229;
BgL_iz00_2229 = ((long)0); 
BgL_zc3z04anonymousza31903ze3z87_2230:
{ /* Ieee/string.scm 1474 */
unsigned char BgL_caz00_2231;unsigned char BgL_cbz00_2232;
{ /* Ieee/string.scm 1474 */
long BgL_arg1912z00_2243;
{ /* Ieee/string.scm 1474 */
long BgL_za71za7_4488;
{ /* Ieee/string.scm 1474 */
obj_t BgL_tmpz00_12582;
if(
INTEGERP(BgL_iaz00_262))
{ /* Ieee/string.scm 1474 */
BgL_tmpz00_12582 = BgL_iaz00_262
; }  else 
{ 
obj_t BgL_auxz00_12585;
BgL_auxz00_12585 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)59318)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_iaz00_262); 
FAILURE(BgL_auxz00_12585,BFALSE,BFALSE);} 
BgL_za71za7_4488 = 
(long)CINT(BgL_tmpz00_12582); } 
BgL_arg1912z00_2243 = 
(BgL_za71za7_4488+BgL_iz00_2229); } 
if(
(BgL_arg1912z00_2243>=
STRING_LENGTH(BgL_az00_261)))
{ /* Ieee/string.scm 1494 */
BgL_caz00_2231 = ((unsigned char)'\000'); }  else 
{ /* Ieee/string.scm 339 */
long BgL_l3301z00_5276;
BgL_l3301z00_5276 = 
STRING_LENGTH(BgL_az00_261); 
if(
BOUND_CHECK(BgL_arg1912z00_2243, BgL_l3301z00_5276))
{ /* Ieee/string.scm 339 */
BgL_caz00_2231 = 
STRING_REF(BgL_az00_261, BgL_arg1912z00_2243); }  else 
{ 
obj_t BgL_auxz00_12598;
BgL_auxz00_12598 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_az00_261, 
(int)(BgL_l3301z00_5276), 
(int)(BgL_arg1912z00_2243)); 
FAILURE(BgL_auxz00_12598,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 1475 */
long BgL_arg1913z00_2244;
{ /* Ieee/string.scm 1475 */
long BgL_za71za7_4501;
{ /* Ieee/string.scm 1475 */
obj_t BgL_tmpz00_12604;
if(
INTEGERP(BgL_ibz00_264))
{ /* Ieee/string.scm 1475 */
BgL_tmpz00_12604 = BgL_ibz00_264
; }  else 
{ 
obj_t BgL_auxz00_12607;
BgL_auxz00_12607 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)59351)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_ibz00_264); 
FAILURE(BgL_auxz00_12607,BFALSE,BFALSE);} 
BgL_za71za7_4501 = 
(long)CINT(BgL_tmpz00_12604); } 
BgL_arg1913z00_2244 = 
(BgL_za71za7_4501+BgL_iz00_2229); } 
if(
(BgL_arg1913z00_2244>=
STRING_LENGTH(BgL_bz00_263)))
{ /* Ieee/string.scm 1494 */
BgL_cbz00_2232 = ((unsigned char)'\000'); }  else 
{ /* Ieee/string.scm 339 */
long BgL_l3305z00_5280;
BgL_l3305z00_5280 = 
STRING_LENGTH(BgL_bz00_263); 
if(
BOUND_CHECK(BgL_arg1913z00_2244, BgL_l3305z00_5280))
{ /* Ieee/string.scm 339 */
BgL_cbz00_2232 = 
STRING_REF(BgL_bz00_263, BgL_arg1913z00_2244); }  else 
{ 
obj_t BgL_auxz00_12620;
BgL_auxz00_12620 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_bz00_263, 
(int)(BgL_l3305z00_5280), 
(int)(BgL_arg1913z00_2244)); 
FAILURE(BgL_auxz00_12620,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 1477 */
bool_t BgL_test5549z00_12626;
{ /* Ieee/string.scm 1477 */
bool_t BgL_test5550z00_12627;
{ /* Ieee/string.scm 1477 */
bool_t BgL_res2828z00_4515;
BgL_res2828z00_4515 = 
isdigit(BgL_caz00_2231); 
BgL_test5550z00_12627 = BgL_res2828z00_4515; } 
if(BgL_test5550z00_12627)
{ /* Ieee/string.scm 1477 */
BgL_test5549z00_12626 = ((bool_t)0)
; }  else 
{ /* Ieee/string.scm 1477 */
bool_t BgL_test5551z00_12629;
{ /* Ieee/string.scm 1477 */
bool_t BgL_res2829z00_4517;
BgL_res2829z00_4517 = 
isdigit(BgL_cbz00_2232); 
BgL_test5551z00_12629 = BgL_res2829z00_4517; } 
if(BgL_test5551z00_12629)
{ /* Ieee/string.scm 1477 */
BgL_test5549z00_12626 = ((bool_t)0)
; }  else 
{ /* Ieee/string.scm 1477 */
BgL_test5549z00_12626 = ((bool_t)1)
; } } } 
if(BgL_test5549z00_12626)
{ /* Ieee/string.scm 1477 */
return 
BINT(BgL_iz00_2229);}  else 
{ /* Ieee/string.scm 1479 */
bool_t BgL_test5552z00_12632;
{ /* Ieee/string.scm 1479 */
bool_t BgL_res2830z00_4519;
BgL_res2830z00_4519 = 
isdigit(BgL_caz00_2231); 
BgL_test5552z00_12632 = BgL_res2830z00_4519; } 
if(BgL_test5552z00_12632)
{ /* Ieee/string.scm 1481 */
bool_t BgL_test5553z00_12634;
{ /* Ieee/string.scm 1481 */
bool_t BgL_res2831z00_4521;
BgL_res2831z00_4521 = 
isdigit(BgL_cbz00_2232); 
BgL_test5553z00_12634 = BgL_res2831z00_4521; } 
if(BgL_test5553z00_12634)
{ /* Ieee/string.scm 1481 */
if(
(BgL_caz00_2231<BgL_cbz00_2232))
{ /* Ieee/string.scm 1483 */
return BFALSE;}  else 
{ /* Ieee/string.scm 1483 */
if(
(BgL_caz00_2231>BgL_cbz00_2232))
{ /* Ieee/string.scm 1485 */
return BTRUE;}  else 
{ 
long BgL_iz00_12640;
BgL_iz00_12640 = 
(BgL_iz00_2229+((long)1)); 
BgL_iz00_2229 = BgL_iz00_12640; 
goto BgL_zc3z04anonymousza31903ze3z87_2230;} } }  else 
{ /* Ieee/string.scm 1481 */
return BTRUE;} }  else 
{ /* Ieee/string.scm 1479 */
return BFALSE;} } } } } } 

}



/* hex-string-ref */
obj_t BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(obj_t BgL_strz00_267, long BgL_iz00_268)
{
{ /* Ieee/string.scm 1501 */
{ /* Ieee/string.scm 1502 */
unsigned char BgL_nz00_2249;
{ /* Ieee/string.scm 339 */
long BgL_l3309z00_5284;
BgL_l3309z00_5284 = 
STRING_LENGTH(BgL_strz00_267); 
if(
BOUND_CHECK(BgL_iz00_268, BgL_l3309z00_5284))
{ /* Ieee/string.scm 339 */
BgL_nz00_2249 = 
STRING_REF(BgL_strz00_267, BgL_iz00_268); }  else 
{ 
obj_t BgL_auxz00_12646;
BgL_auxz00_12646 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16705)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_strz00_267, 
(int)(BgL_l3309z00_5284), 
(int)(BgL_iz00_268)); 
FAILURE(BgL_auxz00_12646,BFALSE,BFALSE);} } 
{ /* Ieee/string.scm 1504 */
bool_t BgL_test5557z00_12652;
if(
(BgL_nz00_2249>=((unsigned char)'0')))
{ /* Ieee/string.scm 1504 */
BgL_test5557z00_12652 = 
(BgL_nz00_2249<=((unsigned char)'9'))
; }  else 
{ /* Ieee/string.scm 1504 */
BgL_test5557z00_12652 = ((bool_t)0)
; } 
if(BgL_test5557z00_12652)
{ /* Ieee/string.scm 1504 */
return 
BINT(
(
(BgL_nz00_2249)-((long)48)));}  else 
{ /* Ieee/string.scm 1506 */
bool_t BgL_test5559z00_12659;
if(
(BgL_nz00_2249>=((unsigned char)'a')))
{ /* Ieee/string.scm 1506 */
BgL_test5559z00_12659 = 
(BgL_nz00_2249<=((unsigned char)'f'))
; }  else 
{ /* Ieee/string.scm 1506 */
BgL_test5559z00_12659 = ((bool_t)0)
; } 
if(BgL_test5559z00_12659)
{ /* Ieee/string.scm 1506 */
return 
BINT(
(((long)10)+
(
(BgL_nz00_2249)-((long)97))));}  else 
{ /* Ieee/string.scm 1508 */
bool_t BgL_test5561z00_12667;
if(
(BgL_nz00_2249>=((unsigned char)'A')))
{ /* Ieee/string.scm 1508 */
BgL_test5561z00_12667 = 
(BgL_nz00_2249<=((unsigned char)'F'))
; }  else 
{ /* Ieee/string.scm 1508 */
BgL_test5561z00_12667 = ((bool_t)0)
; } 
if(BgL_test5561z00_12667)
{ /* Ieee/string.scm 1508 */
return 
BINT(
(((long)10)+
(
(BgL_nz00_2249)-((long)65))));}  else 
{ /* Ieee/string.scm 1508 */
return 
BGl_errorz00zz__errorz00(BGl_string4466z00zz__r4_strings_6_7z00, BGl_string4467z00zz__r4_strings_6_7z00, BgL_strz00_267);} } } } } } 

}



/* string-hex-intern */
BGL_EXPORTED_DEF obj_t BGl_stringzd2hexzd2internz00zz__r4_strings_6_7z00(obj_t BgL_strz00_269)
{
{ /* Ieee/string.scm 1518 */
{ /* Ieee/string.scm 1519 */
long BgL_lenz00_2264;
BgL_lenz00_2264 = 
STRING_LENGTH(BgL_strz00_269); 
if(
ODDP_FX(BgL_lenz00_2264))
{ /* Ieee/string.scm 1521 */
obj_t BgL_aux4245z00_6223;
BgL_aux4245z00_6223 = 
BGl_errorz00zz__errorz00(BGl_string4468z00zz__r4_strings_6_7z00, BGl_string4469z00zz__r4_strings_6_7z00, BgL_strz00_269); 
if(
STRINGP(BgL_aux4245z00_6223))
{ /* Ieee/string.scm 1521 */
return BgL_aux4245z00_6223;}  else 
{ 
obj_t BgL_auxz00_12682;
BgL_auxz00_12682 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)60944)), BGl_string4468z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_aux4245z00_6223); 
FAILURE(BgL_auxz00_12682,BFALSE,BFALSE);} }  else 
{ /* Ieee/string.scm 1522 */
obj_t BgL_resz00_2266;
{ /* Ieee/string.scm 1522 */
long BgL_arg1937z00_2281;
BgL_arg1937z00_2281 = 
(BgL_lenz00_2264/((long)2)); 
{ /* Ieee/string.scm 168 */

BgL_resz00_2266 = 
make_string(BgL_arg1937z00_2281, ((unsigned char)' ')); } } 
{ 
long BgL_iz00_2268;long BgL_jz00_2269;
BgL_iz00_2268 = ((long)0); 
BgL_jz00_2269 = ((long)0); 
BgL_zc3z04anonymousza31930ze3z87_2270:
if(
(BgL_iz00_2268==BgL_lenz00_2264))
{ /* Ieee/string.scm 1525 */
return BgL_resz00_2266;}  else 
{ /* Ieee/string.scm 1527 */
obj_t BgL_c1z00_2272;
BgL_c1z00_2272 = 
BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(BgL_strz00_269, BgL_iz00_2268); 
{ /* Ieee/string.scm 1527 */
obj_t BgL_c2z00_2273;
BgL_c2z00_2273 = 
BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(BgL_strz00_269, 
(BgL_iz00_2268+((long)1))); 
{ /* Ieee/string.scm 1528 */
long BgL_cz00_2274;
{ /* Ieee/string.scm 1529 */
long BgL_za72za7_4593;
{ /* Ieee/string.scm 1529 */
obj_t BgL_tmpz00_12693;
if(
INTEGERP(BgL_c2z00_2273))
{ /* Ieee/string.scm 1529 */
BgL_tmpz00_12693 = BgL_c2z00_2273
; }  else 
{ 
obj_t BgL_auxz00_12696;
BgL_auxz00_12696 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)61221)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_c2z00_2273); 
FAILURE(BgL_auxz00_12696,BFALSE,BFALSE);} 
BgL_za72za7_4593 = 
(long)CINT(BgL_tmpz00_12693); } 
{ /* Ieee/string.scm 1529 */
long BgL_tmpz00_12701;
{ /* Ieee/string.scm 1529 */
long BgL_za71za7_4590;
{ /* Ieee/string.scm 1529 */
obj_t BgL_tmpz00_12702;
if(
INTEGERP(BgL_c1z00_2272))
{ /* Ieee/string.scm 1529 */
BgL_tmpz00_12702 = BgL_c1z00_2272
; }  else 
{ 
obj_t BgL_auxz00_12705;
BgL_auxz00_12705 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)61214)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_c1z00_2272); 
FAILURE(BgL_auxz00_12705,BFALSE,BFALSE);} 
BgL_za71za7_4590 = 
(long)CINT(BgL_tmpz00_12702); } 
BgL_tmpz00_12701 = 
(BgL_za71za7_4590*((long)16)); } 
BgL_cz00_2274 = 
(BgL_tmpz00_12701+BgL_za72za7_4593); } } 
{ /* Ieee/string.scm 1529 */

{ /* Ieee/string.scm 1530 */
unsigned char BgL_arg1932z00_2275;
BgL_arg1932z00_2275 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_cz00_2274); 
{ /* Ieee/string.scm 333 */
long BgL_l3313z00_5288;
BgL_l3313z00_5288 = 
STRING_LENGTH(BgL_resz00_2266); 
if(
BOUND_CHECK(BgL_jz00_2269, BgL_l3313z00_5288))
{ /* Ieee/string.scm 333 */
STRING_SET(BgL_resz00_2266, BgL_jz00_2269, BgL_arg1932z00_2275); }  else 
{ 
obj_t BgL_auxz00_12717;
BgL_auxz00_12717 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16409)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_resz00_2266, 
(int)(BgL_l3313z00_5288), 
(int)(BgL_jz00_2269)); 
FAILURE(BgL_auxz00_12717,BFALSE,BFALSE);} } } 
{ 
long BgL_jz00_12725;long BgL_iz00_12723;
BgL_iz00_12723 = 
(BgL_iz00_2268+((long)2)); 
BgL_jz00_12725 = 
(BgL_jz00_2269+((long)1)); 
BgL_jz00_2269 = BgL_jz00_12725; 
BgL_iz00_2268 = BgL_iz00_12723; 
goto BgL_zc3z04anonymousza31930ze3z87_2270;} } } } } } } } } 

}



/* &string-hex-intern */
obj_t BGl_z62stringzd2hexzd2internz62zz__r4_strings_6_7z00(obj_t BgL_envz00_4886, obj_t BgL_strz00_4887)
{
{ /* Ieee/string.scm 1518 */
{ /* Ieee/string.scm 1519 */
obj_t BgL_auxz00_12727;
if(
STRINGP(BgL_strz00_4887))
{ /* Ieee/string.scm 1519 */
BgL_auxz00_12727 = BgL_strz00_4887
; }  else 
{ 
obj_t BgL_auxz00_12730;
BgL_auxz00_12730 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)60885)), BGl_string4470z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_strz00_4887); 
FAILURE(BgL_auxz00_12730,BFALSE,BFALSE);} 
return 
BGl_stringzd2hexzd2internz00zz__r4_strings_6_7z00(BgL_auxz00_12727);} } 

}



/* string-hex-intern! */
BGL_EXPORTED_DEF obj_t BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00(obj_t BgL_strz00_270)
{
{ /* Ieee/string.scm 1536 */
{ /* Ieee/string.scm 1537 */
long BgL_lenz00_2284;
BgL_lenz00_2284 = 
STRING_LENGTH(BgL_strz00_270); 
if(
ODDP_FX(BgL_lenz00_2284))
{ /* Ieee/string.scm 1539 */
obj_t BgL_aux4253z00_6231;
BgL_aux4253z00_6231 = 
BGl_errorz00zz__errorz00(BGl_string4471z00zz__r4_strings_6_7z00, BGl_string4469z00zz__r4_strings_6_7z00, BgL_strz00_270); 
if(
STRINGP(BgL_aux4253z00_6231))
{ /* Ieee/string.scm 1539 */
return BgL_aux4253z00_6231;}  else 
{ 
obj_t BgL_auxz00_12741;
BgL_auxz00_12741 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)61635)), BGl_string4471z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_aux4253z00_6231); 
FAILURE(BgL_auxz00_12741,BFALSE,BFALSE);} }  else 
{ 
long BgL_iz00_2287;long BgL_jz00_2288;
BgL_iz00_2287 = ((long)0); 
BgL_jz00_2288 = ((long)0); 
BgL_zc3z04anonymousza31939ze3z87_2289:
if(
(BgL_iz00_2287==BgL_lenz00_2284))
{ /* Ieee/string.scm 750 */
long BgL_tmpz00_12747;
BgL_tmpz00_12747 = 
(BgL_lenz00_2284/((long)2)); 
return 
bgl_string_shrink(BgL_strz00_270, BgL_tmpz00_12747);}  else 
{ /* Ieee/string.scm 1544 */
obj_t BgL_c1z00_2292;
BgL_c1z00_2292 = 
BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(BgL_strz00_270, BgL_iz00_2287); 
{ /* Ieee/string.scm 1544 */
obj_t BgL_c2z00_2293;
BgL_c2z00_2293 = 
BGl_hexzd2stringzd2refz00zz__r4_strings_6_7z00(BgL_strz00_270, 
(BgL_iz00_2287+((long)1))); 
{ /* Ieee/string.scm 1545 */
long BgL_cz00_2294;
{ /* Ieee/string.scm 1546 */
long BgL_za72za7_4618;
{ /* Ieee/string.scm 1546 */
obj_t BgL_tmpz00_12753;
if(
INTEGERP(BgL_c2z00_2293))
{ /* Ieee/string.scm 1546 */
BgL_tmpz00_12753 = BgL_c2z00_2293
; }  else 
{ 
obj_t BgL_auxz00_12756;
BgL_auxz00_12756 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)61893)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_c2z00_2293); 
FAILURE(BgL_auxz00_12756,BFALSE,BFALSE);} 
BgL_za72za7_4618 = 
(long)CINT(BgL_tmpz00_12753); } 
{ /* Ieee/string.scm 1546 */
long BgL_tmpz00_12761;
{ /* Ieee/string.scm 1546 */
long BgL_za71za7_4615;
{ /* Ieee/string.scm 1546 */
obj_t BgL_tmpz00_12762;
if(
INTEGERP(BgL_c1z00_2292))
{ /* Ieee/string.scm 1546 */
BgL_tmpz00_12762 = BgL_c1z00_2292
; }  else 
{ 
obj_t BgL_auxz00_12765;
BgL_auxz00_12765 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)61886)), BGl_string4337z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_c1z00_2292); 
FAILURE(BgL_auxz00_12765,BFALSE,BFALSE);} 
BgL_za71za7_4615 = 
(long)CINT(BgL_tmpz00_12762); } 
BgL_tmpz00_12761 = 
(BgL_za71za7_4615*((long)16)); } 
BgL_cz00_2294 = 
(BgL_tmpz00_12761+BgL_za72za7_4618); } } 
{ /* Ieee/string.scm 1546 */

{ /* Ieee/string.scm 1547 */
unsigned char BgL_arg1942z00_2295;
BgL_arg1942z00_2295 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_cz00_2294); 
{ /* Ieee/string.scm 333 */
long BgL_l3317z00_5292;
BgL_l3317z00_5292 = 
STRING_LENGTH(BgL_strz00_270); 
if(
BOUND_CHECK(BgL_jz00_2288, BgL_l3317z00_5292))
{ /* Ieee/string.scm 333 */
STRING_SET(BgL_strz00_270, BgL_jz00_2288, BgL_arg1942z00_2295); }  else 
{ 
obj_t BgL_auxz00_12777;
BgL_auxz00_12777 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16409)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_strz00_270, 
(int)(BgL_l3317z00_5292), 
(int)(BgL_jz00_2288)); 
FAILURE(BgL_auxz00_12777,BFALSE,BFALSE);} } } 
{ 
long BgL_jz00_12785;long BgL_iz00_12783;
BgL_iz00_12783 = 
(BgL_iz00_2287+((long)2)); 
BgL_jz00_12785 = 
(BgL_jz00_2288+((long)1)); 
BgL_jz00_2288 = BgL_jz00_12785; 
BgL_iz00_2287 = BgL_iz00_12783; 
goto BgL_zc3z04anonymousza31939ze3z87_2289;} } } } } } } } 

}



/* &string-hex-intern! */
obj_t BGl_z62stringzd2hexzd2internz12z70zz__r4_strings_6_7z00(obj_t BgL_envz00_4888, obj_t BgL_strz00_4889)
{
{ /* Ieee/string.scm 1536 */
{ /* Ieee/string.scm 1537 */
obj_t BgL_auxz00_12787;
if(
STRINGP(BgL_strz00_4889))
{ /* Ieee/string.scm 1537 */
BgL_auxz00_12787 = BgL_strz00_4889
; }  else 
{ 
obj_t BgL_auxz00_12790;
BgL_auxz00_12790 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)61576)), BGl_string4472z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_strz00_4889); 
FAILURE(BgL_auxz00_12790,BFALSE,BFALSE);} 
return 
BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00(BgL_auxz00_12787);} } 

}



/* _string-hex-extern */
obj_t BGl__stringzd2hexzd2externz00zz__r4_strings_6_7z00(obj_t BgL_env1206z00_275, obj_t BgL_opt1205z00_274)
{
{ /* Ieee/string.scm 1553 */
{ /* Ieee/string.scm 1553 */
obj_t BgL_strz00_2301;
BgL_strz00_2301 = 
VECTOR_REF(BgL_opt1205z00_274,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1205z00_274)) { case ((long)1) : 

{ /* Ieee/string.scm 1554 */
long BgL_endz00_2306;
{ /* Ieee/string.scm 1554 */
obj_t BgL_stringz00_4627;
if(
STRINGP(BgL_strz00_2301))
{ /* Ieee/string.scm 1554 */
BgL_stringz00_4627 = BgL_strz00_2301; }  else 
{ 
obj_t BgL_auxz00_12798;
BgL_auxz00_12798 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)62295)), BGl_string4476z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_strz00_2301); 
FAILURE(BgL_auxz00_12798,BFALSE,BFALSE);} 
BgL_endz00_2306 = 
STRING_LENGTH(BgL_stringz00_4627); } 
{ /* Ieee/string.scm 1553 */

{ /* Ieee/string.scm 1553 */
obj_t BgL_auxz00_12803;
if(
STRINGP(BgL_strz00_2301))
{ /* Ieee/string.scm 1553 */
BgL_auxz00_12803 = BgL_strz00_2301
; }  else 
{ 
obj_t BgL_auxz00_12806;
BgL_auxz00_12806 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)62205)), BGl_string4476z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_strz00_2301); 
FAILURE(BgL_auxz00_12806,BFALSE,BFALSE);} 
return 
BGl_stringzd2hexzd2externz00zz__r4_strings_6_7z00(BgL_auxz00_12803, 
(int)(((long)0)), BgL_endz00_2306);} } } break;case ((long)2) : 

{ /* Ieee/string.scm 1553 */
obj_t BgL_startz00_2307;
BgL_startz00_2307 = 
VECTOR_REF(BgL_opt1205z00_274,((long)1)); 
{ /* Ieee/string.scm 1554 */
long BgL_endz00_2308;
{ /* Ieee/string.scm 1554 */
obj_t BgL_stringz00_4629;
if(
STRINGP(BgL_strz00_2301))
{ /* Ieee/string.scm 1554 */
BgL_stringz00_4629 = BgL_strz00_2301; }  else 
{ 
obj_t BgL_auxz00_12815;
BgL_auxz00_12815 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)62295)), BGl_string4476z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_strz00_2301); 
FAILURE(BgL_auxz00_12815,BFALSE,BFALSE);} 
BgL_endz00_2308 = 
STRING_LENGTH(BgL_stringz00_4629); } 
{ /* Ieee/string.scm 1553 */

{ /* Ieee/string.scm 1553 */
int BgL_auxz00_12827;obj_t BgL_auxz00_12820;
{ /* Ieee/string.scm 1553 */
obj_t BgL_tmpz00_12828;
if(
INTEGERP(BgL_startz00_2307))
{ /* Ieee/string.scm 1553 */
BgL_tmpz00_12828 = BgL_startz00_2307
; }  else 
{ 
obj_t BgL_auxz00_12831;
BgL_auxz00_12831 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)62205)), BGl_string4476z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_2307); 
FAILURE(BgL_auxz00_12831,BFALSE,BFALSE);} 
BgL_auxz00_12827 = 
CINT(BgL_tmpz00_12828); } 
if(
STRINGP(BgL_strz00_2301))
{ /* Ieee/string.scm 1553 */
BgL_auxz00_12820 = BgL_strz00_2301
; }  else 
{ 
obj_t BgL_auxz00_12823;
BgL_auxz00_12823 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)62205)), BGl_string4476z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_strz00_2301); 
FAILURE(BgL_auxz00_12823,BFALSE,BFALSE);} 
return 
BGl_stringzd2hexzd2externz00zz__r4_strings_6_7z00(BgL_auxz00_12820, BgL_auxz00_12827, BgL_endz00_2308);} } } } break;case ((long)3) : 

{ /* Ieee/string.scm 1553 */
obj_t BgL_startz00_2309;
BgL_startz00_2309 = 
VECTOR_REF(BgL_opt1205z00_274,((long)1)); 
{ /* Ieee/string.scm 1553 */
obj_t BgL_endz00_2310;
BgL_endz00_2310 = 
VECTOR_REF(BgL_opt1205z00_274,((long)2)); 
{ /* Ieee/string.scm 1553 */

{ /* Ieee/string.scm 1553 */
long BgL_auxz00_12855;int BgL_auxz00_12846;obj_t BgL_auxz00_12839;
{ /* Ieee/string.scm 1553 */
obj_t BgL_tmpz00_12856;
if(
INTEGERP(BgL_endz00_2310))
{ /* Ieee/string.scm 1553 */
BgL_tmpz00_12856 = BgL_endz00_2310
; }  else 
{ 
obj_t BgL_auxz00_12859;
BgL_auxz00_12859 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)62205)), BGl_string4476z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_endz00_2310); 
FAILURE(BgL_auxz00_12859,BFALSE,BFALSE);} 
BgL_auxz00_12855 = 
(long)CINT(BgL_tmpz00_12856); } 
{ /* Ieee/string.scm 1553 */
obj_t BgL_tmpz00_12847;
if(
INTEGERP(BgL_startz00_2309))
{ /* Ieee/string.scm 1553 */
BgL_tmpz00_12847 = BgL_startz00_2309
; }  else 
{ 
obj_t BgL_auxz00_12850;
BgL_auxz00_12850 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)62205)), BGl_string4476z00zz__r4_strings_6_7z00, BGl_string4288z00zz__r4_strings_6_7z00, BgL_startz00_2309); 
FAILURE(BgL_auxz00_12850,BFALSE,BFALSE);} 
BgL_auxz00_12846 = 
CINT(BgL_tmpz00_12847); } 
if(
STRINGP(BgL_strz00_2301))
{ /* Ieee/string.scm 1553 */
BgL_auxz00_12839 = BgL_strz00_2301
; }  else 
{ 
obj_t BgL_auxz00_12842;
BgL_auxz00_12842 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)62205)), BGl_string4476z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_strz00_2301); 
FAILURE(BgL_auxz00_12842,BFALSE,BFALSE);} 
return 
BGl_stringzd2hexzd2externz00zz__r4_strings_6_7z00(BgL_auxz00_12839, BgL_auxz00_12846, BgL_auxz00_12855);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4473z00zz__r4_strings_6_7z00, BGl_string4475z00zz__r4_strings_6_7z00, 
BINT(
VECTOR_LENGTH(BgL_opt1205z00_274)));} } } } 

}



/* string-hex-extern */
BGL_EXPORTED_DEF obj_t BGl_stringzd2hexzd2externz00zz__r4_strings_6_7z00(obj_t BgL_strz00_271, int BgL_startz00_272, long BgL_endz00_273)
{
{ /* Ieee/string.scm 1553 */
{ /* Ieee/string.scm 1558 */
long BgL_lenz00_2313;
BgL_lenz00_2313 = 
STRING_LENGTH(BgL_strz00_271); 
{ /* Ieee/string.scm 1560 */
bool_t BgL_test5585z00_12871;
if(
(
(long)(BgL_startz00_272)<((long)0)))
{ /* Ieee/string.scm 1560 */
BgL_test5585z00_12871 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 1560 */
BgL_test5585z00_12871 = 
(
(long)(BgL_startz00_272)>BgL_lenz00_2313)
; } 
if(BgL_test5585z00_12871)
{ /* Ieee/string.scm 1562 */
obj_t BgL_arg1951z00_2316;obj_t BgL_arg1952z00_2317;
{ /* Ieee/string.scm 1562 */
obj_t BgL_arg1953z00_2318;
{ /* Ieee/fixnum.scm 980 */

BgL_arg1953z00_2318 = 
BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(long)(BgL_startz00_272), ((long)10)); } 
BgL_arg1951z00_2316 = 
string_append(BGl_string4323z00zz__r4_strings_6_7z00, BgL_arg1953z00_2318); } 
{ /* Ieee/string.scm 1563 */
obj_t BgL_list1955z00_2322;
{ /* Ieee/string.scm 1563 */
obj_t BgL_arg1956z00_2323;
BgL_arg1956z00_2323 = 
MAKE_YOUNG_PAIR(BgL_strz00_271, BNIL); 
BgL_list1955z00_2322 = 
MAKE_YOUNG_PAIR(
BINT(BgL_lenz00_2313), BgL_arg1956z00_2323); } 
BgL_arg1952z00_2317 = BgL_list1955z00_2322; } 
{ /* Ieee/string.scm 1561 */
obj_t BgL_aux4277z00_6255;
BgL_aux4277z00_6255 = 
BGl_errorz00zz__errorz00(BGl_string4477z00zz__r4_strings_6_7z00, BgL_arg1951z00_2316, BgL_arg1952z00_2317); 
if(
STRINGP(BgL_aux4277z00_6255))
{ /* Ieee/string.scm 1561 */
return BgL_aux4277z00_6255;}  else 
{ 
obj_t BgL_auxz00_12886;
BgL_auxz00_12886 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)62477)), BGl_string4477z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_aux4277z00_6255); 
FAILURE(BgL_auxz00_12886,BFALSE,BFALSE);} } }  else 
{ /* Ieee/string.scm 1564 */
bool_t BgL_test5588z00_12890;
if(
(BgL_endz00_273<
(long)(BgL_startz00_272)))
{ /* Ieee/string.scm 1564 */
BgL_test5588z00_12890 = ((bool_t)1)
; }  else 
{ /* Ieee/string.scm 1564 */
BgL_test5588z00_12890 = 
(BgL_endz00_273>BgL_lenz00_2313)
; } 
if(BgL_test5588z00_12890)
{ /* Ieee/string.scm 1566 */
obj_t BgL_arg1959z00_2326;obj_t BgL_arg1960z00_2327;
{ /* Ieee/string.scm 1566 */
obj_t BgL_arg1961z00_2328;
{ /* Ieee/fixnum.scm 980 */

BgL_arg1961z00_2328 = 
BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_endz00_273, ((long)10)); } 
BgL_arg1959z00_2326 = 
string_append(BGl_string4324z00zz__r4_strings_6_7z00, BgL_arg1961z00_2328); } 
{ /* Ieee/string.scm 1567 */
obj_t BgL_list1963z00_2332;
{ /* Ieee/string.scm 1567 */
obj_t BgL_arg1964z00_2333;
BgL_arg1964z00_2333 = 
MAKE_YOUNG_PAIR(BgL_strz00_271, BNIL); 
BgL_list1963z00_2332 = 
MAKE_YOUNG_PAIR(
BINT(BgL_lenz00_2313), BgL_arg1964z00_2333); } 
BgL_arg1960z00_2327 = BgL_list1963z00_2332; } 
{ /* Ieee/string.scm 1565 */
obj_t BgL_aux4279z00_6257;
BgL_aux4279z00_6257 = 
BGl_errorz00zz__errorz00(BGl_string4477z00zz__r4_strings_6_7z00, BgL_arg1959z00_2326, BgL_arg1960z00_2327); 
if(
STRINGP(BgL_aux4279z00_6257))
{ /* Ieee/string.scm 1565 */
return BgL_aux4279z00_6257;}  else 
{ 
obj_t BgL_auxz00_12903;
BgL_auxz00_12903 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)62652)), BGl_string4477z00zz__r4_strings_6_7z00, BGl_string4283z00zz__r4_strings_6_7z00, BgL_aux4279z00_6257); 
FAILURE(BgL_auxz00_12903,BFALSE,BFALSE);} } }  else 
{ /* Ieee/string.scm 1569 */
obj_t BgL_resz00_2334;
{ /* Ieee/string.scm 1569 */
long BgL_arg1973z00_2350;
BgL_arg1973z00_2350 = 
(((long)2)*
(BgL_endz00_273-
(long)(BgL_startz00_272))); 
{ /* Ieee/string.scm 168 */

BgL_resz00_2334 = 
make_string(BgL_arg1973z00_2350, ((unsigned char)' ')); } } 
{ 
int BgL_iz00_2336;long BgL_jz00_2337;
BgL_iz00_2336 = BgL_startz00_272; 
BgL_jz00_2337 = ((long)0); 
BgL_zc3z04anonymousza31965ze3z87_2338:
if(
(
(long)(BgL_iz00_2336)==BgL_endz00_273))
{ /* Ieee/string.scm 1572 */
return BgL_resz00_2334;}  else 
{ /* Ieee/string.scm 1574 */
long BgL_nz00_2340;
{ /* Ieee/string.scm 1574 */
unsigned char BgL_tmpz00_12914;
{ /* Ieee/string.scm 1574 */
long BgL_kz00_4664;
BgL_kz00_4664 = 
(long)(BgL_iz00_2336); 
{ /* Ieee/string.scm 327 */
long BgL_l3321z00_5296;
BgL_l3321z00_5296 = 
STRING_LENGTH(BgL_strz00_271); 
if(
BOUND_CHECK(BgL_kz00_4664, BgL_l3321z00_5296))
{ /* Ieee/string.scm 327 */
BgL_tmpz00_12914 = 
STRING_REF(BgL_strz00_271, BgL_kz00_4664)
; }  else 
{ 
obj_t BgL_auxz00_12920;
BgL_auxz00_12920 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BgL_strz00_271, 
(int)(BgL_l3321z00_5296), 
(int)(BgL_kz00_4664)); 
FAILURE(BgL_auxz00_12920,BFALSE,BFALSE);} } } 
BgL_nz00_2340 = 
(BgL_tmpz00_12914); } 
{ /* Ieee/string.scm 1574 */
long BgL_d0z00_2341;
{ /* Ieee/string.scm 1575 */
long BgL_res2895z00_4686;
{ /* Ieee/string.scm 1575 */
long BgL_n1z00_4668;long BgL_n2z00_4669;
BgL_n1z00_4668 = BgL_nz00_2340; 
BgL_n2z00_4669 = ((long)16); 
{ /* Ieee/string.scm 1575 */
bool_t BgL_test5593z00_12927;
{ /* Ieee/string.scm 1575 */
long BgL_arg2101z00_4671;
BgL_arg2101z00_4671 = 
(((BgL_n1z00_4668) | (BgL_n2z00_4669)) & -2147483648); 
BgL_test5593z00_12927 = 
(BgL_arg2101z00_4671==((long)0)); } 
if(BgL_test5593z00_12927)
{ /* Ieee/string.scm 1575 */
int32_t BgL_arg2097z00_4672;
{ /* Ieee/string.scm 1575 */
int32_t BgL_arg2098z00_4673;int32_t BgL_arg2100z00_4674;
{ /* Ieee/string.scm 1575 */
int32_t BgL_res2891z00_4678;
BgL_res2891z00_4678 = 
(int32_t)(BgL_n1z00_4668); 
BgL_arg2098z00_4673 = BgL_res2891z00_4678; } 
{ /* Ieee/string.scm 1575 */
int32_t BgL_res2892z00_4680;
BgL_res2892z00_4680 = 
(int32_t)(BgL_n2z00_4669); 
BgL_arg2100z00_4674 = BgL_res2892z00_4680; } 
BgL_arg2097z00_4672 = 
(BgL_arg2098z00_4673%BgL_arg2100z00_4674); } 
{ /* Ieee/string.scm 1575 */
long BgL_res2894z00_4685;
{ /* Ieee/string.scm 1575 */
long BgL_arg2197z00_4682;
BgL_arg2197z00_4682 = 
(long)(BgL_arg2097z00_4672); 
{ /* Ieee/string.scm 1575 */
long BgL_res2893z00_4684;
BgL_res2893z00_4684 = 
(long)(BgL_arg2197z00_4682); 
BgL_res2894z00_4685 = BgL_res2893z00_4684; } } 
BgL_res2895z00_4686 = BgL_res2894z00_4685; } }  else 
{ /* Ieee/string.scm 1575 */
BgL_res2895z00_4686 = 
(BgL_n1z00_4668%BgL_n2z00_4669); } } } 
BgL_d0z00_2341 = BgL_res2895z00_4686; } 
{ /* Ieee/string.scm 1575 */
long BgL_d1z00_2342;
BgL_d1z00_2342 = 
(BgL_nz00_2340/((long)16)); 
{ /* Ieee/string.scm 1576 */

{ /* Ieee/string.scm 1577 */
unsigned char BgL_arg1967z00_2343;
if(
BOUND_CHECK(BgL_d1z00_2342, ((long)16)))
{ /* Ieee/string.scm 327 */
BgL_arg1967z00_2343 = 
STRING_REF(BGl_string4478z00zz__r4_strings_6_7z00, BgL_d1z00_2342); }  else 
{ 
obj_t BgL_auxz00_12940;
BgL_auxz00_12940 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BGl_string4478z00zz__r4_strings_6_7z00, 
(int)(((long)16)), 
(int)(BgL_d1z00_2342)); 
FAILURE(BgL_auxz00_12940,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 333 */
long BgL_l3329z00_5304;
BgL_l3329z00_5304 = 
STRING_LENGTH(BgL_resz00_2334); 
if(
BOUND_CHECK(BgL_jz00_2337, BgL_l3329z00_5304))
{ /* Ieee/string.scm 333 */
STRING_SET(BgL_resz00_2334, BgL_jz00_2337, BgL_arg1967z00_2343); }  else 
{ 
obj_t BgL_auxz00_12950;
BgL_auxz00_12950 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16409)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_resz00_2334, 
(int)(BgL_l3329z00_5304), 
(int)(BgL_jz00_2337)); 
FAILURE(BgL_auxz00_12950,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 1578 */
long BgL_arg1968z00_2344;unsigned char BgL_arg1969z00_2345;
BgL_arg1968z00_2344 = 
(BgL_jz00_2337+((long)1)); 
if(
BOUND_CHECK(BgL_d0z00_2341, ((long)16)))
{ /* Ieee/string.scm 327 */
BgL_arg1969z00_2345 = 
STRING_REF(BGl_string4478z00zz__r4_strings_6_7z00, BgL_d0z00_2341); }  else 
{ 
obj_t BgL_auxz00_12960;
BgL_auxz00_12960 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16115)), BGl_string4293z00zz__r4_strings_6_7z00, BGl_string4478z00zz__r4_strings_6_7z00, 
(int)(((long)16)), 
(int)(BgL_d0z00_2341)); 
FAILURE(BgL_auxz00_12960,BFALSE,BFALSE);} 
{ /* Ieee/string.scm 333 */
long BgL_l3337z00_5312;
BgL_l3337z00_5312 = 
STRING_LENGTH(BgL_resz00_2334); 
if(
BOUND_CHECK(BgL_arg1968z00_2344, BgL_l3337z00_5312))
{ /* Ieee/string.scm 333 */
STRING_SET(BgL_resz00_2334, BgL_arg1968z00_2344, BgL_arg1969z00_2345); }  else 
{ 
obj_t BgL_auxz00_12970;
BgL_auxz00_12970 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4281z00zz__r4_strings_6_7z00, 
BINT(((long)16409)), BGl_string4295z00zz__r4_strings_6_7z00, BgL_resz00_2334, 
(int)(BgL_l3337z00_5312), 
(int)(BgL_arg1968z00_2344)); 
FAILURE(BgL_auxz00_12970,BFALSE,BFALSE);} } } 
{ /* Ieee/string.scm 1579 */
long BgL_arg1970z00_2346;long BgL_arg1971z00_2347;
BgL_arg1970z00_2346 = 
(
(long)(BgL_iz00_2336)+((long)1)); 
BgL_arg1971z00_2347 = 
(BgL_jz00_2337+((long)2)); 
{ 
long BgL_jz00_12981;int BgL_iz00_12979;
BgL_iz00_12979 = 
(int)(BgL_arg1970z00_2346); 
BgL_jz00_12981 = BgL_arg1971z00_2347; 
BgL_jz00_2337 = BgL_jz00_12981; 
BgL_iz00_2336 = BgL_iz00_12979; 
goto BgL_zc3z04anonymousza31965ze3z87_2338;} } } } } } } } } } } } 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_strings_6_7z00()
{
{ /* Ieee/string.scm 18 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string4479z00zz__r4_strings_6_7z00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string4479z00zz__r4_strings_6_7z00));} 

}

#ifdef __cplusplus
}
#endif
