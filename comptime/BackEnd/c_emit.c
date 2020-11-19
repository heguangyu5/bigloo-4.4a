/*===========================================================================*/
/*   (BackEnd/c_emit.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/c_emit.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_typez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_siza7eza7;
		obj_t BgL_classz00;
		obj_t BgL_coercezd2tozd2;
		obj_t BgL_parentsz00;
		bool_t BgL_initzf3zf3;
		bool_t BgL_magiczf3zf3;
		obj_t BgL_z42z42;
		obj_t BgL_aliasz00;
		obj_t BgL_pointedzd2tozd2byz00;
		obj_t BgL_tvectorz00;
		obj_t BgL_locationz00;
		obj_t BgL_importzd2locationzd2;
		int BgL_occurrencez00;
	}              *BgL_typez00_bglt;

	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

	typedef struct BgL_variablez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
	}                  *BgL_variablez00_bglt;

	typedef struct BgL_globalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
		obj_t BgL_modulez00;
		obj_t BgL_importz00;
		bool_t BgL_evaluablezf3zf3;
		bool_t BgL_evalzf3zf3;
		obj_t BgL_libraryz00;
		obj_t BgL_pragmaz00;
		obj_t BgL_srcz00;
		obj_t BgL_jvmzd2typezd2namez00;
		obj_t BgL_initz00;
		obj_t BgL_aliasz00;
	}                *BgL_globalz00_bglt;


	extern obj_t BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_z62emitzd2atomzd2valuez62zzbackend_c_emitz00(obj_t, obj_t);
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_commandzd2linezd2zz__osz00();
	BGL_EXPORTED_DECL obj_t BGl_stopzd2emissionz12zc0zzbackend_c_emitz00();
	static obj_t BGl_objectzd2initzd2zzbackend_c_emitz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_za2sawza2z00zzengine_paramz00;
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_emitzd2includezd2zzbackend_c_emitz00();
	BGL_IMPORT obj_t BGl_fprintfz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_startzd2emissionz12zc0zzbackend_c_emitz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzbackend_c_emitz00();
	BGL_EXPORTED_DECL obj_t
		BGl_emitzd2garbagezd2collectorzd2selectionzd2zzbackend_c_emitz00();
	BGL_IMPORT obj_t make_string(long, unsigned char);
	static obj_t BGl_emitzd2licensezd2zzbackend_c_emitz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_positiveze70ze7zzbackend_c_emitz00(BGL_LONGLONG_T);
	BGL_IMPORT obj_t BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_untrigraphz00zzbackend_c_emitz00(obj_t);
	static obj_t
		BGl_z62emitzd2garbagezd2collectorzd2selectionzb0zzbackend_c_emitz00(obj_t);
	extern obj_t BGl_za2bigloozd2nameza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_emitzd2dlopenzd2initz00zzbackend_c_emitz00(BgL_globalz00_bglt, obj_t);
	extern obj_t BGl_za2elongza2z00zztype_cachez00;
	static obj_t BGl_z62untrigraphz62zzbackend_c_emitz00(obj_t, obj_t);
	extern obj_t BGl_za2userzd2heapzd2siza7eza2za7zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzbackend_c_emitz00();
	BGL_IMPORT obj_t bigloo_mangle(obj_t);
	static obj_t BGl_z62emitzd2includezb0zzbackend_c_emitz00(obj_t);
	extern obj_t BGl_za2bigloozd2authorza2zd2zzengine_paramz00;
	extern obj_t BGl_za2bigloozd2dateza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	static obj_t BGl_loopze70ze7zzbackend_c_emitz00(BGL_LONGLONG_T, obj_t, long,
		BGL_LONGLONG_T, BGL_LONGLONG_T);
	extern obj_t BGl_bigloozd2licensezd2zztools_licensez00();
	extern obj_t BGl_za2garbagezd2collectorza2zd2zzengine_paramz00;
	extern obj_t BGl_za2charza2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t BGl_emitzd2commentzd2zzbackend_c_emitz00(obj_t,
		unsigned char);
	static obj_t BGl_z62stopzd2emissionz12za2zzbackend_c_emitz00(obj_t);
	BGL_IMPORT obj_t BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_c_emitz00 = BUNSPEC;
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	BGL_EXPORTED_DEF obj_t BGl_za2czd2portza2zd2zzbackend_c_emitz00 = BUNSPEC;
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzbackend_c_emitz00();
	static obj_t BGl_genericzd2initzd2zzbackend_c_emitz00();
	BGL_IMPORT obj_t
		BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, obj_t);
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t
		BGl_llongzd2ze3czd2isoze3zzbackend_c_emitz00(BGL_LONGLONG_T);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	extern obj_t BGl_za2bigloozd2librarieszd2czd2setupza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62startzd2emissionz12za2zzbackend_c_emitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00;
	extern obj_t BGl_za2realza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_emitzd2debugzd2activationz00zzbackend_c_emitz00();
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_z62emitzd2commentzb0zzbackend_c_emitz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_za2bigloozd2licensingzf3za2z21zzengine_paramz00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	static obj_t BGl_z62emitzd2mainzb0zzbackend_c_emitz00(obj_t);
	static obj_t BGl_z62emitzd2debugzd2activationz62zzbackend_c_emitz00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_for_read(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_emitzd2copzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_copz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_licensez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_configurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__ucs2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_emitzd2mainzd2zzbackend_c_emitz00();
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_za2destzd2prefixza2zd2zzbackend_c_emitz00 = BUNSPEC;
	static obj_t BGl_z62llongzd2ze3czd2isoz81zzbackend_c_emitz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzbackend_c_emitz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_c_emitz00();
	BGL_EXPORTED_DECL obj_t BGl_emitzd2headerzd2zzbackend_c_emitz00();
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_c_emitz00();
	static obj_t BGl_z62emitzd2dlopenzd2initz62zzbackend_c_emitz00(obj_t, obj_t,
		obj_t);
	static long BGl_za2maxzd2colza2zd2zzbackend_c_emitz00;
	static obj_t BGl_z62emitzd2headerzb0zzbackend_c_emitz00(obj_t);
	extern obj_t BGl_za2includezd2foreignza2zd2zzengine_paramz00;
	static obj_t __cnst[6];


	   
		 
		DEFINE_STRING(BGl_string2120z00zzbackend_c_emitz00,
		BgL_bgl_string2120za700za7za7b2148za7, "'\\''", 4);
	      DEFINE_STRING(BGl_string2121z00zzbackend_c_emitz00,
		BgL_bgl_string2121za700za7za7b2149za7, "'\\\\'", 4);
	      DEFINE_STRING(BGl_string2122z00zzbackend_c_emitz00,
		BgL_bgl_string2122za700za7za7b2150za7, "(int8_t)(", 9);
	      DEFINE_STRING(BGl_string2123z00zzbackend_c_emitz00,
		BgL_bgl_string2123za700za7za7b2151za7, "(uint8_t)(", 10);
	      DEFINE_STRING(BGl_string2124z00zzbackend_c_emitz00,
		BgL_bgl_string2124za700za7za7b2152za7, "(int16_t)(", 10);
	      DEFINE_STRING(BGl_string2125z00zzbackend_c_emitz00,
		BgL_bgl_string2125za700za7za7b2153za7, "(uint16_t)(", 11);
	      DEFINE_STRING(BGl_string2126z00zzbackend_c_emitz00,
		BgL_bgl_string2126za700za7za7b2154za7, "(int32_t)(", 10);
	      DEFINE_STRING(BGl_string2127z00zzbackend_c_emitz00,
		BgL_bgl_string2127za700za7za7b2155za7, "(uint32_t)(", 11);
	      DEFINE_STRING(BGl_string2128z00zzbackend_c_emitz00,
		BgL_bgl_string2128za700za7za7b2156za7, "(int64_t)(", 10);
	      DEFINE_STRING(BGl_string2129z00zzbackend_c_emitz00,
		BgL_bgl_string2129za700za7za7b2157za7, "(uint64_t)(", 11);
	      DEFINE_STRING(BGl_string2130z00zzbackend_c_emitz00,
		BgL_bgl_string2130za700za7za7b2158za7, "BUCS2(", 6);
	      DEFINE_STRING(BGl_string2131z00zzbackend_c_emitz00,
		BgL_bgl_string2131za700za7za7b2159za7, "BUNSPEC", 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_untrigraphzd2envzd2zzbackend_c_emitz00,
		BgL_bgl_za762untrigraphza7622160z00,
		BGl_z62untrigraphz62zzbackend_c_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2132z00zzbackend_c_emitz00,
		BgL_bgl_string2132za700za7za7b2161za7, "BGL_NAN", 7);
	      DEFINE_STRING(BGl_string2133z00zzbackend_c_emitz00,
		BgL_bgl_string2133za700za7za7b2162za7, "BGL_INFINITY", 12);
	      DEFINE_STRING(BGl_string2134z00zzbackend_c_emitz00,
		BgL_bgl_string2134za700za7za7b2163za7, "(-BGL_INFINITY)", 15);
	      DEFINE_STRING(BGl_string2135z00zzbackend_c_emitz00,
		BgL_bgl_string2135za700za7za7b2164za7, "(BEOF)", 6);
	      DEFINE_STRING(BGl_string2136z00zzbackend_c_emitz00,
		BgL_bgl_string2136za700za7za7b2165za7, "(BOPTIONAL)", 11);
	      DEFINE_STRING(BGl_string2137z00zzbackend_c_emitz00,
		BgL_bgl_string2137za700za7za7b2166za7, "(BKEY)", 6);
	      DEFINE_STRING(BGl_string2138z00zzbackend_c_emitz00,
		BgL_bgl_string2138za700za7za7b2167za7, "(BREST)", 7);
	      DEFINE_STRING(BGl_string2139z00zzbackend_c_emitz00,
		BgL_bgl_string2139za700za7za7b2168za7, "(BEOA)", 6);
	      DEFINE_STRING(BGl_string2140z00zzbackend_c_emitz00,
		BgL_bgl_string2140za700za7za7b2169za7, "BCNST(", 6);
	      DEFINE_STRING(BGl_string2141z00zzbackend_c_emitz00,
		BgL_bgl_string2141za700za7za7b2170za7, "(bgl_string_to_bignum( \"", 24);
	      DEFINE_STRING(BGl_string2142z00zzbackend_c_emitz00,
		BgL_bgl_string2142za700za7za7b2171za7, "\", 16 ))", 8);
	      DEFINE_STRING(BGl_string2143z00zzbackend_c_emitz00,
		BgL_bgl_string2143za700za7za7b2172za7, "backend_c_emit", 14);
	      DEFINE_STRING(BGl_string2144z00zzbackend_c_emitz00,
		BgL_bgl_string2144za700za7za7b2173za7,
		"bumpy boehm --to-stdout so ld (cgen distrib cc cindent hgen) ", 61);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_llongzd2ze3czd2isozd2envz31zzbackend_c_emitz00,
		BgL_bgl_za762llongza7d2za7e3cza72174z00,
		BGl_z62llongzd2ze3czd2isoz81zzbackend_c_emitz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stopzd2emissionz12zd2envz12zzbackend_c_emitz00,
		BgL_bgl_za762stopza7d2emissi2175z00,
		BGl_z62stopzd2emissionz12za2zzbackend_c_emitz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2debugzd2activationzd2envzd2zzbackend_c_emitz00,
		BgL_bgl_za762emitza7d2debugza72176za7,
		BGl_z62emitzd2debugzd2activationz62zzbackend_c_emitz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_emitzd2mainzd2envz00zzbackend_c_emitz00,
		BgL_bgl_za762emitza7d2mainza7b2177za7,
		BGl_z62emitzd2mainzb0zzbackend_c_emitz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2garbagezd2collectorzd2selectionzd2envz00zzbackend_c_emitz00,
		BgL_bgl_za762emitza7d2garbag2178z00,
		BGl_z62emitzd2garbagezd2collectorzd2selectionzb0zzbackend_c_emitz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2atomzd2valuezd2envzd2zzbackend_c_emitz00,
		BgL_bgl_za762emitza7d2atomza7d2179za7,
		BGl_z62emitzd2atomzd2valuez62zzbackend_c_emitz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2071z00zzbackend_c_emitz00,
		BgL_bgl_string2071za700za7za7b2180za7, "Can't open file for output", 26);
	      DEFINE_STRING(BGl_string2072z00zzbackend_c_emitz00,
		BgL_bgl_string2072za700za7za7b2181za7, "/*", 2);
	      DEFINE_STRING(BGl_string2073z00zzbackend_c_emitz00,
		BgL_bgl_string2073za700za7za7b2182za7, "*/", 2);
	      DEFINE_STRING(BGl_string2074z00zzbackend_c_emitz00,
		BgL_bgl_string2074za700za7za7b2183za7, "", 0);
	      DEFINE_STRING(BGl_string2075z00zzbackend_c_emitz00,
		BgL_bgl_string2075za700za7za7b2184za7, " (c)      ", 10);
	      DEFINE_STRING(BGl_string2076z00zzbackend_c_emitz00,
		BgL_bgl_string2076za700za7za7b2185za7, "/* COMPILATION: ", 16);
	      DEFINE_STRING(BGl_string2077z00zzbackend_c_emitz00,
		BgL_bgl_string2077za700za7za7b2186za7, " */", 3);
	      DEFINE_STRING(BGl_string2078z00zzbackend_c_emitz00,
		BgL_bgl_string2078za700za7za7b2187za7, "\n/* SAW compilation */\n", 23);
	      DEFINE_STRING(BGl_string2079z00zzbackend_c_emitz00,
		BgL_bgl_string2079za700za7za7b2188za7, "#define BGL_SAW 1\n", 18);
	      DEFINE_STRING(BGl_string2080z00zzbackend_c_emitz00,
		BgL_bgl_string2080za700za7za7b2189za7, "/* GC selection */", 18);
	      DEFINE_STRING(BGl_string2081z00zzbackend_c_emitz00,
		BgL_bgl_string2081za700za7za7b2190za7, "#define THE_GC BOEHM_GC\n", 24);
	      DEFINE_STRING(BGl_string2082z00zzbackend_c_emitz00,
		BgL_bgl_string2082za700za7za7b2191za7, "#define THE_GC BOEHM_GC", 23);
	      DEFINE_STRING(BGl_string2083z00zzbackend_c_emitz00,
		BgL_bgl_string2083za700za7za7b2192za7, "#define BUMPY_GC\n", 17);
	      DEFINE_STRING(BGl_string2084z00zzbackend_c_emitz00,
		BgL_bgl_string2084za700za7za7b2193za7, "emit-garbage-collector-selection",
		32);
	      DEFINE_STRING(BGl_string2085z00zzbackend_c_emitz00,
		BgL_bgl_string2085za700za7za7b2194za7, "Can't emit code for gc", 22);
	      DEFINE_STRING(BGl_string2086z00zzbackend_c_emitz00,
		BgL_bgl_string2086za700za7za7b2195za7, "#include <", 10);
	      DEFINE_STRING(BGl_string2087z00zzbackend_c_emitz00,
		BgL_bgl_string2087za700za7za7b2196za7, ">", 1);
	      DEFINE_STRING(BGl_string2088z00zzbackend_c_emitz00,
		BgL_bgl_string2088za700za7za7b2197za7, "/* debug mode */", 16);
	      DEFINE_STRING(BGl_string2089z00zzbackend_c_emitz00,
		BgL_bgl_string2089za700za7za7b2198za7, "#define BIGLOO_DEBUG 1", 22);
	      DEFINE_STRING(BGl_string2090z00zzbackend_c_emitz00,
		BgL_bgl_string2090za700za7za7b2199za7, "/* Libraries setup imports */", 29);
	      DEFINE_STRING(BGl_string2091z00zzbackend_c_emitz00,
		BgL_bgl_string2091za700za7za7b2200za7, "BGL_IMPORT void ", 16);
	      DEFINE_STRING(BGl_string2092z00zzbackend_c_emitz00,
		BgL_bgl_string2092za700za7za7b2201za7, "(int, char *[], char *[]);", 26);
	      DEFINE_STRING(BGl_string2093z00zzbackend_c_emitz00,
		BgL_bgl_string2093za700za7za7b2202za7, "/* Libraries setup */", 21);
	      DEFINE_STRING(BGl_string2094z00zzbackend_c_emitz00,
		BgL_bgl_string2094za700za7za7b2203za7,
		"static int bigloo_libinit( int argc, char *argv[], char *env[] ) {", 66);
	      DEFINE_STRING(BGl_string2095z00zzbackend_c_emitz00,
		BgL_bgl_string2095za700za7za7b2204za7, "(argc, argv, env);\n", 19);
	      DEFINE_STRING(BGl_string2096z00zzbackend_c_emitz00,
		BgL_bgl_string2096za700za7za7b2205za7, "return 0; }\n\n", 13);
	      DEFINE_STRING(BGl_string2097z00zzbackend_c_emitz00,
		BgL_bgl_string2097za700za7za7b2206za7,
		"long bigloo_abort(long n) { return n; }", 39);
	      DEFINE_STRING(BGl_string2098z00zzbackend_c_emitz00,
		BgL_bgl_string2098za700za7za7b2207za7,
		"int BIGLOO_MAIN(int argc, char *argv[], char *env[]) { ", 55);
	      DEFINE_STRING(BGl_string2099z00zzbackend_c_emitz00,
		BgL_bgl_string2099za700za7za7b2208za7,
		"return _bigloo_main(argc, argv, env, &bigloo_main, &bigloo_libinit, ~a);}",
		73);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_emitzd2includezd2envz00zzbackend_c_emitz00,
		BgL_bgl_za762emitza7d2includ2209z00,
		BGl_z62emitzd2includezb0zzbackend_c_emitz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_emitzd2headerzd2envz00zzbackend_c_emitz00,
		BgL_bgl_za762emitza7d2header2210z00,
		BGl_z62emitzd2headerzb0zzbackend_c_emitz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2dlopenzd2initzd2envzd2zzbackend_c_emitz00,
		BgL_bgl_za762emitza7d2dlopen2211z00,
		BGl_z62emitzd2dlopenzd2initz62zzbackend_c_emitz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_startzd2emissionz12zd2envz12zzbackend_c_emitz00,
		BgL_bgl_za762startza7d2emiss2212z00,
		BGl_z62startzd2emissionz12za2zzbackend_c_emitz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_emitzd2commentzd2envz00zzbackend_c_emitz00,
		BgL_bgl_za762emitza7d2commen2213z00,
		BGl_z62emitzd2commentzb0zzbackend_c_emitz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2100z00zzbackend_c_emitz00,
		BgL_bgl_string2100za700za7za7b2214za7, "BGL_EXPORTED_DEF obj_t ", 23);
	      DEFINE_STRING(BGl_string2101z00zzbackend_c_emitz00,
		BgL_bgl_string2101za700za7za7b2215za7, "() {", 4);
	      DEFINE_STRING(BGl_string2102z00zzbackend_c_emitz00,
		BgL_bgl_string2102za700za7za7b2216za7, "obj_t res = ", 12);
	      DEFINE_STRING(BGl_string2103z00zzbackend_c_emitz00,
		BgL_bgl_string2103za700za7za7b2217za7, "( 0, \"", 6);
	      DEFINE_STRING(BGl_string2104z00zzbackend_c_emitz00,
		BgL_bgl_string2104za700za7za7b2218za7, "\" );", 4);
	      DEFINE_STRING(BGl_string2105z00zzbackend_c_emitz00,
		BgL_bgl_string2105za700za7za7b2219za7, "BGL_MVALUES_NUMBER_SET(2);", 26);
	      DEFINE_STRING(BGl_string2106z00zzbackend_c_emitz00,
		BgL_bgl_string2106za700za7za7b2220za7,
		"BGL_MVALUES_VAL_SET(1,string_to_bstring( \"", 42);
	      DEFINE_STRING(BGl_string2107z00zzbackend_c_emitz00,
		BgL_bgl_string2107za700za7za7b2221za7, "\" ));", 5);
	      DEFINE_STRING(BGl_string2108z00zzbackend_c_emitz00,
		BgL_bgl_string2108za700za7za7b2222za7, "return res;", 11);
	      DEFINE_STRING(BGl_string2109z00zzbackend_c_emitz00,
		BgL_bgl_string2109za700za7za7b2223za7, "}", 1);
	      DEFINE_STRING(BGl_string2110z00zzbackend_c_emitz00,
		BgL_bgl_string2110za700za7za7b2224za7, "(-", 2);
	      DEFINE_STRING(BGl_string2111z00zzbackend_c_emitz00,
		BgL_bgl_string2111za700za7za7b2225za7, ")", 1);
	      DEFINE_STRING(BGl_string2112z00zzbackend_c_emitz00,
		BgL_bgl_string2112za700za7za7b2226za7, ")))", 3);
	      DEFINE_STRING(BGl_string2113z00zzbackend_c_emitz00,
		BgL_bgl_string2113za700za7za7b2227za7, " * (", 4);
	      DEFINE_STRING(BGl_string2114z00zzbackend_c_emitz00,
		BgL_bgl_string2114za700za7za7b2228za7, " + ((BGL_LONGLONG_T)", 20);
	      DEFINE_STRING(BGl_string2115z00zzbackend_c_emitz00,
		BgL_bgl_string2115za700za7za7b2229za7, "(", 1);
	      DEFINE_STRING(BGl_string2116z00zzbackend_c_emitz00,
		BgL_bgl_string2116za700za7za7b2230za7, "((BGL_LONGLONG_T)", 17);
	      DEFINE_STRING(BGl_string2117z00zzbackend_c_emitz00,
		BgL_bgl_string2117za700za7za7b2231za7, "((", 2);
	      DEFINE_STRING(BGl_string2118z00zzbackend_c_emitz00,
		BgL_bgl_string2118za700za7za7b2232za7, "BNIL", 4);
	      DEFINE_STRING(BGl_string2119z00zzbackend_c_emitz00,
		BgL_bgl_string2119za700za7za7b2233za7, "'\\000'", 6);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzbackend_c_emitz00));
		     ADD_ROOT((void *) (&BGl_za2czd2portza2zd2zzbackend_c_emitz00));
		     ADD_ROOT((void *) (&BGl_za2destzd2prefixza2zd2zzbackend_c_emitz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long
		BgL_checksumz00_2751, char *BgL_fromz00_2752)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_c_emitz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_c_emitz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbackend_c_emitz00();
					BGl_libraryzd2moduleszd2initz00zzbackend_c_emitz00();
					BGl_cnstzd2initzd2zzbackend_c_emitz00();
					BGl_importedzd2moduleszd2initz00zzbackend_c_emitz00();
					return BGl_toplevelzd2initzd2zzbackend_c_emitz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_c_emitz00()
	{
		{	/* BackEnd/c_emit.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__ucs2z00(((long) 0), "backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 0),
				"backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "backend_c_emit");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"backend_c_emit");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_c_emitz00()
	{
		{	/* BackEnd/c_emit.scm 15 */
			{	/* BackEnd/c_emit.scm 15 */
				obj_t BgL_cportz00_2738;

				{	/* BackEnd/c_emit.scm 15 */
					obj_t BgL_stringz00_2746;

					BgL_stringz00_2746 = BGl_string2144z00zzbackend_c_emitz00;
					{	/* BackEnd/c_emit.scm 15 */
						obj_t BgL_startz00_2747;

						BgL_startz00_2747 = BINT(((long) 0));
						{	/* BackEnd/c_emit.scm 15 */
							obj_t BgL_endz00_2748;

							BgL_endz00_2748 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2746)));
							{	/* BackEnd/c_emit.scm 15 */

								BgL_cportz00_2738 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2746, BgL_startz00_2747, BgL_endz00_2748);
				}}}}
				{
					long BgL_iz00_2739;

					BgL_iz00_2739 = ((long) 5);
				BgL_loopz00_2740:
					if ((BgL_iz00_2739 == ((long) -1)))
						{	/* BackEnd/c_emit.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/c_emit.scm 15 */
							{	/* BackEnd/c_emit.scm 15 */
								obj_t BgL_arg2146z00_2742;

								{	/* BackEnd/c_emit.scm 15 */

									{	/* BackEnd/c_emit.scm 15 */
										obj_t BgL_locationz00_2744;

										BgL_locationz00_2744 = BBOOL(((bool_t) 0));
										{	/* BackEnd/c_emit.scm 15 */

											BgL_arg2146z00_2742 =
												BGl_readz00zz__readerz00(BgL_cportz00_2738,
												BgL_locationz00_2744);
										}
									}
								}
								{	/* BackEnd/c_emit.scm 15 */
									int BgL_tmpz00_2787;

									BgL_tmpz00_2787 = (int) (BgL_iz00_2739);
									CNST_TABLE_SET(BgL_tmpz00_2787, BgL_arg2146z00_2742);
							}}
							{	/* BackEnd/c_emit.scm 15 */
								int BgL_auxz00_2745;

								BgL_auxz00_2745 = (int) ((BgL_iz00_2739 - ((long) 1)));
								{
									long BgL_iz00_2792;

									BgL_iz00_2792 = (long) (BgL_auxz00_2745);
									BgL_iz00_2739 = BgL_iz00_2792;
									goto BgL_loopz00_2740;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbackend_c_emitz00()
	{
		{	/* BackEnd/c_emit.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_c_emitz00()
	{
		{	/* BackEnd/c_emit.scm 15 */
			BGl_za2destzd2prefixza2zd2zzbackend_c_emitz00 = BFALSE;
			BGl_za2czd2portza2zd2zzbackend_c_emitz00 = BFALSE;
			return (BGl_za2maxzd2colza2zd2zzbackend_c_emitz00 = ((long) 79), BUNSPEC);
		}

	}



/* start-emission! */
	BGL_EXPORTED_DEF obj_t BGl_startzd2emissionz12zc0zzbackend_c_emitz00(obj_t
		BgL_suffixz00_3)
	{
		{	/* BackEnd/c_emit.scm 49 */
			{	/* BackEnd/c_emit.scm 50 */
				obj_t BgL_prefixz00_1646;

				{	/* BackEnd/c_emit.scm 51 */
					bool_t BgL_test2236z00_2795;

					if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
						{	/* BackEnd/c_emit.scm 51 */
							BgL_test2236z00_2795 =
								CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
								(BGl_za2passza2z00zzengine_paramz00,
									CNST_TABLE_REF(((long) 0))));
						}
					else
						{	/* BackEnd/c_emit.scm 51 */
							BgL_test2236z00_2795 = ((bool_t) 0);
						}
					if (BgL_test2236z00_2795)
						{	/* BackEnd/c_emit.scm 51 */
							BgL_prefixz00_1646 =
								BGl_prefixz00zz__osz00(BGl_za2destza2z00zzengine_paramz00);
						}
					else
						{	/* BackEnd/c_emit.scm 54 */
							bool_t BgL_test2238z00_2802;

							if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
								{	/* BackEnd/c_emit.scm 54 */
									obj_t BgL_tmpz00_2805;

									BgL_tmpz00_2805 =
										CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
									BgL_test2238z00_2802 = STRINGP(BgL_tmpz00_2805);
								}
							else
								{	/* BackEnd/c_emit.scm 54 */
									BgL_test2238z00_2802 = ((bool_t) 0);
								}
							if (BgL_test2238z00_2802)
								{	/* BackEnd/c_emit.scm 54 */
									BgL_prefixz00_1646 =
										BGl_prefixz00zz__osz00(CAR
										(BGl_za2srczd2filesza2zd2zzengine_paramz00));
								}
							else
								{	/* BackEnd/c_emit.scm 56 */
									bool_t BgL_test2240z00_2810;

									if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
										{	/* BackEnd/c_emit.scm 56 */
											BgL_test2240z00_2810 =
												(BGl_za2passza2z00zzengine_paramz00 ==
												CNST_TABLE_REF(((long) 1)));
										}
									else
										{	/* BackEnd/c_emit.scm 56 */
											BgL_test2240z00_2810 = ((bool_t) 0);
										}
									if (BgL_test2240z00_2810)
										{	/* BackEnd/c_emit.scm 56 */
											BgL_prefixz00_1646 =
												BGl_prefixz00zz__osz00
												(BGl_za2destza2z00zzengine_paramz00);
										}
									else
										{	/* BackEnd/c_emit.scm 58 */
											bool_t BgL_test2242z00_2816;

											if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
												{	/* BackEnd/c_emit.scm 58 */
													BgL_test2242z00_2816 =
														(BGl_za2passza2z00zzengine_paramz00 ==
														CNST_TABLE_REF(((long) 2)));
												}
											else
												{	/* BackEnd/c_emit.scm 58 */
													BgL_test2242z00_2816 = ((bool_t) 0);
												}
											if (BgL_test2242z00_2816)
												{	/* BackEnd/c_emit.scm 58 */
													BgL_prefixz00_1646 =
														BGl_prefixz00zz__osz00
														(BGl_za2destza2z00zzengine_paramz00);
												}
											else
												{	/* BackEnd/c_emit.scm 58 */
													BgL_prefixz00_1646 = BFALSE;
												}
										}
								}
						}
				}
				{	/* BackEnd/c_emit.scm 50 */

					{	/* BackEnd/c_emit.scm 62 */
						bool_t BgL_test2244z00_2822;

						if (
							(BGl_za2destza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 3))))
							{	/* BackEnd/c_emit.scm 62 */
								BgL_test2244z00_2822 = ((bool_t) 1);
							}
						else
							{	/* BackEnd/c_emit.scm 62 */
								if (STRINGP(BgL_prefixz00_1646))
									{	/* BackEnd/c_emit.scm 62 */
										BgL_test2244z00_2822 = ((bool_t) 0);
									}
								else
									{	/* BackEnd/c_emit.scm 62 */
										BgL_test2244z00_2822 = ((bool_t) 1);
									}
							}
						if (BgL_test2244z00_2822)
							{	/* BackEnd/c_emit.scm 63 */
								obj_t BgL_res1945z00_2199;

								{	/* BackEnd/c_emit.scm 63 */
									obj_t BgL_tmpz00_2828;

									BgL_tmpz00_2828 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1945z00_2199 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2828);
								}
								return (BGl_za2czd2portza2zd2zzbackend_c_emitz00 =
									BgL_res1945z00_2199, BUNSPEC);
							}
						else
							{	/* BackEnd/c_emit.scm 64 */
								obj_t BgL_fzd2namezd2_1650;

								BgL_fzd2namezd2_1650 =
									string_append(BgL_prefixz00_1646, BgL_suffixz00_3);
								BGl_za2destzd2prefixza2zd2zzbackend_c_emitz00 =
									BgL_prefixz00_1646;
								{	/* BackEnd/c_emit.scm 66 */

									BGl_za2czd2portza2zd2zzbackend_c_emitz00 =
										BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00
										(BgL_fzd2namezd2_1650, BTRUE);
								}
								if (OUTPUT_PORTP(BGl_za2czd2portza2zd2zzbackend_c_emitz00))
									{	/* BackEnd/c_emit.scm 67 */
										return BUNSPEC;
									}
								else
									{	/* BackEnd/c_emit.scm 67 */
										return
											BGl_errorz00zz__errorz00
											(BGl_za2bigloozd2nameza2zd2zzengine_paramz00,
											BGl_string2071z00zzbackend_c_emitz00,
											BgL_fzd2namezd2_1650);
									}
							}
					}
				}
			}
		}

	}



