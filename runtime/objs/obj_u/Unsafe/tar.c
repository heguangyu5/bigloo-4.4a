/*===========================================================================*/
/*   (Unsafe/tar.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/tar.scm -indent -o objs/obj_u/Unsafe/tar.c) */
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

	typedef struct BgL_z62iozd2errorzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                       *BgL_z62iozd2errorzb0_bglt;

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

	typedef struct BgL_tarzd2headerzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_namez00;
		long BgL_modez00;
		long BgL_uidz00;
		long BgL_gidz00;
		long BgL_siza7eza7;
		obj_t BgL_mtimez00;
		long BgL_checksumz00;
		obj_t BgL_typez00;
		obj_t BgL_linknamez00;
		obj_t BgL_magicz00;
		obj_t BgL_unamez00;
		obj_t BgL_gnamez00;
		long BgL_devmajorz00;
		long BgL_devminorz00;
	}                      *BgL_tarzd2headerzd2_bglt;


	extern long BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t, long);
	static obj_t BGl_untarzd2directoryzd2zz__tarz00(obj_t, obj_t);
	extern obj_t bgl_directory_to_list(char *);
	static obj_t BGl__tarzd2readzd2blockz00zz__tarz00(obj_t, obj_t);
	extern bool_t BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__tarz00 = BUNSPEC;
	extern obj_t BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_tarzd2errorzd2zz__tarz00(obj_t, obj_t);
	extern obj_t bgl_seconds_to_date(long);
	static obj_t BGl__tarzd2readzd2headerz00zz__tarz00(obj_t, obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__tarz00();
	extern obj_t BGl_z62iozd2parsezd2errorz62zz__objectz00;
	extern obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__tarz00();
	static obj_t BGl_extractze70ze7zz__tarz00(long, obj_t, obj_t, obj_t, obj_t,
		long);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tarzd2readzd2blockz00zz__tarz00(obj_t, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_dirnamez00zz__osz00(obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_list2147z00zz__tarz00 = BUNSPEC;
	extern obj_t bstring_to_symbol(obj_t);
	extern bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	static obj_t BGl_tarzd2typezd2namez00zz__tarz00(unsigned char);
	static bool_t BGl_rmzd2rfzd2zz__tarz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__tarz00();
	BGL_EXPORTED_DECL obj_t BGl_tarzd2readzd2headerz00zz__tarz00(obj_t);
	extern int bgl_symlink(char *, char *);
	BGL_EXPORTED_DEF obj_t BGl_tarzd2headerzd2zz__tarz00 = BUNSPEC;
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_tarzd2roundzd2upzd2tozd2recordzd2siza7ez75zz__tarz00(obj_t);
	static long BGl_checksumz00zz__tarz00(obj_t);
	static obj_t BGl_keyword2148z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31427ze3ze5zz__tarz00(obj_t);
	static obj_t BGl_symbol2103z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2107z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2109z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_keyword2150z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_keyword2152z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2111z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2113z00zz__tarz00 = BUNSPEC;
	extern obj_t string_for_read(obj_t);
	static obj_t BGl_symbol2115z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2117z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2119z00zz__tarz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__tarz00(long,
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
	extern bool_t fexists(char *);
	extern obj_t bgl_nanoseconds_to_date(BGL_LONGLONG_T);
	static obj_t BGl_symbol2121z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2123z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2125z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2207z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2208z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2127z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2129z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2211z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2131z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_z62lambda1506z62zz__tarz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1507z62zz__tarz00(obj_t, obj_t, obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__tarz00();
	static obj_t BGl_symbol2140z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2143z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_untarzd2fileszd2zz__tarz00(obj_t, obj_t);
	extern obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1511z62zz__tarz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1512z62zz__tarz00(obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__tarz00();
	extern obj_t BGl_z62iozd2errorzb0zz__objectz00;
	static obj_t BGl_z62lambda1516z62zz__tarz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1517z62zz__tarz00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__tarz00();
	static obj_t BGl_symbol2154z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_z62lambda1521z62zz__tarz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1522z62zz__tarz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_objectz00zz__objectz00;
	static obj_t BGl_z62lambda1526z62zz__tarz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1527z62zz__tarz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2080z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2082z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2165z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2084z00zz__tarz00 = BUNSPEC;
	extern obj_t BGl_pwdz00zz__osz00();
	static obj_t BGl_symbol2086z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2169z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2088z00zz__tarz00 = BUNSPEC;
	static obj_t
		BGl_z62tarzd2roundzd2upzd2tozd2recordzd2siza7ez17zz__tarz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1532z62zz__tarz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1533z62zz__tarz00(obj_t, obj_t, obj_t);
	static BgL_tarzd2headerzd2_bglt BGl_z62lambda1454z62zz__tarz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1537z62zz__tarz00(obj_t, obj_t);
	static BgL_tarzd2headerzd2_bglt BGl_z62lambda1456z62zz__tarz00(obj_t);
	static obj_t BGl_z62lambda1538z62zz__tarz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31458ze3ze5zz__tarz00(obj_t, obj_t);
	static obj_t BGl_symbol2090z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2092z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2094z00zz__tarz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_untarz00zz__tarz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2176z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2096z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2098z00zz__tarz00 = BUNSPEC;
	extern obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
	static obj_t BGl_z62lambda1463z62zz__tarz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1464z62zz__tarz00(obj_t, obj_t, obj_t);
	extern bool_t bgl_directoryp(char *);
	static obj_t BGl_z62lambda1468z62zz__tarz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1469z62zz__tarz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2180z00zz__tarz00 = BUNSPEC;
	static obj_t BGl_symbol2184z00zz__tarz00 = BUNSPEC;
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_symbol2188z00zz__tarz00 = BUNSPEC;
	extern BGL_LONGLONG_T bgl_current_nanoseconds();
	static obj_t BGl_z62lambda1473z62zz__tarz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1474z62zz__tarz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_readzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda1478z62zz__tarz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1479z62zz__tarz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2190z00zz__tarz00 = BUNSPEC;
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1485z62zz__tarz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1486z62zz__tarz00(obj_t, obj_t, obj_t);
	static obj_t BGl__untarz00zz__tarz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1492z62zz__tarz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1493z62zz__tarz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1497z62zz__tarz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1498z62zz__tarz00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	extern obj_t bgl_file_type(char *);
	extern obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2120z00zz__tarz00,
		BgL_bgl_string2120za700za7za7_2213za7, "chksum", 6);
	      DEFINE_STRING(BGl_string2122z00zz__tarz00,
		BgL_bgl_string2122za700za7za7_2214za7, "linkname", 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_untarzd2envzd2zz__tarz00,
		BgL_bgl__untarza700za7za7__tar2215za7, opt_generic_entry,
		BGl__untarz00zz__tarz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2124z00zz__tarz00,
		BgL_bgl_string2124za700za7za7_2216za7, "magic", 5);
	      DEFINE_STRING(BGl_string2126z00zz__tarz00,
		BgL_bgl_string2126za700za7za7_2217za7, "uname", 5);
	      DEFINE_STRING(BGl_string2209z00zz__tarz00,
		BgL_bgl_string2209za700za7za7_2218za7, "__tar", 5);
	      DEFINE_STRING(BGl_string2128z00zz__tarz00,
		BgL_bgl_string2128za700za7za7_2219za7, "gname", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2200z00zz__tarz00,
		BgL_bgl_za762lambda1533za7622220z00, BGl_z62lambda1533z62zz__tarz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2201z00zz__tarz00,
		BgL_bgl_za762lambda1532za7622221z00, BGl_z62lambda1532z62zz__tarz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2202z00zz__tarz00,
		BgL_bgl_za762lambda1538za7622222z00, BGl_z62lambda1538z62zz__tarz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2203z00zz__tarz00,
		BgL_bgl_za762lambda1537za7622223z00, BGl_z62lambda1537z62zz__tarz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2204z00zz__tarz00,
		BgL_bgl_za762za7c3za704anonymo2224za7,
		BGl_z62zc3z04anonymousza31458ze3ze5zz__tarz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2205z00zz__tarz00,
		BgL_bgl_za762lambda1456za7622225z00, BGl_z62lambda1456z62zz__tarz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2210z00zz__tarz00,
		BgL_bgl_string2210za700za7za7_2226za7, "0", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2206z00zz__tarz00,
		BgL_bgl_za762lambda1454za7622227z00, BGl_z62lambda1454z62zz__tarz00, 0L,
		BUNSPEC, 14);
	      DEFINE_STRING(BGl_string2130z00zz__tarz00,
		BgL_bgl_string2130za700za7za7_2228za7, "devmajor", 8);
	      DEFINE_STRING(BGl_string2212z00zz__tarz00,
		BgL_bgl_string2212za700za7za7_2229za7, "_", 1);
	      DEFINE_STRING(BGl_string2132z00zz__tarz00,
		BgL_bgl_string2132za700za7za7_2230za7, "devminor", 8);
	      DEFINE_STRING(BGl_string2133z00zz__tarz00,
		BgL_bgl_string2133za700za7za7_2231za7, "ustar  ", 7);
	      DEFINE_STRING(BGl_string2134z00zz__tarz00,
		BgL_bgl_string2134za700za7za7_2232za7, "ustar", 5);
	      DEFINE_STRING(BGl_string2135z00zz__tarz00,
		BgL_bgl_string2135za700za7za7_2233za7, "GNUtar ", 7);
	      DEFINE_STRING(BGl_string2136z00zz__tarz00,
		BgL_bgl_string2136za700za7za7_2234za7, "invalid checksum (expected: ~s)",
		31);
	      DEFINE_STRING(BGl_string2137z00zz__tarz00,
		BgL_bgl_string2137za700za7za7_2235za7, "invalid magic number", 20);
	      DEFINE_STRING(BGl_string2138z00zz__tarz00,
		BgL_bgl_string2138za700za7za7_2236za7,
		"no terminator for zero-terminated `~a' found", 44);
	      DEFINE_STRING(BGl_string2139z00zz__tarz00,
		BgL_bgl_string2139za700za7za7_2237za7, "corrupted tar file", 18);
	      DEFINE_STRING(BGl_string2141z00zz__tarz00,
		BgL_bgl_string2141za700za7za7_2238za7, "tar-round-up-to-record-size", 27);
	      DEFINE_STRING(BGl_string2142z00zz__tarz00,
		BgL_bgl_string2142za700za7za7_2239za7, "long", 4);
	      DEFINE_STRING(BGl_string2144z00zz__tarz00,
		BgL_bgl_string2144za700za7za7_2240za7, "tar-read-block", 14);
	      DEFINE_STRING(BGl_string2145z00zz__tarz00,
		BgL_bgl_string2145za700za7za7_2241za7, "Illegal block", 13);
	      DEFINE_STRING(BGl_string2146z00zz__tarz00,
		BgL_bgl_string2146za700za7za7_2242za7, "tar-header", 10);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tarzd2readzd2headerzd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2readza7d2he2243z00, opt_generic_entry,
		BGl__tarzd2readzd2headerz00zz__tarz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2149z00zz__tarz00,
		BgL_bgl_string2149za700za7za7_2244za7, "directory", 9);
	      DEFINE_STRING(BGl_string2151z00zz__tarz00,
		BgL_bgl_string2151za700za7za7_2245za7, "file", 4);
	      DEFINE_STRING(BGl_string2153z00zz__tarz00,
		BgL_bgl_string2153za700za7za7_2246za7, "files", 5);
	      DEFINE_STRING(BGl_string2155z00zz__tarz00,
		BgL_bgl_string2155za700za7za7_2247za7, "untar", 5);
	      DEFINE_STRING(BGl_string2156z00zz__tarz00,
		BgL_bgl_string2156za700za7za7_2248za7, "Illegal keyword argument", 24);
	      DEFINE_STRING(BGl_string2157z00zz__tarz00,
		BgL_bgl_string2157za700za7za7_2249za7,
		"wrong number of arguments: [1..4] expected, provided", 52);
	      DEFINE_STRING(BGl_string2158z00zz__tarz00,
		BgL_bgl_string2158za700za7za7_2250za7, "/tmp/4.4a/runtime/Unsafe/tar.scm",
		32);
	      DEFINE_STRING(BGl_string2159z00zz__tarz00,
		BgL_bgl_string2159za700za7za7_2251za7, "_untar", 6);
	      DEFINE_STRING(BGl_string2160z00zz__tarz00,
		BgL_bgl_string2160za700za7za7_2252za7, "bint", 4);
	      DEFINE_STRING(BGl_string2161z00zz__tarz00,
		BgL_bgl_string2161za700za7za7_2253za7, "Cannot create directory", 23);
	      DEFINE_STRING(BGl_string2162z00zz__tarz00,
		BgL_bgl_string2162za700za7za7_2254za7, "Illegal file type `~a'", 22);
	      DEFINE_STRING(BGl_string2081z00zz__tarz00,
		BgL_bgl_string2081za700za7za7_2255za7, "tar", 3);
	      DEFINE_STRING(BGl_string2083z00zz__tarz00,
		BgL_bgl_string2083za700za7za7_2256za7, "oldnormal", 9);
	      DEFINE_STRING(BGl_string2166z00zz__tarz00,
		BgL_bgl_string2166za700za7za7_2257za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2085z00zz__tarz00,
		BgL_bgl_string2085za700za7za7_2258za7, "normal", 6);
	      DEFINE_STRING(BGl_string2087z00zz__tarz00,
		BgL_bgl_string2087za700za7za7_2259za7, "link", 4);
	      DEFINE_STRING(BGl_string2089z00zz__tarz00,
		BgL_bgl_string2089za700za7za7_2260za7, "symlink", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2163z00zz__tarz00,
		BgL_bgl_za762lambda1464za7622261z00, BGl_z62lambda1464z62zz__tarz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2164z00zz__tarz00,
		BgL_bgl_za762lambda1463za7622262z00, BGl_z62lambda1463z62zz__tarz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2167z00zz__tarz00,
		BgL_bgl_za762lambda1469za7622263z00, BGl_z62lambda1469z62zz__tarz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2168z00zz__tarz00,
		BgL_bgl_za762lambda1468za7622264z00, BGl_z62lambda1468z62zz__tarz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2091z00zz__tarz00,
		BgL_bgl_string2091za700za7za7_2265za7, "chr", 3);
	      DEFINE_STRING(BGl_string2093z00zz__tarz00,
		BgL_bgl_string2093za700za7za7_2266za7, "blk", 3);
	      DEFINE_STRING(BGl_string2095z00zz__tarz00,
		BgL_bgl_string2095za700za7za7_2267za7, "dir", 3);
	      DEFINE_STRING(BGl_string2177z00zz__tarz00,
		BgL_bgl_string2177za700za7za7_2268za7, "elong", 5);
	      DEFINE_STRING(BGl_string2097z00zz__tarz00,
		BgL_bgl_string2097za700za7za7_2269za7, "fifo", 4);
	      DEFINE_STRING(BGl_string2099z00zz__tarz00,
		BgL_bgl_string2099za700za7za7_2270za7, "contig", 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2170z00zz__tarz00,
		BgL_bgl_za762lambda1474za7622271z00, BGl_z62lambda1474z62zz__tarz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2171z00zz__tarz00,
		BgL_bgl_za762lambda1473za7622272z00, BGl_z62lambda1473z62zz__tarz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2172z00zz__tarz00,
		BgL_bgl_za762lambda1479za7622273z00, BGl_z62lambda1479z62zz__tarz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2173z00zz__tarz00,
		BgL_bgl_za762lambda1478za7622274z00, BGl_z62lambda1478z62zz__tarz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2174z00zz__tarz00,
		BgL_bgl_za762lambda1486za7622275z00, BGl_z62lambda1486z62zz__tarz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2175z00zz__tarz00,
		BgL_bgl_za762lambda1485za7622276z00, BGl_z62lambda1485z62zz__tarz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2181z00zz__tarz00,
		BgL_bgl_string2181za700za7za7_2277za7, "date", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2178z00zz__tarz00,
		BgL_bgl_za762lambda1493za7622278z00, BGl_z62lambda1493z62zz__tarz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2179z00zz__tarz00,
		BgL_bgl_za762lambda1492za7622279z00, BGl_z62lambda1492z62zz__tarz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tarzd2readzd2blockzd2envzd2zz__tarz00,
		BgL_bgl__tarza7d2readza7d2bl2280z00, opt_generic_entry,
		BGl__tarzd2readzd2blockz00zz__tarz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2185z00zz__tarz00,
		BgL_bgl_string2185za700za7za7_2281za7, "checksum", 8);
	      DEFINE_STRING(BGl_string2189z00zz__tarz00,
		BgL_bgl_string2189za700za7za7_2282za7, "type", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2182z00zz__tarz00,
		BgL_bgl_za762lambda1498za7622283z00, BGl_z62lambda1498z62zz__tarz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2183z00zz__tarz00,
		BgL_bgl_za762lambda1497za7622284z00, BGl_z62lambda1497z62zz__tarz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2186z00zz__tarz00,
		BgL_bgl_za762lambda1507za7622285z00, BGl_z62lambda1507z62zz__tarz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2191z00zz__tarz00,
		BgL_bgl_string2191za700za7za7_2286za7, "symbol", 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2187z00zz__tarz00,
		BgL_bgl_za762lambda1506za7622287z00, BGl_z62lambda1506z62zz__tarz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2192z00zz__tarz00,
		BgL_bgl_za762lambda1512za7622288z00, BGl_z62lambda1512z62zz__tarz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2193z00zz__tarz00,
		BgL_bgl_za762lambda1511za7622289z00, BGl_z62lambda1511z62zz__tarz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2194z00zz__tarz00,
		BgL_bgl_za762lambda1517za7622290z00, BGl_z62lambda1517z62zz__tarz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2195z00zz__tarz00,
		BgL_bgl_za762lambda1516za7622291z00, BGl_z62lambda1516z62zz__tarz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2196z00zz__tarz00,
		BgL_bgl_za762lambda1522za7622292z00, BGl_z62lambda1522z62zz__tarz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2197z00zz__tarz00,
		BgL_bgl_za762lambda1521za7622293z00, BGl_z62lambda1521z62zz__tarz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2198z00zz__tarz00,
		BgL_bgl_za762lambda1527za7622294z00, BGl_z62lambda1527z62zz__tarz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2199z00zz__tarz00,
		BgL_bgl_za762lambda1526za7622295z00, BGl_z62lambda1526z62zz__tarz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tarzd2roundzd2upzd2tozd2recordzd2siza7ezd2envza7zz__tarz00,
		BgL_bgl_za762tarza7d2roundza7d2296za7,
		BGl_z62tarzd2roundzd2upzd2tozd2recordzd2siza7ez17zz__tarz00, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string2100z00zz__tarz00,
		BgL_bgl_string2100za700za7za7_2297za7, "invalid file type", 17);
	      DEFINE_STRING(BGl_string2101z00zz__tarz00,
		BgL_bgl_string2101za700za7za7_2298za7, "invalid octal record item", 25);
	      DEFINE_STRING(BGl_string2102z00zz__tarz00,
		BgL_bgl_string2102za700za7za7_2299za7, "        ", 8);
	      DEFINE_STRING(BGl_string2104z00zz__tarz00,
		BgL_bgl_string2104za700za7za7_2300za7, "tar-read-header", 15);
	      DEFINE_STRING(BGl_string2105z00zz__tarz00,
		BgL_bgl_string2105za700za7za7_2301za7, "input-port", 10);
	      DEFINE_STRING(BGl_string2106z00zz__tarz00,
		BgL_bgl_string2106za700za7za7_2302za7, "", 0);
	      DEFINE_STRING(BGl_string2108z00zz__tarz00,
		BgL_bgl_string2108za700za7za7_2303za7, "name", 4);
	      DEFINE_STRING(BGl_string2110z00zz__tarz00,
		BgL_bgl_string2110za700za7za7_2304za7, "mode", 4);
	      DEFINE_STRING(BGl_string2112z00zz__tarz00,
		BgL_bgl_string2112za700za7za7_2305za7, "uid", 3);
	      DEFINE_STRING(BGl_string2114z00zz__tarz00,
		BgL_bgl_string2114za700za7za7_2306za7, "gid", 3);
	      DEFINE_STRING(BGl_string2116z00zz__tarz00,
		BgL_bgl_string2116za700za7za7_2307za7, "size", 4);
	      DEFINE_STRING(BGl_string2118z00zz__tarz00,
		BgL_bgl_string2118za700za7za7_2308za7, "mtime", 5);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__tarz00));
		     ADD_ROOT((void *) (&BGl_list2147z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_tarzd2headerzd2zz__tarz00));
		     ADD_ROOT((void *) (&BGl_keyword2148z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2103z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2107z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2109z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_keyword2150z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_keyword2152z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2111z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2113z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2115z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2117z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2119z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2121z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2123z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2125z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2207z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2208z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2127z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2129z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2211z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2131z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2140z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2143z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2154z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2080z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2082z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2165z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2084z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2086z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2169z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2088z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2090z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2092z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2094z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2176z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2096z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2098z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2180z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2184z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2188z00zz__tarz00));
		     ADD_ROOT((void *) (&BGl_symbol2190z00zz__tarz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__tarz00(long
		BgL_checksumz00_3042, char *BgL_fromz00_3043)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__tarz00))
				{
					BGl_requirezd2initializa7ationz75zz__tarz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__tarz00();
					BGl_cnstzd2initzd2zz__tarz00();
					BGl_importedzd2moduleszd2initz00zz__tarz00();
					BGl_objectzd2initzd2zz__tarz00();
					return BGl_methodzd2initzd2zz__tarz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__tarz00()
	{
		{	/* Unsafe/tar.scm 17 */
			BGl_symbol2080z00zz__tarz00 =
				bstring_to_symbol(BGl_string2081z00zz__tarz00);
			BGl_symbol2082z00zz__tarz00 =
				bstring_to_symbol(BGl_string2083z00zz__tarz00);
			BGl_symbol2084z00zz__tarz00 =
				bstring_to_symbol(BGl_string2085z00zz__tarz00);
			BGl_symbol2086z00zz__tarz00 =
				bstring_to_symbol(BGl_string2087z00zz__tarz00);
			BGl_symbol2088z00zz__tarz00 =
				bstring_to_symbol(BGl_string2089z00zz__tarz00);
			BGl_symbol2090z00zz__tarz00 =
				bstring_to_symbol(BGl_string2091z00zz__tarz00);
			BGl_symbol2092z00zz__tarz00 =
				bstring_to_symbol(BGl_string2093z00zz__tarz00);
			BGl_symbol2094z00zz__tarz00 =
				bstring_to_symbol(BGl_string2095z00zz__tarz00);
			BGl_symbol2096z00zz__tarz00 =
				bstring_to_symbol(BGl_string2097z00zz__tarz00);
			BGl_symbol2098z00zz__tarz00 =
				bstring_to_symbol(BGl_string2099z00zz__tarz00);
			BGl_symbol2103z00zz__tarz00 =
				bstring_to_symbol(BGl_string2104z00zz__tarz00);
			BGl_symbol2107z00zz__tarz00 =
				bstring_to_symbol(BGl_string2108z00zz__tarz00);
			BGl_symbol2109z00zz__tarz00 =
				bstring_to_symbol(BGl_string2110z00zz__tarz00);
			BGl_symbol2111z00zz__tarz00 =
				bstring_to_symbol(BGl_string2112z00zz__tarz00);
			BGl_symbol2113z00zz__tarz00 =
				bstring_to_symbol(BGl_string2114z00zz__tarz00);
			BGl_symbol2115z00zz__tarz00 =
				bstring_to_symbol(BGl_string2116z00zz__tarz00);
			BGl_symbol2117z00zz__tarz00 =
				bstring_to_symbol(BGl_string2118z00zz__tarz00);
			BGl_symbol2119z00zz__tarz00 =
				bstring_to_symbol(BGl_string2120z00zz__tarz00);
			BGl_symbol2121z00zz__tarz00 =
				bstring_to_symbol(BGl_string2122z00zz__tarz00);
			BGl_symbol2123z00zz__tarz00 =
				bstring_to_symbol(BGl_string2124z00zz__tarz00);
			BGl_symbol2125z00zz__tarz00 =
				bstring_to_symbol(BGl_string2126z00zz__tarz00);
			BGl_symbol2127z00zz__tarz00 =
				bstring_to_symbol(BGl_string2128z00zz__tarz00);
			BGl_symbol2129z00zz__tarz00 =
				bstring_to_symbol(BGl_string2130z00zz__tarz00);
			BGl_symbol2131z00zz__tarz00 =
				bstring_to_symbol(BGl_string2132z00zz__tarz00);
			BGl_symbol2140z00zz__tarz00 =
				bstring_to_symbol(BGl_string2141z00zz__tarz00);
			BGl_symbol2143z00zz__tarz00 =
				bstring_to_symbol(BGl_string2144z00zz__tarz00);
			BGl_keyword2148z00zz__tarz00 =
				bstring_to_keyword(BGl_string2149z00zz__tarz00);
			BGl_keyword2150z00zz__tarz00 =
				bstring_to_keyword(BGl_string2151z00zz__tarz00);
			BGl_keyword2152z00zz__tarz00 =
				bstring_to_keyword(BGl_string2153z00zz__tarz00);
			BGl_list2147z00zz__tarz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2148z00zz__tarz00,
				MAKE_YOUNG_PAIR(BGl_keyword2150z00zz__tarz00,
					MAKE_YOUNG_PAIR(BGl_keyword2152z00zz__tarz00, BNIL)));
			BGl_symbol2154z00zz__tarz00 =
				bstring_to_symbol(BGl_string2155z00zz__tarz00);
			BGl_symbol2165z00zz__tarz00 =
				bstring_to_symbol(BGl_string2166z00zz__tarz00);
			BGl_symbol2169z00zz__tarz00 =
				bstring_to_symbol(BGl_string2142z00zz__tarz00);
			BGl_symbol2176z00zz__tarz00 =
				bstring_to_symbol(BGl_string2177z00zz__tarz00);
			BGl_symbol2180z00zz__tarz00 =
				bstring_to_symbol(BGl_string2181z00zz__tarz00);
			BGl_symbol2184z00zz__tarz00 =
				bstring_to_symbol(BGl_string2185z00zz__tarz00);
			BGl_symbol2188z00zz__tarz00 =
				bstring_to_symbol(BGl_string2189z00zz__tarz00);
			BGl_symbol2190z00zz__tarz00 =
				bstring_to_symbol(BGl_string2191z00zz__tarz00);
			BGl_symbol2207z00zz__tarz00 =
				bstring_to_symbol(BGl_string2146z00zz__tarz00);
			BGl_symbol2208z00zz__tarz00 =
				bstring_to_symbol(BGl_string2209z00zz__tarz00);
			return (BGl_symbol2211z00zz__tarz00 =
				bstring_to_symbol(BGl_string2212z00zz__tarz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__tarz00()
	{
		{	/* Unsafe/tar.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* tar-error */
	obj_t BGl_tarzd2errorzd2zz__tarz00(obj_t BgL_msgz00_3, obj_t BgL_objz00_4)
	{
		{	/* Unsafe/tar.scm 79 */
			{	/* Unsafe/tar.scm 80 */
				BgL_z62iozd2parsezd2errorz62_bglt BgL_arg1268z00_1199;

				{	/* Unsafe/tar.scm 80 */
					BgL_z62iozd2parsezd2errorz62_bglt BgL_new1057z00_1200;

					{	/* Unsafe/tar.scm 80 */
						BgL_z62iozd2parsezd2errorz62_bglt BgL_new1056z00_1203;

						BgL_new1056z00_1203 =
							((BgL_z62iozd2parsezd2errorz62_bglt)
							BOBJECT(GC_MALLOC(sizeof(struct
										BgL_z62iozd2parsezd2errorz62_bgl))));
						{	/* Unsafe/tar.scm 80 */
							long BgL_arg1273z00_1204;

							{	/* Unsafe/tar.scm 80 */
								long BgL_res1893z00_2107;

								BgL_res1893z00_2107 =
									BGL_CLASS_INDEX(BGl_z62iozd2parsezd2errorz62zz__objectz00);
								BgL_arg1273z00_1204 = BgL_res1893z00_2107;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1056z00_1203),
								BgL_arg1273z00_1204);
						}
						BgL_new1057z00_1200 = BgL_new1056z00_1203;
					}
					((((BgL_z62exceptionz62_bglt) COBJECT(
									((BgL_z62exceptionz62_bglt) BgL_new1057z00_1200)))->
							BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
					((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
										BgL_new1057z00_1200)))->BgL_locationz00) =
						((obj_t) BFALSE), BUNSPEC);
					{
						obj_t BgL_auxz00_3104;

						{	/* Unsafe/tar.scm 80 */
							obj_t BgL_arg1270z00_1201;

							{	/* Unsafe/tar.scm 80 */
								obj_t BgL_arg1271z00_1202;

								{	/* Unsafe/tar.scm 80 */
									obj_t BgL_res1894z00_2111;

									{	/* Unsafe/tar.scm 80 */
										obj_t BgL_classz00_2110;

										BgL_classz00_2110 =
											BGl_z62iozd2parsezd2errorz62zz__objectz00;
										BgL_res1894z00_2111 =
											BGL_CLASS_ALL_FIELDS(BgL_classz00_2110);
									}
									BgL_arg1271z00_1202 = BgL_res1894z00_2111;
								}
								BgL_arg1270z00_1201 =
									VECTOR_REF(BgL_arg1271z00_1202, ((long) 2));
							}
							BgL_auxz00_3104 =
								BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
								(BgL_arg1270z00_1201);
						}
						((((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt) BgL_new1057z00_1200)))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_3104), BUNSPEC);
					}
					((((BgL_z62errorz62_bglt) COBJECT(
									((BgL_z62errorz62_bglt) BgL_new1057z00_1200)))->BgL_procz00) =
						((obj_t) BGl_symbol2080z00zz__tarz00), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
										BgL_new1057z00_1200)))->BgL_msgz00) =
						((obj_t) BgL_msgz00_3), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
										BgL_new1057z00_1200)))->BgL_objz00) =
						((obj_t) BgL_objz00_4), BUNSPEC);
					BgL_arg1268z00_1199 = BgL_new1057z00_1200;
				}
				return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1268z00_1199));
			}
		}

	}



