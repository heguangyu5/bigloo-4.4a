/*===========================================================================*/
/*   (Unsafe/intext.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/intext.scm -indent -o objs/obj_u/Unsafe/intext.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */

	extern long BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t, long);
	extern obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl_symbol3294z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3296z00zz__intextz00 = BUNSPEC;
	extern obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long, uint8_t);
	static obj_t BGl_checkzd2siza7ez12ze70z80zz__intextz00(obj_t, obj_t, long,
		long, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31862ze3ze5zz__intextz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31919ze3ze5zz__intextz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2serializa7erz75zz__intextz00(BgL_objectz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2opaquezd2serializa7ationza7zz__intextz00();
	static BGL_LONGLONG_T BGl_readzd2longzd2wordze70ze7zz__intextz00(obj_t, obj_t,
		long, obj_t, int);
	extern obj_t BGl_makezd2s16vectorzd2zz__srfi4z00(long, int16_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__intextz00 = BUNSPEC;
	static long BGl_siza7ezd2ofzd2wordza7zz__intextz00(long);
	static obj_t BGl_z62printzd2pairzb0zz__intextz00(obj_t, obj_t, obj_t);
	static long BGl_za2maxzd2siza7ezd2wordza2za7zz__intextz00;
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl_printzd2objzd2zz__intextz00(obj_t, long, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern ucs2_t BGl_integerzd2ze3ucs2z31zz__ucs2z00(int);
	static obj_t BGl_z62zc3z04anonymousza31929ze3ze5zz__intextz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31597ze3ze5zz__intextz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2classzd2serializa7ationz12zb5zz__intextz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2procedurezd2serializa7ationza7zz__intextz00();
	extern bool_t BGl_classzd2fieldzd2defaultzd2valuezf3z21zz__objectz00(obj_t);
	extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t weakptr_data(obj_t);
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl__stringzd2ze3objz31zz__intextz00(obj_t, obj_t);
	extern obj_t bgl_seconds_to_date(long);
	extern obj_t BGl_vectorzd2ze3tvectorz31zz__tvectorz00(obj_t, obj_t);
	static obj_t BGl_stringzd2guardz12ze70z27zz__intextz00(obj_t, long, obj_t,
		long);
	static obj_t BGl_toplevelzd2initzd2zz__intextz00();
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_assvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2classzd2serializa7ationza7zz__intextz00(obj_t);
	static obj_t BGl_z62setzd2objzd2stringzd2modez12za2zz__intextz00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__intextz00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62objectzd2serializa7er1196z17zz__intextz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62printzd2cellzb0zz__intextz00(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, obj_t);
	static obj_t BGl_z62getzd2customzd2serializa7ationzc5zz__intextz00(obj_t,
		obj_t);
	extern obj_t BGl_tvectorzd2ze3vectorz31zz__tvectorz00(obj_t);
	static obj_t BGl_objectzd2initzd2zz__intextz00();
	BGL_EXPORTED_DECL obj_t string_to_obj(obj_t, obj_t, obj_t);
	extern obj_t string_to_keyword(char *);
	extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_readzd2stringze70z35zz__intextz00(obj_t, obj_t, obj_t, obj_t,
		long, obj_t);
	extern obj_t BGl_createzd2hashtablezd2zz__hashz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_markze70ze7zz__intextz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2objzd2stringzd2modez12zc0zz__intextz00(obj_t);
	static obj_t BGl_excerptz00zz__intextz00(obj_t);
	extern obj_t BGl_pregexpz00zz__regexpz00(obj_t, obj_t);
	extern obj_t BGl_makezd2u32vectorzd2zz__srfi4z00(long, uint32_t);
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2procedurezd2serializa7ationz12zb5zz__intextz00(obj_t, obj_t);
	static long BGl_markedzd2pairzd2lengthz00zz__intextz00(obj_t, obj_t);
	extern BGL_LONGLONG_T bgl_date_to_nanoseconds(obj_t);
	extern obj_t BGl_makezd2u64vectorzd2zz__srfi4z00(long, uint64_t);
	static obj_t
		BGl_z62zc3z04za2stringzd2ze3processza2za31290ze3zd4zz__intextz00(obj_t,
		obj_t);
	static double BGl_readzd2floatze70z35zz__intextz00(obj_t, obj_t, long, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl__objzd2ze3stringz31zz__intextz00(obj_t, obj_t);
	extern obj_t make_vector(long, obj_t);
	extern obj_t BGl_classzd2fieldzd2mutatorz00zz__objectz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32036ze3ze5zz__intextz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31896ze3ze5zz__intextz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__intextz00();
	extern bool_t BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(obj_t);
	static obj_t BGl_z62getzd2procedurezd2serializa7ationzc5zz__intextz00(obj_t);
	extern obj_t BGl_classzd2fieldzd2namez00zz__objectz00(obj_t);
	static obj_t BGl_z62printzd2customzb0zz__intextz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_tvectorzd2idzd2zz__tvectorz00(obj_t);
	BGL_EXPORTED_DECL obj_t obj_to_string(obj_t, obj_t);
	extern long BGl_classzd2hashzd2zz__objectz00(obj_t);
	extern obj_t make_string(long, unsigned char);
	static obj_t BGl_z62objectzd2serializa7erz17zz__intextz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04za2processzd2ze3stringza2za31288ze3zd4zz__intextz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32063ze3ze5zz__intextz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04za2stringzd2ze3procedure1286ze3zd5zz__intextz00(obj_t, obj_t);
	extern obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_classzd2fieldzd2accessorz00zz__objectz00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2f32vectorzd2zz__srfi4z00(long, float);
	static obj_t BGl_z62printzd2itemzb0zz__intextz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static long BGl_markzd2objz12zc0zz__intextz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32065ze3ze5zz__intextz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2customzd2serializa7ationza7zz__intextz00(obj_t);
	extern obj_t BGl_classzd2fieldzd2infoz00zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2serializa7ationzd2substringza7zz__intextz00(obj_t, long, long);
	extern obj_t BGl_makezd2f64vectorzd2zz__srfi4z00(long, double);
	static obj_t
		BGl_z62registerzd2customzd2serializa7ationz12zd7zz__intextz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04za2opaquezd2ze3stringza2za31292ze3zd4zz__intextz00(obj_t,
		obj_t);
	static obj_t BGl_vector3301z00zz__intextz00 = BUNSPEC;
	extern obj_t BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		obj_t);
	extern obj_t BGl_classzd2fieldzd2typez00zz__objectz00(obj_t);
	extern obj_t BGl_makezd2u16vectorzd2zz__srfi4z00(long, uint16_t);
	static obj_t BGl_za2classzd2serializa7ationza2z75zz__intextz00 = BUNSPEC;
	extern obj_t BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		long);
	static bool_t BGl_z62printzd2wordzf2siza7eze5zz__intextz00(obj_t, obj_t,
		obj_t, long);
	extern obj_t BGl_makezd2s8vectorzd2zz__srfi4z00(long, int8_t);
	extern BgL_objectz00_bglt BGl_allocatezd2instancezd2zz__objectz00(obj_t);
	extern obj_t string_for_read(obj_t);
	static obj_t BGl_z62printzd2hvectorzb0zz__intextz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62registerzd2opaquezd2serializa7ationz12zd7zz__intextz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__intextz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__urlz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern bool_t BGl_classzf3zf3zz__objectz00(obj_t);
	extern obj_t ucs2_string_to_utf8_string(obj_t);
	extern obj_t bgl_nanoseconds_to_date(BGL_LONGLONG_T);
	static obj_t BGl_z62zc3z04anonymousza32069ze3ze5zz__intextz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62registerzd2procedurezd2serializa7ationz12zd7zz__intextz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2stringzd2ze3procedureza2z31zz__intextz00 = BUNSPEC;
	static obj_t BGl_z62printzd2classzb0zz__intextz00(obj_t, obj_t, obj_t);
	extern obj_t create_struct(obj_t, int);
	static obj_t
		BGl_z62zc3z04za2procedurezd2ze3string1284ze3zd5zz__intextz00(obj_t, obj_t);
	extern obj_t utf8_string_to_ucs2_string(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__intextz00();
	static obj_t BGl_z62printzd2objectzb0zz__intextz00(obj_t, obj_t, obj_t);
	static obj_t BGl_findzd2classzd2unserializa7erza7zz__intextz00(obj_t);
	static obj_t
		BGl_z62zc3z04za2stringzd2ze3opaqueza2za31296ze3zd4zz__intextz00(obj_t,
		obj_t);
	static obj_t BGl_z62getzd2classzd2serializa7ationzc5zz__intextz00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__intextz00();
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2processzd2serializa7ationz12zb5zz__intextz00(obj_t, obj_t);
	static obj_t BGl_z62z12printzd2markupza2zz__intextz00(obj_t, obj_t,
		unsigned char);
	static obj_t BGl_importedzd2moduleszd2initz00zz__intextz00();
	static obj_t
		BGl_z62registerzd2processzd2serializa7ationz12zd7zz__intextz00(obj_t, obj_t,
		obj_t);
	extern obj_t make_weakptr(obj_t);
	extern obj_t BGl_findzd2classzd2zz__objectz00(obj_t);
	static obj_t BGl_readzd2itemze70z35zz__intextz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, long);
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2customzd2serializa7ationz12zb5zz__intextz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62registerzd2classzd2serializa7ationz12zd7zz__intextz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
	extern obj_t BGl_objectz00zz__objectz00;
	static obj_t BGl_z62getzd2opaquezd2serializa7ationzc5zz__intextz00(obj_t);
	extern obj_t BGl_makezd2s32vectorzd2zz__srfi4z00(long, int32_t);
	static obj_t BGl_za2processzd2ze3stringza2z31zz__intextz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2opaquezd2serializa7ationz12zb5zz__intextz00(obj_t, obj_t);
	extern obj_t BGl_makezd2s64vectorzd2zz__srfi4z00(long, int64_t);
	extern obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	extern obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
	static obj_t BGl_keyword3352z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3317z00zz__intextz00 = BUNSPEC;
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_symbol3319z00zz__intextz00 = BUNSPEC;
	extern obj_t BGl_stringzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		long);
	static obj_t BGl_z62checkzd2bufferz12za2zz__intextz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62printzd2vectorzb0zz__intextz00(obj_t, obj_t, obj_t);
	extern obj_t make_struct(obj_t, int, obj_t);
	extern obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2stringzd2ze3processza2z31zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3321z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3323z00zz__intextz00 = BUNSPEC;
	static bool_t BGl_za2epairzf3za2zf3zz__intextz00;
	static obj_t BGl_symbol3325z00zz__intextz00 = BUNSPEC;
	extern obj_t BGl_urlzd2decodezd2zz__urlz00(obj_t);
	static obj_t BGl_symbol3327z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3329z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_za2stringzd2ze3opaqueza2z31zz__intextz00 = BUNSPEC;
	static obj_t BGl_za2opaquezd2ze3stringza2z31zz__intextz00 = BUNSPEC;
	static obj_t BGl_z62printzd2tvectorzb0zz__intextz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	static obj_t BGl_z62zc3z04anonymousza31922ze3ze5zz__intextz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3331z00zz__intextz00 = BUNSPEC;
	extern BGL_LONGLONG_T
		BGl_stringzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(obj_t, long);
	static obj_t BGl_symbol3333z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3335z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_z62printzd2wordzb0zz__intextz00(obj_t, obj_t, long);
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl_z62printzd2weakptrzb0zz__intextz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol3346z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3349z00zz__intextz00 = BUNSPEC;
	extern void weakptr_data_set(obj_t, obj_t);
	static obj_t BGl_symbol3354z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_za2customzd2serializa7ationza2z75zz__intextz00 = BUNSPEC;
	static obj_t BGl_symbol3357z00zz__intextz00 = BUNSPEC;
	static obj_t BGl_za2procedurezd2ze3stringza2z31zz__intextz00 = BUNSPEC;
	extern obj_t bgl_real_to_string(double);
	static obj_t BGl_z62makezd2serializa7ationzd2substringzc5zz__intextz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62printzd2epairzb0zz__intextz00(obj_t, obj_t, obj_t);
	static long BGl_readzd2wordze70z35zz__intextz00(obj_t, obj_t, long, obj_t,
		int);
	static obj_t BGl_z62z12printzd2charsza2zz__intextz00(obj_t, obj_t, obj_t,
		long);
	extern obj_t make_string_sans_fill(long);
	static obj_t BGl_z62zc3z04anonymousza31925ze3ze5zz__intextz00(obj_t, obj_t,
		obj_t);
	static long BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00(obj_t, obj_t, long,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_objzd2ze3stringzd2envze3zz__intextz00,
		BgL_bgl__objza7d2za7e3string3379z00, opt_generic_entry,
		BGl__objzd2ze3stringz31zz__intextz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2procedurezd2serializa7ationz12zd2envz67zz__intextz00,
		BgL_bgl_za762registerza7d2pr3380z00,
		BGl_z62registerzd2procedurezd2serializa7ationz12zd7zz__intextz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3300z00zz__intextz00,
		BgL_bgl_string3300za700za7za7_3381za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3302z00zz__intextz00,
		BgL_bgl_string3302za700za7za7_3382za7, "definitions", 11);
	      DEFINE_STRING(BGl_string3303z00zz__intextz00,
		BgL_bgl_string3303za700za7za7_3383za7, "float", 5);
	      DEFINE_STRING(BGl_string3304z00zz__intextz00,
		BgL_bgl_string3304za700za7za7_3384za7, "+nan.0", 6);
	      DEFINE_STRING(BGl_string3305z00zz__intextz00,
		BgL_bgl_string3305za700za7za7_3385za7, "+inf.0", 6);
	      DEFINE_STRING(BGl_string3306z00zz__intextz00,
		BgL_bgl_string3306za700za7za7_3386za7, "-inf.0", 6);
	      DEFINE_STRING(BGl_string3307z00zz__intextz00,
		BgL_bgl_string3307za700za7za7_3387za7, "string", 6);
	      DEFINE_STRING(BGl_string3308z00zz__intextz00,
		BgL_bgl_string3308za700za7za7_3388za7, "object", 6);
	      DEFINE_STRING(BGl_string3309z00zz__intextz00,
		BgL_bgl_string3309za700za7za7_3389za7, "corrupted class, wrong fields", 29);
	      DEFINE_STRING(BGl_string3310z00zz__intextz00,
		BgL_bgl_string3310za700za7za7_3390za7, "corrupted class, bad signature",
		30);
	      DEFINE_STRING(BGl_string3311z00zz__intextz00,
		BgL_bgl_string3311za700za7za7_3391za7, "structure", 9);
	      DEFINE_STRING(BGl_string3312z00zz__intextz00,
		BgL_bgl_string3312za700za7za7_3392za7, "extended-list", 13);
	      DEFINE_STRING(BGl_string3313z00zz__intextz00,
		BgL_bgl_string3313za700za7za7_3393za7, "list", 4);
	      DEFINE_STRING(BGl_string3314z00zz__intextz00,
		BgL_bgl_string3314za700za7za7_3394za7, "tagged-vector", 13);
	      DEFINE_STRING(BGl_string3315z00zz__intextz00,
		BgL_bgl_string3315za700za7za7_3395za7, "hvector", 7);
	      DEFINE_STRING(BGl_string3316z00zz__intextz00,
		BgL_bgl_string3316za700za7za7_3396za7, "hvector-size", 12);
	      DEFINE_STRING(BGl_string3318z00zz__intextz00,
		BgL_bgl_string3318za700za7za7_3397za7, "s8", 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2procedurezd2serializa7ationzd2envz75zz__intextz00,
		BgL_bgl_za762getza7d2procedu3398z00,
		BGl_z62getzd2procedurezd2serializa7ationzc5zz__intextz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3320z00zz__intextz00,
		BgL_bgl_string3320za700za7za7_3399za7, "u8", 2);
	      DEFINE_STRING(BGl_string3322z00zz__intextz00,
		BgL_bgl_string3322za700za7za7_3400za7, "s16", 3);
	      DEFINE_STRING(BGl_string3324z00zz__intextz00,
		BgL_bgl_string3324za700za7za7_3401za7, "u16", 3);
	      DEFINE_STRING(BGl_string3326z00zz__intextz00,
		BgL_bgl_string3326za700za7za7_3402za7, "s32", 3);
	      DEFINE_STRING(BGl_string3328z00zz__intextz00,
		BgL_bgl_string3328za700za7za7_3403za7, "u32", 3);
	      DEFINE_REAL(BGl_real3348z00zz__intextz00,
		BgL_bgl_real3348za700za7za7__i3404za7, 1.2);
	      DEFINE_STRING(BGl_string3330z00zz__intextz00,
		BgL_bgl_string3330za700za7za7_3405za7, "s64", 3);
	      DEFINE_STRING(BGl_string3332z00zz__intextz00,
		BgL_bgl_string3332za700za7za7_3406za7, "u64", 3);
	      DEFINE_STRING(BGl_string3334z00zz__intextz00,
		BgL_bgl_string3334za700za7za7_3407za7, "f32", 3);
	      DEFINE_STRING(BGl_string3336z00zz__intextz00,
		BgL_bgl_string3336za700za7za7_3408za7, "f64", 3);
	      DEFINE_STRING(BGl_string3337z00zz__intextz00,
		BgL_bgl_string3337za700za7za7_3409za7, "vector", 6);
	      DEFINE_STRING(BGl_string3338z00zz__intextz00,
		BgL_bgl_string3338za700za7za7_3410za7, "llong", 5);
	      DEFINE_STRING(BGl_string3339z00zz__intextz00,
		BgL_bgl_string3339za700za7za7_3411za7, "elong", 5);
	      DEFINE_STRING(BGl_string3340z00zz__intextz00,
		BgL_bgl_string3340za700za7za7_3412za7, "Cannot find custom unserializer",
		31);
	      DEFINE_STRING(BGl_string3341z00zz__intextz00,
		BgL_bgl_string3341za700za7za7_3413za7, "Cannot unserialize custom object",
		32);
	      DEFINE_STRING(BGl_string3342z00zz__intextz00,
		BgL_bgl_string3342za700za7za7_3414za7, "bignum", 6);
	      DEFINE_STRING(BGl_string3343z00zz__intextz00,
		BgL_bgl_string3343za700za7za7_3415za7,
		"Corrupted string (~a) at index ~a/~a", 36);
	      DEFINE_STRING(BGl_string3344z00zz__intextz00,
		BgL_bgl_string3344za700za7za7_3416za7,
		"Corrupted string (~a) at index ~a/~a ~a", 39);
	      DEFINE_STRING(BGl_string3347z00zz__intextz00,
		BgL_bgl_string3347za700za7za7_3417za7, "none", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2processzd2serializa7ationz12zd2envz67zz__intextz00,
		BgL_bgl_za762registerza7d2pr3418z00,
		BGl_z62registerzd2processzd2serializa7ationz12zd7zz__intextz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3345z00zz__intextz00,
		BgL_bgl_za762za7c3za704anonymo3419za7,
		BGl_z62zc3z04anonymousza31597ze3ze5zz__intextz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3350z00zz__intextz00,
		BgL_bgl_string3350za700za7za7_3420za7, "__serialization-substring", 25);
	      DEFINE_STRING(BGl_string3351z00zz__intextz00,
		BgL_bgl_string3351za700za7za7_3421za7, "Unknown object", 14);
	      DEFINE_STRING(BGl_string3353z00zz__intextz00,
		BgL_bgl_string3353za700za7za7_3422za7, "serialize", 9);
	      DEFINE_STRING(BGl_string3355z00zz__intextz00,
		BgL_bgl_string3355za700za7za7_3423za7, "obj", 3);
	      DEFINE_STRING(BGl_string3356z00zz__intextz00,
		BgL_bgl_string3356za700za7za7_3424za7,
		"Bad type \"~a\" for unserialized field", 36);
	      DEFINE_STRING(BGl_string3358z00zz__intextz00,
		BgL_bgl_string3358za700za7za7_3425za7, "mark", 4);
	      DEFINE_STRING(BGl_string3359z00zz__intextz00,
		BgL_bgl_string3359za700za7za7_3426za7, "Cannot find custom serializer", 29);
	      DEFINE_STRING(BGl_string3360z00zz__intextz00,
		BgL_bgl_string3360za700za7za7_3427za7, "&make-serialization-substring", 29);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2serializa7ationzd2substringzd2envz75zz__intextz00,
		BgL_bgl_za762makeza7d2serial3428z00,
		BGl_z62makezd2serializa7ationzd2substringzc5zz__intextz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string3361z00zz__intextz00,
		BgL_bgl_string3361za700za7za7_3429za7, "bint", 4);
	      DEFINE_STRING(BGl_string3362z00zz__intextz00,
		BgL_bgl_string3362za700za7za7_3430za7, "register-custom-serialization!",
		30);
	      DEFINE_STRING(BGl_string3363z00zz__intextz00,
		BgL_bgl_string3363za700za7za7_3431za7, "bad arity", 9);
	      DEFINE_STRING(BGl_string3364z00zz__intextz00,
		BgL_bgl_string3364za700za7za7_3432za7, "&register-custom-serialization!",
		31);
	      DEFINE_STRING(BGl_string3365z00zz__intextz00,
		BgL_bgl_string3365za700za7za7_3433za7, "procedure", 9);
	      DEFINE_STRING(BGl_string3366z00zz__intextz00,
		BgL_bgl_string3366za700za7za7_3434za7, "...", 3);
	      DEFINE_STRING(BGl_string3367z00zz__intextz00,
		BgL_bgl_string3367za700za7za7_3435za7, "&get-custom-serialization", 25);
	      DEFINE_STRING(BGl_string3286z00zz__intextz00,
		BgL_bgl_string3286za700za7za7_3436za7, "string->obj", 11);
	      DEFINE_STRING(BGl_string3368z00zz__intextz00,
		BgL_bgl_string3368za700za7za7_3437za7, "&register-procedure-serialization!",
		34);
	      DEFINE_STRING(BGl_string3287z00zz__intextz00,
		BgL_bgl_string3287za700za7za7_3438za7, "Cannot intern opaque item", 25);
	      DEFINE_STRING(BGl_string3369z00zz__intextz00,
		BgL_bgl_string3369za700za7za7_3439za7, "&register-process-serialization!",
		32);
	      DEFINE_STRING(BGl_string3288z00zz__intextz00,
		BgL_bgl_string3288za700za7za7_3440za7, "obj->string", 11);
	      DEFINE_STRING(BGl_string3289z00zz__intextz00,
		BgL_bgl_string3289za700za7za7_3441za7, "Cannot extern opaque", 20);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3280z00zz__intextz00,
		BgL_bgl_za762za7c3za704za7a2proc3442z00,
		BGl_z62zc3z04za2procedurezd2ze3string1284ze3zd5zz__intextz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3281z00zz__intextz00,
		BgL_bgl_za762za7c3za704za7a2stri3443z00,
		BGl_z62zc3z04za2stringzd2ze3procedure1286ze3zd5zz__intextz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3282z00zz__intextz00,
		BgL_bgl_za762za7c3za704za7a2proc3444z00,
		BGl_z62zc3z04za2processzd2ze3stringza2za31288ze3zd4zz__intextz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3283z00zz__intextz00,
		BgL_bgl_za762za7c3za704za7a2stri3445z00,
		BGl_z62zc3z04za2stringzd2ze3processza2za31290ze3zd4zz__intextz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3284z00zz__intextz00,
		BgL_bgl_za762za7c3za704za7a2opaq3446z00,
		BGl_z62zc3z04za2opaquezd2ze3stringza2za31292ze3zd4zz__intextz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3370z00zz__intextz00,
		BgL_bgl_string3370za700za7za7_3447za7, "&register-opaque-serialization!",
		31);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3285z00zz__intextz00,
		BgL_bgl_za762za7c3za704za7a2stri3448z00,
		BGl_z62zc3z04za2stringzd2ze3opaqueza2za31296ze3zd4zz__intextz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3371z00zz__intextz00,
		BgL_bgl_string3371za700za7za7_3449za7, "register-class-serialization!", 29);
	      DEFINE_STRING(BGl_string3290z00zz__intextz00,
		BgL_bgl_string3290za700za7za7_3450za7, "Cannot intern process item", 26);
	      DEFINE_STRING(BGl_string3372z00zz__intextz00,
		BgL_bgl_string3372za700za7za7_3451za7, "-serializer", 11);
	      DEFINE_STRING(BGl_string3291z00zz__intextz00,
		BgL_bgl_string3291za700za7za7_3452za7, "cannot extern process", 21);
	      DEFINE_STRING(BGl_string3373z00zz__intextz00,
		BgL_bgl_string3373za700za7za7_3453za7, "&register-class-serialization!",
		30);
	      DEFINE_STRING(BGl_string3292z00zz__intextz00,
		BgL_bgl_string3292za700za7za7_3454za7, "Cannott intern procedure item", 29);
	      DEFINE_STRING(BGl_string3374z00zz__intextz00,
		BgL_bgl_string3374za700za7za7_3455za7, "Cannot find class unserializer",
		30);
	      DEFINE_STRING(BGl_string3293z00zz__intextz00,
		BgL_bgl_string3293za700za7za7_3456za7, "Cannot extern procedure", 23);
	      DEFINE_STRING(BGl_string3376z00zz__intextz00,
		BgL_bgl_string3376za700za7za7_3457za7, "object-serializer1196", 21);
	      DEFINE_STRING(BGl_string3295z00zz__intextz00,
		BgL_bgl_string3295za700za7za7_3458za7, "epair", 5);
	      DEFINE_STRING(BGl_string3377z00zz__intextz00,
		BgL_bgl_string3377za700za7za7_3459za7, "&object-serializer", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2opaquezd2serializa7ationzd2envz75zz__intextz00,
		BgL_bgl_za762getza7d2opaqueza73460za7,
		BGl_z62getzd2opaquezd2serializa7ationzc5zz__intextz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3378z00zz__intextz00,
		BgL_bgl_string3378za700za7za7_3461za7, "__intext", 8);
	      DEFINE_STRING(BGl_string3297z00zz__intextz00,
		BgL_bgl_string3297za700za7za7_3462za7, "pair", 4);
	      DEFINE_STRING(BGl_string3298z00zz__intextz00,
		BgL_bgl_string3298za700za7za7_3463za7,
		"/tmp/4.4a/runtime/Unsafe/intext.scm", 35);
	      DEFINE_STRING(BGl_string3299z00zz__intextz00,
		BgL_bgl_string3299za700za7za7_3464za7, "_string->obj", 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3375z00zz__intextz00,
		BgL_bgl_za762objectza7d2seri3465z00,
		BGl_z62objectzd2serializa7er1196z17zz__intextz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2classzd2serializa7ationz12zd2envz67zz__intextz00,
		BgL_bgl_za762registerza7d2cl3466z00,
		BGl_z62registerzd2classzd2serializa7ationz12zd7zz__intextz00, 0L, BUNSPEC,
		3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2objzd2stringzd2modez12zd2envz12zz__intextz00,
		BgL_bgl_za762setza7d2objza7d2s3467za7,
		BGl_z62setzd2objzd2stringzd2modez12za2zz__intextz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_objectzd2serializa7erzd2envza7zz__intextz00,
		BgL_bgl_za762objectza7d2seri3468z00,
		BGl_z62objectzd2serializa7erz17zz__intextz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2ze3objzd2envze3zz__intextz00,
		BgL_bgl__stringza7d2za7e3obj3469z00, opt_generic_entry,
		BGl__stringzd2ze3objz31zz__intextz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2customzd2serializa7ationz12zd2envz67zz__intextz00,
		BgL_bgl_za762registerza7d2cu3470z00,
		BGl_z62registerzd2customzd2serializa7ationz12zd7zz__intextz00, 0L, BUNSPEC,
		3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2customzd2serializa7ationzd2envz75zz__intextz00,
		BgL_bgl_za762getza7d2customza73471za7,
		BGl_z62getzd2customzd2serializa7ationzc5zz__intextz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2opaquezd2serializa7ationz12zd2envz67zz__intextz00,
		BgL_bgl_za762registerza7d2op3472z00,
		BGl_z62registerzd2opaquezd2serializa7ationz12zd7zz__intextz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2classzd2serializa7ationzd2envz75zz__intextz00,
		BgL_bgl_za762getza7d2classza7d3473za7,
		BGl_z62getzd2classzd2serializa7ationzc5zz__intextz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol3294z00zz__intextz00));
		     ADD_ROOT((void *) (&BGl_symbol3296z00zz__intextz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__intextz00));
		     ADD_ROOT((void *) (&BGl_vector3301z00zz__intextz00));
		   
			 ADD_ROOT((void *) (&BGl_za2classzd2serializa7ationza2z75zz__intextz00));
		     ADD_ROOT((void *) (&BGl_za2stringzd2ze3procedureza2z31zz__intextz00));
		     ADD_ROOT((void *) (&BGl_za2processzd2ze3stringza2z31zz__intextz00));
		     ADD_ROOT((void *) (&BGl_keyword3352z00zz__intextz00));
		     ADD_ROOT((void *) (&BGl_symbol3317z00zz__intextz00));
		     ADD_ROOT((void *) (&BGl_symbol3319z00zz__intextz00));
		     ADD_ROOT((void *) (&BGl_za2stringzd2ze3processza2z31zz__intextz00));
		     ADD_ROOT((void *) (&BGl_symbol3321z00zz__intextz00));
		     ADD_ROOT((void *) (&BGl_symbol3323z00zz__intextz00));
		     ADD_ROOT((void *) (&BGl_symbol3325z00zz__intextz00));
		     ADD_ROOT((void *) (&BGl_symbol3327z00zz__intextz00));
		     ADD_ROOT((void *) (&BGl_symbol3329z00zz__intextz00));
		     ADD_ROOT((void *) (&BGl_za2stringzd2ze3opaqueza2z31zz__intextz00));
		     ADD_ROOT((void *) (&BGl_za2opaquezd2ze3stringza2z31zz__intextz00));
		     ADD_ROOT((void *) (&BGl_symbol3331z00zz__intextz00));
		     ADD_ROOT((void *) (&BGl_symbol3333z00zz__intextz00));
		     ADD_ROOT((void *) (&BGl_symbol3335z00zz__intextz00));
		     ADD_ROOT((void *) (&BGl_symbol3346z00zz__intextz00));
		     ADD_ROOT((void *) (&BGl_symbol3349z00zz__intextz00));
		     ADD_ROOT((void *) (&BGl_symbol3354z00zz__intextz00));
		   
			 ADD_ROOT((void *) (&BGl_za2customzd2serializa7ationza2z75zz__intextz00));
		     ADD_ROOT((void *) (&BGl_symbol3357z00zz__intextz00));
		     ADD_ROOT((void *) (&BGl_za2procedurezd2ze3stringza2z31zz__intextz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__intextz00(long
		BgL_checksumz00_7759, char *BgL_fromz00_7760)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__intextz00))
				{
					BGl_requirezd2initializa7ationz75zz__intextz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__intextz00();
					BGl_cnstzd2initzd2zz__intextz00();
					BGl_importedzd2moduleszd2initz00zz__intextz00();
					BGl_genericzd2initzd2zz__intextz00();
					return BGl_toplevelzd2initzd2zz__intextz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__intextz00()
	{
		{	/* Unsafe/intext.scm 20 */
			BGl_symbol3294z00zz__intextz00 =
				bstring_to_symbol(BGl_string3295z00zz__intextz00);
			BGl_symbol3296z00zz__intextz00 =
				bstring_to_symbol(BGl_string3297z00zz__intextz00);
			BGl_vector3301z00zz__intextz00 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BNIL);
			BGl_symbol3317z00zz__intextz00 =
				bstring_to_symbol(BGl_string3318z00zz__intextz00);
			BGl_symbol3319z00zz__intextz00 =
				bstring_to_symbol(BGl_string3320z00zz__intextz00);
			BGl_symbol3321z00zz__intextz00 =
				bstring_to_symbol(BGl_string3322z00zz__intextz00);
			BGl_symbol3323z00zz__intextz00 =
				bstring_to_symbol(BGl_string3324z00zz__intextz00);
			BGl_symbol3325z00zz__intextz00 =
				bstring_to_symbol(BGl_string3326z00zz__intextz00);
			BGl_symbol3327z00zz__intextz00 =
				bstring_to_symbol(BGl_string3328z00zz__intextz00);
			BGl_symbol3329z00zz__intextz00 =
				bstring_to_symbol(BGl_string3330z00zz__intextz00);
			BGl_symbol3331z00zz__intextz00 =
				bstring_to_symbol(BGl_string3332z00zz__intextz00);
			BGl_symbol3333z00zz__intextz00 =
				bstring_to_symbol(BGl_string3334z00zz__intextz00);
			BGl_symbol3335z00zz__intextz00 =
				bstring_to_symbol(BGl_string3336z00zz__intextz00);
			BGl_symbol3346z00zz__intextz00 =
				bstring_to_symbol(BGl_string3347z00zz__intextz00);
			BGl_symbol3349z00zz__intextz00 =
				bstring_to_symbol(BGl_string3350z00zz__intextz00);
			BGl_keyword3352z00zz__intextz00 =
				bstring_to_keyword(BGl_string3353z00zz__intextz00);
			BGl_symbol3354z00zz__intextz00 =
				bstring_to_symbol(BGl_string3355z00zz__intextz00);
			return (BGl_symbol3357z00zz__intextz00 =
				bstring_to_symbol(BGl_string3358z00zz__intextz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__intextz00()
	{
		{	/* Unsafe/intext.scm 20 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__intextz00()
	{
		{	/* Unsafe/intext.scm 20 */
			BGl_za2epairzf3za2zf3zz__intextz00 = ((bool_t) 1);
			BGl_za2maxzd2siza7ezd2wordza2za7zz__intextz00 = sizeof(long);
			BGl_za2customzd2serializa7ationza2z75zz__intextz00 = BNIL;
			BGl_za2procedurezd2ze3stringza2z31zz__intextz00 =
				BGl_proc3280z00zz__intextz00;
			BGl_za2stringzd2ze3procedureza2z31zz__intextz00 =
				BGl_proc3281z00zz__intextz00;
			BGl_za2processzd2ze3stringza2z31zz__intextz00 =
				BGl_proc3282z00zz__intextz00;
			BGl_za2stringzd2ze3processza2z31zz__intextz00 =
				BGl_proc3283z00zz__intextz00;
			BGl_za2opaquezd2ze3stringza2z31zz__intextz00 =
				BGl_proc3284z00zz__intextz00;
			BGl_za2stringzd2ze3opaqueza2z31zz__intextz00 =
				BGl_proc3285z00zz__intextz00;
			return (BGl_za2classzd2serializa7ationza2z75zz__intextz00 =
				BNIL, BUNSPEC);
		}

	}



/* &<@*string->opaque*:1296> */
	obj_t BGl_z62zc3z04za2stringzd2ze3opaqueza2za31296ze3zd4zz__intextz00(obj_t
		BgL_envz00_6949, obj_t BgL_stringz00_6950)
	{
		{	/* Unsafe/intext.scm 1465 */
			return
				BGl_errorz00zz__errorz00(BGl_string3286z00zz__intextz00,
				BGl_string3287z00zz__intextz00, BgL_stringz00_6950);
		}

	}



/* &<@*opaque->string*:1292> */
	obj_t BGl_z62zc3z04za2opaquezd2ze3stringza2za31292ze3zd4zz__intextz00(obj_t
		BgL_envz00_6951, obj_t BgL_itemz00_6952)
	{
		{	/* Unsafe/intext.scm 1458 */
			return
				BGl_errorz00zz__errorz00(BGl_string3288z00zz__intextz00,
				BGl_string3289z00zz__intextz00,
				BGl_excerptz00zz__intextz00(BgL_itemz00_6952));
		}

	}



/* &<@*string->process*:1290> */
	obj_t BGl_z62zc3z04za2stringzd2ze3processza2za31290ze3zd4zz__intextz00(obj_t
		BgL_envz00_6953, obj_t BgL_stringz00_6954)
	{
		{	/* Unsafe/intext.scm 1438 */
			return
				BGl_errorz00zz__errorz00(BGl_string3286z00zz__intextz00,
				BGl_string3290z00zz__intextz00,
				BGl_excerptz00zz__intextz00(BgL_stringz00_6954));
		}

	}



/* &<@*process->string*:1288> */
	obj_t BGl_z62zc3z04za2processzd2ze3stringza2za31288ze3zd4zz__intextz00(obj_t
		BgL_envz00_6955, obj_t BgL_itemz00_6956)
	{
		{	/* Unsafe/intext.scm 1431 */
			return
				BGl_errorz00zz__errorz00(BGl_string3288z00zz__intextz00,
				BGl_string3291z00zz__intextz00,
				BGl_excerptz00zz__intextz00(BgL_itemz00_6956));
		}

	}



/* &<@*string->procedure1286> */
	obj_t BGl_z62zc3z04za2stringzd2ze3procedure1286ze3zd5zz__intextz00(obj_t
		BgL_envz00_6957, obj_t BgL_stringz00_6958)
	{
		{	/* Unsafe/intext.scm 1411 */
			return
				BGl_errorz00zz__errorz00(BGl_string3286z00zz__intextz00,
				BGl_string3292z00zz__intextz00,
				BGl_excerptz00zz__intextz00(BgL_stringz00_6958));
		}

	}



/* &<@*procedure->string1284> */
	obj_t BGl_z62zc3z04za2procedurezd2ze3string1284ze3zd5zz__intextz00(obj_t
		BgL_envz00_6959, obj_t BgL_itemz00_6960)
	{
		{	/* Unsafe/intext.scm 1404 */
			return
				BGl_errorz00zz__errorz00(BGl_string3288z00zz__intextz00,
				BGl_string3293z00zz__intextz00,
				BGl_excerptz00zz__intextz00(BgL_itemz00_6960));
		}

	}



/* set-obj-string-mode! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2objzd2stringzd2modez12zc0zz__intextz00(obj_t
		BgL_modez00_17)
	{
		{	/* Unsafe/intext.scm 143 */
			if ((BgL_modez00_17 == BGl_symbol3294z00zz__intextz00))
				{	/* Unsafe/intext.scm 144 */
					return (BGl_za2epairzf3za2zf3zz__intextz00 = ((bool_t) 1), BUNSPEC);
				}
			else
				{	/* Unsafe/intext.scm 144 */
					if ((BgL_modez00_17 == BGl_symbol3296z00zz__intextz00))
						{	/* Unsafe/intext.scm 144 */
							return (BGl_za2epairzf3za2zf3zz__intextz00 =
								((bool_t) 0), BUNSPEC);
						}
					else
						{	/* Unsafe/intext.scm 144 */
							return BUNSPEC;
						}
				}
		}

	}



/* &set-obj-string-mode! */
	obj_t BGl_z62setzd2objzd2stringzd2modez12za2zz__intextz00(obj_t
		BgL_envz00_6961, obj_t BgL_modez00_6962)
	{
		{	/* Unsafe/intext.scm 143 */
			return BGl_setzd2objzd2stringzd2modez12zc0zz__intextz00(BgL_modez00_6962);
		}

	}



/* _string->obj */
	obj_t BGl__stringzd2ze3objz31zz__intextz00(obj_t BgL_env1187z00_22,
		obj_t BgL_opt1186z00_21)
	{
		{	/* Unsafe/intext.scm 153 */
			{	/* Unsafe/intext.scm 153 */
				obj_t BgL_g1188z00_1466;

				BgL_g1188z00_1466 = VECTOR_REF(BgL_opt1186z00_21, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1186z00_21))
					{
					case ((long) 1):

						{	/* Unsafe/intext.scm 153 */

							{	/* Unsafe/intext.scm 153 */
								obj_t BgL_auxz00_7805;

								if (STRINGP(BgL_g1188z00_1466))
									{	/* Unsafe/intext.scm 153 */
										BgL_auxz00_7805 = BgL_g1188z00_1466;
									}
								else
									{
										obj_t BgL_auxz00_7808;

										BgL_auxz00_7808 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3298z00zz__intextz00, BINT(((long) 5579)),
											BGl_string3299z00zz__intextz00,
											BGl_string3300z00zz__intextz00, BgL_g1188z00_1466);
										FAILURE(BgL_auxz00_7808, BFALSE, BFALSE);
									}
								return string_to_obj(BgL_auxz00_7805, BFALSE, BFALSE);
							}
						}
						break;
					case ((long) 2):

						{	/* Unsafe/intext.scm 153 */
							obj_t BgL_extensionz00_1472;

							BgL_extensionz00_1472 = VECTOR_REF(BgL_opt1186z00_21, ((long) 1));
							{	/* Unsafe/intext.scm 153 */

								{	/* Unsafe/intext.scm 153 */
									obj_t BgL_auxz00_7814;

									if (STRINGP(BgL_g1188z00_1466))
										{	/* Unsafe/intext.scm 153 */
											BgL_auxz00_7814 = BgL_g1188z00_1466;
										}
									else
										{
											obj_t BgL_auxz00_7817;

											BgL_auxz00_7817 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3298z00zz__intextz00, BINT(((long) 5579)),
												BGl_string3299z00zz__intextz00,
												BGl_string3300z00zz__intextz00, BgL_g1188z00_1466);
											FAILURE(BgL_auxz00_7817, BFALSE, BFALSE);
										}
									return
										string_to_obj(BgL_auxz00_7814, BgL_extensionz00_1472,
										BFALSE);
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/intext.scm 153 */
							obj_t BgL_extensionz00_1474;

							BgL_extensionz00_1474 = VECTOR_REF(BgL_opt1186z00_21, ((long) 1));
							{	/* Unsafe/intext.scm 153 */
								obj_t BgL_unserializa7ezd2argz75_1475;

								BgL_unserializa7ezd2argz75_1475 =
									VECTOR_REF(BgL_opt1186z00_21, ((long) 2));
								{	/* Unsafe/intext.scm 153 */

									{	/* Unsafe/intext.scm 153 */
										obj_t BgL_auxz00_7824;

										if (STRINGP(BgL_g1188z00_1466))
											{	/* Unsafe/intext.scm 153 */
												BgL_auxz00_7824 = BgL_g1188z00_1466;
											}
										else
											{
												obj_t BgL_auxz00_7827;

												BgL_auxz00_7827 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3298z00zz__intextz00, BINT(((long) 5579)),
													BGl_string3299z00zz__intextz00,
													BGl_string3300z00zz__intextz00, BgL_g1188z00_1466);
												FAILURE(BgL_auxz00_7827, BFALSE, BFALSE);
											}
										return
											string_to_obj(BgL_auxz00_7824, BgL_extensionz00_1474,
											BgL_unserializa7ezd2argz75_1475);
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



/* string->obj */
	BGL_EXPORTED_DEF obj_t string_to_obj(obj_t BgL_sz00_18,
		obj_t BgL_extensionz00_19, obj_t BgL_unserializa7ezd2argz75_20)
	{
		{	/* Unsafe/intext.scm 153 */
			{	/* Unsafe/intext.scm 87 */
				struct bgl_cell BgL_box3480_7424z00;
				obj_t BgL_za2pointerza2z00_7424;

				BgL_za2pointerza2z00_7424 =
					MAKE_CELL_STACK(BINT(((long) 0)), BgL_box3480_7424z00);
				{	/* Unsafe/intext.scm 162 */
					struct bgl_cell BgL_box3481_7425z00;
					obj_t BgL_za2definitionsza2z00_7425;

					BgL_za2definitionsza2z00_7425 =
						MAKE_CELL_STACK(BGl_vector3301z00zz__intextz00,
						BgL_box3481_7425z00);
					{	/* Unsafe/intext.scm 87 */
						struct bgl_cell BgL_box3482_7426z00;
						obj_t BgL_za2definingza2z00_7426;

						BgL_za2definingza2z00_7426 =
							MAKE_CELL_STACK(BFALSE, BgL_box3482_7426z00);
						{	/* Unsafe/intext.scm 159 */
							long BgL_za2strlenza2z00_1479;

							BgL_za2strlenza2z00_1479 = STRING_LENGTH(BgL_sz00_18);
							BGl_stringzd2guardz12ze70z27zz__intextz00(BgL_sz00_18,
								BgL_za2strlenza2z00_1479, BgL_za2pointerza2z00_7424,
								((long) 1));
							{	/* Unsafe/intext.scm 619 */
								unsigned char BgL_dz00_1524;

								BgL_dz00_1524 =
									STRING_REF(BgL_sz00_18,
									(long) CINT(CELL_REF(BgL_za2pointerza2z00_7424)));
								if ((BgL_dz00_1524 == ((unsigned char) 'c')))
									{	/* Unsafe/intext.scm 620 */
										{	/* Unsafe/intext.scm 621 */
											obj_t BgL_auxz00_7427;

											BgL_auxz00_7427 =
												ADDFX(CELL_REF(BgL_za2pointerza2z00_7424),
												BINT(((long) 1)));
											CELL_SET(BgL_za2pointerza2z00_7424, BgL_auxz00_7427);
										}
										{	/* Unsafe/intext.scm 622 */
											obj_t BgL_auxz00_7428;

											{	/* Unsafe/intext.scm 622 */
												long BgL_arg1315z00_1526;

												{	/* Unsafe/intext.scm 234 */
													long BgL_siza7eza7_4127;

													BgL_siza7eza7_4127 =
														BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
														(BgL_za2pointerza2z00_7424, BgL_sz00_18,
														BgL_za2strlenza2z00_1479, BgL_sz00_18);
													BGl_checkzd2siza7ez12ze70z80zz__intextz00(BgL_sz00_18,
														BgL_za2pointerza2z00_7424, BgL_za2strlenza2z00_1479,
														BgL_siza7eza7_4127, BGl_string3302z00zz__intextz00);
													BgL_arg1315z00_1526 = BgL_siza7eza7_4127;
												}
												BgL_auxz00_7428 =
													make_vector(BgL_arg1315z00_1526, BUNSPEC);
											}
											CELL_SET(BgL_za2definitionsza2z00_7425, BgL_auxz00_7428);
									}}
								else
									{	/* Unsafe/intext.scm 620 */
										BFALSE;
									}
							}
							return
								BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_19,
								BgL_sz00_18, BgL_za2definitionsza2z00_7425,
								BgL_unserializa7ezd2argz75_20, BgL_za2definingza2z00_7426,
								BgL_za2pointerza2z00_7424, BgL_za2strlenza2z00_1479);
						}
					}
				}
			}
		}

	}



/* read-float~0 */
	double BGl_readzd2floatze70z35zz__intextz00(obj_t BgL_za2pointerza2z00_7371,
		obj_t BgL_sz00_7370, long BgL_za2strlenza2z00_7369, obj_t BgL_sz00_1553)
	{
		{	/* Unsafe/intext.scm 191 */
			{	/* Unsafe/intext.scm 188 */
				long BgL_sza7za7_1555;

				{	/* Unsafe/intext.scm 234 */
					long BgL_siza7eza7_3447;

					BgL_siza7eza7_3447 =
						BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
						(BgL_za2pointerza2z00_7371, BgL_sz00_7370, BgL_za2strlenza2z00_7369,
						BgL_sz00_1553);
					BGl_checkzd2siza7ez12ze70z80zz__intextz00(BgL_sz00_7370,
						BgL_za2pointerza2z00_7371, BgL_za2strlenza2z00_7369,
						BgL_siza7eza7_3447, BGl_string3303z00zz__intextz00);
					BgL_sza7za7_1555 = BgL_siza7eza7_3447;
				}
				{	/* Unsafe/intext.scm 188 */
					double BgL_resz00_1556;

					{	/* Unsafe/intext.scm 189 */
						obj_t BgL_arg1342z00_1557;

						{	/* Unsafe/intext.scm 189 */
							long BgL_arg1343z00_1558;

							{	/* Unsafe/intext.scm 189 */
								long BgL_za71za7_3448;

								BgL_za71za7_3448 =
									(long) CINT(CELL_REF(BgL_za2pointerza2z00_7371));
								BgL_arg1343z00_1558 = (BgL_za71za7_3448 + BgL_sza7za7_1555);
							}
							{	/* Unsafe/intext.scm 189 */
								obj_t BgL_res2478z00_3454;

								{	/* Unsafe/intext.scm 189 */
									long BgL_startz00_3452;

									BgL_startz00_3452 =
										(long) CINT(CELL_REF(BgL_za2pointerza2z00_7371));
									BgL_res2478z00_3454 =
										c_substring(BgL_sz00_1553, BgL_startz00_3452,
										BgL_arg1343z00_1558);
								}
								BgL_arg1342z00_1557 = BgL_res2478z00_3454;
						}}
						{	/* Unsafe/intext.scm 189 */
							double BgL_res2494z00_3507;

							{	/* Unsafe/intext.scm 189 */
								char *BgL_stringz00_3455;

								BgL_stringz00_3455 = BSTRING_TO_STRING(BgL_arg1342z00_1557);
								{	/* Unsafe/intext.scm 189 */
									bool_t BgL_test3484z00_7854;

									{	/* Unsafe/intext.scm 189 */
										bool_t BgL_res2483z00_3474;

										{	/* Unsafe/intext.scm 189 */
											obj_t BgL_string1z00_3459;

											BgL_string1z00_3459 =
												string_to_bstring(BgL_stringz00_3455);
											{	/* Unsafe/intext.scm 189 */
												long BgL_l1z00_3461;

												BgL_l1z00_3461 = STRING_LENGTH(BgL_string1z00_3459);
												if ((BgL_l1z00_3461 == ((long) 6)))
													{	/* Unsafe/intext.scm 189 */
														int BgL_arg2208z00_3464;

														{	/* Unsafe/intext.scm 189 */
															char *BgL_auxz00_7861;
															char *BgL_tmpz00_7859;

															BgL_auxz00_7861 =
																BSTRING_TO_STRING
																(BGl_string3304z00zz__intextz00);
															BgL_tmpz00_7859 =
																BSTRING_TO_STRING(BgL_string1z00_3459);
															BgL_arg2208z00_3464 =
																memcmp(BgL_tmpz00_7859, BgL_auxz00_7861,
																BgL_l1z00_3461);
														}
														BgL_res2483z00_3474 =
															((long) (BgL_arg2208z00_3464) == ((long) 0));
													}
												else
													{	/* Unsafe/intext.scm 189 */
														BgL_res2483z00_3474 = ((bool_t) 0);
													}
											}
										}
										BgL_test3484z00_7854 = BgL_res2483z00_3474;
									}
									if (BgL_test3484z00_7854)
										{	/* Unsafe/intext.scm 189 */
											BgL_res2494z00_3507 = BGL_NAN;
										}
									else
										{	/* Unsafe/intext.scm 189 */
											bool_t BgL_test3486z00_7866;

											{	/* Unsafe/intext.scm 189 */
												bool_t BgL_res2488z00_3490;

												{	/* Unsafe/intext.scm 189 */
													obj_t BgL_string1z00_3475;

													BgL_string1z00_3475 =
														string_to_bstring(BgL_stringz00_3455);
													{	/* Unsafe/intext.scm 189 */
														long BgL_l1z00_3477;

														BgL_l1z00_3477 = STRING_LENGTH(BgL_string1z00_3475);
														if ((BgL_l1z00_3477 == ((long) 6)))
															{	/* Unsafe/intext.scm 189 */
																int BgL_arg2208z00_3480;

																{	/* Unsafe/intext.scm 189 */
																	char *BgL_auxz00_7873;
																	char *BgL_tmpz00_7871;

																	BgL_auxz00_7873 =
																		BSTRING_TO_STRING
																		(BGl_string3305z00zz__intextz00);
																	BgL_tmpz00_7871 =
																		BSTRING_TO_STRING(BgL_string1z00_3475);
																	BgL_arg2208z00_3480 =
																		memcmp(BgL_tmpz00_7871, BgL_auxz00_7873,
																		BgL_l1z00_3477);
																}
																BgL_res2488z00_3490 =
																	((long) (BgL_arg2208z00_3480) == ((long) 0));
															}
														else
															{	/* Unsafe/intext.scm 189 */
																BgL_res2488z00_3490 = ((bool_t) 0);
															}
													}
												}
												BgL_test3486z00_7866 = BgL_res2488z00_3490;
											}
											if (BgL_test3486z00_7866)
												{	/* Unsafe/intext.scm 189 */
													BgL_res2494z00_3507 = BGL_INFINITY;
												}
											else
												{	/* Unsafe/intext.scm 189 */
													bool_t BgL_test3488z00_7878;

													{	/* Unsafe/intext.scm 189 */
														bool_t BgL_res2493z00_3506;

														{	/* Unsafe/intext.scm 189 */
															obj_t BgL_string1z00_3491;

															BgL_string1z00_3491 =
																string_to_bstring(BgL_stringz00_3455);
															{	/* Unsafe/intext.scm 189 */
																long BgL_l1z00_3493;

																BgL_l1z00_3493 =
																	STRING_LENGTH(BgL_string1z00_3491);
																if ((BgL_l1z00_3493 == ((long) 6)))
																	{	/* Unsafe/intext.scm 189 */
																		int BgL_arg2208z00_3496;

																		{	/* Unsafe/intext.scm 189 */
																			char *BgL_auxz00_7885;
																			char *BgL_tmpz00_7883;

																			BgL_auxz00_7885 =
																				BSTRING_TO_STRING
																				(BGl_string3306z00zz__intextz00);
																			BgL_tmpz00_7883 =
																				BSTRING_TO_STRING(BgL_string1z00_3491);
																			BgL_arg2208z00_3496 =
																				memcmp(BgL_tmpz00_7883, BgL_auxz00_7885,
																				BgL_l1z00_3493);
																		}
																		BgL_res2493z00_3506 =
																			(
																			(long) (BgL_arg2208z00_3496) ==
																			((long) 0));
																	}
																else
																	{	/* Unsafe/intext.scm 189 */
																		BgL_res2493z00_3506 = ((bool_t) 0);
																	}
															}
														}
														BgL_test3488z00_7878 = BgL_res2493z00_3506;
													}
													if (BgL_test3488z00_7878)
														{	/* Unsafe/intext.scm 189 */
															BgL_res2494z00_3507 = (-BGL_INFINITY);
														}
													else
														{	/* Unsafe/intext.scm 189 */
															BgL_res2494z00_3507 = STRTOD(BgL_stringz00_3455);
														}
												}
										}
								}
							}
							BgL_resz00_1556 = BgL_res2494z00_3507;
						}
					}
					{	/* Unsafe/intext.scm 189 */

						{	/* Unsafe/intext.scm 190 */
							obj_t BgL_auxz00_7372;

							BgL_auxz00_7372 =
								ADDFX(CELL_REF(BgL_za2pointerza2z00_7371),
								BINT(BgL_sza7za7_1555));
							CELL_SET(BgL_za2pointerza2z00_7371, BgL_auxz00_7372);
						}
						return BgL_resz00_1556;
					}
				}
			}
		}

	}



/* read-long-word~0 */
	BGL_LONGLONG_T BGl_readzd2longzd2wordze70ze7zz__intextz00(obj_t
		BgL_za2pointerza2z00_7375, obj_t BgL_sz00_7374,
		long BgL_za2strlenza2z00_7373, obj_t BgL_sz00_1583, int BgL_sza7za7_1584)
	{
		{	/* Unsafe/intext.scm 223 */
			{	/* Unsafe/intext.scm 216 */
				BGL_LONGLONG_T BgL_accz00_1586;

				BgL_accz00_1586 = LONG_TO_LLONG(((long) 0));
				BGl_stringzd2guardz12ze70z27zz__intextz00(BgL_sz00_7374,
					BgL_za2strlenza2z00_7373, BgL_za2pointerza2z00_7375,
					(long) (BgL_sza7za7_1584));
				{
					long BgL_iz00_1588;

					BgL_iz00_1588 = ((long) 0);
				BgL_zc3z04anonymousza31358ze3z87_1589:
					if ((BgL_iz00_1588 < (long) (BgL_sza7za7_1584)))
						{	/* Unsafe/intext.scm 218 */
							{	/* Unsafe/intext.scm 219 */
								unsigned char BgL_dz00_1591;

								{	/* Unsafe/intext.scm 219 */
									long BgL_kz00_3546;

									BgL_kz00_3546 =
										(long) CINT(CELL_REF(BgL_za2pointerza2z00_7375));
									BgL_dz00_1591 = STRING_REF(BgL_sz00_1583, BgL_kz00_3546);
								}
								{	/* Unsafe/intext.scm 220 */
									BGL_LONGLONG_T BgL_arg1360z00_1592;
									BGL_LONGLONG_T BgL_arg1361z00_1593;

									BgL_arg1360z00_1592 =
										(((BGL_LONGLONG_T) 256) * BgL_accz00_1586);
									{	/* Unsafe/intext.scm 221 */
										long BgL_arg1362z00_1594;

										BgL_arg1362z00_1594 = (BgL_dz00_1591);
										{	/* Unsafe/intext.scm 221 */
											BGL_LONGLONG_T BgL_res2511z00_3554;

											BgL_res2511z00_3554 = LONG_TO_LLONG(BgL_arg1362z00_1594);
											BgL_arg1361z00_1593 = BgL_res2511z00_3554;
									}}
									BgL_accz00_1586 = (BgL_arg1360z00_1592 + BgL_arg1361z00_1593);
								}
								{	/* Unsafe/intext.scm 222 */
									obj_t BgL_auxz00_7376;

									BgL_auxz00_7376 =
										ADDFX(CELL_REF(BgL_za2pointerza2z00_7375),
										BINT(((long) 1)));
									CELL_SET(BgL_za2pointerza2z00_7375, BgL_auxz00_7376);
							}}
							{
								long BgL_iz00_7907;

								BgL_iz00_7907 = (BgL_iz00_1588 + ((long) 1));
								BgL_iz00_1588 = BgL_iz00_7907;
								goto BgL_zc3z04anonymousza31358ze3z87_1589;
							}
						}
					else
						{	/* Unsafe/intext.scm 218 */
							((bool_t) 0);
						}
				}
				return BgL_accz00_1586;
			}
		}

	}



/* read-string~0 */
	obj_t BGl_readzd2stringze70z35zz__intextz00(obj_t BgL_za2definingza2z00_7381,
		obj_t BgL_za2definitionsza2z00_7380, obj_t BgL_za2pointerza2z00_7379,
		obj_t BgL_sz00_7378, long BgL_za2strlenza2z00_7377, obj_t BgL_sz00_1605)
	{
		{	/* Unsafe/intext.scm 246 */
			{	/* Unsafe/intext.scm 240 */
				long BgL_sza7za7_1607;

				{	/* Unsafe/intext.scm 234 */
					long BgL_siza7eza7_3581;

					BgL_siza7eza7_3581 =
						BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
						(BgL_za2pointerza2z00_7379, BgL_sz00_7378, BgL_za2strlenza2z00_7377,
						BgL_sz00_1605);
					BGl_checkzd2siza7ez12ze70z80zz__intextz00(BgL_sz00_7378,
						BgL_za2pointerza2z00_7379, BgL_za2strlenza2z00_7377,
						BgL_siza7eza7_3581, BGl_string3307z00zz__intextz00);
					BgL_sza7za7_1607 = BgL_siza7eza7_3581;
				}
				{	/* Unsafe/intext.scm 240 */
					obj_t BgL_resz00_1608;

					{	/* Unsafe/intext.scm 241 */
						long BgL_arg1370z00_1610;

						{	/* Unsafe/intext.scm 241 */
							long BgL_za71za7_3582;

							BgL_za71za7_3582 =
								(long) CINT(CELL_REF(BgL_za2pointerza2z00_7379));
							BgL_arg1370z00_1610 = (BgL_za71za7_3582 + BgL_sza7za7_1607);
						}
						{	/* Unsafe/intext.scm 241 */
							obj_t BgL_res2522z00_3588;

							{	/* Unsafe/intext.scm 241 */
								long BgL_startz00_3586;

								BgL_startz00_3586 =
									(long) CINT(CELL_REF(BgL_za2pointerza2z00_7379));
								BgL_res2522z00_3588 =
									c_substring(BgL_sz00_1605, BgL_startz00_3586,
									BgL_arg1370z00_1610);
							}
							BgL_resz00_1608 = BgL_res2522z00_3588;
					}}
					{	/* Unsafe/intext.scm 241 */

						{	/* Unsafe/intext.scm 242 */
							bool_t BgL_test3491z00_7915;

							{	/* Unsafe/intext.scm 242 */
								obj_t BgL_objz00_3589;

								BgL_objz00_3589 = CELL_REF(BgL_za2definingza2z00_7381);
								BgL_test3491z00_7915 = INTEGERP(BgL_objz00_3589);
							}
							if (BgL_test3491z00_7915)
								{	/* Unsafe/intext.scm 242 */
									{	/* Unsafe/intext.scm 243 */
										obj_t BgL_vectorz00_3591;
										long BgL_kz00_3592;

										BgL_vectorz00_3591 =
											CELL_REF(BgL_za2definitionsza2z00_7380);
										BgL_kz00_3592 =
											(long) CINT(CELL_REF(BgL_za2definingza2z00_7381));
										VECTOR_SET(BgL_vectorz00_3591, BgL_kz00_3592,
											BgL_resz00_1608);
									}
									{	/* Unsafe/intext.scm 244 */
										obj_t BgL_auxz00_7382;

										BgL_auxz00_7382 = BFALSE;
										CELL_SET(BgL_za2definingza2z00_7381, BgL_auxz00_7382);
								}}
							else
								{	/* Unsafe/intext.scm 242 */
									BFALSE;
								}
						}
						{	/* Unsafe/intext.scm 245 */
							obj_t BgL_auxz00_7383;

							BgL_auxz00_7383 =
								ADDFX(CELL_REF(BgL_za2pointerza2z00_7379),
								BINT(BgL_sza7za7_1607));
							CELL_SET(BgL_za2pointerza2z00_7379, BgL_auxz00_7383);
						}
						return BgL_resz00_1608;
					}
				}
			}
		}

	}



/* read-item~0 */
	obj_t BGl_readzd2itemze70z35zz__intextz00(obj_t BgL_extensionz00_7390,
		obj_t BgL_sz00_7389, obj_t BgL_za2definitionsza2z00_7388,
		obj_t BgL_unserializa7ezd2argz75_7387, obj_t BgL_za2definingza2z00_7386,
		obj_t BgL_za2pointerza2z00_7385, long BgL_za2strlenza2z00_7384)
	{
		{	/* Unsafe/intext.scm 564 */
		BGl_readzd2itemze70z35zz__intextz00:
			{
				obj_t BgL_sz00_1559;
				obj_t BgL_sz00_1854;
				obj_t BgL_sz00_1930;
				obj_t BgL_sz00_1943;

				BGl_stringzd2guardz12ze70z27zz__intextz00(BgL_sz00_7389,
					BgL_za2strlenza2z00_7384, BgL_za2pointerza2z00_7385, ((long) 1));
				{	/* Unsafe/intext.scm 565 */
					unsigned char BgL_dz00_1957;

					{	/* Unsafe/intext.scm 565 */
						long BgL_kz00_4059;

						BgL_kz00_4059 = (long) CINT(CELL_REF(BgL_za2pointerza2z00_7385));
						BgL_dz00_1957 = (char) (STRING_REF(BgL_sz00_7389, BgL_kz00_4059));
					}
					{	/* Unsafe/intext.scm 566 */
						obj_t BgL_auxz00_7391;

						BgL_auxz00_7391 =
							ADDFX(CELL_REF(BgL_za2pointerza2z00_7385), BINT(((long) 1)));
						CELL_SET(BgL_za2pointerza2z00_7385, BgL_auxz00_7391);
					}
					switch ((unsigned char) (BgL_dz00_1957))
						{
						case ((unsigned char) '='):

							{	/* Unsafe/intext.scm 250 */
								obj_t BgL_auxz00_7392;

								BgL_auxz00_7392 =
									BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
									BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
									BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
									BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384);
								CELL_SET(BgL_za2definingza2z00_7386, BgL_auxz00_7392);
							}
							{

								goto BGl_readzd2itemze70z35zz__intextz00;
							}
							break;
						case ((unsigned char) '#'):

							{	/* Unsafe/intext.scm 255 */
								obj_t BgL_arg1373z00_4065;

								BgL_arg1373z00_4065 =
									BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
									BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
									BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
									BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384);
								{	/* Unsafe/intext.scm 255 */
									obj_t BgL_vectorz00_4066;
									long BgL_kz00_4067;

									BgL_vectorz00_4066 = CELL_REF(BgL_za2definitionsza2z00_7388);
									BgL_kz00_4067 = (long) CINT(BgL_arg1373z00_4065);
									return VECTOR_REF(BgL_vectorz00_4066, BgL_kz00_4067);
								}
							}
							break;
						case ((unsigned char) '\''):

							{	/* Unsafe/intext.scm 259 */
								obj_t BgL_arg1375z00_4068;

								BgL_arg1375z00_4068 =
									BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
									BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
									BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
									BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384);
								{	/* Unsafe/intext.scm 259 */
									obj_t BgL_res2633z00_4070;

									BgL_res2633z00_4070 =
										bstring_to_symbol(((obj_t) BgL_arg1375z00_4068));
									return BgL_res2633z00_4070;
								}
							}
							break;
						case ((unsigned char) ':'):

							{	/* Unsafe/intext.scm 263 */
								obj_t BgL_arg1377z00_4071;

								BgL_arg1377z00_4071 =
									BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
									BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
									BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
									BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384);
								{	/* Unsafe/intext.scm 263 */
									obj_t BgL_res2634z00_4073;

									BgL_res2634z00_4073 =
										string_to_keyword(BSTRING_TO_STRING(
											((obj_t) BgL_arg1377z00_4071)));
									return BgL_res2634z00_4073;
								}
							}
							break;
						case ((unsigned char) 'a'):

							{	/* Unsafe/intext.scm 202 */
								long BgL_arg1350z00_4074;

								BgL_arg1350z00_4074 =
									BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
									(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
									BgL_za2strlenza2z00_7384, BgL_sz00_7389);
								return BCHAR((BgL_arg1350z00_4074));
							}
							break;
						case ((unsigned char) 'F'):

							return BFALSE;
							break;
						case ((unsigned char) 'T'):

							return BTRUE;
							break;
						case ((unsigned char) ';'):

							return BUNSPEC;
							break;
						case ((unsigned char) '.'):

							return BNIL;
							break;
						case ((unsigned char) '<'):

							{	/* Unsafe/intext.scm 267 */
								long BgL_tmpz00_7941;

								BgL_tmpz00_7941 =
									BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
									(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
									BgL_za2strlenza2z00_7384, BgL_sz00_7389);
								return BCNST(BgL_tmpz00_7941);
							}
							break;
						case ((unsigned char) '"'):

							return
								BGl_readzd2stringze70z35zz__intextz00
								(BgL_za2definingza2z00_7386, BgL_za2definitionsza2z00_7388,
								BgL_za2pointerza2z00_7385, BgL_sz00_7389,
								BgL_za2strlenza2z00_7384, BgL_sz00_7389);
							break;
						case ((unsigned char) '`'):

							return
								BGl_readzd2stringze70z35zz__intextz00
								(BgL_za2definingza2z00_7386, BgL_za2definitionsza2z00_7388,
								BgL_za2pointerza2z00_7385, BgL_sz00_7389,
								BgL_za2strlenza2z00_7384, BgL_sz00_7389);
							break;
						case ((unsigned char) '%'):

							return
								BGl_urlzd2decodezd2zz__urlz00
								(BGl_readzd2stringze70z35zz__intextz00
								(BgL_za2definingza2z00_7386, BgL_za2definitionsza2z00_7388,
									BgL_za2pointerza2z00_7385, BgL_sz00_7389,
									BgL_za2strlenza2z00_7384, BgL_sz00_7389));
							break;
						case ((unsigned char) 'U'):

							return
								utf8_string_to_ucs2_string(BGl_readzd2stringze70z35zz__intextz00
								(BgL_za2definingza2z00_7386, BgL_za2definitionsza2z00_7388,
									BgL_za2pointerza2z00_7385, BgL_sz00_7389,
									BgL_za2strlenza2z00_7384, BgL_sz00_7389));
							break;
						case ((unsigned char) '['):

							{	/* Unsafe/intext.scm 305 */
								long BgL_sza7za7_1645;

								{	/* Unsafe/intext.scm 234 */
									long BgL_siza7eza7_3641;

									BgL_siza7eza7_3641 =
										BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
										(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
										BgL_za2strlenza2z00_7384, BgL_sz00_7389);
									BGl_checkzd2siza7ez12ze70z80zz__intextz00(BgL_sz00_7389,
										BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384,
										BgL_siza7eza7_3641, BGl_string3337z00zz__intextz00);
									BgL_sza7za7_1645 = BgL_siza7eza7_3641;
								}
								{	/* Unsafe/intext.scm 305 */
									obj_t BgL_resz00_1646;

									BgL_resz00_1646 = create_vector(BgL_sza7za7_1645);
									{	/* Unsafe/intext.scm 306 */

										{	/* Unsafe/intext.scm 307 */
											bool_t BgL_test3492z00_7953;

											{	/* Unsafe/intext.scm 307 */
												obj_t BgL_objz00_3642;

												BgL_objz00_3642 = CELL_REF(BgL_za2definingza2z00_7386);
												BgL_test3492z00_7953 = INTEGERP(BgL_objz00_3642);
											}
											if (BgL_test3492z00_7953)
												{	/* Unsafe/intext.scm 307 */
													{	/* Unsafe/intext.scm 308 */
														obj_t BgL_vectorz00_3644;
														long BgL_kz00_3645;

														BgL_vectorz00_3644 =
															CELL_REF(BgL_za2definitionsza2z00_7388);
														BgL_kz00_3645 =
															(long) CINT(CELL_REF(BgL_za2definingza2z00_7386));
														VECTOR_SET(BgL_vectorz00_3644, BgL_kz00_3645,
															BgL_resz00_1646);
													}
													{	/* Unsafe/intext.scm 309 */
														obj_t BgL_auxz00_7406;

														BgL_auxz00_7406 = BFALSE;
														CELL_SET(BgL_za2definingza2z00_7386,
															BgL_auxz00_7406);
												}}
											else
												{	/* Unsafe/intext.scm 307 */
													BFALSE;
												}
										}
										{
											long BgL_iz00_3654;

											BgL_iz00_3654 = ((long) 0);
										BgL_for1044z00_3653:
											if ((BgL_iz00_3654 < BgL_sza7za7_1645))
												{	/* Unsafe/intext.scm 310 */
													VECTOR_SET(BgL_resz00_1646, BgL_iz00_3654,
														BGl_readzd2itemze70z35zz__intextz00
														(BgL_extensionz00_7390, BgL_sz00_7389,
															BgL_za2definitionsza2z00_7388,
															BgL_unserializa7ezd2argz75_7387,
															BgL_za2definingza2z00_7386,
															BgL_za2pointerza2z00_7385,
															BgL_za2strlenza2z00_7384));
													{
														long BgL_iz00_7961;

														BgL_iz00_7961 = (BgL_iz00_3654 + ((long) 1));
														BgL_iz00_3654 = BgL_iz00_7961;
														goto BgL_for1044z00_3653;
													}
												}
											else
												{	/* Unsafe/intext.scm 310 */
													((bool_t) 0);
												}
										}
										return BgL_resz00_1646;
									}
								}
							}
							break;
						case ((unsigned char) 't'):

							{	/* Unsafe/intext.scm 363 */
								obj_t BgL_tagz00_1772;

								BgL_tagz00_1772 =
									BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
									BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
									BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
									BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384);
								{	/* Unsafe/intext.scm 363 */
									long BgL_sza7za7_1773;

									{	/* Unsafe/intext.scm 234 */
										long BgL_siza7eza7_3850;

										BgL_siza7eza7_3850 =
											BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
											(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
											BgL_za2strlenza2z00_7384, BgL_sz00_7389);
										BGl_checkzd2siza7ez12ze70z80zz__intextz00(BgL_sz00_7389,
											BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384,
											BgL_siza7eza7_3850, BGl_string3314z00zz__intextz00);
										BgL_sza7za7_1773 = BgL_siza7eza7_3850;
									}
									{	/* Unsafe/intext.scm 364 */
										obj_t BgL_resz00_1774;

										BgL_resz00_1774 = create_vector(BgL_sza7za7_1773);
										{	/* Unsafe/intext.scm 365 */

											{	/* Unsafe/intext.scm 366 */
												int BgL_tmpz00_7967;

												BgL_tmpz00_7967 = CINT(BgL_tagz00_1772);
												VECTOR_TAG_SET(BgL_resz00_1774, BgL_tmpz00_7967);
											}
											{	/* Unsafe/intext.scm 367 */
												bool_t BgL_test3494z00_7970;

												{	/* Unsafe/intext.scm 367 */
													obj_t BgL_objz00_3853;

													BgL_objz00_3853 =
														CELL_REF(BgL_za2definingza2z00_7386);
													BgL_test3494z00_7970 = INTEGERP(BgL_objz00_3853);
												}
												if (BgL_test3494z00_7970)
													{	/* Unsafe/intext.scm 367 */
														{	/* Unsafe/intext.scm 368 */
															obj_t BgL_vectorz00_3855;
															long BgL_kz00_3856;

															BgL_vectorz00_3855 =
																CELL_REF(BgL_za2definitionsza2z00_7388);
															BgL_kz00_3856 =
																(long)
																CINT(CELL_REF(BgL_za2definingza2z00_7386));
															VECTOR_SET(BgL_vectorz00_3855, BgL_kz00_3856,
																BgL_resz00_1774);
														}
														{	/* Unsafe/intext.scm 369 */
															obj_t BgL_auxz00_7405;

															BgL_auxz00_7405 = BFALSE;
															CELL_SET(BgL_za2definingza2z00_7386,
																BgL_auxz00_7405);
													}}
												else
													{	/* Unsafe/intext.scm 367 */
														BFALSE;
													}
											}
											{
												long BgL_iz00_3865;

												BgL_iz00_3865 = ((long) 0);
											BgL_for1055z00_3864:
												if ((BgL_iz00_3865 < BgL_sza7za7_1773))
													{	/* Unsafe/intext.scm 370 */
														VECTOR_SET(BgL_resz00_1774, BgL_iz00_3865,
															BGl_readzd2itemze70z35zz__intextz00
															(BgL_extensionz00_7390, BgL_sz00_7389,
																BgL_za2definitionsza2z00_7388,
																BgL_unserializa7ezd2argz75_7387,
																BgL_za2definingza2z00_7386,
																BgL_za2pointerza2z00_7385,
																BgL_za2strlenza2z00_7384));
														{
															long BgL_iz00_7978;

															BgL_iz00_7978 = (BgL_iz00_3865 + ((long) 1));
															BgL_iz00_3865 = BgL_iz00_7978;
															goto BgL_for1055z00_3864;
														}
													}
												else
													{	/* Unsafe/intext.scm 370 */
														((bool_t) 0);
													}
											}
											return BgL_resz00_1774;
										}
									}
								}
							}
							break;
						case ((unsigned char) 'V'):

							{	/* Unsafe/intext.scm 375 */
								obj_t BgL_idz00_1784;

								BgL_idz00_1784 =
									BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
									BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
									BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
									BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384);
								{	/* Unsafe/intext.scm 375 */
									obj_t BgL_vz00_1785;

									BgL_vz00_1785 =
										BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
										BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
										BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
										BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384);
									{	/* Unsafe/intext.scm 376 */
										obj_t BgL_tvz00_1786;

										BgL_tvz00_1786 =
											BGl_vectorzd2ze3tvectorz31zz__tvectorz00(BgL_idz00_1784,
											BgL_vz00_1785);
										{	/* Unsafe/intext.scm 377 */

											{	/* Unsafe/intext.scm 378 */
												bool_t BgL_test3496z00_7983;

												{	/* Unsafe/intext.scm 378 */
													obj_t BgL_objz00_3876;

													BgL_objz00_3876 =
														CELL_REF(BgL_za2definingza2z00_7386);
													BgL_test3496z00_7983 = INTEGERP(BgL_objz00_3876);
												}
												if (BgL_test3496z00_7983)
													{	/* Unsafe/intext.scm 378 */
														{	/* Unsafe/intext.scm 379 */
															obj_t BgL_vectorz00_3878;
															long BgL_kz00_3879;

															BgL_vectorz00_3878 =
																CELL_REF(BgL_za2definitionsza2z00_7388);
															BgL_kz00_3879 =
																(long)
																CINT(CELL_REF(BgL_za2definingza2z00_7386));
															VECTOR_SET(BgL_vectorz00_3878, BgL_kz00_3879,
																BgL_tvz00_1786);
														}
														{	/* Unsafe/intext.scm 380 */
															obj_t BgL_auxz00_7404;

															BgL_auxz00_7404 = BFALSE;
															CELL_SET(BgL_za2definingza2z00_7386,
																BgL_auxz00_7404);
													}}
												else
													{	/* Unsafe/intext.scm 378 */
														BFALSE;
													}
											}
											return BgL_tvz00_1786;
										}
									}
								}
							}
							break;
						case ((unsigned char) 'h'):

							{	/* Unsafe/intext.scm 315 */
								long BgL_lenz00_1656;
								long BgL_bsiza7eza7_1657;

								{	/* Unsafe/intext.scm 234 */
									long BgL_siza7eza7_3665;

									BgL_siza7eza7_3665 =
										BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
										(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
										BgL_za2strlenza2z00_7384, BgL_sz00_7389);
									BGl_checkzd2siza7ez12ze70z80zz__intextz00(BgL_sz00_7389,
										BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384,
										BgL_siza7eza7_3665, BGl_string3315z00zz__intextz00);
									BgL_lenz00_1656 = BgL_siza7eza7_3665;
								}
								{	/* Unsafe/intext.scm 234 */
									long BgL_siza7eza7_3666;

									BgL_siza7eza7_3666 =
										BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
										(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
										BgL_za2strlenza2z00_7384, BgL_sz00_7389);
									BGl_checkzd2siza7ez12ze70z80zz__intextz00(BgL_sz00_7389,
										BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384,
										BgL_siza7eza7_3666, BGl_string3316z00zz__intextz00);
									BgL_bsiza7eza7_1657 = BgL_siza7eza7_3666;
								}
								{	/* Unsafe/intext.scm 317 */
									obj_t BgL_casezd2valuezd2_1658;

									{	/* Unsafe/intext.scm 259 */
										obj_t BgL_arg1375z00_3667;

										BgL_arg1375z00_3667 =
											BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
											BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
											BgL_unserializa7ezd2argz75_7387,
											BgL_za2definingza2z00_7386, BgL_za2pointerza2z00_7385,
											BgL_za2strlenza2z00_7384);
										{	/* Unsafe/intext.scm 259 */
											obj_t BgL_res2539z00_3669;

											BgL_res2539z00_3669 =
												bstring_to_symbol(((obj_t) BgL_arg1375z00_3667));
											BgL_casezd2valuezd2_1658 = BgL_res2539z00_3669;
									}}
									if (
										(BgL_casezd2valuezd2_1658 ==
											BGl_symbol3317z00zz__intextz00))
										{	/* Unsafe/intext.scm 319 */
											obj_t BgL_resz00_1660;

											{	/* Llib/srfi4.scm 446 */

												BgL_resz00_1660 =
													BGl_makezd2s8vectorzd2zz__srfi4z00(BgL_lenz00_1656,
													(int8_t) (0));
											}
											{
												long BgL_iz00_3680;

												BgL_iz00_3680 = ((long) 0);
											BgL_for1045z00_3679:
												if ((BgL_iz00_3680 < BgL_lenz00_1656))
													{	/* Unsafe/intext.scm 320 */
														{	/* Unsafe/intext.scm 321 */
															int8_t BgL_arg1404z00_3685;

															{	/* Unsafe/intext.scm 321 */
																long BgL_arg1405z00_3686;

																BgL_arg1405z00_3686 =
																	BGl_readzd2wordze70z35zz__intextz00
																	(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
																	BgL_za2strlenza2z00_7384, BgL_sz00_7389,
																	(int) (BgL_bsiza7eza7_1657));
																{	/* Unsafe/intext.scm 321 */
																	int8_t BgL_res2542z00_3687;

																	BgL_res2542z00_3687 =
																		(int8_t) (BgL_arg1405z00_3686);
																	BgL_arg1404z00_3685 = BgL_res2542z00_3687;
															}}
															BGL_S8VSET(BgL_resz00_1660, BgL_iz00_3680,
																BgL_arg1404z00_3685);
															BUNSPEC;
														}
														{
															long BgL_iz00_8003;

															BgL_iz00_8003 = (BgL_iz00_3680 + ((long) 1));
															BgL_iz00_3680 = BgL_iz00_8003;
															goto BgL_for1045z00_3679;
														}
													}
												else
													{	/* Unsafe/intext.scm 320 */
														((bool_t) 0);
													}
											}
											return BgL_resz00_1660;
										}
									else
										{	/* Unsafe/intext.scm 317 */
											if (
												(BgL_casezd2valuezd2_1658 ==
													BGl_symbol3319z00zz__intextz00))
												{	/* Unsafe/intext.scm 324 */
													obj_t BgL_resz00_1672;

													{	/* Llib/srfi4.scm 447 */

														BgL_resz00_1672 =
															BGl_makezd2u8vectorzd2zz__srfi4z00
															(BgL_lenz00_1656, (uint8_t) (0));
													}
													{
														long BgL_iz00_3702;

														BgL_iz00_3702 = ((long) 0);
													BgL_for1046z00_3701:
														if ((BgL_iz00_3702 < BgL_lenz00_1656))
															{	/* Unsafe/intext.scm 325 */
																{	/* Unsafe/intext.scm 326 */
																	uint8_t BgL_arg1411z00_3707;

																	{	/* Unsafe/intext.scm 326 */
																		long BgL_arg1412z00_3708;

																		BgL_arg1412z00_3708 =
																			BGl_readzd2wordze70z35zz__intextz00
																			(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
																			BgL_za2strlenza2z00_7384, BgL_sz00_7389,
																			(int) (BgL_bsiza7eza7_1657));
																		{	/* Unsafe/intext.scm 326 */
																			uint8_t BgL_res2546z00_3709;

																			BgL_res2546z00_3709 =
																				(uint8_t) (BgL_arg1412z00_3708);
																			BgL_arg1411z00_3707 = BgL_res2546z00_3709;
																	}}
																	BGL_U8VSET(BgL_resz00_1672, BgL_iz00_3702,
																		BgL_arg1411z00_3707);
																	BUNSPEC;
																}
																{
																	long BgL_iz00_8014;

																	BgL_iz00_8014 = (BgL_iz00_3702 + ((long) 1));
																	BgL_iz00_3702 = BgL_iz00_8014;
																	goto BgL_for1046z00_3701;
																}
															}
														else
															{	/* Unsafe/intext.scm 325 */
																((bool_t) 0);
															}
													}
													return BgL_resz00_1672;
												}
											else
												{	/* Unsafe/intext.scm 317 */
													if (
														(BgL_casezd2valuezd2_1658 ==
															BGl_symbol3321z00zz__intextz00))
														{	/* Unsafe/intext.scm 329 */
															obj_t BgL_resz00_1684;

															{	/* Llib/srfi4.scm 448 */

																BgL_resz00_1684 =
																	BGl_makezd2s16vectorzd2zz__srfi4z00
																	(BgL_lenz00_1656, (int16_t) (0));
															}
															{
																long BgL_iz00_3722;

																BgL_iz00_3722 = ((long) 0);
															BgL_for1047z00_3721:
																if ((BgL_iz00_3722 < BgL_lenz00_1656))
																	{	/* Unsafe/intext.scm 330 */
																		{	/* Unsafe/intext.scm 330 */
																			long BgL_arg1418z00_3727;

																			BgL_arg1418z00_3727 =
																				BGl_readzd2wordze70z35zz__intextz00
																				(BgL_za2pointerza2z00_7385,
																				BgL_sz00_7389, BgL_za2strlenza2z00_7384,
																				BgL_sz00_7389,
																				(int) (BgL_bsiza7eza7_1657));
																			{	/* Unsafe/intext.scm 330 */
																				int16_t BgL_tmpz00_8023;

																				BgL_tmpz00_8023 =
																					(int16_t) (BgL_arg1418z00_3727);
																				BGL_S16VSET(BgL_resz00_1684,
																					BgL_iz00_3722, BgL_tmpz00_8023);
																			} BUNSPEC;
																		}
																		{
																			long BgL_iz00_8026;

																			BgL_iz00_8026 =
																				(BgL_iz00_3722 + ((long) 1));
																			BgL_iz00_3722 = BgL_iz00_8026;
																			goto BgL_for1047z00_3721;
																		}
																	}
																else
																	{	/* Unsafe/intext.scm 330 */
																		((bool_t) 0);
																	}
															}
															return BgL_resz00_1684;
														}
													else
														{	/* Unsafe/intext.scm 317 */
															if (
																(BgL_casezd2valuezd2_1658 ==
																	BGl_symbol3323z00zz__intextz00))
																{	/* Unsafe/intext.scm 333 */
																	obj_t BgL_resz00_1695;

																	{	/* Llib/srfi4.scm 449 */

																		BgL_resz00_1695 =
																			BGl_makezd2u16vectorzd2zz__srfi4z00
																			(BgL_lenz00_1656, (uint16_t) (0));
																	}
																	{
																		long BgL_iz00_3739;

																		BgL_iz00_3739 = ((long) 0);
																	BgL_for1048z00_3738:
																		if ((BgL_iz00_3739 < BgL_lenz00_1656))
																			{	/* Unsafe/intext.scm 334 */
																				{	/* Unsafe/intext.scm 334 */
																					long BgL_arg1424z00_3744;

																					BgL_arg1424z00_3744 =
																						BGl_readzd2wordze70z35zz__intextz00
																						(BgL_za2pointerza2z00_7385,
																						BgL_sz00_7389,
																						BgL_za2strlenza2z00_7384,
																						BgL_sz00_7389,
																						(int) (BgL_bsiza7eza7_1657));
																					{	/* Unsafe/intext.scm 334 */
																						uint16_t BgL_tmpz00_8035;

																						BgL_tmpz00_8035 =
																							(uint16_t) (BgL_arg1424z00_3744);
																						BGL_U16VSET(BgL_resz00_1695,
																							BgL_iz00_3739, BgL_tmpz00_8035);
																					} BUNSPEC;
																				}
																				{
																					long BgL_iz00_8038;

																					BgL_iz00_8038 =
																						(BgL_iz00_3739 + ((long) 1));
																					BgL_iz00_3739 = BgL_iz00_8038;
																					goto BgL_for1048z00_3738;
																				}
																			}
																		else
																			{	/* Unsafe/intext.scm 334 */
																				((bool_t) 0);
																			}
																	}
																	return BgL_resz00_1695;
																}
															else
																{	/* Unsafe/intext.scm 317 */
																	if (
																		(BgL_casezd2valuezd2_1658 ==
																			BGl_symbol3325z00zz__intextz00))
																		{	/* Unsafe/intext.scm 337 */
																			obj_t BgL_resz00_1706;

																			{	/* Llib/srfi4.scm 450 */

																				BgL_resz00_1706 =
																					BGl_makezd2s32vectorzd2zz__srfi4z00
																					(BgL_lenz00_1656, (int32_t) (0));
																			}
																			{
																				long BgL_iz00_3756;

																				BgL_iz00_3756 = ((long) 0);
																			BgL_for1049z00_3755:
																				if ((BgL_iz00_3756 < BgL_lenz00_1656))
																					{	/* Unsafe/intext.scm 338 */
																						{	/* Unsafe/intext.scm 338 */
																							long BgL_arg1430z00_3761;

																							BgL_arg1430z00_3761 =
																								BGl_readzd2wordze70z35zz__intextz00
																								(BgL_za2pointerza2z00_7385,
																								BgL_sz00_7389,
																								BgL_za2strlenza2z00_7384,
																								BgL_sz00_7389,
																								(int) (BgL_bsiza7eza7_1657));
																							{	/* Unsafe/intext.scm 338 */
																								int32_t BgL_tmpz00_8047;

																								BgL_tmpz00_8047 =
																									(int32_t)
																									(BgL_arg1430z00_3761);
																								BGL_S32VSET(BgL_resz00_1706,
																									BgL_iz00_3756,
																									BgL_tmpz00_8047);
																							} BUNSPEC;
																						}
																						{
																							long BgL_iz00_8050;

																							BgL_iz00_8050 =
																								(BgL_iz00_3756 + ((long) 1));
																							BgL_iz00_3756 = BgL_iz00_8050;
																							goto BgL_for1049z00_3755;
																						}
																					}
																				else
																					{	/* Unsafe/intext.scm 338 */
																						((bool_t) 0);
																					}
																			}
																			return BgL_resz00_1706;
																		}
																	else
																		{	/* Unsafe/intext.scm 317 */
																			if (
																				(BgL_casezd2valuezd2_1658 ==
																					BGl_symbol3327z00zz__intextz00))
																				{	/* Unsafe/intext.scm 341 */
																					obj_t BgL_resz00_1717;

																					{	/* Llib/srfi4.scm 451 */

																						BgL_resz00_1717 =
																							BGl_makezd2u32vectorzd2zz__srfi4z00
																							(BgL_lenz00_1656, (uint32_t) (0));
																					}
																					{
																						long BgL_iz00_3773;

																						BgL_iz00_3773 = ((long) 0);
																					BgL_for1050z00_3772:
																						if (
																							(BgL_iz00_3773 < BgL_lenz00_1656))
																							{	/* Unsafe/intext.scm 342 */
																								{	/* Unsafe/intext.scm 342 */
																									long BgL_arg1436z00_3778;

																									BgL_arg1436z00_3778 =
																										BGl_readzd2wordze70z35zz__intextz00
																										(BgL_za2pointerza2z00_7385,
																										BgL_sz00_7389,
																										BgL_za2strlenza2z00_7384,
																										BgL_sz00_7389,
																										(int)
																										(BgL_bsiza7eza7_1657));
																									{	/* Unsafe/intext.scm 342 */
																										uint32_t BgL_tmpz00_8059;

																										BgL_tmpz00_8059 =
																											(uint32_t)
																											(BgL_arg1436z00_3778);
																										BGL_U32VSET(BgL_resz00_1717,
																											BgL_iz00_3773,
																											BgL_tmpz00_8059);
																									} BUNSPEC;
																								}
																								{
																									long BgL_iz00_8062;

																									BgL_iz00_8062 =
																										(BgL_iz00_3773 +
																										((long) 1));
																									BgL_iz00_3773 = BgL_iz00_8062;
																									goto BgL_for1050z00_3772;
																								}
																							}
																						else
																							{	/* Unsafe/intext.scm 342 */
																								((bool_t) 0);
																							}
																					}
																					return BgL_resz00_1717;
																				}
																			else
																				{	/* Unsafe/intext.scm 317 */
																					if (
																						(BgL_casezd2valuezd2_1658 ==
																							BGl_symbol3329z00zz__intextz00))
																						{	/* Unsafe/intext.scm 345 */
																							obj_t BgL_resz00_1728;

																							{	/* Llib/srfi4.scm 452 */

																								BgL_resz00_1728 =
																									BGl_makezd2s64vectorzd2zz__srfi4z00
																									(BgL_lenz00_1656,
																									(int64_t) (0));
																							}
																							{
																								long BgL_iz00_3790;

																								BgL_iz00_3790 = ((long) 0);
																							BgL_for1051z00_3789:
																								if (
																									(BgL_iz00_3790 <
																										BgL_lenz00_1656))
																									{	/* Unsafe/intext.scm 346 */
																										{	/* Unsafe/intext.scm 346 */
																											BGL_LONGLONG_T
																												BgL_arg1442z00_3795;
																											BgL_arg1442z00_3795 =
																												BGl_readzd2longzd2wordze70ze7zz__intextz00
																												(BgL_za2pointerza2z00_7385,
																												BgL_sz00_7389,
																												BgL_za2strlenza2z00_7384,
																												BgL_sz00_7389,
																												(int)
																												(BgL_bsiza7eza7_1657));
																											{	/* Unsafe/intext.scm 346 */
																												int64_t BgL_tmpz00_8071;

																												BgL_tmpz00_8071 =
																													(int64_t)
																													(BgL_arg1442z00_3795);
																												BGL_S64VSET
																													(BgL_resz00_1728,
																													BgL_iz00_3790,
																													BgL_tmpz00_8071);
																											} BUNSPEC;
																										}
																										{
																											long BgL_iz00_8074;

																											BgL_iz00_8074 =
																												(BgL_iz00_3790 +
																												((long) 1));
																											BgL_iz00_3790 =
																												BgL_iz00_8074;
																											goto BgL_for1051z00_3789;
																										}
																									}
																								else
																									{	/* Unsafe/intext.scm 346 */
																										((bool_t) 0);
																									}
																							}
																							return BgL_resz00_1728;
																						}
																					else
																						{	/* Unsafe/intext.scm 317 */
																							if (
																								(BgL_casezd2valuezd2_1658 ==
																									BGl_symbol3331z00zz__intextz00))
																								{	/* Unsafe/intext.scm 349 */
																									obj_t BgL_resz00_1739;

																									{	/* Llib/srfi4.scm 453 */

																										BgL_resz00_1739 =
																											BGl_makezd2u64vectorzd2zz__srfi4z00
																											(BgL_lenz00_1656,
																											(uint64_t) (0));
																									}
																									{
																										long BgL_iz00_3807;

																										BgL_iz00_3807 = ((long) 0);
																									BgL_for1052z00_3806:
																										if (
																											(BgL_iz00_3807 <
																												BgL_lenz00_1656))
																											{	/* Unsafe/intext.scm 350 */
																												{	/* Unsafe/intext.scm 350 */
																													BGL_LONGLONG_T
																														BgL_arg1448z00_3812;
																													BgL_arg1448z00_3812 =
																														BGl_readzd2longzd2wordze70ze7zz__intextz00
																														(BgL_za2pointerza2z00_7385,
																														BgL_sz00_7389,
																														BgL_za2strlenza2z00_7384,
																														BgL_sz00_7389,
																														(int)
																														(BgL_bsiza7eza7_1657));
																													{	/* Unsafe/intext.scm 350 */
																														uint64_t
																															BgL_tmpz00_8083;
																														BgL_tmpz00_8083 =
																															(uint64_t)
																															(BgL_arg1448z00_3812);
																														BGL_U64VSET
																															(BgL_resz00_1739,
																															BgL_iz00_3807,
																															BgL_tmpz00_8083);
																													} BUNSPEC;
																												}
																												{
																													long BgL_iz00_8086;

																													BgL_iz00_8086 =
																														(BgL_iz00_3807 +
																														((long) 1));
																													BgL_iz00_3807 =
																														BgL_iz00_8086;
																													goto
																														BgL_for1052z00_3806;
																												}
																											}
																										else
																											{	/* Unsafe/intext.scm 350 */
																												((bool_t) 0);
																											}
																									}
																									return BgL_resz00_1739;
																								}
																							else
																								{	/* Unsafe/intext.scm 317 */
																									if (
																										(BgL_casezd2valuezd2_1658 ==
																											BGl_symbol3333z00zz__intextz00))
																										{	/* Unsafe/intext.scm 353 */
																											obj_t BgL_resz00_1750;

																											{	/* Llib/srfi4.scm 454 */

																												BgL_resz00_1750 =
																													BGl_makezd2f32vectorzd2zz__srfi4z00
																													(BgL_lenz00_1656,
																													(float) (((double)
																															0.0)));
																											}
																											{
																												long BgL_iz00_3824;

																												BgL_iz00_3824 =
																													((long) 0);
																											BgL_for1053z00_3823:
																												if (
																													(BgL_iz00_3824 <
																														BgL_lenz00_1656))
																													{	/* Unsafe/intext.scm 354 */
																														{	/* Unsafe/intext.scm 354 */
																															double
																																BgL_arg1454z00_3829;
																															BgL_arg1454z00_3829
																																=
																																BGl_readzd2floatze70z35zz__intextz00
																																(BgL_za2pointerza2z00_7385,
																																BgL_sz00_7389,
																																BgL_za2strlenza2z00_7384,
																																BgL_sz00_7389);
																															{	/* Unsafe/intext.scm 354 */
																																float
																																	BgL_tmpz00_8095;
																																BgL_tmpz00_8095
																																	=
																																	(float)
																																	(BgL_arg1454z00_3829);
																																BGL_F32VSET
																																	(BgL_resz00_1750,
																																	BgL_iz00_3824,
																																	BgL_tmpz00_8095);
																															} BUNSPEC;
																														}
																														{
																															long
																																BgL_iz00_8098;
																															BgL_iz00_8098 =
																																(BgL_iz00_3824 +
																																((long) 1));
																															BgL_iz00_3824 =
																																BgL_iz00_8098;
																															goto
																																BgL_for1053z00_3823;
																														}
																													}
																												else
																													{	/* Unsafe/intext.scm 354 */
																														((bool_t) 0);
																													}
																											}
																											return BgL_resz00_1750;
																										}
																									else
																										{	/* Unsafe/intext.scm 317 */
																											if (
																												(BgL_casezd2valuezd2_1658
																													==
																													BGl_symbol3335z00zz__intextz00))
																												{	/* Unsafe/intext.scm 357 */
																													obj_t BgL_resz00_1761;

																													{	/* Llib/srfi4.scm 455 */

																														BgL_resz00_1761 =
																															BGl_makezd2f64vectorzd2zz__srfi4z00
																															(BgL_lenz00_1656,
																															((double) 0.0));
																													}
																													{
																														long BgL_iz00_3841;

																														BgL_iz00_3841 =
																															((long) 0);
																													BgL_for1054z00_3840:
																														if (
																															(BgL_iz00_3841 <
																																BgL_lenz00_1656))
																															{	/* Unsafe/intext.scm 358 */
																																{	/* Unsafe/intext.scm 358 */
																																	double
																																		BgL_arg1460z00_3846;
																																	BgL_arg1460z00_3846
																																		=
																																		BGl_readzd2floatze70z35zz__intextz00
																																		(BgL_za2pointerza2z00_7385,
																																		BgL_sz00_7389,
																																		BgL_za2strlenza2z00_7384,
																																		BgL_sz00_7389);
																																	BGL_F64VSET
																																		(BgL_resz00_1761,
																																		BgL_iz00_3841,
																																		BgL_arg1460z00_3846);
																																	BUNSPEC;
																																}
																																{
																																	long
																																		BgL_iz00_8107;
																																	BgL_iz00_8107
																																		=
																																		(BgL_iz00_3841
																																		+
																																		((long) 1));
																																	BgL_iz00_3841
																																		=
																																		BgL_iz00_8107;
																																	goto
																																		BgL_for1054z00_3840;
																																}
																															}
																														else
																															{	/* Unsafe/intext.scm 358 */
																																((bool_t) 0);
																															}
																													}
																													return
																														BgL_resz00_1761;
																												}
																											else
																												{	/* Unsafe/intext.scm 317 */
																													return BUNSPEC;
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
							break;
						case ((unsigned char) '('):

							{	/* Unsafe/intext.scm 385 */
								long BgL_sza7za7_1789;

								{	/* Unsafe/intext.scm 234 */
									long BgL_siza7eza7_3880;

									BgL_siza7eza7_3880 =
										BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
										(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
										BgL_za2strlenza2z00_7384, BgL_sz00_7389);
									BGl_checkzd2siza7ez12ze70z80zz__intextz00(BgL_sz00_7389,
										BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384,
										BgL_siza7eza7_3880, BGl_string3313z00zz__intextz00);
									BgL_sza7za7_1789 = BgL_siza7eza7_3880;
								}
								{	/* Unsafe/intext.scm 385 */
									obj_t BgL_resz00_1790;

									BgL_resz00_1790 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									{	/* Unsafe/intext.scm 386 */

										{	/* Unsafe/intext.scm 387 */
											bool_t BgL_test3517z00_8112;

											{	/* Unsafe/intext.scm 387 */
												obj_t BgL_objz00_3881;

												BgL_objz00_3881 = CELL_REF(BgL_za2definingza2z00_7386);
												BgL_test3517z00_8112 = INTEGERP(BgL_objz00_3881);
											}
											if (BgL_test3517z00_8112)
												{	/* Unsafe/intext.scm 387 */
													{	/* Unsafe/intext.scm 388 */
														obj_t BgL_vectorz00_3883;
														long BgL_kz00_3884;

														BgL_vectorz00_3883 =
															CELL_REF(BgL_za2definitionsza2z00_7388);
														BgL_kz00_3884 =
															(long) CINT(CELL_REF(BgL_za2definingza2z00_7386));
														VECTOR_SET(BgL_vectorz00_3883, BgL_kz00_3884,
															BgL_resz00_1790);
													}
													{	/* Unsafe/intext.scm 389 */
														obj_t BgL_auxz00_7403;

														BgL_auxz00_7403 = BFALSE;
														CELL_SET(BgL_za2definingza2z00_7386,
															BgL_auxz00_7403);
												}}
											else
												{	/* Unsafe/intext.scm 387 */
													BFALSE;
												}
										}
										{
											long BgL_iz00_1793;
											obj_t BgL_hdz00_1794;

											BgL_iz00_1793 = ((long) 0);
											BgL_hdz00_1794 = BgL_resz00_1790;
										BgL_zc3z04anonymousza31473ze3z87_1795:
											if ((BgL_iz00_1793 == (BgL_sza7za7_1789 - ((long) 2))))
												{	/* Unsafe/intext.scm 392 */
													{	/* Unsafe/intext.scm 394 */
														obj_t BgL_arg1476z00_1798;

														BgL_arg1476z00_1798 =
															BGl_readzd2itemze70z35zz__intextz00
															(BgL_extensionz00_7390, BgL_sz00_7389,
															BgL_za2definitionsza2z00_7388,
															BgL_unserializa7ezd2argz75_7387,
															BgL_za2definingza2z00_7386,
															BgL_za2pointerza2z00_7385,
															BgL_za2strlenza2z00_7384);
														{	/* Unsafe/intext.scm 394 */
															obj_t BgL_tmpz00_8120;

															BgL_tmpz00_8120 = ((obj_t) BgL_hdz00_1794);
															SET_CAR(BgL_tmpz00_8120, BgL_arg1476z00_1798);
													}}
													{	/* Unsafe/intext.scm 395 */
														obj_t BgL_arg1477z00_1799;

														BgL_arg1477z00_1799 =
															BGl_readzd2itemze70z35zz__intextz00
															(BgL_extensionz00_7390, BgL_sz00_7389,
															BgL_za2definitionsza2z00_7388,
															BgL_unserializa7ezd2argz75_7387,
															BgL_za2definingza2z00_7386,
															BgL_za2pointerza2z00_7385,
															BgL_za2strlenza2z00_7384);
														{	/* Unsafe/intext.scm 395 */
															obj_t BgL_tmpz00_8124;

															BgL_tmpz00_8124 = ((obj_t) BgL_hdz00_1794);
															SET_CDR(BgL_tmpz00_8124, BgL_arg1477z00_1799);
												}}}
											else
												{	/* Unsafe/intext.scm 392 */
													{	/* Unsafe/intext.scm 397 */
														obj_t BgL_arg1478z00_1800;

														BgL_arg1478z00_1800 =
															BGl_readzd2itemze70z35zz__intextz00
															(BgL_extensionz00_7390, BgL_sz00_7389,
															BgL_za2definitionsza2z00_7388,
															BgL_unserializa7ezd2argz75_7387,
															BgL_za2definingza2z00_7386,
															BgL_za2pointerza2z00_7385,
															BgL_za2strlenza2z00_7384);
														{	/* Unsafe/intext.scm 397 */
															obj_t BgL_tmpz00_8128;

															BgL_tmpz00_8128 = ((obj_t) BgL_hdz00_1794);
															SET_CAR(BgL_tmpz00_8128, BgL_arg1478z00_1800);
														}
													}
													{	/* Unsafe/intext.scm 398 */
														obj_t BgL_arg1479z00_1801;

														BgL_arg1479z00_1801 = MAKE_YOUNG_PAIR(BNIL, BNIL);
														{	/* Unsafe/intext.scm 398 */
															obj_t BgL_tmpz00_8132;

															BgL_tmpz00_8132 = ((obj_t) BgL_hdz00_1794);
															SET_CDR(BgL_tmpz00_8132, BgL_arg1479z00_1801);
														}
													}
													{	/* Unsafe/intext.scm 399 */
														long BgL_arg1480z00_1802;
														obj_t BgL_arg1483z00_1803;

														BgL_arg1480z00_1802 = (BgL_iz00_1793 + ((long) 1));
														BgL_arg1483z00_1803 = CDR(((obj_t) BgL_hdz00_1794));
														{
															obj_t BgL_hdz00_8139;
															long BgL_iz00_8138;

															BgL_iz00_8138 = BgL_arg1480z00_1802;
															BgL_hdz00_8139 = BgL_arg1483z00_1803;
															BgL_hdz00_1794 = BgL_hdz00_8139;
															BgL_iz00_1793 = BgL_iz00_8138;
															goto BgL_zc3z04anonymousza31473ze3z87_1795;
														}
													}
												}
										}
										return BgL_resz00_1790;
									}
								}
							}
							break;
						case ((unsigned char) '^'):

							{	/* Unsafe/intext.scm 404 */
								long BgL_sza7za7_1807;

								{	/* Unsafe/intext.scm 234 */
									long BgL_siza7eza7_3897;

									BgL_siza7eza7_3897 =
										BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
										(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
										BgL_za2strlenza2z00_7384, BgL_sz00_7389);
									BGl_checkzd2siza7ez12ze70z80zz__intextz00(BgL_sz00_7389,
										BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384,
										BgL_siza7eza7_3897, BGl_string3312z00zz__intextz00);
									BgL_sza7za7_1807 = BgL_siza7eza7_3897;
								}
								{	/* Unsafe/intext.scm 404 */
									obj_t BgL_resz00_1808;

									{	/* Unsafe/intext.scm 405 */
										obj_t BgL_res2580z00_3898;

										BgL_res2580z00_3898 = MAKE_YOUNG_EPAIR(BNIL, BNIL, BUNSPEC);
										BgL_resz00_1808 = BgL_res2580z00_3898;
									}
									{	/* Unsafe/intext.scm 405 */

										{	/* Unsafe/intext.scm 406 */
											bool_t BgL_test3519z00_8143;

											{	/* Unsafe/intext.scm 406 */
												obj_t BgL_objz00_3899;

												BgL_objz00_3899 = CELL_REF(BgL_za2definingza2z00_7386);
												BgL_test3519z00_8143 = INTEGERP(BgL_objz00_3899);
											}
											if (BgL_test3519z00_8143)
												{	/* Unsafe/intext.scm 406 */
													{	/* Unsafe/intext.scm 407 */
														obj_t BgL_vectorz00_3901;
														long BgL_kz00_3902;

														BgL_vectorz00_3901 =
															CELL_REF(BgL_za2definitionsza2z00_7388);
														BgL_kz00_3902 =
															(long) CINT(CELL_REF(BgL_za2definingza2z00_7386));
														VECTOR_SET(BgL_vectorz00_3901, BgL_kz00_3902,
															BgL_resz00_1808);
													}
													{	/* Unsafe/intext.scm 408 */
														obj_t BgL_auxz00_7402;

														BgL_auxz00_7402 = BFALSE;
														CELL_SET(BgL_za2definingza2z00_7386,
															BgL_auxz00_7402);
												}}
											else
												{	/* Unsafe/intext.scm 406 */
													BFALSE;
												}
										}
										{
											long BgL_iz00_1811;
											obj_t BgL_hdz00_1812;

											BgL_iz00_1811 = ((long) 0);
											BgL_hdz00_1812 = BgL_resz00_1808;
										BgL_zc3z04anonymousza31487ze3z87_1813:
											if ((BgL_iz00_1811 == (BgL_sza7za7_1807 - ((long) 2))))
												{	/* Unsafe/intext.scm 411 */
													{	/* Unsafe/intext.scm 413 */
														obj_t BgL_arg1491z00_1816;

														BgL_arg1491z00_1816 =
															BGl_readzd2itemze70z35zz__intextz00
															(BgL_extensionz00_7390, BgL_sz00_7389,
															BgL_za2definitionsza2z00_7388,
															BgL_unserializa7ezd2argz75_7387,
															BgL_za2definingza2z00_7386,
															BgL_za2pointerza2z00_7385,
															BgL_za2strlenza2z00_7384);
														{	/* Unsafe/intext.scm 413 */
															obj_t BgL_tmpz00_8151;

															BgL_tmpz00_8151 = ((obj_t) BgL_hdz00_1812);
															SET_CAR(BgL_tmpz00_8151, BgL_arg1491z00_1816);
													}}
													{	/* Unsafe/intext.scm 414 */
														obj_t BgL_arg1492z00_1817;

														BgL_arg1492z00_1817 =
															BGl_readzd2itemze70z35zz__intextz00
															(BgL_extensionz00_7390, BgL_sz00_7389,
															BgL_za2definitionsza2z00_7388,
															BgL_unserializa7ezd2argz75_7387,
															BgL_za2definingza2z00_7386,
															BgL_za2pointerza2z00_7385,
															BgL_za2strlenza2z00_7384);
														{	/* Unsafe/intext.scm 414 */
															obj_t BgL_tmpz00_8155;

															BgL_tmpz00_8155 = ((obj_t) BgL_hdz00_1812);
															SET_CER(BgL_tmpz00_8155, BgL_arg1492z00_1817);
													}}
													{	/* Unsafe/intext.scm 415 */
														obj_t BgL_arg1493z00_1818;

														BgL_arg1493z00_1818 =
															BGl_readzd2itemze70z35zz__intextz00
															(BgL_extensionz00_7390, BgL_sz00_7389,
															BgL_za2definitionsza2z00_7388,
															BgL_unserializa7ezd2argz75_7387,
															BgL_za2definingza2z00_7386,
															BgL_za2pointerza2z00_7385,
															BgL_za2strlenza2z00_7384);
														{	/* Unsafe/intext.scm 415 */
															obj_t BgL_tmpz00_8159;

															BgL_tmpz00_8159 = ((obj_t) BgL_hdz00_1812);
															SET_CDR(BgL_tmpz00_8159, BgL_arg1493z00_1818);
												}}}
											else
												{	/* Unsafe/intext.scm 411 */
													{	/* Unsafe/intext.scm 417 */
														obj_t BgL_arg1494z00_1819;

														BgL_arg1494z00_1819 =
															BGl_readzd2itemze70z35zz__intextz00
															(BgL_extensionz00_7390, BgL_sz00_7389,
															BgL_za2definitionsza2z00_7388,
															BgL_unserializa7ezd2argz75_7387,
															BgL_za2definingza2z00_7386,
															BgL_za2pointerza2z00_7385,
															BgL_za2strlenza2z00_7384);
														{	/* Unsafe/intext.scm 417 */
															obj_t BgL_tmpz00_8163;

															BgL_tmpz00_8163 = ((obj_t) BgL_hdz00_1812);
															SET_CAR(BgL_tmpz00_8163, BgL_arg1494z00_1819);
														}
													}
													{	/* Unsafe/intext.scm 418 */
														obj_t BgL_arg1495z00_1820;

														BgL_arg1495z00_1820 =
															BGl_readzd2itemze70z35zz__intextz00
															(BgL_extensionz00_7390, BgL_sz00_7389,
															BgL_za2definitionsza2z00_7388,
															BgL_unserializa7ezd2argz75_7387,
															BgL_za2definingza2z00_7386,
															BgL_za2pointerza2z00_7385,
															BgL_za2strlenza2z00_7384);
														{	/* Unsafe/intext.scm 418 */
															obj_t BgL_tmpz00_8167;

															BgL_tmpz00_8167 = ((obj_t) BgL_hdz00_1812);
															SET_CER(BgL_tmpz00_8167, BgL_arg1495z00_1820);
														}
													}
													{	/* Unsafe/intext.scm 419 */
														obj_t BgL_arg1496z00_1821;

														{	/* Unsafe/intext.scm 419 */
															obj_t BgL_res2584z00_3913;

															BgL_res2584z00_3913 =
																MAKE_YOUNG_EPAIR(BNIL, BNIL, BUNSPEC);
															BgL_arg1496z00_1821 = BgL_res2584z00_3913;
														}
														{	/* Unsafe/intext.scm 419 */
															obj_t BgL_tmpz00_8171;

															BgL_tmpz00_8171 = ((obj_t) BgL_hdz00_1812);
															SET_CDR(BgL_tmpz00_8171, BgL_arg1496z00_1821);
														}
													}
													{	/* Unsafe/intext.scm 420 */
														long BgL_arg1497z00_1822;
														obj_t BgL_arg1498z00_1823;

														BgL_arg1497z00_1822 = (BgL_iz00_1811 + ((long) 1));
														BgL_arg1498z00_1823 = CDR(((obj_t) BgL_hdz00_1812));
														{
															obj_t BgL_hdz00_8178;
															long BgL_iz00_8177;

															BgL_iz00_8177 = BgL_arg1497z00_1822;
															BgL_hdz00_8178 = BgL_arg1498z00_1823;
															BgL_hdz00_1812 = BgL_hdz00_8178;
															BgL_iz00_1811 = BgL_iz00_8177;
															goto BgL_zc3z04anonymousza31487ze3z87_1813;
														}
													}
												}
										}
										return BgL_resz00_1808;
									}
								}
							}
							break;
						case ((unsigned char) '{'):

							{	/* Unsafe/intext.scm 458 */
								obj_t BgL_definingz00_1841;

								{	/* Unsafe/intext.scm 458 */
									obj_t BgL_oldz00_1853;

									BgL_oldz00_1853 = CELL_REF(BgL_za2definingza2z00_7386);
									{	/* Unsafe/intext.scm 459 */
										obj_t BgL_auxz00_7399;

										BgL_auxz00_7399 = BFALSE;
										CELL_SET(BgL_za2definingza2z00_7386, BgL_auxz00_7399);
									}
									BgL_definingz00_1841 = BgL_oldz00_1853;
								}
								{	/* Unsafe/intext.scm 458 */
									obj_t BgL_keyz00_1842;

									BgL_keyz00_1842 =
										BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
										BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
										BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
										BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384);
									{	/* Unsafe/intext.scm 461 */
										long BgL_sza7za7_1843;

										{	/* Unsafe/intext.scm 234 */
											long BgL_siza7eza7_3933;

											BgL_siza7eza7_3933 =
												BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
												(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
												BgL_za2strlenza2z00_7384, BgL_sz00_7389);
											BGl_checkzd2siza7ez12ze70z80zz__intextz00(BgL_sz00_7389,
												BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384,
												BgL_siza7eza7_3933, BGl_string3311z00zz__intextz00);
											BgL_sza7za7_1843 = BgL_siza7eza7_3933;
										}
										{	/* Unsafe/intext.scm 462 */
											obj_t BgL_resz00_1844;

											{	/* Unsafe/intext.scm 463 */
												obj_t BgL_res2592z00_3936;

												{	/* Unsafe/intext.scm 463 */
													int BgL_lenz00_3935;

													BgL_lenz00_3935 = (int) (BgL_sza7za7_1843);
													BgL_res2592z00_3936 =
														make_struct(
														((obj_t) BgL_keyz00_1842), BgL_lenz00_3935,
														BUNSPEC);
												}
												BgL_resz00_1844 = BgL_res2592z00_3936;
											}
											{	/* Unsafe/intext.scm 463 */

												if (INTEGERP(BgL_definingz00_1841))
													{	/* Unsafe/intext.scm 465 */
														obj_t BgL_vectorz00_3938;
														long BgL_kz00_3939;

														BgL_vectorz00_3938 =
															CELL_REF(BgL_za2definitionsza2z00_7388);
														BgL_kz00_3939 = (long) CINT(BgL_definingz00_1841);
														VECTOR_SET(BgL_vectorz00_3938, BgL_kz00_3939,
															BgL_resz00_1844);
													}
												else
													{	/* Unsafe/intext.scm 464 */
														BFALSE;
													}
												{
													long BgL_iz00_3948;

													BgL_iz00_3948 = ((long) 0);
												BgL_for1056z00_3947:
													if ((BgL_iz00_3948 < BgL_sza7za7_1843))
														{	/* Unsafe/intext.scm 466 */
															{	/* Unsafe/intext.scm 466 */
																obj_t BgL_auxz00_8193;
																int BgL_tmpz00_8191;

																BgL_auxz00_8193 =
																	BGl_readzd2itemze70z35zz__intextz00
																	(BgL_extensionz00_7390, BgL_sz00_7389,
																	BgL_za2definitionsza2z00_7388,
																	BgL_unserializa7ezd2argz75_7387,
																	BgL_za2definingza2z00_7386,
																	BgL_za2pointerza2z00_7385,
																	BgL_za2strlenza2z00_7384);
																BgL_tmpz00_8191 = (int) (BgL_iz00_3948);
																STRUCT_SET(BgL_resz00_1844, BgL_tmpz00_8191,
																	BgL_auxz00_8193);
															}
															{
																long BgL_iz00_8196;

																BgL_iz00_8196 = (BgL_iz00_3948 + ((long) 1));
																BgL_iz00_3948 = BgL_iz00_8196;
																goto BgL_for1056z00_3947;
															}
														}
													else
														{	/* Unsafe/intext.scm 466 */
															((bool_t) 0);
														}
												}
												return BgL_resz00_1844;
											}
										}
									}
								}
							}
							break;
						case ((unsigned char) '|'):

							BgL_sz00_1854 = BgL_sz00_7389;
							{	/* Unsafe/intext.scm 471 */
								obj_t BgL_definingz00_1856;

								{	/* Unsafe/intext.scm 471 */
									obj_t BgL_oldz00_1884;

									BgL_oldz00_1884 = CELL_REF(BgL_za2definingza2z00_7386);
									{	/* Unsafe/intext.scm 472 */
										obj_t BgL_auxz00_7398;

										BgL_auxz00_7398 = BFALSE;
										CELL_SET(BgL_za2definingza2z00_7386, BgL_auxz00_7398);
									}
									BgL_definingz00_1856 = BgL_oldz00_1884;
								}
								{	/* Unsafe/intext.scm 471 */
									obj_t BgL_cnamez00_1857;

									BgL_cnamez00_1857 =
										BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
										BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
										BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
										BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384);
									{	/* Unsafe/intext.scm 474 */
										long BgL_sza7za7_1858;

										{	/* Unsafe/intext.scm 234 */
											long BgL_siza7eza7_3959;

											BgL_siza7eza7_3959 =
												BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
												(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
												BgL_za2strlenza2z00_7384, BgL_sz00_1854);
											BGl_checkzd2siza7ez12ze70z80zz__intextz00(BgL_sz00_7389,
												BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384,
												BgL_siza7eza7_3959, BGl_string3308z00zz__intextz00);
											BgL_sza7za7_1858 = BgL_siza7eza7_3959;
										}
										{	/* Unsafe/intext.scm 475 */
											BgL_objectz00_bglt BgL_objz00_1859;

											BgL_objz00_1859 =
												BGl_allocatezd2instancezd2zz__objectz00
												(BgL_cnamez00_1857);
											{	/* Unsafe/intext.scm 476 */
												obj_t BgL_klassz00_1860;

												{	/* Unsafe/intext.scm 477 */
													long BgL_arg2456z00_3961;

													{	/* Unsafe/intext.scm 477 */
														long BgL_arg2457z00_3962;

														{	/* Unsafe/intext.scm 477 */
															long BgL_res2596z00_3964;

															BgL_res2596z00_3964 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_1859);
															BgL_arg2457z00_3962 = BgL_res2596z00_3964;
														}
														BgL_arg2456z00_3961 =
															(BgL_arg2457z00_3962 - OBJECT_TYPE);
													}
													BgL_klassz00_1860 =
														VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
														BgL_arg2456z00_3961);
												}
												{	/* Unsafe/intext.scm 477 */
													obj_t BgL_fieldsz00_1861;

													{	/* Unsafe/intext.scm 478 */
														obj_t BgL_res2598z00_3971;

														{	/* Unsafe/intext.scm 478 */
															obj_t BgL_tmpz00_8205;

															BgL_tmpz00_8205 = ((obj_t) BgL_klassz00_1860);
															BgL_res2598z00_3971 =
																BGL_CLASS_ALL_FIELDS(BgL_tmpz00_8205);
														}
														BgL_fieldsz00_1861 = BgL_res2598z00_3971;
													}
													{	/* Unsafe/intext.scm 478 */

														if (
															((BgL_sza7za7_1858 - ((long) 1)) ==
																VECTOR_LENGTH(BgL_fieldsz00_1861)))
															{	/* Unsafe/intext.scm 479 */
																BFALSE;
															}
														else
															{	/* Unsafe/intext.scm 479 */
																BGl_errorz00zz__errorz00
																	(BGl_string3286z00zz__intextz00,
																	BGl_string3309z00zz__intextz00,
																	BgL_cnamez00_1857);
															}
														if (INTEGERP(BgL_definingz00_1856))
															{	/* Unsafe/intext.scm 482 */
																obj_t BgL_vectorz00_3979;
																long BgL_kz00_3980;

																BgL_vectorz00_3979 =
																	CELL_REF(BgL_za2definitionsza2z00_7388);
																BgL_kz00_3980 =
																	(long) CINT(BgL_definingz00_1856);
																VECTOR_SET(BgL_vectorz00_3979, BgL_kz00_3980,
																	((obj_t) BgL_objz00_1859));
															}
														else
															{	/* Unsafe/intext.scm 481 */
																BFALSE;
															}
														BGl_readzd2itemze70z35zz__intextz00
															(BgL_extensionz00_7390, BgL_sz00_7389,
															BgL_za2definitionsza2z00_7388,
															BgL_unserializa7ezd2argz75_7387,
															BgL_za2definingza2z00_7386,
															BgL_za2pointerza2z00_7385,
															BgL_za2strlenza2z00_7384);
														{
															long BgL_iz00_1869;

															BgL_iz00_1869 = ((long) 0);
														BgL_zc3z04anonymousza31526ze3z87_1870:
															if (
																(BgL_iz00_1869 <
																	(BgL_sza7za7_1858 - ((long) 1))))
																{	/* Unsafe/intext.scm 486 */
																	{	/* Unsafe/intext.scm 488 */
																		obj_t BgL_fz00_1873;

																		BgL_fz00_1873 =
																			VECTOR_REF(BgL_fieldsz00_1861,
																			BgL_iz00_1869);
																		if (BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(BgL_fz00_1873))
																			{	/* Unsafe/intext.scm 489 */
																				BFALSE;
																			}
																		else
																			{	/* Unsafe/intext.scm 490 */
																				obj_t BgL_fun1532z00_1875;

																				BgL_fun1532z00_1875 =
																					BGl_classzd2fieldzd2mutatorz00zz__objectz00
																					(BgL_fz00_1873);
																				{	/* Unsafe/intext.scm 490 */
																					obj_t BgL_arg1531z00_1876;

																					BgL_arg1531z00_1876 =
																						BGl_readzd2itemze70z35zz__intextz00
																						(BgL_extensionz00_7390,
																						BgL_sz00_7389,
																						BgL_za2definitionsza2z00_7388,
																						BgL_unserializa7ezd2argz75_7387,
																						BgL_za2definingza2z00_7386,
																						BgL_za2pointerza2z00_7385,
																						BgL_za2strlenza2z00_7384);
																					PROCEDURE_ENTRY(BgL_fun1532z00_1875)
																						(BgL_fun1532z00_1875,
																						((obj_t) BgL_objz00_1859),
																						BgL_arg1531z00_1876, BEOA);
																				}
																			}
																	}
																	{
																		long BgL_iz00_8233;

																		BgL_iz00_8233 =
																			(BgL_iz00_1869 + ((long) 1));
																		BgL_iz00_1869 = BgL_iz00_8233;
																		goto BgL_zc3z04anonymousza31526ze3z87_1870;
																	}
																}
															else
																{	/* Unsafe/intext.scm 486 */
																	((bool_t) 0);
																}
														}
														{	/* Unsafe/intext.scm 491 */
															long BgL_hashz00_1880;

															BgL_hashz00_1880 =
																BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
																(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
																BgL_za2strlenza2z00_7384, BgL_sz00_1854);
															if ((BgL_hashz00_1880 ==
																	BGl_classzd2hashzd2zz__objectz00
																	(BgL_klassz00_1860)))
																{	/* Unsafe/intext.scm 492 */
																	return ((obj_t) BgL_objz00_1859);
																}
															else
																{	/* Unsafe/intext.scm 492 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_string3286z00zz__intextz00,
																		BGl_string3310z00zz__intextz00,
																		BgL_cnamez00_1857);
																}
														}
													}
												}
											}
										}
									}
								}
							}
							break;
						case ((unsigned char) 'O'):

							{	/* Unsafe/intext.scm 498 */
								obj_t BgL_definingz00_1886;

								{	/* Unsafe/intext.scm 498 */
									obj_t BgL_oldz00_1894;

									BgL_oldz00_1894 = CELL_REF(BgL_za2definingza2z00_7386);
									{	/* Unsafe/intext.scm 499 */
										obj_t BgL_auxz00_7397;

										BgL_auxz00_7397 = BFALSE;
										CELL_SET(BgL_za2definingza2z00_7386, BgL_auxz00_7397);
									}
									BgL_definingz00_1886 = BgL_oldz00_1894;
								}
								{	/* Unsafe/intext.scm 498 */
									obj_t BgL_hashobjz00_1887;

									BgL_hashobjz00_1887 =
										BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
										BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
										BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
										BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384);
									{	/* Unsafe/intext.scm 501 */
										obj_t BgL_hash_z00_1888;

										BgL_hash_z00_1888 =
											BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
											BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
											BgL_unserializa7ezd2argz75_7387,
											BgL_za2definingza2z00_7386, BgL_za2pointerza2z00_7385,
											BgL_za2strlenza2z00_7384);
										{	/* Unsafe/intext.scm 502 */
											obj_t BgL_hashz00_1889;

											BgL_hashz00_1889 = CAR(((obj_t) BgL_hashobjz00_1887));
											{	/* Unsafe/intext.scm 503 */
												obj_t BgL_objz00_1890;

												BgL_objz00_1890 = CDR(((obj_t) BgL_hashobjz00_1887));
												{	/* Unsafe/intext.scm 504 */
													obj_t BgL_unserializa7erza7_1891;

													BgL_unserializa7erza7_1891 =
														BGl_findzd2classzd2unserializa7erza7zz__intextz00
														(BgL_hashz00_1889);
													{	/* Unsafe/intext.scm 505 */
														obj_t BgL_valz00_1892;

														BgL_valz00_1892 =
															PROCEDURE_ENTRY(BgL_unserializa7erza7_1891)
															(BgL_unserializa7erza7_1891, BgL_objz00_1890,
															BgL_unserializa7ezd2argz75_7387, BEOA);
														{	/* Unsafe/intext.scm 506 */

															if (INTEGERP(BgL_definingz00_1886))
																{	/* Unsafe/intext.scm 508 */
																	obj_t BgL_vectorz00_3996;
																	long BgL_kz00_3997;

																	BgL_vectorz00_3996 =
																		CELL_REF(BgL_za2definitionsza2z00_7388);
																	BgL_kz00_3997 =
																		(long) CINT(BgL_definingz00_1886);
																	VECTOR_SET(BgL_vectorz00_3996, BgL_kz00_3997,
																		BgL_valz00_1892);
																}
															else
																{	/* Unsafe/intext.scm 507 */
																	BFALSE;
																}
															return BgL_valz00_1892;
														}
													}
												}
											}
										}
									}
								}
							}
							break;
						case ((unsigned char) 'f'):

							return
								DOUBLE_TO_REAL(BGl_readzd2floatze70z35zz__intextz00
								(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
									BgL_za2strlenza2z00_7384, BgL_sz00_7389));
							break;
						case ((unsigned char) 'z'):

							BgL_sz00_1559 = BgL_sz00_7389;
							{	/* Unsafe/intext.scm 195 */
								long BgL_sza7za7_1561;

								{	/* Unsafe/intext.scm 234 */
									long BgL_siza7eza7_3511;

									BgL_siza7eza7_3511 =
										BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
										(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
										BgL_za2strlenza2z00_7384, BgL_sz00_1559);
									BGl_checkzd2siza7ez12ze70z80zz__intextz00(BgL_sz00_7389,
										BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384,
										BgL_siza7eza7_3511, BGl_string3342z00zz__intextz00);
									BgL_sza7za7_1561 = BgL_siza7eza7_3511;
								}
								{	/* Unsafe/intext.scm 195 */
									obj_t BgL_resz00_1562;

									{	/* Unsafe/intext.scm 196 */
										obj_t BgL_arg1345z00_1563;

										{	/* Unsafe/intext.scm 196 */
											long BgL_arg1347z00_1566;

											{	/* Unsafe/intext.scm 196 */
												long BgL_za71za7_3512;

												BgL_za71za7_3512 =
													(long) CINT(CELL_REF(BgL_za2pointerza2z00_7385));
												BgL_arg1347z00_1566 =
													(BgL_za71za7_3512 + BgL_sza7za7_1561);
											}
											{	/* Unsafe/intext.scm 196 */
												obj_t BgL_res2497z00_3518;

												{	/* Unsafe/intext.scm 196 */
													long BgL_startz00_3516;

													BgL_startz00_3516 =
														(long) CINT(CELL_REF(BgL_za2pointerza2z00_7385));
													BgL_res2497z00_3518 =
														c_substring(BgL_sz00_1559, BgL_startz00_3516,
														BgL_arg1347z00_1566);
												}
												BgL_arg1345z00_1563 = BgL_res2497z00_3518;
										}}
										{	/* Ieee/fixnum.scm 989 */

											BgL_resz00_1562 =
												BGl_stringzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00
												(BgL_arg1345z00_1563, ((long) 10));
									}}
									{	/* Unsafe/intext.scm 196 */

										{	/* Unsafe/intext.scm 197 */
											obj_t BgL_auxz00_7409;

											BgL_auxz00_7409 =
												ADDFX(CELL_REF(BgL_za2pointerza2z00_7385),
												BINT(BgL_sza7za7_1561));
											CELL_SET(BgL_za2pointerza2z00_7385, BgL_auxz00_7409);
										}
										return BgL_resz00_1562;
									}
								}
							}
							break;
						case ((unsigned char) '-'):

							{	/* Unsafe/intext.scm 593 */
								long BgL_arg1583z00_1963;

								BgL_arg1583z00_1963 =
									BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
									(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
									BgL_za2strlenza2z00_7384, BgL_sz00_7389);
								return BINT(NEG(BgL_arg1583z00_1963));
							}
							break;
						case ((unsigned char) '!'):

							{	/* Unsafe/intext.scm 425 */
								obj_t BgL_resz00_1827;

								{	/* Unsafe/intext.scm 425 */
									obj_t BgL_res2587z00_3919;

									BgL_res2587z00_3919 = MAKE_YOUNG_CELL(BUNSPEC);
									BgL_resz00_1827 = BgL_res2587z00_3919;
								}
								{	/* Unsafe/intext.scm 426 */
									bool_t BgL_test3529z00_8272;

									{	/* Unsafe/intext.scm 426 */
										obj_t BgL_objz00_3920;

										BgL_objz00_3920 = CELL_REF(BgL_za2definingza2z00_7386);
										BgL_test3529z00_8272 = INTEGERP(BgL_objz00_3920);
									}
									if (BgL_test3529z00_8272)
										{	/* Unsafe/intext.scm 426 */
											{	/* Unsafe/intext.scm 427 */
												obj_t BgL_vectorz00_3922;
												long BgL_kz00_3923;

												BgL_vectorz00_3922 =
													CELL_REF(BgL_za2definitionsza2z00_7388);
												BgL_kz00_3923 =
													(long) CINT(CELL_REF(BgL_za2definingza2z00_7386));
												VECTOR_SET(BgL_vectorz00_3922, BgL_kz00_3923,
													BgL_resz00_1827);
											}
											{	/* Unsafe/intext.scm 428 */
												obj_t BgL_auxz00_7401;

												BgL_auxz00_7401 = BFALSE;
												CELL_SET(BgL_za2definingza2z00_7386, BgL_auxz00_7401);
										}}
									else
										{	/* Unsafe/intext.scm 426 */
											BFALSE;
										}
								}
								CELL_SET(BgL_resz00_1827,
									BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
										BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
										BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
										BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384));
								return BgL_resz00_1827;
							}
							break;
						case ((unsigned char) 'w'):

							{	/* Unsafe/intext.scm 434 */
								obj_t BgL_resz00_1832;

								BgL_resz00_1832 = make_weakptr(BUNSPEC);
								{	/* Unsafe/intext.scm 435 */
									bool_t BgL_test3530z00_8279;

									{	/* Unsafe/intext.scm 435 */
										obj_t BgL_objz00_3927;

										BgL_objz00_3927 = CELL_REF(BgL_za2definingza2z00_7386);
										BgL_test3530z00_8279 = INTEGERP(BgL_objz00_3927);
									}
									if (BgL_test3530z00_8279)
										{	/* Unsafe/intext.scm 435 */
											{	/* Unsafe/intext.scm 436 */
												obj_t BgL_vectorz00_3929;
												long BgL_kz00_3930;

												BgL_vectorz00_3929 =
													CELL_REF(BgL_za2definitionsza2z00_7388);
												BgL_kz00_3930 =
													(long) CINT(CELL_REF(BgL_za2definingza2z00_7386));
												VECTOR_SET(BgL_vectorz00_3929, BgL_kz00_3930,
													BgL_resz00_1832);
											}
											{	/* Unsafe/intext.scm 437 */
												obj_t BgL_auxz00_7400;

												BgL_auxz00_7400 = BFALSE;
												CELL_SET(BgL_za2definingza2z00_7386, BgL_auxz00_7400);
										}}
									else
										{	/* Unsafe/intext.scm 435 */
											BFALSE;
										}
								}
								{	/* Unsafe/intext.scm 438 */
									obj_t BgL_arg1509z00_1834;

									BgL_arg1509z00_1834 =
										BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
										BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
										BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
										BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384);
									weakptr_data_set(BgL_resz00_1832, BgL_arg1509z00_1834);
									BUNSPEC;
									BUNSPEC;
								}
								return BgL_resz00_1832;
							}
							break;
						case ((unsigned char) '+'):

							{	/* Unsafe/intext.scm 275 */
								obj_t BgL_strz00_1623;

								BgL_strz00_1623 =
									BGl_readzd2stringze70z35zz__intextz00
									(BgL_za2definingza2z00_7386, BgL_za2definitionsza2z00_7388,
									BgL_za2pointerza2z00_7385, BgL_sz00_7389,
									BgL_za2strlenza2z00_7384, BgL_sz00_7389);
								{	/* Unsafe/intext.scm 275 */
									obj_t BgL_str2z00_1624;

									BgL_str2z00_1624 =
										BGl_readzd2stringze70z35zz__intextz00
										(BgL_za2definingza2z00_7386, BgL_za2definitionsza2z00_7388,
										BgL_za2pointerza2z00_7385, BgL_sz00_7389,
										BgL_za2strlenza2z00_7384, BgL_sz00_7389);
									{	/* Unsafe/intext.scm 276 */
										obj_t BgL_unserializa7erza7_1625;

										{	/* Unsafe/intext.scm 1387 */
											obj_t BgL_cellz00_3607;

											BgL_cellz00_3607 =
												BGl_assocz00zz__r4_pairs_and_lists_6_3z00
												(BgL_strz00_1623,
												BGl_za2customzd2serializa7ationza2z75zz__intextz00);
											if (PAIRP(BgL_cellz00_3607))
												{	/* Unsafe/intext.scm 1388 */
													BgL_unserializa7erza7_1625 =
														CAR(CDR(CDR(BgL_cellz00_3607)));
												}
											else
												{	/* Unsafe/intext.scm 1388 */
													BgL_unserializa7erza7_1625 =
														BGl_errorz00zz__errorz00
														(BGl_string3286z00zz__intextz00,
														BGl_string3340z00zz__intextz00,
														BGl_excerptz00zz__intextz00(BgL_strz00_1623));
												}
										}
										{	/* Unsafe/intext.scm 277 */

											if (PROCEDUREP(BgL_unserializa7erza7_1625))
												{	/* Unsafe/intext.scm 278 */
													return
														PROCEDURE_ENTRY(BgL_unserializa7erza7_1625)
														(BgL_unserializa7erza7_1625, BgL_str2z00_1624,
														BEOA);
												}
											else
												{	/* Unsafe/intext.scm 278 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string3286z00zz__intextz00,
														BGl_string3341z00zz__intextz00, BgL_strz00_1623);
												}
										}
									}
								}
							}
							break;
						case ((unsigned char) 'E'):

							{	/* Unsafe/intext.scm 597 */
								long BgL_tmpz00_8302;

								{	/* Unsafe/intext.scm 291 */
									long BgL_sza7za7_1631;

									{	/* Unsafe/intext.scm 234 */
										long BgL_siza7eza7_3619;

										BgL_siza7eza7_3619 =
											BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
											(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
											BgL_za2strlenza2z00_7384, BgL_sz00_7389);
										BGl_checkzd2siza7ez12ze70z80zz__intextz00(BgL_sz00_7389,
											BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384,
											BgL_siza7eza7_3619, BGl_string3339z00zz__intextz00);
										BgL_sza7za7_1631 = BgL_siza7eza7_3619;
									}
									{	/* Unsafe/intext.scm 291 */
										long BgL_resz00_1632;

										{	/* Unsafe/intext.scm 292 */
											obj_t BgL_arg1387z00_1633;

											{	/* Unsafe/intext.scm 292 */
												long BgL_arg1389z00_1636;

												{	/* Unsafe/intext.scm 292 */
													long BgL_za71za7_3620;

													BgL_za71za7_3620 =
														(long) CINT(CELL_REF(BgL_za2pointerza2z00_7385));
													BgL_arg1389z00_1636 =
														(BgL_za71za7_3620 + BgL_sza7za7_1631);
												}
												{	/* Unsafe/intext.scm 292 */
													obj_t BgL_res2531z00_3626;

													{	/* Unsafe/intext.scm 292 */
														long BgL_startz00_3624;

														BgL_startz00_3624 =
															(long) CINT(CELL_REF(BgL_za2pointerza2z00_7385));
														BgL_res2531z00_3626 =
															c_substring(BgL_sz00_7389, BgL_startz00_3624,
															BgL_arg1389z00_1636);
													}
													BgL_arg1387z00_1633 = BgL_res2531z00_3626;
											}}
											{	/* Ieee/fixnum.scm 985 */

												BgL_resz00_1632 =
													BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00
													(BgL_arg1387z00_1633, ((long) 10));
										}}
										{	/* Unsafe/intext.scm 292 */

											{	/* Unsafe/intext.scm 293 */
												obj_t BgL_auxz00_7408;

												BgL_auxz00_7408 =
													ADDFX(CELL_REF(BgL_za2pointerza2z00_7385),
													BINT(BgL_sza7za7_1631));
												CELL_SET(BgL_za2pointerza2z00_7385, BgL_auxz00_7408);
											}
											BgL_tmpz00_8302 = BgL_resz00_1632;
								}}}
								return make_belong(BgL_tmpz00_8302);
							}
							break;
						case ((unsigned char) 'L'):

							{	/* Unsafe/intext.scm 598 */
								BGL_LONGLONG_T BgL_tmpz00_8313;

								{	/* Unsafe/intext.scm 298 */
									long BgL_sza7za7_1638;

									{	/* Unsafe/intext.scm 234 */
										long BgL_siza7eza7_3630;

										BgL_siza7eza7_3630 =
											BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
											(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
											BgL_za2strlenza2z00_7384, BgL_sz00_7389);
										BGl_checkzd2siza7ez12ze70z80zz__intextz00(BgL_sz00_7389,
											BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384,
											BgL_siza7eza7_3630, BGl_string3338z00zz__intextz00);
										BgL_sza7za7_1638 = BgL_siza7eza7_3630;
									}
									{	/* Unsafe/intext.scm 298 */
										BGL_LONGLONG_T BgL_resz00_1639;

										{	/* Unsafe/intext.scm 299 */
											obj_t BgL_arg1391z00_1640;

											{	/* Unsafe/intext.scm 299 */
												long BgL_arg1393z00_1643;

												{	/* Unsafe/intext.scm 299 */
													long BgL_za71za7_3631;

													BgL_za71za7_3631 =
														(long) CINT(CELL_REF(BgL_za2pointerza2z00_7385));
													BgL_arg1393z00_1643 =
														(BgL_za71za7_3631 + BgL_sza7za7_1638);
												}
												{	/* Unsafe/intext.scm 299 */
													obj_t BgL_res2534z00_3637;

													{	/* Unsafe/intext.scm 299 */
														long BgL_startz00_3635;

														BgL_startz00_3635 =
															(long) CINT(CELL_REF(BgL_za2pointerza2z00_7385));
														BgL_res2534z00_3637 =
															c_substring(BgL_sz00_7389, BgL_startz00_3635,
															BgL_arg1393z00_1643);
													}
													BgL_arg1391z00_1640 = BgL_res2534z00_3637;
											}}
											{	/* Ieee/fixnum.scm 987 */

												BgL_resz00_1639 =
													BGl_stringzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00
													(BgL_arg1391z00_1640, ((long) 10));
										}}
										{	/* Unsafe/intext.scm 299 */

											{	/* Unsafe/intext.scm 300 */
												obj_t BgL_auxz00_7407;

												BgL_auxz00_7407 =
													ADDFX(CELL_REF(BgL_za2pointerza2z00_7385),
													BINT(BgL_sza7za7_1638));
												CELL_SET(BgL_za2pointerza2z00_7385, BgL_auxz00_7407);
											}
											BgL_tmpz00_8313 = BgL_resz00_1639;
								}}}
								return make_bllong(BgL_tmpz00_8313);
							}
							break;
						case ((unsigned char) 'd'):

							{	/* Unsafe/intext.scm 599 */
								long BgL_arg1584z00_1964;

								{	/* Unsafe/intext.scm 599 */
									obj_t BgL_arg1587z00_1965;

									BgL_arg1587z00_1965 =
										BGl_readzd2stringze70z35zz__intextz00
										(BgL_za2definingza2z00_7386, BgL_za2definitionsza2z00_7388,
										BgL_za2pointerza2z00_7385, BgL_sz00_7389,
										BgL_za2strlenza2z00_7384, BgL_sz00_7389);
									{	/* Ieee/fixnum.scm 985 */

										BgL_arg1584z00_1964 =
											BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00
											(BgL_arg1587z00_1965, ((long) 10));
								}}
								return bgl_seconds_to_date(BgL_arg1584z00_1964);
							}
							break;
						case ((unsigned char) 'D'):

							{	/* Unsafe/intext.scm 600 */
								BGL_LONGLONG_T BgL_arg1588z00_1968;

								{	/* Unsafe/intext.scm 600 */
									obj_t BgL_arg1589z00_1969;

									BgL_arg1589z00_1969 =
										BGl_readzd2stringze70z35zz__intextz00
										(BgL_za2definingza2z00_7386, BgL_za2definitionsza2z00_7388,
										BgL_za2pointerza2z00_7385, BgL_sz00_7389,
										BgL_za2strlenza2z00_7384, BgL_sz00_7389);
									{	/* Ieee/fixnum.scm 987 */

										BgL_arg1588z00_1968 =
											BGl_stringzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00
											(BgL_arg1589z00_1969, ((long) 10));
								}}
								return bgl_nanoseconds_to_date(BgL_arg1588z00_1968);
							}
							break;
						case ((unsigned char) 'k'):

							{	/* Unsafe/intext.scm 512 */
								obj_t BgL_namez00_4086;

								{	/* Unsafe/intext.scm 259 */
									obj_t BgL_arg1375z00_4087;

									BgL_arg1375z00_4087 =
										BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
										BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
										BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
										BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384);
									{	/* Unsafe/intext.scm 259 */
										obj_t BgL_res2640z00_4089;

										BgL_res2640z00_4089 =
											bstring_to_symbol(((obj_t) BgL_arg1375z00_4087));
										BgL_namez00_4086 = BgL_res2640z00_4089;
								}}
								BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
									BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
									BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
									BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384);
								return BGl_findzd2classzd2zz__objectz00(BgL_namez00_4086);
							}
							break;
						case ((unsigned char) 'r'):

							return
								BGl_pregexpz00zz__regexpz00
								(BGl_readzd2stringze70z35zz__intextz00
								(BgL_za2definingza2z00_7386, BgL_za2definitionsza2z00_7388,
									BgL_za2pointerza2z00_7385, BgL_sz00_7389,
									BgL_za2strlenza2z00_7384, BgL_sz00_7389), BNIL);
							break;
						case ((unsigned char) 'u'):

							{	/* Unsafe/intext.scm 271 */
								long BgL_arg1381z00_4090;

								BgL_arg1381z00_4090 =
									BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
									(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
									BgL_za2strlenza2z00_7384, BgL_sz00_7389);
								return
									BUCS2(BGl_integerzd2ze3ucs2z31zz__ucs2z00((int)
										(BgL_arg1381z00_4090)));
							} break;
						case ((unsigned char) 'p'):

							{	/* Unsafe/intext.scm 604 */
								obj_t BgL_converterz00_4091;

								BgL_converterz00_4091 =
									BGl_za2stringzd2ze3procedureza2z31zz__intextz00;
								{	/* Unsafe/intext.scm 445 */
									obj_t BgL_sz00_4092;

									BgL_sz00_4092 =
										BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
										BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
										BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
										BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384);
									return
										PROCEDURE_ENTRY(BgL_converterz00_4091)
										(BgL_converterz00_4091, BgL_sz00_4092, BEOA);
								}
							}
							break;
						case ((unsigned char) 'e'):

							{	/* Unsafe/intext.scm 605 */
								obj_t BgL_converterz00_4093;

								BgL_converterz00_4093 =
									BGl_za2stringzd2ze3processza2z31zz__intextz00;
								{	/* Unsafe/intext.scm 445 */
									obj_t BgL_sz00_4094;

									BgL_sz00_4094 =
										BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
										BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
										BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
										BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384);
									return
										PROCEDURE_ENTRY(BgL_converterz00_4093)
										(BgL_converterz00_4093, BgL_sz00_4094, BEOA);
								}
							}
							break;
						case ((unsigned char) 'o'):

							{	/* Unsafe/intext.scm 606 */
								obj_t BgL_converterz00_4095;

								BgL_converterz00_4095 =
									BGl_za2stringzd2ze3opaqueza2z31zz__intextz00;
								{	/* Unsafe/intext.scm 445 */
									obj_t BgL_sz00_4096;

									BgL_sz00_4096 =
										BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
										BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
										BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
										BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384);
									return
										PROCEDURE_ENTRY(BgL_converterz00_4095)
										(BgL_converterz00_4095, BgL_sz00_4096, BEOA);
								}
							}
							break;
						case ((unsigned char) 'X'):

							{	/* Unsafe/intext.scm 284 */
								obj_t BgL_itemz00_1628;

								BgL_itemz00_1628 =
									BGl_readzd2itemze70z35zz__intextz00(BgL_extensionz00_7390,
									BgL_sz00_7389, BgL_za2definitionsza2z00_7388,
									BgL_unserializa7ezd2argz75_7387, BgL_za2definingza2z00_7386,
									BgL_za2pointerza2z00_7385, BgL_za2strlenza2z00_7384);
								if (PROCEDUREP(BgL_extensionz00_7390))
									{	/* Unsafe/intext.scm 285 */
										return
											PROCEDURE_ENTRY(BgL_extensionz00_7390)
											(BgL_extensionz00_7390, BgL_itemz00_1628, BEOA);
									}
								else
									{	/* Unsafe/intext.scm 285 */
										return BgL_itemz00_1628;
									}
							}
							break;
						case ((unsigned char) 'b'):

							{	/* Unsafe/intext.scm 528 */
								long BgL_arg1551z00_4097;

								BgL_arg1551z00_4097 =
									BGl_readzd2wordze70z35zz__intextz00(BgL_za2pointerza2z00_7385,
									BgL_sz00_7389, BgL_za2strlenza2z00_7384, BgL_sz00_7389,
									(int) (((long) 1)));
								{	/* Unsafe/intext.scm 528 */
									int8_t BgL_res2641z00_4099;

									BgL_res2641z00_4099 = (int8_t) (BgL_arg1551z00_4097);
									return BGL_INT8_TO_BINT8(BgL_res2641z00_4099);
								}
							}
							break;
						case ((unsigned char) 'B'):

							{	/* Unsafe/intext.scm 530 */
								long BgL_arg1553z00_4100;

								BgL_arg1553z00_4100 =
									BGl_readzd2wordze70z35zz__intextz00(BgL_za2pointerza2z00_7385,
									BgL_sz00_7389, BgL_za2strlenza2z00_7384, BgL_sz00_7389,
									(int) (((long) 1)));
								{	/* Unsafe/intext.scm 530 */
									uint8_t BgL_res2642z00_4102;

									BgL_res2642z00_4102 = (uint8_t) (BgL_arg1553z00_4100);
									return BGL_UINT8_TO_BUINT8(BgL_res2642z00_4102);
								}
							}
							break;
						case ((unsigned char) 's'):

							{	/* Unsafe/intext.scm 533 */
								long BgL_arg1556z00_4103;

								BgL_arg1556z00_4103 =
									BGl_readzd2wordze70z35zz__intextz00(BgL_za2pointerza2z00_7385,
									BgL_sz00_7389, BgL_za2strlenza2z00_7384, BgL_sz00_7389,
									(int) (((long) 2)));
								{	/* Unsafe/intext.scm 533 */
									int16_t BgL_res2643z00_4105;

									BgL_res2643z00_4105 = (int16_t) (BgL_arg1556z00_4103);
									return BGL_INT16_TO_BINT16(BgL_res2643z00_4105);
								}
							}
							break;
						case ((unsigned char) 'S'):

							{	/* Unsafe/intext.scm 535 */
								long BgL_arg1558z00_4106;

								BgL_arg1558z00_4106 =
									BGl_readzd2wordze70z35zz__intextz00(BgL_za2pointerza2z00_7385,
									BgL_sz00_7389, BgL_za2strlenza2z00_7384, BgL_sz00_7389,
									(int) (((long) 2)));
								{	/* Unsafe/intext.scm 535 */
									uint16_t BgL_res2644z00_4108;

									BgL_res2644z00_4108 = (uint16_t) (BgL_arg1558z00_4106);
									return BGL_UINT16_TO_BUINT16(BgL_res2644z00_4108);
								}
							}
							break;
						case ((unsigned char) 'i'):

							{	/* Unsafe/intext.scm 538 */
								long BgL_arg1560z00_4109;

								BgL_arg1560z00_4109 =
									BGl_readzd2wordze70z35zz__intextz00(BgL_za2pointerza2z00_7385,
									BgL_sz00_7389, BgL_za2strlenza2z00_7384, BgL_sz00_7389,
									(int) (((long) 4)));
								{	/* Unsafe/intext.scm 538 */
									int32_t BgL_res2645z00_4111;

									BgL_res2645z00_4111 = (int32_t) (BgL_arg1560z00_4109);
									return BGL_INT32_TO_BINT32(BgL_res2645z00_4111);
								}
							}
							break;
						case ((unsigned char) 'I'):

							{	/* Unsafe/intext.scm 540 */
								long BgL_arg1562z00_4112;

								BgL_arg1562z00_4112 =
									BGl_readzd2wordze70z35zz__intextz00(BgL_za2pointerza2z00_7385,
									BgL_sz00_7389, BgL_za2strlenza2z00_7384, BgL_sz00_7389,
									(int) (((long) 4)));
								{	/* Unsafe/intext.scm 540 */
									uint32_t BgL_res2646z00_4114;

									BgL_res2646z00_4114 = (uint32_t) (BgL_arg1562z00_4112);
									return BGL_UINT32_TO_BUINT32(BgL_res2646z00_4114);
								}
							}
							break;
						case ((unsigned char) 'l'):

							{	/* Unsafe/intext.scm 614 */
								int64_t BgL_tmpz00_8387;

								BgL_sz00_1930 = BgL_sz00_7389;
								{	/* Unsafe/intext.scm 543 */
									int64_t BgL_accz00_1932;

									BgL_accz00_1932 = (int64_t) (0);
									BGl_stringzd2guardz12ze70z27zz__intextz00(BgL_sz00_7389,
										BgL_za2strlenza2z00_7384, BgL_za2pointerza2z00_7385,
										((long) 8));
									{
										long BgL_iz00_1934;

										BgL_iz00_1934 = ((long) 0);
									BgL_zc3z04anonymousza31564ze3z87_1935:
										if ((BgL_iz00_1934 < ((long) 8)))
											{	/* Unsafe/intext.scm 545 */
												{	/* Unsafe/intext.scm 546 */
													unsigned char BgL_dz00_1937;

													{	/* Unsafe/intext.scm 546 */
														long BgL_kz00_4023;

														BgL_kz00_4023 =
															(long) CINT(CELL_REF(BgL_za2pointerza2z00_7385));
														BgL_dz00_1937 =
															STRING_REF(BgL_sz00_1930, BgL_kz00_4023);
													}
													{	/* Unsafe/intext.scm 547 */
														int64_t BgL_arg1566z00_1938;
														int64_t BgL_arg1567z00_1939;

														BgL_arg1566z00_1938 =
															((int64_t) (256) * BgL_accz00_1932);
														{	/* Unsafe/intext.scm 548 */
															long BgL_arg1568z00_1940;

															BgL_arg1568z00_1940 = (BgL_dz00_1937);
															{	/* Unsafe/intext.scm 548 */
																int64_t BgL_res2618z00_4031;

																BgL_res2618z00_4031 =
																	(int64_t) (BgL_arg1568z00_1940);
																BgL_arg1567z00_1939 = BgL_res2618z00_4031;
														}}
														BgL_accz00_1932 =
															(BgL_arg1566z00_1938 + BgL_arg1567z00_1939);
													}
													{	/* Unsafe/intext.scm 549 */
														obj_t BgL_auxz00_7396;

														BgL_auxz00_7396 =
															ADDFX(CELL_REF(BgL_za2pointerza2z00_7385),
															BINT(((long) 1)));
														CELL_SET(BgL_za2pointerza2z00_7385,
															BgL_auxz00_7396);
												}}
												{
													long BgL_iz00_8399;

													BgL_iz00_8399 = (BgL_iz00_1934 + ((long) 1));
													BgL_iz00_1934 = BgL_iz00_8399;
													goto BgL_zc3z04anonymousza31564ze3z87_1935;
												}
											}
										else
											{	/* Unsafe/intext.scm 545 */
												((bool_t) 0);
											}
									}
									BgL_tmpz00_8387 = BgL_accz00_1932;
								}
								return BGL_INT64_TO_BINT64(BgL_tmpz00_8387);
							}
							break;
						case ((unsigned char) 'W'):

							{	/* Unsafe/intext.scm 615 */
								uint64_t BgL_tmpz00_8402;

								BgL_sz00_1943 = BgL_sz00_7389;
								{	/* Unsafe/intext.scm 553 */
									uint64_t BgL_accz00_1945;

									BgL_accz00_1945 = (uint64_t) (0);
									BGl_stringzd2guardz12ze70z27zz__intextz00(BgL_sz00_7389,
										BgL_za2strlenza2z00_7384, BgL_za2pointerza2z00_7385,
										((long) 8));
									{
										long BgL_iz00_1947;

										BgL_iz00_1947 = ((long) 0);
									BgL_zc3z04anonymousza31571ze3z87_1948:
										if ((BgL_iz00_1947 < ((long) 8)))
											{	/* Unsafe/intext.scm 555 */
												{	/* Unsafe/intext.scm 556 */
													unsigned char BgL_dz00_1950;

													{	/* Unsafe/intext.scm 556 */
														long BgL_kz00_4042;

														BgL_kz00_4042 =
															(long) CINT(CELL_REF(BgL_za2pointerza2z00_7385));
														BgL_dz00_1950 =
															STRING_REF(BgL_sz00_1943, BgL_kz00_4042);
													}
													{	/* Unsafe/intext.scm 557 */
														uint64_t BgL_arg1573z00_1951;
														int64_t BgL_arg1574z00_1952;

														BgL_arg1573z00_1951 =
															((uint64_t) (256) * BgL_accz00_1945);
														{	/* Unsafe/intext.scm 558 */
															long BgL_arg1575z00_1953;

															BgL_arg1575z00_1953 = (BgL_dz00_1950);
															{	/* Unsafe/intext.scm 558 */
																int64_t BgL_res2626z00_4050;

																BgL_res2626z00_4050 =
																	(int64_t) (BgL_arg1575z00_1953);
																BgL_arg1574z00_1952 = BgL_res2626z00_4050;
														}}
														{	/* Unsafe/intext.scm 557 */
															uint64_t BgL_za72za7_4052;

															BgL_za72za7_4052 =
																(uint64_t) (BgL_arg1574z00_1952);
															BgL_accz00_1945 =
																(BgL_arg1573z00_1951 + BgL_za72za7_4052);
													}}
													{	/* Unsafe/intext.scm 559 */
														obj_t BgL_auxz00_7395;

														BgL_auxz00_7395 =
															ADDFX(CELL_REF(BgL_za2pointerza2z00_7385),
															BINT(((long) 1)));
														CELL_SET(BgL_za2pointerza2z00_7385,
															BgL_auxz00_7395);
												}}
												{
													long BgL_iz00_8415;

													BgL_iz00_8415 = (BgL_iz00_1947 + ((long) 1));
													BgL_iz00_1947 = BgL_iz00_8415;
													goto BgL_zc3z04anonymousza31571ze3z87_1948;
												}
											}
										else
											{	/* Unsafe/intext.scm 555 */
												((bool_t) 0);
											}
									}
									BgL_tmpz00_8402 = BgL_accz00_1945;
								}
								return BGL_UINT64_TO_BUINT64(BgL_tmpz00_8402);
							}
							break;
						default:
							{	/* Unsafe/intext.scm 616 */
								obj_t BgL_auxz00_7393;

								BgL_auxz00_7393 =
									SUBFX(CELL_REF(BgL_za2pointerza2z00_7385), BINT(((long) 1)));
								CELL_SET(BgL_za2pointerza2z00_7385, BgL_auxz00_7393);
							}
							return
								BINT(BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00
								(BgL_za2pointerza2z00_7385, BgL_sz00_7389,
									BgL_za2strlenza2z00_7384, BgL_sz00_7389));
						}
				}
			}
		}

	}



/* read-word~0 */
	long BGl_readzd2wordze70z35zz__intextz00(obj_t BgL_za2pointerza2z00_7412,
		obj_t BgL_sz00_7411, long BgL_za2strlenza2z00_7410, obj_t BgL_sz00_1570,
		int BgL_sza7za7_1571)
	{
		{	/* Unsafe/intext.scm 212 */
			{	/* Unsafe/intext.scm 206 */
				long BgL_accz00_1573;

				BgL_accz00_1573 = ((long) 0);
				BGl_stringzd2guardz12ze70z27zz__intextz00(BgL_sz00_7411,
					BgL_za2strlenza2z00_7410, BgL_za2pointerza2z00_7412,
					(long) (BgL_sza7za7_1571));
				{
					long BgL_iz00_1575;

					BgL_iz00_1575 = ((long) 0);
				BgL_zc3z04anonymousza31352ze3z87_1576:
					if ((BgL_iz00_1575 < (long) (BgL_sza7za7_1571)))
						{	/* Unsafe/intext.scm 208 */
							{	/* Unsafe/intext.scm 209 */
								unsigned char BgL_dz00_1578;

								{	/* Unsafe/intext.scm 209 */
									long BgL_kz00_3529;

									BgL_kz00_3529 =
										(long) CINT(CELL_REF(BgL_za2pointerza2z00_7412));
									BgL_dz00_1578 = STRING_REF(BgL_sz00_1570, BgL_kz00_3529);
								}
								BgL_accz00_1573 =
									((((long) 256) * BgL_accz00_1573) + (BgL_dz00_1578));
								{	/* Unsafe/intext.scm 211 */
									obj_t BgL_auxz00_7413;

									BgL_auxz00_7413 =
										ADDFX(CELL_REF(BgL_za2pointerza2z00_7412),
										BINT(((long) 1)));
									CELL_SET(BgL_za2pointerza2z00_7412, BgL_auxz00_7413);
							}}
							{
								long BgL_iz00_8436;

								BgL_iz00_8436 = (BgL_iz00_1575 + ((long) 1));
								BgL_iz00_1575 = BgL_iz00_8436;
								goto BgL_zc3z04anonymousza31352ze3z87_1576;
							}
						}
					else
						{	/* Unsafe/intext.scm 208 */
							((bool_t) 0);
						}
				}
				return BgL_accz00_1573;
			}
		}

	}



/* string-guard!~0 */
	obj_t BGl_stringzd2guardz12ze70z27zz__intextz00(obj_t BgL_sz00_7416,
		long BgL_za2strlenza2z00_7415, obj_t BgL_za2pointerza2z00_7414,
		long BgL_sza7za7_1528)
	{
		{	/* Unsafe/intext.scm 173 */
			{	/* Unsafe/intext.scm 169 */
				bool_t BgL_test3537z00_8438;

				{	/* Unsafe/intext.scm 169 */
					long BgL_tmpz00_8439;

					{	/* Unsafe/intext.scm 169 */
						long BgL_za72za7_3422;

						BgL_za72za7_3422 = (long) CINT(CELL_REF(BgL_za2pointerza2z00_7414));
						BgL_tmpz00_8439 = (BgL_sza7za7_1528 + BgL_za72za7_3422);
					}
					BgL_test3537z00_8438 = (BgL_tmpz00_8439 > BgL_za2strlenza2z00_7415);
				}
				if (BgL_test3537z00_8438)
					{	/* Unsafe/intext.scm 171 */
						obj_t BgL_arg1322z00_1532;

						{	/* Unsafe/intext.scm 171 */
							long BgL_arg1324z00_1533;

							{	/* Unsafe/intext.scm 171 */
								long BgL_za72za7_3428;

								BgL_za72za7_3428 =
									(long) CINT(CELL_REF(BgL_za2pointerza2z00_7414));
								BgL_arg1324z00_1533 = (BgL_sza7za7_1528 + BgL_za72za7_3428);
							}
							{	/* Unsafe/intext.scm 171 */
								obj_t BgL_list1325z00_1534;

								{	/* Unsafe/intext.scm 171 */
									obj_t BgL_arg1326z00_1535;

									{	/* Unsafe/intext.scm 171 */
										obj_t BgL_arg1327z00_1536;

										BgL_arg1327z00_1536 =
											MAKE_YOUNG_PAIR(BINT(BgL_za2strlenza2z00_7415), BNIL);
										BgL_arg1326z00_1535 =
											MAKE_YOUNG_PAIR(CELL_REF(BgL_za2pointerza2z00_7414),
											BgL_arg1327z00_1536);
									}
									BgL_list1325z00_1534 =
										MAKE_YOUNG_PAIR(BINT(BgL_arg1324z00_1533),
										BgL_arg1326z00_1535);
								}
								BgL_arg1322z00_1532 =
									BGl_formatz00zz__r4_output_6_10_3z00
									(BGl_string3343z00zz__intextz00, BgL_list1325z00_1534);
						}}
						return
							BGl_errorz00zz__errorz00(BGl_string3286z00zz__intextz00,
							BgL_arg1322z00_1532, BgL_sz00_7416);
					}
				else
					{	/* Unsafe/intext.scm 169 */
						return BFALSE;
					}
			}
		}

	}



/* read-size/unsafe~0 */
	long BGl_readzd2siza7ezf2unsafeze70z60zz__intextz00(obj_t
		BgL_za2pointerza2z00_7419, obj_t BgL_sz00_7418,
		long BgL_za2strlenza2z00_7417, obj_t BgL_sz00_1597)
	{
		{	/* Unsafe/intext.scm 227 */
			BGl_stringzd2guardz12ze70z27zz__intextz00(BgL_sz00_7418,
				BgL_za2strlenza2z00_7417, BgL_za2pointerza2z00_7419, ((long) 1));
			{	/* Unsafe/intext.scm 228 */
				long BgL_sza7za7_3562;

				{	/* Unsafe/intext.scm 228 */
					unsigned char BgL_tmpz00_8453;

					{	/* Unsafe/intext.scm 228 */
						long BgL_kz00_3565;

						BgL_kz00_3565 = (long) CINT(CELL_REF(BgL_za2pointerza2z00_7419));
						BgL_tmpz00_8453 = STRING_REF(BgL_sz00_1597, BgL_kz00_3565);
					}
					BgL_sza7za7_3562 = (BgL_tmpz00_8453);
				}
				{	/* Unsafe/intext.scm 229 */
					obj_t BgL_auxz00_7420;

					BgL_auxz00_7420 =
						ADDFX(CELL_REF(BgL_za2pointerza2z00_7419), BINT(((long) 1)));
					CELL_SET(BgL_za2pointerza2z00_7419, BgL_auxz00_7420);
				}
				return
					BGl_readzd2wordze70z35zz__intextz00(BgL_za2pointerza2z00_7419,
					BgL_sz00_7418, BgL_za2strlenza2z00_7417, BgL_sz00_1597,
					(int) (BgL_sza7za7_3562));
		}}

	}



/* check-size!~0 */
	obj_t BGl_checkzd2siza7ez12ze70z80zz__intextz00(obj_t BgL_sz00_7423,
		obj_t BgL_za2pointerza2z00_7422, long BgL_za2strlenza2z00_7421,
		long BgL_sza7za7_1538, obj_t BgL_lblz00_1539)
	{
		{	/* Unsafe/intext.scm 180 */
			{	/* Unsafe/intext.scm 177 */
				bool_t BgL_test3538z00_8461;

				if ((BgL_sza7za7_1538 < ((long) 0)))
					{	/* Unsafe/intext.scm 177 */
						BgL_test3538z00_8461 = ((bool_t) 1);
					}
				else
					{	/* Unsafe/intext.scm 177 */
						long BgL_tmpz00_8464;

						{	/* Unsafe/intext.scm 177 */
							long BgL_za72za7_3433;

							BgL_za72za7_3433 =
								(long) CINT(CELL_REF(BgL_za2pointerza2z00_7422));
							BgL_tmpz00_8464 = (BgL_za2strlenza2z00_7421 - BgL_za72za7_3433);
						}
						BgL_test3538z00_8461 = (BgL_sza7za7_1538 > BgL_tmpz00_8464);
					}
				if (BgL_test3538z00_8461)
					{	/* Unsafe/intext.scm 179 */
						obj_t BgL_arg1333z00_1544;

						{	/* Unsafe/intext.scm 179 */
							obj_t BgL_list1334z00_1545;

							{	/* Unsafe/intext.scm 179 */
								obj_t BgL_arg1335z00_1546;

								{	/* Unsafe/intext.scm 179 */
									obj_t BgL_arg1337z00_1547;

									{	/* Unsafe/intext.scm 179 */
										obj_t BgL_arg1338z00_1548;

										BgL_arg1338z00_1548 =
											MAKE_YOUNG_PAIR(BINT(BgL_sza7za7_1538), BNIL);
										BgL_arg1337z00_1547 =
											MAKE_YOUNG_PAIR(BINT(BgL_za2strlenza2z00_7421),
											BgL_arg1338z00_1548);
									}
									BgL_arg1335z00_1546 =
										MAKE_YOUNG_PAIR(CELL_REF(BgL_za2pointerza2z00_7422),
										BgL_arg1337z00_1547);
								}
								BgL_list1334z00_1545 =
									MAKE_YOUNG_PAIR(BgL_lblz00_1539, BgL_arg1335z00_1546);
							}
							BgL_arg1333z00_1544 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string3344z00zz__intextz00, BgL_list1334z00_1545);
						}
						return
							BGl_errorz00zz__errorz00(BGl_string3286z00zz__intextz00,
							BgL_arg1333z00_1544, BgL_sz00_7423);
					}
				else
					{	/* Unsafe/intext.scm 177 */
						return BFALSE;
					}
			}
		}

	}



/* _obj->string */
	obj_t BGl__objzd2ze3stringz31zz__intextz00(obj_t BgL_env1192z00_26,
		obj_t BgL_opt1191z00_25)
	{
		{	/* Unsafe/intext.scm 629 */
			{	/* Unsafe/intext.scm 629 */
				obj_t BgL_g1193z00_2018;

				BgL_g1193z00_2018 = VECTOR_REF(BgL_opt1191z00_25, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1191z00_25))
					{
					case ((long) 1):

						{	/* Unsafe/intext.scm 629 */

							return obj_to_string(BgL_g1193z00_2018, BFALSE);
						}
						break;
					case ((long) 2):

						{	/* Unsafe/intext.scm 629 */
							obj_t BgL_markzd2argzd2_2023;

							BgL_markzd2argzd2_2023 =
								VECTOR_REF(BgL_opt1191z00_25, ((long) 1));
							{	/* Unsafe/intext.scm 629 */

								return obj_to_string(BgL_g1193z00_2018, BgL_markzd2argzd2_2023);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* obj->string */
	BGL_EXPORTED_DEF obj_t obj_to_string(obj_t BgL_objz00_23,
		obj_t BgL_markzd2argzd2_24)
	{
		{	/* Unsafe/intext.scm 629 */
			{	/* Unsafe/intext.scm 630 */
				obj_t BgL_tablez00_2024;

				BgL_tablez00_2024 =
					BGl_createzd2hashtablezd2zz__hashz00(BGL_REAL_CNST
					(BGl_real3348z00zz__intextz00), BGl_proc3345z00zz__intextz00, BFALSE,
					BINT(((long) 10)), BINT(((long) -1)), BINT(((long) 128)),
					BGl_symbol3346z00zz__intextz00);
				{	/* Unsafe/intext.scm 630 */
					long BgL_nbrefz00_2025;

					BgL_nbrefz00_2025 =
						BGl_markzd2objz12zc0zz__intextz00(BgL_tablez00_2024, BgL_objz00_23,
						BgL_markzd2argzd2_24);
					{	/* Unsafe/intext.scm 640 */

						return
							BGl_printzd2objzd2zz__intextz00(BgL_tablez00_2024,
							BgL_nbrefz00_2025, BgL_objz00_23);
					}
				}
			}
		}

	}



/* &<@anonymous:1597> */
	obj_t BGl_z62zc3z04anonymousza31597ze3ze5zz__intextz00(obj_t BgL_envz00_6964,
		obj_t BgL_az00_6965, obj_t BgL_bz00_6966)
	{
		{	/* Unsafe/intext.scm 631 */
			{	/* Unsafe/intext.scm 633 */
				bool_t BgL_tmpz00_8488;

				if (STRINGP(BgL_az00_6965))
					{	/* Unsafe/intext.scm 633 */
						if (STRINGP(BgL_bz00_6966))
							{	/* Unsafe/intext.scm 634 */
								bool_t BgL_res2659z00_7476;

								{	/* Unsafe/intext.scm 634 */
									long BgL_l1z00_7477;

									BgL_l1z00_7477 = STRING_LENGTH(BgL_az00_6965);
									if ((BgL_l1z00_7477 == STRING_LENGTH(BgL_bz00_6966)))
										{	/* Unsafe/intext.scm 634 */
											int BgL_arg2208z00_7478;

											{	/* Unsafe/intext.scm 634 */
												char *BgL_auxz00_8499;
												char *BgL_tmpz00_8497;

												BgL_auxz00_8499 = BSTRING_TO_STRING(BgL_bz00_6966);
												BgL_tmpz00_8497 = BSTRING_TO_STRING(BgL_az00_6965);
												BgL_arg2208z00_7478 =
													memcmp(BgL_tmpz00_8497, BgL_auxz00_8499,
													BgL_l1z00_7477);
											}
											BgL_res2659z00_7476 =
												((long) (BgL_arg2208z00_7478) == ((long) 0));
										}
									else
										{	/* Unsafe/intext.scm 634 */
											BgL_res2659z00_7476 = ((bool_t) 0);
										}
								}
								BgL_tmpz00_8488 = BgL_res2659z00_7476;
							}
						else
							{	/* Unsafe/intext.scm 634 */
								BgL_tmpz00_8488 = ((bool_t) 0);
							}
					}
				else
					{	/* Unsafe/intext.scm 633 */
						if (UCS2_STRINGP(BgL_az00_6965))
							{	/* Unsafe/intext.scm 635 */
								BgL_tmpz00_8488 =
									BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_az00_6965,
									BgL_bz00_6966);
							}
						else
							{	/* Unsafe/intext.scm 635 */
								BgL_tmpz00_8488 = (BgL_az00_6965 == BgL_bz00_6966);
							}
					}
				return BBOOL(BgL_tmpz00_8488);
			}
		}

	}



/* size-of-word */
	long BGl_siza7ezd2ofzd2wordza7zz__intextz00(long BgL_mz00_51)
	{
		{	/* Unsafe/intext.scm 674 */
			{
				long BgL_siza7eza7_4197;
				long BgL_mz00_4198;

				BgL_siza7eza7_4197 = ((long) 0);
				BgL_mz00_4198 = BgL_mz00_51;
			BgL_loopz00_4196:
				if ((BgL_mz00_4198 == ((long) 0)))
					{	/* Unsafe/intext.scm 677 */
						return BgL_siza7eza7_4197;
					}
				else
					{
						long BgL_mz00_8513;
						long BgL_siza7eza7_8511;

						BgL_siza7eza7_8511 = (BgL_siza7eza7_4197 + ((long) 1));
						BgL_mz00_8513 = (BgL_mz00_4198 >> (int) (((long) 8)));
						BgL_mz00_4198 = BgL_mz00_8513;
						BgL_siza7eza7_4197 = BgL_siza7eza7_8511;
						goto BgL_loopz00_4196;
					}
			}
		}

	}



/* print-obj */
	obj_t BGl_printzd2objzd2zz__intextz00(obj_t BgL_tablez00_52,
		long BgL_nbrefz00_53, obj_t BgL_objz00_54)
	{
		{	/* Unsafe/intext.scm 684 */
			{	/* Unsafe/intext.scm 684 */
				obj_t BgL_ptrz00_7298;
				obj_t BgL_refz00_7299;

				BgL_ptrz00_7298 = MAKE_CELL(BINT(((long) 0)));
				BgL_refz00_7299 = MAKE_CELL(BINT(((long) 0)));
				{	/* Unsafe/intext.scm 686 */
					obj_t BgL_bufferz00_7300;

					{	/* Unsafe/intext.scm 686 */
						obj_t BgL_cellvalz00_8518;

						BgL_cellvalz00_8518 = make_string_sans_fill(((long) 100));
						BgL_bufferz00_7300 = MAKE_CELL(BgL_cellvalz00_8518);
					}
					{	/* Unsafe/intext.scm 692 */
						obj_t BgL_printzd2customzd2_6975;
						obj_t BgL_printzd2tvectorzd2_6976;
						obj_t BgL_printzd2hvectorzd2_6978;
						obj_t BgL_printzd2vectorzd2_6979;
						obj_t BgL_printzd2weakptrzd2_6980;
						obj_t BgL_printzd2cellzd2_6981;
						obj_t BgL_printzd2objectzd2_6984;
						obj_t BgL_printzd2classzd2_6983;
						obj_t BgL_printzd2pairzd2_6986;
						obj_t BgL_printzd2epairzd2_6987;

						{
							int BgL_tmpz00_8520;

							BgL_tmpz00_8520 = (int) (((long) 2));
							BgL_printzd2customzd2_6975 =
								MAKE_L_PROCEDURE(BGl_z62printzd2customzb0zz__intextz00,
								BgL_tmpz00_8520);
						}
						{
							int BgL_tmpz00_8523;

							BgL_tmpz00_8523 = (int) (((long) 13));
							BgL_printzd2tvectorzd2_6976 =
								MAKE_L_PROCEDURE(BGl_z62printzd2tvectorzb0zz__intextz00,
								BgL_tmpz00_8523);
						}
						{
							int BgL_tmpz00_8526;

							BgL_tmpz00_8526 = (int) (((long) 2));
							BgL_printzd2hvectorzd2_6978 =
								MAKE_L_PROCEDURE(BGl_z62printzd2hvectorzb0zz__intextz00,
								BgL_tmpz00_8526);
						}
						{
							int BgL_tmpz00_8529;

							BgL_tmpz00_8529 = (int) (((long) 13));
							BgL_printzd2vectorzd2_6979 =
								MAKE_L_PROCEDURE(BGl_z62printzd2vectorzb0zz__intextz00,
								BgL_tmpz00_8529);
						}
						{
							int BgL_tmpz00_8532;

							BgL_tmpz00_8532 = (int) (((long) 13));
							BgL_printzd2weakptrzd2_6980 =
								MAKE_L_PROCEDURE(BGl_z62printzd2weakptrzb0zz__intextz00,
								BgL_tmpz00_8532);
						}
						{
							int BgL_tmpz00_8535;

							BgL_tmpz00_8535 = (int) (((long) 13));
							BgL_printzd2cellzd2_6981 =
								MAKE_L_PROCEDURE(BGl_z62printzd2cellzb0zz__intextz00,
								BgL_tmpz00_8535);
						}
						{
							int BgL_tmpz00_8538;

							BgL_tmpz00_8538 = (int) (((long) 13));
							BgL_printzd2objectzd2_6984 =
								MAKE_L_PROCEDURE(BGl_z62printzd2objectzb0zz__intextz00,
								BgL_tmpz00_8538);
						}
						{
							int BgL_tmpz00_8541;

							BgL_tmpz00_8541 = (int) (((long) 13));
							BgL_printzd2classzd2_6983 =
								MAKE_L_PROCEDURE(BGl_z62printzd2classzb0zz__intextz00,
								BgL_tmpz00_8541);
						}
						{
							int BgL_tmpz00_8544;

							BgL_tmpz00_8544 = (int) (((long) 13));
							BgL_printzd2pairzd2_6986 =
								MAKE_L_PROCEDURE(BGl_z62printzd2pairzb0zz__intextz00,
								BgL_tmpz00_8544);
						}
						{
							int BgL_tmpz00_8547;

							BgL_tmpz00_8547 = (int) (((long) 13));
							BgL_printzd2epairzd2_6987 =
								MAKE_L_PROCEDURE(BGl_z62printzd2epairzb0zz__intextz00,
								BgL_tmpz00_8547);
						}
						PROCEDURE_L_SET(BgL_printzd2customzd2_6975,
							(int) (((long) 0)), ((obj_t) BgL_bufferz00_7300));
						PROCEDURE_L_SET(BgL_printzd2customzd2_6975,
							(int) (((long) 1)), ((obj_t) BgL_ptrz00_7298));
						PROCEDURE_L_SET(BgL_printzd2tvectorzd2_6976,
							(int) (((long) 0)), BgL_tablez00_52);
						PROCEDURE_L_SET(BgL_printzd2tvectorzd2_6976,
							(int) (((long) 1)), ((obj_t) BgL_refz00_7299));
						PROCEDURE_L_SET(BgL_printzd2tvectorzd2_6976,
							(int) (((long) 2)), BgL_printzd2customzd2_6975);
						PROCEDURE_L_SET(BgL_printzd2tvectorzd2_6976,
							(int) (((long) 3)), BgL_printzd2hvectorzd2_6978);
						PROCEDURE_L_SET(BgL_printzd2tvectorzd2_6976,
							(int) (((long) 4)), BgL_printzd2vectorzd2_6979);
						PROCEDURE_L_SET(BgL_printzd2tvectorzd2_6976,
							(int) (((long) 5)), BgL_printzd2weakptrzd2_6980);
						PROCEDURE_L_SET(BgL_printzd2tvectorzd2_6976,
							(int) (((long) 6)), BgL_printzd2cellzd2_6981);
						PROCEDURE_L_SET(BgL_printzd2tvectorzd2_6976,
							(int) (((long) 7)), BgL_printzd2classzd2_6983);
						PROCEDURE_L_SET(BgL_printzd2tvectorzd2_6976,
							(int) (((long) 8)), BgL_printzd2objectzd2_6984);
						PROCEDURE_L_SET(BgL_printzd2tvectorzd2_6976,
							(int) (((long) 9)), BgL_printzd2pairzd2_6986);
						PROCEDURE_L_SET(BgL_printzd2tvectorzd2_6976,
							(int) (((long) 10)), BgL_printzd2epairzd2_6987);
						PROCEDURE_L_SET(BgL_printzd2tvectorzd2_6976,
							(int) (((long) 11)), ((obj_t) BgL_bufferz00_7300));
						PROCEDURE_L_SET(BgL_printzd2tvectorzd2_6976,
							(int) (((long) 12)), ((obj_t) BgL_ptrz00_7298));
						PROCEDURE_L_SET(BgL_printzd2hvectorzd2_6978,
							(int) (((long) 0)), ((obj_t) BgL_bufferz00_7300));
						PROCEDURE_L_SET(BgL_printzd2hvectorzd2_6978,
							(int) (((long) 1)), ((obj_t) BgL_ptrz00_7298));
						PROCEDURE_L_SET(BgL_printzd2vectorzd2_6979,
							(int) (((long) 0)), BgL_tablez00_52);
						PROCEDURE_L_SET(BgL_printzd2vectorzd2_6979,
							(int) (((long) 1)), ((obj_t) BgL_refz00_7299));
						PROCEDURE_L_SET(BgL_printzd2vectorzd2_6979,
							(int) (((long) 2)), BgL_printzd2customzd2_6975);
						PROCEDURE_L_SET(BgL_printzd2vectorzd2_6979,
							(int) (((long) 3)), BgL_printzd2tvectorzd2_6976);
						PROCEDURE_L_SET(BgL_printzd2vectorzd2_6979,
							(int) (((long) 4)), BgL_printzd2hvectorzd2_6978);
						PROCEDURE_L_SET(BgL_printzd2vectorzd2_6979,
							(int) (((long) 5)), BgL_printzd2weakptrzd2_6980);
						PROCEDURE_L_SET(BgL_printzd2vectorzd2_6979,
							(int) (((long) 6)), BgL_printzd2cellzd2_6981);
						PROCEDURE_L_SET(BgL_printzd2vectorzd2_6979,
							(int) (((long) 7)), BgL_printzd2classzd2_6983);
						PROCEDURE_L_SET(BgL_printzd2vectorzd2_6979,
							(int) (((long) 8)), BgL_printzd2objectzd2_6984);
						PROCEDURE_L_SET(BgL_printzd2vectorzd2_6979,
							(int) (((long) 9)), BgL_printzd2pairzd2_6986);
						PROCEDURE_L_SET(BgL_printzd2vectorzd2_6979,
							(int) (((long) 10)), BgL_printzd2epairzd2_6987);
						PROCEDURE_L_SET(BgL_printzd2vectorzd2_6979,
							(int) (((long) 11)), ((obj_t) BgL_bufferz00_7300));
						PROCEDURE_L_SET(BgL_printzd2vectorzd2_6979,
							(int) (((long) 12)), ((obj_t) BgL_ptrz00_7298));
						PROCEDURE_L_SET(BgL_printzd2weakptrzd2_6980,
							(int) (((long) 0)), BgL_tablez00_52);
						PROCEDURE_L_SET(BgL_printzd2weakptrzd2_6980,
							(int) (((long) 1)), ((obj_t) BgL_refz00_7299));
						PROCEDURE_L_SET(BgL_printzd2weakptrzd2_6980,
							(int) (((long) 2)), BgL_printzd2customzd2_6975);
						PROCEDURE_L_SET(BgL_printzd2weakptrzd2_6980,
							(int) (((long) 3)), BgL_printzd2tvectorzd2_6976);
						PROCEDURE_L_SET(BgL_printzd2weakptrzd2_6980,
							(int) (((long) 4)), BgL_printzd2hvectorzd2_6978);
						PROCEDURE_L_SET(BgL_printzd2weakptrzd2_6980,
							(int) (((long) 5)), BgL_printzd2vectorzd2_6979);
						PROCEDURE_L_SET(BgL_printzd2weakptrzd2_6980,
							(int) (((long) 6)), BgL_printzd2cellzd2_6981);
						PROCEDURE_L_SET(BgL_printzd2weakptrzd2_6980,
							(int) (((long) 7)), BgL_printzd2classzd2_6983);
						PROCEDURE_L_SET(BgL_printzd2weakptrzd2_6980,
							(int) (((long) 8)), BgL_printzd2objectzd2_6984);
						PROCEDURE_L_SET(BgL_printzd2weakptrzd2_6980,
							(int) (((long) 9)), BgL_printzd2pairzd2_6986);
						PROCEDURE_L_SET(BgL_printzd2weakptrzd2_6980,
							(int) (((long) 10)), BgL_printzd2epairzd2_6987);
						PROCEDURE_L_SET(BgL_printzd2weakptrzd2_6980,
							(int) (((long) 11)), ((obj_t) BgL_bufferz00_7300));
						PROCEDURE_L_SET(BgL_printzd2weakptrzd2_6980,
							(int) (((long) 12)), ((obj_t) BgL_ptrz00_7298));
						PROCEDURE_L_SET(BgL_printzd2cellzd2_6981,
							(int) (((long) 0)), BgL_tablez00_52);
						PROCEDURE_L_SET(BgL_printzd2cellzd2_6981,
							(int) (((long) 1)), ((obj_t) BgL_refz00_7299));
						PROCEDURE_L_SET(BgL_printzd2cellzd2_6981,
							(int) (((long) 2)), BgL_printzd2customzd2_6975);
						PROCEDURE_L_SET(BgL_printzd2cellzd2_6981,
							(int) (((long) 3)), BgL_printzd2tvectorzd2_6976);
						PROCEDURE_L_SET(BgL_printzd2cellzd2_6981,
							(int) (((long) 4)), BgL_printzd2hvectorzd2_6978);
						PROCEDURE_L_SET(BgL_printzd2cellzd2_6981,
							(int) (((long) 5)), BgL_printzd2vectorzd2_6979);
						PROCEDURE_L_SET(BgL_printzd2cellzd2_6981,
							(int) (((long) 6)), BgL_printzd2weakptrzd2_6980);
						PROCEDURE_L_SET(BgL_printzd2cellzd2_6981,
							(int) (((long) 7)), BgL_printzd2classzd2_6983);
						PROCEDURE_L_SET(BgL_printzd2cellzd2_6981,
							(int) (((long) 8)), BgL_printzd2objectzd2_6984);
						PROCEDURE_L_SET(BgL_printzd2cellzd2_6981,
							(int) (((long) 9)), BgL_printzd2pairzd2_6986);
						PROCEDURE_L_SET(BgL_printzd2cellzd2_6981,
							(int) (((long) 10)), BgL_printzd2epairzd2_6987);
						PROCEDURE_L_SET(BgL_printzd2cellzd2_6981,
							(int) (((long) 11)), ((obj_t) BgL_bufferz00_7300));
						PROCEDURE_L_SET(BgL_printzd2cellzd2_6981,
							(int) (((long) 12)), ((obj_t) BgL_ptrz00_7298));
						PROCEDURE_L_SET(BgL_printzd2objectzd2_6984,
							(int) (((long) 0)), BgL_tablez00_52);
						PROCEDURE_L_SET(BgL_printzd2objectzd2_6984,
							(int) (((long) 1)), ((obj_t) BgL_refz00_7299));
						PROCEDURE_L_SET(BgL_printzd2objectzd2_6984,
							(int) (((long) 2)), BgL_printzd2customzd2_6975);
						PROCEDURE_L_SET(BgL_printzd2objectzd2_6984,
							(int) (((long) 3)), BgL_printzd2tvectorzd2_6976);
						PROCEDURE_L_SET(BgL_printzd2objectzd2_6984,
							(int) (((long) 4)), BgL_printzd2hvectorzd2_6978);
						PROCEDURE_L_SET(BgL_printzd2objectzd2_6984,
							(int) (((long) 5)), BgL_printzd2vectorzd2_6979);
						PROCEDURE_L_SET(BgL_printzd2objectzd2_6984,
							(int) (((long) 6)), BgL_printzd2weakptrzd2_6980);
						PROCEDURE_L_SET(BgL_printzd2objectzd2_6984,
							(int) (((long) 7)), BgL_printzd2cellzd2_6981);
						PROCEDURE_L_SET(BgL_printzd2objectzd2_6984,
							(int) (((long) 8)), BgL_printzd2classzd2_6983);
						PROCEDURE_L_SET(BgL_printzd2objectzd2_6984,
							(int) (((long) 9)), BgL_printzd2pairzd2_6986);
						PROCEDURE_L_SET(BgL_printzd2objectzd2_6984,
							(int) (((long) 10)), BgL_printzd2epairzd2_6987);
						PROCEDURE_L_SET(BgL_printzd2objectzd2_6984,
							(int) (((long) 11)), ((obj_t) BgL_bufferz00_7300));
						PROCEDURE_L_SET(BgL_printzd2objectzd2_6984,
							(int) (((long) 12)), ((obj_t) BgL_ptrz00_7298));
						PROCEDURE_L_SET(BgL_printzd2classzd2_6983,
							(int) (((long) 0)), BgL_tablez00_52);
						PROCEDURE_L_SET(BgL_printzd2classzd2_6983,
							(int) (((long) 1)), ((obj_t) BgL_refz00_7299));
						PROCEDURE_L_SET(BgL_printzd2classzd2_6983,
							(int) (((long) 2)), BgL_printzd2customzd2_6975);
						PROCEDURE_L_SET(BgL_printzd2classzd2_6983,
							(int) (((long) 3)), BgL_printzd2tvectorzd2_6976);
						PROCEDURE_L_SET(BgL_printzd2classzd2_6983,
							(int) (((long) 4)), BgL_printzd2hvectorzd2_6978);
						PROCEDURE_L_SET(BgL_printzd2classzd2_6983,
							(int) (((long) 5)), BgL_printzd2vectorzd2_6979);
						PROCEDURE_L_SET(BgL_printzd2classzd2_6983,
							(int) (((long) 6)), BgL_printzd2weakptrzd2_6980);
						PROCEDURE_L_SET(BgL_printzd2classzd2_6983,
							(int) (((long) 7)), BgL_printzd2cellzd2_6981);
						PROCEDURE_L_SET(BgL_printzd2classzd2_6983,
							(int) (((long) 8)), BgL_printzd2objectzd2_6984);
						PROCEDURE_L_SET(BgL_printzd2classzd2_6983,
							(int) (((long) 9)), BgL_printzd2pairzd2_6986);
						PROCEDURE_L_SET(BgL_printzd2classzd2_6983,
							(int) (((long) 10)), BgL_printzd2epairzd2_6987);
						PROCEDURE_L_SET(BgL_printzd2classzd2_6983,
							(int) (((long) 11)), ((obj_t) BgL_bufferz00_7300));
						PROCEDURE_L_SET(BgL_printzd2classzd2_6983,
							(int) (((long) 12)), ((obj_t) BgL_ptrz00_7298));
						PROCEDURE_L_SET(BgL_printzd2pairzd2_6986,
							(int) (((long) 0)), ((obj_t) BgL_refz00_7299));
						PROCEDURE_L_SET(BgL_printzd2pairzd2_6986,
							(int) (((long) 1)), BgL_printzd2customzd2_6975);
						PROCEDURE_L_SET(BgL_printzd2pairzd2_6986,
							(int) (((long) 2)), BgL_printzd2tvectorzd2_6976);
						PROCEDURE_L_SET(BgL_printzd2pairzd2_6986,
							(int) (((long) 3)), BgL_printzd2hvectorzd2_6978);
						PROCEDURE_L_SET(BgL_printzd2pairzd2_6986,
							(int) (((long) 4)), BgL_printzd2vectorzd2_6979);
						PROCEDURE_L_SET(BgL_printzd2pairzd2_6986,
							(int) (((long) 5)), BgL_printzd2weakptrzd2_6980);
						PROCEDURE_L_SET(BgL_printzd2pairzd2_6986,
							(int) (((long) 6)), BgL_printzd2cellzd2_6981);
						PROCEDURE_L_SET(BgL_printzd2pairzd2_6986,
							(int) (((long) 7)), BgL_printzd2classzd2_6983);
						PROCEDURE_L_SET(BgL_printzd2pairzd2_6986,
							(int) (((long) 8)), BgL_printzd2objectzd2_6984);
						PROCEDURE_L_SET(BgL_printzd2pairzd2_6986,
							(int) (((long) 9)), BgL_printzd2epairzd2_6987);
						PROCEDURE_L_SET(BgL_printzd2pairzd2_6986,
							(int) (((long) 10)), ((obj_t) BgL_bufferz00_7300));
						PROCEDURE_L_SET(BgL_printzd2pairzd2_6986,
							(int) (((long) 11)), ((obj_t) BgL_ptrz00_7298));
						PROCEDURE_L_SET(BgL_printzd2pairzd2_6986,
							(int) (((long) 12)), BgL_tablez00_52);
						PROCEDURE_L_SET(BgL_printzd2epairzd2_6987,
							(int) (((long) 0)), ((obj_t) BgL_refz00_7299));
						PROCEDURE_L_SET(BgL_printzd2epairzd2_6987,
							(int) (((long) 1)), BgL_printzd2customzd2_6975);
						PROCEDURE_L_SET(BgL_printzd2epairzd2_6987,
							(int) (((long) 2)), BgL_printzd2tvectorzd2_6976);
						PROCEDURE_L_SET(BgL_printzd2epairzd2_6987,
							(int) (((long) 3)), BgL_printzd2hvectorzd2_6978);
						PROCEDURE_L_SET(BgL_printzd2epairzd2_6987,
							(int) (((long) 4)), BgL_printzd2vectorzd2_6979);
						PROCEDURE_L_SET(BgL_printzd2epairzd2_6987,
							(int) (((long) 5)), BgL_printzd2weakptrzd2_6980);
						PROCEDURE_L_SET(BgL_printzd2epairzd2_6987,
							(int) (((long) 6)), BgL_printzd2cellzd2_6981);
						PROCEDURE_L_SET(BgL_printzd2epairzd2_6987,
							(int) (((long) 7)), BgL_printzd2classzd2_6983);
						PROCEDURE_L_SET(BgL_printzd2epairzd2_6987,
							(int) (((long) 8)), BgL_printzd2objectzd2_6984);
						PROCEDURE_L_SET(BgL_printzd2epairzd2_6987,
							(int) (((long) 9)), BgL_printzd2pairzd2_6986);
						PROCEDURE_L_SET(BgL_printzd2epairzd2_6987,
							(int) (((long) 10)), ((obj_t) BgL_bufferz00_7300));
						PROCEDURE_L_SET(BgL_printzd2epairzd2_6987,
							(int) (((long) 11)), ((obj_t) BgL_ptrz00_7298));
						PROCEDURE_L_SET(BgL_printzd2epairzd2_6987,
							(int) (((long) 12)), BgL_tablez00_52);
						if ((BgL_nbrefz00_53 > ((long) 0)))
							{	/* Unsafe/intext.scm 1126 */
								BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7300,
									BgL_ptrz00_7298, BINT(((long) 1)));
								{	/* Unsafe/intext.scm 702 */
									obj_t BgL_stringz00_5905;
									long BgL_kz00_5906;

									BgL_stringz00_5905 = CELL_REF(BgL_bufferz00_7300);
									BgL_kz00_5906 = (long) CINT(CELL_REF(BgL_ptrz00_7298));
									STRING_SET(BgL_stringz00_5905, BgL_kz00_5906,
										((unsigned char) 'c'));
								}
								{	/* Unsafe/intext.scm 703 */
									obj_t BgL_auxz00_7301;

									BgL_auxz00_7301 =
										ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7298));
									CELL_SET(BgL_ptrz00_7298, BgL_auxz00_7301);
								}
								if ((BgL_nbrefz00_53 < ((long) 0)))
									{	/* Unsafe/intext.scm 785 */
										BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7300,
											BgL_ptrz00_7298, BINT(((long) 1)));
										{	/* Unsafe/intext.scm 702 */
											obj_t BgL_stringz00_5915;
											long BgL_kz00_5916;

											BgL_stringz00_5915 = CELL_REF(BgL_bufferz00_7300);
											BgL_kz00_5916 = (long) CINT(CELL_REF(BgL_ptrz00_7298));
											STRING_SET(BgL_stringz00_5915, BgL_kz00_5916,
												((unsigned char) '-'));
										}
										{	/* Unsafe/intext.scm 703 */
											obj_t BgL_auxz00_7302;

											BgL_auxz00_7302 =
												ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7298));
											CELL_SET(BgL_ptrz00_7298, BgL_auxz00_7302);
										}
										BGl_z62printzd2wordzb0zz__intextz00(BgL_ptrz00_7298,
											BgL_bufferz00_7300, NEG(BgL_nbrefz00_53));
									}
								else
									{	/* Unsafe/intext.scm 785 */
										BGl_z62printzd2wordzb0zz__intextz00(BgL_ptrz00_7298,
											BgL_bufferz00_7300, BgL_nbrefz00_53);
									}
							}
						else
							{	/* Unsafe/intext.scm 1126 */
								BFALSE;
							}
						BGl_z62printzd2itemzb0zz__intextz00(BgL_printzd2epairzd2_6987,
							BgL_printzd2pairzd2_6986, BgL_printzd2objectzd2_6984,
							BgL_printzd2classzd2_6983, BgL_printzd2cellzd2_6981,
							BgL_printzd2weakptrzd2_6980, BgL_printzd2vectorzd2_6979,
							BgL_printzd2hvectorzd2_6978, BgL_printzd2tvectorzd2_6976,
							BgL_printzd2customzd2_6975, BgL_refz00_7299, BgL_tablez00_52,
							BgL_ptrz00_7298, BgL_bufferz00_7300, BgL_objz00_54);
						{	/* Unsafe/intext.scm 1132 */
							obj_t BgL_sz00_5922;
							long BgL_lz00_5923;

							BgL_sz00_5922 = CELL_REF(BgL_bufferz00_7300);
							BgL_lz00_5923 = (long) CINT(CELL_REF(BgL_ptrz00_7298));
							return bgl_string_shrink(BgL_sz00_5922, BgL_lz00_5923);
						}
					}
				}
			}
		}

	}



/* &print-word/size */
	bool_t BGl_z62printzd2wordzf2siza7eze5zz__intextz00(obj_t BgL_ptrz00_6990,
		obj_t BgL_bufferz00_6989, obj_t BgL_mz00_2126, long BgL_siza7eza7_2127)
	{
		{	/* Unsafe/intext.scm 739 */
			{	/* Unsafe/intext.scm 735 */
				long BgL_g1065z00_2129;

				BgL_g1065z00_2129 = (BgL_siza7eza7_2127 - ((long) 1));
				{
					long BgL_iz00_2131;

					BgL_iz00_2131 = BgL_g1065z00_2129;
				BgL_zc3z04anonymousza31634ze3z87_2132:
					if ((BgL_iz00_2131 >= ((long) 0)))
						{	/* Unsafe/intext.scm 737 */
							long BgL_dz00_2134;

							BgL_dz00_2134 =
								(
								((long) CINT(BgL_mz00_2126) >>
									(int) ((((long) 8) * BgL_iz00_2131))) & ((long) 255));
							{	/* Unsafe/intext.scm 731 */
								unsigned char BgL_arg1632z00_4291;

								BgL_arg1632z00_4291 = (BgL_dz00_2134);
								BGl_z62z12printzd2markupza2zz__intextz00(BgL_ptrz00_6990,
									BgL_bufferz00_6989, BgL_arg1632z00_4291);
							}
							{
								long BgL_iz00_8826;

								BgL_iz00_8826 = (BgL_iz00_2131 - ((long) 1));
								BgL_iz00_2131 = BgL_iz00_8826;
								goto BgL_zc3z04anonymousza31634ze3z87_2132;
							}
						}
					else
						{	/* Unsafe/intext.scm 736 */
							return ((bool_t) 0);
						}
				}
			}
		}

	}



/* &!print-markup */
	obj_t BGl_z62z12printzd2markupza2zz__intextz00(obj_t BgL_ptrz00_6992,
		obj_t BgL_bufferz00_6991, unsigned char BgL_cz00_2109)
	{
		{	/* Unsafe/intext.scm 701 */
			BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_6991,
				BgL_ptrz00_6992, BINT(((long) 1)));
			{	/* Unsafe/intext.scm 702 */
				obj_t BgL_stringz00_4231;
				long BgL_kz00_4232;

				BgL_stringz00_4231 = CELL_REF(BgL_bufferz00_6991);
				BgL_kz00_4232 = (long) CINT(CELL_REF(BgL_ptrz00_6992));
				STRING_SET(BgL_stringz00_4231, BgL_kz00_4232, BgL_cz00_2109);
			}
			{	/* Unsafe/intext.scm 703 */
				obj_t BgL_auxz00_6993;

				BgL_auxz00_6993 = ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_6992));
				return CELL_SET(BgL_ptrz00_6992, BgL_auxz00_6993);
			}
		}

	}



/* &check-buffer! */
	obj_t BGl_z62checkzd2bufferz12za2zz__intextz00(obj_t BgL_bufferz00_6995,
		obj_t BgL_ptrz00_6994, obj_t BgL_siza7eza7_2098)
	{
		{	/* Unsafe/intext.scm 697 */
			{	/* Unsafe/intext.scm 692 */
				long BgL_lz00_2100;
				long BgL_blz00_2101;

				{	/* Unsafe/intext.scm 692 */
					long BgL_za71za7_4214;

					BgL_za71za7_4214 = (long) CINT(CELL_REF(BgL_ptrz00_6994));
					BgL_lz00_2100 =
						(BgL_za71za7_4214 +
						((long) CINT(BgL_siza7eza7_2098) +
							BGl_za2maxzd2siza7ezd2wordza2za7zz__intextz00));
				}
				{	/* Unsafe/intext.scm 693 */
					obj_t BgL_stringz00_4217;

					BgL_stringz00_4217 = CELL_REF(BgL_bufferz00_6995);
					BgL_blz00_2101 = STRING_LENGTH(BgL_stringz00_4217);
				}
				if ((BgL_lz00_2100 >= BgL_blz00_2101))
					{	/* Unsafe/intext.scm 695 */
						obj_t BgL_nbufz00_2103;

						{	/* Unsafe/intext.scm 695 */
							long BgL_arg1623z00_2104;

							BgL_arg1623z00_2104 =
								(((long) 2) * (BgL_lz00_2100 + ((long) 100)));
							{	/* Ieee/string.scm 168 */

								BgL_nbufz00_2103 =
									make_string(BgL_arg1623z00_2104, ((unsigned char) ' '));
						}}
						{	/* Unsafe/intext.scm 696 */
							obj_t BgL_s1z00_4228;

							BgL_s1z00_4228 = CELL_REF(BgL_bufferz00_6995);
							blit_string(BgL_s1z00_4228, ((long) 0), BgL_nbufz00_2103,
								((long) 0), BgL_blz00_2101);
						}
						{	/* Unsafe/intext.scm 697 */
							obj_t BgL_auxz00_6996;

							BgL_auxz00_6996 = BgL_nbufz00_2103;
							return CELL_SET(BgL_bufferz00_6995, BgL_auxz00_6996);
						}
					}
				else
					{	/* Unsafe/intext.scm 694 */
						return BFALSE;
					}
			}
		}

	}



/* &print-item */
	obj_t BGl_z62printzd2itemzb0zz__intextz00(obj_t BgL_printzd2epairzd2_7010,
		obj_t BgL_printzd2pairzd2_7009, obj_t BgL_printzd2objectzd2_7008,
		obj_t BgL_printzd2classzd2_7007, obj_t BgL_printzd2cellzd2_7006,
		obj_t BgL_printzd2weakptrzd2_7005, obj_t BgL_printzd2vectorzd2_7004,
		obj_t BgL_printzd2hvectorzd2_7003, obj_t BgL_printzd2tvectorzd2_7002,
		obj_t BgL_printzd2customzd2_7001, obj_t BgL_refz00_7000,
		obj_t BgL_tablez00_6999, obj_t BgL_ptrz00_6998, obj_t BgL_bufferz00_6997,
		obj_t BgL_itemz00_2464)
	{
		{	/* Unsafe/intext.scm 1124 */
		BGl_z62printzd2itemzb0zz__intextz00:
			{
				obj_t BgL_mz00_2139;
				obj_t BgL_mz00_2152;
				obj_t BgL_itemz00_2114;
				obj_t BgL_itemz00_2205;
				obj_t BgL_printerz00_2206;

				{	/* Unsafe/intext.scm 1014 */
					bool_t BgL_test3549z00_8845;

					{	/* Unsafe/intext.scm 1014 */
						bool_t BgL_test3550z00_8846;

						{	/* Unsafe/intext.scm 1014 */
							bool_t BgL_res2888z00_5375;

							BgL_res2888z00_5375 = EPAIRP(BgL_itemz00_2464);
							BgL_test3550z00_8846 = BgL_res2888z00_5375;
						}
						if (BgL_test3550z00_8846)
							{	/* Unsafe/intext.scm 1014 */
								BgL_test3549z00_8845 = BGl_za2epairzf3za2zf3zz__intextz00;
							}
						else
							{	/* Unsafe/intext.scm 1014 */
								BgL_test3549z00_8845 = ((bool_t) 0);
							}
					}
					if (BgL_test3549z00_8845)
						{	/* Unsafe/intext.scm 1014 */
							BgL_itemz00_2205 = BgL_itemz00_2464;
							BgL_printerz00_2206 = BgL_printzd2epairzd2_7010;
						BgL_zc3z04anonymousza31692ze3z87_2207:
							{	/* Unsafe/intext.scm 798 */
								obj_t BgL_markz00_2208;

								BgL_markz00_2208 =
									BGl_hashtablezd2getzd2zz__hashz00(BgL_tablez00_6999,
									BgL_itemz00_2205);
								if (((long) CINT(STRUCT_REF(((obj_t) BgL_markz00_2208),
												(int) (((long) 3)))) >= ((long) 0)))
									{	/* Unsafe/intext.scm 800 */
										BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_6997,
											BgL_ptrz00_6998, BINT(((long) 1)));
										{	/* Unsafe/intext.scm 702 */
											obj_t BgL_stringz00_4437;
											long BgL_kz00_4438;

											BgL_stringz00_4437 = CELL_REF(BgL_bufferz00_6997);
											BgL_kz00_4438 = (long) CINT(CELL_REF(BgL_ptrz00_6998));
											STRING_SET(BgL_stringz00_4437, BgL_kz00_4438,
												((unsigned char) '#'));
										}
										{	/* Unsafe/intext.scm 703 */
											obj_t BgL_auxz00_7046;

											BgL_auxz00_7046 =
												ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_6998));
											CELL_SET(BgL_ptrz00_6998, BgL_auxz00_7046);
										}
										{	/* Unsafe/intext.scm 802 */
											obj_t BgL_arg1695z00_2210;

											BgL_arg1695z00_2210 =
												STRUCT_REF(
												((obj_t) BgL_markz00_2208), (int) (((long) 3)));
											{	/* Unsafe/intext.scm 802 */
												long BgL_iz00_4443;

												BgL_iz00_4443 = (long) CINT(BgL_arg1695z00_2210);
												if ((BgL_iz00_4443 < ((long) 0)))
													{	/* Unsafe/intext.scm 785 */
														BGl_z62checkzd2bufferz12za2zz__intextz00
															(BgL_bufferz00_6997, BgL_ptrz00_6998,
															BINT(((long) 1)));
														{	/* Unsafe/intext.scm 702 */
															obj_t BgL_stringz00_4448;
															long BgL_kz00_4449;

															BgL_stringz00_4448 = CELL_REF(BgL_bufferz00_6997);
															BgL_kz00_4449 =
																(long) CINT(CELL_REF(BgL_ptrz00_6998));
															STRING_SET(BgL_stringz00_4448, BgL_kz00_4449,
																((unsigned char) '-'));
														}
														{	/* Unsafe/intext.scm 703 */
															obj_t BgL_auxz00_7047;

															BgL_auxz00_7047 =
																ADDFX(BINT(((long) 1)),
																CELL_REF(BgL_ptrz00_6998));
															CELL_SET(BgL_ptrz00_6998, BgL_auxz00_7047);
														}
														{	/* Unsafe/intext.scm 788 */
															long BgL_arg1688z00_4445;

															BgL_arg1688z00_4445 = NEG(BgL_iz00_4443);
															return
																BGl_z62printzd2wordzb0zz__intextz00
																(BgL_ptrz00_6998, BgL_bufferz00_6997,
																BgL_arg1688z00_4445);
														}
													}
												else
													{	/* Unsafe/intext.scm 785 */
														return
															BGl_z62printzd2wordzb0zz__intextz00
															(BgL_ptrz00_6998, BgL_bufferz00_6997,
															BgL_iz00_4443);
													}
											}
										}
									}
								else
									{	/* Unsafe/intext.scm 800 */
										if (
											((long) CINT(STRUCT_REF(
														((obj_t) BgL_markz00_2208),
														(int) (((long) 2)))) == ((long) 0)))
											{	/* Unsafe/intext.scm 803 */
												return
													PROCEDURE_L_ENTRY(BgL_printerz00_2206)
													(BgL_printerz00_2206, BgL_itemz00_2205,
													BgL_markz00_2208);
											}
										else
											{	/* Unsafe/intext.scm 803 */
												{	/* Unsafe/intext.scm 806 */
													obj_t BgL_vz00_4458;

													BgL_vz00_4458 = CELL_REF(BgL_refz00_7000);
													{	/* Unsafe/intext.scm 646 */
														int BgL_auxz00_8889;
														obj_t BgL_tmpz00_8887;

														BgL_auxz00_8889 = (int) (((long) 3));
														BgL_tmpz00_8887 = ((obj_t) BgL_markz00_2208);
														STRUCT_SET(BgL_tmpz00_8887, BgL_auxz00_8889,
															BgL_vz00_4458);
												}}
												BGl_z62checkzd2bufferz12za2zz__intextz00
													(BgL_bufferz00_6997, BgL_ptrz00_6998,
													BINT(((long) 1)));
												{	/* Unsafe/intext.scm 702 */
													obj_t BgL_stringz00_4460;
													long BgL_kz00_4461;

													BgL_stringz00_4460 = CELL_REF(BgL_bufferz00_6997);
													BgL_kz00_4461 =
														(long) CINT(CELL_REF(BgL_ptrz00_6998));
													STRING_SET(BgL_stringz00_4460, BgL_kz00_4461,
														((unsigned char) '='));
												}
												{	/* Unsafe/intext.scm 703 */
													obj_t BgL_auxz00_7048;

													BgL_auxz00_7048 =
														ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_6998));
													CELL_SET(BgL_ptrz00_6998, BgL_auxz00_7048);
												}
												{	/* Unsafe/intext.scm 808 */
													long BgL_iz00_4465;

													BgL_iz00_4465 =
														(long) CINT(CELL_REF(BgL_refz00_7000));
													if ((BgL_iz00_4465 < ((long) 0)))
														{	/* Unsafe/intext.scm 785 */
															BGl_z62checkzd2bufferz12za2zz__intextz00
																(BgL_bufferz00_6997, BgL_ptrz00_6998,
																BINT(((long) 1)));
															{	/* Unsafe/intext.scm 702 */
																obj_t BgL_stringz00_4470;
																long BgL_kz00_4471;

																BgL_stringz00_4470 =
																	CELL_REF(BgL_bufferz00_6997);
																BgL_kz00_4471 =
																	(long) CINT(CELL_REF(BgL_ptrz00_6998));
																STRING_SET(BgL_stringz00_4470, BgL_kz00_4471,
																	((unsigned char) '-'));
															}
															{	/* Unsafe/intext.scm 703 */
																obj_t BgL_auxz00_7049;

																BgL_auxz00_7049 =
																	ADDFX(BINT(((long) 1)),
																	CELL_REF(BgL_ptrz00_6998));
																CELL_SET(BgL_ptrz00_6998, BgL_auxz00_7049);
															}
															{	/* Unsafe/intext.scm 788 */
																long BgL_arg1688z00_4467;

																BgL_arg1688z00_4467 = NEG(BgL_iz00_4465);
																BGl_z62printzd2wordzb0zz__intextz00
																	(BgL_ptrz00_6998, BgL_bufferz00_6997,
																	BgL_arg1688z00_4467);
														}}
													else
														{	/* Unsafe/intext.scm 785 */
															BGl_z62printzd2wordzb0zz__intextz00
																(BgL_ptrz00_6998, BgL_bufferz00_6997,
																BgL_iz00_4465);
														}
												}
												{	/* Unsafe/intext.scm 809 */
													obj_t BgL_auxz00_7050;

													BgL_auxz00_7050 =
														ADDFX(BINT(((long) 1)), CELL_REF(BgL_refz00_7000));
													CELL_SET(BgL_refz00_7000, BgL_auxz00_7050);
												}
												return
													PROCEDURE_L_ENTRY(BgL_printerz00_2206)
													(BgL_printerz00_2206, BgL_itemz00_2205,
													BgL_markz00_2208);
											}
									}
							}
						}
					else
						{	/* Unsafe/intext.scm 1014 */
							if (PAIRP(BgL_itemz00_2464))
								{
									obj_t BgL_printerz00_8920;
									obj_t BgL_itemz00_8919;

									BgL_itemz00_8919 = BgL_itemz00_2464;
									BgL_printerz00_8920 = BgL_printzd2pairzd2_7009;
									BgL_printerz00_2206 = BgL_printerz00_8920;
									BgL_itemz00_2205 = BgL_itemz00_8919;
									goto BgL_zc3z04anonymousza31692ze3z87_2207;
								}
							else
								{	/* Unsafe/intext.scm 1016 */
									if (SYMBOLP(BgL_itemz00_2464))
										{	/* Unsafe/intext.scm 1018 */
											BGl_z62checkzd2bufferz12za2zz__intextz00
												(BgL_bufferz00_6997, BgL_ptrz00_6998, BINT(((long) 1)));
											{	/* Unsafe/intext.scm 702 */
												obj_t BgL_stringz00_5378;
												long BgL_kz00_5379;

												BgL_stringz00_5378 = CELL_REF(BgL_bufferz00_6997);
												BgL_kz00_5379 = (long) CINT(CELL_REF(BgL_ptrz00_6998));
												STRING_SET(BgL_stringz00_5378, BgL_kz00_5379,
													((unsigned char) '\''));
											}
											{	/* Unsafe/intext.scm 703 */
												obj_t BgL_auxz00_7011;

												BgL_auxz00_7011 =
													ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_6998));
												CELL_SET(BgL_ptrz00_6998, BgL_auxz00_7011);
											}
											{	/* Unsafe/intext.scm 1020 */
												obj_t BgL_arg1856z00_2470;

												{	/* Unsafe/intext.scm 1020 */
													obj_t BgL_res2892z00_5384;

													BgL_res2892z00_5384 =
														SYMBOL_TO_STRING(BgL_itemz00_2464);
													BgL_arg1856z00_2470 = BgL_res2892z00_5384;
												}
												{
													obj_t BgL_itemz00_8930;

													BgL_itemz00_8930 = BgL_arg1856z00_2470;
													BgL_itemz00_2464 = BgL_itemz00_8930;
													goto BGl_z62printzd2itemzb0zz__intextz00;
												}
											}
										}
									else
										{	/* Unsafe/intext.scm 1018 */
											if (KEYWORDP(BgL_itemz00_2464))
												{	/* Unsafe/intext.scm 1021 */
													BGl_z62checkzd2bufferz12za2zz__intextz00
														(BgL_bufferz00_6997, BgL_ptrz00_6998,
														BINT(((long) 1)));
													{	/* Unsafe/intext.scm 702 */
														obj_t BgL_stringz00_5386;
														long BgL_kz00_5387;

														BgL_stringz00_5386 = CELL_REF(BgL_bufferz00_6997);
														BgL_kz00_5387 =
															(long) CINT(CELL_REF(BgL_ptrz00_6998));
														STRING_SET(BgL_stringz00_5386, BgL_kz00_5387,
															((unsigned char) ':'));
													}
													{	/* Unsafe/intext.scm 703 */
														obj_t BgL_auxz00_7012;

														BgL_auxz00_7012 =
															ADDFX(BINT(((long) 1)),
															CELL_REF(BgL_ptrz00_6998));
														CELL_SET(BgL_ptrz00_6998, BgL_auxz00_7012);
													}
													{	/* Unsafe/intext.scm 1023 */
														obj_t BgL_arg1858z00_2472;

														{	/* Unsafe/intext.scm 1023 */
															obj_t BgL_res2895z00_5393;

															{	/* Unsafe/intext.scm 1023 */
																obj_t BgL_arg2424z00_5392;

																BgL_arg2424z00_5392 =
																	KEYWORD_TO_STRING(BgL_itemz00_2464);
																BgL_res2895z00_5393 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2424z00_5392);
															}
															BgL_arg1858z00_2472 = BgL_res2895z00_5393;
														}
														{
															obj_t BgL_itemz00_8941;

															BgL_itemz00_8941 = BgL_arg1858z00_2472;
															BgL_itemz00_2464 = BgL_itemz00_8941;
															goto BGl_z62printzd2itemzb0zz__intextz00;
														}
													}
												}
											else
												{	/* Unsafe/intext.scm 1021 */
													if (STRINGP(BgL_itemz00_2464))
														{	/* Unsafe/intext.scm 1025 */
															obj_t BgL_zc3z04anonymousza31862ze3z87_6985;

															{
																int BgL_tmpz00_8944;

																BgL_tmpz00_8944 = (int) (((long) 2));
																BgL_zc3z04anonymousza31862ze3z87_6985 =
																	MAKE_L_PROCEDURE
																	(BGl_z62zc3z04anonymousza31862ze3ze5zz__intextz00,
																	BgL_tmpz00_8944);
															}
															PROCEDURE_L_SET
																(BgL_zc3z04anonymousza31862ze3z87_6985,
																(int) (((long) 0)),
																((obj_t) BgL_bufferz00_6997));
															PROCEDURE_L_SET
																(BgL_zc3z04anonymousza31862ze3z87_6985,
																(int) (((long) 1)), ((obj_t) BgL_ptrz00_6998));
															{
																obj_t BgL_printerz00_8954;
																obj_t BgL_itemz00_8953;

																BgL_itemz00_8953 = BgL_itemz00_2464;
																BgL_printerz00_8954 =
																	BgL_zc3z04anonymousza31862ze3z87_6985;
																BgL_printerz00_2206 = BgL_printerz00_8954;
																BgL_itemz00_2205 = BgL_itemz00_8953;
																goto BgL_zc3z04anonymousza31692ze3z87_2207;
															}
														}
													else
														{	/* Unsafe/intext.scm 1024 */
															if (BGL_OBJECTP(BgL_itemz00_2464))
																{
																	obj_t BgL_printerz00_8958;
																	obj_t BgL_itemz00_8957;

																	BgL_itemz00_8957 = BgL_itemz00_2464;
																	BgL_printerz00_8958 =
																		BgL_printzd2objectzd2_7008;
																	BgL_printerz00_2206 = BgL_printerz00_8958;
																	BgL_itemz00_2205 = BgL_itemz00_8957;
																	goto BgL_zc3z04anonymousza31692ze3z87_2207;
																}
															else
																{	/* Unsafe/intext.scm 1026 */
																	if (BGl_classzf3zf3zz__objectz00
																		(BgL_itemz00_2464))
																		{
																			obj_t BgL_printerz00_8962;
																			obj_t BgL_itemz00_8961;

																			BgL_itemz00_8961 = BgL_itemz00_2464;
																			BgL_printerz00_8962 =
																				BgL_printzd2classzd2_7007;
																			BgL_printerz00_2206 = BgL_printerz00_8962;
																			BgL_itemz00_2205 = BgL_itemz00_8961;
																			goto
																				BgL_zc3z04anonymousza31692ze3z87_2207;
																		}
																	else
																		{	/* Unsafe/intext.scm 1028 */
																			if (CHARP(BgL_itemz00_2464))
																				{	/* Unsafe/intext.scm 1030 */
																					BGl_z62checkzd2bufferz12za2zz__intextz00
																						(BgL_bufferz00_6997,
																						BgL_ptrz00_6998, BINT(((long) 1)));
																					{	/* Unsafe/intext.scm 702 */
																						obj_t BgL_stringz00_5405;
																						long BgL_kz00_5406;

																						BgL_stringz00_5405 =
																							CELL_REF(BgL_bufferz00_6997);
																						BgL_kz00_5406 =
																							(long)
																							CINT(CELL_REF(BgL_ptrz00_6998));
																						STRING_SET(BgL_stringz00_5405,
																							BgL_kz00_5406,
																							((unsigned char) 'a'));
																					}
																					{	/* Unsafe/intext.scm 703 */
																						obj_t BgL_auxz00_7013;

																						BgL_auxz00_7013 =
																							ADDFX(BINT(((long) 1)),
																							CELL_REF(BgL_ptrz00_6998));
																						CELL_SET(BgL_ptrz00_6998,
																							BgL_auxz00_7013);
																					}
																					{	/* Unsafe/intext.scm 1032 */
																						long BgL_arg1866z00_2482;

																						BgL_arg1866z00_2482 =
																							(CCHAR(BgL_itemz00_2464));
																						if (
																							(BgL_arg1866z00_2482 <
																								((long) 0)))
																							{	/* Unsafe/intext.scm 785 */
																								BGl_z62checkzd2bufferz12za2zz__intextz00
																									(BgL_bufferz00_6997,
																									BgL_ptrz00_6998,
																									BINT(((long) 1)));
																								{	/* Unsafe/intext.scm 702 */
																									obj_t BgL_stringz00_5417;
																									long BgL_kz00_5418;

																									BgL_stringz00_5417 =
																										CELL_REF
																										(BgL_bufferz00_6997);
																									BgL_kz00_5418 =
																										(long)
																										CINT(CELL_REF
																										(BgL_ptrz00_6998));
																									STRING_SET(BgL_stringz00_5417,
																										BgL_kz00_5418,
																										((unsigned char) '-'));
																								}
																								{	/* Unsafe/intext.scm 703 */
																									obj_t BgL_auxz00_7014;

																									BgL_auxz00_7014 =
																										ADDFX(BINT(((long) 1)),
																										CELL_REF(BgL_ptrz00_6998));
																									CELL_SET(BgL_ptrz00_6998,
																										BgL_auxz00_7014);
																								}
																								{	/* Unsafe/intext.scm 788 */
																									long BgL_arg1688z00_5414;

																									BgL_arg1688z00_5414 =
																										NEG(BgL_arg1866z00_2482);
																									return
																										BGl_z62printzd2wordzb0zz__intextz00
																										(BgL_ptrz00_6998,
																										BgL_bufferz00_6997,
																										BgL_arg1688z00_5414);
																								}
																							}
																						else
																							{	/* Unsafe/intext.scm 785 */
																								return
																									BGl_z62printzd2wordzb0zz__intextz00
																									(BgL_ptrz00_6998,
																									BgL_bufferz00_6997,
																									BgL_arg1866z00_2482);
																							}
																					}
																				}
																			else
																				{	/* Unsafe/intext.scm 1030 */
																					if (UCS2P(BgL_itemz00_2464))
																						{	/* Unsafe/intext.scm 1033 */
																							BGl_z62checkzd2bufferz12za2zz__intextz00
																								(BgL_bufferz00_6997,
																								BgL_ptrz00_6998,
																								BINT(((long) 1)));
																							{	/* Unsafe/intext.scm 702 */
																								obj_t BgL_stringz00_5425;
																								long BgL_kz00_5426;

																								BgL_stringz00_5425 =
																									CELL_REF(BgL_bufferz00_6997);
																								BgL_kz00_5426 =
																									(long)
																									CINT(CELL_REF
																									(BgL_ptrz00_6998));
																								STRING_SET(BgL_stringz00_5425,
																									BgL_kz00_5426,
																									((unsigned char) 'u'));
																							}
																							{	/* Unsafe/intext.scm 703 */
																								obj_t BgL_auxz00_7015;

																								BgL_auxz00_7015 =
																									ADDFX(BINT(((long) 1)),
																									CELL_REF(BgL_ptrz00_6998));
																								CELL_SET(BgL_ptrz00_6998,
																									BgL_auxz00_7015);
																							}
																							{	/* Unsafe/intext.scm 1035 */
																								int BgL_arg1868z00_2484;

																								{	/* Unsafe/intext.scm 1035 */
																									int BgL_res2908z00_5431;

																									{	/* Unsafe/intext.scm 1035 */
																										ucs2_t BgL_ucs2z00_5430;

																										BgL_ucs2z00_5430 =
																											CUCS2(BgL_itemz00_2464);
																										{	/* Unsafe/intext.scm 1035 */
																											obj_t BgL_tmpz00_8993;

																											BgL_tmpz00_8993 =
																												BUCS2(BgL_ucs2z00_5430);
																											BgL_res2908z00_5431 =
																												CUCS2(BgL_tmpz00_8993);
																									}}
																									BgL_arg1868z00_2484 =
																										BgL_res2908z00_5431;
																								}
																								{	/* Unsafe/intext.scm 1035 */
																									long BgL_iz00_5432;

																									BgL_iz00_5432 =
																										(long)
																										(BgL_arg1868z00_2484);
																									if ((BgL_iz00_5432 <
																											((long) 0)))
																										{	/* Unsafe/intext.scm 785 */
																											BGl_z62checkzd2bufferz12za2zz__intextz00
																												(BgL_bufferz00_6997,
																												BgL_ptrz00_6998,
																												BINT(((long) 1)));
																											{	/* Unsafe/intext.scm 702 */
																												obj_t
																													BgL_stringz00_5437;
																												long BgL_kz00_5438;

																												BgL_stringz00_5437 =
																													CELL_REF
																													(BgL_bufferz00_6997);
																												BgL_kz00_5438 =
																													(long)
																													CINT(CELL_REF
																													(BgL_ptrz00_6998));
																												STRING_SET
																													(BgL_stringz00_5437,
																													BgL_kz00_5438,
																													((unsigned char)
																														'-'));
																											}
																											{	/* Unsafe/intext.scm 703 */
																												obj_t BgL_auxz00_7016;

																												BgL_auxz00_7016 =
																													ADDFX(BINT(((long)
																															1)),
																													CELL_REF
																													(BgL_ptrz00_6998));
																												CELL_SET
																													(BgL_ptrz00_6998,
																													BgL_auxz00_7016);
																											}
																											{	/* Unsafe/intext.scm 788 */
																												long
																													BgL_arg1688z00_5434;
																												BgL_arg1688z00_5434 =
																													NEG(BgL_iz00_5432);
																												return
																													BGl_z62printzd2wordzb0zz__intextz00
																													(BgL_ptrz00_6998,
																													BgL_bufferz00_6997,
																													BgL_arg1688z00_5434);
																											}
																										}
																									else
																										{	/* Unsafe/intext.scm 785 */
																											return
																												BGl_z62printzd2wordzb0zz__intextz00
																												(BgL_ptrz00_6998,
																												BgL_bufferz00_6997,
																												BgL_iz00_5432);
																										}
																								}
																							}
																						}
																					else
																						{	/* Unsafe/intext.scm 1033 */
																							if ((BgL_itemz00_2464 == BUNSPEC))
																								{	/* Unsafe/intext.scm 1036 */
																									BGl_z62checkzd2bufferz12za2zz__intextz00
																										(BgL_bufferz00_6997,
																										BgL_ptrz00_6998,
																										BINT(((long) 1)));
																									{	/* Unsafe/intext.scm 702 */
																										obj_t BgL_stringz00_5444;
																										long BgL_kz00_5445;

																										BgL_stringz00_5444 =
																											CELL_REF
																											(BgL_bufferz00_6997);
																										BgL_kz00_5445 =
																											(long)
																											CINT(CELL_REF
																											(BgL_ptrz00_6998));
																										STRING_SET
																											(BgL_stringz00_5444,
																											BgL_kz00_5445,
																											((unsigned char) ';'));
																									}
																									{	/* Unsafe/intext.scm 703 */
																										obj_t BgL_auxz00_7017;

																										BgL_auxz00_7017 =
																											ADDFX(BINT(((long) 1)),
																											CELL_REF
																											(BgL_ptrz00_6998));
																										return
																											CELL_SET(BgL_ptrz00_6998,
																											BgL_auxz00_7017);
																									}
																								}
																							else
																								{	/* Unsafe/intext.scm 1036 */
																									if (
																										(BgL_itemz00_2464 == BNIL))
																										{	/* Unsafe/intext.scm 1038 */
																											BGl_z62checkzd2bufferz12za2zz__intextz00
																												(BgL_bufferz00_6997,
																												BgL_ptrz00_6998,
																												BINT(((long) 1)));
																											{	/* Unsafe/intext.scm 702 */
																												obj_t
																													BgL_stringz00_5449;
																												long BgL_kz00_5450;

																												BgL_stringz00_5449 =
																													CELL_REF
																													(BgL_bufferz00_6997);
																												BgL_kz00_5450 =
																													(long)
																													CINT(CELL_REF
																													(BgL_ptrz00_6998));
																												STRING_SET
																													(BgL_stringz00_5449,
																													BgL_kz00_5450,
																													((unsigned char)
																														'.'));
																											}
																											{	/* Unsafe/intext.scm 703 */
																												obj_t BgL_auxz00_7018;

																												BgL_auxz00_7018 =
																													ADDFX(BINT(((long)
																															1)),
																													CELL_REF
																													(BgL_ptrz00_6998));
																												return
																													CELL_SET
																													(BgL_ptrz00_6998,
																													BgL_auxz00_7018);
																											}
																										}
																									else
																										{	/* Unsafe/intext.scm 1038 */
																											if (
																												(BgL_itemz00_2464 ==
																													BTRUE))
																												{	/* Unsafe/intext.scm 1040 */
																													BGl_z62checkzd2bufferz12za2zz__intextz00
																														(BgL_bufferz00_6997,
																														BgL_ptrz00_6998,
																														BINT(((long) 1)));
																													{	/* Unsafe/intext.scm 702 */
																														obj_t
																															BgL_stringz00_5454;
																														long BgL_kz00_5455;

																														BgL_stringz00_5454 =
																															CELL_REF
																															(BgL_bufferz00_6997);
																														BgL_kz00_5455 =
																															(long)
																															CINT(CELL_REF
																															(BgL_ptrz00_6998));
																														STRING_SET
																															(BgL_stringz00_5454,
																															BgL_kz00_5455,
																															((unsigned char)
																																'T'));
																													}
																													{	/* Unsafe/intext.scm 703 */
																														obj_t
																															BgL_auxz00_7019;
																														BgL_auxz00_7019 =
																															ADDFX(BINT(((long)
																																	1)),
																															CELL_REF
																															(BgL_ptrz00_6998));
																														return
																															CELL_SET
																															(BgL_ptrz00_6998,
																															BgL_auxz00_7019);
																													}
																												}
																											else
																												{	/* Unsafe/intext.scm 1040 */
																													if (
																														(BgL_itemz00_2464 ==
																															BFALSE))
																														{	/* Unsafe/intext.scm 1042 */
																															BGl_z62checkzd2bufferz12za2zz__intextz00
																																(BgL_bufferz00_6997,
																																BgL_ptrz00_6998,
																																BINT(((long)
																																		1)));
																															{	/* Unsafe/intext.scm 702 */
																																obj_t
																																	BgL_stringz00_5459;
																																long
																																	BgL_kz00_5460;
																																BgL_stringz00_5459
																																	=
																																	CELL_REF
																																	(BgL_bufferz00_6997);
																																BgL_kz00_5460 =
																																	(long)
																																	CINT(CELL_REF
																																	(BgL_ptrz00_6998));
																																STRING_SET
																																	(BgL_stringz00_5459,
																																	BgL_kz00_5460,
																																	((unsigned
																																			char)
																																		'F'));
																															}
																															{	/* Unsafe/intext.scm 703 */
																																obj_t
																																	BgL_auxz00_7020;
																																BgL_auxz00_7020
																																	=
																																	ADDFX(BINT((
																																			(long)
																																			1)),
																																	CELL_REF
																																	(BgL_ptrz00_6998));
																																return
																																	CELL_SET
																																	(BgL_ptrz00_6998,
																																	BgL_auxz00_7020);
																															}
																														}
																													else
																														{	/* Unsafe/intext.scm 1042 */
																															if (BGL_INT8P
																																(BgL_itemz00_2464))
																																{	/* Unsafe/intext.scm 1044 */
																																	BGl_z62checkzd2bufferz12za2zz__intextz00
																																		(BgL_bufferz00_6997,
																																		BgL_ptrz00_6998,
																																		BINT(((long)
																																				1)));
																																	{	/* Unsafe/intext.scm 702 */
																																		obj_t
																																			BgL_stringz00_5465;
																																		long
																																			BgL_kz00_5466;
																																		BgL_stringz00_5465
																																			=
																																			CELL_REF
																																			(BgL_bufferz00_6997);
																																		BgL_kz00_5466
																																			=
																																			(long)
																																			CINT
																																			(CELL_REF
																																			(BgL_ptrz00_6998));
																																		STRING_SET
																																			(BgL_stringz00_5465,
																																			BgL_kz00_5466,
																																			((unsigned
																																					char)
																																				'b'));
																																	}
																																	{	/* Unsafe/intext.scm 703 */
																																		obj_t
																																			BgL_auxz00_7021;
																																		BgL_auxz00_7021
																																			=
																																			ADDFX(BINT
																																			(((long)
																																					1)),
																																			CELL_REF
																																			(BgL_ptrz00_6998));
																																		CELL_SET
																																			(BgL_ptrz00_6998,
																																			BgL_auxz00_7021);
																																	}
																																	{	/* Unsafe/intext.scm 1046 */
																																		long
																																			BgL_arg1874z00_2490;
																																		{	/* Unsafe/intext.scm 1046 */
																																			long
																																				BgL_res2919z00_5474;
																																			{	/* Unsafe/intext.scm 1046 */
																																				int8_t
																																					BgL_xz00_5470;
																																				BgL_xz00_5470
																																					=
																																					BGL_BINT8_TO_INT8
																																					(BgL_itemz00_2464);
																																				{	/* Unsafe/intext.scm 1046 */
																																					long
																																						BgL_arg2345z00_5471;
																																					BgL_arg2345z00_5471
																																						=
																																						(long)
																																						(BgL_xz00_5470);
																																					{	/* Unsafe/intext.scm 1046 */
																																						long
																																							BgL_res2918z00_5473;
																																						BgL_res2918z00_5473
																																							=
																																							(long)
																																							(BgL_arg2345z00_5471);
																																						BgL_res2919z00_5474
																																							=
																																							BgL_res2918z00_5473;
																																			}}}
																																			BgL_arg1874z00_2490
																																				=
																																				BgL_res2919z00_5474;
																																		}
																																		{	/* Unsafe/intext.scm 735 */
																																			long
																																				BgL_g1065z00_5475;
																																			BgL_g1065z00_5475
																																				=
																																				(((long)
																																					1) -
																																				((long)
																																					1));
																																			{
																																				long
																																					BgL_iz00_5479;
																																				{	/* Unsafe/intext.scm 735 */
																																					bool_t
																																						BgL_tmpz00_9052;
																																					BgL_iz00_5479
																																						=
																																						BgL_g1065z00_5475;
																																				BgL_loopz00_5478:
																																					if (
																																						(BgL_iz00_5479
																																							>=
																																							((long) 0)))
																																						{	/* Unsafe/intext.scm 737 */
																																							long
																																								BgL_dz00_5483;
																																							BgL_dz00_5483
																																								=
																																								(
																																								(BgL_arg1874z00_2490
																																									>>
																																									(int)
																																									((((long) 8) * BgL_iz00_5479))) & ((long) 255));
																																							{	/* Unsafe/intext.scm 731 */
																																								unsigned
																																									char
																																									BgL_arg1632z00_5493;
																																								BgL_arg1632z00_5493
																																									=
																																									(BgL_dz00_5483);
																																								BGl_z62z12printzd2markupza2zz__intextz00
																																									(BgL_ptrz00_6998,
																																									BgL_bufferz00_6997,
																																									BgL_arg1632z00_5493);
																																							}
																																							{
																																								long
																																									BgL_iz00_9061;
																																								BgL_iz00_9061
																																									=
																																									(BgL_iz00_5479
																																									-
																																									((long) 1));
																																								BgL_iz00_5479
																																									=
																																									BgL_iz00_9061;
																																								goto
																																									BgL_loopz00_5478;
																																							}
																																						}
																																					else
																																						{	/* Unsafe/intext.scm 736 */
																																							BgL_tmpz00_9052
																																								=
																																								(
																																								(bool_t)
																																								0);
																																						}
																																					return
																																						BBOOL
																																						(BgL_tmpz00_9052);
																																				}
																																			}
																																		}
																																	}
																																}
																															else
																																{	/* Unsafe/intext.scm 1044 */
																																	if (BGL_UINT8P
																																		(BgL_itemz00_2464))
																																		{	/* Unsafe/intext.scm 1047 */
																																			BGl_z62checkzd2bufferz12za2zz__intextz00
																																				(BgL_bufferz00_6997,
																																				BgL_ptrz00_6998,
																																				BINT((
																																						(long)
																																						1)));
																																			{	/* Unsafe/intext.scm 702 */
																																				obj_t
																																					BgL_stringz00_5500;
																																				long
																																					BgL_kz00_5501;
																																				BgL_stringz00_5500
																																					=
																																					CELL_REF
																																					(BgL_bufferz00_6997);
																																				BgL_kz00_5501
																																					=
																																					(long)
																																					CINT
																																					(CELL_REF
																																					(BgL_ptrz00_6998));
																																				STRING_SET
																																					(BgL_stringz00_5500,
																																					BgL_kz00_5501,
																																					((unsigned char) 'B'));
																																			}
																																			{	/* Unsafe/intext.scm 703 */
																																				obj_t
																																					BgL_auxz00_7022;
																																				BgL_auxz00_7022
																																					=
																																					ADDFX
																																					(BINT(
																																						((long) 1)), CELL_REF(BgL_ptrz00_6998));
																																				CELL_SET
																																					(BgL_ptrz00_6998,
																																					BgL_auxz00_7022);
																																			}
																																			{	/* Unsafe/intext.scm 1049 */
																																				long
																																					BgL_arg1876z00_2492;
																																				{	/* Unsafe/intext.scm 1049 */
																																					long
																																						BgL_res2923z00_5509;
																																					{	/* Unsafe/intext.scm 1049 */
																																						uint8_t
																																							BgL_xz00_5505;
																																						BgL_xz00_5505
																																							=
																																							BGL_BUINT8_TO_UINT8
																																							(BgL_itemz00_2464);
																																						{	/* Unsafe/intext.scm 1049 */
																																							long
																																								BgL_arg2343z00_5506;
																																							BgL_arg2343z00_5506
																																								=
																																								(long)
																																								(BgL_xz00_5505);
																																							{	/* Unsafe/intext.scm 1049 */
																																								long
																																									BgL_res2922z00_5508;
																																								BgL_res2922z00_5508
																																									=
																																									(long)
																																									(BgL_arg2343z00_5506);
																																								BgL_res2923z00_5509
																																									=
																																									BgL_res2922z00_5508;
																																					}}}
																																					BgL_arg1876z00_2492
																																						=
																																						BgL_res2923z00_5509;
																																				}
																																				{	/* Unsafe/intext.scm 735 */
																																					long
																																						BgL_g1065z00_5510;
																																					BgL_g1065z00_5510
																																						=
																																						(((long) 1) - ((long) 1));
																																					{
																																						long
																																							BgL_iz00_5514;
																																						{	/* Unsafe/intext.scm 735 */
																																							bool_t
																																								BgL_tmpz00_9076;
																																							BgL_iz00_5514
																																								=
																																								BgL_g1065z00_5510;
																																						BgL_loopz00_5513:
																																							if ((BgL_iz00_5514 >= ((long) 0)))
																																								{	/* Unsafe/intext.scm 737 */
																																									long
																																										BgL_dz00_5518;
																																									BgL_dz00_5518
																																										=
																																										(
																																										(BgL_arg1876z00_2492
																																											>>
																																											(int)
																																											((((long) 8) * BgL_iz00_5514))) & ((long) 255));
																																									{	/* Unsafe/intext.scm 731 */
																																										unsigned
																																											char
																																											BgL_arg1632z00_5528;
																																										BgL_arg1632z00_5528
																																											=
																																											(BgL_dz00_5518);
																																										BGl_z62z12printzd2markupza2zz__intextz00
																																											(BgL_ptrz00_6998,
																																											BgL_bufferz00_6997,
																																											BgL_arg1632z00_5528);
																																									}
																																									{
																																										long
																																											BgL_iz00_9085;
																																										BgL_iz00_9085
																																											=
																																											(BgL_iz00_5514
																																											-
																																											((long) 1));
																																										BgL_iz00_5514
																																											=
																																											BgL_iz00_9085;
																																										goto
																																											BgL_loopz00_5513;
																																									}
																																								}
																																							else
																																								{	/* Unsafe/intext.scm 736 */
																																									BgL_tmpz00_9076
																																										=
																																										(
																																										(bool_t)
																																										0);
																																								}
																																							return
																																								BBOOL
																																								(BgL_tmpz00_9076);
																																						}
																																					}
																																				}
																																			}
																																		}
																																	else
																																		{	/* Unsafe/intext.scm 1047 */
																																			if (BGL_INT16P(BgL_itemz00_2464))
																																				{	/* Unsafe/intext.scm 1050 */
																																					BGl_z62checkzd2bufferz12za2zz__intextz00
																																						(BgL_bufferz00_6997,
																																						BgL_ptrz00_6998,
																																						BINT
																																						(((long) 1)));
																																					{	/* Unsafe/intext.scm 702 */
																																						obj_t
																																							BgL_stringz00_5535;
																																						long
																																							BgL_kz00_5536;
																																						BgL_stringz00_5535
																																							=
																																							CELL_REF
																																							(BgL_bufferz00_6997);
																																						BgL_kz00_5536
																																							=
																																							(long)
																																							CINT
																																							(CELL_REF
																																							(BgL_ptrz00_6998));
																																						STRING_SET
																																							(BgL_stringz00_5535,
																																							BgL_kz00_5536,
																																							((unsigned char) 's'));
																																					}
																																					{	/* Unsafe/intext.scm 703 */
																																						obj_t
																																							BgL_auxz00_7023;
																																						BgL_auxz00_7023
																																							=
																																							ADDFX
																																							(BINT
																																							(((long) 1)), CELL_REF(BgL_ptrz00_6998));
																																						CELL_SET
																																							(BgL_ptrz00_6998,
																																							BgL_auxz00_7023);
																																					}
																																					{	/* Unsafe/intext.scm 1052 */
																																						long
																																							BgL_arg1878z00_2494;
																																						{	/* Unsafe/intext.scm 1052 */
																																							long
																																								BgL_res2927z00_5544;
																																							{	/* Unsafe/intext.scm 1052 */
																																								int16_t
																																									BgL_xz00_5540;
																																								BgL_xz00_5540
																																									=
																																									BGL_BINT16_TO_INT16
																																									(BgL_itemz00_2464);
																																								{	/* Unsafe/intext.scm 1052 */
																																									long
																																										BgL_arg2342z00_5541;
																																									BgL_arg2342z00_5541
																																										=
																																										(long)
																																										(BgL_xz00_5540);
																																									{	/* Unsafe/intext.scm 1052 */
																																										long
																																											BgL_res2926z00_5543;
																																										BgL_res2926z00_5543
																																											=
																																											(long)
																																											(BgL_arg2342z00_5541);
																																										BgL_res2927z00_5544
																																											=
																																											BgL_res2926z00_5543;
																																							}}}
																																							BgL_arg1878z00_2494
																																								=
																																								BgL_res2927z00_5544;
																																						}
																																						{	/* Unsafe/intext.scm 735 */
																																							long
																																								BgL_g1065z00_5545;
																																							BgL_g1065z00_5545
																																								=
																																								(
																																								((long) 2) - ((long) 1));
																																							{
																																								long
																																									BgL_iz00_5549;
																																								{	/* Unsafe/intext.scm 735 */
																																									bool_t
																																										BgL_tmpz00_9100;
																																									BgL_iz00_5549
																																										=
																																										BgL_g1065z00_5545;
																																								BgL_loopz00_5548:
																																									if ((BgL_iz00_5549 >= ((long) 0)))
																																										{	/* Unsafe/intext.scm 737 */
																																											long
																																												BgL_dz00_5553;
																																											BgL_dz00_5553
																																												=
																																												(
																																												(BgL_arg1878z00_2494
																																													>>
																																													(int)
																																													((((long) 8) * BgL_iz00_5549))) & ((long) 255));
																																											{	/* Unsafe/intext.scm 731 */
																																												unsigned
																																													char
																																													BgL_arg1632z00_5563;
																																												BgL_arg1632z00_5563
																																													=
																																													(BgL_dz00_5553);
																																												BGl_z62z12printzd2markupza2zz__intextz00
																																													(BgL_ptrz00_6998,
																																													BgL_bufferz00_6997,
																																													BgL_arg1632z00_5563);
																																											}
																																											{
																																												long
																																													BgL_iz00_9109;
																																												BgL_iz00_9109
																																													=
																																													(BgL_iz00_5549
																																													-
																																													((long) 1));
																																												BgL_iz00_5549
																																													=
																																													BgL_iz00_9109;
																																												goto
																																													BgL_loopz00_5548;
																																											}
																																										}
																																									else
																																										{	/* Unsafe/intext.scm 736 */
																																											BgL_tmpz00_9100
																																												=
																																												(
																																												(bool_t)
																																												0);
																																										}
																																									return
																																										BBOOL
																																										(BgL_tmpz00_9100);
																																								}
																																							}
																																						}
																																					}
																																				}
																																			else
																																				{	/* Unsafe/intext.scm 1050 */
																																					if (BGL_UINT16P(BgL_itemz00_2464))
																																						{	/* Unsafe/intext.scm 1053 */
																																							BGl_z62checkzd2bufferz12za2zz__intextz00
																																								(BgL_bufferz00_6997,
																																								BgL_ptrz00_6998,
																																								BINT
																																								(((long) 1)));
																																							{	/* Unsafe/intext.scm 702 */
																																								obj_t
																																									BgL_stringz00_5570;
																																								long
																																									BgL_kz00_5571;
																																								BgL_stringz00_5570
																																									=
																																									CELL_REF
																																									(BgL_bufferz00_6997);
																																								BgL_kz00_5571
																																									=
																																									(long)
																																									CINT
																																									(CELL_REF
																																									(BgL_ptrz00_6998));
																																								STRING_SET
																																									(BgL_stringz00_5570,
																																									BgL_kz00_5571,
																																									((unsigned char) 'S'));
																																							}
																																							{	/* Unsafe/intext.scm 703 */
																																								obj_t
																																									BgL_auxz00_7024;
																																								BgL_auxz00_7024
																																									=
																																									ADDFX
																																									(BINT
																																									(((long) 1)), CELL_REF(BgL_ptrz00_6998));
																																								CELL_SET
																																									(BgL_ptrz00_6998,
																																									BgL_auxz00_7024);
																																							}
																																							{	/* Unsafe/intext.scm 1055 */
																																								long
																																									BgL_arg1881z00_2496;
																																								{	/* Unsafe/intext.scm 1055 */
																																									long
																																										BgL_res2931z00_5579;
																																									{	/* Unsafe/intext.scm 1055 */
																																										uint16_t
																																											BgL_xz00_5575;
																																										BgL_xz00_5575
																																											=
																																											BGL_BUINT16_TO_UINT16
																																											(BgL_itemz00_2464);
																																										{	/* Unsafe/intext.scm 1055 */
																																											long
																																												BgL_arg2341z00_5576;
																																											BgL_arg2341z00_5576
																																												=
																																												(long)
																																												(BgL_xz00_5575);
																																											{	/* Unsafe/intext.scm 1055 */
																																												long
																																													BgL_res2930z00_5578;
																																												BgL_res2930z00_5578
																																													=
																																													(long)
																																													(BgL_arg2341z00_5576);
																																												BgL_res2931z00_5579
																																													=
																																													BgL_res2930z00_5578;
																																									}}}
																																									BgL_arg1881z00_2496
																																										=
																																										BgL_res2931z00_5579;
																																								}
																																								{	/* Unsafe/intext.scm 735 */
																																									long
																																										BgL_g1065z00_5580;
																																									BgL_g1065z00_5580
																																										=
																																										(
																																										((long) 2) - ((long) 1));
																																									{
																																										long
																																											BgL_iz00_5584;
																																										{	/* Unsafe/intext.scm 735 */
																																											bool_t
																																												BgL_tmpz00_9124;
																																											BgL_iz00_5584
																																												=
																																												BgL_g1065z00_5580;
																																										BgL_loopz00_5583:
																																											if ((BgL_iz00_5584 >= ((long) 0)))
																																												{	/* Unsafe/intext.scm 737 */
																																													long
																																														BgL_dz00_5588;
																																													BgL_dz00_5588
																																														=
																																														(
																																														(BgL_arg1881z00_2496
																																															>>
																																															(int)
																																															((((long) 8) * BgL_iz00_5584))) & ((long) 255));
																																													{	/* Unsafe/intext.scm 731 */
																																														unsigned
																																															char
																																															BgL_arg1632z00_5598;
																																														BgL_arg1632z00_5598
																																															=
																																															(BgL_dz00_5588);
																																														BGl_z62z12printzd2markupza2zz__intextz00
																																															(BgL_ptrz00_6998,
																																															BgL_bufferz00_6997,
																																															BgL_arg1632z00_5598);
																																													}
																																													{
																																														long
																																															BgL_iz00_9133;
																																														BgL_iz00_9133
																																															=
																																															(BgL_iz00_5584
																																															-
																																															((long) 1));
																																														BgL_iz00_5584
																																															=
																																															BgL_iz00_9133;
																																														goto
																																															BgL_loopz00_5583;
																																													}
																																												}
																																											else
																																												{	/* Unsafe/intext.scm 736 */
																																													BgL_tmpz00_9124
																																														=
																																														(
																																														(bool_t)
																																														0);
																																												}
																																											return
																																												BBOOL
																																												(BgL_tmpz00_9124);
																																										}
																																									}
																																								}
																																							}
																																						}
																																					else
																																						{	/* Unsafe/intext.scm 1053 */
																																							if (BGL_INT32P(BgL_itemz00_2464))
																																								{	/* Unsafe/intext.scm 1056 */
																																									BGl_z62checkzd2bufferz12za2zz__intextz00
																																										(BgL_bufferz00_6997,
																																										BgL_ptrz00_6998,
																																										BINT
																																										(((long) 1)));
																																									{	/* Unsafe/intext.scm 702 */
																																										obj_t
																																											BgL_stringz00_5605;
																																										long
																																											BgL_kz00_5606;
																																										BgL_stringz00_5605
																																											=
																																											CELL_REF
																																											(BgL_bufferz00_6997);
																																										BgL_kz00_5606
																																											=
																																											(long)
																																											CINT
																																											(CELL_REF
																																											(BgL_ptrz00_6998));
																																										STRING_SET
																																											(BgL_stringz00_5605,
																																											BgL_kz00_5606,
																																											((unsigned char) 'i'));
																																									}
																																									{	/* Unsafe/intext.scm 703 */
																																										obj_t
																																											BgL_auxz00_7025;
																																										BgL_auxz00_7025
																																											=
																																											ADDFX
																																											(BINT
																																											(((long) 1)), CELL_REF(BgL_ptrz00_6998));
																																										CELL_SET
																																											(BgL_ptrz00_6998,
																																											BgL_auxz00_7025);
																																									}
																																									{	/* Unsafe/intext.scm 1058 */
																																										long
																																											BgL_arg1883z00_2498;
																																										{	/* Unsafe/intext.scm 1058 */
																																											long
																																												BgL_res2935z00_5614;
																																											{	/* Unsafe/intext.scm 1058 */
																																												int32_t
																																													BgL_xz00_5610;
																																												BgL_xz00_5610
																																													=
																																													BGL_BINT32_TO_INT32
																																													(BgL_itemz00_2464);
																																												{	/* Unsafe/intext.scm 1058 */
																																													long
																																														BgL_arg2340z00_5611;
																																													BgL_arg2340z00_5611
																																														=
																																														(long)
																																														(BgL_xz00_5610);
																																													{	/* Unsafe/intext.scm 1058 */
																																														long
																																															BgL_res2934z00_5613;
																																														BgL_res2934z00_5613
																																															=
																																															(long)
																																															(BgL_arg2340z00_5611);
																																														BgL_res2935z00_5614
																																															=
																																															BgL_res2934z00_5613;
																																											}}}
																																											BgL_arg1883z00_2498
																																												=
																																												BgL_res2935z00_5614;
																																										}
																																										{	/* Unsafe/intext.scm 735 */
																																											long
																																												BgL_g1065z00_5615;
																																											BgL_g1065z00_5615
																																												=
																																												(
																																												((long) 4) - ((long) 1));
																																											{
																																												long
																																													BgL_iz00_5619;
																																												{	/* Unsafe/intext.scm 735 */
																																													bool_t
																																														BgL_tmpz00_9148;
																																													BgL_iz00_5619
																																														=
																																														BgL_g1065z00_5615;
																																												BgL_loopz00_5618:
																																													if ((BgL_iz00_5619 >= ((long) 0)))
																																														{	/* Unsafe/intext.scm 737 */
																																															long
																																																BgL_dz00_5623;
																																															BgL_dz00_5623
																																																=
																																																(
																																																(BgL_arg1883z00_2498
																																																	>>
																																																	(int)
																																																	((((long) 8) * BgL_iz00_5619))) & ((long) 255));
																																															{	/* Unsafe/intext.scm 731 */
																																																unsigned
																																																	char
																																																	BgL_arg1632z00_5633;
																																																BgL_arg1632z00_5633
																																																	=
																																																	(BgL_dz00_5623);
																																																BGl_z62z12printzd2markupza2zz__intextz00
																																																	(BgL_ptrz00_6998,
																																																	BgL_bufferz00_6997,
																																																	BgL_arg1632z00_5633);
																																															}
																																															{
																																																long
																																																	BgL_iz00_9157;
																																																BgL_iz00_9157
																																																	=
																																																	(BgL_iz00_5619
																																																	-
																																																	((long) 1));
																																																BgL_iz00_5619
																																																	=
																																																	BgL_iz00_9157;
																																																goto
																																																	BgL_loopz00_5618;
																																															}
																																														}
																																													else
																																														{	/* Unsafe/intext.scm 736 */
																																															BgL_tmpz00_9148
																																																=
																																																(
																																																(bool_t)
																																																0);
																																														}
																																													return
																																														BBOOL
																																														(BgL_tmpz00_9148);
																																												}
																																											}
																																										}
																																									}
																																								}
																																							else
																																								{	/* Unsafe/intext.scm 1056 */
																																									if (BGL_UINT32P(BgL_itemz00_2464))
																																										{	/* Unsafe/intext.scm 1059 */
																																											BGl_z62checkzd2bufferz12za2zz__intextz00
																																												(BgL_bufferz00_6997,
																																												BgL_ptrz00_6998,
																																												BINT
																																												(((long) 1)));
																																											{	/* Unsafe/intext.scm 702 */
																																												obj_t
																																													BgL_stringz00_5640;
																																												long
																																													BgL_kz00_5641;
																																												BgL_stringz00_5640
																																													=
																																													CELL_REF
																																													(BgL_bufferz00_6997);
																																												BgL_kz00_5641
																																													=
																																													(long)
																																													CINT
																																													(CELL_REF
																																													(BgL_ptrz00_6998));
																																												STRING_SET
																																													(BgL_stringz00_5640,
																																													BgL_kz00_5641,
																																													((unsigned char) 'I'));
																																											}
																																											{	/* Unsafe/intext.scm 703 */
																																												obj_t
																																													BgL_auxz00_7026;
																																												BgL_auxz00_7026
																																													=
																																													ADDFX
																																													(BINT
																																													(((long) 1)), CELL_REF(BgL_ptrz00_6998));
																																												CELL_SET
																																													(BgL_ptrz00_6998,
																																													BgL_auxz00_7026);
																																											}
																																											{	/* Unsafe/intext.scm 1061 */
																																												long
																																													BgL_arg1885z00_2500;
																																												{	/* Unsafe/intext.scm 1061 */
																																													long
																																														BgL_res2938z00_5646;
																																													{	/* Unsafe/intext.scm 1061 */
																																														uint32_t
																																															BgL_xz00_5645;
																																														BgL_xz00_5645
																																															=
																																															BGL_BUINT32_TO_UINT32
																																															(BgL_itemz00_2464);
																																														BgL_res2938z00_5646
																																															=
																																															(long)
																																															(BgL_xz00_5645);
																																													}
																																													BgL_arg1885z00_2500
																																														=
																																														BgL_res2938z00_5646;
																																												}
																																												{	/* Unsafe/intext.scm 735 */
																																													long
																																														BgL_g1065z00_5647;
																																													BgL_g1065z00_5647
																																														=
																																														(
																																														((long) 4) - ((long) 1));
																																													{
																																														long
																																															BgL_iz00_5651;
																																														{	/* Unsafe/intext.scm 735 */
																																															bool_t
																																																BgL_tmpz00_9171;
																																															BgL_iz00_5651
																																																=
																																																BgL_g1065z00_5647;
																																														BgL_loopz00_5650:
																																															if ((BgL_iz00_5651 >= ((long) 0)))
																																																{	/* Unsafe/intext.scm 737 */
																																																	long
																																																		BgL_dz00_5655;
																																																	BgL_dz00_5655
																																																		=
																																																		(
																																																		(BgL_arg1885z00_2500
																																																			>>
																																																			(int)
																																																			((((long) 8) * BgL_iz00_5651))) & ((long) 255));
																																																	{	/* Unsafe/intext.scm 731 */
																																																		unsigned
																																																			char
																																																			BgL_arg1632z00_5665;
																																																		BgL_arg1632z00_5665
																																																			=
																																																			(BgL_dz00_5655);
																																																		BGl_z62z12printzd2markupza2zz__intextz00
																																																			(BgL_ptrz00_6998,
																																																			BgL_bufferz00_6997,
																																																			BgL_arg1632z00_5665);
																																																	}
																																																	{
																																																		long
																																																			BgL_iz00_9180;
																																																		BgL_iz00_9180
																																																			=
																																																			(BgL_iz00_5651
																																																			-
																																																			((long) 1));
																																																		BgL_iz00_5651
																																																			=
																																																			BgL_iz00_9180;
																																																		goto
																																																			BgL_loopz00_5650;
																																																	}
																																																}
																																															else
																																																{	/* Unsafe/intext.scm 736 */
																																																	BgL_tmpz00_9171
																																																		=
																																																		(
																																																		(bool_t)
																																																		0);
																																																}
																																															return
																																																BBOOL
																																																(BgL_tmpz00_9171);
																																														}
																																													}
																																												}
																																											}
																																										}
																																									else
																																										{	/* Unsafe/intext.scm 1059 */
																																											if (BGL_INT64P(BgL_itemz00_2464))
																																												{	/* Unsafe/intext.scm 1062 */
																																													BGl_z62checkzd2bufferz12za2zz__intextz00
																																														(BgL_bufferz00_6997,
																																														BgL_ptrz00_6998,
																																														BINT
																																														(((long) 1)));
																																													{	/* Unsafe/intext.scm 702 */
																																														obj_t
																																															BgL_stringz00_5672;
																																														long
																																															BgL_kz00_5673;
																																														BgL_stringz00_5672
																																															=
																																															CELL_REF
																																															(BgL_bufferz00_6997);
																																														BgL_kz00_5673
																																															=
																																															(long)
																																															CINT
																																															(CELL_REF
																																															(BgL_ptrz00_6998));
																																														STRING_SET
																																															(BgL_stringz00_5672,
																																															BgL_kz00_5673,
																																															((unsigned char) 'l'));
																																													}
																																													{	/* Unsafe/intext.scm 703 */
																																														obj_t
																																															BgL_auxz00_7027;
																																														BgL_auxz00_7027
																																															=
																																															ADDFX
																																															(BINT
																																															(((long) 1)), CELL_REF(BgL_ptrz00_6998));
																																														CELL_SET
																																															(BgL_ptrz00_6998,
																																															BgL_auxz00_7027);
																																													}
																																													{	/* Unsafe/intext.scm 1064 */
																																														bool_t
																																															BgL_tmpz00_9191;
																																														BgL_mz00_2139
																																															=
																																															BgL_itemz00_2464;
																																														{
																																															long
																																																BgL_iz00_2143;
																																															BgL_iz00_2143
																																																=
																																																(
																																																(long)
																																																7);
																																														BgL_zc3z04anonymousza31642ze3z87_2144:
																																															if ((BgL_iz00_2143 >= ((long) 0)))
																																																{	/* Unsafe/intext.scm 745 */
																																																	long
																																																		BgL_dz00_2146;
																																																	{	/* Unsafe/intext.scm 745 */
																																																		int64_t
																																																			BgL_arg1645z00_2148;
																																																		{	/* Unsafe/intext.scm 745 */
																																																			int64_t
																																																				BgL_tmpz00_9194;
																																																			{	/* Unsafe/intext.scm 745 */
																																																				int64_t
																																																					BgL_xz00_4300;
																																																				BgL_xz00_4300
																																																					=
																																																					BGL_BINT64_TO_INT64
																																																					(BgL_mz00_2139);
																																																				BgL_tmpz00_9194
																																																					=
																																																					(BgL_xz00_4300
																																																					>>
																																																					(int)
																																																					((((long) 8) * BgL_iz00_2143)));
																																																			}
																																																			BgL_arg1645z00_2148
																																																				=
																																																				(BgL_tmpz00_9194
																																																				&
																																																				(int64_t)
																																																				(((long) 255)));
																																																		}
																																																		{	/* Unsafe/intext.scm 745 */
																																																			long
																																																				BgL_res2703z00_4310;
																																																			{	/* Unsafe/intext.scm 745 */
																																																				long
																																																					BgL_arg2339z00_4307;
																																																				BgL_arg2339z00_4307
																																																					=
																																																					(long)
																																																					(BgL_arg1645z00_2148);
																																																				{	/* Unsafe/intext.scm 745 */
																																																					long
																																																						BgL_res2702z00_4309;
																																																					BgL_res2702z00_4309
																																																						=
																																																						(long)
																																																						(BgL_arg2339z00_4307);
																																																					BgL_res2703z00_4310
																																																						=
																																																						BgL_res2702z00_4309;
																																																			}}
																																																			BgL_dz00_2146
																																																				=
																																																				BgL_res2703z00_4310;
																																																	}}
																																																	{	/* Unsafe/intext.scm 731 */
																																																		unsigned
																																																			char
																																																			BgL_arg1632z00_4311;
																																																		BgL_arg1632z00_4311
																																																			=
																																																			(BgL_dz00_2146);
																																																		BGl_z62z12printzd2markupza2zz__intextz00
																																																			(BgL_ptrz00_6998,
																																																			BgL_bufferz00_6997,
																																																			BgL_arg1632z00_4311);
																																																	}
																																																	{
																																																		long
																																																			BgL_iz00_9205;
																																																		BgL_iz00_9205
																																																			=
																																																			(BgL_iz00_2143
																																																			-
																																																			((long) 1));
																																																		BgL_iz00_2143
																																																			=
																																																			BgL_iz00_9205;
																																																		goto
																																																			BgL_zc3z04anonymousza31642ze3z87_2144;
																																																	}
																																																}
																																															else
																																																{	/* Unsafe/intext.scm 744 */
																																																	BgL_tmpz00_9191
																																																		=
																																																		(
																																																		(bool_t)
																																																		0);
																																																}
																																														}
																																														return
																																															BBOOL
																																															(BgL_tmpz00_9191);
																																													}
																																												}
																																											else
																																												{	/* Unsafe/intext.scm 1062 */
																																													if (BGL_UINT64P(BgL_itemz00_2464))
																																														{	/* Unsafe/intext.scm 1065 */
																																															BGl_z62checkzd2bufferz12za2zz__intextz00
																																																(BgL_bufferz00_6997,
																																																BgL_ptrz00_6998,
																																																BINT
																																																(((long) 1)));
																																															{	/* Unsafe/intext.scm 702 */
																																																obj_t
																																																	BgL_stringz00_5678;
																																																long
																																																	BgL_kz00_5679;
																																																BgL_stringz00_5678
																																																	=
																																																	CELL_REF
																																																	(BgL_bufferz00_6997);
																																																BgL_kz00_5679
																																																	=
																																																	(long)
																																																	CINT
																																																	(CELL_REF
																																																	(BgL_ptrz00_6998));
																																																STRING_SET
																																																	(BgL_stringz00_5678,
																																																	BgL_kz00_5679,
																																																	((unsigned char) 'W'));
																																															}
																																															{	/* Unsafe/intext.scm 703 */
																																																obj_t
																																																	BgL_auxz00_7028;
																																																BgL_auxz00_7028
																																																	=
																																																	ADDFX
																																																	(BINT
																																																	(((long) 1)), CELL_REF(BgL_ptrz00_6998));
																																																CELL_SET
																																																	(BgL_ptrz00_6998,
																																																	BgL_auxz00_7028);
																																															}
																																															{	/* Unsafe/intext.scm 1067 */
																																																bool_t
																																																	BgL_tmpz00_9216;
																																																BgL_mz00_2152
																																																	=
																																																	BgL_itemz00_2464;
																																																{
																																																	long
																																																		BgL_iz00_2156;
																																																	BgL_iz00_2156
																																																		=
																																																		(
																																																		(long)
																																																		7);
																																																BgL_zc3z04anonymousza31651ze3z87_2157:
																																																	if ((BgL_iz00_2156 >= ((long) 0)))
																																																		{	/* Unsafe/intext.scm 753 */
																																																			long
																																																				BgL_dz00_2159;
																																																			{	/* Unsafe/intext.scm 753 */
																																																				uint64_t
																																																					BgL_arg1656z00_2161;
																																																				{	/* Unsafe/intext.scm 753 */
																																																					uint64_t
																																																						BgL_tmpz00_9219;
																																																					{	/* Unsafe/intext.scm 753 */
																																																						uint64_t
																																																							BgL_xz00_4320;
																																																						BgL_xz00_4320
																																																							=
																																																							BGL_BINT64_TO_INT64
																																																							(BgL_mz00_2152);
																																																						BgL_tmpz00_9219
																																																							=
																																																							(BgL_xz00_4320
																																																							>>
																																																							(int)
																																																							((((long) 8) * BgL_iz00_2156)));
																																																					}
																																																					BgL_arg1656z00_2161
																																																						=
																																																						(BgL_tmpz00_9219
																																																						&
																																																						(uint64_t)
																																																						(((long) 255)));
																																																				}
																																																				{	/* Unsafe/intext.scm 753 */
																																																					long
																																																						BgL_res2711z00_4330;
																																																					{	/* Unsafe/intext.scm 753 */
																																																						long
																																																							BgL_arg2338z00_4327;
																																																						BgL_arg2338z00_4327
																																																							=
																																																							(long)
																																																							(BgL_arg1656z00_2161);
																																																						{	/* Unsafe/intext.scm 753 */
																																																							long
																																																								BgL_res2710z00_4329;
																																																							BgL_res2710z00_4329
																																																								=
																																																								(long)
																																																								(BgL_arg2338z00_4327);
																																																							BgL_res2711z00_4330
																																																								=
																																																								BgL_res2710z00_4329;
																																																					}}
																																																					BgL_dz00_2159
																																																						=
																																																						BgL_res2711z00_4330;
																																																			}}
																																																			{	/* Unsafe/intext.scm 731 */
																																																				unsigned
																																																					char
																																																					BgL_arg1632z00_4331;
																																																				BgL_arg1632z00_4331
																																																					=
																																																					(BgL_dz00_2159);
																																																				BGl_z62z12printzd2markupza2zz__intextz00
																																																					(BgL_ptrz00_6998,
																																																					BgL_bufferz00_6997,
																																																					BgL_arg1632z00_4331);
																																																			}
																																																			{
																																																				long
																																																					BgL_iz00_9230;
																																																				BgL_iz00_9230
																																																					=
																																																					(BgL_iz00_2156
																																																					-
																																																					((long) 1));
																																																				BgL_iz00_2156
																																																					=
																																																					BgL_iz00_9230;
																																																				goto
																																																					BgL_zc3z04anonymousza31651ze3z87_2157;
																																																			}
																																																		}
																																																	else
																																																		{	/* Unsafe/intext.scm 752 */
																																																			BgL_tmpz00_9216
																																																				=
																																																				(
																																																				(bool_t)
																																																				0);
																																																		}
																																																}
																																																return
																																																	BBOOL
																																																	(BgL_tmpz00_9216);
																																															}
																																														}
																																													else
																																														{	/* Unsafe/intext.scm 1065 */
																																															if (CNSTP(BgL_itemz00_2464))
																																																{	/* Unsafe/intext.scm 1068 */
																																																	BGl_z62checkzd2bufferz12za2zz__intextz00
																																																		(BgL_bufferz00_6997,
																																																		BgL_ptrz00_6998,
																																																		BINT
																																																		(((long) 1)));
																																																	{	/* Unsafe/intext.scm 702 */
																																																		obj_t
																																																			BgL_stringz00_5684;
																																																		long
																																																			BgL_kz00_5685;
																																																		BgL_stringz00_5684
																																																			=
																																																			CELL_REF
																																																			(BgL_bufferz00_6997);
																																																		BgL_kz00_5685
																																																			=
																																																			(long)
																																																			CINT
																																																			(CELL_REF
																																																			(BgL_ptrz00_6998));
																																																		STRING_SET
																																																			(BgL_stringz00_5684,
																																																			BgL_kz00_5685,
																																																			((unsigned char) '<'));
																																																	}
																																																	{	/* Unsafe/intext.scm 703 */
																																																		obj_t
																																																			BgL_auxz00_7029;
																																																		BgL_auxz00_7029
																																																			=
																																																			ADDFX
																																																			(BINT
																																																			(((long) 1)), CELL_REF(BgL_ptrz00_6998));
																																																		CELL_SET
																																																			(BgL_ptrz00_6998,
																																																			BgL_auxz00_7029);
																																																	}
																																																	{	/* Unsafe/intext.scm 1070 */
																																																		long
																																																			BgL_arg1889z00_2504;
																																																		BgL_arg1889z00_2504
																																																			=
																																																			CCNST
																																																			(BgL_itemz00_2464);
																																																		if ((BgL_arg1889z00_2504 < ((long) 0)))
																																																			{	/* Unsafe/intext.scm 785 */
																																																				BGl_z62checkzd2bufferz12za2zz__intextz00
																																																					(BgL_bufferz00_6997,
																																																					BgL_ptrz00_6998,
																																																					BINT
																																																					(((long) 1)));
																																																				{	/* Unsafe/intext.scm 702 */
																																																					obj_t
																																																						BgL_stringz00_5694;
																																																					long
																																																						BgL_kz00_5695;
																																																					BgL_stringz00_5694
																																																						=
																																																						CELL_REF
																																																						(BgL_bufferz00_6997);
																																																					BgL_kz00_5695
																																																						=
																																																						(long)
																																																						CINT
																																																						(CELL_REF
																																																						(BgL_ptrz00_6998));
																																																					STRING_SET
																																																						(BgL_stringz00_5694,
																																																						BgL_kz00_5695,
																																																						((unsigned char) '-'));
																																																				}
																																																				{	/* Unsafe/intext.scm 703 */
																																																					obj_t
																																																						BgL_auxz00_7030;
																																																					BgL_auxz00_7030
																																																						=
																																																						ADDFX
																																																						(BINT
																																																						(((long) 1)), CELL_REF(BgL_ptrz00_6998));
																																																					CELL_SET
																																																						(BgL_ptrz00_6998,
																																																						BgL_auxz00_7030);
																																																				}
																																																				{	/* Unsafe/intext.scm 788 */
																																																					long
																																																						BgL_arg1688z00_5691;
																																																					BgL_arg1688z00_5691
																																																						=
																																																						NEG
																																																						(BgL_arg1889z00_2504);
																																																					return
																																																						BGl_z62printzd2wordzb0zz__intextz00
																																																						(BgL_ptrz00_6998,
																																																						BgL_bufferz00_6997,
																																																						BgL_arg1688z00_5691);
																																																				}
																																																			}
																																																		else
																																																			{	/* Unsafe/intext.scm 785 */
																																																				return
																																																					BGl_z62printzd2wordzb0zz__intextz00
																																																					(BgL_ptrz00_6998,
																																																					BgL_bufferz00_6997,
																																																					BgL_arg1889z00_2504);
																																																			}
																																																	}
																																																}
																																															else
																																																{	/* Unsafe/intext.scm 1068 */
																																																	if (INTEGERP(BgL_itemz00_2464))
																																																		{	/* Unsafe/intext.scm 1072 */
																																																			long
																																																				BgL_iz00_5702;
																																																			BgL_iz00_5702
																																																				=
																																																				(long)
																																																				CINT
																																																				(BgL_itemz00_2464);
																																																			if ((BgL_iz00_5702 < ((long) 0)))
																																																				{	/* Unsafe/intext.scm 785 */
																																																					BGl_z62checkzd2bufferz12za2zz__intextz00
																																																						(BgL_bufferz00_6997,
																																																						BgL_ptrz00_6998,
																																																						BINT
																																																						(((long) 1)));
																																																					{	/* Unsafe/intext.scm 702 */
																																																						obj_t
																																																							BgL_stringz00_5707;
																																																						long
																																																							BgL_kz00_5708;
																																																						BgL_stringz00_5707
																																																							=
																																																							CELL_REF
																																																							(BgL_bufferz00_6997);
																																																						BgL_kz00_5708
																																																							=
																																																							(long)
																																																							CINT
																																																							(CELL_REF
																																																							(BgL_ptrz00_6998));
																																																						STRING_SET
																																																							(BgL_stringz00_5707,
																																																							BgL_kz00_5708,
																																																							((unsigned char) '-'));
																																																					}
																																																					{	/* Unsafe/intext.scm 703 */
																																																						obj_t
																																																							BgL_auxz00_7031;
																																																						BgL_auxz00_7031
																																																							=
																																																							ADDFX
																																																							(BINT
																																																							(((long) 1)), CELL_REF(BgL_ptrz00_6998));
																																																						CELL_SET
																																																							(BgL_ptrz00_6998,
																																																							BgL_auxz00_7031);
																																																					}
																																																					{	/* Unsafe/intext.scm 788 */
																																																						long
																																																							BgL_arg1688z00_5704;
																																																						BgL_arg1688z00_5704
																																																							=
																																																							NEG
																																																							(BgL_iz00_5702);
																																																						return
																																																							BGl_z62printzd2wordzb0zz__intextz00
																																																							(BgL_ptrz00_6998,
																																																							BgL_bufferz00_6997,
																																																							BgL_arg1688z00_5704);
																																																					}
																																																				}
																																																			else
																																																				{	/* Unsafe/intext.scm 785 */
																																																					return
																																																						BGl_z62printzd2wordzb0zz__intextz00
																																																						(BgL_ptrz00_6998,
																																																						BgL_bufferz00_6997,
																																																						BgL_iz00_5702);
																																																				}
																																																		}
																																																	else
																																																		{	/* Unsafe/intext.scm 1071 */
																																																			if (REALP(BgL_itemz00_2464))
																																																				{	/* Unsafe/intext.scm 1073 */
																																																					BGl_z62checkzd2bufferz12za2zz__intextz00
																																																						(BgL_bufferz00_6997,
																																																						BgL_ptrz00_6998,
																																																						BINT
																																																						(((long) 1)));
																																																					{	/* Unsafe/intext.scm 702 */
																																																						obj_t
																																																							BgL_stringz00_5716;
																																																						long
																																																							BgL_kz00_5717;
																																																						BgL_stringz00_5716
																																																							=
																																																							CELL_REF
																																																							(BgL_bufferz00_6997);
																																																						BgL_kz00_5717
																																																							=
																																																							(long)
																																																							CINT
																																																							(CELL_REF
																																																							(BgL_ptrz00_6998));
																																																						STRING_SET
																																																							(BgL_stringz00_5716,
																																																							BgL_kz00_5717,
																																																							((unsigned char) 'f'));
																																																					}
																																																					{	/* Unsafe/intext.scm 703 */
																																																						obj_t
																																																							BgL_auxz00_7032;
																																																						BgL_auxz00_7032
																																																							=
																																																							ADDFX
																																																							(BINT
																																																							(((long) 1)), CELL_REF(BgL_ptrz00_6998));
																																																						CELL_SET
																																																							(BgL_ptrz00_6998,
																																																							BgL_auxz00_7032);
																																																					}
																																																					{	/* Unsafe/intext.scm 1075 */
																																																						obj_t
																																																							BgL_sz00_2507;
																																																						BgL_sz00_2507
																																																							=
																																																							bgl_real_to_string
																																																							(REAL_TO_DOUBLE
																																																							(BgL_itemz00_2464));
																																																						{	/* Unsafe/intext.scm 1076 */
																																																							long
																																																								BgL_arg1892z00_2508;
																																																							BgL_arg1892z00_2508
																																																								=
																																																								STRING_LENGTH
																																																								(BgL_sz00_2507);
																																																							BGl_z62printzd2wordzb0zz__intextz00
																																																								(BgL_ptrz00_6998,
																																																								BgL_bufferz00_6997,
																																																								BgL_arg1892z00_2508);
																																																							BGl_z62checkzd2bufferz12za2zz__intextz00
																																																								(BgL_bufferz00_6997,
																																																								BgL_ptrz00_6998,
																																																								BINT
																																																								(BgL_arg1892z00_2508));
																																																							{	/* Unsafe/intext.scm 709 */
																																																								obj_t
																																																									BgL_s2z00_5724;
																																																								long
																																																									BgL_o2z00_5725;
																																																								BgL_s2z00_5724
																																																									=
																																																									CELL_REF
																																																									(BgL_bufferz00_6997);
																																																								BgL_o2z00_5725
																																																									=
																																																									(long)
																																																									CINT
																																																									(CELL_REF
																																																									(BgL_ptrz00_6998));
																																																								blit_string
																																																									(BgL_sz00_2507,
																																																									((long) 0), BgL_s2z00_5724, BgL_o2z00_5725, BgL_arg1892z00_2508);
																																																							}
																																																							{	/* Unsafe/intext.scm 710 */
																																																								obj_t
																																																									BgL_auxz00_7033;
																																																								BgL_auxz00_7033
																																																									=
																																																									ADDFX
																																																									(CELL_REF
																																																									(BgL_ptrz00_6998),
																																																									BINT
																																																									(BgL_arg1892z00_2508));
																																																								return
																																																									CELL_SET
																																																									(BgL_ptrz00_6998,
																																																									BgL_auxz00_7033);
																																																							}
																																																						}
																																																					}
																																																				}
																																																			else
																																																				{	/* Unsafe/intext.scm 1073 */
																																																					if (UCS2_STRINGP(BgL_itemz00_2464))
																																																						{	/* Unsafe/intext.scm 1079 */
																																																							obj_t
																																																								BgL_zc3z04anonymousza31896ze3z87_6982;
																																																							{
																																																								int
																																																									BgL_tmpz00_9287;
																																																								BgL_tmpz00_9287
																																																									=
																																																									(int)
																																																									(
																																																									((long) 2));
																																																								BgL_zc3z04anonymousza31896ze3z87_6982
																																																									=
																																																									MAKE_L_PROCEDURE
																																																									(BGl_z62zc3z04anonymousza31896ze3ze5zz__intextz00,
																																																									BgL_tmpz00_9287);
																																																							}
																																																							PROCEDURE_L_SET
																																																								(BgL_zc3z04anonymousza31896ze3z87_6982,
																																																								(int)
																																																								(((long) 0)), ((obj_t) BgL_bufferz00_6997));
																																																							PROCEDURE_L_SET
																																																								(BgL_zc3z04anonymousza31896ze3z87_6982,
																																																								(int)
																																																								(((long) 1)), ((obj_t) BgL_ptrz00_6998));
																																																							{
																																																								obj_t
																																																									BgL_printerz00_9297;
																																																								obj_t
																																																									BgL_itemz00_9296;
																																																								BgL_itemz00_9296
																																																									=
																																																									BgL_itemz00_2464;
																																																								BgL_printerz00_9297
																																																									=
																																																									BgL_zc3z04anonymousza31896ze3z87_6982;
																																																								BgL_printerz00_2206
																																																									=
																																																									BgL_printerz00_9297;
																																																								BgL_itemz00_2205
																																																									=
																																																									BgL_itemz00_9296;
																																																								goto
																																																									BgL_zc3z04anonymousza31692ze3z87_2207;
																																																							}
																																																						}
																																																					else
																																																						{	/* Unsafe/intext.scm 1077 */
																																																							if (CELLP(BgL_itemz00_2464))
																																																								{
																																																									obj_t
																																																										BgL_printerz00_9301;
																																																									obj_t
																																																										BgL_itemz00_9300;
																																																									BgL_itemz00_9300
																																																										=
																																																										BgL_itemz00_2464;
																																																									BgL_printerz00_9301
																																																										=
																																																										BgL_printzd2cellzd2_7006;
																																																									BgL_printerz00_2206
																																																										=
																																																										BgL_printerz00_9301;
																																																									BgL_itemz00_2205
																																																										=
																																																										BgL_itemz00_9300;
																																																									goto
																																																										BgL_zc3z04anonymousza31692ze3z87_2207;
																																																								}
																																																							else
																																																								{	/* Unsafe/intext.scm 1080 */
																																																									if (BGL_WEAKPTRP(BgL_itemz00_2464))
																																																										{
																																																											obj_t
																																																												BgL_printerz00_9305;
																																																											obj_t
																																																												BgL_itemz00_9304;
																																																											BgL_itemz00_9304
																																																												=
																																																												BgL_itemz00_2464;
																																																											BgL_printerz00_9305
																																																												=
																																																												BgL_printzd2weakptrzd2_7005;
																																																											BgL_printerz00_2206
																																																												=
																																																												BgL_printerz00_9305;
																																																											BgL_itemz00_2205
																																																												=
																																																												BgL_itemz00_9304;
																																																											goto
																																																												BgL_zc3z04anonymousza31692ze3z87_2207;
																																																										}
																																																									else
																																																										{	/* Unsafe/intext.scm 1082 */
																																																											if (VECTORP(BgL_itemz00_2464))
																																																												{
																																																													obj_t
																																																														BgL_printerz00_9309;
																																																													obj_t
																																																														BgL_itemz00_9308;
																																																													BgL_itemz00_9308
																																																														=
																																																														BgL_itemz00_2464;
																																																													BgL_printerz00_9309
																																																														=
																																																														BgL_printzd2vectorzd2_7004;
																																																													BgL_printerz00_2206
																																																														=
																																																														BgL_printerz00_9309;
																																																													BgL_itemz00_2205
																																																														=
																																																														BgL_itemz00_9308;
																																																													goto
																																																														BgL_zc3z04anonymousza31692ze3z87_2207;
																																																												}
																																																											else
																																																												{	/* Unsafe/intext.scm 1084 */
																																																													if (BGL_HVECTORP(BgL_itemz00_2464))
																																																														{
																																																															obj_t
																																																																BgL_printerz00_9313;
																																																															obj_t
																																																																BgL_itemz00_9312;
																																																															BgL_itemz00_9312
																																																																=
																																																																BgL_itemz00_2464;
																																																															BgL_printerz00_9313
																																																																=
																																																																BgL_printzd2hvectorzd2_7003;
																																																															BgL_printerz00_2206
																																																																=
																																																																BgL_printerz00_9313;
																																																															BgL_itemz00_2205
																																																																=
																																																																BgL_itemz00_9312;
																																																															goto
																																																																BgL_zc3z04anonymousza31692ze3z87_2207;
																																																														}
																																																													else
																																																														{	/* Unsafe/intext.scm 1086 */
																																																															if (TVECTORP(BgL_itemz00_2464))
																																																																{
																																																																	obj_t
																																																																		BgL_printerz00_9317;
																																																																	obj_t
																																																																		BgL_itemz00_9316;
																																																																	BgL_itemz00_9316
																																																																		=
																																																																		BgL_itemz00_2464;
																																																																	BgL_printerz00_9317
																																																																		=
																																																																		BgL_printzd2tvectorzd2_7002;
																																																																	BgL_printerz00_2206
																																																																		=
																																																																		BgL_printerz00_9317;
																																																																	BgL_itemz00_2205
																																																																		=
																																																																		BgL_itemz00_9316;
																																																																	goto
																																																																		BgL_zc3z04anonymousza31692ze3z87_2207;
																																																																}
																																																															else
																																																																{	/* Unsafe/intext.scm 1088 */
																																																																	if (ELONGP(BgL_itemz00_2464))
																																																																		{	/* Unsafe/intext.scm 1090 */
																																																																			BGl_z62checkzd2bufferz12za2zz__intextz00
																																																																				(BgL_bufferz00_6997,
																																																																				BgL_ptrz00_6998,
																																																																				BINT
																																																																				(((long) 1)));
																																																																			{	/* Unsafe/intext.scm 702 */
																																																																				obj_t
																																																																					BgL_stringz00_5745;
																																																																				long
																																																																					BgL_kz00_5746;
																																																																				BgL_stringz00_5745
																																																																					=
																																																																					CELL_REF
																																																																					(BgL_bufferz00_6997);
																																																																				BgL_kz00_5746
																																																																					=
																																																																					(long)
																																																																					CINT
																																																																					(CELL_REF
																																																																					(BgL_ptrz00_6998));
																																																																				STRING_SET
																																																																					(BgL_stringz00_5745,
																																																																					BgL_kz00_5746,
																																																																					((unsigned char) 'E'));
																																																																			}
																																																																			{	/* Unsafe/intext.scm 703 */
																																																																				obj_t
																																																																					BgL_auxz00_7034;
																																																																				BgL_auxz00_7034
																																																																					=
																																																																					ADDFX
																																																																					(BINT
																																																																					(((long) 1)), CELL_REF(BgL_ptrz00_6998));
																																																																				CELL_SET
																																																																					(BgL_ptrz00_6998,
																																																																					BgL_auxz00_7034);
																																																																			}
																																																																			{	/* Unsafe/intext.scm 1092 */
																																																																				obj_t
																																																																					BgL_sz00_2522;
																																																																				BgL_sz00_2522
																																																																					=
																																																																					BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																																																																					(BELONG_TO_LONG
																																																																					(BgL_itemz00_2464),
																																																																					BNIL);
																																																																				{	/* Unsafe/intext.scm 1093 */
																																																																					long
																																																																						BgL_arg1904z00_2523;
																																																																					BgL_arg1904z00_2523
																																																																						=
																																																																						STRING_LENGTH
																																																																						(BgL_sz00_2522);
																																																																					BGl_z62printzd2wordzb0zz__intextz00
																																																																						(BgL_ptrz00_6998,
																																																																						BgL_bufferz00_6997,
																																																																						BgL_arg1904z00_2523);
																																																																					BGl_z62checkzd2bufferz12za2zz__intextz00
																																																																						(BgL_bufferz00_6997,
																																																																						BgL_ptrz00_6998,
																																																																						BINT
																																																																						(BgL_arg1904z00_2523));
																																																																					{	/* Unsafe/intext.scm 709 */
																																																																						obj_t
																																																																							BgL_s2z00_5753;
																																																																						long
																																																																							BgL_o2z00_5754;
																																																																						BgL_s2z00_5753
																																																																							=
																																																																							CELL_REF
																																																																							(BgL_bufferz00_6997);
																																																																						BgL_o2z00_5754
																																																																							=
																																																																							(long)
																																																																							CINT
																																																																							(CELL_REF
																																																																							(BgL_ptrz00_6998));
																																																																						blit_string
																																																																							(BgL_sz00_2522,
																																																																							((long) 0), BgL_s2z00_5753, BgL_o2z00_5754, BgL_arg1904z00_2523);
																																																																					}
																																																																					{	/* Unsafe/intext.scm 710 */
																																																																						obj_t
																																																																							BgL_auxz00_7035;
																																																																						BgL_auxz00_7035
																																																																							=
																																																																							ADDFX
																																																																							(CELL_REF
																																																																							(BgL_ptrz00_6998),
																																																																							BINT
																																																																							(BgL_arg1904z00_2523));
																																																																						return
																																																																							CELL_SET
																																																																							(BgL_ptrz00_6998,
																																																																							BgL_auxz00_7035);
																																																																					}
																																																																				}
																																																																			}
																																																																		}
																																																																	else
																																																																		{	/* Unsafe/intext.scm 1090 */
																																																																			if (LLONGP(BgL_itemz00_2464))
																																																																				{	/* Unsafe/intext.scm 1094 */
																																																																					BGl_z62checkzd2bufferz12za2zz__intextz00
																																																																						(BgL_bufferz00_6997,
																																																																						BgL_ptrz00_6998,
																																																																						BINT
																																																																						(((long) 1)));
																																																																					{	/* Unsafe/intext.scm 702 */
																																																																						obj_t
																																																																							BgL_stringz00_5760;
																																																																						long
																																																																							BgL_kz00_5761;
																																																																						BgL_stringz00_5760
																																																																							=
																																																																							CELL_REF
																																																																							(BgL_bufferz00_6997);
																																																																						BgL_kz00_5761
																																																																							=
																																																																							(long)
																																																																							CINT
																																																																							(CELL_REF
																																																																							(BgL_ptrz00_6998));
																																																																						STRING_SET
																																																																							(BgL_stringz00_5760,
																																																																							BgL_kz00_5761,
																																																																							((unsigned char) 'L'));
																																																																					}
																																																																					{	/* Unsafe/intext.scm 703 */
																																																																						obj_t
																																																																							BgL_auxz00_7036;
																																																																						BgL_auxz00_7036
																																																																							=
																																																																							ADDFX
																																																																							(BINT
																																																																							(((long) 1)), CELL_REF(BgL_ptrz00_6998));
																																																																						CELL_SET
																																																																							(BgL_ptrz00_6998,
																																																																							BgL_auxz00_7036);
																																																																					}
																																																																					{	/* Unsafe/intext.scm 1096 */
																																																																						obj_t
																																																																							BgL_sz00_2526;
																																																																						BgL_sz00_2526
																																																																							=
																																																																							BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																																																																							(BLLONG_TO_LLONG
																																																																							(BgL_itemz00_2464),
																																																																							BNIL);
																																																																						{	/* Unsafe/intext.scm 1097 */
																																																																							long
																																																																								BgL_arg1907z00_2527;
																																																																							BgL_arg1907z00_2527
																																																																								=
																																																																								STRING_LENGTH
																																																																								(BgL_sz00_2526);
																																																																							BGl_z62printzd2wordzb0zz__intextz00
																																																																								(BgL_ptrz00_6998,
																																																																								BgL_bufferz00_6997,
																																																																								BgL_arg1907z00_2527);
																																																																							BGl_z62checkzd2bufferz12za2zz__intextz00
																																																																								(BgL_bufferz00_6997,
																																																																								BgL_ptrz00_6998,
																																																																								BINT
																																																																								(BgL_arg1907z00_2527));
																																																																							{	/* Unsafe/intext.scm 709 */
																																																																								obj_t
																																																																									BgL_s2z00_5768;
																																																																								long
																																																																									BgL_o2z00_5769;
																																																																								BgL_s2z00_5768
																																																																									=
																																																																									CELL_REF
																																																																									(BgL_bufferz00_6997);
																																																																								BgL_o2z00_5769
																																																																									=
																																																																									(long)
																																																																									CINT
																																																																									(CELL_REF
																																																																									(BgL_ptrz00_6998));
																																																																								blit_string
																																																																									(BgL_sz00_2526,
																																																																									((long) 0), BgL_s2z00_5768, BgL_o2z00_5769, BgL_arg1907z00_2527);
																																																																							}
																																																																							{	/* Unsafe/intext.scm 710 */
																																																																								obj_t
																																																																									BgL_auxz00_7037;
																																																																								BgL_auxz00_7037
																																																																									=
																																																																									ADDFX
																																																																									(CELL_REF
																																																																									(BgL_ptrz00_6998),
																																																																									BINT
																																																																									(BgL_arg1907z00_2527));
																																																																								return
																																																																									CELL_SET
																																																																									(BgL_ptrz00_6998,
																																																																									BgL_auxz00_7037);
																																																																							}
																																																																						}
																																																																					}
																																																																				}
																																																																			else
																																																																				{	/* Unsafe/intext.scm 1094 */
																																																																					if (BGL_DATEP(BgL_itemz00_2464))
																																																																						{	/* Unsafe/intext.scm 1098 */
																																																																							BGl_z62checkzd2bufferz12za2zz__intextz00
																																																																								(BgL_bufferz00_6997,
																																																																								BgL_ptrz00_6998,
																																																																								BINT
																																																																								(((long) 1)));
																																																																							{	/* Unsafe/intext.scm 702 */
																																																																								obj_t
																																																																									BgL_stringz00_5775;
																																																																								long
																																																																									BgL_kz00_5776;
																																																																								BgL_stringz00_5775
																																																																									=
																																																																									CELL_REF
																																																																									(BgL_bufferz00_6997);
																																																																								BgL_kz00_5776
																																																																									=
																																																																									(long)
																																																																									CINT
																																																																									(CELL_REF
																																																																									(BgL_ptrz00_6998));
																																																																								STRING_SET
																																																																									(BgL_stringz00_5775,
																																																																									BgL_kz00_5776,
																																																																									((unsigned char) 'D'));
																																																																							}
																																																																							{	/* Unsafe/intext.scm 703 */
																																																																								obj_t
																																																																									BgL_auxz00_7038;
																																																																								BgL_auxz00_7038
																																																																									=
																																																																									ADDFX
																																																																									(BINT
																																																																									(((long) 1)), CELL_REF(BgL_ptrz00_6998));
																																																																								CELL_SET
																																																																									(BgL_ptrz00_6998,
																																																																									BgL_auxz00_7038);
																																																																							}
																																																																							{	/* Unsafe/intext.scm 1100 */
																																																																								obj_t
																																																																									BgL_sz00_2530;
																																																																								BgL_sz00_2530
																																																																									=
																																																																									BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																																																																									(bgl_date_to_nanoseconds
																																																																									(BgL_itemz00_2464),
																																																																									BNIL);
																																																																								{	/* Unsafe/intext.scm 1101 */
																																																																									long
																																																																										BgL_arg1910z00_2531;
																																																																									BgL_arg1910z00_2531
																																																																										=
																																																																										STRING_LENGTH
																																																																										(BgL_sz00_2530);
																																																																									BGl_z62printzd2wordzb0zz__intextz00
																																																																										(BgL_ptrz00_6998,
																																																																										BgL_bufferz00_6997,
																																																																										BgL_arg1910z00_2531);
																																																																									BGl_z62checkzd2bufferz12za2zz__intextz00
																																																																										(BgL_bufferz00_6997,
																																																																										BgL_ptrz00_6998,
																																																																										BINT
																																																																										(BgL_arg1910z00_2531));
																																																																									{	/* Unsafe/intext.scm 709 */
																																																																										obj_t
																																																																											BgL_s2z00_5785;
																																																																										long
																																																																											BgL_o2z00_5786;
																																																																										BgL_s2z00_5785
																																																																											=
																																																																											CELL_REF
																																																																											(BgL_bufferz00_6997);
																																																																										BgL_o2z00_5786
																																																																											=
																																																																											(long)
																																																																											CINT
																																																																											(CELL_REF
																																																																											(BgL_ptrz00_6998));
																																																																										blit_string
																																																																											(BgL_sz00_2530,
																																																																											((long) 0), BgL_s2z00_5785, BgL_o2z00_5786, BgL_arg1910z00_2531);
																																																																									}
																																																																									{	/* Unsafe/intext.scm 710 */
																																																																										obj_t
																																																																											BgL_auxz00_7039;
																																																																										BgL_auxz00_7039
																																																																											=
																																																																											ADDFX
																																																																											(CELL_REF
																																																																											(BgL_ptrz00_6998),
																																																																											BINT
																																																																											(BgL_arg1910z00_2531));
																																																																										return
																																																																											CELL_SET
																																																																											(BgL_ptrz00_6998,
																																																																											BgL_auxz00_7039);
																																																																									}
																																																																								}
																																																																							}
																																																																						}
																																																																					else
																																																																						{	/* Unsafe/intext.scm 1098 */
																																																																							if (BIGNUMP(BgL_itemz00_2464))
																																																																								{	/* Unsafe/intext.scm 1102 */
																																																																									BGl_z62checkzd2bufferz12za2zz__intextz00
																																																																										(BgL_bufferz00_6997,
																																																																										BgL_ptrz00_6998,
																																																																										BINT
																																																																										(((long) 1)));
																																																																									{	/* Unsafe/intext.scm 702 */
																																																																										obj_t
																																																																											BgL_stringz00_5792;
																																																																										long
																																																																											BgL_kz00_5793;
																																																																										BgL_stringz00_5792
																																																																											=
																																																																											CELL_REF
																																																																											(BgL_bufferz00_6997);
																																																																										BgL_kz00_5793
																																																																											=
																																																																											(long)
																																																																											CINT
																																																																											(CELL_REF
																																																																											(BgL_ptrz00_6998));
																																																																										STRING_SET
																																																																											(BgL_stringz00_5792,
																																																																											BgL_kz00_5793,
																																																																											((unsigned char) 'z'));
																																																																									}
																																																																									{	/* Unsafe/intext.scm 703 */
																																																																										obj_t
																																																																											BgL_auxz00_7040;
																																																																										BgL_auxz00_7040
																																																																											=
																																																																											ADDFX
																																																																											(BINT
																																																																											(((long) 1)), CELL_REF(BgL_ptrz00_6998));
																																																																										CELL_SET
																																																																											(BgL_ptrz00_6998,
																																																																											BgL_auxz00_7040);
																																																																									}
																																																																									{	/* Unsafe/intext.scm 1104 */
																																																																										obj_t
																																																																											BgL_sz00_2535;
																																																																										{	/* Ieee/fixnum.scm 988 */

																																																																											BgL_sz00_2535
																																																																												=
																																																																												BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																																																																												(BgL_itemz00_2464,
																																																																												((long) 10));
																																																																										}
																																																																										{	/* Unsafe/intext.scm 1105 */
																																																																											long
																																																																												BgL_arg1914z00_2536;
																																																																											BgL_arg1914z00_2536
																																																																												=
																																																																												STRING_LENGTH
																																																																												(BgL_sz00_2535);
																																																																											BGl_z62printzd2wordzb0zz__intextz00
																																																																												(BgL_ptrz00_6998,
																																																																												BgL_bufferz00_6997,
																																																																												BgL_arg1914z00_2536);
																																																																											BGl_z62checkzd2bufferz12za2zz__intextz00
																																																																												(BgL_bufferz00_6997,
																																																																												BgL_ptrz00_6998,
																																																																												BINT
																																																																												(BgL_arg1914z00_2536));
																																																																											{	/* Unsafe/intext.scm 709 */
																																																																												obj_t
																																																																													BgL_s2z00_5800;
																																																																												long
																																																																													BgL_o2z00_5801;
																																																																												BgL_s2z00_5800
																																																																													=
																																																																													CELL_REF
																																																																													(BgL_bufferz00_6997);
																																																																												BgL_o2z00_5801
																																																																													=
																																																																													(long)
																																																																													CINT
																																																																													(CELL_REF
																																																																													(BgL_ptrz00_6998));
																																																																												blit_string
																																																																													(BgL_sz00_2535,
																																																																													((long) 0), BgL_s2z00_5800, BgL_o2z00_5801, BgL_arg1914z00_2536);
																																																																											}
																																																																											{	/* Unsafe/intext.scm 710 */
																																																																												obj_t
																																																																													BgL_auxz00_7041;
																																																																												BgL_auxz00_7041
																																																																													=
																																																																													ADDFX
																																																																													(CELL_REF
																																																																													(BgL_ptrz00_6998),
																																																																													BINT
																																																																													(BgL_arg1914z00_2536));
																																																																												return
																																																																													CELL_SET
																																																																													(BgL_ptrz00_6998,
																																																																													BgL_auxz00_7041);
																																																																											}
																																																																										}
																																																																									}
																																																																								}
																																																																							else
																																																																								{	/* Unsafe/intext.scm 1102 */
																																																																									if (CUSTOMP(BgL_itemz00_2464))
																																																																										{
																																																																											obj_t
																																																																												BgL_printerz00_9392;
																																																																											obj_t
																																																																												BgL_itemz00_9391;
																																																																											BgL_itemz00_9391
																																																																												=
																																																																												BgL_itemz00_2464;
																																																																											BgL_printerz00_9392
																																																																												=
																																																																												BgL_printzd2customzd2_7001;
																																																																											BgL_printerz00_2206
																																																																												=
																																																																												BgL_printerz00_9392;
																																																																											BgL_itemz00_2205
																																																																												=
																																																																												BgL_itemz00_9391;
																																																																											goto
																																																																												BgL_zc3z04anonymousza31692ze3z87_2207;
																																																																										}
																																																																									else
																																																																										{	/* Unsafe/intext.scm 1106 */
																																																																											if (PROCEDUREP(BgL_itemz00_2464))
																																																																												{	/* Unsafe/intext.scm 1109 */
																																																																													obj_t
																																																																														BgL_zc3z04anonymousza31919ze3z87_6973;
																																																																													{
																																																																														int
																																																																															BgL_tmpz00_9395;
																																																																														BgL_tmpz00_9395
																																																																															=
																																																																															(int)
																																																																															(
																																																																															((long) 14));
																																																																														BgL_zc3z04anonymousza31919ze3z87_6973
																																																																															=
																																																																															MAKE_L_PROCEDURE
																																																																															(BGl_z62zc3z04anonymousza31919ze3ze5zz__intextz00,
																																																																															BgL_tmpz00_9395);
																																																																													}
																																																																													PROCEDURE_L_SET
																																																																														(BgL_zc3z04anonymousza31919ze3z87_6973,
																																																																														(int)
																																																																														(((long) 0)), BgL_tablez00_6999);
																																																																													PROCEDURE_L_SET
																																																																														(BgL_zc3z04anonymousza31919ze3z87_6973,
																																																																														(int)
																																																																														(((long) 1)), ((obj_t) BgL_refz00_7000));
																																																																													PROCEDURE_L_SET
																																																																														(BgL_zc3z04anonymousza31919ze3z87_6973,
																																																																														(int)
																																																																														(((long) 2)), BgL_printzd2customzd2_7001);
																																																																													PROCEDURE_L_SET
																																																																														(BgL_zc3z04anonymousza31919ze3z87_6973,
																																																																														(int)
																																																																														(((long) 3)), BgL_printzd2tvectorzd2_7002);
																																																																													PROCEDURE_L_SET
																																																																														(BgL_zc3z04anonymousza31919ze3z87_6973,
																																																																														(int)
																																																																														(((long) 4)), BgL_printzd2hvectorzd2_7003);
																																																																													PROCEDURE_L_SET
																																																																														(BgL_zc3z04anonymousza31919ze3z87_6973,
																																																																														(int)
																																																																														(((long) 5)), BgL_printzd2vectorzd2_7004);
																																																																													PROCEDURE_L_SET
																																																																														(BgL_zc3z04anonymousza31919ze3z87_6973,
																																																																														(int)
																																																																														(((long) 6)), BgL_printzd2weakptrzd2_7005);
																																																																													PROCEDURE_L_SET
																																																																														(BgL_zc3z04anonymousza31919ze3z87_6973,
																																																																														(int)
																																																																														(((long) 7)), BgL_printzd2cellzd2_7006);
																																																																													PROCEDURE_L_SET
																																																																														(BgL_zc3z04anonymousza31919ze3z87_6973,
																																																																														(int)
																																																																														(((long) 8)), BgL_printzd2classzd2_7007);
																																																																													PROCEDURE_L_SET
																																																																														(BgL_zc3z04anonymousza31919ze3z87_6973,
																																																																														(int)
																																																																														(((long) 9)), BgL_printzd2objectzd2_7008);
																																																																													PROCEDURE_L_SET
																																																																														(BgL_zc3z04anonymousza31919ze3z87_6973,
																																																																														(int)
																																																																														(((long) 10)), BgL_printzd2pairzd2_7009);
																																																																													PROCEDURE_L_SET
																																																																														(BgL_zc3z04anonymousza31919ze3z87_6973,
																																																																														(int)
																																																																														(((long) 11)), BgL_printzd2epairzd2_7010);
																																																																													PROCEDURE_L_SET
																																																																														(BgL_zc3z04anonymousza31919ze3z87_6973,
																																																																														(int)
																																																																														(((long) 12)), ((obj_t) BgL_bufferz00_6997));
																																																																													PROCEDURE_L_SET
																																																																														(BgL_zc3z04anonymousza31919ze3z87_6973,
																																																																														(int)
																																																																														(((long) 13)), ((obj_t) BgL_ptrz00_6998));
																																																																													{
																																																																														obj_t
																																																																															BgL_printerz00_9430;
																																																																														obj_t
																																																																															BgL_itemz00_9429;
																																																																														BgL_itemz00_9429
																																																																															=
																																																																															BgL_itemz00_2464;
																																																																														BgL_printerz00_9430
																																																																															=
																																																																															BgL_zc3z04anonymousza31919ze3z87_6973;
																																																																														BgL_printerz00_2206
																																																																															=
																																																																															BgL_printerz00_9430;
																																																																														BgL_itemz00_2205
																																																																															=
																																																																															BgL_itemz00_9429;
																																																																														goto
																																																																															BgL_zc3z04anonymousza31692ze3z87_2207;
																																																																													}
																																																																												}
																																																																											else
																																																																												{	/* Unsafe/intext.scm 1108 */
																																																																													if (PROCESSP(BgL_itemz00_2464))
																																																																														{	/* Unsafe/intext.scm 1111 */
																																																																															obj_t
																																																																																BgL_zc3z04anonymousza31922ze3z87_6972;
																																																																															{
																																																																																int
																																																																																	BgL_tmpz00_9433;
																																																																																BgL_tmpz00_9433
																																																																																	=
																																																																																	(int)
																																																																																	(
																																																																																	((long) 14));
																																																																																BgL_zc3z04anonymousza31922ze3z87_6972
																																																																																	=
																																																																																	MAKE_L_PROCEDURE
																																																																																	(BGl_z62zc3z04anonymousza31922ze3ze5zz__intextz00,
																																																																																	BgL_tmpz00_9433);
																																																																															}
																																																																															PROCEDURE_L_SET
																																																																																(BgL_zc3z04anonymousza31922ze3z87_6972,
																																																																																(int)
																																																																																(((long) 0)), BgL_tablez00_6999);
																																																																															PROCEDURE_L_SET
																																																																																(BgL_zc3z04anonymousza31922ze3z87_6972,
																																																																																(int)
																																																																																(((long) 1)), ((obj_t) BgL_refz00_7000));
																																																																															PROCEDURE_L_SET
																																																																																(BgL_zc3z04anonymousza31922ze3z87_6972,
																																																																																(int)
																																																																																(((long) 2)), BgL_printzd2customzd2_7001);
																																																																															PROCEDURE_L_SET
																																																																																(BgL_zc3z04anonymousza31922ze3z87_6972,
																																																																																(int)
																																																																																(((long) 3)), BgL_printzd2tvectorzd2_7002);
																																																																															PROCEDURE_L_SET
																																																																																(BgL_zc3z04anonymousza31922ze3z87_6972,
																																																																																(int)
																																																																																(((long) 4)), BgL_printzd2hvectorzd2_7003);
																																																																															PROCEDURE_L_SET
																																																																																(BgL_zc3z04anonymousza31922ze3z87_6972,
																																																																																(int)
																																																																																(((long) 5)), BgL_printzd2vectorzd2_7004);
																																																																															PROCEDURE_L_SET
																																																																																(BgL_zc3z04anonymousza31922ze3z87_6972,
																																																																																(int)
																																																																																(((long) 6)), BgL_printzd2weakptrzd2_7005);
																																																																															PROCEDURE_L_SET
																																																																																(BgL_zc3z04anonymousza31922ze3z87_6972,
																																																																																(int)
																																																																																(((long) 7)), BgL_printzd2cellzd2_7006);
																																																																															PROCEDURE_L_SET
																																																																																(BgL_zc3z04anonymousza31922ze3z87_6972,
																																																																																(int)
																																																																																(((long) 8)), BgL_printzd2classzd2_7007);
																																																																															PROCEDURE_L_SET
																																																																																(BgL_zc3z04anonymousza31922ze3z87_6972,
																																																																																(int)
																																																																																(((long) 9)), BgL_printzd2objectzd2_7008);
																																																																															PROCEDURE_L_SET
																																																																																(BgL_zc3z04anonymousza31922ze3z87_6972,
																																																																																(int)
																																																																																(((long) 10)), BgL_printzd2pairzd2_7009);
																																																																															PROCEDURE_L_SET
																																																																																(BgL_zc3z04anonymousza31922ze3z87_6972,
																																																																																(int)
																																																																																(((long) 11)), BgL_printzd2epairzd2_7010);
																																																																															PROCEDURE_L_SET
																																																																																(BgL_zc3z04anonymousza31922ze3z87_6972,
																																																																																(int)
																																																																																(((long) 12)), ((obj_t) BgL_bufferz00_6997));
																																																																															PROCEDURE_L_SET
																																																																																(BgL_zc3z04anonymousza31922ze3z87_6972,
																																																																																(int)
																																																																																(((long) 13)), ((obj_t) BgL_ptrz00_6998));
																																																																															{
																																																																																obj_t
																																																																																	BgL_printerz00_9468;
																																																																																obj_t
																																																																																	BgL_itemz00_9467;
																																																																																BgL_itemz00_9467
																																																																																	=
																																																																																	BgL_itemz00_2464;
																																																																																BgL_printerz00_9468
																																																																																	=
																																																																																	BgL_zc3z04anonymousza31922ze3z87_6972;
																																																																																BgL_printerz00_2206
																																																																																	=
																																																																																	BgL_printerz00_9468;
																																																																																BgL_itemz00_2205
																																																																																	=
																																																																																	BgL_itemz00_9467;
																																																																																goto
																																																																																	BgL_zc3z04anonymousza31692ze3z87_2207;
																																																																															}
																																																																														}
																																																																													else
																																																																														{	/* Unsafe/intext.scm 1110 */
																																																																															if (OPAQUEP(BgL_itemz00_2464))
																																																																																{	/* Unsafe/intext.scm 1113 */
																																																																																	obj_t
																																																																																		BgL_zc3z04anonymousza31925ze3z87_6971;
																																																																																	{
																																																																																		int
																																																																																			BgL_tmpz00_9471;
																																																																																		BgL_tmpz00_9471
																																																																																			=
																																																																																			(int)
																																																																																			(
																																																																																			((long) 14));
																																																																																		BgL_zc3z04anonymousza31925ze3z87_6971
																																																																																			=
																																																																																			MAKE_L_PROCEDURE
																																																																																			(BGl_z62zc3z04anonymousza31925ze3ze5zz__intextz00,
																																																																																			BgL_tmpz00_9471);
																																																																																	}
																																																																																	PROCEDURE_L_SET
																																																																																		(BgL_zc3z04anonymousza31925ze3z87_6971,
																																																																																		(int)
																																																																																		(((long) 0)), BgL_tablez00_6999);
																																																																																	PROCEDURE_L_SET
																																																																																		(BgL_zc3z04anonymousza31925ze3z87_6971,
																																																																																		(int)
																																																																																		(((long) 1)), ((obj_t) BgL_refz00_7000));
																																																																																	PROCEDURE_L_SET
																																																																																		(BgL_zc3z04anonymousza31925ze3z87_6971,
																																																																																		(int)
																																																																																		(((long) 2)), BgL_printzd2customzd2_7001);
																																																																																	PROCEDURE_L_SET
																																																																																		(BgL_zc3z04anonymousza31925ze3z87_6971,
																																																																																		(int)
																																																																																		(((long) 3)), BgL_printzd2tvectorzd2_7002);
																																																																																	PROCEDURE_L_SET
																																																																																		(BgL_zc3z04anonymousza31925ze3z87_6971,
																																																																																		(int)
																																																																																		(((long) 4)), BgL_printzd2hvectorzd2_7003);
																																																																																	PROCEDURE_L_SET
																																																																																		(BgL_zc3z04anonymousza31925ze3z87_6971,
																																																																																		(int)
																																																																																		(((long) 5)), BgL_printzd2vectorzd2_7004);
																																																																																	PROCEDURE_L_SET
																																																																																		(BgL_zc3z04anonymousza31925ze3z87_6971,
																																																																																		(int)
																																																																																		(((long) 6)), BgL_printzd2weakptrzd2_7005);
																																																																																	PROCEDURE_L_SET
																																																																																		(BgL_zc3z04anonymousza31925ze3z87_6971,
																																																																																		(int)
																																																																																		(((long) 7)), BgL_printzd2cellzd2_7006);
																																																																																	PROCEDURE_L_SET
																																																																																		(BgL_zc3z04anonymousza31925ze3z87_6971,
																																																																																		(int)
																																																																																		(((long) 8)), BgL_printzd2classzd2_7007);
																																																																																	PROCEDURE_L_SET
																																																																																		(BgL_zc3z04anonymousza31925ze3z87_6971,
																																																																																		(int)
																																																																																		(((long) 9)), BgL_printzd2objectzd2_7008);
																																																																																	PROCEDURE_L_SET
																																																																																		(BgL_zc3z04anonymousza31925ze3z87_6971,
																																																																																		(int)
																																																																																		(((long) 10)), BgL_printzd2pairzd2_7009);
																																																																																	PROCEDURE_L_SET
																																																																																		(BgL_zc3z04anonymousza31925ze3z87_6971,
																																																																																		(int)
																																																																																		(((long) 11)), BgL_printzd2epairzd2_7010);
																																																																																	PROCEDURE_L_SET
																																																																																		(BgL_zc3z04anonymousza31925ze3z87_6971,
																																																																																		(int)
																																																																																		(((long) 12)), ((obj_t) BgL_bufferz00_6997));
																																																																																	PROCEDURE_L_SET
																																																																																		(BgL_zc3z04anonymousza31925ze3z87_6971,
																																																																																		(int)
																																																																																		(((long) 13)), ((obj_t) BgL_ptrz00_6998));
																																																																																	{
																																																																																		obj_t
																																																																																			BgL_printerz00_9506;
																																																																																		obj_t
																																																																																			BgL_itemz00_9505;
																																																																																		BgL_itemz00_9505
																																																																																			=
																																																																																			BgL_itemz00_2464;
																																																																																		BgL_printerz00_9506
																																																																																			=
																																																																																			BgL_zc3z04anonymousza31925ze3z87_6971;
																																																																																		BgL_printerz00_2206
																																																																																			=
																																																																																			BgL_printerz00_9506;
																																																																																		BgL_itemz00_2205
																																																																																			=
																																																																																			BgL_itemz00_9505;
																																																																																		goto
																																																																																			BgL_zc3z04anonymousza31692ze3z87_2207;
																																																																																	}
																																																																																}
																																																																															else
																																																																																{	/* Unsafe/intext.scm 1114 */
																																																																																	bool_t
																																																																																		BgL_test3604z00_9507;
																																																																																	if (STRUCTP(BgL_itemz00_2464))
																																																																																		{	/* Unsafe/intext.scm 129 */
																																																																																			BgL_test3604z00_9507
																																																																																				=
																																																																																				(STRUCT_KEY
																																																																																				(BgL_itemz00_2464)
																																																																																				==
																																																																																				BGl_symbol3349z00zz__intextz00);
																																																																																		}
																																																																																	else
																																																																																		{	/* Unsafe/intext.scm 129 */
																																																																																			BgL_test3604z00_9507
																																																																																				=
																																																																																				(
																																																																																				(bool_t)
																																																																																				0);
																																																																																		}
																																																																																	if (BgL_test3604z00_9507)
																																																																																		{	/* Unsafe/intext.scm 1114 */
																																																																																			BGl_z62checkzd2bufferz12za2zz__intextz00
																																																																																				(BgL_bufferz00_6997,
																																																																																				BgL_ptrz00_6998,
																																																																																				BINT
																																																																																				(((long) 1)));
																																																																																			{	/* Unsafe/intext.scm 702 */
																																																																																				obj_t
																																																																																					BgL_stringz00_5836;
																																																																																				long
																																																																																					BgL_kz00_5837;
																																																																																				BgL_stringz00_5836
																																																																																					=
																																																																																					CELL_REF
																																																																																					(BgL_bufferz00_6997);
																																																																																				BgL_kz00_5837
																																																																																					=
																																																																																					(long)
																																																																																					CINT
																																																																																					(CELL_REF
																																																																																					(BgL_ptrz00_6998));
																																																																																				STRING_SET
																																																																																					(BgL_stringz00_5836,
																																																																																					BgL_kz00_5837,
																																																																																					((unsigned char) '"'));
																																																																																			}
																																																																																			{	/* Unsafe/intext.scm 703 */
																																																																																				obj_t
																																																																																					BgL_auxz00_7042;
																																																																																				BgL_auxz00_7042
																																																																																					=
																																																																																					ADDFX
																																																																																					(BINT
																																																																																					(((long) 1)), CELL_REF(BgL_ptrz00_6998));
																																																																																				CELL_SET
																																																																																					(BgL_ptrz00_6998,
																																																																																					BgL_auxz00_7042);
																																																																																			}
																																																																																			BgL_itemz00_2114
																																																																																				=
																																																																																				BgL_itemz00_2464;
																																																																																			{	/* Unsafe/intext.scm 714 */
																																																																																				obj_t
																																																																																					BgL_sz00_2116;
																																																																																				obj_t
																																																																																					BgL_offsetz00_2117;
																																																																																				obj_t
																																																																																					BgL_siza7eza7_2118;
																																																																																				BgL_sz00_2116
																																																																																					=
																																																																																					STRUCT_REF
																																																																																					(BgL_itemz00_2114,
																																																																																					(int)
																																																																																					(((long) 0)));
																																																																																				BgL_offsetz00_2117
																																																																																					=
																																																																																					STRUCT_REF
																																																																																					(BgL_itemz00_2114,
																																																																																					(int)
																																																																																					(((long) 1)));
																																																																																				BgL_siza7eza7_2118
																																																																																					=
																																																																																					STRUCT_REF
																																																																																					(BgL_itemz00_2114,
																																																																																					(int)
																																																																																					(((long) 2)));
																																																																																				{	/* Unsafe/intext.scm 776 */
																																																																																					long
																																																																																						BgL_siza7eza7_4255;
																																																																																					BgL_siza7eza7_4255
																																																																																						=
																																																																																						BGl_siza7ezd2ofzd2wordza7zz__intextz00
																																																																																						(
																																																																																						(long)
																																																																																						CINT
																																																																																						(BgL_siza7eza7_2118));
																																																																																					if ((BgL_siza7eza7_4255 == ((long) 0)))
																																																																																						{	/* Unsafe/intext.scm 731 */
																																																																																							unsigned
																																																																																								char
																																																																																								BgL_arg1632z00_4259;
																																																																																							BgL_arg1632z00_4259
																																																																																								=
																																																																																								(
																																																																																								((long) 0));
																																																																																							BGl_z62z12printzd2markupza2zz__intextz00
																																																																																								(BgL_ptrz00_6998,
																																																																																								BgL_bufferz00_6997,
																																																																																								BgL_arg1632z00_4259);
																																																																																						}
																																																																																					else
																																																																																						{	/* Unsafe/intext.scm 777 */
																																																																																							{	/* Unsafe/intext.scm 731 */
																																																																																								unsigned
																																																																																									char
																																																																																									BgL_arg1632z00_4261;
																																																																																								BgL_arg1632z00_4261
																																																																																									=
																																																																																									(BgL_siza7eza7_4255);
																																																																																								BGl_z62z12printzd2markupza2zz__intextz00
																																																																																									(BgL_ptrz00_6998,
																																																																																									BgL_bufferz00_6997,
																																																																																									BgL_arg1632z00_4261);
																																																																																							}
																																																																																							BBOOL
																																																																																								(BGl_z62printzd2wordzf2siza7eze5zz__intextz00
																																																																																								(BgL_ptrz00_6998,
																																																																																									BgL_bufferz00_6997,
																																																																																									BgL_siza7eza7_2118,
																																																																																									BgL_siza7eza7_4255));
																																																																																				}}
																																																																																				BGl_z62checkzd2bufferz12za2zz__intextz00
																																																																																					(BgL_bufferz00_6997,
																																																																																					BgL_ptrz00_6998,
																																																																																					BgL_siza7eza7_2118);
																																																																																				{	/* Unsafe/intext.scm 719 */
																																																																																					long
																																																																																						BgL_o1z00_4265;
																																																																																					obj_t
																																																																																						BgL_s2z00_4266;
																																																																																					long
																																																																																						BgL_o2z00_4267;
																																																																																					long
																																																																																						BgL_lz00_4268;
																																																																																					BgL_o1z00_4265
																																																																																						=
																																																																																						(long)
																																																																																						CINT
																																																																																						(BgL_offsetz00_2117);
																																																																																					BgL_s2z00_4266
																																																																																						=
																																																																																						CELL_REF
																																																																																						(BgL_bufferz00_6997);
																																																																																					BgL_o2z00_4267
																																																																																						=
																																																																																						(long)
																																																																																						CINT
																																																																																						(CELL_REF
																																																																																						(BgL_ptrz00_6998));
																																																																																					BgL_lz00_4268
																																																																																						=
																																																																																						(long)
																																																																																						CINT
																																																																																						(BgL_siza7eza7_2118);
																																																																																					blit_string
																																																																																						(
																																																																																						((obj_t) BgL_sz00_2116), BgL_o1z00_4265, BgL_s2z00_4266, BgL_o2z00_4267, BgL_lz00_4268);
																																																																																				}
																																																																																				{	/* Unsafe/intext.scm 720 */
																																																																																					obj_t
																																																																																						BgL_auxz00_7045;
																																																																																					BgL_auxz00_7045
																																																																																						=
																																																																																						ADDFX
																																																																																						(CELL_REF
																																																																																						(BgL_ptrz00_6998),
																																																																																						BgL_siza7eza7_2118);
																																																																																					return
																																																																																						CELL_SET
																																																																																						(BgL_ptrz00_6998,
																																																																																						BgL_auxz00_7045);
																																																																																				}
																																																																																			}
																																																																																		}
																																																																																	else
																																																																																		{	/* Unsafe/intext.scm 1114 */
																																																																																			if (STRUCTP(BgL_itemz00_2464))
																																																																																				{	/* Unsafe/intext.scm 1118 */
																																																																																					obj_t
																																																																																						BgL_zc3z04anonymousza31929ze3z87_6970;
																																																																																					{
																																																																																						int
																																																																																							BgL_tmpz00_9543;
																																																																																						BgL_tmpz00_9543
																																																																																							=
																																																																																							(int)
																																																																																							(
																																																																																							((long) 14));
																																																																																						BgL_zc3z04anonymousza31929ze3z87_6970
																																																																																							=
																																																																																							MAKE_L_PROCEDURE
																																																																																							(BGl_z62zc3z04anonymousza31929ze3ze5zz__intextz00,
																																																																																							BgL_tmpz00_9543);
																																																																																					}
																																																																																					PROCEDURE_L_SET
																																																																																						(BgL_zc3z04anonymousza31929ze3z87_6970,
																																																																																						(int)
																																																																																						(((long) 0)), BgL_tablez00_6999);
																																																																																					PROCEDURE_L_SET
																																																																																						(BgL_zc3z04anonymousza31929ze3z87_6970,
																																																																																						(int)
																																																																																						(((long) 1)), ((obj_t) BgL_refz00_7000));
																																																																																					PROCEDURE_L_SET
																																																																																						(BgL_zc3z04anonymousza31929ze3z87_6970,
																																																																																						(int)
																																																																																						(((long) 2)), BgL_printzd2customzd2_7001);
																																																																																					PROCEDURE_L_SET
																																																																																						(BgL_zc3z04anonymousza31929ze3z87_6970,
																																																																																						(int)
																																																																																						(((long) 3)), BgL_printzd2tvectorzd2_7002);
																																																																																					PROCEDURE_L_SET
																																																																																						(BgL_zc3z04anonymousza31929ze3z87_6970,
																																																																																						(int)
																																																																																						(((long) 4)), BgL_printzd2hvectorzd2_7003);
																																																																																					PROCEDURE_L_SET
																																																																																						(BgL_zc3z04anonymousza31929ze3z87_6970,
																																																																																						(int)
																																																																																						(((long) 5)), BgL_printzd2vectorzd2_7004);
																																																																																					PROCEDURE_L_SET
																																																																																						(BgL_zc3z04anonymousza31929ze3z87_6970,
																																																																																						(int)
																																																																																						(((long) 6)), BgL_printzd2weakptrzd2_7005);
																																																																																					PROCEDURE_L_SET
																																																																																						(BgL_zc3z04anonymousza31929ze3z87_6970,
																																																																																						(int)
																																																																																						(((long) 7)), BgL_printzd2cellzd2_7006);
																																																																																					PROCEDURE_L_SET
																																																																																						(BgL_zc3z04anonymousza31929ze3z87_6970,
																																																																																						(int)
																																																																																						(((long) 8)), BgL_printzd2classzd2_7007);
																																																																																					PROCEDURE_L_SET
																																																																																						(BgL_zc3z04anonymousza31929ze3z87_6970,
																																																																																						(int)
																																																																																						(((long) 9)), BgL_printzd2objectzd2_7008);
																																																																																					PROCEDURE_L_SET
																																																																																						(BgL_zc3z04anonymousza31929ze3z87_6970,
																																																																																						(int)
																																																																																						(((long) 10)), BgL_printzd2pairzd2_7009);
																																																																																					PROCEDURE_L_SET
																																																																																						(BgL_zc3z04anonymousza31929ze3z87_6970,
																																																																																						(int)
																																																																																						(((long) 11)), BgL_printzd2epairzd2_7010);
																																																																																					PROCEDURE_L_SET
																																																																																						(BgL_zc3z04anonymousza31929ze3z87_6970,
																																																																																						(int)
																																																																																						(((long) 12)), ((obj_t) BgL_bufferz00_6997));
																																																																																					PROCEDURE_L_SET
																																																																																						(BgL_zc3z04anonymousza31929ze3z87_6970,
																																																																																						(int)
																																																																																						(((long) 13)), ((obj_t) BgL_ptrz00_6998));
																																																																																					{
																																																																																						obj_t
																																																																																							BgL_printerz00_9578;
																																																																																						obj_t
																																																																																							BgL_itemz00_9577;
																																																																																						BgL_itemz00_9577
																																																																																							=
																																																																																							BgL_itemz00_2464;
																																																																																						BgL_printerz00_9578
																																																																																							=
																																																																																							BgL_zc3z04anonymousza31929ze3z87_6970;
																																																																																						BgL_printerz00_2206
																																																																																							=
																																																																																							BgL_printerz00_9578;
																																																																																						BgL_itemz00_2205
																																																																																							=
																																																																																							BgL_itemz00_9577;
																																																																																						goto
																																																																																							BgL_zc3z04anonymousza31692ze3z87_2207;
																																																																																					}
																																																																																				}
																																																																																			else
																																																																																				{	/* Unsafe/intext.scm 1119 */
																																																																																					bool_t
																																																																																						BgL_test3608z00_9579;
																																																																																					{	/* Unsafe/intext.scm 1119 */
																																																																																						bool_t
																																																																																							BgL_res2990z00_5886;
																																																																																						BgL_res2990z00_5886
																																																																																							=
																																																																																							BGL_REGEXPP
																																																																																							(BgL_itemz00_2464);
																																																																																						BgL_test3608z00_9579
																																																																																							=
																																																																																							BgL_res2990z00_5886;
																																																																																					}
																																																																																					if (BgL_test3608z00_9579)
																																																																																						{	/* Unsafe/intext.scm 1119 */
																																																																																							BGl_z62checkzd2bufferz12za2zz__intextz00
																																																																																								(BgL_bufferz00_6997,
																																																																																								BgL_ptrz00_6998,
																																																																																								BINT
																																																																																								(((long) 1)));
																																																																																							{	/* Unsafe/intext.scm 702 */
																																																																																								obj_t
																																																																																									BgL_stringz00_5887;
																																																																																								long
																																																																																									BgL_kz00_5888;
																																																																																								BgL_stringz00_5887
																																																																																									=
																																																																																									CELL_REF
																																																																																									(BgL_bufferz00_6997);
																																																																																								BgL_kz00_5888
																																																																																									=
																																																																																									(long)
																																																																																									CINT
																																																																																									(CELL_REF
																																																																																									(BgL_ptrz00_6998));
																																																																																								STRING_SET
																																																																																									(BgL_stringz00_5887,
																																																																																									BgL_kz00_5888,
																																																																																									((unsigned char) 'r'));
																																																																																							}
																																																																																							{	/* Unsafe/intext.scm 703 */
																																																																																								obj_t
																																																																																									BgL_auxz00_7043;
																																																																																								BgL_auxz00_7043
																																																																																									=
																																																																																									ADDFX
																																																																																									(BINT
																																																																																									(((long) 1)), CELL_REF(BgL_ptrz00_6998));
																																																																																								CELL_SET
																																																																																									(BgL_ptrz00_6998,
																																																																																									BgL_auxz00_7043);
																																																																																							}
																																																																																							{	/* Unsafe/intext.scm 1121 */
																																																																																								obj_t
																																																																																									BgL_sz00_2566;
																																																																																								{	/* Unsafe/intext.scm 1121 */
																																																																																									obj_t
																																																																																										BgL_res2992z00_5893;
																																																																																									{	/* Unsafe/intext.scm 1121 */
																																																																																										obj_t
																																																																																											BgL_tmpz00_9587;
																																																																																										BgL_tmpz00_9587
																																																																																											=
																																																																																											(
																																																																																											(obj_t)
																																																																																											BgL_itemz00_2464);
																																																																																										BgL_res2992z00_5893
																																																																																											=
																																																																																											BGL_REGEXP_PAT
																																																																																											(BgL_tmpz00_9587);
																																																																																									}
																																																																																									BgL_sz00_2566
																																																																																										=
																																																																																										BgL_res2992z00_5893;
																																																																																								}
																																																																																								{	/* Unsafe/intext.scm 1122 */
																																																																																									long
																																																																																										BgL_arg1931z00_2567;
																																																																																									BgL_arg1931z00_2567
																																																																																										=
																																																																																										STRING_LENGTH
																																																																																										(BgL_sz00_2566);
																																																																																									BGl_z62printzd2wordzb0zz__intextz00
																																																																																										(BgL_ptrz00_6998,
																																																																																										BgL_bufferz00_6997,
																																																																																										BgL_arg1931z00_2567);
																																																																																									BGl_z62checkzd2bufferz12za2zz__intextz00
																																																																																										(BgL_bufferz00_6997,
																																																																																										BgL_ptrz00_6998,
																																																																																										BINT
																																																																																										(BgL_arg1931z00_2567));
																																																																																									{	/* Unsafe/intext.scm 709 */
																																																																																										obj_t
																																																																																											BgL_s2z00_5897;
																																																																																										long
																																																																																											BgL_o2z00_5898;
																																																																																										BgL_s2z00_5897
																																																																																											=
																																																																																											CELL_REF
																																																																																											(BgL_bufferz00_6997);
																																																																																										BgL_o2z00_5898
																																																																																											=
																																																																																											(long)
																																																																																											CINT
																																																																																											(CELL_REF
																																																																																											(BgL_ptrz00_6998));
																																																																																										blit_string
																																																																																											(BgL_sz00_2566,
																																																																																											((long) 0), BgL_s2z00_5897, BgL_o2z00_5898, BgL_arg1931z00_2567);
																																																																																									}
																																																																																									{	/* Unsafe/intext.scm 710 */
																																																																																										obj_t
																																																																																											BgL_auxz00_7044;
																																																																																										BgL_auxz00_7044
																																																																																											=
																																																																																											ADDFX
																																																																																											(CELL_REF
																																																																																											(BgL_ptrz00_6998),
																																																																																											BINT
																																																																																											(BgL_arg1931z00_2567));
																																																																																										return
																																																																																											CELL_SET
																																																																																											(BgL_ptrz00_6998,
																																																																																											BgL_auxz00_7044);
																																																																																									}
																																																																																								}
																																																																																							}
																																																																																						}
																																																																																					else
																																																																																						{	/* Unsafe/intext.scm 1119 */
																																																																																							return
																																																																																								BGl_errorz00zz__errorz00
																																																																																								(BGl_string3288z00zz__intextz00,
																																																																																								BGl_string3351z00zz__intextz00,
																																																																																								BgL_itemz00_2464);
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

	}



/* &print-word */
	obj_t BGl_z62printzd2wordzb0zz__intextz00(obj_t BgL_ptrz00_7052,
		obj_t BgL_bufferz00_7051, long BgL_mz00_2193)
	{
		{	/* Unsafe/intext.scm 781 */
			{	/* Unsafe/intext.scm 776 */
				long BgL_siza7eza7_4380;

				BgL_siza7eza7_4380 =
					BGl_siza7ezd2ofzd2wordza7zz__intextz00(BgL_mz00_2193);
				if ((BgL_siza7eza7_4380 == ((long) 0)))
					{	/* Unsafe/intext.scm 731 */
						unsigned char BgL_arg1632z00_4384;

						BgL_arg1632z00_4384 = (((long) 0));
						return
							BGl_z62z12printzd2markupza2zz__intextz00(BgL_ptrz00_7052,
							BgL_bufferz00_7051, BgL_arg1632z00_4384);
					}
				else
					{	/* Unsafe/intext.scm 777 */
						{	/* Unsafe/intext.scm 731 */
							unsigned char BgL_arg1632z00_4386;

							BgL_arg1632z00_4386 = (BgL_siza7eza7_4380);
							BGl_z62z12printzd2markupza2zz__intextz00(BgL_ptrz00_7052,
								BgL_bufferz00_7051, BgL_arg1632z00_4386);
						}
						return
							BBOOL(BGl_z62printzd2wordzf2siza7eze5zz__intextz00
							(BgL_ptrz00_7052, BgL_bufferz00_7051, BINT(BgL_mz00_2193),
								BgL_siza7eza7_4380));
					}
			}
		}

	}



/* &!print-chars */
	obj_t BGl_z62z12printzd2charsza2zz__intextz00(obj_t BgL_ptrz00_7054,
		obj_t BgL_bufferz00_7053, obj_t BgL_sz00_2111, long BgL_siza7eza7_2112)
	{
		{	/* Unsafe/intext.scm 707 */
			{	/* Unsafe/intext.scm 776 */
				long BgL_siza7eza7_4236;

				BgL_siza7eza7_4236 =
					BGl_siza7ezd2ofzd2wordza7zz__intextz00(BgL_siza7eza7_2112);
				if ((BgL_siza7eza7_4236 == ((long) 0)))
					{	/* Unsafe/intext.scm 731 */
						unsigned char BgL_arg1632z00_4240;

						BgL_arg1632z00_4240 = (((long) 0));
						BGl_z62z12printzd2markupza2zz__intextz00(BgL_ptrz00_7054,
							BgL_bufferz00_7053, BgL_arg1632z00_4240);
					}
				else
					{	/* Unsafe/intext.scm 777 */
						{	/* Unsafe/intext.scm 731 */
							unsigned char BgL_arg1632z00_4242;

							BgL_arg1632z00_4242 = (BgL_siza7eza7_4236);
							BGl_z62z12printzd2markupza2zz__intextz00(BgL_ptrz00_7054,
								BgL_bufferz00_7053, BgL_arg1632z00_4242);
						}
						BBOOL(BGl_z62printzd2wordzf2siza7eze5zz__intextz00(BgL_ptrz00_7054,
								BgL_bufferz00_7053, BINT(BgL_siza7eza7_2112),
								BgL_siza7eza7_4236));
			}}
			BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7053,
				BgL_ptrz00_7054, BINT(BgL_siza7eza7_2112));
			{	/* Unsafe/intext.scm 709 */
				obj_t BgL_s2z00_4246;
				long BgL_o2z00_4247;

				BgL_s2z00_4246 = CELL_REF(BgL_bufferz00_7053);
				BgL_o2z00_4247 = (long) CINT(CELL_REF(BgL_ptrz00_7054));
				blit_string(
					((obj_t) BgL_sz00_2111), ((long) 0), BgL_s2z00_4246, BgL_o2z00_4247,
					BgL_siza7eza7_2112);
			}
			{	/* Unsafe/intext.scm 710 */
				obj_t BgL_auxz00_7055;

				BgL_auxz00_7055 =
					ADDFX(CELL_REF(BgL_ptrz00_7054), BINT(BgL_siza7eza7_2112));
				return CELL_SET(BgL_ptrz00_7054, BgL_auxz00_7055);
			}
		}

	}



/* &print-epair */
	obj_t BGl_z62printzd2epairzb0zz__intextz00(obj_t BgL_envz00_7056,
		obj_t BgL_itemz00_7070, obj_t BgL_markz00_7071)
	{
		{	/* Unsafe/intext.scm 814 */
			{	/* Unsafe/intext.scm 814 */
				obj_t BgL_refz00_7057;
				obj_t BgL_printzd2customzd2_7058;
				obj_t BgL_printzd2tvectorzd2_7059;
				obj_t BgL_printzd2hvectorzd2_7060;
				obj_t BgL_printzd2vectorzd2_7061;
				obj_t BgL_printzd2weakptrzd2_7062;
				obj_t BgL_printzd2cellzd2_7063;
				obj_t BgL_printzd2classzd2_7064;
				obj_t BgL_printzd2objectzd2_7065;
				obj_t BgL_printzd2pairzd2_7066;
				obj_t BgL_bufferz00_7067;
				obj_t BgL_ptrz00_7068;
				obj_t BgL_tablez00_7069;

				BgL_refz00_7057 = PROCEDURE_L_REF(BgL_envz00_7056, (int) (((long) 0)));
				BgL_printzd2customzd2_7058 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7056, (int) (((long) 1))));
				BgL_printzd2tvectorzd2_7059 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7056, (int) (((long) 2))));
				BgL_printzd2hvectorzd2_7060 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7056, (int) (((long) 3))));
				BgL_printzd2vectorzd2_7061 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7056, (int) (((long) 4))));
				BgL_printzd2weakptrzd2_7062 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7056, (int) (((long) 5))));
				BgL_printzd2cellzd2_7063 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7056, (int) (((long) 6))));
				BgL_printzd2classzd2_7064 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7056, (int) (((long) 7))));
				BgL_printzd2objectzd2_7065 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7056, (int) (((long) 8))));
				BgL_printzd2pairzd2_7066 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7056, (int) (((long) 9))));
				BgL_bufferz00_7067 =
					PROCEDURE_L_REF(BgL_envz00_7056, (int) (((long) 10)));
				BgL_ptrz00_7068 = PROCEDURE_L_REF(BgL_envz00_7056, (int) (((long) 11)));
				BgL_tablez00_7069 =
					PROCEDURE_L_REF(BgL_envz00_7056, (int) (((long) 12)));
				BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7067,
					BgL_ptrz00_7068, BINT(((long) 1)));
				{	/* Unsafe/intext.scm 702 */
					obj_t BgL_stringz00_7479;
					long BgL_kz00_7480;

					BgL_stringz00_7479 = CELL_REF(BgL_bufferz00_7067);
					BgL_kz00_7480 = (long) CINT(CELL_REF(BgL_ptrz00_7068));
					STRING_SET(BgL_stringz00_7479, BgL_kz00_7480, ((unsigned char) '^'));
				}
				{	/* Unsafe/intext.scm 703 */
					obj_t BgL_auxz00_7481;

					BgL_auxz00_7481 = ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7068));
					CELL_SET(BgL_ptrz00_7068, BgL_auxz00_7481);
				}
				{	/* Unsafe/intext.scm 815 */
					long BgL_lenz00_7482;

					BgL_lenz00_7482 =
						BGl_markedzd2pairzd2lengthz00zz__intextz00(BgL_tablez00_7069,
						BgL_itemz00_7070);
					{	/* Unsafe/intext.scm 776 */
						long BgL_siza7eza7_7483;

						BgL_siza7eza7_7483 =
							BGl_siza7ezd2ofzd2wordza7zz__intextz00(BgL_lenz00_7482);
						if ((BgL_siza7eza7_7483 == ((long) 0)))
							{	/* Unsafe/intext.scm 777 */
								BGl_z62z12printzd2markupza2zz__intextz00(BgL_ptrz00_7068,
									BgL_bufferz00_7067, (((long) 0)));
							}
						else
							{	/* Unsafe/intext.scm 777 */
								BGl_z62z12printzd2markupza2zz__intextz00(BgL_ptrz00_7068,
									BgL_bufferz00_7067, (BgL_siza7eza7_7483));
								BBOOL(BGl_z62printzd2wordzf2siza7eze5zz__intextz00
									(BgL_ptrz00_7068, BgL_bufferz00_7067, BINT(BgL_lenz00_7482),
										BgL_siza7eza7_7483));
							}
					}
					{
						long BgL_iz00_7485;
						obj_t BgL_pz00_7486;

						BgL_iz00_7485 = ((long) 0);
						BgL_pz00_7486 = BgL_itemz00_7070;
					BgL_loopz00_7484:
						if ((BgL_iz00_7485 == (BgL_lenz00_7482 - ((long) 1))))
							{	/* Unsafe/intext.scm 820 */
								if (PAIRP(BgL_pz00_7486))
									{	/* Unsafe/intext.scm 821 */
										BGl_z62printzd2itemzb0zz__intextz00(BgL_envz00_7056,
											BgL_printzd2pairzd2_7066, BgL_printzd2objectzd2_7065,
											BgL_printzd2classzd2_7064, BgL_printzd2cellzd2_7063,
											BgL_printzd2weakptrzd2_7062, BgL_printzd2vectorzd2_7061,
											BgL_printzd2hvectorzd2_7060, BgL_printzd2tvectorzd2_7059,
											BgL_printzd2customzd2_7058, BgL_refz00_7057,
											BgL_tablez00_7069, BgL_ptrz00_7068, BgL_bufferz00_7067,
											CAR(BgL_pz00_7486));
										{	/* Unsafe/intext.scm 824 */
											bool_t BgL_test3614z00_9685;

											{	/* Unsafe/intext.scm 824 */
												bool_t BgL_res2765z00_7487;

												BgL_res2765z00_7487 = EPAIRP(BgL_pz00_7486);
												BgL_test3614z00_9685 = BgL_res2765z00_7487;
											}
											if (BgL_test3614z00_9685)
												{	/* Unsafe/intext.scm 824 */
													BGl_z62printzd2itemzb0zz__intextz00(BgL_envz00_7056,
														BgL_printzd2pairzd2_7066,
														BgL_printzd2objectzd2_7065,
														BgL_printzd2classzd2_7064, BgL_printzd2cellzd2_7063,
														BgL_printzd2weakptrzd2_7062,
														BgL_printzd2vectorzd2_7061,
														BgL_printzd2hvectorzd2_7060,
														BgL_printzd2tvectorzd2_7059,
														BgL_printzd2customzd2_7058, BgL_refz00_7057,
														BgL_tablez00_7069, BgL_ptrz00_7068,
														BgL_bufferz00_7067, CER(BgL_pz00_7486));
												}
											else
												{	/* Unsafe/intext.scm 824 */
													BGl_z62printzd2itemzb0zz__intextz00(BgL_envz00_7056,
														BgL_printzd2pairzd2_7066,
														BgL_printzd2objectzd2_7065,
														BgL_printzd2classzd2_7064, BgL_printzd2cellzd2_7063,
														BgL_printzd2weakptrzd2_7062,
														BgL_printzd2vectorzd2_7061,
														BgL_printzd2hvectorzd2_7060,
														BgL_printzd2tvectorzd2_7059,
														BgL_printzd2customzd2_7058, BgL_refz00_7057,
														BgL_tablez00_7069, BgL_ptrz00_7068,
														BgL_bufferz00_7067, BUNSPEC);
												}
										}
										return
											BGl_z62printzd2itemzb0zz__intextz00(BgL_envz00_7056,
											BgL_printzd2pairzd2_7066, BgL_printzd2objectzd2_7065,
											BgL_printzd2classzd2_7064, BgL_printzd2cellzd2_7063,
											BgL_printzd2weakptrzd2_7062, BgL_printzd2vectorzd2_7061,
											BgL_printzd2hvectorzd2_7060, BgL_printzd2tvectorzd2_7059,
											BgL_printzd2customzd2_7058, BgL_refz00_7057,
											BgL_tablez00_7069, BgL_ptrz00_7068, BgL_bufferz00_7067,
											BNIL);
									}
								else
									{	/* Unsafe/intext.scm 821 */
										return
											BGl_z62printzd2itemzb0zz__intextz00(BgL_envz00_7056,
											BgL_printzd2pairzd2_7066, BgL_printzd2objectzd2_7065,
											BgL_printzd2classzd2_7064, BgL_printzd2cellzd2_7063,
											BgL_printzd2weakptrzd2_7062, BgL_printzd2vectorzd2_7061,
											BgL_printzd2hvectorzd2_7060, BgL_printzd2tvectorzd2_7059,
											BgL_printzd2customzd2_7058, BgL_refz00_7057,
											BgL_tablez00_7069, BgL_ptrz00_7068, BgL_bufferz00_7067,
											BgL_pz00_7486);
									}
							}
						else
							{	/* Unsafe/intext.scm 820 */
								{	/* Unsafe/intext.scm 830 */
									obj_t BgL_arg1708z00_7488;

									BgL_arg1708z00_7488 = CAR(((obj_t) BgL_pz00_7486));
									BGl_z62printzd2itemzb0zz__intextz00(BgL_envz00_7056,
										BgL_printzd2pairzd2_7066, BgL_printzd2objectzd2_7065,
										BgL_printzd2classzd2_7064, BgL_printzd2cellzd2_7063,
										BgL_printzd2weakptrzd2_7062, BgL_printzd2vectorzd2_7061,
										BgL_printzd2hvectorzd2_7060, BgL_printzd2tvectorzd2_7059,
										BgL_printzd2customzd2_7058, BgL_refz00_7057,
										BgL_tablez00_7069, BgL_ptrz00_7068, BgL_bufferz00_7067,
										BgL_arg1708z00_7488);
								}
								{	/* Unsafe/intext.scm 831 */
									bool_t BgL_test3615z00_9695;

									{	/* Unsafe/intext.scm 831 */
										bool_t BgL_res2766z00_7489;

										BgL_res2766z00_7489 = EPAIRP(BgL_pz00_7486);
										BgL_test3615z00_9695 = BgL_res2766z00_7489;
									}
									if (BgL_test3615z00_9695)
										{	/* Unsafe/intext.scm 832 */
											obj_t BgL_arg1710z00_7490;

											BgL_arg1710z00_7490 = CER(((obj_t) BgL_pz00_7486));
											BGl_z62printzd2itemzb0zz__intextz00(BgL_envz00_7056,
												BgL_printzd2pairzd2_7066, BgL_printzd2objectzd2_7065,
												BgL_printzd2classzd2_7064, BgL_printzd2cellzd2_7063,
												BgL_printzd2weakptrzd2_7062, BgL_printzd2vectorzd2_7061,
												BgL_printzd2hvectorzd2_7060,
												BgL_printzd2tvectorzd2_7059, BgL_printzd2customzd2_7058,
												BgL_refz00_7057, BgL_tablez00_7069, BgL_ptrz00_7068,
												BgL_bufferz00_7067, BgL_arg1710z00_7490);
										}
									else
										{	/* Unsafe/intext.scm 831 */
											BGl_z62printzd2itemzb0zz__intextz00(BgL_envz00_7056,
												BgL_printzd2pairzd2_7066, BgL_printzd2objectzd2_7065,
												BgL_printzd2classzd2_7064, BgL_printzd2cellzd2_7063,
												BgL_printzd2weakptrzd2_7062, BgL_printzd2vectorzd2_7061,
												BgL_printzd2hvectorzd2_7060,
												BgL_printzd2tvectorzd2_7059, BgL_printzd2customzd2_7058,
												BgL_refz00_7057, BgL_tablez00_7069, BgL_ptrz00_7068,
												BgL_bufferz00_7067, BUNSPEC);
										}
								}
								{	/* Unsafe/intext.scm 834 */
									obj_t BgL_vcdrz00_7491;

									BgL_vcdrz00_7491 = CDR(((obj_t) BgL_pz00_7486));
									{	/* Unsafe/intext.scm 835 */
										bool_t BgL_test3616z00_9703;

										if (PAIRP(BgL_vcdrz00_7491))
											{	/* Unsafe/intext.scm 836 */
												obj_t BgL_markz00_7492;

												BgL_markz00_7492 =
													BGl_hashtablezd2getzd2zz__hashz00(BgL_tablez00_7069,
													BgL_vcdrz00_7491);
												{	/* Unsafe/intext.scm 837 */
													bool_t BgL__ortest_1070z00_7493;

													BgL__ortest_1070z00_7493 =
														BGl_2ze3ze3zz__r4_numbers_6_5z00(STRUCT_REF(
															((obj_t) BgL_markz00_7492),
															(int) (((long) 2))), BINT(((long) 0)));
													if (BgL__ortest_1070z00_7493)
														{	/* Unsafe/intext.scm 837 */
															BgL_test3616z00_9703 = BgL__ortest_1070z00_7493;
														}
													else
														{	/* Unsafe/intext.scm 837 */
															BgL_test3616z00_9703 =
																(
																(long) CINT(STRUCT_REF(
																		((obj_t) BgL_markz00_7492),
																		(int) (((long) 3)))) >= ((long) 0));
											}}}
										else
											{	/* Unsafe/intext.scm 835 */
												BgL_test3616z00_9703 = ((bool_t) 0);
											}
										if (BgL_test3616z00_9703)
											{	/* Unsafe/intext.scm 835 */
												return
													BGl_z62printzd2itemzb0zz__intextz00(BgL_envz00_7056,
													BgL_printzd2pairzd2_7066, BgL_printzd2objectzd2_7065,
													BgL_printzd2classzd2_7064, BgL_printzd2cellzd2_7063,
													BgL_printzd2weakptrzd2_7062,
													BgL_printzd2vectorzd2_7061,
													BgL_printzd2hvectorzd2_7060,
													BgL_printzd2tvectorzd2_7059,
													BgL_printzd2customzd2_7058, BgL_refz00_7057,
													BgL_tablez00_7069, BgL_ptrz00_7068,
													BgL_bufferz00_7067, BgL_vcdrz00_7491);
											}
										else
											{
												obj_t BgL_pz00_9721;
												long BgL_iz00_9719;

												BgL_iz00_9719 = (BgL_iz00_7485 + ((long) 1));
												BgL_pz00_9721 = BgL_vcdrz00_7491;
												BgL_pz00_7486 = BgL_pz00_9721;
												BgL_iz00_7485 = BgL_iz00_9719;
												goto BgL_loopz00_7484;
											}
									}
								}
							}
					}
				}
			}
		}

	}



/* &print-pair */
	obj_t BGl_z62printzd2pairzb0zz__intextz00(obj_t BgL_envz00_7073,
		obj_t BgL_itemz00_7087, obj_t BgL_markz00_7088)
	{
		{	/* Unsafe/intext.scm 844 */
			{	/* Unsafe/intext.scm 844 */
				obj_t BgL_refz00_7074;
				obj_t BgL_printzd2customzd2_7075;
				obj_t BgL_printzd2tvectorzd2_7076;
				obj_t BgL_printzd2hvectorzd2_7077;
				obj_t BgL_printzd2vectorzd2_7078;
				obj_t BgL_printzd2weakptrzd2_7079;
				obj_t BgL_printzd2cellzd2_7080;
				obj_t BgL_printzd2classzd2_7081;
				obj_t BgL_printzd2objectzd2_7082;
				obj_t BgL_printzd2epairzd2_7083;
				obj_t BgL_bufferz00_7084;
				obj_t BgL_ptrz00_7085;
				obj_t BgL_tablez00_7086;

				BgL_refz00_7074 = PROCEDURE_L_REF(BgL_envz00_7073, (int) (((long) 0)));
				BgL_printzd2customzd2_7075 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7073, (int) (((long) 1))));
				BgL_printzd2tvectorzd2_7076 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7073, (int) (((long) 2))));
				BgL_printzd2hvectorzd2_7077 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7073, (int) (((long) 3))));
				BgL_printzd2vectorzd2_7078 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7073, (int) (((long) 4))));
				BgL_printzd2weakptrzd2_7079 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7073, (int) (((long) 5))));
				BgL_printzd2cellzd2_7080 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7073, (int) (((long) 6))));
				BgL_printzd2classzd2_7081 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7073, (int) (((long) 7))));
				BgL_printzd2objectzd2_7082 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7073, (int) (((long) 8))));
				BgL_printzd2epairzd2_7083 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7073, (int) (((long) 9))));
				BgL_bufferz00_7084 =
					PROCEDURE_L_REF(BgL_envz00_7073, (int) (((long) 10)));
				BgL_ptrz00_7085 = PROCEDURE_L_REF(BgL_envz00_7073, (int) (((long) 11)));
				BgL_tablez00_7086 =
					PROCEDURE_L_REF(BgL_envz00_7073, (int) (((long) 12)));
				BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7084,
					BgL_ptrz00_7085, BINT(((long) 1)));
				{	/* Unsafe/intext.scm 702 */
					obj_t BgL_stringz00_7494;
					long BgL_kz00_7495;

					BgL_stringz00_7494 = CELL_REF(BgL_bufferz00_7084);
					BgL_kz00_7495 = (long) CINT(CELL_REF(BgL_ptrz00_7085));
					STRING_SET(BgL_stringz00_7494, BgL_kz00_7495, ((unsigned char) '('));
				}
				{	/* Unsafe/intext.scm 703 */
					obj_t BgL_auxz00_7496;

					BgL_auxz00_7496 = ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7085));
					CELL_SET(BgL_ptrz00_7085, BgL_auxz00_7496);
				}
				{	/* Unsafe/intext.scm 845 */
					long BgL_lenz00_7497;

					BgL_lenz00_7497 =
						BGl_markedzd2pairzd2lengthz00zz__intextz00(BgL_tablez00_7086,
						BgL_itemz00_7087);
					{	/* Unsafe/intext.scm 776 */
						long BgL_siza7eza7_7498;

						BgL_siza7eza7_7498 =
							BGl_siza7ezd2ofzd2wordza7zz__intextz00(BgL_lenz00_7497);
						if ((BgL_siza7eza7_7498 == ((long) 0)))
							{	/* Unsafe/intext.scm 777 */
								BGl_z62z12printzd2markupza2zz__intextz00(BgL_ptrz00_7085,
									BgL_bufferz00_7084, (((long) 0)));
							}
						else
							{	/* Unsafe/intext.scm 777 */
								BGl_z62z12printzd2markupza2zz__intextz00(BgL_ptrz00_7085,
									BgL_bufferz00_7084, (BgL_siza7eza7_7498));
								BBOOL(BGl_z62printzd2wordzf2siza7eze5zz__intextz00
									(BgL_ptrz00_7085, BgL_bufferz00_7084, BINT(BgL_lenz00_7497),
										BgL_siza7eza7_7498));
							}
					}
					{
						long BgL_iz00_7500;
						obj_t BgL_pz00_7501;

						BgL_iz00_7500 = ((long) 0);
						BgL_pz00_7501 = BgL_itemz00_7087;
					BgL_loopz00_7499:
						if ((BgL_iz00_7500 == (BgL_lenz00_7497 - ((long) 1))))
							{	/* Unsafe/intext.scm 850 */
								if (PAIRP(BgL_pz00_7501))
									{	/* Unsafe/intext.scm 851 */
										BGl_z62printzd2itemzb0zz__intextz00
											(BgL_printzd2epairzd2_7083, BgL_envz00_7073,
											BgL_printzd2objectzd2_7082, BgL_printzd2classzd2_7081,
											BgL_printzd2cellzd2_7080, BgL_printzd2weakptrzd2_7079,
											BgL_printzd2vectorzd2_7078, BgL_printzd2hvectorzd2_7077,
											BgL_printzd2tvectorzd2_7076, BgL_printzd2customzd2_7075,
											BgL_refz00_7074, BgL_tablez00_7086, BgL_ptrz00_7085,
											BgL_bufferz00_7084, CAR(BgL_pz00_7501));
										return
											BGl_z62printzd2itemzb0zz__intextz00
											(BgL_printzd2epairzd2_7083, BgL_envz00_7073,
											BgL_printzd2objectzd2_7082, BgL_printzd2classzd2_7081,
											BgL_printzd2cellzd2_7080, BgL_printzd2weakptrzd2_7079,
											BgL_printzd2vectorzd2_7078, BgL_printzd2hvectorzd2_7077,
											BgL_printzd2tvectorzd2_7076, BgL_printzd2customzd2_7075,
											BgL_refz00_7074, BgL_tablez00_7086, BgL_ptrz00_7085,
											BgL_bufferz00_7084, BNIL);
									}
								else
									{	/* Unsafe/intext.scm 851 */
										return
											BGl_z62printzd2itemzb0zz__intextz00
											(BgL_printzd2epairzd2_7083, BgL_envz00_7073,
											BgL_printzd2objectzd2_7082, BgL_printzd2classzd2_7081,
											BgL_printzd2cellzd2_7080, BgL_printzd2weakptrzd2_7079,
											BgL_printzd2vectorzd2_7078, BgL_printzd2hvectorzd2_7077,
											BgL_printzd2tvectorzd2_7076, BgL_printzd2customzd2_7075,
											BgL_refz00_7074, BgL_tablez00_7086, BgL_ptrz00_7085,
											BgL_bufferz00_7084, BgL_pz00_7501);
									}
							}
						else
							{	/* Unsafe/intext.scm 850 */
								{	/* Unsafe/intext.scm 857 */
									obj_t BgL_arg1726z00_7502;

									BgL_arg1726z00_7502 = CAR(((obj_t) BgL_pz00_7501));
									BGl_z62printzd2itemzb0zz__intextz00(BgL_printzd2epairzd2_7083,
										BgL_envz00_7073, BgL_printzd2objectzd2_7082,
										BgL_printzd2classzd2_7081, BgL_printzd2cellzd2_7080,
										BgL_printzd2weakptrzd2_7079, BgL_printzd2vectorzd2_7078,
										BgL_printzd2hvectorzd2_7077, BgL_printzd2tvectorzd2_7076,
										BgL_printzd2customzd2_7075, BgL_refz00_7074,
										BgL_tablez00_7086, BgL_ptrz00_7085, BgL_bufferz00_7084,
										BgL_arg1726z00_7502);
								}
								{	/* Unsafe/intext.scm 858 */
									obj_t BgL_vcdrz00_7503;

									BgL_vcdrz00_7503 = CDR(((obj_t) BgL_pz00_7501));
									{	/* Unsafe/intext.scm 859 */
										bool_t BgL_test3622z00_9788;

										if (PAIRP(BgL_vcdrz00_7503))
											{	/* Unsafe/intext.scm 860 */
												obj_t BgL_markz00_7504;

												BgL_markz00_7504 =
													BGl_hashtablezd2getzd2zz__hashz00(BgL_tablez00_7086,
													BgL_vcdrz00_7503);
												{	/* Unsafe/intext.scm 861 */
													bool_t BgL__ortest_1071z00_7505;

													BgL__ortest_1071z00_7505 =
														(
														(long) CINT(STRUCT_REF(
																((obj_t) BgL_markz00_7504),
																(int) (((long) 2)))) > ((long) 0));
													if (BgL__ortest_1071z00_7505)
														{	/* Unsafe/intext.scm 861 */
															BgL_test3622z00_9788 = BgL__ortest_1071z00_7505;
														}
													else
														{	/* Unsafe/intext.scm 861 */
															BgL_test3622z00_9788 =
																(
																(long) CINT(STRUCT_REF(
																		((obj_t) BgL_markz00_7504),
																		(int) (((long) 3)))) >= ((long) 0));
											}}}
										else
											{	/* Unsafe/intext.scm 859 */
												BgL_test3622z00_9788 = ((bool_t) 0);
											}
										if (BgL_test3622z00_9788)
											{	/* Unsafe/intext.scm 859 */
												return
													BGl_z62printzd2itemzb0zz__intextz00
													(BgL_printzd2epairzd2_7083, BgL_envz00_7073,
													BgL_printzd2objectzd2_7082, BgL_printzd2classzd2_7081,
													BgL_printzd2cellzd2_7080, BgL_printzd2weakptrzd2_7079,
													BgL_printzd2vectorzd2_7078,
													BgL_printzd2hvectorzd2_7077,
													BgL_printzd2tvectorzd2_7076,
													BgL_printzd2customzd2_7075, BgL_refz00_7074,
													BgL_tablez00_7086, BgL_ptrz00_7085,
													BgL_bufferz00_7084, BgL_vcdrz00_7503);
											}
										else
											{
												obj_t BgL_pz00_9806;
												long BgL_iz00_9804;

												BgL_iz00_9804 = (BgL_iz00_7500 + ((long) 1));
												BgL_pz00_9806 = BgL_vcdrz00_7503;
												BgL_pz00_7501 = BgL_pz00_9806;
												BgL_iz00_7500 = BgL_iz00_9804;
												goto BgL_loopz00_7499;
											}
									}
								}
							}
					}
				}
			}
		}

	}



/* &<@anonymous:1862> */
	obj_t BGl_z62zc3z04anonymousza31862ze3ze5zz__intextz00(obj_t BgL_envz00_7090,
		obj_t BgL_itemz00_7093, obj_t BgL_markz00_7094)
	{
		{	/* Unsafe/intext.scm 1025 */
			{	/* Unsafe/intext.scm 793 */
				obj_t BgL_bufferz00_7091;
				obj_t BgL_ptrz00_7092;

				BgL_bufferz00_7091 =
					PROCEDURE_L_REF(BgL_envz00_7090, (int) (((long) 0)));
				BgL_ptrz00_7092 = PROCEDURE_L_REF(BgL_envz00_7090, (int) (((long) 1)));
				BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7091,
					BgL_ptrz00_7092, BINT(((long) 1)));
				{	/* Unsafe/intext.scm 702 */
					obj_t BgL_stringz00_7506;
					long BgL_kz00_7507;

					BgL_stringz00_7506 = CELL_REF(BgL_bufferz00_7091);
					BgL_kz00_7507 = (long) CINT(CELL_REF(BgL_ptrz00_7092));
					STRING_SET(BgL_stringz00_7506, BgL_kz00_7507, ((unsigned char) '"'));
				}
				{	/* Unsafe/intext.scm 703 */
					obj_t BgL_auxz00_7508;

					BgL_auxz00_7508 = ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7092));
					CELL_SET(BgL_ptrz00_7092, BgL_auxz00_7508);
				}
				{	/* Unsafe/intext.scm 794 */
					long BgL_arg1691z00_7509;

					BgL_arg1691z00_7509 = STRING_LENGTH(((obj_t) BgL_itemz00_7093));
					return
						BGl_z62z12printzd2charsza2zz__intextz00(BgL_ptrz00_7092,
						BgL_bufferz00_7091, BgL_itemz00_7093, BgL_arg1691z00_7509);
				}
			}
		}

	}



/* &print-object */
	obj_t BGl_z62printzd2objectzb0zz__intextz00(obj_t BgL_envz00_7096,
		obj_t BgL_itemz00_7110, obj_t BgL_markz00_7111)
	{
		{	/* Unsafe/intext.scm 877 */
			{	/* Unsafe/intext.scm 874 */
				obj_t BgL_tablez00_7097;
				obj_t BgL_refz00_7098;
				obj_t BgL_printzd2customzd2_7099;
				obj_t BgL_printzd2tvectorzd2_7100;
				obj_t BgL_printzd2hvectorzd2_7101;
				obj_t BgL_printzd2vectorzd2_7102;
				obj_t BgL_printzd2weakptrzd2_7103;
				obj_t BgL_printzd2cellzd2_7104;
				obj_t BgL_printzd2classzd2_7105;
				obj_t BgL_printzd2pairzd2_7106;
				obj_t BgL_printzd2epairzd2_7107;
				obj_t BgL_bufferz00_7108;
				obj_t BgL_ptrz00_7109;

				BgL_tablez00_7097 =
					PROCEDURE_L_REF(BgL_envz00_7096, (int) (((long) 0)));
				BgL_refz00_7098 = PROCEDURE_L_REF(BgL_envz00_7096, (int) (((long) 1)));
				BgL_printzd2customzd2_7099 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7096, (int) (((long) 2))));
				BgL_printzd2tvectorzd2_7100 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7096, (int) (((long) 3))));
				BgL_printzd2hvectorzd2_7101 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7096, (int) (((long) 4))));
				BgL_printzd2vectorzd2_7102 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7096, (int) (((long) 5))));
				BgL_printzd2weakptrzd2_7103 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7096, (int) (((long) 6))));
				BgL_printzd2cellzd2_7104 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7096, (int) (((long) 7))));
				BgL_printzd2classzd2_7105 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7096, (int) (((long) 8))));
				BgL_printzd2pairzd2_7106 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7096, (int) (((long) 9))));
				BgL_printzd2epairzd2_7107 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7096, (int) (((long) 10))));
				BgL_bufferz00_7108 =
					PROCEDURE_L_REF(BgL_envz00_7096, (int) (((long) 11)));
				BgL_ptrz00_7109 = PROCEDURE_L_REF(BgL_envz00_7096, (int) (((long) 12)));
				{
					obj_t BgL_itemz00_7519;
					obj_t BgL_oz00_7520;
					long BgL_iz00_7512;

					{	/* Unsafe/intext.scm 874 */
						obj_t BgL_vz00_7550;

						BgL_vz00_7550 =
							STRUCT_REF(((obj_t) BgL_markz00_7111), (int) (((long) 1)));
						if ((BgL_itemz00_7110 == BgL_vz00_7550))
							{	/* Unsafe/intext.scm 875 */
								BgL_itemz00_7519 = BgL_itemz00_7110;
								BgL_oz00_7520 = BgL_vz00_7550;
								{	/* Unsafe/intext.scm 881 */
									obj_t BgL_klassz00_7521;

									{	/* Unsafe/intext.scm 881 */
										long BgL_arg2456z00_7522;

										{	/* Unsafe/intext.scm 881 */
											long BgL_arg2457z00_7523;

											{	/* Unsafe/intext.scm 881 */
												long BgL_res2787z00_7524;

												BgL_res2787z00_7524 =
													BGL_OBJECT_CLASS_NUM(
													((BgL_objectz00_bglt) BgL_itemz00_7519));
												BgL_arg2457z00_7523 = BgL_res2787z00_7524;
											}
											BgL_arg2456z00_7522 = (BgL_arg2457z00_7523 - OBJECT_TYPE);
										}
										BgL_klassz00_7521 =
											VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
											BgL_arg2456z00_7522);
									}
									{	/* Unsafe/intext.scm 881 */
										obj_t BgL_fieldsz00_7525;

										{	/* Unsafe/intext.scm 882 */
											obj_t BgL_res2789z00_7526;

											{	/* Unsafe/intext.scm 882 */
												obj_t BgL_tmpz00_9864;

												BgL_tmpz00_9864 = ((obj_t) BgL_klassz00_7521);
												BgL_res2789z00_7526 =
													BGL_CLASS_ALL_FIELDS(BgL_tmpz00_9864);
											}
											BgL_fieldsz00_7525 = BgL_res2789z00_7526;
										}
										{	/* Unsafe/intext.scm 883 */

											BGl_z62checkzd2bufferz12za2zz__intextz00
												(BgL_bufferz00_7108, BgL_ptrz00_7109, BINT(((long) 1)));
											{	/* Unsafe/intext.scm 702 */
												obj_t BgL_stringz00_7527;
												long BgL_kz00_7528;

												BgL_stringz00_7527 = CELL_REF(BgL_bufferz00_7108);
												BgL_kz00_7528 = (long) CINT(CELL_REF(BgL_ptrz00_7109));
												STRING_SET(BgL_stringz00_7527, BgL_kz00_7528,
													((unsigned char) '|'));
											}
											{	/* Unsafe/intext.scm 703 */
												obj_t BgL_auxz00_7529;

												BgL_auxz00_7529 =
													ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7109));
												CELL_SET(BgL_ptrz00_7109, BgL_auxz00_7529);
											}
											BGl_z62printzd2itemzb0zz__intextz00
												(BgL_printzd2epairzd2_7107, BgL_printzd2pairzd2_7106,
												BgL_envz00_7096, BgL_printzd2classzd2_7105,
												BgL_printzd2cellzd2_7104, BgL_printzd2weakptrzd2_7103,
												BgL_printzd2vectorzd2_7102, BgL_printzd2hvectorzd2_7101,
												BgL_printzd2tvectorzd2_7100, BgL_printzd2customzd2_7099,
												BgL_refz00_7098, BgL_tablez00_7097, BgL_ptrz00_7109,
												BgL_bufferz00_7108,
												BGl_classzd2namezd2zz__objectz00(BgL_klassz00_7521));
											{	/* Unsafe/intext.scm 886 */
												long BgL_arg1742z00_7530;

												BgL_arg1742z00_7530 =
													(((long) 1) + VECTOR_LENGTH(BgL_fieldsz00_7525));
												{	/* Unsafe/intext.scm 776 */
													long BgL_siza7eza7_7531;

													BgL_siza7eza7_7531 =
														BGl_siza7ezd2ofzd2wordza7zz__intextz00
														(BgL_arg1742z00_7530);
													if ((BgL_siza7eza7_7531 == ((long) 0)))
														{	/* Unsafe/intext.scm 777 */
															BGl_z62z12printzd2markupza2zz__intextz00
																(BgL_ptrz00_7109, BgL_bufferz00_7108,
																(((long) 0)));
														}
													else
														{	/* Unsafe/intext.scm 777 */
															BGl_z62z12printzd2markupza2zz__intextz00
																(BgL_ptrz00_7109, BgL_bufferz00_7108,
																(BgL_siza7eza7_7531));
															BBOOL(BGl_z62printzd2wordzf2siza7eze5zz__intextz00
																(BgL_ptrz00_7109, BgL_bufferz00_7108,
																	BINT(BgL_arg1742z00_7530),
																	BgL_siza7eza7_7531));
														}
												}
											}
											BGl_z62printzd2itemzb0zz__intextz00
												(BgL_printzd2epairzd2_7107, BgL_printzd2pairzd2_7106,
												BgL_envz00_7096, BgL_printzd2classzd2_7105,
												BgL_printzd2cellzd2_7104, BgL_printzd2weakptrzd2_7103,
												BgL_printzd2vectorzd2_7102, BgL_printzd2hvectorzd2_7101,
												BgL_printzd2tvectorzd2_7100, BgL_printzd2customzd2_7099,
												BgL_refz00_7098, BgL_tablez00_7097, BgL_ptrz00_7109,
												BgL_bufferz00_7108, BgL_klassz00_7521);
											{
												long BgL_iz00_7533;

												BgL_iz00_7533 = ((long) 0);
											BgL_for1072z00_7532:
												if ((BgL_iz00_7533 < VECTOR_LENGTH(BgL_fieldsz00_7525)))
													{	/* Unsafe/intext.scm 888 */
														{	/* Unsafe/intext.scm 889 */
															obj_t BgL_fz00_7534;

															BgL_fz00_7534 =
																VECTOR_REF(BgL_fieldsz00_7525, BgL_iz00_7533);
															{	/* Unsafe/intext.scm 889 */
																obj_t BgL_ivz00_7535;

																BgL_ivz00_7535 =
																	BGl_classzd2fieldzd2infoz00zz__objectz00
																	(BgL_fz00_7534);
																{	/* Unsafe/intext.scm 890 */

																	{	/* Unsafe/intext.scm 892 */
																		obj_t BgL_g1074z00_7536;

																		if (PAIRP(BgL_ivz00_7535))
																			{	/* Unsafe/intext.scm 892 */
																				BgL_g1074z00_7536 =
																					BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																					(BGl_keyword3352z00zz__intextz00,
																					BgL_ivz00_7535);
																			}
																		else
																			{	/* Unsafe/intext.scm 892 */
																				BgL_g1074z00_7536 = BFALSE;
																			}
																		if (CBOOL(BgL_g1074z00_7536))
																			{	/* Unsafe/intext.scm 897 */
																				obj_t BgL_arg1745z00_7537;

																				{	/* Unsafe/intext.scm 897 */
																					bool_t BgL_test3630z00_9898;

																					{	/* Unsafe/intext.scm 897 */
																						obj_t BgL_tmpz00_9899;

																						BgL_tmpz00_9899 =
																							CDR(((obj_t) BgL_g1074z00_7536));
																						BgL_test3630z00_9898 =
																							PAIRP(BgL_tmpz00_9899);
																					}
																					if (BgL_test3630z00_9898)
																						{	/* Unsafe/intext.scm 898 */
																							obj_t BgL_pairz00_7538;

																							BgL_pairz00_7538 =
																								CDR(
																								((obj_t) BgL_g1074z00_7536));
																							BgL_arg1745z00_7537 =
																								CAR(BgL_pairz00_7538);
																						}
																					else
																						{	/* Unsafe/intext.scm 897 */
																							if (BGl_classzd2fieldzd2defaultzd2valuezf3z21zz__objectz00(BgL_fz00_7534))
																								{	/* Unsafe/intext.scm 899 */
																									BgL_arg1745z00_7537 =
																										BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																										(BgL_fz00_7534);
																								}
																							else
																								{	/* Unsafe/intext.scm 901 */
																									bool_t BgL_test3632z00_9909;

																									{	/* Unsafe/intext.scm 901 */
																										obj_t BgL_arg1757z00_7539;

																										BgL_arg1757z00_7539 =
																											BGl_classzd2fieldzd2typez00zz__objectz00
																											(BgL_fz00_7534);
																										BgL_test3632z00_9909 =
																											(BgL_arg1757z00_7539 ==
																											BGl_symbol3354z00zz__intextz00);
																									}
																									if (BgL_test3632z00_9909)
																										{	/* Unsafe/intext.scm 901 */
																											BgL_arg1745z00_7537 =
																												BFALSE;
																										}
																									else
																										{	/* Unsafe/intext.scm 905 */
																											obj_t BgL_arg1752z00_7540;
																											obj_t BgL_arg1754z00_7541;

																											{	/* Unsafe/intext.scm 905 */
																												obj_t
																													BgL_arg1755z00_7542;
																												BgL_arg1755z00_7542 =
																													BGl_classzd2fieldzd2typez00zz__objectz00
																													(BgL_fz00_7534);
																												{	/* Unsafe/intext.scm 903 */
																													obj_t
																														BgL_list1756z00_7543;
																													BgL_list1756z00_7543 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1755z00_7542,
																														BNIL);
																													BgL_arg1752z00_7540 =
																														BGl_formatz00zz__r4_output_6_10_3z00
																														(BGl_string3356z00zz__intextz00,
																														BgL_list1756z00_7543);
																												}
																											}
																											BgL_arg1754z00_7541 =
																												BGl_classzd2fieldzd2namez00zz__objectz00
																												(BgL_fz00_7534);
																											BgL_arg1745z00_7537 =
																												BGl_errorz00zz__errorz00
																												(BGl_string3288z00zz__intextz00,
																												BgL_arg1752z00_7540,
																												BgL_arg1754z00_7541);
																										}
																								}
																						}
																				}
																				BGl_z62printzd2itemzb0zz__intextz00
																					(BgL_printzd2epairzd2_7107,
																					BgL_printzd2pairzd2_7106,
																					BgL_envz00_7096,
																					BgL_printzd2classzd2_7105,
																					BgL_printzd2cellzd2_7104,
																					BgL_printzd2weakptrzd2_7103,
																					BgL_printzd2vectorzd2_7102,
																					BgL_printzd2hvectorzd2_7101,
																					BgL_printzd2tvectorzd2_7100,
																					BgL_printzd2customzd2_7099,
																					BgL_refz00_7098, BgL_tablez00_7097,
																					BgL_ptrz00_7109, BgL_bufferz00_7108,
																					BgL_arg1745z00_7537);
																			}
																		else
																			{	/* Unsafe/intext.scm 910 */
																				obj_t BgL_arg1760z00_7544;

																				{	/* Unsafe/intext.scm 910 */
																					obj_t BgL_fun1762z00_7545;

																					BgL_fun1762z00_7545 =
																						BGl_classzd2fieldzd2accessorz00zz__objectz00
																						(BgL_fz00_7534);
																					BgL_arg1760z00_7544 =
																						PROCEDURE_ENTRY(BgL_fun1762z00_7545)
																						(BgL_fun1762z00_7545,
																						BgL_itemz00_7519, BEOA);
																				}
																				BGl_z62printzd2itemzb0zz__intextz00
																					(BgL_printzd2epairzd2_7107,
																					BgL_printzd2pairzd2_7106,
																					BgL_envz00_7096,
																					BgL_printzd2classzd2_7105,
																					BgL_printzd2cellzd2_7104,
																					BgL_printzd2weakptrzd2_7103,
																					BgL_printzd2vectorzd2_7102,
																					BgL_printzd2hvectorzd2_7101,
																					BgL_printzd2tvectorzd2_7100,
																					BgL_printzd2customzd2_7099,
																					BgL_refz00_7098, BgL_tablez00_7097,
																					BgL_ptrz00_7109, BgL_bufferz00_7108,
																					BgL_arg1760z00_7544);
																			}
																	}
																}
															}
														}
														{
															long BgL_iz00_9924;

															BgL_iz00_9924 = (BgL_iz00_7533 + ((long) 1));
															BgL_iz00_7533 = BgL_iz00_9924;
															goto BgL_for1072z00_7532;
														}
													}
												else
													{	/* Unsafe/intext.scm 888 */
														((bool_t) 0);
													}
											}
											{	/* Unsafe/intext.scm 911 */
												long BgL_arg1764z00_7546;

												BgL_arg1764z00_7546 =
													BGl_classzd2hashzd2zz__objectz00(BgL_klassz00_7521);
												if ((BgL_arg1764z00_7546 < ((long) 0)))
													{	/* Unsafe/intext.scm 785 */
														BGl_z62checkzd2bufferz12za2zz__intextz00
															(BgL_bufferz00_7108, BgL_ptrz00_7109,
															BINT(((long) 1)));
														{	/* Unsafe/intext.scm 702 */
															obj_t BgL_stringz00_7547;
															long BgL_kz00_7548;

															BgL_stringz00_7547 = CELL_REF(BgL_bufferz00_7108);
															BgL_kz00_7548 =
																(long) CINT(CELL_REF(BgL_ptrz00_7109));
															STRING_SET(BgL_stringz00_7547, BgL_kz00_7548,
																((unsigned char) '-'));
														}
														{	/* Unsafe/intext.scm 703 */
															obj_t BgL_auxz00_7549;

															BgL_auxz00_7549 =
																ADDFX(BINT(((long) 1)),
																CELL_REF(BgL_ptrz00_7109));
															CELL_SET(BgL_ptrz00_7109, BgL_auxz00_7549);
														}
														return
															BGl_z62printzd2wordzb0zz__intextz00
															(BgL_ptrz00_7109, BgL_bufferz00_7108,
															NEG(BgL_arg1764z00_7546));
													}
												else
													{	/* Unsafe/intext.scm 785 */
														return
															BGl_z62printzd2wordzb0zz__intextz00
															(BgL_ptrz00_7109, BgL_bufferz00_7108,
															BgL_arg1764z00_7546);
													}
											}
										}
									}
								}
							}
						else
							{	/* Unsafe/intext.scm 875 */
								BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7108,
									BgL_ptrz00_7109, BINT(((long) 1)));
								{	/* Unsafe/intext.scm 702 */
									obj_t BgL_stringz00_7551;
									long BgL_kz00_7552;

									BgL_stringz00_7551 = CELL_REF(BgL_bufferz00_7108);
									BgL_kz00_7552 = (long) CINT(CELL_REF(BgL_ptrz00_7109));
									STRING_SET(BgL_stringz00_7551, BgL_kz00_7552,
										((unsigned char) 'X'));
								}
								{	/* Unsafe/intext.scm 703 */
									obj_t BgL_auxz00_7553;

									BgL_auxz00_7553 =
										ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7109));
									CELL_SET(BgL_ptrz00_7109, BgL_auxz00_7553);
								}
								BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7108,
									BgL_ptrz00_7109, BINT(((long) 1)));
								{	/* Unsafe/intext.scm 702 */
									obj_t BgL_stringz00_7554;
									long BgL_kz00_7555;

									BgL_stringz00_7554 = CELL_REF(BgL_bufferz00_7108);
									BgL_kz00_7555 = (long) CINT(CELL_REF(BgL_ptrz00_7109));
									STRING_SET(BgL_stringz00_7554, BgL_kz00_7555,
										((unsigned char) 'O'));
								}
								{	/* Unsafe/intext.scm 703 */
									obj_t BgL_auxz00_7556;

									BgL_auxz00_7556 =
										ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7109));
									CELL_SET(BgL_ptrz00_7109, BgL_auxz00_7556);
								}
								BGl_z62printzd2itemzb0zz__intextz00(BgL_printzd2epairzd2_7107,
									BgL_printzd2pairzd2_7106, BgL_envz00_7096,
									BgL_printzd2classzd2_7105, BgL_printzd2cellzd2_7104,
									BgL_printzd2weakptrzd2_7103, BgL_printzd2vectorzd2_7102,
									BgL_printzd2hvectorzd2_7101, BgL_printzd2tvectorzd2_7100,
									BgL_printzd2customzd2_7099, BgL_refz00_7098,
									BgL_tablez00_7097, BgL_ptrz00_7109, BgL_bufferz00_7108,
									BgL_vz00_7550);
								{	/* Unsafe/intext.scm 920 */
									long BgL_arg1766z00_7557;

									{	/* Unsafe/intext.scm 920 */
										obj_t BgL_arg1768z00_7558;

										{	/* Unsafe/intext.scm 920 */
											long BgL_arg2456z00_7559;

											{	/* Unsafe/intext.scm 920 */
												long BgL_arg2457z00_7560;

												{	/* Unsafe/intext.scm 920 */
													long BgL_res2785z00_7561;

													BgL_res2785z00_7561 =
														BGL_OBJECT_CLASS_NUM(
														((BgL_objectz00_bglt) BgL_itemz00_7110));
													BgL_arg2457z00_7560 = BgL_res2785z00_7561;
												}
												BgL_arg2456z00_7559 =
													(BgL_arg2457z00_7560 - OBJECT_TYPE);
											}
											BgL_arg1768z00_7558 =
												VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
												BgL_arg2456z00_7559);
										}
										BgL_arg1766z00_7557 =
											BGl_classzd2hashzd2zz__objectz00(BgL_arg1768z00_7558);
									}
									BgL_iz00_7512 = BgL_arg1766z00_7557;
									if ((BgL_iz00_7512 < ((long) 0)))
										{	/* Unsafe/intext.scm 785 */
											BGl_z62checkzd2bufferz12za2zz__intextz00
												(BgL_bufferz00_7108, BgL_ptrz00_7109, BINT(((long) 1)));
											{	/* Unsafe/intext.scm 702 */
												obj_t BgL_stringz00_7513;
												long BgL_kz00_7514;

												BgL_stringz00_7513 = CELL_REF(BgL_bufferz00_7108);
												BgL_kz00_7514 = (long) CINT(CELL_REF(BgL_ptrz00_7109));
												STRING_SET(BgL_stringz00_7513, BgL_kz00_7514,
													((unsigned char) '-'));
											}
											{	/* Unsafe/intext.scm 703 */
												obj_t BgL_auxz00_7515;

												BgL_auxz00_7515 =
													ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7109));
												CELL_SET(BgL_ptrz00_7109, BgL_auxz00_7515);
											}
											{	/* Unsafe/intext.scm 788 */
												long BgL_arg1688z00_7516;

												BgL_arg1688z00_7516 = NEG(BgL_iz00_7512);
												{	/* Unsafe/intext.scm 776 */
													long BgL_siza7eza7_7517;

													BgL_siza7eza7_7517 =
														BGl_siza7ezd2ofzd2wordza7zz__intextz00
														(BgL_arg1688z00_7516);
													if ((BgL_siza7eza7_7517 == ((long) 0)))
														{	/* Unsafe/intext.scm 777 */
															return
																BGl_z62z12printzd2markupza2zz__intextz00
																(BgL_ptrz00_7109, BgL_bufferz00_7108,
																(((long) 0)));
														}
													else
														{	/* Unsafe/intext.scm 777 */
															BGl_z62z12printzd2markupza2zz__intextz00
																(BgL_ptrz00_7109, BgL_bufferz00_7108,
																(BgL_siza7eza7_7517));
															return
																BBOOL
																(BGl_z62printzd2wordzf2siza7eze5zz__intextz00
																(BgL_ptrz00_7109, BgL_bufferz00_7108,
																	BINT(BgL_arg1688z00_7516),
																	BgL_siza7eza7_7517));
														}
												}
											}
										}
									else
										{	/* Unsafe/intext.scm 776 */
											long BgL_siza7eza7_7518;

											BgL_siza7eza7_7518 =
												BGl_siza7ezd2ofzd2wordza7zz__intextz00(BgL_iz00_7512);
											if ((BgL_siza7eza7_7518 == ((long) 0)))
												{	/* Unsafe/intext.scm 777 */
													return
														BGl_z62z12printzd2markupza2zz__intextz00
														(BgL_ptrz00_7109, BgL_bufferz00_7108, (((long) 0)));
												}
											else
												{	/* Unsafe/intext.scm 777 */
													BGl_z62z12printzd2markupza2zz__intextz00
														(BgL_ptrz00_7109, BgL_bufferz00_7108,
														(BgL_siza7eza7_7518));
													return
														BBOOL(BGl_z62printzd2wordzf2siza7eze5zz__intextz00
														(BgL_ptrz00_7109, BgL_bufferz00_7108,
															BINT(BgL_iz00_7512), BgL_siza7eza7_7518));
												}
										}
								}
							}
					}
				}
			}
		}

	}



/* &print-class */
	obj_t BGl_z62printzd2classzb0zz__intextz00(obj_t BgL_envz00_7117,
		obj_t BgL_itemz00_7131, obj_t BgL_markz00_7132)
	{
		{	/* Unsafe/intext.scm 868 */
			{	/* Unsafe/intext.scm 868 */
				obj_t BgL_tablez00_7118;
				obj_t BgL_refz00_7119;
				obj_t BgL_printzd2customzd2_7120;
				obj_t BgL_printzd2tvectorzd2_7121;
				obj_t BgL_printzd2hvectorzd2_7122;
				obj_t BgL_printzd2vectorzd2_7123;
				obj_t BgL_printzd2weakptrzd2_7124;
				obj_t BgL_printzd2cellzd2_7125;
				obj_t BgL_printzd2objectzd2_7126;
				obj_t BgL_printzd2pairzd2_7127;
				obj_t BgL_printzd2epairzd2_7128;
				obj_t BgL_bufferz00_7129;
				obj_t BgL_ptrz00_7130;

				BgL_tablez00_7118 =
					PROCEDURE_L_REF(BgL_envz00_7117, (int) (((long) 0)));
				BgL_refz00_7119 = PROCEDURE_L_REF(BgL_envz00_7117, (int) (((long) 1)));
				BgL_printzd2customzd2_7120 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7117, (int) (((long) 2))));
				BgL_printzd2tvectorzd2_7121 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7117, (int) (((long) 3))));
				BgL_printzd2hvectorzd2_7122 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7117, (int) (((long) 4))));
				BgL_printzd2vectorzd2_7123 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7117, (int) (((long) 5))));
				BgL_printzd2weakptrzd2_7124 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7117, (int) (((long) 6))));
				BgL_printzd2cellzd2_7125 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7117, (int) (((long) 7))));
				BgL_printzd2objectzd2_7126 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7117, (int) (((long) 8))));
				BgL_printzd2pairzd2_7127 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7117, (int) (((long) 9))));
				BgL_printzd2epairzd2_7128 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7117, (int) (((long) 10))));
				BgL_bufferz00_7129 =
					PROCEDURE_L_REF(BgL_envz00_7117, (int) (((long) 11)));
				BgL_ptrz00_7130 = PROCEDURE_L_REF(BgL_envz00_7117, (int) (((long) 12)));
				BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7129,
					BgL_ptrz00_7130, BINT(((long) 1)));
				{	/* Unsafe/intext.scm 702 */
					obj_t BgL_stringz00_7562;
					long BgL_kz00_7563;

					BgL_stringz00_7562 = CELL_REF(BgL_bufferz00_7129);
					BgL_kz00_7563 = (long) CINT(CELL_REF(BgL_ptrz00_7130));
					STRING_SET(BgL_stringz00_7562, BgL_kz00_7563, ((unsigned char) 'k'));
				}
				{	/* Unsafe/intext.scm 703 */
					obj_t BgL_auxz00_7564;

					BgL_auxz00_7564 = ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7130));
					CELL_SET(BgL_ptrz00_7130, BgL_auxz00_7564);
				}
				{	/* Unsafe/intext.scm 869 */
					obj_t BgL_arg1734z00_7565;

					{	/* Unsafe/intext.scm 869 */
						obj_t BgL_arg1736z00_7566;

						BgL_arg1736z00_7566 =
							BGl_classzd2namezd2zz__objectz00(BgL_itemz00_7131);
						{	/* Unsafe/intext.scm 869 */
							obj_t BgL_res2782z00_7567;

							BgL_res2782z00_7567 = SYMBOL_TO_STRING(BgL_arg1736z00_7566);
							BgL_arg1734z00_7565 = BgL_res2782z00_7567;
					}}
					BGl_z62printzd2itemzb0zz__intextz00(BgL_printzd2epairzd2_7128,
						BgL_printzd2pairzd2_7127, BgL_printzd2objectzd2_7126,
						BgL_envz00_7117, BgL_printzd2cellzd2_7125,
						BgL_printzd2weakptrzd2_7124, BgL_printzd2vectorzd2_7123,
						BgL_printzd2hvectorzd2_7122, BgL_printzd2tvectorzd2_7121,
						BgL_printzd2customzd2_7120, BgL_refz00_7119, BgL_tablez00_7118,
						BgL_ptrz00_7130, BgL_bufferz00_7129, BgL_arg1734z00_7565);
				}
				{	/* Unsafe/intext.scm 870 */
					obj_t BgL_arg1737z00_7568;

					BgL_arg1737z00_7568 =
						STRUCT_REF(((obj_t) BgL_markz00_7132), (int) (((long) 1)));
					return
						BGl_z62printzd2itemzb0zz__intextz00(BgL_printzd2epairzd2_7128,
						BgL_printzd2pairzd2_7127, BgL_printzd2objectzd2_7126,
						BgL_envz00_7117, BgL_printzd2cellzd2_7125,
						BgL_printzd2weakptrzd2_7124, BgL_printzd2vectorzd2_7123,
						BgL_printzd2hvectorzd2_7122, BgL_printzd2tvectorzd2_7121,
						BgL_printzd2customzd2_7120, BgL_refz00_7119, BgL_tablez00_7118,
						BgL_ptrz00_7130, BgL_bufferz00_7129, BgL_arg1737z00_7568);
				}
			}
		}

	}



/* &<@anonymous:1896> */
	obj_t BGl_z62zc3z04anonymousza31896ze3ze5zz__intextz00(obj_t BgL_envz00_7134,
		obj_t BgL_itemz00_7137, obj_t BgL_markz00_7138)
	{
		{	/* Unsafe/intext.scm 1078 */
			{	/* Unsafe/intext.scm 1079 */
				obj_t BgL_bufferz00_7135;
				obj_t BgL_ptrz00_7136;

				BgL_bufferz00_7135 =
					PROCEDURE_L_REF(BgL_envz00_7134, (int) (((long) 0)));
				BgL_ptrz00_7136 = PROCEDURE_L_REF(BgL_envz00_7134, (int) (((long) 1)));
				{	/* Unsafe/intext.scm 1079 */
					obj_t BgL_arg1897z00_7569;

					BgL_arg1897z00_7569 =
						STRUCT_REF(((obj_t) BgL_markz00_7138), (int) (((long) 1)));
					BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7135,
						BgL_ptrz00_7136, BINT(((long) 1)));
					{	/* Unsafe/intext.scm 702 */
						obj_t BgL_stringz00_7570;
						long BgL_kz00_7571;

						BgL_stringz00_7570 = CELL_REF(BgL_bufferz00_7135);
						BgL_kz00_7571 = (long) CINT(CELL_REF(BgL_ptrz00_7136));
						STRING_SET(BgL_stringz00_7570, BgL_kz00_7571,
							((unsigned char) 'U'));
					}
					{	/* Unsafe/intext.scm 703 */
						obj_t BgL_auxz00_7572;

						BgL_auxz00_7572 =
							ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7136));
						CELL_SET(BgL_ptrz00_7136, BgL_auxz00_7572);
					}
					{	/* Unsafe/intext.scm 794 */
						long BgL_arg1691z00_7573;

						BgL_arg1691z00_7573 = STRING_LENGTH(((obj_t) BgL_arg1897z00_7569));
						return
							BGl_z62z12printzd2charsza2zz__intextz00(BgL_ptrz00_7136,
							BgL_bufferz00_7135, BgL_arg1897z00_7569, BgL_arg1691z00_7573);
					}
				}
			}
		}

	}



/* &print-cell */
	obj_t BGl_z62printzd2cellzb0zz__intextz00(obj_t BgL_envz00_7140,
		obj_t BgL_itemz00_7154, obj_t BgL_markz00_7155)
	{
		{	/* Unsafe/intext.scm 932 */
			{	/* Unsafe/intext.scm 932 */
				obj_t BgL_tablez00_7141;
				obj_t BgL_refz00_7142;
				obj_t BgL_printzd2customzd2_7143;
				obj_t BgL_printzd2tvectorzd2_7144;
				obj_t BgL_printzd2hvectorzd2_7145;
				obj_t BgL_printzd2vectorzd2_7146;
				obj_t BgL_printzd2weakptrzd2_7147;
				obj_t BgL_printzd2classzd2_7148;
				obj_t BgL_printzd2objectzd2_7149;
				obj_t BgL_printzd2pairzd2_7150;
				obj_t BgL_printzd2epairzd2_7151;
				obj_t BgL_bufferz00_7152;
				obj_t BgL_ptrz00_7153;

				BgL_tablez00_7141 =
					PROCEDURE_L_REF(BgL_envz00_7140, (int) (((long) 0)));
				BgL_refz00_7142 = PROCEDURE_L_REF(BgL_envz00_7140, (int) (((long) 1)));
				BgL_printzd2customzd2_7143 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7140, (int) (((long) 2))));
				BgL_printzd2tvectorzd2_7144 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7140, (int) (((long) 3))));
				BgL_printzd2hvectorzd2_7145 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7140, (int) (((long) 4))));
				BgL_printzd2vectorzd2_7146 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7140, (int) (((long) 5))));
				BgL_printzd2weakptrzd2_7147 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7140, (int) (((long) 6))));
				BgL_printzd2classzd2_7148 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7140, (int) (((long) 7))));
				BgL_printzd2objectzd2_7149 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7140, (int) (((long) 8))));
				BgL_printzd2pairzd2_7150 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7140, (int) (((long) 9))));
				BgL_printzd2epairzd2_7151 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7140, (int) (((long) 10))));
				BgL_bufferz00_7152 =
					PROCEDURE_L_REF(BgL_envz00_7140, (int) (((long) 11)));
				BgL_ptrz00_7153 = PROCEDURE_L_REF(BgL_envz00_7140, (int) (((long) 12)));
				BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7152,
					BgL_ptrz00_7153, BINT(((long) 1)));
				{	/* Unsafe/intext.scm 702 */
					obj_t BgL_stringz00_7574;
					long BgL_kz00_7575;

					BgL_stringz00_7574 = CELL_REF(BgL_bufferz00_7152);
					BgL_kz00_7575 = (long) CINT(CELL_REF(BgL_ptrz00_7153));
					STRING_SET(BgL_stringz00_7574, BgL_kz00_7575, ((unsigned char) '!'));
				}
				{	/* Unsafe/intext.scm 703 */
					obj_t BgL_auxz00_7576;

					BgL_auxz00_7576 = ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7153));
					CELL_SET(BgL_ptrz00_7153, BgL_auxz00_7576);
				}
				{	/* Unsafe/intext.scm 933 */
					obj_t BgL_arg1776z00_7577;

					BgL_arg1776z00_7577 = CELL_REF(((obj_t) BgL_itemz00_7154));
					return
						BGl_z62printzd2itemzb0zz__intextz00(BgL_printzd2epairzd2_7151,
						BgL_printzd2pairzd2_7150, BgL_printzd2objectzd2_7149,
						BgL_printzd2classzd2_7148, BgL_envz00_7140,
						BgL_printzd2weakptrzd2_7147, BgL_printzd2vectorzd2_7146,
						BgL_printzd2hvectorzd2_7145, BgL_printzd2tvectorzd2_7144,
						BgL_printzd2customzd2_7143, BgL_refz00_7142, BgL_tablez00_7141,
						BgL_ptrz00_7153, BgL_bufferz00_7152, BgL_arg1776z00_7577);
				}
			}
		}

	}



/* &print-weakptr */
	obj_t BGl_z62printzd2weakptrzb0zz__intextz00(obj_t BgL_envz00_7157,
		obj_t BgL_oz00_7171, obj_t BgL_markz00_7172)
	{
		{	/* Unsafe/intext.scm 937 */
			{	/* Unsafe/intext.scm 937 */
				obj_t BgL_tablez00_7158;
				obj_t BgL_refz00_7159;
				obj_t BgL_printzd2customzd2_7160;
				obj_t BgL_printzd2tvectorzd2_7161;
				obj_t BgL_printzd2hvectorzd2_7162;
				obj_t BgL_printzd2vectorzd2_7163;
				obj_t BgL_printzd2cellzd2_7164;
				obj_t BgL_printzd2classzd2_7165;
				obj_t BgL_printzd2objectzd2_7166;
				obj_t BgL_printzd2pairzd2_7167;
				obj_t BgL_printzd2epairzd2_7168;
				obj_t BgL_bufferz00_7169;
				obj_t BgL_ptrz00_7170;

				BgL_tablez00_7158 =
					PROCEDURE_L_REF(BgL_envz00_7157, (int) (((long) 0)));
				BgL_refz00_7159 = PROCEDURE_L_REF(BgL_envz00_7157, (int) (((long) 1)));
				BgL_printzd2customzd2_7160 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7157, (int) (((long) 2))));
				BgL_printzd2tvectorzd2_7161 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7157, (int) (((long) 3))));
				BgL_printzd2hvectorzd2_7162 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7157, (int) (((long) 4))));
				BgL_printzd2vectorzd2_7163 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7157, (int) (((long) 5))));
				BgL_printzd2cellzd2_7164 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7157, (int) (((long) 6))));
				BgL_printzd2classzd2_7165 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7157, (int) (((long) 7))));
				BgL_printzd2objectzd2_7166 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7157, (int) (((long) 8))));
				BgL_printzd2pairzd2_7167 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7157, (int) (((long) 9))));
				BgL_printzd2epairzd2_7168 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7157, (int) (((long) 10))));
				BgL_bufferz00_7169 =
					PROCEDURE_L_REF(BgL_envz00_7157, (int) (((long) 11)));
				BgL_ptrz00_7170 = PROCEDURE_L_REF(BgL_envz00_7157, (int) (((long) 12)));
				BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7169,
					BgL_ptrz00_7170, BINT(((long) 1)));
				{	/* Unsafe/intext.scm 702 */
					obj_t BgL_stringz00_7578;
					long BgL_kz00_7579;

					BgL_stringz00_7578 = CELL_REF(BgL_bufferz00_7169);
					BgL_kz00_7579 = (long) CINT(CELL_REF(BgL_ptrz00_7170));
					STRING_SET(BgL_stringz00_7578, BgL_kz00_7579, ((unsigned char) 'w'));
				}
				{	/* Unsafe/intext.scm 703 */
					obj_t BgL_auxz00_7580;

					BgL_auxz00_7580 = ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7170));
					CELL_SET(BgL_ptrz00_7170, BgL_auxz00_7580);
				}
				{	/* Unsafe/intext.scm 938 */
					obj_t BgL_arg1778z00_7581;

					BgL_arg1778z00_7581 = weakptr_data(((obj_t) BgL_oz00_7171));
					return
						BGl_z62printzd2itemzb0zz__intextz00(BgL_printzd2epairzd2_7168,
						BgL_printzd2pairzd2_7167, BgL_printzd2objectzd2_7166,
						BgL_printzd2classzd2_7165, BgL_printzd2cellzd2_7164,
						BgL_envz00_7157, BgL_printzd2vectorzd2_7163,
						BgL_printzd2hvectorzd2_7162, BgL_printzd2tvectorzd2_7161,
						BgL_printzd2customzd2_7160, BgL_refz00_7159, BgL_tablez00_7158,
						BgL_ptrz00_7170, BgL_bufferz00_7169, BgL_arg1778z00_7581);
				}
			}
		}

	}



/* &print-vector */
	obj_t BGl_z62printzd2vectorzb0zz__intextz00(obj_t BgL_envz00_7174,
		obj_t BgL_itemz00_7188, obj_t BgL_markz00_7189)
	{
		{	/* Unsafe/intext.scm 950 */
			{	/* Unsafe/intext.scm 942 */
				obj_t BgL_tablez00_7175;
				obj_t BgL_refz00_7176;
				obj_t BgL_printzd2customzd2_7177;
				obj_t BgL_printzd2tvectorzd2_7178;
				obj_t BgL_printzd2hvectorzd2_7179;
				obj_t BgL_printzd2weakptrzd2_7180;
				obj_t BgL_printzd2cellzd2_7181;
				obj_t BgL_printzd2classzd2_7182;
				obj_t BgL_printzd2objectzd2_7183;
				obj_t BgL_printzd2pairzd2_7184;
				obj_t BgL_printzd2epairzd2_7185;
				obj_t BgL_bufferz00_7186;
				obj_t BgL_ptrz00_7187;

				BgL_tablez00_7175 =
					PROCEDURE_L_REF(BgL_envz00_7174, (int) (((long) 0)));
				BgL_refz00_7176 = PROCEDURE_L_REF(BgL_envz00_7174, (int) (((long) 1)));
				BgL_printzd2customzd2_7177 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7174, (int) (((long) 2))));
				BgL_printzd2tvectorzd2_7178 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7174, (int) (((long) 3))));
				BgL_printzd2hvectorzd2_7179 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7174, (int) (((long) 4))));
				BgL_printzd2weakptrzd2_7180 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7174, (int) (((long) 5))));
				BgL_printzd2cellzd2_7181 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7174, (int) (((long) 6))));
				BgL_printzd2classzd2_7182 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7174, (int) (((long) 7))));
				BgL_printzd2objectzd2_7183 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7174, (int) (((long) 8))));
				BgL_printzd2pairzd2_7184 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7174, (int) (((long) 9))));
				BgL_printzd2epairzd2_7185 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7174, (int) (((long) 10))));
				BgL_bufferz00_7186 =
					PROCEDURE_L_REF(BgL_envz00_7174, (int) (((long) 11)));
				BgL_ptrz00_7187 = PROCEDURE_L_REF(BgL_envz00_7174, (int) (((long) 12)));
				{	/* Unsafe/intext.scm 942 */
					bool_t BgL_tmpz00_10172;

					{	/* Unsafe/intext.scm 942 */
						int BgL_tagz00_7582;

						{	/* Unsafe/intext.scm 942 */
							int BgL_res2819z00_7583;

							{	/* Unsafe/intext.scm 942 */
								obj_t BgL_tmpz00_10173;

								BgL_tmpz00_10173 = ((obj_t) BgL_itemz00_7188);
								BgL_res2819z00_7583 = VECTOR_TAG(BgL_tmpz00_10173);
							}
							BgL_tagz00_7582 = BgL_res2819z00_7583;
						}
						if (((long) (BgL_tagz00_7582) > ((long) 0)))
							{	/* Unsafe/intext.scm 944 */
								BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7186,
									BgL_ptrz00_7187, BINT(((long) 1)));
								{	/* Unsafe/intext.scm 702 */
									obj_t BgL_stringz00_7584;
									long BgL_kz00_7585;

									BgL_stringz00_7584 = CELL_REF(BgL_bufferz00_7186);
									BgL_kz00_7585 = (long) CINT(CELL_REF(BgL_ptrz00_7187));
									STRING_SET(BgL_stringz00_7584, BgL_kz00_7585,
										((unsigned char) 't'));
								}
								{	/* Unsafe/intext.scm 703 */
									obj_t BgL_auxz00_7586;

									BgL_auxz00_7586 =
										ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7187));
									CELL_SET(BgL_ptrz00_7187, BgL_auxz00_7586);
								}
								{	/* Unsafe/intext.scm 947 */
									long BgL_iz00_7587;

									BgL_iz00_7587 = (long) (BgL_tagz00_7582);
									if ((BgL_iz00_7587 < ((long) 0)))
										{	/* Unsafe/intext.scm 785 */
											BGl_z62checkzd2bufferz12za2zz__intextz00
												(BgL_bufferz00_7186, BgL_ptrz00_7187, BINT(((long) 1)));
											{	/* Unsafe/intext.scm 702 */
												obj_t BgL_stringz00_7588;
												long BgL_kz00_7589;

												BgL_stringz00_7588 = CELL_REF(BgL_bufferz00_7186);
												BgL_kz00_7589 = (long) CINT(CELL_REF(BgL_ptrz00_7187));
												STRING_SET(BgL_stringz00_7588, BgL_kz00_7589,
													((unsigned char) '-'));
											}
											{	/* Unsafe/intext.scm 703 */
												obj_t BgL_auxz00_7590;

												BgL_auxz00_7590 =
													ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7187));
												CELL_SET(BgL_ptrz00_7187, BgL_auxz00_7590);
											}
											BGl_z62printzd2wordzb0zz__intextz00(BgL_ptrz00_7187,
												BgL_bufferz00_7186, NEG(BgL_iz00_7587));
										}
									else
										{	/* Unsafe/intext.scm 785 */
											BGl_z62printzd2wordzb0zz__intextz00(BgL_ptrz00_7187,
												BgL_bufferz00_7186, BgL_iz00_7587);
										}
								}
							}
						else
							{	/* Unsafe/intext.scm 944 */
								BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7186,
									BgL_ptrz00_7187, BINT(((long) 1)));
								{	/* Unsafe/intext.scm 702 */
									obj_t BgL_stringz00_7591;
									long BgL_kz00_7592;

									BgL_stringz00_7591 = CELL_REF(BgL_bufferz00_7186);
									BgL_kz00_7592 = (long) CINT(CELL_REF(BgL_ptrz00_7187));
									STRING_SET(BgL_stringz00_7591, BgL_kz00_7592,
										((unsigned char) '['));
								}
								{	/* Unsafe/intext.scm 703 */
									obj_t BgL_auxz00_7593;

									BgL_auxz00_7593 =
										ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7187));
									CELL_SET(BgL_ptrz00_7187, BgL_auxz00_7593);
							}}
						{	/* Unsafe/intext.scm 776 */
							long BgL_siza7eza7_7594;

							BgL_siza7eza7_7594 =
								BGl_siza7ezd2ofzd2wordza7zz__intextz00(VECTOR_LENGTH(
									((obj_t) BgL_itemz00_7188)));
							if ((BgL_siza7eza7_7594 == ((long) 0)))
								{	/* Unsafe/intext.scm 777 */
									BGl_z62z12printzd2markupza2zz__intextz00(BgL_ptrz00_7187,
										BgL_bufferz00_7186, (((long) 0)));
								}
							else
								{	/* Unsafe/intext.scm 777 */
									BGl_z62z12printzd2markupza2zz__intextz00(BgL_ptrz00_7187,
										BgL_bufferz00_7186, (BgL_siza7eza7_7594));
									BBOOL(BGl_z62printzd2wordzf2siza7eze5zz__intextz00
										(BgL_ptrz00_7187, BgL_bufferz00_7186,
											BINT(VECTOR_LENGTH(((obj_t) BgL_itemz00_7188))),
											BgL_siza7eza7_7594));
								}
						}
						{
							long BgL_iz00_7596;

							BgL_iz00_7596 = ((long) 0);
						BgL_for1078z00_7595:
							if ((BgL_iz00_7596 < VECTOR_LENGTH(((obj_t) BgL_itemz00_7188))))
								{	/* Unsafe/intext.scm 950 */
									{	/* Unsafe/intext.scm 950 */
										obj_t BgL_arg1783z00_7597;

										BgL_arg1783z00_7597 =
											VECTOR_REF(((obj_t) BgL_itemz00_7188), BgL_iz00_7596);
										BGl_z62printzd2itemzb0zz__intextz00
											(BgL_printzd2epairzd2_7185, BgL_printzd2pairzd2_7184,
											BgL_printzd2objectzd2_7183, BgL_printzd2classzd2_7182,
											BgL_printzd2cellzd2_7181, BgL_printzd2weakptrzd2_7180,
											BgL_envz00_7174, BgL_printzd2hvectorzd2_7179,
											BgL_printzd2tvectorzd2_7178, BgL_printzd2customzd2_7177,
											BgL_refz00_7176, BgL_tablez00_7175, BgL_ptrz00_7187,
											BgL_bufferz00_7186, BgL_arg1783z00_7597);
									}
									{
										long BgL_iz00_10224;

										BgL_iz00_10224 = (BgL_iz00_7596 + ((long) 1));
										BgL_iz00_7596 = BgL_iz00_10224;
										goto BgL_for1078z00_7595;
									}
								}
							else
								{	/* Unsafe/intext.scm 950 */
									BgL_tmpz00_10172 = ((bool_t) 0);
								}
						}
					}
					return BBOOL(BgL_tmpz00_10172);
				}
			}
		}

	}



/* &print-hvector */
	obj_t BGl_z62printzd2hvectorzb0zz__intextz00(obj_t BgL_envz00_7193,
		obj_t BgL_itemz00_7196, obj_t BgL_markz00_7197)
	{
		{	/* Unsafe/intext.scm 989 */
			{	/* Unsafe/intext.scm 954 */
				obj_t BgL_bufferz00_7194;
				obj_t BgL_ptrz00_7195;

				BgL_bufferz00_7194 =
					PROCEDURE_L_REF(BgL_envz00_7193, (int) (((long) 0)));
				BgL_ptrz00_7195 = PROCEDURE_L_REF(BgL_envz00_7193, (int) (((long) 1)));
				{
					uint64_t BgL_mz00_7610;
					long BgL_siza7eza7_7611;
					int64_t BgL_mz00_7600;
					long BgL_siza7eza7_7601;

					{	/* Unsafe/intext.scm 954 */
						obj_t BgL_tagz00_7620;

						BgL_tagz00_7620 =
							BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(BgL_itemz00_7196);
						{	/* Unsafe/intext.scm 955 */
							obj_t BgL_bsiza7eza7_7621;
							obj_t BgL_refz00_7622;
							obj_t BgL__z00_7623;
							obj_t BgL__z00_7624;

							{	/* Unsafe/intext.scm 956 */
								int BgL_tmpz00_10232;

								BgL_tmpz00_10232 = (int) (((long) 1));
								BgL_bsiza7eza7_7621 = BGL_MVALUES_VAL(BgL_tmpz00_10232);
							}
							{	/* Unsafe/intext.scm 956 */
								int BgL_tmpz00_10235;

								BgL_tmpz00_10235 = (int) (((long) 2));
								BgL_refz00_7622 = BGL_MVALUES_VAL(BgL_tmpz00_10235);
							}
							{	/* Unsafe/intext.scm 956 */
								int BgL_tmpz00_10238;

								BgL_tmpz00_10238 = (int) (((long) 3));
								BgL__z00_7623 = BGL_MVALUES_VAL(BgL_tmpz00_10238);
							}
							{	/* Unsafe/intext.scm 956 */
								int BgL_tmpz00_10241;

								BgL_tmpz00_10241 = (int) (((long) 4));
								BgL__z00_7624 = BGL_MVALUES_VAL(BgL_tmpz00_10241);
							}
							{	/* Unsafe/intext.scm 956 */
								long BgL_lenz00_7625;

								BgL_lenz00_7625 = BGL_HVECTOR_LENGTH(BgL_itemz00_7196);
								BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7194,
									BgL_ptrz00_7195, BINT(((long) 1)));
								{	/* Unsafe/intext.scm 702 */
									obj_t BgL_stringz00_7626;
									long BgL_kz00_7627;

									BgL_stringz00_7626 = CELL_REF(BgL_bufferz00_7194);
									BgL_kz00_7627 = (long) CINT(CELL_REF(BgL_ptrz00_7195));
									STRING_SET(BgL_stringz00_7626, BgL_kz00_7627,
										((unsigned char) 'h'));
								}
								{	/* Unsafe/intext.scm 703 */
									obj_t BgL_auxz00_7628;

									BgL_auxz00_7628 =
										ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7195));
									CELL_SET(BgL_ptrz00_7195, BgL_auxz00_7628);
								}
								{	/* Unsafe/intext.scm 776 */
									long BgL_siza7eza7_7629;

									BgL_siza7eza7_7629 =
										BGl_siza7ezd2ofzd2wordza7zz__intextz00(BgL_lenz00_7625);
									if ((BgL_siza7eza7_7629 == ((long) 0)))
										{	/* Unsafe/intext.scm 777 */
											BGl_z62z12printzd2markupza2zz__intextz00(BgL_ptrz00_7195,
												BgL_bufferz00_7194, (((long) 0)));
										}
									else
										{	/* Unsafe/intext.scm 777 */
											BGl_z62z12printzd2markupza2zz__intextz00(BgL_ptrz00_7195,
												BgL_bufferz00_7194, (BgL_siza7eza7_7629));
											BBOOL(BGl_z62printzd2wordzf2siza7eze5zz__intextz00
												(BgL_ptrz00_7195, BgL_bufferz00_7194,
													BINT(BgL_lenz00_7625), BgL_siza7eza7_7629));
										}
								}
								{	/* Unsafe/intext.scm 776 */
									long BgL_siza7eza7_7630;

									BgL_siza7eza7_7630 =
										BGl_siza7ezd2ofzd2wordza7zz__intextz00(
										(long) CINT(BgL_bsiza7eza7_7621));
									if ((BgL_siza7eza7_7630 == ((long) 0)))
										{	/* Unsafe/intext.scm 777 */
											BGl_z62z12printzd2markupza2zz__intextz00(BgL_ptrz00_7195,
												BgL_bufferz00_7194, (((long) 0)));
										}
									else
										{	/* Unsafe/intext.scm 777 */
											BGl_z62z12printzd2markupza2zz__intextz00(BgL_ptrz00_7195,
												BgL_bufferz00_7194, (BgL_siza7eza7_7630));
											BBOOL(BGl_z62printzd2wordzf2siza7eze5zz__intextz00
												(BgL_ptrz00_7195, BgL_bufferz00_7194,
													BgL_bsiza7eza7_7621, BgL_siza7eza7_7630));
										}
								}
								{	/* Unsafe/intext.scm 960 */
									obj_t BgL_arg1786z00_7631;

									{	/* Unsafe/intext.scm 960 */
										obj_t BgL_res2838z00_7632;

										BgL_res2838z00_7632 =
											SYMBOL_TO_STRING(((obj_t) BgL_tagz00_7620));
										BgL_arg1786z00_7631 = BgL_res2838z00_7632;
									}
									BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7194,
										BgL_ptrz00_7195, BINT(((long) 1)));
									{	/* Unsafe/intext.scm 702 */
										obj_t BgL_stringz00_7633;
										long BgL_kz00_7634;

										BgL_stringz00_7633 = CELL_REF(BgL_bufferz00_7194);
										BgL_kz00_7634 = (long) CINT(CELL_REF(BgL_ptrz00_7195));
										STRING_SET(BgL_stringz00_7633, BgL_kz00_7634,
											((unsigned char) '"'));
									}
									{	/* Unsafe/intext.scm 703 */
										obj_t BgL_auxz00_7635;

										BgL_auxz00_7635 =
											ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7195));
										CELL_SET(BgL_ptrz00_7195, BgL_auxz00_7635);
									}
									BGl_z62z12printzd2charsza2zz__intextz00(BgL_ptrz00_7195,
										BgL_bufferz00_7194, BgL_arg1786z00_7631,
										STRING_LENGTH(BgL_arg1786z00_7631));
								}
								if ((BgL_tagz00_7620 == BGl_symbol3317z00zz__intextz00))
									{
										long BgL_iz00_7637;

										{	/* Unsafe/intext.scm 963 */
											bool_t BgL_tmpz00_10283;

											BgL_iz00_7637 = ((long) 0);
										BgL_for1079z00_7636:
											if ((BgL_iz00_7637 < BgL_lenz00_7625))
												{	/* Unsafe/intext.scm 963 */
													{	/* Unsafe/intext.scm 964 */
														long BgL_arg1790z00_7638;

														{	/* Unsafe/intext.scm 964 */
															int8_t BgL_arg1791z00_7639;

															BgL_arg1791z00_7639 =
																BGL_S8VREF(BgL_itemz00_7196, BgL_iz00_7637);
															{	/* Unsafe/intext.scm 964 */
																long BgL_res2844z00_7640;

																{	/* Unsafe/intext.scm 964 */
																	long BgL_arg2345z00_7641;

																	BgL_arg2345z00_7641 =
																		(long) (BgL_arg1791z00_7639);
																	{	/* Unsafe/intext.scm 964 */
																		long BgL_res2843z00_7642;

																		BgL_res2843z00_7642 =
																			(long) (BgL_arg2345z00_7641);
																		BgL_res2844z00_7640 = BgL_res2843z00_7642;
																}}
																BgL_arg1790z00_7638 = BgL_res2844z00_7640;
														}}
														{	/* Unsafe/intext.scm 735 */
															long BgL_g1065z00_7643;

															BgL_g1065z00_7643 = (((long) 1) - ((long) 1));
															{
																long BgL_iz00_7645;

																BgL_iz00_7645 = BgL_g1065z00_7643;
															BgL_loopz00_7644:
																if ((BgL_iz00_7645 >= ((long) 0)))
																	{	/* Unsafe/intext.scm 737 */
																		long BgL_dz00_7646;

																		BgL_dz00_7646 =
																			(
																			(BgL_arg1790z00_7638 >>
																				(int) (
																					(((long) 8) *
																						BgL_iz00_7645))) & ((long) 255));
																		BGl_z62z12printzd2markupza2zz__intextz00
																			(BgL_ptrz00_7195, BgL_bufferz00_7194,
																			(BgL_dz00_7646));
																		{
																			long BgL_iz00_10298;

																			BgL_iz00_10298 =
																				(BgL_iz00_7645 - ((long) 1));
																			BgL_iz00_7645 = BgL_iz00_10298;
																			goto BgL_loopz00_7644;
																		}
																	}
																else
																	{	/* Unsafe/intext.scm 736 */
																		((bool_t) 0);
																	}
															}
														}
													}
													{
														long BgL_iz00_10300;

														BgL_iz00_10300 = (BgL_iz00_7637 + ((long) 1));
														BgL_iz00_7637 = BgL_iz00_10300;
														goto BgL_for1079z00_7636;
													}
												}
											else
												{	/* Unsafe/intext.scm 963 */
													BgL_tmpz00_10283 = ((bool_t) 0);
												}
											return BBOOL(BgL_tmpz00_10283);
										}
									}
								else
									{	/* Unsafe/intext.scm 961 */
										if ((BgL_tagz00_7620 == BGl_symbol3319z00zz__intextz00))
											{
												long BgL_iz00_7648;

												{	/* Unsafe/intext.scm 966 */
													bool_t BgL_tmpz00_10305;

													BgL_iz00_7648 = ((long) 0);
												BgL_for1080z00_7647:
													if ((BgL_iz00_7648 < BgL_lenz00_7625))
														{	/* Unsafe/intext.scm 966 */
															{	/* Unsafe/intext.scm 967 */
																long BgL_arg1796z00_7649;

																{	/* Unsafe/intext.scm 967 */
																	uint8_t BgL_arg1797z00_7650;

																	BgL_arg1797z00_7650 =
																		BGL_U8VREF(BgL_itemz00_7196, BgL_iz00_7648);
																	{	/* Unsafe/intext.scm 967 */
																		long BgL_res2849z00_7651;

																		{	/* Unsafe/intext.scm 967 */
																			long BgL_arg2343z00_7652;

																			BgL_arg2343z00_7652 =
																				(long) (BgL_arg1797z00_7650);
																			{	/* Unsafe/intext.scm 967 */
																				long BgL_res2848z00_7653;

																				BgL_res2848z00_7653 =
																					(long) (BgL_arg2343z00_7652);
																				BgL_res2849z00_7651 =
																					BgL_res2848z00_7653;
																		}}
																		BgL_arg1796z00_7649 = BgL_res2849z00_7651;
																}}
																{	/* Unsafe/intext.scm 735 */
																	long BgL_g1065z00_7654;

																	BgL_g1065z00_7654 = (((long) 1) - ((long) 1));
																	{
																		long BgL_iz00_7656;

																		BgL_iz00_7656 = BgL_g1065z00_7654;
																	BgL_loopz00_7655:
																		if ((BgL_iz00_7656 >= ((long) 0)))
																			{	/* Unsafe/intext.scm 737 */
																				long BgL_dz00_7657;

																				BgL_dz00_7657 =
																					(
																					(BgL_arg1796z00_7649 >>
																						(int) (
																							(((long) 8) *
																								BgL_iz00_7656))) & ((long)
																						255));
																				BGl_z62z12printzd2markupza2zz__intextz00
																					(BgL_ptrz00_7195, BgL_bufferz00_7194,
																					(BgL_dz00_7657));
																				{
																					long BgL_iz00_10320;

																					BgL_iz00_10320 =
																						(BgL_iz00_7656 - ((long) 1));
																					BgL_iz00_7656 = BgL_iz00_10320;
																					goto BgL_loopz00_7655;
																				}
																			}
																		else
																			{	/* Unsafe/intext.scm 736 */
																				((bool_t) 0);
																			}
																	}
																}
															}
															{
																long BgL_iz00_10322;

																BgL_iz00_10322 = (BgL_iz00_7648 + ((long) 1));
																BgL_iz00_7648 = BgL_iz00_10322;
																goto BgL_for1080z00_7647;
															}
														}
													else
														{	/* Unsafe/intext.scm 966 */
															BgL_tmpz00_10305 = ((bool_t) 0);
														}
													return BBOOL(BgL_tmpz00_10305);
												}
											}
										else
											{	/* Unsafe/intext.scm 961 */
												if ((BgL_tagz00_7620 == BGl_symbol3321z00zz__intextz00))
													{
														long BgL_iz00_7659;

														{	/* Unsafe/intext.scm 969 */
															bool_t BgL_tmpz00_10327;

															BgL_iz00_7659 = ((long) 0);
														BgL_for1081z00_7658:
															if ((BgL_iz00_7659 < BgL_lenz00_7625))
																{	/* Unsafe/intext.scm 969 */
																	{	/* Unsafe/intext.scm 970 */
																		long BgL_arg1803z00_7660;

																		{	/* Unsafe/intext.scm 970 */
																			int16_t BgL_arg1805z00_7661;

																			BgL_arg1805z00_7661 =
																				BGL_S16VREF(BgL_itemz00_7196,
																				BgL_iz00_7659);
																			{	/* Unsafe/intext.scm 970 */
																				long BgL_res2854z00_7662;

																				{	/* Unsafe/intext.scm 970 */
																					long BgL_arg2342z00_7663;

																					BgL_arg2342z00_7663 =
																						(long) (BgL_arg1805z00_7661);
																					{	/* Unsafe/intext.scm 970 */
																						long BgL_res2853z00_7664;

																						BgL_res2853z00_7664 =
																							(long) (BgL_arg2342z00_7663);
																						BgL_res2854z00_7662 =
																							BgL_res2853z00_7664;
																				}}
																				BgL_arg1803z00_7660 =
																					BgL_res2854z00_7662;
																		}}
																		{	/* Unsafe/intext.scm 735 */
																			long BgL_g1065z00_7665;

																			BgL_g1065z00_7665 =
																				(((long) 2) - ((long) 1));
																			{
																				long BgL_iz00_7667;

																				BgL_iz00_7667 = BgL_g1065z00_7665;
																			BgL_loopz00_7666:
																				if ((BgL_iz00_7667 >= ((long) 0)))
																					{	/* Unsafe/intext.scm 737 */
																						long BgL_dz00_7668;

																						BgL_dz00_7668 =
																							(
																							(BgL_arg1803z00_7660 >>
																								(int) (
																									(((long) 8) *
																										BgL_iz00_7667))) & ((long)
																								255));
																						BGl_z62z12printzd2markupza2zz__intextz00
																							(BgL_ptrz00_7195,
																							BgL_bufferz00_7194,
																							(BgL_dz00_7668));
																						{
																							long BgL_iz00_10342;

																							BgL_iz00_10342 =
																								(BgL_iz00_7667 - ((long) 1));
																							BgL_iz00_7667 = BgL_iz00_10342;
																							goto BgL_loopz00_7666;
																						}
																					}
																				else
																					{	/* Unsafe/intext.scm 736 */
																						((bool_t) 0);
																					}
																			}
																		}
																	}
																	{
																		long BgL_iz00_10344;

																		BgL_iz00_10344 =
																			(BgL_iz00_7659 + ((long) 1));
																		BgL_iz00_7659 = BgL_iz00_10344;
																		goto BgL_for1081z00_7658;
																	}
																}
															else
																{	/* Unsafe/intext.scm 969 */
																	BgL_tmpz00_10327 = ((bool_t) 0);
																}
															return BBOOL(BgL_tmpz00_10327);
														}
													}
												else
													{	/* Unsafe/intext.scm 961 */
														if (
															(BgL_tagz00_7620 ==
																BGl_symbol3323z00zz__intextz00))
															{
																long BgL_iz00_7670;

																{	/* Unsafe/intext.scm 972 */
																	bool_t BgL_tmpz00_10349;

																	BgL_iz00_7670 = ((long) 0);
																BgL_for1082z00_7669:
																	if ((BgL_iz00_7670 < BgL_lenz00_7625))
																		{	/* Unsafe/intext.scm 972 */
																			{	/* Unsafe/intext.scm 973 */
																				long BgL_arg1810z00_7671;

																				{	/* Unsafe/intext.scm 973 */
																					uint16_t BgL_arg1811z00_7672;

																					BgL_arg1811z00_7672 =
																						BGL_U16VREF(BgL_itemz00_7196,
																						BgL_iz00_7670);
																					{	/* Unsafe/intext.scm 973 */
																						long BgL_res2859z00_7673;

																						{	/* Unsafe/intext.scm 973 */
																							long BgL_arg2341z00_7674;

																							BgL_arg2341z00_7674 =
																								(long) (BgL_arg1811z00_7672);
																							{	/* Unsafe/intext.scm 973 */
																								long BgL_res2858z00_7675;

																								BgL_res2858z00_7675 =
																									(long) (BgL_arg2341z00_7674);
																								BgL_res2859z00_7673 =
																									BgL_res2858z00_7675;
																						}}
																						BgL_arg1810z00_7671 =
																							BgL_res2859z00_7673;
																				}}
																				{	/* Unsafe/intext.scm 735 */
																					long BgL_g1065z00_7676;

																					BgL_g1065z00_7676 =
																						(((long) 2) - ((long) 1));
																					{
																						long BgL_iz00_7678;

																						BgL_iz00_7678 = BgL_g1065z00_7676;
																					BgL_loopz00_7677:
																						if ((BgL_iz00_7678 >= ((long) 0)))
																							{	/* Unsafe/intext.scm 737 */
																								long BgL_dz00_7679;

																								BgL_dz00_7679 =
																									(
																									(BgL_arg1810z00_7671 >>
																										(int) (
																											(((long) 8) *
																												BgL_iz00_7678))) &
																									((long) 255));
																								BGl_z62z12printzd2markupza2zz__intextz00
																									(BgL_ptrz00_7195,
																									BgL_bufferz00_7194,
																									(BgL_dz00_7679));
																								{
																									long BgL_iz00_10364;

																									BgL_iz00_10364 =
																										(BgL_iz00_7678 -
																										((long) 1));
																									BgL_iz00_7678 =
																										BgL_iz00_10364;
																									goto BgL_loopz00_7677;
																								}
																							}
																						else
																							{	/* Unsafe/intext.scm 736 */
																								((bool_t) 0);
																							}
																					}
																				}
																			}
																			{
																				long BgL_iz00_10366;

																				BgL_iz00_10366 =
																					(BgL_iz00_7670 + ((long) 1));
																				BgL_iz00_7670 = BgL_iz00_10366;
																				goto BgL_for1082z00_7669;
																			}
																		}
																	else
																		{	/* Unsafe/intext.scm 972 */
																			BgL_tmpz00_10349 = ((bool_t) 0);
																		}
																	return BBOOL(BgL_tmpz00_10349);
																}
															}
														else
															{	/* Unsafe/intext.scm 961 */
																if (
																	(BgL_tagz00_7620 ==
																		BGl_symbol3325z00zz__intextz00))
																	{
																		long BgL_iz00_7681;

																		{	/* Unsafe/intext.scm 975 */
																			bool_t BgL_tmpz00_10371;

																			BgL_iz00_7681 = ((long) 0);
																		BgL_for1083z00_7680:
																			if ((BgL_iz00_7681 < BgL_lenz00_7625))
																				{	/* Unsafe/intext.scm 975 */
																					{	/* Unsafe/intext.scm 976 */
																						long BgL_arg1816z00_7682;

																						{	/* Unsafe/intext.scm 976 */
																							int32_t BgL_arg1817z00_7683;

																							BgL_arg1817z00_7683 =
																								BGL_S32VREF(BgL_itemz00_7196,
																								BgL_iz00_7681);
																							{	/* Unsafe/intext.scm 976 */
																								long BgL_res2864z00_7684;

																								{	/* Unsafe/intext.scm 976 */
																									long BgL_arg2340z00_7685;

																									BgL_arg2340z00_7685 =
																										(long)
																										(BgL_arg1817z00_7683);
																									{	/* Unsafe/intext.scm 976 */
																										long BgL_res2863z00_7686;

																										BgL_res2863z00_7686 =
																											(long)
																											(BgL_arg2340z00_7685);
																										BgL_res2864z00_7684 =
																											BgL_res2863z00_7686;
																								}}
																								BgL_arg1816z00_7682 =
																									BgL_res2864z00_7684;
																						}}
																						{	/* Unsafe/intext.scm 735 */
																							long BgL_g1065z00_7687;

																							BgL_g1065z00_7687 =
																								(((long) 4) - ((long) 1));
																							{
																								long BgL_iz00_7689;

																								BgL_iz00_7689 =
																									BgL_g1065z00_7687;
																							BgL_loopz00_7688:
																								if (
																									(BgL_iz00_7689 >= ((long) 0)))
																									{	/* Unsafe/intext.scm 737 */
																										long BgL_dz00_7690;

																										BgL_dz00_7690 =
																											(
																											(BgL_arg1816z00_7682 >>
																												(int) (
																													(((long) 8) *
																														BgL_iz00_7689))) &
																											((long) 255));
																										BGl_z62z12printzd2markupza2zz__intextz00
																											(BgL_ptrz00_7195,
																											BgL_bufferz00_7194,
																											(BgL_dz00_7690));
																										{
																											long BgL_iz00_10386;

																											BgL_iz00_10386 =
																												(BgL_iz00_7689 -
																												((long) 1));
																											BgL_iz00_7689 =
																												BgL_iz00_10386;
																											goto BgL_loopz00_7688;
																										}
																									}
																								else
																									{	/* Unsafe/intext.scm 736 */
																										((bool_t) 0);
																									}
																							}
																						}
																					}
																					{
																						long BgL_iz00_10388;

																						BgL_iz00_10388 =
																							(BgL_iz00_7681 + ((long) 1));
																						BgL_iz00_7681 = BgL_iz00_10388;
																						goto BgL_for1083z00_7680;
																					}
																				}
																			else
																				{	/* Unsafe/intext.scm 975 */
																					BgL_tmpz00_10371 = ((bool_t) 0);
																				}
																			return BBOOL(BgL_tmpz00_10371);
																		}
																	}
																else
																	{	/* Unsafe/intext.scm 961 */
																		if (
																			(BgL_tagz00_7620 ==
																				BGl_symbol3327z00zz__intextz00))
																			{
																				long BgL_iz00_7692;

																				{	/* Unsafe/intext.scm 978 */
																					bool_t BgL_tmpz00_10393;

																					BgL_iz00_7692 = ((long) 0);
																				BgL_for1084z00_7691:
																					if ((BgL_iz00_7692 < BgL_lenz00_7625))
																						{	/* Unsafe/intext.scm 978 */
																							{	/* Unsafe/intext.scm 979 */
																								long BgL_arg1822z00_7693;

																								{	/* Unsafe/intext.scm 979 */
																									uint32_t BgL_arg1823z00_7694;

																									BgL_arg1823z00_7694 =
																										BGL_U32VREF
																										(BgL_itemz00_7196,
																										BgL_iz00_7692);
																									{	/* Unsafe/intext.scm 979 */
																										long BgL_res2868z00_7695;

																										BgL_res2868z00_7695 =
																											(long)
																											(BgL_arg1823z00_7694);
																										BgL_arg1822z00_7693 =
																											BgL_res2868z00_7695;
																								}}
																								{	/* Unsafe/intext.scm 735 */
																									long BgL_g1065z00_7696;

																									BgL_g1065z00_7696 =
																										(((long) 4) - ((long) 1));
																									{
																										long BgL_iz00_7698;

																										BgL_iz00_7698 =
																											BgL_g1065z00_7696;
																									BgL_loopz00_7697:
																										if (
																											(BgL_iz00_7698 >=
																												((long) 0)))
																											{	/* Unsafe/intext.scm 737 */
																												long BgL_dz00_7699;

																												BgL_dz00_7699 =
																													(
																													(BgL_arg1822z00_7693
																														>> (int) ((((long)
																																	8) *
																																BgL_iz00_7698)))
																													& ((long) 255));
																												BGl_z62z12printzd2markupza2zz__intextz00
																													(BgL_ptrz00_7195,
																													BgL_bufferz00_7194,
																													(BgL_dz00_7699));
																												{
																													long BgL_iz00_10407;

																													BgL_iz00_10407 =
																														(BgL_iz00_7698 -
																														((long) 1));
																													BgL_iz00_7698 =
																														BgL_iz00_10407;
																													goto BgL_loopz00_7697;
																												}
																											}
																										else
																											{	/* Unsafe/intext.scm 736 */
																												((bool_t) 0);
																											}
																									}
																								}
																							}
																							{
																								long BgL_iz00_10409;

																								BgL_iz00_10409 =
																									(BgL_iz00_7692 + ((long) 1));
																								BgL_iz00_7692 = BgL_iz00_10409;
																								goto BgL_for1084z00_7691;
																							}
																						}
																					else
																						{	/* Unsafe/intext.scm 978 */
																							BgL_tmpz00_10393 = ((bool_t) 0);
																						}
																					return BBOOL(BgL_tmpz00_10393);
																				}
																			}
																		else
																			{	/* Unsafe/intext.scm 961 */
																				if (
																					(BgL_tagz00_7620 ==
																						BGl_symbol3329z00zz__intextz00))
																					{
																						long BgL_iz00_7701;

																						{	/* Unsafe/intext.scm 981 */
																							bool_t BgL_tmpz00_10414;

																							BgL_iz00_7701 = ((long) 0);
																						BgL_for1085z00_7700:
																							if (
																								(BgL_iz00_7701 <
																									BgL_lenz00_7625))
																								{	/* Unsafe/intext.scm 981 */
																									{	/* Unsafe/intext.scm 982 */
																										int64_t BgL_arg1828z00_7702;

																										BgL_arg1828z00_7702 =
																											BGL_S64VREF
																											(BgL_itemz00_7196,
																											BgL_iz00_7701);
																										BgL_mz00_7600 =
																											BgL_arg1828z00_7702;
																										BgL_siza7eza7_7601 =
																											((long) 8);
																										{	/* Unsafe/intext.scm 759 */
																											long BgL_g1068z00_7602;

																											BgL_g1068z00_7602 =
																												(BgL_siza7eza7_7601 -
																												((long) 1));
																											{
																												long BgL_iz00_7604;

																												BgL_iz00_7604 =
																													BgL_g1068z00_7602;
																											BgL_loopz00_7603:
																												if (
																													(BgL_iz00_7604 >=
																														((long) 0)))
																													{	/* Unsafe/intext.scm 761 */
																														long BgL_dz00_7605;

																														{	/* Unsafe/intext.scm 762 */
																															int64_t
																																BgL_arg1663z00_7606;
																															BgL_arg1663z00_7606
																																=
																																((BgL_mz00_7600
																																	>>
																																	(int) (((
																																				(long)
																																				8) *
																																			BgL_iz00_7604)))
																																&
																																(int64_t)
																																(255));
																															{	/* Unsafe/intext.scm 761 */
																																long
																																	BgL_res2720z00_7607;
																																{	/* Unsafe/intext.scm 761 */
																																	long
																																		BgL_arg2339z00_7608;
																																	BgL_arg2339z00_7608
																																		=
																																		(long)
																																		(BgL_arg1663z00_7606);
																																	{	/* Unsafe/intext.scm 761 */
																																		long
																																			BgL_res2719z00_7609;
																																		BgL_res2719z00_7609
																																			=
																																			(long)
																																			(BgL_arg2339z00_7608);
																																		BgL_res2720z00_7607
																																			=
																																			BgL_res2719z00_7609;
																																}}
																																BgL_dz00_7605 =
																																	BgL_res2720z00_7607;
																														}}
																														BGl_z62z12printzd2markupza2zz__intextz00
																															(BgL_ptrz00_7195,
																															BgL_bufferz00_7194,
																															(BgL_dz00_7605));
																														{
																															long
																																BgL_iz00_10429;
																															BgL_iz00_10429 =
																																(BgL_iz00_7604 -
																																((long) 1));
																															BgL_iz00_7604 =
																																BgL_iz00_10429;
																															goto
																																BgL_loopz00_7603;
																														}
																													}
																												else
																													{	/* Unsafe/intext.scm 760 */
																														((bool_t) 0);
																													}
																											}
																										}
																									}
																									{
																										long BgL_iz00_10431;

																										BgL_iz00_10431 =
																											(BgL_iz00_7701 +
																											((long) 1));
																										BgL_iz00_7701 =
																											BgL_iz00_10431;
																										goto BgL_for1085z00_7700;
																									}
																								}
																							else
																								{	/* Unsafe/intext.scm 981 */
																									BgL_tmpz00_10414 =
																										((bool_t) 0);
																								}
																							return BBOOL(BgL_tmpz00_10414);
																						}
																					}
																				else
																					{	/* Unsafe/intext.scm 961 */
																						if (
																							(BgL_tagz00_7620 ==
																								BGl_symbol3331z00zz__intextz00))
																							{
																								long BgL_iz00_7704;

																								{	/* Unsafe/intext.scm 984 */
																									bool_t BgL_tmpz00_10436;

																									BgL_iz00_7704 = ((long) 0);
																								BgL_for1086z00_7703:
																									if (
																										(BgL_iz00_7704 <
																											BgL_lenz00_7625))
																										{	/* Unsafe/intext.scm 984 */
																											{	/* Unsafe/intext.scm 985 */
																												uint64_t
																													BgL_arg1833z00_7705;
																												BgL_arg1833z00_7705 =
																													BGL_U64VREF
																													(BgL_itemz00_7196,
																													BgL_iz00_7704);
																												BgL_mz00_7610 =
																													BgL_arg1833z00_7705;
																												BgL_siza7eza7_7611 =
																													((long) 8);
																												{	/* Unsafe/intext.scm 767 */
																													long
																														BgL_g1069z00_7612;
																													BgL_g1069z00_7612 =
																														(BgL_siza7eza7_7611
																														- ((long) 1));
																													{
																														long BgL_iz00_7614;

																														BgL_iz00_7614 =
																															BgL_g1069z00_7612;
																													BgL_loopz00_7613:
																														if (
																															(BgL_iz00_7614 >=
																																((long) 0)))
																															{	/* Unsafe/intext.scm 769 */
																																long
																																	BgL_dz00_7615;
																																{	/* Unsafe/intext.scm 770 */
																																	uint64_t
																																		BgL_arg1672z00_7616;
																																	BgL_arg1672z00_7616
																																		=
																																		(
																																		(BgL_mz00_7610
																																			>>
																																			(int) (((
																																						(long)
																																						8) *
																																					BgL_iz00_7614)))
																																		&
																																		(uint64_t)
																																		(255));
																																	{	/* Unsafe/intext.scm 769 */
																																		long
																																			BgL_res2729z00_7617;
																																		{	/* Unsafe/intext.scm 769 */
																																			long
																																				BgL_arg2338z00_7618;
																																			BgL_arg2338z00_7618
																																				=
																																				(long)
																																				(BgL_arg1672z00_7616);
																																			{	/* Unsafe/intext.scm 769 */
																																				long
																																					BgL_res2728z00_7619;
																																				BgL_res2728z00_7619
																																					=
																																					(long)
																																					(BgL_arg2338z00_7618);
																																				BgL_res2729z00_7617
																																					=
																																					BgL_res2728z00_7619;
																																		}}
																																		BgL_dz00_7615
																																			=
																																			BgL_res2729z00_7617;
																																}}
																																BGl_z62z12printzd2markupza2zz__intextz00
																																	(BgL_ptrz00_7195,
																																	BgL_bufferz00_7194,
																																	(BgL_dz00_7615));
																																{
																																	long
																																		BgL_iz00_10451;
																																	BgL_iz00_10451
																																		=
																																		(BgL_iz00_7614
																																		-
																																		((long) 1));
																																	BgL_iz00_7614
																																		=
																																		BgL_iz00_10451;
																																	goto
																																		BgL_loopz00_7613;
																																}
																															}
																														else
																															{	/* Unsafe/intext.scm 768 */
																																((bool_t) 0);
																															}
																													}
																												}
																											}
																											{
																												long BgL_iz00_10453;

																												BgL_iz00_10453 =
																													(BgL_iz00_7704 +
																													((long) 1));
																												BgL_iz00_7704 =
																													BgL_iz00_10453;
																												goto
																													BgL_for1086z00_7703;
																											}
																										}
																									else
																										{	/* Unsafe/intext.scm 984 */
																											BgL_tmpz00_10436 =
																												((bool_t) 0);
																										}
																									return
																										BBOOL(BgL_tmpz00_10436);
																								}
																							}
																						else
																							{	/* Unsafe/intext.scm 961 */
																								bool_t BgL_test3667z00_10456;

																								{	/* Unsafe/intext.scm 961 */
																									bool_t
																										BgL__ortest_1087z00_7706;
																									BgL__ortest_1087z00_7706 =
																										(BgL_tagz00_7620 ==
																										BGl_symbol3333z00zz__intextz00);
																									if (BgL__ortest_1087z00_7706)
																										{	/* Unsafe/intext.scm 961 */
																											BgL_test3667z00_10456 =
																												BgL__ortest_1087z00_7706;
																										}
																									else
																										{	/* Unsafe/intext.scm 961 */
																											BgL_test3667z00_10456 =
																												(BgL_tagz00_7620 ==
																												BGl_symbol3335z00zz__intextz00);
																										}
																								}
																								if (BgL_test3667z00_10456)
																									{
																										long BgL_iz00_7708;

																										{	/* Unsafe/intext.scm 987 */
																											bool_t BgL_tmpz00_10460;

																											BgL_iz00_7708 =
																												((long) 0);
																										BgL_for1088z00_7707:
																											if (
																												(BgL_iz00_7708 <
																													BgL_lenz00_7625))
																												{	/* Unsafe/intext.scm 987 */
																													{	/* Unsafe/intext.scm 988 */
																														obj_t BgL_sz00_7709;

																														{	/* Unsafe/intext.scm 988 */
																															obj_t
																																BgL_arg1841z00_7710;
																															BgL_arg1841z00_7710
																																=
																																PROCEDURE_ENTRY
																																(BgL_refz00_7622)
																																(BgL_refz00_7622,
																																BgL_itemz00_7196,
																																BINT
																																(BgL_iz00_7708),
																																BEOA);
																															BgL_sz00_7709 =
																																bgl_real_to_string
																																(REAL_TO_DOUBLE
																																(BgL_arg1841z00_7710));
																														}
																														{	/* Unsafe/intext.scm 989 */
																															long
																																BgL_arg1840z00_7711;
																															BgL_arg1840z00_7711
																																=
																																STRING_LENGTH
																																(BgL_sz00_7709);
																															BGl_z62printzd2wordzb0zz__intextz00
																																(BgL_ptrz00_7195,
																																BgL_bufferz00_7194,
																																BgL_arg1840z00_7711);
																															BGl_z62checkzd2bufferz12za2zz__intextz00
																																(BgL_bufferz00_7194,
																																BgL_ptrz00_7195,
																																BINT
																																(BgL_arg1840z00_7711));
																															{	/* Unsafe/intext.scm 709 */
																																obj_t
																																	BgL_s2z00_7712;
																																long
																																	BgL_o2z00_7713;
																																BgL_s2z00_7712 =
																																	CELL_REF
																																	(BgL_bufferz00_7194);
																																BgL_o2z00_7713 =
																																	(long)
																																	CINT(CELL_REF
																																	(BgL_ptrz00_7195));
																																blit_string
																																	(BgL_sz00_7709,
																																	((long) 0),
																																	BgL_s2z00_7712,
																																	BgL_o2z00_7713,
																																	BgL_arg1840z00_7711);
																															}
																															{	/* Unsafe/intext.scm 710 */
																																obj_t
																																	BgL_auxz00_7714;
																																BgL_auxz00_7714
																																	=
																																	ADDFX(CELL_REF
																																	(BgL_ptrz00_7195),
																																	BINT
																																	(BgL_arg1840z00_7711));
																																CELL_SET
																																	(BgL_ptrz00_7195,
																																	BgL_auxz00_7714);
																													}}}
																													{
																														long BgL_iz00_10479;

																														BgL_iz00_10479 =
																															(BgL_iz00_7708 +
																															((long) 1));
																														BgL_iz00_7708 =
																															BgL_iz00_10479;
																														goto
																															BgL_for1088z00_7707;
																													}
																												}
																											else
																												{	/* Unsafe/intext.scm 987 */
																													BgL_tmpz00_10460 =
																														((bool_t) 0);
																												}
																											return
																												BBOOL(BgL_tmpz00_10460);
																										}
																									}
																								else
																									{	/* Unsafe/intext.scm 961 */
																										return BUNSPEC;
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



/* &print-tvector */
	obj_t BGl_z62printzd2tvectorzb0zz__intextz00(obj_t BgL_envz00_7201,
		obj_t BgL_itemz00_7215, obj_t BgL_markz00_7216)
	{
		{	/* Unsafe/intext.scm 996 */
			{	/* Unsafe/intext.scm 993 */
				obj_t BgL_tablez00_7202;
				obj_t BgL_refz00_7203;
				obj_t BgL_printzd2customzd2_7204;
				obj_t BgL_printzd2hvectorzd2_7205;
				obj_t BgL_printzd2vectorzd2_7206;
				obj_t BgL_printzd2weakptrzd2_7207;
				obj_t BgL_printzd2cellzd2_7208;
				obj_t BgL_printzd2classzd2_7209;
				obj_t BgL_printzd2objectzd2_7210;
				obj_t BgL_printzd2pairzd2_7211;
				obj_t BgL_printzd2epairzd2_7212;
				obj_t BgL_bufferz00_7213;
				obj_t BgL_ptrz00_7214;

				BgL_tablez00_7202 =
					PROCEDURE_L_REF(BgL_envz00_7201, (int) (((long) 0)));
				BgL_refz00_7203 = PROCEDURE_L_REF(BgL_envz00_7201, (int) (((long) 1)));
				BgL_printzd2customzd2_7204 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7201, (int) (((long) 2))));
				BgL_printzd2hvectorzd2_7205 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7201, (int) (((long) 3))));
				BgL_printzd2vectorzd2_7206 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7201, (int) (((long) 4))));
				BgL_printzd2weakptrzd2_7207 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7201, (int) (((long) 5))));
				BgL_printzd2cellzd2_7208 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7201, (int) (((long) 6))));
				BgL_printzd2classzd2_7209 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7201, (int) (((long) 7))));
				BgL_printzd2objectzd2_7210 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7201, (int) (((long) 8))));
				BgL_printzd2pairzd2_7211 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7201, (int) (((long) 9))));
				BgL_printzd2epairzd2_7212 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7201, (int) (((long) 10))));
				BgL_bufferz00_7213 =
					PROCEDURE_L_REF(BgL_envz00_7201, (int) (((long) 11)));
				BgL_ptrz00_7214 = PROCEDURE_L_REF(BgL_envz00_7201, (int) (((long) 12)));
				{	/* Unsafe/intext.scm 993 */
					obj_t BgL_vz00_7715;

					BgL_vz00_7715 =
						STRUCT_REF(((obj_t) BgL_itemz00_7215), (int) (((long) 1)));
					BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7213,
						BgL_ptrz00_7214, BINT(((long) 1)));
					{	/* Unsafe/intext.scm 702 */
						obj_t BgL_stringz00_7716;
						long BgL_kz00_7717;

						BgL_stringz00_7716 = CELL_REF(BgL_bufferz00_7213);
						BgL_kz00_7717 = (long) CINT(CELL_REF(BgL_ptrz00_7214));
						STRING_SET(BgL_stringz00_7716, BgL_kz00_7717,
							((unsigned char) 'V'));
					}
					{	/* Unsafe/intext.scm 703 */
						obj_t BgL_auxz00_7718;

						BgL_auxz00_7718 =
							ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7214));
						CELL_SET(BgL_ptrz00_7214, BgL_auxz00_7718);
					}
					BGl_z62printzd2itemzb0zz__intextz00(BgL_printzd2epairzd2_7212,
						BgL_printzd2pairzd2_7211, BgL_printzd2objectzd2_7210,
						BgL_printzd2classzd2_7209, BgL_printzd2cellzd2_7208,
						BgL_printzd2weakptrzd2_7207, BgL_printzd2vectorzd2_7206,
						BgL_printzd2hvectorzd2_7205, BgL_envz00_7201,
						BgL_printzd2customzd2_7204, BgL_refz00_7203, BgL_tablez00_7202,
						BgL_ptrz00_7214, BgL_bufferz00_7213,
						BGl_tvectorzd2idzd2zz__tvectorz00(BgL_itemz00_7215));
					return BGl_z62printzd2itemzb0zz__intextz00(BgL_printzd2epairzd2_7212,
						BgL_printzd2pairzd2_7211, BgL_printzd2objectzd2_7210,
						BgL_printzd2classzd2_7209, BgL_printzd2cellzd2_7208,
						BgL_printzd2weakptrzd2_7207, BgL_printzd2vectorzd2_7206,
						BgL_printzd2hvectorzd2_7205, BgL_envz00_7201,
						BgL_printzd2customzd2_7204, BgL_refz00_7203, BgL_tablez00_7202,
						BgL_ptrz00_7214, BgL_bufferz00_7213, BgL_vz00_7715);
				}
			}
		}

	}



/* &print-custom */
	obj_t BGl_z62printzd2customzb0zz__intextz00(obj_t BgL_envz00_7218,
		obj_t BgL_itemz00_7221, obj_t BgL_markz00_7222)
	{
		{	/* Unsafe/intext.scm 1000 */
			{	/* Unsafe/intext.scm 1000 */
				obj_t BgL_bufferz00_7219;
				obj_t BgL_ptrz00_7220;

				BgL_bufferz00_7219 =
					PROCEDURE_L_REF(BgL_envz00_7218, (int) (((long) 0)));
				BgL_ptrz00_7220 = PROCEDURE_L_REF(BgL_envz00_7218, (int) (((long) 1)));
				BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7219,
					BgL_ptrz00_7220, BINT(((long) 1)));
				{	/* Unsafe/intext.scm 702 */
					obj_t BgL_stringz00_7719;
					long BgL_kz00_7720;

					BgL_stringz00_7719 = CELL_REF(BgL_bufferz00_7219);
					BgL_kz00_7720 = (long) CINT(CELL_REF(BgL_ptrz00_7220));
					STRING_SET(BgL_stringz00_7719, BgL_kz00_7720, ((unsigned char) '+'));
				}
				{	/* Unsafe/intext.scm 703 */
					obj_t BgL_auxz00_7721;

					BgL_auxz00_7721 = ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7220));
					CELL_SET(BgL_ptrz00_7220, BgL_auxz00_7721);
				}
				{	/* Unsafe/intext.scm 1001 */
					char *BgL_identz00_7722;

					{	/* Unsafe/intext.scm 1001 */
						char *BgL_res2882z00_7723;

						BgL_res2882z00_7723 = CUSTOM_IDENTIFIER(((obj_t) BgL_itemz00_7221));
						BgL_identz00_7722 = BgL_res2882z00_7723;
					}
					{	/* Unsafe/intext.scm 1001 */

						{	/* Unsafe/intext.scm 1002 */
							long BgL_arg1847z00_7724;

							BgL_arg1847z00_7724 =
								STRING_LENGTH(string_to_bstring(BgL_identz00_7722));
							BGl_z62printzd2wordzb0zz__intextz00(BgL_ptrz00_7220,
								BgL_bufferz00_7219, BgL_arg1847z00_7724);
							BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7219,
								BgL_ptrz00_7220, BINT(BgL_arg1847z00_7724));
							{	/* Unsafe/intext.scm 709 */
								obj_t BgL_s1z00_7725;
								obj_t BgL_s2z00_7726;
								long BgL_o2z00_7727;

								BgL_s1z00_7725 = string_to_bstring(BgL_identz00_7722);
								BgL_s2z00_7726 = CELL_REF(BgL_bufferz00_7219);
								BgL_o2z00_7727 = (long) CINT(CELL_REF(BgL_ptrz00_7220));
								blit_string(BgL_s1z00_7725, ((long) 0), BgL_s2z00_7726,
									BgL_o2z00_7727, BgL_arg1847z00_7724);
							}
							{	/* Unsafe/intext.scm 710 */
								obj_t BgL_auxz00_7728;

								BgL_auxz00_7728 =
									ADDFX(CELL_REF(BgL_ptrz00_7220), BINT(BgL_arg1847z00_7724));
								CELL_SET(BgL_ptrz00_7220, BgL_auxz00_7728);
						}}
						{	/* Unsafe/intext.scm 1003 */
							obj_t BgL_sz00_7729;

							BgL_sz00_7729 =
								STRUCT_REF(((obj_t) BgL_markz00_7222), (int) (((long) 1)));
							{	/* Unsafe/intext.scm 1004 */
								long BgL_arg1848z00_7730;

								BgL_arg1848z00_7730 = STRING_LENGTH(((obj_t) BgL_sz00_7729));
								BGl_z62printzd2wordzb0zz__intextz00(BgL_ptrz00_7220,
									BgL_bufferz00_7219, BgL_arg1848z00_7730);
								BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7219,
									BgL_ptrz00_7220, BINT(BgL_arg1848z00_7730));
								{	/* Unsafe/intext.scm 709 */
									obj_t BgL_s2z00_7731;
									long BgL_o2z00_7732;

									BgL_s2z00_7731 = CELL_REF(BgL_bufferz00_7219);
									BgL_o2z00_7732 = (long) CINT(CELL_REF(BgL_ptrz00_7220));
									blit_string(
										((obj_t) BgL_sz00_7729), ((long) 0), BgL_s2z00_7731,
										BgL_o2z00_7732, BgL_arg1848z00_7730);
								}
								{	/* Unsafe/intext.scm 710 */
									obj_t BgL_auxz00_7733;

									BgL_auxz00_7733 =
										ADDFX(CELL_REF(BgL_ptrz00_7220), BINT(BgL_arg1848z00_7730));
									return CELL_SET(BgL_ptrz00_7220, BgL_auxz00_7733);
								}
							}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1919> */
	obj_t BGl_z62zc3z04anonymousza31919ze3ze5zz__intextz00(obj_t BgL_envz00_7226,
		obj_t BgL_iz00_7241, obj_t BgL_mz00_7242)
	{
		{	/* Unsafe/intext.scm 1109 */
			{	/* Unsafe/intext.scm 1008 */
				obj_t BgL_tablez00_7227;
				obj_t BgL_refz00_7228;
				obj_t BgL_printzd2customzd2_7229;
				obj_t BgL_printzd2tvectorzd2_7230;
				obj_t BgL_printzd2hvectorzd2_7231;
				obj_t BgL_printzd2vectorzd2_7232;
				obj_t BgL_printzd2weakptrzd2_7233;
				obj_t BgL_printzd2cellzd2_7234;
				obj_t BgL_printzd2classzd2_7235;
				obj_t BgL_printzd2objectzd2_7236;
				obj_t BgL_printzd2pairzd2_7237;
				obj_t BgL_printzd2epairzd2_7238;
				obj_t BgL_bufferz00_7239;
				obj_t BgL_ptrz00_7240;

				BgL_tablez00_7227 =
					PROCEDURE_L_REF(BgL_envz00_7226, (int) (((long) 0)));
				BgL_refz00_7228 = PROCEDURE_L_REF(BgL_envz00_7226, (int) (((long) 1)));
				BgL_printzd2customzd2_7229 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7226, (int) (((long) 2))));
				BgL_printzd2tvectorzd2_7230 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7226, (int) (((long) 3))));
				BgL_printzd2hvectorzd2_7231 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7226, (int) (((long) 4))));
				BgL_printzd2vectorzd2_7232 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7226, (int) (((long) 5))));
				BgL_printzd2weakptrzd2_7233 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7226, (int) (((long) 6))));
				BgL_printzd2cellzd2_7234 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7226, (int) (((long) 7))));
				BgL_printzd2classzd2_7235 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7226, (int) (((long) 8))));
				BgL_printzd2objectzd2_7236 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7226, (int) (((long) 9))));
				BgL_printzd2pairzd2_7237 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7226, (int) (((long) 10))));
				BgL_printzd2epairzd2_7238 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7226, (int) (((long) 11))));
				BgL_bufferz00_7239 =
					PROCEDURE_L_REF(BgL_envz00_7226, (int) (((long) 12)));
				BgL_ptrz00_7240 = PROCEDURE_L_REF(BgL_envz00_7226, (int) (((long) 13)));
				BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7239,
					BgL_ptrz00_7240, BINT(((long) 1)));
				{	/* Unsafe/intext.scm 702 */
					obj_t BgL_stringz00_7734;
					long BgL_kz00_7735;

					BgL_stringz00_7734 = CELL_REF(BgL_bufferz00_7239);
					BgL_kz00_7735 = (long) CINT(CELL_REF(BgL_ptrz00_7240));
					STRING_SET(BgL_stringz00_7734, BgL_kz00_7735, ((unsigned char) 'p'));
				}
				{	/* Unsafe/intext.scm 703 */
					obj_t BgL_auxz00_7736;

					BgL_auxz00_7736 = ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7240));
					CELL_SET(BgL_ptrz00_7240, BgL_auxz00_7736);
				}
				{	/* Unsafe/intext.scm 1009 */
					obj_t BgL_arg1850z00_7737;

					BgL_arg1850z00_7737 =
						STRUCT_REF(((obj_t) BgL_mz00_7242), (int) (((long) 1)));
					return
						BGl_z62printzd2itemzb0zz__intextz00(BgL_printzd2epairzd2_7238,
						BgL_printzd2pairzd2_7237, BgL_printzd2objectzd2_7236,
						BgL_printzd2classzd2_7235, BgL_printzd2cellzd2_7234,
						BgL_printzd2weakptrzd2_7233, BgL_printzd2vectorzd2_7232,
						BgL_printzd2hvectorzd2_7231, BgL_printzd2tvectorzd2_7230,
						BgL_printzd2customzd2_7229, BgL_refz00_7228, BgL_tablez00_7227,
						BgL_ptrz00_7240, BgL_bufferz00_7239, BgL_arg1850z00_7737);
				}
			}
		}

	}



/* &<@anonymous:1922> */
	obj_t BGl_z62zc3z04anonymousza31922ze3ze5zz__intextz00(obj_t BgL_envz00_7244,
		obj_t BgL_iz00_7259, obj_t BgL_mz00_7260)
	{
		{	/* Unsafe/intext.scm 1111 */
			{	/* Unsafe/intext.scm 1008 */
				obj_t BgL_tablez00_7245;
				obj_t BgL_refz00_7246;
				obj_t BgL_printzd2customzd2_7247;
				obj_t BgL_printzd2tvectorzd2_7248;
				obj_t BgL_printzd2hvectorzd2_7249;
				obj_t BgL_printzd2vectorzd2_7250;
				obj_t BgL_printzd2weakptrzd2_7251;
				obj_t BgL_printzd2cellzd2_7252;
				obj_t BgL_printzd2classzd2_7253;
				obj_t BgL_printzd2objectzd2_7254;
				obj_t BgL_printzd2pairzd2_7255;
				obj_t BgL_printzd2epairzd2_7256;
				obj_t BgL_bufferz00_7257;
				obj_t BgL_ptrz00_7258;

				BgL_tablez00_7245 =
					PROCEDURE_L_REF(BgL_envz00_7244, (int) (((long) 0)));
				BgL_refz00_7246 = PROCEDURE_L_REF(BgL_envz00_7244, (int) (((long) 1)));
				BgL_printzd2customzd2_7247 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7244, (int) (((long) 2))));
				BgL_printzd2tvectorzd2_7248 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7244, (int) (((long) 3))));
				BgL_printzd2hvectorzd2_7249 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7244, (int) (((long) 4))));
				BgL_printzd2vectorzd2_7250 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7244, (int) (((long) 5))));
				BgL_printzd2weakptrzd2_7251 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7244, (int) (((long) 6))));
				BgL_printzd2cellzd2_7252 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7244, (int) (((long) 7))));
				BgL_printzd2classzd2_7253 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7244, (int) (((long) 8))));
				BgL_printzd2objectzd2_7254 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7244, (int) (((long) 9))));
				BgL_printzd2pairzd2_7255 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7244, (int) (((long) 10))));
				BgL_printzd2epairzd2_7256 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7244, (int) (((long) 11))));
				BgL_bufferz00_7257 =
					PROCEDURE_L_REF(BgL_envz00_7244, (int) (((long) 12)));
				BgL_ptrz00_7258 = PROCEDURE_L_REF(BgL_envz00_7244, (int) (((long) 13)));
				BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7257,
					BgL_ptrz00_7258, BINT(((long) 1)));
				{	/* Unsafe/intext.scm 702 */
					obj_t BgL_stringz00_7738;
					long BgL_kz00_7739;

					BgL_stringz00_7738 = CELL_REF(BgL_bufferz00_7257);
					BgL_kz00_7739 = (long) CINT(CELL_REF(BgL_ptrz00_7258));
					STRING_SET(BgL_stringz00_7738, BgL_kz00_7739, ((unsigned char) 'e'));
				}
				{	/* Unsafe/intext.scm 703 */
					obj_t BgL_auxz00_7740;

					BgL_auxz00_7740 = ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7258));
					CELL_SET(BgL_ptrz00_7258, BgL_auxz00_7740);
				}
				{	/* Unsafe/intext.scm 1009 */
					obj_t BgL_arg1850z00_7741;

					BgL_arg1850z00_7741 =
						STRUCT_REF(((obj_t) BgL_mz00_7260), (int) (((long) 1)));
					return
						BGl_z62printzd2itemzb0zz__intextz00(BgL_printzd2epairzd2_7256,
						BgL_printzd2pairzd2_7255, BgL_printzd2objectzd2_7254,
						BgL_printzd2classzd2_7253, BgL_printzd2cellzd2_7252,
						BgL_printzd2weakptrzd2_7251, BgL_printzd2vectorzd2_7250,
						BgL_printzd2hvectorzd2_7249, BgL_printzd2tvectorzd2_7248,
						BgL_printzd2customzd2_7247, BgL_refz00_7246, BgL_tablez00_7245,
						BgL_ptrz00_7258, BgL_bufferz00_7257, BgL_arg1850z00_7741);
				}
			}
		}

	}



/* &<@anonymous:1925> */
	obj_t BGl_z62zc3z04anonymousza31925ze3ze5zz__intextz00(obj_t BgL_envz00_7262,
		obj_t BgL_iz00_7277, obj_t BgL_mz00_7278)
	{
		{	/* Unsafe/intext.scm 1113 */
			{	/* Unsafe/intext.scm 1008 */
				obj_t BgL_tablez00_7263;
				obj_t BgL_refz00_7264;
				obj_t BgL_printzd2customzd2_7265;
				obj_t BgL_printzd2tvectorzd2_7266;
				obj_t BgL_printzd2hvectorzd2_7267;
				obj_t BgL_printzd2vectorzd2_7268;
				obj_t BgL_printzd2weakptrzd2_7269;
				obj_t BgL_printzd2cellzd2_7270;
				obj_t BgL_printzd2classzd2_7271;
				obj_t BgL_printzd2objectzd2_7272;
				obj_t BgL_printzd2pairzd2_7273;
				obj_t BgL_printzd2epairzd2_7274;
				obj_t BgL_bufferz00_7275;
				obj_t BgL_ptrz00_7276;

				BgL_tablez00_7263 =
					PROCEDURE_L_REF(BgL_envz00_7262, (int) (((long) 0)));
				BgL_refz00_7264 = PROCEDURE_L_REF(BgL_envz00_7262, (int) (((long) 1)));
				BgL_printzd2customzd2_7265 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7262, (int) (((long) 2))));
				BgL_printzd2tvectorzd2_7266 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7262, (int) (((long) 3))));
				BgL_printzd2hvectorzd2_7267 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7262, (int) (((long) 4))));
				BgL_printzd2vectorzd2_7268 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7262, (int) (((long) 5))));
				BgL_printzd2weakptrzd2_7269 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7262, (int) (((long) 6))));
				BgL_printzd2cellzd2_7270 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7262, (int) (((long) 7))));
				BgL_printzd2classzd2_7271 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7262, (int) (((long) 8))));
				BgL_printzd2objectzd2_7272 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7262, (int) (((long) 9))));
				BgL_printzd2pairzd2_7273 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7262, (int) (((long) 10))));
				BgL_printzd2epairzd2_7274 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7262, (int) (((long) 11))));
				BgL_bufferz00_7275 =
					PROCEDURE_L_REF(BgL_envz00_7262, (int) (((long) 12)));
				BgL_ptrz00_7276 = PROCEDURE_L_REF(BgL_envz00_7262, (int) (((long) 13)));
				BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7275,
					BgL_ptrz00_7276, BINT(((long) 1)));
				{	/* Unsafe/intext.scm 702 */
					obj_t BgL_stringz00_7742;
					long BgL_kz00_7743;

					BgL_stringz00_7742 = CELL_REF(BgL_bufferz00_7275);
					BgL_kz00_7743 = (long) CINT(CELL_REF(BgL_ptrz00_7276));
					STRING_SET(BgL_stringz00_7742, BgL_kz00_7743, ((unsigned char) 'o'));
				}
				{	/* Unsafe/intext.scm 703 */
					obj_t BgL_auxz00_7744;

					BgL_auxz00_7744 = ADDFX(BINT(((long) 1)), CELL_REF(BgL_ptrz00_7276));
					CELL_SET(BgL_ptrz00_7276, BgL_auxz00_7744);
				}
				{	/* Unsafe/intext.scm 1009 */
					obj_t BgL_arg1850z00_7745;

					BgL_arg1850z00_7745 =
						STRUCT_REF(((obj_t) BgL_mz00_7278), (int) (((long) 1)));
					return
						BGl_z62printzd2itemzb0zz__intextz00(BgL_printzd2epairzd2_7274,
						BgL_printzd2pairzd2_7273, BgL_printzd2objectzd2_7272,
						BgL_printzd2classzd2_7271, BgL_printzd2cellzd2_7270,
						BgL_printzd2weakptrzd2_7269, BgL_printzd2vectorzd2_7268,
						BgL_printzd2hvectorzd2_7267, BgL_printzd2tvectorzd2_7266,
						BgL_printzd2customzd2_7265, BgL_refz00_7264, BgL_tablez00_7263,
						BgL_ptrz00_7276, BgL_bufferz00_7275, BgL_arg1850z00_7745);
				}
			}
		}

	}



/* &<@anonymous:1929> */
	obj_t BGl_z62zc3z04anonymousza31929ze3ze5zz__intextz00(obj_t BgL_envz00_7280,
		obj_t BgL_itemz00_7295, obj_t BgL_markz00_7296)
	{
		{	/* Unsafe/intext.scm 1118 */
			{	/* Unsafe/intext.scm 924 */
				obj_t BgL_tablez00_7281;
				obj_t BgL_refz00_7282;
				obj_t BgL_printzd2customzd2_7283;
				obj_t BgL_printzd2tvectorzd2_7284;
				obj_t BgL_printzd2hvectorzd2_7285;
				obj_t BgL_printzd2vectorzd2_7286;
				obj_t BgL_printzd2weakptrzd2_7287;
				obj_t BgL_printzd2cellzd2_7288;
				obj_t BgL_printzd2classzd2_7289;
				obj_t BgL_printzd2objectzd2_7290;
				obj_t BgL_printzd2pairzd2_7291;
				obj_t BgL_printzd2epairzd2_7292;
				obj_t BgL_bufferz00_7293;
				obj_t BgL_ptrz00_7294;

				BgL_tablez00_7281 =
					PROCEDURE_L_REF(BgL_envz00_7280, (int) (((long) 0)));
				BgL_refz00_7282 = PROCEDURE_L_REF(BgL_envz00_7280, (int) (((long) 1)));
				BgL_printzd2customzd2_7283 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7280, (int) (((long) 2))));
				BgL_printzd2tvectorzd2_7284 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7280, (int) (((long) 3))));
				BgL_printzd2hvectorzd2_7285 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7280, (int) (((long) 4))));
				BgL_printzd2vectorzd2_7286 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7280, (int) (((long) 5))));
				BgL_printzd2weakptrzd2_7287 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7280, (int) (((long) 6))));
				BgL_printzd2cellzd2_7288 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7280, (int) (((long) 7))));
				BgL_printzd2classzd2_7289 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7280, (int) (((long) 8))));
				BgL_printzd2objectzd2_7290 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7280, (int) (((long) 9))));
				BgL_printzd2pairzd2_7291 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7280, (int) (((long) 10))));
				BgL_printzd2epairzd2_7292 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_7280, (int) (((long) 11))));
				BgL_bufferz00_7293 =
					PROCEDURE_L_REF(BgL_envz00_7280, (int) (((long) 12)));
				BgL_ptrz00_7294 = PROCEDURE_L_REF(BgL_envz00_7280, (int) (((long) 13)));
				{	/* Unsafe/intext.scm 924 */
					bool_t BgL_tmpz00_10746;

					BGl_z62checkzd2bufferz12za2zz__intextz00(BgL_bufferz00_7293,
						BgL_ptrz00_7294, BINT(((long) 1)));
					{	/* Unsafe/intext.scm 702 */
						obj_t BgL_stringz00_7746;
						long BgL_kz00_7747;

						BgL_stringz00_7746 = CELL_REF(BgL_bufferz00_7293);
						BgL_kz00_7747 = (long) CINT(CELL_REF(BgL_ptrz00_7294));
						STRING_SET(BgL_stringz00_7746, BgL_kz00_7747,
							((unsigned char) '{'));
					}
					{	/* Unsafe/intext.scm 703 */
						obj_t BgL_auxz00_7748;

						BgL_auxz00_7748 =
							BINT((((long) 1) + (long) CINT(CELL_REF(BgL_ptrz00_7294))));
						CELL_SET(BgL_ptrz00_7294, BgL_auxz00_7748);
					}
					{	/* Unsafe/intext.scm 925 */
						obj_t BgL_arg1770z00_7749;

						{	/* Unsafe/intext.scm 925 */
							obj_t BgL_res2810z00_7750;

							BgL_res2810z00_7750 = STRUCT_KEY(((obj_t) BgL_itemz00_7295));
							BgL_arg1770z00_7749 = BgL_res2810z00_7750;
						}
						BGl_z62printzd2itemzb0zz__intextz00(BgL_printzd2epairzd2_7292,
							BgL_printzd2pairzd2_7291, BgL_printzd2objectzd2_7290,
							BgL_printzd2classzd2_7289, BgL_printzd2cellzd2_7288,
							BgL_printzd2weakptrzd2_7287, BgL_printzd2vectorzd2_7286,
							BgL_printzd2hvectorzd2_7285, BgL_printzd2tvectorzd2_7284,
							BgL_printzd2customzd2_7283, BgL_refz00_7282, BgL_tablez00_7281,
							BgL_ptrz00_7294, BgL_bufferz00_7293, BgL_arg1770z00_7749);
					}
					{	/* Unsafe/intext.scm 926 */
						int BgL_lenz00_7751;

						BgL_lenz00_7751 = STRUCT_LENGTH(((obj_t) BgL_itemz00_7295));
						{	/* Unsafe/intext.scm 776 */
							long BgL_siza7eza7_7752;

							BgL_siza7eza7_7752 =
								BGl_siza7ezd2ofzd2wordza7zz__intextz00(
								(long) (BgL_lenz00_7751));
							if ((BgL_siza7eza7_7752 == ((long) 0)))
								{	/* Unsafe/intext.scm 777 */
									BGl_z62z12printzd2markupza2zz__intextz00(BgL_ptrz00_7294,
										BgL_bufferz00_7293, (((long) 0)));
								}
							else
								{	/* Unsafe/intext.scm 777 */
									BGl_z62z12printzd2markupza2zz__intextz00(BgL_ptrz00_7294,
										BgL_bufferz00_7293, (BgL_siza7eza7_7752));
									BBOOL(BGl_z62printzd2wordzf2siza7eze5zz__intextz00
										(BgL_ptrz00_7294, BgL_bufferz00_7293, BINT(BgL_lenz00_7751),
											BgL_siza7eza7_7752));
								}
						}
						{
							long BgL_iz00_7754;

							BgL_iz00_7754 = ((long) 0);
						BgL_for1077z00_7753:
							if ((BgL_iz00_7754 < (long) (BgL_lenz00_7751)))
								{	/* Unsafe/intext.scm 928 */
									{	/* Unsafe/intext.scm 928 */
										obj_t BgL_arg1773z00_7755;

										BgL_arg1773z00_7755 =
											STRUCT_REF(
											((obj_t) BgL_itemz00_7295), (int) (BgL_iz00_7754));
										BGl_z62printzd2itemzb0zz__intextz00
											(BgL_printzd2epairzd2_7292, BgL_printzd2pairzd2_7291,
											BgL_printzd2objectzd2_7290, BgL_printzd2classzd2_7289,
											BgL_printzd2cellzd2_7288, BgL_printzd2weakptrzd2_7287,
											BgL_printzd2vectorzd2_7286, BgL_printzd2hvectorzd2_7285,
											BgL_printzd2tvectorzd2_7284, BgL_printzd2customzd2_7283,
											BgL_refz00_7282, BgL_tablez00_7281, BgL_ptrz00_7294,
											BgL_bufferz00_7293, BgL_arg1773z00_7755);
									}
									{
										long BgL_iz00_10777;

										BgL_iz00_10777 = (BgL_iz00_7754 + ((long) 1));
										BgL_iz00_7754 = BgL_iz00_10777;
										goto BgL_for1077z00_7753;
									}
								}
							else
								{	/* Unsafe/intext.scm 928 */
									BgL_tmpz00_10746 = ((bool_t) 0);
								}
						}
					}
					return BBOOL(BgL_tmpz00_10746);
				}
			}
		}

	}



/* mark-obj! */
	long BGl_markzd2objz12zc0zz__intextz00(obj_t BgL_tablez00_55,
		obj_t BgL_objz00_56, obj_t BgL_markzd2argzd2_57)
	{
		{	/* Unsafe/intext.scm 1137 */
			{	/* Unsafe/intext.scm 1137 */
				struct bgl_cell BgL_box3672_7367z00;
				obj_t BgL_nbrefz00_7367;

				BgL_nbrefz00_7367 =
					MAKE_CELL_STACK(BINT(((long) 0)), BgL_box3672_7367z00);
				BGl_markze70ze7zz__intextz00(BgL_nbrefz00_7367, BgL_markzd2argzd2_57,
					BgL_tablez00_55, BgL_objz00_56);
				return (long) CINT(CELL_REF(BgL_nbrefz00_7367));
		}}

	}



/* mark~0 */
	obj_t BGl_markze70ze7zz__intextz00(obj_t BgL_nbrefz00_7365,
		obj_t BgL_markzd2argzd2_7364, obj_t BgL_tablez00_7363,
		obj_t BgL_objz00_2736)
	{
		{	/* Unsafe/intext.scm 1315 */
		BGl_markze70ze7zz__intextz00:
			{
				obj_t BgL_mz00_2620;
				obj_t BgL_objz00_2630;
				obj_t BgL_objz00_2637;
				obj_t BgL_objz00_2643;
				obj_t BgL_objz00_2670;
				obj_t BgL_objz00_2686;
				obj_t BgL_objz00_2697;
				obj_t BgL_objz00_2700;
				obj_t BgL_objz00_2703;
				obj_t BgL_objz00_2713;
				obj_t BgL_objz00_2721;
				obj_t BgL_objz00_2724;
				obj_t BgL_objz00_2729;

				{	/* Unsafe/intext.scm 1277 */
					bool_t BgL_test3673z00_10783;

					{	/* Unsafe/intext.scm 1277 */
						bool_t BgL_test3674z00_10784;

						{	/* Unsafe/intext.scm 1277 */
							bool_t BgL_res3029z00_6160;

							BgL_res3029z00_6160 = EPAIRP(BgL_objz00_2736);
							BgL_test3674z00_10784 = BgL_res3029z00_6160;
						}
						if (BgL_test3674z00_10784)
							{	/* Unsafe/intext.scm 1277 */
								BgL_test3673z00_10783 = BGl_za2epairzf3za2zf3zz__intextz00;
							}
						else
							{	/* Unsafe/intext.scm 1277 */
								BgL_test3673z00_10783 = ((bool_t) 0);
							}
					}
					if (BgL_test3673z00_10783)
						{	/* Unsafe/intext.scm 1153 */
							obj_t BgL_mz00_6161;

							BgL_mz00_6161 =
								BGl_hashtablezd2getzd2zz__hashz00(BgL_tablez00_7363,
								BgL_objz00_2736);
							{	/* Unsafe/intext.scm 1154 */
								bool_t BgL_test3675z00_10787;

								if (STRUCTP(BgL_mz00_6161))
									{	/* Unsafe/intext.scm 646 */
										BgL_test3675z00_10787 =
											(STRUCT_KEY(BgL_mz00_6161) ==
											BGl_symbol3357z00zz__intextz00);
									}
								else
									{	/* Unsafe/intext.scm 646 */
										BgL_test3675z00_10787 = ((bool_t) 0);
									}
								if (BgL_test3675z00_10787)
									{	/* Unsafe/intext.scm 1154 */
										BgL_mz00_2620 = BgL_mz00_6161;
									BgL_zc3z04anonymousza31932ze3z87_2621:
										{	/* Unsafe/intext.scm 1147 */
											obj_t BgL_omz00_2622;

											BgL_omz00_2622 =
												STRUCT_REF(BgL_mz00_2620, (int) (((long) 2)));
											{	/* Unsafe/intext.scm 1148 */
												long BgL_arg1933z00_2623;

												BgL_arg1933z00_2623 =
													(((long) 1) + (long) CINT(BgL_omz00_2622));
												{	/* Unsafe/intext.scm 646 */
													obj_t BgL_auxz00_10798;
													int BgL_tmpz00_10796;

													BgL_auxz00_10798 = BINT(BgL_arg1933z00_2623);
													BgL_tmpz00_10796 = (int) (((long) 2));
													STRUCT_SET(BgL_mz00_2620, BgL_tmpz00_10796,
														BgL_auxz00_10798);
											}}
											if (((long) CINT(BgL_omz00_2622) == ((long) 0)))
												{	/* Unsafe/intext.scm 1149 */
													obj_t BgL_auxz00_7366;

													BgL_auxz00_7366 =
														ADDFX(CELL_REF(BgL_nbrefz00_7365),
														BINT(((long) 1)));
													return CELL_SET(BgL_nbrefz00_7365, BgL_auxz00_7366);
												}
											else
												{	/* Unsafe/intext.scm 1149 */
													return BFALSE;
												}
										}
									}
								else
									{	/* Unsafe/intext.scm 1154 */
										BgL_objz00_2630 = BgL_objz00_2736;
										{	/* Unsafe/intext.scm 1160 */
											obj_t BgL_mz00_2632;

											BgL_mz00_2632 =
												BGl_hashtablezd2getzd2zz__hashz00(BgL_tablez00_7363,
												BgL_objz00_2630);
											{	/* Unsafe/intext.scm 1161 */
												bool_t BgL_test3678z00_10807;

												if (STRUCTP(BgL_mz00_2632))
													{	/* Unsafe/intext.scm 646 */
														BgL_test3678z00_10807 =
															(STRUCT_KEY(BgL_mz00_2632) ==
															BGl_symbol3357z00zz__intextz00);
													}
												else
													{	/* Unsafe/intext.scm 646 */
														BgL_test3678z00_10807 = ((bool_t) 0);
													}
												if (BgL_test3678z00_10807)
													{
														obj_t BgL_mz00_10812;

														BgL_mz00_10812 = BgL_mz00_2632;
														BgL_mz00_2620 = BgL_mz00_10812;
														goto BgL_zc3z04anonymousza31932ze3z87_2621;
													}
												else
													{	/* Unsafe/intext.scm 1161 */
														{	/* Unsafe/intext.scm 658 */
															obj_t BgL_arg1615z00_5944;

															{	/* Unsafe/intext.scm 646 */
																obj_t BgL_newz00_5945;

																BgL_newz00_5945 =
																	create_struct(BGl_symbol3357z00zz__intextz00,
																	(int) (((long) 4)));
																{	/* Unsafe/intext.scm 646 */
																	obj_t BgL_auxz00_10817;
																	int BgL_tmpz00_10815;

																	BgL_auxz00_10817 = BINT(((long) -1));
																	BgL_tmpz00_10815 = (int) (((long) 3));
																	STRUCT_SET(BgL_newz00_5945, BgL_tmpz00_10815,
																		BgL_auxz00_10817);
																}
																{	/* Unsafe/intext.scm 646 */
																	obj_t BgL_auxz00_10822;
																	int BgL_tmpz00_10820;

																	BgL_auxz00_10822 = BINT(((long) 0));
																	BgL_tmpz00_10820 = (int) (((long) 2));
																	STRUCT_SET(BgL_newz00_5945, BgL_tmpz00_10820,
																		BgL_auxz00_10822);
																}
																{	/* Unsafe/intext.scm 646 */
																	int BgL_tmpz00_10825;

																	BgL_tmpz00_10825 = (int) (((long) 1));
																	STRUCT_SET(BgL_newz00_5945, BgL_tmpz00_10825,
																		BFALSE);
																}
																{	/* Unsafe/intext.scm 646 */
																	int BgL_tmpz00_10828;

																	BgL_tmpz00_10828 = (int) (((long) 0));
																	STRUCT_SET(BgL_newz00_5945, BgL_tmpz00_10828,
																		BgL_objz00_2630);
																}
																BgL_arg1615z00_5944 = BgL_newz00_5945;
															}
															BGl_hashtablezd2putz12zc0zz__hashz00
																(BgL_tablez00_7363, BgL_objz00_2630,
																BgL_arg1615z00_5944);
														}
														{	/* Unsafe/intext.scm 1165 */
															obj_t BgL_arg1939z00_2634;

															BgL_arg1939z00_2634 =
																CAR(((obj_t) BgL_objz00_2630));
															BGl_markze70ze7zz__intextz00(BgL_nbrefz00_7365,
																BgL_markzd2argzd2_7364, BgL_tablez00_7363,
																BgL_arg1939z00_2634);
														}
														{	/* Unsafe/intext.scm 1166 */
															obj_t BgL_arg1940z00_2635;

															BgL_arg1940z00_2635 =
																CDR(((obj_t) BgL_objz00_2630));
															BGl_markze70ze7zz__intextz00(BgL_nbrefz00_7365,
																BgL_markzd2argzd2_7364, BgL_tablez00_7363,
																BgL_arg1940z00_2635);
														}
														{	/* Unsafe/intext.scm 1167 */
															obj_t BgL_arg1941z00_2636;

															BgL_arg1941z00_2636 =
																CER(((obj_t) BgL_objz00_2630));
															{
																obj_t BgL_objz00_10840;

																BgL_objz00_10840 = BgL_arg1941z00_2636;
																BgL_objz00_2736 = BgL_objz00_10840;
																goto BGl_markze70ze7zz__intextz00;
															}
														}
													}
											}
										}
									}
							}
						}
					else
						{	/* Unsafe/intext.scm 1277 */
							if (PAIRP(BgL_objz00_2736))
								{	/* Unsafe/intext.scm 1153 */
									obj_t BgL_mz00_6169;

									BgL_mz00_6169 =
										BGl_hashtablezd2getzd2zz__hashz00(BgL_tablez00_7363,
										BgL_objz00_2736);
									{	/* Unsafe/intext.scm 1154 */
										bool_t BgL_test3681z00_10844;

										if (STRUCTP(BgL_mz00_6169))
											{	/* Unsafe/intext.scm 646 */
												BgL_test3681z00_10844 =
													(STRUCT_KEY(BgL_mz00_6169) ==
													BGl_symbol3357z00zz__intextz00);
											}
										else
											{	/* Unsafe/intext.scm 646 */
												BgL_test3681z00_10844 = ((bool_t) 0);
											}
										if (BgL_test3681z00_10844)
											{
												obj_t BgL_mz00_10849;

												BgL_mz00_10849 = BgL_mz00_6169;
												BgL_mz00_2620 = BgL_mz00_10849;
												goto BgL_zc3z04anonymousza31932ze3z87_2621;
											}
										else
											{	/* Unsafe/intext.scm 1154 */
												BgL_objz00_2637 = BgL_objz00_2736;
												{	/* Unsafe/intext.scm 1171 */
													obj_t BgL_mz00_2639;

													BgL_mz00_2639 =
														BGl_hashtablezd2getzd2zz__hashz00(BgL_tablez00_7363,
														BgL_objz00_2637);
													{	/* Unsafe/intext.scm 1172 */
														bool_t BgL_test3683z00_10851;

														if (STRUCTP(BgL_mz00_2639))
															{	/* Unsafe/intext.scm 646 */
																BgL_test3683z00_10851 =
																	(STRUCT_KEY(BgL_mz00_2639) ==
																	BGl_symbol3357z00zz__intextz00);
															}
														else
															{	/* Unsafe/intext.scm 646 */
																BgL_test3683z00_10851 = ((bool_t) 0);
															}
														if (BgL_test3683z00_10851)
															{
																obj_t BgL_mz00_10856;

																BgL_mz00_10856 = BgL_mz00_2639;
																BgL_mz00_2620 = BgL_mz00_10856;
																goto BgL_zc3z04anonymousza31932ze3z87_2621;
															}
														else
															{	/* Unsafe/intext.scm 1172 */
																{	/* Unsafe/intext.scm 658 */
																	obj_t BgL_arg1615z00_5958;

																	{	/* Unsafe/intext.scm 646 */
																		obj_t BgL_newz00_5959;

																		BgL_newz00_5959 =
																			create_struct
																			(BGl_symbol3357z00zz__intextz00,
																			(int) (((long) 4)));
																		{	/* Unsafe/intext.scm 646 */
																			obj_t BgL_auxz00_10861;
																			int BgL_tmpz00_10859;

																			BgL_auxz00_10861 = BINT(((long) -1));
																			BgL_tmpz00_10859 = (int) (((long) 3));
																			STRUCT_SET(BgL_newz00_5959,
																				BgL_tmpz00_10859, BgL_auxz00_10861);
																		}
																		{	/* Unsafe/intext.scm 646 */
																			obj_t BgL_auxz00_10866;
																			int BgL_tmpz00_10864;

																			BgL_auxz00_10866 = BINT(((long) 0));
																			BgL_tmpz00_10864 = (int) (((long) 2));
																			STRUCT_SET(BgL_newz00_5959,
																				BgL_tmpz00_10864, BgL_auxz00_10866);
																		}
																		{	/* Unsafe/intext.scm 646 */
																			int BgL_tmpz00_10869;

																			BgL_tmpz00_10869 = (int) (((long) 1));
																			STRUCT_SET(BgL_newz00_5959,
																				BgL_tmpz00_10869, BFALSE);
																		}
																		{	/* Unsafe/intext.scm 646 */
																			int BgL_tmpz00_10872;

																			BgL_tmpz00_10872 = (int) (((long) 0));
																			STRUCT_SET(BgL_newz00_5959,
																				BgL_tmpz00_10872, BgL_objz00_2637);
																		}
																		BgL_arg1615z00_5958 = BgL_newz00_5959;
																	}
																	BGl_hashtablezd2putz12zc0zz__hashz00
																		(BgL_tablez00_7363, BgL_objz00_2637,
																		BgL_arg1615z00_5958);
																}
																{	/* Unsafe/intext.scm 1176 */
																	obj_t BgL_arg1944z00_2641;

																	BgL_arg1944z00_2641 =
																		CAR(((obj_t) BgL_objz00_2637));
																	BGl_markze70ze7zz__intextz00
																		(BgL_nbrefz00_7365, BgL_markzd2argzd2_7364,
																		BgL_tablez00_7363, BgL_arg1944z00_2641);
																}
																{	/* Unsafe/intext.scm 1177 */
																	obj_t BgL_arg1945z00_2642;

																	BgL_arg1945z00_2642 =
																		CDR(((obj_t) BgL_objz00_2637));
																	{
																		obj_t BgL_objz00_10881;

																		BgL_objz00_10881 = BgL_arg1945z00_2642;
																		BgL_objz00_2736 = BgL_objz00_10881;
																		goto BGl_markze70ze7zz__intextz00;
																	}
																}
															}
													}
												}
											}
									}
								}
							else
								{	/* Unsafe/intext.scm 1279 */
									if (BGL_OBJECTP(BgL_objz00_2736))
										{	/* Unsafe/intext.scm 1153 */
											obj_t BgL_mz00_6177;

											BgL_mz00_6177 =
												BGl_hashtablezd2getzd2zz__hashz00(BgL_tablez00_7363,
												BgL_objz00_2736);
											{	/* Unsafe/intext.scm 1154 */
												bool_t BgL_test3686z00_10885;

												if (STRUCTP(BgL_mz00_6177))
													{	/* Unsafe/intext.scm 646 */
														BgL_test3686z00_10885 =
															(STRUCT_KEY(BgL_mz00_6177) ==
															BGl_symbol3357z00zz__intextz00);
													}
												else
													{	/* Unsafe/intext.scm 646 */
														BgL_test3686z00_10885 = ((bool_t) 0);
													}
												if (BgL_test3686z00_10885)
													{
														obj_t BgL_mz00_10890;

														BgL_mz00_10890 = BgL_mz00_6177;
														BgL_mz00_2620 = BgL_mz00_10890;
														goto BgL_zc3z04anonymousza31932ze3z87_2621;
													}
												else
													{	/* Unsafe/intext.scm 1154 */
														BgL_objz00_2643 = BgL_objz00_2736;
														{	/* Unsafe/intext.scm 1181 */
															obj_t BgL_klassz00_2645;
															obj_t BgL_customz00_2646;

															{	/* Unsafe/intext.scm 1181 */
																long BgL_arg2456z00_5967;

																{	/* Unsafe/intext.scm 1181 */
																	long BgL_arg2457z00_5968;

																	{	/* Unsafe/intext.scm 1181 */
																		long BgL_res3009z00_5970;

																		BgL_res3009z00_5970 =
																			BGL_OBJECT_CLASS_NUM(
																			((BgL_objectz00_bglt) BgL_objz00_2643));
																		BgL_arg2457z00_5968 = BgL_res3009z00_5970;
																	}
																	BgL_arg2456z00_5967 =
																		(BgL_arg2457z00_5968 - OBJECT_TYPE);
																}
																BgL_klassz00_2645 =
																	VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
																	BgL_arg2456z00_5967);
															}
															BgL_customz00_2646 =
																BGl_objectzd2serializa7erz75zz__intextz00(
																((BgL_objectz00_bglt) BgL_objz00_2643),
																BgL_markzd2argzd2_7364);
															{	/* Unsafe/intext.scm 658 */
																obj_t BgL_arg1615z00_5976;

																{	/* Unsafe/intext.scm 646 */
																	obj_t BgL_newz00_5977;

																	BgL_newz00_5977 =
																		create_struct
																		(BGl_symbol3357z00zz__intextz00,
																		(int) (((long) 4)));
																	{	/* Unsafe/intext.scm 646 */
																		obj_t BgL_auxz00_10901;
																		int BgL_tmpz00_10899;

																		BgL_auxz00_10901 = BINT(((long) -1));
																		BgL_tmpz00_10899 = (int) (((long) 3));
																		STRUCT_SET(BgL_newz00_5977,
																			BgL_tmpz00_10899, BgL_auxz00_10901);
																	}
																	{	/* Unsafe/intext.scm 646 */
																		obj_t BgL_auxz00_10906;
																		int BgL_tmpz00_10904;

																		BgL_auxz00_10906 = BINT(((long) 0));
																		BgL_tmpz00_10904 = (int) (((long) 2));
																		STRUCT_SET(BgL_newz00_5977,
																			BgL_tmpz00_10904, BgL_auxz00_10906);
																	}
																	{	/* Unsafe/intext.scm 646 */
																		int BgL_tmpz00_10909;

																		BgL_tmpz00_10909 = (int) (((long) 1));
																		STRUCT_SET(BgL_newz00_5977,
																			BgL_tmpz00_10909, BgL_customz00_2646);
																	}
																	{	/* Unsafe/intext.scm 646 */
																		int BgL_tmpz00_10912;

																		BgL_tmpz00_10912 = (int) (((long) 0));
																		STRUCT_SET(BgL_newz00_5977,
																			BgL_tmpz00_10912, BgL_objz00_2643);
																	}
																	BgL_arg1615z00_5976 = BgL_newz00_5977;
																}
																BGl_hashtablezd2putz12zc0zz__hashz00
																	(BgL_tablez00_7363, BgL_objz00_2643,
																	BgL_arg1615z00_5976);
															}
															BGl_markze70ze7zz__intextz00(BgL_nbrefz00_7365,
																BgL_markzd2argzd2_7364, BgL_tablez00_7363,
																BgL_klassz00_2645);
															{	/* Unsafe/intext.scm 1185 */
																long BgL_arg1947z00_2647;

																BgL_arg1947z00_2647 =
																	BGl_classzd2hashzd2zz__objectz00
																	(BgL_klassz00_2645);
																BGl_markze70ze7zz__intextz00(BgL_nbrefz00_7365,
																	BgL_markzd2argzd2_7364, BgL_tablez00_7363,
																	BINT(BgL_arg1947z00_2647));
															}
															{	/* Unsafe/intext.scm 1186 */
																obj_t BgL_arg1948z00_2648;

																BgL_arg1948z00_2648 =
																	BGl_classzd2namezd2zz__objectz00
																	(BgL_klassz00_2645);
																BGl_markze70ze7zz__intextz00(BgL_nbrefz00_7365,
																	BgL_markzd2argzd2_7364, BgL_tablez00_7363,
																	BgL_arg1948z00_2648);
															}
															if ((BgL_objz00_2643 == BgL_customz00_2646))
																{	/* Unsafe/intext.scm 1189 */
																	obj_t BgL_fieldsz00_2650;

																	{	/* Unsafe/intext.scm 1189 */
																		obj_t BgL_res3011z00_5983;

																		{	/* Unsafe/intext.scm 1189 */
																			obj_t BgL_tmpz00_10924;

																			BgL_tmpz00_10924 =
																				((obj_t) BgL_klassz00_2645);
																			BgL_res3011z00_5983 =
																				BGL_CLASS_ALL_FIELDS(BgL_tmpz00_10924);
																		}
																		BgL_fieldsz00_2650 = BgL_res3011z00_5983;
																	}
																	{	/* Unsafe/intext.scm 1190 */

																		{
																			long BgL_iz00_2653;

																			{	/* Unsafe/intext.scm 1191 */
																				bool_t BgL_tmpz00_10927;

																				BgL_iz00_2653 = ((long) 0);
																			BgL_zc3z04anonymousza31950ze3z87_2654:
																				if (
																					(BgL_iz00_2653 <
																						VECTOR_LENGTH(BgL_fieldsz00_2650)))
																					{	/* Unsafe/intext.scm 1191 */
																						{	/* Unsafe/intext.scm 1192 */
																							obj_t BgL_fz00_2656;

																							BgL_fz00_2656 =
																								VECTOR_REF(BgL_fieldsz00_2650,
																								BgL_iz00_2653);
																							{	/* Unsafe/intext.scm 1192 */
																								obj_t BgL_ivz00_2657;

																								BgL_ivz00_2657 =
																									BGl_classzd2fieldzd2infoz00zz__objectz00
																									(BgL_fz00_2656);
																								{	/* Unsafe/intext.scm 1193 */

																									{	/* Unsafe/intext.scm 1195 */
																										obj_t BgL_g1091z00_2658;

																										if (PAIRP(BgL_ivz00_2657))
																											{	/* Unsafe/intext.scm 1195 */
																												BgL_g1091z00_2658 =
																													BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																													(BGl_keyword3352z00zz__intextz00,
																													BgL_ivz00_2657);
																											}
																										else
																											{	/* Unsafe/intext.scm 1195 */
																												BgL_g1091z00_2658 =
																													BFALSE;
																											}
																										if (CBOOL
																											(BgL_g1091z00_2658))
																											{	/* Unsafe/intext.scm 1198 */
																												bool_t
																													BgL_test3692z00_10938;
																												{	/* Unsafe/intext.scm 1198 */
																													obj_t
																														BgL_tmpz00_10939;
																													BgL_tmpz00_10939 =
																														CDR(((obj_t)
																															BgL_g1091z00_2658));
																													BgL_test3692z00_10938
																														=
																														PAIRP
																														(BgL_tmpz00_10939);
																												}
																												if (BgL_test3692z00_10938)
																													{	/* Unsafe/intext.scm 1198 */
																														obj_t
																															BgL_arg1954z00_2663;
																														{	/* Unsafe/intext.scm 1198 */
																															obj_t
																																BgL_pairz00_5996;
																															BgL_pairz00_5996 =
																																CDR(((obj_t)
																																	BgL_g1091z00_2658));
																															BgL_arg1954z00_2663
																																=
																																CAR
																																(BgL_pairz00_5996);
																														}
																														BGl_markze70ze7zz__intextz00
																															(BgL_nbrefz00_7365,
																															BgL_markzd2argzd2_7364,
																															BgL_tablez00_7363,
																															BgL_arg1954z00_2663);
																													}
																												else
																													{	/* Unsafe/intext.scm 1198 */
																														BFALSE;
																													}
																											}
																										else
																											{	/* Unsafe/intext.scm 1200 */
																												obj_t
																													BgL_arg1956z00_2665;
																												{	/* Unsafe/intext.scm 1200 */
																													obj_t
																														BgL_fun1957z00_2666;
																													BgL_fun1957z00_2666 =
																														BGl_classzd2fieldzd2accessorz00zz__objectz00
																														(BgL_fz00_2656);
																													BgL_arg1956z00_2665 =
																														PROCEDURE_ENTRY
																														(BgL_fun1957z00_2666)
																														(BgL_fun1957z00_2666,
																														BgL_objz00_2643,
																														BEOA);
																												}
																												BGl_markze70ze7zz__intextz00
																													(BgL_nbrefz00_7365,
																													BgL_markzd2argzd2_7364,
																													BgL_tablez00_7363,
																													BgL_arg1956z00_2665);
																											}
																									}
																								}
																							}
																						}
																						{
																							long BgL_iz00_10953;

																							BgL_iz00_10953 =
																								(BgL_iz00_2653 + ((long) 1));
																							BgL_iz00_2653 = BgL_iz00_10953;
																							goto
																								BgL_zc3z04anonymousza31950ze3z87_2654;
																						}
																					}
																				else
																					{	/* Unsafe/intext.scm 1191 */
																						BgL_tmpz00_10927 = ((bool_t) 0);
																					}
																				return BBOOL(BgL_tmpz00_10927);
																			}
																		}
																	}
																}
															else
																{
																	obj_t BgL_objz00_10956;

																	BgL_objz00_10956 = BgL_customz00_2646;
																	BgL_objz00_2736 = BgL_objz00_10956;
																	goto BGl_markze70ze7zz__intextz00;
																}
														}
													}
											}
										}
									else
										{	/* Unsafe/intext.scm 1281 */
											if (BGl_classzf3zf3zz__objectz00(BgL_objz00_2736))
												{	/* Unsafe/intext.scm 1283 */
													{	/* Unsafe/intext.scm 1284 */
														obj_t BgL_arg1997z00_2743;

														{	/* Unsafe/intext.scm 1284 */
															obj_t BgL_arg1998z00_2744;

															BgL_arg1998z00_2744 =
																BGl_classzd2namezd2zz__objectz00
																(BgL_objz00_2736);
															{	/* Unsafe/intext.scm 1284 */
																obj_t BgL_res3038z00_6185;

																BgL_res3038z00_6185 =
																	SYMBOL_TO_STRING(BgL_arg1998z00_2744);
																BgL_arg1997z00_2743 = BgL_res3038z00_6185;
															}
														}
														BGl_markze70ze7zz__intextz00(BgL_nbrefz00_7365,
															BgL_markzd2argzd2_7364, BgL_tablez00_7363,
															BgL_arg1997z00_2743);
													}
													{	/* Unsafe/intext.scm 1153 */
														obj_t BgL_mz00_6186;

														BgL_mz00_6186 =
															BGl_hashtablezd2getzd2zz__hashz00
															(BgL_tablez00_7363, BgL_objz00_2736);
														{	/* Unsafe/intext.scm 1154 */
															bool_t BgL_test3694z00_10963;

															if (STRUCTP(BgL_mz00_6186))
																{	/* Unsafe/intext.scm 646 */
																	BgL_test3694z00_10963 =
																		(STRUCT_KEY(BgL_mz00_6186) ==
																		BGl_symbol3357z00zz__intextz00);
																}
															else
																{	/* Unsafe/intext.scm 646 */
																	BgL_test3694z00_10963 = ((bool_t) 0);
																}
															if (BgL_test3694z00_10963)
																{
																	obj_t BgL_mz00_10968;

																	BgL_mz00_10968 = BgL_mz00_6186;
																	BgL_mz00_2620 = BgL_mz00_10968;
																	goto BgL_zc3z04anonymousza31932ze3z87_2621;
																}
															else
																{	/* Unsafe/intext.scm 1154 */
																	BgL_objz00_2670 = BgL_objz00_2736;
																	{	/* Unsafe/intext.scm 1205 */
																		obj_t BgL_fz00_2672;

																		{	/* Unsafe/intext.scm 1205 */
																			obj_t BgL_v1153z00_2673;

																			{	/* Unsafe/intext.scm 1205 */
																				obj_t BgL_res3016z00_6000;

																				{	/* Unsafe/intext.scm 1205 */
																					obj_t BgL_tmpz00_10969;

																					BgL_tmpz00_10969 =
																						((obj_t) BgL_objz00_2670);
																					BgL_res3016z00_6000 =
																						BGL_CLASS_ALL_FIELDS
																						(BgL_tmpz00_10969);
																				}
																				BgL_v1153z00_2673 = BgL_res3016z00_6000;
																			}
																			{	/* Unsafe/intext.scm 1205 */
																				obj_t BgL_nv1154z00_2675;

																				{	/* Ieee/vector.scm 93 */

																					{	/* Ieee/vector.scm 93 */
																						obj_t BgL_res3017z00_6003;

																						BgL_res3017z00_6003 =
																							make_vector(VECTOR_LENGTH
																							(BgL_v1153z00_2673), BUNSPEC);
																						BgL_nv1154z00_2675 =
																							BgL_res3017z00_6003;
																					}
																				}
																				{	/* Unsafe/intext.scm 1205 */

																					{
																						long BgL_i1152z00_6014;

																						BgL_i1152z00_6014 = ((long) 0);
																					BgL_zc3z04anonymousza31960ze3z87_6013:
																						if (
																							(BgL_i1152z00_6014 ==
																								VECTOR_LENGTH
																								(BgL_v1153z00_2673)))
																							{	/* Unsafe/intext.scm 1205 */
																								BgL_fz00_2672 =
																									BgL_nv1154z00_2675;
																							}
																						else
																							{	/* Unsafe/intext.scm 1205 */
																								VECTOR_SET(BgL_nv1154z00_2675,
																									BgL_i1152z00_6014,
																									BGl_classzd2fieldzd2namez00zz__objectz00
																									(VECTOR_REF(BgL_v1153z00_2673,
																											BgL_i1152z00_6014)));
																								{
																									long BgL_i1152z00_10980;

																									BgL_i1152z00_10980 =
																										(BgL_i1152z00_6014 +
																										((long) 1));
																									BgL_i1152z00_6014 =
																										BgL_i1152z00_10980;
																									goto
																										BgL_zc3z04anonymousza31960ze3z87_6013;
																								}
																							}
																					}
																				}
																			}
																		}
																		{	/* Unsafe/intext.scm 658 */
																			obj_t BgL_arg1615z00_6028;

																			{	/* Unsafe/intext.scm 646 */
																				obj_t BgL_newz00_6029;

																				BgL_newz00_6029 =
																					create_struct
																					(BGl_symbol3357z00zz__intextz00,
																					(int) (((long) 4)));
																				{	/* Unsafe/intext.scm 646 */
																					obj_t BgL_auxz00_10986;
																					int BgL_tmpz00_10984;

																					BgL_auxz00_10986 = BINT(((long) -1));
																					BgL_tmpz00_10984 = (int) (((long) 3));
																					STRUCT_SET(BgL_newz00_6029,
																						BgL_tmpz00_10984, BgL_auxz00_10986);
																				}
																				{	/* Unsafe/intext.scm 646 */
																					obj_t BgL_auxz00_10991;
																					int BgL_tmpz00_10989;

																					BgL_auxz00_10991 = BINT(((long) 0));
																					BgL_tmpz00_10989 = (int) (((long) 2));
																					STRUCT_SET(BgL_newz00_6029,
																						BgL_tmpz00_10989, BgL_auxz00_10991);
																				}
																				{	/* Unsafe/intext.scm 646 */
																					int BgL_tmpz00_10994;

																					BgL_tmpz00_10994 = (int) (((long) 1));
																					STRUCT_SET(BgL_newz00_6029,
																						BgL_tmpz00_10994, BgL_fz00_2672);
																				}
																				{	/* Unsafe/intext.scm 646 */
																					int BgL_tmpz00_10997;

																					BgL_tmpz00_10997 = (int) (((long) 0));
																					STRUCT_SET(BgL_newz00_6029,
																						BgL_tmpz00_10997, BgL_objz00_2670);
																				}
																				BgL_arg1615z00_6028 = BgL_newz00_6029;
																			}
																			BGl_hashtablezd2putz12zc0zz__hashz00
																				(BgL_tablez00_7363, BgL_objz00_2670,
																				BgL_arg1615z00_6028);
																		}
																		{
																			obj_t BgL_objz00_11001;

																			BgL_objz00_11001 = BgL_fz00_2672;
																			BgL_objz00_2736 = BgL_objz00_11001;
																			goto BGl_markze70ze7zz__intextz00;
																		}
																	}
																}
														}
													}
												}
											else
												{	/* Unsafe/intext.scm 1283 */
													if (STRUCTP(BgL_objz00_2736))
														{	/* Unsafe/intext.scm 1153 */
															obj_t BgL_mz00_6194;

															BgL_mz00_6194 =
																BGl_hashtablezd2getzd2zz__hashz00
																(BgL_tablez00_7363, BgL_objz00_2736);
															{	/* Unsafe/intext.scm 1154 */
																bool_t BgL_test3698z00_11005;

																if (STRUCTP(BgL_mz00_6194))
																	{	/* Unsafe/intext.scm 646 */
																		BgL_test3698z00_11005 =
																			(STRUCT_KEY(BgL_mz00_6194) ==
																			BGl_symbol3357z00zz__intextz00);
																	}
																else
																	{	/* Unsafe/intext.scm 646 */
																		BgL_test3698z00_11005 = ((bool_t) 0);
																	}
																if (BgL_test3698z00_11005)
																	{
																		obj_t BgL_mz00_11010;

																		BgL_mz00_11010 = BgL_mz00_6194;
																		BgL_mz00_2620 = BgL_mz00_11010;
																		goto BgL_zc3z04anonymousza31932ze3z87_2621;
																	}
																else
																	{	/* Unsafe/intext.scm 1156 */
																		bool_t BgL_tmpz00_11011;

																		BgL_objz00_2686 = BgL_objz00_2736;
																		{	/* Unsafe/intext.scm 658 */
																			obj_t BgL_arg1615z00_6034;

																			{	/* Unsafe/intext.scm 646 */
																				obj_t BgL_newz00_6035;

																				BgL_newz00_6035 =
																					create_struct
																					(BGl_symbol3357z00zz__intextz00,
																					(int) (((long) 4)));
																				{	/* Unsafe/intext.scm 646 */
																					obj_t BgL_auxz00_11016;
																					int BgL_tmpz00_11014;

																					BgL_auxz00_11016 = BINT(((long) -1));
																					BgL_tmpz00_11014 = (int) (((long) 3));
																					STRUCT_SET(BgL_newz00_6035,
																						BgL_tmpz00_11014, BgL_auxz00_11016);
																				}
																				{	/* Unsafe/intext.scm 646 */
																					obj_t BgL_auxz00_11021;
																					int BgL_tmpz00_11019;

																					BgL_auxz00_11021 = BINT(((long) 0));
																					BgL_tmpz00_11019 = (int) (((long) 2));
																					STRUCT_SET(BgL_newz00_6035,
																						BgL_tmpz00_11019, BgL_auxz00_11021);
																				}
																				{	/* Unsafe/intext.scm 646 */
																					int BgL_tmpz00_11024;

																					BgL_tmpz00_11024 = (int) (((long) 1));
																					STRUCT_SET(BgL_newz00_6035,
																						BgL_tmpz00_11024, BFALSE);
																				}
																				{	/* Unsafe/intext.scm 646 */
																					int BgL_tmpz00_11027;

																					BgL_tmpz00_11027 = (int) (((long) 0));
																					STRUCT_SET(BgL_newz00_6035,
																						BgL_tmpz00_11027, BgL_objz00_2686);
																				}
																				BgL_arg1615z00_6034 = BgL_newz00_6035;
																			}
																			BGl_hashtablezd2putz12zc0zz__hashz00
																				(BgL_tablez00_7363, BgL_objz00_2686,
																				BgL_arg1615z00_6034);
																		}
																		{	/* Unsafe/intext.scm 1212 */
																			obj_t BgL_keyz00_2688;
																			int BgL_lenz00_2689;

																			{	/* Unsafe/intext.scm 1212 */
																				obj_t BgL_res3020z00_6041;

																				BgL_res3020z00_6041 =
																					STRUCT_KEY(((obj_t) BgL_objz00_2686));
																				BgL_keyz00_2688 = BgL_res3020z00_6041;
																			}
																			BgL_lenz00_2689 =
																				STRUCT_LENGTH(
																				((obj_t) BgL_objz00_2686));
																			BGl_markze70ze7zz__intextz00
																				(BgL_nbrefz00_7365,
																				BgL_markzd2argzd2_7364,
																				BgL_tablez00_7363, BgL_keyz00_2688);
																			{
																				long BgL_iz00_6052;

																				BgL_iz00_6052 = ((long) 0);
																			BgL_for1093z00_6051:
																				if (
																					(BgL_iz00_6052 <
																						(long) (BgL_lenz00_2689)))
																					{	/* Unsafe/intext.scm 1215 */
																						{	/* Unsafe/intext.scm 1215 */
																							obj_t BgL_arg1968z00_6057;

																							BgL_arg1968z00_6057 =
																								STRUCT_REF(
																								((obj_t) BgL_objz00_2686),
																								(int) (BgL_iz00_6052));
																							BGl_markze70ze7zz__intextz00
																								(BgL_nbrefz00_7365,
																								BgL_markzd2argzd2_7364,
																								BgL_tablez00_7363,
																								BgL_arg1968z00_6057);
																						}
																						{
																							long BgL_iz00_11043;

																							BgL_iz00_11043 =
																								(BgL_iz00_6052 + ((long) 1));
																							BgL_iz00_6052 = BgL_iz00_11043;
																							goto BgL_for1093z00_6051;
																						}
																					}
																				else
																					{	/* Unsafe/intext.scm 1215 */
																						BgL_tmpz00_11011 = ((bool_t) 0);
																					}
																			}
																		}
																		return BBOOL(BgL_tmpz00_11011);
																	}
															}
														}
													else
														{	/* Unsafe/intext.scm 1286 */
															if (CELLP(BgL_objz00_2736))
																{	/* Unsafe/intext.scm 1153 */
																	obj_t BgL_mz00_6201;

																	BgL_mz00_6201 =
																		BGl_hashtablezd2getzd2zz__hashz00
																		(BgL_tablez00_7363, BgL_objz00_2736);
																	{	/* Unsafe/intext.scm 1154 */
																		bool_t BgL_test3702z00_11049;

																		if (STRUCTP(BgL_mz00_6201))
																			{	/* Unsafe/intext.scm 646 */
																				BgL_test3702z00_11049 =
																					(STRUCT_KEY(BgL_mz00_6201) ==
																					BGl_symbol3357z00zz__intextz00);
																			}
																		else
																			{	/* Unsafe/intext.scm 646 */
																				BgL_test3702z00_11049 = ((bool_t) 0);
																			}
																		if (BgL_test3702z00_11049)
																			{
																				obj_t BgL_mz00_11054;

																				BgL_mz00_11054 = BgL_mz00_6201;
																				BgL_mz00_2620 = BgL_mz00_11054;
																				goto
																					BgL_zc3z04anonymousza31932ze3z87_2621;
																			}
																		else
																			{	/* Unsafe/intext.scm 1154 */
																				BgL_objz00_2697 = BgL_objz00_2736;
																				{	/* Unsafe/intext.scm 658 */
																					obj_t BgL_arg1615z00_6064;

																					{	/* Unsafe/intext.scm 646 */
																						obj_t BgL_newz00_6065;

																						BgL_newz00_6065 =
																							create_struct
																							(BGl_symbol3357z00zz__intextz00,
																							(int) (((long) 4)));
																						{	/* Unsafe/intext.scm 646 */
																							obj_t BgL_auxz00_11059;
																							int BgL_tmpz00_11057;

																							BgL_auxz00_11059 =
																								BINT(((long) -1));
																							BgL_tmpz00_11057 =
																								(int) (((long) 3));
																							STRUCT_SET(BgL_newz00_6065,
																								BgL_tmpz00_11057,
																								BgL_auxz00_11059);
																						}
																						{	/* Unsafe/intext.scm 646 */
																							obj_t BgL_auxz00_11064;
																							int BgL_tmpz00_11062;

																							BgL_auxz00_11064 =
																								BINT(((long) 0));
																							BgL_tmpz00_11062 =
																								(int) (((long) 2));
																							STRUCT_SET(BgL_newz00_6065,
																								BgL_tmpz00_11062,
																								BgL_auxz00_11064);
																						}
																						{	/* Unsafe/intext.scm 646 */
																							int BgL_tmpz00_11067;

																							BgL_tmpz00_11067 =
																								(int) (((long) 1));
																							STRUCT_SET(BgL_newz00_6065,
																								BgL_tmpz00_11067, BFALSE);
																						}
																						{	/* Unsafe/intext.scm 646 */
																							int BgL_tmpz00_11070;

																							BgL_tmpz00_11070 =
																								(int) (((long) 0));
																							STRUCT_SET(BgL_newz00_6065,
																								BgL_tmpz00_11070,
																								BgL_objz00_2697);
																						}
																						BgL_arg1615z00_6064 =
																							BgL_newz00_6065;
																					}
																					BGl_hashtablezd2putz12zc0zz__hashz00
																						(BgL_tablez00_7363, BgL_objz00_2697,
																						BgL_arg1615z00_6064);
																				}
																				{	/* Unsafe/intext.scm 1220 */
																					obj_t BgL_arg1971z00_6063;

																					BgL_arg1971z00_6063 =
																						CELL_REF(((obj_t) BgL_objz00_2697));
																					{
																						obj_t BgL_objz00_11076;

																						BgL_objz00_11076 =
																							BgL_arg1971z00_6063;
																						BgL_objz00_2736 = BgL_objz00_11076;
																						goto BGl_markze70ze7zz__intextz00;
																					}
																				}
																			}
																	}
																}
															else
																{	/* Unsafe/intext.scm 1288 */
																	if (BGL_WEAKPTRP(BgL_objz00_2736))
																		{	/* Unsafe/intext.scm 1153 */
																			obj_t BgL_mz00_6209;

																			BgL_mz00_6209 =
																				BGl_hashtablezd2getzd2zz__hashz00
																				(BgL_tablez00_7363, BgL_objz00_2736);
																			{	/* Unsafe/intext.scm 1154 */
																				bool_t BgL_test3705z00_11080;

																				if (STRUCTP(BgL_mz00_6209))
																					{	/* Unsafe/intext.scm 646 */
																						BgL_test3705z00_11080 =
																							(STRUCT_KEY(BgL_mz00_6209) ==
																							BGl_symbol3357z00zz__intextz00);
																					}
																				else
																					{	/* Unsafe/intext.scm 646 */
																						BgL_test3705z00_11080 =
																							((bool_t) 0);
																					}
																				if (BgL_test3705z00_11080)
																					{
																						obj_t BgL_mz00_11085;

																						BgL_mz00_11085 = BgL_mz00_6209;
																						BgL_mz00_2620 = BgL_mz00_11085;
																						goto
																							BgL_zc3z04anonymousza31932ze3z87_2621;
																					}
																				else
																					{	/* Unsafe/intext.scm 1154 */
																						BgL_objz00_2700 = BgL_objz00_2736;
																						{	/* Unsafe/intext.scm 658 */
																							obj_t BgL_arg1615z00_6072;

																							{	/* Unsafe/intext.scm 646 */
																								obj_t BgL_newz00_6073;

																								BgL_newz00_6073 =
																									create_struct
																									(BGl_symbol3357z00zz__intextz00,
																									(int) (((long) 4)));
																								{	/* Unsafe/intext.scm 646 */
																									obj_t BgL_auxz00_11090;
																									int BgL_tmpz00_11088;

																									BgL_auxz00_11090 =
																										BINT(((long) -1));
																									BgL_tmpz00_11088 =
																										(int) (((long) 3));
																									STRUCT_SET(BgL_newz00_6073,
																										BgL_tmpz00_11088,
																										BgL_auxz00_11090);
																								}
																								{	/* Unsafe/intext.scm 646 */
																									obj_t BgL_auxz00_11095;
																									int BgL_tmpz00_11093;

																									BgL_auxz00_11095 =
																										BINT(((long) 0));
																									BgL_tmpz00_11093 =
																										(int) (((long) 2));
																									STRUCT_SET(BgL_newz00_6073,
																										BgL_tmpz00_11093,
																										BgL_auxz00_11095);
																								}
																								{	/* Unsafe/intext.scm 646 */
																									int BgL_tmpz00_11098;

																									BgL_tmpz00_11098 =
																										(int) (((long) 1));
																									STRUCT_SET(BgL_newz00_6073,
																										BgL_tmpz00_11098, BFALSE);
																								}
																								{	/* Unsafe/intext.scm 646 */
																									int BgL_tmpz00_11101;

																									BgL_tmpz00_11101 =
																										(int) (((long) 0));
																									STRUCT_SET(BgL_newz00_6073,
																										BgL_tmpz00_11101,
																										BgL_objz00_2700);
																								}
																								BgL_arg1615z00_6072 =
																									BgL_newz00_6073;
																							}
																							BGl_hashtablezd2putz12zc0zz__hashz00
																								(BgL_tablez00_7363,
																								BgL_objz00_2700,
																								BgL_arg1615z00_6072);
																						}
																						{	/* Unsafe/intext.scm 1225 */
																							obj_t BgL_arg1973z00_6071;

																							BgL_arg1973z00_6071 =
																								weakptr_data(
																								((obj_t) BgL_objz00_2700));
																							{
																								obj_t BgL_objz00_11107;

																								BgL_objz00_11107 =
																									BgL_arg1973z00_6071;
																								BgL_objz00_2736 =
																									BgL_objz00_11107;
																								goto
																									BGl_markze70ze7zz__intextz00;
																							}
																						}
																					}
																			}
																		}
																	else
																		{	/* Unsafe/intext.scm 1290 */
																			if (STRINGP(BgL_objz00_2736))
																				{	/* Unsafe/intext.scm 1153 */
																					obj_t BgL_mz00_6217;

																					BgL_mz00_6217 =
																						BGl_hashtablezd2getzd2zz__hashz00
																						(BgL_tablez00_7363,
																						BgL_objz00_2736);
																					{	/* Unsafe/intext.scm 1154 */
																						bool_t BgL_test3708z00_11111;

																						if (STRUCTP(BgL_mz00_6217))
																							{	/* Unsafe/intext.scm 646 */
																								BgL_test3708z00_11111 =
																									(STRUCT_KEY(BgL_mz00_6217) ==
																									BGl_symbol3357z00zz__intextz00);
																							}
																						else
																							{	/* Unsafe/intext.scm 646 */
																								BgL_test3708z00_11111 =
																									((bool_t) 0);
																							}
																						if (BgL_test3708z00_11111)
																							{
																								obj_t BgL_mz00_11116;

																								BgL_mz00_11116 = BgL_mz00_6217;
																								BgL_mz00_2620 = BgL_mz00_11116;
																								goto
																									BgL_zc3z04anonymousza31932ze3z87_2621;
																							}
																						else
																							{	/* Unsafe/intext.scm 658 */
																								obj_t BgL_arg1615z00_6224;

																								{	/* Unsafe/intext.scm 646 */
																									obj_t BgL_newz00_6225;

																									BgL_newz00_6225 =
																										create_struct
																										(BGl_symbol3357z00zz__intextz00,
																										(int) (((long) 4)));
																									{	/* Unsafe/intext.scm 646 */
																										obj_t BgL_auxz00_11121;
																										int BgL_tmpz00_11119;

																										BgL_auxz00_11121 =
																											BINT(((long) -1));
																										BgL_tmpz00_11119 =
																											(int) (((long) 3));
																										STRUCT_SET(BgL_newz00_6225,
																											BgL_tmpz00_11119,
																											BgL_auxz00_11121);
																									}
																									{	/* Unsafe/intext.scm 646 */
																										obj_t BgL_auxz00_11126;
																										int BgL_tmpz00_11124;

																										BgL_auxz00_11126 =
																											BINT(((long) 0));
																										BgL_tmpz00_11124 =
																											(int) (((long) 2));
																										STRUCT_SET(BgL_newz00_6225,
																											BgL_tmpz00_11124,
																											BgL_auxz00_11126);
																									}
																									{	/* Unsafe/intext.scm 646 */
																										int BgL_tmpz00_11129;

																										BgL_tmpz00_11129 =
																											(int) (((long) 1));
																										STRUCT_SET(BgL_newz00_6225,
																											BgL_tmpz00_11129, BFALSE);
																									}
																									{	/* Unsafe/intext.scm 646 */
																										int BgL_tmpz00_11132;

																										BgL_tmpz00_11132 =
																											(int) (((long) 0));
																										STRUCT_SET(BgL_newz00_6225,
																											BgL_tmpz00_11132,
																											BgL_objz00_2736);
																									}
																									BgL_arg1615z00_6224 =
																										BgL_newz00_6225;
																								}
																								return
																									BGl_hashtablezd2putz12zc0zz__hashz00
																									(BgL_tablez00_7363,
																									BgL_objz00_2736,
																									BgL_arg1615z00_6224);
																							}
																					}
																				}
																			else
																				{	/* Unsafe/intext.scm 1292 */
																					if (SYMBOLP(BgL_objz00_2736))
																						{	/* Unsafe/intext.scm 1295 */
																							obj_t BgL_arg2004z00_2750;

																							{	/* Unsafe/intext.scm 1295 */
																								obj_t BgL_res3053z00_6232;

																								BgL_res3053z00_6232 =
																									SYMBOL_TO_STRING
																									(BgL_objz00_2736);
																								BgL_arg2004z00_2750 =
																									BgL_res3053z00_6232;
																							}
																							{
																								obj_t BgL_objz00_11139;

																								BgL_objz00_11139 =
																									BgL_arg2004z00_2750;
																								BgL_objz00_2736 =
																									BgL_objz00_11139;
																								goto
																									BGl_markze70ze7zz__intextz00;
																							}
																						}
																					else
																						{	/* Unsafe/intext.scm 1294 */
																							if (KEYWORDP(BgL_objz00_2736))
																								{	/* Unsafe/intext.scm 1297 */
																									obj_t BgL_arg2007z00_2752;

																									{	/* Unsafe/intext.scm 1297 */
																										obj_t BgL_res3055z00_6235;

																										BgL_res3055z00_6235 =
																											KEYWORD_TO_STRING
																											(BgL_objz00_2736);
																										BgL_arg2007z00_2752 =
																											BgL_res3055z00_6235;
																									}
																									{
																										obj_t BgL_objz00_11143;

																										BgL_objz00_11143 =
																											BgL_arg2007z00_2752;
																										BgL_objz00_2736 =
																											BgL_objz00_11143;
																										goto
																											BGl_markze70ze7zz__intextz00;
																									}
																								}
																							else
																								{	/* Unsafe/intext.scm 1296 */
																									if (UCS2_STRINGP
																										(BgL_objz00_2736))
																										{	/* Unsafe/intext.scm 1153 */
																											obj_t BgL_mz00_6237;

																											BgL_mz00_6237 =
																												BGl_hashtablezd2getzd2zz__hashz00
																												(BgL_tablez00_7363,
																												BgL_objz00_2736);
																											{	/* Unsafe/intext.scm 1154 */
																												bool_t
																													BgL_test3713z00_11147;
																												if (STRUCTP
																													(BgL_mz00_6237))
																													{	/* Unsafe/intext.scm 646 */
																														BgL_test3713z00_11147
																															=
																															(STRUCT_KEY
																															(BgL_mz00_6237) ==
																															BGl_symbol3357z00zz__intextz00);
																													}
																												else
																													{	/* Unsafe/intext.scm 646 */
																														BgL_test3713z00_11147
																															= ((bool_t) 0);
																													}
																												if (BgL_test3713z00_11147)
																													{
																														obj_t
																															BgL_mz00_11152;
																														BgL_mz00_11152 =
																															BgL_mz00_6237;
																														BgL_mz00_2620 =
																															BgL_mz00_11152;
																														goto
																															BgL_zc3z04anonymousza31932ze3z87_2621;
																													}
																												else
																													{	/* Unsafe/intext.scm 1154 */
																														BgL_objz00_2721 =
																															BgL_objz00_2736;
																														{	/* Unsafe/intext.scm 1250 */
																															obj_t
																																BgL_strz00_6125;
																															{	/* Unsafe/intext.scm 1250 */
																																obj_t
																																	BgL_res3026z00_6127;
																																BgL_res3026z00_6127
																																	=
																																	ucs2_string_to_utf8_string
																																	(((obj_t)
																																		BgL_objz00_2721));
																																BgL_strz00_6125
																																	=
																																	BgL_res3026z00_6127;
																															}
																															{	/* Unsafe/intext.scm 658 */
																																obj_t
																																	BgL_arg1615z00_6128;
																																{	/* Unsafe/intext.scm 646 */
																																	obj_t
																																		BgL_newz00_6129;
																																	BgL_newz00_6129
																																		=
																																		create_struct
																																		(BGl_symbol3357z00zz__intextz00,
																																		(int) ((
																																				(long)
																																				4)));
																																	{	/* Unsafe/intext.scm 646 */
																																		obj_t
																																			BgL_auxz00_11159;
																																		int
																																			BgL_tmpz00_11157;
																																		BgL_auxz00_11159
																																			=
																																			BINT((
																																				(long)
																																				-1));
																																		BgL_tmpz00_11157
																																			=
																																			(int) ((
																																				(long)
																																				3));
																																		STRUCT_SET
																																			(BgL_newz00_6129,
																																			BgL_tmpz00_11157,
																																			BgL_auxz00_11159);
																																	}
																																	{	/* Unsafe/intext.scm 646 */
																																		obj_t
																																			BgL_auxz00_11164;
																																		int
																																			BgL_tmpz00_11162;
																																		BgL_auxz00_11164
																																			=
																																			BINT((
																																				(long)
																																				0));
																																		BgL_tmpz00_11162
																																			=
																																			(int) ((
																																				(long)
																																				2));
																																		STRUCT_SET
																																			(BgL_newz00_6129,
																																			BgL_tmpz00_11162,
																																			BgL_auxz00_11164);
																																	}
																																	{	/* Unsafe/intext.scm 646 */
																																		int
																																			BgL_tmpz00_11167;
																																		BgL_tmpz00_11167
																																			=
																																			(int) ((
																																				(long)
																																				1));
																																		STRUCT_SET
																																			(BgL_newz00_6129,
																																			BgL_tmpz00_11167,
																																			BgL_strz00_6125);
																																	}
																																	{	/* Unsafe/intext.scm 646 */
																																		int
																																			BgL_tmpz00_11170;
																																		BgL_tmpz00_11170
																																			=
																																			(int) ((
																																				(long)
																																				0));
																																		STRUCT_SET
																																			(BgL_newz00_6129,
																																			BgL_tmpz00_11170,
																																			BgL_objz00_2721);
																																	}
																																	BgL_arg1615z00_6128
																																		=
																																		BgL_newz00_6129;
																																}
																																BGl_hashtablezd2putz12zc0zz__hashz00
																																	(BgL_tablez00_7363,
																																	BgL_objz00_2721,
																																	BgL_arg1615z00_6128);
																															}
																															{
																																obj_t
																																	BgL_objz00_11174;
																																BgL_objz00_11174
																																	=
																																	BgL_strz00_6125;
																																BgL_objz00_2736
																																	=
																																	BgL_objz00_11174;
																																goto
																																	BGl_markze70ze7zz__intextz00;
																															}
																														}
																													}
																											}
																										}
																									else
																										{	/* Unsafe/intext.scm 1298 */
																											if (VECTORP
																												(BgL_objz00_2736))
																												{	/* Unsafe/intext.scm 1153 */
																													obj_t BgL_mz00_6245;

																													BgL_mz00_6245 =
																														BGl_hashtablezd2getzd2zz__hashz00
																														(BgL_tablez00_7363,
																														BgL_objz00_2736);
																													{	/* Unsafe/intext.scm 1154 */
																														bool_t
																															BgL_test3716z00_11178;
																														if (STRUCTP
																															(BgL_mz00_6245))
																															{	/* Unsafe/intext.scm 646 */
																																BgL_test3716z00_11178
																																	=
																																	(STRUCT_KEY
																																	(BgL_mz00_6245)
																																	==
																																	BGl_symbol3357z00zz__intextz00);
																															}
																														else
																															{	/* Unsafe/intext.scm 646 */
																																BgL_test3716z00_11178
																																	=
																																	((bool_t) 0);
																															}
																														if (BgL_test3716z00_11178)
																															{
																																obj_t
																																	BgL_mz00_11183;
																																BgL_mz00_11183 =
																																	BgL_mz00_6245;
																																BgL_mz00_2620 =
																																	BgL_mz00_11183;
																																goto
																																	BgL_zc3z04anonymousza31932ze3z87_2621;
																															}
																														else
																															{	/* Unsafe/intext.scm 1156 */
																																bool_t
																																	BgL_tmpz00_11184;
																																BgL_objz00_2703
																																	=
																																	BgL_objz00_2736;
																																{	/* Unsafe/intext.scm 658 */
																																	obj_t
																																		BgL_arg1615z00_6079;
																																	{	/* Unsafe/intext.scm 646 */
																																		obj_t
																																			BgL_newz00_6080;
																																		BgL_newz00_6080
																																			=
																																			create_struct
																																			(BGl_symbol3357z00zz__intextz00,
																																			(int) ((
																																					(long)
																																					4)));
																																		{	/* Unsafe/intext.scm 646 */
																																			obj_t
																																				BgL_auxz00_11189;
																																			int
																																				BgL_tmpz00_11187;
																																			BgL_auxz00_11189
																																				=
																																				BINT((
																																					(long)
																																					-1));
																																			BgL_tmpz00_11187
																																				=
																																				(int) ((
																																					(long)
																																					3));
																																			STRUCT_SET
																																				(BgL_newz00_6080,
																																				BgL_tmpz00_11187,
																																				BgL_auxz00_11189);
																																		}
																																		{	/* Unsafe/intext.scm 646 */
																																			obj_t
																																				BgL_auxz00_11194;
																																			int
																																				BgL_tmpz00_11192;
																																			BgL_auxz00_11194
																																				=
																																				BINT((
																																					(long)
																																					0));
																																			BgL_tmpz00_11192
																																				=
																																				(int) ((
																																					(long)
																																					2));
																																			STRUCT_SET
																																				(BgL_newz00_6080,
																																				BgL_tmpz00_11192,
																																				BgL_auxz00_11194);
																																		}
																																		{	/* Unsafe/intext.scm 646 */
																																			int
																																				BgL_tmpz00_11197;
																																			BgL_tmpz00_11197
																																				=
																																				(int) ((
																																					(long)
																																					1));
																																			STRUCT_SET
																																				(BgL_newz00_6080,
																																				BgL_tmpz00_11197,
																																				BFALSE);
																																		}
																																		{	/* Unsafe/intext.scm 646 */
																																			int
																																				BgL_tmpz00_11200;
																																			BgL_tmpz00_11200
																																				=
																																				(int) ((
																																					(long)
																																					0));
																																			STRUCT_SET
																																				(BgL_newz00_6080,
																																				BgL_tmpz00_11200,
																																				BgL_objz00_2703);
																																		}
																																		BgL_arg1615z00_6079
																																			=
																																			BgL_newz00_6080;
																																	}
																																	BGl_hashtablezd2putz12zc0zz__hashz00
																																		(BgL_tablez00_7363,
																																		BgL_objz00_2703,
																																		BgL_arg1615z00_6079);
																																}
																																{
																																	long
																																		BgL_iz00_6094;
																																	BgL_iz00_6094
																																		=
																																		((long) 0);
																																BgL_for1094z00_6093:
																																	if (
																																		(BgL_iz00_6094
																																			<
																																			VECTOR_LENGTH
																																			(((obj_t)
																																					BgL_objz00_2703))))
																																		{	/* Unsafe/intext.scm 1231 */
																																			{	/* Unsafe/intext.scm 1231 */
																																				obj_t
																																					BgL_arg1977z00_6099;
																																				BgL_arg1977z00_6099
																																					=
																																					VECTOR_REF
																																					(((obj_t) BgL_objz00_2703), BgL_iz00_6094);
																																				BGl_markze70ze7zz__intextz00
																																					(BgL_nbrefz00_7365,
																																					BgL_markzd2argzd2_7364,
																																					BgL_tablez00_7363,
																																					BgL_arg1977z00_6099);
																																			}
																																			{
																																				long
																																					BgL_iz00_11211;
																																				BgL_iz00_11211
																																					=
																																					(BgL_iz00_6094
																																					+
																																					((long) 1));
																																				BgL_iz00_6094
																																					=
																																					BgL_iz00_11211;
																																				goto
																																					BgL_for1094z00_6093;
																																			}
																																		}
																																	else
																																		{	/* Unsafe/intext.scm 1231 */
																																			BgL_tmpz00_11184
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																}
																																return
																																	BBOOL
																																	(BgL_tmpz00_11184);
																															}
																													}
																												}
																											else
																												{	/* Unsafe/intext.scm 1300 */
																													if (BGL_HVECTORP
																														(BgL_objz00_2736))
																														{	/* Unsafe/intext.scm 1153 */
																															obj_t
																																BgL_mz00_6252;
																															BgL_mz00_6252 =
																																BGl_hashtablezd2getzd2zz__hashz00
																																(BgL_tablez00_7363,
																																BgL_objz00_2736);
																															{	/* Unsafe/intext.scm 1154 */
																																bool_t
																																	BgL_test3720z00_11217;
																																if (STRUCTP
																																	(BgL_mz00_6252))
																																	{	/* Unsafe/intext.scm 646 */
																																		BgL_test3720z00_11217
																																			=
																																			(STRUCT_KEY
																																			(BgL_mz00_6252)
																																			==
																																			BGl_symbol3357z00zz__intextz00);
																																	}
																																else
																																	{	/* Unsafe/intext.scm 646 */
																																		BgL_test3720z00_11217
																																			=
																																			((bool_t)
																																			0);
																																	}
																																if (BgL_test3720z00_11217)
																																	{
																																		obj_t
																																			BgL_mz00_11222;
																																		BgL_mz00_11222
																																			=
																																			BgL_mz00_6252;
																																		BgL_mz00_2620
																																			=
																																			BgL_mz00_11222;
																																		goto
																																			BgL_zc3z04anonymousza31932ze3z87_2621;
																																	}
																																else
																																	{	/* Unsafe/intext.scm 658 */
																																		obj_t
																																			BgL_arg1615z00_6259;
																																		{	/* Unsafe/intext.scm 646 */
																																			obj_t
																																				BgL_newz00_6260;
																																			BgL_newz00_6260
																																				=
																																				create_struct
																																				(BGl_symbol3357z00zz__intextz00,
																																				(int) ((
																																						(long)
																																						4)));
																																			{	/* Unsafe/intext.scm 646 */
																																				obj_t
																																					BgL_auxz00_11227;
																																				int
																																					BgL_tmpz00_11225;
																																				BgL_auxz00_11227
																																					=
																																					BINT((
																																						(long)
																																						-1));
																																				BgL_tmpz00_11225
																																					=
																																					(int)
																																					(((long) 3));
																																				STRUCT_SET
																																					(BgL_newz00_6260,
																																					BgL_tmpz00_11225,
																																					BgL_auxz00_11227);
																																			}
																																			{	/* Unsafe/intext.scm 646 */
																																				obj_t
																																					BgL_auxz00_11232;
																																				int
																																					BgL_tmpz00_11230;
																																				BgL_auxz00_11232
																																					=
																																					BINT((
																																						(long)
																																						0));
																																				BgL_tmpz00_11230
																																					=
																																					(int)
																																					(((long) 2));
																																				STRUCT_SET
																																					(BgL_newz00_6260,
																																					BgL_tmpz00_11230,
																																					BgL_auxz00_11232);
																																			}
																																			{	/* Unsafe/intext.scm 646 */
																																				int
																																					BgL_tmpz00_11235;
																																				BgL_tmpz00_11235
																																					=
																																					(int)
																																					(((long) 1));
																																				STRUCT_SET
																																					(BgL_newz00_6260,
																																					BgL_tmpz00_11235,
																																					BFALSE);
																																			}
																																			{	/* Unsafe/intext.scm 646 */
																																				int
																																					BgL_tmpz00_11238;
																																				BgL_tmpz00_11238
																																					=
																																					(int)
																																					(((long) 0));
																																				STRUCT_SET
																																					(BgL_newz00_6260,
																																					BgL_tmpz00_11238,
																																					BgL_objz00_2736);
																																			}
																																			BgL_arg1615z00_6259
																																				=
																																				BgL_newz00_6260;
																																		}
																																		return
																																			BGl_hashtablezd2putz12zc0zz__hashz00
																																			(BgL_tablez00_7363,
																																			BgL_objz00_2736,
																																			BgL_arg1615z00_6259);
																																	}
																															}
																														}
																													else
																														{	/* Unsafe/intext.scm 1302 */
																															if (TVECTORP
																																(BgL_objz00_2736))
																																{	/* Unsafe/intext.scm 1153 */
																																	obj_t
																																		BgL_mz00_6266;
																																	BgL_mz00_6266
																																		=
																																		BGl_hashtablezd2getzd2zz__hashz00
																																		(BgL_tablez00_7363,
																																		BgL_objz00_2736);
																																	{	/* Unsafe/intext.scm 1154 */
																																		bool_t
																																			BgL_test3723z00_11245;
																																		if (STRUCTP
																																			(BgL_mz00_6266))
																																			{	/* Unsafe/intext.scm 646 */
																																				BgL_test3723z00_11245
																																					=
																																					(STRUCT_KEY
																																					(BgL_mz00_6266)
																																					==
																																					BGl_symbol3357z00zz__intextz00);
																																			}
																																		else
																																			{	/* Unsafe/intext.scm 646 */
																																				BgL_test3723z00_11245
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																		if (BgL_test3723z00_11245)
																																			{
																																				obj_t
																																					BgL_mz00_11250;
																																				BgL_mz00_11250
																																					=
																																					BgL_mz00_6266;
																																				BgL_mz00_2620
																																					=
																																					BgL_mz00_11250;
																																				goto
																																					BgL_zc3z04anonymousza31932ze3z87_2621;
																																			}
																																		else
																																			{	/* Unsafe/intext.scm 1154 */
																																				BgL_objz00_2713
																																					=
																																					BgL_objz00_2736;
																																				{	/* Unsafe/intext.scm 1235 */
																																					obj_t
																																						BgL_vz00_6105;
																																					BgL_vz00_6105
																																						=
																																						BGl_tvectorzd2ze3vectorz31zz__tvectorz00
																																						(BgL_objz00_2713);
																																					{	/* Unsafe/intext.scm 658 */
																																						obj_t
																																							BgL_arg1615z00_6107;
																																						{	/* Unsafe/intext.scm 646 */
																																							obj_t
																																								BgL_newz00_6108;
																																							BgL_newz00_6108
																																								=
																																								create_struct
																																								(BGl_symbol3357z00zz__intextz00,
																																								(int)
																																								(((long) 4)));
																																							{	/* Unsafe/intext.scm 646 */
																																								obj_t
																																									BgL_auxz00_11256;
																																								int
																																									BgL_tmpz00_11254;
																																								BgL_auxz00_11256
																																									=
																																									BINT
																																									(
																																									((long) -1));
																																								BgL_tmpz00_11254
																																									=
																																									(int)
																																									(
																																									((long) 3));
																																								STRUCT_SET
																																									(BgL_newz00_6108,
																																									BgL_tmpz00_11254,
																																									BgL_auxz00_11256);
																																							}
																																							{	/* Unsafe/intext.scm 646 */
																																								obj_t
																																									BgL_auxz00_11261;
																																								int
																																									BgL_tmpz00_11259;
																																								BgL_auxz00_11261
																																									=
																																									BINT
																																									(
																																									((long) 0));
																																								BgL_tmpz00_11259
																																									=
																																									(int)
																																									(
																																									((long) 2));
																																								STRUCT_SET
																																									(BgL_newz00_6108,
																																									BgL_tmpz00_11259,
																																									BgL_auxz00_11261);
																																							}
																																							{	/* Unsafe/intext.scm 646 */
																																								int
																																									BgL_tmpz00_11264;
																																								BgL_tmpz00_11264
																																									=
																																									(int)
																																									(
																																									((long) 1));
																																								STRUCT_SET
																																									(BgL_newz00_6108,
																																									BgL_tmpz00_11264,
																																									BgL_vz00_6105);
																																							}
																																							{	/* Unsafe/intext.scm 646 */
																																								int
																																									BgL_tmpz00_11267;
																																								BgL_tmpz00_11267
																																									=
																																									(int)
																																									(
																																									((long) 0));
																																								STRUCT_SET
																																									(BgL_newz00_6108,
																																									BgL_tmpz00_11267,
																																									BgL_objz00_2713);
																																							}
																																							BgL_arg1615z00_6107
																																								=
																																								BgL_newz00_6108;
																																						}
																																						BGl_hashtablezd2putz12zc0zz__hashz00
																																							(BgL_tablez00_7363,
																																							BgL_objz00_2713,
																																							BgL_arg1615z00_6107);
																																					}
																																					{	/* Unsafe/intext.scm 1237 */
																																						obj_t
																																							BgL_arg1981z00_6106;
																																						BgL_arg1981z00_6106
																																							=
																																							BGl_tvectorzd2idzd2zz__tvectorz00
																																							(BgL_objz00_2713);
																																						BGl_markze70ze7zz__intextz00
																																							(BgL_nbrefz00_7365,
																																							BgL_markzd2argzd2_7364,
																																							BgL_tablez00_7363,
																																							BgL_arg1981z00_6106);
																																					}
																																					{
																																						obj_t
																																							BgL_objz00_11273;
																																						BgL_objz00_11273
																																							=
																																							BgL_vz00_6105;
																																						BgL_objz00_2736
																																							=
																																							BgL_objz00_11273;
																																						goto
																																							BGl_markze70ze7zz__intextz00;
																																					}
																																				}
																																			}
																																	}
																																}
																															else
																																{	/* Unsafe/intext.scm 1304 */
																																	if (PROCEDUREP
																																		(BgL_objz00_2736))
																																		{	/* Unsafe/intext.scm 1153 */
																																			obj_t
																																				BgL_mz00_6274;
																																			BgL_mz00_6274
																																				=
																																				BGl_hashtablezd2getzd2zz__hashz00
																																				(BgL_tablez00_7363,
																																				BgL_objz00_2736);
																																			{	/* Unsafe/intext.scm 1154 */
																																				bool_t
																																					BgL_test3726z00_11277;
																																				if (STRUCTP(BgL_mz00_6274))
																																					{	/* Unsafe/intext.scm 646 */
																																						BgL_test3726z00_11277
																																							=
																																							(STRUCT_KEY
																																							(BgL_mz00_6274)
																																							==
																																							BGl_symbol3357z00zz__intextz00);
																																					}
																																				else
																																					{	/* Unsafe/intext.scm 646 */
																																						BgL_test3726z00_11277
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																				if (BgL_test3726z00_11277)
																																					{
																																						obj_t
																																							BgL_mz00_11282;
																																						BgL_mz00_11282
																																							=
																																							BgL_mz00_6274;
																																						BgL_mz00_2620
																																							=
																																							BgL_mz00_11282;
																																						goto
																																							BgL_zc3z04anonymousza31932ze3z87_2621;
																																					}
																																				else
																																					{	/* Unsafe/intext.scm 1154 */
																																						BgL_objz00_2729
																																							=
																																							BgL_objz00_2736;
																																						{	/* Unsafe/intext.scm 1262 */
																																							obj_t
																																								BgL_customz00_6153;
																																							BgL_customz00_6153
																																								=
																																								PROCEDURE_ENTRY
																																								(BGl_za2procedurezd2ze3stringza2z31zz__intextz00)
																																								(BGl_za2procedurezd2ze3stringza2z31zz__intextz00,
																																								BgL_objz00_2729,
																																								BEOA);
																																							{	/* Unsafe/intext.scm 658 */
																																								obj_t
																																									BgL_arg1615z00_6154;
																																								{	/* Unsafe/intext.scm 646 */
																																									obj_t
																																										BgL_newz00_6155;
																																									BgL_newz00_6155
																																										=
																																										create_struct
																																										(BGl_symbol3357z00zz__intextz00,
																																										(int)
																																										(((long) 4)));
																																									{	/* Unsafe/intext.scm 646 */
																																										obj_t
																																											BgL_auxz00_11291;
																																										int
																																											BgL_tmpz00_11289;
																																										BgL_auxz00_11291
																																											=
																																											BINT
																																											(
																																											((long) -1));
																																										BgL_tmpz00_11289
																																											=
																																											(int)
																																											(
																																											((long) 3));
																																										STRUCT_SET
																																											(BgL_newz00_6155,
																																											BgL_tmpz00_11289,
																																											BgL_auxz00_11291);
																																									}
																																									{	/* Unsafe/intext.scm 646 */
																																										obj_t
																																											BgL_auxz00_11296;
																																										int
																																											BgL_tmpz00_11294;
																																										BgL_auxz00_11296
																																											=
																																											BINT
																																											(
																																											((long) 0));
																																										BgL_tmpz00_11294
																																											=
																																											(int)
																																											(
																																											((long) 2));
																																										STRUCT_SET
																																											(BgL_newz00_6155,
																																											BgL_tmpz00_11294,
																																											BgL_auxz00_11296);
																																									}
																																									{	/* Unsafe/intext.scm 646 */
																																										int
																																											BgL_tmpz00_11299;
																																										BgL_tmpz00_11299
																																											=
																																											(int)
																																											(
																																											((long) 1));
																																										STRUCT_SET
																																											(BgL_newz00_6155,
																																											BgL_tmpz00_11299,
																																											BgL_customz00_6153);
																																									}
																																									{	/* Unsafe/intext.scm 646 */
																																										int
																																											BgL_tmpz00_11302;
																																										BgL_tmpz00_11302
																																											=
																																											(int)
																																											(
																																											((long) 0));
																																										STRUCT_SET
																																											(BgL_newz00_6155,
																																											BgL_tmpz00_11302,
																																											BgL_objz00_2729);
																																									}
																																									BgL_arg1615z00_6154
																																										=
																																										BgL_newz00_6155;
																																								}
																																								BGl_hashtablezd2putz12zc0zz__hashz00
																																									(BgL_tablez00_7363,
																																									BgL_objz00_2729,
																																									BgL_arg1615z00_6154);
																																							}
																																							{
																																								obj_t
																																									BgL_objz00_11306;
																																								BgL_objz00_11306
																																									=
																																									BgL_customz00_6153;
																																								BgL_objz00_2736
																																									=
																																									BgL_objz00_11306;
																																								goto
																																									BGl_markze70ze7zz__intextz00;
																																							}
																																						}
																																					}
																																			}
																																		}
																																	else
																																		{	/* Unsafe/intext.scm 1306 */
																																			if (CUSTOMP(BgL_objz00_2736))
																																				{	/* Unsafe/intext.scm 1153 */
																																					obj_t
																																						BgL_mz00_6282;
																																					BgL_mz00_6282
																																						=
																																						BGl_hashtablezd2getzd2zz__hashz00
																																						(BgL_tablez00_7363,
																																						BgL_objz00_2736);
																																					{	/* Unsafe/intext.scm 1154 */
																																						bool_t
																																							BgL_test3729z00_11310;
																																						if (STRUCTP(BgL_mz00_6282))
																																							{	/* Unsafe/intext.scm 646 */
																																								BgL_test3729z00_11310
																																									=
																																									(STRUCT_KEY
																																									(BgL_mz00_6282)
																																									==
																																									BGl_symbol3357z00zz__intextz00);
																																							}
																																						else
																																							{	/* Unsafe/intext.scm 646 */
																																								BgL_test3729z00_11310
																																									=
																																									(
																																									(bool_t)
																																									0);
																																							}
																																						if (BgL_test3729z00_11310)
																																							{
																																								obj_t
																																									BgL_mz00_11315;
																																								BgL_mz00_11315
																																									=
																																									BgL_mz00_6282;
																																								BgL_mz00_2620
																																									=
																																									BgL_mz00_11315;
																																								goto
																																									BgL_zc3z04anonymousza31932ze3z87_2621;
																																							}
																																						else
																																							{	/* Unsafe/intext.scm 1154 */
																																								BgL_objz00_2724
																																									=
																																									BgL_objz00_2736;
																																								{	/* Unsafe/intext.scm 1256 */
																																									obj_t
																																										BgL_vz00_6134;
																																									{	/* Unsafe/intext.scm 1256 */
																																										obj_t
																																											BgL_fun1987z00_6135;
																																										{	/* Unsafe/intext.scm 1256 */
																																											char
																																												*BgL_arg1986z00_6136;
																																											{	/* Unsafe/intext.scm 1256 */
																																												char
																																													*BgL_res3027z00_6138;
																																												BgL_res3027z00_6138
																																													=
																																													CUSTOM_IDENTIFIER
																																													(
																																													((obj_t) BgL_objz00_2724));
																																												BgL_arg1986z00_6136
																																													=
																																													BgL_res3027z00_6138;
																																											}
																																											{	/* Unsafe/intext.scm 1378 */
																																												obj_t
																																													BgL_cellz00_6139;
																																												BgL_cellz00_6139
																																													=
																																													BGl_assocz00zz__r4_pairs_and_lists_6_3z00
																																													(string_to_bstring
																																													(BgL_arg1986z00_6136),
																																													BGl_za2customzd2serializa7ationza2z75zz__intextz00);
																																												if (PAIRP(BgL_cellz00_6139))
																																													{	/* Unsafe/intext.scm 1379 */
																																														BgL_fun1987z00_6135
																																															=
																																															CAR
																																															(CDR
																																															(BgL_cellz00_6139));
																																													}
																																												else
																																													{	/* Unsafe/intext.scm 1379 */
																																														BgL_fun1987z00_6135
																																															=
																																															BGl_errorz00zz__errorz00
																																															(BGl_string3288z00zz__intextz00,
																																															BGl_string3359z00zz__intextz00,
																																															BGl_excerptz00zz__intextz00
																																															(string_to_bstring
																																																(BgL_arg1986z00_6136)));
																																													}
																																											}
																																										}
																																										BgL_vz00_6134
																																											=
																																											PROCEDURE_ENTRY
																																											(BgL_fun1987z00_6135)
																																											(BgL_fun1987z00_6135,
																																											BgL_objz00_2724,
																																											BgL_markzd2argzd2_7364,
																																											BEOA);
																																									}
																																									{	/* Unsafe/intext.scm 658 */
																																										obj_t
																																											BgL_arg1615z00_6147;
																																										{	/* Unsafe/intext.scm 646 */
																																											obj_t
																																												BgL_newz00_6148;
																																											BgL_newz00_6148
																																												=
																																												create_struct
																																												(BGl_symbol3357z00zz__intextz00,
																																												(int)
																																												(((long) 4)));
																																											{	/* Unsafe/intext.scm 646 */
																																												obj_t
																																													BgL_auxz00_11336;
																																												int
																																													BgL_tmpz00_11334;
																																												BgL_auxz00_11336
																																													=
																																													BINT
																																													(
																																													((long) -1));
																																												BgL_tmpz00_11334
																																													=
																																													(int)
																																													(
																																													((long) 3));
																																												STRUCT_SET
																																													(BgL_newz00_6148,
																																													BgL_tmpz00_11334,
																																													BgL_auxz00_11336);
																																											}
																																											{	/* Unsafe/intext.scm 646 */
																																												obj_t
																																													BgL_auxz00_11341;
																																												int
																																													BgL_tmpz00_11339;
																																												BgL_auxz00_11341
																																													=
																																													BINT
																																													(
																																													((long) 0));
																																												BgL_tmpz00_11339
																																													=
																																													(int)
																																													(
																																													((long) 2));
																																												STRUCT_SET
																																													(BgL_newz00_6148,
																																													BgL_tmpz00_11339,
																																													BgL_auxz00_11341);
																																											}
																																											{	/* Unsafe/intext.scm 646 */
																																												int
																																													BgL_tmpz00_11344;
																																												BgL_tmpz00_11344
																																													=
																																													(int)
																																													(
																																													((long) 1));
																																												STRUCT_SET
																																													(BgL_newz00_6148,
																																													BgL_tmpz00_11344,
																																													BgL_vz00_6134);
																																											}
																																											{	/* Unsafe/intext.scm 646 */
																																												int
																																													BgL_tmpz00_11347;
																																												BgL_tmpz00_11347
																																													=
																																													(int)
																																													(
																																													((long) 0));
																																												STRUCT_SET
																																													(BgL_newz00_6148,
																																													BgL_tmpz00_11347,
																																													BgL_objz00_2724);
																																											}
																																											BgL_arg1615z00_6147
																																												=
																																												BgL_newz00_6148;
																																										}
																																										BGl_hashtablezd2putz12zc0zz__hashz00
																																											(BgL_tablez00_7363,
																																											BgL_objz00_2724,
																																											BgL_arg1615z00_6147);
																																									}
																																									{
																																										obj_t
																																											BgL_objz00_11351;
																																										BgL_objz00_11351
																																											=
																																											BgL_vz00_6134;
																																										BgL_objz00_2736
																																											=
																																											BgL_objz00_11351;
																																										goto
																																											BGl_markze70ze7zz__intextz00;
																																									}
																																								}
																																							}
																																					}
																																				}
																																			else
																																				{	/* Unsafe/intext.scm 1308 */
																																					if (PROCESSP(BgL_objz00_2736))
																																						{	/* Unsafe/intext.scm 1153 */
																																							obj_t
																																								BgL_mz00_6290;
																																							BgL_mz00_6290
																																								=
																																								BGl_hashtablezd2getzd2zz__hashz00
																																								(BgL_tablez00_7363,
																																								BgL_objz00_2736);
																																							{	/* Unsafe/intext.scm 1154 */
																																								bool_t
																																									BgL_test3733z00_11355;
																																								if (STRUCTP(BgL_mz00_6290))
																																									{	/* Unsafe/intext.scm 646 */
																																										BgL_test3733z00_11355
																																											=
																																											(STRUCT_KEY
																																											(BgL_mz00_6290)
																																											==
																																											BGl_symbol3357z00zz__intextz00);
																																									}
																																								else
																																									{	/* Unsafe/intext.scm 646 */
																																										BgL_test3733z00_11355
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																								if (BgL_test3733z00_11355)
																																									{
																																										obj_t
																																											BgL_mz00_11360;
																																										BgL_mz00_11360
																																											=
																																											BgL_mz00_6290;
																																										BgL_mz00_2620
																																											=
																																											BgL_mz00_11360;
																																										goto
																																											BgL_zc3z04anonymousza31932ze3z87_2621;
																																									}
																																								else
																																									{	/* Unsafe/intext.scm 1154 */
																																										return
																																											PROCEDURE_ENTRY
																																											(BGl_za2processzd2ze3stringza2z31zz__intextz00)
																																											(BGl_za2processzd2ze3stringza2z31zz__intextz00,
																																											BgL_objz00_2736,
																																											BEOA);
																																									}
																																							}
																																						}
																																					else
																																						{	/* Unsafe/intext.scm 1310 */
																																							if (OPAQUEP(BgL_objz00_2736))
																																								{	/* Unsafe/intext.scm 1153 */
																																									obj_t
																																										BgL_mz00_6298;
																																									BgL_mz00_6298
																																										=
																																										BGl_hashtablezd2getzd2zz__hashz00
																																										(BgL_tablez00_7363,
																																										BgL_objz00_2736);
																																									{	/* Unsafe/intext.scm 1154 */
																																										bool_t
																																											BgL_test3736z00_11368;
																																										if (STRUCTP(BgL_mz00_6298))
																																											{	/* Unsafe/intext.scm 646 */
																																												BgL_test3736z00_11368
																																													=
																																													(STRUCT_KEY
																																													(BgL_mz00_6298)
																																													==
																																													BGl_symbol3357z00zz__intextz00);
																																											}
																																										else
																																											{	/* Unsafe/intext.scm 646 */
																																												BgL_test3736z00_11368
																																													=
																																													(
																																													(bool_t)
																																													0);
																																											}
																																										if (BgL_test3736z00_11368)
																																											{
																																												obj_t
																																													BgL_mz00_11373;
																																												BgL_mz00_11373
																																													=
																																													BgL_mz00_6298;
																																												BgL_mz00_2620
																																													=
																																													BgL_mz00_11373;
																																												goto
																																													BgL_zc3z04anonymousza31932ze3z87_2621;
																																											}
																																										else
																																											{	/* Unsafe/intext.scm 1154 */
																																												return
																																													PROCEDURE_ENTRY
																																													(BGl_za2opaquezd2ze3stringza2z31zz__intextz00)
																																													(BGl_za2opaquezd2ze3stringza2z31zz__intextz00,
																																													BgL_objz00_2736,
																																													BEOA);
																																											}
																																									}
																																								}
																																							else
																																								{	/* Unsafe/intext.scm 1312 */
																																									if (POINTERP(BgL_objz00_2736))
																																										{	/* Unsafe/intext.scm 1153 */
																																											obj_t
																																												BgL_mz00_6305;
																																											BgL_mz00_6305
																																												=
																																												BGl_hashtablezd2getzd2zz__hashz00
																																												(BgL_tablez00_7363,
																																												BgL_objz00_2736);
																																											{	/* Unsafe/intext.scm 1154 */
																																												bool_t
																																													BgL_test3739z00_11381;
																																												if (STRUCTP(BgL_mz00_6305))
																																													{	/* Unsafe/intext.scm 646 */
																																														BgL_test3739z00_11381
																																															=
																																															(STRUCT_KEY
																																															(BgL_mz00_6305)
																																															==
																																															BGl_symbol3357z00zz__intextz00);
																																													}
																																												else
																																													{	/* Unsafe/intext.scm 646 */
																																														BgL_test3739z00_11381
																																															=
																																															(
																																															(bool_t)
																																															0);
																																													}
																																												if (BgL_test3739z00_11381)
																																													{
																																														obj_t
																																															BgL_mz00_11386;
																																														BgL_mz00_11386
																																															=
																																															BgL_mz00_6305;
																																														BgL_mz00_2620
																																															=
																																															BgL_mz00_11386;
																																														goto
																																															BgL_zc3z04anonymousza31932ze3z87_2621;
																																													}
																																												else
																																													{	/* Unsafe/intext.scm 1154 */
																																														return
																																															BFALSE;
																																													}
																																											}
																																										}
																																									else
																																										{	/* Unsafe/intext.scm 1314 */
																																											return
																																												BFALSE;
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

	}



/* marked-pair-length */
	long BGl_markedzd2pairzd2lengthz00zz__intextz00(obj_t BgL_tablez00_58,
		obj_t BgL_lz00_59)
	{
		{	/* Unsafe/intext.scm 1324 */
			{
				obj_t BgL_lz00_2787;
				long BgL_rz00_2788;

				BgL_lz00_2787 = BgL_lz00_59;
				BgL_rz00_2788 = ((long) 1);
			BgL_zc3z04anonymousza32019ze3z87_2789:
				{	/* Unsafe/intext.scm 1327 */
					obj_t BgL_vcdrz00_2790;

					BgL_vcdrz00_2790 = CDR(((obj_t) BgL_lz00_2787));
					if (PAIRP(BgL_vcdrz00_2790))
						{	/* Unsafe/intext.scm 1329 */
							obj_t BgL_markz00_2792;

							BgL_markz00_2792 =
								BGl_hashtablezd2getzd2zz__hashz00(BgL_tablez00_58,
								BgL_vcdrz00_2790);
							{	/* Unsafe/intext.scm 1330 */
								bool_t BgL_test3742z00_11392;

								if (
									((long) CINT(STRUCT_REF(
												((obj_t) BgL_markz00_2792),
												(int) (((long) 2)))) > ((long) 0)))
									{	/* Unsafe/intext.scm 1330 */
										BgL_test3742z00_11392 = ((bool_t) 1);
									}
								else
									{	/* Unsafe/intext.scm 1330 */
										BgL_test3742z00_11392 =
											(
											(long) CINT(STRUCT_REF(
													((obj_t) BgL_markz00_2792),
													(int) (((long) 3)))) >= ((long) 0));
									}
								if (BgL_test3742z00_11392)
									{	/* Unsafe/intext.scm 1330 */
										return (BgL_rz00_2788 + ((long) 1));
									}
								else
									{
										long BgL_rz00_11406;
										obj_t BgL_lz00_11405;

										BgL_lz00_11405 = BgL_vcdrz00_2790;
										BgL_rz00_11406 = (BgL_rz00_2788 + ((long) 1));
										BgL_rz00_2788 = BgL_rz00_11406;
										BgL_lz00_2787 = BgL_lz00_11405;
										goto BgL_zc3z04anonymousza32019ze3z87_2789;
									}
							}
						}
					else
						{	/* Unsafe/intext.scm 1328 */
							return (BgL_rz00_2788 + ((long) 1));
		}}}}

	}



/* make-serialization-substring */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2serializa7ationzd2substringza7zz__intextz00(obj_t BgL_strz00_60,
		long BgL_offsetz00_61, long BgL_siza7eza7_62)
	{
		{	/* Unsafe/intext.scm 1339 */
			{	/* Unsafe/intext.scm 129 */
				obj_t BgL_newz00_6327;

				BgL_newz00_6327 =
					create_struct(BGl_symbol3349z00zz__intextz00, (int) (((long) 3)));
				{	/* Unsafe/intext.scm 129 */
					obj_t BgL_auxz00_11413;
					int BgL_tmpz00_11411;

					BgL_auxz00_11413 = BINT(BgL_siza7eza7_62);
					BgL_tmpz00_11411 = (int) (((long) 2));
					STRUCT_SET(BgL_newz00_6327, BgL_tmpz00_11411, BgL_auxz00_11413);
				}
				{	/* Unsafe/intext.scm 129 */
					obj_t BgL_auxz00_11418;
					int BgL_tmpz00_11416;

					BgL_auxz00_11418 = BINT(BgL_offsetz00_61);
					BgL_tmpz00_11416 = (int) (((long) 1));
					STRUCT_SET(BgL_newz00_6327, BgL_tmpz00_11416, BgL_auxz00_11418);
				}
				{	/* Unsafe/intext.scm 129 */
					int BgL_tmpz00_11421;

					BgL_tmpz00_11421 = (int) (((long) 0));
					STRUCT_SET(BgL_newz00_6327, BgL_tmpz00_11421, BgL_strz00_60);
				}
				return BgL_newz00_6327;
			}
		}

	}



/* &make-serialization-substring */
	obj_t BGl_z62makezd2serializa7ationzd2substringzc5zz__intextz00(obj_t
		BgL_envz00_7306, obj_t BgL_strz00_7307, obj_t BgL_offsetz00_7308,
		obj_t BgL_siza7eza7_7309)
	{
		{	/* Unsafe/intext.scm 1339 */
			{	/* Unsafe/intext.scm 129 */
				long BgL_auxz00_11440;
				long BgL_auxz00_11431;
				obj_t BgL_auxz00_11424;

				{	/* Unsafe/intext.scm 129 */
					obj_t BgL_tmpz00_11441;

					if (INTEGERP(BgL_siza7eza7_7309))
						{	/* Unsafe/intext.scm 129 */
							BgL_tmpz00_11441 = BgL_siza7eza7_7309;
						}
					else
						{
							obj_t BgL_auxz00_11444;

							BgL_auxz00_11444 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3298z00zz__intextz00,
								BINT(((long) 4400)), BGl_string3360z00zz__intextz00,
								BGl_string3361z00zz__intextz00, BgL_siza7eza7_7309);
							FAILURE(BgL_auxz00_11444, BFALSE, BFALSE);
						}
					BgL_auxz00_11440 = (long) CINT(BgL_tmpz00_11441);
				}
				{	/* Unsafe/intext.scm 129 */
					obj_t BgL_tmpz00_11432;

					if (INTEGERP(BgL_offsetz00_7308))
						{	/* Unsafe/intext.scm 129 */
							BgL_tmpz00_11432 = BgL_offsetz00_7308;
						}
					else
						{
							obj_t BgL_auxz00_11435;

							BgL_auxz00_11435 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3298z00zz__intextz00,
								BINT(((long) 4400)), BGl_string3360z00zz__intextz00,
								BGl_string3361z00zz__intextz00, BgL_offsetz00_7308);
							FAILURE(BgL_auxz00_11435, BFALSE, BFALSE);
						}
					BgL_auxz00_11431 = (long) CINT(BgL_tmpz00_11432);
				}
				if (STRINGP(BgL_strz00_7307))
					{	/* Unsafe/intext.scm 129 */
						BgL_auxz00_11424 = BgL_strz00_7307;
					}
				else
					{
						obj_t BgL_auxz00_11427;

						BgL_auxz00_11427 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3298z00zz__intextz00,
							BINT(((long) 4400)), BGl_string3360z00zz__intextz00,
							BGl_string3300z00zz__intextz00, BgL_strz00_7307);
						FAILURE(BgL_auxz00_11427, BFALSE, BFALSE);
					}
				return
					BGl_makezd2serializa7ationzd2substringza7zz__intextz00
					(BgL_auxz00_11424, BgL_auxz00_11431, BgL_auxz00_11440);
			}
		}

	}



/* register-custom-serialization! */
	BGL_EXPORTED_DEF obj_t
		BGl_registerzd2customzd2serializa7ationz12zb5zz__intextz00(obj_t
		BgL_identz00_63, obj_t BgL_serializa7erza7_64,
		obj_t BgL_unserializa7erza7_65)
	{
		{	/* Unsafe/intext.scm 1350 */
			{	/* Unsafe/intext.scm 1351 */
				obj_t BgL_cellz00_2801;

				BgL_cellz00_2801 =
					BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_identz00_63,
					BGl_za2customzd2serializa7ationza2z75zz__intextz00);
				if (PAIRP(BgL_cellz00_2801))
					{	/* Unsafe/intext.scm 1352 */
						return BFALSE;
					}
				else
					{	/* Unsafe/intext.scm 1353 */
						obj_t BgL_procz00_2803;

						{	/* Unsafe/intext.scm 1353 */
							int BgL_aux1096z00_2809;

							BgL_aux1096z00_2809 = PROCEDURE_ARITY(BgL_serializa7erza7_64);
							switch ((long) (BgL_aux1096z00_2809))
								{
								case ((long) 1):

									{	/* Unsafe/intext.scm 1355 */
										obj_t BgL_zc3z04anonymousza32036ze3z87_7310;

										BgL_zc3z04anonymousza32036ze3z87_7310 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza32036ze3ze5zz__intextz00,
											(int) (((long) 2)), (int) (((long) 1)));
										PROCEDURE_SET(BgL_zc3z04anonymousza32036ze3z87_7310,
											(int) (((long) 0)), BgL_serializa7erza7_64);
										BgL_procz00_2803 = BgL_zc3z04anonymousza32036ze3z87_7310;
									} break;
								case ((long) 2):

									BgL_procz00_2803 = BgL_serializa7erza7_64;
									break;
								default:
									BgL_procz00_2803 =
										BGl_errorz00zz__errorz00(BGl_string3362z00zz__intextz00,
										BGl_string3363z00zz__intextz00, BgL_serializa7erza7_64);
								}
						}
						{	/* Unsafe/intext.scm 1362 */
							obj_t BgL_arg2031z00_2804;

							{	/* Unsafe/intext.scm 1362 */
								obj_t BgL_list2032z00_2805;

								{	/* Unsafe/intext.scm 1362 */
									obj_t BgL_arg2033z00_2806;

									{	/* Unsafe/intext.scm 1362 */
										obj_t BgL_arg2034z00_2807;

										BgL_arg2034z00_2807 =
											MAKE_YOUNG_PAIR(BgL_unserializa7erza7_65, BNIL);
										BgL_arg2033z00_2806 =
											MAKE_YOUNG_PAIR(BgL_procz00_2803, BgL_arg2034z00_2807);
									}
									BgL_list2032z00_2805 =
										MAKE_YOUNG_PAIR(BgL_identz00_63, BgL_arg2033z00_2806);
								}
								BgL_arg2031z00_2804 = BgL_list2032z00_2805;
							}
							return (BGl_za2customzd2serializa7ationza2z75zz__intextz00 =
								MAKE_YOUNG_PAIR(BgL_arg2031z00_2804,
									BGl_za2customzd2serializa7ationza2z75zz__intextz00), BUNSPEC);
						}
					}
			}
		}

	}



/* &register-custom-serialization! */
	obj_t BGl_z62registerzd2customzd2serializa7ationz12zd7zz__intextz00(obj_t
		BgL_envz00_7311, obj_t BgL_identz00_7312, obj_t BgL_serializa7erza7_7313,
		obj_t BgL_unserializa7erza7_7314)
	{
		{	/* Unsafe/intext.scm 1350 */
			{	/* Unsafe/intext.scm 1351 */
				obj_t BgL_auxz00_11480;
				obj_t BgL_auxz00_11473;
				obj_t BgL_auxz00_11466;

				if (PROCEDUREP(BgL_unserializa7erza7_7314))
					{	/* Unsafe/intext.scm 1351 */
						BgL_auxz00_11480 = BgL_unserializa7erza7_7314;
					}
				else
					{
						obj_t BgL_auxz00_11483;

						BgL_auxz00_11483 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3298z00zz__intextz00,
							BINT(((long) 40270)), BGl_string3364z00zz__intextz00,
							BGl_string3365z00zz__intextz00, BgL_unserializa7erza7_7314);
						FAILURE(BgL_auxz00_11483, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_serializa7erza7_7313))
					{	/* Unsafe/intext.scm 1351 */
						BgL_auxz00_11473 = BgL_serializa7erza7_7313;
					}
				else
					{
						obj_t BgL_auxz00_11476;

						BgL_auxz00_11476 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3298z00zz__intextz00,
							BINT(((long) 40270)), BGl_string3364z00zz__intextz00,
							BGl_string3365z00zz__intextz00, BgL_serializa7erza7_7313);
						FAILURE(BgL_auxz00_11476, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_identz00_7312))
					{	/* Unsafe/intext.scm 1351 */
						BgL_auxz00_11466 = BgL_identz00_7312;
					}
				else
					{
						obj_t BgL_auxz00_11469;

						BgL_auxz00_11469 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3298z00zz__intextz00,
							BINT(((long) 40270)), BGl_string3364z00zz__intextz00,
							BGl_string3300z00zz__intextz00, BgL_identz00_7312);
						FAILURE(BgL_auxz00_11469, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2customzd2serializa7ationz12zb5zz__intextz00
					(BgL_auxz00_11466, BgL_auxz00_11473, BgL_auxz00_11480);
			}
		}

	}



/* &<@anonymous:2036> */
	obj_t BGl_z62zc3z04anonymousza32036ze3ze5zz__intextz00(obj_t BgL_envz00_7315,
		obj_t BgL_oz00_7317, obj_t BgL_markzd2argzd2_7318)
	{
		{	/* Unsafe/intext.scm 1355 */
			{	/* Unsafe/intext.scm 1355 */
				obj_t BgL_serializa7erza7_7316;

				BgL_serializa7erza7_7316 =
					((obj_t) PROCEDURE_REF(BgL_envz00_7315, (int) (((long) 0))));
				return
					PROCEDURE_ENTRY(BgL_serializa7erza7_7316) (BgL_serializa7erza7_7316,
					BgL_oz00_7317, BEOA);
			}
		}

	}



/* excerpt */
	obj_t BGl_excerptz00zz__intextz00(obj_t BgL_objz00_66)
	{
		{	/* Unsafe/intext.scm 1368 */
			if (STRINGP(BgL_objz00_66))
				{	/* Unsafe/intext.scm 1370 */
					if ((STRING_LENGTH(BgL_objz00_66) <= ((long) 80)))
						{	/* Unsafe/intext.scm 1371 */
							return string_for_read(BgL_objz00_66);
						}
					else
						{	/* Unsafe/intext.scm 1371 */
							return
								string_append(string_for_read(c_substring(BgL_objz00_66,
										((long) 0), ((long) 80))), BGl_string3366z00zz__intextz00);
				}}
			else
				{	/* Unsafe/intext.scm 1370 */
					return BgL_objz00_66;
				}
		}

	}



/* get-custom-serialization */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2customzd2serializa7ationza7zz__intextz00(obj_t BgL_identz00_69)
	{
		{	/* Unsafe/intext.scm 1395 */
			{	/* Unsafe/intext.scm 1396 */
				obj_t BgL_cellz00_2826;

				BgL_cellz00_2826 =
					BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_identz00_69,
					BGl_za2customzd2serializa7ationza2z75zz__intextz00);
				if (PAIRP(BgL_cellz00_2826))
					{	/* Unsafe/intext.scm 1398 */
						obj_t BgL_val0_1157z00_2828;
						obj_t BgL_val1_1158z00_2829;

						BgL_val0_1157z00_2828 = CAR(CDR(BgL_cellz00_2826));
						BgL_val1_1158z00_2829 = CAR(CDR(CDR(BgL_cellz00_2826)));
						{	/* Unsafe/intext.scm 1398 */
							int BgL_res3099z00_6375;

							{	/* Unsafe/intext.scm 1398 */
								int BgL_tmpz00_11512;

								BgL_tmpz00_11512 = (int) (((long) 2));
								BgL_res3099z00_6375 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_11512);
							} BgL_res3099z00_6375;
						}
						{	/* Unsafe/intext.scm 1398 */
							int BgL_tmpz00_11515;

							BgL_tmpz00_11515 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_11515, BgL_val1_1158z00_2829);
						}
						return BgL_val0_1157z00_2828;
					}
				else
					{	/* Unsafe/intext.scm 1397 */
						{	/* Unsafe/intext.scm 1399 */
							int BgL_res3100z00_6376;

							{	/* Unsafe/intext.scm 1399 */
								int BgL_tmpz00_11518;

								BgL_tmpz00_11518 = (int) (((long) 2));
								BgL_res3100z00_6376 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_11518);
							} BgL_res3100z00_6376;
						}
						{	/* Unsafe/intext.scm 1399 */
							int BgL_tmpz00_11521;

							BgL_tmpz00_11521 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_11521, BFALSE);
						}
						return BFALSE;
					}
			}
		}

	}



/* &get-custom-serialization */
	obj_t BGl_z62getzd2customzd2serializa7ationzc5zz__intextz00(obj_t
		BgL_envz00_7319, obj_t BgL_identz00_7320)
	{
		{	/* Unsafe/intext.scm 1395 */
			{	/* Unsafe/intext.scm 1396 */
				obj_t BgL_auxz00_11524;

				if (STRINGP(BgL_identz00_7320))
					{	/* Unsafe/intext.scm 1396 */
						BgL_auxz00_11524 = BgL_identz00_7320;
					}
				else
					{
						obj_t BgL_auxz00_11527;

						BgL_auxz00_11527 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3298z00zz__intextz00,
							BINT(((long) 42235)), BGl_string3367z00zz__intextz00,
							BGl_string3300z00zz__intextz00, BgL_identz00_7320);
						FAILURE(BgL_auxz00_11527, BFALSE, BFALSE);
					}
				return
					BGl_getzd2customzd2serializa7ationza7zz__intextz00(BgL_auxz00_11524);
			}
		}

	}



/* register-procedure-serialization! */
	BGL_EXPORTED_DEF obj_t
		BGl_registerzd2procedurezd2serializa7ationz12zb5zz__intextz00(obj_t
		BgL_serializa7erza7_70, obj_t BgL_unserializa7erza7_71)
	{
		{	/* Unsafe/intext.scm 1418 */
			BGl_za2procedurezd2ze3stringza2z31zz__intextz00 = BgL_serializa7erza7_70;
			return (BGl_za2stringzd2ze3procedureza2z31zz__intextz00 =
				BgL_unserializa7erza7_71, BUNSPEC);
		}

	}



/* &register-procedure-serialization! */
	obj_t BGl_z62registerzd2procedurezd2serializa7ationz12zd7zz__intextz00(obj_t
		BgL_envz00_7321, obj_t BgL_serializa7erza7_7322,
		obj_t BgL_unserializa7erza7_7323)
	{
		{	/* Unsafe/intext.scm 1418 */
			{	/* Unsafe/intext.scm 1419 */
				obj_t BgL_auxz00_11539;
				obj_t BgL_auxz00_11532;

				if (PROCEDUREP(BgL_unserializa7erza7_7323))
					{	/* Unsafe/intext.scm 1419 */
						BgL_auxz00_11539 = BgL_unserializa7erza7_7323;
					}
				else
					{
						obj_t BgL_auxz00_11542;

						BgL_auxz00_11542 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3298z00zz__intextz00,
							BINT(((long) 43390)), BGl_string3368z00zz__intextz00,
							BGl_string3365z00zz__intextz00, BgL_unserializa7erza7_7323);
						FAILURE(BgL_auxz00_11542, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_serializa7erza7_7322))
					{	/* Unsafe/intext.scm 1419 */
						BgL_auxz00_11532 = BgL_serializa7erza7_7322;
					}
				else
					{
						obj_t BgL_auxz00_11535;

						BgL_auxz00_11535 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3298z00zz__intextz00,
							BINT(((long) 43390)), BGl_string3368z00zz__intextz00,
							BGl_string3365z00zz__intextz00, BgL_serializa7erza7_7322);
						FAILURE(BgL_auxz00_11535, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2procedurezd2serializa7ationz12zb5zz__intextz00
					(BgL_auxz00_11532, BgL_auxz00_11539);
			}
		}

	}



/* get-procedure-serialization */
	BGL_EXPORTED_DEF obj_t BGl_getzd2procedurezd2serializa7ationza7zz__intextz00()
	{
		{	/* Unsafe/intext.scm 1425 */
			return
				MAKE_YOUNG_PAIR(BGl_za2procedurezd2ze3stringza2z31zz__intextz00,
				BGl_za2stringzd2ze3procedureza2z31zz__intextz00);
		}

	}



/* &get-procedure-serialization */
	obj_t BGl_z62getzd2procedurezd2serializa7ationzc5zz__intextz00(obj_t
		BgL_envz00_7324)
	{
		{	/* Unsafe/intext.scm 1425 */
			return BGl_getzd2procedurezd2serializa7ationza7zz__intextz00();
		}

	}



/* register-process-serialization! */
	BGL_EXPORTED_DEF obj_t
		BGl_registerzd2processzd2serializa7ationz12zb5zz__intextz00(obj_t
		BgL_serializa7erza7_72, obj_t BgL_unserializa7erza7_73)
	{
		{	/* Unsafe/intext.scm 1445 */
			BGl_za2processzd2ze3stringza2z31zz__intextz00 = BgL_serializa7erza7_72;
			return (BGl_za2stringzd2ze3processza2z31zz__intextz00 =
				BgL_unserializa7erza7_73, BUNSPEC);
		}

	}



/* &register-process-serialization! */
	obj_t BGl_z62registerzd2processzd2serializa7ationz12zd7zz__intextz00(obj_t
		BgL_envz00_7325, obj_t BgL_serializa7erza7_7326,
		obj_t BgL_unserializa7erza7_7327)
	{
		{	/* Unsafe/intext.scm 1445 */
			{	/* Unsafe/intext.scm 1446 */
				obj_t BgL_auxz00_11556;
				obj_t BgL_auxz00_11549;

				if (PROCEDUREP(BgL_unserializa7erza7_7327))
					{	/* Unsafe/intext.scm 1446 */
						BgL_auxz00_11556 = BgL_unserializa7erza7_7327;
					}
				else
					{
						obj_t BgL_auxz00_11559;

						BgL_auxz00_11559 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3298z00zz__intextz00,
							BINT(((long) 44761)), BGl_string3369z00zz__intextz00,
							BGl_string3365z00zz__intextz00, BgL_unserializa7erza7_7327);
						FAILURE(BgL_auxz00_11559, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_serializa7erza7_7326))
					{	/* Unsafe/intext.scm 1446 */
						BgL_auxz00_11549 = BgL_serializa7erza7_7326;
					}
				else
					{
						obj_t BgL_auxz00_11552;

						BgL_auxz00_11552 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3298z00zz__intextz00,
							BINT(((long) 44761)), BGl_string3369z00zz__intextz00,
							BGl_string3365z00zz__intextz00, BgL_serializa7erza7_7326);
						FAILURE(BgL_auxz00_11552, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2processzd2serializa7ationz12zb5zz__intextz00
					(BgL_auxz00_11549, BgL_auxz00_11556);
			}
		}

	}



/* register-opaque-serialization! */
	BGL_EXPORTED_DEF obj_t
		BGl_registerzd2opaquezd2serializa7ationz12zb5zz__intextz00(obj_t
		BgL_serializa7erza7_74, obj_t BgL_unserializa7erza7_75)
	{
		{	/* Unsafe/intext.scm 1472 */
			BGl_za2opaquezd2ze3stringza2z31zz__intextz00 = BgL_serializa7erza7_74;
			return (BGl_za2stringzd2ze3opaqueza2z31zz__intextz00 =
				BgL_unserializa7erza7_75, BUNSPEC);
		}

	}



/* &register-opaque-serialization! */
	obj_t BGl_z62registerzd2opaquezd2serializa7ationz12zd7zz__intextz00(obj_t
		BgL_envz00_7328, obj_t BgL_serializa7erza7_7329,
		obj_t BgL_unserializa7erza7_7330)
	{
		{	/* Unsafe/intext.scm 1472 */
			{	/* Unsafe/intext.scm 1473 */
				obj_t BgL_auxz00_11571;
				obj_t BgL_auxz00_11564;

				if (PROCEDUREP(BgL_unserializa7erza7_7330))
					{	/* Unsafe/intext.scm 1473 */
						BgL_auxz00_11571 = BgL_unserializa7erza7_7330;
					}
				else
					{
						obj_t BgL_auxz00_11574;

						BgL_auxz00_11574 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3298z00zz__intextz00,
							BINT(((long) 46107)), BGl_string3370z00zz__intextz00,
							BGl_string3365z00zz__intextz00, BgL_unserializa7erza7_7330);
						FAILURE(BgL_auxz00_11574, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_serializa7erza7_7329))
					{	/* Unsafe/intext.scm 1473 */
						BgL_auxz00_11564 = BgL_serializa7erza7_7329;
					}
				else
					{
						obj_t BgL_auxz00_11567;

						BgL_auxz00_11567 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3298z00zz__intextz00,
							BINT(((long) 46107)), BGl_string3370z00zz__intextz00,
							BGl_string3365z00zz__intextz00, BgL_serializa7erza7_7329);
						FAILURE(BgL_auxz00_11567, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2opaquezd2serializa7ationz12zb5zz__intextz00
					(BgL_auxz00_11564, BgL_auxz00_11571);
			}
		}

	}



/* get-opaque-serialization */
	BGL_EXPORTED_DEF obj_t BGl_getzd2opaquezd2serializa7ationza7zz__intextz00()
	{
		{	/* Unsafe/intext.scm 1479 */
			{	/* Unsafe/intext.scm 1480 */
				obj_t BgL_val0_1163z00_2834;
				obj_t BgL_val1_1164z00_2835;

				BgL_val0_1163z00_2834 = BGl_za2opaquezd2ze3stringza2z31zz__intextz00;
				BgL_val1_1164z00_2835 = BGl_za2stringzd2ze3opaqueza2z31zz__intextz00;
				{	/* Unsafe/intext.scm 1480 */
					int BgL_res3101z00_6377;

					{	/* Unsafe/intext.scm 1480 */
						int BgL_tmpz00_11579;

						BgL_tmpz00_11579 = (int) (((long) 2));
						BgL_res3101z00_6377 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_11579);
					} BgL_res3101z00_6377;
				}
				{	/* Unsafe/intext.scm 1480 */
					int BgL_tmpz00_11582;

					BgL_tmpz00_11582 = (int) (((long) 1));
					BGL_MVALUES_VAL_SET(BgL_tmpz00_11582, BgL_val1_1164z00_2835);
				}
				return BgL_val0_1163z00_2834;
			}
		}

	}



/* &get-opaque-serialization */
	obj_t BGl_z62getzd2opaquezd2serializa7ationzc5zz__intextz00(obj_t
		BgL_envz00_7331)
	{
		{	/* Unsafe/intext.scm 1479 */
			return BGl_getzd2opaquezd2serializa7ationza7zz__intextz00();
		}

	}



/* register-class-serialization! */
	BGL_EXPORTED_DEF obj_t
		BGl_registerzd2classzd2serializa7ationz12zb5zz__intextz00(obj_t
		BgL_classz00_78, obj_t BgL_serializa7erza7_79,
		obj_t BgL_unserializa7erza7_80)
	{
		{	/* Unsafe/intext.scm 1496 */
			{
				obj_t BgL_unserializa7erza7_2866;
				long BgL_hashz00_2850;
				obj_t BgL_serializa7erza7_2851;

				{	/* Unsafe/intext.scm 1521 */
					long BgL_hashz00_2838;

					BgL_hashz00_2838 = BGl_classzd2hashzd2zz__objectz00(BgL_classz00_78);
					{	/* Unsafe/intext.scm 1521 */
						obj_t BgL_cellz00_2839;

						BgL_cellz00_2839 =
							BGl_assvz00zz__r4_pairs_and_lists_6_3z00(BINT(BgL_hashz00_2838),
							BGl_za2classzd2serializa7ationza2z75zz__intextz00);
						{	/* Unsafe/intext.scm 1522 */

							if (CBOOL(BgL_serializa7erza7_79))
								{	/* Unsafe/intext.scm 1527 */
									obj_t BgL_arg2049z00_2840;
									obj_t BgL_arg2050z00_2841;

									BgL_hashz00_2850 = BgL_hashz00_2838;
									BgL_serializa7erza7_2851 = BgL_serializa7erza7_79;
									{	/* Unsafe/intext.scm 1499 */
										int BgL_aux1098z00_2854;

										{	/* Unsafe/intext.scm 1499 */
											int BgL_res3102z00_6379;

											BgL_res3102z00_6379 =
												PROCEDURE_ARITY(((obj_t) BgL_serializa7erza7_2851));
											BgL_aux1098z00_2854 = BgL_res3102z00_6379;
										}
										switch ((long) (BgL_aux1098z00_2854))
											{
											case ((long) 1):

												{	/* Unsafe/intext.scm 1501 */
													obj_t BgL_zc3z04anonymousza32063ze3z87_7334;

													BgL_zc3z04anonymousza32063ze3z87_7334 =
														MAKE_FX_PROCEDURE
														(BGl_z62zc3z04anonymousza32063ze3ze5zz__intextz00,
														(int) (((long) 2)), (int) (((long) 2)));
													PROCEDURE_SET(BgL_zc3z04anonymousza32063ze3z87_7334,
														(int) (((long) 0)), BgL_serializa7erza7_2851);
													PROCEDURE_SET(BgL_zc3z04anonymousza32063ze3z87_7334,
														(int) (((long) 1)), BINT(BgL_hashz00_2850));
													BgL_arg2049z00_2840 =
														BgL_zc3z04anonymousza32063ze3z87_7334;
												} break;
											case ((long) 2):

												{	/* Unsafe/intext.scm 1505 */
													obj_t BgL_zc3z04anonymousza32065ze3z87_7333;

													BgL_zc3z04anonymousza32065ze3z87_7333 =
														MAKE_FX_PROCEDURE
														(BGl_z62zc3z04anonymousza32065ze3ze5zz__intextz00,
														(int) (((long) 2)), (int) (((long) 2)));
													PROCEDURE_SET(BgL_zc3z04anonymousza32065ze3z87_7333,
														(int) (((long) 0)), BgL_serializa7erza7_2851);
													PROCEDURE_SET(BgL_zc3z04anonymousza32065ze3z87_7333,
														(int) (((long) 1)), BINT(BgL_hashz00_2850));
													BgL_arg2049z00_2840 =
														BgL_zc3z04anonymousza32065ze3z87_7333;
												} break;
											default:
												BgL_arg2049z00_2840 =
													BGl_errorz00zz__errorz00
													(BGl_string3371z00zz__intextz00,
													BGl_string3363z00zz__intextz00,
													BgL_serializa7erza7_2851);
											}
									}
									{	/* Unsafe/intext.scm 1528 */
										obj_t BgL_arg2051z00_2842;

										{	/* Unsafe/intext.scm 1528 */
											obj_t BgL_arg2053z00_2843;

											BgL_arg2053z00_2843 =
												BGl_classzd2namezd2zz__objectz00(BgL_classz00_78);
											{	/* Unsafe/intext.scm 1528 */
												obj_t BgL_res3104z00_6387;

												BgL_res3104z00_6387 =
													SYMBOL_TO_STRING(BgL_arg2053z00_2843);
												BgL_arg2051z00_2842 = BgL_res3104z00_6387;
											}
										}
										BgL_arg2050z00_2841 =
											string_append(BgL_arg2051z00_2842,
											BGl_string3372z00zz__intextz00);
									}
									BGl_genericzd2addzd2methodz12z12zz__objectz00
										(BGl_objectzd2serializa7erzd2envza7zz__intextz00,
										BgL_classz00_78, BgL_arg2049z00_2840, BgL_arg2050z00_2841);
								}
							else
								{	/* Unsafe/intext.scm 1523 */
									BFALSE;
								}
							if (PAIRP(BgL_cellz00_2839))
								{	/* Unsafe/intext.scm 1529 */
									return BFALSE;
								}
							else
								{	/* Unsafe/intext.scm 1531 */
									obj_t BgL_arg2055z00_2845;

									{	/* Unsafe/intext.scm 1531 */
										obj_t BgL_arg2056z00_2846;

										BgL_unserializa7erza7_2866 = BgL_unserializa7erza7_80;
										{	/* Unsafe/intext.scm 1512 */
											int BgL_aux1100z00_2869;

											BgL_aux1100z00_2869 =
												PROCEDURE_ARITY(BgL_unserializa7erza7_2866);
											switch ((long) (BgL_aux1100z00_2869))
												{
												case ((long) 1):

													{	/* Unsafe/intext.scm 1514 */
														obj_t BgL_zc3z04anonymousza32069ze3z87_7332;

														BgL_zc3z04anonymousza32069ze3z87_7332 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza32069ze3ze5zz__intextz00,
															(int) (((long) 2)), (int) (((long) 1)));
														PROCEDURE_SET(BgL_zc3z04anonymousza32069ze3z87_7332,
															(int) (((long) 0)), BgL_unserializa7erza7_2866);
														BgL_arg2056z00_2846 =
															BgL_zc3z04anonymousza32069ze3z87_7332;
													} break;
												case ((long) 2):

													BgL_arg2056z00_2846 = BgL_unserializa7erza7_2866;
													break;
												default:
													BgL_arg2056z00_2846 =
														BGl_errorz00zz__errorz00
														(BGl_string3371z00zz__intextz00,
														BGl_string3363z00zz__intextz00,
														BgL_unserializa7erza7_2866);
												}
										}
										{	/* Unsafe/intext.scm 1531 */
											obj_t BgL_list2057z00_2847;

											{	/* Unsafe/intext.scm 1531 */
												obj_t BgL_arg2059z00_2848;

												{	/* Unsafe/intext.scm 1531 */
													obj_t BgL_arg2060z00_2849;

													BgL_arg2060z00_2849 =
														MAKE_YOUNG_PAIR(BgL_arg2056z00_2846, BNIL);
													BgL_arg2059z00_2848 =
														MAKE_YOUNG_PAIR(BgL_serializa7erza7_79,
														BgL_arg2060z00_2849);
												}
												BgL_list2057z00_2847 =
													MAKE_YOUNG_PAIR(BINT(BgL_hashz00_2838),
													BgL_arg2059z00_2848);
											}
											BgL_arg2055z00_2845 = BgL_list2057z00_2847;
										}
									}
									return (BGl_za2classzd2serializa7ationza2z75zz__intextz00 =
										MAKE_YOUNG_PAIR(BgL_arg2055z00_2845,
											BGl_za2classzd2serializa7ationza2z75zz__intextz00),
										BUNSPEC);
								}
						}
					}
				}
			}
		}

	}



/* &register-class-serialization! */
	obj_t BGl_z62registerzd2classzd2serializa7ationz12zd7zz__intextz00(obj_t
		BgL_envz00_7335, obj_t BgL_classz00_7336, obj_t BgL_serializa7erza7_7337,
		obj_t BgL_unserializa7erza7_7338)
	{
		{	/* Unsafe/intext.scm 1496 */
			{	/* Unsafe/intext.scm 1499 */
				obj_t BgL_auxz00_11632;

				if (PROCEDUREP(BgL_unserializa7erza7_7338))
					{	/* Unsafe/intext.scm 1499 */
						BgL_auxz00_11632 = BgL_unserializa7erza7_7338;
					}
				else
					{
						obj_t BgL_auxz00_11635;

						BgL_auxz00_11635 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3298z00zz__intextz00,
							BINT(((long) 47352)), BGl_string3373z00zz__intextz00,
							BGl_string3365z00zz__intextz00, BgL_unserializa7erza7_7338);
						FAILURE(BgL_auxz00_11635, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2classzd2serializa7ationz12zb5zz__intextz00
					(BgL_classz00_7336, BgL_serializa7erza7_7337, BgL_auxz00_11632);
			}
		}

	}



/* &<@anonymous:2069> */
	obj_t BGl_z62zc3z04anonymousza32069ze3ze5zz__intextz00(obj_t BgL_envz00_7339,
		obj_t BgL_oz00_7341, obj_t BgL_argz00_7342)
	{
		{	/* Unsafe/intext.scm 1514 */
			{	/* Unsafe/intext.scm 1515 */
				obj_t BgL_unserializa7erza7_7340;

				BgL_unserializa7erza7_7340 =
					((obj_t) PROCEDURE_REF(BgL_envz00_7339, (int) (((long) 0))));
				return
					PROCEDURE_ENTRY(BgL_unserializa7erza7_7340)
					(BgL_unserializa7erza7_7340, BgL_oz00_7341, BEOA);
			}
		}

	}



/* &<@anonymous:2065> */
	obj_t BGl_z62zc3z04anonymousza32065ze3ze5zz__intextz00(obj_t BgL_envz00_7343,
		obj_t BgL_oz00_7346, obj_t BgL_markzd2argzd2_7347)
	{
		{	/* Unsafe/intext.scm 1505 */
			{	/* Unsafe/intext.scm 1506 */
				obj_t BgL_serializa7erza7_7344;
				long BgL_hashz00_7345;

				BgL_serializa7erza7_7344 =
					PROCEDURE_REF(BgL_envz00_7343, (int) (((long) 0)));
				BgL_hashz00_7345 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_7343, (int) (((long) 1))));
				{	/* Unsafe/intext.scm 1506 */
					obj_t BgL_soz00_7756;

					BgL_soz00_7756 =
						PROCEDURE_ENTRY(BgL_serializa7erza7_7344) (BgL_serializa7erza7_7344,
						BgL_oz00_7346, BgL_markzd2argzd2_7347, BEOA);
					if ((BgL_soz00_7756 == BgL_oz00_7346))
						{	/* Unsafe/intext.scm 1507 */
							return BgL_soz00_7756;
						}
					else
						{	/* Unsafe/intext.scm 1507 */
							return MAKE_YOUNG_PAIR(BINT(BgL_hashz00_7345), BgL_soz00_7756);
						}
				}
			}
		}

	}



/* &<@anonymous:2063> */
	obj_t BGl_z62zc3z04anonymousza32063ze3ze5zz__intextz00(obj_t BgL_envz00_7348,
		obj_t BgL_oz00_7351, obj_t BgL_markzd2argzd2_7352)
	{
		{	/* Unsafe/intext.scm 1501 */
			{	/* Unsafe/intext.scm 1502 */
				obj_t BgL_serializa7erza7_7349;
				long BgL_hashz00_7350;

				BgL_serializa7erza7_7349 =
					PROCEDURE_REF(BgL_envz00_7348, (int) (((long) 0)));
				BgL_hashz00_7350 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_7348, (int) (((long) 1))));
				{	/* Unsafe/intext.scm 1502 */
					obj_t BgL_soz00_7757;

					BgL_soz00_7757 =
						PROCEDURE_ENTRY(BgL_serializa7erza7_7349) (BgL_serializa7erza7_7349,
						BgL_oz00_7351, BEOA);
					if ((BgL_soz00_7757 == BgL_oz00_7351))
						{	/* Unsafe/intext.scm 1503 */
							return BgL_oz00_7351;
						}
					else
						{	/* Unsafe/intext.scm 1503 */
							return MAKE_YOUNG_PAIR(BINT(BgL_hashz00_7350), BgL_soz00_7757);
						}
				}
			}
		}

	}



/* find-class-unserializer */
	obj_t BGl_findzd2classzd2unserializa7erza7zz__intextz00(obj_t BgL_hashz00_81)
	{
		{	/* Unsafe/intext.scm 1537 */
			{	/* Unsafe/intext.scm 1538 */
				obj_t BgL_hz00_2876;

				if (((long) CINT(BgL_hashz00_81) == ((long) 0)))
					{	/* Unsafe/intext.scm 1538 */
						BgL_hz00_2876 =
							BINT(BGl_classzd2hashzd2zz__objectz00
							(BGl_objectz00zz__objectz00));
					}
				else
					{	/* Unsafe/intext.scm 1538 */
						BgL_hz00_2876 = BgL_hashz00_81;
					}
				{	/* Unsafe/intext.scm 1538 */
					obj_t BgL_cellz00_2877;

					BgL_cellz00_2877 =
						BGl_assvz00zz__r4_pairs_and_lists_6_3z00(BgL_hz00_2876,
						BGl_za2classzd2serializa7ationza2z75zz__intextz00);
					{	/* Unsafe/intext.scm 1539 */

						if (PAIRP(BgL_cellz00_2877))
							{	/* Unsafe/intext.scm 1540 */
								return CAR(CDR(CDR(BgL_cellz00_2877)));
							}
						else
							{	/* Unsafe/intext.scm 1540 */
								return
									BGl_errorz00zz__errorz00(BGl_string3286z00zz__intextz00,
									BGl_string3374z00zz__intextz00, BgL_hashz00_81);
							}
					}
				}
			}
		}

	}



/* get-class-serialization */
	BGL_EXPORTED_DEF obj_t BGl_getzd2classzd2serializa7ationza7zz__intextz00(obj_t
		BgL_classz00_82)
	{
		{	/* Unsafe/intext.scm 1547 */
			{	/* Unsafe/intext.scm 1548 */
				long BgL_hashz00_2880;

				BgL_hashz00_2880 = BGl_classzd2hashzd2zz__objectz00(BgL_classz00_82);
				{	/* Unsafe/intext.scm 1548 */
					obj_t BgL_cellz00_2881;

					BgL_cellz00_2881 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BINT(BgL_hashz00_2880),
						BGl_za2classzd2serializa7ationza2z75zz__intextz00);
					{	/* Unsafe/intext.scm 1549 */

						if (PAIRP(BgL_cellz00_2881))
							{	/* Unsafe/intext.scm 1551 */
								obj_t BgL_val0_1165z00_2883;
								obj_t BgL_val1_1166z00_2884;

								BgL_val0_1165z00_2883 = CAR(CDR(BgL_cellz00_2881));
								BgL_val1_1166z00_2884 = CAR(CDR(CDR(BgL_cellz00_2881)));
								{	/* Unsafe/intext.scm 1551 */
									int BgL_res3110z00_6410;

									{	/* Unsafe/intext.scm 1551 */
										int BgL_tmpz00_11696;

										BgL_tmpz00_11696 = (int) (((long) 2));
										BgL_res3110z00_6410 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_11696);
									} BgL_res3110z00_6410;
								}
								{	/* Unsafe/intext.scm 1551 */
									int BgL_tmpz00_11699;

									BgL_tmpz00_11699 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_11699, BgL_val1_1166z00_2884);
								}
								return BgL_val0_1165z00_2883;
							}
						else
							{	/* Unsafe/intext.scm 1550 */
								{	/* Unsafe/intext.scm 1552 */
									int BgL_res3111z00_6411;

									{	/* Unsafe/intext.scm 1552 */
										int BgL_tmpz00_11702;

										BgL_tmpz00_11702 = (int) (((long) 2));
										BgL_res3111z00_6411 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_11702);
									} BgL_res3111z00_6411;
								}
								{	/* Unsafe/intext.scm 1552 */
									int BgL_tmpz00_11705;

									BgL_tmpz00_11705 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_11705, BFALSE);
								}
								return BFALSE;
							}
					}
				}
			}
		}

	}



/* &get-class-serialization */
	obj_t BGl_z62getzd2classzd2serializa7ationzc5zz__intextz00(obj_t
		BgL_envz00_7356, obj_t BgL_classz00_7357)
	{
		{	/* Unsafe/intext.scm 1547 */
			return
				BGl_getzd2classzd2serializa7ationza7zz__intextz00(BgL_classz00_7357);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__intextz00()
	{
		{	/* Unsafe/intext.scm 20 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__intextz00()
	{
		{	/* Unsafe/intext.scm 20 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_objectzd2serializa7erzd2envza7zz__intextz00,
				BGl_proc3375z00zz__intextz00, BGl_objectz00zz__objectz00,
				BGl_string3376z00zz__intextz00);
		}

	}



/* &object-serializer1196 */
	obj_t BGl_z62objectzd2serializa7er1196z17zz__intextz00(obj_t BgL_envz00_7359,
		obj_t BgL_objz00_7360, obj_t BgL_markzd2argzd2_7361)
	{
		{	/* Unsafe/intext.scm 1485 */
			return ((obj_t) ((BgL_objectz00_bglt) BgL_objz00_7360));
		}

	}



/* object-serializer */
	obj_t BGl_objectzd2serializa7erz75zz__intextz00(BgL_objectz00_bglt
		BgL_objz00_76, obj_t BgL_markzd2argzd2_77)
	{
		{	/* Unsafe/intext.scm 1485 */
			{	/* Unsafe/intext.scm 1485 */
				obj_t BgL_method1197z00_2892;

				{	/* Unsafe/intext.scm 1485 */
					obj_t BgL_res3122z00_6448;

					{	/* Unsafe/intext.scm 1485 */
						long BgL_objzd2classzd2numz00_6413;

						{	/* Unsafe/intext.scm 1485 */
							long BgL_res3112z00_6416;

							BgL_res3112z00_6416 = BGL_OBJECT_CLASS_NUM(BgL_objz00_76);
							BgL_objzd2classzd2numz00_6413 = BgL_res3112z00_6416;
						}
						{	/* Unsafe/intext.scm 1485 */
							obj_t BgL_arg2452z00_6414;

							BgL_arg2452z00_6414 =
								PROCEDURE_REF(BGl_objectzd2serializa7erzd2envza7zz__intextz00,
								(int) (((long) 1)));
							{	/* Unsafe/intext.scm 1485 */
								int BgL_offsetz00_6418;

								BgL_offsetz00_6418 = (int) (BgL_objzd2classzd2numz00_6413);
								{	/* Unsafe/intext.scm 1485 */
									long BgL_offsetz00_6419;

									BgL_offsetz00_6419 =
										((long) (BgL_offsetz00_6418) - OBJECT_TYPE);
									{	/* Unsafe/intext.scm 1485 */
										long BgL_modz00_6420;

										BgL_modz00_6420 =
											(BgL_offsetz00_6419 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Unsafe/intext.scm 1485 */
											long BgL_restz00_6422;

											BgL_restz00_6422 =
												(BgL_offsetz00_6419 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Unsafe/intext.scm 1485 */

												{	/* Unsafe/intext.scm 1485 */
													obj_t BgL_bucketz00_6424;

													BgL_bucketz00_6424 =
														VECTOR_REF(
														((obj_t) BgL_arg2452z00_6414), BgL_modz00_6420);
													BgL_res3122z00_6448 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_6424), BgL_restz00_6422);
					}}}}}}}}
					BgL_method1197z00_2892 = BgL_res3122z00_6448;
				}
				return
					PROCEDURE_ENTRY(BgL_method1197z00_2892) (BgL_method1197z00_2892,
					((obj_t) BgL_objz00_76), BgL_markzd2argzd2_77, BEOA);
			}
		}

	}



/* &object-serializer */
	obj_t BGl_z62objectzd2serializa7erz17zz__intextz00(obj_t BgL_envz00_7353,
		obj_t BgL_objz00_7354, obj_t BgL_markzd2argzd2_7355)
	{
		{	/* Unsafe/intext.scm 1485 */
			{	/* Unsafe/intext.scm 1485 */
				BgL_objectz00_bglt BgL_auxz00_11742;

				if (BGl_isazf3zf3zz__objectz00(BgL_objz00_7354,
						BGl_objectz00zz__objectz00))
					{	/* Unsafe/intext.scm 1485 */
						BgL_auxz00_11742 = ((BgL_objectz00_bglt) BgL_objz00_7354);
					}
				else
					{
						obj_t BgL_auxz00_11746;

						BgL_auxz00_11746 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3298z00zz__intextz00,
							BINT(((long) 46681)), BGl_string3377z00zz__intextz00,
							BGl_string3308z00zz__intextz00, BgL_objz00_7354);
						FAILURE(BgL_auxz00_11746, BFALSE, BFALSE);
					}
				return
					BGl_objectzd2serializa7erz75zz__intextz00(BgL_auxz00_11742,
					BgL_markzd2argzd2_7355);
			}
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__intextz00()
	{
		{	/* Unsafe/intext.scm 20 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__intextz00()
	{
		{	/* Unsafe/intext.scm 20 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string3378z00zz__intextz00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 214649622),
				BSTRING_TO_STRING(BGl_string3378z00zz__intextz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string3378z00zz__intextz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string3378z00zz__intextz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string3378z00zz__intextz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string3378z00zz__intextz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string3378z00zz__intextz00));
			return
				BGl_modulezd2initializa7ationz75zz__urlz00(((long) 337061965),
				BSTRING_TO_STRING(BGl_string3378z00zz__intextz00));
		}

	}

#ifdef __cplusplus
}
#endif