/* &start-emission! */
	obj_t BGl_z62startzd2emissionz12za2zzbackend_c_emitz00(obj_t BgL_envz00_2714,
		obj_t BgL_suffixz00_2715)
	{
		{	/* BackEnd/c_emit.scm 49 */
			return BGl_startzd2emissionz12zc0zzbackend_c_emitz00(BgL_suffixz00_2715);
		}

	}



/* stop-emission! */
	BGL_EXPORTED_DEF obj_t BGl_stopzd2emissionz12zc0zzbackend_c_emitz00()
	{
		{	/* BackEnd/c_emit.scm 74 */
			if (OUTPUT_PORTP(BGl_za2czd2portza2zd2zzbackend_c_emitz00))
				{	/* BackEnd/c_emit.scm 78 */
					bool_t BgL_test2249z00_2839;

					{	/* BackEnd/c_emit.scm 78 */
						obj_t BgL_arg1396z00_1674;

						{	/* BackEnd/c_emit.scm 78 */
							obj_t BgL_res1946z00_2203;

							{	/* BackEnd/c_emit.scm 78 */
								obj_t BgL_tmpz00_2840;

								BgL_tmpz00_2840 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1946z00_2203 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2840);
							}
							BgL_arg1396z00_1674 = BgL_res1946z00_2203;
						}
						BgL_test2249z00_2839 =
							(BGl_za2czd2portza2zd2zzbackend_c_emitz00 == BgL_arg1396z00_1674);
					}
					if (BgL_test2249z00_2839)
						{	/* BackEnd/c_emit.scm 78 */
							return BFALSE;
						}
					else
						{	/* BackEnd/c_emit.scm 78 */
							bgl_flush_output_port(BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							bgl_close_output_port(BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							BGl_za2czd2portza2zd2zzbackend_c_emitz00 = BFALSE;
							return BGl_za2destzd2prefixza2zd2zzbackend_c_emitz00;
						}
				}
			else
				{	/* BackEnd/c_emit.scm 76 */
					return BFALSE;
				}
		}

	}



/* &stop-emission! */
	obj_t BGl_z62stopzd2emissionz12za2zzbackend_c_emitz00(obj_t BgL_envz00_2716)
	{
		{	/* BackEnd/c_emit.scm 74 */
			return BGl_stopzd2emissionz12zc0zzbackend_c_emitz00();
		}

	}



/* emit-comment */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2commentzd2zzbackend_c_emitz00(obj_t
		BgL_stringz00_4, unsigned char BgL_fillz00_5)
	{
		{	/* BackEnd/c_emit.scm 94 */
			{	/* BackEnd/c_emit.scm 95 */
				obj_t BgL_stringz00_1675;

				if ((STRING_LENGTH(BgL_stringz00_4) > (((long) 79) - ((long) 8))))
					{	/* BackEnd/c_emit.scm 95 */
						BgL_stringz00_1675 =
							c_substring(BgL_stringz00_4, ((long) 0),
							(((long) 79) - ((long) 9)));
					}
				else
					{	/* BackEnd/c_emit.scm 95 */
						BgL_stringz00_1675 = BgL_stringz00_4;
					}
				bgl_display_string(BGl_string2072z00zzbackend_c_emitz00,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				{	/* BackEnd/c_emit.scm 99 */
					long BgL_lenz00_1676;

					BgL_lenz00_1676 = STRING_LENGTH(BgL_stringz00_1675);
					if ((BgL_lenz00_1676 == ((long) 0)))
						{	/* BackEnd/c_emit.scm 101 */
							obj_t BgL_port1299z00_1678;

							BgL_port1299z00_1678 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
							bgl_display_obj(make_string(
									(((long) 79) - ((long) 4)),
									(unsigned char) (BgL_fillz00_5)), BgL_port1299z00_1678);
							{	/* BackEnd/c_emit.scm 101 */
								obj_t BgL_tmpz00_2861;

								BgL_tmpz00_2861 = ((obj_t) BgL_port1299z00_1678);
								bgl_display_string(BGl_string2073z00zzbackend_c_emitz00,
									BgL_tmpz00_2861);
							}
							{	/* BackEnd/c_emit.scm 101 */
								obj_t BgL_tmpz00_2864;

								BgL_tmpz00_2864 = ((obj_t) BgL_port1299z00_1678);
								return bgl_display_char(((unsigned char) 10), BgL_tmpz00_2864);
						}}
					else
						{	/* BackEnd/c_emit.scm 100 */
							{	/* BackEnd/c_emit.scm 103 */
								obj_t BgL_arg1421z00_1681;

								BgL_arg1421z00_1681 =
									make_string(((long) 2), (unsigned char) (BgL_fillz00_5));
								bgl_display_obj(BgL_arg1421z00_1681,
									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							}
							bgl_display_char(((unsigned char) ' '),
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							bgl_display_obj(BgL_stringz00_1675,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							bgl_display_char(((unsigned char) ' '),
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
							{	/* BackEnd/c_emit.scm 107 */
								obj_t BgL_port1300z00_1682;

								BgL_port1300z00_1682 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
								{	/* BackEnd/c_emit.scm 108 */
									obj_t BgL_arg1422z00_1683;

									{	/* BackEnd/c_emit.scm 108 */
										long BgL_arg1441z00_1684;

										{	/* BackEnd/c_emit.scm 108 */
											obj_t BgL_arg1442z00_1685;

											BgL_arg1442z00_1685 =
												BGL_SAFE_PLUS_FX(((long) 8), BgL_lenz00_1676);
											BgL_arg1441z00_1684 =
												(((long) 79) - (long) CINT(BgL_arg1442z00_1685));
										}
										BgL_arg1422z00_1683 =
											make_string(BgL_arg1441z00_1684,
											(unsigned char) (BgL_fillz00_5));
									}
									bgl_display_obj(BgL_arg1422z00_1683, BgL_port1300z00_1682);
								}
								{	/* BackEnd/c_emit.scm 107 */
									obj_t BgL_tmpz00_2879;

									BgL_tmpz00_2879 = ((obj_t) BgL_port1300z00_1682);
									bgl_display_string(BGl_string2073z00zzbackend_c_emitz00,
										BgL_tmpz00_2879);
								}
								{	/* BackEnd/c_emit.scm 107 */
									obj_t BgL_tmpz00_2882;

									BgL_tmpz00_2882 = ((obj_t) BgL_port1300z00_1682);
									return
										bgl_display_char(((unsigned char) 10), BgL_tmpz00_2882);
		}}}}}}

	}



/* &emit-comment */
	obj_t BGl_z62emitzd2commentzb0zzbackend_c_emitz00(obj_t BgL_envz00_2717,
		obj_t BgL_stringz00_2718, obj_t BgL_fillz00_2719)
	{
		{	/* BackEnd/c_emit.scm 94 */
			return
				BGl_emitzd2commentzd2zzbackend_c_emitz00(BgL_stringz00_2718,
				CCHAR(BgL_fillz00_2719));
		}

	}



/* emit-license */
	obj_t BGl_emitzd2licensezd2zzbackend_c_emitz00()
	{
		{	/* BackEnd/c_emit.scm 114 */
			{	/* BackEnd/c_emit.scm 115 */
				obj_t BgL_inz00_1693;

				{	/* BackEnd/c_emit.scm 115 */
					obj_t BgL_arg1476z00_1701;

					BgL_arg1476z00_1701 = BGl_bigloozd2licensezd2zztools_licensez00();
					{	/* BackEnd/c_emit.scm 115 */
						long BgL_endz00_1704;

						BgL_endz00_1704 = STRING_LENGTH(((obj_t) BgL_arg1476z00_1701));
						{	/* BackEnd/c_emit.scm 115 */

							BgL_inz00_1693 =
								BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
								(BgL_arg1476z00_1701, BINT(((long) 0)), BINT(BgL_endz00_1704));
				}}}
				{	/* BackEnd/c_emit.scm 116 */
					obj_t BgL_g1128z00_1694;

					BgL_g1128z00_1694 =
						BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_inz00_1693);
					{
						obj_t BgL_strz00_1696;

						BgL_strz00_1696 = BgL_g1128z00_1694;
					BgL_zc3z04anonymousza31465ze3z87_1697:
						{	/* BackEnd/c_emit.scm 117 */
							bool_t BgL_test2252z00_2894;

							{	/* BackEnd/c_emit.scm 117 */
								bool_t BgL_res1963z00_2243;

								BgL_res1963z00_2243 = EOF_OBJECTP(BgL_strz00_1696);
								BgL_test2252z00_2894 = BgL_res1963z00_2243;
							}
							if (BgL_test2252z00_2894)
								{	/* BackEnd/c_emit.scm 117 */
									return bgl_close_input_port(BgL_inz00_1693);
								}
							else
								{	/* BackEnd/c_emit.scm 117 */
									BGl_emitzd2commentzd2zzbackend_c_emitz00(BgL_strz00_1696,
										(char) (((unsigned char) ' ')));
									{
										obj_t BgL_strz00_2899;

										BgL_strz00_2899 =
											BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_inz00_1693);
										BgL_strz00_1696 = BgL_strz00_2899;
										goto BgL_zc3z04anonymousza31465ze3z87_1697;
									}
								}
						}
					}
				}
			}
		}

	}



/* emit-header */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2headerzd2zzbackend_c_emitz00()
	{
		{	/* BackEnd/c_emit.scm 126 */
			BGl_emitzd2commentzd2zzbackend_c_emitz00
				(BGl_string2074z00zzbackend_c_emitz00, (char) (((unsigned char) '=')));
			{	/* BackEnd/c_emit.scm 128 */
				obj_t BgL_arg1477z00_1705;

				{	/* BackEnd/c_emit.scm 128 */
					obj_t BgL_pz00_1706;

					{	/* BackEnd/c_emit.scm 128 */

						{	/* BackEnd/c_emit.scm 128 */

							BgL_pz00_1706 =
								BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
					}}
					bgl_display_obj(BGl_za2srczd2filesza2zd2zzengine_paramz00,
						BgL_pz00_1706);
					BgL_arg1477z00_1705 = bgl_close_output_port(BgL_pz00_1706);
				}
				BGl_emitzd2commentzd2zzbackend_c_emitz00(BgL_arg1477z00_1705,
					(char) (((unsigned char) ' ')));
			}
			BGl_emitzd2commentzd2zzbackend_c_emitz00
				(BGl_za2bigloozd2nameza2zd2zzengine_paramz00,
				(char) (((unsigned char) ' ')));
			BGl_emitzd2commentzd2zzbackend_c_emitz00(string_append_3
				(BGl_za2bigloozd2authorza2zd2zzengine_paramz00,
					BGl_string2075z00zzbackend_c_emitz00,
					BGl_za2bigloozd2dateza2zd2zzengine_paramz00),
				(char) (((unsigned char) ' ')));
			if (CBOOL(BGl_za2bigloozd2licensingzf3za2z21zzengine_paramz00))
				{	/* BackEnd/c_emit.scm 135 */
					BGl_emitzd2licensezd2zzbackend_c_emitz00();
				}
			else
				{	/* BackEnd/c_emit.scm 135 */
					BFALSE;
				}
			BGl_emitzd2commentzd2zzbackend_c_emitz00
				(BGl_string2074z00zzbackend_c_emitz00, (char) (((unsigned char) '=')));
			bgl_display_string(BGl_string2076z00zzbackend_c_emitz00,
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			{	/* BackEnd/c_emit.scm 138 */
				obj_t BgL_arg1493z00_1709;

				BgL_arg1493z00_1709 = BGl_commandzd2linezd2zz__osz00();
				bgl_display_obj(BgL_arg1493z00_1709,
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			}
			bgl_display_string(BGl_string2077z00zzbackend_c_emitz00,
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			bgl_display_char(((unsigned char) 10),
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
			if (CBOOL(BGl_za2sawza2z00zzengine_paramz00))
				{	/* BackEnd/c_emit.scm 141 */
					bgl_display_string(BGl_string2078z00zzbackend_c_emitz00,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					return bgl_display_string(BGl_string2079z00zzbackend_c_emitz00,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				}
			else
				{	/* BackEnd/c_emit.scm 141 */
					return BFALSE;
				}
		}

	}



/* &emit-header */
	obj_t BGl_z62emitzd2headerzb0zzbackend_c_emitz00(obj_t BgL_envz00_2720)
	{
		{	/* BackEnd/c_emit.scm 126 */
			return BGl_emitzd2headerzd2zzbackend_c_emitz00();
		}

	}



/* emit-garbage-collector-selection */
	BGL_EXPORTED_DEF obj_t
		BGl_emitzd2garbagezd2collectorzd2selectionzd2zzbackend_c_emitz00()
	{
		{	/* BackEnd/c_emit.scm 150 */
			{	/* BackEnd/c_emit.scm 151 */
				obj_t BgL_port1301z00_1710;

				BgL_port1301z00_1710 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c_emit.scm 151 */
					obj_t BgL_tmpz00_2928;

					BgL_tmpz00_2928 = ((obj_t) BgL_port1301z00_1710);
					bgl_display_string(BGl_string2080z00zzbackend_c_emitz00,
						BgL_tmpz00_2928);
				}
				{	/* BackEnd/c_emit.scm 151 */
					obj_t BgL_tmpz00_2931;

					BgL_tmpz00_2931 = ((obj_t) BgL_port1301z00_1710);
					bgl_display_char(((unsigned char) 10), BgL_tmpz00_2931);
			}}
			{	/* BackEnd/c_emit.scm 152 */
				obj_t BgL_casezd2valuezd2_1711;

				BgL_casezd2valuezd2_1711 =
					BGl_za2garbagezd2collectorza2zd2zzengine_paramz00;
				if ((BgL_casezd2valuezd2_1711 == CNST_TABLE_REF(((long) 4))))
					{	/* BackEnd/c_emit.scm 154 */
						obj_t BgL_port1302z00_1713;

						BgL_port1302z00_1713 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
						{	/* BackEnd/c_emit.scm 154 */
							obj_t BgL_tmpz00_2937;

							BgL_tmpz00_2937 = ((obj_t) BgL_port1302z00_1713);
							bgl_display_string(BGl_string2081z00zzbackend_c_emitz00,
								BgL_tmpz00_2937);
						}
						{	/* BackEnd/c_emit.scm 154 */
							obj_t BgL_tmpz00_2940;

							BgL_tmpz00_2940 = ((obj_t) BgL_port1302z00_1713);
							return bgl_display_char(((unsigned char) 10), BgL_tmpz00_2940);
					}}
				else
					{	/* BackEnd/c_emit.scm 152 */
						if ((BgL_casezd2valuezd2_1711 == CNST_TABLE_REF(((long) 5))))
							{	/* BackEnd/c_emit.scm 152 */
								{	/* BackEnd/c_emit.scm 156 */
									obj_t BgL_port1303z00_1715;

									BgL_port1303z00_1715 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									{	/* BackEnd/c_emit.scm 156 */
										obj_t BgL_tmpz00_2946;

										BgL_tmpz00_2946 = ((obj_t) BgL_port1303z00_1715);
										bgl_display_string(BGl_string2082z00zzbackend_c_emitz00,
											BgL_tmpz00_2946);
									}
									{	/* BackEnd/c_emit.scm 156 */
										obj_t BgL_tmpz00_2949;

										BgL_tmpz00_2949 = ((obj_t) BgL_port1303z00_1715);
										bgl_display_char(((unsigned char) 10), BgL_tmpz00_2949);
								}}
								{	/* BackEnd/c_emit.scm 157 */
									obj_t BgL_port1304z00_1716;

									BgL_port1304z00_1716 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									{	/* BackEnd/c_emit.scm 157 */
										obj_t BgL_tmpz00_2952;

										BgL_tmpz00_2952 = ((obj_t) BgL_port1304z00_1716);
										bgl_display_string(BGl_string2083z00zzbackend_c_emitz00,
											BgL_tmpz00_2952);
									}
									{	/* BackEnd/c_emit.scm 157 */
										obj_t BgL_tmpz00_2955;

										BgL_tmpz00_2955 = ((obj_t) BgL_port1304z00_1716);
										return
											bgl_display_char(((unsigned char) 10), BgL_tmpz00_2955);
							}}}
						else
							{	/* BackEnd/c_emit.scm 152 */
								return
									BGl_errorz00zz__errorz00(BGl_string2084z00zzbackend_c_emitz00,
									BGl_string2085z00zzbackend_c_emitz00,
									BGl_za2garbagezd2collectorza2zd2zzengine_paramz00);
							}
					}
			}
		}

	}



/* &emit-garbage-collector-selection */
	obj_t
		BGl_z62emitzd2garbagezd2collectorzd2selectionzb0zzbackend_c_emitz00(obj_t
		BgL_envz00_2721)
	{
		{	/* BackEnd/c_emit.scm 150 */
			return BGl_emitzd2garbagezd2collectorzd2selectionzd2zzbackend_c_emitz00();
		}

	}



/* emit-include */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2includezd2zzbackend_c_emitz00()
	{
		{	/* BackEnd/c_emit.scm 166 */
			{	/* BackEnd/c_emit.scm 168 */
				obj_t BgL_g1308z00_1717;

				BgL_g1308z00_1717 =
					bgl_reverse_bang(BGl_za2includezd2foreignza2zd2zzengine_paramz00);
				{
					obj_t BgL_l1306z00_1719;

					BgL_l1306z00_1719 = BgL_g1308z00_1717;
				BgL_zc3z04anonymousza31496ze3z87_1720:
					if (PAIRP(BgL_l1306z00_1719))
						{	/* BackEnd/c_emit.scm 169 */
							{	/* BackEnd/c_emit.scm 168 */
								obj_t BgL_iz00_1722;

								BgL_iz00_1722 = CAR(BgL_l1306z00_1719);
								{	/* BackEnd/c_emit.scm 168 */
									obj_t BgL_port1305z00_1723;

									BgL_port1305z00_1723 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									{	/* BackEnd/c_emit.scm 168 */
										obj_t BgL_tmpz00_2964;

										BgL_tmpz00_2964 = ((obj_t) BgL_port1305z00_1723);
										bgl_display_string(BGl_string2086z00zzbackend_c_emitz00,
											BgL_tmpz00_2964);
									}
									bgl_display_obj(BgL_iz00_1722, BgL_port1305z00_1723);
									{	/* BackEnd/c_emit.scm 168 */
										obj_t BgL_tmpz00_2968;

										BgL_tmpz00_2968 = ((obj_t) BgL_port1305z00_1723);
										bgl_display_string(BGl_string2087z00zzbackend_c_emitz00,
											BgL_tmpz00_2968);
									}
									{	/* BackEnd/c_emit.scm 168 */
										obj_t BgL_tmpz00_2971;

										BgL_tmpz00_2971 = ((obj_t) BgL_port1305z00_1723);
										bgl_display_char(((unsigned char) 10), BgL_tmpz00_2971);
							}}}
							{
								obj_t BgL_l1306z00_2974;

								BgL_l1306z00_2974 = CDR(BgL_l1306z00_1719);
								BgL_l1306z00_1719 = BgL_l1306z00_2974;
								goto BgL_zc3z04anonymousza31496ze3z87_1720;
							}
						}
					else
						{	/* BackEnd/c_emit.scm 169 */
							((bool_t) 1);
						}
				}
			}
			{	/* BackEnd/c_emit.scm 171 */
				obj_t BgL_g1312z00_1726;

				BgL_g1312z00_1726 =
					bgl_reverse_bang
					(BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00);
				{
					obj_t BgL_l1310z00_1728;

					BgL_l1310z00_1728 = BgL_g1312z00_1726;
				BgL_zc3z04anonymousza31519ze3z87_1729:
					if (PAIRP(BgL_l1310z00_1728))
						{	/* BackEnd/c_emit.scm 172 */
							{	/* BackEnd/c_emit.scm 171 */
								obj_t BgL_iz00_1731;

								BgL_iz00_1731 = CAR(BgL_l1310z00_1728);
								{	/* BackEnd/c_emit.scm 171 */
									obj_t BgL_port1309z00_1732;

									BgL_port1309z00_1732 =
										BGl_za2czd2portza2zd2zzbackend_c_emitz00;
									{	/* BackEnd/c_emit.scm 171 */
										obj_t BgL_tmpz00_2980;

										BgL_tmpz00_2980 = ((obj_t) BgL_port1309z00_1732);
										bgl_display_string(BGl_string2086z00zzbackend_c_emitz00,
											BgL_tmpz00_2980);
									}
									bgl_display_obj(BgL_iz00_1731, BgL_port1309z00_1732);
									{	/* BackEnd/c_emit.scm 171 */
										obj_t BgL_tmpz00_2984;

										BgL_tmpz00_2984 = ((obj_t) BgL_port1309z00_1732);
										bgl_display_string(BGl_string2087z00zzbackend_c_emitz00,
											BgL_tmpz00_2984);
									}
									{	/* BackEnd/c_emit.scm 171 */
										obj_t BgL_tmpz00_2987;

										BgL_tmpz00_2987 = ((obj_t) BgL_port1309z00_1732);
										bgl_display_char(((unsigned char) 10), BgL_tmpz00_2987);
							}}}
							{
								obj_t BgL_l1310z00_2990;

								BgL_l1310z00_2990 = CDR(BgL_l1310z00_1728);
								BgL_l1310z00_1728 = BgL_l1310z00_2990;
								goto BgL_zc3z04anonymousza31519ze3z87_1729;
							}
						}
					else
						{	/* BackEnd/c_emit.scm 172 */
							((bool_t) 1);
						}
				}
			}
			return
				bgl_display_char(((unsigned char) 10),
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
		}

	}



/* &emit-include */
	obj_t BGl_z62emitzd2includezb0zzbackend_c_emitz00(obj_t BgL_envz00_2722)
	{
		{	/* BackEnd/c_emit.scm 166 */
			return BGl_emitzd2includezd2zzbackend_c_emitz00();
		}

	}



/* emit-debug-activation */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2debugzd2activationz00zzbackend_c_emitz00()
	{
		{	/* BackEnd/c_emit.scm 178 */
			{	/* BackEnd/c_emit.scm 179 */
				obj_t BgL_port1313z00_1735;

				BgL_port1313z00_1735 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c_emit.scm 179 */
					obj_t BgL_tmpz00_2994;

					BgL_tmpz00_2994 = ((obj_t) BgL_port1313z00_1735);
					bgl_display_string(BGl_string2088z00zzbackend_c_emitz00,
						BgL_tmpz00_2994);
				}
				{	/* BackEnd/c_emit.scm 179 */
					obj_t BgL_tmpz00_2997;

					BgL_tmpz00_2997 = ((obj_t) BgL_port1313z00_1735);
					bgl_display_char(((unsigned char) 10), BgL_tmpz00_2997);
			}}
			{	/* BackEnd/c_emit.scm 180 */
				obj_t BgL_port1314z00_1736;

				BgL_port1314z00_1736 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c_emit.scm 180 */
					obj_t BgL_tmpz00_3000;

					BgL_tmpz00_3000 = ((obj_t) BgL_port1314z00_1736);
					bgl_display_string(BGl_string2089z00zzbackend_c_emitz00,
						BgL_tmpz00_3000);
				}
				{	/* BackEnd/c_emit.scm 180 */
					obj_t BgL_tmpz00_3003;

					BgL_tmpz00_3003 = ((obj_t) BgL_port1314z00_1736);
					bgl_display_char(((unsigned char) 10), BgL_tmpz00_3003);
			}}
			return
				bgl_display_char(((unsigned char) 10),
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
		}

	}



/* &emit-debug-activation */
	obj_t BGl_z62emitzd2debugzd2activationz62zzbackend_c_emitz00(obj_t
		BgL_envz00_2723)
	{
		{	/* BackEnd/c_emit.scm 178 */
			return BGl_emitzd2debugzd2activationz00zzbackend_c_emitz00();
		}

	}



/* emit-main */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2mainzd2zzbackend_c_emitz00()
	{
		{	/* BackEnd/c_emit.scm 186 */
			BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BUNSPEC);
			if (PAIRP(BGl_za2bigloozd2librarieszd2czd2setupza2zd2zzengine_paramz00))
				{	/* BackEnd/c_emit.scm 189 */
					{	/* BackEnd/c_emit.scm 190 */
						obj_t BgL_port1315z00_1738;

						BgL_port1315z00_1738 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
						{	/* BackEnd/c_emit.scm 190 */
							obj_t BgL_tmpz00_3011;

							BgL_tmpz00_3011 = ((obj_t) BgL_port1315z00_1738);
							bgl_display_string(BGl_string2090z00zzbackend_c_emitz00,
								BgL_tmpz00_3011);
						}
						{	/* BackEnd/c_emit.scm 190 */
							obj_t BgL_tmpz00_3014;

							BgL_tmpz00_3014 = ((obj_t) BgL_port1315z00_1738);
							bgl_display_char(((unsigned char) 10), BgL_tmpz00_3014);
					}}
					{
						obj_t BgL_l1317z00_1740;

						BgL_l1317z00_1740 =
							BGl_za2bigloozd2librarieszd2czd2setupza2zd2zzengine_paramz00;
					BgL_zc3z04anonymousza31523ze3z87_1741:
						if (PAIRP(BgL_l1317z00_1740))
							{	/* BackEnd/c_emit.scm 191 */
								{	/* BackEnd/c_emit.scm 192 */
									obj_t BgL_fz00_1743;

									BgL_fz00_1743 = CAR(BgL_l1317z00_1740);
									{	/* BackEnd/c_emit.scm 192 */
										obj_t BgL_port1316z00_1744;

										BgL_port1316z00_1744 =
											BGl_za2czd2portza2zd2zzbackend_c_emitz00;
										{	/* BackEnd/c_emit.scm 192 */
											obj_t BgL_tmpz00_3020;

											BgL_tmpz00_3020 = ((obj_t) BgL_port1316z00_1744);
											bgl_display_string(BGl_string2091z00zzbackend_c_emitz00,
												BgL_tmpz00_3020);
										}
										bgl_display_obj(BgL_fz00_1743, BgL_port1316z00_1744);
										{	/* BackEnd/c_emit.scm 192 */
											obj_t BgL_tmpz00_3024;

											BgL_tmpz00_3024 = ((obj_t) BgL_port1316z00_1744);
											bgl_display_string(BGl_string2092z00zzbackend_c_emitz00,
												BgL_tmpz00_3024);
										}
										{	/* BackEnd/c_emit.scm 192 */
											obj_t BgL_tmpz00_3027;

											BgL_tmpz00_3027 = ((obj_t) BgL_port1316z00_1744);
											bgl_display_char(((unsigned char) 10), BgL_tmpz00_3027);
								}}}
								{
									obj_t BgL_l1317z00_3030;

									BgL_l1317z00_3030 = CDR(BgL_l1317z00_1740);
									BgL_l1317z00_1740 = BgL_l1317z00_3030;
									goto BgL_zc3z04anonymousza31523ze3z87_1741;
								}
							}
						else
							{	/* BackEnd/c_emit.scm 191 */
								((bool_t) 1);
							}
					}
					bgl_display_char(((unsigned char) 10),
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				}
			else
				{	/* BackEnd/c_emit.scm 189 */
					BFALSE;
				}
			{	/* BackEnd/c_emit.scm 198 */
				obj_t BgL_port1319z00_1747;

				BgL_port1319z00_1747 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c_emit.scm 198 */
					obj_t BgL_tmpz00_3033;

					BgL_tmpz00_3033 = ((obj_t) BgL_port1319z00_1747);
					bgl_display_string(BGl_string2093z00zzbackend_c_emitz00,
						BgL_tmpz00_3033);
				}
				{	/* BackEnd/c_emit.scm 198 */
					obj_t BgL_tmpz00_3036;

					BgL_tmpz00_3036 = ((obj_t) BgL_port1319z00_1747);
					bgl_display_char(((unsigned char) 10), BgL_tmpz00_3036);
			}}
			{	/* BackEnd/c_emit.scm 199 */
				obj_t BgL_port1320z00_1748;

				BgL_port1320z00_1748 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c_emit.scm 199 */
					obj_t BgL_tmpz00_3039;

					BgL_tmpz00_3039 = ((obj_t) BgL_port1320z00_1748);
					bgl_display_string(BGl_string2094z00zzbackend_c_emitz00,
						BgL_tmpz00_3039);
				}
				{	/* BackEnd/c_emit.scm 199 */
					obj_t BgL_tmpz00_3042;

					BgL_tmpz00_3042 = ((obj_t) BgL_port1320z00_1748);
					bgl_display_char(((unsigned char) 10), BgL_tmpz00_3042);
			}}
			{
				obj_t BgL_l1322z00_1750;

				BgL_l1322z00_1750 =
					BGl_za2bigloozd2librarieszd2czd2setupza2zd2zzengine_paramz00;
			BgL_zc3z04anonymousza31529ze3z87_1751:
				if (PAIRP(BgL_l1322z00_1750))
					{	/* BackEnd/c_emit.scm 200 */
						{	/* BackEnd/c_emit.scm 201 */
							obj_t BgL_fz00_1753;

							BgL_fz00_1753 = CAR(BgL_l1322z00_1750);
							{	/* BackEnd/c_emit.scm 201 */
								obj_t BgL_port1321z00_1754;

								BgL_port1321z00_1754 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
								bgl_display_obj(BgL_fz00_1753, BgL_port1321z00_1754);
								{	/* BackEnd/c_emit.scm 201 */
									obj_t BgL_tmpz00_3049;

									BgL_tmpz00_3049 = ((obj_t) BgL_port1321z00_1754);
									bgl_display_string(BGl_string2095z00zzbackend_c_emitz00,
										BgL_tmpz00_3049);
								}
								{	/* BackEnd/c_emit.scm 201 */
									obj_t BgL_tmpz00_3052;

									BgL_tmpz00_3052 = ((obj_t) BgL_port1321z00_1754);
									bgl_display_char(((unsigned char) 10), BgL_tmpz00_3052);
						}}}
						{
							obj_t BgL_l1322z00_3055;

							BgL_l1322z00_3055 = CDR(BgL_l1322z00_1750);
							BgL_l1322z00_1750 = BgL_l1322z00_3055;
							goto BgL_zc3z04anonymousza31529ze3z87_1751;
						}
					}
				else
					{	/* BackEnd/c_emit.scm 200 */
						((bool_t) 1);
					}
			}
			{	/* BackEnd/c_emit.scm 203 */
				obj_t BgL_port1324z00_1757;

				BgL_port1324z00_1757 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c_emit.scm 203 */
					obj_t BgL_tmpz00_3057;

					BgL_tmpz00_3057 = ((obj_t) BgL_port1324z00_1757);
					bgl_display_string(BGl_string2096z00zzbackend_c_emitz00,
						BgL_tmpz00_3057);
				}
				{	/* BackEnd/c_emit.scm 203 */
					obj_t BgL_tmpz00_3060;

					BgL_tmpz00_3060 = ((obj_t) BgL_port1324z00_1757);
					bgl_display_char(((unsigned char) 10), BgL_tmpz00_3060);
			}}
			{	/* BackEnd/c_emit.scm 209 */
				obj_t BgL_port1325z00_1758;

				BgL_port1325z00_1758 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c_emit.scm 209 */
					obj_t BgL_tmpz00_3063;

					BgL_tmpz00_3063 = ((obj_t) BgL_port1325z00_1758);
					bgl_display_string(BGl_string2097z00zzbackend_c_emitz00,
						BgL_tmpz00_3063);
				}
				{	/* BackEnd/c_emit.scm 209 */
					obj_t BgL_tmpz00_3066;

					BgL_tmpz00_3066 = ((obj_t) BgL_port1325z00_1758);
					bgl_display_char(((unsigned char) 10), BgL_tmpz00_3066);
			}}
			BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BUNSPEC);
			{	/* BackEnd/c_emit.scm 211 */
				obj_t BgL_port1326z00_1759;

				BgL_port1326z00_1759 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
				{	/* BackEnd/c_emit.scm 211 */
					obj_t BgL_tmpz00_3070;

					BgL_tmpz00_3070 = ((obj_t) BgL_port1326z00_1759);
					bgl_display_string(BGl_string2098z00zzbackend_c_emitz00,
						BgL_tmpz00_3070);
				}
				{	/* BackEnd/c_emit.scm 211 */
					obj_t BgL_tmpz00_3073;

					BgL_tmpz00_3073 = ((obj_t) BgL_port1326z00_1759);
					bgl_display_char(((unsigned char) 10), BgL_tmpz00_3073);
			}}
			{	/* BackEnd/c_emit.scm 213 */
				obj_t BgL_list1537z00_1760;

				BgL_list1537z00_1760 =
					MAKE_YOUNG_PAIR(BGl_za2userzd2heapzd2siza7eza2za7zzengine_paramz00,
					BNIL);
				BGl_fprintfz00zz__r4_output_6_10_3z00
					(BGl_za2czd2portza2zd2zzbackend_c_emitz00,
					BGl_string2099z00zzbackend_c_emitz00, BgL_list1537z00_1760);
			}
			return
				bgl_display_char(((unsigned char) 10),
				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
		}

	}



/* &emit-main */
	obj_t BGl_z62emitzd2mainzb0zzbackend_c_emitz00(obj_t BgL_envz00_2724)
	{
		{	/* BackEnd/c_emit.scm 186 */
			return BGl_emitzd2mainzd2zzbackend_c_emitz00();
		}

	}



/* emit-dlopen-init */
	BGL_EXPORTED_DEF obj_t
		BGl_emitzd2dlopenzd2initz00zzbackend_c_emitz00(BgL_globalz00_bglt
		BgL_globalz00_6, obj_t BgL_initz00_7)
	{
		{	/* BackEnd/c_emit.scm 220 */
			{	/* BackEnd/c_emit.scm 221 */
				obj_t BgL_symz00_1761;

				if (BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(BgL_initz00_7))
					{	/* BackEnd/c_emit.scm 221 */
						BgL_symz00_1761 = bigloo_mangle(BgL_initz00_7);
					}
				else
					{	/* BackEnd/c_emit.scm 221 */
						BgL_symz00_1761 = BgL_initz00_7;
					}
				BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BUNSPEC);
				{	/* BackEnd/c_emit.scm 225 */
					obj_t BgL_port1327z00_1762;

					BgL_port1327z00_1762 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					{	/* BackEnd/c_emit.scm 225 */
						obj_t BgL_tmpz00_3084;

						BgL_tmpz00_3084 = ((obj_t) BgL_port1327z00_1762);
						bgl_display_string(BGl_string2100z00zzbackend_c_emitz00,
							BgL_tmpz00_3084);
					}
					bgl_display_obj(BgL_symz00_1761, BgL_port1327z00_1762);
					{	/* BackEnd/c_emit.scm 225 */
						obj_t BgL_tmpz00_3088;

						BgL_tmpz00_3088 = ((obj_t) BgL_port1327z00_1762);
						bgl_display_string(BGl_string2101z00zzbackend_c_emitz00,
							BgL_tmpz00_3088);
					}
					{	/* BackEnd/c_emit.scm 225 */
						obj_t BgL_tmpz00_3091;

						BgL_tmpz00_3091 = ((obj_t) BgL_port1327z00_1762);
						bgl_display_char(((unsigned char) 10), BgL_tmpz00_3091);
				}}
				BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BUNSPEC);
				{	/* BackEnd/c_emit.scm 227 */
					obj_t BgL_port1328z00_1763;

					BgL_port1328z00_1763 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					{	/* BackEnd/c_emit.scm 227 */
						obj_t BgL_tmpz00_3095;

						BgL_tmpz00_3095 = ((obj_t) BgL_port1328z00_1763);
						bgl_display_string(BGl_string2102z00zzbackend_c_emitz00,
							BgL_tmpz00_3095);
					}
					{	/* BackEnd/c_emit.scm 227 */
						obj_t BgL_arg1540z00_1764;

						BgL_arg1540z00_1764 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_globalz00_6)))->BgL_namez00);
						bgl_display_obj(BgL_arg1540z00_1764, BgL_port1328z00_1763);
					}
					{	/* BackEnd/c_emit.scm 227 */
						obj_t BgL_tmpz00_3101;

						BgL_tmpz00_3101 = ((obj_t) BgL_port1328z00_1763);
						bgl_display_string(BGl_string2103z00zzbackend_c_emitz00,
							BgL_tmpz00_3101);
					}
					bgl_display_obj(CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00),
						BgL_port1328z00_1763);
					{	/* BackEnd/c_emit.scm 227 */
						obj_t BgL_tmpz00_3106;

						BgL_tmpz00_3106 = ((obj_t) BgL_port1328z00_1763);
						bgl_display_string(BGl_string2104z00zzbackend_c_emitz00,
							BgL_tmpz00_3106);
					}
					{	/* BackEnd/c_emit.scm 227 */
						obj_t BgL_tmpz00_3109;

						BgL_tmpz00_3109 = ((obj_t) BgL_port1328z00_1763);
						bgl_display_char(((unsigned char) 10), BgL_tmpz00_3109);
				}}
				{	/* BackEnd/c_emit.scm 229 */
					obj_t BgL_port1329z00_1766;

					BgL_port1329z00_1766 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					{	/* BackEnd/c_emit.scm 229 */
						obj_t BgL_tmpz00_3112;

						BgL_tmpz00_3112 = ((obj_t) BgL_port1329z00_1766);
						bgl_display_string(BGl_string2105z00zzbackend_c_emitz00,
							BgL_tmpz00_3112);
					}
					{	/* BackEnd/c_emit.scm 229 */
						obj_t BgL_tmpz00_3115;

						BgL_tmpz00_3115 = ((obj_t) BgL_port1329z00_1766);
						bgl_display_char(((unsigned char) 10), BgL_tmpz00_3115);
				}}
				{	/* BackEnd/c_emit.scm 230 */
					obj_t BgL_port1330z00_1767;

					BgL_port1330z00_1767 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					{	/* BackEnd/c_emit.scm 230 */
						obj_t BgL_tmpz00_3118;

						BgL_tmpz00_3118 = ((obj_t) BgL_port1330z00_1767);
						bgl_display_string(BGl_string2106z00zzbackend_c_emitz00,
							BgL_tmpz00_3118);
					}
					bgl_display_obj(
						(((BgL_globalz00_bglt) COBJECT(BgL_globalz00_6))->BgL_modulez00),
						BgL_port1330z00_1767);
					{	/* BackEnd/c_emit.scm 230 */
						obj_t BgL_tmpz00_3123;

						BgL_tmpz00_3123 = ((obj_t) BgL_port1330z00_1767);
						bgl_display_string(BGl_string2107z00zzbackend_c_emitz00,
							BgL_tmpz00_3123);
					}
					{	/* BackEnd/c_emit.scm 230 */
						obj_t BgL_tmpz00_3126;

						BgL_tmpz00_3126 = ((obj_t) BgL_port1330z00_1767);
						bgl_display_char(((unsigned char) 10), BgL_tmpz00_3126);
				}}
				{	/* BackEnd/c_emit.scm 232 */
					obj_t BgL_port1331z00_1769;

					BgL_port1331z00_1769 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					{	/* BackEnd/c_emit.scm 232 */
						obj_t BgL_tmpz00_3129;

						BgL_tmpz00_3129 = ((obj_t) BgL_port1331z00_1769);
						bgl_display_string(BGl_string2108z00zzbackend_c_emitz00,
							BgL_tmpz00_3129);
					}
					{	/* BackEnd/c_emit.scm 232 */
						obj_t BgL_tmpz00_3132;

						BgL_tmpz00_3132 = ((obj_t) BgL_port1331z00_1769);
						bgl_display_char(((unsigned char) 10), BgL_tmpz00_3132);
				}}
				BGl_emitzd2bdbzd2locz00zzcgen_emitzd2copzd2(BUNSPEC);
				{	/* BackEnd/c_emit.scm 234 */
					obj_t BgL_port1332z00_1770;

					BgL_port1332z00_1770 = BGl_za2czd2portza2zd2zzbackend_c_emitz00;
					{	/* BackEnd/c_emit.scm 234 */
						obj_t BgL_tmpz00_3136;

						BgL_tmpz00_3136 = ((obj_t) BgL_port1332z00_1770);
						bgl_display_string(BGl_string2109z00zzbackend_c_emitz00,
							BgL_tmpz00_3136);
					}
					{	/* BackEnd/c_emit.scm 234 */
						obj_t BgL_tmpz00_3139;

						BgL_tmpz00_3139 = ((obj_t) BgL_port1332z00_1770);
						bgl_display_char(((unsigned char) 10), BgL_tmpz00_3139);
				}}
				return
					bgl_display_char(((unsigned char) 10),
					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
		}}

	}