/* tar-type-name */
	obj_t BGl_tarzd2typezd2namez00zz__tarz00(unsigned char BgL_cz00_5)
	{
		{	/* Unsafe/tar.scm 99 */
			switch (BgL_cz00_5)
				{
				case ((unsigned char) '\000'):

					return BGl_symbol2082z00zz__tarz00;
					break;
				case ((unsigned char) '0'):

					return BGl_symbol2084z00zz__tarz00;
					break;
				case ((unsigned char) '1'):

					return BGl_symbol2086z00zz__tarz00;
					break;
				case ((unsigned char) '2'):

					return BGl_symbol2088z00zz__tarz00;
					break;
				case ((unsigned char) '3'):

					return BGl_symbol2090z00zz__tarz00;
					break;
				case ((unsigned char) '4'):

					return BGl_symbol2092z00zz__tarz00;
					break;
				case ((unsigned char) '5'):

					return BGl_symbol2094z00zz__tarz00;
					break;
				case ((unsigned char) '6'):

					return BGl_symbol2096z00zz__tarz00;
					break;
				case ((unsigned char) '7'):

					return BGl_symbol2098z00zz__tarz00;
					break;
				default:
					return
						BGl_tarzd2errorzd2zz__tarz00(BGl_string2100z00zz__tarz00,
						BCHAR(BgL_cz00_5));
				}
		}

	}



/* checksum */
	long BGl_checksumz00zz__tarz00(obj_t BgL_bufz00_10)
	{
		{	/* Unsafe/tar.scm 124 */
			{	/* Unsafe/tar.scm 125 */
				long BgL_pz00_1215;

				BgL_pz00_1215 = (((long) 100) + ((long) 48));
				{	/* Unsafe/tar.scm 125 */
					obj_t BgL_b2z00_1216;

					{	/* Unsafe/tar.scm 127 */
						obj_t BgL_arg1286z00_1229;
						obj_t BgL_arg1287z00_1230;

						{	/* Unsafe/tar.scm 127 */
							obj_t BgL_res1896z00_2120;

							BgL_res1896z00_2120 =
								c_substring(((obj_t) BgL_bufz00_10), ((long) 0), BgL_pz00_1215);
							BgL_arg1286z00_1229 = BgL_res1896z00_2120;
						}
						{	/* Unsafe/tar.scm 129 */
							long BgL_arg1288z00_1231;
							long BgL_arg1289z00_1232;

							BgL_arg1288z00_1231 = (BgL_pz00_1215 + ((long) 8));
							BgL_arg1289z00_1232 = STRING_LENGTH(((obj_t) BgL_bufz00_10));
							{	/* Unsafe/tar.scm 129 */
								obj_t BgL_res1899z00_2128;

								BgL_res1899z00_2128 =
									c_substring(
									((obj_t) BgL_bufz00_10), BgL_arg1288z00_1231,
									BgL_arg1289z00_1232);
								BgL_arg1287z00_1230 = BgL_res1899z00_2128;
						}}
						BgL_b2z00_1216 =
							string_append_3(BgL_arg1286z00_1229, BGl_string2102z00zz__tarz00,
							BgL_arg1287z00_1230);
					}
					{	/* Unsafe/tar.scm 126 */

						{
							long BgL_iz00_2168;
							long BgL_sz00_2169;

							BgL_iz00_2168 = ((long) 0);
							BgL_sz00_2169 = ((long) 0);
						BgL_dozd2loopzd2zd21062zd2_2167:
							if ((BgL_iz00_2168 >= ((long) 512)))
								{	/* Unsafe/tar.scm 130 */
									return BgL_sz00_2169;
								}
							else
								{
									long BgL_sz00_3134;
									long BgL_iz00_3132;

									BgL_iz00_3132 = (((long) 1) + BgL_iz00_2168);
									BgL_sz00_3134 =
										(BgL_sz00_2169 +
										(STRING_REF(BgL_b2z00_1216, BgL_iz00_2168)));
									BgL_sz00_2169 = BgL_sz00_3134;
									BgL_iz00_2168 = BgL_iz00_3132;
									goto BgL_dozd2loopzd2zd21062zd2_2167;
								}
						}
					}
				}
			}
		}

	}



