/*===========================================================================*/
/*   (Unsafe/gunzip.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/gunzip.scm -indent -o objs/obj_u/Unsafe/gunzip.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_z62exceptionz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
	}                      *BgL_z62exceptionz62_bglt;

	typedef struct BgL_z62errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                  *BgL_z62errorz62_bglt;

	typedef struct BgL_z62iozd2parsezd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                               *BgL_z62iozd2parsezd2errorz62_bglt;

	typedef struct BgL_huftz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_ez00;
		long BgL_bz00;
		obj_t BgL_vz00;
	}              *BgL_huftz00_bglt;


	static obj_t BGl_z62zc3z04anonymousza31949ze32800ze5zz__gunza7ipza7(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31949ze32801ze5zz__gunza7ipza7(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31949ze32802ze5zz__gunza7ipza7(obj_t,
		obj_t);
	static obj_t BGl_vector2872z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_vector2874z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_vector2875z00zz__gunza7ipza7 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_portzd2ze3za7libzd2portz44zz__gunza7ipza7(obj_t,
		obj_t);
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31967ze32803ze5zz__gunza7ipza7(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31967ze32804ze5zz__gunza7ipza7(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31967ze32805ze5zz__gunza7ipza7(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol2900z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol2902z00zz__gunza7ipza7 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_portzd2ze3inflatezd2portze3zz__gunza7ipza7(obj_t,
		obj_t);
	static obj_t BGl_z62gunza7ipzd2sendcharsz17zz__gunza7ipza7(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62loopzd2inflatezb0zz__gunza7ipza7(obj_t, long, obj_t,
		obj_t, long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, long, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31945ze3ze5zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_symbol2919z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl__openzd2inputzd2gza7ipzd2filez75zz__gunza7ipza7(obj_t,
		obj_t);
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_symbol2921z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol2925z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol2929z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__gunza7ipza7();
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2inflatezd2filezd2zz__gunza7ipza7(obj_t, obj_t, obj_t);
	static BgL_huftz00_bglt BGl_z62lambda1973z62zz__gunza7ipza7(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_huftz00_bglt BGl_z62lambda1975z62zz__gunza7ipza7(obj_t);
	static obj_t BGl_symbol2931z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol2850z00zz__gunza7ipza7 = BUNSPEC;
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_symbol2852z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol2854z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol2936z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol2856z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol2938z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_z62lambda1982z62zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1983z62zz__gunza7ipza7(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__gunza7ipza7();
	static obj_t BGl_z62lambda1987z62zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1988z62zz__gunza7ipza7(obj_t, obj_t, obj_t);
	extern obj_t BGl_z62iozd2parsezd2errorz62zz__objectz00;
	extern obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__gunza7ipza7();
	static obj_t BGl_z62lambda1992z62zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_z62lambda1993z62zz__gunza7ipza7(obj_t, obj_t, obj_t);
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31949ze3ze5zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_huftzd2buildze70z35zz__gunza7ipza7(obj_t, obj_t, long, long,
		obj_t, obj_t, long, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7(obj_t);
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_z62checkzd2flushzb0zz__gunza7ipza7(long, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31967ze3ze5zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_symbol2896z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_symbol2898z00zz__gunza7ipza7 = BUNSPEC;
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl__portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(obj_t, obj_t);
	extern obj_t make_vector(long, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31977ze3ze5zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__gunza7ipza7();
	extern obj_t BGl_readzd2charzd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31413ze3ze5zz__gunza7ipza7(obj_t);
	static obj_t BGl_inflatezd2entryzd2zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_subvectorz00zz__gunza7ipza7(obj_t, long);
	static obj_t BGl_readzd2nullzd2termzd2stringze70z35zz__gunza7ipza7(obj_t);
	extern obj_t make_string(long, unsigned char);
	extern obj_t bgl_close_input_port(obj_t);
	static bool_t BGl_z62NEEDBITSz62zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62laapz62zz__gunza7ipza7(long, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl_z62checkzd2adler32zb0zz__gunza7ipza7(obj_t, obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2gza7ipzd2filez75zz__gunza7ipza7(obj_t, obj_t, obj_t);
	static obj_t BGl_buildzd2vectorzd2zz__gunza7ipza7(long, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_inflatezd2sendcharszd2zz__gunza7ipza7(obj_t,
		obj_t);
	static obj_t BGl_inflatez00zz__gunza7ipza7(obj_t, obj_t);
	extern long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long, long);
	static obj_t BGl_portzd2ze3portz31zz__gunza7ipza7(obj_t, obj_t, obj_t, long,
		obj_t);
	static obj_t BGl_z62loop2795z62zz__gunza7ipza7(long, obj_t, obj_t, obj_t);
	static obj_t BGl_z62loop2796z62zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t,
		obj_t, long, long);
	static obj_t BGl_z62zc3z04anonymousza31418ze3ze5zz__gunza7ipza7(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(obj_t,
		obj_t);
	static obj_t BGl_huftz00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31945ze32797ze5zz__gunza7ipza7(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31945ze32798ze5zz__gunza7ipza7(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31945ze32799ze5zz__gunza7ipza7(obj_t,
		obj_t);
	extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__openzd2inputzd2za7libzd2filez75zz__gunza7ipza7(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__gunza7ipza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31518ze3ze5zz__gunza7ipza7(obj_t);
	static long BGl_readzd2int2ze70z35zz__gunza7ipza7(obj_t, obj_t);
	static bool_t BGl_setzd2litze70z35zz__gunza7ipza7(obj_t, obj_t, obj_t, long,
		long, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31560ze3ze5zz__gunza7ipza7(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__gunza7ipza7();
	static obj_t BGl__openzd2inputzd2inflatezd2filezd2zz__gunza7ipza7(obj_t,
		obj_t);
	extern obj_t BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		int);
	extern obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern bool_t BGl_positivezf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__gunza7ipza7();
	static obj_t BGl_importedzd2moduleszd2initz00zz__gunza7ipza7();
	extern obj_t bgl_open_input_gzip_port(obj_t, obj_t, obj_t);
	extern obj_t BGl_objectz00zz__objectz00;
	static BgL_huftz00_bglt
		BGl_z62zc3z04anonymousza31635ze3ze5zz__gunza7ipza7(obj_t, long);
	static obj_t BGl__portzd2ze3inflatezd2portze3zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31563ze3ze5zz__gunza7ipza7(obj_t);
	static obj_t BGl_z62loopz62zz__gunza7ipza7(obj_t, obj_t, obj_t, obj_t, obj_t,
		long, obj_t);
	static obj_t BGl_list2862z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_list2864z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_list2866z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_list2868z00zz__gunza7ipza7 = BUNSPEC;
	extern obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
	static obj_t BGl__portzd2ze3za7libzd2portz44zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31548ze3ze5zz__gunza7ipza7(obj_t);
	extern obj_t c_substring(obj_t, long, long);
	static bool_t BGl_jumpzd2tozd2nextze70ze7zz__gunza7ipza7(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t
		BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_list2873z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_list2876z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_z62z52dozd2copy2ze2zz__gunza7ipza7(obj_t, obj_t, obj_t,
		obj_t, obj_t, long, obj_t, long, obj_t, obj_t, long, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_za7erozf3z54zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_readzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	extern obj_t BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t,
		obj_t);
	extern long default_io_bufsiz;
	static obj_t BGl_z62zc3z04anonymousza31930ze3ze5zz__gunza7ipza7(obj_t);
	static obj_t BGl_z62inflatezd2sendcharszb0zz__gunza7ipza7(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7(obj_t,
		obj_t);
	extern bool_t rgc_fill_buffer(obj_t);
	extern obj_t BGl_readzd2bytezd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_vector2861z00zz__gunza7ipza7 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2za7libzd2filez75zz__gunza7ipza7(obj_t, obj_t, obj_t);
	static obj_t BGl_vector2863z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_vector2865z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_vector2867z00zz__gunza7ipza7 = BUNSPEC;
	static obj_t BGl_z62gunza7ipzd2parsezd2headerzc5zz__gunza7ipza7(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_portzd2ze3gza7ipzd2portzd2envz96zz__gunza7ipza7,
		BgL_bgl__portza7d2za7e3gza7a7i2940za7, opt_generic_entry,
		BGl__portzd2ze3gza7ipzd2portz44zz__gunza7ipza7, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2za7libzd2filezd2envza7zz__gunza7ipza7,
		BgL_bgl__openza7d2inputza7d22941z00, opt_generic_entry,
		BGl__openzd2inputzd2za7libzd2filez75zz__gunza7ipza7, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_portzd2ze3za7libzd2portzd2envz96zz__gunza7ipza7,
		BgL_bgl__portza7d2za7e3za7a7li2942za7, opt_generic_entry,
		BGl__portzd2ze3za7libzd2portz44zz__gunza7ipza7, BFALSE, -1);
	      DEFINE_STRING(BGl_string2901z00zz__gunza7ipza7,
		BgL_bgl_string2901za700za7za7_2943za7, "port->gzip-port", 15);
	      DEFINE_STRING(BGl_string2903z00zz__gunza7ipza7,
		BgL_bgl_string2903za700za7za7_2944za7, "port->inflate-port", 18);
	      DEFINE_STRING(BGl_string2904z00zz__gunza7ipza7,
		BgL_bgl_string2904za700za7za7_2945za7, "port->port", 10);
	      DEFINE_STRING(BGl_string2905z00zz__gunza7ipza7,
		BgL_bgl_string2905za700za7za7_2946za7, "_port->inflate-port", 19);
	      DEFINE_STRING(BGl_string2906z00zz__gunza7ipza7,
		BgL_bgl_string2906za700za7za7_2947za7, "_port->gzip-port", 16);
	      DEFINE_STRING(BGl_string2907z00zz__gunza7ipza7,
		BgL_bgl_string2907za700za7za7_2948za7, "_open-input-gzip-file", 21);
	      DEFINE_STRING(BGl_string2908z00zz__gunza7ipza7,
		BgL_bgl_string2908za700za7za7_2949za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2909z00zz__gunza7ipza7,
		BgL_bgl_string2909za700za7za7_2950za7, "_open-input-inflate-file", 24);
	      DEFINE_STRING(BGl_string2910z00zz__gunza7ipza7,
		BgL_bgl_string2910za700za7za7_2951za7, "open-input-deflate-file", 23);
	      DEFINE_STRING(BGl_string2911z00zz__gunza7ipza7,
		BgL_bgl_string2911za700za7za7_2952za7, "_port->zlib-port", 16);
	      DEFINE_STRING(BGl_string2912z00zz__gunza7ipza7,
		BgL_bgl_string2912za700za7za7_2953za7, "port->zlib-port", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_gunza7ipzd2sendcharszd2envza7zz__gunza7ipza7,
		BgL_bgl_za762gunza7a7ipza7d2se2954za7,
		BGl_z62gunza7ipzd2sendcharsz17zz__gunza7ipza7, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2913z00zz__gunza7ipza7,
		BgL_bgl_string2913za700za7za7_2955za7, "Illegal fcheck", 14);
	      DEFINE_STRING(BGl_string2914z00zz__gunza7ipza7,
		BgL_bgl_string2914za700za7za7_2956za7, "Unsupported format", 18);
	      DEFINE_STRING(BGl_string2915z00zz__gunza7ipza7,
		BgL_bgl_string2915za700za7za7_2957za7, "_open-input-zlib-file", 21);
	      DEFINE_STRING(BGl_string2916z00zz__gunza7ipza7,
		BgL_bgl_string2916za700za7za7_2958za7, "&check-adler32", 14);
	      DEFINE_STRING(BGl_string2920z00zz__gunza7ipza7,
		BgL_bgl_string2920za700za7za7_2959za7, "e", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2917z00zz__gunza7ipza7,
		BgL_bgl_za762lambda1983za7622960z00, BGl_z62lambda1983z62zz__gunza7ipza7,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2922z00zz__gunza7ipza7,
		BgL_bgl_string2922za700za7za7_2961za7, "long", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2918z00zz__gunza7ipza7,
		BgL_bgl_za762lambda1982za7622962z00, BGl_z62lambda1982z62zz__gunza7ipza7,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2926z00zz__gunza7ipza7,
		BgL_bgl_string2926za700za7za7_2963za7, "b", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2923z00zz__gunza7ipza7,
		BgL_bgl_za762lambda1988za7622964z00, BGl_z62lambda1988z62zz__gunza7ipza7,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2924z00zz__gunza7ipza7,
		BgL_bgl_za762lambda1987za7622965z00, BGl_z62lambda1987z62zz__gunza7ipza7,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2930z00zz__gunza7ipza7,
		BgL_bgl_string2930za700za7za7_2966za7, "v", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2927z00zz__gunza7ipza7,
		BgL_bgl_za762lambda1993za7622967z00, BGl_z62lambda1993z62zz__gunza7ipza7,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2932z00zz__gunza7ipza7,
		BgL_bgl_string2932za700za7za7_2968za7, "obj", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2928z00zz__gunza7ipza7,
		BgL_bgl_za762lambda1992za7622969z00, BGl_z62lambda1992z62zz__gunza7ipza7,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2851z00zz__gunza7ipza7,
		BgL_bgl_string2851za700za7za7_2970za7, "return", 6);
	      DEFINE_STRING(BGl_string2853z00zz__gunza7ipza7,
		BgL_bgl_string2853za700za7za7_2971za7, "complete", 8);
	      DEFINE_STRING(BGl_string2855z00zz__gunza7ipza7,
		BgL_bgl_string2855za700za7za7_2972za7, "flush", 5);
	      DEFINE_STRING(BGl_string2937z00zz__gunza7ipza7,
		BgL_bgl_string2937za700za7za7_2973za7, "huft", 4);
	      DEFINE_STRING(BGl_string2857z00zz__gunza7ipza7,
		BgL_bgl_string2857za700za7za7_2974za7, "step", 4);
	      DEFINE_STRING(BGl_string2939z00zz__gunza7ipza7,
		BgL_bgl_string2939za700za7za7_2975za7, "__gunzip", 8);
	      DEFINE_STRING(BGl_string2858z00zz__gunza7ipza7,
		BgL_bgl_string2858za700za7za7_2976za7, "inflate", 7);
	      DEFINE_STRING(BGl_string2859z00zz__gunza7ipza7,
		BgL_bgl_string2859za700za7za7_2977za7, "Illegal state", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_gunza7ipzd2parsezd2headerzd2envz75zz__gunza7ipza7,
		BgL_bgl_za762gunza7a7ipza7d2pa2978za7,
		BGl_z62gunza7ipzd2parsezd2headerzc5zz__gunza7ipza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2933z00zz__gunza7ipza7,
		BgL_bgl_za762za7c3za704anonymo2979za7,
		BGl_z62zc3z04anonymousza31977ze3ze5zz__gunza7ipza7, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2934z00zz__gunza7ipza7,
		BgL_bgl_za762lambda1975za7622980z00, BGl_z62lambda1975z62zz__gunza7ipza7,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2935z00zz__gunza7ipza7,
		BgL_bgl_za762lambda1973za7622981z00, BGl_z62lambda1973z62zz__gunza7ipza7,
		0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2860z00zz__gunza7ipza7,
		BgL_bgl_string2860za700za7za7_2982za7, "unknown inflate type `~A'", 25);
	      DEFINE_STRING(BGl_string2869z00zz__gunza7ipza7,
		BgL_bgl_string2869za700za7za7_2983za7, "error in compressed data `~a'", 29);
	      DEFINE_STRING(BGl_string2870z00zz__gunza7ipza7,
		BgL_bgl_string2870za700za7za7_2984za7, "inflate-entry", 13);
	      DEFINE_STRING(BGl_string2871z00zz__gunza7ipza7,
		BgL_bgl_string2871za700za7za7_2985za7, "bad lengths `~a'", 16);
	      DEFINE_STRING(BGl_string2877z00zz__gunza7ipza7,
		BgL_bgl_string2877za700za7za7_2986za7, "incomplete code set", 19);
	      DEFINE_STRING(BGl_string2878z00zz__gunza7ipza7,
		BgL_bgl_string2878za700za7za7_2987za7, "bad hop `~a'", 12);
	      DEFINE_STRING(BGl_string2879z00zz__gunza7ipza7,
		BgL_bgl_string2879za700za7za7_2988za7, "bad input: more codes than bits",
		31);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2inflatezd2filezd2envz00zz__gunza7ipza7,
		BgL_bgl__openza7d2inputza7d22989z00, opt_generic_entry,
		BGl__openzd2inputzd2inflatezd2filezd2zz__gunza7ipza7, BFALSE, -1);
	      DEFINE_STRING(BGl_string2880z00zz__gunza7ipza7,
		BgL_bgl_string2880za700za7za7_2990za7, "bad input: mode codes than bits",
		31);
	      DEFINE_STRING(BGl_string2881z00zz__gunza7ipza7,
		BgL_bgl_string2881za700za7za7_2991za7, "incomplete table", 16);
	      DEFINE_STRING(BGl_string2882z00zz__gunza7ipza7,
		BgL_bgl_string2882za700za7za7_2992za7, "premature end of file", 21);
	      DEFINE_STRING(BGl_string2883z00zz__gunza7ipza7,
		BgL_bgl_string2883za700za7za7_2993za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string2884z00zz__gunza7ipza7,
		BgL_bgl_string2884za700za7za7_2994za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string2885z00zz__gunza7ipza7,
		BgL_bgl_string2885za700za7za7_2995za7, "bad inflate code `~a'", 21);
	      DEFINE_STRING(BGl_string2886z00zz__gunza7ipza7,
		BgL_bgl_string2886za700za7za7_2996za7, "bad header `~a'", 15);
	      DEFINE_STRING(BGl_string2887z00zz__gunza7ipza7,
		BgL_bgl_string2887za700za7za7_2997za7, "gunzip", 6);
	      DEFINE_STRING(BGl_string2888z00zz__gunza7ipza7,
		BgL_bgl_string2888za700za7za7_2998za7, "unknown compression type `~a'", 29);
	      DEFINE_STRING(BGl_string2889z00zz__gunza7ipza7,
		BgL_bgl_string2889za700za7za7_2999za7, "cannot unzip encrypted file", 27);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_portzd2ze3inflatezd2portzd2envz31zz__gunza7ipza7,
		BgL_bgl__portza7d2za7e3infla3000z00, opt_generic_entry,
		BGl__portzd2ze3inflatezd2portze3zz__gunza7ipza7, BFALSE, -1);
	      DEFINE_STRING(BGl_string2890z00zz__gunza7ipza7,
		BgL_bgl_string2890za700za7za7_3001za7, "cannot handle multi-part files",
		30);
	      DEFINE_STRING(BGl_string2891z00zz__gunza7ipza7,
		BgL_bgl_string2891za700za7za7_3002za7,
		"/tmp/4.4a/runtime/Unsafe/gunzip.scm", 35);
	      DEFINE_STRING(BGl_string2892z00zz__gunza7ipza7,
		BgL_bgl_string2892za700za7za7_3003za7, "&gunzip-sendchars", 17);
	      DEFINE_STRING(BGl_string2893z00zz__gunza7ipza7,
		BgL_bgl_string2893za700za7za7_3004za7, "input-port", 10);
	      DEFINE_STRING(BGl_string2894z00zz__gunza7ipza7,
		BgL_bgl_string2894za700za7za7_3005za7, "output-port", 11);
	      DEFINE_STRING(BGl_string2895z00zz__gunza7ipza7,
		BgL_bgl_string2895za700za7za7_3006za7, "&inflate-sendchars", 18);
	      DEFINE_STRING(BGl_string2897z00zz__gunza7ipza7,
		BgL_bgl_string2897za700za7za7_3007za7, "eof", 3);
	      DEFINE_STRING(BGl_string2899z00zz__gunza7ipza7,
		BgL_bgl_string2899za700za7za7_3008za7, "resume", 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_checkzd2adler32zd2envz00zz__gunza7ipza7,
		BgL_bgl_za762checkza7d2adler3009z00,
		BGl_z62checkzd2adler32zb0zz__gunza7ipza7, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2gza7ipzd2filezd2envza7zz__gunza7ipza7,
		BgL_bgl__openza7d2inputza7d23010z00, opt_generic_entry,
		BGl__openzd2inputzd2gza7ipzd2filez75zz__gunza7ipza7, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_inflatezd2sendcharszd2envz00zz__gunza7ipza7,
		BgL_bgl_za762inflateza7d2sen3011z00,
		BGl_z62inflatezd2sendcharszb0zz__gunza7ipza7, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_vector2872z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_vector2874z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_vector2875z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_symbol2900z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_symbol2902z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_symbol2919z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_symbol2921z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_symbol2925z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_symbol2929z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_symbol2931z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_symbol2850z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_symbol2852z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_symbol2854z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_symbol2936z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_symbol2856z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_symbol2938z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_symbol2896z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_symbol2898z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_huftz00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_list2862z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_list2864z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_list2866z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_list2868z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_list2873z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_list2876z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_vector2861z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_vector2863z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_vector2865z00zz__gunza7ipza7));
		     ADD_ROOT((void *) (&BGl_vector2867z00zz__gunza7ipza7));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__gunza7ipza7(long
		BgL_checksumz00_5350, char *BgL_fromz00_5351)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__gunza7ipza7))
				{
					BGl_requirezd2initializa7ationz75zz__gunza7ipza7 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__gunza7ipza7();
					BGl_cnstzd2initzd2zz__gunza7ipza7();
					BGl_importedzd2moduleszd2initz00zz__gunza7ipza7();
					BGl_objectzd2initzd2zz__gunza7ipza7();
					return BGl_toplevelzd2initzd2zz__gunza7ipza7();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__gunza7ipza7()
	{
		{	/* Unsafe/gunzip.scm 25 */
			BGl_symbol2850z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string2851z00zz__gunza7ipza7);
			BGl_symbol2852z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string2853z00zz__gunza7ipza7);
			BGl_symbol2854z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string2855z00zz__gunza7ipza7);
			BGl_symbol2856z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string2857z00zz__gunza7ipza7);
			BGl_list2862z00zz__gunza7ipza7 =
				MAKE_YOUNG_PAIR(BINT(((long) 3)),
				MAKE_YOUNG_PAIR(BINT(((long) 4)),
					MAKE_YOUNG_PAIR(BINT(((long) 5)),
						MAKE_YOUNG_PAIR(BINT(((long) 6)),
							MAKE_YOUNG_PAIR(BINT(((long) 7)),
								MAKE_YOUNG_PAIR(BINT(((long) 8)),
									MAKE_YOUNG_PAIR(BINT(((long) 9)),
										MAKE_YOUNG_PAIR(BINT(((long) 10)),
											MAKE_YOUNG_PAIR(BINT(((long) 11)),
												MAKE_YOUNG_PAIR(BINT(((long) 13)),
													MAKE_YOUNG_PAIR(BINT(((long) 15)),
														MAKE_YOUNG_PAIR(BINT(((long) 17)),
															MAKE_YOUNG_PAIR(BINT(((long) 19)),
																MAKE_YOUNG_PAIR(BINT(((long) 23)),
																	MAKE_YOUNG_PAIR(BINT(((long) 27)),
																		MAKE_YOUNG_PAIR(BINT(((long) 31)),
																			MAKE_YOUNG_PAIR(BINT(((long) 35)),
																				MAKE_YOUNG_PAIR(BINT(((long) 43)),
																					MAKE_YOUNG_PAIR(BINT(((long) 51)),
																						MAKE_YOUNG_PAIR(BINT(((long) 59)),
																							MAKE_YOUNG_PAIR(BINT(((long) 67)),
																								MAKE_YOUNG_PAIR(BINT(((long)
																											83)),
																									MAKE_YOUNG_PAIR(BINT(((long)
																												99)),
																										MAKE_YOUNG_PAIR(BINT(((long)
																													115)),
																											MAKE_YOUNG_PAIR(BINT((
																														(long) 131)),
																												MAKE_YOUNG_PAIR(BINT((
																															(long) 163)),
																													MAKE_YOUNG_PAIR(BINT((
																																(long) 195)),
																														MAKE_YOUNG_PAIR(BINT
																															(((long) 227)),
																															MAKE_YOUNG_PAIR
																															(BINT(((long)
																																		258)),
																																MAKE_YOUNG_PAIR
																																(BINT(((long)
																																			0)),
																																	MAKE_YOUNG_PAIR
																																	(BINT(((long)
																																				0)),
																																		BNIL)))))))))))))))))))))))))))))));
			BGl_vector2861z00zz__gunza7ipza7 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_list2862z00zz__gunza7ipza7);
			BGl_list2864z00zz__gunza7ipza7 =
				MAKE_YOUNG_PAIR(BINT(((long) 0)), MAKE_YOUNG_PAIR(BINT(((long) 0)),
					MAKE_YOUNG_PAIR(BINT(((long) 0)), MAKE_YOUNG_PAIR(BINT(((long) 0)),
							MAKE_YOUNG_PAIR(BINT(((long) 0)),
								MAKE_YOUNG_PAIR(BINT(((long) 0)),
									MAKE_YOUNG_PAIR(BINT(((long) 0)),
										MAKE_YOUNG_PAIR(BINT(((long) 0)),
											MAKE_YOUNG_PAIR(BINT(((long) 1)),
												MAKE_YOUNG_PAIR(BINT(((long) 1)),
													MAKE_YOUNG_PAIR(BINT(((long) 1)),
														MAKE_YOUNG_PAIR(BINT(((long) 1)),
															MAKE_YOUNG_PAIR(BINT(((long) 2)),
																MAKE_YOUNG_PAIR(BINT(((long) 2)),
																	MAKE_YOUNG_PAIR(BINT(((long) 2)),
																		MAKE_YOUNG_PAIR(BINT(((long) 2)),
																			MAKE_YOUNG_PAIR(BINT(((long) 3)),
																				MAKE_YOUNG_PAIR(BINT(((long) 3)),
																					MAKE_YOUNG_PAIR(BINT(((long) 3)),
																						MAKE_YOUNG_PAIR(BINT(((long) 3)),
																							MAKE_YOUNG_PAIR(BINT(((long) 4)),
																								MAKE_YOUNG_PAIR(BINT(((long)
																											4)),
																									MAKE_YOUNG_PAIR(BINT(((long)
																												4)),
																										MAKE_YOUNG_PAIR(BINT(((long)
																													4)),
																											MAKE_YOUNG_PAIR(BINT((
																														(long) 5)),
																												MAKE_YOUNG_PAIR(BINT((
																															(long) 5)),
																													MAKE_YOUNG_PAIR(BINT((
																																(long) 5)),
																														MAKE_YOUNG_PAIR(BINT
																															(((long) 5)),
																															MAKE_YOUNG_PAIR
																															(BINT(((long) 0)),
																																MAKE_YOUNG_PAIR
																																(BINT(((long)
																																			99)),
																																	MAKE_YOUNG_PAIR
																																	(BINT(((long)
																																				99)),
																																		BNIL)))))))))))))))))))))))))))))));
			BGl_vector2863z00zz__gunza7ipza7 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_list2864z00zz__gunza7ipza7);
			BGl_list2866z00zz__gunza7ipza7 =
				MAKE_YOUNG_PAIR(BINT(((long) 1)), MAKE_YOUNG_PAIR(BINT(((long) 2)),
					MAKE_YOUNG_PAIR(BINT(((long) 3)), MAKE_YOUNG_PAIR(BINT(((long) 4)),
							MAKE_YOUNG_PAIR(BINT(((long) 5)),
								MAKE_YOUNG_PAIR(BINT(((long) 7)),
									MAKE_YOUNG_PAIR(BINT(((long) 9)),
										MAKE_YOUNG_PAIR(BINT(((long) 13)),
											MAKE_YOUNG_PAIR(BINT(((long) 17)),
												MAKE_YOUNG_PAIR(BINT(((long) 25)),
													MAKE_YOUNG_PAIR(BINT(((long) 33)),
														MAKE_YOUNG_PAIR(BINT(((long) 49)),
															MAKE_YOUNG_PAIR(BINT(((long) 65)),
																MAKE_YOUNG_PAIR(BINT(((long) 97)),
																	MAKE_YOUNG_PAIR(BINT(((long) 129)),
																		MAKE_YOUNG_PAIR(BINT(((long) 193)),
																			MAKE_YOUNG_PAIR(BINT(((long) 257)),
																				MAKE_YOUNG_PAIR(BINT(((long) 385)),
																					MAKE_YOUNG_PAIR(BINT(((long) 513)),
																						MAKE_YOUNG_PAIR(BINT(((long) 769)),
																							MAKE_YOUNG_PAIR(BINT(((long)
																										1025)),
																								MAKE_YOUNG_PAIR(BINT(((long)
																											1537)),
																									MAKE_YOUNG_PAIR(BINT(((long)
																												2049)),
																										MAKE_YOUNG_PAIR(BINT(((long)
																													3073)),
																											MAKE_YOUNG_PAIR(BINT((
																														(long) 4097)),
																												MAKE_YOUNG_PAIR(BINT((
																															(long) 6145)),
																													MAKE_YOUNG_PAIR(BINT((
																																(long) 8193)),
																														MAKE_YOUNG_PAIR(BINT
																															(((long) 12289)),
																															MAKE_YOUNG_PAIR
																															(BINT(((long)
																																		16385)),
																																MAKE_YOUNG_PAIR
																																(BINT(((long)
																																			24577)),
																																	BNIL))))))))))))))))))))))))))))));
			BGl_vector2865z00zz__gunza7ipza7 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_list2866z00zz__gunza7ipza7);
			BGl_list2868z00zz__gunza7ipza7 =
				MAKE_YOUNG_PAIR(BINT(((long) 0)), MAKE_YOUNG_PAIR(BINT(((long) 0)),
					MAKE_YOUNG_PAIR(BINT(((long) 0)), MAKE_YOUNG_PAIR(BINT(((long) 0)),
							MAKE_YOUNG_PAIR(BINT(((long) 1)),
								MAKE_YOUNG_PAIR(BINT(((long) 1)),
									MAKE_YOUNG_PAIR(BINT(((long) 2)),
										MAKE_YOUNG_PAIR(BINT(((long) 2)),
											MAKE_YOUNG_PAIR(BINT(((long) 3)),
												MAKE_YOUNG_PAIR(BINT(((long) 3)),
													MAKE_YOUNG_PAIR(BINT(((long) 4)),
														MAKE_YOUNG_PAIR(BINT(((long) 4)),
															MAKE_YOUNG_PAIR(BINT(((long) 5)),
																MAKE_YOUNG_PAIR(BINT(((long) 5)),
																	MAKE_YOUNG_PAIR(BINT(((long) 6)),
																		MAKE_YOUNG_PAIR(BINT(((long) 6)),
																			MAKE_YOUNG_PAIR(BINT(((long) 7)),
																				MAKE_YOUNG_PAIR(BINT(((long) 7)),
																					MAKE_YOUNG_PAIR(BINT(((long) 8)),
																						MAKE_YOUNG_PAIR(BINT(((long) 8)),
																							MAKE_YOUNG_PAIR(BINT(((long) 9)),
																								MAKE_YOUNG_PAIR(BINT(((long)
																											9)),
																									MAKE_YOUNG_PAIR(BINT(((long)
																												10)),
																										MAKE_YOUNG_PAIR(BINT(((long)
																													10)),
																											MAKE_YOUNG_PAIR(BINT((
																														(long) 11)),
																												MAKE_YOUNG_PAIR(BINT((
																															(long) 11)),
																													MAKE_YOUNG_PAIR(BINT((
																																(long) 12)),
																														MAKE_YOUNG_PAIR(BINT
																															(((long) 12)),
																															MAKE_YOUNG_PAIR
																															(BINT(((long)
																																		13)),
																																MAKE_YOUNG_PAIR
																																(BINT(((long)
																																			13)),
																																	BNIL))))))))))))))))))))))))))))));
			BGl_vector2867z00zz__gunza7ipza7 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_list2868z00zz__gunza7ipza7);
			BGl_list2873z00zz__gunza7ipza7 =
				MAKE_YOUNG_PAIR(BINT(((long) 16)), MAKE_YOUNG_PAIR(BINT(((long) 17)),
					MAKE_YOUNG_PAIR(BINT(((long) 18)), MAKE_YOUNG_PAIR(BINT(((long) 0)),
							MAKE_YOUNG_PAIR(BINT(((long) 8)),
								MAKE_YOUNG_PAIR(BINT(((long) 7)),
									MAKE_YOUNG_PAIR(BINT(((long) 9)),
										MAKE_YOUNG_PAIR(BINT(((long) 6)),
											MAKE_YOUNG_PAIR(BINT(((long) 10)),
												MAKE_YOUNG_PAIR(BINT(((long) 5)),
													MAKE_YOUNG_PAIR(BINT(((long) 11)),
														MAKE_YOUNG_PAIR(BINT(((long) 4)),
															MAKE_YOUNG_PAIR(BINT(((long) 12)),
																MAKE_YOUNG_PAIR(BINT(((long) 3)),
																	MAKE_YOUNG_PAIR(BINT(((long) 13)),
																		MAKE_YOUNG_PAIR(BINT(((long) 2)),
																			MAKE_YOUNG_PAIR(BINT(((long) 14)),
																				MAKE_YOUNG_PAIR(BINT(((long) 1)),
																					MAKE_YOUNG_PAIR(BINT(((long) 15)),
																						BNIL)))))))))))))))))));
			BGl_vector2872z00zz__gunza7ipza7 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_list2873z00zz__gunza7ipza7);
			BGl_vector2874z00zz__gunza7ipza7 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BNIL);
			BGl_list2876z00zz__gunza7ipza7 =
				MAKE_YOUNG_PAIR(BINT(((long) 0)), MAKE_YOUNG_PAIR(BINT(((long) 1)),
					MAKE_YOUNG_PAIR(BINT(((long) 3)), MAKE_YOUNG_PAIR(BINT(((long) 7)),
							MAKE_YOUNG_PAIR(BINT(((long) 15)),
								MAKE_YOUNG_PAIR(BINT(((long) 31)),
									MAKE_YOUNG_PAIR(BINT(((long) 63)),
										MAKE_YOUNG_PAIR(BINT(((long) 127)),
											MAKE_YOUNG_PAIR(BINT(((long) 255)),
												MAKE_YOUNG_PAIR(BINT(((long) 511)),
													MAKE_YOUNG_PAIR(BINT(((long) 1023)),
														MAKE_YOUNG_PAIR(BINT(((long) 2047)),
															MAKE_YOUNG_PAIR(BINT(((long) 4095)),
																MAKE_YOUNG_PAIR(BINT(((long) 8191)),
																	MAKE_YOUNG_PAIR(BINT(((long) 16383)),
																		MAKE_YOUNG_PAIR(BINT(((long) 32767)),
																			MAKE_YOUNG_PAIR(BINT(((long) 65535)),
																				BNIL)))))))))))))))));
			BGl_vector2875z00zz__gunza7ipza7 =
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_list2876z00zz__gunza7ipza7);
			BGl_symbol2896z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string2897z00zz__gunza7ipza7);
			BGl_symbol2898z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string2899z00zz__gunza7ipza7);
			BGl_symbol2900z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string2901z00zz__gunza7ipza7);
			BGl_symbol2902z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string2903z00zz__gunza7ipza7);
			BGl_symbol2919z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string2920z00zz__gunza7ipza7);
			BGl_symbol2921z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string2922z00zz__gunza7ipza7);
			BGl_symbol2925z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string2926z00zz__gunza7ipza7);
			BGl_symbol2929z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string2930z00zz__gunza7ipza7);
			BGl_symbol2931z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string2932z00zz__gunza7ipza7);
			BGl_symbol2936z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string2937z00zz__gunza7ipza7);
			return (BGl_symbol2938z00zz__gunza7ipza7 =
				bstring_to_symbol(BGl_string2939z00zz__gunza7ipza7), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__gunza7ipza7()
	{
		{	/* Unsafe/gunzip.scm 25 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__gunza7ipza7()
	{
		{	/* Unsafe/gunzip.scm 25 */
			return BUNSPEC;
		}

	}



/* build-vector */
	obj_t BGl_buildzd2vectorzd2zz__gunza7ipza7(long BgL_nz00_5, obj_t BgL_pz00_6)
	{
		{	/* Unsafe/gunzip.scm 266 */
			{	/* Unsafe/gunzip.scm 267 */
				obj_t BgL_vz00_1205;

				BgL_vz00_1205 = make_vector(BgL_nz00_5, BUNSPEC);
				{
					long BgL_i1071z00_2827;

					BgL_i1071z00_2827 = ((long) 0);
				BgL_loop1072z00_2826:
					if ((BgL_i1071z00_2827 < BgL_nz00_5))
						{	/* Unsafe/gunzip.scm 268 */
							{	/* Unsafe/gunzip.scm 268 */
								BgL_huftz00_bglt BgL_arg1391z00_2833;

								BgL_arg1391z00_2833 =
									BGl_z62zc3z04anonymousza31635ze3ze5zz__gunza7ipza7(BgL_pz00_6,
									BgL_i1071z00_2827);
								VECTOR_SET(BgL_vz00_1205, BgL_i1071z00_2827,
									((obj_t) BgL_arg1391z00_2833));
							}
							{
								long BgL_i1071z00_5708;

								BgL_i1071z00_5708 = (BgL_i1071z00_2827 + ((long) 1));
								BgL_i1071z00_2827 = BgL_i1071z00_5708;
								goto BgL_loop1072z00_2826;
							}
						}
					else
						{	/* Unsafe/gunzip.scm 268 */
							((bool_t) 0);
						}
				}
				return BgL_vz00_1205;
			}
		}

	}



/* subvector */
	obj_t BGl_subvectorz00zz__gunza7ipza7(obj_t BgL_vz00_7, long BgL_offsetz00_8)
	{
		{	/* Unsafe/gunzip.scm 274 */
			{	/* Unsafe/gunzip.scm 275 */
				long BgL_lenz00_1215;

				BgL_lenz00_1215 = (VECTOR_LENGTH(BgL_vz00_7) - BgL_offsetz00_8);
				{	/* Unsafe/gunzip.scm 275 */
					obj_t BgL_newz00_1216;

					BgL_newz00_1216 = make_vector(BgL_lenz00_1215, BUNSPEC);
					{	/* Unsafe/gunzip.scm 276 */

						{
							long BgL_i1073z00_2857;

							BgL_i1073z00_2857 = ((long) 0);
						BgL_loop1074z00_2856:
							if ((BgL_i1073z00_2857 < BgL_lenz00_1215))
								{	/* Unsafe/gunzip.scm 277 */
									VECTOR_SET(BgL_newz00_1216, BgL_i1073z00_2857,
										VECTOR_REF(BgL_vz00_7,
											(BgL_i1073z00_2857 + BgL_offsetz00_8)));
									{
										long BgL_i1073z00_5718;

										BgL_i1073z00_5718 = (BgL_i1073z00_2857 + ((long) 1));
										BgL_i1073z00_2857 = BgL_i1073z00_5718;
										goto BgL_loop1074z00_2856;
									}
								}
							else
								{	/* Unsafe/gunzip.scm 277 */
									((bool_t) 0);
								}
						}
						return BgL_newz00_1216;
					}
				}
			}
		}

	}



/* inflate-entry */
	obj_t BGl_inflatezd2entryzd2zz__gunza7ipza7(obj_t BgL_inputzd2portzd2_12,
		obj_t BgL_slidez00_13)
	{
		{	/* Unsafe/gunzip.scm 336 */
			{	/* Unsafe/gunzip.scm 336 */
				obj_t BgL_wpz00_5104;
				obj_t BgL_bbz00_5105;
				obj_t BgL_bkz00_5106;

				BgL_wpz00_5104 = MAKE_CELL(BINT(((long) 0)));
				BgL_bbz00_5105 = MAKE_CELL(BINT(((long) 0)));
				BgL_bkz00_5106 = MAKE_CELL(BINT(((long) 0)));
				{	/* Unsafe/gunzip.scm 340 */
					long BgL_wsiza7eza7_1240;

					BgL_wsiza7eza7_1240 = STRING_LENGTH(((obj_t) BgL_slidez00_13));
					{	/* Unsafe/gunzip.scm 350 */
						obj_t BgL_bufferz00_1241;

						{	/* Ieee/string.scm 168 */

							BgL_bufferz00_1241 =
								make_string(((long) 256), ((unsigned char) ' '));
						}
						{	/* Unsafe/gunzip.scm 888 */
							obj_t BgL_auxz00_5107;

							BgL_auxz00_5107 = BINT(((long) 0));
							CELL_SET(BgL_wpz00_5104, BgL_auxz00_5107);
						}
						{	/* Unsafe/gunzip.scm 889 */
							obj_t BgL_auxz00_5108;

							BgL_auxz00_5108 = BINT(((long) 0));
							CELL_SET(BgL_bkz00_5106, BgL_auxz00_5108);
						}
						{	/* Unsafe/gunzip.scm 890 */
							obj_t BgL_auxz00_5109;

							BgL_auxz00_5109 = BINT(((long) 0));
							CELL_SET(BgL_bbz00_5105, BgL_auxz00_5109);
						}
						return
							BGl_z62loopz62zz__gunza7ipza7(BgL_inputzd2portzd2_12,
							BgL_bkz00_5106, BgL_bbz00_5105, BgL_slidez00_13, BgL_wpz00_5104,
							BgL_wsiza7eza7_1240, BINT(((long) 0)));
		}}}}

	}



/* &laap */
	obj_t BGl_z62laapz62zz__gunza7ipza7(long BgL_huftsz00_4907,
		obj_t BgL_hz00_4906, obj_t BgL_wpz00_4905, obj_t BgL_inputzd2portzd2_4904,
		obj_t BgL_bkz00_4903, obj_t BgL_bbz00_4902, obj_t BgL_slidez00_4901,
		long BgL_wsiza7eza7_4900, obj_t BgL_statez00_1261, obj_t BgL_ez00_1262,
		obj_t BgL_rz00_1263)
	{
		{	/* Unsafe/gunzip.scm 897 */
			if ((BgL_statez00_1261 == BGl_symbol2850z00zz__gunza7ipza7))
				{	/* Unsafe/gunzip.scm 902 */
					bool_t BgL_test3016z00_5733;

					if (CBOOL(BgL_rz00_1263))
						{	/* Unsafe/gunzip.scm 902 */
							BgL_test3016z00_5733 = ((long) CINT(BgL_ez00_1262) == ((long) 0));
						}
					else
						{	/* Unsafe/gunzip.scm 902 */
							BgL_test3016z00_5733 = ((bool_t) 0);
						}
					if (BgL_test3016z00_5733)
						{	/* Unsafe/gunzip.scm 903 */
							obj_t BgL_arg1410z00_1268;

							if ((BgL_huftsz00_4907 > (long) CINT(BgL_hz00_4906)))
								{	/* Unsafe/gunzip.scm 903 */
									BgL_arg1410z00_1268 = BINT(BgL_huftsz00_4907);
								}
							else
								{	/* Unsafe/gunzip.scm 903 */
									BgL_arg1410z00_1268 = BgL_hz00_4906;
								}
							return
								BGl_z62loopz62zz__gunza7ipza7(BgL_inputzd2portzd2_4904,
								BgL_bkz00_4903, BgL_bbz00_4902, BgL_slidez00_4901,
								BgL_wpz00_4905, BgL_wsiza7eza7_4900, BgL_arg1410z00_1268);
						}
					else
						{	/* Unsafe/gunzip.scm 907 */
							obj_t BgL_val0_1245z00_1270;
							obj_t BgL_val1_1246z00_1271;

							BgL_val0_1245z00_1270 = BGl_symbol2852z00zz__gunza7ipza7;
							BgL_val1_1246z00_1271 = CELL_REF(BgL_wpz00_4905);
							{	/* Unsafe/gunzip.scm 907 */
								int BgL_res2619z00_4041;

								{	/* Unsafe/gunzip.scm 907 */
									int BgL_tmpz00_5743;

									BgL_tmpz00_5743 = (int) (((long) 3));
									BgL_res2619z00_4041 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_5743);
								} BgL_res2619z00_4041;
							}
							{	/* Unsafe/gunzip.scm 907 */
								int BgL_tmpz00_5746;

								BgL_tmpz00_5746 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_5746, BgL_val1_1246z00_1271);
							}
							{	/* Unsafe/gunzip.scm 907 */
								int BgL_tmpz00_5749;

								BgL_tmpz00_5749 = (int) (((long) 2));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_5749, BUNSPEC);
							}
							return BgL_val0_1245z00_1270;
						}
				}
			else
				{	/* Unsafe/gunzip.scm 900 */
					if ((BgL_statez00_1261 == BGl_symbol2854z00zz__gunza7ipza7))
						{	/* Unsafe/gunzip.scm 909 */
							obj_t BgL_val0_1248z00_1274;

							BgL_val0_1248z00_1274 = BGl_symbol2856z00zz__gunza7ipza7;
							{	/* Unsafe/gunzip.scm 912 */
								obj_t BgL_zc3z04anonymousza31413ze3z87_4898;

								BgL_zc3z04anonymousza31413ze3z87_4898 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31413ze3ze5zz__gunza7ipza7,
									(int) (((long) 0)), (int) (((long) 9)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31413ze3z87_4898,
									(int) (((long) 0)), BINT(BgL_wsiza7eza7_4900));
								PROCEDURE_SET(BgL_zc3z04anonymousza31413ze3z87_4898,
									(int) (((long) 1)), BgL_slidez00_4901);
								PROCEDURE_SET(BgL_zc3z04anonymousza31413ze3z87_4898,
									(int) (((long) 2)), ((obj_t) BgL_bbz00_4902));
								PROCEDURE_SET(BgL_zc3z04anonymousza31413ze3z87_4898,
									(int) (((long) 3)), ((obj_t) BgL_bkz00_4903));
								PROCEDURE_SET(BgL_zc3z04anonymousza31413ze3z87_4898,
									(int) (((long) 4)), BgL_inputzd2portzd2_4904);
								PROCEDURE_SET(BgL_zc3z04anonymousza31413ze3z87_4898,
									(int) (((long) 5)), ((obj_t) BgL_wpz00_4905));
								PROCEDURE_SET(BgL_zc3z04anonymousza31413ze3z87_4898,
									(int) (((long) 6)), BgL_hz00_4906);
								PROCEDURE_SET(BgL_zc3z04anonymousza31413ze3z87_4898,
									(int) (((long) 7)), BINT(BgL_huftsz00_4907));
								PROCEDURE_SET(BgL_zc3z04anonymousza31413ze3z87_4898,
									(int) (((long) 8)), BgL_rz00_1263);
								{	/* Unsafe/gunzip.scm 909 */
									int BgL_res2621z00_4044;

									{	/* Unsafe/gunzip.scm 909 */
										int BgL_tmpz00_5780;

										BgL_tmpz00_5780 = (int) (((long) 3));
										BgL_res2621z00_4044 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_5780);
									} BgL_res2621z00_4044;
								}
								{	/* Unsafe/gunzip.scm 909 */
									int BgL_tmpz00_5783;

									BgL_tmpz00_5783 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_5783, BgL_ez00_1262);
								}
								{	/* Unsafe/gunzip.scm 909 */
									int BgL_tmpz00_5786;

									BgL_tmpz00_5786 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_5786,
										BgL_zc3z04anonymousza31413ze3z87_4898);
								}
								return BgL_val0_1248z00_1274;
							}
						}
					else
						{	/* Unsafe/gunzip.scm 328 */
							BgL_z62iozd2parsezd2errorz62_bglt BgL_arg1401z00_4045;

							{	/* Unsafe/gunzip.scm 328 */
								BgL_z62iozd2parsezd2errorz62_bglt BgL_new1076z00_4046;

								{	/* Unsafe/gunzip.scm 328 */
									BgL_z62iozd2parsezd2errorz62_bglt BgL_new1075z00_4047;

									BgL_new1075z00_4047 =
										((BgL_z62iozd2parsezd2errorz62_bglt)
										BOBJECT(GC_MALLOC(sizeof(struct
													BgL_z62iozd2parsezd2errorz62_bgl))));
									{	/* Unsafe/gunzip.scm 328 */
										long BgL_arg1405z00_4048;

										{	/* Unsafe/gunzip.scm 328 */
											long BgL_res2316z00_4049;

											BgL_res2316z00_4049 =
												BGL_CLASS_INDEX
												(BGl_z62iozd2parsezd2errorz62zz__objectz00);
											BgL_arg1405z00_4048 = BgL_res2316z00_4049;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1075z00_4047),
											BgL_arg1405z00_4048);
									}
									BgL_new1076z00_4046 = BgL_new1075z00_4047;
								}
								((((BgL_z62exceptionz62_bglt) COBJECT(
												((BgL_z62exceptionz62_bglt) BgL_new1076z00_4046)))->
										BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
								((((BgL_z62exceptionz62_bglt)
											COBJECT(((BgL_z62exceptionz62_bglt)
													BgL_new1076z00_4046)))->BgL_locationz00) =
									((obj_t) BFALSE), BUNSPEC);
								{
									obj_t BgL_auxz00_5797;

									{	/* Unsafe/gunzip.scm 328 */
										obj_t BgL_arg1402z00_4053;

										{	/* Unsafe/gunzip.scm 328 */
											obj_t BgL_arg1404z00_4054;

											{	/* Unsafe/gunzip.scm 328 */
												obj_t BgL_res2317z00_4055;

												{	/* Unsafe/gunzip.scm 328 */
													obj_t BgL_classz00_4056;

													BgL_classz00_4056 =
														BGl_z62iozd2parsezd2errorz62zz__objectz00;
													BgL_res2317z00_4055 =
														BGL_CLASS_ALL_FIELDS(BgL_classz00_4056);
												}
												BgL_arg1404z00_4054 = BgL_res2317z00_4055;
											}
											BgL_arg1402z00_4053 =
												VECTOR_REF(BgL_arg1404z00_4054, ((long) 2));
										}
										BgL_auxz00_5797 =
											BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
											(BgL_arg1402z00_4053);
									}
									((((BgL_z62exceptionz62_bglt) COBJECT(
													((BgL_z62exceptionz62_bglt) BgL_new1076z00_4046)))->
											BgL_stackz00) = ((obj_t) BgL_auxz00_5797), BUNSPEC);
								}
								((((BgL_z62errorz62_bglt) COBJECT(
												((BgL_z62errorz62_bglt) BgL_new1076z00_4046)))->
										BgL_procz00) =
									((obj_t) BGl_string2858z00zz__gunza7ipza7), BUNSPEC);
								((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
													BgL_new1076z00_4046)))->BgL_msgz00) =
									((obj_t) BGl_string2859z00zz__gunza7ipza7), BUNSPEC);
								((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
													BgL_new1076z00_4046)))->BgL_objz00) =
									((obj_t) BgL_statez00_1261), BUNSPEC);
								BgL_arg1401z00_4045 = BgL_new1076z00_4046;
							}
							return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1401z00_4045));
						}
				}
		}

	}



/* &loop */
	obj_t BGl_z62loopz62zz__gunza7ipza7(obj_t BgL_inputzd2portzd2_4913,
		obj_t BgL_bkz00_4912, obj_t BgL_bbz00_4911, obj_t BgL_slidez00_4910,
		obj_t BgL_wpz00_4909, long BgL_wsiza7eza7_4908, obj_t BgL_hz00_1254)
	{
		{	/* Unsafe/gunzip.scm 893 */
			{
				obj_t BgL_tlz00_1500;
				obj_t BgL_tdz00_1501;
				obj_t BgL_blz00_1502;
				obj_t BgL_bdz00_1503;

				{	/* Unsafe/gunzip.scm 895 */
					obj_t BgL_statez00_1257;

					{	/* Unsafe/gunzip.scm 860 */
						long BgL_ez00_1285;

						{	/* Unsafe/gunzip.scm 860 */
							obj_t BgL_arg1424z00_1316;

							BGl_z62NEEDBITSz62zz__gunza7ipza7(BgL_bbz00_4911, BgL_bkz00_4912,
								BgL_inputzd2portzd2_4913, BINT(((long) 1)));
							{	/* Unsafe/gunzip.scm 375 */
								obj_t BgL_rz00_3988;

								BgL_rz00_3988 = CELL_REF(BgL_bbz00_4911);
								{	/* Unsafe/gunzip.scm 370 */
									obj_t BgL_auxz00_4914;

									{	/* Unsafe/gunzip.scm 370 */
										long BgL_xz00_3989;

										BgL_xz00_3989 = (long) CINT(CELL_REF(BgL_bbz00_4911));
										BgL_auxz00_4914 =
											BINT((BgL_xz00_3989 >> (int) (((long) 1))));
									}
									CELL_SET(BgL_bbz00_4911, BgL_auxz00_4914);
								}
								{	/* Unsafe/gunzip.scm 371 */
									obj_t BgL_auxz00_4915;

									BgL_auxz00_4915 =
										SUBFX(CELL_REF(BgL_bkz00_4912), BINT(((long) 1)));
									CELL_SET(BgL_bkz00_4912, BgL_auxz00_4915);
								}
								BgL_arg1424z00_1316 = BgL_rz00_3988;
							}
							BgL_ez00_1285 = ((long) CINT(BgL_arg1424z00_1316) & ((long) 1));
						}
						{	/* Unsafe/gunzip.scm 862 */
							long BgL_tz00_1286;

							{	/* Unsafe/gunzip.scm 862 */
								obj_t BgL_arg1422z00_1315;

								BGl_z62NEEDBITSz62zz__gunza7ipza7(BgL_bbz00_4911,
									BgL_bkz00_4912, BgL_inputzd2portzd2_4913, BINT(((long) 2)));
								{	/* Unsafe/gunzip.scm 375 */
									obj_t BgL_rz00_3995;

									BgL_rz00_3995 = CELL_REF(BgL_bbz00_4911);
									{	/* Unsafe/gunzip.scm 370 */
										obj_t BgL_auxz00_4916;

										{	/* Unsafe/gunzip.scm 370 */
											long BgL_xz00_3996;

											BgL_xz00_3996 = (long) CINT(CELL_REF(BgL_bbz00_4911));
											BgL_auxz00_4916 =
												BINT((BgL_xz00_3996 >> (int) (((long) 2))));
										}
										CELL_SET(BgL_bbz00_4911, BgL_auxz00_4916);
									}
									{	/* Unsafe/gunzip.scm 371 */
										obj_t BgL_auxz00_4917;

										BgL_auxz00_4917 =
											SUBFX(CELL_REF(BgL_bkz00_4912), BINT(((long) 2)));
										CELL_SET(BgL_bkz00_4912, BgL_auxz00_4917);
									}
									BgL_arg1422z00_1315 = BgL_rz00_3995;
								}
								BgL_tz00_1286 = ((long) CINT(BgL_arg1422z00_1315) & ((long) 3));
							}
							{	/* Unsafe/gunzip.scm 863 */
								obj_t BgL_statez00_1287;

								{

									switch (BgL_tz00_1286)
										{
										case ((long) 2):

											{	/* Unsafe/gunzip.scm 766 */
												struct bgl_cell BgL_box3020_5241z00;
												obj_t BgL_iz00_5241;
												obj_t BgL_lz00_1320;

												BgL_iz00_5241 =
													MAKE_CELL_STACK(BINT(((long) 0)),
													BgL_box3020_5241z00);
												BgL_lz00_1320 = BINT(((long) 0));
												{	/* Unsafe/gunzip.scm 766 */
													long BgL_nlz00_1321;

													{	/* Unsafe/gunzip.scm 766 */
														long BgL_arg1478z00_1416;

														{	/* Unsafe/gunzip.scm 766 */
															obj_t BgL_arg1479z00_1417;

															BGl_z62NEEDBITSz62zz__gunza7ipza7(BgL_bbz00_4911,
																BgL_bkz00_4912, BgL_inputzd2portzd2_4913,
																BINT(((long) 5)));
															{	/* Unsafe/gunzip.scm 375 */
																obj_t BgL_rz00_3796;

																BgL_rz00_3796 = CELL_REF(BgL_bbz00_4911);
																{	/* Unsafe/gunzip.scm 370 */
																	obj_t BgL_auxz00_4924;

																	{	/* Unsafe/gunzip.scm 370 */
																		long BgL_xz00_3797;

																		BgL_xz00_3797 =
																			(long) CINT(CELL_REF(BgL_bbz00_4911));
																		BgL_auxz00_4924 =
																			BINT(
																			(BgL_xz00_3797 >> (int) (((long) 5))));
																	}
																	CELL_SET(BgL_bbz00_4911, BgL_auxz00_4924);
																}
																{	/* Unsafe/gunzip.scm 371 */
																	obj_t BgL_auxz00_4925;

																	BgL_auxz00_4925 =
																		SUBFX(CELL_REF(BgL_bkz00_4912),
																		BINT(((long) 5)));
																	CELL_SET(BgL_bkz00_4912, BgL_auxz00_4925);
																}
																BgL_arg1479z00_1417 = BgL_rz00_3796;
															}
															BgL_arg1478z00_1416 =
																(
																(long) CINT(BgL_arg1479z00_1417) & ((long) 31));
														}
														BgL_nlz00_1321 =
															(((long) 257) + BgL_arg1478z00_1416);
													}
													{	/* Unsafe/gunzip.scm 767 */
														long BgL_ndz00_1322;

														{	/* Unsafe/gunzip.scm 767 */
															long BgL_arg1476z00_1414;

															{	/* Unsafe/gunzip.scm 767 */
																obj_t BgL_arg1477z00_1415;

																BGl_z62NEEDBITSz62zz__gunza7ipza7
																	(BgL_bbz00_4911, BgL_bkz00_4912,
																	BgL_inputzd2portzd2_4913, BINT(((long) 5)));
																{	/* Unsafe/gunzip.scm 375 */
																	obj_t BgL_rz00_3805;

																	BgL_rz00_3805 = CELL_REF(BgL_bbz00_4911);
																	{	/* Unsafe/gunzip.scm 370 */
																		obj_t BgL_auxz00_4926;

																		{	/* Unsafe/gunzip.scm 370 */
																			long BgL_xz00_3806;

																			BgL_xz00_3806 =
																				(long) CINT(CELL_REF(BgL_bbz00_4911));
																			BgL_auxz00_4926 =
																				BINT(
																				(BgL_xz00_3806 >> (int) (((long) 5))));
																		}
																		CELL_SET(BgL_bbz00_4911, BgL_auxz00_4926);
																	}
																	{	/* Unsafe/gunzip.scm 371 */
																		obj_t BgL_auxz00_4927;

																		BgL_auxz00_4927 =
																			SUBFX(CELL_REF(BgL_bkz00_4912),
																			BINT(((long) 5)));
																		CELL_SET(BgL_bkz00_4912, BgL_auxz00_4927);
																	}
																	BgL_arg1477z00_1415 = BgL_rz00_3805;
																}
																BgL_arg1476z00_1414 =
																	(
																	(long) CINT(BgL_arg1477z00_1415) & ((long)
																		31));
															}
															BgL_ndz00_1322 =
																(((long) 1) + BgL_arg1476z00_1414);
														}
														{	/* Unsafe/gunzip.scm 768 */
															long BgL_nbz00_1323;

															{	/* Unsafe/gunzip.scm 768 */
																long BgL_arg1474z00_1412;

																{	/* Unsafe/gunzip.scm 768 */
																	obj_t BgL_arg1475z00_1413;

																	BGl_z62NEEDBITSz62zz__gunza7ipza7
																		(BgL_bbz00_4911, BgL_bkz00_4912,
																		BgL_inputzd2portzd2_4913, BINT(((long) 4)));
																	{	/* Unsafe/gunzip.scm 375 */
																		obj_t BgL_rz00_3814;

																		BgL_rz00_3814 = CELL_REF(BgL_bbz00_4911);
																		{	/* Unsafe/gunzip.scm 370 */
																			obj_t BgL_auxz00_4928;

																			{	/* Unsafe/gunzip.scm 370 */
																				long BgL_xz00_3815;

																				BgL_xz00_3815 =
																					(long) CINT(CELL_REF(BgL_bbz00_4911));
																				BgL_auxz00_4928 =
																					BINT(
																					(BgL_xz00_3815 >>
																						(int) (((long) 4))));
																			}
																			CELL_SET(BgL_bbz00_4911, BgL_auxz00_4928);
																		}
																		{	/* Unsafe/gunzip.scm 371 */
																			obj_t BgL_auxz00_4929;

																			BgL_auxz00_4929 =
																				SUBFX(CELL_REF(BgL_bkz00_4912),
																				BINT(((long) 4)));
																			CELL_SET(BgL_bkz00_4912, BgL_auxz00_4929);
																		}
																		BgL_arg1475z00_1413 = BgL_rz00_3814;
																	}
																	BgL_arg1474z00_1412 =
																		(
																		(long) CINT(BgL_arg1475z00_1413) & ((long)
																			15));
																}
																BgL_nbz00_1323 =
																	(((long) 4) + BgL_arg1474z00_1412);
															}
															{	/* Unsafe/gunzip.scm 769 */
																obj_t BgL_llz00_1324;

																BgL_llz00_1324 =
																	make_vector(((long) 316), BUNSPEC);
																if ((BgL_nlz00_1321 > ((long) 286)))
																	{	/* Unsafe/gunzip.scm 775 */
																		obj_t BgL_arg1427z00_1326;

																		{	/* Unsafe/gunzip.scm 775 */
																			obj_t BgL_list1428z00_1327;

																			BgL_list1428z00_1327 =
																				MAKE_YOUNG_PAIR(BINT(BgL_nlz00_1321),
																				BNIL);
																			BgL_arg1427z00_1326 =
																				BGl_formatz00zz__r4_output_6_10_3z00
																				(BGl_string2871z00zz__gunza7ipza7,
																				BgL_list1428z00_1327);
																		}
																		{	/* Unsafe/gunzip.scm 328 */
																			BgL_z62iozd2parsezd2errorz62_bglt
																				BgL_arg1401z00_3826;
																			{	/* Unsafe/gunzip.scm 328 */
																				BgL_z62iozd2parsezd2errorz62_bglt
																					BgL_new1076z00_3827;
																				{	/* Unsafe/gunzip.scm 328 */
																					BgL_z62iozd2parsezd2errorz62_bglt
																						BgL_new1075z00_3828;
																					BgL_new1075z00_3828 =
																						((BgL_z62iozd2parsezd2errorz62_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_z62iozd2parsezd2errorz62_bgl))));
																					{	/* Unsafe/gunzip.scm 328 */
																						long BgL_arg1405z00_3829;

																						{	/* Unsafe/gunzip.scm 328 */
																							long BgL_res2316z00_3830;

																							BgL_res2316z00_3830 =
																								BGL_CLASS_INDEX
																								(BGl_z62iozd2parsezd2errorz62zz__objectz00);
																							BgL_arg1405z00_3829 =
																								BgL_res2316z00_3830;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1075z00_3828),
																							BgL_arg1405z00_3829);
																					}
																					BgL_new1076z00_3827 =
																						BgL_new1075z00_3828;
																				}
																				((((BgL_z62exceptionz62_bglt) COBJECT(
																								((BgL_z62exceptionz62_bglt)
																									BgL_new1076z00_3827)))->
																						BgL_fnamez00) =
																					((obj_t) BFALSE), BUNSPEC);
																				((((BgL_z62exceptionz62_bglt)
																							COBJECT((
																									(BgL_z62exceptionz62_bglt)
																									BgL_new1076z00_3827)))->
																						BgL_locationz00) =
																					((obj_t) BFALSE), BUNSPEC);
																				{
																					obj_t BgL_auxz00_5880;

																					{	/* Unsafe/gunzip.scm 328 */
																						obj_t BgL_arg1402z00_3834;

																						{	/* Unsafe/gunzip.scm 328 */
																							obj_t BgL_arg1404z00_3835;

																							{	/* Unsafe/gunzip.scm 328 */
																								obj_t BgL_res2317z00_3836;

																								{	/* Unsafe/gunzip.scm 328 */
																									obj_t BgL_classz00_3837;

																									BgL_classz00_3837 =
																										BGl_z62iozd2parsezd2errorz62zz__objectz00;
																									BgL_res2317z00_3836 =
																										BGL_CLASS_ALL_FIELDS
																										(BgL_classz00_3837);
																								}
																								BgL_arg1404z00_3835 =
																									BgL_res2317z00_3836;
																							}
																							BgL_arg1402z00_3834 =
																								VECTOR_REF(BgL_arg1404z00_3835,
																								((long) 2));
																						}
																						BgL_auxz00_5880 =
																							BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																							(BgL_arg1402z00_3834);
																					}
																					((((BgL_z62exceptionz62_bglt) COBJECT(
																									((BgL_z62exceptionz62_bglt)
																										BgL_new1076z00_3827)))->
																							BgL_stackz00) =
																						((obj_t) BgL_auxz00_5880), BUNSPEC);
																				}
																				((((BgL_z62errorz62_bglt) COBJECT(
																								((BgL_z62errorz62_bglt)
																									BgL_new1076z00_3827)))->
																						BgL_procz00) =
																					((obj_t)
																						BGl_string2858z00zz__gunza7ipza7),
																					BUNSPEC);
																				((((BgL_z62errorz62_bglt)
																							COBJECT(((BgL_z62errorz62_bglt)
																									BgL_new1076z00_3827)))->
																						BgL_msgz00) =
																					((obj_t) BgL_arg1427z00_1326),
																					BUNSPEC);
																				((((BgL_z62errorz62_bglt)
																							COBJECT(((BgL_z62errorz62_bglt)
																									BgL_new1076z00_3827)))->
																						BgL_objz00) =
																					((obj_t) BgL_inputzd2portzd2_4913),
																					BUNSPEC);
																				BgL_arg1401z00_3826 =
																					BgL_new1076z00_3827;
																			}
																			BgL_statez00_1287 =
																				BGl_raisez00zz__errorz00(
																				((obj_t) BgL_arg1401z00_3826));
																	}}
																else
																	{	/* Unsafe/gunzip.scm 774 */
																		if ((BgL_ndz00_1322 > ((long) 30)))
																			{	/* Unsafe/gunzip.scm 777 */
																				obj_t BgL_arg1430z00_1329;

																				{	/* Unsafe/gunzip.scm 777 */
																					obj_t BgL_list1431z00_1330;

																					BgL_list1431z00_1330 =
																						MAKE_YOUNG_PAIR(BINT
																						(BgL_ndz00_1322), BNIL);
																					BgL_arg1430z00_1329 =
																						BGl_formatz00zz__r4_output_6_10_3z00
																						(BGl_string2871z00zz__gunza7ipza7,
																						BgL_list1431z00_1330);
																				}
																				{	/* Unsafe/gunzip.scm 328 */
																					BgL_z62iozd2parsezd2errorz62_bglt
																						BgL_arg1401z00_3841;
																					{	/* Unsafe/gunzip.scm 328 */
																						BgL_z62iozd2parsezd2errorz62_bglt
																							BgL_new1076z00_3842;
																						{	/* Unsafe/gunzip.scm 328 */
																							BgL_z62iozd2parsezd2errorz62_bglt
																								BgL_new1075z00_3843;
																							BgL_new1075z00_3843 =
																								(
																								(BgL_z62iozd2parsezd2errorz62_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_z62iozd2parsezd2errorz62_bgl))));
																							{	/* Unsafe/gunzip.scm 328 */
																								long BgL_arg1405z00_3844;

																								{	/* Unsafe/gunzip.scm 328 */
																									long BgL_res2316z00_3845;

																									BgL_res2316z00_3845 =
																										BGL_CLASS_INDEX
																										(BGl_z62iozd2parsezd2errorz62zz__objectz00);
																									BgL_arg1405z00_3844 =
																										BgL_res2316z00_3845;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1075z00_3843),
																									BgL_arg1405z00_3844);
																							}
																							BgL_new1076z00_3842 =
																								BgL_new1075z00_3843;
																						}
																						((((BgL_z62exceptionz62_bglt)
																									COBJECT((
																											(BgL_z62exceptionz62_bglt)
																											BgL_new1076z00_3842)))->
																								BgL_fnamez00) =
																							((obj_t) BFALSE), BUNSPEC);
																						((((BgL_z62exceptionz62_bglt)
																									COBJECT((
																											(BgL_z62exceptionz62_bglt)
																											BgL_new1076z00_3842)))->
																								BgL_locationz00) =
																							((obj_t) BFALSE), BUNSPEC);
																						{
																							obj_t BgL_auxz00_5907;

																							{	/* Unsafe/gunzip.scm 328 */
																								obj_t BgL_arg1402z00_3849;

																								{	/* Unsafe/gunzip.scm 328 */
																									obj_t BgL_arg1404z00_3850;

																									{	/* Unsafe/gunzip.scm 328 */
																										obj_t BgL_res2317z00_3851;

																										{	/* Unsafe/gunzip.scm 328 */
																											obj_t BgL_classz00_3852;

																											BgL_classz00_3852 =
																												BGl_z62iozd2parsezd2errorz62zz__objectz00;
																											BgL_res2317z00_3851 =
																												BGL_CLASS_ALL_FIELDS
																												(BgL_classz00_3852);
																										}
																										BgL_arg1404z00_3850 =
																											BgL_res2317z00_3851;
																									}
																									BgL_arg1402z00_3849 =
																										VECTOR_REF
																										(BgL_arg1404z00_3850,
																										((long) 2));
																								}
																								BgL_auxz00_5907 =
																									BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																									(BgL_arg1402z00_3849);
																							}
																							((((BgL_z62exceptionz62_bglt)
																										COBJECT((
																												(BgL_z62exceptionz62_bglt)
																												BgL_new1076z00_3842)))->
																									BgL_stackz00) =
																								((obj_t) BgL_auxz00_5907),
																								BUNSPEC);
																						}
																						((((BgL_z62errorz62_bglt) COBJECT(
																										((BgL_z62errorz62_bglt)
																											BgL_new1076z00_3842)))->
																								BgL_procz00) =
																							((obj_t)
																								BGl_string2858z00zz__gunza7ipza7),
																							BUNSPEC);
																						((((BgL_z62errorz62_bglt)
																									COBJECT((
																											(BgL_z62errorz62_bglt)
																											BgL_new1076z00_3842)))->
																								BgL_msgz00) =
																							((obj_t) BgL_arg1430z00_1329),
																							BUNSPEC);
																						((((BgL_z62errorz62_bglt)
																									COBJECT((
																											(BgL_z62errorz62_bglt)
																											BgL_new1076z00_3842)))->
																								BgL_objz00) =
																							((obj_t)
																								BgL_inputzd2portzd2_4913),
																							BUNSPEC);
																						BgL_arg1401z00_3841 =
																							BgL_new1076z00_3842;
																					}
																					BgL_statez00_1287 =
																						BGl_raisez00zz__errorz00(
																						((obj_t) BgL_arg1401z00_3841));
																			}}
																		else
																			{	/* Unsafe/gunzip.scm 776 */
																				{
																					long BgL_i1145z00_1332;

																					BgL_i1145z00_1332 = ((long) 0);
																				BgL_zc3z04anonymousza31432ze3z87_1333:
																					if (
																						(BgL_i1145z00_1332 <
																							BgL_nbz00_1323))
																						{	/* Unsafe/gunzip.scm 780 */
																							{	/* Unsafe/gunzip.scm 783 */
																								long BgL_arg1434z00_1336;
																								long BgL_arg1435z00_1337;

																								{	/* Unsafe/gunzip.scm 783 */
																									obj_t BgL_arg1436z00_1338;

																									BgL_arg1436z00_1338 =
																										BGl_vector2872z00zz__gunza7ipza7;
																									BgL_arg1434z00_1336 =
																										(long)
																										CINT(VECTOR_REF
																										(BgL_arg1436z00_1338,
																											BgL_i1145z00_1332));
																								}
																								{	/* Unsafe/gunzip.scm 783 */
																									obj_t BgL_arg1437z00_1339;

																									BGl_z62NEEDBITSz62zz__gunza7ipza7
																										(BgL_bbz00_4911,
																										BgL_bkz00_4912,
																										BgL_inputzd2portzd2_4913,
																										BINT(((long) 3)));
																									{	/* Unsafe/gunzip.scm 375 */
																										obj_t BgL_rz00_3859;

																										BgL_rz00_3859 =
																											CELL_REF(BgL_bbz00_4911);
																										{	/* Unsafe/gunzip.scm 370 */
																											obj_t BgL_auxz00_4930;

																											{	/* Unsafe/gunzip.scm 370 */
																												long BgL_xz00_3860;

																												BgL_xz00_3860 =
																													(long)
																													CINT(CELL_REF
																													(BgL_bbz00_4911));
																												BgL_auxz00_4930 =
																													BINT((BgL_xz00_3860 >>
																														(int) (((long)
																																3))));
																											}
																											CELL_SET(BgL_bbz00_4911,
																												BgL_auxz00_4930);
																										}
																										{	/* Unsafe/gunzip.scm 371 */
																											obj_t BgL_auxz00_4931;

																											BgL_auxz00_4931 =
																												SUBFX(CELL_REF
																												(BgL_bkz00_4912),
																												BINT(((long) 3)));
																											CELL_SET(BgL_bkz00_4912,
																												BgL_auxz00_4931);
																										}
																										BgL_arg1437z00_1339 =
																											BgL_rz00_3859;
																									}
																									BgL_arg1435z00_1337 =
																										(
																										(long)
																										CINT(BgL_arg1437z00_1339) &
																										((long) 7));
																								}
																								VECTOR_SET(BgL_llz00_1324,
																									BgL_arg1434z00_1336,
																									BINT(BgL_arg1435z00_1337));
																							}
																							{
																								long BgL_i1145z00_5937;

																								BgL_i1145z00_5937 =
																									(BgL_i1145z00_1332 +
																									((long) 1));
																								BgL_i1145z00_1332 =
																									BgL_i1145z00_5937;
																								goto
																									BgL_zc3z04anonymousza31432ze3z87_1333;
																							}
																						}
																					else
																						{	/* Unsafe/gunzip.scm 780 */
																							((bool_t) 0);
																						}
																				}
																				{
																					long BgL_i1147z00_1343;

																					BgL_i1147z00_1343 = BgL_nbz00_1323;
																				BgL_zc3z04anonymousza31439ze3z87_1344:
																					if ((BgL_i1147z00_1343 < ((long) 19)))
																						{	/* Unsafe/gunzip.scm 784 */
																							{	/* Unsafe/gunzip.scm 787 */
																								long BgL_arg1441z00_1347;

																								{	/* Unsafe/gunzip.scm 787 */
																									obj_t BgL_arg1442z00_1348;

																									BgL_arg1442z00_1348 =
																										BGl_vector2872z00zz__gunza7ipza7;
																									BgL_arg1441z00_1347 =
																										(long)
																										CINT(VECTOR_REF
																										(BgL_arg1442z00_1348,
																											BgL_i1147z00_1343));
																								}
																								VECTOR_SET(BgL_llz00_1324,
																									BgL_arg1441z00_1347,
																									BINT(((long) 0)));
																							}
																							{
																								long BgL_i1147z00_5945;

																								BgL_i1147z00_5945 =
																									(BgL_i1147z00_1343 +
																									((long) 1));
																								BgL_i1147z00_1343 =
																									BgL_i1147z00_5945;
																								goto
																									BgL_zc3z04anonymousza31439ze3z87_1344;
																							}
																						}
																					else
																						{	/* Unsafe/gunzip.scm 784 */
																							((bool_t) 0);
																						}
																				}
																				{	/* Unsafe/gunzip.scm 790 */
																					obj_t BgL_tlz00_1351;

																					BgL_tlz00_1351 =
																						BGl_huftzd2buildze70z35zz__gunza7ipza7
																						(BgL_inputzd2portzd2_4913,
																						BgL_llz00_1324, ((long) 19),
																						((long) 19),
																						BGl_vector2874z00zz__gunza7ipza7,
																						BGl_vector2874z00zz__gunza7ipza7,
																						((long) 7), ((bool_t) 0));
																					{	/* Unsafe/gunzip.scm 791 */
																						obj_t BgL_blz00_1352;
																						obj_t BgL_okzf3zf3_1353;

																						{	/* Unsafe/gunzip.scm 792 */
																							int BgL_tmpz00_5948;

																							BgL_tmpz00_5948 =
																								(int) (((long) 1));
																							BgL_blz00_1352 =
																								BGL_MVALUES_VAL
																								(BgL_tmpz00_5948);
																						}
																						{	/* Unsafe/gunzip.scm 792 */
																							int BgL_tmpz00_5951;

																							BgL_tmpz00_5951 =
																								(int) (((long) 2));
																							BgL_okzf3zf3_1353 =
																								BGL_MVALUES_VAL
																								(BgL_tmpz00_5951);
																						}
																						if (CBOOL(BgL_okzf3zf3_1353))
																							{	/* Unsafe/gunzip.scm 795 */
																								long BgL_nz00_1355;
																								long BgL_mz00_1356;

																								BgL_nz00_1355 =
																									(BgL_nlz00_1321 +
																									BgL_ndz00_1322);
																								{	/* Unsafe/gunzip.scm 796 */
																									obj_t BgL_arg1472z00_1410;

																									BgL_arg1472z00_1410 =
																										BGl_vector2875z00zz__gunza7ipza7;
																									{	/* Unsafe/gunzip.scm 796 */
																										long BgL_kz00_3882;

																										BgL_kz00_3882 =
																											(long)
																											CINT(BgL_blz00_1352);
																										BgL_mz00_1356 =
																											(long)
																											CINT(VECTOR_REF
																											(BgL_arg1472z00_1410,
																												BgL_kz00_3882));
																								}}
																								{	/* Unsafe/gunzip.scm 797 */
																									obj_t BgL_auxz00_5242;

																									BgL_auxz00_5242 =
																										BINT(((long) 0));
																									CELL_SET(BgL_iz00_5241,
																										BgL_auxz00_5242);
																								}
																								BgL_lz00_1320 =
																									BINT(((long) 0));
																								{

																								BgL_zc3z04anonymousza31444ze3z87_1358:
																									if (
																										((long)
																											CINT(CELL_REF
																												(BgL_iz00_5241)) <
																											BgL_nz00_1355))
																										{	/* Unsafe/gunzip.scm 800 */
																											BGl_z62NEEDBITSz62zz__gunza7ipza7
																												(BgL_bbz00_4911,
																												BgL_bkz00_4912,
																												BgL_inputzd2portzd2_4913,
																												BgL_blz00_1352);
																											{	/* Unsafe/gunzip.scm 802 */
																												long BgL_posz00_1360;

																												{	/* Unsafe/gunzip.scm 802 */
																													long BgL_xz00_3886;

																													BgL_xz00_3886 =
																														(long)
																														CINT(CELL_REF
																														(BgL_bbz00_4911));
																													BgL_posz00_1360 =
																														(BgL_xz00_3886 &
																														BgL_mz00_1356);
																												}
																												{	/* Unsafe/gunzip.scm 802 */
																													obj_t BgL_tdz00_1361;

																													BgL_tdz00_1361 =
																														VECTOR_REF(
																														((obj_t)
																															BgL_tlz00_1351),
																														BgL_posz00_1360);
																													{	/* Unsafe/gunzip.scm 803 */
																														long
																															BgL_dmpz00_1362;
																														BgL_dmpz00_1362 =
																															(((BgL_huftz00_bglt) COBJECT(((BgL_huftz00_bglt) BgL_tdz00_1361)))->BgL_bz00);
																														{	/* Unsafe/gunzip.scm 804 */
																															obj_t
																																BgL_jz00_1363;
																															BgL_jz00_1363 =
																																(((BgL_huftz00_bglt) COBJECT(((BgL_huftz00_bglt) BgL_tdz00_1361)))->BgL_vz00);
																															{	/* Unsafe/gunzip.scm 806 */

																																{	/* Unsafe/gunzip.scm 370 */
																																	obj_t
																																		BgL_auxz00_4932;
																																	{	/* Unsafe/gunzip.scm 370 */
																																		long
																																			BgL_xz00_3918;
																																		BgL_xz00_3918
																																			=
																																			(long)
																																			CINT
																																			(CELL_REF
																																			(BgL_bbz00_4911));
																																		BgL_auxz00_4932
																																			=
																																			BINT(
																																			(BgL_xz00_3918
																																				>>
																																				(int)
																																				(BgL_dmpz00_1362)));
																																	}
																																	CELL_SET
																																		(BgL_bbz00_4911,
																																		BgL_auxz00_4932);
																																}
																																{	/* Unsafe/gunzip.scm 371 */
																																	obj_t
																																		BgL_auxz00_4933;
																																	BgL_auxz00_4933
																																		=
																																		SUBFX
																																		(CELL_REF
																																		(BgL_bkz00_4912),
																																		BINT
																																		(BgL_dmpz00_1362));
																																	CELL_SET
																																		(BgL_bkz00_4912,
																																		BgL_auxz00_4933);
																																}
																																if (
																																	((long)
																																		CINT
																																		(BgL_jz00_1363)
																																		<
																																		((long)
																																			16)))
																																	{	/* Unsafe/gunzip.scm 819 */
																																		{	/* Unsafe/gunzip.scm 821 */
																																			long
																																				BgL_kz00_3927;
																																			BgL_kz00_3927
																																				=
																																				(long)
																																				CINT
																																				(CELL_REF
																																				(BgL_iz00_5241));
																																			VECTOR_SET
																																				(BgL_llz00_1324,
																																				BgL_kz00_3927,
																																				BgL_jz00_1363);
																																		}
																																		BgL_lz00_1320
																																			=
																																			BgL_jz00_1363;
																																		{	/* Unsafe/gunzip.scm 824 */
																																			obj_t
																																				BgL_auxz00_5243;
																																			BgL_auxz00_5243
																																				=
																																				ADDFX
																																				(CELL_REF
																																				(BgL_iz00_5241),
																																				BINT((
																																						(long)
																																						1)));
																																			CELL_SET
																																				(BgL_iz00_5241,
																																				BgL_auxz00_5243);
																																	}}
																																else
																																	{	/* Unsafe/gunzip.scm 819 */
																																		if (
																																			((long)
																																				CINT
																																				(BgL_jz00_1363)
																																				==
																																				((long)
																																					16)))
																																			{	/* Unsafe/gunzip.scm 827 */
																																				long
																																					BgL_jz00_1367;
																																				{	/* Unsafe/gunzip.scm 827 */
																																					long
																																						BgL_arg1448z00_1368;
																																					{	/* Unsafe/gunzip.scm 827 */
																																						obj_t
																																							BgL_arg1449z00_1369;
																																						BGl_z62NEEDBITSz62zz__gunza7ipza7
																																							(BgL_bbz00_4911,
																																							BgL_bkz00_4912,
																																							BgL_inputzd2portzd2_4913,
																																							BINT
																																							(((long) 2)));
																																						{	/* Unsafe/gunzip.scm 375 */
																																							obj_t
																																								BgL_rz00_3932;
																																							BgL_rz00_3932
																																								=
																																								CELL_REF
																																								(BgL_bbz00_4911);
																																							{	/* Unsafe/gunzip.scm 370 */
																																								obj_t
																																									BgL_auxz00_4934;
																																								{	/* Unsafe/gunzip.scm 370 */
																																									long
																																										BgL_xz00_3933;
																																									BgL_xz00_3933
																																										=
																																										(long)
																																										CINT
																																										(CELL_REF
																																										(BgL_bbz00_4911));
																																									BgL_auxz00_4934
																																										=
																																										BINT
																																										(
																																										(BgL_xz00_3933
																																											>>
																																											(int)
																																											(((long) 2))));
																																								}
																																								CELL_SET
																																									(BgL_bbz00_4911,
																																									BgL_auxz00_4934);
																																							}
																																							{	/* Unsafe/gunzip.scm 371 */
																																								obj_t
																																									BgL_auxz00_4935;
																																								BgL_auxz00_4935
																																									=
																																									SUBFX
																																									(CELL_REF
																																									(BgL_bkz00_4912),
																																									BINT
																																									(((long) 2)));
																																								CELL_SET
																																									(BgL_bkz00_4912,
																																									BgL_auxz00_4935);
																																							}
																																							BgL_arg1449z00_1369
																																								=
																																								BgL_rz00_3932;
																																						}
																																						BgL_arg1448z00_1368
																																							=
																																							(
																																							(long)
																																							CINT
																																							(BgL_arg1449z00_1369)
																																							&
																																							((long) 3));
																																					}
																																					BgL_jz00_1367
																																						=
																																						(((long) 3) + BgL_arg1448z00_1368);
																																				}
																																				BBOOL
																																					(BGl_setzd2litze70z35zz__gunza7ipza7
																																					(BgL_llz00_1324,
																																						BgL_iz00_5241,
																																						BgL_inputzd2portzd2_4913,
																																						BgL_nz00_1355,
																																						BgL_jz00_1367,
																																						BgL_lz00_1320));
																																			}
																																		else
																																			{	/* Unsafe/gunzip.scm 829 */
																																				bool_t
																																					BgL_test3029z00_6003;
																																				if (INTEGERP(BgL_jz00_1363))
																																					{	/* Unsafe/gunzip.scm 829 */
																																						BgL_test3029z00_6003
																																							=
																																							(
																																							(long)
																																							CINT
																																							(BgL_jz00_1363)
																																							==
																																							((long) 17));
																																					}
																																				else
																																					{	/* Unsafe/gunzip.scm 829 */
																																						BgL_test3029z00_6003
																																							=
																																							BGl_2zd3zd3zz__r4_numbers_6_5z00
																																							(BgL_jz00_1363,
																																							BINT
																																							(((long) 17)));
																																					}
																																				if (BgL_test3029z00_6003)
																																					{	/* Unsafe/gunzip.scm 831 */
																																						long
																																							BgL_jz00_1372;
																																						{	/* Unsafe/gunzip.scm 831 */
																																							long
																																								BgL_arg1452z00_1373;
																																							{	/* Unsafe/gunzip.scm 831 */
																																								obj_t
																																									BgL_arg1453z00_1374;
																																								BGl_z62NEEDBITSz62zz__gunza7ipza7
																																									(BgL_bbz00_4911,
																																									BgL_bkz00_4912,
																																									BgL_inputzd2portzd2_4913,
																																									BINT
																																									(((long) 3)));
																																								{	/* Unsafe/gunzip.scm 375 */
																																									obj_t
																																										BgL_rz00_3944;
																																									BgL_rz00_3944
																																										=
																																										CELL_REF
																																										(BgL_bbz00_4911);
																																									{	/* Unsafe/gunzip.scm 370 */
																																										obj_t
																																											BgL_auxz00_4936;
																																										{	/* Unsafe/gunzip.scm 370 */
																																											long
																																												BgL_xz00_3945;
																																											BgL_xz00_3945
																																												=
																																												(long)
																																												CINT
																																												(CELL_REF
																																												(BgL_bbz00_4911));
																																											BgL_auxz00_4936
																																												=
																																												BINT
																																												(
																																												(BgL_xz00_3945
																																													>>
																																													(int)
																																													(((long) 3))));
																																										}
																																										CELL_SET
																																											(BgL_bbz00_4911,
																																											BgL_auxz00_4936);
																																									}
																																									{	/* Unsafe/gunzip.scm 371 */
																																										obj_t
																																											BgL_auxz00_4937;
																																										BgL_auxz00_4937
																																											=
																																											SUBFX
																																											(CELL_REF
																																											(BgL_bkz00_4912),
																																											BINT
																																											(((long) 3)));
																																										CELL_SET
																																											(BgL_bkz00_4912,
																																											BgL_auxz00_4937);
																																									}
																																									BgL_arg1453z00_1374
																																										=
																																										BgL_rz00_3944;
																																								}
																																								BgL_arg1452z00_1373
																																									=
																																									(
																																									(long)
																																									CINT
																																									(BgL_arg1453z00_1374)
																																									&
																																									((long) 7));
																																							}
																																							BgL_jz00_1372
																																								=
																																								(
																																								((long) 3) + BgL_arg1452z00_1373);
																																						}
																																						BGl_setzd2litze70z35zz__gunza7ipza7
																																							(BgL_llz00_1324,
																																							BgL_iz00_5241,
																																							BgL_inputzd2portzd2_4913,
																																							BgL_nz00_1355,
																																							BgL_jz00_1372,
																																							BINT
																																							(((long) 0)));
																																						BgL_lz00_1320
																																							=
																																							BINT
																																							(((long) 0));
																																					}
																																				else
																																					{	/* Unsafe/gunzip.scm 836 */
																																						long
																																							BgL_jz00_1375;
																																						{	/* Unsafe/gunzip.scm 836 */
																																							long
																																								BgL_arg1454z00_1376;
																																							{	/* Unsafe/gunzip.scm 836 */
																																								obj_t
																																									BgL_arg1455z00_1377;
																																								BGl_z62NEEDBITSz62zz__gunza7ipza7
																																									(BgL_bbz00_4911,
																																									BgL_bkz00_4912,
																																									BgL_inputzd2portzd2_4913,
																																									BINT
																																									(((long) 7)));
																																								{	/* Unsafe/gunzip.scm 375 */
																																									obj_t
																																										BgL_rz00_3953;
																																									BgL_rz00_3953
																																										=
																																										CELL_REF
																																										(BgL_bbz00_4911);
																																									{	/* Unsafe/gunzip.scm 370 */
																																										obj_t
																																											BgL_auxz00_4938;
																																										{	/* Unsafe/gunzip.scm 370 */
																																											long
																																												BgL_xz00_3954;
																																											BgL_xz00_3954
																																												=
																																												(long)
																																												CINT
																																												(CELL_REF
																																												(BgL_bbz00_4911));
																																											BgL_auxz00_4938
																																												=
																																												BINT
																																												(
																																												(BgL_xz00_3954
																																													>>
																																													(int)
																																													(((long) 7))));
																																										}
																																										CELL_SET
																																											(BgL_bbz00_4911,
																																											BgL_auxz00_4938);
																																									}
																																									{	/* Unsafe/gunzip.scm 371 */
																																										obj_t
																																											BgL_auxz00_4939;
																																										BgL_auxz00_4939
																																											=
																																											SUBFX
																																											(CELL_REF
																																											(BgL_bkz00_4912),
																																											BINT
																																											(((long) 7)));
																																										CELL_SET
																																											(BgL_bkz00_4912,
																																											BgL_auxz00_4939);
																																									}
																																									BgL_arg1455z00_1377
																																										=
																																										BgL_rz00_3953;
																																								}
																																								BgL_arg1454z00_1376
																																									=
																																									(
																																									(long)
																																									CINT
																																									(BgL_arg1455z00_1377)
																																									&
																																									((long) 127));
																																							}
																																							BgL_jz00_1375
																																								=
																																								(
																																								((long) 11) + BgL_arg1454z00_1376);
																																						}
																																						BGl_setzd2litze70z35zz__gunza7ipza7
																																							(BgL_llz00_1324,
																																							BgL_iz00_5241,
																																							BgL_inputzd2portzd2_4913,
																																							BgL_nz00_1355,
																																							BgL_jz00_1375,
																																							BINT
																																							(((long) 0)));
																																						BgL_lz00_1320
																																							=
																																							BINT
																																							(((long) 0));
																											}}}}}}}}
																											goto
																												BgL_zc3z04anonymousza31444ze3z87_1358;
																										}
																									else
																										{	/* Unsafe/gunzip.scm 800 */
																											((bool_t) 0);
																										}
																								}
																								{	/* Unsafe/gunzip.scm 843 */
																									obj_t BgL_tlz00_1397;

																									BgL_tlz00_1397 =
																										BGl_huftzd2buildze70z35zz__gunza7ipza7
																										(BgL_inputzd2portzd2_4913,
																										BgL_llz00_1324,
																										BgL_nlz00_1321,
																										((long) 257),
																										BGl_vector2861z00zz__gunza7ipza7,
																										BGl_vector2863z00zz__gunza7ipza7,
																										((long) 9), ((bool_t) 0));
																									{	/* Unsafe/gunzip.scm 844 */
																										obj_t BgL_blz00_1398;
																										obj_t BgL_okzf3zf3_1399;

																										{	/* Unsafe/gunzip.scm 845 */
																											int BgL_tmpz00_6039;

																											BgL_tmpz00_6039 =
																												(int) (((long) 1));
																											BgL_blz00_1398 =
																												BGL_MVALUES_VAL
																												(BgL_tmpz00_6039);
																										}
																										{	/* Unsafe/gunzip.scm 845 */
																											int BgL_tmpz00_6042;

																											BgL_tmpz00_6042 =
																												(int) (((long) 2));
																											BgL_okzf3zf3_1399 =
																												BGL_MVALUES_VAL
																												(BgL_tmpz00_6042);
																										}
																										if (CBOOL
																											(BgL_okzf3zf3_1399))
																											{	/* Unsafe/gunzip.scm 849 */
																												obj_t BgL_tdz00_1400;

																												BgL_tdz00_1400 =
																													BGl_huftzd2buildze70z35zz__gunza7ipza7
																													(BgL_inputzd2portzd2_4913,
																													BGl_subvectorz00zz__gunza7ipza7
																													(BgL_llz00_1324,
																														BgL_nlz00_1321),
																													BgL_ndz00_1322,
																													((long) 0),
																													BGl_vector2865z00zz__gunza7ipza7,
																													BGl_vector2867z00zz__gunza7ipza7,
																													((long) 6),
																													((bool_t) 0));
																												{	/* Unsafe/gunzip.scm 850 */
																													obj_t BgL_bdz00_1401;
																													obj_t
																														BgL_okzf3zf3_1402;
																													{	/* Unsafe/gunzip.scm 851 */
																														int BgL_tmpz00_6049;

																														BgL_tmpz00_6049 =
																															(int) (((long)
																																1));
																														BgL_bdz00_1401 =
																															BGL_MVALUES_VAL
																															(BgL_tmpz00_6049);
																													}
																													{	/* Unsafe/gunzip.scm 851 */
																														int BgL_tmpz00_6052;

																														BgL_tmpz00_6052 =
																															(int) (((long)
																																2));
																														BgL_okzf3zf3_1402 =
																															BGL_MVALUES_VAL
																															(BgL_tmpz00_6052);
																													}
																													if (CBOOL
																														(BgL_okzf3zf3_1402))
																														{	/* Unsafe/gunzip.scm 851 */
																															BgL_tlz00_1500 =
																																BgL_tlz00_1397;
																															BgL_tdz00_1501 =
																																BgL_tdz00_1400;
																															BgL_blz00_1502 =
																																BgL_blz00_1398;
																															BgL_bdz00_1503 =
																																BgL_bdz00_1401;
																														BgL_zc3z04anonymousza31521ze3z87_1504:
																															{	/* Unsafe/gunzip.scm 592 */
																																long
																																	BgL_mlz00_1505;
																																long
																																	BgL_mdz00_1506;
																																obj_t
																																	BgL_tz00_4940;
																																obj_t
																																	BgL_ez00_4941;
																																obj_t
																																	BgL_nz00_4942;
																																obj_t
																																	BgL_dz00_4943;
																																{	/* Unsafe/gunzip.scm 592 */
																																	obj_t
																																		BgL_arg1592z00_1618;
																																	BgL_arg1592z00_1618
																																		=
																																		BGl_vector2875z00zz__gunza7ipza7;
																																	{	/* Unsafe/gunzip.scm 592 */
																																		long
																																			BgL_kz00_3467;
																																		BgL_kz00_3467
																																			=
																																			(long)
																																			CINT
																																			(BgL_blz00_1502);
																																		BgL_mlz00_1505
																																			=
																																			(long)
																																			CINT
																																			(VECTOR_REF
																																			(BgL_arg1592z00_1618,
																																				BgL_kz00_3467));
																																}}
																																{	/* Unsafe/gunzip.scm 593 */
																																	obj_t
																																		BgL_arg1593z00_1619;
																																	BgL_arg1593z00_1619
																																		=
																																		BGl_vector2875z00zz__gunza7ipza7;
																																	{	/* Unsafe/gunzip.scm 593 */
																																		long
																																			BgL_kz00_3469;
																																		BgL_kz00_3469
																																			=
																																			(long)
																																			CINT
																																			(BgL_bdz00_1503);
																																		BgL_mdz00_1506
																																			=
																																			(long)
																																			CINT
																																			(VECTOR_REF
																																			(BgL_arg1593z00_1619,
																																				BgL_kz00_3469));
																																}}
																																BgL_tz00_4940 =
																																	MAKE_CELL
																																	(BUNSPEC);
																																BgL_ez00_4941 =
																																	MAKE_CELL(BINT
																																	(((long) 0)));
																																BgL_nz00_4942 =
																																	MAKE_CELL(BINT
																																	(((long) 0)));
																																BgL_dz00_4943 =
																																	MAKE_CELL(BINT
																																	(((long) 0)));
																																BgL_statez00_1287
																																	=
																																	BGl_z62loopzd2inflatezb0zz__gunza7ipza7
																																	(BgL_tdz00_1501,
																																	BgL_mdz00_1506,
																																	BgL_bdz00_1503,
																																	BgL_tlz00_1500,
																																	BgL_mlz00_1505,
																																	BgL_blz00_1502,
																																	BgL_bkz00_4912,
																																	BgL_bbz00_4911,
																																	BgL_tz00_4940,
																																	BgL_inputzd2portzd2_4913,
																																	BgL_slidez00_4910,
																																	BgL_ez00_4941,
																																	BgL_wpz00_4909,
																																	BgL_nz00_4942,
																																	BgL_dz00_4943,
																																	BgL_wsiza7eza7_4908,
																																	BINT(((long)
																																			0)));
																														}}
																													else
																														{	/* Unsafe/gunzip.scm 328 */
																															BgL_z62iozd2parsezd2errorz62_bglt
																																BgL_arg1401z00_3962;
																															{	/* Unsafe/gunzip.scm 328 */
																																BgL_z62iozd2parsezd2errorz62_bglt
																																	BgL_new1076z00_3963;
																																{	/* Unsafe/gunzip.scm 328 */
																																	BgL_z62iozd2parsezd2errorz62_bglt
																																		BgL_new1075z00_3964;
																																	BgL_new1075z00_3964
																																		=
																																		(
																																		(BgL_z62iozd2parsezd2errorz62_bglt)
																																		BOBJECT
																																		(GC_MALLOC
																																			(sizeof
																																				(struct
																																					BgL_z62iozd2parsezd2errorz62_bgl))));
																																	{	/* Unsafe/gunzip.scm 328 */
																																		long
																																			BgL_arg1405z00_3965;
																																		{	/* Unsafe/gunzip.scm 328 */
																																			long
																																				BgL_res2316z00_3966;
																																			BgL_res2316z00_3966
																																				=
																																				BGL_CLASS_INDEX
																																				(BGl_z62iozd2parsezd2errorz62zz__objectz00);
																																			BgL_arg1405z00_3965
																																				=
																																				BgL_res2316z00_3966;
																																		}
																																		BGL_OBJECT_CLASS_NUM_SET
																																			(((BgL_objectz00_bglt) BgL_new1075z00_3964), BgL_arg1405z00_3965);
																																	}
																																	BgL_new1076z00_3963
																																		=
																																		BgL_new1075z00_3964;
																																}
																																((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1076z00_3963)))->BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
																																((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1076z00_3963)))->BgL_locationz00) = ((obj_t) BFALSE), BUNSPEC);
																																{
																																	obj_t
																																		BgL_auxz00_6076;
																																	{	/* Unsafe/gunzip.scm 328 */
																																		obj_t
																																			BgL_arg1402z00_3970;
																																		{	/* Unsafe/gunzip.scm 328 */
																																			obj_t
																																				BgL_arg1404z00_3971;
																																			{	/* Unsafe/gunzip.scm 328 */
																																				obj_t
																																					BgL_res2317z00_3972;
																																				{	/* Unsafe/gunzip.scm 328 */
																																					obj_t
																																						BgL_classz00_3973;
																																					BgL_classz00_3973
																																						=
																																						BGl_z62iozd2parsezd2errorz62zz__objectz00;
																																					BgL_res2317z00_3972
																																						=
																																						BGL_CLASS_ALL_FIELDS
																																						(BgL_classz00_3973);
																																				}
																																				BgL_arg1404z00_3971
																																					=
																																					BgL_res2317z00_3972;
																																			}
																																			BgL_arg1402z00_3970
																																				=
																																				VECTOR_REF
																																				(BgL_arg1404z00_3971,
																																				((long)
																																					2));
																																		}
																																		BgL_auxz00_6076
																																			=
																																			BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																																			(BgL_arg1402z00_3970);
																																	}
																																	((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1076z00_3963)))->BgL_stackz00) = ((obj_t) BgL_auxz00_6076), BUNSPEC);
																																}
																																((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt) BgL_new1076z00_3963)))->BgL_procz00) = ((obj_t) BGl_string2858z00zz__gunza7ipza7), BUNSPEC);
																																((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt) BgL_new1076z00_3963)))->BgL_msgz00) = ((obj_t) BGl_string2877z00zz__gunza7ipza7), BUNSPEC);
																																((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt) BgL_new1076z00_3963)))->BgL_objz00) = ((obj_t) BgL_inputzd2portzd2_4913), BUNSPEC);
																																BgL_arg1401z00_3962
																																	=
																																	BgL_new1076z00_3963;
																															}
																															BgL_statez00_1287
																																=
																																BGl_raisez00zz__errorz00
																																(((obj_t)
																																	BgL_arg1401z00_3962));
																											}}}
																										else
																											{	/* Unsafe/gunzip.scm 328 */
																												BgL_z62iozd2parsezd2errorz62_bglt
																													BgL_arg1401z00_3975;
																												{	/* Unsafe/gunzip.scm 328 */
																													BgL_z62iozd2parsezd2errorz62_bglt
																														BgL_new1076z00_3976;
																													{	/* Unsafe/gunzip.scm 328 */
																														BgL_z62iozd2parsezd2errorz62_bglt
																															BgL_new1075z00_3977;
																														BgL_new1075z00_3977
																															=
																															(
																															(BgL_z62iozd2parsezd2errorz62_bglt)
																															BOBJECT(GC_MALLOC
																																(sizeof(struct
																																		BgL_z62iozd2parsezd2errorz62_bgl))));
																														{	/* Unsafe/gunzip.scm 328 */
																															long
																																BgL_arg1405z00_3978;
																															{	/* Unsafe/gunzip.scm 328 */
																																long
																																	BgL_res2316z00_3979;
																																BgL_res2316z00_3979
																																	=
																																	BGL_CLASS_INDEX
																																	(BGl_z62iozd2parsezd2errorz62zz__objectz00);
																																BgL_arg1405z00_3978
																																	=
																																	BgL_res2316z00_3979;
																															}
																															BGL_OBJECT_CLASS_NUM_SET
																																(((BgL_objectz00_bglt) BgL_new1075z00_3977), BgL_arg1405z00_3978);
																														}
																														BgL_new1076z00_3976
																															=
																															BgL_new1075z00_3977;
																													}
																													((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1076z00_3976)))->BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
																													((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1076z00_3976)))->BgL_locationz00) = ((obj_t) BFALSE), BUNSPEC);
																													{
																														obj_t
																															BgL_auxz00_6098;
																														{	/* Unsafe/gunzip.scm 328 */
																															obj_t
																																BgL_arg1402z00_3983;
																															{	/* Unsafe/gunzip.scm 328 */
																																obj_t
																																	BgL_arg1404z00_3984;
																																{	/* Unsafe/gunzip.scm 328 */
																																	obj_t
																																		BgL_res2317z00_3985;
																																	{	/* Unsafe/gunzip.scm 328 */
																																		obj_t
																																			BgL_classz00_3986;
																																		BgL_classz00_3986
																																			=
																																			BGl_z62iozd2parsezd2errorz62zz__objectz00;
																																		BgL_res2317z00_3985
																																			=
																																			BGL_CLASS_ALL_FIELDS
																																			(BgL_classz00_3986);
																																	}
																																	BgL_arg1404z00_3984
																																		=
																																		BgL_res2317z00_3985;
																																}
																																BgL_arg1402z00_3983
																																	=
																																	VECTOR_REF
																																	(BgL_arg1404z00_3984,
																																	((long) 2));
																															}
																															BgL_auxz00_6098 =
																																BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																																(BgL_arg1402z00_3983);
																														}
																														((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1076z00_3976)))->BgL_stackz00) = ((obj_t) BgL_auxz00_6098), BUNSPEC);
																													}
																													((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt) BgL_new1076z00_3976)))->BgL_procz00) = ((obj_t) BGl_string2858z00zz__gunza7ipza7), BUNSPEC);
																													((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt) BgL_new1076z00_3976)))->BgL_msgz00) = ((obj_t) BGl_string2877z00zz__gunza7ipza7), BUNSPEC);
																													((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt) BgL_new1076z00_3976)))->BgL_objz00) = ((obj_t) BgL_inputzd2portzd2_4913), BUNSPEC);
																													BgL_arg1401z00_3975 =
																														BgL_new1076z00_3976;
																												}
																												BgL_statez00_1287 =
																													BGl_raisez00zz__errorz00
																													(((obj_t)
																														BgL_arg1401z00_3975));
																							}}}}
																						else
																							{	/* Unsafe/gunzip.scm 792 */
																								BgL_statez00_1287 = BFALSE;
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
										case ((long) 0):

											{	/* Unsafe/gunzip.scm 712 */
												long BgL_arg1505z00_1471;

												{	/* Unsafe/gunzip.scm 712 */
													long BgL_xz00_3648;

													BgL_xz00_3648 = (long) CINT(CELL_REF(BgL_bkz00_4912));
													BgL_arg1505z00_1471 = (BgL_xz00_3648 & ((long) 7));
												}
												{	/* Unsafe/gunzip.scm 370 */
													obj_t BgL_auxz00_4918;

													{	/* Unsafe/gunzip.scm 370 */
														long BgL_xz00_3650;

														BgL_xz00_3650 =
															(long) CINT(CELL_REF(BgL_bbz00_4911));
														BgL_auxz00_4918 =
															BINT(
															(BgL_xz00_3650 >> (int) (BgL_arg1505z00_1471)));
													}
													CELL_SET(BgL_bbz00_4911, BgL_auxz00_4918);
												}
												{	/* Unsafe/gunzip.scm 371 */
													obj_t BgL_auxz00_4919;

													BgL_auxz00_4919 =
														SUBFX(CELL_REF(BgL_bkz00_4912),
														BINT(BgL_arg1505z00_1471));
													CELL_SET(BgL_bkz00_4912, BgL_auxz00_4919);
											}}
											BGl_z62NEEDBITSz62zz__gunza7ipza7(BgL_bbz00_4911,
												BgL_bkz00_4912, BgL_inputzd2portzd2_4913,
												BINT(((long) 16)));
											{	/* Unsafe/gunzip.scm 716 */
												long BgL_nz00_1472;

												{	/* Unsafe/gunzip.scm 716 */
													long BgL_xz00_3656;

													BgL_xz00_3656 = (long) CINT(CELL_REF(BgL_bbz00_4911));
													BgL_nz00_1472 = (BgL_xz00_3656 & ((long) 65535));
												}
												{	/* Unsafe/gunzip.scm 370 */
													obj_t BgL_auxz00_4920;

													{	/* Unsafe/gunzip.scm 370 */
														long BgL_xz00_3658;

														BgL_xz00_3658 =
															(long) CINT(CELL_REF(BgL_bbz00_4911));
														BgL_auxz00_4920 =
															BINT((BgL_xz00_3658 >> (int) (((long) 16))));
													}
													CELL_SET(BgL_bbz00_4911, BgL_auxz00_4920);
												}
												{	/* Unsafe/gunzip.scm 371 */
													obj_t BgL_auxz00_4921;

													BgL_auxz00_4921 =
														SUBFX(CELL_REF(BgL_bkz00_4912), BINT(((long) 16)));
													CELL_SET(BgL_bkz00_4912, BgL_auxz00_4921);
												}
												BGl_z62NEEDBITSz62zz__gunza7ipza7(BgL_bbz00_4911,
													BgL_bkz00_4912, BgL_inputzd2portzd2_4913,
													BINT(((long) 16)));
												{	/* Unsafe/gunzip.scm 719 */
													bool_t BgL_test3033z00_6132;

													{	/* Unsafe/gunzip.scm 719 */
														long BgL_arg1511z00_1478;

														{	/* Unsafe/gunzip.scm 719 */
															long BgL_tmpz00_6133;

															{	/* Unsafe/gunzip.scm 719 */
																long BgL_xz00_3662;

																BgL_xz00_3662 =
																	(long) CINT(CELL_REF(BgL_bbz00_4911));
																BgL_tmpz00_6133 = ~(BgL_xz00_3662);
															}
															BgL_arg1511z00_1478 =
																(BgL_tmpz00_6133 & ((long) 65535));
														}
														BgL_test3033z00_6132 =
															(BgL_nz00_1472 == BgL_arg1511z00_1478);
													}
													if (BgL_test3033z00_6132)
														{	/* Unsafe/gunzip.scm 719 */
															BFALSE;
														}
													else
														{	/* Unsafe/gunzip.scm 721 */
															obj_t BgL_arg1509z00_1476;

															{	/* Unsafe/gunzip.scm 721 */
																obj_t BgL_list1510z00_1477;

																BgL_list1510z00_1477 =
																	MAKE_YOUNG_PAIR(BINT(BgL_nz00_1472), BNIL);
																BgL_arg1509z00_1476 =
																	BGl_formatz00zz__r4_output_6_10_3z00
																	(BGl_string2869z00zz__gunza7ipza7,
																	BgL_list1510z00_1477);
															}
															{	/* Unsafe/gunzip.scm 328 */
																BgL_z62iozd2parsezd2errorz62_bglt
																	BgL_arg1401z00_3669;
																{	/* Unsafe/gunzip.scm 328 */
																	BgL_z62iozd2parsezd2errorz62_bglt
																		BgL_new1076z00_3670;
																	{	/* Unsafe/gunzip.scm 328 */
																		BgL_z62iozd2parsezd2errorz62_bglt
																			BgL_new1075z00_3671;
																		BgL_new1075z00_3671 =
																			((BgL_z62iozd2parsezd2errorz62_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_z62iozd2parsezd2errorz62_bgl))));
																		{	/* Unsafe/gunzip.scm 328 */
																			long BgL_arg1405z00_3672;

																			{	/* Unsafe/gunzip.scm 328 */
																				long BgL_res2316z00_3673;

																				BgL_res2316z00_3673 =
																					BGL_CLASS_INDEX
																					(BGl_z62iozd2parsezd2errorz62zz__objectz00);
																				BgL_arg1405z00_3672 =
																					BgL_res2316z00_3673;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1075z00_3671),
																				BgL_arg1405z00_3672);
																		}
																		BgL_new1076z00_3670 = BgL_new1075z00_3671;
																	}
																	((((BgL_z62exceptionz62_bglt) COBJECT(
																					((BgL_z62exceptionz62_bglt)
																						BgL_new1076z00_3670)))->
																			BgL_fnamez00) =
																		((obj_t) BFALSE), BUNSPEC);
																	((((BgL_z62exceptionz62_bglt)
																				COBJECT(((BgL_z62exceptionz62_bglt)
																						BgL_new1076z00_3670)))->
																			BgL_locationz00) =
																		((obj_t) BFALSE), BUNSPEC);
																	{
																		obj_t BgL_auxz00_6149;

																		{	/* Unsafe/gunzip.scm 328 */
																			obj_t BgL_arg1402z00_3677;

																			{	/* Unsafe/gunzip.scm 328 */
																				obj_t BgL_arg1404z00_3678;

																				{	/* Unsafe/gunzip.scm 328 */
																					obj_t BgL_res2317z00_3679;

																					{	/* Unsafe/gunzip.scm 328 */
																						obj_t BgL_classz00_3680;

																						BgL_classz00_3680 =
																							BGl_z62iozd2parsezd2errorz62zz__objectz00;
																						BgL_res2317z00_3679 =
																							BGL_CLASS_ALL_FIELDS
																							(BgL_classz00_3680);
																					}
																					BgL_arg1404z00_3678 =
																						BgL_res2317z00_3679;
																				}
																				BgL_arg1402z00_3677 =
																					VECTOR_REF(BgL_arg1404z00_3678,
																					((long) 2));
																			}
																			BgL_auxz00_6149 =
																				BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																				(BgL_arg1402z00_3677);
																		}
																		((((BgL_z62exceptionz62_bglt) COBJECT(
																						((BgL_z62exceptionz62_bglt)
																							BgL_new1076z00_3670)))->
																				BgL_stackz00) =
																			((obj_t) BgL_auxz00_6149), BUNSPEC);
																	}
																	((((BgL_z62errorz62_bglt) COBJECT(
																					((BgL_z62errorz62_bglt)
																						BgL_new1076z00_3670)))->
																			BgL_procz00) =
																		((obj_t) BGl_string2870z00zz__gunza7ipza7),
																		BUNSPEC);
																	((((BgL_z62errorz62_bglt)
																				COBJECT(((BgL_z62errorz62_bglt)
																						BgL_new1076z00_3670)))->
																			BgL_msgz00) =
																		((obj_t) BgL_arg1509z00_1476), BUNSPEC);
																	((((BgL_z62errorz62_bglt)
																				COBJECT(((BgL_z62errorz62_bglt)
																						BgL_new1076z00_3670)))->
																			BgL_objz00) =
																		((obj_t) BgL_inputzd2portzd2_4913),
																		BUNSPEC);
																	BgL_arg1401z00_3669 = BgL_new1076z00_3670;
																}
																BGl_raisez00zz__errorz00(
																	((obj_t) BgL_arg1401z00_3669));
												}}}
												{	/* Unsafe/gunzip.scm 370 */
													obj_t BgL_auxz00_4922;

													{	/* Unsafe/gunzip.scm 370 */
														long BgL_xz00_3682;

														BgL_xz00_3682 =
															(long) CINT(CELL_REF(BgL_bbz00_4911));
														BgL_auxz00_4922 =
															BINT((BgL_xz00_3682 >> (int) (((long) 16))));
													}
													CELL_SET(BgL_bbz00_4911, BgL_auxz00_4922);
												}
												{	/* Unsafe/gunzip.scm 371 */
													obj_t BgL_auxz00_4923;

													BgL_auxz00_4923 =
														SUBFX(CELL_REF(BgL_bkz00_4912), BINT(((long) 16)));
													CELL_SET(BgL_bkz00_4912, BgL_auxz00_4923);
												}
												BgL_statez00_1287 =
													BGl_z62loop2796z62zz__gunza7ipza7(BgL_bkz00_4912,
													BgL_wpz00_4909, BgL_slidez00_4910, BgL_bbz00_4911,
													BgL_inputzd2portzd2_4913, BgL_wsiza7eza7_4908,
													BgL_nz00_1472);
											} break;
										case ((long) 1):

											{	/* Unsafe/gunzip.scm 743 */
												obj_t BgL_lz00_1420;

												BgL_lz00_1420 = make_vector(((long) 288), BUNSPEC);
												{
													long BgL_i1133z00_3718;

													BgL_i1133z00_3718 = ((long) 0);
												BgL_loop1134z00_3717:
													if ((BgL_i1133z00_3718 < ((long) 144)))
														{	/* Unsafe/gunzip.scm 745 */
															VECTOR_SET(BgL_lz00_1420, BgL_i1133z00_3718,
																BINT(((long) 8)));
															{
																long BgL_i1133z00_6175;

																BgL_i1133z00_6175 =
																	(BgL_i1133z00_3718 + ((long) 1));
																BgL_i1133z00_3718 = BgL_i1133z00_6175;
																goto BgL_loop1134z00_3717;
															}
														}
													else
														{	/* Unsafe/gunzip.scm 745 */
															((bool_t) 0);
														}
												}
												{
													long BgL_i1135z00_3735;

													BgL_i1135z00_3735 = ((long) 144);
												BgL_loop1136z00_3734:
													if ((BgL_i1135z00_3735 < ((long) 256)))
														{	/* Unsafe/gunzip.scm 746 */
															VECTOR_SET(BgL_lz00_1420, BgL_i1135z00_3735,
																BINT(((long) 9)));
															{
																long BgL_i1135z00_6181;

																BgL_i1135z00_6181 =
																	(BgL_i1135z00_3735 + ((long) 1));
																BgL_i1135z00_3735 = BgL_i1135z00_6181;
																goto BgL_loop1136z00_3734;
															}
														}
													else
														{	/* Unsafe/gunzip.scm 746 */
															((bool_t) 0);
														}
												}
												{
													long BgL_i1137z00_3752;

													BgL_i1137z00_3752 = ((long) 256);
												BgL_loop1138z00_3751:
													if ((BgL_i1137z00_3752 < ((long) 280)))
														{	/* Unsafe/gunzip.scm 747 */
															VECTOR_SET(BgL_lz00_1420, BgL_i1137z00_3752,
																BINT(((long) 7)));
															{
																long BgL_i1137z00_6187;

																BgL_i1137z00_6187 =
																	(BgL_i1137z00_3752 + ((long) 1));
																BgL_i1137z00_3752 = BgL_i1137z00_6187;
																goto BgL_loop1138z00_3751;
															}
														}
													else
														{	/* Unsafe/gunzip.scm 747 */
															((bool_t) 0);
														}
												}
												{
													long BgL_i1139z00_3769;

													BgL_i1139z00_3769 = ((long) 280);
												BgL_loop1140z00_3768:
													if ((BgL_i1139z00_3769 < ((long) 288)))
														{	/* Unsafe/gunzip.scm 748 */
															VECTOR_SET(BgL_lz00_1420, BgL_i1139z00_3769,
																BINT(((long) 8)));
															{
																long BgL_i1139z00_6193;

																BgL_i1139z00_6193 =
																	(BgL_i1139z00_3769 + ((long) 1));
																BgL_i1139z00_3769 = BgL_i1139z00_6193;
																goto BgL_loop1140z00_3768;
															}
														}
													else
														{	/* Unsafe/gunzip.scm 748 */
															((bool_t) 0);
														}
												}
												{	/* Unsafe/gunzip.scm 750 */
													obj_t BgL_tlz00_1449;

													BgL_tlz00_1449 =
														BGl_huftzd2buildze70z35zz__gunza7ipza7
														(BgL_inputzd2portzd2_4913, BgL_lz00_1420,
														((long) 288), ((long) 257),
														BGl_vector2861z00zz__gunza7ipza7,
														BGl_vector2863z00zz__gunza7ipza7, ((long) 7),
														((bool_t) 0));
													{	/* Unsafe/gunzip.scm 751 */
														obj_t BgL_blz00_1450;
														obj_t BgL_okzf3zf3_1451;

														{	/* Unsafe/gunzip.scm 753 */
															int BgL_tmpz00_6196;

															BgL_tmpz00_6196 = (int) (((long) 1));
															BgL_blz00_1450 = BGL_MVALUES_VAL(BgL_tmpz00_6196);
														}
														{	/* Unsafe/gunzip.scm 753 */
															int BgL_tmpz00_6199;

															BgL_tmpz00_6199 = (int) (((long) 2));
															BgL_okzf3zf3_1451 =
																BGL_MVALUES_VAL(BgL_tmpz00_6199);
														}
														if (CBOOL(BgL_okzf3zf3_1451))
															{	/* Unsafe/gunzip.scm 753 */
																{
																	long BgL_i1142z00_3786;

																	BgL_i1142z00_3786 = ((long) 0);
																BgL_loop1143z00_3785:
																	if ((BgL_i1142z00_3786 < ((long) 30)))
																		{	/* Unsafe/gunzip.scm 755 */
																			VECTOR_SET(BgL_lz00_1420,
																				BgL_i1142z00_3786, BINT(((long) 5)));
																			{
																				long BgL_i1142z00_6208;

																				BgL_i1142z00_6208 =
																					(BgL_i1142z00_3786 + ((long) 1));
																				BgL_i1142z00_3786 = BgL_i1142z00_6208;
																				goto BgL_loop1143z00_3785;
																			}
																		}
																	else
																		{	/* Unsafe/gunzip.scm 755 */
																			((bool_t) 0);
																		}
																}
																{	/* Unsafe/gunzip.scm 756 */
																	obj_t BgL_tdz00_1460;

																	BgL_tdz00_1460 =
																		BGl_huftzd2buildze70z35zz__gunza7ipza7
																		(BgL_inputzd2portzd2_4913, BgL_lz00_1420,
																		((long) 30), ((long) 0),
																		BGl_vector2865z00zz__gunza7ipza7,
																		BGl_vector2867z00zz__gunza7ipza7,
																		((long) 5), ((bool_t) 1));
																	{	/* Unsafe/gunzip.scm 757 */
																		obj_t BgL_bdz00_1461;
																		obj_t BgL_okzf3zf3_1462;

																		{	/* Unsafe/gunzip.scm 758 */
																			int BgL_tmpz00_6211;

																			BgL_tmpz00_6211 = (int) (((long) 1));
																			BgL_bdz00_1461 =
																				BGL_MVALUES_VAL(BgL_tmpz00_6211);
																		}
																		{	/* Unsafe/gunzip.scm 758 */
																			int BgL_tmpz00_6214;

																			BgL_tmpz00_6214 = (int) (((long) 2));
																			BgL_okzf3zf3_1462 =
																				BGL_MVALUES_VAL(BgL_tmpz00_6214);
																		}
																		if (CBOOL(BgL_okzf3zf3_1462))
																			{
																				obj_t BgL_bdz00_6222;
																				obj_t BgL_blz00_6221;
																				obj_t BgL_tdz00_6220;
																				obj_t BgL_tlz00_6219;

																				BgL_tlz00_6219 = BgL_tlz00_1449;
																				BgL_tdz00_6220 = BgL_tdz00_1460;
																				BgL_blz00_6221 = BgL_blz00_1450;
																				BgL_bdz00_6222 = BgL_bdz00_1461;
																				BgL_bdz00_1503 = BgL_bdz00_6222;
																				BgL_blz00_1502 = BgL_blz00_6221;
																				BgL_tdz00_1501 = BgL_tdz00_6220;
																				BgL_tlz00_1500 = BgL_tlz00_6219;
																				goto
																					BgL_zc3z04anonymousza31521ze3z87_1504;
																			}
																		else
																			{	/* Unsafe/gunzip.scm 758 */
																				BgL_statez00_1287 = BFALSE;
																			}
																	}
																}
															}
														else
															{	/* Unsafe/gunzip.scm 753 */
																BgL_statez00_1287 = BFALSE;
															}
													}
												}
											}
											break;
										default:
											{	/* Unsafe/gunzip.scm 869 */
												obj_t BgL_arg1420z00_1313;

												{	/* Unsafe/gunzip.scm 869 */
													obj_t BgL_list1421z00_1314;

													BgL_list1421z00_1314 =
														MAKE_YOUNG_PAIR(BINT(BgL_tz00_1286), BNIL);
													BgL_arg1420z00_1313 =
														BGl_formatz00zz__r4_output_6_10_3z00
														(BGl_string2860z00zz__gunza7ipza7,
														BgL_list1421z00_1314);
												}
												{	/* Unsafe/gunzip.scm 328 */
													BgL_z62iozd2parsezd2errorz62_bglt BgL_arg1401z00_4002;

													{	/* Unsafe/gunzip.scm 328 */
														BgL_z62iozd2parsezd2errorz62_bglt
															BgL_new1076z00_4003;
														{	/* Unsafe/gunzip.scm 328 */
															BgL_z62iozd2parsezd2errorz62_bglt
																BgL_new1075z00_4004;
															BgL_new1075z00_4004 =
																((BgL_z62iozd2parsezd2errorz62_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_z62iozd2parsezd2errorz62_bgl))));
															{	/* Unsafe/gunzip.scm 328 */
																long BgL_arg1405z00_4005;

																{	/* Unsafe/gunzip.scm 328 */
																	long BgL_res2316z00_4006;

																	BgL_res2316z00_4006 =
																		BGL_CLASS_INDEX
																		(BGl_z62iozd2parsezd2errorz62zz__objectz00);
																	BgL_arg1405z00_4005 = BgL_res2316z00_4006;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1075z00_4004),
																	BgL_arg1405z00_4005);
															}
															BgL_new1076z00_4003 = BgL_new1075z00_4004;
														}
														((((BgL_z62exceptionz62_bglt) COBJECT(
																		((BgL_z62exceptionz62_bglt)
																			BgL_new1076z00_4003)))->BgL_fnamez00) =
															((obj_t) BFALSE), BUNSPEC);
														((((BgL_z62exceptionz62_bglt)
																	COBJECT(((BgL_z62exceptionz62_bglt)
																			BgL_new1076z00_4003)))->BgL_locationz00) =
															((obj_t) BFALSE), BUNSPEC);
														{
															obj_t BgL_auxz00_6234;

															{	/* Unsafe/gunzip.scm 328 */
																obj_t BgL_arg1402z00_4010;

																{	/* Unsafe/gunzip.scm 328 */
																	obj_t BgL_arg1404z00_4011;

																	{	/* Unsafe/gunzip.scm 328 */
																		obj_t BgL_res2317z00_4012;

																		{	/* Unsafe/gunzip.scm 328 */
																			obj_t BgL_classz00_4013;

																			BgL_classz00_4013 =
																				BGl_z62iozd2parsezd2errorz62zz__objectz00;
																			BgL_res2317z00_4012 =
																				BGL_CLASS_ALL_FIELDS(BgL_classz00_4013);
																		}
																		BgL_arg1404z00_4011 = BgL_res2317z00_4012;
																	}
																	BgL_arg1402z00_4010 =
																		VECTOR_REF(BgL_arg1404z00_4011, ((long) 2));
																}
																BgL_auxz00_6234 =
																	BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																	(BgL_arg1402z00_4010);
															}
															((((BgL_z62exceptionz62_bglt) COBJECT(
																			((BgL_z62exceptionz62_bglt)
																				BgL_new1076z00_4003)))->BgL_stackz00) =
																((obj_t) BgL_auxz00_6234), BUNSPEC);
														}
														((((BgL_z62errorz62_bglt) COBJECT(
																		((BgL_z62errorz62_bglt)
																			BgL_new1076z00_4003)))->BgL_procz00) =
															((obj_t) BGl_string2858z00zz__gunza7ipza7),
															BUNSPEC);
														((((BgL_z62errorz62_bglt)
																	COBJECT(((BgL_z62errorz62_bglt)
																			BgL_new1076z00_4003)))->BgL_msgz00) =
															((obj_t) BgL_arg1420z00_1313), BUNSPEC);
														((((BgL_z62errorz62_bglt)
																	COBJECT(((BgL_z62errorz62_bglt)
																			BgL_new1076z00_4003)))->BgL_objz00) =
															((obj_t) BgL_inputzd2portzd2_4913), BUNSPEC);
														BgL_arg1401z00_4002 = BgL_new1076z00_4003;
													}
													BgL_statez00_1287 =
														BGl_raisez00zz__errorz00(
														((obj_t) BgL_arg1401z00_4002));
								}}}}
								{	/* Unsafe/gunzip.scm 864 */
									obj_t BgL_valz00_1288;
									obj_t BgL_kontz00_1289;

									{	/* Unsafe/gunzip.scm 871 */
										int BgL_tmpz00_6249;

										BgL_tmpz00_6249 = (int) (((long) 1));
										BgL_valz00_1288 = BGL_MVALUES_VAL(BgL_tmpz00_6249);
									}
									{	/* Unsafe/gunzip.scm 871 */
										int BgL_tmpz00_6252;

										BgL_tmpz00_6252 = (int) (((long) 2));
										BgL_kontz00_1289 = BGL_MVALUES_VAL(BgL_tmpz00_6252);
									}
									BgL_statez00_1257 =
										BGl_z62loop2795z62zz__gunza7ipza7(BgL_ez00_1285,
										BgL_statez00_1287, BgL_valz00_1288, BgL_kontz00_1289);
					}}}}
					{	/* Unsafe/gunzip.scm 896 */
						obj_t BgL_ez00_1258;
						obj_t BgL_rz00_1259;

						{	/* Unsafe/gunzip.scm 897 */
							int BgL_tmpz00_6256;

							BgL_tmpz00_6256 = (int) (((long) 1));
							BgL_ez00_1258 = BGL_MVALUES_VAL(BgL_tmpz00_6256);
						}
						{	/* Unsafe/gunzip.scm 897 */
							int BgL_tmpz00_6259;

							BgL_tmpz00_6259 = (int) (((long) 2));
							BgL_rz00_1259 = BGL_MVALUES_VAL(BgL_tmpz00_6259);
						}
						return
							BGl_z62laapz62zz__gunza7ipza7(((long) 0), BgL_hz00_1254,
							BgL_wpz00_4909, BgL_inputzd2portzd2_4913, BgL_bkz00_4912,
							BgL_bbz00_4911, BgL_slidez00_4910, BgL_wsiza7eza7_4908,
							BgL_statez00_1257, BgL_ez00_1258, BgL_rz00_1259);
		}}}}

	}



/* set-lit~0 */
	bool_t BGl_setzd2litze70z35zz__gunza7ipza7(obj_t BgL_llz00_5238,
		obj_t BgL_iz00_5237, obj_t BgL_inputzd2portzd2_5236, long BgL_nz00_5235,
		long BgL_jz00_1379, obj_t BgL_lz00_1380)
	{
		{	/* Unsafe/gunzip.scm 806 */
			{	/* Unsafe/gunzip.scm 807 */
				bool_t BgL_test3041z00_6263;

				{	/* Unsafe/gunzip.scm 807 */
					long BgL_tmpz00_6264;

					{	/* Unsafe/gunzip.scm 807 */
						long BgL_za71za7_3891;

						BgL_za71za7_3891 = (long) CINT(CELL_REF(BgL_iz00_5237));
						BgL_tmpz00_6264 = (BgL_za71za7_3891 + BgL_jz00_1379);
					}
					BgL_test3041z00_6263 = (BgL_tmpz00_6264 > BgL_nz00_5235);
				}
				if (BgL_test3041z00_6263)
					{	/* Unsafe/gunzip.scm 810 */
						obj_t BgL_arg1459z00_1384;

						{	/* Unsafe/gunzip.scm 810 */
							obj_t BgL_list1460z00_1385;

							BgL_list1460z00_1385 = MAKE_YOUNG_PAIR(BINT(BgL_nz00_5235), BNIL);
							BgL_arg1459z00_1384 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string2878z00zz__gunza7ipza7, BgL_list1460z00_1385);
						}
						{	/* Unsafe/gunzip.scm 328 */
							BgL_z62iozd2parsezd2errorz62_bglt BgL_arg1401z00_3897;

							{	/* Unsafe/gunzip.scm 328 */
								BgL_z62iozd2parsezd2errorz62_bglt BgL_new1076z00_3898;

								{	/* Unsafe/gunzip.scm 328 */
									BgL_z62iozd2parsezd2errorz62_bglt BgL_new1075z00_3899;

									BgL_new1075z00_3899 =
										((BgL_z62iozd2parsezd2errorz62_bglt)
										BOBJECT(GC_MALLOC(sizeof(struct
													BgL_z62iozd2parsezd2errorz62_bgl))));
									{	/* Unsafe/gunzip.scm 328 */
										long BgL_arg1405z00_3900;

										{	/* Unsafe/gunzip.scm 328 */
											long BgL_res2316z00_3901;

											BgL_res2316z00_3901 =
												BGL_CLASS_INDEX
												(BGl_z62iozd2parsezd2errorz62zz__objectz00);
											BgL_arg1405z00_3900 = BgL_res2316z00_3901;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1075z00_3899),
											BgL_arg1405z00_3900);
									}
									BgL_new1076z00_3898 = BgL_new1075z00_3899;
								}
								((((BgL_z62exceptionz62_bglt) COBJECT(
												((BgL_z62exceptionz62_bglt) BgL_new1076z00_3898)))->
										BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
								((((BgL_z62exceptionz62_bglt)
											COBJECT(((BgL_z62exceptionz62_bglt)
													BgL_new1076z00_3898)))->BgL_locationz00) =
									((obj_t) BFALSE), BUNSPEC);
								{
									obj_t BgL_auxz00_6279;

									{	/* Unsafe/gunzip.scm 328 */
										obj_t BgL_arg1402z00_3905;

										{	/* Unsafe/gunzip.scm 328 */
											obj_t BgL_arg1404z00_3906;

											{	/* Unsafe/gunzip.scm 328 */
												obj_t BgL_res2317z00_3907;

												{	/* Unsafe/gunzip.scm 328 */
													obj_t BgL_classz00_3908;

													BgL_classz00_3908 =
														BGl_z62iozd2parsezd2errorz62zz__objectz00;
													BgL_res2317z00_3907 =
														BGL_CLASS_ALL_FIELDS(BgL_classz00_3908);
												}
												BgL_arg1404z00_3906 = BgL_res2317z00_3907;
											}
											BgL_arg1402z00_3905 =
												VECTOR_REF(BgL_arg1404z00_3906, ((long) 2));
										}
										BgL_auxz00_6279 =
											BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
											(BgL_arg1402z00_3905);
									}
									((((BgL_z62exceptionz62_bglt) COBJECT(
													((BgL_z62exceptionz62_bglt) BgL_new1076z00_3898)))->
											BgL_stackz00) = ((obj_t) BgL_auxz00_6279), BUNSPEC);
								}
								((((BgL_z62errorz62_bglt) COBJECT(
												((BgL_z62errorz62_bglt) BgL_new1076z00_3898)))->
										BgL_procz00) =
									((obj_t) BGl_string2858z00zz__gunza7ipza7), BUNSPEC);
								((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
													BgL_new1076z00_3898)))->BgL_msgz00) =
									((obj_t) BgL_arg1459z00_1384), BUNSPEC);
								((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
													BgL_new1076z00_3898)))->BgL_objz00) =
									((obj_t) BgL_inputzd2portzd2_5236), BUNSPEC);
								BgL_arg1401z00_3897 = BgL_new1076z00_3898;
							}
							BGl_raisez00zz__errorz00(((obj_t) BgL_arg1401z00_3897));
					}}
				else
					{	/* Unsafe/gunzip.scm 807 */
						BFALSE;
					}
			}
			{
				long BgL_jz00_1388;

				BgL_jz00_1388 = BgL_jz00_1379;
			BgL_zc3z04anonymousza31462ze3z87_1389:
				if ((BgL_jz00_1388 == ((long) 0)))
					{	/* Unsafe/gunzip.scm 813 */
						return ((bool_t) 0);
					}
				else
					{	/* Unsafe/gunzip.scm 813 */
						{	/* Unsafe/gunzip.scm 814 */
							long BgL_kz00_3913;

							BgL_kz00_3913 = (long) CINT(CELL_REF(BgL_iz00_5237));
							VECTOR_SET(BgL_llz00_5238, BgL_kz00_3913, BgL_lz00_1380);
						}
						{	/* Unsafe/gunzip.scm 815 */
							obj_t BgL_auxz00_5239;

							BgL_auxz00_5239 =
								ADDFX(CELL_REF(BgL_iz00_5237), BINT(((long) 1)));
							CELL_SET(BgL_iz00_5237, BgL_auxz00_5239);
						}
						{
							long BgL_jz00_6299;

							BgL_jz00_6299 = (BgL_jz00_1388 - ((long) 1));
							BgL_jz00_1388 = BgL_jz00_6299;
							goto BgL_zc3z04anonymousza31462ze3z87_1389;
						}
					}
			}
		}

	}



/* huft-build~0 */
	obj_t BGl_huftzd2buildze70z35zz__gunza7ipza7(obj_t BgL_inputzd2portzd2_5240,
		obj_t BgL_bz00_1621, long BgL_nz00_1622, long BgL_sz00_1623,
		obj_t BgL_dz00_1624, obj_t BgL_ez00_1625, long BgL_mz00_1626,
		bool_t BgL_incompzd2okpzd2_1627)
	{
		{	/* Unsafe/gunzip.scm 387 */
			{	/* Unsafe/gunzip.scm 387 */
				long BgL_finalzd2yzd2_1629;
				obj_t BgL_tzd2resultzd2_1630;

				BgL_finalzd2yzd2_1629 = ((long) 0);
				BgL_tzd2resultzd2_1630 = BFALSE;
				{	/* Unsafe/gunzip.scm 387 */
					obj_t BgL_cz00_1631;

					BgL_cz00_1631 =
						make_vector((((long) 16) + ((long) 1)), BINT(((long) 0)));
					{	/* Unsafe/gunzip.scm 388 */
						obj_t BgL_vz00_1632;

						BgL_vz00_1632 = make_vector(((long) 288), BUNSPEC);
						{	/* Unsafe/gunzip.scm 389 */
							obj_t BgL_xz00_1633;

							BgL_xz00_1633 = make_vector((((long) 16) + ((long) 1)), BUNSPEC);
							{
								long BgL_i1082z00_1635;

								BgL_i1082z00_1635 = ((long) 0);
							BgL_zc3z04anonymousza31595ze3z87_1636:
								if ((BgL_i1082z00_1635 < BgL_nz00_1622))
									{	/* Unsafe/gunzip.scm 394 */
										{	/* Unsafe/gunzip.scm 396 */
											obj_t BgL_za2pza2_1639;

											BgL_za2pza2_1639 =
												VECTOR_REF(BgL_bz00_1621, BgL_i1082z00_1635);
											{	/* Unsafe/gunzip.scm 397 */
												long BgL_arg1597z00_1640;

												{	/* Unsafe/gunzip.scm 397 */
													long BgL_arg1598z00_1641;

													{	/* Unsafe/gunzip.scm 397 */
														long BgL_kz00_3028;

														BgL_kz00_3028 = (long) CINT(BgL_za2pza2_1639);
														BgL_arg1598z00_1641 =
															(long) CINT(VECTOR_REF(BgL_cz00_1631,
																BgL_kz00_3028));
													}
													BgL_arg1597z00_1640 =
														(BgL_arg1598z00_1641 + ((long) 1));
												}
												VECTOR_SET(BgL_cz00_1631,
													(long) CINT(BgL_za2pza2_1639),
													BINT(BgL_arg1597z00_1640));
										}}
										{
											long BgL_i1082z00_6317;

											BgL_i1082z00_6317 = (BgL_i1082z00_1635 + ((long) 1));
											BgL_i1082z00_1635 = BgL_i1082z00_6317;
											goto BgL_zc3z04anonymousza31595ze3z87_1636;
										}
									}
								else
									{	/* Unsafe/gunzip.scm 394 */
										((bool_t) 0);
									}
							}
							if (
								((long) CINT(VECTOR_REF(BgL_cz00_1631,
											((long) 0))) == BgL_nz00_1622))
								{	/* Unsafe/gunzip.scm 399 */
									{	/* Unsafe/gunzip.scm 401 */
										int BgL_res2364z00_3039;

										{	/* Unsafe/gunzip.scm 401 */
											int BgL_tmpz00_6323;

											BgL_tmpz00_6323 = (int) (((long) 3));
											BgL_res2364z00_3039 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6323);
										} BgL_res2364z00_3039;
									}
									{	/* Unsafe/gunzip.scm 401 */
										obj_t BgL_auxz00_6328;
										int BgL_tmpz00_6326;

										BgL_auxz00_6328 = BINT(((long) 0));
										BgL_tmpz00_6326 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_6326, BgL_auxz00_6328);
									}
									{	/* Unsafe/gunzip.scm 401 */
										int BgL_tmpz00_6331;

										BgL_tmpz00_6331 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_6331, BFALSE);
									}
									return BFALSE;
								}
							else
								{	/* Unsafe/gunzip.scm 403 */
									long BgL_jz00_1649;

									{
										long BgL_jz00_3050;

										BgL_jz00_3050 = ((long) 1);
									BgL_loopz00_3049:
										if ((BgL_jz00_3050 > ((long) 16)))
											{	/* Unsafe/gunzip.scm 405 */
												BgL_jz00_1649 = BgL_jz00_3050;
											}
										else
											{	/* Unsafe/gunzip.scm 405 */
												if (
													((long) CINT(VECTOR_REF(BgL_cz00_1631,
																BgL_jz00_3050)) > ((long) 0)))
													{	/* Unsafe/gunzip.scm 406 */
														BgL_jz00_1649 = BgL_jz00_3050;
													}
												else
													{
														long BgL_jz00_6340;

														BgL_jz00_6340 = (BgL_jz00_3050 + ((long) 1));
														BgL_jz00_3050 = BgL_jz00_6340;
														goto BgL_loopz00_3049;
													}
											}
									}
									{	/* Unsafe/gunzip.scm 408 */
										long BgL_iz00_1651;

										{
											long BgL_iz00_1827;

											BgL_iz00_1827 = ((long) 16);
										BgL_zc3z04anonymousza31703ze3z87_1828:
											if ((BgL_iz00_1827 == ((long) 0)))
												{	/* Unsafe/gunzip.scm 411 */
													BgL_iz00_1651 = ((long) 0);
												}
											else
												{	/* Unsafe/gunzip.scm 411 */
													if (
														((long) CINT(VECTOR_REF(BgL_cz00_1631,
																	BgL_iz00_1827)) > ((long) 0)))
														{	/* Unsafe/gunzip.scm 412 */
															BgL_iz00_1651 = BgL_iz00_1827;
														}
													else
														{
															long BgL_iz00_6348;

															BgL_iz00_6348 = (BgL_iz00_1827 - ((long) 1));
															BgL_iz00_1827 = BgL_iz00_6348;
															goto BgL_zc3z04anonymousza31703ze3z87_1828;
														}
												}
										}
										{	/* Unsafe/gunzip.scm 414 */
											long BgL_lz00_1653;

											{	/* Unsafe/gunzip.scm 415 */
												long BgL_az00_1819;

												if ((BgL_mz00_1626 > BgL_jz00_1649))
													{	/* Unsafe/gunzip.scm 415 */
														BgL_az00_1819 = BgL_mz00_1626;
													}
												else
													{	/* Unsafe/gunzip.scm 415 */
														BgL_az00_1819 = BgL_jz00_1649;
													}
												if ((BgL_az00_1819 < BgL_iz00_1651))
													{	/* Unsafe/gunzip.scm 415 */
														BgL_lz00_1653 = BgL_az00_1819;
													}
												else
													{	/* Unsafe/gunzip.scm 415 */
														BgL_lz00_1653 = BgL_iz00_1651;
													}
											}
											{	/* Unsafe/gunzip.scm 416 */

												{	/* Unsafe/gunzip.scm 419 */
													obj_t BgL_y0z00_1655;

													{	/* Unsafe/gunzip.scm 419 */
														long BgL_g1085z00_1660;

														BgL_g1085z00_1660 =
															(((long) 1) << (int) (BgL_jz00_1649));
														{
															long BgL_yz00_1662;
															long BgL_jz00_1663;

															BgL_yz00_1662 = BgL_g1085z00_1660;
															BgL_jz00_1663 = BgL_jz00_1649;
														BgL_zc3z04anonymousza31608ze3z87_1664:
															if ((BgL_jz00_1663 >= BgL_iz00_1651))
																{	/* Unsafe/gunzip.scm 421 */
																	BgL_y0z00_1655 = BINT(BgL_yz00_1662);
																}
															else
																{	/* Unsafe/gunzip.scm 423 */
																	long BgL_y2z00_1666;

																	BgL_y2z00_1666 =
																		(BgL_yz00_1662 -
																		(long) CINT(VECTOR_REF(BgL_cz00_1631,
																				BgL_jz00_1663)));
																	if ((BgL_y2z00_1666 < ((long) 0)))
																		{	/* Unsafe/gunzip.scm 328 */
																			BgL_z62iozd2parsezd2errorz62_bglt
																				BgL_arg1401z00_3091;
																			{	/* Unsafe/gunzip.scm 328 */
																				BgL_z62iozd2parsezd2errorz62_bglt
																					BgL_new1076z00_3092;
																				{	/* Unsafe/gunzip.scm 328 */
																					BgL_z62iozd2parsezd2errorz62_bglt
																						BgL_new1075z00_3093;
																					BgL_new1075z00_3093 =
																						((BgL_z62iozd2parsezd2errorz62_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_z62iozd2parsezd2errorz62_bgl))));
																					{	/* Unsafe/gunzip.scm 328 */
																						long BgL_arg1405z00_3094;

																						{	/* Unsafe/gunzip.scm 328 */
																							long BgL_res2316z00_3095;

																							BgL_res2316z00_3095 =
																								BGL_CLASS_INDEX
																								(BGl_z62iozd2parsezd2errorz62zz__objectz00);
																							BgL_arg1405z00_3094 =
																								BgL_res2316z00_3095;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1075z00_3093),
																							BgL_arg1405z00_3094);
																					}
																					BgL_new1076z00_3092 =
																						BgL_new1075z00_3093;
																				}
																				((((BgL_z62exceptionz62_bglt) COBJECT(
																								((BgL_z62exceptionz62_bglt)
																									BgL_new1076z00_3092)))->
																						BgL_fnamez00) =
																					((obj_t) BFALSE), BUNSPEC);
																				((((BgL_z62exceptionz62_bglt)
																							COBJECT((
																									(BgL_z62exceptionz62_bglt)
																									BgL_new1076z00_3092)))->
																						BgL_locationz00) =
																					((obj_t) BFALSE), BUNSPEC);
																				{
																					obj_t BgL_auxz00_6372;

																					{	/* Unsafe/gunzip.scm 328 */
																						obj_t BgL_arg1402z00_3099;

																						{	/* Unsafe/gunzip.scm 328 */
																							obj_t BgL_arg1404z00_3100;

																							{	/* Unsafe/gunzip.scm 328 */
																								obj_t BgL_res2317z00_3101;

																								{	/* Unsafe/gunzip.scm 328 */
																									obj_t BgL_classz00_3102;

																									BgL_classz00_3102 =
																										BGl_z62iozd2parsezd2errorz62zz__objectz00;
																									BgL_res2317z00_3101 =
																										BGL_CLASS_ALL_FIELDS
																										(BgL_classz00_3102);
																								}
																								BgL_arg1404z00_3100 =
																									BgL_res2317z00_3101;
																							}
																							BgL_arg1402z00_3099 =
																								VECTOR_REF(BgL_arg1404z00_3100,
																								((long) 2));
																						}
																						BgL_auxz00_6372 =
																							BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																							(BgL_arg1402z00_3099);
																					}
																					((((BgL_z62exceptionz62_bglt) COBJECT(
																									((BgL_z62exceptionz62_bglt)
																										BgL_new1076z00_3092)))->
																							BgL_stackz00) =
																						((obj_t) BgL_auxz00_6372), BUNSPEC);
																				}
																				((((BgL_z62errorz62_bglt) COBJECT(
																								((BgL_z62errorz62_bglt)
																									BgL_new1076z00_3092)))->
																						BgL_procz00) =
																					((obj_t)
																						BGl_string2858z00zz__gunza7ipza7),
																					BUNSPEC);
																				((((BgL_z62errorz62_bglt)
																							COBJECT(((BgL_z62errorz62_bglt)
																									BgL_new1076z00_3092)))->
																						BgL_msgz00) =
																					((obj_t)
																						BGl_string2879z00zz__gunza7ipza7),
																					BUNSPEC);
																				((((BgL_z62errorz62_bglt)
																							COBJECT(((BgL_z62errorz62_bglt)
																									BgL_new1076z00_3092)))->
																						BgL_objz00) =
																					((obj_t) BgL_inputzd2portzd2_5240),
																					BUNSPEC);
																				BgL_arg1401z00_3091 =
																					BgL_new1076z00_3092;
																			}
																			BgL_y0z00_1655 =
																				BGl_raisez00zz__errorz00(
																				((obj_t) BgL_arg1401z00_3091));
																		}
																	else
																		{
																			long BgL_jz00_6388;
																			long BgL_yz00_6386;

																			BgL_yz00_6386 =
																				(BgL_y2z00_1666 * ((long) 2));
																			BgL_jz00_6388 =
																				(BgL_jz00_1663 + ((long) 1));
																			BgL_jz00_1663 = BgL_jz00_6388;
																			BgL_yz00_1662 = BgL_yz00_6386;
																			goto
																				BgL_zc3z04anonymousza31608ze3z87_1664;
																		}
																}
														}
													}
													BgL_finalzd2yzd2_1629 =
														(
														(long) CINT(BgL_y0z00_1655) -
														(long) CINT(VECTOR_REF(BgL_cz00_1631,
																BgL_iz00_1651)));
													if ((BgL_finalzd2yzd2_1629 < ((long) 0)))
														{	/* Unsafe/gunzip.scm 328 */
															BgL_z62iozd2parsezd2errorz62_bglt
																BgL_arg1401z00_3115;
															{	/* Unsafe/gunzip.scm 328 */
																BgL_z62iozd2parsezd2errorz62_bglt
																	BgL_new1076z00_3116;
																{	/* Unsafe/gunzip.scm 328 */
																	BgL_z62iozd2parsezd2errorz62_bglt
																		BgL_new1075z00_3117;
																	BgL_new1075z00_3117 =
																		((BgL_z62iozd2parsezd2errorz62_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_z62iozd2parsezd2errorz62_bgl))));
																	{	/* Unsafe/gunzip.scm 328 */
																		long BgL_arg1405z00_3118;

																		{	/* Unsafe/gunzip.scm 328 */
																			long BgL_res2316z00_3119;

																			BgL_res2316z00_3119 =
																				BGL_CLASS_INDEX
																				(BGl_z62iozd2parsezd2errorz62zz__objectz00);
																			BgL_arg1405z00_3118 = BgL_res2316z00_3119;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1075z00_3117),
																			BgL_arg1405z00_3118);
																	}
																	BgL_new1076z00_3116 = BgL_new1075z00_3117;
																}
																((((BgL_z62exceptionz62_bglt) COBJECT(
																				((BgL_z62exceptionz62_bglt)
																					BgL_new1076z00_3116)))->
																		BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
																((((BgL_z62exceptionz62_bglt)
																			COBJECT(((BgL_z62exceptionz62_bglt)
																					BgL_new1076z00_3116)))->
																		BgL_locationz00) =
																	((obj_t) BFALSE), BUNSPEC);
																{
																	obj_t BgL_auxz00_6404;

																	{	/* Unsafe/gunzip.scm 328 */
																		obj_t BgL_arg1402z00_3123;

																		{	/* Unsafe/gunzip.scm 328 */
																			obj_t BgL_arg1404z00_3124;

																			{	/* Unsafe/gunzip.scm 328 */
																				obj_t BgL_res2317z00_3125;

																				{	/* Unsafe/gunzip.scm 328 */
																					obj_t BgL_classz00_3126;

																					BgL_classz00_3126 =
																						BGl_z62iozd2parsezd2errorz62zz__objectz00;
																					BgL_res2317z00_3125 =
																						BGL_CLASS_ALL_FIELDS
																						(BgL_classz00_3126);
																				}
																				BgL_arg1404z00_3124 =
																					BgL_res2317z00_3125;
																			}
																			BgL_arg1402z00_3123 =
																				VECTOR_REF(BgL_arg1404z00_3124,
																				((long) 2));
																		}
																		BgL_auxz00_6404 =
																			BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																			(BgL_arg1402z00_3123);
																	}
																	((((BgL_z62exceptionz62_bglt) COBJECT(
																					((BgL_z62exceptionz62_bglt)
																						BgL_new1076z00_3116)))->
																			BgL_stackz00) =
																		((obj_t) BgL_auxz00_6404), BUNSPEC);
																}
																((((BgL_z62errorz62_bglt) COBJECT(
																				((BgL_z62errorz62_bglt)
																					BgL_new1076z00_3116)))->BgL_procz00) =
																	((obj_t) BGl_string2858z00zz__gunza7ipza7),
																	BUNSPEC);
																((((BgL_z62errorz62_bglt)
																			COBJECT(((BgL_z62errorz62_bglt)
																					BgL_new1076z00_3116)))->BgL_msgz00) =
																	((obj_t) BGl_string2880z00zz__gunza7ipza7),
																	BUNSPEC);
																((((BgL_z62errorz62_bglt)
																			COBJECT(((BgL_z62errorz62_bglt)
																					BgL_new1076z00_3116)))->BgL_objz00) =
																	((obj_t) BgL_inputzd2portzd2_5240), BUNSPEC);
																BgL_arg1401z00_3115 = BgL_new1076z00_3116;
															}
															BGl_raisez00zz__errorz00(
																((obj_t) BgL_arg1401z00_3115));
														}
													else
														{	/* Unsafe/gunzip.scm 431 */
															BFALSE;
														}
													{	/* Unsafe/gunzip.scm 435 */
														long BgL_arg1606z00_1658;

														{	/* Unsafe/gunzip.scm 435 */
															long BgL_arg1607z00_1659;

															BgL_arg1607z00_1659 =
																(long) CINT(VECTOR_REF(BgL_cz00_1631,
																	BgL_iz00_1651));
															BgL_arg1606z00_1658 =
																(BgL_arg1607z00_1659 + BgL_finalzd2yzd2_1629);
														}
														VECTOR_SET(BgL_cz00_1631, BgL_iz00_1651,
															BINT(BgL_arg1606z00_1658));
												}}
												VECTOR_SET(BgL_xz00_1633, ((long) 1), BINT(((long) 0)));
												{	/* Unsafe/gunzip.scm 439 */
													long BgL_jz00_1672;

													{	/* Unsafe/gunzip.scm 439 */
														long BgL_g1086z00_1804;

														BgL_g1086z00_1804 = (BgL_iz00_1651 - ((long) 1));
														{
															long BgL_iz00_3189;
															long BgL_xzd2poszd2_3190;
															long BgL_czd2poszd2_3191;
															long BgL_jz00_3192;

															BgL_iz00_3189 = BgL_g1086z00_1804;
															BgL_xzd2poszd2_3190 = ((long) 2);
															BgL_czd2poszd2_3191 = ((long) 1);
															BgL_jz00_3192 = ((long) 0);
														BgL_loopz00_3188:
															if ((BgL_iz00_3189 == ((long) 0)))
																{	/* Unsafe/gunzip.scm 443 */
																	BgL_jz00_1672 = BgL_jz00_3192;
																}
															else
																{	/* Unsafe/gunzip.scm 445 */
																	long BgL_vz00_3201;

																	BgL_vz00_3201 =
																		(long) CINT(VECTOR_REF(BgL_cz00_1631,
																			BgL_czd2poszd2_3191));
																	{	/* Unsafe/gunzip.scm 446 */
																		long BgL_arg1696z00_3202;

																		BgL_arg1696z00_3202 =
																			(BgL_jz00_3192 + BgL_vz00_3201);
																		VECTOR_SET(BgL_xz00_1633,
																			BgL_xzd2poszd2_3190,
																			BINT(BgL_arg1696z00_3202));
																	}
																	{
																		long BgL_jz00_6439;
																		long BgL_czd2poszd2_6437;
																		long BgL_xzd2poszd2_6435;
																		long BgL_iz00_6433;

																		BgL_iz00_6433 =
																			(BgL_iz00_3189 - ((long) 1));
																		BgL_xzd2poszd2_6435 =
																			(BgL_xzd2poszd2_3190 + ((long) 1));
																		BgL_czd2poszd2_6437 =
																			(BgL_czd2poszd2_3191 + ((long) 1));
																		BgL_jz00_6439 =
																			(BgL_jz00_3192 + BgL_vz00_3201);
																		BgL_jz00_3192 = BgL_jz00_6439;
																		BgL_czd2poszd2_3191 = BgL_czd2poszd2_6437;
																		BgL_xzd2poszd2_3190 = BgL_xzd2poszd2_6435;
																		BgL_iz00_3189 = BgL_iz00_6433;
																		goto BgL_loopz00_3188;
																	}
																}
														}
													}
													{
														long BgL_iz00_3245;
														long BgL_bzd2poszd2_3246;

														BgL_iz00_3245 = ((long) 0);
														BgL_bzd2poszd2_3246 = ((long) 0);
													BgL_loopz00_3244:
														{	/* Unsafe/gunzip.scm 455 */
															obj_t BgL_jz00_3247;

															BgL_jz00_3247 =
																VECTOR_REF(BgL_bz00_1621, BgL_bzd2poszd2_3246);
															if (((long) CINT(BgL_jz00_3247) == ((long) 0)))
																{	/* Unsafe/gunzip.scm 456 */
																	BFALSE;
																}
															else
																{	/* Unsafe/gunzip.scm 457 */
																	obj_t BgL_xjz00_3253;

																	BgL_xjz00_3253 =
																		VECTOR_REF(BgL_xz00_1633,
																		(long) CINT(BgL_jz00_3247));
																	{	/* Unsafe/gunzip.scm 458 */
																		long BgL_arg1616z00_3256;

																		BgL_arg1616z00_3256 =
																			(((long) 1) +
																			(long) CINT(BgL_xjz00_3253));
																		VECTOR_SET(BgL_xz00_1633,
																			(long) CINT(BgL_jz00_3247),
																			BINT(BgL_arg1616z00_3256));
																	}
																	VECTOR_SET(BgL_vz00_1632,
																		(long) CINT(BgL_xjz00_3253),
																		BINT(BgL_iz00_3245));
																}
															{	/* Unsafe/gunzip.scm 460 */
																long BgL_i2z00_3263;

																BgL_i2z00_3263 = (((long) 1) + BgL_iz00_3245);
																if ((BgL_i2z00_3263 < BgL_nz00_1622))
																	{
																		long BgL_bzd2poszd2_6459;
																		long BgL_iz00_6458;

																		BgL_iz00_6458 = BgL_i2z00_3263;
																		BgL_bzd2poszd2_6459 =
																			(((long) 1) + BgL_bzd2poszd2_3246);
																		BgL_bzd2poszd2_3246 = BgL_bzd2poszd2_6459;
																		BgL_iz00_3245 = BgL_iz00_6458;
																		goto BgL_loopz00_3244;
																	}
																else
																	{	/* Unsafe/gunzip.scm 461 */
																		((bool_t) 0);
																	}
															}
														}
													}
													VECTOR_SET(BgL_xz00_1633, ((long) 0),
														BINT(((long) 0)));
													{	/* Unsafe/gunzip.scm 467 */
														long BgL_vzd2poszd2_1685;
														long BgL_iz00_1686;
														long BgL_hz00_1687;
														long BgL_wz00_1688;
														obj_t BgL_uz00_1689;
														obj_t BgL_qz00_1690;
														long BgL_za7za7_1691;
														BgL_huftz00_bglt BgL_rz00_1692;

														BgL_vzd2poszd2_1685 = ((long) 0);
														BgL_iz00_1686 = ((long) 0);
														BgL_hz00_1687 = ((long) -1);
														BgL_wz00_1688 = NEG(BgL_lz00_1653);
														BgL_uz00_1689 = make_vector(((long) 16), BUNSPEC);
														BgL_qz00_1690 = BUNSPEC;
														BgL_za7za7_1691 = ((long) 0);
														{	/* Unsafe/gunzip.scm 474 */
															BgL_huftz00_bglt BgL_new1088z00_1801;

															{	/* Unsafe/gunzip.scm 474 */
																BgL_huftz00_bglt BgL_new1087z00_1802;

																BgL_new1087z00_1802 =
																	((BgL_huftz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_huftz00_bgl))));
																{	/* Unsafe/gunzip.scm 474 */
																	long BgL_arg1693z00_1803;

																	{	/* Unsafe/gunzip.scm 474 */
																		long BgL_res2408z00_3278;

																		BgL_res2408z00_3278 =
																			BGL_CLASS_INDEX
																			(BGl_huftz00zz__gunza7ipza7);
																		BgL_arg1693z00_1803 = BgL_res2408z00_3278;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1087z00_1802),
																		BgL_arg1693z00_1803);
																}
																BgL_new1088z00_1801 = BgL_new1087z00_1802;
															}
															((((BgL_huftz00_bglt)
																		COBJECT(BgL_new1088z00_1801))->BgL_ez00) =
																((long) ((long) 0)), BUNSPEC);
															((((BgL_huftz00_bglt)
																		COBJECT(BgL_new1088z00_1801))->BgL_bz00) =
																((long) ((long) 0)), BUNSPEC);
															((((BgL_huftz00_bglt)
																		COBJECT(BgL_new1088z00_1801))->BgL_vz00) =
																((obj_t) BINT(((long) 0))), BUNSPEC);
															BgL_rz00_1692 = BgL_new1088z00_1801;
														}
														{
															long BgL_kz00_1694;

															BgL_kz00_1694 = BgL_jz00_1649;
														BgL_zc3z04anonymousza31619ze3z87_1695:
															if ((BgL_kz00_1694 <= BgL_iz00_1651))
																{	/* Unsafe/gunzip.scm 480 */
																	long BgL_az00_1697;

																	BgL_az00_1697 =
																		(long) CINT(VECTOR_REF(BgL_cz00_1631,
																			BgL_kz00_1694));
																	{	/* Unsafe/gunzip.scm 481 */
																		long BgL_g1089z00_1698;

																		BgL_g1089z00_1698 =
																			(BgL_az00_1697 - ((long) 1));
																		{
																			long BgL_az00_1700;

																			BgL_az00_1700 = BgL_g1089z00_1698;
																		BgL_zc3z04anonymousza31621ze3z87_1701:
																			if ((BgL_az00_1700 < ((long) 0)))
																				{	/* Unsafe/gunzip.scm 482 */
																					((bool_t) 0);
																				}
																			else
																				{	/* Unsafe/gunzip.scm 482 */
																					{

																					BgL_zc3z04anonymousza31623ze3z87_1704:
																						if (
																							(BgL_kz00_1694 >
																								(BgL_wz00_1688 +
																									BgL_lz00_1653)))
																							{	/* Unsafe/gunzip.scm 487 */
																								BgL_hz00_1687 =
																									(BgL_hz00_1687 + ((long) 1));
																								BgL_wz00_1688 =
																									(BgL_wz00_1688 +
																									BgL_lz00_1653);
																								{	/* Unsafe/gunzip.scm 493 */
																									long BgL_az00_1707;

																									BgL_az00_1707 =
																										(BgL_iz00_1651 -
																										BgL_wz00_1688);
																									if ((BgL_az00_1707 <
																											BgL_lz00_1653))
																										{	/* Unsafe/gunzip.scm 493 */
																											BgL_za7za7_1691 =
																												BgL_az00_1707;
																										}
																									else
																										{	/* Unsafe/gunzip.scm 493 */
																											BgL_za7za7_1691 =
																												BgL_lz00_1653;
																										}
																								}
																								{	/* Unsafe/gunzip.scm 494 */
																									long BgL_jz00_1710;

																									BgL_jz00_1710 =
																										(BgL_kz00_1694 -
																										BgL_wz00_1688);
																									{	/* Unsafe/gunzip.scm 494 */
																										long BgL_fz00_1711;

																										{	/* Unsafe/gunzip.scm 495 */
																											long BgL_yz00_3310;

																											BgL_yz00_3310 =
																												BgL_jz00_1710;
																											BgL_fz00_1711 =
																												(((long) 1) <<
																												(int) (BgL_yz00_3310));
																										}
																										{	/* Unsafe/gunzip.scm 495 */

																											if (
																												(BgL_fz00_1711 >
																													(BgL_az00_1700 +
																														((long) 1))))
																												{	/* Unsafe/gunzip.scm 496 */
																													BgL_fz00_1711 =
																														(BgL_fz00_1711 -
																														(BgL_az00_1700 +
																															((long) 1)));
																													{
																														long
																															BgL_czd2poszd2_1716;
																														BgL_czd2poszd2_1716
																															= BgL_kz00_1694;
																													BgL_zc3z04anonymousza31630ze3z87_1717:
																														BgL_jz00_1710 =
																															(BgL_jz00_1710 +
																															((long) 1));
																														if ((BgL_jz00_1710 <
																																BgL_za7za7_1691))
																															{	/* Unsafe/gunzip.scm 500 */
																																BgL_fz00_1711 =
																																	(BgL_fz00_1711
																																	* ((long) 2));
																																{	/* Unsafe/gunzip.scm 502 */
																																	long
																																		BgL_czd2poszd2_1719;
																																	BgL_czd2poszd2_1719
																																		=
																																		(BgL_czd2poszd2_1716
																																		+
																																		((long) 1));
																																	{	/* Unsafe/gunzip.scm 502 */
																																		long
																																			BgL_cvz00_1720;
																																		BgL_cvz00_1720
																																			=
																																			(long)
																																			CINT
																																			(VECTOR_REF
																																			(BgL_cz00_1631,
																																				BgL_czd2poszd2_1719));
																																		{	/* Unsafe/gunzip.scm 503 */

																																			if (
																																				(BgL_fz00_1711
																																					<=
																																					BgL_cvz00_1720))
																																				{	/* Unsafe/gunzip.scm 504 */
																																					((bool_t) 0);
																																				}
																																			else
																																				{	/* Unsafe/gunzip.scm 504 */
																																					BgL_fz00_1711
																																						=
																																						(BgL_fz00_1711
																																						-
																																						BgL_cvz00_1720);
																																					{
																																						long
																																							BgL_czd2poszd2_6506;
																																						BgL_czd2poszd2_6506
																																							=
																																							BgL_czd2poszd2_1719;
																																						BgL_czd2poszd2_1716
																																							=
																																							BgL_czd2poszd2_6506;
																																						goto
																																							BgL_zc3z04anonymousza31630ze3z87_1717;
																																					}
																																				}
																																		}
																																	}
																																}
																															}
																														else
																															{	/* Unsafe/gunzip.scm 500 */
																																((bool_t) 0);
																															}
																													}
																												}
																											else
																												{	/* Unsafe/gunzip.scm 496 */
																													((bool_t) 0);
																												}
																											{	/* Unsafe/gunzip.scm 507 */
																												long BgL_yz00_3339;

																												BgL_yz00_3339 =
																													BgL_jz00_1710;
																												BgL_za7za7_1691 =
																													(((long) 1) <<
																													(int)
																													(BgL_yz00_3339));
																											}
																											{	/* Unsafe/gunzip.scm 512 */
																												obj_t
																													BgL_zc3z04anonymousza31635ze3z87_4896;
																												{
																													int BgL_tmpz00_6509;

																													BgL_tmpz00_6509 =
																														(int) (((long) 0));
																													BgL_zc3z04anonymousza31635ze3z87_4896
																														=
																														MAKE_EL_PROCEDURE
																														(BgL_tmpz00_6509);
																												}
																												BgL_qz00_1690 =
																													BGl_buildzd2vectorzd2zz__gunza7ipza7
																													(BgL_za7za7_1691,
																													BgL_zc3z04anonymousza31635ze3z87_4896);
																											}
																											if (CBOOL
																												(BgL_tzd2resultzd2_1630))
																												{	/* Unsafe/gunzip.scm 517 */
																													BFALSE;
																												}
																											else
																												{	/* Unsafe/gunzip.scm 517 */
																													BgL_tzd2resultzd2_1630
																														= BgL_qz00_1690;
																												}
																											VECTOR_SET(BgL_uz00_1689,
																												BgL_hz00_1687,
																												BgL_qz00_1690);
																											if ((BgL_hz00_1687 ==
																													((long) 0)))
																												{	/* Unsafe/gunzip.scm 524 */
																													BFALSE;
																												}
																											else
																												{	/* Unsafe/gunzip.scm 524 */
																													VECTOR_SET
																														(BgL_xz00_1633,
																														BgL_hz00_1687,
																														BINT
																														(BgL_iz00_1686));
																													((((BgL_huftz00_bglt)
																																COBJECT
																																(BgL_rz00_1692))->
																															BgL_bz00) =
																														((long)
																															BgL_lz00_1653),
																														BUNSPEC);
																													{
																														long
																															BgL_auxz00_6521;
																														{	/* Unsafe/gunzip.scm 527 */
																															long
																																BgL_za71za7_3353;
																															BgL_za71za7_3353 =
																																BgL_jz00_1710;
																															BgL_auxz00_6521 =
																																(BgL_za71za7_3353
																																+ ((long) 16));
																														}
																														((((BgL_huftz00_bglt) COBJECT(BgL_rz00_1692))->BgL_ez00) = ((long) BgL_auxz00_6521), BUNSPEC);
																													}
																													((((BgL_huftz00_bglt)
																																COBJECT
																																(BgL_rz00_1692))->
																															BgL_vz00) =
																														((obj_t)
																															BgL_qz00_1690),
																														BUNSPEC);
																													{	/* Unsafe/gunzip.scm 529 */
																														long BgL_xz00_3358;

																														BgL_xz00_3358 =
																															BgL_iz00_1686;
																														{	/* Unsafe/gunzip.scm 529 */
																															int
																																BgL_tmpz00_6525;
																															{	/* Unsafe/gunzip.scm 529 */
																																long
																																	BgL_za71za7_3355;
																																BgL_za71za7_3355
																																	=
																																	BgL_wz00_1688;
																																BgL_tmpz00_6525
																																	=
																																	(int) (
																																	(BgL_za71za7_3355
																																		-
																																		BgL_lz00_1653));
																															}
																															BgL_jz00_1710 =
																																(BgL_xz00_3358
																																>>
																																BgL_tmpz00_6525);
																													}}
																													{	/* Unsafe/gunzip.scm 533 */
																														obj_t
																															BgL_arg1640z00_1736;
																														{	/* Unsafe/gunzip.scm 533 */
																															obj_t
																																BgL_arg1641z00_1737;
																															BgL_arg1641z00_1737
																																=
																																VECTOR_REF
																																(BgL_uz00_1689,
																																(BgL_hz00_1687 -
																																	((long) 1)));
																															{	/* Unsafe/gunzip.scm 532 */
																																long
																																	BgL_kz00_3366;
																																BgL_kz00_3366 =
																																	BgL_jz00_1710;
																																BgL_arg1640z00_1736
																																	=
																																	VECTOR_REF((
																																		(obj_t)
																																		BgL_arg1641z00_1737),
																																	BgL_kz00_3366);
																														}}
																														((((BgL_huftz00_bglt) COBJECT(((BgL_huftz00_bglt) BgL_arg1640z00_1736)))->BgL_ez00) = ((long) (((BgL_huftz00_bglt) COBJECT(BgL_rz00_1692))->BgL_ez00)), BUNSPEC);
																														((((BgL_huftz00_bglt) COBJECT(((BgL_huftz00_bglt) BgL_arg1640z00_1736)))->BgL_bz00) = ((long) (((BgL_huftz00_bglt) COBJECT(BgL_rz00_1692))->BgL_bz00)), BUNSPEC);
																														((((BgL_huftz00_bglt) COBJECT(((BgL_huftz00_bglt) BgL_arg1640z00_1736)))->BgL_vz00) = ((obj_t) (((BgL_huftz00_bglt) COBJECT(BgL_rz00_1692))->BgL_vz00)), BUNSPEC);
																								}}}}}
																								goto
																									BgL_zc3z04anonymousza31623ze3z87_1704;
																							}
																						else
																							{	/* Unsafe/gunzip.scm 487 */
																								((bool_t) 0);
																							}
																					}
																					{
																						long BgL_auxz00_6542;

																						{	/* Unsafe/gunzip.scm 538 */
																							long BgL_za72za7_3370;

																							BgL_za72za7_3370 = BgL_wz00_1688;
																							BgL_auxz00_6542 =
																								(BgL_kz00_1694 -
																								BgL_za72za7_3370);
																						}
																						((((BgL_huftz00_bglt)
																									COBJECT(BgL_rz00_1692))->
																								BgL_bz00) =
																							((long) BgL_auxz00_6542),
																							BUNSPEC);
																					}
																					if (
																						(BgL_vzd2poszd2_1685 >=
																							BgL_nz00_1622))
																						{	/* Unsafe/gunzip.scm 540 */
																							((((BgL_huftz00_bglt)
																										COBJECT(BgL_rz00_1692))->
																									BgL_ez00) =
																								((long) ((long) 99)), BUNSPEC);
																						}
																					else
																						{	/* Unsafe/gunzip.scm 542 */
																							obj_t BgL_vvz00_1744;

																							BgL_vvz00_1744 =
																								VECTOR_REF(BgL_vz00_1632,
																								BgL_vzd2poszd2_1685);
																							if (((long) CINT(BgL_vvz00_1744) <
																									BgL_sz00_1623))
																								{	/* Unsafe/gunzip.scm 543 */
																									{
																										long BgL_auxz00_6552;

																										if (
																											((long)
																												CINT(BgL_vvz00_1744) <
																												((long) 256)))
																											{	/* Unsafe/gunzip.scm 546 */
																												BgL_auxz00_6552 =
																													((long) 16);
																											}
																										else
																											{	/* Unsafe/gunzip.scm 546 */
																												BgL_auxz00_6552 =
																													((long) 15);
																											}
																										((((BgL_huftz00_bglt)
																													COBJECT
																													(BgL_rz00_1692))->
																												BgL_ez00) =
																											((long) BgL_auxz00_6552),
																											BUNSPEC);
																									}
																									((((BgL_huftz00_bglt)
																												COBJECT
																												(BgL_rz00_1692))->
																											BgL_vz00) =
																										((obj_t) BgL_vvz00_1744),
																										BUNSPEC);
																								}
																							else
																								{	/* Unsafe/gunzip.scm 543 */
																									{
																										long BgL_auxz00_6558;

																										{	/* Unsafe/gunzip.scm 550 */
																											long BgL_arg1648z00_1750;

																											BgL_arg1648z00_1750 =
																												(
																												(long)
																												CINT(BgL_vvz00_1744) -
																												BgL_sz00_1623);
																											BgL_auxz00_6558 =
																												(long)
																												CINT(VECTOR_REF
																												(BgL_ez00_1625,
																													BgL_arg1648z00_1750));
																										}
																										((((BgL_huftz00_bglt)
																													COBJECT
																													(BgL_rz00_1692))->
																												BgL_ez00) =
																											((long) BgL_auxz00_6558),
																											BUNSPEC);
																									}
																									{
																										obj_t BgL_auxz00_6564;

																										{	/* Unsafe/gunzip.scm 552 */
																											long BgL_arg1649z00_1752;

																											BgL_arg1649z00_1752 =
																												(
																												(long)
																												CINT(BgL_vvz00_1744) -
																												BgL_sz00_1623);
																											BgL_auxz00_6564 =
																												VECTOR_REF
																												(BgL_dz00_1624,
																												BgL_arg1649z00_1752);
																										}
																										((((BgL_huftz00_bglt)
																													COBJECT
																													(BgL_rz00_1692))->
																												BgL_vz00) =
																											((obj_t) BgL_auxz00_6564),
																											BUNSPEC);
																								}}
																							BgL_vzd2poszd2_1685 =
																								(BgL_vzd2poszd2_1685 +
																								((long) 1));
																						}
																					{	/* Unsafe/gunzip.scm 555 */
																						long BgL_fz00_1753;

																						{	/* Unsafe/gunzip.scm 555 */
																							int BgL_tmpz00_6570;

																							{	/* Unsafe/gunzip.scm 555 */
																								long BgL_za72za7_3395;

																								BgL_za72za7_3395 =
																									BgL_wz00_1688;
																								BgL_tmpz00_6570 =
																									(int) ((BgL_kz00_1694 -
																										BgL_za72za7_3395));
																							}
																							BgL_fz00_1753 =
																								(((long) 1) << BgL_tmpz00_6570);
																						}
																						{	/* Unsafe/gunzip.scm 556 */
																							long BgL_g1110z00_1754;

																							{	/* Unsafe/gunzip.scm 556 */
																								long BgL_xz00_3399;
																								long BgL_yz00_3400;

																								BgL_xz00_3399 = BgL_iz00_1686;
																								BgL_yz00_3400 = BgL_wz00_1688;
																								BgL_g1110z00_1754 =
																									(BgL_xz00_3399 >>
																									(int) (BgL_yz00_3400));
																							}
																							{
																								long BgL_jz00_1756;

																								BgL_jz00_1756 =
																									BgL_g1110z00_1754;
																							BgL_zc3z04anonymousza31650ze3z87_1757:
																								if (
																									(BgL_jz00_1756 <
																										BgL_za7za7_1691))
																									{	/* Unsafe/gunzip.scm 557 */
																										{	/* Unsafe/gunzip.scm 558 */
																											obj_t BgL_arg1652z00_1759;

																											BgL_arg1652z00_1759 =
																												VECTOR_REF
																												(BgL_qz00_1690,
																												BgL_jz00_1756);
																											((((BgL_huftz00_bglt)
																														COBJECT((
																																(BgL_huftz00_bglt)
																																BgL_arg1652z00_1759)))->
																													BgL_ez00) =
																												((long) ((
																															(BgL_huftz00_bglt)
																															COBJECT
																															(BgL_rz00_1692))->
																														BgL_ez00)),
																												BUNSPEC);
																											((((BgL_huftz00_bglt)
																														COBJECT((
																																(BgL_huftz00_bglt)
																																BgL_arg1652z00_1759)))->
																													BgL_bz00) =
																												((long) ((
																															(BgL_huftz00_bglt)
																															COBJECT
																															(BgL_rz00_1692))->
																														BgL_bz00)),
																												BUNSPEC);
																											((((BgL_huftz00_bglt)
																														COBJECT((
																																(BgL_huftz00_bglt)
																																BgL_arg1652z00_1759)))->
																													BgL_vz00) =
																												((obj_t) ((
																															(BgL_huftz00_bglt)
																															COBJECT
																															(BgL_rz00_1692))->
																														BgL_vz00)),
																												BUNSPEC);
																										}
																										{
																											long BgL_jz00_6588;

																											BgL_jz00_6588 =
																												(BgL_jz00_1756 +
																												BgL_fz00_1753);
																											BgL_jz00_1756 =
																												BgL_jz00_6588;
																											goto
																												BgL_zc3z04anonymousza31650ze3z87_1757;
																										}
																									}
																								else
																									{	/* Unsafe/gunzip.scm 557 */
																										((bool_t) 0);
																									}
																							}
																						}
																					}
																					{	/* Unsafe/gunzip.scm 561 */
																						long BgL_g1111z00_1763;

																						BgL_g1111z00_1763 =
																							(((long) 1) <<
																							(int) (
																								(BgL_kz00_1694 - ((long) 1))));
																						{
																							long BgL_jz00_1765;

																							BgL_jz00_1765 = BgL_g1111z00_1763;
																						BgL_zc3z04anonymousza31657ze3z87_1766:
																							{	/* Unsafe/gunzip.scm 562 */
																								bool_t BgL_test3070z00_6593;

																								{	/* Unsafe/gunzip.scm 562 */
																									obj_t BgL_auxz00_6594;

																									{	/* Unsafe/gunzip.scm 562 */
																										long BgL_xz00_3416;

																										BgL_xz00_3416 =
																											BgL_iz00_1686;
																										BgL_auxz00_6594 =
																											BINT((BgL_xz00_3416 &
																												BgL_jz00_1765));
																									}
																									BgL_test3070z00_6593 =
																										BGl_positivezf3zf3zz__r4_numbers_6_5z00
																										(BgL_auxz00_6594);
																								}
																								if (BgL_test3070z00_6593)
																									{	/* Unsafe/gunzip.scm 562 */
																										BgL_iz00_1686 =
																											(BgL_iz00_1686 ^
																											BgL_jz00_1765);
																										{
																											long BgL_jz00_6599;

																											BgL_jz00_6599 =
																												(BgL_jz00_1765 >>
																												(int) (((long) 1)));
																											BgL_jz00_1765 =
																												BgL_jz00_6599;
																											goto
																												BgL_zc3z04anonymousza31657ze3z87_1766;
																										}
																									}
																								else
																									{	/* Unsafe/gunzip.scm 562 */
																										BgL_iz00_1686 =
																											(BgL_iz00_1686 ^
																											BgL_jz00_1765);
																									}
																							}
																						}
																					}
																					{

																					BgL_zc3z04anonymousza31663ze3z87_1774:
																						{	/* Unsafe/gunzip.scm 569 */
																							bool_t BgL_test3071z00_6603;

																							{	/* Unsafe/gunzip.scm 569 */
																								obj_t BgL_arg1672z00_1780;
																								long BgL_arg1675z00_1781;

																								BgL_arg1672z00_1780 =
																									VECTOR_REF(BgL_xz00_1633,
																									BgL_hz00_1687);
																								{	/* Unsafe/gunzip.scm 571 */
																									long BgL_arg1683z00_1782;

																									{	/* Unsafe/gunzip.scm 571 */
																										long BgL_tmpz00_6605;

																										{	/* Unsafe/gunzip.scm 571 */
																											long BgL_yz00_3429;

																											BgL_yz00_3429 =
																												BgL_wz00_1688;
																											BgL_tmpz00_6605 =
																												(((long) 1) <<
																												(int) (BgL_yz00_3429));
																										}
																										BgL_arg1683z00_1782 =
																											(BgL_tmpz00_6605 -
																											((long) 1));
																									}
																									BgL_arg1675z00_1781 =
																										(BgL_iz00_1686 &
																										BgL_arg1683z00_1782);
																								}
																								BgL_test3071z00_6603 =
																									(
																									(long)
																									CINT(BgL_arg1672z00_1780) ==
																									BgL_arg1675z00_1781);
																							}
																							if (BgL_test3071z00_6603)
																								{	/* Unsafe/gunzip.scm 569 */
																									((bool_t) 0);
																								}
																							else
																								{	/* Unsafe/gunzip.scm 569 */
																									BgL_hz00_1687 =
																										(BgL_hz00_1687 -
																										((long) 1));
																									BgL_wz00_1688 =
																										(BgL_wz00_1688 -
																										BgL_lz00_1653);
																									goto
																										BgL_zc3z04anonymousza31663ze3z87_1774;
																								}
																						}
																					}
																					{
																						long BgL_az00_6614;

																						BgL_az00_6614 =
																							(BgL_az00_1700 - ((long) 1));
																						BgL_az00_1700 = BgL_az00_6614;
																						goto
																							BgL_zc3z04anonymousza31621ze3z87_1701;
																					}
																				}
																		}
																	}
																	{
																		long BgL_kz00_6616;

																		BgL_kz00_6616 =
																			(BgL_kz00_1694 + ((long) 1));
																		BgL_kz00_1694 = BgL_kz00_6616;
																		goto BgL_zc3z04anonymousza31619ze3z87_1695;
																	}
																}
															else
																{	/* Unsafe/gunzip.scm 479 */
																	((bool_t) 0);
																}
														}
														{	/* Unsafe/gunzip.scm 581 */
															bool_t BgL_okpz00_1789;

															if (BgL_incompzd2okpzd2_1627)
																{	/* Unsafe/gunzip.scm 581 */
																	BgL_okpz00_1789 = BgL_incompzd2okpzd2_1627;
																}
															else
																{	/* Unsafe/gunzip.scm 582 */
																	bool_t BgL_test3073z00_6619;

																	if ((((long) 0) == BgL_finalzd2yzd2_1629))
																		{	/* Unsafe/gunzip.scm 582 */
																			BgL_test3073z00_6619 = ((bool_t) 0);
																		}
																	else
																		{	/* Unsafe/gunzip.scm 582 */
																			if ((BgL_iz00_1651 == ((long) 1)))
																				{	/* Unsafe/gunzip.scm 583 */
																					BgL_test3073z00_6619 = ((bool_t) 0);
																				}
																			else
																				{	/* Unsafe/gunzip.scm 583 */
																					BgL_test3073z00_6619 = ((bool_t) 1);
																				}
																		}
																	if (BgL_test3073z00_6619)
																		{	/* Unsafe/gunzip.scm 582 */
																			BgL_okpz00_1789 = ((bool_t) 0);
																		}
																	else
																		{	/* Unsafe/gunzip.scm 582 */
																			BgL_okpz00_1789 = ((bool_t) 1);
																		}
																}
															if (BgL_okpz00_1789)
																{	/* Unsafe/gunzip.scm 584 */
																	BFALSE;
																}
															else
																{	/* Unsafe/gunzip.scm 328 */
																	BgL_z62iozd2parsezd2errorz62_bglt
																		BgL_arg1401z00_3452;
																	{	/* Unsafe/gunzip.scm 328 */
																		BgL_z62iozd2parsezd2errorz62_bglt
																			BgL_new1076z00_3453;
																		{	/* Unsafe/gunzip.scm 328 */
																			BgL_z62iozd2parsezd2errorz62_bglt
																				BgL_new1075z00_3454;
																			BgL_new1075z00_3454 =
																				((BgL_z62iozd2parsezd2errorz62_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_z62iozd2parsezd2errorz62_bgl))));
																			{	/* Unsafe/gunzip.scm 328 */
																				long BgL_arg1405z00_3455;

																				{	/* Unsafe/gunzip.scm 328 */
																					long BgL_res2316z00_3456;

																					BgL_res2316z00_3456 =
																						BGL_CLASS_INDEX
																						(BGl_z62iozd2parsezd2errorz62zz__objectz00);
																					BgL_arg1405z00_3455 =
																						BgL_res2316z00_3456;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1075z00_3454),
																					BgL_arg1405z00_3455);
																			}
																			BgL_new1076z00_3453 = BgL_new1075z00_3454;
																		}
																		((((BgL_z62exceptionz62_bglt) COBJECT(
																						((BgL_z62exceptionz62_bglt)
																							BgL_new1076z00_3453)))->
																				BgL_fnamez00) =
																			((obj_t) BFALSE), BUNSPEC);
																		((((BgL_z62exceptionz62_bglt)
																					COBJECT(((BgL_z62exceptionz62_bglt)
																							BgL_new1076z00_3453)))->
																				BgL_locationz00) =
																			((obj_t) BFALSE), BUNSPEC);
																		{
																			obj_t BgL_auxz00_6633;

																			{	/* Unsafe/gunzip.scm 328 */
																				obj_t BgL_arg1402z00_3460;

																				{	/* Unsafe/gunzip.scm 328 */
																					obj_t BgL_arg1404z00_3461;

																					{	/* Unsafe/gunzip.scm 328 */
																						obj_t BgL_res2317z00_3462;

																						{	/* Unsafe/gunzip.scm 328 */
																							obj_t BgL_classz00_3463;

																							BgL_classz00_3463 =
																								BGl_z62iozd2parsezd2errorz62zz__objectz00;
																							BgL_res2317z00_3462 =
																								BGL_CLASS_ALL_FIELDS
																								(BgL_classz00_3463);
																						}
																						BgL_arg1404z00_3461 =
																							BgL_res2317z00_3462;
																					}
																					BgL_arg1402z00_3460 =
																						VECTOR_REF(BgL_arg1404z00_3461,
																						((long) 2));
																				}
																				BgL_auxz00_6633 =
																					BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																					(BgL_arg1402z00_3460);
																			}
																			((((BgL_z62exceptionz62_bglt) COBJECT(
																							((BgL_z62exceptionz62_bglt)
																								BgL_new1076z00_3453)))->
																					BgL_stackz00) =
																				((obj_t) BgL_auxz00_6633), BUNSPEC);
																		}
																		((((BgL_z62errorz62_bglt) COBJECT(
																						((BgL_z62errorz62_bglt)
																							BgL_new1076z00_3453)))->
																				BgL_procz00) =
																			((obj_t)
																				BGl_string2870z00zz__gunza7ipza7),
																			BUNSPEC);
																		((((BgL_z62errorz62_bglt)
																					COBJECT(((BgL_z62errorz62_bglt)
																							BgL_new1076z00_3453)))->
																				BgL_msgz00) =
																			((obj_t)
																				BGl_string2881z00zz__gunza7ipza7),
																			BUNSPEC);
																		((((BgL_z62errorz62_bglt)
																					COBJECT(((BgL_z62errorz62_bglt)
																							BgL_new1076z00_3453)))->
																				BgL_objz00) =
																			((obj_t) BgL_inputzd2portzd2_5240),
																			BUNSPEC);
																		BgL_arg1401z00_3452 = BgL_new1076z00_3453;
																	}
																	BGl_raisez00zz__errorz00(
																		((obj_t) BgL_arg1401z00_3452));
																}
															{	/* Unsafe/gunzip.scm 588 */
																obj_t BgL_val0_1218z00_1790;

																BgL_val0_1218z00_1790 = BgL_tzd2resultzd2_1630;
																{	/* Unsafe/gunzip.scm 588 */
																	int BgL_res2465z00_3465;

																	{	/* Unsafe/gunzip.scm 588 */
																		int BgL_tmpz00_6647;

																		BgL_tmpz00_6647 = (int) (((long) 3));
																		BgL_res2465z00_3465 =
																			BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6647);
																	} BgL_res2465z00_3465;
																}
																{	/* Unsafe/gunzip.scm 588 */
																	obj_t BgL_auxz00_6652;
																	int BgL_tmpz00_6650;

																	BgL_auxz00_6652 = BINT(BgL_lz00_1653);
																	BgL_tmpz00_6650 = (int) (((long) 1));
																	BGL_MVALUES_VAL_SET(BgL_tmpz00_6650,
																		BgL_auxz00_6652);
																}
																{	/* Unsafe/gunzip.scm 588 */
																	obj_t BgL_auxz00_6657;
																	int BgL_tmpz00_6655;

																	BgL_auxz00_6657 = BBOOL(BgL_okpz00_1789);
																	BgL_tmpz00_6655 = (int) (((long) 2));
																	BGL_MVALUES_VAL_SET(BgL_tmpz00_6655,
																		BgL_auxz00_6657);
																}
																return BgL_val0_1218z00_1790;
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



/* &loop2795 */
	obj_t BGl_z62loop2795z62zz__gunza7ipza7(long BgL_ez00_4948,
		obj_t BgL_statez00_1291, obj_t BgL_valz00_1292, obj_t BgL_kontz00_1293)
	{
		{	/* Unsafe/gunzip.scm 871 */
			if ((BgL_statez00_1291 == BGl_symbol2850z00zz__gunza7ipza7))
				{	/* Unsafe/gunzip.scm 876 */
					obj_t BgL_val0_1239z00_1297;
					obj_t BgL_val1_1240z00_1298;

					BgL_val0_1239z00_1297 = BGl_symbol2850z00zz__gunza7ipza7;
					BgL_val1_1240z00_1298 = BINT(BgL_ez00_4948);
					{	/* Unsafe/gunzip.scm 876 */
						int BgL_res2613z00_4017;

						{	/* Unsafe/gunzip.scm 876 */
							int BgL_tmpz00_6663;

							BgL_tmpz00_6663 = (int) (((long) 3));
							BgL_res2613z00_4017 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6663);
						} BgL_res2613z00_4017;
					}
					{	/* Unsafe/gunzip.scm 876 */
						int BgL_tmpz00_6666;

						BgL_tmpz00_6666 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_6666, BgL_val1_1240z00_1298);
					}
					{	/* Unsafe/gunzip.scm 876 */
						int BgL_tmpz00_6669;

						BgL_tmpz00_6669 = (int) (((long) 2));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_6669, BgL_valz00_1292);
					}
					return BgL_val0_1239z00_1297;
				}
			else
				{	/* Unsafe/gunzip.scm 874 */
					if ((BgL_statez00_1291 == BGl_symbol2854z00zz__gunza7ipza7))
						{	/* Unsafe/gunzip.scm 878 */
							obj_t BgL_val0_1242z00_1301;

							BgL_val0_1242z00_1301 = BGl_symbol2854z00zz__gunza7ipza7;
							{	/* Unsafe/gunzip.scm 881 */
								obj_t BgL_zc3z04anonymousza31418ze3z87_4894;

								BgL_zc3z04anonymousza31418ze3z87_4894 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31418ze3ze5zz__gunza7ipza7,
									(int) (((long) 0)), (int) (((long) 2)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31418ze3z87_4894,
									(int) (((long) 0)), BINT(BgL_ez00_4948));
								PROCEDURE_SET(BgL_zc3z04anonymousza31418ze3z87_4894,
									(int) (((long) 1)), BgL_kontz00_1293);
								{	/* Unsafe/gunzip.scm 878 */
									int BgL_res2615z00_4020;

									{	/* Unsafe/gunzip.scm 878 */
										int BgL_tmpz00_6682;

										BgL_tmpz00_6682 = (int) (((long) 3));
										BgL_res2615z00_4020 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6682);
									} BgL_res2615z00_4020;
								}
								{	/* Unsafe/gunzip.scm 878 */
									int BgL_tmpz00_6685;

									BgL_tmpz00_6685 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_6685, BgL_valz00_1292);
								}
								{	/* Unsafe/gunzip.scm 878 */
									int BgL_tmpz00_6688;

									BgL_tmpz00_6688 = (int) (((long) 2));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_6688,
										BgL_zc3z04anonymousza31418ze3z87_4894);
								}
								return BgL_val0_1242z00_1301;
							}
						}
					else
						{	/* Unsafe/gunzip.scm 328 */
							BgL_z62iozd2parsezd2errorz62_bglt BgL_arg1401z00_4021;

							{	/* Unsafe/gunzip.scm 328 */
								BgL_z62iozd2parsezd2errorz62_bglt BgL_new1076z00_4022;

								{	/* Unsafe/gunzip.scm 328 */
									BgL_z62iozd2parsezd2errorz62_bglt BgL_new1075z00_4023;

									BgL_new1075z00_4023 =
										((BgL_z62iozd2parsezd2errorz62_bglt)
										BOBJECT(GC_MALLOC(sizeof(struct
													BgL_z62iozd2parsezd2errorz62_bgl))));
									{	/* Unsafe/gunzip.scm 328 */
										long BgL_arg1405z00_4024;

										{	/* Unsafe/gunzip.scm 328 */
											long BgL_res2316z00_4025;

											BgL_res2316z00_4025 =
												BGL_CLASS_INDEX
												(BGl_z62iozd2parsezd2errorz62zz__objectz00);
											BgL_arg1405z00_4024 = BgL_res2316z00_4025;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1075z00_4023),
											BgL_arg1405z00_4024);
									}
									BgL_new1076z00_4022 = BgL_new1075z00_4023;
								}
								((((BgL_z62exceptionz62_bglt) COBJECT(
												((BgL_z62exceptionz62_bglt) BgL_new1076z00_4022)))->
										BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
								((((BgL_z62exceptionz62_bglt)
											COBJECT(((BgL_z62exceptionz62_bglt)
													BgL_new1076z00_4022)))->BgL_locationz00) =
									((obj_t) BFALSE), BUNSPEC);
								{
									obj_t BgL_auxz00_6699;

									{	/* Unsafe/gunzip.scm 328 */
										obj_t BgL_arg1402z00_4029;

										{	/* Unsafe/gunzip.scm 328 */
											obj_t BgL_arg1404z00_4030;

											{	/* Unsafe/gunzip.scm 328 */
												obj_t BgL_res2317z00_4031;

												{	/* Unsafe/gunzip.scm 328 */
													obj_t BgL_classz00_4032;

													BgL_classz00_4032 =
														BGl_z62iozd2parsezd2errorz62zz__objectz00;
													BgL_res2317z00_4031 =
														BGL_CLASS_ALL_FIELDS(BgL_classz00_4032);
												}
												BgL_arg1404z00_4030 = BgL_res2317z00_4031;
											}
											BgL_arg1402z00_4029 =
												VECTOR_REF(BgL_arg1404z00_4030, ((long) 2));
										}
										BgL_auxz00_6699 =
											BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
											(BgL_arg1402z00_4029);
									}
									((((BgL_z62exceptionz62_bglt) COBJECT(
													((BgL_z62exceptionz62_bglt) BgL_new1076z00_4022)))->
											BgL_stackz00) = ((obj_t) BgL_auxz00_6699), BUNSPEC);
								}
								((((BgL_z62errorz62_bglt) COBJECT(
												((BgL_z62errorz62_bglt) BgL_new1076z00_4022)))->
										BgL_procz00) =
									((obj_t) BGl_string2858z00zz__gunza7ipza7), BUNSPEC);
								((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
													BgL_new1076z00_4022)))->BgL_msgz00) =
									((obj_t) BGl_string2859z00zz__gunza7ipza7), BUNSPEC);
								((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
													BgL_new1076z00_4022)))->BgL_objz00) =
									((obj_t) BgL_statez00_1291), BUNSPEC);
								BgL_arg1401z00_4021 = BgL_new1076z00_4022;
							}
							return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1401z00_4021));
						}
				}
		}

	}



/* &NEEDBITS */
	bool_t BGl_z62NEEDBITSz62zz__gunza7ipza7(obj_t BgL_bbz00_4951,
		obj_t BgL_bkz00_4950, obj_t BgL_inputzd2portzd2_4949, obj_t BgL_nz00_1865)
	{
		{	/* Unsafe/gunzip.scm 367 */
			{

				{

				BgL_zc3z04anonymousza31736ze3z87_1868:
					{	/* Unsafe/gunzip.scm 364 */
						bool_t BgL_test3079z00_6713;

						{	/* Unsafe/gunzip.scm 364 */
							long BgL_n1z00_2989;
							long BgL_n2z00_2990;

							BgL_n1z00_2989 = (long) CINT(CELL_REF(BgL_bkz00_4950));
							BgL_n2z00_2990 = (long) CINT(BgL_nz00_1865);
							BgL_test3079z00_6713 = (BgL_n1z00_2989 < BgL_n2z00_2990);
						}
						if (BgL_test3079z00_6713)
							{	/* Unsafe/gunzip.scm 364 */
								{	/* Unsafe/gunzip.scm 365 */
									obj_t BgL_auxz00_4952;

									{	/* Unsafe/gunzip.scm 365 */
										long BgL_arg1738z00_1870;

										{	/* Unsafe/gunzip.scm 365 */
											obj_t BgL_arg1739z00_1871;

											{
												obj_t BgL_iportz00_1877;

												BgL_iportz00_1877 = BgL_inputzd2portzd2_4949;
												{

													{	/* Unsafe/gunzip.scm 356 */
														long BgL_res2336z00_2941;

														{	/* Unsafe/gunzip.scm 356 */
															obj_t BgL_tmpz00_6717;

															BgL_tmpz00_6717 = ((obj_t) BgL_iportz00_1877);
															BgL_res2336z00_2941 =
																RGC_START_MATCH(BgL_tmpz00_6717);
														} BgL_res2336z00_2941;
													}
													{	/* Unsafe/gunzip.scm 356 */
														long BgL_matchz00_2044;

														{	/* Unsafe/gunzip.scm 356 */
															long BgL_arg1840z00_2048;
															long BgL_arg1841z00_2049;

															{	/* Unsafe/gunzip.scm 356 */
																long BgL_res2337z00_2943;

																{	/* Unsafe/gunzip.scm 356 */
																	obj_t BgL_tmpz00_6720;

																	BgL_tmpz00_6720 = ((obj_t) BgL_iportz00_1877);
																	BgL_res2337z00_2943 =
																		RGC_BUFFER_FORWARD(BgL_tmpz00_6720);
																}
																BgL_arg1840z00_2048 = BgL_res2337z00_2943;
															}
															{	/* Unsafe/gunzip.scm 356 */
																long BgL_res2338z00_2945;

																{	/* Unsafe/gunzip.scm 356 */
																	obj_t BgL_tmpz00_6723;

																	BgL_tmpz00_6723 = ((obj_t) BgL_iportz00_1877);
																	BgL_res2338z00_2945 =
																		RGC_BUFFER_BUFPOS(BgL_tmpz00_6723);
																}
																BgL_arg1841z00_2049 = BgL_res2338z00_2945;
															}
															{
																long BgL_forwardz00_2947;
																long BgL_bufposz00_2948;

																BgL_forwardz00_2947 = BgL_arg1840z00_2048;
																BgL_bufposz00_2948 = BgL_arg1841z00_2049;
															BgL_statezd20zd21077z00_2946:
																if ((BgL_forwardz00_2947 == BgL_bufposz00_2948))
																	{	/* Unsafe/gunzip.scm 356 */
																		bool_t BgL_test3081z00_6728;

																		{	/* Unsafe/gunzip.scm 356 */
																			bool_t BgL_res2340z00_2959;

																			BgL_res2340z00_2959 =
																				rgc_fill_buffer(
																				((obj_t) BgL_iportz00_1877));
																			BgL_test3081z00_6728 =
																				BgL_res2340z00_2959;
																		}
																		if (BgL_test3081z00_6728)
																			{	/* Unsafe/gunzip.scm 356 */
																				long BgL_arg1746z00_2951;
																				long BgL_arg1747z00_2952;

																				{	/* Unsafe/gunzip.scm 356 */
																					long BgL_res2341z00_2961;

																					{	/* Unsafe/gunzip.scm 356 */
																						obj_t BgL_tmpz00_6731;

																						BgL_tmpz00_6731 =
																							((obj_t) BgL_iportz00_1877);
																						BgL_res2341z00_2961 =
																							RGC_BUFFER_FORWARD
																							(BgL_tmpz00_6731);
																					}
																					BgL_arg1746z00_2951 =
																						BgL_res2341z00_2961;
																				}
																				{	/* Unsafe/gunzip.scm 356 */
																					long BgL_res2342z00_2963;

																					{	/* Unsafe/gunzip.scm 356 */
																						obj_t BgL_tmpz00_6734;

																						BgL_tmpz00_6734 =
																							((obj_t) BgL_iportz00_1877);
																						BgL_res2342z00_2963 =
																							RGC_BUFFER_BUFPOS
																							(BgL_tmpz00_6734);
																					}
																					BgL_arg1747z00_2952 =
																						BgL_res2342z00_2963;
																				}
																				{
																					long BgL_bufposz00_6738;
																					long BgL_forwardz00_6737;

																					BgL_forwardz00_6737 =
																						BgL_arg1746z00_2951;
																					BgL_bufposz00_6738 =
																						BgL_arg1747z00_2952;
																					BgL_bufposz00_2948 =
																						BgL_bufposz00_6738;
																					BgL_forwardz00_2947 =
																						BgL_forwardz00_6737;
																					goto BgL_statezd20zd21077z00_2946;
																				}
																			}
																		else
																			{	/* Unsafe/gunzip.scm 356 */
																				BgL_matchz00_2044 = ((long) 1);
																	}}
																else
																	{	/* Unsafe/gunzip.scm 356 */
																		int BgL_curz00_2953;

																		{	/* Unsafe/gunzip.scm 356 */
																			int BgL_res2343z00_2966;

																			{	/* Unsafe/gunzip.scm 356 */
																				obj_t BgL_tmpz00_6739;

																				BgL_tmpz00_6739 =
																					((obj_t) BgL_iportz00_1877);
																				BgL_res2343z00_2966 =
																					RGC_BUFFER_GET_CHAR(BgL_tmpz00_6739,
																					BgL_forwardz00_2947);
																			}
																			BgL_curz00_2953 = BgL_res2343z00_2966;
																		}
																		{	/* Unsafe/gunzip.scm 356 */

																			{	/* Unsafe/gunzip.scm 356 */
																				long BgL_arg1748z00_2954;

																				BgL_arg1748z00_2954 =
																					(((long) 1) + BgL_forwardz00_2947);
																				{	/* Unsafe/gunzip.scm 356 */
																					long BgL_newzd2matchzd2_2969;

																					{	/* Unsafe/gunzip.scm 356 */
																						long BgL_res2345z00_2972;

																						{	/* Unsafe/gunzip.scm 356 */
																							obj_t BgL_tmpz00_6743;

																							BgL_tmpz00_6743 =
																								((obj_t) BgL_iportz00_1877);
																							BgL_res2345z00_2972 =
																								RGC_STOP_MATCH(BgL_tmpz00_6743,
																								BgL_arg1748z00_2954);
																						} BgL_res2345z00_2972;
																					}
																					BgL_newzd2matchzd2_2969 = ((long) 0);
																					BgL_matchz00_2044 =
																						BgL_newzd2matchzd2_2969;
														}}}}}}
														{	/* Unsafe/gunzip.scm 356 */
															obj_t BgL_tmpz00_6746;

															BgL_tmpz00_6746 = ((obj_t) BgL_iportz00_1877);
															RGC_SET_FILEPOS(BgL_tmpz00_6746);
														}
														switch (BgL_matchz00_2044)
															{
															case ((long) 1):

																{	/* Unsafe/gunzip.scm 328 */
																	BgL_z62iozd2parsezd2errorz62_bglt
																		BgL_arg1401z00_2974;
																	{	/* Unsafe/gunzip.scm 328 */
																		BgL_z62iozd2parsezd2errorz62_bglt
																			BgL_new1076z00_2975;
																		{	/* Unsafe/gunzip.scm 328 */
																			BgL_z62iozd2parsezd2errorz62_bglt
																				BgL_new1075z00_2976;
																			BgL_new1075z00_2976 =
																				((BgL_z62iozd2parsezd2errorz62_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_z62iozd2parsezd2errorz62_bgl))));
																			{	/* Unsafe/gunzip.scm 328 */
																				long BgL_arg1405z00_2977;

																				{	/* Unsafe/gunzip.scm 328 */
																					long BgL_res2316z00_2978;

																					BgL_res2316z00_2978 =
																						BGL_CLASS_INDEX
																						(BGl_z62iozd2parsezd2errorz62zz__objectz00);
																					BgL_arg1405z00_2977 =
																						BgL_res2316z00_2978;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1075z00_2976),
																					BgL_arg1405z00_2977);
																			}
																			BgL_new1076z00_2975 = BgL_new1075z00_2976;
																		}
																		((((BgL_z62exceptionz62_bglt) COBJECT(
																						((BgL_z62exceptionz62_bglt)
																							BgL_new1076z00_2975)))->
																				BgL_fnamez00) =
																			((obj_t) BFALSE), BUNSPEC);
																		((((BgL_z62exceptionz62_bglt)
																					COBJECT(((BgL_z62exceptionz62_bglt)
																							BgL_new1076z00_2975)))->
																				BgL_locationz00) =
																			((obj_t) BFALSE), BUNSPEC);
																		{
																			obj_t BgL_auxz00_6757;

																			{	/* Unsafe/gunzip.scm 328 */
																				obj_t BgL_arg1402z00_2982;

																				{	/* Unsafe/gunzip.scm 328 */
																					obj_t BgL_arg1404z00_2983;

																					{	/* Unsafe/gunzip.scm 328 */
																						obj_t BgL_res2317z00_2984;

																						{	/* Unsafe/gunzip.scm 328 */
																							obj_t BgL_classz00_2985;

																							BgL_classz00_2985 =
																								BGl_z62iozd2parsezd2errorz62zz__objectz00;
																							BgL_res2317z00_2984 =
																								BGL_CLASS_ALL_FIELDS
																								(BgL_classz00_2985);
																						}
																						BgL_arg1404z00_2983 =
																							BgL_res2317z00_2984;
																					}
																					BgL_arg1402z00_2982 =
																						VECTOR_REF(BgL_arg1404z00_2983,
																						((long) 2));
																				}
																				BgL_auxz00_6757 =
																					BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																					(BgL_arg1402z00_2982);
																			}
																			((((BgL_z62exceptionz62_bglt) COBJECT(
																							((BgL_z62exceptionz62_bglt)
																								BgL_new1076z00_2975)))->
																					BgL_stackz00) =
																				((obj_t) BgL_auxz00_6757), BUNSPEC);
																		}
																		((((BgL_z62errorz62_bglt) COBJECT(
																						((BgL_z62errorz62_bglt)
																							BgL_new1076z00_2975)))->
																				BgL_procz00) =
																			((obj_t)
																				BGl_string2858z00zz__gunza7ipza7),
																			BUNSPEC);
																		((((BgL_z62errorz62_bglt)
																					COBJECT(((BgL_z62errorz62_bglt)
																							BgL_new1076z00_2975)))->
																				BgL_msgz00) =
																			((obj_t)
																				BGl_string2882z00zz__gunza7ipza7),
																			BUNSPEC);
																		((((BgL_z62errorz62_bglt)
																					COBJECT(((BgL_z62errorz62_bglt)
																							BgL_new1076z00_2975)))->
																				BgL_objz00) =
																			((obj_t) BgL_inputzd2portzd2_4949),
																			BUNSPEC);
																		BgL_arg1401z00_2974 = BgL_new1076z00_2975;
																	}
																	BgL_arg1739z00_1871 =
																		BGl_raisez00zz__errorz00(
																		((obj_t) BgL_arg1401z00_2974));
																} break;
															case ((long) 0):

																{	/* Unsafe/gunzip.scm 356 */
																	int BgL_res2346z00_2988;

																	{	/* Unsafe/gunzip.scm 356 */
																		obj_t BgL_tmpz00_6771;

																		BgL_tmpz00_6771 =
																			((obj_t) BgL_iportz00_1877);
																		BgL_res2346z00_2988 =
																			RGC_BUFFER_BYTE(BgL_tmpz00_6771);
																	}
																	BgL_arg1739z00_1871 =
																		BINT(BgL_res2346z00_2988);
																} break;
															default:
																BgL_arg1739z00_1871 =
																	BGl_errorz00zz__errorz00
																	(BGl_string2883z00zz__gunza7ipza7,
																	BGl_string2884z00zz__gunza7ipza7,
																	BINT(BgL_matchz00_2044));
															}
													}
												}
											}
											{	/* Unsafe/gunzip.scm 365 */
												long BgL_xz00_2992;
												long BgL_yz00_2993;

												BgL_xz00_2992 = (long) CINT(BgL_arg1739z00_1871);
												BgL_yz00_2993 = (long) CINT(CELL_REF(BgL_bkz00_4950));
												BgL_arg1738z00_1870 =
													(BgL_xz00_2992 << (int) (BgL_yz00_2993));
										}}
										BgL_auxz00_4952 =
											ADDFX(CELL_REF(BgL_bbz00_4951),
											BINT(BgL_arg1738z00_1870));
									}
									CELL_SET(BgL_bbz00_4951, BgL_auxz00_4952);
								}
								{	/* Unsafe/gunzip.scm 366 */
									obj_t BgL_auxz00_4953;

									BgL_auxz00_4953 =
										ADDFX(CELL_REF(BgL_bkz00_4950), BINT(((long) 8)));
									CELL_SET(BgL_bkz00_4950, BgL_auxz00_4953);
								}
								goto BgL_zc3z04anonymousza31736ze3z87_1868;
							}
						else
							{	/* Unsafe/gunzip.scm 364 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}

	}



/* &loop-inflate */
	obj_t BGl_z62loopzd2inflatezb0zz__gunza7ipza7(obj_t BgL_tdz00_4969,
		long BgL_mdz00_4968, obj_t BgL_bdz00_4967, obj_t BgL_tlz00_4966,
		long BgL_mlz00_4965, obj_t BgL_blz00_4964, obj_t BgL_bkz00_4963,
		obj_t BgL_bbz00_4962, obj_t BgL_tz00_4961, obj_t BgL_inputzd2portzd2_4960,
		obj_t BgL_slidez00_4959, obj_t BgL_ez00_4958, obj_t BgL_wpz00_4957,
		obj_t BgL_nz00_4956, obj_t BgL_dz00_4955, long BgL_wsiza7eza7_4954,
		obj_t BgL_retz00_1575)
	{
		{	/* Unsafe/gunzip.scm 703 */
		BGl_z62loopzd2inflatezb0zz__gunza7ipza7:
			{

				if (((long) CINT(BgL_retz00_1575) > ((long) 0)))
					{	/* Unsafe/gunzip.scm 660 */
						obj_t BgL_val0_1227z00_1578;

						BgL_val0_1227z00_1578 = BGl_symbol2854z00zz__gunza7ipza7;
						{	/* Unsafe/gunzip.scm 660 */
							obj_t BgL_zc3z04anonymousza31563ze3z87_4889;

							BgL_zc3z04anonymousza31563ze3z87_4889 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31563ze3ze5zz__gunza7ipza7,
								(int) (((long) 0)), (int) (((long) 16)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31563ze3z87_4889,
								(int) (((long) 0)), BINT(BgL_wsiza7eza7_4954));
							PROCEDURE_SET(BgL_zc3z04anonymousza31563ze3z87_4889,
								(int) (((long) 1)), ((obj_t) BgL_dz00_4955));
							PROCEDURE_SET(BgL_zc3z04anonymousza31563ze3z87_4889,
								(int) (((long) 2)), ((obj_t) BgL_nz00_4956));
							PROCEDURE_SET(BgL_zc3z04anonymousza31563ze3z87_4889,
								(int) (((long) 3)), ((obj_t) BgL_wpz00_4957));
							PROCEDURE_SET(BgL_zc3z04anonymousza31563ze3z87_4889,
								(int) (((long) 4)), ((obj_t) BgL_ez00_4958));
							PROCEDURE_SET(BgL_zc3z04anonymousza31563ze3z87_4889,
								(int) (((long) 5)), BgL_slidez00_4959);
							PROCEDURE_SET(BgL_zc3z04anonymousza31563ze3z87_4889,
								(int) (((long) 6)), BgL_inputzd2portzd2_4960);
							PROCEDURE_SET(BgL_zc3z04anonymousza31563ze3z87_4889,
								(int) (((long) 7)), ((obj_t) BgL_tz00_4961));
							PROCEDURE_SET(BgL_zc3z04anonymousza31563ze3z87_4889,
								(int) (((long) 8)), ((obj_t) BgL_bbz00_4962));
							PROCEDURE_SET(BgL_zc3z04anonymousza31563ze3z87_4889,
								(int) (((long) 9)), ((obj_t) BgL_bkz00_4963));
							PROCEDURE_SET(BgL_zc3z04anonymousza31563ze3z87_4889,
								(int) (((long) 10)), BgL_blz00_4964);
							PROCEDURE_SET(BgL_zc3z04anonymousza31563ze3z87_4889,
								(int) (((long) 11)), BINT(BgL_mlz00_4965));
							PROCEDURE_SET(BgL_zc3z04anonymousza31563ze3z87_4889,
								(int) (((long) 12)), BgL_tlz00_4966);
							PROCEDURE_SET(BgL_zc3z04anonymousza31563ze3z87_4889,
								(int) (((long) 13)), BgL_bdz00_4967);
							PROCEDURE_SET(BgL_zc3z04anonymousza31563ze3z87_4889,
								(int) (((long) 14)), BINT(BgL_mdz00_4968));
							PROCEDURE_SET(BgL_zc3z04anonymousza31563ze3z87_4889,
								(int) (((long) 15)), BgL_tdz00_4969);
							{	/* Unsafe/gunzip.scm 660 */
								int BgL_res2501z00_3576;

								{	/* Unsafe/gunzip.scm 660 */
									int BgL_tmpz00_6834;

									BgL_tmpz00_6834 = (int) (((long) 3));
									BgL_res2501z00_3576 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6834);
								} BgL_res2501z00_3576;
							}
							{	/* Unsafe/gunzip.scm 660 */
								int BgL_tmpz00_6837;

								BgL_tmpz00_6837 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_6837, BgL_retz00_1575);
							}
							{	/* Unsafe/gunzip.scm 660 */
								int BgL_tmpz00_6840;

								BgL_tmpz00_6840 = (int) (((long) 2));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_6840,
									BgL_zc3z04anonymousza31563ze3z87_4889);
							}
							return BgL_val0_1227z00_1578;
						}
					}
				else
					{	/* Unsafe/gunzip.scm 659 */
						BGl_z62NEEDBITSz62zz__gunza7ipza7(BgL_bbz00_4962, BgL_bkz00_4963,
							BgL_inputzd2portzd2_4960, BgL_blz00_4964);
						{	/* Unsafe/gunzip.scm 663 */
							obj_t BgL_auxz00_4970;

							{	/* Unsafe/gunzip.scm 663 */
								long BgL_arg1564z00_1583;

								{	/* Unsafe/gunzip.scm 663 */
									long BgL_xz00_3577;

									BgL_xz00_3577 = (long) CINT(CELL_REF(BgL_bbz00_4962));
									BgL_arg1564z00_1583 = (BgL_xz00_3577 & BgL_mlz00_4965);
								}
								BgL_auxz00_4970 =
									VECTOR_REF(((obj_t) BgL_tlz00_4966), BgL_arg1564z00_1583);
							}
							CELL_SET(BgL_tz00_4961, BgL_auxz00_4970);
						}
						{	/* Unsafe/gunzip.scm 664 */
							obj_t BgL_auxz00_4971;

							{	/* Unsafe/gunzip.scm 664 */
								BgL_huftz00_bglt BgL_i1119z00_1584;

								BgL_i1119z00_1584 =
									((BgL_huftz00_bglt)
									((BgL_huftz00_bglt) CELL_REF(BgL_tz00_4961)));
								BgL_auxz00_4971 =
									BINT(
									(((BgL_huftz00_bglt) COBJECT(BgL_i1119z00_1584))->BgL_ez00));
							}
							CELL_SET(BgL_ez00_4958, BgL_auxz00_4971);
						}
						{	/* Unsafe/gunzip.scm 665 */
							bool_t BgL_test3083z00_6852;

							{	/* Unsafe/gunzip.scm 665 */
								long BgL_n1z00_3582;

								BgL_n1z00_3582 = (long) CINT(CELL_REF(BgL_ez00_4958));
								BgL_test3083z00_6852 = (BgL_n1z00_3582 > ((long) 16));
							}
							if (BgL_test3083z00_6852)
								{	/* Unsafe/gunzip.scm 665 */
									BGl_jumpzd2tozd2nextze70ze7zz__gunza7ipza7(BgL_bkz00_4963,
										BgL_bbz00_4962, BgL_tz00_4961, BgL_inputzd2portzd2_4960,
										BgL_ez00_4958);
								}
							else
								{	/* Unsafe/gunzip.scm 665 */
									((bool_t) 0);
								}
						}
						{	/* Unsafe/gunzip.scm 666 */
							long BgL_arg1566z00_1586;

							{	/* Unsafe/gunzip.scm 666 */
								BgL_huftz00_bglt BgL_i1121z00_1587;

								BgL_i1121z00_1587 =
									((BgL_huftz00_bglt)
									((BgL_huftz00_bglt) CELL_REF(BgL_tz00_4961)));
								BgL_arg1566z00_1586 =
									(((BgL_huftz00_bglt) COBJECT(BgL_i1121z00_1587))->BgL_bz00);
							}
							{	/* Unsafe/gunzip.scm 370 */
								obj_t BgL_auxz00_4972;

								{	/* Unsafe/gunzip.scm 370 */
									long BgL_xz00_3584;

									BgL_xz00_3584 = (long) CINT(CELL_REF(BgL_bbz00_4962));
									BgL_auxz00_4972 =
										BINT((BgL_xz00_3584 >> (int) (BgL_arg1566z00_1586)));
								}
								CELL_SET(BgL_bbz00_4962, BgL_auxz00_4972);
							}
							{	/* Unsafe/gunzip.scm 371 */
								obj_t BgL_auxz00_4973;

								BgL_auxz00_4973 =
									SUBFX(CELL_REF(BgL_bkz00_4963), BINT(BgL_arg1566z00_1586));
								CELL_SET(BgL_bkz00_4963, BgL_auxz00_4973);
						}}
						{	/* Unsafe/gunzip.scm 667 */
							bool_t BgL_test3084z00_6865;

							{	/* Unsafe/gunzip.scm 667 */
								long BgL_n1z00_3590;

								BgL_n1z00_3590 = (long) CINT(CELL_REF(BgL_ez00_4958));
								BgL_test3084z00_6865 = (BgL_n1z00_3590 == ((long) 16));
							}
							if (BgL_test3084z00_6865)
								{	/* Unsafe/gunzip.scm 667 */
									{	/* Unsafe/gunzip.scm 670 */
										unsigned char BgL_arg1568z00_1589;

										{	/* Unsafe/gunzip.scm 670 */
											obj_t BgL_arg1569z00_1590;

											{	/* Unsafe/gunzip.scm 670 */
												BgL_huftz00_bglt BgL_i1123z00_1591;

												BgL_i1123z00_1591 =
													((BgL_huftz00_bglt)
													((BgL_huftz00_bglt) CELL_REF(BgL_tz00_4961)));
												BgL_arg1569z00_1590 =
													(((BgL_huftz00_bglt) COBJECT(BgL_i1123z00_1591))->
													BgL_vz00);
											}
											BgL_arg1568z00_1589 = ((long) CINT(BgL_arg1569z00_1590));
										}
										{	/* Unsafe/gunzip.scm 670 */
											long BgL_kz00_3595;

											BgL_kz00_3595 = (long) CINT(CELL_REF(BgL_wpz00_4957));
											{	/* Unsafe/gunzip.scm 670 */
												obj_t BgL_tmpz00_6874;

												BgL_tmpz00_6874 = ((obj_t) BgL_slidez00_4959);
												STRING_SET(BgL_tmpz00_6874, BgL_kz00_3595,
													BgL_arg1568z00_1589);
									}}}
									{	/* Unsafe/gunzip.scm 671 */
										obj_t BgL_auxz00_4974;

										BgL_auxz00_4974 =
											ADDFX(CELL_REF(BgL_wpz00_4957), BINT(((long) 1)));
										CELL_SET(BgL_wpz00_4957, BgL_auxz00_4974);
									}
									{	/* Unsafe/gunzip.scm 672 */
										obj_t BgL_arg1570z00_1592;

										BgL_arg1570z00_1592 =
											BGl_z62checkzd2flushzb0zz__gunza7ipza7
											(BgL_wsiza7eza7_4954, BgL_wpz00_4957);
										{
											obj_t BgL_retz00_6880;

											BgL_retz00_6880 = BgL_arg1570z00_1592;
											BgL_retz00_1575 = BgL_retz00_6880;
											goto BGl_z62loopzd2inflatezb0zz__gunza7ipza7;
										}
									}
								}
							else
								{	/* Unsafe/gunzip.scm 675 */
									bool_t BgL_test3085z00_6881;

									{	/* Unsafe/gunzip.scm 675 */
										long BgL_n1z00_3599;

										BgL_n1z00_3599 = (long) CINT(CELL_REF(BgL_ez00_4958));
										BgL_test3085z00_6881 = (BgL_n1z00_3599 == ((long) 15));
									}
									if (BgL_test3085z00_6881)
										{	/* Unsafe/gunzip.scm 676 */
											obj_t BgL_val0_1230z00_1594;

											BgL_val0_1230z00_1594 = BGl_symbol2850z00zz__gunza7ipza7;
											{	/* Unsafe/gunzip.scm 676 */
												int BgL_res2510z00_3601;

												{	/* Unsafe/gunzip.scm 676 */
													int BgL_tmpz00_6884;

													BgL_tmpz00_6884 = (int) (((long) 3));
													BgL_res2510z00_3601 =
														BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6884);
												} BgL_res2510z00_3601;
											}
											{	/* Unsafe/gunzip.scm 676 */
												int BgL_tmpz00_6887;

												BgL_tmpz00_6887 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_tmpz00_6887, BTRUE);
											}
											{	/* Unsafe/gunzip.scm 676 */
												int BgL_tmpz00_6890;

												BgL_tmpz00_6890 = (int) (((long) 2));
												BGL_MVALUES_VAL_SET(BgL_tmpz00_6890, BFALSE);
											}
											return BgL_val0_1230z00_1594;
										}
									else
										{	/* Unsafe/gunzip.scm 675 */
											BGl_z62NEEDBITSz62zz__gunza7ipza7(BgL_bbz00_4962,
												BgL_bkz00_4963, BgL_inputzd2portzd2_4960,
												CELL_REF(BgL_ez00_4958));
											{	/* Unsafe/gunzip.scm 680 */
												obj_t BgL_auxz00_4975;

												{	/* Unsafe/gunzip.scm 680 */
													obj_t BgL_arg1573z00_1597;
													long BgL_arg1574z00_1598;

													{	/* Unsafe/gunzip.scm 680 */
														BgL_huftz00_bglt BgL_i1125z00_1599;

														BgL_i1125z00_1599 =
															((BgL_huftz00_bglt)
															((BgL_huftz00_bglt) CELL_REF(BgL_tz00_4961)));
														BgL_arg1573z00_1597 =
															(((BgL_huftz00_bglt) COBJECT(BgL_i1125z00_1599))->
															BgL_vz00);
													}
													{	/* Unsafe/gunzip.scm 682 */
														long BgL_arg1575z00_1600;

														{	/* Unsafe/gunzip.scm 682 */
															obj_t BgL_arg1577z00_1601;

															BgL_arg1577z00_1601 =
																BGl_vector2875z00zz__gunza7ipza7;
															{	/* Unsafe/gunzip.scm 682 */
																long BgL_kz00_3603;

																BgL_kz00_3603 =
																	(long) CINT(CELL_REF(BgL_ez00_4958));
																BgL_arg1575z00_1600 =
																	(long) CINT(VECTOR_REF(BgL_arg1577z00_1601,
																		BgL_kz00_3603));
														}}
														{	/* Unsafe/gunzip.scm 681 */
															long BgL_xz00_3604;

															BgL_xz00_3604 =
																(long) CINT(CELL_REF(BgL_bbz00_4962));
															BgL_arg1574z00_1598 =
																(BgL_xz00_3604 & BgL_arg1575z00_1600);
													}}
													BgL_auxz00_4975 =
														ADDFX(BgL_arg1573z00_1597,
														BINT(BgL_arg1574z00_1598));
												}
												CELL_SET(BgL_nz00_4956, BgL_auxz00_4975);
											}
											{	/* Unsafe/gunzip.scm 683 */
												obj_t BgL_nz00_3610;

												BgL_nz00_3610 = CELL_REF(BgL_ez00_4958);
												{	/* Unsafe/gunzip.scm 370 */
													obj_t BgL_auxz00_4976;

													{	/* Unsafe/gunzip.scm 370 */
														long BgL_xz00_3611;
														long BgL_yz00_3612;

														BgL_xz00_3611 =
															(long) CINT(CELL_REF(BgL_bbz00_4962));
														BgL_yz00_3612 = (long) CINT(BgL_nz00_3610);
														BgL_auxz00_4976 =
															BINT((BgL_xz00_3611 >> (int) (BgL_yz00_3612)));
													}
													CELL_SET(BgL_bbz00_4962, BgL_auxz00_4976);
												}
												{	/* Unsafe/gunzip.scm 371 */
													obj_t BgL_auxz00_4977;

													BgL_auxz00_4977 =
														SUBFX(CELL_REF(BgL_bkz00_4963), BgL_nz00_3610);
													CELL_SET(BgL_bkz00_4963, BgL_auxz00_4977);
											}}
											BGl_z62NEEDBITSz62zz__gunza7ipza7(BgL_bbz00_4962,
												BgL_bkz00_4963, BgL_inputzd2portzd2_4960,
												BgL_bdz00_4967);
											{	/* Unsafe/gunzip.scm 687 */
												obj_t BgL_auxz00_4978;

												{	/* Unsafe/gunzip.scm 687 */
													long BgL_arg1578z00_1602;

													{	/* Unsafe/gunzip.scm 687 */
														long BgL_xz00_3617;

														BgL_xz00_3617 =
															(long) CINT(CELL_REF(BgL_bbz00_4962));
														BgL_arg1578z00_1602 =
															(BgL_xz00_3617 & BgL_mdz00_4968);
													}
													BgL_auxz00_4978 =
														VECTOR_REF(
														((obj_t) BgL_tdz00_4969), BgL_arg1578z00_1602);
												}
												CELL_SET(BgL_tz00_4961, BgL_auxz00_4978);
											}
											{	/* Unsafe/gunzip.scm 688 */
												obj_t BgL_auxz00_4979;

												{	/* Unsafe/gunzip.scm 688 */
													BgL_huftz00_bglt BgL_i1127z00_1603;

													BgL_i1127z00_1603 =
														((BgL_huftz00_bglt)
														((BgL_huftz00_bglt) CELL_REF(BgL_tz00_4961)));
													BgL_auxz00_4979 =
														BINT(
														(((BgL_huftz00_bglt) COBJECT(BgL_i1127z00_1603))->
															BgL_ez00));
												}
												CELL_SET(BgL_ez00_4958, BgL_auxz00_4979);
											}
											{	/* Unsafe/gunzip.scm 689 */
												bool_t BgL_test3086z00_6919;

												{	/* Unsafe/gunzip.scm 689 */
													long BgL_n1z00_3622;

													BgL_n1z00_3622 = (long) CINT(CELL_REF(BgL_ez00_4958));
													BgL_test3086z00_6919 = (BgL_n1z00_3622 > ((long) 16));
												}
												if (BgL_test3086z00_6919)
													{	/* Unsafe/gunzip.scm 689 */
														BGl_jumpzd2tozd2nextze70ze7zz__gunza7ipza7
															(BgL_bkz00_4963, BgL_bbz00_4962, BgL_tz00_4961,
															BgL_inputzd2portzd2_4960, BgL_ez00_4958);
													}
												else
													{	/* Unsafe/gunzip.scm 689 */
														((bool_t) 0);
													}
											}
											{	/* Unsafe/gunzip.scm 690 */
												long BgL_arg1580z00_1605;

												{	/* Unsafe/gunzip.scm 690 */
													BgL_huftz00_bglt BgL_i1129z00_1606;

													BgL_i1129z00_1606 =
														((BgL_huftz00_bglt)
														((BgL_huftz00_bglt) CELL_REF(BgL_tz00_4961)));
													BgL_arg1580z00_1605 =
														(((BgL_huftz00_bglt) COBJECT(BgL_i1129z00_1606))->
														BgL_bz00);
												}
												{	/* Unsafe/gunzip.scm 370 */
													obj_t BgL_auxz00_4980;

													{	/* Unsafe/gunzip.scm 370 */
														long BgL_xz00_3624;

														BgL_xz00_3624 =
															(long) CINT(CELL_REF(BgL_bbz00_4962));
														BgL_auxz00_4980 =
															BINT(
															(BgL_xz00_3624 >> (int) (BgL_arg1580z00_1605)));
													}
													CELL_SET(BgL_bbz00_4962, BgL_auxz00_4980);
												}
												{	/* Unsafe/gunzip.scm 371 */
													obj_t BgL_auxz00_4981;

													BgL_auxz00_4981 =
														SUBFX(CELL_REF(BgL_bkz00_4963),
														BINT(BgL_arg1580z00_1605));
													CELL_SET(BgL_bkz00_4963, BgL_auxz00_4981);
											}}
											BGl_z62NEEDBITSz62zz__gunza7ipza7(BgL_bbz00_4962,
												BgL_bkz00_4963, BgL_inputzd2portzd2_4960,
												CELL_REF(BgL_ez00_4958));
											{	/* Unsafe/gunzip.scm 693 */
												obj_t BgL_auxz00_4982;

												{	/* Unsafe/gunzip.scm 695 */
													long BgL_arg1582z00_1607;

													{	/* Unsafe/gunzip.scm 695 */
														long BgL_arg1583z00_1608;

														{	/* Unsafe/gunzip.scm 695 */
															obj_t BgL_arg1584z00_1609;
															long BgL_arg1587z00_1610;

															{	/* Unsafe/gunzip.scm 695 */
																BgL_huftz00_bglt BgL_i1131z00_1611;

																BgL_i1131z00_1611 =
																	((BgL_huftz00_bglt)
																	((BgL_huftz00_bglt) CELL_REF(BgL_tz00_4961)));
																BgL_arg1584z00_1609 =
																	(((BgL_huftz00_bglt)
																		COBJECT(BgL_i1131z00_1611))->BgL_vz00);
															}
															{	/* Unsafe/gunzip.scm 698 */
																long BgL_arg1588z00_1612;

																{	/* Unsafe/gunzip.scm 698 */
																	obj_t BgL_arg1589z00_1613;

																	BgL_arg1589z00_1613 =
																		BGl_vector2875z00zz__gunza7ipza7;
																	{	/* Unsafe/gunzip.scm 698 */
																		long BgL_kz00_3631;

																		BgL_kz00_3631 =
																			(long) CINT(CELL_REF(BgL_ez00_4958));
																		BgL_arg1588z00_1612 =
																			(long)
																			CINT(VECTOR_REF(BgL_arg1589z00_1613,
																				BgL_kz00_3631));
																}}
																{	/* Unsafe/gunzip.scm 696 */
																	long BgL_xz00_3632;

																	BgL_xz00_3632 =
																		(long) CINT(CELL_REF(BgL_bbz00_4962));
																	BgL_arg1587z00_1610 =
																		(BgL_xz00_3632 & BgL_arg1588z00_1612);
															}}
															BgL_arg1583z00_1608 =
																(
																(long) CINT(BgL_arg1584z00_1609) +
																BgL_arg1587z00_1610);
														}
														{	/* Unsafe/gunzip.scm 694 */
															long BgL_za71za7_3638;

															BgL_za71za7_3638 =
																(long) CINT(CELL_REF(BgL_wpz00_4957));
															BgL_arg1582z00_1607 =
																(BgL_za71za7_3638 - BgL_arg1583z00_1608);
													}}
													BgL_auxz00_4982 =
														BINT(BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00
														(BgL_arg1582z00_1607, BgL_wsiza7eza7_4954));
												}
												CELL_SET(BgL_dz00_4955, BgL_auxz00_4982);
											}
											{	/* Unsafe/gunzip.scm 700 */
												obj_t BgL_nz00_3641;

												BgL_nz00_3641 = CELL_REF(BgL_ez00_4958);
												{	/* Unsafe/gunzip.scm 370 */
													obj_t BgL_auxz00_4983;

													{	/* Unsafe/gunzip.scm 370 */
														long BgL_xz00_3642;
														long BgL_yz00_3643;

														BgL_xz00_3642 =
															(long) CINT(CELL_REF(BgL_bbz00_4962));
														BgL_yz00_3643 = (long) CINT(BgL_nz00_3641);
														BgL_auxz00_4983 =
															BINT((BgL_xz00_3642 >> (int) (BgL_yz00_3643)));
													}
													CELL_SET(BgL_bbz00_4962, BgL_auxz00_4983);
												}
												{	/* Unsafe/gunzip.scm 371 */
													obj_t BgL_auxz00_4984;

													BgL_auxz00_4984 =
														SUBFX(CELL_REF(BgL_bkz00_4963), BgL_nz00_3641);
													CELL_SET(BgL_bkz00_4963, BgL_auxz00_4984);
											}}
										BgL_zc3z04anonymousza31535ze3z87_1531:
											{	/* Unsafe/gunzip.scm 615 */
												obj_t BgL_auxz00_4985;

												{	/* Unsafe/gunzip.scm 615 */
													long BgL_xz00_3504;

													BgL_xz00_3504 = (long) CINT(CELL_REF(BgL_dz00_4955));
													BgL_auxz00_4985 =
														BINT(
														(BgL_xz00_3504 &
															(BgL_wsiza7eza7_4954 - ((long) 1))));
												}
												CELL_SET(BgL_dz00_4955, BgL_auxz00_4985);
											}
											{	/* Unsafe/gunzip.scm 616 */
												obj_t BgL_auxz00_4986;

												{	/* Unsafe/gunzip.scm 616 */
													obj_t BgL_az00_1533;
													long BgL_bz00_1534;

													BgL_az00_1533 = CELL_REF(BgL_nz00_4956);
													{	/* Unsafe/gunzip.scm 616 */
														obj_t BgL_arg1540z00_1536;

														{	/* Unsafe/gunzip.scm 616 */
															obj_t BgL_az00_1537;
															obj_t BgL_bz00_1538;

															BgL_az00_1537 = CELL_REF(BgL_dz00_4955);
															BgL_bz00_1538 = CELL_REF(BgL_wpz00_4957);
															if (
																((long) CINT(BgL_az00_1537) >
																	(long) CINT(BgL_bz00_1538)))
																{	/* Unsafe/gunzip.scm 616 */
																	BgL_arg1540z00_1536 = BgL_az00_1537;
																}
															else
																{	/* Unsafe/gunzip.scm 616 */
																	BgL_arg1540z00_1536 = BgL_bz00_1538;
																}
														}
														BgL_bz00_1534 =
															(BgL_wsiza7eza7_4954 -
															(long) CINT(BgL_arg1540z00_1536));
													}
													if (((long) CINT(BgL_az00_1533) < BgL_bz00_1534))
														{	/* Unsafe/gunzip.scm 616 */
															BgL_auxz00_4986 = BgL_az00_1533;
														}
													else
														{	/* Unsafe/gunzip.scm 616 */
															BgL_auxz00_4986 = BINT(BgL_bz00_1534);
														}
												}
												CELL_SET(BgL_ez00_4958, BgL_auxz00_4986);
											}
											{	/* Unsafe/gunzip.scm 617 */
												obj_t BgL_auxz00_4987;

												BgL_auxz00_4987 =
													SUBFX(CELL_REF(BgL_nz00_4956),
													CELL_REF(BgL_ez00_4958));
												CELL_SET(BgL_nz00_4956, BgL_auxz00_4987);
											}
											{

											BgL_zc3z04anonymousza31542ze3z87_1541:
												{	/* Unsafe/gunzip.scm 619 */
													unsigned char BgL_arg1544z00_1542;

													{	/* Unsafe/gunzip.scm 619 */
														long BgL_kz00_3520;

														BgL_kz00_3520 =
															(long) CINT(CELL_REF(BgL_dz00_4955));
														BgL_arg1544z00_1542 =
															STRING_REF(
															((obj_t) BgL_slidez00_4959), BgL_kz00_3520);
													}
													{	/* Unsafe/gunzip.scm 619 */
														long BgL_kz00_3523;

														BgL_kz00_3523 =
															(long) CINT(CELL_REF(BgL_wpz00_4957));
														{	/* Unsafe/gunzip.scm 619 */
															obj_t BgL_tmpz00_6972;

															BgL_tmpz00_6972 = ((obj_t) BgL_slidez00_4959);
															STRING_SET(BgL_tmpz00_6972, BgL_kz00_3523,
																BgL_arg1544z00_1542);
												}}}
												{	/* Unsafe/gunzip.scm 620 */
													obj_t BgL_auxz00_4988;

													BgL_auxz00_4988 =
														ADDFX(CELL_REF(BgL_wpz00_4957), BINT(((long) 1)));
													CELL_SET(BgL_wpz00_4957, BgL_auxz00_4988);
												}
												{	/* Unsafe/gunzip.scm 621 */
													obj_t BgL_auxz00_4989;

													BgL_auxz00_4989 =
														ADDFX(CELL_REF(BgL_dz00_4955), BINT(((long) 1)));
													CELL_SET(BgL_dz00_4955, BgL_auxz00_4989);
												}
												{	/* Unsafe/gunzip.scm 622 */
													obj_t BgL_auxz00_4990;

													BgL_auxz00_4990 =
														SUBFX(CELL_REF(BgL_ez00_4958), BINT(((long) 1)));
													CELL_SET(BgL_ez00_4958, BgL_auxz00_4990);
												}
												{	/* Unsafe/gunzip.scm 623 */
													bool_t BgL_test3089z00_6981;

													{	/* Unsafe/gunzip.scm 623 */
														long BgL_n1z00_3531;

														BgL_n1z00_3531 =
															(long) CINT(CELL_REF(BgL_ez00_4958));
														BgL_test3089z00_6981 =
															(BgL_n1z00_3531 == ((long) 0));
													}
													if (BgL_test3089z00_6981)
														{	/* Unsafe/gunzip.scm 623 */
															((bool_t) 0);
														}
													else
														{	/* Unsafe/gunzip.scm 623 */
															goto BgL_zc3z04anonymousza31542ze3z87_1541;
														}
												}
											}
											{	/* Unsafe/gunzip.scm 624 */
												obj_t BgL_rz00_1545;

												BgL_rz00_1545 =
													BGl_z62checkzd2flushzb0zz__gunza7ipza7
													(BgL_wsiza7eza7_4954, BgL_wpz00_4957);
												{	/* Unsafe/gunzip.scm 626 */
													bool_t BgL_test3090z00_6985;

													{	/* Unsafe/gunzip.scm 626 */
														long BgL_n1z00_3533;

														BgL_n1z00_3533 =
															(long) CINT(CELL_REF(BgL_nz00_4956));
														BgL_test3090z00_6985 =
															(BgL_n1z00_3533 == ((long) 0));
													}
													if (BgL_test3090z00_6985)
														{
															obj_t BgL_retz00_6988;

															BgL_retz00_6988 = BgL_rz00_1545;
															BgL_retz00_1575 = BgL_retz00_6988;
															goto BGl_z62loopzd2inflatezb0zz__gunza7ipza7;
														}
													else
														{	/* Unsafe/gunzip.scm 626 */
															if (((long) CINT(BgL_rz00_1545) == ((long) 0)))
																{	/* Unsafe/gunzip.scm 628 */
																	goto BgL_zc3z04anonymousza31535ze3z87_1531;
																}
															else
																{	/* Unsafe/gunzip.scm 631 */
																	obj_t BgL_val0_1221z00_1548;

																	BgL_val0_1221z00_1548 =
																		BGl_symbol2854z00zz__gunza7ipza7;
																	{	/* Unsafe/gunzip.scm 631 */
																		obj_t BgL_zc3z04anonymousza31548ze3z87_4892;

																		BgL_zc3z04anonymousza31548ze3z87_4892 =
																			MAKE_FX_PROCEDURE
																			(BGl_z62zc3z04anonymousza31548ze3ze5zz__gunza7ipza7,
																			(int) (((long) 0)), (int) (((long) 16)));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31548ze3z87_4892,
																			(int) (((long) 0)),
																			BgL_inputzd2portzd2_4960);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31548ze3z87_4892,
																			(int) (((long) 1)),
																			((obj_t) BgL_tz00_4961));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31548ze3z87_4892,
																			(int) (((long) 2)),
																			((obj_t) BgL_bbz00_4962));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31548ze3z87_4892,
																			(int) (((long) 3)),
																			((obj_t) BgL_bkz00_4963));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31548ze3z87_4892,
																			(int) (((long) 4)), BgL_blz00_4964);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31548ze3z87_4892,
																			(int) (((long) 5)), BINT(BgL_mlz00_4965));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31548ze3z87_4892,
																			(int) (((long) 6)), BgL_tlz00_4966);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31548ze3z87_4892,
																			(int) (((long) 7)), BgL_bdz00_4967);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31548ze3z87_4892,
																			(int) (((long) 8)), BINT(BgL_mdz00_4968));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31548ze3z87_4892,
																			(int) (((long) 9)), BgL_tdz00_4969);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31548ze3z87_4892,
																			(int) (((long) 10)),
																			BINT(BgL_wsiza7eza7_4954));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31548ze3z87_4892,
																			(int) (((long) 11)),
																			((obj_t) BgL_dz00_4955));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31548ze3z87_4892,
																			(int) (((long) 12)),
																			((obj_t) BgL_nz00_4956));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31548ze3z87_4892,
																			(int) (((long) 13)),
																			((obj_t) BgL_wpz00_4957));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31548ze3z87_4892,
																			(int) (((long) 14)),
																			((obj_t) BgL_ez00_4958));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31548ze3z87_4892,
																			(int) (((long) 15)), BgL_slidez00_4959);
																		{	/* Unsafe/gunzip.scm 631 */
																			int BgL_res2485z00_3537;

																			{	/* Unsafe/gunzip.scm 631 */
																				int BgL_tmpz00_7037;

																				BgL_tmpz00_7037 = (int) (((long) 3));
																				BgL_res2485z00_3537 =
																					BGL_MVALUES_NUMBER_SET
																					(BgL_tmpz00_7037);
																			} BgL_res2485z00_3537;
																		}
																		{	/* Unsafe/gunzip.scm 631 */
																			int BgL_tmpz00_7040;

																			BgL_tmpz00_7040 = (int) (((long) 1));
																			BGL_MVALUES_VAL_SET(BgL_tmpz00_7040,
																				BgL_rz00_1545);
																		}
																		{	/* Unsafe/gunzip.scm 631 */
																			int BgL_tmpz00_7043;

																			BgL_tmpz00_7043 = (int) (((long) 2));
																			BGL_MVALUES_VAL_SET(BgL_tmpz00_7043,
																				BgL_zc3z04anonymousza31548ze3z87_4892);
																		}
																		return BgL_val0_1221z00_1548;
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



/* jump-to-next~0 */
	bool_t BGl_jumpzd2tozd2nextze70ze7zz__gunza7ipza7(obj_t BgL_bkz00_5234,
		obj_t BgL_bbz00_5233, obj_t BgL_tz00_5232, obj_t BgL_inputzd2portzd2_5231,
		obj_t BgL_ez00_5230)
	{
		{	/* Unsafe/gunzip.scm 611 */
			{

			BgL_zc3z04anonymousza31523ze3z87_1517:
				{	/* Unsafe/gunzip.scm 601 */
					bool_t BgL_test3092z00_7046;

					{	/* Unsafe/gunzip.scm 601 */
						long BgL_n1z00_3470;

						BgL_n1z00_3470 = (long) CINT(CELL_REF(BgL_ez00_5230));
						BgL_test3092z00_7046 = (BgL_n1z00_3470 == ((long) 99));
					}
					if (BgL_test3092z00_7046)
						{	/* Unsafe/gunzip.scm 603 */
							obj_t BgL_arg1525z00_1519;

							{	/* Unsafe/gunzip.scm 603 */
								obj_t BgL_list1526z00_1520;

								BgL_list1526z00_1520 =
									MAKE_YOUNG_PAIR(CELL_REF(BgL_ez00_5230), BNIL);
								BgL_arg1525z00_1519 =
									BGl_formatz00zz__r4_output_6_10_3z00
									(BGl_string2885z00zz__gunza7ipza7, BgL_list1526z00_1520);
							}
							{	/* Unsafe/gunzip.scm 328 */
								BgL_z62iozd2parsezd2errorz62_bglt BgL_arg1401z00_3472;

								{	/* Unsafe/gunzip.scm 328 */
									BgL_z62iozd2parsezd2errorz62_bglt BgL_new1076z00_3473;

									{	/* Unsafe/gunzip.scm 328 */
										BgL_z62iozd2parsezd2errorz62_bglt BgL_new1075z00_3474;

										BgL_new1075z00_3474 =
											((BgL_z62iozd2parsezd2errorz62_bglt)
											BOBJECT(GC_MALLOC(sizeof(struct
														BgL_z62iozd2parsezd2errorz62_bgl))));
										{	/* Unsafe/gunzip.scm 328 */
											long BgL_arg1405z00_3475;

											{	/* Unsafe/gunzip.scm 328 */
												long BgL_res2316z00_3476;

												BgL_res2316z00_3476 =
													BGL_CLASS_INDEX
													(BGl_z62iozd2parsezd2errorz62zz__objectz00);
												BgL_arg1405z00_3475 = BgL_res2316z00_3476;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1075z00_3474),
												BgL_arg1405z00_3475);
										}
										BgL_new1076z00_3473 = BgL_new1075z00_3474;
									}
									((((BgL_z62exceptionz62_bglt) COBJECT(
													((BgL_z62exceptionz62_bglt) BgL_new1076z00_3473)))->
											BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
									((((BgL_z62exceptionz62_bglt)
												COBJECT(((BgL_z62exceptionz62_bglt)
														BgL_new1076z00_3473)))->BgL_locationz00) =
										((obj_t) BFALSE), BUNSPEC);
									{
										obj_t BgL_auxz00_7059;

										{	/* Unsafe/gunzip.scm 328 */
											obj_t BgL_arg1402z00_3480;

											{	/* Unsafe/gunzip.scm 328 */
												obj_t BgL_arg1404z00_3481;

												{	/* Unsafe/gunzip.scm 328 */
													obj_t BgL_res2317z00_3482;

													{	/* Unsafe/gunzip.scm 328 */
														obj_t BgL_classz00_3483;

														BgL_classz00_3483 =
															BGl_z62iozd2parsezd2errorz62zz__objectz00;
														BgL_res2317z00_3482 =
															BGL_CLASS_ALL_FIELDS(BgL_classz00_3483);
													}
													BgL_arg1404z00_3481 = BgL_res2317z00_3482;
												}
												BgL_arg1402z00_3480 =
													VECTOR_REF(BgL_arg1404z00_3481, ((long) 2));
											}
											BgL_auxz00_7059 =
												BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
												(BgL_arg1402z00_3480);
										}
										((((BgL_z62exceptionz62_bglt) COBJECT(
														((BgL_z62exceptionz62_bglt) BgL_new1076z00_3473)))->
												BgL_stackz00) = ((obj_t) BgL_auxz00_7059), BUNSPEC);
									}
									((((BgL_z62errorz62_bglt) COBJECT(
													((BgL_z62errorz62_bglt) BgL_new1076z00_3473)))->
											BgL_procz00) =
										((obj_t) BGl_string2870z00zz__gunza7ipza7), BUNSPEC);
									((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
														BgL_new1076z00_3473)))->BgL_msgz00) =
										((obj_t) BgL_arg1525z00_1519), BUNSPEC);
									((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
														BgL_new1076z00_3473)))->BgL_objz00) =
										((obj_t) BgL_inputzd2portzd2_5231), BUNSPEC);
									BgL_arg1401z00_3472 = BgL_new1076z00_3473;
								}
								BGl_raisez00zz__errorz00(((obj_t) BgL_arg1401z00_3472));
						}}
					else
						{	/* Unsafe/gunzip.scm 601 */
							BFALSE;
						}
				}
				{	/* Unsafe/gunzip.scm 605 */
					long BgL_arg1528z00_1521;

					{	/* Unsafe/gunzip.scm 605 */
						BgL_huftz00_bglt BgL_i1113z00_1522;

						BgL_i1113z00_1522 =
							((BgL_huftz00_bglt) ((BgL_huftz00_bglt) CELL_REF(BgL_tz00_5232)));
						BgL_arg1528z00_1521 =
							(((BgL_huftz00_bglt) COBJECT(BgL_i1113z00_1522))->BgL_bz00);
					}
					{	/* Unsafe/gunzip.scm 370 */
						obj_t BgL_auxz00_4991;

						{	/* Unsafe/gunzip.scm 370 */
							long BgL_xz00_3485;

							BgL_xz00_3485 = (long) CINT(CELL_REF(BgL_bbz00_5233));
							BgL_auxz00_4991 =
								BINT((BgL_xz00_3485 >> (int) (BgL_arg1528z00_1521)));
						}
						CELL_SET(BgL_bbz00_5233, BgL_auxz00_4991);
					}
					{	/* Unsafe/gunzip.scm 371 */
						obj_t BgL_auxz00_4992;

						BgL_auxz00_4992 =
							SUBFX(CELL_REF(BgL_bkz00_5234), BINT(BgL_arg1528z00_1521));
						CELL_SET(BgL_bkz00_5234, BgL_auxz00_4992);
				}}
				{	/* Unsafe/gunzip.scm 606 */
					obj_t BgL_auxz00_4993;

					BgL_auxz00_4993 = SUBFX(CELL_REF(BgL_ez00_5230), BINT(((long) 16)));
					CELL_SET(BgL_ez00_5230, BgL_auxz00_4993);
				}
				BGl_z62NEEDBITSz62zz__gunza7ipza7(BgL_bbz00_5233, BgL_bkz00_5234,
					BgL_inputzd2portzd2_5231, CELL_REF(BgL_ez00_5230));
				{	/* Unsafe/gunzip.scm 608 */
					obj_t BgL_auxz00_4994;

					{	/* Unsafe/gunzip.scm 609 */
						obj_t BgL_arg1530z00_1523;
						long BgL_arg1531z00_1524;

						{	/* Unsafe/gunzip.scm 609 */
							BgL_huftz00_bglt BgL_i1115z00_1525;

							BgL_i1115z00_1525 =
								((BgL_huftz00_bglt)
								((BgL_huftz00_bglt) CELL_REF(BgL_tz00_5232)));
							BgL_arg1530z00_1523 =
								(((BgL_huftz00_bglt) COBJECT(BgL_i1115z00_1525))->BgL_vz00);
						}
						{	/* Unsafe/gunzip.scm 609 */
							long BgL_arg1532z00_1526;

							{	/* Unsafe/gunzip.scm 609 */
								obj_t BgL_arg1533z00_1527;

								BgL_arg1533z00_1527 = BGl_vector2875z00zz__gunza7ipza7;
								{	/* Unsafe/gunzip.scm 609 */
									long BgL_kz00_3494;

									BgL_kz00_3494 = (long) CINT(CELL_REF(BgL_ez00_5230));
									BgL_arg1532z00_1526 =
										(long) CINT(VECTOR_REF(BgL_arg1533z00_1527, BgL_kz00_3494));
							}}
							{	/* Unsafe/gunzip.scm 609 */
								long BgL_xz00_3495;

								BgL_xz00_3495 = (long) CINT(CELL_REF(BgL_bbz00_5233));
								BgL_arg1531z00_1524 = (BgL_xz00_3495 & BgL_arg1532z00_1526);
						}}
						BgL_auxz00_4994 =
							VECTOR_REF(((obj_t) BgL_arg1530z00_1523), BgL_arg1531z00_1524);
					}
					CELL_SET(BgL_tz00_5232, BgL_auxz00_4994);
				}
				{	/* Unsafe/gunzip.scm 610 */
					obj_t BgL_auxz00_4995;

					{	/* Unsafe/gunzip.scm 610 */
						BgL_huftz00_bglt BgL_i1117z00_1528;

						BgL_i1117z00_1528 =
							((BgL_huftz00_bglt) ((BgL_huftz00_bglt) CELL_REF(BgL_tz00_5232)));
						BgL_auxz00_4995 =
							BINT((((BgL_huftz00_bglt) COBJECT(BgL_i1117z00_1528))->BgL_ez00));
					}
					CELL_SET(BgL_ez00_5230, BgL_auxz00_4995);
				}
				{	/* Unsafe/gunzip.scm 611 */
					bool_t BgL_test3093z00_7099;

					{	/* Unsafe/gunzip.scm 611 */
						long BgL_n1z00_3500;

						BgL_n1z00_3500 = (long) CINT(CELL_REF(BgL_ez00_5230));
						BgL_test3093z00_7099 = (BgL_n1z00_3500 > ((long) 16));
					}
					if (BgL_test3093z00_7099)
						{	/* Unsafe/gunzip.scm 611 */
							goto BgL_zc3z04anonymousza31523ze3z87_1517;
						}
					else
						{	/* Unsafe/gunzip.scm 611 */
							return ((bool_t) 0);
						}
				}
			}
		}

	}



/* &check-flush */
	obj_t BGl_z62checkzd2flushzb0zz__gunza7ipza7(long BgL_wsiza7eza7_4997,
		obj_t BgL_wpz00_4996)
	{
		{	/* Unsafe/gunzip.scm 384 */
			{	/* Unsafe/gunzip.scm 380 */
				bool_t BgL_test3094z00_7102;

				{	/* Unsafe/gunzip.scm 380 */
					long BgL_n1z00_3013;

					BgL_n1z00_3013 = (long) CINT(CELL_REF(BgL_wpz00_4996));
					BgL_test3094z00_7102 = (BgL_n1z00_3013 == BgL_wsiza7eza7_4997);
				}
				if (BgL_test3094z00_7102)
					{	/* Unsafe/gunzip.scm 380 */
						{	/* Unsafe/gunzip.scm 382 */
							obj_t BgL_auxz00_4998;

							BgL_auxz00_4998 = BINT(((long) 0));
							CELL_SET(BgL_wpz00_4996, BgL_auxz00_4998);
						}
						return BINT(BgL_wsiza7eza7_4997);
					}
				else
					{	/* Unsafe/gunzip.scm 380 */
						return BINT(((long) 0));
		}}}

	}



/* &loop2796 */
	obj_t BGl_z62loop2796z62zz__gunza7ipza7(obj_t BgL_bkz00_5004,
		obj_t BgL_wpz00_5003, obj_t BgL_slidez00_5002, obj_t BgL_bbz00_5001,
		obj_t BgL_inputzd2portzd2_5000, long BgL_wsiza7eza7_4999,
		long BgL_nz00_1481)
	{
		{	/* Unsafe/gunzip.scm 726 */
		BGl_z62loop2796z62zz__gunza7ipza7:
			if ((BgL_nz00_1481 > ((long) 0)))
				{	/* Unsafe/gunzip.scm 727 */
					BGl_z62NEEDBITSz62zz__gunza7ipza7(BgL_bbz00_5001, BgL_bkz00_5004,
						BgL_inputzd2portzd2_5000, BINT(((long) 8)));
					{	/* Unsafe/gunzip.scm 730 */
						unsigned char BgL_arg1515z00_1484;

						{	/* Unsafe/gunzip.scm 730 */
							long BgL_tmpz00_7112;

							{	/* Unsafe/gunzip.scm 730 */
								long BgL_xz00_3688;

								BgL_xz00_3688 = (long) CINT(CELL_REF(BgL_bbz00_5001));
								BgL_tmpz00_7112 = (BgL_xz00_3688 & ((long) 255));
							}
							BgL_arg1515z00_1484 = (BgL_tmpz00_7112);
						}
						{	/* Unsafe/gunzip.scm 730 */
							long BgL_kz00_3693;

							BgL_kz00_3693 = (long) CINT(CELL_REF(BgL_wpz00_5003));
							{	/* Unsafe/gunzip.scm 730 */
								obj_t BgL_tmpz00_7117;

								BgL_tmpz00_7117 = ((obj_t) BgL_slidez00_5002);
								STRING_SET(BgL_tmpz00_7117, BgL_kz00_3693, BgL_arg1515z00_1484);
					}}}
					{	/* Unsafe/gunzip.scm 731 */
						obj_t BgL_auxz00_5005;

						BgL_auxz00_5005 = ADDFX(CELL_REF(BgL_wpz00_5003), BINT(((long) 1)));
						CELL_SET(BgL_wpz00_5003, BgL_auxz00_5005);
					}
					{	/* Unsafe/gunzip.scm 732 */
						obj_t BgL_rz00_1486;

						BgL_rz00_1486 =
							BGl_z62checkzd2flushzb0zz__gunza7ipza7(BgL_wsiza7eza7_4999,
							BgL_wpz00_5003);
						{	/* Unsafe/gunzip.scm 370 */
							obj_t BgL_auxz00_5006;

							{	/* Unsafe/gunzip.scm 370 */
								long BgL_xz00_3697;

								BgL_xz00_3697 = (long) CINT(CELL_REF(BgL_bbz00_5001));
								BgL_auxz00_5006 = BINT((BgL_xz00_3697 >> (int) (((long) 8))));
							}
							CELL_SET(BgL_bbz00_5001, BgL_auxz00_5006);
						}
						{	/* Unsafe/gunzip.scm 371 */
							obj_t BgL_auxz00_5007;

							BgL_auxz00_5007 =
								SUBFX(CELL_REF(BgL_bkz00_5004), BINT(((long) 8)));
							CELL_SET(BgL_bkz00_5004, BgL_auxz00_5007);
						}
						if (((long) CINT(BgL_rz00_1486) > ((long) 0)))
							{	/* Unsafe/gunzip.scm 735 */
								obj_t BgL_val0_1233z00_1488;

								BgL_val0_1233z00_1488 = BGl_symbol2854z00zz__gunza7ipza7;
								{	/* Unsafe/gunzip.scm 735 */
									obj_t BgL_zc3z04anonymousza31518ze3z87_4887;

									BgL_zc3z04anonymousza31518ze3z87_4887 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31518ze3ze5zz__gunza7ipza7,
										(int) (((long) 0)), (int) (((long) 7)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31518ze3z87_4887,
										(int) (((long) 0)), BINT(BgL_wsiza7eza7_4999));
									PROCEDURE_SET(BgL_zc3z04anonymousza31518ze3z87_4887,
										(int) (((long) 1)), BgL_inputzd2portzd2_5000);
									PROCEDURE_SET(BgL_zc3z04anonymousza31518ze3z87_4887,
										(int) (((long) 2)), ((obj_t) BgL_bbz00_5001));
									PROCEDURE_SET(BgL_zc3z04anonymousza31518ze3z87_4887,
										(int) (((long) 3)), BgL_slidez00_5002);
									PROCEDURE_SET(BgL_zc3z04anonymousza31518ze3z87_4887,
										(int) (((long) 4)), ((obj_t) BgL_wpz00_5003));
									PROCEDURE_SET(BgL_zc3z04anonymousza31518ze3z87_4887,
										(int) (((long) 5)), ((obj_t) BgL_bkz00_5004));
									PROCEDURE_SET(BgL_zc3z04anonymousza31518ze3z87_4887,
										(int) (((long) 6)), BINT(BgL_nz00_1481));
									{	/* Unsafe/gunzip.scm 735 */
										int BgL_res2543z00_3706;

										{	/* Unsafe/gunzip.scm 735 */
											int BgL_tmpz00_7154;

											BgL_tmpz00_7154 = (int) (((long) 3));
											BgL_res2543z00_3706 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_7154);
										} BgL_res2543z00_3706;
									}
									{	/* Unsafe/gunzip.scm 735 */
										int BgL_tmpz00_7157;

										BgL_tmpz00_7157 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_7157, BgL_rz00_1486);
									}
									{	/* Unsafe/gunzip.scm 735 */
										int BgL_tmpz00_7160;

										BgL_tmpz00_7160 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_7160,
											BgL_zc3z04anonymousza31518ze3z87_4887);
									}
									return BgL_val0_1233z00_1488;
								}
							}
						else
							{	/* Unsafe/gunzip.scm 736 */
								long BgL_arg1520z00_1494;

								BgL_arg1520z00_1494 = (BgL_nz00_1481 - ((long) 1));
								{
									long BgL_nz00_7164;

									BgL_nz00_7164 = BgL_arg1520z00_1494;
									BgL_nz00_1481 = BgL_nz00_7164;
									goto BGl_z62loop2796z62zz__gunza7ipza7;
								}
							}
					}
				}
			else
				{	/* Unsafe/gunzip.scm 737 */
					obj_t BgL_val0_1236z00_1495;

					BgL_val0_1236z00_1495 = BGl_symbol2850z00zz__gunza7ipza7;
					{	/* Unsafe/gunzip.scm 737 */
						int BgL_res2545z00_3709;

						{	/* Unsafe/gunzip.scm 737 */
							int BgL_tmpz00_7165;

							BgL_tmpz00_7165 = (int) (((long) 3));
							BgL_res2545z00_3709 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_7165);
						} BgL_res2545z00_3709;
					}
					{	/* Unsafe/gunzip.scm 737 */
						int BgL_tmpz00_7168;

						BgL_tmpz00_7168 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_7168, BTRUE);
					}
					{	/* Unsafe/gunzip.scm 737 */
						int BgL_tmpz00_7171;

						BgL_tmpz00_7171 = (int) (((long) 2));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_7171, BUNSPEC);
					}
					return BgL_val0_1236z00_1495;
				}
		}

	}



/* &%do-copy2 */
	obj_t BGl_z62z52dozd2copy2ze2zz__gunza7ipza7(obj_t BgL_slidez00_5023,
		obj_t BgL_ez00_5022, obj_t BgL_wpz00_5021, obj_t BgL_nz00_5020,
		obj_t BgL_dz00_5019, long BgL_wsiza7eza7_5018, obj_t BgL_tdz00_5017,
		long BgL_mdz00_5016, obj_t BgL_bdz00_5015, obj_t BgL_tlz00_5014,
		long BgL_mlz00_5013, obj_t BgL_blz00_5012, obj_t BgL_bkz00_5011,
		obj_t BgL_bbz00_5010, obj_t BgL_tz00_5009, obj_t BgL_inputzd2portzd2_5008)
	{
		{	/* Unsafe/gunzip.scm 640 */
		BGl_z62z52dozd2copy2ze2zz__gunza7ipza7:
			{	/* Unsafe/gunzip.scm 640 */
				obj_t BgL_auxz00_5024;

				{	/* Unsafe/gunzip.scm 640 */
					long BgL_xz00_3540;

					BgL_xz00_3540 = (long) CINT(CELL_REF(BgL_dz00_5019));
					BgL_auxz00_5024 =
						BINT((BgL_xz00_3540 & (BgL_wsiza7eza7_5018 - ((long) 1))));
				}
				CELL_SET(BgL_dz00_5019, BgL_auxz00_5024);
			}
			{	/* Unsafe/gunzip.scm 641 */
				obj_t BgL_auxz00_5025;

				{	/* Unsafe/gunzip.scm 641 */
					obj_t BgL_az00_1555;
					long BgL_bz00_1556;

					BgL_az00_1555 = CELL_REF(BgL_nz00_5020);
					{	/* Unsafe/gunzip.scm 641 */
						obj_t BgL_arg1553z00_1558;

						{	/* Unsafe/gunzip.scm 641 */
							obj_t BgL_az00_1559;
							obj_t BgL_bz00_1560;

							BgL_az00_1559 = CELL_REF(BgL_dz00_5019);
							BgL_bz00_1560 = CELL_REF(BgL_wpz00_5021);
							if (((long) CINT(BgL_az00_1559) > (long) CINT(BgL_bz00_1560)))
								{	/* Unsafe/gunzip.scm 641 */
									BgL_arg1553z00_1558 = BgL_az00_1559;
								}
							else
								{	/* Unsafe/gunzip.scm 641 */
									BgL_arg1553z00_1558 = BgL_bz00_1560;
								}
						}
						BgL_bz00_1556 =
							(BgL_wsiza7eza7_5018 - (long) CINT(BgL_arg1553z00_1558));
					}
					if (((long) CINT(BgL_az00_1555) < BgL_bz00_1556))
						{	/* Unsafe/gunzip.scm 641 */
							BgL_auxz00_5025 = BgL_az00_1555;
						}
					else
						{	/* Unsafe/gunzip.scm 641 */
							BgL_auxz00_5025 = BINT(BgL_bz00_1556);
						}
				}
				CELL_SET(BgL_ez00_5022, BgL_auxz00_5025);
			}
			{	/* Unsafe/gunzip.scm 642 */
				obj_t BgL_auxz00_5026;

				BgL_auxz00_5026 =
					SUBFX(CELL_REF(BgL_nz00_5020), CELL_REF(BgL_ez00_5022));
				CELL_SET(BgL_nz00_5020, BgL_auxz00_5026);
			}
			{

			BgL_zc3z04anonymousza31555ze3z87_1563:
				{	/* Unsafe/gunzip.scm 644 */
					unsigned char BgL_arg1556z00_1564;

					{	/* Unsafe/gunzip.scm 644 */
						long BgL_kz00_3556;

						BgL_kz00_3556 = (long) CINT(CELL_REF(BgL_dz00_5019));
						BgL_arg1556z00_1564 =
							STRING_REF(((obj_t) BgL_slidez00_5023), BgL_kz00_3556);
					}
					{	/* Unsafe/gunzip.scm 644 */
						long BgL_kz00_3559;

						BgL_kz00_3559 = (long) CINT(CELL_REF(BgL_wpz00_5021));
						{	/* Unsafe/gunzip.scm 644 */
							obj_t BgL_tmpz00_7193;

							BgL_tmpz00_7193 = ((obj_t) BgL_slidez00_5023);
							STRING_SET(BgL_tmpz00_7193, BgL_kz00_3559, BgL_arg1556z00_1564);
				}}}
				{	/* Unsafe/gunzip.scm 645 */
					obj_t BgL_auxz00_5027;

					BgL_auxz00_5027 = ADDFX(CELL_REF(BgL_wpz00_5021), BINT(((long) 1)));
					CELL_SET(BgL_wpz00_5021, BgL_auxz00_5027);
				}
				{	/* Unsafe/gunzip.scm 646 */
					obj_t BgL_auxz00_5028;

					BgL_auxz00_5028 = ADDFX(CELL_REF(BgL_dz00_5019), BINT(((long) 1)));
					CELL_SET(BgL_dz00_5019, BgL_auxz00_5028);
				}
				{	/* Unsafe/gunzip.scm 647 */
					obj_t BgL_auxz00_5029;

					BgL_auxz00_5029 = SUBFX(CELL_REF(BgL_ez00_5022), BINT(((long) 1)));
					CELL_SET(BgL_ez00_5022, BgL_auxz00_5029);
				}
				{	/* Unsafe/gunzip.scm 648 */
					bool_t BgL_test3099z00_7202;

					{	/* Unsafe/gunzip.scm 648 */
						long BgL_n1z00_3567;

						BgL_n1z00_3567 = (long) CINT(CELL_REF(BgL_ez00_5022));
						BgL_test3099z00_7202 = (BgL_n1z00_3567 == ((long) 0));
					}
					if (BgL_test3099z00_7202)
						{	/* Unsafe/gunzip.scm 648 */
							((bool_t) 0);
						}
					else
						{	/* Unsafe/gunzip.scm 648 */
							goto BgL_zc3z04anonymousza31555ze3z87_1563;
						}
				}
			}
			{	/* Unsafe/gunzip.scm 649 */
				obj_t BgL_rz00_1567;

				BgL_rz00_1567 =
					BGl_z62checkzd2flushzb0zz__gunza7ipza7(BgL_wsiza7eza7_5018,
					BgL_wpz00_5021);
				{	/* Unsafe/gunzip.scm 651 */
					bool_t BgL_test3100z00_7206;

					{	/* Unsafe/gunzip.scm 651 */
						long BgL_n1z00_3569;

						BgL_n1z00_3569 = (long) CINT(CELL_REF(BgL_nz00_5020));
						BgL_test3100z00_7206 = (BgL_n1z00_3569 == ((long) 0));
					}
					if (BgL_test3100z00_7206)
						{	/* Unsafe/gunzip.scm 651 */
							return
								BGl_z62loopzd2inflatezb0zz__gunza7ipza7(BgL_tdz00_5017,
								BgL_mdz00_5016, BgL_bdz00_5015, BgL_tlz00_5014, BgL_mlz00_5013,
								BgL_blz00_5012, BgL_bkz00_5011, BgL_bbz00_5010, BgL_tz00_5009,
								BgL_inputzd2portzd2_5008, BgL_slidez00_5023, BgL_ez00_5022,
								BgL_wpz00_5021, BgL_nz00_5020, BgL_dz00_5019,
								BgL_wsiza7eza7_5018, BgL_rz00_1567);
						}
					else
						{	/* Unsafe/gunzip.scm 651 */
							if (((long) CINT(BgL_rz00_1567) == ((long) 0)))
								{

									goto BGl_z62z52dozd2copy2ze2zz__gunza7ipza7;
								}
							else
								{	/* Unsafe/gunzip.scm 656 */
									obj_t BgL_val0_1224z00_1570;

									BgL_val0_1224z00_1570 = BGl_symbol2854z00zz__gunza7ipza7;
									{	/* Unsafe/gunzip.scm 656 */
										obj_t BgL_zc3z04anonymousza31560ze3z87_4890;

										BgL_zc3z04anonymousza31560ze3z87_4890 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31560ze3ze5zz__gunza7ipza7,
											(int) (((long) 0)), (int) (((long) 16)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31560ze3z87_4890,
											(int) (((long) 0)), BgL_inputzd2portzd2_5008);
										PROCEDURE_SET(BgL_zc3z04anonymousza31560ze3z87_4890,
											(int) (((long) 1)), ((obj_t) BgL_tz00_5009));
										PROCEDURE_SET(BgL_zc3z04anonymousza31560ze3z87_4890,
											(int) (((long) 2)), ((obj_t) BgL_bbz00_5010));
										PROCEDURE_SET(BgL_zc3z04anonymousza31560ze3z87_4890,
											(int) (((long) 3)), ((obj_t) BgL_bkz00_5011));
										PROCEDURE_SET(BgL_zc3z04anonymousza31560ze3z87_4890,
											(int) (((long) 4)), BgL_blz00_5012);
										PROCEDURE_SET(BgL_zc3z04anonymousza31560ze3z87_4890,
											(int) (((long) 5)), BINT(BgL_mlz00_5013));
										PROCEDURE_SET(BgL_zc3z04anonymousza31560ze3z87_4890,
											(int) (((long) 6)), BgL_tlz00_5014);
										PROCEDURE_SET(BgL_zc3z04anonymousza31560ze3z87_4890,
											(int) (((long) 7)), BgL_bdz00_5015);
										PROCEDURE_SET(BgL_zc3z04anonymousza31560ze3z87_4890,
											(int) (((long) 8)), BINT(BgL_mdz00_5016));
										PROCEDURE_SET(BgL_zc3z04anonymousza31560ze3z87_4890,
											(int) (((long) 9)), BgL_tdz00_5017);
										PROCEDURE_SET(BgL_zc3z04anonymousza31560ze3z87_4890,
											(int) (((long) 10)), BINT(BgL_wsiza7eza7_5018));
										PROCEDURE_SET(BgL_zc3z04anonymousza31560ze3z87_4890,
											(int) (((long) 11)), ((obj_t) BgL_dz00_5019));
										PROCEDURE_SET(BgL_zc3z04anonymousza31560ze3z87_4890,
											(int) (((long) 12)), ((obj_t) BgL_nz00_5020));
										PROCEDURE_SET(BgL_zc3z04anonymousza31560ze3z87_4890,
											(int) (((long) 13)), ((obj_t) BgL_wpz00_5021));
										PROCEDURE_SET(BgL_zc3z04anonymousza31560ze3z87_4890,
											(int) (((long) 14)), ((obj_t) BgL_ez00_5022));
										PROCEDURE_SET(BgL_zc3z04anonymousza31560ze3z87_4890,
											(int) (((long) 15)), BgL_slidez00_5023);
										{	/* Unsafe/gunzip.scm 656 */
											int BgL_res2499z00_3573;

											{	/* Unsafe/gunzip.scm 656 */
												int BgL_tmpz00_7258;

												BgL_tmpz00_7258 = (int) (((long) 3));
												BgL_res2499z00_3573 =
													BGL_MVALUES_NUMBER_SET(BgL_tmpz00_7258);
											} BgL_res2499z00_3573;
										}
										{	/* Unsafe/gunzip.scm 656 */
											int BgL_tmpz00_7261;

											BgL_tmpz00_7261 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_tmpz00_7261, BgL_rz00_1567);
										}
										{	/* Unsafe/gunzip.scm 656 */
											int BgL_tmpz00_7264;

											BgL_tmpz00_7264 = (int) (((long) 2));
											BGL_MVALUES_VAL_SET(BgL_tmpz00_7264,
												BgL_zc3z04anonymousza31560ze3z87_4890);
										}
										return BgL_val0_1224z00_1570;
									}
								}
						}
				}
			}
		}

	}



/* &<@anonymous:1413> */
	obj_t BGl_z62zc3z04anonymousza31413ze3ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5030)
	{
		{	/* Unsafe/gunzip.scm 911 */
			{	/* Unsafe/gunzip.scm 912 */
				long BgL_wsiza7eza7_5031;
				obj_t BgL_slidez00_5032;
				obj_t BgL_bbz00_5033;
				obj_t BgL_bkz00_5034;
				obj_t BgL_inputzd2portzd2_5035;
				obj_t BgL_wpz00_5036;
				obj_t BgL_hz00_5037;
				long BgL_huftsz00_5038;
				obj_t BgL_rz00_5039;

				BgL_wsiza7eza7_5031 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_5030, (int) (((long) 0))));
				BgL_slidez00_5032 = PROCEDURE_REF(BgL_envz00_5030, (int) (((long) 1)));
				BgL_bbz00_5033 = PROCEDURE_REF(BgL_envz00_5030, (int) (((long) 2)));
				BgL_bkz00_5034 = PROCEDURE_REF(BgL_envz00_5030, (int) (((long) 3)));
				BgL_inputzd2portzd2_5035 =
					((obj_t) PROCEDURE_REF(BgL_envz00_5030, (int) (((long) 4))));
				BgL_wpz00_5036 = PROCEDURE_REF(BgL_envz00_5030, (int) (((long) 5)));
				BgL_hz00_5037 = PROCEDURE_REF(BgL_envz00_5030, (int) (((long) 6)));
				BgL_huftsz00_5038 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_5030, (int) (((long) 7))));
				BgL_rz00_5039 = PROCEDURE_REF(BgL_envz00_5030, (int) (((long) 8)));
				{	/* Unsafe/gunzip.scm 912 */
					obj_t BgL_state2z00_5301;

					BgL_state2z00_5301 =
						PROCEDURE_ENTRY(BgL_rz00_5039) (BgL_rz00_5039, BEOA);
					{	/* Unsafe/gunzip.scm 913 */
						obj_t BgL_e2z00_5302;
						obj_t BgL_r2z00_5303;

						{	/* Unsafe/gunzip.scm 914 */
							int BgL_tmpz00_7291;

							BgL_tmpz00_7291 = (int) (((long) 1));
							BgL_e2z00_5302 = BGL_MVALUES_VAL(BgL_tmpz00_7291);
						}
						{	/* Unsafe/gunzip.scm 914 */
							int BgL_tmpz00_7294;

							BgL_tmpz00_7294 = (int) (((long) 2));
							BgL_r2z00_5303 = BGL_MVALUES_VAL(BgL_tmpz00_7294);
						}
						return
							BGl_z62laapz62zz__gunza7ipza7(BgL_huftsz00_5038, BgL_hz00_5037,
							BgL_wpz00_5036, BgL_inputzd2portzd2_5035, BgL_bkz00_5034,
							BgL_bbz00_5033, BgL_slidez00_5032, BgL_wsiza7eza7_5031,
							BgL_state2z00_5301, BgL_e2z00_5302, BgL_r2z00_5303);
					}
				}
			}
		}

	}



/* &<@anonymous:1418> */
	obj_t BGl_z62zc3z04anonymousza31418ze3ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5040)
	{
		{	/* Unsafe/gunzip.scm 880 */
			{	/* Unsafe/gunzip.scm 881 */
				long BgL_ez00_5041;
				obj_t BgL_kontz00_5042;

				BgL_ez00_5041 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_5040, (int) (((long) 0))));
				BgL_kontz00_5042 = PROCEDURE_REF(BgL_envz00_5040, (int) (((long) 1)));
				{	/* Unsafe/gunzip.scm 881 */
					obj_t BgL_state2z00_5304;

					BgL_state2z00_5304 =
						PROCEDURE_ENTRY(BgL_kontz00_5042) (BgL_kontz00_5042, BEOA);
					{	/* Unsafe/gunzip.scm 882 */
						obj_t BgL_val2z00_5305;
						obj_t BgL_kont2z00_5306;

						{	/* Unsafe/gunzip.scm 883 */
							int BgL_tmpz00_7306;

							BgL_tmpz00_7306 = (int) (((long) 1));
							BgL_val2z00_5305 = BGL_MVALUES_VAL(BgL_tmpz00_7306);
						}
						{	/* Unsafe/gunzip.scm 883 */
							int BgL_tmpz00_7309;

							BgL_tmpz00_7309 = (int) (((long) 2));
							BgL_kont2z00_5306 = BGL_MVALUES_VAL(BgL_tmpz00_7309);
						}
						return
							BGl_z62loop2795z62zz__gunza7ipza7(BgL_ez00_5041,
							BgL_state2z00_5304, BgL_val2z00_5305, BgL_kont2z00_5306);
					}
				}
			}
		}

	}



/* &<@anonymous:1518> */
	obj_t BGl_z62zc3z04anonymousza31518ze3ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5043)
	{
		{	/* Unsafe/gunzip.scm 735 */
			{	/* Unsafe/gunzip.scm 735 */
				long BgL_wsiza7eza7_5044;
				obj_t BgL_inputzd2portzd2_5045;
				obj_t BgL_bbz00_5046;
				obj_t BgL_slidez00_5047;
				obj_t BgL_wpz00_5048;
				obj_t BgL_bkz00_5049;
				long BgL_nz00_5050;

				BgL_wsiza7eza7_5044 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_5043, (int) (((long) 0))));
				BgL_inputzd2portzd2_5045 =
					((obj_t) PROCEDURE_REF(BgL_envz00_5043, (int) (((long) 1))));
				BgL_bbz00_5046 = PROCEDURE_REF(BgL_envz00_5043, (int) (((long) 2)));
				BgL_slidez00_5047 = PROCEDURE_REF(BgL_envz00_5043, (int) (((long) 3)));
				BgL_wpz00_5048 = PROCEDURE_REF(BgL_envz00_5043, (int) (((long) 4)));
				BgL_bkz00_5049 = PROCEDURE_REF(BgL_envz00_5043, (int) (((long) 5)));
				BgL_nz00_5050 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_5043, (int) (((long) 6))));
				return
					BGl_z62loop2796z62zz__gunza7ipza7(BgL_bkz00_5049, BgL_wpz00_5048,
					BgL_slidez00_5047, BgL_bbz00_5046, BgL_inputzd2portzd2_5045,
					BgL_wsiza7eza7_5044, (BgL_nz00_5050 - ((long) 1)));
		}}

	}



/* &<@anonymous:1563> */
	obj_t BGl_z62zc3z04anonymousza31563ze3ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5051)
	{
		{	/* Unsafe/gunzip.scm 660 */
			{	/* Unsafe/gunzip.scm 660 */
				long BgL_wsiza7eza7_5052;
				obj_t BgL_dz00_5053;
				obj_t BgL_nz00_5054;
				obj_t BgL_wpz00_5055;
				obj_t BgL_ez00_5056;
				obj_t BgL_slidez00_5057;
				obj_t BgL_inputzd2portzd2_5058;
				obj_t BgL_tz00_5059;
				obj_t BgL_bbz00_5060;
				obj_t BgL_bkz00_5061;
				obj_t BgL_blz00_5062;
				long BgL_mlz00_5063;
				obj_t BgL_tlz00_5064;
				obj_t BgL_bdz00_5065;
				long BgL_mdz00_5066;
				obj_t BgL_tdz00_5067;

				BgL_wsiza7eza7_5052 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_5051, (int) (((long) 0))));
				BgL_dz00_5053 = PROCEDURE_REF(BgL_envz00_5051, (int) (((long) 1)));
				BgL_nz00_5054 = PROCEDURE_REF(BgL_envz00_5051, (int) (((long) 2)));
				BgL_wpz00_5055 = PROCEDURE_REF(BgL_envz00_5051, (int) (((long) 3)));
				BgL_ez00_5056 = PROCEDURE_REF(BgL_envz00_5051, (int) (((long) 4)));
				BgL_slidez00_5057 = PROCEDURE_REF(BgL_envz00_5051, (int) (((long) 5)));
				BgL_inputzd2portzd2_5058 =
					((obj_t) PROCEDURE_REF(BgL_envz00_5051, (int) (((long) 6))));
				BgL_tz00_5059 = PROCEDURE_REF(BgL_envz00_5051, (int) (((long) 7)));
				BgL_bbz00_5060 = PROCEDURE_REF(BgL_envz00_5051, (int) (((long) 8)));
				BgL_bkz00_5061 = PROCEDURE_REF(BgL_envz00_5051, (int) (((long) 9)));
				BgL_blz00_5062 = PROCEDURE_REF(BgL_envz00_5051, (int) (((long) 10)));
				BgL_mlz00_5063 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_5051, (int) (((long) 11))));
				BgL_tlz00_5064 = PROCEDURE_REF(BgL_envz00_5051, (int) (((long) 12)));
				BgL_bdz00_5065 = PROCEDURE_REF(BgL_envz00_5051, (int) (((long) 13)));
				BgL_mdz00_5066 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_5051, (int) (((long) 14))));
				BgL_tdz00_5067 = PROCEDURE_REF(BgL_envz00_5051, (int) (((long) 15)));
				return
					BGl_z62loopzd2inflatezb0zz__gunza7ipza7(BgL_tdz00_5067,
					BgL_mdz00_5066, BgL_bdz00_5065, BgL_tlz00_5064, BgL_mlz00_5063,
					BgL_blz00_5062, BgL_bkz00_5061, BgL_bbz00_5060, BgL_tz00_5059,
					BgL_inputzd2portzd2_5058, BgL_slidez00_5057, BgL_ez00_5056,
					BgL_wpz00_5055, BgL_nz00_5054, BgL_dz00_5053, BgL_wsiza7eza7_5052,
					BINT(((long) 0)));
		}}

	}



/* &<@anonymous:1560> */
	obj_t BGl_z62zc3z04anonymousza31560ze3ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5068)
	{
		{	/* Unsafe/gunzip.scm 656 */
			{	/* Unsafe/gunzip.scm 656 */
				obj_t BgL_inputzd2portzd2_5069;
				obj_t BgL_tz00_5070;
				obj_t BgL_bbz00_5071;
				obj_t BgL_bkz00_5072;
				obj_t BgL_blz00_5073;
				long BgL_mlz00_5074;
				obj_t BgL_tlz00_5075;
				obj_t BgL_bdz00_5076;
				long BgL_mdz00_5077;
				obj_t BgL_tdz00_5078;
				long BgL_wsiza7eza7_5079;
				obj_t BgL_dz00_5080;
				obj_t BgL_nz00_5081;
				obj_t BgL_wpz00_5082;
				obj_t BgL_ez00_5083;
				obj_t BgL_slidez00_5084;

				BgL_inputzd2portzd2_5069 =
					((obj_t) PROCEDURE_REF(BgL_envz00_5068, (int) (((long) 0))));
				BgL_tz00_5070 = PROCEDURE_REF(BgL_envz00_5068, (int) (((long) 1)));
				BgL_bbz00_5071 = PROCEDURE_REF(BgL_envz00_5068, (int) (((long) 2)));
				BgL_bkz00_5072 = PROCEDURE_REF(BgL_envz00_5068, (int) (((long) 3)));
				BgL_blz00_5073 = PROCEDURE_REF(BgL_envz00_5068, (int) (((long) 4)));
				BgL_mlz00_5074 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_5068, (int) (((long) 5))));
				BgL_tlz00_5075 = PROCEDURE_REF(BgL_envz00_5068, (int) (((long) 6)));
				BgL_bdz00_5076 = PROCEDURE_REF(BgL_envz00_5068, (int) (((long) 7)));
				BgL_mdz00_5077 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_5068, (int) (((long) 8))));
				BgL_tdz00_5078 = PROCEDURE_REF(BgL_envz00_5068, (int) (((long) 9)));
				BgL_wsiza7eza7_5079 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_5068, (int) (((long) 10))));
				BgL_dz00_5080 = PROCEDURE_REF(BgL_envz00_5068, (int) (((long) 11)));
				BgL_nz00_5081 = PROCEDURE_REF(BgL_envz00_5068, (int) (((long) 12)));
				BgL_wpz00_5082 = PROCEDURE_REF(BgL_envz00_5068, (int) (((long) 13)));
				BgL_ez00_5083 = PROCEDURE_REF(BgL_envz00_5068, (int) (((long) 14)));
				BgL_slidez00_5084 = PROCEDURE_REF(BgL_envz00_5068, (int) (((long) 15)));
				return
					BGl_z62z52dozd2copy2ze2zz__gunza7ipza7(BgL_slidez00_5084,
					BgL_ez00_5083, BgL_wpz00_5082, BgL_nz00_5081, BgL_dz00_5080,
					BgL_wsiza7eza7_5079, BgL_tdz00_5078, BgL_mdz00_5077, BgL_bdz00_5076,
					BgL_tlz00_5075, BgL_mlz00_5074, BgL_blz00_5073, BgL_bkz00_5072,
					BgL_bbz00_5071, BgL_tz00_5070, BgL_inputzd2portzd2_5069);
			}
		}

	}



/* &<@anonymous:1548> */
	obj_t BGl_z62zc3z04anonymousza31548ze3ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5085)
	{
		{	/* Unsafe/gunzip.scm 631 */
			{	/* Unsafe/gunzip.scm 631 */
				obj_t BgL_inputzd2portzd2_5086;
				obj_t BgL_tz00_5087;
				obj_t BgL_bbz00_5088;
				obj_t BgL_bkz00_5089;
				obj_t BgL_blz00_5090;
				long BgL_mlz00_5091;
				obj_t BgL_tlz00_5092;
				obj_t BgL_bdz00_5093;
				long BgL_mdz00_5094;
				obj_t BgL_tdz00_5095;
				long BgL_wsiza7eza7_5096;
				obj_t BgL_dz00_5097;
				obj_t BgL_nz00_5098;
				obj_t BgL_wpz00_5099;
				obj_t BgL_ez00_5100;
				obj_t BgL_slidez00_5101;

				BgL_inputzd2portzd2_5086 =
					((obj_t) PROCEDURE_REF(BgL_envz00_5085, (int) (((long) 0))));
				BgL_tz00_5087 = PROCEDURE_REF(BgL_envz00_5085, (int) (((long) 1)));
				BgL_bbz00_5088 = PROCEDURE_REF(BgL_envz00_5085, (int) (((long) 2)));
				BgL_bkz00_5089 = PROCEDURE_REF(BgL_envz00_5085, (int) (((long) 3)));
				BgL_blz00_5090 = PROCEDURE_REF(BgL_envz00_5085, (int) (((long) 4)));
				BgL_mlz00_5091 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_5085, (int) (((long) 5))));
				BgL_tlz00_5092 = PROCEDURE_REF(BgL_envz00_5085, (int) (((long) 6)));
				BgL_bdz00_5093 = PROCEDURE_REF(BgL_envz00_5085, (int) (((long) 7)));
				BgL_mdz00_5094 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_5085, (int) (((long) 8))));
				BgL_tdz00_5095 = PROCEDURE_REF(BgL_envz00_5085, (int) (((long) 9)));
				BgL_wsiza7eza7_5096 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_5085, (int) (((long) 10))));
				BgL_dz00_5097 = PROCEDURE_REF(BgL_envz00_5085, (int) (((long) 11)));
				BgL_nz00_5098 = PROCEDURE_REF(BgL_envz00_5085, (int) (((long) 12)));
				BgL_wpz00_5099 = PROCEDURE_REF(BgL_envz00_5085, (int) (((long) 13)));
				BgL_ez00_5100 = PROCEDURE_REF(BgL_envz00_5085, (int) (((long) 14)));
				BgL_slidez00_5101 = PROCEDURE_REF(BgL_envz00_5085, (int) (((long) 15)));
				return
					BGl_z62z52dozd2copy2ze2zz__gunza7ipza7(BgL_slidez00_5101,
					BgL_ez00_5100, BgL_wpz00_5099, BgL_nz00_5098, BgL_dz00_5097,
					BgL_wsiza7eza7_5096, BgL_tdz00_5095, BgL_mdz00_5094, BgL_bdz00_5093,
					BgL_tlz00_5092, BgL_mlz00_5091, BgL_blz00_5090, BgL_bkz00_5089,
					BgL_bbz00_5088, BgL_tz00_5087, BgL_inputzd2portzd2_5086);
			}
		}

	}



/* &<@anonymous:1635> */
	BgL_huftz00_bglt BGl_z62zc3z04anonymousza31635ze3ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5102, long BgL_iz00_5103)
	{
		{	/* Unsafe/gunzip.scm 511 */
			{	/* Unsafe/gunzip.scm 512 */
				BgL_huftz00_bglt BgL_new1091z00_5308;

				{	/* Unsafe/gunzip.scm 513 */
					BgL_huftz00_bglt BgL_new1090z00_5309;

					BgL_new1090z00_5309 =
						((BgL_huftz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_huftz00_bgl))));
					{	/* Unsafe/gunzip.scm 513 */
						long BgL_arg1637z00_5310;

						{	/* Unsafe/gunzip.scm 513 */
							long BgL_res2431z00_5311;

							BgL_res2431z00_5311 = BGL_CLASS_INDEX(BGl_huftz00zz__gunza7ipza7);
							BgL_arg1637z00_5310 = BgL_res2431z00_5311;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1090z00_5309), BgL_arg1637z00_5310);
					}
					BgL_new1091z00_5308 = BgL_new1090z00_5309;
				}
				((((BgL_huftz00_bglt) COBJECT(BgL_new1091z00_5308))->BgL_ez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_huftz00_bglt) COBJECT(BgL_new1091z00_5308))->BgL_bz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_huftz00_bglt) COBJECT(BgL_new1091z00_5308))->BgL_vz00) =
					((obj_t) BINT(((long) 0))), BUNSPEC);
				return BgL_new1091z00_5308;
			}
		}

	}



/* gunzip-parse-header */
	BGL_EXPORTED_DEF obj_t BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7(obj_t
		BgL_inz00_20)
	{
		{	/* Unsafe/gunzip.scm 939 */
			{	/* Unsafe/gunzip.scm 940 */
				obj_t BgL_bufz00_2099;

				{	/* Ieee/string.scm 168 */

					BgL_bufz00_2099 = make_string(((long) 4), ((unsigned char) ' '));
				}
				{

					{	/* Unsafe/gunzip.scm 954 */
						obj_t BgL_headerz00_2103;

						BgL_headerz00_2103 =
							BGl_readzd2charszd2zz__r4_input_6_10_2z00(BINT(((long) 2)),
							BgL_inz00_20);
						{	/* Unsafe/gunzip.scm 955 */
							bool_t BgL_test3102z00_7455;

							if (STRINGP(BgL_headerz00_2103))
								{	/* Unsafe/gunzip.scm 955 */
									if ((STRING_LENGTH(BgL_headerz00_2103) == ((long) 2)))
										{	/* Unsafe/gunzip.scm 956 */
											if (
												((STRING_REF(BgL_headerz00_2103,
															((long) 0))) == ((long) 31)))
												{	/* Unsafe/gunzip.scm 957 */
													BgL_test3102z00_7455 =
														(
														(STRING_REF(BgL_headerz00_2103,
																((long) 1))) == ((long) 139));
												}
											else
												{	/* Unsafe/gunzip.scm 957 */
													BgL_test3102z00_7455 = ((bool_t) 0);
												}
										}
									else
										{	/* Unsafe/gunzip.scm 956 */
											BgL_test3102z00_7455 = ((bool_t) 0);
										}
								}
							else
								{	/* Unsafe/gunzip.scm 955 */
									BgL_test3102z00_7455 = ((bool_t) 0);
								}
							if (BgL_test3102z00_7455)
								{	/* Unsafe/gunzip.scm 955 */
									BFALSE;
								}
							else
								{	/* Unsafe/gunzip.scm 960 */
									obj_t BgL_arg1879z00_2116;

									{	/* Unsafe/gunzip.scm 960 */
										obj_t BgL_list1880z00_2117;

										BgL_list1880z00_2117 =
											MAKE_YOUNG_PAIR(BgL_headerz00_2103, BNIL);
										BgL_arg1879z00_2116 =
											BGl_formatz00zz__r4_output_6_10_3z00
											(BGl_string2886z00zz__gunza7ipza7, BgL_list1880z00_2117);
									}
									{	/* Unsafe/gunzip.scm 328 */
										BgL_z62iozd2parsezd2errorz62_bglt BgL_arg1401z00_4204;

										{	/* Unsafe/gunzip.scm 328 */
											BgL_z62iozd2parsezd2errorz62_bglt BgL_new1076z00_4205;

											{	/* Unsafe/gunzip.scm 328 */
												BgL_z62iozd2parsezd2errorz62_bglt BgL_new1075z00_4206;

												BgL_new1075z00_4206 =
													((BgL_z62iozd2parsezd2errorz62_bglt)
													BOBJECT(GC_MALLOC(sizeof(struct
																BgL_z62iozd2parsezd2errorz62_bgl))));
												{	/* Unsafe/gunzip.scm 328 */
													long BgL_arg1405z00_4207;

													{	/* Unsafe/gunzip.scm 328 */
														long BgL_res2316z00_4208;

														BgL_res2316z00_4208 =
															BGL_CLASS_INDEX
															(BGl_z62iozd2parsezd2errorz62zz__objectz00);
														BgL_arg1405z00_4207 = BgL_res2316z00_4208;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1075z00_4206),
														BgL_arg1405z00_4207);
												}
												BgL_new1076z00_4205 = BgL_new1075z00_4206;
											}
											((((BgL_z62exceptionz62_bglt) COBJECT(
															((BgL_z62exceptionz62_bglt)
																BgL_new1076z00_4205)))->BgL_fnamez00) =
												((obj_t) BFALSE), BUNSPEC);
											((((BgL_z62exceptionz62_bglt)
														COBJECT(((BgL_z62exceptionz62_bglt)
																BgL_new1076z00_4205)))->BgL_locationz00) =
												((obj_t) BFALSE), BUNSPEC);
											{
												obj_t BgL_auxz00_7478;

												{	/* Unsafe/gunzip.scm 328 */
													obj_t BgL_arg1402z00_4212;

													{	/* Unsafe/gunzip.scm 328 */
														obj_t BgL_arg1404z00_4213;

														{	/* Unsafe/gunzip.scm 328 */
															obj_t BgL_res2317z00_4214;

															{	/* Unsafe/gunzip.scm 328 */
																obj_t BgL_classz00_4215;

																BgL_classz00_4215 =
																	BGl_z62iozd2parsezd2errorz62zz__objectz00;
																BgL_res2317z00_4214 =
																	BGL_CLASS_ALL_FIELDS(BgL_classz00_4215);
															}
															BgL_arg1404z00_4213 = BgL_res2317z00_4214;
														}
														BgL_arg1402z00_4212 =
															VECTOR_REF(BgL_arg1404z00_4213, ((long) 2));
													}
													BgL_auxz00_7478 =
														BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
														(BgL_arg1402z00_4212);
												}
												((((BgL_z62exceptionz62_bglt) COBJECT(
																((BgL_z62exceptionz62_bglt)
																	BgL_new1076z00_4205)))->BgL_stackz00) =
													((obj_t) BgL_auxz00_7478), BUNSPEC);
											}
											((((BgL_z62errorz62_bglt) COBJECT(
															((BgL_z62errorz62_bglt) BgL_new1076z00_4205)))->
													BgL_procz00) =
												((obj_t) BGl_string2887z00zz__gunza7ipza7), BUNSPEC);
											((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
																BgL_new1076z00_4205)))->BgL_msgz00) =
												((obj_t) BgL_arg1879z00_2116), BUNSPEC);
											((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
																BgL_new1076z00_4205)))->BgL_objz00) =
												((obj_t) BgL_inz00_20), BUNSPEC);
											BgL_arg1401z00_4204 = BgL_new1076z00_4205;
										}
										BGl_raisez00zz__errorz00(((obj_t) BgL_arg1401z00_4204));
					}}}}
					{	/* Unsafe/gunzip.scm 962 */
						obj_t BgL_compressionzd2typezd2_2126;

						BgL_compressionzd2typezd2_2126 =
							BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_inz00_20);
						if ((BgL_compressionzd2typezd2_2126 == BCHAR(((unsigned char) 8))))
							{	/* Unsafe/gunzip.scm 963 */
								BFALSE;
							}
						else
							{	/* Unsafe/gunzip.scm 965 */
								obj_t BgL_arg1887z00_2128;

								{	/* Unsafe/gunzip.scm 965 */
									obj_t BgL_list1888z00_2129;

									BgL_list1888z00_2129 =
										MAKE_YOUNG_PAIR(BgL_compressionzd2typezd2_2126, BNIL);
									BgL_arg1887z00_2128 =
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string2888z00zz__gunza7ipza7, BgL_list1888z00_2129);
								}
								{	/* Unsafe/gunzip.scm 328 */
									BgL_z62iozd2parsezd2errorz62_bglt BgL_arg1401z00_4217;

									{	/* Unsafe/gunzip.scm 328 */
										BgL_z62iozd2parsezd2errorz62_bglt BgL_new1076z00_4218;

										{	/* Unsafe/gunzip.scm 328 */
											BgL_z62iozd2parsezd2errorz62_bglt BgL_new1075z00_4219;

											BgL_new1075z00_4219 =
												((BgL_z62iozd2parsezd2errorz62_bglt)
												BOBJECT(GC_MALLOC(sizeof(struct
															BgL_z62iozd2parsezd2errorz62_bgl))));
											{	/* Unsafe/gunzip.scm 328 */
												long BgL_arg1405z00_4220;

												{	/* Unsafe/gunzip.scm 328 */
													long BgL_res2316z00_4221;

													BgL_res2316z00_4221 =
														BGL_CLASS_INDEX
														(BGl_z62iozd2parsezd2errorz62zz__objectz00);
													BgL_arg1405z00_4220 = BgL_res2316z00_4221;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1075z00_4219),
													BgL_arg1405z00_4220);
											}
											BgL_new1076z00_4218 = BgL_new1075z00_4219;
										}
										((((BgL_z62exceptionz62_bglt) COBJECT(
														((BgL_z62exceptionz62_bglt) BgL_new1076z00_4218)))->
												BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
										((((BgL_z62exceptionz62_bglt)
													COBJECT(((BgL_z62exceptionz62_bglt)
															BgL_new1076z00_4218)))->BgL_locationz00) =
											((obj_t) BFALSE), BUNSPEC);
										{
											obj_t BgL_auxz00_7506;

											{	/* Unsafe/gunzip.scm 328 */
												obj_t BgL_arg1402z00_4225;

												{	/* Unsafe/gunzip.scm 328 */
													obj_t BgL_arg1404z00_4226;

													{	/* Unsafe/gunzip.scm 328 */
														obj_t BgL_res2317z00_4227;

														{	/* Unsafe/gunzip.scm 328 */
															obj_t BgL_classz00_4228;

															BgL_classz00_4228 =
																BGl_z62iozd2parsezd2errorz62zz__objectz00;
															BgL_res2317z00_4227 =
																BGL_CLASS_ALL_FIELDS(BgL_classz00_4228);
														}
														BgL_arg1404z00_4226 = BgL_res2317z00_4227;
													}
													BgL_arg1402z00_4225 =
														VECTOR_REF(BgL_arg1404z00_4226, ((long) 2));
												}
												BgL_auxz00_7506 =
													BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
													(BgL_arg1402z00_4225);
											}
											((((BgL_z62exceptionz62_bglt) COBJECT(
															((BgL_z62exceptionz62_bglt)
																BgL_new1076z00_4218)))->BgL_stackz00) =
												((obj_t) BgL_auxz00_7506), BUNSPEC);
										}
										((((BgL_z62errorz62_bglt) COBJECT(
														((BgL_z62errorz62_bglt) BgL_new1076z00_4218)))->
												BgL_procz00) =
											((obj_t) BGl_string2887z00zz__gunza7ipza7), BUNSPEC);
										((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
															BgL_new1076z00_4218)))->BgL_msgz00) =
											((obj_t) BgL_arg1887z00_2128), BUNSPEC);
										((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
															BgL_new1076z00_4218)))->BgL_objz00) =
											((obj_t) BgL_inz00_20), BUNSPEC);
										BgL_arg1401z00_4217 = BgL_new1076z00_4218;
									}
									BGl_raisez00zz__errorz00(((obj_t) BgL_arg1401z00_4217));
					}}}
					{	/* Unsafe/gunzip.scm 968 */
						long BgL_flagsz00_2130;

						{	/* Unsafe/gunzip.scm 968 */
							obj_t BgL_arg1904z00_2163;

							BgL_arg1904z00_2163 =
								BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_inz00_20);
							BgL_flagsz00_2130 = (CCHAR(BgL_arg1904z00_2163));
						}
						{	/* Unsafe/gunzip.scm 969 */
							bool_t BgL_continuationzf3zf3_2132;

							BgL_continuationzf3zf3_2132 =
								BGl_positivezf3zf3zz__r4_numbers_6_5z00(BINT(
									(BgL_flagsz00_2130 & ((long) 2))));
							{	/* Unsafe/gunzip.scm 970 */
								bool_t BgL_haszd2extrazd2fieldzf3zf3_2133;

								BgL_haszd2extrazd2fieldzf3zf3_2133 =
									BGl_positivezf3zf3zz__r4_numbers_6_5z00(BINT(
										(BgL_flagsz00_2130 & ((long) 4))));
								{	/* Unsafe/gunzip.scm 971 */
									bool_t BgL_haszd2originalzd2filenamezf3zf3_2134;

									BgL_haszd2originalzd2filenamezf3zf3_2134 =
										BGl_positivezf3zf3zz__r4_numbers_6_5z00(BINT(
											(BgL_flagsz00_2130 & ((long) 8))));
									{	/* Unsafe/gunzip.scm 972 */
										bool_t BgL_haszd2commentzf3z21_2135;

										BgL_haszd2commentzf3z21_2135 =
											BGl_positivezf3zf3zz__r4_numbers_6_5z00(BINT(
												(BgL_flagsz00_2130 & ((long) 16))));
										{	/* Unsafe/gunzip.scm 973 */
											bool_t BgL_encryptedzf3zf3_2136;

											BgL_encryptedzf3zf3_2136 =
												BGl_positivezf3zf3zz__r4_numbers_6_5z00(BINT(
													(BgL_flagsz00_2130 & ((long) 32))));
											{	/* Unsafe/gunzip.scm 974 */

												if (BgL_encryptedzf3zf3_2136)
													{	/* Unsafe/gunzip.scm 328 */
														BgL_z62iozd2parsezd2errorz62_bglt
															BgL_arg1401z00_4244;
														{	/* Unsafe/gunzip.scm 328 */
															BgL_z62iozd2parsezd2errorz62_bglt
																BgL_new1076z00_4245;
															{	/* Unsafe/gunzip.scm 328 */
																BgL_z62iozd2parsezd2errorz62_bglt
																	BgL_new1075z00_4246;
																BgL_new1075z00_4246 =
																	((BgL_z62iozd2parsezd2errorz62_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_z62iozd2parsezd2errorz62_bgl))));
																{	/* Unsafe/gunzip.scm 328 */
																	long BgL_arg1405z00_4247;

																	{	/* Unsafe/gunzip.scm 328 */
																		long BgL_res2316z00_4248;

																		BgL_res2316z00_4248 =
																			BGL_CLASS_INDEX
																			(BGl_z62iozd2parsezd2errorz62zz__objectz00);
																		BgL_arg1405z00_4247 = BgL_res2316z00_4248;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1075z00_4246),
																		BgL_arg1405z00_4247);
																}
																BgL_new1076z00_4245 = BgL_new1075z00_4246;
															}
															((((BgL_z62exceptionz62_bglt) COBJECT(
																			((BgL_z62exceptionz62_bglt)
																				BgL_new1076z00_4245)))->BgL_fnamez00) =
																((obj_t) BFALSE), BUNSPEC);
															((((BgL_z62exceptionz62_bglt)
																		COBJECT(((BgL_z62exceptionz62_bglt)
																				BgL_new1076z00_4245)))->
																	BgL_locationz00) = ((obj_t) BFALSE), BUNSPEC);
															{
																obj_t BgL_auxz00_7547;

																{	/* Unsafe/gunzip.scm 328 */
																	obj_t BgL_arg1402z00_4252;

																	{	/* Unsafe/gunzip.scm 328 */
																		obj_t BgL_arg1404z00_4253;

																		{	/* Unsafe/gunzip.scm 328 */
																			obj_t BgL_res2317z00_4254;

																			{	/* Unsafe/gunzip.scm 328 */
																				obj_t BgL_classz00_4255;

																				BgL_classz00_4255 =
																					BGl_z62iozd2parsezd2errorz62zz__objectz00;
																				BgL_res2317z00_4254 =
																					BGL_CLASS_ALL_FIELDS
																					(BgL_classz00_4255);
																			}
																			BgL_arg1404z00_4253 = BgL_res2317z00_4254;
																		}
																		BgL_arg1402z00_4252 =
																			VECTOR_REF(BgL_arg1404z00_4253,
																			((long) 2));
																	}
																	BgL_auxz00_7547 =
																		BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																		(BgL_arg1402z00_4252);
																}
																((((BgL_z62exceptionz62_bglt) COBJECT(
																				((BgL_z62exceptionz62_bglt)
																					BgL_new1076z00_4245)))->
																		BgL_stackz00) =
																	((obj_t) BgL_auxz00_7547), BUNSPEC);
															}
															((((BgL_z62errorz62_bglt) COBJECT(
																			((BgL_z62errorz62_bglt)
																				BgL_new1076z00_4245)))->BgL_procz00) =
																((obj_t) BGl_string2887z00zz__gunza7ipza7),
																BUNSPEC);
															((((BgL_z62errorz62_bglt)
																		COBJECT(((BgL_z62errorz62_bglt)
																				BgL_new1076z00_4245)))->BgL_msgz00) =
																((obj_t) BGl_string2889z00zz__gunza7ipza7),
																BUNSPEC);
															((((BgL_z62errorz62_bglt)
																		COBJECT(((BgL_z62errorz62_bglt)
																				BgL_new1076z00_4245)))->BgL_objz00) =
																((obj_t) BgL_inz00_20), BUNSPEC);
															BgL_arg1401z00_4244 = BgL_new1076z00_4245;
														}
														BGl_raisez00zz__errorz00(
															((obj_t) BgL_arg1401z00_4244));
													}
												else
													{	/* Unsafe/gunzip.scm 975 */
														BFALSE;
													}
												if (BgL_continuationzf3zf3_2132)
													{	/* Unsafe/gunzip.scm 328 */
														BgL_z62iozd2parsezd2errorz62_bglt
															BgL_arg1401z00_4257;
														{	/* Unsafe/gunzip.scm 328 */
															BgL_z62iozd2parsezd2errorz62_bglt
																BgL_new1076z00_4258;
															{	/* Unsafe/gunzip.scm 328 */
																BgL_z62iozd2parsezd2errorz62_bglt
																	BgL_new1075z00_4259;
																BgL_new1075z00_4259 =
																	((BgL_z62iozd2parsezd2errorz62_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_z62iozd2parsezd2errorz62_bgl))));
																{	/* Unsafe/gunzip.scm 328 */
																	long BgL_arg1405z00_4260;

																	{	/* Unsafe/gunzip.scm 328 */
																		long BgL_res2316z00_4261;

																		BgL_res2316z00_4261 =
																			BGL_CLASS_INDEX
																			(BGl_z62iozd2parsezd2errorz62zz__objectz00);
																		BgL_arg1405z00_4260 = BgL_res2316z00_4261;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1075z00_4259),
																		BgL_arg1405z00_4260);
																}
																BgL_new1076z00_4258 = BgL_new1075z00_4259;
															}
															((((BgL_z62exceptionz62_bglt) COBJECT(
																			((BgL_z62exceptionz62_bglt)
																				BgL_new1076z00_4258)))->BgL_fnamez00) =
																((obj_t) BFALSE), BUNSPEC);
															((((BgL_z62exceptionz62_bglt)
																		COBJECT(((BgL_z62exceptionz62_bglt)
																				BgL_new1076z00_4258)))->
																	BgL_locationz00) = ((obj_t) BFALSE), BUNSPEC);
															{
																obj_t BgL_auxz00_7570;

																{	/* Unsafe/gunzip.scm 328 */
																	obj_t BgL_arg1402z00_4265;

																	{	/* Unsafe/gunzip.scm 328 */
																		obj_t BgL_arg1404z00_4266;

																		{	/* Unsafe/gunzip.scm 328 */
																			obj_t BgL_res2317z00_4267;

																			{	/* Unsafe/gunzip.scm 328 */
																				obj_t BgL_classz00_4268;

																				BgL_classz00_4268 =
																					BGl_z62iozd2parsezd2errorz62zz__objectz00;
																				BgL_res2317z00_4267 =
																					BGL_CLASS_ALL_FIELDS
																					(BgL_classz00_4268);
																			}
																			BgL_arg1404z00_4266 = BgL_res2317z00_4267;
																		}
																		BgL_arg1402z00_4265 =
																			VECTOR_REF(BgL_arg1404z00_4266,
																			((long) 2));
																	}
																	BgL_auxz00_7570 =
																		BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																		(BgL_arg1402z00_4265);
																}
																((((BgL_z62exceptionz62_bglt) COBJECT(
																				((BgL_z62exceptionz62_bglt)
																					BgL_new1076z00_4258)))->
																		BgL_stackz00) =
																	((obj_t) BgL_auxz00_7570), BUNSPEC);
															}
															((((BgL_z62errorz62_bglt) COBJECT(
																			((BgL_z62errorz62_bglt)
																				BgL_new1076z00_4258)))->BgL_procz00) =
																((obj_t) BGl_string2887z00zz__gunza7ipza7),
																BUNSPEC);
															((((BgL_z62errorz62_bglt)
																		COBJECT(((BgL_z62errorz62_bglt)
																				BgL_new1076z00_4258)))->BgL_msgz00) =
																((obj_t) BGl_string2890z00zz__gunza7ipza7),
																BUNSPEC);
															((((BgL_z62errorz62_bglt)
																		COBJECT(((BgL_z62errorz62_bglt)
																				BgL_new1076z00_4258)))->BgL_objz00) =
																((obj_t) BgL_inz00_20), BUNSPEC);
															BgL_arg1401z00_4257 = BgL_new1076z00_4258;
														}
														BGl_raisez00zz__errorz00(
															((obj_t) BgL_arg1401z00_4257));
													}
												else
													{	/* Unsafe/gunzip.scm 977 */
														BFALSE;
													}
												{	/* Unsafe/gunzip.scm 979 */
													long BgL_unixzd2modzd2timez00_2137;

													BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00
														(BgL_bufz00_2099, BINT(((long) 4)), BgL_inz00_20);
													{	/* Unsafe/gunzip.scm 946 */
														unsigned char BgL_arg1911z00_2176;
														unsigned char BgL_arg1912z00_2177;
														unsigned char BgL_arg1913z00_2178;
														unsigned char BgL_arg1914z00_2179;

														BgL_arg1911z00_2176 =
															STRING_REF(BgL_bufz00_2099, ((long) 0));
														BgL_arg1912z00_2177 =
															STRING_REF(BgL_bufz00_2099, ((long) 1));
														BgL_arg1913z00_2178 =
															STRING_REF(BgL_bufz00_2099, ((long) 2));
														BgL_arg1914z00_2179 =
															STRING_REF(BgL_bufz00_2099, ((long) 3));
														{	/* Unsafe/gunzip.scm 929 */
															long BgL_arg1847z00_4140;
															long BgL_arg1848z00_4141;

															{	/* Unsafe/gunzip.scm 929 */
																long BgL_arg1850z00_4142;

																BgL_arg1850z00_4142 = (BgL_arg1911z00_2176);
																{	/* Unsafe/gunzip.scm 929 */
																	long BgL_res2652z00_4156;

																	BgL_res2652z00_4156 =
																		(long) (BgL_arg1850z00_4142);
																	BgL_arg1847z00_4140 = BgL_res2652z00_4156;
															}}
															{	/* Unsafe/gunzip.scm 931 */
																long BgL_arg1851z00_4143;
																long BgL_arg1852z00_4144;

																{	/* Unsafe/gunzip.scm 931 */
																	long BgL_arg1853z00_4145;

																	{	/* Unsafe/gunzip.scm 931 */
																		long BgL_arg1855z00_4146;

																		BgL_arg1855z00_4146 = (BgL_arg1912z00_2177);
																		{	/* Unsafe/gunzip.scm 931 */
																			long BgL_res2654z00_4160;

																			BgL_res2654z00_4160 =
																				(long) (BgL_arg1855z00_4146);
																			BgL_arg1853z00_4145 = BgL_res2654z00_4160;
																	}}
																	BgL_arg1851z00_4143 =
																		(BgL_arg1853z00_4145 << (int) (((long) 8)));
																}
																{	/* Unsafe/gunzip.scm 933 */
																	long BgL_arg1856z00_4147;
																	long BgL_arg1857z00_4148;

																	{	/* Unsafe/gunzip.scm 933 */
																		long BgL_arg1858z00_4149;

																		{	/* Unsafe/gunzip.scm 933 */
																			long BgL_arg1859z00_4150;

																			BgL_arg1859z00_4150 =
																				(BgL_arg1913z00_2178);
																			{	/* Unsafe/gunzip.scm 933 */
																				long BgL_res2657z00_4166;

																				BgL_res2657z00_4166 =
																					(long) (BgL_arg1859z00_4150);
																				BgL_arg1858z00_4149 =
																					BgL_res2657z00_4166;
																		}}
																		BgL_arg1856z00_4147 =
																			(BgL_arg1858z00_4149 <<
																			(int) (((long) 16)));
																	}
																	{	/* Unsafe/gunzip.scm 934 */
																		long BgL_arg1861z00_4151;

																		{	/* Unsafe/gunzip.scm 934 */
																			long BgL_arg1862z00_4152;

																			BgL_arg1862z00_4152 =
																				(BgL_arg1914z00_2179);
																			{	/* Unsafe/gunzip.scm 934 */
																				long BgL_res2660z00_4172;

																				BgL_res2660z00_4172 =
																					(long) (BgL_arg1862z00_4152);
																				BgL_arg1861z00_4151 =
																					BgL_res2660z00_4172;
																		}}
																		BgL_arg1857z00_4148 =
																			(BgL_arg1861z00_4151 <<
																			(int) (((long) 24)));
																	}
																	BgL_arg1852z00_4144 =
																		(BgL_arg1856z00_4147 | BgL_arg1857z00_4148);
																}
																BgL_arg1848z00_4141 =
																	(BgL_arg1851z00_4143 | BgL_arg1852z00_4144);
															}
															BgL_unixzd2modzd2timez00_2137 =
																(BgL_arg1847z00_4140 | BgL_arg1848z00_4141);
													}}
													{	/* Unsafe/gunzip.scm 979 */
														obj_t BgL_extrazd2flagszd2_2138;

														BgL_extrazd2flagszd2_2138 =
															BGl_readzd2charzd2zz__r4_input_6_10_2z00
															(BgL_inz00_20);
														{	/* Unsafe/gunzip.scm 980 */
															obj_t BgL_sourcezd2oszd2_2139;

															BgL_sourcezd2oszd2_2139 =
																BGl_readzd2charzd2zz__r4_input_6_10_2z00
																(BgL_inz00_20);
															{	/* Unsafe/gunzip.scm 981 */

																if (BgL_continuationzf3zf3_2132)
																	{	/* Unsafe/gunzip.scm 982 */
																		BINT(BGl_readzd2int2ze70z35zz__gunza7ipza7
																			(BgL_inz00_20, BgL_bufz00_2099));
																	}
																else
																	{	/* Unsafe/gunzip.scm 982 */
																		BFALSE;
																	}
																if (BgL_haszd2extrazd2fieldzf3zf3_2133)
																	{	/* Unsafe/gunzip.scm 985 */
																		long BgL_lenz00_2140;

																		BgL_lenz00_2140 =
																			BGl_readzd2int2ze70z35zz__gunza7ipza7
																			(BgL_inz00_20, BgL_bufz00_2099);
																		{
																			long BgL_lenz00_4279;

																			BgL_lenz00_4279 = BgL_lenz00_2140;
																		BgL_loopz00_4278:
																			if (BGl_za7erozf3z54zz__r4_numbers_6_5z00
																				(BINT(BgL_lenz00_4279)))
																				{	/* Unsafe/gunzip.scm 987 */
																					((bool_t) 0);
																				}
																			else
																				{	/* Unsafe/gunzip.scm 987 */
																					BGl_readzd2charzd2zz__r4_input_6_10_2z00
																						(BgL_inz00_20);
																					{
																						long BgL_lenz00_7618;

																						BgL_lenz00_7618 =
																							(BgL_lenz00_4279 - ((long) 1));
																						BgL_lenz00_4279 = BgL_lenz00_7618;
																						goto BgL_loopz00_4278;
																					}
																				}
																		}
																	}
																else
																	{	/* Unsafe/gunzip.scm 984 */
																		((bool_t) 0);
																	}
																{	/* Unsafe/gunzip.scm 990 */
																	obj_t BgL_originalzd2filenamezd2_2147;

																	if (BgL_haszd2originalzd2filenamezf3zf3_2134)
																		{	/* Unsafe/gunzip.scm 990 */
																			BgL_originalzd2filenamezd2_2147 =
																				BGl_readzd2nullzd2termzd2stringze70z35zz__gunza7ipza7
																				(BgL_inz00_20);
																		}
																	else
																		{	/* Unsafe/gunzip.scm 990 */
																			BgL_originalzd2filenamezd2_2147 = BFALSE;
																		}
																	{	/* Unsafe/gunzip.scm 990 */
																		obj_t BgL_commentz00_2148;

																		if (BgL_haszd2commentzf3z21_2135)
																			{	/* Unsafe/gunzip.scm 992 */
																				BgL_commentz00_2148 =
																					BGl_readzd2nullzd2termzd2stringze70z35zz__gunza7ipza7
																					(BgL_inz00_20);
																			}
																		else
																			{	/* Unsafe/gunzip.scm 992 */
																				BgL_commentz00_2148 = BFALSE;
																			}
																		{	/* Unsafe/gunzip.scm 992 */

																			if (BgL_encryptedzf3zf3_2136)
																				{
																					long BgL_nz00_4295;

																					{	/* Unsafe/gunzip.scm 994 */
																						bool_t BgL_tmpz00_7625;

																						BgL_nz00_4295 = ((long) 12);
																					BgL_loopz00_4294:
																						if (BGl_za7erozf3z54zz__r4_numbers_6_5z00(BINT(BgL_nz00_4295)))
																							{	/* Unsafe/gunzip.scm 995 */
																								BgL_tmpz00_7625 = ((bool_t) 0);
																							}
																						else
																							{	/* Unsafe/gunzip.scm 995 */
																								BGl_readzd2charzd2zz__r4_input_6_10_2z00
																									(BgL_inz00_20);
																								{
																									long BgL_nz00_7630;

																									BgL_nz00_7630 =
																										(BgL_nz00_4295 -
																										((long) 1));
																									BgL_nz00_4295 = BgL_nz00_7630;
																									goto BgL_loopz00_4294;
																								}
																							}
																						return BBOOL(BgL_tmpz00_7625);
																					}
																				}
																			else
																				{	/* Unsafe/gunzip.scm 993 */
																					return BFALSE;
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



/* read-int2~0 */
	long BGl_readzd2int2ze70z35zz__gunza7ipza7(obj_t BgL_inz00_5228,
		obj_t BgL_bufz00_5227)
	{
		{	/* Unsafe/gunzip.scm 942 */
			BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(BgL_bufz00_5227,
				BINT(((long) 2)), BgL_inz00_5228);
			return
				(
				(STRING_REF(BgL_bufz00_5227, ((long) 0))) |
				((STRING_REF(BgL_bufz00_5227, ((long) 1))) << (int) (((long) 8))));
		}

	}



/* read-null-term-string~0 */
	obj_t BGl_readzd2nullzd2termzd2stringze70z35zz__gunza7ipza7(obj_t
		BgL_inz00_5229)
	{
		{	/* Unsafe/gunzip.scm 953 */
			{
				obj_t BgL_sz00_2167;

				BgL_sz00_2167 = BNIL;
			BgL_zc3z04anonymousza31906ze3z87_2168:
				{	/* Unsafe/gunzip.scm 950 */
					obj_t BgL_rz00_2169;

					BgL_rz00_2169 =
						BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_inz00_5229);
					if ((((unsigned char) '\000') == CCHAR(BgL_rz00_2169)))
						{	/* Unsafe/gunzip.scm 951 */
							return
								BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(bgl_reverse_bang
								(BgL_sz00_2167));
						}
					else
						{	/* Unsafe/gunzip.scm 953 */
							obj_t BgL_arg1909z00_2172;

							BgL_arg1909z00_2172 =
								MAKE_YOUNG_PAIR(BgL_rz00_2169, BgL_sz00_2167);
							{
								obj_t BgL_sz00_7649;

								BgL_sz00_7649 = BgL_arg1909z00_2172;
								BgL_sz00_2167 = BgL_sz00_7649;
								goto BgL_zc3z04anonymousza31906ze3z87_2168;
							}
						}
				}
			}
		}

	}



/* &gunzip-parse-header */
	obj_t BGl_z62gunza7ipzd2parsezd2headerzc5zz__gunza7ipza7(obj_t
		BgL_envz00_5113, obj_t BgL_inz00_5114)
	{
		{	/* Unsafe/gunzip.scm 939 */
			return BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7(BgL_inz00_5114);
		}

	}



/* inflate */
	obj_t BGl_inflatez00zz__gunza7ipza7(obj_t BgL_inz00_21, obj_t BgL_outz00_22)
	{
		{	/* Unsafe/gunzip.scm 1002 */
			{	/* Unsafe/gunzip.scm 1002 */
				obj_t BgL_bufferz00_2187;

				{	/* Ieee/string.scm 168 */

					BgL_bufferz00_2187 =
						make_string(((long) 32768), ((unsigned char) ' '));
				}
				{	/* Unsafe/gunzip.scm 1004 */
					obj_t BgL_statez00_2188;

					BgL_statez00_2188 =
						BGl_inflatezd2entryzd2zz__gunza7ipza7(BgL_inz00_21,
						BgL_bufferz00_2187);
					{	/* Unsafe/gunzip.scm 1005 */
						obj_t BgL_valz00_2189;
						obj_t BgL_kontz00_2190;

						{	/* Unsafe/gunzip.scm 1006 */
							int BgL_tmpz00_7653;

							BgL_tmpz00_7653 = (int) (((long) 1));
							BgL_valz00_2189 = BGL_MVALUES_VAL(BgL_tmpz00_7653);
						}
						{	/* Unsafe/gunzip.scm 1006 */
							int BgL_tmpz00_7656;

							BgL_tmpz00_7656 = (int) (((long) 2));
							BgL_kontz00_2190 = BGL_MVALUES_VAL(BgL_tmpz00_7656);
						}
						{
							obj_t BgL_statez00_4315;
							obj_t BgL_valz00_4316;
							obj_t BgL_kontz00_4317;
							long BgL_siza7eza7_4318;

							BgL_statez00_4315 = BgL_statez00_2188;
							BgL_valz00_4316 = BgL_valz00_2189;
							BgL_kontz00_4317 = BgL_kontz00_2190;
							BgL_siza7eza7_4318 = ((long) 0);
						BgL_loopz00_4314:
							if ((BgL_statez00_4315 == BGl_symbol2852z00zz__gunza7ipza7))
								{	/* Unsafe/gunzip.scm 1010 */
									{	/* Unsafe/gunzip.scm 1012 */
										long BgL_tmpz00_7661;

										BgL_tmpz00_7661 = (long) CINT(BgL_valz00_4316);
										bgl_display_substring(BgL_bufferz00_2187, ((long) 0),
											BgL_tmpz00_7661, BgL_outz00_22);
									}
									BgL_bufferz00_2187 = BFALSE;
									return ADDFX(BINT(BgL_siza7eza7_4318), BgL_valz00_4316);
								}
							else
								{	/* Unsafe/gunzip.scm 1010 */
									if ((BgL_statez00_4315 == BGl_symbol2856z00zz__gunza7ipza7))
										{	/* Unsafe/gunzip.scm 1010 */
											{	/* Unsafe/gunzip.scm 1016 */
												long BgL_tmpz00_7668;

												BgL_tmpz00_7668 = (long) CINT(BgL_valz00_4316);
												bgl_display_substring(BgL_bufferz00_2187, ((long) 0),
													BgL_tmpz00_7668, BgL_outz00_22);
											}
											{	/* Unsafe/gunzip.scm 1017 */
												obj_t BgL_state2z00_4329;

												BgL_state2z00_4329 =
													PROCEDURE_ENTRY(BgL_kontz00_4317) (BgL_kontz00_4317,
													BEOA);
												{	/* Unsafe/gunzip.scm 1018 */
													obj_t BgL_val2z00_4330;
													obj_t BgL_kont2z00_4331;

													{	/* Unsafe/gunzip.scm 1019 */
														int BgL_tmpz00_7674;

														BgL_tmpz00_7674 = (int) (((long) 1));
														BgL_val2z00_4330 = BGL_MVALUES_VAL(BgL_tmpz00_7674);
													}
													{	/* Unsafe/gunzip.scm 1019 */
														int BgL_tmpz00_7677;

														BgL_tmpz00_7677 = (int) (((long) 2));
														BgL_kont2z00_4331 =
															BGL_MVALUES_VAL(BgL_tmpz00_7677);
													}
													{
														long BgL_siza7eza7_7683;
														obj_t BgL_kontz00_7682;
														obj_t BgL_valz00_7681;
														obj_t BgL_statez00_7680;

														BgL_statez00_7680 = BgL_state2z00_4329;
														BgL_valz00_7681 = BgL_val2z00_4330;
														BgL_kontz00_7682 = BgL_kont2z00_4331;
														BgL_siza7eza7_7683 =
															(
															(long) CINT(BgL_valz00_4316) +
															BgL_siza7eza7_4318);
														BgL_siza7eza7_4318 = BgL_siza7eza7_7683;
														BgL_kontz00_4317 = BgL_kontz00_7682;
														BgL_valz00_4316 = BgL_valz00_7681;
														BgL_statez00_4315 = BgL_statez00_7680;
														goto BgL_loopz00_4314;
													}
												}
											}
										}
									else
										{	/* Unsafe/gunzip.scm 1010 */
											return BUNSPEC;
										}
								}
						}
					}
				}
			}
		}

	}



/* gunzip-sendchars */
	BGL_EXPORTED_DEF obj_t BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7(obj_t
		BgL_inz00_25, obj_t BgL_outz00_26)
	{
		{	/* Unsafe/gunzip.scm 1031 */
			{	/* Unsafe/gunzip.scm 1032 */
				obj_t BgL_arg1924z00_4336;

				BgL_arg1924z00_4336 = BGL_INPUT_GZIP_PORT_INPUT_PORT(BgL_inz00_25);
				BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7(BgL_arg1924z00_4336);
				return
					BGl_inflatez00zz__gunza7ipza7(BgL_arg1924z00_4336, BgL_outz00_26);
			}
		}

	}



/* &gunzip-sendchars */
	obj_t BGl_z62gunza7ipzd2sendcharsz17zz__gunza7ipza7(obj_t BgL_envz00_5115,
		obj_t BgL_inz00_5116, obj_t BgL_outz00_5117)
	{
		{	/* Unsafe/gunzip.scm 1031 */
			{	/* Unsafe/gunzip.scm 1032 */
				obj_t BgL_auxz00_7696;
				obj_t BgL_auxz00_7689;

				if (OUTPUT_PORTP(BgL_outz00_5117))
					{	/* Unsafe/gunzip.scm 1032 */
						BgL_auxz00_7696 = BgL_outz00_5117;
					}
				else
					{
						obj_t BgL_auxz00_7699;

						BgL_auxz00_7699 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2891z00zz__gunza7ipza7,
							BINT(((long) 35558)), BGl_string2892z00zz__gunza7ipza7,
							BGl_string2894z00zz__gunza7ipza7, BgL_outz00_5117);
						FAILURE(BgL_auxz00_7699, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_inz00_5116))
					{	/* Unsafe/gunzip.scm 1032 */
						BgL_auxz00_7689 = BgL_inz00_5116;
					}
				else
					{
						obj_t BgL_auxz00_7692;

						BgL_auxz00_7692 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2891z00zz__gunza7ipza7,
							BINT(((long) 35558)), BGl_string2892z00zz__gunza7ipza7,
							BGl_string2893z00zz__gunza7ipza7, BgL_inz00_5116);
						FAILURE(BgL_auxz00_7692, BFALSE, BFALSE);
					}
				return
					BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7(BgL_auxz00_7689,
					BgL_auxz00_7696);
			}
		}

	}



/* inflate-sendchars */
	BGL_EXPORTED_DEF obj_t BGl_inflatezd2sendcharszd2zz__gunza7ipza7(obj_t
		BgL_inz00_27, obj_t BgL_outz00_28)
	{
		{	/* Unsafe/gunzip.scm 1037 */
			{	/* Unsafe/gunzip.scm 1038 */
				obj_t BgL_arg1925z00_4339;

				BgL_arg1925z00_4339 = BGL_INPUT_GZIP_PORT_INPUT_PORT(BgL_inz00_27);
				return
					BGl_inflatez00zz__gunza7ipza7(BgL_arg1925z00_4339, BgL_outz00_28);
			}
		}

	}



/* &inflate-sendchars */
	obj_t BGl_z62inflatezd2sendcharszb0zz__gunza7ipza7(obj_t BgL_envz00_5118,
		obj_t BgL_inz00_5119, obj_t BgL_outz00_5120)
	{
		{	/* Unsafe/gunzip.scm 1037 */
			{	/* Unsafe/gunzip.scm 1038 */
				obj_t BgL_auxz00_7713;
				obj_t BgL_auxz00_7706;

				if (OUTPUT_PORTP(BgL_outz00_5120))
					{	/* Unsafe/gunzip.scm 1038 */
						BgL_auxz00_7713 = BgL_outz00_5120;
					}
				else
					{
						obj_t BgL_auxz00_7716;

						BgL_auxz00_7716 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2891z00zz__gunza7ipza7,
							BINT(((long) 35893)), BGl_string2895z00zz__gunza7ipza7,
							BGl_string2894z00zz__gunza7ipza7, BgL_outz00_5120);
						FAILURE(BgL_auxz00_7716, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_inz00_5119))
					{	/* Unsafe/gunzip.scm 1038 */
						BgL_auxz00_7706 = BgL_inz00_5119;
					}
				else
					{
						obj_t BgL_auxz00_7709;

						BgL_auxz00_7709 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2891z00zz__gunza7ipza7,
							BINT(((long) 35893)), BGl_string2895z00zz__gunza7ipza7,
							BGl_string2893z00zz__gunza7ipza7, BgL_inz00_5119);
						FAILURE(BgL_auxz00_7709, BFALSE, BFALSE);
					}
				return
					BGl_inflatezd2sendcharszd2zz__gunza7ipza7(BgL_auxz00_7706,
					BgL_auxz00_7713);
			}
		}

	}



/* port->port */
	obj_t BGl_portzd2ze3portz31zz__gunza7ipza7(obj_t BgL_inz00_37,
		obj_t BgL_statez00_38, obj_t BgL_bufinfoz00_39, long BgL_bufsiza7eza7_40,
		obj_t BgL_oncompletez00_41)
	{
		{	/* Unsafe/gunzip.scm 1059 */
			{	/* Unsafe/gunzip.scm 1060 */
				obj_t BgL_bufferz00_5137;
				obj_t BgL_statez00_5138;
				obj_t BgL_kontz00_5139;

				{	/* Unsafe/gunzip.scm 1060 */
					obj_t BgL_cellvalz00_7721;

					{	/* Ieee/string.scm 168 */

						BgL_cellvalz00_7721 =
							make_string(BgL_bufsiza7eza7_40, ((unsigned char) ' '));
					}
					BgL_bufferz00_5137 = MAKE_CELL(BgL_cellvalz00_7721);
				}
				BgL_statez00_5138 = MAKE_CELL(BgL_statez00_38);
				BgL_kontz00_5139 = MAKE_CELL(BUNSPEC);
				{	/* Unsafe/gunzip.scm 1064 */
					obj_t BgL_arg1929z00_2216;

					BgL_arg1929z00_2216 =
						BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(CELL_REF
						(BgL_statez00_5138), BgL_bufinfoz00_39, (int) (default_io_bufsiz));
					{	/* Unsafe/gunzip.scm 1066 */
						obj_t BgL_zc3z04anonymousza31930ze3z87_5121;

						BgL_zc3z04anonymousza31930ze3z87_5121 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31930ze3ze5zz__gunza7ipza7,
							(int) (((long) 0)), (int) (((long) 6)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31930ze3z87_5121,
							(int) (((long) 0)), ((obj_t) BgL_statez00_5138));
						PROCEDURE_SET(BgL_zc3z04anonymousza31930ze3z87_5121,
							(int) (((long) 1)), BgL_inz00_37);
						PROCEDURE_SET(BgL_zc3z04anonymousza31930ze3z87_5121,
							(int) (((long) 2)), ((obj_t) BgL_bufferz00_5137));
						PROCEDURE_SET(BgL_zc3z04anonymousza31930ze3z87_5121,
							(int) (((long) 3)), ((obj_t) BgL_kontz00_5139));
						PROCEDURE_SET(BgL_zc3z04anonymousza31930ze3z87_5121,
							(int) (((long) 4)), BINT(BgL_bufsiza7eza7_40));
						PROCEDURE_SET(BgL_zc3z04anonymousza31930ze3z87_5121,
							(int) (((long) 5)), BgL_oncompletez00_41);
						return
							bgl_open_input_gzip_port(BgL_zc3z04anonymousza31930ze3z87_5121,
							BgL_inz00_37, BgL_arg1929z00_2216);
					}
				}
			}
		}

	}



/* &<@anonymous:1930> */
	obj_t BGl_z62zc3z04anonymousza31930ze3ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5122)
	{
		{	/* Unsafe/gunzip.scm 1064 */
			{	/* Unsafe/gunzip.scm 1066 */
				obj_t BgL_statez00_5123;
				obj_t BgL_inz00_5124;
				obj_t BgL_bufferz00_5125;
				obj_t BgL_kontz00_5126;
				long BgL_bufsiza7eza7_5127;
				obj_t BgL_oncompletez00_5128;

				BgL_statez00_5123 = PROCEDURE_REF(BgL_envz00_5122, (int) (((long) 0)));
				BgL_inz00_5124 =
					((obj_t) PROCEDURE_REF(BgL_envz00_5122, (int) (((long) 1))));
				BgL_bufferz00_5125 = PROCEDURE_REF(BgL_envz00_5122, (int) (((long) 2)));
				BgL_kontz00_5126 = PROCEDURE_REF(BgL_envz00_5122, (int) (((long) 3)));
				BgL_bufsiza7eza7_5127 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_5122, (int) (((long) 4))));
				BgL_oncompletez00_5128 =
					PROCEDURE_REF(BgL_envz00_5122, (int) (((long) 5)));
				{
					obj_t BgL_valz00_5313;

					BgL_valz00_5313 = BINT(((long) 0));
				BgL_loopz00_5312:
					{	/* Unsafe/gunzip.scm 1066 */
						obj_t BgL_casezd2valuezd2_5314;

						BgL_casezd2valuezd2_5314 = CELL_REF(BgL_statez00_5123);
						if ((BgL_casezd2valuezd2_5314 == BGl_symbol2896z00zz__gunza7ipza7))
							{	/* Unsafe/gunzip.scm 1066 */
								if (PROCEDUREP(BgL_oncompletez00_5128))
									{	/* Unsafe/gunzip.scm 1068 */
										PROCEDURE_ENTRY(BgL_oncompletez00_5128)
											(BgL_oncompletez00_5128, BgL_inz00_5124,
											CELL_REF(BgL_bufferz00_5125), BEOA);
									}
								else
									{	/* Unsafe/gunzip.scm 1068 */
										BFALSE;
									}
								{	/* Unsafe/gunzip.scm 1070 */
									obj_t BgL_auxz00_5315;

									BgL_auxz00_5315 = BFALSE;
									CELL_SET(BgL_bufferz00_5125, BgL_auxz00_5315);
								}
								return BFALSE;
							}
						else
							{	/* Unsafe/gunzip.scm 1066 */
								if (
									(BgL_casezd2valuezd2_5314 ==
										BGl_symbol2852z00zz__gunza7ipza7))
									{	/* Unsafe/gunzip.scm 1066 */
										{	/* Unsafe/gunzip.scm 1073 */
											obj_t BgL_auxz00_5316;

											BgL_auxz00_5316 = BGl_symbol2896z00zz__gunza7ipza7;
											CELL_SET(BgL_statez00_5123, BgL_auxz00_5316);
										}
										{	/* Unsafe/gunzip.scm 1074 */
											obj_t BgL_bufferz00_5317;

											BgL_bufferz00_5317 = CELL_REF(BgL_bufferz00_5125);
											if (
												((long) CINT(BgL_valz00_5313) == BgL_bufsiza7eza7_5127))
												{	/* Unsafe/gunzip.scm 1052 */
													return BgL_bufferz00_5317;
												}
											else
												{	/* Unsafe/gunzip.scm 1054 */
													long BgL_lz00_5318;

													BgL_lz00_5318 = (long) CINT(BgL_valz00_5313);
													{	/* Unsafe/gunzip.scm 1054 */
														obj_t BgL_tmpz00_7774;

														BgL_tmpz00_7774 = ((obj_t) BgL_bufferz00_5317);
														return
															bgl_string_shrink(BgL_tmpz00_7774, BgL_lz00_5318);
													}
												}
										}
									}
								else
									{	/* Unsafe/gunzip.scm 1066 */
										if (
											(BgL_casezd2valuezd2_5314 ==
												BGl_symbol2856z00zz__gunza7ipza7))
											{	/* Unsafe/gunzip.scm 1066 */
												{	/* Unsafe/gunzip.scm 1076 */
													obj_t BgL_auxz00_5319;

													BgL_auxz00_5319 = BGl_symbol2898z00zz__gunza7ipza7;
													CELL_SET(BgL_statez00_5123, BgL_auxz00_5319);
												}
												{	/* Unsafe/gunzip.scm 1077 */
													obj_t BgL_bufferz00_5320;

													BgL_bufferz00_5320 = CELL_REF(BgL_bufferz00_5125);
													if (
														((long) CINT(BgL_valz00_5313) ==
															BgL_bufsiza7eza7_5127))
														{	/* Unsafe/gunzip.scm 1044 */
															return BgL_bufferz00_5320;
														}
													else
														{	/* Unsafe/gunzip.scm 1046 */
															obj_t BgL_res2703z00_5321;

															{	/* Unsafe/gunzip.scm 1046 */
																long BgL_endz00_5322;

																BgL_endz00_5322 = (long) CINT(BgL_valz00_5313);
																BgL_res2703z00_5321 =
																	c_substring(
																	((obj_t) BgL_bufferz00_5320), ((long) 0),
																	BgL_endz00_5322);
															}
															return BgL_res2703z00_5321;
														}
												}
											}
										else
											{	/* Unsafe/gunzip.scm 1066 */
												if (
													(BgL_casezd2valuezd2_5314 ==
														BGl_symbol2898z00zz__gunza7ipza7))
													{	/* Unsafe/gunzip.scm 1079 */
														obj_t BgL_state2z00_5323;

														{	/* Unsafe/gunzip.scm 1080 */
															obj_t BgL_tmpfunz00_7789;

															BgL_tmpfunz00_7789 = CELL_REF(BgL_kontz00_5126);
															BgL_state2z00_5323 =
																PROCEDURE_ENTRY(BgL_tmpfunz00_7789) (CELL_REF
																(BgL_kontz00_5126), BEOA);
														}
														{	/* Unsafe/gunzip.scm 1080 */
															obj_t BgL_val2z00_5324;
															obj_t BgL_kont2z00_5325;

															{	/* Unsafe/gunzip.scm 1081 */
																int BgL_tmpz00_7790;

																BgL_tmpz00_7790 = (int) (((long) 1));
																BgL_val2z00_5324 =
																	BGL_MVALUES_VAL(BgL_tmpz00_7790);
															}
															{	/* Unsafe/gunzip.scm 1081 */
																int BgL_tmpz00_7793;

																BgL_tmpz00_7793 = (int) (((long) 2));
																BgL_kont2z00_5325 =
																	BGL_MVALUES_VAL(BgL_tmpz00_7793);
															}
															CELL_SET(BgL_statez00_5123, BgL_state2z00_5323);
															CELL_SET(BgL_kontz00_5126, BgL_kont2z00_5325);
															{
																obj_t BgL_valz00_7796;

																BgL_valz00_7796 = BgL_val2z00_5324;
																BgL_valz00_5313 = BgL_valz00_7796;
																goto BgL_loopz00_5312;
															}
														}
													}
												else
													{	/* Unsafe/gunzip.scm 1066 */
														if (
															(BgL_casezd2valuezd2_5314 ==
																BGl_symbol2900z00zz__gunza7ipza7))
															{	/* Unsafe/gunzip.scm 1066 */
																BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7
																	(BgL_inz00_5124);
																{	/* Unsafe/gunzip.scm 1086 */
																	obj_t BgL_auxz00_5326;

																	BgL_auxz00_5326 =
																		BGl_symbol2902z00zz__gunza7ipza7;
																	CELL_SET(BgL_statez00_5123, BgL_auxz00_5326);
																}
																{

																	goto BgL_loopz00_5312;
																}
															}
														else
															{	/* Unsafe/gunzip.scm 1066 */
																if (
																	(BgL_casezd2valuezd2_5314 ==
																		BGl_symbol2902z00zz__gunza7ipza7))
																	{	/* Unsafe/gunzip.scm 1089 */
																		obj_t BgL_state0z00_5327;

																		BgL_state0z00_5327 =
																			BGl_inflatezd2entryzd2zz__gunza7ipza7
																			(BgL_inz00_5124,
																			CELL_REF(BgL_bufferz00_5125));
																		{	/* Unsafe/gunzip.scm 1090 */
																			obj_t BgL_val0z00_5328;
																			obj_t BgL_kont0z00_5329;

																			{	/* Unsafe/gunzip.scm 1091 */
																				int BgL_tmpz00_7803;

																				BgL_tmpz00_7803 = (int) (((long) 1));
																				BgL_val0z00_5328 =
																					BGL_MVALUES_VAL(BgL_tmpz00_7803);
																			}
																			{	/* Unsafe/gunzip.scm 1091 */
																				int BgL_tmpz00_7806;

																				BgL_tmpz00_7806 = (int) (((long) 2));
																				BgL_kont0z00_5329 =
																					BGL_MVALUES_VAL(BgL_tmpz00_7806);
																			}
																			CELL_SET(BgL_statez00_5123,
																				BgL_state0z00_5327);
																			CELL_SET(BgL_kontz00_5126,
																				BgL_kont0z00_5329);
																			{
																				obj_t BgL_valz00_7809;

																				BgL_valz00_7809 = BgL_val0z00_5328;
																				BgL_valz00_5313 = BgL_valz00_7809;
																				goto BgL_loopz00_5312;
																			}
																		}
																	}
																else
																	{	/* Unsafe/gunzip.scm 1066 */
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_string2904z00zz__gunza7ipza7,
																			BGl_string2859z00zz__gunza7ipza7,
																			CELL_REF(BgL_statez00_5123));
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



/* _port->inflate-port */
	obj_t BGl__portzd2ze3inflatezd2portze3zz__gunza7ipza7(obj_t BgL_env1276z00_45,
		obj_t BgL_opt1275z00_44)
	{
		{	/* Unsafe/gunzip.scm 1102 */
			{	/* Unsafe/gunzip.scm 1102 */
				obj_t BgL_g1277z00_2239;

				BgL_g1277z00_2239 = VECTOR_REF(BgL_opt1275z00_44, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1275z00_44))
					{
					case ((long) 1):

						{	/* Unsafe/gunzip.scm 1102 */

							{	/* Unsafe/gunzip.scm 1102 */
								obj_t BgL_res2707z00_4385;

								{	/* Unsafe/gunzip.scm 1102 */
									obj_t BgL_inz00_4383;

									if (INPUT_PORTP(BgL_g1277z00_2239))
										{	/* Unsafe/gunzip.scm 1102 */
											BgL_inz00_4383 = BgL_g1277z00_2239;
										}
									else
										{
											obj_t BgL_auxz00_7815;

											BgL_auxz00_7815 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2891z00zz__gunza7ipza7, BINT(((long) 38091)),
												BGl_string2905z00zz__gunza7ipza7,
												BGl_string2893z00zz__gunza7ipza7, BgL_g1277z00_2239);
											FAILURE(BgL_auxz00_7815, BFALSE, BFALSE);
										}
									BgL_res2707z00_4385 =
										BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_inz00_4383,
										BGl_symbol2902z00zz__gunza7ipza7, BTRUE, ((long) 32768),
										BFALSE);
								}
								return BgL_res2707z00_4385;
							}
						}
						break;
					case ((long) 2):

						{	/* Unsafe/gunzip.scm 1102 */
							obj_t BgL_bufinfoz00_2244;

							BgL_bufinfoz00_2244 = VECTOR_REF(BgL_opt1275z00_44, ((long) 1));
							{	/* Unsafe/gunzip.scm 1102 */

								{	/* Unsafe/gunzip.scm 1102 */
									obj_t BgL_res2708z00_4388;

									{	/* Unsafe/gunzip.scm 1102 */
										obj_t BgL_inz00_4386;

										if (INPUT_PORTP(BgL_g1277z00_2239))
											{	/* Unsafe/gunzip.scm 1102 */
												BgL_inz00_4386 = BgL_g1277z00_2239;
											}
										else
											{
												obj_t BgL_auxz00_7823;

												BgL_auxz00_7823 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2891z00zz__gunza7ipza7,
													BINT(((long) 38091)),
													BGl_string2905z00zz__gunza7ipza7,
													BGl_string2893z00zz__gunza7ipza7, BgL_g1277z00_2239);
												FAILURE(BgL_auxz00_7823, BFALSE, BFALSE);
											}
										BgL_res2708z00_4388 =
											BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_inz00_4386,
											BGl_symbol2902z00zz__gunza7ipza7, BgL_bufinfoz00_2244,
											((long) 32768), BFALSE);
									}
									return BgL_res2708z00_4388;
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



/* port->inflate-port */
	BGL_EXPORTED_DEF obj_t BGl_portzd2ze3inflatezd2portze3zz__gunza7ipza7(obj_t
		BgL_inz00_42, obj_t BgL_bufinfoz00_43)
	{
		{	/* Unsafe/gunzip.scm 1102 */
			return
				BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_inz00_42,
				BGl_symbol2902z00zz__gunza7ipza7, BgL_bufinfoz00_43, ((long) 32768),
				BFALSE);
		}

	}



/* _port->gzip-port */
	obj_t BGl__portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(obj_t BgL_env1281z00_49,
		obj_t BgL_opt1280z00_48)
	{
		{	/* Unsafe/gunzip.scm 1108 */
			{	/* Unsafe/gunzip.scm 1108 */
				obj_t BgL_g1282z00_2246;

				BgL_g1282z00_2246 = VECTOR_REF(BgL_opt1280z00_48, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1280z00_48))
					{
					case ((long) 1):

						{	/* Unsafe/gunzip.scm 1108 */

							{	/* Unsafe/gunzip.scm 1108 */
								obj_t BgL_res2709z00_4392;

								{	/* Unsafe/gunzip.scm 1108 */
									obj_t BgL_inz00_4390;

									if (INPUT_PORTP(BgL_g1282z00_2246))
										{	/* Unsafe/gunzip.scm 1108 */
											BgL_inz00_4390 = BgL_g1282z00_2246;
										}
									else
										{
											obj_t BgL_auxz00_7834;

											BgL_auxz00_7834 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2891z00zz__gunza7ipza7, BINT(((long) 38470)),
												BGl_string2906z00zz__gunza7ipza7,
												BGl_string2893z00zz__gunza7ipza7, BgL_g1282z00_2246);
											FAILURE(BgL_auxz00_7834, BFALSE, BFALSE);
										}
									BgL_res2709z00_4392 =
										BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_inz00_4390,
										BGl_symbol2900z00zz__gunza7ipza7, BTRUE, ((long) 32768),
										BFALSE);
								}
								return BgL_res2709z00_4392;
							}
						}
						break;
					case ((long) 2):

						{	/* Unsafe/gunzip.scm 1108 */
							obj_t BgL_bufinfoz00_2251;

							BgL_bufinfoz00_2251 = VECTOR_REF(BgL_opt1280z00_48, ((long) 1));
							{	/* Unsafe/gunzip.scm 1108 */

								{	/* Unsafe/gunzip.scm 1108 */
									obj_t BgL_res2710z00_4395;

									{	/* Unsafe/gunzip.scm 1108 */
										obj_t BgL_inz00_4393;

										if (INPUT_PORTP(BgL_g1282z00_2246))
											{	/* Unsafe/gunzip.scm 1108 */
												BgL_inz00_4393 = BgL_g1282z00_2246;
											}
										else
											{
												obj_t BgL_auxz00_7842;

												BgL_auxz00_7842 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2891z00zz__gunza7ipza7,
													BINT(((long) 38470)),
													BGl_string2906z00zz__gunza7ipza7,
													BGl_string2893z00zz__gunza7ipza7, BgL_g1282z00_2246);
												FAILURE(BgL_auxz00_7842, BFALSE, BFALSE);
											}
										BgL_res2710z00_4395 =
											BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_inz00_4393,
											BGl_symbol2900z00zz__gunza7ipza7, BgL_bufinfoz00_2251,
											((long) 32768), BFALSE);
									}
									return BgL_res2710z00_4395;
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



/* port->gzip-port */
	BGL_EXPORTED_DEF obj_t BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(obj_t
		BgL_inz00_46, obj_t BgL_bufinfoz00_47)
	{
		{	/* Unsafe/gunzip.scm 1108 */
			return
				BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_inz00_46,
				BGl_symbol2900z00zz__gunza7ipza7, BgL_bufinfoz00_47, ((long) 32768),
				BFALSE);
		}

	}



/* _open-input-gzip-file */
	obj_t BGl__openzd2inputzd2gza7ipzd2filez75zz__gunza7ipza7(obj_t
		BgL_env1286z00_54, obj_t BgL_opt1285z00_53)
	{
		{	/* Unsafe/gunzip.scm 1114 */
			{	/* Unsafe/gunzip.scm 1114 */
				obj_t BgL_g1287z00_2253;

				BgL_g1287z00_2253 = VECTOR_REF(BgL_opt1285z00_53, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1285z00_53))
					{
					case ((long) 1):

						{	/* Unsafe/gunzip.scm 1114 */

							{	/* Unsafe/gunzip.scm 1114 */
								obj_t BgL_namez00_4397;

								if (STRINGP(BgL_g1287z00_2253))
									{	/* Unsafe/gunzip.scm 1114 */
										BgL_namez00_4397 = BgL_g1287z00_2253;
									}
								else
									{
										obj_t BgL_auxz00_7853;

										BgL_auxz00_7853 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2891z00zz__gunza7ipza7, BINT(((long) 38840)),
											BGl_string2907z00zz__gunza7ipza7,
											BGl_string2908z00zz__gunza7ipza7, BgL_g1287z00_2253);
										FAILURE(BgL_auxz00_7853, BFALSE, BFALSE);
									}
								{	/* Unsafe/gunzip.scm 1115 */
									obj_t BgL_pz00_4398;

									{	/* Unsafe/gunzip.scm 1115 */

										BgL_pz00_4398 =
											BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
											(BgL_namez00_4397, BTRUE, BINT(((long) 5000000)));
									}
									if (INPUT_PORTP(BgL_pz00_4398))
										{	/* Unsafe/gunzip.scm 1117 */
											obj_t BgL_piz00_4403;

											BgL_piz00_4403 =
												BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_pz00_4398,
												BGl_symbol2900z00zz__gunza7ipza7, BTRUE, ((long) 32768),
												BFALSE);
											{	/* Unsafe/gunzip.scm 1118 */
												obj_t BgL_zc3z04anonymousza31945ze3z87_5145;

												BgL_zc3z04anonymousza31945ze3z87_5145 =
													MAKE_FX_PROCEDURE
													(BGl_z62zc3z04anonymousza31945ze32798ze5zz__gunza7ipza7,
													(int) (((long) 1)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3z04anonymousza31945ze3z87_5145,
													(int) (((long) 0)), BgL_pz00_4398);
												BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
													(BgL_piz00_4403,
													BgL_zc3z04anonymousza31945ze3z87_5145);
											}
											return BgL_piz00_4403;
										}
									else
										{	/* Unsafe/gunzip.scm 1116 */
											return BFALSE;
										}
								}
							}
						}
						break;
					case ((long) 2):

						{	/* Unsafe/gunzip.scm 1114 */
							obj_t BgL_bufinfoz00_2259;

							BgL_bufinfoz00_2259 = VECTOR_REF(BgL_opt1285z00_53, ((long) 1));
							{	/* Unsafe/gunzip.scm 1114 */

								{	/* Unsafe/gunzip.scm 1114 */
									obj_t BgL_namez00_4410;

									if (STRINGP(BgL_g1287z00_2253))
										{	/* Unsafe/gunzip.scm 1114 */
											BgL_namez00_4410 = BgL_g1287z00_2253;
										}
									else
										{
											obj_t BgL_auxz00_7871;

											BgL_auxz00_7871 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2891z00zz__gunza7ipza7, BINT(((long) 38840)),
												BGl_string2907z00zz__gunza7ipza7,
												BGl_string2908z00zz__gunza7ipza7, BgL_g1287z00_2253);
											FAILURE(BgL_auxz00_7871, BFALSE, BFALSE);
										}
									{	/* Unsafe/gunzip.scm 1115 */
										obj_t BgL_pz00_4411;

										{	/* Unsafe/gunzip.scm 1115 */

											BgL_pz00_4411 =
												BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
												(BgL_namez00_4410, BgL_bufinfoz00_2259,
												BINT(((long) 5000000)));
										}
										if (INPUT_PORTP(BgL_pz00_4411))
											{	/* Unsafe/gunzip.scm 1117 */
												obj_t BgL_piz00_4416;

												BgL_piz00_4416 =
													BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_pz00_4411,
													BGl_symbol2900z00zz__gunza7ipza7, BTRUE,
													((long) 32768), BFALSE);
												{	/* Unsafe/gunzip.scm 1118 */
													obj_t BgL_zc3z04anonymousza31945ze3z87_5144;

													BgL_zc3z04anonymousza31945ze3z87_5144 =
														MAKE_FX_PROCEDURE
														(BGl_z62zc3z04anonymousza31945ze32797ze5zz__gunza7ipza7,
														(int) (((long) 1)), (int) (((long) 1)));
													PROCEDURE_SET(BgL_zc3z04anonymousza31945ze3z87_5144,
														(int) (((long) 0)), BgL_pz00_4411);
													BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
														(BgL_piz00_4416,
														BgL_zc3z04anonymousza31945ze3z87_5144);
												}
												return BgL_piz00_4416;
											}
										else
											{	/* Unsafe/gunzip.scm 1116 */
												return BFALSE;
											}
									}
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/gunzip.scm 1114 */
							obj_t BgL_bufinfoz00_2261;

							BgL_bufinfoz00_2261 = VECTOR_REF(BgL_opt1285z00_53, ((long) 1));
							{	/* Unsafe/gunzip.scm 1114 */
								obj_t BgL_timeoutz00_2262;

								BgL_timeoutz00_2262 = VECTOR_REF(BgL_opt1285z00_53, ((long) 2));
								{	/* Unsafe/gunzip.scm 1114 */

									{	/* Unsafe/gunzip.scm 1114 */
										obj_t BgL_namez00_4423;

										if (STRINGP(BgL_g1287z00_2253))
											{	/* Unsafe/gunzip.scm 1114 */
												BgL_namez00_4423 = BgL_g1287z00_2253;
											}
										else
											{
												obj_t BgL_auxz00_7890;

												BgL_auxz00_7890 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2891z00zz__gunza7ipza7,
													BINT(((long) 38840)),
													BGl_string2907z00zz__gunza7ipza7,
													BGl_string2908z00zz__gunza7ipza7, BgL_g1287z00_2253);
												FAILURE(BgL_auxz00_7890, BFALSE, BFALSE);
											}
										{	/* Unsafe/gunzip.scm 1115 */
											obj_t BgL_pz00_4424;

											{	/* Unsafe/gunzip.scm 1115 */

												BgL_pz00_4424 =
													BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
													(BgL_namez00_4423, BgL_bufinfoz00_2261,
													BINT(((long) 5000000)));
											}
											if (INPUT_PORTP(BgL_pz00_4424))
												{	/* Unsafe/gunzip.scm 1117 */
													obj_t BgL_piz00_4429;

													BgL_piz00_4429 =
														BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_pz00_4424,
														BGl_symbol2900z00zz__gunza7ipza7, BTRUE,
														((long) 32768), BFALSE);
													{	/* Unsafe/gunzip.scm 1118 */
														obj_t BgL_zc3z04anonymousza31945ze3z87_5143;

														BgL_zc3z04anonymousza31945ze3z87_5143 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31945ze3ze5zz__gunza7ipza7,
															(int) (((long) 1)), (int) (((long) 1)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31945ze3z87_5143,
															(int) (((long) 0)), BgL_pz00_4424);
														BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
															(BgL_piz00_4429,
															BgL_zc3z04anonymousza31945ze3z87_5143);
													}
													return BgL_piz00_4429;
												}
											else
												{	/* Unsafe/gunzip.scm 1116 */
													return BFALSE;
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



/* &<@anonymous:1945> */
	obj_t BGl_z62zc3z04anonymousza31945ze3ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5146, obj_t BgL_vz00_5148)
	{
		{	/* Unsafe/gunzip.scm 1118 */
			{	/* Unsafe/gunzip.scm 1118 */
				obj_t BgL_pz00_5147;

				BgL_pz00_5147 = PROCEDURE_REF(BgL_envz00_5146, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_pz00_5147));
			}
		}

	}



/* &<@anonymous:1945>2797 */
	obj_t BGl_z62zc3z04anonymousza31945ze32797ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5149, obj_t BgL_vz00_5151)
	{
		{	/* Unsafe/gunzip.scm 1118 */
			{	/* Unsafe/gunzip.scm 1118 */
				obj_t BgL_pz00_5150;

				BgL_pz00_5150 = PROCEDURE_REF(BgL_envz00_5149, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_pz00_5150));
			}
		}

	}



/* &<@anonymous:1945>2798 */
	obj_t BGl_z62zc3z04anonymousza31945ze32798ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5152, obj_t BgL_vz00_5154)
	{
		{	/* Unsafe/gunzip.scm 1118 */
			{	/* Unsafe/gunzip.scm 1118 */
				obj_t BgL_pz00_5153;

				BgL_pz00_5153 = PROCEDURE_REF(BgL_envz00_5152, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_pz00_5153));
			}
		}

	}



/* open-input-gzip-file */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2inputzd2gza7ipzd2filez75zz__gunza7ipza7(obj_t BgL_namez00_50,
		obj_t BgL_bufinfoz00_51, obj_t BgL_timeoutz00_52)
	{
		{	/* Unsafe/gunzip.scm 1114 */
			{	/* Unsafe/gunzip.scm 1115 */
				obj_t BgL_pz00_4436;

				{	/* Unsafe/gunzip.scm 1115 */

					BgL_pz00_4436 =
						BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_namez00_50,
						BgL_bufinfoz00_51, BINT(((long) 5000000)));
				}
				if (INPUT_PORTP(BgL_pz00_4436))
					{	/* Unsafe/gunzip.scm 1117 */
						obj_t BgL_piz00_4441;

						BgL_piz00_4441 =
							BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_pz00_4436,
							BGl_symbol2900z00zz__gunza7ipza7, BTRUE, ((long) 32768), BFALSE);
						{	/* Unsafe/gunzip.scm 1118 */
							obj_t BgL_zc3z04anonymousza31945ze3z87_5155;

							BgL_zc3z04anonymousza31945ze3z87_5155 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31945ze32799ze5zz__gunza7ipza7,
								(int) (((long) 1)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31945ze3z87_5155,
								(int) (((long) 0)), BgL_pz00_4436);
							BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
								(BgL_piz00_4441, BgL_zc3z04anonymousza31945ze3z87_5155);
						}
						return BgL_piz00_4441;
					}
				else
					{	/* Unsafe/gunzip.scm 1116 */
						return BFALSE;
					}
			}
		}

	}



/* &<@anonymous:1945>2799 */
	obj_t BGl_z62zc3z04anonymousza31945ze32799ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5156, obj_t BgL_vz00_5158)
	{
		{	/* Unsafe/gunzip.scm 1118 */
			{	/* Unsafe/gunzip.scm 1118 */
				obj_t BgL_pz00_5157;

				BgL_pz00_5157 = PROCEDURE_REF(BgL_envz00_5156, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_pz00_5157));
			}
		}

	}



/* _open-input-inflate-file */
	obj_t BGl__openzd2inputzd2inflatezd2filezd2zz__gunza7ipza7(obj_t
		BgL_env1291z00_59, obj_t BgL_opt1290z00_58)
	{
		{	/* Unsafe/gunzip.scm 1124 */
			{	/* Unsafe/gunzip.scm 1124 */
				obj_t BgL_g1292z00_2273;

				BgL_g1292z00_2273 = VECTOR_REF(BgL_opt1290z00_58, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1290z00_58))
					{
					case ((long) 1):

						{	/* Unsafe/gunzip.scm 1124 */

							{	/* Unsafe/gunzip.scm 1124 */
								obj_t BgL_namez00_4448;

								if (STRINGP(BgL_g1292z00_2273))
									{	/* Unsafe/gunzip.scm 1124 */
										BgL_namez00_4448 = BgL_g1292z00_2273;
									}
								else
									{
										obj_t BgL_auxz00_7937;

										BgL_auxz00_7937 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2891z00zz__gunza7ipza7, BINT(((long) 39339)),
											BGl_string2909z00zz__gunza7ipza7,
											BGl_string2908z00zz__gunza7ipza7, BgL_g1292z00_2273);
										FAILURE(BgL_auxz00_7937, BFALSE, BFALSE);
									}
								{	/* Unsafe/gunzip.scm 1125 */
									obj_t BgL_pz00_4449;
									obj_t BgL_bz00_4450;

									{	/* Unsafe/gunzip.scm 1125 */

										BgL_pz00_4449 =
											BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
											(BgL_namez00_4448, BTRUE, BINT(((long) 5000000)));
									}
									BgL_bz00_4450 =
										BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
										(BGl_string2910z00zz__gunza7ipza7, BTRUE,
										(int) (default_io_bufsiz));
									if (INPUT_PORTP(BgL_pz00_4449))
										{	/* Unsafe/gunzip.scm 1128 */
											obj_t BgL_piz00_4455;

											BgL_piz00_4455 =
												BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_pz00_4449,
												BGl_symbol2902z00zz__gunza7ipza7, BgL_bz00_4450,
												((long) 32768), BFALSE);
											{	/* Unsafe/gunzip.scm 1129 */
												obj_t BgL_zc3z04anonymousza31949ze3z87_5161;

												BgL_zc3z04anonymousza31949ze3z87_5161 =
													MAKE_FX_PROCEDURE
													(BGl_z62zc3z04anonymousza31949ze32801ze5zz__gunza7ipza7,
													(int) (((long) 1)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3z04anonymousza31949ze3z87_5161,
													(int) (((long) 0)), BgL_pz00_4449);
												BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
													(BgL_piz00_4455,
													BgL_zc3z04anonymousza31949ze3z87_5161);
											}
											return BgL_piz00_4455;
										}
									else
										{	/* Unsafe/gunzip.scm 1127 */
											return BFALSE;
										}
								}
							}
						}
						break;
					case ((long) 2):

						{	/* Unsafe/gunzip.scm 1124 */
							obj_t BgL_bufinfoz00_2279;

							BgL_bufinfoz00_2279 = VECTOR_REF(BgL_opt1290z00_58, ((long) 1));
							{	/* Unsafe/gunzip.scm 1124 */

								{	/* Unsafe/gunzip.scm 1124 */
									obj_t BgL_namez00_4462;

									if (STRINGP(BgL_g1292z00_2273))
										{	/* Unsafe/gunzip.scm 1124 */
											BgL_namez00_4462 = BgL_g1292z00_2273;
										}
									else
										{
											obj_t BgL_auxz00_7957;

											BgL_auxz00_7957 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2891z00zz__gunza7ipza7, BINT(((long) 39339)),
												BGl_string2909z00zz__gunza7ipza7,
												BGl_string2908z00zz__gunza7ipza7, BgL_g1292z00_2273);
											FAILURE(BgL_auxz00_7957, BFALSE, BFALSE);
										}
									{	/* Unsafe/gunzip.scm 1125 */
										obj_t BgL_pz00_4463;
										obj_t BgL_bz00_4464;

										{	/* Unsafe/gunzip.scm 1125 */

											BgL_pz00_4463 =
												BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
												(BgL_namez00_4462, BgL_bufinfoz00_2279,
												BINT(((long) 5000000)));
										}
										BgL_bz00_4464 =
											BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
											(BGl_string2910z00zz__gunza7ipza7, BTRUE,
											(int) (default_io_bufsiz));
										if (INPUT_PORTP(BgL_pz00_4463))
											{	/* Unsafe/gunzip.scm 1128 */
												obj_t BgL_piz00_4469;

												BgL_piz00_4469 =
													BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_pz00_4463,
													BGl_symbol2902z00zz__gunza7ipza7, BgL_bz00_4464,
													((long) 32768), BFALSE);
												{	/* Unsafe/gunzip.scm 1129 */
													obj_t BgL_zc3z04anonymousza31949ze3z87_5160;

													BgL_zc3z04anonymousza31949ze3z87_5160 =
														MAKE_FX_PROCEDURE
														(BGl_z62zc3z04anonymousza31949ze32800ze5zz__gunza7ipza7,
														(int) (((long) 1)), (int) (((long) 1)));
													PROCEDURE_SET(BgL_zc3z04anonymousza31949ze3z87_5160,
														(int) (((long) 0)), BgL_pz00_4463);
													BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
														(BgL_piz00_4469,
														BgL_zc3z04anonymousza31949ze3z87_5160);
												}
												return BgL_piz00_4469;
											}
										else
											{	/* Unsafe/gunzip.scm 1127 */
												return BFALSE;
											}
									}
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/gunzip.scm 1124 */
							obj_t BgL_bufinfoz00_2281;

							BgL_bufinfoz00_2281 = VECTOR_REF(BgL_opt1290z00_58, ((long) 1));
							{	/* Unsafe/gunzip.scm 1124 */
								obj_t BgL_timeoutz00_2282;

								BgL_timeoutz00_2282 = VECTOR_REF(BgL_opt1290z00_58, ((long) 2));
								{	/* Unsafe/gunzip.scm 1124 */

									{	/* Unsafe/gunzip.scm 1124 */
										obj_t BgL_namez00_4476;

										if (STRINGP(BgL_g1292z00_2273))
											{	/* Unsafe/gunzip.scm 1124 */
												BgL_namez00_4476 = BgL_g1292z00_2273;
											}
										else
											{
												obj_t BgL_auxz00_7978;

												BgL_auxz00_7978 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2891z00zz__gunza7ipza7,
													BINT(((long) 39339)),
													BGl_string2909z00zz__gunza7ipza7,
													BGl_string2908z00zz__gunza7ipza7, BgL_g1292z00_2273);
												FAILURE(BgL_auxz00_7978, BFALSE, BFALSE);
											}
										{	/* Unsafe/gunzip.scm 1125 */
											obj_t BgL_pz00_4477;
											obj_t BgL_bz00_4478;

											{	/* Unsafe/gunzip.scm 1125 */

												BgL_pz00_4477 =
													BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
													(BgL_namez00_4476, BgL_bufinfoz00_2281,
													BINT(((long) 5000000)));
											}
											BgL_bz00_4478 =
												BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
												(BGl_string2910z00zz__gunza7ipza7, BTRUE,
												(int) (default_io_bufsiz));
											if (INPUT_PORTP(BgL_pz00_4477))
												{	/* Unsafe/gunzip.scm 1128 */
													obj_t BgL_piz00_4483;

													BgL_piz00_4483 =
														BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_pz00_4477,
														BGl_symbol2902z00zz__gunza7ipza7, BgL_bz00_4478,
														((long) 32768), BFALSE);
													{	/* Unsafe/gunzip.scm 1129 */
														obj_t BgL_zc3z04anonymousza31949ze3z87_5159;

														BgL_zc3z04anonymousza31949ze3z87_5159 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31949ze3ze5zz__gunza7ipza7,
															(int) (((long) 1)), (int) (((long) 1)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31949ze3z87_5159,
															(int) (((long) 0)), BgL_pz00_4477);
														BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
															(BgL_piz00_4483,
															BgL_zc3z04anonymousza31949ze3z87_5159);
													}
													return BgL_piz00_4483;
												}
											else
												{	/* Unsafe/gunzip.scm 1127 */
													return BFALSE;
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



/* &<@anonymous:1949> */
	obj_t BGl_z62zc3z04anonymousza31949ze3ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5162, obj_t BgL_vz00_5164)
	{
		{	/* Unsafe/gunzip.scm 1129 */
			{	/* Unsafe/gunzip.scm 1129 */
				obj_t BgL_pz00_5163;

				BgL_pz00_5163 = PROCEDURE_REF(BgL_envz00_5162, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_pz00_5163));
			}
		}

	}



/* &<@anonymous:1949>2800 */
	obj_t BGl_z62zc3z04anonymousza31949ze32800ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5165, obj_t BgL_vz00_5167)
	{
		{	/* Unsafe/gunzip.scm 1129 */
			{	/* Unsafe/gunzip.scm 1129 */
				obj_t BgL_pz00_5166;

				BgL_pz00_5166 = PROCEDURE_REF(BgL_envz00_5165, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_pz00_5166));
			}
		}

	}



/* &<@anonymous:1949>2801 */
	obj_t BGl_z62zc3z04anonymousza31949ze32801ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5168, obj_t BgL_vz00_5170)
	{
		{	/* Unsafe/gunzip.scm 1129 */
			{	/* Unsafe/gunzip.scm 1129 */
				obj_t BgL_pz00_5169;

				BgL_pz00_5169 = PROCEDURE_REF(BgL_envz00_5168, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_pz00_5169));
			}
		}

	}



/* open-input-inflate-file */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2inputzd2inflatezd2filezd2zz__gunza7ipza7(obj_t BgL_namez00_55,
		obj_t BgL_bufinfoz00_56, obj_t BgL_timeoutz00_57)
	{
		{	/* Unsafe/gunzip.scm 1124 */
			{	/* Unsafe/gunzip.scm 1125 */
				obj_t BgL_pz00_4490;
				obj_t BgL_bz00_4491;

				{	/* Unsafe/gunzip.scm 1125 */

					BgL_pz00_4490 =
						BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_namez00_55,
						BgL_bufinfoz00_56, BINT(((long) 5000000)));
				}
				BgL_bz00_4491 =
					BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
					(BGl_string2910z00zz__gunza7ipza7, BTRUE, (int) (default_io_bufsiz));
				if (INPUT_PORTP(BgL_pz00_4490))
					{	/* Unsafe/gunzip.scm 1128 */
						obj_t BgL_piz00_4496;

						BgL_piz00_4496 =
							BGl_portzd2ze3portz31zz__gunza7ipza7(BgL_pz00_4490,
							BGl_symbol2902z00zz__gunza7ipza7, BgL_bz00_4491, ((long) 32768),
							BFALSE);
						{	/* Unsafe/gunzip.scm 1129 */
							obj_t BgL_zc3z04anonymousza31949ze3z87_5171;

							BgL_zc3z04anonymousza31949ze3z87_5171 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31949ze32802ze5zz__gunza7ipza7,
								(int) (((long) 1)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31949ze3z87_5171,
								(int) (((long) 0)), BgL_pz00_4490);
							BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
								(BgL_piz00_4496, BgL_zc3z04anonymousza31949ze3z87_5171);
						}
						return BgL_piz00_4496;
					}
				else
					{	/* Unsafe/gunzip.scm 1127 */
						return BFALSE;
					}
			}
		}

	}



/* &<@anonymous:1949>2802 */
	obj_t BGl_z62zc3z04anonymousza31949ze32802ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5172, obj_t BgL_vz00_5174)
	{
		{	/* Unsafe/gunzip.scm 1129 */
			{	/* Unsafe/gunzip.scm 1129 */
				obj_t BgL_pz00_5173;

				BgL_pz00_5173 = PROCEDURE_REF(BgL_envz00_5172, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_pz00_5173));
			}
		}

	}



/* _port->zlib-port */
	obj_t BGl__portzd2ze3za7libzd2portz44zz__gunza7ipza7(obj_t BgL_env1296z00_63,
		obj_t BgL_opt1295z00_62)
	{
		{	/* Unsafe/gunzip.scm 1135 */
			{	/* Unsafe/gunzip.scm 1135 */
				obj_t BgL_g1297z00_2294;

				BgL_g1297z00_2294 = VECTOR_REF(BgL_opt1295z00_62, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1295z00_62))
					{
					case ((long) 1):

						{	/* Unsafe/gunzip.scm 1135 */

							{	/* Unsafe/gunzip.scm 1135 */
								obj_t BgL_auxz00_8027;

								if (INPUT_PORTP(BgL_g1297z00_2294))
									{	/* Unsafe/gunzip.scm 1135 */
										BgL_auxz00_8027 = BgL_g1297z00_2294;
									}
								else
									{
										obj_t BgL_auxz00_8030;

										BgL_auxz00_8030 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2891z00zz__gunza7ipza7, BINT(((long) 39917)),
											BGl_string2911z00zz__gunza7ipza7,
											BGl_string2893z00zz__gunza7ipza7, BgL_g1297z00_2294);
										FAILURE(BgL_auxz00_8030, BFALSE, BFALSE);
									}
								return
									BGl_portzd2ze3za7libzd2portz44zz__gunza7ipza7(BgL_auxz00_8027,
									BTRUE);
							}
						}
						break;
					case ((long) 2):

						{	/* Unsafe/gunzip.scm 1135 */
							obj_t BgL_bufinfoz00_2299;

							BgL_bufinfoz00_2299 = VECTOR_REF(BgL_opt1295z00_62, ((long) 1));
							{	/* Unsafe/gunzip.scm 1135 */

								{	/* Unsafe/gunzip.scm 1135 */
									obj_t BgL_auxz00_8036;

									if (INPUT_PORTP(BgL_g1297z00_2294))
										{	/* Unsafe/gunzip.scm 1135 */
											BgL_auxz00_8036 = BgL_g1297z00_2294;
										}
									else
										{
											obj_t BgL_auxz00_8039;

											BgL_auxz00_8039 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2891z00zz__gunza7ipza7, BINT(((long) 39917)),
												BGl_string2911z00zz__gunza7ipza7,
												BGl_string2893z00zz__gunza7ipza7, BgL_g1297z00_2294);
											FAILURE(BgL_auxz00_8039, BFALSE, BFALSE);
										}
									return
										BGl_portzd2ze3za7libzd2portz44zz__gunza7ipza7
										(BgL_auxz00_8036, BgL_bufinfoz00_2299);
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



/* port->zlib-port */
	BGL_EXPORTED_DEF obj_t BGl_portzd2ze3za7libzd2portz44zz__gunza7ipza7(obj_t
		BgL_inz00_60, obj_t BgL_bufinfoz00_61)
	{
		{	/* Unsafe/gunzip.scm 1135 */
			{	/* Unsafe/gunzip.scm 1136 */
				obj_t BgL_cmfz00_2300;

				BgL_cmfz00_2300 =
					BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_inz00_60);
				{	/* Unsafe/gunzip.scm 1136 */
					obj_t BgL_flgz00_2301;

					BgL_flgz00_2301 =
						BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_inz00_60);
					{	/* Unsafe/gunzip.scm 1137 */
						long BgL_cmz00_2302;

						BgL_cmz00_2302 = ((long) CINT(BgL_cmfz00_2300) & ((long) 15));
						{	/* Unsafe/gunzip.scm 1138 */
							long BgL_cinfoz00_2303;

							BgL_cinfoz00_2303 =
								((long) CINT(BgL_cmfz00_2300) >> (int) (((long) 4)));
							{	/* Unsafe/gunzip.scm 1139 */
								long BgL_fcheckz00_2304;

								BgL_fcheckz00_2304 =
									((long) CINT(BgL_flgz00_2301) & ((long) 15));
								{	/* Unsafe/gunzip.scm 1140 */
									long BgL_fdictz00_2305;

									BgL_fdictz00_2305 =
										(
										((long) CINT(BgL_flgz00_2301) & ((long) 16)) >>
										(int) (((long) 5)));
									{	/* Unsafe/gunzip.scm 1142 */

										if ((BgL_cmz00_2302 == ((long) 8)))
											{	/* Unsafe/gunzip.scm 1146 */
												bool_t BgL_test3153z00_8061;

												{	/* Unsafe/gunzip.scm 1146 */
													obj_t BgL_arg1961z00_2318;

													{	/* Unsafe/gunzip.scm 1146 */
														long BgL_arg1962z00_2319;

														BgL_arg1962z00_2319 =
															(
															((long) CINT(BgL_cmfz00_2300) * ((long) 256)) +
															(long) CINT(BgL_flgz00_2301));
														BgL_arg1961z00_2318 =
															BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BINT
															(BgL_arg1962z00_2319), BINT(((long) 31)));
													}
													BgL_test3153z00_8061 =
														((long) CINT(BgL_arg1961z00_2318) == ((long) 0));
												}
												if (BgL_test3153z00_8061)
													{	/* Unsafe/gunzip.scm 1146 */
														if ((BgL_fdictz00_2305 == ((long) 0)))
															{	/* Unsafe/gunzip.scm 1149 */
																long BgL_arg1957z00_2313;

																BgL_arg1957z00_2313 =
																	(((long) 1) <<
																	(int) ((((long) 8) + BgL_cinfoz00_2303)));
																return
																	BGl_portzd2ze3portz31zz__gunza7ipza7
																	(BgL_inz00_60,
																	BGl_symbol2902z00zz__gunza7ipza7, BTRUE,
																	BgL_arg1957z00_2313,
																	BGl_checkzd2adler32zd2envz00zz__gunza7ipza7);
															}
														else
															{	/* Unsafe/gunzip.scm 1152 */
																obj_t BgL_dictz00_2315;

																BgL_dictz00_2315 =
																	BGl_readzd2charszd2zz__r4_input_6_10_2z00(BINT
																	(((long) 4)), BgL_inz00_60);
																{	/* Unsafe/gunzip.scm 1153 */
																	long BgL_arg1959z00_2316;

																	BgL_arg1959z00_2316 =
																		(((long) 1) <<
																		(int) ((((long) 8) + BgL_cinfoz00_2303)));
																	return
																		BGl_portzd2ze3portz31zz__gunza7ipza7
																		(BgL_inz00_60,
																		BGl_symbol2902z00zz__gunza7ipza7, BTRUE,
																		BgL_arg1959z00_2316, BFALSE);
																}
															}
													}
												else
													{	/* Unsafe/gunzip.scm 1146 */
														return
															BGl_errorz00zz__errorz00
															(BGl_string2912z00zz__gunza7ipza7,
															BGl_string2913z00zz__gunza7ipza7,
															BINT(BgL_fcheckz00_2304));
													}
											}
										else
											{	/* Unsafe/gunzip.scm 1144 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2912z00zz__gunza7ipza7,
													BGl_string2914z00zz__gunza7ipza7,
													BINT(BgL_cmz00_2302));
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



/* _open-input-zlib-file */
	obj_t BGl__openzd2inputzd2za7libzd2filez75zz__gunza7ipza7(obj_t
		BgL_env1301z00_68, obj_t BgL_opt1300z00_67)
	{
		{	/* Unsafe/gunzip.scm 1158 */
			{	/* Unsafe/gunzip.scm 1158 */
				obj_t BgL_g1302z00_2322;

				BgL_g1302z00_2322 = VECTOR_REF(BgL_opt1300z00_67, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1300z00_67))
					{
					case ((long) 1):

						{	/* Unsafe/gunzip.scm 1158 */

							{	/* Unsafe/gunzip.scm 1158 */
								obj_t BgL_namez00_4534;

								if (STRINGP(BgL_g1302z00_2322))
									{	/* Unsafe/gunzip.scm 1158 */
										BgL_namez00_4534 = BgL_g1302z00_2322;
									}
								else
									{
										obj_t BgL_auxz00_8090;

										BgL_auxz00_8090 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2891z00zz__gunza7ipza7, BINT(((long) 40867)),
											BGl_string2915z00zz__gunza7ipza7,
											BGl_string2908z00zz__gunza7ipza7, BgL_g1302z00_2322);
										FAILURE(BgL_auxz00_8090, BFALSE, BFALSE);
									}
								{	/* Unsafe/gunzip.scm 1159 */
									obj_t BgL_pz00_4535;

									{	/* Unsafe/gunzip.scm 1159 */

										BgL_pz00_4535 =
											BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
											(BgL_namez00_4534, BTRUE, BINT(((long) 5000000)));
									}
									if (INPUT_PORTP(BgL_pz00_4535))
										{	/* Unsafe/gunzip.scm 1161 */
											obj_t BgL_piz00_4540;

											{	/* Unsafe/gunzip.scm 71 */

												BgL_piz00_4540 =
													BGl_portzd2ze3za7libzd2portz44zz__gunza7ipza7
													(BgL_pz00_4535, BTRUE);
											}
											{	/* Unsafe/gunzip.scm 1162 */
												obj_t BgL_zc3z04anonymousza31967ze3z87_5180;

												BgL_zc3z04anonymousza31967ze3z87_5180 =
													MAKE_FX_PROCEDURE
													(BGl_z62zc3z04anonymousza31967ze32804ze5zz__gunza7ipza7,
													(int) (((long) 1)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3z04anonymousza31967ze3z87_5180,
													(int) (((long) 0)), BgL_pz00_4535);
												BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
													(BgL_piz00_4540,
													BgL_zc3z04anonymousza31967ze3z87_5180);
											}
											return BgL_piz00_4540;
										}
									else
										{	/* Unsafe/gunzip.scm 1160 */
											return BFALSE;
										}
								}
							}
						}
						break;
					case ((long) 2):

						{	/* Unsafe/gunzip.scm 1158 */
							obj_t BgL_bufinfoz00_2328;

							BgL_bufinfoz00_2328 = VECTOR_REF(BgL_opt1300z00_67, ((long) 1));
							{	/* Unsafe/gunzip.scm 1158 */

								{	/* Unsafe/gunzip.scm 1158 */
									obj_t BgL_namez00_4546;

									if (STRINGP(BgL_g1302z00_2322))
										{	/* Unsafe/gunzip.scm 1158 */
											BgL_namez00_4546 = BgL_g1302z00_2322;
										}
									else
										{
											obj_t BgL_auxz00_8108;

											BgL_auxz00_8108 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2891z00zz__gunza7ipza7, BINT(((long) 40867)),
												BGl_string2915z00zz__gunza7ipza7,
												BGl_string2908z00zz__gunza7ipza7, BgL_g1302z00_2322);
											FAILURE(BgL_auxz00_8108, BFALSE, BFALSE);
										}
									{	/* Unsafe/gunzip.scm 1159 */
										obj_t BgL_pz00_4547;

										{	/* Unsafe/gunzip.scm 1159 */

											BgL_pz00_4547 =
												BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
												(BgL_namez00_4546, BgL_bufinfoz00_2328,
												BINT(((long) 5000000)));
										}
										if (INPUT_PORTP(BgL_pz00_4547))
											{	/* Unsafe/gunzip.scm 1161 */
												obj_t BgL_piz00_4552;

												{	/* Unsafe/gunzip.scm 71 */

													BgL_piz00_4552 =
														BGl_portzd2ze3za7libzd2portz44zz__gunza7ipza7
														(BgL_pz00_4547, BTRUE);
												}
												{	/* Unsafe/gunzip.scm 1162 */
													obj_t BgL_zc3z04anonymousza31967ze3z87_5179;

													BgL_zc3z04anonymousza31967ze3z87_5179 =
														MAKE_FX_PROCEDURE
														(BGl_z62zc3z04anonymousza31967ze32803ze5zz__gunza7ipza7,
														(int) (((long) 1)), (int) (((long) 1)));
													PROCEDURE_SET(BgL_zc3z04anonymousza31967ze3z87_5179,
														(int) (((long) 0)), BgL_pz00_4547);
													BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
														(BgL_piz00_4552,
														BgL_zc3z04anonymousza31967ze3z87_5179);
												}
												return BgL_piz00_4552;
											}
										else
											{	/* Unsafe/gunzip.scm 1160 */
												return BFALSE;
											}
									}
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/gunzip.scm 1158 */
							obj_t BgL_bufinfoz00_2330;

							BgL_bufinfoz00_2330 = VECTOR_REF(BgL_opt1300z00_67, ((long) 1));
							{	/* Unsafe/gunzip.scm 1158 */
								obj_t BgL_timeoutz00_2331;

								BgL_timeoutz00_2331 = VECTOR_REF(BgL_opt1300z00_67, ((long) 2));
								{	/* Unsafe/gunzip.scm 1158 */

									{	/* Unsafe/gunzip.scm 1158 */
										obj_t BgL_namez00_4558;

										if (STRINGP(BgL_g1302z00_2322))
											{	/* Unsafe/gunzip.scm 1158 */
												BgL_namez00_4558 = BgL_g1302z00_2322;
											}
										else
											{
												obj_t BgL_auxz00_8127;

												BgL_auxz00_8127 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2891z00zz__gunza7ipza7,
													BINT(((long) 40867)),
													BGl_string2915z00zz__gunza7ipza7,
													BGl_string2908z00zz__gunza7ipza7, BgL_g1302z00_2322);
												FAILURE(BgL_auxz00_8127, BFALSE, BFALSE);
											}
										{	/* Unsafe/gunzip.scm 1159 */
											obj_t BgL_pz00_4559;

											{	/* Unsafe/gunzip.scm 1159 */

												BgL_pz00_4559 =
													BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
													(BgL_namez00_4558, BgL_bufinfoz00_2330,
													BINT(((long) 5000000)));
											}
											if (INPUT_PORTP(BgL_pz00_4559))
												{	/* Unsafe/gunzip.scm 1161 */
													obj_t BgL_piz00_4564;

													{	/* Unsafe/gunzip.scm 71 */

														BgL_piz00_4564 =
															BGl_portzd2ze3za7libzd2portz44zz__gunza7ipza7
															(BgL_pz00_4559, BTRUE);
													}
													{	/* Unsafe/gunzip.scm 1162 */
														obj_t BgL_zc3z04anonymousza31967ze3z87_5178;

														BgL_zc3z04anonymousza31967ze3z87_5178 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31967ze3ze5zz__gunza7ipza7,
															(int) (((long) 1)), (int) (((long) 1)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31967ze3z87_5178,
															(int) (((long) 0)), BgL_pz00_4559);
														BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
															(BgL_piz00_4564,
															BgL_zc3z04anonymousza31967ze3z87_5178);
													}
													return BgL_piz00_4564;
												}
											else
												{	/* Unsafe/gunzip.scm 1160 */
													return BFALSE;
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



/* &<@anonymous:1967> */
	obj_t BGl_z62zc3z04anonymousza31967ze3ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5181, obj_t BgL_vz00_5183)
	{
		{	/* Unsafe/gunzip.scm 1162 */
			{	/* Unsafe/gunzip.scm 1162 */
				obj_t BgL_pz00_5182;

				BgL_pz00_5182 = PROCEDURE_REF(BgL_envz00_5181, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_pz00_5182));
			}
		}

	}



/* &<@anonymous:1967>2803 */
	obj_t BGl_z62zc3z04anonymousza31967ze32803ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5184, obj_t BgL_vz00_5186)
	{
		{	/* Unsafe/gunzip.scm 1162 */
			{	/* Unsafe/gunzip.scm 1162 */
				obj_t BgL_pz00_5185;

				BgL_pz00_5185 = PROCEDURE_REF(BgL_envz00_5184, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_pz00_5185));
			}
		}

	}



/* &<@anonymous:1967>2804 */
	obj_t BGl_z62zc3z04anonymousza31967ze32804ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5187, obj_t BgL_vz00_5189)
	{
		{	/* Unsafe/gunzip.scm 1162 */
			{	/* Unsafe/gunzip.scm 1162 */
				obj_t BgL_pz00_5188;

				BgL_pz00_5188 = PROCEDURE_REF(BgL_envz00_5187, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_pz00_5188));
			}
		}

	}



/* open-input-zlib-file */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2inputzd2za7libzd2filez75zz__gunza7ipza7(obj_t BgL_namez00_64,
		obj_t BgL_bufinfoz00_65, obj_t BgL_timeoutz00_66)
	{
		{	/* Unsafe/gunzip.scm 1158 */
			{	/* Unsafe/gunzip.scm 1159 */
				obj_t BgL_pz00_4570;

				{	/* Unsafe/gunzip.scm 1159 */

					BgL_pz00_4570 =
						BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_namez00_64,
						BgL_bufinfoz00_65, BINT(((long) 5000000)));
				}
				if (INPUT_PORTP(BgL_pz00_4570))
					{	/* Unsafe/gunzip.scm 1161 */
						obj_t BgL_piz00_4575;

						{	/* Unsafe/gunzip.scm 71 */

							BgL_piz00_4575 =
								BGl_portzd2ze3za7libzd2portz44zz__gunza7ipza7(BgL_pz00_4570,
								BTRUE);
						}
						{	/* Unsafe/gunzip.scm 1162 */
							obj_t BgL_zc3z04anonymousza31967ze3z87_5190;

							BgL_zc3z04anonymousza31967ze3z87_5190 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31967ze32805ze5zz__gunza7ipza7,
								(int) (((long) 1)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31967ze3z87_5190,
								(int) (((long) 0)), BgL_pz00_4570);
							BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
								(BgL_piz00_4575, BgL_zc3z04anonymousza31967ze3z87_5190);
						}
						return BgL_piz00_4575;
					}
				else
					{	/* Unsafe/gunzip.scm 1160 */
						return BFALSE;
					}
			}
		}

	}



/* &<@anonymous:1967>2805 */
	obj_t BGl_z62zc3z04anonymousza31967ze32805ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5191, obj_t BgL_vz00_5193)
	{
		{	/* Unsafe/gunzip.scm 1162 */
			{	/* Unsafe/gunzip.scm 1162 */
				obj_t BgL_pz00_5192;

				BgL_pz00_5192 = PROCEDURE_REF(BgL_envz00_5191, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_pz00_5192));
			}
		}

	}



/* &check-adler32 */
	obj_t BGl_z62checkzd2adler32zb0zz__gunza7ipza7(obj_t BgL_envz00_5175,
		obj_t BgL_inz00_5176, obj_t BgL_bufz00_5177)
	{
		{	/* Unsafe/gunzip.scm 1172 */
			{	/* Unsafe/gunzip.scm 1173 */
				obj_t BgL_inz00_5330;
				obj_t BgL_bufz00_5331;

				if (INPUT_PORTP(BgL_inz00_5176))
					{	/* Unsafe/gunzip.scm 1173 */
						BgL_inz00_5330 = BgL_inz00_5176;
					}
				else
					{
						obj_t BgL_auxz00_8173;

						BgL_auxz00_8173 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2891z00zz__gunza7ipza7,
							BINT(((long) 41727)), BGl_string2916z00zz__gunza7ipza7,
							BGl_string2893z00zz__gunza7ipza7, BgL_inz00_5176);
						FAILURE(BgL_auxz00_8173, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_bufz00_5177))
					{	/* Unsafe/gunzip.scm 1173 */
						BgL_bufz00_5331 = BgL_bufz00_5177;
					}
				else
					{
						obj_t BgL_auxz00_8179;

						BgL_auxz00_8179 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2891z00zz__gunza7ipza7,
							BINT(((long) 41727)), BGl_string2916z00zz__gunza7ipza7,
							BGl_string2908z00zz__gunza7ipza7, BgL_bufz00_5177);
						FAILURE(BgL_auxz00_8179, BFALSE, BFALSE);
					}
				BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_inz00_5330);
				BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_inz00_5330);
				BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_inz00_5330);
				return BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_inz00_5330);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__gunza7ipza7()
	{
		{	/* Unsafe/gunzip.scm 25 */
			{	/* Unsafe/gunzip.scm 68 */
				obj_t BgL_arg1971z00_2347;
				obj_t BgL_arg1972z00_2348;

				{	/* Unsafe/gunzip.scm 68 */
					obj_t BgL_v1257z00_2361;

					BgL_v1257z00_2361 = create_vector(((long) 3));
					VECTOR_SET(BgL_v1257z00_2361, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2919z00zz__gunza7ipza7, BGl_proc2918z00zz__gunza7ipza7,
							BGl_proc2917z00zz__gunza7ipza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2921z00zz__gunza7ipza7));
					VECTOR_SET(BgL_v1257z00_2361, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2925z00zz__gunza7ipza7, BGl_proc2924z00zz__gunza7ipza7,
							BGl_proc2923z00zz__gunza7ipza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2921z00zz__gunza7ipza7));
					VECTOR_SET(BgL_v1257z00_2361, ((long) 2),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2929z00zz__gunza7ipza7, BGl_proc2928z00zz__gunza7ipza7,
							BGl_proc2927z00zz__gunza7ipza7, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_symbol2931z00zz__gunza7ipza7));
					BgL_arg1971z00_2347 = BgL_v1257z00_2361;
				}
				{	/* Unsafe/gunzip.scm 68 */
					obj_t BgL_v1258z00_2392;

					BgL_v1258z00_2392 = create_vector(((long) 0));
					BgL_arg1972z00_2348 = BgL_v1258z00_2392;
				}
				return (BGl_huftz00zz__gunza7ipza7 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol2936z00zz__gunza7ipza7, BGl_symbol2938z00zz__gunza7ipza7,
						BGl_objectz00zz__objectz00, ((long) 18943),
						BGl_proc2935z00zz__gunza7ipza7, BGl_proc2934z00zz__gunza7ipza7,
						BFALSE, BGl_proc2933z00zz__gunza7ipza7, BFALSE, BgL_arg1971z00_2347,
						BgL_arg1972z00_2348), BUNSPEC);
		}}

	}



/* &<@anonymous:1977> */
	obj_t BGl_z62zc3z04anonymousza31977ze3ze5zz__gunza7ipza7(obj_t
		BgL_envz00_5203, obj_t BgL_new1044z00_5204)
	{
		{	/* Unsafe/gunzip.scm 68 */
			{
				BgL_huftz00_bglt BgL_auxz00_8196;

				((((BgL_huftz00_bglt) COBJECT(
								((BgL_huftz00_bglt) BgL_new1044z00_5204)))->BgL_ez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_huftz00_bglt) COBJECT(((BgL_huftz00_bglt)
									BgL_new1044z00_5204)))->BgL_bz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_huftz00_bglt) COBJECT(((BgL_huftz00_bglt)
									BgL_new1044z00_5204)))->BgL_vz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8196 = ((BgL_huftz00_bglt) BgL_new1044z00_5204);
				return ((obj_t) BgL_auxz00_8196);
			}
		}

	}



/* &lambda1975 */
	BgL_huftz00_bglt BGl_z62lambda1975z62zz__gunza7ipza7(obj_t BgL_envz00_5205)
	{
		{	/* Unsafe/gunzip.scm 68 */
			{	/* Unsafe/gunzip.scm 68 */
				BgL_huftz00_bglt BgL_new1043z00_5333;

				BgL_new1043z00_5333 =
					((BgL_huftz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_huftz00_bgl))));
				{	/* Unsafe/gunzip.scm 68 */
					long BgL_arg1976z00_5334;

					{	/* Unsafe/gunzip.scm 68 */
						long BgL_res2735z00_5335;

						BgL_res2735z00_5335 = BGL_CLASS_INDEX(BGl_huftz00zz__gunza7ipza7);
						BgL_arg1976z00_5334 = BgL_res2735z00_5335;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1043z00_5333), BgL_arg1976z00_5334);
				}
				return BgL_new1043z00_5333;
			}
		}

	}



/* &lambda1973 */
	BgL_huftz00_bglt BGl_z62lambda1973z62zz__gunza7ipza7(obj_t BgL_envz00_5206,
		obj_t BgL_e1040z00_5207, obj_t BgL_b1041z00_5208, obj_t BgL_v1042z00_5209)
	{
		{	/* Unsafe/gunzip.scm 68 */
			{	/* Unsafe/gunzip.scm 68 */
				long BgL_e1040z00_5336;
				long BgL_b1041z00_5337;

				BgL_e1040z00_5336 = (long) CINT(BgL_e1040z00_5207);
				BgL_b1041z00_5337 = (long) CINT(BgL_b1041z00_5208);
				{	/* Unsafe/gunzip.scm 68 */
					BgL_huftz00_bglt BgL_new1169z00_5338;

					{	/* Unsafe/gunzip.scm 68 */
						BgL_huftz00_bglt BgL_new1168z00_5339;

						BgL_new1168z00_5339 =
							((BgL_huftz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_huftz00_bgl))));
						{	/* Unsafe/gunzip.scm 68 */
							long BgL_arg1974z00_5340;

							{	/* Unsafe/gunzip.scm 68 */
								long BgL_res2734z00_5341;

								BgL_res2734z00_5341 =
									BGL_CLASS_INDEX(BGl_huftz00zz__gunza7ipza7);
								BgL_arg1974z00_5340 = BgL_res2734z00_5341;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1168z00_5339),
								BgL_arg1974z00_5340);
						}
						BgL_new1169z00_5338 = BgL_new1168z00_5339;
					}
					((((BgL_huftz00_bglt) COBJECT(BgL_new1169z00_5338))->BgL_ez00) =
						((long) BgL_e1040z00_5336), BUNSPEC);
					((((BgL_huftz00_bglt) COBJECT(BgL_new1169z00_5338))->BgL_bz00) =
						((long) BgL_b1041z00_5337), BUNSPEC);
					((((BgL_huftz00_bglt) COBJECT(BgL_new1169z00_5338))->BgL_vz00) =
						((obj_t) BgL_v1042z00_5209), BUNSPEC);
					return BgL_new1169z00_5338;
				}
			}
		}

	}



/* &lambda1993 */
	obj_t BGl_z62lambda1993z62zz__gunza7ipza7(obj_t BgL_envz00_5210,
		obj_t BgL_oz00_5211, obj_t BgL_vz00_5212)
	{
		{	/* Unsafe/gunzip.scm 68 */
			return
				((((BgL_huftz00_bglt) COBJECT(
							((BgL_huftz00_bglt) BgL_oz00_5211)))->BgL_vz00) =
				((obj_t) BgL_vz00_5212), BUNSPEC);
		}

	}



/* &lambda1992 */
	obj_t BGl_z62lambda1992z62zz__gunza7ipza7(obj_t BgL_envz00_5213,
		obj_t BgL_oz00_5214)
	{
		{	/* Unsafe/gunzip.scm 68 */
			return
				(((BgL_huftz00_bglt) COBJECT(
						((BgL_huftz00_bglt) BgL_oz00_5214)))->BgL_vz00);
		}

	}



/* &lambda1988 */
	obj_t BGl_z62lambda1988z62zz__gunza7ipza7(obj_t BgL_envz00_5215,
		obj_t BgL_oz00_5216, obj_t BgL_vz00_5217)
	{
		{	/* Unsafe/gunzip.scm 68 */
			{	/* Unsafe/gunzip.scm 68 */
				long BgL_vz00_5345;

				BgL_vz00_5345 = (long) CINT(BgL_vz00_5217);
				return
					((((BgL_huftz00_bglt) COBJECT(
								((BgL_huftz00_bglt) BgL_oz00_5216)))->BgL_bz00) =
					((long) BgL_vz00_5345), BUNSPEC);
		}}

	}



/* &lambda1987 */
	obj_t BGl_z62lambda1987z62zz__gunza7ipza7(obj_t BgL_envz00_5218,
		obj_t BgL_oz00_5219)
	{
		{	/* Unsafe/gunzip.scm 68 */
			return
				BINT(
				(((BgL_huftz00_bglt) COBJECT(
							((BgL_huftz00_bglt) BgL_oz00_5219)))->BgL_bz00));
		}

	}



/* &lambda1983 */
	obj_t BGl_z62lambda1983z62zz__gunza7ipza7(obj_t BgL_envz00_5220,
		obj_t BgL_oz00_5221, obj_t BgL_vz00_5222)
	{
		{	/* Unsafe/gunzip.scm 68 */
			{	/* Unsafe/gunzip.scm 68 */
				long BgL_vz00_5348;

				BgL_vz00_5348 = (long) CINT(BgL_vz00_5222);
				return
					((((BgL_huftz00_bglt) COBJECT(
								((BgL_huftz00_bglt) BgL_oz00_5221)))->BgL_ez00) =
					((long) BgL_vz00_5348), BUNSPEC);
		}}

	}



/* &lambda1982 */
	obj_t BGl_z62lambda1982z62zz__gunza7ipza7(obj_t BgL_envz00_5223,
		obj_t BgL_oz00_5224)
	{
		{	/* Unsafe/gunzip.scm 68 */
			return
				BINT(
				(((BgL_huftz00_bglt) COBJECT(
							((BgL_huftz00_bglt) BgL_oz00_5224)))->BgL_ez00));
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__gunza7ipza7()
	{
		{	/* Unsafe/gunzip.scm 25 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__gunza7ipza7()
	{
		{	/* Unsafe/gunzip.scm 25 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__gunza7ipza7()
	{
		{	/* Unsafe/gunzip.scm 25 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2939z00zz__gunza7ipza7));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string2939z00zz__gunza7ipza7));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string2939z00zz__gunza7ipza7));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					228151379), BSTRING_TO_STRING(BGl_string2939z00zz__gunza7ipza7));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2939z00zz__gunza7ipza7));
			return BGl_modulezd2initializa7ationz75zz__rgcz00(((long) 352596942),
				BSTRING_TO_STRING(BGl_string2939z00zz__gunza7ipza7));
		}

	}

#ifdef __cplusplus
}
#endif