/* &emit-dlopen-init */
	obj_t BGl_z62emitzd2dlopenzd2initz62zzbackend_c_emitz00(obj_t BgL_envz00_2725,
		obj_t BgL_globalz00_2726, obj_t BgL_initz00_2727)
	{
		{	/* BackEnd/c_emit.scm 220 */
			return
				BGl_emitzd2dlopenzd2initz00zzbackend_c_emitz00(
				((BgL_globalz00_bglt) BgL_globalz00_2726), BgL_initz00_2727);
		}

	}



/* llong->c-iso */
	BGL_EXPORTED_DEF obj_t
		BGl_llongzd2ze3czd2isoze3zzbackend_c_emitz00(BGL_LONGLONG_T BgL_llongz00_8)
	{
		{	/* BackEnd/c_emit.scm 240 */
			if ((BgL_llongz00_8 >= ((BGL_LONGLONG_T) 0)))
				{	/* BackEnd/c_emit.scm 255 */
					return BGl_positiveze70ze7zzbackend_c_emitz00(BgL_llongz00_8);
				}
			else
				{	/* BackEnd/c_emit.scm 257 */
					obj_t BgL_arg1561z00_1774;

					{	/* BackEnd/c_emit.scm 257 */
						BGL_LONGLONG_T BgL_arg1564z00_1775;

						if ((BgL_llongz00_8 < ((BGL_LONGLONG_T) 0)))
							{	/* BackEnd/c_emit.scm 257 */
								BgL_arg1564z00_1775 = NEG(BgL_llongz00_8);
							}
						else
							{	/* BackEnd/c_emit.scm 257 */
								BgL_arg1564z00_1775 = BgL_llongz00_8;
							}
						BgL_arg1561z00_1774 =
							BGl_positiveze70ze7zzbackend_c_emitz00(BgL_arg1564z00_1775);
					}
					return
						string_append_3(BGl_string2110z00zzbackend_c_emitz00,
						BgL_arg1561z00_1774, BGl_string2111z00zzbackend_c_emitz00);
				}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzbackend_c_emitz00(BGL_LONGLONG_T BgL_shiftz00_2737,
		obj_t BgL_sshiftz00_2736, long BgL_bitsz00_2735,
		BGL_LONGLONG_T BgL_maskz00_2734, BGL_LONGLONG_T BgL_allongz00_1783)
	{
		{	/* BackEnd/c_emit.scm 246 */
			if ((BgL_allongz00_1783 >= BgL_shiftz00_2737))
				{	/* BackEnd/c_emit.scm 250 */
					obj_t BgL_arg1573z00_1786;
					obj_t BgL_arg1575z00_1787;

					BgL_arg1573z00_1786 =
						BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
						(BgL_allongz00_1783 & BgL_maskz00_2734), BNIL);
					BgL_arg1575z00_1787 =
						BGl_loopze70ze7zzbackend_c_emitz00(BgL_shiftz00_2737,
						BgL_sshiftz00_2736, BgL_bitsz00_2735, BgL_maskz00_2734,
						(BgL_allongz00_1783 >> (int) (BgL_bitsz00_2735)));
					{	/* BackEnd/c_emit.scm 248 */
						obj_t BgL_list1576z00_1788;

						{	/* BackEnd/c_emit.scm 248 */
							obj_t BgL_arg1578z00_1789;

							{	/* BackEnd/c_emit.scm 248 */
								obj_t BgL_arg1582z00_1790;

								{	/* BackEnd/c_emit.scm 248 */
									obj_t BgL_arg1584z00_1791;

									{	/* BackEnd/c_emit.scm 248 */
										obj_t BgL_arg1588z00_1792;

										{	/* BackEnd/c_emit.scm 248 */
											obj_t BgL_arg1589z00_1793;

											{	/* BackEnd/c_emit.scm 248 */
												obj_t BgL_arg1592z00_1794;

												BgL_arg1592z00_1794 =
													MAKE_YOUNG_PAIR(BGl_string2112z00zzbackend_c_emitz00,
													BNIL);
												BgL_arg1589z00_1793 =
													MAKE_YOUNG_PAIR(BgL_arg1575z00_1787,
													BgL_arg1592z00_1794);
											}
											BgL_arg1588z00_1792 =
												MAKE_YOUNG_PAIR(BGl_string2113z00zzbackend_c_emitz00,
												BgL_arg1589z00_1793);
										}
										BgL_arg1584z00_1791 =
											MAKE_YOUNG_PAIR(BgL_sshiftz00_2736, BgL_arg1588z00_1792);
									}
									BgL_arg1582z00_1790 =
										MAKE_YOUNG_PAIR(BGl_string2114z00zzbackend_c_emitz00,
										BgL_arg1584z00_1791);
								}
								BgL_arg1578z00_1789 =
									MAKE_YOUNG_PAIR(BgL_arg1573z00_1786, BgL_arg1582z00_1790);
							}
							BgL_list1576z00_1788 =
								MAKE_YOUNG_PAIR(BGl_string2115z00zzbackend_c_emitz00,
								BgL_arg1578z00_1789);
						}
						return
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1576z00_1788);
					}
				}
			else
				{	/* BackEnd/c_emit.scm 247 */
					return
						string_append_3(BGl_string2116z00zzbackend_c_emitz00,
						BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
						(BgL_allongz00_1783, BNIL), BGl_string2111z00zzbackend_c_emitz00);
				}
		}

	}