/* _tar-read-header */
	obj_t BGl__tarzd2readzd2headerz00zz__tarz00(obj_t BgL_env1158z00_13,
		obj_t BgL_opt1157z00_12)
	{
		{	/* Unsafe/tar.scm 137 */
			{	/* Unsafe/tar.scm 137 */

				switch (VECTOR_LENGTH(BgL_opt1157z00_12))
					{
					case ((long) 0):

						{	/* Unsafe/tar.scm 137 */
							obj_t BgL_portz00_1237;

							{	/* Unsafe/tar.scm 137 */
								obj_t BgL_res1915z00_2196;

								{	/* Unsafe/tar.scm 137 */
									obj_t BgL_tmpz00_3138;

									BgL_tmpz00_3138 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1915z00_2196 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_3138);
								}
								BgL_portz00_1237 = BgL_res1915z00_2196;
							}
							{	/* Unsafe/tar.scm 137 */

								return BGl_tarzd2readzd2headerz00zz__tarz00(BgL_portz00_1237);
							}
						}
						break;
					case ((long) 1):

						{	/* Unsafe/tar.scm 137 */
							obj_t BgL_portz00_1238;

							BgL_portz00_1238 = VECTOR_REF(BgL_opt1157z00_12, ((long) 0));
							{	/* Unsafe/tar.scm 137 */

								return BGl_tarzd2readzd2headerz00zz__tarz00(BgL_portz00_1238);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* tar-read-header */
	BGL_EXPORTED_DEF obj_t BGl_tarzd2readzd2headerz00zz__tarz00(obj_t
		BgL_portz00_11)
	{
		{	/* Unsafe/tar.scm 137 */
			if (INPUT_PORTP(BgL_portz00_11))
				{	/* Unsafe/tar.scm 138 */
					BFALSE;
				}
			else
				{	/* Unsafe/tar.scm 138 */
					BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_symbol2103z00zz__tarz00,
						BGl_string2105z00zz__tarz00, BgL_portz00_11);
				}
			{	/* Unsafe/tar.scm 140 */
				struct bgl_cell BgL_box2312_2952z00;
				obj_t BgL_ptrz00_2952;

				BgL_ptrz00_2952 =
					MAKE_CELL_STACK(BINT(((long) 0)), BgL_box2312_2952z00);
				{	/* Unsafe/tar.scm 140 */
					obj_t BgL_dataz00_1241;

					BgL_dataz00_1241 =
						BGl_readzd2charszd2zz__r4_input_6_10_2z00(BINT(((long) 512)),
						BgL_portz00_11);
					{	/* Unsafe/tar.scm 141 */
						long BgL_lenz00_1242;

						BgL_lenz00_1242 = STRING_LENGTH(((obj_t) BgL_dataz00_1241));
						{	/* Unsafe/tar.scm 142 */

							{

								{	/* Unsafe/tar.scm 164 */
									obj_t BgL_namez00_1245;

									{	/* Unsafe/tar.scm 164 */
										bool_t BgL_test2313z00_3154;

										if (STRINGP(BgL_dataz00_1241))
											{	/* Unsafe/tar.scm 164 */
												BgL_test2313z00_3154 =
													(STRING_LENGTH(BgL_dataz00_1241) == ((long) 0));
											}
										else
											{	/* Unsafe/tar.scm 164 */
												BgL_test2313z00_3154 = ((bool_t) 1);
											}
										if (BgL_test2313z00_3154)
											{	/* Unsafe/tar.scm 164 */
												BgL_namez00_1245 = BGl_string2106z00zz__tarz00;
											}
										else
											{	/* Unsafe/tar.scm 164 */
												BgL_namez00_1245 =
													BGl_extractze70ze7zz__tarz00(BgL_lenz00_1242,
													BgL_portz00_11, BgL_dataz00_1241, BgL_ptrz00_2952,
													BGl_symbol2107z00zz__tarz00, ((long) 100));
									}}
									if ((STRING_LENGTH(((obj_t) BgL_namez00_1245)) > ((long) 0)))
										{	/* Unsafe/tar.scm 168 */
											obj_t BgL_modez00_1248;

											{	/* Unsafe/tar.scm 168 */
												obj_t BgL_arg1326z00_1298;

												BgL_arg1326z00_1298 =
													BGl_extractze70ze7zz__tarz00(BgL_lenz00_1242,
													BgL_portz00_11, BgL_dataz00_1241, BgL_ptrz00_2952,
													BGl_symbol2109z00zz__tarz00, ((long) 8));
												{	/* Unsafe/tar.scm 168 */

													{	/* Unsafe/tar.scm 116 */
														long BgL__ortest_1061z00_2240;

														{	/* Unsafe/tar.scm 116 */
															char *BgL_tmpz00_3165;

															BgL_tmpz00_3165 =
																BSTRING_TO_STRING(BgL_arg1326z00_1298);
															BgL__ortest_1061z00_2240 =
																BGL_STRTOL(BgL_tmpz00_3165, ((long) 0),
																((long) 8));
														}
														BgL_modez00_1248 = BINT(BgL__ortest_1061z00_2240);
											}}}
											{	/* Unsafe/tar.scm 168 */
												obj_t BgL_uidz00_1249;

												{	/* Unsafe/tar.scm 169 */
													obj_t BgL_arg1325z00_1295;

													BgL_arg1325z00_1295 =
														BGl_extractze70ze7zz__tarz00(BgL_lenz00_1242,
														BgL_portz00_11, BgL_dataz00_1241, BgL_ptrz00_2952,
														BGl_symbol2111z00zz__tarz00, ((long) 8));
													{	/* Unsafe/tar.scm 169 */

														{	/* Unsafe/tar.scm 116 */
															long BgL__ortest_1061z00_2241;

															{	/* Unsafe/tar.scm 116 */
																char *BgL_tmpz00_3170;

																BgL_tmpz00_3170 =
																	BSTRING_TO_STRING(BgL_arg1325z00_1295);
																BgL__ortest_1061z00_2241 =
																	BGL_STRTOL(BgL_tmpz00_3170, ((long) 0),
																	((long) 8));
															}
															BgL_uidz00_1249 = BINT(BgL__ortest_1061z00_2241);
												}}}
												{	/* Unsafe/tar.scm 169 */
													obj_t BgL_gidz00_1250;

													{	/* Unsafe/tar.scm 170 */
														obj_t BgL_arg1324z00_1292;

														BgL_arg1324z00_1292 =
															BGl_extractze70ze7zz__tarz00(BgL_lenz00_1242,
															BgL_portz00_11, BgL_dataz00_1241, BgL_ptrz00_2952,
															BGl_symbol2113z00zz__tarz00, ((long) 8));
														{	/* Unsafe/tar.scm 170 */

															{	/* Unsafe/tar.scm 116 */
																long BgL__ortest_1061z00_2242;

																{	/* Unsafe/tar.scm 116 */
																	char *BgL_tmpz00_3175;

																	BgL_tmpz00_3175 =
																		BSTRING_TO_STRING(BgL_arg1324z00_1292);
																	BgL__ortest_1061z00_2242 =
																		BGL_STRTOL(BgL_tmpz00_3175, ((long) 0),
																		((long) 8));
																}
																BgL_gidz00_1250 =
																	BINT(BgL__ortest_1061z00_2242);
													}}}
													{	/* Unsafe/tar.scm 170 */
														long BgL_siza7eza7_1251;

														BgL_siza7eza7_1251 =
															BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00
															(BGl_extractze70ze7zz__tarz00(BgL_lenz00_1242,
																BgL_portz00_11, BgL_dataz00_1241,
																BgL_ptrz00_2952, BGl_symbol2115z00zz__tarz00,
																((long) 12)), ((long) 8));
														{	/* Unsafe/tar.scm 171 */
															long BgL_mtimez00_1252;

															BgL_mtimez00_1252 =
																BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00
																(BGl_extractze70ze7zz__tarz00(BgL_lenz00_1242,
																	BgL_portz00_11, BgL_dataz00_1241,
																	BgL_ptrz00_2952, BGl_symbol2117z00zz__tarz00,
																	((long) 12)), ((long) 8));
															{	/* Unsafe/tar.scm 172 */
																obj_t BgL_chksumz00_1253;

																{	/* Unsafe/tar.scm 173 */
																	obj_t BgL_arg1318z00_1287;

																	BgL_arg1318z00_1287 =
																		BGl_extractze70ze7zz__tarz00
																		(BgL_lenz00_1242, BgL_portz00_11,
																		BgL_dataz00_1241, BgL_ptrz00_2952,
																		BGl_symbol2119z00zz__tarz00, ((long) 8));
																	{	/* Unsafe/tar.scm 173 */

																		{	/* Unsafe/tar.scm 116 */
																			long BgL__ortest_1061z00_2243;

																			{	/* Unsafe/tar.scm 116 */
																				char *BgL_tmpz00_3184;

																				BgL_tmpz00_3184 =
																					BSTRING_TO_STRING
																					(BgL_arg1318z00_1287);
																				BgL__ortest_1061z00_2243 =
																					BGL_STRTOL(BgL_tmpz00_3184,
																					((long) 0), ((long) 8));
																			}
																			BgL_chksumz00_1253 =
																				BINT(BgL__ortest_1061z00_2243);
																}}}
																{	/* Unsafe/tar.scm 173 */
																	unsigned char BgL_linkflagz00_1254;

																	{	/* Unsafe/tar.scm 161 */
																		unsigned char BgL_cz00_1326;

																		BgL_cz00_1326 =
																			STRING_REF(
																			((obj_t) BgL_dataz00_1241),
																			(long) CINT(CELL_REF(BgL_ptrz00_2952)));
																		{	/* Unsafe/tar.scm 162 */
																			obj_t BgL_auxz00_2953;

																			BgL_auxz00_2953 =
																				ADDFX(BINT(((long) 1)),
																				CELL_REF(BgL_ptrz00_2952));
																			CELL_SET(BgL_ptrz00_2952,
																				BgL_auxz00_2953);
																		}
																		BgL_linkflagz00_1254 = BgL_cz00_1326;
																	}
																	{	/* Unsafe/tar.scm 174 */
																		obj_t BgL_linknamez00_1255;

																		BgL_linknamez00_1255 =
																			BGl_extractze70ze7zz__tarz00
																			(BgL_lenz00_1242, BgL_portz00_11,
																			BgL_dataz00_1241, BgL_ptrz00_2952,
																			BGl_symbol2121z00zz__tarz00,
																			((long) 100));
																		{	/* Unsafe/tar.scm 175 */
																			obj_t BgL_magicz00_1256;

																			BgL_magicz00_1256 =
																				BGl_extractze70ze7zz__tarz00
																				(BgL_lenz00_1242, BgL_portz00_11,
																				BgL_dataz00_1241, BgL_ptrz00_2952,
																				BGl_symbol2123z00zz__tarz00,
																				((long) 8));
																			{	/* Unsafe/tar.scm 176 */
																				obj_t BgL_unamez00_1257;

																				BgL_unamez00_1257 =
																					BGl_extractze70ze7zz__tarz00
																					(BgL_lenz00_1242, BgL_portz00_11,
																					BgL_dataz00_1241, BgL_ptrz00_2952,
																					BGl_symbol2125z00zz__tarz00,
																					((long) 32));
																				{	/* Unsafe/tar.scm 177 */
																					obj_t BgL_gnamez00_1258;

																					BgL_gnamez00_1258 =
																						BGl_extractze70ze7zz__tarz00
																						(BgL_lenz00_1242, BgL_portz00_11,
																						BgL_dataz00_1241, BgL_ptrz00_2952,
																						BGl_symbol2127z00zz__tarz00,
																						((long) 32));
																					{	/* Unsafe/tar.scm 178 */
																						long BgL_devmajorz00_1259;

																						{	/* Unsafe/tar.scm 179 */
																							obj_t BgL_arg1314z00_1283;

																							BgL_arg1314z00_1283 =
																								BGl_extractze70ze7zz__tarz00
																								(BgL_lenz00_1242,
																								BgL_portz00_11,
																								BgL_dataz00_1241,
																								BgL_ptrz00_2952,
																								BGl_symbol2129z00zz__tarz00,
																								((long) 8));
																							{	/* Unsafe/tar.scm 116 */
																								long BgL__ortest_1061z00_2244;

																								{	/* Unsafe/tar.scm 116 */
																									char *BgL_tmpz00_3198;

																									BgL_tmpz00_3198 =
																										BSTRING_TO_STRING
																										(BgL_arg1314z00_1283);
																									BgL__ortest_1061z00_2244 =
																										BGL_STRTOL(BgL_tmpz00_3198,
																										((long) 0), ((long) 8));
																								}
																								BgL_devmajorz00_1259 =
																									BgL__ortest_1061z00_2244;
																						}}
																						{	/* Unsafe/tar.scm 179 */
																							long BgL_devminorz00_1260;

																							{	/* Unsafe/tar.scm 180 */
																								obj_t BgL_arg1313z00_1282;

																								BgL_arg1313z00_1282 =
																									BGl_extractze70ze7zz__tarz00
																									(BgL_lenz00_1242,
																									BgL_portz00_11,
																									BgL_dataz00_1241,
																									BgL_ptrz00_2952,
																									BGl_symbol2131z00zz__tarz00,
																									((long) 8));
																								{	/* Unsafe/tar.scm 116 */
																									long BgL__ortest_1061z00_2245;

																									{	/* Unsafe/tar.scm 116 */
																										char *BgL_tmpz00_3202;

																										BgL_tmpz00_3202 =
																											BSTRING_TO_STRING
																											(BgL_arg1313z00_1282);
																										BgL__ortest_1061z00_2245 =
																											BGL_STRTOL
																											(BgL_tmpz00_3202,
																											((long) 0), ((long) 8));
																									}
																									BgL_devminorz00_1260 =
																										BgL__ortest_1061z00_2245;
																							}}
																							{	/* Unsafe/tar.scm 180 */
																								long BgL_csum2z00_1261;

																								BgL_csum2z00_1261 =
																									BGl_checksumz00zz__tarz00
																									(BgL_dataz00_1241);
																								{	/* Unsafe/tar.scm 181 */

																									{	/* Unsafe/tar.scm 183 */
																										bool_t BgL_test2316z00_3206;

																										{	/* Unsafe/tar.scm 183 */
																											bool_t
																												BgL_test2317z00_3207;
																											{	/* Unsafe/tar.scm 183 */
																												bool_t
																													BgL_res1937z00_2261;
																												if ((((long) 7) ==
																														STRING_LENGTH((
																																(obj_t)
																																BgL_magicz00_1256))))
																													{	/* Unsafe/tar.scm 183 */
																														int
																															BgL_arg1650z00_2251;
																														{	/* Unsafe/tar.scm 183 */
																															char
																																*BgL_auxz00_3214;
																															char
																																*BgL_tmpz00_3212;
																															BgL_auxz00_3214 =
																																BSTRING_TO_STRING
																																(((obj_t)
																																	BgL_magicz00_1256));
																															BgL_tmpz00_3212 =
																																BSTRING_TO_STRING
																																(BGl_string2133z00zz__tarz00);
																															BgL_arg1650z00_2251
																																=
																																memcmp
																																(BgL_tmpz00_3212,
																																BgL_auxz00_3214,
																																((long) 7));
																														}
																														BgL_res1937z00_2261
																															=
																															((long)
																															(BgL_arg1650z00_2251)
																															== ((long) 0));
																													}
																												else
																													{	/* Unsafe/tar.scm 183 */
																														BgL_res1937z00_2261
																															= ((bool_t) 0);
																													}
																												BgL_test2317z00_3207 =
																													BgL_res1937z00_2261;
																											}
																											if (BgL_test2317z00_3207)
																												{	/* Unsafe/tar.scm 183 */
																													BgL_test2316z00_3206 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Unsafe/tar.scm 184 */
																													bool_t
																														BgL_test2319z00_3220;
																													{	/* Unsafe/tar.scm 184 */
																														bool_t
																															BgL_res1942z00_2277;
																														if ((((long) 5) ==
																																STRING_LENGTH((
																																		(obj_t)
																																		BgL_magicz00_1256))))
																															{	/* Unsafe/tar.scm 184 */
																																int
																																	BgL_arg1650z00_2267;
																																{	/* Unsafe/tar.scm 184 */
																																	char
																																		*BgL_auxz00_3227;
																																	char
																																		*BgL_tmpz00_3225;
																																	BgL_auxz00_3227
																																		=
																																		BSTRING_TO_STRING
																																		(((obj_t)
																																			BgL_magicz00_1256));
																																	BgL_tmpz00_3225
																																		=
																																		BSTRING_TO_STRING
																																		(BGl_string2134z00zz__tarz00);
																																	BgL_arg1650z00_2267
																																		=
																																		memcmp
																																		(BgL_tmpz00_3225,
																																		BgL_auxz00_3227,
																																		((long) 5));
																																}
																																BgL_res1942z00_2277
																																	=
																																	((long)
																																	(BgL_arg1650z00_2267)
																																	==
																																	((long) 0));
																															}
																														else
																															{	/* Unsafe/tar.scm 184 */
																																BgL_res1942z00_2277
																																	=
																																	((bool_t) 0);
																															}
																														BgL_test2319z00_3220
																															=
																															BgL_res1942z00_2277;
																													}
																													if (BgL_test2319z00_3220)
																														{	/* Unsafe/tar.scm 184 */
																															BgL_test2316z00_3206
																																= ((bool_t) 1);
																														}
																													else
																														{	/* Unsafe/tar.scm 185 */
																															bool_t
																																BgL_res1947z00_2293;
																															if ((((long) 7) ==
																																	STRING_LENGTH(
																																		((obj_t)
																																			BgL_magicz00_1256))))
																																{	/* Unsafe/tar.scm 185 */
																																	int
																																		BgL_arg1650z00_2283;
																																	{	/* Unsafe/tar.scm 185 */
																																		char
																																			*BgL_auxz00_3239;
																																		char
																																			*BgL_tmpz00_3237;
																																		BgL_auxz00_3239
																																			=
																																			BSTRING_TO_STRING
																																			(((obj_t)
																																				BgL_magicz00_1256));
																																		BgL_tmpz00_3237
																																			=
																																			BSTRING_TO_STRING
																																			(BGl_string2135z00zz__tarz00);
																																		BgL_arg1650z00_2283
																																			=
																																			memcmp
																																			(BgL_tmpz00_3237,
																																			BgL_auxz00_3239,
																																			((long)
																																				7));
																																	}
																																	BgL_res1947z00_2293
																																		=
																																		((long)
																																		(BgL_arg1650z00_2283)
																																		==
																																		((long) 0));
																																}
																															else
																																{	/* Unsafe/tar.scm 185 */
																																	BgL_res1947z00_2293
																																		=
																																		((bool_t)
																																		0);
																																}
																															BgL_test2316z00_3206
																																=
																																BgL_res1947z00_2293;
																														}
																												}
																										}
																										if (BgL_test2316z00_3206)
																											{	/* Unsafe/tar.scm 183 */
																												if (
																													(BgL_csum2z00_1261 ==
																														(long)
																														CINT
																														(BgL_chksumz00_1253)))
																													{	/* Unsafe/tar.scm 192 */
																														BgL_tarzd2headerzd2_bglt
																															BgL_new1065z00_1271;
																														{	/* Unsafe/tar.scm 193 */
																															BgL_tarzd2headerzd2_bglt
																																BgL_new1064z00_1272;
																															BgL_new1064z00_1272
																																=
																																(
																																(BgL_tarzd2headerzd2_bglt)
																																BOBJECT
																																(GC_MALLOC
																																	(sizeof(struct
																																			BgL_tarzd2headerzd2_bgl))));
																															{	/* Unsafe/tar.scm 193 */
																																long
																																	BgL_arg1306z00_1273;
																																{	/* Unsafe/tar.scm 193 */
																																	long
																																		BgL_res1949z00_2298;
																																	BgL_res1949z00_2298
																																		=
																																		BGL_CLASS_INDEX
																																		(BGl_tarzd2headerzd2zz__tarz00);
																																	BgL_arg1306z00_1273
																																		=
																																		BgL_res1949z00_2298;
																																}
																																BGL_OBJECT_CLASS_NUM_SET
																																	(((BgL_objectz00_bglt) BgL_new1064z00_1272), BgL_arg1306z00_1273);
																															}
																															BgL_new1065z00_1271
																																=
																																BgL_new1064z00_1272;
																														}
																														((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1065z00_1271))->BgL_namez00) = ((obj_t) BgL_namez00_1245), BUNSPEC);
																														((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1065z00_1271))->BgL_modez00) = ((long) (long) CINT(BgL_modez00_1248)), BUNSPEC);
																														((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1065z00_1271))->BgL_uidz00) = ((long) (long) CINT(BgL_uidz00_1249)), BUNSPEC);
																														((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1065z00_1271))->BgL_gidz00) = ((long) (long) CINT(BgL_gidz00_1250)), BUNSPEC);
																														((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1065z00_1271))->BgL_siza7eza7) = ((long) BgL_siza7eza7_1251), BUNSPEC);
																														{
																															obj_t
																																BgL_auxz00_3260;
																															{	/* Unsafe/tar.scm 198 */
																																obj_t
																																	BgL_res1951z00_2302;
																																BgL_res1951z00_2302
																																	=
																																	bgl_seconds_to_date
																																	(BgL_mtimez00_1252);
																																BgL_auxz00_3260
																																	=
																																	BgL_res1951z00_2302;
																															}
																															((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1065z00_1271))->BgL_mtimez00) = ((obj_t) BgL_auxz00_3260), BUNSPEC);
																														}
																														((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1065z00_1271))->BgL_checksumz00) = ((long) (long) CINT(BgL_chksumz00_1253)), BUNSPEC);
																														((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1065z00_1271))->BgL_typez00) = ((obj_t) BGl_tarzd2typezd2namez00zz__tarz00(BgL_linkflagz00_1254)), BUNSPEC);
																														((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1065z00_1271))->BgL_linknamez00) = ((obj_t) BgL_linknamez00_1255), BUNSPEC);
																														((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1065z00_1271))->BgL_magicz00) = ((obj_t) BgL_magicz00_1256), BUNSPEC);
																														((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1065z00_1271))->BgL_unamez00) = ((obj_t) BgL_unamez00_1257), BUNSPEC);
																														((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1065z00_1271))->BgL_gnamez00) = ((obj_t) BgL_gnamez00_1258), BUNSPEC);
																														((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1065z00_1271))->BgL_devmajorz00) = ((long) BgL_devmajorz00_1259), BUNSPEC);
																														((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1065z00_1271))->BgL_devminorz00) = ((long) BgL_devminorz00_1260), BUNSPEC);
																														return
																															((obj_t)
																															BgL_new1065z00_1271);
																													}
																												else
																													{	/* Unsafe/tar.scm 189 */
																														obj_t
																															BgL_arg1307z00_1274;
																														{	/* Unsafe/tar.scm 189 */
																															obj_t
																																BgL_list1308z00_1275;
																															BgL_list1308z00_1275
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_chksumz00_1253,
																																BNIL);
																															BgL_arg1307z00_1274
																																=
																																BGl_formatz00zz__r4_output_6_10_3z00
																																(BGl_string2136z00zz__tarz00,
																																BgL_list1308z00_1275);
																														}
																														return
																															BGl_tarzd2errorzd2zz__tarz00
																															(BgL_arg1307z00_1274,
																															BINT
																															(BgL_csum2z00_1261));
																													}
																											}
																										else
																											{	/* Unsafe/tar.scm 186 */
																												obj_t
																													BgL_arg1309z00_1276;
																												{	/* Unsafe/tar.scm 186 */
																													obj_t
																														BgL_res1953z00_2304;
																													BgL_res1953z00_2304 =
																														string_for_read((
																															(obj_t)
																															BgL_magicz00_1256));
																													BgL_arg1309z00_1276 =
																														BgL_res1953z00_2304;
																												}
																												return
																													BGl_tarzd2errorzd2zz__tarz00
																													(BGl_string2137z00zz__tarz00,
																													BgL_arg1309z00_1276);
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
									else
										{	/* Unsafe/tar.scm 167 */
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



/* extract~0 */
	obj_t BGl_extractze70ze7zz__tarz00(long BgL_lenz00_2950,
		obj_t BgL_portz00_2949, obj_t BgL_dataz00_2948, obj_t BgL_ptrz00_2947,
		obj_t BgL_whatz00_1308, long BgL_siza7eza7_1309)
	{
		{	/* Unsafe/tar.scm 159 */
			{
				long BgL_iz00_1312;

				BgL_iz00_1312 = ((long) 0);
			BgL_zc3z04anonymousza31335ze3z87_1313:
				if ((BgL_iz00_1312 >= BgL_siza7eza7_1309))
					{	/* Unsafe/tar.scm 148 */
						obj_t BgL_arg1337z00_1315;

						{	/* Unsafe/tar.scm 148 */
							obj_t BgL_list1338z00_1316;

							BgL_list1338z00_1316 = MAKE_YOUNG_PAIR(BgL_whatz00_1308, BNIL);
							BgL_arg1337z00_1315 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string2138z00zz__tarz00, BgL_list1338z00_1316);
						}
						return
							BGl_tarzd2errorzd2zz__tarz00(BgL_arg1337z00_1315,
							BINT(BgL_siza7eza7_1309));
					}
				else
					{	/* Unsafe/tar.scm 146 */
						if ((BgL_iz00_1312 >= BgL_lenz00_2950))
							{	/* Unsafe/tar.scm 150 */
								return
									BGl_tarzd2errorzd2zz__tarz00(BGl_string2139z00zz__tarz00,
									BgL_portz00_2949);
							}
						else
							{	/* Unsafe/tar.scm 153 */
								unsigned char BgL_cz00_1318;

								{	/* Unsafe/tar.scm 153 */
									long BgL_tmpz00_3290;

									{	/* Unsafe/tar.scm 153 */
										long BgL_za71za7_2205;

										BgL_za71za7_2205 = (long) CINT(CELL_REF(BgL_ptrz00_2947));
										BgL_tmpz00_3290 = (BgL_za71za7_2205 + BgL_iz00_1312);
									}
									BgL_cz00_1318 =
										STRING_REF(((obj_t) BgL_dataz00_2948), BgL_tmpz00_3290);
								}
								if ((((unsigned char) '\000') == BgL_cz00_1318))
									{	/* Unsafe/tar.scm 155 */
										long BgL_nptrz00_1320;

										{	/* Unsafe/tar.scm 155 */
											long BgL_za71za7_2214;

											BgL_za71za7_2214 = (long) CINT(CELL_REF(BgL_ptrz00_2947));
											BgL_nptrz00_1320 = (BgL_za71za7_2214 + BgL_iz00_1312);
										}
										{	/* Unsafe/tar.scm 155 */
											obj_t BgL_subz00_1321;

											{	/* Unsafe/tar.scm 156 */
												obj_t BgL_res1923z00_2220;

												{	/* Unsafe/tar.scm 156 */
													long BgL_startz00_2218;

													BgL_startz00_2218 =
														(long) CINT(CELL_REF(BgL_ptrz00_2947));
													BgL_res1923z00_2220 =
														c_substring(
														((obj_t) BgL_dataz00_2948), BgL_startz00_2218,
														BgL_nptrz00_1320);
												}
												BgL_subz00_1321 = BgL_res1923z00_2220;
											}
											{	/* Unsafe/tar.scm 156 */

												{	/* Unsafe/tar.scm 157 */
													obj_t BgL_auxz00_2951;

													BgL_auxz00_2951 =
														ADDFX(CELL_REF(BgL_ptrz00_2947),
														BINT(BgL_siza7eza7_1309));
													CELL_SET(BgL_ptrz00_2947, BgL_auxz00_2951);
												}
												return BgL_subz00_1321;
											}
										}
									}
								else
									{
										long BgL_iz00_3304;

										BgL_iz00_3304 = (((long) 1) + BgL_iz00_1312);
										BgL_iz00_1312 = BgL_iz00_3304;
										goto BgL_zc3z04anonymousza31335ze3z87_1313;
									}
							}
					}
			}
		}

	}



/* tar-round-up-to-record-size */
	BGL_EXPORTED_DEF long
		BGl_tarzd2roundzd2upzd2tozd2recordzd2siza7ez75zz__tarz00(obj_t BgL_nz00_14)
	{
		{	/* Unsafe/tar.scm 211 */
			if (INTEGERP(BgL_nz00_14))
				{	/* Unsafe/tar.scm 212 */
					return
						(((long) 512) *
						(((long) CINT(BgL_nz00_14) +
								(((long) 512) - ((long) 1))) / ((long) 512)));
				}
			else
				{	/* Unsafe/tar.scm 212 */
					return
						(long)
						CINT(BGl_bigloozd2typezd2errorz00zz__errorz00
						(BGl_symbol2140z00zz__tarz00, BGl_string2142z00zz__tarz00,
							BgL_nz00_14));
		}}

	}



/* &tar-round-up-to-record-size */
	obj_t BGl_z62tarzd2roundzd2upzd2tozd2recordzd2siza7ez17zz__tarz00(obj_t
		BgL_envz00_2822, obj_t BgL_nz00_2823)
	{
		{	/* Unsafe/tar.scm 211 */
			return
				BINT(BGl_tarzd2roundzd2upzd2tozd2recordzd2siza7ez75zz__tarz00
				(BgL_nz00_2823));
		}

	}



/* _tar-read-block */
	obj_t BGl__tarzd2readzd2blockz00zz__tarz00(obj_t BgL_env1162z00_18,
		obj_t BgL_opt1161z00_17)
	{
		{	/* Unsafe/tar.scm 220 */
			{	/* Unsafe/tar.scm 220 */
				obj_t BgL_g1163z00_1337;

				BgL_g1163z00_1337 = VECTOR_REF(BgL_opt1161z00_17, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1161z00_17))
					{
					case ((long) 1):

						{	/* Unsafe/tar.scm 220 */
							obj_t BgL_pz00_1341;

							{	/* Unsafe/tar.scm 220 */
								obj_t BgL_res1959z00_2318;

								{	/* Unsafe/tar.scm 220 */
									obj_t BgL_tmpz00_3318;

									BgL_tmpz00_3318 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1959z00_2318 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_3318);
								}
								BgL_pz00_1341 = BgL_res1959z00_2318;
							}
							{	/* Unsafe/tar.scm 220 */

								return
									BGl_tarzd2readzd2blockz00zz__tarz00(BgL_g1163z00_1337,
									BgL_pz00_1341);
							}
						}
						break;
					case ((long) 2):

						{	/* Unsafe/tar.scm 220 */
							obj_t BgL_pz00_1342;

							BgL_pz00_1342 = VECTOR_REF(BgL_opt1161z00_17, ((long) 1));
							{	/* Unsafe/tar.scm 220 */

								return
									BGl_tarzd2readzd2blockz00zz__tarz00(BgL_g1163z00_1337,
									BgL_pz00_1342);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* tar-read-block */
	BGL_EXPORTED_DEF obj_t BGl_tarzd2readzd2blockz00zz__tarz00(obj_t BgL_hz00_15,
		obj_t BgL_pz00_16)
	{
		{	/* Unsafe/tar.scm 220 */
			if (INPUT_PORTP(BgL_pz00_16))
				{	/* Unsafe/tar.scm 222 */
					if (BGl_isazf3zf3zz__objectz00(BgL_hz00_15,
							BGl_tarzd2headerzd2zz__tarz00))
						{	/* Unsafe/tar.scm 226 */
							long BgL_nz00_1346;

							{	/* Unsafe/tar.scm 226 */
								long BgL_arg1363z00_1355;

								BgL_arg1363z00_1355 =
									(((BgL_tarzd2headerzd2_bglt) COBJECT(
											((BgL_tarzd2headerzd2_bglt) BgL_hz00_15)))->
									BgL_siza7eza7);
								{	/* Unsafe/tar.scm 226 */
									long BgL_res1960z00_2320;

									BgL_res1960z00_2320 = (long) (BgL_arg1363z00_1355);
									BgL_nz00_1346 = BgL_res1960z00_2320;
							}}
							if ((BgL_nz00_1346 == ((long) 0)))
								{	/* Unsafe/tar.scm 227 */
									return BFALSE;
								}
							else
								{	/* Unsafe/tar.scm 229 */
									obj_t BgL_sz00_1348;

									BgL_sz00_1348 =
										BGl_readzd2charszd2zz__r4_input_6_10_2z00(BINT
										(BgL_nz00_1346), BgL_pz00_16);
									if ((STRING_LENGTH(((obj_t) BgL_sz00_1348)) < BgL_nz00_1346))
										{	/* Unsafe/tar.scm 231 */
											obj_t BgL_arg1359z00_1351;

											BgL_arg1359z00_1351 =
												(((BgL_tarzd2headerzd2_bglt) COBJECT(
														((BgL_tarzd2headerzd2_bglt) BgL_hz00_15)))->
												BgL_namez00);
											BGl_errorz00zz__errorz00(BGl_symbol2143z00zz__tarz00,
												BGl_string2145z00zz__tarz00, BgL_arg1359z00_1351);
										}
									else
										{	/* Unsafe/tar.scm 234 */
											long BgL_arg1360z00_1352;

											BgL_arg1360z00_1352 =
												(BGl_tarzd2roundzd2upzd2tozd2recordzd2siza7ez75zz__tarz00
												(BINT(BgL_nz00_1346)) - BgL_nz00_1346);
											BGl_readzd2charszd2zz__r4_input_6_10_2z00(BINT
												(BgL_arg1360z00_1352), BgL_pz00_16);
										}
									return BgL_sz00_1348;
								}
						}
					else
						{	/* Unsafe/tar.scm 224 */
							return
								BGl_bigloozd2typezd2errorz00zz__errorz00
								(BGl_symbol2143z00zz__tarz00, BGl_string2146z00zz__tarz00,
								BgL_hz00_15);
						}
				}
			else
				{	/* Unsafe/tar.scm 222 */
					return
						BGl_bigloozd2typezd2errorz00zz__errorz00
						(BGl_symbol2103z00zz__tarz00, BGl_string2105z00zz__tarz00,
						BgL_pz00_16);
				}
		}

	}



/* rm-rf */
	bool_t BGl_rmzd2rfzd2zz__tarz00(obj_t BgL_pathz00_19)
	{
		{	/* Unsafe/tar.scm 242 */
			if (fexists(BSTRING_TO_STRING(BgL_pathz00_19)))
				{	/* Unsafe/tar.scm 244 */
					bool_t BgL_test2332z00_3354;

					if (bgl_directoryp(BSTRING_TO_STRING(BgL_pathz00_19)))
						{	/* Unsafe/tar.scm 244 */
							bool_t BgL_test2334z00_3358;

							{	/* Unsafe/tar.scm 244 */
								obj_t BgL_arg1376z00_1373;

								BgL_arg1376z00_1373 =
									bgl_file_type(BSTRING_TO_STRING(BgL_pathz00_19));
								BgL_test2334z00_3358 =
									(BgL_arg1376z00_1373 == BGl_symbol2086z00zz__tarz00);
							}
							if (BgL_test2334z00_3358)
								{	/* Unsafe/tar.scm 244 */
									BgL_test2332z00_3354 = ((bool_t) 0);
								}
							else
								{	/* Unsafe/tar.scm 244 */
									BgL_test2332z00_3354 = ((bool_t) 1);
								}
						}
					else
						{	/* Unsafe/tar.scm 244 */
							BgL_test2332z00_3354 = ((bool_t) 0);
						}
					if (BgL_test2332z00_3354)
						{	/* Unsafe/tar.scm 245 */
							obj_t BgL_filesz00_1362;

							BgL_filesz00_1362 =
								bgl_directory_to_list(BSTRING_TO_STRING(BgL_pathz00_19));
							{
								obj_t BgL_l1129z00_1364;

								BgL_l1129z00_1364 = BgL_filesz00_1362;
							BgL_zc3z04anonymousza31372ze3z87_1365:
								if (PAIRP(BgL_l1129z00_1364))
									{	/* Unsafe/tar.scm 246 */
										{	/* Unsafe/tar.scm 246 */
											obj_t BgL_fz00_1367;

											BgL_fz00_1367 = CAR(BgL_l1129z00_1364);
											BGl_rmzd2rfzd2zz__tarz00
												(BGl_makezd2filezd2namez00zz__osz00(BgL_pathz00_19,
													BgL_fz00_1367));
										}
										{
											obj_t BgL_l1129z00_3369;

											BgL_l1129z00_3369 = CDR(BgL_l1129z00_1364);
											BgL_l1129z00_1364 = BgL_l1129z00_3369;
											goto BgL_zc3z04anonymousza31372ze3z87_1365;
										}
									}
								else
									{	/* Unsafe/tar.scm 246 */
										((bool_t) 1);
									}
							}
							{	/* Unsafe/tar.scm 247 */
								char *BgL_stringz00_2341;

								BgL_stringz00_2341 = BSTRING_TO_STRING(BgL_pathz00_19);
								if (rmdir(BgL_stringz00_2341))
									{	/* Unsafe/tar.scm 247 */
										return ((bool_t) 0);
									}
								else
									{	/* Unsafe/tar.scm 247 */
										return ((bool_t) 1);
									}
							}
						}
					else
						{	/* Unsafe/tar.scm 248 */
							char *BgL_stringz00_2343;

							BgL_stringz00_2343 = BSTRING_TO_STRING(BgL_pathz00_19);
							if (unlink(BgL_stringz00_2343))
								{	/* Unsafe/tar.scm 248 */
									return ((bool_t) 0);
								}
							else
								{	/* Unsafe/tar.scm 248 */
									return ((bool_t) 1);
								}
						}
				}
			else
				{	/* Unsafe/tar.scm 243 */
					return ((bool_t) 0);
				}
		}

	}



/* _untar */
	obj_t BGl__untarz00zz__tarz00(obj_t BgL_env1167z00_25,
		obj_t BgL_opt1166z00_24)
	{
		{	/* Unsafe/tar.scm 253 */
			{	/* Unsafe/tar.scm 253 */
				obj_t BgL_g1175z00_1378;

				BgL_g1175z00_1378 = VECTOR_REF(BgL_opt1166z00_24, ((long) 0));
				{	/* Unsafe/tar.scm 253 */
					obj_t BgL_directoryz00_1379;

					BgL_directoryz00_1379 = BGl_pwdz00zz__osz00();
					{	/* Unsafe/tar.scm 253 */
						obj_t BgL_filez00_1380;

						BgL_filez00_1380 = BFALSE;
						{	/* Unsafe/tar.scm 253 */
							obj_t BgL_filesz00_1381;

							BgL_filesz00_1381 = BNIL;
							{	/* Unsafe/tar.scm 253 */

								{
									long BgL_iz00_1382;

									BgL_iz00_1382 = ((long) 1);
								BgL_check1170z00_1383:
									if ((BgL_iz00_1382 == VECTOR_LENGTH(BgL_opt1166z00_24)))
										{	/* Unsafe/tar.scm 253 */
											BNIL;
										}
									else
										{	/* Unsafe/tar.scm 253 */
											bool_t BgL_test2339z00_3382;

											{	/* Unsafe/tar.scm 253 */
												obj_t BgL_arg1382z00_1389;

												BgL_arg1382z00_1389 =
													VECTOR_REF(BgL_opt1166z00_24, BgL_iz00_1382);
												BgL_test2339z00_3382 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1382z00_1389, BGl_list2147z00zz__tarz00));
											}
											if (BgL_test2339z00_3382)
												{
													long BgL_iz00_3386;

													BgL_iz00_3386 = (BgL_iz00_1382 + ((long) 2));
													BgL_iz00_1382 = BgL_iz00_3386;
													goto BgL_check1170z00_1383;
												}
											else
												{	/* Unsafe/tar.scm 253 */
													obj_t BgL_arg1381z00_1388;

													BgL_arg1381z00_1388 =
														VECTOR_REF(BgL_opt1166z00_24, BgL_iz00_1382);
													BGl_errorz00zz__errorz00(BGl_symbol2154z00zz__tarz00,
														BGl_string2156z00zz__tarz00, BgL_arg1381z00_1388);
												}
										}
								}
								{	/* Unsafe/tar.scm 253 */
									obj_t BgL_index1172z00_1390;

									{
										long BgL_iz00_2368;

										BgL_iz00_2368 = ((long) 1);
									BgL_search1169z00_2367:
										if ((BgL_iz00_2368 == VECTOR_LENGTH(BgL_opt1166z00_24)))
											{	/* Unsafe/tar.scm 253 */
												BgL_index1172z00_1390 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/tar.scm 253 */
												if (
													(BgL_iz00_2368 ==
														(VECTOR_LENGTH(BgL_opt1166z00_24) - ((long) 1))))
													{	/* Unsafe/tar.scm 253 */
														BgL_index1172z00_1390 =
															BGl_errorz00zz__errorz00
															(BGl_symbol2154z00zz__tarz00,
															BGl_string2157z00zz__tarz00,
															BINT(VECTOR_LENGTH(BgL_opt1166z00_24)));
													}
												else
													{	/* Unsafe/tar.scm 253 */
														obj_t BgL_vz00_2381;

														BgL_vz00_2381 =
															VECTOR_REF(BgL_opt1166z00_24, BgL_iz00_2368);
														if ((BgL_vz00_2381 == BGl_keyword2148z00zz__tarz00))
															{	/* Unsafe/tar.scm 253 */
																BgL_index1172z00_1390 =
																	BINT((BgL_iz00_2368 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_3406;

																BgL_iz00_3406 = (BgL_iz00_2368 + ((long) 2));
																BgL_iz00_2368 = BgL_iz00_3406;
																goto BgL_search1169z00_2367;
															}
													}
											}
									}
									{	/* Unsafe/tar.scm 253 */
										bool_t BgL_test2343z00_3408;

										{	/* Unsafe/tar.scm 253 */
											long BgL_n1z00_2388;

											{	/* Unsafe/tar.scm 253 */
												obj_t BgL_tmpz00_3409;

												if (INTEGERP(BgL_index1172z00_1390))
													{	/* Unsafe/tar.scm 253 */
														BgL_tmpz00_3409 = BgL_index1172z00_1390;
													}
												else
													{
														obj_t BgL_auxz00_3412;

														BgL_auxz00_3412 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2158z00zz__tarz00, BINT(((long) 9207)),
															BGl_string2159z00zz__tarz00,
															BGl_string2160z00zz__tarz00,
															BgL_index1172z00_1390);
														FAILURE(BgL_auxz00_3412, BFALSE, BFALSE);
													}
												BgL_n1z00_2388 = (long) CINT(BgL_tmpz00_3409);
											}
											BgL_test2343z00_3408 = (BgL_n1z00_2388 >= ((long) 0));
										}
										if (BgL_test2343z00_3408)
											{
												long BgL_auxz00_3418;

												{	/* Unsafe/tar.scm 253 */
													obj_t BgL_tmpz00_3419;

													if (INTEGERP(BgL_index1172z00_1390))
														{	/* Unsafe/tar.scm 253 */
															BgL_tmpz00_3419 = BgL_index1172z00_1390;
														}
													else
														{
															obj_t BgL_auxz00_3422;

															BgL_auxz00_3422 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2158z00zz__tarz00,
																BINT(((long) 9207)),
																BGl_string2159z00zz__tarz00,
																BGl_string2160z00zz__tarz00,
																BgL_index1172z00_1390);
															FAILURE(BgL_auxz00_3422, BFALSE, BFALSE);
														}
													BgL_auxz00_3418 = (long) CINT(BgL_tmpz00_3419);
												}
												BgL_directoryz00_1379 =
													VECTOR_REF(BgL_opt1166z00_24, BgL_auxz00_3418);
											}
										else
											{	/* Unsafe/tar.scm 253 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/tar.scm 253 */
									obj_t BgL_index1173z00_1392;

									{
										long BgL_iz00_2391;

										BgL_iz00_2391 = ((long) 1);
									BgL_search1169z00_2390:
										if ((BgL_iz00_2391 == VECTOR_LENGTH(BgL_opt1166z00_24)))
											{	/* Unsafe/tar.scm 253 */
												BgL_index1173z00_1392 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/tar.scm 253 */
												if (
													(BgL_iz00_2391 ==
														(VECTOR_LENGTH(BgL_opt1166z00_24) - ((long) 1))))
													{	/* Unsafe/tar.scm 253 */
														BgL_index1173z00_1392 =
															BGl_errorz00zz__errorz00
															(BGl_symbol2154z00zz__tarz00,
															BGl_string2157z00zz__tarz00,
															BINT(VECTOR_LENGTH(BgL_opt1166z00_24)));
													}
												else
													{	/* Unsafe/tar.scm 253 */
														obj_t BgL_vz00_2404;

														BgL_vz00_2404 =
															VECTOR_REF(BgL_opt1166z00_24, BgL_iz00_2391);
														if ((BgL_vz00_2404 == BGl_keyword2150z00zz__tarz00))
															{	/* Unsafe/tar.scm 253 */
																BgL_index1173z00_1392 =
																	BINT((BgL_iz00_2391 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_3444;

																BgL_iz00_3444 = (BgL_iz00_2391 + ((long) 2));
																BgL_iz00_2391 = BgL_iz00_3444;
																goto BgL_search1169z00_2390;
															}
													}
											}
									}
									{	/* Unsafe/tar.scm 253 */
										bool_t BgL_test2349z00_3446;

										{	/* Unsafe/tar.scm 253 */
											long BgL_n1z00_2411;

											{	/* Unsafe/tar.scm 253 */
												obj_t BgL_tmpz00_3447;

												if (INTEGERP(BgL_index1173z00_1392))
													{	/* Unsafe/tar.scm 253 */
														BgL_tmpz00_3447 = BgL_index1173z00_1392;
													}
												else
													{
														obj_t BgL_auxz00_3450;

														BgL_auxz00_3450 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2158z00zz__tarz00, BINT(((long) 9207)),
															BGl_string2159z00zz__tarz00,
															BGl_string2160z00zz__tarz00,
															BgL_index1173z00_1392);
														FAILURE(BgL_auxz00_3450, BFALSE, BFALSE);
													}
												BgL_n1z00_2411 = (long) CINT(BgL_tmpz00_3447);
											}
											BgL_test2349z00_3446 = (BgL_n1z00_2411 >= ((long) 0));
										}
										if (BgL_test2349z00_3446)
											{
												long BgL_auxz00_3456;

												{	/* Unsafe/tar.scm 253 */
													obj_t BgL_tmpz00_3457;

													if (INTEGERP(BgL_index1173z00_1392))
														{	/* Unsafe/tar.scm 253 */
															BgL_tmpz00_3457 = BgL_index1173z00_1392;
														}
													else
														{
															obj_t BgL_auxz00_3460;

															BgL_auxz00_3460 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2158z00zz__tarz00,
																BINT(((long) 9207)),
																BGl_string2159z00zz__tarz00,
																BGl_string2160z00zz__tarz00,
																BgL_index1173z00_1392);
															FAILURE(BgL_auxz00_3460, BFALSE, BFALSE);
														}
													BgL_auxz00_3456 = (long) CINT(BgL_tmpz00_3457);
												}
												BgL_filez00_1380 =
													VECTOR_REF(BgL_opt1166z00_24, BgL_auxz00_3456);
											}
										else
											{	/* Unsafe/tar.scm 253 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/tar.scm 253 */
									obj_t BgL_index1174z00_1394;

									{
										long BgL_iz00_2414;

										BgL_iz00_2414 = ((long) 1);
									BgL_search1169z00_2413:
										if ((BgL_iz00_2414 == VECTOR_LENGTH(BgL_opt1166z00_24)))
											{	/* Unsafe/tar.scm 253 */
												BgL_index1174z00_1394 = BINT(((long) -1));
											}
										else
											{	/* Unsafe/tar.scm 253 */
												if (
													(BgL_iz00_2414 ==
														(VECTOR_LENGTH(BgL_opt1166z00_24) - ((long) 1))))
													{	/* Unsafe/tar.scm 253 */
														BgL_index1174z00_1394 =
															BGl_errorz00zz__errorz00
															(BGl_symbol2154z00zz__tarz00,
															BGl_string2157z00zz__tarz00,
															BINT(VECTOR_LENGTH(BgL_opt1166z00_24)));
													}
												else
													{	/* Unsafe/tar.scm 253 */
														obj_t BgL_vz00_2427;

														BgL_vz00_2427 =
															VECTOR_REF(BgL_opt1166z00_24, BgL_iz00_2414);
														if ((BgL_vz00_2427 == BGl_keyword2152z00zz__tarz00))
															{	/* Unsafe/tar.scm 253 */
																BgL_index1174z00_1394 =
																	BINT((BgL_iz00_2414 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_3482;

																BgL_iz00_3482 = (BgL_iz00_2414 + ((long) 2));
																BgL_iz00_2414 = BgL_iz00_3482;
																goto BgL_search1169z00_2413;
															}
													}
											}
									}
									{	/* Unsafe/tar.scm 253 */
										bool_t BgL_test2355z00_3484;

										{	/* Unsafe/tar.scm 253 */
											long BgL_n1z00_2434;

											{	/* Unsafe/tar.scm 253 */
												obj_t BgL_tmpz00_3485;

												if (INTEGERP(BgL_index1174z00_1394))
													{	/* Unsafe/tar.scm 253 */
														BgL_tmpz00_3485 = BgL_index1174z00_1394;
													}
												else
													{
														obj_t BgL_auxz00_3488;

														BgL_auxz00_3488 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2158z00zz__tarz00, BINT(((long) 9207)),
															BGl_string2159z00zz__tarz00,
															BGl_string2160z00zz__tarz00,
															BgL_index1174z00_1394);
														FAILURE(BgL_auxz00_3488, BFALSE, BFALSE);
													}
												BgL_n1z00_2434 = (long) CINT(BgL_tmpz00_3485);
											}
											BgL_test2355z00_3484 = (BgL_n1z00_2434 >= ((long) 0));
										}
										if (BgL_test2355z00_3484)
											{
												long BgL_auxz00_3494;

												{	/* Unsafe/tar.scm 253 */
													obj_t BgL_tmpz00_3495;

													if (INTEGERP(BgL_index1174z00_1394))
														{	/* Unsafe/tar.scm 253 */
															BgL_tmpz00_3495 = BgL_index1174z00_1394;
														}
													else
														{
															obj_t BgL_auxz00_3498;

															BgL_auxz00_3498 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2158z00zz__tarz00,
																BINT(((long) 9207)),
																BGl_string2159z00zz__tarz00,
																BGl_string2160z00zz__tarz00,
																BgL_index1174z00_1394);
															FAILURE(BgL_auxz00_3498, BFALSE, BFALSE);
														}
													BgL_auxz00_3494 = (long) CINT(BgL_tmpz00_3495);
												}
												BgL_filesz00_1381 =
													VECTOR_REF(BgL_opt1166z00_24, BgL_auxz00_3494);
											}
										else
											{	/* Unsafe/tar.scm 253 */
												BFALSE;
											}
									}
								}
								{	/* Unsafe/tar.scm 253 */
									obj_t BgL_arg1386z00_1396;

									BgL_arg1386z00_1396 =
										VECTOR_REF(BgL_opt1166z00_24, ((long) 0));
									{	/* Unsafe/tar.scm 253 */
										obj_t BgL_directoryz00_1397;

										BgL_directoryz00_1397 = BgL_directoryz00_1379;
										{	/* Unsafe/tar.scm 253 */
											obj_t BgL_filez00_1398;

											BgL_filez00_1398 = BgL_filez00_1380;
											return
												BGl_untarz00zz__tarz00(BgL_arg1386z00_1396,
												BgL_directoryz00_1397, BgL_filez00_1398,
												BgL_filesz00_1381);
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



/* untar */
	BGL_EXPORTED_DEF obj_t BGl_untarz00zz__tarz00(obj_t BgL_ipz00_20,
		obj_t BgL_directoryz00_21, obj_t BgL_filez00_22, obj_t BgL_filesz00_23)
	{
		{	/* Unsafe/tar.scm 253 */
			if (INPUT_PORTP(BgL_ipz00_20))
				{	/* Unsafe/tar.scm 255 */
					if (STRINGP(BgL_filez00_22))
						{	/* Unsafe/tar.scm 258 */
							obj_t BgL_arg1396z00_1410;

							{	/* Unsafe/tar.scm 258 */
								obj_t BgL_list1397z00_1411;

								BgL_list1397z00_1411 = MAKE_YOUNG_PAIR(BgL_filez00_22, BNIL);
								BgL_arg1396z00_1410 = BgL_list1397z00_1411;
							}
							return
								BGl_untarzd2fileszd2zz__tarz00(BgL_ipz00_20,
								BgL_arg1396z00_1410);
						}
					else
						{	/* Unsafe/tar.scm 259 */
							bool_t BgL_test2360z00_3512;

							if (PAIRP(BgL_filesz00_23))
								{	/* Unsafe/tar.scm 259 */
									if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
										(BgL_filesz00_23))
										{
											obj_t BgL_l1132z00_1429;

											BgL_l1132z00_1429 = BgL_filesz00_23;
										BgL_zc3z04anonymousza31408ze3z87_1430:
											if (NULLP(BgL_l1132z00_1429))
												{	/* Unsafe/tar.scm 259 */
													BgL_test2360z00_3512 = ((bool_t) 1);
												}
											else
												{	/* Unsafe/tar.scm 259 */
													bool_t BgL_test2364z00_3519;

													{	/* Unsafe/tar.scm 259 */
														obj_t BgL_tmpz00_3520;

														BgL_tmpz00_3520 = CAR(((obj_t) BgL_l1132z00_1429));
														BgL_test2364z00_3519 = STRINGP(BgL_tmpz00_3520);
													}
													if (BgL_test2364z00_3519)
														{
															obj_t BgL_l1132z00_3524;

															BgL_l1132z00_3524 =
																CDR(((obj_t) BgL_l1132z00_1429));
															BgL_l1132z00_1429 = BgL_l1132z00_3524;
															goto BgL_zc3z04anonymousza31408ze3z87_1430;
														}
													else
														{	/* Unsafe/tar.scm 259 */
															BgL_test2360z00_3512 = ((bool_t) 0);
														}
												}
										}
									else
										{	/* Unsafe/tar.scm 259 */
											BgL_test2360z00_3512 = ((bool_t) 0);
										}
								}
							else
								{	/* Unsafe/tar.scm 259 */
									BgL_test2360z00_3512 = ((bool_t) 0);
								}
							if (BgL_test2360z00_3512)
								{	/* Unsafe/tar.scm 259 */
									return
										BGl_untarzd2fileszd2zz__tarz00(BgL_ipz00_20,
										BgL_filesz00_23);
								}
							else
								{	/* Unsafe/tar.scm 262 */
									obj_t BgL_arg1406z00_1424;

									if (STRINGP(BgL_directoryz00_21))
										{	/* Unsafe/tar.scm 262 */
											BgL_arg1406z00_1424 = BgL_directoryz00_21;
										}
									else
										{	/* Unsafe/tar.scm 262 */
											BgL_arg1406z00_1424 = BGl_pwdz00zz__osz00();
										}
									return
										BGl_untarzd2directoryzd2zz__tarz00(BgL_ipz00_20,
										BgL_arg1406z00_1424);
								}
						}
				}
			else
				{	/* Unsafe/tar.scm 255 */
					return
						BGl_bigloozd2typezd2errorz00zz__errorz00
						(BGl_symbol2154z00zz__tarz00, BGl_string2105z00zz__tarz00,
						BgL_ipz00_20);
				}
		}

	}



/* untar-directory */
	obj_t BGl_untarzd2directoryzd2zz__tarz00(obj_t BgL_ipz00_26,
		obj_t BgL_basez00_27)
	{
		{	/* Unsafe/tar.scm 267 */
			if (bgl_directoryp(BSTRING_TO_STRING(BgL_basez00_27)))
				{	/* Unsafe/tar.scm 268 */
					((bool_t) 0);
				}
			else
				{	/* Unsafe/tar.scm 268 */
					BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(BgL_basez00_27);
				}
			{
				obj_t BgL_lstz00_1440;

				BgL_lstz00_1440 = BNIL;
			BgL_zc3z04anonymousza31412ze3z87_1441:
				{	/* Unsafe/tar.scm 271 */
					obj_t BgL_hz00_1442;

					BgL_hz00_1442 = BGl_tarzd2readzd2headerz00zz__tarz00(BgL_ipz00_26);
					if (CBOOL(BgL_hz00_1442))
						{	/* Unsafe/tar.scm 275 */
							obj_t BgL_casezd2valuezd2_1444;

							BgL_casezd2valuezd2_1444 =
								(((BgL_tarzd2headerzd2_bglt) COBJECT(
										((BgL_tarzd2headerzd2_bglt) BgL_hz00_1442)))->BgL_typez00);
							if ((BgL_casezd2valuezd2_1444 == BGl_symbol2094z00zz__tarz00))
								{	/* Unsafe/tar.scm 277 */
									obj_t BgL_pathz00_1446;

									{	/* Unsafe/tar.scm 277 */
										obj_t BgL_arg1420z00_1455;

										BgL_arg1420z00_1455 =
											(((BgL_tarzd2headerzd2_bglt) COBJECT(
													((BgL_tarzd2headerzd2_bglt) BgL_hz00_1442)))->
											BgL_namez00);
										BgL_pathz00_1446 =
											BGl_makezd2filezd2namez00zz__osz00(BgL_basez00_27,
											BgL_arg1420z00_1455);
									}
									BGl_rmzd2rfzd2zz__tarz00(BgL_pathz00_1446);
									if (BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00
										(BgL_pathz00_1446))
										{	/* Unsafe/tar.scm 280 */
											obj_t BgL_arg1415z00_1448;

											BgL_arg1415z00_1448 =
												MAKE_YOUNG_PAIR(BgL_pathz00_1446, BgL_lstz00_1440);
											{
												obj_t BgL_lstz00_3551;

												BgL_lstz00_3551 = BgL_arg1415z00_1448;
												BgL_lstz00_1440 = BgL_lstz00_3551;
												goto BgL_zc3z04anonymousza31412ze3z87_1441;
											}
										}
									else
										{	/* Unsafe/tar.scm 282 */
											BgL_z62iozd2errorzb0_bglt BgL_arg1416z00_1449;

											{	/* Unsafe/tar.scm 282 */
												BgL_z62iozd2errorzb0_bglt BgL_new1072z00_1450;

												{	/* Unsafe/tar.scm 282 */
													BgL_z62iozd2errorzb0_bglt BgL_new1071z00_1453;

													BgL_new1071z00_1453 =
														((BgL_z62iozd2errorzb0_bglt)
														BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_z62iozd2errorzb0_bgl))));
													{	/* Unsafe/tar.scm 282 */
														long BgL_arg1419z00_1454;

														{	/* Unsafe/tar.scm 282 */
															long BgL_res1989z00_2449;

															BgL_res1989z00_2449 =
																BGL_CLASS_INDEX
																(BGl_z62iozd2errorzb0zz__objectz00);
															BgL_arg1419z00_1454 = BgL_res1989z00_2449;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1071z00_1453),
															BgL_arg1419z00_1454);
													}
													BgL_new1072z00_1450 = BgL_new1071z00_1453;
												}
												((((BgL_z62exceptionz62_bglt) COBJECT(
																((BgL_z62exceptionz62_bglt)
																	BgL_new1072z00_1450)))->BgL_fnamez00) =
													((obj_t) BFALSE), BUNSPEC);
												((((BgL_z62exceptionz62_bglt)
															COBJECT(((BgL_z62exceptionz62_bglt)
																	BgL_new1072z00_1450)))->BgL_locationz00) =
													((obj_t) BFALSE), BUNSPEC);
												{
													obj_t BgL_auxz00_3560;

													{	/* Unsafe/tar.scm 282 */
														obj_t BgL_arg1417z00_1451;

														{	/* Unsafe/tar.scm 282 */
															obj_t BgL_arg1418z00_1452;

															{	/* Unsafe/tar.scm 282 */
																obj_t BgL_res1990z00_2453;

																{	/* Unsafe/tar.scm 282 */
																	obj_t BgL_classz00_2452;

																	BgL_classz00_2452 =
																		BGl_z62iozd2errorzb0zz__objectz00;
																	BgL_res1990z00_2453 =
																		BGL_CLASS_ALL_FIELDS(BgL_classz00_2452);
																}
																BgL_arg1418z00_1452 = BgL_res1990z00_2453;
															}
															BgL_arg1417z00_1451 =
																VECTOR_REF(BgL_arg1418z00_1452, ((long) 2));
														}
														BgL_auxz00_3560 =
															BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
															(BgL_arg1417z00_1451);
													}
													((((BgL_z62exceptionz62_bglt) COBJECT(
																	((BgL_z62exceptionz62_bglt)
																		BgL_new1072z00_1450)))->BgL_stackz00) =
														((obj_t) BgL_auxz00_3560), BUNSPEC);
												}
												((((BgL_z62errorz62_bglt) COBJECT(
																((BgL_z62errorz62_bglt) BgL_new1072z00_1450)))->
														BgL_procz00) =
													((obj_t) BGl_symbol2154z00zz__tarz00), BUNSPEC);
												((((BgL_z62errorz62_bglt)
															COBJECT(((BgL_z62errorz62_bglt)
																	BgL_new1072z00_1450)))->BgL_msgz00) =
													((obj_t) BGl_string2161z00zz__tarz00), BUNSPEC);
												((((BgL_z62errorz62_bglt)
															COBJECT(((BgL_z62errorz62_bglt)
																	BgL_new1072z00_1450)))->BgL_objz00) =
													((obj_t) BgL_pathz00_1446), BUNSPEC);
												BgL_arg1416z00_1449 = BgL_new1072z00_1450;
											}
											return
												BGl_raisez00zz__errorz00(((obj_t) BgL_arg1416z00_1449));
										}
								}
							else
								{	/* Unsafe/tar.scm 275 */
									if ((BgL_casezd2valuezd2_1444 == BGl_symbol2084z00zz__tarz00))
										{	/* Unsafe/tar.scm 287 */
											obj_t BgL_pathz00_1457;

											{	/* Unsafe/tar.scm 287 */
												obj_t BgL_arg1431z00_1471;

												BgL_arg1431z00_1471 =
													(((BgL_tarzd2headerzd2_bglt) COBJECT(
															((BgL_tarzd2headerzd2_bglt) BgL_hz00_1442)))->
													BgL_namez00);
												BgL_pathz00_1457 =
													BGl_makezd2filezd2namez00zz__osz00(BgL_basez00_27,
													BgL_arg1431z00_1471);
											}
											{	/* Unsafe/tar.scm 287 */
												obj_t BgL_dirz00_1458;

												BgL_dirz00_1458 =
													BGl_dirnamez00zz__osz00(BgL_pathz00_1457);
												{	/* Unsafe/tar.scm 288 */

													{	/* Unsafe/tar.scm 289 */
														bool_t BgL_test2371z00_3580;

														if (fexists(BSTRING_TO_STRING(BgL_dirz00_1458)))
															{	/* Unsafe/tar.scm 289 */
																if (bgl_directoryp(BSTRING_TO_STRING
																		(BgL_dirz00_1458)))
																	{	/* Unsafe/tar.scm 289 */
																		BgL_test2371z00_3580 = ((bool_t) 0);
																	}
																else
																	{	/* Unsafe/tar.scm 289 */
																		BgL_test2371z00_3580 = ((bool_t) 1);
																	}
															}
														else
															{	/* Unsafe/tar.scm 289 */
																BgL_test2371z00_3580 = ((bool_t) 0);
															}
														if (BgL_test2371z00_3580)
															{	/* Unsafe/tar.scm 290 */
																char *BgL_stringz00_2461;

																BgL_stringz00_2461 =
																	BSTRING_TO_STRING(BgL_dirz00_1458);
																if (unlink(BgL_stringz00_2461))
																	{	/* Unsafe/tar.scm 290 */
																		((bool_t) 0);
																	}
																else
																	{	/* Unsafe/tar.scm 290 */
																		((bool_t) 1);
																	}
															}
														else
															{	/* Unsafe/tar.scm 289 */
																((bool_t) 0);
															}
													}
													if (fexists(BSTRING_TO_STRING(BgL_dirz00_1458)))
														{	/* Unsafe/tar.scm 291 */
															BFALSE;
														}
													else
														{	/* Unsafe/tar.scm 291 */
															BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00
																(BgL_dirz00_1458);
															BgL_lstz00_1440 =
																MAKE_YOUNG_PAIR(BgL_dirz00_1458,
																BgL_lstz00_1440);
														}
													{	/* Unsafe/tar.scm 296 */
														obj_t BgL_zc3z04anonymousza31427ze3z87_2824;

														BgL_zc3z04anonymousza31427ze3z87_2824 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31427ze3ze5zz__tarz00,
															(int) (((long) 0)), (int) (((long) 2)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31427ze3z87_2824,
															(int) (((long) 0)), BgL_hz00_1442);
														PROCEDURE_SET(BgL_zc3z04anonymousza31427ze3z87_2824,
															(int) (((long) 1)), BgL_ipz00_26);
														BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
															(BgL_pathz00_1457,
															BgL_zc3z04anonymousza31427ze3z87_2824);
													}
													{	/* Unsafe/tar.scm 297 */
														obj_t BgL_arg1430z00_1470;

														BgL_arg1430z00_1470 =
															MAKE_YOUNG_PAIR(BgL_pathz00_1457,
															BgL_lstz00_1440);
														{
															obj_t BgL_lstz00_3604;

															BgL_lstz00_3604 = BgL_arg1430z00_1470;
															BgL_lstz00_1440 = BgL_lstz00_3604;
															goto BgL_zc3z04anonymousza31412ze3z87_1441;
														}
													}
												}
											}
										}
									else
										{	/* Unsafe/tar.scm 275 */
											if (
												(BgL_casezd2valuezd2_1444 ==
													BGl_symbol2088z00zz__tarz00))
												{	/* Unsafe/tar.scm 300 */
													obj_t BgL_pathz00_1474;

													{	/* Unsafe/tar.scm 300 */
														obj_t BgL_arg1436z00_1478;

														BgL_arg1436z00_1478 =
															(((BgL_tarzd2headerzd2_bglt) COBJECT(
																	((BgL_tarzd2headerzd2_bglt) BgL_hz00_1442)))->
															BgL_namez00);
														BgL_pathz00_1474 =
															BGl_makezd2filezd2namez00zz__osz00(BgL_basez00_27,
															BgL_arg1436z00_1478);
													}
													if (fexists(BSTRING_TO_STRING(BgL_pathz00_1474)))
														{	/* Unsafe/tar.scm 302 */
															char *BgL_stringz00_2473;

															BgL_stringz00_2473 =
																BSTRING_TO_STRING(BgL_pathz00_1474);
															if (unlink(BgL_stringz00_2473))
																{	/* Unsafe/tar.scm 302 */
																	((bool_t) 0);
																}
															else
																{	/* Unsafe/tar.scm 302 */
																	((bool_t) 1);
																}
														}
													else
														{	/* Unsafe/tar.scm 301 */
															((bool_t) 0);
														}
													{	/* Unsafe/tar.scm 303 */
														obj_t BgL_arg1434z00_1476;

														BgL_arg1434z00_1476 =
															(((BgL_tarzd2headerzd2_bglt) COBJECT(
																	((BgL_tarzd2headerzd2_bglt) BgL_hz00_1442)))->
															BgL_linknamez00);
														bgl_symlink(BSTRING_TO_STRING(BgL_arg1434z00_1476),
															BSTRING_TO_STRING(BgL_pathz00_1474));
													}
													{	/* Unsafe/tar.scm 304 */
														obj_t BgL_arg1435z00_1477;

														BgL_arg1435z00_1477 =
															MAKE_YOUNG_PAIR(BgL_pathz00_1474,
															BgL_lstz00_1440);
														{
															obj_t BgL_lstz00_3622;

															BgL_lstz00_3622 = BgL_arg1435z00_1477;
															BgL_lstz00_1440 = BgL_lstz00_3622;
															goto BgL_zc3z04anonymousza31412ze3z87_1441;
														}
													}
												}
											else
												{	/* Unsafe/tar.scm 307 */
													BgL_z62iozd2parsezd2errorz62_bglt BgL_arg1437z00_1479;

													{	/* Unsafe/tar.scm 307 */
														BgL_z62iozd2parsezd2errorz62_bglt
															BgL_new1075z00_1480;
														{	/* Unsafe/tar.scm 307 */
															BgL_z62iozd2parsezd2errorz62_bglt
																BgL_new1074z00_1485;
															BgL_new1074z00_1485 =
																((BgL_z62iozd2parsezd2errorz62_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_z62iozd2parsezd2errorz62_bgl))));
															{	/* Unsafe/tar.scm 307 */
																long BgL_arg1442z00_1486;

																{	/* Unsafe/tar.scm 307 */
																	long BgL_res1998z00_2478;

																	BgL_res1998z00_2478 =
																		BGL_CLASS_INDEX
																		(BGl_z62iozd2parsezd2errorz62zz__objectz00);
																	BgL_arg1442z00_1486 = BgL_res1998z00_2478;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1074z00_1485),
																	BgL_arg1442z00_1486);
															}
															BgL_new1075z00_1480 = BgL_new1074z00_1485;
														}
														((((BgL_z62exceptionz62_bglt) COBJECT(
																		((BgL_z62exceptionz62_bglt)
																			BgL_new1075z00_1480)))->BgL_fnamez00) =
															((obj_t) BFALSE), BUNSPEC);
														((((BgL_z62exceptionz62_bglt)
																	COBJECT(((BgL_z62exceptionz62_bglt)
																			BgL_new1075z00_1480)))->BgL_locationz00) =
															((obj_t) BFALSE), BUNSPEC);
														{
															obj_t BgL_auxz00_3631;

															{	/* Unsafe/tar.scm 307 */
																obj_t BgL_arg1438z00_1481;

																{	/* Unsafe/tar.scm 307 */
																	obj_t BgL_arg1439z00_1482;

																	{	/* Unsafe/tar.scm 307 */
																		obj_t BgL_res1999z00_2482;

																		{	/* Unsafe/tar.scm 307 */
																			obj_t BgL_classz00_2481;

																			BgL_classz00_2481 =
																				BGl_z62iozd2parsezd2errorz62zz__objectz00;
																			BgL_res1999z00_2482 =
																				BGL_CLASS_ALL_FIELDS(BgL_classz00_2481);
																		}
																		BgL_arg1439z00_1482 = BgL_res1999z00_2482;
																	}
																	BgL_arg1438z00_1481 =
																		VECTOR_REF(BgL_arg1439z00_1482, ((long) 2));
																}
																BgL_auxz00_3631 =
																	BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																	(BgL_arg1438z00_1481);
															}
															((((BgL_z62exceptionz62_bglt) COBJECT(
																			((BgL_z62exceptionz62_bglt)
																				BgL_new1075z00_1480)))->BgL_stackz00) =
																((obj_t) BgL_auxz00_3631), BUNSPEC);
														}
														((((BgL_z62errorz62_bglt) COBJECT(
																		((BgL_z62errorz62_bglt)
																			BgL_new1075z00_1480)))->BgL_procz00) =
															((obj_t) BGl_symbol2154z00zz__tarz00), BUNSPEC);
														{
															obj_t BgL_auxz00_3639;

															{	/* Unsafe/tar.scm 309 */
																obj_t BgL_arg1440z00_1483;

																BgL_arg1440z00_1483 =
																	(((BgL_tarzd2headerzd2_bglt) COBJECT(
																			((BgL_tarzd2headerzd2_bglt)
																				BgL_hz00_1442)))->BgL_typez00);
																{	/* Unsafe/tar.scm 309 */
																	obj_t BgL_list1441z00_1484;

																	BgL_list1441z00_1484 =
																		MAKE_YOUNG_PAIR(BgL_arg1440z00_1483, BNIL);
																	BgL_auxz00_3639 =
																		BGl_formatz00zz__r4_output_6_10_3z00
																		(BGl_string2162z00zz__tarz00,
																		BgL_list1441z00_1484);
															}}
															((((BgL_z62errorz62_bglt) COBJECT(
																			((BgL_z62errorz62_bglt)
																				BgL_new1075z00_1480)))->BgL_msgz00) =
																((obj_t) BgL_auxz00_3639), BUNSPEC);
														}
														((((BgL_z62errorz62_bglt) COBJECT(
																		((BgL_z62errorz62_bglt)
																			BgL_new1075z00_1480)))->BgL_objz00) =
															((obj_t) (((BgL_tarzd2headerzd2_bglt)
																		COBJECT(((BgL_tarzd2headerzd2_bglt)
																				BgL_hz00_1442)))->BgL_namez00)),
															BUNSPEC);
														BgL_arg1437z00_1479 = BgL_new1075z00_1480;
													}
													return
														BGl_raisez00zz__errorz00(
														((obj_t) BgL_arg1437z00_1479));
												}
										}
								}
						}
					else
						{	/* Unsafe/tar.scm 272 */
							return bgl_reverse_bang(BgL_lstz00_1440);
						}
				}
			}
		}

	}



/* &<@anonymous:1427> */
	obj_t BGl_z62zc3z04anonymousza31427ze3ze5zz__tarz00(obj_t BgL_envz00_2825)
	{
		{	/* Unsafe/tar.scm 295 */
			{	/* Unsafe/tar.scm 296 */
				obj_t BgL_hz00_2826;
				obj_t BgL_ipz00_2827;

				BgL_hz00_2826 = PROCEDURE_REF(BgL_envz00_2825, (int) (((long) 0)));
				BgL_ipz00_2827 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2825, (int) (((long) 1))));
				{	/* Unsafe/tar.scm 296 */
					obj_t BgL_arg1428z00_2973;
					obj_t BgL_arg1429z00_2974;

					BgL_arg1428z00_2973 =
						BGl_tarzd2readzd2blockz00zz__tarz00(BgL_hz00_2826, BgL_ipz00_2827);
					{	/* Unsafe/tar.scm 296 */
						obj_t BgL_res1995z00_2975;

						{	/* Unsafe/tar.scm 296 */
							obj_t BgL_tmpz00_3659;

							BgL_tmpz00_3659 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1995z00_2975 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_3659);
						}
						BgL_arg1429z00_2974 = BgL_res1995z00_2975;
					}
					return bgl_display_obj(BgL_arg1428z00_2973, BgL_arg1429z00_2974);
				}
			}
		}

	}



/* untar-files */
	obj_t BGl_untarzd2fileszd2zz__tarz00(obj_t BgL_ipz00_28,
		obj_t BgL_filesz00_29)
	{
		{	/* Unsafe/tar.scm 315 */
			{

			BgL_zc3z04anonymousza31443ze3z87_1489:
				{	/* Unsafe/tar.scm 317 */
					obj_t BgL_hz00_1490;

					BgL_hz00_1490 = BGl_tarzd2readzd2headerz00zz__tarz00(BgL_ipz00_28);
					if (BGl_isazf3zf3zz__objectz00(BgL_hz00_1490,
							BGl_tarzd2headerzd2zz__tarz00))
						{	/* Unsafe/tar.scm 320 */
							obj_t BgL_casezd2valuezd2_1493;

							BgL_casezd2valuezd2_1493 =
								(((BgL_tarzd2headerzd2_bglt) COBJECT(
										((BgL_tarzd2headerzd2_bglt) BgL_hz00_1490)))->BgL_typez00);
							if ((BgL_casezd2valuezd2_1493 == BGl_symbol2094z00zz__tarz00))
								{	/* Unsafe/tar.scm 320 */
									goto BgL_zc3z04anonymousza31443ze3z87_1489;
								}
							else
								{	/* Unsafe/tar.scm 320 */
									if ((BgL_casezd2valuezd2_1493 == BGl_symbol2084z00zz__tarz00))
										{	/* Unsafe/tar.scm 324 */
											obj_t BgL_bz00_1496;
											obj_t BgL_nz00_1497;

											BgL_bz00_1496 =
												BGl_tarzd2readzd2blockz00zz__tarz00(BgL_hz00_1490,
												BgL_ipz00_28);
											BgL_nz00_1497 =
												(((BgL_tarzd2headerzd2_bglt)
													COBJECT(((BgL_tarzd2headerzd2_bglt) BgL_hz00_1490)))->
												BgL_namez00);
											if (CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
													(BgL_nz00_1497, BgL_filesz00_29)))
												{	/* Unsafe/tar.scm 326 */
													return BgL_bz00_1496;
												}
											else
												{	/* Unsafe/tar.scm 326 */
													goto BgL_zc3z04anonymousza31443ze3z87_1489;
												}
										}
									else
										{	/* Unsafe/tar.scm 320 */
											return BFALSE;
										}
								}
						}
					else
						{	/* Unsafe/tar.scm 318 */
							return BFALSE;
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__tarz00()
	{
		{	/* Unsafe/tar.scm 17 */
			{	/* Unsafe/tar.scm 55 */
				obj_t BgL_arg1452z00_1503;
				obj_t BgL_arg1453z00_1504;

				{	/* Unsafe/tar.scm 55 */
					obj_t BgL_v1135z00_1530;

					BgL_v1135z00_1530 = create_vector(((long) 14));
					VECTOR_SET(BgL_v1135z00_1530, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2107z00zz__tarz00, BGl_proc2164z00zz__tarz00,
							BGl_proc2163z00zz__tarz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_symbol2165z00zz__tarz00));
					VECTOR_SET(BgL_v1135z00_1530, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2109z00zz__tarz00, BGl_proc2168z00zz__tarz00,
							BGl_proc2167z00zz__tarz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_symbol2169z00zz__tarz00));
					VECTOR_SET(BgL_v1135z00_1530, ((long) 2),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2111z00zz__tarz00, BGl_proc2171z00zz__tarz00,
							BGl_proc2170z00zz__tarz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_symbol2169z00zz__tarz00));
					VECTOR_SET(BgL_v1135z00_1530, ((long) 3),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2113z00zz__tarz00, BGl_proc2173z00zz__tarz00,
							BGl_proc2172z00zz__tarz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_symbol2169z00zz__tarz00));
					VECTOR_SET(BgL_v1135z00_1530, ((long) 4),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2115z00zz__tarz00, BGl_proc2175z00zz__tarz00,
							BGl_proc2174z00zz__tarz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_symbol2176z00zz__tarz00));
					VECTOR_SET(BgL_v1135z00_1530, ((long) 5),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2117z00zz__tarz00, BGl_proc2179z00zz__tarz00,
							BGl_proc2178z00zz__tarz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_symbol2180z00zz__tarz00));
					VECTOR_SET(BgL_v1135z00_1530, ((long) 6),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2184z00zz__tarz00, BGl_proc2183z00zz__tarz00,
							BGl_proc2182z00zz__tarz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_symbol2169z00zz__tarz00));
					VECTOR_SET(BgL_v1135z00_1530, ((long) 7),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2188z00zz__tarz00, BGl_proc2187z00zz__tarz00,
							BGl_proc2186z00zz__tarz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_symbol2190z00zz__tarz00));
					VECTOR_SET(BgL_v1135z00_1530, ((long) 8),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2121z00zz__tarz00, BGl_proc2193z00zz__tarz00,
							BGl_proc2192z00zz__tarz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_symbol2165z00zz__tarz00));
					VECTOR_SET(BgL_v1135z00_1530, ((long) 9),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2123z00zz__tarz00, BGl_proc2195z00zz__tarz00,
							BGl_proc2194z00zz__tarz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_symbol2165z00zz__tarz00));
					VECTOR_SET(BgL_v1135z00_1530, ((long) 10),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2125z00zz__tarz00, BGl_proc2197z00zz__tarz00,
							BGl_proc2196z00zz__tarz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_symbol2165z00zz__tarz00));
					VECTOR_SET(BgL_v1135z00_1530, ((long) 11),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2127z00zz__tarz00, BGl_proc2199z00zz__tarz00,
							BGl_proc2198z00zz__tarz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_symbol2165z00zz__tarz00));
					VECTOR_SET(BgL_v1135z00_1530, ((long) 12),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2129z00zz__tarz00, BGl_proc2201z00zz__tarz00,
							BGl_proc2200z00zz__tarz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_symbol2169z00zz__tarz00));
					VECTOR_SET(BgL_v1135z00_1530, ((long) 13),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2131z00zz__tarz00, BGl_proc2203z00zz__tarz00,
							BGl_proc2202z00zz__tarz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_symbol2169z00zz__tarz00));
					BgL_arg1452z00_1503 = BgL_v1135z00_1530;
				}
				{	/* Unsafe/tar.scm 55 */
					obj_t BgL_v1136z00_1671;

					BgL_v1136z00_1671 = create_vector(((long) 0));
					BgL_arg1453z00_1504 = BgL_v1136z00_1671;
				}
				return (BGl_tarzd2headerzd2zz__tarz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol2207z00zz__tarz00,
						BGl_symbol2208z00zz__tarz00, BGl_objectz00zz__objectz00,
						((long) 38291), BGl_proc2206z00zz__tarz00,
						BGl_proc2205z00zz__tarz00, BFALSE, BGl_proc2204z00zz__tarz00,
						BFALSE, BgL_arg1452z00_1503, BgL_arg1453z00_1504), BUNSPEC);
		}}

	}



