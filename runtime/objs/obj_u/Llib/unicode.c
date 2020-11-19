/*===========================================================================*/
/*   (Llib/unicode.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/unicode.scm -indent -o objs/obj_u/Llib/unicode.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62isozd2latinzd2ze3utf8z12z93zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_z62ucs2zd2substringzb0zz__unicodez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol4189z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl__utf8zd2stringzf3z21zz__unicodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_ucs2zd2stringzd2lengthz00zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2upcasez12z12zz__unicodez00(obj_t);
	extern obj_t c_ucs2_string_copy(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_subucs2zd2stringzd2urz00zz__unicodez00(obj_t, int,
		int);
	static obj_t BGl_symbol4196z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_z62utf8zd2stringzd2appendza2zc0zz__unicodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(obj_t);
	static obj_t BGl__makezd2ucs2zd2stringz00zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__unicodez00 = BUNSPEC;
	BGL_EXPORTED_DECL long BGl_utf8zd2stringzd2lengthz00zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_ucs2zd2stringzd2ze3utf8zd2stringz31zz__unicodez00(obj_t);
	static obj_t BGl_z62ucs2zd2stringze3zd3zf3z73zz__unicodez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_utf8zd2stringzd2minimalzd2charsetzd2zz__unicodez00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2fillz12z12zz__unicodez00(obj_t,
		ucs2_t);
	extern bool_t ucs2_string_cige(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzc3zf3ze2zz__unicodez00(obj_t,
		obj_t);
	extern obj_t ucs2_string_append(obj_t, obj_t);
	static obj_t BGl_z62utf8zd2charzd2siza7ezc5zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_utf8zd2collapsez12zc0zz__unicodez00(obj_t, long, obj_t,
		obj_t);
	extern bool_t ucs2_string_cigt(obj_t, obj_t);
	static obj_t BGl_z62utf8zd2ze3isozd2latinz12z93zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_z62ucs2zd2stringzd2appendz62zz__unicodez00(obj_t, obj_t);
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzc3zd3zf3z31zz__unicodez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd3zf3zf2zz__unicodez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_utf8zd2stringzd2ze3ucs2zd2stringz31zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_utf8zd2stringzf3z21zz__unicodez00(obj_t, bool_t);
	BGL_EXPORTED_DECL obj_t BGl_inversezd2utf8zd2tablez00zz__unicodez00(obj_t);
	static obj_t BGl_z62ucs2zd2stringzd2refzd2urzb0zz__unicodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__unicodez00();
	BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3cp1252z12z23zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cp1252zd2ze3utf8z12z23zz__unicodez00(obj_t);
	static obj_t BGl_z62utf8zd2stringzd2appendz62zz__unicodez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringze3zf3zc2zz__unicodez00(obj_t,
		obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2substringzd2zz__unicodez00(obj_t, int,
		int);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern bool_t ucs2_strcmp(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_ucs2zd2stringzd2cizc3zd3zf3ze3zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__unicodez00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_objectzd2initzd2zz__unicodez00();
	BGL_EXPORTED_DECL obj_t
		BGl_ucs2zd2stringzd2minimalzd2charsetzd2zz__unicodez00(obj_t);
	extern bool_t ucs2_strcicmp(obj_t, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringze3zd3zf3z11zz__unicodez00(obj_t,
		obj_t);
	extern bool_t ucs2_string_cile(obj_t, obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	extern bool_t ucs2_string_cilt(obj_t, obj_t);
	static obj_t BGl__utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00(obj_t,
		obj_t);
	static obj_t BGl_cp1252zd2invzd2zz__unicodez00 = BUNSPEC;
	BGL_EXPORTED_DECL long BGl_utf8zd2charzd2siza7eza7zz__unicodez00(unsigned
		char);
	BGL_EXPORTED_DECL obj_t BGl_utf8zd2stringzd2appendza2za2zz__unicodez00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl__utf8zd2normaliza7ezd2utf16za7zz__unicodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2ucs2zd2stringz00zz__unicodez00(int,
		ucs2_t);
	BGL_EXPORTED_DECL bool_t
		BGl_ucs2zd2stringzd2cize3zd3zf3zc3zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_z62utf8zd2stringzd2minimalzd2charsetzb0zz__unicodez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL ucs2_t BGl_ucs2zd2stringzd2refz00zz__unicodez00(obj_t, int);
	static obj_t BGl_z62ucs2zd2stringzd2refz62zz__unicodez00(obj_t, obj_t, obj_t);
	static obj_t BGl_errorzd2toozd2shortze70ze7zz__unicodez00(int, obj_t, obj_t);
	static obj_t BGl_list4100z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4101z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4102z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4103z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4104z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__unicodez00();
	static obj_t BGl_8bitszd2invzd2zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4105z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4106z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4107z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4108z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4109z00zz__unicodez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2upcasez00zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd2cizc3zf3z30zz__unicodez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze38bitsz31zz__unicodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_8bitszd2ze3utf8z31zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_list4110z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4111z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4112z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4113z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4114z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_z62utf8zd2ze3isozd2latinzd215z53zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_list4116z00zz__unicodez00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd2cizd3zf3z20zz__unicodez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2setz12z12zz__unicodez00(obj_t,
		int, ucs2_t);
	static obj_t BGl_z62utf8zd2ze3isozd2latinzd215z12z41zz__unicodez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2substringzd2urz00zz__unicodez00(obj_t, int,
		int);
	extern obj_t make_string(long, unsigned char);
	static obj_t BGl_z62ucs2zd2stringzf3z43zz__unicodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_utf8zd2stringzd2indexzd2ze3stringzd2indexze3zz__unicodez00(obj_t, long);
	static obj_t BGl_z62subucs2zd2stringzd2urz62zz__unicodez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62utf8zd2stringzd2indexzd2ze3stringzd2indexz81zz__unicodez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62listzd2ze3ucs2zd2stringz81zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_cp1252z00zz__unicodez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_utf8zd2stringzd2refz00zz__unicodez00(obj_t, long);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzd2cize3zf3z10zz__unicodez00(obj_t,
		obj_t);
	static obj_t BGl_z62ucs2zd2stringzd2setzd2urz12za2zz__unicodez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze38bitsz12z23zz__unicodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_8bitszd2ze3utf8z12z23zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_z62utf8zd2stringzd2refz62zz__unicodez00(obj_t, obj_t, obj_t);
	extern obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2ze3listze3zz__unicodez00(obj_t);
	static obj_t BGl_z62ucs2zd2stringzd2downcasez62zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_z62ucs2zd2stringzd2minimalzd2charsetzb0zz__unicodez00(obj_t,
		obj_t);
	static obj_t BGl_z62ucs2zd2stringzd2fillz12z70zz__unicodez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2minimalzd2charsetz00zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2copyz00zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3cp1252z31zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cp1252zd2ze3utf8z31zz__unicodez00(obj_t);
	static obj_t BGl_list4076z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4077z00zz__unicodez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2downcasez00zz__unicodez00(obj_t);
	static obj_t BGl_list4078z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4079z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_z62asciizd2stringzf3z43zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_list4080z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4081z00zz__unicodez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_isozd2latinzd2ze3utf8ze3zz__unicodez00(obj_t);
	static obj_t BGl_list4082z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4083z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4084z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4085z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4086z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4087z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4088z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_z62isozd2latinzd2ze3utf8z81zz__unicodez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2appendz00zz__unicodez00(obj_t);
	static obj_t BGl_list4089z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_vector4115z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_z62ucs2zd2stringzd2cizc3zd3zf3z81zz__unicodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62ucs2zd2stringzd2cizc3zf3z52zz__unicodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_8bitszd2invzd2latinzd215zd2zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4090z00zz__unicodez00 = BUNSPEC;
	BGL_EXPORTED_DECL ucs2_t BGl_ucs2zd2stringzd2refzd2urzd2zz__unicodez00(obj_t,
		int);
	static obj_t BGl_list4091z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_makezd2tablezd2entryze70ze7zz__unicodez00(obj_t, long);
	static obj_t BGl_list4092z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4093z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4094z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4095z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4096z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4097z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4098z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_list4099z00zz__unicodez00 = BUNSPEC;
	static long BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(obj_t, long, obj_t);
	static long BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_utf8zd2stringzd2appendz00zz__unicodez00(obj_t,
		obj_t);
	extern obj_t string_for_read(obj_t);
	static obj_t BGl_z62ucs2zd2stringzd2lengthz62zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_z62ucs2zd2stringzd2cizd3zf3z42zz__unicodez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__unicodez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62ucs2zd2stringzd2setz12z70zz__unicodez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62subucs2zd2stringzb0zz__unicodez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t ucs2_string_to_utf8_string(obj_t);
	static obj_t BGl_z628bitszd2ze3utf8z53zz__unicodez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62utf8zd2ze38bitsz53zz__unicodez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62ucs2zd2stringzd2cize3zf3z72zz__unicodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62utf8zd2stringzd2lengthz62zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_list4199z00zz__unicodez00 = BUNSPEC;
	extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_EXPORTED_DECL obj_t
		BGl_utf8zd2ze3isozd2latinzd215z12z23zz__unicodez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3isozd2latinze3zz__unicodez00(obj_t);
	static obj_t BGl_z62utf8zd2ze3isozd2latinz81zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_addzd2tablezd2entryze70ze7zz__unicodez00(obj_t, obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_utf8zd2normaliza7ezd2utf16za7zz__unicodez00(obj_t,
		bool_t, long, long);
	static obj_t BGl_z62ucs2zd2stringzd2copyz62zz__unicodez00(obj_t, obj_t);
	extern obj_t utf8_string_to_ucs2_string(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__unicodez00();
	BGL_EXPORTED_DECL obj_t
		BGl_ucs2zd2stringzd2setzd2urz12zc0zz__unicodez00(obj_t, int, ucs2_t);
	extern long bgl_list_length(obj_t);
	static obj_t BGl_z62ucs2zd2stringzd2cize3zd3zf3za1zz__unicodez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__unicodez00();
	extern ucs2_t ucs2_tolower(ucs2_t);
	static obj_t BGl_z62inversezd2utf8zd2tablez62zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__unicodez00();
	BGL_EXPORTED_DECL obj_t BGl_ucs2zd2stringzd2zz__unicodez00(obj_t);
	static obj_t BGl_z62ucs2zd2stringzc3zf3z80zz__unicodez00(obj_t, obj_t, obj_t);
	extern bool_t ucs2_string_ge(obj_t, obj_t);
	extern obj_t c_subucs2_string(obj_t, int, int);
	extern bool_t ucs2_string_gt(obj_t, obj_t);
	static obj_t BGl_z62ucs2zd2stringzd3zf3z90zz__unicodez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62ucs2zd2stringzd2ze3utf8zd2stringz53zz__unicodez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_stringzd2indexzd2ze3utf8zd2stringzd2indexze3zz__unicodez00(obj_t, long);
	BGL_EXPORTED_DECL obj_t
		BGl_ucs2zd2stringzd2downcasez12z12zz__unicodez00(obj_t);
	static obj_t
		BGl_z62stringzd2indexzd2ze3utf8zd2stringzd2indexz81zz__unicodez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00(obj_t, long, obj_t,
		obj_t);
	static obj_t BGl__utf8zd2substringzd2zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_z62cp1252zd2ze3utf8z12z41zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_z62utf8zd2ze3cp1252z12z41zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_z62ucs2zd2stringzd2upcasez12z70zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_z62ucs2zd2stringze3zf3za0zz__unicodez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_isozd2latinzd2ze3utf8z12zf1zz__unicodez00(obj_t);
	static obj_t BGl_z62ucs2zd2substringzd2urz62zz__unicodez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_tablezd2ze38bitsze70zd6zz__unicodez00(obj_t, obj_t, obj_t,
		int, obj_t, obj_t, long, long);
	BGL_EXPORTED_DECL obj_t BGl_subucs2zd2stringzd2zz__unicodez00(obj_t, int,
		int);
	static obj_t BGl_z62stringzd2minimalzd2charsetz62zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00(obj_t, obj_t,
		long, obj_t);
	static obj_t BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(obj_t, obj_t, int,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_utf8zd2ze3isozd2latinzd215z31zz__unicodez00(obj_t);
	extern ucs2_t ucs2_toupper(ucs2_t);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_vector4198z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_z62utf8zd2stringzd2ze3ucs2zd2stringz53zz__unicodez00(obj_t,
		obj_t);
	static obj_t BGl_z62ucs2zd2stringzd2ze3listz81zz__unicodez00(obj_t, obj_t);
	extern obj_t make_ucs2_string(int, ucs2_t);
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	static obj_t BGl_loopze70ze7zz__unicodez00(long, long, obj_t, long);
	static obj_t BGl_loopze71ze7zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_loopze72ze7zz__unicodez00(obj_t);
	static obj_t BGl_z628bitszd2ze3utf8z12z41zz__unicodez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62utf8zd2ze38bitsz12z41zz__unicodez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_asciizd2stringzf3z21zz__unicodez00(obj_t);
	static obj_t BGl_z62ucs2zd2stringzd2downcasez12z70zz__unicodez00(obj_t,
		obj_t);
	extern bool_t ucs2_string_le(obj_t, obj_t);
	static obj_t BGl_symbol4231z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_symbol4153z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_symbol4235z00zz__unicodez00 = BUNSPEC;
	extern bool_t ucs2_string_lt(obj_t, obj_t);
	static obj_t BGl_symbol4237z00zz__unicodez00 = BUNSPEC;
	static obj_t BGl_symbol4156z00zz__unicodez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_utf8zd2ze3isozd2latinz12zf1zz__unicodez00(obj_t);
	static obj_t BGl_z62cp1252zd2ze3utf8z53zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_z62utf8zd2ze3cp1252z53zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_z62ucs2zd2stringzd2upcasez62zz__unicodez00(obj_t, obj_t);
	static obj_t BGl_z62ucs2zd2stringzc3zd3zf3z53zz__unicodez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_utf8zd2substringzd2zz__unicodez00(obj_t, long,
		long);
	extern obj_t make_string_sans_fill(long);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2stringzf3z21zz__unicodez00(obj_t);
	static obj_t BGl_z62ucs2zd2stringzb0zz__unicodez00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2lengthzd2envzd2zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4241z00,
		BGl_z62ucs2zd2stringzd2lengthz62zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2upcasez12zd2envzc0zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4242z00,
		BGl_z62ucs2zd2stringzd2upcasez12z70zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2ze3ucs2zd2stringzd2envz31zz__unicodez00,
		BgL_bgl_za762listza7d2za7e3ucs4243za7,
		BGl_z62listzd2ze3ucs2zd2stringz81zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_utf8zd2stringzd2refzd2envzd2zz__unicodez00,
		BgL_bgl_za762utf8za7d2string4244z00,
		BGl_z62utf8zd2stringzd2refz62zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_8bitszd2ze3utf8z12zd2envzf1zz__unicodez00,
		BgL_bgl_za7628bitsza7d2za7e3ut4245za7,
		BGl_z628bitszd2ze3utf8z12z41zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_utf8zd2ze38bitsz12zd2envzf1zz__unicodez00,
		BgL_bgl_za762utf8za7d2za7e38bi4246za7,
		BGl_z62utf8zd2ze38bitsz12z41zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2downcasez12zd2envzc0zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4247z00,
		BGl_z62ucs2zd2stringzd2downcasez12z70zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cp1252zd2ze3utf8z12zd2envzf1zz__unicodez00,
		BgL_bgl_za762cp1252za7d2za7e3u4248za7,
		BGl_z62cp1252zd2ze3utf8z12z41zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_utf8zd2ze3cp1252z12zd2envzf1zz__unicodez00,
		BgL_bgl_za762utf8za7d2za7e3cp14249za7,
		BGl_z62utf8zd2ze3cp1252z12z41zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2cizd3zf3zd2envzf2zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4250z00,
		BGl_z62ucs2zd2stringzd2cizd3zf3z42zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isozd2latinzd2ze3utf8z12zd2envz23zz__unicodez00,
		BgL_bgl_za762isoza7d2latinza7d4251za7,
		BGl_z62isozd2latinzd2ze3utf8z12z93zz__unicodez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_subucs2zd2stringzd2envz00zz__unicodez00,
		BgL_bgl_za762subucs2za7d2str4252z00,
		BGl_z62subucs2zd2stringzb0zz__unicodez00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string4117z00zz__unicodez00,
		BgL_bgl_string4117za700za7za7_4253za7, "€", 3);
	      DEFINE_STRING(BGl_string4118z00zz__unicodez00,
		BgL_bgl_string4118za700za7za7_4254za7, "", 0);
	      DEFINE_STRING(BGl_string4119z00zz__unicodez00,
		BgL_bgl_string4119za700za7za7_4255za7, "‚", 3);
	      DEFINE_STRING(BGl_string4200z00zz__unicodez00,
		BgL_bgl_string4200za700za7za7_4256za7, "&utf8-char-size", 15);
	      DEFINE_STRING(BGl_string4201z00zz__unicodez00,
		BgL_bgl_string4201za700za7za7_4257za7, "bchar", 5);
	      DEFINE_STRING(BGl_string4120z00zz__unicodez00,
		BgL_bgl_string4120za700za7za7_4258za7, "ƒ", 2);
	      DEFINE_STRING(BGl_string4202z00zz__unicodez00,
		BgL_bgl_string4202za700za7za7_4259za7, "&utf8-string-length", 19);
	      DEFINE_STRING(BGl_string4121z00zz__unicodez00,
		BgL_bgl_string4121za700za7za7_4260za7, "„", 3);
	      DEFINE_STRING(BGl_string4203z00zz__unicodez00,
		BgL_bgl_string4203za700za7za7_4261za7, "&utf8-string-ref", 16);
	      DEFINE_STRING(BGl_string4122z00zz__unicodez00,
		BgL_bgl_string4122za700za7za7_4262za7, "…", 3);
	      DEFINE_STRING(BGl_string4204z00zz__unicodez00,
		BgL_bgl_string4204za700za7za7_4263za7, "&utf8-string-index->string-index",
		32);
	      DEFINE_STRING(BGl_string4123z00zz__unicodez00,
		BgL_bgl_string4123za700za7za7_4264za7, "†", 3);
	      DEFINE_STRING(BGl_string4205z00zz__unicodez00,
		BgL_bgl_string4205za700za7za7_4265za7, "&string-index->utf8-string-index",
		32);
	      DEFINE_STRING(BGl_string4124z00zz__unicodez00,
		BgL_bgl_string4124za700za7za7_4266za7, "‡", 3);
	      DEFINE_STRING(BGl_string4206z00zz__unicodez00,
		BgL_bgl_string4206za700za7za7_4267za7, "_utf8-string-append-fill!", 25);
	      DEFINE_STRING(BGl_string4125z00zz__unicodez00,
		BgL_bgl_string4125za700za7za7_4268za7, "ˆ", 2);
	      DEFINE_STRING(BGl_string4207z00zz__unicodez00,
		BgL_bgl_string4207za700za7za7_4269za7, "&utf8-string-append", 19);
	      DEFINE_STRING(BGl_string4126z00zz__unicodez00,
		BgL_bgl_string4126za700za7za7_4270za7, "‰", 3);
	      DEFINE_STRING(BGl_string4208z00zz__unicodez00,
		BgL_bgl_string4208za700za7za7_4271za7, "_utf8-substring", 15);
	      DEFINE_STRING(BGl_string4127z00zz__unicodez00,
		BgL_bgl_string4127za700za7za7_4272za7, "Š", 2);
	      DEFINE_STRING(BGl_string4209z00zz__unicodez00,
		BgL_bgl_string4209za700za7za7_4273za7, "utf8-substring", 14);
	      DEFINE_STRING(BGl_string4128z00zz__unicodez00,
		BgL_bgl_string4128za700za7za7_4274za7, "‹", 3);
	      DEFINE_STRING(BGl_string4129z00zz__unicodez00,
		BgL_bgl_string4129za700za7za7_4275za7, "Œ", 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2upcasezd2envzd2zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4276z00,
		BGl_z62ucs2zd2stringzd2upcasez62zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzc3zd3zf3zd2envze3zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4277z00,
		BGl_z62ucs2zd2stringzc3zd3zf3z53zz__unicodez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4210z00zz__unicodez00,
		BgL_bgl_string4210za700za7za7_4278za7, "Illegal start index \"", 21);
	      DEFINE_STRING(BGl_string4211z00zz__unicodez00,
		BgL_bgl_string4211za700za7za7_4279za7, "\"", 1);
	      DEFINE_STRING(BGl_string4130z00zz__unicodez00,
		BgL_bgl_string4130za700za7za7_4280za7, "Ž", 2);
	      DEFINE_STRING(BGl_string4212z00zz__unicodez00,
		BgL_bgl_string4212za700za7za7_4281za7, "Illegal end index \"", 19);
	      DEFINE_STRING(BGl_string4131z00zz__unicodez00,
		BgL_bgl_string4131za700za7za7_4282za7, "‘", 3);
	      DEFINE_STRING(BGl_string4213z00zz__unicodez00,
		BgL_bgl_string4213za700za7za7_4283za7,
		"Illegal character \"~x\" at index ~a", 34);
	      DEFINE_STRING(BGl_string4132z00zz__unicodez00,
		BgL_bgl_string4132za700za7za7_4284za7, "’", 3);
	      DEFINE_STRING(BGl_string4214z00zz__unicodez00,
		BgL_bgl_string4214za700za7za7_4285za7, "utf8->8bits", 11);
	      DEFINE_STRING(BGl_string4133z00zz__unicodez00,
		BgL_bgl_string4133za700za7za7_4286za7, "“", 3);
	      DEFINE_STRING(BGl_string4215z00zz__unicodez00,
		BgL_bgl_string4215za700za7za7_4287za7, "String too short", 16);
	      DEFINE_STRING(BGl_string4134z00zz__unicodez00,
		BgL_bgl_string4134za700za7za7_4288za7, "”", 3);
	      DEFINE_STRING(BGl_string4216z00zz__unicodez00,
		BgL_bgl_string4216za700za7za7_4289za7, "Cannot encode at index ", 23);
	      DEFINE_STRING(BGl_string4135z00zz__unicodez00,
		BgL_bgl_string4135za700za7za7_4290za7, "•", 3);
	      DEFINE_STRING(BGl_string4217z00zz__unicodez00,
		BgL_bgl_string4217za700za7za7_4291za7, "&utf8->8bits", 12);
	      DEFINE_STRING(BGl_string4136z00zz__unicodez00,
		BgL_bgl_string4136za700za7za7_4292za7, "–", 3);
	      DEFINE_STRING(BGl_string4218z00zz__unicodez00,
		BgL_bgl_string4218za700za7za7_4293za7, "&utf8->8bits!", 13);
	      DEFINE_STRING(BGl_string4137z00zz__unicodez00,
		BgL_bgl_string4137za700za7za7_4294za7, "—", 3);
	      DEFINE_STRING(BGl_string4219z00zz__unicodez00,
		BgL_bgl_string4219za700za7za7_4295za7, "&utf8->iso-latin", 16);
	      DEFINE_STRING(BGl_string4138z00zz__unicodez00,
		BgL_bgl_string4138za700za7za7_4296za7, "˜", 2);
	      DEFINE_STRING(BGl_string4139z00zz__unicodez00,
		BgL_bgl_string4139za700za7za7_4297za7, "™", 3);
	      DEFINE_STRING(BGl_string4220z00zz__unicodez00,
		BgL_bgl_string4220za700za7za7_4298za7, "&utf8->iso-latin!", 17);
	      DEFINE_STRING(BGl_string4221z00zz__unicodez00,
		BgL_bgl_string4221za700za7za7_4299za7, "&utf8->iso-latin-15", 19);
	      DEFINE_STRING(BGl_string4140z00zz__unicodez00,
		BgL_bgl_string4140za700za7za7_4300za7, "š", 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2substringzd2urzd2envzd2zz__unicodez00,
		BgL_bgl_za762ucs2za7d2substr4301z00,
		BGl_z62ucs2zd2substringzd2urz62zz__unicodez00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string4222z00zz__unicodez00,
		BgL_bgl_string4222za700za7za7_4302za7, "&utf8->iso-latin-15!", 20);
	      DEFINE_STRING(BGl_string4141z00zz__unicodez00,
		BgL_bgl_string4141za700za7za7_4303za7, "›", 3);
	      DEFINE_STRING(BGl_string4223z00zz__unicodez00,
		BgL_bgl_string4223za700za7za7_4304za7, "&utf8->cp1252", 13);
	      DEFINE_STRING(BGl_string4142z00zz__unicodez00,
		BgL_bgl_string4142za700za7za7_4305za7, "œ", 2);
	      DEFINE_STRING(BGl_string4224z00zz__unicodez00,
		BgL_bgl_string4224za700za7za7_4306za7, "&utf8->cp1252!", 14);
	      DEFINE_STRING(BGl_string4143z00zz__unicodez00,
		BgL_bgl_string4143za700za7za7_4307za7, "ž", 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2ze3isozd2latinz12zd2envz23zz__unicodez00,
		BgL_bgl_za762utf8za7d2za7e3iso4308za7,
		BGl_z62utf8zd2ze3isozd2latinz12z93zz__unicodez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4225z00zz__unicodez00,
		BgL_bgl_string4225za700za7za7_4309za7, "&8bits->utf8", 12);
	      DEFINE_STRING(BGl_string4144z00zz__unicodez00,
		BgL_bgl_string4144za700za7za7_4310za7, "Ÿ", 2);
	      DEFINE_STRING(BGl_string4226z00zz__unicodez00,
		BgL_bgl_string4226za700za7za7_4311za7, "&8bits->utf8!", 13);
	      DEFINE_STRING(BGl_string4145z00zz__unicodez00,
		BgL_bgl_string4145za700za7za7_4312za7, "/tmp/4.4a/runtime/Llib/unicode.scm",
		34);
	      DEFINE_STRING(BGl_string4227z00zz__unicodez00,
		BgL_bgl_string4227za700za7za7_4313za7, "&iso-latin->utf8", 16);
	      DEFINE_STRING(BGl_string4146z00zz__unicodez00,
		BgL_bgl_string4146za700za7za7_4314za7, "_make-ucs2-string", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2stringzd2indexzd2ze3stringzd2indexzd2envz31zz__unicodez00,
		BgL_bgl_za762utf8za7d2string4315z00,
		BGl_z62utf8zd2stringzd2indexzd2ze3stringzd2indexz81zz__unicodez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4228z00zz__unicodez00,
		BgL_bgl_string4228za700za7za7_4316za7, "&iso-latin->utf8!", 17);
	      DEFINE_STRING(BGl_string4147z00zz__unicodez00,
		BgL_bgl_string4147za700za7za7_4317za7, "bint", 4);
	      DEFINE_STRING(BGl_string4229z00zz__unicodez00,
		BgL_bgl_string4229za700za7za7_4318za7, "&cp1252->utf8", 13);
	      DEFINE_STRING(BGl_string4148z00zz__unicodez00,
		BgL_bgl_string4148za700za7za7_4319za7, "bucs2", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2appendzd2envzd2zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4320z00, va_generic_entry,
		BGl_z62ucs2zd2stringzd2appendz62zz__unicodez00, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string4149z00zz__unicodez00,
		BgL_bgl_string4149za700za7za7_4321za7, "&ucs2-string-length", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2cize3zf3zd2envzc2zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4322z00,
		BGl_z62ucs2zd2stringzd2cize3zf3z72zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2stringzd2lengthzd2envzd2zz__unicodez00,
		BgL_bgl_za762utf8za7d2string4323z00,
		BGl_z62utf8zd2stringzd2lengthz62zz__unicodez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4230z00zz__unicodez00,
		BgL_bgl_string4230za700za7za7_4324za7, "&cp1252->utf8!", 14);
	      DEFINE_STRING(BGl_string4150z00zz__unicodez00,
		BgL_bgl_string4150za700za7za7_4325za7, "ucs2string", 10);
	      DEFINE_STRING(BGl_string4232z00zz__unicodez00,
		BgL_bgl_string4232za700za7za7_4326za7, "latin1", 6);
	      DEFINE_STRING(BGl_string4151z00zz__unicodez00,
		BgL_bgl_string4151za700za7za7_4327za7, "index out of range [0..", 23);
	      DEFINE_STRING(BGl_string4233z00zz__unicodez00,
		BgL_bgl_string4233za700za7za7_4328za7, "&string-minimal-charset", 23);
	      DEFINE_STRING(BGl_string4152z00zz__unicodez00,
		BgL_bgl_string4152za700za7za7_4329za7, "]", 1);
	      DEFINE_STRING(BGl_string4234z00zz__unicodez00,
		BgL_bgl_string4234za700za7za7_4330za7, "&utf8-string-minimal-charset", 28);
	      DEFINE_STRING(BGl_string4154z00zz__unicodez00,
		BgL_bgl_string4154za700za7za7_4331za7, "ucs2-string-ref", 15);
	      DEFINE_STRING(BGl_string4236z00zz__unicodez00,
		BgL_bgl_string4236za700za7za7_4332za7, "ucs2", 4);
	      DEFINE_STRING(BGl_string4155z00zz__unicodez00,
		BgL_bgl_string4155za700za7za7_4333za7, "&ucs2-string-ref", 16);
	      DEFINE_STRING(BGl_string4238z00zz__unicodez00,
		BgL_bgl_string4238za700za7za7_4334za7, "utf16", 5);
	      DEFINE_STRING(BGl_string4157z00zz__unicodez00,
		BgL_bgl_string4157za700za7za7_4335za7, "ucs2-string-set!", 16);
	      DEFINE_STRING(BGl_string4239z00zz__unicodez00,
		BgL_bgl_string4239za700za7za7_4336za7, "&ucs2-string-minimal-charset", 28);
	      DEFINE_STRING(BGl_string4158z00zz__unicodez00,
		BgL_bgl_string4158za700za7za7_4337za7, "&ucs2-string-set!", 17);
	      DEFINE_STRING(BGl_string4159z00zz__unicodez00,
		BgL_bgl_string4159za700za7za7_4338za7, "&ucs2-string-ref-ur", 19);
	      DEFINE_STRING(BGl_string4240z00zz__unicodez00,
		BgL_bgl_string4240za700za7za7_4339za7, "__unicode", 9);
	      DEFINE_STRING(BGl_string4160z00zz__unicodez00,
		BgL_bgl_string4160za700za7za7_4340za7, "&ucs2-string-set-ur!", 20);
	      DEFINE_STRING(BGl_string4161z00zz__unicodez00,
		BgL_bgl_string4161za700za7za7_4341za7, "&ucs2-string=?", 14);
	      DEFINE_STRING(BGl_string4162z00zz__unicodez00,
		BgL_bgl_string4162za700za7za7_4342za7, "&ucs2-string-ci=?", 17);
	      DEFINE_STRING(BGl_string4163z00zz__unicodez00,
		BgL_bgl_string4163za700za7za7_4343za7, "&ucs2-string<?", 14);
	      DEFINE_STRING(BGl_string4164z00zz__unicodez00,
		BgL_bgl_string4164za700za7za7_4344za7, "&ucs2-string>?", 14);
	      DEFINE_STRING(BGl_string4165z00zz__unicodez00,
		BgL_bgl_string4165za700za7za7_4345za7, "&ucs2-string<=?", 15);
	      DEFINE_STRING(BGl_string4166z00zz__unicodez00,
		BgL_bgl_string4166za700za7za7_4346za7, "&ucs2-string>=?", 15);
	      DEFINE_STRING(BGl_string4167z00zz__unicodez00,
		BgL_bgl_string4167za700za7za7_4347za7, "&ucs2-string-ci<?", 17);
	      DEFINE_STRING(BGl_string4168z00zz__unicodez00,
		BgL_bgl_string4168za700za7za7_4348za7, "&ucs2-string-ci>?", 17);
	      DEFINE_STRING(BGl_string4169z00zz__unicodez00,
		BgL_bgl_string4169za700za7za7_4349za7, "&ucs2-string-ci<=?", 18);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cp1252zd2ze3utf8zd2envze3zz__unicodez00,
		BgL_bgl_za762cp1252za7d2za7e3u4350za7,
		BGl_z62cp1252zd2ze3utf8z53zz__unicodez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_utf8zd2ze3cp1252zd2envze3zz__unicodez00,
		BgL_bgl_za762utf8za7d2za7e3cp14351za7,
		BGl_z62utf8zd2ze3cp1252z53zz__unicodez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4170z00zz__unicodez00,
		BgL_bgl_string4170za700za7za7_4352za7, "&ucs2-string-ci>=?", 18);
	      DEFINE_STRING(BGl_string4171z00zz__unicodez00,
		BgL_bgl_string4171za700za7za7_4353za7, "subucs2-string", 14);
	      DEFINE_STRING(BGl_string4172z00zz__unicodez00,
		BgL_bgl_string4172za700za7za7_4354za7, "Illegal index", 13);
	      DEFINE_STRING(BGl_string4173z00zz__unicodez00,
		BgL_bgl_string4173za700za7za7_4355za7, "&subucs2-string", 15);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_utf8zd2stringzf3zd2envzf3zz__unicodez00,
		BgL_bgl__utf8za7d2stringza7f4356z00, opt_generic_entry,
		BGl__utf8zd2stringzf3z21zz__unicodez00, BFALSE, -1);
	      DEFINE_STRING(BGl_string4174z00zz__unicodez00,
		BgL_bgl_string4174za700za7za7_4357za7, "&subucs2-string-ur", 18);
	      DEFINE_STRING(BGl_string4175z00zz__unicodez00,
		BgL_bgl_string4175za700za7za7_4358za7, "&ucs2-substring", 15);
	      DEFINE_STRING(BGl_string4176z00zz__unicodez00,
		BgL_bgl_string4176za700za7za7_4359za7, "&ucs2-substring-ur", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_asciizd2stringzf3zd2envzf3zz__unicodez00,
		BgL_bgl_za762asciiza7d2strin4360z00,
		BGl_z62asciizd2stringzf3z43zz__unicodez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4177z00zz__unicodez00,
		BgL_bgl_string4177za700za7za7_4361za7, "&ucs2-string->list", 18);
	      DEFINE_STRING(BGl_string4178z00zz__unicodez00,
		BgL_bgl_string4178za700za7za7_4362za7, "&ucs2-string-copy", 17);
	      DEFINE_STRING(BGl_string4179z00zz__unicodez00,
		BgL_bgl_string4179za700za7za7_4363za7, "&ucs2-string-fill!", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2stringzd2appendzd2fillz12zd2envz12zz__unicodez00,
		BgL_bgl__utf8za7d2stringza7d4364z00, opt_generic_entry,
		BGl__utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2ze3isozd2latinzd215z12zd2envzf1zz__unicodez00,
		BgL_bgl_za762utf8za7d2za7e3iso4365za7,
		BGl_z62utf8zd2ze3isozd2latinzd215z12z41zz__unicodez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4180z00zz__unicodez00,
		BgL_bgl_string4180za700za7za7_4366za7, "&ucs2-string-upcase", 19);
	      DEFINE_STRING(BGl_string4181z00zz__unicodez00,
		BgL_bgl_string4181za700za7za7_4367za7, "&ucs2-string-downcase", 21);
	      DEFINE_STRING(BGl_string4182z00zz__unicodez00,
		BgL_bgl_string4182za700za7za7_4368za7, "&ucs2-string-upcase!", 20);
	      DEFINE_STRING(BGl_string4183z00zz__unicodez00,
		BgL_bgl_string4183za700za7za7_4369za7, "&ucs2-string-downcase!", 22);
	      DEFINE_STRING(BGl_string4184z00zz__unicodez00,
		BgL_bgl_string4184za700za7za7_4370za7, "&ucs2-string->utf8-string", 25);
	      DEFINE_STRING(BGl_string4185z00zz__unicodez00,
		BgL_bgl_string4185za700za7za7_4371za7, "&inverse-utf8-table", 19);
	      DEFINE_STRING(BGl_string4186z00zz__unicodez00,
		BgL_bgl_string4186za700za7za7_4372za7, "vector", 6);
	      DEFINE_STRING(BGl_string4187z00zz__unicodez00,
		BgL_bgl_string4187za700za7za7_4373za7, "&utf8-string->ucs2-string", 25);
	      DEFINE_STRING(BGl_string4188z00zz__unicodez00,
		BgL_bgl_string4188za700za7za7_4374za7, "bstring", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2cizc3zd3zf3zd2envz31zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4375z00,
		BGl_z62ucs2zd2stringzd2cizc3zd3zf3z81zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2ze3isozd2latinzd215zd2envze3zz__unicodez00,
		BgL_bgl_za762utf8za7d2za7e3iso4376za7,
		BGl_z62utf8zd2ze3isozd2latinzd215z53zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2refzd2urzd2envz00zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4377z00,
		BGl_z62ucs2zd2stringzd2refzd2urzb0zz__unicodez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4190z00zz__unicodez00,
		BgL_bgl_string4190za700za7za7_4378za7, "ascii", 5);
	      DEFINE_STRING(BGl_string4191z00zz__unicodez00,
		BgL_bgl_string4191za700za7za7_4379za7, "&ascii-string?", 14);
	      DEFINE_STRING(BGl_string4192z00zz__unicodez00,
		BgL_bgl_string4192za700za7za7_4380za7, "_utf8-string?", 13);
	      DEFINE_STRING(BGl_string4193z00zz__unicodez00,
		BgL_bgl_string4193za700za7za7_4381za7, "_utf8-normalize-utf16", 21);
	      DEFINE_STRING(BGl_string4194z00zz__unicodez00,
		BgL_bgl_string4194za700za7za7_4382za7, "utf8-normalize-utf16", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2ze3listzd2envz31zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4383z00,
		BGl_z62ucs2zd2stringzd2ze3listz81zz__unicodez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4195z00zz__unicodez00,
		BgL_bgl_string4195za700za7za7_4384za7, "Illegal indexes", 15);
	      DEFINE_STRING(BGl_string4197z00zz__unicodez00,
		BgL_bgl_string4197za700za7za7_4385za7, "utf8", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_utf8zd2charzd2siza7ezd2envz75zz__unicodez00,
		BgL_bgl_za762utf8za7d2charza7d4386za7,
		BGl_z62utf8zd2charzd2siza7ezc5zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2stringzd2appendza2zd2envz70zz__unicodez00,
		BgL_bgl_za762utf8za7d2string4387z00, va_generic_entry,
		BGl_z62utf8zd2stringzd2appendza2zc0zz__unicodez00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2substringzd2envz00zz__unicodez00,
		BgL_bgl_za762ucs2za7d2substr4388z00,
		BGl_z62ucs2zd2substringzb0zz__unicodez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2setzd2urz12zd2envz12zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4389z00,
		BGl_z62ucs2zd2stringzd2setzd2urz12za2zz__unicodez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2stringzd2appendzd2envzd2zz__unicodez00,
		BgL_bgl_za762utf8za7d2string4390z00,
		BGl_z62utf8zd2stringzd2appendz62zz__unicodez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_utf8zd2substringzd2envz00zz__unicodez00,
		BgL_bgl__utf8za7d2substrin4391za7, opt_generic_entry,
		BGl__utf8zd2substringzd2zz__unicodez00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2stringzc3zf3zd2envz30zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4392z00,
		BGl_z62ucs2zd2stringzc3zf3z80zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2stringzd2copyzd2envzd2zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4393z00,
		BGl_z62ucs2zd2stringzd2copyz62zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringze3zd3zf3zd2envzc3zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4394z00,
		BGl_z62ucs2zd2stringze3zd3zf3z73zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2indexzd2ze3utf8zd2stringzd2indexzd2envz31zz__unicodez00,
		BgL_bgl_za762stringza7d2inde4395z00,
		BGl_z62stringzd2indexzd2ze3utf8zd2stringzd2indexz81zz__unicodez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2normaliza7ezd2utf16zd2envz75zz__unicodez00,
		BgL_bgl__utf8za7d2normaliza74396z00, opt_generic_entry,
		BGl__utf8zd2normaliza7ezd2utf16za7zz__unicodez00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2stringzd2refzd2envzd2zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4397z00,
		BGl_z62ucs2zd2stringzd2refz62zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2minimalzd2charsetzd2envz00zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4398z00,
		BGl_z62ucs2zd2stringzd2minimalzd2charsetzb0zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2minimalzd2charsetzd2envzd2zz__unicodez00,
		BgL_bgl_za762stringza7d2mini4399z00,
		BGl_z62stringzd2minimalzd2charsetz62zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2stringzd3zf3zd2envz20zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4400z00,
		BGl_z62ucs2zd2stringzd3zf3z90zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2downcasezd2envzd2zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4401z00,
		BGl_z62ucs2zd2stringzd2downcasez62zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inversezd2utf8zd2tablezd2envzd2zz__unicodez00,
		BgL_bgl_za762inverseza7d2utf4402z00,
		BGl_z62inversezd2utf8zd2tablez62zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2setz12zd2envzc0zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4403z00,
		BGl_z62ucs2zd2stringzd2setz12z70zz__unicodez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_isozd2latinzd2ze3utf8zd2envz31zz__unicodez00,
		BgL_bgl_za762isoza7d2latinza7d4404za7,
		BGl_z62isozd2latinzd2ze3utf8z81zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2ucs2zd2stringzd2envzd2zz__unicodez00,
		BgL_bgl__makeza7d2ucs2za7d2s4405z00, opt_generic_entry,
		BGl__makezd2ucs2zd2stringz00zz__unicodez00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2cize3zd3zf3zd2envz11zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4406z00,
		BGl_z62ucs2zd2stringzd2cize3zd3zf3za1zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2stringzd2minimalzd2charsetzd2envz00zz__unicodez00,
		BgL_bgl_za762utf8za7d2string4407z00,
		BGl_z62utf8zd2stringzd2minimalzd2charsetzb0zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2fillz12zd2envzc0zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4408z00,
		BGl_z62ucs2zd2stringzd2fillz12z70zz__unicodez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2stringzd2envz00zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4409z00, va_generic_entry,
		BGl_z62ucs2zd2stringzb0zz__unicodez00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_8bitszd2ze3utf8zd2envze3zz__unicodez00,
		BgL_bgl_za7628bitsza7d2za7e3ut4410za7,
		BGl_z628bitszd2ze3utf8z53zz__unicodez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_utf8zd2ze38bitszd2envze3zz__unicodez00,
		BgL_bgl_za762utf8za7d2za7e38bi4411za7,
		BGl_z62utf8zd2ze38bitsz53zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2stringze3zf3zd2envz10zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4412z00,
		BGl_z62ucs2zd2stringze3zf3za0zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_subucs2zd2stringzd2urzd2envzd2zz__unicodez00,
		BgL_bgl_za762subucs2za7d2str4413z00,
		BGl_z62subucs2zd2stringzd2urz62zz__unicodez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2ze3isozd2latinzd2envz31zz__unicodez00,
		BgL_bgl_za762utf8za7d2za7e3iso4414za7,
		BGl_z62utf8zd2ze3isozd2latinz81zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2ze3utf8zd2stringzd2envze3zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4415z00,
		BGl_z62ucs2zd2stringzd2ze3utf8zd2stringz53zz__unicodez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2stringzf3zd2envzf3zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4416z00,
		BGl_z62ucs2zd2stringzf3z43zz__unicodez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ucs2zd2stringzd2cizc3zf3zd2envze2zz__unicodez00,
		BgL_bgl_za762ucs2za7d2string4417z00,
		BGl_z62ucs2zd2stringzd2cizc3zf3z52zz__unicodez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_utf8zd2stringzd2ze3ucs2zd2stringzd2envze3zz__unicodez00,
		BgL_bgl_za762utf8za7d2string4418z00,
		BGl_z62utf8zd2stringzd2ze3ucs2zd2stringz53zz__unicodez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol4189z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_symbol4196z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_cp1252zd2invzd2zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4100z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4101z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4102z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4103z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4104z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_8bitszd2invzd2zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4105z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4106z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4107z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4108z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4109z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4110z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4111z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4112z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4113z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4114z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4116z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_cp1252z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4076z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4077z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4078z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4079z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4080z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4081z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4082z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4083z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4084z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4085z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4086z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4087z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4088z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4089z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_vector4115z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_8bitszd2invzd2latinzd215zd2zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4090z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4091z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4092z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4093z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4094z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4095z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4096z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4097z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4098z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4099z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_list4199z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_vector4198z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_symbol4231z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_symbol4153z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_symbol4235z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_symbol4237z00zz__unicodez00));
		     ADD_ROOT((void *) (&BGl_symbol4156z00zz__unicodez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__unicodez00(long
		BgL_checksumz00_7307, char *BgL_fromz00_7308)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__unicodez00))
				{
					BGl_requirezd2initializa7ationz75zz__unicodez00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__unicodez00();
					BGl_cnstzd2initzd2zz__unicodez00();
					BGl_importedzd2moduleszd2initz00zz__unicodez00();
					return BGl_toplevelzd2initzd2zz__unicodez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__unicodez00()
	{
		{	/* Llib/unicode.scm 14 */
			BGl_list4079z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 144)), BCHAR(((unsigned char) '-')));
			BGl_list4080z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 145)), BCHAR(((unsigned char) '-')));
			BGl_list4081z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 146)), BCHAR(((unsigned char) '-')));
			BGl_list4082z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 147)), BCHAR(((unsigned char) '-')));
			BGl_list4083z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 148)), BCHAR(((unsigned char) '-')));
			BGl_list4084z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 149)), BCHAR(((unsigned char) '-')));
			BGl_list4085z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 152)), BCHAR(((unsigned char) '`')));
			BGl_list4086z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 153)), BCHAR(((unsigned char) '\'')));
			BGl_list4087z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 154)), BCHAR(((unsigned char) ',')));
			BGl_list4088z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 155)), BCHAR(((unsigned char) '`')));
			BGl_list4089z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 164)), BCHAR(((unsigned char) '.')));
			BGl_list4090z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 167)), BCHAR(((unsigned char) '.')));
			BGl_list4091z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 178)), BCHAR(((unsigned char) '\'')));
			BGl_list4092z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 179)), BCHAR(((unsigned char) '"')));
			BGl_list4093z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 181)), BCHAR(((unsigned char) '`')));
			BGl_list4094z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 187)), BCHAR(((unsigned char) '"')));
			BGl_list4095z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 184)), BCHAR(((unsigned char) '^')));
			BGl_list4096z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 185)), BCHAR(((unsigned char) '<')));
			BGl_list4097z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 186)), BCHAR(((unsigned char) '>')));
			BGl_list4078z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 128)),
				MAKE_YOUNG_PAIR(BGl_list4079z00zz__unicodez00,
					MAKE_YOUNG_PAIR(BGl_list4080z00zz__unicodez00,
						MAKE_YOUNG_PAIR(BGl_list4081z00zz__unicodez00,
							MAKE_YOUNG_PAIR(BGl_list4082z00zz__unicodez00,
								MAKE_YOUNG_PAIR(BGl_list4083z00zz__unicodez00,
									MAKE_YOUNG_PAIR(BGl_list4084z00zz__unicodez00,
										MAKE_YOUNG_PAIR(BGl_list4085z00zz__unicodez00,
											MAKE_YOUNG_PAIR(BGl_list4086z00zz__unicodez00,
												MAKE_YOUNG_PAIR(BGl_list4087z00zz__unicodez00,
													MAKE_YOUNG_PAIR(BGl_list4088z00zz__unicodez00,
														MAKE_YOUNG_PAIR(BGl_list4089z00zz__unicodez00,
															MAKE_YOUNG_PAIR(BGl_list4090z00zz__unicodez00,
																MAKE_YOUNG_PAIR(BGl_list4091z00zz__unicodez00,
																	MAKE_YOUNG_PAIR(BGl_list4092z00zz__unicodez00,
																		MAKE_YOUNG_PAIR
																		(BGl_list4093z00zz__unicodez00,
																			MAKE_YOUNG_PAIR
																			(BGl_list4094z00zz__unicodez00,
																				MAKE_YOUNG_PAIR
																				(BGl_list4095z00zz__unicodez00,
																					MAKE_YOUNG_PAIR
																					(BGl_list4096z00zz__unicodez00,
																						MAKE_YOUNG_PAIR
																						(BGl_list4097z00zz__unicodez00,
																							BNIL))))))))))))))))))));
			BGl_list4099z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 131)), BCHAR(((unsigned char) '*')));
			BGl_list4098z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 129)),
				MAKE_YOUNG_PAIR(BGl_list4099z00zz__unicodez00, BNIL));
			BGl_list4101z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 141)), BCHAR(((unsigned char) '(')));
			BGl_list4102z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 142)), BCHAR(((unsigned char) ')')));
			BGl_list4100z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 130)),
				MAKE_YOUNG_PAIR(BGl_list4101z00zz__unicodez00,
					MAKE_YOUNG_PAIR(BGl_list4102z00zz__unicodez00, BNIL)));
			BGl_list4077z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 226)),
				MAKE_YOUNG_PAIR(BGl_list4078z00zz__unicodez00,
					MAKE_YOUNG_PAIR(BGl_list4098z00zz__unicodez00,
						MAKE_YOUNG_PAIR(BGl_list4100z00zz__unicodez00, BNIL))));
			BGl_list4076z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BGl_list4077z00zz__unicodez00, BNIL);
			BGl_list4106z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 172)), BCHAR(((unsigned char) 164)));
			BGl_list4105z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 130)),
				MAKE_YOUNG_PAIR(BGl_list4101z00zz__unicodez00,
					MAKE_YOUNG_PAIR(BGl_list4102z00zz__unicodez00,
						MAKE_YOUNG_PAIR(BGl_list4106z00zz__unicodez00, BNIL))));
			BGl_list4104z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 226)),
				MAKE_YOUNG_PAIR(BGl_list4078z00zz__unicodez00,
					MAKE_YOUNG_PAIR(BGl_list4098z00zz__unicodez00,
						MAKE_YOUNG_PAIR(BGl_list4105z00zz__unicodez00, BNIL))));
			BGl_list4108z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 147)), BCHAR(((unsigned char) 189)));
			BGl_list4109z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 146)), BCHAR(((unsigned char) 188)));
			BGl_list4110z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 184)), BCHAR(((unsigned char) 190)));
			BGl_list4111z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 161)), BCHAR(((unsigned char) 168)));
			BGl_list4112z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 160)), BCHAR(((unsigned char) 166)));
			BGl_list4113z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 190)), BCHAR(((unsigned char) 184)));
			BGl_list4114z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 189)), BCHAR(((unsigned char) 180)));
			BGl_list4107z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 197)),
				MAKE_YOUNG_PAIR(BGl_list4108z00zz__unicodez00,
					MAKE_YOUNG_PAIR(BGl_list4109z00zz__unicodez00,
						MAKE_YOUNG_PAIR(BGl_list4110z00zz__unicodez00,
							MAKE_YOUNG_PAIR(BGl_list4111z00zz__unicodez00,
								MAKE_YOUNG_PAIR(BGl_list4112z00zz__unicodez00,
									MAKE_YOUNG_PAIR(BGl_list4113z00zz__unicodez00,
										MAKE_YOUNG_PAIR(BGl_list4114z00zz__unicodez00, BNIL))))))));
			BGl_list4103z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BGl_list4104z00zz__unicodez00,
				MAKE_YOUNG_PAIR(BGl_list4107z00zz__unicodez00, BNIL));
			BGl_list4116z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BGl_string4117z00zz__unicodez00,
				MAKE_YOUNG_PAIR(BGl_string4118z00zz__unicodez00,
					MAKE_YOUNG_PAIR(BGl_string4119z00zz__unicodez00,
						MAKE_YOUNG_PAIR(BGl_string4120z00zz__unicodez00,
							MAKE_YOUNG_PAIR(BGl_string4121z00zz__unicodez00,
								MAKE_YOUNG_PAIR(BGl_string4122z00zz__unicodez00,
									MAKE_YOUNG_PAIR(BGl_string4123z00zz__unicodez00,
										MAKE_YOUNG_PAIR(BGl_string4124z00zz__unicodez00,
											MAKE_YOUNG_PAIR(BGl_string4125z00zz__unicodez00,
												MAKE_YOUNG_PAIR(BGl_string4126z00zz__unicodez00,
													MAKE_YOUNG_PAIR(BGl_string4127z00zz__unicodez00,
														MAKE_YOUNG_PAIR(BGl_string4128z00zz__unicodez00,
															MAKE_YOUNG_PAIR(BGl_string4129z00zz__unicodez00,
																MAKE_YOUNG_PAIR(BGl_string4118z00zz__unicodez00,
																	MAKE_YOUNG_PAIR
																	(BGl_string4130z00zz__unicodez00,
																		MAKE_YOUNG_PAIR
																		(BGl_string4118z00zz__unicodez00,
																			MAKE_YOUNG_PAIR
																			(BGl_string4118z00zz__unicodez00,
																				MAKE_YOUNG_PAIR
																				(BGl_string4131z00zz__unicodez00,
																					MAKE_YOUNG_PAIR
																					(BGl_string4132z00zz__unicodez00,
																						MAKE_YOUNG_PAIR
																						(BGl_string4133z00zz__unicodez00,
																							MAKE_YOUNG_PAIR
																							(BGl_string4134z00zz__unicodez00,
																								MAKE_YOUNG_PAIR
																								(BGl_string4135z00zz__unicodez00,
																									MAKE_YOUNG_PAIR
																									(BGl_string4136z00zz__unicodez00,
																										MAKE_YOUNG_PAIR
																										(BGl_string4137z00zz__unicodez00,
																											MAKE_YOUNG_PAIR
																											(BGl_string4138z00zz__unicodez00,
																												MAKE_YOUNG_PAIR
																												(BGl_string4139z00zz__unicodez00,
																													MAKE_YOUNG_PAIR
																													(BGl_string4140z00zz__unicodez00,
																														MAKE_YOUNG_PAIR
																														(BGl_string4141z00zz__unicodez00,
																															MAKE_YOUNG_PAIR
																															(BGl_string4142z00zz__unicodez00,
																																MAKE_YOUNG_PAIR
																																(BGl_string4118z00zz__unicodez00,
																																	MAKE_YOUNG_PAIR
																																	(BGl_string4143z00zz__unicodez00,
																																		MAKE_YOUNG_PAIR
																																		(BGl_string4144z00zz__unicodez00,
																																			BNIL))))))))))))))))))))))))))))))));
			BGl_vector4115z00zz__unicodez00 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_list4116z00zz__unicodez00);
			BGl_symbol4153z00zz__unicodez00 =
				bstring_to_symbol(BGl_string4154z00zz__unicodez00);
			BGl_symbol4156z00zz__unicodez00 =
				bstring_to_symbol(BGl_string4157z00zz__unicodez00);
			BGl_symbol4189z00zz__unicodez00 =
				bstring_to_symbol(BGl_string4190z00zz__unicodez00);
			BGl_symbol4196z00zz__unicodez00 =
				bstring_to_symbol(BGl_string4197z00zz__unicodez00);
			BGl_list4199z00zz__unicodez00 =
				MAKE_YOUNG_PAIR(BINT(((long) 1)), MAKE_YOUNG_PAIR(BINT(((long) 1)),
					MAKE_YOUNG_PAIR(BINT(((long) 1)), MAKE_YOUNG_PAIR(BINT(((long) 1)),
							MAKE_YOUNG_PAIR(BINT(((long) 1)),
								MAKE_YOUNG_PAIR(BINT(((long) 1)),
									MAKE_YOUNG_PAIR(BINT(((long) 1)),
										MAKE_YOUNG_PAIR(BINT(((long) 1)),
											MAKE_YOUNG_PAIR(BINT(((long) 2)),
												MAKE_YOUNG_PAIR(BINT(((long) 2)),
													MAKE_YOUNG_PAIR(BINT(((long) 2)),
														MAKE_YOUNG_PAIR(BINT(((long) 2)),
															MAKE_YOUNG_PAIR(BINT(((long) 2)),
																MAKE_YOUNG_PAIR(BINT(((long) 2)),
																	MAKE_YOUNG_PAIR(BINT(((long) 3)),
																		MAKE_YOUNG_PAIR(BINT(((long) 4)),
																			BNIL))))))))))))))));
			BGl_vector4198z00zz__unicodez00 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_list4199z00zz__unicodez00);
			BGl_symbol4231z00zz__unicodez00 =
				bstring_to_symbol(BGl_string4232z00zz__unicodez00);
			BGl_symbol4235z00zz__unicodez00 =
				bstring_to_symbol(BGl_string4236z00zz__unicodez00);
			return (BGl_symbol4237z00zz__unicodez00 =
				bstring_to_symbol(BGl_string4238z00zz__unicodez00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__unicodez00()
	{
		{	/* Llib/unicode.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__unicodez00()
	{
		{	/* Llib/unicode.scm 14 */
			BGl_8bitszd2invzd2zz__unicodez00 = BGl_list4076z00zz__unicodez00;
			BGl_8bitszd2invzd2latinzd215zd2zz__unicodez00 =
				BGl_list4103z00zz__unicodez00;
			BGl_cp1252z00zz__unicodez00 = BGl_vector4115z00zz__unicodez00;
			return (BGl_cp1252zd2invzd2zz__unicodez00 = BFALSE, BUNSPEC);
		}

	}



/* ucs2-string? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzf3z21zz__unicodez00(obj_t
		BgL_objz00_3)
	{
		{	/* Llib/unicode.scm 222 */
			return UCS2_STRINGP(BgL_objz00_3);
		}

	}



/* &ucs2-string? */
	obj_t BGl_z62ucs2zd2stringzf3z43zz__unicodez00(obj_t BgL_envz00_6913,
		obj_t BgL_objz00_6914)
	{
		{	/* Llib/unicode.scm 222 */
			return BBOOL(BGl_ucs2zd2stringzf3z21zz__unicodez00(BgL_objz00_6914));
		}

	}



/* _make-ucs2-string */
	obj_t BGl__makezd2ucs2zd2stringz00zz__unicodez00(obj_t BgL_env1117z00_7,
		obj_t BgL_opt1116z00_6)
	{
		{	/* Llib/unicode.scm 228 */
			{	/* Llib/unicode.scm 228 */
				obj_t BgL_g1118z00_7291;

				BgL_g1118z00_7291 = VECTOR_REF(BgL_opt1116z00_6, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1116z00_6))
					{
					case ((long) 1):

						{	/* Llib/unicode.scm 229 */
							ucs2_t BgL_fillerz00_7292;

							{	/* Llib/unicode.scm 229 */
								int BgL_tmpz00_7539;

								BgL_tmpz00_7539 =
									(int) (((unsigned char) ((char) (((unsigned char) ' ')))));
								BgL_fillerz00_7292 = BGL_INT_TO_UCS2(BgL_tmpz00_7539);
							}
							{	/* Llib/unicode.scm 228 */

								{	/* Llib/unicode.scm 228 */
									obj_t BgL_res2733z00_7293;

									{	/* Llib/unicode.scm 228 */
										int BgL_kz00_7294;

										{	/* Llib/unicode.scm 228 */
											obj_t BgL_tmpz00_7545;

											if (INTEGERP(BgL_g1118z00_7291))
												{	/* Llib/unicode.scm 228 */
													BgL_tmpz00_7545 = BgL_g1118z00_7291;
												}
											else
												{
													obj_t BgL_auxz00_7548;

													BgL_auxz00_7548 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string4145z00zz__unicodez00,
														BINT(((long) 10077)),
														BGl_string4146z00zz__unicodez00,
														BGl_string4147z00zz__unicodez00, BgL_g1118z00_7291);
													FAILURE(BgL_auxz00_7548, BFALSE, BFALSE);
												}
											BgL_kz00_7294 = CINT(BgL_tmpz00_7545);
										}
										BgL_res2733z00_7293 =
											make_ucs2_string(BgL_kz00_7294, BgL_fillerz00_7292);
									}
									return BgL_res2733z00_7293;
								}
							}
						}
						break;
					case ((long) 2):

						{	/* Llib/unicode.scm 228 */
							obj_t BgL_fillerz00_7295;

							BgL_fillerz00_7295 = VECTOR_REF(BgL_opt1116z00_6, ((long) 1));
							{	/* Llib/unicode.scm 228 */

								{	/* Llib/unicode.scm 228 */
									obj_t BgL_res2734z00_7296;

									{	/* Llib/unicode.scm 228 */
										int BgL_kz00_7297;
										ucs2_t BgL_fillerz00_7298;

										{	/* Llib/unicode.scm 228 */
											obj_t BgL_tmpz00_7555;

											if (INTEGERP(BgL_g1118z00_7291))
												{	/* Llib/unicode.scm 228 */
													BgL_tmpz00_7555 = BgL_g1118z00_7291;
												}
											else
												{
													obj_t BgL_auxz00_7558;

													BgL_auxz00_7558 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string4145z00zz__unicodez00,
														BINT(((long) 10077)),
														BGl_string4146z00zz__unicodez00,
														BGl_string4147z00zz__unicodez00, BgL_g1118z00_7291);
													FAILURE(BgL_auxz00_7558, BFALSE, BFALSE);
												}
											BgL_kz00_7297 = CINT(BgL_tmpz00_7555);
										}
										{	/* Llib/unicode.scm 228 */
											obj_t BgL_tmpz00_7563;

											if (UCS2P(BgL_fillerz00_7295))
												{	/* Llib/unicode.scm 228 */
													BgL_tmpz00_7563 = BgL_fillerz00_7295;
												}
											else
												{
													obj_t BgL_auxz00_7566;

													BgL_auxz00_7566 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string4145z00zz__unicodez00,
														BINT(((long) 10077)),
														BGl_string4146z00zz__unicodez00,
														BGl_string4148z00zz__unicodez00,
														BgL_fillerz00_7295);
													FAILURE(BgL_auxz00_7566, BFALSE, BFALSE);
												}
											BgL_fillerz00_7298 = CUCS2(BgL_tmpz00_7563);
										}
										BgL_res2734z00_7296 =
											make_ucs2_string(BgL_kz00_7297, BgL_fillerz00_7298);
									}
									return BgL_res2734z00_7296;
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



/* make-ucs2-string */
	BGL_EXPORTED_DEF obj_t BGl_makezd2ucs2zd2stringz00zz__unicodez00(int
		BgL_kz00_4, ucs2_t BgL_fillerz00_5)
	{
		{	/* Llib/unicode.scm 228 */
			return make_ucs2_string(BgL_kz00_4, BgL_fillerz00_5);
		}

	}



/* ucs2-string */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2zz__unicodez00(obj_t
		BgL_ucs2sz00_8)
	{
		{	/* Llib/unicode.scm 235 */
			return BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(BgL_ucs2sz00_8);
		}

	}



/* &ucs2-string */
	obj_t BGl_z62ucs2zd2stringzb0zz__unicodez00(obj_t BgL_envz00_6915,
		obj_t BgL_ucs2sz00_6916)
	{
		{	/* Llib/unicode.scm 235 */
			return BGl_ucs2zd2stringzd2zz__unicodez00(BgL_ucs2sz00_6916);
		}

	}



/* ucs2-string-length */
	BGL_EXPORTED_DEF int BGl_ucs2zd2stringzd2lengthz00zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_9)
	{
		{	/* Llib/unicode.scm 241 */
			return UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_9);
		}

	}



/* &ucs2-string-length */
	obj_t BGl_z62ucs2zd2stringzd2lengthz62zz__unicodez00(obj_t BgL_envz00_6917,
		obj_t BgL_ucs2zd2stringzd2_6918)
	{
		{	/* Llib/unicode.scm 241 */
			{	/* Llib/unicode.scm 242 */
				int BgL_tmpz00_7578;

				{	/* Llib/unicode.scm 242 */
					obj_t BgL_auxz00_7579;

					if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_6918))
						{	/* Llib/unicode.scm 242 */
							BgL_auxz00_7579 = BgL_ucs2zd2stringzd2_6918;
						}
					else
						{
							obj_t BgL_auxz00_7582;

							BgL_auxz00_7582 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 10764)), BGl_string4149z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2stringzd2_6918);
							FAILURE(BgL_auxz00_7582, BFALSE, BFALSE);
						}
					BgL_tmpz00_7578 =
						BGl_ucs2zd2stringzd2lengthz00zz__unicodez00(BgL_auxz00_7579);
				}
				return BINT(BgL_tmpz00_7578);
			}
		}

	}



/* ucs2-string-ref */
	BGL_EXPORTED_DEF ucs2_t BGl_ucs2zd2stringzd2refz00zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_10, int BgL_kz00_11)
	{
		{	/* Llib/unicode.scm 247 */
			{	/* Llib/unicode.scm 248 */
				bool_t BgL_test4424z00_7588;

				{	/* Llib/unicode.scm 248 */
					long BgL_auxz00_7591;
					long BgL_tmpz00_7589;

					BgL_auxz00_7591 =
						(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_10));
					BgL_tmpz00_7589 = (long) (BgL_kz00_11);
					BgL_test4424z00_7588 = BOUND_CHECK(BgL_tmpz00_7589, BgL_auxz00_7591);
				}
				if (BgL_test4424z00_7588)
					{	/* Llib/unicode.scm 248 */
						return UCS2_STRING_REF(BgL_ucs2zd2stringzd2_10, BgL_kz00_11);
					}
				else
					{	/* Llib/unicode.scm 253 */
						obj_t BgL_arg1223z00_7299;

						{	/* Llib/unicode.scm 253 */
							obj_t BgL_arg1225z00_7300;

							{	/* Llib/unicode.scm 253 */

								BgL_arg1225z00_7300 =
									BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
									((long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_10)) -
										((long) 1)), ((long) 10));
							}
							BgL_arg1223z00_7299 =
								string_append_3(BGl_string4151z00zz__unicodez00,
								BgL_arg1225z00_7300, BGl_string4152z00zz__unicodez00);
						}
						return
							CUCS2(BGl_errorz00zz__errorz00(BGl_symbol4153z00zz__unicodez00,
								BgL_arg1223z00_7299, BINT(BgL_kz00_11)));
					}
			}
		}

	}



/* &ucs2-string-ref */
	obj_t BGl_z62ucs2zd2stringzd2refz62zz__unicodez00(obj_t BgL_envz00_6919,
		obj_t BgL_ucs2zd2stringzd2_6920, obj_t BgL_kz00_6921)
	{
		{	/* Llib/unicode.scm 247 */
			{	/* Llib/unicode.scm 248 */
				ucs2_t BgL_tmpz00_7604;

				{	/* Llib/unicode.scm 248 */
					int BgL_auxz00_7612;
					obj_t BgL_auxz00_7605;

					{	/* Llib/unicode.scm 248 */
						obj_t BgL_tmpz00_7613;

						if (INTEGERP(BgL_kz00_6921))
							{	/* Llib/unicode.scm 248 */
								BgL_tmpz00_7613 = BgL_kz00_6921;
							}
						else
							{
								obj_t BgL_auxz00_7616;

								BgL_auxz00_7616 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4145z00zz__unicodez00, BINT(((long) 11073)),
									BGl_string4155z00zz__unicodez00,
									BGl_string4147z00zz__unicodez00, BgL_kz00_6921);
								FAILURE(BgL_auxz00_7616, BFALSE, BFALSE);
							}
						BgL_auxz00_7612 = CINT(BgL_tmpz00_7613);
					}
					if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_6920))
						{	/* Llib/unicode.scm 248 */
							BgL_auxz00_7605 = BgL_ucs2zd2stringzd2_6920;
						}
					else
						{
							obj_t BgL_auxz00_7608;

							BgL_auxz00_7608 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 11073)), BGl_string4155z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2stringzd2_6920);
							FAILURE(BgL_auxz00_7608, BFALSE, BFALSE);
						}
					BgL_tmpz00_7604 =
						BGl_ucs2zd2stringzd2refz00zz__unicodez00(BgL_auxz00_7605,
						BgL_auxz00_7612);
				}
				return BUCS2(BgL_tmpz00_7604);
			}
		}

	}



/* ucs2-string-set! */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2setz12z12zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_12, int BgL_kz00_13, ucs2_t BgL_ucs2z00_14)
	{
		{	/* Llib/unicode.scm 260 */
			{	/* Llib/unicode.scm 261 */
				bool_t BgL_test4427z00_7623;

				{	/* Llib/unicode.scm 261 */
					long BgL_auxz00_7626;
					long BgL_tmpz00_7624;

					BgL_auxz00_7626 =
						(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_12));
					BgL_tmpz00_7624 = (long) (BgL_kz00_13);
					BgL_test4427z00_7623 = BOUND_CHECK(BgL_tmpz00_7624, BgL_auxz00_7626);
				}
				if (BgL_test4427z00_7623)
					{	/* Llib/unicode.scm 261 */
						return
							UCS2_STRING_SET(BgL_ucs2zd2stringzd2_12, BgL_kz00_13,
							BgL_ucs2z00_14);
					}
				else
					{	/* Llib/unicode.scm 266 */
						obj_t BgL_arg1242z00_7301;

						{	/* Llib/unicode.scm 266 */
							obj_t BgL_arg1243z00_7302;

							{	/* Llib/unicode.scm 266 */

								BgL_arg1243z00_7302 =
									BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
									((long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_12)) -
										((long) 1)), ((long) 10));
							}
							BgL_arg1242z00_7301 =
								string_append_3(BGl_string4151z00zz__unicodez00,
								BgL_arg1243z00_7302, BGl_string4152z00zz__unicodez00);
						}
						return
							BGl_errorz00zz__errorz00(BGl_symbol4156z00zz__unicodez00,
							BgL_arg1242z00_7301, BINT(BgL_kz00_13));
					}
			}
		}

	}



/* &ucs2-string-set! */
	obj_t BGl_z62ucs2zd2stringzd2setz12z70zz__unicodez00(obj_t BgL_envz00_6922,
		obj_t BgL_ucs2zd2stringzd2_6923, obj_t BgL_kz00_6924,
		obj_t BgL_ucs2z00_6925)
	{
		{	/* Llib/unicode.scm 260 */
			{	/* Llib/unicode.scm 261 */
				ucs2_t BgL_auxz00_7654;
				int BgL_auxz00_7645;
				obj_t BgL_auxz00_7638;

				{	/* Llib/unicode.scm 261 */
					obj_t BgL_tmpz00_7655;

					if (UCS2P(BgL_ucs2z00_6925))
						{	/* Llib/unicode.scm 261 */
							BgL_tmpz00_7655 = BgL_ucs2z00_6925;
						}
					else
						{
							obj_t BgL_auxz00_7658;

							BgL_auxz00_7658 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 11636)), BGl_string4158z00zz__unicodez00,
								BGl_string4148z00zz__unicodez00, BgL_ucs2z00_6925);
							FAILURE(BgL_auxz00_7658, BFALSE, BFALSE);
						}
					BgL_auxz00_7654 = CUCS2(BgL_tmpz00_7655);
				}
				{	/* Llib/unicode.scm 261 */
					obj_t BgL_tmpz00_7646;

					if (INTEGERP(BgL_kz00_6924))
						{	/* Llib/unicode.scm 261 */
							BgL_tmpz00_7646 = BgL_kz00_6924;
						}
					else
						{
							obj_t BgL_auxz00_7649;

							BgL_auxz00_7649 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 11636)), BGl_string4158z00zz__unicodez00,
								BGl_string4147z00zz__unicodez00, BgL_kz00_6924);
							FAILURE(BgL_auxz00_7649, BFALSE, BFALSE);
						}
					BgL_auxz00_7645 = CINT(BgL_tmpz00_7646);
				}
				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_6923))
					{	/* Llib/unicode.scm 261 */
						BgL_auxz00_7638 = BgL_ucs2zd2stringzd2_6923;
					}
				else
					{
						obj_t BgL_auxz00_7641;

						BgL_auxz00_7641 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 11636)), BGl_string4158z00zz__unicodez00,
							BGl_string4150z00zz__unicodez00, BgL_ucs2zd2stringzd2_6923);
						FAILURE(BgL_auxz00_7641, BFALSE, BFALSE);
					}
				return
					BGl_ucs2zd2stringzd2setz12z12zz__unicodez00(BgL_auxz00_7638,
					BgL_auxz00_7645, BgL_auxz00_7654);
			}
		}

	}



/* ucs2-string-ref-ur */
	BGL_EXPORTED_DEF ucs2_t BGl_ucs2zd2stringzd2refzd2urzd2zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_15, int BgL_kz00_16)
	{
		{	/* Llib/unicode.scm 273 */
			return UCS2_STRING_REF(BgL_ucs2zd2stringzd2_15, BgL_kz00_16);
		}

	}



/* &ucs2-string-ref-ur */
	obj_t BGl_z62ucs2zd2stringzd2refzd2urzb0zz__unicodez00(obj_t BgL_envz00_6926,
		obj_t BgL_ucs2zd2stringzd2_6927, obj_t BgL_kz00_6928)
	{
		{	/* Llib/unicode.scm 273 */
			{	/* Llib/unicode.scm 274 */
				ucs2_t BgL_tmpz00_7665;

				{	/* Llib/unicode.scm 274 */
					int BgL_auxz00_7673;
					obj_t BgL_auxz00_7666;

					{	/* Llib/unicode.scm 274 */
						obj_t BgL_tmpz00_7674;

						if (INTEGERP(BgL_kz00_6928))
							{	/* Llib/unicode.scm 274 */
								BgL_tmpz00_7674 = BgL_kz00_6928;
							}
						else
							{
								obj_t BgL_auxz00_7677;

								BgL_auxz00_7677 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4145z00zz__unicodez00, BINT(((long) 12202)),
									BGl_string4159z00zz__unicodez00,
									BGl_string4147z00zz__unicodez00, BgL_kz00_6928);
								FAILURE(BgL_auxz00_7677, BFALSE, BFALSE);
							}
						BgL_auxz00_7673 = CINT(BgL_tmpz00_7674);
					}
					if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_6927))
						{	/* Llib/unicode.scm 274 */
							BgL_auxz00_7666 = BgL_ucs2zd2stringzd2_6927;
						}
					else
						{
							obj_t BgL_auxz00_7669;

							BgL_auxz00_7669 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 12202)), BGl_string4159z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2stringzd2_6927);
							FAILURE(BgL_auxz00_7669, BFALSE, BFALSE);
						}
					BgL_tmpz00_7665 =
						BGl_ucs2zd2stringzd2refzd2urzd2zz__unicodez00(BgL_auxz00_7666,
						BgL_auxz00_7673);
				}
				return BUCS2(BgL_tmpz00_7665);
			}
		}

	}



/* ucs2-string-set-ur! */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2setzd2urz12zc0zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_17, int BgL_kz00_18, ucs2_t BgL_ucs2z00_19)
	{
		{	/* Llib/unicode.scm 279 */
			return
				UCS2_STRING_SET(BgL_ucs2zd2stringzd2_17, BgL_kz00_18, BgL_ucs2z00_19);
		}

	}



/* &ucs2-string-set-ur! */
	obj_t BGl_z62ucs2zd2stringzd2setzd2urz12za2zz__unicodez00(obj_t
		BgL_envz00_6929, obj_t BgL_ucs2zd2stringzd2_6930, obj_t BgL_kz00_6931,
		obj_t BgL_ucs2z00_6932)
	{
		{	/* Llib/unicode.scm 279 */
			{	/* Llib/unicode.scm 280 */
				ucs2_t BgL_auxz00_7701;
				int BgL_auxz00_7692;
				obj_t BgL_auxz00_7685;

				{	/* Llib/unicode.scm 280 */
					obj_t BgL_tmpz00_7702;

					if (UCS2P(BgL_ucs2z00_6932))
						{	/* Llib/unicode.scm 280 */
							BgL_tmpz00_7702 = BgL_ucs2z00_6932;
						}
					else
						{
							obj_t BgL_auxz00_7705;

							BgL_auxz00_7705 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 12520)), BGl_string4160z00zz__unicodez00,
								BGl_string4148z00zz__unicodez00, BgL_ucs2z00_6932);
							FAILURE(BgL_auxz00_7705, BFALSE, BFALSE);
						}
					BgL_auxz00_7701 = CUCS2(BgL_tmpz00_7702);
				}
				{	/* Llib/unicode.scm 280 */
					obj_t BgL_tmpz00_7693;

					if (INTEGERP(BgL_kz00_6931))
						{	/* Llib/unicode.scm 280 */
							BgL_tmpz00_7693 = BgL_kz00_6931;
						}
					else
						{
							obj_t BgL_auxz00_7696;

							BgL_auxz00_7696 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 12520)), BGl_string4160z00zz__unicodez00,
								BGl_string4147z00zz__unicodez00, BgL_kz00_6931);
							FAILURE(BgL_auxz00_7696, BFALSE, BFALSE);
						}
					BgL_auxz00_7692 = CINT(BgL_tmpz00_7693);
				}
				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_6930))
					{	/* Llib/unicode.scm 280 */
						BgL_auxz00_7685 = BgL_ucs2zd2stringzd2_6930;
					}
				else
					{
						obj_t BgL_auxz00_7688;

						BgL_auxz00_7688 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 12520)), BGl_string4160z00zz__unicodez00,
							BGl_string4150z00zz__unicodez00, BgL_ucs2zd2stringzd2_6930);
						FAILURE(BgL_auxz00_7688, BFALSE, BFALSE);
					}
				return
					BGl_ucs2zd2stringzd2setzd2urz12zc0zz__unicodez00(BgL_auxz00_7685,
					BgL_auxz00_7692, BgL_auxz00_7701);
			}
		}

	}



/* ucs2-string=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd3zf3zf2zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_20, obj_t BgL_ucs2zd2string2zd2_21)
	{
		{	/* Llib/unicode.scm 285 */
			return ucs2_strcmp(BgL_ucs2zd2string1zd2_20, BgL_ucs2zd2string2zd2_21);
		}

	}



/* &ucs2-string=? */
	obj_t BGl_z62ucs2zd2stringzd3zf3z90zz__unicodez00(obj_t BgL_envz00_6933,
		obj_t BgL_ucs2zd2string1zd2_6934, obj_t BgL_ucs2zd2string2zd2_6935)
	{
		{	/* Llib/unicode.scm 285 */
			{	/* Llib/unicode.scm 286 */
				bool_t BgL_tmpz00_7712;

				{	/* Llib/unicode.scm 286 */
					obj_t BgL_auxz00_7720;
					obj_t BgL_auxz00_7713;

					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_6935))
						{	/* Llib/unicode.scm 286 */
							BgL_auxz00_7720 = BgL_ucs2zd2string2zd2_6935;
						}
					else
						{
							obj_t BgL_auxz00_7723;

							BgL_auxz00_7723 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 12844)), BGl_string4161z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string2zd2_6935);
							FAILURE(BgL_auxz00_7723, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_6934))
						{	/* Llib/unicode.scm 286 */
							BgL_auxz00_7713 = BgL_ucs2zd2string1zd2_6934;
						}
					else
						{
							obj_t BgL_auxz00_7716;

							BgL_auxz00_7716 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 12844)), BGl_string4161z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string1zd2_6934);
							FAILURE(BgL_auxz00_7716, BFALSE, BFALSE);
						}
					BgL_tmpz00_7712 =
						BGl_ucs2zd2stringzd3zf3zf2zz__unicodez00(BgL_auxz00_7713,
						BgL_auxz00_7720);
				}
				return BBOOL(BgL_tmpz00_7712);
			}
		}

	}



/* ucs2-string-ci=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cizd3zf3z20zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_22, obj_t BgL_ucs2zd2string2zd2_23)
	{
		{	/* Llib/unicode.scm 291 */
			return ucs2_strcicmp(BgL_ucs2zd2string1zd2_22, BgL_ucs2zd2string2zd2_23);
		}

	}



/* &ucs2-string-ci=? */
	obj_t BGl_z62ucs2zd2stringzd2cizd3zf3z42zz__unicodez00(obj_t BgL_envz00_6936,
		obj_t BgL_ucs2zd2string1zd2_6937, obj_t BgL_ucs2zd2string2zd2_6938)
	{
		{	/* Llib/unicode.scm 291 */
			{	/* Llib/unicode.scm 292 */
				bool_t BgL_tmpz00_7730;

				{	/* Llib/unicode.scm 292 */
					obj_t BgL_auxz00_7738;
					obj_t BgL_auxz00_7731;

					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_6938))
						{	/* Llib/unicode.scm 292 */
							BgL_auxz00_7738 = BgL_ucs2zd2string2zd2_6938;
						}
					else
						{
							obj_t BgL_auxz00_7741;

							BgL_auxz00_7741 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 13175)), BGl_string4162z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string2zd2_6938);
							FAILURE(BgL_auxz00_7741, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_6937))
						{	/* Llib/unicode.scm 292 */
							BgL_auxz00_7731 = BgL_ucs2zd2string1zd2_6937;
						}
					else
						{
							obj_t BgL_auxz00_7734;

							BgL_auxz00_7734 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 13175)), BGl_string4162z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string1zd2_6937);
							FAILURE(BgL_auxz00_7734, BFALSE, BFALSE);
						}
					BgL_tmpz00_7730 =
						BGl_ucs2zd2stringzd2cizd3zf3z20zz__unicodez00(BgL_auxz00_7731,
						BgL_auxz00_7738);
				}
				return BBOOL(BgL_tmpz00_7730);
			}
		}

	}



/* ucs2-string<? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzc3zf3ze2zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_24, obj_t BgL_ucs2zd2string2zd2_25)
	{
		{	/* Llib/unicode.scm 297 */
			return ucs2_string_lt(BgL_ucs2zd2string1zd2_24, BgL_ucs2zd2string2zd2_25);
		}

	}



/* &ucs2-string<? */
	obj_t BGl_z62ucs2zd2stringzc3zf3z80zz__unicodez00(obj_t BgL_envz00_6939,
		obj_t BgL_ucs2zd2string1zd2_6940, obj_t BgL_ucs2zd2string2zd2_6941)
	{
		{	/* Llib/unicode.scm 297 */
			{	/* Llib/unicode.scm 298 */
				bool_t BgL_tmpz00_7748;

				{	/* Llib/unicode.scm 298 */
					obj_t BgL_auxz00_7756;
					obj_t BgL_auxz00_7749;

					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_6941))
						{	/* Llib/unicode.scm 298 */
							BgL_auxz00_7756 = BgL_ucs2zd2string2zd2_6941;
						}
					else
						{
							obj_t BgL_auxz00_7759;

							BgL_auxz00_7759 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 13501)), BGl_string4163z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string2zd2_6941);
							FAILURE(BgL_auxz00_7759, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_6940))
						{	/* Llib/unicode.scm 298 */
							BgL_auxz00_7749 = BgL_ucs2zd2string1zd2_6940;
						}
					else
						{
							obj_t BgL_auxz00_7752;

							BgL_auxz00_7752 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 13501)), BGl_string4163z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string1zd2_6940);
							FAILURE(BgL_auxz00_7752, BFALSE, BFALSE);
						}
					BgL_tmpz00_7748 =
						BGl_ucs2zd2stringzc3zf3ze2zz__unicodez00(BgL_auxz00_7749,
						BgL_auxz00_7756);
				}
				return BBOOL(BgL_tmpz00_7748);
			}
		}

	}



/* ucs2-string>? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringze3zf3zc2zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_26, obj_t BgL_ucs2zd2string2zd2_27)
	{
		{	/* Llib/unicode.scm 303 */
			return ucs2_string_gt(BgL_ucs2zd2string1zd2_26, BgL_ucs2zd2string2zd2_27);
		}

	}



/* &ucs2-string>? */
	obj_t BGl_z62ucs2zd2stringze3zf3za0zz__unicodez00(obj_t BgL_envz00_6942,
		obj_t BgL_ucs2zd2string1zd2_6943, obj_t BgL_ucs2zd2string2zd2_6944)
	{
		{	/* Llib/unicode.scm 303 */
			{	/* Llib/unicode.scm 304 */
				bool_t BgL_tmpz00_7766;

				{	/* Llib/unicode.scm 304 */
					obj_t BgL_auxz00_7774;
					obj_t BgL_auxz00_7767;

					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_6944))
						{	/* Llib/unicode.scm 304 */
							BgL_auxz00_7774 = BgL_ucs2zd2string2zd2_6944;
						}
					else
						{
							obj_t BgL_auxz00_7777;

							BgL_auxz00_7777 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 13828)), BGl_string4164z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string2zd2_6944);
							FAILURE(BgL_auxz00_7777, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_6943))
						{	/* Llib/unicode.scm 304 */
							BgL_auxz00_7767 = BgL_ucs2zd2string1zd2_6943;
						}
					else
						{
							obj_t BgL_auxz00_7770;

							BgL_auxz00_7770 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 13828)), BGl_string4164z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string1zd2_6943);
							FAILURE(BgL_auxz00_7770, BFALSE, BFALSE);
						}
					BgL_tmpz00_7766 =
						BGl_ucs2zd2stringze3zf3zc2zz__unicodez00(BgL_auxz00_7767,
						BgL_auxz00_7774);
				}
				return BBOOL(BgL_tmpz00_7766);
			}
		}

	}



/* ucs2-string<=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzc3zd3zf3z31zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_28, obj_t BgL_ucs2zd2string2zd2_29)
	{
		{	/* Llib/unicode.scm 309 */
			return ucs2_string_le(BgL_ucs2zd2string1zd2_28, BgL_ucs2zd2string2zd2_29);
		}

	}



/* &ucs2-string<=? */
	obj_t BGl_z62ucs2zd2stringzc3zd3zf3z53zz__unicodez00(obj_t BgL_envz00_6945,
		obj_t BgL_ucs2zd2string1zd2_6946, obj_t BgL_ucs2zd2string2zd2_6947)
	{
		{	/* Llib/unicode.scm 309 */
			{	/* Llib/unicode.scm 310 */
				bool_t BgL_tmpz00_7784;

				{	/* Llib/unicode.scm 310 */
					obj_t BgL_auxz00_7792;
					obj_t BgL_auxz00_7785;

					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_6947))
						{	/* Llib/unicode.scm 310 */
							BgL_auxz00_7792 = BgL_ucs2zd2string2zd2_6947;
						}
					else
						{
							obj_t BgL_auxz00_7795;

							BgL_auxz00_7795 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 14156)), BGl_string4165z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string2zd2_6947);
							FAILURE(BgL_auxz00_7795, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_6946))
						{	/* Llib/unicode.scm 310 */
							BgL_auxz00_7785 = BgL_ucs2zd2string1zd2_6946;
						}
					else
						{
							obj_t BgL_auxz00_7788;

							BgL_auxz00_7788 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 14156)), BGl_string4165z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string1zd2_6946);
							FAILURE(BgL_auxz00_7788, BFALSE, BFALSE);
						}
					BgL_tmpz00_7784 =
						BGl_ucs2zd2stringzc3zd3zf3z31zz__unicodez00(BgL_auxz00_7785,
						BgL_auxz00_7792);
				}
				return BBOOL(BgL_tmpz00_7784);
			}
		}

	}



/* ucs2-string>=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringze3zd3zf3z11zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_30, obj_t BgL_ucs2zd2string2zd2_31)
	{
		{	/* Llib/unicode.scm 315 */
			return ucs2_string_ge(BgL_ucs2zd2string1zd2_30, BgL_ucs2zd2string2zd2_31);
		}

	}



/* &ucs2-string>=? */
	obj_t BGl_z62ucs2zd2stringze3zd3zf3z73zz__unicodez00(obj_t BgL_envz00_6948,
		obj_t BgL_ucs2zd2string1zd2_6949, obj_t BgL_ucs2zd2string2zd2_6950)
	{
		{	/* Llib/unicode.scm 315 */
			{	/* Llib/unicode.scm 316 */
				bool_t BgL_tmpz00_7802;

				{	/* Llib/unicode.scm 316 */
					obj_t BgL_auxz00_7810;
					obj_t BgL_auxz00_7803;

					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_6950))
						{	/* Llib/unicode.scm 316 */
							BgL_auxz00_7810 = BgL_ucs2zd2string2zd2_6950;
						}
					else
						{
							obj_t BgL_auxz00_7813;

							BgL_auxz00_7813 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 14484)), BGl_string4166z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string2zd2_6950);
							FAILURE(BgL_auxz00_7813, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_6949))
						{	/* Llib/unicode.scm 316 */
							BgL_auxz00_7803 = BgL_ucs2zd2string1zd2_6949;
						}
					else
						{
							obj_t BgL_auxz00_7806;

							BgL_auxz00_7806 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 14484)), BGl_string4166z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string1zd2_6949);
							FAILURE(BgL_auxz00_7806, BFALSE, BFALSE);
						}
					BgL_tmpz00_7802 =
						BGl_ucs2zd2stringze3zd3zf3z11zz__unicodez00(BgL_auxz00_7803,
						BgL_auxz00_7810);
				}
				return BBOOL(BgL_tmpz00_7802);
			}
		}

	}



/* ucs2-string-ci<? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cizc3zf3z30zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_32, obj_t BgL_ucs2zd2string2zd2_33)
	{
		{	/* Llib/unicode.scm 321 */
			return
				ucs2_string_cilt(BgL_ucs2zd2string1zd2_32, BgL_ucs2zd2string2zd2_33);
		}

	}



/* &ucs2-string-ci<? */
	obj_t BGl_z62ucs2zd2stringzd2cizc3zf3z52zz__unicodez00(obj_t BgL_envz00_6951,
		obj_t BgL_ucs2zd2string1zd2_6952, obj_t BgL_ucs2zd2string2zd2_6953)
	{
		{	/* Llib/unicode.scm 321 */
			{	/* Llib/unicode.scm 322 */
				bool_t BgL_tmpz00_7820;

				{	/* Llib/unicode.scm 322 */
					obj_t BgL_auxz00_7828;
					obj_t BgL_auxz00_7821;

					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_6953))
						{	/* Llib/unicode.scm 322 */
							BgL_auxz00_7828 = BgL_ucs2zd2string2zd2_6953;
						}
					else
						{
							obj_t BgL_auxz00_7831;

							BgL_auxz00_7831 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 14814)), BGl_string4167z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string2zd2_6953);
							FAILURE(BgL_auxz00_7831, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_6952))
						{	/* Llib/unicode.scm 322 */
							BgL_auxz00_7821 = BgL_ucs2zd2string1zd2_6952;
						}
					else
						{
							obj_t BgL_auxz00_7824;

							BgL_auxz00_7824 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 14814)), BGl_string4167z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string1zd2_6952);
							FAILURE(BgL_auxz00_7824, BFALSE, BFALSE);
						}
					BgL_tmpz00_7820 =
						BGl_ucs2zd2stringzd2cizc3zf3z30zz__unicodez00(BgL_auxz00_7821,
						BgL_auxz00_7828);
				}
				return BBOOL(BgL_tmpz00_7820);
			}
		}

	}



/* ucs2-string-ci>? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cize3zf3z10zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_34, obj_t BgL_ucs2zd2string2zd2_35)
	{
		{	/* Llib/unicode.scm 327 */
			return
				ucs2_string_cigt(BgL_ucs2zd2string1zd2_34, BgL_ucs2zd2string2zd2_35);
		}

	}



/* &ucs2-string-ci>? */
	obj_t BGl_z62ucs2zd2stringzd2cize3zf3z72zz__unicodez00(obj_t BgL_envz00_6954,
		obj_t BgL_ucs2zd2string1zd2_6955, obj_t BgL_ucs2zd2string2zd2_6956)
	{
		{	/* Llib/unicode.scm 327 */
			{	/* Llib/unicode.scm 328 */
				bool_t BgL_tmpz00_7838;

				{	/* Llib/unicode.scm 328 */
					obj_t BgL_auxz00_7846;
					obj_t BgL_auxz00_7839;

					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_6956))
						{	/* Llib/unicode.scm 328 */
							BgL_auxz00_7846 = BgL_ucs2zd2string2zd2_6956;
						}
					else
						{
							obj_t BgL_auxz00_7849;

							BgL_auxz00_7849 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 15146)), BGl_string4168z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string2zd2_6956);
							FAILURE(BgL_auxz00_7849, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_6955))
						{	/* Llib/unicode.scm 328 */
							BgL_auxz00_7839 = BgL_ucs2zd2string1zd2_6955;
						}
					else
						{
							obj_t BgL_auxz00_7842;

							BgL_auxz00_7842 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 15146)), BGl_string4168z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string1zd2_6955);
							FAILURE(BgL_auxz00_7842, BFALSE, BFALSE);
						}
					BgL_tmpz00_7838 =
						BGl_ucs2zd2stringzd2cize3zf3z10zz__unicodez00(BgL_auxz00_7839,
						BgL_auxz00_7846);
				}
				return BBOOL(BgL_tmpz00_7838);
			}
		}

	}



/* ucs2-string-ci<=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cizc3zd3zf3ze3zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_36, obj_t BgL_ucs2zd2string2zd2_37)
	{
		{	/* Llib/unicode.scm 333 */
			return
				ucs2_string_cile(BgL_ucs2zd2string1zd2_36, BgL_ucs2zd2string2zd2_37);
		}

	}



/* &ucs2-string-ci<=? */
	obj_t BGl_z62ucs2zd2stringzd2cizc3zd3zf3z81zz__unicodez00(obj_t
		BgL_envz00_6957, obj_t BgL_ucs2zd2string1zd2_6958,
		obj_t BgL_ucs2zd2string2zd2_6959)
	{
		{	/* Llib/unicode.scm 333 */
			{	/* Llib/unicode.scm 334 */
				bool_t BgL_tmpz00_7856;

				{	/* Llib/unicode.scm 334 */
					obj_t BgL_auxz00_7864;
					obj_t BgL_auxz00_7857;

					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_6959))
						{	/* Llib/unicode.scm 334 */
							BgL_auxz00_7864 = BgL_ucs2zd2string2zd2_6959;
						}
					else
						{
							obj_t BgL_auxz00_7867;

							BgL_auxz00_7867 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 15479)), BGl_string4169z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string2zd2_6959);
							FAILURE(BgL_auxz00_7867, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_6958))
						{	/* Llib/unicode.scm 334 */
							BgL_auxz00_7857 = BgL_ucs2zd2string1zd2_6958;
						}
					else
						{
							obj_t BgL_auxz00_7860;

							BgL_auxz00_7860 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 15479)), BGl_string4169z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string1zd2_6958);
							FAILURE(BgL_auxz00_7860, BFALSE, BFALSE);
						}
					BgL_tmpz00_7856 =
						BGl_ucs2zd2stringzd2cizc3zd3zf3ze3zz__unicodez00(BgL_auxz00_7857,
						BgL_auxz00_7864);
				}
				return BBOOL(BgL_tmpz00_7856);
			}
		}

	}



/* ucs2-string-ci>=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2stringzd2cize3zd3zf3zc3zz__unicodez00(obj_t
		BgL_ucs2zd2string1zd2_38, obj_t BgL_ucs2zd2string2zd2_39)
	{
		{	/* Llib/unicode.scm 339 */
			return
				ucs2_string_cige(BgL_ucs2zd2string1zd2_38, BgL_ucs2zd2string2zd2_39);
		}

	}



/* &ucs2-string-ci>=? */
	obj_t BGl_z62ucs2zd2stringzd2cize3zd3zf3za1zz__unicodez00(obj_t
		BgL_envz00_6960, obj_t BgL_ucs2zd2string1zd2_6961,
		obj_t BgL_ucs2zd2string2zd2_6962)
	{
		{	/* Llib/unicode.scm 339 */
			{	/* Llib/unicode.scm 340 */
				bool_t BgL_tmpz00_7874;

				{	/* Llib/unicode.scm 340 */
					obj_t BgL_auxz00_7882;
					obj_t BgL_auxz00_7875;

					if (UCS2_STRINGP(BgL_ucs2zd2string2zd2_6962))
						{	/* Llib/unicode.scm 340 */
							BgL_auxz00_7882 = BgL_ucs2zd2string2zd2_6962;
						}
					else
						{
							obj_t BgL_auxz00_7885;

							BgL_auxz00_7885 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 15812)), BGl_string4170z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string2zd2_6962);
							FAILURE(BgL_auxz00_7885, BFALSE, BFALSE);
						}
					if (UCS2_STRINGP(BgL_ucs2zd2string1zd2_6961))
						{	/* Llib/unicode.scm 340 */
							BgL_auxz00_7875 = BgL_ucs2zd2string1zd2_6961;
						}
					else
						{
							obj_t BgL_auxz00_7878;

							BgL_auxz00_7878 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 15812)), BGl_string4170z00zz__unicodez00,
								BGl_string4150z00zz__unicodez00, BgL_ucs2zd2string1zd2_6961);
							FAILURE(BgL_auxz00_7878, BFALSE, BFALSE);
						}
					BgL_tmpz00_7874 =
						BGl_ucs2zd2stringzd2cize3zd3zf3zc3zz__unicodez00(BgL_auxz00_7875,
						BgL_auxz00_7882);
				}
				return BBOOL(BgL_tmpz00_7874);
			}
		}

	}



/* subucs2-string */
	BGL_EXPORTED_DEF obj_t BGl_subucs2zd2stringzd2zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_40, int BgL_startz00_41, int BgL_endz00_42)
	{
		{	/* Llib/unicode.scm 345 */
			{	/* Llib/unicode.scm 347 */
				bool_t BgL_test4456z00_7891;

				if (((long) (BgL_endz00_42) >= (long) (BgL_startz00_41)))
					{	/* Llib/unicode.scm 348 */
						bool_t BgL_test4458z00_7896;

						{	/* Llib/unicode.scm 348 */
							long BgL_auxz00_7899;
							long BgL_tmpz00_7897;

							BgL_auxz00_7899 =
								(
								(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_40)) +
								((long) 1));
							BgL_tmpz00_7897 = (long) (BgL_startz00_41);
							BgL_test4458z00_7896 =
								BOUND_CHECK(BgL_tmpz00_7897, BgL_auxz00_7899);
						}
						if (BgL_test4458z00_7896)
							{	/* Llib/unicode.scm 350 */
								long BgL_auxz00_7906;
								long BgL_tmpz00_7904;

								BgL_auxz00_7906 =
									(
									(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_40)) +
									((long) 1));
								BgL_tmpz00_7904 = (long) (BgL_endz00_42);
								BgL_test4456z00_7891 =
									BOUND_CHECK(BgL_tmpz00_7904, BgL_auxz00_7906);
							}
						else
							{	/* Llib/unicode.scm 348 */
								BgL_test4456z00_7891 = ((bool_t) 0);
							}
					}
				else
					{	/* Llib/unicode.scm 347 */
						BgL_test4456z00_7891 = ((bool_t) 0);
					}
				if (BgL_test4456z00_7891)
					{	/* Llib/unicode.scm 347 */
						return
							c_subucs2_string(BgL_ucs2zd2stringzd2_40, BgL_startz00_41,
							BgL_endz00_42);
					}
				else
					{	/* Llib/unicode.scm 355 */
						obj_t BgL_arg1268z00_7303;

						BgL_arg1268z00_7303 =
							MAKE_YOUNG_PAIR(BINT(BgL_startz00_41), BINT(BgL_endz00_42));
						return
							BGl_errorz00zz__errorz00(BGl_string4171z00zz__unicodez00,
							BGl_string4172z00zz__unicodez00, BgL_arg1268z00_7303);
					}
			}
		}

	}



/* &subucs2-string */
	obj_t BGl_z62subucs2zd2stringzb0zz__unicodez00(obj_t BgL_envz00_6963,
		obj_t BgL_ucs2zd2stringzd2_6964, obj_t BgL_startz00_6965,
		obj_t BgL_endz00_6966)
	{
		{	/* Llib/unicode.scm 345 */
			{	/* Llib/unicode.scm 347 */
				int BgL_auxz00_7932;
				int BgL_auxz00_7923;
				obj_t BgL_auxz00_7916;

				{	/* Llib/unicode.scm 347 */
					obj_t BgL_tmpz00_7933;

					if (INTEGERP(BgL_endz00_6966))
						{	/* Llib/unicode.scm 347 */
							BgL_tmpz00_7933 = BgL_endz00_6966;
						}
					else
						{
							obj_t BgL_auxz00_7936;

							BgL_auxz00_7936 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 16185)), BGl_string4173z00zz__unicodez00,
								BGl_string4147z00zz__unicodez00, BgL_endz00_6966);
							FAILURE(BgL_auxz00_7936, BFALSE, BFALSE);
						}
					BgL_auxz00_7932 = CINT(BgL_tmpz00_7933);
				}
				{	/* Llib/unicode.scm 347 */
					obj_t BgL_tmpz00_7924;

					if (INTEGERP(BgL_startz00_6965))
						{	/* Llib/unicode.scm 347 */
							BgL_tmpz00_7924 = BgL_startz00_6965;
						}
					else
						{
							obj_t BgL_auxz00_7927;

							BgL_auxz00_7927 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 16185)), BGl_string4173z00zz__unicodez00,
								BGl_string4147z00zz__unicodez00, BgL_startz00_6965);
							FAILURE(BgL_auxz00_7927, BFALSE, BFALSE);
						}
					BgL_auxz00_7923 = CINT(BgL_tmpz00_7924);
				}
				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_6964))
					{	/* Llib/unicode.scm 347 */
						BgL_auxz00_7916 = BgL_ucs2zd2stringzd2_6964;
					}
				else
					{
						obj_t BgL_auxz00_7919;

						BgL_auxz00_7919 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 16185)), BGl_string4173z00zz__unicodez00,
							BGl_string4150z00zz__unicodez00, BgL_ucs2zd2stringzd2_6964);
						FAILURE(BgL_auxz00_7919, BFALSE, BFALSE);
					}
				return
					BGl_subucs2zd2stringzd2zz__unicodez00(BgL_auxz00_7916,
					BgL_auxz00_7923, BgL_auxz00_7932);
			}
		}

	}



/* subucs2-string-ur */
	BGL_EXPORTED_DEF obj_t BGl_subucs2zd2stringzd2urz00zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_43, int BgL_startz00_44, int BgL_endz00_45)
	{
		{	/* Llib/unicode.scm 360 */
			return
				c_subucs2_string(BgL_ucs2zd2stringzd2_43, BgL_startz00_44,
				BgL_endz00_45);
		}

	}



/* &subucs2-string-ur */
	obj_t BGl_z62subucs2zd2stringzd2urz62zz__unicodez00(obj_t BgL_envz00_6967,
		obj_t BgL_ucs2zd2stringzd2_6968, obj_t BgL_startz00_6969,
		obj_t BgL_endz00_6970)
	{
		{	/* Llib/unicode.scm 360 */
			{	/* Llib/unicode.scm 361 */
				int BgL_auxz00_7959;
				int BgL_auxz00_7950;
				obj_t BgL_auxz00_7943;

				{	/* Llib/unicode.scm 361 */
					obj_t BgL_tmpz00_7960;

					if (INTEGERP(BgL_endz00_6970))
						{	/* Llib/unicode.scm 361 */
							BgL_tmpz00_7960 = BgL_endz00_6970;
						}
					else
						{
							obj_t BgL_auxz00_7963;

							BgL_auxz00_7963 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 16789)), BGl_string4174z00zz__unicodez00,
								BGl_string4147z00zz__unicodez00, BgL_endz00_6970);
							FAILURE(BgL_auxz00_7963, BFALSE, BFALSE);
						}
					BgL_auxz00_7959 = CINT(BgL_tmpz00_7960);
				}
				{	/* Llib/unicode.scm 361 */
					obj_t BgL_tmpz00_7951;

					if (INTEGERP(BgL_startz00_6969))
						{	/* Llib/unicode.scm 361 */
							BgL_tmpz00_7951 = BgL_startz00_6969;
						}
					else
						{
							obj_t BgL_auxz00_7954;

							BgL_auxz00_7954 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 16789)), BGl_string4174z00zz__unicodez00,
								BGl_string4147z00zz__unicodez00, BgL_startz00_6969);
							FAILURE(BgL_auxz00_7954, BFALSE, BFALSE);
						}
					BgL_auxz00_7950 = CINT(BgL_tmpz00_7951);
				}
				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_6968))
					{	/* Llib/unicode.scm 361 */
						BgL_auxz00_7943 = BgL_ucs2zd2stringzd2_6968;
					}
				else
					{
						obj_t BgL_auxz00_7946;

						BgL_auxz00_7946 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 16789)), BGl_string4174z00zz__unicodez00,
							BGl_string4150z00zz__unicodez00, BgL_ucs2zd2stringzd2_6968);
						FAILURE(BgL_auxz00_7946, BFALSE, BFALSE);
					}
				return
					BGl_subucs2zd2stringzd2urz00zz__unicodez00(BgL_auxz00_7943,
					BgL_auxz00_7950, BgL_auxz00_7959);
			}
		}

	}



/* ucs2-substring */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2substringzd2zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_46, int BgL_startz00_47, int BgL_endz00_48)
	{
		{	/* Llib/unicode.scm 366 */
			{	/* Llib/unicode.scm 368 */
				bool_t BgL_test4465z00_7969;

				if (((long) (BgL_endz00_48) >= (long) (BgL_startz00_47)))
					{	/* Llib/unicode.scm 369 */
						bool_t BgL_test4467z00_7974;

						{	/* Llib/unicode.scm 369 */
							long BgL_auxz00_7977;
							long BgL_tmpz00_7975;

							BgL_auxz00_7977 =
								(
								(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_46)) +
								((long) 1));
							BgL_tmpz00_7975 = (long) (BgL_startz00_47);
							BgL_test4467z00_7974 =
								BOUND_CHECK(BgL_tmpz00_7975, BgL_auxz00_7977);
						}
						if (BgL_test4467z00_7974)
							{	/* Llib/unicode.scm 371 */
								long BgL_auxz00_7984;
								long BgL_tmpz00_7982;

								BgL_auxz00_7984 =
									(
									(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_46)) +
									((long) 1));
								BgL_tmpz00_7982 = (long) (BgL_endz00_48);
								BgL_test4465z00_7969 =
									BOUND_CHECK(BgL_tmpz00_7982, BgL_auxz00_7984);
							}
						else
							{	/* Llib/unicode.scm 369 */
								BgL_test4465z00_7969 = ((bool_t) 0);
							}
					}
				else
					{	/* Llib/unicode.scm 368 */
						BgL_test4465z00_7969 = ((bool_t) 0);
					}
				if (BgL_test4465z00_7969)
					{	/* Llib/unicode.scm 368 */
						return
							c_subucs2_string(BgL_ucs2zd2stringzd2_46, BgL_startz00_47,
							BgL_endz00_48);
					}
				else
					{	/* Llib/unicode.scm 376 */
						obj_t BgL_arg1286z00_7304;

						BgL_arg1286z00_7304 =
							MAKE_YOUNG_PAIR(BINT(BgL_startz00_47), BINT(BgL_endz00_48));
						return
							BGl_errorz00zz__errorz00(BGl_string4171z00zz__unicodez00,
							BGl_string4172z00zz__unicodez00, BgL_arg1286z00_7304);
					}
			}
		}

	}



/* &ucs2-substring */
	obj_t BGl_z62ucs2zd2substringzb0zz__unicodez00(obj_t BgL_envz00_6971,
		obj_t BgL_ucs2zd2stringzd2_6972, obj_t BgL_startz00_6973,
		obj_t BgL_endz00_6974)
	{
		{	/* Llib/unicode.scm 366 */
			{	/* Llib/unicode.scm 368 */
				int BgL_auxz00_8010;
				int BgL_auxz00_8001;
				obj_t BgL_auxz00_7994;

				{	/* Llib/unicode.scm 368 */
					obj_t BgL_tmpz00_8011;

					if (INTEGERP(BgL_endz00_6974))
						{	/* Llib/unicode.scm 368 */
							BgL_tmpz00_8011 = BgL_endz00_6974;
						}
					else
						{
							obj_t BgL_auxz00_8014;

							BgL_auxz00_8014 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 17157)), BGl_string4175z00zz__unicodez00,
								BGl_string4147z00zz__unicodez00, BgL_endz00_6974);
							FAILURE(BgL_auxz00_8014, BFALSE, BFALSE);
						}
					BgL_auxz00_8010 = CINT(BgL_tmpz00_8011);
				}
				{	/* Llib/unicode.scm 368 */
					obj_t BgL_tmpz00_8002;

					if (INTEGERP(BgL_startz00_6973))
						{	/* Llib/unicode.scm 368 */
							BgL_tmpz00_8002 = BgL_startz00_6973;
						}
					else
						{
							obj_t BgL_auxz00_8005;

							BgL_auxz00_8005 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 17157)), BGl_string4175z00zz__unicodez00,
								BGl_string4147z00zz__unicodez00, BgL_startz00_6973);
							FAILURE(BgL_auxz00_8005, BFALSE, BFALSE);
						}
					BgL_auxz00_8001 = CINT(BgL_tmpz00_8002);
				}
				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_6972))
					{	/* Llib/unicode.scm 368 */
						BgL_auxz00_7994 = BgL_ucs2zd2stringzd2_6972;
					}
				else
					{
						obj_t BgL_auxz00_7997;

						BgL_auxz00_7997 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 17157)), BGl_string4175z00zz__unicodez00,
							BGl_string4150z00zz__unicodez00, BgL_ucs2zd2stringzd2_6972);
						FAILURE(BgL_auxz00_7997, BFALSE, BFALSE);
					}
				return
					BGl_ucs2zd2substringzd2zz__unicodez00(BgL_auxz00_7994,
					BgL_auxz00_8001, BgL_auxz00_8010);
			}
		}

	}



/* ucs2-substring-ur */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2substringzd2urz00zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_49, int BgL_startz00_50, int BgL_endz00_51)
	{
		{	/* Llib/unicode.scm 381 */
			return
				c_subucs2_string(BgL_ucs2zd2stringzd2_49, BgL_startz00_50,
				BgL_endz00_51);
		}

	}



/* &ucs2-substring-ur */
	obj_t BGl_z62ucs2zd2substringzd2urz62zz__unicodez00(obj_t BgL_envz00_6975,
		obj_t BgL_ucs2zd2stringzd2_6976, obj_t BgL_startz00_6977,
		obj_t BgL_endz00_6978)
	{
		{	/* Llib/unicode.scm 381 */
			{	/* Llib/unicode.scm 382 */
				int BgL_auxz00_8037;
				int BgL_auxz00_8028;
				obj_t BgL_auxz00_8021;

				{	/* Llib/unicode.scm 382 */
					obj_t BgL_tmpz00_8038;

					if (INTEGERP(BgL_endz00_6978))
						{	/* Llib/unicode.scm 382 */
							BgL_tmpz00_8038 = BgL_endz00_6978;
						}
					else
						{
							obj_t BgL_auxz00_8041;

							BgL_auxz00_8041 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 17761)), BGl_string4176z00zz__unicodez00,
								BGl_string4147z00zz__unicodez00, BgL_endz00_6978);
							FAILURE(BgL_auxz00_8041, BFALSE, BFALSE);
						}
					BgL_auxz00_8037 = CINT(BgL_tmpz00_8038);
				}
				{	/* Llib/unicode.scm 382 */
					obj_t BgL_tmpz00_8029;

					if (INTEGERP(BgL_startz00_6977))
						{	/* Llib/unicode.scm 382 */
							BgL_tmpz00_8029 = BgL_startz00_6977;
						}
					else
						{
							obj_t BgL_auxz00_8032;

							BgL_auxz00_8032 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 17761)), BGl_string4176z00zz__unicodez00,
								BGl_string4147z00zz__unicodez00, BgL_startz00_6977);
							FAILURE(BgL_auxz00_8032, BFALSE, BFALSE);
						}
					BgL_auxz00_8028 = CINT(BgL_tmpz00_8029);
				}
				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_6976))
					{	/* Llib/unicode.scm 382 */
						BgL_auxz00_8021 = BgL_ucs2zd2stringzd2_6976;
					}
				else
					{
						obj_t BgL_auxz00_8024;

						BgL_auxz00_8024 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 17761)), BGl_string4176z00zz__unicodez00,
							BGl_string4150z00zz__unicodez00, BgL_ucs2zd2stringzd2_6976);
						FAILURE(BgL_auxz00_8024, BFALSE, BFALSE);
					}
				return
					BGl_ucs2zd2substringzd2urz00zz__unicodez00(BgL_auxz00_8021,
					BgL_auxz00_8028, BgL_auxz00_8037);
			}
		}

	}



/* ucs2-string-append */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2appendz00zz__unicodez00(obj_t
		BgL_listz00_52)
	{
		{	/* Llib/unicode.scm 387 */
			if (NULLP(BgL_listz00_52))
				{	/* Llib/unicode.scm 137 */
					ucs2_t BgL_fillerz00_1257;

					{	/* Llib/unicode.scm 137 */
						int BgL_tmpz00_8049;

						BgL_tmpz00_8049 =
							(int) (((unsigned char) ((char) (((unsigned char) ' ')))));
						BgL_fillerz00_1257 = BGL_INT_TO_UCS2(BgL_tmpz00_8049);
					}
					{	/* Llib/unicode.scm 137 */

						return make_ucs2_string((int) (((long) 0)), BgL_fillerz00_1257);
				}}
			else
				{	/* Llib/unicode.scm 388 */
					return BGl_loopze72ze7zz__unicodez00(BgL_listz00_52);
				}
		}

	}



/* loop~2 */
	obj_t BGl_loopze72ze7zz__unicodez00(obj_t BgL_listz00_1259)
	{
		{	/* Llib/unicode.scm 390 */
			if (NULLP(CDR(((obj_t) BgL_listz00_1259))))
				{	/* Llib/unicode.scm 391 */
					return CAR(((obj_t) BgL_listz00_1259));
				}
			else
				{	/* Llib/unicode.scm 393 */
					obj_t BgL_arg1297z00_1263;
					obj_t BgL_arg1298z00_1264;

					BgL_arg1297z00_1263 = CAR(((obj_t) BgL_listz00_1259));
					{	/* Llib/unicode.scm 393 */
						obj_t BgL_arg1299z00_1265;

						BgL_arg1299z00_1265 = CDR(((obj_t) BgL_listz00_1259));
						BgL_arg1298z00_1264 =
							BGl_loopze72ze7zz__unicodez00(BgL_arg1299z00_1265);
					}
					return ucs2_string_append(BgL_arg1297z00_1263, BgL_arg1298z00_1264);
				}
		}

	}



/* &ucs2-string-append */
	obj_t BGl_z62ucs2zd2stringzd2appendz62zz__unicodez00(obj_t BgL_envz00_6979,
		obj_t BgL_listz00_6980)
	{
		{	/* Llib/unicode.scm 387 */
			return BGl_ucs2zd2stringzd2appendz00zz__unicodez00(BgL_listz00_6980);
		}

	}



/* list->ucs2-string */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(obj_t
		BgL_listz00_53)
	{
		{	/* Llib/unicode.scm 398 */
			{	/* Llib/unicode.scm 399 */
				long BgL_lenz00_1268;

				BgL_lenz00_1268 = bgl_list_length(BgL_listz00_53);
				{	/* Llib/unicode.scm 399 */
					obj_t BgL_ucs2zd2stringzd2_1269;

					{	/* Llib/unicode.scm 137 */
						ucs2_t BgL_fillerz00_1280;

						{	/* Llib/unicode.scm 137 */
							int BgL_tmpz00_8072;

							BgL_tmpz00_8072 =
								(int) (((unsigned char) ((char) (((unsigned char) ' ')))));
							BgL_fillerz00_1280 = BGL_INT_TO_UCS2(BgL_tmpz00_8072);
						}
						{	/* Llib/unicode.scm 137 */

							BgL_ucs2zd2stringzd2_1269 =
								make_ucs2_string((int) (BgL_lenz00_1268), BgL_fillerz00_1280);
					}}
					{	/* Llib/unicode.scm 400 */

						{
							long BgL_iz00_3191;
							obj_t BgL_lz00_3192;

							BgL_iz00_3191 = ((long) 0);
							BgL_lz00_3192 = BgL_listz00_53;
						BgL_loopz00_3190:
							if ((BgL_iz00_3191 == BgL_lenz00_1268))
								{	/* Llib/unicode.scm 403 */
									return BgL_ucs2zd2stringzd2_1269;
								}
							else
								{	/* Llib/unicode.scm 403 */
									{	/* Llib/unicode.scm 406 */
										obj_t BgL_arg1303z00_3198;

										BgL_arg1303z00_3198 = CAR(((obj_t) BgL_lz00_3192));
										{	/* Llib/unicode.scm 406 */
											int BgL_kz00_3206;
											ucs2_t BgL_ucs2z00_3207;

											BgL_kz00_3206 = (int) (BgL_iz00_3191);
											BgL_ucs2z00_3207 = CUCS2(BgL_arg1303z00_3198);
											{	/* Llib/unicode.scm 261 */
												bool_t BgL_test4477z00_8086;

												{	/* Llib/unicode.scm 261 */
													long BgL_auxz00_8089;
													long BgL_tmpz00_8087;

													BgL_auxz00_8089 =
														(long) (UCS2_STRING_LENGTH
														(BgL_ucs2zd2stringzd2_1269));
													BgL_tmpz00_8087 = (long) (BgL_kz00_3206);
													BgL_test4477z00_8086 =
														BOUND_CHECK(BgL_tmpz00_8087, BgL_auxz00_8089);
												}
												if (BgL_test4477z00_8086)
													{	/* Llib/unicode.scm 261 */
														UCS2_STRING_SET(BgL_ucs2zd2stringzd2_1269,
															BgL_kz00_3206, BgL_ucs2z00_3207);
													}
												else
													{	/* Llib/unicode.scm 266 */
														obj_t BgL_arg1242z00_3210;

														{	/* Llib/unicode.scm 266 */
															obj_t BgL_arg1243z00_3211;

															{	/* Llib/unicode.scm 266 */

																BgL_arg1243z00_3211 =
																	BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																	(((long) (UCS2_STRING_LENGTH
																			(BgL_ucs2zd2stringzd2_1269)) -
																		((long) 1)), ((long) 10));
															}
															BgL_arg1242z00_3210 =
																string_append_3(BGl_string4151z00zz__unicodez00,
																BgL_arg1243z00_3211,
																BGl_string4152z00zz__unicodez00);
														}
														BGl_errorz00zz__errorz00
															(BGl_symbol4156z00zz__unicodez00,
															BgL_arg1242z00_3210, BINT(BgL_kz00_3206));
									}}}}
									{	/* Llib/unicode.scm 407 */
										long BgL_arg1304z00_3199;
										obj_t BgL_arg1306z00_3200;

										BgL_arg1304z00_3199 = (BgL_iz00_3191 + ((long) 1));
										BgL_arg1306z00_3200 = CDR(((obj_t) BgL_lz00_3192));
										{
											obj_t BgL_lz00_8105;
											long BgL_iz00_8104;

											BgL_iz00_8104 = BgL_arg1304z00_3199;
											BgL_lz00_8105 = BgL_arg1306z00_3200;
											BgL_lz00_3192 = BgL_lz00_8105;
											BgL_iz00_3191 = BgL_iz00_8104;
											goto BgL_loopz00_3190;
										}
									}
								}
						}
					}
				}
			}
		}

	}



/* &list->ucs2-string */
	obj_t BGl_z62listzd2ze3ucs2zd2stringz81zz__unicodez00(obj_t BgL_envz00_6981,
		obj_t BgL_listz00_6982)
	{
		{	/* Llib/unicode.scm 398 */
			return BGl_listzd2ze3ucs2zd2stringze3zz__unicodez00(BgL_listz00_6982);
		}

	}



/* ucs2-string->list */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2ze3listze3zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_54)
	{
		{	/* Llib/unicode.scm 412 */
			{	/* Llib/unicode.scm 413 */
				int BgL_lenz00_1281;

				BgL_lenz00_1281 = UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_54);
				{
					long BgL_iz00_3280;
					obj_t BgL_accz00_3281;

					BgL_iz00_3280 = ((long) 0);
					BgL_accz00_3281 = BNIL;
				BgL_loopz00_3279:
					if ((BgL_iz00_3280 == (long) (BgL_lenz00_1281)))
						{	/* Llib/unicode.scm 416 */
							return bgl_reverse_bang(BgL_accz00_3281);
						}
					else
						{	/* Llib/unicode.scm 418 */
							long BgL_arg1309z00_3287;
							obj_t BgL_arg1310z00_3288;

							BgL_arg1309z00_3287 = (BgL_iz00_3280 + ((long) 1));
							{	/* Llib/unicode.scm 419 */
								ucs2_t BgL_arg1311z00_3289;

								{	/* Llib/unicode.scm 419 */
									ucs2_t BgL_res2794z00_3311;

									{	/* Llib/unicode.scm 419 */
										int BgL_kz00_3296;

										BgL_kz00_3296 = (int) (BgL_iz00_3280);
										{	/* Llib/unicode.scm 248 */
											bool_t BgL_test4479z00_8114;

											{	/* Llib/unicode.scm 248 */
												long BgL_auxz00_8117;
												long BgL_tmpz00_8115;

												BgL_auxz00_8117 =
													(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_54));
												BgL_tmpz00_8115 = (long) (BgL_kz00_3296);
												BgL_test4479z00_8114 =
													BOUND_CHECK(BgL_tmpz00_8115, BgL_auxz00_8117);
											}
											if (BgL_test4479z00_8114)
												{	/* Llib/unicode.scm 248 */
													BgL_res2794z00_3311 =
														UCS2_STRING_REF(BgL_ucs2zd2stringzd2_54,
														BgL_kz00_3296);
												}
											else
												{	/* Llib/unicode.scm 253 */
													obj_t BgL_arg1223z00_3299;

													{	/* Llib/unicode.scm 253 */
														obj_t BgL_arg1225z00_3300;

														{	/* Llib/unicode.scm 253 */

															BgL_arg1225z00_3300 =
																BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																(((long) (UCS2_STRING_LENGTH
																		(BgL_ucs2zd2stringzd2_54)) - ((long) 1)),
																((long) 10));
														}
														BgL_arg1223z00_3299 =
															string_append_3(BGl_string4151z00zz__unicodez00,
															BgL_arg1225z00_3300,
															BGl_string4152z00zz__unicodez00);
													}
													BgL_res2794z00_3311 =
														CUCS2(BGl_errorz00zz__errorz00
														(BGl_symbol4153z00zz__unicodez00,
															BgL_arg1223z00_3299, BINT(BgL_kz00_3296)));
									}}}
									BgL_arg1311z00_3289 = BgL_res2794z00_3311;
								}
								BgL_arg1310z00_3288 =
									MAKE_YOUNG_PAIR(BUCS2(BgL_arg1311z00_3289), BgL_accz00_3281);
							}
							{
								obj_t BgL_accz00_8133;
								long BgL_iz00_8132;

								BgL_iz00_8132 = BgL_arg1309z00_3287;
								BgL_accz00_8133 = BgL_arg1310z00_3288;
								BgL_accz00_3281 = BgL_accz00_8133;
								BgL_iz00_3280 = BgL_iz00_8132;
								goto BgL_loopz00_3279;
							}
						}
				}
			}
		}

	}



/* &ucs2-string->list */
	obj_t BGl_z62ucs2zd2stringzd2ze3listz81zz__unicodez00(obj_t BgL_envz00_6983,
		obj_t BgL_ucs2zd2stringzd2_6984)
	{
		{	/* Llib/unicode.scm 412 */
			{	/* Llib/unicode.scm 413 */
				obj_t BgL_auxz00_8134;

				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_6984))
					{	/* Llib/unicode.scm 413 */
						BgL_auxz00_8134 = BgL_ucs2zd2stringzd2_6984;
					}
				else
					{
						obj_t BgL_auxz00_8137;

						BgL_auxz00_8137 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 19003)), BGl_string4177z00zz__unicodez00,
							BGl_string4150z00zz__unicodez00, BgL_ucs2zd2stringzd2_6984);
						FAILURE(BgL_auxz00_8137, BFALSE, BFALSE);
					}
				return BGl_ucs2zd2stringzd2ze3listze3zz__unicodez00(BgL_auxz00_8134);
			}
		}

	}



/* ucs2-string-copy */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2copyz00zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_55)
	{
		{	/* Llib/unicode.scm 425 */
			return c_ucs2_string_copy(BgL_ucs2zd2stringzd2_55);
		}

	}



/* &ucs2-string-copy */
	obj_t BGl_z62ucs2zd2stringzd2copyz62zz__unicodez00(obj_t BgL_envz00_6985,
		obj_t BgL_ucs2zd2stringzd2_6986)
	{
		{	/* Llib/unicode.scm 425 */
			{	/* Llib/unicode.scm 426 */
				obj_t BgL_auxz00_8143;

				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_6986))
					{	/* Llib/unicode.scm 426 */
						BgL_auxz00_8143 = BgL_ucs2zd2stringzd2_6986;
					}
				else
					{
						obj_t BgL_auxz00_8146;

						BgL_auxz00_8146 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 19478)), BGl_string4178z00zz__unicodez00,
							BGl_string4150z00zz__unicodez00, BgL_ucs2zd2stringzd2_6986);
						FAILURE(BgL_auxz00_8146, BFALSE, BFALSE);
					}
				return BGl_ucs2zd2stringzd2copyz00zz__unicodez00(BgL_auxz00_8143);
			}
		}

	}



/* ucs2-string-fill! */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2fillz12z12zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_56, ucs2_t BgL_ucs2z00_57)
	{
		{	/* Llib/unicode.scm 431 */
			{	/* Llib/unicode.scm 432 */
				int BgL_lenz00_3312;

				BgL_lenz00_3312 = UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_56);
				{
					long BgL_iz00_3368;

					BgL_iz00_3368 = ((long) 0);
				BgL_loopz00_3367:
					if ((BgL_iz00_3368 == (long) (BgL_lenz00_3312)))
						{	/* Llib/unicode.scm 434 */
							return BgL_ucs2zd2stringzd2_56;
						}
					else
						{	/* Llib/unicode.scm 434 */
							{	/* Llib/unicode.scm 437 */
								int BgL_kz00_3377;

								BgL_kz00_3377 = (int) (BgL_iz00_3368);
								{	/* Llib/unicode.scm 261 */
									bool_t BgL_test4483z00_8156;

									{	/* Llib/unicode.scm 261 */
										long BgL_auxz00_8159;
										long BgL_tmpz00_8157;

										BgL_auxz00_8159 =
											(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_56));
										BgL_tmpz00_8157 = (long) (BgL_kz00_3377);
										BgL_test4483z00_8156 =
											BOUND_CHECK(BgL_tmpz00_8157, BgL_auxz00_8159);
									}
									if (BgL_test4483z00_8156)
										{	/* Llib/unicode.scm 261 */
											UCS2_STRING_SET(BgL_ucs2zd2stringzd2_56, BgL_kz00_3377,
												BgL_ucs2z00_57);
										}
									else
										{	/* Llib/unicode.scm 266 */
											obj_t BgL_arg1242z00_3381;

											{	/* Llib/unicode.scm 266 */
												obj_t BgL_arg1243z00_3382;

												{	/* Llib/unicode.scm 266 */

													BgL_arg1243z00_3382 =
														BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
														(((long) (UCS2_STRING_LENGTH
																(BgL_ucs2zd2stringzd2_56)) - ((long) 1)),
														((long) 10));
												}
												BgL_arg1242z00_3381 =
													string_append_3(BGl_string4151z00zz__unicodez00,
													BgL_arg1243z00_3382, BGl_string4152z00zz__unicodez00);
											}
											BGl_errorz00zz__errorz00(BGl_symbol4156z00zz__unicodez00,
												BgL_arg1242z00_3381, BINT(BgL_kz00_3377));
							}}}
							{
								long BgL_iz00_8171;

								BgL_iz00_8171 = (BgL_iz00_3368 + ((long) 1));
								BgL_iz00_3368 = BgL_iz00_8171;
								goto BgL_loopz00_3367;
							}
						}
				}
			}
		}

	}



/* &ucs2-string-fill! */
	obj_t BGl_z62ucs2zd2stringzd2fillz12z70zz__unicodez00(obj_t BgL_envz00_6987,
		obj_t BgL_ucs2zd2stringzd2_6988, obj_t BgL_ucs2z00_6989)
	{
		{	/* Llib/unicode.scm 431 */
			{	/* Llib/unicode.scm 432 */
				ucs2_t BgL_auxz00_8180;
				obj_t BgL_auxz00_8173;

				{	/* Llib/unicode.scm 432 */
					obj_t BgL_tmpz00_8181;

					if (UCS2P(BgL_ucs2z00_6989))
						{	/* Llib/unicode.scm 432 */
							BgL_tmpz00_8181 = BgL_ucs2z00_6989;
						}
					else
						{
							obj_t BgL_auxz00_8184;

							BgL_auxz00_8184 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 19783)), BGl_string4179z00zz__unicodez00,
								BGl_string4148z00zz__unicodez00, BgL_ucs2z00_6989);
							FAILURE(BgL_auxz00_8184, BFALSE, BFALSE);
						}
					BgL_auxz00_8180 = CUCS2(BgL_tmpz00_8181);
				}
				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_6988))
					{	/* Llib/unicode.scm 432 */
						BgL_auxz00_8173 = BgL_ucs2zd2stringzd2_6988;
					}
				else
					{
						obj_t BgL_auxz00_8176;

						BgL_auxz00_8176 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 19783)), BGl_string4179z00zz__unicodez00,
							BGl_string4150z00zz__unicodez00, BgL_ucs2zd2stringzd2_6988);
						FAILURE(BgL_auxz00_8176, BFALSE, BFALSE);
					}
				return
					BGl_ucs2zd2stringzd2fillz12z12zz__unicodez00(BgL_auxz00_8173,
					BgL_auxz00_8180);
			}
		}

	}



/* ucs2-string-upcase */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2upcasez00zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_58)
	{
		{	/* Llib/unicode.scm 443 */
			{	/* Llib/unicode.scm 444 */
				int BgL_lenz00_1299;

				BgL_lenz00_1299 = UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_58);
				{	/* Llib/unicode.scm 444 */
					obj_t BgL_resz00_1300;

					{	/* Llib/unicode.scm 137 */
						ucs2_t BgL_fillerz00_1310;

						{	/* Llib/unicode.scm 137 */
							int BgL_tmpz00_8191;

							BgL_tmpz00_8191 =
								(int) (((unsigned char) ((char) (((unsigned char) ' ')))));
							BgL_fillerz00_1310 = BGL_INT_TO_UCS2(BgL_tmpz00_8191);
						}
						{	/* Llib/unicode.scm 137 */

							BgL_resz00_1300 =
								make_ucs2_string(BgL_lenz00_1299, BgL_fillerz00_1310);
					}}
					{	/* Llib/unicode.scm 445 */

						{
							long BgL_iz00_3449;

							BgL_iz00_3449 = ((long) 0);
						BgL_loopz00_3448:
							if ((BgL_iz00_3449 == (long) (BgL_lenz00_1299)))
								{	/* Llib/unicode.scm 447 */
									return BgL_resz00_1300;
								}
							else
								{	/* Llib/unicode.scm 447 */
									{	/* Llib/unicode.scm 451 */
										ucs2_t BgL_arg1317z00_3454;

										{	/* Llib/unicode.scm 451 */
											ucs2_t BgL_arg1318z00_3455;

											{	/* Llib/unicode.scm 451 */
												ucs2_t BgL_res2820z00_3456;

												{	/* Llib/unicode.scm 451 */
													int BgL_kz00_3458;

													BgL_kz00_3458 = (int) (BgL_iz00_3449);
													{	/* Llib/unicode.scm 248 */
														bool_t BgL_test4487z00_8202;

														{	/* Llib/unicode.scm 248 */
															long BgL_auxz00_8205;
															long BgL_tmpz00_8203;

															BgL_auxz00_8205 =
																(long) (UCS2_STRING_LENGTH
																(BgL_ucs2zd2stringzd2_58));
															BgL_tmpz00_8203 = (long) (BgL_kz00_3458);
															BgL_test4487z00_8202 =
																BOUND_CHECK(BgL_tmpz00_8203, BgL_auxz00_8205);
														}
														if (BgL_test4487z00_8202)
															{	/* Llib/unicode.scm 248 */
																BgL_res2820z00_3456 =
																	UCS2_STRING_REF(BgL_ucs2zd2stringzd2_58,
																	BgL_kz00_3458);
															}
														else
															{	/* Llib/unicode.scm 253 */
																obj_t BgL_arg1223z00_3463;

																{	/* Llib/unicode.scm 253 */
																	obj_t BgL_arg1225z00_3464;

																	{	/* Llib/unicode.scm 253 */

																		BgL_arg1225z00_3464 =
																			BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																			(((long) (UCS2_STRING_LENGTH
																					(BgL_ucs2zd2stringzd2_58)) -
																				((long) 1)), ((long) 10));
																	}
																	BgL_arg1223z00_3463 =
																		string_append_3
																		(BGl_string4151z00zz__unicodez00,
																		BgL_arg1225z00_3464,
																		BGl_string4152z00zz__unicodez00);
																}
																BgL_res2820z00_3456 =
																	CUCS2(BGl_errorz00zz__errorz00
																	(BGl_symbol4153z00zz__unicodez00,
																		BgL_arg1223z00_3463, BINT(BgL_kz00_3458)));
												}}}
												BgL_arg1318z00_3455 = BgL_res2820z00_3456;
											}
											BgL_arg1317z00_3454 = ucs2_toupper(BgL_arg1318z00_3455);
										}
										{	/* Llib/unicode.scm 450 */
											int BgL_kz00_3476;

											BgL_kz00_3476 = (int) (BgL_iz00_3449);
											{	/* Llib/unicode.scm 261 */
												bool_t BgL_test4488z00_8220;

												{	/* Llib/unicode.scm 261 */
													long BgL_auxz00_8223;
													long BgL_tmpz00_8221;

													BgL_auxz00_8223 =
														(long) (UCS2_STRING_LENGTH(BgL_resz00_1300));
													BgL_tmpz00_8221 = (long) (BgL_kz00_3476);
													BgL_test4488z00_8220 =
														BOUND_CHECK(BgL_tmpz00_8221, BgL_auxz00_8223);
												}
												if (BgL_test4488z00_8220)
													{	/* Llib/unicode.scm 261 */
														UCS2_STRING_SET(BgL_resz00_1300, BgL_kz00_3476,
															BgL_arg1317z00_3454);
													}
												else
													{	/* Llib/unicode.scm 266 */
														obj_t BgL_arg1242z00_3482;

														{	/* Llib/unicode.scm 266 */
															obj_t BgL_arg1243z00_3483;

															{	/* Llib/unicode.scm 266 */

																BgL_arg1243z00_3483 =
																	BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																	(((long) (UCS2_STRING_LENGTH(BgL_resz00_1300))
																		- ((long) 1)), ((long) 10));
															}
															BgL_arg1242z00_3482 =
																string_append_3(BGl_string4151z00zz__unicodez00,
																BgL_arg1243z00_3483,
																BGl_string4152z00zz__unicodez00);
														}
														BGl_errorz00zz__errorz00
															(BGl_symbol4156z00zz__unicodez00,
															BgL_arg1242z00_3482, BINT(BgL_kz00_3476));
									}}}}
									{
										long BgL_iz00_8235;

										BgL_iz00_8235 = (BgL_iz00_3449 + ((long) 1));
										BgL_iz00_3449 = BgL_iz00_8235;
										goto BgL_loopz00_3448;
									}
								}
						}
					}
				}
			}
		}

	}



/* &ucs2-string-upcase */
	obj_t BGl_z62ucs2zd2stringzd2upcasez62zz__unicodez00(obj_t BgL_envz00_6990,
		obj_t BgL_ucs2zd2stringzd2_6991)
	{
		{	/* Llib/unicode.scm 443 */
			{	/* Llib/unicode.scm 444 */
				obj_t BgL_auxz00_8237;

				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_6991))
					{	/* Llib/unicode.scm 444 */
						BgL_auxz00_8237 = BgL_ucs2zd2stringzd2_6991;
					}
				else
					{
						obj_t BgL_auxz00_8240;

						BgL_auxz00_8240 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 20233)), BGl_string4180z00zz__unicodez00,
							BGl_string4150z00zz__unicodez00, BgL_ucs2zd2stringzd2_6991);
						FAILURE(BgL_auxz00_8240, BFALSE, BFALSE);
					}
				return BGl_ucs2zd2stringzd2upcasez00zz__unicodez00(BgL_auxz00_8237);
			}
		}

	}



/* ucs2-string-downcase */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2downcasez00zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_59)
	{
		{	/* Llib/unicode.scm 457 */
			{	/* Llib/unicode.scm 458 */
				int BgL_lenz00_1311;

				BgL_lenz00_1311 = UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_59);
				{	/* Llib/unicode.scm 458 */
					obj_t BgL_resz00_1312;

					{	/* Llib/unicode.scm 137 */
						ucs2_t BgL_fillerz00_1322;

						{	/* Llib/unicode.scm 137 */
							int BgL_tmpz00_8246;

							BgL_tmpz00_8246 =
								(int) (((unsigned char) ((char) (((unsigned char) ' ')))));
							BgL_fillerz00_1322 = BGL_INT_TO_UCS2(BgL_tmpz00_8246);
						}
						{	/* Llib/unicode.scm 137 */

							BgL_resz00_1312 =
								make_ucs2_string(BgL_lenz00_1311, BgL_fillerz00_1322);
					}}
					{	/* Llib/unicode.scm 459 */

						{
							long BgL_iz00_3549;

							BgL_iz00_3549 = ((long) 0);
						BgL_loopz00_3548:
							if ((BgL_iz00_3549 == (long) (BgL_lenz00_1311)))
								{	/* Llib/unicode.scm 461 */
									return BgL_resz00_1312;
								}
							else
								{	/* Llib/unicode.scm 461 */
									{	/* Llib/unicode.scm 465 */
										ucs2_t BgL_arg1322z00_3554;

										{	/* Llib/unicode.scm 465 */
											ucs2_t BgL_arg1324z00_3555;

											{	/* Llib/unicode.scm 465 */
												ucs2_t BgL_res2835z00_3556;

												{	/* Llib/unicode.scm 465 */
													int BgL_kz00_3558;

													BgL_kz00_3558 = (int) (BgL_iz00_3549);
													{	/* Llib/unicode.scm 248 */
														bool_t BgL_test4491z00_8257;

														{	/* Llib/unicode.scm 248 */
															long BgL_auxz00_8260;
															long BgL_tmpz00_8258;

															BgL_auxz00_8260 =
																(long) (UCS2_STRING_LENGTH
																(BgL_ucs2zd2stringzd2_59));
															BgL_tmpz00_8258 = (long) (BgL_kz00_3558);
															BgL_test4491z00_8257 =
																BOUND_CHECK(BgL_tmpz00_8258, BgL_auxz00_8260);
														}
														if (BgL_test4491z00_8257)
															{	/* Llib/unicode.scm 248 */
																BgL_res2835z00_3556 =
																	UCS2_STRING_REF(BgL_ucs2zd2stringzd2_59,
																	BgL_kz00_3558);
															}
														else
															{	/* Llib/unicode.scm 253 */
																obj_t BgL_arg1223z00_3563;

																{	/* Llib/unicode.scm 253 */
																	obj_t BgL_arg1225z00_3564;

																	{	/* Llib/unicode.scm 253 */

																		BgL_arg1225z00_3564 =
																			BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																			(((long) (UCS2_STRING_LENGTH
																					(BgL_ucs2zd2stringzd2_59)) -
																				((long) 1)), ((long) 10));
																	}
																	BgL_arg1223z00_3563 =
																		string_append_3
																		(BGl_string4151z00zz__unicodez00,
																		BgL_arg1225z00_3564,
																		BGl_string4152z00zz__unicodez00);
																}
																BgL_res2835z00_3556 =
																	CUCS2(BGl_errorz00zz__errorz00
																	(BGl_symbol4153z00zz__unicodez00,
																		BgL_arg1223z00_3563, BINT(BgL_kz00_3558)));
												}}}
												BgL_arg1324z00_3555 = BgL_res2835z00_3556;
											}
											BgL_arg1322z00_3554 = ucs2_tolower(BgL_arg1324z00_3555);
										}
										{	/* Llib/unicode.scm 464 */
											int BgL_kz00_3576;

											BgL_kz00_3576 = (int) (BgL_iz00_3549);
											{	/* Llib/unicode.scm 261 */
												bool_t BgL_test4492z00_8275;

												{	/* Llib/unicode.scm 261 */
													long BgL_auxz00_8278;
													long BgL_tmpz00_8276;

													BgL_auxz00_8278 =
														(long) (UCS2_STRING_LENGTH(BgL_resz00_1312));
													BgL_tmpz00_8276 = (long) (BgL_kz00_3576);
													BgL_test4492z00_8275 =
														BOUND_CHECK(BgL_tmpz00_8276, BgL_auxz00_8278);
												}
												if (BgL_test4492z00_8275)
													{	/* Llib/unicode.scm 261 */
														UCS2_STRING_SET(BgL_resz00_1312, BgL_kz00_3576,
															BgL_arg1322z00_3554);
													}
												else
													{	/* Llib/unicode.scm 266 */
														obj_t BgL_arg1242z00_3582;

														{	/* Llib/unicode.scm 266 */
															obj_t BgL_arg1243z00_3583;

															{	/* Llib/unicode.scm 266 */

																BgL_arg1243z00_3583 =
																	BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																	(((long) (UCS2_STRING_LENGTH(BgL_resz00_1312))
																		- ((long) 1)), ((long) 10));
															}
															BgL_arg1242z00_3582 =
																string_append_3(BGl_string4151z00zz__unicodez00,
																BgL_arg1243z00_3583,
																BGl_string4152z00zz__unicodez00);
														}
														BGl_errorz00zz__errorz00
															(BGl_symbol4156z00zz__unicodez00,
															BgL_arg1242z00_3582, BINT(BgL_kz00_3576));
									}}}}
									{
										long BgL_iz00_8290;

										BgL_iz00_8290 = (BgL_iz00_3549 + ((long) 1));
										BgL_iz00_3549 = BgL_iz00_8290;
										goto BgL_loopz00_3548;
									}
								}
						}
					}
				}
			}
		}

	}



/* &ucs2-string-downcase */
	obj_t BGl_z62ucs2zd2stringzd2downcasez62zz__unicodez00(obj_t BgL_envz00_6992,
		obj_t BgL_ucs2zd2stringzd2_6993)
	{
		{	/* Llib/unicode.scm 457 */
			{	/* Llib/unicode.scm 458 */
				obj_t BgL_auxz00_8292;

				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_6993))
					{	/* Llib/unicode.scm 458 */
						BgL_auxz00_8292 = BgL_ucs2zd2stringzd2_6993;
					}
				else
					{
						obj_t BgL_auxz00_8295;

						BgL_auxz00_8295 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 20748)), BGl_string4181z00zz__unicodez00,
							BGl_string4150z00zz__unicodez00, BgL_ucs2zd2stringzd2_6993);
						FAILURE(BgL_auxz00_8295, BFALSE, BFALSE);
					}
				return BGl_ucs2zd2stringzd2downcasez00zz__unicodez00(BgL_auxz00_8292);
			}
		}

	}



/* ucs2-string-upcase! */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2upcasez12z12zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_60)
	{
		{	/* Llib/unicode.scm 471 */
			{	/* Llib/unicode.scm 472 */
				int BgL_lenz00_1323;

				BgL_lenz00_1323 = UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_60);
				{	/* Llib/unicode.scm 473 */

					{
						long BgL_iz00_3639;

						BgL_iz00_3639 = ((long) 0);
					BgL_loopz00_3638:
						if ((BgL_iz00_3639 == (long) (BgL_lenz00_1323)))
							{	/* Llib/unicode.scm 475 */
								return BgL_ucs2zd2stringzd2_60;
							}
						else
							{	/* Llib/unicode.scm 475 */
								{	/* Llib/unicode.scm 479 */
									ucs2_t BgL_arg1328z00_3644;

									{	/* Llib/unicode.scm 479 */
										ucs2_t BgL_arg1329z00_3645;

										{	/* Llib/unicode.scm 479 */
											ucs2_t BgL_res2846z00_3646;

											{	/* Llib/unicode.scm 479 */
												int BgL_kz00_3648;

												BgL_kz00_3648 = (int) (BgL_iz00_3639);
												{	/* Llib/unicode.scm 248 */
													bool_t BgL_test4495z00_8305;

													{	/* Llib/unicode.scm 248 */
														long BgL_auxz00_8308;
														long BgL_tmpz00_8306;

														BgL_auxz00_8308 =
															(long) (UCS2_STRING_LENGTH
															(BgL_ucs2zd2stringzd2_60));
														BgL_tmpz00_8306 = (long) (BgL_kz00_3648);
														BgL_test4495z00_8305 =
															BOUND_CHECK(BgL_tmpz00_8306, BgL_auxz00_8308);
													}
													if (BgL_test4495z00_8305)
														{	/* Llib/unicode.scm 248 */
															BgL_res2846z00_3646 =
																UCS2_STRING_REF(BgL_ucs2zd2stringzd2_60,
																BgL_kz00_3648);
														}
													else
														{	/* Llib/unicode.scm 253 */
															obj_t BgL_arg1223z00_3653;

															{	/* Llib/unicode.scm 253 */
																obj_t BgL_arg1225z00_3654;

																{	/* Llib/unicode.scm 253 */

																	BgL_arg1225z00_3654 =
																		BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																		(((long) (UCS2_STRING_LENGTH
																				(BgL_ucs2zd2stringzd2_60)) -
																			((long) 1)), ((long) 10));
																}
																BgL_arg1223z00_3653 =
																	string_append_3
																	(BGl_string4151z00zz__unicodez00,
																	BgL_arg1225z00_3654,
																	BGl_string4152z00zz__unicodez00);
															}
															BgL_res2846z00_3646 =
																CUCS2(BGl_errorz00zz__errorz00
																(BGl_symbol4153z00zz__unicodez00,
																	BgL_arg1223z00_3653, BINT(BgL_kz00_3648)));
											}}}
											BgL_arg1329z00_3645 = BgL_res2846z00_3646;
										}
										BgL_arg1328z00_3644 = ucs2_toupper(BgL_arg1329z00_3645);
									}
									{	/* Llib/unicode.scm 478 */
										int BgL_kz00_3666;

										BgL_kz00_3666 = (int) (BgL_iz00_3639);
										{	/* Llib/unicode.scm 261 */
											bool_t BgL_test4496z00_8323;

											{	/* Llib/unicode.scm 261 */
												long BgL_auxz00_8326;
												long BgL_tmpz00_8324;

												BgL_auxz00_8326 =
													(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_60));
												BgL_tmpz00_8324 = (long) (BgL_kz00_3666);
												BgL_test4496z00_8323 =
													BOUND_CHECK(BgL_tmpz00_8324, BgL_auxz00_8326);
											}
											if (BgL_test4496z00_8323)
												{	/* Llib/unicode.scm 261 */
													UCS2_STRING_SET(BgL_ucs2zd2stringzd2_60,
														BgL_kz00_3666, BgL_arg1328z00_3644);
												}
											else
												{	/* Llib/unicode.scm 266 */
													obj_t BgL_arg1242z00_3672;

													{	/* Llib/unicode.scm 266 */
														obj_t BgL_arg1243z00_3673;

														{	/* Llib/unicode.scm 266 */

															BgL_arg1243z00_3673 =
																BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																(((long) (UCS2_STRING_LENGTH
																		(BgL_ucs2zd2stringzd2_60)) - ((long) 1)),
																((long) 10));
														}
														BgL_arg1242z00_3672 =
															string_append_3(BGl_string4151z00zz__unicodez00,
															BgL_arg1243z00_3673,
															BGl_string4152z00zz__unicodez00);
													}
													BGl_errorz00zz__errorz00
														(BGl_symbol4156z00zz__unicodez00,
														BgL_arg1242z00_3672, BINT(BgL_kz00_3666));
								}}}}
								{
									long BgL_iz00_8338;

									BgL_iz00_8338 = (BgL_iz00_3639 + ((long) 1));
									BgL_iz00_3639 = BgL_iz00_8338;
									goto BgL_loopz00_3638;
								}
							}
					}
				}
			}
		}

	}



/* &ucs2-string-upcase! */
	obj_t BGl_z62ucs2zd2stringzd2upcasez12z70zz__unicodez00(obj_t BgL_envz00_6994,
		obj_t BgL_ucs2zd2stringzd2_6995)
	{
		{	/* Llib/unicode.scm 471 */
			{	/* Llib/unicode.scm 472 */
				obj_t BgL_auxz00_8340;

				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_6995))
					{	/* Llib/unicode.scm 472 */
						BgL_auxz00_8340 = BgL_ucs2zd2stringzd2_6995;
					}
				else
					{
						obj_t BgL_auxz00_8343;

						BgL_auxz00_8343 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 21264)), BGl_string4182z00zz__unicodez00,
							BGl_string4150z00zz__unicodez00, BgL_ucs2zd2stringzd2_6995);
						FAILURE(BgL_auxz00_8343, BFALSE, BFALSE);
					}
				return BGl_ucs2zd2stringzd2upcasez12z12zz__unicodez00(BgL_auxz00_8340);
			}
		}

	}



/* ucs2-string-downcase! */
	BGL_EXPORTED_DEF obj_t BGl_ucs2zd2stringzd2downcasez12z12zz__unicodez00(obj_t
		BgL_ucs2zd2stringzd2_61)
	{
		{	/* Llib/unicode.scm 485 */
			{	/* Llib/unicode.scm 486 */
				int BgL_lenz00_1333;

				BgL_lenz00_1333 = UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_61);
				{	/* Llib/unicode.scm 487 */

					{
						long BgL_iz00_3729;

						BgL_iz00_3729 = ((long) 0);
					BgL_loopz00_3728:
						if ((BgL_iz00_3729 == (long) (BgL_lenz00_1333)))
							{	/* Llib/unicode.scm 489 */
								return BgL_ucs2zd2stringzd2_61;
							}
						else
							{	/* Llib/unicode.scm 489 */
								{	/* Llib/unicode.scm 493 */
									ucs2_t BgL_arg1333z00_3734;

									{	/* Llib/unicode.scm 493 */
										ucs2_t BgL_arg1334z00_3735;

										{	/* Llib/unicode.scm 493 */
											ucs2_t BgL_res2857z00_3736;

											{	/* Llib/unicode.scm 493 */
												int BgL_kz00_3738;

												BgL_kz00_3738 = (int) (BgL_iz00_3729);
												{	/* Llib/unicode.scm 248 */
													bool_t BgL_test4499z00_8353;

													{	/* Llib/unicode.scm 248 */
														long BgL_auxz00_8356;
														long BgL_tmpz00_8354;

														BgL_auxz00_8356 =
															(long) (UCS2_STRING_LENGTH
															(BgL_ucs2zd2stringzd2_61));
														BgL_tmpz00_8354 = (long) (BgL_kz00_3738);
														BgL_test4499z00_8353 =
															BOUND_CHECK(BgL_tmpz00_8354, BgL_auxz00_8356);
													}
													if (BgL_test4499z00_8353)
														{	/* Llib/unicode.scm 248 */
															BgL_res2857z00_3736 =
																UCS2_STRING_REF(BgL_ucs2zd2stringzd2_61,
																BgL_kz00_3738);
														}
													else
														{	/* Llib/unicode.scm 253 */
															obj_t BgL_arg1223z00_3743;

															{	/* Llib/unicode.scm 253 */
																obj_t BgL_arg1225z00_3744;

																{	/* Llib/unicode.scm 253 */

																	BgL_arg1225z00_3744 =
																		BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																		(((long) (UCS2_STRING_LENGTH
																				(BgL_ucs2zd2stringzd2_61)) -
																			((long) 1)), ((long) 10));
																}
																BgL_arg1223z00_3743 =
																	string_append_3
																	(BGl_string4151z00zz__unicodez00,
																	BgL_arg1225z00_3744,
																	BGl_string4152z00zz__unicodez00);
															}
															BgL_res2857z00_3736 =
																CUCS2(BGl_errorz00zz__errorz00
																(BGl_symbol4153z00zz__unicodez00,
																	BgL_arg1223z00_3743, BINT(BgL_kz00_3738)));
											}}}
											BgL_arg1334z00_3735 = BgL_res2857z00_3736;
										}
										BgL_arg1333z00_3734 = ucs2_tolower(BgL_arg1334z00_3735);
									}
									{	/* Llib/unicode.scm 492 */
										int BgL_kz00_3756;

										BgL_kz00_3756 = (int) (BgL_iz00_3729);
										{	/* Llib/unicode.scm 261 */
											bool_t BgL_test4500z00_8371;

											{	/* Llib/unicode.scm 261 */
												long BgL_auxz00_8374;
												long BgL_tmpz00_8372;

												BgL_auxz00_8374 =
													(long) (UCS2_STRING_LENGTH(BgL_ucs2zd2stringzd2_61));
												BgL_tmpz00_8372 = (long) (BgL_kz00_3756);
												BgL_test4500z00_8371 =
													BOUND_CHECK(BgL_tmpz00_8372, BgL_auxz00_8374);
											}
											if (BgL_test4500z00_8371)
												{	/* Llib/unicode.scm 261 */
													UCS2_STRING_SET(BgL_ucs2zd2stringzd2_61,
														BgL_kz00_3756, BgL_arg1333z00_3734);
												}
											else
												{	/* Llib/unicode.scm 266 */
													obj_t BgL_arg1242z00_3762;

													{	/* Llib/unicode.scm 266 */
														obj_t BgL_arg1243z00_3763;

														{	/* Llib/unicode.scm 266 */

															BgL_arg1243z00_3763 =
																BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																(((long) (UCS2_STRING_LENGTH
																		(BgL_ucs2zd2stringzd2_61)) - ((long) 1)),
																((long) 10));
														}
														BgL_arg1242z00_3762 =
															string_append_3(BGl_string4151z00zz__unicodez00,
															BgL_arg1243z00_3763,
															BGl_string4152z00zz__unicodez00);
													}
													BGl_errorz00zz__errorz00
														(BGl_symbol4156z00zz__unicodez00,
														BgL_arg1242z00_3762, BINT(BgL_kz00_3756));
								}}}}
								{
									long BgL_iz00_8386;

									BgL_iz00_8386 = (BgL_iz00_3729 + ((long) 1));
									BgL_iz00_3729 = BgL_iz00_8386;
									goto BgL_loopz00_3728;
								}
							}
					}
				}
			}
		}

	}



/* &ucs2-string-downcase! */
	obj_t BGl_z62ucs2zd2stringzd2downcasez12z70zz__unicodez00(obj_t
		BgL_envz00_6996, obj_t BgL_ucs2zd2stringzd2_6997)
	{
		{	/* Llib/unicode.scm 485 */
			{	/* Llib/unicode.scm 486 */
				obj_t BgL_auxz00_8388;

				if (UCS2_STRINGP(BgL_ucs2zd2stringzd2_6997))
					{	/* Llib/unicode.scm 486 */
						BgL_auxz00_8388 = BgL_ucs2zd2stringzd2_6997;
					}
				else
					{
						obj_t BgL_auxz00_8391;

						BgL_auxz00_8391 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 21769)), BGl_string4183z00zz__unicodez00,
							BGl_string4150z00zz__unicodez00, BgL_ucs2zd2stringzd2_6997);
						FAILURE(BgL_auxz00_8391, BFALSE, BFALSE);
					}
				return
					BGl_ucs2zd2stringzd2downcasez12z12zz__unicodez00(BgL_auxz00_8388);
			}
		}

	}



/* ucs2-string->utf8-string */
	BGL_EXPORTED_DEF obj_t
		BGl_ucs2zd2stringzd2ze3utf8zd2stringz31zz__unicodez00(obj_t BgL_ucs2z00_62)
	{
		{	/* Llib/unicode.scm 499 */
			return ucs2_string_to_utf8_string(BgL_ucs2z00_62);
		}

	}



/* &ucs2-string->utf8-string */
	obj_t BGl_z62ucs2zd2stringzd2ze3utf8zd2stringz53zz__unicodez00(obj_t
		BgL_envz00_6998, obj_t BgL_ucs2z00_6999)
	{
		{	/* Llib/unicode.scm 499 */
			{	/* Llib/unicode.scm 500 */
				obj_t BgL_auxz00_8397;

				if (UCS2_STRINGP(BgL_ucs2z00_6999))
					{	/* Llib/unicode.scm 500 */
						BgL_auxz00_8397 = BgL_ucs2z00_6999;
					}
				else
					{
						obj_t BgL_auxz00_8400;

						BgL_auxz00_8400 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 22285)), BGl_string4184z00zz__unicodez00,
							BGl_string4150z00zz__unicodez00, BgL_ucs2z00_6999);
						FAILURE(BgL_auxz00_8400, BFALSE, BFALSE);
					}
				return
					BGl_ucs2zd2stringzd2ze3utf8zd2stringz31zz__unicodez00
					(BgL_auxz00_8397);
			}
		}

	}



/* inverse-utf8-table */
	BGL_EXPORTED_DEF obj_t BGl_inversezd2utf8zd2tablez00zz__unicodez00(obj_t
		BgL_tablez00_63)
	{
		{	/* Llib/unicode.scm 608 */
			{
				long BgL_iz00_1348;
				obj_t BgL_resz00_1349;

				BgL_iz00_1348 = ((long) 0);
				BgL_resz00_1349 = BNIL;
			BgL_zc3z04anonymousza31336ze3z87_1350:
				if ((BgL_iz00_1348 == VECTOR_LENGTH(BgL_tablez00_63)))
					{	/* Llib/unicode.scm 633 */
						return BgL_resz00_1349;
					}
				else
					{	/* Llib/unicode.scm 635 */
						obj_t BgL_sz00_1352;

						BgL_sz00_1352 = VECTOR_REF(BgL_tablez00_63, BgL_iz00_1348);
						if ((STRING_LENGTH(((obj_t) BgL_sz00_1352)) > ((long) 0)))
							{
								obj_t BgL_resz00_8415;
								long BgL_iz00_8413;

								BgL_iz00_8413 = (BgL_iz00_1348 + ((long) 1));
								BgL_resz00_8415 =
									BGl_addzd2tablezd2entryze70ze7zz__unicodez00(BgL_resz00_1349,
									BgL_sz00_1352, (((long) 128) + BgL_iz00_1348));
								BgL_resz00_1349 = BgL_resz00_8415;
								BgL_iz00_1348 = BgL_iz00_8413;
								goto BgL_zc3z04anonymousza31336ze3z87_1350;
							}
						else
							{
								long BgL_iz00_8418;

								BgL_iz00_8418 = (BgL_iz00_1348 + ((long) 1));
								BgL_iz00_1348 = BgL_iz00_8418;
								goto BgL_zc3z04anonymousza31336ze3z87_1350;
							}
					}
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__unicodez00(long BgL_lenz00_7070,
		long BgL_charz00_7069, obj_t BgL_sz00_7068, long BgL_iz00_1366)
	{
		{	/* Llib/unicode.scm 612 */
			if ((BgL_lenz00_7070 == BgL_iz00_1366))
				{	/* Llib/unicode.scm 613 */
					return BCHAR((BgL_charz00_7069));
				}
			else
				{	/* Llib/unicode.scm 615 */
					obj_t BgL_arg1348z00_1369;

					{	/* Llib/unicode.scm 615 */
						long BgL_arg1350z00_1371;
						obj_t BgL_arg1351z00_1372;

						BgL_arg1350z00_1371 =
							(STRING_REF(((obj_t) BgL_sz00_7068), BgL_iz00_1366));
						BgL_arg1351z00_1372 =
							BGl_loopze70ze7zz__unicodez00(BgL_lenz00_7070, BgL_charz00_7069,
							BgL_sz00_7068, (BgL_iz00_1366 + ((long) 1)));
						BgL_arg1348z00_1369 =
							MAKE_YOUNG_PAIR(BINT(BgL_arg1350z00_1371), BgL_arg1351z00_1372);
					}
					{	/* Llib/unicode.scm 615 */
						obj_t BgL_list1349z00_1370;

						BgL_list1349z00_1370 = MAKE_YOUNG_PAIR(BgL_arg1348z00_1369, BNIL);
						return BgL_list1349z00_1370;
					}
				}
		}

	}



/* make-table-entry~0 */
	obj_t BGl_makezd2tablezd2entryze70ze7zz__unicodez00(obj_t BgL_sz00_1361,
		long BgL_charz00_1362)
	{
		{	/* Llib/unicode.scm 615 */
			{	/* Llib/unicode.scm 611 */
				long BgL_lenz00_1364;

				BgL_lenz00_1364 = STRING_LENGTH(((obj_t) BgL_sz00_1361));
				return
					BGl_loopze70ze7zz__unicodez00(BgL_lenz00_1364, BgL_charz00_1362,
					BgL_sz00_1361, ((long) 0));
		}}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zz__unicodez00(obj_t BgL_ez00_1382,
		obj_t BgL_tablez00_1383)
	{
		{	/* Llib/unicode.scm 618 */
			if (NULLP(BgL_ez00_1382))
				{	/* Llib/unicode.scm 620 */
					return BgL_tablez00_1383;
				}
			else
				{	/* Llib/unicode.scm 622 */
					obj_t BgL_nz00_1386;

					BgL_nz00_1386 = CAR(((obj_t) BgL_ez00_1382));
					{	/* Llib/unicode.scm 622 */
						obj_t BgL_oz00_1387;

						BgL_oz00_1387 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_nz00_1386,
							BgL_tablez00_1383);
						{	/* Llib/unicode.scm 623 */

							if (CBOOL(BgL_oz00_1387))
								{	/* Llib/unicode.scm 625 */
									obj_t BgL_stz00_1388;

									BgL_stz00_1388 = CDR(((obj_t) BgL_oz00_1387));
									{	/* Llib/unicode.scm 626 */
										obj_t BgL_arg1357z00_1389;

										{	/* Llib/unicode.scm 626 */
											obj_t BgL_arg1359z00_1390;

											{	/* Llib/unicode.scm 626 */
												obj_t BgL_pairz00_3797;

												BgL_pairz00_3797 = CDR(((obj_t) BgL_ez00_1382));
												BgL_arg1359z00_1390 = CAR(BgL_pairz00_3797);
											}
											BgL_arg1357z00_1389 =
												BGl_loopze71ze7zz__unicodez00(BgL_arg1359z00_1390,
												BgL_stz00_1388);
										}
										{	/* Llib/unicode.scm 626 */
											obj_t BgL_tmpz00_8448;

											BgL_tmpz00_8448 = ((obj_t) BgL_oz00_1387);
											SET_CDR(BgL_tmpz00_8448, BgL_arg1357z00_1389);
										}
									}
									return BgL_tablez00_1383;
								}
							else
								{	/* Llib/unicode.scm 624 */
									return MAKE_YOUNG_PAIR(BgL_ez00_1382, BgL_tablez00_1383);
								}
						}
					}
				}
		}

	}



/* add-table-entry~0 */
	obj_t BGl_addzd2tablezd2entryze70ze7zz__unicodez00(obj_t BgL_tablez00_1376,
		obj_t BgL_sz00_1377, long BgL_charz00_1378)
	{
		{	/* Llib/unicode.scm 628 */
			{	/* Llib/unicode.scm 618 */
				obj_t BgL_g1042z00_1380;

				{	/* Llib/unicode.scm 618 */
					obj_t BgL_arg1360z00_1392;

					BgL_arg1360z00_1392 =
						BGl_makezd2tablezd2entryze70ze7zz__unicodez00(BgL_sz00_1377,
						BgL_charz00_1378);
					BgL_g1042z00_1380 = CAR(((obj_t) BgL_arg1360z00_1392));
				}
				return
					BGl_loopze71ze7zz__unicodez00(BgL_g1042z00_1380, BgL_tablez00_1376);
			}
		}

	}



/* &inverse-utf8-table */
	obj_t BGl_z62inversezd2utf8zd2tablez62zz__unicodez00(obj_t BgL_envz00_7000,
		obj_t BgL_tablez00_7001)
	{
		{	/* Llib/unicode.scm 608 */
			{	/* Llib/unicode.scm 611 */
				obj_t BgL_auxz00_8456;

				if (VECTORP(BgL_tablez00_7001))
					{	/* Llib/unicode.scm 611 */
						BgL_auxz00_8456 = BgL_tablez00_7001;
					}
				else
					{
						obj_t BgL_auxz00_8459;

						BgL_auxz00_8459 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 25215)), BGl_string4185z00zz__unicodez00,
							BGl_string4186z00zz__unicodez00, BgL_tablez00_7001);
						FAILURE(BgL_auxz00_8459, BFALSE, BFALSE);
					}
				return BGl_inversezd2utf8zd2tablez00zz__unicodez00(BgL_auxz00_8456);
			}
		}

	}



/* utf8-string->ucs2-string */
	BGL_EXPORTED_DEF obj_t
		BGl_utf8zd2stringzd2ze3ucs2zd2stringz31zz__unicodez00(obj_t BgL_utf8z00_64)
	{
		{	/* Llib/unicode.scm 643 */
			return utf8_string_to_ucs2_string(BgL_utf8z00_64);
		}

	}



/* &utf8-string->ucs2-string */
	obj_t BGl_z62utf8zd2stringzd2ze3ucs2zd2stringz53zz__unicodez00(obj_t
		BgL_envz00_7002, obj_t BgL_utf8z00_7003)
	{
		{	/* Llib/unicode.scm 643 */
			{	/* Llib/unicode.scm 644 */
				obj_t BgL_auxz00_8465;

				if (STRINGP(BgL_utf8z00_7003))
					{	/* Llib/unicode.scm 644 */
						BgL_auxz00_8465 = BgL_utf8z00_7003;
					}
				else
					{
						obj_t BgL_auxz00_8468;

						BgL_auxz00_8468 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 26236)), BGl_string4187z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_utf8z00_7003);
						FAILURE(BgL_auxz00_8468, BFALSE, BFALSE);
					}
				return
					BGl_utf8zd2stringzd2ze3ucs2zd2stringz31zz__unicodez00
					(BgL_auxz00_8465);
			}
		}

	}



/* utf8->8bits-length */
	long BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(obj_t BgL_strz00_65,
		long BgL_lenz00_66)
	{
		{	/* Llib/unicode.scm 649 */
			{
				long BgL_siza7eza7_1396;
				long BgL_iz00_1397;

				BgL_siza7eza7_1396 = ((long) 0);
				BgL_iz00_1397 = ((long) 0);
			BgL_zc3z04anonymousza31361ze3z87_1398:
				if ((BgL_iz00_1397 >= BgL_lenz00_66))
					{	/* Llib/unicode.scm 652 */
						return BgL_siza7eza7_1396;
					}
				else
					{	/* Llib/unicode.scm 654 */
						long BgL_cz00_1400;

						BgL_cz00_1400 = (STRING_REF(BgL_strz00_65, BgL_iz00_1397));
						if ((BgL_cz00_1400 < ((long) 194)))
							{
								long BgL_iz00_8481;
								long BgL_siza7eza7_8479;

								BgL_siza7eza7_8479 = (BgL_siza7eza7_1396 + ((long) 1));
								BgL_iz00_8481 = (BgL_iz00_1397 + ((long) 1));
								BgL_iz00_1397 = BgL_iz00_8481;
								BgL_siza7eza7_1396 = BgL_siza7eza7_8479;
								goto BgL_zc3z04anonymousza31361ze3z87_1398;
							}
						else
							{	/* Llib/unicode.scm 656 */
								if ((BgL_cz00_1400 <= ((long) 223)))
									{
										long BgL_iz00_8487;
										long BgL_siza7eza7_8485;

										BgL_siza7eza7_8485 = (BgL_siza7eza7_1396 + ((long) 1));
										BgL_iz00_8487 = (BgL_iz00_1397 + ((long) 2));
										BgL_iz00_1397 = BgL_iz00_8487;
										BgL_siza7eza7_1396 = BgL_siza7eza7_8485;
										goto BgL_zc3z04anonymousza31361ze3z87_1398;
									}
								else
									{	/* Llib/unicode.scm 658 */
										if ((BgL_cz00_1400 <= ((long) 239)))
											{
												long BgL_iz00_8493;
												long BgL_siza7eza7_8491;

												BgL_siza7eza7_8491 = (BgL_siza7eza7_1396 + ((long) 1));
												BgL_iz00_8493 = (BgL_iz00_1397 + ((long) 3));
												BgL_iz00_1397 = BgL_iz00_8493;
												BgL_siza7eza7_1396 = BgL_siza7eza7_8491;
												goto BgL_zc3z04anonymousza31361ze3z87_1398;
											}
										else
											{	/* Llib/unicode.scm 660 */
												if ((BgL_cz00_1400 <= ((long) 247)))
													{
														long BgL_iz00_8499;
														long BgL_siza7eza7_8497;

														BgL_siza7eza7_8497 =
															(BgL_siza7eza7_1396 + ((long) 1));
														BgL_iz00_8499 = (BgL_iz00_1397 + ((long) 4));
														BgL_iz00_1397 = BgL_iz00_8499;
														BgL_siza7eza7_1396 = BgL_siza7eza7_8497;
														goto BgL_zc3z04anonymousza31361ze3z87_1398;
													}
												else
													{	/* Llib/unicode.scm 662 */
														if ((BgL_cz00_1400 <= ((long) 251)))
															{
																long BgL_iz00_8505;
																long BgL_siza7eza7_8503;

																BgL_siza7eza7_8503 =
																	(BgL_siza7eza7_1396 + ((long) 1));
																BgL_iz00_8505 = (BgL_iz00_1397 + ((long) 5));
																BgL_iz00_1397 = BgL_iz00_8505;
																BgL_siza7eza7_1396 = BgL_siza7eza7_8503;
																goto BgL_zc3z04anonymousza31361ze3z87_1398;
															}
														else
															{
																long BgL_iz00_8509;
																long BgL_siza7eza7_8507;

																BgL_siza7eza7_8507 =
																	(BgL_siza7eza7_1396 + ((long) 1));
																BgL_iz00_8509 = (BgL_iz00_1397 + ((long) 6));
																BgL_iz00_1397 = BgL_iz00_8509;
																BgL_siza7eza7_1396 = BgL_siza7eza7_8507;
																goto BgL_zc3z04anonymousza31361ze3z87_1398;
															}
													}
											}
									}
							}
					}
			}
		}

	}



/* ascii-string? */
	BGL_EXPORTED_DEF bool_t BGl_asciizd2stringzf3z21zz__unicodez00(obj_t
		BgL_strz00_67)
	{
		{	/* Llib/unicode.scm 672 */
			return
				(BGl_stringzd2minimalzd2charsetz00zz__unicodez00(BgL_strz00_67) ==
				BGl_symbol4189z00zz__unicodez00);
		}

	}



/* &ascii-string? */
	obj_t BGl_z62asciizd2stringzf3z43zz__unicodez00(obj_t BgL_envz00_7004,
		obj_t BgL_strz00_7005)
	{
		{	/* Llib/unicode.scm 672 */
			{	/* Llib/unicode.scm 673 */
				bool_t BgL_tmpz00_8513;

				{	/* Llib/unicode.scm 673 */
					obj_t BgL_auxz00_8514;

					if (STRINGP(BgL_strz00_7005))
						{	/* Llib/unicode.scm 673 */
							BgL_auxz00_8514 = BgL_strz00_7005;
						}
					else
						{
							obj_t BgL_auxz00_8517;

							BgL_auxz00_8517 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 27220)), BGl_string4191z00zz__unicodez00,
								BGl_string4188z00zz__unicodez00, BgL_strz00_7005);
							FAILURE(BgL_auxz00_8517, BFALSE, BFALSE);
						}
					BgL_tmpz00_8513 =
						BGl_asciizd2stringzf3z21zz__unicodez00(BgL_auxz00_8514);
				}
				return BBOOL(BgL_tmpz00_8513);
			}
		}

	}



/* _utf8-string? */
	obj_t BGl__utf8zd2stringzf3z21zz__unicodez00(obj_t BgL_env1122z00_71,
		obj_t BgL_opt1121z00_70)
	{
		{	/* Llib/unicode.scm 678 */
			{	/* Llib/unicode.scm 678 */
				obj_t BgL_g1123z00_1421;

				BgL_g1123z00_1421 = VECTOR_REF(BgL_opt1121z00_70, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1121z00_70))
					{
					case ((long) 1):

						{	/* Llib/unicode.scm 678 */

							{	/* Llib/unicode.scm 678 */
								bool_t BgL_tmpz00_8524;

								{	/* Llib/unicode.scm 678 */
									obj_t BgL_auxz00_8525;

									if (STRINGP(BgL_g1123z00_1421))
										{	/* Llib/unicode.scm 678 */
											BgL_auxz00_8525 = BgL_g1123z00_1421;
										}
									else
										{
											obj_t BgL_auxz00_8528;

											BgL_auxz00_8528 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4145z00zz__unicodez00, BINT(((long) 27481)),
												BGl_string4192z00zz__unicodez00,
												BGl_string4188z00zz__unicodez00, BgL_g1123z00_1421);
											FAILURE(BgL_auxz00_8528, BFALSE, BFALSE);
										}
									BgL_tmpz00_8524 =
										BGl_utf8zd2stringzf3z21zz__unicodez00(BgL_auxz00_8525,
										((bool_t) 0));
								}
								return BBOOL(BgL_tmpz00_8524);
							}
						}
						break;
					case ((long) 2):

						{	/* Llib/unicode.scm 678 */
							obj_t BgL_strictz00_1426;

							BgL_strictz00_1426 = VECTOR_REF(BgL_opt1121z00_70, ((long) 1));
							{	/* Llib/unicode.scm 678 */

								{	/* Llib/unicode.scm 678 */
									bool_t BgL_tmpz00_8535;

									{	/* Llib/unicode.scm 678 */
										obj_t BgL_auxz00_8536;

										if (STRINGP(BgL_g1123z00_1421))
											{	/* Llib/unicode.scm 678 */
												BgL_auxz00_8536 = BgL_g1123z00_1421;
											}
										else
											{
												obj_t BgL_auxz00_8539;

												BgL_auxz00_8539 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4145z00zz__unicodez00,
													BINT(((long) 27481)), BGl_string4192z00zz__unicodez00,
													BGl_string4188z00zz__unicodez00, BgL_g1123z00_1421);
												FAILURE(BgL_auxz00_8539, BFALSE, BFALSE);
											}
										BgL_tmpz00_8535 =
											BGl_utf8zd2stringzf3z21zz__unicodez00(BgL_auxz00_8536,
											CBOOL(BgL_strictz00_1426));
									}
									return BBOOL(BgL_tmpz00_8535);
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



/* utf8-string? */
	BGL_EXPORTED_DEF bool_t BGl_utf8zd2stringzf3z21zz__unicodez00(obj_t
		BgL_strz00_68, bool_t BgL_strictz00_69)
	{
		{	/* Llib/unicode.scm 678 */
			{	/* Llib/unicode.scm 684 */
				long BgL_lenz00_1428;

				BgL_lenz00_1428 = STRING_LENGTH(BgL_strz00_68);
				{
					long BgL_rz00_1430;

					BgL_rz00_1430 = ((long) 0);
				BgL_zc3z04anonymousza31383ze3z87_1431:
					if ((BgL_rz00_1430 == BgL_lenz00_1428))
						{	/* Llib/unicode.scm 686 */
							return ((bool_t) 1);
						}
					else
						{	/* Llib/unicode.scm 688 */
							long BgL_nz00_1434;

							BgL_nz00_1434 = (STRING_REF(BgL_strz00_68, BgL_rz00_1430));
							{	/* Llib/unicode.scm 689 */

								if ((BgL_nz00_1434 <= ((long) 127)))
									{
										long BgL_rz00_8555;

										BgL_rz00_8555 = (BgL_rz00_1430 + ((long) 1));
										BgL_rz00_1430 = BgL_rz00_8555;
										goto BgL_zc3z04anonymousza31383ze3z87_1431;
									}
								else
									{	/* Llib/unicode.scm 691 */
										if ((BgL_nz00_1434 < ((long) 194)))
											{	/* Llib/unicode.scm 694 */
												return ((bool_t) 0);
											}
										else
											{	/* Llib/unicode.scm 694 */
												if ((BgL_nz00_1434 < ((long) 223)))
													{	/* Llib/unicode.scm 699 */
														bool_t BgL_test4523z00_8561;

														if (
															((((long) 1) + BgL_rz00_1430) < BgL_lenz00_1428))
															{	/* Llib/unicode.scm 681 */
																long BgL_nz00_3896;

																BgL_nz00_3896 =
																	(STRING_REF(BgL_strz00_68,
																		(BgL_rz00_1430 + ((long) 1))));
																if ((BgL_nz00_3896 >= ((long) 128)))
																	{	/* Llib/unicode.scm 682 */
																		BgL_test4523z00_8561 =
																			(BgL_nz00_3896 <= ((long) 191));
																	}
																else
																	{	/* Llib/unicode.scm 682 */
																		BgL_test4523z00_8561 = ((bool_t) 0);
																	}
															}
														else
															{	/* Llib/unicode.scm 699 */
																BgL_test4523z00_8561 = ((bool_t) 0);
															}
														if (BgL_test4523z00_8561)
															{
																long BgL_rz00_8571;

																BgL_rz00_8571 = (BgL_rz00_1430 + ((long) 2));
																BgL_rz00_1430 = BgL_rz00_8571;
																goto BgL_zc3z04anonymousza31383ze3z87_1431;
															}
														else
															{	/* Llib/unicode.scm 699 */
																return ((bool_t) 0);
															}
													}
												else
													{	/* Llib/unicode.scm 702 */
														bool_t BgL_test4526z00_8573;

														if ((BgL_nz00_1434 >= ((long) 216)))
															{	/* Llib/unicode.scm 702 */
																BgL_test4526z00_8573 =
																	(BgL_nz00_1434 <= ((long) 219));
															}
														else
															{	/* Llib/unicode.scm 702 */
																BgL_test4526z00_8573 = ((bool_t) 0);
															}
														if (BgL_test4526z00_8573)
															{	/* Llib/unicode.scm 704 */
																bool_t BgL_test4528z00_8577;

																if (
																	(BgL_rz00_1430 <
																		(BgL_lenz00_1428 - ((long) 3))))
																	{	/* Llib/unicode.scm 705 */
																		bool_t BgL_test4530z00_8581;

																		{	/* Llib/unicode.scm 681 */
																			long BgL_nz00_3920;

																			BgL_nz00_3920 =
																				(STRING_REF(BgL_strz00_68,
																					(BgL_rz00_1430 + ((long) 1))));
																			if ((BgL_nz00_3920 >= ((long) 220)))
																				{	/* Llib/unicode.scm 682 */
																					BgL_test4530z00_8581 =
																						(BgL_nz00_3920 <= ((long) 223));
																				}
																			else
																				{	/* Llib/unicode.scm 682 */
																					BgL_test4530z00_8581 = ((bool_t) 0);
																				}
																		}
																		if (BgL_test4530z00_8581)
																			{	/* Llib/unicode.scm 706 */
																				bool_t BgL_test4532z00_8588;

																				{	/* Llib/unicode.scm 681 */
																					long BgL_nz00_3933;

																					BgL_nz00_3933 =
																						(STRING_REF(BgL_strz00_68,
																							(BgL_rz00_1430 + ((long) 2))));
																					if ((BgL_nz00_3933 >= ((long) 220)))
																						{	/* Llib/unicode.scm 682 */
																							BgL_test4532z00_8588 =
																								(BgL_nz00_3933 <= ((long) 223));
																						}
																					else
																						{	/* Llib/unicode.scm 682 */
																							BgL_test4532z00_8588 =
																								((bool_t) 0);
																						}
																				}
																				if (BgL_test4532z00_8588)
																					{	/* Llib/unicode.scm 681 */
																						long BgL_nz00_3946;

																						BgL_nz00_3946 =
																							(STRING_REF(BgL_strz00_68,
																								(BgL_rz00_1430 + ((long) 3))));
																						if ((BgL_nz00_3946 >= ((long) 220)))
																							{	/* Llib/unicode.scm 682 */
																								BgL_test4528z00_8577 =
																									(BgL_nz00_3946 <=
																									((long) 223));
																							}
																						else
																							{	/* Llib/unicode.scm 682 */
																								BgL_test4528z00_8577 =
																									((bool_t) 0);
																							}
																					}
																				else
																					{	/* Llib/unicode.scm 706 */
																						BgL_test4528z00_8577 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Llib/unicode.scm 705 */
																				BgL_test4528z00_8577 = ((bool_t) 0);
																			}
																	}
																else
																	{	/* Llib/unicode.scm 704 */
																		BgL_test4528z00_8577 = ((bool_t) 0);
																	}
																if (BgL_test4528z00_8577)
																	{
																		long BgL_rz00_8601;

																		BgL_rz00_8601 =
																			(BgL_rz00_1430 + ((long) 4));
																		BgL_rz00_1430 = BgL_rz00_8601;
																		goto BgL_zc3z04anonymousza31383ze3z87_1431;
																	}
																else
																	{	/* Llib/unicode.scm 704 */
																		return ((bool_t) 0);
																	}
															}
														else
															{	/* Llib/unicode.scm 702 */
																if ((BgL_nz00_1434 <= ((long) 223)))
																	{	/* Llib/unicode.scm 711 */
																		bool_t BgL_test4536z00_8605;

																		if (
																			((((long) 1) + BgL_rz00_1430) <
																				BgL_lenz00_1428))
																			{	/* Llib/unicode.scm 681 */
																				long BgL_nz00_3968;

																				BgL_nz00_3968 =
																					(STRING_REF(BgL_strz00_68,
																						(BgL_rz00_1430 + ((long) 1))));
																				if ((BgL_nz00_3968 >= ((long) 128)))
																					{	/* Llib/unicode.scm 682 */
																						BgL_test4536z00_8605 =
																							(BgL_nz00_3968 <= ((long) 191));
																					}
																				else
																					{	/* Llib/unicode.scm 682 */
																						BgL_test4536z00_8605 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Llib/unicode.scm 711 */
																				BgL_test4536z00_8605 = ((bool_t) 0);
																			}
																		if (BgL_test4536z00_8605)
																			{
																				long BgL_rz00_8615;

																				BgL_rz00_8615 =
																					(BgL_rz00_1430 + ((long) 2));
																				BgL_rz00_1430 = BgL_rz00_8615;
																				goto
																					BgL_zc3z04anonymousza31383ze3z87_1431;
																			}
																		else
																			{	/* Llib/unicode.scm 711 */
																				return ((bool_t) 0);
																			}
																	}
																else
																	{	/* Llib/unicode.scm 709 */
																		if ((BgL_nz00_1434 <= ((long) 239)))
																			{	/* Llib/unicode.scm 716 */
																				bool_t BgL_test4540z00_8619;

																				if (
																					(BgL_rz00_1430 <
																						(BgL_lenz00_1428 - ((long) 2))))
																					{	/* Llib/unicode.scm 717 */
																						bool_t BgL_test4542z00_8623;

																						{	/* Llib/unicode.scm 681 */
																							long BgL_nz00_3990;

																							BgL_nz00_3990 =
																								(STRING_REF(BgL_strz00_68,
																									(BgL_rz00_1430 +
																										((long) 1))));
																							if ((BgL_nz00_3990 >=
																									((long) 128)))
																								{	/* Llib/unicode.scm 682 */
																									BgL_test4542z00_8623 =
																										(BgL_nz00_3990 <=
																										((long) 191));
																								}
																							else
																								{	/* Llib/unicode.scm 682 */
																									BgL_test4542z00_8623 =
																										((bool_t) 0);
																								}
																						}
																						if (BgL_test4542z00_8623)
																							{	/* Llib/unicode.scm 681 */
																								long BgL_nz00_4003;

																								BgL_nz00_4003 =
																									(STRING_REF(BgL_strz00_68,
																										(BgL_rz00_1430 +
																											((long) 2))));
																								if ((BgL_nz00_4003 >=
																										((long) 128)))
																									{	/* Llib/unicode.scm 682 */
																										BgL_test4540z00_8619 =
																											(BgL_nz00_4003 <=
																											((long) 191));
																									}
																								else
																									{	/* Llib/unicode.scm 682 */
																										BgL_test4540z00_8619 =
																											((bool_t) 0);
																									}
																							}
																						else
																							{	/* Llib/unicode.scm 717 */
																								BgL_test4540z00_8619 =
																									((bool_t) 0);
																							}
																					}
																				else
																					{	/* Llib/unicode.scm 716 */
																						BgL_test4540z00_8619 = ((bool_t) 0);
																					}
																				if (BgL_test4540z00_8619)
																					{
																						long BgL_rz00_8636;

																						BgL_rz00_8636 =
																							(BgL_rz00_1430 + ((long) 3));
																						BgL_rz00_1430 = BgL_rz00_8636;
																						goto
																							BgL_zc3z04anonymousza31383ze3z87_1431;
																					}
																				else
																					{	/* Llib/unicode.scm 716 */
																						return ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Llib/unicode.scm 714 */
																				if ((BgL_nz00_1434 == ((long) 240)))
																					{	/* Llib/unicode.scm 722 */
																						bool_t BgL_test4546z00_8640;

																						if (
																							(BgL_rz00_1430 <
																								(BgL_lenz00_1428 - ((long) 3))))
																							{	/* Llib/unicode.scm 723 */
																								bool_t BgL_test4548z00_8644;

																								{	/* Llib/unicode.scm 681 */
																									long BgL_nz00_4025;

																									BgL_nz00_4025 =
																										(STRING_REF(BgL_strz00_68,
																											(BgL_rz00_1430 +
																												((long) 1))));
																									if ((BgL_nz00_4025 >=
																											((long) 144)))
																										{	/* Llib/unicode.scm 682 */
																											BgL_test4548z00_8644 =
																												(BgL_nz00_4025 <=
																												((long) 191));
																										}
																									else
																										{	/* Llib/unicode.scm 682 */
																											BgL_test4548z00_8644 =
																												((bool_t) 0);
																										}
																								}
																								if (BgL_test4548z00_8644)
																									{	/* Llib/unicode.scm 724 */
																										bool_t BgL_test4550z00_8651;

																										{	/* Llib/unicode.scm 681 */
																											long BgL_nz00_4038;

																											BgL_nz00_4038 =
																												(STRING_REF
																												(BgL_strz00_68,
																													(BgL_rz00_1430 +
																														((long) 2))));
																											if ((BgL_nz00_4038 >=
																													((long) 128)))
																												{	/* Llib/unicode.scm 682 */
																													BgL_test4550z00_8651 =
																														(BgL_nz00_4038 <=
																														((long) 191));
																												}
																											else
																												{	/* Llib/unicode.scm 682 */
																													BgL_test4550z00_8651 =
																														((bool_t) 0);
																												}
																										}
																										if (BgL_test4550z00_8651)
																											{	/* Llib/unicode.scm 681 */
																												long BgL_nz00_4051;

																												BgL_nz00_4051 =
																													(STRING_REF
																													(BgL_strz00_68,
																														(BgL_rz00_1430 +
																															((long) 3))));
																												if ((BgL_nz00_4051 >=
																														((long) 128)))
																													{	/* Llib/unicode.scm 682 */
																														BgL_test4546z00_8640
																															=
																															(BgL_nz00_4051 <=
																															((long) 191));
																													}
																												else
																													{	/* Llib/unicode.scm 682 */
																														BgL_test4546z00_8640
																															= ((bool_t) 0);
																													}
																											}
																										else
																											{	/* Llib/unicode.scm 724 */
																												BgL_test4546z00_8640 =
																													((bool_t) 0);
																											}
																									}
																								else
																									{	/* Llib/unicode.scm 723 */
																										BgL_test4546z00_8640 =
																											((bool_t) 0);
																									}
																							}
																						else
																							{	/* Llib/unicode.scm 722 */
																								BgL_test4546z00_8640 =
																									((bool_t) 0);
																							}
																						if (BgL_test4546z00_8640)
																							{
																								long BgL_rz00_8664;

																								BgL_rz00_8664 =
																									(BgL_rz00_1430 + ((long) 4));
																								BgL_rz00_1430 = BgL_rz00_8664;
																								goto
																									BgL_zc3z04anonymousza31383ze3z87_1431;
																							}
																						else
																							{	/* Llib/unicode.scm 722 */
																								return ((bool_t) 0);
																							}
																					}
																				else
																					{	/* Llib/unicode.scm 727 */
																						bool_t BgL_test4553z00_8666;

																						if ((BgL_nz00_1434 == ((long) 244)))
																							{	/* Llib/unicode.scm 727 */
																								BgL_test4553z00_8666 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Llib/unicode.scm 728 */
																								bool_t BgL_test4555z00_8669;

																								{	/* Llib/unicode.scm 728 */
																									bool_t
																										BgL__ortest_1047z00_1680;
																									BgL__ortest_1047z00_1680 =
																										(BgL_nz00_1434 ==
																										((long) 248));
																									if (BgL__ortest_1047z00_1680)
																										{	/* Llib/unicode.scm 728 */
																											BgL_test4555z00_8669 =
																												BgL__ortest_1047z00_1680;
																										}
																									else
																										{	/* Llib/unicode.scm 728 */
																											BgL_test4555z00_8669 =
																												(BgL_nz00_1434 ==
																												((long) 252));
																								}}
																								if (BgL_test4555z00_8669)
																									{	/* Llib/unicode.scm 728 */
																										if (BgL_strictz00_69)
																											{	/* Llib/unicode.scm 728 */
																												BgL_test4553z00_8666 =
																													((bool_t) 0);
																											}
																										else
																											{	/* Llib/unicode.scm 728 */
																												BgL_test4553z00_8666 =
																													((bool_t) 1);
																											}
																									}
																								else
																									{	/* Llib/unicode.scm 728 */
																										BgL_test4553z00_8666 =
																											((bool_t) 0);
																									}
																							}
																						if (BgL_test4553z00_8666)
																							{	/* Llib/unicode.scm 730 */
																								bool_t BgL_test4560z00_8674;

																								if (
																									(BgL_rz00_1430 <
																										(BgL_lenz00_1428 -
																											((long) 3))))
																									{	/* Llib/unicode.scm 731 */
																										bool_t BgL_test4562z00_8678;

																										{	/* Llib/unicode.scm 681 */
																											long BgL_nz00_4077;

																											BgL_nz00_4077 =
																												(STRING_REF
																												(BgL_strz00_68,
																													(BgL_rz00_1430 +
																														((long) 1))));
																											if ((BgL_nz00_4077 >=
																													((long) 128)))
																												{	/* Llib/unicode.scm 682 */
																													BgL_test4562z00_8678 =
																														(BgL_nz00_4077 <=
																														((long) 191));
																												}
																											else
																												{	/* Llib/unicode.scm 682 */
																													BgL_test4562z00_8678 =
																														((bool_t) 0);
																												}
																										}
																										if (BgL_test4562z00_8678)
																											{	/* Llib/unicode.scm 732 */
																												bool_t
																													BgL_test4564z00_8685;
																												{	/* Llib/unicode.scm 681 */
																													long BgL_nz00_4090;

																													BgL_nz00_4090 =
																														(STRING_REF
																														(BgL_strz00_68,
																															(BgL_rz00_1430 +
																																((long) 2))));
																													if ((BgL_nz00_4090 >=
																															((long) 128)))
																														{	/* Llib/unicode.scm 682 */
																															BgL_test4564z00_8685
																																=
																																(BgL_nz00_4090
																																<=
																																((long) 191));
																														}
																													else
																														{	/* Llib/unicode.scm 682 */
																															BgL_test4564z00_8685
																																= ((bool_t) 0);
																														}
																												}
																												if (BgL_test4564z00_8685)
																													{	/* Llib/unicode.scm 681 */
																														long BgL_nz00_4103;

																														BgL_nz00_4103 =
																															(STRING_REF
																															(BgL_strz00_68,
																																(BgL_rz00_1430 +
																																	((long) 3))));
																														if ((BgL_nz00_4103
																																>=
																																((long) 128)))
																															{	/* Llib/unicode.scm 682 */
																																BgL_test4560z00_8674
																																	=
																																	(BgL_nz00_4103
																																	<=
																																	((long) 191));
																															}
																														else
																															{	/* Llib/unicode.scm 682 */
																																BgL_test4560z00_8674
																																	=
																																	((bool_t) 0);
																															}
																													}
																												else
																													{	/* Llib/unicode.scm 732 */
																														BgL_test4560z00_8674
																															= ((bool_t) 0);
																													}
																											}
																										else
																											{	/* Llib/unicode.scm 731 */
																												BgL_test4560z00_8674 =
																													((bool_t) 0);
																											}
																									}
																								else
																									{	/* Llib/unicode.scm 730 */
																										BgL_test4560z00_8674 =
																											((bool_t) 0);
																									}
																								if (BgL_test4560z00_8674)
																									{
																										long BgL_rz00_8698;

																										BgL_rz00_8698 =
																											(BgL_rz00_1430 +
																											((long) 4));
																										BgL_rz00_1430 =
																											BgL_rz00_8698;
																										goto
																											BgL_zc3z04anonymousza31383ze3z87_1431;
																									}
																								else
																									{	/* Llib/unicode.scm 730 */
																										return ((bool_t) 0);
																									}
																							}
																						else
																							{	/* Llib/unicode.scm 727 */
																								if (
																									(BgL_nz00_1434 <=
																										((long) 247)))
																									{	/* Llib/unicode.scm 737 */
																										bool_t BgL_test4568z00_8702;

																										if (
																											(BgL_rz00_1430 <
																												(BgL_lenz00_1428 -
																													((long) 3))))
																											{	/* Llib/unicode.scm 738 */
																												bool_t
																													BgL_test4570z00_8706;
																												{	/* Llib/unicode.scm 681 */
																													long BgL_nz00_4125;

																													BgL_nz00_4125 =
																														(STRING_REF
																														(BgL_strz00_68,
																															(BgL_rz00_1430 +
																																((long) 1))));
																													if ((BgL_nz00_4125 >=
																															((long) 128)))
																														{	/* Llib/unicode.scm 682 */
																															BgL_test4570z00_8706
																																=
																																(BgL_nz00_4125
																																<=
																																((long) 191));
																														}
																													else
																														{	/* Llib/unicode.scm 682 */
																															BgL_test4570z00_8706
																																= ((bool_t) 0);
																														}
																												}
																												if (BgL_test4570z00_8706)
																													{	/* Llib/unicode.scm 739 */
																														bool_t
																															BgL_test4572z00_8713;
																														{	/* Llib/unicode.scm 681 */
																															long
																																BgL_nz00_4138;
																															BgL_nz00_4138 =
																																(STRING_REF
																																(BgL_strz00_68,
																																	(BgL_rz00_1430
																																		+
																																		((long)
																																			2))));
																															if ((BgL_nz00_4138
																																	>=
																																	((long) 128)))
																																{	/* Llib/unicode.scm 682 */
																																	BgL_test4572z00_8713
																																		=
																																		(BgL_nz00_4138
																																		<=
																																		((long)
																																			191));
																																}
																															else
																																{	/* Llib/unicode.scm 682 */
																																	BgL_test4572z00_8713
																																		=
																																		((bool_t)
																																		0);
																																}
																														}
																														if (BgL_test4572z00_8713)
																															{	/* Llib/unicode.scm 681 */
																																long
																																	BgL_nz00_4151;
																																BgL_nz00_4151 =
																																	(STRING_REF
																																	(BgL_strz00_68,
																																		(BgL_rz00_1430
																																			+
																																			((long)
																																				3))));
																																if (
																																	(BgL_nz00_4151
																																		>=
																																		((long)
																																			128)))
																																	{	/* Llib/unicode.scm 682 */
																																		BgL_test4568z00_8702
																																			=
																																			(BgL_nz00_4151
																																			<=
																																			((long)
																																				191));
																																	}
																																else
																																	{	/* Llib/unicode.scm 682 */
																																		BgL_test4568z00_8702
																																			=
																																			((bool_t)
																																			0);
																																	}
																															}
																														else
																															{	/* Llib/unicode.scm 739 */
																																BgL_test4568z00_8702
																																	=
																																	((bool_t) 0);
																															}
																													}
																												else
																													{	/* Llib/unicode.scm 738 */
																														BgL_test4568z00_8702
																															= ((bool_t) 0);
																													}
																											}
																										else
																											{	/* Llib/unicode.scm 737 */
																												BgL_test4568z00_8702 =
																													((bool_t) 0);
																											}
																										if (BgL_test4568z00_8702)
																											{
																												long BgL_rz00_8726;

																												BgL_rz00_8726 =
																													(BgL_rz00_1430 +
																													((long) 4));
																												BgL_rz00_1430 =
																													BgL_rz00_8726;
																												goto
																													BgL_zc3z04anonymousza31383ze3z87_1431;
																											}
																										else
																											{	/* Llib/unicode.scm 737 */
																												return ((bool_t) 0);
																											}
																									}
																								else
																									{	/* Llib/unicode.scm 735 */
																										if (
																											(BgL_nz00_1434 <=
																												((long) 251)))
																											{	/* Llib/unicode.scm 743 */
																												bool_t
																													BgL_test4576z00_8730;
																												if ((BgL_rz00_1430 <
																														(BgL_lenz00_1428 -
																															((long) 4))))
																													{	/* Llib/unicode.scm 744 */
																														bool_t
																															BgL_test4578z00_8734;
																														{	/* Llib/unicode.scm 681 */
																															long
																																BgL_nz00_4173;
																															BgL_nz00_4173 =
																																(STRING_REF
																																(BgL_strz00_68,
																																	(BgL_rz00_1430
																																		+
																																		((long)
																																			1))));
																															if ((BgL_nz00_4173
																																	>=
																																	((long) 128)))
																																{	/* Llib/unicode.scm 682 */
																																	BgL_test4578z00_8734
																																		=
																																		(BgL_nz00_4173
																																		<=
																																		((long)
																																			191));
																																}
																															else
																																{	/* Llib/unicode.scm 682 */
																																	BgL_test4578z00_8734
																																		=
																																		((bool_t)
																																		0);
																																}
																														}
																														if (BgL_test4578z00_8734)
																															{	/* Llib/unicode.scm 745 */
																																bool_t
																																	BgL_test4580z00_8741;
																																{	/* Llib/unicode.scm 681 */
																																	long
																																		BgL_nz00_4186;
																																	BgL_nz00_4186
																																		=
																																		(STRING_REF
																																		(BgL_strz00_68,
																																			(BgL_rz00_1430
																																				+
																																				((long)
																																					2))));
																																	if (
																																		(BgL_nz00_4186
																																			>=
																																			((long)
																																				128)))
																																		{	/* Llib/unicode.scm 682 */
																																			BgL_test4580z00_8741
																																				=
																																				(BgL_nz00_4186
																																				<=
																																				((long)
																																					191));
																																		}
																																	else
																																		{	/* Llib/unicode.scm 682 */
																																			BgL_test4580z00_8741
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																}
																																if (BgL_test4580z00_8741)
																																	{	/* Llib/unicode.scm 746 */
																																		bool_t
																																			BgL_test4582z00_8748;
																																		{	/* Llib/unicode.scm 681 */
																																			long
																																				BgL_nz00_4199;
																																			BgL_nz00_4199
																																				=
																																				(STRING_REF
																																				(BgL_strz00_68,
																																					(BgL_rz00_1430
																																						+
																																						((long) 3))));
																																			if (
																																				(BgL_nz00_4199
																																					>=
																																					((long) 128)))
																																				{	/* Llib/unicode.scm 682 */
																																					BgL_test4582z00_8748
																																						=
																																						(BgL_nz00_4199
																																						<=
																																						((long) 191));
																																				}
																																			else
																																				{	/* Llib/unicode.scm 682 */
																																					BgL_test4582z00_8748
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																		if (BgL_test4582z00_8748)
																																			{	/* Llib/unicode.scm 681 */
																																				long
																																					BgL_nz00_4212;
																																				BgL_nz00_4212
																																					=
																																					(STRING_REF
																																					(BgL_strz00_68,
																																						(BgL_rz00_1430
																																							+
																																							((long) 4))));
																																				if (
																																					(BgL_nz00_4212
																																						>=
																																						((long) 128)))
																																					{	/* Llib/unicode.scm 682 */
																																						BgL_test4576z00_8730
																																							=
																																							(BgL_nz00_4212
																																							<=
																																							((long) 191));
																																					}
																																				else
																																					{	/* Llib/unicode.scm 682 */
																																						BgL_test4576z00_8730
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																			}
																																		else
																																			{	/* Llib/unicode.scm 746 */
																																				BgL_test4576z00_8730
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																	}
																																else
																																	{	/* Llib/unicode.scm 745 */
																																		BgL_test4576z00_8730
																																			=
																																			((bool_t)
																																			0);
																																	}
																															}
																														else
																															{	/* Llib/unicode.scm 744 */
																																BgL_test4576z00_8730
																																	=
																																	((bool_t) 0);
																															}
																													}
																												else
																													{	/* Llib/unicode.scm 743 */
																														BgL_test4576z00_8730
																															= ((bool_t) 0);
																													}
																												if (BgL_test4576z00_8730)
																													{
																														long BgL_rz00_8761;

																														BgL_rz00_8761 =
																															(BgL_rz00_1430 +
																															((long) 5));
																														BgL_rz00_1430 =
																															BgL_rz00_8761;
																														goto
																															BgL_zc3z04anonymousza31383ze3z87_1431;
																													}
																												else
																													{	/* Llib/unicode.scm 743 */
																														return ((bool_t) 0);
																													}
																											}
																										else
																											{	/* Llib/unicode.scm 742 */
																												if (
																													(BgL_nz00_1434 <=
																														((long) 253)))
																													{	/* Llib/unicode.scm 750 */
																														bool_t
																															BgL_test4586z00_8765;
																														if ((BgL_rz00_1430 <
																																(BgL_lenz00_1428
																																	-
																																	((long) 5))))
																															{	/* Llib/unicode.scm 751 */
																																bool_t
																																	BgL_test4588z00_8769;
																																{	/* Llib/unicode.scm 681 */
																																	long
																																		BgL_nz00_4234;
																																	BgL_nz00_4234
																																		=
																																		(STRING_REF
																																		(BgL_strz00_68,
																																			(BgL_rz00_1430
																																				+
																																				((long)
																																					1))));
																																	if (
																																		(BgL_nz00_4234
																																			>=
																																			((long)
																																				128)))
																																		{	/* Llib/unicode.scm 682 */
																																			BgL_test4588z00_8769
																																				=
																																				(BgL_nz00_4234
																																				<=
																																				((long)
																																					191));
																																		}
																																	else
																																		{	/* Llib/unicode.scm 682 */
																																			BgL_test4588z00_8769
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																}
																																if (BgL_test4588z00_8769)
																																	{	/* Llib/unicode.scm 752 */
																																		bool_t
																																			BgL_test4590z00_8776;
																																		{	/* Llib/unicode.scm 681 */
																																			long
																																				BgL_nz00_4247;
																																			BgL_nz00_4247
																																				=
																																				(STRING_REF
																																				(BgL_strz00_68,
																																					(BgL_rz00_1430
																																						+
																																						((long) 2))));
																																			if (
																																				(BgL_nz00_4247
																																					>=
																																					((long) 128)))
																																				{	/* Llib/unicode.scm 682 */
																																					BgL_test4590z00_8776
																																						=
																																						(BgL_nz00_4247
																																						<=
																																						((long) 191));
																																				}
																																			else
																																				{	/* Llib/unicode.scm 682 */
																																					BgL_test4590z00_8776
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																		if (BgL_test4590z00_8776)
																																			{	/* Llib/unicode.scm 753 */
																																				bool_t
																																					BgL_test4592z00_8783;
																																				{	/* Llib/unicode.scm 681 */
																																					long
																																						BgL_nz00_4260;
																																					BgL_nz00_4260
																																						=
																																						(STRING_REF
																																						(BgL_strz00_68,
																																							(BgL_rz00_1430
																																								+
																																								((long) 3))));
																																					if (
																																						(BgL_nz00_4260
																																							>=
																																							((long) 128)))
																																						{	/* Llib/unicode.scm 682 */
																																							BgL_test4592z00_8783
																																								=
																																								(BgL_nz00_4260
																																								<=
																																								((long) 191));
																																						}
																																					else
																																						{	/* Llib/unicode.scm 682 */
																																							BgL_test4592z00_8783
																																								=
																																								(
																																								(bool_t)
																																								0);
																																						}
																																				}
																																				if (BgL_test4592z00_8783)
																																					{	/* Llib/unicode.scm 754 */
																																						bool_t
																																							BgL_test4594z00_8790;
																																						{	/* Llib/unicode.scm 681 */
																																							long
																																								BgL_nz00_4273;
																																							BgL_nz00_4273
																																								=
																																								(STRING_REF
																																								(BgL_strz00_68,
																																									(BgL_rz00_1430
																																										+
																																										((long) 4))));
																																							if ((BgL_nz00_4273 >= ((long) 128)))
																																								{	/* Llib/unicode.scm 682 */
																																									BgL_test4594z00_8790
																																										=
																																										(BgL_nz00_4273
																																										<=
																																										((long) 191));
																																								}
																																							else
																																								{	/* Llib/unicode.scm 682 */
																																									BgL_test4594z00_8790
																																										=
																																										(
																																										(bool_t)
																																										0);
																																								}
																																						}
																																						if (BgL_test4594z00_8790)
																																							{	/* Llib/unicode.scm 681 */
																																								long
																																									BgL_nz00_4286;
																																								BgL_nz00_4286
																																									=
																																									(STRING_REF
																																									(BgL_strz00_68,
																																										(BgL_rz00_1430
																																											+
																																											((long) 5))));
																																								if ((BgL_nz00_4286 >= ((long) 128)))
																																									{	/* Llib/unicode.scm 682 */
																																										BgL_test4586z00_8765
																																											=
																																											(BgL_nz00_4286
																																											<=
																																											((long) 191));
																																									}
																																								else
																																									{	/* Llib/unicode.scm 682 */
																																										BgL_test4586z00_8765
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																							}
																																						else
																																							{	/* Llib/unicode.scm 754 */
																																								BgL_test4586z00_8765
																																									=
																																									(
																																									(bool_t)
																																									0);
																																							}
																																					}
																																				else
																																					{	/* Llib/unicode.scm 753 */
																																						BgL_test4586z00_8765
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																			}
																																		else
																																			{	/* Llib/unicode.scm 752 */
																																				BgL_test4586z00_8765
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																	}
																																else
																																	{	/* Llib/unicode.scm 751 */
																																		BgL_test4586z00_8765
																																			=
																																			((bool_t)
																																			0);
																																	}
																															}
																														else
																															{	/* Llib/unicode.scm 750 */
																																BgL_test4586z00_8765
																																	=
																																	((bool_t) 0);
																															}
																														if (BgL_test4586z00_8765)
																															{
																																long
																																	BgL_rz00_8803;
																																BgL_rz00_8803 =
																																	(BgL_rz00_1430
																																	+ ((long) 6));
																																BgL_rz00_1430 =
																																	BgL_rz00_8803;
																																goto
																																	BgL_zc3z04anonymousza31383ze3z87_1431;
																															}
																														else
																															{	/* Llib/unicode.scm 750 */
																																return ((bool_t)
																																	0);
																															}
																													}
																												else
																													{	/* Llib/unicode.scm 749 */
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
				}
			}
		}

	}



/* _utf8-normalize-utf16 */
	obj_t BGl__utf8zd2normaliza7ezd2utf16za7zz__unicodez00(obj_t
		BgL_env1127z00_77, obj_t BgL_opt1126z00_76)
	{
		{	/* Llib/unicode.scm 767 */
			{	/* Llib/unicode.scm 767 */
				obj_t BgL_strz00_1690;

				BgL_strz00_1690 = VECTOR_REF(BgL_opt1126z00_76, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1126z00_76))
					{
					case ((long) 1):

						{	/* Llib/unicode.scm 767 */
							long BgL_endz00_1696;

							{	/* Llib/unicode.scm 767 */
								obj_t BgL_stringz00_4296;

								if (STRINGP(BgL_strz00_1690))
									{	/* Llib/unicode.scm 767 */
										BgL_stringz00_4296 = BgL_strz00_1690;
									}
								else
									{
										obj_t BgL_auxz00_8808;

										BgL_auxz00_8808 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string4145z00zz__unicodez00, BINT(((long) 31079)),
											BGl_string4193z00zz__unicodez00,
											BGl_string4188z00zz__unicodez00, BgL_strz00_1690);
										FAILURE(BgL_auxz00_8808, BFALSE, BFALSE);
									}
								BgL_endz00_1696 = STRING_LENGTH(BgL_stringz00_4296);
							}
							{	/* Llib/unicode.scm 767 */

								{	/* Llib/unicode.scm 767 */
									obj_t BgL_auxz00_8813;

									if (STRINGP(BgL_strz00_1690))
										{	/* Llib/unicode.scm 767 */
											BgL_auxz00_8813 = BgL_strz00_1690;
										}
									else
										{
											obj_t BgL_auxz00_8816;

											BgL_auxz00_8816 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4145z00zz__unicodez00, BINT(((long) 30985)),
												BGl_string4193z00zz__unicodez00,
												BGl_string4188z00zz__unicodez00, BgL_strz00_1690);
											FAILURE(BgL_auxz00_8816, BFALSE, BFALSE);
										}
									return
										BGl_utf8zd2normaliza7ezd2utf16za7zz__unicodez00
										(BgL_auxz00_8813, ((bool_t) 0), ((long) 0),
										BgL_endz00_1696);
						}}} break;
					case ((long) 2):

						{	/* Llib/unicode.scm 767 */
							obj_t BgL_strictz00_1697;

							BgL_strictz00_1697 = VECTOR_REF(BgL_opt1126z00_76, ((long) 1));
							{	/* Llib/unicode.scm 767 */
								long BgL_endz00_1699;

								{	/* Llib/unicode.scm 767 */
									obj_t BgL_stringz00_4298;

									if (STRINGP(BgL_strz00_1690))
										{	/* Llib/unicode.scm 767 */
											BgL_stringz00_4298 = BgL_strz00_1690;
										}
									else
										{
											obj_t BgL_auxz00_8824;

											BgL_auxz00_8824 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4145z00zz__unicodez00, BINT(((long) 31079)),
												BGl_string4193z00zz__unicodez00,
												BGl_string4188z00zz__unicodez00, BgL_strz00_1690);
											FAILURE(BgL_auxz00_8824, BFALSE, BFALSE);
										}
									BgL_endz00_1699 = STRING_LENGTH(BgL_stringz00_4298);
								}
								{	/* Llib/unicode.scm 767 */

									{	/* Llib/unicode.scm 767 */
										obj_t BgL_auxz00_8829;

										if (STRINGP(BgL_strz00_1690))
											{	/* Llib/unicode.scm 767 */
												BgL_auxz00_8829 = BgL_strz00_1690;
											}
										else
											{
												obj_t BgL_auxz00_8832;

												BgL_auxz00_8832 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4145z00zz__unicodez00,
													BINT(((long) 30985)), BGl_string4193z00zz__unicodez00,
													BGl_string4188z00zz__unicodez00, BgL_strz00_1690);
												FAILURE(BgL_auxz00_8832, BFALSE, BFALSE);
											}
										return
											BGl_utf8zd2normaliza7ezd2utf16za7zz__unicodez00
											(BgL_auxz00_8829, CBOOL(BgL_strictz00_1697), ((long) 0),
											BgL_endz00_1699);
						}}}} break;
					case ((long) 3):

						{	/* Llib/unicode.scm 767 */
							obj_t BgL_strictz00_1700;

							BgL_strictz00_1700 = VECTOR_REF(BgL_opt1126z00_76, ((long) 1));
							{	/* Llib/unicode.scm 767 */
								obj_t BgL_startz00_1701;

								BgL_startz00_1701 = VECTOR_REF(BgL_opt1126z00_76, ((long) 2));
								{	/* Llib/unicode.scm 767 */
									long BgL_endz00_1702;

									{	/* Llib/unicode.scm 767 */
										obj_t BgL_stringz00_4300;

										if (STRINGP(BgL_strz00_1690))
											{	/* Llib/unicode.scm 767 */
												BgL_stringz00_4300 = BgL_strz00_1690;
											}
										else
											{
												obj_t BgL_auxz00_8842;

												BgL_auxz00_8842 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4145z00zz__unicodez00,
													BINT(((long) 31079)), BGl_string4193z00zz__unicodez00,
													BGl_string4188z00zz__unicodez00, BgL_strz00_1690);
												FAILURE(BgL_auxz00_8842, BFALSE, BFALSE);
											}
										BgL_endz00_1702 = STRING_LENGTH(BgL_stringz00_4300);
									}
									{	/* Llib/unicode.scm 767 */

										{	/* Llib/unicode.scm 767 */
											long BgL_auxz00_8854;
											obj_t BgL_auxz00_8847;

											{	/* Llib/unicode.scm 767 */
												obj_t BgL_tmpz00_8856;

												if (INTEGERP(BgL_startz00_1701))
													{	/* Llib/unicode.scm 767 */
														BgL_tmpz00_8856 = BgL_startz00_1701;
													}
												else
													{
														obj_t BgL_auxz00_8859;

														BgL_auxz00_8859 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string4145z00zz__unicodez00,
															BINT(((long) 30985)),
															BGl_string4193z00zz__unicodez00,
															BGl_string4147z00zz__unicodez00,
															BgL_startz00_1701);
														FAILURE(BgL_auxz00_8859, BFALSE, BFALSE);
													}
												BgL_auxz00_8854 = (long) CINT(BgL_tmpz00_8856);
											}
											if (STRINGP(BgL_strz00_1690))
												{	/* Llib/unicode.scm 767 */
													BgL_auxz00_8847 = BgL_strz00_1690;
												}
											else
												{
													obj_t BgL_auxz00_8850;

													BgL_auxz00_8850 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string4145z00zz__unicodez00,
														BINT(((long) 30985)),
														BGl_string4193z00zz__unicodez00,
														BGl_string4188z00zz__unicodez00, BgL_strz00_1690);
													FAILURE(BgL_auxz00_8850, BFALSE, BFALSE);
												}
											return
												BGl_utf8zd2normaliza7ezd2utf16za7zz__unicodez00
												(BgL_auxz00_8847, CBOOL(BgL_strictz00_1700),
												BgL_auxz00_8854, BgL_endz00_1702);
										}
									}
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Llib/unicode.scm 767 */
							obj_t BgL_strictz00_1703;

							BgL_strictz00_1703 = VECTOR_REF(BgL_opt1126z00_76, ((long) 1));
							{	/* Llib/unicode.scm 767 */
								obj_t BgL_startz00_1704;

								BgL_startz00_1704 = VECTOR_REF(BgL_opt1126z00_76, ((long) 2));
								{	/* Llib/unicode.scm 767 */
									obj_t BgL_endz00_1705;

									BgL_endz00_1705 = VECTOR_REF(BgL_opt1126z00_76, ((long) 3));
									{	/* Llib/unicode.scm 767 */

										{	/* Llib/unicode.scm 767 */
											long BgL_auxz00_8885;
											long BgL_auxz00_8875;
											obj_t BgL_auxz00_8868;

											{	/* Llib/unicode.scm 767 */
												obj_t BgL_tmpz00_8886;

												if (INTEGERP(BgL_endz00_1705))
													{	/* Llib/unicode.scm 767 */
														BgL_tmpz00_8886 = BgL_endz00_1705;
													}
												else
													{
														obj_t BgL_auxz00_8889;

														BgL_auxz00_8889 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string4145z00zz__unicodez00,
															BINT(((long) 30985)),
															BGl_string4193z00zz__unicodez00,
															BGl_string4147z00zz__unicodez00, BgL_endz00_1705);
														FAILURE(BgL_auxz00_8889, BFALSE, BFALSE);
													}
												BgL_auxz00_8885 = (long) CINT(BgL_tmpz00_8886);
											}
											{	/* Llib/unicode.scm 767 */
												obj_t BgL_tmpz00_8877;

												if (INTEGERP(BgL_startz00_1704))
													{	/* Llib/unicode.scm 767 */
														BgL_tmpz00_8877 = BgL_startz00_1704;
													}
												else
													{
														obj_t BgL_auxz00_8880;

														BgL_auxz00_8880 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string4145z00zz__unicodez00,
															BINT(((long) 30985)),
															BGl_string4193z00zz__unicodez00,
															BGl_string4147z00zz__unicodez00,
															BgL_startz00_1704);
														FAILURE(BgL_auxz00_8880, BFALSE, BFALSE);
													}
												BgL_auxz00_8875 = (long) CINT(BgL_tmpz00_8877);
											}
											if (STRINGP(BgL_strz00_1690))
												{	/* Llib/unicode.scm 767 */
													BgL_auxz00_8868 = BgL_strz00_1690;
												}
											else
												{
													obj_t BgL_auxz00_8871;

													BgL_auxz00_8871 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string4145z00zz__unicodez00,
														BINT(((long) 30985)),
														BGl_string4193z00zz__unicodez00,
														BGl_string4188z00zz__unicodez00, BgL_strz00_1690);
													FAILURE(BgL_auxz00_8871, BFALSE, BFALSE);
												}
											return
												BGl_utf8zd2normaliza7ezd2utf16za7zz__unicodez00
												(BgL_auxz00_8868, CBOOL(BgL_strictz00_1703),
												BgL_auxz00_8875, BgL_auxz00_8885);
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



/* utf8-normalize-utf16 */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2normaliza7ezd2utf16za7zz__unicodez00(obj_t
		BgL_strz00_72, bool_t BgL_strictz00_73, long BgL_startz00_74,
		long BgL_endz00_75)
	{
		{	/* Llib/unicode.scm 767 */
			{	/* Llib/unicode.scm 780 */
				bool_t BgL_test4607z00_8897;

				if ((BgL_endz00_75 > STRING_LENGTH(BgL_strz00_72)))
					{	/* Llib/unicode.scm 780 */
						BgL_test4607z00_8897 = ((bool_t) 1);
					}
				else
					{	/* Llib/unicode.scm 780 */
						if ((BgL_startz00_74 < ((long) 0)))
							{	/* Llib/unicode.scm 781 */
								BgL_test4607z00_8897 = ((bool_t) 1);
							}
						else
							{	/* Llib/unicode.scm 781 */
								BgL_test4607z00_8897 = (BgL_startz00_74 > BgL_endz00_75);
							}
					}
				if (BgL_test4607z00_8897)
					{	/* Llib/unicode.scm 783 */
						obj_t BgL_arg1644z00_1713;

						BgL_arg1644z00_1713 =
							MAKE_YOUNG_PAIR(BINT(BgL_startz00_74), BINT(BgL_endz00_75));
						return
							BGl_errorz00zz__errorz00(BGl_string4194z00zz__unicodez00,
							BGl_string4195z00zz__unicodez00, BgL_arg1644z00_1713);
					}
				else
					{	/* Llib/unicode.scm 785 */
						long BgL_lenz00_1714;

						BgL_lenz00_1714 = (BgL_endz00_75 - BgL_startz00_74);
						{	/* Llib/unicode.scm 785 */
							obj_t BgL_resz00_1715;

							{	/* Llib/unicode.scm 786 */
								long BgL_arg2108z00_2182;

								BgL_arg2108z00_2182 = (((long) 3) * BgL_lenz00_1714);
								{	/* Ieee/string.scm 168 */

									BgL_resz00_1715 =
										make_string(BgL_arg2108z00_2182, ((unsigned char) ' '));
							}}
							{	/* Llib/unicode.scm 786 */

								{
									long BgL_rz00_1717;
									long BgL_wz00_1718;
									bool_t BgL_asciiz00_1719;

									BgL_rz00_1717 = BgL_startz00_74;
									BgL_wz00_1718 = ((long) 0);
									BgL_asciiz00_1719 = ((bool_t) 1);
								BgL_zc3z04anonymousza31645ze3z87_1720:
									if ((BgL_rz00_1717 == BgL_endz00_75))
										{	/* Llib/unicode.scm 791 */
											obj_t BgL_val0_1095z00_1722;
											obj_t BgL_val1_1096z00_1723;

											BgL_val0_1095z00_1722 =
												bgl_string_shrink(BgL_resz00_1715, BgL_wz00_1718);
											if (BgL_asciiz00_1719)
												{	/* Llib/unicode.scm 791 */
													BgL_val1_1096z00_1723 =
														BGl_symbol4189z00zz__unicodez00;
												}
											else
												{	/* Llib/unicode.scm 791 */
													BgL_val1_1096z00_1723 =
														BGl_symbol4196z00zz__unicodez00;
												}
											{	/* Llib/unicode.scm 791 */
												int BgL_res3087z00_4349;

												{	/* Llib/unicode.scm 791 */
													int BgL_tmpz00_8915;

													BgL_tmpz00_8915 = (int) (((long) 2));
													BgL_res3087z00_4349 =
														BGL_MVALUES_NUMBER_SET(BgL_tmpz00_8915);
												} BgL_res3087z00_4349;
											}
											{	/* Llib/unicode.scm 791 */
												int BgL_tmpz00_8918;

												BgL_tmpz00_8918 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_tmpz00_8918,
													BgL_val1_1096z00_1723);
											}
											return BgL_val0_1095z00_1722;
										}
									else
										{	/* Llib/unicode.scm 792 */
											unsigned char BgL_cz00_1724;

											BgL_cz00_1724 = STRING_REF(BgL_strz00_72, BgL_rz00_1717);
											{	/* Llib/unicode.scm 792 */
												long BgL_nz00_1725;

												BgL_nz00_1725 = (BgL_cz00_1724);
												{	/* Llib/unicode.scm 793 */

													if ((BgL_nz00_1725 <= ((long) 127)))
														{	/* Llib/unicode.scm 795 */
															STRING_SET(BgL_resz00_1715, BgL_wz00_1718,
																BgL_cz00_1724);
															{
																long BgL_wz00_8928;
																long BgL_rz00_8926;

																BgL_rz00_8926 = (BgL_rz00_1717 + ((long) 1));
																BgL_wz00_8928 = (BgL_wz00_1718 + ((long) 1));
																BgL_wz00_1718 = BgL_wz00_8928;
																BgL_rz00_1717 = BgL_rz00_8926;
																goto BgL_zc3z04anonymousza31645ze3z87_1720;
															}
														}
													else
														{	/* Llib/unicode.scm 795 */
															if ((BgL_nz00_1725 < ((long) 194)))
																{	/* Llib/unicode.scm 799 */
																	STRING_SET(BgL_resz00_1715, BgL_wz00_1718,
																		((unsigned char) 239));
																	{	/* Llib/unicode.scm 776 */
																		long BgL_tmpz00_8933;

																		BgL_tmpz00_8933 =
																			(BgL_wz00_1718 + ((long) 1));
																		STRING_SET(BgL_resz00_1715, BgL_tmpz00_8933,
																			((unsigned char) 191));
																	}
																	{	/* Llib/unicode.scm 777 */
																		long BgL_tmpz00_8936;

																		BgL_tmpz00_8936 =
																			(BgL_wz00_1718 + ((long) 2));
																		STRING_SET(BgL_resz00_1715, BgL_tmpz00_8936,
																			((unsigned char) 189));
																	}
																	{
																		bool_t BgL_asciiz00_8943;
																		long BgL_wz00_8941;
																		long BgL_rz00_8939;

																		BgL_rz00_8939 =
																			(BgL_rz00_1717 + ((long) 1));
																		BgL_wz00_8941 =
																			(BgL_wz00_1718 + ((long) 3));
																		BgL_asciiz00_8943 = ((bool_t) 0);
																		BgL_asciiz00_1719 = BgL_asciiz00_8943;
																		BgL_wz00_1718 = BgL_wz00_8941;
																		BgL_rz00_1717 = BgL_rz00_8939;
																		goto BgL_zc3z04anonymousza31645ze3z87_1720;
																	}
																}
															else
																{	/* Llib/unicode.scm 799 */
																	if ((BgL_nz00_1725 < ((long) 216)))
																		{	/* Llib/unicode.scm 805 */
																			bool_t BgL_test4615z00_8946;

																			if (
																				((((long) 1) + BgL_rz00_1717) <
																					BgL_endz00_75))
																				{	/* Llib/unicode.scm 770 */
																					long BgL_nz00_4397;

																					BgL_nz00_4397 =
																						(STRING_REF(BgL_strz00_72,
																							(BgL_rz00_1717 + ((long) 1))));
																					if ((BgL_nz00_4397 >= ((long) 128)))
																						{	/* Llib/unicode.scm 771 */
																							BgL_test4615z00_8946 =
																								(BgL_nz00_4397 <= ((long) 191));
																						}
																					else
																						{	/* Llib/unicode.scm 771 */
																							BgL_test4615z00_8946 =
																								((bool_t) 0);
																						}
																				}
																			else
																				{	/* Llib/unicode.scm 805 */
																					BgL_test4615z00_8946 = ((bool_t) 0);
																				}
																			if (BgL_test4615z00_8946)
																				{	/* Llib/unicode.scm 805 */
																					STRING_SET(BgL_resz00_1715,
																						BgL_wz00_1718, BgL_cz00_1724);
																					{	/* Llib/unicode.scm 809 */
																						unsigned char BgL_auxz00_8959;
																						long BgL_tmpz00_8957;

																						BgL_auxz00_8959 =
																							STRING_REF(BgL_strz00_72,
																							(BgL_rz00_1717 + ((long) 1)));
																						BgL_tmpz00_8957 =
																							(BgL_wz00_1718 + ((long) 1));
																						STRING_SET(BgL_resz00_1715,
																							BgL_tmpz00_8957, BgL_auxz00_8959);
																					}
																					{
																						bool_t BgL_asciiz00_8967;
																						long BgL_wz00_8965;
																						long BgL_rz00_8963;

																						BgL_rz00_8963 =
																							(BgL_rz00_1717 + ((long) 2));
																						BgL_wz00_8965 =
																							(BgL_wz00_1718 + ((long) 2));
																						BgL_asciiz00_8967 = ((bool_t) 0);
																						BgL_asciiz00_1719 =
																							BgL_asciiz00_8967;
																						BgL_wz00_1718 = BgL_wz00_8965;
																						BgL_rz00_1717 = BgL_rz00_8963;
																						goto
																							BgL_zc3z04anonymousza31645ze3z87_1720;
																					}
																				}
																			else
																				{	/* Llib/unicode.scm 805 */
																					STRING_SET(BgL_resz00_1715,
																						BgL_wz00_1718,
																						((unsigned char) 239));
																					{	/* Llib/unicode.scm 776 */
																						long BgL_tmpz00_8969;

																						BgL_tmpz00_8969 =
																							(BgL_wz00_1718 + ((long) 1));
																						STRING_SET(BgL_resz00_1715,
																							BgL_tmpz00_8969,
																							((unsigned char) 191));
																					}
																					{	/* Llib/unicode.scm 777 */
																						long BgL_tmpz00_8972;

																						BgL_tmpz00_8972 =
																							(BgL_wz00_1718 + ((long) 2));
																						STRING_SET(BgL_resz00_1715,
																							BgL_tmpz00_8972,
																							((unsigned char) 189));
																					}
																					{
																						bool_t BgL_asciiz00_8979;
																						long BgL_wz00_8977;
																						long BgL_rz00_8975;

																						BgL_rz00_8975 =
																							(BgL_rz00_1717 + ((long) 1));
																						BgL_wz00_8977 =
																							(BgL_wz00_1718 + ((long) 3));
																						BgL_asciiz00_8979 = ((bool_t) 0);
																						BgL_asciiz00_1719 =
																							BgL_asciiz00_8979;
																						BgL_wz00_1718 = BgL_wz00_8977;
																						BgL_rz00_1717 = BgL_rz00_8975;
																						goto
																							BgL_zc3z04anonymousza31645ze3z87_1720;
																					}
																				}
																		}
																	else
																		{	/* Llib/unicode.scm 803 */
																			if ((BgL_nz00_1725 <= ((long) 223)))
																				{	/* Llib/unicode.scm 815 */
																					bool_t BgL_test4619z00_8982;

																					if (
																						((((long) 1) + BgL_rz00_1717) <
																							BgL_endz00_75))
																						{	/* Llib/unicode.scm 770 */
																							long BgL_nz00_4453;

																							BgL_nz00_4453 =
																								(STRING_REF(BgL_strz00_72,
																									(BgL_rz00_1717 +
																										((long) 1))));
																							if ((BgL_nz00_4453 >=
																									((long) 128)))
																								{	/* Llib/unicode.scm 771 */
																									BgL_test4619z00_8982 =
																										(BgL_nz00_4453 <=
																										((long) 191));
																								}
																							else
																								{	/* Llib/unicode.scm 771 */
																									BgL_test4619z00_8982 =
																										((bool_t) 0);
																								}
																						}
																					else
																						{	/* Llib/unicode.scm 815 */
																							BgL_test4619z00_8982 =
																								((bool_t) 0);
																						}
																					if (BgL_test4619z00_8982)
																						{	/* Llib/unicode.scm 815 */
																							STRING_SET(BgL_resz00_1715,
																								BgL_wz00_1718, BgL_cz00_1724);
																							{	/* Llib/unicode.scm 819 */
																								unsigned char BgL_auxz00_8995;
																								long BgL_tmpz00_8993;

																								BgL_auxz00_8995 =
																									STRING_REF(BgL_strz00_72,
																									(BgL_rz00_1717 + ((long) 1)));
																								BgL_tmpz00_8993 =
																									(BgL_wz00_1718 + ((long) 1));
																								STRING_SET(BgL_resz00_1715,
																									BgL_tmpz00_8993,
																									BgL_auxz00_8995);
																							}
																							{
																								bool_t BgL_asciiz00_9003;
																								long BgL_wz00_9001;
																								long BgL_rz00_8999;

																								BgL_rz00_8999 =
																									(BgL_rz00_1717 + ((long) 2));
																								BgL_wz00_9001 =
																									(BgL_wz00_1718 + ((long) 2));
																								BgL_asciiz00_9003 =
																									((bool_t) 0);
																								BgL_asciiz00_1719 =
																									BgL_asciiz00_9003;
																								BgL_wz00_1718 = BgL_wz00_9001;
																								BgL_rz00_1717 = BgL_rz00_8999;
																								goto
																									BgL_zc3z04anonymousza31645ze3z87_1720;
																							}
																						}
																					else
																						{	/* Llib/unicode.scm 815 */
																							STRING_SET(BgL_resz00_1715,
																								BgL_wz00_1718,
																								((unsigned char) 239));
																							{	/* Llib/unicode.scm 776 */
																								long BgL_tmpz00_9005;

																								BgL_tmpz00_9005 =
																									(BgL_wz00_1718 + ((long) 1));
																								STRING_SET(BgL_resz00_1715,
																									BgL_tmpz00_9005,
																									((unsigned char) 191));
																							}
																							{	/* Llib/unicode.scm 777 */
																								long BgL_tmpz00_9008;

																								BgL_tmpz00_9008 =
																									(BgL_wz00_1718 + ((long) 2));
																								STRING_SET(BgL_resz00_1715,
																									BgL_tmpz00_9008,
																									((unsigned char) 189));
																							}
																							{
																								bool_t BgL_asciiz00_9015;
																								long BgL_wz00_9013;
																								long BgL_rz00_9011;

																								BgL_rz00_9011 =
																									(BgL_rz00_1717 + ((long) 1));
																								BgL_wz00_9013 =
																									(BgL_wz00_1718 + ((long) 3));
																								BgL_asciiz00_9015 =
																									((bool_t) 0);
																								BgL_asciiz00_1719 =
																									BgL_asciiz00_9015;
																								BgL_wz00_1718 = BgL_wz00_9013;
																								BgL_rz00_1717 = BgL_rz00_9011;
																								goto
																									BgL_zc3z04anonymousza31645ze3z87_1720;
																							}
																						}
																				}
																			else
																				{	/* Llib/unicode.scm 814 */
																					if ((BgL_nz00_1725 == ((long) 237)))
																						{	/* Llib/unicode.scm 827 */
																							bool_t BgL_test4623z00_9018;

																							if (
																								(BgL_rz00_1717 <
																									(BgL_endz00_75 - ((long) 2))))
																								{	/* Llib/unicode.scm 828 */
																									bool_t BgL_test4625z00_9022;

																									{	/* Llib/unicode.scm 770 */
																										long BgL_nz00_4509;

																										BgL_nz00_4509 =
																											(STRING_REF(BgL_strz00_72,
																												(BgL_rz00_1717 +
																													((long) 1))));
																										if ((BgL_nz00_4509 >=
																												((long) 128)))
																											{	/* Llib/unicode.scm 771 */
																												BgL_test4625z00_9022 =
																													(BgL_nz00_4509 <=
																													((long) 191));
																											}
																										else
																											{	/* Llib/unicode.scm 771 */
																												BgL_test4625z00_9022 =
																													((bool_t) 0);
																											}
																									}
																									if (BgL_test4625z00_9022)
																										{	/* Llib/unicode.scm 770 */
																											long BgL_nz00_4522;

																											BgL_nz00_4522 =
																												(STRING_REF
																												(BgL_strz00_72,
																													(BgL_rz00_1717 +
																														((long) 2))));
																											if ((BgL_nz00_4522 >=
																													((long) 128)))
																												{	/* Llib/unicode.scm 771 */
																													BgL_test4623z00_9018 =
																														(BgL_nz00_4522 <=
																														((long) 191));
																												}
																											else
																												{	/* Llib/unicode.scm 771 */
																													BgL_test4623z00_9018 =
																														((bool_t) 0);
																												}
																										}
																									else
																										{	/* Llib/unicode.scm 828 */
																											BgL_test4623z00_9018 =
																												((bool_t) 0);
																										}
																								}
																							else
																								{	/* Llib/unicode.scm 827 */
																									BgL_test4623z00_9018 =
																										((bool_t) 0);
																								}
																							if (BgL_test4623z00_9018)
																								{	/* Llib/unicode.scm 835 */
																									long BgL_n1z00_1780;

																									BgL_n1z00_1780 =
																										(STRING_REF(BgL_strz00_72,
																											(BgL_rz00_1717 +
																												((long) 1))));
																									{	/* Llib/unicode.scm 835 */
																										long BgL_n2z00_1781;

																										BgL_n2z00_1781 =
																											(STRING_REF(BgL_strz00_72,
																												(BgL_rz00_1717 +
																													((long) 2))));
																										{	/* Llib/unicode.scm 836 */
																											long BgL_ucs2z00_1782;

																											BgL_ucs2z00_1782 =
																												(
																												((BgL_nz00_1725 &
																														((long) 15)) <<
																													(int) (((long) 12))) +
																												(((BgL_n1z00_1780 &
																															((long) 63)) <<
																														(int) (((long) 6)))
																													+
																													(BgL_n2z00_1781 &
																														((long) 63))));
																											{	/* Llib/unicode.scm 837 */

																												if (
																													(BgL_ucs2z00_1782 >
																														((long) 57343)))
																													{	/* Llib/unicode.scm 841 */
																														STRING_SET
																															(BgL_resz00_1715,
																															BgL_wz00_1718,
																															((unsigned char)
																																239));
																														{	/* Llib/unicode.scm 776 */
																															long
																																BgL_tmpz00_9053;
																															BgL_tmpz00_9053 =
																																(BgL_wz00_1718 +
																																((long) 1));
																															STRING_SET
																																(BgL_resz00_1715,
																																BgL_tmpz00_9053,
																																((unsigned char)
																																	191));
																														}
																														{	/* Llib/unicode.scm 777 */
																															long
																																BgL_tmpz00_9056;
																															BgL_tmpz00_9056 =
																																(BgL_wz00_1718 +
																																((long) 2));
																															STRING_SET
																																(BgL_resz00_1715,
																																BgL_tmpz00_9056,
																																((unsigned char)
																																	189));
																														}
																														{
																															bool_t
																																BgL_asciiz00_9063;
																															long
																																BgL_wz00_9061;
																															long
																																BgL_rz00_9059;
																															BgL_rz00_9059 =
																																(BgL_rz00_1717 +
																																((long) 1));
																															BgL_wz00_9061 =
																																(BgL_wz00_1718 +
																																((long) 3));
																															BgL_asciiz00_9063
																																= ((bool_t) 0);
																															BgL_asciiz00_1719
																																=
																																BgL_asciiz00_9063;
																															BgL_wz00_1718 =
																																BgL_wz00_9061;
																															BgL_rz00_1717 =
																																BgL_rz00_9059;
																															goto
																																BgL_zc3z04anonymousza31645ze3z87_1720;
																														}
																													}
																												else
																													{	/* Llib/unicode.scm 844 */
																														bool_t
																															BgL_test4629z00_9064;
																														if ((BgL_rz00_1717
																																<=
																																(BgL_endz00_75 -
																																	((long) 4))))
																															{	/* Llib/unicode.scm 844 */
																																BgL_test4629z00_9064
																																	=
																																	((STRING_REF
																																		(BgL_strz00_72,
																																			(BgL_rz00_1717
																																				+
																																				((long)
																																					3))))
																																	==
																																	((long) 237));
																															}
																														else
																															{	/* Llib/unicode.scm 844 */
																																BgL_test4629z00_9064
																																	=
																																	((bool_t) 0);
																															}
																														if (BgL_test4629z00_9064)
																															{	/* Llib/unicode.scm 847 */
																																long
																																	BgL_m1z00_1794;
																																BgL_m1z00_1794 =
																																	(STRING_REF
																																	(BgL_strz00_72,
																																		(BgL_rz00_1717
																																			+
																																			((long)
																																				4))));
																																{	/* Llib/unicode.scm 848 */
																																	long
																																		BgL_m2z00_1795;
																																	BgL_m2z00_1795
																																		=
																																		(STRING_REF
																																		(BgL_strz00_72,
																																			(BgL_rz00_1717
																																				+
																																				((long)
																																					5))));
																																	{	/* Llib/unicode.scm 849 */
																																		long
																																			BgL_nuz00_1796;
																																		BgL_nuz00_1796
																																			=
																																			(((((long)
																																						237)
																																					&
																																					((long) 15)) << (int) (((long) 12))) + (((BgL_m1z00_1794 & ((long) 63)) << (int) (((long) 6))) + (BgL_m2z00_1795 & ((long) 63))));
																																		{	/* Llib/unicode.scm 850 */

																																			if (
																																				(BgL_nuz00_1796
																																					>=
																																					((long) 56320)))
																																				{	/* Llib/unicode.scm 854 */
																																					long
																																						BgL_za7za7za7za7za7za7z00_1798;
																																					BgL_za7za7za7za7za7za7z00_1798
																																						=
																																						(BgL_nuz00_1796
																																						&
																																						((long) 63));
																																					{	/* Llib/unicode.scm 854 */
																																						long
																																							BgL_yyyyz00_1799;
																																						BgL_yyyyz00_1799
																																							=
																																							(
																																							(BgL_nuz00_1796
																																								&
																																								((long) 1023)) >> (int) (((long) 6)));
																																						{	/* Llib/unicode.scm 855 */
																																							long
																																								BgL_xxz00_1800;
																																							BgL_xxz00_1800
																																								=
																																								(BgL_ucs2z00_1782
																																								&
																																								((long) 3));
																																							{	/* Llib/unicode.scm 856 */
																																								long
																																									BgL_wwwwz00_1801;
																																								BgL_wwwwz00_1801
																																									=
																																									(
																																									(BgL_ucs2z00_1782
																																										>>
																																										(int)
																																										(((long) 2))) & ((long) 15));
																																								{	/* Llib/unicode.scm 857 */
																																									long
																																										BgL_vvvvz00_1802;
																																									BgL_vvvvz00_1802
																																										=
																																										(
																																										(BgL_ucs2z00_1782
																																											>>
																																											(int)
																																											(((long) 6))) & ((long) 15));
																																									{	/* Llib/unicode.scm 858 */
																																										long
																																											BgL_uuuuuz00_1803;
																																										BgL_uuuuuz00_1803
																																											=
																																											(BgL_vvvvz00_1802
																																											+
																																											((long) 1));
																																										{	/* Llib/unicode.scm 859 */

																																											{	/* Llib/unicode.scm 860 */
																																												unsigned
																																													char
																																													BgL_auxz00_9103;
																																												long
																																													BgL_tmpz00_9101;
																																												BgL_auxz00_9103
																																													=
																																													(
																																													(((long) 128) + BgL_za7za7za7za7za7za7z00_1798));
																																												BgL_tmpz00_9101
																																													=
																																													(BgL_wz00_1718
																																													+
																																													((long) 3));
																																												STRING_SET
																																													(BgL_resz00_1715,
																																													BgL_tmpz00_9101,
																																													BgL_auxz00_9103);
																																											}
																																											{	/* Llib/unicode.scm 863 */
																																												unsigned
																																													char
																																													BgL_auxz00_9109;
																																												long
																																													BgL_tmpz00_9107;
																																												BgL_auxz00_9109
																																													=
																																													(
																																													(((long) 128) + ((BgL_xxz00_1800 << (int) (((long) 4))) | BgL_yyyyz00_1799)));
																																												BgL_tmpz00_9107
																																													=
																																													(BgL_wz00_1718
																																													+
																																													((long) 2));
																																												STRING_SET
																																													(BgL_resz00_1715,
																																													BgL_tmpz00_9107,
																																													BgL_auxz00_9109);
																																											}
																																											{	/* Llib/unicode.scm 867 */
																																												unsigned
																																													char
																																													BgL_auxz00_9118;
																																												long
																																													BgL_tmpz00_9116;
																																												BgL_auxz00_9118
																																													=
																																													(
																																													(((long) 128) + (BgL_wwwwz00_1801 | ((BgL_uuuuuz00_1803 & ((long) 3)) << (int) (((long) 4))))));
																																												BgL_tmpz00_9116
																																													=
																																													(BgL_wz00_1718
																																													+
																																													((long) 1));
																																												STRING_SET
																																													(BgL_resz00_1715,
																																													BgL_tmpz00_9116,
																																													BgL_auxz00_9118);
																																											}
																																											{	/* Llib/unicode.scm 872 */
																																												unsigned
																																													char
																																													BgL_tmpz00_9126;
																																												BgL_tmpz00_9126
																																													=
																																													(
																																													(((long) 240) | (BgL_uuuuuz00_1803 >> (int) (((long) 2)))));
																																												STRING_SET
																																													(BgL_resz00_1715,
																																													BgL_wz00_1718,
																																													BgL_tmpz00_9126);
																																											}
																																											{
																																												bool_t
																																													BgL_asciiz00_9136;
																																												long
																																													BgL_wz00_9134;
																																												long
																																													BgL_rz00_9132;
																																												BgL_rz00_9132
																																													=
																																													(BgL_rz00_1717
																																													+
																																													((long) 6));
																																												BgL_wz00_9134
																																													=
																																													(BgL_wz00_1718
																																													+
																																													((long) 4));
																																												BgL_asciiz00_9136
																																													=
																																													(
																																													(bool_t)
																																													0);
																																												BgL_asciiz00_1719
																																													=
																																													BgL_asciiz00_9136;
																																												BgL_wz00_1718
																																													=
																																													BgL_wz00_9134;
																																												BgL_rz00_1717
																																													=
																																													BgL_rz00_9132;
																																												goto
																																													BgL_zc3z04anonymousza31645ze3z87_1720;
																																											}
																																										}
																																									}
																																								}
																																							}
																																						}
																																					}
																																				}
																																			else
																																				{	/* Llib/unicode.scm 853 */
																																					STRING_SET
																																						(BgL_resz00_1715,
																																						BgL_wz00_1718,
																																						((unsigned char) 239));
																																					{	/* Llib/unicode.scm 776 */
																																						long
																																							BgL_tmpz00_9138;
																																						BgL_tmpz00_9138
																																							=
																																							(BgL_wz00_1718
																																							+
																																							((long) 1));
																																						STRING_SET
																																							(BgL_resz00_1715,
																																							BgL_tmpz00_9138,
																																							((unsigned char) 191));
																																					}
																																					{	/* Llib/unicode.scm 777 */
																																						long
																																							BgL_tmpz00_9141;
																																						BgL_tmpz00_9141
																																							=
																																							(BgL_wz00_1718
																																							+
																																							((long) 2));
																																						STRING_SET
																																							(BgL_resz00_1715,
																																							BgL_tmpz00_9141,
																																							((unsigned char) 189));
																																					}
																																					{
																																						bool_t
																																							BgL_asciiz00_9148;
																																						long
																																							BgL_wz00_9146;
																																						long
																																							BgL_rz00_9144;
																																						BgL_rz00_9144
																																							=
																																							(BgL_rz00_1717
																																							+
																																							((long) 1));
																																						BgL_wz00_9146
																																							=
																																							(BgL_wz00_1718
																																							+
																																							((long) 3));
																																						BgL_asciiz00_9148
																																							=
																																							(
																																							(bool_t)
																																							0);
																																						BgL_asciiz00_1719
																																							=
																																							BgL_asciiz00_9148;
																																						BgL_wz00_1718
																																							=
																																							BgL_wz00_9146;
																																						BgL_rz00_1717
																																							=
																																							BgL_rz00_9144;
																																						goto
																																							BgL_zc3z04anonymousza31645ze3z87_1720;
																																					}
																																				}
																																		}
																																	}
																																}
																															}
																														else
																															{	/* Llib/unicode.scm 844 */
																																if (
																																	(BgL_ucs2z00_1782
																																		<=
																																		((long)
																																			56319)))
																																	{	/* Llib/unicode.scm 880 */
																																		long
																																			BgL_xxz00_1839;
																																		BgL_xxz00_1839
																																			=
																																			(BgL_ucs2z00_1782
																																			& ((long)
																																				3));
																																		{	/* Llib/unicode.scm 880 */
																																			long
																																				BgL_wwwwz00_1840;
																																			BgL_wwwwz00_1840
																																				=
																																				(
																																				(BgL_ucs2z00_1782
																																					>>
																																					(int)
																																					(((long) 2))) & ((long) 15));
																																			{	/* Llib/unicode.scm 881 */
																																				long
																																					BgL_vvvvz00_1841;
																																				BgL_vvvvz00_1841
																																					=
																																					(
																																					(BgL_ucs2z00_1782
																																						>>
																																						(int)
																																						(((long) 6))) & ((long) 15));
																																				{	/* Llib/unicode.scm 882 */
																																					long
																																						BgL_uuuuuz00_1842;
																																					BgL_uuuuuz00_1842
																																						=
																																						(BgL_vvvvz00_1841
																																						+
																																						((long) 1));
																																					{	/* Llib/unicode.scm 883 */

																																						{	/* Llib/unicode.scm 884 */
																																							unsigned
																																								char
																																								BgL_auxz00_9161;
																																							long
																																								BgL_tmpz00_9159;
																																							BgL_auxz00_9161
																																								=
																																								(
																																								(((long) 128) | (BgL_uuuuuz00_1842 >> (int) (((long) 2)))));
																																							BgL_tmpz00_9159
																																								=
																																								(BgL_wz00_1718
																																								+
																																								((long) 3));
																																							STRING_SET
																																								(BgL_resz00_1715,
																																								BgL_tmpz00_9159,
																																								BgL_auxz00_9161);
																																						}
																																						{	/* Llib/unicode.scm 886 */
																																							unsigned
																																								char
																																								BgL_auxz00_9169;
																																							long
																																								BgL_tmpz00_9167;
																																							BgL_auxz00_9169
																																								=
																																								(
																																								((BgL_xxz00_1839 << (int) (((long) 4))) + ((long) 128)));
																																							BgL_tmpz00_9167
																																								=
																																								(BgL_wz00_1718
																																								+
																																								((long) 2));
																																							STRING_SET
																																								(BgL_resz00_1715,
																																								BgL_tmpz00_9167,
																																								BgL_auxz00_9169);
																																						}
																																						{	/* Llib/unicode.scm 888 */
																																							unsigned
																																								char
																																								BgL_auxz00_9177;
																																							long
																																								BgL_tmpz00_9175;
																																							BgL_auxz00_9177
																																								=
																																								(
																																								(((long) 128) + (BgL_wwwwz00_1840 | ((BgL_uuuuuz00_1842 & ((long) 3)) << (int) (((long) 4))))));
																																							BgL_tmpz00_9175
																																								=
																																								(BgL_wz00_1718
																																								+
																																								((long) 1));
																																							STRING_SET
																																								(BgL_resz00_1715,
																																								BgL_tmpz00_9175,
																																								BgL_auxz00_9177);
																																						}
																																						STRING_SET
																																							(BgL_resz00_1715,
																																							BgL_wz00_1718,
																																							((unsigned char) 248));
																																						{
																																							bool_t
																																								BgL_asciiz00_9190;
																																							long
																																								BgL_wz00_9188;
																																							long
																																								BgL_rz00_9186;
																																							BgL_rz00_9186
																																								=
																																								(BgL_rz00_1717
																																								+
																																								((long) 3));
																																							BgL_wz00_9188
																																								=
																																								(BgL_wz00_1718
																																								+
																																								((long) 4));
																																							BgL_asciiz00_9190
																																								=
																																								(
																																								(bool_t)
																																								0);
																																							BgL_asciiz00_1719
																																								=
																																								BgL_asciiz00_9190;
																																							BgL_wz00_1718
																																								=
																																								BgL_wz00_9188;
																																							BgL_rz00_1717
																																								=
																																								BgL_rz00_9186;
																																							goto
																																								BgL_zc3z04anonymousza31645ze3z87_1720;
																																						}
																																					}
																																				}
																																			}
																																		}
																																	}
																																else
																																	{	/* Llib/unicode.scm 896 */
																																		long
																																			BgL_za7za7za7za7za7za7z00_1861;
																																		long
																																			BgL_yyyyz00_1862;
																																		BgL_za7za7za7za7za7za7z00_1861
																																			=
																																			(BgL_nz00_1725
																																			& ((long)
																																				63));
																																		BgL_yyyyz00_1862
																																			=
																																			(
																																			(BgL_nz00_1725
																																				&
																																				((long)
																																					1023))
																																			>>
																																			(int) ((
																																					(long)
																																					6)));
																																		{	/* Llib/unicode.scm 898 */
																																			unsigned
																																				char
																																				BgL_auxz00_9197;
																																			long
																																				BgL_tmpz00_9195;
																																			BgL_auxz00_9197
																																				=
																																				(
																																				(BgL_za7za7za7za7za7za7z00_1861
																																					+
																																					((long) 128)));
																																			BgL_tmpz00_9195
																																				=
																																				(BgL_wz00_1718
																																				+
																																				((long)
																																					3));
																																			STRING_SET
																																				(BgL_resz00_1715,
																																				BgL_tmpz00_9195,
																																				BgL_auxz00_9197);
																																		}
																																		{	/* Llib/unicode.scm 900 */
																																			unsigned
																																				char
																																				BgL_auxz00_9203;
																																			long
																																				BgL_tmpz00_9201;
																																			BgL_auxz00_9203
																																				=
																																				(
																																				(BgL_yyyyz00_1862
																																					+
																																					((long) 128)));
																																			BgL_tmpz00_9201
																																				=
																																				(BgL_wz00_1718
																																				+
																																				((long)
																																					2));
																																			STRING_SET
																																				(BgL_resz00_1715,
																																				BgL_tmpz00_9201,
																																				BgL_auxz00_9203);
																																		}
																																		{	/* Llib/unicode.scm 902 */
																																			long
																																				BgL_tmpz00_9207;
																																			BgL_tmpz00_9207
																																				=
																																				(BgL_wz00_1718
																																				+
																																				((long)
																																					1));
																																			STRING_SET
																																				(BgL_resz00_1715,
																																				BgL_tmpz00_9207,
																																				((unsigned char) 128));
																																		}
																																		STRING_SET
																																			(BgL_resz00_1715,
																																			BgL_wz00_1718,
																																			((unsigned
																																					char)
																																				252));
																																		{	/* Llib/unicode.scm 908 */
																																			bool_t
																																				BgL_test4633z00_9211;
																																			if (
																																				(BgL_wz00_1718
																																					>=
																																					((long) 4)))
																																				{	/* Llib/unicode.scm 909 */
																																					bool_t
																																						BgL_test4635z00_9214;
																																					{	/* Llib/unicode.scm 909 */
																																						long
																																							BgL_arg1809z00_1885;
																																						BgL_arg1809z00_1885
																																							=
																																							(BgL_wz00_1718
																																							-
																																							((long) 4));
																																						if (
																																							((BgL_wz00_1718 + ((long) 4)) >= (BgL_arg1809z00_1885 + ((long) 4))))
																																							{	/* Llib/unicode.scm 1115 */
																																								BgL_test4635z00_9214
																																									=
																																									(
																																									(STRING_REF
																																										(BgL_resz00_1715,
																																											BgL_arg1809z00_1885))
																																									==
																																									((long) 248));
																																							}
																																						else
																																							{	/* Llib/unicode.scm 1115 */
																																								BgL_test4635z00_9214
																																									=
																																									(
																																									(bool_t)
																																									0);
																																							}
																																					}
																																					if (BgL_test4635z00_9214)
																																						{	/* Llib/unicode.scm 909 */
																																							if (((BgL_wz00_1718 + ((long) 4)) >= (BgL_wz00_1718 + ((long) 4))))
																																								{	/* Llib/unicode.scm 1125 */
																																									BgL_test4633z00_9211
																																										=
																																										(
																																										(STRING_REF
																																											(BgL_resz00_1715,
																																												BgL_wz00_1718))
																																										==
																																										((long) 252));
																																								}
																																							else
																																								{	/* Llib/unicode.scm 1125 */
																																									BgL_test4633z00_9211
																																										=
																																										(
																																										(bool_t)
																																										0);
																																								}
																																						}
																																					else
																																						{	/* Llib/unicode.scm 909 */
																																							BgL_test4633z00_9211
																																								=
																																								(
																																								(bool_t)
																																								0);
																																						}
																																				}
																																			else
																																				{	/* Llib/unicode.scm 908 */
																																					BgL_test4633z00_9211
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																			if (BgL_test4633z00_9211)
																																				{	/* Llib/unicode.scm 908 */
																																					BGl_utf8zd2collapsez12zc0zz__unicodez00
																																						(BgL_resz00_1715,
																																						BgL_wz00_1718,
																																						BgL_resz00_1715,
																																						BINT
																																						(BgL_wz00_1718));
																																					{
																																						bool_t
																																							BgL_asciiz00_9234;
																																						long
																																							BgL_rz00_9232;
																																						BgL_rz00_9232
																																							=
																																							(BgL_rz00_1717
																																							+
																																							((long) 3));
																																						BgL_asciiz00_9234
																																							=
																																							(
																																							(bool_t)
																																							0);
																																						BgL_asciiz00_1719
																																							=
																																							BgL_asciiz00_9234;
																																						BgL_rz00_1717
																																							=
																																							BgL_rz00_9232;
																																						goto
																																							BgL_zc3z04anonymousza31645ze3z87_1720;
																																					}
																																				}
																																			else
																																				{
																																					bool_t
																																						BgL_asciiz00_9239;
																																					long
																																						BgL_wz00_9237;
																																					long
																																						BgL_rz00_9235;
																																					BgL_rz00_9235
																																						=
																																						(BgL_rz00_1717
																																						+
																																						((long) 3));
																																					BgL_wz00_9237
																																						=
																																						(BgL_wz00_1718
																																						+
																																						((long) 4));
																																					BgL_asciiz00_9239
																																						=
																																						(
																																						(bool_t)
																																						0);
																																					BgL_asciiz00_1719
																																						=
																																						BgL_asciiz00_9239;
																																					BgL_wz00_1718
																																						=
																																						BgL_wz00_9237;
																																					BgL_rz00_1717
																																						=
																																						BgL_rz00_9235;
																																					goto
																																						BgL_zc3z04anonymousza31645ze3z87_1720;
																																				}
																																		}
																																	}
																															}
																													}
																											}
																										}
																									}
																								}
																							else
																								{	/* Llib/unicode.scm 827 */
																									STRING_SET(BgL_resz00_1715,
																										BgL_wz00_1718,
																										((unsigned char) 239));
																									{	/* Llib/unicode.scm 776 */
																										long BgL_tmpz00_9241;

																										BgL_tmpz00_9241 =
																											(BgL_wz00_1718 +
																											((long) 1));
																										STRING_SET(BgL_resz00_1715,
																											BgL_tmpz00_9241,
																											((unsigned char) 191));
																									}
																									{	/* Llib/unicode.scm 777 */
																										long BgL_tmpz00_9244;

																										BgL_tmpz00_9244 =
																											(BgL_wz00_1718 +
																											((long) 2));
																										STRING_SET(BgL_resz00_1715,
																											BgL_tmpz00_9244,
																											((unsigned char) 189));
																									}
																									{
																										bool_t BgL_asciiz00_9251;
																										long BgL_wz00_9249;
																										long BgL_rz00_9247;

																										BgL_rz00_9247 =
																											(BgL_rz00_1717 +
																											((long) 1));
																										BgL_wz00_9249 =
																											(BgL_wz00_1718 +
																											((long) 3));
																										BgL_asciiz00_9251 =
																											((bool_t) 0);
																										BgL_asciiz00_1719 =
																											BgL_asciiz00_9251;
																										BgL_wz00_1718 =
																											BgL_wz00_9249;
																										BgL_rz00_1717 =
																											BgL_rz00_9247;
																										goto
																											BgL_zc3z04anonymousza31645ze3z87_1720;
																									}
																								}
																						}
																					else
																						{	/* Llib/unicode.scm 825 */
																							if (
																								(BgL_nz00_1725 <= ((long) 239)))
																								{	/* Llib/unicode.scm 922 */
																									bool_t BgL_test4639z00_9254;

																									if (
																										(BgL_rz00_1717 <
																											(BgL_endz00_75 -
																												((long) 2))))
																										{	/* Llib/unicode.scm 923 */
																											bool_t
																												BgL_test4641z00_9258;
																											{	/* Llib/unicode.scm 770 */
																												long BgL_nz00_4884;

																												BgL_nz00_4884 =
																													(STRING_REF
																													(BgL_strz00_72,
																														(BgL_rz00_1717 +
																															((long) 1))));
																												if ((BgL_nz00_4884 >=
																														((long) 128)))
																													{	/* Llib/unicode.scm 771 */
																														BgL_test4641z00_9258
																															=
																															(BgL_nz00_4884 <=
																															((long) 191));
																													}
																												else
																													{	/* Llib/unicode.scm 771 */
																														BgL_test4641z00_9258
																															= ((bool_t) 0);
																													}
																											}
																											if (BgL_test4641z00_9258)
																												{	/* Llib/unicode.scm 770 */
																													long BgL_nz00_4897;

																													BgL_nz00_4897 =
																														(STRING_REF
																														(BgL_strz00_72,
																															(BgL_rz00_1717 +
																																((long) 2))));
																													if ((BgL_nz00_4897 >=
																															((long) 128)))
																														{	/* Llib/unicode.scm 771 */
																															BgL_test4639z00_9254
																																=
																																(BgL_nz00_4897
																																<=
																																((long) 191));
																														}
																													else
																														{	/* Llib/unicode.scm 771 */
																															BgL_test4639z00_9254
																																= ((bool_t) 0);
																														}
																												}
																											else
																												{	/* Llib/unicode.scm 923 */
																													BgL_test4639z00_9254 =
																														((bool_t) 0);
																												}
																										}
																									else
																										{	/* Llib/unicode.scm 922 */
																											BgL_test4639z00_9254 =
																												((bool_t) 0);
																										}
																									if (BgL_test4639z00_9254)
																										{	/* Llib/unicode.scm 922 */
																											STRING_SET
																												(BgL_resz00_1715,
																												BgL_wz00_1718,
																												BgL_cz00_1724);
																											{	/* Llib/unicode.scm 927 */
																												unsigned char
																													BgL_auxz00_9274;
																												long BgL_tmpz00_9272;

																												BgL_auxz00_9274 =
																													STRING_REF
																													(BgL_strz00_72,
																													(BgL_rz00_1717 +
																														((long) 1)));
																												BgL_tmpz00_9272 =
																													(BgL_wz00_1718 +
																													((long) 1));
																												STRING_SET
																													(BgL_resz00_1715,
																													BgL_tmpz00_9272,
																													BgL_auxz00_9274);
																											}
																											{	/* Llib/unicode.scm 928 */
																												unsigned char
																													BgL_auxz00_9280;
																												long BgL_tmpz00_9278;

																												BgL_auxz00_9280 =
																													STRING_REF
																													(BgL_strz00_72,
																													(BgL_rz00_1717 +
																														((long) 2)));
																												BgL_tmpz00_9278 =
																													(BgL_wz00_1718 +
																													((long) 2));
																												STRING_SET
																													(BgL_resz00_1715,
																													BgL_tmpz00_9278,
																													BgL_auxz00_9280);
																											}
																											{
																												bool_t
																													BgL_asciiz00_9288;
																												long BgL_wz00_9286;
																												long BgL_rz00_9284;

																												BgL_rz00_9284 =
																													(BgL_rz00_1717 +
																													((long) 3));
																												BgL_wz00_9286 =
																													(BgL_wz00_1718 +
																													((long) 3));
																												BgL_asciiz00_9288 =
																													((bool_t) 0);
																												BgL_asciiz00_1719 =
																													BgL_asciiz00_9288;
																												BgL_wz00_1718 =
																													BgL_wz00_9286;
																												BgL_rz00_1717 =
																													BgL_rz00_9284;
																												goto
																													BgL_zc3z04anonymousza31645ze3z87_1720;
																											}
																										}
																									else
																										{	/* Llib/unicode.scm 922 */
																											STRING_SET
																												(BgL_resz00_1715,
																												BgL_wz00_1718,
																												((unsigned char) 239));
																											{	/* Llib/unicode.scm 776 */
																												long BgL_tmpz00_9290;

																												BgL_tmpz00_9290 =
																													(BgL_wz00_1718 +
																													((long) 1));
																												STRING_SET
																													(BgL_resz00_1715,
																													BgL_tmpz00_9290,
																													((unsigned char)
																														191));
																											}
																											{	/* Llib/unicode.scm 777 */
																												long BgL_tmpz00_9293;

																												BgL_tmpz00_9293 =
																													(BgL_wz00_1718 +
																													((long) 2));
																												STRING_SET
																													(BgL_resz00_1715,
																													BgL_tmpz00_9293,
																													((unsigned char)
																														189));
																											}
																											{
																												bool_t
																													BgL_asciiz00_9300;
																												long BgL_wz00_9298;
																												long BgL_rz00_9296;

																												BgL_rz00_9296 =
																													(BgL_rz00_1717 +
																													((long) 1));
																												BgL_wz00_9298 =
																													(BgL_wz00_1718 +
																													((long) 3));
																												BgL_asciiz00_9300 =
																													((bool_t) 0);
																												BgL_asciiz00_1719 =
																													BgL_asciiz00_9300;
																												BgL_wz00_1718 =
																													BgL_wz00_9298;
																												BgL_rz00_1717 =
																													BgL_rz00_9296;
																												goto
																													BgL_zc3z04anonymousza31645ze3z87_1720;
																											}
																										}
																								}
																							else
																								{	/* Llib/unicode.scm 920 */
																									if (
																										(BgL_nz00_1725 ==
																											((long) 240)))
																										{	/* Llib/unicode.scm 935 */
																											bool_t
																												BgL_test4645z00_9303;
																											if ((BgL_rz00_1717 <
																													(BgL_endz00_75 -
																														((long) 3))))
																												{	/* Llib/unicode.scm 936 */
																													bool_t
																														BgL_test4647z00_9307;
																													{	/* Llib/unicode.scm 770 */
																														long BgL_nz00_4963;

																														BgL_nz00_4963 =
																															(STRING_REF
																															(BgL_strz00_72,
																																(BgL_rz00_1717 +
																																	((long) 1))));
																														if ((BgL_nz00_4963
																																>=
																																((long) 144)))
																															{	/* Llib/unicode.scm 771 */
																																BgL_test4647z00_9307
																																	=
																																	(BgL_nz00_4963
																																	<=
																																	((long) 191));
																															}
																														else
																															{	/* Llib/unicode.scm 771 */
																																BgL_test4647z00_9307
																																	=
																																	((bool_t) 0);
																															}
																													}
																													if (BgL_test4647z00_9307)
																														{	/* Llib/unicode.scm 937 */
																															bool_t
																																BgL_test4649z00_9314;
																															{	/* Llib/unicode.scm 770 */
																																long
																																	BgL_nz00_4976;
																																BgL_nz00_4976 =
																																	(STRING_REF
																																	(BgL_strz00_72,
																																		(BgL_rz00_1717
																																			+
																																			((long)
																																				2))));
																																if (
																																	(BgL_nz00_4976
																																		>=
																																		((long)
																																			128)))
																																	{	/* Llib/unicode.scm 771 */
																																		BgL_test4649z00_9314
																																			=
																																			(BgL_nz00_4976
																																			<=
																																			((long)
																																				191));
																																	}
																																else
																																	{	/* Llib/unicode.scm 771 */
																																		BgL_test4649z00_9314
																																			=
																																			((bool_t)
																																			0);
																																	}
																															}
																															if (BgL_test4649z00_9314)
																																{	/* Llib/unicode.scm 770 */
																																	long
																																		BgL_nz00_4989;
																																	BgL_nz00_4989
																																		=
																																		(STRING_REF
																																		(BgL_strz00_72,
																																			(BgL_rz00_1717
																																				+
																																				((long)
																																					3))));
																																	if (
																																		(BgL_nz00_4989
																																			>=
																																			((long)
																																				128)))
																																		{	/* Llib/unicode.scm 771 */
																																			BgL_test4645z00_9303
																																				=
																																				(BgL_nz00_4989
																																				<=
																																				((long)
																																					191));
																																		}
																																	else
																																		{	/* Llib/unicode.scm 771 */
																																			BgL_test4645z00_9303
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																}
																															else
																																{	/* Llib/unicode.scm 937 */
																																	BgL_test4645z00_9303
																																		=
																																		((bool_t)
																																		0);
																																}
																														}
																													else
																														{	/* Llib/unicode.scm 936 */
																															BgL_test4645z00_9303
																																= ((bool_t) 0);
																														}
																												}
																											else
																												{	/* Llib/unicode.scm 935 */
																													BgL_test4645z00_9303 =
																														((bool_t) 0);
																												}
																											if (BgL_test4645z00_9303)
																												{	/* Llib/unicode.scm 935 */
																													STRING_SET
																														(BgL_resz00_1715,
																														BgL_wz00_1718,
																														BgL_cz00_1724);
																													{	/* Llib/unicode.scm 941 */
																														unsigned char
																															BgL_auxz00_9330;
																														long
																															BgL_tmpz00_9328;
																														BgL_auxz00_9330 =
																															STRING_REF
																															(BgL_strz00_72,
																															(BgL_rz00_1717 +
																																((long) 1)));
																														BgL_tmpz00_9328 =
																															(BgL_wz00_1718 +
																															((long) 1));
																														STRING_SET
																															(BgL_resz00_1715,
																															BgL_tmpz00_9328,
																															BgL_auxz00_9330);
																													}
																													{	/* Llib/unicode.scm 942 */
																														unsigned char
																															BgL_auxz00_9336;
																														long
																															BgL_tmpz00_9334;
																														BgL_auxz00_9336 =
																															STRING_REF
																															(BgL_strz00_72,
																															(BgL_rz00_1717 +
																																((long) 2)));
																														BgL_tmpz00_9334 =
																															(BgL_wz00_1718 +
																															((long) 2));
																														STRING_SET
																															(BgL_resz00_1715,
																															BgL_tmpz00_9334,
																															BgL_auxz00_9336);
																													}
																													{	/* Llib/unicode.scm 943 */
																														unsigned char
																															BgL_auxz00_9342;
																														long
																															BgL_tmpz00_9340;
																														BgL_auxz00_9342 =
																															STRING_REF
																															(BgL_strz00_72,
																															(BgL_rz00_1717 +
																																((long) 3)));
																														BgL_tmpz00_9340 =
																															(BgL_wz00_1718 +
																															((long) 3));
																														STRING_SET
																															(BgL_resz00_1715,
																															BgL_tmpz00_9340,
																															BgL_auxz00_9342);
																													}
																													{
																														bool_t
																															BgL_asciiz00_9350;
																														long BgL_wz00_9348;
																														long BgL_rz00_9346;

																														BgL_rz00_9346 =
																															(BgL_rz00_1717 +
																															((long) 4));
																														BgL_wz00_9348 =
																															(BgL_wz00_1718 +
																															((long) 4));
																														BgL_asciiz00_9350 =
																															((bool_t) 0);
																														BgL_asciiz00_1719 =
																															BgL_asciiz00_9350;
																														BgL_wz00_1718 =
																															BgL_wz00_9348;
																														BgL_rz00_1717 =
																															BgL_rz00_9346;
																														goto
																															BgL_zc3z04anonymousza31645ze3z87_1720;
																													}
																												}
																											else
																												{	/* Llib/unicode.scm 935 */
																													STRING_SET
																														(BgL_resz00_1715,
																														BgL_wz00_1718,
																														((unsigned char)
																															239));
																													{	/* Llib/unicode.scm 776 */
																														long
																															BgL_tmpz00_9352;
																														BgL_tmpz00_9352 =
																															(BgL_wz00_1718 +
																															((long) 1));
																														STRING_SET
																															(BgL_resz00_1715,
																															BgL_tmpz00_9352,
																															((unsigned char)
																																191));
																													}
																													{	/* Llib/unicode.scm 777 */
																														long
																															BgL_tmpz00_9355;
																														BgL_tmpz00_9355 =
																															(BgL_wz00_1718 +
																															((long) 2));
																														STRING_SET
																															(BgL_resz00_1715,
																															BgL_tmpz00_9355,
																															((unsigned char)
																																189));
																													}
																													{
																														bool_t
																															BgL_asciiz00_9362;
																														long BgL_wz00_9360;
																														long BgL_rz00_9358;

																														BgL_rz00_9358 =
																															(BgL_rz00_1717 +
																															((long) 1));
																														BgL_wz00_9360 =
																															(BgL_wz00_1718 +
																															((long) 3));
																														BgL_asciiz00_9362 =
																															((bool_t) 0);
																														BgL_asciiz00_1719 =
																															BgL_asciiz00_9362;
																														BgL_wz00_1718 =
																															BgL_wz00_9360;
																														BgL_rz00_1717 =
																															BgL_rz00_9358;
																														goto
																															BgL_zc3z04anonymousza31645ze3z87_1720;
																													}
																												}
																										}
																									else
																										{	/* Llib/unicode.scm 948 */
																											bool_t
																												BgL_test4652z00_9363;
																											if ((BgL_nz00_1725 ==
																													((long) 244)))
																												{	/* Llib/unicode.scm 948 */
																													BgL_test4652z00_9363 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Llib/unicode.scm 949 */
																													bool_t
																														BgL_test4654z00_9366;
																													{	/* Llib/unicode.scm 949 */
																														bool_t
																															BgL__ortest_1051z00_2180;
																														BgL__ortest_1051z00_2180
																															=
																															(BgL_nz00_1725 ==
																															((long) 248));
																														if (BgL__ortest_1051z00_2180)
																															{	/* Llib/unicode.scm 949 */
																																BgL_test4654z00_9366
																																	=
																																	BgL__ortest_1051z00_2180;
																															}
																														else
																															{	/* Llib/unicode.scm 949 */
																																BgL_test4654z00_9366
																																	=
																																	(BgL_nz00_1725
																																	==
																																	((long) 252));
																													}}
																													if (BgL_test4654z00_9366)
																														{	/* Llib/unicode.scm 949 */
																															if (BgL_strictz00_73)
																																{	/* Llib/unicode.scm 949 */
																																	BgL_test4652z00_9363
																																		=
																																		((bool_t)
																																		0);
																																}
																															else
																																{	/* Llib/unicode.scm 949 */
																																	BgL_test4652z00_9363
																																		=
																																		((bool_t)
																																		1);
																																}
																														}
																													else
																														{	/* Llib/unicode.scm 949 */
																															BgL_test4652z00_9363
																																= ((bool_t) 0);
																														}
																												}
																											if (BgL_test4652z00_9363)
																												{	/* Llib/unicode.scm 951 */
																													bool_t
																														BgL_test4657z00_9371;
																													if ((BgL_rz00_1717 <
																															(BgL_endz00_75 -
																																((long) 3))))
																														{	/* Llib/unicode.scm 952 */
																															bool_t
																																BgL_test4659z00_9375;
																															{	/* Llib/unicode.scm 770 */
																																long
																																	BgL_nz00_5069;
																																BgL_nz00_5069 =
																																	(STRING_REF
																																	(BgL_strz00_72,
																																		(BgL_rz00_1717
																																			+
																																			((long)
																																				1))));
																																if (
																																	(BgL_nz00_5069
																																		>=
																																		((long)
																																			128)))
																																	{	/* Llib/unicode.scm 771 */
																																		BgL_test4659z00_9375
																																			=
																																			(BgL_nz00_5069
																																			<=
																																			((long)
																																				191));
																																	}
																																else
																																	{	/* Llib/unicode.scm 771 */
																																		BgL_test4659z00_9375
																																			=
																																			((bool_t)
																																			0);
																																	}
																															}
																															if (BgL_test4659z00_9375)
																																{	/* Llib/unicode.scm 953 */
																																	bool_t
																																		BgL_test4661z00_9382;
																																	{	/* Llib/unicode.scm 770 */
																																		long
																																			BgL_nz00_5082;
																																		BgL_nz00_5082
																																			=
																																			(STRING_REF
																																			(BgL_strz00_72,
																																				(BgL_rz00_1717
																																					+
																																					((long) 2))));
																																		if (
																																			(BgL_nz00_5082
																																				>=
																																				((long)
																																					128)))
																																			{	/* Llib/unicode.scm 771 */
																																				BgL_test4661z00_9382
																																					=
																																					(BgL_nz00_5082
																																					<=
																																					((long) 191));
																																			}
																																		else
																																			{	/* Llib/unicode.scm 771 */
																																				BgL_test4661z00_9382
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																	}
																																	if (BgL_test4661z00_9382)
																																		{	/* Llib/unicode.scm 770 */
																																			long
																																				BgL_nz00_5095;
																																			BgL_nz00_5095
																																				=
																																				(STRING_REF
																																				(BgL_strz00_72,
																																					(BgL_rz00_1717
																																						+
																																						((long) 3))));
																																			if (
																																				(BgL_nz00_5095
																																					>=
																																					((long) 128)))
																																				{	/* Llib/unicode.scm 771 */
																																					BgL_test4657z00_9371
																																						=
																																						(BgL_nz00_5095
																																						<=
																																						((long) 191));
																																				}
																																			else
																																				{	/* Llib/unicode.scm 771 */
																																					BgL_test4657z00_9371
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																	else
																																		{	/* Llib/unicode.scm 953 */
																																			BgL_test4657z00_9371
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																}
																															else
																																{	/* Llib/unicode.scm 952 */
																																	BgL_test4657z00_9371
																																		=
																																		((bool_t)
																																		0);
																																}
																														}
																													else
																														{	/* Llib/unicode.scm 951 */
																															BgL_test4657z00_9371
																																= ((bool_t) 0);
																														}
																													if (BgL_test4657z00_9371)
																														{	/* Llib/unicode.scm 951 */
																															STRING_SET
																																(BgL_resz00_1715,
																																BgL_wz00_1718,
																																BgL_cz00_1724);
																															{	/* Llib/unicode.scm 957 */
																																unsigned char
																																	BgL_auxz00_9398;
																																long
																																	BgL_tmpz00_9396;
																																BgL_auxz00_9398
																																	=
																																	STRING_REF
																																	(BgL_strz00_72,
																																	(BgL_rz00_1717
																																		+
																																		((long)
																																			1)));
																																BgL_tmpz00_9396
																																	=
																																	(BgL_wz00_1718
																																	+ ((long) 1));
																																STRING_SET
																																	(BgL_resz00_1715,
																																	BgL_tmpz00_9396,
																																	BgL_auxz00_9398);
																															}
																															{	/* Llib/unicode.scm 958 */
																																unsigned char
																																	BgL_auxz00_9404;
																																long
																																	BgL_tmpz00_9402;
																																BgL_auxz00_9404
																																	=
																																	STRING_REF
																																	(BgL_strz00_72,
																																	(BgL_rz00_1717
																																		+
																																		((long)
																																			2)));
																																BgL_tmpz00_9402
																																	=
																																	(BgL_wz00_1718
																																	+ ((long) 2));
																																STRING_SET
																																	(BgL_resz00_1715,
																																	BgL_tmpz00_9402,
																																	BgL_auxz00_9404);
																															}
																															{	/* Llib/unicode.scm 959 */
																																unsigned char
																																	BgL_auxz00_9410;
																																long
																																	BgL_tmpz00_9408;
																																BgL_auxz00_9410
																																	=
																																	STRING_REF
																																	(BgL_strz00_72,
																																	(BgL_rz00_1717
																																		+
																																		((long)
																																			3)));
																																BgL_tmpz00_9408
																																	=
																																	(BgL_wz00_1718
																																	+ ((long) 3));
																																STRING_SET
																																	(BgL_resz00_1715,
																																	BgL_tmpz00_9408,
																																	BgL_auxz00_9410);
																															}
																															{
																																bool_t
																																	BgL_asciiz00_9418;
																																long
																																	BgL_wz00_9416;
																																long
																																	BgL_rz00_9414;
																																BgL_rz00_9414 =
																																	(BgL_rz00_1717
																																	+ ((long) 4));
																																BgL_wz00_9416 =
																																	(BgL_wz00_1718
																																	+ ((long) 4));
																																BgL_asciiz00_9418
																																	=
																																	((bool_t) 0);
																																BgL_asciiz00_1719
																																	=
																																	BgL_asciiz00_9418;
																																BgL_wz00_1718 =
																																	BgL_wz00_9416;
																																BgL_rz00_1717 =
																																	BgL_rz00_9414;
																																goto
																																	BgL_zc3z04anonymousza31645ze3z87_1720;
																															}
																														}
																													else
																														{	/* Llib/unicode.scm 951 */
																															STRING_SET
																																(BgL_resz00_1715,
																																BgL_wz00_1718,
																																((unsigned char)
																																	239));
																															{	/* Llib/unicode.scm 776 */
																																long
																																	BgL_tmpz00_9420;
																																BgL_tmpz00_9420
																																	=
																																	(BgL_wz00_1718
																																	+ ((long) 1));
																																STRING_SET
																																	(BgL_resz00_1715,
																																	BgL_tmpz00_9420,
																																	((unsigned
																																			char)
																																		191));
																															}
																															{	/* Llib/unicode.scm 777 */
																																long
																																	BgL_tmpz00_9423;
																																BgL_tmpz00_9423
																																	=
																																	(BgL_wz00_1718
																																	+ ((long) 2));
																																STRING_SET
																																	(BgL_resz00_1715,
																																	BgL_tmpz00_9423,
																																	((unsigned
																																			char)
																																		189));
																															}
																															{
																																bool_t
																																	BgL_asciiz00_9430;
																																long
																																	BgL_wz00_9428;
																																long
																																	BgL_rz00_9426;
																																BgL_rz00_9426 =
																																	(BgL_rz00_1717
																																	+ ((long) 1));
																																BgL_wz00_9428 =
																																	(BgL_wz00_1718
																																	+ ((long) 3));
																																BgL_asciiz00_9430
																																	=
																																	((bool_t) 0);
																																BgL_asciiz00_1719
																																	=
																																	BgL_asciiz00_9430;
																																BgL_wz00_1718 =
																																	BgL_wz00_9428;
																																BgL_rz00_1717 =
																																	BgL_rz00_9426;
																																goto
																																	BgL_zc3z04anonymousza31645ze3z87_1720;
																															}
																														}
																												}
																											else
																												{	/* Llib/unicode.scm 948 */
																													if (
																														(BgL_nz00_1725 <=
																															((long) 247)))
																														{	/* Llib/unicode.scm 966 */
																															bool_t
																																BgL_test4665z00_9433;
																															if ((BgL_rz00_1717
																																	<
																																	(BgL_endz00_75
																																		-
																																		((long)
																																			3))))
																																{	/* Llib/unicode.scm 967 */
																																	bool_t
																																		BgL_test4667z00_9437;
																																	{	/* Llib/unicode.scm 770 */
																																		long
																																			BgL_nz00_5171;
																																		BgL_nz00_5171
																																			=
																																			(STRING_REF
																																			(BgL_strz00_72,
																																				(BgL_rz00_1717
																																					+
																																					((long) 1))));
																																		if (
																																			(BgL_nz00_5171
																																				>=
																																				((long)
																																					128)))
																																			{	/* Llib/unicode.scm 771 */
																																				BgL_test4667z00_9437
																																					=
																																					(BgL_nz00_5171
																																					<=
																																					((long) 191));
																																			}
																																		else
																																			{	/* Llib/unicode.scm 771 */
																																				BgL_test4667z00_9437
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																	}
																																	if (BgL_test4667z00_9437)
																																		{	/* Llib/unicode.scm 968 */
																																			bool_t
																																				BgL_test4669z00_9444;
																																			{	/* Llib/unicode.scm 770 */
																																				long
																																					BgL_nz00_5184;
																																				BgL_nz00_5184
																																					=
																																					(STRING_REF
																																					(BgL_strz00_72,
																																						(BgL_rz00_1717
																																							+
																																							((long) 2))));
																																				if (
																																					(BgL_nz00_5184
																																						>=
																																						((long) 128)))
																																					{	/* Llib/unicode.scm 771 */
																																						BgL_test4669z00_9444
																																							=
																																							(BgL_nz00_5184
																																							<=
																																							((long) 191));
																																					}
																																				else
																																					{	/* Llib/unicode.scm 771 */
																																						BgL_test4669z00_9444
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																			}
																																			if (BgL_test4669z00_9444)
																																				{	/* Llib/unicode.scm 770 */
																																					long
																																						BgL_nz00_5197;
																																					BgL_nz00_5197
																																						=
																																						(STRING_REF
																																						(BgL_strz00_72,
																																							(BgL_rz00_1717
																																								+
																																								((long) 3))));
																																					if (
																																						(BgL_nz00_5197
																																							>=
																																							((long) 128)))
																																						{	/* Llib/unicode.scm 771 */
																																							BgL_test4665z00_9433
																																								=
																																								(BgL_nz00_5197
																																								<=
																																								((long) 191));
																																						}
																																					else
																																						{	/* Llib/unicode.scm 771 */
																																							BgL_test4665z00_9433
																																								=
																																								(
																																								(bool_t)
																																								0);
																																						}
																																				}
																																			else
																																				{	/* Llib/unicode.scm 968 */
																																					BgL_test4665z00_9433
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																	else
																																		{	/* Llib/unicode.scm 967 */
																																			BgL_test4665z00_9433
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																}
																															else
																																{	/* Llib/unicode.scm 966 */
																																	BgL_test4665z00_9433
																																		=
																																		((bool_t)
																																		0);
																																}
																															if (BgL_test4665z00_9433)
																																{	/* Llib/unicode.scm 966 */
																																	STRING_SET
																																		(BgL_resz00_1715,
																																		BgL_wz00_1718,
																																		BgL_cz00_1724);
																																	{	/* Llib/unicode.scm 972 */
																																		unsigned
																																			char
																																			BgL_auxz00_9460;
																																		long
																																			BgL_tmpz00_9458;
																																		BgL_auxz00_9460
																																			=
																																			STRING_REF
																																			(BgL_strz00_72,
																																			(BgL_rz00_1717
																																				+
																																				((long)
																																					1)));
																																		BgL_tmpz00_9458
																																			=
																																			(BgL_wz00_1718
																																			+
																																			((long)
																																				1));
																																		STRING_SET
																																			(BgL_resz00_1715,
																																			BgL_tmpz00_9458,
																																			BgL_auxz00_9460);
																																	}
																																	{	/* Llib/unicode.scm 973 */
																																		unsigned
																																			char
																																			BgL_auxz00_9466;
																																		long
																																			BgL_tmpz00_9464;
																																		BgL_auxz00_9466
																																			=
																																			STRING_REF
																																			(BgL_strz00_72,
																																			(BgL_rz00_1717
																																				+
																																				((long)
																																					2)));
																																		BgL_tmpz00_9464
																																			=
																																			(BgL_wz00_1718
																																			+
																																			((long)
																																				2));
																																		STRING_SET
																																			(BgL_resz00_1715,
																																			BgL_tmpz00_9464,
																																			BgL_auxz00_9466);
																																	}
																																	{	/* Llib/unicode.scm 974 */
																																		unsigned
																																			char
																																			BgL_auxz00_9472;
																																		long
																																			BgL_tmpz00_9470;
																																		BgL_auxz00_9472
																																			=
																																			STRING_REF
																																			(BgL_strz00_72,
																																			(BgL_rz00_1717
																																				+
																																				((long)
																																					3)));
																																		BgL_tmpz00_9470
																																			=
																																			(BgL_wz00_1718
																																			+
																																			((long)
																																				3));
																																		STRING_SET
																																			(BgL_resz00_1715,
																																			BgL_tmpz00_9470,
																																			BgL_auxz00_9472);
																																	}
																																	{
																																		bool_t
																																			BgL_asciiz00_9480;
																																		long
																																			BgL_wz00_9478;
																																		long
																																			BgL_rz00_9476;
																																		BgL_rz00_9476
																																			=
																																			(BgL_rz00_1717
																																			+
																																			((long)
																																				4));
																																		BgL_wz00_9478
																																			=
																																			(BgL_wz00_1718
																																			+
																																			((long)
																																				4));
																																		BgL_asciiz00_9480
																																			=
																																			((bool_t)
																																			0);
																																		BgL_asciiz00_1719
																																			=
																																			BgL_asciiz00_9480;
																																		BgL_wz00_1718
																																			=
																																			BgL_wz00_9478;
																																		BgL_rz00_1717
																																			=
																																			BgL_rz00_9476;
																																		goto
																																			BgL_zc3z04anonymousza31645ze3z87_1720;
																																	}
																																}
																															else
																																{	/* Llib/unicode.scm 966 */
																																	STRING_SET
																																		(BgL_resz00_1715,
																																		BgL_wz00_1718,
																																		((unsigned
																																				char)
																																			239));
																																	{	/* Llib/unicode.scm 776 */
																																		long
																																			BgL_tmpz00_9482;
																																		BgL_tmpz00_9482
																																			=
																																			(BgL_wz00_1718
																																			+
																																			((long)
																																				1));
																																		STRING_SET
																																			(BgL_resz00_1715,
																																			BgL_tmpz00_9482,
																																			((unsigned
																																					char)
																																				191));
																																	}
																																	{	/* Llib/unicode.scm 777 */
																																		long
																																			BgL_tmpz00_9485;
																																		BgL_tmpz00_9485
																																			=
																																			(BgL_wz00_1718
																																			+
																																			((long)
																																				2));
																																		STRING_SET
																																			(BgL_resz00_1715,
																																			BgL_tmpz00_9485,
																																			((unsigned
																																					char)
																																				189));
																																	}
																																	{
																																		bool_t
																																			BgL_asciiz00_9492;
																																		long
																																			BgL_wz00_9490;
																																		long
																																			BgL_rz00_9488;
																																		BgL_rz00_9488
																																			=
																																			(BgL_rz00_1717
																																			+
																																			((long)
																																				1));
																																		BgL_wz00_9490
																																			=
																																			(BgL_wz00_1718
																																			+
																																			((long)
																																				3));
																																		BgL_asciiz00_9492
																																			=
																																			((bool_t)
																																			0);
																																		BgL_asciiz00_1719
																																			=
																																			BgL_asciiz00_9492;
																																		BgL_wz00_1718
																																			=
																																			BgL_wz00_9490;
																																		BgL_rz00_1717
																																			=
																																			BgL_rz00_9488;
																																		goto
																																			BgL_zc3z04anonymousza31645ze3z87_1720;
																																	}
																																}
																														}
																													else
																														{	/* Llib/unicode.scm 964 */
																															if (
																																(BgL_nz00_1725
																																	<=
																																	((long) 251)))
																																{	/* Llib/unicode.scm 980 */
																																	bool_t
																																		BgL_test4673z00_9495;
																																	if (
																																		(BgL_rz00_1717
																																			<
																																			(BgL_endz00_75
																																				-
																																				((long)
																																					4))))
																																		{	/* Llib/unicode.scm 981 */
																																			bool_t
																																				BgL_test4675z00_9499;
																																			{	/* Llib/unicode.scm 770 */
																																				long
																																					BgL_nz00_5273;
																																				BgL_nz00_5273
																																					=
																																					(STRING_REF
																																					(BgL_strz00_72,
																																						(BgL_rz00_1717
																																							+
																																							((long) 1))));
																																				if (
																																					(BgL_nz00_5273
																																						>=
																																						((long) 128)))
																																					{	/* Llib/unicode.scm 771 */
																																						BgL_test4675z00_9499
																																							=
																																							(BgL_nz00_5273
																																							<=
																																							((long) 191));
																																					}
																																				else
																																					{	/* Llib/unicode.scm 771 */
																																						BgL_test4675z00_9499
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																			}
																																			if (BgL_test4675z00_9499)
																																				{	/* Llib/unicode.scm 982 */
																																					bool_t
																																						BgL_test4677z00_9506;
																																					{	/* Llib/unicode.scm 770 */
																																						long
																																							BgL_nz00_5286;
																																						BgL_nz00_5286
																																							=
																																							(STRING_REF
																																							(BgL_strz00_72,
																																								(BgL_rz00_1717
																																									+
																																									((long) 2))));
																																						if (
																																							(BgL_nz00_5286
																																								>=
																																								((long) 128)))
																																							{	/* Llib/unicode.scm 771 */
																																								BgL_test4677z00_9506
																																									=
																																									(BgL_nz00_5286
																																									<=
																																									((long) 191));
																																							}
																																						else
																																							{	/* Llib/unicode.scm 771 */
																																								BgL_test4677z00_9506
																																									=
																																									(
																																									(bool_t)
																																									0);
																																							}
																																					}
																																					if (BgL_test4677z00_9506)
																																						{	/* Llib/unicode.scm 983 */
																																							bool_t
																																								BgL_test4679z00_9513;
																																							{	/* Llib/unicode.scm 770 */
																																								long
																																									BgL_nz00_5299;
																																								BgL_nz00_5299
																																									=
																																									(STRING_REF
																																									(BgL_strz00_72,
																																										(BgL_rz00_1717
																																											+
																																											((long) 3))));
																																								if ((BgL_nz00_5299 >= ((long) 128)))
																																									{	/* Llib/unicode.scm 771 */
																																										BgL_test4679z00_9513
																																											=
																																											(BgL_nz00_5299
																																											<=
																																											((long) 191));
																																									}
																																								else
																																									{	/* Llib/unicode.scm 771 */
																																										BgL_test4679z00_9513
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																							}
																																							if (BgL_test4679z00_9513)
																																								{	/* Llib/unicode.scm 770 */
																																									long
																																										BgL_nz00_5312;
																																									BgL_nz00_5312
																																										=
																																										(STRING_REF
																																										(BgL_strz00_72,
																																											(BgL_rz00_1717
																																												+
																																												((long) 4))));
																																									if ((BgL_nz00_5312 >= ((long) 128)))
																																										{	/* Llib/unicode.scm 771 */
																																											BgL_test4673z00_9495
																																												=
																																												(BgL_nz00_5312
																																												<=
																																												((long) 191));
																																										}
																																									else
																																										{	/* Llib/unicode.scm 771 */
																																											BgL_test4673z00_9495
																																												=
																																												(
																																												(bool_t)
																																												0);
																																										}
																																								}
																																							else
																																								{	/* Llib/unicode.scm 983 */
																																									BgL_test4673z00_9495
																																										=
																																										(
																																										(bool_t)
																																										0);
																																								}
																																						}
																																					else
																																						{	/* Llib/unicode.scm 982 */
																																							BgL_test4673z00_9495
																																								=
																																								(
																																								(bool_t)
																																								0);
																																						}
																																				}
																																			else
																																				{	/* Llib/unicode.scm 981 */
																																					BgL_test4673z00_9495
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																	else
																																		{	/* Llib/unicode.scm 980 */
																																			BgL_test4673z00_9495
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																	if (BgL_test4673z00_9495)
																																		{	/* Llib/unicode.scm 980 */
																																			STRING_SET
																																				(BgL_resz00_1715,
																																				BgL_wz00_1718,
																																				BgL_cz00_1724);
																																			{	/* Llib/unicode.scm 987 */
																																				unsigned
																																					char
																																					BgL_auxz00_9529;
																																				long
																																					BgL_tmpz00_9527;
																																				BgL_auxz00_9529
																																					=
																																					STRING_REF
																																					(BgL_strz00_72,
																																					(BgL_rz00_1717
																																						+
																																						((long) 1)));
																																				BgL_tmpz00_9527
																																					=
																																					(BgL_wz00_1718
																																					+
																																					((long) 1));
																																				STRING_SET
																																					(BgL_resz00_1715,
																																					BgL_tmpz00_9527,
																																					BgL_auxz00_9529);
																																			}
																																			{	/* Llib/unicode.scm 988 */
																																				unsigned
																																					char
																																					BgL_auxz00_9535;
																																				long
																																					BgL_tmpz00_9533;
																																				BgL_auxz00_9535
																																					=
																																					STRING_REF
																																					(BgL_strz00_72,
																																					(BgL_rz00_1717
																																						+
																																						((long) 2)));
																																				BgL_tmpz00_9533
																																					=
																																					(BgL_wz00_1718
																																					+
																																					((long) 2));
																																				STRING_SET
																																					(BgL_resz00_1715,
																																					BgL_tmpz00_9533,
																																					BgL_auxz00_9535);
																																			}
																																			{	/* Llib/unicode.scm 989 */
																																				unsigned
																																					char
																																					BgL_auxz00_9541;
																																				long
																																					BgL_tmpz00_9539;
																																				BgL_auxz00_9541
																																					=
																																					STRING_REF
																																					(BgL_strz00_72,
																																					(BgL_rz00_1717
																																						+
																																						((long) 3)));
																																				BgL_tmpz00_9539
																																					=
																																					(BgL_wz00_1718
																																					+
																																					((long) 3));
																																				STRING_SET
																																					(BgL_resz00_1715,
																																					BgL_tmpz00_9539,
																																					BgL_auxz00_9541);
																																			}
																																			{	/* Llib/unicode.scm 990 */
																																				unsigned
																																					char
																																					BgL_auxz00_9547;
																																				long
																																					BgL_tmpz00_9545;
																																				BgL_auxz00_9547
																																					=
																																					STRING_REF
																																					(BgL_strz00_72,
																																					(BgL_rz00_1717
																																						+
																																						((long) 4)));
																																				BgL_tmpz00_9545
																																					=
																																					(BgL_wz00_1718
																																					+
																																					((long) 4));
																																				STRING_SET
																																					(BgL_resz00_1715,
																																					BgL_tmpz00_9545,
																																					BgL_auxz00_9547);
																																			}
																																			{
																																				bool_t
																																					BgL_asciiz00_9555;
																																				long
																																					BgL_wz00_9553;
																																				long
																																					BgL_rz00_9551;
																																				BgL_rz00_9551
																																					=
																																					(BgL_rz00_1717
																																					+
																																					((long) 5));
																																				BgL_wz00_9553
																																					=
																																					(BgL_wz00_1718
																																					+
																																					((long) 5));
																																				BgL_asciiz00_9555
																																					=
																																					(
																																					(bool_t)
																																					0);
																																				BgL_asciiz00_1719
																																					=
																																					BgL_asciiz00_9555;
																																				BgL_wz00_1718
																																					=
																																					BgL_wz00_9553;
																																				BgL_rz00_1717
																																					=
																																					BgL_rz00_9551;
																																				goto
																																					BgL_zc3z04anonymousza31645ze3z87_1720;
																																			}
																																		}
																																	else
																																		{	/* Llib/unicode.scm 980 */
																																			STRING_SET
																																				(BgL_resz00_1715,
																																				BgL_wz00_1718,
																																				((unsigned char) 239));
																																			{	/* Llib/unicode.scm 776 */
																																				long
																																					BgL_tmpz00_9557;
																																				BgL_tmpz00_9557
																																					=
																																					(BgL_wz00_1718
																																					+
																																					((long) 1));
																																				STRING_SET
																																					(BgL_resz00_1715,
																																					BgL_tmpz00_9557,
																																					((unsigned char) 191));
																																			}
																																			{	/* Llib/unicode.scm 777 */
																																				long
																																					BgL_tmpz00_9560;
																																				BgL_tmpz00_9560
																																					=
																																					(BgL_wz00_1718
																																					+
																																					((long) 2));
																																				STRING_SET
																																					(BgL_resz00_1715,
																																					BgL_tmpz00_9560,
																																					((unsigned char) 189));
																																			}
																																			{
																																				bool_t
																																					BgL_asciiz00_9567;
																																				long
																																					BgL_wz00_9565;
																																				long
																																					BgL_rz00_9563;
																																				BgL_rz00_9563
																																					=
																																					(BgL_rz00_1717
																																					+
																																					((long) 1));
																																				BgL_wz00_9565
																																					=
																																					(BgL_wz00_1718
																																					+
																																					((long) 3));
																																				BgL_asciiz00_9567
																																					=
																																					(
																																					(bool_t)
																																					0);
																																				BgL_asciiz00_1719
																																					=
																																					BgL_asciiz00_9567;
																																				BgL_wz00_1718
																																					=
																																					BgL_wz00_9565;
																																				BgL_rz00_1717
																																					=
																																					BgL_rz00_9563;
																																				goto
																																					BgL_zc3z04anonymousza31645ze3z87_1720;
																																			}
																																		}
																																}
																															else
																																{	/* Llib/unicode.scm 979 */
																																	if (
																																		(BgL_nz00_1725
																																			<=
																																			((long)
																																				253)))
																																		{	/* Llib/unicode.scm 996 */
																																			bool_t
																																				BgL_test4683z00_9570;
																																			if (
																																				(BgL_rz00_1717
																																					<
																																					(BgL_endz00_75
																																						-
																																						((long) 5))))
																																				{	/* Llib/unicode.scm 997 */
																																					bool_t
																																						BgL_test4685z00_9574;
																																					{	/* Llib/unicode.scm 770 */
																																						long
																																							BgL_nz00_5398;
																																						BgL_nz00_5398
																																							=
																																							(STRING_REF
																																							(BgL_strz00_72,
																																								(BgL_rz00_1717
																																									+
																																									((long) 1))));
																																						if (
																																							(BgL_nz00_5398
																																								>=
																																								((long) 128)))
																																							{	/* Llib/unicode.scm 771 */
																																								BgL_test4685z00_9574
																																									=
																																									(BgL_nz00_5398
																																									<=
																																									((long) 191));
																																							}
																																						else
																																							{	/* Llib/unicode.scm 771 */
																																								BgL_test4685z00_9574
																																									=
																																									(
																																									(bool_t)
																																									0);
																																							}
																																					}
																																					if (BgL_test4685z00_9574)
																																						{	/* Llib/unicode.scm 998 */
																																							bool_t
																																								BgL_test4687z00_9581;
																																							{	/* Llib/unicode.scm 770 */
																																								long
																																									BgL_nz00_5411;
																																								BgL_nz00_5411
																																									=
																																									(STRING_REF
																																									(BgL_strz00_72,
																																										(BgL_rz00_1717
																																											+
																																											((long) 2))));
																																								if ((BgL_nz00_5411 >= ((long) 128)))
																																									{	/* Llib/unicode.scm 771 */
																																										BgL_test4687z00_9581
																																											=
																																											(BgL_nz00_5411
																																											<=
																																											((long) 191));
																																									}
																																								else
																																									{	/* Llib/unicode.scm 771 */
																																										BgL_test4687z00_9581
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																							}
																																							if (BgL_test4687z00_9581)
																																								{	/* Llib/unicode.scm 999 */
																																									bool_t
																																										BgL_test4689z00_9588;
																																									{	/* Llib/unicode.scm 770 */
																																										long
																																											BgL_nz00_5424;
																																										BgL_nz00_5424
																																											=
																																											(STRING_REF
																																											(BgL_strz00_72,
																																												(BgL_rz00_1717
																																													+
																																													((long) 3))));
																																										if ((BgL_nz00_5424 >= ((long) 128)))
																																											{	/* Llib/unicode.scm 771 */
																																												BgL_test4689z00_9588
																																													=
																																													(BgL_nz00_5424
																																													<=
																																													((long) 191));
																																											}
																																										else
																																											{	/* Llib/unicode.scm 771 */
																																												BgL_test4689z00_9588
																																													=
																																													(
																																													(bool_t)
																																													0);
																																											}
																																									}
																																									if (BgL_test4689z00_9588)
																																										{	/* Llib/unicode.scm 1000 */
																																											bool_t
																																												BgL_test4691z00_9595;
																																											{	/* Llib/unicode.scm 770 */
																																												long
																																													BgL_nz00_5437;
																																												BgL_nz00_5437
																																													=
																																													(STRING_REF
																																													(BgL_strz00_72,
																																														(BgL_rz00_1717
																																															+
																																															((long) 4))));
																																												if ((BgL_nz00_5437 >= ((long) 128)))
																																													{	/* Llib/unicode.scm 771 */
																																														BgL_test4691z00_9595
																																															=
																																															(BgL_nz00_5437
																																															<=
																																															((long) 191));
																																													}
																																												else
																																													{	/* Llib/unicode.scm 771 */
																																														BgL_test4691z00_9595
																																															=
																																															(
																																															(bool_t)
																																															0);
																																													}
																																											}
																																											if (BgL_test4691z00_9595)
																																												{	/* Llib/unicode.scm 770 */
																																													long
																																														BgL_nz00_5450;
																																													BgL_nz00_5450
																																														=
																																														(STRING_REF
																																														(BgL_strz00_72,
																																															(BgL_rz00_1717
																																																+
																																																((long) 5))));
																																													if ((BgL_nz00_5450 >= ((long) 128)))
																																														{	/* Llib/unicode.scm 771 */
																																															BgL_test4683z00_9570
																																																=
																																																(BgL_nz00_5450
																																																<=
																																																((long) 191));
																																														}
																																													else
																																														{	/* Llib/unicode.scm 771 */
																																															BgL_test4683z00_9570
																																																=
																																																(
																																																(bool_t)
																																																0);
																																														}
																																												}
																																											else
																																												{	/* Llib/unicode.scm 1000 */
																																													BgL_test4683z00_9570
																																														=
																																														(
																																														(bool_t)
																																														0);
																																												}
																																										}
																																									else
																																										{	/* Llib/unicode.scm 999 */
																																											BgL_test4683z00_9570
																																												=
																																												(
																																												(bool_t)
																																												0);
																																										}
																																								}
																																							else
																																								{	/* Llib/unicode.scm 998 */
																																									BgL_test4683z00_9570
																																										=
																																										(
																																										(bool_t)
																																										0);
																																								}
																																						}
																																					else
																																						{	/* Llib/unicode.scm 997 */
																																							BgL_test4683z00_9570
																																								=
																																								(
																																								(bool_t)
																																								0);
																																						}
																																				}
																																			else
																																				{	/* Llib/unicode.scm 996 */
																																					BgL_test4683z00_9570
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																			if (BgL_test4683z00_9570)
																																				{	/* Llib/unicode.scm 996 */
																																					STRING_SET
																																						(BgL_resz00_1715,
																																						BgL_wz00_1718,
																																						BgL_cz00_1724);
																																					{	/* Llib/unicode.scm 1004 */
																																						unsigned
																																							char
																																							BgL_auxz00_9611;
																																						long
																																							BgL_tmpz00_9609;
																																						BgL_auxz00_9611
																																							=
																																							STRING_REF
																																							(BgL_strz00_72,
																																							(BgL_rz00_1717
																																								+
																																								((long) 1)));
																																						BgL_tmpz00_9609
																																							=
																																							(BgL_wz00_1718
																																							+
																																							((long) 1));
																																						STRING_SET
																																							(BgL_resz00_1715,
																																							BgL_tmpz00_9609,
																																							BgL_auxz00_9611);
																																					}
																																					{	/* Llib/unicode.scm 1005 */
																																						unsigned
																																							char
																																							BgL_auxz00_9617;
																																						long
																																							BgL_tmpz00_9615;
																																						BgL_auxz00_9617
																																							=
																																							STRING_REF
																																							(BgL_strz00_72,
																																							(BgL_rz00_1717
																																								+
																																								((long) 2)));
																																						BgL_tmpz00_9615
																																							=
																																							(BgL_wz00_1718
																																							+
																																							((long) 2));
																																						STRING_SET
																																							(BgL_resz00_1715,
																																							BgL_tmpz00_9615,
																																							BgL_auxz00_9617);
																																					}
																																					{	/* Llib/unicode.scm 1006 */
																																						unsigned
																																							char
																																							BgL_auxz00_9623;
																																						long
																																							BgL_tmpz00_9621;
																																						BgL_auxz00_9623
																																							=
																																							STRING_REF
																																							(BgL_strz00_72,
																																							(BgL_rz00_1717
																																								+
																																								((long) 3)));
																																						BgL_tmpz00_9621
																																							=
																																							(BgL_wz00_1718
																																							+
																																							((long) 3));
																																						STRING_SET
																																							(BgL_resz00_1715,
																																							BgL_tmpz00_9621,
																																							BgL_auxz00_9623);
																																					}
																																					{	/* Llib/unicode.scm 1007 */
																																						unsigned
																																							char
																																							BgL_auxz00_9629;
																																						long
																																							BgL_tmpz00_9627;
																																						BgL_auxz00_9629
																																							=
																																							STRING_REF
																																							(BgL_strz00_72,
																																							(BgL_rz00_1717
																																								+
																																								((long) 4)));
																																						BgL_tmpz00_9627
																																							=
																																							(BgL_wz00_1718
																																							+
																																							((long) 4));
																																						STRING_SET
																																							(BgL_resz00_1715,
																																							BgL_tmpz00_9627,
																																							BgL_auxz00_9629);
																																					}
																																					{	/* Llib/unicode.scm 1008 */
																																						unsigned
																																							char
																																							BgL_auxz00_9635;
																																						long
																																							BgL_tmpz00_9633;
																																						BgL_auxz00_9635
																																							=
																																							STRING_REF
																																							(BgL_strz00_72,
																																							(BgL_rz00_1717
																																								+
																																								((long) 5)));
																																						BgL_tmpz00_9633
																																							=
																																							(BgL_wz00_1718
																																							+
																																							((long) 5));
																																						STRING_SET
																																							(BgL_resz00_1715,
																																							BgL_tmpz00_9633,
																																							BgL_auxz00_9635);
																																					}
																																					{
																																						bool_t
																																							BgL_asciiz00_9643;
																																						long
																																							BgL_wz00_9641;
																																						long
																																							BgL_rz00_9639;
																																						BgL_rz00_9639
																																							=
																																							(BgL_rz00_1717
																																							+
																																							((long) 6));
																																						BgL_wz00_9641
																																							=
																																							(BgL_wz00_1718
																																							+
																																							((long) 6));
																																						BgL_asciiz00_9643
																																							=
																																							(
																																							(bool_t)
																																							0);
																																						BgL_asciiz00_1719
																																							=
																																							BgL_asciiz00_9643;
																																						BgL_wz00_1718
																																							=
																																							BgL_wz00_9641;
																																						BgL_rz00_1717
																																							=
																																							BgL_rz00_9639;
																																						goto
																																							BgL_zc3z04anonymousza31645ze3z87_1720;
																																					}
																																				}
																																			else
																																				{	/* Llib/unicode.scm 996 */
																																					STRING_SET
																																						(BgL_resz00_1715,
																																						BgL_wz00_1718,
																																						((unsigned char) 239));
																																					{	/* Llib/unicode.scm 776 */
																																						long
																																							BgL_tmpz00_9645;
																																						BgL_tmpz00_9645
																																							=
																																							(BgL_wz00_1718
																																							+
																																							((long) 1));
																																						STRING_SET
																																							(BgL_resz00_1715,
																																							BgL_tmpz00_9645,
																																							((unsigned char) 191));
																																					}
																																					{	/* Llib/unicode.scm 777 */
																																						long
																																							BgL_tmpz00_9648;
																																						BgL_tmpz00_9648
																																							=
																																							(BgL_wz00_1718
																																							+
																																							((long) 2));
																																						STRING_SET
																																							(BgL_resz00_1715,
																																							BgL_tmpz00_9648,
																																							((unsigned char) 189));
																																					}
																																					{
																																						bool_t
																																							BgL_asciiz00_9655;
																																						long
																																							BgL_wz00_9653;
																																						long
																																							BgL_rz00_9651;
																																						BgL_rz00_9651
																																							=
																																							(BgL_rz00_1717
																																							+
																																							((long) 1));
																																						BgL_wz00_9653
																																							=
																																							(BgL_wz00_1718
																																							+
																																							((long) 3));
																																						BgL_asciiz00_9655
																																							=
																																							(
																																							(bool_t)
																																							0);
																																						BgL_asciiz00_1719
																																							=
																																							BgL_asciiz00_9655;
																																						BgL_wz00_1718
																																							=
																																							BgL_wz00_9653;
																																						BgL_rz00_1717
																																							=
																																							BgL_rz00_9651;
																																						goto
																																							BgL_zc3z04anonymousza31645ze3z87_1720;
																																					}
																																				}
																																		}
																																	else
																																		{	/* Llib/unicode.scm 995 */
																																			STRING_SET
																																				(BgL_resz00_1715,
																																				BgL_wz00_1718,
																																				((unsigned char) 239));
																																			{	/* Llib/unicode.scm 776 */
																																				long
																																					BgL_tmpz00_9657;
																																				BgL_tmpz00_9657
																																					=
																																					(BgL_wz00_1718
																																					+
																																					((long) 1));
																																				STRING_SET
																																					(BgL_resz00_1715,
																																					BgL_tmpz00_9657,
																																					((unsigned char) 191));
																																			}
																																			{	/* Llib/unicode.scm 777 */
																																				long
																																					BgL_tmpz00_9660;
																																				BgL_tmpz00_9660
																																					=
																																					(BgL_wz00_1718
																																					+
																																					((long) 2));
																																				STRING_SET
																																					(BgL_resz00_1715,
																																					BgL_tmpz00_9660,
																																					((unsigned char) 189));
																																			}
																																			{
																																				bool_t
																																					BgL_asciiz00_9667;
																																				long
																																					BgL_wz00_9665;
																																				long
																																					BgL_rz00_9663;
																																				BgL_rz00_9663
																																					=
																																					(BgL_rz00_1717
																																					+
																																					((long) 1));
																																				BgL_wz00_9665
																																					=
																																					(BgL_wz00_1718
																																					+
																																					((long) 3));
																																				BgL_asciiz00_9667
																																					=
																																					(
																																					(bool_t)
																																					0);
																																				BgL_asciiz00_1719
																																					=
																																					BgL_asciiz00_9667;
																																				BgL_wz00_1718
																																					=
																																					BgL_wz00_9665;
																																				BgL_rz00_1717
																																					=
																																					BgL_rz00_9663;
																																				goto
																																					BgL_zc3z04anonymousza31645ze3z87_1720;
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
							}
						}
					}
			}
		}

	}



/* utf8-char-size */
	BGL_EXPORTED_DEF long BGl_utf8zd2charzd2siza7eza7zz__unicodez00(unsigned char
		BgL_cz00_78)
	{
		{	/* Llib/unicode.scm 1039 */
			{	/* Llib/unicode.scm 1041 */
				long BgL_arg2115z00_7305;

				BgL_arg2115z00_7305 =
					(((unsigned char) (BgL_cz00_78)) >> (int) (((long) 4)));
				{	/* Llib/unicode.scm 1040 */
					obj_t BgL_vectorz00_7306;

					BgL_vectorz00_7306 = BGl_vector4198z00zz__unicodez00;
					return
						(long) CINT(VECTOR_REF(BgL_vectorz00_7306, BgL_arg2115z00_7305));
		}}}

	}



/* &utf8-char-size */
	obj_t BGl_z62utf8zd2charzd2siza7ezc5zz__unicodez00(obj_t BgL_envz00_7006,
		obj_t BgL_cz00_7007)
	{
		{	/* Llib/unicode.scm 1039 */
			{	/* Llib/unicode.scm 1041 */
				long BgL_tmpz00_9674;

				{	/* Llib/unicode.scm 1041 */
					unsigned char BgL_auxz00_9675;

					{	/* Llib/unicode.scm 1041 */
						obj_t BgL_tmpz00_9676;

						if (CHARP(BgL_cz00_7007))
							{	/* Llib/unicode.scm 1041 */
								BgL_tmpz00_9676 = BgL_cz00_7007;
							}
						else
							{
								obj_t BgL_auxz00_9679;

								BgL_auxz00_9679 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4145z00zz__unicodez00, BINT(((long) 42099)),
									BGl_string4200z00zz__unicodez00,
									BGl_string4201z00zz__unicodez00, BgL_cz00_7007);
								FAILURE(BgL_auxz00_9679, BFALSE, BFALSE);
							}
						BgL_auxz00_9675 = CCHAR(BgL_tmpz00_9676);
					}
					BgL_tmpz00_9674 =
						BGl_utf8zd2charzd2siza7eza7zz__unicodez00(BgL_auxz00_9675);
				}
				return BINT(BgL_tmpz00_9674);
			}
		}

	}



/* utf8-string-length */
	BGL_EXPORTED_DEF long BGl_utf8zd2stringzd2lengthz00zz__unicodez00(obj_t
		BgL_strz00_79)
	{
		{	/* Llib/unicode.scm 1048 */
			{	/* Llib/unicode.scm 1049 */
				long BgL_lenz00_2203;

				BgL_lenz00_2203 = STRING_LENGTH(BgL_strz00_79);
				{
					long BgL_rz00_5616;
					long BgL_lz00_5617;

					BgL_rz00_5616 = ((long) 0);
					BgL_lz00_5617 = ((long) 0);
				BgL_loopz00_5615:
					if ((BgL_rz00_5616 == BgL_lenz00_2203))
						{	/* Llib/unicode.scm 1052 */
							return BgL_lz00_5617;
						}
					else
						{	/* Llib/unicode.scm 1054 */
							long BgL_arg2119z00_5624;
							long BgL_arg2120z00_5625;

							{	/* Llib/unicode.scm 1054 */
								long BgL_arg2121z00_5626;

								{	/* Llib/unicode.scm 1054 */
									unsigned char BgL_arg2122z00_5627;

									BgL_arg2122z00_5627 =
										STRING_REF(BgL_strz00_79, BgL_rz00_5616);
									{	/* Llib/unicode.scm 1054 */
										long BgL_res3510z00_5643;

										{	/* Llib/unicode.scm 1054 */
											unsigned char BgL_cz00_5634;

											BgL_cz00_5634 = (char) (BgL_arg2122z00_5627);
											{	/* Llib/unicode.scm 1041 */
												long BgL_arg2115z00_5635;

												BgL_arg2115z00_5635 =
													(
													((unsigned char) (BgL_cz00_5634)) >>
													(int) (((long) 4)));
												{	/* Llib/unicode.scm 1040 */
													obj_t BgL_vectorz00_5641;

													BgL_vectorz00_5641 = BGl_vector4198z00zz__unicodez00;
													BgL_res3510z00_5643 =
														(long) CINT(VECTOR_REF(BgL_vectorz00_5641,
															BgL_arg2115z00_5635));
										}}}
										BgL_arg2121z00_5626 = BgL_res3510z00_5643;
								}}
								BgL_arg2119z00_5624 = (BgL_rz00_5616 + BgL_arg2121z00_5626);
							}
							BgL_arg2120z00_5625 = (BgL_lz00_5617 + ((long) 1));
							{
								long BgL_lz00_9700;
								long BgL_rz00_9699;

								BgL_rz00_9699 = BgL_arg2119z00_5624;
								BgL_lz00_9700 = BgL_arg2120z00_5625;
								BgL_lz00_5617 = BgL_lz00_9700;
								BgL_rz00_5616 = BgL_rz00_9699;
								goto BgL_loopz00_5615;
							}
						}
				}
			}
		}

	}



/* &utf8-string-length */
	obj_t BGl_z62utf8zd2stringzd2lengthz62zz__unicodez00(obj_t BgL_envz00_7008,
		obj_t BgL_strz00_7009)
	{
		{	/* Llib/unicode.scm 1048 */
			{	/* Llib/unicode.scm 1049 */
				long BgL_tmpz00_9701;

				{	/* Llib/unicode.scm 1049 */
					obj_t BgL_auxz00_9702;

					if (STRINGP(BgL_strz00_7009))
						{	/* Llib/unicode.scm 1049 */
							BgL_auxz00_9702 = BgL_strz00_7009;
						}
					else
						{
							obj_t BgL_auxz00_9705;

							BgL_auxz00_9705 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 42529)), BGl_string4202z00zz__unicodez00,
								BGl_string4188z00zz__unicodez00, BgL_strz00_7009);
							FAILURE(BgL_auxz00_9705, BFALSE, BFALSE);
						}
					BgL_tmpz00_9701 =
						BGl_utf8zd2stringzd2lengthz00zz__unicodez00(BgL_auxz00_9702);
				}
				return BINT(BgL_tmpz00_9701);
			}
		}

	}



/* utf8-string-ref */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2stringzd2refz00zz__unicodez00(obj_t
		BgL_strz00_80, long BgL_iz00_81)
	{
		{	/* Llib/unicode.scm 1059 */
			{
				long BgL_rz00_5679;
				long BgL_iz00_5680;

				BgL_rz00_5679 = ((long) 0);
				BgL_iz00_5680 = BgL_iz00_81;
			BgL_loopz00_5678:
				{	/* Llib/unicode.scm 1062 */
					unsigned char BgL_cz00_5681;

					BgL_cz00_5681 = STRING_REF(BgL_strz00_80, BgL_rz00_5679);
					{	/* Llib/unicode.scm 1062 */
						long BgL_sz00_5685;

						{	/* Llib/unicode.scm 1063 */
							long BgL_res3517z00_5686;

							{	/* Llib/unicode.scm 1063 */
								unsigned char BgL_cz00_5687;

								BgL_cz00_5687 = (char) (BgL_cz00_5681);
								{	/* Llib/unicode.scm 1041 */
									long BgL_arg2115z00_5688;

									BgL_arg2115z00_5688 =
										(((unsigned char) (BgL_cz00_5687)) >> (int) (((long) 4)));
									{	/* Llib/unicode.scm 1040 */
										obj_t BgL_vectorz00_5694;

										BgL_vectorz00_5694 = BGl_vector4198z00zz__unicodez00;
										BgL_res3517z00_5686 =
											(long) CINT(VECTOR_REF(BgL_vectorz00_5694,
												BgL_arg2115z00_5688));
							}}}
							BgL_sz00_5685 = BgL_res3517z00_5686;
						}
						{	/* Llib/unicode.scm 1063 */

							if ((BgL_iz00_5680 == ((long) 0)))
								{	/* Llib/unicode.scm 1064 */
									return
										c_substring(BgL_strz00_80, BgL_rz00_5679,
										(BgL_rz00_5679 + BgL_sz00_5685));
								}
							else
								{
									long BgL_iz00_9725;
									long BgL_rz00_9723;

									BgL_rz00_9723 = (BgL_rz00_5679 + BgL_sz00_5685);
									BgL_iz00_9725 = (BgL_iz00_5680 - ((long) 1));
									BgL_iz00_5680 = BgL_iz00_9725;
									BgL_rz00_5679 = BgL_rz00_9723;
									goto BgL_loopz00_5678;
								}
						}
					}
				}
			}
		}

	}



/* &utf8-string-ref */
	obj_t BGl_z62utf8zd2stringzd2refz62zz__unicodez00(obj_t BgL_envz00_7010,
		obj_t BgL_strz00_7011, obj_t BgL_iz00_7012)
	{
		{	/* Llib/unicode.scm 1059 */
			{	/* Llib/unicode.scm 1061 */
				long BgL_auxz00_9734;
				obj_t BgL_auxz00_9727;

				{	/* Llib/unicode.scm 1061 */
					obj_t BgL_tmpz00_9735;

					if (INTEGERP(BgL_iz00_7012))
						{	/* Llib/unicode.scm 1061 */
							BgL_tmpz00_9735 = BgL_iz00_7012;
						}
					else
						{
							obj_t BgL_auxz00_9738;

							BgL_auxz00_9738 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 42989)), BGl_string4203z00zz__unicodez00,
								BGl_string4147z00zz__unicodez00, BgL_iz00_7012);
							FAILURE(BgL_auxz00_9738, BFALSE, BFALSE);
						}
					BgL_auxz00_9734 = (long) CINT(BgL_tmpz00_9735);
				}
				if (STRINGP(BgL_strz00_7011))
					{	/* Llib/unicode.scm 1061 */
						BgL_auxz00_9727 = BgL_strz00_7011;
					}
				else
					{
						obj_t BgL_auxz00_9730;

						BgL_auxz00_9730 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 42989)), BGl_string4203z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_strz00_7011);
						FAILURE(BgL_auxz00_9730, BFALSE, BFALSE);
					}
				return
					BGl_utf8zd2stringzd2refz00zz__unicodez00(BgL_auxz00_9727,
					BgL_auxz00_9734);
			}
		}

	}



/* utf8-string-index->string-index */
	BGL_EXPORTED_DEF long
		BGl_utf8zd2stringzd2indexzd2ze3stringzd2indexze3zz__unicodez00(obj_t
		BgL_strz00_82, long BgL_iz00_83)
	{
		{	/* Llib/unicode.scm 1071 */
			if ((BgL_iz00_83 < ((long) 0)))
				{	/* Llib/unicode.scm 1073 */
					return ((long) -1);
				}
			else
				{	/* Llib/unicode.scm 1076 */
					long BgL_lenz00_2227;

					BgL_lenz00_2227 = STRING_LENGTH(BgL_strz00_82);
					{
						long BgL_rz00_5742;
						long BgL_iz00_5743;

						BgL_rz00_5742 = ((long) 0);
						BgL_iz00_5743 = BgL_iz00_83;
					BgL_loopz00_5741:
						if ((BgL_iz00_5743 == ((long) 0)))
							{	/* Llib/unicode.scm 1079 */
								return BgL_rz00_5742;
							}
						else
							{	/* Llib/unicode.scm 1079 */
								if ((BgL_rz00_5742 < BgL_lenz00_2227))
									{	/* Llib/unicode.scm 1083 */
										long BgL_arg2132z00_5755;
										long BgL_arg2133z00_5756;

										{	/* Llib/unicode.scm 1083 */
											long BgL_arg2134z00_5757;

											{	/* Llib/unicode.scm 1083 */
												long BgL_res3530z00_5758;

												{	/* Llib/unicode.scm 1083 */
													unsigned char BgL_cz00_5759;

													BgL_cz00_5759 =
														(char) (STRING_REF(BgL_strz00_82, BgL_rz00_5742));
													{	/* Llib/unicode.scm 1041 */
														long BgL_arg2115z00_5760;

														BgL_arg2115z00_5760 =
															(
															((unsigned char) (BgL_cz00_5759)) >>
															(int) (((long) 4)));
														{	/* Llib/unicode.scm 1040 */
															obj_t BgL_vectorz00_5766;

															BgL_vectorz00_5766 =
																BGl_vector4198z00zz__unicodez00;
															BgL_res3530z00_5758 =
																(long) CINT(VECTOR_REF(BgL_vectorz00_5766,
																	BgL_arg2115z00_5760));
												}}}
												BgL_arg2134z00_5757 = BgL_res3530z00_5758;
											}
											BgL_arg2132z00_5755 =
												(BgL_rz00_5742 + BgL_arg2134z00_5757);
										}
										BgL_arg2133z00_5756 = (BgL_iz00_5743 - ((long) 1));
										{
											long BgL_iz00_9762;
											long BgL_rz00_9761;

											BgL_rz00_9761 = BgL_arg2132z00_5755;
											BgL_iz00_9762 = BgL_arg2133z00_5756;
											BgL_iz00_5743 = BgL_iz00_9762;
											BgL_rz00_5742 = BgL_rz00_9761;
											goto BgL_loopz00_5741;
										}
									}
								else
									{	/* Llib/unicode.scm 1081 */
										return ((long) -1);
		}}}}}

	}



/* &utf8-string-index->string-index */
	obj_t BGl_z62utf8zd2stringzd2indexzd2ze3stringzd2indexz81zz__unicodez00(obj_t
		BgL_envz00_7013, obj_t BgL_strz00_7014, obj_t BgL_iz00_7015)
	{
		{	/* Llib/unicode.scm 1071 */
			{	/* Llib/unicode.scm 1073 */
				long BgL_tmpz00_9763;

				{	/* Llib/unicode.scm 1073 */
					long BgL_auxz00_9771;
					obj_t BgL_auxz00_9764;

					{	/* Llib/unicode.scm 1073 */
						obj_t BgL_tmpz00_9772;

						if (INTEGERP(BgL_iz00_7015))
							{	/* Llib/unicode.scm 1073 */
								BgL_tmpz00_9772 = BgL_iz00_7015;
							}
						else
							{
								obj_t BgL_auxz00_9775;

								BgL_auxz00_9775 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4145z00zz__unicodez00, BINT(((long) 43440)),
									BGl_string4204z00zz__unicodez00,
									BGl_string4147z00zz__unicodez00, BgL_iz00_7015);
								FAILURE(BgL_auxz00_9775, BFALSE, BFALSE);
							}
						BgL_auxz00_9771 = (long) CINT(BgL_tmpz00_9772);
					}
					if (STRINGP(BgL_strz00_7014))
						{	/* Llib/unicode.scm 1073 */
							BgL_auxz00_9764 = BgL_strz00_7014;
						}
					else
						{
							obj_t BgL_auxz00_9767;

							BgL_auxz00_9767 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 43440)), BGl_string4204z00zz__unicodez00,
								BGl_string4188z00zz__unicodez00, BgL_strz00_7014);
							FAILURE(BgL_auxz00_9767, BFALSE, BFALSE);
						}
					BgL_tmpz00_9763 =
						BGl_utf8zd2stringzd2indexzd2ze3stringzd2indexze3zz__unicodez00
						(BgL_auxz00_9764, BgL_auxz00_9771);
				}
				return BINT(BgL_tmpz00_9763);
			}
		}

	}



/* string-index->utf8-string-index */
	BGL_EXPORTED_DEF long
		BGl_stringzd2indexzd2ze3utf8zd2stringzd2indexze3zz__unicodez00(obj_t
		BgL_strz00_84, long BgL_iz00_85)
	{
		{	/* Llib/unicode.scm 1090 */
			if ((BgL_iz00_85 < ((long) 0)))
				{	/* Llib/unicode.scm 1092 */
					return ((long) -1);
				}
			else
				{	/* Llib/unicode.scm 1095 */
					long BgL_lenz00_2240;

					BgL_lenz00_2240 = STRING_LENGTH(BgL_strz00_84);
					{
						long BgL_mz00_5801;
						long BgL_iz00_5802;

						BgL_mz00_5801 = ((long) 0);
						BgL_iz00_5802 = BgL_iz00_85;
					BgL_loopz00_5800:
						if ((BgL_iz00_5802 <= ((long) 0)))
							{	/* Llib/unicode.scm 1099 */
								return BgL_mz00_5801;
							}
						else
							{	/* Llib/unicode.scm 1099 */
								if ((BgL_mz00_5801 >= BgL_lenz00_2240))
									{	/* Llib/unicode.scm 1101 */
										return ((long) -1);
									}
								else
									{	/* Llib/unicode.scm 1104 */
										long BgL_sz00_5814;

										{	/* Llib/unicode.scm 1105 */
											long BgL_res3540z00_5815;

											{	/* Llib/unicode.scm 1105 */
												unsigned char BgL_cz00_5816;

												BgL_cz00_5816 =
													(char) (STRING_REF(BgL_strz00_84, BgL_mz00_5801));
												{	/* Llib/unicode.scm 1041 */
													long BgL_arg2115z00_5817;

													BgL_arg2115z00_5817 =
														(
														((unsigned char) (BgL_cz00_5816)) >>
														(int) (((long) 4)));
													{	/* Llib/unicode.scm 1040 */
														obj_t BgL_vectorz00_5823;

														BgL_vectorz00_5823 =
															BGl_vector4198z00zz__unicodez00;
														BgL_res3540z00_5815 =
															(long) CINT(VECTOR_REF(BgL_vectorz00_5823,
																BgL_arg2115z00_5817));
											}}}
											BgL_sz00_5814 = BgL_res3540z00_5815;
										}
										{	/* Llib/unicode.scm 1105 */

											{
												long BgL_iz00_9799;
												long BgL_mz00_9797;

												BgL_mz00_9797 = (BgL_mz00_5801 + ((long) 1));
												BgL_iz00_9799 = (BgL_iz00_5802 - BgL_sz00_5814);
												BgL_iz00_5802 = BgL_iz00_9799;
												BgL_mz00_5801 = BgL_mz00_9797;
												goto BgL_loopz00_5800;
											}
										}
									}
							}
					}
				}
		}

	}



/* &string-index->utf8-string-index */
	obj_t BGl_z62stringzd2indexzd2ze3utf8zd2stringzd2indexz81zz__unicodez00(obj_t
		BgL_envz00_7016, obj_t BgL_strz00_7017, obj_t BgL_iz00_7018)
	{
		{	/* Llib/unicode.scm 1090 */
			{	/* Llib/unicode.scm 1092 */
				long BgL_tmpz00_9801;

				{	/* Llib/unicode.scm 1092 */
					long BgL_auxz00_9809;
					obj_t BgL_auxz00_9802;

					{	/* Llib/unicode.scm 1092 */
						obj_t BgL_tmpz00_9810;

						if (INTEGERP(BgL_iz00_7018))
							{	/* Llib/unicode.scm 1092 */
								BgL_tmpz00_9810 = BgL_iz00_7018;
							}
						else
							{
								obj_t BgL_auxz00_9813;

								BgL_auxz00_9813 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4145z00zz__unicodez00, BINT(((long) 43979)),
									BGl_string4205z00zz__unicodez00,
									BGl_string4147z00zz__unicodez00, BgL_iz00_7018);
								FAILURE(BgL_auxz00_9813, BFALSE, BFALSE);
							}
						BgL_auxz00_9809 = (long) CINT(BgL_tmpz00_9810);
					}
					if (STRINGP(BgL_strz00_7017))
						{	/* Llib/unicode.scm 1092 */
							BgL_auxz00_9802 = BgL_strz00_7017;
						}
					else
						{
							obj_t BgL_auxz00_9805;

							BgL_auxz00_9805 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
								BINT(((long) 43979)), BGl_string4205z00zz__unicodez00,
								BGl_string4188z00zz__unicodez00, BgL_strz00_7017);
							FAILURE(BgL_auxz00_9805, BFALSE, BFALSE);
						}
					BgL_tmpz00_9801 =
						BGl_stringzd2indexzd2ze3utf8zd2stringzd2indexze3zz__unicodez00
						(BgL_auxz00_9802, BgL_auxz00_9809);
				}
				return BINT(BgL_tmpz00_9801);
			}
		}

	}



/* utf8-collapse! */
	obj_t BGl_utf8zd2collapsez12zc0zz__unicodez00(obj_t BgL_bufferz00_92,
		long BgL_indexbz00_93, obj_t BgL_strz00_94, obj_t BgL_indexsz00_95)
	{
		{	/* Llib/unicode.scm 1131 */
			{	/* Llib/unicode.scm 1133 */
				long BgL_cl1z00_2260;

				BgL_cl1z00_2260 =
					(STRING_REF(BgL_bufferz00_92, (BgL_indexbz00_93 - ((long) 4))));
				{	/* Llib/unicode.scm 1133 */
					long BgL_cl2z00_2261;

					BgL_cl2z00_2261 =
						(STRING_REF(BgL_bufferz00_92, (BgL_indexbz00_93 - ((long) 3))));
					{	/* Llib/unicode.scm 1134 */
						long BgL_cl3z00_2262;

						BgL_cl3z00_2262 =
							(STRING_REF(BgL_bufferz00_92, (BgL_indexbz00_93 - ((long) 2))));
						{	/* Llib/unicode.scm 1135 */
							long BgL_cl4z00_2263;

							BgL_cl4z00_2263 =
								(STRING_REF(BgL_bufferz00_92, (BgL_indexbz00_93 - ((long) 1))));
							{	/* Llib/unicode.scm 1137 */
								long BgL_cr3z00_2265;

								BgL_cr3z00_2265 =
									(STRING_REF(BgL_strz00_94,
										((long) CINT(BgL_indexsz00_95) + ((long) 2))));
								{	/* Llib/unicode.scm 1138 */
									long BgL_cr4z00_2266;

									BgL_cr4z00_2266 =
										(STRING_REF(BgL_strz00_94,
											((long) CINT(BgL_indexsz00_95) + ((long) 3))));
									{	/* Llib/unicode.scm 1140 */
										long BgL_yyyyz00_2268;

										BgL_yyyyz00_2268 = (((long) 15) & BgL_cr3z00_2265);
										{	/* Llib/unicode.scm 1141 */
											long BgL_xxz00_2269;

											BgL_xxz00_2269 =
												((BgL_cl3z00_2262 >> (int) (((long) 4))) & ((long) 3));
											{	/* Llib/unicode.scm 1143 */
												long BgL_uuuuuz00_2271;

												BgL_uuuuuz00_2271 =
													(
													((BgL_cl4z00_2263 & ((long) 7)) <<
														(int) (((long) 2))) |
													((BgL_cl2z00_2261 >>
															(int) (((long) 4))) & ((long) 3)));
												{	/* Llib/unicode.scm 1144 */

													{	/* Llib/unicode.scm 1148 */
														unsigned char BgL_auxz00_9853;
														long BgL_tmpz00_9851;

														BgL_auxz00_9853 =
															(
															((BgL_cl1z00_2260 & ((long) 240)) |
																(BgL_uuuuuz00_2271 >> (int) (((long) 2)))));
														BgL_tmpz00_9851 = (BgL_indexbz00_93 - ((long) 4));
														STRING_SET(BgL_bufferz00_92, BgL_tmpz00_9851,
															BgL_auxz00_9853);
													}
													{	/* Llib/unicode.scm 1154 */
														unsigned char BgL_auxz00_9862;
														long BgL_tmpz00_9860;

														BgL_auxz00_9862 = (BgL_cl2z00_2261);
														BgL_tmpz00_9860 = (BgL_indexbz00_93 - ((long) 3));
														STRING_SET(BgL_bufferz00_92, BgL_tmpz00_9860,
															BgL_auxz00_9862);
													}
													{	/* Llib/unicode.scm 1157 */
														unsigned char BgL_auxz00_9867;
														long BgL_tmpz00_9865;

														BgL_auxz00_9867 =
															(
															(((long) 128) |
																((BgL_xxz00_2269 <<
																		(int) (((long) 4))) | BgL_yyyyz00_2268)));
														BgL_tmpz00_9865 = (BgL_indexbz00_93 - ((long) 2));
														STRING_SET(BgL_bufferz00_92, BgL_tmpz00_9865,
															BgL_auxz00_9867);
													}
													{	/* Llib/unicode.scm 1162 */
														unsigned char BgL_auxz00_9876;
														long BgL_tmpz00_9874;

														BgL_auxz00_9876 = (BgL_cr4z00_2266);
														BgL_tmpz00_9874 = (BgL_indexbz00_93 - ((long) 1));
														return
															STRING_SET(BgL_bufferz00_92, BgL_tmpz00_9874,
															BgL_auxz00_9876);
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



/* _utf8-string-append-fill! */
	obj_t BGl__utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00(obj_t
		BgL_env1131z00_101, obj_t BgL_opt1130z00_100)
	{
		{	/* Llib/unicode.scm 1174 */
			{	/* Llib/unicode.scm 1174 */
				obj_t BgL_g1132z00_2305;
				obj_t BgL_g1133z00_2306;
				obj_t BgL_g1134z00_2307;

				BgL_g1132z00_2305 = VECTOR_REF(BgL_opt1130z00_100, ((long) 0));
				BgL_g1133z00_2306 = VECTOR_REF(BgL_opt1130z00_100, ((long) 1));
				BgL_g1134z00_2307 = VECTOR_REF(BgL_opt1130z00_100, ((long) 2));
				switch (VECTOR_LENGTH(BgL_opt1130z00_100))
					{
					case ((long) 3):

						{	/* Llib/unicode.scm 1174 */

							{	/* Llib/unicode.scm 1174 */
								long BgL_tmpz00_9882;

								{	/* Llib/unicode.scm 1174 */
									obj_t BgL_auxz00_9899;
									long BgL_auxz00_9890;
									obj_t BgL_auxz00_9883;

									if (STRINGP(BgL_g1134z00_2307))
										{	/* Llib/unicode.scm 1174 */
											BgL_auxz00_9899 = BgL_g1134z00_2307;
										}
									else
										{
											obj_t BgL_auxz00_9902;

											BgL_auxz00_9902 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4145z00zz__unicodez00, BINT(((long) 47528)),
												BGl_string4206z00zz__unicodez00,
												BGl_string4188z00zz__unicodez00, BgL_g1134z00_2307);
											FAILURE(BgL_auxz00_9902, BFALSE, BFALSE);
										}
									{	/* Llib/unicode.scm 1174 */
										obj_t BgL_tmpz00_9891;

										if (INTEGERP(BgL_g1133z00_2306))
											{	/* Llib/unicode.scm 1174 */
												BgL_tmpz00_9891 = BgL_g1133z00_2306;
											}
										else
											{
												obj_t BgL_auxz00_9894;

												BgL_auxz00_9894 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4145z00zz__unicodez00,
													BINT(((long) 47528)), BGl_string4206z00zz__unicodez00,
													BGl_string4147z00zz__unicodez00, BgL_g1133z00_2306);
												FAILURE(BgL_auxz00_9894, BFALSE, BFALSE);
											}
										BgL_auxz00_9890 = (long) CINT(BgL_tmpz00_9891);
									}
									if (STRINGP(BgL_g1132z00_2305))
										{	/* Llib/unicode.scm 1174 */
											BgL_auxz00_9883 = BgL_g1132z00_2305;
										}
									else
										{
											obj_t BgL_auxz00_9886;

											BgL_auxz00_9886 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4145z00zz__unicodez00, BINT(((long) 47528)),
												BGl_string4206z00zz__unicodez00,
												BGl_string4188z00zz__unicodez00, BgL_g1132z00_2305);
											FAILURE(BgL_auxz00_9886, BFALSE, BFALSE);
										}
									BgL_tmpz00_9882 =
										BGl_utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00
										(BgL_auxz00_9883, BgL_auxz00_9890, BgL_auxz00_9899,
										BINT(((long) 0)));
								}
								return BINT(BgL_tmpz00_9882);
							}
						}
						break;
					case ((long) 4):

						{	/* Llib/unicode.scm 1174 */
							obj_t BgL_offsetz00_2312;

							BgL_offsetz00_2312 = VECTOR_REF(BgL_opt1130z00_100, ((long) 3));
							{	/* Llib/unicode.scm 1174 */

								{	/* Llib/unicode.scm 1174 */
									long BgL_tmpz00_9910;

									{	/* Llib/unicode.scm 1174 */
										obj_t BgL_auxz00_9927;
										long BgL_auxz00_9918;
										obj_t BgL_auxz00_9911;

										if (STRINGP(BgL_g1134z00_2307))
											{	/* Llib/unicode.scm 1174 */
												BgL_auxz00_9927 = BgL_g1134z00_2307;
											}
										else
											{
												obj_t BgL_auxz00_9930;

												BgL_auxz00_9930 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4145z00zz__unicodez00,
													BINT(((long) 47528)), BGl_string4206z00zz__unicodez00,
													BGl_string4188z00zz__unicodez00, BgL_g1134z00_2307);
												FAILURE(BgL_auxz00_9930, BFALSE, BFALSE);
											}
										{	/* Llib/unicode.scm 1174 */
											obj_t BgL_tmpz00_9919;

											if (INTEGERP(BgL_g1133z00_2306))
												{	/* Llib/unicode.scm 1174 */
													BgL_tmpz00_9919 = BgL_g1133z00_2306;
												}
											else
												{
													obj_t BgL_auxz00_9922;

													BgL_auxz00_9922 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string4145z00zz__unicodez00,
														BINT(((long) 47528)),
														BGl_string4206z00zz__unicodez00,
														BGl_string4147z00zz__unicodez00, BgL_g1133z00_2306);
													FAILURE(BgL_auxz00_9922, BFALSE, BFALSE);
												}
											BgL_auxz00_9918 = (long) CINT(BgL_tmpz00_9919);
										}
										if (STRINGP(BgL_g1132z00_2305))
											{	/* Llib/unicode.scm 1174 */
												BgL_auxz00_9911 = BgL_g1132z00_2305;
											}
										else
											{
												obj_t BgL_auxz00_9914;

												BgL_auxz00_9914 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4145z00zz__unicodez00,
													BINT(((long) 47528)), BGl_string4206z00zz__unicodez00,
													BGl_string4188z00zz__unicodez00, BgL_g1132z00_2305);
												FAILURE(BgL_auxz00_9914, BFALSE, BFALSE);
											}
										BgL_tmpz00_9910 =
											BGl_utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00
											(BgL_auxz00_9911, BgL_auxz00_9918, BgL_auxz00_9927,
											BgL_offsetz00_2312);
									}
									return BINT(BgL_tmpz00_9910);
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



/* utf8-string-append-fill! */
	BGL_EXPORTED_DEF long
		BGl_utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00(obj_t
		BgL_bufferz00_96, long BgL_indexz00_97, obj_t BgL_strz00_98,
		obj_t BgL_offsetz00_99)
	{
		{	/* Llib/unicode.scm 1174 */
			{	/* Llib/unicode.scm 1175 */
				long BgL_lenz00_2313;

				BgL_lenz00_2313 = STRING_LENGTH(BgL_strz00_98);
				{	/* Llib/unicode.scm 1177 */
					bool_t BgL_test4716z00_9939;

					if ((BgL_indexz00_97 >= ((long) 4)))
						{	/* Llib/unicode.scm 1178 */
							bool_t BgL_test4718z00_9942;

							if (
								(BgL_lenz00_2313 >=
									((long) CINT(BgL_offsetz00_99) + ((long) 4))))
								{	/* Llib/unicode.scm 1125 */
									BgL_test4718z00_9942 =
										(
										(STRING_REF(BgL_strz00_98,
												(long) CINT(BgL_offsetz00_99))) == ((long) 252));
								}
							else
								{	/* Llib/unicode.scm 1125 */
									BgL_test4718z00_9942 = ((bool_t) 0);
								}
							if (BgL_test4718z00_9942)
								{	/* Llib/unicode.scm 1179 */
									long BgL_arg2192z00_2324;

									BgL_arg2192z00_2324 = (BgL_indexz00_97 - ((long) 4));
									if ((BgL_indexz00_97 >= (BgL_arg2192z00_2324 + ((long) 4))))
										{	/* Llib/unicode.scm 1115 */
											BgL_test4716z00_9939 =
												(
												(STRING_REF(BgL_bufferz00_96,
														BgL_arg2192z00_2324)) == ((long) 248));
										}
									else
										{	/* Llib/unicode.scm 1115 */
											BgL_test4716z00_9939 = ((bool_t) 0);
										}
								}
							else
								{	/* Llib/unicode.scm 1178 */
									BgL_test4716z00_9939 = ((bool_t) 0);
								}
						}
					else
						{	/* Llib/unicode.scm 1177 */
							BgL_test4716z00_9939 = ((bool_t) 0);
						}
					if (BgL_test4716z00_9939)
						{	/* Llib/unicode.scm 1177 */
							blit_string(BgL_strz00_98, ((long) 4), BgL_bufferz00_96,
								BgL_indexz00_97, (BgL_lenz00_2313 - ((long) 4)));
							BGl_utf8zd2collapsez12zc0zz__unicodez00(BgL_bufferz00_96,
								BgL_indexz00_97, BgL_strz00_98, BgL_offsetz00_99);
							return (BgL_indexz00_97 + (BgL_lenz00_2313 - ((long) 4)));
						}
					else
						{	/* Llib/unicode.scm 1177 */
							blit_string(BgL_strz00_98,
								(long) CINT(BgL_offsetz00_99), BgL_bufferz00_96,
								BgL_indexz00_97,
								(BgL_lenz00_2313 - (long) CINT(BgL_offsetz00_99)));
							return (BgL_indexz00_97 + (BgL_lenz00_2313 -
									(long) CINT(BgL_offsetz00_99)));
		}}}}

	}



/* utf8-string-append */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2stringzd2appendz00zz__unicodez00(obj_t
		BgL_leftz00_102, obj_t BgL_rightz00_103)
	{
		{	/* Llib/unicode.scm 1196 */
			{	/* Llib/unicode.scm 1197 */
				long BgL_llenz00_2325;

				BgL_llenz00_2325 = STRING_LENGTH(BgL_leftz00_102);
				{	/* Llib/unicode.scm 1197 */
					long BgL_rlenz00_2326;

					BgL_rlenz00_2326 = STRING_LENGTH(BgL_rightz00_103);
					{	/* Llib/unicode.scm 1198 */
						obj_t BgL_bufferz00_2327;

						BgL_bufferz00_2327 =
							make_string_sans_fill((BgL_llenz00_2325 + BgL_rlenz00_2326));
						{	/* Llib/unicode.scm 1199 */

							{	/* Llib/unicode.scm 1200 */
								long BgL_nindexz00_2328;

								{	/* Llib/unicode.scm 180 */

									BgL_nindexz00_2328 =
										BGl_utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00
										(BgL_bufferz00_2327, ((long) 0), BgL_leftz00_102,
										BINT(((long) 0)));
								}
								{	/* Llib/unicode.scm 1201 */
									long BgL_nindexz00_2329;

									{	/* Llib/unicode.scm 180 */

										BgL_nindexz00_2329 =
											BGl_utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00
											(BgL_bufferz00_2327, BgL_nindexz00_2328, BgL_rightz00_103,
											BINT(((long) 0)));
									}
									return
										bgl_string_shrink(BgL_bufferz00_2327, BgL_nindexz00_2329);
								}
							}
						}
					}
				}
			}
		}

	}



/* &utf8-string-append */
	obj_t BGl_z62utf8zd2stringzd2appendz62zz__unicodez00(obj_t BgL_envz00_7019,
		obj_t BgL_leftz00_7020, obj_t BgL_rightz00_7021)
	{
		{	/* Llib/unicode.scm 1196 */
			{	/* Llib/unicode.scm 1197 */
				obj_t BgL_auxz00_9986;
				obj_t BgL_auxz00_9979;

				if (STRINGP(BgL_rightz00_7021))
					{	/* Llib/unicode.scm 1197 */
						BgL_auxz00_9986 = BgL_rightz00_7021;
					}
				else
					{
						obj_t BgL_auxz00_9989;

						BgL_auxz00_9989 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 48681)), BGl_string4207z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_rightz00_7021);
						FAILURE(BgL_auxz00_9989, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_leftz00_7020))
					{	/* Llib/unicode.scm 1197 */
						BgL_auxz00_9979 = BgL_leftz00_7020;
					}
				else
					{
						obj_t BgL_auxz00_9982;

						BgL_auxz00_9982 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 48681)), BGl_string4207z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_leftz00_7020);
						FAILURE(BgL_auxz00_9982, BFALSE, BFALSE);
					}
				return
					BGl_utf8zd2stringzd2appendz00zz__unicodez00(BgL_auxz00_9979,
					BgL_auxz00_9986);
			}
		}

	}



/* utf8-string-append* */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2stringzd2appendza2za2zz__unicodez00(obj_t
		BgL_stringsz00_104)
	{
		{	/* Llib/unicode.scm 1209 */
			{	/* Llib/unicode.scm 1210 */
				long BgL_lenz00_2339;

				BgL_lenz00_2339 = ((long) 0);
				{
					obj_t BgL_l1098z00_2341;

					BgL_l1098z00_2341 = BgL_stringsz00_104;
				BgL_zc3z04anonymousza32194ze3z87_2342:
					if (PAIRP(BgL_l1098z00_2341))
						{	/* Llib/unicode.scm 1211 */
							{	/* Llib/unicode.scm 1212 */
								obj_t BgL_strz00_2344;

								BgL_strz00_2344 = CAR(BgL_l1098z00_2341);
								{	/* Llib/unicode.scm 1212 */
									long BgL_za71za7_6052;

									BgL_za71za7_6052 = BgL_lenz00_2339;
									BgL_lenz00_2339 =
										(BgL_za71za7_6052 +
										STRING_LENGTH(((obj_t) BgL_strz00_2344)));
							}}
							{
								obj_t BgL_l1098z00_10000;

								BgL_l1098z00_10000 = CDR(BgL_l1098z00_2341);
								BgL_l1098z00_2341 = BgL_l1098z00_10000;
								goto BgL_zc3z04anonymousza32194ze3z87_2342;
							}
						}
					else
						{	/* Llib/unicode.scm 1211 */
							((bool_t) 1);
						}
				}
				{	/* Llib/unicode.scm 1214 */
					obj_t BgL_bufferz00_2348;
					long BgL_indexz00_2349;

					BgL_bufferz00_2348 = make_string_sans_fill(BgL_lenz00_2339);
					BgL_indexz00_2349 = ((long) 0);
					{
						obj_t BgL_l1100z00_2351;

						BgL_l1100z00_2351 = BgL_stringsz00_104;
					BgL_zc3z04anonymousza32198ze3z87_2352:
						if (PAIRP(BgL_l1100z00_2351))
							{	/* Llib/unicode.scm 1216 */
								{	/* Llib/unicode.scm 1217 */
									obj_t BgL_strz00_2354;

									BgL_strz00_2354 = CAR(BgL_l1100z00_2351);
									{	/* Llib/unicode.scm 1217 */
										long BgL_g1133z00_2356;

										BgL_g1133z00_2356 = BgL_indexz00_2349;
										{	/* Llib/unicode.scm 180 */

											BgL_indexz00_2349 =
												BGl_utf8zd2stringzd2appendzd2fillz12zc0zz__unicodez00
												(BgL_bufferz00_2348, BgL_g1133z00_2356, BgL_strz00_2354,
												BINT(((long) 0)));
								}}}
								{
									obj_t BgL_l1100z00_10008;

									BgL_l1100z00_10008 = CDR(BgL_l1100z00_2351);
									BgL_l1100z00_2351 = BgL_l1100z00_10008;
									goto BgL_zc3z04anonymousza32198ze3z87_2352;
								}
							}
						else
							{	/* Llib/unicode.scm 1216 */
								((bool_t) 1);
							}
					}
					return bgl_string_shrink(BgL_bufferz00_2348, BgL_indexz00_2349);
				}
			}
		}

	}



/* &utf8-string-append* */
	obj_t BGl_z62utf8zd2stringzd2appendza2zc0zz__unicodez00(obj_t BgL_envz00_7022,
		obj_t BgL_stringsz00_7023)
	{
		{	/* Llib/unicode.scm 1209 */
			return
				BGl_utf8zd2stringzd2appendza2za2zz__unicodez00(BgL_stringsz00_7023);
		}

	}



/* _utf8-substring */
	obj_t BGl__utf8zd2substringzd2zz__unicodez00(obj_t BgL_env1138z00_109,
		obj_t BgL_opt1137z00_108)
	{
		{	/* Llib/unicode.scm 1224 */
			{	/* Llib/unicode.scm 1224 */
				obj_t BgL_strz00_2361;
				obj_t BgL_g1139z00_2362;

				BgL_strz00_2361 = VECTOR_REF(BgL_opt1137z00_108, ((long) 0));
				BgL_g1139z00_2362 = VECTOR_REF(BgL_opt1137z00_108, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1137z00_108))
					{
					case ((long) 2):

						{	/* Llib/unicode.scm 1225 */
							long BgL_endz00_2366;

							{	/* Llib/unicode.scm 1225 */
								obj_t BgL_auxz00_10014;

								if (STRINGP(BgL_strz00_2361))
									{	/* Llib/unicode.scm 1225 */
										BgL_auxz00_10014 = BgL_strz00_2361;
									}
								else
									{
										obj_t BgL_auxz00_10017;

										BgL_auxz00_10017 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string4145z00zz__unicodez00, BINT(((long) 50008)),
											BGl_string4208z00zz__unicodez00,
											BGl_string4188z00zz__unicodez00, BgL_strz00_2361);
										FAILURE(BgL_auxz00_10017, BFALSE, BFALSE);
									}
								BgL_endz00_2366 =
									BGl_utf8zd2stringzd2lengthz00zz__unicodez00(BgL_auxz00_10014);
							}
							{	/* Llib/unicode.scm 1224 */

								{	/* Llib/unicode.scm 1224 */
									long BgL_auxz00_10029;
									obj_t BgL_auxz00_10022;

									{	/* Llib/unicode.scm 1224 */
										obj_t BgL_tmpz00_10030;

										if (INTEGERP(BgL_g1139z00_2362))
											{	/* Llib/unicode.scm 1224 */
												BgL_tmpz00_10030 = BgL_g1139z00_2362;
											}
										else
											{
												obj_t BgL_auxz00_10033;

												BgL_auxz00_10033 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4145z00zz__unicodez00,
													BINT(((long) 49913)), BGl_string4208z00zz__unicodez00,
													BGl_string4147z00zz__unicodez00, BgL_g1139z00_2362);
												FAILURE(BgL_auxz00_10033, BFALSE, BFALSE);
											}
										BgL_auxz00_10029 = (long) CINT(BgL_tmpz00_10030);
									}
									if (STRINGP(BgL_strz00_2361))
										{	/* Llib/unicode.scm 1224 */
											BgL_auxz00_10022 = BgL_strz00_2361;
										}
									else
										{
											obj_t BgL_auxz00_10025;

											BgL_auxz00_10025 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4145z00zz__unicodez00, BINT(((long) 49913)),
												BGl_string4208z00zz__unicodez00,
												BGl_string4188z00zz__unicodez00, BgL_strz00_2361);
											FAILURE(BgL_auxz00_10025, BFALSE, BFALSE);
										}
									return
										BGl_utf8zd2substringzd2zz__unicodez00(BgL_auxz00_10022,
										BgL_auxz00_10029, BgL_endz00_2366);
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Llib/unicode.scm 1224 */
							obj_t BgL_endz00_2367;

							BgL_endz00_2367 = VECTOR_REF(BgL_opt1137z00_108, ((long) 2));
							{	/* Llib/unicode.scm 1224 */

								{	/* Llib/unicode.scm 1224 */
									long BgL_auxz00_10056;
									long BgL_auxz00_10047;
									obj_t BgL_auxz00_10040;

									{	/* Llib/unicode.scm 1224 */
										obj_t BgL_tmpz00_10057;

										if (INTEGERP(BgL_endz00_2367))
											{	/* Llib/unicode.scm 1224 */
												BgL_tmpz00_10057 = BgL_endz00_2367;
											}
										else
											{
												obj_t BgL_auxz00_10060;

												BgL_auxz00_10060 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4145z00zz__unicodez00,
													BINT(((long) 49913)), BGl_string4208z00zz__unicodez00,
													BGl_string4147z00zz__unicodez00, BgL_endz00_2367);
												FAILURE(BgL_auxz00_10060, BFALSE, BFALSE);
											}
										BgL_auxz00_10056 = (long) CINT(BgL_tmpz00_10057);
									}
									{	/* Llib/unicode.scm 1224 */
										obj_t BgL_tmpz00_10048;

										if (INTEGERP(BgL_g1139z00_2362))
											{	/* Llib/unicode.scm 1224 */
												BgL_tmpz00_10048 = BgL_g1139z00_2362;
											}
										else
											{
												obj_t BgL_auxz00_10051;

												BgL_auxz00_10051 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4145z00zz__unicodez00,
													BINT(((long) 49913)), BGl_string4208z00zz__unicodez00,
													BGl_string4147z00zz__unicodez00, BgL_g1139z00_2362);
												FAILURE(BgL_auxz00_10051, BFALSE, BFALSE);
											}
										BgL_auxz00_10047 = (long) CINT(BgL_tmpz00_10048);
									}
									if (STRINGP(BgL_strz00_2361))
										{	/* Llib/unicode.scm 1224 */
											BgL_auxz00_10040 = BgL_strz00_2361;
										}
									else
										{
											obj_t BgL_auxz00_10043;

											BgL_auxz00_10043 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4145z00zz__unicodez00, BINT(((long) 49913)),
												BGl_string4208z00zz__unicodez00,
												BGl_string4188z00zz__unicodez00, BgL_strz00_2361);
											FAILURE(BgL_auxz00_10043, BFALSE, BFALSE);
										}
									return
										BGl_utf8zd2substringzd2zz__unicodez00(BgL_auxz00_10040,
										BgL_auxz00_10047, BgL_auxz00_10056);
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



/* utf8-substring */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2substringzd2zz__unicodez00(obj_t
		BgL_strz00_105, long BgL_startz00_106, long BgL_endz00_107)
	{
		{	/* Llib/unicode.scm 1224 */
			{	/* Llib/unicode.scm 1226 */
				long BgL_lenz00_2368;

				BgL_lenz00_2368 = STRING_LENGTH(BgL_strz00_105);
				{	/* Llib/unicode.scm 1228 */
					bool_t BgL_test4731z00_10069;

					if ((BgL_startz00_106 < ((long) 0)))
						{	/* Llib/unicode.scm 1228 */
							BgL_test4731z00_10069 = ((bool_t) 1);
						}
					else
						{	/* Llib/unicode.scm 1228 */
							BgL_test4731z00_10069 = (BgL_startz00_106 > BgL_lenz00_2368);
						}
					if (BgL_test4731z00_10069)
						{	/* Llib/unicode.scm 1228 */
							return
								BGl_errorz00zz__errorz00(BGl_string4209z00zz__unicodez00,
								string_append_3(BGl_string4210z00zz__unicodez00, BgL_strz00_105,
									BGl_string4211z00zz__unicodez00), BINT(BgL_startz00_106));
						}
					else
						{	/* Llib/unicode.scm 1228 */
							if ((BgL_endz00_107 < ((long) 0)))
								{	/* Llib/unicode.scm 1232 */
									return
										BGl_errorz00zz__errorz00(BGl_string4209z00zz__unicodez00,
										string_append_3(BGl_string4212z00zz__unicodez00,
											BgL_strz00_105, BGl_string4211z00zz__unicodez00),
										BINT(BgL_endz00_107));
								}
							else
								{	/* Llib/unicode.scm 1236 */
									bool_t BgL_test4734z00_10081;

									if ((BgL_endz00_107 < BgL_startz00_106))
										{	/* Llib/unicode.scm 1236 */
											BgL_test4734z00_10081 = ((bool_t) 1);
										}
									else
										{	/* Llib/unicode.scm 1236 */
											BgL_test4734z00_10081 =
												(BgL_endz00_107 > BgL_lenz00_2368);
										}
									if (BgL_test4734z00_10081)
										{	/* Llib/unicode.scm 1236 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string4209z00zz__unicodez00,
												string_append_3(BGl_string4212z00zz__unicodez00,
													BgL_strz00_105, BGl_string4211z00zz__unicodez00),
												BINT(BgL_endz00_107));
										}
									else
										{	/* Llib/unicode.scm 1236 */
											if ((BgL_startz00_106 == BgL_endz00_107))
												{	/* Llib/unicode.scm 1240 */
													return BGl_string4118z00zz__unicodez00;
												}
											else
												{
													long BgL_rz00_6120;
													long BgL_nz00_6121;
													long BgL_iz00_6122;

													BgL_rz00_6120 = ((long) 0);
													BgL_nz00_6121 = ((long) 0);
													BgL_iz00_6122 = ((long) 0);
												BgL_loopz00_6119:
													if ((BgL_rz00_6120 == BgL_lenz00_2368))
														{	/* Llib/unicode.scm 1246 */
															return
																c_substring(BgL_strz00_105, BgL_iz00_6122,
																BgL_rz00_6120);
														}
													else
														{	/* Llib/unicode.scm 1248 */
															unsigned char BgL_cz00_6131;

															BgL_cz00_6131 =
																STRING_REF(BgL_strz00_105, BgL_rz00_6120);
															{	/* Llib/unicode.scm 1248 */
																long BgL_sz00_6135;

																{	/* Llib/unicode.scm 1249 */
																	long BgL_res3636z00_6136;

																	{	/* Llib/unicode.scm 1249 */
																		unsigned char BgL_cz00_6137;

																		BgL_cz00_6137 = (char) (BgL_cz00_6131);
																		{	/* Llib/unicode.scm 1041 */
																			long BgL_arg2115z00_6138;

																			BgL_arg2115z00_6138 =
																				(
																				((unsigned char) (BgL_cz00_6137)) >>
																				(int) (((long) 4)));
																			{	/* Llib/unicode.scm 1040 */
																				obj_t BgL_vectorz00_6144;

																				BgL_vectorz00_6144 =
																					BGl_vector4198z00zz__unicodez00;
																				BgL_res3636z00_6136 =
																					(long)
																					CINT(VECTOR_REF(BgL_vectorz00_6144,
																						BgL_arg2115z00_6138));
																	}}}
																	BgL_sz00_6135 = BgL_res3636z00_6136;
																}
																{	/* Llib/unicode.scm 1249 */

																	if ((BgL_nz00_6121 == BgL_startz00_106))
																		{
																			long BgL_iz00_10107;
																			long BgL_nz00_10105;
																			long BgL_rz00_10103;

																			BgL_rz00_10103 =
																				(BgL_rz00_6120 + BgL_sz00_6135);
																			BgL_nz00_10105 =
																				(BgL_nz00_6121 + ((long) 1));
																			BgL_iz00_10107 = BgL_rz00_6120;
																			BgL_iz00_6122 = BgL_iz00_10107;
																			BgL_nz00_6121 = BgL_nz00_10105;
																			BgL_rz00_6120 = BgL_rz00_10103;
																			goto BgL_loopz00_6119;
																		}
																	else
																		{	/* Llib/unicode.scm 1251 */
																			if ((BgL_nz00_6121 == BgL_endz00_107))
																				{	/* Llib/unicode.scm 1253 */
																					return
																						c_substring(BgL_strz00_105,
																						BgL_iz00_6122, BgL_rz00_6120);
																				}
																			else
																				{
																					long BgL_nz00_10113;
																					long BgL_rz00_10111;

																					BgL_rz00_10111 =
																						(BgL_rz00_6120 + BgL_sz00_6135);
																					BgL_nz00_10113 =
																						(BgL_nz00_6121 + ((long) 1));
																					BgL_nz00_6121 = BgL_nz00_10113;
																					BgL_rz00_6120 = BgL_rz00_10111;
																					goto BgL_loopz00_6119;
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



/* utf8->8bits-fill! */
	obj_t BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00(obj_t BgL_nstrz00_110,
		obj_t BgL_strz00_111, int BgL_lenz00_112, obj_t BgL_tablez00_113)
	{
		{	/* Llib/unicode.scm 1261 */
			{
				obj_t BgL_rz00_2442;

				{
					obj_t BgL_rz00_2400;
					long BgL_wz00_2401;

					BgL_rz00_2400 = BINT(((long) 0));
					BgL_wz00_2401 = ((long) 0);
				BgL_zc3z04anonymousza32219ze3z87_2402:
					if (((long) CINT(BgL_rz00_2400) == (long) (BgL_lenz00_112)))
						{	/* Llib/unicode.scm 1297 */
							return BgL_nstrz00_110;
						}
					else
						{	/* Llib/unicode.scm 1299 */
							unsigned char BgL_cz00_2404;

							BgL_cz00_2404 =
								STRING_REF(BgL_strz00_111, (long) CINT(BgL_rz00_2400));
							{	/* Llib/unicode.scm 1299 */
								long BgL_nz00_2405;

								BgL_nz00_2405 = (BgL_cz00_2404);
								{	/* Llib/unicode.scm 1300 */

									if ((BgL_nz00_2405 <= ((long) 127)))
										{	/* Llib/unicode.scm 1302 */
											STRING_SET(BgL_nstrz00_110, BgL_wz00_2401, BgL_cz00_2404);
											{	/* Llib/unicode.scm 1304 */
												long BgL_arg2222z00_2407;
												long BgL_arg2223z00_2408;

												BgL_arg2222z00_2407 =
													((long) CINT(BgL_rz00_2400) + ((long) 1));
												BgL_arg2223z00_2408 = (BgL_wz00_2401 + ((long) 1));
												{
													long BgL_wz00_10130;
													obj_t BgL_rz00_10128;

													BgL_rz00_10128 = BINT(BgL_arg2222z00_2407);
													BgL_wz00_10130 = BgL_arg2223z00_2408;
													BgL_wz00_2401 = BgL_wz00_10130;
													BgL_rz00_2400 = BgL_rz00_10128;
													goto BgL_zc3z04anonymousza32219ze3z87_2402;
												}
											}
										}
									else
										{	/* Llib/unicode.scm 1302 */
											if ((BgL_nz00_2405 < ((long) 194)))
												{	/* Llib/unicode.scm 1305 */
													BgL_rz00_2442 = BgL_rz00_2400;
												BgL_zc3z04anonymousza32246ze3z87_2443:
													{	/* Llib/unicode.scm 1271 */
														obj_t BgL_arg2247z00_2444;
														obj_t BgL_arg2248z00_2445;

														{	/* Llib/unicode.scm 1271 */
															long BgL_arg2249z00_2446;

															BgL_arg2249z00_2446 =
																(STRING_REF(BgL_strz00_111,
																	(long) CINT(BgL_rz00_2442)));
															{	/* Llib/unicode.scm 1270 */
																obj_t BgL_list2250z00_2447;

																{	/* Llib/unicode.scm 1270 */
																	obj_t BgL_arg2251z00_2448;

																	BgL_arg2251z00_2448 =
																		MAKE_YOUNG_PAIR(BgL_rz00_2442, BNIL);
																	BgL_list2250z00_2447 =
																		MAKE_YOUNG_PAIR(BINT(BgL_arg2249z00_2446),
																		BgL_arg2251z00_2448);
																}
																BgL_arg2247z00_2444 =
																	BGl_formatz00zz__r4_output_6_10_3z00
																	(BGl_string4213z00zz__unicodez00,
																	BgL_list2250z00_2447);
														}}
														{	/* Llib/unicode.scm 1273 */
															obj_t BgL_arg2253z00_2450;

															{	/* Llib/unicode.scm 1273 */
																int BgL_arg2254z00_2451;

																{	/* Llib/unicode.scm 1273 */
																	long BgL_bz00_2453;

																	BgL_bz00_2453 =
																		((long) CINT(BgL_rz00_2442) + ((long) 10));
																	if (((long) (BgL_lenz00_112) < BgL_bz00_2453))
																		{	/* Llib/unicode.scm 1273 */
																			BgL_arg2254z00_2451 = BgL_lenz00_112;
																		}
																	else
																		{	/* Llib/unicode.scm 1273 */
																			BgL_arg2254z00_2451 =
																				(int) (BgL_bz00_2453);
																}}
																BgL_arg2253z00_2450 =
																	c_substring(BgL_strz00_111,
																	(long) CINT(BgL_rz00_2442),
																	(long) (BgL_arg2254z00_2451));
															}
															BgL_arg2248z00_2445 =
																string_for_read(BgL_arg2253z00_2450);
														}
														return
															BGl_errorz00zz__errorz00
															(BGl_string4214z00zz__unicodez00,
															BgL_arg2247z00_2444, BgL_arg2248z00_2445);
													}
												}
											else
												{	/* Llib/unicode.scm 1307 */
													obj_t BgL_g1059z00_2410;

													if (CBOOL(BgL_tablez00_113))
														{	/* Llib/unicode.scm 1307 */
															BgL_g1059z00_2410 =
																BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BINT
																(BgL_nz00_2405), BgL_tablez00_113);
														}
													else
														{	/* Llib/unicode.scm 1307 */
															BgL_g1059z00_2410 = BFALSE;
														}
													if (CBOOL(BgL_g1059z00_2410))
														{
															long BgL_wz00_10159;
															obj_t BgL_rz00_10157;

															BgL_rz00_10157 =
																BGl_tablezd2ze38bitsze70zd6zz__unicodez00
																(BgL_nstrz00_110, BgL_tablez00_113,
																BgL_strz00_111, BgL_lenz00_112,
																BgL_g1059z00_2410, BgL_rz00_2400, BgL_wz00_2401,
																BgL_nz00_2405);
															BgL_wz00_10159 = (BgL_wz00_2401 + ((long) 1));
															BgL_wz00_2401 = BgL_wz00_10159;
															BgL_rz00_2400 = BgL_rz00_10157;
															goto BgL_zc3z04anonymousza32219ze3z87_2402;
														}
													else
														{	/* Llib/unicode.scm 1307 */
															if ((BgL_nz00_2405 <= ((long) 223)))
																{	/* Llib/unicode.scm 1311 */
																	if (
																		((long) CINT(BgL_rz00_2400) ==
																			((long) (BgL_lenz00_112) - ((long) 1))))
																		{	/* Llib/unicode.scm 1312 */
																			return
																				BGl_errorzd2toozd2shortze70ze7zz__unicodez00
																				(BgL_lenz00_112, BgL_strz00_111,
																				BgL_rz00_2400);
																		}
																	else
																		{	/* Llib/unicode.scm 1314 */
																			unsigned char BgL_ncz00_2418;

																			BgL_ncz00_2418 =
																				STRING_REF(BgL_strz00_111,
																				((long) CINT(BgL_rz00_2400) +
																					((long) 1)));
																			{	/* Llib/unicode.scm 1314 */
																				long BgL_nnz00_2419;

																				BgL_nnz00_2419 = (BgL_ncz00_2418);
																				{	/* Llib/unicode.scm 1315 */

																					{	/* Llib/unicode.scm 1316 */
																						long BgL_mz00_2420;

																						BgL_mz00_2420 =
																							(
																							((BgL_nz00_2405 & ((long) 31)) <<
																								(int) (((long) 6))) |
																							(((long) 63) & BgL_nnz00_2419));
																						if ((BgL_mz00_2420 > ((long) 255)))
																							{	/* Llib/unicode.scm 1318 */
																								STRING_SET(BgL_nstrz00_110,
																									BgL_wz00_2401,
																									((unsigned char) '.'));
																								{	/* Llib/unicode.scm 1324 */
																									long BgL_arg2231z00_2422;
																									long BgL_arg2232z00_2423;

																									BgL_arg2231z00_2422 =
																										(
																										(long) CINT(BgL_rz00_2400) +
																										((long) 2));
																									BgL_arg2232z00_2423 =
																										(BgL_wz00_2401 +
																										((long) 1));
																									{
																										long BgL_wz00_10186;
																										obj_t BgL_rz00_10184;

																										BgL_rz00_10184 =
																											BINT(BgL_arg2231z00_2422);
																										BgL_wz00_10186 =
																											BgL_arg2232z00_2423;
																										BgL_wz00_2401 =
																											BgL_wz00_10186;
																										BgL_rz00_2400 =
																											BgL_rz00_10184;
																										goto
																											BgL_zc3z04anonymousza32219ze3z87_2402;
																									}
																								}
																							}
																						else
																							{	/* Llib/unicode.scm 1318 */
																								{	/* Llib/unicode.scm 1326 */
																									unsigned char
																										BgL_tmpz00_10187;
																									BgL_tmpz00_10187 =
																										(BgL_mz00_2420);
																									STRING_SET(BgL_nstrz00_110,
																										BgL_wz00_2401,
																										BgL_tmpz00_10187);
																								}
																								{	/* Llib/unicode.scm 1327 */
																									long BgL_arg2234z00_2425;
																									long BgL_arg2235z00_2426;

																									BgL_arg2234z00_2425 =
																										(
																										(long) CINT(BgL_rz00_2400) +
																										((long) 2));
																									BgL_arg2235z00_2426 =
																										(BgL_wz00_2401 +
																										((long) 1));
																									{
																										long BgL_wz00_10195;
																										obj_t BgL_rz00_10193;

																										BgL_rz00_10193 =
																											BINT(BgL_arg2234z00_2425);
																										BgL_wz00_10195 =
																											BgL_arg2235z00_2426;
																										BgL_wz00_2401 =
																											BgL_wz00_10195;
																										BgL_rz00_2400 =
																											BgL_rz00_10193;
																										goto
																											BgL_zc3z04anonymousza32219ze3z87_2402;
																									}
																								}
																							}
																					}
																				}
																			}
																		}
																}
															else
																{
																	obj_t BgL_rz00_10196;

																	BgL_rz00_10196 = BgL_rz00_2400;
																	BgL_rz00_2442 = BgL_rz00_10196;
																	goto BgL_zc3z04anonymousza32246ze3z87_2443;
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



/* error-too-short~0 */
	obj_t BGl_errorzd2toozd2shortze70ze7zz__unicodez00(int BgL_lenz00_7063,
		obj_t BgL_strz00_7062, obj_t BgL_rz00_2434)
	{
		{	/* Llib/unicode.scm 1266 */
			{	/* Llib/unicode.scm 1266 */
				obj_t BgL_arg2242z00_2436;

				{	/* Llib/unicode.scm 1266 */
					obj_t BgL_arg2243z00_2437;

					{	/* Llib/unicode.scm 1266 */
						long BgL_arg2244z00_2438;

						{	/* Llib/unicode.scm 1266 */
							long BgL_bz00_2440;

							BgL_bz00_2440 = ((long) CINT(BgL_rz00_2434) - ((long) 10));
							if ((((long) 0) > BgL_bz00_2440))
								{	/* Llib/unicode.scm 1266 */
									BgL_arg2244z00_2438 = ((long) 0);
								}
							else
								{	/* Llib/unicode.scm 1266 */
									BgL_arg2244z00_2438 = BgL_bz00_2440;
								}
						}
						BgL_arg2243z00_2437 =
							c_substring(BgL_strz00_7062, BgL_arg2244z00_2438,
							(long) (BgL_lenz00_7063));
					}
					BgL_arg2242z00_2436 = string_for_read(BgL_arg2243z00_2437);
				}
				return
					BGl_errorz00zz__errorz00(BGl_string4214z00zz__unicodez00,
					BGl_string4215z00zz__unicodez00, BgL_arg2242z00_2436);
			}
		}

	}



/* table->8bits~0 */
	obj_t BGl_tablezd2ze38bitsze70zd6zz__unicodez00(obj_t BgL_nstrz00_7067,
		obj_t BgL_tablez00_7066, obj_t BgL_strz00_7065, int BgL_lenz00_7064,
		obj_t BgL_subtablez00_2467, obj_t BgL_rz00_2468, long BgL_wz00_2469,
		long BgL_nz00_2470)
	{
		{	/* Llib/unicode.scm 1293 */
			{
				obj_t BgL_rz00_2455;

				{	/* Llib/unicode.scm 1281 */
					obj_t BgL_g1056z00_2472;
					long BgL_g1057z00_2473;

					BgL_g1056z00_2472 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BINT(BgL_nz00_2470),
						BgL_tablez00_7066);
					BgL_g1057z00_2473 = ((long) CINT(BgL_rz00_2468) + ((long) 1));
					{
						obj_t BgL_subtablez00_2475;
						long BgL_nrz00_2476;

						BgL_subtablez00_2475 = BgL_g1056z00_2472;
						BgL_nrz00_2476 = BgL_g1057z00_2473;
					BgL_zc3z04anonymousza32264ze3z87_2477:
						if (CBOOL(BgL_subtablez00_2475))
							{	/* Llib/unicode.scm 1286 */
								bool_t BgL_test4751z00_10212;

								{	/* Llib/unicode.scm 1286 */
									obj_t BgL_tmpz00_10213;

									BgL_tmpz00_10213 = CDR(((obj_t) BgL_subtablez00_2475));
									BgL_test4751z00_10212 = CHARP(BgL_tmpz00_10213);
								}
								if (BgL_test4751z00_10212)
									{	/* Llib/unicode.scm 1286 */
										{	/* Llib/unicode.scm 1287 */
											obj_t BgL_arg2267z00_2480;

											BgL_arg2267z00_2480 = CDR(((obj_t) BgL_subtablez00_2475));
											{	/* Llib/unicode.scm 1287 */
												unsigned char BgL_tmpz00_10219;

												BgL_tmpz00_10219 = CCHAR(BgL_arg2267z00_2480);
												STRING_SET(BgL_nstrz00_7067, BgL_wz00_2469,
													BgL_tmpz00_10219);
										}}
										return BINT(BgL_nrz00_2476);
									}
								else
									{	/* Llib/unicode.scm 1286 */
										if ((BgL_nrz00_2476 == (long) (BgL_lenz00_7064)))
											{	/* Llib/unicode.scm 1289 */
												return
													BGl_errorzd2toozd2shortze70ze7zz__unicodez00
													(BgL_lenz00_7064, BgL_strz00_7065, BgL_rz00_2468);
											}
										else
											{	/* Llib/unicode.scm 1292 */
												long BgL_ncz00_2482;

												BgL_ncz00_2482 =
													(STRING_REF(BgL_strz00_7065, BgL_nrz00_2476));
												{	/* Llib/unicode.scm 1293 */
													obj_t BgL_arg2269z00_2483;
													long BgL_arg2270z00_2484;

													BgL_arg2269z00_2483 =
														BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BINT
														(BgL_ncz00_2482),
														CDR(((obj_t) BgL_subtablez00_2475)));
													BgL_arg2270z00_2484 = (BgL_nrz00_2476 + ((long) 1));
													{
														long BgL_nrz00_10235;
														obj_t BgL_subtablez00_10234;

														BgL_subtablez00_10234 = BgL_arg2269z00_2483;
														BgL_nrz00_10235 = BgL_arg2270z00_2484;
														BgL_nrz00_2476 = BgL_nrz00_10235;
														BgL_subtablez00_2475 = BgL_subtablez00_10234;
														goto BgL_zc3z04anonymousza32264ze3z87_2477;
													}
												}
											}
									}
							}
						else
							{	/* Llib/unicode.scm 1284 */
								BgL_rz00_2455 = BgL_rz00_2468;
								{	/* Llib/unicode.scm 1277 */
									obj_t BgL_arg2257z00_2457;
									obj_t BgL_arg2258z00_2458;

									{	/* Llib/unicode.scm 1277 */
										obj_t BgL_arg2259z00_2459;

										{	/* Ieee/fixnum.scm 979 */

											BgL_arg2259z00_2459 =
												BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
												(long) CINT(BgL_rz00_2455), ((long) 10));
										}
										BgL_arg2257z00_2457 =
											string_append(BGl_string4216z00zz__unicodez00,
											BgL_arg2259z00_2459);
									}
									{	/* Llib/unicode.scm 1278 */
										obj_t BgL_arg2260z00_2462;

										{	/* Llib/unicode.scm 1278 */
											int BgL_arg2261z00_2463;

											{	/* Llib/unicode.scm 1278 */
												long BgL_bz00_2465;

												BgL_bz00_2465 =
													((long) CINT(BgL_rz00_2455) + ((long) 10));
												if (((long) (BgL_lenz00_7064) < BgL_bz00_2465))
													{	/* Llib/unicode.scm 1278 */
														BgL_arg2261z00_2463 = BgL_lenz00_7064;
													}
												else
													{	/* Llib/unicode.scm 1278 */
														BgL_arg2261z00_2463 = (int) (BgL_bz00_2465);
											}}
											BgL_arg2260z00_2462 =
												c_substring(BgL_strz00_7065,
												(long) CINT(BgL_rz00_2455),
												(long) (BgL_arg2261z00_2463));
										}
										BgL_arg2258z00_2458 = string_for_read(BgL_arg2260z00_2462);
									}
									return
										BGl_errorz00zz__errorz00(BGl_string4214z00zz__unicodez00,
										BgL_arg2257z00_2457, BgL_arg2258z00_2458);
								}
							}
					}
				}
			}
		}

	}



/* utf8->8bits */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze38bitsz31zz__unicodez00(obj_t
		BgL_strz00_114, obj_t BgL_tablez00_115)
	{
		{	/* Llib/unicode.scm 1334 */
			{	/* Llib/unicode.scm 1335 */
				long BgL_lenz00_6291;

				BgL_lenz00_6291 = STRING_LENGTH(BgL_strz00_114);
				{	/* Llib/unicode.scm 1335 */
					long BgL_nlenz00_6292;

					BgL_nlenz00_6292 =
						BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_114,
						BgL_lenz00_6291);
					{	/* Llib/unicode.scm 1336 */

						if ((BgL_lenz00_6291 == BgL_nlenz00_6292))
							{	/* Llib/unicode.scm 1337 */
								return
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_114);
							}
						else
							{	/* Llib/unicode.scm 1339 */
								obj_t BgL_arg2277z00_6294;

								{	/* Llib/unicode.scm 1339 */

									BgL_arg2277z00_6294 =
										make_string(BgL_nlenz00_6292, ((unsigned char) ' '));
								}
								return
									BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00
									(BgL_arg2277z00_6294, BgL_strz00_114, (int) (BgL_lenz00_6291),
									BgL_tablez00_115);
		}}}}}

	}



/* &utf8->8bits */
	obj_t BGl_z62utf8zd2ze38bitsz53zz__unicodez00(obj_t BgL_envz00_7024,
		obj_t BgL_strz00_7025, obj_t BgL_tablez00_7026)
	{
		{	/* Llib/unicode.scm 1334 */
			{	/* Llib/unicode.scm 1335 */
				obj_t BgL_auxz00_10258;

				if (STRINGP(BgL_strz00_7025))
					{	/* Llib/unicode.scm 1335 */
						BgL_auxz00_10258 = BgL_strz00_7025;
					}
				else
					{
						obj_t BgL_auxz00_10261;

						BgL_auxz00_10261 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 53248)), BGl_string4217z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_strz00_7025);
						FAILURE(BgL_auxz00_10261, BFALSE, BFALSE);
					}
				return
					BGl_utf8zd2ze38bitsz31zz__unicodez00(BgL_auxz00_10258,
					BgL_tablez00_7026);
			}
		}

	}



/* utf8->8bits! */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze38bitsz12z23zz__unicodez00(obj_t
		BgL_strz00_116, obj_t BgL_tablez00_117)
	{
		{	/* Llib/unicode.scm 1344 */
			{	/* Llib/unicode.scm 1345 */
				long BgL_lenz00_6304;

				BgL_lenz00_6304 = STRING_LENGTH(BgL_strz00_116);
				{	/* Llib/unicode.scm 1345 */
					long BgL_nlenz00_6305;

					BgL_nlenz00_6305 =
						BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_116,
						BgL_lenz00_6304);
					{	/* Llib/unicode.scm 1346 */

						if ((BgL_lenz00_6304 == BgL_nlenz00_6305))
							{	/* Llib/unicode.scm 1347 */
								return BgL_strz00_116;
							}
						else
							{	/* Llib/unicode.scm 1349 */
								obj_t BgL_arg2280z00_6307;

								{	/* Llib/unicode.scm 1349 */

									BgL_arg2280z00_6307 =
										make_string(BgL_nlenz00_6305, ((unsigned char) ' '));
								}
								return
									BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00
									(BgL_arg2280z00_6307, BgL_strz00_116, (int) (BgL_lenz00_6304),
									BgL_tablez00_117);
		}}}}}

	}



/* &utf8->8bits! */
	obj_t BGl_z62utf8zd2ze38bitsz12z41zz__unicodez00(obj_t BgL_envz00_7027,
		obj_t BgL_strz00_7028, obj_t BgL_tablez00_7029)
	{
		{	/* Llib/unicode.scm 1344 */
			{	/* Llib/unicode.scm 1345 */
				obj_t BgL_auxz00_10273;

				if (STRINGP(BgL_strz00_7028))
					{	/* Llib/unicode.scm 1345 */
						BgL_auxz00_10273 = BgL_strz00_7028;
					}
				else
					{
						obj_t BgL_auxz00_10276;

						BgL_auxz00_10276 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 53685)), BGl_string4218z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_strz00_7028);
						FAILURE(BgL_auxz00_10276, BFALSE, BFALSE);
					}
				return
					BGl_utf8zd2ze38bitsz12z23zz__unicodez00(BgL_auxz00_10273,
					BgL_tablez00_7029);
			}
		}

	}



/* utf8->iso-latin */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3isozd2latinze3zz__unicodez00(obj_t
		BgL_strz00_118)
	{
		{	/* Llib/unicode.scm 1354 */
			{	/* Llib/unicode.scm 1355 */
				obj_t BgL_res3697z00_6332;

				{	/* Llib/unicode.scm 1355 */
					obj_t BgL_tablez00_6318;

					BgL_tablez00_6318 = BGl_list4076z00zz__unicodez00;
					{	/* Llib/unicode.scm 1335 */
						long BgL_lenz00_6319;

						BgL_lenz00_6319 = STRING_LENGTH(BgL_strz00_118);
						{	/* Llib/unicode.scm 1335 */
							long BgL_nlenz00_6320;

							BgL_nlenz00_6320 =
								BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_118,
								BgL_lenz00_6319);
							{	/* Llib/unicode.scm 1336 */

								if ((BgL_lenz00_6319 == BgL_nlenz00_6320))
									{	/* Llib/unicode.scm 1337 */
										BgL_res3697z00_6332 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_118);
									}
								else
									{	/* Llib/unicode.scm 1339 */
										obj_t BgL_arg2277z00_6322;

										{	/* Llib/unicode.scm 1339 */

											BgL_arg2277z00_6322 =
												make_string(BgL_nlenz00_6320, ((unsigned char) ' '));
										}
										BgL_res3697z00_6332 =
											BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00
											(BgL_arg2277z00_6322, BgL_strz00_118,
											(int) (BgL_lenz00_6319), BgL_tablez00_6318);
				}}}}}
				return BgL_res3697z00_6332;
			}
		}

	}



/* &utf8->iso-latin */
	obj_t BGl_z62utf8zd2ze3isozd2latinz81zz__unicodez00(obj_t BgL_envz00_7030,
		obj_t BgL_strz00_7031)
	{
		{	/* Llib/unicode.scm 1354 */
			{	/* Llib/unicode.scm 1355 */
				obj_t BgL_auxz00_10289;

				if (STRINGP(BgL_strz00_7031))
					{	/* Llib/unicode.scm 1355 */
						BgL_auxz00_10289 = BgL_strz00_7031;
					}
				else
					{
						obj_t BgL_auxz00_10292;

						BgL_auxz00_10292 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 54105)), BGl_string4219z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_strz00_7031);
						FAILURE(BgL_auxz00_10292, BFALSE, BFALSE);
					}
				return BGl_utf8zd2ze3isozd2latinze3zz__unicodez00(BgL_auxz00_10289);
			}
		}

	}



/* utf8->iso-latin! */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3isozd2latinz12zf1zz__unicodez00(obj_t
		BgL_strz00_119)
	{
		{	/* Llib/unicode.scm 1360 */
			{	/* Llib/unicode.scm 1361 */
				obj_t BgL_res3701z00_6348;

				{	/* Llib/unicode.scm 1361 */
					obj_t BgL_tablez00_6334;

					BgL_tablez00_6334 = BGl_list4076z00zz__unicodez00;
					{	/* Llib/unicode.scm 1345 */
						long BgL_lenz00_6335;

						BgL_lenz00_6335 = STRING_LENGTH(BgL_strz00_119);
						{	/* Llib/unicode.scm 1345 */
							long BgL_nlenz00_6336;

							BgL_nlenz00_6336 =
								BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_119,
								BgL_lenz00_6335);
							{	/* Llib/unicode.scm 1346 */

								if ((BgL_lenz00_6335 == BgL_nlenz00_6336))
									{	/* Llib/unicode.scm 1347 */
										BgL_res3701z00_6348 = BgL_strz00_119;
									}
								else
									{	/* Llib/unicode.scm 1349 */
										obj_t BgL_arg2280z00_6338;

										{	/* Llib/unicode.scm 1349 */

											BgL_arg2280z00_6338 =
												make_string(BgL_nlenz00_6336, ((unsigned char) ' '));
										}
										BgL_res3701z00_6348 =
											BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00
											(BgL_arg2280z00_6338, BgL_strz00_119,
											(int) (BgL_lenz00_6335), BgL_tablez00_6334);
				}}}}}
				return BgL_res3701z00_6348;
			}
		}

	}



/* &utf8->iso-latin! */
	obj_t BGl_z62utf8zd2ze3isozd2latinz12z93zz__unicodez00(obj_t BgL_envz00_7032,
		obj_t BgL_strz00_7033)
	{
		{	/* Llib/unicode.scm 1360 */
			{	/* Llib/unicode.scm 1361 */
				obj_t BgL_auxz00_10304;

				if (STRINGP(BgL_strz00_7033))
					{	/* Llib/unicode.scm 1361 */
						BgL_auxz00_10304 = BgL_strz00_7033;
					}
				else
					{
						obj_t BgL_auxz00_10307;

						BgL_auxz00_10307 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 54391)), BGl_string4220z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_strz00_7033);
						FAILURE(BgL_auxz00_10307, BFALSE, BFALSE);
					}
				return BGl_utf8zd2ze3isozd2latinz12zf1zz__unicodez00(BgL_auxz00_10304);
			}
		}

	}



/* utf8->iso-latin-15 */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3isozd2latinzd215z31zz__unicodez00(obj_t
		BgL_strz00_120)
	{
		{	/* Llib/unicode.scm 1366 */
			{	/* Llib/unicode.scm 1367 */
				obj_t BgL_res3705z00_6364;

				{	/* Llib/unicode.scm 1367 */
					obj_t BgL_tablez00_6350;

					BgL_tablez00_6350 = BGl_list4103z00zz__unicodez00;
					{	/* Llib/unicode.scm 1335 */
						long BgL_lenz00_6351;

						BgL_lenz00_6351 = STRING_LENGTH(BgL_strz00_120);
						{	/* Llib/unicode.scm 1335 */
							long BgL_nlenz00_6352;

							BgL_nlenz00_6352 =
								BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_120,
								BgL_lenz00_6351);
							{	/* Llib/unicode.scm 1336 */

								if ((BgL_lenz00_6351 == BgL_nlenz00_6352))
									{	/* Llib/unicode.scm 1337 */
										BgL_res3705z00_6364 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_120);
									}
								else
									{	/* Llib/unicode.scm 1339 */
										obj_t BgL_arg2277z00_6354;

										{	/* Llib/unicode.scm 1339 */

											BgL_arg2277z00_6354 =
												make_string(BgL_nlenz00_6352, ((unsigned char) ' '));
										}
										BgL_res3705z00_6364 =
											BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00
											(BgL_arg2277z00_6354, BgL_strz00_120,
											(int) (BgL_lenz00_6351), BgL_tablez00_6350);
				}}}}}
				return BgL_res3705z00_6364;
			}
		}

	}



/* &utf8->iso-latin-15 */
	obj_t BGl_z62utf8zd2ze3isozd2latinzd215z53zz__unicodez00(obj_t
		BgL_envz00_7034, obj_t BgL_strz00_7035)
	{
		{	/* Llib/unicode.scm 1366 */
			{	/* Llib/unicode.scm 1367 */
				obj_t BgL_auxz00_10320;

				if (STRINGP(BgL_strz00_7035))
					{	/* Llib/unicode.scm 1367 */
						BgL_auxz00_10320 = BgL_strz00_7035;
					}
				else
					{
						obj_t BgL_auxz00_10323;

						BgL_auxz00_10323 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 54680)), BGl_string4221z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_strz00_7035);
						FAILURE(BgL_auxz00_10323, BFALSE, BFALSE);
					}
				return
					BGl_utf8zd2ze3isozd2latinzd215z31zz__unicodez00(BgL_auxz00_10320);
			}
		}

	}



/* utf8->iso-latin-15! */
	BGL_EXPORTED_DEF obj_t
		BGl_utf8zd2ze3isozd2latinzd215z12z23zz__unicodez00(obj_t BgL_strz00_121)
	{
		{	/* Llib/unicode.scm 1372 */
			{	/* Llib/unicode.scm 1373 */
				obj_t BgL_res3709z00_6380;

				{	/* Llib/unicode.scm 1373 */
					obj_t BgL_tablez00_6366;

					BgL_tablez00_6366 = BGl_list4103z00zz__unicodez00;
					{	/* Llib/unicode.scm 1345 */
						long BgL_lenz00_6367;

						BgL_lenz00_6367 = STRING_LENGTH(BgL_strz00_121);
						{	/* Llib/unicode.scm 1345 */
							long BgL_nlenz00_6368;

							BgL_nlenz00_6368 =
								BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_121,
								BgL_lenz00_6367);
							{	/* Llib/unicode.scm 1346 */

								if ((BgL_lenz00_6367 == BgL_nlenz00_6368))
									{	/* Llib/unicode.scm 1347 */
										BgL_res3709z00_6380 = BgL_strz00_121;
									}
								else
									{	/* Llib/unicode.scm 1349 */
										obj_t BgL_arg2280z00_6370;

										{	/* Llib/unicode.scm 1349 */

											BgL_arg2280z00_6370 =
												make_string(BgL_nlenz00_6368, ((unsigned char) ' '));
										}
										BgL_res3709z00_6380 =
											BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00
											(BgL_arg2280z00_6370, BgL_strz00_121,
											(int) (BgL_lenz00_6367), BgL_tablez00_6366);
				}}}}}
				return BgL_res3709z00_6380;
			}
		}

	}



/* &utf8->iso-latin-15! */
	obj_t BGl_z62utf8zd2ze3isozd2latinzd215z12z41zz__unicodez00(obj_t
		BgL_envz00_7036, obj_t BgL_strz00_7037)
	{
		{	/* Llib/unicode.scm 1372 */
			{	/* Llib/unicode.scm 1373 */
				obj_t BgL_auxz00_10335;

				if (STRINGP(BgL_strz00_7037))
					{	/* Llib/unicode.scm 1373 */
						BgL_auxz00_10335 = BgL_strz00_7037;
					}
				else
					{
						obj_t BgL_auxz00_10338;

						BgL_auxz00_10338 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 54978)), BGl_string4222z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_strz00_7037);
						FAILURE(BgL_auxz00_10338, BFALSE, BFALSE);
					}
				return
					BGl_utf8zd2ze3isozd2latinzd215z12z23zz__unicodez00(BgL_auxz00_10335);
			}
		}

	}



/* utf8->cp1252 */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3cp1252z31zz__unicodez00(obj_t
		BgL_strz00_122)
	{
		{	/* Llib/unicode.scm 1378 */
			if (CBOOL(BGl_cp1252zd2invzd2zz__unicodez00))
				{	/* Llib/unicode.scm 1379 */
					BFALSE;
				}
			else
				{	/* Llib/unicode.scm 1379 */
					BGl_cp1252zd2invzd2zz__unicodez00 =
						BGl_inversezd2utf8zd2tablez00zz__unicodez00
						(BGl_vector4115z00zz__unicodez00);
				}
			{	/* Llib/unicode.scm 1380 */
				obj_t BgL_res3713z00_6396;

				{	/* Llib/unicode.scm 1380 */
					obj_t BgL_tablez00_6382;

					BgL_tablez00_6382 = BGl_cp1252zd2invzd2zz__unicodez00;
					{	/* Llib/unicode.scm 1335 */
						long BgL_lenz00_6383;

						BgL_lenz00_6383 = STRING_LENGTH(BgL_strz00_122);
						{	/* Llib/unicode.scm 1335 */
							long BgL_nlenz00_6384;

							BgL_nlenz00_6384 =
								BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_122,
								BgL_lenz00_6383);
							{	/* Llib/unicode.scm 1336 */

								if ((BgL_lenz00_6383 == BgL_nlenz00_6384))
									{	/* Llib/unicode.scm 1337 */
										BgL_res3713z00_6396 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_122);
									}
								else
									{	/* Llib/unicode.scm 1339 */
										obj_t BgL_arg2277z00_6386;

										{	/* Llib/unicode.scm 1339 */

											BgL_arg2277z00_6386 =
												make_string(BgL_nlenz00_6384, ((unsigned char) ' '));
										}
										BgL_res3713z00_6396 =
											BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00
											(BgL_arg2277z00_6386, BgL_strz00_122,
											(int) (BgL_lenz00_6383), BgL_tablez00_6382);
				}}}}}
				return BgL_res3713z00_6396;
			}
		}

	}



/* &utf8->cp1252 */
	obj_t BGl_z62utf8zd2ze3cp1252z53zz__unicodez00(obj_t BgL_envz00_7038,
		obj_t BgL_strz00_7039)
	{
		{	/* Llib/unicode.scm 1378 */
			{	/* Llib/unicode.scm 1379 */
				obj_t BgL_auxz00_10354;

				if (STRINGP(BgL_strz00_7039))
					{	/* Llib/unicode.scm 1379 */
						BgL_auxz00_10354 = BgL_strz00_7039;
					}
				else
					{
						obj_t BgL_auxz00_10357;

						BgL_auxz00_10357 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 55334)), BGl_string4223z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_strz00_7039);
						FAILURE(BgL_auxz00_10357, BFALSE, BFALSE);
					}
				return BGl_utf8zd2ze3cp1252z31zz__unicodez00(BgL_auxz00_10354);
			}
		}

	}



/* utf8->cp1252! */
	BGL_EXPORTED_DEF obj_t BGl_utf8zd2ze3cp1252z12z23zz__unicodez00(obj_t
		BgL_strz00_123)
	{
		{	/* Llib/unicode.scm 1385 */
			if (CBOOL(BGl_cp1252zd2invzd2zz__unicodez00))
				{	/* Llib/unicode.scm 1386 */
					BFALSE;
				}
			else
				{	/* Llib/unicode.scm 1386 */
					BGl_cp1252zd2invzd2zz__unicodez00 =
						BGl_inversezd2utf8zd2tablez00zz__unicodez00
						(BGl_vector4115z00zz__unicodez00);
				}
			{	/* Llib/unicode.scm 1387 */
				obj_t BgL_res3717z00_6412;

				{	/* Llib/unicode.scm 1387 */
					obj_t BgL_tablez00_6398;

					BgL_tablez00_6398 = BGl_cp1252zd2invzd2zz__unicodez00;
					{	/* Llib/unicode.scm 1345 */
						long BgL_lenz00_6399;

						BgL_lenz00_6399 = STRING_LENGTH(BgL_strz00_123);
						{	/* Llib/unicode.scm 1345 */
							long BgL_nlenz00_6400;

							BgL_nlenz00_6400 =
								BGl_utf8zd2ze38bitszd2lengthze3zz__unicodez00(BgL_strz00_123,
								BgL_lenz00_6399);
							{	/* Llib/unicode.scm 1346 */

								if ((BgL_lenz00_6399 == BgL_nlenz00_6400))
									{	/* Llib/unicode.scm 1347 */
										BgL_res3717z00_6412 = BgL_strz00_123;
									}
								else
									{	/* Llib/unicode.scm 1349 */
										obj_t BgL_arg2280z00_6402;

										{	/* Llib/unicode.scm 1349 */

											BgL_arg2280z00_6402 =
												make_string(BgL_nlenz00_6400, ((unsigned char) ' '));
										}
										BgL_res3717z00_6412 =
											BGl_utf8zd2ze38bitszd2fillz12zf1zz__unicodez00
											(BgL_arg2280z00_6402, BgL_strz00_123,
											(int) (BgL_lenz00_6399), BgL_tablez00_6398);
				}}}}}
				return BgL_res3717z00_6412;
			}
		}

	}



/* &utf8->cp1252! */
	obj_t BGl_z62utf8zd2ze3cp1252z12z41zz__unicodez00(obj_t BgL_envz00_7040,
		obj_t BgL_strz00_7041)
	{
		{	/* Llib/unicode.scm 1385 */
			{	/* Llib/unicode.scm 1386 */
				obj_t BgL_auxz00_10372;

				if (STRINGP(BgL_strz00_7041))
					{	/* Llib/unicode.scm 1386 */
						BgL_auxz00_10372 = BgL_strz00_7041;
					}
				else
					{
						obj_t BgL_auxz00_10375;

						BgL_auxz00_10375 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 55687)), BGl_string4224z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_strz00_7041);
						FAILURE(BgL_auxz00_10375, BFALSE, BFALSE);
					}
				return BGl_utf8zd2ze3cp1252z12z23zz__unicodez00(BgL_auxz00_10372);
			}
		}

	}



/* 8bits->utf8-length */
	long BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(obj_t BgL_strz00_124,
		long BgL_lenz00_125, obj_t BgL_tablez00_126)
	{
		{	/* Llib/unicode.scm 1392 */
			{
				long BgL_cz00_2522;

				{
					long BgL_siza7eza7_2507;
					long BgL_iz00_2508;

					BgL_siza7eza7_2507 = ((long) 0);
					BgL_iz00_2508 = ((long) 0);
				BgL_zc3z04anonymousza32281ze3z87_2509:
					if ((BgL_iz00_2508 == BgL_lenz00_125))
						{	/* Llib/unicode.scm 1402 */
							return BgL_siza7eza7_2507;
						}
					else
						{	/* Llib/unicode.scm 1404 */
							long BgL_cz00_2511;

							BgL_cz00_2511 = (STRING_REF(BgL_strz00_124, BgL_iz00_2508));
							if ((BgL_cz00_2511 >= ((long) 128)))
								{	/* Llib/unicode.scm 1405 */
									if (CBOOL(BgL_tablez00_126))
										{
											long BgL_iz00_10400;
											long BgL_siza7eza7_10388;

											{	/* Llib/unicode.scm 1407 */
												long BgL_tmpz00_10389;

												BgL_cz00_2522 = BgL_cz00_2511;
												{	/* Llib/unicode.scm 1395 */
													long BgL_vz00_2524;

													BgL_vz00_2524 = (BgL_cz00_2522 - ((long) 128));
													if (
														(BgL_vz00_2524 <
															VECTOR_LENGTH(((obj_t) BgL_tablez00_126))))
														{	/* Llib/unicode.scm 1397 */
															obj_t BgL_arg2296z00_2527;

															BgL_arg2296z00_2527 =
																VECTOR_REF(
																((obj_t) BgL_tablez00_126), BgL_vz00_2524);
															BgL_tmpz00_10389 =
																STRING_LENGTH(((obj_t) BgL_arg2296z00_2527));
														}
													else
														{	/* Llib/unicode.scm 1396 */
															BgL_tmpz00_10389 = ((long) 2);
												}}
												BgL_siza7eza7_10388 =
													(BgL_siza7eza7_2507 + BgL_tmpz00_10389);
											}
											BgL_iz00_10400 = (BgL_iz00_2508 + ((long) 1));
											BgL_iz00_2508 = BgL_iz00_10400;
											BgL_siza7eza7_2507 = BgL_siza7eza7_10388;
											goto BgL_zc3z04anonymousza32281ze3z87_2509;
										}
									else
										{
											long BgL_iz00_10404;
											long BgL_siza7eza7_10402;

											BgL_siza7eza7_10402 = (BgL_siza7eza7_2507 + ((long) 2));
											BgL_iz00_10404 = (BgL_iz00_2508 + ((long) 1));
											BgL_iz00_2508 = BgL_iz00_10404;
											BgL_siza7eza7_2507 = BgL_siza7eza7_10402;
											goto BgL_zc3z04anonymousza32281ze3z87_2509;
										}
								}
							else
								{
									long BgL_iz00_10408;
									long BgL_siza7eza7_10406;

									BgL_siza7eza7_10406 = (BgL_siza7eza7_2507 + ((long) 1));
									BgL_iz00_10408 = (BgL_iz00_2508 + ((long) 1));
									BgL_iz00_2508 = BgL_iz00_10408;
									BgL_siza7eza7_2507 = BgL_siza7eza7_10406;
									goto BgL_zc3z04anonymousza32281ze3z87_2509;
								}
						}
				}
			}
		}

	}



/* 8bits->utf8-fill! */
	obj_t BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00(obj_t BgL_nstrz00_127,
		obj_t BgL_strz00_128, long BgL_lenz00_129, obj_t BgL_tablez00_130)
	{
		{	/* Llib/unicode.scm 1414 */
			{
				long BgL_rz00_2531;
				long BgL_wz00_2532;

				BgL_rz00_2531 = ((long) 0);
				BgL_wz00_2532 = ((long) 0);
			BgL_zc3z04anonymousza32298ze3z87_2533:
				if ((BgL_rz00_2531 == BgL_lenz00_129))
					{	/* Llib/unicode.scm 1417 */
						return BgL_nstrz00_127;
					}
				else
					{	/* Llib/unicode.scm 1419 */
						long BgL_cz00_2535;

						BgL_cz00_2535 = (STRING_REF(BgL_strz00_128, BgL_rz00_2531));
						if ((BgL_cz00_2535 >= ((long) 192)))
							{	/* Llib/unicode.scm 1421 */
								STRING_SET(BgL_nstrz00_127, BgL_wz00_2532,
									((unsigned char) 195));
								{	/* Llib/unicode.scm 1423 */
									unsigned char BgL_auxz00_10419;
									long BgL_tmpz00_10417;

									BgL_auxz00_10419 = ((BgL_cz00_2535 - ((long) 64)));
									BgL_tmpz00_10417 = (BgL_wz00_2532 + ((long) 1));
									STRING_SET(BgL_nstrz00_127, BgL_tmpz00_10417,
										BgL_auxz00_10419);
								}
								{
									long BgL_wz00_10425;
									long BgL_rz00_10423;

									BgL_rz00_10423 = (BgL_rz00_2531 + ((long) 1));
									BgL_wz00_10425 = (BgL_wz00_2532 + ((long) 2));
									BgL_wz00_2532 = BgL_wz00_10425;
									BgL_rz00_2531 = BgL_rz00_10423;
									goto BgL_zc3z04anonymousza32298ze3z87_2533;
								}
							}
						else
							{	/* Llib/unicode.scm 1421 */
								if ((BgL_cz00_2535 >= ((long) 128)))
									{	/* Llib/unicode.scm 1425 */
										if (CBOOL(BgL_tablez00_130))
											{	/* Llib/unicode.scm 1427 */
												long BgL_vz00_2543;

												BgL_vz00_2543 = (BgL_cz00_2535 - ((long) 128));
												if (
													(BgL_vz00_2543 <
														VECTOR_LENGTH(((obj_t) BgL_tablez00_130))))
													{	/* Llib/unicode.scm 1429 */
														obj_t BgL_encz00_2546;

														BgL_encz00_2546 =
															VECTOR_REF(
															((obj_t) BgL_tablez00_130), BgL_vz00_2543);
														{	/* Llib/unicode.scm 1429 */
															long BgL_lenz00_2547;

															BgL_lenz00_2547 =
																STRING_LENGTH(((obj_t) BgL_encz00_2546));
															{	/* Llib/unicode.scm 1430 */

																blit_string(
																	((obj_t) BgL_encz00_2546), ((long) 0),
																	BgL_nstrz00_127, BgL_wz00_2532,
																	BgL_lenz00_2547);
																{
																	long BgL_wz00_10444;
																	long BgL_rz00_10442;

																	BgL_rz00_10442 = (BgL_rz00_2531 + ((long) 1));
																	BgL_wz00_10444 =
																		(BgL_wz00_2532 + BgL_lenz00_2547);
																	BgL_wz00_2532 = BgL_wz00_10444;
																	BgL_rz00_2531 = BgL_rz00_10442;
																	goto BgL_zc3z04anonymousza32298ze3z87_2533;
																}
															}
														}
													}
												else
													{	/* Llib/unicode.scm 1428 */
														STRING_SET(BgL_nstrz00_127, BgL_wz00_2532,
															((unsigned char) 194));
														{	/* Llib/unicode.scm 1435 */
															unsigned char BgL_auxz00_10449;
															long BgL_tmpz00_10447;

															BgL_auxz00_10449 = (BgL_cz00_2535);
															BgL_tmpz00_10447 = (BgL_wz00_2532 + ((long) 1));
															STRING_SET(BgL_nstrz00_127, BgL_tmpz00_10447,
																BgL_auxz00_10449);
														}
														{
															long BgL_wz00_10454;
															long BgL_rz00_10452;

															BgL_rz00_10452 = (BgL_rz00_2531 + ((long) 1));
															BgL_wz00_10454 = (BgL_wz00_2532 + ((long) 2));
															BgL_wz00_2532 = BgL_wz00_10454;
															BgL_rz00_2531 = BgL_rz00_10452;
															goto BgL_zc3z04anonymousza32298ze3z87_2533;
														}
													}
											}
										else
											{	/* Llib/unicode.scm 1426 */
												STRING_SET(BgL_nstrz00_127, BgL_wz00_2532,
													((unsigned char) 194));
												{	/* Llib/unicode.scm 1439 */
													unsigned char BgL_auxz00_10459;
													long BgL_tmpz00_10457;

													BgL_auxz00_10459 = (BgL_cz00_2535);
													BgL_tmpz00_10457 = (BgL_wz00_2532 + ((long) 1));
													STRING_SET(BgL_nstrz00_127, BgL_tmpz00_10457,
														BgL_auxz00_10459);
												}
												{
													long BgL_wz00_10464;
													long BgL_rz00_10462;

													BgL_rz00_10462 = (BgL_rz00_2531 + ((long) 1));
													BgL_wz00_10464 = (BgL_wz00_2532 + ((long) 2));
													BgL_wz00_2532 = BgL_wz00_10464;
													BgL_rz00_2531 = BgL_rz00_10462;
													goto BgL_zc3z04anonymousza32298ze3z87_2533;
												}
											}
									}
								else
									{	/* Llib/unicode.scm 1425 */
										{	/* Llib/unicode.scm 1442 */
											unsigned char BgL_tmpz00_10466;

											BgL_tmpz00_10466 = (BgL_cz00_2535);
											STRING_SET(BgL_nstrz00_127, BgL_wz00_2532,
												BgL_tmpz00_10466);
										}
										{
											long BgL_wz00_10471;
											long BgL_rz00_10469;

											BgL_rz00_10469 = (BgL_rz00_2531 + ((long) 1));
											BgL_wz00_10471 = (BgL_wz00_2532 + ((long) 1));
											BgL_wz00_2532 = BgL_wz00_10471;
											BgL_rz00_2531 = BgL_rz00_10469;
											goto BgL_zc3z04anonymousza32298ze3z87_2533;
										}
									}
							}
					}
			}
		}

	}



/* 8bits->utf8 */
	BGL_EXPORTED_DEF obj_t BGl_8bitszd2ze3utf8z31zz__unicodez00(obj_t
		BgL_strz00_131, obj_t BgL_tablez00_132)
	{
		{	/* Llib/unicode.scm 1448 */
			{	/* Llib/unicode.scm 1449 */
				long BgL_lenz00_6530;

				BgL_lenz00_6530 = STRING_LENGTH(BgL_strz00_131);
				{	/* Llib/unicode.scm 1449 */
					long BgL_nlenz00_6531;

					BgL_nlenz00_6531 =
						BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_131,
						BgL_lenz00_6530, BgL_tablez00_132);
					{	/* Llib/unicode.scm 1450 */

						if ((BgL_lenz00_6530 == BgL_nlenz00_6531))
							{	/* Llib/unicode.scm 1451 */
								return
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_131);
							}
						else
							{	/* Llib/unicode.scm 1451 */
								return
									BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00
									(make_string_sans_fill(BgL_nlenz00_6531), BgL_strz00_131,
									BgL_lenz00_6530, BgL_tablez00_132);
							}
					}
				}
			}
		}

	}



/* &8bits->utf8 */
	obj_t BGl_z628bitszd2ze3utf8z53zz__unicodez00(obj_t BgL_envz00_7042,
		obj_t BgL_strz00_7043, obj_t BgL_tablez00_7044)
	{
		{	/* Llib/unicode.scm 1448 */
			{	/* Llib/unicode.scm 1449 */
				obj_t BgL_auxz00_10480;

				if (STRINGP(BgL_strz00_7043))
					{	/* Llib/unicode.scm 1449 */
						BgL_auxz00_10480 = BgL_strz00_7043;
					}
				else
					{
						obj_t BgL_auxz00_10483;

						BgL_auxz00_10483 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 57908)), BGl_string4225z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_strz00_7043);
						FAILURE(BgL_auxz00_10483, BFALSE, BFALSE);
					}
				return
					BGl_8bitszd2ze3utf8z31zz__unicodez00(BgL_auxz00_10480,
					BgL_tablez00_7044);
			}
		}

	}



/* 8bits->utf8! */
	BGL_EXPORTED_DEF obj_t BGl_8bitszd2ze3utf8z12z23zz__unicodez00(obj_t
		BgL_strz00_133, obj_t BgL_tablez00_134)
	{
		{	/* Llib/unicode.scm 1458 */
			{	/* Llib/unicode.scm 1459 */
				long BgL_lenz00_6539;

				BgL_lenz00_6539 = STRING_LENGTH(BgL_strz00_133);
				{	/* Llib/unicode.scm 1459 */
					long BgL_nlenz00_6540;

					BgL_nlenz00_6540 =
						BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_133,
						BgL_lenz00_6539, BgL_tablez00_134);
					{	/* Llib/unicode.scm 1460 */

						if ((BgL_lenz00_6539 == BgL_nlenz00_6540))
							{	/* Llib/unicode.scm 1461 */
								return BgL_strz00_133;
							}
						else
							{	/* Llib/unicode.scm 1461 */
								return
									BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00
									(make_string_sans_fill(BgL_nlenz00_6540), BgL_strz00_133,
									BgL_lenz00_6539, BgL_tablez00_134);
							}
					}
				}
			}
		}

	}



/* &8bits->utf8! */
	obj_t BGl_z628bitszd2ze3utf8z12z41zz__unicodez00(obj_t BgL_envz00_7045,
		obj_t BgL_strz00_7046, obj_t BgL_tablez00_7047)
	{
		{	/* Llib/unicode.scm 1458 */
			{	/* Llib/unicode.scm 1459 */
				obj_t BgL_auxz00_10494;

				if (STRINGP(BgL_strz00_7046))
					{	/* Llib/unicode.scm 1459 */
						BgL_auxz00_10494 = BgL_strz00_7046;
					}
				else
					{
						obj_t BgL_auxz00_10497;

						BgL_auxz00_10497 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 58360)), BGl_string4226z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_strz00_7046);
						FAILURE(BgL_auxz00_10497, BFALSE, BFALSE);
					}
				return
					BGl_8bitszd2ze3utf8z12z23zz__unicodez00(BgL_auxz00_10494,
					BgL_tablez00_7047);
			}
		}

	}



/* iso-latin->utf8 */
	BGL_EXPORTED_DEF obj_t BGl_isozd2latinzd2ze3utf8ze3zz__unicodez00(obj_t
		BgL_strz00_135)
	{
		{	/* Llib/unicode.scm 1468 */
			{	/* Llib/unicode.scm 1469 */
				obj_t BgL_res3763z00_6558;

				{	/* Llib/unicode.scm 1449 */
					long BgL_lenz00_6549;

					BgL_lenz00_6549 = STRING_LENGTH(BgL_strz00_135);
					{	/* Llib/unicode.scm 1449 */
						long BgL_nlenz00_6550;

						BgL_nlenz00_6550 =
							BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_135,
							BgL_lenz00_6549, BFALSE);
						{	/* Llib/unicode.scm 1450 */

							if ((BgL_lenz00_6549 == BgL_nlenz00_6550))
								{	/* Llib/unicode.scm 1451 */
									BgL_res3763z00_6558 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_135);
								}
							else
								{	/* Llib/unicode.scm 1451 */
									BgL_res3763z00_6558 =
										BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00
										(make_string_sans_fill(BgL_nlenz00_6550), BgL_strz00_135,
										BgL_lenz00_6549, BFALSE);
								}
						}
					}
				}
				return BgL_res3763z00_6558;
			}
		}

	}



/* &iso-latin->utf8 */
	obj_t BGl_z62isozd2latinzd2ze3utf8z81zz__unicodez00(obj_t BgL_envz00_7048,
		obj_t BgL_strz00_7049)
	{
		{	/* Llib/unicode.scm 1468 */
			{	/* Llib/unicode.scm 1469 */
				obj_t BgL_auxz00_10509;

				if (STRINGP(BgL_strz00_7049))
					{	/* Llib/unicode.scm 1469 */
						BgL_auxz00_10509 = BgL_strz00_7049;
					}
				else
					{
						obj_t BgL_auxz00_10512;

						BgL_auxz00_10512 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 58795)), BGl_string4227z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_strz00_7049);
						FAILURE(BgL_auxz00_10512, BFALSE, BFALSE);
					}
				return BGl_isozd2latinzd2ze3utf8ze3zz__unicodez00(BgL_auxz00_10509);
			}
		}

	}



/* iso-latin->utf8! */
	BGL_EXPORTED_DEF obj_t BGl_isozd2latinzd2ze3utf8z12zf1zz__unicodez00(obj_t
		BgL_strz00_136)
	{
		{	/* Llib/unicode.scm 1474 */
			{	/* Llib/unicode.scm 1475 */
				obj_t BgL_res3766z00_6569;

				{	/* Llib/unicode.scm 1459 */
					long BgL_lenz00_6560;

					BgL_lenz00_6560 = STRING_LENGTH(BgL_strz00_136);
					{	/* Llib/unicode.scm 1459 */
						long BgL_nlenz00_6561;

						BgL_nlenz00_6561 =
							BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_136,
							BgL_lenz00_6560, BFALSE);
						{	/* Llib/unicode.scm 1460 */

							if ((BgL_lenz00_6560 == BgL_nlenz00_6561))
								{	/* Llib/unicode.scm 1461 */
									BgL_res3766z00_6569 = BgL_strz00_136;
								}
							else
								{	/* Llib/unicode.scm 1461 */
									BgL_res3766z00_6569 =
										BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00
										(make_string_sans_fill(BgL_nlenz00_6561), BgL_strz00_136,
										BgL_lenz00_6560, BFALSE);
								}
						}
					}
				}
				return BgL_res3766z00_6569;
			}
		}

	}



/* &iso-latin->utf8! */
	obj_t BGl_z62isozd2latinzd2ze3utf8z12z93zz__unicodez00(obj_t BgL_envz00_7050,
		obj_t BgL_strz00_7051)
	{
		{	/* Llib/unicode.scm 1474 */
			{	/* Llib/unicode.scm 1475 */
				obj_t BgL_auxz00_10523;

				if (STRINGP(BgL_strz00_7051))
					{	/* Llib/unicode.scm 1475 */
						BgL_auxz00_10523 = BgL_strz00_7051;
					}
				else
					{
						obj_t BgL_auxz00_10526;

						BgL_auxz00_10526 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 59077)), BGl_string4228z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_strz00_7051);
						FAILURE(BgL_auxz00_10526, BFALSE, BFALSE);
					}
				return BGl_isozd2latinzd2ze3utf8z12zf1zz__unicodez00(BgL_auxz00_10523);
			}
		}

	}



/* cp1252->utf8 */
	BGL_EXPORTED_DEF obj_t BGl_cp1252zd2ze3utf8z31zz__unicodez00(obj_t
		BgL_strz00_137)
	{
		{	/* Llib/unicode.scm 1480 */
			{	/* Llib/unicode.scm 1481 */
				obj_t BgL_res3769z00_6581;

				{	/* Llib/unicode.scm 1481 */
					obj_t BgL_tablez00_6571;

					BgL_tablez00_6571 = BGl_vector4115z00zz__unicodez00;
					{	/* Llib/unicode.scm 1449 */
						long BgL_lenz00_6572;

						BgL_lenz00_6572 = STRING_LENGTH(BgL_strz00_137);
						{	/* Llib/unicode.scm 1449 */
							long BgL_nlenz00_6573;

							BgL_nlenz00_6573 =
								BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_137,
								BgL_lenz00_6572, BgL_tablez00_6571);
							{	/* Llib/unicode.scm 1450 */

								if ((BgL_lenz00_6572 == BgL_nlenz00_6573))
									{	/* Llib/unicode.scm 1451 */
										BgL_res3769z00_6581 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_strz00_137);
									}
								else
									{	/* Llib/unicode.scm 1451 */
										BgL_res3769z00_6581 =
											BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00
											(make_string_sans_fill(BgL_nlenz00_6573), BgL_strz00_137,
											BgL_lenz00_6572, BgL_tablez00_6571);
									}
							}
						}
					}
				}
				return BgL_res3769z00_6581;
			}
		}

	}



/* &cp1252->utf8 */
	obj_t BGl_z62cp1252zd2ze3utf8z53zz__unicodez00(obj_t BgL_envz00_7052,
		obj_t BgL_strz00_7053)
	{
		{	/* Llib/unicode.scm 1480 */
			{	/* Llib/unicode.scm 1481 */
				obj_t BgL_auxz00_10538;

				if (STRINGP(BgL_strz00_7053))
					{	/* Llib/unicode.scm 1481 */
						BgL_auxz00_10538 = BgL_strz00_7053;
					}
				else
					{
						obj_t BgL_auxz00_10541;

						BgL_auxz00_10541 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 59353)), BGl_string4229z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_strz00_7053);
						FAILURE(BgL_auxz00_10541, BFALSE, BFALSE);
					}
				return BGl_cp1252zd2ze3utf8z31zz__unicodez00(BgL_auxz00_10538);
			}
		}

	}



/* cp1252->utf8! */
	BGL_EXPORTED_DEF obj_t BGl_cp1252zd2ze3utf8z12z23zz__unicodez00(obj_t
		BgL_strz00_138)
	{
		{	/* Llib/unicode.scm 1486 */
			{	/* Llib/unicode.scm 1487 */
				obj_t BgL_res3772z00_6593;

				{	/* Llib/unicode.scm 1487 */
					obj_t BgL_tablez00_6583;

					BgL_tablez00_6583 = BGl_vector4115z00zz__unicodez00;
					{	/* Llib/unicode.scm 1459 */
						long BgL_lenz00_6584;

						BgL_lenz00_6584 = STRING_LENGTH(BgL_strz00_138);
						{	/* Llib/unicode.scm 1459 */
							long BgL_nlenz00_6585;

							BgL_nlenz00_6585 =
								BGl_8bitszd2ze3utf8zd2lengthze3zz__unicodez00(BgL_strz00_138,
								BgL_lenz00_6584, BgL_tablez00_6583);
							{	/* Llib/unicode.scm 1460 */

								if ((BgL_lenz00_6584 == BgL_nlenz00_6585))
									{	/* Llib/unicode.scm 1461 */
										BgL_res3772z00_6593 = BgL_strz00_138;
									}
								else
									{	/* Llib/unicode.scm 1461 */
										BgL_res3772z00_6593 =
											BGl_8bitszd2ze3utf8zd2fillz12zf1zz__unicodez00
											(make_string_sans_fill(BgL_nlenz00_6585), BgL_strz00_138,
											BgL_lenz00_6584, BgL_tablez00_6583);
									}
							}
						}
					}
				}
				return BgL_res3772z00_6593;
			}
		}

	}



/* &cp1252->utf8! */
	obj_t BGl_z62cp1252zd2ze3utf8z12z41zz__unicodez00(obj_t BgL_envz00_7054,
		obj_t BgL_strz00_7055)
	{
		{	/* Llib/unicode.scm 1486 */
			{	/* Llib/unicode.scm 1487 */
				obj_t BgL_auxz00_10552;

				if (STRINGP(BgL_strz00_7055))
					{	/* Llib/unicode.scm 1487 */
						BgL_auxz00_10552 = BgL_strz00_7055;
					}
				else
					{
						obj_t BgL_auxz00_10555;

						BgL_auxz00_10555 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 59636)), BGl_string4230z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_strz00_7055);
						FAILURE(BgL_auxz00_10555, BFALSE, BFALSE);
					}
				return BGl_cp1252zd2ze3utf8z12z23zz__unicodez00(BgL_auxz00_10552);
			}
		}

	}



/* string-minimal-charset */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2minimalzd2charsetz00zz__unicodez00(obj_t
		BgL_strz00_139)
	{
		{	/* Llib/unicode.scm 1495 */
			{
				long BgL_iz00_2574;

				BgL_iz00_2574 = (STRING_LENGTH(BgL_strz00_139) - ((long) 1));
			BgL_zc3z04anonymousza32332ze3z87_2575:
				if ((BgL_iz00_2574 == ((long) -1)))
					{	/* Llib/unicode.scm 1498 */
						return BGl_symbol4189z00zz__unicodez00;
					}
				else
					{	/* Llib/unicode.scm 1498 */
						if (
							(STRING_REF(BgL_strz00_139,
									BgL_iz00_2574) <= ((unsigned char) '')))
							{
								long BgL_iz00_10565;

								BgL_iz00_10565 = (BgL_iz00_2574 - ((long) 1));
								BgL_iz00_2574 = BgL_iz00_10565;
								goto BgL_zc3z04anonymousza32332ze3z87_2575;
							}
						else
							{	/* Llib/unicode.scm 1499 */
								return BGl_symbol4231z00zz__unicodez00;
							}
					}
			}
		}

	}



/* &string-minimal-charset */
	obj_t BGl_z62stringzd2minimalzd2charsetz62zz__unicodez00(obj_t
		BgL_envz00_7056, obj_t BgL_strz00_7057)
	{
		{	/* Llib/unicode.scm 1495 */
			{	/* Llib/unicode.scm 1496 */
				obj_t BgL_auxz00_10569;

				if (STRINGP(BgL_strz00_7057))
					{	/* Llib/unicode.scm 1496 */
						BgL_auxz00_10569 = BgL_strz00_7057;
					}
				else
					{
						obj_t BgL_auxz00_10572;

						BgL_auxz00_10572 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 60148)), BGl_string4233z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_strz00_7057);
						FAILURE(BgL_auxz00_10572, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2minimalzd2charsetz00zz__unicodez00(BgL_auxz00_10569);
			}
		}

	}



/* utf8-string-minimal-charset */
	BGL_EXPORTED_DEF obj_t
		BGl_utf8zd2stringzd2minimalzd2charsetzd2zz__unicodez00(obj_t BgL_strz00_140)
	{
		{	/* Llib/unicode.scm 1508 */
			{	/* Llib/unicode.scm 1510 */
				long BgL_lenz00_2583;

				BgL_lenz00_2583 = (STRING_LENGTH(BgL_strz00_140) - ((long) 1));
				{
					long BgL_iz00_2586;
					obj_t BgL_charsetz00_2587;

					BgL_iz00_2586 = ((long) 0);
					BgL_charsetz00_2587 = BGl_symbol4189z00zz__unicodez00;
				BgL_zc3z04anonymousza32339ze3z87_2588:
					if ((BgL_iz00_2586 >= BgL_lenz00_2583))
						{	/* Llib/unicode.scm 1513 */
							return BgL_charsetz00_2587;
						}
					else
						{	/* Llib/unicode.scm 1515 */
							long BgL_nz00_2590;

							BgL_nz00_2590 = (STRING_REF(BgL_strz00_140, BgL_iz00_2586));
							if ((BgL_nz00_2590 <= ((long) 127)))
								{
									long BgL_iz00_10585;

									BgL_iz00_10585 = (BgL_iz00_2586 + ((long) 1));
									BgL_iz00_2586 = BgL_iz00_10585;
									goto BgL_zc3z04anonymousza32339ze3z87_2588;
								}
							else
								{	/* Llib/unicode.scm 1519 */
									bool_t BgL_test4798z00_10587;

									if ((BgL_nz00_2590 == ((long) 194)))
										{	/* Llib/unicode.scm 1519 */
											BgL_test4798z00_10587 = ((bool_t) 1);
										}
									else
										{	/* Llib/unicode.scm 1519 */
											BgL_test4798z00_10587 = (BgL_nz00_2590 == ((long) 195));
										}
									if (BgL_test4798z00_10587)
										{	/* Llib/unicode.scm 1520 */
											long BgL_mz00_2595;

											BgL_mz00_2595 =
												(STRING_REF(BgL_strz00_140,
													(BgL_iz00_2586 + ((long) 1))));
											{	/* Llib/unicode.scm 1521 */
												bool_t BgL_test4800z00_10594;

												if ((BgL_mz00_2595 >= ((long) 128)))
													{	/* Llib/unicode.scm 1521 */
														BgL_test4800z00_10594 =
															(BgL_mz00_2595 <= ((long) 191));
													}
												else
													{	/* Llib/unicode.scm 1521 */
														BgL_test4800z00_10594 = ((bool_t) 0);
													}
												if (BgL_test4800z00_10594)
													{
														obj_t BgL_charsetz00_10600;
														long BgL_iz00_10598;

														BgL_iz00_10598 = (BgL_iz00_2586 + ((long) 2));
														BgL_charsetz00_10600 =
															BGl_symbol4231z00zz__unicodez00;
														BgL_charsetz00_2587 = BgL_charsetz00_10600;
														BgL_iz00_2586 = BgL_iz00_10598;
														goto BgL_zc3z04anonymousza32339ze3z87_2588;
													}
												else
													{	/* Llib/unicode.scm 1521 */
														return BGl_symbol4196z00zz__unicodez00;
													}
											}
										}
									else
										{	/* Llib/unicode.scm 1519 */
											return BGl_symbol4196z00zz__unicodez00;
										}
								}
						}
				}
			}
		}

	}



/* &utf8-string-minimal-charset */
	obj_t BGl_z62utf8zd2stringzd2minimalzd2charsetzb0zz__unicodez00(obj_t
		BgL_envz00_7058, obj_t BgL_strz00_7059)
	{
		{	/* Llib/unicode.scm 1508 */
			{	/* Llib/unicode.scm 1510 */
				obj_t BgL_auxz00_10601;

				if (STRINGP(BgL_strz00_7059))
					{	/* Llib/unicode.scm 1510 */
						BgL_auxz00_10601 = BgL_strz00_7059;
					}
				else
					{
						obj_t BgL_auxz00_10604;

						BgL_auxz00_10604 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 60849)), BGl_string4234z00zz__unicodez00,
							BGl_string4188z00zz__unicodez00, BgL_strz00_7059);
						FAILURE(BgL_auxz00_10604, BFALSE, BFALSE);
					}
				return
					BGl_utf8zd2stringzd2minimalzd2charsetzd2zz__unicodez00
					(BgL_auxz00_10601);
			}
		}

	}



/* ucs2-string-minimal-charset */
	BGL_EXPORTED_DEF obj_t
		BGl_ucs2zd2stringzd2minimalzd2charsetzd2zz__unicodez00(obj_t BgL_strz00_141)
	{
		{	/* Llib/unicode.scm 1533 */
			{	/* Llib/unicode.scm 1535 */
				long BgL_lenz00_2606;

				BgL_lenz00_2606 =
					((long) (UCS2_STRING_LENGTH(BgL_strz00_141)) - ((long) 1));
				{
					long BgL_iz00_2609;
					obj_t BgL_charsetz00_2610;

					BgL_iz00_2609 = ((long) 0);
					BgL_charsetz00_2610 = BGl_symbol4189z00zz__unicodez00;
				BgL_zc3z04anonymousza32353ze3z87_2611:
					if ((BgL_iz00_2609 >= BgL_lenz00_2606))
						{	/* Llib/unicode.scm 1538 */
							return BgL_charsetz00_2610;
						}
					else
						{	/* Llib/unicode.scm 1540 */
							int BgL_nz00_2613;

							{	/* Llib/unicode.scm 1540 */
								ucs2_t BgL_arg2364z00_2624;

								{	/* Llib/unicode.scm 274 */
									int BgL_tmpz00_10614;

									BgL_tmpz00_10614 = (int) (BgL_iz00_2609);
									BgL_arg2364z00_2624 =
										UCS2_STRING_REF(BgL_strz00_141, BgL_tmpz00_10614);
								}
								{	/* Llib/unicode.scm 1540 */
									int BgL_res3798z00_6652;

									{	/* Llib/unicode.scm 1540 */
										obj_t BgL_tmpz00_10617;

										BgL_tmpz00_10617 = BUCS2(BgL_arg2364z00_2624);
										BgL_res3798z00_6652 = CUCS2(BgL_tmpz00_10617);
									}
									BgL_nz00_2613 = BgL_res3798z00_6652;
							}}
							if (((long) (BgL_nz00_2613) <= ((long) 127)))
								{
									long BgL_iz00_10623;

									BgL_iz00_10623 = (BgL_iz00_2609 + ((long) 1));
									BgL_iz00_2609 = BgL_iz00_10623;
									goto BgL_zc3z04anonymousza32353ze3z87_2611;
								}
							else
								{	/* Llib/unicode.scm 1542 */
									if (((long) (BgL_nz00_2613) <= ((long) 255)))
										{
											obj_t BgL_charsetz00_10630;
											long BgL_iz00_10628;

											BgL_iz00_10628 = (BgL_iz00_2609 + ((long) 1));
											if (
												(BgL_charsetz00_2610 ==
													BGl_symbol4235z00zz__unicodez00))
												{	/* Llib/unicode.scm 1545 */
													BgL_charsetz00_10630 =
														BGl_symbol4235z00zz__unicodez00;
												}
											else
												{	/* Llib/unicode.scm 1545 */
													BgL_charsetz00_10630 =
														BGl_symbol4231z00zz__unicodez00;
												}
											BgL_charsetz00_2610 = BgL_charsetz00_10630;
											BgL_iz00_2609 = BgL_iz00_10628;
											goto BgL_zc3z04anonymousza32353ze3z87_2611;
										}
									else
										{	/* Llib/unicode.scm 1546 */
											bool_t BgL_test4807z00_10633;

											if (((long) (BgL_nz00_2613) < ((long) 56320)))
												{	/* Llib/unicode.scm 1546 */
													BgL_test4807z00_10633 = ((bool_t) 1);
												}
											else
												{	/* Llib/unicode.scm 1546 */
													BgL_test4807z00_10633 =
														((long) (BgL_nz00_2613) > ((long) 56319));
												}
											if (BgL_test4807z00_10633)
												{
													obj_t BgL_charsetz00_10641;
													long BgL_iz00_10639;

													BgL_iz00_10639 = (BgL_iz00_2609 + ((long) 1));
													BgL_charsetz00_10641 =
														BGl_symbol4235z00zz__unicodez00;
													BgL_charsetz00_2610 = BgL_charsetz00_10641;
													BgL_iz00_2609 = BgL_iz00_10639;
													goto BgL_zc3z04anonymousza32353ze3z87_2611;
												}
											else
												{	/* Llib/unicode.scm 1546 */
													return BGl_symbol4237z00zz__unicodez00;
												}
										}
								}
						}
				}
			}
		}

	}



/* &ucs2-string-minimal-charset */
	obj_t BGl_z62ucs2zd2stringzd2minimalzd2charsetzb0zz__unicodez00(obj_t
		BgL_envz00_7060, obj_t BgL_strz00_7061)
	{
		{	/* Llib/unicode.scm 1533 */
			{	/* Llib/unicode.scm 1535 */
				obj_t BgL_auxz00_10642;

				if (UCS2_STRINGP(BgL_strz00_7061))
					{	/* Llib/unicode.scm 1535 */
						BgL_auxz00_10642 = BgL_strz00_7061;
					}
				else
					{
						obj_t BgL_auxz00_10645;

						BgL_auxz00_10645 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string4145z00zz__unicodez00,
							BINT(((long) 61851)), BGl_string4239z00zz__unicodez00,
							BGl_string4150z00zz__unicodez00, BgL_strz00_7061);
						FAILURE(BgL_auxz00_10645, BFALSE, BFALSE);
					}
				return
					BGl_ucs2zd2stringzd2minimalzd2charsetzd2zz__unicodez00
					(BgL_auxz00_10642);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__unicodez00()
	{
		{	/* Llib/unicode.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__unicodez00()
	{
		{	/* Llib/unicode.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__unicodez00()
	{
		{	/* Llib/unicode.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__unicodez00()
	{
		{	/* Llib/unicode.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string4240z00zz__unicodez00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string4240z00zz__unicodez00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string4240z00zz__unicodez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string4240z00zz__unicodez00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string4240z00zz__unicodez00));
		}

	}

#ifdef __cplusplus
}
#endif