/* positive~0 */
	obj_t BGl_positiveze70ze7zzbackend_c_emitz00(BGL_LONGLONG_T
		BgL_allongz00_1776)
	{
		{	/* BackEnd/c_emit.scm 254 */
			{	/* BackEnd/c_emit.scm 242 */
				BGL_LONGLONG_T BgL_shiftz00_1779;

				BgL_shiftz00_1779 = (((BGL_LONGLONG_T) 1) << (int) (((long) 16)));
				{	/* BackEnd/c_emit.scm 243 */
					obj_t BgL_sshiftz00_1780;

					BgL_sshiftz00_1780 =
						BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
						(BgL_shiftz00_1779, BNIL);
					{	/* BackEnd/c_emit.scm 244 */
						BGL_LONGLONG_T BgL_maskz00_1781;

						BgL_maskz00_1781 = (BgL_shiftz00_1779 - ((BGL_LONGLONG_T) 1));
						{	/* BackEnd/c_emit.scm 245 */

							return
								BGl_loopze70ze7zzbackend_c_emitz00(BgL_shiftz00_1779,
								BgL_sshiftz00_1780, ((long) 16), BgL_maskz00_1781,
								BgL_allongz00_1776);
		}}}}}

	}



/* &llong->c-iso */
	obj_t BGl_z62llongzd2ze3czd2isoz81zzbackend_c_emitz00(obj_t BgL_envz00_2728,
		obj_t BgL_llongz00_2729)
	{
		{	/* BackEnd/c_emit.scm 240 */
			return
				BGl_llongzd2ze3czd2isoze3zzbackend_c_emitz00(BLLONG_TO_LLONG
				(BgL_llongz00_2729));
		}

	}