/* &<@anonymous:1458> */
	obj_t BGl_z62zc3z04anonymousza31458ze3ze5zz__tarz00(obj_t BgL_envz00_2859,
		obj_t BgL_new1055z00_2860)
	{
		{	/* Unsafe/tar.scm 55 */
			{
				BgL_tarzd2headerzd2_bglt BgL_auxz00_3709;

				((((BgL_tarzd2headerzd2_bglt) COBJECT(
								((BgL_tarzd2headerzd2_bglt) BgL_new1055z00_2860)))->
						BgL_namez00) = ((obj_t) BGl_string2106z00zz__tarz00), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) COBJECT(((BgL_tarzd2headerzd2_bglt)
									BgL_new1055z00_2860)))->BgL_modez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) COBJECT(((BgL_tarzd2headerzd2_bglt)
									BgL_new1055z00_2860)))->BgL_uidz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) COBJECT(((BgL_tarzd2headerzd2_bglt)
									BgL_new1055z00_2860)))->BgL_gidz00) =
					((long) ((long) 0)), BUNSPEC);
				{
					long BgL_auxz00_3718;

					{	/* Unsafe/tar.scm 55 */

						BgL_auxz00_3718 =
							BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00
							(BGl_string2210z00zz__tarz00, ((long) 10));
					}
					((((BgL_tarzd2headerzd2_bglt) COBJECT(
									((BgL_tarzd2headerzd2_bglt) BgL_new1055z00_2860)))->
							BgL_siza7eza7) = ((long) BgL_auxz00_3718), BUNSPEC);
				}
				{
					obj_t BgL_auxz00_3722;

					{	/* Unsafe/tar.scm 55 */
						obj_t BgL_res2004z00_2977;

						{	/* Unsafe/tar.scm 55 */
							BGL_LONGLONG_T BgL_arg1827z00_2978;

							BgL_arg1827z00_2978 = bgl_current_nanoseconds();
							BgL_res2004z00_2977 =
								bgl_nanoseconds_to_date(BgL_arg1827z00_2978);
						}
						BgL_auxz00_3722 = BgL_res2004z00_2977;
					}
					((((BgL_tarzd2headerzd2_bglt) COBJECT(
									((BgL_tarzd2headerzd2_bglt) BgL_new1055z00_2860)))->
							BgL_mtimez00) = ((obj_t) BgL_auxz00_3722), BUNSPEC);
				}
				((((BgL_tarzd2headerzd2_bglt) COBJECT(
								((BgL_tarzd2headerzd2_bglt) BgL_new1055z00_2860)))->
						BgL_checksumz00) = ((long) ((long) 0)), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) COBJECT(((BgL_tarzd2headerzd2_bglt)
									BgL_new1055z00_2860)))->BgL_typez00) =
					((obj_t) BGl_symbol2211z00zz__tarz00), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) COBJECT(((BgL_tarzd2headerzd2_bglt)
									BgL_new1055z00_2860)))->BgL_linknamez00) =
					((obj_t) BGl_string2106z00zz__tarz00), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) COBJECT(((BgL_tarzd2headerzd2_bglt)
									BgL_new1055z00_2860)))->BgL_magicz00) =
					((obj_t) BGl_string2106z00zz__tarz00), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) COBJECT(((BgL_tarzd2headerzd2_bglt)
									BgL_new1055z00_2860)))->BgL_unamez00) =
					((obj_t) BGl_string2106z00zz__tarz00), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) COBJECT(((BgL_tarzd2headerzd2_bglt)
									BgL_new1055z00_2860)))->BgL_gnamez00) =
					((obj_t) BGl_string2106z00zz__tarz00), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) COBJECT(((BgL_tarzd2headerzd2_bglt)
									BgL_new1055z00_2860)))->BgL_devmajorz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_tarzd2headerzd2_bglt) COBJECT(((BgL_tarzd2headerzd2_bglt)
									BgL_new1055z00_2860)))->BgL_devminorz00) =
					((long) ((long) 0)), BUNSPEC);
				BgL_auxz00_3709 = ((BgL_tarzd2headerzd2_bglt) BgL_new1055z00_2860);
				return ((obj_t) BgL_auxz00_3709);
			}
		}

	}



