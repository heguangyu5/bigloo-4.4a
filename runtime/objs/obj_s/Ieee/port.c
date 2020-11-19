/*===========================================================================*/
/*   (Ieee/port.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Ieee/port.scm -indent -o objs/obj_s/Ieee/port.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif

/* object type definitions */
typedef struct BgL_z62httpzd2redirectionzb0_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_portz00;
   obj_t BgL_urlz00;
} *BgL_z62httpzd2redirectionzb0_bglt;


static obj_t BGl_z62setzd2outputzd2portzd2positionz12za2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62inputzd2portzd2bufferzd2setz12za2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62inputzd2portzd2namezd2setz12za2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62callzd2withzd2outputzd2stringzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__selectz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_symbol2720z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol2722z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol2724z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_z62directoryzd2ze3pathzd2listz81zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62outputzd2portzd2truncatez62zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t);
extern bool_t reset_eof(obj_t);
static obj_t BGl_z62inputzd2portzd2namez62zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62truncatezd2filezb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern obj_t bgl_directory_to_list(char *);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2clonez12z12zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62outputzd2portzd2flushzd2bufferzd2setz12z70zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_closedzd2inputzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2namezd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_requirezd2initializa7ationz75zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_outputzd2portzd2truncatez00zz__r4_ports_6_10_1z00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_symbol2903z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol2823z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol2905z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol2825z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol2827z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl__lockfz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62withzd2errorzd2tozd2procedurezb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_filezd2existszf3z21zz__r4_ports_6_10_1z00(char *);
BGL_EXPORTED_DECL obj_t BGl_outputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_resetzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_currentzd2outputzd2portz00zz__r4_ports_6_10_1z00();
extern obj_t bgl_system_failure(int, obj_t, obj_t, obj_t);
extern obj_t bgl_input_port_reopen(obj_t);
static obj_t BGl_symbol2754z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_setzd2outputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
extern obj_t BGl_z62httpzd2redirectionzb0zz__httpz00;
extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern int bgl_input_fill_string(obj_t, obj_t);
static obj_t BGl_z62inputzd2portzd2bufferz62zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_symbol2841z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_renamezd2filezd2zz__r4_ports_6_10_1z00(char *, char *);
static obj_t BGl_symbol2848z00zz__r4_ports_6_10_1z00 = BUNSPEC;
extern long bgl_file_size(char *);
static obj_t BGl_toplevelzd2initzd2zz__r4_ports_6_10_1z00();
extern obj_t bgl_open_input_resource(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_closedzd2outputzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_keyword2972z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_deletezd2directoryzd2zz__r4_ports_6_10_1z00(char *);
static obj_t BGl_keyword2974z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_keyword2976z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_keyword2977z00zz__r4_ports_6_10_1z00 = BUNSPEC;
extern obj_t bgl_output_port_seek(obj_t, long);
static obj_t BGl__openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_symbol2850z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol2852z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol2854z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol2856z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_closezd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_search1262ze70ze7zz__r4_ports_6_10_1z00(long, obj_t, obj_t, long);
static obj_t BGl_z62currentzd2errorzd2portz62zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_genericzd2initzd2zz__r4_ports_6_10_1z00();
extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
static obj_t BGl_symbol2863z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_z62makezd2directoryzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62z52openzd2inputzd2httpzd2socketze2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_filezd2modificationzd2timez00zz__r4_ports_6_10_1z00(char *);
static obj_t BGl_symbol2866z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol2869z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol2788z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2namezd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_outputzd2portzd2isattyzf3zf3zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_objectzd2initzd2zz__r4_ports_6_10_1z00();
static obj_t BGl_z62outputzd2portzd2namez62zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_callzd2withzd2appendzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t);
extern obj_t BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7(obj_t);
extern obj_t bgl_open_pipes(obj_t);
static obj_t BGl_z62outputzd2portzd2timeoutzd2setz12za2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62inputzd2portzd2reopenz12z70zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_closezd2inputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_symbol2875z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol2877z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_symbol2879z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza31401ze3ze5zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62makezd2directorieszb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern long bgl_file_mode(char *);
extern obj_t BGl_dirnamez00zz__osz00(obj_t);
BGL_EXPORTED_DECL long BGl_filezd2accesszd2timez00zz__r4_ports_6_10_1z00(char *);
static obj_t BGl_z62withzd2errorzd2tozd2portzb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern obj_t string_append_3(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2882z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_z62filezd2uidzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62inputzd2portzd2positionz62zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62withzd2outputzd2tozd2procedurezb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl__openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
extern int bgl_output_string(obj_t, obj_t);
static obj_t BGl_z62outputzd2procedurezd2portzf3z91zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_symbol2979z00zz__r4_ports_6_10_1z00 = BUNSPEC;
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl_z62zc3z04anonymousza31403ze3ze5zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL long BGl_filezd2changezd2timez00zz__r4_ports_6_10_1z00(char *);
extern bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2fillzd2barrierzd2zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62withzd2errorzd2tozd2stringzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
static obj_t BGl_z62currentzd2inputzd2portz62zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_getzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_symbol2984z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_z62z52openzd2inputzd2filez30zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol2986z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza31412ze3ze5zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62outputzd2portzd2closezd2hookzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62callzd2withzd2inputzd2stringzb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62outputzd2portzd2namezd2setz12za2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62deletezd2directoryzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern bool_t bgl_input_port_timeout_set(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_methodzd2initzd2zz__r4_ports_6_10_1z00();
static obj_t BGl_z62callzd2withzd2appendzd2filezb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2991z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_z62withzd2outputzd2tozd2portzb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2993z00zz__r4_ports_6_10_1z00 = BUNSPEC;
extern obj_t bgl_input_port_clone(obj_t, obj_t);
static obj_t BGl_symbol2995z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_z62inputzd2portzd2protocolzd2setz12za2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2997z00zz__r4_ports_6_10_1z00 = BUNSPEC;
extern void bgl_input_port_seek(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_directoryzf3zf3zz__r4_ports_6_10_1z00(char *);
static obj_t BGl_z62zc3z04anonymousza31405ze3ze5zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62outputzd2portzd2bufferz62zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t get_output_string(obj_t);
static obj_t BGl__openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_makezd2directoryzd2zz__r4_ports_6_10_1z00(char *);
static obj_t BGl_z62filezd2gidzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern int bgl_symlink(char *, char *);
extern obj_t bgl_open_input_substring(obj_t, long, long);
static obj_t BGl_z62renamezd2filezb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62inputzd2portzd2lastzd2tokenzd2positionz62zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31414ze3ze5zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31406ze3ze5zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2fillzd2barrierzd2setz12z12zz__r4_ports_6_10_1z00(obj_t, long);
BGL_EXPORTED_DECL bool_t BGl_truncatezd2filezd2zz__r4_ports_6_10_1z00(char *, long);
static obj_t BGl_z62outputzd2portzd2bufferzd2setz12za2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62z52openzd2inputzd2pipez30zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62withzd2inputzd2fromzd2portzb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62callzd2withzd2outputzd2filezb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2flushzd2bufferzd2setz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t make_string(long, unsigned char);
extern obj_t BGl_urlzd2sanszd2protocolzd2parsezd2zz__urlz00(obj_t, obj_t);
extern obj_t bgl_reopen_input_c_string(obj_t, char *);
static obj_t BGl_z62withzd2appendzd2tozd2filezb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62inputzd2portzd2clonez12z70zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern obj_t bgl_close_input_port(obj_t);
extern obj_t bgl_open_input_c_string(char *);
static obj_t BGl_z62closezd2inputzd2portz62zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62outputzd2portzd2closezd2hookzd2setz12z70zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31415ze3ze5zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31407ze3ze5zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_flushzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62directoryzf3z91zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_deletezd2filezd2zz__r4_ports_6_10_1z00(char *);
extern obj_t close_binary_port(obj_t);
static obj_t BGl_z62close2153z62zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62filezd2accesszd2timez62zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62close2155z62zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62close2156z62zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62close2157z62zz__r4_ports_6_10_1z00(obj_t);
extern obj_t bgl_append_output_file(obj_t, obj_t);
static obj_t BGl__openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31416ze3ze5zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31408ze3ze5zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62resetzd2outputzd2portz62zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern bool_t bigloo_strncmp(obj_t, obj_t, long);
static obj_t BGl_z62flushz62zz__r4_ports_6_10_1z00(obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62copyzd2filezb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern obj_t bgl_close_output_port(obj_t);
BGL_EXPORTED_DECL obj_t BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62filezd2typezb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62filezd2changezd2timez62zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2seekz00zz__r4_ports_6_10_1z00(obj_t);
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
static obj_t BGl_z62inputzd2portzd2seekz62zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL long BGl_inputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL int BGl_filezd2timeszd2setz12z12zz__r4_ports_6_10_1z00(char *, long, long);
static obj_t BGl__openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62filezd2modificationzd2timez62zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2symlinkzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62filezd2timeszd2setz12z70zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62filezd2existszf3z43zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31434ze3ze5zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
extern obj_t BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(obj_t, obj_t);
static obj_t BGl_z62closezd2outputzd2portz62zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62inputzd2stringzd2portzf3z91zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62inputzd2portzd2seekzd2setz12za2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_inputzd2portzd2lastzd2tokenzd2positionz00zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_list2719z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL int BGl_filezd2uidzd2zz__r4_ports_6_10_1z00(char *);
BGL_EXPORTED_DECL obj_t BGl_withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t bgl_open_input_procedure(obj_t, obj_t);
static obj_t BGl_z62outputzd2portzd2positionz62zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_inputzd2portzd2lengthz00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31436ze3ze5zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_reopenzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(obj_t, char *);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__ftpz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__httpz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__urlz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__gunza7ipza7(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL obj_t BGl_copyzd2filezd2zz__r4_ports_6_10_1z00(char *, char *);
extern obj_t bgl_open_output_file(obj_t, obj_t);
static obj_t BGl_z62inputzd2portzf3z43zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t bgl_open_input_substring_bang(obj_t, long, long);
BGL_EXPORTED_DECL obj_t BGl_inputzd2gza7ipzd2portzf3z54zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_filezd2typezd2zz__r4_ports_6_10_1z00(char *);
extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
static obj_t BGl_z62openzd2inputzd2czd2stringzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern long bgl_last_access_time(char *);
BGL_EXPORTED_DECL obj_t BGl_currentzd2errorzd2portz00zz__r4_ports_6_10_1z00();
extern bool_t fexists(char *);
static obj_t BGl_z62closedzd2inputzd2portzf3z91zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31534ze3ze5zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2seekzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_list2815z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_list2816z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL long BGl_outputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl__openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
static obj_t BGl_z62zc3z04anonymousza31365ze3ze5zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2flushzd2hookzd2zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2reopenz12z12zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_list2820z00zz__r4_ports_6_10_1z00 = BUNSPEC;
extern obj_t bgl_open_input_file(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_list2902z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_withzd2appendzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern long bgl_last_change_time(char *);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62outputzd2portzf3z43zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62outputzd2portzd2flushzd2bufferzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t bgl_open_output_procedure(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__r4_ports_6_10_1z00();
static obj_t BGl_z62zc3z04anonymousza31455ze3ze5zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62z52openzd2inputzd2resourcez30zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t, obj_t, int);
BGL_EXPORTED_DECL bool_t BGl_portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL int BGl_filezd2gidzd2zz__r4_ports_6_10_1z00(char *);
static obj_t BGl_z62getzd2portzd2bufferz62zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62deletezd2filezb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_list2753z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl__appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62filezd2siza7ez17zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62getzd2outputzd2stringz62zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__r4_ports_6_10_1z00();
static obj_t BGl_z62flush2154z62zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_ports_6_10_1z00();
static obj_t BGl_z62flush2158z62zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62closez62zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31391ze3ze5zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31456ze3ze5zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62withzd2errorzd2tozd2filezb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl__openzd2pipeszd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern bool_t bgl_output_port_timeout_set(obj_t, long);
static obj_t BGl_zc3z04exitza31452ze3ze70z60zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62reopenzd2inputzd2czd2stringzb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62filezd2gza7ipzf3ze4zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_list2847z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62inputzd2portzd2protocolz62zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t socket_close(obj_t);
extern obj_t bgl_open_input_pipe(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_currentzd2inputzd2portz00zz__r4_ports_6_10_1z00();
static obj_t BGl_z62zc3z04anonymousza31546ze3ze5zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t bgl_directory_to_path_list(char *, int, unsigned char);
extern long bgl_file_uid(char *);
static obj_t BGl_z62loopz62zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2pipeszd2zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62inputzd2portzd2timeoutzd2setz12za2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern bool_t bgl_lockf(obj_t, int, long);
static obj_t BGl_z62parserz62zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62inputzd2gza7ipzd2portzf3z36zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62filezd2modezb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern bool_t bgl_directoryp(char *);
static obj_t BGl_z62zc3z04anonymousza31548ze3ze5zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62inputzd2portzd2fillzd2barrierzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62flushzd2outputzd2portz62zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62callzd2withzd2inputzd2filezb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62portzf3z91zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62withzd2inputzd2fromzd2procedurezb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62withzd2outputzd2tozd2filezb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_filezd2siza7ez75zz__r4_ports_6_10_1z00(char *);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t BGl_httpzd2parsezd2responsez00zz__httpz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62outputzd2stringzd2portzf3z91zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62inputzd2portzd2fillzd2barrierzd2setz12z70zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31387ze3ze5zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62withzd2outputzd2tozd2stringzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62currentzd2outputzd2portz62zz__r4_ports_6_10_1z00(obj_t);
extern long default_io_bufsiz;
extern int bgl_utime(char *, long, long);
BGL_EXPORTED_DECL obj_t BGl_openzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(char *);
static obj_t BGl_zc3z04exitza31543ze3ze70z60zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62resetzd2eofzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
static obj_t BGl_z62setzd2inputzd2portzd2positionz12za2zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_z62withzd2inputzd2fromzd2filezb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
extern long bgl_last_modification_time(char *);
extern obj_t bgl_open_output_string(obj_t);
extern obj_t bgl_select(long, obj_t, obj_t, obj_t);
extern long bgl_file_gid(char *);
static obj_t BGl_list2971z00zz__r4_ports_6_10_1z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62withzd2inputzd2fromzd2stringzb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62inputzd2portzd2closezd2hookzd2setz12z70zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_keyword2817z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_z62closedzd2outputzd2portzf3z91zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31397ze3ze5zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31389ze3ze5zz__r4_ports_6_10_1z00(obj_t);
extern obj_t bstring_to_keyword(obj_t);
static obj_t BGl_z62inputzd2procedurezd2portzf3z91zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_filezd2modezd2zz__r4_ports_6_10_1z00(char *);
static obj_t BGl_keyword2821z00zz__r4_ports_6_10_1z00 = BUNSPEC;
extern obj_t bgl_file_type(char *);
extern obj_t BGl_httpz00zz__httpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_selectz00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31398ze3ze5zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62outputzd2portzd2flushzd2hookzd2setz12z70zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62inputzd2portzd2closezd2hookzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t make_string_sans_fill(long);
static obj_t BGl_keyword2838z00zz__r4_ports_6_10_1z00 = BUNSPEC;
static obj_t BGl_z62makezd2symlinkzb0zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62outputzd2portzd2isattyzf3z91zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62inputzd2portzd2lengthz62zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31399ze3ze5zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_directoryzd2ze3listz31zz__r4_ports_6_10_1z00(char *);
static obj_t BGl_z62outputzd2portzd2flushzd2hookzb0zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_outputzd2portzd2flushzd2bufferzd2zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62directoryzd2ze3listz53zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_resetzd2eofzd2zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_lockfz00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_inputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2outputzd2filezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2outputza7d3006z00, opt_generic_entry, BGl__openzd2outputzd2filez00zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2protocolzd2setz12zd2envz12zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73007za7, BGl_z62inputzd2portzd2protocolzd2setz12za2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2directorieszd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762makeza7d2direct3008z00, BGl_z62makezd2directorieszb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2bufferzd2setz12zd2envz12zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73009za7, BGl_z62inputzd2portzd2bufferzd2setz12za2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_closedzd2inputzd2portzf3zd2envz21zz__r4_ports_6_10_1z00, BgL_bgl_za762closedza7d2inpu3010z00, BGl_z62closedzd2inputzd2portzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2bufferzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762outputza7d2port3011z00, BGl_z62outputzd2portzd2bufferz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2modificationzd2timezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762fileza7d2modifi3012z00, BGl_z62filezd2modificationzd2timez62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_z52openzd2inputzd2pipezd2envz80zz__r4_ports_6_10_1z00, BgL_bgl_za762za752openza7d2inp3013za7, BGl_z62z52openzd2inputzd2pipez30zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2inputzd2filezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2inputza7d23014z00, opt_generic_entry, BGl__openzd2inputzd2filez00zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_callzd2withzd2appendzd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762callza7d2withza7d3015za7, BGl_z62callzd2withzd2appendzd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2outputzd2tozd2portzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762withza7d2output3016z00, BGl_z62withzd2outputzd2tozd2portzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2flushzd2bufferzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762outputza7d2port3017z00, BGl_z62outputzd2portzd2flushzd2bufferzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2protocolzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73018za7, BGl_z62inputzd2portzd2protocolz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2errorzd2portzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762currentza7d2err3019z00, BGl_z62currentzd2errorzd2portz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2namezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762outputza7d2port3020z00, BGl_z62outputzd2portzd2namez62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2errorzd2tozd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762withza7d2errorza73021za7, BGl_z62withzd2errorzd2tozd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2clonez12zd2envzc0zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73022za7, BGl_z62inputzd2portzd2clonez12z70zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2modezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762fileza7d2modeza7b3023za7, BGl_z62filezd2modezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2changezd2timezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762fileza7d2change3024z00, BGl_z62filezd2changezd2timez62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_portzf3zd2envz21zz__r4_ports_6_10_1z00, BgL_bgl_za762portza7f3za791za7za7_3025za7, BGl_z62portzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2closezd2hookzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73026za7, BGl_z62inputzd2portzd2closezd2hookzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
extern obj_t BGl_openzd2inputzd2za7libzd2filezd2envza7zz__gunza7ipza7;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_resetzd2eofzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762resetza7d2eofza7b3027za7, BGl_z62resetzd2eofzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2inputzd2czd2stringzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762openza7d2inputza73028za7, BGl_z62openzd2inputzd2czd2stringzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2errorzd2tozd2stringzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762withza7d2errorza73029za7, BGl_z62withzd2errorzd2tozd2stringzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_z52openzd2inputzd2filezd2envz80zz__r4_ports_6_10_1z00, BgL_bgl_za762za752openza7d2inp3030za7, BGl_z62z52openzd2inputzd2filez30zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2positionzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762outputza7d2port3031z00, BGl_z62outputzd2portzd2positionz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_closedzd2outputzd2portzf3zd2envz21zz__r4_ports_6_10_1z00, BgL_bgl_za762closedza7d2outp3032z00, BGl_z62closedzd2outputzd2portzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_callzd2withzd2outputzd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762callza7d2withza7d3033za7, BGl_z62callzd2withzd2outputzd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2timeoutzd2setz12zd2envz12zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73034za7, BGl_z62inputzd2portzd2timeoutzd2setz12za2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2namezd2setz12zd2envz12zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73035za7, BGl_z62inputzd2portzd2namezd2setz12za2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2errorzd2tozd2portzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762withza7d2errorza73036za7, BGl_z62withzd2errorzd2tozd2portzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2inputzd2fromzd2stringzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762withza7d2inputza73037za7, BGl_z62withzd2inputzd2fromzd2stringzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2703z00zz__r4_ports_6_10_1z00, BgL_bgl_string2703za700za7za7_3038za7, "input-port-protocols", 20 );
DEFINE_STRING( BGl_string2704z00zz__r4_ports_6_10_1z00, BgL_bgl_string2704za700za7za7_3039za7, "file:", 5 );
DEFINE_STRING( BGl_string2705z00zz__r4_ports_6_10_1z00, BgL_bgl_string2705za700za7za7_3040za7, "string:", 7 );
DEFINE_STRING( BGl_string2707z00zz__r4_ports_6_10_1z00, BgL_bgl_string2707za700za7za7_3041za7, "| ", 2 );
DEFINE_STRING( BGl_string2708z00zz__r4_ports_6_10_1z00, BgL_bgl_string2708za700za7za7_3042za7, "pipe:", 5 );
DEFINE_STRING( BGl_string2709z00zz__r4_ports_6_10_1z00, BgL_bgl_string2709za700za7za7_3043za7, "http://", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_callzd2withzd2outputzd2stringzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762callza7d2withza7d3044za7, BGl_z62callzd2withzd2outputzd2stringzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2seekzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73045za7, BGl_z62inputzd2portzd2seekz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2directoryzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762makeza7d2direct3046z00, BGl_z62makezd2directoryzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2710z00zz__r4_ports_6_10_1z00, BgL_bgl_string2710za700za7za7_3047za7, "gzip:", 5 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2706z00zz__r4_ports_6_10_1z00, BgL_bgl_za762za7c3za704anonymo3048za7, BGl_z62zc3z04anonymousza31365ze3ze5zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string2711z00zz__r4_ports_6_10_1z00, BgL_bgl_string2711za700za7za7_3049za7, "zlib:", 5 );
DEFINE_STRING( BGl_string2712z00zz__r4_ports_6_10_1z00, BgL_bgl_string2712za700za7za7_3050za7, "inflate:", 8 );
DEFINE_STRING( BGl_string2713z00zz__r4_ports_6_10_1z00, BgL_bgl_string2713za700za7za7_3051za7, "/resource/", 10 );
DEFINE_STRING( BGl_string2714z00zz__r4_ports_6_10_1z00, BgL_bgl_string2714za700za7za7_3052za7, "ftp://", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_appendzd2outputzd2filezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__appendza7d2output3053za7, opt_generic_entry, BGl__appendzd2outputzd2filez00zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_STRING( BGl_string2715z00zz__r4_ports_6_10_1z00, BgL_bgl_string2715za700za7za7_3054za7, "/tmp/4.4a/runtime/Ieee/port.scm", 31 );
DEFINE_STRING( BGl_string2716z00zz__r4_ports_6_10_1z00, BgL_bgl_string2716za700za7za7_3055za7, "<@anonymous:1365>", 17 );
DEFINE_STRING( BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_bgl_string2717za700za7za7_3056za7, "bstring", 7 );
DEFINE_STRING( BGl_string2718z00zz__r4_ports_6_10_1z00, BgL_bgl_string2718za700za7za7_3057za7, "call-with-input-file:Wrong number of arguments", 46 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2bufferzd2setz12zd2envz12zz__r4_ports_6_10_1z00, BgL_bgl_za762outputza7d2port3058z00, BGl_z62outputzd2portzd2bufferzd2setz12za2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2gza7ipzf3zd2envz54zz__r4_ports_6_10_1z00, BgL_bgl_za762fileza7d2gza7a7ip3059za7, BGl_z62filezd2gza7ipzf3ze4zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2800z00zz__r4_ports_6_10_1z00, BgL_bgl_string2800za700za7za7_3060za7, "input-port-protocol", 19 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2appendzd2tozd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762withza7d2append3061z00, BGl_z62withzd2appendzd2tozd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2801z00zz__r4_ports_6_10_1z00, BgL_bgl_string2801za700za7za7_3062za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string2802z00zz__r4_ports_6_10_1z00, BgL_bgl_string2802za700za7za7_3063za7, "input-port-protocol-set!", 24 );
DEFINE_STRING( BGl_string2721z00zz__r4_ports_6_10_1z00, BgL_bgl_string2721za700za7za7_3064za7, "funcall", 7 );
DEFINE_STRING( BGl_string2803z00zz__r4_ports_6_10_1z00, BgL_bgl_string2803za700za7za7_3065za7, "Illegal open procedure for protocol", 35 );
DEFINE_STRING( BGl_string2804z00zz__r4_ports_6_10_1z00, BgL_bgl_string2804za700za7za7_3066za7, "Illegal buffer", 14 );
DEFINE_STRING( BGl_string2723z00zz__r4_ports_6_10_1z00, BgL_bgl_string2723za700za7za7_3067za7, "proc", 4 );
DEFINE_STRING( BGl_string2805z00zz__r4_ports_6_10_1z00, BgL_bgl_string2805za700za7za7_3068za7, "get-port-buffer", 15 );
DEFINE_STRING( BGl_string2806z00zz__r4_ports_6_10_1z00, BgL_bgl_string2806za700za7za7_3069za7, "&get-port-buffer", 16 );
DEFINE_STRING( BGl_string2725z00zz__r4_ports_6_10_1z00, BgL_bgl_string2725za700za7za7_3070za7, "port", 4 );
DEFINE_STRING( BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_bgl_string2807za700za7za7_3071za7, "bint", 4 );
DEFINE_STRING( BGl_string2726z00zz__r4_ports_6_10_1z00, BgL_bgl_string2726za700za7za7_3072za7, "call-with-input-file", 20 );
DEFINE_STRING( BGl_string2808z00zz__r4_ports_6_10_1z00, BgL_bgl_string2808za700za7za7_3073za7, "%open-input-file", 16 );
DEFINE_STRING( BGl_string2727z00zz__r4_ports_6_10_1z00, BgL_bgl_string2727za700za7za7_3074za7, "can't open file", 15 );
DEFINE_STRING( BGl_string2809z00zz__r4_ports_6_10_1z00, BgL_bgl_string2809za700za7za7_3075za7, "open-input-pipe", 15 );
DEFINE_STRING( BGl_string2728z00zz__r4_ports_6_10_1z00, BgL_bgl_string2728za700za7za7_3076za7, "&call-with-input-file", 21 );
DEFINE_STRING( BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_bgl_string2729za700za7za7_3077za7, "procedure", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_deletezd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762deleteza7d2file3078z00, BGl_z62deletezd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2810z00zz__r4_ports_6_10_1z00, BgL_bgl_string2810za700za7za7_3079za7, "%open-input-pipe", 16 );
DEFINE_STRING( BGl_string2811z00zz__r4_ports_6_10_1z00, BgL_bgl_string2811za700za7za7_3080za7, "open-input-file", 15 );
DEFINE_STRING( BGl_string2730z00zz__r4_ports_6_10_1z00, BgL_bgl_string2730za700za7za7_3081za7, "<@anonymous:1387>", 17 );
DEFINE_STRING( BGl_string2812z00zz__r4_ports_6_10_1z00, BgL_bgl_string2812za700za7za7_3082za7, "%open-input-resource", 20 );
DEFINE_STRING( BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_bgl_string2731za700za7za7_3083za7, "input-port", 10 );
DEFINE_STRING( BGl_string2732z00zz__r4_ports_6_10_1z00, BgL_bgl_string2732za700za7za7_3084za7, "call-with-input-string:Wrong number of arguments", 48 );
DEFINE_STRING( BGl_string2814z00zz__r4_ports_6_10_1z00, BgL_bgl_string2814za700za7za7_3085za7, "http", 4 );
DEFINE_STRING( BGl_string2733z00zz__r4_ports_6_10_1z00, BgL_bgl_string2733za700za7za7_3086za7, "&call-with-input-string", 23 );
DEFINE_STRING( BGl_string2734z00zz__r4_ports_6_10_1z00, BgL_bgl_string2734za700za7za7_3087za7, "open-output-file", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2uidzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762fileza7d2uidza7b03088za7, BGl_z62filezd2uidzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2closezd2hookzd2setz12zd2envzc0zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73089za7, BGl_z62inputzd2portzd2closezd2hookzd2setz12z70zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2735z00zz__r4_ports_6_10_1z00, BgL_bgl_string2735za700za7za7_3090za7, "call-with-output-file:Wrong number of arguments", 47 );
DEFINE_STRING( BGl_string2736z00zz__r4_ports_6_10_1z00, BgL_bgl_string2736za700za7za7_3091za7, "call-with-output-file", 21 );
DEFINE_STRING( BGl_string2818z00zz__r4_ports_6_10_1z00, BgL_bgl_string2818za700za7za7_3092za7, "user-agent", 10 );
DEFINE_STRING( BGl_string2737z00zz__r4_ports_6_10_1z00, BgL_bgl_string2737za700za7za7_3093za7, "&call-with-output-file", 22 );
DEFINE_STRING( BGl_string2819z00zz__r4_ports_6_10_1z00, BgL_bgl_string2819za700za7za7_3094za7, "Mozilla/5.0", 11 );
DEFINE_STRING( BGl_string2738z00zz__r4_ports_6_10_1z00, BgL_bgl_string2738za700za7za7_3095za7, "<@anonymous:1389>", 17 );
DEFINE_STRING( BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_bgl_string2739za700za7za7_3096za7, "output-port", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2outputzd2tozd2stringzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762withza7d2output3097z00, BGl_z62withzd2outputzd2tozd2stringzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_resetzd2outputzd2portzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762resetza7d2outpu3098z00, BGl_z62resetzd2outputzd2portz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2outputzd2portzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762currentza7d2out3099z00, BGl_z62currentzd2outputzd2portz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_directoryzd2ze3listzd2envze3zz__r4_ports_6_10_1z00, BgL_bgl_za762directoryza7d2za73100za7, BGl_z62directoryzd2ze3listz53zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzf3zd2envzf3zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73101za7, BGl_z62inputzd2portzf3z43zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzf3zd2envzf3zz__r4_ports_6_10_1z00, BgL_bgl_za762outputza7d2port3102z00, BGl_z62outputzd2portzf3z43zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2813z00zz__r4_ports_6_10_1z00, BgL_bgl_za762parserza762za7za7__3103z00, BGl_z62parserz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 5 );
DEFINE_STRING( BGl_string2900z00zz__r4_ports_6_10_1z00, BgL_bgl_string2900za700za7za7_3104za7, "&reset-eof", 10 );
DEFINE_STRING( BGl_string2901z00zz__r4_ports_6_10_1z00, BgL_bgl_string2901za700za7za7_3105za7, "set-input-port-position!:Wrong number of arguments", 50 );
DEFINE_STRING( BGl_string2740z00zz__r4_ports_6_10_1z00, BgL_bgl_string2740za700za7za7_3106za7, "append-output-file", 18 );
DEFINE_STRING( BGl_string2822z00zz__r4_ports_6_10_1z00, BgL_bgl_string2822za700za7za7_3107za7, "Connection", 10 );
DEFINE_STRING( BGl_string2741z00zz__r4_ports_6_10_1z00, BgL_bgl_string2741za700za7za7_3108za7, "call-with-append-file:Wrong number of arguments", 47 );
DEFINE_STRING( BGl_string2904z00zz__r4_ports_6_10_1z00, BgL_bgl_string2904za700za7za7_3109za7, "useek", 5 );
DEFINE_STRING( BGl_string2742z00zz__r4_ports_6_10_1z00, BgL_bgl_string2742za700za7za7_3110za7, "call-with-append-file", 21 );
DEFINE_STRING( BGl_string2824z00zz__r4_ports_6_10_1z00, BgL_bgl_string2824za700za7za7_3111za7, "close", 5 );
DEFINE_STRING( BGl_string2743z00zz__r4_ports_6_10_1z00, BgL_bgl_string2743za700za7za7_3112za7, "&call-with-append-file", 22 );
DEFINE_STRING( BGl_string2906z00zz__r4_ports_6_10_1z00, BgL_bgl_string2906za700za7za7_3113za7, "pos", 3 );
DEFINE_STRING( BGl_string2744z00zz__r4_ports_6_10_1z00, BgL_bgl_string2744za700za7za7_3114za7, "<@anonymous:1391>", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2typezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762fileza7d2typeza7b3115za7, BGl_z62filezd2typezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2907z00zz__r4_ports_6_10_1z00, BgL_bgl_string2907za700za7za7_3116za7, "&set-input-port-position!", 25 );
DEFINE_STRING( BGl_string2826z00zz__r4_ports_6_10_1z00, BgL_bgl_string2826za700za7za7_3117za7, "get", 3 );
DEFINE_STRING( BGl_string2745z00zz__r4_ports_6_10_1z00, BgL_bgl_string2745za700za7za7_3118za7, "call-with-output-string:Wrong number of arguments", 49 );
DEFINE_STRING( BGl_string2908z00zz__r4_ports_6_10_1z00, BgL_bgl_string2908za700za7za7_3119za7, "&input-port-position", 20 );
DEFINE_STRING( BGl_string2746z00zz__r4_ports_6_10_1z00, BgL_bgl_string2746za700za7za7_3120za7, "call-with-output-string", 23 );
DEFINE_STRING( BGl_string2909z00zz__r4_ports_6_10_1z00, BgL_bgl_string2909za700za7za7_3121za7, "&input-port-fill-barrier", 24 );
DEFINE_STRING( BGl_string2828z00zz__r4_ports_6_10_1z00, BgL_bgl_string2828za700za7za7_3122za7, "HTTP/1.1", 8 );
DEFINE_STRING( BGl_string2747z00zz__r4_ports_6_10_1z00, BgL_bgl_string2747za700za7za7_3123za7, "&call-with-output-string", 24 );
DEFINE_STRING( BGl_string2829z00zz__r4_ports_6_10_1z00, BgL_bgl_string2829za700za7za7_3124za7, "&loop", 5 );
DEFINE_STRING( BGl_string2748z00zz__r4_ports_6_10_1z00, BgL_bgl_string2748za700za7za7_3125za7, "input-port-reopen!", 18 );
DEFINE_STRING( BGl_string2749z00zz__r4_ports_6_10_1z00, BgL_bgl_string2749za700za7za7_3126za7, "Cannot reopen port", 18 );
DEFINE_STRING( BGl_string2910z00zz__r4_ports_6_10_1z00, BgL_bgl_string2910za700za7za7_3127za7, "&input-port-fill-barrier-set!", 29 );
DEFINE_STRING( BGl_string2911z00zz__r4_ports_6_10_1z00, BgL_bgl_string2911za700za7za7_3128za7, "&input-port-last-token-position", 31 );
DEFINE_STRING( BGl_string2830z00zz__r4_ports_6_10_1z00, BgL_bgl_string2830za700za7za7_3129za7, "socket", 6 );
DEFINE_STRING( BGl_string2912z00zz__r4_ports_6_10_1z00, BgL_bgl_string2912za700za7za7_3130za7, "&output-port-name", 17 );
DEFINE_STRING( BGl_string2831z00zz__r4_ports_6_10_1z00, BgL_bgl_string2831za700za7za7_3131za7, "handler1100", 11 );
DEFINE_STRING( BGl_string2750z00zz__r4_ports_6_10_1z00, BgL_bgl_string2750za700za7za7_3132za7, "&input-port-reopen!", 19 );
DEFINE_STRING( BGl_string2913z00zz__r4_ports_6_10_1z00, BgL_bgl_string2913za700za7za7_3133za7, "&output-port-name-set!", 22 );
DEFINE_STRING( BGl_string2832z00zz__r4_ports_6_10_1z00, BgL_bgl_string2832za700za7za7_3134za7, "<@exit:1452>~0", 14 );
DEFINE_STRING( BGl_string2751z00zz__r4_ports_6_10_1z00, BgL_bgl_string2751za700za7za7_3135za7, "&input-port-clone!", 18 );
DEFINE_STRING( BGl_string2914z00zz__r4_ports_6_10_1z00, BgL_bgl_string2914za700za7za7_3136za7, "set-output-port-position!", 25 );
DEFINE_STRING( BGl_string2833z00zz__r4_ports_6_10_1z00, BgL_bgl_string2833za700za7za7_3137za7, "parser", 6 );
DEFINE_STRING( BGl_string2752z00zz__r4_ports_6_10_1z00, BgL_bgl_string2752za700za7za7_3138za7, "with-input-from-file:Wrong number of arguments", 46 );
DEFINE_STRING( BGl_string2915z00zz__r4_ports_6_10_1z00, BgL_bgl_string2915za700za7za7_3139za7, "Cannot seek port", 16 );
DEFINE_STRING( BGl_string2834z00zz__r4_ports_6_10_1z00, BgL_bgl_string2834za700za7za7_3140za7, "", 0 );
DEFINE_STRING( BGl_string2916z00zz__r4_ports_6_10_1z00, BgL_bgl_string2916za700za7za7_3141za7, "&set-output-port-position!", 26 );
DEFINE_STRING( BGl_string2835z00zz__r4_ports_6_10_1z00, BgL_bgl_string2835za700za7za7_3142za7, "<@anonymous:1436>", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2inputzd2procedurezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2inputza7d23143z00, opt_generic_entry, BGl__openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_STRING( BGl_string2917z00zz__r4_ports_6_10_1z00, BgL_bgl_string2917za700za7za7_3144za7, "&output-port-position", 21 );
DEFINE_STRING( BGl_string2836z00zz__r4_ports_6_10_1z00, BgL_bgl_string2836za700za7za7_3145za7, "bytes=", 6 );
DEFINE_STRING( BGl_string2755z00zz__r4_ports_6_10_1z00, BgL_bgl_string2755za700za7za7_3146za7, "thunk", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2closezd2hookzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762outputza7d2port3147z00, BGl_z62outputzd2portzd2closezd2hookzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2918z00zz__r4_ports_6_10_1z00, BgL_bgl_string2918za700za7za7_3148za7, "&output-port-isatty?", 20 );
DEFINE_STRING( BGl_string2837z00zz__r4_ports_6_10_1z00, BgL_bgl_string2837za700za7za7_3149za7, "-", 1 );
DEFINE_STRING( BGl_string2756z00zz__r4_ports_6_10_1z00, BgL_bgl_string2756za700za7za7_3150za7, "with-input-from-file", 20 );
DEFINE_STRING( BGl_string2919z00zz__r4_ports_6_10_1z00, BgL_bgl_string2919za700za7za7_3151za7, "&input-port-name", 16 );
DEFINE_STRING( BGl_string2757z00zz__r4_ports_6_10_1z00, BgL_bgl_string2757za700za7za7_3152za7, "&with-input-from-file", 21 );
DEFINE_STRING( BGl_string2839z00zz__r4_ports_6_10_1z00, BgL_bgl_string2839za700za7za7_3153za7, "range", 5 );
DEFINE_STRING( BGl_string2758z00zz__r4_ports_6_10_1z00, BgL_bgl_string2758za700za7za7_3154za7, "<@anonymous:1397>", 17 );
DEFINE_STRING( BGl_string2759z00zz__r4_ports_6_10_1z00, BgL_bgl_string2759za700za7za7_3155za7, "with-input-from-string:Wrong number of arguments", 48 );
DEFINE_STRING( BGl_string2920z00zz__r4_ports_6_10_1z00, BgL_bgl_string2920za700za7za7_3156za7, "&input-port-name-set!", 21 );
DEFINE_STRING( BGl_string2921z00zz__r4_ports_6_10_1z00, BgL_bgl_string2921za700za7za7_3157za7, "&input-port-length", 18 );
DEFINE_STRING( BGl_string2840z00zz__r4_ports_6_10_1z00, BgL_bgl_string2840za700za7za7_3158za7, "<@anonymous:1434>", 17 );
DEFINE_STRING( BGl_string2922z00zz__r4_ports_6_10_1z00, BgL_bgl_string2922za700za7za7_3159za7, "&output-port-close-hook", 23 );
DEFINE_STRING( BGl_string2760z00zz__r4_ports_6_10_1z00, BgL_bgl_string2760za700za7za7_3160za7, "&with-input-from-string", 23 );
DEFINE_STRING( BGl_string2923z00zz__r4_ports_6_10_1z00, BgL_bgl_string2923za700za7za7_3161za7, "&closed-output-port?", 20 );
DEFINE_STRING( BGl_string2842z00zz__r4_ports_6_10_1z00, BgL_bgl_string2842za700za7za7_3162za7, "wrong number of arguments: [1..3] expected, provided", 52 );
DEFINE_STRING( BGl_string2761z00zz__r4_ports_6_10_1z00, BgL_bgl_string2761za700za7za7_3163za7, "with-input-from-port:Wrong number of arguments", 46 );
DEFINE_STRING( BGl_string2924z00zz__r4_ports_6_10_1z00, BgL_bgl_string2924za700za7za7_3164za7, "output-port-close-hook-set!", 27 );
DEFINE_STRING( BGl_string2843z00zz__r4_ports_6_10_1z00, BgL_bgl_string2843za700za7za7_3165za7, "_open-input-file", 16 );
DEFINE_STRING( BGl_string2762z00zz__r4_ports_6_10_1z00, BgL_bgl_string2762za700za7za7_3166za7, "&with-input-from-port", 21 );
DEFINE_STRING( BGl_string2925z00zz__r4_ports_6_10_1z00, BgL_bgl_string2925za700za7za7_3167za7, "Illegal hook", 12 );
DEFINE_STRING( BGl_string2844z00zz__r4_ports_6_10_1z00, BgL_bgl_string2844za700za7za7_3168za7, "loop", 4 );
DEFINE_STRING( BGl_string2763z00zz__r4_ports_6_10_1z00, BgL_bgl_string2763za700za7za7_3169za7, "open-input-procedure", 20 );
DEFINE_STRING( BGl_string2926z00zz__r4_ports_6_10_1z00, BgL_bgl_string2926za700za7za7_3170za7, "&output-port-close-hook-set!", 28 );
DEFINE_STRING( BGl_string2845z00zz__r4_ports_6_10_1z00, BgL_bgl_string2845za700za7za7_3171za7, "pair", 4 );
DEFINE_STRING( BGl_string2764z00zz__r4_ports_6_10_1z00, BgL_bgl_string2764za700za7za7_3172za7, "with-input-from-procedure:Wrong number of arguments", 51 );
DEFINE_STRING( BGl_string2927z00zz__r4_ports_6_10_1z00, BgL_bgl_string2927za700za7za7_3173za7, "&output-port-flush-hook", 23 );
DEFINE_STRING( BGl_string2846z00zz__r4_ports_6_10_1z00, BgL_bgl_string2846za700za7za7_3174za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string2765z00zz__r4_ports_6_10_1z00, BgL_bgl_string2765za700za7za7_3175za7, "&with-input-from-procedure", 26 );
DEFINE_STRING( BGl_string2928z00zz__r4_ports_6_10_1z00, BgL_bgl_string2928za700za7za7_3176za7, "output-port-flush-hook-set!", 27 );
DEFINE_STRING( BGl_string2766z00zz__r4_ports_6_10_1z00, BgL_bgl_string2766za700za7za7_3177za7, "with-output-to-file:Wrong number of arguments", 45 );
DEFINE_STRING( BGl_string2929z00zz__r4_ports_6_10_1z00, BgL_bgl_string2929za700za7za7_3178za7, "&output-port-flush-hook-set!", 28 );
DEFINE_STRING( BGl_string2767z00zz__r4_ports_6_10_1z00, BgL_bgl_string2767za700za7za7_3179za7, "with-output-to-file", 19 );
DEFINE_STRING( BGl_string2849z00zz__r4_ports_6_10_1z00, BgL_bgl_string2849za700za7za7_3180za7, "open", 4 );
DEFINE_STRING( BGl_string2768z00zz__r4_ports_6_10_1z00, BgL_bgl_string2768za700za7za7_3181za7, "&with-output-to-file", 20 );
DEFINE_STRING( BGl_string2769z00zz__r4_ports_6_10_1z00, BgL_bgl_string2769za700za7za7_3182za7, "<@anonymous:1403>", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2fillzd2barrierzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73183za7, BGl_z62inputzd2portzd2fillzd2barrierzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_z52openzd2inputzd2httpzd2socketzd2envz52zz__r4_ports_6_10_1z00, BgL_bgl_za762za752openza7d2inp3184za7, BGl_z62z52openzd2inputzd2httpzd2socketze2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2outputzd2stringzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762getza7d2outputza73185za7, BGl_z62getzd2outputzd2stringz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2930z00zz__r4_ports_6_10_1z00, BgL_bgl_string2930za700za7za7_3186za7, "&output-port-flush-buffer", 25 );
DEFINE_STRING( BGl_string2931z00zz__r4_ports_6_10_1z00, BgL_bgl_string2931za700za7za7_3187za7, "&output-port-flush-buffer-set!", 30 );
DEFINE_STRING( BGl_string2932z00zz__r4_ports_6_10_1z00, BgL_bgl_string2932za700za7za7_3188za7, "&input-port-close-hook", 22 );
DEFINE_STRING( BGl_string2851z00zz__r4_ports_6_10_1z00, BgL_bgl_string2851za700za7za7_3189za7, "name", 4 );
DEFINE_STRING( BGl_string2770z00zz__r4_ports_6_10_1z00, BgL_bgl_string2770za700za7za7_3190za7, "with-append-to-file:Wrong number of arguments", 45 );
DEFINE_STRING( BGl_string2933z00zz__r4_ports_6_10_1z00, BgL_bgl_string2933za700za7za7_3191za7, "input-port-close-hook-set!", 26 );
DEFINE_STRING( BGl_string2771z00zz__r4_ports_6_10_1z00, BgL_bgl_string2771za700za7za7_3192za7, "&with-append-to-file", 20 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2existszf3zd2envzf3zz__r4_ports_6_10_1z00, BgL_bgl_za762fileza7d2exists3193z00, BGl_z62filezd2existszf3z43zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2outputzd2tozd2procedurezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762withza7d2output3194z00, BGl_z62withzd2outputzd2tozd2procedurezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2934z00zz__r4_ports_6_10_1z00, BgL_bgl_string2934za700za7za7_3195za7, "&input-port-close-hook-set!", 27 );
DEFINE_STRING( BGl_string2853z00zz__r4_ports_6_10_1z00, BgL_bgl_string2853za700za7za7_3196za7, "buffer", 6 );
DEFINE_STRING( BGl_string2772z00zz__r4_ports_6_10_1z00, BgL_bgl_string2772za700za7za7_3197za7, "<@anonymous:1405>", 17 );
DEFINE_STRING( BGl_string2935z00zz__r4_ports_6_10_1z00, BgL_bgl_string2935za700za7za7_3198za7, "input-port-seek", 15 );
DEFINE_STRING( BGl_string2773z00zz__r4_ports_6_10_1z00, BgL_bgl_string2773za700za7za7_3199za7, "with-output-to-port:Wrong number of arguments", 45 );
DEFINE_STRING( BGl_string2936z00zz__r4_ports_6_10_1z00, BgL_bgl_string2936za700za7za7_3200za7, "&input-port-seek", 16 );
DEFINE_STRING( BGl_string2855z00zz__r4_ports_6_10_1z00, BgL_bgl_string2855za700za7za7_3201za7, "timeout", 7 );
DEFINE_STRING( BGl_string2774z00zz__r4_ports_6_10_1z00, BgL_bgl_string2774za700za7za7_3202za7, "&with-output-to-port", 20 );
DEFINE_STRING( BGl_string2937z00zz__r4_ports_6_10_1z00, BgL_bgl_string2937za700za7za7_3203za7, "input-port-seek-set!", 20 );
DEFINE_STRING( BGl_string2775z00zz__r4_ports_6_10_1z00, BgL_bgl_string2775za700za7za7_3204za7, "with-output-to-string:Wrong number of arguments", 47 );
DEFINE_STRING( BGl_string2938z00zz__r4_ports_6_10_1z00, BgL_bgl_string2938za700za7za7_3205za7, "Illegal seek procedure", 22 );
DEFINE_STRING( BGl_string2857z00zz__r4_ports_6_10_1z00, BgL_bgl_string2857za700za7za7_3206za7, "open-input-string", 17 );
DEFINE_STRING( BGl_string2776z00zz__r4_ports_6_10_1z00, BgL_bgl_string2776za700za7za7_3207za7, "with-output-to-string", 21 );
DEFINE_STRING( BGl_string2939z00zz__r4_ports_6_10_1z00, BgL_bgl_string2939za700za7za7_3208za7, "&input-port-seek-set!", 21 );
DEFINE_STRING( BGl_string2858z00zz__r4_ports_6_10_1z00, BgL_bgl_string2858za700za7za7_3209za7, "_open-input-string", 18 );
DEFINE_STRING( BGl_string2777z00zz__r4_ports_6_10_1z00, BgL_bgl_string2777za700za7za7_3210za7, "&with-output-to-string", 22 );
DEFINE_STRING( BGl_string2859z00zz__r4_ports_6_10_1z00, BgL_bgl_string2859za700za7za7_3211za7, "Illegal start offset", 20 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2namezd2setz12zd2envz12zz__r4_ports_6_10_1z00, BgL_bgl_za762outputza7d2port3212z00, BGl_z62outputzd2portzd2namezd2setz12za2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_copyzd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762copyza7d2fileza7b3213za7, BGl_z62copyzd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2940z00zz__r4_ports_6_10_1z00, BgL_bgl_string2940za700za7za7_3214za7, "&input-port-buffer", 18 );
DEFINE_STRING( BGl_string2941z00zz__r4_ports_6_10_1z00, BgL_bgl_string2941za700za7za7_3215za7, "&input-port-buffer-set!", 23 );
DEFINE_STRING( BGl_string2860z00zz__r4_ports_6_10_1z00, BgL_bgl_string2860za700za7za7_3216za7, "Start offset out of bounds", 26 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2stringzd2portzf3zd2envz21zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2strin3217z00, BGl_z62inputzd2stringzd2portzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2942z00zz__r4_ports_6_10_1z00, BgL_bgl_string2942za700za7za7_3218za7, "&output-port-buffer", 19 );
DEFINE_STRING( BGl_string2861z00zz__r4_ports_6_10_1z00, BgL_bgl_string2861za700za7za7_3219za7, "Start offset greater than end", 29 );
DEFINE_STRING( BGl_string2780z00zz__r4_ports_6_10_1z00, BgL_bgl_string2780za700za7za7_3220za7, "with-output-to-procedure", 24 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2gza7ipzd2portzf3zd2envz86zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2gza7a7i3221za7, BGl_z62inputzd2gza7ipzd2portzf3z36zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2943z00zz__r4_ports_6_10_1z00, BgL_bgl_string2943za700za7za7_3222za7, "&output-port-buffer-set!", 24 );
DEFINE_STRING( BGl_string2862z00zz__r4_ports_6_10_1z00, BgL_bgl_string2862za700za7za7_3223za7, "End offset out of bounds", 24 );
DEFINE_STRING( BGl_string2781z00zz__r4_ports_6_10_1z00, BgL_bgl_string2781za700za7za7_3224za7, "with-output-to-procedure:Wrong number of arguments", 50 );
DEFINE_STRING( BGl_string2944z00zz__r4_ports_6_10_1z00, BgL_bgl_string2944za700za7za7_3225za7, "&file-exists?", 13 );
DEFINE_STRING( BGl_string2782z00zz__r4_ports_6_10_1z00, BgL_bgl_string2782za700za7za7_3226za7, "&with-output-to-procedure", 25 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2778z00zz__r4_ports_6_10_1z00, BgL_bgl_za762flushza762za7za7__r3227z00, BGl_z62flushz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2945z00zz__r4_ports_6_10_1z00, BgL_bgl_string2945za700za7za7_3228za7, "file-gzip?", 10 );
DEFINE_STRING( BGl_string2864z00zz__r4_ports_6_10_1z00, BgL_bgl_string2864za700za7za7_3229za7, "open-input-string!", 18 );
DEFINE_STRING( BGl_string2783z00zz__r4_ports_6_10_1z00, BgL_bgl_string2783za700za7za7_3230za7, "<@anonymous:1408>", 17 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2779z00zz__r4_ports_6_10_1z00, BgL_bgl_za762closeza762za7za7__r3231z00, BGl_z62closez62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2outputzd2procedurezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2outputza7d3232z00, opt_generic_entry, BGl__openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_STRING( BGl_string2865z00zz__r4_ports_6_10_1z00, BgL_bgl_string2865za700za7za7_3233za7, "_open-input-string!", 19 );
DEFINE_STRING( BGl_string2784z00zz__r4_ports_6_10_1z00, BgL_bgl_string2784za700za7za7_3234za7, "with-error-to-string:Wrong number of arguments", 46 );
DEFINE_STRING( BGl_string2947z00zz__r4_ports_6_10_1z00, BgL_bgl_string2947za700za7za7_3235za7, "&delete-file", 12 );
DEFINE_STRING( BGl_string2785z00zz__r4_ports_6_10_1z00, BgL_bgl_string2785za700za7za7_3236za7, "with-error-to-string", 20 );
DEFINE_STRING( BGl_string2948z00zz__r4_ports_6_10_1z00, BgL_bgl_string2948za700za7za7_3237za7, "&make-directory", 15 );
DEFINE_STRING( BGl_string2867z00zz__r4_ports_6_10_1z00, BgL_bgl_string2867za700za7za7_3238za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string2786z00zz__r4_ports_6_10_1z00, BgL_bgl_string2786za700za7za7_3239za7, "&with-error-to-string", 21 );
DEFINE_STRING( BGl_string2949z00zz__r4_ports_6_10_1z00, BgL_bgl_string2949za700za7za7_3240za7, "string-ref", 10 );
DEFINE_STRING( BGl_string2868z00zz__r4_ports_6_10_1z00, BgL_bgl_string2868za700za7za7_3241za7, "_open-input-procedure", 21 );
DEFINE_STRING( BGl_string2787z00zz__r4_ports_6_10_1z00, BgL_bgl_string2787za700za7za7_3242za7, "with-error-to-file:Wrong number of arguments", 44 );
DEFINE_STRING( BGl_string2789z00zz__r4_ports_6_10_1z00, BgL_bgl_string2789za700za7za7_3243za7, "with-error-to-file", 18 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2accesszd2timezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762fileza7d2access3244z00, BGl_z62filezd2accesszd2timez62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2950z00zz__r4_ports_6_10_1z00, BgL_bgl_string2950za700za7za7_3245za7, "&make-directories", 17 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2946z00zz__r4_ports_6_10_1z00, BgL_bgl_za762za7c3za704anonymo3246za7, BGl_z62zc3z04anonymousza31534ze3ze5zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2951z00zz__r4_ports_6_10_1z00, BgL_bgl_string2951za700za7za7_3247za7, "&delete-directory", 17 );
DEFINE_STRING( BGl_string2870z00zz__r4_ports_6_10_1z00, BgL_bgl_string2870za700za7za7_3248za7, "open-input-gzip-port", 20 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2timeszd2setz12zd2envzc0zz__r4_ports_6_10_1z00, BgL_bgl_za762fileza7d2timesza73249za7, BGl_z62filezd2timeszd2setz12z70zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string2952z00zz__r4_ports_6_10_1z00, BgL_bgl_string2952za700za7za7_3250za7, "&rename-file", 12 );
DEFINE_STRING( BGl_string2871z00zz__r4_ports_6_10_1z00, BgL_bgl_string2871za700za7za7_3251za7, "_open-input-gzip-port", 21 );
DEFINE_STRING( BGl_string2790z00zz__r4_ports_6_10_1z00, BgL_bgl_string2790za700za7za7_3252za7, "&with-error-to-file", 19 );
DEFINE_STRING( BGl_string2953z00zz__r4_ports_6_10_1z00, BgL_bgl_string2953za700za7za7_3253za7, "&truncate-file", 14 );
DEFINE_STRING( BGl_string2872z00zz__r4_ports_6_10_1z00, BgL_bgl_string2872za700za7za7_3254za7, "&open-input-c-string", 20 );
DEFINE_STRING( BGl_string2791z00zz__r4_ports_6_10_1z00, BgL_bgl_string2791za700za7za7_3255za7, "<@anonymous:1414>", 17 );
DEFINE_STRING( BGl_string2954z00zz__r4_ports_6_10_1z00, BgL_bgl_string2954za700za7za7_3256za7, "&output-port-truncate", 21 );
DEFINE_STRING( BGl_string2873z00zz__r4_ports_6_10_1z00, BgL_bgl_string2873za700za7za7_3257za7, "&reopen-input-c-string", 22 );
DEFINE_STRING( BGl_string2792z00zz__r4_ports_6_10_1z00, BgL_bgl_string2792za700za7za7_3258za7, "with-error-to-port:Wrong number of arguments", 44 );
DEFINE_STRING( BGl_string2955z00zz__r4_ports_6_10_1z00, BgL_bgl_string2955za700za7za7_3259za7, "&copy-file", 10 );
DEFINE_STRING( BGl_string2874z00zz__r4_ports_6_10_1z00, BgL_bgl_string2874za700za7za7_3260za7, "&input-port-timeout-set!", 24 );
DEFINE_STRING( BGl_string2793z00zz__r4_ports_6_10_1z00, BgL_bgl_string2793za700za7za7_3261za7, "&with-error-to-port", 19 );
DEFINE_STRING( BGl_string2956z00zz__r4_ports_6_10_1z00, BgL_bgl_string2956za700za7za7_3262za7, "&directory?", 11 );
DEFINE_STRING( BGl_string2957z00zz__r4_ports_6_10_1z00, BgL_bgl_string2957za700za7za7_3263za7, "&directory->list", 16 );
DEFINE_STRING( BGl_string2876z00zz__r4_ports_6_10_1z00, BgL_bgl_string2876za700za7za7_3264za7, "_open-output-file", 17 );
DEFINE_STRING( BGl_string2958z00zz__r4_ports_6_10_1z00, BgL_bgl_string2958za700za7za7_3265za7, "&directory->path-list", 21 );
DEFINE_STRING( BGl_string2796z00zz__r4_ports_6_10_1z00, BgL_bgl_string2796za700za7za7_3266za7, "with-error-to-procedure", 23 );
DEFINE_STRING( BGl_string2959z00zz__r4_ports_6_10_1z00, BgL_bgl_string2959za700za7za7_3267za7, "&file-modification-time", 23 );
DEFINE_STRING( BGl_string2878z00zz__r4_ports_6_10_1z00, BgL_bgl_string2878za700za7za7_3268za7, "_append-output-file", 19 );
DEFINE_STRING( BGl_string2797z00zz__r4_ports_6_10_1z00, BgL_bgl_string2797za700za7za7_3269za7, "with-error-to-procedure:Wrong number of arguments", 49 );
DEFINE_STRING( BGl_string2798z00zz__r4_ports_6_10_1z00, BgL_bgl_string2798za700za7za7_3270za7, "&with-error-to-procedure", 24 );
DEFINE_STRING( BGl_string2799z00zz__r4_ports_6_10_1z00, BgL_bgl_string2799za700za7za7_3271za7, "<@anonymous:1416>", 17 );
extern obj_t BGl_openzd2inputzd2inflatezd2filezd2envz00zz__gunza7ipza7;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2flushzd2hookzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762outputza7d2port3272z00, BGl_z62outputzd2portzd2flushzd2hookzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
extern obj_t BGl_openzd2inputzd2ftpzd2filezd2envz00zz__ftpz00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2timeoutzd2setz12zd2envz12zz__r4_ports_6_10_1z00, BgL_bgl_za762outputza7d2port3273z00, BGl_z62outputzd2portzd2timeoutzd2setz12za2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2procedurezd2portzf3zd2envz21zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2proce3274z00, BGl_z62inputzd2procedurezd2portzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2960z00zz__r4_ports_6_10_1z00, BgL_bgl_string2960za700za7za7_3275za7, "&file-change-time", 17 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2794z00zz__r4_ports_6_10_1z00, BgL_bgl_za762flush2154za762za73276za7, BGl_z62flush2154z62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2961z00zz__r4_ports_6_10_1z00, BgL_bgl_string2961za700za7za7_3277za7, "&file-access-time", 17 );
DEFINE_STRING( BGl_string2880z00zz__r4_ports_6_10_1z00, BgL_bgl_string2880za700za7za7_3278za7, "open-output-string", 18 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2795z00zz__r4_ports_6_10_1z00, BgL_bgl_za762close2153za762za73279za7, BGl_z62close2153z62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2962z00zz__r4_ports_6_10_1z00, BgL_bgl_string2962za700za7za7_3280za7, "&file-times-set!", 16 );
DEFINE_STRING( BGl_string2881z00zz__r4_ports_6_10_1z00, BgL_bgl_string2881za700za7za7_3281za7, "wrong number of arguments: [0..1] expected, provided", 52 );
DEFINE_STRING( BGl_string2963z00zz__r4_ports_6_10_1z00, BgL_bgl_string2963za700za7za7_3282za7, "belong", 6 );
DEFINE_STRING( BGl_string2964z00zz__r4_ports_6_10_1z00, BgL_bgl_string2964za700za7za7_3283za7, "&file-size", 10 );
DEFINE_STRING( BGl_string2883z00zz__r4_ports_6_10_1z00, BgL_bgl_string2883za700za7za7_3284za7, "open-output-procedure", 21 );
DEFINE_STRING( BGl_string2965z00zz__r4_ports_6_10_1z00, BgL_bgl_string2965za700za7za7_3285za7, "&file-uid", 9 );
DEFINE_STRING( BGl_string2884z00zz__r4_ports_6_10_1z00, BgL_bgl_string2884za700za7za7_3286za7, "wrong number of arguments: [1..4] expected, provided", 52 );
DEFINE_STRING( BGl_string2966z00zz__r4_ports_6_10_1z00, BgL_bgl_string2966za700za7za7_3287za7, "&file-gid", 9 );
DEFINE_STRING( BGl_string2967z00zz__r4_ports_6_10_1z00, BgL_bgl_string2967za700za7za7_3288za7, "&file-mode", 10 );
DEFINE_STRING( BGl_string2968z00zz__r4_ports_6_10_1z00, BgL_bgl_string2968za700za7za7_3289za7, "&file-type", 10 );
DEFINE_STRING( BGl_string2887z00zz__r4_ports_6_10_1z00, BgL_bgl_string2887za700za7za7_3290za7, "_open-output-procedure", 22 );
DEFINE_STRING( BGl_string2969z00zz__r4_ports_6_10_1z00, BgL_bgl_string2969za700za7za7_3291za7, "&make-symlink", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flushzd2outputzd2portzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762flushza7d2outpu3292z00, BGl_z62flushzd2outputzd2portz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2errorzd2tozd2procedurezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762withza7d2errorza73293za7, BGl_z62withzd2errorzd2tozd2procedurezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2970z00zz__r4_ports_6_10_1z00, BgL_bgl_string2970za700za7za7_3294za7, "vector-ref", 10 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2885z00zz__r4_ports_6_10_1z00, BgL_bgl_za762flush2158za762za73295za7, BGl_z62flush2158z62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2890z00zz__r4_ports_6_10_1z00, BgL_bgl_string2890za700za7za7_3296za7, "Illegal flush procedure", 23 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2886z00zz__r4_ports_6_10_1z00, BgL_bgl_za762close2157za762za73297za7, BGl_z62close2157z62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2891z00zz__r4_ports_6_10_1z00, BgL_bgl_string2891za700za7za7_3298za7, "Illegal close procedure", 23 );
DEFINE_STRING( BGl_string2973z00zz__r4_ports_6_10_1z00, BgL_bgl_string2973za700za7za7_3299za7, "except", 6 );
DEFINE_STRING( BGl_string2892z00zz__r4_ports_6_10_1z00, BgL_bgl_string2892za700za7za7_3300za7, "Illegal write procedure", 23 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2888z00zz__r4_ports_6_10_1z00, BgL_bgl_za762close2156za762za73301za7, BGl_z62close2156z62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2893z00zz__r4_ports_6_10_1z00, BgL_bgl_string2893za700za7za7_3302za7, "&output-port-timeout-set!", 25 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2889z00zz__r4_ports_6_10_1z00, BgL_bgl_za762close2155za762za73303za7, BGl_z62close2155z62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2975z00zz__r4_ports_6_10_1z00, BgL_bgl_string2975za700za7za7_3304za7, "read", 4 );
DEFINE_STRING( BGl_string2894z00zz__r4_ports_6_10_1z00, BgL_bgl_string2894za700za7za7_3305za7, "&closed-input-port?", 19 );
DEFINE_STRING( BGl_string2895z00zz__r4_ports_6_10_1z00, BgL_bgl_string2895za700za7za7_3306za7, "&close-input-port", 17 );
DEFINE_STRING( BGl_string2896z00zz__r4_ports_6_10_1z00, BgL_bgl_string2896za700za7za7_3307za7, "&get-output-string", 18 );
DEFINE_STRING( BGl_string2978z00zz__r4_ports_6_10_1z00, BgL_bgl_string2978za700za7za7_3308za7, "write", 5 );
DEFINE_STRING( BGl_string2897z00zz__r4_ports_6_10_1z00, BgL_bgl_string2897za700za7za7_3309za7, "&close-output-port", 18 );
DEFINE_STRING( BGl_string2898z00zz__r4_ports_6_10_1z00, BgL_bgl_string2898za700za7za7_3310za7, "&flush-output-port", 18 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2lengthzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73311za7, BGl_z62inputzd2portzd2lengthz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2899z00zz__r4_ports_6_10_1z00, BgL_bgl_string2899za700za7za7_3312za7, "&reset-output-port", 18 );
DEFINE_STRING( BGl_string2980z00zz__r4_ports_6_10_1z00, BgL_bgl_string2980za700za7za7_3313za7, "select", 6 );
DEFINE_STRING( BGl_string2981z00zz__r4_ports_6_10_1z00, BgL_bgl_string2981za700za7za7_3314za7, "Illegal keyword argument", 24 );
DEFINE_STRING( BGl_string2982z00zz__r4_ports_6_10_1z00, BgL_bgl_string2982za700za7za7_3315za7, "_select", 7 );
DEFINE_STRING( BGl_string2983z00zz__r4_ports_6_10_1z00, BgL_bgl_string2983za700za7za7_3316za7, "wrong number of arguments: [0..4] expected, provided", 52 );
DEFINE_STRING( BGl_string2985z00zz__r4_ports_6_10_1z00, BgL_bgl_string2985za700za7za7_3317za7, "open-pipes", 10 );
DEFINE_STRING( BGl_string2987z00zz__r4_ports_6_10_1z00, BgL_bgl_string2987za700za7za7_3318za7, "lockf", 5 );
DEFINE_STRING( BGl_string2988z00zz__r4_ports_6_10_1z00, BgL_bgl_string2988za700za7za7_3319za7, "wrong number of arguments: [2..3] expected, provided", 52 );
DEFINE_STRING( BGl_string2989z00zz__r4_ports_6_10_1z00, BgL_bgl_string2989za700za7za7_3320za7, "_lockf", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_callzd2withzd2inputzd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762callza7d2withza7d3321za7, BGl_z62callzd2withzd2inputzd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2seekzd2setz12zd2envz12zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73322za7, BGl_z62inputzd2portzd2seekzd2setz12za2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_renamezd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762renameza7d2file3323z00, BGl_z62renamezd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2990z00zz__r4_ports_6_10_1z00, BgL_bgl_string2990za700za7za7_3324za7, "symbol", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_callzd2withzd2inputzd2stringzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762callza7d2withza7d3325za7, BGl_z62callzd2withzd2inputzd2stringzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2992z00zz__r4_ports_6_10_1z00, BgL_bgl_string2992za700za7za7_3326za7, "lock", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2symlinkzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762makeza7d2symlin3327z00, BGl_z62makezd2symlinkzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2994z00zz__r4_ports_6_10_1z00, BgL_bgl_string2994za700za7za7_3328za7, "tlock", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_truncatezd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762truncateza7d2fi3329z00, BGl_z62truncatezd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2996z00zz__r4_ports_6_10_1z00, BgL_bgl_string2996za700za7za7_3330za7, "ulock", 5 );
DEFINE_STRING( BGl_string2998z00zz__r4_ports_6_10_1z00, BgL_bgl_string2998za700za7za7_3331za7, "test", 4 );
DEFINE_STRING( BGl_string2999z00zz__r4_ports_6_10_1z00, BgL_bgl_string2999za700za7za7_3332za7, "Bad command", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_deletezd2directoryzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762deleteza7d2dire3333z00, BGl_z62deletezd2directoryzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2pipeszd2envz00zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2pipesza7d23334z00, opt_generic_entry, BGl__openzd2pipeszd2zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2reopenz12zd2envzc0zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73335za7, BGl_z62inputzd2portzd2reopenz12z70zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2flushzd2bufferzd2setz12zd2envzc0zz__r4_ports_6_10_1z00, BgL_bgl_za762outputza7d2port3336z00, BGl_z62outputzd2portzd2flushzd2bufferzd2setz12z70zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2inputzd2fromzd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762withza7d2inputza73337za7, BGl_z62withzd2inputzd2fromzd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2portzd2bufferzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762getza7d2portza7d23338za7, BGl_z62getzd2portzd2bufferz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2gidzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762fileza7d2gidza7b03339za7, BGl_z62filezd2gidzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_directoryzd2ze3pathzd2listzd2envz31zz__r4_ports_6_10_1z00, BgL_bgl_za762directoryza7d2za73340za7, BGl_z62directoryzd2ze3pathzd2listz81zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2truncatezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762outputza7d2port3341z00, BGl_z62outputzd2portzd2truncatez62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2siza7ezd2envza7zz__r4_ports_6_10_1z00, BgL_bgl_za762fileza7d2siza7a7e3342za7, BGl_z62filezd2siza7ez17zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2stringzd2portzf3zd2envz21zz__r4_ports_6_10_1z00, BgL_bgl_za762outputza7d2stri3343z00, BGl_z62outputzd2stringzd2portzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2isattyzf3zd2envz21zz__r4_ports_6_10_1z00, BgL_bgl_za762outputza7d2port3344z00, BGl_z62outputzd2portzd2isattyzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2inputzd2stringz12zd2envzc0zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2inputza7d23345z00, opt_generic_entry, BGl__openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_reopenzd2inputzd2czd2stringzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762reopenza7d2inpu3346z00, BGl_z62reopenzd2inputzd2czd2stringzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_lockfzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__lockfza700za7za7__r4_3347za7, opt_generic_entry, BGl__lockfz00zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_closezd2inputzd2portzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762closeza7d2input3348z00, BGl_z62closezd2inputzd2portz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
extern obj_t BGl_openzd2inputzd2gza7ipzd2filezd2envza7zz__gunza7ipza7;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2bufferzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73349za7, BGl_z62inputzd2portzd2bufferz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_z52openzd2inputzd2resourcezd2envz80zz__r4_ports_6_10_1z00, BgL_bgl_za762za752openza7d2inp3350za7, BGl_z62z52openzd2inputzd2resourcez30zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_directoryzf3zd2envz21zz__r4_ports_6_10_1z00, BgL_bgl_za762directoryza7f3za73351za7, BGl_z62directoryzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2fillzd2barrierzd2setz12zd2envzc0zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73352za7, BGl_z62inputzd2portzd2fillzd2barrierzd2setz12z70zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_setzd2inputzd2portzd2positionz12zd2envz12zz__r4_ports_6_10_1z00, BgL_bgl_za762setza7d2inputza7d3353za7, BGl_z62setzd2inputzd2portzd2positionz12za2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_closezd2outputzd2portzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762closeza7d2outpu3354z00, BGl_z62closezd2outputzd2portz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2closezd2hookzd2setz12zd2envzc0zz__r4_ports_6_10_1z00, BgL_bgl_za762outputza7d2port3355z00, BGl_z62outputzd2portzd2closezd2hookzd2setz12z70zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2inputzd2stringzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2inputza7d23356z00, opt_generic_entry, BGl__openzd2inputzd2stringz00zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2portzd2flushzd2hookzd2setz12zd2envzc0zz__r4_ports_6_10_1z00, BgL_bgl_za762outputza7d2port3357z00, BGl_z62outputzd2portzd2flushzd2hookzd2setz12z70zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_selectzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__selectza700za7za7__r43358za7, opt_generic_entry, BGl__selectz00zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2outputzd2stringzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2outputza7d3359z00, opt_generic_entry, BGl__openzd2outputzd2stringz00zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2inputzd2fromzd2procedurezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762withza7d2inputza73360za7, BGl_z62withzd2inputzd2fromzd2procedurezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2outputzd2tozd2filezd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762withza7d2output3361z00, BGl_z62withzd2outputzd2tozd2filezb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2lastzd2tokenzd2positionzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73362za7, BGl_z62inputzd2portzd2lastzd2tokenzd2positionz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_withzd2inputzd2fromzd2portzd2envz00zz__r4_ports_6_10_1z00, BgL_bgl_za762withza7d2inputza73363za7, BGl_z62withzd2inputzd2fromzd2portzb0zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_outputzd2procedurezd2portzf3zd2envz21zz__r4_ports_6_10_1z00, BgL_bgl_za762outputza7d2proc3364z00, BGl_z62outputzd2procedurezd2portzf3z91zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_setzd2outputzd2portzd2positionz12zd2envz12zz__r4_ports_6_10_1z00, BgL_bgl_za762setza7d2outputza73365za7, BGl_z62setzd2outputzd2portzd2positionz12za2zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_currentzd2inputzd2portzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762currentza7d2inp3366z00, BGl_z62currentzd2inputzd2portz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string3000z00zz__r4_ports_6_10_1z00, BgL_bgl_string3000za700za7za7_3367za7, "__r4_ports_6_10_1", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2positionzd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73368za7, BGl_z62inputzd2portzd2positionz62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2inputzd2gza7ipzd2portzd2envza7zz__r4_ports_6_10_1z00, BgL_bgl__openza7d2inputza7d23369z00, opt_generic_entry, BGl__openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inputzd2portzd2namezd2envzd2zz__r4_ports_6_10_1z00, BgL_bgl_za762inputza7d2portza73370za7, BGl_z62inputzd2portzd2namez62zz__r4_ports_6_10_1z00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol2720z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2722z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2724z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2903z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2823z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2905z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2825z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2827z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2754z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2841z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2848z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_keyword2972z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_keyword2974z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_keyword2976z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_keyword2977z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2850z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2852z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2854z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2856z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2863z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2866z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2869z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2788z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2875z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2877z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2879z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2882z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2979z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2984z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2986z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2991z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2993z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2995z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_symbol2997z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_list2719z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_list2815z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_list2816z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_list2820z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_list2902z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_list2753z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_list2847z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_list2971z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_keyword2817z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_keyword2821z00zz__r4_ports_6_10_1z00) );
ADD_ROOT( (void *)(&BGl_keyword2838z00zz__r4_ports_6_10_1z00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long BgL_checksumz00_4172, char * BgL_fromz00_4173)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_ports_6_10_1z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_ports_6_10_1z00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__r4_ports_6_10_1z00(); 
BGl_cnstzd2initzd2zz__r4_ports_6_10_1z00(); 
BGl_importedzd2moduleszd2initz00zz__r4_ports_6_10_1z00(); 
return 
BGl_toplevelzd2initzd2zz__r4_ports_6_10_1z00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_ports_6_10_1z00()
{
{ /* Ieee/port.scm 18 */
BGl_symbol2720z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2721z00zz__r4_ports_6_10_1z00); 
BGl_symbol2722z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2723z00zz__r4_ports_6_10_1z00); 
BGl_symbol2724z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2725z00zz__r4_ports_6_10_1z00); 
BGl_list2719z00zz__r4_ports_6_10_1z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2720z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_symbol2722z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_symbol2722z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_symbol2724z00zz__r4_ports_6_10_1z00, BNIL)))); 
BGl_symbol2754z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2755z00zz__r4_ports_6_10_1z00); 
BGl_list2753z00zz__r4_ports_6_10_1z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2720z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_symbol2754z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_symbol2754z00zz__r4_ports_6_10_1z00, BNIL))); 
BGl_symbol2788z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2789z00zz__r4_ports_6_10_1z00); 
BGl_keyword2817z00zz__r4_ports_6_10_1z00 = 
bstring_to_keyword(BGl_string2818z00zz__r4_ports_6_10_1z00); 
BGl_list2816z00zz__r4_ports_6_10_1z00 = 
MAKE_YOUNG_PAIR(BGl_keyword2817z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_string2819z00zz__r4_ports_6_10_1z00, BNIL)); 
BGl_keyword2821z00zz__r4_ports_6_10_1z00 = 
bstring_to_keyword(BGl_string2822z00zz__r4_ports_6_10_1z00); 
BGl_symbol2823z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2824z00zz__r4_ports_6_10_1z00); 
BGl_list2820z00zz__r4_ports_6_10_1z00 = 
MAKE_YOUNG_PAIR(BGl_keyword2821z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_symbol2823z00zz__r4_ports_6_10_1z00, BNIL)); 
BGl_list2815z00zz__r4_ports_6_10_1z00 = 
MAKE_YOUNG_PAIR(BGl_list2816z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_list2820z00zz__r4_ports_6_10_1z00, BNIL)); 
BGl_symbol2825z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2826z00zz__r4_ports_6_10_1z00); 
BGl_symbol2827z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2814z00zz__r4_ports_6_10_1z00); 
BGl_keyword2838z00zz__r4_ports_6_10_1z00 = 
bstring_to_keyword(BGl_string2839z00zz__r4_ports_6_10_1z00); 
BGl_symbol2841z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2811z00zz__r4_ports_6_10_1z00); 
BGl_symbol2848z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2849z00zz__r4_ports_6_10_1z00); 
BGl_symbol2850z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2851z00zz__r4_ports_6_10_1z00); 
BGl_symbol2852z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2853z00zz__r4_ports_6_10_1z00); 
BGl_symbol2854z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2855z00zz__r4_ports_6_10_1z00); 
BGl_list2847z00zz__r4_ports_6_10_1z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2720z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_symbol2848z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_symbol2848z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_symbol2850z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_symbol2852z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_symbol2854z00zz__r4_ports_6_10_1z00, BNIL)))))); 
BGl_symbol2856z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2857z00zz__r4_ports_6_10_1z00); 
BGl_symbol2863z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2864z00zz__r4_ports_6_10_1z00); 
BGl_symbol2866z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2763z00zz__r4_ports_6_10_1z00); 
BGl_symbol2869z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2870z00zz__r4_ports_6_10_1z00); 
BGl_symbol2875z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2734z00zz__r4_ports_6_10_1z00); 
BGl_symbol2877z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2740z00zz__r4_ports_6_10_1z00); 
BGl_symbol2879z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2880z00zz__r4_ports_6_10_1z00); 
BGl_symbol2882z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2883z00zz__r4_ports_6_10_1z00); 
BGl_symbol2903z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2904z00zz__r4_ports_6_10_1z00); 
BGl_symbol2905z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2906z00zz__r4_ports_6_10_1z00); 
BGl_list2902z00zz__r4_ports_6_10_1z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2720z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_symbol2903z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_symbol2903z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_symbol2724z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_symbol2905z00zz__r4_ports_6_10_1z00, BNIL))))); 
BGl_keyword2972z00zz__r4_ports_6_10_1z00 = 
bstring_to_keyword(BGl_string2973z00zz__r4_ports_6_10_1z00); 
BGl_keyword2974z00zz__r4_ports_6_10_1z00 = 
bstring_to_keyword(BGl_string2975z00zz__r4_ports_6_10_1z00); 
BGl_keyword2976z00zz__r4_ports_6_10_1z00 = 
bstring_to_keyword(BGl_string2855z00zz__r4_ports_6_10_1z00); 
BGl_keyword2977z00zz__r4_ports_6_10_1z00 = 
bstring_to_keyword(BGl_string2978z00zz__r4_ports_6_10_1z00); 
BGl_list2971z00zz__r4_ports_6_10_1z00 = 
MAKE_YOUNG_PAIR(BGl_keyword2972z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_keyword2974z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_keyword2976z00zz__r4_ports_6_10_1z00, 
MAKE_YOUNG_PAIR(BGl_keyword2977z00zz__r4_ports_6_10_1z00, BNIL)))); 
BGl_symbol2979z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2980z00zz__r4_ports_6_10_1z00); 
BGl_symbol2984z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2985z00zz__r4_ports_6_10_1z00); 
BGl_symbol2986z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2987z00zz__r4_ports_6_10_1z00); 
BGl_symbol2991z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2992z00zz__r4_ports_6_10_1z00); 
BGl_symbol2993z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2994z00zz__r4_ports_6_10_1z00); 
BGl_symbol2995z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2996z00zz__r4_ports_6_10_1z00); 
return ( 
BGl_symbol2997z00zz__r4_ports_6_10_1z00 = 
bstring_to_symbol(BGl_string2998z00zz__r4_ports_6_10_1z00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__r4_ports_6_10_1z00()
{
{ /* Ieee/port.scm 18 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__r4_ports_6_10_1z00()
{
{ /* Ieee/port.scm 18 */
{ /* Ieee/port.scm 878 */
obj_t BgL_res1975z00_2388;
BgL_res1975z00_2388 = 
bgl_make_mutex(BGl_string2703z00zz__r4_ports_6_10_1z00); 
BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00 = BgL_res1975z00_2388; } 
{ /* Ieee/port.scm 884 */
obj_t BgL_arg1360z00_1301;obj_t BgL_arg1361z00_1302;
BgL_arg1360z00_1301 = 
MAKE_YOUNG_PAIR(BGl_string2704z00zz__r4_ports_6_10_1z00, BGl_z52openzd2inputzd2filezd2envz80zz__r4_ports_6_10_1z00); 
{ /* Ieee/port.scm 885 */
obj_t BgL_arg1362z00_1303;obj_t BgL_arg1363z00_1304;
BgL_arg1362z00_1303 = 
MAKE_YOUNG_PAIR(BGl_string2705z00zz__r4_ports_6_10_1z00, BGl_proc2706z00zz__r4_ports_6_10_1z00); 
{ /* Ieee/port.scm 886 */
obj_t BgL_arg1367z00_1314;obj_t BgL_arg1368z00_1315;
BgL_arg1367z00_1314 = 
MAKE_YOUNG_PAIR(BGl_string2707z00zz__r4_ports_6_10_1z00, BGl_z52openzd2inputzd2pipezd2envz80zz__r4_ports_6_10_1z00); 
{ /* Ieee/port.scm 887 */
obj_t BgL_arg1370z00_1316;obj_t BgL_arg1371z00_1317;
BgL_arg1370z00_1316 = 
MAKE_YOUNG_PAIR(BGl_string2708z00zz__r4_ports_6_10_1z00, BGl_z52openzd2inputzd2pipezd2envz80zz__r4_ports_6_10_1z00); 
{ /* Ieee/port.scm 888 */
obj_t BgL_arg1372z00_1318;obj_t BgL_arg1373z00_1319;
BgL_arg1372z00_1318 = 
MAKE_YOUNG_PAIR(BGl_string2709z00zz__r4_ports_6_10_1z00, BGl_z52openzd2inputzd2httpzd2socketzd2envz52zz__r4_ports_6_10_1z00); 
{ /* Ieee/port.scm 889 */
obj_t BgL_arg1374z00_1320;obj_t BgL_arg1375z00_1321;
BgL_arg1374z00_1320 = 
MAKE_YOUNG_PAIR(BGl_string2710z00zz__r4_ports_6_10_1z00, BGl_openzd2inputzd2gza7ipzd2filezd2envza7zz__gunza7ipza7); 
{ /* Ieee/port.scm 890 */
obj_t BgL_arg1376z00_1322;obj_t BgL_arg1377z00_1323;
BgL_arg1376z00_1322 = 
MAKE_YOUNG_PAIR(BGl_string2711z00zz__r4_ports_6_10_1z00, BGl_openzd2inputzd2za7libzd2filezd2envza7zz__gunza7ipza7); 
{ /* Ieee/port.scm 891 */
obj_t BgL_arg1378z00_1324;obj_t BgL_arg1379z00_1325;
BgL_arg1378z00_1324 = 
MAKE_YOUNG_PAIR(BGl_string2712z00zz__r4_ports_6_10_1z00, BGl_openzd2inputzd2inflatezd2filezd2envz00zz__gunza7ipza7); 
{ /* Ieee/port.scm 892 */
obj_t BgL_arg1380z00_1326;obj_t BgL_arg1381z00_1327;
BgL_arg1380z00_1326 = 
MAKE_YOUNG_PAIR(BGl_string2713z00zz__r4_ports_6_10_1z00, BGl_z52openzd2inputzd2resourcezd2envz80zz__r4_ports_6_10_1z00); 
{ /* Ieee/port.scm 893 */
obj_t BgL_arg1382z00_1328;
BgL_arg1382z00_1328 = 
MAKE_YOUNG_PAIR(BGl_string2714z00zz__r4_ports_6_10_1z00, BGl_openzd2inputzd2ftpzd2filezd2envz00zz__ftpz00); 
BgL_arg1381z00_1327 = 
MAKE_YOUNG_PAIR(BgL_arg1382z00_1328, BNIL); } 
BgL_arg1379z00_1325 = 
MAKE_YOUNG_PAIR(BgL_arg1380z00_1326, BgL_arg1381z00_1327); } 
BgL_arg1377z00_1323 = 
MAKE_YOUNG_PAIR(BgL_arg1378z00_1324, BgL_arg1379z00_1325); } 
BgL_arg1375z00_1321 = 
MAKE_YOUNG_PAIR(BgL_arg1376z00_1322, BgL_arg1377z00_1323); } 
BgL_arg1373z00_1319 = 
MAKE_YOUNG_PAIR(BgL_arg1374z00_1320, BgL_arg1375z00_1321); } 
BgL_arg1371z00_1317 = 
MAKE_YOUNG_PAIR(BgL_arg1372z00_1318, BgL_arg1373z00_1319); } 
BgL_arg1368z00_1315 = 
MAKE_YOUNG_PAIR(BgL_arg1370z00_1316, BgL_arg1371z00_1317); } 
BgL_arg1363z00_1304 = 
MAKE_YOUNG_PAIR(BgL_arg1367z00_1314, BgL_arg1368z00_1315); } 
BgL_arg1361z00_1302 = 
MAKE_YOUNG_PAIR(BgL_arg1362z00_1303, BgL_arg1363z00_1304); } 
return ( 
BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00 = 
MAKE_YOUNG_PAIR(BgL_arg1360z00_1301, BgL_arg1361z00_1302), BUNSPEC) ;} } 

}



/* &<@anonymous:1365> */
obj_t BGl_z62zc3z04anonymousza31365ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3078, obj_t BgL_sz00_3079, obj_t BgL_pz00_3080, obj_t BgL_tmtz00_3081)
{
{ /* Ieee/port.scm 885 */
{ /* Ieee/port.scm 442 */
long BgL_endz00_4080;
{ /* Ieee/port.scm 442 */
obj_t BgL_stringz00_4081;
if(
STRINGP(BgL_sz00_3079))
{ /* Ieee/port.scm 442 */
BgL_stringz00_4081 = BgL_sz00_3079; }  else 
{ 
obj_t BgL_auxz00_4270;
BgL_auxz00_4270 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)19400)), BGl_string2716z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_sz00_3079); 
FAILURE(BgL_auxz00_4270,BFALSE,BFALSE);} 
BgL_endz00_4080 = 
STRING_LENGTH(BgL_stringz00_4081); } 
{ /* Ieee/port.scm 442 */

{ /* Ieee/port.scm 442 */
obj_t BgL_auxz00_4275;
if(
STRINGP(BgL_sz00_3079))
{ /* Ieee/port.scm 442 */
BgL_auxz00_4275 = BgL_sz00_3079
; }  else 
{ 
obj_t BgL_auxz00_4278;
BgL_auxz00_4278 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)19395)), BGl_string2716z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_sz00_3079); 
FAILURE(BgL_auxz00_4278,BFALSE,BFALSE);} 
return 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_auxz00_4275, 
BINT(((long)0)), 
BINT(BgL_endz00_4080));} } } } 

}



/* call-with-input-file */
BGL_EXPORTED_DEF obj_t BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_3, obj_t BgL_procz00_4)
{
{ /* Ieee/port.scm 535 */
{ /* Ieee/port.scm 536 */
obj_t BgL_portz00_1337;
{ /* Ieee/port.scm 440 */

BgL_portz00_1337 = 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_stringz00_3, BTRUE, 
BINT(((long)5000000))); } 
if(
INPUT_PORTP(BgL_portz00_1337))
{ /* Ieee/port.scm 538 */
obj_t BgL_exitd1047z00_1339;
BgL_exitd1047z00_1339 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Ieee/port.scm 540 */
obj_t BgL_zc3z04anonymousza31387ze3z87_3114;
BgL_zc3z04anonymousza31387ze3z87_3114 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31387ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31387ze3z87_3114, 
(int)(((long)0)), BgL_portz00_1337); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1047z00_1339, BgL_zc3z04anonymousza31387ze3z87_3114); 
{ /* Ieee/port.scm 539 */
obj_t BgL_tmp1049z00_1341;
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_4, ((long)1)))
{ /* Ieee/port.scm 539 */
BgL_tmp1049z00_1341 = 
PROCEDURE_ENTRY(BgL_procz00_4)(BgL_procz00_4, BgL_portz00_1337, BEOA); }  else 
{ /* Ieee/port.scm 539 */
FAILURE(BGl_string2718z00zz__r4_ports_6_10_1z00,BGl_list2719z00zz__r4_ports_6_10_1z00,BgL_procz00_4);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1047z00_1339); 
bgl_close_input_port(BgL_portz00_1337); 
return BgL_tmp1049z00_1341;} } }  else 
{ /* Ieee/port.scm 537 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_string2726z00zz__r4_ports_6_10_1z00, BGl_string2727z00zz__r4_ports_6_10_1z00, BgL_stringz00_3);} } } 

}



/* &call-with-input-file */
obj_t BGl_z62callzd2withzd2inputzd2filezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3115, obj_t BgL_stringz00_3116, obj_t BgL_procz00_3117)
{
{ /* Ieee/port.scm 535 */
{ /* Ieee/port.scm 536 */
obj_t BgL_auxz00_4313;obj_t BgL_auxz00_4306;
if(
PROCEDUREP(BgL_procz00_3117))
{ /* Ieee/port.scm 536 */
BgL_auxz00_4313 = BgL_procz00_3117
; }  else 
{ 
obj_t BgL_auxz00_4316;
BgL_auxz00_4316 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)24067)), BGl_string2728z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_procz00_3117); 
FAILURE(BgL_auxz00_4316,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_3116))
{ /* Ieee/port.scm 536 */
BgL_auxz00_4306 = BgL_stringz00_3116
; }  else 
{ 
obj_t BgL_auxz00_4309;
BgL_auxz00_4309 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)24067)), BGl_string2728z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3116); 
FAILURE(BgL_auxz00_4309,BFALSE,BFALSE);} 
return 
BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_4306, BgL_auxz00_4313);} } 

}



/* &<@anonymous:1387> */
obj_t BGl_z62zc3z04anonymousza31387ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3118)
{
{ /* Ieee/port.scm 538 */
{ /* Ieee/port.scm 540 */
obj_t BgL_portz00_3119;
BgL_portz00_3119 = 
PROCEDURE_REF(BgL_envz00_3118, 
(int)(((long)0))); 
{ /* Ieee/port.scm 540 */
obj_t BgL_portz00_4082;
if(
INPUT_PORTP(BgL_portz00_3119))
{ /* Ieee/port.scm 540 */
BgL_portz00_4082 = BgL_portz00_3119; }  else 
{ 
obj_t BgL_auxz00_4325;
BgL_auxz00_4325 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)24196)), BGl_string2730z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3119); 
FAILURE(BgL_auxz00_4325,BFALSE,BFALSE);} 
return 
bgl_close_input_port(BgL_portz00_4082);} } } 

}



/* call-with-input-string */
BGL_EXPORTED_DEF obj_t BGl_callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_5, obj_t BgL_procz00_6)
{
{ /* Ieee/port.scm 547 */
{ /* Ieee/port.scm 548 */
obj_t BgL_portz00_2396;
{ /* Ieee/port.scm 442 */
long BgL_endz00_2399;
BgL_endz00_2399 = 
STRING_LENGTH(BgL_stringz00_5); 
{ /* Ieee/port.scm 442 */

BgL_portz00_2396 = 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_stringz00_5, 
BINT(((long)0)), 
BINT(BgL_endz00_2399)); } } 
{ /* Ieee/port.scm 550 */
obj_t BgL_resz00_2400;
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_6, ((long)1)))
{ /* Ieee/port.scm 550 */
BgL_resz00_2400 = 
PROCEDURE_ENTRY(BgL_procz00_6)(BgL_procz00_6, BgL_portz00_2396, BEOA); }  else 
{ /* Ieee/port.scm 550 */
FAILURE(BGl_string2732z00zz__r4_ports_6_10_1z00,BGl_list2719z00zz__r4_ports_6_10_1z00,BgL_procz00_6);} 
bgl_close_input_port(BgL_portz00_2396); 
return BgL_resz00_2400;} } } 

}



/* &call-with-input-string */
obj_t BGl_z62callzd2withzd2inputzd2stringzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3120, obj_t BgL_stringz00_3121, obj_t BgL_procz00_3122)
{
{ /* Ieee/port.scm 547 */
{ /* Ieee/port.scm 548 */
obj_t BgL_auxz00_4349;obj_t BgL_auxz00_4342;
if(
PROCEDUREP(BgL_procz00_3122))
{ /* Ieee/port.scm 548 */
BgL_auxz00_4349 = BgL_procz00_3122
; }  else 
{ 
obj_t BgL_auxz00_4352;
BgL_auxz00_4352 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)24569)), BGl_string2733z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_procz00_3122); 
FAILURE(BgL_auxz00_4352,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_3121))
{ /* Ieee/port.scm 548 */
BgL_auxz00_4342 = BgL_stringz00_3121
; }  else 
{ 
obj_t BgL_auxz00_4345;
BgL_auxz00_4345 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)24569)), BGl_string2733z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3121); 
FAILURE(BgL_auxz00_4345,BFALSE,BFALSE);} 
return 
BGl_callzd2withzd2inputzd2stringzd2zz__r4_ports_6_10_1z00(BgL_auxz00_4342, BgL_auxz00_4349);} } 

}



/* call-with-output-file */
BGL_EXPORTED_DEF obj_t BGl_callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_7, obj_t BgL_procz00_8)
{
{ /* Ieee/port.scm 557 */
{ /* Ieee/port.scm 558 */
obj_t BgL_portz00_1352;
{ /* Ieee/port.scm 451 */

BgL_portz00_1352 = 
bgl_open_output_file(BgL_stringz00_7, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2734z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(default_io_bufsiz))); } 
if(
OUTPUT_PORTP(BgL_portz00_1352))
{ /* Ieee/port.scm 560 */
obj_t BgL_exitd1050z00_1354;
BgL_exitd1050z00_1354 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Ieee/port.scm 562 */
obj_t BgL_zc3z04anonymousza31389ze3z87_3123;
BgL_zc3z04anonymousza31389ze3z87_3123 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31389ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31389ze3z87_3123, 
(int)(((long)0)), BgL_portz00_1352); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1050z00_1354, BgL_zc3z04anonymousza31389ze3z87_3123); 
{ /* Ieee/port.scm 561 */
obj_t BgL_tmp1052z00_1356;
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_8, ((long)1)))
{ /* Ieee/port.scm 561 */
BgL_tmp1052z00_1356 = 
PROCEDURE_ENTRY(BgL_procz00_8)(BgL_procz00_8, BgL_portz00_1352, BEOA); }  else 
{ /* Ieee/port.scm 561 */
FAILURE(BGl_string2735z00zz__r4_ports_6_10_1z00,BGl_list2719z00zz__r4_ports_6_10_1z00,BgL_procz00_8);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1050z00_1354); 
bgl_close_output_port(BgL_portz00_1352); 
return BgL_tmp1052z00_1356;} } }  else 
{ /* Ieee/port.scm 559 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_string2736z00zz__r4_ports_6_10_1z00, BGl_string2727z00zz__r4_ports_6_10_1z00, BgL_stringz00_7);} } } 

}



/* &call-with-output-file */
obj_t BGl_z62callzd2withzd2outputzd2filezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3124, obj_t BgL_stringz00_3125, obj_t BgL_procz00_3126)
{
{ /* Ieee/port.scm 557 */
{ /* Ieee/port.scm 558 */
obj_t BgL_auxz00_4386;obj_t BgL_auxz00_4379;
if(
PROCEDUREP(BgL_procz00_3126))
{ /* Ieee/port.scm 558 */
BgL_auxz00_4386 = BgL_procz00_3126
; }  else 
{ 
obj_t BgL_auxz00_4389;
BgL_auxz00_4389 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)25019)), BGl_string2737z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_procz00_3126); 
FAILURE(BgL_auxz00_4389,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_3125))
{ /* Ieee/port.scm 558 */
BgL_auxz00_4379 = BgL_stringz00_3125
; }  else 
{ 
obj_t BgL_auxz00_4382;
BgL_auxz00_4382 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)25019)), BGl_string2737z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3125); 
FAILURE(BgL_auxz00_4382,BFALSE,BFALSE);} 
return 
BGl_callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_4379, BgL_auxz00_4386);} } 

}



/* &<@anonymous:1389> */
obj_t BGl_z62zc3z04anonymousza31389ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3127)
{
{ /* Ieee/port.scm 560 */
{ /* Ieee/port.scm 562 */
obj_t BgL_portz00_3128;
BgL_portz00_3128 = 
PROCEDURE_REF(BgL_envz00_3127, 
(int)(((long)0))); 
{ /* Ieee/port.scm 562 */
obj_t BgL_portz00_4083;
if(
OUTPUT_PORTP(BgL_portz00_3128))
{ /* Ieee/port.scm 562 */
BgL_portz00_4083 = BgL_portz00_3128; }  else 
{ 
obj_t BgL_auxz00_4398;
BgL_auxz00_4398 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)25151)), BGl_string2738z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3128); 
FAILURE(BgL_auxz00_4398,BFALSE,BFALSE);} 
return 
bgl_close_output_port(BgL_portz00_4083);} } } 

}



/* call-with-append-file */
BGL_EXPORTED_DEF obj_t BGl_callzd2withzd2appendzd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_9, obj_t BgL_procz00_10)
{
{ /* Ieee/port.scm 569 */
{ /* Ieee/port.scm 570 */
obj_t BgL_portz00_1361;
{ /* Ieee/port.scm 452 */

BgL_portz00_1361 = 
bgl_append_output_file(BgL_stringz00_9, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2740z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(default_io_bufsiz))); } 
if(
OUTPUT_PORTP(BgL_portz00_1361))
{ /* Ieee/port.scm 572 */
obj_t BgL_exitd1053z00_1363;
BgL_exitd1053z00_1363 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Ieee/port.scm 574 */
obj_t BgL_zc3z04anonymousza31391ze3z87_3129;
BgL_zc3z04anonymousza31391ze3z87_3129 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31391ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31391ze3z87_3129, 
(int)(((long)0)), BgL_portz00_1361); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1053z00_1363, BgL_zc3z04anonymousza31391ze3z87_3129); 
{ /* Ieee/port.scm 573 */
obj_t BgL_tmp1055z00_1365;
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_10, ((long)1)))
{ /* Ieee/port.scm 573 */
BgL_tmp1055z00_1365 = 
PROCEDURE_ENTRY(BgL_procz00_10)(BgL_procz00_10, BgL_portz00_1361, BEOA); }  else 
{ /* Ieee/port.scm 573 */
FAILURE(BGl_string2741z00zz__r4_ports_6_10_1z00,BGl_list2719z00zz__r4_ports_6_10_1z00,BgL_procz00_10);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1053z00_1363); 
bgl_close_output_port(BgL_portz00_1361); 
return BgL_tmp1055z00_1365;} } }  else 
{ /* Ieee/port.scm 571 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_string2742z00zz__r4_ports_6_10_1z00, BGl_string2727z00zz__r4_ports_6_10_1z00, BgL_stringz00_9);} } } 

}



/* &call-with-append-file */
obj_t BGl_z62callzd2withzd2appendzd2filezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3130, obj_t BgL_stringz00_3131, obj_t BgL_procz00_3132)
{
{ /* Ieee/port.scm 569 */
{ /* Ieee/port.scm 570 */
obj_t BgL_auxz00_4432;obj_t BgL_auxz00_4425;
if(
PROCEDUREP(BgL_procz00_3132))
{ /* Ieee/port.scm 570 */
BgL_auxz00_4432 = BgL_procz00_3132
; }  else 
{ 
obj_t BgL_auxz00_4435;
BgL_auxz00_4435 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)25525)), BGl_string2743z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_procz00_3132); 
FAILURE(BgL_auxz00_4435,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_3131))
{ /* Ieee/port.scm 570 */
BgL_auxz00_4425 = BgL_stringz00_3131
; }  else 
{ 
obj_t BgL_auxz00_4428;
BgL_auxz00_4428 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)25525)), BGl_string2743z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3131); 
FAILURE(BgL_auxz00_4428,BFALSE,BFALSE);} 
return 
BGl_callzd2withzd2appendzd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_4425, BgL_auxz00_4432);} } 

}



/* &<@anonymous:1391> */
obj_t BGl_z62zc3z04anonymousza31391ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3133)
{
{ /* Ieee/port.scm 572 */
{ /* Ieee/port.scm 574 */
obj_t BgL_portz00_3134;
BgL_portz00_3134 = 
PROCEDURE_REF(BgL_envz00_3133, 
(int)(((long)0))); 
{ /* Ieee/port.scm 574 */
obj_t BgL_portz00_4084;
if(
OUTPUT_PORTP(BgL_portz00_3134))
{ /* Ieee/port.scm 574 */
BgL_portz00_4084 = BgL_portz00_3134; }  else 
{ 
obj_t BgL_auxz00_4444;
BgL_auxz00_4444 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)25659)), BGl_string2744z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3134); 
FAILURE(BgL_auxz00_4444,BFALSE,BFALSE);} 
return 
bgl_close_output_port(BgL_portz00_4084);} } } 

}



/* call-with-output-string */
BGL_EXPORTED_DEF obj_t BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_procz00_11)
{
{ /* Ieee/port.scm 581 */
{ /* Ieee/port.scm 582 */
obj_t BgL_portz00_2412;
{ /* Ieee/port.scm 582 */

{ /* Ieee/port.scm 453 */

BgL_portz00_2412 = 
bgl_open_output_string(
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2734z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(((long)128)))); } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_11, ((long)1)))
{ /* Ieee/port.scm 583 */
PROCEDURE_ENTRY(BgL_procz00_11)(BgL_procz00_11, BgL_portz00_2412, BEOA); }  else 
{ /* Ieee/port.scm 583 */
FAILURE(BGl_string2745z00zz__r4_ports_6_10_1z00,BGl_list2719z00zz__r4_ports_6_10_1z00,BgL_procz00_11);} 
{ /* Ieee/port.scm 1197 */
obj_t BgL_aux2211z00_3571;
BgL_aux2211z00_3571 = 
bgl_close_output_port(BgL_portz00_2412); 
if(
STRINGP(BgL_aux2211z00_3571))
{ /* Ieee/port.scm 1197 */
return BgL_aux2211z00_3571;}  else 
{ 
obj_t BgL_auxz00_4462;
BgL_auxz00_4462 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)53014)), BGl_string2746z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_aux2211z00_3571); 
FAILURE(BgL_auxz00_4462,BFALSE,BFALSE);} } } } 

}



/* &call-with-output-string */
obj_t BGl_z62callzd2withzd2outputzd2stringzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3135, obj_t BgL_procz00_3136)
{
{ /* Ieee/port.scm 581 */
{ /* Ieee/port.scm 582 */
obj_t BgL_auxz00_4466;
if(
PROCEDUREP(BgL_procz00_3136))
{ /* Ieee/port.scm 582 */
BgL_auxz00_4466 = BgL_procz00_3136
; }  else 
{ 
obj_t BgL_auxz00_4469;
BgL_auxz00_4469 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)26028)), BGl_string2747z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_procz00_3136); 
FAILURE(BgL_auxz00_4469,BFALSE,BFALSE);} 
return 
BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(BgL_auxz00_4466);} } 

}



/* input-port? */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t BgL_objz00_12)
{
{ /* Ieee/port.scm 589 */
return 
BBOOL(
INPUT_PORTP(BgL_objz00_12));} 

}



/* &input-port? */
obj_t BGl_z62inputzd2portzf3z43zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3137, obj_t BgL_objz00_3138)
{
{ /* Ieee/port.scm 589 */
return 
BGl_inputzd2portzf3z21zz__r4_ports_6_10_1z00(BgL_objz00_3138);} 

}



/* input-string-port? */
BGL_EXPORTED_DEF obj_t BGl_inputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_objz00_13)
{
{ /* Ieee/port.scm 595 */
return 
BBOOL(
INPUT_STRING_PORTP(BgL_objz00_13));} 

}



/* &input-string-port? */
obj_t BGl_z62inputzd2stringzd2portzf3z91zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3139, obj_t BgL_objz00_3140)
{
{ /* Ieee/port.scm 595 */
return 
BGl_inputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(BgL_objz00_3140);} 

}



/* input-procedure-port? */
BGL_EXPORTED_DEF obj_t BGl_inputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_objz00_14)
{
{ /* Ieee/port.scm 601 */
return 
BBOOL(
INPUT_PROCEDURE_PORTP(BgL_objz00_14));} 

}



/* &input-procedure-port? */
obj_t BGl_z62inputzd2procedurezd2portzf3z91zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3141, obj_t BgL_objz00_3142)
{
{ /* Ieee/port.scm 601 */
return 
BGl_inputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(BgL_objz00_3142);} 

}



/* input-gzip-port? */
BGL_EXPORTED_DEF obj_t BGl_inputzd2gza7ipzd2portzf3z54zz__r4_ports_6_10_1z00(obj_t BgL_objz00_15)
{
{ /* Ieee/port.scm 607 */
return 
BBOOL(
INPUT_GZIP_PORTP(BgL_objz00_15));} 

}



/* &input-gzip-port? */
obj_t BGl_z62inputzd2gza7ipzd2portzf3z36zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3143, obj_t BgL_objz00_3144)
{
{ /* Ieee/port.scm 607 */
return 
BGl_inputzd2gza7ipzd2portzf3z54zz__r4_ports_6_10_1z00(BgL_objz00_3144);} 

}



/* output-port? */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzf3z21zz__r4_ports_6_10_1z00(obj_t BgL_objz00_16)
{
{ /* Ieee/port.scm 613 */
return 
BBOOL(
OUTPUT_PORTP(BgL_objz00_16));} 

}



/* &output-port? */
obj_t BGl_z62outputzd2portzf3z43zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3145, obj_t BgL_objz00_3146)
{
{ /* Ieee/port.scm 613 */
return 
BGl_outputzd2portzf3z21zz__r4_ports_6_10_1z00(BgL_objz00_3146);} 

}



/* output-string-port? */
BGL_EXPORTED_DEF obj_t BGl_outputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_objz00_17)
{
{ /* Ieee/port.scm 619 */
return 
BBOOL(
BGL_OUTPUT_STRING_PORTP(BgL_objz00_17));} 

}



/* &output-string-port? */
obj_t BGl_z62outputzd2stringzd2portzf3z91zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3147, obj_t BgL_objz00_3148)
{
{ /* Ieee/port.scm 619 */
return 
BGl_outputzd2stringzd2portzf3zf3zz__r4_ports_6_10_1z00(BgL_objz00_3148);} 

}



/* output-procedure-port? */
BGL_EXPORTED_DEF obj_t BGl_outputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_objz00_18)
{
{ /* Ieee/port.scm 625 */
return 
BBOOL(
BGL_OUTPUT_PROCEDURE_PORTP(BgL_objz00_18));} 

}



/* &output-procedure-port? */
obj_t BGl_z62outputzd2procedurezd2portzf3z91zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3149, obj_t BgL_objz00_3150)
{
{ /* Ieee/port.scm 625 */
return 
BGl_outputzd2procedurezd2portzf3zf3zz__r4_ports_6_10_1z00(BgL_objz00_3150);} 

}



/* current-input-port */
BGL_EXPORTED_DEF obj_t BGl_currentzd2inputzd2portz00zz__r4_ports_6_10_1z00()
{
{ /* Ieee/port.scm 631 */
{ /* Ieee/port.scm 632 */
obj_t BgL_tmpz00_4495;
BgL_tmpz00_4495 = 
BGL_CURRENT_DYNAMIC_ENV(); 
return 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_4495);} } 

}



/* &current-input-port */
obj_t BGl_z62currentzd2inputzd2portz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3151)
{
{ /* Ieee/port.scm 631 */
return 
BGl_currentzd2inputzd2portz00zz__r4_ports_6_10_1z00();} 

}



/* current-output-port */
BGL_EXPORTED_DEF obj_t BGl_currentzd2outputzd2portz00zz__r4_ports_6_10_1z00()
{
{ /* Ieee/port.scm 637 */
{ /* Ieee/port.scm 638 */
obj_t BgL_tmpz00_4499;
BgL_tmpz00_4499 = 
BGL_CURRENT_DYNAMIC_ENV(); 
return 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4499);} } 

}



/* &current-output-port */
obj_t BGl_z62currentzd2outputzd2portz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3152)
{
{ /* Ieee/port.scm 637 */
return 
BGl_currentzd2outputzd2portz00zz__r4_ports_6_10_1z00();} 

}



/* current-error-port */
BGL_EXPORTED_DEF obj_t BGl_currentzd2errorzd2portz00zz__r4_ports_6_10_1z00()
{
{ /* Ieee/port.scm 643 */
{ /* Ieee/port.scm 644 */
obj_t BgL_tmpz00_4503;
BgL_tmpz00_4503 = 
BGL_CURRENT_DYNAMIC_ENV(); 
return 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_4503);} } 

}



/* &current-error-port */
obj_t BGl_z62currentzd2errorzd2portz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3153)
{
{ /* Ieee/port.scm 643 */
return 
BGl_currentzd2errorzd2portz00zz__r4_ports_6_10_1z00();} 

}



/* input-port-reopen! */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2reopenz12z12zz__r4_ports_6_10_1z00(obj_t BgL_portz00_19)
{
{ /* Ieee/port.scm 649 */
if(
CBOOL(
bgl_input_port_reopen(BgL_portz00_19)))
{ /* Ieee/port.scm 650 */
return BFALSE;}  else 
{ /* Ieee/port.scm 650 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_string2748z00zz__r4_ports_6_10_1z00, BGl_string2749z00zz__r4_ports_6_10_1z00, BgL_portz00_19);} } 

}



/* &input-port-reopen! */
obj_t BGl_z62inputzd2portzd2reopenz12z70zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3154, obj_t BgL_portz00_3155)
{
{ /* Ieee/port.scm 649 */
{ /* Ieee/port.scm 650 */
obj_t BgL_auxz00_4511;
if(
INPUT_PORTP(BgL_portz00_3155))
{ /* Ieee/port.scm 650 */
BgL_auxz00_4511 = BgL_portz00_3155
; }  else 
{ 
obj_t BgL_auxz00_4514;
BgL_auxz00_4514 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)29366)), BGl_string2750z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3155); 
FAILURE(BgL_auxz00_4514,BFALSE,BFALSE);} 
return 
BGl_inputzd2portzd2reopenz12z12zz__r4_ports_6_10_1z00(BgL_auxz00_4511);} } 

}



/* input-port-clone! */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2clonez12z12zz__r4_ports_6_10_1z00(obj_t BgL_dstz00_20, obj_t BgL_srcz00_21)
{
{ /* Ieee/port.scm 657 */
return 
bgl_input_port_clone(BgL_dstz00_20, BgL_srcz00_21);} 

}



/* &input-port-clone! */
obj_t BGl_z62inputzd2portzd2clonez12z70zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3156, obj_t BgL_dstz00_3157, obj_t BgL_srcz00_3158)
{
{ /* Ieee/port.scm 657 */
{ /* Ieee/port.scm 658 */
obj_t BgL_auxz00_4527;obj_t BgL_auxz00_4520;
if(
INPUT_PORTP(BgL_srcz00_3158))
{ /* Ieee/port.scm 658 */
BgL_auxz00_4527 = BgL_srcz00_3158
; }  else 
{ 
obj_t BgL_auxz00_4530;
BgL_auxz00_4530 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)29786)), BGl_string2751z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_srcz00_3158); 
FAILURE(BgL_auxz00_4530,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_dstz00_3157))
{ /* Ieee/port.scm 658 */
BgL_auxz00_4520 = BgL_dstz00_3157
; }  else 
{ 
obj_t BgL_auxz00_4523;
BgL_auxz00_4523 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)29786)), BGl_string2751z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_dstz00_3157); 
FAILURE(BgL_auxz00_4523,BFALSE,BFALSE);} 
return 
BGl_inputzd2portzd2clonez12z12zz__r4_ports_6_10_1z00(BgL_auxz00_4520, BgL_auxz00_4527);} } 

}



/* with-input-from-file */
BGL_EXPORTED_DEF obj_t BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_22, obj_t BgL_thunkz00_23)
{
{ /* Ieee/port.scm 663 */
{ /* Ieee/port.scm 664 */
obj_t BgL_portz00_1376;
{ /* Ieee/port.scm 440 */

BgL_portz00_1376 = 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_stringz00_22, BTRUE, 
BINT(((long)5000000))); } 
if(
INPUT_PORTP(BgL_portz00_1376))
{ /* Ieee/port.scm 666 */
obj_t BgL_denvz00_1378;
BgL_denvz00_1378 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 666 */
obj_t BgL_oldzd2inputzd2portz00_1379;
BgL_oldzd2inputzd2portz00_1379 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_denvz00_1378); 
{ /* Ieee/port.scm 667 */

{ /* Ieee/port.scm 668 */
obj_t BgL_exitd1056z00_1380;
BgL_exitd1056z00_1380 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Ieee/port.scm 673 */
obj_t BgL_zc3z04anonymousza31397ze3z87_3159;
BgL_zc3z04anonymousza31397ze3z87_3159 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31397ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31397ze3z87_3159, 
(int)(((long)0)), BgL_denvz00_1378); 
PROCEDURE_SET(BgL_zc3z04anonymousza31397ze3z87_3159, 
(int)(((long)1)), BgL_oldzd2inputzd2portz00_1379); 
PROCEDURE_SET(BgL_zc3z04anonymousza31397ze3z87_3159, 
(int)(((long)2)), BgL_portz00_1376); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1056z00_1380, BgL_zc3z04anonymousza31397ze3z87_3159); 
{ /* Ieee/port.scm 670 */
obj_t BgL_tmp1058z00_1382;
BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1378, BgL_portz00_1376); BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_23, ((long)0)))
{ /* Ieee/port.scm 671 */
BgL_tmp1058z00_1382 = 
PROCEDURE_ENTRY(BgL_thunkz00_23)(BgL_thunkz00_23, BEOA); }  else 
{ /* Ieee/port.scm 671 */
FAILURE(BGl_string2752z00zz__r4_ports_6_10_1z00,BGl_list2753z00zz__r4_ports_6_10_1z00,BgL_thunkz00_23);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1056z00_1380); 
BGl_z62zc3z04anonymousza31397ze3ze5zz__r4_ports_6_10_1z00(BgL_zc3z04anonymousza31397ze3z87_3159); 
return BgL_tmp1058z00_1382;} } } } } }  else 
{ /* Ieee/port.scm 665 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_string2756z00zz__r4_ports_6_10_1z00, BGl_string2727z00zz__r4_ports_6_10_1z00, BgL_stringz00_22);} } } 

}



/* &with-input-from-file */
obj_t BGl_z62withzd2inputzd2fromzd2filezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3160, obj_t BgL_stringz00_3161, obj_t BgL_thunkz00_3162)
{
{ /* Ieee/port.scm 663 */
{ /* Ieee/port.scm 664 */
obj_t BgL_auxz00_4569;obj_t BgL_auxz00_4562;
if(
PROCEDUREP(BgL_thunkz00_3162))
{ /* Ieee/port.scm 664 */
BgL_auxz00_4569 = BgL_thunkz00_3162
; }  else 
{ 
obj_t BgL_auxz00_4572;
BgL_auxz00_4572 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)30086)), BGl_string2757z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3162); 
FAILURE(BgL_auxz00_4572,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_3161))
{ /* Ieee/port.scm 664 */
BgL_auxz00_4562 = BgL_stringz00_3161
; }  else 
{ 
obj_t BgL_auxz00_4565;
BgL_auxz00_4565 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)30086)), BGl_string2757z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3161); 
FAILURE(BgL_auxz00_4565,BFALSE,BFALSE);} 
return 
BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_4562, BgL_auxz00_4569);} } 

}



/* &<@anonymous:1397> */
obj_t BGl_z62zc3z04anonymousza31397ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3163)
{
{ /* Ieee/port.scm 668 */
{ /* Ieee/port.scm 673 */
obj_t BgL_denvz00_3164;obj_t BgL_oldzd2inputzd2portz00_3165;obj_t BgL_portz00_3166;
BgL_denvz00_3164 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3163, 
(int)(((long)0)))); 
BgL_oldzd2inputzd2portz00_3165 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3163, 
(int)(((long)1)))); 
BgL_portz00_3166 = 
PROCEDURE_REF(BgL_envz00_3163, 
(int)(((long)2))); 
BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_3164, BgL_oldzd2inputzd2portz00_3165); BUNSPEC; 
{ /* Ieee/port.scm 674 */
obj_t BgL_portz00_4085;
if(
INPUT_PORTP(BgL_portz00_3166))
{ /* Ieee/port.scm 674 */
BgL_portz00_4085 = BgL_portz00_3166; }  else 
{ 
obj_t BgL_auxz00_4588;
BgL_auxz00_4588 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)30416)), BGl_string2758z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3166); 
FAILURE(BgL_auxz00_4588,BFALSE,BFALSE);} 
return 
bgl_close_input_port(BgL_portz00_4085);} } } 

}



/* with-input-from-string */
BGL_EXPORTED_DEF obj_t BGl_withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_24, obj_t BgL_thunkz00_25)
{
{ /* Ieee/port.scm 681 */
{ /* Ieee/port.scm 682 */
obj_t BgL_portz00_1388;
{ /* Ieee/port.scm 442 */
long BgL_endz00_1398;
BgL_endz00_1398 = 
STRING_LENGTH(BgL_stringz00_24); 
{ /* Ieee/port.scm 442 */

BgL_portz00_1388 = 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_stringz00_24, 
BINT(((long)0)), 
BINT(BgL_endz00_1398)); } } 
{ /* Ieee/port.scm 682 */
obj_t BgL_denvz00_1389;
BgL_denvz00_1389 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 683 */
obj_t BgL_oldzd2inputzd2portz00_1390;
BgL_oldzd2inputzd2portz00_1390 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_denvz00_1389); 
{ /* Ieee/port.scm 684 */

{ /* Ieee/port.scm 685 */
obj_t BgL_exitd1059z00_1391;
BgL_exitd1059z00_1391 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Ieee/port.scm 690 */
obj_t BgL_zc3z04anonymousza31398ze3z87_3167;
BgL_zc3z04anonymousza31398ze3z87_3167 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31398ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31398ze3z87_3167, 
(int)(((long)0)), BgL_denvz00_1389); 
PROCEDURE_SET(BgL_zc3z04anonymousza31398ze3z87_3167, 
(int)(((long)1)), BgL_oldzd2inputzd2portz00_1390); 
PROCEDURE_SET(BgL_zc3z04anonymousza31398ze3z87_3167, 
(int)(((long)2)), BgL_portz00_1388); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1059z00_1391, BgL_zc3z04anonymousza31398ze3z87_3167); 
{ /* Ieee/port.scm 687 */
obj_t BgL_tmp1061z00_1393;
BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1389, BgL_portz00_1388); BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_25, ((long)0)))
{ /* Ieee/port.scm 688 */
BgL_tmp1061z00_1393 = 
PROCEDURE_ENTRY(BgL_thunkz00_25)(BgL_thunkz00_25, BEOA); }  else 
{ /* Ieee/port.scm 688 */
FAILURE(BGl_string2759z00zz__r4_ports_6_10_1z00,BGl_list2753z00zz__r4_ports_6_10_1z00,BgL_thunkz00_25);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1059z00_1391); 
BGl_z62zc3z04anonymousza31398ze3ze5zz__r4_ports_6_10_1z00(BgL_zc3z04anonymousza31398ze3z87_3167); 
return BgL_tmp1061z00_1393;} } } } } } } } 

}



/* &with-input-from-string */
obj_t BGl_z62withzd2inputzd2fromzd2stringzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3168, obj_t BgL_stringz00_3169, obj_t BgL_thunkz00_3170)
{
{ /* Ieee/port.scm 681 */
{ /* Ieee/port.scm 682 */
obj_t BgL_auxz00_4626;obj_t BgL_auxz00_4619;
if(
PROCEDUREP(BgL_thunkz00_3170))
{ /* Ieee/port.scm 682 */
BgL_auxz00_4626 = BgL_thunkz00_3170
; }  else 
{ 
obj_t BgL_auxz00_4629;
BgL_auxz00_4629 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)30792)), BGl_string2760z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3170); 
FAILURE(BgL_auxz00_4629,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_3169))
{ /* Ieee/port.scm 682 */
BgL_auxz00_4619 = BgL_stringz00_3169
; }  else 
{ 
obj_t BgL_auxz00_4622;
BgL_auxz00_4622 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)30792)), BGl_string2760z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3169); 
FAILURE(BgL_auxz00_4622,BFALSE,BFALSE);} 
return 
BGl_withzd2inputzd2fromzd2stringzd2zz__r4_ports_6_10_1z00(BgL_auxz00_4619, BgL_auxz00_4626);} } 

}



/* &<@anonymous:1398> */
obj_t BGl_z62zc3z04anonymousza31398ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3171)
{
{ /* Ieee/port.scm 685 */
{ /* Ieee/port.scm 690 */
obj_t BgL_denvz00_3172;obj_t BgL_oldzd2inputzd2portz00_3173;obj_t BgL_portz00_3174;
BgL_denvz00_3172 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3171, 
(int)(((long)0)))); 
BgL_oldzd2inputzd2portz00_3173 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3171, 
(int)(((long)1)))); 
BgL_portz00_3174 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3171, 
(int)(((long)2)))); 
BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_3172, BgL_oldzd2inputzd2portz00_3173); BUNSPEC; 
return 
bgl_close_input_port(BgL_portz00_3174);} } 

}



/* with-input-from-port */
BGL_EXPORTED_DEF obj_t BGl_withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_26, obj_t BgL_thunkz00_27)
{
{ /* Ieee/port.scm 696 */
{ /* Ieee/port.scm 697 */
obj_t BgL_denvz00_1399;
BgL_denvz00_1399 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 697 */
obj_t BgL_oldzd2inputzd2portz00_1400;
BgL_oldzd2inputzd2portz00_1400 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_denvz00_1399); 
{ /* Ieee/port.scm 698 */

{ /* Ieee/port.scm 699 */
obj_t BgL_exitd1062z00_1401;
BgL_exitd1062z00_1401 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ 
obj_t BgL_zc3z04anonymousza31399ze3z87_3175;
BgL_zc3z04anonymousza31399ze3z87_3175 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31399ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31399ze3z87_3175, 
(int)(((long)0)), BgL_denvz00_1399); 
PROCEDURE_SET(BgL_zc3z04anonymousza31399ze3z87_3175, 
(int)(((long)1)), BgL_oldzd2inputzd2portz00_1400); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1062z00_1401, BgL_zc3z04anonymousza31399ze3z87_3175); 
{ /* Ieee/port.scm 701 */
obj_t BgL_tmp1064z00_1403;
BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1399, BgL_portz00_26); BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_27, ((long)0)))
{ /* Ieee/port.scm 702 */
BgL_tmp1064z00_1403 = 
PROCEDURE_ENTRY(BgL_thunkz00_27)(BgL_thunkz00_27, BEOA); }  else 
{ /* Ieee/port.scm 702 */
FAILURE(BGl_string2761z00zz__r4_ports_6_10_1z00,BGl_list2753z00zz__r4_ports_6_10_1z00,BgL_thunkz00_27);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1062z00_1401); 
BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1399, BgL_oldzd2inputzd2portz00_1400); BUNSPEC; 
return BgL_tmp1064z00_1403;} } } } } } } 

}



/* &with-input-from-port */
obj_t BGl_z62withzd2inputzd2fromzd2portzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3176, obj_t BgL_portz00_3177, obj_t BgL_thunkz00_3178)
{
{ /* Ieee/port.scm 696 */
{ /* Ieee/port.scm 697 */
obj_t BgL_auxz00_4672;obj_t BgL_auxz00_4665;
if(
PROCEDUREP(BgL_thunkz00_3178))
{ /* Ieee/port.scm 697 */
BgL_auxz00_4672 = BgL_thunkz00_3178
; }  else 
{ 
obj_t BgL_auxz00_4675;
BgL_auxz00_4675 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)31366)), BGl_string2762z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3178); 
FAILURE(BgL_auxz00_4675,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_portz00_3177))
{ /* Ieee/port.scm 697 */
BgL_auxz00_4665 = BgL_portz00_3177
; }  else 
{ 
obj_t BgL_auxz00_4668;
BgL_auxz00_4668 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)31366)), BGl_string2762z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3177); 
FAILURE(BgL_auxz00_4668,BFALSE,BFALSE);} 
return 
BGl_withzd2inputzd2fromzd2portzd2zz__r4_ports_6_10_1z00(BgL_auxz00_4665, BgL_auxz00_4672);} } 

}



/* &<@anonymous:1399> */
obj_t BGl_z62zc3z04anonymousza31399ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3179)
{
{ /* Ieee/port.scm 699 */
{ 
obj_t BgL_denvz00_3180;obj_t BgL_oldzd2inputzd2portz00_3181;
BgL_denvz00_3180 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3179, 
(int)(((long)0)))); 
BgL_oldzd2inputzd2portz00_3181 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3179, 
(int)(((long)1)))); 
BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_3180, BgL_oldzd2inputzd2portz00_3181); 
return BUNSPEC;} } 

}



/* with-input-from-procedure */
BGL_EXPORTED_DEF obj_t BGl_withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00(obj_t BgL_procz00_28, obj_t BgL_thunkz00_29)
{
{ /* Ieee/port.scm 708 */
{ /* Ieee/port.scm 709 */
obj_t BgL_portz00_1406;
{ /* Ieee/port.scm 445 */

BgL_portz00_1406 = 
bgl_open_input_procedure(BgL_procz00_28, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2763z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(((long)1024)))); } 
{ /* Ieee/port.scm 711 */
obj_t BgL_denvz00_1408;
BgL_denvz00_1408 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 711 */
obj_t BgL_oldzd2inputzd2portz00_1409;
BgL_oldzd2inputzd2portz00_1409 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_denvz00_1408); 
{ /* Ieee/port.scm 712 */

{ /* Ieee/port.scm 713 */
obj_t BgL_exitd1065z00_1410;
BgL_exitd1065z00_1410 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Ieee/port.scm 718 */
obj_t BgL_zc3z04anonymousza31401ze3z87_3182;
BgL_zc3z04anonymousza31401ze3z87_3182 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31401ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31401ze3z87_3182, 
(int)(((long)0)), BgL_denvz00_1408); 
PROCEDURE_SET(BgL_zc3z04anonymousza31401ze3z87_3182, 
(int)(((long)1)), BgL_oldzd2inputzd2portz00_1409); 
PROCEDURE_SET(BgL_zc3z04anonymousza31401ze3z87_3182, 
(int)(((long)2)), BgL_portz00_1406); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1065z00_1410, BgL_zc3z04anonymousza31401ze3z87_3182); 
{ /* Ieee/port.scm 715 */
obj_t BgL_tmp1067z00_1412;
BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_1408, BgL_portz00_1406); BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_29, ((long)0)))
{ /* Ieee/port.scm 716 */
BgL_tmp1067z00_1412 = 
PROCEDURE_ENTRY(BgL_thunkz00_29)(BgL_thunkz00_29, BEOA); }  else 
{ /* Ieee/port.scm 716 */
FAILURE(BGl_string2764z00zz__r4_ports_6_10_1z00,BGl_list2753z00zz__r4_ports_6_10_1z00,BgL_thunkz00_29);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1065z00_1410); 
BGl_z62zc3z04anonymousza31401ze3ze5zz__r4_ports_6_10_1z00(BgL_zc3z04anonymousza31401ze3z87_3182); 
return BgL_tmp1067z00_1412;} } } } } } } } 

}



/* &with-input-from-procedure */
obj_t BGl_z62withzd2inputzd2fromzd2procedurezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3183, obj_t BgL_procz00_3184, obj_t BgL_thunkz00_3185)
{
{ /* Ieee/port.scm 708 */
{ /* Ieee/port.scm 709 */
obj_t BgL_auxz00_4719;obj_t BgL_auxz00_4712;
if(
PROCEDUREP(BgL_thunkz00_3185))
{ /* Ieee/port.scm 709 */
BgL_auxz00_4719 = BgL_thunkz00_3185
; }  else 
{ 
obj_t BgL_auxz00_4722;
BgL_auxz00_4722 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)31866)), BGl_string2765z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3185); 
FAILURE(BgL_auxz00_4722,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_procz00_3184))
{ /* Ieee/port.scm 709 */
BgL_auxz00_4712 = BgL_procz00_3184
; }  else 
{ 
obj_t BgL_auxz00_4715;
BgL_auxz00_4715 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)31866)), BGl_string2765z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_procz00_3184); 
FAILURE(BgL_auxz00_4715,BFALSE,BFALSE);} 
return 
BGl_withzd2inputzd2fromzd2procedurezd2zz__r4_ports_6_10_1z00(BgL_auxz00_4712, BgL_auxz00_4719);} } 

}



/* &<@anonymous:1401> */
obj_t BGl_z62zc3z04anonymousza31401ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3186)
{
{ /* Ieee/port.scm 713 */
{ /* Ieee/port.scm 718 */
obj_t BgL_denvz00_3187;obj_t BgL_oldzd2inputzd2portz00_3188;obj_t BgL_portz00_3189;
BgL_denvz00_3187 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3186, 
(int)(((long)0)))); 
BgL_oldzd2inputzd2portz00_3188 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3186, 
(int)(((long)1)))); 
BgL_portz00_3189 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3186, 
(int)(((long)2)))); 
BGL_ENV_CURRENT_INPUT_PORT_SET(BgL_denvz00_3187, BgL_oldzd2inputzd2portz00_3188); BUNSPEC; 
return 
bgl_close_input_port(BgL_portz00_3189);} } 

}



/* with-output-to-file */
BGL_EXPORTED_DEF obj_t BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_30, obj_t BgL_thunkz00_31)
{
{ /* Ieee/port.scm 725 */
{ /* Ieee/port.scm 726 */
obj_t BgL_portz00_1417;
{ /* Ieee/port.scm 451 */

BgL_portz00_1417 = 
bgl_open_output_file(BgL_stringz00_30, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2734z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(default_io_bufsiz))); } 
if(
OUTPUT_PORTP(BgL_portz00_1417))
{ /* Ieee/port.scm 728 */
obj_t BgL_denvz00_1419;
BgL_denvz00_1419 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 728 */
obj_t BgL_oldzd2outputzd2portz00_1420;
BgL_oldzd2outputzd2portz00_1420 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1419); 
{ /* Ieee/port.scm 729 */

{ /* Ieee/port.scm 730 */
obj_t BgL_exitd1068z00_1421;
BgL_exitd1068z00_1421 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Ieee/port.scm 735 */
obj_t BgL_zc3z04anonymousza31403ze3z87_3190;
BgL_zc3z04anonymousza31403ze3z87_3190 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31403ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31403ze3z87_3190, 
(int)(((long)0)), BgL_denvz00_1419); 
PROCEDURE_SET(BgL_zc3z04anonymousza31403ze3z87_3190, 
(int)(((long)1)), BgL_oldzd2outputzd2portz00_1420); 
PROCEDURE_SET(BgL_zc3z04anonymousza31403ze3z87_3190, 
(int)(((long)2)), BgL_portz00_1417); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1068z00_1421, BgL_zc3z04anonymousza31403ze3z87_3190); 
{ /* Ieee/port.scm 732 */
obj_t BgL_tmp1070z00_1423;
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1419, BgL_portz00_1417); BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_31, ((long)0)))
{ /* Ieee/port.scm 733 */
BgL_tmp1070z00_1423 = 
PROCEDURE_ENTRY(BgL_thunkz00_31)(BgL_thunkz00_31, BEOA); }  else 
{ /* Ieee/port.scm 733 */
FAILURE(BGl_string2766z00zz__r4_ports_6_10_1z00,BGl_list2753z00zz__r4_ports_6_10_1z00,BgL_thunkz00_31);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1068z00_1421); 
BGl_z62zc3z04anonymousza31403ze3ze5zz__r4_ports_6_10_1z00(BgL_zc3z04anonymousza31403ze3z87_3190); 
return BgL_tmp1070z00_1423;} } } } } }  else 
{ /* Ieee/port.scm 727 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_string2767z00zz__r4_ports_6_10_1z00, BGl_string2727z00zz__r4_ports_6_10_1z00, BgL_stringz00_30);} } } 

}



/* &with-output-to-file */
obj_t BGl_z62withzd2outputzd2tozd2filezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3191, obj_t BgL_stringz00_3192, obj_t BgL_thunkz00_3193)
{
{ /* Ieee/port.scm 725 */
{ /* Ieee/port.scm 726 */
obj_t BgL_auxz00_4773;obj_t BgL_auxz00_4766;
if(
PROCEDUREP(BgL_thunkz00_3193))
{ /* Ieee/port.scm 726 */
BgL_auxz00_4773 = BgL_thunkz00_3193
; }  else 
{ 
obj_t BgL_auxz00_4776;
BgL_auxz00_4776 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)32547)), BGl_string2768z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3193); 
FAILURE(BgL_auxz00_4776,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_3192))
{ /* Ieee/port.scm 726 */
BgL_auxz00_4766 = BgL_stringz00_3192
; }  else 
{ 
obj_t BgL_auxz00_4769;
BgL_auxz00_4769 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)32547)), BGl_string2768z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3192); 
FAILURE(BgL_auxz00_4769,BFALSE,BFALSE);} 
return 
BGl_withzd2outputzd2tozd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_4766, BgL_auxz00_4773);} } 

}



/* &<@anonymous:1403> */
obj_t BGl_z62zc3z04anonymousza31403ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3194)
{
{ /* Ieee/port.scm 730 */
{ /* Ieee/port.scm 735 */
obj_t BgL_denvz00_3195;obj_t BgL_oldzd2outputzd2portz00_3196;obj_t BgL_portz00_3197;
BgL_denvz00_3195 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3194, 
(int)(((long)0)))); 
BgL_oldzd2outputzd2portz00_3196 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3194, 
(int)(((long)1)))); 
BgL_portz00_3197 = 
PROCEDURE_REF(BgL_envz00_3194, 
(int)(((long)2))); 
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_3195, BgL_oldzd2outputzd2portz00_3196); BUNSPEC; 
{ /* Ieee/port.scm 736 */
obj_t BgL_portz00_4086;
if(
OUTPUT_PORTP(BgL_portz00_3197))
{ /* Ieee/port.scm 736 */
BgL_portz00_4086 = BgL_portz00_3197; }  else 
{ 
obj_t BgL_auxz00_4792;
BgL_auxz00_4792 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)32885)), BGl_string2769z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3197); 
FAILURE(BgL_auxz00_4792,BFALSE,BFALSE);} 
return 
bgl_close_output_port(BgL_portz00_4086);} } } 

}



/* with-append-to-file */
BGL_EXPORTED_DEF obj_t BGl_withzd2appendzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_32, obj_t BgL_thunkz00_33)
{
{ /* Ieee/port.scm 743 */
{ /* Ieee/port.scm 744 */
obj_t BgL_portz00_1428;
{ /* Ieee/port.scm 452 */

BgL_portz00_1428 = 
bgl_append_output_file(BgL_stringz00_32, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2740z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(default_io_bufsiz))); } 
if(
OUTPUT_PORTP(BgL_portz00_1428))
{ /* Ieee/port.scm 746 */
obj_t BgL_denvz00_1430;
BgL_denvz00_1430 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 746 */
obj_t BgL_oldzd2outputzd2portz00_1431;
BgL_oldzd2outputzd2portz00_1431 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1430); 
{ /* Ieee/port.scm 747 */

{ /* Ieee/port.scm 748 */
obj_t BgL_exitd1071z00_1432;
BgL_exitd1071z00_1432 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Ieee/port.scm 753 */
obj_t BgL_zc3z04anonymousza31405ze3z87_3198;
BgL_zc3z04anonymousza31405ze3z87_3198 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31405ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31405ze3z87_3198, 
(int)(((long)0)), BgL_denvz00_1430); 
PROCEDURE_SET(BgL_zc3z04anonymousza31405ze3z87_3198, 
(int)(((long)1)), BgL_oldzd2outputzd2portz00_1431); 
PROCEDURE_SET(BgL_zc3z04anonymousza31405ze3z87_3198, 
(int)(((long)2)), BgL_portz00_1428); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1071z00_1432, BgL_zc3z04anonymousza31405ze3z87_3198); 
{ /* Ieee/port.scm 750 */
obj_t BgL_tmp1073z00_1434;
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1430, BgL_portz00_1428); BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_33, ((long)0)))
{ /* Ieee/port.scm 751 */
BgL_tmp1073z00_1434 = 
PROCEDURE_ENTRY(BgL_thunkz00_33)(BgL_thunkz00_33, BEOA); }  else 
{ /* Ieee/port.scm 751 */
FAILURE(BGl_string2770z00zz__r4_ports_6_10_1z00,BGl_list2753z00zz__r4_ports_6_10_1z00,BgL_thunkz00_33);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1071z00_1432); 
BGl_z62zc3z04anonymousza31405ze3ze5zz__r4_ports_6_10_1z00(BgL_zc3z04anonymousza31405ze3z87_3198); 
return BgL_tmp1073z00_1434;} } } } } }  else 
{ /* Ieee/port.scm 745 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_string2767z00zz__r4_ports_6_10_1z00, BGl_string2727z00zz__r4_ports_6_10_1z00, BgL_stringz00_32);} } } 

}



/* &with-append-to-file */
obj_t BGl_z62withzd2appendzd2tozd2filezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3199, obj_t BgL_stringz00_3200, obj_t BgL_thunkz00_3201)
{
{ /* Ieee/port.scm 743 */
{ /* Ieee/port.scm 744 */
obj_t BgL_auxz00_4832;obj_t BgL_auxz00_4825;
if(
PROCEDUREP(BgL_thunkz00_3201))
{ /* Ieee/port.scm 744 */
BgL_auxz00_4832 = BgL_thunkz00_3201
; }  else 
{ 
obj_t BgL_auxz00_4835;
BgL_auxz00_4835 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)33257)), BGl_string2771z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3201); 
FAILURE(BgL_auxz00_4835,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_3200))
{ /* Ieee/port.scm 744 */
BgL_auxz00_4825 = BgL_stringz00_3200
; }  else 
{ 
obj_t BgL_auxz00_4828;
BgL_auxz00_4828 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)33257)), BGl_string2771z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3200); 
FAILURE(BgL_auxz00_4828,BFALSE,BFALSE);} 
return 
BGl_withzd2appendzd2tozd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_4825, BgL_auxz00_4832);} } 

}



/* &<@anonymous:1405> */
obj_t BGl_z62zc3z04anonymousza31405ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3202)
{
{ /* Ieee/port.scm 748 */
{ /* Ieee/port.scm 753 */
obj_t BgL_denvz00_3203;obj_t BgL_oldzd2outputzd2portz00_3204;obj_t BgL_portz00_3205;
BgL_denvz00_3203 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3202, 
(int)(((long)0)))); 
BgL_oldzd2outputzd2portz00_3204 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3202, 
(int)(((long)1)))); 
BgL_portz00_3205 = 
PROCEDURE_REF(BgL_envz00_3202, 
(int)(((long)2))); 
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_3203, BgL_oldzd2outputzd2portz00_3204); BUNSPEC; 
{ /* Ieee/port.scm 754 */
obj_t BgL_portz00_4087;
if(
OUTPUT_PORTP(BgL_portz00_3205))
{ /* Ieee/port.scm 754 */
BgL_portz00_4087 = BgL_portz00_3205; }  else 
{ 
obj_t BgL_auxz00_4851;
BgL_auxz00_4851 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)33597)), BGl_string2772z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3205); 
FAILURE(BgL_auxz00_4851,BFALSE,BFALSE);} 
return 
bgl_close_output_port(BgL_portz00_4087);} } } 

}



/* with-output-to-port */
BGL_EXPORTED_DEF obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_34, obj_t BgL_thunkz00_35)
{
{ /* Ieee/port.scm 761 */
{ /* Ieee/port.scm 762 */
obj_t BgL_denvz00_1439;
BgL_denvz00_1439 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 762 */
obj_t BgL_oldzd2outputzd2portz00_1440;
BgL_oldzd2outputzd2portz00_1440 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1439); 
{ /* Ieee/port.scm 763 */

{ /* Ieee/port.scm 764 */
obj_t BgL_exitd1074z00_1441;
BgL_exitd1074z00_1441 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ 
obj_t BgL_zc3z04anonymousza31406ze3z87_3206;
BgL_zc3z04anonymousza31406ze3z87_3206 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31406ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31406ze3z87_3206, 
(int)(((long)0)), BgL_denvz00_1439); 
PROCEDURE_SET(BgL_zc3z04anonymousza31406ze3z87_3206, 
(int)(((long)1)), BgL_oldzd2outputzd2portz00_1440); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1074z00_1441, BgL_zc3z04anonymousza31406ze3z87_3206); 
{ /* Ieee/port.scm 766 */
obj_t BgL_tmp1076z00_1443;
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1439, BgL_portz00_34); BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_35, ((long)0)))
{ /* Ieee/port.scm 767 */
BgL_tmp1076z00_1443 = 
PROCEDURE_ENTRY(BgL_thunkz00_35)(BgL_thunkz00_35, BEOA); }  else 
{ /* Ieee/port.scm 767 */
FAILURE(BGl_string2773z00zz__r4_ports_6_10_1z00,BGl_list2753z00zz__r4_ports_6_10_1z00,BgL_thunkz00_35);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1074z00_1441); 
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1439, BgL_oldzd2outputzd2portz00_1440); BUNSPEC; 
return BgL_tmp1076z00_1443;} } } } } } } 

}



/* &with-output-to-port */
obj_t BGl_z62withzd2outputzd2tozd2portzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3207, obj_t BgL_portz00_3208, obj_t BgL_thunkz00_3209)
{
{ /* Ieee/port.scm 761 */
{ /* Ieee/port.scm 762 */
obj_t BgL_auxz00_4883;obj_t BgL_auxz00_4876;
if(
PROCEDUREP(BgL_thunkz00_3209))
{ /* Ieee/port.scm 762 */
BgL_auxz00_4883 = BgL_thunkz00_3209
; }  else 
{ 
obj_t BgL_auxz00_4886;
BgL_auxz00_4886 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)33967)), BGl_string2774z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3209); 
FAILURE(BgL_auxz00_4886,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_portz00_3208))
{ /* Ieee/port.scm 762 */
BgL_auxz00_4876 = BgL_portz00_3208
; }  else 
{ 
obj_t BgL_auxz00_4879;
BgL_auxz00_4879 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)33967)), BGl_string2774z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3208); 
FAILURE(BgL_auxz00_4879,BFALSE,BFALSE);} 
return 
BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(BgL_auxz00_4876, BgL_auxz00_4883);} } 

}



/* &<@anonymous:1406> */
obj_t BGl_z62zc3z04anonymousza31406ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3210)
{
{ /* Ieee/port.scm 764 */
{ 
obj_t BgL_denvz00_3211;obj_t BgL_oldzd2outputzd2portz00_3212;
BgL_denvz00_3211 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3210, 
(int)(((long)0)))); 
BgL_oldzd2outputzd2portz00_3212 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3210, 
(int)(((long)1)))); 
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_3211, BgL_oldzd2outputzd2portz00_3212); 
return BUNSPEC;} } 

}



/* with-output-to-string */
BGL_EXPORTED_DEF obj_t BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_36)
{
{ /* Ieee/port.scm 773 */
{ /* Ieee/port.scm 774 */
obj_t BgL_portz00_1446;
{ /* Ieee/port.scm 774 */

{ /* Ieee/port.scm 453 */

BgL_portz00_1446 = 
bgl_open_output_string(
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2734z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(((long)128)))); } } 
{ /* Ieee/port.scm 774 */
obj_t BgL_denvz00_1447;
BgL_denvz00_1447 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 775 */
obj_t BgL_oldzd2outputzd2portz00_1448;
BgL_oldzd2outputzd2portz00_1448 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1447); 
{ /* Ieee/port.scm 776 */
obj_t BgL_resz00_3222;
BgL_resz00_3222 = 
MAKE_CELL(BUNSPEC); 
{ /* Ieee/port.scm 777 */

{ /* Ieee/port.scm 778 */
obj_t BgL_exitd1077z00_1450;
BgL_exitd1077z00_1450 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Ieee/port.scm 783 */
obj_t BgL_zc3z04anonymousza31407ze3z87_3213;
BgL_zc3z04anonymousza31407ze3z87_3213 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31407ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)4))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31407ze3z87_3213, 
(int)(((long)0)), BgL_denvz00_1447); 
PROCEDURE_SET(BgL_zc3z04anonymousza31407ze3z87_3213, 
(int)(((long)1)), BgL_oldzd2outputzd2portz00_1448); 
PROCEDURE_SET(BgL_zc3z04anonymousza31407ze3z87_3213, 
(int)(((long)2)), BgL_portz00_1446); 
PROCEDURE_SET(BgL_zc3z04anonymousza31407ze3z87_3213, 
(int)(((long)3)), 
((obj_t)BgL_resz00_3222)); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1077z00_1450, BgL_zc3z04anonymousza31407ze3z87_3213); 
{ /* Ieee/port.scm 780 */
obj_t BgL_tmp1079z00_1452;
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1447, BgL_portz00_1446); BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_36, ((long)0)))
{ /* Ieee/port.scm 781 */
BgL_tmp1079z00_1452 = 
PROCEDURE_ENTRY(BgL_thunkz00_36)(BgL_thunkz00_36, BEOA); }  else 
{ /* Ieee/port.scm 781 */
FAILURE(BGl_string2775z00zz__r4_ports_6_10_1z00,BGl_list2753z00zz__r4_ports_6_10_1z00,BgL_thunkz00_36);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1077z00_1450); 
BGl_z62zc3z04anonymousza31407ze3ze5zz__r4_ports_6_10_1z00(BgL_zc3z04anonymousza31407ze3z87_3213); BgL_tmp1079z00_1452; } } } 
{ /* Ieee/port.scm 785 */
obj_t BgL_aux2271z00_3639;
BgL_aux2271z00_3639 = 
CELL_REF(BgL_resz00_3222); 
if(
STRINGP(BgL_aux2271z00_3639))
{ /* Ieee/port.scm 785 */
return BgL_aux2271z00_3639;}  else 
{ 
obj_t BgL_auxz00_4928;
BgL_auxz00_4928 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)34806)), BGl_string2776z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_aux2271z00_3639); 
FAILURE(BgL_auxz00_4928,BFALSE,BFALSE);} } } } } } } } 

}



/* &with-output-to-string */
obj_t BGl_z62withzd2outputzd2tozd2stringzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3214, obj_t BgL_thunkz00_3215)
{
{ /* Ieee/port.scm 773 */
{ /* Ieee/port.scm 774 */
obj_t BgL_auxz00_4932;
if(
PROCEDUREP(BgL_thunkz00_3215))
{ /* Ieee/port.scm 774 */
BgL_auxz00_4932 = BgL_thunkz00_3215
; }  else 
{ 
obj_t BgL_auxz00_4935;
BgL_auxz00_4935 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)34463)), BGl_string2777z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3215); 
FAILURE(BgL_auxz00_4935,BFALSE,BFALSE);} 
return 
BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(BgL_auxz00_4932);} } 

}



/* &<@anonymous:1407> */
obj_t BGl_z62zc3z04anonymousza31407ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3216)
{
{ /* Ieee/port.scm 778 */
{ /* Ieee/port.scm 783 */
obj_t BgL_denvz00_3217;obj_t BgL_oldzd2outputzd2portz00_3218;obj_t BgL_portz00_3219;obj_t BgL_resz00_3220;
BgL_denvz00_3217 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3216, 
(int)(((long)0)))); 
BgL_oldzd2outputzd2portz00_3218 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3216, 
(int)(((long)1)))); 
BgL_portz00_3219 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3216, 
(int)(((long)2)))); 
BgL_resz00_3220 = 
PROCEDURE_REF(BgL_envz00_3216, 
(int)(((long)3))); 
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_3217, BgL_oldzd2outputzd2portz00_3218); BUNSPEC; 
{ /* Ieee/port.scm 784 */
obj_t BgL_auxz00_4088;
BgL_auxz00_4088 = 
bgl_close_output_port(BgL_portz00_3219); 
return 
CELL_SET(BgL_resz00_3220, BgL_auxz00_4088);} } } 

}



/* with-output-to-procedure */
BGL_EXPORTED_DEF obj_t BGl_withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t BgL_procz00_37, obj_t BgL_thunkz00_38)
{
{ /* Ieee/port.scm 790 */
{ /* Ieee/port.scm 791 */
obj_t BgL_portz00_1456;
{ /* Ieee/port.scm 454 */

BgL_portz00_1456 = 
BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(BgL_procz00_37, BGl_proc2778z00zz__r4_ports_6_10_1z00, BTRUE, BGl_proc2779z00zz__r4_ports_6_10_1z00); } 
{ /* Ieee/port.scm 791 */
obj_t BgL_denvz00_1457;
BgL_denvz00_1457 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 792 */
obj_t BgL_oldzd2outputzd2portz00_1458;
BgL_oldzd2outputzd2portz00_1458 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_denvz00_1457); 
{ /* Ieee/port.scm 793 */
obj_t BgL_resz00_3238;
BgL_resz00_3238 = 
MAKE_CELL(BUNSPEC); 
{ /* Ieee/port.scm 794 */

{ /* Ieee/port.scm 795 */
obj_t BgL_exitd1080z00_1460;
BgL_exitd1080z00_1460 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Ieee/port.scm 800 */
obj_t BgL_zc3z04anonymousza31408ze3z87_3224;
BgL_zc3z04anonymousza31408ze3z87_3224 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31408ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)4))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31408ze3z87_3224, 
(int)(((long)0)), BgL_denvz00_1457); 
PROCEDURE_SET(BgL_zc3z04anonymousza31408ze3z87_3224, 
(int)(((long)1)), BgL_oldzd2outputzd2portz00_1458); 
PROCEDURE_SET(BgL_zc3z04anonymousza31408ze3z87_3224, 
(int)(((long)2)), BgL_portz00_1456); 
PROCEDURE_SET(BgL_zc3z04anonymousza31408ze3z87_3224, 
(int)(((long)3)), 
((obj_t)BgL_resz00_3238)); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1080z00_1460, BgL_zc3z04anonymousza31408ze3z87_3224); 
{ /* Ieee/port.scm 797 */
obj_t BgL_tmp1082z00_1462;
{ /* Ieee/port.scm 797 */
obj_t BgL_tmpz00_4970;
if(
OUTPUT_PORTP(BgL_portz00_1456))
{ /* Ieee/port.scm 797 */
BgL_tmpz00_4970 = BgL_portz00_1456
; }  else 
{ 
obj_t BgL_auxz00_4973;
BgL_auxz00_4973 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)35302)), BGl_string2780z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_1456); 
FAILURE(BgL_auxz00_4973,BFALSE,BFALSE);} 
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_1457, BgL_tmpz00_4970); } BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_38, ((long)0)))
{ /* Ieee/port.scm 798 */
BgL_tmp1082z00_1462 = 
PROCEDURE_ENTRY(BgL_thunkz00_38)(BgL_thunkz00_38, BEOA); }  else 
{ /* Ieee/port.scm 798 */
FAILURE(BGl_string2781z00zz__r4_ports_6_10_1z00,BGl_list2753z00zz__r4_ports_6_10_1z00,BgL_thunkz00_38);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1080z00_1460); 
BGl_z62zc3z04anonymousza31408ze3ze5zz__r4_ports_6_10_1z00(BgL_zc3z04anonymousza31408ze3z87_3224); BgL_tmp1082z00_1462; } } } 
return 
CELL_REF(BgL_resz00_3238);} } } } } } 

}



/* &with-output-to-procedure */
obj_t BGl_z62withzd2outputzd2tozd2procedurezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3227, obj_t BgL_procz00_3228, obj_t BgL_thunkz00_3229)
{
{ /* Ieee/port.scm 790 */
{ /* Ieee/port.scm 791 */
obj_t BgL_auxz00_4993;obj_t BgL_auxz00_4986;
if(
PROCEDUREP(BgL_thunkz00_3229))
{ /* Ieee/port.scm 791 */
BgL_auxz00_4993 = BgL_thunkz00_3229
; }  else 
{ 
obj_t BgL_auxz00_4996;
BgL_auxz00_4996 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)35084)), BGl_string2782z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3229); 
FAILURE(BgL_auxz00_4996,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_procz00_3228))
{ /* Ieee/port.scm 791 */
BgL_auxz00_4986 = BgL_procz00_3228
; }  else 
{ 
obj_t BgL_auxz00_4989;
BgL_auxz00_4989 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)35084)), BGl_string2782z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_procz00_3228); 
FAILURE(BgL_auxz00_4989,BFALSE,BFALSE);} 
return 
BGl_withzd2outputzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(BgL_auxz00_4986, BgL_auxz00_4993);} } 

}



/* &<@anonymous:1408> */
obj_t BGl_z62zc3z04anonymousza31408ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3230)
{
{ /* Ieee/port.scm 795 */
{ /* Ieee/port.scm 800 */
obj_t BgL_denvz00_3231;obj_t BgL_oldzd2outputzd2portz00_3232;obj_t BgL_portz00_3233;obj_t BgL_resz00_3234;
BgL_denvz00_3231 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3230, 
(int)(((long)0)))); 
BgL_oldzd2outputzd2portz00_3232 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3230, 
(int)(((long)1)))); 
BgL_portz00_3233 = 
PROCEDURE_REF(BgL_envz00_3230, 
(int)(((long)2))); 
BgL_resz00_3234 = 
PROCEDURE_REF(BgL_envz00_3230, 
(int)(((long)3))); 
BGL_ENV_CURRENT_OUTPUT_PORT_SET(BgL_denvz00_3231, BgL_oldzd2outputzd2portz00_3232); BUNSPEC; 
{ /* Ieee/port.scm 801 */
obj_t BgL_auxz00_4089;
{ /* Ieee/port.scm 801 */
obj_t BgL_portz00_4090;
if(
OUTPUT_PORTP(BgL_portz00_3233))
{ /* Ieee/port.scm 801 */
BgL_portz00_4090 = BgL_portz00_3233; }  else 
{ 
obj_t BgL_auxz00_5014;
BgL_auxz00_5014 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)35420)), BGl_string2783z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3233); 
FAILURE(BgL_auxz00_5014,BFALSE,BFALSE);} 
BgL_auxz00_4089 = 
bgl_close_output_port(BgL_portz00_4090); } 
return 
CELL_SET(BgL_resz00_3234, BgL_auxz00_4089);} } } 

}



/* &close */
obj_t BGl_z62closez62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3236)
{
{ /* Ieee/port.scm 454 */
return 
BBOOL(((bool_t)0));} 

}



/* &flush */
obj_t BGl_z62flushz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3237)
{
{ /* Ieee/port.scm 454 */
return 
BBOOL(((bool_t)0));} 

}



/* with-error-to-string */
BGL_EXPORTED_DEF obj_t BGl_withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_thunkz00_39)
{
{ /* Ieee/port.scm 807 */
{ /* Ieee/port.scm 808 */
obj_t BgL_portz00_1473;
{ /* Ieee/port.scm 808 */

{ /* Ieee/port.scm 453 */

BgL_portz00_1473 = 
bgl_open_output_string(
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2734z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(((long)128)))); } } 
{ /* Ieee/port.scm 810 */
obj_t BgL_denvz00_1475;
BgL_denvz00_1475 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 810 */
obj_t BgL_oldzd2errorzd2portz00_1476;
BgL_oldzd2errorzd2portz00_1476 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_denvz00_1475); 
{ /* Ieee/port.scm 811 */
obj_t BgL_resz00_3249;
BgL_resz00_3249 = 
MAKE_CELL(BUNSPEC); 
{ /* Ieee/port.scm 812 */

{ /* Ieee/port.scm 813 */
obj_t BgL_exitd1083z00_1478;
BgL_exitd1083z00_1478 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Ieee/port.scm 818 */
obj_t BgL_zc3z04anonymousza31412ze3z87_3240;
BgL_zc3z04anonymousza31412ze3z87_3240 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31412ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)4))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31412ze3z87_3240, 
(int)(((long)0)), BgL_denvz00_1475); 
PROCEDURE_SET(BgL_zc3z04anonymousza31412ze3z87_3240, 
(int)(((long)1)), BgL_oldzd2errorzd2portz00_1476); 
PROCEDURE_SET(BgL_zc3z04anonymousza31412ze3z87_3240, 
(int)(((long)2)), BgL_portz00_1473); 
PROCEDURE_SET(BgL_zc3z04anonymousza31412ze3z87_3240, 
(int)(((long)3)), 
((obj_t)BgL_resz00_3249)); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1083z00_1478, BgL_zc3z04anonymousza31412ze3z87_3240); 
{ /* Ieee/port.scm 815 */
obj_t BgL_tmp1085z00_1480;
BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1475, BgL_portz00_1473); BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_39, ((long)0)))
{ /* Ieee/port.scm 816 */
BgL_tmp1085z00_1480 = 
PROCEDURE_ENTRY(BgL_thunkz00_39)(BgL_thunkz00_39, BEOA); }  else 
{ /* Ieee/port.scm 816 */
FAILURE(BGl_string2784z00zz__r4_ports_6_10_1z00,BGl_list2753z00zz__r4_ports_6_10_1z00,BgL_thunkz00_39);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1083z00_1478); 
BGl_z62zc3z04anonymousza31412ze3ze5zz__r4_ports_6_10_1z00(BgL_zc3z04anonymousza31412ze3z87_3240); BgL_tmp1085z00_1480; } } } 
{ /* Ieee/port.scm 820 */
obj_t BgL_aux2287z00_3657;
BgL_aux2287z00_3657 = 
CELL_REF(BgL_resz00_3249); 
if(
STRINGP(BgL_aux2287z00_3657))
{ /* Ieee/port.scm 820 */
return BgL_aux2287z00_3657;}  else 
{ 
obj_t BgL_auxz00_5051;
BgL_auxz00_5051 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)36079)), BGl_string2785z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_aux2287z00_3657); 
FAILURE(BgL_auxz00_5051,BFALSE,BFALSE);} } } } } } } } 

}



/* &with-error-to-string */
obj_t BGl_z62withzd2errorzd2tozd2stringzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3241, obj_t BgL_thunkz00_3242)
{
{ /* Ieee/port.scm 807 */
{ /* Ieee/port.scm 808 */
obj_t BgL_auxz00_5055;
if(
PROCEDUREP(BgL_thunkz00_3242))
{ /* Ieee/port.scm 808 */
BgL_auxz00_5055 = BgL_thunkz00_3242
; }  else 
{ 
obj_t BgL_auxz00_5058;
BgL_auxz00_5058 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)35704)), BGl_string2786z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3242); 
FAILURE(BgL_auxz00_5058,BFALSE,BFALSE);} 
return 
BGl_withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00(BgL_auxz00_5055);} } 

}



/* &<@anonymous:1412> */
obj_t BGl_z62zc3z04anonymousza31412ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3243)
{
{ /* Ieee/port.scm 813 */
{ /* Ieee/port.scm 818 */
obj_t BgL_denvz00_3244;obj_t BgL_oldzd2errorzd2portz00_3245;obj_t BgL_portz00_3246;obj_t BgL_resz00_3247;
BgL_denvz00_3244 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3243, 
(int)(((long)0)))); 
BgL_oldzd2errorzd2portz00_3245 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3243, 
(int)(((long)1)))); 
BgL_portz00_3246 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3243, 
(int)(((long)2)))); 
BgL_resz00_3247 = 
PROCEDURE_REF(BgL_envz00_3243, 
(int)(((long)3))); 
BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_3244, BgL_oldzd2errorzd2portz00_3245); BUNSPEC; 
{ /* Ieee/port.scm 819 */
obj_t BgL_auxz00_4091;
BgL_auxz00_4091 = 
bgl_close_output_port(BgL_portz00_3246); 
return 
CELL_SET(BgL_resz00_3247, BgL_auxz00_4091);} } } 

}



/* with-error-to-file */
BGL_EXPORTED_DEF obj_t BGl_withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_40, obj_t BgL_thunkz00_41)
{
{ /* Ieee/port.scm 829 */
{ /* Ieee/port.scm 830 */
obj_t BgL_portz00_1484;
{ /* Ieee/port.scm 451 */

BgL_portz00_1484 = 
bgl_open_output_file(BgL_stringz00_40, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2734z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(default_io_bufsiz))); } 
if(
OUTPUT_PORTP(BgL_portz00_1484))
{ /* Ieee/port.scm 832 */
obj_t BgL_denvz00_1486;
BgL_denvz00_1486 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 832 */
obj_t BgL_oldzd2outputzd2portz00_1487;
BgL_oldzd2outputzd2portz00_1487 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_denvz00_1486); 
{ /* Ieee/port.scm 833 */

{ /* Ieee/port.scm 834 */
obj_t BgL_exitd1086z00_1488;
BgL_exitd1086z00_1488 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Ieee/port.scm 839 */
obj_t BgL_zc3z04anonymousza31414ze3z87_3251;
BgL_zc3z04anonymousza31414ze3z87_3251 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31414ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31414ze3z87_3251, 
(int)(((long)0)), BgL_denvz00_1486); 
PROCEDURE_SET(BgL_zc3z04anonymousza31414ze3z87_3251, 
(int)(((long)1)), BgL_oldzd2outputzd2portz00_1487); 
PROCEDURE_SET(BgL_zc3z04anonymousza31414ze3z87_3251, 
(int)(((long)2)), BgL_portz00_1484); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1086z00_1488, BgL_zc3z04anonymousza31414ze3z87_3251); 
{ /* Ieee/port.scm 836 */
obj_t BgL_tmp1088z00_1490;
BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1486, BgL_portz00_1484); BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_41, ((long)0)))
{ /* Ieee/port.scm 837 */
BgL_tmp1088z00_1490 = 
PROCEDURE_ENTRY(BgL_thunkz00_41)(BgL_thunkz00_41, BEOA); }  else 
{ /* Ieee/port.scm 837 */
FAILURE(BGl_string2787z00zz__r4_ports_6_10_1z00,BGl_list2753z00zz__r4_ports_6_10_1z00,BgL_thunkz00_41);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1086z00_1488); 
BGl_z62zc3z04anonymousza31414ze3ze5zz__r4_ports_6_10_1z00(BgL_zc3z04anonymousza31414ze3z87_3251); 
return BgL_tmp1088z00_1490;} } } } } }  else 
{ /* Ieee/port.scm 831 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_symbol2788z00zz__r4_ports_6_10_1z00, BGl_string2727z00zz__r4_ports_6_10_1z00, BgL_stringz00_40);} } } 

}



/* &with-error-to-file */
obj_t BGl_z62withzd2errorzd2tozd2filezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3252, obj_t BgL_stringz00_3253, obj_t BgL_thunkz00_3254)
{
{ /* Ieee/port.scm 829 */
{ /* Ieee/port.scm 830 */
obj_t BgL_auxz00_5111;obj_t BgL_auxz00_5104;
if(
PROCEDUREP(BgL_thunkz00_3254))
{ /* Ieee/port.scm 830 */
BgL_auxz00_5111 = BgL_thunkz00_3254
; }  else 
{ 
obj_t BgL_auxz00_5114;
BgL_auxz00_5114 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)36475)), BGl_string2790z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3254); 
FAILURE(BgL_auxz00_5114,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_3253))
{ /* Ieee/port.scm 830 */
BgL_auxz00_5104 = BgL_stringz00_3253
; }  else 
{ 
obj_t BgL_auxz00_5107;
BgL_auxz00_5107 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)36475)), BGl_string2790z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3253); 
FAILURE(BgL_auxz00_5107,BFALSE,BFALSE);} 
return 
BGl_withzd2errorzd2tozd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_5104, BgL_auxz00_5111);} } 

}



/* &<@anonymous:1414> */
obj_t BGl_z62zc3z04anonymousza31414ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3255)
{
{ /* Ieee/port.scm 834 */
{ /* Ieee/port.scm 839 */
obj_t BgL_denvz00_3256;obj_t BgL_oldzd2outputzd2portz00_3257;obj_t BgL_portz00_3258;
BgL_denvz00_3256 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3255, 
(int)(((long)0)))); 
BgL_oldzd2outputzd2portz00_3257 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3255, 
(int)(((long)1)))); 
BgL_portz00_3258 = 
PROCEDURE_REF(BgL_envz00_3255, 
(int)(((long)2))); 
BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_3256, BgL_oldzd2outputzd2portz00_3257); BUNSPEC; 
{ /* Ieee/port.scm 840 */
obj_t BgL_portz00_4092;
if(
OUTPUT_PORTP(BgL_portz00_3258))
{ /* Ieee/port.scm 840 */
BgL_portz00_4092 = BgL_portz00_3258; }  else 
{ 
obj_t BgL_auxz00_5130;
BgL_auxz00_5130 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)36810)), BGl_string2791z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3258); 
FAILURE(BgL_auxz00_5130,BFALSE,BFALSE);} 
return 
bgl_close_output_port(BgL_portz00_4092);} } } 

}



/* with-error-to-port */
BGL_EXPORTED_DEF obj_t BGl_withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_42, obj_t BgL_thunkz00_43)
{
{ /* Ieee/port.scm 849 */
{ /* Ieee/port.scm 850 */
obj_t BgL_denvz00_1495;
BgL_denvz00_1495 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 850 */
obj_t BgL_oldzd2outputzd2portz00_1496;
BgL_oldzd2outputzd2portz00_1496 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_denvz00_1495); 
{ /* Ieee/port.scm 851 */

{ /* Ieee/port.scm 852 */
obj_t BgL_exitd1089z00_1497;
BgL_exitd1089z00_1497 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ 
obj_t BgL_zc3z04anonymousza31415ze3z87_3259;
BgL_zc3z04anonymousza31415ze3z87_3259 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31415ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31415ze3z87_3259, 
(int)(((long)0)), BgL_denvz00_1495); 
PROCEDURE_SET(BgL_zc3z04anonymousza31415ze3z87_3259, 
(int)(((long)1)), BgL_oldzd2outputzd2portz00_1496); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1089z00_1497, BgL_zc3z04anonymousza31415ze3z87_3259); 
{ /* Ieee/port.scm 854 */
obj_t BgL_tmp1091z00_1499;
BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1495, BgL_portz00_42); BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_43, ((long)0)))
{ /* Ieee/port.scm 855 */
BgL_tmp1091z00_1499 = 
PROCEDURE_ENTRY(BgL_thunkz00_43)(BgL_thunkz00_43, BEOA); }  else 
{ /* Ieee/port.scm 855 */
FAILURE(BGl_string2792z00zz__r4_ports_6_10_1z00,BGl_list2753z00zz__r4_ports_6_10_1z00,BgL_thunkz00_43);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1089z00_1497); 
BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1495, BgL_oldzd2outputzd2portz00_1496); BUNSPEC; 
return BgL_tmp1091z00_1499;} } } } } } } 

}



/* &with-error-to-port */
obj_t BGl_z62withzd2errorzd2tozd2portzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3260, obj_t BgL_portz00_3261, obj_t BgL_thunkz00_3262)
{
{ /* Ieee/port.scm 849 */
{ /* Ieee/port.scm 850 */
obj_t BgL_auxz00_5162;obj_t BgL_auxz00_5155;
if(
PROCEDUREP(BgL_thunkz00_3262))
{ /* Ieee/port.scm 850 */
BgL_auxz00_5162 = BgL_thunkz00_3262
; }  else 
{ 
obj_t BgL_auxz00_5165;
BgL_auxz00_5165 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)37198)), BGl_string2793z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3262); 
FAILURE(BgL_auxz00_5165,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_portz00_3261))
{ /* Ieee/port.scm 850 */
BgL_auxz00_5155 = BgL_portz00_3261
; }  else 
{ 
obj_t BgL_auxz00_5158;
BgL_auxz00_5158 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)37198)), BGl_string2793z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3261); 
FAILURE(BgL_auxz00_5158,BFALSE,BFALSE);} 
return 
BGl_withzd2errorzd2tozd2portzd2zz__r4_ports_6_10_1z00(BgL_auxz00_5155, BgL_auxz00_5162);} } 

}



/* &<@anonymous:1415> */
obj_t BGl_z62zc3z04anonymousza31415ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3263)
{
{ /* Ieee/port.scm 852 */
{ 
obj_t BgL_denvz00_3264;obj_t BgL_oldzd2outputzd2portz00_3265;
BgL_denvz00_3264 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3263, 
(int)(((long)0)))); 
BgL_oldzd2outputzd2portz00_3265 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3263, 
(int)(((long)1)))); 
BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_3264, BgL_oldzd2outputzd2portz00_3265); 
return BUNSPEC;} } 

}



/* with-error-to-procedure */
BGL_EXPORTED_DEF obj_t BGl_withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(obj_t BgL_procz00_44, obj_t BgL_thunkz00_45)
{
{ /* Ieee/port.scm 861 */
{ /* Ieee/port.scm 862 */
obj_t BgL_portz00_1502;
{ /* Ieee/port.scm 454 */

BgL_portz00_1502 = 
BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(BgL_procz00_44, BGl_proc2794z00zz__r4_ports_6_10_1z00, BTRUE, BGl_proc2795z00zz__r4_ports_6_10_1z00); } 
{ /* Ieee/port.scm 862 */
obj_t BgL_denvz00_1503;
BgL_denvz00_1503 = 
BGL_CURRENT_DYNAMIC_ENV(); 
{ /* Ieee/port.scm 863 */
obj_t BgL_oldzd2errorzd2portz00_1504;
BgL_oldzd2errorzd2portz00_1504 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_denvz00_1503); 
{ /* Ieee/port.scm 864 */
obj_t BgL_resz00_3280;
BgL_resz00_3280 = 
MAKE_CELL(BUNSPEC); 
{ /* Ieee/port.scm 865 */

{ /* Ieee/port.scm 866 */
obj_t BgL_exitd1092z00_1506;
BgL_exitd1092z00_1506 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Ieee/port.scm 871 */
obj_t BgL_zc3z04anonymousza31416ze3z87_3266;
BgL_zc3z04anonymousza31416ze3z87_3266 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31416ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)4))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31416ze3z87_3266, 
(int)(((long)0)), BgL_denvz00_1503); 
PROCEDURE_SET(BgL_zc3z04anonymousza31416ze3z87_3266, 
(int)(((long)1)), BgL_oldzd2errorzd2portz00_1504); 
PROCEDURE_SET(BgL_zc3z04anonymousza31416ze3z87_3266, 
(int)(((long)2)), BgL_portz00_1502); 
PROCEDURE_SET(BgL_zc3z04anonymousza31416ze3z87_3266, 
(int)(((long)3)), 
((obj_t)BgL_resz00_3280)); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1092z00_1506, BgL_zc3z04anonymousza31416ze3z87_3266); 
{ /* Ieee/port.scm 868 */
obj_t BgL_tmp1094z00_1508;
{ /* Ieee/port.scm 868 */
obj_t BgL_tmpz00_5194;
if(
OUTPUT_PORTP(BgL_portz00_1502))
{ /* Ieee/port.scm 868 */
BgL_tmpz00_5194 = BgL_portz00_1502
; }  else 
{ 
obj_t BgL_auxz00_5197;
BgL_auxz00_5197 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)37913)), BGl_string2796z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_1502); 
FAILURE(BgL_auxz00_5197,BFALSE,BFALSE);} 
BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_1503, BgL_tmpz00_5194); } BUNSPEC; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_45, ((long)0)))
{ /* Ieee/port.scm 869 */
BgL_tmp1094z00_1508 = 
PROCEDURE_ENTRY(BgL_thunkz00_45)(BgL_thunkz00_45, BEOA); }  else 
{ /* Ieee/port.scm 869 */
FAILURE(BGl_string2797z00zz__r4_ports_6_10_1z00,BGl_list2753z00zz__r4_ports_6_10_1z00,BgL_thunkz00_45);} 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1092z00_1506); 
BGl_z62zc3z04anonymousza31416ze3ze5zz__r4_ports_6_10_1z00(BgL_zc3z04anonymousza31416ze3z87_3266); BgL_tmp1094z00_1508; } } } 
return 
CELL_REF(BgL_resz00_3280);} } } } } } 

}



/* &with-error-to-procedure */
obj_t BGl_z62withzd2errorzd2tozd2procedurezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3269, obj_t BgL_procz00_3270, obj_t BgL_thunkz00_3271)
{
{ /* Ieee/port.scm 861 */
{ /* Ieee/port.scm 862 */
obj_t BgL_auxz00_5217;obj_t BgL_auxz00_5210;
if(
PROCEDUREP(BgL_thunkz00_3271))
{ /* Ieee/port.scm 862 */
BgL_auxz00_5217 = BgL_thunkz00_3271
; }  else 
{ 
obj_t BgL_auxz00_5220;
BgL_auxz00_5220 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)37698)), BGl_string2798z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_thunkz00_3271); 
FAILURE(BgL_auxz00_5220,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_procz00_3270))
{ /* Ieee/port.scm 862 */
BgL_auxz00_5210 = BgL_procz00_3270
; }  else 
{ 
obj_t BgL_auxz00_5213;
BgL_auxz00_5213 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)37698)), BGl_string2798z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_procz00_3270); 
FAILURE(BgL_auxz00_5213,BFALSE,BFALSE);} 
return 
BGl_withzd2errorzd2tozd2procedurezd2zz__r4_ports_6_10_1z00(BgL_auxz00_5210, BgL_auxz00_5217);} } 

}



/* &<@anonymous:1416> */
obj_t BGl_z62zc3z04anonymousza31416ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3272)
{
{ /* Ieee/port.scm 866 */
{ /* Ieee/port.scm 871 */
obj_t BgL_denvz00_3273;obj_t BgL_oldzd2errorzd2portz00_3274;obj_t BgL_portz00_3275;obj_t BgL_resz00_3276;
BgL_denvz00_3273 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3272, 
(int)(((long)0)))); 
BgL_oldzd2errorzd2portz00_3274 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3272, 
(int)(((long)1)))); 
BgL_portz00_3275 = 
PROCEDURE_REF(BgL_envz00_3272, 
(int)(((long)2))); 
BgL_resz00_3276 = 
PROCEDURE_REF(BgL_envz00_3272, 
(int)(((long)3))); 
BGL_ENV_CURRENT_ERROR_PORT_SET(BgL_denvz00_3273, BgL_oldzd2errorzd2portz00_3274); BUNSPEC; 
{ /* Ieee/port.scm 872 */
obj_t BgL_auxz00_4093;
{ /* Ieee/port.scm 872 */
obj_t BgL_portz00_4094;
if(
OUTPUT_PORTP(BgL_portz00_3275))
{ /* Ieee/port.scm 872 */
BgL_portz00_4094 = BgL_portz00_3275; }  else 
{ 
obj_t BgL_auxz00_5238;
BgL_auxz00_5238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)38029)), BGl_string2799z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3275); 
FAILURE(BgL_auxz00_5238,BFALSE,BFALSE);} 
BgL_auxz00_4093 = 
bgl_close_output_port(BgL_portz00_4094); } 
return 
CELL_SET(BgL_resz00_3276, BgL_auxz00_4093);} } } 

}



/* &close2153 */
obj_t BGl_z62close2153z62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3278)
{
{ /* Ieee/port.scm 454 */
return 
BBOOL(((bool_t)0));} 

}



/* &flush2154 */
obj_t BGl_z62flush2154z62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3279)
{
{ /* Ieee/port.scm 454 */
return 
BBOOL(((bool_t)0));} 

}



/* input-port-protocol */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00(obj_t BgL_prototcolz00_46)
{
{ /* Ieee/port.scm 905 */
{ /* Ieee/port.scm 906 */
obj_t BgL_cellz00_1520;
{ /* Ieee/port.scm 906 */
obj_t BgL_top3451z00_5246;
BgL_top3451z00_5246 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00); 
BGL_EXITD_PUSH_PROTECT(BgL_top3451z00_5246, BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00); BUNSPEC; 
{ /* Ieee/port.scm 906 */
obj_t BgL_tmp3450z00_5245;
{ /* Ieee/port.scm 907 */
obj_t BgL_auxz00_5250;
{ /* Ieee/port.scm 907 */
obj_t BgL_aux2315z00_3688;
BgL_aux2315z00_3688 = BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00; 
{ /* Ieee/port.scm 907 */
bool_t BgL_test3452z00_5251;
if(
PAIRP(BgL_aux2315z00_3688))
{ /* Ieee/port.scm 907 */
BgL_test3452z00_5251 = ((bool_t)1)
; }  else 
{ /* Ieee/port.scm 907 */
BgL_test3452z00_5251 = 
NULLP(BgL_aux2315z00_3688)
; } 
if(BgL_test3452z00_5251)
{ /* Ieee/port.scm 907 */
BgL_auxz00_5250 = BgL_aux2315z00_3688
; }  else 
{ 
obj_t BgL_auxz00_5255;
BgL_auxz00_5255 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)39708)), BGl_string2800z00zz__r4_ports_6_10_1z00, BGl_string2801z00zz__r4_ports_6_10_1z00, BgL_aux2315z00_3688); 
FAILURE(BgL_auxz00_5255,BFALSE,BFALSE);} } } 
BgL_tmp3450z00_5245 = 
BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_prototcolz00_46, BgL_auxz00_5250); } 
BGL_EXITD_POP_PROTECT(BgL_top3451z00_5246); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00); 
BgL_cellz00_1520 = BgL_tmp3450z00_5245; } } 
if(
PAIRP(BgL_cellz00_1520))
{ /* Ieee/port.scm 908 */
return 
CDR(BgL_cellz00_1520);}  else 
{ /* Ieee/port.scm 908 */
return BFALSE;} } } 

}



/* &input-port-protocol */
obj_t BGl_z62inputzd2portzd2protocolz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3282, obj_t BgL_prototcolz00_3283)
{
{ /* Ieee/port.scm 905 */
return 
BGl_inputzd2portzd2protocolz00zz__r4_ports_6_10_1z00(BgL_prototcolz00_3283);} 

}



/* input-port-protocol-set! */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_protocolz00_47, obj_t BgL_openz00_48)
{
{ /* Ieee/port.scm 915 */
{ /* Ieee/port.scm 916 */
obj_t BgL_top3456z00_5267;
BgL_top3456z00_5267 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00); 
BGL_EXITD_PUSH_PROTECT(BgL_top3456z00_5267, BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00); BUNSPEC; 
{ /* Ieee/port.scm 916 */
obj_t BgL_tmp3455z00_5266;
{ /* Ieee/port.scm 917 */
bool_t BgL_test3457z00_5271;
if(
PROCEDUREP(BgL_openz00_48))
{ /* Ieee/port.scm 917 */
BgL_test3457z00_5271 = 
PROCEDURE_CORRECT_ARITYP(BgL_openz00_48, 
(int)(((long)3)))
; }  else 
{ /* Ieee/port.scm 917 */
BgL_test3457z00_5271 = ((bool_t)0)
; } 
if(BgL_test3457z00_5271)
{ /* Ieee/port.scm 917 */BFALSE; }  else 
{ /* Ieee/port.scm 917 */
BGl_errorz00zz__errorz00(BGl_string2802z00zz__r4_ports_6_10_1z00, BGl_string2803z00zz__r4_ports_6_10_1z00, BgL_protocolz00_47); } } 
{ /* Ieee/port.scm 921 */
obj_t BgL_cz00_1525;
{ /* Ieee/port.scm 921 */
obj_t BgL_auxz00_5277;
{ /* Ieee/port.scm 921 */
obj_t BgL_aux2317z00_3690;
BgL_aux2317z00_3690 = BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00; 
{ /* Ieee/port.scm 921 */
bool_t BgL_test3459z00_5278;
if(
PAIRP(BgL_aux2317z00_3690))
{ /* Ieee/port.scm 921 */
BgL_test3459z00_5278 = ((bool_t)1)
; }  else 
{ /* Ieee/port.scm 921 */
BgL_test3459z00_5278 = 
NULLP(BgL_aux2317z00_3690)
; } 
if(BgL_test3459z00_5278)
{ /* Ieee/port.scm 921 */
BgL_auxz00_5277 = BgL_aux2317z00_3690
; }  else 
{ 
obj_t BgL_auxz00_5282;
BgL_auxz00_5282 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)40286)), BGl_string2802z00zz__r4_ports_6_10_1z00, BGl_string2801z00zz__r4_ports_6_10_1z00, BgL_aux2317z00_3690); 
FAILURE(BgL_auxz00_5282,BFALSE,BFALSE);} } } 
BgL_cz00_1525 = 
BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_protocolz00_47, BgL_auxz00_5277); } 
if(
PAIRP(BgL_cz00_1525))
{ /* Ieee/port.scm 922 */
BgL_tmp3455z00_5266 = 
SET_CDR(BgL_cz00_1525, BgL_openz00_48); }  else 
{ /* Ieee/port.scm 925 */
obj_t BgL_arg1424z00_1527;
BgL_arg1424z00_1527 = 
MAKE_YOUNG_PAIR(BgL_protocolz00_47, BgL_openz00_48); 
BgL_tmp3455z00_5266 = ( 
BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00 = 
MAKE_YOUNG_PAIR(BgL_arg1424z00_1527, BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00), BUNSPEC) ; } } 
BGL_EXITD_POP_PROTECT(BgL_top3456z00_5267); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_za2inputzd2portzd2protocolszd2mutexza2zd2zz__r4_ports_6_10_1z00); BgL_tmp3455z00_5266; } } 
return BgL_openz00_48;} 

}



/* &input-port-protocol-set! */
obj_t BGl_z62inputzd2portzd2protocolzd2setz12za2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3284, obj_t BgL_protocolz00_3285, obj_t BgL_openz00_3286)
{
{ /* Ieee/port.scm 915 */
return 
BGl_inputzd2portzd2protocolzd2setz12zc0zz__r4_ports_6_10_1z00(BgL_protocolz00_3285, BgL_openz00_3286);} 

}



/* get-port-buffer */
BGL_EXPORTED_DEF obj_t BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t BgL_whoz00_49, obj_t BgL_bufinfoz00_50, int BgL_defsiza7za7_51)
{
{ /* Ieee/port.scm 931 */
if(
(BgL_bufinfoz00_50==BTRUE))
{ /* Ieee/port.scm 933 */
return 
make_string_sans_fill(
(long)(BgL_defsiza7za7_51));}  else 
{ /* Ieee/port.scm 933 */
if(
(BgL_bufinfoz00_50==BFALSE))
{ /* Ieee/port.scm 935 */
return 
make_string_sans_fill(((long)2));}  else 
{ /* Ieee/port.scm 935 */
if(
STRINGP(BgL_bufinfoz00_50))
{ /* Ieee/port.scm 937 */
return BgL_bufinfoz00_50;}  else 
{ /* Ieee/port.scm 937 */
if(
INTEGERP(BgL_bufinfoz00_50))
{ /* Ieee/port.scm 939 */
if(
(
(long)CINT(BgL_bufinfoz00_50)>=((long)2)))
{ /* Ieee/port.scm 940 */
return 
make_string_sans_fill(
(long)CINT(BgL_bufinfoz00_50));}  else 
{ /* Ieee/port.scm 940 */
return 
make_string_sans_fill(((long)2));} }  else 
{ /* Ieee/port.scm 944 */
obj_t BgL_aux2319z00_3692;
BgL_aux2319z00_3692 = 
BGl_errorz00zz__errorz00(BgL_whoz00_49, BGl_string2804z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_50); 
if(
STRINGP(BgL_aux2319z00_3692))
{ /* Ieee/port.scm 944 */
return BgL_aux2319z00_3692;}  else 
{ 
obj_t BgL_auxz00_5315;
BgL_auxz00_5315 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)41028)), BGl_string2805z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_aux2319z00_3692); 
FAILURE(BgL_auxz00_5315,BFALSE,BFALSE);} } } } } } 

}



/* &get-port-buffer */
obj_t BGl_z62getzd2portzd2bufferz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3287, obj_t BgL_whoz00_3288, obj_t BgL_bufinfoz00_3289, obj_t BgL_defsiza7za7_3290)
{
{ /* Ieee/port.scm 931 */
{ /* Ieee/port.scm 933 */
int BgL_auxz00_5319;
{ /* Ieee/port.scm 933 */
obj_t BgL_tmpz00_5320;
if(
INTEGERP(BgL_defsiza7za7_3290))
{ /* Ieee/port.scm 933 */
BgL_tmpz00_5320 = BgL_defsiza7za7_3290
; }  else 
{ 
obj_t BgL_auxz00_5323;
BgL_auxz00_5323 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)40736)), BGl_string2806z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_defsiza7za7_3290); 
FAILURE(BgL_auxz00_5323,BFALSE,BFALSE);} 
BgL_auxz00_5319 = 
CINT(BgL_tmpz00_5320); } 
return 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BgL_whoz00_3288, BgL_bufinfoz00_3289, BgL_auxz00_5319);} } 

}



/* &%open-input-file */
obj_t BGl_z62z52openzd2inputzd2filez30zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3082, obj_t BgL_stringz00_3083, obj_t BgL_bufz00_3084, obj_t BgL_tmtz00_3085)
{
{ /* Ieee/port.scm 949 */
{ /* Ieee/port.scm 950 */
obj_t BgL_auxz00_5336;obj_t BgL_tmpz00_5329;
if(
STRINGP(BgL_bufz00_3084))
{ /* Ieee/port.scm 950 */
BgL_auxz00_5336 = BgL_bufz00_3084
; }  else 
{ 
obj_t BgL_auxz00_5339;
BgL_auxz00_5339 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)41361)), BGl_string2808z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_bufz00_3084); 
FAILURE(BgL_auxz00_5339,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_3083))
{ /* Ieee/port.scm 950 */
BgL_tmpz00_5329 = BgL_stringz00_3083
; }  else 
{ 
obj_t BgL_auxz00_5332;
BgL_auxz00_5332 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)41354)), BGl_string2808z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3083); 
FAILURE(BgL_auxz00_5332,BFALSE,BFALSE);} 
return 
bgl_open_input_file(BgL_tmpz00_5329, BgL_auxz00_5336);} } 

}



/* &%open-input-pipe */
obj_t BGl_z62z52openzd2inputzd2pipez30zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3086, obj_t BgL_stringz00_3087, obj_t BgL_bufinfoz00_3088, obj_t BgL_tmtz00_3089)
{
{ /* Ieee/port.scm 955 */
{ /* Ieee/port.scm 956 */
obj_t BgL_bufz00_4104;
BgL_bufz00_4104 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2809z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_3088, 
(int)(((long)1024))); 
{ /* Ieee/port.scm 957 */
obj_t BgL_tmpz00_5346;
if(
STRINGP(BgL_stringz00_3087))
{ /* Ieee/port.scm 957 */
BgL_tmpz00_5346 = BgL_stringz00_3087
; }  else 
{ 
obj_t BgL_auxz00_5349;
BgL_auxz00_5349 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)41732)), BGl_string2810z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3087); 
FAILURE(BgL_auxz00_5349,BFALSE,BFALSE);} 
return 
bgl_open_input_pipe(BgL_tmpz00_5346, BgL_bufz00_4104);} } } 

}



/* &%open-input-resource */
obj_t BGl_z62z52openzd2inputzd2resourcez30zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3106, obj_t BgL_filez00_3107, obj_t BgL_bufinfoz00_3108, obj_t BgL_tmtz00_3109)
{
{ /* Ieee/port.scm 962 */
{ /* Ieee/port.scm 963 */
obj_t BgL_bufz00_4105;
BgL_bufz00_4105 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2811z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_3108, 
(int)(default_io_bufsiz)); 
{ /* Ieee/port.scm 964 */
obj_t BgL_tmpz00_5356;
if(
STRINGP(BgL_filez00_3107))
{ /* Ieee/port.scm 964 */
BgL_tmpz00_5356 = BgL_filez00_3107
; }  else 
{ 
obj_t BgL_auxz00_5359;
BgL_auxz00_5359 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)42125)), BGl_string2812z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_filez00_3107); 
FAILURE(BgL_auxz00_5359,BFALSE,BFALSE);} 
return 
bgl_open_input_resource(BgL_tmpz00_5356, BgL_bufz00_4105);} } } 

}



/* &%open-input-http-socket */
obj_t BGl_z62z52openzd2inputzd2httpzd2socketze2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3090, obj_t BgL_stringz00_3091, obj_t BgL_bufinfoz00_3092, obj_t BgL_timeoutz00_3093)
{
{ /* Ieee/port.scm 969 */
{ /* Ieee/port.scm 983 */
obj_t BgL_protocolz00_4107;
BgL_protocolz00_4107 = 
BGl_urlzd2sanszd2protocolzd2parsezd2zz__urlz00(BgL_stringz00_3091, BGl_string2814z00zz__r4_ports_6_10_1z00); 
{ /* Ieee/port.scm 984 */
obj_t BgL_loginz00_4108;obj_t BgL_hostz00_4109;obj_t BgL_portz00_4110;obj_t BgL_abspathz00_4111;
{ /* Ieee/port.scm 985 */
int BgL_tmpz00_5365;
BgL_tmpz00_5365 = 
(int)(((long)1)); 
BgL_loginz00_4108 = 
BGL_MVALUES_VAL(BgL_tmpz00_5365); } 
{ /* Ieee/port.scm 985 */
int BgL_tmpz00_5368;
BgL_tmpz00_5368 = 
(int)(((long)2)); 
BgL_hostz00_4109 = 
BGL_MVALUES_VAL(BgL_tmpz00_5368); } 
{ /* Ieee/port.scm 985 */
int BgL_tmpz00_5371;
BgL_tmpz00_5371 = 
(int)(((long)3)); 
BgL_portz00_4110 = 
BGL_MVALUES_VAL(BgL_tmpz00_5371); } 
{ /* Ieee/port.scm 985 */
int BgL_tmpz00_5374;
BgL_tmpz00_5374 = 
(int)(((long)4)); 
BgL_abspathz00_4111 = 
BGL_MVALUES_VAL(BgL_tmpz00_5374); } 
return 
BGl_z62loopz62zz__r4_ports_6_10_1z00(BGl_proc2813z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_3092, BgL_timeoutz00_3093, BgL_portz00_4110, BgL_abspathz00_4111, BgL_loginz00_4108, BgL_hostz00_4109, BFALSE, BGl_list2815z00zz__r4_ports_6_10_1z00);} } } 

}



/* &loop */
obj_t BGl_z62loopz62zz__r4_ports_6_10_1z00(obj_t BgL_parserz00_3303, obj_t BgL_bufinfoz00_3302, obj_t BgL_timeoutz00_3301, obj_t BgL_portz00_3300, obj_t BgL_abspathz00_3299, obj_t BgL_loginz00_3298, obj_t BgL_hostz00_3297, obj_t BgL_ipz00_1543, obj_t BgL_headerz00_1544)
{
{ /* Ieee/port.scm 985 */
{ /* Ieee/port.scm 987 */
struct bgl_cell BgL_box3473_3512z00; 
obj_t BgL_ipz00_3512;
BgL_ipz00_3512 = 
MAKE_CELL_STACK(BgL_ipz00_1543,BgL_box3473_3512z00); 
{ /* Ieee/port.scm 987 */
obj_t BgL_sockz00_1546;
{ /* Ieee/port.scm 987 */
obj_t BgL_methodz00_1625;
BgL_methodz00_1625 = BGl_symbol2825z00zz__r4_ports_6_10_1z00; 
BgL_sockz00_1546 = 
BGl_httpz00zz__httpz00(BNIL, BFALSE, BFALSE, BUNSPEC, BFALSE, BgL_headerz00_1544, BgL_hostz00_3297, BGl_string2828z00zz__r4_ports_6_10_1z00, BFALSE, BgL_loginz00_3298, BgL_methodz00_1625, BFALSE, BFALSE, BgL_abspathz00_3299, BgL_portz00_3300, BGl_symbol2827z00zz__r4_ports_6_10_1z00, BFALSE, BFALSE, BgL_timeoutz00_3301, BFALSE); } 
{ /* Ieee/port.scm 987 */
obj_t BgL_opz00_1547;
{ /* Ieee/port.scm 993 */
obj_t BgL_res1994z00_2471;
{ /* Ieee/port.scm 993 */
obj_t BgL_socketz00_2470;
if(
SOCKETP(BgL_sockz00_1546))
{ /* Ieee/port.scm 993 */
BgL_socketz00_2470 = BgL_sockz00_1546; }  else 
{ 
obj_t BgL_auxz00_5381;
BgL_auxz00_5381 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)43124)), BGl_string2829z00zz__r4_ports_6_10_1z00, BGl_string2830z00zz__r4_ports_6_10_1z00, BgL_sockz00_1546); 
FAILURE(BgL_auxz00_5381,BFALSE,BFALSE);} 
BgL_res1994z00_2471 = 
SOCKET_OUTPUT(BgL_socketz00_2470); } 
BgL_opz00_1547 = BgL_res1994z00_2471; } 
{ /* Ieee/port.scm 993 */

{ /* Ieee/port.scm 994 */
bool_t BgL_test3475z00_5386;
{ /* Ieee/port.scm 994 */
obj_t BgL_objz00_2472;
BgL_objz00_2472 = 
CELL_REF(BgL_ipz00_3512); 
BgL_test3475z00_5386 = 
INPUT_PORTP(BgL_objz00_2472); } 
if(BgL_test3475z00_5386)
{ /* Ieee/port.scm 997 */
obj_t BgL_arg1432z00_1549;
{ /* Ieee/port.scm 997 */
obj_t BgL_res1995z00_2474;
{ /* Ieee/port.scm 997 */
obj_t BgL_socketz00_2473;
if(
SOCKETP(BgL_sockz00_1546))
{ /* Ieee/port.scm 997 */
BgL_socketz00_2473 = BgL_sockz00_1546; }  else 
{ 
obj_t BgL_auxz00_5390;
BgL_auxz00_5390 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)43272)), BGl_string2829z00zz__r4_ports_6_10_1z00, BGl_string2830z00zz__r4_ports_6_10_1z00, BgL_sockz00_1546); 
FAILURE(BgL_auxz00_5390,BFALSE,BFALSE);} 
BgL_res1995z00_2474 = 
SOCKET_INPUT(BgL_socketz00_2473); } 
BgL_arg1432z00_1549 = BgL_res1995z00_2474; } 
{ /* Ieee/port.scm 997 */
obj_t BgL_dstz00_2475;
{ /* Ieee/port.scm 997 */
obj_t BgL_aux2335z00_3708;
BgL_aux2335z00_3708 = 
CELL_REF(BgL_ipz00_3512); 
if(
INPUT_PORTP(BgL_aux2335z00_3708))
{ /* Ieee/port.scm 997 */
BgL_dstz00_2475 = BgL_aux2335z00_3708; }  else 
{ 
obj_t BgL_auxz00_5397;
BgL_auxz00_5397 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)43255)), BGl_string2829z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_aux2335z00_3708); 
FAILURE(BgL_auxz00_5397,BFALSE,BFALSE);} } 
bgl_input_port_clone(BgL_dstz00_2475, BgL_arg1432z00_1549); } }  else 
{ /* Ieee/port.scm 998 */
obj_t BgL_auxz00_3513;
{ /* Ieee/port.scm 998 */
obj_t BgL_res1996z00_2478;
{ /* Ieee/port.scm 998 */
obj_t BgL_socketz00_2477;
if(
SOCKETP(BgL_sockz00_1546))
{ /* Ieee/port.scm 998 */
BgL_socketz00_2477 = BgL_sockz00_1546; }  else 
{ 
obj_t BgL_auxz00_5404;
BgL_auxz00_5404 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)43304)), BGl_string2829z00zz__r4_ports_6_10_1z00, BGl_string2830z00zz__r4_ports_6_10_1z00, BgL_sockz00_1546); 
FAILURE(BgL_auxz00_5404,BFALSE,BFALSE);} 
BgL_res1996z00_2478 = 
SOCKET_INPUT(BgL_socketz00_2477); } 
BgL_auxz00_3513 = BgL_res1996z00_2478; } 
CELL_SET(BgL_ipz00_3512, BgL_auxz00_3513); } } 
{ /* Ieee/port.scm 1001 */
obj_t BgL_zc3z04anonymousza31434ze3z87_3291;
BgL_zc3z04anonymousza31434ze3z87_3291 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31434ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)1)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31434ze3z87_3291, 
(int)(((long)0)), BgL_opz00_1547); 
PROCEDURE_SET(BgL_zc3z04anonymousza31434ze3z87_3291, 
(int)(((long)1)), BgL_sockz00_1546); 
{ /* Ieee/port.scm 999 */
obj_t BgL_auxz00_5416;
{ /* Ieee/port.scm 999 */
obj_t BgL_aux2339z00_3712;
BgL_aux2339z00_3712 = 
CELL_REF(BgL_ipz00_3512); 
if(
INPUT_PORTP(BgL_aux2339z00_3712))
{ /* Ieee/port.scm 999 */
BgL_auxz00_5416 = BgL_aux2339z00_3712
; }  else 
{ 
obj_t BgL_auxz00_5419;
BgL_auxz00_5419 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)43345)), BGl_string2829z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_aux2339z00_3712); 
FAILURE(BgL_auxz00_5419,BFALSE,BFALSE);} } 
BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(BgL_auxz00_5416, BgL_zc3z04anonymousza31434ze3z87_3291); } } 
{ /* Ieee/port.scm 1005 */
obj_t BgL_zc3z04anonymousza31436ze3z87_3292;
BgL_zc3z04anonymousza31436ze3z87_3292 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31436ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)2)), 
(int)(((long)8))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31436ze3z87_3292, 
(int)(((long)0)), BgL_hostz00_3297); 
PROCEDURE_SET(BgL_zc3z04anonymousza31436ze3z87_3292, 
(int)(((long)1)), BgL_loginz00_3298); 
PROCEDURE_SET(BgL_zc3z04anonymousza31436ze3z87_3292, 
(int)(((long)2)), BgL_abspathz00_3299); 
PROCEDURE_SET(BgL_zc3z04anonymousza31436ze3z87_3292, 
(int)(((long)3)), BgL_portz00_3300); 
PROCEDURE_SET(BgL_zc3z04anonymousza31436ze3z87_3292, 
(int)(((long)4)), BgL_timeoutz00_3301); 
PROCEDURE_SET(BgL_zc3z04anonymousza31436ze3z87_3292, 
(int)(((long)5)), BgL_bufinfoz00_3302); 
PROCEDURE_SET(BgL_zc3z04anonymousza31436ze3z87_3292, 
(int)(((long)6)), BgL_parserz00_3303); 
PROCEDURE_SET(BgL_zc3z04anonymousza31436ze3z87_3292, 
(int)(((long)7)), BgL_sockz00_1546); 
{ /* Ieee/port.scm 1003 */
obj_t BgL_auxz00_5443;
{ /* Ieee/port.scm 1003 */
obj_t BgL_aux2341z00_3714;
BgL_aux2341z00_3714 = 
CELL_REF(BgL_ipz00_3512); 
if(
INPUT_PORTP(BgL_aux2341z00_3714))
{ /* Ieee/port.scm 1003 */
BgL_auxz00_5443 = BgL_aux2341z00_3714
; }  else 
{ 
obj_t BgL_auxz00_5446;
BgL_auxz00_5446 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)43449)), BGl_string2829z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_aux2341z00_3714); 
FAILURE(BgL_auxz00_5446,BFALSE,BFALSE);} } 
BGl_inputzd2portzd2seekzd2setz12zc0zz__r4_ports_6_10_1z00(BgL_auxz00_5443, BgL_zc3z04anonymousza31436ze3z87_3292); } } 
{ /* Ieee/port.scm 1008 */
obj_t BgL_res1098z00_3304;
BgL_res1098z00_3304 = 
MAKE_CELL(BUNSPEC); 
{ 
obj_t BgL_ez00_1606;
if(
CBOOL(
BGl_zc3z04exitza31452ze3ze70z60zz__r4_ports_6_10_1z00(BgL_parserz00_3303, BgL_opz00_1547, BgL_ipz00_3512, BgL_res1098z00_3304)))
{ /* Ieee/port.scm 1008 */
BgL_ez00_1606 = 
CELL_REF(BgL_res1098z00_3304); 
{ /* Ieee/port.scm 1010 */
obj_t BgL_socketz00_2482;
if(
SOCKETP(BgL_sockz00_1546))
{ /* Ieee/port.scm 1010 */
BgL_socketz00_2482 = BgL_sockz00_1546; }  else 
{ 
obj_t BgL_auxz00_5456;
BgL_auxz00_5456 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)43693)), BGl_string2831z00zz__r4_ports_6_10_1z00, BGl_string2830z00zz__r4_ports_6_10_1z00, BgL_sockz00_1546); 
FAILURE(BgL_auxz00_5456,BFALSE,BFALSE);} 
socket_close(BgL_socketz00_2482); } 
if(
BGl_isazf3zf3zz__objectz00(BgL_ez00_1606, BGl_z62httpzd2redirectionzb0zz__httpz00))
{ /* Ieee/port.scm 1013 */
obj_t BgL_arg1459z00_1610;
BgL_arg1459z00_1610 = 
(((BgL_z62httpzd2redirectionzb0_bglt)COBJECT(
((BgL_z62httpzd2redirectionzb0_bglt)BgL_ez00_1606)))->BgL_urlz00); 
{ /* Ieee/port.scm 440 */

return 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_arg1459z00_1610, BgL_bufinfoz00_3302, 
BINT(((long)5000000)));} }  else 
{ /* Ieee/port.scm 1011 */
return BFALSE;} }  else 
{ /* Ieee/port.scm 1008 */
return 
CELL_REF(BgL_res1098z00_3304);} } } } } } } } 

}



/* <@exit:1452>~0 */
obj_t BGl_zc3z04exitza31452ze3ze70z60zz__r4_ports_6_10_1z00(obj_t BgL_parserz00_3511, obj_t BgL_opz00_3510, obj_t BgL_ipz00_3509, obj_t BgL_res1098z00_3508)
{
{ /* Ieee/port.scm 1008 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit1105z00_1590;
if( SET_EXIT(BgL_an_exit1105z00_1590) ) { 
return 
BGL_EXIT_VALUE();
} else {
#if( SIGSETJMP_SAVESIGS == 0 )
  bgl_restore_signal_handlers();
#endif

BgL_an_exit1105z00_1590 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 1008 */

PUSH_EXIT(BgL_an_exit1105z00_1590, ((long)1)); 
{ /* Ieee/port.scm 1008 */
obj_t BgL_an_exitd1106z00_1591;
BgL_an_exitd1106z00_1591 = 
((obj_t)(&exitd)); 
{ /* Ieee/port.scm 1008 */
bool_t BgL_res1108z00_1594;
{ /* Ieee/port.scm 1008 */
obj_t BgL_ohs1096z00_1595;
BgL_ohs1096z00_1595 = 
BGL_ERROR_HANDLER_GET(); 
{ /* Ieee/port.scm 1008 */
obj_t BgL_exitd1102z00_1596;
BgL_exitd1102z00_1596 = 
((obj_t)(&exitd)); 
{ 
obj_t BgL_zc3z04anonymousza31456ze3z87_3293;
BgL_zc3z04anonymousza31456ze3z87_3293 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31456ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31456ze3z87_3293, 
(int)(((long)0)), BgL_ohs1096z00_1595); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1102z00_1596, BgL_zc3z04anonymousza31456ze3z87_3293); 
{ /* Ieee/port.scm 1008 */
bool_t BgL_tmp1104z00_1598;
{ /* Ieee/port.scm 1008 */
obj_t BgL_arg1453z00_1599;
{ /* Ieee/port.scm 1008 */
obj_t BgL_zc3z04anonymousza31455ze3z87_3294;
BgL_zc3z04anonymousza31455ze3z87_3294 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31455ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)1)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31455ze3z87_3294, 
(int)(((long)0)), 
((obj_t)BgL_res1098z00_3508)); 
PROCEDURE_SET(BgL_zc3z04anonymousza31455ze3z87_3294, 
(int)(((long)1)), BgL_an_exitd1106z00_1591); 
BgL_arg1453z00_1599 = 
MAKE_YOUNG_PAIR(BgL_zc3z04anonymousza31455ze3z87_3294, BgL_ohs1096z00_1595); } 
BGL_ERROR_HANDLER_SET(BgL_arg1453z00_1599); BUNSPEC; } 
{ /* Ieee/port.scm 1008 */
obj_t BgL_auxz00_3305;
{ /* Ieee/port.scm 1014 */
obj_t BgL_auxz00_5487;
{ /* Ieee/port.scm 1014 */
obj_t BgL_aux2345z00_3718;
BgL_aux2345z00_3718 = 
CELL_REF(BgL_ipz00_3509); 
if(
INPUT_PORTP(BgL_aux2345z00_3718))
{ /* Ieee/port.scm 1014 */
BgL_auxz00_5487 = BgL_aux2345z00_3718
; }  else 
{ 
obj_t BgL_auxz00_5490;
BgL_auxz00_5490 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)43848)), BGl_string2832z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_aux2345z00_3718); 
FAILURE(BgL_auxz00_5490,BFALSE,BFALSE);} } 
BgL_auxz00_3305 = 
BGl_httpzd2parsezd2responsez00zz__httpz00(BgL_auxz00_5487, BgL_opz00_3510, BgL_parserz00_3511); } 
CELL_SET(BgL_res1098z00_3508, BgL_auxz00_3305); } 
BgL_tmp1104z00_1598 = ((bool_t)0); 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1102z00_1596); 
BGL_ERROR_HANDLER_SET(BgL_ohs1096z00_1595); BUNSPEC; 
BgL_res1108z00_1594 = BgL_tmp1104z00_1598; } } } } 
POP_EXIT(); 
return 
BBOOL(BgL_res1108z00_1594);} } } 
} } 

}



/* &parser */
obj_t BGl_z62parserz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3307, obj_t BgL_ipz00_3308, obj_t BgL_statuszd2codezd2_3309, obj_t BgL_headerz00_3310, obj_t BgL_clenz00_3311, obj_t BgL_tencz00_3312)
{
{ /* Ieee/port.scm 981 */
{ /* Ieee/port.scm 972 */
bool_t BgL_test3485z00_5499;
{ /* Ieee/port.scm 972 */
bool_t BgL_test3486z00_5500;
{ /* Ieee/port.scm 972 */
long BgL_n1z00_4113;
{ /* Ieee/port.scm 972 */
obj_t BgL_tmpz00_5501;
if(
INTEGERP(BgL_statuszd2codezd2_3309))
{ /* Ieee/port.scm 972 */
BgL_tmpz00_5501 = BgL_statuszd2codezd2_3309
; }  else 
{ 
obj_t BgL_auxz00_5504;
BgL_auxz00_5504 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)42496)), BGl_string2833z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_statuszd2codezd2_3309); 
FAILURE(BgL_auxz00_5504,BFALSE,BFALSE);} 
BgL_n1z00_4113 = 
(long)CINT(BgL_tmpz00_5501); } 
BgL_test3486z00_5500 = 
(BgL_n1z00_4113>=((long)200)); } 
if(BgL_test3486z00_5500)
{ /* Ieee/port.scm 972 */
long BgL_n1z00_4114;
{ /* Ieee/port.scm 972 */
obj_t BgL_tmpz00_5510;
if(
INTEGERP(BgL_statuszd2codezd2_3309))
{ /* Ieee/port.scm 972 */
BgL_tmpz00_5510 = BgL_statuszd2codezd2_3309
; }  else 
{ 
obj_t BgL_auxz00_5513;
BgL_auxz00_5513 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)42519)), BGl_string2833z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_statuszd2codezd2_3309); 
FAILURE(BgL_auxz00_5513,BFALSE,BFALSE);} 
BgL_n1z00_4114 = 
(long)CINT(BgL_tmpz00_5510); } 
BgL_test3485z00_5499 = 
(BgL_n1z00_4114<=((long)299)); }  else 
{ /* Ieee/port.scm 972 */
BgL_test3485z00_5499 = ((bool_t)0)
; } } 
if(BgL_test3485z00_5499)
{ /* Ieee/port.scm 972 */
if(
INPUT_PORTP(BgL_ipz00_3308))
{ /* Ieee/port.scm 976 */
bool_t BgL_test3490z00_5521;
if(
ELONGP(BgL_clenz00_3311))
{ /* Ieee/port.scm 976 */
long BgL_n1z00_4115;
BgL_n1z00_4115 = 
BELONG_TO_LONG(BgL_clenz00_3311); 
BgL_test3490z00_5521 = 
(BgL_n1z00_4115>
(long)(((long)0))); }  else 
{ /* Ieee/port.scm 976 */
BgL_test3490z00_5521 = ((bool_t)0)
; } 
if(BgL_test3490z00_5521)
{ /* Ieee/port.scm 976 */
{ /* Ieee/port.scm 977 */
long BgL_arg1466z00_4116;
{ /* Ieee/port.scm 977 */
long BgL_res1992z00_4117;
{ /* Ieee/port.scm 977 */
long BgL_xz00_4118;
BgL_xz00_4118 = 
BELONG_TO_LONG(BgL_clenz00_3311); 
BgL_res1992z00_4117 = 
(long)(BgL_xz00_4118); } 
BgL_arg1466z00_4116 = BgL_res1992z00_4117; } 
INPUT_PORT_FILLBARRIER_SET(BgL_ipz00_3308, BgL_arg1466z00_4116); BUNSPEC; BgL_arg1466z00_4116; } 
{ /* Ieee/port.scm 978 */
long BgL_tmpz00_5530;
BgL_tmpz00_5530 = 
BELONG_TO_LONG(BgL_clenz00_3311); 
BGL_INPUT_PORT_LENGTH_SET(BgL_ipz00_3308, BgL_tmpz00_5530); } BUNSPEC; 
return BgL_ipz00_3308;}  else 
{ /* Ieee/port.scm 976 */
return BgL_ipz00_3308;} }  else 
{ /* Ieee/port.scm 442 */

return 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BGl_string2834z00zz__r4_ports_6_10_1z00, 
BINT(((long)0)), 
BINT(((long)0)));} }  else 
{ /* Ieee/port.scm 972 */
return BFALSE;} } } 

}



/* &<@anonymous:1455> */
obj_t BGl_z62zc3z04anonymousza31455ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3313, obj_t BgL_ez00_3316)
{
{ /* Ieee/port.scm 1008 */
{ /* Ieee/port.scm 1008 */
obj_t BgL_res1098z00_3314;obj_t BgL_an_exitd1106z00_3315;
BgL_res1098z00_3314 = 
PROCEDURE_REF(BgL_envz00_3313, 
(int)(((long)0))); 
BgL_an_exitd1106z00_3315 = 
PROCEDURE_REF(BgL_envz00_3313, 
(int)(((long)1))); 
CELL_SET(BgL_res1098z00_3314, BgL_ez00_3316); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1106z00_3315, BTRUE);} } 

}



/* &<@anonymous:1456> */
obj_t BGl_z62zc3z04anonymousza31456ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3318)
{
{ /* Ieee/port.scm 1008 */
{ 
obj_t BgL_ohs1096z00_3319;
BgL_ohs1096z00_3319 = 
PROCEDURE_REF(BgL_envz00_3318, 
(int)(((long)0))); 
BGL_ERROR_HANDLER_SET(BgL_ohs1096z00_3319); 
return BUNSPEC;} } 

}



/* &<@anonymous:1436> */
obj_t BGl_z62zc3z04anonymousza31436ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3320, obj_t BgL_ipz00_3329, obj_t BgL_offsetz00_3330)
{
{ /* Ieee/port.scm 1004 */
{ /* Ieee/port.scm 1005 */
obj_t BgL_hostz00_3321;obj_t BgL_loginz00_3322;obj_t BgL_abspathz00_3323;obj_t BgL_portz00_3324;obj_t BgL_timeoutz00_3325;obj_t BgL_bufinfoz00_3326;obj_t BgL_parserz00_3327;obj_t BgL_sockz00_3328;
BgL_hostz00_3321 = 
PROCEDURE_REF(BgL_envz00_3320, 
(int)(((long)0))); 
BgL_loginz00_3322 = 
PROCEDURE_REF(BgL_envz00_3320, 
(int)(((long)1))); 
BgL_abspathz00_3323 = 
PROCEDURE_REF(BgL_envz00_3320, 
(int)(((long)2))); 
BgL_portz00_3324 = 
PROCEDURE_REF(BgL_envz00_3320, 
(int)(((long)3))); 
BgL_timeoutz00_3325 = 
PROCEDURE_REF(BgL_envz00_3320, 
(int)(((long)4))); 
BgL_bufinfoz00_3326 = 
PROCEDURE_REF(BgL_envz00_3320, 
(int)(((long)5))); 
BgL_parserz00_3327 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3320, 
(int)(((long)6)))); 
BgL_sockz00_3328 = 
PROCEDURE_REF(BgL_envz00_3320, 
(int)(((long)7))); 
{ /* Ieee/port.scm 1005 */
obj_t BgL_socketz00_4120;
if(
SOCKETP(BgL_sockz00_3328))
{ /* Ieee/port.scm 1005 */
BgL_socketz00_4120 = BgL_sockz00_3328; }  else 
{ 
obj_t BgL_auxz00_5563;
BgL_auxz00_5563 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)43498)), BGl_string2835z00zz__r4_ports_6_10_1z00, BGl_string2830z00zz__r4_ports_6_10_1z00, BgL_sockz00_3328); 
FAILURE(BgL_auxz00_5563,BFALSE,BFALSE);} 
socket_close(BgL_socketz00_4120); } 
{ /* Ieee/port.scm 1006 */
obj_t BgL_rz00_4121;
{ /* Ieee/port.scm 1006 */
obj_t BgL_arg1443z00_4122;
{ /* Ieee/port.scm 1005 */

{ /* Ieee/port.scm 1005 */
long BgL_auxz00_5568;
{ /* Ieee/port.scm 1006 */
obj_t BgL_tmpz00_5569;
if(
INTEGERP(BgL_offsetz00_3330))
{ /* Ieee/port.scm 1006 */
BgL_tmpz00_5569 = BgL_offsetz00_3330
; }  else 
{ 
obj_t BgL_auxz00_5572;
BgL_auxz00_5572 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)43558)), BGl_string2835z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_offsetz00_3330); 
FAILURE(BgL_auxz00_5572,BFALSE,BFALSE);} 
BgL_auxz00_5568 = 
(long)CINT(BgL_tmpz00_5569); } 
BgL_arg1443z00_4122 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_5568, ((long)10)); } } 
BgL_rz00_4121 = 
string_append_3(BGl_string2836z00zz__r4_ports_6_10_1z00, BgL_arg1443z00_4122, BGl_string2837z00zz__r4_ports_6_10_1z00); } 
{ /* Ieee/port.scm 1007 */
obj_t BgL_arg1437z00_4123;
{ /* Ieee/port.scm 1007 */
obj_t BgL_arg1438z00_4124;obj_t BgL_arg1439z00_4125;
{ /* Ieee/port.scm 1007 */
obj_t BgL_arg1440z00_4126;
BgL_arg1440z00_4126 = 
MAKE_YOUNG_PAIR(BgL_rz00_4121, BNIL); 
BgL_arg1438z00_4124 = 
MAKE_YOUNG_PAIR(BGl_keyword2838z00zz__r4_ports_6_10_1z00, BgL_arg1440z00_4126); } 
{ /* Ieee/port.scm 1007 */
obj_t BgL_arg1441z00_4127;
{ /* Ieee/port.scm 1007 */
obj_t BgL_arg1442z00_4128;
BgL_arg1442z00_4128 = 
MAKE_YOUNG_PAIR(BGl_string2819z00zz__r4_ports_6_10_1z00, BNIL); 
BgL_arg1441z00_4127 = 
MAKE_YOUNG_PAIR(BGl_keyword2817z00zz__r4_ports_6_10_1z00, BgL_arg1442z00_4128); } 
BgL_arg1439z00_4125 = 
MAKE_YOUNG_PAIR(BgL_arg1441z00_4127, BNIL); } 
BgL_arg1437z00_4123 = 
MAKE_YOUNG_PAIR(BgL_arg1438z00_4124, BgL_arg1439z00_4125); } 
return 
BGl_z62loopz62zz__r4_ports_6_10_1z00(BgL_parserz00_3327, BgL_bufinfoz00_3326, BgL_timeoutz00_3325, BgL_portz00_3324, BgL_abspathz00_3323, BgL_loginz00_3322, BgL_hostz00_3321, BgL_ipz00_3329, BgL_arg1437z00_4123);} } } } 

}



/* &<@anonymous:1434> */
obj_t BGl_z62zc3z04anonymousza31434ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3331, obj_t BgL_ipz00_3334)
{
{ /* Ieee/port.scm 1000 */
{ /* Ieee/port.scm 1001 */
obj_t BgL_opz00_3332;obj_t BgL_sockz00_3333;
BgL_opz00_3332 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_3331, 
(int)(((long)0)))); 
BgL_sockz00_3333 = 
PROCEDURE_REF(BgL_envz00_3331, 
(int)(((long)1))); 
bgl_close_output_port(BgL_opz00_3332); 
{ /* Ieee/port.scm 1002 */
obj_t BgL_socketz00_4129;
if(
SOCKETP(BgL_sockz00_3333))
{ /* Ieee/port.scm 1002 */
BgL_socketz00_4129 = BgL_sockz00_3333; }  else 
{ 
obj_t BgL_auxz00_5594;
BgL_auxz00_5594 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)43414)), BGl_string2840z00zz__r4_ports_6_10_1z00, BGl_string2830z00zz__r4_ports_6_10_1z00, BgL_sockz00_3333); 
FAILURE(BgL_auxz00_5594,BFALSE,BFALSE);} 
return 
socket_close(BgL_socketz00_4129);} } } 

}



/* _open-input-file */
obj_t BGl__openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t BgL_env1218z00_68, obj_t BgL_opt1217z00_67)
{
{ /* Ieee/port.scm 1036 */
{ /* Ieee/port.scm 1036 */
obj_t BgL_g1219z00_1654;
BgL_g1219z00_1654 = 
VECTOR_REF(BgL_opt1217z00_67,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1217z00_67)) { case ((long)1) : 

{ /* Ieee/port.scm 1036 */

{ /* Ieee/port.scm 1036 */
obj_t BgL_auxz00_5600;
if(
STRINGP(BgL_g1219z00_1654))
{ /* Ieee/port.scm 1036 */
BgL_auxz00_5600 = BgL_g1219z00_1654
; }  else 
{ 
obj_t BgL_auxz00_5603;
BgL_auxz00_5603 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)45348)), BGl_string2843z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_g1219z00_1654); 
FAILURE(BgL_auxz00_5603,BFALSE,BFALSE);} 
return 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_auxz00_5600, BTRUE, 
BINT(((long)5000000)));} } break;case ((long)2) : 

{ /* Ieee/port.scm 1036 */
obj_t BgL_bufinfoz00_1660;
BgL_bufinfoz00_1660 = 
VECTOR_REF(BgL_opt1217z00_67,((long)1)); 
{ /* Ieee/port.scm 1036 */

{ /* Ieee/port.scm 1036 */
obj_t BgL_auxz00_5610;
if(
STRINGP(BgL_g1219z00_1654))
{ /* Ieee/port.scm 1036 */
BgL_auxz00_5610 = BgL_g1219z00_1654
; }  else 
{ 
obj_t BgL_auxz00_5613;
BgL_auxz00_5613 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)45348)), BGl_string2843z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_g1219z00_1654); 
FAILURE(BgL_auxz00_5613,BFALSE,BFALSE);} 
return 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_auxz00_5610, BgL_bufinfoz00_1660, 
BINT(((long)5000000)));} } } break;case ((long)3) : 

{ /* Ieee/port.scm 1036 */
obj_t BgL_bufinfoz00_1662;
BgL_bufinfoz00_1662 = 
VECTOR_REF(BgL_opt1217z00_67,((long)1)); 
{ /* Ieee/port.scm 1036 */
obj_t BgL_timeoutz00_1663;
BgL_timeoutz00_1663 = 
VECTOR_REF(BgL_opt1217z00_67,((long)2)); 
{ /* Ieee/port.scm 1036 */

{ /* Ieee/port.scm 1036 */
obj_t BgL_auxz00_5621;
if(
STRINGP(BgL_g1219z00_1654))
{ /* Ieee/port.scm 1036 */
BgL_auxz00_5621 = BgL_g1219z00_1654
; }  else 
{ 
obj_t BgL_auxz00_5624;
BgL_auxz00_5624 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)45348)), BGl_string2843z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_g1219z00_1654); 
FAILURE(BgL_auxz00_5624,BFALSE,BFALSE);} 
return 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_auxz00_5621, BgL_bufinfoz00_1662, BgL_timeoutz00_1663);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2841z00zz__r4_ports_6_10_1z00, BGl_string2842z00zz__r4_ports_6_10_1z00, 
BINT(
VECTOR_LENGTH(BgL_opt1217z00_67)));} } } } 

}



/* open-input-file */
BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_64, obj_t BgL_bufinfoz00_65, obj_t BgL_timeoutz00_66)
{
{ /* Ieee/port.scm 1036 */
{ /* Ieee/port.scm 1037 */
obj_t BgL_bufferz00_1665;
BgL_bufferz00_1665 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2811z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_65, 
(int)(default_io_bufsiz)); 
{ 
obj_t BgL_protosz00_1667;
BgL_protosz00_1667 = BGl_za2inputzd2portzd2protocolsza2z00zz__r4_ports_6_10_1z00; 
BgL_zc3z04anonymousza31469ze3z87_1668:
if(
NULLP(BgL_protosz00_1667))
{ /* Ieee/port.scm 1039 */
return 
bgl_open_input_file(BgL_stringz00_64, BgL_bufferz00_1665);}  else 
{ /* Ieee/port.scm 1042 */
obj_t BgL_cellz00_1670;
{ /* Ieee/port.scm 1042 */
obj_t BgL_pairz00_2484;
if(
PAIRP(BgL_protosz00_1667))
{ /* Ieee/port.scm 1042 */
BgL_pairz00_2484 = BgL_protosz00_1667; }  else 
{ 
obj_t BgL_auxz00_5641;
BgL_auxz00_5641 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)45670)), BGl_string2844z00zz__r4_ports_6_10_1z00, BGl_string2845z00zz__r4_ports_6_10_1z00, BgL_protosz00_1667); 
FAILURE(BgL_auxz00_5641,BFALSE,BFALSE);} 
BgL_cellz00_1670 = 
CAR(BgL_pairz00_2484); } 
{ /* Ieee/port.scm 1042 */
obj_t BgL_identz00_1671;
{ /* Ieee/port.scm 1043 */
obj_t BgL_pairz00_2485;
if(
PAIRP(BgL_cellz00_1670))
{ /* Ieee/port.scm 1043 */
BgL_pairz00_2485 = BgL_cellz00_1670; }  else 
{ 
obj_t BgL_auxz00_5648;
BgL_auxz00_5648 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)45697)), BGl_string2844z00zz__r4_ports_6_10_1z00, BGl_string2845z00zz__r4_ports_6_10_1z00, BgL_cellz00_1670); 
FAILURE(BgL_auxz00_5648,BFALSE,BFALSE);} 
BgL_identz00_1671 = 
CAR(BgL_pairz00_2485); } 
{ /* Ieee/port.scm 1043 */
long BgL_lz00_1672;
{ /* Ieee/port.scm 1044 */
obj_t BgL_stringz00_2486;
if(
STRINGP(BgL_identz00_1671))
{ /* Ieee/port.scm 1044 */
BgL_stringz00_2486 = BgL_identz00_1671; }  else 
{ 
obj_t BgL_auxz00_5655;
BgL_auxz00_5655 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)45713)), BGl_string2844z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_identz00_1671); 
FAILURE(BgL_auxz00_5655,BFALSE,BFALSE);} 
BgL_lz00_1672 = 
STRING_LENGTH(BgL_stringz00_2486); } 
{ /* Ieee/port.scm 1044 */
obj_t BgL_openz00_1673;
{ /* Ieee/port.scm 1045 */
obj_t BgL_pairz00_2488;
if(
PAIRP(BgL_cellz00_1670))
{ /* Ieee/port.scm 1045 */
BgL_pairz00_2488 = BgL_cellz00_1670; }  else 
{ 
obj_t BgL_auxz00_5662;
BgL_auxz00_5662 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)45753)), BGl_string2844z00zz__r4_ports_6_10_1z00, BGl_string2845z00zz__r4_ports_6_10_1z00, BgL_cellz00_1670); 
FAILURE(BgL_auxz00_5662,BFALSE,BFALSE);} 
BgL_openz00_1673 = 
CDR(BgL_pairz00_2488); } 
{ /* Ieee/port.scm 1045 */

{ /* Ieee/port.scm 1046 */
bool_t BgL_test3503z00_5667;
{ /* Ieee/port.scm 1046 */
obj_t BgL_string2z00_2490;
if(
STRINGP(BgL_identz00_1671))
{ /* Ieee/port.scm 1046 */
BgL_string2z00_2490 = BgL_identz00_1671; }  else 
{ 
obj_t BgL_auxz00_5670;
BgL_auxz00_5670 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)45787)), BGl_string2844z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_identz00_1671); 
FAILURE(BgL_auxz00_5670,BFALSE,BFALSE);} 
BgL_test3503z00_5667 = 
bigloo_strncmp(BgL_stringz00_64, BgL_string2z00_2490, BgL_lz00_1672); } 
if(BgL_test3503z00_5667)
{ /* Ieee/port.scm 1048 */
obj_t BgL_namez00_1675;
BgL_namez00_1675 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_64, BgL_lz00_1672, 
STRING_LENGTH(BgL_stringz00_64)); 
{ /* Ieee/port.scm 1049 */
obj_t BgL_funz00_3748;
if(
PROCEDUREP(BgL_openz00_1673))
{ /* Ieee/port.scm 1049 */
BgL_funz00_3748 = BgL_openz00_1673; }  else 
{ 
obj_t BgL_auxz00_5679;
BgL_auxz00_5679 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)45910)), BGl_string2844z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_openz00_1673); 
FAILURE(BgL_auxz00_5679,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_3748, ((long)3)))
{ /* Ieee/port.scm 1049 */
return 
PROCEDURE_ENTRY(BgL_funz00_3748)(BgL_openz00_1673, BgL_namez00_1675, BgL_bufferz00_1665, BgL_timeoutz00_66, BEOA);}  else 
{ /* Ieee/port.scm 1049 */
FAILURE(BGl_string2846z00zz__r4_ports_6_10_1z00,BGl_list2847z00zz__r4_ports_6_10_1z00,BgL_funz00_3748);} } }  else 
{ /* Ieee/port.scm 1050 */
obj_t BgL_arg1473z00_1677;
{ /* Ieee/port.scm 1050 */
obj_t BgL_pairz00_2495;
if(
PAIRP(BgL_protosz00_1667))
{ /* Ieee/port.scm 1050 */
BgL_pairz00_2495 = BgL_protosz00_1667; }  else 
{ 
obj_t BgL_auxz00_5694;
BgL_auxz00_5694 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)45955)), BGl_string2844z00zz__r4_ports_6_10_1z00, BGl_string2845z00zz__r4_ports_6_10_1z00, BgL_protosz00_1667); 
FAILURE(BgL_auxz00_5694,BFALSE,BFALSE);} 
BgL_arg1473z00_1677 = 
CDR(BgL_pairz00_2495); } 
{ 
obj_t BgL_protosz00_5699;
BgL_protosz00_5699 = BgL_arg1473z00_1677; 
BgL_protosz00_1667 = BgL_protosz00_5699; 
goto BgL_zc3z04anonymousza31469ze3z87_1668;} } } } } } } } } } } 

}



/* _open-input-string */
obj_t BGl__openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t BgL_env1223z00_73, obj_t BgL_opt1222z00_72)
{
{ /* Ieee/port.scm 1055 */
{ /* Ieee/port.scm 1055 */
obj_t BgL_stringz00_1679;
BgL_stringz00_1679 = 
VECTOR_REF(BgL_opt1222z00_72,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1222z00_72)) { case ((long)1) : 

{ /* Ieee/port.scm 1056 */
long BgL_endz00_1684;
{ /* Ieee/port.scm 1056 */
obj_t BgL_stringz00_2496;
if(
STRINGP(BgL_stringz00_1679))
{ /* Ieee/port.scm 1056 */
BgL_stringz00_2496 = BgL_stringz00_1679; }  else 
{ 
obj_t BgL_auxz00_5703;
BgL_auxz00_5703 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46257)), BGl_string2858z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_1679); 
FAILURE(BgL_auxz00_5703,BFALSE,BFALSE);} 
BgL_endz00_1684 = 
STRING_LENGTH(BgL_stringz00_2496); } 
{ /* Ieee/port.scm 1055 */

{ /* Ieee/port.scm 1055 */
obj_t BgL_auxz00_5708;
if(
STRINGP(BgL_stringz00_1679))
{ /* Ieee/port.scm 1055 */
BgL_auxz00_5708 = BgL_stringz00_1679
; }  else 
{ 
obj_t BgL_auxz00_5711;
BgL_auxz00_5711 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46193)), BGl_string2858z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_1679); 
FAILURE(BgL_auxz00_5711,BFALSE,BFALSE);} 
return 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_auxz00_5708, 
BINT(((long)0)), 
BINT(BgL_endz00_1684));} } } break;case ((long)2) : 

{ /* Ieee/port.scm 1055 */
obj_t BgL_startz00_1685;
BgL_startz00_1685 = 
VECTOR_REF(BgL_opt1222z00_72,((long)1)); 
{ /* Ieee/port.scm 1056 */
long BgL_endz00_1686;
{ /* Ieee/port.scm 1056 */
obj_t BgL_stringz00_2498;
if(
STRINGP(BgL_stringz00_1679))
{ /* Ieee/port.scm 1056 */
BgL_stringz00_2498 = BgL_stringz00_1679; }  else 
{ 
obj_t BgL_auxz00_5721;
BgL_auxz00_5721 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46257)), BGl_string2858z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_1679); 
FAILURE(BgL_auxz00_5721,BFALSE,BFALSE);} 
BgL_endz00_1686 = 
STRING_LENGTH(BgL_stringz00_2498); } 
{ /* Ieee/port.scm 1055 */

{ /* Ieee/port.scm 1055 */
obj_t BgL_auxz00_5726;
if(
STRINGP(BgL_stringz00_1679))
{ /* Ieee/port.scm 1055 */
BgL_auxz00_5726 = BgL_stringz00_1679
; }  else 
{ 
obj_t BgL_auxz00_5729;
BgL_auxz00_5729 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46193)), BGl_string2858z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_1679); 
FAILURE(BgL_auxz00_5729,BFALSE,BFALSE);} 
return 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_auxz00_5726, BgL_startz00_1685, 
BINT(BgL_endz00_1686));} } } } break;case ((long)3) : 

{ /* Ieee/port.scm 1055 */
obj_t BgL_startz00_1687;
BgL_startz00_1687 = 
VECTOR_REF(BgL_opt1222z00_72,((long)1)); 
{ /* Ieee/port.scm 1055 */
obj_t BgL_endz00_1688;
BgL_endz00_1688 = 
VECTOR_REF(BgL_opt1222z00_72,((long)2)); 
{ /* Ieee/port.scm 1055 */

{ /* Ieee/port.scm 1055 */
obj_t BgL_auxz00_5737;
if(
STRINGP(BgL_stringz00_1679))
{ /* Ieee/port.scm 1055 */
BgL_auxz00_5737 = BgL_stringz00_1679
; }  else 
{ 
obj_t BgL_auxz00_5740;
BgL_auxz00_5740 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46193)), BGl_string2858z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_1679); 
FAILURE(BgL_auxz00_5740,BFALSE,BFALSE);} 
return 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_auxz00_5737, BgL_startz00_1687, BgL_endz00_1688);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2856z00zz__r4_ports_6_10_1z00, BGl_string2842z00zz__r4_ports_6_10_1z00, 
BINT(
VECTOR_LENGTH(BgL_opt1222z00_72)));} } } } 

}



/* open-input-string */
BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_69, obj_t BgL_startz00_70, obj_t BgL_endz00_71)
{
{ /* Ieee/port.scm 1055 */
{ /* Ieee/port.scm 1058 */
bool_t BgL_test3513z00_5750;
{ /* Ieee/port.scm 1058 */
long BgL_n1z00_2500;
{ /* Ieee/port.scm 1058 */
obj_t BgL_tmpz00_5751;
if(
INTEGERP(BgL_startz00_70))
{ /* Ieee/port.scm 1058 */
BgL_tmpz00_5751 = BgL_startz00_70
; }  else 
{ 
obj_t BgL_auxz00_5754;
BgL_auxz00_5754 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46303)), BGl_string2857z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_startz00_70); 
FAILURE(BgL_auxz00_5754,BFALSE,BFALSE);} 
BgL_n1z00_2500 = 
(long)CINT(BgL_tmpz00_5751); } 
BgL_test3513z00_5750 = 
(BgL_n1z00_2500<((long)0)); } 
if(BgL_test3513z00_5750)
{ /* Ieee/port.scm 1059 */
obj_t BgL_aux2391z00_3765;
BgL_aux2391z00_3765 = 
BGl_errorz00zz__errorz00(BGl_string2857z00zz__r4_ports_6_10_1z00, BGl_string2859z00zz__r4_ports_6_10_1z00, BgL_startz00_70); 
if(
INPUT_PORTP(BgL_aux2391z00_3765))
{ /* Ieee/port.scm 1059 */
return BgL_aux2391z00_3765;}  else 
{ 
obj_t BgL_auxz00_5763;
BgL_auxz00_5763 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46319)), BGl_string2857z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_aux2391z00_3765); 
FAILURE(BgL_auxz00_5763,BFALSE,BFALSE);} }  else 
{ /* Ieee/port.scm 1060 */
bool_t BgL_test3516z00_5767;
{ /* Ieee/port.scm 1060 */
long BgL_n1z00_2504;
{ /* Ieee/port.scm 1060 */
obj_t BgL_tmpz00_5768;
if(
INTEGERP(BgL_startz00_70))
{ /* Ieee/port.scm 1060 */
BgL_tmpz00_5768 = BgL_startz00_70
; }  else 
{ 
obj_t BgL_auxz00_5771;
BgL_auxz00_5771 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46389)), BGl_string2857z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_startz00_70); 
FAILURE(BgL_auxz00_5771,BFALSE,BFALSE);} 
BgL_n1z00_2504 = 
(long)CINT(BgL_tmpz00_5768); } 
BgL_test3516z00_5767 = 
(BgL_n1z00_2504>
STRING_LENGTH(BgL_stringz00_69)); } 
if(BgL_test3516z00_5767)
{ /* Ieee/port.scm 1061 */
obj_t BgL_aux2395z00_3769;
BgL_aux2395z00_3769 = 
BGl_errorz00zz__errorz00(BGl_string2857z00zz__r4_ports_6_10_1z00, BGl_string2860z00zz__r4_ports_6_10_1z00, BgL_startz00_70); 
if(
INPUT_PORTP(BgL_aux2395z00_3769))
{ /* Ieee/port.scm 1061 */
return BgL_aux2395z00_3769;}  else 
{ 
obj_t BgL_auxz00_5781;
BgL_auxz00_5781 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46426)), BGl_string2857z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_aux2395z00_3769); 
FAILURE(BgL_auxz00_5781,BFALSE,BFALSE);} }  else 
{ /* Ieee/port.scm 1062 */
bool_t BgL_test3519z00_5785;
{ /* Ieee/port.scm 1062 */
long BgL_n1z00_2507;long BgL_n2z00_2508;
{ /* Ieee/port.scm 1062 */
obj_t BgL_tmpz00_5786;
if(
INTEGERP(BgL_startz00_70))
{ /* Ieee/port.scm 1062 */
BgL_tmpz00_5786 = BgL_startz00_70
; }  else 
{ 
obj_t BgL_auxz00_5789;
BgL_auxz00_5789 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46502)), BGl_string2857z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_startz00_70); 
FAILURE(BgL_auxz00_5789,BFALSE,BFALSE);} 
BgL_n1z00_2507 = 
(long)CINT(BgL_tmpz00_5786); } 
{ /* Ieee/port.scm 1062 */
obj_t BgL_tmpz00_5794;
if(
INTEGERP(BgL_endz00_71))
{ /* Ieee/port.scm 1062 */
BgL_tmpz00_5794 = BgL_endz00_71
; }  else 
{ 
obj_t BgL_auxz00_5797;
BgL_auxz00_5797 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46508)), BGl_string2857z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_endz00_71); 
FAILURE(BgL_auxz00_5797,BFALSE,BFALSE);} 
BgL_n2z00_2508 = 
(long)CINT(BgL_tmpz00_5794); } 
BgL_test3519z00_5785 = 
(BgL_n1z00_2507>BgL_n2z00_2508); } 
if(BgL_test3519z00_5785)
{ /* Ieee/port.scm 1063 */
obj_t BgL_aux2401z00_3775;
BgL_aux2401z00_3775 = 
BGl_errorz00zz__errorz00(BGl_string2857z00zz__r4_ports_6_10_1z00, BGl_string2861z00zz__r4_ports_6_10_1z00, BgL_startz00_70); 
if(
INPUT_PORTP(BgL_aux2401z00_3775))
{ /* Ieee/port.scm 1063 */
return BgL_aux2401z00_3775;}  else 
{ 
obj_t BgL_auxz00_5806;
BgL_auxz00_5806 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46520)), BGl_string2857z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_aux2401z00_3775); 
FAILURE(BgL_auxz00_5806,BFALSE,BFALSE);} }  else 
{ /* Ieee/port.scm 1064 */
bool_t BgL_test3523z00_5810;
{ /* Ieee/port.scm 1064 */
long BgL_n1z00_2512;
{ /* Ieee/port.scm 1064 */
obj_t BgL_tmpz00_5811;
if(
INTEGERP(BgL_endz00_71))
{ /* Ieee/port.scm 1064 */
BgL_tmpz00_5811 = BgL_endz00_71
; }  else 
{ 
obj_t BgL_auxz00_5814;
BgL_auxz00_5814 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46599)), BGl_string2857z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_endz00_71); 
FAILURE(BgL_auxz00_5814,BFALSE,BFALSE);} 
BgL_n1z00_2512 = 
(long)CINT(BgL_tmpz00_5811); } 
BgL_test3523z00_5810 = 
(BgL_n1z00_2512>
STRING_LENGTH(BgL_stringz00_69)); } 
if(BgL_test3523z00_5810)
{ /* Ieee/port.scm 1065 */
obj_t BgL_aux2405z00_3779;
BgL_aux2405z00_3779 = 
BGl_errorz00zz__errorz00(BGl_string2857z00zz__r4_ports_6_10_1z00, BGl_string2862z00zz__r4_ports_6_10_1z00, BgL_endz00_71); 
if(
INPUT_PORTP(BgL_aux2405z00_3779))
{ /* Ieee/port.scm 1065 */
return BgL_aux2405z00_3779;}  else 
{ 
obj_t BgL_auxz00_5824;
BgL_auxz00_5824 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46634)), BGl_string2857z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_aux2405z00_3779); 
FAILURE(BgL_auxz00_5824,BFALSE,BFALSE);} }  else 
{ /* Ieee/port.scm 1067 */
long BgL_auxz00_5837;long BgL_tmpz00_5828;
{ /* Ieee/port.scm 1067 */
obj_t BgL_tmpz00_5838;
if(
INTEGERP(BgL_endz00_71))
{ /* Ieee/port.scm 1067 */
BgL_tmpz00_5838 = BgL_endz00_71
; }  else 
{ 
obj_t BgL_auxz00_5841;
BgL_auxz00_5841 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46749)), BGl_string2857z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_endz00_71); 
FAILURE(BgL_auxz00_5841,BFALSE,BFALSE);} 
BgL_auxz00_5837 = 
(long)CINT(BgL_tmpz00_5838); } 
{ /* Ieee/port.scm 1067 */
obj_t BgL_tmpz00_5829;
if(
INTEGERP(BgL_startz00_70))
{ /* Ieee/port.scm 1067 */
BgL_tmpz00_5829 = BgL_startz00_70
; }  else 
{ 
obj_t BgL_auxz00_5832;
BgL_auxz00_5832 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46743)), BGl_string2857z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_startz00_70); 
FAILURE(BgL_auxz00_5832,BFALSE,BFALSE);} 
BgL_tmpz00_5828 = 
(long)CINT(BgL_tmpz00_5829); } 
return 
bgl_open_input_substring(BgL_stringz00_69, BgL_tmpz00_5828, BgL_auxz00_5837);} } } } } } 

}



/* _open-input-string! */
obj_t BGl__openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t BgL_env1227z00_78, obj_t BgL_opt1226z00_77)
{
{ /* Ieee/port.scm 1072 */
{ /* Ieee/port.scm 1072 */
obj_t BgL_stringz00_1698;
BgL_stringz00_1698 = 
VECTOR_REF(BgL_opt1226z00_77,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1226z00_77)) { case ((long)1) : 

{ /* Ieee/port.scm 1073 */
long BgL_endz00_1703;
{ /* Ieee/port.scm 1073 */
obj_t BgL_stringz00_2515;
if(
STRINGP(BgL_stringz00_1698))
{ /* Ieee/port.scm 1073 */
BgL_stringz00_2515 = BgL_stringz00_1698; }  else 
{ 
obj_t BgL_auxz00_5850;
BgL_auxz00_5850 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)47045)), BGl_string2865z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_1698); 
FAILURE(BgL_auxz00_5850,BFALSE,BFALSE);} 
BgL_endz00_1703 = 
STRING_LENGTH(BgL_stringz00_2515); } 
{ /* Ieee/port.scm 1072 */

{ /* Ieee/port.scm 1072 */
obj_t BgL_auxz00_5855;
if(
STRINGP(BgL_stringz00_1698))
{ /* Ieee/port.scm 1072 */
BgL_auxz00_5855 = BgL_stringz00_1698
; }  else 
{ 
obj_t BgL_auxz00_5858;
BgL_auxz00_5858 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46980)), BGl_string2865z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_1698); 
FAILURE(BgL_auxz00_5858,BFALSE,BFALSE);} 
return 
BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(BgL_auxz00_5855, 
BINT(((long)0)), 
BINT(BgL_endz00_1703));} } } break;case ((long)2) : 

{ /* Ieee/port.scm 1072 */
obj_t BgL_startz00_1704;
BgL_startz00_1704 = 
VECTOR_REF(BgL_opt1226z00_77,((long)1)); 
{ /* Ieee/port.scm 1073 */
long BgL_endz00_1705;
{ /* Ieee/port.scm 1073 */
obj_t BgL_stringz00_2517;
if(
STRINGP(BgL_stringz00_1698))
{ /* Ieee/port.scm 1073 */
BgL_stringz00_2517 = BgL_stringz00_1698; }  else 
{ 
obj_t BgL_auxz00_5868;
BgL_auxz00_5868 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)47045)), BGl_string2865z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_1698); 
FAILURE(BgL_auxz00_5868,BFALSE,BFALSE);} 
BgL_endz00_1705 = 
STRING_LENGTH(BgL_stringz00_2517); } 
{ /* Ieee/port.scm 1072 */

{ /* Ieee/port.scm 1072 */
obj_t BgL_auxz00_5873;
if(
STRINGP(BgL_stringz00_1698))
{ /* Ieee/port.scm 1072 */
BgL_auxz00_5873 = BgL_stringz00_1698
; }  else 
{ 
obj_t BgL_auxz00_5876;
BgL_auxz00_5876 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46980)), BGl_string2865z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_1698); 
FAILURE(BgL_auxz00_5876,BFALSE,BFALSE);} 
return 
BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(BgL_auxz00_5873, BgL_startz00_1704, 
BINT(BgL_endz00_1705));} } } } break;case ((long)3) : 

{ /* Ieee/port.scm 1072 */
obj_t BgL_startz00_1706;
BgL_startz00_1706 = 
VECTOR_REF(BgL_opt1226z00_77,((long)1)); 
{ /* Ieee/port.scm 1072 */
obj_t BgL_endz00_1707;
BgL_endz00_1707 = 
VECTOR_REF(BgL_opt1226z00_77,((long)2)); 
{ /* Ieee/port.scm 1072 */

{ /* Ieee/port.scm 1072 */
obj_t BgL_auxz00_5884;
if(
STRINGP(BgL_stringz00_1698))
{ /* Ieee/port.scm 1072 */
BgL_auxz00_5884 = BgL_stringz00_1698
; }  else 
{ 
obj_t BgL_auxz00_5887;
BgL_auxz00_5887 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)46980)), BGl_string2865z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_1698); 
FAILURE(BgL_auxz00_5887,BFALSE,BFALSE);} 
return 
BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(BgL_auxz00_5884, BgL_startz00_1706, BgL_endz00_1707);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2863z00zz__r4_ports_6_10_1z00, BGl_string2842z00zz__r4_ports_6_10_1z00, 
BINT(
VECTOR_LENGTH(BgL_opt1226z00_77)));} } } } 

}



/* open-input-string! */
BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_74, obj_t BgL_startz00_75, obj_t BgL_endz00_76)
{
{ /* Ieee/port.scm 1072 */
{ /* Ieee/port.scm 1075 */
bool_t BgL_test3533z00_5897;
{ /* Ieee/port.scm 1075 */
long BgL_n1z00_2519;
{ /* Ieee/port.scm 1075 */
obj_t BgL_tmpz00_5898;
if(
INTEGERP(BgL_startz00_75))
{ /* Ieee/port.scm 1075 */
BgL_tmpz00_5898 = BgL_startz00_75
; }  else 
{ 
obj_t BgL_auxz00_5901;
BgL_auxz00_5901 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)47091)), BGl_string2864z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_startz00_75); 
FAILURE(BgL_auxz00_5901,BFALSE,BFALSE);} 
BgL_n1z00_2519 = 
(long)CINT(BgL_tmpz00_5898); } 
BgL_test3533z00_5897 = 
(BgL_n1z00_2519<((long)0)); } 
if(BgL_test3533z00_5897)
{ /* Ieee/port.scm 1076 */
obj_t BgL_aux2423z00_3797;
BgL_aux2423z00_3797 = 
BGl_errorz00zz__errorz00(BGl_string2864z00zz__r4_ports_6_10_1z00, BGl_string2859z00zz__r4_ports_6_10_1z00, BgL_startz00_75); 
if(
INPUT_PORTP(BgL_aux2423z00_3797))
{ /* Ieee/port.scm 1076 */
return BgL_aux2423z00_3797;}  else 
{ 
obj_t BgL_auxz00_5910;
BgL_auxz00_5910 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)47107)), BGl_string2864z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_aux2423z00_3797); 
FAILURE(BgL_auxz00_5910,BFALSE,BFALSE);} }  else 
{ /* Ieee/port.scm 1077 */
bool_t BgL_test3536z00_5914;
{ /* Ieee/port.scm 1077 */
long BgL_n1z00_2523;
{ /* Ieee/port.scm 1077 */
obj_t BgL_tmpz00_5915;
if(
INTEGERP(BgL_startz00_75))
{ /* Ieee/port.scm 1077 */
BgL_tmpz00_5915 = BgL_startz00_75
; }  else 
{ 
obj_t BgL_auxz00_5918;
BgL_auxz00_5918 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)47178)), BGl_string2864z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_startz00_75); 
FAILURE(BgL_auxz00_5918,BFALSE,BFALSE);} 
BgL_n1z00_2523 = 
(long)CINT(BgL_tmpz00_5915); } 
BgL_test3536z00_5914 = 
(BgL_n1z00_2523>
STRING_LENGTH(BgL_stringz00_74)); } 
if(BgL_test3536z00_5914)
{ /* Ieee/port.scm 1078 */
obj_t BgL_aux2427z00_3801;
BgL_aux2427z00_3801 = 
BGl_errorz00zz__errorz00(BGl_string2864z00zz__r4_ports_6_10_1z00, BGl_string2860z00zz__r4_ports_6_10_1z00, BgL_startz00_75); 
if(
INPUT_PORTP(BgL_aux2427z00_3801))
{ /* Ieee/port.scm 1078 */
return BgL_aux2427z00_3801;}  else 
{ 
obj_t BgL_auxz00_5928;
BgL_auxz00_5928 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)47215)), BGl_string2864z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_aux2427z00_3801); 
FAILURE(BgL_auxz00_5928,BFALSE,BFALSE);} }  else 
{ /* Ieee/port.scm 1079 */
bool_t BgL_test3539z00_5932;
{ /* Ieee/port.scm 1079 */
long BgL_n1z00_2526;long BgL_n2z00_2527;
{ /* Ieee/port.scm 1079 */
obj_t BgL_tmpz00_5933;
if(
INTEGERP(BgL_startz00_75))
{ /* Ieee/port.scm 1079 */
BgL_tmpz00_5933 = BgL_startz00_75
; }  else 
{ 
obj_t BgL_auxz00_5936;
BgL_auxz00_5936 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)47292)), BGl_string2864z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_startz00_75); 
FAILURE(BgL_auxz00_5936,BFALSE,BFALSE);} 
BgL_n1z00_2526 = 
(long)CINT(BgL_tmpz00_5933); } 
{ /* Ieee/port.scm 1079 */
obj_t BgL_tmpz00_5941;
if(
INTEGERP(BgL_endz00_76))
{ /* Ieee/port.scm 1079 */
BgL_tmpz00_5941 = BgL_endz00_76
; }  else 
{ 
obj_t BgL_auxz00_5944;
BgL_auxz00_5944 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)47298)), BGl_string2864z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_endz00_76); 
FAILURE(BgL_auxz00_5944,BFALSE,BFALSE);} 
BgL_n2z00_2527 = 
(long)CINT(BgL_tmpz00_5941); } 
BgL_test3539z00_5932 = 
(BgL_n1z00_2526>BgL_n2z00_2527); } 
if(BgL_test3539z00_5932)
{ /* Ieee/port.scm 1080 */
obj_t BgL_aux2433z00_3807;
BgL_aux2433z00_3807 = 
BGl_errorz00zz__errorz00(BGl_string2864z00zz__r4_ports_6_10_1z00, BGl_string2861z00zz__r4_ports_6_10_1z00, BgL_startz00_75); 
if(
INPUT_PORTP(BgL_aux2433z00_3807))
{ /* Ieee/port.scm 1080 */
return BgL_aux2433z00_3807;}  else 
{ 
obj_t BgL_auxz00_5953;
BgL_auxz00_5953 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)47310)), BGl_string2864z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_aux2433z00_3807); 
FAILURE(BgL_auxz00_5953,BFALSE,BFALSE);} }  else 
{ /* Ieee/port.scm 1081 */
bool_t BgL_test3543z00_5957;
{ /* Ieee/port.scm 1081 */
long BgL_n1z00_2531;
{ /* Ieee/port.scm 1081 */
obj_t BgL_tmpz00_5958;
if(
INTEGERP(BgL_endz00_76))
{ /* Ieee/port.scm 1081 */
BgL_tmpz00_5958 = BgL_endz00_76
; }  else 
{ 
obj_t BgL_auxz00_5961;
BgL_auxz00_5961 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)47390)), BGl_string2864z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_endz00_76); 
FAILURE(BgL_auxz00_5961,BFALSE,BFALSE);} 
BgL_n1z00_2531 = 
(long)CINT(BgL_tmpz00_5958); } 
BgL_test3543z00_5957 = 
(BgL_n1z00_2531>
STRING_LENGTH(BgL_stringz00_74)); } 
if(BgL_test3543z00_5957)
{ /* Ieee/port.scm 1082 */
obj_t BgL_aux2437z00_3811;
BgL_aux2437z00_3811 = 
BGl_errorz00zz__errorz00(BGl_string2864z00zz__r4_ports_6_10_1z00, BGl_string2862z00zz__r4_ports_6_10_1z00, BgL_endz00_76); 
if(
INPUT_PORTP(BgL_aux2437z00_3811))
{ /* Ieee/port.scm 1082 */
return BgL_aux2437z00_3811;}  else 
{ 
obj_t BgL_auxz00_5971;
BgL_auxz00_5971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)47425)), BGl_string2864z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_aux2437z00_3811); 
FAILURE(BgL_auxz00_5971,BFALSE,BFALSE);} }  else 
{ /* Ieee/port.scm 1084 */
long BgL_auxz00_5984;long BgL_tmpz00_5975;
{ /* Ieee/port.scm 1084 */
obj_t BgL_tmpz00_5985;
if(
INTEGERP(BgL_endz00_76))
{ /* Ieee/port.scm 1084 */
BgL_tmpz00_5985 = BgL_endz00_76
; }  else 
{ 
obj_t BgL_auxz00_5988;
BgL_auxz00_5988 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)47542)), BGl_string2864z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_endz00_76); 
FAILURE(BgL_auxz00_5988,BFALSE,BFALSE);} 
BgL_auxz00_5984 = 
(long)CINT(BgL_tmpz00_5985); } 
{ /* Ieee/port.scm 1084 */
obj_t BgL_tmpz00_5976;
if(
INTEGERP(BgL_startz00_75))
{ /* Ieee/port.scm 1084 */
BgL_tmpz00_5976 = BgL_startz00_75
; }  else 
{ 
obj_t BgL_auxz00_5979;
BgL_auxz00_5979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)47536)), BGl_string2864z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_startz00_75); 
FAILURE(BgL_auxz00_5979,BFALSE,BFALSE);} 
BgL_tmpz00_5975 = 
(long)CINT(BgL_tmpz00_5976); } 
return 
bgl_open_input_substring_bang(BgL_stringz00_74, BgL_tmpz00_5975, BgL_auxz00_5984);} } } } } } 

}



/* _open-input-procedure */
obj_t BGl__openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t BgL_env1231z00_82, obj_t BgL_opt1230z00_81)
{
{ /* Ieee/port.scm 1089 */
{ /* Ieee/port.scm 1089 */
obj_t BgL_g1232z00_1717;
BgL_g1232z00_1717 = 
VECTOR_REF(BgL_opt1230z00_81,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1230z00_81)) { case ((long)1) : 

{ /* Ieee/port.scm 1089 */

{ /* Ieee/port.scm 1089 */
obj_t BgL_procz00_2534;
if(
PROCEDUREP(BgL_g1232z00_1717))
{ /* Ieee/port.scm 1089 */
BgL_procz00_2534 = BgL_g1232z00_1717; }  else 
{ 
obj_t BgL_auxz00_5997;
BgL_auxz00_5997 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)47773)), BGl_string2868z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_g1232z00_1717); 
FAILURE(BgL_auxz00_5997,BFALSE,BFALSE);} 
return 
bgl_open_input_procedure(BgL_procz00_2534, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2763z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(((long)1024))));} } break;case ((long)2) : 

{ /* Ieee/port.scm 1089 */
obj_t BgL_bufinfoz00_1722;
BgL_bufinfoz00_1722 = 
VECTOR_REF(BgL_opt1230z00_81,((long)1)); 
{ /* Ieee/port.scm 1089 */

{ /* Ieee/port.scm 1089 */
obj_t BgL_procz00_2536;
if(
PROCEDUREP(BgL_g1232z00_1717))
{ /* Ieee/port.scm 1089 */
BgL_procz00_2536 = BgL_g1232z00_1717; }  else 
{ 
obj_t BgL_auxz00_6007;
BgL_auxz00_6007 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)47773)), BGl_string2868z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_g1232z00_1717); 
FAILURE(BgL_auxz00_6007,BFALSE,BFALSE);} 
return 
bgl_open_input_procedure(BgL_procz00_2536, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2763z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_1722, 
(int)(((long)1024))));} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2866z00zz__r4_ports_6_10_1z00, BGl_string2867z00zz__r4_ports_6_10_1z00, 
BINT(
VECTOR_LENGTH(BgL_opt1230z00_81)));} } } } 

}



/* open-input-procedure */
BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t BgL_procz00_79, obj_t BgL_bufinfoz00_80)
{
{ /* Ieee/port.scm 1089 */
return 
bgl_open_input_procedure(BgL_procz00_79, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2763z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_80, 
(int)(((long)1024))));} 

}



/* _open-input-gzip-port */
obj_t BGl__openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00(obj_t BgL_env1236z00_86, obj_t BgL_opt1235z00_85)
{
{ /* Ieee/port.scm 1096 */
{ /* Ieee/port.scm 1096 */
obj_t BgL_g1237z00_1725;
BgL_g1237z00_1725 = 
VECTOR_REF(BgL_opt1235z00_85,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1235z00_85)) { case ((long)1) : 

{ /* Ieee/port.scm 1096 */

{ /* Ieee/port.scm 1096 */
obj_t BgL_inz00_2539;
if(
INPUT_PORTP(BgL_g1237z00_1725))
{ /* Ieee/port.scm 1096 */
BgL_inz00_2539 = BgL_g1237z00_1725; }  else 
{ 
obj_t BgL_auxz00_6025;
BgL_auxz00_6025 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)48167)), BGl_string2871z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_g1237z00_1725); 
FAILURE(BgL_auxz00_6025,BFALSE,BFALSE);} 
return 
BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(BgL_inz00_2539, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2870z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(default_io_bufsiz)));} } break;case ((long)2) : 

{ /* Ieee/port.scm 1096 */
obj_t BgL_bufinfoz00_1730;
BgL_bufinfoz00_1730 = 
VECTOR_REF(BgL_opt1235z00_85,((long)1)); 
{ /* Ieee/port.scm 1096 */

{ /* Ieee/port.scm 1096 */
obj_t BgL_inz00_2541;
if(
INPUT_PORTP(BgL_g1237z00_1725))
{ /* Ieee/port.scm 1096 */
BgL_inz00_2541 = BgL_g1237z00_1725; }  else 
{ 
obj_t BgL_auxz00_6035;
BgL_auxz00_6035 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)48167)), BGl_string2871z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_g1237z00_1725); 
FAILURE(BgL_auxz00_6035,BFALSE,BFALSE);} 
return 
BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(BgL_inz00_2541, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2870z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_1730, 
(int)(default_io_bufsiz)));} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2869z00zz__r4_ports_6_10_1z00, BGl_string2867z00zz__r4_ports_6_10_1z00, 
BINT(
VECTOR_LENGTH(BgL_opt1235z00_85)));} } } } 

}



/* open-input-gzip-port */
BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2gza7ipzd2portz75zz__r4_ports_6_10_1z00(obj_t BgL_inz00_83, obj_t BgL_bufinfoz00_84)
{
{ /* Ieee/port.scm 1096 */
return 
BGl_portzd2ze3gza7ipzd2portz44zz__gunza7ipza7(BgL_inz00_83, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2870z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_84, 
(int)(default_io_bufsiz)));} 

}



/* open-input-c-string */
BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(char * BgL_stringz00_87)
{
{ /* Ieee/port.scm 1103 */
return 
bgl_open_input_c_string(BgL_stringz00_87);} 

}



/* &open-input-c-string */
obj_t BGl_z62openzd2inputzd2czd2stringzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3335, obj_t BgL_stringz00_3336)
{
{ /* Ieee/port.scm 1103 */
{ /* Ieee/port.scm 1104 */
char * BgL_auxz00_6051;
{ /* Ieee/port.scm 1104 */
obj_t BgL_tmpz00_6052;
if(
STRINGP(BgL_stringz00_3336))
{ /* Ieee/port.scm 1104 */
BgL_tmpz00_6052 = BgL_stringz00_3336
; }  else 
{ 
obj_t BgL_auxz00_6055;
BgL_auxz00_6055 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)48625)), BGl_string2872z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3336); 
FAILURE(BgL_auxz00_6055,BFALSE,BFALSE);} 
BgL_auxz00_6051 = 
BSTRING_TO_STRING(BgL_tmpz00_6052); } 
return 
BGl_openzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6051);} } 

}



/* reopen-input-c-string */
BGL_EXPORTED_DEF obj_t BGl_reopenzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_88, char * BgL_stringz00_89)
{
{ /* Ieee/port.scm 1109 */
return 
bgl_reopen_input_c_string(BgL_portz00_88, BgL_stringz00_89);} 

}



/* &reopen-input-c-string */
obj_t BGl_z62reopenzd2inputzd2czd2stringzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3337, obj_t BgL_portz00_3338, obj_t BgL_stringz00_3339)
{
{ /* Ieee/port.scm 1109 */
{ /* Ieee/port.scm 1110 */
char * BgL_auxz00_6069;obj_t BgL_auxz00_6062;
{ /* Ieee/port.scm 1110 */
obj_t BgL_tmpz00_6070;
if(
STRINGP(BgL_stringz00_3339))
{ /* Ieee/port.scm 1110 */
BgL_tmpz00_6070 = BgL_stringz00_3339
; }  else 
{ 
obj_t BgL_auxz00_6073;
BgL_auxz00_6073 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)48945)), BGl_string2873z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3339); 
FAILURE(BgL_auxz00_6073,BFALSE,BFALSE);} 
BgL_auxz00_6069 = 
BSTRING_TO_STRING(BgL_tmpz00_6070); } 
if(
INPUT_PORTP(BgL_portz00_3338))
{ /* Ieee/port.scm 1110 */
BgL_auxz00_6062 = BgL_portz00_3338
; }  else 
{ 
obj_t BgL_auxz00_6065;
BgL_auxz00_6065 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)48945)), BGl_string2873z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3338); 
FAILURE(BgL_auxz00_6065,BFALSE,BFALSE);} 
return 
BGl_reopenzd2inputzd2czd2stringzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6062, BgL_auxz00_6069);} } 

}



/* input-port-timeout-set! */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_portz00_90, long BgL_timeoutz00_91)
{
{ /* Ieee/port.scm 1115 */
return 
BBOOL(
bgl_input_port_timeout_set(BgL_portz00_90, BgL_timeoutz00_91));} 

}



/* &input-port-timeout-set! */
obj_t BGl_z62inputzd2portzd2timeoutzd2setz12za2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3340, obj_t BgL_portz00_3341, obj_t BgL_timeoutz00_3342)
{
{ /* Ieee/port.scm 1115 */
{ /* Ieee/port.scm 1116 */
long BgL_auxz00_6088;obj_t BgL_auxz00_6081;
{ /* Ieee/port.scm 1116 */
obj_t BgL_tmpz00_6089;
if(
INTEGERP(BgL_timeoutz00_3342))
{ /* Ieee/port.scm 1116 */
BgL_tmpz00_6089 = BgL_timeoutz00_3342
; }  else 
{ 
obj_t BgL_auxz00_6092;
BgL_auxz00_6092 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)49281)), BGl_string2874z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_timeoutz00_3342); 
FAILURE(BgL_auxz00_6092,BFALSE,BFALSE);} 
BgL_auxz00_6088 = 
(long)CINT(BgL_tmpz00_6089); } 
if(
INPUT_PORTP(BgL_portz00_3341))
{ /* Ieee/port.scm 1116 */
BgL_auxz00_6081 = BgL_portz00_3341
; }  else 
{ 
obj_t BgL_auxz00_6084;
BgL_auxz00_6084 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)49281)), BGl_string2874z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3341); 
FAILURE(BgL_auxz00_6084,BFALSE,BFALSE);} 
return 
BGl_inputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(BgL_auxz00_6081, BgL_auxz00_6088);} } 

}



/* _open-output-file */
obj_t BGl__openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t BgL_env1241z00_95, obj_t BgL_opt1240z00_94)
{
{ /* Ieee/port.scm 1121 */
{ /* Ieee/port.scm 1121 */
obj_t BgL_g1242z00_1733;
BgL_g1242z00_1733 = 
VECTOR_REF(BgL_opt1240z00_94,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1240z00_94)) { case ((long)1) : 

{ /* Ieee/port.scm 1121 */

{ /* Ieee/port.scm 1121 */
obj_t BgL_stringz00_2544;
if(
STRINGP(BgL_g1242z00_1733))
{ /* Ieee/port.scm 1121 */
BgL_stringz00_2544 = BgL_g1242z00_1733; }  else 
{ 
obj_t BgL_auxz00_6101;
BgL_auxz00_6101 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)49545)), BGl_string2876z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_g1242z00_1733); 
FAILURE(BgL_auxz00_6101,BFALSE,BFALSE);} 
return 
bgl_open_output_file(BgL_stringz00_2544, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2734z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(default_io_bufsiz)));} } break;case ((long)2) : 

{ /* Ieee/port.scm 1121 */
obj_t BgL_bufinfoz00_1738;
BgL_bufinfoz00_1738 = 
VECTOR_REF(BgL_opt1240z00_94,((long)1)); 
{ /* Ieee/port.scm 1121 */

{ /* Ieee/port.scm 1121 */
obj_t BgL_stringz00_2546;
if(
STRINGP(BgL_g1242z00_1733))
{ /* Ieee/port.scm 1121 */
BgL_stringz00_2546 = BgL_g1242z00_1733; }  else 
{ 
obj_t BgL_auxz00_6111;
BgL_auxz00_6111 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)49545)), BGl_string2876z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_g1242z00_1733); 
FAILURE(BgL_auxz00_6111,BFALSE,BFALSE);} 
return 
bgl_open_output_file(BgL_stringz00_2546, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2734z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_1738, 
(int)(default_io_bufsiz)));} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2875z00zz__r4_ports_6_10_1z00, BGl_string2867z00zz__r4_ports_6_10_1z00, 
BINT(
VECTOR_LENGTH(BgL_opt1240z00_94)));} } } } 

}



/* open-output-file */
BGL_EXPORTED_DEF obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_92, obj_t BgL_bufinfoz00_93)
{
{ /* Ieee/port.scm 1121 */
return 
bgl_open_output_file(BgL_stringz00_92, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2734z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_93, 
(int)(default_io_bufsiz)));} 

}



/* _append-output-file */
obj_t BGl__appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t BgL_env1246z00_99, obj_t BgL_opt1245z00_98)
{
{ /* Ieee/port.scm 1128 */
{ /* Ieee/port.scm 1128 */
obj_t BgL_g1247z00_1741;
BgL_g1247z00_1741 = 
VECTOR_REF(BgL_opt1245z00_98,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1245z00_98)) { case ((long)1) : 

{ /* Ieee/port.scm 1128 */

{ /* Ieee/port.scm 1128 */
obj_t BgL_stringz00_2549;
if(
STRINGP(BgL_g1247z00_1741))
{ /* Ieee/port.scm 1128 */
BgL_stringz00_2549 = BgL_g1247z00_1741; }  else 
{ 
obj_t BgL_auxz00_6129;
BgL_auxz00_6129 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)49946)), BGl_string2878z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_g1247z00_1741); 
FAILURE(BgL_auxz00_6129,BFALSE,BFALSE);} 
return 
bgl_append_output_file(BgL_stringz00_2549, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2740z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(default_io_bufsiz)));} } break;case ((long)2) : 

{ /* Ieee/port.scm 1128 */
obj_t BgL_bufinfoz00_1746;
BgL_bufinfoz00_1746 = 
VECTOR_REF(BgL_opt1245z00_98,((long)1)); 
{ /* Ieee/port.scm 1128 */

{ /* Ieee/port.scm 1128 */
obj_t BgL_stringz00_2551;
if(
STRINGP(BgL_g1247z00_1741))
{ /* Ieee/port.scm 1128 */
BgL_stringz00_2551 = BgL_g1247z00_1741; }  else 
{ 
obj_t BgL_auxz00_6139;
BgL_auxz00_6139 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)49946)), BGl_string2878z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_g1247z00_1741); 
FAILURE(BgL_auxz00_6139,BFALSE,BFALSE);} 
return 
bgl_append_output_file(BgL_stringz00_2551, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2740z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_1746, 
(int)(default_io_bufsiz)));} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2877z00zz__r4_ports_6_10_1z00, BGl_string2867z00zz__r4_ports_6_10_1z00, 
BINT(
VECTOR_LENGTH(BgL_opt1245z00_98)));} } } } 

}



/* append-output-file */
BGL_EXPORTED_DEF obj_t BGl_appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_96, obj_t BgL_bufinfoz00_97)
{
{ /* Ieee/port.scm 1128 */
return 
bgl_append_output_file(BgL_stringz00_96, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2740z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_97, 
(int)(default_io_bufsiz)));} 

}



/* _open-output-string */
obj_t BGl__openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t BgL_env1251z00_102, obj_t BgL_opt1250z00_101)
{
{ /* Ieee/port.scm 1135 */
{ /* Ieee/port.scm 1135 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1250z00_101)) { case ((long)0) : 

{ /* Ieee/port.scm 1135 */

return 
bgl_open_output_string(
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2734z00zz__r4_ports_6_10_1z00, BTRUE, 
(int)(((long)128))));} break;case ((long)1) : 

{ /* Ieee/port.scm 1135 */
obj_t BgL_bufinfoz00_1753;
BgL_bufinfoz00_1753 = 
VECTOR_REF(BgL_opt1250z00_101,((long)0)); 
{ /* Ieee/port.scm 1135 */

return 
bgl_open_output_string(
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2734z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_1753, 
(int)(((long)128))));} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2879z00zz__r4_ports_6_10_1z00, BGl_string2881z00zz__r4_ports_6_10_1z00, 
BINT(
VECTOR_LENGTH(BgL_opt1250z00_101)));} } } } 

}



/* open-output-string */
BGL_EXPORTED_DEF obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t BgL_bufinfoz00_100)
{
{ /* Ieee/port.scm 1135 */
return 
bgl_open_output_string(
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2734z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_100, 
(int)(((long)128))));} 

}



/* _open-output-procedure */
obj_t BGl__openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t BgL_env1255z00_108, obj_t BgL_opt1254z00_107)
{
{ /* Ieee/port.scm 1142 */
{ /* Ieee/port.scm 1142 */
obj_t BgL_g1256z00_1756;
BgL_g1256z00_1756 = 
VECTOR_REF(BgL_opt1254z00_107,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1254z00_107)) { case ((long)1) : 

{ /* Ieee/port.scm 1142 */

{ /* Ieee/port.scm 1142 */
obj_t BgL_auxz00_6170;
if(
PROCEDUREP(BgL_g1256z00_1756))
{ /* Ieee/port.scm 1142 */
BgL_auxz00_6170 = BgL_g1256z00_1756
; }  else 
{ 
obj_t BgL_auxz00_6173;
BgL_auxz00_6173 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)50728)), BGl_string2887z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_g1256z00_1756); 
FAILURE(BgL_auxz00_6173,BFALSE,BFALSE);} 
return 
BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(BgL_auxz00_6170, BGl_proc2885z00zz__r4_ports_6_10_1z00, BTRUE, BGl_proc2886z00zz__r4_ports_6_10_1z00);} } break;case ((long)2) : 

{ /* Ieee/port.scm 1142 */
obj_t BgL_flushz00_1767;
BgL_flushz00_1767 = 
VECTOR_REF(BgL_opt1254z00_107,((long)1)); 
{ /* Ieee/port.scm 1142 */

{ /* Ieee/port.scm 1142 */
obj_t BgL_auxz00_6186;obj_t BgL_auxz00_6179;
if(
PROCEDUREP(BgL_flushz00_1767))
{ /* Ieee/port.scm 1142 */
BgL_auxz00_6186 = BgL_flushz00_1767
; }  else 
{ 
obj_t BgL_auxz00_6189;
BgL_auxz00_6189 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)50728)), BGl_string2887z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_flushz00_1767); 
FAILURE(BgL_auxz00_6189,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_g1256z00_1756))
{ /* Ieee/port.scm 1142 */
BgL_auxz00_6179 = BgL_g1256z00_1756
; }  else 
{ 
obj_t BgL_auxz00_6182;
BgL_auxz00_6182 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)50728)), BGl_string2887z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_g1256z00_1756); 
FAILURE(BgL_auxz00_6182,BFALSE,BFALSE);} 
return 
BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(BgL_auxz00_6179, BgL_auxz00_6186, BTRUE, BGl_proc2888z00zz__r4_ports_6_10_1z00);} } } break;case ((long)3) : 

{ /* Ieee/port.scm 1142 */
obj_t BgL_flushz00_1772;
BgL_flushz00_1772 = 
VECTOR_REF(BgL_opt1254z00_107,((long)1)); 
{ /* Ieee/port.scm 1142 */
obj_t BgL_bufinfoz00_1773;
BgL_bufinfoz00_1773 = 
VECTOR_REF(BgL_opt1254z00_107,((long)2)); 
{ /* Ieee/port.scm 1142 */

{ /* Ieee/port.scm 1142 */
obj_t BgL_auxz00_6203;obj_t BgL_auxz00_6196;
if(
PROCEDUREP(BgL_flushz00_1772))
{ /* Ieee/port.scm 1142 */
BgL_auxz00_6203 = BgL_flushz00_1772
; }  else 
{ 
obj_t BgL_auxz00_6206;
BgL_auxz00_6206 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)50728)), BGl_string2887z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_flushz00_1772); 
FAILURE(BgL_auxz00_6206,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_g1256z00_1756))
{ /* Ieee/port.scm 1142 */
BgL_auxz00_6196 = BgL_g1256z00_1756
; }  else 
{ 
obj_t BgL_auxz00_6199;
BgL_auxz00_6199 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)50728)), BGl_string2887z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_g1256z00_1756); 
FAILURE(BgL_auxz00_6199,BFALSE,BFALSE);} 
return 
BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(BgL_auxz00_6196, BgL_auxz00_6203, BgL_bufinfoz00_1773, BGl_proc2889z00zz__r4_ports_6_10_1z00);} } } } break;case ((long)4) : 

{ /* Ieee/port.scm 1142 */
obj_t BgL_flushz00_1777;
BgL_flushz00_1777 = 
VECTOR_REF(BgL_opt1254z00_107,((long)1)); 
{ /* Ieee/port.scm 1142 */
obj_t BgL_bufinfoz00_1778;
BgL_bufinfoz00_1778 = 
VECTOR_REF(BgL_opt1254z00_107,((long)2)); 
{ /* Ieee/port.scm 1142 */
obj_t BgL_closez00_1779;
BgL_closez00_1779 = 
VECTOR_REF(BgL_opt1254z00_107,((long)3)); 
{ /* Ieee/port.scm 1142 */

{ /* Ieee/port.scm 1142 */
obj_t BgL_auxz00_6228;obj_t BgL_auxz00_6221;obj_t BgL_auxz00_6214;
if(
PROCEDUREP(BgL_closez00_1779))
{ /* Ieee/port.scm 1142 */
BgL_auxz00_6228 = BgL_closez00_1779
; }  else 
{ 
obj_t BgL_auxz00_6231;
BgL_auxz00_6231 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)50728)), BGl_string2887z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_closez00_1779); 
FAILURE(BgL_auxz00_6231,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_flushz00_1777))
{ /* Ieee/port.scm 1142 */
BgL_auxz00_6221 = BgL_flushz00_1777
; }  else 
{ 
obj_t BgL_auxz00_6224;
BgL_auxz00_6224 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)50728)), BGl_string2887z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_flushz00_1777); 
FAILURE(BgL_auxz00_6224,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_g1256z00_1756))
{ /* Ieee/port.scm 1142 */
BgL_auxz00_6214 = BgL_g1256z00_1756
; }  else 
{ 
obj_t BgL_auxz00_6217;
BgL_auxz00_6217 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)50728)), BGl_string2887z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_g1256z00_1756); 
FAILURE(BgL_auxz00_6217,BFALSE,BFALSE);} 
return 
BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(BgL_auxz00_6214, BgL_auxz00_6221, BgL_bufinfoz00_1778, BgL_auxz00_6228);} } } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2882z00zz__r4_ports_6_10_1z00, BGl_string2884z00zz__r4_ports_6_10_1z00, 
BINT(
VECTOR_LENGTH(BgL_opt1254z00_107)));} } } } 

}



/* &close2155 */
obj_t BGl_z62close2155z62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3347)
{
{ /* Ieee/port.scm 1146 */
return 
BBOOL(((bool_t)0));} 

}



/* &close2156 */
obj_t BGl_z62close2156z62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3348)
{
{ /* Ieee/port.scm 1146 */
return 
BBOOL(((bool_t)0));} 

}



/* &close2157 */
obj_t BGl_z62close2157z62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3349)
{
{ /* Ieee/port.scm 1146 */
return 
BBOOL(((bool_t)0));} 

}



/* &flush2158 */
obj_t BGl_z62flush2158z62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3350)
{
{ /* Ieee/port.scm 1144 */
return 
BBOOL(((bool_t)0));} 

}



/* open-output-procedure */
BGL_EXPORTED_DEF obj_t BGl_openzd2outputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t BgL_procz00_103, obj_t BgL_flushz00_104, obj_t BgL_bufinfoz00_105, obj_t BgL_closez00_106)
{
{ /* Ieee/port.scm 1142 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_103, 
(int)(((long)1))))
{ /* Ieee/port.scm 1153 */
bool_t BgL_test3570z00_6248;
if(
PROCEDURE_CORRECT_ARITYP(BgL_flushz00_104, 
(int)(((long)0))))
{ /* Ieee/port.scm 1154 */
BgL_test3570z00_6248 = ((bool_t)0)
; }  else 
{ /* Ieee/port.scm 1154 */
BgL_test3570z00_6248 = ((bool_t)1)
; } 
if(BgL_test3570z00_6248)
{ /* Ieee/port.scm 1153 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_string2883z00zz__r4_ports_6_10_1z00, BGl_string2890z00zz__r4_ports_6_10_1z00, BgL_flushz00_104);}  else 
{ /* Ieee/port.scm 1159 */
bool_t BgL_test3572z00_6253;
if(
PROCEDURE_CORRECT_ARITYP(BgL_closez00_106, 
(int)(((long)0))))
{ /* Ieee/port.scm 1160 */
BgL_test3572z00_6253 = ((bool_t)0)
; }  else 
{ /* Ieee/port.scm 1160 */
BgL_test3572z00_6253 = ((bool_t)1)
; } 
if(BgL_test3572z00_6253)
{ /* Ieee/port.scm 1159 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_string2883z00zz__r4_ports_6_10_1z00, BGl_string2891z00zz__r4_ports_6_10_1z00, BgL_flushz00_104);}  else 
{ /* Ieee/port.scm 1159 */
return 
bgl_open_output_procedure(BgL_procz00_103, BgL_flushz00_104, BgL_closez00_106, 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2883z00zz__r4_ports_6_10_1z00, BgL_bufinfoz00_105, 
(int)(((long)128))));} } }  else 
{ /* Ieee/port.scm 1148 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_string2883z00zz__r4_ports_6_10_1z00, BGl_string2892z00zz__r4_ports_6_10_1z00, BgL_procz00_103);} } 

}



/* output-port-timeout-set! */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_portz00_109, long BgL_timeoutz00_110)
{
{ /* Ieee/port.scm 1172 */
return 
BBOOL(
bgl_output_port_timeout_set(BgL_portz00_109, BgL_timeoutz00_110));} 

}



/* &output-port-timeout-set! */
obj_t BGl_z62outputzd2portzd2timeoutzd2setz12za2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3351, obj_t BgL_portz00_3352, obj_t BgL_timeoutz00_3353)
{
{ /* Ieee/port.scm 1172 */
{ /* Ieee/port.scm 1173 */
long BgL_auxz00_6271;obj_t BgL_auxz00_6264;
{ /* Ieee/port.scm 1173 */
obj_t BgL_tmpz00_6272;
if(
INTEGERP(BgL_timeoutz00_3353))
{ /* Ieee/port.scm 1173 */
BgL_tmpz00_6272 = BgL_timeoutz00_3353
; }  else 
{ 
obj_t BgL_auxz00_6275;
BgL_auxz00_6275 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)51825)), BGl_string2893z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_timeoutz00_3353); 
FAILURE(BgL_auxz00_6275,BFALSE,BFALSE);} 
BgL_auxz00_6271 = 
(long)CINT(BgL_tmpz00_6272); } 
if(
OUTPUT_PORTP(BgL_portz00_3352))
{ /* Ieee/port.scm 1173 */
BgL_auxz00_6264 = BgL_portz00_3352
; }  else 
{ 
obj_t BgL_auxz00_6267;
BgL_auxz00_6267 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)51825)), BGl_string2893z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3352); 
FAILURE(BgL_auxz00_6267,BFALSE,BFALSE);} 
return 
BGl_outputzd2portzd2timeoutzd2setz12zc0zz__r4_ports_6_10_1z00(BgL_auxz00_6264, BgL_auxz00_6271);} } 

}



/* closed-input-port? */
BGL_EXPORTED_DEF bool_t BGl_closedzd2inputzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_portz00_111)
{
{ /* Ieee/port.scm 1178 */
return 
INPUT_PORT_CLOSEP(BgL_portz00_111);} 

}



/* &closed-input-port? */
obj_t BGl_z62closedzd2inputzd2portzf3z91zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3354, obj_t BgL_portz00_3355)
{
{ /* Ieee/port.scm 1178 */
{ /* Ieee/port.scm 1179 */
bool_t BgL_tmpz00_6282;
{ /* Ieee/port.scm 1179 */
obj_t BgL_auxz00_6283;
if(
INPUT_PORTP(BgL_portz00_3355))
{ /* Ieee/port.scm 1179 */
BgL_auxz00_6283 = BgL_portz00_3355
; }  else 
{ 
obj_t BgL_auxz00_6286;
BgL_auxz00_6286 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)52134)), BGl_string2894z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3355); 
FAILURE(BgL_auxz00_6286,BFALSE,BFALSE);} 
BgL_tmpz00_6282 = 
BGl_closedzd2inputzd2portzf3zf3zz__r4_ports_6_10_1z00(BgL_auxz00_6283); } 
return 
BBOOL(BgL_tmpz00_6282);} } 

}



/* close-input-port */
BGL_EXPORTED_DEF obj_t BGl_closezd2inputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_112)
{
{ /* Ieee/port.scm 1184 */
return 
bgl_close_input_port(BgL_portz00_112);} 

}



/* &close-input-port */
obj_t BGl_z62closezd2inputzd2portz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3356, obj_t BgL_portz00_3357)
{
{ /* Ieee/port.scm 1184 */
{ /* Ieee/port.scm 1185 */
obj_t BgL_auxz00_6293;
if(
INPUT_PORTP(BgL_portz00_3357))
{ /* Ieee/port.scm 1185 */
BgL_auxz00_6293 = BgL_portz00_3357
; }  else 
{ 
obj_t BgL_auxz00_6296;
BgL_auxz00_6296 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)52428)), BGl_string2895z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3357); 
FAILURE(BgL_auxz00_6296,BFALSE,BFALSE);} 
return 
BGl_closezd2inputzd2portz00zz__r4_ports_6_10_1z00(BgL_auxz00_6293);} } 

}



/* get-output-string */
BGL_EXPORTED_DEF obj_t BGl_getzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_113)
{
{ /* Ieee/port.scm 1190 */
return 
get_output_string(BgL_portz00_113);} 

}



/* &get-output-string */
obj_t BGl_z62getzd2outputzd2stringz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3358, obj_t BgL_portz00_3359)
{
{ /* Ieee/port.scm 1190 */
{ /* Ieee/port.scm 1191 */
obj_t BgL_auxz00_6302;
if(
OUTPUT_PORTP(BgL_portz00_3359))
{ /* Ieee/port.scm 1191 */
BgL_auxz00_6302 = BgL_portz00_3359
; }  else 
{ 
obj_t BgL_auxz00_6305;
BgL_auxz00_6305 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)52720)), BGl_string2896z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3359); 
FAILURE(BgL_auxz00_6305,BFALSE,BFALSE);} 
return 
BGl_getzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BgL_auxz00_6302);} } 

}



/* close-output-port */
BGL_EXPORTED_DEF obj_t BGl_closezd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_114)
{
{ /* Ieee/port.scm 1196 */
return 
bgl_close_output_port(BgL_portz00_114);} 

}



/* &close-output-port */
obj_t BGl_z62closezd2outputzd2portz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3360, obj_t BgL_portz00_3361)
{
{ /* Ieee/port.scm 1196 */
{ /* Ieee/port.scm 1197 */
obj_t BgL_auxz00_6311;
if(
OUTPUT_PORTP(BgL_portz00_3361))
{ /* Ieee/port.scm 1197 */
BgL_auxz00_6311 = BgL_portz00_3361
; }  else 
{ 
obj_t BgL_auxz00_6314;
BgL_auxz00_6314 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)53014)), BGl_string2897z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3361); 
FAILURE(BgL_auxz00_6314,BFALSE,BFALSE);} 
return 
BGl_closezd2outputzd2portz00zz__r4_ports_6_10_1z00(BgL_auxz00_6311);} } 

}



/* flush-output-port */
BGL_EXPORTED_DEF obj_t BGl_flushzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_115)
{
{ /* Ieee/port.scm 1202 */
return 
bgl_flush_output_port(BgL_portz00_115);} 

}



/* &flush-output-port */
obj_t BGl_z62flushzd2outputzd2portz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3362, obj_t BgL_portz00_3363)
{
{ /* Ieee/port.scm 1202 */
{ /* Ieee/port.scm 1203 */
obj_t BgL_auxz00_6320;
if(
OUTPUT_PORTP(BgL_portz00_3363))
{ /* Ieee/port.scm 1203 */
BgL_auxz00_6320 = BgL_portz00_3363
; }  else 
{ 
obj_t BgL_auxz00_6323;
BgL_auxz00_6323 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)53307)), BGl_string2898z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3363); 
FAILURE(BgL_auxz00_6323,BFALSE,BFALSE);} 
return 
BGl_flushzd2outputzd2portz00zz__r4_ports_6_10_1z00(BgL_auxz00_6320);} } 

}



/* reset-output-port */
BGL_EXPORTED_DEF obj_t BGl_resetzd2outputzd2portz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_116)
{
{ /* Ieee/port.scm 1208 */
bgl_reset_output_port_error(BgL_portz00_116); 
if(
BGL_OUTPUT_STRING_PORTP(BgL_portz00_116))
{ /* Ieee/port.scm 1210 */
return 
bgl_reset_output_string_port(BgL_portz00_116);}  else 
{ /* Ieee/port.scm 1210 */
return 
bgl_flush_output_port(BgL_portz00_116);} } 

}



/* &reset-output-port */
obj_t BGl_z62resetzd2outputzd2portz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3364, obj_t BgL_portz00_3365)
{
{ /* Ieee/port.scm 1208 */
{ /* Ieee/port.scm 1209 */
obj_t BgL_auxz00_6333;
if(
OUTPUT_PORTP(BgL_portz00_3365))
{ /* Ieee/port.scm 1209 */
BgL_auxz00_6333 = BgL_portz00_3365
; }  else 
{ 
obj_t BgL_auxz00_6336;
BgL_auxz00_6336 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)53631)), BGl_string2899z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3365); 
FAILURE(BgL_auxz00_6336,BFALSE,BFALSE);} 
return 
BGl_resetzd2outputzd2portz00zz__r4_ports_6_10_1z00(BgL_auxz00_6333);} } 

}



/* reset-eof */
BGL_EXPORTED_DEF bool_t BGl_resetzd2eofzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_117)
{
{ /* Ieee/port.scm 1217 */
return 
reset_eof(BgL_portz00_117);} 

}



/* &reset-eof */
obj_t BGl_z62resetzd2eofzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3366, obj_t BgL_portz00_3367)
{
{ /* Ieee/port.scm 1217 */
{ /* Ieee/port.scm 1218 */
bool_t BgL_tmpz00_6342;
{ /* Ieee/port.scm 1218 */
obj_t BgL_auxz00_6343;
if(
INPUT_PORTP(BgL_portz00_3367))
{ /* Ieee/port.scm 1218 */
BgL_auxz00_6343 = BgL_portz00_3367
; }  else 
{ 
obj_t BgL_auxz00_6346;
BgL_auxz00_6346 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)54001)), BGl_string2900z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3367); 
FAILURE(BgL_auxz00_6346,BFALSE,BFALSE);} 
BgL_tmpz00_6342 = 
BGl_resetzd2eofzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6343); } 
return 
BBOOL(BgL_tmpz00_6342);} } 

}



/* set-input-port-position! */
BGL_EXPORTED_DEF obj_t BGl_setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_portz00_118, long BgL_posz00_119)
{
{ /* Ieee/port.scm 1223 */
{ /* Ieee/port.scm 1224 */
obj_t BgL_useekz00_2563;
BgL_useekz00_2563 = 
BGL_INPUT_PORT_USEEK(BgL_portz00_118); 
if(
PROCEDUREP(BgL_useekz00_2563))
{ /* Ieee/port.scm 1225 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_useekz00_2563, ((long)2)))
{ /* Ieee/port.scm 1226 */
PROCEDURE_ENTRY(BgL_useekz00_2563)(BgL_useekz00_2563, BgL_portz00_118, 
BINT(BgL_posz00_119), BEOA); }  else 
{ /* Ieee/port.scm 1226 */
FAILURE(BGl_string2901z00zz__r4_ports_6_10_1z00,BGl_list2902z00zz__r4_ports_6_10_1z00,BgL_useekz00_2563);} }  else 
{ /* Ieee/port.scm 1225 */
bgl_input_port_seek(BgL_portz00_118, BgL_posz00_119); BUNSPEC; } } 
return BUNSPEC;} 

}



/* &set-input-port-position! */
obj_t BGl_z62setzd2inputzd2portzd2positionz12za2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3368, obj_t BgL_portz00_3369, obj_t BgL_posz00_3370)
{
{ /* Ieee/port.scm 1223 */
{ /* Ieee/port.scm 1227 */
long BgL_auxz00_6372;obj_t BgL_auxz00_6365;
{ /* Ieee/port.scm 1227 */
obj_t BgL_tmpz00_6373;
if(
INTEGERP(BgL_posz00_3370))
{ /* Ieee/port.scm 1227 */
BgL_tmpz00_6373 = BgL_posz00_3370
; }  else 
{ 
obj_t BgL_auxz00_6376;
BgL_auxz00_6376 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)54438)), BGl_string2907z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_posz00_3370); 
FAILURE(BgL_auxz00_6376,BFALSE,BFALSE);} 
BgL_auxz00_6372 = 
(long)CINT(BgL_tmpz00_6373); } 
if(
INPUT_PORTP(BgL_portz00_3369))
{ /* Ieee/port.scm 1227 */
BgL_auxz00_6365 = BgL_portz00_3369
; }  else 
{ 
obj_t BgL_auxz00_6368;
BgL_auxz00_6368 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)54438)), BGl_string2907z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3369); 
FAILURE(BgL_auxz00_6368,BFALSE,BFALSE);} 
return 
BGl_setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(BgL_auxz00_6365, BgL_auxz00_6372);} } 

}



/* input-port-position */
BGL_EXPORTED_DEF long BGl_inputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_120)
{
{ /* Ieee/port.scm 1233 */
return 
INPUT_PORT_FILEPOS(BgL_portz00_120);} 

}



/* &input-port-position */
obj_t BGl_z62inputzd2portzd2positionz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3371, obj_t BgL_portz00_3372)
{
{ /* Ieee/port.scm 1233 */
{ /* Ieee/port.scm 1234 */
long BgL_tmpz00_6383;
{ /* Ieee/port.scm 1234 */
obj_t BgL_auxz00_6384;
if(
INPUT_PORTP(BgL_portz00_3372))
{ /* Ieee/port.scm 1234 */
BgL_auxz00_6384 = BgL_portz00_3372
; }  else 
{ 
obj_t BgL_auxz00_6387;
BgL_auxz00_6387 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)54728)), BGl_string2908z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3372); 
FAILURE(BgL_auxz00_6387,BFALSE,BFALSE);} 
BgL_tmpz00_6383 = 
BGl_inputzd2portzd2positionz00zz__r4_ports_6_10_1z00(BgL_auxz00_6384); } 
return 
BINT(BgL_tmpz00_6383);} } 

}



/* input-port-fill-barrier */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2fillzd2barrierzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_121)
{
{ /* Ieee/port.scm 1239 */
return 
BINT(
INPUT_PORT_FILLBARRIER(BgL_portz00_121));} 

}



/* &input-port-fill-barrier */
obj_t BGl_z62inputzd2portzd2fillzd2barrierzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3373, obj_t BgL_portz00_3374)
{
{ /* Ieee/port.scm 1239 */
{ /* Ieee/port.scm 1240 */
obj_t BgL_auxz00_6395;
if(
INPUT_PORTP(BgL_portz00_3374))
{ /* Ieee/port.scm 1240 */
BgL_auxz00_6395 = BgL_portz00_3374
; }  else 
{ 
obj_t BgL_auxz00_6398;
BgL_auxz00_6398 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)55042)), BGl_string2909z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3374); 
FAILURE(BgL_auxz00_6398,BFALSE,BFALSE);} 
return 
BGl_inputzd2portzd2fillzd2barrierzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6395);} } 

}



/* input-port-fill-barrier-set! */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2fillzd2barrierzd2setz12z12zz__r4_ports_6_10_1z00(obj_t BgL_portz00_122, long BgL_posz00_123)
{
{ /* Ieee/port.scm 1245 */
INPUT_PORT_FILLBARRIER_SET(BgL_portz00_122, BgL_posz00_123); BUNSPEC; 
return 
BINT(BgL_posz00_123);} 

}



/* &input-port-fill-barrier-set! */
obj_t BGl_z62inputzd2portzd2fillzd2barrierzd2setz12z70zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3375, obj_t BgL_portz00_3376, obj_t BgL_posz00_3377)
{
{ /* Ieee/port.scm 1245 */
{ /* Ieee/port.scm 1246 */
long BgL_auxz00_6412;obj_t BgL_auxz00_6405;
{ /* Ieee/port.scm 1246 */
obj_t BgL_tmpz00_6413;
if(
INTEGERP(BgL_posz00_3377))
{ /* Ieee/port.scm 1246 */
BgL_tmpz00_6413 = BgL_posz00_3377
; }  else 
{ 
obj_t BgL_auxz00_6416;
BgL_auxz00_6416 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)55416)), BGl_string2910z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_posz00_3377); 
FAILURE(BgL_auxz00_6416,BFALSE,BFALSE);} 
BgL_auxz00_6412 = 
(long)CINT(BgL_tmpz00_6413); } 
if(
INPUT_PORTP(BgL_portz00_3376))
{ /* Ieee/port.scm 1246 */
BgL_auxz00_6405 = BgL_portz00_3376
; }  else 
{ 
obj_t BgL_auxz00_6408;
BgL_auxz00_6408 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)55416)), BGl_string2910z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3376); 
FAILURE(BgL_auxz00_6408,BFALSE,BFALSE);} 
return 
BGl_inputzd2portzd2fillzd2barrierzd2setz12z12zz__r4_ports_6_10_1z00(BgL_auxz00_6405, BgL_auxz00_6412);} } 

}



/* input-port-last-token-position */
BGL_EXPORTED_DEF long BGl_inputzd2portzd2lastzd2tokenzd2positionz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_124)
{
{ /* Ieee/port.scm 1252 */
{ /* Ieee/port.scm 1253 */
long BgL_tmpz00_6422;
BgL_tmpz00_6422 = 
INPUT_PORT_TOKENPOS(BgL_portz00_124); 
return 
(long)(BgL_tmpz00_6422);} } 

}



/* &input-port-last-token-position */
obj_t BGl_z62inputzd2portzd2lastzd2tokenzd2positionz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3378, obj_t BgL_portz00_3379)
{
{ /* Ieee/port.scm 1252 */
{ /* Ieee/port.scm 1253 */
long BgL_tmpz00_6425;
{ /* Ieee/port.scm 1253 */
obj_t BgL_auxz00_6426;
if(
INPUT_PORTP(BgL_portz00_3379))
{ /* Ieee/port.scm 1253 */
BgL_auxz00_6426 = BgL_portz00_3379
; }  else 
{ 
obj_t BgL_auxz00_6429;
BgL_auxz00_6429 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)55708)), BGl_string2911z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3379); 
FAILURE(BgL_auxz00_6429,BFALSE,BFALSE);} 
BgL_tmpz00_6425 = 
BGl_inputzd2portzd2lastzd2tokenzd2positionz00zz__r4_ports_6_10_1z00(BgL_auxz00_6426); } 
return 
BINT(BgL_tmpz00_6425);} } 

}



/* output-port-name */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_125)
{
{ /* Ieee/port.scm 1258 */
return 
OUTPUT_PORT_NAME(BgL_portz00_125);} 

}



/* &output-port-name */
obj_t BGl_z62outputzd2portzd2namez62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3380, obj_t BgL_portz00_3381)
{
{ /* Ieee/port.scm 1258 */
{ /* Ieee/port.scm 1259 */
obj_t BgL_auxz00_6436;
if(
OUTPUT_PORTP(BgL_portz00_3381))
{ /* Ieee/port.scm 1259 */
BgL_auxz00_6436 = BgL_portz00_3381
; }  else 
{ 
obj_t BgL_auxz00_6439;
BgL_auxz00_6439 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)56014)), BGl_string2912z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3381); 
FAILURE(BgL_auxz00_6439,BFALSE,BFALSE);} 
return 
BGl_outputzd2portzd2namez00zz__r4_ports_6_10_1z00(BgL_auxz00_6436);} } 

}



/* output-port-name-set! */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2namezd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_portz00_126, obj_t BgL_namez00_127)
{
{ /* Ieee/port.scm 1264 */
OUTPUT_PORT_NAME_SET(BgL_portz00_126, BgL_namez00_127); 
return BUNSPEC;} 

}



/* &output-port-name-set! */
obj_t BGl_z62outputzd2portzd2namezd2setz12za2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3382, obj_t BgL_portz00_3383, obj_t BgL_namez00_3384)
{
{ /* Ieee/port.scm 1264 */
{ /* Ieee/port.scm 1264 */
obj_t BgL_auxz00_6452;obj_t BgL_auxz00_6445;
if(
STRINGP(BgL_namez00_3384))
{ /* Ieee/port.scm 1264 */
BgL_auxz00_6452 = BgL_namez00_3384
; }  else 
{ 
obj_t BgL_auxz00_6455;
BgL_auxz00_6455 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)56263)), BGl_string2913z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_namez00_3384); 
FAILURE(BgL_auxz00_6455,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_portz00_3383))
{ /* Ieee/port.scm 1264 */
BgL_auxz00_6445 = BgL_portz00_3383
; }  else 
{ 
obj_t BgL_auxz00_6448;
BgL_auxz00_6448 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)56263)), BGl_string2913z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3383); 
FAILURE(BgL_auxz00_6448,BFALSE,BFALSE);} 
return 
BGl_outputzd2portzd2namezd2setz12zc0zz__r4_ports_6_10_1z00(BgL_auxz00_6445, BgL_auxz00_6452);} } 

}



/* set-output-port-position! */
BGL_EXPORTED_DEF obj_t BGl_setzd2outputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_portz00_128, long BgL_posz00_129)
{
{ /* Ieee/port.scm 1270 */
if(
CBOOL(
bgl_output_port_seek(BgL_portz00_128, BgL_posz00_129)))
{ /* Ieee/port.scm 1271 */
return BFALSE;}  else 
{ /* Ieee/port.scm 1271 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_string2914z00zz__r4_ports_6_10_1z00, BGl_string2915z00zz__r4_ports_6_10_1z00, BgL_portz00_128);} } 

}



/* &set-output-port-position! */
obj_t BGl_z62setzd2outputzd2portzd2positionz12za2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3385, obj_t BgL_portz00_3386, obj_t BgL_posz00_3387)
{
{ /* Ieee/port.scm 1270 */
{ /* Ieee/port.scm 1271 */
long BgL_auxz00_6471;obj_t BgL_auxz00_6464;
{ /* Ieee/port.scm 1271 */
obj_t BgL_tmpz00_6472;
if(
INTEGERP(BgL_posz00_3387))
{ /* Ieee/port.scm 1271 */
BgL_tmpz00_6472 = BgL_posz00_3387
; }  else 
{ 
obj_t BgL_auxz00_6475;
BgL_auxz00_6475 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)56648)), BGl_string2916z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_posz00_3387); 
FAILURE(BgL_auxz00_6475,BFALSE,BFALSE);} 
BgL_auxz00_6471 = 
(long)CINT(BgL_tmpz00_6472); } 
if(
OUTPUT_PORTP(BgL_portz00_3386))
{ /* Ieee/port.scm 1271 */
BgL_auxz00_6464 = BgL_portz00_3386
; }  else 
{ 
obj_t BgL_auxz00_6467;
BgL_auxz00_6467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)56648)), BGl_string2916z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3386); 
FAILURE(BgL_auxz00_6467,BFALSE,BFALSE);} 
return 
BGl_setzd2outputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(BgL_auxz00_6464, BgL_auxz00_6471);} } 

}



/* output-port-position */
BGL_EXPORTED_DEF long BGl_outputzd2portzd2positionz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_130)
{
{ /* Ieee/port.scm 1278 */
return 
BGL_OUTPUT_PORT_FILEPOS(BgL_portz00_130);} 

}



/* &output-port-position */
obj_t BGl_z62outputzd2portzd2positionz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3388, obj_t BgL_portz00_3389)
{
{ /* Ieee/port.scm 1278 */
{ /* Ieee/port.scm 1279 */
long BgL_tmpz00_6482;
{ /* Ieee/port.scm 1279 */
obj_t BgL_auxz00_6483;
if(
OUTPUT_PORTP(BgL_portz00_3389))
{ /* Ieee/port.scm 1279 */
BgL_auxz00_6483 = BgL_portz00_3389
; }  else 
{ 
obj_t BgL_auxz00_6486;
BgL_auxz00_6486 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)57064)), BGl_string2917z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3389); 
FAILURE(BgL_auxz00_6486,BFALSE,BFALSE);} 
BgL_tmpz00_6482 = 
BGl_outputzd2portzd2positionz00zz__r4_ports_6_10_1z00(BgL_auxz00_6483); } 
return 
BINT(BgL_tmpz00_6482);} } 

}



/* output-port-isatty? */
BGL_EXPORTED_DEF bool_t BGl_outputzd2portzd2isattyzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_portz00_131)
{
{ /* Ieee/port.scm 1284 */
return 
bgl_port_isatty(BgL_portz00_131);} 

}



/* &output-port-isatty? */
obj_t BGl_z62outputzd2portzd2isattyzf3z91zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3390, obj_t BgL_portz00_3391)
{
{ /* Ieee/port.scm 1284 */
{ /* Ieee/port.scm 1286 */
bool_t BgL_tmpz00_6493;
{ /* Ieee/port.scm 1286 */
obj_t BgL_auxz00_6494;
if(
OUTPUT_PORTP(BgL_portz00_3391))
{ /* Ieee/port.scm 1286 */
BgL_auxz00_6494 = BgL_portz00_3391
; }  else 
{ 
obj_t BgL_auxz00_6497;
BgL_auxz00_6497 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)57392)), BGl_string2918z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3391); 
FAILURE(BgL_auxz00_6497,BFALSE,BFALSE);} 
BgL_tmpz00_6493 = 
BGl_outputzd2portzd2isattyzf3zf3zz__r4_ports_6_10_1z00(BgL_auxz00_6494); } 
return 
BBOOL(BgL_tmpz00_6493);} } 

}



/* input-port-name */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2namez00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_132)
{
{ /* Ieee/port.scm 1292 */
return 
INPUT_PORT_NAME(BgL_portz00_132);} 

}



/* &input-port-name */
obj_t BGl_z62inputzd2portzd2namez62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3392, obj_t BgL_portz00_3393)
{
{ /* Ieee/port.scm 1292 */
{ /* Ieee/port.scm 1293 */
obj_t BgL_auxz00_6504;
if(
INPUT_PORTP(BgL_portz00_3393))
{ /* Ieee/port.scm 1293 */
BgL_auxz00_6504 = BgL_portz00_3393
; }  else 
{ 
obj_t BgL_auxz00_6507;
BgL_auxz00_6507 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)57699)), BGl_string2919z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3393); 
FAILURE(BgL_auxz00_6507,BFALSE,BFALSE);} 
return 
BGl_inputzd2portzd2namez00zz__r4_ports_6_10_1z00(BgL_auxz00_6504);} } 

}



/* input-port-name-set! */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2namezd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_portz00_133, obj_t BgL_namez00_134)
{
{ /* Ieee/port.scm 1298 */
INPUT_PORT_NAME_SET(BgL_portz00_133, BgL_namez00_134); 
return BUNSPEC;} 

}



/* &input-port-name-set! */
obj_t BGl_z62inputzd2portzd2namezd2setz12za2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3394, obj_t BgL_portz00_3395, obj_t BgL_namez00_3396)
{
{ /* Ieee/port.scm 1298 */
{ /* Ieee/port.scm 1298 */
obj_t BgL_auxz00_6520;obj_t BgL_auxz00_6513;
if(
STRINGP(BgL_namez00_3396))
{ /* Ieee/port.scm 1298 */
BgL_auxz00_6520 = BgL_namez00_3396
; }  else 
{ 
obj_t BgL_auxz00_6523;
BgL_auxz00_6523 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)57947)), BGl_string2920z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_namez00_3396); 
FAILURE(BgL_auxz00_6523,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_portz00_3395))
{ /* Ieee/port.scm 1298 */
BgL_auxz00_6513 = BgL_portz00_3395
; }  else 
{ 
obj_t BgL_auxz00_6516;
BgL_auxz00_6516 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)57947)), BGl_string2920z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3395); 
FAILURE(BgL_auxz00_6516,BFALSE,BFALSE);} 
return 
BGl_inputzd2portzd2namezd2setz12zc0zz__r4_ports_6_10_1z00(BgL_auxz00_6513, BgL_auxz00_6520);} } 

}



/* input-port-length */
BGL_EXPORTED_DEF long BGl_inputzd2portzd2lengthz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_135)
{
{ /* Ieee/port.scm 1304 */
return 
BGL_INPUT_PORT_LENGTH(BgL_portz00_135);} 

}



/* &input-port-length */
obj_t BGl_z62inputzd2portzd2lengthz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3397, obj_t BgL_portz00_3398)
{
{ /* Ieee/port.scm 1304 */
{ /* Ieee/port.scm 1305 */
long BgL_tmpz00_6529;
{ /* Ieee/port.scm 1305 */
obj_t BgL_auxz00_6530;
if(
INPUT_PORTP(BgL_portz00_3398))
{ /* Ieee/port.scm 1305 */
BgL_auxz00_6530 = BgL_portz00_3398
; }  else 
{ 
obj_t BgL_auxz00_6533;
BgL_auxz00_6533 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)58299)), BGl_string2921z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3398); 
FAILURE(BgL_auxz00_6533,BFALSE,BFALSE);} 
BgL_tmpz00_6529 = 
BGl_inputzd2portzd2lengthz00zz__r4_ports_6_10_1z00(BgL_auxz00_6530); } 
return 
make_belong(BgL_tmpz00_6529);} } 

}



/* output-port-close-hook */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_136)
{
{ /* Ieee/port.scm 1310 */
return 
PORT_CHOOK(BgL_portz00_136);} 

}



/* &output-port-close-hook */
obj_t BGl_z62outputzd2portzd2closezd2hookzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3399, obj_t BgL_portz00_3400)
{
{ /* Ieee/port.scm 1310 */
{ /* Ieee/port.scm 1311 */
obj_t BgL_auxz00_6540;
if(
OUTPUT_PORTP(BgL_portz00_3400))
{ /* Ieee/port.scm 1311 */
BgL_auxz00_6540 = BgL_portz00_3400
; }  else 
{ 
obj_t BgL_auxz00_6543;
BgL_auxz00_6543 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)58597)), BGl_string2922z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3400); 
FAILURE(BgL_auxz00_6543,BFALSE,BFALSE);} 
return 
BGl_outputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6540);} } 

}



/* closed-output-port? */
BGL_EXPORTED_DEF bool_t BGl_closedzd2outputzd2portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_portz00_137)
{
{ /* Ieee/port.scm 1316 */
return 
OUTPUT_PORT_CLOSEP(BgL_portz00_137);} 

}



/* &closed-output-port? */
obj_t BGl_z62closedzd2outputzd2portzf3z91zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3401, obj_t BgL_portz00_3402)
{
{ /* Ieee/port.scm 1316 */
{ /* Ieee/port.scm 1317 */
bool_t BgL_tmpz00_6549;
{ /* Ieee/port.scm 1317 */
obj_t BgL_auxz00_6550;
if(
OUTPUT_PORTP(BgL_portz00_3402))
{ /* Ieee/port.scm 1317 */
BgL_auxz00_6550 = BgL_portz00_3402
; }  else 
{ 
obj_t BgL_auxz00_6553;
BgL_auxz00_6553 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)58893)), BGl_string2923z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3402); 
FAILURE(BgL_auxz00_6553,BFALSE,BFALSE);} 
BgL_tmpz00_6549 = 
BGl_closedzd2outputzd2portzf3zf3zz__r4_ports_6_10_1z00(BgL_auxz00_6550); } 
return 
BBOOL(BgL_tmpz00_6549);} } 

}



/* output-port-close-hook-set! */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t BgL_portz00_138, obj_t BgL_procz00_139)
{
{ /* Ieee/port.scm 1322 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_139, 
(int)(((long)1))))
{ /* Ieee/port.scm 1323 */
PORT_CHOOK_SET(BgL_portz00_138, BgL_procz00_139); BUNSPEC; 
return BgL_procz00_139;}  else 
{ /* Ieee/port.scm 1323 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_string2924z00zz__r4_ports_6_10_1z00, BGl_string2925z00zz__r4_ports_6_10_1z00, BgL_procz00_139);} } 

}



/* &output-port-close-hook-set! */
obj_t BGl_z62outputzd2portzd2closezd2hookzd2setz12z70zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3403, obj_t BgL_portz00_3404, obj_t BgL_procz00_3405)
{
{ /* Ieee/port.scm 1322 */
{ /* Ieee/port.scm 1323 */
obj_t BgL_auxz00_6571;obj_t BgL_auxz00_6564;
if(
PROCEDUREP(BgL_procz00_3405))
{ /* Ieee/port.scm 1323 */
BgL_auxz00_6571 = BgL_procz00_3405
; }  else 
{ 
obj_t BgL_auxz00_6574;
BgL_auxz00_6574 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)59196)), BGl_string2926z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_procz00_3405); 
FAILURE(BgL_auxz00_6574,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_portz00_3404))
{ /* Ieee/port.scm 1323 */
BgL_auxz00_6564 = BgL_portz00_3404
; }  else 
{ 
obj_t BgL_auxz00_6567;
BgL_auxz00_6567 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)59196)), BGl_string2926z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3404); 
FAILURE(BgL_auxz00_6567,BFALSE,BFALSE);} 
return 
BGl_outputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(BgL_auxz00_6564, BgL_auxz00_6571);} } 

}



/* output-port-flush-hook */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2flushzd2hookzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_140)
{
{ /* Ieee/port.scm 1333 */
return 
BGL_OUTPUT_PORT_FHOOK(BgL_portz00_140);} 

}



/* &output-port-flush-hook */
obj_t BGl_z62outputzd2portzd2flushzd2hookzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3406, obj_t BgL_portz00_3407)
{
{ /* Ieee/port.scm 1333 */
{ /* Ieee/port.scm 1334 */
obj_t BgL_auxz00_6580;
if(
OUTPUT_PORTP(BgL_portz00_3407))
{ /* Ieee/port.scm 1334 */
BgL_auxz00_6580 = BgL_portz00_3407
; }  else 
{ 
obj_t BgL_auxz00_6583;
BgL_auxz00_6583 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)59685)), BGl_string2927z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3407); 
FAILURE(BgL_auxz00_6583,BFALSE,BFALSE);} 
return 
BGl_outputzd2portzd2flushzd2hookzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6580);} } 

}



/* output-port-flush-hook-set! */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t BgL_portz00_141, obj_t BgL_procz00_142)
{
{ /* Ieee/port.scm 1339 */
{ /* Ieee/port.scm 1340 */
bool_t BgL_test3611z00_6588;
if(
PROCEDUREP(BgL_procz00_142))
{ /* Ieee/port.scm 1340 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_142, 
(int)(((long)2))))
{ /* Ieee/port.scm 1340 */
BgL_test3611z00_6588 = ((bool_t)0)
; }  else 
{ /* Ieee/port.scm 1340 */
BgL_test3611z00_6588 = ((bool_t)1)
; } }  else 
{ /* Ieee/port.scm 1340 */
BgL_test3611z00_6588 = ((bool_t)0)
; } 
if(BgL_test3611z00_6588)
{ /* Ieee/port.scm 1340 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_string2928z00zz__r4_ports_6_10_1z00, BGl_string2925z00zz__r4_ports_6_10_1z00, BgL_procz00_142);}  else 
{ /* Ieee/port.scm 1340 */
BGL_OUTPUT_PORT_FHOOK_SET(BgL_portz00_141, BgL_procz00_142); BUNSPEC; 
return BgL_procz00_142;} } } 

}



/* &output-port-flush-hook-set! */
obj_t BGl_z62outputzd2portzd2flushzd2hookzd2setz12z70zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3408, obj_t BgL_portz00_3409, obj_t BgL_procz00_3410)
{
{ /* Ieee/port.scm 1339 */
{ /* Ieee/port.scm 1340 */
obj_t BgL_auxz00_6596;
if(
OUTPUT_PORTP(BgL_portz00_3409))
{ /* Ieee/port.scm 1340 */
BgL_auxz00_6596 = BgL_portz00_3409
; }  else 
{ 
obj_t BgL_auxz00_6599;
BgL_auxz00_6599 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)59986)), BGl_string2929z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3409); 
FAILURE(BgL_auxz00_6599,BFALSE,BFALSE);} 
return 
BGl_outputzd2portzd2flushzd2hookzd2setz12z12zz__r4_ports_6_10_1z00(BgL_auxz00_6596, BgL_procz00_3410);} } 

}



/* output-port-flush-buffer */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2flushzd2bufferzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_143)
{
{ /* Ieee/port.scm 1350 */
return 
BGL_OUTPUT_PORT_FLUSHBUF(BgL_portz00_143);} 

}



/* &output-port-flush-buffer */
obj_t BGl_z62outputzd2portzd2flushzd2bufferzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3411, obj_t BgL_portz00_3412)
{
{ /* Ieee/port.scm 1350 */
{ /* Ieee/port.scm 1351 */
obj_t BgL_auxz00_6605;
if(
OUTPUT_PORTP(BgL_portz00_3412))
{ /* Ieee/port.scm 1351 */
BgL_auxz00_6605 = BgL_portz00_3412
; }  else 
{ 
obj_t BgL_auxz00_6608;
BgL_auxz00_6608 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)60476)), BGl_string2930z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3412); 
FAILURE(BgL_auxz00_6608,BFALSE,BFALSE);} 
return 
BGl_outputzd2portzd2flushzd2bufferzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6605);} } 

}



/* output-port-flush-buffer-set! */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2flushzd2bufferzd2setz12z12zz__r4_ports_6_10_1z00(obj_t BgL_portz00_144, obj_t BgL_bufz00_145)
{
{ /* Ieee/port.scm 1356 */
BGL_OUTPUT_PORT_FLUSHBUF_SET(BgL_portz00_144, BgL_bufz00_145); BUNSPEC; 
return BgL_bufz00_145;} 

}



/* &output-port-flush-buffer-set! */
obj_t BGl_z62outputzd2portzd2flushzd2bufferzd2setz12z70zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3413, obj_t BgL_portz00_3414, obj_t BgL_bufz00_3415)
{
{ /* Ieee/port.scm 1356 */
{ /* Ieee/port.scm 1357 */
obj_t BgL_auxz00_6614;
if(
OUTPUT_PORTP(BgL_portz00_3414))
{ /* Ieee/port.scm 1357 */
BgL_auxz00_6614 = BgL_portz00_3414
; }  else 
{ 
obj_t BgL_auxz00_6617;
BgL_auxz00_6617 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)60824)), BGl_string2931z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3414); 
FAILURE(BgL_auxz00_6617,BFALSE,BFALSE);} 
return 
BGl_outputzd2portzd2flushzd2bufferzd2setz12z12zz__r4_ports_6_10_1z00(BgL_auxz00_6614, BgL_bufz00_3415);} } 

}



/* input-port-close-hook */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(obj_t BgL_portz00_146)
{
{ /* Ieee/port.scm 1363 */
return 
PORT_CHOOK(BgL_portz00_146);} 

}



/* &input-port-close-hook */
obj_t BGl_z62inputzd2portzd2closezd2hookzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3416, obj_t BgL_portz00_3417)
{
{ /* Ieee/port.scm 1363 */
{ /* Ieee/port.scm 1364 */
obj_t BgL_auxz00_6623;
if(
INPUT_PORTP(BgL_portz00_3417))
{ /* Ieee/port.scm 1364 */
BgL_auxz00_6623 = BgL_portz00_3417
; }  else 
{ 
obj_t BgL_auxz00_6626;
BgL_auxz00_6626 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)61104)), BGl_string2932z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3417); 
FAILURE(BgL_auxz00_6626,BFALSE,BFALSE);} 
return 
BGl_inputzd2portzd2closezd2hookzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6623);} } 

}



/* input-port-close-hook-set! */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t BgL_portz00_147, obj_t BgL_procz00_148)
{
{ /* Ieee/port.scm 1369 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_148, 
(int)(((long)1))))
{ /* Ieee/port.scm 1370 */
PORT_CHOOK_SET(BgL_portz00_147, BgL_procz00_148); BUNSPEC; 
return BgL_procz00_148;}  else 
{ /* Ieee/port.scm 1370 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_string2933z00zz__r4_ports_6_10_1z00, BGl_string2925z00zz__r4_ports_6_10_1z00, BgL_procz00_148);} } 

}



/* &input-port-close-hook-set! */
obj_t BGl_z62inputzd2portzd2closezd2hookzd2setz12z70zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3418, obj_t BgL_portz00_3419, obj_t BgL_procz00_3420)
{
{ /* Ieee/port.scm 1369 */
{ /* Ieee/port.scm 1370 */
obj_t BgL_auxz00_6643;obj_t BgL_auxz00_6636;
if(
PROCEDUREP(BgL_procz00_3420))
{ /* Ieee/port.scm 1370 */
BgL_auxz00_6643 = BgL_procz00_3420
; }  else 
{ 
obj_t BgL_auxz00_6646;
BgL_auxz00_6646 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)61403)), BGl_string2934z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_procz00_3420); 
FAILURE(BgL_auxz00_6646,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_portz00_3419))
{ /* Ieee/port.scm 1370 */
BgL_auxz00_6636 = BgL_portz00_3419
; }  else 
{ 
obj_t BgL_auxz00_6639;
BgL_auxz00_6639 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)61403)), BGl_string2934z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3419); 
FAILURE(BgL_auxz00_6639,BFALSE,BFALSE);} 
return 
BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(BgL_auxz00_6636, BgL_auxz00_6643);} } 

}



/* input-port-seek */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2seekz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_149)
{
{ /* Ieee/port.scm 1380 */
{ /* Ieee/port.scm 1381 */
obj_t BgL_aux2563z00_4130;
BgL_aux2563z00_4130 = 
BGL_INPUT_PORT_USEEK(BgL_portz00_149); 
if(
PROCEDUREP(BgL_aux2563z00_4130))
{ /* Ieee/port.scm 1381 */
return BgL_aux2563z00_4130;}  else 
{ 
obj_t BgL_auxz00_6654;
BgL_auxz00_6654 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)61882)), BGl_string2935z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_aux2563z00_4130); 
FAILURE(BgL_auxz00_6654,BFALSE,BFALSE);} } } 

}



/* &input-port-seek */
obj_t BGl_z62inputzd2portzd2seekz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3421, obj_t BgL_portz00_3422)
{
{ /* Ieee/port.scm 1380 */
{ /* Ieee/port.scm 1381 */
obj_t BgL_auxz00_6658;
if(
INPUT_PORTP(BgL_portz00_3422))
{ /* Ieee/port.scm 1381 */
BgL_auxz00_6658 = BgL_portz00_3422
; }  else 
{ 
obj_t BgL_auxz00_6661;
BgL_auxz00_6661 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)61882)), BGl_string2936z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3422); 
FAILURE(BgL_auxz00_6661,BFALSE,BFALSE);} 
return 
BGl_inputzd2portzd2seekz00zz__r4_ports_6_10_1z00(BgL_auxz00_6658);} } 

}



/* input-port-seek-set! */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2seekzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_portz00_150, obj_t BgL_procz00_151)
{
{ /* Ieee/port.scm 1386 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_151, 
(int)(((long)2))))
{ /* Ieee/port.scm 1387 */
BGL_INPUT_PORT_USEEK_SET(BgL_portz00_150, BgL_procz00_151); BUNSPEC; 
return BgL_procz00_151;}  else 
{ /* Ieee/port.scm 1387 */
return 
bgl_system_failure(BGL_IO_PORT_ERROR, BGl_string2937z00zz__r4_ports_6_10_1z00, BGl_string2938z00zz__r4_ports_6_10_1z00, BgL_procz00_151);} } 

}



/* &input-port-seek-set! */
obj_t BGl_z62inputzd2portzd2seekzd2setz12za2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3423, obj_t BgL_portz00_3424, obj_t BgL_procz00_3425)
{
{ /* Ieee/port.scm 1386 */
{ /* Ieee/port.scm 1387 */
obj_t BgL_auxz00_6678;obj_t BgL_auxz00_6671;
if(
PROCEDUREP(BgL_procz00_3425))
{ /* Ieee/port.scm 1387 */
BgL_auxz00_6678 = BgL_procz00_3425
; }  else 
{ 
obj_t BgL_auxz00_6681;
BgL_auxz00_6681 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)62175)), BGl_string2939z00zz__r4_ports_6_10_1z00, BGl_string2729z00zz__r4_ports_6_10_1z00, BgL_procz00_3425); 
FAILURE(BgL_auxz00_6681,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_portz00_3424))
{ /* Ieee/port.scm 1387 */
BgL_auxz00_6671 = BgL_portz00_3424
; }  else 
{ 
obj_t BgL_auxz00_6674;
BgL_auxz00_6674 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)62175)), BGl_string2939z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3424); 
FAILURE(BgL_auxz00_6674,BFALSE,BFALSE);} 
return 
BGl_inputzd2portzd2seekzd2setz12zc0zz__r4_ports_6_10_1z00(BgL_auxz00_6671, BgL_auxz00_6678);} } 

}



/* input-port-buffer */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_152)
{
{ /* Ieee/port.scm 1397 */
return 
BGL_INPUT_PORT_BUFFER(BgL_portz00_152);} 

}



/* &input-port-buffer */
obj_t BGl_z62inputzd2portzd2bufferz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3426, obj_t BgL_portz00_3427)
{
{ /* Ieee/port.scm 1397 */
{ /* Ieee/port.scm 1398 */
obj_t BgL_auxz00_6687;
if(
INPUT_PORTP(BgL_portz00_3427))
{ /* Ieee/port.scm 1398 */
BgL_auxz00_6687 = BgL_portz00_3427
; }  else 
{ 
obj_t BgL_auxz00_6690;
BgL_auxz00_6690 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)62660)), BGl_string2940z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3427); 
FAILURE(BgL_auxz00_6690,BFALSE,BFALSE);} 
return 
BGl_inputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BgL_auxz00_6687);} } 

}



/* input-port-buffer-set! */
BGL_EXPORTED_DEF obj_t BGl_inputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_portz00_153, obj_t BgL_bufferz00_154)
{
{ /* Ieee/port.scm 1403 */
bgl_input_port_buffer_set(BgL_portz00_153, BgL_bufferz00_154); BUNSPEC; 
return BgL_portz00_153;} 

}



/* &input-port-buffer-set! */
obj_t BGl_z62inputzd2portzd2bufferzd2setz12za2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3428, obj_t BgL_portz00_3429, obj_t BgL_bufferz00_3430)
{
{ /* Ieee/port.scm 1403 */
{ /* Ieee/port.scm 1404 */
obj_t BgL_auxz00_6703;obj_t BgL_auxz00_6696;
if(
STRINGP(BgL_bufferz00_3430))
{ /* Ieee/port.scm 1404 */
BgL_auxz00_6703 = BgL_bufferz00_3430
; }  else 
{ 
obj_t BgL_auxz00_6706;
BgL_auxz00_6706 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)63008)), BGl_string2941z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_bufferz00_3430); 
FAILURE(BgL_auxz00_6706,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_portz00_3429))
{ /* Ieee/port.scm 1404 */
BgL_auxz00_6696 = BgL_portz00_3429
; }  else 
{ 
obj_t BgL_auxz00_6699;
BgL_auxz00_6699 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)63008)), BGl_string2941z00zz__r4_ports_6_10_1z00, BGl_string2731z00zz__r4_ports_6_10_1z00, BgL_portz00_3429); 
FAILURE(BgL_auxz00_6699,BFALSE,BFALSE);} 
return 
BGl_inputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(BgL_auxz00_6696, BgL_auxz00_6703);} } 

}



/* output-port-buffer */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_155)
{
{ /* Ieee/port.scm 1409 */
return 
BGL_OUTPUT_PORT_BUFFER(BgL_portz00_155);} 

}



/* &output-port-buffer */
obj_t BGl_z62outputzd2portzd2bufferz62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3431, obj_t BgL_portz00_3432)
{
{ /* Ieee/port.scm 1409 */
{ /* Ieee/port.scm 1410 */
obj_t BgL_auxz00_6712;
if(
OUTPUT_PORTP(BgL_portz00_3432))
{ /* Ieee/port.scm 1410 */
BgL_auxz00_6712 = BgL_portz00_3432
; }  else 
{ 
obj_t BgL_auxz00_6715;
BgL_auxz00_6715 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)63284)), BGl_string2942z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3432); 
FAILURE(BgL_auxz00_6715,BFALSE,BFALSE);} 
return 
BGl_outputzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BgL_auxz00_6712);} } 

}



/* output-port-buffer-set! */
BGL_EXPORTED_DEF obj_t BGl_outputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(obj_t BgL_portz00_156, obj_t BgL_bufferz00_157)
{
{ /* Ieee/port.scm 1415 */
bgl_output_port_buffer_set(BgL_portz00_156, BgL_bufferz00_157); BUNSPEC; 
return BgL_portz00_156;} 

}



/* &output-port-buffer-set! */
obj_t BGl_z62outputzd2portzd2bufferzd2setz12za2zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3433, obj_t BgL_portz00_3434, obj_t BgL_bufferz00_3435)
{
{ /* Ieee/port.scm 1415 */
{ /* Ieee/port.scm 1416 */
obj_t BgL_auxz00_6728;obj_t BgL_auxz00_6721;
if(
STRINGP(BgL_bufferz00_3435))
{ /* Ieee/port.scm 1416 */
BgL_auxz00_6728 = BgL_bufferz00_3435
; }  else 
{ 
obj_t BgL_auxz00_6731;
BgL_auxz00_6731 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)63635)), BGl_string2943z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_bufferz00_3435); 
FAILURE(BgL_auxz00_6731,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_portz00_3434))
{ /* Ieee/port.scm 1416 */
BgL_auxz00_6721 = BgL_portz00_3434
; }  else 
{ 
obj_t BgL_auxz00_6724;
BgL_auxz00_6724 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)63635)), BGl_string2943z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_portz00_3434); 
FAILURE(BgL_auxz00_6724,BFALSE,BFALSE);} 
return 
BGl_outputzd2portzd2bufferzd2setz12zc0zz__r4_ports_6_10_1z00(BgL_auxz00_6721, BgL_auxz00_6728);} } 

}



/* file-exists? */
BGL_EXPORTED_DEF bool_t BGl_filezd2existszf3z21zz__r4_ports_6_10_1z00(char * BgL_namez00_158)
{
{ /* Ieee/port.scm 1421 */
return 
fexists(BgL_namez00_158);} 

}



/* &file-exists? */
obj_t BGl_z62filezd2existszf3z43zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3436, obj_t BgL_namez00_3437)
{
{ /* Ieee/port.scm 1421 */
{ /* Ieee/port.scm 1422 */
bool_t BgL_tmpz00_6737;
{ /* Ieee/port.scm 1422 */
char * BgL_auxz00_6738;
{ /* Ieee/port.scm 1422 */
obj_t BgL_tmpz00_6739;
if(
STRINGP(BgL_namez00_3437))
{ /* Ieee/port.scm 1422 */
BgL_tmpz00_6739 = BgL_namez00_3437
; }  else 
{ 
obj_t BgL_auxz00_6742;
BgL_auxz00_6742 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)63905)), BGl_string2944z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_namez00_3437); 
FAILURE(BgL_auxz00_6742,BFALSE,BFALSE);} 
BgL_auxz00_6738 = 
BSTRING_TO_STRING(BgL_tmpz00_6739); } 
BgL_tmpz00_6737 = 
BGl_filezd2existszf3z21zz__r4_ports_6_10_1z00(BgL_auxz00_6738); } 
return 
BBOOL(BgL_tmpz00_6737);} } 

}



/* file-gzip? */
BGL_EXPORTED_DEF obj_t BGl_filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00(obj_t BgL_namez00_159)
{
{ /* Ieee/port.scm 1427 */
{ /* Ieee/port.scm 1428 */
bool_t BgL_test3633z00_6749;
{ /* Ieee/port.scm 1428 */
bool_t BgL_res2026z00_2572;
{ /* Ieee/port.scm 1428 */
char * BgL_namez00_2571;
{ /* Ieee/port.scm 1428 */
obj_t BgL_tmpz00_6750;
if(
STRINGP(BgL_namez00_159))
{ /* Ieee/port.scm 1428 */
BgL_tmpz00_6750 = BgL_namez00_159
; }  else 
{ 
obj_t BgL_auxz00_6753;
BgL_auxz00_6753 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)64198)), BGl_string2945z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_namez00_159); 
FAILURE(BgL_auxz00_6753,BFALSE,BFALSE);} 
BgL_namez00_2571 = 
BSTRING_TO_STRING(BgL_tmpz00_6750); } 
BgL_res2026z00_2572 = 
fexists(BgL_namez00_2571); } 
BgL_test3633z00_6749 = BgL_res2026z00_2572; } 
if(BgL_test3633z00_6749)
{ /* Ieee/port.scm 1429 */
obj_t BgL_auxz00_6759;
if(
STRINGP(BgL_namez00_159))
{ /* Ieee/port.scm 1429 */
BgL_auxz00_6759 = BgL_namez00_159
; }  else 
{ 
obj_t BgL_auxz00_6762;
BgL_auxz00_6762 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)64205)), BGl_string2945z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_namez00_159); 
FAILURE(BgL_auxz00_6762,BFALSE,BFALSE);} 
return 
BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_6759, BGl_proc2946z00zz__r4_ports_6_10_1z00);}  else 
{ /* Ieee/port.scm 1428 */
return BFALSE;} } } 

}



/* &file-gzip? */
obj_t BGl_z62filezd2gza7ipzf3ze4zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3441, obj_t BgL_namez00_3442)
{
{ /* Ieee/port.scm 1427 */
return 
BGl_filezd2gza7ipzf3z86zz__r4_ports_6_10_1z00(BgL_namez00_3442);} 

}



/* &<@anonymous:1534> */
obj_t BGl_z62zc3z04anonymousza31534ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3443)
{
{ /* Ieee/port.scm 1430 */
{ /* Ieee/port.scm 1431 */
obj_t BgL_res1121z00_4131;
BgL_res1121z00_4131 = 
MAKE_CELL(BUNSPEC); 
if(
CBOOL(
BGl_zc3z04exitza31543ze3ze70z60zz__r4_ports_6_10_1z00(BgL_res1121z00_4131)))
{ /* Ieee/port.scm 1431 */
obj_t BgL_ez00_4132;
BgL_ez00_4132 = 
CELL_REF(BgL_res1121z00_4131); 
return BFALSE;}  else 
{ /* Ieee/port.scm 1431 */
return 
CELL_REF(BgL_res1121z00_4131);} } } 

}



/* <@exit:1543>~0 */
obj_t BGl_zc3z04exitza31543ze3ze70z60zz__r4_ports_6_10_1z00(obj_t BgL_res1121z00_3507)
{
{ /* Ieee/port.scm 1431 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit1127z00_1836;
if( SET_EXIT(BgL_an_exit1127z00_1836) ) { 
return 
BGL_EXIT_VALUE();
} else {
#if( SIGSETJMP_SAVESIGS == 0 )
  bgl_restore_signal_handlers();
#endif

BgL_an_exit1127z00_1836 = 
(void *)jmpbuf; 
{ /* Ieee/port.scm 1431 */

PUSH_EXIT(BgL_an_exit1127z00_1836, ((long)1)); 
{ /* Ieee/port.scm 1431 */
obj_t BgL_an_exitd1128z00_1837;
BgL_an_exitd1128z00_1837 = 
((obj_t)(&exitd)); 
{ /* Ieee/port.scm 1431 */
bool_t BgL_res1130z00_1840;
{ /* Ieee/port.scm 1431 */
obj_t BgL_ohs1119z00_1841;
BgL_ohs1119z00_1841 = 
BGL_ERROR_HANDLER_GET(); 
{ /* Ieee/port.scm 1431 */
obj_t BgL_exitd1124z00_1842;
BgL_exitd1124z00_1842 = 
((obj_t)(&exitd)); 
{ 
obj_t BgL_zc3z04anonymousza31548ze3z87_3438;
BgL_zc3z04anonymousza31548ze3z87_3438 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31548ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31548ze3z87_3438, 
(int)(((long)0)), BgL_ohs1119z00_1841); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1124z00_1842, BgL_zc3z04anonymousza31548ze3z87_3438); 
{ /* Ieee/port.scm 1431 */
bool_t BgL_tmp1126z00_1844;
{ /* Ieee/port.scm 1431 */
obj_t BgL_arg1544z00_1845;
{ /* Ieee/port.scm 1431 */
obj_t BgL_zc3z04anonymousza31546ze3z87_3439;
BgL_zc3z04anonymousza31546ze3z87_3439 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31546ze3ze5zz__r4_ports_6_10_1z00, 
(int)(((long)1)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31546ze3z87_3439, 
(int)(((long)0)), 
((obj_t)BgL_res1121z00_3507)); 
PROCEDURE_SET(BgL_zc3z04anonymousza31546ze3z87_3439, 
(int)(((long)1)), BgL_an_exitd1128z00_1837); 
BgL_arg1544z00_1845 = 
MAKE_YOUNG_PAIR(BgL_zc3z04anonymousza31546ze3z87_3439, BgL_ohs1119z00_1841); } 
BGL_ERROR_HANDLER_SET(BgL_arg1544z00_1845); BUNSPEC; } 
{ /* Ieee/port.scm 1431 */
obj_t BgL_auxz00_3445;
{ /* Ieee/port.scm 1434 */
obj_t BgL_arg1547z00_1850;
{ /* Ieee/port.scm 1434 */
obj_t BgL_res2027z00_2574;
{ /* Ieee/port.scm 632 */
obj_t BgL_tmpz00_6791;
BgL_tmpz00_6791 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2027z00_2574 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_6791); } 
BgL_arg1547z00_1850 = BgL_res2027z00_2574; } 
BgL_auxz00_3445 = 
BGl_gunza7ipzd2parsezd2headerza7zz__gunza7ipza7(BgL_arg1547z00_1850); } 
CELL_SET(BgL_res1121z00_3507, BgL_auxz00_3445); } 
BgL_tmp1126z00_1844 = ((bool_t)0); 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1124z00_1842); 
BGL_ERROR_HANDLER_SET(BgL_ohs1119z00_1841); BUNSPEC; 
BgL_res1130z00_1840 = BgL_tmp1126z00_1844; } } } } 
POP_EXIT(); 
return 
BBOOL(BgL_res1130z00_1840);} } } 
} } 

}



/* &<@anonymous:1546> */
obj_t BGl_z62zc3z04anonymousza31546ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3447, obj_t BgL_ez00_3450)
{
{ /* Ieee/port.scm 1431 */
{ /* Ieee/port.scm 1431 */
obj_t BgL_res1121z00_3448;obj_t BgL_an_exitd1128z00_3449;
BgL_res1121z00_3448 = 
PROCEDURE_REF(BgL_envz00_3447, 
(int)(((long)0))); 
BgL_an_exitd1128z00_3449 = 
PROCEDURE_REF(BgL_envz00_3447, 
(int)(((long)1))); 
CELL_SET(BgL_res1121z00_3448, BgL_ez00_3450); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1128z00_3449, BTRUE);} } 

}



/* &<@anonymous:1548> */
obj_t BGl_z62zc3z04anonymousza31548ze3ze5zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3452)
{
{ /* Ieee/port.scm 1431 */
{ 
obj_t BgL_ohs1119z00_3453;
BgL_ohs1119z00_3453 = 
PROCEDURE_REF(BgL_envz00_3452, 
(int)(((long)0))); 
BGL_ERROR_HANDLER_SET(BgL_ohs1119z00_3453); 
return BUNSPEC;} } 

}



/* delete-file */
BGL_EXPORTED_DEF obj_t BGl_deletezd2filezd2zz__r4_ports_6_10_1z00(char * BgL_stringz00_160)
{
{ /* Ieee/port.scm 1439 */
if(
unlink(BgL_stringz00_160))
{ /* Ieee/port.scm 1440 */
return BFALSE;}  else 
{ /* Ieee/port.scm 1440 */
return BTRUE;} } 

}



/* &delete-file */
obj_t BGl_z62deletezd2filezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3454, obj_t BgL_stringz00_3455)
{
{ /* Ieee/port.scm 1439 */
{ /* Ieee/port.scm 1440 */
char * BgL_auxz00_6809;
{ /* Ieee/port.scm 1440 */
obj_t BgL_tmpz00_6810;
if(
STRINGP(BgL_stringz00_3455))
{ /* Ieee/port.scm 1440 */
BgL_tmpz00_6810 = BgL_stringz00_3455
; }  else 
{ 
obj_t BgL_auxz00_6813;
BgL_auxz00_6813 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)64609)), BGl_string2947z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3455); 
FAILURE(BgL_auxz00_6813,BFALSE,BFALSE);} 
BgL_auxz00_6809 = 
BSTRING_TO_STRING(BgL_tmpz00_6810); } 
return 
BGl_deletezd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_6809);} } 

}



/* make-directory */
BGL_EXPORTED_DEF bool_t BGl_makezd2directoryzd2zz__r4_ports_6_10_1z00(char * BgL_stringz00_161)
{
{ /* Ieee/port.scm 1445 */
return 
!BGL_MKDIR(BgL_stringz00_161, ((long)511));} 

}



/* &make-directory */
obj_t BGl_z62makezd2directoryzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3456, obj_t BgL_stringz00_3457)
{
{ /* Ieee/port.scm 1445 */
{ /* Ieee/port.scm 1446 */
bool_t BgL_tmpz00_6820;
{ /* Ieee/port.scm 1446 */
char * BgL_auxz00_6821;
{ /* Ieee/port.scm 1446 */
obj_t BgL_tmpz00_6822;
if(
STRINGP(BgL_stringz00_3457))
{ /* Ieee/port.scm 1446 */
BgL_tmpz00_6822 = BgL_stringz00_3457
; }  else 
{ 
obj_t BgL_auxz00_6825;
BgL_auxz00_6825 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)64904)), BGl_string2948z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3457); 
FAILURE(BgL_auxz00_6825,BFALSE,BFALSE);} 
BgL_auxz00_6821 = 
BSTRING_TO_STRING(BgL_tmpz00_6822); } 
BgL_tmpz00_6820 = 
BGl_makezd2directoryzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6821); } 
return 
BBOOL(BgL_tmpz00_6820);} } 

}



/* make-directories */
BGL_EXPORTED_DEF bool_t BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(obj_t BgL_stringz00_162)
{
{ /* Ieee/port.scm 1451 */
{ /* Ieee/port.scm 1452 */
bool_t BgL__ortest_1131z00_1858;
BgL__ortest_1131z00_1858 = 
bgl_directoryp(
BSTRING_TO_STRING(BgL_stringz00_162)); 
if(BgL__ortest_1131z00_1858)
{ /* Ieee/port.scm 1452 */
return BgL__ortest_1131z00_1858;}  else 
{ /* Ieee/port.scm 1453 */
bool_t BgL__ortest_1132z00_1859;
{ /* Ieee/port.scm 1453 */
bool_t BgL_res2029z00_2580;
{ /* Ieee/port.scm 1446 */
char * BgL_tmpz00_6835;
BgL_tmpz00_6835 = 
BSTRING_TO_STRING(BgL_stringz00_162); 
BgL_res2029z00_2580 = 
!BGL_MKDIR(BgL_tmpz00_6835, ((long)511)); } 
BgL__ortest_1132z00_1859 = BgL_res2029z00_2580; } 
if(BgL__ortest_1132z00_1859)
{ /* Ieee/port.scm 1453 */
return BgL__ortest_1132z00_1859;}  else 
{ /* Ieee/port.scm 1454 */
obj_t BgL_dnamez00_1860;
BgL_dnamez00_1860 = 
BGl_dirnamez00zz__osz00(BgL_stringz00_162); 
{ /* Ieee/port.scm 1455 */
bool_t BgL_test3642z00_6840;
if(
(
STRING_LENGTH(BgL_dnamez00_1860)==((long)0)))
{ /* Ieee/port.scm 1455 */
BgL_test3642z00_6840 = ((bool_t)1)
; }  else 
{ /* Ieee/port.scm 1455 */
BgL_test3642z00_6840 = 
fexists(
BSTRING_TO_STRING(BgL_dnamez00_1860))
; } 
if(BgL_test3642z00_6840)
{ /* Ieee/port.scm 1455 */
return ((bool_t)0);}  else 
{ /* Ieee/port.scm 1457 */
bool_t BgL_auxz00_1865;
BgL_auxz00_1865 = 
BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(BgL_dnamez00_1860); 
{ /* Ieee/port.scm 1458 */
bool_t BgL_test3644z00_6847;
{ /* Ieee/port.scm 1458 */
unsigned char BgL_char2z00_2595;
BgL_char2z00_2595 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Ieee/port.scm 1458 */
unsigned char BgL_tmpz00_6849;
{ /* Ieee/port.scm 1458 */
long BgL_i2160z00_3515;
BgL_i2160z00_3515 = 
(
STRING_LENGTH(BgL_stringz00_162)-((long)1)); 
{ /* Ieee/port.scm 1458 */
long BgL_l2161z00_3516;
BgL_l2161z00_3516 = 
STRING_LENGTH(BgL_stringz00_162); 
if(
BOUND_CHECK(BgL_i2160z00_3515, BgL_l2161z00_3516))
{ /* Ieee/port.scm 1458 */
BgL_tmpz00_6849 = 
STRING_REF(BgL_stringz00_162, BgL_i2160z00_3515)
; }  else 
{ 
obj_t BgL_auxz00_6856;
BgL_auxz00_6856 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)65415)), BGl_string2949z00zz__r4_ports_6_10_1z00, BgL_stringz00_162, 
(int)(BgL_l2161z00_3516), 
(int)(BgL_i2160z00_3515)); 
FAILURE(BgL_auxz00_6856,BFALSE,BFALSE);} } } 
BgL_test3644z00_6847 = 
(BgL_tmpz00_6849==BgL_char2z00_2595); } } 
if(BgL_test3644z00_6847)
{ /* Ieee/port.scm 1458 */
return BgL_auxz00_1865;}  else 
{ /* Ieee/port.scm 1461 */
bool_t BgL_res2037z00_2598;
{ /* Ieee/port.scm 1446 */
char * BgL_tmpz00_6863;
BgL_tmpz00_6863 = 
BSTRING_TO_STRING(BgL_stringz00_162); 
BgL_res2037z00_2598 = 
!BGL_MKDIR(BgL_tmpz00_6863, ((long)511)); } 
return BgL_res2037z00_2598;} } } } } } } } 

}



/* &make-directories */
obj_t BGl_z62makezd2directorieszb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3458, obj_t BgL_stringz00_3459)
{
{ /* Ieee/port.scm 1451 */
{ /* Ieee/port.scm 1452 */
bool_t BgL_tmpz00_6866;
{ /* Ieee/port.scm 1452 */
obj_t BgL_auxz00_6867;
if(
STRINGP(BgL_stringz00_3459))
{ /* Ieee/port.scm 1452 */
BgL_auxz00_6867 = BgL_stringz00_3459
; }  else 
{ 
obj_t BgL_auxz00_6870;
BgL_auxz00_6870 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)65192)), BGl_string2950z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3459); 
FAILURE(BgL_auxz00_6870,BFALSE,BFALSE);} 
BgL_tmpz00_6866 = 
BGl_makezd2directorieszd2zz__r4_ports_6_10_1z00(BgL_auxz00_6867); } 
return 
BBOOL(BgL_tmpz00_6866);} } 

}



/* delete-directory */
BGL_EXPORTED_DEF obj_t BGl_deletezd2directoryzd2zz__r4_ports_6_10_1z00(char * BgL_stringz00_163)
{
{ /* Ieee/port.scm 1466 */
if(
rmdir(BgL_stringz00_163))
{ /* Ieee/port.scm 1467 */
return BFALSE;}  else 
{ /* Ieee/port.scm 1467 */
return BTRUE;} } 

}



/* &delete-directory */
obj_t BGl_z62deletezd2directoryzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3460, obj_t BgL_stringz00_3461)
{
{ /* Ieee/port.scm 1466 */
{ /* Ieee/port.scm 1467 */
char * BgL_auxz00_6878;
{ /* Ieee/port.scm 1467 */
obj_t BgL_tmpz00_6879;
if(
STRINGP(BgL_stringz00_3461))
{ /* Ieee/port.scm 1467 */
BgL_tmpz00_6879 = BgL_stringz00_3461
; }  else 
{ 
obj_t BgL_auxz00_6882;
BgL_auxz00_6882 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)65813)), BGl_string2951z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3461); 
FAILURE(BgL_auxz00_6882,BFALSE,BFALSE);} 
BgL_auxz00_6878 = 
BSTRING_TO_STRING(BgL_tmpz00_6879); } 
return 
BGl_deletezd2directoryzd2zz__r4_ports_6_10_1z00(BgL_auxz00_6878);} } 

}



/* rename-file */
BGL_EXPORTED_DEF bool_t BGl_renamezd2filezd2zz__r4_ports_6_10_1z00(char * BgL_string1z00_164, char * BgL_string2z00_165)
{
{ /* Ieee/port.scm 1472 */
{ /* Ieee/port.scm 1473 */
int BgL_arg1570z00_4133;
BgL_arg1570z00_4133 = 
rename(BgL_string1z00_164, BgL_string2z00_165); 
return 
(
BINT(BgL_arg1570z00_4133)==
BINT(((long)0)));} } 

}



/* &rename-file */
obj_t BGl_z62renamezd2filezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3462, obj_t BgL_string1z00_3463, obj_t BgL_string2z00_3464)
{
{ /* Ieee/port.scm 1472 */
{ /* Ieee/port.scm 1473 */
bool_t BgL_tmpz00_6892;
{ /* Ieee/port.scm 1473 */
char * BgL_auxz00_6902;char * BgL_auxz00_6893;
{ /* Ieee/port.scm 1473 */
obj_t BgL_tmpz00_6903;
if(
STRINGP(BgL_string2z00_3464))
{ /* Ieee/port.scm 1473 */
BgL_tmpz00_6903 = BgL_string2z00_3464
; }  else 
{ 
obj_t BgL_auxz00_6906;
BgL_auxz00_6906 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)66128)), BGl_string2952z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_string2z00_3464); 
FAILURE(BgL_auxz00_6906,BFALSE,BFALSE);} 
BgL_auxz00_6902 = 
BSTRING_TO_STRING(BgL_tmpz00_6903); } 
{ /* Ieee/port.scm 1473 */
obj_t BgL_tmpz00_6894;
if(
STRINGP(BgL_string1z00_3463))
{ /* Ieee/port.scm 1473 */
BgL_tmpz00_6894 = BgL_string1z00_3463
; }  else 
{ 
obj_t BgL_auxz00_6897;
BgL_auxz00_6897 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)66128)), BGl_string2952z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_string1z00_3463); 
FAILURE(BgL_auxz00_6897,BFALSE,BFALSE);} 
BgL_auxz00_6893 = 
BSTRING_TO_STRING(BgL_tmpz00_6894); } 
BgL_tmpz00_6892 = 
BGl_renamezd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_6893, BgL_auxz00_6902); } 
return 
BBOOL(BgL_tmpz00_6892);} } 

}



/* truncate-file */
BGL_EXPORTED_DEF bool_t BGl_truncatezd2filezd2zz__r4_ports_6_10_1z00(char * BgL_pathz00_166, long BgL_siza7eza7_167)
{
{ /* Ieee/port.scm 1478 */
{ /* Ieee/port.scm 1479 */
int BgL_xz00_4134;
BgL_xz00_4134 = 
truncate(BgL_pathz00_166, BgL_siza7eza7_167); 
return ((bool_t)1);} } 

}



/* &truncate-file */
obj_t BGl_z62truncatezd2filezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3465, obj_t BgL_pathz00_3466, obj_t BgL_siza7eza7_3467)
{
{ /* Ieee/port.scm 1478 */
{ /* Ieee/port.scm 1479 */
bool_t BgL_tmpz00_6914;
{ /* Ieee/port.scm 1479 */
long BgL_auxz00_6924;char * BgL_auxz00_6915;
{ /* Ieee/port.scm 1479 */
obj_t BgL_tmpz00_6925;
if(
INTEGERP(BgL_siza7eza7_3467))
{ /* Ieee/port.scm 1479 */
BgL_tmpz00_6925 = BgL_siza7eza7_3467
; }  else 
{ 
obj_t BgL_auxz00_6928;
BgL_auxz00_6928 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)66438)), BGl_string2953z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_siza7eza7_3467); 
FAILURE(BgL_auxz00_6928,BFALSE,BFALSE);} 
BgL_auxz00_6924 = 
(long)CINT(BgL_tmpz00_6925); } 
{ /* Ieee/port.scm 1479 */
obj_t BgL_tmpz00_6916;
if(
STRINGP(BgL_pathz00_3466))
{ /* Ieee/port.scm 1479 */
BgL_tmpz00_6916 = BgL_pathz00_3466
; }  else 
{ 
obj_t BgL_auxz00_6919;
BgL_auxz00_6919 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)66438)), BGl_string2953z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_pathz00_3466); 
FAILURE(BgL_auxz00_6919,BFALSE,BFALSE);} 
BgL_auxz00_6915 = 
BSTRING_TO_STRING(BgL_tmpz00_6916); } 
BgL_tmpz00_6914 = 
BGl_truncatezd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_6915, BgL_auxz00_6924); } 
return 
BBOOL(BgL_tmpz00_6914);} } 

}



/* output-port-truncate */
BGL_EXPORTED_DEF bool_t BGl_outputzd2portzd2truncatez00zz__r4_ports_6_10_1z00(obj_t BgL_oportz00_168, long BgL_siza7eza7_169)
{
{ /* Ieee/port.scm 1484 */
{ /* Ieee/port.scm 1485 */
int BgL_xz00_4135;
BgL_xz00_4135 = 
bgl_output_port_truncate(BgL_oportz00_168, BgL_siza7eza7_169); 
return ((bool_t)1);} } 

}



/* &output-port-truncate */
obj_t BGl_z62outputzd2portzd2truncatez62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3468, obj_t BgL_oportz00_3469, obj_t BgL_siza7eza7_3470)
{
{ /* Ieee/port.scm 1484 */
{ /* Ieee/port.scm 1485 */
bool_t BgL_tmpz00_6936;
{ /* Ieee/port.scm 1485 */
long BgL_auxz00_6944;obj_t BgL_auxz00_6937;
{ /* Ieee/port.scm 1485 */
obj_t BgL_tmpz00_6945;
if(
INTEGERP(BgL_siza7eza7_3470))
{ /* Ieee/port.scm 1485 */
BgL_tmpz00_6945 = BgL_siza7eza7_3470
; }  else 
{ 
obj_t BgL_auxz00_6948;
BgL_auxz00_6948 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)66741)), BGl_string2954z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_siza7eza7_3470); 
FAILURE(BgL_auxz00_6948,BFALSE,BFALSE);} 
BgL_auxz00_6944 = 
(long)CINT(BgL_tmpz00_6945); } 
if(
OUTPUT_PORTP(BgL_oportz00_3469))
{ /* Ieee/port.scm 1485 */
BgL_auxz00_6937 = BgL_oportz00_3469
; }  else 
{ 
obj_t BgL_auxz00_6940;
BgL_auxz00_6940 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)66741)), BGl_string2954z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_oportz00_3469); 
FAILURE(BgL_auxz00_6940,BFALSE,BFALSE);} 
BgL_tmpz00_6936 = 
BGl_outputzd2portzd2truncatez00zz__r4_ports_6_10_1z00(BgL_auxz00_6937, BgL_auxz00_6944); } 
return 
BBOOL(BgL_tmpz00_6936);} } 

}



/* copy-file */
BGL_EXPORTED_DEF obj_t BGl_copyzd2filezd2zz__r4_ports_6_10_1z00(char * BgL_string1z00_170, char * BgL_string2z00_171)
{
{ /* Ieee/port.scm 1490 */
{ /* Ieee/port.scm 1491 */
obj_t BgL_piz00_1881;obj_t BgL_poz00_1882;
BgL_piz00_1881 = 
BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(
string_to_bstring(BgL_string1z00_170)); 
BgL_poz00_1882 = 
BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(
string_to_bstring(BgL_string2z00_171)); 
if(
BINARY_PORTP(BgL_piz00_1881))
{ /* Ieee/port.scm 1494 */
if(
BINARY_PORTP(BgL_poz00_1882))
{ /* Ieee/port.scm 1501 */
obj_t BgL_sz00_1885;
{ /* Ieee/string.scm 168 */

BgL_sz00_1885 = 
make_string(((long)1024), ((unsigned char)' ')); } 
{ /* Ieee/port.scm 1502 */
int BgL_g1133z00_1886;
BgL_g1133z00_1886 = 
bgl_input_fill_string(BgL_piz00_1881, BgL_sz00_1885); 
{ 
int BgL_lz00_1888;
{ /* Ieee/port.scm 1502 */
bool_t BgL_tmpz00_6965;
BgL_lz00_1888 = BgL_g1133z00_1886; 
BgL_zc3z04anonymousza31573ze3z87_1889:
if(
(
(long)(BgL_lz00_1888)==((long)1024)))
{ /* Ieee/port.scm 1503 */
bgl_output_string(
((obj_t)BgL_poz00_1882), BgL_sz00_1885); 
{ /* Ieee/port.scm 1506 */
int BgL_arg1575z00_1891;
{ /* Ieee/port.scm 1506 */
int BgL_res2043z00_2615;
BgL_res2043z00_2615 = 
bgl_input_fill_string(
((obj_t)BgL_piz00_1881), BgL_sz00_1885); 
BgL_arg1575z00_1891 = BgL_res2043z00_2615; } 
{ 
int BgL_lz00_6973;
BgL_lz00_6973 = BgL_arg1575z00_1891; 
BgL_lz00_1888 = BgL_lz00_6973; 
goto BgL_zc3z04anonymousza31573ze3z87_1889;} } }  else 
{ /* Ieee/port.scm 1503 */
{ /* Ieee/port.scm 1508 */
obj_t BgL_arg1577z00_1892;
{ /* Ieee/port.scm 1508 */
long BgL_tmpz00_6974;
BgL_tmpz00_6974 = 
(long)(BgL_lz00_1888); 
BgL_arg1577z00_1892 = 
bgl_string_shrink(BgL_sz00_1885, BgL_tmpz00_6974); } 
bgl_output_string(
((obj_t)BgL_poz00_1882), BgL_arg1577z00_1892); } 
close_binary_port(
((obj_t)BgL_piz00_1881)); 
close_binary_port(
((obj_t)BgL_poz00_1882)); 
BgL_tmpz00_6965 = ((bool_t)1); } 
return 
BBOOL(BgL_tmpz00_6965);} } } }  else 
{ /* Ieee/port.scm 1497 */
close_binary_port(BgL_piz00_1881); 
return BFALSE;} }  else 
{ /* Ieee/port.scm 1494 */
if(
BINARY_PORTP(BgL_poz00_1882))
{ /* Ieee/port.scm 1495 */
close_binary_port(BgL_poz00_1882); }  else 
{ /* Ieee/port.scm 1495 */BFALSE; } 
return BFALSE;} } } 

}



/* &copy-file */
obj_t BGl_z62copyzd2filezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3471, obj_t BgL_string1z00_3472, obj_t BgL_string2z00_3473)
{
{ /* Ieee/port.scm 1490 */
{ /* Ieee/port.scm 1491 */
char * BgL_auxz00_6997;char * BgL_auxz00_6988;
{ /* Ieee/port.scm 1491 */
obj_t BgL_tmpz00_6998;
if(
STRINGP(BgL_string2z00_3473))
{ /* Ieee/port.scm 1491 */
BgL_tmpz00_6998 = BgL_string2z00_3473
; }  else 
{ 
obj_t BgL_auxz00_7001;
BgL_auxz00_7001 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)67028)), BGl_string2955z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_string2z00_3473); 
FAILURE(BgL_auxz00_7001,BFALSE,BFALSE);} 
BgL_auxz00_6997 = 
BSTRING_TO_STRING(BgL_tmpz00_6998); } 
{ /* Ieee/port.scm 1491 */
obj_t BgL_tmpz00_6989;
if(
STRINGP(BgL_string1z00_3472))
{ /* Ieee/port.scm 1491 */
BgL_tmpz00_6989 = BgL_string1z00_3472
; }  else 
{ 
obj_t BgL_auxz00_6992;
BgL_auxz00_6992 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)67028)), BGl_string2955z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_string1z00_3472); 
FAILURE(BgL_auxz00_6992,BFALSE,BFALSE);} 
BgL_auxz00_6988 = 
BSTRING_TO_STRING(BgL_tmpz00_6989); } 
return 
BGl_copyzd2filezd2zz__r4_ports_6_10_1z00(BgL_auxz00_6988, BgL_auxz00_6997);} } 

}



/* port? */
BGL_EXPORTED_DEF bool_t BGl_portzf3zf3zz__r4_ports_6_10_1z00(obj_t BgL_objz00_172)
{
{ /* Ieee/port.scm 1516 */
{ /* Ieee/port.scm 1517 */
bool_t BgL__ortest_1134z00_4136;
BgL__ortest_1134z00_4136 = 
OUTPUT_PORTP(BgL_objz00_172); 
if(BgL__ortest_1134z00_4136)
{ /* Ieee/port.scm 1517 */
return BgL__ortest_1134z00_4136;}  else 
{ /* Ieee/port.scm 1517 */
return 
INPUT_PORTP(BgL_objz00_172);} } } 

}



/* &port? */
obj_t BGl_z62portzf3z91zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3474, obj_t BgL_objz00_3475)
{
{ /* Ieee/port.scm 1516 */
return 
BBOOL(
BGl_portzf3zf3zz__r4_ports_6_10_1z00(BgL_objz00_3475));} 

}



/* directory? */
BGL_EXPORTED_DEF bool_t BGl_directoryzf3zf3zz__r4_ports_6_10_1z00(char * BgL_stringz00_173)
{
{ /* Ieee/port.scm 1522 */
return 
bgl_directoryp(BgL_stringz00_173);} 

}



/* &directory? */
obj_t BGl_z62directoryzf3z91zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3476, obj_t BgL_stringz00_3477)
{
{ /* Ieee/port.scm 1522 */
{ /* Ieee/port.scm 1523 */
bool_t BgL_tmpz00_7013;
{ /* Ieee/port.scm 1523 */
char * BgL_auxz00_7014;
{ /* Ieee/port.scm 1523 */
obj_t BgL_tmpz00_7015;
if(
STRINGP(BgL_stringz00_3477))
{ /* Ieee/port.scm 1523 */
BgL_tmpz00_7015 = BgL_stringz00_3477
; }  else 
{ 
obj_t BgL_auxz00_7018;
BgL_auxz00_7018 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)68166)), BGl_string2956z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3477); 
FAILURE(BgL_auxz00_7018,BFALSE,BFALSE);} 
BgL_auxz00_7014 = 
BSTRING_TO_STRING(BgL_tmpz00_7015); } 
BgL_tmpz00_7013 = 
BGl_directoryzf3zf3zz__r4_ports_6_10_1z00(BgL_auxz00_7014); } 
return 
BBOOL(BgL_tmpz00_7013);} } 

}



/* directory->list */
BGL_EXPORTED_DEF obj_t BGl_directoryzd2ze3listz31zz__r4_ports_6_10_1z00(char * BgL_stringz00_174)
{
{ /* Ieee/port.scm 1528 */
return 
bgl_directory_to_list(BgL_stringz00_174);} 

}



/* &directory->list */
obj_t BGl_z62directoryzd2ze3listz53zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3478, obj_t BgL_stringz00_3479)
{
{ /* Ieee/port.scm 1528 */
{ /* Ieee/port.scm 1529 */
char * BgL_auxz00_7026;
{ /* Ieee/port.scm 1529 */
obj_t BgL_tmpz00_7027;
if(
STRINGP(BgL_stringz00_3479))
{ /* Ieee/port.scm 1529 */
BgL_tmpz00_7027 = BgL_stringz00_3479
; }  else 
{ 
obj_t BgL_auxz00_7030;
BgL_auxz00_7030 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)68454)), BGl_string2957z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_stringz00_3479); 
FAILURE(BgL_auxz00_7030,BFALSE,BFALSE);} 
BgL_auxz00_7026 = 
BSTRING_TO_STRING(BgL_tmpz00_7027); } 
return 
BGl_directoryzd2ze3listz31zz__r4_ports_6_10_1z00(BgL_auxz00_7026);} } 

}



/* directory->path-list */
BGL_EXPORTED_DEF obj_t BGl_directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00(obj_t BgL_dirz00_175)
{
{ /* Ieee/port.scm 1534 */
{ /* Ieee/port.scm 1535 */
long BgL_lz00_1898;
BgL_lz00_1898 = 
STRING_LENGTH(BgL_dirz00_175); 
if(
(BgL_lz00_1898==((long)0)))
{ /* Ieee/port.scm 1537 */
return BNIL;}  else 
{ /* Ieee/port.scm 1539 */
bool_t BgL_test3665z00_7039;
{ /* Ieee/port.scm 1539 */
unsigned char BgL_char2z00_2636;
BgL_char2z00_2636 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Ieee/port.scm 1539 */
unsigned char BgL_tmpz00_7041;
{ /* Ieee/port.scm 1539 */
long BgL_i2164z00_3519;
BgL_i2164z00_3519 = 
(BgL_lz00_1898-((long)1)); 
if(
BOUND_CHECK(BgL_i2164z00_3519, BgL_lz00_1898))
{ /* Ieee/port.scm 1539 */
BgL_tmpz00_7041 = 
STRING_REF(BgL_dirz00_175, BgL_i2164z00_3519)
; }  else 
{ 
obj_t BgL_auxz00_7046;
BgL_auxz00_7046 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)68817)), BGl_string2949z00zz__r4_ports_6_10_1z00, BgL_dirz00_175, 
(int)(BgL_lz00_1898), 
(int)(BgL_i2164z00_3519)); 
FAILURE(BgL_auxz00_7046,BFALSE,BFALSE);} } 
BgL_test3665z00_7039 = 
(BgL_tmpz00_7041==BgL_char2z00_2636); } } 
if(BgL_test3665z00_7039)
{ /* Ieee/port.scm 1542 */
long BgL_arg1587z00_1904;
BgL_arg1587z00_1904 = 
(BgL_lz00_1898-((long)1)); 
return 
bgl_directory_to_path_list(
BSTRING_TO_STRING(BgL_dirz00_175), 
(int)(BgL_arg1587z00_1904), FILE_SEPARATOR);}  else 
{ /* Ieee/port.scm 1539 */
return 
bgl_directory_to_path_list(
BSTRING_TO_STRING(BgL_dirz00_175), 
(int)(BgL_lz00_1898), FILE_SEPARATOR);} } } } 

}



/* &directory->path-list */
obj_t BGl_z62directoryzd2ze3pathzd2listz81zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3480, obj_t BgL_dirz00_3481)
{
{ /* Ieee/port.scm 1534 */
{ /* Ieee/port.scm 1535 */
obj_t BgL_auxz00_7060;
if(
STRINGP(BgL_dirz00_3481))
{ /* Ieee/port.scm 1535 */
BgL_auxz00_7060 = BgL_dirz00_3481
; }  else 
{ 
obj_t BgL_auxz00_7063;
BgL_auxz00_7063 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)68742)), BGl_string2958z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_dirz00_3481); 
FAILURE(BgL_auxz00_7063,BFALSE,BFALSE);} 
return 
BGl_directoryzd2ze3pathzd2listze3zz__r4_ports_6_10_1z00(BgL_auxz00_7060);} } 

}



/* file-modification-time */
BGL_EXPORTED_DEF long BGl_filezd2modificationzd2timez00zz__r4_ports_6_10_1z00(char * BgL_filez00_176)
{
{ /* Ieee/port.scm 1557 */
return 
bgl_last_modification_time(BgL_filez00_176);} 

}



/* &file-modification-time */
obj_t BGl_z62filezd2modificationzd2timez62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3482, obj_t BgL_filez00_3483)
{
{ /* Ieee/port.scm 1557 */
{ /* Ieee/port.scm 1558 */
long BgL_tmpz00_7069;
{ /* Ieee/port.scm 1558 */
char * BgL_auxz00_7070;
{ /* Ieee/port.scm 1558 */
obj_t BgL_tmpz00_7071;
if(
STRINGP(BgL_filez00_3483))
{ /* Ieee/port.scm 1558 */
BgL_tmpz00_7071 = BgL_filez00_3483
; }  else 
{ 
obj_t BgL_auxz00_7074;
BgL_auxz00_7074 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)69515)), BGl_string2959z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_filez00_3483); 
FAILURE(BgL_auxz00_7074,BFALSE,BFALSE);} 
BgL_auxz00_7070 = 
BSTRING_TO_STRING(BgL_tmpz00_7071); } 
BgL_tmpz00_7069 = 
BGl_filezd2modificationzd2timez00zz__r4_ports_6_10_1z00(BgL_auxz00_7070); } 
return 
make_belong(BgL_tmpz00_7069);} } 

}



/* file-change-time */
BGL_EXPORTED_DEF long BGl_filezd2changezd2timez00zz__r4_ports_6_10_1z00(char * BgL_filez00_177)
{
{ /* Ieee/port.scm 1563 */
return 
bgl_last_change_time(BgL_filez00_177);} 

}



/* &file-change-time */
obj_t BGl_z62filezd2changezd2timez62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3484, obj_t BgL_filez00_3485)
{
{ /* Ieee/port.scm 1563 */
{ /* Ieee/port.scm 1564 */
long BgL_tmpz00_7082;
{ /* Ieee/port.scm 1564 */
char * BgL_auxz00_7083;
{ /* Ieee/port.scm 1564 */
obj_t BgL_tmpz00_7084;
if(
STRINGP(BgL_filez00_3485))
{ /* Ieee/port.scm 1564 */
BgL_tmpz00_7084 = BgL_filez00_3485
; }  else 
{ 
obj_t BgL_auxz00_7087;
BgL_auxz00_7087 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)69807)), BGl_string2960z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_filez00_3485); 
FAILURE(BgL_auxz00_7087,BFALSE,BFALSE);} 
BgL_auxz00_7083 = 
BSTRING_TO_STRING(BgL_tmpz00_7084); } 
BgL_tmpz00_7082 = 
BGl_filezd2changezd2timez00zz__r4_ports_6_10_1z00(BgL_auxz00_7083); } 
return 
make_belong(BgL_tmpz00_7082);} } 

}



/* file-access-time */
BGL_EXPORTED_DEF long BGl_filezd2accesszd2timez00zz__r4_ports_6_10_1z00(char * BgL_filez00_178)
{
{ /* Ieee/port.scm 1569 */
return 
bgl_last_access_time(BgL_filez00_178);} 

}



/* &file-access-time */
obj_t BGl_z62filezd2accesszd2timez62zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3486, obj_t BgL_filez00_3487)
{
{ /* Ieee/port.scm 1569 */
{ /* Ieee/port.scm 1570 */
long BgL_tmpz00_7095;
{ /* Ieee/port.scm 1570 */
char * BgL_auxz00_7096;
{ /* Ieee/port.scm 1570 */
obj_t BgL_tmpz00_7097;
if(
STRINGP(BgL_filez00_3487))
{ /* Ieee/port.scm 1570 */
BgL_tmpz00_7097 = BgL_filez00_3487
; }  else 
{ 
obj_t BgL_auxz00_7100;
BgL_auxz00_7100 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)70093)), BGl_string2961z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_filez00_3487); 
FAILURE(BgL_auxz00_7100,BFALSE,BFALSE);} 
BgL_auxz00_7096 = 
BSTRING_TO_STRING(BgL_tmpz00_7097); } 
BgL_tmpz00_7095 = 
BGl_filezd2accesszd2timez00zz__r4_ports_6_10_1z00(BgL_auxz00_7096); } 
return 
make_belong(BgL_tmpz00_7095);} } 

}



/* file-times-set! */
BGL_EXPORTED_DEF int BGl_filezd2timeszd2setz12z12zz__r4_ports_6_10_1z00(char * BgL_filez00_179, long BgL_atimez00_180, long BgL_mtimez00_181)
{
{ /* Ieee/port.scm 1575 */
return 
bgl_utime(BgL_filez00_179, BgL_atimez00_180, BgL_mtimez00_181);} 

}



/* &file-times-set! */
obj_t BGl_z62filezd2timeszd2setz12z70zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3488, obj_t BgL_filez00_3489, obj_t BgL_atimez00_3490, obj_t BgL_mtimez00_3491)
{
{ /* Ieee/port.scm 1575 */
{ /* Ieee/port.scm 1576 */
int BgL_tmpz00_7108;
{ /* Ieee/port.scm 1576 */
long BgL_auxz00_7127;long BgL_auxz00_7118;char * BgL_auxz00_7109;
{ /* Ieee/port.scm 1576 */
obj_t BgL_tmpz00_7128;
if(
ELONGP(BgL_mtimez00_3491))
{ /* Ieee/port.scm 1576 */
BgL_tmpz00_7128 = BgL_mtimez00_3491
; }  else 
{ 
obj_t BgL_auxz00_7131;
BgL_auxz00_7131 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)70390)), BGl_string2962z00zz__r4_ports_6_10_1z00, BGl_string2963z00zz__r4_ports_6_10_1z00, BgL_mtimez00_3491); 
FAILURE(BgL_auxz00_7131,BFALSE,BFALSE);} 
BgL_auxz00_7127 = 
BELONG_TO_LONG(BgL_tmpz00_7128); } 
{ /* Ieee/port.scm 1576 */
obj_t BgL_tmpz00_7119;
if(
ELONGP(BgL_atimez00_3490))
{ /* Ieee/port.scm 1576 */
BgL_tmpz00_7119 = BgL_atimez00_3490
; }  else 
{ 
obj_t BgL_auxz00_7122;
BgL_auxz00_7122 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)70390)), BGl_string2962z00zz__r4_ports_6_10_1z00, BGl_string2963z00zz__r4_ports_6_10_1z00, BgL_atimez00_3490); 
FAILURE(BgL_auxz00_7122,BFALSE,BFALSE);} 
BgL_auxz00_7118 = 
BELONG_TO_LONG(BgL_tmpz00_7119); } 
{ /* Ieee/port.scm 1576 */
obj_t BgL_tmpz00_7110;
if(
STRINGP(BgL_filez00_3489))
{ /* Ieee/port.scm 1576 */
BgL_tmpz00_7110 = BgL_filez00_3489
; }  else 
{ 
obj_t BgL_auxz00_7113;
BgL_auxz00_7113 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)70390)), BGl_string2962z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_filez00_3489); 
FAILURE(BgL_auxz00_7113,BFALSE,BFALSE);} 
BgL_auxz00_7109 = 
BSTRING_TO_STRING(BgL_tmpz00_7110); } 
BgL_tmpz00_7108 = 
BGl_filezd2timeszd2setz12z12zz__r4_ports_6_10_1z00(BgL_auxz00_7109, BgL_auxz00_7118, BgL_auxz00_7127); } 
return 
BINT(BgL_tmpz00_7108);} } 

}



/* file-size */
BGL_EXPORTED_DEF long BGl_filezd2siza7ez75zz__r4_ports_6_10_1z00(char * BgL_filez00_182)
{
{ /* Ieee/port.scm 1581 */
return 
bgl_file_size(BgL_filez00_182);} 

}



/* &file-size */
obj_t BGl_z62filezd2siza7ez17zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3492, obj_t BgL_filez00_3493)
{
{ /* Ieee/port.scm 1581 */
{ /* Ieee/port.scm 1582 */
long BgL_tmpz00_7139;
{ /* Ieee/port.scm 1582 */
char * BgL_auxz00_7140;
{ /* Ieee/port.scm 1582 */
obj_t BgL_tmpz00_7141;
if(
STRINGP(BgL_filez00_3493))
{ /* Ieee/port.scm 1582 */
BgL_tmpz00_7141 = BgL_filez00_3493
; }  else 
{ 
obj_t BgL_auxz00_7144;
BgL_auxz00_7144 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)70675)), BGl_string2964z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_filez00_3493); 
FAILURE(BgL_auxz00_7144,BFALSE,BFALSE);} 
BgL_auxz00_7140 = 
BSTRING_TO_STRING(BgL_tmpz00_7141); } 
BgL_tmpz00_7139 = 
BGl_filezd2siza7ez75zz__r4_ports_6_10_1z00(BgL_auxz00_7140); } 
return 
make_belong(BgL_tmpz00_7139);} } 

}



/* file-uid */
BGL_EXPORTED_DEF int BGl_filezd2uidzd2zz__r4_ports_6_10_1z00(char * BgL_filez00_183)
{
{ /* Ieee/port.scm 1587 */
return 
(int)(
bgl_file_uid(BgL_filez00_183));} 

}



/* &file-uid */
obj_t BGl_z62filezd2uidzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3494, obj_t BgL_filez00_3495)
{
{ /* Ieee/port.scm 1587 */
{ /* Ieee/port.scm 1588 */
int BgL_tmpz00_7153;
{ /* Ieee/port.scm 1588 */
char * BgL_auxz00_7154;
{ /* Ieee/port.scm 1588 */
obj_t BgL_tmpz00_7155;
if(
STRINGP(BgL_filez00_3495))
{ /* Ieee/port.scm 1588 */
BgL_tmpz00_7155 = BgL_filez00_3495
; }  else 
{ 
obj_t BgL_auxz00_7158;
BgL_auxz00_7158 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)70951)), BGl_string2965z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_filez00_3495); 
FAILURE(BgL_auxz00_7158,BFALSE,BFALSE);} 
BgL_auxz00_7154 = 
BSTRING_TO_STRING(BgL_tmpz00_7155); } 
BgL_tmpz00_7153 = 
BGl_filezd2uidzd2zz__r4_ports_6_10_1z00(BgL_auxz00_7154); } 
return 
BINT(BgL_tmpz00_7153);} } 

}



/* file-gid */
BGL_EXPORTED_DEF int BGl_filezd2gidzd2zz__r4_ports_6_10_1z00(char * BgL_filez00_184)
{
{ /* Ieee/port.scm 1593 */
return 
(int)(
bgl_file_gid(BgL_filez00_184));} 

}



/* &file-gid */
obj_t BGl_z62filezd2gidzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3496, obj_t BgL_filez00_3497)
{
{ /* Ieee/port.scm 1593 */
{ /* Ieee/port.scm 1594 */
int BgL_tmpz00_7167;
{ /* Ieee/port.scm 1594 */
char * BgL_auxz00_7168;
{ /* Ieee/port.scm 1594 */
obj_t BgL_tmpz00_7169;
if(
STRINGP(BgL_filez00_3497))
{ /* Ieee/port.scm 1594 */
BgL_tmpz00_7169 = BgL_filez00_3497
; }  else 
{ 
obj_t BgL_auxz00_7172;
BgL_auxz00_7172 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)71226)), BGl_string2966z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_filez00_3497); 
FAILURE(BgL_auxz00_7172,BFALSE,BFALSE);} 
BgL_auxz00_7168 = 
BSTRING_TO_STRING(BgL_tmpz00_7169); } 
BgL_tmpz00_7167 = 
BGl_filezd2gidzd2zz__r4_ports_6_10_1z00(BgL_auxz00_7168); } 
return 
BINT(BgL_tmpz00_7167);} } 

}



/* file-mode */
BGL_EXPORTED_DEF int BGl_filezd2modezd2zz__r4_ports_6_10_1z00(char * BgL_filez00_185)
{
{ /* Ieee/port.scm 1599 */
return 
(int)(
bgl_file_mode(BgL_filez00_185));} 

}



/* &file-mode */
obj_t BGl_z62filezd2modezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3498, obj_t BgL_filez00_3499)
{
{ /* Ieee/port.scm 1599 */
{ /* Ieee/port.scm 1600 */
int BgL_tmpz00_7181;
{ /* Ieee/port.scm 1600 */
char * BgL_auxz00_7182;
{ /* Ieee/port.scm 1600 */
obj_t BgL_tmpz00_7183;
if(
STRINGP(BgL_filez00_3499))
{ /* Ieee/port.scm 1600 */
BgL_tmpz00_7183 = BgL_filez00_3499
; }  else 
{ 
obj_t BgL_auxz00_7186;
BgL_auxz00_7186 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)71502)), BGl_string2967z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_filez00_3499); 
FAILURE(BgL_auxz00_7186,BFALSE,BFALSE);} 
BgL_auxz00_7182 = 
BSTRING_TO_STRING(BgL_tmpz00_7183); } 
BgL_tmpz00_7181 = 
BGl_filezd2modezd2zz__r4_ports_6_10_1z00(BgL_auxz00_7182); } 
return 
BINT(BgL_tmpz00_7181);} } 

}



/* file-type */
BGL_EXPORTED_DEF obj_t BGl_filezd2typezd2zz__r4_ports_6_10_1z00(char * BgL_filez00_186)
{
{ /* Ieee/port.scm 1605 */
return 
bgl_file_type(BgL_filez00_186);} 

}



/* &file-type */
obj_t BGl_z62filezd2typezb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3500, obj_t BgL_filez00_3501)
{
{ /* Ieee/port.scm 1605 */
{ /* Ieee/port.scm 1606 */
char * BgL_auxz00_7194;
{ /* Ieee/port.scm 1606 */
obj_t BgL_tmpz00_7195;
if(
STRINGP(BgL_filez00_3501))
{ /* Ieee/port.scm 1606 */
BgL_tmpz00_7195 = BgL_filez00_3501
; }  else 
{ 
obj_t BgL_auxz00_7198;
BgL_auxz00_7198 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)71779)), BGl_string2968z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_filez00_3501); 
FAILURE(BgL_auxz00_7198,BFALSE,BFALSE);} 
BgL_auxz00_7194 = 
BSTRING_TO_STRING(BgL_tmpz00_7195); } 
return 
BGl_filezd2typezd2zz__r4_ports_6_10_1z00(BgL_auxz00_7194);} } 

}



/* make-symlink */
BGL_EXPORTED_DEF obj_t BGl_makezd2symlinkzd2zz__r4_ports_6_10_1z00(obj_t BgL_path1z00_187, obj_t BgL_path2z00_188)
{
{ /* Ieee/port.scm 1611 */
return 
BINT(
bgl_symlink(
BSTRING_TO_STRING(BgL_path1z00_187), 
BSTRING_TO_STRING(BgL_path2z00_188)));} 

}



/* &make-symlink */
obj_t BGl_z62makezd2symlinkzb0zz__r4_ports_6_10_1z00(obj_t BgL_envz00_3502, obj_t BgL_path1z00_3503, obj_t BgL_path2z00_3504)
{
{ /* Ieee/port.scm 1611 */
{ /* Ieee/port.scm 1612 */
obj_t BgL_auxz00_7215;obj_t BgL_auxz00_7208;
if(
STRINGP(BgL_path2z00_3504))
{ /* Ieee/port.scm 1612 */
BgL_auxz00_7215 = BgL_path2z00_3504
; }  else 
{ 
obj_t BgL_auxz00_7218;
BgL_auxz00_7218 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72066)), BGl_string2969z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_path2z00_3504); 
FAILURE(BgL_auxz00_7218,BFALSE,BFALSE);} 
if(
STRINGP(BgL_path1z00_3503))
{ /* Ieee/port.scm 1612 */
BgL_auxz00_7208 = BgL_path1z00_3503
; }  else 
{ 
obj_t BgL_auxz00_7211;
BgL_auxz00_7211 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72066)), BGl_string2969z00zz__r4_ports_6_10_1z00, BGl_string2717z00zz__r4_ports_6_10_1z00, BgL_path1z00_3503); 
FAILURE(BgL_auxz00_7211,BFALSE,BFALSE);} 
return 
BGl_makezd2symlinkzd2zz__r4_ports_6_10_1z00(BgL_auxz00_7208, BgL_auxz00_7215);} } 

}



/* _select */
obj_t BGl__selectz00zz__r4_ports_6_10_1z00(obj_t BgL_env1260z00_194, obj_t BgL_opt1259z00_193)
{
{ /* Ieee/port.scm 1617 */
{ /* Ieee/port.scm 1617 */

{ /* Ieee/port.scm 1617 */
obj_t BgL_exceptz00_4137;
BgL_exceptz00_4137 = BNIL; 
{ /* Ieee/port.scm 1617 */
obj_t BgL_readz00_4138;
BgL_readz00_4138 = BNIL; 
{ /* Ieee/port.scm 1617 */
obj_t BgL_timeoutz00_4139;
BgL_timeoutz00_4139 = 
BINT(((long)0)); 
{ /* Ieee/port.scm 1617 */
obj_t BgL_writez00_4140;
BgL_writez00_4140 = BNIL; 
{ /* Ieee/port.scm 1617 */

{ 
long BgL_iz00_4142;
BgL_iz00_4142 = ((long)0); 
BgL_check1263z00_4141:
if(
(BgL_iz00_4142==
VECTOR_LENGTH(BgL_opt1259z00_193)))
{ /* Ieee/port.scm 1617 */BNIL; }  else 
{ /* Ieee/port.scm 1617 */
bool_t BgL_test3682z00_7227;
{ /* Ieee/port.scm 1617 */
obj_t BgL_arg1604z00_4143;
{ /* Ieee/port.scm 1617 */
bool_t BgL_test3683z00_7228;
{ /* Ieee/port.scm 1617 */
long BgL_tmpz00_7229;
BgL_tmpz00_7229 = 
VECTOR_LENGTH(BgL_opt1259z00_193); 
BgL_test3683z00_7228 = 
BOUND_CHECK(BgL_iz00_4142, BgL_tmpz00_7229); } 
if(BgL_test3683z00_7228)
{ /* Ieee/port.scm 1617 */
BgL_arg1604z00_4143 = 
VECTOR_REF(BgL_opt1259z00_193,BgL_iz00_4142); }  else 
{ 
obj_t BgL_auxz00_7233;
BgL_auxz00_7233 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72320)), BGl_string2970z00zz__r4_ports_6_10_1z00, BgL_opt1259z00_193, 
(int)(
VECTOR_LENGTH(BgL_opt1259z00_193)), 
(int)(BgL_iz00_4142)); 
FAILURE(BgL_auxz00_7233,BFALSE,BFALSE);} } 
BgL_test3682z00_7227 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1604z00_4143, BGl_list2971z00zz__r4_ports_6_10_1z00)); } 
if(BgL_test3682z00_7227)
{ 
long BgL_iz00_7242;
BgL_iz00_7242 = 
(BgL_iz00_4142+((long)2)); 
BgL_iz00_4142 = BgL_iz00_7242; 
goto BgL_check1263z00_4141;}  else 
{ /* Ieee/port.scm 1617 */
obj_t BgL_arg1603z00_4144;
{ /* Ieee/port.scm 1617 */
bool_t BgL_test3684z00_7244;
{ /* Ieee/port.scm 1617 */
long BgL_tmpz00_7245;
BgL_tmpz00_7245 = 
VECTOR_LENGTH(BgL_opt1259z00_193); 
BgL_test3684z00_7244 = 
BOUND_CHECK(BgL_iz00_4142, BgL_tmpz00_7245); } 
if(BgL_test3684z00_7244)
{ /* Ieee/port.scm 1617 */
BgL_arg1603z00_4144 = 
VECTOR_REF(BgL_opt1259z00_193,BgL_iz00_4142); }  else 
{ 
obj_t BgL_auxz00_7249;
BgL_auxz00_7249 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72320)), BGl_string2970z00zz__r4_ports_6_10_1z00, BgL_opt1259z00_193, 
(int)(
VECTOR_LENGTH(BgL_opt1259z00_193)), 
(int)(BgL_iz00_4142)); 
FAILURE(BgL_auxz00_7249,BFALSE,BFALSE);} } 
BGl_errorz00zz__errorz00(BGl_symbol2979z00zz__r4_ports_6_10_1z00, BGl_string2981z00zz__r4_ports_6_10_1z00, BgL_arg1603z00_4144); } } } 
{ /* Ieee/port.scm 1617 */
obj_t BgL_index1265z00_4145;
BgL_index1265z00_4145 = 
BGl_search1262ze70ze7zz__r4_ports_6_10_1z00(
VECTOR_LENGTH(BgL_opt1259z00_193), BgL_opt1259z00_193, BGl_keyword2972z00zz__r4_ports_6_10_1z00, ((long)0)); 
{ /* Ieee/port.scm 1617 */
bool_t BgL_test3685z00_7259;
{ /* Ieee/port.scm 1617 */
long BgL_n1z00_4146;
{ /* Ieee/port.scm 1617 */
obj_t BgL_tmpz00_7260;
if(
INTEGERP(BgL_index1265z00_4145))
{ /* Ieee/port.scm 1617 */
BgL_tmpz00_7260 = BgL_index1265z00_4145
; }  else 
{ 
obj_t BgL_auxz00_7263;
BgL_auxz00_7263 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72320)), BGl_string2982z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_index1265z00_4145); 
FAILURE(BgL_auxz00_7263,BFALSE,BFALSE);} 
BgL_n1z00_4146 = 
(long)CINT(BgL_tmpz00_7260); } 
BgL_test3685z00_7259 = 
(BgL_n1z00_4146>=((long)0)); } 
if(BgL_test3685z00_7259)
{ 
long BgL_auxz00_7269;
{ /* Ieee/port.scm 1617 */
obj_t BgL_tmpz00_7270;
if(
INTEGERP(BgL_index1265z00_4145))
{ /* Ieee/port.scm 1617 */
BgL_tmpz00_7270 = BgL_index1265z00_4145
; }  else 
{ 
obj_t BgL_auxz00_7273;
BgL_auxz00_7273 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72320)), BGl_string2982z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_index1265z00_4145); 
FAILURE(BgL_auxz00_7273,BFALSE,BFALSE);} 
BgL_auxz00_7269 = 
(long)CINT(BgL_tmpz00_7270); } 
BgL_exceptz00_4137 = 
VECTOR_REF(BgL_opt1259z00_193,BgL_auxz00_7269); }  else 
{ /* Ieee/port.scm 1617 */BFALSE; } } } 
{ /* Ieee/port.scm 1617 */
obj_t BgL_index1266z00_4147;
BgL_index1266z00_4147 = 
BGl_search1262ze70ze7zz__r4_ports_6_10_1z00(
VECTOR_LENGTH(BgL_opt1259z00_193), BgL_opt1259z00_193, BGl_keyword2974z00zz__r4_ports_6_10_1z00, ((long)0)); 
{ /* Ieee/port.scm 1617 */
bool_t BgL_test3688z00_7281;
{ /* Ieee/port.scm 1617 */
long BgL_n1z00_4148;
{ /* Ieee/port.scm 1617 */
obj_t BgL_tmpz00_7282;
if(
INTEGERP(BgL_index1266z00_4147))
{ /* Ieee/port.scm 1617 */
BgL_tmpz00_7282 = BgL_index1266z00_4147
; }  else 
{ 
obj_t BgL_auxz00_7285;
BgL_auxz00_7285 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72320)), BGl_string2982z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_index1266z00_4147); 
FAILURE(BgL_auxz00_7285,BFALSE,BFALSE);} 
BgL_n1z00_4148 = 
(long)CINT(BgL_tmpz00_7282); } 
BgL_test3688z00_7281 = 
(BgL_n1z00_4148>=((long)0)); } 
if(BgL_test3688z00_7281)
{ 
long BgL_auxz00_7291;
{ /* Ieee/port.scm 1617 */
obj_t BgL_tmpz00_7292;
if(
INTEGERP(BgL_index1266z00_4147))
{ /* Ieee/port.scm 1617 */
BgL_tmpz00_7292 = BgL_index1266z00_4147
; }  else 
{ 
obj_t BgL_auxz00_7295;
BgL_auxz00_7295 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72320)), BGl_string2982z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_index1266z00_4147); 
FAILURE(BgL_auxz00_7295,BFALSE,BFALSE);} 
BgL_auxz00_7291 = 
(long)CINT(BgL_tmpz00_7292); } 
BgL_readz00_4138 = 
VECTOR_REF(BgL_opt1259z00_193,BgL_auxz00_7291); }  else 
{ /* Ieee/port.scm 1617 */BFALSE; } } } 
{ /* Ieee/port.scm 1617 */
obj_t BgL_index1267z00_4149;
BgL_index1267z00_4149 = 
BGl_search1262ze70ze7zz__r4_ports_6_10_1z00(
VECTOR_LENGTH(BgL_opt1259z00_193), BgL_opt1259z00_193, BGl_keyword2976z00zz__r4_ports_6_10_1z00, ((long)0)); 
{ /* Ieee/port.scm 1617 */
bool_t BgL_test3691z00_7303;
{ /* Ieee/port.scm 1617 */
long BgL_n1z00_4150;
{ /* Ieee/port.scm 1617 */
obj_t BgL_tmpz00_7304;
if(
INTEGERP(BgL_index1267z00_4149))
{ /* Ieee/port.scm 1617 */
BgL_tmpz00_7304 = BgL_index1267z00_4149
; }  else 
{ 
obj_t BgL_auxz00_7307;
BgL_auxz00_7307 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72320)), BGl_string2982z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_index1267z00_4149); 
FAILURE(BgL_auxz00_7307,BFALSE,BFALSE);} 
BgL_n1z00_4150 = 
(long)CINT(BgL_tmpz00_7304); } 
BgL_test3691z00_7303 = 
(BgL_n1z00_4150>=((long)0)); } 
if(BgL_test3691z00_7303)
{ 
long BgL_auxz00_7313;
{ /* Ieee/port.scm 1617 */
obj_t BgL_tmpz00_7314;
if(
INTEGERP(BgL_index1267z00_4149))
{ /* Ieee/port.scm 1617 */
BgL_tmpz00_7314 = BgL_index1267z00_4149
; }  else 
{ 
obj_t BgL_auxz00_7317;
BgL_auxz00_7317 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72320)), BGl_string2982z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_index1267z00_4149); 
FAILURE(BgL_auxz00_7317,BFALSE,BFALSE);} 
BgL_auxz00_7313 = 
(long)CINT(BgL_tmpz00_7314); } 
BgL_timeoutz00_4139 = 
VECTOR_REF(BgL_opt1259z00_193,BgL_auxz00_7313); }  else 
{ /* Ieee/port.scm 1617 */BFALSE; } } } 
{ /* Ieee/port.scm 1617 */
obj_t BgL_index1268z00_4151;
BgL_index1268z00_4151 = 
BGl_search1262ze70ze7zz__r4_ports_6_10_1z00(
VECTOR_LENGTH(BgL_opt1259z00_193), BgL_opt1259z00_193, BGl_keyword2977z00zz__r4_ports_6_10_1z00, ((long)0)); 
{ /* Ieee/port.scm 1617 */
bool_t BgL_test3694z00_7325;
{ /* Ieee/port.scm 1617 */
long BgL_n1z00_4152;
{ /* Ieee/port.scm 1617 */
obj_t BgL_tmpz00_7326;
if(
INTEGERP(BgL_index1268z00_4151))
{ /* Ieee/port.scm 1617 */
BgL_tmpz00_7326 = BgL_index1268z00_4151
; }  else 
{ 
obj_t BgL_auxz00_7329;
BgL_auxz00_7329 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72320)), BGl_string2982z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_index1268z00_4151); 
FAILURE(BgL_auxz00_7329,BFALSE,BFALSE);} 
BgL_n1z00_4152 = 
(long)CINT(BgL_tmpz00_7326); } 
BgL_test3694z00_7325 = 
(BgL_n1z00_4152>=((long)0)); } 
if(BgL_test3694z00_7325)
{ 
long BgL_auxz00_7335;
{ /* Ieee/port.scm 1617 */
obj_t BgL_tmpz00_7336;
if(
INTEGERP(BgL_index1268z00_4151))
{ /* Ieee/port.scm 1617 */
BgL_tmpz00_7336 = BgL_index1268z00_4151
; }  else 
{ 
obj_t BgL_auxz00_7339;
BgL_auxz00_7339 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72320)), BGl_string2982z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_index1268z00_4151); 
FAILURE(BgL_auxz00_7339,BFALSE,BFALSE);} 
BgL_auxz00_7335 = 
(long)CINT(BgL_tmpz00_7336); } 
BgL_writez00_4140 = 
VECTOR_REF(BgL_opt1259z00_193,BgL_auxz00_7335); }  else 
{ /* Ieee/port.scm 1617 */BFALSE; } } } 
{ /* Ieee/port.scm 1617 */
obj_t BgL_exceptz00_4153;
BgL_exceptz00_4153 = BgL_exceptz00_4137; 
{ /* Ieee/port.scm 1617 */
obj_t BgL_readz00_4154;
BgL_readz00_4154 = BgL_readz00_4138; 
{ /* Ieee/port.scm 1617 */
obj_t BgL_timeoutz00_4155;
BgL_timeoutz00_4155 = BgL_timeoutz00_4139; 
{ /* Ieee/port.scm 1617 */
obj_t BgL_writez00_4156;
BgL_writez00_4156 = BgL_writez00_4140; 
{ /* Ieee/port.scm 1617 */
obj_t BgL_res2062z00_4157;
{ /* Ieee/port.scm 1618 */
obj_t BgL_auxz00_7368;obj_t BgL_auxz00_7361;obj_t BgL_auxz00_7354;long BgL_tmpz00_7345;
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_exceptz00_4153))
{ /* Ieee/port.scm 1618 */
BgL_auxz00_7368 = BgL_exceptz00_4153
; }  else 
{ 
obj_t BgL_auxz00_7371;
BgL_auxz00_7371 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72429)), BGl_string2982z00zz__r4_ports_6_10_1z00, BGl_string2801z00zz__r4_ports_6_10_1z00, BgL_exceptz00_4153); 
FAILURE(BgL_auxz00_7371,BFALSE,BFALSE);} 
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_writez00_4156))
{ /* Ieee/port.scm 1618 */
BgL_auxz00_7361 = BgL_writez00_4156
; }  else 
{ 
obj_t BgL_auxz00_7364;
BgL_auxz00_7364 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72423)), BGl_string2982z00zz__r4_ports_6_10_1z00, BGl_string2801z00zz__r4_ports_6_10_1z00, BgL_writez00_4156); 
FAILURE(BgL_auxz00_7364,BFALSE,BFALSE);} 
if(
BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_readz00_4154))
{ /* Ieee/port.scm 1618 */
BgL_auxz00_7354 = BgL_readz00_4154
; }  else 
{ 
obj_t BgL_auxz00_7357;
BgL_auxz00_7357 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72418)), BGl_string2982z00zz__r4_ports_6_10_1z00, BGl_string2801z00zz__r4_ports_6_10_1z00, BgL_readz00_4154); 
FAILURE(BgL_auxz00_7357,BFALSE,BFALSE);} 
{ /* Ieee/port.scm 1618 */
obj_t BgL_tmpz00_7346;
if(
INTEGERP(BgL_timeoutz00_4155))
{ /* Ieee/port.scm 1618 */
BgL_tmpz00_7346 = BgL_timeoutz00_4155
; }  else 
{ 
obj_t BgL_auxz00_7349;
BgL_auxz00_7349 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72410)), BGl_string2982z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_timeoutz00_4155); 
FAILURE(BgL_auxz00_7349,BFALSE,BFALSE);} 
BgL_tmpz00_7345 = 
(long)CINT(BgL_tmpz00_7346); } 
BgL_res2062z00_4157 = 
bgl_select(BgL_tmpz00_7345, BgL_auxz00_7354, BgL_auxz00_7361, BgL_auxz00_7368); } 
return BgL_res2062z00_4157;} } } } } } } } } } } } 

}



/* search1262~0 */
obj_t BGl_search1262ze70ze7zz__r4_ports_6_10_1z00(long BgL_l1261z00_3506, obj_t BgL_opt1259z00_3505, obj_t BgL_k1z00_2642, long BgL_iz00_2643)
{
{ /* Ieee/port.scm 1617 */
BGl_search1262ze70ze7zz__r4_ports_6_10_1z00:
if(
(BgL_iz00_2643==BgL_l1261z00_3506))
{ /* Ieee/port.scm 1617 */
return 
BINT(((long)-1));}  else 
{ /* Ieee/port.scm 1617 */
if(
(BgL_iz00_2643==
(BgL_l1261z00_3506-((long)1))))
{ /* Ieee/port.scm 1617 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2979z00zz__r4_ports_6_10_1z00, BGl_string2983z00zz__r4_ports_6_10_1z00, 
BINT(
VECTOR_LENGTH(BgL_opt1259z00_3505)));}  else 
{ /* Ieee/port.scm 1617 */
obj_t BgL_vz00_2648;
BgL_vz00_2648 = 
VECTOR_REF(BgL_opt1259z00_3505,BgL_iz00_2643); 
if(
(BgL_vz00_2648==BgL_k1z00_2642))
{ /* Ieee/port.scm 1617 */
return 
BINT(
(BgL_iz00_2643+((long)1)));}  else 
{ 
long BgL_iz00_7390;
BgL_iz00_7390 = 
(BgL_iz00_2643+((long)2)); 
BgL_iz00_2643 = BgL_iz00_7390; 
goto BGl_search1262ze70ze7zz__r4_ports_6_10_1z00;} } } } 

}



/* select */
BGL_EXPORTED_DEF obj_t BGl_selectz00zz__r4_ports_6_10_1z00(obj_t BgL_exceptz00_189, obj_t BgL_readz00_190, obj_t BgL_timeoutz00_191, obj_t BgL_writez00_192)
{
{ /* Ieee/port.scm 1617 */
{ /* Ieee/port.scm 1618 */
obj_t BgL_auxz00_7419;obj_t BgL_auxz00_7410;obj_t BgL_auxz00_7401;long BgL_tmpz00_7392;
{ /* Ieee/port.scm 1618 */
bool_t BgL_test3709z00_7420;
if(
PAIRP(BgL_exceptz00_189))
{ /* Ieee/port.scm 1618 */
BgL_test3709z00_7420 = ((bool_t)1)
; }  else 
{ /* Ieee/port.scm 1618 */
BgL_test3709z00_7420 = 
NULLP(BgL_exceptz00_189)
; } 
if(BgL_test3709z00_7420)
{ /* Ieee/port.scm 1618 */
BgL_auxz00_7419 = BgL_exceptz00_189
; }  else 
{ 
obj_t BgL_auxz00_7424;
BgL_auxz00_7424 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72429)), BGl_string2980z00zz__r4_ports_6_10_1z00, BGl_string2801z00zz__r4_ports_6_10_1z00, BgL_exceptz00_189); 
FAILURE(BgL_auxz00_7424,BFALSE,BFALSE);} } 
{ /* Ieee/port.scm 1618 */
bool_t BgL_test3707z00_7411;
if(
PAIRP(BgL_writez00_192))
{ /* Ieee/port.scm 1618 */
BgL_test3707z00_7411 = ((bool_t)1)
; }  else 
{ /* Ieee/port.scm 1618 */
BgL_test3707z00_7411 = 
NULLP(BgL_writez00_192)
; } 
if(BgL_test3707z00_7411)
{ /* Ieee/port.scm 1618 */
BgL_auxz00_7410 = BgL_writez00_192
; }  else 
{ 
obj_t BgL_auxz00_7415;
BgL_auxz00_7415 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72423)), BGl_string2980z00zz__r4_ports_6_10_1z00, BGl_string2801z00zz__r4_ports_6_10_1z00, BgL_writez00_192); 
FAILURE(BgL_auxz00_7415,BFALSE,BFALSE);} } 
{ /* Ieee/port.scm 1618 */
bool_t BgL_test3705z00_7402;
if(
PAIRP(BgL_readz00_190))
{ /* Ieee/port.scm 1618 */
BgL_test3705z00_7402 = ((bool_t)1)
; }  else 
{ /* Ieee/port.scm 1618 */
BgL_test3705z00_7402 = 
NULLP(BgL_readz00_190)
; } 
if(BgL_test3705z00_7402)
{ /* Ieee/port.scm 1618 */
BgL_auxz00_7401 = BgL_readz00_190
; }  else 
{ 
obj_t BgL_auxz00_7406;
BgL_auxz00_7406 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72418)), BGl_string2980z00zz__r4_ports_6_10_1z00, BGl_string2801z00zz__r4_ports_6_10_1z00, BgL_readz00_190); 
FAILURE(BgL_auxz00_7406,BFALSE,BFALSE);} } 
{ /* Ieee/port.scm 1618 */
obj_t BgL_tmpz00_7393;
if(
INTEGERP(BgL_timeoutz00_191))
{ /* Ieee/port.scm 1618 */
BgL_tmpz00_7393 = BgL_timeoutz00_191
; }  else 
{ 
obj_t BgL_auxz00_7396;
BgL_auxz00_7396 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72410)), BGl_string2980z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_timeoutz00_191); 
FAILURE(BgL_auxz00_7396,BFALSE,BFALSE);} 
BgL_tmpz00_7392 = 
(long)CINT(BgL_tmpz00_7393); } 
return 
bgl_select(BgL_tmpz00_7392, BgL_auxz00_7401, BgL_auxz00_7410, BgL_auxz00_7419);} } 

}



/* _open-pipes */
obj_t BGl__openzd2pipeszd2zz__r4_ports_6_10_1z00(obj_t BgL_env1270z00_197, obj_t BgL_opt1269z00_196)
{
{ /* Ieee/port.scm 1623 */
{ /* Ieee/port.scm 1623 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1269z00_196)) { case ((long)0) : 

{ /* Ieee/port.scm 1623 */

return 
bgl_open_pipes(BFALSE);} break;case ((long)1) : 

{ /* Ieee/port.scm 1623 */
obj_t BgL_namez00_4171;
BgL_namez00_4171 = 
VECTOR_REF(BgL_opt1269z00_196,((long)0)); 
{ /* Ieee/port.scm 1623 */

return 
bgl_open_pipes(BgL_namez00_4171);} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2984z00zz__r4_ports_6_10_1z00, BGl_string2881z00zz__r4_ports_6_10_1z00, 
BINT(
VECTOR_LENGTH(BgL_opt1269z00_196)));} } } } 

}



/* open-pipes */
BGL_EXPORTED_DEF obj_t BGl_openzd2pipeszd2zz__r4_ports_6_10_1z00(obj_t BgL_namez00_195)
{
{ /* Ieee/port.scm 1623 */
return 
bgl_open_pipes(BgL_namez00_195);} 

}



/* _lockf */
obj_t BGl__lockfz00zz__r4_ports_6_10_1z00(obj_t BgL_env1274z00_202, obj_t BgL_opt1273z00_201)
{
{ /* Ieee/port.scm 1629 */
{ /* Ieee/port.scm 1629 */
obj_t BgL_g1275z00_1952;obj_t BgL_g1276z00_1953;
BgL_g1275z00_1952 = 
VECTOR_REF(BgL_opt1273z00_201,((long)0)); 
BgL_g1276z00_1953 = 
VECTOR_REF(BgL_opt1273z00_201,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1273z00_201)) { case ((long)2) : 

{ /* Ieee/port.scm 1629 */

{ /* Ieee/port.scm 1629 */
bool_t BgL_tmpz00_7440;
{ /* Ieee/port.scm 1629 */
obj_t BgL_auxz00_7448;obj_t BgL_auxz00_7441;
if(
SYMBOLP(BgL_g1276z00_1953))
{ /* Ieee/port.scm 1629 */
BgL_auxz00_7448 = BgL_g1276z00_1953
; }  else 
{ 
obj_t BgL_auxz00_7451;
BgL_auxz00_7451 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72951)), BGl_string2989z00zz__r4_ports_6_10_1z00, BGl_string2990z00zz__r4_ports_6_10_1z00, BgL_g1276z00_1953); 
FAILURE(BgL_auxz00_7451,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_g1275z00_1952))
{ /* Ieee/port.scm 1629 */
BgL_auxz00_7441 = BgL_g1275z00_1952
; }  else 
{ 
obj_t BgL_auxz00_7444;
BgL_auxz00_7444 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72951)), BGl_string2989z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_g1275z00_1952); 
FAILURE(BgL_auxz00_7444,BFALSE,BFALSE);} 
BgL_tmpz00_7440 = 
BGl_lockfz00zz__r4_ports_6_10_1z00(BgL_auxz00_7441, BgL_auxz00_7448, 
BINT(((long)0))); } 
return 
BBOOL(BgL_tmpz00_7440);} } break;case ((long)3) : 

{ /* Ieee/port.scm 1629 */
obj_t BgL_lenz00_1958;
BgL_lenz00_1958 = 
VECTOR_REF(BgL_opt1273z00_201,((long)2)); 
{ /* Ieee/port.scm 1629 */

{ /* Ieee/port.scm 1629 */
bool_t BgL_tmpz00_7459;
{ /* Ieee/port.scm 1629 */
obj_t BgL_auxz00_7467;obj_t BgL_auxz00_7460;
if(
SYMBOLP(BgL_g1276z00_1953))
{ /* Ieee/port.scm 1629 */
BgL_auxz00_7467 = BgL_g1276z00_1953
; }  else 
{ 
obj_t BgL_auxz00_7470;
BgL_auxz00_7470 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72951)), BGl_string2989z00zz__r4_ports_6_10_1z00, BGl_string2990z00zz__r4_ports_6_10_1z00, BgL_g1276z00_1953); 
FAILURE(BgL_auxz00_7470,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_g1275z00_1952))
{ /* Ieee/port.scm 1629 */
BgL_auxz00_7460 = BgL_g1275z00_1952
; }  else 
{ 
obj_t BgL_auxz00_7463;
BgL_auxz00_7463 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)72951)), BGl_string2989z00zz__r4_ports_6_10_1z00, BGl_string2739z00zz__r4_ports_6_10_1z00, BgL_g1275z00_1952); 
FAILURE(BgL_auxz00_7463,BFALSE,BFALSE);} 
BgL_tmpz00_7459 = 
BGl_lockfz00zz__r4_ports_6_10_1z00(BgL_auxz00_7460, BgL_auxz00_7467, BgL_lenz00_1958); } 
return 
BBOOL(BgL_tmpz00_7459);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2986z00zz__r4_ports_6_10_1z00, BGl_string2988z00zz__r4_ports_6_10_1z00, 
BINT(
VECTOR_LENGTH(BgL_opt1273z00_201)));} } } } 

}



/* lockf */
BGL_EXPORTED_DEF bool_t BGl_lockfz00zz__r4_ports_6_10_1z00(obj_t BgL_portz00_198, obj_t BgL_cmdz00_199, obj_t BgL_lenz00_200)
{
{ /* Ieee/port.scm 1629 */
if(
(BgL_cmdz00_199==BGl_symbol2991z00zz__r4_ports_6_10_1z00))
{ /* Ieee/port.scm 1633 */
long BgL_tmpz00_7483;
{ /* Ieee/port.scm 1633 */
obj_t BgL_tmpz00_7484;
if(
INTEGERP(BgL_lenz00_200))
{ /* Ieee/port.scm 1633 */
BgL_tmpz00_7484 = BgL_lenz00_200
; }  else 
{ 
obj_t BgL_auxz00_7487;
BgL_auxz00_7487 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)73076)), BGl_string2987z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_lenz00_200); 
FAILURE(BgL_auxz00_7487,BFALSE,BFALSE);} 
BgL_tmpz00_7483 = 
(long)CINT(BgL_tmpz00_7484); } 
return 
bgl_lockf(BgL_portz00_198, F_LOCK, BgL_tmpz00_7483);}  else 
{ /* Ieee/port.scm 1632 */
if(
(BgL_cmdz00_199==BGl_symbol2993z00zz__r4_ports_6_10_1z00))
{ /* Ieee/port.scm 1634 */
long BgL_tmpz00_7495;
{ /* Ieee/port.scm 1634 */
obj_t BgL_tmpz00_7496;
if(
INTEGERP(BgL_lenz00_200))
{ /* Ieee/port.scm 1634 */
BgL_tmpz00_7496 = BgL_lenz00_200
; }  else 
{ 
obj_t BgL_auxz00_7499;
BgL_auxz00_7499 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)73116)), BGl_string2987z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_lenz00_200); 
FAILURE(BgL_auxz00_7499,BFALSE,BFALSE);} 
BgL_tmpz00_7495 = 
(long)CINT(BgL_tmpz00_7496); } 
return 
bgl_lockf(BgL_portz00_198, F_TLOCK, BgL_tmpz00_7495);}  else 
{ /* Ieee/port.scm 1632 */
if(
(BgL_cmdz00_199==BGl_symbol2995z00zz__r4_ports_6_10_1z00))
{ /* Ieee/port.scm 1635 */
long BgL_tmpz00_7507;
{ /* Ieee/port.scm 1635 */
obj_t BgL_tmpz00_7508;
if(
INTEGERP(BgL_lenz00_200))
{ /* Ieee/port.scm 1635 */
BgL_tmpz00_7508 = BgL_lenz00_200
; }  else 
{ 
obj_t BgL_auxz00_7511;
BgL_auxz00_7511 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)73156)), BGl_string2987z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_lenz00_200); 
FAILURE(BgL_auxz00_7511,BFALSE,BFALSE);} 
BgL_tmpz00_7507 = 
(long)CINT(BgL_tmpz00_7508); } 
return 
bgl_lockf(BgL_portz00_198, F_ULOCK, BgL_tmpz00_7507);}  else 
{ /* Ieee/port.scm 1632 */
if(
(BgL_cmdz00_199==BGl_symbol2997z00zz__r4_ports_6_10_1z00))
{ /* Ieee/port.scm 1636 */
long BgL_tmpz00_7519;
{ /* Ieee/port.scm 1636 */
obj_t BgL_tmpz00_7520;
if(
INTEGERP(BgL_lenz00_200))
{ /* Ieee/port.scm 1636 */
BgL_tmpz00_7520 = BgL_lenz00_200
; }  else 
{ 
obj_t BgL_auxz00_7523;
BgL_auxz00_7523 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2715z00zz__r4_ports_6_10_1z00, 
BINT(((long)73194)), BGl_string2987z00zz__r4_ports_6_10_1z00, BGl_string2807z00zz__r4_ports_6_10_1z00, BgL_lenz00_200); 
FAILURE(BgL_auxz00_7523,BFALSE,BFALSE);} 
BgL_tmpz00_7519 = 
(long)CINT(BgL_tmpz00_7520); } 
return 
bgl_lockf(BgL_portz00_198, F_TEST, BgL_tmpz00_7519);}  else 
{ /* Ieee/port.scm 1632 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string2987z00zz__r4_ports_6_10_1z00, BGl_string2999z00zz__r4_ports_6_10_1z00, BgL_cmdz00_199));} } } } } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__r4_ports_6_10_1z00()
{
{ /* Ieee/port.scm 18 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__r4_ports_6_10_1z00()
{
{ /* Ieee/port.scm 18 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__r4_ports_6_10_1z00()
{
{ /* Ieee/port.scm 18 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_ports_6_10_1z00()
{
{ /* Ieee/port.scm 18 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string3000z00zz__r4_ports_6_10_1z00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)340267996), 
BSTRING_TO_STRING(BGl_string3000z00zz__r4_ports_6_10_1z00)); 
BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long)323064336), 
BSTRING_TO_STRING(BGl_string3000z00zz__r4_ports_6_10_1z00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)193422032), 
BSTRING_TO_STRING(BGl_string3000z00zz__r4_ports_6_10_1z00)); 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)224967910), 
BSTRING_TO_STRING(BGl_string3000z00zz__r4_ports_6_10_1z00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string3000z00zz__r4_ports_6_10_1z00)); 
BGl_modulezd2initializa7ationz75zz__gunza7ipza7(((long)224363636), 
BSTRING_TO_STRING(BGl_string3000z00zz__r4_ports_6_10_1z00)); 
BGl_modulezd2initializa7ationz75zz__urlz00(((long)337061965), 
BSTRING_TO_STRING(BGl_string3000z00zz__r4_ports_6_10_1z00)); 
BGl_modulezd2initializa7ationz75zz__httpz00(((long)354980563), 
BSTRING_TO_STRING(BGl_string3000z00zz__r4_ports_6_10_1z00)); 
return 
BGl_modulezd2initializa7ationz75zz__ftpz00(((long)102328228), 
BSTRING_TO_STRING(BGl_string3000z00zz__r4_ports_6_10_1z00));} 

}

#ifdef __cplusplus
}
#endif
