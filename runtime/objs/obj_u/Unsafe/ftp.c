/*===========================================================================*/
/*   (Unsafe/ftp.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/ftp.scm -indent -o objs/obj_u/Unsafe/ftp.c) */
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

	typedef struct BgL_z52ftpz52_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_cmdz00;
		obj_t BgL_dtpz00;
		bool_t BgL_passivezf3zf3;
	}                *BgL_z52ftpz52_bglt;

	typedef struct BgL_ftpz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_cmdz00;
		obj_t BgL_dtpz00;
		bool_t BgL_passivezf3zf3;
		obj_t BgL_hostz00;
		obj_t BgL_portz00;
		obj_t BgL_motdz00;
		obj_t BgL_userz00;
		obj_t BgL_passz00;
		obj_t BgL_acctz00;
	}             *BgL_ftpz00_bglt;

	typedef struct BgL_z62ftpzd2errorzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                        *BgL_z62ftpzd2errorzb0_bglt;

	typedef struct BgL_z62ftpzd2parsezd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                *BgL_z62ftpzd2parsezd2errorz62_bglt;


	BGL_EXPORTED_DECL bool_t BGl_ftpzd2passivezd2zz__ftpz00(BgL_ftpz00_bglt);
	static obj_t BGl_z62lambda1921z62zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1922z62zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1928z62zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1929z62zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62ftpzd2statuszb0zz__ftpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2datazd2typez00zz__ftpz00(BgL_ftpz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_z62ftpzd2allocatezb0zz__ftpz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t bgl_socket_host_addr(obj_t);
	static obj_t BGl_symbol2809z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_z62ftpzd2copyzd2filez62zz__ftpz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52ftpzd2readzd2dtpz52zz__ftpz00(obj_t, obj_t);
	static BgL_ftpz00_bglt BGl_z62lambda1936z62zz__ftpz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_ftpz00_bglt BGl_z62lambda1938z62zz__ftpz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31846ze3ze5zz__ftpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2putzd2filez00zz__ftpz00(BgL_ftpz00_bglt,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ftpz00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol2816z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_z62ftpzd2reinitializa7ez17zz__ftpz00(obj_t, obj_t);
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	static obj_t BGl_ftpzd2connectzd2toz00zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1945z62zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1946z62zz__ftpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_ftpzd2directoryzd2ze3listze3zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__ftpz00 = BUNSPEC;
	static obj_t BGl_z62ftpzd2cdzd2parentz62zz__ftpz00(obj_t, obj_t);
	extern obj_t BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_symbol2900z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol2905z00zz__ftpz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2datazd2portz00zz__ftpz00(BgL_ftpz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_zc3z04exitza31742ze3ze70z60zz__ftpz00(BgL_z52ftpz52_bglt);
	static obj_t BGl_z62zc3z04anonymousza32004ze3ze5zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_z52ftpzd2closez80zz__ftpz00(obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1953z62zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1954z62zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2910z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol2912z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol2916z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol2918z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_z62ftpzd2storezb0zz__ftpz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62ftpzd2parsezd2errorz62zz__ftpz00 = BUNSPEC;
	static obj_t BGl_z52ftpzd2closezd2cmdz52zz__ftpz00(obj_t);
	static obj_t BGl_z62lambda1960z62zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1961z62zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31962ze3ze5zz__ftpz00(obj_t);
	static obj_t BGl_z62lambda1967z62zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1968z62zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2923z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol2924z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol2928z00zz__ftpz00 = BUNSPEC;
	extern long bgl_file_size(char *);
	static obj_t BGl_toplevelzd2initzd2zz__ftpz00();
	static obj_t BGl_z62ftpzd2mountzb0zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62ftpzd2abortzb0zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1974z62zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1975z62zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31955ze3ze5zz__ftpz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31947ze3ze5zz__ftpz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31696ze3ze5zz__ftpz00(obj_t);
	extern obj_t BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00(obj_t, obj_t,
		int);
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2namezd2listz00zz__ftpz00(BgL_ftpz00_bglt,
		obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_symbol2932z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_z52ftpzd2dtpzd2initz52zz__ftpz00(obj_t);
	static obj_t BGl_symbol2937z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_z62lambda1982z62zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1983z62zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__ftpz00();
	extern obj_t BGl_z62iozd2parsezd2errorz62zz__objectz00;
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_symbol2942z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol2947z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol2787z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol2789z00zz__ftpz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2noopzd2zz__ftpz00(BgL_ftpz00_bglt);
	extern obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__ftpz00();
	static BgL_z62ftpzd2errorzb0_bglt BGl_z62lambda1990z62zz__ftpz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_z62ftpzd2errorzb0_bglt BGl_z62lambda1992z62zz__ftpz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2pwdzd2zz__ftpz00(BgL_ftpz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2storezd2zz__ftpz00(BgL_ftpz00_bglt, obj_t,
		obj_t);
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_symbol2952z00zz__ftpz00 = BUNSPEC;
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol2956z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_z62ftpzd2passivezb0zz__ftpz00(obj_t, obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62ftpzd2errorzb0zz__ftpz00 = BUNSPEC;
	static obj_t BGl_symbol2961z00zz__ftpz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2mountzd2zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2abortzd2zz__ftpz00(BgL_ftpz00_bglt);
	static obj_t BGl_z62ftpzd2transferzd2modez62zz__ftpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_openzd2inputzd2ftpzd2filezd2zz__ftpz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2898z00zz__ftpz00 = BUNSPEC;
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_fprintfz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	extern bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_ftpzd2filezd2structurez00zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31984ze3ze5zz__ftpz00(obj_t);
	static obj_t BGl_thezd2substringze70z35zz__ftpz00(obj_t, int, int);
	static obj_t BGl_z62zc3z04anonymousza31976ze3ze5zz__ftpz00(obj_t);
	static obj_t BGl_z62ftpzd2makezd2directoryz62zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62ftpzd2rmdirzb0zz__ftpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2renamezd2filez00zz__ftpz00(BgL_ftpz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__ftpz00();
	static obj_t BGl_z62zc3z04anonymousza31969ze3ze5zz__ftpz00(obj_t);
	static obj_t BGl_z62ftpzd2renamezd2filez62zz__ftpz00(obj_t, obj_t, obj_t,
		obj_t);
	extern int BGl_socketzd2shutdownzd2zz__socketz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31994ze3ze5zz__ftpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2copyzd2filez00zz__ftpz00(BgL_ftpz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31898ze3ze5zz__ftpz00(obj_t);
	extern obj_t BGl_urlzd2sanszd2protocolzd2parsezd2zz__urlz00(obj_t, obj_t);
	static obj_t BGl_z52ftpzd2closezd2dtpz52zz__ftpz00(obj_t);
	extern obj_t bgl_close_input_port(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2cdzd2parentz00zz__ftpz00(BgL_ftpz00_bglt);
	static obj_t BGl_z62ftpzd2directoryzd2ze3pathzd2listz53zz__ftpz00(obj_t,
		obj_t, obj_t);
	static BgL_z62ftpzd2parsezd2errorz62_bglt
		BGl_z62lambda2000z62zz__ftpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_z62ftpzd2parsezd2errorz62_bglt
		BGl_z62lambda2002z62zz__ftpz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2logoutzd2zz__ftpz00(BgL_ftpz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2rmdirzd2zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	static obj_t BGl_z62ftpzd2listzb0zz__ftpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2restartzd2zz__ftpz00(BgL_ftpz00_bglt,
		obj_t);
	extern obj_t rgc_buffer_substring(obj_t, long, long);
	extern obj_t BGl_readzd2lineszd2zz__r4_input_6_10_2z00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62ftpzd2putzd2filez62zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62ftpzd2sitezd2parametersz62zz__ftpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2retrievezd2zz__ftpz00(BgL_ftpz00_bglt,
		obj_t);
	extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
	extern obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62ftpzd2logoutzb0zz__ftpz00(obj_t, obj_t);
	extern obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2allocatezd2zz__ftpz00(BgL_ftpz00_bglt,
		obj_t, obj_t);
	extern obj_t bgl_list_ref(obj_t, long);
	static obj_t BGl_ignoreze70ze7zz__ftpz00(obj_t, obj_t, obj_t, obj_t, obj_t);
	extern bool_t rgc_buffer_bol_p(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2cdzd2zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	static obj_t BGl_z62ftpzd2helpzb0zz__ftpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__ftpz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_makezd2clientzd2socketz00zz__socketz00(obj_t, int, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_list2805z00zz__ftpz00 = BUNSPEC;
	extern obj_t BGl_z62errorz62zz__objectz00;
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	extern bool_t fexists(char *);
	static obj_t BGl_z62ftpzd2datazd2typez62zz__ftpz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__ftpz00();
	extern obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	static obj_t BGl__ftpzd2connectzd2zz__ftpz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z52ftpz52zz__ftpz00 = BUNSPEC;
	static obj_t BGl_z62ftpzd2datazd2portz62zz__ftpz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__ftpz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__ftpz00();
	static obj_t BGl_z52ftpzd2readzd2cmdz52zz__ftpz00(obj_t);
	static obj_t BGl_z62ftpzd2restartzb0zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62ftpzd2pwdzb0zz__ftpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2deletezd2zz__ftpz00(BgL_ftpz00_bglt,
		obj_t);
	extern obj_t socket_close(obj_t);
	extern obj_t BGl_objectz00zz__objectz00;
	extern long BGl_sendzd2filezd2zz__r4_input_6_10_2z00(obj_t, obj_t, long,
		long);
	BGL_EXPORTED_DECL obj_t
		BGl_ftpzd2sitezd2parametersz00zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_ftpzd2directoryzd2ze3pathzd2listz31zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2systemzd2zz__ftpz00(BgL_ftpz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_ftpzd2makezd2directoryz00zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2listzd2zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	extern obj_t BGl_stringzd2splitzd2zz__r4_strings_6_7z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31628ze3ze5zz__ftpz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2connectzd2zz__ftpz00(BgL_ftpz00_bglt,
		obj_t);
	static obj_t BGl_ftpportzd2ze3hostportz31zz__ftpz00(obj_t);
	static obj_t BGl_z62ftpzd2namezd2listz62zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62ftpzd2deletezb0zz__ftpz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
	extern obj_t BGl_readzd2stringzd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_z62ftpzd2directoryzd2ze3listz81zz__ftpz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62ftpzd2systemzb0zz__ftpz00(obj_t, obj_t);
	extern obj_t c_substring(obj_t, long, long);
	extern obj_t
		BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ftpzd2appendzd2zz__ftpz00(BgL_ftpz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31696ze32659ze5zz__ftpz00(obj_t);
	static obj_t BGl_z62objectzd2printzd2ftp1273z62zz__ftpz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_ftpzd2reinitializa7ez75zz__ftpz00(BgL_ftpz00_bglt);
	extern obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static obj_t BGl_keyword2806z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_keyword2808z00zz__ftpz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31930ze3ze5zz__ftpz00(obj_t);
	static obj_t BGl_loopze70ze7zz__ftpz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62ftpzd2filezd2structurez62zz__ftpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_ftpzd2transferzd2modez00zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	static obj_t BGl_z62ftpzd2appendzb0zz__ftpz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62ftpzd2noopzb0zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31923ze3ze5zz__ftpz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2helpzd2zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	static obj_t BGl_z62ftpzd2cdzb0zz__ftpz00(obj_t, obj_t, obj_t);
	extern bool_t rgc_fill_buffer(obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	static BgL_z52ftpz52_bglt BGl_z62lambda1907z62zz__ftpz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31940ze3ze5zz__ftpz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ftpzd2statuszd2zz__ftpz00(BgL_ftpz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31916ze3ze5zz__ftpz00(obj_t);
	static obj_t BGl__openzd2inputzd2ftpzd2filezd2zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_z62ftpzd2retrievezb0zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04exitza31651ze3ze70z60zz__ftpz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1914z62zz__ftpz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1915z62zz__ftpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31909ze3ze5zz__ftpz00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2cdzd2parentzd2envzd2zz__ftpz00,
		BgL_bgl_za762ftpza7d2cdza7d2pa2970za7,
		BGl_z62ftpzd2cdzd2parentz62zz__ftpz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2allocatezd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2allocat2971z00, va_generic_entry,
		BGl_z62ftpzd2allocatezb0zz__ftpz00, BUNSPEC, -3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2rmdirzd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2rmdirza7b2972za7, BGl_z62ftpzd2rmdirzb0zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2retrievezd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2retriev2973z00, BGl_z62ftpzd2retrievezb0zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2abortzd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2abortza7b2974za7, BGl_z62ftpzd2abortzb0zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2listzd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2listza7b02975za7, va_generic_entry,
		BGl_z62ftpzd2listzb0zz__ftpz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2passivezd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2passive2976z00, BGl_z62ftpzd2passivezb0zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2systemzd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2systemza72977za7, BGl_z62ftpzd2systemzb0zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2copyzd2filezd2envzd2zz__ftpz00,
		BgL_bgl_za762ftpza7d2copyza7d22978za7,
		BGl_z62ftpzd2copyzd2filez62zz__ftpz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2namezd2listzd2envzd2zz__ftpz00,
		BgL_bgl_za762ftpza7d2nameza7d22979za7, va_generic_entry,
		BGl_z62ftpzd2namezd2listz62zz__ftpz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2statuszd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2statusza72980za7, va_generic_entry,
		BGl_z62ftpzd2statuszb0zz__ftpz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2cdzd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2cdza7b0za7za72981za7, BGl_z62ftpzd2cdzb0zz__ftpz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2sitezd2parameterszd2envzd2zz__ftpz00,
		BgL_bgl_za762ftpza7d2siteza7d22982za7, va_generic_entry,
		BGl_z62ftpzd2sitezd2parametersz62zz__ftpz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ftpzd2directoryzd2ze3pathzd2listzd2envze3zz__ftpz00,
		BgL_bgl_za762ftpza7d2directo2983z00,
		BGl_z62ftpzd2directoryzd2ze3pathzd2listz53zz__ftpz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2800z00zz__ftpz00,
		BgL_bgl_string2800za700za7za7_2984za7, "PASS", 4);
	      DEFINE_STRING(BGl_string2801z00zz__ftpz00,
		BgL_bgl_string2801za700za7za7_2985za7, "ACCT", 4);
	      DEFINE_STRING(BGl_string2802z00zz__ftpz00,
		BgL_bgl_string2802za700za7za7_2986za7, "Remote host closed socket", 25);
	      DEFINE_STRING(BGl_string2803z00zz__ftpz00,
		BgL_bgl_string2803za700za7za7_2987za7, "Unknown return code", 19);
	      DEFINE_STRING(BGl_string2804z00zz__ftpz00,
		BgL_bgl_string2804za700za7za7_2988za7, "localhost", 9);
	      DEFINE_STRING(BGl_string2807z00zz__ftpz00,
		BgL_bgl_string2807za700za7za7_2989za7, "host", 4);
	extern obj_t BGl_objectzd2printzd2envz00zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ftpzd2directoryzd2ze3listzd2envz31zz__ftpz00,
		BgL_bgl_za762ftpza7d2directo2990z00,
		BGl_z62ftpzd2directoryzd2ze3listz81zz__ftpz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2datazd2portzd2envzd2zz__ftpz00,
		BgL_bgl_za762ftpza7d2dataza7d22991za7,
		BGl_z62ftpzd2datazd2portz62zz__ftpz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2810z00zz__ftpz00,
		BgL_bgl_string2810za700za7za7_2992za7, "ftp-connect-to", 14);
	      DEFINE_STRING(BGl_string2811z00zz__ftpz00,
		BgL_bgl_string2811za700za7za7_2993za7, "Illegal keyword argument", 24);
	      DEFINE_STRING(BGl_string2812z00zz__ftpz00,
		BgL_bgl_string2812za700za7za7_2994za7,
		"wrong number of arguments: [0..2] expected, provided", 52);
	      DEFINE_STRING(BGl_string2813z00zz__ftpz00,
		BgL_bgl_string2813za700za7za7_2995za7, "", 0);
	      DEFINE_STRING(BGl_string2814z00zz__ftpz00,
		BgL_bgl_string2814za700za7za7_2996za7, "anonymous", 9);
	      DEFINE_STRING(BGl_string2815z00zz__ftpz00,
		BgL_bgl_string2815za700za7za7_2997za7, "foo@bar.net", 11);
	      DEFINE_STRING(BGl_string2817z00zz__ftpz00,
		BgL_bgl_string2817za700za7za7_2998za7, "inet", 4);
	      DEFINE_STRING(BGl_string2818z00zz__ftpz00,
		BgL_bgl_string2818za700za7za7_2999za7, "/tmp/4.4a/runtime/Unsafe/ftp.scm",
		32);
	      DEFINE_STRING(BGl_string2819z00zz__ftpz00,
		BgL_bgl_string2819za700za7za7_3000za7, "_ftp-connect", 12);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2pwdzd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2pwdza7b0za73001z00, BGl_z62ftpzd2pwdzb0zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2901z00zz__ftpz00,
		BgL_bgl_string2901za700za7za7_3002za7, "obj", 3);
	      DEFINE_STRING(BGl_string2820z00zz__ftpz00,
		BgL_bgl_string2820za700za7za7_3003za7, "PASV", 4);
	      DEFINE_STRING(BGl_string2821z00zz__ftpz00,
		BgL_bgl_string2821za700za7za7_3004za7, "ftp-data-port", 13);
	      DEFINE_STRING(BGl_string2822z00zz__ftpz00,
		BgL_bgl_string2822za700za7za7_3005za7,
		"PORT functionality is not yet implemented", 41);
	      DEFINE_STRING(BGl_string2823z00zz__ftpz00,
		BgL_bgl_string2823za700za7za7_3006za7, "~a.~a.~a.~a", 11);
	      DEFINE_STRING(BGl_string2824z00zz__ftpz00,
		BgL_bgl_string2824za700za7za7_3007za7, "QUIT", 4);
	      DEFINE_STRING(BGl_string2906z00zz__ftpz00,
		BgL_bgl_string2906za700za7za7_3008za7, "dtp", 3);
	      DEFINE_STRING(BGl_string2825z00zz__ftpz00,
		BgL_bgl_string2825za700za7za7_3009za7, "&ftp-logout", 11);
	      DEFINE_STRING(BGl_string2826z00zz__ftpz00,
		BgL_bgl_string2826za700za7za7_3010za7, "CWD", 3);
	      DEFINE_STRING(BGl_string2827z00zz__ftpz00,
		BgL_bgl_string2827za700za7za7_3011za7, "&ftp-cd", 7);
	      DEFINE_STRING(BGl_string2828z00zz__ftpz00,
		BgL_bgl_string2828za700za7za7_3012za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2829z00zz__ftpz00,
		BgL_bgl_string2829za700za7za7_3013za7, "CDUP", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2902z00zz__ftpz00,
		BgL_bgl_za762za7c3za704anonymo3014za7,
		BGl_z62zc3z04anonymousza31923ze3ze5zz__ftpz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2903z00zz__ftpz00,
		BgL_bgl_za762lambda1922za7623015z00, BGl_z62lambda1922z62zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2904z00zz__ftpz00,
		BgL_bgl_za762lambda1921za7623016z00, BGl_z62lambda1921z62zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2mountzd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2mountza7b3017za7, BGl_z62ftpzd2mountzb0zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2911z00zz__ftpz00,
		BgL_bgl_string2911za700za7za7_3018za7, "passive?", 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2907z00zz__ftpz00,
		BgL_bgl_za762za7c3za704anonymo3019za7,
		BGl_z62zc3z04anonymousza31930ze3ze5zz__ftpz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2830z00zz__ftpz00,
		BgL_bgl_string2830za700za7za7_3020za7, "&ftp-cd-parent", 14);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2908z00zz__ftpz00,
		BgL_bgl_za762lambda1929za7623021z00, BGl_z62lambda1929z62zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2831z00zz__ftpz00,
		BgL_bgl_string2831za700za7za7_3022za7, "SMNT", 4);
	      DEFINE_STRING(BGl_string2913z00zz__ftpz00,
		BgL_bgl_string2913za700za7za7_3023za7, "bool", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2909z00zz__ftpz00,
		BgL_bgl_za762lambda1928za7623024z00, BGl_z62lambda1928z62zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2832z00zz__ftpz00,
		BgL_bgl_string2832za700za7za7_3025za7, "&ftp-mount", 10);
	      DEFINE_STRING(BGl_string2833z00zz__ftpz00,
		BgL_bgl_string2833za700za7za7_3026za7, "REIN", 4);
	      DEFINE_STRING(BGl_string2834z00zz__ftpz00,
		BgL_bgl_string2834za700za7za7_3027za7, "&ftp-reinitialize", 17);
	      DEFINE_STRING(BGl_string2835z00zz__ftpz00,
		BgL_bgl_string2835za700za7za7_3028za7,
		"PORT functionality is not implemented", 37);
	      DEFINE_STRING(BGl_string2917z00zz__ftpz00,
		BgL_bgl_string2917za700za7za7_3029za7, "%ftp", 4);
	      DEFINE_STRING(BGl_string2836z00zz__ftpz00,
		BgL_bgl_string2836za700za7za7_3030za7, "&ftp-data-port", 14);
	      DEFINE_STRING(BGl_string2837z00zz__ftpz00,
		BgL_bgl_string2837za700za7za7_3031za7, "bint", 4);
	      DEFINE_STRING(BGl_string2919z00zz__ftpz00,
		BgL_bgl_string2919za700za7za7_3032za7, "__ftp", 5);
	      DEFINE_STRING(BGl_string2838z00zz__ftpz00,
		BgL_bgl_string2838za700za7za7_3033za7, "&ftp-passive", 12);
	      DEFINE_STRING(BGl_string2839z00zz__ftpz00,
		BgL_bgl_string2839za700za7za7_3034za7, "ftp-data-type", 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2914z00zz__ftpz00,
		BgL_bgl_za762za7c3za704anonymo3035za7,
		BGl_z62zc3z04anonymousza31909ze3ze5zz__ftpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2915z00zz__ftpz00,
		BgL_bgl_za762lambda1907za7623036z00, BGl_z62lambda1907z62zz__ftpz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2840z00zz__ftpz00,
		BgL_bgl_string2840za700za7za7_3037za7,
		"Illegal type value, should be on of '(ascii image)", 50);
	      DEFINE_STRING(BGl_string2841z00zz__ftpz00,
		BgL_bgl_string2841za700za7za7_3038za7, "A", 1);
	      DEFINE_STRING(BGl_string2842z00zz__ftpz00,
		BgL_bgl_string2842za700za7za7_3039za7, "TYPE", 4);
	      DEFINE_STRING(BGl_string2843z00zz__ftpz00,
		BgL_bgl_string2843za700za7za7_3040za7, "I", 1);
	      DEFINE_STRING(BGl_string2844z00zz__ftpz00,
		BgL_bgl_string2844za700za7za7_3041za7, "&ftp-data-type", 14);
	      DEFINE_STRING(BGl_string2845z00zz__ftpz00,
		BgL_bgl_string2845za700za7za7_3042za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2846z00zz__ftpz00,
		BgL_bgl_string2846za700za7za7_3043za7, "F", 1);
	      DEFINE_STRING(BGl_string2847z00zz__ftpz00,
		BgL_bgl_string2847za700za7za7_3044za7, "STRU", 4);
	      DEFINE_STRING(BGl_string2848z00zz__ftpz00,
		BgL_bgl_string2848za700za7za7_3045za7, "&ftp-file-structure", 19);
	      DEFINE_STRING(BGl_string2849z00zz__ftpz00,
		BgL_bgl_string2849za700za7za7_3046za7, "S", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2920z00zz__ftpz00,
		BgL_bgl_za762za7c3za704anonymo3047za7,
		BGl_z62zc3z04anonymousza31947ze3ze5zz__ftpz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2921z00zz__ftpz00,
		BgL_bgl_za762lambda1946za7623048z00, BGl_z62lambda1946z62zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2922z00zz__ftpz00,
		BgL_bgl_za762lambda1945za7623049z00, BGl_z62lambda1945z62zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2925z00zz__ftpz00,
		BgL_bgl_za762za7c3za704anonymo3050za7,
		BGl_z62zc3z04anonymousza31955ze3ze5zz__ftpz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2926z00zz__ftpz00,
		BgL_bgl_za762lambda1954za7623051z00, BGl_z62lambda1954z62zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2927z00zz__ftpz00,
		BgL_bgl_za762lambda1953za7623052z00, BGl_z62lambda1953z62zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2850z00zz__ftpz00,
		BgL_bgl_string2850za700za7za7_3053za7, "MODE", 4);
	      DEFINE_STRING(BGl_string2851z00zz__ftpz00,
		BgL_bgl_string2851za700za7za7_3054za7, "&ftp-transfer-mode", 18);
	      DEFINE_STRING(BGl_string2933z00zz__ftpz00,
		BgL_bgl_string2933za700za7za7_3055za7, "motd", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2929z00zz__ftpz00,
		BgL_bgl_za762za7c3za704anonymo3056za7,
		BGl_z62zc3z04anonymousza31962ze3ze5zz__ftpz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2852z00zz__ftpz00,
		BgL_bgl_string2852za700za7za7_3057za7, "&ftp-retrieve", 13);
	      DEFINE_STRING(BGl_string2853z00zz__ftpz00,
		BgL_bgl_string2853za700za7za7_3058za7, "STOR", 4);
	      DEFINE_STRING(BGl_string2854z00zz__ftpz00,
		BgL_bgl_string2854za700za7za7_3059za7, "STOU", 4);
	      DEFINE_STRING(BGl_string2855z00zz__ftpz00,
		BgL_bgl_string2855za700za7za7_3060za7, "&ftp-store", 10);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2noopzd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2noopza7b03061za7, BGl_z62ftpzd2noopzb0zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2logoutzd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2logoutza73062za7, BGl_z62ftpzd2logoutzb0zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2856z00zz__ftpz00,
		BgL_bgl_string2856za700za7za7_3063za7, "APPE", 4);
	      DEFINE_STRING(BGl_string2938z00zz__ftpz00,
		BgL_bgl_string2938za700za7za7_3064za7, "user", 4);
	      DEFINE_STRING(BGl_string2857z00zz__ftpz00,
		BgL_bgl_string2857za700za7za7_3065za7, "&ftp-append", 11);
	      DEFINE_STRING(BGl_string2858z00zz__ftpz00,
		BgL_bgl_string2858za700za7za7_3066za7, "R", 1);
	      DEFINE_STRING(BGl_string2859z00zz__ftpz00,
		BgL_bgl_string2859za700za7za7_3067za7, "ALLO", 4);
	      DEFINE_STRING(BGl_string2779z00zz__ftpz00,
		BgL_bgl_string2779za700za7za7_3068za7, "EOF", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2930z00zz__ftpz00,
		BgL_bgl_za762lambda1961za7623069z00, BGl_z62lambda1961z62zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2931z00zz__ftpz00,
		BgL_bgl_za762lambda1960za7623070z00, BGl_z62lambda1960z62zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2934z00zz__ftpz00,
		BgL_bgl_za762za7c3za704anonymo3071za7,
		BGl_z62zc3z04anonymousza31969ze3ze5zz__ftpz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2935z00zz__ftpz00,
		BgL_bgl_za762lambda1968za7623072z00, BGl_z62lambda1968z62zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2936z00zz__ftpz00,
		BgL_bgl_za762lambda1967za7623073z00, BGl_z62lambda1967z62zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2860z00zz__ftpz00,
		BgL_bgl_string2860za700za7za7_3074za7, "&ftp-allocate", 13);
	      DEFINE_STRING(BGl_string2861z00zz__ftpz00,
		BgL_bgl_string2861za700za7za7_3075za7, "REST", 4);
	      DEFINE_STRING(BGl_string2780z00zz__ftpz00,
		BgL_bgl_string2780za700za7za7_3076za7, "Illegal range `~a'", 18);
	      DEFINE_STRING(BGl_string2943z00zz__ftpz00,
		BgL_bgl_string2943za700za7za7_3077za7, "pass", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2939z00zz__ftpz00,
		BgL_bgl_za762za7c3za704anonymo3078za7,
		BGl_z62zc3z04anonymousza31976ze3ze5zz__ftpz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2862z00zz__ftpz00,
		BgL_bgl_string2862za700za7za7_3079za7, "&ftp-restart", 12);
	      DEFINE_STRING(BGl_string2781z00zz__ftpz00,
		BgL_bgl_string2781za700za7za7_3080za7, "the-substring", 13);
	      DEFINE_STRING(BGl_string2863z00zz__ftpz00,
		BgL_bgl_string2863za700za7za7_3081za7, "RNFR", 4);
	      DEFINE_STRING(BGl_string2782z00zz__ftpz00,
		BgL_bgl_string2782za700za7za7_3082za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string2864z00zz__ftpz00,
		BgL_bgl_string2864za700za7za7_3083za7, "RNTO", 4);
	      DEFINE_STRING(BGl_string2783z00zz__ftpz00,
		BgL_bgl_string2783za700za7za7_3084za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string2865z00zz__ftpz00,
		BgL_bgl_string2865za700za7za7_3085za7, "&ftp-rename-file", 16);
	      DEFINE_STRING(BGl_string2784z00zz__ftpz00,
		BgL_bgl_string2784za700za7za7_3086za7, "%ftp-read-cmd", 13);
	      DEFINE_STRING(BGl_string2866z00zz__ftpz00,
		BgL_bgl_string2866za700za7za7_3087za7, "ABOR", 4);
	      DEFINE_STRING(BGl_string2785z00zz__ftpz00,
		BgL_bgl_string2785za700za7za7_3088za7, "Unrecognized output format", 26);
	      DEFINE_STRING(BGl_string2948z00zz__ftpz00,
		BgL_bgl_string2948za700za7za7_3089za7, "acct", 4);
	      DEFINE_STRING(BGl_string2867z00zz__ftpz00,
		BgL_bgl_string2867za700za7za7_3090za7, "&ftp-abort", 10);
	      DEFINE_STRING(BGl_string2786z00zz__ftpz00,
		BgL_bgl_string2786za700za7za7_3091za7, "\n", 1);
	      DEFINE_STRING(BGl_string2868z00zz__ftpz00,
		BgL_bgl_string2868za700za7za7_3092za7, "DELE", 4);
	      DEFINE_STRING(BGl_string2869z00zz__ftpz00,
		BgL_bgl_string2869za700za7za7_3093za7, "&ftp-delete", 11);
	      DEFINE_STRING(BGl_string2788z00zz__ftpz00,
		BgL_bgl_string2788za700za7za7_3094za7, "list", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2makezd2directoryzd2envzd2zz__ftpz00,
		BgL_bgl_za762ftpza7d2makeza7d23095za7,
		BGl_z62ftpzd2makezd2directoryz62zz__ftpz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2940z00zz__ftpz00,
		BgL_bgl_za762lambda1975za7623096z00, BGl_z62lambda1975z62zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2941z00zz__ftpz00,
		BgL_bgl_za762lambda1974za7623097z00, BGl_z62lambda1974z62zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2944z00zz__ftpz00,
		BgL_bgl_za762za7c3za704anonymo3098za7,
		BGl_z62zc3z04anonymousza31984ze3ze5zz__ftpz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2945z00zz__ftpz00,
		BgL_bgl_za762lambda1983za7623099z00, BGl_z62lambda1983z62zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2946z00zz__ftpz00,
		BgL_bgl_za762lambda1982za7623100z00, BGl_z62lambda1982z62zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2870z00zz__ftpz00,
		BgL_bgl_string2870za700za7za7_3101za7, "RMD", 3);
	      DEFINE_STRING(BGl_string2871z00zz__ftpz00,
		BgL_bgl_string2871za700za7za7_3102za7, "&ftp-rmdir", 10);
	      DEFINE_STRING(BGl_string2790z00zz__ftpz00,
		BgL_bgl_string2790za700za7za7_3103za7, "port", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2949z00zz__ftpz00,
		BgL_bgl_za762za7c3za704anonymo3104za7,
		BGl_z62zc3z04anonymousza31940ze3ze5zz__ftpz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2872z00zz__ftpz00,
		BgL_bgl_string2872za700za7za7_3105za7, "MKD", 3);
	      DEFINE_STRING(BGl_string2791z00zz__ftpz00,
		BgL_bgl_string2791za700za7za7_3106za7, "%ftp-read-dtp", 13);
	      DEFINE_STRING(BGl_string2873z00zz__ftpz00,
		BgL_bgl_string2873za700za7za7_3107za7, "&ftp-make-directory", 19);
	      DEFINE_STRING(BGl_string2792z00zz__ftpz00,
		BgL_bgl_string2792za700za7za7_3108za7, "Dunno what to read", 18);
	      DEFINE_STRING(BGl_string2874z00zz__ftpz00,
		BgL_bgl_string2874za700za7za7_3109za7, "PWD", 3);
	      DEFINE_STRING(BGl_string2793z00zz__ftpz00,
		BgL_bgl_string2793za700za7za7_3110za7, "ftp", 3);
	      DEFINE_STRING(BGl_string2875z00zz__ftpz00,
		BgL_bgl_string2875za700za7za7_3111za7, "&ftp-pwd", 8);
	      DEFINE_STRING(BGl_string2794z00zz__ftpz00,
		BgL_bgl_string2794za700za7za7_3112za7, "Socket not connected", 20);
	      DEFINE_STRING(BGl_string2957z00zz__ftpz00,
		BgL_bgl_string2957za700za7za7_3113za7, "&ftp-error", 10);
	      DEFINE_STRING(BGl_string2876z00zz__ftpz00,
		BgL_bgl_string2876za700za7za7_3114za7, "LIST", 4);
	      DEFINE_STRING(BGl_string2795z00zz__ftpz00,
		BgL_bgl_string2795za700za7za7_3115za7, "~l\r\n", 4);
	      DEFINE_STRING(BGl_string2877z00zz__ftpz00,
		BgL_bgl_string2877za700za7za7_3116za7, "&ftp-list", 9);
	      DEFINE_STRING(BGl_string2796z00zz__ftpz00,
		BgL_bgl_string2796za700za7za7_3117za7, "RETR", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2transferzd2modezd2envzd2zz__ftpz00,
		BgL_bgl_za762ftpza7d2transfe3118z00, va_generic_entry,
		BGl_z62ftpzd2transferzd2modez62zz__ftpz00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2878z00zz__ftpz00,
		BgL_bgl_string2878za700za7za7_3119za7, "NLST", 4);
	      DEFINE_STRING(BGl_string2797z00zz__ftpz00,
		BgL_bgl_string2797za700za7za7_3120za7, "USER", 4);
	      DEFINE_STRING(BGl_string2879z00zz__ftpz00,
		BgL_bgl_string2879za700za7za7_3121za7, "&ftp-name-list", 14);
	      DEFINE_STRING(BGl_string2798z00zz__ftpz00,
		BgL_bgl_string2798za700za7za7_3122za7, " ABOR ", 6);
	      DEFINE_STRING(BGl_string2799z00zz__ftpz00,
		BgL_bgl_string2799za700za7za7_3123za7, ",", 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2ftpzd2filezd2envz00zz__ftpz00,
		BgL_bgl__openza7d2inputza7d23124z00, opt_generic_entry,
		BGl__openzd2inputzd2ftpzd2filezd2zz__ftpz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2putzd2filezd2envzd2zz__ftpz00,
		BgL_bgl_za762ftpza7d2putza7d2f3125za7, BGl_z62ftpzd2putzd2filez62zz__ftpz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2950z00zz__ftpz00,
		BgL_bgl_za762lambda1938za7623126z00, BGl_z62lambda1938z62zz__ftpz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2951z00zz__ftpz00,
		BgL_bgl_za762lambda1936za7623127z00, BGl_z62lambda1936z62zz__ftpz00, 0L,
		BUNSPEC, 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2953z00zz__ftpz00,
		BgL_bgl_za762za7c3za704anonymo3128za7,
		BGl_z62zc3z04anonymousza31994ze3ze5zz__ftpz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2954z00zz__ftpz00,
		BgL_bgl_za762lambda1992za7623129z00, BGl_z62lambda1992z62zz__ftpz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2955z00zz__ftpz00,
		BgL_bgl_za762lambda1990za7623130z00, BGl_z62lambda1990z62zz__ftpz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STRING(BGl_string2880z00zz__ftpz00,
		BgL_bgl_string2880za700za7za7_3131za7, "SITE", 4);
	      DEFINE_STRING(BGl_string2962z00zz__ftpz00,
		BgL_bgl_string2962za700za7za7_3132za7, "&ftp-parse-error", 16);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2958z00zz__ftpz00,
		BgL_bgl_za762za7c3za704anonymo3133za7,
		BGl_z62zc3z04anonymousza32004ze3ze5zz__ftpz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2881z00zz__ftpz00,
		BgL_bgl_string2881za700za7za7_3134za7, "&ftp-site-parameters", 20);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2959z00zz__ftpz00,
		BgL_bgl_za762lambda2002za7623135z00, BGl_z62lambda2002z62zz__ftpz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2882z00zz__ftpz00,
		BgL_bgl_string2882za700za7za7_3136za7, "SYST", 4);
	      DEFINE_STRING(BGl_string2964z00zz__ftpz00,
		BgL_bgl_string2964za700za7za7_3137za7, "object-print", 12);
	      DEFINE_STRING(BGl_string2883z00zz__ftpz00,
		BgL_bgl_string2883za700za7za7_3138za7, "&ftp-system", 11);
	      DEFINE_STRING(BGl_string2965z00zz__ftpz00,
		BgL_bgl_string2965za700za7za7_3139za7, "#<%ftp host=", 12);
	      DEFINE_STRING(BGl_string2884z00zz__ftpz00,
		BgL_bgl_string2884za700za7za7_3140za7, "STAT", 4);
	      DEFINE_STRING(BGl_string2966z00zz__ftpz00,
		BgL_bgl_string2966za700za7za7_3141za7, " user=", 6);
	      DEFINE_STRING(BGl_string2885z00zz__ftpz00,
		BgL_bgl_string2885za700za7za7_3142za7, "&ftp-status", 11);
	      DEFINE_STRING(BGl_string2967z00zz__ftpz00,
		BgL_bgl_string2967za700za7za7_3143za7, " data-transfer-port=", 20);
	      DEFINE_STRING(BGl_string2886z00zz__ftpz00,
		BgL_bgl_string2886za700za7za7_3144za7, "HELP", 4);
	      DEFINE_STRING(BGl_string2968z00zz__ftpz00,
		BgL_bgl_string2968za700za7za7_3145za7, " passive-mode=", 14);
	      DEFINE_STRING(BGl_string2887z00zz__ftpz00,
		BgL_bgl_string2887za700za7za7_3146za7, "&ftp-help", 9);
	      DEFINE_STRING(BGl_string2969z00zz__ftpz00,
		BgL_bgl_string2969za700za7za7_3147za7, ">", 1);
	      DEFINE_STRING(BGl_string2888z00zz__ftpz00,
		BgL_bgl_string2888za700za7za7_3148za7, "NOOP", 4);
	      DEFINE_STRING(BGl_string2889z00zz__ftpz00,
		BgL_bgl_string2889za700za7za7_3149za7, "&ftp-noop", 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2960z00zz__ftpz00,
		BgL_bgl_za762lambda2000za7623150z00, BGl_z62lambda2000z62zz__ftpz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2963z00zz__ftpz00,
		BgL_bgl_za762objectza7d2prin3151z00,
		BGl_z62objectzd2printzd2ftp1273z62zz__ftpz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2appendzd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2appendza73152za7, BGl_z62ftpzd2appendzb0zz__ftpz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2890z00zz__ftpz00,
		BgL_bgl_string2890za700za7za7_3153za7, "_open-input-ftp-file", 20);
	      DEFINE_STRING(BGl_string2891z00zz__ftpz00,
		BgL_bgl_string2891za700za7za7_3154za7, "&ftp-directory->list", 20);
	      DEFINE_STRING(BGl_string2892z00zz__ftpz00,
		BgL_bgl_string2892za700za7za7_3155za7, "&ftp-directory->path-list", 25);
	      DEFINE_STRING(BGl_string2893z00zz__ftpz00,
		BgL_bgl_string2893za700za7za7_3156za7, "&ftp-copy-file", 14);
	      DEFINE_STRING(BGl_string2894z00zz__ftpz00,
		BgL_bgl_string2894za700za7za7_3157za7, "&ftp-put-file", 13);
	      DEFINE_STRING(BGl_string2899z00zz__ftpz00,
		BgL_bgl_string2899za700za7za7_3158za7, "cmd", 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2storezd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2storeza7b3159za7, BGl_z62ftpzd2storezb0zz__ftpz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2895z00zz__ftpz00,
		BgL_bgl_za762za7c3za704anonymo3160za7,
		BGl_z62zc3z04anonymousza31916ze3ze5zz__ftpz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2896z00zz__ftpz00,
		BgL_bgl_za762lambda1915za7623161z00, BGl_z62lambda1915z62zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2897z00zz__ftpz00,
		BgL_bgl_za762lambda1914za7623162z00, BGl_z62lambda1914z62zz__ftpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2renamezd2filezd2envzd2zz__ftpz00,
		BgL_bgl_za762ftpza7d2renameza73163za7,
		BGl_z62ftpzd2renamezd2filez62zz__ftpz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2reinitializa7ezd2envza7zz__ftpz00,
		BgL_bgl_za762ftpza7d2reiniti3164z00,
		BGl_z62ftpzd2reinitializa7ez17zz__ftpz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2helpzd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2helpza7b03165za7, va_generic_entry,
		BGl_z62ftpzd2helpzb0zz__ftpz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2connectzd2envz00zz__ftpz00,
		BgL_bgl__ftpza7d2connectza7d3166z00, opt_generic_entry,
		BGl__ftpzd2connectzd2zz__ftpz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2filezd2structurezd2envzd2zz__ftpz00,
		BgL_bgl_za762ftpza7d2fileza7d23167za7, va_generic_entry,
		BGl_z62ftpzd2filezd2structurez62zz__ftpz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2restartzd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2restart3168z00, BGl_z62ftpzd2restartzb0zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2deletezd2envz00zz__ftpz00,
		BgL_bgl_za762ftpza7d2deleteza73169za7, BGl_z62ftpzd2deletezb0zz__ftpz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ftpzd2datazd2typezd2envzd2zz__ftpz00,
		BgL_bgl_za762ftpza7d2dataza7d23170za7, va_generic_entry,
		BGl_z62ftpzd2datazd2typez62zz__ftpz00, BUNSPEC, -3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol2809z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_ftpz00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2816z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2900z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2905z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2910z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2912z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2916z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2918z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_z62ftpzd2parsezd2errorz62zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2923z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2924z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2928z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2932z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2937z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2942z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2947z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2787z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2789z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2952z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2956z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_z62ftpzd2errorzb0zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2961z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_symbol2898z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_list2805z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_z52ftpz52zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_keyword2806z00zz__ftpz00));
		     ADD_ROOT((void *) (&BGl_keyword2808z00zz__ftpz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__ftpz00(long
		BgL_checksumz00_4580, char *BgL_fromz00_4581)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__ftpz00))
				{
					BGl_requirezd2initializa7ationz75zz__ftpz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__ftpz00();
					BGl_cnstzd2initzd2zz__ftpz00();
					BGl_importedzd2moduleszd2initz00zz__ftpz00();
					BGl_objectzd2initzd2zz__ftpz00();
					BGl_methodzd2initzd2zz__ftpz00();
					return BGl_toplevelzd2initzd2zz__ftpz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__ftpz00()
	{
		{	/* Unsafe/ftp.scm 15 */
			BGl_symbol2787z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2788z00zz__ftpz00);
			BGl_symbol2789z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2790z00zz__ftpz00);
			BGl_keyword2806z00zz__ftpz00 =
				bstring_to_keyword(BGl_string2807z00zz__ftpz00);
			BGl_keyword2808z00zz__ftpz00 =
				bstring_to_keyword(BGl_string2790z00zz__ftpz00);
			BGl_list2805z00zz__ftpz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2806z00zz__ftpz00,
				MAKE_YOUNG_PAIR(BGl_keyword2808z00zz__ftpz00, BNIL));
			BGl_symbol2809z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2810z00zz__ftpz00);
			BGl_symbol2816z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2817z00zz__ftpz00);
			BGl_symbol2898z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2899z00zz__ftpz00);
			BGl_symbol2900z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2901z00zz__ftpz00);
			BGl_symbol2905z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2906z00zz__ftpz00);
			BGl_symbol2910z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2911z00zz__ftpz00);
			BGl_symbol2912z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2913z00zz__ftpz00);
			BGl_symbol2916z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2917z00zz__ftpz00);
			BGl_symbol2918z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2919z00zz__ftpz00);
			BGl_symbol2923z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2807z00zz__ftpz00);
			BGl_symbol2924z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2828z00zz__ftpz00);
			BGl_symbol2928z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2837z00zz__ftpz00);
			BGl_symbol2932z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2933z00zz__ftpz00);
			BGl_symbol2937z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2938z00zz__ftpz00);
			BGl_symbol2942z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2943z00zz__ftpz00);
			BGl_symbol2947z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2948z00zz__ftpz00);
			BGl_symbol2952z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2793z00zz__ftpz00);
			BGl_symbol2956z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2957z00zz__ftpz00);
			return (BGl_symbol2961z00zz__ftpz00 =
				bstring_to_symbol(BGl_string2962z00zz__ftpz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__ftpz00()
	{
		{	/* Unsafe/ftp.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__ftpz00()
	{
		{	/* Unsafe/ftp.scm 15 */
			return BUNSPEC;
		}

	}



/* %ftp-read-cmd */
	obj_t BGl_z52ftpzd2readzd2cmdz52zz__ftpz00(obj_t BgL_ftpz00_8)
	{
		{	/* Unsafe/ftp.scm 137 */
			{	/* Unsafe/ftp.scm 139 */
				obj_t BgL_ipz00_1305;

				{	/* Unsafe/ftp.scm 139 */
					obj_t BgL_arg1633z00_1747;

					BgL_arg1633z00_1747 =
						(((BgL_z52ftpz52_bglt) COBJECT(
								((BgL_z52ftpz52_bglt) BgL_ftpz00_8)))->BgL_cmdz00);
					{	/* Unsafe/ftp.scm 139 */
						obj_t BgL_res2333z00_2835;

						{	/* Unsafe/ftp.scm 139 */
							obj_t BgL_tmpz00_4619;

							BgL_tmpz00_4619 = ((obj_t) BgL_arg1633z00_1747);
							BgL_res2333z00_2835 = SOCKET_INPUT(BgL_tmpz00_4619);
						}
						BgL_ipz00_1305 = BgL_res2333z00_2835;
					}
				}
				{	/* Unsafe/ftp.scm 139 */
					obj_t BgL_msgz00_1306;

					BgL_msgz00_1306 =
						BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_1305);
					{	/* Unsafe/ftp.scm 140 */

						{	/* Unsafe/ftp.scm 141 */
							bool_t BgL_test3172z00_4623;

							{	/* Unsafe/ftp.scm 141 */
								bool_t BgL_res2334z00_2836;

								BgL_res2334z00_2836 = EOF_OBJECTP(BgL_msgz00_1306);
								BgL_test3172z00_4623 = BgL_res2334z00_2836;
							}
							if (BgL_test3172z00_4623)
								{	/* Unsafe/ftp.scm 141 */
									{	/* Unsafe/ftp.scm 142 */
										int BgL_res2335z00_2837;

										{	/* Unsafe/ftp.scm 142 */
											int BgL_tmpz00_4625;

											BgL_tmpz00_4625 = (int) (((long) 3));
											BgL_res2335z00_2837 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4625);
										} BgL_res2335z00_2837;
									}
									{	/* Unsafe/ftp.scm 142 */
										int BgL_tmpz00_4628;

										BgL_tmpz00_4628 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_4628,
											BGl_string2779z00zz__ftpz00);
									}
									{	/* Unsafe/ftp.scm 142 */
										int BgL_tmpz00_4631;

										BgL_tmpz00_4631 = (int) (((long) 2));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_4631, BFALSE);
									}
									return BINT(((long) 999));
								}
							else
								{	/* Unsafe/ftp.scm 143 */
									struct bgl_cell BgL_box3173_4320z00;
									obj_t BgL_codez00_1311;
									obj_t BgL_mesgz00_4320;
									bool_t BgL_morezf3zf3_1313;

									{	/* Unsafe/ftp.scm 143 */
										obj_t BgL_arg1629z00_1740;

										{	/* Unsafe/ftp.scm 143 */
											obj_t BgL_res2336z00_2839;

											BgL_res2336z00_2839 =
												c_substring(
												((obj_t) BgL_msgz00_1306), ((long) 0), ((long) 3));
											BgL_arg1629z00_1740 = BgL_res2336z00_2839;
										}
										{	/* Ieee/number.scm 165 */

											BgL_codez00_1311 =
												BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
												(BgL_arg1629z00_1740, BINT(((long) 10)));
									}}
									{	/* Unsafe/ftp.scm 144 */
										obj_t BgL_cellvalz00_4639;

										{	/* Ieee/string.scm 190 */
											long BgL_endz00_1745;

											BgL_endz00_1745 =
												STRING_LENGTH(((obj_t) BgL_msgz00_1306));
											{	/* Ieee/string.scm 190 */

												BgL_cellvalz00_4639 =
													BGl_substringz00zz__r4_strings_6_7z00(BgL_msgz00_1306,
													((long) 4), BgL_endz00_1745);
										}}
										BgL_mesgz00_4320 =
											MAKE_CELL_STACK(BgL_cellvalz00_4639, BgL_box3173_4320z00);
									}
									BgL_morezf3zf3_1313 =
										(((unsigned char) '-') ==
										STRING_REF(((obj_t) BgL_msgz00_1306), ((long) 3)));
									if (BgL_morezf3zf3_1313)
										{	/* Unsafe/ftp.scm 146 */
											BGl_loopze70ze7zz__ftpz00(BgL_codez00_1311,
												BgL_ipz00_1305, BgL_mesgz00_4320,
												BGl_readzd2linezd2zz__r4_input_6_10_2z00
												(BgL_ipz00_1305));
										}
									else
										{	/* Unsafe/ftp.scm 146 */
											BFALSE;
										}
									{	/* Unsafe/ftp.scm 170 */
										obj_t BgL_val1_1223z00_1739;

										BgL_val1_1223z00_1739 = CELL_REF(BgL_mesgz00_4320);
										{	/* Unsafe/ftp.scm 170 */
											int BgL_res2492z00_3207;

											{	/* Unsafe/ftp.scm 170 */
												int BgL_tmpz00_4649;

												BgL_tmpz00_4649 = (int) (((long) 2));
												BgL_res2492z00_3207 =
													BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4649);
											} BgL_res2492z00_3207;
										}
										{	/* Unsafe/ftp.scm 170 */
											int BgL_tmpz00_4652;

											BgL_tmpz00_4652 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_tmpz00_4652,
												BgL_val1_1223z00_1739);
										}
										return BgL_codez00_1311;
									}
								}
						}
					}
				}
			}
		}

	}



/* the-substring~0 */
	obj_t BGl_thezd2substringze70z35zz__ftpz00(obj_t BgL_iportz00_4307,
		int BgL_minz00_1556, int BgL_maxz00_1557)
	{
		{	/* Unsafe/ftp.scm 149 */
			if (((long) (BgL_maxz00_1557) < (long) (BgL_minz00_1556)))
				{	/* Unsafe/ftp.scm 149 */
					long BgL_arg1516z00_1560;

					{	/* Unsafe/ftp.scm 149 */
						long BgL_res2470z00_3152;

						BgL_res2470z00_3152 = RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_4307);
						BgL_arg1516z00_1560 = BgL_res2470z00_3152;
					}
					{	/* Unsafe/ftp.scm 149 */
						long BgL_za72za7_3154;

						BgL_za72za7_3154 = (long) (BgL_maxz00_1557);
						BgL_maxz00_1557 = (int) ((BgL_arg1516z00_1560 + BgL_za72za7_3154));
				}}
			else
				{	/* Unsafe/ftp.scm 149 */
					BFALSE;
				}
			{	/* Unsafe/ftp.scm 149 */
				bool_t BgL_test3176z00_4663;

				if (((long) (BgL_minz00_1556) >= ((long) 0)))
					{	/* Unsafe/ftp.scm 149 */
						if (((long) (BgL_maxz00_1557) >= (long) (BgL_minz00_1556)))
							{	/* Unsafe/ftp.scm 149 */
								long BgL_arg1526z00_1571;

								{	/* Unsafe/ftp.scm 149 */
									long BgL_res2474z00_3162;

									BgL_res2474z00_3162 =
										RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_4307);
									BgL_arg1526z00_1571 = BgL_res2474z00_3162;
								}
								BgL_test3176z00_4663 =
									((long) (BgL_maxz00_1557) <= BgL_arg1526z00_1571);
							}
						else
							{	/* Unsafe/ftp.scm 149 */
								BgL_test3176z00_4663 = ((bool_t) 0);
							}
					}
				else
					{	/* Unsafe/ftp.scm 149 */
						BgL_test3176z00_4663 = ((bool_t) 0);
					}
				if (BgL_test3176z00_4663)
					{	/* Unsafe/ftp.scm 149 */
						return
							rgc_buffer_substring(BgL_iportz00_4307,
							(long) (BgL_minz00_1556), (long) (BgL_maxz00_1557));
					}
				else
					{	/* Unsafe/ftp.scm 149 */
						obj_t BgL_arg1521z00_1565;
						obj_t BgL_arg1523z00_1566;

						{	/* Unsafe/ftp.scm 149 */
							obj_t BgL_arg1524z00_1567;

							{	/* Unsafe/ftp.scm 149 */
								obj_t BgL_res2479z00_3176;

								{	/* Unsafe/ftp.scm 149 */
									long BgL_arg1513z00_3170;

									{	/* Unsafe/ftp.scm 149 */
										long BgL_res2477z00_3172;

										BgL_res2477z00_3172 =
											RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_4307);
										BgL_arg1513z00_3170 = BgL_res2477z00_3172;
									}
									BgL_res2479z00_3176 =
										rgc_buffer_substring(BgL_iportz00_4307, ((long) 0),
										BgL_arg1513z00_3170);
								}
								BgL_arg1524z00_1567 = BgL_res2479z00_3176;
							}
							{	/* Unsafe/ftp.scm 149 */
								obj_t BgL_list1525z00_1568;

								BgL_list1525z00_1568 =
									MAKE_YOUNG_PAIR(BgL_arg1524z00_1567, BNIL);
								BgL_arg1521z00_1565 =
									BGl_formatz00zz__r4_output_6_10_3z00
									(BGl_string2780z00zz__ftpz00, BgL_list1525z00_1568);
						}}
						BgL_arg1523z00_1566 =
							MAKE_YOUNG_PAIR(BINT(BgL_minz00_1556), BINT(BgL_maxz00_1557));
						return
							BGl_errorz00zz__errorz00(BGl_string2781z00zz__ftpz00,
							BgL_arg1521z00_1565, BgL_arg1523z00_1566);
					}
			}
		}

	}



/* ignore~0 */
	obj_t BGl_ignoreze70ze7zz__ftpz00(obj_t BgL_codez00_4312,
		obj_t BgL_ipz00_4311, obj_t BgL_mesgz00_4310, obj_t BgL_msgz00_4309,
		obj_t BgL_iportz00_4308)
	{
		{	/* Unsafe/ftp.scm 149 */
			{
				obj_t BgL_iportz00_1369;
				long BgL_lastzd2matchzd2_1370;
				long BgL_forwardz00_1371;
				long BgL_bufposz00_1372;
				obj_t BgL_iportz00_1391;
				long BgL_lastzd2matchzd2_1392;
				long BgL_forwardz00_1393;
				long BgL_bufposz00_1394;
				obj_t BgL_iportz00_1406;
				long BgL_lastzd2matchzd2_1407;
				long BgL_forwardz00_1408;
				long BgL_bufposz00_1409;
				obj_t BgL_iportz00_1428;
				long BgL_lastzd2matchzd2_1429;
				long BgL_forwardz00_1430;
				long BgL_bufposz00_1431;
				obj_t BgL_iportz00_1450;
				long BgL_lastzd2matchzd2_1451;
				long BgL_forwardz00_1452;
				long BgL_bufposz00_1453;
				obj_t BgL_iportz00_1465;
				long BgL_lastzd2matchzd2_1466;
				long BgL_forwardz00_1467;
				long BgL_bufposz00_1468;
				obj_t BgL_iportz00_1486;
				long BgL_lastzd2matchzd2_1487;
				long BgL_forwardz00_1488;
				long BgL_bufposz00_1489;
				obj_t BgL_iportz00_1500;
				long BgL_lastzd2matchzd2_1501;
				long BgL_forwardz00_1502;
				long BgL_bufposz00_1503;
				obj_t BgL_iportz00_1514;
				long BgL_lastzd2matchzd2_1515;
				long BgL_forwardz00_1516;
				long BgL_bufposz00_1517;
				obj_t BgL_iportz00_1534;
				long BgL_lastzd2matchzd2_1535;
				long BgL_forwardz00_1536;
				long BgL_bufposz00_1537;

				{	/* Unsafe/ftp.scm 149 */
					long BgL_res2481z00_3180;

					BgL_res2481z00_3180 = RGC_START_MATCH(BgL_iportz00_4308);
					BgL_res2481z00_3180;
				}
				{	/* Unsafe/ftp.scm 149 */
					long BgL_matchz00_1663;

					{	/* Unsafe/ftp.scm 149 */
						long BgL_arg1626z00_1692;
						long BgL_arg1627z00_1693;

						{	/* Unsafe/ftp.scm 149 */
							long BgL_res2482z00_3182;

							BgL_res2482z00_3182 = RGC_BUFFER_FORWARD(BgL_iportz00_4308);
							BgL_arg1626z00_1692 = BgL_res2482z00_3182;
						}
						{	/* Unsafe/ftp.scm 149 */
							long BgL_res2483z00_3184;

							BgL_res2483z00_3184 = RGC_BUFFER_BUFPOS(BgL_iportz00_4308);
							BgL_arg1627z00_1693 = BgL_res2483z00_3184;
						}
						BgL_iportz00_1465 = BgL_iportz00_4308;
						BgL_lastzd2matchzd2_1466 = ((long) 4);
						BgL_forwardz00_1467 = BgL_arg1626z00_1692;
						BgL_bufposz00_1468 = BgL_arg1627z00_1693;
					BgL_zc3z04anonymousza31454ze3z87_1469:
						{	/* Unsafe/ftp.scm 149 */
							long BgL_newzd2matchzd2_1470;

							if (rgc_buffer_bol_p(BgL_iportz00_1465))
								{	/* Unsafe/ftp.scm 149 */
									{	/* Unsafe/ftp.scm 149 */
										long BgL_res2410z00_3009;

										BgL_res2410z00_3009 =
											RGC_STOP_MATCH(BgL_iportz00_1465, BgL_forwardz00_1467);
										BgL_res2410z00_3009;
									}
									BgL_newzd2matchzd2_1470 = ((long) 3);
								}
							else
								{	/* Unsafe/ftp.scm 149 */
									BgL_newzd2matchzd2_1470 = BgL_lastzd2matchzd2_1466;
								}
							if ((BgL_forwardz00_1467 == BgL_bufposz00_1468))
								{	/* Unsafe/ftp.scm 149 */
									if (rgc_fill_buffer(BgL_iportz00_1465))
										{	/* Unsafe/ftp.scm 149 */
											long BgL_arg1457z00_1473;
											long BgL_arg1458z00_1474;

											{	/* Unsafe/ftp.scm 149 */
												long BgL_res2413z00_3016;

												BgL_res2413z00_3016 =
													RGC_BUFFER_FORWARD(BgL_iportz00_1465);
												BgL_arg1457z00_1473 = BgL_res2413z00_3016;
											}
											{	/* Unsafe/ftp.scm 149 */
												long BgL_res2414z00_3018;

												BgL_res2414z00_3018 =
													RGC_BUFFER_BUFPOS(BgL_iportz00_1465);
												BgL_arg1458z00_1474 = BgL_res2414z00_3018;
											}
											{
												long BgL_bufposz00_4698;
												long BgL_forwardz00_4697;

												BgL_forwardz00_4697 = BgL_arg1457z00_1473;
												BgL_bufposz00_4698 = BgL_arg1458z00_1474;
												BgL_bufposz00_1468 = BgL_bufposz00_4698;
												BgL_forwardz00_1467 = BgL_forwardz00_4697;
												goto BgL_zc3z04anonymousza31454ze3z87_1469;
											}
										}
									else
										{	/* Unsafe/ftp.scm 149 */
											BgL_matchz00_1663 = BgL_newzd2matchzd2_1470;
										}
								}
							else
								{	/* Unsafe/ftp.scm 149 */
									int BgL_curz00_1475;

									{	/* Unsafe/ftp.scm 149 */
										int BgL_res2415z00_3021;

										BgL_res2415z00_3021 =
											RGC_BUFFER_GET_CHAR(BgL_iportz00_1465,
											BgL_forwardz00_1467);
										BgL_curz00_1475 = BgL_res2415z00_3021;
									}
									{	/* Unsafe/ftp.scm 149 */

										{	/* Unsafe/ftp.scm 149 */
											bool_t BgL_test3182z00_4700;

											if (((long) (BgL_curz00_1475) >= ((long) 48)))
												{	/* Unsafe/ftp.scm 149 */
													BgL_test3182z00_4700 =
														((long) (BgL_curz00_1475) < ((long) 58));
												}
											else
												{	/* Unsafe/ftp.scm 149 */
													BgL_test3182z00_4700 = ((bool_t) 0);
												}
											if (BgL_test3182z00_4700)
												{	/* Unsafe/ftp.scm 149 */
													BgL_iportz00_1406 = BgL_iportz00_1465;
													BgL_lastzd2matchzd2_1407 = BgL_newzd2matchzd2_1470;
													BgL_forwardz00_1408 =
														(((long) 1) + BgL_forwardz00_1467);
													BgL_bufposz00_1409 = BgL_bufposz00_1468;
												BgL_zc3z04anonymousza31420ze3z87_1410:
													{	/* Unsafe/ftp.scm 149 */
														long BgL_newzd2matchzd2_1411;

														if (rgc_buffer_bol_p(BgL_iportz00_1406))
															{	/* Unsafe/ftp.scm 149 */
																{	/* Unsafe/ftp.scm 149 */
																	long BgL_res2370z00_2918;

																	BgL_res2370z00_2918 =
																		RGC_STOP_MATCH(BgL_iportz00_1406,
																		BgL_forwardz00_1408);
																	BgL_res2370z00_2918;
																}
																BgL_newzd2matchzd2_1411 = ((long) 3);
															}
														else
															{	/* Unsafe/ftp.scm 149 */
																{	/* Unsafe/ftp.scm 149 */
																	long BgL_res2371z00_2921;

																	BgL_res2371z00_2921 =
																		RGC_STOP_MATCH(BgL_iportz00_1406,
																		BgL_forwardz00_1408);
																	BgL_res2371z00_2921;
																}
																BgL_newzd2matchzd2_1411 = ((long) 4);
															}
														if ((BgL_forwardz00_1408 == BgL_bufposz00_1409))
															{	/* Unsafe/ftp.scm 149 */
																if (rgc_fill_buffer(BgL_iportz00_1406))
																	{	/* Unsafe/ftp.scm 149 */
																		long BgL_arg1424z00_1414;
																		long BgL_arg1425z00_1415;

																		{	/* Unsafe/ftp.scm 149 */
																			long BgL_res2374z00_2928;

																			BgL_res2374z00_2928 =
																				RGC_BUFFER_FORWARD(BgL_iportz00_1406);
																			BgL_arg1424z00_1414 = BgL_res2374z00_2928;
																		}
																		{	/* Unsafe/ftp.scm 149 */
																			long BgL_res2375z00_2930;

																			BgL_res2375z00_2930 =
																				RGC_BUFFER_BUFPOS(BgL_iportz00_1406);
																			BgL_arg1425z00_1415 = BgL_res2375z00_2930;
																		}
																		{
																			long BgL_bufposz00_4717;
																			long BgL_forwardz00_4716;

																			BgL_forwardz00_4716 = BgL_arg1424z00_1414;
																			BgL_bufposz00_4717 = BgL_arg1425z00_1415;
																			BgL_bufposz00_1409 = BgL_bufposz00_4717;
																			BgL_forwardz00_1408 = BgL_forwardz00_4716;
																			goto
																				BgL_zc3z04anonymousza31420ze3z87_1410;
																		}
																	}
																else
																	{	/* Unsafe/ftp.scm 149 */
																		BgL_matchz00_1663 = BgL_newzd2matchzd2_1411;
																	}
															}
														else
															{	/* Unsafe/ftp.scm 149 */
																int BgL_curz00_1416;

																{	/* Unsafe/ftp.scm 149 */
																	int BgL_res2376z00_2933;

																	BgL_res2376z00_2933 =
																		RGC_BUFFER_GET_CHAR(BgL_iportz00_1406,
																		BgL_forwardz00_1408);
																	BgL_curz00_1416 = BgL_res2376z00_2933;
																}
																{	/* Unsafe/ftp.scm 149 */

																	{	/* Unsafe/ftp.scm 149 */
																		bool_t BgL_test3187z00_4719;

																		if (
																			((long) (BgL_curz00_1416) >= ((long) 48)))
																			{	/* Unsafe/ftp.scm 149 */
																				BgL_test3187z00_4719 =
																					(
																					(long) (BgL_curz00_1416) <
																					((long) 58));
																			}
																		else
																			{	/* Unsafe/ftp.scm 149 */
																				BgL_test3187z00_4719 = ((bool_t) 0);
																			}
																		if (BgL_test3187z00_4719)
																			{	/* Unsafe/ftp.scm 149 */
																				BgL_iportz00_1428 = BgL_iportz00_1406;
																				BgL_lastzd2matchzd2_1429 =
																					BgL_newzd2matchzd2_1411;
																				BgL_forwardz00_1430 =
																					(((long) 1) + BgL_forwardz00_1408);
																				BgL_bufposz00_1431 = BgL_bufposz00_1409;
																			BgL_zc3z04anonymousza31433ze3z87_1432:
																				{	/* Unsafe/ftp.scm 149 */
																					long BgL_newzd2matchzd2_1433;

																					if (rgc_buffer_bol_p
																						(BgL_iportz00_1428))
																						{	/* Unsafe/ftp.scm 149 */
																							{	/* Unsafe/ftp.scm 149 */
																								long BgL_res2385z00_2952;

																								BgL_res2385z00_2952 =
																									RGC_STOP_MATCH
																									(BgL_iportz00_1428,
																									BgL_forwardz00_1430);
																								BgL_res2385z00_2952;
																							}
																							BgL_newzd2matchzd2_1433 =
																								((long) 3);
																						}
																					else
																						{	/* Unsafe/ftp.scm 149 */
																							BgL_newzd2matchzd2_1433 =
																								BgL_lastzd2matchzd2_1429;
																						}
																					if (
																						(BgL_forwardz00_1430 ==
																							BgL_bufposz00_1431))
																						{	/* Unsafe/ftp.scm 149 */
																							if (rgc_fill_buffer
																								(BgL_iportz00_1428))
																								{	/* Unsafe/ftp.scm 149 */
																									long BgL_arg1436z00_1436;
																									long BgL_arg1437z00_1437;

																									{	/* Unsafe/ftp.scm 149 */
																										long BgL_res2388z00_2959;

																										BgL_res2388z00_2959 =
																											RGC_BUFFER_FORWARD
																											(BgL_iportz00_1428);
																										BgL_arg1436z00_1436 =
																											BgL_res2388z00_2959;
																									}
																									{	/* Unsafe/ftp.scm 149 */
																										long BgL_res2389z00_2961;

																										BgL_res2389z00_2961 =
																											RGC_BUFFER_BUFPOS
																											(BgL_iportz00_1428);
																										BgL_arg1437z00_1437 =
																											BgL_res2389z00_2961;
																									}
																									{
																										long BgL_bufposz00_4735;
																										long BgL_forwardz00_4734;

																										BgL_forwardz00_4734 =
																											BgL_arg1436z00_1436;
																										BgL_bufposz00_4735 =
																											BgL_arg1437z00_1437;
																										BgL_bufposz00_1431 =
																											BgL_bufposz00_4735;
																										BgL_forwardz00_1430 =
																											BgL_forwardz00_4734;
																										goto
																											BgL_zc3z04anonymousza31433ze3z87_1432;
																									}
																								}
																							else
																								{	/* Unsafe/ftp.scm 149 */
																									BgL_matchz00_1663 =
																										BgL_newzd2matchzd2_1433;
																								}
																						}
																					else
																						{	/* Unsafe/ftp.scm 149 */
																							int BgL_curz00_1438;

																							{	/* Unsafe/ftp.scm 149 */
																								int BgL_res2390z00_2964;

																								BgL_res2390z00_2964 =
																									RGC_BUFFER_GET_CHAR
																									(BgL_iportz00_1428,
																									BgL_forwardz00_1430);
																								BgL_curz00_1438 =
																									BgL_res2390z00_2964;
																							}
																							{	/* Unsafe/ftp.scm 149 */

																								{	/* Unsafe/ftp.scm 149 */
																									bool_t BgL_test3192z00_4737;

																									if (
																										((long) (BgL_curz00_1438) >=
																											((long) 48)))
																										{	/* Unsafe/ftp.scm 149 */
																											BgL_test3192z00_4737 =
																												(
																												(long) (BgL_curz00_1438)
																												< ((long) 58));
																										}
																									else
																										{	/* Unsafe/ftp.scm 149 */
																											BgL_test3192z00_4737 =
																												((bool_t) 0);
																										}
																									if (BgL_test3192z00_4737)
																										{	/* Unsafe/ftp.scm 149 */
																											BgL_iportz00_1369 =
																												BgL_iportz00_1428;
																											BgL_lastzd2matchzd2_1370 =
																												BgL_newzd2matchzd2_1433;
																											BgL_forwardz00_1371 =
																												(((long) 1) +
																												BgL_forwardz00_1430);
																											BgL_bufposz00_1372 =
																												BgL_bufposz00_1431;
																										BgL_zc3z04anonymousza31396ze3z87_1373:
																											{	/* Unsafe/ftp.scm 149 */
																												long
																													BgL_newzd2matchzd2_1374;
																												if (rgc_buffer_bol_p
																													(BgL_iportz00_1369))
																													{	/* Unsafe/ftp.scm 149 */
																														{	/* Unsafe/ftp.scm 149 */
																															long
																																BgL_res2344z00_2859;
																															BgL_res2344z00_2859
																																=
																																RGC_STOP_MATCH
																																(BgL_iportz00_1369,
																																BgL_forwardz00_1371);
																															BgL_res2344z00_2859;
																														}
																														BgL_newzd2matchzd2_1374
																															= ((long) 3);
																													}
																												else
																													{	/* Unsafe/ftp.scm 149 */
																														BgL_newzd2matchzd2_1374
																															=
																															BgL_lastzd2matchzd2_1370;
																													}
																												if (
																													(BgL_forwardz00_1371
																														==
																														BgL_bufposz00_1372))
																													{	/* Unsafe/ftp.scm 149 */
																														if (rgc_fill_buffer
																															(BgL_iportz00_1369))
																															{	/* Unsafe/ftp.scm 149 */
																																long
																																	BgL_arg1399z00_1377;
																																long
																																	BgL_arg1400z00_1378;
																																{	/* Unsafe/ftp.scm 149 */
																																	long
																																		BgL_res2347z00_2866;
																																	BgL_res2347z00_2866
																																		=
																																		RGC_BUFFER_FORWARD
																																		(BgL_iportz00_1369);
																																	BgL_arg1399z00_1377
																																		=
																																		BgL_res2347z00_2866;
																																}
																																{	/* Unsafe/ftp.scm 149 */
																																	long
																																		BgL_res2348z00_2868;
																																	BgL_res2348z00_2868
																																		=
																																		RGC_BUFFER_BUFPOS
																																		(BgL_iportz00_1369);
																																	BgL_arg1400z00_1378
																																		=
																																		BgL_res2348z00_2868;
																																}
																																{
																																	long
																																		BgL_bufposz00_4753;
																																	long
																																		BgL_forwardz00_4752;
																																	BgL_forwardz00_4752
																																		=
																																		BgL_arg1399z00_1377;
																																	BgL_bufposz00_4753
																																		=
																																		BgL_arg1400z00_1378;
																																	BgL_bufposz00_1372
																																		=
																																		BgL_bufposz00_4753;
																																	BgL_forwardz00_1371
																																		=
																																		BgL_forwardz00_4752;
																																	goto
																																		BgL_zc3z04anonymousza31396ze3z87_1373;
																																}
																															}
																														else
																															{	/* Unsafe/ftp.scm 149 */
																																BgL_matchz00_1663
																																	=
																																	BgL_newzd2matchzd2_1374;
																															}
																													}
																												else
																													{	/* Unsafe/ftp.scm 149 */
																														int BgL_curz00_1379;

																														{	/* Unsafe/ftp.scm 149 */
																															int
																																BgL_res2349z00_2871;
																															BgL_res2349z00_2871
																																=
																																RGC_BUFFER_GET_CHAR
																																(BgL_iportz00_1369,
																																BgL_forwardz00_1371);
																															BgL_curz00_1379 =
																																BgL_res2349z00_2871;
																														}
																														{	/* Unsafe/ftp.scm 149 */

																															if (
																																((long)
																																	(BgL_curz00_1379)
																																	==
																																	((long) 45)))
																																{	/* Unsafe/ftp.scm 149 */
																																	BgL_iportz00_1391
																																		=
																																		BgL_iportz00_1369;
																																	BgL_lastzd2matchzd2_1392
																																		=
																																		BgL_newzd2matchzd2_1374;
																																	BgL_forwardz00_1393
																																		=
																																		(((long) 1)
																																		+
																																		BgL_forwardz00_1371);
																																	BgL_bufposz00_1394
																																		=
																																		BgL_bufposz00_1372;
																																BgL_zc3z04anonymousza31411ze3z87_1395:
																																	{	/* Unsafe/ftp.scm 149 */
																																		long
																																			BgL_newzd2matchzd2_1396;
																																		if (rgc_buffer_bol_p(BgL_iportz00_1391))
																																			{	/* Unsafe/ftp.scm 149 */
																																				{	/* Unsafe/ftp.scm 149 */
																																					long
																																						BgL_res2359z00_2892;
																																					BgL_res2359z00_2892
																																						=
																																						RGC_STOP_MATCH
																																						(BgL_iportz00_1391,
																																						BgL_forwardz00_1393);
																																					BgL_res2359z00_2892;
																																				}
																																				BgL_newzd2matchzd2_1396
																																					=
																																					(
																																					(long)
																																					0);
																																			}
																																		else
																																			{	/* Unsafe/ftp.scm 149 */
																																				if (rgc_buffer_bol_p(BgL_iportz00_1391))
																																					{	/* Unsafe/ftp.scm 149 */
																																						{	/* Unsafe/ftp.scm 149 */
																																							long
																																								BgL_res2361z00_2897;
																																							BgL_res2361z00_2897
																																								=
																																								RGC_STOP_MATCH
																																								(BgL_iportz00_1391,
																																								BgL_forwardz00_1393);
																																							BgL_res2361z00_2897;
																																						}
																																						BgL_newzd2matchzd2_1396
																																							=
																																							(
																																							(long)
																																							3);
																																					}
																																				else
																																					{	/* Unsafe/ftp.scm 149 */
																																						BgL_newzd2matchzd2_1396
																																							=
																																							BgL_lastzd2matchzd2_1392;
																																					}
																																			}
																																		if (
																																			(BgL_forwardz00_1393
																																				==
																																				BgL_bufposz00_1394))
																																			{	/* Unsafe/ftp.scm 149 */
																																				if (rgc_fill_buffer(BgL_iportz00_1391))
																																					{	/* Unsafe/ftp.scm 149 */
																																						long
																																							BgL_arg1414z00_1399;
																																						long
																																							BgL_arg1415z00_1400;
																																						{	/* Unsafe/ftp.scm 149 */
																																							long
																																								BgL_res2364z00_2904;
																																							BgL_res2364z00_2904
																																								=
																																								RGC_BUFFER_FORWARD
																																								(BgL_iportz00_1391);
																																							BgL_arg1414z00_1399
																																								=
																																								BgL_res2364z00_2904;
																																						}
																																						{	/* Unsafe/ftp.scm 149 */
																																							long
																																								BgL_res2365z00_2906;
																																							BgL_res2365z00_2906
																																								=
																																								RGC_BUFFER_BUFPOS
																																								(BgL_iportz00_1391);
																																							BgL_arg1415z00_1400
																																								=
																																								BgL_res2365z00_2906;
																																						}
																																						{
																																							long
																																								BgL_bufposz00_4771;
																																							long
																																								BgL_forwardz00_4770;
																																							BgL_forwardz00_4770
																																								=
																																								BgL_arg1414z00_1399;
																																							BgL_bufposz00_4771
																																								=
																																								BgL_arg1415z00_1400;
																																							BgL_bufposz00_1394
																																								=
																																								BgL_bufposz00_4771;
																																							BgL_forwardz00_1393
																																								=
																																								BgL_forwardz00_4770;
																																							goto
																																								BgL_zc3z04anonymousza31411ze3z87_1395;
																																						}
																																					}
																																				else
																																					{	/* Unsafe/ftp.scm 149 */
																																						BgL_matchz00_1663
																																							=
																																							BgL_newzd2matchzd2_1396;
																																					}
																																			}
																																		else
																																			{	/* Unsafe/ftp.scm 149 */
																																				int
																																					BgL_curz00_1401;
																																				{	/* Unsafe/ftp.scm 149 */
																																					int
																																						BgL_res2366z00_2909;
																																					BgL_res2366z00_2909
																																						=
																																						RGC_BUFFER_GET_CHAR
																																						(BgL_iportz00_1391,
																																						BgL_forwardz00_1393);
																																					BgL_curz00_1401
																																						=
																																						BgL_res2366z00_2909;
																																				}
																																				{	/* Unsafe/ftp.scm 149 */

																																					if (
																																						((long) (BgL_curz00_1401) == ((long) 10)))
																																						{	/* Unsafe/ftp.scm 149 */
																																							BgL_matchz00_1663
																																								=
																																								BgL_newzd2matchzd2_1396;
																																						}
																																					else
																																						{
																																							long
																																								BgL_forwardz00_4777;
																																							long
																																								BgL_lastzd2matchzd2_4776;
																																							BgL_lastzd2matchzd2_4776
																																								=
																																								BgL_newzd2matchzd2_1396;
																																							BgL_forwardz00_4777
																																								=
																																								(
																																								((long) 1) + BgL_forwardz00_1393);
																																							BgL_forwardz00_1393
																																								=
																																								BgL_forwardz00_4777;
																																							BgL_lastzd2matchzd2_1392
																																								=
																																								BgL_lastzd2matchzd2_4776;
																																							goto
																																								BgL_zc3z04anonymousza31411ze3z87_1395;
																																						}
																																				}
																																			}
																																	}
																																}
																															else
																																{	/* Unsafe/ftp.scm 149 */
																																	if (
																																		((long)
																																			(BgL_curz00_1379)
																																			==
																																			((long)
																																				32)))
																																		{	/* Unsafe/ftp.scm 149 */
																																			BgL_iportz00_1450
																																				=
																																				BgL_iportz00_1369;
																																			BgL_lastzd2matchzd2_1451
																																				=
																																				BgL_newzd2matchzd2_1374;
																																			BgL_forwardz00_1452
																																				=
																																				(((long)
																																					1) +
																																				BgL_forwardz00_1371);
																																			BgL_bufposz00_1453
																																				=
																																				BgL_bufposz00_1372;
																																		BgL_zc3z04anonymousza31445ze3z87_1454:
																																			{	/* Unsafe/ftp.scm 149 */
																																				long
																																					BgL_newzd2matchzd2_1455;
																																				if (rgc_buffer_bol_p(BgL_iportz00_1450))
																																					{	/* Unsafe/ftp.scm 149 */
																																						{	/* Unsafe/ftp.scm 149 */
																																							long
																																								BgL_res2399z00_2983;
																																							BgL_res2399z00_2983
																																								=
																																								RGC_STOP_MATCH
																																								(BgL_iportz00_1450,
																																								BgL_forwardz00_1452);
																																							BgL_res2399z00_2983;
																																						}
																																						BgL_newzd2matchzd2_1455
																																							=
																																							(
																																							(long)
																																							1);
																																					}
																																				else
																																					{	/* Unsafe/ftp.scm 149 */
																																						if (rgc_buffer_bol_p(BgL_iportz00_1450))
																																							{	/* Unsafe/ftp.scm 149 */
																																								{	/* Unsafe/ftp.scm 149 */
																																									long
																																										BgL_res2401z00_2988;
																																									BgL_res2401z00_2988
																																										=
																																										RGC_STOP_MATCH
																																										(BgL_iportz00_1450,
																																										BgL_forwardz00_1452);
																																									BgL_res2401z00_2988;
																																								}
																																								BgL_newzd2matchzd2_1455
																																									=
																																									(
																																									(long)
																																									3);
																																							}
																																						else
																																							{	/* Unsafe/ftp.scm 149 */
																																								BgL_newzd2matchzd2_1455
																																									=
																																									BgL_lastzd2matchzd2_1451;
																																							}
																																					}
																																				if (
																																					(BgL_forwardz00_1452
																																						==
																																						BgL_bufposz00_1453))
																																					{	/* Unsafe/ftp.scm 149 */
																																						if (rgc_fill_buffer(BgL_iportz00_1450))
																																							{	/* Unsafe/ftp.scm 149 */
																																								long
																																									BgL_arg1448z00_1458;
																																								long
																																									BgL_arg1449z00_1459;
																																								{	/* Unsafe/ftp.scm 149 */
																																									long
																																										BgL_res2404z00_2995;
																																									BgL_res2404z00_2995
																																										=
																																										RGC_BUFFER_FORWARD
																																										(BgL_iportz00_1450);
																																									BgL_arg1448z00_1458
																																										=
																																										BgL_res2404z00_2995;
																																								}
																																								{	/* Unsafe/ftp.scm 149 */
																																									long
																																										BgL_res2405z00_2997;
																																									BgL_res2405z00_2997
																																										=
																																										RGC_BUFFER_BUFPOS
																																										(BgL_iportz00_1450);
																																									BgL_arg1449z00_1459
																																										=
																																										BgL_res2405z00_2997;
																																								}
																																								{
																																									long
																																										BgL_bufposz00_4796;
																																									long
																																										BgL_forwardz00_4795;
																																									BgL_forwardz00_4795
																																										=
																																										BgL_arg1448z00_1458;
																																									BgL_bufposz00_4796
																																										=
																																										BgL_arg1449z00_1459;
																																									BgL_bufposz00_1453
																																										=
																																										BgL_bufposz00_4796;
																																									BgL_forwardz00_1452
																																										=
																																										BgL_forwardz00_4795;
																																									goto
																																										BgL_zc3z04anonymousza31445ze3z87_1454;
																																								}
																																							}
																																						else
																																							{	/* Unsafe/ftp.scm 149 */
																																								BgL_matchz00_1663
																																									=
																																									BgL_newzd2matchzd2_1455;
																																							}
																																					}
																																				else
																																					{	/* Unsafe/ftp.scm 149 */
																																						int
																																							BgL_curz00_1460;
																																						{	/* Unsafe/ftp.scm 149 */
																																							int
																																								BgL_res2406z00_3000;
																																							BgL_res2406z00_3000
																																								=
																																								RGC_BUFFER_GET_CHAR
																																								(BgL_iportz00_1450,
																																								BgL_forwardz00_1452);
																																							BgL_curz00_1460
																																								=
																																								BgL_res2406z00_3000;
																																						}
																																						{	/* Unsafe/ftp.scm 149 */

																																							if (((long) (BgL_curz00_1460) == ((long) 10)))
																																								{	/* Unsafe/ftp.scm 149 */
																																									BgL_matchz00_1663
																																										=
																																										BgL_newzd2matchzd2_1455;
																																								}
																																							else
																																								{
																																									long
																																										BgL_forwardz00_4802;
																																									long
																																										BgL_lastzd2matchzd2_4801;
																																									BgL_lastzd2matchzd2_4801
																																										=
																																										BgL_newzd2matchzd2_1455;
																																									BgL_forwardz00_4802
																																										=
																																										(
																																										((long) 1) + BgL_forwardz00_1452);
																																									BgL_forwardz00_1452
																																										=
																																										BgL_forwardz00_4802;
																																									BgL_lastzd2matchzd2_1451
																																										=
																																										BgL_lastzd2matchzd2_4801;
																																									goto
																																										BgL_zc3z04anonymousza31445ze3z87_1454;
																																								}
																																						}
																																					}
																																			}
																																		}
																																	else
																																		{	/* Unsafe/ftp.scm 149 */
																																			bool_t
																																				BgL_test3209z00_4805;
																																			if ((
																																					(long)
																																					(BgL_curz00_1379)
																																					==
																																					((long) 10)))
																																				{	/* Unsafe/ftp.scm 149 */
																																					BgL_test3209z00_4805
																																						=
																																						(
																																						(bool_t)
																																						1);
																																				}
																																			else
																																				{	/* Unsafe/ftp.scm 149 */
																																					if (
																																						((long) (BgL_curz00_1379) == ((long) 32)))
																																						{	/* Unsafe/ftp.scm 149 */
																																							BgL_test3209z00_4805
																																								=
																																								(
																																								(bool_t)
																																								1);
																																						}
																																					else
																																						{	/* Unsafe/ftp.scm 149 */
																																							BgL_test3209z00_4805
																																								=
																																								(
																																								(long)
																																								(BgL_curz00_1379)
																																								==
																																								((long) 45));
																																				}}
																																			if (BgL_test3209z00_4805)
																																				{	/* Unsafe/ftp.scm 149 */
																																					BgL_matchz00_1663
																																						=
																																						BgL_newzd2matchzd2_1374;
																																				}
																																			else
																																				{	/* Unsafe/ftp.scm 149 */
																																					BgL_iportz00_1500
																																						=
																																						BgL_iportz00_1369;
																																					BgL_lastzd2matchzd2_1501
																																						=
																																						BgL_newzd2matchzd2_1374;
																																					BgL_forwardz00_1502
																																						=
																																						(((long) 1) + BgL_forwardz00_1371);
																																					BgL_bufposz00_1503
																																						=
																																						BgL_bufposz00_1372;
																																				BgL_zc3z04anonymousza31476ze3z87_1504:
																																					{	/* Unsafe/ftp.scm 149 */
																																						long
																																							BgL_newzd2matchzd2_1505;
																																						if (rgc_buffer_bol_p(BgL_iportz00_1500))
																																							{	/* Unsafe/ftp.scm 149 */
																																								{	/* Unsafe/ftp.scm 149 */
																																									long
																																										BgL_res2436z00_3070;
																																									BgL_res2436z00_3070
																																										=
																																										RGC_STOP_MATCH
																																										(BgL_iportz00_1500,
																																										BgL_forwardz00_1502);
																																									BgL_res2436z00_3070;
																																								}
																																								BgL_newzd2matchzd2_1505
																																									=
																																									(
																																									(long)
																																									3);
																																							}
																																						else
																																							{	/* Unsafe/ftp.scm 149 */
																																								BgL_newzd2matchzd2_1505
																																									=
																																									BgL_lastzd2matchzd2_1501;
																																							}
																																						if (
																																							(BgL_forwardz00_1502
																																								==
																																								BgL_bufposz00_1503))
																																							{	/* Unsafe/ftp.scm 149 */
																																								if (rgc_fill_buffer(BgL_iportz00_1500))
																																									{	/* Unsafe/ftp.scm 149 */
																																										long
																																											BgL_arg1479z00_1508;
																																										long
																																											BgL_arg1480z00_1509;
																																										{	/* Unsafe/ftp.scm 149 */
																																											long
																																												BgL_res2439z00_3077;
																																											BgL_res2439z00_3077
																																												=
																																												RGC_BUFFER_FORWARD
																																												(BgL_iportz00_1500);
																																											BgL_arg1479z00_1508
																																												=
																																												BgL_res2439z00_3077;
																																										}
																																										{	/* Unsafe/ftp.scm 149 */
																																											long
																																												BgL_res2440z00_3079;
																																											BgL_res2440z00_3079
																																												=
																																												RGC_BUFFER_BUFPOS
																																												(BgL_iportz00_1500);
																																											BgL_arg1480z00_1509
																																												=
																																												BgL_res2440z00_3079;
																																										}
																																										{
																																											long
																																												BgL_bufposz00_4824;
																																											long
																																												BgL_forwardz00_4823;
																																											BgL_forwardz00_4823
																																												=
																																												BgL_arg1479z00_1508;
																																											BgL_bufposz00_4824
																																												=
																																												BgL_arg1480z00_1509;
																																											BgL_bufposz00_1503
																																												=
																																												BgL_bufposz00_4824;
																																											BgL_forwardz00_1502
																																												=
																																												BgL_forwardz00_4823;
																																											goto
																																												BgL_zc3z04anonymousza31476ze3z87_1504;
																																										}
																																									}
																																								else
																																									{	/* Unsafe/ftp.scm 149 */
																																										BgL_matchz00_1663
																																											=
																																											BgL_newzd2matchzd2_1505;
																																									}
																																							}
																																						else
																																							{	/* Unsafe/ftp.scm 149 */
																																								int
																																									BgL_curz00_1510;
																																								{	/* Unsafe/ftp.scm 149 */
																																									int
																																										BgL_res2441z00_3082;
																																									BgL_res2441z00_3082
																																										=
																																										RGC_BUFFER_GET_CHAR
																																										(BgL_iportz00_1500,
																																										BgL_forwardz00_1502);
																																									BgL_curz00_1510
																																										=
																																										BgL_res2441z00_3082;
																																								}
																																								{	/* Unsafe/ftp.scm 149 */

																																									if (((long) (BgL_curz00_1510) == ((long) 10)))
																																										{	/* Unsafe/ftp.scm 149 */
																																											BgL_matchz00_1663
																																												=
																																												BgL_newzd2matchzd2_1505;
																																										}
																																									else
																																										{
																																											long
																																												BgL_forwardz00_4830;
																																											long
																																												BgL_lastzd2matchzd2_4829;
																																											BgL_lastzd2matchzd2_4829
																																												=
																																												BgL_newzd2matchzd2_1505;
																																											BgL_forwardz00_4830
																																												=
																																												(
																																												((long) 1) + BgL_forwardz00_1502);
																																											BgL_forwardz00_1502
																																												=
																																												BgL_forwardz00_4830;
																																											BgL_lastzd2matchzd2_1501
																																												=
																																												BgL_lastzd2matchzd2_4829;
																																											goto
																																												BgL_zc3z04anonymousza31476ze3z87_1504;
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
																										{	/* Unsafe/ftp.scm 149 */
																											bool_t
																												BgL_test3216z00_4834;
																											if (((long)
																													(BgL_curz00_1438) ==
																													((long) 10)))
																												{	/* Unsafe/ftp.scm 149 */
																													BgL_test3216z00_4834 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Unsafe/ftp.scm 149 */
																													if (
																														((long)
																															(BgL_curz00_1438)
																															>= ((long) 48)))
																														{	/* Unsafe/ftp.scm 149 */
																															BgL_test3216z00_4834
																																=
																																((long)
																																(BgL_curz00_1438)
																																< ((long) 58));
																														}
																													else
																														{	/* Unsafe/ftp.scm 149 */
																															BgL_test3216z00_4834
																																= ((bool_t) 0);
																														}
																												}
																											if (BgL_test3216z00_4834)
																												{	/* Unsafe/ftp.scm 149 */
																													BgL_matchz00_1663 =
																														BgL_newzd2matchzd2_1433;
																												}
																											else
																												{
																													long
																														BgL_bufposz00_4847;
																													long
																														BgL_forwardz00_4845;
																													long
																														BgL_lastzd2matchzd2_4844;
																													obj_t
																														BgL_iportz00_4843;
																													BgL_iportz00_4843 =
																														BgL_iportz00_1428;
																													BgL_lastzd2matchzd2_4844
																														=
																														BgL_newzd2matchzd2_1433;
																													BgL_forwardz00_4845 =
																														(((long) 1) +
																														BgL_forwardz00_1430);
																													BgL_bufposz00_4847 =
																														BgL_bufposz00_1431;
																													BgL_bufposz00_1503 =
																														BgL_bufposz00_4847;
																													BgL_forwardz00_1502 =
																														BgL_forwardz00_4845;
																													BgL_lastzd2matchzd2_1501
																														=
																														BgL_lastzd2matchzd2_4844;
																													BgL_iportz00_1500 =
																														BgL_iportz00_4843;
																													goto
																														BgL_zc3z04anonymousza31476ze3z87_1504;
																												}
																										}
																								}
																							}
																						}
																				}
																			}
																		else
																			{	/* Unsafe/ftp.scm 149 */
																				bool_t BgL_test3219z00_4849;

																				if (
																					((long) (BgL_curz00_1416) ==
																						((long) 10)))
																					{	/* Unsafe/ftp.scm 149 */
																						BgL_test3219z00_4849 = ((bool_t) 1);
																					}
																				else
																					{	/* Unsafe/ftp.scm 149 */
																						if (
																							((long) (BgL_curz00_1416) >=
																								((long) 48)))
																							{	/* Unsafe/ftp.scm 149 */
																								BgL_test3219z00_4849 =
																									(
																									(long) (BgL_curz00_1416) <
																									((long) 58));
																							}
																						else
																							{	/* Unsafe/ftp.scm 149 */
																								BgL_test3219z00_4849 =
																									((bool_t) 0);
																							}
																					}
																				if (BgL_test3219z00_4849)
																					{	/* Unsafe/ftp.scm 149 */
																						BgL_matchz00_1663 =
																							BgL_newzd2matchzd2_1411;
																					}
																				else
																					{
																						long BgL_bufposz00_4862;
																						long BgL_forwardz00_4860;
																						long BgL_lastzd2matchzd2_4859;
																						obj_t BgL_iportz00_4858;

																						BgL_iportz00_4858 =
																							BgL_iportz00_1406;
																						BgL_lastzd2matchzd2_4859 =
																							BgL_newzd2matchzd2_1411;
																						BgL_forwardz00_4860 =
																							(((long) 1) +
																							BgL_forwardz00_1408);
																						BgL_bufposz00_4862 =
																							BgL_bufposz00_1409;
																						BgL_bufposz00_1503 =
																							BgL_bufposz00_4862;
																						BgL_forwardz00_1502 =
																							BgL_forwardz00_4860;
																						BgL_lastzd2matchzd2_1501 =
																							BgL_lastzd2matchzd2_4859;
																						BgL_iportz00_1500 =
																							BgL_iportz00_4858;
																						goto
																							BgL_zc3z04anonymousza31476ze3z87_1504;
																					}
																			}
																	}
																}
															}
													}
												}
											else
												{	/* Unsafe/ftp.scm 149 */
													if (((long) (BgL_curz00_1475) == ((long) 32)))
														{	/* Unsafe/ftp.scm 149 */
															BgL_iportz00_1514 = BgL_iportz00_1465;
															BgL_lastzd2matchzd2_1515 =
																BgL_newzd2matchzd2_1470;
															BgL_forwardz00_1516 =
																(((long) 1) + BgL_forwardz00_1467);
															BgL_bufposz00_1517 = BgL_bufposz00_1468;
														BgL_zc3z04anonymousza31485ze3z87_1518:
															{	/* Unsafe/ftp.scm 149 */
																long BgL_newzd2matchzd2_1519;

																if (rgc_buffer_bol_p(BgL_iportz00_1514))
																	{	/* Unsafe/ftp.scm 149 */
																		{	/* Unsafe/ftp.scm 149 */
																			long BgL_res2445z00_3091;

																			BgL_res2445z00_3091 =
																				RGC_STOP_MATCH(BgL_iportz00_1514,
																				BgL_forwardz00_1516);
																			BgL_res2445z00_3091;
																		}
																		BgL_newzd2matchzd2_1519 = ((long) 2);
																	}
																else
																	{	/* Unsafe/ftp.scm 149 */
																		if (rgc_buffer_bol_p(BgL_iportz00_1514))
																			{	/* Unsafe/ftp.scm 149 */
																				{	/* Unsafe/ftp.scm 149 */
																					long BgL_res2447z00_3096;

																					BgL_res2447z00_3096 =
																						RGC_STOP_MATCH(BgL_iportz00_1514,
																						BgL_forwardz00_1516);
																					BgL_res2447z00_3096;
																				}
																				BgL_newzd2matchzd2_1519 = ((long) 3);
																			}
																		else
																			{	/* Unsafe/ftp.scm 149 */
																				{	/* Unsafe/ftp.scm 149 */
																					long BgL_res2448z00_3099;

																					BgL_res2448z00_3099 =
																						RGC_STOP_MATCH(BgL_iportz00_1514,
																						BgL_forwardz00_1516);
																					BgL_res2448z00_3099;
																				}
																				BgL_newzd2matchzd2_1519 = ((long) 4);
																	}}
																if ((BgL_forwardz00_1516 == BgL_bufposz00_1517))
																	{	/* Unsafe/ftp.scm 149 */
																		if (rgc_fill_buffer(BgL_iportz00_1514))
																			{	/* Unsafe/ftp.scm 149 */
																				long BgL_arg1489z00_1522;
																				long BgL_arg1491z00_1523;

																				{	/* Unsafe/ftp.scm 149 */
																					long BgL_res2451z00_3106;

																					BgL_res2451z00_3106 =
																						RGC_BUFFER_FORWARD
																						(BgL_iportz00_1514);
																					BgL_arg1489z00_1522 =
																						BgL_res2451z00_3106;
																				}
																				{	/* Unsafe/ftp.scm 149 */
																					long BgL_res2452z00_3108;

																					BgL_res2452z00_3108 =
																						RGC_BUFFER_BUFPOS
																						(BgL_iportz00_1514);
																					BgL_arg1491z00_1523 =
																						BgL_res2452z00_3108;
																				}
																				{
																					long BgL_bufposz00_4881;
																					long BgL_forwardz00_4880;

																					BgL_forwardz00_4880 =
																						BgL_arg1489z00_1522;
																					BgL_bufposz00_4881 =
																						BgL_arg1491z00_1523;
																					BgL_bufposz00_1517 =
																						BgL_bufposz00_4881;
																					BgL_forwardz00_1516 =
																						BgL_forwardz00_4880;
																					goto
																						BgL_zc3z04anonymousza31485ze3z87_1518;
																				}
																			}
																		else
																			{	/* Unsafe/ftp.scm 149 */
																				BgL_matchz00_1663 =
																					BgL_newzd2matchzd2_1519;
																			}
																	}
																else
																	{	/* Unsafe/ftp.scm 149 */
																		int BgL_curz00_1524;

																		{	/* Unsafe/ftp.scm 149 */
																			int BgL_res2453z00_3111;

																			BgL_res2453z00_3111 =
																				RGC_BUFFER_GET_CHAR(BgL_iportz00_1514,
																				BgL_forwardz00_1516);
																			BgL_curz00_1524 = BgL_res2453z00_3111;
																		}
																		{	/* Unsafe/ftp.scm 149 */

																			if (
																				((long) (BgL_curz00_1524) ==
																					((long) 10)))
																				{	/* Unsafe/ftp.scm 149 */
																					BgL_matchz00_1663 =
																						BgL_newzd2matchzd2_1519;
																				}
																			else
																				{	/* Unsafe/ftp.scm 149 */
																					BgL_iportz00_1534 = BgL_iportz00_1514;
																					BgL_lastzd2matchzd2_1535 =
																						BgL_newzd2matchzd2_1519;
																					BgL_forwardz00_1536 =
																						(((long) 1) + BgL_forwardz00_1516);
																					BgL_bufposz00_1537 =
																						BgL_bufposz00_1517;
																				BgL_zc3z04anonymousza31497ze3z87_1538:
																					{	/* Unsafe/ftp.scm 149 */
																						long BgL_newzd2matchzd2_1539;

																						if (rgc_buffer_bol_p
																							(BgL_iportz00_1534))
																							{	/* Unsafe/ftp.scm 149 */
																								{	/* Unsafe/ftp.scm 149 */
																									long BgL_res2457z00_3120;

																									BgL_res2457z00_3120 =
																										RGC_STOP_MATCH
																										(BgL_iportz00_1534,
																										BgL_forwardz00_1536);
																									BgL_res2457z00_3120;
																								}
																								BgL_newzd2matchzd2_1539 =
																									((long) 2);
																							}
																						else
																							{	/* Unsafe/ftp.scm 149 */
																								if (rgc_buffer_bol_p
																									(BgL_iportz00_1534))
																									{	/* Unsafe/ftp.scm 149 */
																										{	/* Unsafe/ftp.scm 149 */
																											long BgL_res2459z00_3125;

																											BgL_res2459z00_3125 =
																												RGC_STOP_MATCH
																												(BgL_iportz00_1534,
																												BgL_forwardz00_1536);
																											BgL_res2459z00_3125;
																										}
																										BgL_newzd2matchzd2_1539 =
																											((long) 3);
																									}
																								else
																									{	/* Unsafe/ftp.scm 149 */
																										BgL_newzd2matchzd2_1539 =
																											BgL_lastzd2matchzd2_1535;
																									}
																							}
																						if (
																							(BgL_forwardz00_1536 ==
																								BgL_bufposz00_1537))
																							{	/* Unsafe/ftp.scm 149 */
																								if (rgc_fill_buffer
																									(BgL_iportz00_1534))
																									{	/* Unsafe/ftp.scm 149 */
																										long BgL_arg1500z00_1542;
																										long BgL_arg1502z00_1543;

																										{	/* Unsafe/ftp.scm 149 */
																											long BgL_res2462z00_3132;

																											BgL_res2462z00_3132 =
																												RGC_BUFFER_FORWARD
																												(BgL_iportz00_1534);
																											BgL_arg1500z00_1542 =
																												BgL_res2462z00_3132;
																										}
																										{	/* Unsafe/ftp.scm 149 */
																											long BgL_res2463z00_3134;

																											BgL_res2463z00_3134 =
																												RGC_BUFFER_BUFPOS
																												(BgL_iportz00_1534);
																											BgL_arg1502z00_1543 =
																												BgL_res2463z00_3134;
																										}
																										{
																											long BgL_bufposz00_4899;
																											long BgL_forwardz00_4898;

																											BgL_forwardz00_4898 =
																												BgL_arg1500z00_1542;
																											BgL_bufposz00_4899 =
																												BgL_arg1502z00_1543;
																											BgL_bufposz00_1537 =
																												BgL_bufposz00_4899;
																											BgL_forwardz00_1536 =
																												BgL_forwardz00_4898;
																											goto
																												BgL_zc3z04anonymousza31497ze3z87_1538;
																										}
																									}
																								else
																									{	/* Unsafe/ftp.scm 149 */
																										BgL_matchz00_1663 =
																											BgL_newzd2matchzd2_1539;
																									}
																							}
																						else
																							{	/* Unsafe/ftp.scm 149 */
																								int BgL_curz00_1544;

																								{	/* Unsafe/ftp.scm 149 */
																									int BgL_res2464z00_3137;

																									BgL_res2464z00_3137 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_iportz00_1534,
																										BgL_forwardz00_1536);
																									BgL_curz00_1544 =
																										BgL_res2464z00_3137;
																								}
																								{	/* Unsafe/ftp.scm 149 */

																									if (
																										((long) (BgL_curz00_1544) ==
																											((long) 10)))
																										{	/* Unsafe/ftp.scm 149 */
																											BgL_matchz00_1663 =
																												BgL_newzd2matchzd2_1539;
																										}
																									else
																										{
																											long BgL_forwardz00_4905;
																											long
																												BgL_lastzd2matchzd2_4904;
																											BgL_lastzd2matchzd2_4904 =
																												BgL_newzd2matchzd2_1539;
																											BgL_forwardz00_4905 =
																												(((long) 1) +
																												BgL_forwardz00_1536);
																											BgL_forwardz00_1536 =
																												BgL_forwardz00_4905;
																											BgL_lastzd2matchzd2_1535 =
																												BgL_lastzd2matchzd2_4904;
																											goto
																												BgL_zc3z04anonymousza31497ze3z87_1538;
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
														{	/* Unsafe/ftp.scm 149 */
															if (((long) (BgL_curz00_1475) == ((long) 10)))
																{	/* Unsafe/ftp.scm 149 */
																	long BgL_arg1465z00_1482;

																	BgL_arg1465z00_1482 =
																		(((long) 1) + BgL_forwardz00_1467);
																	{	/* Unsafe/ftp.scm 149 */
																		long BgL_newzd2matchzd2_3036;

																		{	/* Unsafe/ftp.scm 149 */
																			long BgL_res2423z00_3039;

																			BgL_res2423z00_3039 =
																				RGC_STOP_MATCH(BgL_iportz00_1465,
																				BgL_arg1465z00_1482);
																			BgL_res2423z00_3039;
																		}
																		BgL_newzd2matchzd2_3036 = ((long) 4);
																		BgL_matchz00_1663 = BgL_newzd2matchzd2_3036;
																}}
															else
																{	/* Unsafe/ftp.scm 149 */
																	BgL_iportz00_1486 = BgL_iportz00_1465;
																	BgL_lastzd2matchzd2_1487 =
																		BgL_newzd2matchzd2_1470;
																	BgL_forwardz00_1488 =
																		(((long) 1) + BgL_forwardz00_1467);
																	BgL_bufposz00_1489 = BgL_bufposz00_1468;
																BgL_zc3z04anonymousza31468ze3z87_1490:
																	{	/* Unsafe/ftp.scm 149 */
																		long BgL_newzd2matchzd2_1491;

																		if (rgc_buffer_bol_p(BgL_iportz00_1486))
																			{	/* Unsafe/ftp.scm 149 */
																				{	/* Unsafe/ftp.scm 149 */
																					long BgL_res2426z00_3046;

																					BgL_res2426z00_3046 =
																						RGC_STOP_MATCH(BgL_iportz00_1486,
																						BgL_forwardz00_1488);
																					BgL_res2426z00_3046;
																				}
																				BgL_newzd2matchzd2_1491 = ((long) 3);
																			}
																		else
																			{	/* Unsafe/ftp.scm 149 */
																				{	/* Unsafe/ftp.scm 149 */
																					long BgL_res2427z00_3049;

																					BgL_res2427z00_3049 =
																						RGC_STOP_MATCH(BgL_iportz00_1486,
																						BgL_forwardz00_1488);
																					BgL_res2427z00_3049;
																				}
																				BgL_newzd2matchzd2_1491 = ((long) 4);
																			}
																		if (
																			(BgL_forwardz00_1488 ==
																				BgL_bufposz00_1489))
																			{	/* Unsafe/ftp.scm 149 */
																				if (rgc_fill_buffer(BgL_iportz00_1486))
																					{	/* Unsafe/ftp.scm 149 */
																						long BgL_arg1471z00_1494;
																						long BgL_arg1472z00_1495;

																						{	/* Unsafe/ftp.scm 149 */
																							long BgL_res2430z00_3056;

																							BgL_res2430z00_3056 =
																								RGC_BUFFER_FORWARD
																								(BgL_iportz00_1486);
																							BgL_arg1471z00_1494 =
																								BgL_res2430z00_3056;
																						}
																						{	/* Unsafe/ftp.scm 149 */
																							long BgL_res2431z00_3058;

																							BgL_res2431z00_3058 =
																								RGC_BUFFER_BUFPOS
																								(BgL_iportz00_1486);
																							BgL_arg1472z00_1495 =
																								BgL_res2431z00_3058;
																						}
																						{
																							long BgL_bufposz00_4925;
																							long BgL_forwardz00_4924;

																							BgL_forwardz00_4924 =
																								BgL_arg1471z00_1494;
																							BgL_bufposz00_4925 =
																								BgL_arg1472z00_1495;
																							BgL_bufposz00_1489 =
																								BgL_bufposz00_4925;
																							BgL_forwardz00_1488 =
																								BgL_forwardz00_4924;
																							goto
																								BgL_zc3z04anonymousza31468ze3z87_1490;
																						}
																					}
																				else
																					{	/* Unsafe/ftp.scm 149 */
																						BgL_matchz00_1663 =
																							BgL_newzd2matchzd2_1491;
																					}
																			}
																		else
																			{	/* Unsafe/ftp.scm 149 */
																				int BgL_curz00_1496;

																				{	/* Unsafe/ftp.scm 149 */
																					int BgL_res2432z00_3061;

																					BgL_res2432z00_3061 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_iportz00_1486,
																						BgL_forwardz00_1488);
																					BgL_curz00_1496 = BgL_res2432z00_3061;
																				}
																				{	/* Unsafe/ftp.scm 149 */

																					if (
																						((long) (BgL_curz00_1496) ==
																							((long) 10)))
																						{	/* Unsafe/ftp.scm 149 */
																							BgL_matchz00_1663 =
																								BgL_newzd2matchzd2_1491;
																						}
																					else
																						{
																							long BgL_bufposz00_4934;
																							long BgL_forwardz00_4932;
																							long BgL_lastzd2matchzd2_4931;
																							obj_t BgL_iportz00_4930;

																							BgL_iportz00_4930 =
																								BgL_iportz00_1486;
																							BgL_lastzd2matchzd2_4931 =
																								BgL_newzd2matchzd2_1491;
																							BgL_forwardz00_4932 =
																								(((long) 1) +
																								BgL_forwardz00_1488);
																							BgL_bufposz00_4934 =
																								BgL_bufposz00_1489;
																							BgL_bufposz00_1503 =
																								BgL_bufposz00_4934;
																							BgL_forwardz00_1502 =
																								BgL_forwardz00_4932;
																							BgL_lastzd2matchzd2_1501 =
																								BgL_lastzd2matchzd2_4931;
																							BgL_iportz00_1500 =
																								BgL_iportz00_4930;
																							goto
																								BgL_zc3z04anonymousza31476ze3z87_1504;
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
					RGC_SET_FILEPOS(BgL_iportz00_4308);
					{

						{	/* Unsafe/ftp.scm 149 */
							obj_t BgL_aux1221z00_1668;

							BgL_aux1221z00_1668 = BINT(BgL_matchz00_1663);
							switch ((long) CINT(BgL_aux1221z00_1668))
								{
								case ((long) 4):

									{	/* Unsafe/ftp.scm 166 */
										BgL_z62ftpzd2parsezd2errorz62_bglt BgL_arg1605z00_1670;

										{	/* Unsafe/ftp.scm 166 */
											BgL_z62ftpzd2parsezd2errorz62_bglt BgL_new1099z00_1671;

											{	/* Unsafe/ftp.scm 169 */
												BgL_z62ftpzd2parsezd2errorz62_bglt BgL_new1098z00_1674;

												BgL_new1098z00_1674 =
													((BgL_z62ftpzd2parsezd2errorz62_bglt)
													BOBJECT(GC_MALLOC(sizeof(struct
																BgL_z62ftpzd2parsezd2errorz62_bgl))));
												{	/* Unsafe/ftp.scm 169 */
													long BgL_arg1608z00_1675;

													{	/* Unsafe/ftp.scm 169 */
														long BgL_res2484z00_3187;

														BgL_res2484z00_3187 =
															BGL_CLASS_INDEX
															(BGl_z62ftpzd2parsezd2errorz62zz__ftpz00);
														BgL_arg1608z00_1675 = BgL_res2484z00_3187;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1098z00_1674),
														BgL_arg1608z00_1675);
												}
												BgL_new1099z00_1671 = BgL_new1098z00_1674;
											}
											((((BgL_z62exceptionz62_bglt) COBJECT(
															((BgL_z62exceptionz62_bglt)
																BgL_new1099z00_1671)))->BgL_fnamez00) =
												((obj_t) BFALSE), BUNSPEC);
											((((BgL_z62exceptionz62_bglt)
														COBJECT(((BgL_z62exceptionz62_bglt)
																BgL_new1099z00_1671)))->BgL_locationz00) =
												((obj_t) BFALSE), BUNSPEC);
											{
												obj_t BgL_auxz00_4946;

												{	/* Unsafe/ftp.scm 169 */
													obj_t BgL_arg1606z00_1672;

													{	/* Unsafe/ftp.scm 169 */
														obj_t BgL_arg1607z00_1673;

														{	/* Unsafe/ftp.scm 169 */
															obj_t BgL_res2485z00_3191;

															{	/* Unsafe/ftp.scm 169 */
																obj_t BgL_classz00_3190;

																BgL_classz00_3190 =
																	BGl_z62ftpzd2parsezd2errorz62zz__ftpz00;
																BgL_res2485z00_3191 =
																	BGL_CLASS_ALL_FIELDS(BgL_classz00_3190);
															}
															BgL_arg1607z00_1673 = BgL_res2485z00_3191;
														}
														BgL_arg1606z00_1672 =
															VECTOR_REF(BgL_arg1607z00_1673, ((long) 2));
													}
													BgL_auxz00_4946 =
														BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
														(BgL_arg1606z00_1672);
												}
												((((BgL_z62exceptionz62_bglt) COBJECT(
																((BgL_z62exceptionz62_bglt)
																	BgL_new1099z00_1671)))->BgL_stackz00) =
													((obj_t) BgL_auxz00_4946), BUNSPEC);
											}
											((((BgL_z62errorz62_bglt) COBJECT(
															((BgL_z62errorz62_bglt) BgL_new1099z00_1671)))->
													BgL_procz00) =
												((obj_t) BGl_string2784z00zz__ftpz00), BUNSPEC);
											((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
																BgL_new1099z00_1671)))->BgL_msgz00) =
												((obj_t) BGl_string2785z00zz__ftpz00), BUNSPEC);
											((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
																BgL_new1099z00_1671)))->BgL_objz00) =
												((obj_t) BgL_msgz00_4309), BUNSPEC);
											BgL_arg1605z00_1670 = BgL_new1099z00_1671;
										}
										return
											BGl_raisez00zz__errorz00(((obj_t) BgL_arg1605z00_1670));
									}
									break;
								case ((long) 3):

									{	/* Unsafe/ftp.scm 163 */
										obj_t BgL_auxz00_4313;

										{	/* Unsafe/ftp.scm 163 */
											obj_t BgL_arg1611z00_1676;

											{	/* Unsafe/ftp.scm 163 */
												obj_t BgL_res2488z00_3199;

												{	/* Unsafe/ftp.scm 149 */
													long BgL_arg1513z00_3193;

													{	/* Unsafe/ftp.scm 149 */
														long BgL_res2486z00_3195;

														BgL_res2486z00_3195 =
															RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_4308);
														BgL_arg1513z00_3193 = BgL_res2486z00_3195;
													}
													BgL_res2488z00_3199 =
														rgc_buffer_substring(BgL_iportz00_4308, ((long) 0),
														BgL_arg1513z00_3193);
												}
												BgL_arg1611z00_1676 = BgL_res2488z00_3199;
											}
											BgL_auxz00_4313 =
												string_append_3(CELL_REF(BgL_mesgz00_4310),
												BGl_string2786z00zz__ftpz00, BgL_arg1611z00_1676);
										}
										CELL_SET(BgL_mesgz00_4310, BgL_auxz00_4313);
									}
									{	/* Unsafe/ftp.scm 164 */
										obj_t BgL_arg1612z00_1677;

										BgL_arg1612z00_1677 =
											BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_4311);
										return
											BGl_loopze70ze7zz__ftpz00(BgL_codez00_4312,
											BgL_ipz00_4311, BgL_mesgz00_4310, BgL_arg1612z00_1677);
									}
									break;
								case ((long) 2):

									{	/* Unsafe/ftp.scm 160 */
										obj_t BgL_auxz00_4314;

										{	/* Unsafe/ftp.scm 160 */
											obj_t BgL_arg1613z00_1678;

											{	/* Unsafe/ftp.scm 160 */
												long BgL_arg1614z00_1679;

												{	/* Unsafe/ftp.scm 149 */
													long BgL_res2489z00_3201;

													BgL_res2489z00_3201 =
														RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_4308);
													BgL_arg1614z00_1679 = BgL_res2489z00_3201;
												}
												BgL_arg1613z00_1678 =
													BGl_thezd2substringze70z35zz__ftpz00
													(BgL_iportz00_4308, (int) (((long) 1)),
													(int) (BgL_arg1614z00_1679));
											}
											BgL_auxz00_4314 =
												string_append_3(CELL_REF(BgL_mesgz00_4310),
												BGl_string2786z00zz__ftpz00, BgL_arg1613z00_1678);
										}
										CELL_SET(BgL_mesgz00_4310, BgL_auxz00_4314);
									}
									{	/* Unsafe/ftp.scm 161 */
										obj_t BgL_arg1615z00_1680;

										BgL_arg1615z00_1680 =
											BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_4311);
										return
											BGl_loopze70ze7zz__ftpz00(BgL_codez00_4312,
											BgL_ipz00_4311, BgL_mesgz00_4310, BgL_arg1615z00_1680);
									}
									break;
								case ((long) 1):

									{	/* Unsafe/ftp.scm 154 */
										obj_t BgL_code1z00_1681;
										obj_t BgL_mesg1z00_1682;

										{	/* Unsafe/ftp.scm 154 */
											obj_t BgL_arg1618z00_1685;

											BgL_arg1618z00_1685 =
												BGl_thezd2substringze70z35zz__ftpz00(BgL_iportz00_4308,
												(int) (((long) 0)), (int) (((long) 3)));
											{	/* Ieee/number.scm 165 */

												BgL_code1z00_1681 =
													BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
													(BgL_arg1618z00_1685, BINT(((long) 10)));
										}}
										{	/* Unsafe/ftp.scm 155 */
											long BgL_arg1620z00_1688;

											{	/* Unsafe/ftp.scm 149 */
												long BgL_res2490z00_3203;

												BgL_res2490z00_3203 =
													RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_4308);
												BgL_arg1620z00_1688 = BgL_res2490z00_3203;
											}
											BgL_mesg1z00_1682 =
												BGl_thezd2substringze70z35zz__ftpz00(BgL_iportz00_4308,
												(int) (((long) 4)), (int) (BgL_arg1620z00_1688));
										}
										{	/* Unsafe/ftp.scm 156 */
											obj_t BgL_auxz00_4315;

											BgL_auxz00_4315 =
												string_append_3(CELL_REF(BgL_mesgz00_4310),
												BGl_string2786z00zz__ftpz00, BgL_mesg1z00_1682);
											CELL_SET(BgL_mesgz00_4310, BgL_auxz00_4315);
										}
										if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_codez00_4312,
												BgL_code1z00_1681))
											{	/* Unsafe/ftp.scm 157 */
												return BFALSE;
											}
										else
											{	/* Unsafe/ftp.scm 158 */
												obj_t BgL_arg1617z00_1684;

												BgL_arg1617z00_1684 =
													BGl_readzd2linezd2zz__r4_input_6_10_2z00
													(BgL_ipz00_4311);
												return BGl_loopze70ze7zz__ftpz00(BgL_codez00_4312,
													BgL_ipz00_4311, BgL_mesgz00_4310,
													BgL_arg1617z00_1684);
											}
									}
									break;
								case ((long) 0):

									{	/* Unsafe/ftp.scm 151 */
										obj_t BgL_auxz00_4316;

										{	/* Unsafe/ftp.scm 151 */
											obj_t BgL_arg1621z00_1689;

											{	/* Unsafe/ftp.scm 151 */
												long BgL_arg1623z00_1690;

												{	/* Unsafe/ftp.scm 149 */
													long BgL_res2491z00_3205;

													BgL_res2491z00_3205 =
														RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_4308);
													BgL_arg1623z00_1690 = BgL_res2491z00_3205;
												}
												BgL_arg1621z00_1689 =
													BGl_thezd2substringze70z35zz__ftpz00
													(BgL_iportz00_4308, (int) (((long) 4)),
													(int) (BgL_arg1623z00_1690));
											}
											BgL_auxz00_4316 =
												string_append_3(CELL_REF(BgL_mesgz00_4310),
												BGl_string2786z00zz__ftpz00, BgL_arg1621z00_1689);
										}
										CELL_SET(BgL_mesgz00_4310, BgL_auxz00_4316);
									}
									{	/* Unsafe/ftp.scm 152 */
										obj_t BgL_arg1624z00_1691;

										BgL_arg1624z00_1691 =
											BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_4311);
										return
											BGl_loopze70ze7zz__ftpz00(BgL_codez00_4312,
											BgL_ipz00_4311, BgL_mesgz00_4310, BgL_arg1624z00_1691);
									}
									break;
								default:
									return
										BGl_errorz00zz__errorz00(BGl_string2782z00zz__ftpz00,
										BGl_string2783z00zz__ftpz00, BINT(BgL_matchz00_1663));
								}
						}
					}
				}
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__ftpz00(obj_t BgL_codez00_4319, obj_t BgL_ipz00_4318,
		obj_t BgL_mesgz00_4317, obj_t BgL_msgz00_1316)
	{
		{	/* Unsafe/ftp.scm 147 */
			{	/* Unsafe/ftp.scm 148 */
				bool_t BgL_test3239z00_4997;

				{	/* Unsafe/ftp.scm 148 */
					bool_t BgL_res2340z00_2847;

					BgL_res2340z00_2847 = EOF_OBJECTP(BgL_msgz00_1316);
					BgL_test3239z00_4997 = BgL_res2340z00_2847;
				}
				if (BgL_test3239z00_4997)
					{	/* Unsafe/ftp.scm 148 */
						return BFALSE;
					}
				else
					{	/* Unsafe/ftp.scm 149 */
						obj_t BgL_port1077z00_1319;

						{	/* Ieee/port.scm 442 */
							long BgL_endz00_1736;

							BgL_endz00_1736 = STRING_LENGTH(((obj_t) BgL_msgz00_1316));
							{	/* Ieee/port.scm 442 */

								BgL_port1077z00_1319 =
									BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
									(BgL_msgz00_1316, BINT(((long) 0)), BINT(BgL_endz00_1736));
						}}
						{	/* Unsafe/ftp.scm 149 */
							obj_t BgL_exitd1078z00_1320;

							BgL_exitd1078z00_1320 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Unsafe/ftp.scm 149 */
								obj_t BgL_zc3z04anonymousza31628ze3z87_4053;

								BgL_zc3z04anonymousza31628ze3z87_4053 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31628ze3ze5zz__ftpz00,
									(int) (((long) 0)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31628ze3z87_4053,
									(int) (((long) 0)), BgL_port1077z00_1319);
								BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
									(BgL_exitd1078z00_1320,
									BgL_zc3z04anonymousza31628ze3z87_4053);
								{	/* Unsafe/ftp.scm 149 */
									obj_t BgL_tmp1080z00_1322;

									BgL_tmp1080z00_1322 =
										BGl_ignoreze70ze7zz__ftpz00(BgL_codez00_4319,
										BgL_ipz00_4318, BgL_mesgz00_4317, BgL_msgz00_1316,
										BgL_port1077z00_1319);
									BGl_exitdzd2popzd2protectz12z12zz__bexitz00
										(BgL_exitd1078z00_1320);
									bgl_close_input_port(BgL_port1077z00_1319);
									return BgL_tmp1080z00_1322;
								}
							}
						}
					}
			}
		}

	}



/* &<@anonymous:1628> */
	obj_t BGl_z62zc3z04anonymousza31628ze3ze5zz__ftpz00(obj_t BgL_envz00_4054)
	{
		{	/* Unsafe/ftp.scm 149 */
			{	/* Unsafe/ftp.scm 149 */
				obj_t BgL_port1077z00_4055;

				BgL_port1077z00_4055 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4054, (int) (((long) 0))));
				return bgl_close_input_port(BgL_port1077z00_4055);
			}
		}

	}



/* %ftp-read-dtp */
	obj_t BGl_z52ftpzd2readzd2dtpz52zz__ftpz00(obj_t BgL_ftpz00_9,
		obj_t BgL_whatz00_10)
	{
		{	/* Unsafe/ftp.scm 175 */
			{	/* Unsafe/ftp.scm 177 */
				obj_t BgL_ipz00_1749;

				{	/* Unsafe/ftp.scm 177 */
					obj_t BgL_arg1642z00_1759;

					BgL_arg1642z00_1759 =
						(((BgL_z52ftpz52_bglt) COBJECT(
								((BgL_z52ftpz52_bglt) BgL_ftpz00_9)))->BgL_dtpz00);
					{	/* Unsafe/ftp.scm 177 */
						obj_t BgL_res2493z00_3209;

						{	/* Unsafe/ftp.scm 177 */
							obj_t BgL_tmpz00_5020;

							BgL_tmpz00_5020 = ((obj_t) BgL_arg1642z00_1759);
							BgL_res2493z00_3209 = SOCKET_INPUT(BgL_tmpz00_5020);
						}
						BgL_ipz00_1749 = BgL_res2493z00_3209;
					}
				}
				if ((BgL_whatz00_10 == BGl_symbol2787z00zz__ftpz00))
					{	/* Unsafe/ftp.scm 178 */
						return BGl_readzd2lineszd2zz__r4_input_6_10_2z00(BgL_ipz00_1749);
					}
				else
					{	/* Unsafe/ftp.scm 178 */
						if ((BgL_whatz00_10 == BGl_symbol2789z00zz__ftpz00))
							{	/* Unsafe/ftp.scm 178 */
								return BgL_ipz00_1749;
							}
						else
							{	/* Unsafe/ftp.scm 185 */
								BgL_z62ftpzd2errorzb0_bglt BgL_arg1637z00_1753;

								{	/* Unsafe/ftp.scm 185 */
									BgL_z62ftpzd2errorzb0_bglt BgL_new1103z00_1754;

									{	/* Unsafe/ftp.scm 185 */
										BgL_z62ftpzd2errorzb0_bglt BgL_new1102z00_1757;

										BgL_new1102z00_1757 =
											((BgL_z62ftpzd2errorzb0_bglt)
											BOBJECT(GC_MALLOC(sizeof(struct
														BgL_z62ftpzd2errorzb0_bgl))));
										{	/* Unsafe/ftp.scm 185 */
											long BgL_arg1641z00_1758;

											{	/* Unsafe/ftp.scm 185 */
												long BgL_res2496z00_3215;

												BgL_res2496z00_3215 =
													BGL_CLASS_INDEX(BGl_z62ftpzd2errorzb0zz__ftpz00);
												BgL_arg1641z00_1758 = BgL_res2496z00_3215;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1102z00_1757),
												BgL_arg1641z00_1758);
										}
										BgL_new1103z00_1754 = BgL_new1102z00_1757;
									}
									((((BgL_z62exceptionz62_bglt) COBJECT(
													((BgL_z62exceptionz62_bglt) BgL_new1103z00_1754)))->
											BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
									((((BgL_z62exceptionz62_bglt)
												COBJECT(((BgL_z62exceptionz62_bglt)
														BgL_new1103z00_1754)))->BgL_locationz00) =
										((obj_t) BFALSE), BUNSPEC);
									{
										obj_t BgL_auxz00_5036;

										{	/* Unsafe/ftp.scm 185 */
											obj_t BgL_arg1639z00_1755;

											{	/* Unsafe/ftp.scm 185 */
												obj_t BgL_arg1640z00_1756;

												{	/* Unsafe/ftp.scm 185 */
													obj_t BgL_res2497z00_3219;

													{	/* Unsafe/ftp.scm 185 */
														obj_t BgL_classz00_3218;

														BgL_classz00_3218 = BGl_z62ftpzd2errorzb0zz__ftpz00;
														BgL_res2497z00_3219 =
															BGL_CLASS_ALL_FIELDS(BgL_classz00_3218);
													}
													BgL_arg1640z00_1756 = BgL_res2497z00_3219;
												}
												BgL_arg1639z00_1755 =
													VECTOR_REF(BgL_arg1640z00_1756, ((long) 2));
											}
											BgL_auxz00_5036 =
												BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
												(BgL_arg1639z00_1755);
										}
										((((BgL_z62exceptionz62_bglt) COBJECT(
														((BgL_z62exceptionz62_bglt) BgL_new1103z00_1754)))->
												BgL_stackz00) = ((obj_t) BgL_auxz00_5036), BUNSPEC);
									}
									((((BgL_z62errorz62_bglt) COBJECT(
													((BgL_z62errorz62_bglt) BgL_new1103z00_1754)))->
											BgL_procz00) =
										((obj_t) BGl_string2791z00zz__ftpz00), BUNSPEC);
									((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
														BgL_new1103z00_1754)))->BgL_msgz00) =
										((obj_t) BGl_string2792z00zz__ftpz00), BUNSPEC);
									((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
														BgL_new1103z00_1754)))->BgL_objz00) =
										((obj_t) BgL_whatz00_10), BUNSPEC);
									BgL_arg1637z00_1753 = BgL_new1103z00_1754;
								}
								return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1637z00_1753));
							}
					}
			}
		}

	}



/* %ftp-engine-cmd */
	obj_t BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(obj_t BgL_ftpz00_11,
		obj_t BgL_cmdz00_12, obj_t BgL_cmdsz00_13)
	{
		{	/* Unsafe/ftp.scm 193 */
			{	/* Unsafe/ftp.scm 195 */
				bool_t BgL_test3242z00_5050;

				{	/* Unsafe/ftp.scm 195 */
					obj_t BgL_arg1645z00_1763;

					BgL_arg1645z00_1763 =
						(((BgL_z52ftpz52_bglt) COBJECT(
								((BgL_z52ftpz52_bglt)
									((BgL_ftpz00_bglt) BgL_ftpz00_11))))->BgL_cmdz00);
					BgL_test3242z00_5050 = SOCKETP(BgL_arg1645z00_1763);
				}
				if (BgL_test3242z00_5050)
					{	/* Unsafe/ftp.scm 195 */
						BFALSE;
					}
				else
					{	/* Unsafe/ftp.scm 195 */
						BGl_errorz00zz__errorz00(BGl_string2793z00zz__ftpz00,
							BGl_string2794z00zz__ftpz00, BgL_cmdz00_12);
					}
			}
			if (CBOOL(BgL_cmdz00_12))
				{	/* Unsafe/ftp.scm 197 */
					obj_t BgL_runner1650z00_1767;

					{	/* Unsafe/ftp.scm 197 */
						obj_t BgL_list1646z00_1764;

						{	/* Unsafe/ftp.scm 197 */
							obj_t BgL_arg1648z00_1765;

							BgL_arg1648z00_1765 = MAKE_YOUNG_PAIR(BgL_cmdsz00_13, BNIL);
							BgL_list1646z00_1764 =
								MAKE_YOUNG_PAIR(BgL_cmdz00_12, BgL_arg1648z00_1765);
						}
						BgL_runner1650z00_1767 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_ftpz00_11,
							BgL_list1646z00_1764);
					}
					{	/* Unsafe/ftp.scm 197 */
						obj_t BgL_aux1649z00_1766;

						BgL_aux1649z00_1766 = CAR(BgL_runner1650z00_1767);
						BgL_runner1650z00_1767 = CDR(BgL_runner1650z00_1767);
						{	/* Unsafe/ftp.scm 197 */
							obj_t BgL_msgsz00_3224;

							BgL_msgsz00_3224 = BgL_runner1650z00_1767;
							{	/* Unsafe/ftp.scm 130 */
								obj_t BgL_opz00_3226;

								{	/* Unsafe/ftp.scm 130 */
									obj_t BgL_arg1391z00_3227;

									BgL_arg1391z00_3227 =
										(((BgL_z52ftpz52_bglt) COBJECT(
												((BgL_z52ftpz52_bglt) BgL_aux1649z00_1766)))->
										BgL_cmdz00);
									{	/* Unsafe/ftp.scm 130 */
										obj_t BgL_res2499z00_3230;

										{	/* Unsafe/ftp.scm 130 */
											obj_t BgL_tmpz00_5065;

											BgL_tmpz00_5065 = ((obj_t) BgL_arg1391z00_3227);
											BgL_res2499z00_3230 = SOCKET_OUTPUT(BgL_tmpz00_5065);
										}
										BgL_opz00_3226 = BgL_res2499z00_3230;
									}
								}
								{	/* Unsafe/ftp.scm 131 */
									obj_t BgL_list1390z00_3228;

									BgL_list1390z00_3228 =
										MAKE_YOUNG_PAIR(BgL_msgsz00_3224, BNIL);
									BGl_fprintfz00zz__r4_output_6_10_3z00(BgL_opz00_3226,
										BGl_string2795z00zz__ftpz00, BgL_list1390z00_3228);
								}
								bgl_flush_output_port(BgL_opz00_3226);
							}
						}
					}
				}
			else
				{	/* Unsafe/ftp.scm 197 */
					BFALSE;
				}
			{	/* Unsafe/ftp.scm 198 */
				obj_t BgL_codez00_1768;

				BgL_codez00_1768 = BGl_z52ftpzd2readzd2cmdz52zz__ftpz00(BgL_ftpz00_11);
				{	/* Unsafe/ftp.scm 199 */
					obj_t BgL_mesgz00_1769;

					{	/* Unsafe/ftp.scm 200 */
						int BgL_tmpz00_5072;

						BgL_tmpz00_5072 = (int) (((long) 1));
						BgL_mesgz00_1769 = BGL_MVALUES_VAL(BgL_tmpz00_5072);
					}
					return
						BGl_zc3z04exitza31651ze3ze70z60zz__ftpz00(BgL_cmdsz00_13,
						BgL_mesgz00_1769, BgL_cmdz00_12, BgL_codez00_1768, BgL_ftpz00_11);
				}
			}
		}

	}



/* <@exit:1651>~0 */
	obj_t BGl_zc3z04exitza31651ze3ze70z60zz__ftpz00(obj_t BgL_cmdsz00_4306,
		obj_t BgL_mesgz00_4305, obj_t BgL_cmdz00_4304, obj_t BgL_codez00_4303,
		obj_t BgL_ftpz00_4302)
	{
		{	/* Unsafe/ftp.scm 200 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1108z00_1771;

			if (SET_EXIT(BgL_an_exit1108z00_1771))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1108z00_1771 = (void *) jmpbuf;
					{	/* Unsafe/ftp.scm 200 */

						PUSH_EXIT(BgL_an_exit1108z00_1771, ((long) 1));
						{	/* Unsafe/ftp.scm 200 */
							obj_t BgL_an_exitd1109z00_1772;

							BgL_an_exitd1109z00_1772 = ((obj_t) (&exitd));
							{	/* Unsafe/ftp.scm 200 */
								obj_t BgL_res1111z00_1775;

								if (INTEGERP(BgL_codez00_4303))
									{	/* Unsafe/ftp.scm 205 */
										switch ((long) CINT(BgL_codez00_4303))
											{
											case ((long) 110):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 120):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 125):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 150):

												{	/* Unsafe/ftp.scm 223 */
													obj_t BgL_resz00_1781;

													{	/* Unsafe/ftp.scm 225 */
														obj_t BgL_arg1654z00_1783;

														{	/* Unsafe/ftp.scm 225 */
															bool_t BgL_test3245z00_5081;

															{	/* Unsafe/ftp.scm 225 */
																bool_t BgL_res2504z00_3250;

																{	/* Unsafe/ftp.scm 225 */
																	long BgL_l1z00_3237;

																	BgL_l1z00_3237 =
																		STRING_LENGTH(((obj_t) BgL_cmdz00_4304));
																	if ((BgL_l1z00_3237 == ((long) 4)))
																		{	/* Unsafe/ftp.scm 225 */
																			int BgL_arg2088z00_3240;

																			{	/* Unsafe/ftp.scm 225 */
																				char *BgL_auxz00_5089;
																				char *BgL_tmpz00_5086;

																				BgL_auxz00_5089 =
																					BSTRING_TO_STRING
																					(BGl_string2796z00zz__ftpz00);
																				BgL_tmpz00_5086 =
																					BSTRING_TO_STRING(((obj_t)
																						BgL_cmdz00_4304));
																				BgL_arg2088z00_3240 =
																					memcmp(BgL_tmpz00_5086,
																					BgL_auxz00_5089, BgL_l1z00_3237);
																			}
																			BgL_res2504z00_3250 =
																				(
																				(long) (BgL_arg2088z00_3240) ==
																				((long) 0));
																		}
																	else
																		{	/* Unsafe/ftp.scm 225 */
																			BgL_res2504z00_3250 = ((bool_t) 0);
																		}
																}
																BgL_test3245z00_5081 = BgL_res2504z00_3250;
															}
															if (BgL_test3245z00_5081)
																{	/* Unsafe/ftp.scm 225 */
																	BgL_arg1654z00_1783 =
																		BGl_symbol2789z00zz__ftpz00;
																}
															else
																{	/* Unsafe/ftp.scm 225 */
																	BgL_arg1654z00_1783 =
																		BGl_symbol2787z00zz__ftpz00;
																}
														}
														BgL_resz00_1781 =
															BGl_z52ftpzd2readzd2dtpz52zz__ftpz00
															(BgL_ftpz00_4302, BgL_arg1654z00_1783);
													}
													BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00
														(BgL_ftpz00_4302, BFALSE, BNIL);
													BgL_res1111z00_1775 = BgL_resz00_1781;
												}
												break;
											case ((long) 200):

												BgL_res1111z00_1775 = BTRUE;
												break;
											case ((long) 202):

												BgL_res1111z00_1775 = BTRUE;
												break;
											case ((long) 211):

												BgL_res1111z00_1775 = BgL_mesgz00_4305;
												break;
											case ((long) 212):

												BgL_res1111z00_1775 = BgL_mesgz00_4305;
												break;
											case ((long) 213):

												BgL_res1111z00_1775 = BgL_mesgz00_4305;
												break;
											case ((long) 214):

												BgL_res1111z00_1775 = BgL_mesgz00_4305;
												break;
											case ((long) 215):

												BgL_res1111z00_1775 = BgL_mesgz00_4305;
												break;
											case ((long) 220):

												((((BgL_ftpz00_bglt) COBJECT(
																((BgL_ftpz00_bglt) BgL_ftpz00_4302)))->
														BgL_motdz00) = ((obj_t) BgL_mesgz00_4305), BUNSPEC);
												{	/* Unsafe/ftp.scm 260 */
													obj_t BgL_arg1656z00_1785;

													BgL_arg1656z00_1785 =
														(((BgL_ftpz00_bglt) COBJECT(
																((BgL_ftpz00_bglt) BgL_ftpz00_4302)))->
														BgL_userz00);
													{	/* Unsafe/ftp.scm 260 */
														obj_t BgL_list1657z00_1786;

														BgL_list1657z00_1786 =
															MAKE_YOUNG_PAIR(BgL_arg1656z00_1785, BNIL);
														BgL_res1111z00_1775 =
															BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00
															(BgL_ftpz00_4302, BGl_string2797z00zz__ftpz00,
															BgL_list1657z00_1786);
												}} break;
											case ((long) 221):

												BgL_res1111z00_1775 = BTRUE;
												break;
											case ((long) 225):

												BgL_res1111z00_1775 = BTRUE;
												break;
											case ((long) 226):

												{	/* Unsafe/ftp.scm 272 */
													bool_t BgL_test3247z00_5102;

													{	/* Ieee/string.scm 193 */

														BgL_test3247z00_5102 =
															CBOOL
															(BGl_stringzd2containszd2ciz00zz__r4_strings_6_7z00
															(BgL_mesgz00_4305, BGl_string2798z00zz__ftpz00,
																(int) (((long) 0))));
													}
													if (BgL_test3247z00_5102)
														{	/* Unsafe/ftp.scm 272 */
															BgL_res1111z00_1775 = BFALSE;
														}
													else
														{	/* Unsafe/ftp.scm 272 */
															BgL_res1111z00_1775 =
																BGl_zc3z04exitza31742ze3ze70z60zz__ftpz00(
																((BgL_z52ftpz52_bglt) BgL_ftpz00_4302));
														}
												}
												break;
											case ((long) 227):

												{	/* Unsafe/ftp.scm 276 */
													obj_t BgL_hostz00_1794;

													{	/* Unsafe/ftp.scm 278 */
														obj_t BgL_arg1661z00_1796;

														{	/* Unsafe/ftp.scm 278 */
															obj_t BgL_l1224z00_1797;

															{	/* Unsafe/ftp.scm 280 */
																obj_t BgL_arg1675z00_1817;

																{	/* Unsafe/ftp.scm 280 */
																	long BgL_arg1683z00_1819;

																	BgL_arg1683z00_1819 =
																		(STRING_LENGTH(
																			((obj_t) BgL_mesgz00_4305)) - ((long) 1));
																	{	/* Unsafe/ftp.scm 280 */
																		obj_t BgL_res2507z00_3257;

																		BgL_res2507z00_3257 =
																			c_substring(
																			((obj_t) BgL_mesgz00_4305), ((long) 1),
																			BgL_arg1683z00_1819);
																		BgL_arg1675z00_1817 = BgL_res2507z00_3257;
																}}
																{	/* Unsafe/ftp.scm 279 */
																	obj_t BgL_list1676z00_1818;

																	BgL_list1676z00_1818 =
																		MAKE_YOUNG_PAIR(BGl_string2799z00zz__ftpz00,
																		BNIL);
																	BgL_l1224z00_1797 =
																		BGl_stringzd2splitzd2zz__r4_strings_6_7z00
																		(BgL_arg1675z00_1817, BgL_list1676z00_1818);
															}}
															if (NULLP(BgL_l1224z00_1797))
																{	/* Unsafe/ftp.scm 278 */
																	BgL_arg1661z00_1796 = BNIL;
																}
															else
																{	/* Unsafe/ftp.scm 278 */
																	obj_t BgL_head1226z00_1799;

																	{	/* Unsafe/ftp.scm 278 */
																		obj_t BgL_arg1669z00_1813;

																		{	/* Ieee/number.scm 165 */

																			BgL_arg1669z00_1813 =
																				BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
																				(CAR(BgL_l1224z00_1797),
																				BINT(((long) 10)));
																		}
																		{	/* Unsafe/ftp.scm 278 */
																			obj_t BgL_res2509z00_3260;

																			BgL_res2509z00_3260 =
																				MAKE_YOUNG_PAIR(BgL_arg1669z00_1813,
																				BNIL);
																			BgL_head1226z00_1799 =
																				BgL_res2509z00_3260;
																	}}
																	{	/* Unsafe/ftp.scm 278 */
																		obj_t BgL_g1229z00_1800;

																		BgL_g1229z00_1800 = CDR(BgL_l1224z00_1797);
																		{
																			obj_t BgL_l1224z00_3287;
																			obj_t BgL_tail1227z00_3288;

																			BgL_l1224z00_3287 = BgL_g1229z00_1800;
																			BgL_tail1227z00_3288 =
																				BgL_head1226z00_1799;
																		BgL_zc3z04anonymousza31663ze3z87_3286:
																			if (NULLP(BgL_l1224z00_3287))
																				{	/* Unsafe/ftp.scm 278 */
																					BgL_arg1661z00_1796 =
																						BgL_head1226z00_1799;
																				}
																			else
																				{	/* Unsafe/ftp.scm 278 */
																					obj_t BgL_newtail1228z00_3297;

																					{	/* Unsafe/ftp.scm 278 */
																						obj_t BgL_arg1667z00_3298;

																						{	/* Unsafe/ftp.scm 278 */

																							BgL_arg1667z00_3298 =
																								BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
																								(CAR(((obj_t)
																										BgL_l1224z00_3287)),
																								BINT(((long) 10)));
																						}
																						{	/* Unsafe/ftp.scm 278 */
																							obj_t BgL_res2515z00_3305;

																							BgL_res2515z00_3305 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1667z00_3298, BNIL);
																							BgL_newtail1228z00_3297 =
																								BgL_res2515z00_3305;
																					}}
																					SET_CDR(BgL_tail1227z00_3288,
																						BgL_newtail1228z00_3297);
																					{	/* Unsafe/ftp.scm 278 */
																						obj_t BgL_arg1665z00_3302;

																						BgL_arg1665z00_3302 =
																							CDR(((obj_t) BgL_l1224z00_3287));
																						{
																							obj_t BgL_tail1227z00_5133;
																							obj_t BgL_l1224z00_5132;

																							BgL_l1224z00_5132 =
																								BgL_arg1665z00_3302;
																							BgL_tail1227z00_5133 =
																								BgL_newtail1228z00_3297;
																							BgL_tail1227z00_3288 =
																								BgL_tail1227z00_5133;
																							BgL_l1224z00_3287 =
																								BgL_l1224z00_5132;
																							goto
																								BgL_zc3z04anonymousza31663ze3z87_3286;
																						}
																					}
																				}
																		}
																	}
																}
														}
														BgL_hostz00_1794 =
															BGl_ftpportzd2ze3hostportz31zz__ftpz00
															(BgL_arg1661z00_1796);
													}
													{	/* Unsafe/ftp.scm 277 */
														obj_t BgL_portz00_1795;

														{	/* Unsafe/ftp.scm 281 */
															int BgL_tmpz00_5135;

															BgL_tmpz00_5135 = (int) (((long) 1));
															BgL_portz00_1795 =
																BGL_MVALUES_VAL(BgL_tmpz00_5135);
														}
														BGl_z52ftpzd2closezd2dtpz52zz__ftpz00
															(BgL_ftpz00_4302);
														{
															obj_t BgL_auxz00_5139;

															{	/* Unsafe/ftp.scm 431 */
																obj_t BgL_list1740z00_3309;

																{	/* Unsafe/ftp.scm 431 */
																	obj_t BgL_arg1741z00_3310;

																	BgL_arg1741z00_3310 =
																		MAKE_YOUNG_PAIR(BgL_portz00_1795, BNIL);
																	BgL_list1740z00_3309 =
																		MAKE_YOUNG_PAIR(BgL_hostz00_1794,
																		BgL_arg1741z00_3310);
																}
																BgL_auxz00_5139 = BgL_list1740z00_3309;
															}
															((((BgL_z52ftpz52_bglt) COBJECT(
																			((BgL_z52ftpz52_bglt) BgL_ftpz00_4302)))->
																	BgL_dtpz00) =
																((obj_t) BgL_auxz00_5139), BUNSPEC);
														}
														BgL_res1111z00_1775 =
															BGl_zc3z04exitza31742ze3ze70z60zz__ftpz00(
															((BgL_z52ftpz52_bglt) BgL_ftpz00_4302));
												}} break;
											case ((long) 230):

												BgL_res1111z00_1775 = BTRUE;
												break;
											case ((long) 250):

												BgL_res1111z00_1775 = BTRUE;
												break;
											case ((long) 257):

												BgL_res1111z00_1775 = BTRUE;
												break;
											case ((long) 331):

												{	/* Unsafe/ftp.scm 296 */
													obj_t BgL_arg1685z00_1821;

													BgL_arg1685z00_1821 =
														(((BgL_ftpz00_bglt) COBJECT(
																((BgL_ftpz00_bglt) BgL_ftpz00_4302)))->
														BgL_passz00);
													{	/* Unsafe/ftp.scm 296 */
														obj_t BgL_list1686z00_1822;

														BgL_list1686z00_1822 =
															MAKE_YOUNG_PAIR(BgL_arg1685z00_1821, BNIL);
														BgL_res1111z00_1775 =
															BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00
															(BgL_ftpz00_4302, BGl_string2800z00zz__ftpz00,
															BgL_list1686z00_1822);
												}} break;
											case ((long) 332):

												{	/* Unsafe/ftp.scm 299 */
													obj_t BgL_arg1687z00_1823;

													BgL_arg1687z00_1823 =
														(((BgL_ftpz00_bglt) COBJECT(
																((BgL_ftpz00_bglt) BgL_ftpz00_4302)))->
														BgL_acctz00);
													{	/* Unsafe/ftp.scm 299 */
														obj_t BgL_list1688z00_1824;

														BgL_list1688z00_1824 =
															MAKE_YOUNG_PAIR(BgL_arg1687z00_1823, BNIL);
														BgL_res1111z00_1775 =
															BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00
															(BgL_ftpz00_4302, BGl_string2801z00zz__ftpz00,
															BgL_list1688z00_1824);
												}} break;
											case ((long) 350):

												BgL_res1111z00_1775 = BTRUE;
												break;
											case ((long) 421):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 425):

												BGl_z52ftpzd2dtpzd2initz52zz__ftpz00(BgL_ftpz00_4302);
												{	/* Unsafe/ftp.scm 314 */
													obj_t BgL_runner1694z00_1829;

													{	/* Unsafe/ftp.scm 314 */
														obj_t BgL_list1689z00_1825;

														{	/* Unsafe/ftp.scm 314 */
															obj_t BgL_arg1691z00_1826;

															BgL_arg1691z00_1826 =
																MAKE_YOUNG_PAIR(BgL_cmdsz00_4306, BNIL);
															BgL_list1689z00_1825 =
																MAKE_YOUNG_PAIR(BgL_cmdz00_4304,
																BgL_arg1691z00_1826);
														}
														BgL_runner1694z00_1829 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_ftpz00_4302, BgL_list1689z00_1825);
													}
													{	/* Unsafe/ftp.scm 314 */
														obj_t BgL_aux1692z00_1827;

														BgL_aux1692z00_1827 = CAR(BgL_runner1694z00_1829);
														BgL_runner1694z00_1829 =
															CDR(BgL_runner1694z00_1829);
														{	/* Unsafe/ftp.scm 314 */
															obj_t BgL_aux1693z00_1828;

															BgL_aux1693z00_1828 = CAR(BgL_runner1694z00_1829);
															BgL_runner1694z00_1829 =
																CDR(BgL_runner1694z00_1829);
															BgL_res1111z00_1775 =
																BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00
																(BgL_aux1692z00_1827, BgL_aux1693z00_1828,
																BgL_runner1694z00_1829);
												}}} break;
											case ((long) 426):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 450):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 451):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 452):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 500):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 501):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 502):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 503):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 504):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 530):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 532):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 550):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 551):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 552):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 553):

												BgL_res1111z00_1775 = BFALSE;
												break;
											case ((long) 999):

												BGl_z52ftpzd2closez80zz__ftpz00(BgL_ftpz00_4302);
												BgL_res1111z00_1775 =
													BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_an_exitd1109z00_1772,
													BGl_string2802z00zz__ftpz00);
												break;
											default:
												BgL_res1111z00_1775 =
													BGl_errorz00zz__errorz00(BGl_string2793z00zz__ftpz00,
													BGl_string2803z00zz__ftpz00, BgL_codez00_4303);
											}
									}
								else
									{	/* Unsafe/ftp.scm 205 */
										BgL_res1111z00_1775 =
											BGl_errorz00zz__errorz00(BGl_string2793z00zz__ftpz00,
											BGl_string2803z00zz__ftpz00, BgL_codez00_4303);
									}
								POP_EXIT();
								return BgL_res1111z00_1775;
							}
						}
					}
				}
		}

	}



/* %ftp-close */
	obj_t BGl_z52ftpzd2closez80zz__ftpz00(obj_t BgL_ftpz00_14)
	{
		{	/* Unsafe/ftp.scm 376 */
			{	/* Unsafe/ftp.scm 377 */
				obj_t BgL_exitd1112z00_3316;

				BgL_exitd1112z00_3316 = BGL_EXITD_TOP_AS_OBJ();
				{	/* Unsafe/ftp.scm 379 */
					obj_t BgL_zc3z04anonymousza31696ze3z87_4056;

					BgL_zc3z04anonymousza31696ze3z87_4056 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31696ze3ze5zz__ftpz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31696ze3z87_4056,
						(int) (((long) 0)), BgL_ftpz00_14);
					BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1112z00_3316,
						BgL_zc3z04anonymousza31696ze3z87_4056);
					{	/* Unsafe/ftp.scm 378 */
						obj_t BgL_tmp1114z00_3318;

						{	/* Unsafe/ftp.scm 386 */
							bool_t BgL_test3250z00_5177;

							{	/* Unsafe/ftp.scm 386 */
								obj_t BgL_arg1700z00_3321;

								BgL_arg1700z00_3321 =
									(((BgL_z52ftpz52_bglt) COBJECT(
											((BgL_z52ftpz52_bglt) BgL_ftpz00_14)))->BgL_cmdz00);
								BgL_test3250z00_5177 = SOCKETP(BgL_arg1700z00_3321);
							}
							if (BgL_test3250z00_5177)
								{	/* Unsafe/ftp.scm 387 */
									obj_t BgL_arg1699z00_3322;

									BgL_arg1699z00_3322 =
										(((BgL_z52ftpz52_bglt) COBJECT(
												((BgL_z52ftpz52_bglt) BgL_ftpz00_14)))->BgL_cmdz00);
									BgL_tmp1114z00_3318 =
										socket_close(((obj_t) BgL_arg1699z00_3322));
								}
							else
								{	/* Unsafe/ftp.scm 386 */
									BgL_tmp1114z00_3318 = BFALSE;
								}
						}
						BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1112z00_3316);
						BGl_z52ftpzd2closezd2dtpz52zz__ftpz00(BgL_ftpz00_14);
						return BgL_tmp1114z00_3318;
					}
				}
			}
		}

	}



/* &<@anonymous:1696> */
	obj_t BGl_z62zc3z04anonymousza31696ze3ze5zz__ftpz00(obj_t BgL_envz00_4057)
	{
		{	/* Unsafe/ftp.scm 377 */
			return
				BGl_z52ftpzd2closezd2dtpz52zz__ftpz00(PROCEDURE_REF(BgL_envz00_4057,
					(int) (((long) 0))));
		}

	}



/* %ftp-close-cmd */
	obj_t BGl_z52ftpzd2closezd2cmdz52zz__ftpz00(obj_t BgL_ftpz00_15)
	{
		{	/* Unsafe/ftp.scm 384 */
			{	/* Unsafe/ftp.scm 386 */
				bool_t BgL_test3251z00_5190;

				{	/* Unsafe/ftp.scm 386 */
					obj_t BgL_arg1700z00_3327;

					BgL_arg1700z00_3327 =
						(((BgL_z52ftpz52_bglt) COBJECT(
								((BgL_z52ftpz52_bglt) BgL_ftpz00_15)))->BgL_cmdz00);
					BgL_test3251z00_5190 = SOCKETP(BgL_arg1700z00_3327);
				}
				if (BgL_test3251z00_5190)
					{	/* Unsafe/ftp.scm 387 */
						obj_t BgL_arg1699z00_3328;

						BgL_arg1699z00_3328 =
							(((BgL_z52ftpz52_bglt) COBJECT(
									((BgL_z52ftpz52_bglt) BgL_ftpz00_15)))->BgL_cmdz00);
						return socket_close(((obj_t) BgL_arg1699z00_3328));
					}
				else
					{	/* Unsafe/ftp.scm 386 */
						return BFALSE;
					}
			}
		}

	}



/* %ftp-close-dtp */
	obj_t BGl_z52ftpzd2closezd2dtpz52zz__ftpz00(obj_t BgL_ftpz00_16)
	{
		{	/* Unsafe/ftp.scm 392 */
			{	/* Unsafe/ftp.scm 394 */
				bool_t BgL_test3252z00_5198;

				{	/* Unsafe/ftp.scm 394 */
					obj_t BgL_arg1709z00_1851;

					BgL_arg1709z00_1851 =
						(((BgL_z52ftpz52_bglt) COBJECT(
								((BgL_z52ftpz52_bglt) BgL_ftpz00_16)))->BgL_dtpz00);
					BgL_test3252z00_5198 = SOCKETP(BgL_arg1709z00_1851);
				}
				if (BgL_test3252z00_5198)
					{	/* Unsafe/ftp.scm 394 */
						if (
							(((BgL_z52ftpz52_bglt) COBJECT(
										((BgL_z52ftpz52_bglt) BgL_ftpz00_16)))->BgL_passivezf3zf3))
							{	/* Unsafe/ftp.scm 396 */
								obj_t BgL_arg1704z00_1847;

								BgL_arg1704z00_1847 =
									(((BgL_z52ftpz52_bglt) COBJECT(
											((BgL_z52ftpz52_bglt) BgL_ftpz00_16)))->BgL_dtpz00);
								return socket_close(((obj_t) BgL_arg1704z00_1847));
							}
						else
							{	/* Unsafe/ftp.scm 397 */
								obj_t BgL_arg1707z00_1848;

								BgL_arg1707z00_1848 =
									(((BgL_z52ftpz52_bglt) COBJECT(
											((BgL_z52ftpz52_bglt) BgL_ftpz00_16)))->BgL_dtpz00);
								{	/* Llib/socket.scm 231 */

									return
										BINT(BGl_socketzd2shutdownzd2zz__socketz00
										(BgL_arg1707z00_1848, BTRUE));
								}
							}
					}
				else
					{	/* Unsafe/ftp.scm 394 */
						return BFALSE;
					}
			}
		}

	}



/* ftp-connect-to */
	obj_t BGl_ftpzd2connectzd2toz00zz__ftpz00(obj_t BgL_hostz00_17,
		obj_t BgL_portz00_18)
	{
		{	/* Unsafe/ftp.scm 402 */
			{	/* Unsafe/ftp.scm 403 */
				obj_t BgL_arg1727z00_1880;

				{	/* Unsafe/ftp.scm 403 */
					BgL_ftpz00_bglt BgL_new1119z00_1883;

					{	/* Unsafe/ftp.scm 403 */
						BgL_ftpz00_bglt BgL_new1118z00_1884;

						BgL_new1118z00_1884 =
							((BgL_ftpz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_ftpz00_bgl))));
						{	/* Unsafe/ftp.scm 403 */
							obj_t BgL_arg1728z00_1885;

							{	/* Unsafe/ftp.scm 403 */
								long BgL_res2529z00_3402;

								BgL_res2529z00_3402 = BGL_CLASS_INDEX(BGl_ftpz00zz__ftpz00);
								BgL_arg1728z00_1885 = BINT(BgL_res2529z00_3402);
							}
							{	/* Unsafe/ftp.scm 403 */
								long BgL_numz00_3404;

								BgL_numz00_3404 = (long) CINT(BgL_arg1728z00_1885);
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1118z00_1884), BgL_numz00_3404);
						}}
						BgL_new1119z00_1883 = BgL_new1118z00_1884;
					}
					((((BgL_z52ftpz52_bglt) COBJECT(
									((BgL_z52ftpz52_bglt) BgL_new1119z00_1883)))->BgL_cmdz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_z52ftpz52_bglt) COBJECT(((BgL_z52ftpz52_bglt)
										BgL_new1119z00_1883)))->BgL_dtpz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_z52ftpz52_bglt) COBJECT(((BgL_z52ftpz52_bglt)
										BgL_new1119z00_1883)))->BgL_passivezf3zf3) =
						((bool_t) ((bool_t) 1)), BUNSPEC);
					((((BgL_ftpz00_bglt) COBJECT(BgL_new1119z00_1883))->BgL_hostz00) =
						((obj_t) BgL_hostz00_17), BUNSPEC);
					((((BgL_ftpz00_bglt) COBJECT(BgL_new1119z00_1883))->BgL_portz00) =
						((obj_t) BgL_portz00_18), BUNSPEC);
					((((BgL_ftpz00_bglt) COBJECT(BgL_new1119z00_1883))->BgL_motdz00) =
						((obj_t) BGl_string2813z00zz__ftpz00), BUNSPEC);
					((((BgL_ftpz00_bglt) COBJECT(BgL_new1119z00_1883))->BgL_userz00) =
						((obj_t) BGl_string2814z00zz__ftpz00), BUNSPEC);
					((((BgL_ftpz00_bglt) COBJECT(BgL_new1119z00_1883))->BgL_passz00) =
						((obj_t) BGl_string2815z00zz__ftpz00), BUNSPEC);
					((((BgL_ftpz00_bglt) COBJECT(BgL_new1119z00_1883))->BgL_acctz00) =
						((obj_t) BGl_string2813z00zz__ftpz00), BUNSPEC);
					BgL_arg1727z00_1880 = ((obj_t) BgL_new1119z00_1883);
				}
				{	/* Unsafe/ftp.scm 67 */
					obj_t BgL_timeoutz00_1882;

					BgL_timeoutz00_1882 = BINT(((long) 0));
					{	/* Unsafe/ftp.scm 67 */

						{	/* Unsafe/ftp.scm 67 */
							bool_t BgL_res2530z00_3414;

							{
								obj_t BgL_auxz00_5233;

								{	/* Unsafe/ftp.scm 410 */
									obj_t BgL_arg1730z00_3407;
									obj_t BgL_arg1731z00_3408;

									BgL_arg1730z00_3407 =
										(((BgL_ftpz00_bglt) COBJECT(
												((BgL_ftpz00_bglt) BgL_arg1727z00_1880)))->BgL_hostz00);
									BgL_arg1731z00_3408 =
										(((BgL_ftpz00_bglt) COBJECT(
												((BgL_ftpz00_bglt) BgL_arg1727z00_1880)))->BgL_portz00);
									{	/* Unsafe/ftp.scm 410 */
										obj_t BgL_domainz00_3409;

										BgL_domainz00_3409 = BGl_symbol2816z00zz__ftpz00;
										BgL_auxz00_5233 =
											BGl_makezd2clientzd2socketz00zz__socketz00
											(BgL_arg1730z00_3407, CINT(BgL_arg1731z00_3408),
											BgL_domainz00_3409, BTRUE, BTRUE, BgL_timeoutz00_1882);
								}}
								((((BgL_z52ftpz52_bglt) COBJECT(
												((BgL_z52ftpz52_bglt)
													((BgL_ftpz00_bglt) BgL_arg1727z00_1880))))->
										BgL_cmdz00) = ((obj_t) BgL_auxz00_5233), BUNSPEC);
							}
							BgL_res2530z00_3414 =
								CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
									((obj_t)
										((BgL_ftpz00_bglt) BgL_arg1727z00_1880)), BFALSE, BNIL));
							return BBOOL(BgL_res2530z00_3414);
						}
					}
				}
			}
		}

	}



/* _ftp-connect */
	obj_t BGl__ftpzd2connectzd2zz__ftpz00(obj_t BgL_env1283z00_24,
		obj_t BgL_opt1282z00_23)
	{
		{	/* Unsafe/ftp.scm 408 */
			{	/* Unsafe/ftp.scm 408 */
				obj_t BgL_g1284z00_1886;

				BgL_g1284z00_1886 = VECTOR_REF(BgL_opt1282z00_23, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1282z00_23))
					{
					case ((long) 1):

						{	/* Unsafe/ftp.scm 408 */

							{	/* Unsafe/ftp.scm 408 */
								bool_t BgL_res2531z00_3424;

								{	/* Unsafe/ftp.scm 408 */
									BgL_ftpz00_bglt BgL_ftpz00_3415;

									if (BGl_isazf3zf3zz__objectz00(BgL_g1284z00_1886,
											BGl_ftpz00zz__ftpz00))
										{	/* Unsafe/ftp.scm 408 */
											BgL_ftpz00_3415 = ((BgL_ftpz00_bglt) BgL_g1284z00_1886);
										}
									else
										{
											obj_t BgL_auxz00_5252;

											BgL_auxz00_5252 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2818z00zz__ftpz00, BINT(((long) 13299)),
												BGl_string2819z00zz__ftpz00,
												BGl_string2793z00zz__ftpz00, BgL_g1284z00_1886);
											FAILURE(BgL_auxz00_5252, BFALSE, BFALSE);
										}
									{
										obj_t BgL_auxz00_5256;

										{	/* Unsafe/ftp.scm 410 */
											obj_t BgL_arg1730z00_3417;
											obj_t BgL_arg1731z00_3418;

											BgL_arg1730z00_3417 =
												(((BgL_ftpz00_bglt) COBJECT(BgL_ftpz00_3415))->
												BgL_hostz00);
											BgL_arg1731z00_3418 =
												(((BgL_ftpz00_bglt) COBJECT(BgL_ftpz00_3415))->
												BgL_portz00);
											{	/* Unsafe/ftp.scm 410 */
												obj_t BgL_domainz00_3419;

												BgL_domainz00_3419 = BGl_symbol2816z00zz__ftpz00;
												BgL_auxz00_5256 =
													BGl_makezd2clientzd2socketz00zz__socketz00
													(BgL_arg1730z00_3417, CINT(BgL_arg1731z00_3418),
													BgL_domainz00_3419, BTRUE, BTRUE, BINT(((long) 0)));
										}}
										((((BgL_z52ftpz52_bglt) COBJECT(
														((BgL_z52ftpz52_bglt) BgL_ftpz00_3415)))->
												BgL_cmdz00) = ((obj_t) BgL_auxz00_5256), BUNSPEC);
									}
									BgL_res2531z00_3424 =
										CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
											((obj_t) BgL_ftpz00_3415), BFALSE, BNIL));
								}
								return BBOOL(BgL_res2531z00_3424);
							}
						}
						break;
					case ((long) 2):

						{	/* Unsafe/ftp.scm 408 */
							obj_t BgL_timeoutz00_1891;

							BgL_timeoutz00_1891 = VECTOR_REF(BgL_opt1282z00_23, ((long) 1));
							{	/* Unsafe/ftp.scm 408 */

								{	/* Unsafe/ftp.scm 408 */
									bool_t BgL_res2532z00_3434;

									{	/* Unsafe/ftp.scm 408 */
										BgL_ftpz00_bglt BgL_ftpz00_3425;

										if (BGl_isazf3zf3zz__objectz00(BgL_g1284z00_1886,
												BGl_ftpz00zz__ftpz00))
											{	/* Unsafe/ftp.scm 408 */
												BgL_ftpz00_3425 = ((BgL_ftpz00_bglt) BgL_g1284z00_1886);
											}
										else
											{
												obj_t BgL_auxz00_5272;

												BgL_auxz00_5272 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2818z00zz__ftpz00, BINT(((long) 13299)),
													BGl_string2819z00zz__ftpz00,
													BGl_string2793z00zz__ftpz00, BgL_g1284z00_1886);
												FAILURE(BgL_auxz00_5272, BFALSE, BFALSE);
											}
										{
											obj_t BgL_auxz00_5276;

											{	/* Unsafe/ftp.scm 410 */
												obj_t BgL_arg1730z00_3427;
												obj_t BgL_arg1731z00_3428;

												BgL_arg1730z00_3427 =
													(((BgL_ftpz00_bglt) COBJECT(BgL_ftpz00_3425))->
													BgL_hostz00);
												BgL_arg1731z00_3428 =
													(((BgL_ftpz00_bglt) COBJECT(BgL_ftpz00_3425))->
													BgL_portz00);
												{	/* Unsafe/ftp.scm 410 */
													obj_t BgL_domainz00_3429;

													BgL_domainz00_3429 = BGl_symbol2816z00zz__ftpz00;
													BgL_auxz00_5276 =
														BGl_makezd2clientzd2socketz00zz__socketz00
														(BgL_arg1730z00_3427, CINT(BgL_arg1731z00_3428),
														BgL_domainz00_3429, BTRUE, BTRUE,
														BgL_timeoutz00_1891);
											}}
											((((BgL_z52ftpz52_bglt) COBJECT(
															((BgL_z52ftpz52_bglt) BgL_ftpz00_3425)))->
													BgL_cmdz00) = ((obj_t) BgL_auxz00_5276), BUNSPEC);
										}
										BgL_res2532z00_3434 =
											CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
												((obj_t) BgL_ftpz00_3425), BFALSE, BNIL));
									}
									return BBOOL(BgL_res2532z00_3434);
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



/* ftp-connect */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2connectzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_21, obj_t BgL_timeoutz00_22)
	{
		{	/* Unsafe/ftp.scm 408 */
			{
				obj_t BgL_auxz00_5289;

				{	/* Unsafe/ftp.scm 410 */
					obj_t BgL_arg1730z00_3436;
					obj_t BgL_arg1731z00_3437;

					BgL_arg1730z00_3436 =
						(((BgL_ftpz00_bglt) COBJECT(BgL_ftpz00_21))->BgL_hostz00);
					BgL_arg1731z00_3437 =
						(((BgL_ftpz00_bglt) COBJECT(BgL_ftpz00_21))->BgL_portz00);
					{	/* Unsafe/ftp.scm 410 */
						obj_t BgL_domainz00_3438;

						BgL_domainz00_3438 = BGl_symbol2816z00zz__ftpz00;
						BgL_auxz00_5289 =
							BGl_makezd2clientzd2socketz00zz__socketz00(BgL_arg1730z00_3436,
							CINT(BgL_arg1731z00_3437), BgL_domainz00_3438, BTRUE, BTRUE,
							BgL_timeoutz00_22);
					}
				}
				((((BgL_z52ftpz52_bglt) COBJECT(
								((BgL_z52ftpz52_bglt) BgL_ftpz00_21)))->BgL_cmdz00) =
					((obj_t) BgL_auxz00_5289), BUNSPEC);
			}
			return
				CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
					((obj_t) BgL_ftpz00_21), BFALSE, BNIL));
		}

	}



/* %ftp-dtp-init */
	obj_t BGl_z52ftpzd2dtpzd2initz52zz__ftpz00(obj_t BgL_ftpz00_25)
	{
		{	/* Unsafe/ftp.scm 416 */
			if (
				(((BgL_z52ftpz52_bglt) COBJECT(
							((BgL_z52ftpz52_bglt) BgL_ftpz00_25)))->BgL_passivezf3zf3))
				{	/* Unsafe/ftp.scm 418 */
					return
						BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(BgL_ftpz00_25,
						BGl_string2820z00zz__ftpz00, BNIL);
				}
			else
				{	/* Unsafe/ftp.scm 420 */
					BgL_z62ftpzd2errorzb0_bglt BgL_arg1736z00_1903;

					{	/* Unsafe/ftp.scm 420 */
						BgL_z62ftpzd2errorzb0_bglt BgL_new1125z00_1904;

						{	/* Unsafe/ftp.scm 420 */
							BgL_z62ftpzd2errorzb0_bglt BgL_new1123z00_1907;

							BgL_new1123z00_1907 =
								((BgL_z62ftpzd2errorzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_z62ftpzd2errorzb0_bgl))));
							{	/* Unsafe/ftp.scm 420 */
								long BgL_arg1739z00_1908;

								{	/* Unsafe/ftp.scm 420 */
									long BgL_res2533z00_3444;

									BgL_res2533z00_3444 =
										BGL_CLASS_INDEX(BGl_z62ftpzd2errorzb0zz__ftpz00);
									BgL_arg1739z00_1908 = BgL_res2533z00_3444;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1123z00_1907),
									BgL_arg1739z00_1908);
							}
							BgL_new1125z00_1904 = BgL_new1123z00_1907;
						}
						((((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt) BgL_new1125z00_1904)))->
								BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
						((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
											BgL_new1125z00_1904)))->BgL_locationz00) =
							((obj_t) BFALSE), BUNSPEC);
						{
							obj_t BgL_auxz00_5311;

							{	/* Unsafe/ftp.scm 420 */
								obj_t BgL_arg1737z00_1905;

								{	/* Unsafe/ftp.scm 420 */
									obj_t BgL_arg1738z00_1906;

									{	/* Unsafe/ftp.scm 420 */
										obj_t BgL_res2534z00_3448;

										{	/* Unsafe/ftp.scm 420 */
											obj_t BgL_classz00_3447;

											BgL_classz00_3447 = BGl_z62ftpzd2errorzb0zz__ftpz00;
											BgL_res2534z00_3448 =
												BGL_CLASS_ALL_FIELDS(BgL_classz00_3447);
										}
										BgL_arg1738z00_1906 = BgL_res2534z00_3448;
									}
									BgL_arg1737z00_1905 =
										VECTOR_REF(BgL_arg1738z00_1906, ((long) 2));
								}
								BgL_auxz00_5311 =
									BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
									(BgL_arg1737z00_1905);
							}
							((((BgL_z62exceptionz62_bglt) COBJECT(
											((BgL_z62exceptionz62_bglt) BgL_new1125z00_1904)))->
									BgL_stackz00) = ((obj_t) BgL_auxz00_5311), BUNSPEC);
						}
						((((BgL_z62errorz62_bglt) COBJECT(
										((BgL_z62errorz62_bglt) BgL_new1125z00_1904)))->
								BgL_procz00) = ((obj_t) BGl_string2821z00zz__ftpz00), BUNSPEC);
						((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
											BgL_new1125z00_1904)))->BgL_msgz00) =
							((obj_t) BGl_string2822z00zz__ftpz00), BUNSPEC);
						((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
											BgL_new1125z00_1904)))->BgL_objz00) =
							((obj_t) BgL_ftpz00_25), BUNSPEC);
						BgL_arg1736z00_1903 = BgL_new1125z00_1904;
					}
					return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1736z00_1903));
				}
		}

	}



/* <@exit:1742>~0 */
	obj_t BGl_zc3z04exitza31742ze3ze70z60zz__ftpz00(BgL_z52ftpz52_bglt
		BgL_i1127z00_4301)
	{
		{	/* Unsafe/ftp.scm 438 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1128z00_1914;

			if (SET_EXIT(BgL_an_exit1128z00_1914))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1128z00_1914 = (void *) jmpbuf;
					{	/* Unsafe/ftp.scm 438 */

						PUSH_EXIT(BgL_an_exit1128z00_1914, ((long) 1));
						{	/* Unsafe/ftp.scm 438 */
							obj_t BgL_an_exitd1129z00_1915;

							BgL_an_exitd1129z00_1915 = ((obj_t) (&exitd));
							{	/* Unsafe/ftp.scm 438 */
								bool_t BgL_res1131z00_1918;

								{	/* Unsafe/ftp.scm 439 */
									obj_t BgL_hostz00_1919;

									{	/* Unsafe/ftp.scm 441 */
										bool_t BgL_test3257z00_5328;

										{	/* Unsafe/ftp.scm 441 */
											obj_t BgL_tmpz00_5329;

											BgL_tmpz00_5329 =
												(((BgL_z52ftpz52_bglt) COBJECT(BgL_i1127z00_4301))->
												BgL_dtpz00);
											BgL_test3257z00_5328 = SOCKETP(BgL_tmpz00_5329);
										}
										if (BgL_test3257z00_5328)
											{	/* Unsafe/ftp.scm 442 */
												obj_t BgL_val0_1232z00_1928;
												obj_t BgL_val1_1233z00_1929;

												{	/* Unsafe/ftp.scm 442 */
													obj_t BgL_arg1746z00_1930;

													BgL_arg1746z00_1930 =
														(((BgL_z52ftpz52_bglt) COBJECT(BgL_i1127z00_4301))->
														BgL_dtpz00);
													BgL_val0_1232z00_1928 =
														bgl_socket_host_addr(((obj_t) BgL_arg1746z00_1930));
												}
												{	/* Unsafe/ftp.scm 443 */
													obj_t BgL_arg1747z00_1931;

													BgL_arg1747z00_1931 =
														(((BgL_z52ftpz52_bglt) COBJECT(BgL_i1127z00_4301))->
														BgL_dtpz00);
													{	/* Unsafe/ftp.scm 443 */
														obj_t BgL_res2537z00_3457;

														{	/* Unsafe/ftp.scm 443 */
															int BgL_tmpz00_5336;

															{	/* Unsafe/ftp.scm 443 */
																obj_t BgL_tmpz00_5337;

																BgL_tmpz00_5337 = ((obj_t) BgL_arg1747z00_1931);
																BgL_tmpz00_5336 = SOCKET_PORT(BgL_tmpz00_5337);
															}
															BgL_res2537z00_3457 = BINT(BgL_tmpz00_5336);
														}
														BgL_val1_1233z00_1929 = BgL_res2537z00_3457;
												}}
												{	/* Unsafe/ftp.scm 442 */
													int BgL_res2538z00_3458;

													{	/* Unsafe/ftp.scm 442 */
														int BgL_tmpz00_5341;

														BgL_tmpz00_5341 = (int) (((long) 2));
														BgL_res2538z00_3458 =
															BGL_MVALUES_NUMBER_SET(BgL_tmpz00_5341);
													} BgL_res2538z00_3458;
												}
												{	/* Unsafe/ftp.scm 442 */
													int BgL_tmpz00_5344;

													BgL_tmpz00_5344 = (int) (((long) 1));
													BGL_MVALUES_VAL_SET(BgL_tmpz00_5344,
														BgL_val1_1233z00_1929);
												}
												BgL_hostz00_1919 = BgL_val0_1232z00_1928;
											}
										else
											{	/* Unsafe/ftp.scm 444 */
												bool_t BgL_test3258z00_5347;

												{	/* Unsafe/ftp.scm 444 */
													obj_t BgL_tmpz00_5348;

													BgL_tmpz00_5348 =
														(((BgL_z52ftpz52_bglt) COBJECT(BgL_i1127z00_4301))->
														BgL_dtpz00);
													BgL_test3258z00_5347 = PAIRP(BgL_tmpz00_5348);
												}
												if (BgL_test3258z00_5347)
													{	/* Unsafe/ftp.scm 445 */
														obj_t BgL_val0_1234z00_1934;
														obj_t BgL_val1_1235z00_1935;

														BgL_val0_1234z00_1934 =
															CAR(
															(((BgL_z52ftpz52_bglt)
																	COBJECT(BgL_i1127z00_4301))->BgL_dtpz00));
														{	/* Unsafe/ftp.scm 445 */
															obj_t BgL_pairz00_3461;

															BgL_pairz00_3461 =
																(((BgL_z52ftpz52_bglt)
																	COBJECT(BgL_i1127z00_4301))->BgL_dtpz00);
															BgL_val1_1235z00_1935 =
																CAR(CDR(BgL_pairz00_3461));
														}
														{	/* Unsafe/ftp.scm 445 */
															int BgL_res2540z00_3465;

															{	/* Unsafe/ftp.scm 445 */
																int BgL_tmpz00_5356;

																BgL_tmpz00_5356 = (int) (((long) 2));
																BgL_res2540z00_3465 =
																	BGL_MVALUES_NUMBER_SET(BgL_tmpz00_5356);
															} BgL_res2540z00_3465;
														}
														{	/* Unsafe/ftp.scm 445 */
															int BgL_tmpz00_5359;

															BgL_tmpz00_5359 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_tmpz00_5359,
																BgL_val1_1235z00_1935);
														}
														BgL_hostz00_1919 = BgL_val0_1234z00_1934;
													}
												else
													{	/* Unsafe/ftp.scm 444 */
														BgL_hostz00_1919 =
															BGl_unwindzd2untilz12zc0zz__bexitz00
															(BgL_an_exitd1129z00_1915, BFALSE);
													}
											}
									}
									{	/* Unsafe/ftp.scm 440 */
										obj_t BgL_portz00_1920;

										{	/* Unsafe/ftp.scm 448 */
											int BgL_tmpz00_5363;

											BgL_tmpz00_5363 = (int) (((long) 1));
											BgL_portz00_1920 = BGL_MVALUES_VAL(BgL_tmpz00_5363);
										}
										{
											obj_t BgL_auxz00_5366;

											{	/* Unsafe/ftp.scm 448 */
												obj_t BgL_domainz00_1921;

												BgL_domainz00_1921 = BGl_symbol2816z00zz__ftpz00;
												BgL_auxz00_5366 =
													BGl_makezd2clientzd2socketz00zz__socketz00
													(BgL_hostz00_1919, CINT(BgL_portz00_1920),
													BgL_domainz00_1921, BTRUE, BTRUE, BINT(((long) 0)));
											}
											((((BgL_z52ftpz52_bglt) COBJECT(BgL_i1127z00_4301))->
													BgL_dtpz00) = ((obj_t) BgL_auxz00_5366), BUNSPEC);
										}
										{	/* Unsafe/ftp.scm 449 */
											obj_t BgL_tmpz00_5371;

											BgL_tmpz00_5371 =
												(((BgL_z52ftpz52_bglt) COBJECT(BgL_i1127z00_4301))->
												BgL_dtpz00);
											BgL_res1131z00_1918 = SOCKETP(BgL_tmpz00_5371);
								}}}
								POP_EXIT();
								return BBOOL(BgL_res1131z00_1918);
							}
						}
					}
				}
		}

	}



/* ftpport->hostport */
	obj_t BGl_ftpportzd2ze3hostportz31zz__ftpz00(obj_t BgL_plistz00_32)
	{
		{	/* Unsafe/ftp.scm 462 */
			{	/* Unsafe/ftp.scm 463 */
				obj_t BgL_addrz00_1948;
				obj_t BgL_portz00_1949;

				{	/* Unsafe/ftp.scm 464 */
					obj_t BgL_arg1763z00_1952;
					obj_t BgL_arg1764z00_1953;
					obj_t BgL_arg1765z00_1954;
					obj_t BgL_arg1766z00_1955;

					BgL_arg1763z00_1952 = bgl_list_ref(BgL_plistz00_32, ((long) 0));
					BgL_arg1764z00_1953 = bgl_list_ref(BgL_plistz00_32, ((long) 1));
					BgL_arg1765z00_1954 = bgl_list_ref(BgL_plistz00_32, ((long) 2));
					BgL_arg1766z00_1955 = bgl_list_ref(BgL_plistz00_32, ((long) 3));
					{	/* Unsafe/ftp.scm 463 */
						obj_t BgL_list1767z00_1956;

						{	/* Unsafe/ftp.scm 463 */
							obj_t BgL_arg1768z00_1957;

							{	/* Unsafe/ftp.scm 463 */
								obj_t BgL_arg1769z00_1958;

								{	/* Unsafe/ftp.scm 463 */
									obj_t BgL_arg1770z00_1959;

									BgL_arg1770z00_1959 =
										MAKE_YOUNG_PAIR(BgL_arg1766z00_1955, BNIL);
									BgL_arg1769z00_1958 =
										MAKE_YOUNG_PAIR(BgL_arg1765z00_1954, BgL_arg1770z00_1959);
								}
								BgL_arg1768z00_1957 =
									MAKE_YOUNG_PAIR(BgL_arg1764z00_1953, BgL_arg1769z00_1958);
							}
							BgL_list1767z00_1956 =
								MAKE_YOUNG_PAIR(BgL_arg1763z00_1952, BgL_arg1768z00_1957);
						}
						BgL_addrz00_1948 =
							BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2823z00zz__ftpz00,
							BgL_list1767z00_1956);
				}}
				BgL_portz00_1949 =
					BGl_2zb2zb2zz__r4_numbers_6_5z00(BGl_2za2za2zz__r4_numbers_6_5z00
					(bgl_list_ref(BgL_plistz00_32, ((long) 4)), BINT(((long) 256))),
					bgl_list_ref(BgL_plistz00_32, ((long) 5)));
				{	/* Unsafe/ftp.scm 469 */
					int BgL_res2542z00_3467;

					{	/* Unsafe/ftp.scm 469 */
						int BgL_tmpz00_5390;

						BgL_tmpz00_5390 = (int) (((long) 2));
						BgL_res2542z00_3467 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_5390);
					} BgL_res2542z00_3467;
				}
				{	/* Unsafe/ftp.scm 469 */
					int BgL_tmpz00_5393;

					BgL_tmpz00_5393 = (int) (((long) 1));
					BGL_MVALUES_VAL_SET(BgL_tmpz00_5393, BgL_portz00_1949);
				}
				return BgL_addrz00_1948;
			}
		}

	}



/* ftp-logout */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2logoutzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_33)
	{
		{	/* Unsafe/ftp.scm 474 */
			return
				CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
					((obj_t) BgL_ftpz00_33), BGl_string2824z00zz__ftpz00, BNIL));
		}

	}



/* &ftp-logout */
	obj_t BGl_z62ftpzd2logoutzb0zz__ftpz00(obj_t BgL_envz00_4059,
		obj_t BgL_ftpz00_4060)
	{
		{	/* Unsafe/ftp.scm 474 */
			{	/* Unsafe/ftp.scm 475 */
				bool_t BgL_tmpz00_5399;

				{	/* Unsafe/ftp.scm 475 */
					BgL_ftpz00_bglt BgL_auxz00_5400;

					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4060, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 475 */
							BgL_auxz00_5400 = ((BgL_ftpz00_bglt) BgL_ftpz00_4060);
						}
					else
						{
							obj_t BgL_auxz00_5404;

							BgL_auxz00_5404 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 16109)), BGl_string2825z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4060);
							FAILURE(BgL_auxz00_5404, BFALSE, BFALSE);
						}
					BgL_tmpz00_5399 = BGl_ftpzd2logoutzd2zz__ftpz00(BgL_auxz00_5400);
				}
				return BBOOL(BgL_tmpz00_5399);
			}
		}

	}



/* ftp-cd */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2cdzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_34, obj_t BgL_directoryz00_35)
	{
		{	/* Unsafe/ftp.scm 480 */
			{	/* Unsafe/ftp.scm 481 */
				obj_t BgL_list1775z00_3469;

				BgL_list1775z00_3469 = MAKE_YOUNG_PAIR(BgL_directoryz00_35, BNIL);
				return
					CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						((obj_t) BgL_ftpz00_34), BGl_string2826z00zz__ftpz00,
						BgL_list1775z00_3469));
			}
		}

	}



/* &ftp-cd */
	obj_t BGl_z62ftpzd2cdzb0zz__ftpz00(obj_t BgL_envz00_4061,
		obj_t BgL_ftpz00_4062, obj_t BgL_directoryz00_4063)
	{
		{	/* Unsafe/ftp.scm 480 */
			{	/* Unsafe/ftp.scm 481 */
				bool_t BgL_tmpz00_5414;

				{	/* Unsafe/ftp.scm 481 */
					obj_t BgL_auxz00_5423;
					BgL_ftpz00_bglt BgL_auxz00_5415;

					if (STRINGP(BgL_directoryz00_4063))
						{	/* Unsafe/ftp.scm 481 */
							BgL_auxz00_5423 = BgL_directoryz00_4063;
						}
					else
						{
							obj_t BgL_auxz00_5426;

							BgL_auxz00_5426 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 16396)), BGl_string2827z00zz__ftpz00,
								BGl_string2828z00zz__ftpz00, BgL_directoryz00_4063);
							FAILURE(BgL_auxz00_5426, BFALSE, BFALSE);
						}
					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4062, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 481 */
							BgL_auxz00_5415 = ((BgL_ftpz00_bglt) BgL_ftpz00_4062);
						}
					else
						{
							obj_t BgL_auxz00_5419;

							BgL_auxz00_5419 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 16396)), BGl_string2827z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4062);
							FAILURE(BgL_auxz00_5419, BFALSE, BFALSE);
						}
					BgL_tmpz00_5414 =
						BGl_ftpzd2cdzd2zz__ftpz00(BgL_auxz00_5415, BgL_auxz00_5423);
				}
				return BBOOL(BgL_tmpz00_5414);
			}
		}

	}



/* ftp-cd-parent */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2cdzd2parentz00zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_36)
	{
		{	/* Unsafe/ftp.scm 486 */
			return
				CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
					((obj_t) BgL_ftpz00_36), BGl_string2829z00zz__ftpz00, BNIL));
		}

	}



/* &ftp-cd-parent */
	obj_t BGl_z62ftpzd2cdzd2parentz62zz__ftpz00(obj_t BgL_envz00_4064,
		obj_t BgL_ftpz00_4065)
	{
		{	/* Unsafe/ftp.scm 486 */
			{	/* Unsafe/ftp.scm 487 */
				bool_t BgL_tmpz00_5435;

				{	/* Unsafe/ftp.scm 487 */
					BgL_ftpz00_bglt BgL_auxz00_5436;

					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4065, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 487 */
							BgL_auxz00_5436 = ((BgL_ftpz00_bglt) BgL_ftpz00_4065);
						}
					else
						{
							obj_t BgL_auxz00_5440;

							BgL_auxz00_5440 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 16689)), BGl_string2830z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4065);
							FAILURE(BgL_auxz00_5440, BFALSE, BFALSE);
						}
					BgL_tmpz00_5435 = BGl_ftpzd2cdzd2parentz00zz__ftpz00(BgL_auxz00_5436);
				}
				return BBOOL(BgL_tmpz00_5435);
			}
		}

	}



/* ftp-mount */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2mountzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_37, obj_t BgL_mountzd2pointzd2_38)
	{
		{	/* Unsafe/ftp.scm 492 */
			{	/* Unsafe/ftp.scm 493 */
				obj_t BgL_list1777z00_3471;

				BgL_list1777z00_3471 = MAKE_YOUNG_PAIR(BgL_mountzd2pointzd2_38, BNIL);
				return
					CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						((obj_t) BgL_ftpz00_37), BGl_string2831z00zz__ftpz00,
						BgL_list1777z00_3471));
			}
		}

	}



/* &ftp-mount */
	obj_t BGl_z62ftpzd2mountzb0zz__ftpz00(obj_t BgL_envz00_4066,
		obj_t BgL_ftpz00_4067, obj_t BgL_mountzd2pointzd2_4068)
	{
		{	/* Unsafe/ftp.scm 492 */
			{	/* Unsafe/ftp.scm 493 */
				bool_t BgL_tmpz00_5450;

				{	/* Unsafe/ftp.scm 493 */
					obj_t BgL_auxz00_5459;
					BgL_ftpz00_bglt BgL_auxz00_5451;

					if (STRINGP(BgL_mountzd2pointzd2_4068))
						{	/* Unsafe/ftp.scm 493 */
							BgL_auxz00_5459 = BgL_mountzd2pointzd2_4068;
						}
					else
						{
							obj_t BgL_auxz00_5462;

							BgL_auxz00_5462 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 16981)), BGl_string2832z00zz__ftpz00,
								BGl_string2828z00zz__ftpz00, BgL_mountzd2pointzd2_4068);
							FAILURE(BgL_auxz00_5462, BFALSE, BFALSE);
						}
					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4067, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 493 */
							BgL_auxz00_5451 = ((BgL_ftpz00_bglt) BgL_ftpz00_4067);
						}
					else
						{
							obj_t BgL_auxz00_5455;

							BgL_auxz00_5455 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 16981)), BGl_string2832z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4067);
							FAILURE(BgL_auxz00_5455, BFALSE, BFALSE);
						}
					BgL_tmpz00_5450 =
						BGl_ftpzd2mountzd2zz__ftpz00(BgL_auxz00_5451, BgL_auxz00_5459);
				}
				return BBOOL(BgL_tmpz00_5450);
			}
		}

	}



/* ftp-reinitialize */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2reinitializa7ez75zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_39)
	{
		{	/* Unsafe/ftp.scm 498 */
			return
				CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
					((obj_t) BgL_ftpz00_39), BGl_string2833z00zz__ftpz00, BNIL));
		}

	}



/* &ftp-reinitialize */
	obj_t BGl_z62ftpzd2reinitializa7ez17zz__ftpz00(obj_t BgL_envz00_4069,
		obj_t BgL_ftpz00_4070)
	{
		{	/* Unsafe/ftp.scm 498 */
			{	/* Unsafe/ftp.scm 499 */
				bool_t BgL_tmpz00_5471;

				{	/* Unsafe/ftp.scm 499 */
					BgL_ftpz00_bglt BgL_auxz00_5472;

					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4070, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 499 */
							BgL_auxz00_5472 = ((BgL_ftpz00_bglt) BgL_ftpz00_4070);
						}
					else
						{
							obj_t BgL_auxz00_5476;

							BgL_auxz00_5476 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 17280)), BGl_string2834z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4070);
							FAILURE(BgL_auxz00_5476, BFALSE, BFALSE);
						}
					BgL_tmpz00_5471 =
						BGl_ftpzd2reinitializa7ez75zz__ftpz00(BgL_auxz00_5472);
				}
				return BBOOL(BgL_tmpz00_5471);
			}
		}

	}



/* ftp-data-port */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2datazd2portz00zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_40, obj_t BgL_hostz00_41, obj_t BgL_portz00_42)
	{
		{	/* Unsafe/ftp.scm 504 */
			{	/* Unsafe/ftp.scm 505 */
				BgL_z62ftpzd2errorzb0_bglt BgL_arg1779z00_1968;

				{	/* Unsafe/ftp.scm 505 */
					BgL_z62ftpzd2errorzb0_bglt BgL_new1134z00_1969;

					{	/* Unsafe/ftp.scm 505 */
						BgL_z62ftpzd2errorzb0_bglt BgL_new1133z00_1972;

						BgL_new1133z00_1972 =
							((BgL_z62ftpzd2errorzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_z62ftpzd2errorzb0_bgl))));
						{	/* Unsafe/ftp.scm 505 */
							long BgL_arg1782z00_1973;

							{	/* Unsafe/ftp.scm 505 */
								long BgL_res2543z00_3474;

								BgL_res2543z00_3474 =
									BGL_CLASS_INDEX(BGl_z62ftpzd2errorzb0zz__ftpz00);
								BgL_arg1782z00_1973 = BgL_res2543z00_3474;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1133z00_1972),
								BgL_arg1782z00_1973);
						}
						BgL_new1134z00_1969 = BgL_new1133z00_1972;
					}
					((((BgL_z62exceptionz62_bglt) COBJECT(
									((BgL_z62exceptionz62_bglt) BgL_new1134z00_1969)))->
							BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
					((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
										BgL_new1134z00_1969)))->BgL_locationz00) =
						((obj_t) BFALSE), BUNSPEC);
					{
						obj_t BgL_auxz00_5490;

						{	/* Unsafe/ftp.scm 505 */
							obj_t BgL_arg1780z00_1970;

							{	/* Unsafe/ftp.scm 505 */
								obj_t BgL_arg1781z00_1971;

								{	/* Unsafe/ftp.scm 505 */
									obj_t BgL_res2544z00_3478;

									{	/* Unsafe/ftp.scm 505 */
										obj_t BgL_classz00_3477;

										BgL_classz00_3477 = BGl_z62ftpzd2errorzb0zz__ftpz00;
										BgL_res2544z00_3478 =
											BGL_CLASS_ALL_FIELDS(BgL_classz00_3477);
									}
									BgL_arg1781z00_1971 = BgL_res2544z00_3478;
								}
								BgL_arg1780z00_1970 =
									VECTOR_REF(BgL_arg1781z00_1971, ((long) 2));
							}
							BgL_auxz00_5490 =
								BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
								(BgL_arg1780z00_1970);
						}
						((((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt) BgL_new1134z00_1969)))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_5490), BUNSPEC);
					}
					((((BgL_z62errorz62_bglt) COBJECT(
									((BgL_z62errorz62_bglt) BgL_new1134z00_1969)))->BgL_procz00) =
						((obj_t) BGl_string2821z00zz__ftpz00), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
										BgL_new1134z00_1969)))->BgL_msgz00) =
						((obj_t) BGl_string2835z00zz__ftpz00), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
										BgL_new1134z00_1969)))->BgL_objz00) =
						((obj_t) ((obj_t) BgL_ftpz00_40)), BUNSPEC);
					BgL_arg1779z00_1968 = BgL_new1134z00_1969;
				}
				return CBOOL(BGl_raisez00zz__errorz00(((obj_t) BgL_arg1779z00_1968)));
			}
		}

	}



/* &ftp-data-port */
	obj_t BGl_z62ftpzd2datazd2portz62zz__ftpz00(obj_t BgL_envz00_4071,
		obj_t BgL_ftpz00_4072, obj_t BgL_hostz00_4073, obj_t BgL_portz00_4074)
	{
		{	/* Unsafe/ftp.scm 504 */
			{	/* Unsafe/ftp.scm 505 */
				bool_t BgL_tmpz00_5506;

				{	/* Unsafe/ftp.scm 505 */
					obj_t BgL_auxz00_5522;
					obj_t BgL_auxz00_5515;
					BgL_ftpz00_bglt BgL_auxz00_5507;

					if (INTEGERP(BgL_portz00_4074))
						{	/* Unsafe/ftp.scm 505 */
							BgL_auxz00_5522 = BgL_portz00_4074;
						}
					else
						{
							obj_t BgL_auxz00_5525;

							BgL_auxz00_5525 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 17581)), BGl_string2836z00zz__ftpz00,
								BGl_string2837z00zz__ftpz00, BgL_portz00_4074);
							FAILURE(BgL_auxz00_5525, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_hostz00_4073))
						{	/* Unsafe/ftp.scm 505 */
							BgL_auxz00_5515 = BgL_hostz00_4073;
						}
					else
						{
							obj_t BgL_auxz00_5518;

							BgL_auxz00_5518 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 17581)), BGl_string2836z00zz__ftpz00,
								BGl_string2828z00zz__ftpz00, BgL_hostz00_4073);
							FAILURE(BgL_auxz00_5518, BFALSE, BFALSE);
						}
					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4072, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 505 */
							BgL_auxz00_5507 = ((BgL_ftpz00_bglt) BgL_ftpz00_4072);
						}
					else
						{
							obj_t BgL_auxz00_5511;

							BgL_auxz00_5511 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 17581)), BGl_string2836z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4072);
							FAILURE(BgL_auxz00_5511, BFALSE, BFALSE);
						}
					BgL_tmpz00_5506 =
						BGl_ftpzd2datazd2portz00zz__ftpz00(BgL_auxz00_5507, BgL_auxz00_5515,
						BgL_auxz00_5522);
				}
				return BBOOL(BgL_tmpz00_5506);
			}
		}

	}



/* ftp-passive */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2passivezd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_43)
	{
		{	/* Unsafe/ftp.scm 513 */
			return
				CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
					((obj_t) BgL_ftpz00_43), BGl_string2820z00zz__ftpz00, BNIL));
		}

	}



/* &ftp-passive */
	obj_t BGl_z62ftpzd2passivezb0zz__ftpz00(obj_t BgL_envz00_4075,
		obj_t BgL_ftpz00_4076)
	{
		{	/* Unsafe/ftp.scm 513 */
			{	/* Unsafe/ftp.scm 514 */
				bool_t BgL_tmpz00_5534;

				{	/* Unsafe/ftp.scm 514 */
					BgL_ftpz00_bglt BgL_auxz00_5535;

					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4076, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 514 */
							BgL_auxz00_5535 = ((BgL_ftpz00_bglt) BgL_ftpz00_4076);
						}
					else
						{
							obj_t BgL_auxz00_5539;

							BgL_auxz00_5539 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 17960)), BGl_string2838z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4076);
							FAILURE(BgL_auxz00_5539, BFALSE, BFALSE);
						}
					BgL_tmpz00_5534 = BGl_ftpzd2passivezd2zz__ftpz00(BgL_auxz00_5535);
				}
				return BBOOL(BgL_tmpz00_5534);
			}
		}

	}



/* ftp-data-type */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2datazd2typez00zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_44, obj_t BgL_typez00_45, obj_t BgL_localzd2bytezd2siza7eza7_46)
	{
		{	/* Unsafe/ftp.scm 519 */
			{

				{	/* Unsafe/ftp.scm 520 */
					unsigned char BgL_aux1138z00_1976;

					{	/* Unsafe/ftp.scm 520 */
						obj_t BgL_arg1787z00_1980;

						{	/* Unsafe/ftp.scm 520 */
							obj_t BgL_res2547z00_3489;

							BgL_res2547z00_3489 = SYMBOL_TO_STRING(BgL_typez00_45);
							BgL_arg1787z00_1980 = BgL_res2547z00_3489;
						}
						BgL_aux1138z00_1976 = STRING_REF(BgL_arg1787z00_1980, ((long) 0));
					}
					switch (BgL_aux1138z00_1976)
						{
						case ((unsigned char) 'a'):
						case ((unsigned char) 'A'):

							{	/* Unsafe/ftp.scm 522 */
								obj_t BgL_list1785z00_1978;

								BgL_list1785z00_1978 =
									MAKE_YOUNG_PAIR(BGl_string2841z00zz__ftpz00, BNIL);
								return
									CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
										((obj_t) BgL_ftpz00_44), BGl_string2842z00zz__ftpz00,
										BgL_list1785z00_1978));
							}
							break;
						case ((unsigned char) 'i'):
						case ((unsigned char) 'I'):

							{	/* Unsafe/ftp.scm 524 */
								obj_t BgL_list1786z00_1979;

								BgL_list1786z00_1979 =
									MAKE_YOUNG_PAIR(BGl_string2843z00zz__ftpz00, BNIL);
								return
									CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
										((obj_t) BgL_ftpz00_44), BGl_string2842z00zz__ftpz00,
										BgL_list1786z00_1979));
							}
							break;
						default:
							{	/* Unsafe/ftp.scm 520 */
								obj_t BgL_tmpz00_5555;

								{	/* Unsafe/ftp.scm 526 */
									BgL_z62ftpzd2parsezd2errorz62_bglt BgL_arg1788z00_1981;

									{	/* Unsafe/ftp.scm 526 */
										BgL_z62ftpzd2parsezd2errorz62_bglt BgL_new1136z00_1982;

										{	/* Unsafe/ftp.scm 526 */
											BgL_z62ftpzd2parsezd2errorz62_bglt BgL_new1135z00_1985;

											BgL_new1135z00_1985 =
												((BgL_z62ftpzd2parsezd2errorz62_bglt)
												BOBJECT(GC_MALLOC(sizeof(struct
															BgL_z62ftpzd2parsezd2errorz62_bgl))));
											{	/* Unsafe/ftp.scm 526 */
												long BgL_arg1791z00_1986;

												{	/* Unsafe/ftp.scm 526 */
													long BgL_res2545z00_3482;

													BgL_res2545z00_3482 =
														BGL_CLASS_INDEX
														(BGl_z62ftpzd2parsezd2errorz62zz__ftpz00);
													BgL_arg1791z00_1986 = BgL_res2545z00_3482;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1135z00_1985),
													BgL_arg1791z00_1986);
											}
											BgL_new1136z00_1982 = BgL_new1135z00_1985;
										}
										((((BgL_z62exceptionz62_bglt) COBJECT(
														((BgL_z62exceptionz62_bglt) BgL_new1136z00_1982)))->
												BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
										((((BgL_z62exceptionz62_bglt)
													COBJECT(((BgL_z62exceptionz62_bglt)
															BgL_new1136z00_1982)))->BgL_locationz00) =
											((obj_t) BFALSE), BUNSPEC);
										{
											obj_t BgL_auxz00_5564;

											{	/* Unsafe/ftp.scm 526 */
												obj_t BgL_arg1789z00_1983;

												{	/* Unsafe/ftp.scm 526 */
													obj_t BgL_arg1790z00_1984;

													{	/* Unsafe/ftp.scm 526 */
														obj_t BgL_res2546z00_3486;

														{	/* Unsafe/ftp.scm 526 */
															obj_t BgL_classz00_3485;

															BgL_classz00_3485 =
																BGl_z62ftpzd2parsezd2errorz62zz__ftpz00;
															BgL_res2546z00_3486 =
																BGL_CLASS_ALL_FIELDS(BgL_classz00_3485);
														}
														BgL_arg1790z00_1984 = BgL_res2546z00_3486;
													}
													BgL_arg1789z00_1983 =
														VECTOR_REF(BgL_arg1790z00_1984, ((long) 2));
												}
												BgL_auxz00_5564 =
													BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
													(BgL_arg1789z00_1983);
											}
											((((BgL_z62exceptionz62_bglt) COBJECT(
															((BgL_z62exceptionz62_bglt)
																BgL_new1136z00_1982)))->BgL_stackz00) =
												((obj_t) BgL_auxz00_5564), BUNSPEC);
										}
										((((BgL_z62errorz62_bglt) COBJECT(
														((BgL_z62errorz62_bglt) BgL_new1136z00_1982)))->
												BgL_procz00) =
											((obj_t) BGl_string2839z00zz__ftpz00), BUNSPEC);
										((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
															BgL_new1136z00_1982)))->BgL_msgz00) =
											((obj_t) BGl_string2840z00zz__ftpz00), BUNSPEC);
										((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
															BgL_new1136z00_1982)))->BgL_objz00) =
											((obj_t) BgL_typez00_45), BUNSPEC);
										BgL_arg1788z00_1981 = BgL_new1136z00_1982;
									}
									BgL_tmpz00_5555 =
										BGl_raisez00zz__errorz00(((obj_t) BgL_arg1788z00_1981));
								}
								return CBOOL(BgL_tmpz00_5555);
							}
						}
				}
			}
		}

	}



/* &ftp-data-type */
	obj_t BGl_z62ftpzd2datazd2typez62zz__ftpz00(obj_t BgL_envz00_4077,
		obj_t BgL_ftpz00_4078, obj_t BgL_typez00_4079,
		obj_t BgL_localzd2bytezd2siza7eza7_4080)
	{
		{	/* Unsafe/ftp.scm 519 */
			{	/* Unsafe/ftp.scm 520 */
				bool_t BgL_tmpz00_5580;

				{	/* Unsafe/ftp.scm 520 */
					obj_t BgL_auxz00_5589;
					BgL_ftpz00_bglt BgL_auxz00_5581;

					if (SYMBOLP(BgL_typez00_4079))
						{	/* Unsafe/ftp.scm 520 */
							BgL_auxz00_5589 = BgL_typez00_4079;
						}
					else
						{
							obj_t BgL_auxz00_5592;

							BgL_auxz00_5592 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 18267)), BGl_string2844z00zz__ftpz00,
								BGl_string2845z00zz__ftpz00, BgL_typez00_4079);
							FAILURE(BgL_auxz00_5592, BFALSE, BFALSE);
						}
					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4078, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 520 */
							BgL_auxz00_5581 = ((BgL_ftpz00_bglt) BgL_ftpz00_4078);
						}
					else
						{
							obj_t BgL_auxz00_5585;

							BgL_auxz00_5585 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 18267)), BGl_string2844z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4078);
							FAILURE(BgL_auxz00_5585, BFALSE, BFALSE);
						}
					BgL_tmpz00_5580 =
						BGl_ftpzd2datazd2typez00zz__ftpz00(BgL_auxz00_5581, BgL_auxz00_5589,
						BgL_localzd2bytezd2siza7eza7_4080);
				}
				return BBOOL(BgL_tmpz00_5580);
			}
		}

	}



/* ftp-file-structure */
	BGL_EXPORTED_DEF bool_t
		BGl_ftpzd2filezd2structurez00zz__ftpz00(BgL_ftpz00_bglt BgL_ftpz00_47,
		obj_t BgL_structurez00_48)
	{
		{	/* Unsafe/ftp.scm 534 */
			{	/* Unsafe/ftp.scm 535 */
				obj_t BgL_list1792z00_3492;

				BgL_list1792z00_3492 =
					MAKE_YOUNG_PAIR(BGl_string2846z00zz__ftpz00, BNIL);
				return
					CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						((obj_t) BgL_ftpz00_47), BGl_string2847z00zz__ftpz00,
						BgL_list1792z00_3492));
			}
		}

	}



/* &ftp-file-structure */
	obj_t BGl_z62ftpzd2filezd2structurez62zz__ftpz00(obj_t BgL_envz00_4081,
		obj_t BgL_ftpz00_4082, obj_t BgL_structurez00_4083)
	{
		{	/* Unsafe/ftp.scm 534 */
			{	/* Unsafe/ftp.scm 535 */
				bool_t BgL_tmpz00_5602;

				{	/* Unsafe/ftp.scm 535 */
					BgL_ftpz00_bglt BgL_auxz00_5603;

					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4082, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 535 */
							BgL_auxz00_5603 = ((BgL_ftpz00_bglt) BgL_ftpz00_4082);
						}
					else
						{
							obj_t BgL_auxz00_5607;

							BgL_auxz00_5607 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 18864)), BGl_string2848z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4082);
							FAILURE(BgL_auxz00_5607, BFALSE, BFALSE);
						}
					BgL_tmpz00_5602 =
						BGl_ftpzd2filezd2structurez00zz__ftpz00(BgL_auxz00_5603,
						BgL_structurez00_4083);
				}
				return BBOOL(BgL_tmpz00_5602);
			}
		}

	}



/* ftp-transfer-mode */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2transferzd2modez00zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_49, obj_t BgL_modez00_50)
	{
		{	/* Unsafe/ftp.scm 540 */
			{	/* Unsafe/ftp.scm 541 */
				obj_t BgL_list1793z00_3493;

				BgL_list1793z00_3493 =
					MAKE_YOUNG_PAIR(BGl_string2849z00zz__ftpz00, BNIL);
				return
					CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						((obj_t) BgL_ftpz00_49), BGl_string2850z00zz__ftpz00,
						BgL_list1793z00_3493));
			}
		}

	}



/* &ftp-transfer-mode */
	obj_t BGl_z62ftpzd2transferzd2modez62zz__ftpz00(obj_t BgL_envz00_4084,
		obj_t BgL_ftpz00_4085, obj_t BgL_modez00_4086)
	{
		{	/* Unsafe/ftp.scm 540 */
			{	/* Unsafe/ftp.scm 541 */
				bool_t BgL_tmpz00_5617;

				{	/* Unsafe/ftp.scm 541 */
					BgL_ftpz00_bglt BgL_auxz00_5618;

					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4085, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 541 */
							BgL_auxz00_5618 = ((BgL_ftpz00_bglt) BgL_ftpz00_4085);
						}
					else
						{
							obj_t BgL_auxz00_5622;

							BgL_auxz00_5622 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 19163)), BGl_string2851z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4085);
							FAILURE(BgL_auxz00_5622, BFALSE, BFALSE);
						}
					BgL_tmpz00_5617 =
						BGl_ftpzd2transferzd2modez00zz__ftpz00(BgL_auxz00_5618,
						BgL_modez00_4086);
				}
				return BBOOL(BgL_tmpz00_5617);
			}
		}

	}



/* ftp-retrieve */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2retrievezd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_51, obj_t BgL_filenamez00_52)
	{
		{	/* Unsafe/ftp.scm 546 */
			{	/* Unsafe/ftp.scm 547 */
				obj_t BgL_list1794z00_3494;

				BgL_list1794z00_3494 = MAKE_YOUNG_PAIR(BgL_filenamez00_52, BNIL);
				return
					BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
					((obj_t) BgL_ftpz00_51), BGl_string2796z00zz__ftpz00,
					BgL_list1794z00_3494);
			}
		}

	}



/* &ftp-retrieve */
	obj_t BGl_z62ftpzd2retrievezb0zz__ftpz00(obj_t BgL_envz00_4087,
		obj_t BgL_ftpz00_4088, obj_t BgL_filenamez00_4089)
	{
		{	/* Unsafe/ftp.scm 546 */
			{	/* Unsafe/ftp.scm 547 */
				obj_t BgL_auxz00_5639;
				BgL_ftpz00_bglt BgL_auxz00_5631;

				if (STRINGP(BgL_filenamez00_4089))
					{	/* Unsafe/ftp.scm 547 */
						BgL_auxz00_5639 = BgL_filenamez00_4089;
					}
				else
					{
						obj_t BgL_auxz00_5642;

						BgL_auxz00_5642 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 19459)), BGl_string2852z00zz__ftpz00,
							BGl_string2828z00zz__ftpz00, BgL_filenamez00_4089);
						FAILURE(BgL_auxz00_5642, BFALSE, BFALSE);
					}
				if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4088, BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 547 */
						BgL_auxz00_5631 = ((BgL_ftpz00_bglt) BgL_ftpz00_4088);
					}
				else
					{
						obj_t BgL_auxz00_5635;

						BgL_auxz00_5635 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 19459)), BGl_string2852z00zz__ftpz00,
							BGl_string2793z00zz__ftpz00, BgL_ftpz00_4088);
						FAILURE(BgL_auxz00_5635, BFALSE, BFALSE);
					}
				return
					BGl_ftpzd2retrievezd2zz__ftpz00(BgL_auxz00_5631, BgL_auxz00_5639);
			}
		}

	}



/* ftp-store */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2storezd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_53, obj_t BgL_sourcez00_54, obj_t BgL_destinationz00_55)
	{
		{	/* Unsafe/ftp.scm 552 */
			{	/* Unsafe/ftp.scm 554 */
				obj_t BgL_opz00_1991;

				{	/* Unsafe/ftp.scm 554 */
					obj_t BgL_arg1798z00_1997;

					BgL_arg1798z00_1997 =
						(((BgL_z52ftpz52_bglt) COBJECT(
								((BgL_z52ftpz52_bglt) BgL_ftpz00_53)))->BgL_dtpz00);
					{	/* Unsafe/ftp.scm 554 */
						obj_t BgL_res2549z00_3496;

						{	/* Unsafe/ftp.scm 554 */
							obj_t BgL_tmpz00_5649;

							BgL_tmpz00_5649 = ((obj_t) BgL_arg1798z00_1997);
							BgL_res2549z00_3496 = SOCKET_OUTPUT(BgL_tmpz00_5649);
						}
						BgL_opz00_1991 = BgL_res2549z00_3496;
					}
				}
				if (fexists(BSTRING_TO_STRING(BgL_sourcez00_54)))
					{	/* Unsafe/ftp.scm 556 */
						obj_t BgL__andtest_1141z00_1993;

						if (CBOOL(BgL_destinationz00_55))
							{	/* Unsafe/ftp.scm 557 */
								obj_t BgL_list1796z00_1995;

								BgL_list1796z00_1995 =
									MAKE_YOUNG_PAIR(BgL_destinationz00_55, BNIL);
								BgL__andtest_1141z00_1993 =
									BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
									((obj_t) BgL_ftpz00_53), BGl_string2853z00zz__ftpz00,
									BgL_list1796z00_1995);
							}
						else
							{	/* Unsafe/ftp.scm 556 */
								BgL__andtest_1141z00_1993 =
									BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
									((obj_t) BgL_ftpz00_53), BGl_string2854z00zz__ftpz00, BNIL);
							}
						if (CBOOL(BgL__andtest_1141z00_1993))
							{	/* Unsafe/ftp.scm 559 */
								long BgL_arg1795z00_1994;

								BgL_arg1795z00_1994 =
									bgl_file_size(BSTRING_TO_STRING(BgL_sourcez00_54));
								{	/* Unsafe/ftp.scm 559 */
									long BgL_xz00_4386;

									BgL_xz00_4386 =
										BGl_sendzd2filezd2zz__r4_input_6_10_2z00(BgL_sourcez00_54,
										BgL_opz00_1991, BgL_arg1795z00_1994, ((long) 0));
									return ((bool_t) 1);
								}
							}
						else
							{	/* Unsafe/ftp.scm 556 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Unsafe/ftp.scm 555 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &ftp-store */
	obj_t BGl_z62ftpzd2storezb0zz__ftpz00(obj_t BgL_envz00_4090,
		obj_t BgL_ftpz00_4091, obj_t BgL_sourcez00_4092,
		obj_t BgL_destinationz00_4093)
	{
		{	/* Unsafe/ftp.scm 552 */
			{	/* Unsafe/ftp.scm 553 */
				bool_t BgL_tmpz00_5667;

				{	/* Unsafe/ftp.scm 553 */
					obj_t BgL_auxz00_5676;
					BgL_ftpz00_bglt BgL_auxz00_5668;

					if (STRINGP(BgL_sourcez00_4092))
						{	/* Unsafe/ftp.scm 553 */
							BgL_auxz00_5676 = BgL_sourcez00_4092;
						}
					else
						{
							obj_t BgL_auxz00_5679;

							BgL_auxz00_5679 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 19767)), BGl_string2855z00zz__ftpz00,
								BGl_string2828z00zz__ftpz00, BgL_sourcez00_4092);
							FAILURE(BgL_auxz00_5679, BFALSE, BFALSE);
						}
					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4091, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 553 */
							BgL_auxz00_5668 = ((BgL_ftpz00_bglt) BgL_ftpz00_4091);
						}
					else
						{
							obj_t BgL_auxz00_5672;

							BgL_auxz00_5672 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 19767)), BGl_string2855z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4091);
							FAILURE(BgL_auxz00_5672, BFALSE, BFALSE);
						}
					BgL_tmpz00_5667 =
						BGl_ftpzd2storezd2zz__ftpz00(BgL_auxz00_5668, BgL_auxz00_5676,
						BgL_destinationz00_4093);
				}
				return BBOOL(BgL_tmpz00_5667);
			}
		}

	}



/* ftp-append */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2appendzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_56, obj_t BgL_sourcez00_57, obj_t BgL_destinationz00_58)
	{
		{	/* Unsafe/ftp.scm 564 */
			{	/* Unsafe/ftp.scm 566 */
				obj_t BgL_opz00_3502;

				{	/* Unsafe/ftp.scm 566 */
					obj_t BgL_arg1803z00_3503;

					BgL_arg1803z00_3503 =
						(((BgL_z52ftpz52_bglt) COBJECT(
								((BgL_z52ftpz52_bglt) BgL_ftpz00_56)))->BgL_dtpz00);
					{	/* Unsafe/ftp.scm 566 */
						obj_t BgL_res2552z00_3510;

						{	/* Unsafe/ftp.scm 566 */
							obj_t BgL_tmpz00_5687;

							BgL_tmpz00_5687 = ((obj_t) BgL_arg1803z00_3503);
							BgL_res2552z00_3510 = SOCKET_OUTPUT(BgL_tmpz00_5687);
						}
						BgL_opz00_3502 = BgL_res2552z00_3510;
					}
				}
				if (fexists(BSTRING_TO_STRING(BgL_sourcez00_57)))
					{	/* Unsafe/ftp.scm 568 */
						obj_t BgL__andtest_1144z00_3505;

						{	/* Unsafe/ftp.scm 568 */
							obj_t BgL_list1800z00_3506;

							{	/* Unsafe/ftp.scm 568 */
								obj_t BgL_arg1801z00_3507;

								BgL_arg1801z00_3507 =
									MAKE_YOUNG_PAIR(BgL_destinationz00_58, BNIL);
								BgL_list1800z00_3506 =
									MAKE_YOUNG_PAIR(BgL_sourcez00_57, BgL_arg1801z00_3507);
							}
							BgL__andtest_1144z00_3505 =
								BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
								((obj_t) BgL_ftpz00_56), BGl_string2856z00zz__ftpz00,
								BgL_list1800z00_3506);
						}
						if (CBOOL(BgL__andtest_1144z00_3505))
							{	/* Unsafe/ftp.scm 569 */
								long BgL_arg1799z00_3508;

								BgL_arg1799z00_3508 =
									bgl_file_size(BSTRING_TO_STRING(BgL_sourcez00_57));
								{	/* Unsafe/ftp.scm 569 */
									long BgL_xz00_4393;

									BgL_xz00_4393 =
										BGl_sendzd2filezd2zz__r4_input_6_10_2z00(BgL_sourcez00_57,
										BgL_opz00_3502, BgL_arg1799z00_3508, ((long) 0));
									return ((bool_t) 1);
								}
							}
						else
							{	/* Unsafe/ftp.scm 568 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Unsafe/ftp.scm 567 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &ftp-append */
	obj_t BGl_z62ftpzd2appendzb0zz__ftpz00(obj_t BgL_envz00_4094,
		obj_t BgL_ftpz00_4095, obj_t BgL_sourcez00_4096,
		obj_t BgL_destinationz00_4097)
	{
		{	/* Unsafe/ftp.scm 564 */
			{	/* Unsafe/ftp.scm 565 */
				bool_t BgL_tmpz00_5702;

				{	/* Unsafe/ftp.scm 565 */
					obj_t BgL_auxz00_5718;
					obj_t BgL_auxz00_5711;
					BgL_ftpz00_bglt BgL_auxz00_5703;

					if (STRINGP(BgL_destinationz00_4097))
						{	/* Unsafe/ftp.scm 565 */
							BgL_auxz00_5718 = BgL_destinationz00_4097;
						}
					else
						{
							obj_t BgL_auxz00_5721;

							BgL_auxz00_5721 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 20291)), BGl_string2857z00zz__ftpz00,
								BGl_string2828z00zz__ftpz00, BgL_destinationz00_4097);
							FAILURE(BgL_auxz00_5721, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_sourcez00_4096))
						{	/* Unsafe/ftp.scm 565 */
							BgL_auxz00_5711 = BgL_sourcez00_4096;
						}
					else
						{
							obj_t BgL_auxz00_5714;

							BgL_auxz00_5714 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 20291)), BGl_string2857z00zz__ftpz00,
								BGl_string2828z00zz__ftpz00, BgL_sourcez00_4096);
							FAILURE(BgL_auxz00_5714, BFALSE, BFALSE);
						}
					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4095, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 565 */
							BgL_auxz00_5703 = ((BgL_ftpz00_bglt) BgL_ftpz00_4095);
						}
					else
						{
							obj_t BgL_auxz00_5707;

							BgL_auxz00_5707 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 20291)), BGl_string2857z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4095);
							FAILURE(BgL_auxz00_5707, BFALSE, BFALSE);
						}
					BgL_tmpz00_5702 =
						BGl_ftpzd2appendzd2zz__ftpz00(BgL_auxz00_5703, BgL_auxz00_5711,
						BgL_auxz00_5718);
				}
				return BBOOL(BgL_tmpz00_5702);
			}
		}

	}



/* ftp-allocate */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2allocatezd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_59, obj_t BgL_siza7eza7_60,
		obj_t BgL_pagezd2orzd2recordzd2siza7ez75_61)
	{
		{	/* Unsafe/ftp.scm 574 */
			{	/* Unsafe/ftp.scm 575 */
				obj_t BgL_prsiza7eza7_3515;

				if (PAIRP(BgL_pagezd2orzd2recordzd2siza7ez75_61))
					{	/* Unsafe/ftp.scm 575 */
						BgL_prsiza7eza7_3515 = CAR(BgL_pagezd2orzd2recordzd2siza7ez75_61);
					}
				else
					{	/* Unsafe/ftp.scm 575 */
						BgL_prsiza7eza7_3515 = BFALSE;
					}
				if (CBOOL(BgL_prsiza7eza7_3515))
					{	/* Unsafe/ftp.scm 577 */
						obj_t BgL_list1804z00_3517;

						{	/* Unsafe/ftp.scm 577 */
							obj_t BgL_arg1805z00_3518;

							{	/* Unsafe/ftp.scm 577 */
								obj_t BgL_arg1806z00_3519;

								BgL_arg1806z00_3519 =
									MAKE_YOUNG_PAIR(BgL_prsiza7eza7_3515, BNIL);
								BgL_arg1805z00_3518 =
									MAKE_YOUNG_PAIR(BGl_string2858z00zz__ftpz00,
									BgL_arg1806z00_3519);
							}
							BgL_list1804z00_3517 =
								MAKE_YOUNG_PAIR(BgL_siza7eza7_60, BgL_arg1805z00_3518);
						}
						return
							CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
								((obj_t) BgL_ftpz00_59), BGl_string2859z00zz__ftpz00,
								BgL_list1804z00_3517));
					}
				else
					{	/* Unsafe/ftp.scm 578 */
						obj_t BgL_list1807z00_3520;

						BgL_list1807z00_3520 = MAKE_YOUNG_PAIR(BgL_siza7eza7_60, BNIL);
						return
							CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
								((obj_t) BgL_ftpz00_59), BGl_string2859z00zz__ftpz00,
								BgL_list1807z00_3520));
					}
			}
		}

	}



/* &ftp-allocate */
	obj_t BGl_z62ftpzd2allocatezb0zz__ftpz00(obj_t BgL_envz00_4098,
		obj_t BgL_ftpz00_4099, obj_t BgL_siza7eza7_4100,
		obj_t BgL_pagezd2orzd2recordzd2siza7ez75_4101)
	{
		{	/* Unsafe/ftp.scm 574 */
			{	/* Unsafe/ftp.scm 575 */
				bool_t BgL_tmpz00_5742;

				{	/* Unsafe/ftp.scm 575 */
					obj_t BgL_auxz00_5751;
					BgL_ftpz00_bglt BgL_auxz00_5743;

					if (INTEGERP(BgL_siza7eza7_4100))
						{	/* Unsafe/ftp.scm 575 */
							BgL_auxz00_5751 = BgL_siza7eza7_4100;
						}
					else
						{
							obj_t BgL_auxz00_5754;

							BgL_auxz00_5754 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 20778)), BGl_string2860z00zz__ftpz00,
								BGl_string2837z00zz__ftpz00, BgL_siza7eza7_4100);
							FAILURE(BgL_auxz00_5754, BFALSE, BFALSE);
						}
					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4099, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 575 */
							BgL_auxz00_5743 = ((BgL_ftpz00_bglt) BgL_ftpz00_4099);
						}
					else
						{
							obj_t BgL_auxz00_5747;

							BgL_auxz00_5747 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 20778)), BGl_string2860z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4099);
							FAILURE(BgL_auxz00_5747, BFALSE, BFALSE);
						}
					BgL_tmpz00_5742 =
						BGl_ftpzd2allocatezd2zz__ftpz00(BgL_auxz00_5743, BgL_auxz00_5751,
						BgL_pagezd2orzd2recordzd2siza7ez75_4101);
				}
				return BBOOL(BgL_tmpz00_5742);
			}
		}

	}



/* ftp-restart */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2restartzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_62, obj_t BgL_positionz00_63)
	{
		{	/* Unsafe/ftp.scm 583 */
			{	/* Unsafe/ftp.scm 584 */
				obj_t BgL_list1808z00_3523;

				BgL_list1808z00_3523 = MAKE_YOUNG_PAIR(BgL_positionz00_63, BNIL);
				return
					CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						((obj_t) BgL_ftpz00_62), BGl_string2861z00zz__ftpz00,
						BgL_list1808z00_3523));
			}
		}

	}



/* &ftp-restart */
	obj_t BGl_z62ftpzd2restartzb0zz__ftpz00(obj_t BgL_envz00_4102,
		obj_t BgL_ftpz00_4103, obj_t BgL_positionz00_4104)
	{
		{	/* Unsafe/ftp.scm 583 */
			{	/* Unsafe/ftp.scm 584 */
				bool_t BgL_tmpz00_5764;

				{	/* Unsafe/ftp.scm 584 */
					obj_t BgL_auxz00_5773;
					BgL_ftpz00_bglt BgL_auxz00_5765;

					if (INTEGERP(BgL_positionz00_4104))
						{	/* Unsafe/ftp.scm 584 */
							BgL_auxz00_5773 = BgL_positionz00_4104;
						}
					else
						{
							obj_t BgL_auxz00_5776;

							BgL_auxz00_5776 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 21220)), BGl_string2862z00zz__ftpz00,
								BGl_string2837z00zz__ftpz00, BgL_positionz00_4104);
							FAILURE(BgL_auxz00_5776, BFALSE, BFALSE);
						}
					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4103, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 584 */
							BgL_auxz00_5765 = ((BgL_ftpz00_bglt) BgL_ftpz00_4103);
						}
					else
						{
							obj_t BgL_auxz00_5769;

							BgL_auxz00_5769 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 21220)), BGl_string2862z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4103);
							FAILURE(BgL_auxz00_5769, BFALSE, BFALSE);
						}
					BgL_tmpz00_5764 =
						BGl_ftpzd2restartzd2zz__ftpz00(BgL_auxz00_5765, BgL_auxz00_5773);
				}
				return BBOOL(BgL_tmpz00_5764);
			}
		}

	}



/* ftp-rename-file */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2renamezd2filez00zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_64, obj_t BgL_fromz00_65, obj_t BgL_toz00_66)
	{
		{	/* Unsafe/ftp.scm 589 */
			{	/* Unsafe/ftp.scm 590 */
				obj_t BgL__andtest_1146z00_3524;

				{	/* Unsafe/ftp.scm 590 */
					obj_t BgL_list1810z00_3525;

					BgL_list1810z00_3525 = MAKE_YOUNG_PAIR(BgL_fromz00_65, BNIL);
					BgL__andtest_1146z00_3524 =
						BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						((obj_t) BgL_ftpz00_64), BGl_string2863z00zz__ftpz00,
						BgL_list1810z00_3525);
				}
				if (CBOOL(BgL__andtest_1146z00_3524))
					{	/* Unsafe/ftp.scm 591 */
						obj_t BgL_list1809z00_3526;

						BgL_list1809z00_3526 = MAKE_YOUNG_PAIR(BgL_toz00_66, BNIL);
						return
							CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
								((obj_t) BgL_ftpz00_64), BGl_string2864z00zz__ftpz00,
								BgL_list1809z00_3526));
					}
				else
					{	/* Unsafe/ftp.scm 590 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &ftp-rename-file */
	obj_t BGl_z62ftpzd2renamezd2filez62zz__ftpz00(obj_t BgL_envz00_4105,
		obj_t BgL_ftpz00_4106, obj_t BgL_fromz00_4107, obj_t BgL_toz00_4108)
	{
		{	/* Unsafe/ftp.scm 589 */
			{	/* Unsafe/ftp.scm 590 */
				bool_t BgL_tmpz00_5791;

				{	/* Unsafe/ftp.scm 590 */
					obj_t BgL_auxz00_5807;
					obj_t BgL_auxz00_5800;
					BgL_ftpz00_bglt BgL_auxz00_5792;

					if (STRINGP(BgL_toz00_4108))
						{	/* Unsafe/ftp.scm 590 */
							BgL_auxz00_5807 = BgL_toz00_4108;
						}
					else
						{
							obj_t BgL_auxz00_5810;

							BgL_auxz00_5810 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 21528)), BGl_string2865z00zz__ftpz00,
								BGl_string2828z00zz__ftpz00, BgL_toz00_4108);
							FAILURE(BgL_auxz00_5810, BFALSE, BFALSE);
						}
					if (STRINGP(BgL_fromz00_4107))
						{	/* Unsafe/ftp.scm 590 */
							BgL_auxz00_5800 = BgL_fromz00_4107;
						}
					else
						{
							obj_t BgL_auxz00_5803;

							BgL_auxz00_5803 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 21528)), BGl_string2865z00zz__ftpz00,
								BGl_string2828z00zz__ftpz00, BgL_fromz00_4107);
							FAILURE(BgL_auxz00_5803, BFALSE, BFALSE);
						}
					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4106, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 590 */
							BgL_auxz00_5792 = ((BgL_ftpz00_bglt) BgL_ftpz00_4106);
						}
					else
						{
							obj_t BgL_auxz00_5796;

							BgL_auxz00_5796 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 21528)), BGl_string2865z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4106);
							FAILURE(BgL_auxz00_5796, BFALSE, BFALSE);
						}
					BgL_tmpz00_5791 =
						BGl_ftpzd2renamezd2filez00zz__ftpz00(BgL_auxz00_5792,
						BgL_auxz00_5800, BgL_auxz00_5807);
				}
				return BBOOL(BgL_tmpz00_5791);
			}
		}

	}



/* ftp-abort */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2abortzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_67)
	{
		{	/* Unsafe/ftp.scm 596 */
			return
				CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
					((obj_t) BgL_ftpz00_67), BGl_string2866z00zz__ftpz00, BNIL));
		}

	}



/* &ftp-abort */
	obj_t BGl_z62ftpzd2abortzb0zz__ftpz00(obj_t BgL_envz00_4109,
		obj_t BgL_ftpz00_4110)
	{
		{	/* Unsafe/ftp.scm 596 */
			{	/* Unsafe/ftp.scm 597 */
				bool_t BgL_tmpz00_5819;

				{	/* Unsafe/ftp.scm 597 */
					BgL_ftpz00_bglt BgL_auxz00_5820;

					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4110, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 597 */
							BgL_auxz00_5820 = ((BgL_ftpz00_bglt) BgL_ftpz00_4110);
						}
					else
						{
							obj_t BgL_auxz00_5824;

							BgL_auxz00_5824 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 21847)), BGl_string2867z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4110);
							FAILURE(BgL_auxz00_5824, BFALSE, BFALSE);
						}
					BgL_tmpz00_5819 = BGl_ftpzd2abortzd2zz__ftpz00(BgL_auxz00_5820);
				}
				return BBOOL(BgL_tmpz00_5819);
			}
		}

	}



/* ftp-delete */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2deletezd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_68, obj_t BgL_filez00_69)
	{
		{	/* Unsafe/ftp.scm 602 */
			{	/* Unsafe/ftp.scm 603 */
				obj_t BgL_list1812z00_3528;

				BgL_list1812z00_3528 = MAKE_YOUNG_PAIR(BgL_filez00_69, BNIL);
				return
					CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						((obj_t) BgL_ftpz00_68), BGl_string2868z00zz__ftpz00,
						BgL_list1812z00_3528));
			}
		}

	}



/* &ftp-delete */
	obj_t BGl_z62ftpzd2deletezb0zz__ftpz00(obj_t BgL_envz00_4111,
		obj_t BgL_ftpz00_4112, obj_t BgL_filez00_4113)
	{
		{	/* Unsafe/ftp.scm 602 */
			{	/* Unsafe/ftp.scm 603 */
				bool_t BgL_tmpz00_5834;

				{	/* Unsafe/ftp.scm 603 */
					obj_t BgL_auxz00_5843;
					BgL_ftpz00_bglt BgL_auxz00_5835;

					if (STRINGP(BgL_filez00_4113))
						{	/* Unsafe/ftp.scm 603 */
							BgL_auxz00_5843 = BgL_filez00_4113;
						}
					else
						{
							obj_t BgL_auxz00_5846;

							BgL_auxz00_5846 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 22133)), BGl_string2869z00zz__ftpz00,
								BGl_string2828z00zz__ftpz00, BgL_filez00_4113);
							FAILURE(BgL_auxz00_5846, BFALSE, BFALSE);
						}
					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4112, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 603 */
							BgL_auxz00_5835 = ((BgL_ftpz00_bglt) BgL_ftpz00_4112);
						}
					else
						{
							obj_t BgL_auxz00_5839;

							BgL_auxz00_5839 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 22133)), BGl_string2869z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4112);
							FAILURE(BgL_auxz00_5839, BFALSE, BFALSE);
						}
					BgL_tmpz00_5834 =
						BGl_ftpzd2deletezd2zz__ftpz00(BgL_auxz00_5835, BgL_auxz00_5843);
				}
				return BBOOL(BgL_tmpz00_5834);
			}
		}

	}



/* ftp-rmdir */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2rmdirzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_70, obj_t BgL_directoryz00_71)
	{
		{	/* Unsafe/ftp.scm 608 */
			{	/* Unsafe/ftp.scm 609 */
				obj_t BgL_list1813z00_3529;

				BgL_list1813z00_3529 = MAKE_YOUNG_PAIR(BgL_directoryz00_71, BNIL);
				return
					CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						((obj_t) BgL_ftpz00_70), BGl_string2870z00zz__ftpz00,
						BgL_list1813z00_3529));
			}
		}

	}



/* &ftp-rmdir */
	obj_t BGl_z62ftpzd2rmdirzb0zz__ftpz00(obj_t BgL_envz00_4114,
		obj_t BgL_ftpz00_4115, obj_t BgL_directoryz00_4116)
	{
		{	/* Unsafe/ftp.scm 608 */
			{	/* Unsafe/ftp.scm 609 */
				bool_t BgL_tmpz00_5856;

				{	/* Unsafe/ftp.scm 609 */
					obj_t BgL_auxz00_5865;
					BgL_ftpz00_bglt BgL_auxz00_5857;

					if (STRINGP(BgL_directoryz00_4116))
						{	/* Unsafe/ftp.scm 609 */
							BgL_auxz00_5865 = BgL_directoryz00_4116;
						}
					else
						{
							obj_t BgL_auxz00_5868;

							BgL_auxz00_5868 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 22428)), BGl_string2871z00zz__ftpz00,
								BGl_string2828z00zz__ftpz00, BgL_directoryz00_4116);
							FAILURE(BgL_auxz00_5868, BFALSE, BFALSE);
						}
					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4115, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 609 */
							BgL_auxz00_5857 = ((BgL_ftpz00_bglt) BgL_ftpz00_4115);
						}
					else
						{
							obj_t BgL_auxz00_5861;

							BgL_auxz00_5861 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 22428)), BGl_string2871z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4115);
							FAILURE(BgL_auxz00_5861, BFALSE, BFALSE);
						}
					BgL_tmpz00_5856 =
						BGl_ftpzd2rmdirzd2zz__ftpz00(BgL_auxz00_5857, BgL_auxz00_5865);
				}
				return BBOOL(BgL_tmpz00_5856);
			}
		}

	}



/* ftp-make-directory */
	BGL_EXPORTED_DEF bool_t
		BGl_ftpzd2makezd2directoryz00zz__ftpz00(BgL_ftpz00_bglt BgL_ftpz00_72,
		obj_t BgL_directoryz00_73)
	{
		{	/* Unsafe/ftp.scm 614 */
			{	/* Unsafe/ftp.scm 615 */
				obj_t BgL_list1814z00_3530;

				BgL_list1814z00_3530 = MAKE_YOUNG_PAIR(BgL_directoryz00_73, BNIL);
				return
					CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						((obj_t) BgL_ftpz00_72), BGl_string2872z00zz__ftpz00,
						BgL_list1814z00_3530));
			}
		}

	}



/* &ftp-make-directory */
	obj_t BGl_z62ftpzd2makezd2directoryz62zz__ftpz00(obj_t BgL_envz00_4117,
		obj_t BgL_ftpz00_4118, obj_t BgL_directoryz00_4119)
	{
		{	/* Unsafe/ftp.scm 614 */
			{	/* Unsafe/ftp.scm 615 */
				bool_t BgL_tmpz00_5878;

				{	/* Unsafe/ftp.scm 615 */
					obj_t BgL_auxz00_5887;
					BgL_ftpz00_bglt BgL_auxz00_5879;

					if (STRINGP(BgL_directoryz00_4119))
						{	/* Unsafe/ftp.scm 615 */
							BgL_auxz00_5887 = BgL_directoryz00_4119;
						}
					else
						{
							obj_t BgL_auxz00_5890;

							BgL_auxz00_5890 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 22736)), BGl_string2873z00zz__ftpz00,
								BGl_string2828z00zz__ftpz00, BgL_directoryz00_4119);
							FAILURE(BgL_auxz00_5890, BFALSE, BFALSE);
						}
					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4118, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 615 */
							BgL_auxz00_5879 = ((BgL_ftpz00_bglt) BgL_ftpz00_4118);
						}
					else
						{
							obj_t BgL_auxz00_5883;

							BgL_auxz00_5883 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 22736)), BGl_string2873z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4118);
							FAILURE(BgL_auxz00_5883, BFALSE, BFALSE);
						}
					BgL_tmpz00_5878 =
						BGl_ftpzd2makezd2directoryz00zz__ftpz00(BgL_auxz00_5879,
						BgL_auxz00_5887);
				}
				return BBOOL(BgL_tmpz00_5878);
			}
		}

	}



/* ftp-pwd */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2pwdzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_74)
	{
		{	/* Unsafe/ftp.scm 620 */
			return
				BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
				((obj_t) BgL_ftpz00_74), BGl_string2874z00zz__ftpz00, BNIL);
		}

	}



/* &ftp-pwd */
	obj_t BGl_z62ftpzd2pwdzb0zz__ftpz00(obj_t BgL_envz00_4120,
		obj_t BgL_ftpz00_4121)
	{
		{	/* Unsafe/ftp.scm 620 */
			{	/* Unsafe/ftp.scm 621 */
				BgL_ftpz00_bglt BgL_auxz00_5898;

				if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4121, BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 621 */
						BgL_auxz00_5898 = ((BgL_ftpz00_bglt) BgL_ftpz00_4121);
					}
				else
					{
						obj_t BgL_auxz00_5902;

						BgL_auxz00_5902 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 23023)), BGl_string2875z00zz__ftpz00,
							BGl_string2793z00zz__ftpz00, BgL_ftpz00_4121);
						FAILURE(BgL_auxz00_5902, BFALSE, BFALSE);
					}
				return BGl_ftpzd2pwdzd2zz__ftpz00(BgL_auxz00_5898);
			}
		}

	}



/* ftp-list */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2listzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_75, obj_t BgL_argsz00_76)
	{
		{	/* Unsafe/ftp.scm 626 */
			{	/* Unsafe/ftp.scm 627 */
				obj_t BgL_runner1820z00_2025;

				{	/* Unsafe/ftp.scm 627 */
					obj_t BgL_list1816z00_2021;

					{	/* Unsafe/ftp.scm 627 */
						obj_t BgL_arg1817z00_2022;

						BgL_arg1817z00_2022 = MAKE_YOUNG_PAIR(BgL_argsz00_76, BNIL);
						BgL_list1816z00_2021 =
							MAKE_YOUNG_PAIR(BGl_string2876z00zz__ftpz00, BgL_arg1817z00_2022);
					}
					BgL_runner1820z00_2025 =
						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
						((obj_t) BgL_ftpz00_75), BgL_list1816z00_2021);
				}
				{	/* Unsafe/ftp.scm 627 */
					obj_t BgL_aux1818z00_2023;

					BgL_aux1818z00_2023 = CAR(BgL_runner1820z00_2025);
					BgL_runner1820z00_2025 = CDR(BgL_runner1820z00_2025);
					{	/* Unsafe/ftp.scm 627 */
						obj_t BgL_aux1819z00_2024;

						BgL_aux1819z00_2024 = CAR(BgL_runner1820z00_2025);
						BgL_runner1820z00_2025 = CDR(BgL_runner1820z00_2025);
						return
							BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(BgL_aux1818z00_2023,
							BgL_aux1819z00_2024, BgL_runner1820z00_2025);
					}
				}
			}
		}

	}



/* &ftp-list */
	obj_t BGl_z62ftpzd2listzb0zz__ftpz00(obj_t BgL_envz00_4122,
		obj_t BgL_ftpz00_4123, obj_t BgL_argsz00_4124)
	{
		{	/* Unsafe/ftp.scm 626 */
			{	/* Unsafe/ftp.scm 627 */
				BgL_ftpz00_bglt BgL_auxz00_5916;

				if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4123, BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 627 */
						BgL_auxz00_5916 = ((BgL_ftpz00_bglt) BgL_ftpz00_4123);
					}
				else
					{
						obj_t BgL_auxz00_5920;

						BgL_auxz00_5920 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 23308)), BGl_string2877z00zz__ftpz00,
							BGl_string2793z00zz__ftpz00, BgL_ftpz00_4123);
						FAILURE(BgL_auxz00_5920, BFALSE, BFALSE);
					}
				return BGl_ftpzd2listzd2zz__ftpz00(BgL_auxz00_5916, BgL_argsz00_4124);
			}
		}

	}



/* ftp-name-list */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2namezd2listz00zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_77, obj_t BgL_argsz00_78)
	{
		{	/* Unsafe/ftp.scm 632 */
			{	/* Unsafe/ftp.scm 633 */
				obj_t BgL_runner1825z00_2030;

				{	/* Unsafe/ftp.scm 633 */
					obj_t BgL_list1821z00_2026;

					{	/* Unsafe/ftp.scm 633 */
						obj_t BgL_arg1822z00_2027;

						BgL_arg1822z00_2027 = MAKE_YOUNG_PAIR(BgL_argsz00_78, BNIL);
						BgL_list1821z00_2026 =
							MAKE_YOUNG_PAIR(BGl_string2878z00zz__ftpz00, BgL_arg1822z00_2027);
					}
					BgL_runner1825z00_2030 =
						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
						((obj_t) BgL_ftpz00_77), BgL_list1821z00_2026);
				}
				{	/* Unsafe/ftp.scm 633 */
					obj_t BgL_aux1823z00_2028;

					BgL_aux1823z00_2028 = CAR(BgL_runner1825z00_2030);
					BgL_runner1825z00_2030 = CDR(BgL_runner1825z00_2030);
					{	/* Unsafe/ftp.scm 633 */
						obj_t BgL_aux1824z00_2029;

						BgL_aux1824z00_2029 = CAR(BgL_runner1825z00_2030);
						BgL_runner1825z00_2030 = CDR(BgL_runner1825z00_2030);
						return
							BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(BgL_aux1823z00_2028,
							BgL_aux1824z00_2029, BgL_runner1825z00_2030);
					}
				}
			}
		}

	}



/* &ftp-name-list */
	obj_t BGl_z62ftpzd2namezd2listz62zz__ftpz00(obj_t BgL_envz00_4125,
		obj_t BgL_ftpz00_4126, obj_t BgL_argsz00_4127)
	{
		{	/* Unsafe/ftp.scm 632 */
			{	/* Unsafe/ftp.scm 633 */
				BgL_ftpz00_bglt BgL_auxz00_5934;

				if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4126, BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 633 */
						BgL_auxz00_5934 = ((BgL_ftpz00_bglt) BgL_ftpz00_4126);
					}
				else
					{
						obj_t BgL_auxz00_5938;

						BgL_auxz00_5938 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 23610)), BGl_string2879z00zz__ftpz00,
							BGl_string2793z00zz__ftpz00, BgL_ftpz00_4126);
						FAILURE(BgL_auxz00_5938, BFALSE, BFALSE);
					}
				return
					BGl_ftpzd2namezd2listz00zz__ftpz00(BgL_auxz00_5934, BgL_argsz00_4127);
			}
		}

	}



/* ftp-site-parameters */
	BGL_EXPORTED_DEF obj_t
		BGl_ftpzd2sitezd2parametersz00zz__ftpz00(BgL_ftpz00_bglt BgL_ftpz00_79,
		obj_t BgL_argsz00_80)
	{
		{	/* Unsafe/ftp.scm 638 */
			{	/* Unsafe/ftp.scm 639 */
				obj_t BgL_runner1830z00_2035;

				{	/* Unsafe/ftp.scm 639 */
					obj_t BgL_list1826z00_2031;

					{	/* Unsafe/ftp.scm 639 */
						obj_t BgL_arg1827z00_2032;

						BgL_arg1827z00_2032 = MAKE_YOUNG_PAIR(BgL_argsz00_80, BNIL);
						BgL_list1826z00_2031 =
							MAKE_YOUNG_PAIR(BGl_string2880z00zz__ftpz00, BgL_arg1827z00_2032);
					}
					BgL_runner1830z00_2035 =
						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
						((obj_t) BgL_ftpz00_79), BgL_list1826z00_2031);
				}
				{	/* Unsafe/ftp.scm 639 */
					obj_t BgL_aux1828z00_2033;

					BgL_aux1828z00_2033 = CAR(BgL_runner1830z00_2035);
					BgL_runner1830z00_2035 = CDR(BgL_runner1830z00_2035);
					{	/* Unsafe/ftp.scm 639 */
						obj_t BgL_aux1829z00_2034;

						BgL_aux1829z00_2034 = CAR(BgL_runner1830z00_2035);
						BgL_runner1830z00_2035 = CDR(BgL_runner1830z00_2035);
						return
							BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(BgL_aux1828z00_2033,
							BgL_aux1829z00_2034, BgL_runner1830z00_2035);
					}
				}
			}
		}

	}



/* &ftp-site-parameters */
	obj_t BGl_z62ftpzd2sitezd2parametersz62zz__ftpz00(obj_t BgL_envz00_4128,
		obj_t BgL_ftpz00_4129, obj_t BgL_argsz00_4130)
	{
		{	/* Unsafe/ftp.scm 638 */
			{	/* Unsafe/ftp.scm 639 */
				BgL_ftpz00_bglt BgL_auxz00_5952;

				if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4129, BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 639 */
						BgL_auxz00_5952 = ((BgL_ftpz00_bglt) BgL_ftpz00_4129);
					}
				else
					{
						obj_t BgL_auxz00_5956;

						BgL_auxz00_5956 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 23918)), BGl_string2881z00zz__ftpz00,
							BGl_string2793z00zz__ftpz00, BgL_ftpz00_4129);
						FAILURE(BgL_auxz00_5956, BFALSE, BFALSE);
					}
				return
					BGl_ftpzd2sitezd2parametersz00zz__ftpz00(BgL_auxz00_5952,
					BgL_argsz00_4130);
			}
		}

	}



/* ftp-system */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2systemzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_81)
	{
		{	/* Unsafe/ftp.scm 644 */
			return
				BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
				((obj_t) BgL_ftpz00_81), BGl_string2882z00zz__ftpz00, BNIL);
		}

	}



/* &ftp-system */
	obj_t BGl_z62ftpzd2systemzb0zz__ftpz00(obj_t BgL_envz00_4131,
		obj_t BgL_ftpz00_4132)
	{
		{	/* Unsafe/ftp.scm 644 */
			{	/* Unsafe/ftp.scm 645 */
				BgL_ftpz00_bglt BgL_auxz00_5963;

				if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4132, BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 645 */
						BgL_auxz00_5963 = ((BgL_ftpz00_bglt) BgL_ftpz00_4132);
					}
				else
					{
						obj_t BgL_auxz00_5967;

						BgL_auxz00_5967 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 24210)), BGl_string2883z00zz__ftpz00,
							BGl_string2793z00zz__ftpz00, BgL_ftpz00_4132);
						FAILURE(BgL_auxz00_5967, BFALSE, BFALSE);
					}
				return BGl_ftpzd2systemzd2zz__ftpz00(BgL_auxz00_5963);
			}
		}

	}



/* ftp-status */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2statuszd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_82, obj_t BgL_argsz00_83)
	{
		{	/* Unsafe/ftp.scm 650 */
			{	/* Unsafe/ftp.scm 651 */
				obj_t BgL_runner1836z00_2041;

				{	/* Unsafe/ftp.scm 651 */
					obj_t BgL_list1832z00_2037;

					{	/* Unsafe/ftp.scm 651 */
						obj_t BgL_arg1833z00_2038;

						BgL_arg1833z00_2038 = MAKE_YOUNG_PAIR(BgL_argsz00_83, BNIL);
						BgL_list1832z00_2037 =
							MAKE_YOUNG_PAIR(BGl_string2884z00zz__ftpz00, BgL_arg1833z00_2038);
					}
					BgL_runner1836z00_2041 =
						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
						((obj_t) BgL_ftpz00_82), BgL_list1832z00_2037);
				}
				{	/* Unsafe/ftp.scm 651 */
					obj_t BgL_aux1834z00_2039;

					BgL_aux1834z00_2039 = CAR(BgL_runner1836z00_2041);
					BgL_runner1836z00_2041 = CDR(BgL_runner1836z00_2041);
					{	/* Unsafe/ftp.scm 651 */
						obj_t BgL_aux1835z00_2040;

						BgL_aux1835z00_2040 = CAR(BgL_runner1836z00_2041);
						BgL_runner1836z00_2041 = CDR(BgL_runner1836z00_2041);
						return
							BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(BgL_aux1834z00_2039,
							BgL_aux1835z00_2040, BgL_runner1836z00_2041);
					}
				}
			}
		}

	}



/* &ftp-status */
	obj_t BGl_z62ftpzd2statuszb0zz__ftpz00(obj_t BgL_envz00_4133,
		obj_t BgL_ftpz00_4134, obj_t BgL_argsz00_4135)
	{
		{	/* Unsafe/ftp.scm 650 */
			{	/* Unsafe/ftp.scm 651 */
				BgL_ftpz00_bglt BgL_auxz00_5981;

				if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4134, BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 651 */
						BgL_auxz00_5981 = ((BgL_ftpz00_bglt) BgL_ftpz00_4134);
					}
				else
					{
						obj_t BgL_auxz00_5985;

						BgL_auxz00_5985 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 24498)), BGl_string2885z00zz__ftpz00,
							BGl_string2793z00zz__ftpz00, BgL_ftpz00_4134);
						FAILURE(BgL_auxz00_5985, BFALSE, BFALSE);
					}
				return BGl_ftpzd2statuszd2zz__ftpz00(BgL_auxz00_5981, BgL_argsz00_4135);
			}
		}

	}



/* ftp-help */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2helpzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_84, obj_t BgL_argsz00_85)
	{
		{	/* Unsafe/ftp.scm 656 */
			{	/* Unsafe/ftp.scm 657 */
				obj_t BgL_argz00_3549;

				if (PAIRP(BgL_argsz00_85))
					{	/* Unsafe/ftp.scm 657 */
						BgL_argz00_3549 = CAR(BgL_argsz00_85);
					}
				else
					{	/* Unsafe/ftp.scm 657 */
						BgL_argz00_3549 = BFALSE;
					}
				if (CBOOL(BgL_argz00_3549))
					{	/* Unsafe/ftp.scm 659 */
						obj_t BgL_list1837z00_3551;

						BgL_list1837z00_3551 = MAKE_YOUNG_PAIR(BgL_argz00_3549, BNIL);
						return
							BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
							((obj_t) BgL_ftpz00_84), BGl_string2886z00zz__ftpz00,
							BgL_list1837z00_3551);
					}
				else
					{	/* Unsafe/ftp.scm 658 */
						return
							BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
							((obj_t) BgL_ftpz00_84), BGl_string2886z00zz__ftpz00, BNIL);
					}
			}
		}

	}



/* &ftp-help */
	obj_t BGl_z62ftpzd2helpzb0zz__ftpz00(obj_t BgL_envz00_4136,
		obj_t BgL_ftpz00_4137, obj_t BgL_argsz00_4138)
	{
		{	/* Unsafe/ftp.scm 656 */
			{	/* Unsafe/ftp.scm 657 */
				BgL_ftpz00_bglt BgL_auxz00_6000;

				if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4137, BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 657 */
						BgL_auxz00_6000 = ((BgL_ftpz00_bglt) BgL_ftpz00_4137);
					}
				else
					{
						obj_t BgL_auxz00_6004;

						BgL_auxz00_6004 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 24795)), BGl_string2887z00zz__ftpz00,
							BGl_string2793z00zz__ftpz00, BgL_ftpz00_4137);
						FAILURE(BgL_auxz00_6004, BFALSE, BFALSE);
					}
				return BGl_ftpzd2helpzd2zz__ftpz00(BgL_auxz00_6000, BgL_argsz00_4138);
			}
		}

	}



/* ftp-noop */
	BGL_EXPORTED_DEF bool_t BGl_ftpzd2noopzd2zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_86)
	{
		{	/* Unsafe/ftp.scm 665 */
			return
				CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
					((obj_t) BgL_ftpz00_86), BGl_string2888z00zz__ftpz00, BNIL));
		}

	}



/* &ftp-noop */
	obj_t BGl_z62ftpzd2noopzb0zz__ftpz00(obj_t BgL_envz00_4139,
		obj_t BgL_ftpz00_4140)
	{
		{	/* Unsafe/ftp.scm 665 */
			{	/* Unsafe/ftp.scm 666 */
				bool_t BgL_tmpz00_6012;

				{	/* Unsafe/ftp.scm 666 */
					BgL_ftpz00_bglt BgL_auxz00_6013;

					if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4140, BGl_ftpz00zz__ftpz00))
						{	/* Unsafe/ftp.scm 666 */
							BgL_auxz00_6013 = ((BgL_ftpz00_bglt) BgL_ftpz00_4140);
						}
					else
						{
							obj_t BgL_auxz00_6017;

							BgL_auxz00_6017 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
								BINT(((long) 25172)), BGl_string2889z00zz__ftpz00,
								BGl_string2793z00zz__ftpz00, BgL_ftpz00_4140);
							FAILURE(BgL_auxz00_6017, BFALSE, BFALSE);
						}
					BgL_tmpz00_6012 = BGl_ftpzd2noopzd2zz__ftpz00(BgL_auxz00_6013);
				}
				return BBOOL(BgL_tmpz00_6012);
			}
		}

	}



/* _open-input-ftp-file */
	obj_t BGl__openzd2inputzd2ftpzd2filezd2zz__ftpz00(obj_t BgL_env1288z00_91,
		obj_t BgL_opt1287z00_90)
	{
		{	/* Unsafe/ftp.scm 671 */
			{	/* Unsafe/ftp.scm 671 */
				obj_t BgL_g1289z00_2047;

				BgL_g1289z00_2047 = VECTOR_REF(BgL_opt1287z00_90, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1287z00_90))
					{
					case ((long) 1):

						{	/* Unsafe/ftp.scm 671 */

							{	/* Unsafe/ftp.scm 671 */
								obj_t BgL_auxz00_6024;

								if (STRINGP(BgL_g1289z00_2047))
									{	/* Unsafe/ftp.scm 671 */
										BgL_auxz00_6024 = BgL_g1289z00_2047;
									}
								else
									{
										obj_t BgL_auxz00_6027;

										BgL_auxz00_6027 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2818z00zz__ftpz00, BINT(((long) 25425)),
											BGl_string2890z00zz__ftpz00, BGl_string2828z00zz__ftpz00,
											BgL_g1289z00_2047);
										FAILURE(BgL_auxz00_6027, BFALSE, BFALSE);
									}
								return
									BGl_openzd2inputzd2ftpzd2filezd2zz__ftpz00(BgL_auxz00_6024,
									BTRUE, BINT(((long) 1000000)));
						}} break;
					case ((long) 2):

						{	/* Unsafe/ftp.scm 671 */
							obj_t BgL_bufinfoz00_2053;

							BgL_bufinfoz00_2053 = VECTOR_REF(BgL_opt1287z00_90, ((long) 1));
							{	/* Unsafe/ftp.scm 671 */

								{	/* Unsafe/ftp.scm 671 */
									obj_t BgL_auxz00_6034;

									if (STRINGP(BgL_g1289z00_2047))
										{	/* Unsafe/ftp.scm 671 */
											BgL_auxz00_6034 = BgL_g1289z00_2047;
										}
									else
										{
											obj_t BgL_auxz00_6037;

											BgL_auxz00_6037 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2818z00zz__ftpz00, BINT(((long) 25425)),
												BGl_string2890z00zz__ftpz00,
												BGl_string2828z00zz__ftpz00, BgL_g1289z00_2047);
											FAILURE(BgL_auxz00_6037, BFALSE, BFALSE);
										}
									return
										BGl_openzd2inputzd2ftpzd2filezd2zz__ftpz00(BgL_auxz00_6034,
										BgL_bufinfoz00_2053, BINT(((long) 1000000)));
						}}} break;
					case ((long) 3):

						{	/* Unsafe/ftp.scm 671 */
							obj_t BgL_bufinfoz00_2055;

							BgL_bufinfoz00_2055 = VECTOR_REF(BgL_opt1287z00_90, ((long) 1));
							{	/* Unsafe/ftp.scm 671 */
								obj_t BgL_timeoutz00_2056;

								BgL_timeoutz00_2056 = VECTOR_REF(BgL_opt1287z00_90, ((long) 2));
								{	/* Unsafe/ftp.scm 671 */

									{	/* Unsafe/ftp.scm 671 */
										obj_t BgL_auxz00_6045;

										if (STRINGP(BgL_g1289z00_2047))
											{	/* Unsafe/ftp.scm 671 */
												BgL_auxz00_6045 = BgL_g1289z00_2047;
											}
										else
											{
												obj_t BgL_auxz00_6048;

												BgL_auxz00_6048 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2818z00zz__ftpz00, BINT(((long) 25425)),
													BGl_string2890z00zz__ftpz00,
													BGl_string2828z00zz__ftpz00, BgL_g1289z00_2047);
												FAILURE(BgL_auxz00_6048, BFALSE, BFALSE);
											}
										return
											BGl_openzd2inputzd2ftpzd2filezd2zz__ftpz00
											(BgL_auxz00_6045, BgL_bufinfoz00_2055,
											BgL_timeoutz00_2056);
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



/* open-input-ftp-file */
	BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2ftpzd2filezd2zz__ftpz00(obj_t
		BgL_stringz00_87, obj_t BgL_bufinfoz00_88, obj_t BgL_timeoutz00_89)
	{
		{	/* Unsafe/ftp.scm 671 */
			{	/* Unsafe/ftp.scm 701 */
				obj_t BgL_protocolz00_2058;

				BgL_protocolz00_2058 =
					BGl_urlzd2sanszd2protocolzd2parsezd2zz__urlz00(BgL_stringz00_87,
					BGl_string2793z00zz__ftpz00);
				{	/* Unsafe/ftp.scm 702 */
					obj_t BgL_loginz00_2059;
					obj_t BgL_hostz00_2060;
					obj_t BgL_portz00_2061;
					obj_t BgL_abspathz00_2062;

					{	/* Unsafe/ftp.scm 703 */
						int BgL_tmpz00_6056;

						BgL_tmpz00_6056 = (int) (((long) 1));
						BgL_loginz00_2059 = BGL_MVALUES_VAL(BgL_tmpz00_6056);
					}
					{	/* Unsafe/ftp.scm 703 */
						int BgL_tmpz00_6059;

						BgL_tmpz00_6059 = (int) (((long) 2));
						BgL_hostz00_2060 = BGL_MVALUES_VAL(BgL_tmpz00_6059);
					}
					{	/* Unsafe/ftp.scm 703 */
						int BgL_tmpz00_6062;

						BgL_tmpz00_6062 = (int) (((long) 3));
						BgL_portz00_2061 = BGL_MVALUES_VAL(BgL_tmpz00_6062);
					}
					{	/* Unsafe/ftp.scm 703 */
						int BgL_tmpz00_6065;

						BgL_tmpz00_6065 = (int) (((long) 4));
						BgL_abspathz00_2062 = BGL_MVALUES_VAL(BgL_tmpz00_6065);
					}
					{	/* Unsafe/ftp.scm 703 */
						obj_t BgL_iz00_2063;

						if (STRINGP(BgL_loginz00_2059))
							{	/* Ieee/string.scm 219 */

								BgL_iz00_2063 =
									BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL_loginz00_2059,
									BCHAR(((unsigned char) ':')), BINT(((long) 0)));
							}
						else
							{	/* Unsafe/ftp.scm 703 */
								BgL_iz00_2063 = BFALSE;
							}
						{	/* Unsafe/ftp.scm 703 */
							BgL_ftpz00_bglt BgL_ftpz00_2064;

							{	/* Unsafe/ftp.scm 704 */
								BgL_ftpz00_bglt BgL_new1159z00_2072;

								{	/* Unsafe/ftp.scm 704 */
									BgL_ftpz00_bglt BgL_new1158z00_2078;

									BgL_new1158z00_2078 =
										((BgL_ftpz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_ftpz00_bgl))));
									{	/* Unsafe/ftp.scm 704 */
										long BgL_arg1850z00_2079;

										{	/* Unsafe/ftp.scm 704 */
											long BgL_res2558z00_3558;

											BgL_res2558z00_3558 =
												BGL_CLASS_INDEX(BGl_ftpz00zz__ftpz00);
											BgL_arg1850z00_2079 = BgL_res2558z00_3558;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1158z00_2078),
											BgL_arg1850z00_2079);
									}
									BgL_new1159z00_2072 = BgL_new1158z00_2078;
								}
								((((BgL_z52ftpz52_bglt) COBJECT(
												((BgL_z52ftpz52_bglt) BgL_new1159z00_2072)))->
										BgL_cmdz00) = ((obj_t) BFALSE), BUNSPEC);
								((((BgL_z52ftpz52_bglt) COBJECT(((BgL_z52ftpz52_bglt)
													BgL_new1159z00_2072)))->BgL_dtpz00) =
									((obj_t) BFALSE), BUNSPEC);
								((((BgL_z52ftpz52_bglt) COBJECT(((BgL_z52ftpz52_bglt)
													BgL_new1159z00_2072)))->BgL_passivezf3zf3) =
									((bool_t) ((bool_t) 1)), BUNSPEC);
								((((BgL_ftpz00_bglt) COBJECT(BgL_new1159z00_2072))->
										BgL_hostz00) = ((obj_t) BgL_hostz00_2060), BUNSPEC);
								((((BgL_ftpz00_bglt) COBJECT(BgL_new1159z00_2072))->
										BgL_portz00) = ((obj_t) BINT(((long) 21))), BUNSPEC);
								((((BgL_ftpz00_bglt) COBJECT(BgL_new1159z00_2072))->
										BgL_motdz00) =
									((obj_t) BGl_string2813z00zz__ftpz00), BUNSPEC);
								{
									obj_t BgL_auxz00_6087;

									if (CBOOL(BgL_iz00_2063))
										{	/* Unsafe/ftp.scm 707 */
											obj_t BgL_res2559z00_3563;

											{	/* Unsafe/ftp.scm 707 */
												long BgL_endz00_3562;

												BgL_endz00_3562 = (long) CINT(BgL_iz00_2063);
												BgL_res2559z00_3563 =
													c_substring(
													((obj_t) BgL_loginz00_2059), ((long) 0),
													BgL_endz00_3562);
											}
											BgL_auxz00_6087 = BgL_res2559z00_3563;
										}
									else
										{	/* Unsafe/ftp.scm 707 */
											if (STRINGP(BgL_loginz00_2059))
												{	/* Unsafe/ftp.scm 708 */
													BgL_auxz00_6087 = BgL_loginz00_2059;
												}
											else
												{	/* Unsafe/ftp.scm 708 */
													BgL_auxz00_6087 = BGl_string2814z00zz__ftpz00;
												}
										}
									((((BgL_ftpz00_bglt) COBJECT(BgL_new1159z00_2072))->
											BgL_userz00) = ((obj_t) BgL_auxz00_6087), BUNSPEC);
								}
								{
									obj_t BgL_auxz00_6096;

									if (CBOOL(BgL_iz00_2063))
										{	/* Unsafe/ftp.scm 711 */
											long BgL_arg1848z00_2074;

											BgL_arg1848z00_2074 =
												((long) CINT(BgL_iz00_2063) + ((long) 1));
											{	/* Ieee/string.scm 190 */
												long BgL_endz00_2077;

												BgL_endz00_2077 =
													STRING_LENGTH(((obj_t) BgL_loginz00_2059));
												{	/* Ieee/string.scm 190 */

													BgL_auxz00_6096 =
														BGl_substringz00zz__r4_strings_6_7z00(
														((obj_t) BgL_loginz00_2059), BgL_arg1848z00_2074,
														BgL_endz00_2077);
										}}}
									else
										{	/* Unsafe/ftp.scm 711 */
											BgL_auxz00_6096 = BGl_string2815z00zz__ftpz00;
										}
									((((BgL_ftpz00_bglt) COBJECT(BgL_new1159z00_2072))->
											BgL_passz00) = ((obj_t) BgL_auxz00_6096), BUNSPEC);
								}
								((((BgL_ftpz00_bglt) COBJECT(BgL_new1159z00_2072))->
										BgL_acctz00) =
									((obj_t) BGl_string2813z00zz__ftpz00), BUNSPEC);
								BgL_ftpz00_2064 = BgL_new1159z00_2072;
							}
							{	/* Unsafe/ftp.scm 704 */

								{	/* Unsafe/ftp.scm 713 */
									bool_t BgL_test3320z00_6107;

									{	/* Unsafe/ftp.scm 713 */
										bool_t BgL_res2563z00_3578;

										{
											obj_t BgL_auxz00_6108;

											{	/* Unsafe/ftp.scm 410 */
												obj_t BgL_arg1730z00_3571;
												obj_t BgL_arg1731z00_3572;

												BgL_arg1730z00_3571 =
													(((BgL_ftpz00_bglt) COBJECT(BgL_ftpz00_2064))->
													BgL_hostz00);
												BgL_arg1731z00_3572 =
													(((BgL_ftpz00_bglt) COBJECT(BgL_ftpz00_2064))->
													BgL_portz00);
												{	/* Unsafe/ftp.scm 410 */
													obj_t BgL_domainz00_3573;

													BgL_domainz00_3573 = BGl_symbol2816z00zz__ftpz00;
													BgL_auxz00_6108 =
														BGl_makezd2clientzd2socketz00zz__socketz00
														(BgL_arg1730z00_3571, CINT(BgL_arg1731z00_3572),
														BgL_domainz00_3573, BTRUE, BTRUE,
														BgL_timeoutz00_89);
												}
											}
											((((BgL_z52ftpz52_bglt) COBJECT(
															((BgL_z52ftpz52_bglt) BgL_ftpz00_2064)))->
													BgL_cmdz00) = ((obj_t) BgL_auxz00_6108), BUNSPEC);
										}
										BgL_res2563z00_3578 =
											CBOOL(BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
												((obj_t) BgL_ftpz00_2064), BFALSE, BNIL));
										BgL_test3320z00_6107 = BgL_res2563z00_3578;
									}
									if (BgL_test3320z00_6107)
										{	/* Unsafe/ftp.scm 714 */
											obj_t BgL_piz00_2066;

											{	/* Unsafe/ftp.scm 547 */
												obj_t BgL_list1794z00_3581;

												BgL_list1794z00_3581 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_abspathz00_2062), BNIL);
												BgL_piz00_2066 =
													BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
													((obj_t) BgL_ftpz00_2064),
													BGl_string2796z00zz__ftpz00, BgL_list1794z00_3581);
											}
											if (INPUT_PORTP(BgL_piz00_2066))
												{	/* Unsafe/ftp.scm 715 */
													{	/* Unsafe/ftp.scm 716 */
														obj_t BgL_zc3z04anonymousza31846ze3z87_4142;

														BgL_zc3z04anonymousza31846ze3z87_4142 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31846ze3ze5zz__ftpz00,
															(int) (((long) 1)), (int) (((long) 1)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31846ze3z87_4142,
															(int) (((long) 0)), ((obj_t) BgL_ftpz00_2064));
														BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
															(BgL_piz00_2066,
															BgL_zc3z04anonymousza31846ze3z87_4142);
													}
													return BgL_piz00_2066;
												}
											else
												{	/* Unsafe/ftp.scm 715 */
													return BFALSE;
												}
										}
									else
										{	/* Unsafe/ftp.scm 713 */
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



/* &<@anonymous:1846> */
	obj_t BGl_z62zc3z04anonymousza31846ze3ze5zz__ftpz00(obj_t BgL_envz00_4143,
		obj_t BgL_vz00_4145)
	{
		{	/* Unsafe/ftp.scm 716 */
			{	/* Unsafe/ftp.scm 377 */
				BgL_ftpz00_bglt BgL_ftpz00_4144;

				BgL_ftpz00_4144 =
					((BgL_ftpz00_bglt)
					PROCEDURE_REF(BgL_envz00_4143, (int) (((long) 0))));
				{	/* Unsafe/ftp.scm 377 */
					obj_t BgL_exitd1112z00_4509;

					BgL_exitd1112z00_4509 = BGL_EXITD_TOP_AS_OBJ();
					{	/* Unsafe/ftp.scm 379 */
						obj_t BgL_zc3z04anonymousza31696ze3z87_4510;

						BgL_zc3z04anonymousza31696ze3z87_4510 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31696ze32659ze5zz__ftpz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31696ze3z87_4510,
							(int) (((long) 0)), ((obj_t) BgL_ftpz00_4144));
						BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1112z00_4509,
							BgL_zc3z04anonymousza31696ze3z87_4510);
						{	/* Unsafe/ftp.scm 378 */
							obj_t BgL_tmp1114z00_4511;

							BgL_tmp1114z00_4511 =
								BGl_z52ftpzd2closezd2cmdz52zz__ftpz00(
								((obj_t) BgL_ftpz00_4144));
							BGl_exitdzd2popzd2protectz12z12zz__bexitz00
								(BgL_exitd1112z00_4509);
							BGl_z52ftpzd2closezd2dtpz52zz__ftpz00(((obj_t) BgL_ftpz00_4144));
							return BgL_tmp1114z00_4511;
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1696>2659 */
	obj_t BGl_z62zc3z04anonymousza31696ze32659ze5zz__ftpz00(obj_t BgL_envz00_4146)
	{
		{	/* Unsafe/ftp.scm 377 */
			{	/* Unsafe/ftp.scm 379 */
				BgL_ftpz00_bglt BgL_ftpz00_4147;

				BgL_ftpz00_4147 =
					((BgL_ftpz00_bglt)
					PROCEDURE_REF(BgL_envz00_4146, (int) (((long) 0))));
				return BGl_z52ftpzd2closezd2dtpz52zz__ftpz00(((obj_t) BgL_ftpz00_4147));
			}
		}

	}



/* ftp-directory->list */
	BGL_EXPORTED_DEF obj_t
		BGl_ftpzd2directoryzd2ze3listze3zz__ftpz00(BgL_ftpz00_bglt BgL_ftpz00_92,
		obj_t BgL_dirz00_93)
	{
		{	/* Unsafe/ftp.scm 722 */
			{	/* Unsafe/ftp.scm 723 */
				long BgL_lenz00_2121;
				obj_t BgL_lstz00_2122;

				BgL_lenz00_2121 = STRING_LENGTH(BgL_dirz00_93);
				{	/* Unsafe/ftp.scm 724 */
					obj_t BgL_list1894z00_2154;

					BgL_list1894z00_2154 = MAKE_YOUNG_PAIR(BgL_dirz00_93, BNIL);
					BgL_lstz00_2122 =
						BGl_ftpzd2namezd2listz00zz__ftpz00(BgL_ftpz00_92,
						BgL_list1894z00_2154);
				}
				{	/* Unsafe/ftp.scm 726 */
					bool_t BgL_test3322z00_6155;

					if (NULLP(BgL_lstz00_2122))
						{	/* Unsafe/ftp.scm 726 */
							BgL_test3322z00_6155 = ((bool_t) 0);
						}
					else
						{	/* Unsafe/ftp.scm 726 */
							obj_t BgL_tmpz00_6158;

							BgL_tmpz00_6158 = CDR(BgL_lstz00_2122);
							BgL_test3322z00_6155 = PAIRP(BgL_tmpz00_6158);
						}
					if (BgL_test3322z00_6155)
						{	/* Unsafe/ftp.scm 727 */
							obj_t BgL_head1241z00_2128;

							{	/* Unsafe/ftp.scm 727 */
								obj_t BgL_res2568z00_3591;

								BgL_res2568z00_3591 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1241z00_2128 = BgL_res2568z00_3591;
							}
							{
								obj_t BgL_l1239z00_2130;
								obj_t BgL_tail1242z00_2131;

								BgL_l1239z00_2130 = ((obj_t) BgL_lstz00_2122);
								BgL_tail1242z00_2131 = BgL_head1241z00_2128;
							BgL_zc3z04anonymousza31881ze3z87_2132:
								if (NULLP(BgL_l1239z00_2130))
									{	/* Unsafe/ftp.scm 727 */
										return CDR(BgL_head1241z00_2128);
									}
								else
									{	/* Unsafe/ftp.scm 727 */
										obj_t BgL_newtail1243z00_2134;

										{	/* Unsafe/ftp.scm 727 */
											obj_t BgL_arg1884z00_2136;

											{	/* Unsafe/ftp.scm 727 */
												obj_t BgL_filez00_2137;

												BgL_filez00_2137 = CAR(((obj_t) BgL_l1239z00_2130));
												{	/* Unsafe/ftp.scm 727 */
													long BgL_arg1885z00_2138;

													BgL_arg1885z00_2138 = (BgL_lenz00_2121 + ((long) 1));
													{	/* Ieee/string.scm 190 */
														long BgL_endz00_2141;

														BgL_endz00_2141 =
															STRING_LENGTH(((obj_t) BgL_filez00_2137));
														{	/* Ieee/string.scm 190 */

															BgL_arg1884z00_2136 =
																BGl_substringz00zz__r4_strings_6_7z00
																(BgL_filez00_2137, BgL_arg1885z00_2138,
																BgL_endz00_2141);
											}}}}
											{	/* Unsafe/ftp.scm 727 */
												obj_t BgL_res2572z00_3599;

												BgL_res2572z00_3599 =
													MAKE_YOUNG_PAIR(BgL_arg1884z00_2136, BNIL);
												BgL_newtail1243z00_2134 = BgL_res2572z00_3599;
										}}
										SET_CDR(BgL_tail1242z00_2131, BgL_newtail1243z00_2134);
										{	/* Unsafe/ftp.scm 727 */
											obj_t BgL_arg1883z00_2135;

											BgL_arg1883z00_2135 = CDR(((obj_t) BgL_l1239z00_2130));
											{
												obj_t BgL_tail1242z00_6176;
												obj_t BgL_l1239z00_6175;

												BgL_l1239z00_6175 = BgL_arg1883z00_2135;
												BgL_tail1242z00_6176 = BgL_newtail1243z00_2134;
												BgL_tail1242z00_2131 = BgL_tail1242z00_6176;
												BgL_l1239z00_2130 = BgL_l1239z00_6175;
												goto BgL_zc3z04anonymousza31881ze3z87_2132;
											}
										}
									}
							}
						}
					else
						{	/* Unsafe/ftp.scm 726 */
							if (NULLP(BgL_lstz00_2122))
								{	/* Unsafe/ftp.scm 728 */
									return BNIL;
								}
							else
								{	/* Unsafe/ftp.scm 730 */
									bool_t BgL_test3326z00_6180;

									{	/* Unsafe/ftp.scm 730 */
										obj_t BgL_arg1892z00_2151;

										BgL_arg1892z00_2151 = CAR(BgL_lstz00_2122);
										{	/* Unsafe/ftp.scm 730 */
											bool_t BgL_res2578z00_3619;

											{	/* Unsafe/ftp.scm 730 */
												long BgL_l1z00_3606;

												BgL_l1z00_3606 =
													STRING_LENGTH(((obj_t) BgL_arg1892z00_2151));
												if ((BgL_l1z00_3606 == STRING_LENGTH(BgL_dirz00_93)))
													{	/* Unsafe/ftp.scm 730 */
														int BgL_arg2088z00_3609;

														{	/* Unsafe/ftp.scm 730 */
															char *BgL_auxz00_6190;
															char *BgL_tmpz00_6187;

															BgL_auxz00_6190 =
																BSTRING_TO_STRING(BgL_dirz00_93);
															BgL_tmpz00_6187 =
																BSTRING_TO_STRING(
																((obj_t) BgL_arg1892z00_2151));
															BgL_arg2088z00_3609 =
																memcmp(BgL_tmpz00_6187, BgL_auxz00_6190,
																BgL_l1z00_3606);
														}
														BgL_res2578z00_3619 =
															((long) (BgL_arg2088z00_3609) == ((long) 0));
													}
												else
													{	/* Unsafe/ftp.scm 730 */
														BgL_res2578z00_3619 = ((bool_t) 0);
													}
											}
											BgL_test3326z00_6180 = BgL_res2578z00_3619;
										}
									}
									if (BgL_test3326z00_6180)
										{	/* Unsafe/ftp.scm 730 */
											return BgL_dirz00_93;
										}
									else
										{	/* Unsafe/ftp.scm 733 */
											obj_t BgL_arg1889z00_2146;
											long BgL_arg1891z00_2147;

											BgL_arg1889z00_2146 = CAR(BgL_lstz00_2122);
											BgL_arg1891z00_2147 = (BgL_lenz00_2121 + ((long) 1));
											{	/* Ieee/string.scm 190 */
												long BgL_endz00_2150;

												BgL_endz00_2150 =
													STRING_LENGTH(((obj_t) BgL_arg1889z00_2146));
												{	/* Ieee/string.scm 190 */

													return
														BGl_substringz00zz__r4_strings_6_7z00
														(BgL_arg1889z00_2146, BgL_arg1891z00_2147,
														BgL_endz00_2150);
												}
											}
										}
								}
						}
				}
			}
		}

	}



/* &ftp-directory->list */
	obj_t BGl_z62ftpzd2directoryzd2ze3listz81zz__ftpz00(obj_t BgL_envz00_4148,
		obj_t BgL_ftpz00_4149, obj_t BgL_dirz00_4150)
	{
		{	/* Unsafe/ftp.scm 722 */
			{	/* Unsafe/ftp.scm 723 */
				obj_t BgL_auxz00_6208;
				BgL_ftpz00_bglt BgL_auxz00_6200;

				if (STRINGP(BgL_dirz00_4150))
					{	/* Unsafe/ftp.scm 723 */
						BgL_auxz00_6208 = BgL_dirz00_4150;
					}
				else
					{
						obj_t BgL_auxz00_6211;

						BgL_auxz00_6211 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 27285)), BGl_string2891z00zz__ftpz00,
							BGl_string2828z00zz__ftpz00, BgL_dirz00_4150);
						FAILURE(BgL_auxz00_6211, BFALSE, BFALSE);
					}
				if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4149, BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 723 */
						BgL_auxz00_6200 = ((BgL_ftpz00_bglt) BgL_ftpz00_4149);
					}
				else
					{
						obj_t BgL_auxz00_6204;

						BgL_auxz00_6204 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 27285)), BGl_string2891z00zz__ftpz00,
							BGl_string2793z00zz__ftpz00, BgL_ftpz00_4149);
						FAILURE(BgL_auxz00_6204, BFALSE, BFALSE);
					}
				return
					BGl_ftpzd2directoryzd2ze3listze3zz__ftpz00(BgL_auxz00_6200,
					BgL_auxz00_6208);
			}
		}

	}



/* ftp-directory->path-list */
	BGL_EXPORTED_DEF obj_t
		BGl_ftpzd2directoryzd2ze3pathzd2listz31zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_94, obj_t BgL_dirz00_95)
	{
		{	/* Unsafe/ftp.scm 738 */
			{	/* Unsafe/ftp.scm 739 */
				obj_t BgL_list1895z00_3625;

				BgL_list1895z00_3625 = MAKE_YOUNG_PAIR(BgL_dirz00_95, BNIL);
				return
					BGl_ftpzd2namezd2listz00zz__ftpz00(BgL_ftpz00_94,
					BgL_list1895z00_3625);
			}
		}

	}



/* &ftp-directory->path-list */
	obj_t BGl_z62ftpzd2directoryzd2ze3pathzd2listz53zz__ftpz00(obj_t
		BgL_envz00_4151, obj_t BgL_ftpz00_4152, obj_t BgL_dirz00_4153)
	{
		{	/* Unsafe/ftp.scm 738 */
			{	/* Unsafe/ftp.scm 739 */
				obj_t BgL_auxz00_6226;
				BgL_ftpz00_bglt BgL_auxz00_6218;

				if (STRINGP(BgL_dirz00_4153))
					{	/* Unsafe/ftp.scm 739 */
						BgL_auxz00_6226 = BgL_dirz00_4153;
					}
				else
					{
						obj_t BgL_auxz00_6229;

						BgL_auxz00_6229 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 27837)), BGl_string2892z00zz__ftpz00,
							BGl_string2828z00zz__ftpz00, BgL_dirz00_4153);
						FAILURE(BgL_auxz00_6229, BFALSE, BFALSE);
					}
				if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4152, BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 739 */
						BgL_auxz00_6218 = ((BgL_ftpz00_bglt) BgL_ftpz00_4152);
					}
				else
					{
						obj_t BgL_auxz00_6222;

						BgL_auxz00_6222 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 27837)), BGl_string2892z00zz__ftpz00,
							BGl_string2793z00zz__ftpz00, BgL_ftpz00_4152);
						FAILURE(BgL_auxz00_6222, BFALSE, BFALSE);
					}
				return
					BGl_ftpzd2directoryzd2ze3pathzd2listz31zz__ftpz00(BgL_auxz00_6218,
					BgL_auxz00_6226);
			}
		}

	}



/* ftp-copy-file */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2copyzd2filez00zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_96, obj_t BgL_fromz00_97, obj_t BgL_dstz00_98)
	{
		{	/* Unsafe/ftp.scm 744 */
			{	/* Unsafe/ftp.scm 745 */
				obj_t BgL_rz00_3626;

				{	/* Unsafe/ftp.scm 547 */
					obj_t BgL_list1794z00_3633;

					BgL_list1794z00_3633 = MAKE_YOUNG_PAIR(BgL_fromz00_97, BNIL);
					BgL_rz00_3626 =
						BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
						((obj_t) BgL_ftpz00_96), BGl_string2796z00zz__ftpz00,
						BgL_list1794z00_3633);
				}
				if (INPUT_PORTP(BgL_rz00_3626))
					{	/* Unsafe/ftp.scm 749 */
						obj_t BgL_zc3z04anonymousza31898ze3z87_4154;

						BgL_zc3z04anonymousza31898ze3z87_4154 =
							MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31898ze3ze5zz__ftpz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31898ze3z87_4154,
							(int) (((long) 0)), BgL_rz00_3626);
						return
							BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
							(BgL_dstz00_98, BgL_zc3z04anonymousza31898ze3z87_4154);
					}
				else
					{	/* Unsafe/ftp.scm 746 */
						return BFALSE;
					}
			}
		}

	}



/* &ftp-copy-file */
	obj_t BGl_z62ftpzd2copyzd2filez62zz__ftpz00(obj_t BgL_envz00_4155,
		obj_t BgL_ftpz00_4156, obj_t BgL_fromz00_4157, obj_t BgL_dstz00_4158)
	{
		{	/* Unsafe/ftp.scm 744 */
			{	/* Unsafe/ftp.scm 745 */
				obj_t BgL_auxz00_6260;
				obj_t BgL_auxz00_6253;
				BgL_ftpz00_bglt BgL_auxz00_6245;

				if (STRINGP(BgL_dstz00_4158))
					{	/* Unsafe/ftp.scm 745 */
						BgL_auxz00_6260 = BgL_dstz00_4158;
					}
				else
					{
						obj_t BgL_auxz00_6263;

						BgL_auxz00_6263 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 28125)), BGl_string2893z00zz__ftpz00,
							BGl_string2828z00zz__ftpz00, BgL_dstz00_4158);
						FAILURE(BgL_auxz00_6263, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_fromz00_4157))
					{	/* Unsafe/ftp.scm 745 */
						BgL_auxz00_6253 = BgL_fromz00_4157;
					}
				else
					{
						obj_t BgL_auxz00_6256;

						BgL_auxz00_6256 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 28125)), BGl_string2893z00zz__ftpz00,
							BGl_string2828z00zz__ftpz00, BgL_fromz00_4157);
						FAILURE(BgL_auxz00_6256, BFALSE, BFALSE);
					}
				if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4156, BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 745 */
						BgL_auxz00_6245 = ((BgL_ftpz00_bglt) BgL_ftpz00_4156);
					}
				else
					{
						obj_t BgL_auxz00_6249;

						BgL_auxz00_6249 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 28125)), BGl_string2893z00zz__ftpz00,
							BGl_string2793z00zz__ftpz00, BgL_ftpz00_4156);
						FAILURE(BgL_auxz00_6249, BFALSE, BFALSE);
					}
				return
					BGl_ftpzd2copyzd2filez00zz__ftpz00(BgL_auxz00_6245, BgL_auxz00_6253,
					BgL_auxz00_6260);
			}
		}

	}



/* &<@anonymous:1898> */
	obj_t BGl_z62zc3z04anonymousza31898ze3ze5zz__ftpz00(obj_t BgL_envz00_4159)
	{
		{	/* Unsafe/ftp.scm 748 */
			{	/* Unsafe/ftp.scm 749 */
				obj_t BgL_rz00_4160;

				BgL_rz00_4160 = PROCEDURE_REF(BgL_envz00_4159, (int) (((long) 0)));
				{	/* Unsafe/ftp.scm 749 */
					bool_t BgL_tmpz00_6270;

					{	/* Unsafe/ftp.scm 749 */
						obj_t BgL_arg1901z00_4512;
						obj_t BgL_arg1902z00_4513;

						BgL_arg1901z00_4512 =
							BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_rz00_4160);
						{	/* Unsafe/ftp.scm 749 */
							obj_t BgL_res2581z00_4514;

							{	/* Unsafe/ftp.scm 749 */
								obj_t BgL_tmpz00_6272;

								BgL_tmpz00_6272 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2581z00_4514 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6272);
							}
							BgL_arg1902z00_4513 = BgL_res2581z00_4514;
						}
						bgl_display_obj(BgL_arg1901z00_4512, BgL_arg1902z00_4513);
					}
					BgL_tmpz00_6270 = ((bool_t) 1);
					return BBOOL(BgL_tmpz00_6270);
				}
			}
		}

	}



/* ftp-put-file */
	BGL_EXPORTED_DEF obj_t BGl_ftpzd2putzd2filez00zz__ftpz00(BgL_ftpz00_bglt
		BgL_ftpz00_99, obj_t BgL_pathz00_100)
	{
		{	/* Unsafe/ftp.scm 755 */
			{	/* Unsafe/ftp.scm 756 */
				bool_t BgL_res2582z00_3654;

				{	/* Unsafe/ftp.scm 554 */
					obj_t BgL_opz00_3641;

					{	/* Unsafe/ftp.scm 554 */
						obj_t BgL_arg1798z00_3642;

						BgL_arg1798z00_3642 =
							(((BgL_z52ftpz52_bglt) COBJECT(
									((BgL_z52ftpz52_bglt) BgL_ftpz00_99)))->BgL_dtpz00);
						{	/* Unsafe/ftp.scm 554 */
							obj_t BgL_res2549z00_3643;

							{	/* Unsafe/ftp.scm 554 */
								obj_t BgL_tmpz00_6279;

								BgL_tmpz00_6279 = ((obj_t) BgL_arg1798z00_3642);
								BgL_res2549z00_3643 = SOCKET_OUTPUT(BgL_tmpz00_6279);
							}
							BgL_opz00_3641 = BgL_res2549z00_3643;
						}
					}
					if (fexists(BSTRING_TO_STRING(BgL_pathz00_100)))
						{	/* Unsafe/ftp.scm 556 */
							obj_t BgL__andtest_1141z00_3648;

							{	/* Unsafe/ftp.scm 557 */
								obj_t BgL_list1796z00_3649;

								BgL_list1796z00_3649 = MAKE_YOUNG_PAIR(BTRUE, BNIL);
								BgL__andtest_1141z00_3648 =
									BGl_z52ftpzd2enginezd2cmdz52zz__ftpz00(
									((obj_t) BgL_ftpz00_99), BGl_string2853z00zz__ftpz00,
									BgL_list1796z00_3649);
							}
							if (CBOOL(BgL__andtest_1141z00_3648))
								{	/* Unsafe/ftp.scm 559 */
									long BgL_arg1795z00_3651;

									BgL_arg1795z00_3651 =
										bgl_file_size(BSTRING_TO_STRING(BgL_pathz00_100));
									{	/* Unsafe/ftp.scm 559 */
										long BgL_xz00_4502;

										BgL_xz00_4502 =
											BGl_sendzd2filezd2zz__r4_input_6_10_2z00(BgL_pathz00_100,
											BgL_opz00_3641, BgL_arg1795z00_3651, ((long) 0));
										BgL_res2582z00_3654 = ((bool_t) 1);
								}}
							else
								{	/* Unsafe/ftp.scm 556 */
									BgL_res2582z00_3654 = ((bool_t) 0);
								}
						}
					else
						{	/* Unsafe/ftp.scm 555 */
							BgL_res2582z00_3654 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_res2582z00_3654);
			}
		}

	}



/* &ftp-put-file */
	obj_t BGl_z62ftpzd2putzd2filez62zz__ftpz00(obj_t BgL_envz00_4161,
		obj_t BgL_ftpz00_4162, obj_t BgL_pathz00_4163)
	{
		{	/* Unsafe/ftp.scm 755 */
			{	/* Unsafe/ftp.scm 756 */
				obj_t BgL_auxz00_6302;
				BgL_ftpz00_bglt BgL_auxz00_6294;

				if (STRINGP(BgL_pathz00_4163))
					{	/* Unsafe/ftp.scm 756 */
						BgL_auxz00_6302 = BgL_pathz00_4163;
					}
				else
					{
						obj_t BgL_auxz00_6305;

						BgL_auxz00_6305 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 28539)), BGl_string2894z00zz__ftpz00,
							BGl_string2828z00zz__ftpz00, BgL_pathz00_4163);
						FAILURE(BgL_auxz00_6305, BFALSE, BFALSE);
					}
				if (BGl_isazf3zf3zz__objectz00(BgL_ftpz00_4162, BGl_ftpz00zz__ftpz00))
					{	/* Unsafe/ftp.scm 756 */
						BgL_auxz00_6294 = ((BgL_ftpz00_bglt) BgL_ftpz00_4162);
					}
				else
					{
						obj_t BgL_auxz00_6298;

						BgL_auxz00_6298 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2818z00zz__ftpz00,
							BINT(((long) 28539)), BGl_string2894z00zz__ftpz00,
							BGl_string2793z00zz__ftpz00, BgL_ftpz00_4162);
						FAILURE(BgL_auxz00_6298, BFALSE, BFALSE);
					}
				return
					BGl_ftpzd2putzd2filez00zz__ftpz00(BgL_auxz00_6294, BgL_auxz00_6302);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__ftpz00()
	{
		{	/* Unsafe/ftp.scm 15 */
			{	/* Unsafe/ftp.scm 52 */
				obj_t BgL_arg1905z00_2165;
				obj_t BgL_arg1906z00_2166;

				{	/* Unsafe/ftp.scm 52 */
					obj_t BgL_v1244z00_2172;

					BgL_v1244z00_2172 = create_vector(((long) 3));
					VECTOR_SET(BgL_v1244z00_2172, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2898z00zz__ftpz00, BGl_proc2897z00zz__ftpz00,
							BGl_proc2896z00zz__ftpz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2895z00zz__ftpz00, BGl_symbol2900z00zz__ftpz00));
					VECTOR_SET(BgL_v1244z00_2172, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2905z00zz__ftpz00, BGl_proc2904z00zz__ftpz00,
							BGl_proc2903z00zz__ftpz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2902z00zz__ftpz00, BGl_symbol2900z00zz__ftpz00));
					VECTOR_SET(BgL_v1244z00_2172, ((long) 2),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2910z00zz__ftpz00, BGl_proc2909z00zz__ftpz00,
							BGl_proc2908z00zz__ftpz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2907z00zz__ftpz00, BGl_symbol2912z00zz__ftpz00));
					BgL_arg1905z00_2165 = BgL_v1244z00_2172;
				}
				{	/* Unsafe/ftp.scm 52 */
					obj_t BgL_v1245z00_2212;

					BgL_v1245z00_2212 = create_vector(((long) 0));
					BgL_arg1906z00_2166 = BgL_v1245z00_2212;
				}
				BGl_z52ftpz52zz__ftpz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol2916z00zz__ftpz00,
					BGl_symbol2918z00zz__ftpz00, BGl_objectz00zz__objectz00,
					((long) 39089), BFALSE, BGl_proc2915z00zz__ftpz00, BFALSE,
					BGl_proc2914z00zz__ftpz00, BFALSE, BgL_arg1905z00_2165,
					BgL_arg1906z00_2166);
			}
			{	/* Unsafe/ftp.scm 57 */
				obj_t BgL_arg1934z00_2218;
				obj_t BgL_arg1935z00_2219;

				{	/* Unsafe/ftp.scm 57 */
					obj_t BgL_v1246z00_2238;

					BgL_v1246z00_2238 = create_vector(((long) 6));
					VECTOR_SET(BgL_v1246z00_2238, ((long) 0),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2923z00zz__ftpz00, BGl_proc2922z00zz__ftpz00,
							BGl_proc2921z00zz__ftpz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2920z00zz__ftpz00, BGl_symbol2924z00zz__ftpz00));
					VECTOR_SET(BgL_v1246z00_2238, ((long) 1),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2789z00zz__ftpz00, BGl_proc2927z00zz__ftpz00,
							BGl_proc2926z00zz__ftpz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2925z00zz__ftpz00, BGl_symbol2928z00zz__ftpz00));
					VECTOR_SET(BgL_v1246z00_2238, ((long) 2),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2932z00zz__ftpz00, BGl_proc2931z00zz__ftpz00,
							BGl_proc2930z00zz__ftpz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2929z00zz__ftpz00, BGl_symbol2924z00zz__ftpz00));
					VECTOR_SET(BgL_v1246z00_2238, ((long) 3),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2937z00zz__ftpz00, BGl_proc2936z00zz__ftpz00,
							BGl_proc2935z00zz__ftpz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2934z00zz__ftpz00, BGl_symbol2924z00zz__ftpz00));
					VECTOR_SET(BgL_v1246z00_2238, ((long) 4),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2942z00zz__ftpz00, BGl_proc2941z00zz__ftpz00,
							BGl_proc2940z00zz__ftpz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2939z00zz__ftpz00, BGl_symbol2924z00zz__ftpz00));
					VECTOR_SET(BgL_v1246z00_2238, ((long) 5),
						BGl_makezd2classzd2fieldz00zz__objectz00
						(BGl_symbol2947z00zz__ftpz00, BGl_proc2946z00zz__ftpz00,
							BGl_proc2945z00zz__ftpz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2944z00zz__ftpz00, BGl_symbol2924z00zz__ftpz00));
					BgL_arg1934z00_2218 = BgL_v1246z00_2238;
				}
				{	/* Unsafe/ftp.scm 57 */
					obj_t BgL_v1247z00_2317;

					BgL_v1247z00_2317 = create_vector(((long) 0));
					BgL_arg1935z00_2219 = BgL_v1247z00_2317;
				}
				BGl_ftpz00zz__ftpz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol2952z00zz__ftpz00,
					BGl_symbol2918z00zz__ftpz00, BGl_z52ftpz52zz__ftpz00, ((long) 36336),
					BGl_proc2951z00zz__ftpz00, BGl_proc2950z00zz__ftpz00, BFALSE,
					BGl_proc2949z00zz__ftpz00, BFALSE, BgL_arg1934z00_2218,
					BgL_arg1935z00_2219);
			}
			{	/* Unsafe/ftp.scm 64 */
				obj_t BgL_arg1988z00_2324;
				obj_t BgL_arg1989z00_2325;

				{	/* Unsafe/ftp.scm 64 */
					obj_t BgL_v1248z00_2341;

					BgL_v1248z00_2341 = create_vector(((long) 0));
					BgL_arg1988z00_2324 = BgL_v1248z00_2341;
				}
				{	/* Unsafe/ftp.scm 64 */
					obj_t BgL_v1249z00_2342;

					BgL_v1249z00_2342 = create_vector(((long) 0));
					BgL_arg1989z00_2325 = BgL_v1249z00_2342;
				}
				BGl_z62ftpzd2errorzb0zz__ftpz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol2956z00zz__ftpz00,
					BGl_symbol2918z00zz__ftpz00, BGl_z62errorz62zz__objectz00,
					((long) 28107), BGl_proc2955z00zz__ftpz00, BGl_proc2954z00zz__ftpz00,
					BFALSE, BGl_proc2953z00zz__ftpz00, BFALSE, BgL_arg1988z00_2324,
					BgL_arg1989z00_2325);
			}
			{	/* Unsafe/ftp.scm 65 */
				obj_t BgL_arg1998z00_2349;
				obj_t BgL_arg1999z00_2350;

				{	/* Unsafe/ftp.scm 65 */
					obj_t BgL_v1250z00_2366;

					BgL_v1250z00_2366 = create_vector(((long) 0));
					BgL_arg1998z00_2349 = BgL_v1250z00_2366;
				}
				{	/* Unsafe/ftp.scm 65 */
					obj_t BgL_v1251z00_2367;

					BgL_v1251z00_2367 = create_vector(((long) 0));
					BgL_arg1999z00_2350 = BgL_v1251z00_2367;
				}
				return (BGl_z62ftpzd2parsezd2errorz62zz__ftpz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol2961z00zz__ftpz00,
						BGl_symbol2918z00zz__ftpz00,
						BGl_z62iozd2parsezd2errorz62zz__objectz00, ((long) 61167),
						BGl_proc2960z00zz__ftpz00, BGl_proc2959z00zz__ftpz00, BFALSE,
						BGl_proc2958z00zz__ftpz00, BFALSE, BgL_arg1998z00_2349,
						BgL_arg1999z00_2350), BUNSPEC);
		}}

	}



/* &<@anonymous:2004> */
	obj_t BGl_z62zc3z04anonymousza32004ze3ze5zz__ftpz00(obj_t BgL_envz00_4202,
		obj_t BgL_new1071z00_4203)
	{
		{	/* Unsafe/ftp.scm 65 */
			{
				BgL_z62ftpzd2parsezd2errorz62_bglt BgL_auxz00_6340;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62ftpzd2parsezd2errorz62_bglt)
										BgL_new1071z00_4203))))->BgL_fnamez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62ftpzd2parsezd2errorz62_bglt)
										BgL_new1071z00_4203))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62ftpzd2parsezd2errorz62_bglt)
										BgL_new1071z00_4203))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62ftpzd2parsezd2errorz62_bglt)
										BgL_new1071z00_4203))))->BgL_procz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62ftpzd2parsezd2errorz62_bglt)
										BgL_new1071z00_4203))))->BgL_msgz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62ftpzd2parsezd2errorz62_bglt)
										BgL_new1071z00_4203))))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_6340 =
					((BgL_z62ftpzd2parsezd2errorz62_bglt) BgL_new1071z00_4203);
				return ((obj_t) BgL_auxz00_6340);
			}
		}

	}



/* &lambda2002 */
	BgL_z62ftpzd2parsezd2errorz62_bglt BGl_z62lambda2002z62zz__ftpz00(obj_t
		BgL_envz00_4204)
	{
		{	/* Unsafe/ftp.scm 65 */
			{	/* Unsafe/ftp.scm 65 */
				BgL_z62ftpzd2parsezd2errorz62_bglt BgL_new1070z00_4516;

				BgL_new1070z00_4516 =
					((BgL_z62ftpzd2parsezd2errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62ftpzd2parsezd2errorz62_bgl))));
				{	/* Unsafe/ftp.scm 65 */
					long BgL_arg2003z00_4517;

					{	/* Unsafe/ftp.scm 65 */
						long BgL_res2589z00_4518;

						BgL_res2589z00_4518 =
							BGL_CLASS_INDEX(BGl_z62ftpzd2parsezd2errorz62zz__ftpz00);
						BgL_arg2003z00_4517 = BgL_res2589z00_4518;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1070z00_4516), BgL_arg2003z00_4517);
				}
				return BgL_new1070z00_4516;
			}
		}

	}



/* &lambda2000 */
	BgL_z62ftpzd2parsezd2errorz62_bglt BGl_z62lambda2000z62zz__ftpz00(obj_t
		BgL_envz00_4205, obj_t BgL_fname1064z00_4206,
		obj_t BgL_location1065z00_4207, obj_t BgL_stack1066z00_4208,
		obj_t BgL_proc1067z00_4209, obj_t BgL_msg1068z00_4210,
		obj_t BgL_obj1069z00_4211)
	{
		{	/* Unsafe/ftp.scm 65 */
			{	/* Unsafe/ftp.scm 65 */
				BgL_z62ftpzd2parsezd2errorz62_bglt BgL_new1165z00_4519;

				{	/* Unsafe/ftp.scm 65 */
					BgL_z62ftpzd2parsezd2errorz62_bglt BgL_new1164z00_4520;

					BgL_new1164z00_4520 =
						((BgL_z62ftpzd2parsezd2errorz62_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62ftpzd2parsezd2errorz62_bgl))));
					{	/* Unsafe/ftp.scm 65 */
						long BgL_arg2001z00_4521;

						{	/* Unsafe/ftp.scm 65 */
							long BgL_res2588z00_4522;

							BgL_res2588z00_4522 =
								BGL_CLASS_INDEX(BGl_z62ftpzd2parsezd2errorz62zz__ftpz00);
							BgL_arg2001z00_4521 = BgL_res2588z00_4522;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1164z00_4520), BgL_arg2001z00_4521);
					}
					BgL_new1165z00_4519 = BgL_new1164z00_4520;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1165z00_4519)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1064z00_4206), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1165z00_4519)))->BgL_locationz00) =
					((obj_t) BgL_location1065z00_4207), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1165z00_4519)))->BgL_stackz00) =
					((obj_t) BgL_stack1066z00_4208), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1165z00_4519)))->BgL_procz00) =
					((obj_t) BgL_proc1067z00_4209), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1165z00_4519)))->BgL_msgz00) =
					((obj_t) BgL_msg1068z00_4210), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1165z00_4519)))->BgL_objz00) =
					((obj_t) BgL_obj1069z00_4211), BUNSPEC);
				return BgL_new1165z00_4519;
			}
		}

	}



/* &<@anonymous:1994> */
	obj_t BGl_z62zc3z04anonymousza31994ze3ze5zz__ftpz00(obj_t BgL_envz00_4212,
		obj_t BgL_new1062z00_4213)
	{
		{	/* Unsafe/ftp.scm 64 */
			{
				BgL_z62ftpzd2errorzb0_bglt BgL_auxz00_6381;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62ftpzd2errorzb0_bglt) BgL_new1062z00_4213))))->
						BgL_fnamez00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) ((BgL_z62ftpzd2errorzb0_bglt)
										BgL_new1062z00_4213))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) ((BgL_z62ftpzd2errorzb0_bglt)
										BgL_new1062z00_4213))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) ((BgL_z62ftpzd2errorzb0_bglt)
										BgL_new1062z00_4213))))->BgL_procz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) ((BgL_z62ftpzd2errorzb0_bglt)
										BgL_new1062z00_4213))))->BgL_msgz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) ((BgL_z62ftpzd2errorzb0_bglt)
										BgL_new1062z00_4213))))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_6381 = ((BgL_z62ftpzd2errorzb0_bglt) BgL_new1062z00_4213);
				return ((obj_t) BgL_auxz00_6381);
			}
		}

	}



/* &lambda1992 */
	BgL_z62ftpzd2errorzb0_bglt BGl_z62lambda1992z62zz__ftpz00(obj_t
		BgL_envz00_4214)
	{
		{	/* Unsafe/ftp.scm 64 */
			{	/* Unsafe/ftp.scm 64 */
				BgL_z62ftpzd2errorzb0_bglt BgL_new1061z00_4524;

				BgL_new1061z00_4524 =
					((BgL_z62ftpzd2errorzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62ftpzd2errorzb0_bgl))));
				{	/* Unsafe/ftp.scm 64 */
					long BgL_arg1993z00_4525;

					{	/* Unsafe/ftp.scm 64 */
						long BgL_res2587z00_4526;

						BgL_res2587z00_4526 =
							BGL_CLASS_INDEX(BGl_z62ftpzd2errorzb0zz__ftpz00);
						BgL_arg1993z00_4525 = BgL_res2587z00_4526;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1061z00_4524), BgL_arg1993z00_4525);
				}
				return BgL_new1061z00_4524;
			}
		}

	}



/* &lambda1990 */
	BgL_z62ftpzd2errorzb0_bglt BGl_z62lambda1990z62zz__ftpz00(obj_t
		BgL_envz00_4215, obj_t BgL_fname1055z00_4216,
		obj_t BgL_location1056z00_4217, obj_t BgL_stack1057z00_4218,
		obj_t BgL_proc1058z00_4219, obj_t BgL_msg1059z00_4220,
		obj_t BgL_obj1060z00_4221)
	{
		{	/* Unsafe/ftp.scm 64 */
			{	/* Unsafe/ftp.scm 64 */
				BgL_z62ftpzd2errorzb0_bglt BgL_new1163z00_4527;

				{	/* Unsafe/ftp.scm 64 */
					BgL_z62ftpzd2errorzb0_bglt BgL_new1162z00_4528;

					BgL_new1162z00_4528 =
						((BgL_z62ftpzd2errorzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62ftpzd2errorzb0_bgl))));
					{	/* Unsafe/ftp.scm 64 */
						long BgL_arg1991z00_4529;

						{	/* Unsafe/ftp.scm 64 */
							long BgL_res2586z00_4530;

							BgL_res2586z00_4530 =
								BGL_CLASS_INDEX(BGl_z62ftpzd2errorzb0zz__ftpz00);
							BgL_arg1991z00_4529 = BgL_res2586z00_4530;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1162z00_4528), BgL_arg1991z00_4529);
					}
					BgL_new1163z00_4527 = BgL_new1162z00_4528;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1163z00_4527)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1055z00_4216), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1163z00_4527)))->BgL_locationz00) =
					((obj_t) BgL_location1056z00_4217), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1163z00_4527)))->BgL_stackz00) =
					((obj_t) BgL_stack1057z00_4218), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1163z00_4527)))->BgL_procz00) =
					((obj_t) BgL_proc1058z00_4219), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1163z00_4527)))->BgL_msgz00) =
					((obj_t) BgL_msg1059z00_4220), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1163z00_4527)))->BgL_objz00) =
					((obj_t) BgL_obj1060z00_4221), BUNSPEC);
				return BgL_new1163z00_4527;
			}
		}

	}



/* &<@anonymous:1940> */
	obj_t BGl_z62zc3z04anonymousza31940ze3ze5zz__ftpz00(obj_t BgL_envz00_4222,
		obj_t BgL_new1053z00_4223)
	{
		{	/* Unsafe/ftp.scm 57 */
			{
				BgL_ftpz00_bglt BgL_auxz00_6422;

				((((BgL_z52ftpz52_bglt) COBJECT(
								((BgL_z52ftpz52_bglt)
									((BgL_ftpz00_bglt) BgL_new1053z00_4223))))->BgL_cmdz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z52ftpz52_bglt) COBJECT(((BgL_z52ftpz52_bglt) ((BgL_ftpz00_bglt)
										BgL_new1053z00_4223))))->BgL_dtpz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z52ftpz52_bglt) COBJECT(((BgL_z52ftpz52_bglt) ((BgL_ftpz00_bglt)
										BgL_new1053z00_4223))))->BgL_passivezf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_ftpz00_bglt) COBJECT(((BgL_ftpz00_bglt) BgL_new1053z00_4223)))->
						BgL_hostz00) = ((obj_t) BGl_string2813z00zz__ftpz00), BUNSPEC);
				((((BgL_ftpz00_bglt) COBJECT(((BgL_ftpz00_bglt) BgL_new1053z00_4223)))->
						BgL_portz00) = ((obj_t) BINT(((long) 0))), BUNSPEC);
				((((BgL_ftpz00_bglt) COBJECT(((BgL_ftpz00_bglt) BgL_new1053z00_4223)))->
						BgL_motdz00) = ((obj_t) BGl_string2813z00zz__ftpz00), BUNSPEC);
				((((BgL_ftpz00_bglt) COBJECT(((BgL_ftpz00_bglt) BgL_new1053z00_4223)))->
						BgL_userz00) = ((obj_t) BGl_string2813z00zz__ftpz00), BUNSPEC);
				((((BgL_ftpz00_bglt) COBJECT(((BgL_ftpz00_bglt) BgL_new1053z00_4223)))->
						BgL_passz00) = ((obj_t) BGl_string2813z00zz__ftpz00), BUNSPEC);
				((((BgL_ftpz00_bglt) COBJECT(((BgL_ftpz00_bglt) BgL_new1053z00_4223)))->
						BgL_acctz00) = ((obj_t) BGl_string2813z00zz__ftpz00), BUNSPEC);
				BgL_auxz00_6422 = ((BgL_ftpz00_bglt) BgL_new1053z00_4223);
				return ((obj_t) BgL_auxz00_6422);
			}
		}

	}



/* &lambda1938 */
	BgL_ftpz00_bglt BGl_z62lambda1938z62zz__ftpz00(obj_t BgL_envz00_4224)
	{
		{	/* Unsafe/ftp.scm 57 */
			{	/* Unsafe/ftp.scm 57 */
				BgL_ftpz00_bglt BgL_new1052z00_4532;

				BgL_new1052z00_4532 =
					((BgL_ftpz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct BgL_ftpz00_bgl))));
				{	/* Unsafe/ftp.scm 57 */
					long BgL_arg1939z00_4533;

					{	/* Unsafe/ftp.scm 57 */
						long BgL_res2585z00_4534;

						BgL_res2585z00_4534 = BGL_CLASS_INDEX(BGl_ftpz00zz__ftpz00);
						BgL_arg1939z00_4533 = BgL_res2585z00_4534;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1052z00_4532), BgL_arg1939z00_4533);
				}
				return BgL_new1052z00_4532;
			}
		}

	}



/* &lambda1936 */
	BgL_ftpz00_bglt BGl_z62lambda1936z62zz__ftpz00(obj_t BgL_envz00_4225,
		obj_t BgL_cmd1043z00_4226, obj_t BgL_dtp1044z00_4227,
		obj_t BgL_passivezf31045zf3_4228, obj_t BgL_host1046z00_4229,
		obj_t BgL_port1047z00_4230, obj_t BgL_motd1048z00_4231,
		obj_t BgL_user1049z00_4232, obj_t BgL_pass1050z00_4233,
		obj_t BgL_acct1051z00_4234)
	{
		{	/* Unsafe/ftp.scm 57 */
			{	/* Unsafe/ftp.scm 57 */
				bool_t BgL_passivezf31045zf3_4535;

				BgL_passivezf31045zf3_4535 = CBOOL(BgL_passivezf31045zf3_4228);
				{	/* Unsafe/ftp.scm 57 */
					BgL_ftpz00_bglt BgL_new1161z00_4542;

					{	/* Unsafe/ftp.scm 57 */
						BgL_ftpz00_bglt BgL_new1160z00_4543;

						BgL_new1160z00_4543 =
							((BgL_ftpz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_ftpz00_bgl))));
						{	/* Unsafe/ftp.scm 57 */
							long BgL_arg1937z00_4544;

							{	/* Unsafe/ftp.scm 57 */
								long BgL_res2584z00_4545;

								BgL_res2584z00_4545 = BGL_CLASS_INDEX(BGl_ftpz00zz__ftpz00);
								BgL_arg1937z00_4544 = BgL_res2584z00_4545;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1160z00_4543),
								BgL_arg1937z00_4544);
						}
						BgL_new1161z00_4542 = BgL_new1160z00_4543;
					}
					((((BgL_z52ftpz52_bglt) COBJECT(
									((BgL_z52ftpz52_bglt) BgL_new1161z00_4542)))->BgL_cmdz00) =
						((obj_t) BgL_cmd1043z00_4226), BUNSPEC);
					((((BgL_z52ftpz52_bglt) COBJECT(((BgL_z52ftpz52_bglt)
										BgL_new1161z00_4542)))->BgL_dtpz00) =
						((obj_t) BgL_dtp1044z00_4227), BUNSPEC);
					((((BgL_z52ftpz52_bglt) COBJECT(((BgL_z52ftpz52_bglt)
										BgL_new1161z00_4542)))->BgL_passivezf3zf3) =
						((bool_t) BgL_passivezf31045zf3_4535), BUNSPEC);
					((((BgL_ftpz00_bglt) COBJECT(BgL_new1161z00_4542))->BgL_hostz00) =
						((obj_t) ((obj_t) BgL_host1046z00_4229)), BUNSPEC);
					((((BgL_ftpz00_bglt) COBJECT(BgL_new1161z00_4542))->BgL_portz00) =
						((obj_t) ((obj_t) BgL_port1047z00_4230)), BUNSPEC);
					((((BgL_ftpz00_bglt) COBJECT(BgL_new1161z00_4542))->BgL_motdz00) =
						((obj_t) ((obj_t) BgL_motd1048z00_4231)), BUNSPEC);
					((((BgL_ftpz00_bglt) COBJECT(BgL_new1161z00_4542))->BgL_userz00) =
						((obj_t) ((obj_t) BgL_user1049z00_4232)), BUNSPEC);
					((((BgL_ftpz00_bglt) COBJECT(BgL_new1161z00_4542))->BgL_passz00) =
						((obj_t) ((obj_t) BgL_pass1050z00_4233)), BUNSPEC);
					((((BgL_ftpz00_bglt) COBJECT(BgL_new1161z00_4542))->BgL_acctz00) =
						((obj_t) ((obj_t) BgL_acct1051z00_4234)), BUNSPEC);
					return BgL_new1161z00_4542;
				}
			}
		}

	}



/* &<@anonymous:1984> */
	obj_t BGl_z62zc3z04anonymousza31984ze3ze5zz__ftpz00(obj_t BgL_envz00_4235)
	{
		{	/* Unsafe/ftp.scm 57 */
			return BGl_string2813z00zz__ftpz00;
		}

	}



/* &lambda1983 */
	obj_t BGl_z62lambda1983z62zz__ftpz00(obj_t BgL_envz00_4236,
		obj_t BgL_oz00_4237, obj_t BgL_vz00_4238)
	{
		{	/* Unsafe/ftp.scm 57 */
			return
				((((BgL_ftpz00_bglt) COBJECT(
							((BgL_ftpz00_bglt) BgL_oz00_4237)))->BgL_acctz00) = ((obj_t)
					((obj_t) BgL_vz00_4238)), BUNSPEC);
		}

	}



/* &lambda1982 */
	obj_t BGl_z62lambda1982z62zz__ftpz00(obj_t BgL_envz00_4239,
		obj_t BgL_oz00_4240)
	{
		{	/* Unsafe/ftp.scm 57 */
			return
				(((BgL_ftpz00_bglt) COBJECT(
						((BgL_ftpz00_bglt) BgL_oz00_4240)))->BgL_acctz00);
		}

	}



/* &<@anonymous:1976> */
	obj_t BGl_z62zc3z04anonymousza31976ze3ze5zz__ftpz00(obj_t BgL_envz00_4241)
	{
		{	/* Unsafe/ftp.scm 57 */
			return BGl_string2815z00zz__ftpz00;
		}

	}



/* &lambda1975 */
	obj_t BGl_z62lambda1975z62zz__ftpz00(obj_t BgL_envz00_4242,
		obj_t BgL_oz00_4243, obj_t BgL_vz00_4244)
	{
		{	/* Unsafe/ftp.scm 57 */
			return
				((((BgL_ftpz00_bglt) COBJECT(
							((BgL_ftpz00_bglt) BgL_oz00_4243)))->BgL_passz00) = ((obj_t)
					((obj_t) BgL_vz00_4244)), BUNSPEC);
		}

	}



/* &lambda1974 */
	obj_t BGl_z62lambda1974z62zz__ftpz00(obj_t BgL_envz00_4245,
		obj_t BgL_oz00_4246)
	{
		{	/* Unsafe/ftp.scm 57 */
			return
				(((BgL_ftpz00_bglt) COBJECT(
						((BgL_ftpz00_bglt) BgL_oz00_4246)))->BgL_passz00);
		}

	}



/* &<@anonymous:1969> */
	obj_t BGl_z62zc3z04anonymousza31969ze3ze5zz__ftpz00(obj_t BgL_envz00_4247)
	{
		{	/* Unsafe/ftp.scm 57 */
			return BGl_string2814z00zz__ftpz00;
		}

	}



/* &lambda1968 */
	obj_t BGl_z62lambda1968z62zz__ftpz00(obj_t BgL_envz00_4248,
		obj_t BgL_oz00_4249, obj_t BgL_vz00_4250)
	{
		{	/* Unsafe/ftp.scm 57 */
			return
				((((BgL_ftpz00_bglt) COBJECT(
							((BgL_ftpz00_bglt) BgL_oz00_4249)))->BgL_userz00) = ((obj_t)
					((obj_t) BgL_vz00_4250)), BUNSPEC);
		}

	}



/* &lambda1967 */
	obj_t BGl_z62lambda1967z62zz__ftpz00(obj_t BgL_envz00_4251,
		obj_t BgL_oz00_4252)
	{
		{	/* Unsafe/ftp.scm 57 */
			return
				(((BgL_ftpz00_bglt) COBJECT(
						((BgL_ftpz00_bglt) BgL_oz00_4252)))->BgL_userz00);
		}

	}



/* &<@anonymous:1962> */
	obj_t BGl_z62zc3z04anonymousza31962ze3ze5zz__ftpz00(obj_t BgL_envz00_4253)
	{
		{	/* Unsafe/ftp.scm 57 */
			return BGl_string2813z00zz__ftpz00;
		}

	}



/* &lambda1961 */
	obj_t BGl_z62lambda1961z62zz__ftpz00(obj_t BgL_envz00_4254,
		obj_t BgL_oz00_4255, obj_t BgL_vz00_4256)
	{
		{	/* Unsafe/ftp.scm 57 */
			return
				((((BgL_ftpz00_bglt) COBJECT(
							((BgL_ftpz00_bglt) BgL_oz00_4255)))->BgL_motdz00) = ((obj_t)
					((obj_t) BgL_vz00_4256)), BUNSPEC);
		}

	}



/* &lambda1960 */
	obj_t BGl_z62lambda1960z62zz__ftpz00(obj_t BgL_envz00_4257,
		obj_t BgL_oz00_4258)
	{
		{	/* Unsafe/ftp.scm 57 */
			return
				(((BgL_ftpz00_bglt) COBJECT(
						((BgL_ftpz00_bglt) BgL_oz00_4258)))->BgL_motdz00);
		}

	}



/* &<@anonymous:1955> */
	obj_t BGl_z62zc3z04anonymousza31955ze3ze5zz__ftpz00(obj_t BgL_envz00_4259)
	{
		{	/* Unsafe/ftp.scm 57 */
			return BINT(((long) 21));
		}

	}



/* &lambda1954 */
	obj_t BGl_z62lambda1954z62zz__ftpz00(obj_t BgL_envz00_4260,
		obj_t BgL_oz00_4261, obj_t BgL_vz00_4262)
	{
		{	/* Unsafe/ftp.scm 57 */
			return
				((((BgL_ftpz00_bglt) COBJECT(
							((BgL_ftpz00_bglt) BgL_oz00_4261)))->BgL_portz00) = ((obj_t)
					((obj_t) BgL_vz00_4262)), BUNSPEC);
		}

	}



/* &lambda1953 */
	obj_t BGl_z62lambda1953z62zz__ftpz00(obj_t BgL_envz00_4263,
		obj_t BgL_oz00_4264)
	{
		{	/* Unsafe/ftp.scm 57 */
			return
				(((BgL_ftpz00_bglt) COBJECT(
						((BgL_ftpz00_bglt) BgL_oz00_4264)))->BgL_portz00);
		}

	}



/* &<@anonymous:1947> */
	obj_t BGl_z62zc3z04anonymousza31947ze3ze5zz__ftpz00(obj_t BgL_envz00_4265)
	{
		{	/* Unsafe/ftp.scm 57 */
			return BGl_string2804z00zz__ftpz00;
		}

	}



/* &lambda1946 */
	obj_t BGl_z62lambda1946z62zz__ftpz00(obj_t BgL_envz00_4266,
		obj_t BgL_oz00_4267, obj_t BgL_vz00_4268)
	{
		{	/* Unsafe/ftp.scm 57 */
			return
				((((BgL_ftpz00_bglt) COBJECT(
							((BgL_ftpz00_bglt) BgL_oz00_4267)))->BgL_hostz00) = ((obj_t)
					((obj_t) BgL_vz00_4268)), BUNSPEC);
		}

	}



/* &lambda1945 */
	obj_t BGl_z62lambda1945z62zz__ftpz00(obj_t BgL_envz00_4269,
		obj_t BgL_oz00_4270)
	{
		{	/* Unsafe/ftp.scm 57 */
			return
				(((BgL_ftpz00_bglt) COBJECT(
						((BgL_ftpz00_bglt) BgL_oz00_4270)))->BgL_hostz00);
		}

	}



/* &<@anonymous:1909> */
	obj_t BGl_z62zc3z04anonymousza31909ze3ze5zz__ftpz00(obj_t BgL_envz00_4271,
		obj_t BgL_new1041z00_4272)
	{
		{	/* Unsafe/ftp.scm 52 */
			{
				BgL_z52ftpz52_bglt BgL_auxz00_6505;

				((((BgL_z52ftpz52_bglt) COBJECT(
								((BgL_z52ftpz52_bglt) BgL_new1041z00_4272)))->BgL_cmdz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z52ftpz52_bglt) COBJECT(((BgL_z52ftpz52_bglt)
									BgL_new1041z00_4272)))->BgL_dtpz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z52ftpz52_bglt) COBJECT(((BgL_z52ftpz52_bglt)
									BgL_new1041z00_4272)))->BgL_passivezf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				BgL_auxz00_6505 = ((BgL_z52ftpz52_bglt) BgL_new1041z00_4272);
				return ((obj_t) BgL_auxz00_6505);
			}
		}

	}



/* &lambda1907 */
	BgL_z52ftpz52_bglt BGl_z62lambda1907z62zz__ftpz00(obj_t BgL_envz00_4273)
	{
		{	/* Unsafe/ftp.scm 52 */
			{	/* Unsafe/ftp.scm 52 */
				BgL_z52ftpz52_bglt BgL_new1040z00_4565;

				BgL_new1040z00_4565 =
					((BgL_z52ftpz52_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z52ftpz52_bgl))));
				{	/* Unsafe/ftp.scm 52 */
					long BgL_arg1908z00_4566;

					{	/* Unsafe/ftp.scm 52 */
						long BgL_res2583z00_4567;

						BgL_res2583z00_4567 = BGL_CLASS_INDEX(BGl_z52ftpz52zz__ftpz00);
						BgL_arg1908z00_4566 = BgL_res2583z00_4567;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1040z00_4565), BgL_arg1908z00_4566);
				}
				return BgL_new1040z00_4565;
			}
		}

	}



/* &<@anonymous:1930> */
	obj_t BGl_z62zc3z04anonymousza31930ze3ze5zz__ftpz00(obj_t BgL_envz00_4274)
	{
		{	/* Unsafe/ftp.scm 52 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda1929 */
	obj_t BGl_z62lambda1929z62zz__ftpz00(obj_t BgL_envz00_4275,
		obj_t BgL_oz00_4276, obj_t BgL_vz00_4277)
	{
		{	/* Unsafe/ftp.scm 52 */
			{	/* Unsafe/ftp.scm 52 */
				bool_t BgL_vz00_4569;

				BgL_vz00_4569 = CBOOL(BgL_vz00_4277);
				return
					((((BgL_z52ftpz52_bglt) COBJECT(
								((BgL_z52ftpz52_bglt) BgL_oz00_4276)))->BgL_passivezf3zf3) =
					((bool_t) BgL_vz00_4569), BUNSPEC);
			}
		}

	}



/* &lambda1928 */
	obj_t BGl_z62lambda1928z62zz__ftpz00(obj_t BgL_envz00_4278,
		obj_t BgL_oz00_4279)
	{
		{	/* Unsafe/ftp.scm 52 */
			return
				BBOOL(
				(((BgL_z52ftpz52_bglt) COBJECT(
							((BgL_z52ftpz52_bglt) BgL_oz00_4279)))->BgL_passivezf3zf3));
		}

	}



/* &<@anonymous:1923> */
	obj_t BGl_z62zc3z04anonymousza31923ze3ze5zz__ftpz00(obj_t BgL_envz00_4280)
	{
		{	/* Unsafe/ftp.scm 52 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1922 */
	obj_t BGl_z62lambda1922z62zz__ftpz00(obj_t BgL_envz00_4281,
		obj_t BgL_oz00_4282, obj_t BgL_vz00_4283)
	{
		{	/* Unsafe/ftp.scm 52 */
			return
				((((BgL_z52ftpz52_bglt) COBJECT(
							((BgL_z52ftpz52_bglt) BgL_oz00_4282)))->BgL_dtpz00) =
				((obj_t) BgL_vz00_4283), BUNSPEC);
		}

	}



/* &lambda1921 */
	obj_t BGl_z62lambda1921z62zz__ftpz00(obj_t BgL_envz00_4284,
		obj_t BgL_oz00_4285)
	{
		{	/* Unsafe/ftp.scm 52 */
			return
				(((BgL_z52ftpz52_bglt) COBJECT(
						((BgL_z52ftpz52_bglt) BgL_oz00_4285)))->BgL_dtpz00);
		}

	}



/* &<@anonymous:1916> */
	obj_t BGl_z62zc3z04anonymousza31916ze3ze5zz__ftpz00(obj_t BgL_envz00_4286)
	{
		{	/* Unsafe/ftp.scm 52 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1915 */
	obj_t BGl_z62lambda1915z62zz__ftpz00(obj_t BgL_envz00_4287,
		obj_t BgL_oz00_4288, obj_t BgL_vz00_4289)
	{
		{	/* Unsafe/ftp.scm 52 */
			return
				((((BgL_z52ftpz52_bglt) COBJECT(
							((BgL_z52ftpz52_bglt) BgL_oz00_4288)))->BgL_cmdz00) =
				((obj_t) BgL_vz00_4289), BUNSPEC);
		}

	}



/* &lambda1914 */
	obj_t BGl_z62lambda1914z62zz__ftpz00(obj_t BgL_envz00_4290,
		obj_t BgL_oz00_4291)
	{
		{	/* Unsafe/ftp.scm 52 */
			return
				(((BgL_z52ftpz52_bglt) COBJECT(
						((BgL_z52ftpz52_bglt) BgL_oz00_4291)))->BgL_cmdz00);
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__ftpz00()
	{
		{	/* Unsafe/ftp.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__ftpz00()
	{
		{	/* Unsafe/ftp.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2printzd2envz00zz__objectz00, BGl_ftpz00zz__ftpz00,
				BGl_proc2963z00zz__ftpz00, BGl_string2964z00zz__ftpz00);
		}

	}



/* &object-print-ftp1273 */
	obj_t BGl_z62objectzd2printzd2ftp1273z62zz__ftpz00(obj_t BgL_envz00_4293,
		obj_t BgL_oz00_4294, obj_t BgL_pz00_4295, obj_t BgL_printzd2slotzd2_4296)
	{
		{	/* Unsafe/ftp.scm 113 */
			{	/* Unsafe/ftp.scm 115 */
				obj_t BgL_tmpz00_6536;

				BgL_tmpz00_6536 = ((obj_t) BgL_pz00_4295);
				bgl_display_string(BGl_string2965z00zz__ftpz00, BgL_tmpz00_6536);
			}
			{	/* Unsafe/ftp.scm 116 */
				obj_t BgL_arg2005z00_4576;

				BgL_arg2005z00_4576 =
					(((BgL_ftpz00_bglt) COBJECT(
							((BgL_ftpz00_bglt) BgL_oz00_4294)))->BgL_hostz00);
				PROCEDURE_ENTRY(BgL_printzd2slotzd2_4296) (BgL_printzd2slotzd2_4296,
					BgL_arg2005z00_4576, BgL_pz00_4295, BEOA);
			}
			{	/* Unsafe/ftp.scm 117 */
				obj_t BgL_tmpz00_6546;

				BgL_tmpz00_6546 = ((obj_t) BgL_pz00_4295);
				bgl_display_string(BGl_string2966z00zz__ftpz00, BgL_tmpz00_6546);
			}
			{	/* Unsafe/ftp.scm 118 */
				obj_t BgL_arg2007z00_4577;

				BgL_arg2007z00_4577 =
					(((BgL_ftpz00_bglt) COBJECT(
							((BgL_ftpz00_bglt) BgL_oz00_4294)))->BgL_userz00);
				PROCEDURE_ENTRY(BgL_printzd2slotzd2_4296) (BgL_printzd2slotzd2_4296,
					BgL_arg2007z00_4577, BgL_pz00_4295, BEOA);
			}
			{	/* Unsafe/ftp.scm 119 */
				obj_t BgL_tmpz00_6556;

				BgL_tmpz00_6556 = ((obj_t) BgL_pz00_4295);
				bgl_display_string(BGl_string2967z00zz__ftpz00, BgL_tmpz00_6556);
			}
			{	/* Unsafe/ftp.scm 120 */
				obj_t BgL_arg2008z00_4578;

				BgL_arg2008z00_4578 =
					(((BgL_z52ftpz52_bglt) COBJECT(
							((BgL_z52ftpz52_bglt)
								((BgL_ftpz00_bglt) BgL_oz00_4294))))->BgL_dtpz00);
				PROCEDURE_ENTRY(BgL_printzd2slotzd2_4296) (BgL_printzd2slotzd2_4296,
					BgL_arg2008z00_4578, BgL_pz00_4295, BEOA);
			}
			{	/* Unsafe/ftp.scm 121 */
				obj_t BgL_tmpz00_6567;

				BgL_tmpz00_6567 = ((obj_t) BgL_pz00_4295);
				bgl_display_string(BGl_string2968z00zz__ftpz00, BgL_tmpz00_6567);
			}
			{	/* Unsafe/ftp.scm 122 */
				bool_t BgL_arg2010z00_4579;

				BgL_arg2010z00_4579 =
					(((BgL_z52ftpz52_bglt) COBJECT(
							((BgL_z52ftpz52_bglt)
								((BgL_ftpz00_bglt) BgL_oz00_4294))))->BgL_passivezf3zf3);
				bgl_display_obj(BBOOL(BgL_arg2010z00_4579), BgL_pz00_4295);
			}
			{	/* Unsafe/ftp.scm 123 */
				obj_t BgL_tmpz00_6575;

				BgL_tmpz00_6575 = ((obj_t) BgL_pz00_4295);
				return bgl_display_string(BGl_string2969z00zz__ftpz00, BgL_tmpz00_6575);
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__ftpz00()
	{
		{	/* Unsafe/ftp.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2919z00zz__ftpz00));
			return
				BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2919z00zz__ftpz00));
		}

	}

#ifdef __cplusplus
}
#endif