/* &lambda1456 */
	BgL_tarzd2headerzd2_bglt BGl_z62lambda1456z62zz__tarz00(obj_t BgL_envz00_2861)
	{
		{	/* Unsafe/tar.scm 55 */
			{	/* Unsafe/tar.scm 55 */
				BgL_tarzd2headerzd2_bglt BgL_new1054z00_2979;

				BgL_new1054z00_2979 =
					((BgL_tarzd2headerzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_tarzd2headerzd2_bgl))));
				{	/* Unsafe/tar.scm 55 */
					long BgL_arg1457z00_2980;

					{	/* Unsafe/tar.scm 55 */
						long BgL_res2003z00_2981;

						BgL_res2003z00_2981 =
							BGL_CLASS_INDEX(BGl_tarzd2headerzd2zz__tarz00);
						BgL_arg1457z00_2980 = BgL_res2003z00_2981;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1054z00_2979), BgL_arg1457z00_2980);
				}
				return BgL_new1054z00_2979;
			}
		}

	}



/* &lambda1454 */
	BgL_tarzd2headerzd2_bglt BGl_z62lambda1454z62zz__tarz00(obj_t BgL_envz00_2862,
		obj_t BgL_name1040z00_2863, obj_t BgL_mode1041z00_2864,
		obj_t BgL_uid1042z00_2865, obj_t BgL_gid1043z00_2866,
		obj_t BgL_siza7e1044za7_2867, obj_t BgL_mtime1045z00_2868,
		obj_t BgL_checksum1046z00_2869, obj_t BgL_type1047z00_2870,
		obj_t BgL_linkname1048z00_2871, obj_t BgL_magic1049z00_2872,
		obj_t BgL_uname1050z00_2873, obj_t BgL_gname1051z00_2874,
		obj_t BgL_devmajor1052z00_2875, obj_t BgL_devminor1053z00_2876)
	{
		{	/* Unsafe/tar.scm 55 */
			{	/* Unsafe/tar.scm 55 */
				long BgL_mode1041z00_2983;
				long BgL_uid1042z00_2984;
				long BgL_gid1043z00_2985;
				long BgL_siza7e1044za7_2986;
				long BgL_checksum1046z00_2988;
				long BgL_devmajor1052z00_2994;
				long BgL_devminor1053z00_2995;

				BgL_mode1041z00_2983 = (long) CINT(BgL_mode1041z00_2864);
				BgL_uid1042z00_2984 = (long) CINT(BgL_uid1042z00_2865);
				BgL_gid1043z00_2985 = (long) CINT(BgL_gid1043z00_2866);
				BgL_siza7e1044za7_2986 = BELONG_TO_LONG(BgL_siza7e1044za7_2867);
				BgL_checksum1046z00_2988 = (long) CINT(BgL_checksum1046z00_2869);
				BgL_devmajor1052z00_2994 = (long) CINT(BgL_devmajor1052z00_2875);
				BgL_devminor1053z00_2995 = (long) CINT(BgL_devminor1053z00_2876);
				{	/* Unsafe/tar.scm 55 */
					BgL_tarzd2headerzd2_bglt BgL_new1078z00_2996;

					{	/* Unsafe/tar.scm 55 */
						BgL_tarzd2headerzd2_bglt BgL_new1077z00_2997;

						BgL_new1077z00_2997 =
							((BgL_tarzd2headerzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_tarzd2headerzd2_bgl))));
						{	/* Unsafe/tar.scm 55 */
							long BgL_arg1455z00_2998;

							{	/* Unsafe/tar.scm 55 */
								long BgL_res2002z00_2999;

								BgL_res2002z00_2999 =
									BGL_CLASS_INDEX(BGl_tarzd2headerzd2zz__tarz00);
								BgL_arg1455z00_2998 = BgL_res2002z00_2999;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1077z00_2997),
								BgL_arg1455z00_2998);
						}
						BgL_new1078z00_2996 = BgL_new1077z00_2997;
					}
					((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1078z00_2996))->
							BgL_namez00) = ((obj_t) ((obj_t) BgL_name1040z00_2863)), BUNSPEC);
					((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1078z00_2996))->
							BgL_modez00) = ((long) BgL_mode1041z00_2983), BUNSPEC);
					((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1078z00_2996))->
							BgL_uidz00) = ((long) BgL_uid1042z00_2984), BUNSPEC);
					((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1078z00_2996))->
							BgL_gidz00) = ((long) BgL_gid1043z00_2985), BUNSPEC);
					((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1078z00_2996))->
							BgL_siza7eza7) = ((long) BgL_siza7e1044za7_2986), BUNSPEC);
					((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1078z00_2996))->
							BgL_mtimez00) =
						((obj_t) ((obj_t) BgL_mtime1045z00_2868)), BUNSPEC);
					((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1078z00_2996))->
							BgL_checksumz00) = ((long) BgL_checksum1046z00_2988), BUNSPEC);
					((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1078z00_2996))->
							BgL_typez00) = ((obj_t) ((obj_t) BgL_type1047z00_2870)), BUNSPEC);
					((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1078z00_2996))->
							BgL_linknamez00) =
						((obj_t) ((obj_t) BgL_linkname1048z00_2871)), BUNSPEC);
					((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1078z00_2996))->
							BgL_magicz00) =
						((obj_t) ((obj_t) BgL_magic1049z00_2872)), BUNSPEC);
					((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1078z00_2996))->
							BgL_unamez00) =
						((obj_t) ((obj_t) BgL_uname1050z00_2873)), BUNSPEC);
					((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1078z00_2996))->
							BgL_gnamez00) =
						((obj_t) ((obj_t) BgL_gname1051z00_2874)), BUNSPEC);
					((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1078z00_2996))->
							BgL_devmajorz00) = ((long) BgL_devmajor1052z00_2994), BUNSPEC);
					((((BgL_tarzd2headerzd2_bglt) COBJECT(BgL_new1078z00_2996))->
							BgL_devminorz00) = ((long) BgL_devminor1053z00_2995), BUNSPEC);
					return BgL_new1078z00_2996;
				}
			}
		}

	}



