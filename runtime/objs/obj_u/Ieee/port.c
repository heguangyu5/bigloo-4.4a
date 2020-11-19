/*===========================================================================*/
/*   (Ieee/port.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Ieee/port.scm -indent -o objs/obj_u/Ieee/port.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_z62httpzd2redirectionzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_portz00;
		obj_t BgL_urlz00;
	}                               *BgL_z62httpzd2redirectionzb0_bglt;


	static obj_t
		BGl_z62setzd2outputzd2portzd2positionz12za2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62inputzd2portzd2bufferzd2setz12za2zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62inputzd2portzd2namezd2setz12za2zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62callzd2withzd2outputzd2stringzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl__selectz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_z62directoryzd2ze3pathzd2listz81zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62outputzd2portzd2truncatez62zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2485z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t);
	extern bool_t reset_eof(obj_t);
	static obj_t BGl_z62inputzd2portzd2namez62zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62truncatezd2filezb0zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	extern obj_t bgl_directory_to_list(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2clonez12z12zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t
		BGl_z62outputzd2portzd2flushzd2bufferzd2setz12z70zz__r4_ports_6_10_1z00
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_search1260ze70ze7zz__r4_ports_6_10_1z00(long, obj_t, obj_t,
		long);
	BGL_EXPORTED_DECL bool_t
		BGl_closedzd2inputzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2namezd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t
		BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00 =
		BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_ports_6_10_1z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_outputzd2portzd2truncatez00zz__r4_ports_6_10_1z00(obj_t, long);
	BGL_EXPORTED_DECL obj_t
		BGl_directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl__lockfz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t
		BGl_z62withzd2errorzd2tozd2procedurezb0zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_filezd2existszf3z21zz__r4_ports_6_10_1z00(char
		*);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_resetzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_currentzd2outputzd2portz00zz__r4_ports_6_10_1z00();
	extern obj_t bgl_system_failure(int, obj_t, obj_t, obj_t);
	extern obj_t bgl_input_port_reopen(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2outputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
	extern obj_t BGl_z62httpzd2redirectionzb0zz__httpz00;
	extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern int bgl_input_fill_string(obj_t, obj_t);
	static obj_t BGl_z62inputzd2portzd2bufferz62zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_renamezd2filezd2zz__r4_ports_6_10_1z00(char *,
		char *);
	extern long bgl_file_size(char *);
	static obj_t BGl_toplevelzd2initzd2zz__r4_ports_6_10_1z00();
	extern obj_t bgl_open_input_resource(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_closedzd2outputzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_deletezd2directoryzd2zz__r4_ports_6_10_1z00(char
		*);
	extern obj_t bgl_output_port_seek(obj_t, long);
	static obj_t BGl__openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
	BGL_EXPORTED_DECL obj_t
		BGl_closezd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62currentzd2errorzd2portz62zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__r4_ports_6_10_1z00();
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_z62makezd2directoryzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t
		BGl_z62z52openzd2inputzd2httpzd2socketze2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_filezd2modificationzd2timez00zz__r4_ports_6_10_1z00(char *);
	static obj_t BGl_z62zc3z04anonymousza31400ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2namezd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_outputzd2portzd2isattyzf3zf3zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_objectzd2initzd2zz__r4_ports_6_10_1z00();
	static obj_t BGl_z62outputzd2portzd2namez62zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2withzd2appendzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_outputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7(obj_t);
	extern obj_t bgl_open_pipes(obj_t);
	static obj_t
		BGl_z62outputzd2portzd2timeoutzd2setz12za2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62inputzd2portzd2reopenz12z70zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_closezd2inputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62makezd2directorieszb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern long bgl_file_mode(char *);
	extern obj_t BGl_dirnamez00zz__osz00(obj_t);
	BGL_EXPORTED_DECL long BGl_filezd2accesszd2timez00zz__r4_ports_6_10_1z00(char
		*);
	static obj_t BGl_z62withzd2errorzd2tozd2portzb0zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31402ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62filezd2uidzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_z62inputzd2portzd2positionz62zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t
		BGl_z62withzd2outputzd2tozd2procedurezb0zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
	extern int bgl_output_string(obj_t, obj_t);
	static obj_t BGl_z62close2106z62zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62close2108z62zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62close2109z62zz__r4_ports_6_10_1z00(obj_t);
	static obj_t
		BGl_z62outputzd2procedurezd2portzf3z91zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31411ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL long BGl_filezd2changezd2timez00zz__r4_ports_6_10_1z00(char
		*);
	extern bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2fillzd2barrierzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62withzd2errorzd2tozd2stringzb0zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	static obj_t BGl_z62close2110z62zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62currentzd2inputzd2portz62zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62z52openzd2inputzd2filez30zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31404ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	static obj_t
		BGl_z62outputzd2portzd2closezd2hookzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t
		BGl_z62callzd2withzd2inputzd2stringzb0zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62outputzd2portzd2namezd2setz12za2zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62deletezd2directoryzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern bool_t bgl_input_port_timeout_set(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_inputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__r4_ports_6_10_1z00();
	static obj_t
		BGl_z62callzd2withzd2appendzd2filezb0zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62withzd2outputzd2tozd2portzb0zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t bgl_input_port_clone(obj_t, obj_t);
	static obj_t
		BGl_z62inputzd2portzd2protocolzd2setz12za2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern void bgl_input_port_seek(obj_t, long);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31413ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_directoryzf3zf3zz__r4_ports_6_10_1z00(char *);
	static obj_t BGl_z62zc3z04anonymousza31405ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62outputzd2portzd2bufferz62zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t get_output_string(obj_t);
	static obj_t BGl__openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_makezd2directoryzd2zz__r4_ports_6_10_1z00(char
		*);
	static obj_t BGl_z62filezd2gidzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern int bgl_symlink(char *, char *);
	extern obj_t bgl_open_input_substring(obj_t, long, long);
	static obj_t BGl_z62renamezd2filezb0zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62inputzd2portzd2lastzd2tokenzd2positionz62zz__r4_ports_6_10_1z00
		(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31414ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31406ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2fillzd2barrierzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		long);
	BGL_EXPORTED_DECL bool_t BGl_truncatezd2filezd2zz__r4_ports_6_10_1z00(char *,
		long);
	static obj_t
		BGl_z62outputzd2portzd2bufferzd2setz12za2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62z52openzd2inputzd2pipez30zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62withzd2inputzd2fromzd2portzb0zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_list2501z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t
		BGl_z62callzd2withzd2outputzd2filezb0zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_list2502z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2flushzd2bufferzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_list2506z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	extern obj_t make_string(long, unsigned char);
	extern obj_t BGl_urlzd2sanszd2protocolzd2parsezd2zz__urlz00(obj_t, obj_t);
	extern obj_t bgl_reopen_input_c_string(obj_t, char *);
	static obj_t BGl_z62withzd2appendzd2tozd2filezb0zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62inputzd2portzd2clonez12z70zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t bgl_close_input_port(obj_t);
	extern obj_t bgl_open_input_c_string(char *);
	static obj_t BGl_z62closezd2inputzd2portz62zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t
		BGl_z62outputzd2portzd2closezd2hookzd2setz12z70zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31415ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31407ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_flushzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62directoryzf3z91zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_deletezd2filezd2zz__r4_ports_6_10_1z00(char *);
	extern obj_t close_binary_port(obj_t);
	static obj_t BGl_z62filezd2accesszd2timez62zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t bgl_append_output_file(obj_t, obj_t);
	static obj_t BGl__openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_z62resetzd2outputzd2portz62zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern bool_t bigloo_strncmp(obj_t, obj_t, long);
	static obj_t BGl_z62flushz62zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62copyzd2filezb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
	extern obj_t bgl_close_output_port(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62filezd2typezb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_z62filezd2changezd2timez62zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2seekz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62inputzd2portzd2seekz62zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_list2614z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	BGL_EXPORTED_DECL long
		BGl_inputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL int BGl_filezd2timeszd2setz12z12zz__r4_ports_6_10_1z00(char
		*, long, long);
	static obj_t BGl__openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62filezd2modificationzd2timez62zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2symlinkzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62filezd2timeszd2setz12z70zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62filezd2existszf3z43zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31434ze3ze5zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
	extern obj_t BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(obj_t, obj_t);
	static obj_t BGl_z62flush2107z62zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62closezd2outputzd2portz62zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62inputzd2stringzd2portzf3z91zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31524ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62inputzd2portzd2seekzd2setz12za2zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_inputzd2portzd2lastzd2tokenzd2positionz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_z62flush2111z62zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL int BGl_filezd2uidzd2zz__r4_ports_6_10_1z00(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t bgl_open_input_procedure(obj_t, obj_t);
	static obj_t BGl_z62outputzd2portzd2positionz62zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_inputzd2portzd2lengthz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31436ze3ze5zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_reopenzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(obj_t, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__ftpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__httpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__urlz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__gunza7ipza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_copyzd2filezd2zz__r4_ports_6_10_1z00(char *,
		char *);
	extern obj_t bgl_open_output_file(obj_t, obj_t);
	static obj_t BGl_z62inputzd2portzf3z43zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t bgl_open_input_substring_bang(obj_t, long, long);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2gza7ipzd2portzf3z54zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_filezd2typezd2zz__r4_ports_6_10_1z00(char *);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_z62openzd2inputzd2czd2stringzb0zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern long bgl_last_access_time(char *);
	BGL_EXPORTED_DECL obj_t BGl_currentzd2errorzd2portz00zz__r4_ports_6_10_1z00();
	extern bool_t fexists(char *);
	static obj_t BGl_z62closedzd2inputzd2portzf3z91zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31364ze3ze5zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2seekzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_outputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl__openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2flushzd2hookzd2zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2reopenz12z12zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t bgl_open_input_file(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2appendzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern long bgl_last_change_time(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_z62outputzd2portzf3z43zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t
		BGl_z62outputzd2portzd2flushzd2bufferzb0zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_keyword2503z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_keyword2507z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	extern obj_t bgl_open_output_procedure(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__r4_ports_6_10_1z00();
	static obj_t BGl_z62zc3z04anonymousza31390ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31536ze3ze5zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31455ze3ze5zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62z52openzd2inputzd2resourcez30zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t, obj_t, int);
	BGL_EXPORTED_DECL bool_t BGl_portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL int BGl_filezd2gidzd2zz__r4_ports_6_10_1z00(char *);
	static obj_t BGl_z62getzd2portzd2bufferz62zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62deletezd2filezb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl__appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62filezd2siza7ez17zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_z62getzd2outputzd2stringz62zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__r4_ports_6_10_1z00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_ports_6_10_1z00();
	static obj_t BGl_z62closez62zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31456ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62withzd2errorzd2tozd2filezb0zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__openzd2pipeszd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern bool_t bgl_output_port_timeout_set(obj_t, long);
	static obj_t BGl_zc3z04exitza31452ze3ze70z60zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04exitza31533ze3ze70z60zz__r4_ports_6_10_1z00(obj_t);
	static obj_t
		BGl_z62reopenzd2inputzd2czd2stringzb0zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62filezd2gza7ipzf3ze4zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_keyword2522z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_z62inputzd2portzd2protocolz62zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t socket_close(obj_t);
	extern obj_t bgl_open_input_pipe(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_currentzd2inputzd2portz00zz__r4_ports_6_10_1z00();
	static obj_t BGl_z62zc3z04anonymousza31538ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t bgl_directory_to_path_list(char *, int, unsigned char);
	extern long bgl_file_uid(char *);
	static obj_t BGl_keyword2615z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_keyword2617z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_keyword2619z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_z62loopz62zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_openzd2pipeszd2zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
	static obj_t
		BGl_z62inputzd2portzd2timeoutzd2setz12za2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern bool_t bgl_lockf(obj_t, int, long);
	static obj_t BGl_z62parserz62zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_keyword2621z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62inputzd2gza7ipzd2portzf3z36zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62filezd2modezb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern bool_t bgl_directoryp(char *);
	static obj_t BGl_z62zc3z04anonymousza31386ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	static obj_t
		BGl_z62inputzd2portzd2fillzd2barrierzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_z62flushzd2outputzd2portz62zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62callzd2withzd2inputzd2filezb0zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_symbol2509z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_z62portzf3z91zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t
		BGl_z62withzd2inputzd2fromzd2procedurezb0zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62withzd2outputzd2tozd2filezb0zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_filezd2siza7ez75zz__r4_ports_6_10_1z00(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t BGl_httpzd2parsezd2responsez00zz__httpz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62outputzd2stringzd2portzf3z91zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t
		BGl_z62inputzd2portzd2fillzd2barrierzd2setz12z70zz__r4_ports_6_10_1z00
		(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2511z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t
		BGl_z62withzd2outputzd2tozd2stringzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_symbol2513z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_z62currentzd2outputzd2portz62zz__r4_ports_6_10_1z00(obj_t);
	extern long default_io_bufsiz;
	extern int bgl_utime(char *, long, long);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(char *);
	static obj_t BGl_z62resetzd2eofzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static obj_t
		BGl_z62setzd2inputzd2portzd2positionz12za2zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00 =
		BUNSPEC;
	static obj_t BGl_z62withzd2inputzd2fromzd2filezb0zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31396ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	extern long bgl_last_modification_time(char *);
	static obj_t BGl_z62zc3z04anonymousza31388ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t bgl_open_output_string(obj_t);
	extern obj_t bgl_select(long, obj_t, obj_t, obj_t);
	extern long bgl_file_gid(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t
		BGl_z62withzd2inputzd2fromzd2stringzb0zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t
		BGl_z62inputzd2portzd2closezd2hookzd2setz12z70zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62closedzd2outputzd2portzf3z91zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31397ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t
		BGl_z62inputzd2procedurezd2portzf3z91zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_filezd2modezd2zz__r4_ports_6_10_1z00(char *);
	extern obj_t bgl_file_type(char *);
	extern obj_t BGl_httpz00zz__httpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_selectz00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31398ze3ze5zz__r4_ports_6_10_1z00(obj_t);
	static obj_t
		BGl_z62outputzd2portzd2flushzd2hookzd2setz12z70zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2623z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t
		BGl_z62inputzd2portzd2closezd2hookzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	extern obj_t make_string_sans_fill(long);
	static obj_t BGl_z62makezd2symlinkzb0zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62outputzd2portzd2isattyzf3z91zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62inputzd2portzd2lengthz62zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_directoryzd2ze3listz31zz__r4_ports_6_10_1z00(char
		*);
	static obj_t BGl_symbol2631z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t
		BGl_z62outputzd2portzd2flushzd2hookzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_symbol2633z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_symbol2635z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_outputzd2portzd2flushzd2bufferzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_symbol2637z00zz__r4_ports_6_10_1z00 = BUNSPEC;
	static obj_t BGl_z62directoryzd2ze3listz53zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_resetzd2eofzd2zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_lockfz00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2outputzd2filezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2outputza7d2642z00, opt_generic_entry,
		BGl__openzd2outputzd2filez00zz__r4_ports_6_10_1z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2protocolzd2setz12zd2envz12zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72643za7,
		BGl_z62inputzd2portzd2protocolzd2setz12za2zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2directorieszd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762makeza7d2direct2644z00,
		BGl_z62makezd2directorieszb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2bufferzd2setz12zd2envz12zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72645za7,
		BGl_z62inputzd2portzd2bufferzd2setz12za2zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_closedzd2inputzd2portzf3zd2envz21zz__r4_ports_6_10_1z00,
		BgL_bgl_za762closedza7d2inpu2646z00,
		BGl_z62closedzd2inputzd2portzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2bufferzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762outputza7d2port2647z00,
		BGl_z62outputzd2portzd2bufferz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2modificationzd2timezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762fileza7d2modifi2648z00,
		BGl_z62filezd2modificationzd2timez62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52openzd2inputzd2pipezd2envz80zz__r4_ports_6_10_1z00,
		BgL_bgl_za762za752openza7d2inp2649za7,
		BGl_z62z52openzd2inputzd2pipez30zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2filezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2inputza7d22650z00, opt_generic_entry,
		BGl__openzd2inputzd2filez00zz__r4_ports_6_10_1z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2withzd2appendzd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762callza7d2withza7d2651za7,
		BGl_z62callzd2withzd2appendzd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2outputzd2tozd2portzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762withza7d2output2652z00,
		BGl_z62withzd2outputzd2tozd2portzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2flushzd2bufferzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762outputza7d2port2653z00,
		BGl_z62outputzd2portzd2flushzd2bufferzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2protocolzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72654za7,
		BGl_z62inputzd2portzd2protocolz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_currentzd2errorzd2portzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762currentza7d2err2655z00,
		BGl_z62currentzd2errorzd2portz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2namezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762outputza7d2port2656z00,
		BGl_z62outputzd2portzd2namez62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2errorzd2tozd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762withza7d2errorza72657za7,
		BGl_z62withzd2errorzd2tozd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2clonez12zd2envzc0zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72658za7,
		BGl_z62inputzd2portzd2clonez12z70zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_filezd2modezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762fileza7d2modeza7b2659za7,
		BGl_z62filezd2modezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2changezd2timezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762fileza7d2change2660z00,
		BGl_z62filezd2changezd2timez62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_portzf3zd2envz21zz__r4_ports_6_10_1z00,
		BgL_bgl_za762portza7f3za791za7za7_2661za7,
		BGl_z62portzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2closezd2hookzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72662za7,
		BGl_z62inputzd2portzd2closezd2hookzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string2500z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2500za700za7za7_2663za7, "http", 4);
	extern obj_t BGl_openzd2inputzd2za7libzd2filezd2envza7zz__gunza7ipza7;
	   
		 
		DEFINE_STRING(BGl_string2504z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2504za700za7za7_2664za7, "user-agent", 10);
	      DEFINE_STRING(BGl_string2505z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2505za700za7za7_2665za7, "Mozilla/5.0", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_resetzd2eofzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762resetza7d2eofza7b2666za7,
		BGl_z62resetzd2eofzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2508z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2508za700za7za7_2667za7, "Connection", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2czd2stringzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762openza7d2inputza72668za7,
		BGl_z62openzd2inputzd2czd2stringzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2errorzd2tozd2stringzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762withza7d2errorza72669za7,
		BGl_z62withzd2errorzd2tozd2stringzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2510z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2510za700za7za7_2670za7, "close", 5);
	      DEFINE_STRING(BGl_string2512z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2512za700za7za7_2671za7, "get", 3);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52openzd2inputzd2filezd2envz80zz__r4_ports_6_10_1z00,
		BgL_bgl_za762za752openza7d2inp2672za7,
		BGl_z62z52openzd2inputzd2filez30zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2514z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2514za700za7za7_2673za7, "HTTP/1.1", 8);
	      DEFINE_STRING(BGl_string2515z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2515za700za7za7_2674za7, "input-port-close-hook-set!", 26);
	      DEFINE_STRING(BGl_string2516z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2516za700za7za7_2675za7, "Illegal hook", 12);
	      DEFINE_STRING(BGl_string2517z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2517za700za7za7_2676za7, "input-port-seek-set!", 20);
	      DEFINE_STRING(BGl_string2518z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2518za700za7za7_2677za7, "Illegal seek procedure", 22);
	      DEFINE_STRING(BGl_string2519z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2519za700za7za7_2678za7, "", 0);
	      DEFINE_STRING(BGl_string2438z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2438za700za7za7_2679za7, "input-port-protocols", 20);
	      DEFINE_STRING(BGl_string2439z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2439za700za7za7_2680za7, "file:", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2positionzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762outputza7d2port2681z00,
		BGl_z62outputzd2portzd2positionz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_closedzd2outputzd2portzf3zd2envz21zz__r4_ports_6_10_1z00,
		BgL_bgl_za762closedza7d2outp2682z00,
		BGl_z62closedzd2outputzd2portzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2withzd2outputzd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762callza7d2withza7d2683za7,
		BGl_z62callzd2withzd2outputzd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2timeoutzd2setz12zd2envz12zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72684za7,
		BGl_z62inputzd2portzd2timeoutzd2setz12za2zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2600z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2600za700za7za7_2685za7, "&directory?", 11);
	      DEFINE_STRING(BGl_string2601z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2601za700za7za7_2686za7, "&directory->list", 16);
	      DEFINE_STRING(BGl_string2520z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2520za700za7za7_2687za7, "bytes=", 6);
	      DEFINE_STRING(BGl_string2602z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2602za700za7za7_2688za7, "&directory->path-list", 21);
	      DEFINE_STRING(BGl_string2521z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2521za700za7za7_2689za7, "-", 1);
	      DEFINE_STRING(BGl_string2440z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2440za700za7za7_2690za7, "string:", 7);
	      DEFINE_STRING(BGl_string2603z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2603za700za7za7_2691za7, "&file-modification-time", 23);
	      DEFINE_STRING(BGl_string2604z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2604za700za7za7_2692za7, "&file-change-time", 17);
	      DEFINE_STRING(BGl_string2523z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2523za700za7za7_2693za7, "range", 5);
	      DEFINE_STRING(BGl_string2442z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2442za700za7za7_2694za7, "| ", 2);
	      DEFINE_STRING(BGl_string2605z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2605za700za7za7_2695za7, "&file-access-time", 17);
	      DEFINE_STRING(BGl_string2524z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2524za700za7za7_2696za7, "_open-input-file", 16);
	      DEFINE_STRING(BGl_string2443z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2443za700za7za7_2697za7, "pipe:", 5);
	      DEFINE_STRING(BGl_string2606z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2606za700za7za7_2698za7, "&file-times-set!", 16);
	      DEFINE_STRING(BGl_string2525z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2525za700za7za7_2699za7, "_open-input-string", 18);
	      DEFINE_STRING(BGl_string2444z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2444za700za7za7_2700za7, "http://", 7);
	      DEFINE_STRING(BGl_string2607z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2607za700za7za7_2701za7, "belong", 6);
	      DEFINE_STRING(BGl_string2526z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2526za700za7za7_2702za7, "open-input-string", 17);
	      DEFINE_STRING(BGl_string2445z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2445za700za7za7_2703za7, "gzip:", 5);
	      DEFINE_STRING(BGl_string2608z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2608za700za7za7_2704za7, "&file-size", 10);
	      DEFINE_STRING(BGl_string2527z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2527za700za7za7_2705za7, "Illegal start offset", 20);
	      DEFINE_STRING(BGl_string2446z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2446za700za7za7_2706za7, "zlib:", 5);
	      DEFINE_STRING(BGl_string2609z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2609za700za7za7_2707za7, "&file-uid", 9);
	      DEFINE_STRING(BGl_string2528z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2528za700za7za7_2708za7, "Start offset out of bounds", 26);
	      DEFINE_STRING(BGl_string2447z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2447za700za7za7_2709za7, "inflate:", 8);
	      DEFINE_STRING(BGl_string2529z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2529za700za7za7_2710za7, "Start offset greater than end", 29);
	      DEFINE_STRING(BGl_string2448z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2448za700za7za7_2711za7, "/resource/", 10);
	      DEFINE_STRING(BGl_string2449z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2449za700za7za7_2712za7, "ftp://", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2namezd2setz12zd2envz12zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72713za7,
		BGl_z62inputzd2portzd2namezd2setz12za2zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2errorzd2tozd2portzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762withza7d2errorza72714za7,
		BGl_z62withzd2errorzd2tozd2portzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2441z00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762za7c3za704anonymo2715za7,
		BGl_z62zc3z04anonymousza31364ze3ze5zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2610z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2610za700za7za7_2716za7, "&file-gid", 9);
	      DEFINE_STRING(BGl_string2611z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2611za700za7za7_2717za7, "&file-mode", 10);
	      DEFINE_STRING(BGl_string2530z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2530za700za7za7_2718za7, "End offset out of bounds", 24);
	      DEFINE_STRING(BGl_string2612z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2612za700za7za7_2719za7, "&file-type", 10);
	      DEFINE_STRING(BGl_string2531z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2531za700za7za7_2720za7, "_open-input-string!", 19);
	      DEFINE_STRING(BGl_string2450z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2450za700za7za7_2721za7, "call-with-input-file", 20);
	      DEFINE_STRING(BGl_string2613z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2613za700za7za7_2722za7, "&make-symlink", 13);
	      DEFINE_STRING(BGl_string2532z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2532za700za7za7_2723za7, "open-input-string!", 18);
	      DEFINE_STRING(BGl_string2451z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2451za700za7za7_2724za7, "can't open file", 15);
	      DEFINE_STRING(BGl_string2533z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2533za700za7za7_2725za7, "_open-input-procedure", 21);
	      DEFINE_STRING(BGl_string2452z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2452za700za7za7_2726za7, "/tmp/4.4a/runtime/Ieee/port.scm",
		31);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2inputzd2fromzd2stringzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762withza7d2inputza72727za7,
		BGl_z62withzd2inputzd2fromzd2stringzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string2534z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2534za700za7za7_2728za7, "_open-input-gzip-port", 21);
	      DEFINE_STRING(BGl_string2453z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2453za700za7za7_2729za7, "&call-with-input-file", 21);
	      DEFINE_STRING(BGl_string2616z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2616za700za7za7_2730za7, "except", 6);
	      DEFINE_STRING(BGl_string2535z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2535za700za7za7_2731za7, "open-input-gzip-port", 20);
	      DEFINE_STRING(BGl_string2454z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2454za700za7za7_2732za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2536z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2536za700za7za7_2733za7, "&open-input-c-string", 20);
	      DEFINE_STRING(BGl_string2455z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2455za700za7za7_2734za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2618z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2618za700za7za7_2735za7, "read", 4);
	      DEFINE_STRING(BGl_string2537z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2537za700za7za7_2736za7, "&reopen-input-c-string", 22);
	      DEFINE_STRING(BGl_string2456z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2456za700za7za7_2737za7, "&call-with-input-string", 23);
	      DEFINE_STRING(BGl_string2538z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2538za700za7za7_2738za7, "&input-port-timeout-set!", 24);
	      DEFINE_STRING(BGl_string2457z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2457za700za7za7_2739za7, "open-output-file", 16);
	      DEFINE_STRING(BGl_string2539z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2539za700za7za7_2740za7, "_open-output-file", 17);
	      DEFINE_STRING(BGl_string2458z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2458za700za7za7_2741za7, "call-with-output-file", 21);
	      DEFINE_STRING(BGl_string2459z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2459za700za7za7_2742za7, "&call-with-output-file", 22);
	      DEFINE_STRING(BGl_string2620z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2620za700za7za7_2743za7, "timeout", 7);
	      DEFINE_STRING(BGl_string2540z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2540za700za7za7_2744za7, "_append-output-file", 19);
	      DEFINE_STRING(BGl_string2622z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2622za700za7za7_2745za7, "write", 5);
	      DEFINE_STRING(BGl_string2460z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2460za700za7za7_2746za7, "append-output-file", 18);
	      DEFINE_STRING(BGl_string2461z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2461za700za7za7_2747za7, "call-with-append-file", 21);
	      DEFINE_STRING(BGl_string2624z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2624za700za7za7_2748za7, "select", 6);
	      DEFINE_STRING(BGl_string2543z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2543za700za7za7_2749za7, "_open-output-procedure", 22);
	      DEFINE_STRING(BGl_string2462z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2462za700za7za7_2750za7, "&call-with-append-file", 22);
	      DEFINE_STRING(BGl_string2625z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2625za700za7za7_2751za7, "Illegal keyword argument", 24);
	      DEFINE_STRING(BGl_string2463z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2463za700za7za7_2752za7, "&call-with-output-string", 24);
	      DEFINE_STRING(BGl_string2626z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2626za700za7za7_2753za7, "_select", 7);
	      DEFINE_STRING(BGl_string2464z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2464za700za7za7_2754za7, "input-port-reopen!", 18);
	      DEFINE_STRING(BGl_string2627z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2627za700za7za7_2755za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2546z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2546za700za7za7_2756za7, "open-output-procedure", 21);
	      DEFINE_STRING(BGl_string2465z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2465za700za7za7_2757za7, "Cannot reopen port", 18);
	      DEFINE_STRING(BGl_string2628z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2628za700za7za7_2758za7,
		"wrong number of arguments: [0..4] expected, provided", 52);
	      DEFINE_STRING(BGl_string2547z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2547za700za7za7_2759za7, "Illegal flush procedure", 23);
	      DEFINE_STRING(BGl_string2466z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2466za700za7za7_2760za7, "&input-port-reopen!", 19);
	      DEFINE_STRING(BGl_string2629z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2629za700za7za7_2761za7, "_lockf", 6);
	      DEFINE_STRING(BGl_string2548z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2548za700za7za7_2762za7, "Illegal close procedure", 23);
	      DEFINE_STRING(BGl_string2467z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2467za700za7za7_2763za7, "input-port", 10);
	      DEFINE_STRING(BGl_string2549z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2549za700za7za7_2764za7, "Illegal write procedure", 23);
	      DEFINE_STRING(BGl_string2468z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2468za700za7za7_2765za7, "&input-port-clone!", 18);
	      DEFINE_STRING(BGl_string2469z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2469za700za7za7_2766za7, "with-input-from-file", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2withzd2outputzd2stringzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762callza7d2withza7d2767za7,
		BGl_z62callzd2withzd2outputzd2stringzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2seekzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72768za7,
		BGl_z62inputzd2portzd2seekz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2541z00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762flush2111za762za72769za7,
		BGl_z62flush2111z62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2directoryzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762makeza7d2direct2770z00,
		BGl_z62makezd2directoryzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2542z00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762close2110za762za72771za7,
		BGl_z62close2110z62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2544z00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762close2109za762za72772za7,
		BGl_z62close2109z62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2630z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2630za700za7za7_2773za7, "symbol", 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2545z00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762close2108za762za72774za7,
		BGl_z62close2108z62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2550z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2550za700za7za7_2775za7, "&output-port-timeout-set!", 25);
	      DEFINE_STRING(BGl_string2632z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2632za700za7za7_2776za7, "lock", 4);
	      DEFINE_STRING(BGl_string2551z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2551za700za7za7_2777za7, "&closed-input-port?", 19);
	      DEFINE_STRING(BGl_string2470z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2470za700za7za7_2778za7, "&with-input-from-file", 21);
	      DEFINE_STRING(BGl_string2552z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2552za700za7za7_2779za7, "&close-input-port", 17);
	      DEFINE_STRING(BGl_string2471z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2471za700za7za7_2780za7, "&with-input-from-string", 23);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_appendzd2outputzd2filezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__appendza7d2output2781za7, opt_generic_entry,
		BGl__appendzd2outputzd2filez00zz__r4_ports_6_10_1z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2634z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2634za700za7za7_2782za7, "tlock", 5);
	      DEFINE_STRING(BGl_string2553z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2553za700za7za7_2783za7, "&get-output-string", 18);
	      DEFINE_STRING(BGl_string2472z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2472za700za7za7_2784za7, "&with-input-from-port", 21);
	      DEFINE_STRING(BGl_string2554z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2554za700za7za7_2785za7, "&close-output-port", 18);
	      DEFINE_STRING(BGl_string2473z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2473za700za7za7_2786za7, "open-input-procedure", 20);
	      DEFINE_STRING(BGl_string2636z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2636za700za7za7_2787za7, "ulock", 5);
	      DEFINE_STRING(BGl_string2555z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2555za700za7za7_2788za7, "&flush-output-port", 18);
	      DEFINE_STRING(BGl_string2474z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2474za700za7za7_2789za7, "&with-input-from-procedure", 26);
	      DEFINE_STRING(BGl_string2556z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2556za700za7za7_2790za7, "&reset-output-port", 18);
	      DEFINE_STRING(BGl_string2475z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2475za700za7za7_2791za7, "with-output-to-file", 19);
	      DEFINE_STRING(BGl_string2638z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2638za700za7za7_2792za7, "test", 4);
	      DEFINE_STRING(BGl_string2557z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2557za700za7za7_2793za7, "&reset-eof", 10);
	      DEFINE_STRING(BGl_string2476z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2476za700za7za7_2794za7, "&with-output-to-file", 20);
	      DEFINE_STRING(BGl_string2639z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2639za700za7za7_2795za7, "lockf", 5);
	      DEFINE_STRING(BGl_string2558z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2558za700za7za7_2796za7, "&set-input-port-position!", 25);
	      DEFINE_STRING(BGl_string2477z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2477za700za7za7_2797za7, "&with-append-to-file", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2bufferzd2setz12zd2envz12zz__r4_ports_6_10_1z00,
		BgL_bgl_za762outputza7d2port2798z00,
		BGl_z62outputzd2portzd2bufferzd2setz12za2zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2559z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2559za700za7za7_2799za7, "&input-port-position", 20);
	      DEFINE_STRING(BGl_string2478z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2478za700za7za7_2800za7, "&with-output-to-port", 20);
	      DEFINE_STRING(BGl_string2479z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2479za700za7za7_2801za7, "output-port", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2gza7ipzf3zd2envz54zz__r4_ports_6_10_1z00,
		BgL_bgl_za762fileza7d2gza7a7ip2802za7,
		BGl_z62filezd2gza7ipzf3ze4zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2appendzd2tozd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762withza7d2append2803z00,
		BGl_z62withzd2appendzd2tozd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2640z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2640za700za7za7_2804za7, "Bad command", 11);
	      DEFINE_STRING(BGl_string2641z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2641za700za7za7_2805za7, "__r4_ports_6_10_1", 17);
	      DEFINE_STRING(BGl_string2560z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2560za700za7za7_2806za7, "&input-port-fill-barrier", 24);
	      DEFINE_STRING(BGl_string2561z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2561za700za7za7_2807za7, "&input-port-fill-barrier-set!", 29);
	      DEFINE_STRING(BGl_string2480z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2480za700za7za7_2808za7, "&with-output-to-string", 22);
	      DEFINE_STRING(BGl_string2562z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2562za700za7za7_2809za7, "&input-port-last-token-position",
		31);
	      DEFINE_STRING(BGl_string2563z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2563za700za7za7_2810za7, "&output-port-name", 17);
	      DEFINE_STRING(BGl_string2564z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2564za700za7za7_2811za7, "&output-port-name-set!", 22);
	      DEFINE_STRING(BGl_string2483z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2483za700za7za7_2812za7, "&with-output-to-procedure", 25);
	      DEFINE_STRING(BGl_string2565z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2565za700za7za7_2813za7, "set-output-port-position!", 25);
	      DEFINE_STRING(BGl_string2484z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2484za700za7za7_2814za7, "&with-error-to-string", 21);
	      DEFINE_STRING(BGl_string2566z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2566za700za7za7_2815za7, "Cannot seek port", 16);
	      DEFINE_STRING(BGl_string2567z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2567za700za7za7_2816za7, "&set-output-port-position!", 26);
	      DEFINE_STRING(BGl_string2486z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2486za700za7za7_2817za7, "with-error-to-file", 18);
	      DEFINE_STRING(BGl_string2568z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2568za700za7za7_2818za7, "&output-port-position", 21);
	      DEFINE_STRING(BGl_string2487z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2487za700za7za7_2819za7, "&with-error-to-file", 19);
	      DEFINE_STRING(BGl_string2569z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2569za700za7za7_2820za7, "&output-port-isatty?", 20);
	      DEFINE_STRING(BGl_string2488z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2488za700za7za7_2821za7, "&with-error-to-port", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_deletezd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762deleteza7d2file2822z00,
		BGl_z62deletezd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2481z00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762flushza762za7za7__r2823z00,
		BGl_z62flushz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2482z00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762closeza762za7za7__r2824z00,
		BGl_z62closez62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2570z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2570za700za7za7_2825za7, "&input-port-name", 16);
	      DEFINE_STRING(BGl_string2571z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2571za700za7za7_2826za7, "&input-port-name-set!", 21);
	      DEFINE_STRING(BGl_string2572z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2572za700za7za7_2827za7, "&input-port-length", 18);
	      DEFINE_STRING(BGl_string2491z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2491za700za7za7_2828za7, "&with-error-to-procedure", 24);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_filezd2uidzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762fileza7d2uidza7b02829za7,
		BGl_z62filezd2uidzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2closezd2hookzd2setz12zd2envzc0zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72830za7,
		BGl_z62inputzd2portzd2closezd2hookzd2setz12z70zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2573z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2573za700za7za7_2831za7, "&output-port-close-hook", 23);
	      DEFINE_STRING(BGl_string2492z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2492za700za7za7_2832za7, "input-port-protocol-set!", 24);
	      DEFINE_STRING(BGl_string2574z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2574za700za7za7_2833za7, "&closed-output-port?", 20);
	      DEFINE_STRING(BGl_string2493z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2493za700za7za7_2834za7,
		"Illegal open procedure for protocol", 35);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2489z00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762flush2107za762za72835za7,
		BGl_z62flush2107z62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2575z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2575za700za7za7_2836za7, "output-port-close-hook-set!", 27);
	      DEFINE_STRING(BGl_string2494z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2494za700za7za7_2837za7, "Illegal buffer", 14);
	      DEFINE_STRING(BGl_string2576z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2576za700za7za7_2838za7, "&output-port-close-hook-set!", 28);
	      DEFINE_STRING(BGl_string2495z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2495za700za7za7_2839za7, "&get-port-buffer", 16);
	      DEFINE_STRING(BGl_string2577z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2577za700za7za7_2840za7, "&output-port-flush-hook", 23);
	      DEFINE_STRING(BGl_string2496z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2496za700za7za7_2841za7, "bint", 4);
	      DEFINE_STRING(BGl_string2578z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2578za700za7za7_2842za7, "output-port-flush-hook-set!", 27);
	      DEFINE_STRING(BGl_string2497z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2497za700za7za7_2843za7, "open-input-pipe", 15);
	      DEFINE_STRING(BGl_string2579z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2579za700za7za7_2844za7, "&output-port-flush-hook-set!", 28);
	      DEFINE_STRING(BGl_string2498z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2498za700za7za7_2845za7, "open-input-file", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2outputzd2tozd2stringzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762withza7d2output2846z00,
		BGl_z62withzd2outputzd2tozd2stringzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_resetzd2outputzd2portzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762resetza7d2outpu2847z00,
		BGl_z62resetzd2outputzd2portz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_currentzd2outputzd2portzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762currentza7d2out2848z00,
		BGl_z62currentzd2outputzd2portz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_directoryzd2ze3listzd2envze3zz__r4_ports_6_10_1z00,
		BgL_bgl_za762directoryza7d2za72849za7,
		BGl_z62directoryzd2ze3listz53zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzf3zd2envzf3zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72850za7,
		BGl_z62inputzd2portzf3z43zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzf3zd2envzf3zz__r4_ports_6_10_1z00,
		BgL_bgl_za762outputza7d2port2851z00,
		BGl_z62outputzd2portzf3z43zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2490z00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762close2106za762za72852za7,
		BGl_z62close2106z62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2580z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2580za700za7za7_2853za7, "&output-port-flush-buffer", 25);
	      DEFINE_STRING(BGl_string2581z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2581za700za7za7_2854za7, "&output-port-flush-buffer-set!",
		30);
	      DEFINE_STRING(BGl_string2582z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2582za700za7za7_2855za7, "&input-port-close-hook", 22);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_filezd2typezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762fileza7d2typeza7b2856za7,
		BGl_z62filezd2typezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2583z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2583za700za7za7_2857za7, "&input-port-close-hook-set!", 27);
	      DEFINE_STRING(BGl_string2584z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2584za700za7za7_2858za7, "&input-port-seek", 16);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2499z00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762parserza762za7za7__2859z00,
		BGl_z62parserz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 5);
	      DEFINE_STRING(BGl_string2585z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2585za700za7za7_2860za7, "&input-port-seek-set!", 21);
	      DEFINE_STRING(BGl_string2586z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2586za700za7za7_2861za7, "&input-port-buffer", 18);
	      DEFINE_STRING(BGl_string2587z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2587za700za7za7_2862za7, "&input-port-buffer-set!", 23);
	      DEFINE_STRING(BGl_string2588z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2588za700za7za7_2863za7, "&output-port-buffer", 19);
	      DEFINE_STRING(BGl_string2589z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2589za700za7za7_2864za7, "&output-port-buffer-set!", 24);
	      DEFINE_STRING(BGl_string2590z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2590za700za7za7_2865za7, "&file-exists?", 13);
	      DEFINE_STRING(BGl_string2592z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2592za700za7za7_2866za7, "&delete-file", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2procedurezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2inputza7d22867z00, opt_generic_entry,
		BGl__openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2593z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2593za700za7za7_2868za7, "&make-directory", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2closezd2hookzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762outputza7d2port2869z00,
		BGl_z62outputzd2portzd2closezd2hookzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string2594z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2594za700za7za7_2870za7, "&make-directories", 17);
	      DEFINE_STRING(BGl_string2595z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2595za700za7za7_2871za7, "&delete-directory", 17);
	      DEFINE_STRING(BGl_string2596z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2596za700za7za7_2872za7, "&rename-file", 12);
	      DEFINE_STRING(BGl_string2597z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2597za700za7za7_2873za7, "&truncate-file", 14);
	      DEFINE_STRING(BGl_string2598z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2598za700za7za7_2874za7, "&output-port-truncate", 21);
	      DEFINE_STRING(BGl_string2599z00zz__r4_ports_6_10_1z00,
		BgL_bgl_string2599za700za7za7_2875za7, "&copy-file", 10);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2591z00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762za7c3za704anonymo2876za7,
		BGl_z62zc3z04anonymousza31524ze3ze5zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2fillzd2barrierzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72877za7,
		BGl_z62inputzd2portzd2fillzd2barrierzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52openzd2inputzd2httpzd2socketzd2envz52zz__r4_ports_6_10_1z00,
		BgL_bgl_za762za752openza7d2inp2878za7,
		BGl_z62z52openzd2inputzd2httpzd2socketze2zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2outputzd2stringzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762getza7d2outputza72879za7,
		BGl_z62getzd2outputzd2stringz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2existszf3zd2envzf3zz__r4_ports_6_10_1z00,
		BgL_bgl_za762fileza7d2exists2880z00,
		BGl_z62filezd2existszf3z43zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2outputzd2tozd2procedurezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762withza7d2output2881z00,
		BGl_z62withzd2outputzd2tozd2procedurezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2namezd2setz12zd2envz12zz__r4_ports_6_10_1z00,
		BgL_bgl_za762outputza7d2port2882z00,
		BGl_z62outputzd2portzd2namezd2setz12za2zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_copyzd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762copyza7d2fileza7b2883za7,
		BGl_z62copyzd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2stringzd2portzf3zd2envz21zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2strin2884z00,
		BGl_z62inputzd2stringzd2portzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2gza7ipzd2portzf3zd2envz86zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2gza7a7i2885za7,
		BGl_z62inputzd2gza7ipzd2portzf3z36zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2outputzd2procedurezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2outputza7d2886z00, opt_generic_entry,
		BGl__openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2accesszd2timezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762fileza7d2access2887z00,
		BGl_z62filezd2accesszd2timez62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2timeszd2setz12zd2envzc0zz__r4_ports_6_10_1z00,
		BgL_bgl_za762fileza7d2timesza72888za7,
		BGl_z62filezd2timeszd2setz12z70zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 3);
	extern obj_t BGl_openzd2inputzd2inflatezd2filezd2envz00zz__gunza7ipza7;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2flushzd2hookzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762outputza7d2port2889z00,
		BGl_z62outputzd2portzd2flushzd2hookzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		1);
	extern obj_t BGl_openzd2inputzd2ftpzd2filezd2envz00zz__ftpz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2timeoutzd2setz12zd2envz12zz__r4_ports_6_10_1z00,
		BgL_bgl_za762outputza7d2port2890z00,
		BGl_z62outputzd2portzd2timeoutzd2setz12za2zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2procedurezd2portzf3zd2envz21zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2proce2891z00,
		BGl_z62inputzd2procedurezd2portzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_flushzd2outputzd2portzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762flushza7d2outpu2892z00,
		BGl_z62flushzd2outputzd2portz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2errorzd2tozd2procedurezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762withza7d2errorza72893za7,
		BGl_z62withzd2errorzd2tozd2procedurezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2lengthzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72894za7,
		BGl_z62inputzd2portzd2lengthz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2withzd2inputzd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762callza7d2withza7d2895za7,
		BGl_z62callzd2withzd2inputzd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2seekzd2setz12zd2envz12zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72896za7,
		BGl_z62inputzd2portzd2seekzd2setz12za2zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_renamezd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762renameza7d2file2897z00,
		BGl_z62renamezd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2withzd2inputzd2stringzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762callza7d2withza7d2898za7,
		BGl_z62callzd2withzd2inputzd2stringzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2symlinkzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762makeza7d2symlin2899z00,
		BGl_z62makezd2symlinkzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_truncatezd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762truncateza7d2fi2900z00,
		BGl_z62truncatezd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_deletezd2directoryzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762deleteza7d2dire2901z00,
		BGl_z62deletezd2directoryzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_openzd2pipeszd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2pipesza7d22902z00, opt_generic_entry,
		BGl__openzd2pipeszd2zz__r4_ports_6_10_1z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2reopenz12zd2envzc0zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72903za7,
		BGl_z62inputzd2portzd2reopenz12z70zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2flushzd2bufferzd2setz12zd2envzc0zz__r4_ports_6_10_1z00,
		BgL_bgl_za762outputza7d2port2904z00,
		BGl_z62outputzd2portzd2flushzd2bufferzd2setz12z70zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2inputzd2fromzd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762withza7d2inputza72905za7,
		BGl_z62withzd2inputzd2fromzd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2portzd2bufferzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762getza7d2portza7d22906za7,
		BGl_z62getzd2portzd2bufferz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_filezd2gidzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762fileza7d2gidza7b02907za7,
		BGl_z62filezd2gidzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_directoryzd2ze3pathzd2listzd2envz31zz__r4_ports_6_10_1z00,
		BgL_bgl_za762directoryza7d2za72908za7,
		BGl_z62directoryzd2ze3pathzd2listz81zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2truncatezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762outputza7d2port2909z00,
		BGl_z62outputzd2portzd2truncatez62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2siza7ezd2envza7zz__r4_ports_6_10_1z00,
		BgL_bgl_za762fileza7d2siza7a7e2910za7,
		BGl_z62filezd2siza7ez17zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2stringzd2portzf3zd2envz21zz__r4_ports_6_10_1z00,
		BgL_bgl_za762outputza7d2stri2911z00,
		BGl_z62outputzd2stringzd2portzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2isattyzf3zd2envz21zz__r4_ports_6_10_1z00,
		BgL_bgl_za762outputza7d2port2912z00,
		BGl_z62outputzd2portzd2isattyzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2stringz12zd2envzc0zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2inputza7d22913z00, opt_generic_entry,
		BGl__openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reopenzd2inputzd2czd2stringzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762reopenza7d2inpu2914z00,
		BGl_z62reopenzd2inputzd2czd2stringzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_lockfzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__lockfza700za7za7__r4_2915za7, opt_generic_entry,
		BGl__lockfz00zz__r4_ports_6_10_1z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_closezd2inputzd2portzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762closeza7d2input2916z00,
		BGl_z62closezd2inputzd2portz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	extern obj_t BGl_openzd2inputzd2gza7ipzd2filezd2envza7zz__gunza7ipza7;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2bufferzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72917za7,
		BGl_z62inputzd2portzd2bufferz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52openzd2inputzd2resourcezd2envz80zz__r4_ports_6_10_1z00,
		BgL_bgl_za762za752openza7d2inp2918za7,
		BGl_z62z52openzd2inputzd2resourcez30zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_directoryzf3zd2envz21zz__r4_ports_6_10_1z00,
		BgL_bgl_za762directoryza7f3za72919za7,
		BGl_z62directoryzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2fillzd2barrierzd2setz12zd2envzc0zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72920za7,
		BGl_z62inputzd2portzd2fillzd2barrierzd2setz12z70zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2inputzd2portzd2positionz12zd2envz12zz__r4_ports_6_10_1z00,
		BgL_bgl_za762setza7d2inputza7d2921za7,
		BGl_z62setzd2inputzd2portzd2positionz12za2zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_closezd2outputzd2portzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762closeza7d2outpu2922z00,
		BGl_z62closezd2outputzd2portz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2closezd2hookzd2setz12zd2envzc0zz__r4_ports_6_10_1z00,
		BgL_bgl_za762outputza7d2port2923z00,
		BGl_z62outputzd2portzd2closezd2hookzd2setz12z70zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2stringzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2inputza7d22924z00, opt_generic_entry,
		BGl__openzd2inputzd2stringz00zz__r4_ports_6_10_1z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2portzd2flushzd2hookzd2setz12zd2envzc0zz__r4_ports_6_10_1z00,
		BgL_bgl_za762outputza7d2port2925z00,
		BGl_z62outputzd2portzd2flushzd2hookzd2setz12z70zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_selectzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__selectza700za7za7__r42926za7, opt_generic_entry,
		BGl__selectz00zz__r4_ports_6_10_1z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2outputzd2stringzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2outputza7d2927z00, opt_generic_entry,
		BGl__openzd2outputzd2stringz00zz__r4_ports_6_10_1z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2inputzd2fromzd2procedurezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762withza7d2inputza72928za7,
		BGl_z62withzd2inputzd2fromzd2procedurezb0zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2outputzd2tozd2filezd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762withza7d2output2929z00,
		BGl_z62withzd2outputzd2tozd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2lastzd2tokenzd2positionzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72930za7,
		BGl_z62inputzd2portzd2lastzd2tokenzd2positionz62zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2inputzd2fromzd2portzd2envz00zz__r4_ports_6_10_1z00,
		BgL_bgl_za762withza7d2inputza72931za7,
		BGl_z62withzd2inputzd2fromzd2portzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_outputzd2procedurezd2portzf3zd2envz21zz__r4_ports_6_10_1z00,
		BgL_bgl_za762outputza7d2proc2932z00,
		BGl_z62outputzd2procedurezd2portzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2outputzd2portzd2positionz12zd2envz12zz__r4_ports_6_10_1z00,
		BgL_bgl_za762setza7d2outputza72933za7,
		BGl_z62setzd2outputzd2portzd2positionz12za2zz__r4_ports_6_10_1z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_currentzd2inputzd2portzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762currentza7d2inp2934z00,
		BGl_z62currentzd2inputzd2portz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2positionzd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72935za7,
		BGl_z62inputzd2portzd2positionz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2gza7ipzd2portzd2envza7zz__r4_ports_6_10_1z00,
		BgL_bgl__openza7d2inputza7d22936z00, opt_generic_entry,
		BGl__openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2portzd2namezd2envzd2zz__r4_ports_6_10_1z00,
		BgL_bgl_za762inputza7d2portza72937za7,
		BGl_z62inputzd2portzd2namez62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol2485z00zz__r4_ports_6_10_1z00));
		   
			 ADD_ROOT((void
				*)
			(&BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_list2501z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_list2502z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_list2506z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_list2614z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_keyword2503z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_keyword2507z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_keyword2522z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_keyword2615z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_keyword2617z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_keyword2619z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_keyword2621z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_symbol2509z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_symbol2511z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_symbol2513z00zz__r4_ports_6_10_1z00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_symbol2623z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_symbol2631z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_symbol2633z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_symbol2635z00zz__r4_ports_6_10_1z00));
		     ADD_ROOT((void *) (&BGl_symbol2637z00zz__r4_ports_6_10_1z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long
		BgL_checksumz00_3864, char *BgL_fromz00_3865)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_ports_6_10_1z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_ports_6_10_1z00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__r4_ports_6_10_1z00();
					BGl_cnstzd2initzd2zz__r4_ports_6_10_1z00();
					BGl_importedzd2moduleszd2initz00zz__r4_ports_6_10_1z00();
					return BGl_toplevelzd2initzd2zz__r4_ports_6_10_1z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__r4_ports_6_10_1z00()
	{
		{	/* Ieee/port.scm 18 */
			BGl_symbol2485z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string2486z00zz__r4_ports_6_10_1z00);
			BGl_keyword2503z00zz__r4_ports_6_10_1z00 =
				bstring_to_keyword(BGl_string2504z00zz__r4_ports_6_10_1z00);
			BGl_list2502z00zz__r4_ports_6_10_1z00 =
				MAKE_YOUNG_PAIR(BGl_keyword2503z00zz__r4_ports_6_10_1z00,
				MAKE_YOUNG_PAIR(BGl_string2505z00zz__r4_ports_6_10_1z00, BNIL));
			BGl_keyword2507z00zz__r4_ports_6_10_1z00 =
				bstring_to_keyword(BGl_string2508z00zz__r4_ports_6_10_1z00);
			BGl_symbol2509z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string2510z00zz__r4_ports_6_10_1z00);
			BGl_list2506z00zz__r4_ports_6_10_1z00 =
				MAKE_YOUNG_PAIR(BGl_keyword2507z00zz__r4_ports_6_10_1z00,
				MAKE_YOUNG_PAIR(BGl_symbol2509z00zz__r4_ports_6_10_1z00, BNIL));
			BGl_list2501z00zz__r4_ports_6_10_1z00 =
				MAKE_YOUNG_PAIR(BGl_list2502z00zz__r4_ports_6_10_1z00,
				MAKE_YOUNG_PAIR(BGl_list2506z00zz__r4_ports_6_10_1z00, BNIL));
			BGl_symbol2511z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string2512z00zz__r4_ports_6_10_1z00);
			BGl_symbol2513z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string2500z00zz__r4_ports_6_10_1z00);
			BGl_keyword2522z00zz__r4_ports_6_10_1z00 =
				bstring_to_keyword(BGl_string2523z00zz__r4_ports_6_10_1z00);
			BGl_keyword2615z00zz__r4_ports_6_10_1z00 =
				bstring_to_keyword(BGl_string2616z00zz__r4_ports_6_10_1z00);
			BGl_keyword2617z00zz__r4_ports_6_10_1z00 =
				bstring_to_keyword(BGl_string2618z00zz__r4_ports_6_10_1z00);
			BGl_keyword2619z00zz__r4_ports_6_10_1z00 =
				bstring_to_keyword(BGl_string2620z00zz__r4_ports_6_10_1z00);
			BGl_keyword2621z00zz__r4_ports_6_10_1z00 =
				bstring_to_keyword(BGl_string2622z00zz__r4_ports_6_10_1z00);
			BGl_list2614z00zz__r4_ports_6_10_1z00 =
				MAKE_YOUNG_PAIR(BGl_keyword2615z00zz__r4_ports_6_10_1z00,
				MAKE_YOUNG_PAIR(BGl_keyword2617z00zz__r4_ports_6_10_1z00,
					MAKE_YOUNG_PAIR(BGl_keyword2619z00zz__r4_ports_6_10_1z00,
						MAKE_YOUNG_PAIR(BGl_keyword2621z00zz__r4_ports_6_10_1z00, BNIL))));
			BGl_symbol2623z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string2624z00zz__r4_ports_6_10_1z00);
			BGl_symbol2631z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string2632z00zz__r4_ports_6_10_1z00);
			BGl_symbol2633z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string2634z00zz__r4_ports_6_10_1z00);
			BGl_symbol2635z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string2636z00zz__r4_ports_6_10_1z00);
			return (BGl_symbol2637z00zz__r4_ports_6_10_1z00 =
				bstring_to_symbol(BGl_string2638z00zz__r4_ports_6_10_1z00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__r4_ports_6_10_1z00()
	{
		{	/* Ieee/port.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__r4_ports_6_10_1z00()
	{
		{	/* Ieee/port.scm 18 */
			{	/* Ieee/port.scm 878 */
				obj_t BgL_res1934z00_2347;

				BgL_res1934z00_2347 =
					bgl_make_mutex(BGl_string2438z00zz__r4_ports_6_10_1z00);
				BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00 =
					BgL_res1934z00_2347;
			}
			{	/* Ieee/port.scm 884 */
				obj_t BgL_arg1359z00_1301;
				obj_t BgL_arg1360z00_1302;

				BgL_arg1359z00_1301 =
					MAKE_YOUNG_PAIR(BGl_string2439z00zz__r4_ports_6_10_1z00,
					BGl_z52openzd2inputzd2filezd2envz80zz__r4_ports_6_10_1z00);
				{	/* Ieee/port.scm 885 */
					obj_t BgL_arg1361z00_1303;
					obj_t BgL_arg1362z00_1304;

					BgL_arg1361z00_1303 =
						MAKE_YOUNG_PAIR(BGl_string2440z00zz__r4_ports_6_10_1z00,
						BGl_proc2441z00zz__r4_ports_6_10_1z00);
					{	/* Ieee/port.scm 886 */
						obj_t BgL_arg1365z00_1314;
						obj_t BgL_arg1367z00_1315;

						BgL_arg1365z00_1314 =
							MAKE_YOUNG_PAIR(BGl_string2442z00zz__r4_ports_6_10_1z00,
							BGl_z52openzd2inputzd2pipezd2envz80zz__r4_ports_6_10_1z00);
						{	/* Ieee/port.scm 887 */
							obj_t BgL_arg1368z00_1316;
							obj_t BgL_arg1370z00_1317;

							BgL_arg1368z00_1316 =
								MAKE_YOUNG_PAIR(BGl_string2443z00zz__r4_ports_6_10_1z00,
								BGl_z52openzd2inputzd2pipezd2envz80zz__r4_ports_6_10_1z00);
							{	/* Ieee/port.scm 888 */
								obj_t BgL_arg1371z00_1318;
								obj_t BgL_arg1372z00_1319;

								BgL_arg1371z00_1318 =
									MAKE_YOUNG_PAIR(BGl_string2444z00zz__r4_ports_6_10_1z00,
									BGl_z52openzd2inputzd2httpzd2socketzd2envz52zz__r4_ports_6_10_1z00);
								{	/* Ieee/port.scm 889 */
									obj_t BgL_arg1373z00_1320;
									obj_t BgL_arg1374z00_1321;

									BgL_arg1373z00_1320 =
										MAKE_YOUNG_PAIR(BGl_string2445z00zz__r4_ports_6_10_1z00,
										BGl_openzd2inputzd2gza7ipzd2filezd2envza7zz__gunza7ipza7);
									{	/* Ieee/port.scm 890 */
										obj_t BgL_arg1375z00_1322;
										obj_t BgL_arg1376z00_1323;

										BgL_arg1375z00_1322 =
											MAKE_YOUNG_PAIR(BGl_string2446z00zz__r4_ports_6_10_1z00,
											BGl_openzd2inputzd2za7libzd2filezd2envza7zz__gunza7ipza7);
										{	/* Ieee/port.scm 891 */
											obj_t BgL_arg1377z00_1324;
											obj_t BgL_arg1378z00_1325;

											BgL_arg1377z00_1324 =
												MAKE_YOUNG_PAIR(BGl_string2447z00zz__r4_ports_6_10_1z00,
												BGl_openzd2inputzd2inflatezd2filezd2envz00zz__gunza7ipza7);
											{	/* Ieee/port.scm 892 */
												obj_t BgL_arg1379z00_1326;
												obj_t BgL_arg1380z00_1327;

												BgL_arg1379z00_1326 =
													MAKE_YOUNG_PAIR
													(BGl_string2448z00zz__r4_ports_6_10_1z00,
													BGl_z52openzd2inputzd2resourcezd2envz80zz__r4_ports_6_10_1z00);
												{	/* Ieee/port.scm 893 */
													obj_t BgL_arg1381z00_1328;

													BgL_arg1381z00_1328 =
														MAKE_YOUNG_PAIR
														(BGl_string2449z00zz__r4_ports_6_10_1z00,
														BGl_openzd2inputzd2ftpzd2filezd2envz00zz__ftpz00);
													BgL_arg1380z00_1327 =
														MAKE_YOUNG_PAIR(BgL_arg1381z00_1328, BNIL);
												}
												BgL_arg1378z00_1325 =
													MAKE_YOUNG_PAIR(BgL_arg1379z00_1326,
													BgL_arg1380z00_1327);
											}
											BgL_arg1376z00_1323 =
												MAKE_YOUNG_PAIR(BgL_arg1377z00_1324,
												BgL_arg1378z00_1325);
										}
										BgL_arg1374z00_1321 =
											MAKE_YOUNG_PAIR(BgL_arg1375z00_1322, BgL_arg1376z00_1323);
									}
									BgL_arg1372z00_1319 =
										MAKE_YOUNG_PAIR(BgL_arg1373z00_1320, BgL_arg1374z00_1321);
								}
								BgL_arg1370z00_1317 =
									MAKE_YOUNG_PAIR(BgL_arg1371z00_1318, BgL_arg1372z00_1319);
							}
							BgL_arg1367z00_1315 =
								MAKE_YOUNG_PAIR(BgL_arg1368z00_1316, BgL_arg1370z00_1317);
						}
						BgL_arg1362z00_1304 =
							MAKE_YOUNG_PAIR(BgL_arg1365z00_1314, BgL_arg1367z00_1315);
					}
					BgL_arg1360z00_1302 =
						MAKE_YOUNG_PAIR(BgL_arg1361z00_1303, BgL_arg1362z00_1304);
				}
				return (BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00 =
					MAKE_YOUNG_PAIR(BgL_arg1359z00_1301, BgL_arg1360z00_1302), BUNSPEC);
			}
		}

	}



/* &<@anonymous:1364> */
	obj_t BGl_z62zc3z04anonymousza31364ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3044, obj_t BgL_sz00_3045, obj_t BgL_pz00_3046,
		obj_t BgL_tmtz00_3047)
	{
		{	/* Ieee/port.scm 885 */
			{	/* Ieee/port.scm 442 */
				long BgL_endz00_3808;

				BgL_endz00_3808 = STRING_LENGTH(((obj_t) BgL_sz00_3045));
				{	/* Ieee/port.scm 442 */

					return
						BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_sz00_3045,
						BINT(((long) 0)), BINT(BgL_endz00_3808));
		}}}

	}



/* call-with-input-file */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_3, obj_t BgL_procz00_4)
	{
		{	/* Ieee/port.scm 535 */
			{	/* Ieee/port.scm 536 */
				obj_t BgL_portz00_1337;

				{	/* Ieee/port.scm 440 */

					BgL_portz00_1337 =
						BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_stringz00_3,
						BTRUE, BINT(((long) 5000000)));
				}
				if (INPUT_PORTP(BgL_portz00_1337))
					{	/* Ieee/port.scm 538 */
						obj_t BgL_exitd1047z00_1339;

						BgL_exitd1047z00_1339 = BGL_EXITD_TOP_AS_OBJ();
						{	/* Ieee/port.scm 540 */
							obj_t BgL_zc3z04anonymousza31386ze3z87_3080;

							BgL_zc3z04anonymousza31386ze3z87_3080 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31386ze3ze5zz__r4_ports_6_10_1z00,
								(int) (((long) 0)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31386ze3z87_3080,
								(int) (((long) 0)), BgL_portz00_1337);
							BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
								(BgL_exitd1047z00_1339, BgL_zc3z04anonymousza31386ze3z87_3080);
							{	/* Ieee/port.scm 539 */
								obj_t BgL_tmp1049z00_1341;

								BgL_tmp1049z00_1341 =
									PROCEDURE_ENTRY(BgL_procz00_4) (BgL_procz00_4,
									BgL_portz00_1337, BEOA);
								BGl_exitdzd2popzd2protectz12z12zz__bexitz00
									(BgL_exitd1047z00_1339);
								bgl_close_input_port(BgL_portz00_1337);
								return BgL_tmp1049z00_1341;
							}
						}
					}
				else
					{	/* Ieee/port.scm 537 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_string2450z00zz__r4_ports_6_10_1z00,
							BGl_string2451z00zz__r4_ports_6_10_1z00, BgL_stringz00_3);
					}
			}
		}

	}



/* &call-with-input-file */
	obj_t BGl_z62callzd2withzd2inputzd2filezb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3081, obj_t BgL_stringz00_3082, obj_t BgL_procz00_3083)
	{
		{	/* Ieee/port.scm 535 */
			{	/* Ieee/port.scm 536 */
				obj_t BgL_auxz00_3951;
				obj_t BgL_auxz00_3944;

				if (PROCEDUREP(BgL_procz00_3083))
					{	/* Ieee/port.scm 536 */
						BgL_auxz00_3951 = BgL_procz00_3083;
					}
				else
					{
						obj_t BgL_auxz00_3954;

						BgL_auxz00_3954 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 24067)),
							BGl_string2453z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_procz00_3083);
						FAILURE(BgL_auxz00_3954, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_3082))
					{	/* Ieee/port.scm 536 */
						BgL_auxz00_3944 = BgL_stringz00_3082;
					}
				else
					{
						obj_t BgL_auxz00_3947;

						BgL_auxz00_3947 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 24067)),
							BGl_string2453z00zz__r4_ports_6_10_1z00,
							BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_stringz00_3082);
						FAILURE(BgL_auxz00_3947, BFALSE, BFALSE);
					}
				return
					BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_3944, BgL_auxz00_3951);
			}
		}

	}



/* &<@anonymous:1386> */
	obj_t BGl_z62zc3z04anonymousza31386ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3084)
	{
		{	/* Ieee/port.scm 538 */
			{	/* Ieee/port.scm 540 */
				obj_t BgL_portz00_3085;

				BgL_portz00_3085 = PROCEDURE_REF(BgL_envz00_3084, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_portz00_3085));
			}
		}

	}



/* call-with-input-string */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_5, obj_t BgL_procz00_6)
	{
		{	/* Ieee/port.scm 547 */
			{	/* Ieee/port.scm 548 */
				obj_t BgL_portz00_2355;

				{	/* Ieee/port.scm 442 */
					long BgL_endz00_2358;

					BgL_endz00_2358 = STRING_LENGTH(BgL_stringz00_5);
					{	/* Ieee/port.scm 442 */

						BgL_portz00_2355 =
							BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
							(BgL_stringz00_5, BINT(((long) 0)), BINT(BgL_endz00_2358));
				}}
				{	/* Ieee/port.scm 550 */
					obj_t BgL_resz00_2359;

					BgL_resz00_2359 =
						PROCEDURE_ENTRY(BgL_procz00_6) (BgL_procz00_6, BgL_portz00_2355,
						BEOA);
					bgl_close_input_port(BgL_portz00_2355);
					return BgL_resz00_2359;
				}
			}
		}

	}



/* &call-with-input-string */
	obj_t BGl_z62callzd2withzd2inputzd2stringzb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3086, obj_t BgL_stringz00_3087, obj_t BgL_procz00_3088)
	{
		{	/* Ieee/port.scm 547 */
			{	/* Ieee/port.scm 548 */
				obj_t BgL_auxz00_3979;
				obj_t BgL_auxz00_3972;

				if (PROCEDUREP(BgL_procz00_3088))
					{	/* Ieee/port.scm 548 */
						BgL_auxz00_3979 = BgL_procz00_3088;
					}
				else
					{
						obj_t BgL_auxz00_3982;

						BgL_auxz00_3982 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 24569)),
							BGl_string2456z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_procz00_3088);
						FAILURE(BgL_auxz00_3982, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_3087))
					{	/* Ieee/port.scm 548 */
						BgL_auxz00_3972 = BgL_stringz00_3087;
					}
				else
					{
						obj_t BgL_auxz00_3975;

						BgL_auxz00_3975 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 24569)),
							BGl_string2456z00zz__r4_ports_6_10_1z00,
							BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_stringz00_3087);
						FAILURE(BgL_auxz00_3975, BFALSE, BFALSE);
					}
				return
					BGl_callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_3972, BgL_auxz00_3979);
			}
		}

	}



/* call-with-output-file */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_7, obj_t BgL_procz00_8)
	{
		{	/* Ieee/port.scm 557 */
			{	/* Ieee/port.scm 558 */
				obj_t BgL_portz00_1352;

				{	/* Ieee/port.scm 451 */

					BgL_portz00_1352 =
						bgl_open_output_file(BgL_stringz00_7,
						BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
						(BGl_string2457z00zz__r4_ports_6_10_1z00, BTRUE,
							(int) (default_io_bufsiz)));
				}
				if (OUTPUT_PORTP(BgL_portz00_1352))
					{	/* Ieee/port.scm 560 */
						obj_t BgL_exitd1050z00_1354;

						BgL_exitd1050z00_1354 = BGL_EXITD_TOP_AS_OBJ();
						{	/* Ieee/port.scm 562 */
							obj_t BgL_zc3z04anonymousza31388ze3z87_3089;

							BgL_zc3z04anonymousza31388ze3z87_3089 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31388ze3ze5zz__r4_ports_6_10_1z00,
								(int) (((long) 0)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31388ze3z87_3089,
								(int) (((long) 0)), BgL_portz00_1352);
							BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
								(BgL_exitd1050z00_1354, BgL_zc3z04anonymousza31388ze3z87_3089);
							{	/* Ieee/port.scm 561 */
								obj_t BgL_tmp1052z00_1356;

								BgL_tmp1052z00_1356 =
									PROCEDURE_ENTRY(BgL_procz00_8) (BgL_procz00_8,
									BgL_portz00_1352, BEOA);
								BGl_exitdzd2popzd2protectz12z12zz__bexitz00
									(BgL_exitd1050z00_1354);
								bgl_close_output_port(BgL_portz00_1352);
								return BgL_tmp1052z00_1356;
							}
						}
					}
				else
					{	/* Ieee/port.scm 559 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_string2458z00zz__r4_ports_6_10_1z00,
							BGl_string2451z00zz__r4_ports_6_10_1z00, BgL_stringz00_7);
					}
			}
		}

	}



/* &call-with-output-file */
	obj_t BGl_z62callzd2withzd2outputzd2filezb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3090, obj_t BgL_stringz00_3091, obj_t BgL_procz00_3092)
	{
		{	/* Ieee/port.scm 557 */
			{	/* Ieee/port.scm 558 */
				obj_t BgL_auxz00_4013;
				obj_t BgL_auxz00_4006;

				if (PROCEDUREP(BgL_procz00_3092))
					{	/* Ieee/port.scm 558 */
						BgL_auxz00_4013 = BgL_procz00_3092;
					}
				else
					{
						obj_t BgL_auxz00_4016;

						BgL_auxz00_4016 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 25019)),
							BGl_string2459z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_procz00_3092);
						FAILURE(BgL_auxz00_4016, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_3091))
					{	/* Ieee/port.scm 558 */
						BgL_auxz00_4006 = BgL_stringz00_3091;
					}
				else
					{
						obj_t BgL_auxz00_4009;

						BgL_auxz00_4009 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 25019)),
							BGl_string2459z00zz__r4_ports_6_10_1z00,
							BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_stringz00_3091);
						FAILURE(BgL_auxz00_4009, BFALSE, BFALSE);
					}
				return
					BGl_callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_4006, BgL_auxz00_4013);
			}
		}

	}



/* &<@anonymous:1388> */
	obj_t BGl_z62zc3z04anonymousza31388ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3093)
	{
		{	/* Ieee/port.scm 560 */
			{	/* Ieee/port.scm 562 */
				obj_t BgL_portz00_3094;

				BgL_portz00_3094 = PROCEDURE_REF(BgL_envz00_3093, (int) (((long) 0)));
				return bgl_close_output_port(((obj_t) BgL_portz00_3094));
			}
		}

	}



/* call-with-append-file */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2withzd2appendzd2filezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_9, obj_t BgL_procz00_10)
	{
		{	/* Ieee/port.scm 569 */
			{	/* Ieee/port.scm 570 */
				obj_t BgL_portz00_1361;

				{	/* Ieee/port.scm 452 */

					BgL_portz00_1361 =
						bgl_append_output_file(BgL_stringz00_9,
						BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
						(BGl_string2460z00zz__r4_ports_6_10_1z00, BTRUE,
							(int) (default_io_bufsiz)));
				}
				if (OUTPUT_PORTP(BgL_portz00_1361))
					{	/* Ieee/port.scm 572 */
						obj_t BgL_exitd1053z00_1363;

						BgL_exitd1053z00_1363 = BGL_EXITD_TOP_AS_OBJ();
						{	/* Ieee/port.scm 574 */
							obj_t BgL_zc3z04anonymousza31390ze3z87_3095;

							BgL_zc3z04anonymousza31390ze3z87_3095 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31390ze3ze5zz__r4_ports_6_10_1z00,
								(int) (((long) 0)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31390ze3z87_3095,
								(int) (((long) 0)), BgL_portz00_1361);
							BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
								(BgL_exitd1053z00_1363, BgL_zc3z04anonymousza31390ze3z87_3095);
							{	/* Ieee/port.scm 573 */
								obj_t BgL_tmp1055z00_1365;

								BgL_tmp1055z00_1365 =
									PROCEDURE_ENTRY(BgL_procz00_10) (BgL_procz00_10,
									BgL_portz00_1361, BEOA);
								BGl_exitdzd2popzd2protectz12z12zz__bexitz00
									(BgL_exitd1053z00_1363);
								bgl_close_output_port(BgL_portz00_1361);
								return BgL_tmp1055z00_1365;
							}
						}
					}
				else
					{	/* Ieee/port.scm 571 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_string2461z00zz__r4_ports_6_10_1z00,
							BGl_string2451z00zz__r4_ports_6_10_1z00, BgL_stringz00_9);
					}
			}
		}

	}



/* &call-with-append-file */
	obj_t BGl_z62callzd2withzd2appendzd2filezb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3096, obj_t BgL_stringz00_3097, obj_t BgL_procz00_3098)
	{
		{	/* Ieee/port.scm 569 */
			{	/* Ieee/port.scm 570 */
				obj_t BgL_auxz00_4051;
				obj_t BgL_auxz00_4044;

				if (PROCEDUREP(BgL_procz00_3098))
					{	/* Ieee/port.scm 570 */
						BgL_auxz00_4051 = BgL_procz00_3098;
					}
				else
					{
						obj_t BgL_auxz00_4054;

						BgL_auxz00_4054 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 25525)),
							BGl_string2462z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_procz00_3098);
						FAILURE(BgL_auxz00_4054, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_3097))
					{	/* Ieee/port.scm 570 */
						BgL_auxz00_4044 = BgL_stringz00_3097;
					}
				else
					{
						obj_t BgL_auxz00_4047;

						BgL_auxz00_4047 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 25525)),
							BGl_string2462z00zz__r4_ports_6_10_1z00,
							BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_stringz00_3097);
						FAILURE(BgL_auxz00_4047, BFALSE, BFALSE);
					}
				return
					BGl_callzd2withzd2appendzd2filezd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_4044, BgL_auxz00_4051);
			}
		}

	}



/* &<@anonymous:1390> */
	obj_t BGl_z62zc3z04anonymousza31390ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3099)
	{
		{	/* Ieee/port.scm 572 */
			{	/* Ieee/port.scm 574 */
				obj_t BgL_portz00_3100;

				BgL_portz00_3100 = PROCEDURE_REF(BgL_envz00_3099, (int) (((long) 0)));
				return bgl_close_output_port(((obj_t) BgL_portz00_3100));
			}
		}

	}



/* call-with-output-string */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_procz00_11)
	{
		{	/* Ieee/port.scm 581 */
			{	/* Ieee/port.scm 582 */
				obj_t BgL_portz00_2371;

				{	/* Ieee/port.scm 582 */

					{	/* Ieee/port.scm 453 */

						BgL_portz00_2371 =
							bgl_open_output_string
							(BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
							(BGl_string2457z00zz__r4_ports_6_10_1z00, BTRUE,
								(int) (((long) 128))));
				}}
				PROCEDURE_ENTRY(BgL_procz00_11) (BgL_procz00_11, BgL_portz00_2371,
					BEOA);
				return bgl_close_output_port(BgL_portz00_2371);
			}
		}

	}



/* &call-with-output-string */
	obj_t BGl_z62callzd2withzd2outputzd2stringzb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3101, obj_t BgL_procz00_3102)
	{
		{	/* Ieee/port.scm 581 */
			{	/* Ieee/port.scm 582 */
				obj_t BgL_auxz00_4071;

				if (PROCEDUREP(BgL_procz00_3102))
					{	/* Ieee/port.scm 582 */
						BgL_auxz00_4071 = BgL_procz00_3102;
					}
				else
					{
						obj_t BgL_auxz00_4074;

						BgL_auxz00_4074 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 26028)),
							BGl_string2463z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_procz00_3102);
						FAILURE(BgL_auxz00_4074, BFALSE, BFALSE);
					}
				return
					BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_4071);
			}
		}

	}



/* input-port? */
	BGL_EXPORTED_DEF obj_t BGl_inputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t
		BgL_objz00_12)
	{
		{	/* Ieee/port.scm 589 */
			return BBOOL(INPUT_PORTP(BgL_objz00_12));
		}

	}



/* &input-port? */
	obj_t BGl_z62inputzd2portzf3z43zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3103,
		obj_t BgL_objz00_3104)
	{
		{	/* Ieee/port.scm 589 */
			return BGl_inputzd2portzf3z21zz__r4_ports_6_10_1z00(BgL_objz00_3104);
		}

	}



/* input-string-port? */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_objz00_13)
	{
		{	/* Ieee/port.scm 595 */
			return BBOOL(INPUT_STRING_PORTP(BgL_objz00_13));
		}

	}



/* &input-string-port? */
	obj_t BGl_z62inputzd2stringzd2portzf3z91zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3105, obj_t BgL_objz00_3106)
	{
		{	/* Ieee/port.scm 595 */
			return
				BGl_inputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(BgL_objz00_3106);
		}

	}



/* input-procedure-port? */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t
		BgL_objz00_14)
	{
		{	/* Ieee/port.scm 601 */
			return BBOOL(INPUT_PROCEDURE_PORTP(BgL_objz00_14));
		}

	}



/* &input-procedure-port? */
	obj_t BGl_z62inputzd2procedurezd2portzf3z91zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3107, obj_t BgL_objz00_3108)
	{
		{	/* Ieee/port.scm 601 */
			return
				BGl_inputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00
				(BgL_objz00_3108);
		}

	}



/* input-gzip-port? */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2gza7ipzd2portzf3z54zz__r4_ports_6_10_1z00(obj_t BgL_objz00_15)
	{
		{	/* Ieee/port.scm 607 */
			return BBOOL(INPUT_GZIP_PORTP(BgL_objz00_15));
		}

	}



/* &input-gzip-port? */
	obj_t BGl_z62inputzd2gza7ipzd2portzf3z36zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3109, obj_t BgL_objz00_3110)
	{
		{	/* Ieee/port.scm 607 */
			return
				BGl_inputzd2gza7ipzd2portzf3z54zz__r4_ports_6_10_1z00(BgL_objz00_3110);
		}

	}



/* output-port? */
	BGL_EXPORTED_DEF obj_t BGl_outputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t
		BgL_objz00_16)
	{
		{	/* Ieee/port.scm 613 */
			return BBOOL(OUTPUT_PORTP(BgL_objz00_16));
		}

	}



/* &output-port? */
	obj_t BGl_z62outputzd2portzf3z43zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3111,
		obj_t BgL_objz00_3112)
	{
		{	/* Ieee/port.scm 613 */
			return BGl_outputzd2portzf3z21zz__r4_ports_6_10_1z00(BgL_objz00_3112);
		}

	}



/* output-string-port? */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_objz00_17)
	{
		{	/* Ieee/port.scm 619 */
			return BBOOL(BGL_OUTPUT_STRING_PORTP(BgL_objz00_17));
		}

	}



/* &output-string-port? */
	obj_t BGl_z62outputzd2stringzd2portzf3z91zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3113, obj_t BgL_objz00_3114)
	{
		{	/* Ieee/port.scm 619 */
			return
				BGl_outputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(BgL_objz00_3114);
		}

	}



/* output-procedure-port? */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t
		BgL_objz00_18)
	{
		{	/* Ieee/port.scm 625 */
			return BBOOL(BGL_OUTPUT_PROCEDURE_PORTP(BgL_objz00_18));
		}

	}



/* &output-procedure-port? */
	obj_t BGl_z62outputzd2procedurezd2portzf3z91zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3115, obj_t BgL_objz00_3116)
	{
		{	/* Ieee/port.scm 625 */
			return
				BGl_outputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00
				(BgL_objz00_3116);
		}

	}



/* current-input-port */
	BGL_EXPORTED_DEF obj_t BGl_currentzd2inputzd2portz00zz__r4_ports_6_10_1z00()
	{
		{	/* Ieee/port.scm 631 */
			{	/* Ieee/port.scm 632 */
				obj_t BgL_tmpz00_4100;

				BgL_tmpz00_4100 = BGL_CURRENT_DYNAMIC_ENV();
				return BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_4100);
			}
		}

	}



/* &current-input-port */
	obj_t BGl_z62currentzd2inputzd2portz62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3117)
	{
		{	/* Ieee/port.scm 631 */
			return BGl_currentzd2inputzd2portz00zz__r4_ports_6_10_1z00();
		}

	}



/* current-output-port */
	BGL_EXPORTED_DEF obj_t BGl_currentzd2outputzd2portz00zz__r4_ports_6_10_1z00()
	{
		{	/* Ieee/port.scm 637 */
			{	/* Ieee/port.scm 638 */
				obj_t BgL_tmpz00_4104;

				BgL_tmpz00_4104 = BGL_CURRENT_DYNAMIC_ENV();
				return BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4104);
			}
		}

	}



/* &current-output-port */
	obj_t BGl_z62currentzd2outputzd2portz62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3118)
	{
		{	/* Ieee/port.scm 637 */
			return BGl_currentzd2outputzd2portz00zz__r4_ports_6_10_1z00();
		}

	}



/* current-error-port */
	BGL_EXPORTED_DEF obj_t BGl_currentzd2errorzd2portz00zz__r4_ports_6_10_1z00()
	{
		{	/* Ieee/port.scm 643 */
			{	/* Ieee/port.scm 644 */
				obj_t BgL_tmpz00_4108;

				BgL_tmpz00_4108 = BGL_CURRENT_DYNAMIC_ENV();
				return BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_4108);
			}
		}

	}



/* &current-error-port */
	obj_t BGl_z62currentzd2errorzd2portz62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3119)
	{
		{	/* Ieee/port.scm 643 */
			return BGl_currentzd2errorzd2portz00zz__r4_ports_6_10_1z00();
		}

	}



/* input-port-reopen! */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2reopenz12z12zz__r4_ports_6_10_1z00(obj_t BgL_portz00_19)
	{
		{	/* Ieee/port.scm 649 */
			if (CBOOL(bgl_input_port_reopen(BgL_portz00_19)))
				{	/* Ieee/port.scm 650 */
					return BFALSE;
				}
			else
				{	/* Ieee/port.scm 650 */
					return
						bgl_system_failure(BGL_IO_PORT_ERROR,
						BGl_string2464z00zz__r4_ports_6_10_1z00,
						BGl_string2465z00zz__r4_ports_6_10_1z00, BgL_portz00_19);
				}
		}

	}



/* &input-port-reopen! */
	obj_t BGl_z62inputzd2portzd2reopenz12z70zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3120, obj_t BgL_portz00_3121)
	{
		{	/* Ieee/port.scm 649 */
			{	/* Ieee/port.scm 650 */
				obj_t BgL_auxz00_4116;

				if (INPUT_PORTP(BgL_portz00_3121))
					{	/* Ieee/port.scm 650 */
						BgL_auxz00_4116 = BgL_portz00_3121;
					}
				else
					{
						obj_t BgL_auxz00_4119;

						BgL_auxz00_4119 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 29366)),
							BGl_string2466z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3121);
						FAILURE(BgL_auxz00_4119, BFALSE, BFALSE);
					}
				return
					BGl_inputzd2portzd2reopenz12z12zz__r4_ports_6_10_1z00
					(BgL_auxz00_4116);
			}
		}

	}



/* input-port-clone! */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2clonez12z12zz__r4_ports_6_10_1z00(obj_t BgL_dstz00_20,
		obj_t BgL_srcz00_21)
	{
		{	/* Ieee/port.scm 657 */
			return bgl_input_port_clone(BgL_dstz00_20, BgL_srcz00_21);
		}

	}



/* &input-port-clone! */
	obj_t BGl_z62inputzd2portzd2clonez12z70zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3122, obj_t BgL_dstz00_3123, obj_t BgL_srcz00_3124)
	{
		{	/* Ieee/port.scm 657 */
			{	/* Ieee/port.scm 658 */
				obj_t BgL_auxz00_4132;
				obj_t BgL_auxz00_4125;

				if (INPUT_PORTP(BgL_srcz00_3124))
					{	/* Ieee/port.scm 658 */
						BgL_auxz00_4132 = BgL_srcz00_3124;
					}
				else
					{
						obj_t BgL_auxz00_4135;

						BgL_auxz00_4135 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 29786)),
							BGl_string2468z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_srcz00_3124);
						FAILURE(BgL_auxz00_4135, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_dstz00_3123))
					{	/* Ieee/port.scm 658 */
						BgL_auxz00_4125 = BgL_dstz00_3123;
					}
				else
					{
						obj_t BgL_auxz00_4128;

						BgL_auxz00_4128 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 29786)),
							BGl_string2468z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_dstz00_3123);
						FAILURE(BgL_auxz00_4128, BFALSE, BFALSE);
					}
				return
					BGl_inputzd2portzd2clonez12z12zz__r4_ports_6_10_1z00(BgL_auxz00_4125,
					BgL_auxz00_4132);
			}
		}

	}



/* with-input-from-file */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_22, obj_t BgL_thunkz00_23)
	{
		{	/* Ieee/port.scm 663 */
			{	/* Ieee/port.scm 664 */
				obj_t BgL_portz00_1376;

				{	/* Ieee/port.scm 440 */

					BgL_portz00_1376 =
						BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_stringz00_22,
						BTRUE, BINT(((long) 5000000)));
				}
				if (INPUT_PORTP(BgL_portz00_1376))
					{	/* Ieee/port.scm 666 */
						obj_t BgL_denvz00_1378;

						BgL_denvz00_1378 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Ieee/port.scm 666 */
							obj_t BgL_oldzd2inputzd2portz00_1379;

							BgL_oldzd2inputzd2portz00_1379 =
								BGL_ENV_CURRENT_INPUT_PORT(BgL_denvz00_1378);
							{	/* Ieee/port.scm 667 */

								{	/* Ieee/port.scm 668 */
									obj_t BgL_exitd1056z00_1380;

									BgL_exitd1056z00_1380 = BGL_EXITD_TOP_AS_OBJ();
									{	/* Ieee/port.scm 673 */
										obj_t BgL_zc3z04anonymousza31396ze3z87_3125;

										BgL_zc3z04anonymousza31396ze3z87_3125 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31396ze3ze5zz__r4_ports_6_10_1z00,
											(int) (((long) 0)), (int) (((long) 3)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31396ze3z87_3125,
											(int) (((long) 0)), BgL_denvz00_1378);
										PROCEDURE_SET(BgL_zc3z04anonymousza31396ze3z87_3125,
											(int) (((long) 1)), BgL_oldzd2inputzd2portz00_1379);
										PROCEDURE_SET(BgL_zc3z04anonymousza31396ze3z87_3125,
											(int) (((long) 2)), BgL_portz00_1376);
										BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
											(BgL_exitd1056z00_1380,
											BgL_zc3z04anonymousza31396ze3z87_3125);
										{	/* Ieee/port.scm 670 */
											obj_t BgL_tmp1058z00_1382;

											BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1378,
												BgL_portz00_1376);
											BUNSPEC;
											BgL_tmp1058z00_1382 =
												PROCEDURE_ENTRY(BgL_thunkz00_23) (BgL_thunkz00_23,
												BEOA);
											BGl_exitdzd2popzd2protectz12z12zz__bexitz00
												(BgL_exitd1056z00_1380);
											BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1378,
												BgL_oldzd2inputzd2portz00_1379);
											BUNSPEC;
											bgl_close_input_port(BgL_portz00_1376);
											return BgL_tmp1058z00_1382;
										}
									}
								}
							}
						}
					}
				else
					{	/* Ieee/port.scm 665 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_string2469z00zz__r4_ports_6_10_1z00,
							BGl_string2451z00zz__r4_ports_6_10_1z00, BgL_stringz00_22);
					}
			}
		}

	}



/* &with-input-from-file */
	obj_t BGl_z62withzd2inputzd2fromzd2filezb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3126, obj_t BgL_stringz00_3127, obj_t BgL_thunkz00_3128)
	{
		{	/* Ieee/port.scm 663 */
			{	/* Ieee/port.scm 664 */
				obj_t BgL_auxz00_4172;
				obj_t BgL_auxz00_4165;

				if (PROCEDUREP(BgL_thunkz00_3128))
					{	/* Ieee/port.scm 664 */
						BgL_auxz00_4172 = BgL_thunkz00_3128;
					}
				else
					{
						obj_t BgL_auxz00_4175;

						BgL_auxz00_4175 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 30086)),
							BGl_string2470z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3128);
						FAILURE(BgL_auxz00_4175, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_3127))
					{	/* Ieee/port.scm 664 */
						BgL_auxz00_4165 = BgL_stringz00_3127;
					}
				else
					{
						obj_t BgL_auxz00_4168;

						BgL_auxz00_4168 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 30086)),
							BGl_string2470z00zz__r4_ports_6_10_1z00,
							BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_stringz00_3127);
						FAILURE(BgL_auxz00_4168, BFALSE, BFALSE);
					}
				return
					BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_4165, BgL_auxz00_4172);
			}
		}

	}



/* &<@anonymous:1396> */
	obj_t BGl_z62zc3z04anonymousza31396ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3129)
	{
		{	/* Ieee/port.scm 668 */
			{	/* Ieee/port.scm 673 */
				obj_t BgL_denvz00_3130;
				obj_t BgL_oldzd2inputzd2portz00_3131;
				obj_t BgL_portz00_3132;

				BgL_denvz00_3130 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3129, (int) (((long) 0))));
				BgL_oldzd2inputzd2portz00_3131 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3129, (int) (((long) 1))));
				BgL_portz00_3132 = PROCEDURE_REF(BgL_envz00_3129, (int) (((long) 2)));
				BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_3130,
					BgL_oldzd2inputzd2portz00_3131);
				BUNSPEC;
				return bgl_close_input_port(((obj_t) BgL_portz00_3132));
			}
		}

	}



/* with-input-from-string */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_24, obj_t BgL_thunkz00_25)
	{
		{	/* Ieee/port.scm 681 */
			{	/* Ieee/port.scm 682 */
				obj_t BgL_portz00_1388;

				{	/* Ieee/port.scm 442 */
					long BgL_endz00_1398;

					BgL_endz00_1398 = STRING_LENGTH(BgL_stringz00_24);
					{	/* Ieee/port.scm 442 */

						BgL_portz00_1388 =
							BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
							(BgL_stringz00_24, BINT(((long) 0)), BINT(BgL_endz00_1398));
				}}
				{	/* Ieee/port.scm 682 */
					obj_t BgL_denvz00_1389;

					BgL_denvz00_1389 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Ieee/port.scm 683 */
						obj_t BgL_oldzd2inputzd2portz00_1390;

						BgL_oldzd2inputzd2portz00_1390 =
							BGL_ENV_CURRENT_INPUT_PORT(BgL_denvz00_1389);
						{	/* Ieee/port.scm 684 */

							{	/* Ieee/port.scm 685 */
								obj_t BgL_exitd1059z00_1391;

								BgL_exitd1059z00_1391 = BGL_EXITD_TOP_AS_OBJ();
								{	/* Ieee/port.scm 690 */
									obj_t BgL_zc3z04anonymousza31397ze3z87_3133;

									BgL_zc3z04anonymousza31397ze3z87_3133 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31397ze3ze5zz__r4_ports_6_10_1z00,
										(int) (((long) 0)), (int) (((long) 3)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31397ze3z87_3133,
										(int) (((long) 0)), BgL_denvz00_1389);
									PROCEDURE_SET(BgL_zc3z04anonymousza31397ze3z87_3133,
										(int) (((long) 1)), BgL_oldzd2inputzd2portz00_1390);
									PROCEDURE_SET(BgL_zc3z04anonymousza31397ze3z87_3133,
										(int) (((long) 2)), BgL_portz00_1388);
									BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
										(BgL_exitd1059z00_1391,
										BgL_zc3z04anonymousza31397ze3z87_3133);
									{	/* Ieee/port.scm 687 */
										obj_t BgL_tmp1061z00_1393;

										BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1389,
											BgL_portz00_1388);
										BUNSPEC;
										BgL_tmp1061z00_1393 =
											PROCEDURE_ENTRY(BgL_thunkz00_25) (BgL_thunkz00_25, BEOA);
										BGl_exitdzd2popzd2protectz12z12zz__bexitz00
											(BgL_exitd1059z00_1391);
										BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1389,
											BgL_oldzd2inputzd2portz00_1390);
										BUNSPEC;
										bgl_close_input_port(BgL_portz00_1388);
										return BgL_tmp1061z00_1393;
									}
								}
							}
						}
					}
				}
			}
		}

	}



/* &with-input-from-string */
	obj_t BGl_z62withzd2inputzd2fromzd2stringzb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3134, obj_t BgL_stringz00_3135, obj_t BgL_thunkz00_3136)
	{
		{	/* Ieee/port.scm 681 */
			{	/* Ieee/port.scm 682 */
				obj_t BgL_auxz00_4222;
				obj_t BgL_auxz00_4215;

				if (PROCEDUREP(BgL_thunkz00_3136))
					{	/* Ieee/port.scm 682 */
						BgL_auxz00_4222 = BgL_thunkz00_3136;
					}
				else
					{
						obj_t BgL_auxz00_4225;

						BgL_auxz00_4225 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 30792)),
							BGl_string2471z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3136);
						FAILURE(BgL_auxz00_4225, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_3135))
					{	/* Ieee/port.scm 682 */
						BgL_auxz00_4215 = BgL_stringz00_3135;
					}
				else
					{
						obj_t BgL_auxz00_4218;

						BgL_auxz00_4218 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 30792)),
							BGl_string2471z00zz__r4_ports_6_10_1z00,
							BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_stringz00_3135);
						FAILURE(BgL_auxz00_4218, BFALSE, BFALSE);
					}
				return
					BGl_withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_4215, BgL_auxz00_4222);
			}
		}

	}



/* &<@anonymous:1397> */
	obj_t BGl_z62zc3z04anonymousza31397ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3137)
	{
		{	/* Ieee/port.scm 685 */
			{	/* Ieee/port.scm 690 */
				obj_t BgL_denvz00_3138;
				obj_t BgL_oldzd2inputzd2portz00_3139;
				obj_t BgL_portz00_3140;

				BgL_denvz00_3138 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3137, (int) (((long) 0))));
				BgL_oldzd2inputzd2portz00_3139 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3137, (int) (((long) 1))));
				BgL_portz00_3140 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3137, (int) (((long) 2))));
				BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_3138,
					BgL_oldzd2inputzd2portz00_3139);
				BUNSPEC;
				return bgl_close_input_port(BgL_portz00_3140);
			}
		}

	}



/* with-input-from-port */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_26, obj_t BgL_thunkz00_27)
	{
		{	/* Ieee/port.scm 696 */
			{	/* Ieee/port.scm 697 */
				obj_t BgL_denvz00_1399;

				BgL_denvz00_1399 = BGL_CURRENT_DYNAMIC_ENV();
				{	/* Ieee/port.scm 697 */
					obj_t BgL_oldzd2inputzd2portz00_1400;

					BgL_oldzd2inputzd2portz00_1400 =
						BGL_ENV_CURRENT_INPUT_PORT(BgL_denvz00_1399);
					{	/* Ieee/port.scm 698 */

						{	/* Ieee/port.scm 699 */
							obj_t BgL_exitd1062z00_1401;

							BgL_exitd1062z00_1401 = BGL_EXITD_TOP_AS_OBJ();
							{
								obj_t BgL_zc3z04anonymousza31398ze3z87_3141;

								BgL_zc3z04anonymousza31398ze3z87_3141 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31398ze3ze5zz__r4_ports_6_10_1z00,
									(int) (((long) 0)), (int) (((long) 2)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31398ze3z87_3141,
									(int) (((long) 0)), BgL_denvz00_1399);
								PROCEDURE_SET(BgL_zc3z04anonymousza31398ze3z87_3141,
									(int) (((long) 1)), BgL_oldzd2inputzd2portz00_1400);
								BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
									(BgL_exitd1062z00_1401,
									BgL_zc3z04anonymousza31398ze3z87_3141);
								{	/* Ieee/port.scm 701 */
									obj_t BgL_tmp1064z00_1403;

									BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1399,
										BgL_portz00_26);
									BUNSPEC;
									BgL_tmp1064z00_1403 =
										PROCEDURE_ENTRY(BgL_thunkz00_27) (BgL_thunkz00_27, BEOA);
									BGl_exitdzd2popzd2protectz12z12zz__bexitz00
										(BgL_exitd1062z00_1401);
									BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1399,
										BgL_oldzd2inputzd2portz00_1400);
									BUNSPEC;
									return BgL_tmp1064z00_1403;
								}
							}
						}
					}
				}
			}
		}

	}



/* &with-input-from-port */
	obj_t BGl_z62withzd2inputzd2fromzd2portzb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3142, obj_t BgL_portz00_3143, obj_t BgL_thunkz00_3144)
	{
		{	/* Ieee/port.scm 696 */
			{	/* Ieee/port.scm 697 */
				obj_t BgL_auxz00_4265;
				obj_t BgL_auxz00_4258;

				if (PROCEDUREP(BgL_thunkz00_3144))
					{	/* Ieee/port.scm 697 */
						BgL_auxz00_4265 = BgL_thunkz00_3144;
					}
				else
					{
						obj_t BgL_auxz00_4268;

						BgL_auxz00_4268 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 31366)),
							BGl_string2472z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3144);
						FAILURE(BgL_auxz00_4268, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_portz00_3143))
					{	/* Ieee/port.scm 697 */
						BgL_auxz00_4258 = BgL_portz00_3143;
					}
				else
					{
						obj_t BgL_auxz00_4261;

						BgL_auxz00_4261 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 31366)),
							BGl_string2472z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3143);
						FAILURE(BgL_auxz00_4261, BFALSE, BFALSE);
					}
				return
					BGl_withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_4258, BgL_auxz00_4265);
			}
		}

	}



/* &<@anonymous:1398> */
	obj_t BGl_z62zc3z04anonymousza31398ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3145)
	{
		{	/* Ieee/port.scm 699 */
			{
				obj_t BgL_denvz00_3146;
				obj_t BgL_oldzd2inputzd2portz00_3147;

				BgL_denvz00_3146 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3145, (int) (((long) 0))));
				BgL_oldzd2inputzd2portz00_3147 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3145, (int) (((long) 1))));
				BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_3146,
					BgL_oldzd2inputzd2portz00_3147);
				return BUNSPEC;
			}
		}

	}



/* with-input-from-procedure */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_procz00_28, obj_t BgL_thunkz00_29)
	{
		{	/* Ieee/port.scm 708 */
			{	/* Ieee/port.scm 709 */
				obj_t BgL_portz00_1406;

				{	/* Ieee/port.scm 445 */

					BgL_portz00_1406 =
						bgl_open_input_procedure(BgL_procz00_28,
						BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
						(BGl_string2473z00zz__r4_ports_6_10_1z00, BTRUE,
							(int) (((long) 1024))));
				}
				{	/* Ieee/port.scm 711 */
					obj_t BgL_denvz00_1408;

					BgL_denvz00_1408 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Ieee/port.scm 711 */
						obj_t BgL_oldzd2inputzd2portz00_1409;

						BgL_oldzd2inputzd2portz00_1409 =
							BGL_ENV_CURRENT_INPUT_PORT(BgL_denvz00_1408);
						{	/* Ieee/port.scm 712 */

							{	/* Ieee/port.scm 713 */
								obj_t BgL_exitd1065z00_1410;

								BgL_exitd1065z00_1410 = BGL_EXITD_TOP_AS_OBJ();
								{	/* Ieee/port.scm 718 */
									obj_t BgL_zc3z04anonymousza31400ze3z87_3148;

									BgL_zc3z04anonymousza31400ze3z87_3148 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31400ze3ze5zz__r4_ports_6_10_1z00,
										(int) (((long) 0)), (int) (((long) 3)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31400ze3z87_3148,
										(int) (((long) 0)), BgL_denvz00_1408);
									PROCEDURE_SET(BgL_zc3z04anonymousza31400ze3z87_3148,
										(int) (((long) 1)), BgL_oldzd2inputzd2portz00_1409);
									PROCEDURE_SET(BgL_zc3z04anonymousza31400ze3z87_3148,
										(int) (((long) 2)), BgL_portz00_1406);
									BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
										(BgL_exitd1065z00_1410,
										BgL_zc3z04anonymousza31400ze3z87_3148);
									{	/* Ieee/port.scm 715 */
										obj_t BgL_tmp1067z00_1412;

										BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1408,
											BgL_portz00_1406);
										BUNSPEC;
										BgL_tmp1067z00_1412 =
											PROCEDURE_ENTRY(BgL_thunkz00_29) (BgL_thunkz00_29, BEOA);
										BGl_exitdzd2popzd2protectz12z12zz__bexitz00
											(BgL_exitd1065z00_1410);
										BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1408,
											BgL_oldzd2inputzd2portz00_1409);
										BUNSPEC;
										bgl_close_input_port(BgL_portz00_1406);
										return BgL_tmp1067z00_1412;
									}
								}
							}
						}
					}
				}
			}
		}

	}



/* &with-input-from-procedure */
	obj_t BGl_z62withzd2inputzd2fromzd2procedurezb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3149, obj_t BgL_procz00_3150, obj_t BgL_thunkz00_3151)
	{
		{	/* Ieee/port.scm 708 */
			{	/* Ieee/port.scm 709 */
				obj_t BgL_auxz00_4310;
				obj_t BgL_auxz00_4303;

				if (PROCEDUREP(BgL_thunkz00_3151))
					{	/* Ieee/port.scm 709 */
						BgL_auxz00_4310 = BgL_thunkz00_3151;
					}
				else
					{
						obj_t BgL_auxz00_4313;

						BgL_auxz00_4313 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 31866)),
							BGl_string2474z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3151);
						FAILURE(BgL_auxz00_4313, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_procz00_3150))
					{	/* Ieee/port.scm 709 */
						BgL_auxz00_4303 = BgL_procz00_3150;
					}
				else
					{
						obj_t BgL_auxz00_4306;

						BgL_auxz00_4306 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 31866)),
							BGl_string2474z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_procz00_3150);
						FAILURE(BgL_auxz00_4306, BFALSE, BFALSE);
					}
				return
					BGl_withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_4303, BgL_auxz00_4310);
			}
		}

	}



/* &<@anonymous:1400> */
	obj_t BGl_z62zc3z04anonymousza31400ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3152)
	{
		{	/* Ieee/port.scm 713 */
			{	/* Ieee/port.scm 718 */
				obj_t BgL_denvz00_3153;
				obj_t BgL_oldzd2inputzd2portz00_3154;
				obj_t BgL_portz00_3155;

				BgL_denvz00_3153 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3152, (int) (((long) 0))));
				BgL_oldzd2inputzd2portz00_3154 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3152, (int) (((long) 1))));
				BgL_portz00_3155 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3152, (int) (((long) 2))));
				BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_3153,
					BgL_oldzd2inputzd2portz00_3154);
				BUNSPEC;
				return bgl_close_input_port(BgL_portz00_3155);
			}
		}

	}



/* with-output-to-file */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_30, obj_t BgL_thunkz00_31)
	{
		{	/* Ieee/port.scm 725 */
			{	/* Ieee/port.scm 726 */
				obj_t BgL_portz00_1417;

				{	/* Ieee/port.scm 451 */

					BgL_portz00_1417 =
						bgl_open_output_file(BgL_stringz00_30,
						BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
						(BGl_string2457z00zz__r4_ports_6_10_1z00, BTRUE,
							(int) (default_io_bufsiz)));
				}
				if (OUTPUT_PORTP(BgL_portz00_1417))
					{	/* Ieee/port.scm 728 */
						obj_t BgL_denvz00_1419;

						BgL_denvz00_1419 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Ieee/port.scm 728 */
							obj_t BgL_oldzd2outputzd2portz00_1420;

							BgL_oldzd2outputzd2portz00_1420 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1419);
							{	/* Ieee/port.scm 729 */

								{	/* Ieee/port.scm 730 */
									obj_t BgL_exitd1068z00_1421;

									BgL_exitd1068z00_1421 = BGL_EXITD_TOP_AS_OBJ();
									{	/* Ieee/port.scm 735 */
										obj_t BgL_zc3z04anonymousza31402ze3z87_3156;

										BgL_zc3z04anonymousza31402ze3z87_3156 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31402ze3ze5zz__r4_ports_6_10_1z00,
											(int) (((long) 0)), (int) (((long) 3)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31402ze3z87_3156,
											(int) (((long) 0)), BgL_denvz00_1419);
										PROCEDURE_SET(BgL_zc3z04anonymousza31402ze3z87_3156,
											(int) (((long) 1)), BgL_oldzd2outputzd2portz00_1420);
										PROCEDURE_SET(BgL_zc3z04anonymousza31402ze3z87_3156,
											(int) (((long) 2)), BgL_portz00_1417);
										BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
											(BgL_exitd1068z00_1421,
											BgL_zc3z04anonymousza31402ze3z87_3156);
										{	/* Ieee/port.scm 732 */
											obj_t BgL_tmp1070z00_1423;

											BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1419,
												BgL_portz00_1417);
											BUNSPEC;
											BgL_tmp1070z00_1423 =
												PROCEDURE_ENTRY(BgL_thunkz00_31) (BgL_thunkz00_31,
												BEOA);
											BGl_exitdzd2popzd2protectz12z12zz__bexitz00
												(BgL_exitd1068z00_1421);
											BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1419,
												BgL_oldzd2outputzd2portz00_1420);
											BUNSPEC;
											bgl_close_output_port(BgL_portz00_1417);
											return BgL_tmp1070z00_1423;
										}
									}
								}
							}
						}
					}
				else
					{	/* Ieee/port.scm 727 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_string2475z00zz__r4_ports_6_10_1z00,
							BGl_string2451z00zz__r4_ports_6_10_1z00, BgL_stringz00_30);
					}
			}
		}

	}



/* &with-output-to-file */
	obj_t BGl_z62withzd2outputzd2tozd2filezb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3157, obj_t BgL_stringz00_3158, obj_t BgL_thunkz00_3159)
	{
		{	/* Ieee/port.scm 725 */
			{	/* Ieee/port.scm 726 */
				obj_t BgL_auxz00_4362;
				obj_t BgL_auxz00_4355;

				if (PROCEDUREP(BgL_thunkz00_3159))
					{	/* Ieee/port.scm 726 */
						BgL_auxz00_4362 = BgL_thunkz00_3159;
					}
				else
					{
						obj_t BgL_auxz00_4365;

						BgL_auxz00_4365 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 32547)),
							BGl_string2476z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3159);
						FAILURE(BgL_auxz00_4365, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_3158))
					{	/* Ieee/port.scm 726 */
						BgL_auxz00_4355 = BgL_stringz00_3158;
					}
				else
					{
						obj_t BgL_auxz00_4358;

						BgL_auxz00_4358 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 32547)),
							BGl_string2476z00zz__r4_ports_6_10_1z00,
							BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_stringz00_3158);
						FAILURE(BgL_auxz00_4358, BFALSE, BFALSE);
					}
				return
					BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_4355, BgL_auxz00_4362);
			}
		}

	}



/* &<@anonymous:1402> */
	obj_t BGl_z62zc3z04anonymousza31402ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3160)
	{
		{	/* Ieee/port.scm 730 */
			{	/* Ieee/port.scm 735 */
				obj_t BgL_denvz00_3161;
				obj_t BgL_oldzd2outputzd2portz00_3162;
				obj_t BgL_portz00_3163;

				BgL_denvz00_3161 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3160, (int) (((long) 0))));
				BgL_oldzd2outputzd2portz00_3162 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3160, (int) (((long) 1))));
				BgL_portz00_3163 = PROCEDURE_REF(BgL_envz00_3160, (int) (((long) 2)));
				BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_3161,
					BgL_oldzd2outputzd2portz00_3162);
				BUNSPEC;
				return bgl_close_output_port(((obj_t) BgL_portz00_3163));
			}
		}

	}



/* with-append-to-file */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2appendzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_32, obj_t BgL_thunkz00_33)
	{
		{	/* Ieee/port.scm 743 */
			{	/* Ieee/port.scm 744 */
				obj_t BgL_portz00_1428;

				{	/* Ieee/port.scm 452 */

					BgL_portz00_1428 =
						bgl_append_output_file(BgL_stringz00_32,
						BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
						(BGl_string2460z00zz__r4_ports_6_10_1z00, BTRUE,
							(int) (default_io_bufsiz)));
				}
				if (OUTPUT_PORTP(BgL_portz00_1428))
					{	/* Ieee/port.scm 746 */
						obj_t BgL_denvz00_1430;

						BgL_denvz00_1430 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Ieee/port.scm 746 */
							obj_t BgL_oldzd2outputzd2portz00_1431;

							BgL_oldzd2outputzd2portz00_1431 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1430);
							{	/* Ieee/port.scm 747 */

								{	/* Ieee/port.scm 748 */
									obj_t BgL_exitd1071z00_1432;

									BgL_exitd1071z00_1432 = BGL_EXITD_TOP_AS_OBJ();
									{	/* Ieee/port.scm 753 */
										obj_t BgL_zc3z04anonymousza31404ze3z87_3164;

										BgL_zc3z04anonymousza31404ze3z87_3164 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31404ze3ze5zz__r4_ports_6_10_1z00,
											(int) (((long) 0)), (int) (((long) 3)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31404ze3z87_3164,
											(int) (((long) 0)), BgL_denvz00_1430);
										PROCEDURE_SET(BgL_zc3z04anonymousza31404ze3z87_3164,
											(int) (((long) 1)), BgL_oldzd2outputzd2portz00_1431);
										PROCEDURE_SET(BgL_zc3z04anonymousza31404ze3z87_3164,
											(int) (((long) 2)), BgL_portz00_1428);
										BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
											(BgL_exitd1071z00_1432,
											BgL_zc3z04anonymousza31404ze3z87_3164);
										{	/* Ieee/port.scm 750 */
											obj_t BgL_tmp1073z00_1434;

											BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1430,
												BgL_portz00_1428);
											BUNSPEC;
											BgL_tmp1073z00_1434 =
												PROCEDURE_ENTRY(BgL_thunkz00_33) (BgL_thunkz00_33,
												BEOA);
											BGl_exitdzd2popzd2protectz12z12zz__bexitz00
												(BgL_exitd1071z00_1432);
											BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1430,
												BgL_oldzd2outputzd2portz00_1431);
											BUNSPEC;
											bgl_close_output_port(BgL_portz00_1428);
											return BgL_tmp1073z00_1434;
										}
									}
								}
							}
						}
					}
				else
					{	/* Ieee/port.scm 745 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_string2475z00zz__r4_ports_6_10_1z00,
							BGl_string2451z00zz__r4_ports_6_10_1z00, BgL_stringz00_32);
					}
			}
		}

	}



/* &with-append-to-file */
	obj_t BGl_z62withzd2appendzd2tozd2filezb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3165, obj_t BgL_stringz00_3166, obj_t BgL_thunkz00_3167)
	{
		{	/* Ieee/port.scm 743 */
			{	/* Ieee/port.scm 744 */
				obj_t BgL_auxz00_4414;
				obj_t BgL_auxz00_4407;

				if (PROCEDUREP(BgL_thunkz00_3167))
					{	/* Ieee/port.scm 744 */
						BgL_auxz00_4414 = BgL_thunkz00_3167;
					}
				else
					{
						obj_t BgL_auxz00_4417;

						BgL_auxz00_4417 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 33257)),
							BGl_string2477z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3167);
						FAILURE(BgL_auxz00_4417, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_3166))
					{	/* Ieee/port.scm 744 */
						BgL_auxz00_4407 = BgL_stringz00_3166;
					}
				else
					{
						obj_t BgL_auxz00_4410;

						BgL_auxz00_4410 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 33257)),
							BGl_string2477z00zz__r4_ports_6_10_1z00,
							BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_stringz00_3166);
						FAILURE(BgL_auxz00_4410, BFALSE, BFALSE);
					}
				return
					BGl_withzd2appendzd2tozd2filezd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_4407, BgL_auxz00_4414);
			}
		}

	}



/* &<@anonymous:1404> */
	obj_t BGl_z62zc3z04anonymousza31404ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3168)
	{
		{	/* Ieee/port.scm 748 */
			{	/* Ieee/port.scm 753 */
				obj_t BgL_denvz00_3169;
				obj_t BgL_oldzd2outputzd2portz00_3170;
				obj_t BgL_portz00_3171;

				BgL_denvz00_3169 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3168, (int) (((long) 0))));
				BgL_oldzd2outputzd2portz00_3170 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3168, (int) (((long) 1))));
				BgL_portz00_3171 = PROCEDURE_REF(BgL_envz00_3168, (int) (((long) 2)));
				BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_3169,
					BgL_oldzd2outputzd2portz00_3170);
				BUNSPEC;
				return bgl_close_output_port(((obj_t) BgL_portz00_3171));
			}
		}

	}



/* with-output-to-port */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_34,
		obj_t BgL_thunkz00_35)
	{
		{	/* Ieee/port.scm 761 */
			{	/* Ieee/port.scm 762 */
				obj_t BgL_denvz00_1439;

				BgL_denvz00_1439 = BGL_CURRENT_DYNAMIC_ENV();
				{	/* Ieee/port.scm 762 */
					obj_t BgL_oldzd2outputzd2portz00_1440;

					BgL_oldzd2outputzd2portz00_1440 =
						BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1439);
					{	/* Ieee/port.scm 763 */

						{	/* Ieee/port.scm 764 */
							obj_t BgL_exitd1074z00_1441;

							BgL_exitd1074z00_1441 = BGL_EXITD_TOP_AS_OBJ();
							{
								obj_t BgL_zc3z04anonymousza31405ze3z87_3172;

								BgL_zc3z04anonymousza31405ze3z87_3172 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31405ze3ze5zz__r4_ports_6_10_1z00,
									(int) (((long) 0)), (int) (((long) 2)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31405ze3z87_3172,
									(int) (((long) 0)), BgL_denvz00_1439);
								PROCEDURE_SET(BgL_zc3z04anonymousza31405ze3z87_3172,
									(int) (((long) 1)), BgL_oldzd2outputzd2portz00_1440);
								BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
									(BgL_exitd1074z00_1441,
									BgL_zc3z04anonymousza31405ze3z87_3172);
								{	/* Ieee/port.scm 766 */
									obj_t BgL_tmp1076z00_1443;

									BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1439,
										BgL_portz00_34);
									BUNSPEC;
									BgL_tmp1076z00_1443 =
										PROCEDURE_ENTRY(BgL_thunkz00_35) (BgL_thunkz00_35, BEOA);
									BGl_exitdzd2popzd2protectz12z12zz__bexitz00
										(BgL_exitd1074z00_1441);
									BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1439,
										BgL_oldzd2outputzd2portz00_1440);
									BUNSPEC;
									return BgL_tmp1076z00_1443;
								}
							}
						}
					}
				}
			}
		}

	}



/* &with-output-to-port */
	obj_t BGl_z62withzd2outputzd2tozd2portzb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3173, obj_t BgL_portz00_3174, obj_t BgL_thunkz00_3175)
	{
		{	/* Ieee/port.scm 761 */
			{	/* Ieee/port.scm 762 */
				obj_t BgL_auxz00_4457;
				obj_t BgL_auxz00_4450;

				if (PROCEDUREP(BgL_thunkz00_3175))
					{	/* Ieee/port.scm 762 */
						BgL_auxz00_4457 = BgL_thunkz00_3175;
					}
				else
					{
						obj_t BgL_auxz00_4460;

						BgL_auxz00_4460 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 33967)),
							BGl_string2478z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3175);
						FAILURE(BgL_auxz00_4460, BFALSE, BFALSE);
					}
				if (OUTPUT_PORTP(BgL_portz00_3174))
					{	/* Ieee/port.scm 762 */
						BgL_auxz00_4450 = BgL_portz00_3174;
					}
				else
					{
						obj_t BgL_auxz00_4453;

						BgL_auxz00_4453 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 33967)),
							BGl_string2478z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3174);
						FAILURE(BgL_auxz00_4453, BFALSE, BFALSE);
					}
				return
					BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_4450, BgL_auxz00_4457);
			}
		}

	}



/* &<@anonymous:1405> */
	obj_t BGl_z62zc3z04anonymousza31405ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3176)
	{
		{	/* Ieee/port.scm 764 */
			{
				obj_t BgL_denvz00_3177;
				obj_t BgL_oldzd2outputzd2portz00_3178;

				BgL_denvz00_3177 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3176, (int) (((long) 0))));
				BgL_oldzd2outputzd2portz00_3178 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3176, (int) (((long) 1))));
				BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_3177,
					BgL_oldzd2outputzd2portz00_3178);
				return BUNSPEC;
			}
		}

	}



/* with-output-to-string */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_thunkz00_36)
	{
		{	/* Ieee/port.scm 773 */
			{	/* Ieee/port.scm 774 */
				obj_t BgL_portz00_1446;

				{	/* Ieee/port.scm 774 */

					{	/* Ieee/port.scm 453 */

						BgL_portz00_1446 =
							bgl_open_output_string
							(BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
							(BGl_string2457z00zz__r4_ports_6_10_1z00, BTRUE,
								(int) (((long) 128))));
				}}
				{	/* Ieee/port.scm 774 */
					obj_t BgL_denvz00_1447;

					BgL_denvz00_1447 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Ieee/port.scm 775 */
						obj_t BgL_oldzd2outputzd2portz00_1448;

						BgL_oldzd2outputzd2portz00_1448 =
							BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1447);
						{	/* Ieee/port.scm 776 */
							obj_t BgL_resz00_3188;

							BgL_resz00_3188 = MAKE_CELL(BUNSPEC);
							{	/* Ieee/port.scm 777 */

								{	/* Ieee/port.scm 778 */
									obj_t BgL_exitd1077z00_1450;

									BgL_exitd1077z00_1450 = BGL_EXITD_TOP_AS_OBJ();
									{	/* Ieee/port.scm 783 */
										obj_t BgL_zc3z04anonymousza31406ze3z87_3179;

										BgL_zc3z04anonymousza31406ze3z87_3179 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31406ze3ze5zz__r4_ports_6_10_1z00,
											(int) (((long) 0)), (int) (((long) 4)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31406ze3z87_3179,
											(int) (((long) 0)), BgL_denvz00_1447);
										PROCEDURE_SET(BgL_zc3z04anonymousza31406ze3z87_3179,
											(int) (((long) 1)), BgL_oldzd2outputzd2portz00_1448);
										PROCEDURE_SET(BgL_zc3z04anonymousza31406ze3z87_3179,
											(int) (((long) 2)), BgL_portz00_1446);
										PROCEDURE_SET(BgL_zc3z04anonymousza31406ze3z87_3179,
											(int) (((long) 3)), ((obj_t) BgL_resz00_3188));
										BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
											(BgL_exitd1077z00_1450,
											BgL_zc3z04anonymousza31406ze3z87_3179);
										{	/* Ieee/port.scm 780 */
											obj_t BgL_tmp1079z00_1452;

											BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1447,
												BgL_portz00_1446);
											BUNSPEC;
											BgL_tmp1079z00_1452 =
												PROCEDURE_ENTRY(BgL_thunkz00_36) (BgL_thunkz00_36,
												BEOA);
											BGl_exitdzd2popzd2protectz12z12zz__bexitz00
												(BgL_exitd1077z00_1450);
											BGl_z62zc3z04anonymousza31406ze3ze5zz__r4_ports_6_10_1z00
												(BgL_zc3z04anonymousza31406ze3z87_3179);
											BgL_tmp1079z00_1452;
								}}}
								return CELL_REF(BgL_resz00_3188);
							}
						}
					}
				}
			}
		}

	}



/* &with-output-to-string */
	obj_t BGl_z62withzd2outputzd2tozd2stringzb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3180, obj_t BgL_thunkz00_3181)
	{
		{	/* Ieee/port.scm 773 */
			{	/* Ieee/port.scm 774 */
				obj_t BgL_auxz00_4497;

				if (PROCEDUREP(BgL_thunkz00_3181))
					{	/* Ieee/port.scm 774 */
						BgL_auxz00_4497 = BgL_thunkz00_3181;
					}
				else
					{
						obj_t BgL_auxz00_4500;

						BgL_auxz00_4500 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 34463)),
							BGl_string2480z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3181);
						FAILURE(BgL_auxz00_4500, BFALSE, BFALSE);
					}
				return
					BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_4497);
			}
		}

	}



/* &<@anonymous:1406> */
	obj_t BGl_z62zc3z04anonymousza31406ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3182)
	{
		{	/* Ieee/port.scm 778 */
			{	/* Ieee/port.scm 783 */
				obj_t BgL_denvz00_3183;
				obj_t BgL_oldzd2outputzd2portz00_3184;
				obj_t BgL_portz00_3185;
				obj_t BgL_resz00_3186;

				BgL_denvz00_3183 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3182, (int) (((long) 0))));
				BgL_oldzd2outputzd2portz00_3184 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3182, (int) (((long) 1))));
				BgL_portz00_3185 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3182, (int) (((long) 2))));
				BgL_resz00_3186 = PROCEDURE_REF(BgL_envz00_3182, (int) (((long) 3)));
				BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_3183,
					BgL_oldzd2outputzd2portz00_3184);
				BUNSPEC;
				{	/* Ieee/port.scm 784 */
					obj_t BgL_auxz00_3809;

					BgL_auxz00_3809 = bgl_close_output_port(BgL_portz00_3185);
					return CELL_SET(BgL_resz00_3186, BgL_auxz00_3809);
				}
			}
		}

	}



/* with-output-to-procedure */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_procz00_37, obj_t BgL_thunkz00_38)
	{
		{	/* Ieee/port.scm 790 */
			{	/* Ieee/port.scm 791 */
				obj_t BgL_portz00_1456;

				{	/* Ieee/port.scm 454 */

					BgL_portz00_1456 =
						BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00
						(BgL_procz00_37, BGl_proc2481z00zz__r4_ports_6_10_1z00, BTRUE,
						BGl_proc2482z00zz__r4_ports_6_10_1z00);
				}
				{	/* Ieee/port.scm 791 */
					obj_t BgL_denvz00_1457;

					BgL_denvz00_1457 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Ieee/port.scm 792 */
						obj_t BgL_oldzd2outputzd2portz00_1458;

						BgL_oldzd2outputzd2portz00_1458 =
							BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1457);
						{	/* Ieee/port.scm 793 */
							obj_t BgL_resz00_3204;

							BgL_resz00_3204 = MAKE_CELL(BUNSPEC);
							{	/* Ieee/port.scm 794 */

								{	/* Ieee/port.scm 795 */
									obj_t BgL_exitd1080z00_1460;

									BgL_exitd1080z00_1460 = BGL_EXITD_TOP_AS_OBJ();
									{	/* Ieee/port.scm 800 */
										obj_t BgL_zc3z04anonymousza31407ze3z87_3190;

										BgL_zc3z04anonymousza31407ze3z87_3190 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31407ze3ze5zz__r4_ports_6_10_1z00,
											(int) (((long) 0)), (int) (((long) 4)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31407ze3z87_3190,
											(int) (((long) 0)), BgL_denvz00_1457);
										PROCEDURE_SET(BgL_zc3z04anonymousza31407ze3z87_3190,
											(int) (((long) 1)), BgL_oldzd2outputzd2portz00_1458);
										PROCEDURE_SET(BgL_zc3z04anonymousza31407ze3z87_3190,
											(int) (((long) 2)), BgL_portz00_1456);
										PROCEDURE_SET(BgL_zc3z04anonymousza31407ze3z87_3190,
											(int) (((long) 3)), ((obj_t) BgL_resz00_3204));
										BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
											(BgL_exitd1080z00_1460,
											BgL_zc3z04anonymousza31407ze3z87_3190);
										{	/* Ieee/port.scm 797 */
											obj_t BgL_tmp1082z00_1462;

											BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1457,
												BgL_portz00_1456);
											BUNSPEC;
											BgL_tmp1082z00_1462 =
												PROCEDURE_ENTRY(BgL_thunkz00_38) (BgL_thunkz00_38,
												BEOA);
											BGl_exitdzd2popzd2protectz12z12zz__bexitz00
												(BgL_exitd1080z00_1460);
											BGl_z62zc3z04anonymousza31407ze3ze5zz__r4_ports_6_10_1z00
												(BgL_zc3z04anonymousza31407ze3z87_3190);
											BgL_tmp1082z00_1462;
								}}}
								return CELL_REF(BgL_resz00_3204);
							}
						}
					}
				}
			}
		}

	}



/* &with-output-to-procedure */
	obj_t BGl_z62withzd2outputzd2tozd2procedurezb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3193, obj_t BgL_procz00_3194, obj_t BgL_thunkz00_3195)
	{
		{	/* Ieee/port.scm 790 */
			{	/* Ieee/port.scm 791 */
				obj_t BgL_auxz00_4548;
				obj_t BgL_auxz00_4541;

				if (PROCEDUREP(BgL_thunkz00_3195))
					{	/* Ieee/port.scm 791 */
						BgL_auxz00_4548 = BgL_thunkz00_3195;
					}
				else
					{
						obj_t BgL_auxz00_4551;

						BgL_auxz00_4551 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 35084)),
							BGl_string2483z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3195);
						FAILURE(BgL_auxz00_4551, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_procz00_3194))
					{	/* Ieee/port.scm 791 */
						BgL_auxz00_4541 = BgL_procz00_3194;
					}
				else
					{
						obj_t BgL_auxz00_4544;

						BgL_auxz00_4544 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 35084)),
							BGl_string2483z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_procz00_3194);
						FAILURE(BgL_auxz00_4544, BFALSE, BFALSE);
					}
				return
					BGl_withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_4541, BgL_auxz00_4548);
			}
		}

	}



/* &<@anonymous:1407> */
	obj_t BGl_z62zc3z04anonymousza31407ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3196)
	{
		{	/* Ieee/port.scm 795 */
			{	/* Ieee/port.scm 800 */
				obj_t BgL_denvz00_3197;
				obj_t BgL_oldzd2outputzd2portz00_3198;
				obj_t BgL_portz00_3199;
				obj_t BgL_resz00_3200;

				BgL_denvz00_3197 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3196, (int) (((long) 0))));
				BgL_oldzd2outputzd2portz00_3198 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3196, (int) (((long) 1))));
				BgL_portz00_3199 = PROCEDURE_REF(BgL_envz00_3196, (int) (((long) 2)));
				BgL_resz00_3200 = PROCEDURE_REF(BgL_envz00_3196, (int) (((long) 3)));
				BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_3197,
					BgL_oldzd2outputzd2portz00_3198);
				BUNSPEC;
				{	/* Ieee/port.scm 801 */
					obj_t BgL_auxz00_3810;

					BgL_auxz00_3810 = bgl_close_output_port(((obj_t) BgL_portz00_3199));
					return CELL_SET(BgL_resz00_3200, BgL_auxz00_3810);
				}
			}
		}

	}



/* &close */
	obj_t BGl_z62closez62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3202)
	{
		{	/* Ieee/port.scm 454 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &flush */
	obj_t BGl_z62flushz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3203)
	{
		{	/* Ieee/port.scm 454 */
			return BBOOL(((bool_t) 0));
		}

	}



/* with-error-to-string */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_thunkz00_39)
	{
		{	/* Ieee/port.scm 807 */
			{	/* Ieee/port.scm 808 */
				obj_t BgL_portz00_1473;

				{	/* Ieee/port.scm 808 */

					{	/* Ieee/port.scm 453 */

						BgL_portz00_1473 =
							bgl_open_output_string
							(BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
							(BGl_string2457z00zz__r4_ports_6_10_1z00, BTRUE,
								(int) (((long) 128))));
				}}
				{	/* Ieee/port.scm 810 */
					obj_t BgL_denvz00_1475;

					BgL_denvz00_1475 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Ieee/port.scm 810 */
						obj_t BgL_oldzd2errorzd2portz00_1476;

						BgL_oldzd2errorzd2portz00_1476 =
							BGL_ENV_CURRENT_ERROR_PORT(BgL_denvz00_1475);
						{	/* Ieee/port.scm 811 */
							obj_t BgL_resz00_3215;

							BgL_resz00_3215 = MAKE_CELL(BUNSPEC);
							{	/* Ieee/port.scm 812 */

								{	/* Ieee/port.scm 813 */
									obj_t BgL_exitd1083z00_1478;

									BgL_exitd1083z00_1478 = BGL_EXITD_TOP_AS_OBJ();
									{	/* Ieee/port.scm 818 */
										obj_t BgL_zc3z04anonymousza31411ze3z87_3206;

										BgL_zc3z04anonymousza31411ze3z87_3206 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31411ze3ze5zz__r4_ports_6_10_1z00,
											(int) (((long) 0)), (int) (((long) 4)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31411ze3z87_3206,
											(int) (((long) 0)), BgL_denvz00_1475);
										PROCEDURE_SET(BgL_zc3z04anonymousza31411ze3z87_3206,
											(int) (((long) 1)), BgL_oldzd2errorzd2portz00_1476);
										PROCEDURE_SET(BgL_zc3z04anonymousza31411ze3z87_3206,
											(int) (((long) 2)), BgL_portz00_1473);
										PROCEDURE_SET(BgL_zc3z04anonymousza31411ze3z87_3206,
											(int) (((long) 3)), ((obj_t) BgL_resz00_3215));
										BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
											(BgL_exitd1083z00_1478,
											BgL_zc3z04anonymousza31411ze3z87_3206);
										{	/* Ieee/port.scm 815 */
											obj_t BgL_tmp1085z00_1480;

											BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1475,
												BgL_portz00_1473);
											BUNSPEC;
											BgL_tmp1085z00_1480 =
												PROCEDURE_ENTRY(BgL_thunkz00_39) (BgL_thunkz00_39,
												BEOA);
											BGl_exitdzd2popzd2protectz12z12zz__bexitz00
												(BgL_exitd1083z00_1478);
											BGl_z62zc3z04anonymousza31411ze3ze5zz__r4_ports_6_10_1z00
												(BgL_zc3z04anonymousza31411ze3z87_3206);
											BgL_tmp1085z00_1480;
								}}}
								return CELL_REF(BgL_resz00_3215);
							}
						}
					}
				}
			}
		}

	}



/* &with-error-to-string */
	obj_t BGl_z62withzd2errorzd2tozd2stringzb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3207, obj_t BgL_thunkz00_3208)
	{
		{	/* Ieee/port.scm 807 */
			{	/* Ieee/port.scm 808 */
				obj_t BgL_auxz00_4596;

				if (PROCEDUREP(BgL_thunkz00_3208))
					{	/* Ieee/port.scm 808 */
						BgL_auxz00_4596 = BgL_thunkz00_3208;
					}
				else
					{
						obj_t BgL_auxz00_4599;

						BgL_auxz00_4599 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 35704)),
							BGl_string2484z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3208);
						FAILURE(BgL_auxz00_4599, BFALSE, BFALSE);
					}
				return
					BGl_withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_4596);
			}
		}

	}



/* &<@anonymous:1411> */
	obj_t BGl_z62zc3z04anonymousza31411ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3209)
	{
		{	/* Ieee/port.scm 813 */
			{	/* Ieee/port.scm 818 */
				obj_t BgL_denvz00_3210;
				obj_t BgL_oldzd2errorzd2portz00_3211;
				obj_t BgL_portz00_3212;
				obj_t BgL_resz00_3213;

				BgL_denvz00_3210 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3209, (int) (((long) 0))));
				BgL_oldzd2errorzd2portz00_3211 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3209, (int) (((long) 1))));
				BgL_portz00_3212 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3209, (int) (((long) 2))));
				BgL_resz00_3213 = PROCEDURE_REF(BgL_envz00_3209, (int) (((long) 3)));
				BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_3210,
					BgL_oldzd2errorzd2portz00_3211);
				BUNSPEC;
				{	/* Ieee/port.scm 819 */
					obj_t BgL_auxz00_3811;

					BgL_auxz00_3811 = bgl_close_output_port(BgL_portz00_3212);
					return CELL_SET(BgL_resz00_3213, BgL_auxz00_3811);
				}
			}
		}

	}



/* with-error-to-file */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_40, obj_t BgL_thunkz00_41)
	{
		{	/* Ieee/port.scm 829 */
			{	/* Ieee/port.scm 830 */
				obj_t BgL_portz00_1484;

				{	/* Ieee/port.scm 451 */

					BgL_portz00_1484 =
						bgl_open_output_file(BgL_stringz00_40,
						BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
						(BGl_string2457z00zz__r4_ports_6_10_1z00, BTRUE,
							(int) (default_io_bufsiz)));
				}
				if (OUTPUT_PORTP(BgL_portz00_1484))
					{	/* Ieee/port.scm 832 */
						obj_t BgL_denvz00_1486;

						BgL_denvz00_1486 = BGL_CURRENT_DYNAMIC_ENV();
						{	/* Ieee/port.scm 832 */
							obj_t BgL_oldzd2outputzd2portz00_1487;

							BgL_oldzd2outputzd2portz00_1487 =
								BGL_ENV_CURRENT_ERROR_PORT(BgL_denvz00_1486);
							{	/* Ieee/port.scm 833 */

								{	/* Ieee/port.scm 834 */
									obj_t BgL_exitd1086z00_1488;

									BgL_exitd1086z00_1488 = BGL_EXITD_TOP_AS_OBJ();
									{	/* Ieee/port.scm 839 */
										obj_t BgL_zc3z04anonymousza31413ze3z87_3217;

										BgL_zc3z04anonymousza31413ze3z87_3217 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31413ze3ze5zz__r4_ports_6_10_1z00,
											(int) (((long) 0)), (int) (((long) 3)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31413ze3z87_3217,
											(int) (((long) 0)), BgL_denvz00_1486);
										PROCEDURE_SET(BgL_zc3z04anonymousza31413ze3z87_3217,
											(int) (((long) 1)), BgL_oldzd2outputzd2portz00_1487);
										PROCEDURE_SET(BgL_zc3z04anonymousza31413ze3z87_3217,
											(int) (((long) 2)), BgL_portz00_1484);
										BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
											(BgL_exitd1086z00_1488,
											BgL_zc3z04anonymousza31413ze3z87_3217);
										{	/* Ieee/port.scm 836 */
											obj_t BgL_tmp1088z00_1490;

											BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1486,
												BgL_portz00_1484);
											BUNSPEC;
											BgL_tmp1088z00_1490 =
												PROCEDURE_ENTRY(BgL_thunkz00_41) (BgL_thunkz00_41,
												BEOA);
											BGl_exitdzd2popzd2protectz12z12zz__bexitz00
												(BgL_exitd1086z00_1488);
											BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1486,
												BgL_oldzd2outputzd2portz00_1487);
											BUNSPEC;
											bgl_close_output_port(BgL_portz00_1484);
											return BgL_tmp1088z00_1490;
										}
									}
								}
							}
						}
					}
				else
					{	/* Ieee/port.scm 831 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_symbol2485z00zz__r4_ports_6_10_1z00,
							BGl_string2451z00zz__r4_ports_6_10_1z00, BgL_stringz00_40);
					}
			}
		}

	}



/* &with-error-to-file */
	obj_t BGl_z62withzd2errorzd2tozd2filezb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3218, obj_t BgL_stringz00_3219, obj_t BgL_thunkz00_3220)
	{
		{	/* Ieee/port.scm 829 */
			{	/* Ieee/port.scm 830 */
				obj_t BgL_auxz00_4650;
				obj_t BgL_auxz00_4643;

				if (PROCEDUREP(BgL_thunkz00_3220))
					{	/* Ieee/port.scm 830 */
						BgL_auxz00_4650 = BgL_thunkz00_3220;
					}
				else
					{
						obj_t BgL_auxz00_4653;

						BgL_auxz00_4653 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 36475)),
							BGl_string2487z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3220);
						FAILURE(BgL_auxz00_4653, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_3219))
					{	/* Ieee/port.scm 830 */
						BgL_auxz00_4643 = BgL_stringz00_3219;
					}
				else
					{
						obj_t BgL_auxz00_4646;

						BgL_auxz00_4646 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 36475)),
							BGl_string2487z00zz__r4_ports_6_10_1z00,
							BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_stringz00_3219);
						FAILURE(BgL_auxz00_4646, BFALSE, BFALSE);
					}
				return
					BGl_withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_4643,
					BgL_auxz00_4650);
			}
		}

	}



/* &<@anonymous:1413> */
	obj_t BGl_z62zc3z04anonymousza31413ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3221)
	{
		{	/* Ieee/port.scm 834 */
			{	/* Ieee/port.scm 839 */
				obj_t BgL_denvz00_3222;
				obj_t BgL_oldzd2outputzd2portz00_3223;
				obj_t BgL_portz00_3224;

				BgL_denvz00_3222 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3221, (int) (((long) 0))));
				BgL_oldzd2outputzd2portz00_3223 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3221, (int) (((long) 1))));
				BgL_portz00_3224 = PROCEDURE_REF(BgL_envz00_3221, (int) (((long) 2)));
				BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_3222,
					BgL_oldzd2outputzd2portz00_3223);
				BUNSPEC;
				return bgl_close_output_port(((obj_t) BgL_portz00_3224));
			}
		}

	}



/* with-error-to-port */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_42,
		obj_t BgL_thunkz00_43)
	{
		{	/* Ieee/port.scm 849 */
			{	/* Ieee/port.scm 850 */
				obj_t BgL_denvz00_1495;

				BgL_denvz00_1495 = BGL_CURRENT_DYNAMIC_ENV();
				{	/* Ieee/port.scm 850 */
					obj_t BgL_oldzd2outputzd2portz00_1496;

					BgL_oldzd2outputzd2portz00_1496 =
						BGL_ENV_CURRENT_ERROR_PORT(BgL_denvz00_1495);
					{	/* Ieee/port.scm 851 */

						{	/* Ieee/port.scm 852 */
							obj_t BgL_exitd1089z00_1497;

							BgL_exitd1089z00_1497 = BGL_EXITD_TOP_AS_OBJ();
							{
								obj_t BgL_zc3z04anonymousza31414ze3z87_3225;

								BgL_zc3z04anonymousza31414ze3z87_3225 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31414ze3ze5zz__r4_ports_6_10_1z00,
									(int) (((long) 0)), (int) (((long) 2)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31414ze3z87_3225,
									(int) (((long) 0)), BgL_denvz00_1495);
								PROCEDURE_SET(BgL_zc3z04anonymousza31414ze3z87_3225,
									(int) (((long) 1)), BgL_oldzd2outputzd2portz00_1496);
								BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
									(BgL_exitd1089z00_1497,
									BgL_zc3z04anonymousza31414ze3z87_3225);
								{	/* Ieee/port.scm 854 */
									obj_t BgL_tmp1091z00_1499;

									BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1495,
										BgL_portz00_42);
									BUNSPEC;
									BgL_tmp1091z00_1499 =
										PROCEDURE_ENTRY(BgL_thunkz00_43) (BgL_thunkz00_43, BEOA);
									BGl_exitdzd2popzd2protectz12z12zz__bexitz00
										(BgL_exitd1089z00_1497);
									BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1495,
										BgL_oldzd2outputzd2portz00_1496);
									BUNSPEC;
									return BgL_tmp1091z00_1499;
								}
							}
						}
					}
				}
			}
		}

	}



/* &with-error-to-port */
	obj_t BGl_z62withzd2errorzd2tozd2portzb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3226, obj_t BgL_portz00_3227, obj_t BgL_thunkz00_3228)
	{
		{	/* Ieee/port.scm 849 */
			{	/* Ieee/port.scm 850 */
				obj_t BgL_auxz00_4693;
				obj_t BgL_auxz00_4686;

				if (PROCEDUREP(BgL_thunkz00_3228))
					{	/* Ieee/port.scm 850 */
						BgL_auxz00_4693 = BgL_thunkz00_3228;
					}
				else
					{
						obj_t BgL_auxz00_4696;

						BgL_auxz00_4696 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 37198)),
							BGl_string2488z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3228);
						FAILURE(BgL_auxz00_4696, BFALSE, BFALSE);
					}
				if (OUTPUT_PORTP(BgL_portz00_3227))
					{	/* Ieee/port.scm 850 */
						BgL_auxz00_4686 = BgL_portz00_3227;
					}
				else
					{
						obj_t BgL_auxz00_4689;

						BgL_auxz00_4689 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 37198)),
							BGl_string2488z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3227);
						FAILURE(BgL_auxz00_4689, BFALSE, BFALSE);
					}
				return
					BGl_withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00(BgL_auxz00_4686,
					BgL_auxz00_4693);
			}
		}

	}



/* &<@anonymous:1414> */
	obj_t BGl_z62zc3z04anonymousza31414ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3229)
	{
		{	/* Ieee/port.scm 852 */
			{
				obj_t BgL_denvz00_3230;
				obj_t BgL_oldzd2outputzd2portz00_3231;

				BgL_denvz00_3230 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3229, (int) (((long) 0))));
				BgL_oldzd2outputzd2portz00_3231 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3229, (int) (((long) 1))));
				BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_3230,
					BgL_oldzd2outputzd2portz00_3231);
				return BUNSPEC;
			}
		}

	}



/* with-error-to-procedure */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t
		BgL_procz00_44, obj_t BgL_thunkz00_45)
	{
		{	/* Ieee/port.scm 861 */
			{	/* Ieee/port.scm 862 */
				obj_t BgL_portz00_1502;

				{	/* Ieee/port.scm 454 */

					BgL_portz00_1502 =
						BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00
						(BgL_procz00_44, BGl_proc2489z00zz__r4_ports_6_10_1z00, BTRUE,
						BGl_proc2490z00zz__r4_ports_6_10_1z00);
				}
				{	/* Ieee/port.scm 862 */
					obj_t BgL_denvz00_1503;

					BgL_denvz00_1503 = BGL_CURRENT_DYNAMIC_ENV();
					{	/* Ieee/port.scm 863 */
						obj_t BgL_oldzd2errorzd2portz00_1504;

						BgL_oldzd2errorzd2portz00_1504 =
							BGL_ENV_CURRENT_ERROR_PORT(BgL_denvz00_1503);
						{	/* Ieee/port.scm 864 */
							obj_t BgL_resz00_3246;

							BgL_resz00_3246 = MAKE_CELL(BUNSPEC);
							{	/* Ieee/port.scm 865 */

								{	/* Ieee/port.scm 866 */
									obj_t BgL_exitd1092z00_1506;

									BgL_exitd1092z00_1506 = BGL_EXITD_TOP_AS_OBJ();
									{	/* Ieee/port.scm 871 */
										obj_t BgL_zc3z04anonymousza31415ze3z87_3232;

										BgL_zc3z04anonymousza31415ze3z87_3232 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31415ze3ze5zz__r4_ports_6_10_1z00,
											(int) (((long) 0)), (int) (((long) 4)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31415ze3z87_3232,
											(int) (((long) 0)), BgL_denvz00_1503);
										PROCEDURE_SET(BgL_zc3z04anonymousza31415ze3z87_3232,
											(int) (((long) 1)), BgL_oldzd2errorzd2portz00_1504);
										PROCEDURE_SET(BgL_zc3z04anonymousza31415ze3z87_3232,
											(int) (((long) 2)), BgL_portz00_1502);
										PROCEDURE_SET(BgL_zc3z04anonymousza31415ze3z87_3232,
											(int) (((long) 3)), ((obj_t) BgL_resz00_3246));
										BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
											(BgL_exitd1092z00_1506,
											BgL_zc3z04anonymousza31415ze3z87_3232);
										{	/* Ieee/port.scm 868 */
											obj_t BgL_tmp1094z00_1508;

											BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1503,
												BgL_portz00_1502);
											BUNSPEC;
											BgL_tmp1094z00_1508 =
												PROCEDURE_ENTRY(BgL_thunkz00_45) (BgL_thunkz00_45,
												BEOA);
											BGl_exitdzd2popzd2protectz12z12zz__bexitz00
												(BgL_exitd1092z00_1506);
											BGl_z62zc3z04anonymousza31415ze3ze5zz__r4_ports_6_10_1z00
												(BgL_zc3z04anonymousza31415ze3z87_3232);
											BgL_tmp1094z00_1508;
								}}}
								return CELL_REF(BgL_resz00_3246);
							}
						}
					}
				}
			}
		}

	}



/* &with-error-to-procedure */
	obj_t BGl_z62withzd2errorzd2tozd2procedurezb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3235, obj_t BgL_procz00_3236, obj_t BgL_thunkz00_3237)
	{
		{	/* Ieee/port.scm 861 */
			{	/* Ieee/port.scm 862 */
				obj_t BgL_auxz00_4738;
				obj_t BgL_auxz00_4731;

				if (PROCEDUREP(BgL_thunkz00_3237))
					{	/* Ieee/port.scm 862 */
						BgL_auxz00_4738 = BgL_thunkz00_3237;
					}
				else
					{
						obj_t BgL_auxz00_4741;

						BgL_auxz00_4741 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 37698)),
							BGl_string2491z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3237);
						FAILURE(BgL_auxz00_4741, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_procz00_3236))
					{	/* Ieee/port.scm 862 */
						BgL_auxz00_4731 = BgL_procz00_3236;
					}
				else
					{
						obj_t BgL_auxz00_4734;

						BgL_auxz00_4734 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 37698)),
							BGl_string2491z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_procz00_3236);
						FAILURE(BgL_auxz00_4734, BFALSE, BFALSE);
					}
				return
					BGl_withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_4731, BgL_auxz00_4738);
			}
		}

	}



/* &<@anonymous:1415> */
	obj_t BGl_z62zc3z04anonymousza31415ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3238)
	{
		{	/* Ieee/port.scm 866 */
			{	/* Ieee/port.scm 871 */
				obj_t BgL_denvz00_3239;
				obj_t BgL_oldzd2errorzd2portz00_3240;
				obj_t BgL_portz00_3241;
				obj_t BgL_resz00_3242;

				BgL_denvz00_3239 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3238, (int) (((long) 0))));
				BgL_oldzd2errorzd2portz00_3240 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3238, (int) (((long) 1))));
				BgL_portz00_3241 = PROCEDURE_REF(BgL_envz00_3238, (int) (((long) 2)));
				BgL_resz00_3242 = PROCEDURE_REF(BgL_envz00_3238, (int) (((long) 3)));
				BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_3239,
					BgL_oldzd2errorzd2portz00_3240);
				BUNSPEC;
				{	/* Ieee/port.scm 872 */
					obj_t BgL_auxz00_3812;

					BgL_auxz00_3812 = bgl_close_output_port(((obj_t) BgL_portz00_3241));
					return CELL_SET(BgL_resz00_3242, BgL_auxz00_3812);
				}
			}
		}

	}



/* &close2106 */
	obj_t BGl_z62close2106z62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3244)
	{
		{	/* Ieee/port.scm 454 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &flush2107 */
	obj_t BGl_z62flush2107z62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3245)
	{
		{	/* Ieee/port.scm 454 */
			return BBOOL(((bool_t) 0));
		}

	}



/* input-port-protocol */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00(obj_t
		BgL_prototcolz00_46)
	{
		{	/* Ieee/port.scm 905 */
			{	/* Ieee/port.scm 906 */
				obj_t BgL_cellz00_2410;

				{	/* Ieee/port.scm 906 */
					obj_t BgL_top2984z00_4762;

					BgL_top2984z00_4762 = BGL_EXITD_TOP_AS_OBJ();
					BGL_MUTEX_LOCK
						(BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00);
					BGL_EXITD_PUSH_PROTECT(BgL_top2984z00_4762,
						BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00);
					BUNSPEC;
					{	/* Ieee/port.scm 906 */
						obj_t BgL_tmp2983z00_4761;

						BgL_tmp2983z00_4761 =
							BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_prototcolz00_46,
							BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00);
						BGL_EXITD_POP_PROTECT(BgL_top2984z00_4762);
						BUNSPEC;
						BGL_MUTEX_UNLOCK
							(BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00);
						BgL_cellz00_2410 = BgL_tmp2983z00_4761;
					}
				}
				if (PAIRP(BgL_cellz00_2410))
					{	/* Ieee/port.scm 908 */
						return CDR(BgL_cellz00_2410);
					}
				else
					{	/* Ieee/port.scm 908 */
						return BFALSE;
					}
			}
		}

	}



/* &input-port-protocol */
	obj_t BGl_z62inputzd2portzd2protocolz62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3248, obj_t BgL_prototcolz00_3249)
	{
		{	/* Ieee/port.scm 905 */
			return
				BGl_inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00
				(BgL_prototcolz00_3249);
		}

	}



/* input-port-protocol-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_protocolz00_47, obj_t BgL_openz00_48)
	{
		{	/* Ieee/port.scm 915 */
			{	/* Ieee/port.scm 916 */
				obj_t BgL_top2987z00_4774;

				BgL_top2987z00_4774 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK
					(BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00);
				BGL_EXITD_PUSH_PROTECT(BgL_top2987z00_4774,
					BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00);
				BUNSPEC;
				{	/* Ieee/port.scm 916 */
					obj_t BgL_tmp2986z00_4773;

					{	/* Ieee/port.scm 917 */
						bool_t BgL_test2988z00_4778;

						if (PROCEDUREP(BgL_openz00_48))
							{	/* Ieee/port.scm 917 */
								BgL_test2988z00_4778 =
									PROCEDURE_CORRECT_ARITYP(BgL_openz00_48, (int) (((long) 3)));
							}
						else
							{	/* Ieee/port.scm 917 */
								BgL_test2988z00_4778 = ((bool_t) 0);
							}
						if (BgL_test2988z00_4778)
							{	/* Ieee/port.scm 917 */
								BFALSE;
							}
						else
							{	/* Ieee/port.scm 917 */
								BGl_errorz00zz__errorz00
									(BGl_string2492z00zz__r4_ports_6_10_1z00,
									BGl_string2493z00zz__r4_ports_6_10_1z00, BgL_protocolz00_47);
							}
					}
					{	/* Ieee/port.scm 921 */
						obj_t BgL_cz00_1525;

						BgL_cz00_1525 =
							BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_protocolz00_47,
							BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00);
						if (PAIRP(BgL_cz00_1525))
							{	/* Ieee/port.scm 922 */
								BgL_tmp2986z00_4773 = SET_CDR(BgL_cz00_1525, BgL_openz00_48);
							}
						else
							{	/* Ieee/port.scm 925 */
								obj_t BgL_arg1424z00_1527;

								BgL_arg1424z00_1527 =
									MAKE_YOUNG_PAIR(BgL_protocolz00_47, BgL_openz00_48);
								BgL_tmp2986z00_4773 =
									(BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00 =
									MAKE_YOUNG_PAIR(BgL_arg1424z00_1527,
										BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00),
									BUNSPEC);
							}
					}
					BGL_EXITD_POP_PROTECT(BgL_top2987z00_4774);
					BUNSPEC;
					BGL_MUTEX_UNLOCK
						(BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00);
					BgL_tmp2986z00_4773;
				}
			}
			return BgL_openz00_48;
		}

	}



/* &input-port-protocol-set! */
	obj_t BGl_z62inputzd2portzd2protocolzd2setz12za2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3250, obj_t BgL_protocolz00_3251, obj_t BgL_openz00_3252)
	{
		{	/* Ieee/port.scm 915 */
			return
				BGl_inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00
				(BgL_protocolz00_3251, BgL_openz00_3252);
		}

	}



/* get-port-buffer */
	BGL_EXPORTED_DEF obj_t BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t
		BgL_whoz00_49, obj_t BgL_bufinfoz00_50, int BgL_defsiza7za7_51)
	{
		{	/* Ieee/port.scm 931 */
			if ((BgL_bufinfoz00_50 == BTRUE))
				{	/* Ieee/port.scm 933 */
					return make_string_sans_fill((long) (BgL_defsiza7za7_51));
				}
			else
				{	/* Ieee/port.scm 933 */
					if ((BgL_bufinfoz00_50 == BFALSE))
						{	/* Ieee/port.scm 935 */
							return make_string_sans_fill(((long) 2));
						}
					else
						{	/* Ieee/port.scm 935 */
							if (STRINGP(BgL_bufinfoz00_50))
								{	/* Ieee/port.scm 937 */
									return BgL_bufinfoz00_50;
								}
							else
								{	/* Ieee/port.scm 937 */
									if (INTEGERP(BgL_bufinfoz00_50))
										{	/* Ieee/port.scm 939 */
											if (((long) CINT(BgL_bufinfoz00_50) >= ((long) 2)))
												{	/* Ieee/port.scm 940 */
													return
														make_string_sans_fill(
														(long) CINT(BgL_bufinfoz00_50));
												}
											else
												{	/* Ieee/port.scm 940 */
													return make_string_sans_fill(((long) 2));
										}}
									else
										{	/* Ieee/port.scm 939 */
											return
												BGl_errorz00zz__errorz00(BgL_whoz00_49,
												BGl_string2494z00zz__r4_ports_6_10_1z00,
												BgL_bufinfoz00_50);
										}
								}
						}
				}
		}

	}



/* &get-port-buffer */
	obj_t BGl_z62getzd2portzd2bufferz62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3253, obj_t BgL_whoz00_3254, obj_t BgL_bufinfoz00_3255,
		obj_t BgL_defsiza7za7_3256)
	{
		{	/* Ieee/port.scm 931 */
			{	/* Ieee/port.scm 933 */
				int BgL_auxz00_4811;

				{	/* Ieee/port.scm 933 */
					obj_t BgL_tmpz00_4812;

					if (INTEGERP(BgL_defsiza7za7_3256))
						{	/* Ieee/port.scm 933 */
							BgL_tmpz00_4812 = BgL_defsiza7za7_3256;
						}
					else
						{
							obj_t BgL_auxz00_4815;

							BgL_auxz00_4815 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 40736)),
								BGl_string2495z00zz__r4_ports_6_10_1z00,
								BGl_string2496z00zz__r4_ports_6_10_1z00, BgL_defsiza7za7_3256);
							FAILURE(BgL_auxz00_4815, BFALSE, BFALSE);
						}
					BgL_auxz00_4811 = CINT(BgL_tmpz00_4812);
				}
				return
					BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BgL_whoz00_3254,
					BgL_bufinfoz00_3255, BgL_auxz00_4811);
			}
		}

	}



/* &%open-input-file */
	obj_t BGl_z62z52openzd2inputzd2filez30zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3048, obj_t BgL_stringz00_3049, obj_t BgL_bufz00_3050,
		obj_t BgL_tmtz00_3051)
	{
		{	/* Ieee/port.scm 949 */
			return bgl_open_input_file(BgL_stringz00_3049, BgL_bufz00_3050);
		}

	}



/* &%open-input-pipe */
	obj_t BGl_z62z52openzd2inputzd2pipez30zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3052, obj_t BgL_stringz00_3053, obj_t BgL_bufinfoz00_3054,
		obj_t BgL_tmtz00_3055)
	{
		{	/* Ieee/port.scm 955 */
			return
				bgl_open_input_pipe(BgL_stringz00_3053,
				BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
				(BGl_string2497z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_3054,
					(int) (((long) 1024))));
		}

	}



/* &%open-input-resource */
	obj_t BGl_z62z52openzd2inputzd2resourcez30zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3072, obj_t BgL_filez00_3073, obj_t BgL_bufinfoz00_3074,
		obj_t BgL_tmtz00_3075)
	{
		{	/* Ieee/port.scm 962 */
			{	/* Ieee/port.scm 963 */
				obj_t BgL_bufz00_3813;

				{	/* Ieee/port.scm 963 */
					obj_t BgL_res1947z00_3814;

					{	/* Ieee/port.scm 963 */
						int BgL_defsiza7za7_3815;

						BgL_defsiza7za7_3815 = (int) (default_io_bufsiz);
						if ((BgL_bufinfoz00_3074 == BTRUE))
							{	/* Ieee/port.scm 933 */
								BgL_res1947z00_3814 =
									make_string_sans_fill((long) (BgL_defsiza7za7_3815));
							}
						else
							{	/* Ieee/port.scm 933 */
								if ((BgL_bufinfoz00_3074 == BFALSE))
									{	/* Ieee/port.scm 935 */
										BgL_res1947z00_3814 = make_string_sans_fill(((long) 2));
									}
								else
									{	/* Ieee/port.scm 935 */
										if (STRINGP(BgL_bufinfoz00_3074))
											{	/* Ieee/port.scm 937 */
												BgL_res1947z00_3814 = BgL_bufinfoz00_3074;
											}
										else
											{	/* Ieee/port.scm 937 */
												if (INTEGERP(BgL_bufinfoz00_3074))
													{	/* Ieee/port.scm 939 */
														if (
															((long) CINT(BgL_bufinfoz00_3074) >= ((long) 2)))
															{	/* Ieee/port.scm 940 */
																BgL_res1947z00_3814 =
																	make_string_sans_fill(
																	(long) CINT(BgL_bufinfoz00_3074));
															}
														else
															{	/* Ieee/port.scm 940 */
																BgL_res1947z00_3814 =
																	make_string_sans_fill(((long) 2));
													}}
												else
													{	/* Ieee/port.scm 939 */
														BgL_res1947z00_3814 =
															BGl_errorz00zz__errorz00
															(BGl_string2498z00zz__r4_ports_6_10_1z00,
															BGl_string2494z00zz__r4_ports_6_10_1z00,
															BgL_bufinfoz00_3074);
													}
											}
									}
							}
					}
					BgL_bufz00_3813 = BgL_res1947z00_3814;
				}
				return bgl_open_input_resource(BgL_filez00_3073, BgL_bufz00_3813);
			}
		}

	}



/* &%open-input-http-socket */
	obj_t BGl_z62z52openzd2inputzd2httpzd2socketze2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3056, obj_t BgL_stringz00_3057, obj_t BgL_bufinfoz00_3058,
		obj_t BgL_timeoutz00_3059)
	{
		{	/* Ieee/port.scm 969 */
			{	/* Ieee/port.scm 983 */
				obj_t BgL_protocolz00_3817;

				BgL_protocolz00_3817 =
					BGl_urlzd2sanszd2protocolzd2parsezd2zz__urlz00(BgL_stringz00_3057,
					BGl_string2500z00zz__r4_ports_6_10_1z00);
				{	/* Ieee/port.scm 984 */
					obj_t BgL_loginz00_3818;
					obj_t BgL_hostz00_3819;
					obj_t BgL_portz00_3820;
					obj_t BgL_abspathz00_3821;

					{	/* Ieee/port.scm 985 */
						int BgL_tmpz00_4846;

						BgL_tmpz00_4846 = (int) (((long) 1));
						BgL_loginz00_3818 = BGL_MVALUES_VAL(BgL_tmpz00_4846);
					}
					{	/* Ieee/port.scm 985 */
						int BgL_tmpz00_4849;

						BgL_tmpz00_4849 = (int) (((long) 2));
						BgL_hostz00_3819 = BGL_MVALUES_VAL(BgL_tmpz00_4849);
					}
					{	/* Ieee/port.scm 985 */
						int BgL_tmpz00_4852;

						BgL_tmpz00_4852 = (int) (((long) 3));
						BgL_portz00_3820 = BGL_MVALUES_VAL(BgL_tmpz00_4852);
					}
					{	/* Ieee/port.scm 985 */
						int BgL_tmpz00_4855;

						BgL_tmpz00_4855 = (int) (((long) 4));
						BgL_abspathz00_3821 = BGL_MVALUES_VAL(BgL_tmpz00_4855);
					}
					return
						BGl_z62loopz62zz__r4_ports_6_10_1z00
						(BGl_proc2499z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_3058,
						BgL_timeoutz00_3059, BgL_portz00_3820, BgL_abspathz00_3821,
						BgL_loginz00_3818, BgL_hostz00_3819, BFALSE,
						BGl_list2501z00zz__r4_ports_6_10_1z00);
				}
			}
		}

	}



/* &loop */
	obj_t BGl_z62loopz62zz__r4_ports_6_10_1z00(obj_t BgL_parserz00_3269,
		obj_t BgL_bufinfoz00_3268, obj_t BgL_timeoutz00_3267,
		obj_t BgL_portz00_3266, obj_t BgL_abspathz00_3265, obj_t BgL_loginz00_3264,
		obj_t BgL_hostz00_3263, obj_t BgL_ipz00_1543, obj_t BgL_headerz00_1544)
	{
		{	/* Ieee/port.scm 985 */
			{	/* Ieee/port.scm 987 */
				struct bgl_cell BgL_box3002_3478z00;
				obj_t BgL_ipz00_3478;

				BgL_ipz00_3478 = MAKE_CELL_STACK(BgL_ipz00_1543, BgL_box3002_3478z00);
				{	/* Ieee/port.scm 987 */
					obj_t BgL_sockz00_1546;

					{	/* Ieee/port.scm 987 */
						obj_t BgL_methodz00_1625;

						BgL_methodz00_1625 = BGl_symbol2511z00zz__r4_ports_6_10_1z00;
						BgL_sockz00_1546 =
							BGl_httpz00zz__httpz00(BNIL, BFALSE, BFALSE, BUNSPEC, BFALSE,
							BgL_headerz00_1544, BgL_hostz00_3263,
							BGl_string2514z00zz__r4_ports_6_10_1z00, BFALSE,
							BgL_loginz00_3264, BgL_methodz00_1625, BFALSE, BFALSE,
							BgL_abspathz00_3265, BgL_portz00_3266,
							BGl_symbol2513z00zz__r4_ports_6_10_1z00, BFALSE, BFALSE,
							BgL_timeoutz00_3267, BFALSE);
					}
					{	/* Ieee/port.scm 987 */
						obj_t BgL_opz00_1547;

						{	/* Ieee/port.scm 993 */
							obj_t BgL_res1956z00_2458;

							{	/* Ieee/port.scm 993 */
								obj_t BgL_tmpz00_4860;

								BgL_tmpz00_4860 = ((obj_t) BgL_sockz00_1546);
								BgL_res1956z00_2458 = SOCKET_OUTPUT(BgL_tmpz00_4860);
							}
							BgL_opz00_1547 = BgL_res1956z00_2458;
						}
						{	/* Ieee/port.scm 993 */

							{	/* Ieee/port.scm 994 */
								bool_t BgL_test3003z00_4863;

								{	/* Ieee/port.scm 994 */
									obj_t BgL_objz00_2459;

									BgL_objz00_2459 = CELL_REF(BgL_ipz00_3478);
									BgL_test3003z00_4863 = INPUT_PORTP(BgL_objz00_2459);
								}
								if (BgL_test3003z00_4863)
									{	/* Ieee/port.scm 997 */
										obj_t BgL_arg1432z00_1549;

										{	/* Ieee/port.scm 997 */
											obj_t BgL_res1957z00_2461;

											{	/* Ieee/port.scm 997 */
												obj_t BgL_tmpz00_4865;

												BgL_tmpz00_4865 = ((obj_t) BgL_sockz00_1546);
												BgL_res1957z00_2461 = SOCKET_INPUT(BgL_tmpz00_4865);
											}
											BgL_arg1432z00_1549 = BgL_res1957z00_2461;
										}
										{	/* Ieee/port.scm 997 */
											obj_t BgL_dstz00_2462;

											BgL_dstz00_2462 = CELL_REF(BgL_ipz00_3478);
											bgl_input_port_clone(BgL_dstz00_2462,
												BgL_arg1432z00_1549);
										}
									}
								else
									{	/* Ieee/port.scm 998 */
										obj_t BgL_auxz00_3479;

										{	/* Ieee/port.scm 998 */
											obj_t BgL_res1958z00_2465;

											{	/* Ieee/port.scm 998 */
												obj_t BgL_tmpz00_4869;

												BgL_tmpz00_4869 = ((obj_t) BgL_sockz00_1546);
												BgL_res1958z00_2465 = SOCKET_INPUT(BgL_tmpz00_4869);
											}
											BgL_auxz00_3479 = BgL_res1958z00_2465;
										}
										CELL_SET(BgL_ipz00_3478, BgL_auxz00_3479);
									}
							}
							{	/* Ieee/port.scm 1001 */
								obj_t BgL_zc3z04anonymousza31434ze3z87_3257;

								BgL_zc3z04anonymousza31434ze3z87_3257 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31434ze3ze5zz__r4_ports_6_10_1z00,
									(int) (((long) 1)), (int) (((long) 2)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31434ze3z87_3257,
									(int) (((long) 0)), BgL_opz00_1547);
								PROCEDURE_SET(BgL_zc3z04anonymousza31434ze3z87_3257,
									(int) (((long) 1)), BgL_sockz00_1546);
								{	/* Ieee/port.scm 999 */
									obj_t BgL_portz00_2468;

									BgL_portz00_2468 = CELL_REF(BgL_ipz00_3478);
									if (PROCEDURE_CORRECT_ARITYP
										(BgL_zc3z04anonymousza31434ze3z87_3257, (int) (((long) 1))))
										{	/* Ieee/port.scm 1370 */
											PORT_CHOOK_SET(BgL_portz00_2468,
												BgL_zc3z04anonymousza31434ze3z87_3257);
											BUNSPEC;
											BgL_zc3z04anonymousza31434ze3z87_3257;
										}
									else
										{	/* Ieee/port.scm 1370 */
											bgl_system_failure(BGL_IO_PORT_ERROR,
												BGl_string2515z00zz__r4_ports_6_10_1z00,
												BGl_string2516z00zz__r4_ports_6_10_1z00,
												BgL_zc3z04anonymousza31434ze3z87_3257);
										}
								}
							}
							{	/* Ieee/port.scm 1005 */
								obj_t BgL_zc3z04anonymousza31436ze3z87_3258;

								BgL_zc3z04anonymousza31436ze3z87_3258 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31436ze3ze5zz__r4_ports_6_10_1z00,
									(int) (((long) 2)), (int) (((long) 8)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31436ze3z87_3258,
									(int) (((long) 0)), BgL_hostz00_3263);
								PROCEDURE_SET(BgL_zc3z04anonymousza31436ze3z87_3258,
									(int) (((long) 1)), BgL_loginz00_3264);
								PROCEDURE_SET(BgL_zc3z04anonymousza31436ze3z87_3258,
									(int) (((long) 2)), BgL_abspathz00_3265);
								PROCEDURE_SET(BgL_zc3z04anonymousza31436ze3z87_3258,
									(int) (((long) 3)), BgL_portz00_3266);
								PROCEDURE_SET(BgL_zc3z04anonymousza31436ze3z87_3258,
									(int) (((long) 4)), BgL_timeoutz00_3267);
								PROCEDURE_SET(BgL_zc3z04anonymousza31436ze3z87_3258,
									(int) (((long) 5)), BgL_bufinfoz00_3268);
								PROCEDURE_SET(BgL_zc3z04anonymousza31436ze3z87_3258,
									(int) (((long) 6)), BgL_parserz00_3269);
								PROCEDURE_SET(BgL_zc3z04anonymousza31436ze3z87_3258,
									(int) (((long) 7)), BgL_sockz00_1546);
								{	/* Ieee/port.scm 1003 */
									obj_t BgL_portz00_2473;

									BgL_portz00_2473 = CELL_REF(BgL_ipz00_3478);
									if (PROCEDURE_CORRECT_ARITYP
										(BgL_zc3z04anonymousza31436ze3z87_3258, (int) (((long) 2))))
										{	/* Ieee/port.scm 1387 */
											BGL_INPUT_PORT_USEEK_SET(BgL_portz00_2473,
												BgL_zc3z04anonymousza31436ze3z87_3258);
											BUNSPEC;
											BgL_zc3z04anonymousza31436ze3z87_3258;
										}
									else
										{	/* Ieee/port.scm 1387 */
											bgl_system_failure(BGL_IO_PORT_ERROR,
												BGl_string2517z00zz__r4_ports_6_10_1z00,
												BGl_string2518z00zz__r4_ports_6_10_1z00,
												BgL_zc3z04anonymousza31436ze3z87_3258);
										}
								}
							}
							{	/* Ieee/port.scm 1008 */
								obj_t BgL_res1098z00_3270;

								BgL_res1098z00_3270 = MAKE_CELL(BUNSPEC);
								{
									obj_t BgL_ez00_1606;

									if (CBOOL
										(BGl_zc3z04exitza31452ze3ze70z60zz__r4_ports_6_10_1z00
											(BgL_parserz00_3269, BgL_opz00_1547, BgL_ipz00_3478,
												BgL_res1098z00_3270)))
										{	/* Ieee/port.scm 1008 */
											BgL_ez00_1606 = CELL_REF(BgL_res1098z00_3270);
											socket_close(((obj_t) BgL_sockz00_1546));
											if (BGl_isazf3zf3zz__objectz00(BgL_ez00_1606,
													BGl_z62httpzd2redirectionzb0zz__httpz00))
												{	/* Ieee/port.scm 1013 */
													obj_t BgL_arg1459z00_1610;

													BgL_arg1459z00_1610 =
														(((BgL_z62httpzd2redirectionzb0_bglt) COBJECT(
																((BgL_z62httpzd2redirectionzb0_bglt)
																	BgL_ez00_1606)))->BgL_urlz00);
													{	/* Ieee/port.scm 440 */

														return
															BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
															(BgL_arg1459z00_1610, BgL_bufinfoz00_3268,
															BINT(((long) 5000000)));
												}}
											else
												{	/* Ieee/port.scm 1011 */
													return BFALSE;
												}
										}
									else
										{	/* Ieee/port.scm 1008 */
											return CELL_REF(BgL_res1098z00_3270);
										}
								}
							}
						}
					}
				}
			}
		}

	}



/* <@exit:1452>~0 */
	obj_t BGl_zc3z04exitza31452ze3ze70z60zz__r4_ports_6_10_1z00(obj_t
		BgL_parserz00_3477, obj_t BgL_opz00_3476, obj_t BgL_ipz00_3475,
		obj_t BgL_res1098z00_3474)
	{
		{	/* Ieee/port.scm 1008 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1105z00_1590;

			if (SET_EXIT(BgL_an_exit1105z00_1590))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1105z00_1590 = (void *) jmpbuf;
					{	/* Ieee/port.scm 1008 */

						PUSH_EXIT(BgL_an_exit1105z00_1590, ((long) 1));
						{	/* Ieee/port.scm 1008 */
							obj_t BgL_an_exitd1106z00_1591;

							BgL_an_exitd1106z00_1591 = ((obj_t) (&exitd));
							{	/* Ieee/port.scm 1008 */
								bool_t BgL_res1108z00_1594;

								{	/* Ieee/port.scm 1008 */
									obj_t BgL_ohs1096z00_1595;

									BgL_ohs1096z00_1595 = BGL_ERROR_HANDLER_GET();
									{	/* Ieee/port.scm 1008 */
										obj_t BgL_exitd1102z00_1596;

										BgL_exitd1102z00_1596 = ((obj_t) (&exitd));
										{
											obj_t BgL_zc3z04anonymousza31456ze3z87_3259;

											BgL_zc3z04anonymousza31456ze3z87_3259 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31456ze3ze5zz__r4_ports_6_10_1z00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31456ze3z87_3259,
												(int) (((long) 0)), BgL_ohs1096z00_1595);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1102z00_1596,
												BgL_zc3z04anonymousza31456ze3z87_3259);
											{	/* Ieee/port.scm 1008 */
												bool_t BgL_tmp1104z00_1598;

												{	/* Ieee/port.scm 1008 */
													obj_t BgL_arg1453z00_1599;

													{	/* Ieee/port.scm 1008 */
														obj_t BgL_zc3z04anonymousza31455ze3z87_3260;

														BgL_zc3z04anonymousza31455ze3z87_3260 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31455ze3ze5zz__r4_ports_6_10_1z00,
															(int) (((long) 1)), (int) (((long) 2)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31455ze3z87_3260,
															(int) (((long) 0)),
															((obj_t) BgL_res1098z00_3474));
														PROCEDURE_SET(BgL_zc3z04anonymousza31455ze3z87_3260,
															(int) (((long) 1)), BgL_an_exitd1106z00_1591);
														BgL_arg1453z00_1599 =
															MAKE_YOUNG_PAIR
															(BgL_zc3z04anonymousza31455ze3z87_3260,
															BgL_ohs1096z00_1595);
													}
													BGL_ERROR_HANDLER_SET(BgL_arg1453z00_1599);
													BUNSPEC;
												}
												{	/* Ieee/port.scm 1008 */
													obj_t BgL_auxz00_3271;

													BgL_auxz00_3271 =
														BGl_httpzd2parsezd2responsez00zz__httpz00(CELL_REF
														(BgL_ipz00_3475), BgL_opz00_3476,
														BgL_parserz00_3477);
													CELL_SET(BgL_res1098z00_3474, BgL_auxz00_3271);
												}
												BgL_tmp1104z00_1598 = ((bool_t) 0);
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1102z00_1596);
												BGL_ERROR_HANDLER_SET(BgL_ohs1096z00_1595);
												BUNSPEC;
												BgL_res1108z00_1594 = BgL_tmp1104z00_1598;
								}}}}
								POP_EXIT();
								return BBOOL(BgL_res1108z00_1594);
							}
						}
					}
				}
		}

	}



/* &parser */
	obj_t BGl_z62parserz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3273,
		obj_t BgL_ipz00_3274, obj_t BgL_statuszd2codezd2_3275,
		obj_t BgL_headerz00_3276, obj_t BgL_clenz00_3277, obj_t BgL_tencz00_3278)
	{
		{	/* Ieee/port.scm 981 */
			{	/* Ieee/port.scm 972 */
				bool_t BgL_test3008z00_4944;

				if (((long) CINT(BgL_statuszd2codezd2_3275) >= ((long) 200)))
					{	/* Ieee/port.scm 972 */
						BgL_test3008z00_4944 =
							((long) CINT(BgL_statuszd2codezd2_3275) <= ((long) 299));
					}
				else
					{	/* Ieee/port.scm 972 */
						BgL_test3008z00_4944 = ((bool_t) 0);
					}
				if (BgL_test3008z00_4944)
					{	/* Ieee/port.scm 972 */
						if (INPUT_PORTP(BgL_ipz00_3274))
							{	/* Ieee/port.scm 976 */
								bool_t BgL_test3011z00_4952;

								if (ELONGP(BgL_clenz00_3277))
									{	/* Ieee/port.scm 976 */
										long BgL_n1z00_3823;

										BgL_n1z00_3823 = BELONG_TO_LONG(BgL_clenz00_3277);
										BgL_test3011z00_4952 =
											(BgL_n1z00_3823 > (long) (((long) 0)));
									}
								else
									{	/* Ieee/port.scm 976 */
										BgL_test3011z00_4952 = ((bool_t) 0);
									}
								if (BgL_test3011z00_4952)
									{	/* Ieee/port.scm 976 */
										{	/* Ieee/port.scm 977 */
											long BgL_arg1466z00_3824;

											{	/* Ieee/port.scm 977 */
												long BgL_res1954z00_3825;

												{	/* Ieee/port.scm 977 */
													long BgL_xz00_3826;

													BgL_xz00_3826 = BELONG_TO_LONG(BgL_clenz00_3277);
													BgL_res1954z00_3825 = (long) (BgL_xz00_3826);
												}
												BgL_arg1466z00_3824 = BgL_res1954z00_3825;
											}
											INPUT_PORT_FILLBARRIER_SET(BgL_ipz00_3274,
												BgL_arg1466z00_3824);
											BUNSPEC;
											BgL_arg1466z00_3824;
										}
										{	/* Ieee/port.scm 978 */
											long BgL_tmpz00_4961;

											BgL_tmpz00_4961 = BELONG_TO_LONG(BgL_clenz00_3277);
											BGL_INPUT_PORT_LENGTH_SET(BgL_ipz00_3274,
												BgL_tmpz00_4961);
										} BUNSPEC;
										return BgL_ipz00_3274;
									}
								else
									{	/* Ieee/port.scm 976 */
										return BgL_ipz00_3274;
									}
							}
						else
							{	/* Ieee/port.scm 442 */

								return
									BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
									(BGl_string2519z00zz__r4_ports_6_10_1z00, BINT(((long) 0)),
									BINT(((long) 0)));
					}}
				else
					{	/* Ieee/port.scm 972 */
						return BFALSE;
					}
			}
		}

	}



/* &<@anonymous:1455> */
	obj_t BGl_z62zc3z04anonymousza31455ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3279, obj_t BgL_ez00_3282)
	{
		{	/* Ieee/port.scm 1008 */
			{	/* Ieee/port.scm 1008 */
				obj_t BgL_res1098z00_3280;
				obj_t BgL_an_exitd1106z00_3281;

				BgL_res1098z00_3280 =
					PROCEDURE_REF(BgL_envz00_3279, (int) (((long) 0)));
				BgL_an_exitd1106z00_3281 =
					PROCEDURE_REF(BgL_envz00_3279, (int) (((long) 1)));
				CELL_SET(BgL_res1098z00_3280, BgL_ez00_3282);
				return
					BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1106z00_3281, BTRUE);
			}
		}

	}



/* &<@anonymous:1456> */
	obj_t BGl_z62zc3z04anonymousza31456ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3284)
	{
		{	/* Ieee/port.scm 1008 */
			{
				obj_t BgL_ohs1096z00_3285;

				BgL_ohs1096z00_3285 =
					PROCEDURE_REF(BgL_envz00_3284, (int) (((long) 0)));
				BGL_ERROR_HANDLER_SET(BgL_ohs1096z00_3285);
				return BUNSPEC;
			}
		}

	}



/* &<@anonymous:1436> */
	obj_t BGl_z62zc3z04anonymousza31436ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3286, obj_t BgL_ipz00_3295, obj_t BgL_offsetz00_3296)
	{
		{	/* Ieee/port.scm 1004 */
			{	/* Ieee/port.scm 1005 */
				obj_t BgL_hostz00_3287;
				obj_t BgL_loginz00_3288;
				obj_t BgL_abspathz00_3289;
				obj_t BgL_portz00_3290;
				obj_t BgL_timeoutz00_3291;
				obj_t BgL_bufinfoz00_3292;
				obj_t BgL_parserz00_3293;
				obj_t BgL_sockz00_3294;

				BgL_hostz00_3287 = PROCEDURE_REF(BgL_envz00_3286, (int) (((long) 0)));
				BgL_loginz00_3288 = PROCEDURE_REF(BgL_envz00_3286, (int) (((long) 1)));
				BgL_abspathz00_3289 =
					PROCEDURE_REF(BgL_envz00_3286, (int) (((long) 2)));
				BgL_portz00_3290 = PROCEDURE_REF(BgL_envz00_3286, (int) (((long) 3)));
				BgL_timeoutz00_3291 =
					PROCEDURE_REF(BgL_envz00_3286, (int) (((long) 4)));
				BgL_bufinfoz00_3292 =
					PROCEDURE_REF(BgL_envz00_3286, (int) (((long) 5)));
				BgL_parserz00_3293 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3286, (int) (((long) 6))));
				BgL_sockz00_3294 = PROCEDURE_REF(BgL_envz00_3286, (int) (((long) 7)));
				socket_close(((obj_t) BgL_sockz00_3294));
				{	/* Ieee/port.scm 1006 */
					obj_t BgL_rz00_3828;

					{	/* Ieee/port.scm 1006 */
						obj_t BgL_arg1443z00_3829;

						{	/* Ieee/port.scm 1005 */

							BgL_arg1443z00_3829 =
								BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
								(long) CINT(BgL_offsetz00_3296), ((long) 10));
						}
						BgL_rz00_3828 =
							string_append_3(BGl_string2520z00zz__r4_ports_6_10_1z00,
							BgL_arg1443z00_3829, BGl_string2521z00zz__r4_ports_6_10_1z00);
					}
					{	/* Ieee/port.scm 1007 */
						obj_t BgL_arg1437z00_3830;

						{	/* Ieee/port.scm 1007 */
							obj_t BgL_arg1438z00_3831;
							obj_t BgL_arg1439z00_3832;

							{	/* Ieee/port.scm 1007 */
								obj_t BgL_arg1440z00_3833;

								BgL_arg1440z00_3833 = MAKE_YOUNG_PAIR(BgL_rz00_3828, BNIL);
								BgL_arg1438z00_3831 =
									MAKE_YOUNG_PAIR(BGl_keyword2522z00zz__r4_ports_6_10_1z00,
									BgL_arg1440z00_3833);
							}
							{	/* Ieee/port.scm 1007 */
								obj_t BgL_arg1441z00_3834;

								{	/* Ieee/port.scm 1007 */
									obj_t BgL_arg1442z00_3835;

									BgL_arg1442z00_3835 =
										MAKE_YOUNG_PAIR(BGl_string2505z00zz__r4_ports_6_10_1z00,
										BNIL);
									BgL_arg1441z00_3834 =
										MAKE_YOUNG_PAIR(BGl_keyword2503z00zz__r4_ports_6_10_1z00,
										BgL_arg1442z00_3835);
								}
								BgL_arg1439z00_3832 =
									MAKE_YOUNG_PAIR(BgL_arg1441z00_3834, BNIL);
							}
							BgL_arg1437z00_3830 =
								MAKE_YOUNG_PAIR(BgL_arg1438z00_3831, BgL_arg1439z00_3832);
						}
						return
							BGl_z62loopz62zz__r4_ports_6_10_1z00(BgL_parserz00_3293,
							BgL_bufinfoz00_3292, BgL_timeoutz00_3291, BgL_portz00_3290,
							BgL_abspathz00_3289, BgL_loginz00_3288, BgL_hostz00_3287,
							BgL_ipz00_3295, BgL_arg1437z00_3830);
					}
				}
			}
		}

	}



/* &<@anonymous:1434> */
	obj_t BGl_z62zc3z04anonymousza31434ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3297, obj_t BgL_ipz00_3300)
	{
		{	/* Ieee/port.scm 1000 */
			{	/* Ieee/port.scm 1001 */
				obj_t BgL_opz00_3298;
				obj_t BgL_sockz00_3299;

				BgL_opz00_3298 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3297, (int) (((long) 0))));
				BgL_sockz00_3299 = PROCEDURE_REF(BgL_envz00_3297, (int) (((long) 1)));
				bgl_close_output_port(BgL_opz00_3298);
				return socket_close(((obj_t) BgL_sockz00_3299));
			}
		}

	}



/* _open-input-file */
	obj_t BGl__openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t
		BgL_env1216z00_68, obj_t BgL_opt1215z00_67)
	{
		{	/* Ieee/port.scm 1036 */
			{	/* Ieee/port.scm 1036 */
				obj_t BgL_g1217z00_1654;

				BgL_g1217z00_1654 = VECTOR_REF(BgL_opt1215z00_67, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1215z00_67))
					{
					case ((long) 1):

						{	/* Ieee/port.scm 1036 */

							{	/* Ieee/port.scm 1036 */
								obj_t BgL_auxz00_5013;

								if (STRINGP(BgL_g1217z00_1654))
									{	/* Ieee/port.scm 1036 */
										BgL_auxz00_5013 = BgL_g1217z00_1654;
									}
								else
									{
										obj_t BgL_auxz00_5016;

										BgL_auxz00_5016 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2452z00zz__r4_ports_6_10_1z00,
											BINT(((long) 45348)),
											BGl_string2524z00zz__r4_ports_6_10_1z00,
											BGl_string2454z00zz__r4_ports_6_10_1z00,
											BgL_g1217z00_1654);
										FAILURE(BgL_auxz00_5016, BFALSE, BFALSE);
									}
								return
									BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
									(BgL_auxz00_5013, BTRUE, BINT(((long) 5000000)));
						}} break;
					case ((long) 2):

						{	/* Ieee/port.scm 1036 */
							obj_t BgL_bufinfoz00_1660;

							BgL_bufinfoz00_1660 = VECTOR_REF(BgL_opt1215z00_67, ((long) 1));
							{	/* Ieee/port.scm 1036 */

								{	/* Ieee/port.scm 1036 */
									obj_t BgL_auxz00_5023;

									if (STRINGP(BgL_g1217z00_1654))
										{	/* Ieee/port.scm 1036 */
											BgL_auxz00_5023 = BgL_g1217z00_1654;
										}
									else
										{
											obj_t BgL_auxz00_5026;

											BgL_auxz00_5026 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2452z00zz__r4_ports_6_10_1z00,
												BINT(((long) 45348)),
												BGl_string2524z00zz__r4_ports_6_10_1z00,
												BGl_string2454z00zz__r4_ports_6_10_1z00,
												BgL_g1217z00_1654);
											FAILURE(BgL_auxz00_5026, BFALSE, BFALSE);
										}
									return
										BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
										(BgL_auxz00_5023, BgL_bufinfoz00_1660,
										BINT(((long) 5000000)));
						}}} break;
					case ((long) 3):

						{	/* Ieee/port.scm 1036 */
							obj_t BgL_bufinfoz00_1662;

							BgL_bufinfoz00_1662 = VECTOR_REF(BgL_opt1215z00_67, ((long) 1));
							{	/* Ieee/port.scm 1036 */
								obj_t BgL_timeoutz00_1663;

								BgL_timeoutz00_1663 = VECTOR_REF(BgL_opt1215z00_67, ((long) 2));
								{	/* Ieee/port.scm 1036 */

									{	/* Ieee/port.scm 1036 */
										obj_t BgL_auxz00_5034;

										if (STRINGP(BgL_g1217z00_1654))
											{	/* Ieee/port.scm 1036 */
												BgL_auxz00_5034 = BgL_g1217z00_1654;
											}
										else
											{
												obj_t BgL_auxz00_5037;

												BgL_auxz00_5037 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2452z00zz__r4_ports_6_10_1z00,
													BINT(((long) 45348)),
													BGl_string2524z00zz__r4_ports_6_10_1z00,
													BGl_string2454z00zz__r4_ports_6_10_1z00,
													BgL_g1217z00_1654);
												FAILURE(BgL_auxz00_5037, BFALSE, BFALSE);
											}
										return
											BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
											(BgL_auxz00_5034, BgL_bufinfoz00_1662,
											BgL_timeoutz00_1663);
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



/* open-input-file */
	BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_64, obj_t BgL_bufinfoz00_65, obj_t BgL_timeoutz00_66)
	{
		{	/* Ieee/port.scm 1036 */
			{	/* Ieee/port.scm 1037 */
				obj_t BgL_bufferz00_1664;

				{	/* Ieee/port.scm 1037 */
					obj_t BgL_res1961z00_2488;

					{	/* Ieee/port.scm 1037 */
						int BgL_defsiza7za7_2478;

						BgL_defsiza7za7_2478 = (int) (default_io_bufsiz);
						if ((BgL_bufinfoz00_65 == BTRUE))
							{	/* Ieee/port.scm 933 */
								BgL_res1961z00_2488 =
									make_string_sans_fill((long) (BgL_defsiza7za7_2478));
							}
						else
							{	/* Ieee/port.scm 933 */
								if ((BgL_bufinfoz00_65 == BFALSE))
									{	/* Ieee/port.scm 935 */
										BgL_res1961z00_2488 = make_string_sans_fill(((long) 2));
									}
								else
									{	/* Ieee/port.scm 935 */
										if (STRINGP(BgL_bufinfoz00_65))
											{	/* Ieee/port.scm 937 */
												BgL_res1961z00_2488 = BgL_bufinfoz00_65;
											}
										else
											{	/* Ieee/port.scm 937 */
												if (INTEGERP(BgL_bufinfoz00_65))
													{	/* Ieee/port.scm 939 */
														if (((long) CINT(BgL_bufinfoz00_65) >= ((long) 2)))
															{	/* Ieee/port.scm 940 */
																BgL_res1961z00_2488 =
																	make_string_sans_fill(
																	(long) CINT(BgL_bufinfoz00_65));
															}
														else
															{	/* Ieee/port.scm 940 */
																BgL_res1961z00_2488 =
																	make_string_sans_fill(((long) 2));
													}}
												else
													{	/* Ieee/port.scm 939 */
														BgL_res1961z00_2488 =
															BGl_errorz00zz__errorz00
															(BGl_string2498z00zz__r4_ports_6_10_1z00,
															BGl_string2494z00zz__r4_ports_6_10_1z00,
															BgL_bufinfoz00_65);
													}
											}
									}
							}
					}
					BgL_bufferz00_1664 = BgL_res1961z00_2488;
				}
				{
					obj_t BgL_protosz00_1666;

					BgL_protosz00_1666 =
						BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00;
				BgL_zc3z04anonymousza31468ze3z87_1667:
					if (NULLP(BgL_protosz00_1666))
						{	/* Ieee/port.scm 1039 */
							return bgl_open_input_file(BgL_stringz00_64, BgL_bufferz00_1664);
						}
					else
						{	/* Ieee/port.scm 1042 */
							obj_t BgL_cellz00_1669;

							BgL_cellz00_1669 = CAR(((obj_t) BgL_protosz00_1666));
							{	/* Ieee/port.scm 1042 */
								obj_t BgL_identz00_1670;

								BgL_identz00_1670 = CAR(((obj_t) BgL_cellz00_1669));
								{	/* Ieee/port.scm 1043 */
									long BgL_lz00_1671;

									BgL_lz00_1671 = STRING_LENGTH(((obj_t) BgL_identz00_1670));
									{	/* Ieee/port.scm 1044 */
										obj_t BgL_openz00_1672;

										BgL_openz00_1672 = CDR(((obj_t) BgL_cellz00_1669));
										{	/* Ieee/port.scm 1045 */

											if (bigloo_strncmp(BgL_stringz00_64,
													((obj_t) BgL_identz00_1670), BgL_lz00_1671))
												{	/* Ieee/port.scm 1048 */
													obj_t BgL_namez00_1674;

													BgL_namez00_1674 =
														c_substring(BgL_stringz00_64, BgL_lz00_1671,
														STRING_LENGTH(BgL_stringz00_64));
													return
														PROCEDURE_ENTRY(BgL_openz00_1672) (BgL_openz00_1672,
														BgL_namez00_1674, BgL_bufferz00_1664,
														BgL_timeoutz00_66, BEOA);
												}
											else
												{	/* Ieee/port.scm 1050 */
													obj_t BgL_arg1472z00_1676;

													BgL_arg1472z00_1676 =
														CDR(((obj_t) BgL_protosz00_1666));
													{
														obj_t BgL_protosz00_5087;

														BgL_protosz00_5087 = BgL_arg1472z00_1676;
														BgL_protosz00_1666 = BgL_protosz00_5087;
														goto BgL_zc3z04anonymousza31468ze3z87_1667;
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



/* _open-input-string */
	obj_t BGl__openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t
		BgL_env1221z00_73, obj_t BgL_opt1220z00_72)
	{
		{	/* Ieee/port.scm 1055 */
			{	/* Ieee/port.scm 1055 */
				obj_t BgL_stringz00_1678;

				BgL_stringz00_1678 = VECTOR_REF(BgL_opt1220z00_72, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1220z00_72))
					{
					case ((long) 1):

						{	/* Ieee/port.scm 1056 */
							long BgL_endz00_1683;

							{	/* Ieee/port.scm 1056 */
								obj_t BgL_stringz00_2506;

								if (STRINGP(BgL_stringz00_1678))
									{	/* Ieee/port.scm 1056 */
										BgL_stringz00_2506 = BgL_stringz00_1678;
									}
								else
									{
										obj_t BgL_auxz00_5091;

										BgL_auxz00_5091 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2452z00zz__r4_ports_6_10_1z00,
											BINT(((long) 46257)),
											BGl_string2525z00zz__r4_ports_6_10_1z00,
											BGl_string2454z00zz__r4_ports_6_10_1z00,
											BgL_stringz00_1678);
										FAILURE(BgL_auxz00_5091, BFALSE, BFALSE);
									}
								BgL_endz00_1683 = STRING_LENGTH(BgL_stringz00_2506);
							}
							{	/* Ieee/port.scm 1055 */

								{	/* Ieee/port.scm 1055 */
									obj_t BgL_auxz00_5096;

									if (STRINGP(BgL_stringz00_1678))
										{	/* Ieee/port.scm 1055 */
											BgL_auxz00_5096 = BgL_stringz00_1678;
										}
									else
										{
											obj_t BgL_auxz00_5099;

											BgL_auxz00_5099 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2452z00zz__r4_ports_6_10_1z00,
												BINT(((long) 46193)),
												BGl_string2525z00zz__r4_ports_6_10_1z00,
												BGl_string2454z00zz__r4_ports_6_10_1z00,
												BgL_stringz00_1678);
											FAILURE(BgL_auxz00_5099, BFALSE, BFALSE);
										}
									return
										BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
										(BgL_auxz00_5096, BINT(((long) 0)), BINT(BgL_endz00_1683));
						}}} break;
					case ((long) 2):

						{	/* Ieee/port.scm 1055 */
							obj_t BgL_startz00_1684;

							BgL_startz00_1684 = VECTOR_REF(BgL_opt1220z00_72, ((long) 1));
							{	/* Ieee/port.scm 1056 */
								long BgL_endz00_1685;

								{	/* Ieee/port.scm 1056 */
									obj_t BgL_stringz00_2508;

									if (STRINGP(BgL_stringz00_1678))
										{	/* Ieee/port.scm 1056 */
											BgL_stringz00_2508 = BgL_stringz00_1678;
										}
									else
										{
											obj_t BgL_auxz00_5109;

											BgL_auxz00_5109 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2452z00zz__r4_ports_6_10_1z00,
												BINT(((long) 46257)),
												BGl_string2525z00zz__r4_ports_6_10_1z00,
												BGl_string2454z00zz__r4_ports_6_10_1z00,
												BgL_stringz00_1678);
											FAILURE(BgL_auxz00_5109, BFALSE, BFALSE);
										}
									BgL_endz00_1685 = STRING_LENGTH(BgL_stringz00_2508);
								}
								{	/* Ieee/port.scm 1055 */

									{	/* Ieee/port.scm 1055 */
										obj_t BgL_auxz00_5114;

										if (STRINGP(BgL_stringz00_1678))
											{	/* Ieee/port.scm 1055 */
												BgL_auxz00_5114 = BgL_stringz00_1678;
											}
										else
											{
												obj_t BgL_auxz00_5117;

												BgL_auxz00_5117 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2452z00zz__r4_ports_6_10_1z00,
													BINT(((long) 46193)),
													BGl_string2525z00zz__r4_ports_6_10_1z00,
													BGl_string2454z00zz__r4_ports_6_10_1z00,
													BgL_stringz00_1678);
												FAILURE(BgL_auxz00_5117, BFALSE, BFALSE);
											}
										return
											BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
											(BgL_auxz00_5114, BgL_startz00_1684,
											BINT(BgL_endz00_1685));
									}
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/port.scm 1055 */
							obj_t BgL_startz00_1686;

							BgL_startz00_1686 = VECTOR_REF(BgL_opt1220z00_72, ((long) 1));
							{	/* Ieee/port.scm 1055 */
								obj_t BgL_endz00_1687;

								BgL_endz00_1687 = VECTOR_REF(BgL_opt1220z00_72, ((long) 2));
								{	/* Ieee/port.scm 1055 */

									{	/* Ieee/port.scm 1055 */
										obj_t BgL_auxz00_5125;

										if (STRINGP(BgL_stringz00_1678))
											{	/* Ieee/port.scm 1055 */
												BgL_auxz00_5125 = BgL_stringz00_1678;
											}
										else
											{
												obj_t BgL_auxz00_5128;

												BgL_auxz00_5128 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2452z00zz__r4_ports_6_10_1z00,
													BINT(((long) 46193)),
													BGl_string2525z00zz__r4_ports_6_10_1z00,
													BGl_string2454z00zz__r4_ports_6_10_1z00,
													BgL_stringz00_1678);
												FAILURE(BgL_auxz00_5128, BFALSE, BFALSE);
											}
										return
											BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
											(BgL_auxz00_5125, BgL_startz00_1686, BgL_endz00_1687);
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



/* open-input-string */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_69,
		obj_t BgL_startz00_70, obj_t BgL_endz00_71)
	{
		{	/* Ieee/port.scm 1055 */
			if (((long) CINT(BgL_startz00_70) < ((long) 0)))
				{	/* Ieee/port.scm 1058 */
					return
						BGl_errorz00zz__errorz00(BGl_string2526z00zz__r4_ports_6_10_1z00,
						BGl_string2527z00zz__r4_ports_6_10_1z00, BgL_startz00_70);
				}
			else
				{	/* Ieee/port.scm 1058 */
					if (((long) CINT(BgL_startz00_70) > STRING_LENGTH(BgL_stringz00_69)))
						{	/* Ieee/port.scm 1060 */
							return
								BGl_errorz00zz__errorz00
								(BGl_string2526z00zz__r4_ports_6_10_1z00,
								BGl_string2528z00zz__r4_ports_6_10_1z00, BgL_startz00_70);
						}
					else
						{	/* Ieee/port.scm 1060 */
							if (((long) CINT(BgL_startz00_70) > (long) CINT(BgL_endz00_71)))
								{	/* Ieee/port.scm 1062 */
									return
										BGl_errorz00zz__errorz00
										(BGl_string2526z00zz__r4_ports_6_10_1z00,
										BGl_string2529z00zz__r4_ports_6_10_1z00, BgL_startz00_70);
								}
							else
								{	/* Ieee/port.scm 1062 */
									if (
										((long) CINT(BgL_endz00_71) >
											STRING_LENGTH(BgL_stringz00_69)))
										{	/* Ieee/port.scm 1064 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string2526z00zz__r4_ports_6_10_1z00,
												BGl_string2530z00zz__r4_ports_6_10_1z00, BgL_endz00_71);
										}
									else
										{	/* Ieee/port.scm 1064 */
											return
												bgl_open_input_substring(BgL_stringz00_69,
												(long) CINT(BgL_startz00_70),
												(long) CINT(BgL_endz00_71));
		}}}}}

	}



/* _open-input-string! */
	obj_t BGl__openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_env1225z00_78, obj_t BgL_opt1224z00_77)
	{
		{	/* Ieee/port.scm 1072 */
			{	/* Ieee/port.scm 1072 */
				obj_t BgL_stringz00_1696;

				BgL_stringz00_1696 = VECTOR_REF(BgL_opt1224z00_77, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1224z00_77))
					{
					case ((long) 1):

						{	/* Ieee/port.scm 1073 */
							long BgL_endz00_1701;

							{	/* Ieee/port.scm 1073 */
								obj_t BgL_stringz00_2525;

								if (STRINGP(BgL_stringz00_1696))
									{	/* Ieee/port.scm 1073 */
										BgL_stringz00_2525 = BgL_stringz00_1696;
									}
								else
									{
										obj_t BgL_auxz00_5160;

										BgL_auxz00_5160 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2452z00zz__r4_ports_6_10_1z00,
											BINT(((long) 47045)),
											BGl_string2531z00zz__r4_ports_6_10_1z00,
											BGl_string2454z00zz__r4_ports_6_10_1z00,
											BgL_stringz00_1696);
										FAILURE(BgL_auxz00_5160, BFALSE, BFALSE);
									}
								BgL_endz00_1701 = STRING_LENGTH(BgL_stringz00_2525);
							}
							{	/* Ieee/port.scm 1072 */

								{	/* Ieee/port.scm 1072 */
									obj_t BgL_auxz00_5165;

									if (STRINGP(BgL_stringz00_1696))
										{	/* Ieee/port.scm 1072 */
											BgL_auxz00_5165 = BgL_stringz00_1696;
										}
									else
										{
											obj_t BgL_auxz00_5168;

											BgL_auxz00_5168 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2452z00zz__r4_ports_6_10_1z00,
												BINT(((long) 46980)),
												BGl_string2531z00zz__r4_ports_6_10_1z00,
												BGl_string2454z00zz__r4_ports_6_10_1z00,
												BgL_stringz00_1696);
											FAILURE(BgL_auxz00_5168, BFALSE, BFALSE);
										}
									return
										BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
										(BgL_auxz00_5165, BINT(((long) 0)), BINT(BgL_endz00_1701));
						}}} break;
					case ((long) 2):

						{	/* Ieee/port.scm 1072 */
							obj_t BgL_startz00_1702;

							BgL_startz00_1702 = VECTOR_REF(BgL_opt1224z00_77, ((long) 1));
							{	/* Ieee/port.scm 1073 */
								long BgL_endz00_1703;

								{	/* Ieee/port.scm 1073 */
									obj_t BgL_stringz00_2527;

									if (STRINGP(BgL_stringz00_1696))
										{	/* Ieee/port.scm 1073 */
											BgL_stringz00_2527 = BgL_stringz00_1696;
										}
									else
										{
											obj_t BgL_auxz00_5178;

											BgL_auxz00_5178 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2452z00zz__r4_ports_6_10_1z00,
												BINT(((long) 47045)),
												BGl_string2531z00zz__r4_ports_6_10_1z00,
												BGl_string2454z00zz__r4_ports_6_10_1z00,
												BgL_stringz00_1696);
											FAILURE(BgL_auxz00_5178, BFALSE, BFALSE);
										}
									BgL_endz00_1703 = STRING_LENGTH(BgL_stringz00_2527);
								}
								{	/* Ieee/port.scm 1072 */

									{	/* Ieee/port.scm 1072 */
										obj_t BgL_auxz00_5183;

										if (STRINGP(BgL_stringz00_1696))
											{	/* Ieee/port.scm 1072 */
												BgL_auxz00_5183 = BgL_stringz00_1696;
											}
										else
											{
												obj_t BgL_auxz00_5186;

												BgL_auxz00_5186 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2452z00zz__r4_ports_6_10_1z00,
													BINT(((long) 46980)),
													BGl_string2531z00zz__r4_ports_6_10_1z00,
													BGl_string2454z00zz__r4_ports_6_10_1z00,
													BgL_stringz00_1696);
												FAILURE(BgL_auxz00_5186, BFALSE, BFALSE);
											}
										return
											BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
											(BgL_auxz00_5183, BgL_startz00_1702,
											BINT(BgL_endz00_1703));
									}
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/port.scm 1072 */
							obj_t BgL_startz00_1704;

							BgL_startz00_1704 = VECTOR_REF(BgL_opt1224z00_77, ((long) 1));
							{	/* Ieee/port.scm 1072 */
								obj_t BgL_endz00_1705;

								BgL_endz00_1705 = VECTOR_REF(BgL_opt1224z00_77, ((long) 2));
								{	/* Ieee/port.scm 1072 */

									{	/* Ieee/port.scm 1072 */
										obj_t BgL_auxz00_5194;

										if (STRINGP(BgL_stringz00_1696))
											{	/* Ieee/port.scm 1072 */
												BgL_auxz00_5194 = BgL_stringz00_1696;
											}
										else
											{
												obj_t BgL_auxz00_5197;

												BgL_auxz00_5197 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2452z00zz__r4_ports_6_10_1z00,
													BINT(((long) 46980)),
													BGl_string2531z00zz__r4_ports_6_10_1z00,
													BGl_string2454z00zz__r4_ports_6_10_1z00,
													BgL_stringz00_1696);
												FAILURE(BgL_auxz00_5197, BFALSE, BFALSE);
											}
										return
											BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
											(BgL_auxz00_5194, BgL_startz00_1704, BgL_endz00_1705);
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



/* open-input-string! */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_74, obj_t BgL_startz00_75, obj_t BgL_endz00_76)
	{
		{	/* Ieee/port.scm 1072 */
			if (((long) CINT(BgL_startz00_75) < ((long) 0)))
				{	/* Ieee/port.scm 1075 */
					return
						BGl_errorz00zz__errorz00(BGl_string2532z00zz__r4_ports_6_10_1z00,
						BGl_string2527z00zz__r4_ports_6_10_1z00, BgL_startz00_75);
				}
			else
				{	/* Ieee/port.scm 1075 */
					if (((long) CINT(BgL_startz00_75) > STRING_LENGTH(BgL_stringz00_74)))
						{	/* Ieee/port.scm 1077 */
							return
								BGl_errorz00zz__errorz00
								(BGl_string2532z00zz__r4_ports_6_10_1z00,
								BGl_string2528z00zz__r4_ports_6_10_1z00, BgL_startz00_75);
						}
					else
						{	/* Ieee/port.scm 1077 */
							if (((long) CINT(BgL_startz00_75) > (long) CINT(BgL_endz00_76)))
								{	/* Ieee/port.scm 1079 */
									return
										BGl_errorz00zz__errorz00
										(BGl_string2532z00zz__r4_ports_6_10_1z00,
										BGl_string2529z00zz__r4_ports_6_10_1z00, BgL_startz00_75);
								}
							else
								{	/* Ieee/port.scm 1079 */
									if (
										((long) CINT(BgL_endz00_76) >
											STRING_LENGTH(BgL_stringz00_74)))
										{	/* Ieee/port.scm 1081 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string2532z00zz__r4_ports_6_10_1z00,
												BGl_string2530z00zz__r4_ports_6_10_1z00, BgL_endz00_76);
										}
									else
										{	/* Ieee/port.scm 1081 */
											return
												bgl_open_input_substring_bang(BgL_stringz00_74,
												(long) CINT(BgL_startz00_75),
												(long) CINT(BgL_endz00_76));
		}}}}}

	}



/* _open-input-procedure */
	obj_t BGl__openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t
		BgL_env1229z00_82, obj_t BgL_opt1228z00_81)
	{
		{	/* Ieee/port.scm 1089 */
			{	/* Ieee/port.scm 1089 */
				obj_t BgL_g1230z00_1714;

				BgL_g1230z00_1714 = VECTOR_REF(BgL_opt1228z00_81, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1228z00_81))
					{
					case ((long) 1):

						{	/* Ieee/port.scm 1089 */

							{	/* Ieee/port.scm 1089 */
								obj_t BgL_procz00_2544;

								if (PROCEDUREP(BgL_g1230z00_1714))
									{	/* Ieee/port.scm 1089 */
										BgL_procz00_2544 = BgL_g1230z00_1714;
									}
								else
									{
										obj_t BgL_auxz00_5229;

										BgL_auxz00_5229 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2452z00zz__r4_ports_6_10_1z00,
											BINT(((long) 47773)),
											BGl_string2533z00zz__r4_ports_6_10_1z00,
											BGl_string2455z00zz__r4_ports_6_10_1z00,
											BgL_g1230z00_1714);
										FAILURE(BgL_auxz00_5229, BFALSE, BFALSE);
									}
								return
									bgl_open_input_procedure(BgL_procz00_2544,
									BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
									(BGl_string2473z00zz__r4_ports_6_10_1z00, BTRUE,
										(int) (((long) 1024))));
						}} break;
					case ((long) 2):

						{	/* Ieee/port.scm 1089 */
							obj_t BgL_bufinfoz00_1719;

							BgL_bufinfoz00_1719 = VECTOR_REF(BgL_opt1228z00_81, ((long) 1));
							{	/* Ieee/port.scm 1089 */

								{	/* Ieee/port.scm 1089 */
									obj_t BgL_procz00_2546;

									if (PROCEDUREP(BgL_g1230z00_1714))
										{	/* Ieee/port.scm 1089 */
											BgL_procz00_2546 = BgL_g1230z00_1714;
										}
									else
										{
											obj_t BgL_auxz00_5239;

											BgL_auxz00_5239 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2452z00zz__r4_ports_6_10_1z00,
												BINT(((long) 47773)),
												BGl_string2533z00zz__r4_ports_6_10_1z00,
												BGl_string2455z00zz__r4_ports_6_10_1z00,
												BgL_g1230z00_1714);
											FAILURE(BgL_auxz00_5239, BFALSE, BFALSE);
										}
									return
										bgl_open_input_procedure(BgL_procz00_2546,
										BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
										(BGl_string2473z00zz__r4_ports_6_10_1z00,
											BgL_bufinfoz00_1719, (int) (((long) 1024))));
						}}} break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* open-input-procedure */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t BgL_procz00_79,
		obj_t BgL_bufinfoz00_80)
	{
		{	/* Ieee/port.scm 1089 */
			{	/* Ieee/port.scm 1090 */
				obj_t BgL_bufz00_2548;

				{	/* Ieee/port.scm 1090 */
					obj_t BgL_res1985z00_2558;

					if ((BgL_bufinfoz00_80 == BTRUE))
						{	/* Ieee/port.scm 933 */
							BgL_res1985z00_2558 = make_string_sans_fill(((long) 1024));
						}
					else
						{	/* Ieee/port.scm 933 */
							if ((BgL_bufinfoz00_80 == BFALSE))
								{	/* Ieee/port.scm 935 */
									BgL_res1985z00_2558 = make_string_sans_fill(((long) 2));
								}
							else
								{	/* Ieee/port.scm 935 */
									if (STRINGP(BgL_bufinfoz00_80))
										{	/* Ieee/port.scm 937 */
											BgL_res1985z00_2558 = BgL_bufinfoz00_80;
										}
									else
										{	/* Ieee/port.scm 937 */
											if (INTEGERP(BgL_bufinfoz00_80))
												{	/* Ieee/port.scm 939 */
													if (((long) CINT(BgL_bufinfoz00_80) >= ((long) 2)))
														{	/* Ieee/port.scm 940 */
															BgL_res1985z00_2558 =
																make_string_sans_fill(
																(long) CINT(BgL_bufinfoz00_80));
														}
													else
														{	/* Ieee/port.scm 940 */
															BgL_res1985z00_2558 =
																make_string_sans_fill(((long) 2));
												}}
											else
												{	/* Ieee/port.scm 939 */
													BgL_res1985z00_2558 =
														BGl_errorz00zz__errorz00
														(BGl_string2473z00zz__r4_ports_6_10_1z00,
														BGl_string2494z00zz__r4_ports_6_10_1z00,
														BgL_bufinfoz00_80);
												}
										}
								}
						}
					BgL_bufz00_2548 = BgL_res1985z00_2558;
				}
				return bgl_open_input_procedure(BgL_procz00_79, BgL_bufz00_2548);
			}
		}

	}



/* _open-input-gzip-port */
	obj_t BGl__openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00(obj_t
		BgL_env1234z00_86, obj_t BgL_opt1233z00_85)
	{
		{	/* Ieee/port.scm 1096 */
			{	/* Ieee/port.scm 1096 */
				obj_t BgL_g1235z00_1721;

				BgL_g1235z00_1721 = VECTOR_REF(BgL_opt1233z00_85, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1233z00_85))
					{
					case ((long) 1):

						{	/* Ieee/port.scm 1096 */

							{	/* Ieee/port.scm 1096 */
								obj_t BgL_inz00_2559;

								if (INPUT_PORTP(BgL_g1235z00_1721))
									{	/* Ieee/port.scm 1096 */
										BgL_inz00_2559 = BgL_g1235z00_1721;
									}
								else
									{
										obj_t BgL_auxz00_5269;

										BgL_auxz00_5269 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2452z00zz__r4_ports_6_10_1z00,
											BINT(((long) 48167)),
											BGl_string2534z00zz__r4_ports_6_10_1z00,
											BGl_string2467z00zz__r4_ports_6_10_1z00,
											BgL_g1235z00_1721);
										FAILURE(BgL_auxz00_5269, BFALSE, BFALSE);
									}
								return
									BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(BgL_inz00_2559,
									BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
									(BGl_string2535z00zz__r4_ports_6_10_1z00, BTRUE,
										(int) (default_io_bufsiz)));
						}} break;
					case ((long) 2):

						{	/* Ieee/port.scm 1096 */
							obj_t BgL_bufinfoz00_1726;

							BgL_bufinfoz00_1726 = VECTOR_REF(BgL_opt1233z00_85, ((long) 1));
							{	/* Ieee/port.scm 1096 */

								{	/* Ieee/port.scm 1096 */
									obj_t BgL_inz00_2561;

									if (INPUT_PORTP(BgL_g1235z00_1721))
										{	/* Ieee/port.scm 1096 */
											BgL_inz00_2561 = BgL_g1235z00_1721;
										}
									else
										{
											obj_t BgL_auxz00_5279;

											BgL_auxz00_5279 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2452z00zz__r4_ports_6_10_1z00,
												BINT(((long) 48167)),
												BGl_string2534z00zz__r4_ports_6_10_1z00,
												BGl_string2467z00zz__r4_ports_6_10_1z00,
												BgL_g1235z00_1721);
											FAILURE(BgL_auxz00_5279, BFALSE, BFALSE);
										}
									return
										BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7
										(BgL_inz00_2561,
										BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
										(BGl_string2535z00zz__r4_ports_6_10_1z00,
											BgL_bufinfoz00_1726, (int) (default_io_bufsiz)));
						}}} break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* open-input-gzip-port */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00(obj_t
		BgL_inz00_83, obj_t BgL_bufinfoz00_84)
	{
		{	/* Ieee/port.scm 1096 */
			{	/* Ieee/port.scm 1097 */
				obj_t BgL_bufz00_2563;

				{	/* Ieee/port.scm 1097 */
					obj_t BgL_res1986z00_2574;

					{	/* Ieee/port.scm 1097 */
						int BgL_defsiza7za7_2564;

						BgL_defsiza7za7_2564 = (int) (default_io_bufsiz);
						if ((BgL_bufinfoz00_84 == BTRUE))
							{	/* Ieee/port.scm 933 */
								BgL_res1986z00_2574 =
									make_string_sans_fill((long) (BgL_defsiza7za7_2564));
							}
						else
							{	/* Ieee/port.scm 933 */
								if ((BgL_bufinfoz00_84 == BFALSE))
									{	/* Ieee/port.scm 935 */
										BgL_res1986z00_2574 = make_string_sans_fill(((long) 2));
									}
								else
									{	/* Ieee/port.scm 935 */
										if (STRINGP(BgL_bufinfoz00_84))
											{	/* Ieee/port.scm 937 */
												BgL_res1986z00_2574 = BgL_bufinfoz00_84;
											}
										else
											{	/* Ieee/port.scm 937 */
												if (INTEGERP(BgL_bufinfoz00_84))
													{	/* Ieee/port.scm 939 */
														if (((long) CINT(BgL_bufinfoz00_84) >= ((long) 2)))
															{	/* Ieee/port.scm 940 */
																BgL_res1986z00_2574 =
																	make_string_sans_fill(
																	(long) CINT(BgL_bufinfoz00_84));
															}
														else
															{	/* Ieee/port.scm 940 */
																BgL_res1986z00_2574 =
																	make_string_sans_fill(((long) 2));
													}}
												else
													{	/* Ieee/port.scm 939 */
														BgL_res1986z00_2574 =
															BGl_errorz00zz__errorz00
															(BGl_string2535z00zz__r4_ports_6_10_1z00,
															BGl_string2494z00zz__r4_ports_6_10_1z00,
															BgL_bufinfoz00_84);
													}
											}
									}
							}
					}
					BgL_bufz00_2563 = BgL_res1986z00_2574;
				}
				return
					BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(BgL_inz00_83,
					BgL_bufz00_2563);
			}
		}

	}



/* open-input-c-string */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(char
		*BgL_stringz00_87)
	{
		{	/* Ieee/port.scm 1103 */
			return bgl_open_input_c_string(BgL_stringz00_87);
		}

	}



/* &open-input-c-string */
	obj_t BGl_z62openzd2inputzd2czd2stringzb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3301, obj_t BgL_stringz00_3302)
	{
		{	/* Ieee/port.scm 1103 */
			{	/* Ieee/port.scm 1104 */
				char *BgL_auxz00_5309;

				{	/* Ieee/port.scm 1104 */
					obj_t BgL_tmpz00_5310;

					if (STRINGP(BgL_stringz00_3302))
						{	/* Ieee/port.scm 1104 */
							BgL_tmpz00_5310 = BgL_stringz00_3302;
						}
					else
						{
							obj_t BgL_auxz00_5313;

							BgL_auxz00_5313 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 48625)),
								BGl_string2536z00zz__r4_ports_6_10_1z00,
								BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_stringz00_3302);
							FAILURE(BgL_auxz00_5313, BFALSE, BFALSE);
						}
					BgL_auxz00_5309 = BSTRING_TO_STRING(BgL_tmpz00_5310);
				}
				return
					BGl_openzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_5309);
			}
		}

	}



/* reopen-input-c-string */
	BGL_EXPORTED_DEF obj_t
		BGl_reopenzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_88, char *BgL_stringz00_89)
	{
		{	/* Ieee/port.scm 1109 */
			return bgl_reopen_input_c_string(BgL_portz00_88, BgL_stringz00_89);
		}

	}



/* &reopen-input-c-string */
	obj_t BGl_z62reopenzd2inputzd2czd2stringzb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3303, obj_t BgL_portz00_3304, obj_t BgL_stringz00_3305)
	{
		{	/* Ieee/port.scm 1109 */
			{	/* Ieee/port.scm 1110 */
				char *BgL_auxz00_5327;
				obj_t BgL_auxz00_5320;

				{	/* Ieee/port.scm 1110 */
					obj_t BgL_tmpz00_5328;

					if (STRINGP(BgL_stringz00_3305))
						{	/* Ieee/port.scm 1110 */
							BgL_tmpz00_5328 = BgL_stringz00_3305;
						}
					else
						{
							obj_t BgL_auxz00_5331;

							BgL_auxz00_5331 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 48945)),
								BGl_string2537z00zz__r4_ports_6_10_1z00,
								BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_stringz00_3305);
							FAILURE(BgL_auxz00_5331, BFALSE, BFALSE);
						}
					BgL_auxz00_5327 = BSTRING_TO_STRING(BgL_tmpz00_5328);
				}
				if (INPUT_PORTP(BgL_portz00_3304))
					{	/* Ieee/port.scm 1110 */
						BgL_auxz00_5320 = BgL_portz00_3304;
					}
				else
					{
						obj_t BgL_auxz00_5323;

						BgL_auxz00_5323 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 48945)),
							BGl_string2537z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3304);
						FAILURE(BgL_auxz00_5323, BFALSE, BFALSE);
					}
				return
					BGl_reopenzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_5320, BgL_auxz00_5327);
			}
		}

	}



/* input-port-timeout-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_90, long BgL_timeoutz00_91)
	{
		{	/* Ieee/port.scm 1115 */
			return
				BBOOL(bgl_input_port_timeout_set(BgL_portz00_90, BgL_timeoutz00_91));
		}

	}



/* &input-port-timeout-set! */
	obj_t BGl_z62inputzd2portzd2timeoutzd2setz12za2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3306, obj_t BgL_portz00_3307, obj_t BgL_timeoutz00_3308)
	{
		{	/* Ieee/port.scm 1115 */
			{	/* Ieee/port.scm 1116 */
				long BgL_auxz00_5346;
				obj_t BgL_auxz00_5339;

				{	/* Ieee/port.scm 1116 */
					obj_t BgL_tmpz00_5347;

					if (INTEGERP(BgL_timeoutz00_3308))
						{	/* Ieee/port.scm 1116 */
							BgL_tmpz00_5347 = BgL_timeoutz00_3308;
						}
					else
						{
							obj_t BgL_auxz00_5350;

							BgL_auxz00_5350 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 49281)),
								BGl_string2538z00zz__r4_ports_6_10_1z00,
								BGl_string2496z00zz__r4_ports_6_10_1z00, BgL_timeoutz00_3308);
							FAILURE(BgL_auxz00_5350, BFALSE, BFALSE);
						}
					BgL_auxz00_5346 = (long) CINT(BgL_tmpz00_5347);
				}
				if (INPUT_PORTP(BgL_portz00_3307))
					{	/* Ieee/port.scm 1116 */
						BgL_auxz00_5339 = BgL_portz00_3307;
					}
				else
					{
						obj_t BgL_auxz00_5342;

						BgL_auxz00_5342 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 49281)),
							BGl_string2538z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3307);
						FAILURE(BgL_auxz00_5342, BFALSE, BFALSE);
					}
				return
					BGl_inputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00
					(BgL_auxz00_5339, BgL_auxz00_5346);
			}
		}

	}



/* _open-output-file */
	obj_t BGl__openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t
		BgL_env1239z00_95, obj_t BgL_opt1238z00_94)
	{
		{	/* Ieee/port.scm 1121 */
			{	/* Ieee/port.scm 1121 */
				obj_t BgL_g1240z00_1728;

				BgL_g1240z00_1728 = VECTOR_REF(BgL_opt1238z00_94, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1238z00_94))
					{
					case ((long) 1):

						{	/* Ieee/port.scm 1121 */

							{	/* Ieee/port.scm 1121 */
								obj_t BgL_stringz00_2575;

								if (STRINGP(BgL_g1240z00_1728))
									{	/* Ieee/port.scm 1121 */
										BgL_stringz00_2575 = BgL_g1240z00_1728;
									}
								else
									{
										obj_t BgL_auxz00_5359;

										BgL_auxz00_5359 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2452z00zz__r4_ports_6_10_1z00,
											BINT(((long) 49545)),
											BGl_string2539z00zz__r4_ports_6_10_1z00,
											BGl_string2454z00zz__r4_ports_6_10_1z00,
											BgL_g1240z00_1728);
										FAILURE(BgL_auxz00_5359, BFALSE, BFALSE);
									}
								return
									bgl_open_output_file(BgL_stringz00_2575,
									BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
									(BGl_string2457z00zz__r4_ports_6_10_1z00, BTRUE,
										(int) (default_io_bufsiz)));
						}} break;
					case ((long) 2):

						{	/* Ieee/port.scm 1121 */
							obj_t BgL_bufinfoz00_1733;

							BgL_bufinfoz00_1733 = VECTOR_REF(BgL_opt1238z00_94, ((long) 1));
							{	/* Ieee/port.scm 1121 */

								{	/* Ieee/port.scm 1121 */
									obj_t BgL_stringz00_2577;

									if (STRINGP(BgL_g1240z00_1728))
										{	/* Ieee/port.scm 1121 */
											BgL_stringz00_2577 = BgL_g1240z00_1728;
										}
									else
										{
											obj_t BgL_auxz00_5369;

											BgL_auxz00_5369 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2452z00zz__r4_ports_6_10_1z00,
												BINT(((long) 49545)),
												BGl_string2539z00zz__r4_ports_6_10_1z00,
												BGl_string2454z00zz__r4_ports_6_10_1z00,
												BgL_g1240z00_1728);
											FAILURE(BgL_auxz00_5369, BFALSE, BFALSE);
										}
									return
										bgl_open_output_file(BgL_stringz00_2577,
										BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
										(BGl_string2457z00zz__r4_ports_6_10_1z00,
											BgL_bufinfoz00_1733, (int) (default_io_bufsiz)));
						}}} break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* open-output-file */
	BGL_EXPORTED_DEF obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_92, obj_t BgL_bufinfoz00_93)
	{
		{	/* Ieee/port.scm 1121 */
			{	/* Ieee/port.scm 1122 */
				obj_t BgL_bufz00_2579;

				{	/* Ieee/port.scm 1122 */
					obj_t BgL_res1987z00_2590;

					{	/* Ieee/port.scm 1122 */
						int BgL_defsiza7za7_2580;

						BgL_defsiza7za7_2580 = (int) (default_io_bufsiz);
						if ((BgL_bufinfoz00_93 == BTRUE))
							{	/* Ieee/port.scm 933 */
								BgL_res1987z00_2590 =
									make_string_sans_fill((long) (BgL_defsiza7za7_2580));
							}
						else
							{	/* Ieee/port.scm 933 */
								if ((BgL_bufinfoz00_93 == BFALSE))
									{	/* Ieee/port.scm 935 */
										BgL_res1987z00_2590 = make_string_sans_fill(((long) 2));
									}
								else
									{	/* Ieee/port.scm 935 */
										if (STRINGP(BgL_bufinfoz00_93))
											{	/* Ieee/port.scm 937 */
												BgL_res1987z00_2590 = BgL_bufinfoz00_93;
											}
										else
											{	/* Ieee/port.scm 937 */
												if (INTEGERP(BgL_bufinfoz00_93))
													{	/* Ieee/port.scm 939 */
														if (((long) CINT(BgL_bufinfoz00_93) >= ((long) 2)))
															{	/* Ieee/port.scm 940 */
																BgL_res1987z00_2590 =
																	make_string_sans_fill(
																	(long) CINT(BgL_bufinfoz00_93));
															}
														else
															{	/* Ieee/port.scm 940 */
																BgL_res1987z00_2590 =
																	make_string_sans_fill(((long) 2));
													}}
												else
													{	/* Ieee/port.scm 939 */
														BgL_res1987z00_2590 =
															BGl_errorz00zz__errorz00
															(BGl_string2457z00zz__r4_ports_6_10_1z00,
															BGl_string2494z00zz__r4_ports_6_10_1z00,
															BgL_bufinfoz00_93);
													}
											}
									}
							}
					}
					BgL_bufz00_2579 = BgL_res1987z00_2590;
				}
				return bgl_open_output_file(BgL_stringz00_92, BgL_bufz00_2579);
			}
		}

	}



/* _append-output-file */
	obj_t BGl__appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t
		BgL_env1244z00_99, obj_t BgL_opt1243z00_98)
	{
		{	/* Ieee/port.scm 1128 */
			{	/* Ieee/port.scm 1128 */
				obj_t BgL_g1245z00_1735;

				BgL_g1245z00_1735 = VECTOR_REF(BgL_opt1243z00_98, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1243z00_98))
					{
					case ((long) 1):

						{	/* Ieee/port.scm 1128 */

							{	/* Ieee/port.scm 1128 */
								obj_t BgL_stringz00_2591;

								if (STRINGP(BgL_g1245z00_1735))
									{	/* Ieee/port.scm 1128 */
										BgL_stringz00_2591 = BgL_g1245z00_1735;
									}
								else
									{
										obj_t BgL_auxz00_5401;

										BgL_auxz00_5401 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2452z00zz__r4_ports_6_10_1z00,
											BINT(((long) 49946)),
											BGl_string2540z00zz__r4_ports_6_10_1z00,
											BGl_string2454z00zz__r4_ports_6_10_1z00,
											BgL_g1245z00_1735);
										FAILURE(BgL_auxz00_5401, BFALSE, BFALSE);
									}
								return
									bgl_append_output_file(BgL_stringz00_2591,
									BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
									(BGl_string2460z00zz__r4_ports_6_10_1z00, BTRUE,
										(int) (default_io_bufsiz)));
						}} break;
					case ((long) 2):

						{	/* Ieee/port.scm 1128 */
							obj_t BgL_bufinfoz00_1740;

							BgL_bufinfoz00_1740 = VECTOR_REF(BgL_opt1243z00_98, ((long) 1));
							{	/* Ieee/port.scm 1128 */

								{	/* Ieee/port.scm 1128 */
									obj_t BgL_stringz00_2593;

									if (STRINGP(BgL_g1245z00_1735))
										{	/* Ieee/port.scm 1128 */
											BgL_stringz00_2593 = BgL_g1245z00_1735;
										}
									else
										{
											obj_t BgL_auxz00_5411;

											BgL_auxz00_5411 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2452z00zz__r4_ports_6_10_1z00,
												BINT(((long) 49946)),
												BGl_string2540z00zz__r4_ports_6_10_1z00,
												BGl_string2454z00zz__r4_ports_6_10_1z00,
												BgL_g1245z00_1735);
											FAILURE(BgL_auxz00_5411, BFALSE, BFALSE);
										}
									return
										bgl_append_output_file(BgL_stringz00_2593,
										BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
										(BGl_string2460z00zz__r4_ports_6_10_1z00,
											BgL_bufinfoz00_1740, (int) (default_io_bufsiz)));
						}}} break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* append-output-file */
	BGL_EXPORTED_DEF obj_t
		BGl_appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_96,
		obj_t BgL_bufinfoz00_97)
	{
		{	/* Ieee/port.scm 1128 */
			{	/* Ieee/port.scm 1129 */
				obj_t BgL_bufz00_2595;

				{	/* Ieee/port.scm 1129 */
					obj_t BgL_res1988z00_2606;

					{	/* Ieee/port.scm 1129 */
						int BgL_defsiza7za7_2596;

						BgL_defsiza7za7_2596 = (int) (default_io_bufsiz);
						if ((BgL_bufinfoz00_97 == BTRUE))
							{	/* Ieee/port.scm 933 */
								BgL_res1988z00_2606 =
									make_string_sans_fill((long) (BgL_defsiza7za7_2596));
							}
						else
							{	/* Ieee/port.scm 933 */
								if ((BgL_bufinfoz00_97 == BFALSE))
									{	/* Ieee/port.scm 935 */
										BgL_res1988z00_2606 = make_string_sans_fill(((long) 2));
									}
								else
									{	/* Ieee/port.scm 935 */
										if (STRINGP(BgL_bufinfoz00_97))
											{	/* Ieee/port.scm 937 */
												BgL_res1988z00_2606 = BgL_bufinfoz00_97;
											}
										else
											{	/* Ieee/port.scm 937 */
												if (INTEGERP(BgL_bufinfoz00_97))
													{	/* Ieee/port.scm 939 */
														if (((long) CINT(BgL_bufinfoz00_97) >= ((long) 2)))
															{	/* Ieee/port.scm 940 */
																BgL_res1988z00_2606 =
																	make_string_sans_fill(
																	(long) CINT(BgL_bufinfoz00_97));
															}
														else
															{	/* Ieee/port.scm 940 */
																BgL_res1988z00_2606 =
																	make_string_sans_fill(((long) 2));
													}}
												else
													{	/* Ieee/port.scm 939 */
														BgL_res1988z00_2606 =
															BGl_errorz00zz__errorz00
															(BGl_string2460z00zz__r4_ports_6_10_1z00,
															BGl_string2494z00zz__r4_ports_6_10_1z00,
															BgL_bufinfoz00_97);
													}
											}
									}
							}
					}
					BgL_bufz00_2595 = BgL_res1988z00_2606;
				}
				return bgl_append_output_file(BgL_stringz00_96, BgL_bufz00_2595);
			}
		}

	}



/* _open-output-string */
	obj_t BGl__openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t
		BgL_env1249z00_102, obj_t BgL_opt1248z00_101)
	{
		{	/* Ieee/port.scm 1135 */
			{	/* Ieee/port.scm 1135 */

				switch (VECTOR_LENGTH(BgL_opt1248z00_101))
					{
					case ((long) 0):

						{	/* Ieee/port.scm 1135 */

							return
								bgl_open_output_string
								(BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
								(BGl_string2457z00zz__r4_ports_6_10_1z00, BTRUE,
									(int) (((long) 128))));
						} break;
					case ((long) 1):

						{	/* Ieee/port.scm 1135 */
							obj_t BgL_bufinfoz00_1746;

							BgL_bufinfoz00_1746 = VECTOR_REF(BgL_opt1248z00_101, ((long) 0));
							{	/* Ieee/port.scm 1135 */

								return
									bgl_open_output_string
									(BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
									(BGl_string2457z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_1746,
										(int) (((long) 128))));
						}} break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* open-output-string */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t
		BgL_bufinfoz00_100)
	{
		{	/* Ieee/port.scm 1135 */
			{	/* Ieee/port.scm 1136 */
				obj_t BgL_bufz00_2611;

				{	/* Ieee/port.scm 1136 */
					obj_t BgL_res1991z00_2621;

					if ((BgL_bufinfoz00_100 == BTRUE))
						{	/* Ieee/port.scm 933 */
							BgL_res1991z00_2621 = make_string_sans_fill(((long) 128));
						}
					else
						{	/* Ieee/port.scm 933 */
							if ((BgL_bufinfoz00_100 == BFALSE))
								{	/* Ieee/port.scm 935 */
									BgL_res1991z00_2621 = make_string_sans_fill(((long) 2));
								}
							else
								{	/* Ieee/port.scm 935 */
									if (STRINGP(BgL_bufinfoz00_100))
										{	/* Ieee/port.scm 937 */
											BgL_res1991z00_2621 = BgL_bufinfoz00_100;
										}
									else
										{	/* Ieee/port.scm 937 */
											if (INTEGERP(BgL_bufinfoz00_100))
												{	/* Ieee/port.scm 939 */
													if (((long) CINT(BgL_bufinfoz00_100) >= ((long) 2)))
														{	/* Ieee/port.scm 940 */
															BgL_res1991z00_2621 =
																make_string_sans_fill(
																(long) CINT(BgL_bufinfoz00_100));
														}
													else
														{	/* Ieee/port.scm 940 */
															BgL_res1991z00_2621 =
																make_string_sans_fill(((long) 2));
												}}
											else
												{	/* Ieee/port.scm 939 */
													BgL_res1991z00_2621 =
														BGl_errorz00zz__errorz00
														(BGl_string2457z00zz__r4_ports_6_10_1z00,
														BGl_string2494z00zz__r4_ports_6_10_1z00,
														BgL_bufinfoz00_100);
												}
										}
								}
						}
					BgL_bufz00_2611 = BgL_res1991z00_2621;
				}
				return bgl_open_output_string(BgL_bufz00_2611);
			}
		}

	}



/* _open-output-procedure */
	obj_t BGl__openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t
		BgL_env1253z00_108, obj_t BgL_opt1252z00_107)
	{
		{	/* Ieee/port.scm 1142 */
			{	/* Ieee/port.scm 1142 */
				obj_t BgL_g1254z00_1748;

				BgL_g1254z00_1748 = VECTOR_REF(BgL_opt1252z00_107, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1252z00_107))
					{
					case ((long) 1):

						{	/* Ieee/port.scm 1142 */

							{	/* Ieee/port.scm 1142 */
								obj_t BgL_auxz00_5468;

								if (PROCEDUREP(BgL_g1254z00_1748))
									{	/* Ieee/port.scm 1142 */
										BgL_auxz00_5468 = BgL_g1254z00_1748;
									}
								else
									{
										obj_t BgL_auxz00_5471;

										BgL_auxz00_5471 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2452z00zz__r4_ports_6_10_1z00,
											BINT(((long) 50728)),
											BGl_string2543z00zz__r4_ports_6_10_1z00,
											BGl_string2455z00zz__r4_ports_6_10_1z00,
											BgL_g1254z00_1748);
										FAILURE(BgL_auxz00_5471, BFALSE, BFALSE);
									}
								return
									BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00
									(BgL_auxz00_5468, BGl_proc2541z00zz__r4_ports_6_10_1z00,
									BTRUE, BGl_proc2542z00zz__r4_ports_6_10_1z00);
							}
						}
						break;
					case ((long) 2):

						{	/* Ieee/port.scm 1142 */
							obj_t BgL_flushz00_1759;

							BgL_flushz00_1759 = VECTOR_REF(BgL_opt1252z00_107, ((long) 1));
							{	/* Ieee/port.scm 1142 */

								{	/* Ieee/port.scm 1142 */
									obj_t BgL_auxz00_5484;
									obj_t BgL_auxz00_5477;

									if (PROCEDUREP(BgL_flushz00_1759))
										{	/* Ieee/port.scm 1142 */
											BgL_auxz00_5484 = BgL_flushz00_1759;
										}
									else
										{
											obj_t BgL_auxz00_5487;

											BgL_auxz00_5487 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2452z00zz__r4_ports_6_10_1z00,
												BINT(((long) 50728)),
												BGl_string2543z00zz__r4_ports_6_10_1z00,
												BGl_string2455z00zz__r4_ports_6_10_1z00,
												BgL_flushz00_1759);
											FAILURE(BgL_auxz00_5487, BFALSE, BFALSE);
										}
									if (PROCEDUREP(BgL_g1254z00_1748))
										{	/* Ieee/port.scm 1142 */
											BgL_auxz00_5477 = BgL_g1254z00_1748;
										}
									else
										{
											obj_t BgL_auxz00_5480;

											BgL_auxz00_5480 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2452z00zz__r4_ports_6_10_1z00,
												BINT(((long) 50728)),
												BGl_string2543z00zz__r4_ports_6_10_1z00,
												BGl_string2455z00zz__r4_ports_6_10_1z00,
												BgL_g1254z00_1748);
											FAILURE(BgL_auxz00_5480, BFALSE, BFALSE);
										}
									return
										BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00
										(BgL_auxz00_5477, BgL_auxz00_5484, BTRUE,
										BGl_proc2544z00zz__r4_ports_6_10_1z00);
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/port.scm 1142 */
							obj_t BgL_flushz00_1764;

							BgL_flushz00_1764 = VECTOR_REF(BgL_opt1252z00_107, ((long) 1));
							{	/* Ieee/port.scm 1142 */
								obj_t BgL_bufinfoz00_1765;

								BgL_bufinfoz00_1765 =
									VECTOR_REF(BgL_opt1252z00_107, ((long) 2));
								{	/* Ieee/port.scm 1142 */

									{	/* Ieee/port.scm 1142 */
										obj_t BgL_auxz00_5501;
										obj_t BgL_auxz00_5494;

										if (PROCEDUREP(BgL_flushz00_1764))
											{	/* Ieee/port.scm 1142 */
												BgL_auxz00_5501 = BgL_flushz00_1764;
											}
										else
											{
												obj_t BgL_auxz00_5504;

												BgL_auxz00_5504 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2452z00zz__r4_ports_6_10_1z00,
													BINT(((long) 50728)),
													BGl_string2543z00zz__r4_ports_6_10_1z00,
													BGl_string2455z00zz__r4_ports_6_10_1z00,
													BgL_flushz00_1764);
												FAILURE(BgL_auxz00_5504, BFALSE, BFALSE);
											}
										if (PROCEDUREP(BgL_g1254z00_1748))
											{	/* Ieee/port.scm 1142 */
												BgL_auxz00_5494 = BgL_g1254z00_1748;
											}
										else
											{
												obj_t BgL_auxz00_5497;

												BgL_auxz00_5497 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2452z00zz__r4_ports_6_10_1z00,
													BINT(((long) 50728)),
													BGl_string2543z00zz__r4_ports_6_10_1z00,
													BGl_string2455z00zz__r4_ports_6_10_1z00,
													BgL_g1254z00_1748);
												FAILURE(BgL_auxz00_5497, BFALSE, BFALSE);
											}
										return
											BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00
											(BgL_auxz00_5494, BgL_auxz00_5501, BgL_bufinfoz00_1765,
											BGl_proc2545z00zz__r4_ports_6_10_1z00);
									}
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/port.scm 1142 */
							obj_t BgL_flushz00_1769;

							BgL_flushz00_1769 = VECTOR_REF(BgL_opt1252z00_107, ((long) 1));
							{	/* Ieee/port.scm 1142 */
								obj_t BgL_bufinfoz00_1770;

								BgL_bufinfoz00_1770 =
									VECTOR_REF(BgL_opt1252z00_107, ((long) 2));
								{	/* Ieee/port.scm 1142 */
									obj_t BgL_closez00_1771;

									BgL_closez00_1771 =
										VECTOR_REF(BgL_opt1252z00_107, ((long) 3));
									{	/* Ieee/port.scm 1142 */

										{	/* Ieee/port.scm 1142 */
											obj_t BgL_auxz00_5526;
											obj_t BgL_auxz00_5519;
											obj_t BgL_auxz00_5512;

											if (PROCEDUREP(BgL_closez00_1771))
												{	/* Ieee/port.scm 1142 */
													BgL_auxz00_5526 = BgL_closez00_1771;
												}
											else
												{
													obj_t BgL_auxz00_5529;

													BgL_auxz00_5529 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2452z00zz__r4_ports_6_10_1z00,
														BINT(((long) 50728)),
														BGl_string2543z00zz__r4_ports_6_10_1z00,
														BGl_string2455z00zz__r4_ports_6_10_1z00,
														BgL_closez00_1771);
													FAILURE(BgL_auxz00_5529, BFALSE, BFALSE);
												}
											if (PROCEDUREP(BgL_flushz00_1769))
												{	/* Ieee/port.scm 1142 */
													BgL_auxz00_5519 = BgL_flushz00_1769;
												}
											else
												{
													obj_t BgL_auxz00_5522;

													BgL_auxz00_5522 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2452z00zz__r4_ports_6_10_1z00,
														BINT(((long) 50728)),
														BGl_string2543z00zz__r4_ports_6_10_1z00,
														BGl_string2455z00zz__r4_ports_6_10_1z00,
														BgL_flushz00_1769);
													FAILURE(BgL_auxz00_5522, BFALSE, BFALSE);
												}
											if (PROCEDUREP(BgL_g1254z00_1748))
												{	/* Ieee/port.scm 1142 */
													BgL_auxz00_5512 = BgL_g1254z00_1748;
												}
											else
												{
													obj_t BgL_auxz00_5515;

													BgL_auxz00_5515 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2452z00zz__r4_ports_6_10_1z00,
														BINT(((long) 50728)),
														BGl_string2543z00zz__r4_ports_6_10_1z00,
														BGl_string2455z00zz__r4_ports_6_10_1z00,
														BgL_g1254z00_1748);
													FAILURE(BgL_auxz00_5515, BFALSE, BFALSE);
												}
											return
												BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00
												(BgL_auxz00_5512, BgL_auxz00_5519, BgL_bufinfoz00_1770,
												BgL_auxz00_5526);
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



/* &close2108 */
	obj_t BGl_z62close2108z62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3313)
	{
		{	/* Ieee/port.scm 1146 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &close2109 */
	obj_t BGl_z62close2109z62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3314)
	{
		{	/* Ieee/port.scm 1146 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &close2110 */
	obj_t BGl_z62close2110z62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3315)
	{
		{	/* Ieee/port.scm 1146 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &flush2111 */
	obj_t BGl_z62flush2111z62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3316)
	{
		{	/* Ieee/port.scm 1144 */
			return BBOOL(((bool_t) 0));
		}

	}



/* open-output-procedure */
	BGL_EXPORTED_DEF obj_t
		BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t
		BgL_procz00_103, obj_t BgL_flushz00_104, obj_t BgL_bufinfoz00_105,
		obj_t BgL_closez00_106)
	{
		{	/* Ieee/port.scm 1142 */
			if (PROCEDURE_CORRECT_ARITYP(BgL_procz00_103, (int) (((long) 1))))
				{	/* Ieee/port.scm 1153 */
					bool_t BgL_test3088z00_5543;

					if (PROCEDURE_CORRECT_ARITYP(BgL_flushz00_104, (int) (((long) 0))))
						{	/* Ieee/port.scm 1154 */
							BgL_test3088z00_5543 = ((bool_t) 0);
						}
					else
						{	/* Ieee/port.scm 1154 */
							BgL_test3088z00_5543 = ((bool_t) 1);
						}
					if (BgL_test3088z00_5543)
						{	/* Ieee/port.scm 1153 */
							return
								bgl_system_failure(BGL_IO_PORT_ERROR,
								BGl_string2546z00zz__r4_ports_6_10_1z00,
								BGl_string2547z00zz__r4_ports_6_10_1z00, BgL_flushz00_104);
						}
					else
						{	/* Ieee/port.scm 1159 */
							bool_t BgL_test3090z00_5548;

							if (PROCEDURE_CORRECT_ARITYP(BgL_closez00_106,
									(int) (((long) 0))))
								{	/* Ieee/port.scm 1160 */
									BgL_test3090z00_5548 = ((bool_t) 0);
								}
							else
								{	/* Ieee/port.scm 1160 */
									BgL_test3090z00_5548 = ((bool_t) 1);
								}
							if (BgL_test3090z00_5548)
								{	/* Ieee/port.scm 1159 */
									return
										bgl_system_failure(BGL_IO_PORT_ERROR,
										BGl_string2546z00zz__r4_ports_6_10_1z00,
										BGl_string2548z00zz__r4_ports_6_10_1z00, BgL_flushz00_104);
								}
							else
								{	/* Ieee/port.scm 1166 */
									obj_t BgL_bufz00_1779;

									{	/* Ieee/port.scm 1166 */
										obj_t BgL_res1994z00_2633;

										if ((BgL_bufinfoz00_105 == BTRUE))
											{	/* Ieee/port.scm 933 */
												BgL_res1994z00_2633 =
													make_string_sans_fill(((long) 128));
											}
										else
											{	/* Ieee/port.scm 933 */
												if ((BgL_bufinfoz00_105 == BFALSE))
													{	/* Ieee/port.scm 935 */
														BgL_res1994z00_2633 =
															make_string_sans_fill(((long) 2));
													}
												else
													{	/* Ieee/port.scm 935 */
														if (STRINGP(BgL_bufinfoz00_105))
															{	/* Ieee/port.scm 937 */
																BgL_res1994z00_2633 = BgL_bufinfoz00_105;
															}
														else
															{	/* Ieee/port.scm 937 */
																if (INTEGERP(BgL_bufinfoz00_105))
																	{	/* Ieee/port.scm 939 */
																		if (
																			((long) CINT(BgL_bufinfoz00_105) >=
																				((long) 2)))
																			{	/* Ieee/port.scm 940 */
																				BgL_res1994z00_2633 =
																					make_string_sans_fill(
																					(long) CINT(BgL_bufinfoz00_105));
																			}
																		else
																			{	/* Ieee/port.scm 940 */
																				BgL_res1994z00_2633 =
																					make_string_sans_fill(((long) 2));
																	}}
																else
																	{	/* Ieee/port.scm 939 */
																		BgL_res1994z00_2633 =
																			BGl_errorz00zz__errorz00
																			(BGl_string2546z00zz__r4_ports_6_10_1z00,
																			BGl_string2494z00zz__r4_ports_6_10_1z00,
																			BgL_bufinfoz00_105);
																	}
															}
													}
											}
										BgL_bufz00_1779 = BgL_res1994z00_2633;
									}
									return
										bgl_open_output_procedure(BgL_procz00_103, BgL_flushz00_104,
										BgL_closez00_106, BgL_bufz00_1779);
								}
						}
				}
			else
				{	/* Ieee/port.scm 1148 */
					return
						bgl_system_failure(BGL_IO_PORT_ERROR,
						BGl_string2546z00zz__r4_ports_6_10_1z00,
						BGl_string2549z00zz__r4_ports_6_10_1z00, BgL_procz00_103);
				}
		}

	}



/* output-port-timeout-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_109, long BgL_timeoutz00_110)
	{
		{	/* Ieee/port.scm 1172 */
			return
				BBOOL(bgl_output_port_timeout_set(BgL_portz00_109, BgL_timeoutz00_110));
		}

	}



/* &output-port-timeout-set! */
	obj_t BGl_z62outputzd2portzd2timeoutzd2setz12za2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3317, obj_t BgL_portz00_3318, obj_t BgL_timeoutz00_3319)
	{
		{	/* Ieee/port.scm 1172 */
			{	/* Ieee/port.scm 1173 */
				long BgL_auxz00_5581;
				obj_t BgL_auxz00_5574;

				{	/* Ieee/port.scm 1173 */
					obj_t BgL_tmpz00_5582;

					if (INTEGERP(BgL_timeoutz00_3319))
						{	/* Ieee/port.scm 1173 */
							BgL_tmpz00_5582 = BgL_timeoutz00_3319;
						}
					else
						{
							obj_t BgL_auxz00_5585;

							BgL_auxz00_5585 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 51825)),
								BGl_string2550z00zz__r4_ports_6_10_1z00,
								BGl_string2496z00zz__r4_ports_6_10_1z00, BgL_timeoutz00_3319);
							FAILURE(BgL_auxz00_5585, BFALSE, BFALSE);
						}
					BgL_auxz00_5581 = (long) CINT(BgL_tmpz00_5582);
				}
				if (OUTPUT_PORTP(BgL_portz00_3318))
					{	/* Ieee/port.scm 1173 */
						BgL_auxz00_5574 = BgL_portz00_3318;
					}
				else
					{
						obj_t BgL_auxz00_5577;

						BgL_auxz00_5577 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 51825)),
							BGl_string2550z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3318);
						FAILURE(BgL_auxz00_5577, BFALSE, BFALSE);
					}
				return
					BGl_outputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00
					(BgL_auxz00_5574, BgL_auxz00_5581);
			}
		}

	}



/* closed-input-port? */
	BGL_EXPORTED_DEF bool_t
		BGl_closedzd2inputzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_portz00_111)
	{
		{	/* Ieee/port.scm 1178 */
			return INPUT_PORT_CLOSEP(BgL_portz00_111);
		}

	}



/* &closed-input-port? */
	obj_t BGl_z62closedzd2inputzd2portzf3z91zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3320, obj_t BgL_portz00_3321)
	{
		{	/* Ieee/port.scm 1178 */
			{	/* Ieee/port.scm 1179 */
				bool_t BgL_tmpz00_5592;

				{	/* Ieee/port.scm 1179 */
					obj_t BgL_auxz00_5593;

					if (INPUT_PORTP(BgL_portz00_3321))
						{	/* Ieee/port.scm 1179 */
							BgL_auxz00_5593 = BgL_portz00_3321;
						}
					else
						{
							obj_t BgL_auxz00_5596;

							BgL_auxz00_5596 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 52134)),
								BGl_string2551z00zz__r4_ports_6_10_1z00,
								BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3321);
							FAILURE(BgL_auxz00_5596, BFALSE, BFALSE);
						}
					BgL_tmpz00_5592 =
						BGl_closedzd2inputzd2portzf3zf3zz__r4_ports_6_10_1z00
						(BgL_auxz00_5593);
				}
				return BBOOL(BgL_tmpz00_5592);
			}
		}

	}



/* close-input-port */
	BGL_EXPORTED_DEF obj_t BGl_closezd2inputzd2portz00zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_112)
	{
		{	/* Ieee/port.scm 1184 */
			return bgl_close_input_port(BgL_portz00_112);
		}

	}



/* &close-input-port */
	obj_t BGl_z62closezd2inputzd2portz62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3322, obj_t BgL_portz00_3323)
	{
		{	/* Ieee/port.scm 1184 */
			{	/* Ieee/port.scm 1185 */
				obj_t BgL_auxz00_5603;

				if (INPUT_PORTP(BgL_portz00_3323))
					{	/* Ieee/port.scm 1185 */
						BgL_auxz00_5603 = BgL_portz00_3323;
					}
				else
					{
						obj_t BgL_auxz00_5606;

						BgL_auxz00_5606 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 52428)),
							BGl_string2552z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3323);
						FAILURE(BgL_auxz00_5606, BFALSE, BFALSE);
					}
				return
					BGl_closezd2inputzd2portz00zz__r4_ports_6_10_1z00(BgL_auxz00_5603);
			}
		}

	}



/* get-output-string */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_113)
	{
		{	/* Ieee/port.scm 1190 */
			return get_output_string(BgL_portz00_113);
		}

	}



/* &get-output-string */
	obj_t BGl_z62getzd2outputzd2stringz62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3324, obj_t BgL_portz00_3325)
	{
		{	/* Ieee/port.scm 1190 */
			{	/* Ieee/port.scm 1191 */
				obj_t BgL_auxz00_5612;

				if (OUTPUT_PORTP(BgL_portz00_3325))
					{	/* Ieee/port.scm 1191 */
						BgL_auxz00_5612 = BgL_portz00_3325;
					}
				else
					{
						obj_t BgL_auxz00_5615;

						BgL_auxz00_5615 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 52720)),
							BGl_string2553z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3325);
						FAILURE(BgL_auxz00_5615, BFALSE, BFALSE);
					}
				return
					BGl_getzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BgL_auxz00_5612);
			}
		}

	}



/* close-output-port */
	BGL_EXPORTED_DEF obj_t
		BGl_closezd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_114)
	{
		{	/* Ieee/port.scm 1196 */
			return bgl_close_output_port(BgL_portz00_114);
		}

	}



/* &close-output-port */
	obj_t BGl_z62closezd2outputzd2portz62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3326, obj_t BgL_portz00_3327)
	{
		{	/* Ieee/port.scm 1196 */
			{	/* Ieee/port.scm 1197 */
				obj_t BgL_auxz00_5621;

				if (OUTPUT_PORTP(BgL_portz00_3327))
					{	/* Ieee/port.scm 1197 */
						BgL_auxz00_5621 = BgL_portz00_3327;
					}
				else
					{
						obj_t BgL_auxz00_5624;

						BgL_auxz00_5624 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 53014)),
							BGl_string2554z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3327);
						FAILURE(BgL_auxz00_5624, BFALSE, BFALSE);
					}
				return
					BGl_closezd2outputzd2portz00zz__r4_ports_6_10_1z00(BgL_auxz00_5621);
			}
		}

	}



/* flush-output-port */
	BGL_EXPORTED_DEF obj_t
		BGl_flushzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_115)
	{
		{	/* Ieee/port.scm 1202 */
			return bgl_flush_output_port(BgL_portz00_115);
		}

	}



/* &flush-output-port */
	obj_t BGl_z62flushzd2outputzd2portz62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3328, obj_t BgL_portz00_3329)
	{
		{	/* Ieee/port.scm 1202 */
			{	/* Ieee/port.scm 1203 */
				obj_t BgL_auxz00_5630;

				if (OUTPUT_PORTP(BgL_portz00_3329))
					{	/* Ieee/port.scm 1203 */
						BgL_auxz00_5630 = BgL_portz00_3329;
					}
				else
					{
						obj_t BgL_auxz00_5633;

						BgL_auxz00_5633 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 53307)),
							BGl_string2555z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3329);
						FAILURE(BgL_auxz00_5633, BFALSE, BFALSE);
					}
				return
					BGl_flushzd2outputzd2portz00zz__r4_ports_6_10_1z00(BgL_auxz00_5630);
			}
		}

	}



/* reset-output-port */
	BGL_EXPORTED_DEF obj_t
		BGl_resetzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_116)
	{
		{	/* Ieee/port.scm 1208 */
			bgl_reset_output_port_error(BgL_portz00_116);
			if (BGL_OUTPUT_STRING_PORTP(BgL_portz00_116))
				{	/* Ieee/port.scm 1210 */
					return bgl_reset_output_string_port(BgL_portz00_116);
				}
			else
				{	/* Ieee/port.scm 1210 */
					return bgl_flush_output_port(BgL_portz00_116);
				}
		}

	}



/* &reset-output-port */
	obj_t BGl_z62resetzd2outputzd2portz62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3330, obj_t BgL_portz00_3331)
	{
		{	/* Ieee/port.scm 1208 */
			{	/* Ieee/port.scm 1209 */
				obj_t BgL_auxz00_5643;

				if (OUTPUT_PORTP(BgL_portz00_3331))
					{	/* Ieee/port.scm 1209 */
						BgL_auxz00_5643 = BgL_portz00_3331;
					}
				else
					{
						obj_t BgL_auxz00_5646;

						BgL_auxz00_5646 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 53631)),
							BGl_string2556z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3331);
						FAILURE(BgL_auxz00_5646, BFALSE, BFALSE);
					}
				return
					BGl_resetzd2outputzd2portz00zz__r4_ports_6_10_1z00(BgL_auxz00_5643);
			}
		}

	}



/* reset-eof */
	BGL_EXPORTED_DEF bool_t BGl_resetzd2eofzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_117)
	{
		{	/* Ieee/port.scm 1217 */
			return reset_eof(BgL_portz00_117);
		}

	}



/* &reset-eof */
	obj_t BGl_z62resetzd2eofzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3332,
		obj_t BgL_portz00_3333)
	{
		{	/* Ieee/port.scm 1217 */
			{	/* Ieee/port.scm 1218 */
				bool_t BgL_tmpz00_5652;

				{	/* Ieee/port.scm 1218 */
					obj_t BgL_auxz00_5653;

					if (INPUT_PORTP(BgL_portz00_3333))
						{	/* Ieee/port.scm 1218 */
							BgL_auxz00_5653 = BgL_portz00_3333;
						}
					else
						{
							obj_t BgL_auxz00_5656;

							BgL_auxz00_5656 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 54001)),
								BGl_string2557z00zz__r4_ports_6_10_1z00,
								BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3333);
							FAILURE(BgL_auxz00_5656, BFALSE, BFALSE);
						}
					BgL_tmpz00_5652 =
						BGl_resetzd2eofzd2zz__r4_ports_6_10_1z00(BgL_auxz00_5653);
				}
				return BBOOL(BgL_tmpz00_5652);
			}
		}

	}



/* set-input-port-position! */
	BGL_EXPORTED_DEF obj_t
		BGl_setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_118, long BgL_posz00_119)
	{
		{	/* Ieee/port.scm 1223 */
			{	/* Ieee/port.scm 1224 */
				obj_t BgL_useekz00_2636;

				BgL_useekz00_2636 = BGL_INPUT_PORT_USEEK(BgL_portz00_118);
				if (PROCEDUREP(BgL_useekz00_2636))
					{	/* Ieee/port.scm 1225 */
						PROCEDURE_ENTRY(BgL_useekz00_2636) (BgL_useekz00_2636,
							BgL_portz00_118, BINT(BgL_posz00_119), BEOA);
					}
				else
					{	/* Ieee/port.scm 1225 */
						bgl_input_port_seek(BgL_portz00_118, BgL_posz00_119);
						BUNSPEC;
					}
			}
			return BUNSPEC;
		}

	}



/* &set-input-port-position! */
	obj_t BGl_z62setzd2inputzd2portzd2positionz12za2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3334, obj_t BgL_portz00_3335, obj_t BgL_posz00_3336)
	{
		{	/* Ieee/port.scm 1223 */
			{	/* Ieee/port.scm 1227 */
				long BgL_auxz00_5679;
				obj_t BgL_auxz00_5672;

				{	/* Ieee/port.scm 1227 */
					obj_t BgL_tmpz00_5680;

					if (INTEGERP(BgL_posz00_3336))
						{	/* Ieee/port.scm 1227 */
							BgL_tmpz00_5680 = BgL_posz00_3336;
						}
					else
						{
							obj_t BgL_auxz00_5683;

							BgL_auxz00_5683 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 54438)),
								BGl_string2558z00zz__r4_ports_6_10_1z00,
								BGl_string2496z00zz__r4_ports_6_10_1z00, BgL_posz00_3336);
							FAILURE(BgL_auxz00_5683, BFALSE, BFALSE);
						}
					BgL_auxz00_5679 = (long) CINT(BgL_tmpz00_5680);
				}
				if (INPUT_PORTP(BgL_portz00_3335))
					{	/* Ieee/port.scm 1227 */
						BgL_auxz00_5672 = BgL_portz00_3335;
					}
				else
					{
						obj_t BgL_auxz00_5675;

						BgL_auxz00_5675 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 54438)),
							BGl_string2558z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3335);
						FAILURE(BgL_auxz00_5675, BFALSE, BFALSE);
					}
				return
					BGl_setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00
					(BgL_auxz00_5672, BgL_auxz00_5679);
			}
		}

	}



/* input-port-position */
	BGL_EXPORTED_DEF long
		BGl_inputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_120)
	{
		{	/* Ieee/port.scm 1233 */
			return INPUT_PORT_FILEPOS(BgL_portz00_120);
		}

	}



/* &input-port-position */
	obj_t BGl_z62inputzd2portzd2positionz62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3337, obj_t BgL_portz00_3338)
	{
		{	/* Ieee/port.scm 1233 */
			{	/* Ieee/port.scm 1234 */
				long BgL_tmpz00_5690;

				{	/* Ieee/port.scm 1234 */
					obj_t BgL_auxz00_5691;

					if (INPUT_PORTP(BgL_portz00_3338))
						{	/* Ieee/port.scm 1234 */
							BgL_auxz00_5691 = BgL_portz00_3338;
						}
					else
						{
							obj_t BgL_auxz00_5694;

							BgL_auxz00_5694 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 54728)),
								BGl_string2559z00zz__r4_ports_6_10_1z00,
								BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3338);
							FAILURE(BgL_auxz00_5694, BFALSE, BFALSE);
						}
					BgL_tmpz00_5690 =
						BGl_inputzd2portzd2positionz00zz__r4_ports_6_10_1z00
						(BgL_auxz00_5691);
				}
				return BINT(BgL_tmpz00_5690);
			}
		}

	}



/* input-port-fill-barrier */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2fillzd2barrierzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_121)
	{
		{	/* Ieee/port.scm 1239 */
			return BINT(INPUT_PORT_FILLBARRIER(BgL_portz00_121));
		}

	}



/* &input-port-fill-barrier */
	obj_t BGl_z62inputzd2portzd2fillzd2barrierzb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3339, obj_t BgL_portz00_3340)
	{
		{	/* Ieee/port.scm 1239 */
			{	/* Ieee/port.scm 1240 */
				obj_t BgL_auxz00_5702;

				if (INPUT_PORTP(BgL_portz00_3340))
					{	/* Ieee/port.scm 1240 */
						BgL_auxz00_5702 = BgL_portz00_3340;
					}
				else
					{
						obj_t BgL_auxz00_5705;

						BgL_auxz00_5705 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 55042)),
							BGl_string2560z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3340);
						FAILURE(BgL_auxz00_5705, BFALSE, BFALSE);
					}
				return
					BGl_inputzd2portzd2fillzd2barrierzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_5702);
			}
		}

	}



/* input-port-fill-barrier-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2fillzd2barrierzd2setz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_122, long BgL_posz00_123)
	{
		{	/* Ieee/port.scm 1245 */
			INPUT_PORT_FILLBARRIER_SET(BgL_portz00_122, BgL_posz00_123);
			BUNSPEC;
			return BINT(BgL_posz00_123);
		}

	}



/* &input-port-fill-barrier-set! */
	obj_t
		BGl_z62inputzd2portzd2fillzd2barrierzd2setz12z70zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3341, obj_t BgL_portz00_3342, obj_t BgL_posz00_3343)
	{
		{	/* Ieee/port.scm 1245 */
			{	/* Ieee/port.scm 1246 */
				long BgL_auxz00_5719;
				obj_t BgL_auxz00_5712;

				{	/* Ieee/port.scm 1246 */
					obj_t BgL_tmpz00_5720;

					if (INTEGERP(BgL_posz00_3343))
						{	/* Ieee/port.scm 1246 */
							BgL_tmpz00_5720 = BgL_posz00_3343;
						}
					else
						{
							obj_t BgL_auxz00_5723;

							BgL_auxz00_5723 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 55416)),
								BGl_string2561z00zz__r4_ports_6_10_1z00,
								BGl_string2496z00zz__r4_ports_6_10_1z00, BgL_posz00_3343);
							FAILURE(BgL_auxz00_5723, BFALSE, BFALSE);
						}
					BgL_auxz00_5719 = (long) CINT(BgL_tmpz00_5720);
				}
				if (INPUT_PORTP(BgL_portz00_3342))
					{	/* Ieee/port.scm 1246 */
						BgL_auxz00_5712 = BgL_portz00_3342;
					}
				else
					{
						obj_t BgL_auxz00_5715;

						BgL_auxz00_5715 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 55416)),
							BGl_string2561z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3342);
						FAILURE(BgL_auxz00_5715, BFALSE, BFALSE);
					}
				return
					BGl_inputzd2portzd2fillzd2barrierzd2setz12z12zz__r4_ports_6_10_1z00
					(BgL_auxz00_5712, BgL_auxz00_5719);
			}
		}

	}



/* input-port-last-token-position */
	BGL_EXPORTED_DEF long
		BGl_inputzd2portzd2lastzd2tokenzd2positionz00zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_124)
	{
		{	/* Ieee/port.scm 1252 */
			{	/* Ieee/port.scm 1253 */
				long BgL_tmpz00_5729;

				BgL_tmpz00_5729 = INPUT_PORT_TOKENPOS(BgL_portz00_124);
				return (long) (BgL_tmpz00_5729);
		}}

	}



/* &input-port-last-token-position */
	obj_t
		BGl_z62inputzd2portzd2lastzd2tokenzd2positionz62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3344, obj_t BgL_portz00_3345)
	{
		{	/* Ieee/port.scm 1252 */
			{	/* Ieee/port.scm 1253 */
				long BgL_tmpz00_5732;

				{	/* Ieee/port.scm 1253 */
					obj_t BgL_auxz00_5733;

					if (INPUT_PORTP(BgL_portz00_3345))
						{	/* Ieee/port.scm 1253 */
							BgL_auxz00_5733 = BgL_portz00_3345;
						}
					else
						{
							obj_t BgL_auxz00_5736;

							BgL_auxz00_5736 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 55708)),
								BGl_string2562z00zz__r4_ports_6_10_1z00,
								BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3345);
							FAILURE(BgL_auxz00_5736, BFALSE, BFALSE);
						}
					BgL_tmpz00_5732 =
						BGl_inputzd2portzd2lastzd2tokenzd2positionz00zz__r4_ports_6_10_1z00
						(BgL_auxz00_5733);
				}
				return BINT(BgL_tmpz00_5732);
			}
		}

	}



/* output-port-name */
	BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_125)
	{
		{	/* Ieee/port.scm 1258 */
			return OUTPUT_PORT_NAME(BgL_portz00_125);
		}

	}



/* &output-port-name */
	obj_t BGl_z62outputzd2portzd2namez62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3346, obj_t BgL_portz00_3347)
	{
		{	/* Ieee/port.scm 1258 */
			{	/* Ieee/port.scm 1259 */
				obj_t BgL_auxz00_5743;

				if (OUTPUT_PORTP(BgL_portz00_3347))
					{	/* Ieee/port.scm 1259 */
						BgL_auxz00_5743 = BgL_portz00_3347;
					}
				else
					{
						obj_t BgL_auxz00_5746;

						BgL_auxz00_5746 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 56014)),
							BGl_string2563z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3347);
						FAILURE(BgL_auxz00_5746, BFALSE, BFALSE);
					}
				return
					BGl_outputzd2portzd2namez00zz__r4_ports_6_10_1z00(BgL_auxz00_5743);
			}
		}

	}



/* output-port-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2namezd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_126, obj_t BgL_namez00_127)
	{
		{	/* Ieee/port.scm 1264 */
			OUTPUT_PORT_NAME_SET(BgL_portz00_126, BgL_namez00_127);
			return BUNSPEC;
		}

	}



/* &output-port-name-set! */
	obj_t BGl_z62outputzd2portzd2namezd2setz12za2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3348, obj_t BgL_portz00_3349, obj_t BgL_namez00_3350)
	{
		{	/* Ieee/port.scm 1264 */
			{	/* Ieee/port.scm 1264 */
				obj_t BgL_auxz00_5759;
				obj_t BgL_auxz00_5752;

				if (STRINGP(BgL_namez00_3350))
					{	/* Ieee/port.scm 1264 */
						BgL_auxz00_5759 = BgL_namez00_3350;
					}
				else
					{
						obj_t BgL_auxz00_5762;

						BgL_auxz00_5762 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 56263)),
							BGl_string2564z00zz__r4_ports_6_10_1z00,
							BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_namez00_3350);
						FAILURE(BgL_auxz00_5762, BFALSE, BFALSE);
					}
				if (OUTPUT_PORTP(BgL_portz00_3349))
					{	/* Ieee/port.scm 1264 */
						BgL_auxz00_5752 = BgL_portz00_3349;
					}
				else
					{
						obj_t BgL_auxz00_5755;

						BgL_auxz00_5755 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 56263)),
							BGl_string2564z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3349);
						FAILURE(BgL_auxz00_5755, BFALSE, BFALSE);
					}
				return
					BGl_outputzd2portzd2namezd2setz12zc0zz__r4_ports_6_10_1z00
					(BgL_auxz00_5752, BgL_auxz00_5759);
			}
		}

	}



/* set-output-port-position! */
	BGL_EXPORTED_DEF obj_t
		BGl_setzd2outputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_128, long BgL_posz00_129)
	{
		{	/* Ieee/port.scm 1270 */
			if (CBOOL(bgl_output_port_seek(BgL_portz00_128, BgL_posz00_129)))
				{	/* Ieee/port.scm 1271 */
					return BFALSE;
				}
			else
				{	/* Ieee/port.scm 1271 */
					return
						bgl_system_failure(BGL_IO_PORT_ERROR,
						BGl_string2565z00zz__r4_ports_6_10_1z00,
						BGl_string2566z00zz__r4_ports_6_10_1z00, BgL_portz00_128);
				}
		}

	}



/* &set-output-port-position! */
	obj_t BGl_z62setzd2outputzd2portzd2positionz12za2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3351, obj_t BgL_portz00_3352, obj_t BgL_posz00_3353)
	{
		{	/* Ieee/port.scm 1270 */
			{	/* Ieee/port.scm 1271 */
				long BgL_auxz00_5778;
				obj_t BgL_auxz00_5771;

				{	/* Ieee/port.scm 1271 */
					obj_t BgL_tmpz00_5779;

					if (INTEGERP(BgL_posz00_3353))
						{	/* Ieee/port.scm 1271 */
							BgL_tmpz00_5779 = BgL_posz00_3353;
						}
					else
						{
							obj_t BgL_auxz00_5782;

							BgL_auxz00_5782 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 56648)),
								BGl_string2567z00zz__r4_ports_6_10_1z00,
								BGl_string2496z00zz__r4_ports_6_10_1z00, BgL_posz00_3353);
							FAILURE(BgL_auxz00_5782, BFALSE, BFALSE);
						}
					BgL_auxz00_5778 = (long) CINT(BgL_tmpz00_5779);
				}
				if (OUTPUT_PORTP(BgL_portz00_3352))
					{	/* Ieee/port.scm 1271 */
						BgL_auxz00_5771 = BgL_portz00_3352;
					}
				else
					{
						obj_t BgL_auxz00_5774;

						BgL_auxz00_5774 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 56648)),
							BGl_string2567z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3352);
						FAILURE(BgL_auxz00_5774, BFALSE, BFALSE);
					}
				return
					BGl_setzd2outputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00
					(BgL_auxz00_5771, BgL_auxz00_5778);
			}
		}

	}



/* output-port-position */
	BGL_EXPORTED_DEF long
		BGl_outputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_130)
	{
		{	/* Ieee/port.scm 1278 */
			return BGL_OUTPUT_PORT_FILEPOS(BgL_portz00_130);
		}

	}



/* &output-port-position */
	obj_t BGl_z62outputzd2portzd2positionz62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3354, obj_t BgL_portz00_3355)
	{
		{	/* Ieee/port.scm 1278 */
			{	/* Ieee/port.scm 1279 */
				long BgL_tmpz00_5789;

				{	/* Ieee/port.scm 1279 */
					obj_t BgL_auxz00_5790;

					if (OUTPUT_PORTP(BgL_portz00_3355))
						{	/* Ieee/port.scm 1279 */
							BgL_auxz00_5790 = BgL_portz00_3355;
						}
					else
						{
							obj_t BgL_auxz00_5793;

							BgL_auxz00_5793 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 57064)),
								BGl_string2568z00zz__r4_ports_6_10_1z00,
								BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3355);
							FAILURE(BgL_auxz00_5793, BFALSE, BFALSE);
						}
					BgL_tmpz00_5789 =
						BGl_outputzd2portzd2positionz00zz__r4_ports_6_10_1z00
						(BgL_auxz00_5790);
				}
				return BINT(BgL_tmpz00_5789);
			}
		}

	}



/* output-port-isatty? */
	BGL_EXPORTED_DEF bool_t
		BGl_outputzd2portzd2isattyzf3zf3zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_131)
	{
		{	/* Ieee/port.scm 1284 */
			return bgl_port_isatty(BgL_portz00_131);
		}

	}



/* &output-port-isatty? */
	obj_t BGl_z62outputzd2portzd2isattyzf3z91zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3356, obj_t BgL_portz00_3357)
	{
		{	/* Ieee/port.scm 1284 */
			{	/* Ieee/port.scm 1286 */
				bool_t BgL_tmpz00_5800;

				{	/* Ieee/port.scm 1286 */
					obj_t BgL_auxz00_5801;

					if (OUTPUT_PORTP(BgL_portz00_3357))
						{	/* Ieee/port.scm 1286 */
							BgL_auxz00_5801 = BgL_portz00_3357;
						}
					else
						{
							obj_t BgL_auxz00_5804;

							BgL_auxz00_5804 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 57392)),
								BGl_string2569z00zz__r4_ports_6_10_1z00,
								BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3357);
							FAILURE(BgL_auxz00_5804, BFALSE, BFALSE);
						}
					BgL_tmpz00_5800 =
						BGl_outputzd2portzd2isattyzf3zf3zz__r4_ports_6_10_1z00
						(BgL_auxz00_5801);
				}
				return BBOOL(BgL_tmpz00_5800);
			}
		}

	}



/* input-port-name */
	BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_132)
	{
		{	/* Ieee/port.scm 1292 */
			return INPUT_PORT_NAME(BgL_portz00_132);
		}

	}



/* &input-port-name */
	obj_t BGl_z62inputzd2portzd2namez62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3358, obj_t BgL_portz00_3359)
	{
		{	/* Ieee/port.scm 1292 */
			{	/* Ieee/port.scm 1293 */
				obj_t BgL_auxz00_5811;

				if (INPUT_PORTP(BgL_portz00_3359))
					{	/* Ieee/port.scm 1293 */
						BgL_auxz00_5811 = BgL_portz00_3359;
					}
				else
					{
						obj_t BgL_auxz00_5814;

						BgL_auxz00_5814 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 57699)),
							BGl_string2570z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3359);
						FAILURE(BgL_auxz00_5814, BFALSE, BFALSE);
					}
				return
					BGl_inputzd2portzd2namez00zz__r4_ports_6_10_1z00(BgL_auxz00_5811);
			}
		}

	}



/* input-port-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2namezd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_133, obj_t BgL_namez00_134)
	{
		{	/* Ieee/port.scm 1298 */
			INPUT_PORT_NAME_SET(BgL_portz00_133, BgL_namez00_134);
			return BUNSPEC;
		}

	}



/* &input-port-name-set! */
	obj_t BGl_z62inputzd2portzd2namezd2setz12za2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3360, obj_t BgL_portz00_3361, obj_t BgL_namez00_3362)
	{
		{	/* Ieee/port.scm 1298 */
			{	/* Ieee/port.scm 1298 */
				obj_t BgL_auxz00_5827;
				obj_t BgL_auxz00_5820;

				if (STRINGP(BgL_namez00_3362))
					{	/* Ieee/port.scm 1298 */
						BgL_auxz00_5827 = BgL_namez00_3362;
					}
				else
					{
						obj_t BgL_auxz00_5830;

						BgL_auxz00_5830 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 57947)),
							BGl_string2571z00zz__r4_ports_6_10_1z00,
							BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_namez00_3362);
						FAILURE(BgL_auxz00_5830, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_portz00_3361))
					{	/* Ieee/port.scm 1298 */
						BgL_auxz00_5820 = BgL_portz00_3361;
					}
				else
					{
						obj_t BgL_auxz00_5823;

						BgL_auxz00_5823 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 57947)),
							BGl_string2571z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3361);
						FAILURE(BgL_auxz00_5823, BFALSE, BFALSE);
					}
				return
					BGl_inputzd2portzd2namezd2setz12zc0zz__r4_ports_6_10_1z00
					(BgL_auxz00_5820, BgL_auxz00_5827);
			}
		}

	}



/* input-port-length */
	BGL_EXPORTED_DEF long BGl_inputzd2portzd2lengthz00zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_135)
	{
		{	/* Ieee/port.scm 1304 */
			return BGL_INPUT_PORT_LENGTH(BgL_portz00_135);
		}

	}



/* &input-port-length */
	obj_t BGl_z62inputzd2portzd2lengthz62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3363, obj_t BgL_portz00_3364)
	{
		{	/* Ieee/port.scm 1304 */
			{	/* Ieee/port.scm 1305 */
				long BgL_tmpz00_5836;

				{	/* Ieee/port.scm 1305 */
					obj_t BgL_auxz00_5837;

					if (INPUT_PORTP(BgL_portz00_3364))
						{	/* Ieee/port.scm 1305 */
							BgL_auxz00_5837 = BgL_portz00_3364;
						}
					else
						{
							obj_t BgL_auxz00_5840;

							BgL_auxz00_5840 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 58299)),
								BGl_string2572z00zz__r4_ports_6_10_1z00,
								BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3364);
							FAILURE(BgL_auxz00_5840, BFALSE, BFALSE);
						}
					BgL_tmpz00_5836 =
						BGl_inputzd2portzd2lengthz00zz__r4_ports_6_10_1z00(BgL_auxz00_5837);
				}
				return make_belong(BgL_tmpz00_5836);
			}
		}

	}



/* output-port-close-hook */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_136)
	{
		{	/* Ieee/port.scm 1310 */
			return PORT_CHOOK(BgL_portz00_136);
		}

	}



/* &output-port-close-hook */
	obj_t BGl_z62outputzd2portzd2closezd2hookzb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3365, obj_t BgL_portz00_3366)
	{
		{	/* Ieee/port.scm 1310 */
			{	/* Ieee/port.scm 1311 */
				obj_t BgL_auxz00_5847;

				if (OUTPUT_PORTP(BgL_portz00_3366))
					{	/* Ieee/port.scm 1311 */
						BgL_auxz00_5847 = BgL_portz00_3366;
					}
				else
					{
						obj_t BgL_auxz00_5850;

						BgL_auxz00_5850 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 58597)),
							BGl_string2573z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3366);
						FAILURE(BgL_auxz00_5850, BFALSE, BFALSE);
					}
				return
					BGl_outputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_5847);
			}
		}

	}



/* closed-output-port? */
	BGL_EXPORTED_DEF bool_t
		BGl_closedzd2outputzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_137)
	{
		{	/* Ieee/port.scm 1316 */
			return OUTPUT_PORT_CLOSEP(BgL_portz00_137);
		}

	}



/* &closed-output-port? */
	obj_t BGl_z62closedzd2outputzd2portzf3z91zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3367, obj_t BgL_portz00_3368)
	{
		{	/* Ieee/port.scm 1316 */
			{	/* Ieee/port.scm 1317 */
				bool_t BgL_tmpz00_5856;

				{	/* Ieee/port.scm 1317 */
					obj_t BgL_auxz00_5857;

					if (OUTPUT_PORTP(BgL_portz00_3368))
						{	/* Ieee/port.scm 1317 */
							BgL_auxz00_5857 = BgL_portz00_3368;
						}
					else
						{
							obj_t BgL_auxz00_5860;

							BgL_auxz00_5860 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 58893)),
								BGl_string2574z00zz__r4_ports_6_10_1z00,
								BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3368);
							FAILURE(BgL_auxz00_5860, BFALSE, BFALSE);
						}
					BgL_tmpz00_5856 =
						BGl_closedzd2outputzd2portzf3zf3zz__r4_ports_6_10_1z00
						(BgL_auxz00_5857);
				}
				return BBOOL(BgL_tmpz00_5856);
			}
		}

	}



/* output-port-close-hook-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_138, obj_t BgL_procz00_139)
	{
		{	/* Ieee/port.scm 1322 */
			if (PROCEDURE_CORRECT_ARITYP(BgL_procz00_139, (int) (((long) 1))))
				{	/* Ieee/port.scm 1323 */
					PORT_CHOOK_SET(BgL_portz00_138, BgL_procz00_139);
					BUNSPEC;
					return BgL_procz00_139;
				}
			else
				{	/* Ieee/port.scm 1323 */
					return
						bgl_system_failure(BGL_IO_PORT_ERROR,
						BGl_string2575z00zz__r4_ports_6_10_1z00,
						BGl_string2516z00zz__r4_ports_6_10_1z00, BgL_procz00_139);
				}
		}

	}



/* &output-port-close-hook-set! */
	obj_t
		BGl_z62outputzd2portzd2closezd2hookzd2setz12z70zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3369, obj_t BgL_portz00_3370, obj_t BgL_procz00_3371)
	{
		{	/* Ieee/port.scm 1322 */
			{	/* Ieee/port.scm 1323 */
				obj_t BgL_auxz00_5878;
				obj_t BgL_auxz00_5871;

				if (PROCEDUREP(BgL_procz00_3371))
					{	/* Ieee/port.scm 1323 */
						BgL_auxz00_5878 = BgL_procz00_3371;
					}
				else
					{
						obj_t BgL_auxz00_5881;

						BgL_auxz00_5881 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 59196)),
							BGl_string2576z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_procz00_3371);
						FAILURE(BgL_auxz00_5881, BFALSE, BFALSE);
					}
				if (OUTPUT_PORTP(BgL_portz00_3370))
					{	/* Ieee/port.scm 1323 */
						BgL_auxz00_5871 = BgL_portz00_3370;
					}
				else
					{
						obj_t BgL_auxz00_5874;

						BgL_auxz00_5874 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 59196)),
							BGl_string2576z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3370);
						FAILURE(BgL_auxz00_5874, BFALSE, BFALSE);
					}
				return
					BGl_outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
					(BgL_auxz00_5871, BgL_auxz00_5878);
			}
		}

	}



/* output-port-flush-hook */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2flushzd2hookzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_140)
	{
		{	/* Ieee/port.scm 1333 */
			return BGL_OUTPUT_PORT_FHOOK(BgL_portz00_140);
		}

	}



/* &output-port-flush-hook */
	obj_t BGl_z62outputzd2portzd2flushzd2hookzb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3372, obj_t BgL_portz00_3373)
	{
		{	/* Ieee/port.scm 1333 */
			{	/* Ieee/port.scm 1334 */
				obj_t BgL_auxz00_5887;

				if (OUTPUT_PORTP(BgL_portz00_3373))
					{	/* Ieee/port.scm 1334 */
						BgL_auxz00_5887 = BgL_portz00_3373;
					}
				else
					{
						obj_t BgL_auxz00_5890;

						BgL_auxz00_5890 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 59685)),
							BGl_string2577z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3373);
						FAILURE(BgL_auxz00_5890, BFALSE, BFALSE);
					}
				return
					BGl_outputzd2portzd2flushzd2hookzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_5887);
			}
		}

	}



/* output-port-flush-hook-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_141, obj_t BgL_procz00_142)
	{
		{	/* Ieee/port.scm 1339 */
			{	/* Ieee/port.scm 1340 */
				bool_t BgL_test3133z00_5895;

				if (PROCEDUREP(BgL_procz00_142))
					{	/* Ieee/port.scm 1340 */
						if (PROCEDURE_CORRECT_ARITYP(BgL_procz00_142, (int) (((long) 2))))
							{	/* Ieee/port.scm 1340 */
								BgL_test3133z00_5895 = ((bool_t) 0);
							}
						else
							{	/* Ieee/port.scm 1340 */
								BgL_test3133z00_5895 = ((bool_t) 1);
							}
					}
				else
					{	/* Ieee/port.scm 1340 */
						BgL_test3133z00_5895 = ((bool_t) 0);
					}
				if (BgL_test3133z00_5895)
					{	/* Ieee/port.scm 1340 */
						return
							bgl_system_failure(BGL_IO_PORT_ERROR,
							BGl_string2578z00zz__r4_ports_6_10_1z00,
							BGl_string2516z00zz__r4_ports_6_10_1z00, BgL_procz00_142);
					}
				else
					{	/* Ieee/port.scm 1340 */
						BGL_OUTPUT_PORT_FHOOK_SET(BgL_portz00_141, BgL_procz00_142);
						BUNSPEC;
						return BgL_procz00_142;
					}
			}
		}

	}



/* &output-port-flush-hook-set! */
	obj_t
		BGl_z62outputzd2portzd2flushzd2hookzd2setz12z70zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3374, obj_t BgL_portz00_3375, obj_t BgL_procz00_3376)
	{
		{	/* Ieee/port.scm 1339 */
			{	/* Ieee/port.scm 1340 */
				obj_t BgL_auxz00_5903;

				if (OUTPUT_PORTP(BgL_portz00_3375))
					{	/* Ieee/port.scm 1340 */
						BgL_auxz00_5903 = BgL_portz00_3375;
					}
				else
					{
						obj_t BgL_auxz00_5906;

						BgL_auxz00_5906 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 59986)),
							BGl_string2579z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3375);
						FAILURE(BgL_auxz00_5906, BFALSE, BFALSE);
					}
				return
					BGl_outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00
					(BgL_auxz00_5903, BgL_procz00_3376);
			}
		}

	}



/* output-port-flush-buffer */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2flushzd2bufferzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_143)
	{
		{	/* Ieee/port.scm 1350 */
			return BGL_OUTPUT_PORT_FLUSHBUF(BgL_portz00_143);
		}

	}



/* &output-port-flush-buffer */
	obj_t BGl_z62outputzd2portzd2flushzd2bufferzb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3377, obj_t BgL_portz00_3378)
	{
		{	/* Ieee/port.scm 1350 */
			{	/* Ieee/port.scm 1351 */
				obj_t BgL_auxz00_5912;

				if (OUTPUT_PORTP(BgL_portz00_3378))
					{	/* Ieee/port.scm 1351 */
						BgL_auxz00_5912 = BgL_portz00_3378;
					}
				else
					{
						obj_t BgL_auxz00_5915;

						BgL_auxz00_5915 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 60476)),
							BGl_string2580z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3378);
						FAILURE(BgL_auxz00_5915, BFALSE, BFALSE);
					}
				return
					BGl_outputzd2portzd2flushzd2bufferzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_5912);
			}
		}

	}



/* output-port-flush-buffer-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2flushzd2bufferzd2setz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_144, obj_t BgL_bufz00_145)
	{
		{	/* Ieee/port.scm 1356 */
			BGL_OUTPUT_PORT_FLUSHBUF_SET(BgL_portz00_144, BgL_bufz00_145);
			BUNSPEC;
			return BgL_bufz00_145;
		}

	}



/* &output-port-flush-buffer-set! */
	obj_t
		BGl_z62outputzd2portzd2flushzd2bufferzd2setz12z70zz__r4_ports_6_10_1z00
		(obj_t BgL_envz00_3379, obj_t BgL_portz00_3380, obj_t BgL_bufz00_3381)
	{
		{	/* Ieee/port.scm 1356 */
			{	/* Ieee/port.scm 1357 */
				obj_t BgL_auxz00_5921;

				if (OUTPUT_PORTP(BgL_portz00_3380))
					{	/* Ieee/port.scm 1357 */
						BgL_auxz00_5921 = BgL_portz00_3380;
					}
				else
					{
						obj_t BgL_auxz00_5924;

						BgL_auxz00_5924 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 60824)),
							BGl_string2581z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3380);
						FAILURE(BgL_auxz00_5924, BFALSE, BFALSE);
					}
				return
					BGl_outputzd2portzd2flushzd2bufferzd2setz12z12zz__r4_ports_6_10_1z00
					(BgL_auxz00_5921, BgL_bufz00_3381);
			}
		}

	}



/* input-port-close-hook */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_146)
	{
		{	/* Ieee/port.scm 1363 */
			return PORT_CHOOK(BgL_portz00_146);
		}

	}



/* &input-port-close-hook */
	obj_t BGl_z62inputzd2portzd2closezd2hookzb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3382, obj_t BgL_portz00_3383)
	{
		{	/* Ieee/port.scm 1363 */
			{	/* Ieee/port.scm 1364 */
				obj_t BgL_auxz00_5930;

				if (INPUT_PORTP(BgL_portz00_3383))
					{	/* Ieee/port.scm 1364 */
						BgL_auxz00_5930 = BgL_portz00_3383;
					}
				else
					{
						obj_t BgL_auxz00_5933;

						BgL_auxz00_5933 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 61104)),
							BGl_string2582z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3383);
						FAILURE(BgL_auxz00_5933, BFALSE, BFALSE);
					}
				return
					BGl_inputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00
					(BgL_auxz00_5930);
			}
		}

	}



/* input-port-close-hook-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_147, obj_t BgL_procz00_148)
	{
		{	/* Ieee/port.scm 1369 */
			if (PROCEDURE_CORRECT_ARITYP(BgL_procz00_148, (int) (((long) 1))))
				{	/* Ieee/port.scm 1370 */
					PORT_CHOOK_SET(BgL_portz00_147, BgL_procz00_148);
					BUNSPEC;
					return BgL_procz00_148;
				}
			else
				{	/* Ieee/port.scm 1370 */
					return
						bgl_system_failure(BGL_IO_PORT_ERROR,
						BGl_string2515z00zz__r4_ports_6_10_1z00,
						BGl_string2516z00zz__r4_ports_6_10_1z00, BgL_procz00_148);
				}
		}

	}



/* &input-port-close-hook-set! */
	obj_t
		BGl_z62inputzd2portzd2closezd2hookzd2setz12z70zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3384, obj_t BgL_portz00_3385, obj_t BgL_procz00_3386)
	{
		{	/* Ieee/port.scm 1369 */
			{	/* Ieee/port.scm 1370 */
				obj_t BgL_auxz00_5950;
				obj_t BgL_auxz00_5943;

				if (PROCEDUREP(BgL_procz00_3386))
					{	/* Ieee/port.scm 1370 */
						BgL_auxz00_5950 = BgL_procz00_3386;
					}
				else
					{
						obj_t BgL_auxz00_5953;

						BgL_auxz00_5953 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 61403)),
							BGl_string2583z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_procz00_3386);
						FAILURE(BgL_auxz00_5953, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_portz00_3385))
					{	/* Ieee/port.scm 1370 */
						BgL_auxz00_5943 = BgL_portz00_3385;
					}
				else
					{
						obj_t BgL_auxz00_5946;

						BgL_auxz00_5946 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 61403)),
							BGl_string2583z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3385);
						FAILURE(BgL_auxz00_5946, BFALSE, BFALSE);
					}
				return
					BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00
					(BgL_auxz00_5943, BgL_auxz00_5950);
			}
		}

	}



/* input-port-seek */
	BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2seekz00zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_149)
	{
		{	/* Ieee/port.scm 1380 */
			return BGL_INPUT_PORT_USEEK(BgL_portz00_149);
		}

	}



/* &input-port-seek */
	obj_t BGl_z62inputzd2portzd2seekz62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3387, obj_t BgL_portz00_3388)
	{
		{	/* Ieee/port.scm 1380 */
			{	/* Ieee/port.scm 1381 */
				obj_t BgL_auxz00_5959;

				if (INPUT_PORTP(BgL_portz00_3388))
					{	/* Ieee/port.scm 1381 */
						BgL_auxz00_5959 = BgL_portz00_3388;
					}
				else
					{
						obj_t BgL_auxz00_5962;

						BgL_auxz00_5962 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 61882)),
							BGl_string2584z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3388);
						FAILURE(BgL_auxz00_5962, BFALSE, BFALSE);
					}
				return
					BGl_inputzd2portzd2seekz00zz__r4_ports_6_10_1z00(BgL_auxz00_5959);
			}
		}

	}



/* input-port-seek-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2seekzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_150, obj_t BgL_procz00_151)
	{
		{	/* Ieee/port.scm 1386 */
			if (PROCEDURE_CORRECT_ARITYP(BgL_procz00_151, (int) (((long) 2))))
				{	/* Ieee/port.scm 1387 */
					BGL_INPUT_PORT_USEEK_SET(BgL_portz00_150, BgL_procz00_151);
					BUNSPEC;
					return BgL_procz00_151;
				}
			else
				{	/* Ieee/port.scm 1387 */
					return
						bgl_system_failure(BGL_IO_PORT_ERROR,
						BGl_string2517z00zz__r4_ports_6_10_1z00,
						BGl_string2518z00zz__r4_ports_6_10_1z00, BgL_procz00_151);
				}
		}

	}



/* &input-port-seek-set! */
	obj_t BGl_z62inputzd2portzd2seekzd2setz12za2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3389, obj_t BgL_portz00_3390, obj_t BgL_procz00_3391)
	{
		{	/* Ieee/port.scm 1386 */
			{	/* Ieee/port.scm 1387 */
				obj_t BgL_auxz00_5979;
				obj_t BgL_auxz00_5972;

				if (PROCEDUREP(BgL_procz00_3391))
					{	/* Ieee/port.scm 1387 */
						BgL_auxz00_5979 = BgL_procz00_3391;
					}
				else
					{
						obj_t BgL_auxz00_5982;

						BgL_auxz00_5982 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 62175)),
							BGl_string2585z00zz__r4_ports_6_10_1z00,
							BGl_string2455z00zz__r4_ports_6_10_1z00, BgL_procz00_3391);
						FAILURE(BgL_auxz00_5982, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_portz00_3390))
					{	/* Ieee/port.scm 1387 */
						BgL_auxz00_5972 = BgL_portz00_3390;
					}
				else
					{
						obj_t BgL_auxz00_5975;

						BgL_auxz00_5975 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 62175)),
							BGl_string2585z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3390);
						FAILURE(BgL_auxz00_5975, BFALSE, BFALSE);
					}
				return
					BGl_inputzd2portzd2seekzd2setz12zc0zz__r4_ports_6_10_1z00
					(BgL_auxz00_5972, BgL_auxz00_5979);
			}
		}

	}



/* input-port-buffer */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_152)
	{
		{	/* Ieee/port.scm 1397 */
			return BGL_INPUT_PORT_BUFFER(BgL_portz00_152);
		}

	}



/* &input-port-buffer */
	obj_t BGl_z62inputzd2portzd2bufferz62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3392, obj_t BgL_portz00_3393)
	{
		{	/* Ieee/port.scm 1397 */
			{	/* Ieee/port.scm 1398 */
				obj_t BgL_auxz00_5988;

				if (INPUT_PORTP(BgL_portz00_3393))
					{	/* Ieee/port.scm 1398 */
						BgL_auxz00_5988 = BgL_portz00_3393;
					}
				else
					{
						obj_t BgL_auxz00_5991;

						BgL_auxz00_5991 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 62660)),
							BGl_string2586z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3393);
						FAILURE(BgL_auxz00_5991, BFALSE, BFALSE);
					}
				return
					BGl_inputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BgL_auxz00_5988);
			}
		}

	}



/* input-port-buffer-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_inputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_153, obj_t BgL_bufferz00_154)
	{
		{	/* Ieee/port.scm 1403 */
			bgl_input_port_buffer_set(BgL_portz00_153, BgL_bufferz00_154);
			BUNSPEC;
			return BgL_portz00_153;
		}

	}



/* &input-port-buffer-set! */
	obj_t BGl_z62inputzd2portzd2bufferzd2setz12za2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3394, obj_t BgL_portz00_3395, obj_t BgL_bufferz00_3396)
	{
		{	/* Ieee/port.scm 1403 */
			{	/* Ieee/port.scm 1404 */
				obj_t BgL_auxz00_6004;
				obj_t BgL_auxz00_5997;

				if (STRINGP(BgL_bufferz00_3396))
					{	/* Ieee/port.scm 1404 */
						BgL_auxz00_6004 = BgL_bufferz00_3396;
					}
				else
					{
						obj_t BgL_auxz00_6007;

						BgL_auxz00_6007 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 63008)),
							BGl_string2587z00zz__r4_ports_6_10_1z00,
							BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_bufferz00_3396);
						FAILURE(BgL_auxz00_6007, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_portz00_3395))
					{	/* Ieee/port.scm 1404 */
						BgL_auxz00_5997 = BgL_portz00_3395;
					}
				else
					{
						obj_t BgL_auxz00_6000;

						BgL_auxz00_6000 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 63008)),
							BGl_string2587z00zz__r4_ports_6_10_1z00,
							BGl_string2467z00zz__r4_ports_6_10_1z00, BgL_portz00_3395);
						FAILURE(BgL_auxz00_6000, BFALSE, BFALSE);
					}
				return
					BGl_inputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00
					(BgL_auxz00_5997, BgL_auxz00_6004);
			}
		}

	}



/* output-port-buffer */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_155)
	{
		{	/* Ieee/port.scm 1409 */
			return BGL_OUTPUT_PORT_BUFFER(BgL_portz00_155);
		}

	}



/* &output-port-buffer */
	obj_t BGl_z62outputzd2portzd2bufferz62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3397, obj_t BgL_portz00_3398)
	{
		{	/* Ieee/port.scm 1409 */
			{	/* Ieee/port.scm 1410 */
				obj_t BgL_auxz00_6013;

				if (OUTPUT_PORTP(BgL_portz00_3398))
					{	/* Ieee/port.scm 1410 */
						BgL_auxz00_6013 = BgL_portz00_3398;
					}
				else
					{
						obj_t BgL_auxz00_6016;

						BgL_auxz00_6016 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 63284)),
							BGl_string2588z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3398);
						FAILURE(BgL_auxz00_6016, BFALSE, BFALSE);
					}
				return
					BGl_outputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BgL_auxz00_6013);
			}
		}

	}



/* output-port-buffer-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_outputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_156, obj_t BgL_bufferz00_157)
	{
		{	/* Ieee/port.scm 1415 */
			bgl_output_port_buffer_set(BgL_portz00_156, BgL_bufferz00_157);
			BUNSPEC;
			return BgL_portz00_156;
		}

	}



/* &output-port-buffer-set! */
	obj_t BGl_z62outputzd2portzd2bufferzd2setz12za2zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3399, obj_t BgL_portz00_3400, obj_t BgL_bufferz00_3401)
	{
		{	/* Ieee/port.scm 1415 */
			{	/* Ieee/port.scm 1416 */
				obj_t BgL_auxz00_6029;
				obj_t BgL_auxz00_6022;

				if (STRINGP(BgL_bufferz00_3401))
					{	/* Ieee/port.scm 1416 */
						BgL_auxz00_6029 = BgL_bufferz00_3401;
					}
				else
					{
						obj_t BgL_auxz00_6032;

						BgL_auxz00_6032 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 63635)),
							BGl_string2589z00zz__r4_ports_6_10_1z00,
							BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_bufferz00_3401);
						FAILURE(BgL_auxz00_6032, BFALSE, BFALSE);
					}
				if (OUTPUT_PORTP(BgL_portz00_3400))
					{	/* Ieee/port.scm 1416 */
						BgL_auxz00_6022 = BgL_portz00_3400;
					}
				else
					{
						obj_t BgL_auxz00_6025;

						BgL_auxz00_6025 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 63635)),
							BGl_string2589z00zz__r4_ports_6_10_1z00,
							BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_portz00_3400);
						FAILURE(BgL_auxz00_6025, BFALSE, BFALSE);
					}
				return
					BGl_outputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00
					(BgL_auxz00_6022, BgL_auxz00_6029);
			}
		}

	}



/* file-exists? */
	BGL_EXPORTED_DEF bool_t BGl_filezd2existszf3z21zz__r4_ports_6_10_1z00(char
		*BgL_namez00_158)
	{
		{	/* Ieee/port.scm 1421 */
			return fexists(BgL_namez00_158);
		}

	}



/* &file-exists? */
	obj_t BGl_z62filezd2existszf3z43zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3402,
		obj_t BgL_namez00_3403)
	{
		{	/* Ieee/port.scm 1421 */
			{	/* Ieee/port.scm 1422 */
				bool_t BgL_tmpz00_6038;

				{	/* Ieee/port.scm 1422 */
					char *BgL_auxz00_6039;

					{	/* Ieee/port.scm 1422 */
						obj_t BgL_tmpz00_6040;

						if (STRINGP(BgL_namez00_3403))
							{	/* Ieee/port.scm 1422 */
								BgL_tmpz00_6040 = BgL_namez00_3403;
							}
						else
							{
								obj_t BgL_auxz00_6043;

								BgL_auxz00_6043 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 63905)), BGl_string2590z00zz__r4_ports_6_10_1z00,
									BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_namez00_3403);
								FAILURE(BgL_auxz00_6043, BFALSE, BFALSE);
							}
						BgL_auxz00_6039 = BSTRING_TO_STRING(BgL_tmpz00_6040);
					}
					BgL_tmpz00_6038 =
						BGl_filezd2existszf3z21zz__r4_ports_6_10_1z00(BgL_auxz00_6039);
				}
				return BBOOL(BgL_tmpz00_6038);
			}
		}

	}



/* file-gzip? */
	BGL_EXPORTED_DEF obj_t BGl_filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00(obj_t
		BgL_namez00_159)
	{
		{	/* Ieee/port.scm 1427 */
			if (fexists(BSTRING_TO_STRING(BgL_namez00_159)))
				{	/* Ieee/port.scm 1428 */
					return
						BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
						(BgL_namez00_159, BGl_proc2591z00zz__r4_ports_6_10_1z00);
				}
			else
				{	/* Ieee/port.scm 1428 */
					return BFALSE;
				}
		}

	}



/* &file-gzip? */
	obj_t BGl_z62filezd2gza7ipzf3ze4zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3407,
		obj_t BgL_namez00_3408)
	{
		{	/* Ieee/port.scm 1427 */
			return BGl_filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00(BgL_namez00_3408);
		}

	}



/* &<@anonymous:1524> */
	obj_t BGl_z62zc3z04anonymousza31524ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3409)
	{
		{	/* Ieee/port.scm 1430 */
			{	/* Ieee/port.scm 1431 */
				obj_t BgL_res1121z00_3836;

				BgL_res1121z00_3836 = MAKE_CELL(BUNSPEC);
				if (CBOOL(BGl_zc3z04exitza31533ze3ze70z60zz__r4_ports_6_10_1z00
						(BgL_res1121z00_3836)))
					{	/* Ieee/port.scm 1431 */
						obj_t BgL_ez00_3837;

						BgL_ez00_3837 = CELL_REF(BgL_res1121z00_3836);
						return BFALSE;
					}
				else
					{	/* Ieee/port.scm 1431 */
						return CELL_REF(BgL_res1121z00_3836);
					}
			}
		}

	}



/* <@exit:1533>~0 */
	obj_t BGl_zc3z04exitza31533ze3ze70z60zz__r4_ports_6_10_1z00(obj_t
		BgL_res1121z00_3473)
	{
		{	/* Ieee/port.scm 1431 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1127z00_1827;

			if (SET_EXIT(BgL_an_exit1127z00_1827))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1127z00_1827 = (void *) jmpbuf;
					{	/* Ieee/port.scm 1431 */

						PUSH_EXIT(BgL_an_exit1127z00_1827, ((long) 1));
						{	/* Ieee/port.scm 1431 */
							obj_t BgL_an_exitd1128z00_1828;

							BgL_an_exitd1128z00_1828 = ((obj_t) (&exitd));
							{	/* Ieee/port.scm 1431 */
								bool_t BgL_res1130z00_1831;

								{	/* Ieee/port.scm 1431 */
									obj_t BgL_ohs1119z00_1832;

									BgL_ohs1119z00_1832 = BGL_ERROR_HANDLER_GET();
									{	/* Ieee/port.scm 1431 */
										obj_t BgL_exitd1124z00_1833;

										BgL_exitd1124z00_1833 = ((obj_t) (&exitd));
										{
											obj_t BgL_zc3z04anonymousza31538ze3z87_3404;

											BgL_zc3z04anonymousza31538ze3z87_3404 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31538ze3ze5zz__r4_ports_6_10_1z00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31538ze3z87_3404,
												(int) (((long) 0)), BgL_ohs1119z00_1832);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1124z00_1833,
												BgL_zc3z04anonymousza31538ze3z87_3404);
											{	/* Ieee/port.scm 1431 */
												bool_t BgL_tmp1126z00_1835;

												{	/* Ieee/port.scm 1431 */
													obj_t BgL_arg1534z00_1836;

													{	/* Ieee/port.scm 1431 */
														obj_t BgL_zc3z04anonymousza31536ze3z87_3405;

														BgL_zc3z04anonymousza31536ze3z87_3405 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31536ze3ze5zz__r4_ports_6_10_1z00,
															(int) (((long) 1)), (int) (((long) 2)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31536ze3z87_3405,
															(int) (((long) 0)),
															((obj_t) BgL_res1121z00_3473));
														PROCEDURE_SET(BgL_zc3z04anonymousza31536ze3z87_3405,
															(int) (((long) 1)), BgL_an_exitd1128z00_1828);
														BgL_arg1534z00_1836 =
															MAKE_YOUNG_PAIR
															(BgL_zc3z04anonymousza31536ze3z87_3405,
															BgL_ohs1119z00_1832);
													}
													BGL_ERROR_HANDLER_SET(BgL_arg1534z00_1836);
													BUNSPEC;
												}
												{	/* Ieee/port.scm 1431 */
													obj_t BgL_auxz00_3411;

													{	/* Ieee/port.scm 1434 */
														obj_t BgL_arg1537z00_1841;

														{	/* Ieee/port.scm 1434 */
															obj_t BgL_res2001z00_2653;

															{	/* Ieee/port.scm 632 */
																obj_t BgL_tmpz00_6078;

																BgL_tmpz00_6078 = BGL_CURRENT_DYNAMIC_ENV();
																BgL_res2001z00_2653 =
																	BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_6078);
															}
															BgL_arg1537z00_1841 = BgL_res2001z00_2653;
														}
														BgL_auxz00_3411 =
															BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7
															(BgL_arg1537z00_1841);
													}
													CELL_SET(BgL_res1121z00_3473, BgL_auxz00_3411);
												}
												BgL_tmp1126z00_1835 = ((bool_t) 0);
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1124z00_1833);
												BGL_ERROR_HANDLER_SET(BgL_ohs1119z00_1832);
												BUNSPEC;
												BgL_res1130z00_1831 = BgL_tmp1126z00_1835;
								}}}}
								POP_EXIT();
								return BBOOL(BgL_res1130z00_1831);
							}
						}
					}
				}
		}

	}



/* &<@anonymous:1536> */
	obj_t BGl_z62zc3z04anonymousza31536ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3413, obj_t BgL_ez00_3416)
	{
		{	/* Ieee/port.scm 1431 */
			{	/* Ieee/port.scm 1431 */
				obj_t BgL_res1121z00_3414;
				obj_t BgL_an_exitd1128z00_3415;

				BgL_res1121z00_3414 =
					PROCEDURE_REF(BgL_envz00_3413, (int) (((long) 0)));
				BgL_an_exitd1128z00_3415 =
					PROCEDURE_REF(BgL_envz00_3413, (int) (((long) 1)));
				CELL_SET(BgL_res1121z00_3414, BgL_ez00_3416);
				return
					BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1128z00_3415, BTRUE);
			}
		}

	}



/* &<@anonymous:1538> */
	obj_t BGl_z62zc3z04anonymousza31538ze3ze5zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3418)
	{
		{	/* Ieee/port.scm 1431 */
			{
				obj_t BgL_ohs1119z00_3419;

				BgL_ohs1119z00_3419 =
					PROCEDURE_REF(BgL_envz00_3418, (int) (((long) 0)));
				BGL_ERROR_HANDLER_SET(BgL_ohs1119z00_3419);
				return BUNSPEC;
			}
		}

	}



/* delete-file */
	BGL_EXPORTED_DEF obj_t BGl_deletezd2filezd2zz__r4_ports_6_10_1z00(char
		*BgL_stringz00_160)
	{
		{	/* Ieee/port.scm 1439 */
			if (unlink(BgL_stringz00_160))
				{	/* Ieee/port.scm 1440 */
					return BFALSE;
				}
			else
				{	/* Ieee/port.scm 1440 */
					return BTRUE;
				}
		}

	}



/* &delete-file */
	obj_t BGl_z62deletezd2filezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3420,
		obj_t BgL_stringz00_3421)
	{
		{	/* Ieee/port.scm 1439 */
			{	/* Ieee/port.scm 1440 */
				char *BgL_auxz00_6096;

				{	/* Ieee/port.scm 1440 */
					obj_t BgL_tmpz00_6097;

					if (STRINGP(BgL_stringz00_3421))
						{	/* Ieee/port.scm 1440 */
							BgL_tmpz00_6097 = BgL_stringz00_3421;
						}
					else
						{
							obj_t BgL_auxz00_6100;

							BgL_auxz00_6100 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 64609)),
								BGl_string2592z00zz__r4_ports_6_10_1z00,
								BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_stringz00_3421);
							FAILURE(BgL_auxz00_6100, BFALSE, BFALSE);
						}
					BgL_auxz00_6096 = BSTRING_TO_STRING(BgL_tmpz00_6097);
				}
				return BGl_deletezd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_6096);
			}
		}

	}



/* make-directory */
	BGL_EXPORTED_DEF bool_t BGl_makezd2directoryzd2zz__r4_ports_6_10_1z00(char
		*BgL_stringz00_161)
	{
		{	/* Ieee/port.scm 1445 */
			return !BGL_MKDIR(BgL_stringz00_161, ((long) 511));
		}

	}



/* &make-directory */
	obj_t BGl_z62makezd2directoryzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3422,
		obj_t BgL_stringz00_3423)
	{
		{	/* Ieee/port.scm 1445 */
			{	/* Ieee/port.scm 1446 */
				bool_t BgL_tmpz00_6107;

				{	/* Ieee/port.scm 1446 */
					char *BgL_auxz00_6108;

					{	/* Ieee/port.scm 1446 */
						obj_t BgL_tmpz00_6109;

						if (STRINGP(BgL_stringz00_3423))
							{	/* Ieee/port.scm 1446 */
								BgL_tmpz00_6109 = BgL_stringz00_3423;
							}
						else
							{
								obj_t BgL_auxz00_6112;

								BgL_auxz00_6112 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 64904)), BGl_string2593z00zz__r4_ports_6_10_1z00,
									BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_stringz00_3423);
								FAILURE(BgL_auxz00_6112, BFALSE, BFALSE);
							}
						BgL_auxz00_6108 = BSTRING_TO_STRING(BgL_tmpz00_6109);
					}
					BgL_tmpz00_6107 =
						BGl_makezd2directoryzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6108);
				}
				return BBOOL(BgL_tmpz00_6107);
			}
		}

	}



/* make-directories */
	BGL_EXPORTED_DEF bool_t BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(obj_t
		BgL_stringz00_162)
	{
		{	/* Ieee/port.scm 1451 */
			{	/* Ieee/port.scm 1452 */
				bool_t BgL__ortest_1131z00_1849;

				BgL__ortest_1131z00_1849 =
					bgl_directoryp(BSTRING_TO_STRING(BgL_stringz00_162));
				if (BgL__ortest_1131z00_1849)
					{	/* Ieee/port.scm 1452 */
						return BgL__ortest_1131z00_1849;
					}
				else
					{	/* Ieee/port.scm 1453 */
						bool_t BgL__ortest_1132z00_1850;

						{	/* Ieee/port.scm 1453 */
							bool_t BgL_res2003z00_2659;

							{	/* Ieee/port.scm 1446 */
								char *BgL_tmpz00_6122;

								BgL_tmpz00_6122 = BSTRING_TO_STRING(BgL_stringz00_162);
								BgL_res2003z00_2659 = !BGL_MKDIR(BgL_tmpz00_6122, ((long) 511));
							}
							BgL__ortest_1132z00_1850 = BgL_res2003z00_2659;
						}
						if (BgL__ortest_1132z00_1850)
							{	/* Ieee/port.scm 1453 */
								return BgL__ortest_1132z00_1850;
							}
						else
							{	/* Ieee/port.scm 1454 */
								obj_t BgL_dnamez00_1851;

								BgL_dnamez00_1851 = BGl_dirnamez00zz__osz00(BgL_stringz00_162);
								{	/* Ieee/port.scm 1455 */
									bool_t BgL_test3161z00_6127;

									if ((STRING_LENGTH(BgL_dnamez00_1851) == ((long) 0)))
										{	/* Ieee/port.scm 1455 */
											BgL_test3161z00_6127 = ((bool_t) 1);
										}
									else
										{	/* Ieee/port.scm 1455 */
											BgL_test3161z00_6127 =
												fexists(BSTRING_TO_STRING(BgL_dnamez00_1851));
										}
									if (BgL_test3161z00_6127)
										{	/* Ieee/port.scm 1455 */
											return ((bool_t) 0);
										}
									else
										{	/* Ieee/port.scm 1457 */
											bool_t BgL_auxz00_1856;

											BgL_auxz00_1856 =
												BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00
												(BgL_dnamez00_1851);
											if ((STRING_REF(BgL_stringz00_162,
														(STRING_LENGTH(BgL_stringz00_162) - ((long) 1))) ==
													(unsigned char) (FILE_SEPARATOR)))
												{	/* Ieee/port.scm 1458 */
													return BgL_auxz00_1856;
												}
											else
												{	/* Ieee/port.scm 1461 */
													bool_t BgL_res2011z00_2677;

													{	/* Ieee/port.scm 1446 */
														char *BgL_tmpz00_6140;

														BgL_tmpz00_6140 =
															BSTRING_TO_STRING(BgL_stringz00_162);
														BgL_res2011z00_2677 =
															!BGL_MKDIR(BgL_tmpz00_6140, ((long) 511));
													}
													return BgL_res2011z00_2677;
												}
										}
								}
							}
					}
			}
		}

	}



/* &make-directories */
	obj_t BGl_z62makezd2directorieszb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3424, obj_t BgL_stringz00_3425)
	{
		{	/* Ieee/port.scm 1451 */
			{	/* Ieee/port.scm 1452 */
				bool_t BgL_tmpz00_6143;

				{	/* Ieee/port.scm 1452 */
					obj_t BgL_auxz00_6144;

					if (STRINGP(BgL_stringz00_3425))
						{	/* Ieee/port.scm 1452 */
							BgL_auxz00_6144 = BgL_stringz00_3425;
						}
					else
						{
							obj_t BgL_auxz00_6147;

							BgL_auxz00_6147 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 65192)),
								BGl_string2594z00zz__r4_ports_6_10_1z00,
								BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_stringz00_3425);
							FAILURE(BgL_auxz00_6147, BFALSE, BFALSE);
						}
					BgL_tmpz00_6143 =
						BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(BgL_auxz00_6144);
				}
				return BBOOL(BgL_tmpz00_6143);
			}
		}

	}



/* delete-directory */
	BGL_EXPORTED_DEF obj_t BGl_deletezd2directoryzd2zz__r4_ports_6_10_1z00(char
		*BgL_stringz00_163)
	{
		{	/* Ieee/port.scm 1466 */
			if (rmdir(BgL_stringz00_163))
				{	/* Ieee/port.scm 1467 */
					return BFALSE;
				}
			else
				{	/* Ieee/port.scm 1467 */
					return BTRUE;
				}
		}

	}



/* &delete-directory */
	obj_t BGl_z62deletezd2directoryzb0zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3426, obj_t BgL_stringz00_3427)
	{
		{	/* Ieee/port.scm 1466 */
			{	/* Ieee/port.scm 1467 */
				char *BgL_auxz00_6155;

				{	/* Ieee/port.scm 1467 */
					obj_t BgL_tmpz00_6156;

					if (STRINGP(BgL_stringz00_3427))
						{	/* Ieee/port.scm 1467 */
							BgL_tmpz00_6156 = BgL_stringz00_3427;
						}
					else
						{
							obj_t BgL_auxz00_6159;

							BgL_auxz00_6159 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 65813)),
								BGl_string2595z00zz__r4_ports_6_10_1z00,
								BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_stringz00_3427);
							FAILURE(BgL_auxz00_6159, BFALSE, BFALSE);
						}
					BgL_auxz00_6155 = BSTRING_TO_STRING(BgL_tmpz00_6156);
				}
				return BGl_deletezd2directoryzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6155);
			}
		}

	}



/* rename-file */
	BGL_EXPORTED_DEF bool_t BGl_renamezd2filezd2zz__r4_ports_6_10_1z00(char
		*BgL_string1z00_164, char *BgL_string2z00_165)
	{
		{	/* Ieee/port.scm 1472 */
			{	/* Ieee/port.scm 1473 */
				int BgL_arg1564z00_3838;

				BgL_arg1564z00_3838 = rename(BgL_string1z00_164, BgL_string2z00_165);
				return (BINT(BgL_arg1564z00_3838) == BINT(((long) 0)));
		}}

	}



/* &rename-file */
	obj_t BGl_z62renamezd2filezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3428,
		obj_t BgL_string1z00_3429, obj_t BgL_string2z00_3430)
	{
		{	/* Ieee/port.scm 1472 */
			{	/* Ieee/port.scm 1473 */
				bool_t BgL_tmpz00_6169;

				{	/* Ieee/port.scm 1473 */
					char *BgL_auxz00_6179;
					char *BgL_auxz00_6170;

					{	/* Ieee/port.scm 1473 */
						obj_t BgL_tmpz00_6180;

						if (STRINGP(BgL_string2z00_3430))
							{	/* Ieee/port.scm 1473 */
								BgL_tmpz00_6180 = BgL_string2z00_3430;
							}
						else
							{
								obj_t BgL_auxz00_6183;

								BgL_auxz00_6183 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 66128)), BGl_string2596z00zz__r4_ports_6_10_1z00,
									BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_string2z00_3430);
								FAILURE(BgL_auxz00_6183, BFALSE, BFALSE);
							}
						BgL_auxz00_6179 = BSTRING_TO_STRING(BgL_tmpz00_6180);
					}
					{	/* Ieee/port.scm 1473 */
						obj_t BgL_tmpz00_6171;

						if (STRINGP(BgL_string1z00_3429))
							{	/* Ieee/port.scm 1473 */
								BgL_tmpz00_6171 = BgL_string1z00_3429;
							}
						else
							{
								obj_t BgL_auxz00_6174;

								BgL_auxz00_6174 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 66128)), BGl_string2596z00zz__r4_ports_6_10_1z00,
									BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_string1z00_3429);
								FAILURE(BgL_auxz00_6174, BFALSE, BFALSE);
							}
						BgL_auxz00_6170 = BSTRING_TO_STRING(BgL_tmpz00_6171);
					}
					BgL_tmpz00_6169 =
						BGl_renamezd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_6170,
						BgL_auxz00_6179);
				}
				return BBOOL(BgL_tmpz00_6169);
			}
		}

	}



/* truncate-file */
	BGL_EXPORTED_DEF bool_t BGl_truncatezd2filezd2zz__r4_ports_6_10_1z00(char
		*BgL_pathz00_166, long BgL_siza7eza7_167)
	{
		{	/* Ieee/port.scm 1478 */
			{	/* Ieee/port.scm 1479 */
				int BgL_xz00_3839;

				BgL_xz00_3839 = truncate(BgL_pathz00_166, BgL_siza7eza7_167);
				return ((bool_t) 1);
			}
		}

	}



/* &truncate-file */
	obj_t BGl_z62truncatezd2filezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3431,
		obj_t BgL_pathz00_3432, obj_t BgL_siza7eza7_3433)
	{
		{	/* Ieee/port.scm 1478 */
			{	/* Ieee/port.scm 1479 */
				bool_t BgL_tmpz00_6191;

				{	/* Ieee/port.scm 1479 */
					long BgL_auxz00_6201;
					char *BgL_auxz00_6192;

					{	/* Ieee/port.scm 1479 */
						obj_t BgL_tmpz00_6202;

						if (INTEGERP(BgL_siza7eza7_3433))
							{	/* Ieee/port.scm 1479 */
								BgL_tmpz00_6202 = BgL_siza7eza7_3433;
							}
						else
							{
								obj_t BgL_auxz00_6205;

								BgL_auxz00_6205 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 66438)), BGl_string2597z00zz__r4_ports_6_10_1z00,
									BGl_string2496z00zz__r4_ports_6_10_1z00, BgL_siza7eza7_3433);
								FAILURE(BgL_auxz00_6205, BFALSE, BFALSE);
							}
						BgL_auxz00_6201 = (long) CINT(BgL_tmpz00_6202);
					}
					{	/* Ieee/port.scm 1479 */
						obj_t BgL_tmpz00_6193;

						if (STRINGP(BgL_pathz00_3432))
							{	/* Ieee/port.scm 1479 */
								BgL_tmpz00_6193 = BgL_pathz00_3432;
							}
						else
							{
								obj_t BgL_auxz00_6196;

								BgL_auxz00_6196 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 66438)), BGl_string2597z00zz__r4_ports_6_10_1z00,
									BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_pathz00_3432);
								FAILURE(BgL_auxz00_6196, BFALSE, BFALSE);
							}
						BgL_auxz00_6192 = BSTRING_TO_STRING(BgL_tmpz00_6193);
					}
					BgL_tmpz00_6191 =
						BGl_truncatezd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_6192,
						BgL_auxz00_6201);
				}
				return BBOOL(BgL_tmpz00_6191);
			}
		}

	}



/* output-port-truncate */
	BGL_EXPORTED_DEF bool_t
		BGl_outputzd2portzd2truncatez00zz__r4_ports_6_10_1z00(obj_t
		BgL_oportz00_168, long BgL_siza7eza7_169)
	{
		{	/* Ieee/port.scm 1484 */
			{	/* Ieee/port.scm 1485 */
				int BgL_xz00_3840;

				BgL_xz00_3840 =
					bgl_output_port_truncate(BgL_oportz00_168, BgL_siza7eza7_169);
				return ((bool_t) 1);
			}
		}

	}



/* &output-port-truncate */
	obj_t BGl_z62outputzd2portzd2truncatez62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3434, obj_t BgL_oportz00_3435, obj_t BgL_siza7eza7_3436)
	{
		{	/* Ieee/port.scm 1484 */
			{	/* Ieee/port.scm 1485 */
				bool_t BgL_tmpz00_6213;

				{	/* Ieee/port.scm 1485 */
					long BgL_auxz00_6221;
					obj_t BgL_auxz00_6214;

					{	/* Ieee/port.scm 1485 */
						obj_t BgL_tmpz00_6222;

						if (INTEGERP(BgL_siza7eza7_3436))
							{	/* Ieee/port.scm 1485 */
								BgL_tmpz00_6222 = BgL_siza7eza7_3436;
							}
						else
							{
								obj_t BgL_auxz00_6225;

								BgL_auxz00_6225 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 66741)), BGl_string2598z00zz__r4_ports_6_10_1z00,
									BGl_string2496z00zz__r4_ports_6_10_1z00, BgL_siza7eza7_3436);
								FAILURE(BgL_auxz00_6225, BFALSE, BFALSE);
							}
						BgL_auxz00_6221 = (long) CINT(BgL_tmpz00_6222);
					}
					if (OUTPUT_PORTP(BgL_oportz00_3435))
						{	/* Ieee/port.scm 1485 */
							BgL_auxz00_6214 = BgL_oportz00_3435;
						}
					else
						{
							obj_t BgL_auxz00_6217;

							BgL_auxz00_6217 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 66741)),
								BGl_string2598z00zz__r4_ports_6_10_1z00,
								BGl_string2479z00zz__r4_ports_6_10_1z00, BgL_oportz00_3435);
							FAILURE(BgL_auxz00_6217, BFALSE, BFALSE);
						}
					BgL_tmpz00_6213 =
						BGl_outputzd2portzd2truncatez00zz__r4_ports_6_10_1z00
						(BgL_auxz00_6214, BgL_auxz00_6221);
				}
				return BBOOL(BgL_tmpz00_6213);
			}
		}

	}



/* copy-file */
	BGL_EXPORTED_DEF obj_t BGl_copyzd2filezd2zz__r4_ports_6_10_1z00(char
		*BgL_string1z00_170, char *BgL_string2z00_171)
	{
		{	/* Ieee/port.scm 1490 */
			{	/* Ieee/port.scm 1491 */
				obj_t BgL_piz00_1872;
				obj_t BgL_poz00_1873;

				BgL_piz00_1872 =
					BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(string_to_bstring
					(BgL_string1z00_170));
				BgL_poz00_1873 =
					BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(string_to_bstring
					(BgL_string2z00_171));
				if (BINARY_PORTP(BgL_piz00_1872))
					{	/* Ieee/port.scm 1494 */
						if (BINARY_PORTP(BgL_poz00_1873))
							{	/* Ieee/port.scm 1501 */
								obj_t BgL_sz00_1876;

								{	/* Ieee/string.scm 168 */

									BgL_sz00_1876 =
										make_string(((long) 1024), ((unsigned char) ' '));
								}
								{	/* Ieee/port.scm 1502 */
									int BgL_g1133z00_1877;

									BgL_g1133z00_1877 =
										bgl_input_fill_string(BgL_piz00_1872, BgL_sz00_1876);
									{
										int BgL_lz00_1879;

										{	/* Ieee/port.scm 1502 */
											bool_t BgL_tmpz00_6242;

											BgL_lz00_1879 = BgL_g1133z00_1877;
										BgL_zc3z04anonymousza31567ze3z87_1880:
											if (((long) (BgL_lz00_1879) == ((long) 1024)))
												{	/* Ieee/port.scm 1503 */
													bgl_output_string(
														((obj_t) BgL_poz00_1873), BgL_sz00_1876);
													{	/* Ieee/port.scm 1506 */
														int BgL_arg1569z00_1882;

														{	/* Ieee/port.scm 1506 */
															int BgL_res2017z00_2694;

															BgL_res2017z00_2694 =
																bgl_input_fill_string(
																((obj_t) BgL_piz00_1872), BgL_sz00_1876);
															BgL_arg1569z00_1882 = BgL_res2017z00_2694;
														}
														{
															int BgL_lz00_6250;

															BgL_lz00_6250 = BgL_arg1569z00_1882;
															BgL_lz00_1879 = BgL_lz00_6250;
															goto BgL_zc3z04anonymousza31567ze3z87_1880;
														}
													}
												}
											else
												{	/* Ieee/port.scm 1503 */
													{	/* Ieee/port.scm 1508 */
														obj_t BgL_arg1570z00_1883;

														{	/* Ieee/port.scm 1508 */
															long BgL_tmpz00_6251;

															BgL_tmpz00_6251 = (long) (BgL_lz00_1879);
															BgL_arg1570z00_1883 =
																bgl_string_shrink(BgL_sz00_1876,
																BgL_tmpz00_6251);
														}
														bgl_output_string(
															((obj_t) BgL_poz00_1873), BgL_arg1570z00_1883);
													}
													close_binary_port(((obj_t) BgL_piz00_1872));
													close_binary_port(((obj_t) BgL_poz00_1873));
													BgL_tmpz00_6242 = ((bool_t) 1);
												}
											return BBOOL(BgL_tmpz00_6242);
										}
									}
								}
							}
						else
							{	/* Ieee/port.scm 1497 */
								close_binary_port(BgL_piz00_1872);
								return BFALSE;
							}
					}
				else
					{	/* Ieee/port.scm 1494 */
						if (BINARY_PORTP(BgL_poz00_1873))
							{	/* Ieee/port.scm 1495 */
								close_binary_port(BgL_poz00_1873);
							}
						else
							{	/* Ieee/port.scm 1495 */
								BFALSE;
							}
						return BFALSE;
					}
			}
		}

	}



/* &copy-file */
	obj_t BGl_z62copyzd2filezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3437,
		obj_t BgL_string1z00_3438, obj_t BgL_string2z00_3439)
	{
		{	/* Ieee/port.scm 1490 */
			{	/* Ieee/port.scm 1491 */
				char *BgL_auxz00_6274;
				char *BgL_auxz00_6265;

				{	/* Ieee/port.scm 1491 */
					obj_t BgL_tmpz00_6275;

					if (STRINGP(BgL_string2z00_3439))
						{	/* Ieee/port.scm 1491 */
							BgL_tmpz00_6275 = BgL_string2z00_3439;
						}
					else
						{
							obj_t BgL_auxz00_6278;

							BgL_auxz00_6278 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 67028)),
								BGl_string2599z00zz__r4_ports_6_10_1z00,
								BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_string2z00_3439);
							FAILURE(BgL_auxz00_6278, BFALSE, BFALSE);
						}
					BgL_auxz00_6274 = BSTRING_TO_STRING(BgL_tmpz00_6275);
				}
				{	/* Ieee/port.scm 1491 */
					obj_t BgL_tmpz00_6266;

					if (STRINGP(BgL_string1z00_3438))
						{	/* Ieee/port.scm 1491 */
							BgL_tmpz00_6266 = BgL_string1z00_3438;
						}
					else
						{
							obj_t BgL_auxz00_6269;

							BgL_auxz00_6269 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 67028)),
								BGl_string2599z00zz__r4_ports_6_10_1z00,
								BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_string1z00_3438);
							FAILURE(BgL_auxz00_6269, BFALSE, BFALSE);
						}
					BgL_auxz00_6265 = BSTRING_TO_STRING(BgL_tmpz00_6266);
				}
				return
					BGl_copyzd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_6265,
					BgL_auxz00_6274);
			}
		}

	}



/* port? */
	BGL_EXPORTED_DEF bool_t BGl_portzf3zf3zz__r4_ports_6_10_1z00(obj_t
		BgL_objz00_172)
	{
		{	/* Ieee/port.scm 1516 */
			{	/* Ieee/port.scm 1517 */
				bool_t BgL__ortest_1134z00_3841;

				BgL__ortest_1134z00_3841 = OUTPUT_PORTP(BgL_objz00_172);
				if (BgL__ortest_1134z00_3841)
					{	/* Ieee/port.scm 1517 */
						return BgL__ortest_1134z00_3841;
					}
				else
					{	/* Ieee/port.scm 1517 */
						return INPUT_PORTP(BgL_objz00_172);
					}
			}
		}

	}



/* &port? */
	obj_t BGl_z62portzf3z91zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3440,
		obj_t BgL_objz00_3441)
	{
		{	/* Ieee/port.scm 1516 */
			return BBOOL(BGl_portzf3zf3zz__r4_ports_6_10_1z00(BgL_objz00_3441));
		}

	}



/* directory? */
	BGL_EXPORTED_DEF bool_t BGl_directoryzf3zf3zz__r4_ports_6_10_1z00(char
		*BgL_stringz00_173)
	{
		{	/* Ieee/port.scm 1522 */
			return bgl_directoryp(BgL_stringz00_173);
		}

	}



/* &directory? */
	obj_t BGl_z62directoryzf3z91zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3442,
		obj_t BgL_stringz00_3443)
	{
		{	/* Ieee/port.scm 1522 */
			{	/* Ieee/port.scm 1523 */
				bool_t BgL_tmpz00_6290;

				{	/* Ieee/port.scm 1523 */
					char *BgL_auxz00_6291;

					{	/* Ieee/port.scm 1523 */
						obj_t BgL_tmpz00_6292;

						if (STRINGP(BgL_stringz00_3443))
							{	/* Ieee/port.scm 1523 */
								BgL_tmpz00_6292 = BgL_stringz00_3443;
							}
						else
							{
								obj_t BgL_auxz00_6295;

								BgL_auxz00_6295 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 68166)), BGl_string2600z00zz__r4_ports_6_10_1z00,
									BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_stringz00_3443);
								FAILURE(BgL_auxz00_6295, BFALSE, BFALSE);
							}
						BgL_auxz00_6291 = BSTRING_TO_STRING(BgL_tmpz00_6292);
					}
					BgL_tmpz00_6290 =
						BGl_directoryzf3zf3zz__r4_ports_6_10_1z00(BgL_auxz00_6291);
				}
				return BBOOL(BgL_tmpz00_6290);
			}
		}

	}



/* directory->list */
	BGL_EXPORTED_DEF obj_t BGl_directoryzd2ze3listz31zz__r4_ports_6_10_1z00(char
		*BgL_stringz00_174)
	{
		{	/* Ieee/port.scm 1528 */
			return bgl_directory_to_list(BgL_stringz00_174);
		}

	}



/* &directory->list */
	obj_t BGl_z62directoryzd2ze3listz53zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3444, obj_t BgL_stringz00_3445)
	{
		{	/* Ieee/port.scm 1528 */
			{	/* Ieee/port.scm 1529 */
				char *BgL_auxz00_6303;

				{	/* Ieee/port.scm 1529 */
					obj_t BgL_tmpz00_6304;

					if (STRINGP(BgL_stringz00_3445))
						{	/* Ieee/port.scm 1529 */
							BgL_tmpz00_6304 = BgL_stringz00_3445;
						}
					else
						{
							obj_t BgL_auxz00_6307;

							BgL_auxz00_6307 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 68454)),
								BGl_string2601z00zz__r4_ports_6_10_1z00,
								BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_stringz00_3445);
							FAILURE(BgL_auxz00_6307, BFALSE, BFALSE);
						}
					BgL_auxz00_6303 = BSTRING_TO_STRING(BgL_tmpz00_6304);
				}
				return
					BGl_directoryzd2ze3listz31zz__r4_ports_6_10_1z00(BgL_auxz00_6303);
			}
		}

	}



/* directory->path-list */
	BGL_EXPORTED_DEF obj_t
		BGl_directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00(obj_t
		BgL_dirz00_175)
	{
		{	/* Ieee/port.scm 1534 */
			{	/* Ieee/port.scm 1535 */
				long BgL_lz00_1889;

				BgL_lz00_1889 = STRING_LENGTH(BgL_dirz00_175);
				if ((BgL_lz00_1889 == ((long) 0)))
					{	/* Ieee/port.scm 1537 */
						return BNIL;
					}
				else
					{	/* Ieee/port.scm 1537 */
						if (
							(STRING_REF(BgL_dirz00_175,
									(BgL_lz00_1889 - ((long) 1))) ==
								(unsigned char) (FILE_SEPARATOR)))
							{	/* Ieee/port.scm 1542 */
								long BgL_arg1577z00_1895;

								BgL_arg1577z00_1895 = (BgL_lz00_1889 - ((long) 1));
								return
									bgl_directory_to_path_list(BSTRING_TO_STRING(BgL_dirz00_175),
									(int) (BgL_arg1577z00_1895), FILE_SEPARATOR);
							}
						else
							{	/* Ieee/port.scm 1539 */
								return
									bgl_directory_to_path_list(BSTRING_TO_STRING(BgL_dirz00_175),
									(int) (BgL_lz00_1889), FILE_SEPARATOR);
		}}}}

	}



/* &directory->path-list */
	obj_t BGl_z62directoryzd2ze3pathzd2listz81zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3446, obj_t BgL_dirz00_3447)
	{
		{	/* Ieee/port.scm 1534 */
			{	/* Ieee/port.scm 1535 */
				obj_t BgL_auxz00_6328;

				if (STRINGP(BgL_dirz00_3447))
					{	/* Ieee/port.scm 1535 */
						BgL_auxz00_6328 = BgL_dirz00_3447;
					}
				else
					{
						obj_t BgL_auxz00_6331;

						BgL_auxz00_6331 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 68742)),
							BGl_string2602z00zz__r4_ports_6_10_1z00,
							BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_dirz00_3447);
						FAILURE(BgL_auxz00_6331, BFALSE, BFALSE);
					}
				return
					BGl_directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00
					(BgL_auxz00_6328);
			}
		}

	}



/* file-modification-time */
	BGL_EXPORTED_DEF long
		BGl_filezd2modificationzd2timez00zz__r4_ports_6_10_1z00(char
		*BgL_filez00_176)
	{
		{	/* Ieee/port.scm 1557 */
			return bgl_last_modification_time(BgL_filez00_176);
		}

	}



/* &file-modification-time */
	obj_t BGl_z62filezd2modificationzd2timez62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3448, obj_t BgL_filez00_3449)
	{
		{	/* Ieee/port.scm 1557 */
			{	/* Ieee/port.scm 1558 */
				long BgL_tmpz00_6337;

				{	/* Ieee/port.scm 1558 */
					char *BgL_auxz00_6338;

					{	/* Ieee/port.scm 1558 */
						obj_t BgL_tmpz00_6339;

						if (STRINGP(BgL_filez00_3449))
							{	/* Ieee/port.scm 1558 */
								BgL_tmpz00_6339 = BgL_filez00_3449;
							}
						else
							{
								obj_t BgL_auxz00_6342;

								BgL_auxz00_6342 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 69515)), BGl_string2603z00zz__r4_ports_6_10_1z00,
									BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_filez00_3449);
								FAILURE(BgL_auxz00_6342, BFALSE, BFALSE);
							}
						BgL_auxz00_6338 = BSTRING_TO_STRING(BgL_tmpz00_6339);
					}
					BgL_tmpz00_6337 =
						BGl_filezd2modificationzd2timez00zz__r4_ports_6_10_1z00
						(BgL_auxz00_6338);
				}
				return make_belong(BgL_tmpz00_6337);
			}
		}

	}



/* file-change-time */
	BGL_EXPORTED_DEF long BGl_filezd2changezd2timez00zz__r4_ports_6_10_1z00(char
		*BgL_filez00_177)
	{
		{	/* Ieee/port.scm 1563 */
			return bgl_last_change_time(BgL_filez00_177);
		}

	}



/* &file-change-time */
	obj_t BGl_z62filezd2changezd2timez62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3450, obj_t BgL_filez00_3451)
	{
		{	/* Ieee/port.scm 1563 */
			{	/* Ieee/port.scm 1564 */
				long BgL_tmpz00_6350;

				{	/* Ieee/port.scm 1564 */
					char *BgL_auxz00_6351;

					{	/* Ieee/port.scm 1564 */
						obj_t BgL_tmpz00_6352;

						if (STRINGP(BgL_filez00_3451))
							{	/* Ieee/port.scm 1564 */
								BgL_tmpz00_6352 = BgL_filez00_3451;
							}
						else
							{
								obj_t BgL_auxz00_6355;

								BgL_auxz00_6355 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 69807)), BGl_string2604z00zz__r4_ports_6_10_1z00,
									BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_filez00_3451);
								FAILURE(BgL_auxz00_6355, BFALSE, BFALSE);
							}
						BgL_auxz00_6351 = BSTRING_TO_STRING(BgL_tmpz00_6352);
					}
					BgL_tmpz00_6350 =
						BGl_filezd2changezd2timez00zz__r4_ports_6_10_1z00(BgL_auxz00_6351);
				}
				return make_belong(BgL_tmpz00_6350);
			}
		}

	}



/* file-access-time */
	BGL_EXPORTED_DEF long BGl_filezd2accesszd2timez00zz__r4_ports_6_10_1z00(char
		*BgL_filez00_178)
	{
		{	/* Ieee/port.scm 1569 */
			return bgl_last_access_time(BgL_filez00_178);
		}

	}



/* &file-access-time */
	obj_t BGl_z62filezd2accesszd2timez62zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3452, obj_t BgL_filez00_3453)
	{
		{	/* Ieee/port.scm 1569 */
			{	/* Ieee/port.scm 1570 */
				long BgL_tmpz00_6363;

				{	/* Ieee/port.scm 1570 */
					char *BgL_auxz00_6364;

					{	/* Ieee/port.scm 1570 */
						obj_t BgL_tmpz00_6365;

						if (STRINGP(BgL_filez00_3453))
							{	/* Ieee/port.scm 1570 */
								BgL_tmpz00_6365 = BgL_filez00_3453;
							}
						else
							{
								obj_t BgL_auxz00_6368;

								BgL_auxz00_6368 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 70093)), BGl_string2605z00zz__r4_ports_6_10_1z00,
									BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_filez00_3453);
								FAILURE(BgL_auxz00_6368, BFALSE, BFALSE);
							}
						BgL_auxz00_6364 = BSTRING_TO_STRING(BgL_tmpz00_6365);
					}
					BgL_tmpz00_6363 =
						BGl_filezd2accesszd2timez00zz__r4_ports_6_10_1z00(BgL_auxz00_6364);
				}
				return make_belong(BgL_tmpz00_6363);
			}
		}

	}



/* file-times-set! */
	BGL_EXPORTED_DEF int BGl_filezd2timeszd2setz12z12zz__r4_ports_6_10_1z00(char
		*BgL_filez00_179, long BgL_atimez00_180, long BgL_mtimez00_181)
	{
		{	/* Ieee/port.scm 1575 */
			return bgl_utime(BgL_filez00_179, BgL_atimez00_180, BgL_mtimez00_181);
		}

	}



/* &file-times-set! */
	obj_t BGl_z62filezd2timeszd2setz12z70zz__r4_ports_6_10_1z00(obj_t
		BgL_envz00_3454, obj_t BgL_filez00_3455, obj_t BgL_atimez00_3456,
		obj_t BgL_mtimez00_3457)
	{
		{	/* Ieee/port.scm 1575 */
			{	/* Ieee/port.scm 1576 */
				int BgL_tmpz00_6376;

				{	/* Ieee/port.scm 1576 */
					long BgL_auxz00_6395;
					long BgL_auxz00_6386;
					char *BgL_auxz00_6377;

					{	/* Ieee/port.scm 1576 */
						obj_t BgL_tmpz00_6396;

						if (ELONGP(BgL_mtimez00_3457))
							{	/* Ieee/port.scm 1576 */
								BgL_tmpz00_6396 = BgL_mtimez00_3457;
							}
						else
							{
								obj_t BgL_auxz00_6399;

								BgL_auxz00_6399 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 70390)), BGl_string2606z00zz__r4_ports_6_10_1z00,
									BGl_string2607z00zz__r4_ports_6_10_1z00, BgL_mtimez00_3457);
								FAILURE(BgL_auxz00_6399, BFALSE, BFALSE);
							}
						BgL_auxz00_6395 = BELONG_TO_LONG(BgL_tmpz00_6396);
					}
					{	/* Ieee/port.scm 1576 */
						obj_t BgL_tmpz00_6387;

						if (ELONGP(BgL_atimez00_3456))
							{	/* Ieee/port.scm 1576 */
								BgL_tmpz00_6387 = BgL_atimez00_3456;
							}
						else
							{
								obj_t BgL_auxz00_6390;

								BgL_auxz00_6390 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 70390)), BGl_string2606z00zz__r4_ports_6_10_1z00,
									BGl_string2607z00zz__r4_ports_6_10_1z00, BgL_atimez00_3456);
								FAILURE(BgL_auxz00_6390, BFALSE, BFALSE);
							}
						BgL_auxz00_6386 = BELONG_TO_LONG(BgL_tmpz00_6387);
					}
					{	/* Ieee/port.scm 1576 */
						obj_t BgL_tmpz00_6378;

						if (STRINGP(BgL_filez00_3455))
							{	/* Ieee/port.scm 1576 */
								BgL_tmpz00_6378 = BgL_filez00_3455;
							}
						else
							{
								obj_t BgL_auxz00_6381;

								BgL_auxz00_6381 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 70390)), BGl_string2606z00zz__r4_ports_6_10_1z00,
									BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_filez00_3455);
								FAILURE(BgL_auxz00_6381, BFALSE, BFALSE);
							}
						BgL_auxz00_6377 = BSTRING_TO_STRING(BgL_tmpz00_6378);
					}
					BgL_tmpz00_6376 =
						BGl_filezd2timeszd2setz12z12zz__r4_ports_6_10_1z00(BgL_auxz00_6377,
						BgL_auxz00_6386, BgL_auxz00_6395);
				}
				return BINT(BgL_tmpz00_6376);
			}
		}

	}



/* file-size */
	BGL_EXPORTED_DEF long BGl_filezd2siza7ez75zz__r4_ports_6_10_1z00(char
		*BgL_filez00_182)
	{
		{	/* Ieee/port.scm 1581 */
			return bgl_file_size(BgL_filez00_182);
		}

	}



/* &file-size */
	obj_t BGl_z62filezd2siza7ez17zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3458,
		obj_t BgL_filez00_3459)
	{
		{	/* Ieee/port.scm 1581 */
			{	/* Ieee/port.scm 1582 */
				long BgL_tmpz00_6407;

				{	/* Ieee/port.scm 1582 */
					char *BgL_auxz00_6408;

					{	/* Ieee/port.scm 1582 */
						obj_t BgL_tmpz00_6409;

						if (STRINGP(BgL_filez00_3459))
							{	/* Ieee/port.scm 1582 */
								BgL_tmpz00_6409 = BgL_filez00_3459;
							}
						else
							{
								obj_t BgL_auxz00_6412;

								BgL_auxz00_6412 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 70675)), BGl_string2608z00zz__r4_ports_6_10_1z00,
									BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_filez00_3459);
								FAILURE(BgL_auxz00_6412, BFALSE, BFALSE);
							}
						BgL_auxz00_6408 = BSTRING_TO_STRING(BgL_tmpz00_6409);
					}
					BgL_tmpz00_6407 =
						BGl_filezd2siza7ez75zz__r4_ports_6_10_1z00(BgL_auxz00_6408);
				}
				return make_belong(BgL_tmpz00_6407);
			}
		}

	}



/* file-uid */
	BGL_EXPORTED_DEF int BGl_filezd2uidzd2zz__r4_ports_6_10_1z00(char
		*BgL_filez00_183)
	{
		{	/* Ieee/port.scm 1587 */
			return (int) (bgl_file_uid(BgL_filez00_183));
		}

	}



/* &file-uid */
	obj_t BGl_z62filezd2uidzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3460,
		obj_t BgL_filez00_3461)
	{
		{	/* Ieee/port.scm 1587 */
			{	/* Ieee/port.scm 1588 */
				int BgL_tmpz00_6421;

				{	/* Ieee/port.scm 1588 */
					char *BgL_auxz00_6422;

					{	/* Ieee/port.scm 1588 */
						obj_t BgL_tmpz00_6423;

						if (STRINGP(BgL_filez00_3461))
							{	/* Ieee/port.scm 1588 */
								BgL_tmpz00_6423 = BgL_filez00_3461;
							}
						else
							{
								obj_t BgL_auxz00_6426;

								BgL_auxz00_6426 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 70951)), BGl_string2609z00zz__r4_ports_6_10_1z00,
									BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_filez00_3461);
								FAILURE(BgL_auxz00_6426, BFALSE, BFALSE);
							}
						BgL_auxz00_6422 = BSTRING_TO_STRING(BgL_tmpz00_6423);
					}
					BgL_tmpz00_6421 =
						BGl_filezd2uidzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6422);
				}
				return BINT(BgL_tmpz00_6421);
			}
		}

	}



/* file-gid */
	BGL_EXPORTED_DEF int BGl_filezd2gidzd2zz__r4_ports_6_10_1z00(char
		*BgL_filez00_184)
	{
		{	/* Ieee/port.scm 1593 */
			return (int) (bgl_file_gid(BgL_filez00_184));
		}

	}



/* &file-gid */
	obj_t BGl_z62filezd2gidzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3462,
		obj_t BgL_filez00_3463)
	{
		{	/* Ieee/port.scm 1593 */
			{	/* Ieee/port.scm 1594 */
				int BgL_tmpz00_6435;

				{	/* Ieee/port.scm 1594 */
					char *BgL_auxz00_6436;

					{	/* Ieee/port.scm 1594 */
						obj_t BgL_tmpz00_6437;

						if (STRINGP(BgL_filez00_3463))
							{	/* Ieee/port.scm 1594 */
								BgL_tmpz00_6437 = BgL_filez00_3463;
							}
						else
							{
								obj_t BgL_auxz00_6440;

								BgL_auxz00_6440 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 71226)), BGl_string2610z00zz__r4_ports_6_10_1z00,
									BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_filez00_3463);
								FAILURE(BgL_auxz00_6440, BFALSE, BFALSE);
							}
						BgL_auxz00_6436 = BSTRING_TO_STRING(BgL_tmpz00_6437);
					}
					BgL_tmpz00_6435 =
						BGl_filezd2gidzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6436);
				}
				return BINT(BgL_tmpz00_6435);
			}
		}

	}



/* file-mode */
	BGL_EXPORTED_DEF int BGl_filezd2modezd2zz__r4_ports_6_10_1z00(char
		*BgL_filez00_185)
	{
		{	/* Ieee/port.scm 1599 */
			return (int) (bgl_file_mode(BgL_filez00_185));
		}

	}



/* &file-mode */
	obj_t BGl_z62filezd2modezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3464,
		obj_t BgL_filez00_3465)
	{
		{	/* Ieee/port.scm 1599 */
			{	/* Ieee/port.scm 1600 */
				int BgL_tmpz00_6449;

				{	/* Ieee/port.scm 1600 */
					char *BgL_auxz00_6450;

					{	/* Ieee/port.scm 1600 */
						obj_t BgL_tmpz00_6451;

						if (STRINGP(BgL_filez00_3465))
							{	/* Ieee/port.scm 1600 */
								BgL_tmpz00_6451 = BgL_filez00_3465;
							}
						else
							{
								obj_t BgL_auxz00_6454;

								BgL_auxz00_6454 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2452z00zz__r4_ports_6_10_1z00,
									BINT(((long) 71502)), BGl_string2611z00zz__r4_ports_6_10_1z00,
									BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_filez00_3465);
								FAILURE(BgL_auxz00_6454, BFALSE, BFALSE);
							}
						BgL_auxz00_6450 = BSTRING_TO_STRING(BgL_tmpz00_6451);
					}
					BgL_tmpz00_6449 =
						BGl_filezd2modezd2zz__r4_ports_6_10_1z00(BgL_auxz00_6450);
				}
				return BINT(BgL_tmpz00_6449);
			}
		}

	}



/* file-type */
	BGL_EXPORTED_DEF obj_t BGl_filezd2typezd2zz__r4_ports_6_10_1z00(char
		*BgL_filez00_186)
	{
		{	/* Ieee/port.scm 1605 */
			return bgl_file_type(BgL_filez00_186);
		}

	}



/* &file-type */
	obj_t BGl_z62filezd2typezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3466,
		obj_t BgL_filez00_3467)
	{
		{	/* Ieee/port.scm 1605 */
			{	/* Ieee/port.scm 1606 */
				char *BgL_auxz00_6462;

				{	/* Ieee/port.scm 1606 */
					obj_t BgL_tmpz00_6463;

					if (STRINGP(BgL_filez00_3467))
						{	/* Ieee/port.scm 1606 */
							BgL_tmpz00_6463 = BgL_filez00_3467;
						}
					else
						{
							obj_t BgL_auxz00_6466;

							BgL_auxz00_6466 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 71779)),
								BGl_string2612z00zz__r4_ports_6_10_1z00,
								BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_filez00_3467);
							FAILURE(BgL_auxz00_6466, BFALSE, BFALSE);
						}
					BgL_auxz00_6462 = BSTRING_TO_STRING(BgL_tmpz00_6463);
				}
				return BGl_filezd2typezd2zz__r4_ports_6_10_1z00(BgL_auxz00_6462);
			}
		}

	}



/* make-symlink */
	BGL_EXPORTED_DEF obj_t BGl_makezd2symlinkzd2zz__r4_ports_6_10_1z00(obj_t
		BgL_path1z00_187, obj_t BgL_path2z00_188)
	{
		{	/* Ieee/port.scm 1611 */
			return
				BINT(bgl_symlink(BSTRING_TO_STRING(BgL_path1z00_187),
					BSTRING_TO_STRING(BgL_path2z00_188)));
		}

	}



/* &make-symlink */
	obj_t BGl_z62makezd2symlinkzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3468,
		obj_t BgL_path1z00_3469, obj_t BgL_path2z00_3470)
	{
		{	/* Ieee/port.scm 1611 */
			{	/* Ieee/port.scm 1612 */
				obj_t BgL_auxz00_6483;
				obj_t BgL_auxz00_6476;

				if (STRINGP(BgL_path2z00_3470))
					{	/* Ieee/port.scm 1612 */
						BgL_auxz00_6483 = BgL_path2z00_3470;
					}
				else
					{
						obj_t BgL_auxz00_6486;

						BgL_auxz00_6486 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 72066)),
							BGl_string2613z00zz__r4_ports_6_10_1z00,
							BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_path2z00_3470);
						FAILURE(BgL_auxz00_6486, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_path1z00_3469))
					{	/* Ieee/port.scm 1612 */
						BgL_auxz00_6476 = BgL_path1z00_3469;
					}
				else
					{
						obj_t BgL_auxz00_6479;

						BgL_auxz00_6479 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2452z00zz__r4_ports_6_10_1z00, BINT(((long) 72066)),
							BGl_string2613z00zz__r4_ports_6_10_1z00,
							BGl_string2454z00zz__r4_ports_6_10_1z00, BgL_path1z00_3469);
						FAILURE(BgL_auxz00_6479, BFALSE, BFALSE);
					}
				return
					BGl_makezd2symlinkzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6476,
					BgL_auxz00_6483);
			}
		}

	}



/* _select */
	obj_t BGl__selectz00zz__r4_ports_6_10_1z00(obj_t BgL_env1258z00_194,
		obj_t BgL_opt1257z00_193)
	{
		{	/* Ieee/port.scm 1617 */
			{	/* Ieee/port.scm 1617 */

				{	/* Ieee/port.scm 1617 */
					obj_t BgL_exceptz00_3842;

					BgL_exceptz00_3842 = BNIL;
					{	/* Ieee/port.scm 1617 */
						obj_t BgL_readz00_3843;

						BgL_readz00_3843 = BNIL;
						{	/* Ieee/port.scm 1617 */
							obj_t BgL_timeoutz00_3844;

							BgL_timeoutz00_3844 = BINT(((long) 0));
							{	/* Ieee/port.scm 1617 */
								obj_t BgL_writez00_3845;

								BgL_writez00_3845 = BNIL;
								{	/* Ieee/port.scm 1617 */

									{
										long BgL_iz00_3847;

										BgL_iz00_3847 = ((long) 0);
									BgL_check1261z00_3846:
										if ((BgL_iz00_3847 == VECTOR_LENGTH(BgL_opt1257z00_193)))
											{	/* Ieee/port.scm 1617 */
												BNIL;
											}
										else
											{	/* Ieee/port.scm 1617 */
												bool_t BgL_test3199z00_6495;

												{	/* Ieee/port.scm 1617 */
													obj_t BgL_arg1593z00_3848;

													BgL_arg1593z00_3848 =
														VECTOR_REF(BgL_opt1257z00_193, BgL_iz00_3847);
													BgL_test3199z00_6495 =
														CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1593z00_3848,
															BGl_list2614z00zz__r4_ports_6_10_1z00));
												}
												if (BgL_test3199z00_6495)
													{
														long BgL_iz00_6499;

														BgL_iz00_6499 = (BgL_iz00_3847 + ((long) 2));
														BgL_iz00_3847 = BgL_iz00_6499;
														goto BgL_check1261z00_3846;
													}
												else
													{	/* Ieee/port.scm 1617 */
														obj_t BgL_arg1592z00_3849;

														BgL_arg1592z00_3849 =
															VECTOR_REF(BgL_opt1257z00_193, BgL_iz00_3847);
														BGl_errorz00zz__errorz00
															(BGl_symbol2623z00zz__r4_ports_6_10_1z00,
															BGl_string2625z00zz__r4_ports_6_10_1z00,
															BgL_arg1592z00_3849);
													}
											}
									}
									{	/* Ieee/port.scm 1617 */
										obj_t BgL_index1263z00_3850;

										BgL_index1263z00_3850 =
											BGl_search1260ze70ze7zz__r4_ports_6_10_1z00(VECTOR_LENGTH
											(BgL_opt1257z00_193), BgL_opt1257z00_193,
											BGl_keyword2615z00zz__r4_ports_6_10_1z00, ((long) 0));
										{	/* Ieee/port.scm 1617 */
											bool_t BgL_test3200z00_6505;

											{	/* Ieee/port.scm 1617 */
												long BgL_n1z00_3851;

												{	/* Ieee/port.scm 1617 */
													obj_t BgL_tmpz00_6506;

													if (INTEGERP(BgL_index1263z00_3850))
														{	/* Ieee/port.scm 1617 */
															BgL_tmpz00_6506 = BgL_index1263z00_3850;
														}
													else
														{
															obj_t BgL_auxz00_6509;

															BgL_auxz00_6509 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2452z00zz__r4_ports_6_10_1z00,
																BINT(((long) 72320)),
																BGl_string2626z00zz__r4_ports_6_10_1z00,
																BGl_string2496z00zz__r4_ports_6_10_1z00,
																BgL_index1263z00_3850);
															FAILURE(BgL_auxz00_6509, BFALSE, BFALSE);
														}
													BgL_n1z00_3851 = (long) CINT(BgL_tmpz00_6506);
												}
												BgL_test3200z00_6505 = (BgL_n1z00_3851 >= ((long) 0));
											}
											if (BgL_test3200z00_6505)
												{
													long BgL_auxz00_6515;

													{	/* Ieee/port.scm 1617 */
														obj_t BgL_tmpz00_6516;

														if (INTEGERP(BgL_index1263z00_3850))
															{	/* Ieee/port.scm 1617 */
																BgL_tmpz00_6516 = BgL_index1263z00_3850;
															}
														else
															{
																obj_t BgL_auxz00_6519;

																BgL_auxz00_6519 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2452z00zz__r4_ports_6_10_1z00,
																	BINT(((long) 72320)),
																	BGl_string2626z00zz__r4_ports_6_10_1z00,
																	BGl_string2496z00zz__r4_ports_6_10_1z00,
																	BgL_index1263z00_3850);
																FAILURE(BgL_auxz00_6519, BFALSE, BFALSE);
															}
														BgL_auxz00_6515 = (long) CINT(BgL_tmpz00_6516);
													}
													BgL_exceptz00_3842 =
														VECTOR_REF(BgL_opt1257z00_193, BgL_auxz00_6515);
												}
											else
												{	/* Ieee/port.scm 1617 */
													BFALSE;
												}
										}
									}
									{	/* Ieee/port.scm 1617 */
										obj_t BgL_index1264z00_3852;

										BgL_index1264z00_3852 =
											BGl_search1260ze70ze7zz__r4_ports_6_10_1z00(VECTOR_LENGTH
											(BgL_opt1257z00_193), BgL_opt1257z00_193,
											BGl_keyword2617z00zz__r4_ports_6_10_1z00, ((long) 0));
										{	/* Ieee/port.scm 1617 */
											bool_t BgL_test3203z00_6527;

											{	/* Ieee/port.scm 1617 */
												long BgL_n1z00_3853;

												{	/* Ieee/port.scm 1617 */
													obj_t BgL_tmpz00_6528;

													if (INTEGERP(BgL_index1264z00_3852))
														{	/* Ieee/port.scm 1617 */
															BgL_tmpz00_6528 = BgL_index1264z00_3852;
														}
													else
														{
															obj_t BgL_auxz00_6531;

															BgL_auxz00_6531 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2452z00zz__r4_ports_6_10_1z00,
																BINT(((long) 72320)),
																BGl_string2626z00zz__r4_ports_6_10_1z00,
																BGl_string2496z00zz__r4_ports_6_10_1z00,
																BgL_index1264z00_3852);
															FAILURE(BgL_auxz00_6531, BFALSE, BFALSE);
														}
													BgL_n1z00_3853 = (long) CINT(BgL_tmpz00_6528);
												}
												BgL_test3203z00_6527 = (BgL_n1z00_3853 >= ((long) 0));
											}
											if (BgL_test3203z00_6527)
												{
													long BgL_auxz00_6537;

													{	/* Ieee/port.scm 1617 */
														obj_t BgL_tmpz00_6538;

														if (INTEGERP(BgL_index1264z00_3852))
															{	/* Ieee/port.scm 1617 */
																BgL_tmpz00_6538 = BgL_index1264z00_3852;
															}
														else
															{
																obj_t BgL_auxz00_6541;

																BgL_auxz00_6541 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2452z00zz__r4_ports_6_10_1z00,
																	BINT(((long) 72320)),
																	BGl_string2626z00zz__r4_ports_6_10_1z00,
																	BGl_string2496z00zz__r4_ports_6_10_1z00,
																	BgL_index1264z00_3852);
																FAILURE(BgL_auxz00_6541, BFALSE, BFALSE);
															}
														BgL_auxz00_6537 = (long) CINT(BgL_tmpz00_6538);
													}
													BgL_readz00_3843 =
														VECTOR_REF(BgL_opt1257z00_193, BgL_auxz00_6537);
												}
											else
												{	/* Ieee/port.scm 1617 */
													BFALSE;
												}
										}
									}
									{	/* Ieee/port.scm 1617 */
										obj_t BgL_index1265z00_3854;

										BgL_index1265z00_3854 =
											BGl_search1260ze70ze7zz__r4_ports_6_10_1z00(VECTOR_LENGTH
											(BgL_opt1257z00_193), BgL_opt1257z00_193,
											BGl_keyword2619z00zz__r4_ports_6_10_1z00, ((long) 0));
										{	/* Ieee/port.scm 1617 */
											bool_t BgL_test3206z00_6549;

											{	/* Ieee/port.scm 1617 */
												long BgL_n1z00_3855;

												{	/* Ieee/port.scm 1617 */
													obj_t BgL_tmpz00_6550;

													if (INTEGERP(BgL_index1265z00_3854))
														{	/* Ieee/port.scm 1617 */
															BgL_tmpz00_6550 = BgL_index1265z00_3854;
														}
													else
														{
															obj_t BgL_auxz00_6553;

															BgL_auxz00_6553 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2452z00zz__r4_ports_6_10_1z00,
																BINT(((long) 72320)),
																BGl_string2626z00zz__r4_ports_6_10_1z00,
																BGl_string2496z00zz__r4_ports_6_10_1z00,
																BgL_index1265z00_3854);
															FAILURE(BgL_auxz00_6553, BFALSE, BFALSE);
														}
													BgL_n1z00_3855 = (long) CINT(BgL_tmpz00_6550);
												}
												BgL_test3206z00_6549 = (BgL_n1z00_3855 >= ((long) 0));
											}
											if (BgL_test3206z00_6549)
												{
													long BgL_auxz00_6559;

													{	/* Ieee/port.scm 1617 */
														obj_t BgL_tmpz00_6560;

														if (INTEGERP(BgL_index1265z00_3854))
															{	/* Ieee/port.scm 1617 */
																BgL_tmpz00_6560 = BgL_index1265z00_3854;
															}
														else
															{
																obj_t BgL_auxz00_6563;

																BgL_auxz00_6563 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2452z00zz__r4_ports_6_10_1z00,
																	BINT(((long) 72320)),
																	BGl_string2626z00zz__r4_ports_6_10_1z00,
																	BGl_string2496z00zz__r4_ports_6_10_1z00,
																	BgL_index1265z00_3854);
																FAILURE(BgL_auxz00_6563, BFALSE, BFALSE);
															}
														BgL_auxz00_6559 = (long) CINT(BgL_tmpz00_6560);
													}
													BgL_timeoutz00_3844 =
														VECTOR_REF(BgL_opt1257z00_193, BgL_auxz00_6559);
												}
											else
												{	/* Ieee/port.scm 1617 */
													BFALSE;
												}
										}
									}
									{	/* Ieee/port.scm 1617 */
										obj_t BgL_index1266z00_3856;

										BgL_index1266z00_3856 =
											BGl_search1260ze70ze7zz__r4_ports_6_10_1z00(VECTOR_LENGTH
											(BgL_opt1257z00_193), BgL_opt1257z00_193,
											BGl_keyword2621z00zz__r4_ports_6_10_1z00, ((long) 0));
										{	/* Ieee/port.scm 1617 */
											bool_t BgL_test3209z00_6571;

											{	/* Ieee/port.scm 1617 */
												long BgL_n1z00_3857;

												{	/* Ieee/port.scm 1617 */
													obj_t BgL_tmpz00_6572;

													if (INTEGERP(BgL_index1266z00_3856))
														{	/* Ieee/port.scm 1617 */
															BgL_tmpz00_6572 = BgL_index1266z00_3856;
														}
													else
														{
															obj_t BgL_auxz00_6575;

															BgL_auxz00_6575 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2452z00zz__r4_ports_6_10_1z00,
																BINT(((long) 72320)),
																BGl_string2626z00zz__r4_ports_6_10_1z00,
																BGl_string2496z00zz__r4_ports_6_10_1z00,
																BgL_index1266z00_3856);
															FAILURE(BgL_auxz00_6575, BFALSE, BFALSE);
														}
													BgL_n1z00_3857 = (long) CINT(BgL_tmpz00_6572);
												}
												BgL_test3209z00_6571 = (BgL_n1z00_3857 >= ((long) 0));
											}
											if (BgL_test3209z00_6571)
												{
													long BgL_auxz00_6581;

													{	/* Ieee/port.scm 1617 */
														obj_t BgL_tmpz00_6582;

														if (INTEGERP(BgL_index1266z00_3856))
															{	/* Ieee/port.scm 1617 */
																BgL_tmpz00_6582 = BgL_index1266z00_3856;
															}
														else
															{
																obj_t BgL_auxz00_6585;

																BgL_auxz00_6585 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2452z00zz__r4_ports_6_10_1z00,
																	BINT(((long) 72320)),
																	BGl_string2626z00zz__r4_ports_6_10_1z00,
																	BGl_string2496z00zz__r4_ports_6_10_1z00,
																	BgL_index1266z00_3856);
																FAILURE(BgL_auxz00_6585, BFALSE, BFALSE);
															}
														BgL_auxz00_6581 = (long) CINT(BgL_tmpz00_6582);
													}
													BgL_writez00_3845 =
														VECTOR_REF(BgL_opt1257z00_193, BgL_auxz00_6581);
												}
											else
												{	/* Ieee/port.scm 1617 */
													BFALSE;
												}
										}
									}
									{	/* Ieee/port.scm 1617 */
										obj_t BgL_exceptz00_3858;

										BgL_exceptz00_3858 = BgL_exceptz00_3842;
										{	/* Ieee/port.scm 1617 */
											obj_t BgL_readz00_3859;

											BgL_readz00_3859 = BgL_readz00_3843;
											{	/* Ieee/port.scm 1617 */
												obj_t BgL_timeoutz00_3860;

												BgL_timeoutz00_3860 = BgL_timeoutz00_3844;
												{	/* Ieee/port.scm 1617 */
													obj_t BgL_writez00_3861;

													BgL_writez00_3861 = BgL_writez00_3845;
													{	/* Ieee/port.scm 1617 */
														obj_t BgL_res2036z00_3862;

														{	/* Ieee/port.scm 1618 */
															obj_t BgL_auxz00_6614;
															obj_t BgL_auxz00_6607;
															obj_t BgL_auxz00_6600;
															long BgL_tmpz00_6591;

															if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_exceptz00_3858))
																{	/* Ieee/port.scm 1618 */
																	BgL_auxz00_6614 = BgL_exceptz00_3858;
																}
															else
																{
																	obj_t BgL_auxz00_6617;

																	BgL_auxz00_6617 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2452z00zz__r4_ports_6_10_1z00,
																		BINT(((long) 72429)),
																		BGl_string2626z00zz__r4_ports_6_10_1z00,
																		BGl_string2627z00zz__r4_ports_6_10_1z00,
																		BgL_exceptz00_3858);
																	FAILURE(BgL_auxz00_6617, BFALSE, BFALSE);
																}
															if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_writez00_3861))
																{	/* Ieee/port.scm 1618 */
																	BgL_auxz00_6607 = BgL_writez00_3861;
																}
															else
																{
																	obj_t BgL_auxz00_6610;

																	BgL_auxz00_6610 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2452z00zz__r4_ports_6_10_1z00,
																		BINT(((long) 72423)),
																		BGl_string2626z00zz__r4_ports_6_10_1z00,
																		BGl_string2627z00zz__r4_ports_6_10_1z00,
																		BgL_writez00_3861);
																	FAILURE(BgL_auxz00_6610, BFALSE, BFALSE);
																}
															if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_readz00_3859))
																{	/* Ieee/port.scm 1618 */
																	BgL_auxz00_6600 = BgL_readz00_3859;
																}
															else
																{
																	obj_t BgL_auxz00_6603;

																	BgL_auxz00_6603 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2452z00zz__r4_ports_6_10_1z00,
																		BINT(((long) 72418)),
																		BGl_string2626z00zz__r4_ports_6_10_1z00,
																		BGl_string2627z00zz__r4_ports_6_10_1z00,
																		BgL_readz00_3859);
																	FAILURE(BgL_auxz00_6603, BFALSE, BFALSE);
																}
															{	/* Ieee/port.scm 1618 */
																obj_t BgL_tmpz00_6592;

																if (INTEGERP(BgL_timeoutz00_3860))
																	{	/* Ieee/port.scm 1618 */
																		BgL_tmpz00_6592 = BgL_timeoutz00_3860;
																	}
																else
																	{
																		obj_t BgL_auxz00_6595;

																		BgL_auxz00_6595 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2452z00zz__r4_ports_6_10_1z00,
																			BINT(((long) 72410)),
																			BGl_string2626z00zz__r4_ports_6_10_1z00,
																			BGl_string2496z00zz__r4_ports_6_10_1z00,
																			BgL_timeoutz00_3860);
																		FAILURE(BgL_auxz00_6595, BFALSE, BFALSE);
																	}
																BgL_tmpz00_6591 = (long) CINT(BgL_tmpz00_6592);
															}
															BgL_res2036z00_3862 =
																bgl_select(BgL_tmpz00_6591, BgL_auxz00_6600,
																BgL_auxz00_6607, BgL_auxz00_6614);
														}
														return BgL_res2036z00_3862;
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



/* search1260~0 */
	obj_t BGl_search1260ze70ze7zz__r4_ports_6_10_1z00(long BgL_l1259z00_3472,
		obj_t BgL_opt1257z00_3471, obj_t BgL_k1z00_2721, long BgL_iz00_2722)
	{
		{	/* Ieee/port.scm 1617 */
		BGl_search1260ze70ze7zz__r4_ports_6_10_1z00:
			if ((BgL_iz00_2722 == BgL_l1259z00_3472))
				{	/* Ieee/port.scm 1617 */
					return BINT(((long) -1));
				}
			else
				{	/* Ieee/port.scm 1617 */
					if ((BgL_iz00_2722 == (BgL_l1259z00_3472 - ((long) 1))))
						{	/* Ieee/port.scm 1617 */
							return
								BGl_errorz00zz__errorz00
								(BGl_symbol2623z00zz__r4_ports_6_10_1z00,
								BGl_string2628z00zz__r4_ports_6_10_1z00,
								BINT(VECTOR_LENGTH(BgL_opt1257z00_3471)));
						}
					else
						{	/* Ieee/port.scm 1617 */
							obj_t BgL_vz00_2727;

							BgL_vz00_2727 = VECTOR_REF(BgL_opt1257z00_3471, BgL_iz00_2722);
							if ((BgL_vz00_2727 == BgL_k1z00_2721))
								{	/* Ieee/port.scm 1617 */
									return BINT((BgL_iz00_2722 + ((long) 1)));
								}
							else
								{
									long BgL_iz00_6636;

									BgL_iz00_6636 = (BgL_iz00_2722 + ((long) 2));
									BgL_iz00_2722 = BgL_iz00_6636;
									goto BGl_search1260ze70ze7zz__r4_ports_6_10_1z00;
								}
						}
				}
		}

	}



/* select */
	BGL_EXPORTED_DEF obj_t BGl_selectz00zz__r4_ports_6_10_1z00(obj_t
		BgL_exceptz00_189, obj_t BgL_readz00_190, obj_t BgL_timeoutz00_191,
		obj_t BgL_writez00_192)
	{
		{	/* Ieee/port.scm 1617 */
			return
				bgl_select(
				(long) CINT(BgL_timeoutz00_191), BgL_readz00_190, BgL_writez00_192,
				BgL_exceptz00_189);
		}

	}



/* _open-pipes */
	obj_t BGl__openzd2pipeszd2zz__r4_ports_6_10_1z00(obj_t BgL_env1268z00_197,
		obj_t BgL_opt1267z00_196)
	{
		{	/* Ieee/port.scm 1623 */
			{	/* Ieee/port.scm 1623 */

				switch (VECTOR_LENGTH(BgL_opt1267z00_196))
					{
					case ((long) 0):

						{	/* Ieee/port.scm 1623 */

							return bgl_open_pipes(BFALSE);
						}
						break;
					case ((long) 1):

						{	/* Ieee/port.scm 1623 */
							obj_t BgL_namez00_3863;

							BgL_namez00_3863 = VECTOR_REF(BgL_opt1267z00_196, ((long) 0));
							{	/* Ieee/port.scm 1623 */

								return bgl_open_pipes(BgL_namez00_3863);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* open-pipes */
	BGL_EXPORTED_DEF obj_t BGl_openzd2pipeszd2zz__r4_ports_6_10_1z00(obj_t
		BgL_namez00_195)
	{
		{	/* Ieee/port.scm 1623 */
			return bgl_open_pipes(BgL_namez00_195);
		}

	}



/* _lockf */
	obj_t BGl__lockfz00zz__r4_ports_6_10_1z00(obj_t BgL_env1272z00_202,
		obj_t BgL_opt1271z00_201)
	{
		{	/* Ieee/port.scm 1629 */
			{	/* Ieee/port.scm 1629 */
				obj_t BgL_g1273z00_1942;
				obj_t BgL_g1274z00_1943;

				BgL_g1273z00_1942 = VECTOR_REF(BgL_opt1271z00_201, ((long) 0));
				BgL_g1274z00_1943 = VECTOR_REF(BgL_opt1271z00_201, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1271z00_201))
					{
					case ((long) 2):

						{	/* Ieee/port.scm 1629 */

							{	/* Ieee/port.scm 1629 */
								bool_t BgL_tmpz00_6648;

								{	/* Ieee/port.scm 1629 */
									obj_t BgL_auxz00_6656;
									obj_t BgL_auxz00_6649;

									if (SYMBOLP(BgL_g1274z00_1943))
										{	/* Ieee/port.scm 1629 */
											BgL_auxz00_6656 = BgL_g1274z00_1943;
										}
									else
										{
											obj_t BgL_auxz00_6659;

											BgL_auxz00_6659 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2452z00zz__r4_ports_6_10_1z00,
												BINT(((long) 72951)),
												BGl_string2629z00zz__r4_ports_6_10_1z00,
												BGl_string2630z00zz__r4_ports_6_10_1z00,
												BgL_g1274z00_1943);
											FAILURE(BgL_auxz00_6659, BFALSE, BFALSE);
										}
									if (OUTPUT_PORTP(BgL_g1273z00_1942))
										{	/* Ieee/port.scm 1629 */
											BgL_auxz00_6649 = BgL_g1273z00_1942;
										}
									else
										{
											obj_t BgL_auxz00_6652;

											BgL_auxz00_6652 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2452z00zz__r4_ports_6_10_1z00,
												BINT(((long) 72951)),
												BGl_string2629z00zz__r4_ports_6_10_1z00,
												BGl_string2479z00zz__r4_ports_6_10_1z00,
												BgL_g1273z00_1942);
											FAILURE(BgL_auxz00_6652, BFALSE, BFALSE);
										}
									BgL_tmpz00_6648 =
										BGl_lockfz00zz__r4_ports_6_10_1z00(BgL_auxz00_6649,
										BgL_auxz00_6656, BINT(((long) 0)));
								}
								return BBOOL(BgL_tmpz00_6648);
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/port.scm 1629 */
							obj_t BgL_lenz00_1948;

							BgL_lenz00_1948 = VECTOR_REF(BgL_opt1271z00_201, ((long) 2));
							{	/* Ieee/port.scm 1629 */

								{	/* Ieee/port.scm 1629 */
									bool_t BgL_tmpz00_6667;

									{	/* Ieee/port.scm 1629 */
										obj_t BgL_auxz00_6675;
										obj_t BgL_auxz00_6668;

										if (SYMBOLP(BgL_g1274z00_1943))
											{	/* Ieee/port.scm 1629 */
												BgL_auxz00_6675 = BgL_g1274z00_1943;
											}
										else
											{
												obj_t BgL_auxz00_6678;

												BgL_auxz00_6678 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2452z00zz__r4_ports_6_10_1z00,
													BINT(((long) 72951)),
													BGl_string2629z00zz__r4_ports_6_10_1z00,
													BGl_string2630z00zz__r4_ports_6_10_1z00,
													BgL_g1274z00_1943);
												FAILURE(BgL_auxz00_6678, BFALSE, BFALSE);
											}
										if (OUTPUT_PORTP(BgL_g1273z00_1942))
											{	/* Ieee/port.scm 1629 */
												BgL_auxz00_6668 = BgL_g1273z00_1942;
											}
										else
											{
												obj_t BgL_auxz00_6671;

												BgL_auxz00_6671 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2452z00zz__r4_ports_6_10_1z00,
													BINT(((long) 72951)),
													BGl_string2629z00zz__r4_ports_6_10_1z00,
													BGl_string2479z00zz__r4_ports_6_10_1z00,
													BgL_g1273z00_1942);
												FAILURE(BgL_auxz00_6671, BFALSE, BFALSE);
											}
										BgL_tmpz00_6667 =
											BGl_lockfz00zz__r4_ports_6_10_1z00(BgL_auxz00_6668,
											BgL_auxz00_6675, BgL_lenz00_1948);
									}
									return BBOOL(BgL_tmpz00_6667);
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



/* lockf */
	BGL_EXPORTED_DEF bool_t BGl_lockfz00zz__r4_ports_6_10_1z00(obj_t
		BgL_portz00_198, obj_t BgL_cmdz00_199, obj_t BgL_lenz00_200)
	{
		{	/* Ieee/port.scm 1629 */
			if ((BgL_cmdz00_199 == BGl_symbol2631z00zz__r4_ports_6_10_1z00))
				{	/* Ieee/port.scm 1632 */
					return
						bgl_lockf(BgL_portz00_198, F_LOCK, (long) CINT(BgL_lenz00_200));
				}
			else
				{	/* Ieee/port.scm 1632 */
					if ((BgL_cmdz00_199 == BGl_symbol2633z00zz__r4_ports_6_10_1z00))
						{	/* Ieee/port.scm 1632 */
							return
								bgl_lockf(BgL_portz00_198, F_TLOCK,
								(long) CINT(BgL_lenz00_200));
						}
					else
						{	/* Ieee/port.scm 1632 */
							if ((BgL_cmdz00_199 == BGl_symbol2635z00zz__r4_ports_6_10_1z00))
								{	/* Ieee/port.scm 1632 */
									return
										bgl_lockf(BgL_portz00_198, F_ULOCK,
										(long) CINT(BgL_lenz00_200));
								}
							else
								{	/* Ieee/port.scm 1632 */
									if (
										(BgL_cmdz00_199 == BGl_symbol2637z00zz__r4_ports_6_10_1z00))
										{	/* Ieee/port.scm 1632 */
											return
												bgl_lockf(BgL_portz00_198, F_TEST,
												(long) CINT(BgL_lenz00_200));
										}
									else
										{	/* Ieee/port.scm 1632 */
											return
												CBOOL(BGl_errorz00zz__errorz00
												(BGl_string2639z00zz__r4_ports_6_10_1z00,
													BGl_string2640z00zz__r4_ports_6_10_1z00,
													BgL_cmdz00_199));
										}
								}
						}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__r4_ports_6_10_1z00()
	{
		{	/* Ieee/port.scm 18 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__r4_ports_6_10_1z00()
	{
		{	/* Ieee/port.scm 18 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__r4_ports_6_10_1z00()
	{
		{	/* Ieee/port.scm 18 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_ports_6_10_1z00()
	{
		{	/* Ieee/port.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2641z00zz__r4_ports_6_10_1z00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2641z00zz__r4_ports_6_10_1z00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 323064336),
				BSTRING_TO_STRING(BGl_string2641z00zz__r4_ports_6_10_1z00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2641z00zz__r4_ports_6_10_1z00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2641z00zz__r4_ports_6_10_1z00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2641z00zz__r4_ports_6_10_1z00));
			BGl_modulezd2initializa7ationz75zz__gunza7ipza7(((long) 224363636),
				BSTRING_TO_STRING(BGl_string2641z00zz__r4_ports_6_10_1z00));
			BGl_modulezd2initializa7ationz75zz__urlz00(((long) 337061965),
				BSTRING_TO_STRING(BGl_string2641z00zz__r4_ports_6_10_1z00));
			BGl_modulezd2initializa7ationz75zz__httpz00(((long) 354980563),
				BSTRING_TO_STRING(BGl_string2641z00zz__r4_ports_6_10_1z00));
			return
				BGl_modulezd2initializa7ationz75zz__ftpz00(((long) 102328228),
				BSTRING_TO_STRING(BGl_string2641z00zz__r4_ports_6_10_1z00));
		}

	}

#ifdef __cplusplus
}
#endif