/* emit-atom-value */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00(obj_t
		BgL_valuez00_9)
	{
		{	/* BackEnd/c_emit.scm 262 */
			if (BOOLEANP(BgL_valuez00_9))
				{	/* BackEnd/c_emit.scm 264 */
					bgl_display_string(BGl_string2117z00zzbackend_c_emitz00,
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* BackEnd/c_emit.scm 266 */
						obj_t BgL_arg1604z00_1804;

						{	/* BackEnd/c_emit.scm 266 */
							obj_t BgL_arg1605z00_1805;

							{	/* BackEnd/c_emit.scm 266 */
								BgL_typez00_bglt BgL_oz00_2390;

								BgL_oz00_2390 =
									((BgL_typez00_bglt) BGl_za2boolza2z00zztype_cachez00);
								BgL_arg1605z00_1805 =
									(((BgL_typez00_bglt) COBJECT(BgL_oz00_2390))->BgL_namez00);
							}
							BgL_arg1604z00_1804 =
								BGl_stringzd2sanszd2z42z42zztype_toolsz00(BgL_arg1605z00_1805);
						}
						bgl_display_obj(BgL_arg1604z00_1804,
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
					bgl_display_char(((unsigned char) ')'),
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					{	/* BackEnd/c_emit.scm 268 */
						long BgL_arg1606z00_1806;

						if (CBOOL(BgL_valuez00_9))
							{	/* BackEnd/c_emit.scm 268 */
								BgL_arg1606z00_1806 = ((long) 1);
							}
						else
							{	/* BackEnd/c_emit.scm 268 */
								BgL_arg1606z00_1806 = ((long) 0);
							}
						bgl_display_obj(BINT(BgL_arg1606z00_1806),
							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
					}
					return
						bgl_display_char(((unsigned char) ')'),
						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
				}
			else
				{	/* BackEnd/c_emit.scm 264 */
					if (NULLP(BgL_valuez00_9))
						{	/* BackEnd/c_emit.scm 270 */
							return
								bgl_display_string(BGl_string2118z00zzbackend_c_emitz00,
								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
						}
					else
						{	/* BackEnd/c_emit.scm 270 */
							if (CHARP(BgL_valuez00_9))
								{	/* BackEnd/c_emit.scm 272 */
									bgl_display_string(BGl_string2117z00zzbackend_c_emitz00,
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									{	/* BackEnd/c_emit.scm 274 */
										obj_t BgL_arg1611z00_1809;

										{	/* BackEnd/c_emit.scm 274 */
											obj_t BgL_arg1612z00_1810;

											{	/* BackEnd/c_emit.scm 274 */
												BgL_typez00_bglt BgL_oz00_2401;

												BgL_oz00_2401 =
													((BgL_typez00_bglt) BGl_za2charza2z00zztype_cachez00);
												BgL_arg1612z00_1810 =
													(((BgL_typez00_bglt) COBJECT(BgL_oz00_2401))->
													BgL_namez00);
											}
											BgL_arg1611z00_1809 =
												BGl_stringzd2sanszd2z42z42zztype_toolsz00
												(BgL_arg1612z00_1810);
										}
										bgl_display_obj(BgL_arg1611z00_1809,
											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									}
									bgl_display_string(BGl_string2111z00zzbackend_c_emitz00,
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
									if (((CCHAR(BgL_valuez00_9)) == ((long) 0)))
										{	/* BackEnd/c_emit.scm 277 */
											bgl_display_string(BGl_string2119z00zzbackend_c_emitz00,
												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										}
									else
										{	/* BackEnd/c_emit.scm 277 */
											if ((CCHAR(BgL_valuez00_9) == ((unsigned char) '\'')))
												{	/* BackEnd/c_emit.scm 279 */
													bgl_display_string
														(BGl_string2120z00zzbackend_c_emitz00,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
												}
											else
												{	/* BackEnd/c_emit.scm 279 */
													if ((CCHAR(BgL_valuez00_9) == ((unsigned char) '\\')))
														{	/* BackEnd/c_emit.scm 281 */
															bgl_display_string
																(BGl_string2121z00zzbackend_c_emitz00,
																BGl_za2czd2portza2zd2zzbackend_c_emitz00);
														}
													else
														{	/* BackEnd/c_emit.scm 283 */
															bool_t BgL_test2273z00_3214;

															if (((CCHAR(BgL_valuez00_9)) >= ((long) 32)))
																{	/* BackEnd/c_emit.scm 283 */
																	BgL_test2273z00_3214 =
																		((CCHAR(BgL_valuez00_9)) < ((long) 128));
																}
															else
																{	/* BackEnd/c_emit.scm 283 */
																	BgL_test2273z00_3214 = ((bool_t) 0);
																}
															if (BgL_test2273z00_3214)
																{	/* BackEnd/c_emit.scm 283 */
																	bgl_display_char(((unsigned char) '\''),
																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																	{	/* BackEnd/c_emit.scm 285 */
																		unsigned char BgL_tmpz00_3223;

																		BgL_tmpz00_3223 = CCHAR(BgL_valuez00_9);
																		bgl_display_char(BgL_tmpz00_3223,
																			BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																	}
																	bgl_display_char(((unsigned char) '\''),
																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																}
															else
																{	/* BackEnd/c_emit.scm 288 */
																	obj_t BgL_arg1631z00_1820;

																	{	/* BackEnd/c_emit.scm 288 */

																		BgL_arg1631z00_1820 =
																			BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																			((CCHAR(BgL_valuez00_9)), ((long) 10));
																	}
																	bgl_display_obj(BgL_arg1631z00_1820,
																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										}}}}
									return
										bgl_display_char(((unsigned char) ')'),
										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
								}
							else
								{	/* BackEnd/c_emit.scm 272 */
									if (BGL_INT8P(BgL_valuez00_9))
										{	/* BackEnd/c_emit.scm 290 */
											bgl_display_string(BGl_string2122z00zzbackend_c_emitz00,
												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
											{	/* BackEnd/c_emit.scm 292 */
												long BgL_arg1644z00_1829;

												{	/* BackEnd/c_emit.scm 292 */
													long BgL_res1996z00_2445;

													{	/* BackEnd/c_emit.scm 292 */
														int8_t BgL_xz00_2441;

														BgL_xz00_2441 = BGL_BINT8_TO_INT8(BgL_valuez00_9);
														{	/* BackEnd/c_emit.scm 292 */
															long BgL_arg1460z00_2442;

															BgL_arg1460z00_2442 = (long) (BgL_xz00_2441);
															{	/* BackEnd/c_emit.scm 292 */
																long BgL_res1995z00_2444;

																BgL_res1995z00_2444 =
																	(long) (BgL_arg1460z00_2442);
																BgL_res1996z00_2445 = BgL_res1995z00_2444;
													}}}
													BgL_arg1644z00_1829 = BgL_res1996z00_2445;
												}
												bgl_display_obj(BINT(BgL_arg1644z00_1829),
													BGl_za2czd2portza2zd2zzbackend_c_emitz00);
											}
											return
												bgl_display_char(((unsigned char) ')'),
												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
										}
									else
										{	/* BackEnd/c_emit.scm 290 */
											if (BGL_UINT8P(BgL_valuez00_9))
												{	/* BackEnd/c_emit.scm 294 */
													bgl_display_string
														(BGl_string2123z00zzbackend_c_emitz00,
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													{	/* BackEnd/c_emit.scm 296 */
														long BgL_arg1652z00_1831;

														{	/* BackEnd/c_emit.scm 296 */
															long BgL_res1999z00_2455;

															{	/* BackEnd/c_emit.scm 296 */
																uint8_t BgL_xz00_2451;

																BgL_xz00_2451 =
																	BGL_BUINT8_TO_UINT8(BgL_valuez00_9);
																{	/* BackEnd/c_emit.scm 296 */
																	long BgL_arg1459z00_2452;

																	BgL_arg1459z00_2452 = (long) (BgL_xz00_2451);
																	{	/* BackEnd/c_emit.scm 296 */
																		long BgL_res1998z00_2454;

																		BgL_res1998z00_2454 =
																			(long) (BgL_arg1459z00_2452);
																		BgL_res1999z00_2455 = BgL_res1998z00_2454;
															}}}
															BgL_arg1652z00_1831 = BgL_res1999z00_2455;
														}
														bgl_display_obj(BINT(BgL_arg1652z00_1831),
															BGl_za2czd2portza2zd2zzbackend_c_emitz00);
													}
													return
														bgl_display_char(((unsigned char) ')'),
														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
												}
											else
												{	/* BackEnd/c_emit.scm 294 */
													if (BGL_INT16P(BgL_valuez00_9))
														{	/* BackEnd/c_emit.scm 298 */
															bgl_display_string
																(BGl_string2124z00zzbackend_c_emitz00,
																BGl_za2czd2portza2zd2zzbackend_c_emitz00);
															{	/* BackEnd/c_emit.scm 300 */
																long BgL_arg1662z00_1833;

																{	/* BackEnd/c_emit.scm 300 */
																	long BgL_res2002z00_2465;

																	{	/* BackEnd/c_emit.scm 300 */
																		int16_t BgL_xz00_2461;

																		BgL_xz00_2461 =
																			BGL_BINT16_TO_INT16(BgL_valuez00_9);
																		{	/* BackEnd/c_emit.scm 300 */
																			long BgL_arg1458z00_2462;

																			BgL_arg1458z00_2462 =
																				(long) (BgL_xz00_2461);
																			{	/* BackEnd/c_emit.scm 300 */
																				long BgL_res2001z00_2464;

																				BgL_res2001z00_2464 =
																					(long) (BgL_arg1458z00_2462);
																				BgL_res2002z00_2465 =
																					BgL_res2001z00_2464;
																	}}}
																	BgL_arg1662z00_1833 = BgL_res2002z00_2465;
																}
																bgl_display_obj(BINT(BgL_arg1662z00_1833),
																	BGl_za2czd2portza2zd2zzbackend_c_emitz00);
															}
															return
																bgl_display_char(((unsigned char) ')'),
																BGl_za2czd2portza2zd2zzbackend_c_emitz00);
														}
													else
														{	/* BackEnd/c_emit.scm 298 */
															if (BGL_UINT16P(BgL_valuez00_9))
																{	/* BackEnd/c_emit.scm 302 */
																	bgl_display_string
																		(BGl_string2125z00zzbackend_c_emitz00,
																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																	{	/* BackEnd/c_emit.scm 304 */
																		long BgL_arg1664z00_1835;

																		{	/* BackEnd/c_emit.scm 304 */
																			long BgL_res2005z00_2475;

																			{	/* BackEnd/c_emit.scm 304 */
																				uint16_t BgL_xz00_2471;

																				BgL_xz00_2471 =
																					BGL_BUINT16_TO_UINT16(BgL_valuez00_9);
																				{	/* BackEnd/c_emit.scm 304 */
																					long BgL_arg1457z00_2472;

																					BgL_arg1457z00_2472 =
																						(long) (BgL_xz00_2471);
																					{	/* BackEnd/c_emit.scm 304 */
																						long BgL_res2004z00_2474;

																						BgL_res2004z00_2474 =
																							(long) (BgL_arg1457z00_2472);
																						BgL_res2005z00_2475 =
																							BgL_res2004z00_2474;
																			}}}
																			BgL_arg1664z00_1835 = BgL_res2005z00_2475;
																		}
																		bgl_display_obj(BINT(BgL_arg1664z00_1835),
																			BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																	}
																	return
																		bgl_display_char(((unsigned char) ')'),
																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																}
															else
																{	/* BackEnd/c_emit.scm 302 */
																	if (BGL_INT32P(BgL_valuez00_9))
																		{	/* BackEnd/c_emit.scm 306 */
																			bgl_display_string
																				(BGl_string2126z00zzbackend_c_emitz00,
																				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																			{	/* BackEnd/c_emit.scm 308 */
																				BGL_LONGLONG_T BgL_arg1667z00_1837;

																				{	/* BackEnd/c_emit.scm 308 */
																					BGL_LONGLONG_T BgL_res2007z00_2482;

																					{	/* BackEnd/c_emit.scm 308 */
																						int32_t BgL_nz00_2481;

																						BgL_nz00_2481 =
																							BGL_BINT32_TO_INT32
																							(BgL_valuez00_9);
																						BgL_res2007z00_2482 =
																							(BGL_LONGLONG_T) (BgL_nz00_2481);
																					}
																					BgL_arg1667z00_1837 =
																						BgL_res2007z00_2482;
																				}
																				bgl_display_obj(make_bllong
																					(BgL_arg1667z00_1837),
																					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																			}
																			return
																				bgl_display_char(((unsigned char) ')'),
																				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																		}
																	else
																		{	/* BackEnd/c_emit.scm 306 */
																			if (BGL_UINT32P(BgL_valuez00_9))
																				{	/* BackEnd/c_emit.scm 310 */
																					bgl_display_string
																						(BGl_string2127z00zzbackend_c_emitz00,
																						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																					{	/* BackEnd/c_emit.scm 312 */
																						BGL_LONGLONG_T BgL_arg1669z00_1839;

																						{	/* BackEnd/c_emit.scm 312 */
																							BGL_LONGLONG_T
																								BgL_res2009z00_2489;
																							{	/* BackEnd/c_emit.scm 312 */
																								uint32_t BgL_nz00_2488;

																								BgL_nz00_2488 =
																									BGL_BUINT32_TO_UINT32
																									(BgL_valuez00_9);
																								BgL_res2009z00_2489 =
																									(BGL_LONGLONG_T)
																									(BgL_nz00_2488);
																							}
																							BgL_arg1669z00_1839 =
																								BgL_res2009z00_2489;
																						}
																						bgl_display_obj(make_bllong
																							(BgL_arg1669z00_1839),
																							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																					}
																					return
																						bgl_display_char(((unsigned char)
																							')'),
																						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																				}
																			else
																				{	/* BackEnd/c_emit.scm 310 */
																					if (BGL_INT64P(BgL_valuez00_9))
																						{	/* BackEnd/c_emit.scm 314 */
																							bgl_display_string
																								(BGl_string2128z00zzbackend_c_emitz00,
																								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																							{	/* BackEnd/c_emit.scm 316 */
																								BGL_LONGLONG_T
																									BgL_arg1672z00_1841;
																								{	/* BackEnd/c_emit.scm 316 */
																									BGL_LONGLONG_T
																										BgL_res2011z00_2496;
																									{	/* BackEnd/c_emit.scm 316 */
																										int64_t BgL_nz00_2495;

																										BgL_nz00_2495 =
																											BGL_BINT64_TO_INT64
																											(BgL_valuez00_9);
																										BgL_res2011z00_2496 =
																											(BGL_LONGLONG_T)
																											(BgL_nz00_2495);
																									}
																									BgL_arg1672z00_1841 =
																										BgL_res2011z00_2496;
																								}
																								bgl_display_obj(make_bllong
																									(BgL_arg1672z00_1841),
																									BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																							}
																							return
																								bgl_display_char(((unsigned
																										char) ')'),
																								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																						}
																					else
																						{	/* BackEnd/c_emit.scm 314 */
																							if (BGL_UINT64P(BgL_valuez00_9))
																								{	/* BackEnd/c_emit.scm 318 */
																									bgl_display_string
																										(BGl_string2129z00zzbackend_c_emitz00,
																										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																									{	/* BackEnd/c_emit.scm 320 */
																										BGL_LONGLONG_T
																											BgL_arg1684z00_1843;
																										{	/* BackEnd/c_emit.scm 320 */
																											BGL_LONGLONG_T
																												BgL_res2013z00_2503;
																											{	/* BackEnd/c_emit.scm 320 */
																												uint64_t BgL_nz00_2502;

																												BgL_nz00_2502 =
																													BGL_BINT64_TO_INT64
																													(BgL_valuez00_9);
																												BgL_res2013z00_2503 =
																													(BGL_LONGLONG_T)
																													(BgL_nz00_2502);
																											}
																											BgL_arg1684z00_1843 =
																												BgL_res2013z00_2503;
																										}
																										bgl_display_obj(make_bllong
																											(BgL_arg1684z00_1843),
																											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																									}
																									return
																										bgl_display_char(((unsigned
																												char) ')'),
																										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																								}
																							else
																								{	/* BackEnd/c_emit.scm 318 */
																									if (UCS2P(BgL_valuez00_9))
																										{	/* BackEnd/c_emit.scm 322 */
																											bgl_display_string
																												(BGl_string2130z00zzbackend_c_emitz00,
																												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																											{	/* BackEnd/c_emit.scm 324 */
																												int BgL_arg1686z00_1845;

																												{	/* BackEnd/c_emit.scm 324 */
																													int
																														BgL_res2015z00_2510;
																													{	/* BackEnd/c_emit.scm 324 */
																														ucs2_t
																															BgL_ucs2z00_2509;
																														BgL_ucs2z00_2509 =
																															CUCS2
																															(BgL_valuez00_9);
																														{	/* BackEnd/c_emit.scm 324 */
																															obj_t
																																BgL_tmpz00_3304;
																															BgL_tmpz00_3304 =
																																BUCS2
																																(BgL_ucs2z00_2509);
																															BgL_res2015z00_2510
																																=
																																CUCS2
																																(BgL_tmpz00_3304);
																													}}
																													BgL_arg1686z00_1845 =
																														BgL_res2015z00_2510;
																												}
																												bgl_display_obj(BINT
																													(BgL_arg1686z00_1845),
																													BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																											}
																											return
																												bgl_display_char((
																													(unsigned char) ')'),
																												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																										}
																									else
																										{	/* BackEnd/c_emit.scm 322 */
																											if (
																												(BgL_valuez00_9 ==
																													BUNSPEC))
																												{	/* BackEnd/c_emit.scm 326 */
																													return
																														bgl_display_string
																														(BGl_string2131z00zzbackend_c_emitz00,
																														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																												}
																											else
																												{	/* BackEnd/c_emit.scm 326 */
																													if (STRINGP
																														(BgL_valuez00_9))
																														{	/* BackEnd/c_emit.scm 328 */
																															bgl_display_char((
																																	(unsigned
																																		char) '"'),
																																BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																															{	/* BackEnd/c_emit.scm 330 */
																																obj_t
																																	BgL_arg1692z00_1848;
																																BgL_arg1692z00_1848
																																	=
																																	BGl_untrigraphz00zzbackend_c_emitz00
																																	(string_for_read
																																	(BgL_valuez00_9));
																																bgl_display_obj
																																	(BgL_arg1692z00_1848,
																																	BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																															}
																															return
																																bgl_display_char
																																(((unsigned
																																		char) '"'),
																																BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																														}
																													else
																														{	/* BackEnd/c_emit.scm 328 */
																															if (INTEGERP
																																(BgL_valuez00_9))
																																{	/* BackEnd/c_emit.scm 332 */
																																	bgl_display_string
																																		(BGl_string2117z00zzbackend_c_emitz00,
																																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																	{	/* BackEnd/c_emit.scm 334 */
																																		obj_t
																																			BgL_arg1697z00_1851;
																																		{	/* BackEnd/c_emit.scm 334 */
																																			obj_t
																																				BgL_arg1704z00_1852;
																																			{	/* BackEnd/c_emit.scm 334 */
																																				BgL_typez00_bglt
																																					BgL_oz00_2525;
																																				BgL_oz00_2525
																																					=
																																					(
																																					(BgL_typez00_bglt)
																																					BGl_za2longza2z00zztype_cachez00);
																																				BgL_arg1704z00_1852
																																					=
																																					(((BgL_typez00_bglt) COBJECT(BgL_oz00_2525))->BgL_namez00);
																																			}
																																			BgL_arg1697z00_1851
																																				=
																																				BGl_stringzd2sanszd2z42z42zztype_toolsz00
																																				(BgL_arg1704z00_1852);
																																		}
																																		bgl_display_obj
																																			(BgL_arg1697z00_1851,
																																			BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																	}
																																	bgl_display_string
																																		(BGl_string2111z00zzbackend_c_emitz00,
																																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																	bgl_display_obj
																																		(BgL_valuez00_9,
																																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																	return
																																		bgl_display_string
																																		(BGl_string2111z00zzbackend_c_emitz00,
																																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																}
																															else
																																{	/* BackEnd/c_emit.scm 332 */
																																	if (REALP
																																		(BgL_valuez00_9))
																																		{	/* BackEnd/c_emit.scm 338 */
																																			if (BGL_IS_NAN(REAL_TO_DOUBLE(BgL_valuez00_9)))
																																				{	/* BackEnd/c_emit.scm 340 */
																																					return
																																						bgl_display_string
																																						(BGl_string2132z00zzbackend_c_emitz00,
																																						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																				}
																																			else
																																				{	/* BackEnd/c_emit.scm 342 */
																																					bool_t
																																						BgL_test2289z00_3336;
																																					if (BGL_IS_INF(REAL_TO_DOUBLE(BgL_valuez00_9)))
																																						{	/* BackEnd/c_emit.scm 342 */
																																							BgL_test2289z00_3336
																																								=
																																								(REAL_TO_DOUBLE
																																								(BgL_valuez00_9)
																																								>
																																								((double) 0.0));
																																						}
																																					else
																																						{	/* BackEnd/c_emit.scm 342 */
																																							BgL_test2289z00_3336
																																								=
																																								(
																																								(bool_t)
																																								0);
																																						}
																																					if (BgL_test2289z00_3336)
																																						{	/* BackEnd/c_emit.scm 342 */
																																							return
																																								bgl_display_string
																																								(BGl_string2133z00zzbackend_c_emitz00,
																																								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																						}
																																					else
																																						{	/* BackEnd/c_emit.scm 342 */
																																							if (BGL_IS_INF(REAL_TO_DOUBLE(BgL_valuez00_9)))
																																								{	/* BackEnd/c_emit.scm 344 */
																																									return
																																										bgl_display_string
																																										(BGl_string2134z00zzbackend_c_emitz00,
																																										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																								}
																																							else
																																								{	/* BackEnd/c_emit.scm 344 */
																																									bgl_display_string
																																										(BGl_string2117z00zzbackend_c_emitz00,
																																										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																									{	/* BackEnd/c_emit.scm 348 */
																																										obj_t
																																											BgL_arg1711z00_1858;
																																										{	/* BackEnd/c_emit.scm 348 */
																																											obj_t
																																												BgL_arg1712z00_1859;
																																											{	/* BackEnd/c_emit.scm 348 */
																																												BgL_typez00_bglt
																																													BgL_oz00_2548;
																																												BgL_oz00_2548
																																													=
																																													(
																																													(BgL_typez00_bglt)
																																													BGl_za2realza2z00zztype_cachez00);
																																												BgL_arg1712z00_1859
																																													=
																																													(
																																													((BgL_typez00_bglt) COBJECT(BgL_oz00_2548))->BgL_namez00);
																																											}
																																											BgL_arg1711z00_1858
																																												=
																																												BGl_stringzd2sanszd2z42z42zztype_toolsz00
																																												(BgL_arg1712z00_1859);
																																										}
																																										bgl_display_obj
																																											(BgL_arg1711z00_1858,
																																											BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																									}
																																									bgl_display_string
																																										(BGl_string2111z00zzbackend_c_emitz00,
																																										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																									bgl_display_obj
																																										(BgL_valuez00_9,
																																										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																									return
																																										bgl_display_string
																																										(BGl_string2111z00zzbackend_c_emitz00,
																																										BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																								}
																																						}
																																				}
																																		}
																																	else
																																		{	/* BackEnd/c_emit.scm 338 */
																																			if (ELONGP
																																				(BgL_valuez00_9))
																																				{	/* BackEnd/c_emit.scm 352 */
																																					bgl_display_string
																																						(BGl_string2117z00zzbackend_c_emitz00,
																																						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																					{	/* BackEnd/c_emit.scm 354 */
																																						obj_t
																																							BgL_arg1719z00_1862;
																																						{	/* BackEnd/c_emit.scm 354 */
																																							obj_t
																																								BgL_arg1725z00_1863;
																																							{	/* BackEnd/c_emit.scm 354 */
																																								BgL_typez00_bglt
																																									BgL_oz00_2556;
																																								BgL_oz00_2556
																																									=
																																									(
																																									(BgL_typez00_bglt)
																																									BGl_za2elongza2z00zztype_cachez00);
																																								BgL_arg1725z00_1863
																																									=
																																									(
																																									((BgL_typez00_bglt) COBJECT(BgL_oz00_2556))->BgL_namez00);
																																							}
																																							BgL_arg1719z00_1862
																																								=
																																								BGl_stringzd2sanszd2z42z42zztype_toolsz00
																																								(BgL_arg1725z00_1863);
																																						}
																																						bgl_display_obj
																																							(BgL_arg1719z00_1862,
																																							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																					}
																																					bgl_display_string
																																						(BGl_string2111z00zzbackend_c_emitz00,
																																						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																					{	/* BackEnd/c_emit.scm 356 */
																																						obj_t
																																							BgL_arg1726z00_1864;
																																						BgL_arg1726z00_1864
																																							=
																																							BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																																							(BELONG_TO_LONG
																																							(BgL_valuez00_9),
																																							BNIL);
																																						bgl_display_obj
																																							(BgL_arg1726z00_1864,
																																							BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																					}
																																					return
																																						bgl_display_string
																																						(BGl_string2111z00zzbackend_c_emitz00,
																																						BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																				}
																																			else
																																				{	/* BackEnd/c_emit.scm 352 */
																																					if (LLONGP(BgL_valuez00_9))
																																						{	/* BackEnd/c_emit.scm 359 */
																																							obj_t
																																								BgL_arg1729z00_1867;
																																							BgL_arg1729z00_1867
																																								=
																																								BGl_llongzd2ze3czd2isoze3zzbackend_c_emitz00
																																								(BLLONG_TO_LLONG
																																								(BgL_valuez00_9));
																																							return
																																								bgl_display_obj
																																								(BgL_arg1729z00_1867,
																																								BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																						}
																																					else
																																						{	/* BackEnd/c_emit.scm 358 */
																																							if (CNSTP(BgL_valuez00_9))
																																								{	/* BackEnd/c_emit.scm 362 */
																																									bool_t
																																										BgL_test2295z00_3374;
																																									{	/* BackEnd/c_emit.scm 362 */
																																										bool_t
																																											BgL_res2027z00_2563;
																																										BgL_res2027z00_2563
																																											=
																																											EOF_OBJECTP
																																											(BgL_valuez00_9);
																																										BgL_test2295z00_3374
																																											=
																																											BgL_res2027z00_2563;
																																									}
																																									if (BgL_test2295z00_3374)
																																										{	/* BackEnd/c_emit.scm 362 */
																																											return
																																												bgl_display_string
																																												(BGl_string2135z00zzbackend_c_emitz00,
																																												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																										}
																																									else
																																										{	/* BackEnd/c_emit.scm 362 */
																																											if ((BgL_valuez00_9 == BOPTIONAL))
																																												{	/* BackEnd/c_emit.scm 364 */
																																													return
																																														bgl_display_string
																																														(BGl_string2136z00zzbackend_c_emitz00,
																																														BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																												}
																																											else
																																												{	/* BackEnd/c_emit.scm 364 */
																																													if ((BgL_valuez00_9 == BKEY))
																																														{	/* BackEnd/c_emit.scm 366 */
																																															return
																																																bgl_display_string
																																																(BGl_string2137z00zzbackend_c_emitz00,
																																																BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																														}
																																													else
																																														{	/* BackEnd/c_emit.scm 366 */
																																															if ((BgL_valuez00_9 == BREST))
																																																{	/* BackEnd/c_emit.scm 368 */
																																																	return
																																																		bgl_display_string
																																																		(BGl_string2138z00zzbackend_c_emitz00,
																																																		BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																																}
																																															else
																																																{	/* BackEnd/c_emit.scm 368 */
																																																	if ((BgL_valuez00_9 == BEOA))
																																																		{	/* BackEnd/c_emit.scm 370 */
																																																			return
																																																				bgl_display_string
																																																				(BGl_string2139z00zzbackend_c_emitz00,
																																																				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																																		}
																																																	else
																																																		{	/* BackEnd/c_emit.scm 370 */
																																																			bgl_display_string
																																																				(BGl_string2140z00zzbackend_c_emitz00,
																																																				BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																																			{	/* BackEnd/c_emit.scm 374 */
																																																				long
																																																					BgL_arg1738z00_1874;
																																																				BgL_arg1738z00_1874
																																																					=
																																																					CCNST
																																																					(BgL_valuez00_9);
																																																				bgl_display_obj
																																																					(BINT
																																																					(BgL_arg1738z00_1874),
																																																					BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																																			}
																																																			return
																																																				bgl_display_char
																																																				(
																																																				((unsigned char) ')'), BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																								}}}}}}
																																							else
																																								{	/* BackEnd/c_emit.scm 360 */
																																									if (BIGNUMP(BgL_valuez00_9))
																																										{	/* BackEnd/c_emit.scm 376 */
																																											bgl_display_string
																																												(BGl_string2141z00zzbackend_c_emitz00,
																																												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																											{	/* BackEnd/c_emit.scm 378 */
																																												obj_t
																																													BgL_arg1740z00_1876;
																																												BgL_arg1740z00_1876
																																													=
																																													BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																																													(BgL_valuez00_9,
																																													BINT
																																													(((long) 16)));
																																												bgl_display_obj
																																													(BgL_arg1740z00_1876,
																																													BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																											}
																																											return
																																												bgl_display_string
																																												(BGl_string2142z00zzbackend_c_emitz00,
																																												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
																																										}
																																									else
																																										{	/* BackEnd/c_emit.scm 376 */
																																											return
																																												bgl_display_obj
																																												(BgL_valuez00_9,
																																												BGl_za2czd2portza2zd2zzbackend_c_emitz00);
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



/* &emit-atom-value */
	obj_t BGl_z62emitzd2atomzd2valuez62zzbackend_c_emitz00(obj_t BgL_envz00_2730,
		obj_t BgL_valuez00_2731)
	{
		{	/* BackEnd/c_emit.scm 262 */
			return BGl_emitzd2atomzd2valuez00zzbackend_c_emitz00(BgL_valuez00_2731);
		}

	}



/* untrigraph */
	BGL_EXPORTED_DEF obj_t BGl_untrigraphz00zzbackend_c_emitz00(obj_t
		BgL_fromz00_10)
	{
		{	/* BackEnd/c_emit.scm 389 */
			{	/* BackEnd/c_emit.scm 390 */
				long BgL_lenz00_1877;

				BgL_lenz00_1877 = STRING_LENGTH(BgL_fromz00_10);
				{	/* BackEnd/c_emit.scm 390 */
					long BgL_lenzd22zd2_1878;

					BgL_lenzd22zd2_1878 = (BgL_lenz00_1877 - ((long) 2));
					{	/* BackEnd/c_emit.scm 391 */

						{	/* BackEnd/c_emit.scm 393 */
							long BgL_nbzd2colzd2_1879;

							{
								long BgL_iz00_1923;
								long BgL_nbzd2colzd2_1924;

								BgL_iz00_1923 = ((long) 0);
								BgL_nbzd2colzd2_1924 = ((long) 0);
							BgL_zc3z04anonymousza31825ze3z87_1925:
								if ((BgL_iz00_1923 > BgL_lenzd22zd2_1878))
									{	/* BackEnd/c_emit.scm 396 */
										BgL_nbzd2colzd2_1879 = BgL_nbzd2colzd2_1924;
									}
								else
									{	/* BackEnd/c_emit.scm 396 */
										if (
											(STRING_REF(BgL_fromz00_10,
													BgL_iz00_1923) == ((unsigned char) '?')))
											{	/* BackEnd/c_emit.scm 398 */
												if (
													(STRING_REF(BgL_fromz00_10,
															(BgL_iz00_1923 + ((long) 1))) ==
														((unsigned char) '?')))
													{
														long BgL_nbzd2colzd2_3416;
														long BgL_iz00_3414;

														BgL_iz00_3414 = (BgL_iz00_1923 + ((long) 2));
														BgL_nbzd2colzd2_3416 =
															(BgL_nbzd2colzd2_1924 + ((long) 1));
														BgL_nbzd2colzd2_1924 = BgL_nbzd2colzd2_3416;
														BgL_iz00_1923 = BgL_iz00_3414;
														goto BgL_zc3z04anonymousza31825ze3z87_1925;
													}
												else
													{
														long BgL_iz00_3418;

														BgL_iz00_3418 = (BgL_iz00_1923 + ((long) 2));
														BgL_iz00_1923 = BgL_iz00_3418;
														goto BgL_zc3z04anonymousza31825ze3z87_1925;
													}
											}
										else
											{
												long BgL_iz00_3420;

												BgL_iz00_3420 = (BgL_iz00_1923 + ((long) 1));
												BgL_iz00_1923 = BgL_iz00_3420;
												goto BgL_zc3z04anonymousza31825ze3z87_1925;
											}
									}
							}
							if ((BgL_nbzd2colzd2_1879 == ((long) 0)))
								{	/* BackEnd/c_emit.scm 405 */
									return BgL_fromz00_10;
								}
							else
								{	/* BackEnd/c_emit.scm 410 */
									obj_t BgL_resz00_1881;

									{	/* BackEnd/c_emit.scm 410 */
										long BgL_arg1822z00_1917;

										BgL_arg1822z00_1917 =
											(BgL_lenz00_1877 +
											(((long) 3) * (BgL_nbzd2colzd2_1879 * ((long) 2))));
										{	/* BackEnd/c_emit.scm 410 */

											BgL_resz00_1881 =
												make_string(BgL_arg1822z00_1917, ((unsigned char) ' '));
									}}
									{
										long BgL_rz00_1884;
										long BgL_wz00_1885;

										BgL_rz00_1884 = ((long) 0);
										BgL_wz00_1885 = ((long) 0);
									BgL_zc3z04anonymousza31742ze3z87_1886:
										if ((BgL_rz00_1884 == BgL_lenz00_1877))
											{	/* BackEnd/c_emit.scm 415 */
												return BgL_resz00_1881;
											}
										else
											{	/* BackEnd/c_emit.scm 417 */
												bool_t BgL_test2306z00_3430;

												if (
													(STRING_REF(BgL_fromz00_10,
															BgL_rz00_1884) == ((unsigned char) '?')))
													{	/* BackEnd/c_emit.scm 417 */
														BgL_test2306z00_3430 =
															(BgL_rz00_1884 > BgL_lenzd22zd2_1878);
													}
												else
													{	/* BackEnd/c_emit.scm 417 */
														BgL_test2306z00_3430 = ((bool_t) 1);
													}
												if (BgL_test2306z00_3430)
													{	/* BackEnd/c_emit.scm 417 */
														{	/* BackEnd/c_emit.scm 419 */
															unsigned char BgL_tmpz00_3435;

															BgL_tmpz00_3435 =
																STRING_REF(BgL_fromz00_10, BgL_rz00_1884);
															STRING_SET(BgL_resz00_1881, BgL_wz00_1885,
																BgL_tmpz00_3435);
														}
														{
															long BgL_wz00_3440;
															long BgL_rz00_3438;

															BgL_rz00_3438 = (BgL_rz00_1884 + ((long) 1));
															BgL_wz00_3440 = (BgL_wz00_1885 + ((long) 1));
															BgL_wz00_1885 = BgL_wz00_3440;
															BgL_rz00_1884 = BgL_rz00_3438;
															goto BgL_zc3z04anonymousza31742ze3z87_1886;
														}
													}
												else
													{	/* BackEnd/c_emit.scm 417 */
														if (
															(STRING_REF(BgL_fromz00_10,
																	(BgL_rz00_1884 + ((long) 1))) ==
																((unsigned char) '?')))
															{	/* BackEnd/c_emit.scm 421 */
																STRING_SET(BgL_resz00_1881, BgL_wz00_1885,
																	((unsigned char) '\\'));
																{	/* BackEnd/c_emit.scm 428 */
																	long BgL_tmpz00_3447;

																	BgL_tmpz00_3447 =
																		(BgL_wz00_1885 + ((long) 1));
																	STRING_SET(BgL_resz00_1881, BgL_tmpz00_3447,
																		((unsigned char) '0'));
																}
																{	/* BackEnd/c_emit.scm 429 */
																	long BgL_tmpz00_3450;

																	BgL_tmpz00_3450 =
																		(BgL_wz00_1885 + ((long) 2));
																	STRING_SET(BgL_resz00_1881, BgL_tmpz00_3450,
																		((unsigned char) '7'));
																}
																{	/* BackEnd/c_emit.scm 430 */
																	long BgL_tmpz00_3453;

																	BgL_tmpz00_3453 =
																		(BgL_wz00_1885 + ((long) 3));
																	STRING_SET(BgL_resz00_1881, BgL_tmpz00_3453,
																		((unsigned char) '7'));
																}
																{	/* BackEnd/c_emit.scm 431 */
																	long BgL_tmpz00_3456;

																	BgL_tmpz00_3456 =
																		(BgL_wz00_1885 + ((long) 4));
																	STRING_SET(BgL_resz00_1881, BgL_tmpz00_3456,
																		((unsigned char) '\\'));
																}
																{	/* BackEnd/c_emit.scm 432 */
																	long BgL_tmpz00_3459;

																	BgL_tmpz00_3459 =
																		(BgL_wz00_1885 + ((long) 5));
																	STRING_SET(BgL_resz00_1881, BgL_tmpz00_3459,
																		((unsigned char) '0'));
																}
																{	/* BackEnd/c_emit.scm 433 */
																	long BgL_tmpz00_3462;

																	BgL_tmpz00_3462 =
																		(BgL_wz00_1885 + ((long) 6));
																	STRING_SET(BgL_resz00_1881, BgL_tmpz00_3462,
																		((unsigned char) '7'));
																}
																{	/* BackEnd/c_emit.scm 434 */
																	long BgL_tmpz00_3465;

																	BgL_tmpz00_3465 =
																		(BgL_wz00_1885 + ((long) 7));
																	STRING_SET(BgL_resz00_1881, BgL_tmpz00_3465,
																		((unsigned char) '7'));
																}
																{
																	long BgL_wz00_3470;
																	long BgL_rz00_3468;

																	BgL_rz00_3468 = (BgL_rz00_1884 + ((long) 2));
																	BgL_wz00_3470 = (BgL_wz00_1885 + ((long) 8));
																	BgL_wz00_1885 = BgL_wz00_3470;
																	BgL_rz00_1884 = BgL_rz00_3468;
																	goto BgL_zc3z04anonymousza31742ze3z87_1886;
																}
															}
														else
															{	/* BackEnd/c_emit.scm 421 */
																STRING_SET(BgL_resz00_1881, BgL_wz00_1885,
																	((unsigned char) '?'));
																{	/* BackEnd/c_emit.scm 423 */
																	unsigned char BgL_auxz00_3475;
																	long BgL_tmpz00_3473;

																	BgL_auxz00_3475 =
																		STRING_REF(BgL_fromz00_10,
																		(BgL_rz00_1884 + ((long) 1)));
																	BgL_tmpz00_3473 =
																		(BgL_wz00_1885 + ((long) 1));
																	STRING_SET(BgL_resz00_1881, BgL_tmpz00_3473,
																		BgL_auxz00_3475);
																}
																{
																	long BgL_wz00_3481;
																	long BgL_rz00_3479;

																	BgL_rz00_3479 = (BgL_rz00_1884 + ((long) 2));
																	BgL_wz00_3481 = (BgL_wz00_1885 + ((long) 2));
																	BgL_wz00_1885 = BgL_wz00_3481;
																	BgL_rz00_1884 = BgL_rz00_3479;
																	goto BgL_zc3z04anonymousza31742ze3z87_1886;
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



/* &untrigraph */
	obj_t BGl_z62untrigraphz62zzbackend_c_emitz00(obj_t BgL_envz00_2732,
		obj_t BgL_fromz00_2733)
	{
		{	/* BackEnd/c_emit.scm 389 */
			return BGl_untrigraphz00zzbackend_c_emitz00(BgL_fromz00_2733);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbackend_c_emitz00()
	{
		{	/* BackEnd/c_emit.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_c_emitz00()
	{
		{	/* BackEnd/c_emit.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_c_emitz00()
	{
		{	/* BackEnd/c_emit.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_c_emitz00()
	{
		{	/* BackEnd/c_emit.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2143z00zzbackend_c_emitz00));
			BGl_modulezd2initializa7ationz75zzengine_configurez00(((long) 272817155),
				BSTRING_TO_STRING(BGl_string2143z00zzbackend_c_emitz00));
			BGl_modulezd2initializa7ationz75zztools_licensez00(((long) 110617584),
				BSTRING_TO_STRING(BGl_string2143z00zzbackend_c_emitz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2143z00zzbackend_c_emitz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2143z00zzbackend_c_emitz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2143z00zzbackend_c_emitz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2143z00zzbackend_c_emitz00));
			BGl_modulezd2initializa7ationz75zzcgen_copz00(((long) 240180036),
				BSTRING_TO_STRING(BGl_string2143z00zzbackend_c_emitz00));
			BGl_modulezd2initializa7ationz75zzcgen_emitzd2copzd2(((long) 371489783),
				BSTRING_TO_STRING(BGl_string2143z00zzbackend_c_emitz00));
			return
				BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string2143z00zzbackend_c_emitz00));
		}

	}

#ifdef __cplusplus
}
#endif