/* &lambda1538 */
	obj_t BGl_z62lambda1538z62zz__tarz00(obj_t BgL_envz00_2877,
		obj_t BgL_oz00_2878, obj_t BgL_vz00_2879)
	{
		{	/* Unsafe/tar.scm 55 */
			{	/* Unsafe/tar.scm 55 */
				long BgL_vz00_3001;

				BgL_vz00_3001 = (long) CINT(BgL_vz00_2879);
				return
					((((BgL_tarzd2headerzd2_bglt) COBJECT(
								((BgL_tarzd2headerzd2_bglt) BgL_oz00_2878)))->BgL_devminorz00) =
					((long) BgL_vz00_3001), BUNSPEC);
		}}

	}



/* &lambda1537 */
	obj_t BGl_z62lambda1537z62zz__tarz00(obj_t BgL_envz00_2880,
		obj_t BgL_oz00_2881)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				BINT(
				(((BgL_tarzd2headerzd2_bglt) COBJECT(
							((BgL_tarzd2headerzd2_bglt) BgL_oz00_2881)))->BgL_devminorz00));
		}

	}



/* &lambda1533 */
	obj_t BGl_z62lambda1533z62zz__tarz00(obj_t BgL_envz00_2882,
		obj_t BgL_oz00_2883, obj_t BgL_vz00_2884)
	{
		{	/* Unsafe/tar.scm 55 */
			{	/* Unsafe/tar.scm 55 */
				long BgL_vz00_3004;

				BgL_vz00_3004 = (long) CINT(BgL_vz00_2884);
				return
					((((BgL_tarzd2headerzd2_bglt) COBJECT(
								((BgL_tarzd2headerzd2_bglt) BgL_oz00_2883)))->BgL_devmajorz00) =
					((long) BgL_vz00_3004), BUNSPEC);
		}}

	}



/* &lambda1532 */
	obj_t BGl_z62lambda1532z62zz__tarz00(obj_t BgL_envz00_2885,
		obj_t BgL_oz00_2886)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				BINT(
				(((BgL_tarzd2headerzd2_bglt) COBJECT(
							((BgL_tarzd2headerzd2_bglt) BgL_oz00_2886)))->BgL_devmajorz00));
		}

	}



/* &lambda1527 */
	obj_t BGl_z62lambda1527z62zz__tarz00(obj_t BgL_envz00_2887,
		obj_t BgL_oz00_2888, obj_t BgL_vz00_2889)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				((((BgL_tarzd2headerzd2_bglt) COBJECT(
							((BgL_tarzd2headerzd2_bglt) BgL_oz00_2888)))->BgL_gnamez00) =
				((obj_t) ((obj_t) BgL_vz00_2889)), BUNSPEC);
		}

	}



/* &lambda1526 */
	obj_t BGl_z62lambda1526z62zz__tarz00(obj_t BgL_envz00_2890,
		obj_t BgL_oz00_2891)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				(((BgL_tarzd2headerzd2_bglt) COBJECT(
						((BgL_tarzd2headerzd2_bglt) BgL_oz00_2891)))->BgL_gnamez00);
		}

	}



/* &lambda1522 */
	obj_t BGl_z62lambda1522z62zz__tarz00(obj_t BgL_envz00_2892,
		obj_t BgL_oz00_2893, obj_t BgL_vz00_2894)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				((((BgL_tarzd2headerzd2_bglt) COBJECT(
							((BgL_tarzd2headerzd2_bglt) BgL_oz00_2893)))->BgL_unamez00) =
				((obj_t) ((obj_t) BgL_vz00_2894)), BUNSPEC);
		}

	}



/* &lambda1521 */
	obj_t BGl_z62lambda1521z62zz__tarz00(obj_t BgL_envz00_2895,
		obj_t BgL_oz00_2896)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				(((BgL_tarzd2headerzd2_bglt) COBJECT(
						((BgL_tarzd2headerzd2_bglt) BgL_oz00_2896)))->BgL_unamez00);
		}

	}



/* &lambda1517 */
	obj_t BGl_z62lambda1517z62zz__tarz00(obj_t BgL_envz00_2897,
		obj_t BgL_oz00_2898, obj_t BgL_vz00_2899)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				((((BgL_tarzd2headerzd2_bglt) COBJECT(
							((BgL_tarzd2headerzd2_bglt) BgL_oz00_2898)))->BgL_magicz00) =
				((obj_t) ((obj_t) BgL_vz00_2899)), BUNSPEC);
		}

	}



/* &lambda1516 */
	obj_t BGl_z62lambda1516z62zz__tarz00(obj_t BgL_envz00_2900,
		obj_t BgL_oz00_2901)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				(((BgL_tarzd2headerzd2_bglt) COBJECT(
						((BgL_tarzd2headerzd2_bglt) BgL_oz00_2901)))->BgL_magicz00);
		}

	}



/* &lambda1512 */
	obj_t BGl_z62lambda1512z62zz__tarz00(obj_t BgL_envz00_2902,
		obj_t BgL_oz00_2903, obj_t BgL_vz00_2904)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				((((BgL_tarzd2headerzd2_bglt) COBJECT(
							((BgL_tarzd2headerzd2_bglt) BgL_oz00_2903)))->BgL_linknamez00) =
				((obj_t) ((obj_t) BgL_vz00_2904)), BUNSPEC);
		}

	}



/* &lambda1511 */
	obj_t BGl_z62lambda1511z62zz__tarz00(obj_t BgL_envz00_2905,
		obj_t BgL_oz00_2906)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				(((BgL_tarzd2headerzd2_bglt) COBJECT(
						((BgL_tarzd2headerzd2_bglt) BgL_oz00_2906)))->BgL_linknamez00);
		}

	}



/* &lambda1507 */
	obj_t BGl_z62lambda1507z62zz__tarz00(obj_t BgL_envz00_2907,
		obj_t BgL_oz00_2908, obj_t BgL_vz00_2909)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				((((BgL_tarzd2headerzd2_bglt) COBJECT(
							((BgL_tarzd2headerzd2_bglt) BgL_oz00_2908)))->BgL_typez00) =
				((obj_t) ((obj_t) BgL_vz00_2909)), BUNSPEC);
		}

	}



/* &lambda1506 */
	obj_t BGl_z62lambda1506z62zz__tarz00(obj_t BgL_envz00_2910,
		obj_t BgL_oz00_2911)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				(((BgL_tarzd2headerzd2_bglt) COBJECT(
						((BgL_tarzd2headerzd2_bglt) BgL_oz00_2911)))->BgL_typez00);
		}

	}



/* &lambda1498 */
	obj_t BGl_z62lambda1498z62zz__tarz00(obj_t BgL_envz00_2912,
		obj_t BgL_oz00_2913, obj_t BgL_vz00_2914)
	{
		{	/* Unsafe/tar.scm 55 */
			{	/* Unsafe/tar.scm 55 */
				long BgL_vz00_3022;

				BgL_vz00_3022 = (long) CINT(BgL_vz00_2914);
				return
					((((BgL_tarzd2headerzd2_bglt) COBJECT(
								((BgL_tarzd2headerzd2_bglt) BgL_oz00_2913)))->BgL_checksumz00) =
					((long) BgL_vz00_3022), BUNSPEC);
		}}

	}



/* &lambda1497 */
	obj_t BGl_z62lambda1497z62zz__tarz00(obj_t BgL_envz00_2915,
		obj_t BgL_oz00_2916)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				BINT(
				(((BgL_tarzd2headerzd2_bglt) COBJECT(
							((BgL_tarzd2headerzd2_bglt) BgL_oz00_2916)))->BgL_checksumz00));
		}

	}



/* &lambda1493 */
	obj_t BGl_z62lambda1493z62zz__tarz00(obj_t BgL_envz00_2917,
		obj_t BgL_oz00_2918, obj_t BgL_vz00_2919)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				((((BgL_tarzd2headerzd2_bglt) COBJECT(
							((BgL_tarzd2headerzd2_bglt) BgL_oz00_2918)))->BgL_mtimez00) =
				((obj_t) ((obj_t) BgL_vz00_2919)), BUNSPEC);
		}

	}



/* &lambda1492 */
	obj_t BGl_z62lambda1492z62zz__tarz00(obj_t BgL_envz00_2920,
		obj_t BgL_oz00_2921)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				(((BgL_tarzd2headerzd2_bglt) COBJECT(
						((BgL_tarzd2headerzd2_bglt) BgL_oz00_2921)))->BgL_mtimez00);
		}

	}



/* &lambda1486 */
	obj_t BGl_z62lambda1486z62zz__tarz00(obj_t BgL_envz00_2922,
		obj_t BgL_oz00_2923, obj_t BgL_vz00_2924)
	{
		{	/* Unsafe/tar.scm 55 */
			{	/* Unsafe/tar.scm 55 */
				long BgL_vz00_3028;

				BgL_vz00_3028 = BELONG_TO_LONG(BgL_vz00_2924);
				return
					((((BgL_tarzd2headerzd2_bglt) COBJECT(
								((BgL_tarzd2headerzd2_bglt) BgL_oz00_2923)))->BgL_siza7eza7) =
					((long) BgL_vz00_3028), BUNSPEC);
		}}

	}



/* &lambda1485 */
	obj_t BGl_z62lambda1485z62zz__tarz00(obj_t BgL_envz00_2925,
		obj_t BgL_oz00_2926)
	{
		{	/* Unsafe/tar.scm 55 */
			{	/* Unsafe/tar.scm 55 */
				long BgL_tmpz00_3832;

				BgL_tmpz00_3832 =
					(((BgL_tarzd2headerzd2_bglt) COBJECT(
							((BgL_tarzd2headerzd2_bglt) BgL_oz00_2926)))->BgL_siza7eza7);
				return make_belong(BgL_tmpz00_3832);
			}
		}

	}



/* &lambda1479 */
	obj_t BGl_z62lambda1479z62zz__tarz00(obj_t BgL_envz00_2927,
		obj_t BgL_oz00_2928, obj_t BgL_vz00_2929)
	{
		{	/* Unsafe/tar.scm 55 */
			{	/* Unsafe/tar.scm 55 */
				long BgL_vz00_3031;

				BgL_vz00_3031 = (long) CINT(BgL_vz00_2929);
				return
					((((BgL_tarzd2headerzd2_bglt) COBJECT(
								((BgL_tarzd2headerzd2_bglt) BgL_oz00_2928)))->BgL_gidz00) =
					((long) BgL_vz00_3031), BUNSPEC);
		}}

	}



/* &lambda1478 */
	obj_t BGl_z62lambda1478z62zz__tarz00(obj_t BgL_envz00_2930,
		obj_t BgL_oz00_2931)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				BINT(
				(((BgL_tarzd2headerzd2_bglt) COBJECT(
							((BgL_tarzd2headerzd2_bglt) BgL_oz00_2931)))->BgL_gidz00));
		}

	}



/* &lambda1474 */
	obj_t BGl_z62lambda1474z62zz__tarz00(obj_t BgL_envz00_2932,
		obj_t BgL_oz00_2933, obj_t BgL_vz00_2934)
	{
		{	/* Unsafe/tar.scm 55 */
			{	/* Unsafe/tar.scm 55 */
				long BgL_vz00_3034;

				BgL_vz00_3034 = (long) CINT(BgL_vz00_2934);
				return
					((((BgL_tarzd2headerzd2_bglt) COBJECT(
								((BgL_tarzd2headerzd2_bglt) BgL_oz00_2933)))->BgL_uidz00) =
					((long) BgL_vz00_3034), BUNSPEC);
		}}

	}



/* &lambda1473 */
	obj_t BGl_z62lambda1473z62zz__tarz00(obj_t BgL_envz00_2935,
		obj_t BgL_oz00_2936)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				BINT(
				(((BgL_tarzd2headerzd2_bglt) COBJECT(
							((BgL_tarzd2headerzd2_bglt) BgL_oz00_2936)))->BgL_uidz00));
		}

	}



/* &lambda1469 */
	obj_t BGl_z62lambda1469z62zz__tarz00(obj_t BgL_envz00_2937,
		obj_t BgL_oz00_2938, obj_t BgL_vz00_2939)
	{
		{	/* Unsafe/tar.scm 55 */
			{	/* Unsafe/tar.scm 55 */
				long BgL_vz00_3037;

				BgL_vz00_3037 = (long) CINT(BgL_vz00_2939);
				return
					((((BgL_tarzd2headerzd2_bglt) COBJECT(
								((BgL_tarzd2headerzd2_bglt) BgL_oz00_2938)))->BgL_modez00) =
					((long) BgL_vz00_3037), BUNSPEC);
		}}

	}



/* &lambda1468 */
	obj_t BGl_z62lambda1468z62zz__tarz00(obj_t BgL_envz00_2940,
		obj_t BgL_oz00_2941)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				BINT(
				(((BgL_tarzd2headerzd2_bglt) COBJECT(
							((BgL_tarzd2headerzd2_bglt) BgL_oz00_2941)))->BgL_modez00));
		}

	}



/* &lambda1464 */
	obj_t BGl_z62lambda1464z62zz__tarz00(obj_t BgL_envz00_2942,
		obj_t BgL_oz00_2943, obj_t BgL_vz00_2944)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				((((BgL_tarzd2headerzd2_bglt) COBJECT(
							((BgL_tarzd2headerzd2_bglt) BgL_oz00_2943)))->BgL_namez00) =
				((obj_t) ((obj_t) BgL_vz00_2944)), BUNSPEC);
		}

	}



/* &lambda1463 */
	obj_t BGl_z62lambda1463z62zz__tarz00(obj_t BgL_envz00_2945,
		obj_t BgL_oz00_2946)
	{
		{	/* Unsafe/tar.scm 55 */
			return
				(((BgL_tarzd2headerzd2_bglt) COBJECT(
						((BgL_tarzd2headerzd2_bglt) BgL_oz00_2946)))->BgL_namez00);
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__tarz00()
	{
		{	/* Unsafe/tar.scm 17 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__tarz00()
	{
		{	/* Unsafe/tar.scm 17 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__tarz00()
	{
		{	/* Unsafe/tar.scm 17 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2209z00zz__tarz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string2209z00zz__tarz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string2209z00zz__tarz00));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					228151379), BSTRING_TO_STRING(BGl_string2209z00zz__tarz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2209z00zz__tarz00));
			return BGl_modulezd2initializa7ationz75zz__rgcz00(((long) 352596942),
				BSTRING_TO_STRING(BGl_string2209z00zz__tarz00));
		}

	}

#ifdef __cplusplus
}
#endif
