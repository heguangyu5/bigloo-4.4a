/*===========================================================================*/
/*   (Ieee/input.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Ieee/input.scm -indent -o objs/obj_s/Ieee/input.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif

/* object type definitions */
typedef struct BgL_z62exceptionz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
} *BgL_z62exceptionz62_bglt;

typedef struct BgL_z62errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62errorz62_bglt;

typedef struct BgL_z62iozd2errorzb0_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2errorzb0_bglt;

typedef struct BgL_z62iozd2closedzd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2closedzd2errorz62_bglt;


static obj_t BGl_list4945z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_list4948z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl__unreadzd2substringz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl__readzd2ofzd2stringsz00zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza32671ze3ze5zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_symbol5075z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_list4954z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_list4957z00zz__r4_input_6_10_2z00 = BUNSPEC;
static int BGl_z52sendcharsz52zz__r4_input_6_10_2z00(obj_t, obj_t, long, long);
static obj_t BGl_z62eofzd2objectzf3z43zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl_list4962z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern obj_t BGl_raisez00zz__errorz00(obj_t);
static obj_t BGl__passwordz00zz__r4_input_6_10_2z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_passwordz00zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_input_6_10_2z00 = BUNSPEC;
extern bool_t BGl_classzd2fieldzf3z21zz__objectz00(obj_t);
static obj_t BGl_list4971z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern obj_t bgl_display_obj(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza32690ze3ze5zz__r4_input_6_10_2z00(obj_t);
extern obj_t bgl_file_to_string(char *);
static obj_t BGl__unreadzd2stringz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl_toplevelzd2initzd2zz__r4_input_6_10_2z00();
static obj_t BGl_z62filezd2positionzd2ze3linez81zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t);
extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_readzf2rpzf2zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t);
extern obj_t BGl_setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
static obj_t BGl_genericzd2initzd2zz__r4_input_6_10_2z00();
extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_readzd2linezd2newlinez00zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_objectzd2initzd2zz__r4_input_6_10_2z00();
BGL_EXPORTED_DECL obj_t BGl_readzd2ofzd2stringsz00zz__r4_input_6_10_2z00(obj_t);
extern obj_t bgl_password(char *);
extern obj_t bgl_reverse_bang(obj_t);
static obj_t BGl_z62zc3z04anonymousza32865ze3ze5zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_z62zc3z04anonymousza32687ze3ze5zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl__peekzd2bytezd2zz__r4_input_6_10_2z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_unreadzd2substringz12zc0zz__r4_input_6_10_2z00(obj_t, long, long, obj_t);
static obj_t BGl__charzd2readyzf3z21zz__r4_input_6_10_2z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_peekzd2bytezd2zz__r4_input_6_10_2z00(obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl__readzd2charzd2zz__r4_input_6_10_2z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_readzf2lalrpzf2zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_unreadzd2stringz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl_symbol4925z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4929z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_methodzd2initzd2zz__r4_input_6_10_2z00();
BGL_EXPORTED_DECL obj_t BGl_readzd2charzd2zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_symbol4931z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4934z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4938z00zz__r4_input_6_10_2z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_charzd2readyzf3z21zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_symbol4941z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4943z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4946z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_z62readzf2lalrpz90zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol4949z00zz__r4_input_6_10_2z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(int, obj_t);
static obj_t BGl__readzd2lineszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_filezd2ze3stringz31zz__r4_input_6_10_2z00(obj_t);
extern obj_t make_string(long, unsigned char);
static obj_t BGl_symbol4951z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4955z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern obj_t bgl_close_input_port(obj_t);
extern bool_t bgl_rgc_charready(obj_t);
static obj_t BGl_symbol4963z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4965z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4967z00zz__r4_input_6_10_2z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl__readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(obj_t, obj_t);
extern obj_t rgc_buffer_substring(obj_t, long, long);
BGL_EXPORTED_DECL obj_t BGl_readzd2lineszd2zz__r4_input_6_10_2z00(obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol4972z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4975z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4979z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
extern obj_t BGl_z62iozd2closedzd2errorz62zz__objectz00;
static obj_t BGl_symbol4982z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4985z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol4988z00zz__r4_input_6_10_2z00 = BUNSPEC;
BGL_EXPORTED_DECL long BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(obj_t, obj_t, long, long);
static obj_t BGl_z62sendzd2charszf2siza7eze5zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol4991z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__gunza7ipza7(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
extern bool_t fexists(char *);
BGL_EXPORTED_DECL obj_t BGl_eofzd2objectzd2zz__r4_input_6_10_2z00();
static obj_t BGl__readzd2linezd2zz__r4_input_6_10_2z00(obj_t, obj_t);
extern bool_t rgc_buffer_insert_substring(obj_t, obj_t, long, long);
static obj_t BGl__peekzd2charzd2zz__r4_input_6_10_2z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_z62readzf2rpz90zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t, obj_t);
extern bool_t rgc_buffer_eof_p(obj_t);
static obj_t BGl_cnstzd2initzd2zz__r4_input_6_10_2z00();
extern long bgl_list_length(obj_t);
extern obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62eofzd2objectzb0zz__r4_input_6_10_2z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_filezd2lineszd2zz__r4_input_6_10_2z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_peekzd2charzd2zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__r4_input_6_10_2z00();
extern obj_t BGl_z62iozd2errorzb0zz__objectz00;
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_input_6_10_2z00();
static obj_t BGl__sendzd2filezd2zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl__readzd2stringzd2zz__r4_input_6_10_2z00(obj_t, obj_t);
extern long bgl_rgc_blit_string(obj_t, char *, long, long);
BGL_EXPORTED_DECL long BGl_sendzd2filezd2zz__r4_input_6_10_2z00(obj_t, obj_t, long, long);
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(obj_t, long, long, obj_t);
extern obj_t bgl_sendchars(obj_t, obj_t, long, long);
static obj_t BGl__unreadzd2charz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl_z62filezd2lineszb0zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl__readzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl_symbol5002z00zz__r4_input_6_10_2z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_eofzd2objectzf3z21zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_symbol5009z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern obj_t bgl_sendfile(obj_t, obj_t, long, long);
extern obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
static obj_t BGl_symbol5011z00zz__r4_input_6_10_2z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_readzd2stringzd2zz__r4_input_6_10_2z00(obj_t);
extern bool_t rgc_buffer_insert_char(obj_t, int);
static obj_t BGl_symbol5016z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol5018z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00 = BUNSPEC;
extern int rgc_buffer_unget_char(obj_t, int);
BGL_EXPORTED_DECL obj_t BGl_readzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31395ze3ze5zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl_z62portzd2ze3stringzd2listz81zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl_symbol5024z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern long default_io_bufsiz;
static obj_t BGl_symbol5028z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62filezd2ze3stringz53zz__r4_input_6_10_2z00(obj_t, obj_t);
extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
static obj_t BGl_symbol5032z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol5036z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern obj_t bgl_find_runtime_type(obj_t);
extern obj_t BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_unreadzd2charz12zc0zz__r4_input_6_10_2z00(unsigned char, obj_t);
extern bool_t BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__readzd2bytezd2zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl_symbol5040z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern bool_t rgc_fill_buffer(obj_t);
static obj_t BGl_symbol5044z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl__sendzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
static obj_t BGl_list4928z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern obj_t BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl__readzd2linezd2newlinez00zz__r4_input_6_10_2z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_readzd2bytezd2zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_symbol5055z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_symbol5059z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_list4933z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_list4936z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_list4937z00zz__r4_input_6_10_2z00 = BUNSPEC;
extern obj_t BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t, long, obj_t, long, long);
extern obj_t make_string_sans_fill(long);
static obj_t BGl_symbol5063z00zz__r4_input_6_10_2z00 = BUNSPEC;
BGL_EXPORTED_DECL long BGl_sendzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol5069z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t BGl_list4940z00zz__r4_input_6_10_2z00 = BUNSPEC;
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2positionzd2ze3linezd2envz31zz__r4_input_6_10_2z00, BgL_bgl_za762fileza7d2positi5079z00, BGl_z62filezd2positionzd2ze3linez81zz__r4_input_6_10_2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_peekzd2bytezd2envz00zz__r4_input_6_10_2z00, BgL_bgl__peekza7d2byteza7d2za75080za7, opt_generic_entry, BGl__peekzd2bytezd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzf2lalrpzd2envz20zz__r4_input_6_10_2z00, BgL_bgl_za762readza7f2lalrpza75081za7, va_generic_entry, BGl_z62readzf2lalrpz90zz__r4_input_6_10_2z00, BUNSPEC, -4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2charszd2envz00zz__r4_input_6_10_2z00, BgL_bgl__readza7d2charsza7d25082z00, opt_generic_entry, BGl__readzd2charszd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_STRING( BGl_string5000z00zz__r4_input_6_10_2z00, BgL_bgl_string5000za700za7za7_5083za7, "bchar", 5 );
DEFINE_STRING( BGl_string5001z00zz__r4_input_6_10_2z00, BgL_bgl_string5001za700za7za7_5084za7, "string-set!", 11 );
DEFINE_STRING( BGl_string5003z00zz__r4_input_6_10_2z00, BgL_bgl_string5003za700za7za7_5085za7, "read-line-newline", 17 );
DEFINE_STRING( BGl_string5004z00zz__r4_input_6_10_2z00, BgL_bgl_string5004za700za7za7_5086za7, "STATE-6-1089", 12 );
DEFINE_STRING( BGl_string5005z00zz__r4_input_6_10_2z00, BgL_bgl_string5005za700za7za7_5087za7, "STATE-3-1086", 12 );
DEFINE_STRING( BGl_string5006z00zz__r4_input_6_10_2z00, BgL_bgl_string5006za700za7za7_5088za7, "STATE-0-1083", 12 );
DEFINE_STRING( BGl_string5007z00zz__r4_input_6_10_2z00, BgL_bgl_string5007za700za7za7_5089za7, "STATE-1-1084", 12 );
DEFINE_STRING( BGl_string5008z00zz__r4_input_6_10_2z00, BgL_bgl_string5008za700za7za7_5090za7, "STATE-7-1090", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2linezd2newlinezd2envzd2zz__r4_input_6_10_2z00, BgL_bgl__readza7d2lineza7d2n5091z00, opt_generic_entry, BGl__readzd2linezd2newlinez00zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2charsz12zd2envz12zz__r4_input_6_10_2z00, BgL_bgl__readza7d2charsza7125092z00, opt_generic_entry, BGl__readzd2charsz12zc0zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_STRING( BGl_string5010z00zz__r4_input_6_10_2z00, BgL_bgl_string5010za700za7za7_5093za7, "read-lines", 10 );
DEFINE_STRING( BGl_string5012z00zz__r4_input_6_10_2z00, BgL_bgl_string5012za700za7za7_5094za7, "read-string", 11 );
DEFINE_STRING( BGl_string5013z00zz__r4_input_6_10_2z00, BgL_bgl_string5013za700za7za7_5095za7, "STATE-2-1101", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2charzd2envz00zz__r4_input_6_10_2z00, BgL_bgl__readza7d2charza7d2za75096za7, opt_generic_entry, BGl__readzd2charzd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_STRING( BGl_string5014z00zz__r4_input_6_10_2z00, BgL_bgl_string5014za700za7za7_5097za7, "STATE-1-1100", 12 );
DEFINE_STRING( BGl_string5015z00zz__r4_input_6_10_2z00, BgL_bgl_string5015za700za7za7_5098za7, "STATE-0-1099", 12 );
DEFINE_STRING( BGl_string5017z00zz__r4_input_6_10_2z00, BgL_bgl_string5017za700za7za7_5099za7, "read-of-strings", 15 );
DEFINE_STRING( BGl_string5019z00zz__r4_input_6_10_2z00, BgL_bgl_string5019za700za7za7_5100za7, "read-chars", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2readyzf3zd2envzf3zz__r4_input_6_10_2z00, BgL_bgl__charza7d2readyza7f35101z00, opt_generic_entry, BGl__charzd2readyzf3z21zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_STRING( BGl_string5020z00zz__r4_input_6_10_2z00, BgL_bgl_string5020za700za7za7_5102za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string5021z00zz__r4_input_6_10_2z00, BgL_bgl_string5021za700za7za7_5103za7, "integer", 7 );
DEFINE_STRING( BGl_string5022z00zz__r4_input_6_10_2z00, BgL_bgl_string5022za700za7za7_5104za7, "bint", 4 );
DEFINE_STRING( BGl_string5023z00zz__r4_input_6_10_2z00, BgL_bgl_string5023za700za7za7_5105za7, "Illegal negative length", 23 );
DEFINE_STRING( BGl_string5025z00zz__r4_input_6_10_2z00, BgL_bgl_string5025za700za7za7_5106za7, "read-chars!", 11 );
DEFINE_STRING( BGl_string5026z00zz__r4_input_6_10_2z00, BgL_bgl_string5026za700za7za7_5107za7, "wrong number of arguments: [2..3] expected, provided", 52 );
DEFINE_STRING( BGl_string5027z00zz__r4_input_6_10_2z00, BgL_bgl_string5027za700za7za7_5108za7, "_read-chars!", 12 );
DEFINE_STRING( BGl_string5029z00zz__r4_input_6_10_2z00, BgL_bgl_string5029za700za7za7_5109za7, "read-fill-string!", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unreadzd2charz12zd2envz12zz__r4_input_6_10_2z00, BgL_bgl__unreadza7d2charza715110z00, opt_generic_entry, BGl__unreadzd2charz12zc0zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_STRING( BGl_string5030z00zz__r4_input_6_10_2z00, BgL_bgl_string5030za700za7za7_5111za7, "wrong number of arguments: [3..4] expected, provided", 52 );
DEFINE_STRING( BGl_string5031z00zz__r4_input_6_10_2z00, BgL_bgl_string5031za700za7za7_5112za7, "_read-fill-string!", 18 );
DEFINE_STRING( BGl_string5033z00zz__r4_input_6_10_2z00, BgL_bgl_string5033za700za7za7_5113za7, "unread-char!", 12 );
DEFINE_STRING( BGl_string5034z00zz__r4_input_6_10_2z00, BgL_bgl_string5034za700za7za7_5114za7, "_unread-char!", 13 );
DEFINE_STRING( BGl_string5035z00zz__r4_input_6_10_2z00, BgL_bgl_string5035za700za7za7_5115za7, "Unread char failed", 18 );
DEFINE_STRING( BGl_string5037z00zz__r4_input_6_10_2z00, BgL_bgl_string5037za700za7za7_5116za7, "unread-string!", 14 );
DEFINE_STRING( BGl_string5038z00zz__r4_input_6_10_2z00, BgL_bgl_string5038za700za7za7_5117za7, "_unread-string!", 15 );
DEFINE_STRING( BGl_string5039z00zz__r4_input_6_10_2z00, BgL_bgl_string5039za700za7za7_5118za7, "Unread string failed", 20 );
DEFINE_STRING( BGl_string5041z00zz__r4_input_6_10_2z00, BgL_bgl_string5041za700za7za7_5119za7, "unread-substring!", 17 );
DEFINE_STRING( BGl_string5042z00zz__r4_input_6_10_2z00, BgL_bgl_string5042za700za7za7_5120za7, "_unread-substring!", 18 );
DEFINE_STRING( BGl_string5043z00zz__r4_input_6_10_2z00, BgL_bgl_string5043za700za7za7_5121za7, "Invalid positional parameters", 29 );
DEFINE_STRING( BGl_string5045z00zz__r4_input_6_10_2z00, BgL_bgl_string5045za700za7za7_5122za7, "unread-sustring!", 16 );
DEFINE_STRING( BGl_string5046z00zz__r4_input_6_10_2z00, BgL_bgl_string5046za700za7za7_5123za7, "&port->string-list", 18 );
DEFINE_STRING( BGl_string5047z00zz__r4_input_6_10_2z00, BgL_bgl_string5047za700za7za7_5124za7, "file:", 5 );
DEFINE_STRING( BGl_string5048z00zz__r4_input_6_10_2z00, BgL_bgl_string5048za700za7za7_5125za7, "file->string", 12 );
DEFINE_STRING( BGl_string5049z00zz__r4_input_6_10_2z00, BgL_bgl_string5049za700za7za7_5126za7, "&file->string", 13 );
DEFINE_STRING( BGl_string5050z00zz__r4_input_6_10_2z00, BgL_bgl_string5050za700za7za7_5127za7, "<@anonymous:2671>", 17 );
DEFINE_STRING( BGl_string5051z00zz__r4_input_6_10_2z00, BgL_bgl_string5051za700za7za7_5128za7, "send-chars/size", 15 );
DEFINE_STRING( BGl_string5052z00zz__r4_input_6_10_2z00, BgL_bgl_string5052za700za7za7_5129za7, "&send-chars/size", 16 );
DEFINE_STRING( BGl_string5053z00zz__r4_input_6_10_2z00, BgL_bgl_string5053za700za7za7_5130za7, "output-port", 11 );
DEFINE_STRING( BGl_string5054z00zz__r4_input_6_10_2z00, BgL_bgl_string5054za700za7za7_5131za7, "belong", 6 );
DEFINE_STRING( BGl_string5056z00zz__r4_input_6_10_2z00, BgL_bgl_string5056za700za7za7_5132za7, "send-chars::long", 16 );
DEFINE_STRING( BGl_string5057z00zz__r4_input_6_10_2z00, BgL_bgl_string5057za700za7za7_5133za7, "wrong number of arguments: [2..4] expected, provided", 52 );
DEFINE_STRING( BGl_string5058z00zz__r4_input_6_10_2z00, BgL_bgl_string5058za700za7za7_5134za7, "_send-chars", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2fillzd2stringz12zd2envzc0zz__r4_input_6_10_2z00, BgL_bgl__readza7d2fillza7d2s5135z00, opt_generic_entry, BGl__readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_eofzd2objectzd2envz00zz__r4_input_6_10_2z00, BgL_bgl_za762eofza7d2objectza75136za7, BGl_z62eofzd2objectzb0zz__r4_input_6_10_2z00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string5060z00zz__r4_input_6_10_2z00, BgL_bgl_string5060za700za7za7_5137za7, "send-chars", 10 );
DEFINE_STRING( BGl_string5061z00zz__r4_input_6_10_2z00, BgL_bgl_string5061za700za7za7_5138za7, "Illegal size", 12 );
DEFINE_STRING( BGl_string5062z00zz__r4_input_6_10_2z00, BgL_bgl_string5062za700za7za7_5139za7, "Illegal offset", 14 );
DEFINE_STRING( BGl_string5064z00zz__r4_input_6_10_2z00, BgL_bgl_string5064za700za7za7_5140za7, "send-file::long", 15 );
DEFINE_STRING( BGl_string5065z00zz__r4_input_6_10_2z00, BgL_bgl_string5065za700za7za7_5141za7, "_send-file", 10 );
DEFINE_STRING( BGl_string5066z00zz__r4_input_6_10_2z00, BgL_bgl_string5066za700za7za7_5142za7, "send-file", 9 );
DEFINE_STRING( BGl_string5067z00zz__r4_input_6_10_2z00, BgL_bgl_string5067za700za7za7_5143za7, "<@anonymous:2687>", 17 );
DEFINE_STRING( BGl_string5068z00zz__r4_input_6_10_2z00, BgL_bgl_string5068za700za7za7_5144za7, "&file-lines", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_eofzd2objectzf3zd2envzf3zz__r4_input_6_10_2z00, BgL_bgl_za762eofza7d2objectza75145za7, BGl_z62eofzd2objectzf3z43zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string5070z00zz__r4_input_6_10_2z00, BgL_bgl_string5070za700za7za7_5146za7, "file-lines", 10 );
DEFINE_STRING( BGl_string5071z00zz__r4_input_6_10_2z00, BgL_bgl_string5071za700za7za7_5147za7, "Illegal files", 13 );
DEFINE_STRING( BGl_string5072z00zz__r4_input_6_10_2z00, BgL_bgl_string5072za700za7za7_5148za7, "gram", 4 );
DEFINE_STRING( BGl_string5073z00zz__r4_input_6_10_2z00, BgL_bgl_string5073za700za7za7_5149za7, "&file-position->line", 20 );
DEFINE_STRING( BGl_string5074z00zz__r4_input_6_10_2z00, BgL_bgl_string5074za700za7za7_5150za7, "&<@anonymous:2865>", 18 );
DEFINE_STRING( BGl_string5076z00zz__r4_input_6_10_2z00, BgL_bgl_string5076za700za7za7_5151za7, "password", 8 );
DEFINE_STRING( BGl_string5077z00zz__r4_input_6_10_2z00, BgL_bgl_string5077za700za7za7_5152za7, "_password", 9 );
DEFINE_STRING( BGl_string5078z00zz__r4_input_6_10_2z00, BgL_bgl_string5078za700za7za7_5153za7, "__r4_input_6_10_2", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_passwordzd2envzd2zz__r4_input_6_10_2z00, BgL_bgl__passwordza700za7za7__5154za7, opt_generic_entry, BGl__passwordz00zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_portzd2ze3stringzd2listzd2envz31zz__r4_input_6_10_2z00, BgL_bgl_za762portza7d2za7e3str5155za7, BGl_z62portzd2ze3stringzd2listz81zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2bytezd2envz00zz__r4_input_6_10_2z00, BgL_bgl__readza7d2byteza7d2za75156za7, opt_generic_entry, BGl__readzd2bytezd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sendzd2filezd2envz00zz__r4_input_6_10_2z00, BgL_bgl__sendza7d2fileza7d2za75157za7, opt_generic_entry, BGl__sendzd2filezd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2ze3stringzd2envze3zz__r4_input_6_10_2z00, BgL_bgl_za762fileza7d2za7e3str5158za7, BGl_z62filezd2ze3stringz53zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4905z00zz__r4_input_6_10_2z00, BgL_bgl_string4905za700za7za7_5159za7, "/tmp/4.4a/runtime/Ieee/input.scm", 32 );
DEFINE_STRING( BGl_string4906z00zz__r4_input_6_10_2z00, BgL_bgl_string4906za700za7za7_5160za7, "ignore", 6 );
DEFINE_STRING( BGl_string4907z00zz__r4_input_6_10_2z00, BgL_bgl_string4907za700za7za7_5161za7, "input-port", 10 );
DEFINE_STRING( BGl_string4908z00zz__r4_input_6_10_2z00, BgL_bgl_string4908za700za7za7_5162za7, "regular-grammar", 15 );
DEFINE_STRING( BGl_string4909z00zz__r4_input_6_10_2z00, BgL_bgl_string4909za700za7za7_5163za7, "Illegal match", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2lineszd2envz00zz__r4_input_6_10_2z00, BgL_bgl_za762fileza7d2linesza75164za7, BGl_z62filezd2lineszb0zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4910z00zz__r4_input_6_10_2z00, BgL_bgl_string4910za700za7za7_5165za7, "the-failure", 11 );
DEFINE_STRING( BGl_string4911z00zz__r4_input_6_10_2z00, BgL_bgl_string4911za700za7za7_5166za7, "the-substring", 13 );
DEFINE_STRING( BGl_string4912z00zz__r4_input_6_10_2z00, BgL_bgl_string4912za700za7za7_5167za7, "Illegal range `~a'", 18 );
DEFINE_STRING( BGl_string4913z00zz__r4_input_6_10_2z00, BgL_bgl_string4913za700za7za7_5168za7, "bstring", 7 );
DEFINE_STRING( BGl_string4914z00zz__r4_input_6_10_2z00, BgL_bgl_string4914za700za7za7_5169za7, "STATE-8-1113", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_peekzd2charzd2envz00zz__r4_input_6_10_2z00, BgL_bgl__peekza7d2charza7d2za75170za7, opt_generic_entry, BGl__peekzd2charzd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_STRING( BGl_string4915z00zz__r4_input_6_10_2z00, BgL_bgl_string4915za700za7za7_5171za7, "STATE-6-1111", 12 );
DEFINE_STRING( BGl_string4916z00zz__r4_input_6_10_2z00, BgL_bgl_string4916za700za7za7_5172za7, "STATE-9-1114", 12 );
DEFINE_STRING( BGl_string4917z00zz__r4_input_6_10_2z00, BgL_bgl_string4917za700za7za7_5173za7, "STATE-0-1105", 12 );
DEFINE_STRING( BGl_string4918z00zz__r4_input_6_10_2z00, BgL_bgl_string4918za700za7za7_5174za7, "STATE-4-1109", 12 );
DEFINE_STRING( BGl_string4919z00zz__r4_input_6_10_2z00, BgL_bgl_string4919za700za7za7_5175za7, "STATE-2-1107", 12 );
DEFINE_STRING( BGl_string4920z00zz__r4_input_6_10_2z00, BgL_bgl_string4920za700za7za7_5176za7, "STATE-3-1108", 12 );
DEFINE_STRING( BGl_string4921z00zz__r4_input_6_10_2z00, BgL_bgl_string4921za700za7za7_5177za7, "STATE-1-1106", 12 );
DEFINE_STRING( BGl_string4922z00zz__r4_input_6_10_2z00, BgL_bgl_string4922za700za7za7_5178za7, "<@anonymous:1395>", 17 );
DEFINE_STRING( BGl_string4923z00zz__r4_input_6_10_2z00, BgL_bgl_string4923za700za7za7_5179za7, "class-field", 11 );
DEFINE_STRING( BGl_string4924z00zz__r4_input_6_10_2z00, BgL_bgl_string4924za700za7za7_5180za7, "Can't read on a closed input port", 33 );
DEFINE_STRING( BGl_string4926z00zz__r4_input_6_10_2z00, BgL_bgl_string4926za700za7za7_5181za7, "read/rp", 7 );
DEFINE_STRING( BGl_string4927z00zz__r4_input_6_10_2z00, BgL_bgl_string4927za700za7za7_5182za7, "Wrong number of arguments", 25 );
DEFINE_STRING( BGl_string4930z00zz__r4_input_6_10_2z00, BgL_bgl_string4930za700za7za7_5183za7, "apply", 5 );
DEFINE_STRING( BGl_string4932z00zz__r4_input_6_10_2z00, BgL_bgl_string4932za700za7za7_5184za7, "grammar", 7 );
DEFINE_STRING( BGl_string4935z00zz__r4_input_6_10_2z00, BgL_bgl_string4935za700za7za7_5185za7, "let", 3 );
DEFINE_STRING( BGl_string4939z00zz__r4_input_6_10_2z00, BgL_bgl_string4939za700za7za7_5186za7, "list1595", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sendzd2charszf2siza7ezd2envz55zz__r4_input_6_10_2z00, BgL_bgl_za762sendza7d2charsza75187za7, BGl_z62sendzd2charszf2siza7eze5zz__r4_input_6_10_2z00, 0L, BUNSPEC, 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzf2rpzd2envz20zz__r4_input_6_10_2z00, BgL_bgl_za762readza7f2rpza790za75188z00, va_generic_entry, BGl_z62readzf2rpz90zz__r4_input_6_10_2z00, BUNSPEC, -3 );
DEFINE_STRING( BGl_string4942z00zz__r4_input_6_10_2z00, BgL_bgl_string4942za700za7za7_5189za7, "$cons", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2linezd2envz00zz__r4_input_6_10_2z00, BgL_bgl__readza7d2lineza7d2za75190za7, opt_generic_entry, BGl__readzd2linezd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_STRING( BGl_string4944z00zz__r4_input_6_10_2z00, BgL_bgl_string4944za700za7za7_5191za7, "opts", 4 );
DEFINE_STRING( BGl_string4947z00zz__r4_input_6_10_2z00, BgL_bgl_string4947za700za7za7_5192za7, "quote", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2stringzd2envz00zz__r4_input_6_10_2z00, BgL_bgl__readza7d2stringza7d5193z00, opt_generic_entry, BGl__readzd2stringzd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unreadzd2stringz12zd2envz12zz__r4_input_6_10_2z00, BgL_bgl__unreadza7d2string5194za7, opt_generic_entry, BGl__unreadzd2stringz12zc0zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_STRING( BGl_string4950z00zz__r4_input_6_10_2z00, BgL_bgl_string4950za700za7za7_5195za7, "cons*", 5 );
DEFINE_STRING( BGl_string4952z00zz__r4_input_6_10_2z00, BgL_bgl_string4952za700za7za7_5196za7, "port", 4 );
DEFINE_STRING( BGl_string4953z00zz__r4_input_6_10_2z00, BgL_bgl_string4953za700za7za7_5197za7, "read/rp:Wrong number of arguments", 33 );
DEFINE_STRING( BGl_string4956z00zz__r4_input_6_10_2z00, BgL_bgl_string4956za700za7za7_5198za7, "funcall", 7 );
DEFINE_STRING( BGl_string4958z00zz__r4_input_6_10_2z00, BgL_bgl_string4958za700za7za7_5199za7, "Grammar arity mismatch", 22 );
DEFINE_STRING( BGl_string4959z00zz__r4_input_6_10_2z00, BgL_bgl_string4959za700za7za7_5200za7, "&read/rp", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2ofzd2stringszd2envzd2zz__r4_input_6_10_2z00, BgL_bgl__readza7d2ofza7d2str5201z00, opt_generic_entry, BGl__readzd2ofzd2stringsz00zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_STRING( BGl_string4960z00zz__r4_input_6_10_2z00, BgL_bgl_string4960za700za7za7_5202za7, "procedure", 9 );
DEFINE_STRING( BGl_string4961z00zz__r4_input_6_10_2z00, BgL_bgl_string4961za700za7za7_5203za7, "read/lalrp:Wrong number of arguments", 36 );
DEFINE_STRING( BGl_string4964z00zz__r4_input_6_10_2z00, BgL_bgl_string4964za700za7za7_5204za7, "lalr", 4 );
DEFINE_STRING( BGl_string4966z00zz__r4_input_6_10_2z00, BgL_bgl_string4966za700za7za7_5205za7, "rgc", 3 );
DEFINE_STRING( BGl_string4968z00zz__r4_input_6_10_2z00, BgL_bgl_string4968za700za7za7_5206za7, "eof-object?-env", 15 );
DEFINE_STRING( BGl_string4969z00zz__r4_input_6_10_2z00, BgL_bgl_string4969za700za7za7_5207za7, "read/lalrp", 10 );
DEFINE_STRING( BGl_string4970z00zz__r4_input_6_10_2z00, BgL_bgl_string4970za700za7za7_5208za7, "pair", 4 );
DEFINE_STRING( BGl_string4973z00zz__r4_input_6_10_2z00, BgL_bgl_string4973za700za7za7_5209za7, "arg1599", 7 );
DEFINE_STRING( BGl_string4974z00zz__r4_input_6_10_2z00, BgL_bgl_string4974za700za7za7_5210za7, "&read/lalrp", 11 );
DEFINE_STRING( BGl_string4976z00zz__r4_input_6_10_2z00, BgL_bgl_string4976za700za7za7_5211za7, "read-char", 9 );
DEFINE_STRING( BGl_string4977z00zz__r4_input_6_10_2z00, BgL_bgl_string4977za700za7za7_5212za7, "wrong number of arguments: [0..1] expected, provided", 52 );
DEFINE_STRING( BGl_string4978z00zz__r4_input_6_10_2z00, BgL_bgl_string4978za700za7za7_5213za7, "STATE-0-1040", 12 );
DEFINE_STRING( BGl_string4980z00zz__r4_input_6_10_2z00, BgL_bgl_string4980za700za7za7_5214za7, "peek-char", 9 );
DEFINE_STRING( BGl_string4981z00zz__r4_input_6_10_2z00, BgL_bgl_string4981za700za7za7_5215za7, "STATE-0-1048", 12 );
DEFINE_STRING( BGl_string4983z00zz__r4_input_6_10_2z00, BgL_bgl_string4983za700za7za7_5216za7, "read-byte", 9 );
DEFINE_STRING( BGl_string4984z00zz__r4_input_6_10_2z00, BgL_bgl_string4984za700za7za7_5217za7, "STATE-0-1054", 12 );
DEFINE_STRING( BGl_string4986z00zz__r4_input_6_10_2z00, BgL_bgl_string4986za700za7za7_5218za7, "peek-byte", 9 );
DEFINE_STRING( BGl_string4987z00zz__r4_input_6_10_2z00, BgL_bgl_string4987za700za7za7_5219za7, "STATE-0-1060", 12 );
DEFINE_STRING( BGl_string4989z00zz__r4_input_6_10_2z00, BgL_bgl_string4989za700za7za7_5220za7, "char-ready?", 11 );
DEFINE_STRING( BGl_string4990z00zz__r4_input_6_10_2z00, BgL_bgl_string4990za700za7za7_5221za7, "_char-ready?", 12 );
DEFINE_STRING( BGl_string4992z00zz__r4_input_6_10_2z00, BgL_bgl_string4992za700za7za7_5222za7, "read-line", 9 );
DEFINE_STRING( BGl_string4993z00zz__r4_input_6_10_2z00, BgL_bgl_string4993za700za7za7_5223za7, "STATE-1-1069", 12 );
DEFINE_STRING( BGl_string4994z00zz__r4_input_6_10_2z00, BgL_bgl_string4994za700za7za7_5224za7, "STATE-0-1068", 12 );
DEFINE_STRING( BGl_string4995z00zz__r4_input_6_10_2z00, BgL_bgl_string4995za700za7za7_5225za7, "STATE-3-1071", 12 );
DEFINE_STRING( BGl_string4996z00zz__r4_input_6_10_2z00, BgL_bgl_string4996za700za7za7_5226za7, "STATE-6-1074", 12 );
DEFINE_STRING( BGl_string4997z00zz__r4_input_6_10_2z00, BgL_bgl_string4997za700za7za7_5227za7, "STATE-8-1076", 12 );
DEFINE_STRING( BGl_string4998z00zz__r4_input_6_10_2z00, BgL_bgl_string4998za700za7za7_5228za7, "", 0 );
DEFINE_STRING( BGl_string4999z00zz__r4_input_6_10_2z00, BgL_bgl_string4999za700za7za7_5229za7, "loop", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_readzd2lineszd2envz00zz__r4_input_6_10_2z00, BgL_bgl__readza7d2linesza7d25230z00, opt_generic_entry, BGl__readzd2lineszd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sendzd2charszd2envz00zz__r4_input_6_10_2z00, BgL_bgl__sendza7d2charsza7d25231z00, opt_generic_entry, BGl__sendzd2charszd2zz__r4_input_6_10_2z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unreadzd2substringz12zd2envz12zz__r4_input_6_10_2z00, BgL_bgl__unreadza7d2substr5232za7, opt_generic_entry, BGl__unreadzd2substringz12zc0zz__r4_input_6_10_2z00, BFALSE, -1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_list4945z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_list4948z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol5075z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_list4954z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_list4957z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_list4962z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_list4971z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4925z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4929z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4931z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4934z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4938z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4941z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4943z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4946z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4949z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4951z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4955z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4963z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4965z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4967z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4972z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4975z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4979z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4982z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4985z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4988z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol4991z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol5002z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol5009z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol5011z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol5016z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol5018z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol5024z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol5028z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol5032z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol5036z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol5040z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol5044z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_list4928z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol5055z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol5059z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_list4933z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_list4936z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_list4937z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol5063z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_symbol5069z00zz__r4_input_6_10_2z00) );
ADD_ROOT( (void *)(&BGl_list4940z00zz__r4_input_6_10_2z00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long BgL_checksumz00_7849, char * BgL_fromz00_7850)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_input_6_10_2z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_input_6_10_2z00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__r4_input_6_10_2z00(); 
BGl_cnstzd2initzd2zz__r4_input_6_10_2z00(); 
BGl_importedzd2moduleszd2initz00zz__r4_input_6_10_2z00(); 
return 
BGl_toplevelzd2initzd2zz__r4_input_6_10_2z00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_input_6_10_2z00()
{
{ /* Ieee/input.scm 14 */
BGl_symbol4925z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4926z00zz__r4_input_6_10_2z00); 
BGl_symbol4929z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4930z00zz__r4_input_6_10_2z00); 
BGl_symbol4931z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4932z00zz__r4_input_6_10_2z00); 
BGl_symbol4934z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4935z00zz__r4_input_6_10_2z00); 
BGl_symbol4938z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4939z00zz__r4_input_6_10_2z00); 
BGl_symbol4941z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4942z00zz__r4_input_6_10_2z00); 
BGl_symbol4943z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4944z00zz__r4_input_6_10_2z00); 
BGl_symbol4946z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4947z00zz__r4_input_6_10_2z00); 
BGl_list4945z00zz__r4_input_6_10_2z00 = 
MAKE_YOUNG_PAIR(BGl_symbol4946z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BNIL, BNIL)); 
BGl_list4940z00zz__r4_input_6_10_2z00 = 
MAKE_YOUNG_PAIR(BGl_symbol4941z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4943z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_list4945z00zz__r4_input_6_10_2z00, BNIL))); 
BGl_list4937z00zz__r4_input_6_10_2z00 = 
MAKE_YOUNG_PAIR(BGl_symbol4938z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_list4940z00zz__r4_input_6_10_2z00, BNIL)); 
BGl_list4936z00zz__r4_input_6_10_2z00 = 
MAKE_YOUNG_PAIR(BGl_list4937z00zz__r4_input_6_10_2z00, BNIL); 
BGl_symbol4949z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4950z00zz__r4_input_6_10_2z00); 
BGl_symbol4951z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4952z00zz__r4_input_6_10_2z00); 
BGl_list4948z00zz__r4_input_6_10_2z00 = 
MAKE_YOUNG_PAIR(BGl_symbol4949z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4951z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4938z00zz__r4_input_6_10_2z00, BNIL))); 
BGl_list4933z00zz__r4_input_6_10_2z00 = 
MAKE_YOUNG_PAIR(BGl_symbol4934z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_list4936z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_list4948z00zz__r4_input_6_10_2z00, BNIL))); 
BGl_list4928z00zz__r4_input_6_10_2z00 = 
MAKE_YOUNG_PAIR(BGl_symbol4929z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4931z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_list4933z00zz__r4_input_6_10_2z00, BNIL))); 
BGl_symbol4955z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4956z00zz__r4_input_6_10_2z00); 
BGl_list4954z00zz__r4_input_6_10_2z00 = 
MAKE_YOUNG_PAIR(BGl_symbol4955z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4931z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4931z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4951z00zz__r4_input_6_10_2z00, BNIL)))); 
BGl_list4957z00zz__r4_input_6_10_2z00 = 
MAKE_YOUNG_PAIR(BGl_symbol4955z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4931z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4931z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4951z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BUNSPEC, BNIL))))); 
BGl_symbol4963z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4964z00zz__r4_input_6_10_2z00); 
BGl_symbol4965z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4966z00zz__r4_input_6_10_2z00); 
BGl_symbol4967z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4968z00zz__r4_input_6_10_2z00); 
BGl_list4962z00zz__r4_input_6_10_2z00 = 
MAKE_YOUNG_PAIR(BGl_symbol4955z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4963z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4963z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4965z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4951z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4967z00zz__r4_input_6_10_2z00, BNIL)))))); 
BGl_symbol4972z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4973z00zz__r4_input_6_10_2z00); 
BGl_list4971z00zz__r4_input_6_10_2z00 = 
MAKE_YOUNG_PAIR(BGl_symbol4955z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4963z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4963z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4965z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4951z00zz__r4_input_6_10_2z00, 
MAKE_YOUNG_PAIR(BGl_symbol4972z00zz__r4_input_6_10_2z00, BNIL)))))); 
BGl_symbol4975z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4976z00zz__r4_input_6_10_2z00); 
BGl_symbol4979z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4980z00zz__r4_input_6_10_2z00); 
BGl_symbol4982z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4983z00zz__r4_input_6_10_2z00); 
BGl_symbol4985z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4986z00zz__r4_input_6_10_2z00); 
BGl_symbol4988z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4989z00zz__r4_input_6_10_2z00); 
BGl_symbol4991z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string4992z00zz__r4_input_6_10_2z00); 
BGl_symbol5002z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string5003z00zz__r4_input_6_10_2z00); 
BGl_symbol5009z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string5010z00zz__r4_input_6_10_2z00); 
BGl_symbol5011z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string5012z00zz__r4_input_6_10_2z00); 
BGl_symbol5016z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string5017z00zz__r4_input_6_10_2z00); 
BGl_symbol5018z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string5019z00zz__r4_input_6_10_2z00); 
BGl_symbol5024z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string5025z00zz__r4_input_6_10_2z00); 
BGl_symbol5028z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string5029z00zz__r4_input_6_10_2z00); 
BGl_symbol5032z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string5033z00zz__r4_input_6_10_2z00); 
BGl_symbol5036z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string5037z00zz__r4_input_6_10_2z00); 
BGl_symbol5040z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string5041z00zz__r4_input_6_10_2z00); 
BGl_symbol5044z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string5045z00zz__r4_input_6_10_2z00); 
BGl_symbol5055z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string5056z00zz__r4_input_6_10_2z00); 
BGl_symbol5059z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string5060z00zz__r4_input_6_10_2z00); 
BGl_symbol5063z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string5064z00zz__r4_input_6_10_2z00); 
BGl_symbol5069z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string5070z00zz__r4_input_6_10_2z00); 
return ( 
BGl_symbol5075z00zz__r4_input_6_10_2z00 = 
bstring_to_symbol(BGl_string5076z00zz__r4_input_6_10_2z00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__r4_input_6_10_2z00()
{
{ /* Ieee/input.scm 14 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__r4_input_6_10_2z00()
{
{ /* Ieee/input.scm 14 */
{ /* Ieee/input.scm 307 */
obj_t BgL_zc3z04anonymousza31395ze3z87_6647;
{ 
int BgL_tmpz00_7934;
BgL_tmpz00_7934 = 
(int)(((long)0)); 
BgL_zc3z04anonymousza31395ze3z87_6647 = 
MAKE_EL_PROCEDURE(BgL_tmpz00_7934); } 
return ( 
BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00 = BgL_zc3z04anonymousza31395ze3z87_6647, BUNSPEC) ;} } 

}



/* &<@anonymous:1395> */
obj_t BGl_z62zc3z04anonymousza31395ze3ze5zz__r4_input_6_10_2z00(obj_t BgL_envz00_6648, obj_t BgL_iportz00_6649)
{
{ /* Ieee/input.scm 307 */
{ 
obj_t BgL_iportz00_7617;long BgL_lastzd2matchzd2_7618;long BgL_forwardz00_7619;long BgL_bufposz00_7620;obj_t BgL_iportz00_7595;long BgL_lastzd2matchzd2_7596;long BgL_forwardz00_7597;long BgL_bufposz00_7598;obj_t BgL_iportz00_7577;long BgL_lastzd2matchzd2_7578;long BgL_forwardz00_7579;long BgL_bufposz00_7580;obj_t BgL_iportz00_7558;long BgL_lastzd2matchzd2_7559;long BgL_forwardz00_7560;long BgL_bufposz00_7561;obj_t BgL_iportz00_7543;long BgL_lastzd2matchzd2_7544;long BgL_forwardz00_7545;long BgL_bufposz00_7546;obj_t BgL_iportz00_7525;long BgL_lastzd2matchzd2_7526;long BgL_forwardz00_7527;long BgL_bufposz00_7528;obj_t BgL_iportz00_7510;long BgL_lastzd2matchzd2_7511;long BgL_forwardz00_7512;long BgL_bufposz00_7513;obj_t BgL_iportz00_7492;long BgL_lastzd2matchzd2_7493;long BgL_forwardz00_7494;long BgL_bufposz00_7495;int BgL_minz00_7468;int BgL_maxz00_7469;
{ /* Ieee/input.scm 307 */
bool_t BgL_test5234z00_7937;
{ /* Ieee/input.scm 307 */
obj_t BgL_arg1402z00_7635;
{ /* Ieee/input.scm 307 */
obj_t BgL_res3587z00_7636;
if(
INPUT_PORTP(BgL_iportz00_6649))
{ /* Ieee/input.scm 307 */
BgL_res3587z00_7636 = BgL_iportz00_6649; }  else 
{ 
obj_t BgL_auxz00_7940;
BgL_auxz00_7940 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4922z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_6649); 
FAILURE(BgL_auxz00_7940,BFALSE,BFALSE);} 
BgL_arg1402z00_7635 = BgL_res3587z00_7636; } 
{ /* Ieee/input.scm 307 */
bool_t BgL_res3588z00_7637;
BgL_res3588z00_7637 = 
INPUT_PORT_CLOSEP(BgL_arg1402z00_7635); 
BgL_test5234z00_7937 = BgL_res3588z00_7637; } } 
if(BgL_test5234z00_7937)
{ /* Ieee/input.scm 307 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg1398z00_7638;
{ /* Ieee/input.scm 307 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1046z00_7639;
{ /* Ieee/input.scm 307 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1045z00_7640;
BgL_new1045z00_7640 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Ieee/input.scm 307 */
long BgL_arg1401z00_7641;
{ /* Ieee/input.scm 307 */
long BgL_res3589z00_7642;
BgL_res3589z00_7642 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg1401z00_7641 = BgL_res3589z00_7642; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1045z00_7640), BgL_arg1401z00_7641); } 
BgL_new1046z00_7639 = BgL_new1045z00_7640; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_7639)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_7639)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_7953;
{ /* Ieee/input.scm 307 */
obj_t BgL_arg1399z00_7643;
{ /* Ieee/input.scm 307 */
obj_t BgL_arg1400z00_7644;
{ /* Ieee/input.scm 307 */
obj_t BgL_res3590z00_7645;
{ /* Ieee/input.scm 307 */
obj_t BgL_classz00_7646;
BgL_classz00_7646 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res3590z00_7645 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_7646); } 
BgL_arg1400z00_7644 = BgL_res3590z00_7645; } 
BgL_arg1399z00_7643 = 
VECTOR_REF(BgL_arg1400z00_7644,((long)2)); } 
{ /* Ieee/input.scm 307 */
obj_t BgL_auxz00_7957;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg1399z00_7643))
{ /* Ieee/input.scm 307 */
BgL_auxz00_7957 = BgL_arg1399z00_7643
; }  else 
{ 
obj_t BgL_auxz00_7960;
BgL_auxz00_7960 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4922z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg1399z00_7643); 
FAILURE(BgL_auxz00_7960,BFALSE,BFALSE);} 
BgL_auxz00_7953 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_7957); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_7639)))->BgL_stackz00)=((obj_t)BgL_auxz00_7953),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_7639)))->BgL_procz00)=((obj_t)BGl_string4908z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_7639)))->BgL_msgz00)=((obj_t)BGl_string4924z00zz__r4_input_6_10_2z00),BUNSPEC); 
{ 
obj_t BgL_auxz00_7970;
{ /* Ieee/input.scm 307 */
obj_t BgL_res3591z00_7647;
if(
INPUT_PORTP(BgL_iportz00_6649))
{ /* Ieee/input.scm 307 */
BgL_res3591z00_7647 = BgL_iportz00_6649; }  else 
{ 
obj_t BgL_auxz00_7974;
BgL_auxz00_7974 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4922z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_6649); 
FAILURE(BgL_auxz00_7974,BFALSE,BFALSE);} 
BgL_auxz00_7970 = BgL_res3591z00_7647; } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_7639)))->BgL_objz00)=((obj_t)BgL_auxz00_7970),BUNSPEC); } 
BgL_arg1398z00_7638 = BgL_new1046z00_7639; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1398z00_7638));}  else 
{ /* Ieee/input.scm 307 */
BgL_ignorez00_7430:
{ /* Ieee/input.scm 307 */
long BgL_res3578z00_7441;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7442;
if(
INPUT_PORTP(BgL_iportz00_6649))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7442 = BgL_iportz00_6649; }  else 
{ 
obj_t BgL_auxz00_7983;
BgL_auxz00_7983 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_6649); 
FAILURE(BgL_auxz00_7983,BFALSE,BFALSE);} 
BgL_res3578z00_7441 = 
RGC_START_MATCH(BgL_inputzd2portzd2_7442); } BgL_res3578z00_7441; } 
{ /* Ieee/input.scm 307 */
long BgL_matchz00_7443;
{ /* Ieee/input.scm 307 */
long BgL_arg1587z00_7444;long BgL_arg1588z00_7445;
{ /* Ieee/input.scm 307 */
long BgL_res3579z00_7446;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7447;
if(
INPUT_PORTP(BgL_iportz00_6649))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7447 = BgL_iportz00_6649; }  else 
{ 
obj_t BgL_auxz00_7990;
BgL_auxz00_7990 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_6649); 
FAILURE(BgL_auxz00_7990,BFALSE,BFALSE);} 
BgL_res3579z00_7446 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_7447); } 
BgL_arg1587z00_7444 = BgL_res3579z00_7446; } 
{ /* Ieee/input.scm 307 */
long BgL_res3580z00_7448;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7449;
if(
INPUT_PORTP(BgL_iportz00_6649))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7449 = BgL_iportz00_6649; }  else 
{ 
obj_t BgL_auxz00_7997;
BgL_auxz00_7997 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_6649); 
FAILURE(BgL_auxz00_7997,BFALSE,BFALSE);} 
BgL_res3580z00_7448 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_7449); } 
BgL_arg1588z00_7445 = BgL_res3580z00_7448; } 
BgL_iportz00_7543 = BgL_iportz00_6649; 
BgL_lastzd2matchzd2_7544 = ((long)4); 
BgL_forwardz00_7545 = BgL_arg1587z00_7444; 
BgL_bufposz00_7546 = BgL_arg1588z00_7445; 
BgL_statezd20zd21105z00_7436:
if(
(BgL_forwardz00_7545==BgL_bufposz00_7546))
{ /* Ieee/input.scm 307 */
bool_t BgL_test5242z00_8004;
{ /* Ieee/input.scm 307 */
bool_t BgL_res3521z00_7547;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7548;
if(
INPUT_PORTP(BgL_iportz00_7543))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7548 = BgL_iportz00_7543; }  else 
{ 
obj_t BgL_auxz00_8007;
BgL_auxz00_8007 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4917z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7543); 
FAILURE(BgL_auxz00_8007,BFALSE,BFALSE);} 
BgL_res3521z00_7547 = 
rgc_fill_buffer(BgL_inputzd2portzd2_7548); } 
BgL_test5242z00_8004 = BgL_res3521z00_7547; } 
if(BgL_test5242z00_8004)
{ /* Ieee/input.scm 307 */
long BgL_arg1449z00_7549;long BgL_arg1451z00_7550;
{ /* Ieee/input.scm 307 */
long BgL_res3522z00_7551;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7552;
if(
INPUT_PORTP(BgL_iportz00_7543))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7552 = BgL_iportz00_7543; }  else 
{ 
obj_t BgL_auxz00_8014;
BgL_auxz00_8014 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4917z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7543); 
FAILURE(BgL_auxz00_8014,BFALSE,BFALSE);} 
BgL_res3522z00_7551 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_7552); } 
BgL_arg1449z00_7549 = BgL_res3522z00_7551; } 
{ /* Ieee/input.scm 307 */
long BgL_res3523z00_7553;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7554;
if(
INPUT_PORTP(BgL_iportz00_7543))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7554 = BgL_iportz00_7543; }  else 
{ 
obj_t BgL_auxz00_8021;
BgL_auxz00_8021 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4917z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7543); 
FAILURE(BgL_auxz00_8021,BFALSE,BFALSE);} 
BgL_res3523z00_7553 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_7554); } 
BgL_arg1451z00_7550 = BgL_res3523z00_7553; } 
{ 
long BgL_bufposz00_8027;long BgL_forwardz00_8026;
BgL_forwardz00_8026 = BgL_arg1449z00_7549; 
BgL_bufposz00_8027 = BgL_arg1451z00_7550; 
BgL_bufposz00_7546 = BgL_bufposz00_8027; 
BgL_forwardz00_7545 = BgL_forwardz00_8026; 
goto BgL_statezd20zd21105z00_7436;} }  else 
{ /* Ieee/input.scm 307 */
BgL_matchz00_7443 = BgL_lastzd2matchzd2_7544; } }  else 
{ /* Ieee/input.scm 307 */
int BgL_curz00_7555;
{ /* Ieee/input.scm 307 */
int BgL_res3524z00_7556;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7557;
if(
INPUT_PORTP(BgL_iportz00_7543))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7557 = BgL_iportz00_7543; }  else 
{ 
obj_t BgL_auxz00_8030;
BgL_auxz00_8030 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4917z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7543); 
FAILURE(BgL_auxz00_8030,BFALSE,BFALSE);} 
BgL_res3524z00_7556 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_7557, BgL_forwardz00_7545); } 
BgL_curz00_7555 = BgL_res3524z00_7556; } 
{ /* Ieee/input.scm 307 */

if(
(
(long)(BgL_curz00_7555)==((long)34)))
{ /* Ieee/input.scm 307 */
BgL_iportz00_7595 = BgL_iportz00_7543; 
BgL_lastzd2matchzd2_7596 = BgL_lastzd2matchzd2_7544; 
BgL_forwardz00_7597 = 
(((long)1)+BgL_forwardz00_7545); 
BgL_bufposz00_7598 = BgL_bufposz00_7546; 
BgL_statezd23zd21108z00_7439:
{ /* Ieee/input.scm 307 */
long BgL_newzd2matchzd2_7599;
{ /* Ieee/input.scm 307 */
long BgL_res3483z00_7600;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7601;
if(
INPUT_PORTP(BgL_iportz00_7595))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7601 = BgL_iportz00_7595; }  else 
{ 
obj_t BgL_auxz00_8040;
BgL_auxz00_8040 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4920z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7595); 
FAILURE(BgL_auxz00_8040,BFALSE,BFALSE);} 
BgL_res3483z00_7600 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_7601, BgL_forwardz00_7597); } BgL_res3483z00_7600; } 
BgL_newzd2matchzd2_7599 = ((long)1); 
if(
(BgL_forwardz00_7597==BgL_bufposz00_7598))
{ /* Ieee/input.scm 307 */
bool_t BgL_test5250z00_8047;
{ /* Ieee/input.scm 307 */
bool_t BgL_res3485z00_7602;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7603;
if(
INPUT_PORTP(BgL_iportz00_7595))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7603 = BgL_iportz00_7595; }  else 
{ 
obj_t BgL_auxz00_8050;
BgL_auxz00_8050 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4920z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7595); 
FAILURE(BgL_auxz00_8050,BFALSE,BFALSE);} 
BgL_res3485z00_7602 = 
rgc_fill_buffer(BgL_inputzd2portzd2_7603); } 
BgL_test5250z00_8047 = BgL_res3485z00_7602; } 
if(BgL_test5250z00_8047)
{ /* Ieee/input.scm 307 */
long BgL_arg1416z00_7604;long BgL_arg1417z00_7605;
{ /* Ieee/input.scm 307 */
long BgL_res3486z00_7606;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7607;
if(
INPUT_PORTP(BgL_iportz00_7595))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7607 = BgL_iportz00_7595; }  else 
{ 
obj_t BgL_auxz00_8057;
BgL_auxz00_8057 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4920z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7595); 
FAILURE(BgL_auxz00_8057,BFALSE,BFALSE);} 
BgL_res3486z00_7606 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_7607); } 
BgL_arg1416z00_7604 = BgL_res3486z00_7606; } 
{ /* Ieee/input.scm 307 */
long BgL_res3487z00_7608;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7609;
if(
INPUT_PORTP(BgL_iportz00_7595))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7609 = BgL_iportz00_7595; }  else 
{ 
obj_t BgL_auxz00_8064;
BgL_auxz00_8064 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4920z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7595); 
FAILURE(BgL_auxz00_8064,BFALSE,BFALSE);} 
BgL_res3487z00_7608 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_7609); } 
BgL_arg1417z00_7605 = BgL_res3487z00_7608; } 
{ 
long BgL_bufposz00_8070;long BgL_forwardz00_8069;
BgL_forwardz00_8069 = BgL_arg1416z00_7604; 
BgL_bufposz00_8070 = BgL_arg1417z00_7605; 
BgL_bufposz00_7598 = BgL_bufposz00_8070; 
BgL_forwardz00_7597 = BgL_forwardz00_8069; 
goto BgL_statezd23zd21108z00_7439;} }  else 
{ /* Ieee/input.scm 307 */
BgL_matchz00_7443 = BgL_newzd2matchzd2_7599; } }  else 
{ /* Ieee/input.scm 307 */
int BgL_curz00_7610;
{ /* Ieee/input.scm 307 */
int BgL_res3488z00_7611;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7612;
if(
INPUT_PORTP(BgL_iportz00_7595))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7612 = BgL_iportz00_7595; }  else 
{ 
obj_t BgL_auxz00_8073;
BgL_auxz00_8073 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4920z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7595); 
FAILURE(BgL_auxz00_8073,BFALSE,BFALSE);} 
BgL_res3488z00_7611 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_7612, BgL_forwardz00_7597); } 
BgL_curz00_7610 = BgL_res3488z00_7611; } 
{ /* Ieee/input.scm 307 */

if(
(
(long)(BgL_curz00_7610)==((long)92)))
{ /* Ieee/input.scm 307 */
BgL_iportz00_7510 = BgL_iportz00_7595; 
BgL_lastzd2matchzd2_7511 = BgL_newzd2matchzd2_7599; 
BgL_forwardz00_7512 = 
(((long)1)+BgL_forwardz00_7597); 
BgL_bufposz00_7513 = BgL_bufposz00_7598; 
BgL_statezd26zd21111z00_7434:
if(
(BgL_forwardz00_7512==BgL_bufposz00_7513))
{ /* Ieee/input.scm 307 */
bool_t BgL_test5257z00_8083;
{ /* Ieee/input.scm 307 */
bool_t BgL_res3544z00_7514;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7515;
if(
INPUT_PORTP(BgL_iportz00_7510))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7515 = BgL_iportz00_7510; }  else 
{ 
obj_t BgL_auxz00_8086;
BgL_auxz00_8086 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4915z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7510); 
FAILURE(BgL_auxz00_8086,BFALSE,BFALSE);} 
BgL_res3544z00_7514 = 
rgc_fill_buffer(BgL_inputzd2portzd2_7515); } 
BgL_test5257z00_8083 = BgL_res3544z00_7514; } 
if(BgL_test5257z00_8083)
{ /* Ieee/input.scm 307 */
long BgL_arg1472z00_7516;long BgL_arg1473z00_7517;
{ /* Ieee/input.scm 307 */
long BgL_res3545z00_7518;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7519;
if(
INPUT_PORTP(BgL_iportz00_7510))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7519 = BgL_iportz00_7510; }  else 
{ 
obj_t BgL_auxz00_8093;
BgL_auxz00_8093 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4915z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7510); 
FAILURE(BgL_auxz00_8093,BFALSE,BFALSE);} 
BgL_res3545z00_7518 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_7519); } 
BgL_arg1472z00_7516 = BgL_res3545z00_7518; } 
{ /* Ieee/input.scm 307 */
long BgL_res3546z00_7520;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7521;
if(
INPUT_PORTP(BgL_iportz00_7510))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7521 = BgL_iportz00_7510; }  else 
{ 
obj_t BgL_auxz00_8100;
BgL_auxz00_8100 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4915z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7510); 
FAILURE(BgL_auxz00_8100,BFALSE,BFALSE);} 
BgL_res3546z00_7520 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_7521); } 
BgL_arg1473z00_7517 = BgL_res3546z00_7520; } 
{ 
long BgL_bufposz00_8106;long BgL_forwardz00_8105;
BgL_forwardz00_8105 = BgL_arg1472z00_7516; 
BgL_bufposz00_8106 = BgL_arg1473z00_7517; 
BgL_bufposz00_7513 = BgL_bufposz00_8106; 
BgL_forwardz00_7512 = BgL_forwardz00_8105; 
goto BgL_statezd26zd21111z00_7434;} }  else 
{ /* Ieee/input.scm 307 */
BgL_matchz00_7443 = BgL_lastzd2matchzd2_7511; } }  else 
{ /* Ieee/input.scm 307 */
int BgL_curz00_7522;
{ /* Ieee/input.scm 307 */
int BgL_res3547z00_7523;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7524;
if(
INPUT_PORTP(BgL_iportz00_7510))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7524 = BgL_iportz00_7510; }  else 
{ 
obj_t BgL_auxz00_8109;
BgL_auxz00_8109 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4915z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7510); 
FAILURE(BgL_auxz00_8109,BFALSE,BFALSE);} 
BgL_res3547z00_7523 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_7524, BgL_forwardz00_7512); } 
BgL_curz00_7522 = BgL_res3547z00_7523; } 
{ /* Ieee/input.scm 307 */

if(
(
(long)(BgL_curz00_7522)==((long)10)))
{ /* Ieee/input.scm 307 */
BgL_matchz00_7443 = BgL_lastzd2matchzd2_7511; }  else 
{ /* Ieee/input.scm 307 */
BgL_iportz00_7558 = BgL_iportz00_7510; 
BgL_lastzd2matchzd2_7559 = BgL_lastzd2matchzd2_7511; 
BgL_forwardz00_7560 = 
(((long)1)+BgL_forwardz00_7512); 
BgL_bufposz00_7561 = BgL_bufposz00_7513; 
BgL_statezd24zd21109z00_7437:
if(
(BgL_forwardz00_7560==BgL_bufposz00_7561))
{ /* Ieee/input.scm 307 */
bool_t BgL_test5264z00_8119;
{ /* Ieee/input.scm 307 */
bool_t BgL_res3508z00_7562;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7563;
if(
INPUT_PORTP(BgL_iportz00_7558))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7563 = BgL_iportz00_7558; }  else 
{ 
obj_t BgL_auxz00_8122;
BgL_auxz00_8122 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4918z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7558); 
FAILURE(BgL_auxz00_8122,BFALSE,BFALSE);} 
BgL_res3508z00_7562 = 
rgc_fill_buffer(BgL_inputzd2portzd2_7563); } 
BgL_test5264z00_8119 = BgL_res3508z00_7562; } 
if(BgL_test5264z00_8119)
{ /* Ieee/input.scm 307 */
long BgL_arg1437z00_7564;long BgL_arg1438z00_7565;
{ /* Ieee/input.scm 307 */
long BgL_res3509z00_7566;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7567;
if(
INPUT_PORTP(BgL_iportz00_7558))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7567 = BgL_iportz00_7558; }  else 
{ 
obj_t BgL_auxz00_8129;
BgL_auxz00_8129 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4918z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7558); 
FAILURE(BgL_auxz00_8129,BFALSE,BFALSE);} 
BgL_res3509z00_7566 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_7567); } 
BgL_arg1437z00_7564 = BgL_res3509z00_7566; } 
{ /* Ieee/input.scm 307 */
long BgL_res3510z00_7568;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7569;
if(
INPUT_PORTP(BgL_iportz00_7558))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7569 = BgL_iportz00_7558; }  else 
{ 
obj_t BgL_auxz00_8136;
BgL_auxz00_8136 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4918z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7558); 
FAILURE(BgL_auxz00_8136,BFALSE,BFALSE);} 
BgL_res3510z00_7568 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_7569); } 
BgL_arg1438z00_7565 = BgL_res3510z00_7568; } 
{ 
long BgL_bufposz00_8142;long BgL_forwardz00_8141;
BgL_forwardz00_8141 = BgL_arg1437z00_7564; 
BgL_bufposz00_8142 = BgL_arg1438z00_7565; 
BgL_bufposz00_7561 = BgL_bufposz00_8142; 
BgL_forwardz00_7560 = BgL_forwardz00_8141; 
goto BgL_statezd24zd21109z00_7437;} }  else 
{ /* Ieee/input.scm 307 */
BgL_matchz00_7443 = BgL_lastzd2matchzd2_7559; } }  else 
{ /* Ieee/input.scm 307 */
int BgL_curz00_7570;
{ /* Ieee/input.scm 307 */
int BgL_res3511z00_7571;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7572;
if(
INPUT_PORTP(BgL_iportz00_7558))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7572 = BgL_iportz00_7558; }  else 
{ 
obj_t BgL_auxz00_8145;
BgL_auxz00_8145 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4918z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7558); 
FAILURE(BgL_auxz00_8145,BFALSE,BFALSE);} 
BgL_res3511z00_7571 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_7572, BgL_forwardz00_7560); } 
BgL_curz00_7570 = BgL_res3511z00_7571; } 
{ /* Ieee/input.scm 307 */

if(
(
(long)(BgL_curz00_7570)==((long)92)))
{ 
long BgL_bufposz00_8157;long BgL_forwardz00_8155;long BgL_lastzd2matchzd2_8154;obj_t BgL_iportz00_8153;
BgL_iportz00_8153 = BgL_iportz00_7558; 
BgL_lastzd2matchzd2_8154 = BgL_lastzd2matchzd2_7559; 
BgL_forwardz00_8155 = 
(((long)1)+BgL_forwardz00_7560); 
BgL_bufposz00_8157 = BgL_bufposz00_7561; 
BgL_bufposz00_7513 = BgL_bufposz00_8157; 
BgL_forwardz00_7512 = BgL_forwardz00_8155; 
BgL_lastzd2matchzd2_7511 = BgL_lastzd2matchzd2_8154; 
BgL_iportz00_7510 = BgL_iportz00_8153; 
goto BgL_statezd26zd21111z00_7434;}  else 
{ /* Ieee/input.scm 307 */
if(
(
(long)(BgL_curz00_7570)==((long)34)))
{ /* Ieee/input.scm 307 */
long BgL_arg1442z00_7573;
BgL_arg1442z00_7573 = 
(((long)1)+BgL_forwardz00_7560); 
{ /* Ieee/input.scm 307 */
long BgL_newzd2matchzd2_7574;
{ /* Ieee/input.scm 307 */
long BgL_res3516z00_7575;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7576;
if(
INPUT_PORTP(BgL_iportz00_7558))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7576 = BgL_iportz00_7558; }  else 
{ 
obj_t BgL_auxz00_8164;
BgL_auxz00_8164 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4918z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7558); 
FAILURE(BgL_auxz00_8164,BFALSE,BFALSE);} 
BgL_res3516z00_7575 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_7576, BgL_arg1442z00_7573); } BgL_res3516z00_7575; } 
BgL_newzd2matchzd2_7574 = ((long)2); 
BgL_matchz00_7443 = BgL_newzd2matchzd2_7574; } }  else 
{ /* Ieee/input.scm 307 */
bool_t BgL_test5272z00_8169;
if(
(
(long)(BgL_curz00_7570)==((long)34)))
{ /* Ieee/input.scm 307 */
BgL_test5272z00_8169 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 307 */
BgL_test5272z00_8169 = 
(
(long)(BgL_curz00_7570)==((long)92))
; } 
if(BgL_test5272z00_8169)
{ /* Ieee/input.scm 307 */
BgL_matchz00_7443 = BgL_lastzd2matchzd2_7559; }  else 
{ 
long BgL_forwardz00_8175;
BgL_forwardz00_8175 = 
(((long)1)+BgL_forwardz00_7560); 
BgL_forwardz00_7560 = BgL_forwardz00_8175; 
goto BgL_statezd24zd21109z00_7437;} } } } } } } } }  else 
{ /* Ieee/input.scm 307 */
if(
(
(long)(BgL_curz00_7610)==((long)34)))
{ /* Ieee/input.scm 307 */
long BgL_arg1421z00_7613;
BgL_arg1421z00_7613 = 
(((long)1)+BgL_forwardz00_7597); 
{ /* Ieee/input.scm 307 */
long BgL_newzd2matchzd2_7614;
{ /* Ieee/input.scm 307 */
long BgL_res3493z00_7615;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7616;
if(
INPUT_PORTP(BgL_iportz00_7595))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7616 = BgL_iportz00_7595; }  else 
{ 
obj_t BgL_auxz00_8185;
BgL_auxz00_8185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4920z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7595); 
FAILURE(BgL_auxz00_8185,BFALSE,BFALSE);} 
BgL_res3493z00_7615 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_7616, BgL_arg1421z00_7613); } BgL_res3493z00_7615; } 
BgL_newzd2matchzd2_7614 = ((long)2); 
BgL_matchz00_7443 = BgL_newzd2matchzd2_7614; } }  else 
{ /* Ieee/input.scm 307 */
bool_t BgL_test5276z00_8190;
if(
(
(long)(BgL_curz00_7610)==((long)34)))
{ /* Ieee/input.scm 307 */
BgL_test5276z00_8190 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 307 */
BgL_test5276z00_8190 = 
(
(long)(BgL_curz00_7610)==((long)92))
; } 
if(BgL_test5276z00_8190)
{ /* Ieee/input.scm 307 */
BgL_matchz00_7443 = BgL_newzd2matchzd2_7599; }  else 
{ 
long BgL_bufposz00_8200;long BgL_forwardz00_8198;long BgL_lastzd2matchzd2_8197;obj_t BgL_iportz00_8196;
BgL_iportz00_8196 = BgL_iportz00_7595; 
BgL_lastzd2matchzd2_8197 = BgL_newzd2matchzd2_7599; 
BgL_forwardz00_8198 = 
(((long)1)+BgL_forwardz00_7597); 
BgL_bufposz00_8200 = BgL_bufposz00_7598; 
BgL_bufposz00_7561 = BgL_bufposz00_8200; 
BgL_forwardz00_7560 = BgL_forwardz00_8198; 
BgL_lastzd2matchzd2_7559 = BgL_lastzd2matchzd2_8197; 
BgL_iportz00_7558 = BgL_iportz00_8196; 
goto BgL_statezd24zd21109z00_7437;} } } } } } }  else 
{ /* Ieee/input.scm 307 */
bool_t BgL_test5278z00_8202;
{ /* Ieee/input.scm 307 */
bool_t BgL_test5279z00_8203;
if(
(
(long)(BgL_curz00_7555)==((long)10)))
{ /* Ieee/input.scm 307 */
BgL_test5279z00_8203 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 307 */
BgL_test5279z00_8203 = 
(
(long)(BgL_curz00_7555)==((long)9))
; } 
if(BgL_test5279z00_8203)
{ /* Ieee/input.scm 307 */
BgL_test5278z00_8202 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 307 */
BgL_test5278z00_8202 = 
(
(long)(BgL_curz00_7555)==((long)32))
; } } 
if(BgL_test5278z00_8202)
{ /* Ieee/input.scm 307 */
BgL_iportz00_7577 = BgL_iportz00_7543; 
BgL_lastzd2matchzd2_7578 = BgL_lastzd2matchzd2_7544; 
BgL_forwardz00_7579 = 
(((long)1)+BgL_forwardz00_7545); 
BgL_bufposz00_7580 = BgL_bufposz00_7546; 
BgL_statezd22zd21107z00_7438:
{ /* Ieee/input.scm 307 */
long BgL_newzd2matchzd2_7581;
{ /* Ieee/input.scm 307 */
long BgL_res3497z00_7582;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7583;
if(
INPUT_PORTP(BgL_iportz00_7577))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7583 = BgL_iportz00_7577; }  else 
{ 
obj_t BgL_auxz00_8213;
BgL_auxz00_8213 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4919z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7577); 
FAILURE(BgL_auxz00_8213,BFALSE,BFALSE);} 
BgL_res3497z00_7582 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_7583, BgL_forwardz00_7579); } BgL_res3497z00_7582; } 
BgL_newzd2matchzd2_7581 = ((long)0); 
if(
(BgL_forwardz00_7579==BgL_bufposz00_7580))
{ /* Ieee/input.scm 307 */
bool_t BgL_test5283z00_8220;
{ /* Ieee/input.scm 307 */
bool_t BgL_res3499z00_7584;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7585;
if(
INPUT_PORTP(BgL_iportz00_7577))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7585 = BgL_iportz00_7577; }  else 
{ 
obj_t BgL_auxz00_8223;
BgL_auxz00_8223 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4919z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7577); 
FAILURE(BgL_auxz00_8223,BFALSE,BFALSE);} 
BgL_res3499z00_7584 = 
rgc_fill_buffer(BgL_inputzd2portzd2_7585); } 
BgL_test5283z00_8220 = BgL_res3499z00_7584; } 
if(BgL_test5283z00_8220)
{ /* Ieee/input.scm 307 */
long BgL_arg1428z00_7586;long BgL_arg1429z00_7587;
{ /* Ieee/input.scm 307 */
long BgL_res3500z00_7588;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7589;
if(
INPUT_PORTP(BgL_iportz00_7577))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7589 = BgL_iportz00_7577; }  else 
{ 
obj_t BgL_auxz00_8230;
BgL_auxz00_8230 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4919z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7577); 
FAILURE(BgL_auxz00_8230,BFALSE,BFALSE);} 
BgL_res3500z00_7588 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_7589); } 
BgL_arg1428z00_7586 = BgL_res3500z00_7588; } 
{ /* Ieee/input.scm 307 */
long BgL_res3501z00_7590;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7591;
if(
INPUT_PORTP(BgL_iportz00_7577))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7591 = BgL_iportz00_7577; }  else 
{ 
obj_t BgL_auxz00_8237;
BgL_auxz00_8237 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4919z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7577); 
FAILURE(BgL_auxz00_8237,BFALSE,BFALSE);} 
BgL_res3501z00_7590 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_7591); } 
BgL_arg1429z00_7587 = BgL_res3501z00_7590; } 
{ 
long BgL_bufposz00_8243;long BgL_forwardz00_8242;
BgL_forwardz00_8242 = BgL_arg1428z00_7586; 
BgL_bufposz00_8243 = BgL_arg1429z00_7587; 
BgL_bufposz00_7580 = BgL_bufposz00_8243; 
BgL_forwardz00_7579 = BgL_forwardz00_8242; 
goto BgL_statezd22zd21107z00_7438;} }  else 
{ /* Ieee/input.scm 307 */
BgL_matchz00_7443 = BgL_newzd2matchzd2_7581; } }  else 
{ /* Ieee/input.scm 307 */
int BgL_curz00_7592;
{ /* Ieee/input.scm 307 */
int BgL_res3502z00_7593;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7594;
if(
INPUT_PORTP(BgL_iportz00_7577))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7594 = BgL_iportz00_7577; }  else 
{ 
obj_t BgL_auxz00_8246;
BgL_auxz00_8246 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4919z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7577); 
FAILURE(BgL_auxz00_8246,BFALSE,BFALSE);} 
BgL_res3502z00_7593 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_7594, BgL_forwardz00_7579); } 
BgL_curz00_7592 = BgL_res3502z00_7593; } 
{ /* Ieee/input.scm 307 */

{ /* Ieee/input.scm 307 */
bool_t BgL_test5288z00_8251;
{ /* Ieee/input.scm 307 */
bool_t BgL_test5289z00_8252;
if(
(
(long)(BgL_curz00_7592)==((long)10)))
{ /* Ieee/input.scm 307 */
BgL_test5289z00_8252 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 307 */
BgL_test5289z00_8252 = 
(
(long)(BgL_curz00_7592)==((long)9))
; } 
if(BgL_test5289z00_8252)
{ /* Ieee/input.scm 307 */
BgL_test5288z00_8251 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 307 */
BgL_test5288z00_8251 = 
(
(long)(BgL_curz00_7592)==((long)32))
; } } 
if(BgL_test5288z00_8251)
{ /* Ieee/input.scm 307 */
BgL_iportz00_7492 = BgL_iportz00_7577; 
BgL_lastzd2matchzd2_7493 = BgL_newzd2matchzd2_7581; 
BgL_forwardz00_7494 = 
(((long)1)+BgL_forwardz00_7579); 
BgL_bufposz00_7495 = BgL_bufposz00_7580; 
BgL_statezd28zd21113z00_7433:
{ /* Ieee/input.scm 307 */
long BgL_newzd2matchzd2_7496;
{ /* Ieee/input.scm 307 */
long BgL_res3551z00_7497;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7498;
if(
INPUT_PORTP(BgL_iportz00_7492))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7498 = BgL_iportz00_7492; }  else 
{ 
obj_t BgL_auxz00_8262;
BgL_auxz00_8262 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4914z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7492); 
FAILURE(BgL_auxz00_8262,BFALSE,BFALSE);} 
BgL_res3551z00_7497 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_7498, BgL_forwardz00_7494); } BgL_res3551z00_7497; } 
BgL_newzd2matchzd2_7496 = ((long)0); 
if(
(BgL_forwardz00_7494==BgL_bufposz00_7495))
{ /* Ieee/input.scm 307 */
bool_t BgL_test5293z00_8269;
{ /* Ieee/input.scm 307 */
bool_t BgL_res3553z00_7499;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7500;
if(
INPUT_PORTP(BgL_iportz00_7492))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7500 = BgL_iportz00_7492; }  else 
{ 
obj_t BgL_auxz00_8272;
BgL_auxz00_8272 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4914z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7492); 
FAILURE(BgL_auxz00_8272,BFALSE,BFALSE);} 
BgL_res3553z00_7499 = 
rgc_fill_buffer(BgL_inputzd2portzd2_7500); } 
BgL_test5293z00_8269 = BgL_res3553z00_7499; } 
if(BgL_test5293z00_8269)
{ /* Ieee/input.scm 307 */
long BgL_arg1480z00_7501;long BgL_arg1483z00_7502;
{ /* Ieee/input.scm 307 */
long BgL_res3554z00_7503;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7504;
if(
INPUT_PORTP(BgL_iportz00_7492))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7504 = BgL_iportz00_7492; }  else 
{ 
obj_t BgL_auxz00_8279;
BgL_auxz00_8279 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4914z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7492); 
FAILURE(BgL_auxz00_8279,BFALSE,BFALSE);} 
BgL_res3554z00_7503 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_7504); } 
BgL_arg1480z00_7501 = BgL_res3554z00_7503; } 
{ /* Ieee/input.scm 307 */
long BgL_res3555z00_7505;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7506;
if(
INPUT_PORTP(BgL_iportz00_7492))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7506 = BgL_iportz00_7492; }  else 
{ 
obj_t BgL_auxz00_8286;
BgL_auxz00_8286 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4914z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7492); 
FAILURE(BgL_auxz00_8286,BFALSE,BFALSE);} 
BgL_res3555z00_7505 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_7506); } 
BgL_arg1483z00_7502 = BgL_res3555z00_7505; } 
{ 
long BgL_bufposz00_8292;long BgL_forwardz00_8291;
BgL_forwardz00_8291 = BgL_arg1480z00_7501; 
BgL_bufposz00_8292 = BgL_arg1483z00_7502; 
BgL_bufposz00_7495 = BgL_bufposz00_8292; 
BgL_forwardz00_7494 = BgL_forwardz00_8291; 
goto BgL_statezd28zd21113z00_7433;} }  else 
{ /* Ieee/input.scm 307 */
BgL_matchz00_7443 = BgL_newzd2matchzd2_7496; } }  else 
{ /* Ieee/input.scm 307 */
int BgL_curz00_7507;
{ /* Ieee/input.scm 307 */
int BgL_res3556z00_7508;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7509;
if(
INPUT_PORTP(BgL_iportz00_7492))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7509 = BgL_iportz00_7492; }  else 
{ 
obj_t BgL_auxz00_8295;
BgL_auxz00_8295 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4914z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7492); 
FAILURE(BgL_auxz00_8295,BFALSE,BFALSE);} 
BgL_res3556z00_7508 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_7509, BgL_forwardz00_7494); } 
BgL_curz00_7507 = BgL_res3556z00_7508; } 
{ /* Ieee/input.scm 307 */

{ /* Ieee/input.scm 307 */
bool_t BgL_test5298z00_8300;
{ /* Ieee/input.scm 307 */
bool_t BgL_test5299z00_8301;
if(
(
(long)(BgL_curz00_7507)==((long)10)))
{ /* Ieee/input.scm 307 */
BgL_test5299z00_8301 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 307 */
BgL_test5299z00_8301 = 
(
(long)(BgL_curz00_7507)==((long)9))
; } 
if(BgL_test5299z00_8301)
{ /* Ieee/input.scm 307 */
BgL_test5298z00_8300 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 307 */
BgL_test5298z00_8300 = 
(
(long)(BgL_curz00_7507)==((long)32))
; } } 
if(BgL_test5298z00_8300)
{ 
long BgL_forwardz00_8310;long BgL_lastzd2matchzd2_8309;
BgL_lastzd2matchzd2_8309 = BgL_newzd2matchzd2_7496; 
BgL_forwardz00_8310 = 
(((long)1)+BgL_forwardz00_7494); 
BgL_forwardz00_7494 = BgL_forwardz00_8310; 
BgL_lastzd2matchzd2_7493 = BgL_lastzd2matchzd2_8309; 
goto BgL_statezd28zd21113z00_7433;}  else 
{ /* Ieee/input.scm 307 */
BgL_matchz00_7443 = BgL_newzd2matchzd2_7496; } } } } } }  else 
{ /* Ieee/input.scm 307 */
BgL_matchz00_7443 = BgL_newzd2matchzd2_7581; } } } } } }  else 
{ /* Ieee/input.scm 307 */
BgL_iportz00_7617 = BgL_iportz00_7543; 
BgL_lastzd2matchzd2_7618 = BgL_lastzd2matchzd2_7544; 
BgL_forwardz00_7619 = 
(((long)1)+BgL_forwardz00_7545); 
BgL_bufposz00_7620 = BgL_bufposz00_7546; 
BgL_statezd21zd21106z00_7440:
{ /* Ieee/input.scm 307 */
long BgL_newzd2matchzd2_7621;
{ /* Ieee/input.scm 307 */
long BgL_res3472z00_7622;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7623;
if(
INPUT_PORTP(BgL_iportz00_7617))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7623 = BgL_iportz00_7617; }  else 
{ 
obj_t BgL_auxz00_8316;
BgL_auxz00_8316 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4921z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7617); 
FAILURE(BgL_auxz00_8316,BFALSE,BFALSE);} 
BgL_res3472z00_7622 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_7623, BgL_forwardz00_7619); } BgL_res3472z00_7622; } 
BgL_newzd2matchzd2_7621 = ((long)3); 
if(
(BgL_forwardz00_7619==BgL_bufposz00_7620))
{ /* Ieee/input.scm 307 */
bool_t BgL_test5303z00_8323;
{ /* Ieee/input.scm 307 */
bool_t BgL_res3474z00_7624;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7625;
if(
INPUT_PORTP(BgL_iportz00_7617))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7625 = BgL_iportz00_7617; }  else 
{ 
obj_t BgL_auxz00_8326;
BgL_auxz00_8326 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4921z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7617); 
FAILURE(BgL_auxz00_8326,BFALSE,BFALSE);} 
BgL_res3474z00_7624 = 
rgc_fill_buffer(BgL_inputzd2portzd2_7625); } 
BgL_test5303z00_8323 = BgL_res3474z00_7624; } 
if(BgL_test5303z00_8323)
{ /* Ieee/input.scm 307 */
long BgL_arg1406z00_7626;long BgL_arg1407z00_7627;
{ /* Ieee/input.scm 307 */
long BgL_res3475z00_7628;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7629;
if(
INPUT_PORTP(BgL_iportz00_7617))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7629 = BgL_iportz00_7617; }  else 
{ 
obj_t BgL_auxz00_8333;
BgL_auxz00_8333 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4921z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7617); 
FAILURE(BgL_auxz00_8333,BFALSE,BFALSE);} 
BgL_res3475z00_7628 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_7629); } 
BgL_arg1406z00_7626 = BgL_res3475z00_7628; } 
{ /* Ieee/input.scm 307 */
long BgL_res3476z00_7630;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7631;
if(
INPUT_PORTP(BgL_iportz00_7617))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7631 = BgL_iportz00_7617; }  else 
{ 
obj_t BgL_auxz00_8340;
BgL_auxz00_8340 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4921z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7617); 
FAILURE(BgL_auxz00_8340,BFALSE,BFALSE);} 
BgL_res3476z00_7630 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_7631); } 
BgL_arg1407z00_7627 = BgL_res3476z00_7630; } 
{ 
long BgL_bufposz00_8346;long BgL_forwardz00_8345;
BgL_forwardz00_8345 = BgL_arg1406z00_7626; 
BgL_bufposz00_8346 = BgL_arg1407z00_7627; 
BgL_bufposz00_7620 = BgL_bufposz00_8346; 
BgL_forwardz00_7619 = BgL_forwardz00_8345; 
goto BgL_statezd21zd21106z00_7440;} }  else 
{ /* Ieee/input.scm 307 */
BgL_matchz00_7443 = BgL_newzd2matchzd2_7621; } }  else 
{ /* Ieee/input.scm 307 */
int BgL_curz00_7632;
{ /* Ieee/input.scm 307 */
int BgL_res3477z00_7633;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7634;
if(
INPUT_PORTP(BgL_iportz00_7617))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7634 = BgL_iportz00_7617; }  else 
{ 
obj_t BgL_auxz00_8349;
BgL_auxz00_8349 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4921z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7617); 
FAILURE(BgL_auxz00_8349,BFALSE,BFALSE);} 
BgL_res3477z00_7633 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_7634, BgL_forwardz00_7619); } 
BgL_curz00_7632 = BgL_res3477z00_7633; } 
{ /* Ieee/input.scm 307 */

{ /* Ieee/input.scm 307 */
bool_t BgL_test5308z00_8354;
{ /* Ieee/input.scm 307 */
bool_t BgL_test5309z00_8355;
if(
(
(long)(BgL_curz00_7632)==((long)10)))
{ /* Ieee/input.scm 307 */
BgL_test5309z00_8355 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 307 */
BgL_test5309z00_8355 = 
(
(long)(BgL_curz00_7632)==((long)9))
; } 
if(BgL_test5309z00_8355)
{ /* Ieee/input.scm 307 */
BgL_test5308z00_8354 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 307 */
if(
(
(long)(BgL_curz00_7632)==((long)32)))
{ /* Ieee/input.scm 307 */
BgL_test5308z00_8354 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 307 */
BgL_test5308z00_8354 = 
(
(long)(BgL_curz00_7632)==((long)34))
; } } } 
if(BgL_test5308z00_8354)
{ /* Ieee/input.scm 307 */
BgL_matchz00_7443 = BgL_newzd2matchzd2_7621; }  else 
{ /* Ieee/input.scm 307 */
BgL_iportz00_7525 = BgL_iportz00_7617; 
BgL_lastzd2matchzd2_7526 = BgL_newzd2matchzd2_7621; 
BgL_forwardz00_7527 = 
(((long)1)+BgL_forwardz00_7619); 
BgL_bufposz00_7528 = BgL_bufposz00_7620; 
BgL_statezd29zd21114z00_7435:
{ /* Ieee/input.scm 307 */
long BgL_newzd2matchzd2_7529;
{ /* Ieee/input.scm 307 */
long BgL_res3532z00_7530;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7531;
if(
INPUT_PORTP(BgL_iportz00_7525))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7531 = BgL_iportz00_7525; }  else 
{ 
obj_t BgL_auxz00_8368;
BgL_auxz00_8368 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4916z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7525); 
FAILURE(BgL_auxz00_8368,BFALSE,BFALSE);} 
BgL_res3532z00_7530 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_7531, BgL_forwardz00_7527); } BgL_res3532z00_7530; } 
BgL_newzd2matchzd2_7529 = ((long)3); 
if(
(BgL_forwardz00_7527==BgL_bufposz00_7528))
{ /* Ieee/input.scm 307 */
bool_t BgL_test5314z00_8375;
{ /* Ieee/input.scm 307 */
bool_t BgL_res3534z00_7532;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7533;
if(
INPUT_PORTP(BgL_iportz00_7525))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7533 = BgL_iportz00_7525; }  else 
{ 
obj_t BgL_auxz00_8378;
BgL_auxz00_8378 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4916z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7525); 
FAILURE(BgL_auxz00_8378,BFALSE,BFALSE);} 
BgL_res3534z00_7532 = 
rgc_fill_buffer(BgL_inputzd2portzd2_7533); } 
BgL_test5314z00_8375 = BgL_res3534z00_7532; } 
if(BgL_test5314z00_8375)
{ /* Ieee/input.scm 307 */
long BgL_arg1462z00_7534;long BgL_arg1463z00_7535;
{ /* Ieee/input.scm 307 */
long BgL_res3535z00_7536;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7537;
if(
INPUT_PORTP(BgL_iportz00_7525))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7537 = BgL_iportz00_7525; }  else 
{ 
obj_t BgL_auxz00_8385;
BgL_auxz00_8385 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4916z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7525); 
FAILURE(BgL_auxz00_8385,BFALSE,BFALSE);} 
BgL_res3535z00_7536 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_7537); } 
BgL_arg1462z00_7534 = BgL_res3535z00_7536; } 
{ /* Ieee/input.scm 307 */
long BgL_res3536z00_7538;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7539;
if(
INPUT_PORTP(BgL_iportz00_7525))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7539 = BgL_iportz00_7525; }  else 
{ 
obj_t BgL_auxz00_8392;
BgL_auxz00_8392 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4916z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7525); 
FAILURE(BgL_auxz00_8392,BFALSE,BFALSE);} 
BgL_res3536z00_7538 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_7539); } 
BgL_arg1463z00_7535 = BgL_res3536z00_7538; } 
{ 
long BgL_bufposz00_8398;long BgL_forwardz00_8397;
BgL_forwardz00_8397 = BgL_arg1462z00_7534; 
BgL_bufposz00_8398 = BgL_arg1463z00_7535; 
BgL_bufposz00_7528 = BgL_bufposz00_8398; 
BgL_forwardz00_7527 = BgL_forwardz00_8397; 
goto BgL_statezd29zd21114z00_7435;} }  else 
{ /* Ieee/input.scm 307 */
BgL_matchz00_7443 = BgL_newzd2matchzd2_7529; } }  else 
{ /* Ieee/input.scm 307 */
int BgL_curz00_7540;
{ /* Ieee/input.scm 307 */
int BgL_res3537z00_7541;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7542;
if(
INPUT_PORTP(BgL_iportz00_7525))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7542 = BgL_iportz00_7525; }  else 
{ 
obj_t BgL_auxz00_8401;
BgL_auxz00_8401 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4916z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_7525); 
FAILURE(BgL_auxz00_8401,BFALSE,BFALSE);} 
BgL_res3537z00_7541 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_7542, BgL_forwardz00_7527); } 
BgL_curz00_7540 = BgL_res3537z00_7541; } 
{ /* Ieee/input.scm 307 */

{ /* Ieee/input.scm 307 */
bool_t BgL_test5319z00_8406;
{ /* Ieee/input.scm 307 */
bool_t BgL_test5320z00_8407;
if(
(
(long)(BgL_curz00_7540)==((long)10)))
{ /* Ieee/input.scm 307 */
BgL_test5320z00_8407 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 307 */
BgL_test5320z00_8407 = 
(
(long)(BgL_curz00_7540)==((long)9))
; } 
if(BgL_test5320z00_8407)
{ /* Ieee/input.scm 307 */
BgL_test5319z00_8406 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 307 */
if(
(
(long)(BgL_curz00_7540)==((long)32)))
{ /* Ieee/input.scm 307 */
BgL_test5319z00_8406 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 307 */
BgL_test5319z00_8406 = 
(
(long)(BgL_curz00_7540)==((long)34))
; } } } 
if(BgL_test5319z00_8406)
{ /* Ieee/input.scm 307 */
BgL_matchz00_7443 = BgL_newzd2matchzd2_7529; }  else 
{ 
long BgL_forwardz00_8419;long BgL_lastzd2matchzd2_8418;
BgL_lastzd2matchzd2_8418 = BgL_newzd2matchzd2_7529; 
BgL_forwardz00_8419 = 
(((long)1)+BgL_forwardz00_7527); 
BgL_forwardz00_7527 = BgL_forwardz00_8419; 
BgL_lastzd2matchzd2_7526 = BgL_lastzd2matchzd2_8418; 
goto BgL_statezd29zd21114z00_7435;} } } } } } } } } } } } } } } 
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7450;
if(
INPUT_PORTP(BgL_iportz00_6649))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7450 = BgL_iportz00_6649; }  else 
{ 
obj_t BgL_auxz00_8425;
BgL_auxz00_8425 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_6649); 
FAILURE(BgL_auxz00_8425,BFALSE,BFALSE);} 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_7450); } 
switch( BgL_matchz00_7443) { case ((long)4) : 

{ /* Ieee/input.scm 307 */
bool_t BgL_test5324z00_8430;
{ /* Ieee/input.scm 307 */
long BgL_arg1577z00_7463;
{ /* Ieee/input.scm 307 */
long BgL_res3575z00_7464;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7465;
if(
INPUT_PORTP(BgL_iportz00_6649))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7465 = BgL_iportz00_6649; }  else 
{ 
obj_t BgL_auxz00_8433;
BgL_auxz00_8433 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4910z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_6649); 
FAILURE(BgL_auxz00_8433,BFALSE,BFALSE);} 
BgL_res3575z00_7464 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_7465); } 
BgL_arg1577z00_7463 = BgL_res3575z00_7464; } 
BgL_test5324z00_8430 = 
(BgL_arg1577z00_7463==((long)0)); } 
if(BgL_test5324z00_8430)
{ /* Ieee/input.scm 307 */
return BEOF;}  else 
{ /* Ieee/input.scm 307 */
unsigned char BgL_res3577z00_7466;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7467;
if(
INPUT_PORTP(BgL_iportz00_6649))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7467 = BgL_iportz00_6649; }  else 
{ 
obj_t BgL_auxz00_8441;
BgL_auxz00_8441 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4910z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_6649); 
FAILURE(BgL_auxz00_8441,BFALSE,BFALSE);} 
BgL_res3577z00_7466 = 
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_7467); } 
return 
BCHAR(BgL_res3577z00_7466);} } break;case ((long)3) : 

{ /* Ieee/input.scm 315 */
obj_t BgL_res3583z00_7451;
{ /* Ieee/input.scm 307 */
long BgL_arg1494z00_7452;
{ /* Ieee/input.scm 307 */
long BgL_res3581z00_7453;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7454;
if(
INPUT_PORTP(BgL_iportz00_6649))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7454 = BgL_iportz00_6649; }  else 
{ 
obj_t BgL_auxz00_8449;
BgL_auxz00_8449 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_6649); 
FAILURE(BgL_auxz00_8449,BFALSE,BFALSE);} 
BgL_res3581z00_7453 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_7454); } 
BgL_arg1494z00_7452 = BgL_res3581z00_7453; } 
{ /* Ieee/input.scm 307 */
obj_t BgL_res3582z00_7455;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7456;
if(
INPUT_PORTP(BgL_iportz00_6649))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7456 = BgL_iportz00_6649; }  else 
{ 
obj_t BgL_auxz00_8456;
BgL_auxz00_8456 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_6649); 
FAILURE(BgL_auxz00_8456,BFALSE,BFALSE);} 
BgL_res3582z00_7455 = 
rgc_buffer_substring(BgL_inputzd2portzd2_7456, ((long)0), BgL_arg1494z00_7452); } 
BgL_res3583z00_7451 = BgL_res3582z00_7455; } } 
return BgL_res3583z00_7451;} break;case ((long)2) : 

BgL_minz00_7468 = 
(int)(((long)1)); 
BgL_maxz00_7469 = 
(int)(((long)-1)); 
if(
(
(long)(BgL_maxz00_7469)<
(long)(BgL_minz00_7468)))
{ /* Ieee/input.scm 307 */
long BgL_arg1497z00_7470;
{ /* Ieee/input.scm 307 */
long BgL_res3564z00_7471;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7472;
if(
INPUT_PORTP(BgL_iportz00_6649))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7472 = BgL_iportz00_6649; }  else 
{ 
obj_t BgL_auxz00_8467;
BgL_auxz00_8467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4911z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_6649); 
FAILURE(BgL_auxz00_8467,BFALSE,BFALSE);} 
BgL_res3564z00_7471 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_7472); } 
BgL_arg1497z00_7470 = BgL_res3564z00_7471; } 
{ /* Ieee/input.scm 307 */
long BgL_za72za7_7473;
BgL_za72za7_7473 = 
(long)(BgL_maxz00_7469); 
BgL_maxz00_7469 = 
(int)(
(BgL_arg1497z00_7470+BgL_za72za7_7473)); } }  else 
{ /* Ieee/input.scm 307 */BFALSE; } 
{ /* Ieee/input.scm 307 */
bool_t BgL_test5331z00_8475;
if(
(
(long)(BgL_minz00_7468)>=((long)0)))
{ /* Ieee/input.scm 307 */
if(
(
(long)(BgL_maxz00_7469)>=
(long)(BgL_minz00_7468)))
{ /* Ieee/input.scm 307 */
long BgL_arg1508z00_7474;
{ /* Ieee/input.scm 307 */
long BgL_res3568z00_7475;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7476;
if(
INPUT_PORTP(BgL_iportz00_6649))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7476 = BgL_iportz00_6649; }  else 
{ 
obj_t BgL_auxz00_8485;
BgL_auxz00_8485 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4911z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_6649); 
FAILURE(BgL_auxz00_8485,BFALSE,BFALSE);} 
BgL_res3568z00_7475 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_7476); } 
BgL_arg1508z00_7474 = BgL_res3568z00_7475; } 
BgL_test5331z00_8475 = 
(
(long)(BgL_maxz00_7469)<=BgL_arg1508z00_7474); }  else 
{ /* Ieee/input.scm 307 */
BgL_test5331z00_8475 = ((bool_t)0)
; } }  else 
{ /* Ieee/input.scm 307 */
BgL_test5331z00_8475 = ((bool_t)0)
; } 
if(BgL_test5331z00_8475)
{ /* Ieee/input.scm 307 */
obj_t BgL_res3570z00_7477;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7478;long BgL_startz00_7479;long BgL_stopz00_7480;
if(
INPUT_PORTP(BgL_iportz00_6649))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7478 = BgL_iportz00_6649; }  else 
{ 
obj_t BgL_auxz00_8494;
BgL_auxz00_8494 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4911z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_6649); 
FAILURE(BgL_auxz00_8494,BFALSE,BFALSE);} 
BgL_startz00_7479 = 
(long)(BgL_minz00_7468); 
BgL_stopz00_7480 = 
(long)(BgL_maxz00_7469); 
BgL_res3570z00_7477 = 
rgc_buffer_substring(BgL_inputzd2portzd2_7478, BgL_startz00_7479, BgL_stopz00_7480); } 
return BgL_res3570z00_7477;}  else 
{ /* Ieee/input.scm 307 */
obj_t BgL_arg1502z00_7481;obj_t BgL_arg1505z00_7482;
{ /* Ieee/input.scm 307 */
obj_t BgL_arg1506z00_7483;
{ /* Ieee/input.scm 307 */
obj_t BgL_res3573z00_7484;
{ /* Ieee/input.scm 307 */
long BgL_arg1494z00_7485;
{ /* Ieee/input.scm 307 */
long BgL_res3571z00_7486;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7487;
if(
INPUT_PORTP(BgL_iportz00_6649))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7487 = BgL_iportz00_6649; }  else 
{ 
obj_t BgL_auxz00_8503;
BgL_auxz00_8503 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4911z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_6649); 
FAILURE(BgL_auxz00_8503,BFALSE,BFALSE);} 
BgL_res3571z00_7486 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_7487); } 
BgL_arg1494z00_7485 = BgL_res3571z00_7486; } 
{ /* Ieee/input.scm 307 */
obj_t BgL_res3572z00_7488;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7489;
if(
INPUT_PORTP(BgL_iportz00_6649))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7489 = BgL_iportz00_6649; }  else 
{ 
obj_t BgL_auxz00_8510;
BgL_auxz00_8510 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4911z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_6649); 
FAILURE(BgL_auxz00_8510,BFALSE,BFALSE);} 
BgL_res3572z00_7488 = 
rgc_buffer_substring(BgL_inputzd2portzd2_7489, ((long)0), BgL_arg1494z00_7485); } 
BgL_res3573z00_7484 = BgL_res3572z00_7488; } } 
BgL_arg1506z00_7483 = BgL_res3573z00_7484; } 
{ /* Ieee/input.scm 307 */
obj_t BgL_list1507z00_7490;
BgL_list1507z00_7490 = 
MAKE_YOUNG_PAIR(BgL_arg1506z00_7483, BNIL); 
BgL_arg1502z00_7481 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string4912z00zz__r4_input_6_10_2z00, BgL_list1507z00_7490); } } 
BgL_arg1505z00_7482 = 
MAKE_YOUNG_PAIR(
BINT(BgL_minz00_7468), 
BINT(BgL_maxz00_7469)); 
{ /* Ieee/input.scm 307 */
obj_t BgL_aux4225z00_7491;
BgL_aux4225z00_7491 = 
BGl_errorz00zz__errorz00(BGl_string4911z00zz__r4_input_6_10_2z00, BgL_arg1502z00_7481, BgL_arg1505z00_7482); 
if(
STRINGP(BgL_aux4225z00_7491))
{ /* Ieee/input.scm 307 */
return BgL_aux4225z00_7491;}  else 
{ 
obj_t BgL_auxz00_8523;
BgL_auxz00_8523 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4911z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_aux4225z00_7491); 
FAILURE(BgL_auxz00_8523,BFALSE,BFALSE);} } } } break;case ((long)1) : 

{ /* Ieee/input.scm 311 */
obj_t BgL_res3586z00_7457;
{ /* Ieee/input.scm 307 */
long BgL_arg1494z00_7458;
{ /* Ieee/input.scm 307 */
long BgL_res3584z00_7459;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7460;
if(
INPUT_PORTP(BgL_iportz00_6649))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7460 = BgL_iportz00_6649; }  else 
{ 
obj_t BgL_auxz00_8531;
BgL_auxz00_8531 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_6649); 
FAILURE(BgL_auxz00_8531,BFALSE,BFALSE);} 
BgL_res3584z00_7459 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_7460); } 
BgL_arg1494z00_7458 = BgL_res3584z00_7459; } 
{ /* Ieee/input.scm 307 */
obj_t BgL_res3585z00_7461;
{ /* Ieee/input.scm 307 */
obj_t BgL_inputzd2portzd2_7462;
if(
INPUT_PORTP(BgL_iportz00_6649))
{ /* Ieee/input.scm 307 */
BgL_inputzd2portzd2_7462 = BgL_iportz00_6649; }  else 
{ 
obj_t BgL_auxz00_8538;
BgL_auxz00_8538 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)12240)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_6649); 
FAILURE(BgL_auxz00_8538,BFALSE,BFALSE);} 
BgL_res3585z00_7461 = 
rgc_buffer_substring(BgL_inputzd2portzd2_7462, ((long)0), BgL_arg1494z00_7458); } 
BgL_res3586z00_7457 = BgL_res3585z00_7461; } } 
return BgL_res3586z00_7457;} break;case ((long)0) : 

goto BgL_ignorez00_7430;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4908z00zz__r4_input_6_10_2z00, BGl_string4909z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_7443));} } } } } } 

}



/* read/rp */
BGL_EXPORTED_DEF obj_t BGl_readzf2rpzf2zz__r4_input_6_10_2z00(obj_t BgL_grammarz00_3, obj_t BgL_portz00_4, obj_t BgL_optsz00_5)
{
{ /* Ieee/input.scm 106 */
if(
PAIRP(BgL_optsz00_5))
{ /* Ieee/input.scm 109 */
obj_t BgL_valz00_6833;
{ /* Ieee/input.scm 109 */
obj_t BgL_list1595z00_1560;
BgL_list1595z00_1560 = 
MAKE_YOUNG_PAIR(BgL_optsz00_5, BNIL); 
BgL_valz00_6833 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_portz00_4, BgL_list1595z00_1560); } 
{ /* Ieee/input.scm 109 */
int BgL_len4311z00_6834;
BgL_len4311z00_6834 = 
(int)(
bgl_list_length(BgL_valz00_6833)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_grammarz00_3, BgL_len4311z00_6834))
{ /* Ieee/input.scm 109 */
return 
apply(BgL_grammarz00_3, BgL_valz00_6833);}  else 
{ /* Ieee/input.scm 109 */
FAILURE(BGl_symbol4925z00zz__r4_input_6_10_2z00,BGl_string4927z00zz__r4_input_6_10_2z00,BGl_list4928z00zz__r4_input_6_10_2z00);} } }  else 
{ /* Ieee/input.scm 108 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_grammarz00_3, 
(int)(((long)1))))
{ /* Ieee/input.scm 110 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_grammarz00_3, ((long)1)))
{ /* Ieee/input.scm 111 */
return 
PROCEDURE_ENTRY(BgL_grammarz00_3)(BgL_grammarz00_3, BgL_portz00_4, BEOA);}  else 
{ /* Ieee/input.scm 111 */
FAILURE(BGl_string4953z00zz__r4_input_6_10_2z00,BGl_list4954z00zz__r4_input_6_10_2z00,BgL_grammarz00_3);} }  else 
{ /* Ieee/input.scm 110 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_grammarz00_3, 
(int)(((long)2))))
{ /* Ieee/input.scm 112 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_grammarz00_3, ((long)2)))
{ /* Ieee/input.scm 113 */
return 
PROCEDURE_ENTRY(BgL_grammarz00_3)(BgL_grammarz00_3, BgL_portz00_4, BUNSPEC, BEOA);}  else 
{ /* Ieee/input.scm 113 */
FAILURE(BGl_string4953z00zz__r4_input_6_10_2z00,BGl_list4957z00zz__r4_input_6_10_2z00,BgL_grammarz00_3);} }  else 
{ /* Ieee/input.scm 112 */
return 
BGl_errorz00zz__errorz00(BGl_symbol4925z00zz__r4_input_6_10_2z00, BGl_string4958z00zz__r4_input_6_10_2z00, BgL_grammarz00_3);} } } } 

}



/* &read/rp */
obj_t BGl_z62readzf2rpz90zz__r4_input_6_10_2z00(obj_t BgL_envz00_6650, obj_t BgL_grammarz00_6651, obj_t BgL_portz00_6652, obj_t BgL_optsz00_6653)
{
{ /* Ieee/input.scm 106 */
{ /* Ieee/input.scm 108 */
obj_t BgL_auxz00_8586;obj_t BgL_auxz00_8579;
if(
INPUT_PORTP(BgL_portz00_6652))
{ /* Ieee/input.scm 108 */
BgL_auxz00_8586 = BgL_portz00_6652
; }  else 
{ 
obj_t BgL_auxz00_8589;
BgL_auxz00_8589 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)4665)), BGl_string4959z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_portz00_6652); 
FAILURE(BgL_auxz00_8589,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_grammarz00_6651))
{ /* Ieee/input.scm 108 */
BgL_auxz00_8579 = BgL_grammarz00_6651
; }  else 
{ 
obj_t BgL_auxz00_8582;
BgL_auxz00_8582 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)4665)), BGl_string4959z00zz__r4_input_6_10_2z00, BGl_string4960z00zz__r4_input_6_10_2z00, BgL_grammarz00_6651); 
FAILURE(BgL_auxz00_8582,BFALSE,BFALSE);} 
return 
BGl_readzf2rpzf2zz__r4_input_6_10_2z00(BgL_auxz00_8579, BgL_auxz00_8586, BgL_optsz00_6653);} } 

}



/* read/lalrp */
BGL_EXPORTED_DEF obj_t BGl_readzf2lalrpzf2zz__r4_input_6_10_2z00(obj_t BgL_lalrz00_6, obj_t BgL_rgcz00_7, obj_t BgL_portz00_8, obj_t BgL_eofzd2funzf3z21_9)
{
{ /* Ieee/input.scm 120 */
if(
NULLP(BgL_eofzd2funzf3z21_9))
{ /* Ieee/input.scm 121 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_lalrz00_6, ((long)3)))
{ /* Ieee/input.scm 122 */
return 
PROCEDURE_ENTRY(BgL_lalrz00_6)(BgL_lalrz00_6, BgL_rgcz00_7, BgL_portz00_8, BGl_eofzd2objectzf3zd2envzf3zz__r4_input_6_10_2z00, BEOA);}  else 
{ /* Ieee/input.scm 122 */
FAILURE(BGl_string4961z00zz__r4_input_6_10_2z00,BGl_list4962z00zz__r4_input_6_10_2z00,BgL_lalrz00_6);} }  else 
{ /* Ieee/input.scm 123 */
obj_t BgL_arg1599z00_4885;
{ /* Ieee/input.scm 123 */
obj_t BgL_pairz00_4887;
if(
PAIRP(BgL_eofzd2funzf3z21_9))
{ /* Ieee/input.scm 123 */
BgL_pairz00_4887 = BgL_eofzd2funzf3z21_9; }  else 
{ 
obj_t BgL_auxz00_8607;
BgL_auxz00_8607 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5267)), BGl_string4969z00zz__r4_input_6_10_2z00, BGl_string4970z00zz__r4_input_6_10_2z00, BgL_eofzd2funzf3z21_9); 
FAILURE(BgL_auxz00_8607,BFALSE,BFALSE);} 
BgL_arg1599z00_4885 = 
CAR(BgL_pairz00_4887); } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_lalrz00_6, ((long)3)))
{ /* Ieee/input.scm 123 */
return 
PROCEDURE_ENTRY(BgL_lalrz00_6)(BgL_lalrz00_6, BgL_rgcz00_7, BgL_portz00_8, BgL_arg1599z00_4885, BEOA);}  else 
{ /* Ieee/input.scm 123 */
FAILURE(BGl_string4961z00zz__r4_input_6_10_2z00,BGl_list4971z00zz__r4_input_6_10_2z00,BgL_lalrz00_6);} } } 

}



/* &read/lalrp */
obj_t BGl_z62readzf2lalrpz90zz__r4_input_6_10_2z00(obj_t BgL_envz00_6654, obj_t BgL_lalrz00_6655, obj_t BgL_rgcz00_6656, obj_t BgL_portz00_6657, obj_t BgL_eofzd2funzf3z21_6658)
{
{ /* Ieee/input.scm 120 */
{ /* Ieee/input.scm 121 */
obj_t BgL_auxz00_8635;obj_t BgL_auxz00_8628;obj_t BgL_auxz00_8621;
if(
INPUT_PORTP(BgL_portz00_6657))
{ /* Ieee/input.scm 121 */
BgL_auxz00_8635 = BgL_portz00_6657
; }  else 
{ 
obj_t BgL_auxz00_8638;
BgL_auxz00_8638 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5184)), BGl_string4974z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_portz00_6657); 
FAILURE(BgL_auxz00_8638,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_rgcz00_6656))
{ /* Ieee/input.scm 121 */
BgL_auxz00_8628 = BgL_rgcz00_6656
; }  else 
{ 
obj_t BgL_auxz00_8631;
BgL_auxz00_8631 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5184)), BGl_string4974z00zz__r4_input_6_10_2z00, BGl_string4960z00zz__r4_input_6_10_2z00, BgL_rgcz00_6656); 
FAILURE(BgL_auxz00_8631,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_lalrz00_6655))
{ /* Ieee/input.scm 121 */
BgL_auxz00_8621 = BgL_lalrz00_6655
; }  else 
{ 
obj_t BgL_auxz00_8624;
BgL_auxz00_8624 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5184)), BGl_string4974z00zz__r4_input_6_10_2z00, BGl_string4960z00zz__r4_input_6_10_2z00, BgL_lalrz00_6655); 
FAILURE(BgL_auxz00_8624,BFALSE,BFALSE);} 
return 
BGl_readzf2lalrpzf2zz__r4_input_6_10_2z00(BgL_auxz00_8621, BgL_auxz00_8628, BgL_auxz00_8635, BgL_eofzd2funzf3z21_6658);} } 

}



/* _read-char */
obj_t BGl__readzd2charzd2zz__r4_input_6_10_2z00(obj_t BgL_env1241z00_12, obj_t BgL_opt1240z00_11)
{
{ /* Ieee/input.scm 128 */
{ /* Ieee/input.scm 128 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1240z00_11)) { case ((long)0) : 

{ /* Ieee/input.scm 128 */
obj_t BgL_ipz00_1568;
{ /* Ieee/input.scm 128 */
obj_t BgL_res3594z00_4889;
{ /* Ieee/input.scm 128 */
obj_t BgL_tmpz00_8643;
BgL_tmpz00_8643 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3594z00_4889 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_8643); } 
BgL_ipz00_1568 = BgL_res3594z00_4889; } 
{ /* Ieee/input.scm 128 */

return 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_1568);} } break;case ((long)1) : 

{ /* Ieee/input.scm 128 */
obj_t BgL_ipz00_1569;
BgL_ipz00_1569 = 
VECTOR_REF(BgL_opt1240z00_11,((long)0)); 
{ /* Ieee/input.scm 128 */

return 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_1569);} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4975z00zz__r4_input_6_10_2z00, BGl_string4977z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1240z00_11)));} } } } 

}



/* read-char */
BGL_EXPORTED_DEF obj_t BGl_readzd2charzd2zz__r4_input_6_10_2z00(obj_t BgL_ipz00_10)
{
{ /* Ieee/input.scm 128 */
{ 
obj_t BgL_iportz00_1573;
BgL_iportz00_1573 = BgL_ipz00_10; 
{ 

{ /* Ieee/input.scm 129 */
bool_t BgL_test5356z00_8654;
{ /* Ieee/input.scm 129 */
obj_t BgL_arg1608z00_1611;
{ /* Ieee/input.scm 129 */
obj_t BgL_res3611z00_4956;
if(
INPUT_PORTP(BgL_iportz00_1573))
{ /* Ieee/input.scm 129 */
BgL_res3611z00_4956 = BgL_iportz00_1573; }  else 
{ 
obj_t BgL_auxz00_8657;
BgL_auxz00_8657 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5578)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1573); 
FAILURE(BgL_auxz00_8657,BFALSE,BFALSE);} 
BgL_arg1608z00_1611 = BgL_res3611z00_4956; } 
{ /* Ieee/input.scm 129 */
bool_t BgL_res3612z00_4958;
BgL_res3612z00_4958 = 
INPUT_PORT_CLOSEP(BgL_arg1608z00_1611); 
BgL_test5356z00_8654 = BgL_res3612z00_4958; } } 
if(BgL_test5356z00_8654)
{ /* Ieee/input.scm 129 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg1604z00_1605;
{ /* Ieee/input.scm 129 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1046z00_1606;
{ /* Ieee/input.scm 129 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1045z00_1609;
BgL_new1045z00_1609 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Ieee/input.scm 129 */
long BgL_arg1607z00_1610;
{ /* Ieee/input.scm 129 */
long BgL_res3613z00_4960;
BgL_res3613z00_4960 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg1607z00_1610 = BgL_res3613z00_4960; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1045z00_1609), BgL_arg1607z00_1610); } 
BgL_new1046z00_1606 = BgL_new1045z00_1609; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_1606)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_1606)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_8670;
{ /* Ieee/input.scm 129 */
obj_t BgL_arg1605z00_1607;
{ /* Ieee/input.scm 129 */
obj_t BgL_arg1606z00_1608;
{ /* Ieee/input.scm 129 */
obj_t BgL_res3614z00_4964;
{ /* Ieee/input.scm 129 */
obj_t BgL_classz00_4963;
BgL_classz00_4963 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res3614z00_4964 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_4963); } 
BgL_arg1606z00_1608 = BgL_res3614z00_4964; } 
BgL_arg1605z00_1607 = 
VECTOR_REF(BgL_arg1606z00_1608,((long)2)); } 
{ /* Ieee/input.scm 129 */
obj_t BgL_auxz00_8674;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg1605z00_1607))
{ /* Ieee/input.scm 129 */
BgL_auxz00_8674 = BgL_arg1605z00_1607
; }  else 
{ 
obj_t BgL_auxz00_8677;
BgL_auxz00_8677 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5578)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg1605z00_1607); 
FAILURE(BgL_auxz00_8677,BFALSE,BFALSE);} 
BgL_auxz00_8670 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_8674); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_1606)))->BgL_stackz00)=((obj_t)BgL_auxz00_8670),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_1606)))->BgL_procz00)=((obj_t)BGl_string4908z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_1606)))->BgL_msgz00)=((obj_t)BGl_string4924z00zz__r4_input_6_10_2z00),BUNSPEC); 
{ 
obj_t BgL_auxz00_8687;
{ /* Ieee/input.scm 129 */
obj_t BgL_res3615z00_4966;
if(
INPUT_PORTP(BgL_iportz00_1573))
{ /* Ieee/input.scm 129 */
BgL_res3615z00_4966 = BgL_iportz00_1573; }  else 
{ 
obj_t BgL_auxz00_8691;
BgL_auxz00_8691 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5578)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1573); 
FAILURE(BgL_auxz00_8691,BFALSE,BFALSE);} 
BgL_auxz00_8687 = BgL_res3615z00_4966; } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_1606)))->BgL_objz00)=((obj_t)BgL_auxz00_8687),BUNSPEC); } 
BgL_arg1604z00_1605 = BgL_new1046z00_1606; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1604z00_1605));}  else 
{ /* Ieee/input.scm 129 */
{ /* Ieee/input.scm 129 */
long BgL_res3607z00_4921;
{ /* Ieee/input.scm 129 */
obj_t BgL_inputzd2portzd2_4920;
if(
INPUT_PORTP(BgL_iportz00_1573))
{ /* Ieee/input.scm 129 */
BgL_inputzd2portzd2_4920 = BgL_iportz00_1573; }  else 
{ 
obj_t BgL_auxz00_8700;
BgL_auxz00_8700 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5578)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1573); 
FAILURE(BgL_auxz00_8700,BFALSE,BFALSE);} 
BgL_res3607z00_4921 = 
RGC_START_MATCH(BgL_inputzd2portzd2_4920); } BgL_res3607z00_4921; } 
{ /* Ieee/input.scm 129 */
long BgL_matchz00_1748;
{ /* Ieee/input.scm 129 */
long BgL_arg1725z00_1752;long BgL_arg1726z00_1753;
{ /* Ieee/input.scm 129 */
long BgL_res3608z00_4923;
{ /* Ieee/input.scm 129 */
obj_t BgL_inputzd2portzd2_4922;
if(
INPUT_PORTP(BgL_iportz00_1573))
{ /* Ieee/input.scm 129 */
BgL_inputzd2portzd2_4922 = BgL_iportz00_1573; }  else 
{ 
obj_t BgL_auxz00_8707;
BgL_auxz00_8707 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5578)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1573); 
FAILURE(BgL_auxz00_8707,BFALSE,BFALSE);} 
BgL_res3608z00_4923 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_4922); } 
BgL_arg1725z00_1752 = BgL_res3608z00_4923; } 
{ /* Ieee/input.scm 129 */
long BgL_res3609z00_4925;
{ /* Ieee/input.scm 129 */
obj_t BgL_inputzd2portzd2_4924;
if(
INPUT_PORTP(BgL_iportz00_1573))
{ /* Ieee/input.scm 129 */
BgL_inputzd2portzd2_4924 = BgL_iportz00_1573; }  else 
{ 
obj_t BgL_auxz00_8714;
BgL_auxz00_8714 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5578)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1573); 
FAILURE(BgL_auxz00_8714,BFALSE,BFALSE);} 
BgL_res3609z00_4925 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_4924); } 
BgL_arg1726z00_1753 = BgL_res3609z00_4925; } 
{ 
long BgL_forwardz00_4927;long BgL_bufposz00_4928;
BgL_forwardz00_4927 = BgL_arg1725z00_1752; 
BgL_bufposz00_4928 = BgL_arg1726z00_1753; 
BgL_statezd20zd21040z00_4926:
if(
(BgL_forwardz00_4927==BgL_bufposz00_4928))
{ /* Ieee/input.scm 129 */
bool_t BgL_test5364z00_8721;
{ /* Ieee/input.scm 129 */
bool_t BgL_res3597z00_4934;
{ /* Ieee/input.scm 129 */
obj_t BgL_inputzd2portzd2_4935;
if(
INPUT_PORTP(BgL_iportz00_1573))
{ /* Ieee/input.scm 129 */
BgL_inputzd2portzd2_4935 = BgL_iportz00_1573; }  else 
{ 
obj_t BgL_auxz00_8724;
BgL_auxz00_8724 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5578)), BGl_string4978z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1573); 
FAILURE(BgL_auxz00_8724,BFALSE,BFALSE);} 
BgL_res3597z00_4934 = 
rgc_fill_buffer(BgL_inputzd2portzd2_4935); } 
BgL_test5364z00_8721 = BgL_res3597z00_4934; } 
if(BgL_test5364z00_8721)
{ /* Ieee/input.scm 129 */
long BgL_arg1613z00_4936;long BgL_arg1614z00_4937;
{ /* Ieee/input.scm 129 */
long BgL_res3598z00_4938;
{ /* Ieee/input.scm 129 */
obj_t BgL_inputzd2portzd2_4939;
if(
INPUT_PORTP(BgL_iportz00_1573))
{ /* Ieee/input.scm 129 */
BgL_inputzd2portzd2_4939 = BgL_iportz00_1573; }  else 
{ 
obj_t BgL_auxz00_8731;
BgL_auxz00_8731 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5578)), BGl_string4978z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1573); 
FAILURE(BgL_auxz00_8731,BFALSE,BFALSE);} 
BgL_res3598z00_4938 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_4939); } 
BgL_arg1613z00_4936 = BgL_res3598z00_4938; } 
{ /* Ieee/input.scm 129 */
long BgL_res3599z00_4940;
{ /* Ieee/input.scm 129 */
obj_t BgL_inputzd2portzd2_4941;
if(
INPUT_PORTP(BgL_iportz00_1573))
{ /* Ieee/input.scm 129 */
BgL_inputzd2portzd2_4941 = BgL_iportz00_1573; }  else 
{ 
obj_t BgL_auxz00_8738;
BgL_auxz00_8738 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5578)), BGl_string4978z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1573); 
FAILURE(BgL_auxz00_8738,BFALSE,BFALSE);} 
BgL_res3599z00_4940 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_4941); } 
BgL_arg1614z00_4937 = BgL_res3599z00_4940; } 
{ 
long BgL_bufposz00_8744;long BgL_forwardz00_8743;
BgL_forwardz00_8743 = BgL_arg1613z00_4936; 
BgL_bufposz00_8744 = BgL_arg1614z00_4937; 
BgL_bufposz00_4928 = BgL_bufposz00_8744; 
BgL_forwardz00_4927 = BgL_forwardz00_8743; 
goto BgL_statezd20zd21040z00_4926;} }  else 
{ /* Ieee/input.scm 129 */
BgL_matchz00_1748 = ((long)1); } }  else 
{ /* Ieee/input.scm 129 */
int BgL_curz00_4942;
{ /* Ieee/input.scm 129 */
int BgL_res3600z00_4943;
{ /* Ieee/input.scm 129 */
obj_t BgL_inputzd2portzd2_4944;
if(
INPUT_PORTP(BgL_iportz00_1573))
{ /* Ieee/input.scm 129 */
BgL_inputzd2portzd2_4944 = BgL_iportz00_1573; }  else 
{ 
obj_t BgL_auxz00_8747;
BgL_auxz00_8747 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5578)), BGl_string4978z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1573); 
FAILURE(BgL_auxz00_8747,BFALSE,BFALSE);} 
BgL_res3600z00_4943 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_4944, BgL_forwardz00_4927); } 
BgL_curz00_4942 = BgL_res3600z00_4943; } 
{ /* Ieee/input.scm 129 */

{ /* Ieee/input.scm 129 */
long BgL_arg1615z00_4946;
BgL_arg1615z00_4946 = 
(((long)1)+BgL_forwardz00_4927); 
{ /* Ieee/input.scm 129 */
long BgL_newzd2matchzd2_4949;
{ /* Ieee/input.scm 129 */
long BgL_res3602z00_4950;
{ /* Ieee/input.scm 129 */
obj_t BgL_inputzd2portzd2_4951;
if(
INPUT_PORTP(BgL_iportz00_1573))
{ /* Ieee/input.scm 129 */
BgL_inputzd2portzd2_4951 = BgL_iportz00_1573; }  else 
{ 
obj_t BgL_auxz00_8755;
BgL_auxz00_8755 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5578)), BGl_string4978z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1573); 
FAILURE(BgL_auxz00_8755,BFALSE,BFALSE);} 
BgL_res3602z00_4950 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_4951, BgL_arg1615z00_4946); } BgL_res3602z00_4950; } 
BgL_newzd2matchzd2_4949 = ((long)0); 
BgL_matchz00_1748 = BgL_newzd2matchzd2_4949; } } } } } } 
{ /* Ieee/input.scm 129 */
obj_t BgL_inputzd2portzd2_4953;
if(
INPUT_PORTP(BgL_iportz00_1573))
{ /* Ieee/input.scm 129 */
BgL_inputzd2portzd2_4953 = BgL_iportz00_1573; }  else 
{ 
obj_t BgL_auxz00_8762;
BgL_auxz00_8762 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5578)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1573); 
FAILURE(BgL_auxz00_8762,BFALSE,BFALSE);} 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_4953); } 
switch( BgL_matchz00_1748) { case ((long)1) : 

{ /* Ieee/input.scm 129 */
bool_t BgL_test5371z00_8767;
{ /* Ieee/input.scm 129 */
long BgL_arg1716z00_1738;
{ /* Ieee/input.scm 129 */
long BgL_res3604z00_4915;
{ /* Ieee/input.scm 129 */
obj_t BgL_inputzd2portzd2_4914;
if(
INPUT_PORTP(BgL_iportz00_1573))
{ /* Ieee/input.scm 129 */
BgL_inputzd2portzd2_4914 = BgL_iportz00_1573; }  else 
{ 
obj_t BgL_auxz00_8770;
BgL_auxz00_8770 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5578)), BGl_string4910z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1573); 
FAILURE(BgL_auxz00_8770,BFALSE,BFALSE);} 
BgL_res3604z00_4915 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_4914); } 
BgL_arg1716z00_1738 = BgL_res3604z00_4915; } 
BgL_test5371z00_8767 = 
(BgL_arg1716z00_1738==((long)0)); } 
if(BgL_test5371z00_8767)
{ /* Ieee/input.scm 129 */
return BEOF;}  else 
{ /* Ieee/input.scm 129 */
unsigned char BgL_res3606z00_4919;
{ /* Ieee/input.scm 129 */
obj_t BgL_inputzd2portzd2_4918;
if(
INPUT_PORTP(BgL_iportz00_1573))
{ /* Ieee/input.scm 129 */
BgL_inputzd2portzd2_4918 = BgL_iportz00_1573; }  else 
{ 
obj_t BgL_auxz00_8778;
BgL_auxz00_8778 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5578)), BGl_string4910z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1573); 
FAILURE(BgL_auxz00_8778,BFALSE,BFALSE);} 
BgL_res3606z00_4919 = 
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_4918); } 
return 
BCHAR(BgL_res3606z00_4919);} } break;case ((long)0) : 

{ /* Ieee/input.scm 129 */
unsigned char BgL_res3610z00_4955;
{ /* Ieee/input.scm 129 */
obj_t BgL_inputzd2portzd2_4954;
if(
INPUT_PORTP(BgL_iportz00_1573))
{ /* Ieee/input.scm 129 */
BgL_inputzd2portzd2_4954 = BgL_iportz00_1573; }  else 
{ 
obj_t BgL_auxz00_8786;
BgL_auxz00_8786 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5578)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1573); 
FAILURE(BgL_auxz00_8786,BFALSE,BFALSE);} 
BgL_res3610z00_4955 = 
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_4954); } 
return 
BCHAR(BgL_res3610z00_4955);} break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4908z00zz__r4_input_6_10_2z00, BGl_string4909z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_1748));} } } } } } } 

}



/* _peek-char */
obj_t BGl__peekzd2charzd2zz__r4_input_6_10_2z00(obj_t BgL_env1245z00_15, obj_t BgL_opt1244z00_14)
{
{ /* Ieee/input.scm 136 */
{ /* Ieee/input.scm 136 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1244z00_14)) { case ((long)0) : 

{ /* Ieee/input.scm 136 */
obj_t BgL_ipz00_1787;
{ /* Ieee/input.scm 136 */
obj_t BgL_res3616z00_4968;
{ /* Ieee/input.scm 136 */
obj_t BgL_tmpz00_8795;
BgL_tmpz00_8795 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3616z00_4968 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_8795); } 
BgL_ipz00_1787 = BgL_res3616z00_4968; } 
{ /* Ieee/input.scm 136 */

return 
BGl_peekzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_1787);} } break;case ((long)1) : 

{ /* Ieee/input.scm 136 */
obj_t BgL_ipz00_1788;
BgL_ipz00_1788 = 
VECTOR_REF(BgL_opt1244z00_14,((long)0)); 
{ /* Ieee/input.scm 136 */

return 
BGl_peekzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_1788);} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4979z00zz__r4_input_6_10_2z00, BGl_string4977z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1244z00_14)));} } } } 

}



/* peek-char */
BGL_EXPORTED_DEF obj_t BGl_peekzd2charzd2zz__r4_input_6_10_2z00(obj_t BgL_ipz00_13)
{
{ /* Ieee/input.scm 136 */
{ 
obj_t BgL_iportz00_1792;
BgL_iportz00_1792 = BgL_ipz00_13; 
{ 

{ /* Ieee/input.scm 137 */
bool_t BgL_test5375z00_8806;
{ /* Ieee/input.scm 137 */
obj_t BgL_arg1734z00_1830;
{ /* Ieee/input.scm 137 */
obj_t BgL_res3636z00_5041;
if(
INPUT_PORTP(BgL_iportz00_1792))
{ /* Ieee/input.scm 137 */
BgL_res3636z00_5041 = BgL_iportz00_1792; }  else 
{ 
obj_t BgL_auxz00_8809;
BgL_auxz00_8809 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5972)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1792); 
FAILURE(BgL_auxz00_8809,BFALSE,BFALSE);} 
BgL_arg1734z00_1830 = BgL_res3636z00_5041; } 
{ /* Ieee/input.scm 137 */
bool_t BgL_res3637z00_5043;
BgL_res3637z00_5043 = 
INPUT_PORT_CLOSEP(BgL_arg1734z00_1830); 
BgL_test5375z00_8806 = BgL_res3637z00_5043; } } 
if(BgL_test5375z00_8806)
{ /* Ieee/input.scm 137 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg1730z00_1824;
{ /* Ieee/input.scm 137 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1046z00_1825;
{ /* Ieee/input.scm 137 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1045z00_1828;
BgL_new1045z00_1828 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Ieee/input.scm 137 */
long BgL_arg1733z00_1829;
{ /* Ieee/input.scm 137 */
long BgL_res3638z00_5045;
BgL_res3638z00_5045 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg1733z00_1829 = BgL_res3638z00_5045; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1045z00_1828), BgL_arg1733z00_1829); } 
BgL_new1046z00_1825 = BgL_new1045z00_1828; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_1825)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_1825)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_8822;
{ /* Ieee/input.scm 137 */
obj_t BgL_arg1731z00_1826;
{ /* Ieee/input.scm 137 */
obj_t BgL_arg1732z00_1827;
{ /* Ieee/input.scm 137 */
obj_t BgL_res3639z00_5049;
{ /* Ieee/input.scm 137 */
obj_t BgL_classz00_5048;
BgL_classz00_5048 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res3639z00_5049 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_5048); } 
BgL_arg1732z00_1827 = BgL_res3639z00_5049; } 
BgL_arg1731z00_1826 = 
VECTOR_REF(BgL_arg1732z00_1827,((long)2)); } 
{ /* Ieee/input.scm 137 */
obj_t BgL_auxz00_8826;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg1731z00_1826))
{ /* Ieee/input.scm 137 */
BgL_auxz00_8826 = BgL_arg1731z00_1826
; }  else 
{ 
obj_t BgL_auxz00_8829;
BgL_auxz00_8829 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5972)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg1731z00_1826); 
FAILURE(BgL_auxz00_8829,BFALSE,BFALSE);} 
BgL_auxz00_8822 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_8826); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_1825)))->BgL_stackz00)=((obj_t)BgL_auxz00_8822),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_1825)))->BgL_procz00)=((obj_t)BGl_string4908z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_1825)))->BgL_msgz00)=((obj_t)BGl_string4924z00zz__r4_input_6_10_2z00),BUNSPEC); 
{ 
obj_t BgL_auxz00_8839;
{ /* Ieee/input.scm 137 */
obj_t BgL_res3640z00_5051;
if(
INPUT_PORTP(BgL_iportz00_1792))
{ /* Ieee/input.scm 137 */
BgL_res3640z00_5051 = BgL_iportz00_1792; }  else 
{ 
obj_t BgL_auxz00_8843;
BgL_auxz00_8843 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5972)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1792); 
FAILURE(BgL_auxz00_8843,BFALSE,BFALSE);} 
BgL_auxz00_8839 = BgL_res3640z00_5051; } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_1825)))->BgL_objz00)=((obj_t)BgL_auxz00_8839),BUNSPEC); } 
BgL_arg1730z00_1824 = BgL_new1046z00_1825; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1730z00_1824));}  else 
{ /* Ieee/input.scm 137 */
{ /* Ieee/input.scm 137 */
long BgL_res3629z00_5000;
{ /* Ieee/input.scm 137 */
obj_t BgL_inputzd2portzd2_4999;
if(
INPUT_PORTP(BgL_iportz00_1792))
{ /* Ieee/input.scm 137 */
BgL_inputzd2portzd2_4999 = BgL_iportz00_1792; }  else 
{ 
obj_t BgL_auxz00_8852;
BgL_auxz00_8852 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5972)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1792); 
FAILURE(BgL_auxz00_8852,BFALSE,BFALSE);} 
BgL_res3629z00_5000 = 
RGC_START_MATCH(BgL_inputzd2portzd2_4999); } BgL_res3629z00_5000; } 
{ /* Ieee/input.scm 137 */
long BgL_matchz00_1967;
{ /* Ieee/input.scm 137 */
long BgL_arg1836z00_1974;long BgL_arg1838z00_1975;
{ /* Ieee/input.scm 137 */
long BgL_res3630z00_5002;
{ /* Ieee/input.scm 137 */
obj_t BgL_inputzd2portzd2_5001;
if(
INPUT_PORTP(BgL_iportz00_1792))
{ /* Ieee/input.scm 137 */
BgL_inputzd2portzd2_5001 = BgL_iportz00_1792; }  else 
{ 
obj_t BgL_auxz00_8859;
BgL_auxz00_8859 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5972)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1792); 
FAILURE(BgL_auxz00_8859,BFALSE,BFALSE);} 
BgL_res3630z00_5002 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5001); } 
BgL_arg1836z00_1974 = BgL_res3630z00_5002; } 
{ /* Ieee/input.scm 137 */
long BgL_res3631z00_5004;
{ /* Ieee/input.scm 137 */
obj_t BgL_inputzd2portzd2_5003;
if(
INPUT_PORTP(BgL_iportz00_1792))
{ /* Ieee/input.scm 137 */
BgL_inputzd2portzd2_5003 = BgL_iportz00_1792; }  else 
{ 
obj_t BgL_auxz00_8866;
BgL_auxz00_8866 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5972)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1792); 
FAILURE(BgL_auxz00_8866,BFALSE,BFALSE);} 
BgL_res3631z00_5004 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5003); } 
BgL_arg1838z00_1975 = BgL_res3631z00_5004; } 
{ 
long BgL_forwardz00_5006;long BgL_bufposz00_5007;
BgL_forwardz00_5006 = BgL_arg1836z00_1974; 
BgL_bufposz00_5007 = BgL_arg1838z00_1975; 
BgL_statezd20zd21048z00_5005:
if(
(BgL_forwardz00_5006==BgL_bufposz00_5007))
{ /* Ieee/input.scm 137 */
bool_t BgL_test5383z00_8873;
{ /* Ieee/input.scm 137 */
bool_t BgL_res3619z00_5013;
{ /* Ieee/input.scm 137 */
obj_t BgL_inputzd2portzd2_5014;
if(
INPUT_PORTP(BgL_iportz00_1792))
{ /* Ieee/input.scm 137 */
BgL_inputzd2portzd2_5014 = BgL_iportz00_1792; }  else 
{ 
obj_t BgL_auxz00_8876;
BgL_auxz00_8876 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5972)), BGl_string4981z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1792); 
FAILURE(BgL_auxz00_8876,BFALSE,BFALSE);} 
BgL_res3619z00_5013 = 
rgc_fill_buffer(BgL_inputzd2portzd2_5014); } 
BgL_test5383z00_8873 = BgL_res3619z00_5013; } 
if(BgL_test5383z00_8873)
{ /* Ieee/input.scm 137 */
long BgL_arg1739z00_5015;long BgL_arg1740z00_5016;
{ /* Ieee/input.scm 137 */
long BgL_res3620z00_5017;
{ /* Ieee/input.scm 137 */
obj_t BgL_inputzd2portzd2_5018;
if(
INPUT_PORTP(BgL_iportz00_1792))
{ /* Ieee/input.scm 137 */
BgL_inputzd2portzd2_5018 = BgL_iportz00_1792; }  else 
{ 
obj_t BgL_auxz00_8883;
BgL_auxz00_8883 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5972)), BGl_string4981z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1792); 
FAILURE(BgL_auxz00_8883,BFALSE,BFALSE);} 
BgL_res3620z00_5017 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5018); } 
BgL_arg1739z00_5015 = BgL_res3620z00_5017; } 
{ /* Ieee/input.scm 137 */
long BgL_res3621z00_5019;
{ /* Ieee/input.scm 137 */
obj_t BgL_inputzd2portzd2_5020;
if(
INPUT_PORTP(BgL_iportz00_1792))
{ /* Ieee/input.scm 137 */
BgL_inputzd2portzd2_5020 = BgL_iportz00_1792; }  else 
{ 
obj_t BgL_auxz00_8890;
BgL_auxz00_8890 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5972)), BGl_string4981z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1792); 
FAILURE(BgL_auxz00_8890,BFALSE,BFALSE);} 
BgL_res3621z00_5019 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5020); } 
BgL_arg1740z00_5016 = BgL_res3621z00_5019; } 
{ 
long BgL_bufposz00_8896;long BgL_forwardz00_8895;
BgL_forwardz00_8895 = BgL_arg1739z00_5015; 
BgL_bufposz00_8896 = BgL_arg1740z00_5016; 
BgL_bufposz00_5007 = BgL_bufposz00_8896; 
BgL_forwardz00_5006 = BgL_forwardz00_8895; 
goto BgL_statezd20zd21048z00_5005;} }  else 
{ /* Ieee/input.scm 137 */
BgL_matchz00_1967 = ((long)1); } }  else 
{ /* Ieee/input.scm 137 */
int BgL_curz00_5021;
{ /* Ieee/input.scm 137 */
int BgL_res3622z00_5022;
{ /* Ieee/input.scm 137 */
obj_t BgL_inputzd2portzd2_5023;
if(
INPUT_PORTP(BgL_iportz00_1792))
{ /* Ieee/input.scm 137 */
BgL_inputzd2portzd2_5023 = BgL_iportz00_1792; }  else 
{ 
obj_t BgL_auxz00_8899;
BgL_auxz00_8899 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5972)), BGl_string4981z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1792); 
FAILURE(BgL_auxz00_8899,BFALSE,BFALSE);} 
BgL_res3622z00_5022 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5023, BgL_forwardz00_5006); } 
BgL_curz00_5021 = BgL_res3622z00_5022; } 
{ /* Ieee/input.scm 137 */

{ /* Ieee/input.scm 137 */
long BgL_arg1741z00_5025;
BgL_arg1741z00_5025 = 
(((long)1)+BgL_forwardz00_5006); 
{ /* Ieee/input.scm 137 */
long BgL_newzd2matchzd2_5028;
{ /* Ieee/input.scm 137 */
long BgL_res3624z00_5029;
{ /* Ieee/input.scm 137 */
obj_t BgL_inputzd2portzd2_5030;
if(
INPUT_PORTP(BgL_iportz00_1792))
{ /* Ieee/input.scm 137 */
BgL_inputzd2portzd2_5030 = BgL_iportz00_1792; }  else 
{ 
obj_t BgL_auxz00_8907;
BgL_auxz00_8907 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5972)), BGl_string4981z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1792); 
FAILURE(BgL_auxz00_8907,BFALSE,BFALSE);} 
BgL_res3624z00_5029 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5030, BgL_arg1741z00_5025); } BgL_res3624z00_5029; } 
BgL_newzd2matchzd2_5028 = ((long)0); 
BgL_matchz00_1967 = BgL_newzd2matchzd2_5028; } } } } } } 
{ /* Ieee/input.scm 137 */
obj_t BgL_inputzd2portzd2_5032;
if(
INPUT_PORTP(BgL_iportz00_1792))
{ /* Ieee/input.scm 137 */
BgL_inputzd2portzd2_5032 = BgL_iportz00_1792; }  else 
{ 
obj_t BgL_auxz00_8914;
BgL_auxz00_8914 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5972)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1792); 
FAILURE(BgL_auxz00_8914,BFALSE,BFALSE);} 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_5032); } 
switch( BgL_matchz00_1967) { case ((long)1) : 

{ /* Ieee/input.scm 137 */
bool_t BgL_test5390z00_8919;
{ /* Ieee/input.scm 137 */
long BgL_arg1825z00_1957;
{ /* Ieee/input.scm 137 */
long BgL_res3626z00_4994;
{ /* Ieee/input.scm 137 */
obj_t BgL_inputzd2portzd2_4993;
if(
INPUT_PORTP(BgL_iportz00_1792))
{ /* Ieee/input.scm 137 */
BgL_inputzd2portzd2_4993 = BgL_iportz00_1792; }  else 
{ 
obj_t BgL_auxz00_8922;
BgL_auxz00_8922 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5972)), BGl_string4910z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1792); 
FAILURE(BgL_auxz00_8922,BFALSE,BFALSE);} 
BgL_res3626z00_4994 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_4993); } 
BgL_arg1825z00_1957 = BgL_res3626z00_4994; } 
BgL_test5390z00_8919 = 
(BgL_arg1825z00_1957==((long)0)); } 
if(BgL_test5390z00_8919)
{ /* Ieee/input.scm 137 */
return BEOF;}  else 
{ /* Ieee/input.scm 137 */
unsigned char BgL_res3628z00_4998;
{ /* Ieee/input.scm 137 */
obj_t BgL_inputzd2portzd2_4997;
if(
INPUT_PORTP(BgL_iportz00_1792))
{ /* Ieee/input.scm 137 */
BgL_inputzd2portzd2_4997 = BgL_iportz00_1792; }  else 
{ 
obj_t BgL_auxz00_8930;
BgL_auxz00_8930 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5972)), BGl_string4910z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1792); 
FAILURE(BgL_auxz00_8930,BFALSE,BFALSE);} 
BgL_res3628z00_4998 = 
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_4997); } 
return 
BCHAR(BgL_res3628z00_4998);} } break;case ((long)0) : 

{ /* Ieee/input.scm 139 */
unsigned char BgL_cz00_1971;
{ /* Ieee/input.scm 137 */
unsigned char BgL_res3632z00_5034;
{ /* Ieee/input.scm 137 */
obj_t BgL_inputzd2portzd2_5033;
if(
INPUT_PORTP(BgL_iportz00_1792))
{ /* Ieee/input.scm 137 */
BgL_inputzd2portzd2_5033 = BgL_iportz00_1792; }  else 
{ 
obj_t BgL_auxz00_8938;
BgL_auxz00_8938 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5972)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1792); 
FAILURE(BgL_auxz00_8938,BFALSE,BFALSE);} 
BgL_res3632z00_5034 = 
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_5033); } 
BgL_cz00_1971 = BgL_res3632z00_5034; } 
{ /* Ieee/input.scm 140 */
obj_t BgL_arg1833z00_1972;long BgL_arg1835z00_1973;
{ /* Ieee/input.scm 140 */
obj_t BgL_res3633z00_5035;
if(
INPUT_PORTP(BgL_iportz00_1792))
{ /* Ieee/input.scm 137 */
BgL_res3633z00_5035 = BgL_iportz00_1792; }  else 
{ 
obj_t BgL_auxz00_8945;
BgL_auxz00_8945 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)5972)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_1792); 
FAILURE(BgL_auxz00_8945,BFALSE,BFALSE);} 
BgL_arg1833z00_1972 = BgL_res3633z00_5035; } 
BgL_arg1835z00_1973 = 
(
(unsigned char)(BgL_cz00_1971)); 
rgc_buffer_unget_char(BgL_arg1833z00_1972, 
(int)(BgL_arg1835z00_1973)); } 
return 
BCHAR(BgL_cz00_1971);} break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4908z00zz__r4_input_6_10_2z00, BGl_string4909z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_1967));} } } } } } } 

}



/* _read-byte */
obj_t BGl__readzd2bytezd2zz__r4_input_6_10_2z00(obj_t BgL_env1249z00_18, obj_t BgL_opt1248z00_17)
{
{ /* Ieee/input.scm 147 */
{ /* Ieee/input.scm 147 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1248z00_17)) { case ((long)0) : 

{ /* Ieee/input.scm 147 */
obj_t BgL_ipz00_2009;
{ /* Ieee/input.scm 147 */
obj_t BgL_res3641z00_5053;
{ /* Ieee/input.scm 147 */
obj_t BgL_tmpz00_8957;
BgL_tmpz00_8957 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3641z00_5053 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_8957); } 
BgL_ipz00_2009 = BgL_res3641z00_5053; } 
{ /* Ieee/input.scm 147 */

return 
BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_2009);} } break;case ((long)1) : 

{ /* Ieee/input.scm 147 */
obj_t BgL_ipz00_2010;
BgL_ipz00_2010 = 
VECTOR_REF(BgL_opt1248z00_17,((long)0)); 
{ /* Ieee/input.scm 147 */

return 
BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_2010);} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4982z00zz__r4_input_6_10_2z00, BGl_string4977z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1248z00_17)));} } } } 

}



/* read-byte */
BGL_EXPORTED_DEF obj_t BGl_readzd2bytezd2zz__r4_input_6_10_2z00(obj_t BgL_ipz00_16)
{
{ /* Ieee/input.scm 147 */
{ 
obj_t BgL_iportz00_2014;
BgL_iportz00_2014 = BgL_ipz00_16; 
{ 

{ /* Ieee/input.scm 148 */
bool_t BgL_test5395z00_8968;
{ /* Ieee/input.scm 148 */
obj_t BgL_arg1848z00_2052;
{ /* Ieee/input.scm 148 */
obj_t BgL_res3658z00_5120;
if(
INPUT_PORTP(BgL_iportz00_2014))
{ /* Ieee/input.scm 148 */
BgL_res3658z00_5120 = BgL_iportz00_2014; }  else 
{ 
obj_t BgL_auxz00_8971;
BgL_auxz00_8971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6449)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2014); 
FAILURE(BgL_auxz00_8971,BFALSE,BFALSE);} 
BgL_arg1848z00_2052 = BgL_res3658z00_5120; } 
{ /* Ieee/input.scm 148 */
bool_t BgL_res3659z00_5122;
BgL_res3659z00_5122 = 
INPUT_PORT_CLOSEP(BgL_arg1848z00_2052); 
BgL_test5395z00_8968 = BgL_res3659z00_5122; } } 
if(BgL_test5395z00_8968)
{ /* Ieee/input.scm 148 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg1842z00_2046;
{ /* Ieee/input.scm 148 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1046z00_2047;
{ /* Ieee/input.scm 148 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1045z00_2050;
BgL_new1045z00_2050 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Ieee/input.scm 148 */
long BgL_arg1847z00_2051;
{ /* Ieee/input.scm 148 */
long BgL_res3660z00_5124;
BgL_res3660z00_5124 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg1847z00_2051 = BgL_res3660z00_5124; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1045z00_2050), BgL_arg1847z00_2051); } 
BgL_new1046z00_2047 = BgL_new1045z00_2050; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_2047)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_2047)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_8984;
{ /* Ieee/input.scm 148 */
obj_t BgL_arg1845z00_2048;
{ /* Ieee/input.scm 148 */
obj_t BgL_arg1846z00_2049;
{ /* Ieee/input.scm 148 */
obj_t BgL_res3661z00_5128;
{ /* Ieee/input.scm 148 */
obj_t BgL_classz00_5127;
BgL_classz00_5127 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res3661z00_5128 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_5127); } 
BgL_arg1846z00_2049 = BgL_res3661z00_5128; } 
BgL_arg1845z00_2048 = 
VECTOR_REF(BgL_arg1846z00_2049,((long)2)); } 
{ /* Ieee/input.scm 148 */
obj_t BgL_auxz00_8988;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg1845z00_2048))
{ /* Ieee/input.scm 148 */
BgL_auxz00_8988 = BgL_arg1845z00_2048
; }  else 
{ 
obj_t BgL_auxz00_8991;
BgL_auxz00_8991 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6449)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg1845z00_2048); 
FAILURE(BgL_auxz00_8991,BFALSE,BFALSE);} 
BgL_auxz00_8984 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_8988); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_2047)))->BgL_stackz00)=((obj_t)BgL_auxz00_8984),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_2047)))->BgL_procz00)=((obj_t)BGl_string4908z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_2047)))->BgL_msgz00)=((obj_t)BGl_string4924z00zz__r4_input_6_10_2z00),BUNSPEC); 
{ 
obj_t BgL_auxz00_9001;
{ /* Ieee/input.scm 148 */
obj_t BgL_res3662z00_5130;
if(
INPUT_PORTP(BgL_iportz00_2014))
{ /* Ieee/input.scm 148 */
BgL_res3662z00_5130 = BgL_iportz00_2014; }  else 
{ 
obj_t BgL_auxz00_9005;
BgL_auxz00_9005 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6449)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2014); 
FAILURE(BgL_auxz00_9005,BFALSE,BFALSE);} 
BgL_auxz00_9001 = BgL_res3662z00_5130; } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_2047)))->BgL_objz00)=((obj_t)BgL_auxz00_9001),BUNSPEC); } 
BgL_arg1842z00_2046 = BgL_new1046z00_2047; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1842z00_2046));}  else 
{ /* Ieee/input.scm 148 */
{ /* Ieee/input.scm 148 */
long BgL_res3654z00_5085;
{ /* Ieee/input.scm 148 */
obj_t BgL_inputzd2portzd2_5084;
if(
INPUT_PORTP(BgL_iportz00_2014))
{ /* Ieee/input.scm 148 */
BgL_inputzd2portzd2_5084 = BgL_iportz00_2014; }  else 
{ 
obj_t BgL_auxz00_9014;
BgL_auxz00_9014 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6449)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2014); 
FAILURE(BgL_auxz00_9014,BFALSE,BFALSE);} 
BgL_res3654z00_5085 = 
RGC_START_MATCH(BgL_inputzd2portzd2_5084); } BgL_res3654z00_5085; } 
{ /* Ieee/input.scm 148 */
long BgL_matchz00_2189;
{ /* Ieee/input.scm 148 */
long BgL_arg1947z00_2193;long BgL_arg1948z00_2194;
{ /* Ieee/input.scm 148 */
long BgL_res3655z00_5087;
{ /* Ieee/input.scm 148 */
obj_t BgL_inputzd2portzd2_5086;
if(
INPUT_PORTP(BgL_iportz00_2014))
{ /* Ieee/input.scm 148 */
BgL_inputzd2portzd2_5086 = BgL_iportz00_2014; }  else 
{ 
obj_t BgL_auxz00_9021;
BgL_auxz00_9021 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6449)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2014); 
FAILURE(BgL_auxz00_9021,BFALSE,BFALSE);} 
BgL_res3655z00_5087 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5086); } 
BgL_arg1947z00_2193 = BgL_res3655z00_5087; } 
{ /* Ieee/input.scm 148 */
long BgL_res3656z00_5089;
{ /* Ieee/input.scm 148 */
obj_t BgL_inputzd2portzd2_5088;
if(
INPUT_PORTP(BgL_iportz00_2014))
{ /* Ieee/input.scm 148 */
BgL_inputzd2portzd2_5088 = BgL_iportz00_2014; }  else 
{ 
obj_t BgL_auxz00_9028;
BgL_auxz00_9028 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6449)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2014); 
FAILURE(BgL_auxz00_9028,BFALSE,BFALSE);} 
BgL_res3656z00_5089 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5088); } 
BgL_arg1948z00_2194 = BgL_res3656z00_5089; } 
{ 
long BgL_forwardz00_5091;long BgL_bufposz00_5092;
BgL_forwardz00_5091 = BgL_arg1947z00_2193; 
BgL_bufposz00_5092 = BgL_arg1948z00_2194; 
BgL_statezd20zd21054z00_5090:
if(
(BgL_forwardz00_5091==BgL_bufposz00_5092))
{ /* Ieee/input.scm 148 */
bool_t BgL_test5403z00_9035;
{ /* Ieee/input.scm 148 */
bool_t BgL_res3644z00_5098;
{ /* Ieee/input.scm 148 */
obj_t BgL_inputzd2portzd2_5099;
if(
INPUT_PORTP(BgL_iportz00_2014))
{ /* Ieee/input.scm 148 */
BgL_inputzd2portzd2_5099 = BgL_iportz00_2014; }  else 
{ 
obj_t BgL_auxz00_9038;
BgL_auxz00_9038 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6449)), BGl_string4984z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2014); 
FAILURE(BgL_auxz00_9038,BFALSE,BFALSE);} 
BgL_res3644z00_5098 = 
rgc_fill_buffer(BgL_inputzd2portzd2_5099); } 
BgL_test5403z00_9035 = BgL_res3644z00_5098; } 
if(BgL_test5403z00_9035)
{ /* Ieee/input.scm 148 */
long BgL_arg1853z00_5100;long BgL_arg1855z00_5101;
{ /* Ieee/input.scm 148 */
long BgL_res3645z00_5102;
{ /* Ieee/input.scm 148 */
obj_t BgL_inputzd2portzd2_5103;
if(
INPUT_PORTP(BgL_iportz00_2014))
{ /* Ieee/input.scm 148 */
BgL_inputzd2portzd2_5103 = BgL_iportz00_2014; }  else 
{ 
obj_t BgL_auxz00_9045;
BgL_auxz00_9045 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6449)), BGl_string4984z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2014); 
FAILURE(BgL_auxz00_9045,BFALSE,BFALSE);} 
BgL_res3645z00_5102 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5103); } 
BgL_arg1853z00_5100 = BgL_res3645z00_5102; } 
{ /* Ieee/input.scm 148 */
long BgL_res3646z00_5104;
{ /* Ieee/input.scm 148 */
obj_t BgL_inputzd2portzd2_5105;
if(
INPUT_PORTP(BgL_iportz00_2014))
{ /* Ieee/input.scm 148 */
BgL_inputzd2portzd2_5105 = BgL_iportz00_2014; }  else 
{ 
obj_t BgL_auxz00_9052;
BgL_auxz00_9052 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6449)), BGl_string4984z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2014); 
FAILURE(BgL_auxz00_9052,BFALSE,BFALSE);} 
BgL_res3646z00_5104 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5105); } 
BgL_arg1855z00_5101 = BgL_res3646z00_5104; } 
{ 
long BgL_bufposz00_9058;long BgL_forwardz00_9057;
BgL_forwardz00_9057 = BgL_arg1853z00_5100; 
BgL_bufposz00_9058 = BgL_arg1855z00_5101; 
BgL_bufposz00_5092 = BgL_bufposz00_9058; 
BgL_forwardz00_5091 = BgL_forwardz00_9057; 
goto BgL_statezd20zd21054z00_5090;} }  else 
{ /* Ieee/input.scm 148 */
BgL_matchz00_2189 = ((long)1); } }  else 
{ /* Ieee/input.scm 148 */
int BgL_curz00_5106;
{ /* Ieee/input.scm 148 */
int BgL_res3647z00_5107;
{ /* Ieee/input.scm 148 */
obj_t BgL_inputzd2portzd2_5108;
if(
INPUT_PORTP(BgL_iportz00_2014))
{ /* Ieee/input.scm 148 */
BgL_inputzd2portzd2_5108 = BgL_iportz00_2014; }  else 
{ 
obj_t BgL_auxz00_9061;
BgL_auxz00_9061 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6449)), BGl_string4984z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2014); 
FAILURE(BgL_auxz00_9061,BFALSE,BFALSE);} 
BgL_res3647z00_5107 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5108, BgL_forwardz00_5091); } 
BgL_curz00_5106 = BgL_res3647z00_5107; } 
{ /* Ieee/input.scm 148 */

{ /* Ieee/input.scm 148 */
long BgL_arg1856z00_5110;
BgL_arg1856z00_5110 = 
(((long)1)+BgL_forwardz00_5091); 
{ /* Ieee/input.scm 148 */
long BgL_newzd2matchzd2_5113;
{ /* Ieee/input.scm 148 */
long BgL_res3649z00_5114;
{ /* Ieee/input.scm 148 */
obj_t BgL_inputzd2portzd2_5115;
if(
INPUT_PORTP(BgL_iportz00_2014))
{ /* Ieee/input.scm 148 */
BgL_inputzd2portzd2_5115 = BgL_iportz00_2014; }  else 
{ 
obj_t BgL_auxz00_9069;
BgL_auxz00_9069 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6449)), BGl_string4984z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2014); 
FAILURE(BgL_auxz00_9069,BFALSE,BFALSE);} 
BgL_res3649z00_5114 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5115, BgL_arg1856z00_5110); } BgL_res3649z00_5114; } 
BgL_newzd2matchzd2_5113 = ((long)0); 
BgL_matchz00_2189 = BgL_newzd2matchzd2_5113; } } } } } } 
{ /* Ieee/input.scm 148 */
obj_t BgL_inputzd2portzd2_5117;
if(
INPUT_PORTP(BgL_iportz00_2014))
{ /* Ieee/input.scm 148 */
BgL_inputzd2portzd2_5117 = BgL_iportz00_2014; }  else 
{ 
obj_t BgL_auxz00_9076;
BgL_auxz00_9076 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6449)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2014); 
FAILURE(BgL_auxz00_9076,BFALSE,BFALSE);} 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_5117); } 
switch( BgL_matchz00_2189) { case ((long)1) : 

{ /* Ieee/input.scm 148 */
bool_t BgL_test5410z00_9081;
{ /* Ieee/input.scm 148 */
long BgL_arg1939z00_2179;
{ /* Ieee/input.scm 148 */
long BgL_res3651z00_5079;
{ /* Ieee/input.scm 148 */
obj_t BgL_inputzd2portzd2_5078;
if(
INPUT_PORTP(BgL_iportz00_2014))
{ /* Ieee/input.scm 148 */
BgL_inputzd2portzd2_5078 = BgL_iportz00_2014; }  else 
{ 
obj_t BgL_auxz00_9084;
BgL_auxz00_9084 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6449)), BGl_string4910z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2014); 
FAILURE(BgL_auxz00_9084,BFALSE,BFALSE);} 
BgL_res3651z00_5079 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_5078); } 
BgL_arg1939z00_2179 = BgL_res3651z00_5079; } 
BgL_test5410z00_9081 = 
(BgL_arg1939z00_2179==((long)0)); } 
if(BgL_test5410z00_9081)
{ /* Ieee/input.scm 148 */
return BEOF;}  else 
{ /* Ieee/input.scm 148 */
unsigned char BgL_res3653z00_5083;
{ /* Ieee/input.scm 148 */
obj_t BgL_inputzd2portzd2_5082;
if(
INPUT_PORTP(BgL_iportz00_2014))
{ /* Ieee/input.scm 148 */
BgL_inputzd2portzd2_5082 = BgL_iportz00_2014; }  else 
{ 
obj_t BgL_auxz00_9092;
BgL_auxz00_9092 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6449)), BGl_string4910z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2014); 
FAILURE(BgL_auxz00_9092,BFALSE,BFALSE);} 
BgL_res3653z00_5083 = 
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_5082); } 
return 
BCHAR(BgL_res3653z00_5083);} } break;case ((long)0) : 

{ /* Ieee/input.scm 148 */
int BgL_res3657z00_5119;
{ /* Ieee/input.scm 148 */
obj_t BgL_inputzd2portzd2_5118;
if(
INPUT_PORTP(BgL_iportz00_2014))
{ /* Ieee/input.scm 148 */
BgL_inputzd2portzd2_5118 = BgL_iportz00_2014; }  else 
{ 
obj_t BgL_auxz00_9100;
BgL_auxz00_9100 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6449)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2014); 
FAILURE(BgL_auxz00_9100,BFALSE,BFALSE);} 
BgL_res3657z00_5119 = 
RGC_BUFFER_BYTE(BgL_inputzd2portzd2_5118); } 
return 
BINT(BgL_res3657z00_5119);} break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4908z00zz__r4_input_6_10_2z00, BGl_string4909z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_2189));} } } } } } } 

}



/* _peek-byte */
obj_t BGl__peekzd2bytezd2zz__r4_input_6_10_2z00(obj_t BgL_env1253z00_21, obj_t BgL_opt1252z00_20)
{
{ /* Ieee/input.scm 155 */
{ /* Ieee/input.scm 155 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1252z00_20)) { case ((long)0) : 

{ /* Ieee/input.scm 155 */
obj_t BgL_ipz00_2228;
{ /* Ieee/input.scm 155 */
obj_t BgL_res3663z00_5132;
{ /* Ieee/input.scm 155 */
obj_t BgL_tmpz00_9109;
BgL_tmpz00_9109 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3663z00_5132 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_9109); } 
BgL_ipz00_2228 = BgL_res3663z00_5132; } 
{ /* Ieee/input.scm 155 */

return 
BGl_peekzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_2228);} } break;case ((long)1) : 

{ /* Ieee/input.scm 155 */
obj_t BgL_ipz00_2229;
BgL_ipz00_2229 = 
VECTOR_REF(BgL_opt1252z00_20,((long)0)); 
{ /* Ieee/input.scm 155 */

return 
BGl_peekzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_2229);} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4985z00zz__r4_input_6_10_2z00, BGl_string4977z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1252z00_20)));} } } } 

}



/* peek-byte */
BGL_EXPORTED_DEF obj_t BGl_peekzd2bytezd2zz__r4_input_6_10_2z00(obj_t BgL_ipz00_19)
{
{ /* Ieee/input.scm 155 */
{ 
obj_t BgL_iportz00_2233;
BgL_iportz00_2233 = BgL_ipz00_19; 
{ 

{ /* Ieee/input.scm 156 */
bool_t BgL_test5414z00_9120;
{ /* Ieee/input.scm 156 */
obj_t BgL_arg1957z00_2271;
{ /* Ieee/input.scm 156 */
obj_t BgL_res3682z00_5203;
if(
INPUT_PORTP(BgL_iportz00_2233))
{ /* Ieee/input.scm 156 */
BgL_res3682z00_5203 = BgL_iportz00_2233; }  else 
{ 
obj_t BgL_auxz00_9123;
BgL_auxz00_9123 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6838)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2233); 
FAILURE(BgL_auxz00_9123,BFALSE,BFALSE);} 
BgL_arg1957z00_2271 = BgL_res3682z00_5203; } 
{ /* Ieee/input.scm 156 */
bool_t BgL_res3683z00_5205;
BgL_res3683z00_5205 = 
INPUT_PORT_CLOSEP(BgL_arg1957z00_2271); 
BgL_test5414z00_9120 = BgL_res3683z00_5205; } } 
if(BgL_test5414z00_9120)
{ /* Ieee/input.scm 156 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg1953z00_2265;
{ /* Ieee/input.scm 156 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1046z00_2266;
{ /* Ieee/input.scm 156 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1045z00_2269;
BgL_new1045z00_2269 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Ieee/input.scm 156 */
long BgL_arg1956z00_2270;
{ /* Ieee/input.scm 156 */
long BgL_res3684z00_5207;
BgL_res3684z00_5207 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg1956z00_2270 = BgL_res3684z00_5207; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1045z00_2269), BgL_arg1956z00_2270); } 
BgL_new1046z00_2266 = BgL_new1045z00_2269; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_2266)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_2266)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_9136;
{ /* Ieee/input.scm 156 */
obj_t BgL_arg1954z00_2267;
{ /* Ieee/input.scm 156 */
obj_t BgL_arg1955z00_2268;
{ /* Ieee/input.scm 156 */
obj_t BgL_res3685z00_5211;
{ /* Ieee/input.scm 156 */
obj_t BgL_classz00_5210;
BgL_classz00_5210 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res3685z00_5211 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_5210); } 
BgL_arg1955z00_2268 = BgL_res3685z00_5211; } 
BgL_arg1954z00_2267 = 
VECTOR_REF(BgL_arg1955z00_2268,((long)2)); } 
{ /* Ieee/input.scm 156 */
obj_t BgL_auxz00_9140;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg1954z00_2267))
{ /* Ieee/input.scm 156 */
BgL_auxz00_9140 = BgL_arg1954z00_2267
; }  else 
{ 
obj_t BgL_auxz00_9143;
BgL_auxz00_9143 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6838)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg1954z00_2267); 
FAILURE(BgL_auxz00_9143,BFALSE,BFALSE);} 
BgL_auxz00_9136 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_9140); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_2266)))->BgL_stackz00)=((obj_t)BgL_auxz00_9136),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_2266)))->BgL_procz00)=((obj_t)BGl_string4908z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_2266)))->BgL_msgz00)=((obj_t)BGl_string4924z00zz__r4_input_6_10_2z00),BUNSPEC); 
{ 
obj_t BgL_auxz00_9153;
{ /* Ieee/input.scm 156 */
obj_t BgL_res3686z00_5213;
if(
INPUT_PORTP(BgL_iportz00_2233))
{ /* Ieee/input.scm 156 */
BgL_res3686z00_5213 = BgL_iportz00_2233; }  else 
{ 
obj_t BgL_auxz00_9157;
BgL_auxz00_9157 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6838)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2233); 
FAILURE(BgL_auxz00_9157,BFALSE,BFALSE);} 
BgL_auxz00_9153 = BgL_res3686z00_5213; } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_2266)))->BgL_objz00)=((obj_t)BgL_auxz00_9153),BUNSPEC); } 
BgL_arg1953z00_2265 = BgL_new1046z00_2266; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1953z00_2265));}  else 
{ /* Ieee/input.scm 156 */
{ /* Ieee/input.scm 156 */
long BgL_res3676z00_5164;
{ /* Ieee/input.scm 156 */
obj_t BgL_inputzd2portzd2_5163;
if(
INPUT_PORTP(BgL_iportz00_2233))
{ /* Ieee/input.scm 156 */
BgL_inputzd2portzd2_5163 = BgL_iportz00_2233; }  else 
{ 
obj_t BgL_auxz00_9166;
BgL_auxz00_9166 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6838)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2233); 
FAILURE(BgL_auxz00_9166,BFALSE,BFALSE);} 
BgL_res3676z00_5164 = 
RGC_START_MATCH(BgL_inputzd2portzd2_5163); } BgL_res3676z00_5164; } 
{ /* Ieee/input.scm 156 */
long BgL_matchz00_2408;
{ /* Ieee/input.scm 156 */
long BgL_arg2060z00_2414;long BgL_arg2061z00_2415;
{ /* Ieee/input.scm 156 */
long BgL_res3677z00_5166;
{ /* Ieee/input.scm 156 */
obj_t BgL_inputzd2portzd2_5165;
if(
INPUT_PORTP(BgL_iportz00_2233))
{ /* Ieee/input.scm 156 */
BgL_inputzd2portzd2_5165 = BgL_iportz00_2233; }  else 
{ 
obj_t BgL_auxz00_9173;
BgL_auxz00_9173 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6838)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2233); 
FAILURE(BgL_auxz00_9173,BFALSE,BFALSE);} 
BgL_res3677z00_5166 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5165); } 
BgL_arg2060z00_2414 = BgL_res3677z00_5166; } 
{ /* Ieee/input.scm 156 */
long BgL_res3678z00_5168;
{ /* Ieee/input.scm 156 */
obj_t BgL_inputzd2portzd2_5167;
if(
INPUT_PORTP(BgL_iportz00_2233))
{ /* Ieee/input.scm 156 */
BgL_inputzd2portzd2_5167 = BgL_iportz00_2233; }  else 
{ 
obj_t BgL_auxz00_9180;
BgL_auxz00_9180 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6838)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2233); 
FAILURE(BgL_auxz00_9180,BFALSE,BFALSE);} 
BgL_res3678z00_5168 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5167); } 
BgL_arg2061z00_2415 = BgL_res3678z00_5168; } 
{ 
long BgL_forwardz00_5170;long BgL_bufposz00_5171;
BgL_forwardz00_5170 = BgL_arg2060z00_2414; 
BgL_bufposz00_5171 = BgL_arg2061z00_2415; 
BgL_statezd20zd21060z00_5169:
if(
(BgL_forwardz00_5170==BgL_bufposz00_5171))
{ /* Ieee/input.scm 156 */
bool_t BgL_test5422z00_9187;
{ /* Ieee/input.scm 156 */
bool_t BgL_res3666z00_5177;
{ /* Ieee/input.scm 156 */
obj_t BgL_inputzd2portzd2_5178;
if(
INPUT_PORTP(BgL_iportz00_2233))
{ /* Ieee/input.scm 156 */
BgL_inputzd2portzd2_5178 = BgL_iportz00_2233; }  else 
{ 
obj_t BgL_auxz00_9190;
BgL_auxz00_9190 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6838)), BGl_string4987z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2233); 
FAILURE(BgL_auxz00_9190,BFALSE,BFALSE);} 
BgL_res3666z00_5177 = 
rgc_fill_buffer(BgL_inputzd2portzd2_5178); } 
BgL_test5422z00_9187 = BgL_res3666z00_5177; } 
if(BgL_test5422z00_9187)
{ /* Ieee/input.scm 156 */
long BgL_arg1962z00_5179;long BgL_arg1963z00_5180;
{ /* Ieee/input.scm 156 */
long BgL_res3667z00_5181;
{ /* Ieee/input.scm 156 */
obj_t BgL_inputzd2portzd2_5182;
if(
INPUT_PORTP(BgL_iportz00_2233))
{ /* Ieee/input.scm 156 */
BgL_inputzd2portzd2_5182 = BgL_iportz00_2233; }  else 
{ 
obj_t BgL_auxz00_9197;
BgL_auxz00_9197 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6838)), BGl_string4987z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2233); 
FAILURE(BgL_auxz00_9197,BFALSE,BFALSE);} 
BgL_res3667z00_5181 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5182); } 
BgL_arg1962z00_5179 = BgL_res3667z00_5181; } 
{ /* Ieee/input.scm 156 */
long BgL_res3668z00_5183;
{ /* Ieee/input.scm 156 */
obj_t BgL_inputzd2portzd2_5184;
if(
INPUT_PORTP(BgL_iportz00_2233))
{ /* Ieee/input.scm 156 */
BgL_inputzd2portzd2_5184 = BgL_iportz00_2233; }  else 
{ 
obj_t BgL_auxz00_9204;
BgL_auxz00_9204 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6838)), BGl_string4987z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2233); 
FAILURE(BgL_auxz00_9204,BFALSE,BFALSE);} 
BgL_res3668z00_5183 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5184); } 
BgL_arg1963z00_5180 = BgL_res3668z00_5183; } 
{ 
long BgL_bufposz00_9210;long BgL_forwardz00_9209;
BgL_forwardz00_9209 = BgL_arg1962z00_5179; 
BgL_bufposz00_9210 = BgL_arg1963z00_5180; 
BgL_bufposz00_5171 = BgL_bufposz00_9210; 
BgL_forwardz00_5170 = BgL_forwardz00_9209; 
goto BgL_statezd20zd21060z00_5169;} }  else 
{ /* Ieee/input.scm 156 */
BgL_matchz00_2408 = ((long)1); } }  else 
{ /* Ieee/input.scm 156 */
int BgL_curz00_5185;
{ /* Ieee/input.scm 156 */
int BgL_res3669z00_5186;
{ /* Ieee/input.scm 156 */
obj_t BgL_inputzd2portzd2_5187;
if(
INPUT_PORTP(BgL_iportz00_2233))
{ /* Ieee/input.scm 156 */
BgL_inputzd2portzd2_5187 = BgL_iportz00_2233; }  else 
{ 
obj_t BgL_auxz00_9213;
BgL_auxz00_9213 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6838)), BGl_string4987z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2233); 
FAILURE(BgL_auxz00_9213,BFALSE,BFALSE);} 
BgL_res3669z00_5186 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5187, BgL_forwardz00_5170); } 
BgL_curz00_5185 = BgL_res3669z00_5186; } 
{ /* Ieee/input.scm 156 */

{ /* Ieee/input.scm 156 */
long BgL_arg1964z00_5189;
BgL_arg1964z00_5189 = 
(((long)1)+BgL_forwardz00_5170); 
{ /* Ieee/input.scm 156 */
long BgL_newzd2matchzd2_5192;
{ /* Ieee/input.scm 156 */
long BgL_res3671z00_5193;
{ /* Ieee/input.scm 156 */
obj_t BgL_inputzd2portzd2_5194;
if(
INPUT_PORTP(BgL_iportz00_2233))
{ /* Ieee/input.scm 156 */
BgL_inputzd2portzd2_5194 = BgL_iportz00_2233; }  else 
{ 
obj_t BgL_auxz00_9221;
BgL_auxz00_9221 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6838)), BGl_string4987z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2233); 
FAILURE(BgL_auxz00_9221,BFALSE,BFALSE);} 
BgL_res3671z00_5193 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5194, BgL_arg1964z00_5189); } BgL_res3671z00_5193; } 
BgL_newzd2matchzd2_5192 = ((long)0); 
BgL_matchz00_2408 = BgL_newzd2matchzd2_5192; } } } } } } 
{ /* Ieee/input.scm 156 */
obj_t BgL_inputzd2portzd2_5196;
if(
INPUT_PORTP(BgL_iportz00_2233))
{ /* Ieee/input.scm 156 */
BgL_inputzd2portzd2_5196 = BgL_iportz00_2233; }  else 
{ 
obj_t BgL_auxz00_9228;
BgL_auxz00_9228 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6838)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2233); 
FAILURE(BgL_auxz00_9228,BFALSE,BFALSE);} 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_5196); } 
switch( BgL_matchz00_2408) { case ((long)1) : 

{ /* Ieee/input.scm 156 */
bool_t BgL_test5429z00_9233;
{ /* Ieee/input.scm 156 */
long BgL_arg2050z00_2398;
{ /* Ieee/input.scm 156 */
long BgL_res3673z00_5158;
{ /* Ieee/input.scm 156 */
obj_t BgL_inputzd2portzd2_5157;
if(
INPUT_PORTP(BgL_iportz00_2233))
{ /* Ieee/input.scm 156 */
BgL_inputzd2portzd2_5157 = BgL_iportz00_2233; }  else 
{ 
obj_t BgL_auxz00_9236;
BgL_auxz00_9236 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6838)), BGl_string4910z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2233); 
FAILURE(BgL_auxz00_9236,BFALSE,BFALSE);} 
BgL_res3673z00_5158 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_5157); } 
BgL_arg2050z00_2398 = BgL_res3673z00_5158; } 
BgL_test5429z00_9233 = 
(BgL_arg2050z00_2398==((long)0)); } 
if(BgL_test5429z00_9233)
{ /* Ieee/input.scm 156 */
return BEOF;}  else 
{ /* Ieee/input.scm 156 */
unsigned char BgL_res3675z00_5162;
{ /* Ieee/input.scm 156 */
obj_t BgL_inputzd2portzd2_5161;
if(
INPUT_PORTP(BgL_iportz00_2233))
{ /* Ieee/input.scm 156 */
BgL_inputzd2portzd2_5161 = BgL_iportz00_2233; }  else 
{ 
obj_t BgL_auxz00_9244;
BgL_auxz00_9244 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6838)), BGl_string4910z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2233); 
FAILURE(BgL_auxz00_9244,BFALSE,BFALSE);} 
BgL_res3675z00_5162 = 
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_5161); } 
return 
BCHAR(BgL_res3675z00_5162);} } break;case ((long)0) : 

{ /* Ieee/input.scm 158 */
int BgL_cz00_2412;
{ /* Ieee/input.scm 156 */
int BgL_res3679z00_5198;
{ /* Ieee/input.scm 156 */
obj_t BgL_inputzd2portzd2_5197;
if(
INPUT_PORTP(BgL_iportz00_2233))
{ /* Ieee/input.scm 156 */
BgL_inputzd2portzd2_5197 = BgL_iportz00_2233; }  else 
{ 
obj_t BgL_auxz00_9252;
BgL_auxz00_9252 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6838)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2233); 
FAILURE(BgL_auxz00_9252,BFALSE,BFALSE);} 
BgL_res3679z00_5198 = 
RGC_BUFFER_BYTE(BgL_inputzd2portzd2_5197); } 
BgL_cz00_2412 = BgL_res3679z00_5198; } 
{ /* Ieee/input.scm 159 */
obj_t BgL_arg2059z00_2413;
{ /* Ieee/input.scm 159 */
obj_t BgL_res3680z00_5199;
if(
INPUT_PORTP(BgL_iportz00_2233))
{ /* Ieee/input.scm 156 */
BgL_res3680z00_5199 = BgL_iportz00_2233; }  else 
{ 
obj_t BgL_auxz00_9259;
BgL_auxz00_9259 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)6838)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2233); 
FAILURE(BgL_auxz00_9259,BFALSE,BFALSE);} 
BgL_arg2059z00_2413 = BgL_res3680z00_5199; } 
rgc_buffer_unget_char(BgL_arg2059z00_2413, BgL_cz00_2412); } 
return 
BINT(BgL_cz00_2412);} break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4908z00zz__r4_input_6_10_2z00, BGl_string4909z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_2408));} } } } } } } 

}



/* eof-object */
BGL_EXPORTED_DEF obj_t BGl_eofzd2objectzd2zz__r4_input_6_10_2z00()
{
{ /* Ieee/input.scm 166 */
return BEOF;} 

}



/* &eof-object */
obj_t BGl_z62eofzd2objectzb0zz__r4_input_6_10_2z00(obj_t BgL_envz00_6661)
{
{ /* Ieee/input.scm 166 */
return 
BGl_eofzd2objectzd2zz__r4_input_6_10_2z00();} 

}



/* eof-object? */
BGL_EXPORTED_DEF bool_t BGl_eofzd2objectzf3z21zz__r4_input_6_10_2z00(obj_t BgL_objectz00_22)
{
{ /* Ieee/input.scm 172 */
return 
EOF_OBJECTP(BgL_objectz00_22);} 

}



/* &eof-object? */
obj_t BGl_z62eofzd2objectzf3z43zz__r4_input_6_10_2z00(obj_t BgL_envz00_6659, obj_t BgL_objectz00_6660)
{
{ /* Ieee/input.scm 172 */
return 
BBOOL(
EOF_OBJECTP(BgL_objectz00_6660));} 

}



/* _char-ready? */
obj_t BGl__charzd2readyzf3z21zz__r4_input_6_10_2z00(obj_t BgL_env1257z00_25, obj_t BgL_opt1256z00_24)
{
{ /* Ieee/input.scm 178 */
{ /* Ieee/input.scm 178 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1256z00_24)) { case ((long)0) : 

{ /* Ieee/input.scm 178 */
obj_t BgL_ipz00_7649;
{ /* Ieee/input.scm 178 */
obj_t BgL_res3687z00_7650;
{ /* Ieee/input.scm 178 */
obj_t BgL_tmpz00_9272;
BgL_tmpz00_9272 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3687z00_7650 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_9272); } 
BgL_ipz00_7649 = BgL_res3687z00_7650; } 
{ /* Ieee/input.scm 178 */

return 
BBOOL(
bgl_rgc_charready(BgL_ipz00_7649));} } break;case ((long)1) : 

{ /* Ieee/input.scm 178 */
obj_t BgL_ipz00_7651;
BgL_ipz00_7651 = 
VECTOR_REF(BgL_opt1256z00_24,((long)0)); 
{ /* Ieee/input.scm 178 */

{ /* Ieee/input.scm 178 */
bool_t BgL_res3689z00_7652;
{ /* Ieee/input.scm 179 */
obj_t BgL_tmpz00_9278;
if(
INPUT_PORTP(BgL_ipz00_7651))
{ /* Ieee/input.scm 179 */
BgL_tmpz00_9278 = BgL_ipz00_7651
; }  else 
{ 
obj_t BgL_auxz00_9281;
BgL_auxz00_9281 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)7849)), BGl_string4990z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_7651); 
FAILURE(BgL_auxz00_9281,BFALSE,BFALSE);} 
BgL_res3689z00_7652 = 
bgl_rgc_charready(BgL_tmpz00_9278); } 
return 
BBOOL(BgL_res3689z00_7652);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4988z00zz__r4_input_6_10_2z00, BGl_string4977z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1256z00_24)));} } } } 

}



/* char-ready? */
BGL_EXPORTED_DEF bool_t BGl_charzd2readyzf3z21zz__r4_input_6_10_2z00(obj_t BgL_ipz00_23)
{
{ /* Ieee/input.scm 178 */
{ /* Ieee/input.scm 179 */
obj_t BgL_tmpz00_9292;
if(
INPUT_PORTP(BgL_ipz00_23))
{ /* Ieee/input.scm 179 */
BgL_tmpz00_9292 = BgL_ipz00_23
; }  else 
{ 
obj_t BgL_auxz00_9295;
BgL_auxz00_9295 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)7849)), BGl_string4989z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_23); 
FAILURE(BgL_auxz00_9295,BFALSE,BFALSE);} 
return 
bgl_rgc_charready(BgL_tmpz00_9292);} } 

}



/* _read-line */
obj_t BGl__readzd2linezd2zz__r4_input_6_10_2z00(obj_t BgL_env1261z00_28, obj_t BgL_opt1260z00_27)
{
{ /* Ieee/input.scm 184 */
{ /* Ieee/input.scm 184 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1260z00_27)) { case ((long)0) : 

{ /* Ieee/input.scm 184 */
obj_t BgL_ipz00_2455;
{ /* Ieee/input.scm 184 */
obj_t BgL_res3690z00_5225;
{ /* Ieee/input.scm 184 */
obj_t BgL_tmpz00_9300;
BgL_tmpz00_9300 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3690z00_5225 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_9300); } 
BgL_ipz00_2455 = BgL_res3690z00_5225; } 
{ /* Ieee/input.scm 184 */

return 
BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_2455);} } break;case ((long)1) : 

{ /* Ieee/input.scm 184 */
obj_t BgL_ipz00_2456;
BgL_ipz00_2456 = 
VECTOR_REF(BgL_opt1260z00_27,((long)0)); 
{ /* Ieee/input.scm 184 */

return 
BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_2456);} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol4991z00zz__r4_input_6_10_2z00, BGl_string4977z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1260z00_27)));} } } } 

}



/* read-line */
BGL_EXPORTED_DEF obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t BgL_ipz00_26)
{
{ /* Ieee/input.scm 184 */
{ /* Ieee/input.scm 185 */
bool_t BgL_test5436z00_9311;
{ /* Ieee/input.scm 185 */
long BgL_arg2233z00_2798;
{ /* Ieee/input.scm 185 */
obj_t BgL_tmpz00_9312;
if(
INPUT_PORTP(BgL_ipz00_26))
{ /* Ieee/input.scm 185 */
BgL_tmpz00_9312 = BgL_ipz00_26
; }  else 
{ 
obj_t BgL_auxz00_9315;
BgL_auxz00_9315 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8167)), BGl_string4992z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_26); 
FAILURE(BgL_auxz00_9315,BFALSE,BFALSE);} 
BgL_arg2233z00_2798 = 
BGL_INPUT_PORT_BUFSIZ(BgL_tmpz00_9312); } 
BgL_test5436z00_9311 = 
(BgL_arg2233z00_2798>((long)2)); } 
if(BgL_test5436z00_9311)
{ 
obj_t BgL_iportz00_2462;
BgL_iportz00_2462 = BgL_ipz00_26; 
{ 
int BgL_minz00_2617;int BgL_maxz00_2618;obj_t BgL_iportz00_2580;long BgL_lastzd2matchzd2_2581;long BgL_forwardz00_2582;long BgL_bufposz00_2583;obj_t BgL_iportz00_2552;long BgL_lastzd2matchzd2_2553;long BgL_forwardz00_2554;long BgL_bufposz00_2555;obj_t BgL_iportz00_2539;long BgL_lastzd2matchzd2_2540;long BgL_forwardz00_2541;long BgL_bufposz00_2542;obj_t BgL_iportz00_2524;long BgL_lastzd2matchzd2_2525;long BgL_forwardz00_2526;long BgL_bufposz00_2527;obj_t BgL_iportz00_2508;long BgL_lastzd2matchzd2_2509;long BgL_forwardz00_2510;long BgL_bufposz00_2511;
{ /* Ieee/input.scm 186 */
bool_t BgL_test5438z00_9321;
{ /* Ieee/input.scm 186 */
obj_t BgL_arg2075z00_2507;
{ /* Ieee/input.scm 186 */
obj_t BgL_res3776z00_5439;
if(
INPUT_PORTP(BgL_iportz00_2462))
{ /* Ieee/input.scm 186 */
BgL_res3776z00_5439 = BgL_iportz00_2462; }  else 
{ 
obj_t BgL_auxz00_9324;
BgL_auxz00_9324 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2462); 
FAILURE(BgL_auxz00_9324,BFALSE,BFALSE);} 
BgL_arg2075z00_2507 = BgL_res3776z00_5439; } 
{ /* Ieee/input.scm 186 */
bool_t BgL_res3777z00_5441;
BgL_res3777z00_5441 = 
INPUT_PORT_CLOSEP(BgL_arg2075z00_2507); 
BgL_test5438z00_9321 = BgL_res3777z00_5441; } } 
if(BgL_test5438z00_9321)
{ /* Ieee/input.scm 186 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg2069z00_2501;
{ /* Ieee/input.scm 186 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1046z00_2502;
{ /* Ieee/input.scm 186 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1045z00_2505;
BgL_new1045z00_2505 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Ieee/input.scm 186 */
long BgL_arg2072z00_2506;
{ /* Ieee/input.scm 186 */
long BgL_res3778z00_5443;
BgL_res3778z00_5443 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg2072z00_2506 = BgL_res3778z00_5443; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1045z00_2505), BgL_arg2072z00_2506); } 
BgL_new1046z00_2502 = BgL_new1045z00_2505; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_2502)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_2502)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_9337;
{ /* Ieee/input.scm 186 */
obj_t BgL_arg2070z00_2503;
{ /* Ieee/input.scm 186 */
obj_t BgL_arg2071z00_2504;
{ /* Ieee/input.scm 186 */
obj_t BgL_res3779z00_5447;
{ /* Ieee/input.scm 186 */
obj_t BgL_classz00_5446;
BgL_classz00_5446 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res3779z00_5447 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_5446); } 
BgL_arg2071z00_2504 = BgL_res3779z00_5447; } 
BgL_arg2070z00_2503 = 
VECTOR_REF(BgL_arg2071z00_2504,((long)2)); } 
{ /* Ieee/input.scm 186 */
obj_t BgL_auxz00_9341;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2070z00_2503))
{ /* Ieee/input.scm 186 */
BgL_auxz00_9341 = BgL_arg2070z00_2503
; }  else 
{ 
obj_t BgL_auxz00_9344;
BgL_auxz00_9344 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg2070z00_2503); 
FAILURE(BgL_auxz00_9344,BFALSE,BFALSE);} 
BgL_auxz00_9337 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_9341); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_2502)))->BgL_stackz00)=((obj_t)BgL_auxz00_9337),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_2502)))->BgL_procz00)=((obj_t)BGl_string4908z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_2502)))->BgL_msgz00)=((obj_t)BGl_string4924z00zz__r4_input_6_10_2z00),BUNSPEC); 
{ 
obj_t BgL_auxz00_9354;
{ /* Ieee/input.scm 186 */
obj_t BgL_res3780z00_5449;
if(
INPUT_PORTP(BgL_iportz00_2462))
{ /* Ieee/input.scm 186 */
BgL_res3780z00_5449 = BgL_iportz00_2462; }  else 
{ 
obj_t BgL_auxz00_9358;
BgL_auxz00_9358 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2462); 
FAILURE(BgL_auxz00_9358,BFALSE,BFALSE);} 
BgL_auxz00_9354 = BgL_res3780z00_5449; } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_2502)))->BgL_objz00)=((obj_t)BgL_auxz00_9354),BUNSPEC); } 
BgL_arg2069z00_2501 = BgL_new1046z00_2502; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2069z00_2501));}  else 
{ /* Ieee/input.scm 186 */
{ /* Ieee/input.scm 186 */
long BgL_res3766z00_5418;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5417;
if(
INPUT_PORTP(BgL_iportz00_2462))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5417 = BgL_iportz00_2462; }  else 
{ 
obj_t BgL_auxz00_9367;
BgL_auxz00_9367 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2462); 
FAILURE(BgL_auxz00_9367,BFALSE,BFALSE);} 
BgL_res3766z00_5418 = 
RGC_START_MATCH(BgL_inputzd2portzd2_5417); } BgL_res3766z00_5418; } 
{ /* Ieee/input.scm 186 */
long BgL_matchz00_2724;
{ /* Ieee/input.scm 186 */
long BgL_arg2218z00_2732;long BgL_arg2219z00_2733;
{ /* Ieee/input.scm 186 */
long BgL_res3767z00_5420;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5419;
if(
INPUT_PORTP(BgL_iportz00_2462))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5419 = BgL_iportz00_2462; }  else 
{ 
obj_t BgL_auxz00_9374;
BgL_auxz00_9374 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2462); 
FAILURE(BgL_auxz00_9374,BFALSE,BFALSE);} 
BgL_res3767z00_5420 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5419); } 
BgL_arg2218z00_2732 = BgL_res3767z00_5420; } 
{ /* Ieee/input.scm 186 */
long BgL_res3768z00_5422;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5421;
if(
INPUT_PORTP(BgL_iportz00_2462))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5421 = BgL_iportz00_2462; }  else 
{ 
obj_t BgL_auxz00_9381;
BgL_auxz00_9381 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2462); 
FAILURE(BgL_auxz00_9381,BFALSE,BFALSE);} 
BgL_res3768z00_5422 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5421); } 
BgL_arg2219z00_2733 = BgL_res3768z00_5422; } 
BgL_iportz00_2524 = BgL_iportz00_2462; 
BgL_lastzd2matchzd2_2525 = ((long)4); 
BgL_forwardz00_2526 = BgL_arg2218z00_2732; 
BgL_bufposz00_2527 = BgL_arg2219z00_2733; 
BgL_zc3z04anonymousza32086ze3z87_2528:
if(
(BgL_forwardz00_2526==BgL_bufposz00_2527))
{ /* Ieee/input.scm 186 */
bool_t BgL_test5446z00_9388;
{ /* Ieee/input.scm 186 */
bool_t BgL_res3705z00_5261;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5260;
if(
INPUT_PORTP(BgL_iportz00_2524))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5260 = BgL_iportz00_2524; }  else 
{ 
obj_t BgL_auxz00_9391;
BgL_auxz00_9391 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4994z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2524); 
FAILURE(BgL_auxz00_9391,BFALSE,BFALSE);} 
BgL_res3705z00_5261 = 
rgc_fill_buffer(BgL_inputzd2portzd2_5260); } 
BgL_test5446z00_9388 = BgL_res3705z00_5261; } 
if(BgL_test5446z00_9388)
{ /* Ieee/input.scm 186 */
long BgL_arg2089z00_2531;long BgL_arg2090z00_2532;
{ /* Ieee/input.scm 186 */
long BgL_res3706z00_5263;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5262;
if(
INPUT_PORTP(BgL_iportz00_2524))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5262 = BgL_iportz00_2524; }  else 
{ 
obj_t BgL_auxz00_9398;
BgL_auxz00_9398 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4994z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2524); 
FAILURE(BgL_auxz00_9398,BFALSE,BFALSE);} 
BgL_res3706z00_5263 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5262); } 
BgL_arg2089z00_2531 = BgL_res3706z00_5263; } 
{ /* Ieee/input.scm 186 */
long BgL_res3707z00_5265;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5264;
if(
INPUT_PORTP(BgL_iportz00_2524))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5264 = BgL_iportz00_2524; }  else 
{ 
obj_t BgL_auxz00_9405;
BgL_auxz00_9405 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4994z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2524); 
FAILURE(BgL_auxz00_9405,BFALSE,BFALSE);} 
BgL_res3707z00_5265 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5264); } 
BgL_arg2090z00_2532 = BgL_res3707z00_5265; } 
{ 
long BgL_bufposz00_9411;long BgL_forwardz00_9410;
BgL_forwardz00_9410 = BgL_arg2089z00_2531; 
BgL_bufposz00_9411 = BgL_arg2090z00_2532; 
BgL_bufposz00_2527 = BgL_bufposz00_9411; 
BgL_forwardz00_2526 = BgL_forwardz00_9410; 
goto BgL_zc3z04anonymousza32086ze3z87_2528;} }  else 
{ /* Ieee/input.scm 186 */
BgL_matchz00_2724 = BgL_lastzd2matchzd2_2525; } }  else 
{ /* Ieee/input.scm 186 */
int BgL_curz00_2533;
{ /* Ieee/input.scm 186 */
int BgL_res3708z00_5268;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5266;
if(
INPUT_PORTP(BgL_iportz00_2524))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5266 = BgL_iportz00_2524; }  else 
{ 
obj_t BgL_auxz00_9414;
BgL_auxz00_9414 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4994z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2524); 
FAILURE(BgL_auxz00_9414,BFALSE,BFALSE);} 
BgL_res3708z00_5268 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5266, BgL_forwardz00_2526); } 
BgL_curz00_2533 = BgL_res3708z00_5268; } 
{ /* Ieee/input.scm 186 */

if(
(
(long)(BgL_curz00_2533)==((long)13)))
{ /* Ieee/input.scm 186 */
BgL_iportz00_2539 = BgL_iportz00_2524; 
BgL_lastzd2matchzd2_2540 = BgL_lastzd2matchzd2_2525; 
BgL_forwardz00_2541 = 
(((long)1)+BgL_forwardz00_2526); 
BgL_bufposz00_2542 = BgL_bufposz00_2527; 
BgL_zc3z04anonymousza32096ze3z87_2543:
{ /* Ieee/input.scm 186 */
long BgL_newzd2matchzd2_2544;
{ /* Ieee/input.scm 186 */
long BgL_res3715z00_5285;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5283;
if(
INPUT_PORTP(BgL_iportz00_2539))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5283 = BgL_iportz00_2539; }  else 
{ 
obj_t BgL_auxz00_9424;
BgL_auxz00_9424 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4995z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2539); 
FAILURE(BgL_auxz00_9424,BFALSE,BFALSE);} 
BgL_res3715z00_5285 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5283, BgL_forwardz00_2541); } BgL_res3715z00_5285; } 
BgL_newzd2matchzd2_2544 = ((long)3); 
if(
(BgL_forwardz00_2541==BgL_bufposz00_2542))
{ /* Ieee/input.scm 186 */
bool_t BgL_test5454z00_9431;
{ /* Ieee/input.scm 186 */
bool_t BgL_res3717z00_5290;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5289;
if(
INPUT_PORTP(BgL_iportz00_2539))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5289 = BgL_iportz00_2539; }  else 
{ 
obj_t BgL_auxz00_9434;
BgL_auxz00_9434 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4995z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2539); 
FAILURE(BgL_auxz00_9434,BFALSE,BFALSE);} 
BgL_res3717z00_5290 = 
rgc_fill_buffer(BgL_inputzd2portzd2_5289); } 
BgL_test5454z00_9431 = BgL_res3717z00_5290; } 
if(BgL_test5454z00_9431)
{ /* Ieee/input.scm 186 */
long BgL_arg2100z00_2547;long BgL_arg2101z00_2548;
{ /* Ieee/input.scm 186 */
long BgL_res3718z00_5292;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5291;
if(
INPUT_PORTP(BgL_iportz00_2539))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5291 = BgL_iportz00_2539; }  else 
{ 
obj_t BgL_auxz00_9441;
BgL_auxz00_9441 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4995z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2539); 
FAILURE(BgL_auxz00_9441,BFALSE,BFALSE);} 
BgL_res3718z00_5292 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5291); } 
BgL_arg2100z00_2547 = BgL_res3718z00_5292; } 
{ /* Ieee/input.scm 186 */
long BgL_res3719z00_5294;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5293;
if(
INPUT_PORTP(BgL_iportz00_2539))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5293 = BgL_iportz00_2539; }  else 
{ 
obj_t BgL_auxz00_9448;
BgL_auxz00_9448 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4995z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2539); 
FAILURE(BgL_auxz00_9448,BFALSE,BFALSE);} 
BgL_res3719z00_5294 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5293); } 
BgL_arg2101z00_2548 = BgL_res3719z00_5294; } 
{ 
long BgL_bufposz00_9454;long BgL_forwardz00_9453;
BgL_forwardz00_9453 = BgL_arg2100z00_2547; 
BgL_bufposz00_9454 = BgL_arg2101z00_2548; 
BgL_bufposz00_2542 = BgL_bufposz00_9454; 
BgL_forwardz00_2541 = BgL_forwardz00_9453; 
goto BgL_zc3z04anonymousza32096ze3z87_2543;} }  else 
{ /* Ieee/input.scm 186 */
BgL_matchz00_2724 = BgL_newzd2matchzd2_2544; } }  else 
{ /* Ieee/input.scm 186 */
int BgL_curz00_2549;
{ /* Ieee/input.scm 186 */
int BgL_res3720z00_5297;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5295;
if(
INPUT_PORTP(BgL_iportz00_2539))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5295 = BgL_iportz00_2539; }  else 
{ 
obj_t BgL_auxz00_9457;
BgL_auxz00_9457 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4995z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2539); 
FAILURE(BgL_auxz00_9457,BFALSE,BFALSE);} 
BgL_res3720z00_5297 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5295, BgL_forwardz00_2541); } 
BgL_curz00_2549 = BgL_res3720z00_5297; } 
{ /* Ieee/input.scm 186 */

if(
(
(long)(BgL_curz00_2549)==((long)10)))
{ /* Ieee/input.scm 186 */
long BgL_arg2103z00_2551;
BgL_arg2103z00_2551 = 
(((long)1)+BgL_forwardz00_2541); 
{ /* Ieee/input.scm 186 */
long BgL_newzd2matchzd2_5302;
{ /* Ieee/input.scm 186 */
long BgL_res3723z00_5305;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5303;
if(
INPUT_PORTP(BgL_iportz00_2539))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5303 = BgL_iportz00_2539; }  else 
{ 
obj_t BgL_auxz00_9468;
BgL_auxz00_9468 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4995z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2539); 
FAILURE(BgL_auxz00_9468,BFALSE,BFALSE);} 
BgL_res3723z00_5305 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5303, BgL_arg2103z00_2551); } BgL_res3723z00_5305; } 
BgL_newzd2matchzd2_5302 = ((long)3); 
BgL_matchz00_2724 = BgL_newzd2matchzd2_5302; } }  else 
{ /* Ieee/input.scm 186 */
BgL_matchz00_2724 = BgL_newzd2matchzd2_2544; } } } } }  else 
{ /* Ieee/input.scm 186 */
if(
(
(long)(BgL_curz00_2533)==((long)10)))
{ /* Ieee/input.scm 186 */
long BgL_arg2094z00_2537;
BgL_arg2094z00_2537 = 
(((long)1)+BgL_forwardz00_2526); 
{ /* Ieee/input.scm 186 */
long BgL_newzd2matchzd2_5277;
{ /* Ieee/input.scm 186 */
long BgL_res3713z00_5280;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5278;
if(
INPUT_PORTP(BgL_iportz00_2524))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5278 = BgL_iportz00_2524; }  else 
{ 
obj_t BgL_auxz00_9480;
BgL_auxz00_9480 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4994z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2524); 
FAILURE(BgL_auxz00_9480,BFALSE,BFALSE);} 
BgL_res3713z00_5280 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5278, BgL_arg2094z00_2537); } BgL_res3713z00_5280; } 
BgL_newzd2matchzd2_5277 = ((long)3); 
BgL_matchz00_2724 = BgL_newzd2matchzd2_5277; } }  else 
{ /* Ieee/input.scm 186 */
BgL_iportz00_2508 = BgL_iportz00_2524; 
BgL_lastzd2matchzd2_2509 = BgL_lastzd2matchzd2_2525; 
BgL_forwardz00_2510 = 
(((long)1)+BgL_forwardz00_2526); 
BgL_bufposz00_2511 = BgL_bufposz00_2527; 
BgL_zc3z04anonymousza32076ze3z87_2512:
{ /* Ieee/input.scm 186 */
long BgL_newzd2matchzd2_2513;
{ /* Ieee/input.scm 186 */
long BgL_res3692z00_5230;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5228;
if(
INPUT_PORTP(BgL_iportz00_2508))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5228 = BgL_iportz00_2508; }  else 
{ 
obj_t BgL_auxz00_9487;
BgL_auxz00_9487 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4993z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2508); 
FAILURE(BgL_auxz00_9487,BFALSE,BFALSE);} 
BgL_res3692z00_5230 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5228, BgL_forwardz00_2510); } BgL_res3692z00_5230; } 
BgL_newzd2matchzd2_2513 = ((long)2); 
if(
(BgL_forwardz00_2510==BgL_bufposz00_2511))
{ /* Ieee/input.scm 186 */
bool_t BgL_test5465z00_9494;
{ /* Ieee/input.scm 186 */
bool_t BgL_res3694z00_5235;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5234;
if(
INPUT_PORTP(BgL_iportz00_2508))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5234 = BgL_iportz00_2508; }  else 
{ 
obj_t BgL_auxz00_9497;
BgL_auxz00_9497 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4993z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2508); 
FAILURE(BgL_auxz00_9497,BFALSE,BFALSE);} 
BgL_res3694z00_5235 = 
rgc_fill_buffer(BgL_inputzd2portzd2_5234); } 
BgL_test5465z00_9494 = BgL_res3694z00_5235; } 
if(BgL_test5465z00_9494)
{ /* Ieee/input.scm 186 */
long BgL_arg2079z00_2516;long BgL_arg2080z00_2517;
{ /* Ieee/input.scm 186 */
long BgL_res3695z00_5237;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5236;
if(
INPUT_PORTP(BgL_iportz00_2508))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5236 = BgL_iportz00_2508; }  else 
{ 
obj_t BgL_auxz00_9504;
BgL_auxz00_9504 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4993z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2508); 
FAILURE(BgL_auxz00_9504,BFALSE,BFALSE);} 
BgL_res3695z00_5237 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5236); } 
BgL_arg2079z00_2516 = BgL_res3695z00_5237; } 
{ /* Ieee/input.scm 186 */
long BgL_res3696z00_5239;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5238;
if(
INPUT_PORTP(BgL_iportz00_2508))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5238 = BgL_iportz00_2508; }  else 
{ 
obj_t BgL_auxz00_9511;
BgL_auxz00_9511 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4993z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2508); 
FAILURE(BgL_auxz00_9511,BFALSE,BFALSE);} 
BgL_res3696z00_5239 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5238); } 
BgL_arg2080z00_2517 = BgL_res3696z00_5239; } 
{ 
long BgL_bufposz00_9517;long BgL_forwardz00_9516;
BgL_forwardz00_9516 = BgL_arg2079z00_2516; 
BgL_bufposz00_9517 = BgL_arg2080z00_2517; 
BgL_bufposz00_2511 = BgL_bufposz00_9517; 
BgL_forwardz00_2510 = BgL_forwardz00_9516; 
goto BgL_zc3z04anonymousza32076ze3z87_2512;} }  else 
{ /* Ieee/input.scm 186 */
BgL_matchz00_2724 = BgL_newzd2matchzd2_2513; } }  else 
{ /* Ieee/input.scm 186 */
int BgL_curz00_2518;
{ /* Ieee/input.scm 186 */
int BgL_res3697z00_5242;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5240;
if(
INPUT_PORTP(BgL_iportz00_2508))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5240 = BgL_iportz00_2508; }  else 
{ 
obj_t BgL_auxz00_9520;
BgL_auxz00_9520 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4993z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2508); 
FAILURE(BgL_auxz00_9520,BFALSE,BFALSE);} 
BgL_res3697z00_5242 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5240, BgL_forwardz00_2510); } 
BgL_curz00_2518 = BgL_res3697z00_5242; } 
{ /* Ieee/input.scm 186 */

if(
(
(long)(BgL_curz00_2518)==((long)13)))
{ /* Ieee/input.scm 186 */
BgL_iportz00_2580 = BgL_iportz00_2508; 
BgL_lastzd2matchzd2_2581 = BgL_newzd2matchzd2_2513; 
BgL_forwardz00_2582 = 
(((long)1)+BgL_forwardz00_2510); 
BgL_bufposz00_2583 = BgL_bufposz00_2511; 
BgL_zc3z04anonymousza32117ze3z87_2584:
{ /* Ieee/input.scm 186 */
long BgL_newzd2matchzd2_2585;
{ /* Ieee/input.scm 186 */
long BgL_res3738z00_5345;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5343;
if(
INPUT_PORTP(BgL_iportz00_2580))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5343 = BgL_iportz00_2580; }  else 
{ 
obj_t BgL_auxz00_9530;
BgL_auxz00_9530 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4997z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2580); 
FAILURE(BgL_auxz00_9530,BFALSE,BFALSE);} 
BgL_res3738z00_5345 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5343, BgL_forwardz00_2582); } BgL_res3738z00_5345; } 
BgL_newzd2matchzd2_2585 = ((long)0); 
if(
(BgL_forwardz00_2582==BgL_bufposz00_2583))
{ /* Ieee/input.scm 186 */
bool_t BgL_test5473z00_9537;
{ /* Ieee/input.scm 186 */
bool_t BgL_res3740z00_5350;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5349;
if(
INPUT_PORTP(BgL_iportz00_2580))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5349 = BgL_iportz00_2580; }  else 
{ 
obj_t BgL_auxz00_9540;
BgL_auxz00_9540 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4997z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2580); 
FAILURE(BgL_auxz00_9540,BFALSE,BFALSE);} 
BgL_res3740z00_5350 = 
rgc_fill_buffer(BgL_inputzd2portzd2_5349); } 
BgL_test5473z00_9537 = BgL_res3740z00_5350; } 
if(BgL_test5473z00_9537)
{ /* Ieee/input.scm 186 */
long BgL_arg2120z00_2588;long BgL_arg2121z00_2589;
{ /* Ieee/input.scm 186 */
long BgL_res3741z00_5352;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5351;
if(
INPUT_PORTP(BgL_iportz00_2580))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5351 = BgL_iportz00_2580; }  else 
{ 
obj_t BgL_auxz00_9547;
BgL_auxz00_9547 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4997z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2580); 
FAILURE(BgL_auxz00_9547,BFALSE,BFALSE);} 
BgL_res3741z00_5352 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5351); } 
BgL_arg2120z00_2588 = BgL_res3741z00_5352; } 
{ /* Ieee/input.scm 186 */
long BgL_res3742z00_5354;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5353;
if(
INPUT_PORTP(BgL_iportz00_2580))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5353 = BgL_iportz00_2580; }  else 
{ 
obj_t BgL_auxz00_9554;
BgL_auxz00_9554 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4997z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2580); 
FAILURE(BgL_auxz00_9554,BFALSE,BFALSE);} 
BgL_res3742z00_5354 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5353); } 
BgL_arg2121z00_2589 = BgL_res3742z00_5354; } 
{ 
long BgL_bufposz00_9560;long BgL_forwardz00_9559;
BgL_forwardz00_9559 = BgL_arg2120z00_2588; 
BgL_bufposz00_9560 = BgL_arg2121z00_2589; 
BgL_bufposz00_2583 = BgL_bufposz00_9560; 
BgL_forwardz00_2582 = BgL_forwardz00_9559; 
goto BgL_zc3z04anonymousza32117ze3z87_2584;} }  else 
{ /* Ieee/input.scm 186 */
BgL_matchz00_2724 = BgL_newzd2matchzd2_2585; } }  else 
{ /* Ieee/input.scm 186 */
int BgL_curz00_2590;
{ /* Ieee/input.scm 186 */
int BgL_res3743z00_5357;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5355;
if(
INPUT_PORTP(BgL_iportz00_2580))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5355 = BgL_iportz00_2580; }  else 
{ 
obj_t BgL_auxz00_9563;
BgL_auxz00_9563 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4997z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2580); 
FAILURE(BgL_auxz00_9563,BFALSE,BFALSE);} 
BgL_res3743z00_5357 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5355, BgL_forwardz00_2582); } 
BgL_curz00_2590 = BgL_res3743z00_5357; } 
{ /* Ieee/input.scm 186 */

if(
(
(long)(BgL_curz00_2590)==((long)10)))
{ /* Ieee/input.scm 186 */
long BgL_arg2123z00_2592;
BgL_arg2123z00_2592 = 
(((long)1)+BgL_forwardz00_2582); 
{ /* Ieee/input.scm 186 */
long BgL_newzd2matchzd2_5362;
{ /* Ieee/input.scm 186 */
long BgL_res3746z00_5365;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5363;
if(
INPUT_PORTP(BgL_iportz00_2580))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5363 = BgL_iportz00_2580; }  else 
{ 
obj_t BgL_auxz00_9574;
BgL_auxz00_9574 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4997z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2580); 
FAILURE(BgL_auxz00_9574,BFALSE,BFALSE);} 
BgL_res3746z00_5365 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5363, BgL_arg2123z00_2592); } BgL_res3746z00_5365; } 
BgL_newzd2matchzd2_5362 = ((long)1); 
BgL_matchz00_2724 = BgL_newzd2matchzd2_5362; } }  else 
{ /* Ieee/input.scm 186 */
BgL_matchz00_2724 = BgL_newzd2matchzd2_2585; } } } } }  else 
{ /* Ieee/input.scm 186 */
if(
(
(long)(BgL_curz00_2518)==((long)10)))
{ /* Ieee/input.scm 186 */
long BgL_arg2084z00_2522;
BgL_arg2084z00_2522 = 
(((long)1)+BgL_forwardz00_2510); 
{ /* Ieee/input.scm 186 */
long BgL_newzd2matchzd2_5251;
{ /* Ieee/input.scm 186 */
long BgL_res3702z00_5254;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5252;
if(
INPUT_PORTP(BgL_iportz00_2508))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5252 = BgL_iportz00_2508; }  else 
{ 
obj_t BgL_auxz00_9586;
BgL_auxz00_9586 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4993z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2508); 
FAILURE(BgL_auxz00_9586,BFALSE,BFALSE);} 
BgL_res3702z00_5254 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5252, BgL_arg2084z00_2522); } BgL_res3702z00_5254; } 
BgL_newzd2matchzd2_5251 = ((long)0); 
BgL_matchz00_2724 = BgL_newzd2matchzd2_5251; } }  else 
{ /* Ieee/input.scm 186 */
BgL_iportz00_2552 = BgL_iportz00_2508; 
BgL_lastzd2matchzd2_2553 = BgL_newzd2matchzd2_2513; 
BgL_forwardz00_2554 = 
(((long)1)+BgL_forwardz00_2510); 
BgL_bufposz00_2555 = BgL_bufposz00_2511; 
BgL_zc3z04anonymousza32104ze3z87_2556:
{ /* Ieee/input.scm 186 */
long BgL_newzd2matchzd2_2557;
{ /* Ieee/input.scm 186 */
long BgL_res3724z00_5308;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5306;
if(
INPUT_PORTP(BgL_iportz00_2552))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5306 = BgL_iportz00_2552; }  else 
{ 
obj_t BgL_auxz00_9593;
BgL_auxz00_9593 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4996z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2552); 
FAILURE(BgL_auxz00_9593,BFALSE,BFALSE);} 
BgL_res3724z00_5308 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5306, BgL_forwardz00_2554); } BgL_res3724z00_5308; } 
BgL_newzd2matchzd2_2557 = ((long)2); 
if(
(BgL_forwardz00_2554==BgL_bufposz00_2555))
{ /* Ieee/input.scm 186 */
bool_t BgL_test5484z00_9600;
{ /* Ieee/input.scm 186 */
bool_t BgL_res3726z00_5313;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5312;
if(
INPUT_PORTP(BgL_iportz00_2552))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5312 = BgL_iportz00_2552; }  else 
{ 
obj_t BgL_auxz00_9603;
BgL_auxz00_9603 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4996z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2552); 
FAILURE(BgL_auxz00_9603,BFALSE,BFALSE);} 
BgL_res3726z00_5313 = 
rgc_fill_buffer(BgL_inputzd2portzd2_5312); } 
BgL_test5484z00_9600 = BgL_res3726z00_5313; } 
if(BgL_test5484z00_9600)
{ /* Ieee/input.scm 186 */
long BgL_arg2107z00_2560;long BgL_arg2108z00_2561;
{ /* Ieee/input.scm 186 */
long BgL_res3727z00_5315;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5314;
if(
INPUT_PORTP(BgL_iportz00_2552))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5314 = BgL_iportz00_2552; }  else 
{ 
obj_t BgL_auxz00_9610;
BgL_auxz00_9610 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4996z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2552); 
FAILURE(BgL_auxz00_9610,BFALSE,BFALSE);} 
BgL_res3727z00_5315 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5314); } 
BgL_arg2107z00_2560 = BgL_res3727z00_5315; } 
{ /* Ieee/input.scm 186 */
long BgL_res3728z00_5317;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5316;
if(
INPUT_PORTP(BgL_iportz00_2552))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5316 = BgL_iportz00_2552; }  else 
{ 
obj_t BgL_auxz00_9617;
BgL_auxz00_9617 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4996z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2552); 
FAILURE(BgL_auxz00_9617,BFALSE,BFALSE);} 
BgL_res3728z00_5317 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5316); } 
BgL_arg2108z00_2561 = BgL_res3728z00_5317; } 
{ 
long BgL_bufposz00_9623;long BgL_forwardz00_9622;
BgL_forwardz00_9622 = BgL_arg2107z00_2560; 
BgL_bufposz00_9623 = BgL_arg2108z00_2561; 
BgL_bufposz00_2555 = BgL_bufposz00_9623; 
BgL_forwardz00_2554 = BgL_forwardz00_9622; 
goto BgL_zc3z04anonymousza32104ze3z87_2556;} }  else 
{ /* Ieee/input.scm 186 */
BgL_matchz00_2724 = BgL_newzd2matchzd2_2557; } }  else 
{ /* Ieee/input.scm 186 */
int BgL_curz00_2562;
{ /* Ieee/input.scm 186 */
int BgL_res3729z00_5320;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5318;
if(
INPUT_PORTP(BgL_iportz00_2552))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5318 = BgL_iportz00_2552; }  else 
{ 
obj_t BgL_auxz00_9626;
BgL_auxz00_9626 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4996z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2552); 
FAILURE(BgL_auxz00_9626,BFALSE,BFALSE);} 
BgL_res3729z00_5320 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5318, BgL_forwardz00_2554); } 
BgL_curz00_2562 = BgL_res3729z00_5320; } 
{ /* Ieee/input.scm 186 */

if(
(
(long)(BgL_curz00_2562)==((long)13)))
{ 
long BgL_bufposz00_9638;long BgL_forwardz00_9636;long BgL_lastzd2matchzd2_9635;obj_t BgL_iportz00_9634;
BgL_iportz00_9634 = BgL_iportz00_2552; 
BgL_lastzd2matchzd2_9635 = BgL_newzd2matchzd2_2557; 
BgL_forwardz00_9636 = 
(((long)1)+BgL_forwardz00_2554); 
BgL_bufposz00_9638 = BgL_bufposz00_2555; 
BgL_bufposz00_2583 = BgL_bufposz00_9638; 
BgL_forwardz00_2582 = BgL_forwardz00_9636; 
BgL_lastzd2matchzd2_2581 = BgL_lastzd2matchzd2_9635; 
BgL_iportz00_2580 = BgL_iportz00_9634; 
goto BgL_zc3z04anonymousza32117ze3z87_2584;}  else 
{ /* Ieee/input.scm 186 */
if(
(
(long)(BgL_curz00_2562)==((long)10)))
{ /* Ieee/input.scm 186 */
long BgL_arg2112z00_2566;
BgL_arg2112z00_2566 = 
(((long)1)+BgL_forwardz00_2554); 
{ /* Ieee/input.scm 186 */
long BgL_newzd2matchzd2_5329;
{ /* Ieee/input.scm 186 */
long BgL_res3734z00_5332;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5330;
if(
INPUT_PORTP(BgL_iportz00_2552))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5330 = BgL_iportz00_2552; }  else 
{ 
obj_t BgL_auxz00_9645;
BgL_auxz00_9645 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4996z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2552); 
FAILURE(BgL_auxz00_9645,BFALSE,BFALSE);} 
BgL_res3734z00_5332 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5330, BgL_arg2112z00_2566); } BgL_res3734z00_5332; } 
BgL_newzd2matchzd2_5329 = ((long)0); 
BgL_matchz00_2724 = BgL_newzd2matchzd2_5329; } }  else 
{ 
long BgL_forwardz00_9651;long BgL_lastzd2matchzd2_9650;
BgL_lastzd2matchzd2_9650 = BgL_newzd2matchzd2_2557; 
BgL_forwardz00_9651 = 
(((long)1)+BgL_forwardz00_2554); 
BgL_forwardz00_2554 = BgL_forwardz00_9651; 
BgL_lastzd2matchzd2_2553 = BgL_lastzd2matchzd2_9650; 
goto BgL_zc3z04anonymousza32104ze3z87_2556;} } } } } } } } } } } } } } } 
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5423;
if(
INPUT_PORTP(BgL_iportz00_2462))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5423 = BgL_iportz00_2462; }  else 
{ 
obj_t BgL_auxz00_9657;
BgL_auxz00_9657 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2462); 
FAILURE(BgL_auxz00_9657,BFALSE,BFALSE);} 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_5423); } 
switch( BgL_matchz00_2724) { case ((long)4) : 

{ /* Ieee/input.scm 186 */
bool_t BgL_test5493z00_9662;
{ /* Ieee/input.scm 186 */
long BgL_arg2206z00_2714;
{ /* Ieee/input.scm 186 */
long BgL_res3763z00_5412;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5411;
if(
INPUT_PORTP(BgL_iportz00_2462))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5411 = BgL_iportz00_2462; }  else 
{ 
obj_t BgL_auxz00_9665;
BgL_auxz00_9665 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4910z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2462); 
FAILURE(BgL_auxz00_9665,BFALSE,BFALSE);} 
BgL_res3763z00_5412 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_5411); } 
BgL_arg2206z00_2714 = BgL_res3763z00_5412; } 
BgL_test5493z00_9662 = 
(BgL_arg2206z00_2714==((long)0)); } 
if(BgL_test5493z00_9662)
{ /* Ieee/input.scm 186 */
return BEOF;}  else 
{ /* Ieee/input.scm 186 */
unsigned char BgL_res3765z00_5416;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5415;
if(
INPUT_PORTP(BgL_iportz00_2462))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5415 = BgL_iportz00_2462; }  else 
{ 
obj_t BgL_auxz00_9673;
BgL_auxz00_9673 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4910z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2462); 
FAILURE(BgL_auxz00_9673,BFALSE,BFALSE);} 
BgL_res3765z00_5416 = 
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_5415); } 
return 
BCHAR(BgL_res3765z00_5416);} } break;case ((long)3) : 

return BGl_string4998z00zz__r4_input_6_10_2z00;break;case ((long)2) : 

{ /* Ieee/input.scm 193 */
obj_t BgL_res3771z00_5430;
{ /* Ieee/input.scm 186 */
long BgL_arg2132z00_5424;
{ /* Ieee/input.scm 186 */
long BgL_res3769z00_5426;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5425;
if(
INPUT_PORTP(BgL_iportz00_2462))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5425 = BgL_iportz00_2462; }  else 
{ 
obj_t BgL_auxz00_9681;
BgL_auxz00_9681 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2462); 
FAILURE(BgL_auxz00_9681,BFALSE,BFALSE);} 
BgL_res3769z00_5426 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_5425); } 
BgL_arg2132z00_5424 = BgL_res3769z00_5426; } 
{ /* Ieee/input.scm 186 */
obj_t BgL_res3770z00_5429;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5427;
if(
INPUT_PORTP(BgL_iportz00_2462))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5427 = BgL_iportz00_2462; }  else 
{ 
obj_t BgL_auxz00_9688;
BgL_auxz00_9688 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2462); 
FAILURE(BgL_auxz00_9688,BFALSE,BFALSE);} 
BgL_res3770z00_5429 = 
rgc_buffer_substring(BgL_inputzd2portzd2_5427, ((long)0), BgL_arg2132z00_5424); } 
BgL_res3771z00_5430 = BgL_res3770z00_5429; } } 
return BgL_res3771z00_5430;} break;case ((long)1) : 

{ /* Ieee/input.scm 191 */
long BgL_arg2214z00_2728;
{ /* Ieee/input.scm 191 */
long BgL_arg2215z00_2729;
{ /* Ieee/input.scm 186 */
long BgL_res3772z00_5432;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5431;
if(
INPUT_PORTP(BgL_iportz00_2462))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5431 = BgL_iportz00_2462; }  else 
{ 
obj_t BgL_auxz00_9695;
BgL_auxz00_9695 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2462); 
FAILURE(BgL_auxz00_9695,BFALSE,BFALSE);} 
BgL_res3772z00_5432 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_5431); } 
BgL_arg2215z00_2729 = BgL_res3772z00_5432; } 
BgL_arg2214z00_2728 = 
(BgL_arg2215z00_2729-((long)2)); } 
BgL_minz00_2617 = 
(int)(((long)0)); 
BgL_maxz00_2618 = 
(int)(BgL_arg2214z00_2728); 
BgL_lambda2133z00_2619:
if(
(
(long)(BgL_maxz00_2618)<
(long)(BgL_minz00_2617)))
{ /* Ieee/input.scm 186 */
long BgL_arg2135z00_2621;
{ /* Ieee/input.scm 186 */
long BgL_res3752z00_5384;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5383;
if(
INPUT_PORTP(BgL_iportz00_2462))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5383 = BgL_iportz00_2462; }  else 
{ 
obj_t BgL_auxz00_9707;
BgL_auxz00_9707 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4911z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2462); 
FAILURE(BgL_auxz00_9707,BFALSE,BFALSE);} 
BgL_res3752z00_5384 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_5383); } 
BgL_arg2135z00_2621 = BgL_res3752z00_5384; } 
{ /* Ieee/input.scm 186 */
long BgL_za72za7_5386;
BgL_za72za7_5386 = 
(long)(BgL_maxz00_2618); 
BgL_maxz00_2618 = 
(int)(
(BgL_arg2135z00_2621+BgL_za72za7_5386)); } }  else 
{ /* Ieee/input.scm 186 */BFALSE; } 
{ /* Ieee/input.scm 186 */
bool_t BgL_test5501z00_9715;
if(
(
(long)(BgL_minz00_2617)>=((long)0)))
{ /* Ieee/input.scm 186 */
if(
(
(long)(BgL_maxz00_2618)>=
(long)(BgL_minz00_2617)))
{ /* Ieee/input.scm 186 */
long BgL_arg2144z00_2632;
{ /* Ieee/input.scm 186 */
long BgL_res3756z00_5394;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5393;
if(
INPUT_PORTP(BgL_iportz00_2462))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5393 = BgL_iportz00_2462; }  else 
{ 
obj_t BgL_auxz00_9725;
BgL_auxz00_9725 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4911z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2462); 
FAILURE(BgL_auxz00_9725,BFALSE,BFALSE);} 
BgL_res3756z00_5394 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_5393); } 
BgL_arg2144z00_2632 = BgL_res3756z00_5394; } 
BgL_test5501z00_9715 = 
(
(long)(BgL_maxz00_2618)<=BgL_arg2144z00_2632); }  else 
{ /* Ieee/input.scm 186 */
BgL_test5501z00_9715 = ((bool_t)0)
; } }  else 
{ /* Ieee/input.scm 186 */
BgL_test5501z00_9715 = ((bool_t)0)
; } 
if(BgL_test5501z00_9715)
{ /* Ieee/input.scm 186 */
obj_t BgL_res3758z00_5401;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5398;long BgL_startz00_5399;long BgL_stopz00_5400;
if(
INPUT_PORTP(BgL_iportz00_2462))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5398 = BgL_iportz00_2462; }  else 
{ 
obj_t BgL_auxz00_9734;
BgL_auxz00_9734 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4911z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2462); 
FAILURE(BgL_auxz00_9734,BFALSE,BFALSE);} 
BgL_startz00_5399 = 
(long)(BgL_minz00_2617); 
BgL_stopz00_5400 = 
(long)(BgL_maxz00_2618); 
BgL_res3758z00_5401 = 
rgc_buffer_substring(BgL_inputzd2portzd2_5398, BgL_startz00_5399, BgL_stopz00_5400); } 
return BgL_res3758z00_5401;}  else 
{ /* Ieee/input.scm 186 */
obj_t BgL_arg2140z00_2626;obj_t BgL_arg2141z00_2627;
{ /* Ieee/input.scm 186 */
obj_t BgL_arg2142z00_2628;
{ /* Ieee/input.scm 186 */
obj_t BgL_res3761z00_5408;
{ /* Ieee/input.scm 186 */
long BgL_arg2132z00_5402;
{ /* Ieee/input.scm 186 */
long BgL_res3759z00_5404;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5403;
if(
INPUT_PORTP(BgL_iportz00_2462))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5403 = BgL_iportz00_2462; }  else 
{ 
obj_t BgL_auxz00_9743;
BgL_auxz00_9743 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4911z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2462); 
FAILURE(BgL_auxz00_9743,BFALSE,BFALSE);} 
BgL_res3759z00_5404 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_5403); } 
BgL_arg2132z00_5402 = BgL_res3759z00_5404; } 
{ /* Ieee/input.scm 186 */
obj_t BgL_res3760z00_5407;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5405;
if(
INPUT_PORTP(BgL_iportz00_2462))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5405 = BgL_iportz00_2462; }  else 
{ 
obj_t BgL_auxz00_9750;
BgL_auxz00_9750 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4911z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2462); 
FAILURE(BgL_auxz00_9750,BFALSE,BFALSE);} 
BgL_res3760z00_5407 = 
rgc_buffer_substring(BgL_inputzd2portzd2_5405, ((long)0), BgL_arg2132z00_5402); } 
BgL_res3761z00_5408 = BgL_res3760z00_5407; } } 
BgL_arg2142z00_2628 = BgL_res3761z00_5408; } 
{ /* Ieee/input.scm 186 */
obj_t BgL_list2143z00_2629;
BgL_list2143z00_2629 = 
MAKE_YOUNG_PAIR(BgL_arg2142z00_2628, BNIL); 
BgL_arg2140z00_2626 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string4912z00zz__r4_input_6_10_2z00, BgL_list2143z00_2629); } } 
BgL_arg2141z00_2627 = 
MAKE_YOUNG_PAIR(
BINT(BgL_minz00_2617), 
BINT(BgL_maxz00_2618)); 
{ /* Ieee/input.scm 186 */
obj_t BgL_aux4531z00_7058;
BgL_aux4531z00_7058 = 
BGl_errorz00zz__errorz00(BGl_string4911z00zz__r4_input_6_10_2z00, BgL_arg2140z00_2626, BgL_arg2141z00_2627); 
if(
STRINGP(BgL_aux4531z00_7058))
{ /* Ieee/input.scm 186 */
return BgL_aux4531z00_7058;}  else 
{ 
obj_t BgL_auxz00_9763;
BgL_auxz00_9763 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4911z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_aux4531z00_7058); 
FAILURE(BgL_auxz00_9763,BFALSE,BFALSE);} } } } } break;case ((long)0) : 

{ /* Ieee/input.scm 189 */
long BgL_arg2216z00_2730;
{ /* Ieee/input.scm 189 */
long BgL_arg2217z00_2731;
{ /* Ieee/input.scm 186 */
long BgL_res3774z00_5436;
{ /* Ieee/input.scm 186 */
obj_t BgL_inputzd2portzd2_5435;
if(
INPUT_PORTP(BgL_iportz00_2462))
{ /* Ieee/input.scm 186 */
BgL_inputzd2portzd2_5435 = BgL_iportz00_2462; }  else 
{ 
obj_t BgL_auxz00_9771;
BgL_auxz00_9771 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)8196)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2462); 
FAILURE(BgL_auxz00_9771,BFALSE,BFALSE);} 
BgL_res3774z00_5436 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_5435); } 
BgL_arg2217z00_2731 = BgL_res3774z00_5436; } 
BgL_arg2216z00_2730 = 
(BgL_arg2217z00_2731-((long)1)); } 
{ 
int BgL_maxz00_9779;int BgL_minz00_9777;
BgL_minz00_9777 = 
(int)(((long)0)); 
BgL_maxz00_9779 = 
(int)(BgL_arg2216z00_2730); 
BgL_maxz00_2618 = BgL_maxz00_9779; 
BgL_minz00_2617 = BgL_minz00_9777; 
goto BgL_lambda2133z00_2619;} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4908z00zz__r4_input_6_10_2z00, BGl_string4909z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_2724));} } } } } }  else 
{ /* Ieee/input.scm 201 */
obj_t BgL_g1080z00_2771;obj_t BgL_g1081z00_2772;
BgL_g1080z00_2771 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_26); 
{ /* Ieee/string.scm 168 */

BgL_g1081z00_2772 = 
make_string(((long)100), ((unsigned char)' ')); } 
{ 
obj_t BgL_cz00_2774;long BgL_wz00_2775;long BgL_mz00_2776;obj_t BgL_accz00_2777;
BgL_cz00_2774 = BgL_g1080z00_2771; 
BgL_wz00_2775 = ((long)0); 
BgL_mz00_2776 = ((long)100); 
BgL_accz00_2777 = BgL_g1081z00_2772; 
BgL_zc3z04anonymousza32220ze3z87_2778:
{ /* Ieee/input.scm 206 */
bool_t BgL_test5510z00_9786;
{ /* Ieee/input.scm 206 */
bool_t BgL_res3782z00_5452;
BgL_res3782z00_5452 = 
EOF_OBJECTP(BgL_cz00_2774); 
BgL_test5510z00_9786 = BgL_res3782z00_5452; } 
if(BgL_test5510z00_9786)
{ /* Ieee/input.scm 206 */
if(
(BgL_wz00_2775==((long)0)))
{ /* Ieee/input.scm 208 */
return BgL_cz00_2774;}  else 
{ /* Ieee/input.scm 208 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_accz00_2777, ((long)0), BgL_wz00_2775);} }  else 
{ /* Ieee/input.scm 206 */
if(
(BgL_wz00_2775==BgL_mz00_2776))
{ /* Ieee/input.scm 213 */
long BgL_arg2224z00_2782;obj_t BgL_arg2225z00_2783;
BgL_arg2224z00_2782 = 
(BgL_mz00_2776*((long)2)); 
{ /* Ieee/input.scm 214 */
obj_t BgL_newzd2acczd2_2784;
{ /* Ieee/input.scm 214 */
long BgL_arg2226z00_2785;
BgL_arg2226z00_2785 = 
(BgL_mz00_2776*((long)2)); 
{ /* Ieee/string.scm 168 */

BgL_newzd2acczd2_2784 = 
make_string(BgL_arg2226z00_2785, ((unsigned char)' ')); } } 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_accz00_2777, ((long)0), BgL_newzd2acczd2_2784, ((long)0), BgL_mz00_2776); 
BgL_arg2225z00_2783 = BgL_newzd2acczd2_2784; } 
{ 
obj_t BgL_accz00_9798;long BgL_mz00_9797;
BgL_mz00_9797 = BgL_arg2224z00_2782; 
BgL_accz00_9798 = BgL_arg2225z00_2783; 
BgL_accz00_2777 = BgL_accz00_9798; 
BgL_mz00_2776 = BgL_mz00_9797; 
goto BgL_zc3z04anonymousza32220ze3z87_2778;} }  else 
{ /* Ieee/input.scm 217 */
bool_t BgL_test5513z00_9799;
{ /* Ieee/input.scm 217 */
unsigned char BgL_char1z00_5464;
{ /* Ieee/input.scm 217 */
obj_t BgL_tmpz00_9800;
if(
CHARP(BgL_cz00_2774))
{ /* Ieee/input.scm 217 */
BgL_tmpz00_9800 = BgL_cz00_2774
; }  else 
{ 
obj_t BgL_auxz00_9803;
BgL_auxz00_9803 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9091)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5000z00zz__r4_input_6_10_2z00, BgL_cz00_2774); 
FAILURE(BgL_auxz00_9803,BFALSE,BFALSE);} 
BgL_char1z00_5464 = 
CCHAR(BgL_tmpz00_9800); } 
BgL_test5513z00_9799 = 
(BgL_char1z00_5464==((unsigned char)13)); } 
if(BgL_test5513z00_9799)
{ /* Ieee/input.scm 218 */
obj_t BgL_c2z00_2789;
BgL_c2z00_2789 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_26); 
{ /* Ieee/input.scm 219 */
bool_t BgL_test5515z00_9810;
{ /* Ieee/input.scm 219 */
unsigned char BgL_char1z00_5467;
{ /* Ieee/input.scm 219 */
obj_t BgL_tmpz00_9811;
if(
CHARP(BgL_c2z00_2789))
{ /* Ieee/input.scm 219 */
BgL_tmpz00_9811 = BgL_c2z00_2789
; }  else 
{ 
obj_t BgL_auxz00_9814;
BgL_auxz00_9814 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9152)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5000z00zz__r4_input_6_10_2z00, BgL_c2z00_2789); 
FAILURE(BgL_auxz00_9814,BFALSE,BFALSE);} 
BgL_char1z00_5467 = 
CCHAR(BgL_tmpz00_9811); } 
BgL_test5515z00_9810 = 
(BgL_char1z00_5467==((unsigned char)10)); } 
if(BgL_test5515z00_9810)
{ /* Ieee/input.scm 219 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_accz00_2777, ((long)0), BgL_wz00_2775);}  else 
{ /* Ieee/input.scm 219 */
{ /* Ieee/input.scm 222 */
unsigned char BgL_charz00_5472;
{ /* Ieee/input.scm 222 */
obj_t BgL_tmpz00_9821;
if(
CHARP(BgL_cz00_2774))
{ /* Ieee/input.scm 222 */
BgL_tmpz00_9821 = BgL_cz00_2774
; }  else 
{ 
obj_t BgL_auxz00_9824;
BgL_auxz00_9824 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9229)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5000z00zz__r4_input_6_10_2z00, BgL_cz00_2774); 
FAILURE(BgL_auxz00_9824,BFALSE,BFALSE);} 
BgL_charz00_5472 = 
CCHAR(BgL_tmpz00_9821); } 
{ /* Ieee/input.scm 222 */
long BgL_l4169z00_6690;
BgL_l4169z00_6690 = 
STRING_LENGTH(BgL_accz00_2777); 
if(
BOUND_CHECK(BgL_wz00_2775, BgL_l4169z00_6690))
{ /* Ieee/input.scm 222 */
STRING_SET(BgL_accz00_2777, BgL_wz00_2775, BgL_charz00_5472); }  else 
{ 
obj_t BgL_auxz00_9833;
BgL_auxz00_9833 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9210)), BGl_string5001z00zz__r4_input_6_10_2z00, BgL_accz00_2777, 
(int)(BgL_l4169z00_6690), 
(int)(BgL_wz00_2775)); 
FAILURE(BgL_auxz00_9833,BFALSE,BFALSE);} } } 
{ 
long BgL_wz00_9840;obj_t BgL_cz00_9839;
BgL_cz00_9839 = BgL_c2z00_2789; 
BgL_wz00_9840 = 
(BgL_wz00_2775+((long)1)); 
BgL_wz00_2775 = BgL_wz00_9840; 
BgL_cz00_2774 = BgL_cz00_9839; 
goto BgL_zc3z04anonymousza32220ze3z87_2778;} } } }  else 
{ /* Ieee/input.scm 224 */
bool_t BgL_test5519z00_9842;
{ /* Ieee/input.scm 224 */
unsigned char BgL_char1z00_5475;
{ /* Ieee/input.scm 224 */
obj_t BgL_tmpz00_9843;
if(
CHARP(BgL_cz00_2774))
{ /* Ieee/input.scm 224 */
BgL_tmpz00_9843 = BgL_cz00_2774
; }  else 
{ 
obj_t BgL_auxz00_9846;
BgL_auxz00_9846 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9280)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5000z00zz__r4_input_6_10_2z00, BgL_cz00_2774); 
FAILURE(BgL_auxz00_9846,BFALSE,BFALSE);} 
BgL_char1z00_5475 = 
CCHAR(BgL_tmpz00_9843); } 
BgL_test5519z00_9842 = 
(BgL_char1z00_5475==((unsigned char)10)); } 
if(BgL_test5519z00_9842)
{ /* Ieee/input.scm 224 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_accz00_2777, ((long)0), BgL_wz00_2775);}  else 
{ /* Ieee/input.scm 224 */
{ /* Ieee/input.scm 229 */
unsigned char BgL_charz00_5480;
{ /* Ieee/input.scm 229 */
obj_t BgL_tmpz00_9853;
if(
CHARP(BgL_cz00_2774))
{ /* Ieee/input.scm 229 */
BgL_tmpz00_9853 = BgL_cz00_2774
; }  else 
{ 
obj_t BgL_auxz00_9856;
BgL_auxz00_9856 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9425)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5000z00zz__r4_input_6_10_2z00, BgL_cz00_2774); 
FAILURE(BgL_auxz00_9856,BFALSE,BFALSE);} 
BgL_charz00_5480 = 
CCHAR(BgL_tmpz00_9853); } 
{ /* Ieee/input.scm 229 */
long BgL_l4173z00_6694;
BgL_l4173z00_6694 = 
STRING_LENGTH(BgL_accz00_2777); 
if(
BOUND_CHECK(BgL_wz00_2775, BgL_l4173z00_6694))
{ /* Ieee/input.scm 229 */
STRING_SET(BgL_accz00_2777, BgL_wz00_2775, BgL_charz00_5480); }  else 
{ 
obj_t BgL_auxz00_9865;
BgL_auxz00_9865 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9406)), BGl_string5001z00zz__r4_input_6_10_2z00, BgL_accz00_2777, 
(int)(BgL_l4173z00_6694), 
(int)(BgL_wz00_2775)); 
FAILURE(BgL_auxz00_9865,BFALSE,BFALSE);} } } 
{ 
long BgL_wz00_9873;obj_t BgL_cz00_9871;
BgL_cz00_9871 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_26); 
BgL_wz00_9873 = 
(BgL_wz00_2775+((long)1)); 
BgL_wz00_2775 = BgL_wz00_9873; 
BgL_cz00_2774 = BgL_cz00_9871; 
goto BgL_zc3z04anonymousza32220ze3z87_2778;} } } } } } } } } } 

}



/* _read-line-newline */
obj_t BGl__readzd2linezd2newlinez00zz__r4_input_6_10_2z00(obj_t BgL_env1265z00_31, obj_t BgL_opt1264z00_30)
{
{ /* Ieee/input.scm 235 */
{ /* Ieee/input.scm 235 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1264z00_30)) { case ((long)0) : 

{ /* Ieee/input.scm 235 */
obj_t BgL_ipz00_2802;
{ /* Ieee/input.scm 235 */
obj_t BgL_res3793z00_5484;
{ /* Ieee/input.scm 235 */
obj_t BgL_tmpz00_9875;
BgL_tmpz00_9875 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3793z00_5484 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_9875); } 
BgL_ipz00_2802 = BgL_res3793z00_5484; } 
{ /* Ieee/input.scm 235 */

return 
BGl_readzd2linezd2newlinez00zz__r4_input_6_10_2z00(BgL_ipz00_2802);} } break;case ((long)1) : 

{ /* Ieee/input.scm 235 */
obj_t BgL_ipz00_2803;
BgL_ipz00_2803 = 
VECTOR_REF(BgL_opt1264z00_30,((long)0)); 
{ /* Ieee/input.scm 235 */

return 
BGl_readzd2linezd2newlinez00zz__r4_input_6_10_2z00(BgL_ipz00_2803);} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol5002z00zz__r4_input_6_10_2z00, BGl_string4977z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1264z00_30)));} } } } 

}



/* read-line-newline */
BGL_EXPORTED_DEF obj_t BGl_readzd2linezd2newlinez00zz__r4_input_6_10_2z00(obj_t BgL_ipz00_29)
{
{ /* Ieee/input.scm 235 */
{ /* Ieee/input.scm 236 */
bool_t BgL_test5523z00_9886;
{ /* Ieee/input.scm 236 */
long BgL_arg2409z00_3132;
{ /* Ieee/input.scm 236 */
obj_t BgL_tmpz00_9887;
if(
INPUT_PORTP(BgL_ipz00_29))
{ /* Ieee/input.scm 236 */
BgL_tmpz00_9887 = BgL_ipz00_29
; }  else 
{ 
obj_t BgL_auxz00_9890;
BgL_auxz00_9890 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9799)), BGl_string5003z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_29); 
FAILURE(BgL_auxz00_9890,BFALSE,BFALSE);} 
BgL_arg2409z00_3132 = 
BGL_INPUT_PORT_BUFSIZ(BgL_tmpz00_9887); } 
BgL_test5523z00_9886 = 
(BgL_arg2409z00_3132>((long)2)); } 
if(BgL_test5523z00_9886)
{ 
obj_t BgL_iportz00_2809;
BgL_iportz00_2809 = BgL_ipz00_29; 
{ 
obj_t BgL_iportz00_2919;long BgL_lastzd2matchzd2_2920;long BgL_forwardz00_2921;long BgL_bufposz00_2922;obj_t BgL_iportz00_2903;long BgL_lastzd2matchzd2_2904;long BgL_forwardz00_2905;long BgL_bufposz00_2906;obj_t BgL_iportz00_2888;long BgL_lastzd2matchzd2_2889;long BgL_forwardz00_2890;long BgL_bufposz00_2891;obj_t BgL_iportz00_2875;long BgL_lastzd2matchzd2_2876;long BgL_forwardz00_2877;long BgL_bufposz00_2878;obj_t BgL_iportz00_2853;long BgL_lastzd2matchzd2_2854;long BgL_forwardz00_2855;long BgL_bufposz00_2856;
{ /* Ieee/input.scm 237 */
bool_t BgL_test5525z00_9896;
{ /* Ieee/input.scm 237 */
obj_t BgL_arg2243z00_2852;
{ /* Ieee/input.scm 237 */
obj_t BgL_res3862z00_5653;
if(
INPUT_PORTP(BgL_iportz00_2809))
{ /* Ieee/input.scm 237 */
BgL_res3862z00_5653 = BgL_iportz00_2809; }  else 
{ 
obj_t BgL_auxz00_9899;
BgL_auxz00_9899 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2809); 
FAILURE(BgL_auxz00_9899,BFALSE,BFALSE);} 
BgL_arg2243z00_2852 = BgL_res3862z00_5653; } 
{ /* Ieee/input.scm 237 */
bool_t BgL_res3863z00_5655;
BgL_res3863z00_5655 = 
INPUT_PORT_CLOSEP(BgL_arg2243z00_2852); 
BgL_test5525z00_9896 = BgL_res3863z00_5655; } } 
if(BgL_test5525z00_9896)
{ /* Ieee/input.scm 237 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg2239z00_2846;
{ /* Ieee/input.scm 237 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1046z00_2847;
{ /* Ieee/input.scm 237 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1045z00_2850;
BgL_new1045z00_2850 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Ieee/input.scm 237 */
long BgL_arg2242z00_2851;
{ /* Ieee/input.scm 237 */
long BgL_res3864z00_5657;
BgL_res3864z00_5657 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg2242z00_2851 = BgL_res3864z00_5657; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1045z00_2850), BgL_arg2242z00_2851); } 
BgL_new1046z00_2847 = BgL_new1045z00_2850; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_2847)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_2847)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_9912;
{ /* Ieee/input.scm 237 */
obj_t BgL_arg2240z00_2848;
{ /* Ieee/input.scm 237 */
obj_t BgL_arg2241z00_2849;
{ /* Ieee/input.scm 237 */
obj_t BgL_res3865z00_5661;
{ /* Ieee/input.scm 237 */
obj_t BgL_classz00_5660;
BgL_classz00_5660 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res3865z00_5661 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_5660); } 
BgL_arg2241z00_2849 = BgL_res3865z00_5661; } 
BgL_arg2240z00_2848 = 
VECTOR_REF(BgL_arg2241z00_2849,((long)2)); } 
{ /* Ieee/input.scm 237 */
obj_t BgL_auxz00_9916;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2240z00_2848))
{ /* Ieee/input.scm 237 */
BgL_auxz00_9916 = BgL_arg2240z00_2848
; }  else 
{ 
obj_t BgL_auxz00_9919;
BgL_auxz00_9919 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg2240z00_2848); 
FAILURE(BgL_auxz00_9919,BFALSE,BFALSE);} 
BgL_auxz00_9912 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_9916); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_2847)))->BgL_stackz00)=((obj_t)BgL_auxz00_9912),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_2847)))->BgL_procz00)=((obj_t)BGl_string4908z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_2847)))->BgL_msgz00)=((obj_t)BGl_string4924z00zz__r4_input_6_10_2z00),BUNSPEC); 
{ 
obj_t BgL_auxz00_9929;
{ /* Ieee/input.scm 237 */
obj_t BgL_res3866z00_5663;
if(
INPUT_PORTP(BgL_iportz00_2809))
{ /* Ieee/input.scm 237 */
BgL_res3866z00_5663 = BgL_iportz00_2809; }  else 
{ 
obj_t BgL_auxz00_9933;
BgL_auxz00_9933 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string4932z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2809); 
FAILURE(BgL_auxz00_9933,BFALSE,BFALSE);} 
BgL_auxz00_9929 = BgL_res3866z00_5663; } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_2847)))->BgL_objz00)=((obj_t)BgL_auxz00_9929),BUNSPEC); } 
BgL_arg2239z00_2846 = BgL_new1046z00_2847; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2239z00_2846));}  else 
{ /* Ieee/input.scm 237 */
{ /* Ieee/input.scm 237 */
long BgL_res3856z00_5640;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5639;
if(
INPUT_PORTP(BgL_iportz00_2809))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5639 = BgL_iportz00_2809; }  else 
{ 
obj_t BgL_auxz00_9942;
BgL_auxz00_9942 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2809); 
FAILURE(BgL_auxz00_9942,BFALSE,BFALSE);} 
BgL_res3856z00_5640 = 
RGC_START_MATCH(BgL_inputzd2portzd2_5639); } BgL_res3856z00_5640; } 
{ /* Ieee/input.scm 237 */
long BgL_matchz00_3057;
{ /* Ieee/input.scm 237 */
long BgL_arg2384z00_3061;long BgL_arg2385z00_3062;
{ /* Ieee/input.scm 237 */
long BgL_res3857z00_5642;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5641;
if(
INPUT_PORTP(BgL_iportz00_2809))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5641 = BgL_iportz00_2809; }  else 
{ 
obj_t BgL_auxz00_9949;
BgL_auxz00_9949 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2809); 
FAILURE(BgL_auxz00_9949,BFALSE,BFALSE);} 
BgL_res3857z00_5642 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5641); } 
BgL_arg2384z00_3061 = BgL_res3857z00_5642; } 
{ /* Ieee/input.scm 237 */
long BgL_res3858z00_5644;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5643;
if(
INPUT_PORTP(BgL_iportz00_2809))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5643 = BgL_iportz00_2809; }  else 
{ 
obj_t BgL_auxz00_9956;
BgL_auxz00_9956 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2809); 
FAILURE(BgL_auxz00_9956,BFALSE,BFALSE);} 
BgL_res3858z00_5644 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5643); } 
BgL_arg2385z00_3062 = BgL_res3858z00_5644; } 
BgL_iportz00_2888 = BgL_iportz00_2809; 
BgL_lastzd2matchzd2_2889 = ((long)1); 
BgL_forwardz00_2890 = BgL_arg2384z00_3061; 
BgL_bufposz00_2891 = BgL_arg2385z00_3062; 
BgL_zc3z04anonymousza32262ze3z87_2892:
if(
(BgL_forwardz00_2890==BgL_bufposz00_2891))
{ /* Ieee/input.scm 237 */
bool_t BgL_test5533z00_9963;
{ /* Ieee/input.scm 237 */
bool_t BgL_res3818z00_5547;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5546;
if(
INPUT_PORTP(BgL_iportz00_2888))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5546 = BgL_iportz00_2888; }  else 
{ 
obj_t BgL_auxz00_9966;
BgL_auxz00_9966 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5006z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2888); 
FAILURE(BgL_auxz00_9966,BFALSE,BFALSE);} 
BgL_res3818z00_5547 = 
rgc_fill_buffer(BgL_inputzd2portzd2_5546); } 
BgL_test5533z00_9963 = BgL_res3818z00_5547; } 
if(BgL_test5533z00_9963)
{ /* Ieee/input.scm 237 */
long BgL_arg2265z00_2895;long BgL_arg2267z00_2896;
{ /* Ieee/input.scm 237 */
long BgL_res3819z00_5549;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5548;
if(
INPUT_PORTP(BgL_iportz00_2888))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5548 = BgL_iportz00_2888; }  else 
{ 
obj_t BgL_auxz00_9973;
BgL_auxz00_9973 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5006z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2888); 
FAILURE(BgL_auxz00_9973,BFALSE,BFALSE);} 
BgL_res3819z00_5549 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5548); } 
BgL_arg2265z00_2895 = BgL_res3819z00_5549; } 
{ /* Ieee/input.scm 237 */
long BgL_res3820z00_5551;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5550;
if(
INPUT_PORTP(BgL_iportz00_2888))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5550 = BgL_iportz00_2888; }  else 
{ 
obj_t BgL_auxz00_9980;
BgL_auxz00_9980 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5006z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2888); 
FAILURE(BgL_auxz00_9980,BFALSE,BFALSE);} 
BgL_res3820z00_5551 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5550); } 
BgL_arg2267z00_2896 = BgL_res3820z00_5551; } 
{ 
long BgL_bufposz00_9986;long BgL_forwardz00_9985;
BgL_forwardz00_9985 = BgL_arg2265z00_2895; 
BgL_bufposz00_9986 = BgL_arg2267z00_2896; 
BgL_bufposz00_2891 = BgL_bufposz00_9986; 
BgL_forwardz00_2890 = BgL_forwardz00_9985; 
goto BgL_zc3z04anonymousza32262ze3z87_2892;} }  else 
{ /* Ieee/input.scm 237 */
BgL_matchz00_3057 = BgL_lastzd2matchzd2_2889; } }  else 
{ /* Ieee/input.scm 237 */
int BgL_curz00_2897;
{ /* Ieee/input.scm 237 */
int BgL_res3821z00_5554;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5552;
if(
INPUT_PORTP(BgL_iportz00_2888))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5552 = BgL_iportz00_2888; }  else 
{ 
obj_t BgL_auxz00_9989;
BgL_auxz00_9989 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5006z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2888); 
FAILURE(BgL_auxz00_9989,BFALSE,BFALSE);} 
BgL_res3821z00_5554 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5552, BgL_forwardz00_2890); } 
BgL_curz00_2897 = BgL_res3821z00_5554; } 
{ /* Ieee/input.scm 237 */

if(
(
(long)(BgL_curz00_2897)==((long)13)))
{ /* Ieee/input.scm 237 */
BgL_iportz00_2875 = BgL_iportz00_2888; 
BgL_lastzd2matchzd2_2876 = BgL_lastzd2matchzd2_2889; 
BgL_forwardz00_2877 = 
(((long)1)+BgL_forwardz00_2890); 
BgL_bufposz00_2878 = BgL_bufposz00_2891; 
BgL_zc3z04anonymousza32255ze3z87_2879:
{ /* Ieee/input.scm 237 */
long BgL_newzd2matchzd2_2880;
{ /* Ieee/input.scm 237 */
long BgL_res3808z00_5522;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5520;
if(
INPUT_PORTP(BgL_iportz00_2875))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5520 = BgL_iportz00_2875; }  else 
{ 
obj_t BgL_auxz00_9999;
BgL_auxz00_9999 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5005z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2875); 
FAILURE(BgL_auxz00_9999,BFALSE,BFALSE);} 
BgL_res3808z00_5522 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5520, BgL_forwardz00_2877); } BgL_res3808z00_5522; } 
BgL_newzd2matchzd2_2880 = ((long)0); 
if(
(BgL_forwardz00_2877==BgL_bufposz00_2878))
{ /* Ieee/input.scm 237 */
bool_t BgL_test5542z00_10006;
{ /* Ieee/input.scm 237 */
bool_t BgL_res3810z00_5527;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5526;
if(
INPUT_PORTP(BgL_iportz00_2875))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5526 = BgL_iportz00_2875; }  else 
{ 
obj_t BgL_auxz00_10009;
BgL_auxz00_10009 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5005z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2875); 
FAILURE(BgL_auxz00_10009,BFALSE,BFALSE);} 
BgL_res3810z00_5527 = 
rgc_fill_buffer(BgL_inputzd2portzd2_5526); } 
BgL_test5542z00_10006 = BgL_res3810z00_5527; } 
if(BgL_test5542z00_10006)
{ /* Ieee/input.scm 237 */
long BgL_arg2258z00_2883;long BgL_arg2259z00_2884;
{ /* Ieee/input.scm 237 */
long BgL_res3811z00_5529;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5528;
if(
INPUT_PORTP(BgL_iportz00_2875))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5528 = BgL_iportz00_2875; }  else 
{ 
obj_t BgL_auxz00_10016;
BgL_auxz00_10016 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5005z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2875); 
FAILURE(BgL_auxz00_10016,BFALSE,BFALSE);} 
BgL_res3811z00_5529 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5528); } 
BgL_arg2258z00_2883 = BgL_res3811z00_5529; } 
{ /* Ieee/input.scm 237 */
long BgL_res3812z00_5531;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5530;
if(
INPUT_PORTP(BgL_iportz00_2875))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5530 = BgL_iportz00_2875; }  else 
{ 
obj_t BgL_auxz00_10023;
BgL_auxz00_10023 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5005z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2875); 
FAILURE(BgL_auxz00_10023,BFALSE,BFALSE);} 
BgL_res3812z00_5531 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5530); } 
BgL_arg2259z00_2884 = BgL_res3812z00_5531; } 
{ 
long BgL_bufposz00_10029;long BgL_forwardz00_10028;
BgL_forwardz00_10028 = BgL_arg2258z00_2883; 
BgL_bufposz00_10029 = BgL_arg2259z00_2884; 
BgL_bufposz00_2878 = BgL_bufposz00_10029; 
BgL_forwardz00_2877 = BgL_forwardz00_10028; 
goto BgL_zc3z04anonymousza32255ze3z87_2879;} }  else 
{ /* Ieee/input.scm 237 */
BgL_matchz00_3057 = BgL_newzd2matchzd2_2880; } }  else 
{ /* Ieee/input.scm 237 */
int BgL_curz00_2885;
{ /* Ieee/input.scm 237 */
int BgL_res3813z00_5534;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5532;
if(
INPUT_PORTP(BgL_iportz00_2875))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5532 = BgL_iportz00_2875; }  else 
{ 
obj_t BgL_auxz00_10032;
BgL_auxz00_10032 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5005z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2875); 
FAILURE(BgL_auxz00_10032,BFALSE,BFALSE);} 
BgL_res3813z00_5534 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5532, BgL_forwardz00_2877); } 
BgL_curz00_2885 = BgL_res3813z00_5534; } 
{ /* Ieee/input.scm 237 */

if(
(
(long)(BgL_curz00_2885)==((long)10)))
{ /* Ieee/input.scm 237 */
long BgL_arg2261z00_2887;
BgL_arg2261z00_2887 = 
(((long)1)+BgL_forwardz00_2877); 
{ /* Ieee/input.scm 237 */
long BgL_newzd2matchzd2_5539;
{ /* Ieee/input.scm 237 */
long BgL_res3816z00_5542;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5540;
if(
INPUT_PORTP(BgL_iportz00_2875))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5540 = BgL_iportz00_2875; }  else 
{ 
obj_t BgL_auxz00_10043;
BgL_auxz00_10043 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5005z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2875); 
FAILURE(BgL_auxz00_10043,BFALSE,BFALSE);} 
BgL_res3816z00_5542 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5540, BgL_arg2261z00_2887); } BgL_res3816z00_5542; } 
BgL_newzd2matchzd2_5539 = ((long)0); 
BgL_matchz00_3057 = BgL_newzd2matchzd2_5539; } }  else 
{ /* Ieee/input.scm 237 */
BgL_matchz00_3057 = BgL_newzd2matchzd2_2880; } } } } }  else 
{ /* Ieee/input.scm 237 */
if(
(
(long)(BgL_curz00_2897)==((long)10)))
{ /* Ieee/input.scm 237 */
long BgL_arg2272z00_2901;
BgL_arg2272z00_2901 = 
(((long)1)+BgL_forwardz00_2890); 
{ /* Ieee/input.scm 237 */
long BgL_newzd2matchzd2_5563;
{ /* Ieee/input.scm 237 */
long BgL_res3826z00_5566;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5564;
if(
INPUT_PORTP(BgL_iportz00_2888))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5564 = BgL_iportz00_2888; }  else 
{ 
obj_t BgL_auxz00_10055;
BgL_auxz00_10055 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5006z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2888); 
FAILURE(BgL_auxz00_10055,BFALSE,BFALSE);} 
BgL_res3826z00_5566 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5564, BgL_arg2272z00_2901); } BgL_res3826z00_5566; } 
BgL_newzd2matchzd2_5563 = ((long)0); 
BgL_matchz00_3057 = BgL_newzd2matchzd2_5563; } }  else 
{ /* Ieee/input.scm 237 */
BgL_iportz00_2903 = BgL_iportz00_2888; 
BgL_lastzd2matchzd2_2904 = BgL_lastzd2matchzd2_2889; 
BgL_forwardz00_2905 = 
(((long)1)+BgL_forwardz00_2890); 
BgL_bufposz00_2906 = BgL_bufposz00_2891; 
BgL_zc3z04anonymousza32274ze3z87_2907:
{ /* Ieee/input.scm 237 */
long BgL_newzd2matchzd2_2908;
{ /* Ieee/input.scm 237 */
long BgL_res3828z00_5571;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5569;
if(
INPUT_PORTP(BgL_iportz00_2903))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5569 = BgL_iportz00_2903; }  else 
{ 
obj_t BgL_auxz00_10062;
BgL_auxz00_10062 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5007z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2903); 
FAILURE(BgL_auxz00_10062,BFALSE,BFALSE);} 
BgL_res3828z00_5571 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5569, BgL_forwardz00_2905); } BgL_res3828z00_5571; } 
BgL_newzd2matchzd2_2908 = ((long)0); 
if(
(BgL_forwardz00_2905==BgL_bufposz00_2906))
{ /* Ieee/input.scm 237 */
bool_t BgL_test5553z00_10069;
{ /* Ieee/input.scm 237 */
bool_t BgL_res3830z00_5576;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5575;
if(
INPUT_PORTP(BgL_iportz00_2903))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5575 = BgL_iportz00_2903; }  else 
{ 
obj_t BgL_auxz00_10072;
BgL_auxz00_10072 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5007z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2903); 
FAILURE(BgL_auxz00_10072,BFALSE,BFALSE);} 
BgL_res3830z00_5576 = 
rgc_fill_buffer(BgL_inputzd2portzd2_5575); } 
BgL_test5553z00_10069 = BgL_res3830z00_5576; } 
if(BgL_test5553z00_10069)
{ /* Ieee/input.scm 237 */
long BgL_arg2277z00_2911;long BgL_arg2278z00_2912;
{ /* Ieee/input.scm 237 */
long BgL_res3831z00_5578;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5577;
if(
INPUT_PORTP(BgL_iportz00_2903))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5577 = BgL_iportz00_2903; }  else 
{ 
obj_t BgL_auxz00_10079;
BgL_auxz00_10079 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5007z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2903); 
FAILURE(BgL_auxz00_10079,BFALSE,BFALSE);} 
BgL_res3831z00_5578 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5577); } 
BgL_arg2277z00_2911 = BgL_res3831z00_5578; } 
{ /* Ieee/input.scm 237 */
long BgL_res3832z00_5580;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5579;
if(
INPUT_PORTP(BgL_iportz00_2903))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5579 = BgL_iportz00_2903; }  else 
{ 
obj_t BgL_auxz00_10086;
BgL_auxz00_10086 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5007z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2903); 
FAILURE(BgL_auxz00_10086,BFALSE,BFALSE);} 
BgL_res3832z00_5580 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5579); } 
BgL_arg2278z00_2912 = BgL_res3832z00_5580; } 
{ 
long BgL_bufposz00_10092;long BgL_forwardz00_10091;
BgL_forwardz00_10091 = BgL_arg2277z00_2911; 
BgL_bufposz00_10092 = BgL_arg2278z00_2912; 
BgL_bufposz00_2906 = BgL_bufposz00_10092; 
BgL_forwardz00_2905 = BgL_forwardz00_10091; 
goto BgL_zc3z04anonymousza32274ze3z87_2907;} }  else 
{ /* Ieee/input.scm 237 */
BgL_matchz00_3057 = BgL_newzd2matchzd2_2908; } }  else 
{ /* Ieee/input.scm 237 */
int BgL_curz00_2913;
{ /* Ieee/input.scm 237 */
int BgL_res3833z00_5583;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5581;
if(
INPUT_PORTP(BgL_iportz00_2903))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5581 = BgL_iportz00_2903; }  else 
{ 
obj_t BgL_auxz00_10095;
BgL_auxz00_10095 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5007z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2903); 
FAILURE(BgL_auxz00_10095,BFALSE,BFALSE);} 
BgL_res3833z00_5583 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5581, BgL_forwardz00_2905); } 
BgL_curz00_2913 = BgL_res3833z00_5583; } 
{ /* Ieee/input.scm 237 */

if(
(
(long)(BgL_curz00_2913)==((long)13)))
{ /* Ieee/input.scm 237 */
BgL_iportz00_2919 = BgL_iportz00_2903; 
BgL_lastzd2matchzd2_2920 = BgL_newzd2matchzd2_2908; 
BgL_forwardz00_2921 = 
(((long)1)+BgL_forwardz00_2905); 
BgL_bufposz00_2922 = BgL_bufposz00_2906; 
BgL_zc3z04anonymousza32284ze3z87_2923:
{ /* Ieee/input.scm 237 */
long BgL_newzd2matchzd2_2924;
{ /* Ieee/input.scm 237 */
long BgL_res3840z00_5600;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5598;
if(
INPUT_PORTP(BgL_iportz00_2919))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5598 = BgL_iportz00_2919; }  else 
{ 
obj_t BgL_auxz00_10105;
BgL_auxz00_10105 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5008z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2919); 
FAILURE(BgL_auxz00_10105,BFALSE,BFALSE);} 
BgL_res3840z00_5600 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5598, BgL_forwardz00_2921); } BgL_res3840z00_5600; } 
BgL_newzd2matchzd2_2924 = ((long)0); 
if(
(BgL_forwardz00_2921==BgL_bufposz00_2922))
{ /* Ieee/input.scm 237 */
bool_t BgL_test5561z00_10112;
{ /* Ieee/input.scm 237 */
bool_t BgL_res3842z00_5605;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5604;
if(
INPUT_PORTP(BgL_iportz00_2919))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5604 = BgL_iportz00_2919; }  else 
{ 
obj_t BgL_auxz00_10115;
BgL_auxz00_10115 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5008z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2919); 
FAILURE(BgL_auxz00_10115,BFALSE,BFALSE);} 
BgL_res3842z00_5605 = 
rgc_fill_buffer(BgL_inputzd2portzd2_5604); } 
BgL_test5561z00_10112 = BgL_res3842z00_5605; } 
if(BgL_test5561z00_10112)
{ /* Ieee/input.scm 237 */
long BgL_arg2287z00_2927;long BgL_arg2288z00_2928;
{ /* Ieee/input.scm 237 */
long BgL_res3843z00_5607;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5606;
if(
INPUT_PORTP(BgL_iportz00_2919))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5606 = BgL_iportz00_2919; }  else 
{ 
obj_t BgL_auxz00_10122;
BgL_auxz00_10122 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5008z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2919); 
FAILURE(BgL_auxz00_10122,BFALSE,BFALSE);} 
BgL_res3843z00_5607 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5606); } 
BgL_arg2287z00_2927 = BgL_res3843z00_5607; } 
{ /* Ieee/input.scm 237 */
long BgL_res3844z00_5609;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5608;
if(
INPUT_PORTP(BgL_iportz00_2919))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5608 = BgL_iportz00_2919; }  else 
{ 
obj_t BgL_auxz00_10129;
BgL_auxz00_10129 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5008z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2919); 
FAILURE(BgL_auxz00_10129,BFALSE,BFALSE);} 
BgL_res3844z00_5609 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5608); } 
BgL_arg2288z00_2928 = BgL_res3844z00_5609; } 
{ 
long BgL_bufposz00_10135;long BgL_forwardz00_10134;
BgL_forwardz00_10134 = BgL_arg2287z00_2927; 
BgL_bufposz00_10135 = BgL_arg2288z00_2928; 
BgL_bufposz00_2922 = BgL_bufposz00_10135; 
BgL_forwardz00_2921 = BgL_forwardz00_10134; 
goto BgL_zc3z04anonymousza32284ze3z87_2923;} }  else 
{ /* Ieee/input.scm 237 */
BgL_matchz00_3057 = BgL_newzd2matchzd2_2924; } }  else 
{ /* Ieee/input.scm 237 */
int BgL_curz00_2929;
{ /* Ieee/input.scm 237 */
int BgL_res3845z00_5612;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5610;
if(
INPUT_PORTP(BgL_iportz00_2919))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5610 = BgL_iportz00_2919; }  else 
{ 
obj_t BgL_auxz00_10138;
BgL_auxz00_10138 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5008z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2919); 
FAILURE(BgL_auxz00_10138,BFALSE,BFALSE);} 
BgL_res3845z00_5612 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5610, BgL_forwardz00_2921); } 
BgL_curz00_2929 = BgL_res3845z00_5612; } 
{ /* Ieee/input.scm 237 */

if(
(
(long)(BgL_curz00_2929)==((long)10)))
{ /* Ieee/input.scm 237 */
long BgL_arg2290z00_2931;
BgL_arg2290z00_2931 = 
(((long)1)+BgL_forwardz00_2921); 
{ /* Ieee/input.scm 237 */
long BgL_newzd2matchzd2_5617;
{ /* Ieee/input.scm 237 */
long BgL_res3848z00_5620;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5618;
if(
INPUT_PORTP(BgL_iportz00_2919))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5618 = BgL_iportz00_2919; }  else 
{ 
obj_t BgL_auxz00_10149;
BgL_auxz00_10149 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5008z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2919); 
FAILURE(BgL_auxz00_10149,BFALSE,BFALSE);} 
BgL_res3848z00_5620 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5618, BgL_arg2290z00_2931); } BgL_res3848z00_5620; } 
BgL_newzd2matchzd2_5617 = ((long)0); 
BgL_matchz00_3057 = BgL_newzd2matchzd2_5617; } }  else 
{ /* Ieee/input.scm 237 */
BgL_matchz00_3057 = BgL_newzd2matchzd2_2924; } } } } }  else 
{ /* Ieee/input.scm 237 */
if(
(
(long)(BgL_curz00_2913)==((long)10)))
{ /* Ieee/input.scm 237 */
long BgL_arg2282z00_2917;
BgL_arg2282z00_2917 = 
(((long)1)+BgL_forwardz00_2905); 
{ /* Ieee/input.scm 237 */
long BgL_newzd2matchzd2_5592;
{ /* Ieee/input.scm 237 */
long BgL_res3838z00_5595;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5593;
if(
INPUT_PORTP(BgL_iportz00_2903))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5593 = BgL_iportz00_2903; }  else 
{ 
obj_t BgL_auxz00_10161;
BgL_auxz00_10161 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5007z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2903); 
FAILURE(BgL_auxz00_10161,BFALSE,BFALSE);} 
BgL_res3838z00_5595 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5593, BgL_arg2282z00_2917); } BgL_res3838z00_5595; } 
BgL_newzd2matchzd2_5592 = ((long)0); 
BgL_matchz00_3057 = BgL_newzd2matchzd2_5592; } }  else 
{ /* Ieee/input.scm 237 */
BgL_iportz00_2853 = BgL_iportz00_2903; 
BgL_lastzd2matchzd2_2854 = BgL_newzd2matchzd2_2908; 
BgL_forwardz00_2855 = 
(((long)1)+BgL_forwardz00_2905); 
BgL_bufposz00_2856 = BgL_bufposz00_2906; 
BgL_zc3z04anonymousza32244ze3z87_2857:
{ /* Ieee/input.scm 237 */
long BgL_newzd2matchzd2_2858;
{ /* Ieee/input.scm 237 */
long BgL_res3795z00_5489;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5487;
if(
INPUT_PORTP(BgL_iportz00_2853))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5487 = BgL_iportz00_2853; }  else 
{ 
obj_t BgL_auxz00_10168;
BgL_auxz00_10168 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5004z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2853); 
FAILURE(BgL_auxz00_10168,BFALSE,BFALSE);} 
BgL_res3795z00_5489 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5487, BgL_forwardz00_2855); } BgL_res3795z00_5489; } 
BgL_newzd2matchzd2_2858 = ((long)0); 
if(
(BgL_forwardz00_2855==BgL_bufposz00_2856))
{ /* Ieee/input.scm 237 */
bool_t BgL_test5572z00_10175;
{ /* Ieee/input.scm 237 */
bool_t BgL_res3797z00_5494;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5493;
if(
INPUT_PORTP(BgL_iportz00_2853))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5493 = BgL_iportz00_2853; }  else 
{ 
obj_t BgL_auxz00_10178;
BgL_auxz00_10178 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5004z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2853); 
FAILURE(BgL_auxz00_10178,BFALSE,BFALSE);} 
BgL_res3797z00_5494 = 
rgc_fill_buffer(BgL_inputzd2portzd2_5493); } 
BgL_test5572z00_10175 = BgL_res3797z00_5494; } 
if(BgL_test5572z00_10175)
{ /* Ieee/input.scm 237 */
long BgL_arg2247z00_2861;long BgL_arg2248z00_2862;
{ /* Ieee/input.scm 237 */
long BgL_res3798z00_5496;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5495;
if(
INPUT_PORTP(BgL_iportz00_2853))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5495 = BgL_iportz00_2853; }  else 
{ 
obj_t BgL_auxz00_10185;
BgL_auxz00_10185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5004z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2853); 
FAILURE(BgL_auxz00_10185,BFALSE,BFALSE);} 
BgL_res3798z00_5496 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5495); } 
BgL_arg2247z00_2861 = BgL_res3798z00_5496; } 
{ /* Ieee/input.scm 237 */
long BgL_res3799z00_5498;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5497;
if(
INPUT_PORTP(BgL_iportz00_2853))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5497 = BgL_iportz00_2853; }  else 
{ 
obj_t BgL_auxz00_10192;
BgL_auxz00_10192 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5004z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2853); 
FAILURE(BgL_auxz00_10192,BFALSE,BFALSE);} 
BgL_res3799z00_5498 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5497); } 
BgL_arg2248z00_2862 = BgL_res3799z00_5498; } 
{ 
long BgL_bufposz00_10198;long BgL_forwardz00_10197;
BgL_forwardz00_10197 = BgL_arg2247z00_2861; 
BgL_bufposz00_10198 = BgL_arg2248z00_2862; 
BgL_bufposz00_2856 = BgL_bufposz00_10198; 
BgL_forwardz00_2855 = BgL_forwardz00_10197; 
goto BgL_zc3z04anonymousza32244ze3z87_2857;} }  else 
{ /* Ieee/input.scm 237 */
BgL_matchz00_3057 = BgL_newzd2matchzd2_2858; } }  else 
{ /* Ieee/input.scm 237 */
int BgL_curz00_2863;
{ /* Ieee/input.scm 237 */
int BgL_res3800z00_5501;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5499;
if(
INPUT_PORTP(BgL_iportz00_2853))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5499 = BgL_iportz00_2853; }  else 
{ 
obj_t BgL_auxz00_10201;
BgL_auxz00_10201 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5004z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2853); 
FAILURE(BgL_auxz00_10201,BFALSE,BFALSE);} 
BgL_res3800z00_5501 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5499, BgL_forwardz00_2855); } 
BgL_curz00_2863 = BgL_res3800z00_5501; } 
{ /* Ieee/input.scm 237 */

if(
(
(long)(BgL_curz00_2863)==((long)13)))
{ 
long BgL_bufposz00_10213;long BgL_forwardz00_10211;long BgL_lastzd2matchzd2_10210;obj_t BgL_iportz00_10209;
BgL_iportz00_10209 = BgL_iportz00_2853; 
BgL_lastzd2matchzd2_10210 = BgL_newzd2matchzd2_2858; 
BgL_forwardz00_10211 = 
(((long)1)+BgL_forwardz00_2855); 
BgL_bufposz00_10213 = BgL_bufposz00_2856; 
BgL_bufposz00_2922 = BgL_bufposz00_10213; 
BgL_forwardz00_2921 = BgL_forwardz00_10211; 
BgL_lastzd2matchzd2_2920 = BgL_lastzd2matchzd2_10210; 
BgL_iportz00_2919 = BgL_iportz00_10209; 
goto BgL_zc3z04anonymousza32284ze3z87_2923;}  else 
{ /* Ieee/input.scm 237 */
if(
(
(long)(BgL_curz00_2863)==((long)10)))
{ /* Ieee/input.scm 237 */
long BgL_arg2252z00_2867;
BgL_arg2252z00_2867 = 
(((long)1)+BgL_forwardz00_2855); 
{ /* Ieee/input.scm 237 */
long BgL_newzd2matchzd2_5510;
{ /* Ieee/input.scm 237 */
long BgL_res3805z00_5513;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5511;
if(
INPUT_PORTP(BgL_iportz00_2853))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5511 = BgL_iportz00_2853; }  else 
{ 
obj_t BgL_auxz00_10220;
BgL_auxz00_10220 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string5004z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2853); 
FAILURE(BgL_auxz00_10220,BFALSE,BFALSE);} 
BgL_res3805z00_5513 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5511, BgL_arg2252z00_2867); } BgL_res3805z00_5513; } 
BgL_newzd2matchzd2_5510 = ((long)0); 
BgL_matchz00_3057 = BgL_newzd2matchzd2_5510; } }  else 
{ 
long BgL_forwardz00_10226;long BgL_lastzd2matchzd2_10225;
BgL_lastzd2matchzd2_10225 = BgL_newzd2matchzd2_2858; 
BgL_forwardz00_10226 = 
(((long)1)+BgL_forwardz00_2855); 
BgL_forwardz00_2855 = BgL_forwardz00_10226; 
BgL_lastzd2matchzd2_2854 = BgL_lastzd2matchzd2_10225; 
goto BgL_zc3z04anonymousza32244ze3z87_2857;} } } } } } } } } } } } } } } 
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5645;
if(
INPUT_PORTP(BgL_iportz00_2809))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5645 = BgL_iportz00_2809; }  else 
{ 
obj_t BgL_auxz00_10232;
BgL_auxz00_10232 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2809); 
FAILURE(BgL_auxz00_10232,BFALSE,BFALSE);} 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_5645); } 
switch( BgL_matchz00_3057) { case ((long)1) : 

{ /* Ieee/input.scm 237 */
bool_t BgL_test5581z00_10237;
{ /* Ieee/input.scm 237 */
long BgL_arg2376z00_3047;
{ /* Ieee/input.scm 237 */
long BgL_res3853z00_5634;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5633;
if(
INPUT_PORTP(BgL_iportz00_2809))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5633 = BgL_iportz00_2809; }  else 
{ 
obj_t BgL_auxz00_10240;
BgL_auxz00_10240 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string4910z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2809); 
FAILURE(BgL_auxz00_10240,BFALSE,BFALSE);} 
BgL_res3853z00_5634 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_5633); } 
BgL_arg2376z00_3047 = BgL_res3853z00_5634; } 
BgL_test5581z00_10237 = 
(BgL_arg2376z00_3047==((long)0)); } 
if(BgL_test5581z00_10237)
{ /* Ieee/input.scm 237 */
return BEOF;}  else 
{ /* Ieee/input.scm 237 */
unsigned char BgL_res3855z00_5638;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5637;
if(
INPUT_PORTP(BgL_iportz00_2809))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5637 = BgL_iportz00_2809; }  else 
{ 
obj_t BgL_auxz00_10248;
BgL_auxz00_10248 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string4910z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2809); 
FAILURE(BgL_auxz00_10248,BFALSE,BFALSE);} 
BgL_res3855z00_5638 = 
RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_5637); } 
return 
BCHAR(BgL_res3855z00_5638);} } break;case ((long)0) : 

{ /* Ieee/input.scm 243 */
obj_t BgL_res3861z00_5652;
{ /* Ieee/input.scm 237 */
long BgL_arg2298z00_5646;
{ /* Ieee/input.scm 237 */
long BgL_res3859z00_5648;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5647;
if(
INPUT_PORTP(BgL_iportz00_2809))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5647 = BgL_iportz00_2809; }  else 
{ 
obj_t BgL_auxz00_10256;
BgL_auxz00_10256 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2809); 
FAILURE(BgL_auxz00_10256,BFALSE,BFALSE);} 
BgL_res3859z00_5648 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_5647); } 
BgL_arg2298z00_5646 = BgL_res3859z00_5648; } 
{ /* Ieee/input.scm 237 */
obj_t BgL_res3860z00_5651;
{ /* Ieee/input.scm 237 */
obj_t BgL_inputzd2portzd2_5649;
if(
INPUT_PORTP(BgL_iportz00_2809))
{ /* Ieee/input.scm 237 */
BgL_inputzd2portzd2_5649 = BgL_iportz00_2809; }  else 
{ 
obj_t BgL_auxz00_10263;
BgL_auxz00_10263 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)9828)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_2809); 
FAILURE(BgL_auxz00_10263,BFALSE,BFALSE);} 
BgL_res3860z00_5651 = 
rgc_buffer_substring(BgL_inputzd2portzd2_5649, ((long)0), BgL_arg2298z00_5646); } 
BgL_res3861z00_5652 = BgL_res3860z00_5651; } } 
return BgL_res3861z00_5652;} break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4908z00zz__r4_input_6_10_2z00, BGl_string4909z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_3057));} } } } } }  else 
{ /* Ieee/input.scm 249 */
obj_t BgL_g1093z00_3098;obj_t BgL_g1094z00_3099;
BgL_g1093z00_3098 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_29); 
{ /* Ieee/string.scm 168 */

BgL_g1094z00_3099 = 
make_string(((long)100), ((unsigned char)' ')); } 
{ 
obj_t BgL_cz00_3101;long BgL_wz00_3102;long BgL_mz00_3103;obj_t BgL_accz00_3104;
BgL_cz00_3101 = BgL_g1093z00_3098; 
BgL_wz00_3102 = ((long)0); 
BgL_mz00_3103 = ((long)100); 
BgL_accz00_3104 = BgL_g1094z00_3099; 
BgL_zc3z04anonymousza32386ze3z87_3105:
{ /* Ieee/input.scm 254 */
bool_t BgL_test5586z00_10273;
{ /* Ieee/input.scm 254 */
bool_t BgL_res3868z00_5666;
BgL_res3868z00_5666 = 
EOF_OBJECTP(BgL_cz00_3101); 
BgL_test5586z00_10273 = BgL_res3868z00_5666; } 
if(BgL_test5586z00_10273)
{ /* Ieee/input.scm 254 */
if(
(BgL_wz00_3102==((long)0)))
{ /* Ieee/input.scm 256 */
return BgL_cz00_3101;}  else 
{ /* Ieee/input.scm 256 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_accz00_3104, ((long)0), BgL_wz00_3102);} }  else 
{ /* Ieee/input.scm 254 */
if(
(BgL_wz00_3102==
(BgL_mz00_3103-((long)2))))
{ /* Ieee/input.scm 261 */
long BgL_arg2392z00_3111;obj_t BgL_arg2393z00_3112;
BgL_arg2392z00_3111 = 
(BgL_mz00_3103*((long)2)); 
{ /* Ieee/input.scm 262 */
obj_t BgL_newzd2acczd2_3113;
{ /* Ieee/input.scm 262 */
long BgL_arg2395z00_3114;
BgL_arg2395z00_3114 = 
(BgL_mz00_3103*((long)2)); 
{ /* Ieee/string.scm 168 */

BgL_newzd2acczd2_3113 = 
make_string(BgL_arg2395z00_3114, ((unsigned char)' ')); } } 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_accz00_3104, ((long)0), BgL_newzd2acczd2_3113, ((long)0), BgL_mz00_3103); 
BgL_arg2393z00_3112 = BgL_newzd2acczd2_3113; } 
{ 
obj_t BgL_accz00_10286;long BgL_mz00_10285;
BgL_mz00_10285 = BgL_arg2392z00_3111; 
BgL_accz00_10286 = BgL_arg2393z00_3112; 
BgL_accz00_3104 = BgL_accz00_10286; 
BgL_mz00_3103 = BgL_mz00_10285; 
goto BgL_zc3z04anonymousza32386ze3z87_3105;} }  else 
{ /* Ieee/input.scm 265 */
bool_t BgL_test5589z00_10287;
{ /* Ieee/input.scm 265 */
unsigned char BgL_char1z00_5681;
{ /* Ieee/input.scm 265 */
obj_t BgL_tmpz00_10288;
if(
CHARP(BgL_cz00_3101))
{ /* Ieee/input.scm 265 */
BgL_tmpz00_10288 = BgL_cz00_3101
; }  else 
{ 
obj_t BgL_auxz00_10291;
BgL_auxz00_10291 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)10651)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5000z00zz__r4_input_6_10_2z00, BgL_cz00_3101); 
FAILURE(BgL_auxz00_10291,BFALSE,BFALSE);} 
BgL_char1z00_5681 = 
CCHAR(BgL_tmpz00_10288); } 
BgL_test5589z00_10287 = 
(BgL_char1z00_5681==((unsigned char)13)); } 
if(BgL_test5589z00_10287)
{ /* Ieee/input.scm 266 */
obj_t BgL_c2z00_3118;
BgL_c2z00_3118 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_29); 
{ /* Ieee/input.scm 267 */
bool_t BgL_test5591z00_10298;
{ /* Ieee/input.scm 267 */
unsigned char BgL_char1z00_5684;
{ /* Ieee/input.scm 267 */
obj_t BgL_tmpz00_10299;
if(
CHARP(BgL_c2z00_3118))
{ /* Ieee/input.scm 267 */
BgL_tmpz00_10299 = BgL_c2z00_3118
; }  else 
{ 
obj_t BgL_auxz00_10302;
BgL_auxz00_10302 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)10712)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5000z00zz__r4_input_6_10_2z00, BgL_c2z00_3118); 
FAILURE(BgL_auxz00_10302,BFALSE,BFALSE);} 
BgL_char1z00_5684 = 
CCHAR(BgL_tmpz00_10299); } 
BgL_test5591z00_10298 = 
(BgL_char1z00_5684==((unsigned char)10)); } 
if(BgL_test5591z00_10298)
{ /* Ieee/input.scm 267 */
{ /* Ieee/input.scm 269 */
long BgL_l4177z00_6698;
BgL_l4177z00_6698 = 
STRING_LENGTH(BgL_accz00_3104); 
if(
BOUND_CHECK(BgL_wz00_3102, BgL_l4177z00_6698))
{ /* Ieee/input.scm 269 */
STRING_SET(BgL_accz00_3104, BgL_wz00_3102, ((unsigned char)13)); }  else 
{ 
obj_t BgL_auxz00_10312;
BgL_auxz00_10312 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)10743)), BGl_string5001z00zz__r4_input_6_10_2z00, BgL_accz00_3104, 
(int)(BgL_l4177z00_6698), 
(int)(BgL_wz00_3102)); 
FAILURE(BgL_auxz00_10312,BFALSE,BFALSE);} } 
{ /* Ieee/input.scm 270 */
long BgL_arg2398z00_3120;
BgL_arg2398z00_3120 = 
(((long)1)+BgL_wz00_3102); 
{ /* Ieee/input.scm 270 */
long BgL_l4181z00_6702;
BgL_l4181z00_6702 = 
STRING_LENGTH(BgL_accz00_3104); 
if(
BOUND_CHECK(BgL_arg2398z00_3120, BgL_l4181z00_6702))
{ /* Ieee/input.scm 270 */
STRING_SET(BgL_accz00_3104, BgL_arg2398z00_3120, ((unsigned char)10)); }  else 
{ 
obj_t BgL_auxz00_10323;
BgL_auxz00_10323 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)10775)), BGl_string5001z00zz__r4_input_6_10_2z00, BgL_accz00_3104, 
(int)(BgL_l4181z00_6702), 
(int)(BgL_arg2398z00_3120)); 
FAILURE(BgL_auxz00_10323,BFALSE,BFALSE);} } } 
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_accz00_3104, ((long)0), 
(BgL_wz00_3102+((long)2)));}  else 
{ /* Ieee/input.scm 267 */
{ /* Ieee/input.scm 273 */
unsigned char BgL_charz00_5699;
{ /* Ieee/input.scm 273 */
obj_t BgL_tmpz00_10331;
if(
CHARP(BgL_cz00_3101))
{ /* Ieee/input.scm 273 */
BgL_tmpz00_10331 = BgL_cz00_3101
; }  else 
{ 
obj_t BgL_auxz00_10334;
BgL_auxz00_10334 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)10881)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5000z00zz__r4_input_6_10_2z00, BgL_cz00_3101); 
FAILURE(BgL_auxz00_10334,BFALSE,BFALSE);} 
BgL_charz00_5699 = 
CCHAR(BgL_tmpz00_10331); } 
{ /* Ieee/input.scm 273 */
long BgL_l4185z00_6706;
BgL_l4185z00_6706 = 
STRING_LENGTH(BgL_accz00_3104); 
if(
BOUND_CHECK(BgL_wz00_3102, BgL_l4185z00_6706))
{ /* Ieee/input.scm 273 */
STRING_SET(BgL_accz00_3104, BgL_wz00_3102, BgL_charz00_5699); }  else 
{ 
obj_t BgL_auxz00_10343;
BgL_auxz00_10343 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)10862)), BGl_string5001z00zz__r4_input_6_10_2z00, BgL_accz00_3104, 
(int)(BgL_l4185z00_6706), 
(int)(BgL_wz00_3102)); 
FAILURE(BgL_auxz00_10343,BFALSE,BFALSE);} } } 
{ 
long BgL_wz00_10350;obj_t BgL_cz00_10349;
BgL_cz00_10349 = BgL_c2z00_3118; 
BgL_wz00_10350 = 
(BgL_wz00_3102+((long)1)); 
BgL_wz00_3102 = BgL_wz00_10350; 
BgL_cz00_3101 = BgL_cz00_10349; 
goto BgL_zc3z04anonymousza32386ze3z87_3105;} } } }  else 
{ /* Ieee/input.scm 275 */
bool_t BgL_test5597z00_10352;
{ /* Ieee/input.scm 275 */
unsigned char BgL_char1z00_5702;
{ /* Ieee/input.scm 275 */
obj_t BgL_tmpz00_10353;
if(
CHARP(BgL_cz00_3101))
{ /* Ieee/input.scm 275 */
BgL_tmpz00_10353 = BgL_cz00_3101
; }  else 
{ 
obj_t BgL_auxz00_10356;
BgL_auxz00_10356 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)10932)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5000z00zz__r4_input_6_10_2z00, BgL_cz00_3101); 
FAILURE(BgL_auxz00_10356,BFALSE,BFALSE);} 
BgL_char1z00_5702 = 
CCHAR(BgL_tmpz00_10353); } 
BgL_test5597z00_10352 = 
(BgL_char1z00_5702==((unsigned char)10)); } 
if(BgL_test5597z00_10352)
{ /* Ieee/input.scm 275 */
{ /* Ieee/input.scm 277 */
long BgL_l4189z00_6710;
BgL_l4189z00_6710 = 
STRING_LENGTH(BgL_accz00_3104); 
if(
BOUND_CHECK(BgL_wz00_3102, BgL_l4189z00_6710))
{ /* Ieee/input.scm 277 */
STRING_SET(BgL_accz00_3104, BgL_wz00_3102, ((unsigned char)10)); }  else 
{ 
obj_t BgL_auxz00_10366;
BgL_auxz00_10366 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)10991)), BGl_string5001z00zz__r4_input_6_10_2z00, BgL_accz00_3104, 
(int)(BgL_l4189z00_6710), 
(int)(BgL_wz00_3102)); 
FAILURE(BgL_auxz00_10366,BFALSE,BFALSE);} } 
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_accz00_3104, ((long)0), 
(BgL_wz00_3102+((long)1)));}  else 
{ /* Ieee/input.scm 275 */
{ /* Ieee/input.scm 281 */
unsigned char BgL_charz00_5712;
{ /* Ieee/input.scm 281 */
obj_t BgL_tmpz00_10374;
if(
CHARP(BgL_cz00_3101))
{ /* Ieee/input.scm 281 */
BgL_tmpz00_10374 = BgL_cz00_3101
; }  else 
{ 
obj_t BgL_auxz00_10377;
BgL_auxz00_10377 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11121)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5000z00zz__r4_input_6_10_2z00, BgL_cz00_3101); 
FAILURE(BgL_auxz00_10377,BFALSE,BFALSE);} 
BgL_charz00_5712 = 
CCHAR(BgL_tmpz00_10374); } 
{ /* Ieee/input.scm 281 */
long BgL_l4193z00_6714;
BgL_l4193z00_6714 = 
STRING_LENGTH(BgL_accz00_3104); 
if(
BOUND_CHECK(BgL_wz00_3102, BgL_l4193z00_6714))
{ /* Ieee/input.scm 281 */
STRING_SET(BgL_accz00_3104, BgL_wz00_3102, BgL_charz00_5712); }  else 
{ 
obj_t BgL_auxz00_10386;
BgL_auxz00_10386 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11102)), BGl_string5001z00zz__r4_input_6_10_2z00, BgL_accz00_3104, 
(int)(BgL_l4193z00_6714), 
(int)(BgL_wz00_3102)); 
FAILURE(BgL_auxz00_10386,BFALSE,BFALSE);} } } 
{ 
long BgL_wz00_10394;obj_t BgL_cz00_10392;
BgL_cz00_10392 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_29); 
BgL_wz00_10394 = 
(BgL_wz00_3102+((long)1)); 
BgL_wz00_3102 = BgL_wz00_10394; 
BgL_cz00_3101 = BgL_cz00_10392; 
goto BgL_zc3z04anonymousza32386ze3z87_3105;} } } } } } } } } } 

}



/* _read-lines */
obj_t BGl__readzd2lineszd2zz__r4_input_6_10_2z00(obj_t BgL_env1269z00_34, obj_t BgL_opt1268z00_33)
{
{ /* Ieee/input.scm 287 */
{ /* Ieee/input.scm 287 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1268z00_33)) { case ((long)0) : 

{ /* Ieee/input.scm 287 */
obj_t BgL_ipz00_3136;
{ /* Ieee/input.scm 287 */
obj_t BgL_res3884z00_5716;
{ /* Ieee/input.scm 287 */
obj_t BgL_tmpz00_10396;
BgL_tmpz00_10396 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3884z00_5716 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_10396); } 
BgL_ipz00_3136 = BgL_res3884z00_5716; } 
{ /* Ieee/input.scm 287 */

return 
BGl_readzd2lineszd2zz__r4_input_6_10_2z00(BgL_ipz00_3136);} } break;case ((long)1) : 

{ /* Ieee/input.scm 287 */
obj_t BgL_ipz00_3137;
BgL_ipz00_3137 = 
VECTOR_REF(BgL_opt1268z00_33,((long)0)); 
{ /* Ieee/input.scm 287 */

return 
BGl_readzd2lineszd2zz__r4_input_6_10_2z00(BgL_ipz00_3137);} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol5009z00zz__r4_input_6_10_2z00, BGl_string4977z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1268z00_33)));} } } } 

}



/* read-lines */
BGL_EXPORTED_DEF obj_t BGl_readzd2lineszd2zz__r4_input_6_10_2z00(obj_t BgL_ipz00_32)
{
{ /* Ieee/input.scm 287 */
{ /* Ieee/input.scm 288 */
obj_t BgL_g1096z00_3139;
BgL_g1096z00_3139 = 
BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_32); 
{ 
obj_t BgL_lz00_5726;obj_t BgL_lsz00_5727;
BgL_lz00_5726 = BgL_g1096z00_3139; 
BgL_lsz00_5727 = BNIL; 
BgL_loopz00_5725:
{ /* Ieee/input.scm 290 */
bool_t BgL_test5602z00_10408;
{ /* Ieee/input.scm 290 */
bool_t BgL_res3887z00_5734;
BgL_res3887z00_5734 = 
EOF_OBJECTP(BgL_lz00_5726); 
BgL_test5602z00_10408 = BgL_res3887z00_5734; } 
if(BgL_test5602z00_10408)
{ /* Ieee/input.scm 290 */
return 
bgl_reverse_bang(BgL_lsz00_5727);}  else 
{ /* Ieee/input.scm 292 */
obj_t BgL_arg2414z00_5732;obj_t BgL_arg2415z00_5733;
BgL_arg2414z00_5732 = 
BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_32); 
BgL_arg2415z00_5733 = 
MAKE_YOUNG_PAIR(BgL_lz00_5726, BgL_lsz00_5727); 
{ 
obj_t BgL_lsz00_10414;obj_t BgL_lz00_10413;
BgL_lz00_10413 = BgL_arg2414z00_5732; 
BgL_lsz00_10414 = BgL_arg2415z00_5733; 
BgL_lsz00_5727 = BgL_lsz00_10414; 
BgL_lz00_5726 = BgL_lz00_10413; 
goto BgL_loopz00_5725;} } } } } } 

}



/* _read-string */
obj_t BGl__readzd2stringzd2zz__r4_input_6_10_2z00(obj_t BgL_env1273z00_37, obj_t BgL_opt1272z00_36)
{
{ /* Ieee/input.scm 297 */
{ /* Ieee/input.scm 297 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1272z00_36)) { case ((long)0) : 

{ /* Ieee/input.scm 297 */
obj_t BgL_ipz00_3152;
{ /* Ieee/input.scm 297 */
obj_t BgL_res3888z00_5736;
{ /* Ieee/input.scm 297 */
obj_t BgL_tmpz00_10415;
BgL_tmpz00_10415 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3888z00_5736 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_10415); } 
BgL_ipz00_3152 = BgL_res3888z00_5736; } 
{ /* Ieee/input.scm 297 */

return 
BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_ipz00_3152);} } break;case ((long)1) : 

{ /* Ieee/input.scm 297 */
obj_t BgL_ipz00_3153;
BgL_ipz00_3153 = 
VECTOR_REF(BgL_opt1272z00_36,((long)0)); 
{ /* Ieee/input.scm 297 */

return 
BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_ipz00_3153);} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol5011z00zz__r4_input_6_10_2z00, BGl_string4977z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1272z00_36)));} } } } 

}



/* read-string */
BGL_EXPORTED_DEF obj_t BGl_readzd2stringzd2zz__r4_input_6_10_2z00(obj_t BgL_ipz00_35)
{
{ /* Ieee/input.scm 297 */
{ 
obj_t BgL_iportz00_3218;long BgL_lastzd2matchzd2_3219;long BgL_forwardz00_3220;long BgL_bufposz00_3221;obj_t BgL_iportz00_3206;long BgL_lastzd2matchzd2_3207;long BgL_forwardz00_3208;long BgL_bufposz00_3209;
{ /* Ieee/input.scm 298 */
bool_t BgL_test5603z00_10426;
{ /* Ieee/input.scm 298 */
obj_t BgL_arg2424z00_3194;
{ /* Ieee/input.scm 298 */
obj_t BgL_res3918z00_5830;
if(
INPUT_PORTP(BgL_ipz00_35))
{ /* Ieee/input.scm 298 */
BgL_res3918z00_5830 = BgL_ipz00_35; }  else 
{ 
obj_t BgL_auxz00_10429;
BgL_auxz00_10429 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5012z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_35); 
FAILURE(BgL_auxz00_10429,BFALSE,BFALSE);} 
BgL_arg2424z00_3194 = BgL_res3918z00_5830; } 
{ /* Ieee/input.scm 298 */
bool_t BgL_res3919z00_5832;
BgL_res3919z00_5832 = 
INPUT_PORT_CLOSEP(BgL_arg2424z00_3194); 
BgL_test5603z00_10426 = BgL_res3919z00_5832; } } 
if(BgL_test5603z00_10426)
{ /* Ieee/input.scm 298 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg2419z00_3188;
{ /* Ieee/input.scm 298 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1046z00_3189;
{ /* Ieee/input.scm 298 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1045z00_3192;
BgL_new1045z00_3192 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Ieee/input.scm 298 */
long BgL_arg2422z00_3193;
{ /* Ieee/input.scm 298 */
long BgL_res3920z00_5834;
BgL_res3920z00_5834 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg2422z00_3193 = BgL_res3920z00_5834; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1045z00_3192), BgL_arg2422z00_3193); } 
BgL_new1046z00_3189 = BgL_new1045z00_3192; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_3189)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_3189)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_10442;
{ /* Ieee/input.scm 298 */
obj_t BgL_arg2420z00_3190;
{ /* Ieee/input.scm 298 */
obj_t BgL_arg2421z00_3191;
{ /* Ieee/input.scm 298 */
obj_t BgL_res3921z00_5838;
{ /* Ieee/input.scm 298 */
obj_t BgL_classz00_5837;
BgL_classz00_5837 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res3921z00_5838 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_5837); } 
BgL_arg2421z00_3191 = BgL_res3921z00_5838; } 
BgL_arg2420z00_3190 = 
VECTOR_REF(BgL_arg2421z00_3191,((long)2)); } 
{ /* Ieee/input.scm 298 */
obj_t BgL_auxz00_10446;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2420z00_3190))
{ /* Ieee/input.scm 298 */
BgL_auxz00_10446 = BgL_arg2420z00_3190
; }  else 
{ 
obj_t BgL_auxz00_10449;
BgL_auxz00_10449 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5012z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg2420z00_3190); 
FAILURE(BgL_auxz00_10449,BFALSE,BFALSE);} 
BgL_auxz00_10442 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_10446); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_3189)))->BgL_stackz00)=((obj_t)BgL_auxz00_10442),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_3189)))->BgL_procz00)=((obj_t)BGl_string4908z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_3189)))->BgL_msgz00)=((obj_t)BGl_string4924z00zz__r4_input_6_10_2z00),BUNSPEC); 
{ 
obj_t BgL_auxz00_10459;
{ /* Ieee/input.scm 298 */
obj_t BgL_res3922z00_5840;
if(
INPUT_PORTP(BgL_ipz00_35))
{ /* Ieee/input.scm 298 */
BgL_res3922z00_5840 = BgL_ipz00_35; }  else 
{ 
obj_t BgL_auxz00_10463;
BgL_auxz00_10463 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5012z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_35); 
FAILURE(BgL_auxz00_10463,BFALSE,BFALSE);} 
BgL_auxz00_10459 = BgL_res3922z00_5840; } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_3189)))->BgL_objz00)=((obj_t)BgL_auxz00_10459),BUNSPEC); } 
BgL_arg2419z00_3188 = BgL_new1046z00_3189; } 
{ /* Ieee/input.scm 298 */
obj_t BgL_aux4709z00_7234;
BgL_aux4709z00_7234 = 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2419z00_3188)); 
if(
STRINGP(BgL_aux4709z00_7234))
{ /* Ieee/input.scm 298 */
return BgL_aux4709z00_7234;}  else 
{ 
obj_t BgL_auxz00_10472;
BgL_auxz00_10472 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5012z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_aux4709z00_7234); 
FAILURE(BgL_auxz00_10472,BFALSE,BFALSE);} } }  else 
{ /* Ieee/input.scm 298 */
obj_t BgL_aux4711z00_7236;
{ /* Ieee/input.scm 298 */
long BgL_res3912z00_5794;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5793;
if(
INPUT_PORTP(BgL_ipz00_35))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5793 = BgL_ipz00_35; }  else 
{ 
obj_t BgL_auxz00_10478;
BgL_auxz00_10478 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_35); 
FAILURE(BgL_auxz00_10478,BFALSE,BFALSE);} 
BgL_res3912z00_5794 = 
RGC_START_MATCH(BgL_inputzd2portzd2_5793); } BgL_res3912z00_5794; } 
{ /* Ieee/input.scm 298 */
long BgL_matchz00_3349;
{ /* Ieee/input.scm 298 */
long BgL_arg2553z00_3356;long BgL_arg2554z00_3357;
{ /* Ieee/input.scm 298 */
long BgL_res3913z00_5796;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5795;
if(
INPUT_PORTP(BgL_ipz00_35))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5795 = BgL_ipz00_35; }  else 
{ 
obj_t BgL_auxz00_10485;
BgL_auxz00_10485 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_35); 
FAILURE(BgL_auxz00_10485,BFALSE,BFALSE);} 
BgL_res3913z00_5796 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5795); } 
BgL_arg2553z00_3356 = BgL_res3913z00_5796; } 
{ /* Ieee/input.scm 298 */
long BgL_res3914z00_5798;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5797;
if(
INPUT_PORTP(BgL_ipz00_35))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5797 = BgL_ipz00_35; }  else 
{ 
obj_t BgL_auxz00_10492;
BgL_auxz00_10492 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_35); 
FAILURE(BgL_auxz00_10492,BFALSE,BFALSE);} 
BgL_res3914z00_5798 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5797); } 
BgL_arg2554z00_3357 = BgL_res3914z00_5798; } 
{ 
long BgL_forwardz00_5800;long BgL_bufposz00_5801;
BgL_forwardz00_5800 = BgL_arg2553z00_3356; 
BgL_bufposz00_5801 = BgL_arg2554z00_3357; 
BgL_statezd20zd21099z00_5799:
if(
(BgL_forwardz00_5800==BgL_bufposz00_5801))
{ /* Ieee/input.scm 298 */
bool_t BgL_test5612z00_10499;
{ /* Ieee/input.scm 298 */
bool_t BgL_res3890z00_5807;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5808;
if(
INPUT_PORTP(BgL_ipz00_35))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5808 = BgL_ipz00_35; }  else 
{ 
obj_t BgL_auxz00_10502;
BgL_auxz00_10502 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5015z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_35); 
FAILURE(BgL_auxz00_10502,BFALSE,BFALSE);} 
BgL_res3890z00_5807 = 
rgc_fill_buffer(BgL_inputzd2portzd2_5808); } 
BgL_test5612z00_10499 = BgL_res3890z00_5807; } 
if(BgL_test5612z00_10499)
{ /* Ieee/input.scm 298 */
long BgL_arg2428z00_5809;long BgL_arg2430z00_5810;
{ /* Ieee/input.scm 298 */
long BgL_res3891z00_5811;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5812;
if(
INPUT_PORTP(BgL_ipz00_35))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5812 = BgL_ipz00_35; }  else 
{ 
obj_t BgL_auxz00_10509;
BgL_auxz00_10509 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5015z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_35); 
FAILURE(BgL_auxz00_10509,BFALSE,BFALSE);} 
BgL_res3891z00_5811 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5812); } 
BgL_arg2428z00_5809 = BgL_res3891z00_5811; } 
{ /* Ieee/input.scm 298 */
long BgL_res3892z00_5813;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5814;
if(
INPUT_PORTP(BgL_ipz00_35))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5814 = BgL_ipz00_35; }  else 
{ 
obj_t BgL_auxz00_10516;
BgL_auxz00_10516 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5015z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_35); 
FAILURE(BgL_auxz00_10516,BFALSE,BFALSE);} 
BgL_res3892z00_5813 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5814); } 
BgL_arg2430z00_5810 = BgL_res3892z00_5813; } 
{ 
long BgL_bufposz00_10522;long BgL_forwardz00_10521;
BgL_forwardz00_10521 = BgL_arg2428z00_5809; 
BgL_bufposz00_10522 = BgL_arg2430z00_5810; 
BgL_bufposz00_5801 = BgL_bufposz00_10522; 
BgL_forwardz00_5800 = BgL_forwardz00_10521; 
goto BgL_statezd20zd21099z00_5799;} }  else 
{ /* Ieee/input.scm 298 */
BgL_matchz00_3349 = ((long)1); } }  else 
{ /* Ieee/input.scm 298 */
int BgL_curz00_5815;
{ /* Ieee/input.scm 298 */
int BgL_res3893z00_5816;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5817;
if(
INPUT_PORTP(BgL_ipz00_35))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5817 = BgL_ipz00_35; }  else 
{ 
obj_t BgL_auxz00_10525;
BgL_auxz00_10525 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5015z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_35); 
FAILURE(BgL_auxz00_10525,BFALSE,BFALSE);} 
BgL_res3893z00_5816 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5817, BgL_forwardz00_5800); } 
BgL_curz00_5815 = BgL_res3893z00_5816; } 
{ /* Ieee/input.scm 298 */

BgL_iportz00_3218 = BgL_ipz00_35; 
BgL_lastzd2matchzd2_3219 = ((long)1); 
BgL_forwardz00_3220 = 
(((long)1)+BgL_forwardz00_5800); 
BgL_bufposz00_3221 = BgL_bufposz00_5801; 
BgL_zc3z04anonymousza32439ze3z87_3222:
{ /* Ieee/input.scm 298 */
long BgL_newzd2matchzd2_3223;
{ /* Ieee/input.scm 298 */
long BgL_res3902z00_5770;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5768;
if(
INPUT_PORTP(BgL_iportz00_3218))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5768 = BgL_iportz00_3218; }  else 
{ 
obj_t BgL_auxz00_10532;
BgL_auxz00_10532 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5014z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_3218); 
FAILURE(BgL_auxz00_10532,BFALSE,BFALSE);} 
BgL_res3902z00_5770 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5768, BgL_forwardz00_3220); } BgL_res3902z00_5770; } 
BgL_newzd2matchzd2_3223 = ((long)0); 
if(
(BgL_forwardz00_3220==BgL_bufposz00_3221))
{ /* Ieee/input.scm 298 */
bool_t BgL_test5619z00_10539;
{ /* Ieee/input.scm 298 */
bool_t BgL_res3904z00_5775;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5774;
if(
INPUT_PORTP(BgL_iportz00_3218))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5774 = BgL_iportz00_3218; }  else 
{ 
obj_t BgL_auxz00_10542;
BgL_auxz00_10542 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5014z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_3218); 
FAILURE(BgL_auxz00_10542,BFALSE,BFALSE);} 
BgL_res3904z00_5775 = 
rgc_fill_buffer(BgL_inputzd2portzd2_5774); } 
BgL_test5619z00_10539 = BgL_res3904z00_5775; } 
if(BgL_test5619z00_10539)
{ /* Ieee/input.scm 298 */
long BgL_arg2443z00_3226;long BgL_arg2444z00_3227;
{ /* Ieee/input.scm 298 */
long BgL_res3905z00_5777;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5776;
if(
INPUT_PORTP(BgL_iportz00_3218))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5776 = BgL_iportz00_3218; }  else 
{ 
obj_t BgL_auxz00_10549;
BgL_auxz00_10549 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5014z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_3218); 
FAILURE(BgL_auxz00_10549,BFALSE,BFALSE);} 
BgL_res3905z00_5777 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5776); } 
BgL_arg2443z00_3226 = BgL_res3905z00_5777; } 
{ /* Ieee/input.scm 298 */
long BgL_res3906z00_5779;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5778;
if(
INPUT_PORTP(BgL_iportz00_3218))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5778 = BgL_iportz00_3218; }  else 
{ 
obj_t BgL_auxz00_10556;
BgL_auxz00_10556 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5014z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_3218); 
FAILURE(BgL_auxz00_10556,BFALSE,BFALSE);} 
BgL_res3906z00_5779 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5778); } 
BgL_arg2444z00_3227 = BgL_res3906z00_5779; } 
{ 
long BgL_bufposz00_10562;long BgL_forwardz00_10561;
BgL_forwardz00_10561 = BgL_arg2443z00_3226; 
BgL_bufposz00_10562 = BgL_arg2444z00_3227; 
BgL_bufposz00_3221 = BgL_bufposz00_10562; 
BgL_forwardz00_3220 = BgL_forwardz00_10561; 
goto BgL_zc3z04anonymousza32439ze3z87_3222;} }  else 
{ /* Ieee/input.scm 298 */
BgL_matchz00_3349 = BgL_newzd2matchzd2_3223; } }  else 
{ /* Ieee/input.scm 298 */
int BgL_curz00_3228;
{ /* Ieee/input.scm 298 */
int BgL_res3907z00_5782;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5780;
if(
INPUT_PORTP(BgL_iportz00_3218))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5780 = BgL_iportz00_3218; }  else 
{ 
obj_t BgL_auxz00_10565;
BgL_auxz00_10565 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5014z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_3218); 
FAILURE(BgL_auxz00_10565,BFALSE,BFALSE);} 
BgL_res3907z00_5782 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5780, BgL_forwardz00_3220); } 
BgL_curz00_3228 = BgL_res3907z00_5782; } 
{ /* Ieee/input.scm 298 */

BgL_iportz00_3206 = BgL_iportz00_3218; 
BgL_lastzd2matchzd2_3207 = BgL_newzd2matchzd2_3223; 
BgL_forwardz00_3208 = 
(((long)1)+BgL_forwardz00_3220); 
BgL_bufposz00_3209 = BgL_bufposz00_3221; 
BgL_zc3z04anonymousza32432ze3z87_3210:
{ /* Ieee/input.scm 298 */
long BgL_newzd2matchzd2_3211;
{ /* Ieee/input.scm 298 */
long BgL_res3895z00_5753;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5751;
if(
INPUT_PORTP(BgL_iportz00_3206))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5751 = BgL_iportz00_3206; }  else 
{ 
obj_t BgL_auxz00_10572;
BgL_auxz00_10572 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5013z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_3206); 
FAILURE(BgL_auxz00_10572,BFALSE,BFALSE);} 
BgL_res3895z00_5753 = 
RGC_STOP_MATCH(BgL_inputzd2portzd2_5751, BgL_forwardz00_3208); } BgL_res3895z00_5753; } 
BgL_newzd2matchzd2_3211 = ((long)0); 
if(
(BgL_forwardz00_3208==BgL_bufposz00_3209))
{ /* Ieee/input.scm 298 */
bool_t BgL_test5626z00_10579;
{ /* Ieee/input.scm 298 */
bool_t BgL_res3897z00_5758;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5757;
if(
INPUT_PORTP(BgL_iportz00_3206))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5757 = BgL_iportz00_3206; }  else 
{ 
obj_t BgL_auxz00_10582;
BgL_auxz00_10582 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5013z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_3206); 
FAILURE(BgL_auxz00_10582,BFALSE,BFALSE);} 
BgL_res3897z00_5758 = 
rgc_fill_buffer(BgL_inputzd2portzd2_5757); } 
BgL_test5626z00_10579 = BgL_res3897z00_5758; } 
if(BgL_test5626z00_10579)
{ /* Ieee/input.scm 298 */
long BgL_arg2435z00_3214;long BgL_arg2437z00_3215;
{ /* Ieee/input.scm 298 */
long BgL_res3898z00_5760;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5759;
if(
INPUT_PORTP(BgL_iportz00_3206))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5759 = BgL_iportz00_3206; }  else 
{ 
obj_t BgL_auxz00_10589;
BgL_auxz00_10589 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5013z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_3206); 
FAILURE(BgL_auxz00_10589,BFALSE,BFALSE);} 
BgL_res3898z00_5760 = 
RGC_BUFFER_FORWARD(BgL_inputzd2portzd2_5759); } 
BgL_arg2435z00_3214 = BgL_res3898z00_5760; } 
{ /* Ieee/input.scm 298 */
long BgL_res3899z00_5762;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5761;
if(
INPUT_PORTP(BgL_iportz00_3206))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5761 = BgL_iportz00_3206; }  else 
{ 
obj_t BgL_auxz00_10596;
BgL_auxz00_10596 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5013z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_3206); 
FAILURE(BgL_auxz00_10596,BFALSE,BFALSE);} 
BgL_res3899z00_5762 = 
RGC_BUFFER_BUFPOS(BgL_inputzd2portzd2_5761); } 
BgL_arg2437z00_3215 = BgL_res3899z00_5762; } 
{ 
long BgL_bufposz00_10602;long BgL_forwardz00_10601;
BgL_forwardz00_10601 = BgL_arg2435z00_3214; 
BgL_bufposz00_10602 = BgL_arg2437z00_3215; 
BgL_bufposz00_3209 = BgL_bufposz00_10602; 
BgL_forwardz00_3208 = BgL_forwardz00_10601; 
goto BgL_zc3z04anonymousza32432ze3z87_3210;} }  else 
{ /* Ieee/input.scm 298 */
BgL_matchz00_3349 = BgL_newzd2matchzd2_3211; } }  else 
{ /* Ieee/input.scm 298 */
int BgL_curz00_3216;
{ /* Ieee/input.scm 298 */
int BgL_res3900z00_5765;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5763;
if(
INPUT_PORTP(BgL_iportz00_3206))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5763 = BgL_iportz00_3206; }  else 
{ 
obj_t BgL_auxz00_10605;
BgL_auxz00_10605 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5013z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_iportz00_3206); 
FAILURE(BgL_auxz00_10605,BFALSE,BFALSE);} 
BgL_res3900z00_5765 = 
RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_5763, BgL_forwardz00_3208); } 
BgL_curz00_3216 = BgL_res3900z00_5765; } 
{ /* Ieee/input.scm 298 */

{ 
long BgL_forwardz00_10611;long BgL_lastzd2matchzd2_10610;
BgL_lastzd2matchzd2_10610 = BgL_newzd2matchzd2_3211; 
BgL_forwardz00_10611 = 
(((long)1)+BgL_forwardz00_3208); 
BgL_forwardz00_3208 = BgL_forwardz00_10611; 
BgL_lastzd2matchzd2_3207 = BgL_lastzd2matchzd2_10610; 
goto BgL_zc3z04anonymousza32432ze3z87_3210;} } } } } } } } } } } 
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5822;
if(
INPUT_PORTP(BgL_ipz00_35))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5822 = BgL_ipz00_35; }  else 
{ 
obj_t BgL_auxz00_10617;
BgL_auxz00_10617 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_35); 
FAILURE(BgL_auxz00_10617,BFALSE,BFALSE);} 
RGC_SET_FILEPOS(BgL_inputzd2portzd2_5822); } 
{ 

{ /* Ieee/input.scm 298 */
obj_t BgL_aux1216z00_3354;
BgL_aux1216z00_3354 = 
BINT(BgL_matchz00_3349); 
switch( 
(long)CINT(BgL_aux1216z00_3354)) { case ((long)1) : 

BgL_aux4711z00_7236 = BGl_string4998z00zz__r4_input_6_10_2z00; break;case ((long)0) : 

{ /* Ieee/input.scm 299 */
obj_t BgL_res3917z00_5829;
{ /* Ieee/input.scm 298 */
long BgL_arg2453z00_5823;
{ /* Ieee/input.scm 298 */
long BgL_res3915z00_5825;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5824;
if(
INPUT_PORTP(BgL_ipz00_35))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5824 = BgL_ipz00_35; }  else 
{ 
obj_t BgL_auxz00_10625;
BgL_auxz00_10625 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_35); 
FAILURE(BgL_auxz00_10625,BFALSE,BFALSE);} 
BgL_res3915z00_5825 = 
RGC_BUFFER_MATCH_LENGTH(BgL_inputzd2portzd2_5824); } 
BgL_arg2453z00_5823 = BgL_res3915z00_5825; } 
{ /* Ieee/input.scm 298 */
obj_t BgL_res3916z00_5828;
{ /* Ieee/input.scm 298 */
obj_t BgL_inputzd2portzd2_5826;
if(
INPUT_PORTP(BgL_ipz00_35))
{ /* Ieee/input.scm 298 */
BgL_inputzd2portzd2_5826 = BgL_ipz00_35; }  else 
{ 
obj_t BgL_auxz00_10632;
BgL_auxz00_10632 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string4906z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_35); 
FAILURE(BgL_auxz00_10632,BFALSE,BFALSE);} 
BgL_res3916z00_5828 = 
rgc_buffer_substring(BgL_inputzd2portzd2_5826, ((long)0), BgL_arg2453z00_5823); } 
BgL_res3917z00_5829 = BgL_res3916z00_5828; } } 
BgL_aux4711z00_7236 = BgL_res3917z00_5829; } break;
default: 
BgL_aux4711z00_7236 = 
BGl_errorz00zz__errorz00(BGl_string4908z00zz__r4_input_6_10_2z00, BGl_string4909z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_3349)); } } } } 
if(
STRINGP(BgL_aux4711z00_7236))
{ /* Ieee/input.scm 298 */
return BgL_aux4711z00_7236;}  else 
{ 
obj_t BgL_auxz00_10643;
BgL_auxz00_10643 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)11873)), BGl_string5012z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_aux4711z00_7236); 
FAILURE(BgL_auxz00_10643,BFALSE,BFALSE);} } } } } 

}



/* _read-of-strings */
obj_t BGl__readzd2ofzd2stringsz00zz__r4_input_6_10_2z00(obj_t BgL_env1277z00_40, obj_t BgL_opt1276z00_39)
{
{ /* Ieee/input.scm 320 */
{ /* Ieee/input.scm 320 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1276z00_39)) { case ((long)0) : 

{ /* Ieee/input.scm 320 */
obj_t BgL_ipz00_3391;
{ /* Ieee/input.scm 320 */
obj_t BgL_res3923z00_5842;
{ /* Ieee/input.scm 320 */
obj_t BgL_tmpz00_10647;
BgL_tmpz00_10647 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3923z00_5842 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_10647); } 
BgL_ipz00_3391 = BgL_res3923z00_5842; } 
{ /* Ieee/input.scm 320 */

return 
BGl_z62zc3z04anonymousza31395ze3ze5zz__r4_input_6_10_2z00(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00, BgL_ipz00_3391);} } break;case ((long)1) : 

{ /* Ieee/input.scm 320 */
obj_t BgL_ipz00_3392;
BgL_ipz00_3392 = 
VECTOR_REF(BgL_opt1276z00_39,((long)0)); 
{ /* Ieee/input.scm 320 */

return 
BGl_z62zc3z04anonymousza31395ze3ze5zz__r4_input_6_10_2z00(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00, BgL_ipz00_3392);} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol5016z00zz__r4_input_6_10_2z00, BGl_string4977z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1276z00_39)));} } } } 

}



/* read-of-strings */
BGL_EXPORTED_DEF obj_t BGl_readzd2ofzd2stringsz00zz__r4_input_6_10_2z00(obj_t BgL_ipz00_38)
{
{ /* Ieee/input.scm 320 */
return 
BGl_z62zc3z04anonymousza31395ze3ze5zz__r4_input_6_10_2z00(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00, BgL_ipz00_38);} 

}



/* _read-chars */
obj_t BGl__readzd2charszd2zz__r4_input_6_10_2z00(obj_t BgL_env1281z00_44, obj_t BgL_opt1280z00_43)
{
{ /* Ieee/input.scm 326 */
{ /* Ieee/input.scm 326 */
obj_t BgL_g1282z00_3394;
BgL_g1282z00_3394 = 
VECTOR_REF(BgL_opt1280z00_43,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1280z00_43)) { case ((long)1) : 

{ /* Ieee/input.scm 326 */
obj_t BgL_ipz00_3398;
{ /* Ieee/input.scm 326 */
obj_t BgL_res3924z00_5844;
{ /* Ieee/input.scm 326 */
obj_t BgL_tmpz00_10669;
BgL_tmpz00_10669 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3924z00_5844 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_10669); } 
BgL_ipz00_3398 = BgL_res3924z00_5844; } 
{ /* Ieee/input.scm 326 */

return 
BGl_readzd2charszd2zz__r4_input_6_10_2z00(BgL_g1282z00_3394, BgL_ipz00_3398);} } break;case ((long)2) : 

{ /* Ieee/input.scm 326 */
obj_t BgL_ipz00_3399;
BgL_ipz00_3399 = 
VECTOR_REF(BgL_opt1280z00_43,((long)1)); 
{ /* Ieee/input.scm 326 */

return 
BGl_readzd2charszd2zz__r4_input_6_10_2z00(BgL_g1282z00_3394, BgL_ipz00_3399);} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol5018z00zz__r4_input_6_10_2z00, BGl_string5020z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1280z00_43)));} } } } 

}



/* read-chars */
BGL_EXPORTED_DEF obj_t BGl_readzd2charszd2zz__r4_input_6_10_2z00(obj_t BgL_lz00_41, obj_t BgL_ipz00_42)
{
{ /* Ieee/input.scm 326 */
{ /* Ieee/input.scm 327 */
obj_t BgL_lenz00_3401;
if(
INTEGERP(BgL_lz00_41))
{ /* Ieee/input.scm 328 */
BgL_lenz00_3401 = BgL_lz00_41; }  else 
{ /* Ieee/input.scm 328 */
if(
ELONGP(BgL_lz00_41))
{ /* Ieee/input.scm 329 */
long BgL_res3927z00_5848;
{ /* Ieee/input.scm 329 */
long BgL_xz00_5847;
BgL_xz00_5847 = 
BELONG_TO_LONG(BgL_lz00_41); 
BgL_res3927z00_5848 = 
(long)(BgL_xz00_5847); } 
BgL_lenz00_3401 = 
BINT(BgL_res3927z00_5848); }  else 
{ /* Ieee/input.scm 329 */
if(
LLONGP(BgL_lz00_41))
{ /* Ieee/input.scm 330 */
long BgL_res3929z00_5851;
{ /* Ieee/input.scm 330 */
BGL_LONGLONG_T BgL_tmpz00_10689;
BgL_tmpz00_10689 = 
BLLONG_TO_LLONG(BgL_lz00_41); 
BgL_res3929z00_5851 = 
LLONG_TO_LONG(BgL_tmpz00_10689); } 
BgL_lenz00_3401 = 
BINT(BgL_res3929z00_5851); }  else 
{ /* Ieee/input.scm 332 */
obj_t BgL_arg2573z00_3418;
BgL_arg2573z00_3418 = 
bgl_find_runtime_type(BgL_lz00_41); 
BgL_lenz00_3401 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_symbol5018z00zz__r4_input_6_10_2z00, BGl_string5021z00zz__r4_input_6_10_2z00, BgL_arg2573z00_3418); } } } 
{ /* Ieee/input.scm 334 */
bool_t BgL_test5638z00_10695;
{ /* Ieee/input.scm 334 */
long BgL_n1z00_5852;
{ /* Ieee/input.scm 334 */
obj_t BgL_tmpz00_10696;
if(
INTEGERP(BgL_lenz00_3401))
{ /* Ieee/input.scm 334 */
BgL_tmpz00_10696 = BgL_lenz00_3401
; }  else 
{ 
obj_t BgL_auxz00_10699;
BgL_auxz00_10699 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)13328)), BGl_string5019z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_lenz00_3401); 
FAILURE(BgL_auxz00_10699,BFALSE,BFALSE);} 
BgL_n1z00_5852 = 
(long)CINT(BgL_tmpz00_10696); } 
BgL_test5638z00_10695 = 
(BgL_n1z00_5852<=((long)0)); } 
if(BgL_test5638z00_10695)
{ /* Ieee/input.scm 335 */
bool_t BgL_test5640z00_10705;
{ /* Ieee/input.scm 335 */
long BgL_n1z00_5854;
{ /* Ieee/input.scm 335 */
obj_t BgL_tmpz00_10706;
if(
INTEGERP(BgL_lenz00_3401))
{ /* Ieee/input.scm 335 */
BgL_tmpz00_10706 = BgL_lenz00_3401
; }  else 
{ 
obj_t BgL_auxz00_10709;
BgL_auxz00_10709 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)13347)), BGl_string5019z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_lenz00_3401); 
FAILURE(BgL_auxz00_10709,BFALSE,BFALSE);} 
BgL_n1z00_5854 = 
(long)CINT(BgL_tmpz00_10706); } 
BgL_test5640z00_10705 = 
(BgL_n1z00_5854==((long)0)); } 
if(BgL_test5640z00_10705)
{ /* Ieee/input.scm 335 */
return BGl_string4998z00zz__r4_input_6_10_2z00;}  else 
{ /* Ieee/input.scm 338 */
BgL_z62iozd2errorzb0_bglt BgL_arg2562z00_3404;
{ /* Ieee/input.scm 338 */
BgL_z62iozd2errorzb0_bglt BgL_new1120z00_3405;
{ /* Ieee/input.scm 338 */
BgL_z62iozd2errorzb0_bglt BgL_new1119z00_3408;
BgL_new1119z00_3408 = 
((BgL_z62iozd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2errorzb0_bgl) ))); 
{ /* Ieee/input.scm 338 */
long BgL_arg2566z00_3409;
{ /* Ieee/input.scm 338 */
long BgL_res3932z00_5857;
BgL_res3932z00_5857 = 
BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00); 
BgL_arg2566z00_3409 = BgL_res3932z00_5857; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1119z00_3408), BgL_arg2566z00_3409); } 
BgL_new1120z00_3405 = BgL_new1119z00_3408; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1120z00_3405)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1120z00_3405)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_10723;
{ /* Ieee/input.scm 338 */
obj_t BgL_arg2564z00_3406;
{ /* Ieee/input.scm 338 */
obj_t BgL_arg2565z00_3407;
{ /* Ieee/input.scm 338 */
obj_t BgL_res3933z00_5861;
{ /* Ieee/input.scm 338 */
obj_t BgL_classz00_5860;
BgL_classz00_5860 = BGl_z62iozd2errorzb0zz__objectz00; 
BgL_res3933z00_5861 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_5860); } 
BgL_arg2565z00_3407 = BgL_res3933z00_5861; } 
BgL_arg2564z00_3406 = 
VECTOR_REF(BgL_arg2565z00_3407,((long)2)); } 
{ /* Ieee/input.scm 338 */
obj_t BgL_auxz00_10727;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2564z00_3406))
{ /* Ieee/input.scm 338 */
BgL_auxz00_10727 = BgL_arg2564z00_3406
; }  else 
{ 
obj_t BgL_auxz00_10730;
BgL_auxz00_10730 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)13386)), BGl_string5019z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg2564z00_3406); 
FAILURE(BgL_auxz00_10730,BFALSE,BFALSE);} 
BgL_auxz00_10723 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_10727); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1120z00_3405)))->BgL_stackz00)=((obj_t)BgL_auxz00_10723),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1120z00_3405)))->BgL_procz00)=((obj_t)BGl_symbol5018z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1120z00_3405)))->BgL_msgz00)=((obj_t)BGl_string5023z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1120z00_3405)))->BgL_objz00)=((obj_t)BgL_lenz00_3401),BUNSPEC); 
BgL_arg2562z00_3404 = BgL_new1120z00_3405; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2562z00_3404));} }  else 
{ /* Ieee/input.scm 343 */
obj_t BgL_sz00_3410;
{ /* Ieee/input.scm 343 */
long BgL_tmpz00_10744;
{ /* Ieee/input.scm 343 */
obj_t BgL_tmpz00_10745;
if(
INTEGERP(BgL_lenz00_3401))
{ /* Ieee/input.scm 343 */
BgL_tmpz00_10745 = BgL_lenz00_3401
; }  else 
{ 
obj_t BgL_auxz00_10748;
BgL_auxz00_10748 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)13530)), BGl_string5019z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_lenz00_3401); 
FAILURE(BgL_auxz00_10748,BFALSE,BFALSE);} 
BgL_tmpz00_10744 = 
(long)CINT(BgL_tmpz00_10745); } 
BgL_sz00_3410 = 
make_string_sans_fill(BgL_tmpz00_10744); } 
{ /* Ieee/input.scm 343 */
long BgL_nz00_3411;
{ /* Ieee/input.scm 344 */
long BgL_auxz00_10761;obj_t BgL_tmpz00_10754;
{ /* Ieee/input.scm 344 */
obj_t BgL_tmpz00_10763;
if(
INTEGERP(BgL_lenz00_3401))
{ /* Ieee/input.scm 344 */
BgL_tmpz00_10763 = BgL_lenz00_3401
; }  else 
{ 
obj_t BgL_auxz00_10766;
BgL_auxz00_10766 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)13568)), BGl_string5019z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_lenz00_3401); 
FAILURE(BgL_auxz00_10766,BFALSE,BFALSE);} 
BgL_auxz00_10761 = 
(long)CINT(BgL_tmpz00_10763); } 
if(
INPUT_PORTP(BgL_ipz00_42))
{ /* Ieee/input.scm 344 */
BgL_tmpz00_10754 = BgL_ipz00_42
; }  else 
{ 
obj_t BgL_auxz00_10757;
BgL_auxz00_10757 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)13561)), BGl_string5019z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_42); 
FAILURE(BgL_auxz00_10757,BFALSE,BFALSE);} 
BgL_nz00_3411 = 
bgl_rgc_blit_string(BgL_tmpz00_10754, 
BSTRING_TO_STRING(BgL_sz00_3410), ((long)0), BgL_auxz00_10761); } 
{ /* Ieee/input.scm 344 */

if(
(BgL_nz00_3411==((long)0)))
{ /* Ieee/input.scm 347 */
bool_t BgL_test5647z00_10774;
{ /* Ieee/input.scm 347 */
bool_t BgL_res3935z00_5866;
{ /* Ieee/input.scm 347 */
obj_t BgL_inputzd2portzd2_5865;
if(
INPUT_PORTP(BgL_ipz00_42))
{ /* Ieee/input.scm 347 */
BgL_inputzd2portzd2_5865 = BgL_ipz00_42; }  else 
{ 
obj_t BgL_auxz00_10777;
BgL_auxz00_10777 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)13624)), BGl_string5019z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_42); 
FAILURE(BgL_auxz00_10777,BFALSE,BFALSE);} 
BgL_res3935z00_5866 = 
rgc_buffer_eof_p(BgL_inputzd2portzd2_5865); } 
BgL_test5647z00_10774 = BgL_res3935z00_5866; } 
if(BgL_test5647z00_10774)
{ /* Ieee/input.scm 347 */
return BEOF;}  else 
{ /* Ieee/input.scm 347 */
return BGl_string4998z00zz__r4_input_6_10_2z00;} }  else 
{ /* Ieee/input.scm 350 */
bool_t BgL_test5649z00_10782;
{ /* Ieee/input.scm 350 */
long BgL_n2z00_5868;
{ /* Ieee/input.scm 350 */
obj_t BgL_tmpz00_10783;
if(
INTEGERP(BgL_lenz00_3401))
{ /* Ieee/input.scm 350 */
BgL_tmpz00_10783 = BgL_lenz00_3401
; }  else 
{ 
obj_t BgL_auxz00_10786;
BgL_auxz00_10786 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)13662)), BGl_string5019z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_lenz00_3401); 
FAILURE(BgL_auxz00_10786,BFALSE,BFALSE);} 
BgL_n2z00_5868 = 
(long)CINT(BgL_tmpz00_10783); } 
BgL_test5649z00_10782 = 
(BgL_nz00_3411<BgL_n2z00_5868); } 
if(BgL_test5649z00_10782)
{ /* Ieee/input.scm 350 */
return 
bgl_string_shrink(BgL_sz00_3410, BgL_nz00_3411);}  else 
{ /* Ieee/input.scm 350 */
return BgL_sz00_3410;} } } } } } } } 

}



/* _read-chars! */
obj_t BGl__readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t BgL_env1286z00_49, obj_t BgL_opt1285z00_48)
{
{ /* Ieee/input.scm 358 */
{ /* Ieee/input.scm 358 */
obj_t BgL_g1287z00_3419;obj_t BgL_g1288z00_3420;
BgL_g1287z00_3419 = 
VECTOR_REF(BgL_opt1285z00_48,((long)0)); 
BgL_g1288z00_3420 = 
VECTOR_REF(BgL_opt1285z00_48,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1285z00_48)) { case ((long)2) : 

{ /* Ieee/input.scm 358 */
obj_t BgL_ipz00_3424;
{ /* Ieee/input.scm 358 */
obj_t BgL_res3937z00_5873;
{ /* Ieee/input.scm 358 */
obj_t BgL_tmpz00_10795;
BgL_tmpz00_10795 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3937z00_5873 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_10795); } 
BgL_ipz00_3424 = BgL_res3937z00_5873; } 
{ /* Ieee/input.scm 358 */

{ /* Ieee/input.scm 358 */
obj_t BgL_auxz00_10798;
if(
STRINGP(BgL_g1287z00_3419))
{ /* Ieee/input.scm 358 */
BgL_auxz00_10798 = BgL_g1287z00_3419
; }  else 
{ 
obj_t BgL_auxz00_10801;
BgL_auxz00_10801 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)13935)), BGl_string5027z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_g1287z00_3419); 
FAILURE(BgL_auxz00_10801,BFALSE,BFALSE);} 
return 
BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_10798, BgL_g1288z00_3420, BgL_ipz00_3424);} } } break;case ((long)3) : 

{ /* Ieee/input.scm 358 */
obj_t BgL_ipz00_3425;
BgL_ipz00_3425 = 
VECTOR_REF(BgL_opt1285z00_48,((long)2)); 
{ /* Ieee/input.scm 358 */

{ /* Ieee/input.scm 358 */
obj_t BgL_auxz00_10807;
if(
STRINGP(BgL_g1287z00_3419))
{ /* Ieee/input.scm 358 */
BgL_auxz00_10807 = BgL_g1287z00_3419
; }  else 
{ 
obj_t BgL_auxz00_10810;
BgL_auxz00_10810 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)13935)), BGl_string5027z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_g1287z00_3419); 
FAILURE(BgL_auxz00_10810,BFALSE,BFALSE);} 
return 
BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_10807, BgL_g1288z00_3420, BgL_ipz00_3425);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol5024z00zz__r4_input_6_10_2z00, BGl_string5026z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1285z00_48)));} } } } 

}



/* read-chars! */
BGL_EXPORTED_DEF obj_t BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t BgL_bufz00_45, obj_t BgL_lz00_46, obj_t BgL_ipz00_47)
{
{ /* Ieee/input.scm 358 */
{ /* Ieee/input.scm 359 */
obj_t BgL_lenz00_3427;
if(
INTEGERP(BgL_lz00_46))
{ /* Ieee/input.scm 360 */
BgL_lenz00_3427 = BgL_lz00_46; }  else 
{ /* Ieee/input.scm 360 */
if(
ELONGP(BgL_lz00_46))
{ /* Ieee/input.scm 361 */
long BgL_res3940z00_5877;
{ /* Ieee/input.scm 361 */
long BgL_xz00_5876;
BgL_xz00_5876 = 
BELONG_TO_LONG(BgL_lz00_46); 
BgL_res3940z00_5877 = 
(long)(BgL_xz00_5876); } 
BgL_lenz00_3427 = 
BINT(BgL_res3940z00_5877); }  else 
{ /* Ieee/input.scm 361 */
if(
LLONGP(BgL_lz00_46))
{ /* Ieee/input.scm 362 */
long BgL_res3942z00_5880;
{ /* Ieee/input.scm 362 */
BGL_LONGLONG_T BgL_tmpz00_10829;
BgL_tmpz00_10829 = 
BLLONG_TO_LLONG(BgL_lz00_46); 
BgL_res3942z00_5880 = 
LLONG_TO_LONG(BgL_tmpz00_10829); } 
BgL_lenz00_3427 = 
BINT(BgL_res3942z00_5880); }  else 
{ /* Ieee/input.scm 364 */
obj_t BgL_arg2588z00_3443;
BgL_arg2588z00_3443 = 
bgl_find_runtime_type(BgL_lz00_46); 
BgL_lenz00_3427 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_symbol5024z00zz__r4_input_6_10_2z00, BGl_string5021z00zz__r4_input_6_10_2z00, BgL_arg2588z00_3443); } } } 
{ /* Ieee/input.scm 365 */
bool_t BgL_test5656z00_10835;
{ /* Ieee/input.scm 365 */
long BgL_n1z00_5881;
{ /* Ieee/input.scm 365 */
obj_t BgL_tmpz00_10836;
if(
INTEGERP(BgL_lenz00_3427))
{ /* Ieee/input.scm 365 */
BgL_tmpz00_10836 = BgL_lenz00_3427
; }  else 
{ 
obj_t BgL_auxz00_10839;
BgL_auxz00_10839 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)14204)), BGl_string5025z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_lenz00_3427); 
FAILURE(BgL_auxz00_10839,BFALSE,BFALSE);} 
BgL_n1z00_5881 = 
(long)CINT(BgL_tmpz00_10836); } 
BgL_test5656z00_10835 = 
(BgL_n1z00_5881<=((long)0)); } 
if(BgL_test5656z00_10835)
{ /* Ieee/input.scm 366 */
bool_t BgL_test5658z00_10845;
{ /* Ieee/input.scm 366 */
long BgL_n1z00_5883;
{ /* Ieee/input.scm 366 */
obj_t BgL_tmpz00_10846;
if(
INTEGERP(BgL_lenz00_3427))
{ /* Ieee/input.scm 366 */
BgL_tmpz00_10846 = BgL_lenz00_3427
; }  else 
{ 
obj_t BgL_auxz00_10849;
BgL_auxz00_10849 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)14223)), BGl_string5025z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_lenz00_3427); 
FAILURE(BgL_auxz00_10849,BFALSE,BFALSE);} 
BgL_n1z00_5883 = 
(long)CINT(BgL_tmpz00_10846); } 
BgL_test5658z00_10845 = 
(BgL_n1z00_5883==((long)0)); } 
if(BgL_test5658z00_10845)
{ /* Ieee/input.scm 366 */
return 
BINT(((long)0));}  else 
{ /* Ieee/input.scm 369 */
BgL_z62iozd2errorzb0_bglt BgL_arg2578z00_3430;
{ /* Ieee/input.scm 369 */
BgL_z62iozd2errorzb0_bglt BgL_new1123z00_3431;
{ /* Ieee/input.scm 369 */
BgL_z62iozd2errorzb0_bglt BgL_new1122z00_3434;
BgL_new1122z00_3434 = 
((BgL_z62iozd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2errorzb0_bgl) ))); 
{ /* Ieee/input.scm 369 */
long BgL_arg2581z00_3435;
{ /* Ieee/input.scm 369 */
long BgL_res3945z00_5886;
BgL_res3945z00_5886 = 
BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00); 
BgL_arg2581z00_3435 = BgL_res3945z00_5886; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1122z00_3434), BgL_arg2581z00_3435); } 
BgL_new1123z00_3431 = BgL_new1122z00_3434; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1123z00_3431)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1123z00_3431)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_10864;
{ /* Ieee/input.scm 369 */
obj_t BgL_arg2579z00_3432;
{ /* Ieee/input.scm 369 */
obj_t BgL_arg2580z00_3433;
{ /* Ieee/input.scm 369 */
obj_t BgL_res3946z00_5890;
{ /* Ieee/input.scm 369 */
obj_t BgL_classz00_5889;
BgL_classz00_5889 = BGl_z62iozd2errorzb0zz__objectz00; 
BgL_res3946z00_5890 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_5889); } 
BgL_arg2580z00_3433 = BgL_res3946z00_5890; } 
BgL_arg2579z00_3432 = 
VECTOR_REF(BgL_arg2580z00_3433,((long)2)); } 
{ /* Ieee/input.scm 369 */
obj_t BgL_auxz00_10868;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2579z00_3432))
{ /* Ieee/input.scm 369 */
BgL_auxz00_10868 = BgL_arg2579z00_3432
; }  else 
{ 
obj_t BgL_auxz00_10871;
BgL_auxz00_10871 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)14256)), BGl_string5025z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg2579z00_3432); 
FAILURE(BgL_auxz00_10871,BFALSE,BFALSE);} 
BgL_auxz00_10864 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_10868); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1123z00_3431)))->BgL_stackz00)=((obj_t)BgL_auxz00_10864),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1123z00_3431)))->BgL_procz00)=((obj_t)BGl_symbol5018z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1123z00_3431)))->BgL_msgz00)=((obj_t)BGl_string5023z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1123z00_3431)))->BgL_objz00)=((obj_t)BgL_lenz00_3427),BUNSPEC); 
BgL_arg2578z00_3430 = BgL_new1123z00_3431; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2578z00_3430));} }  else 
{ /* Ieee/input.scm 373 */
obj_t BgL_arg2583z00_3436;
{ /* Ieee/input.scm 373 */
long BgL_az00_3437;
BgL_az00_3437 = 
STRING_LENGTH(BgL_bufz00_45); 
{ /* Ieee/input.scm 373 */
bool_t BgL_test5661z00_10886;
{ /* Ieee/input.scm 373 */
long BgL_n2z00_5895;
{ /* Ieee/input.scm 373 */
obj_t BgL_tmpz00_10887;
if(
INTEGERP(BgL_lenz00_3427))
{ /* Ieee/input.scm 373 */
BgL_tmpz00_10887 = BgL_lenz00_3427
; }  else 
{ 
obj_t BgL_auxz00_10890;
BgL_auxz00_10890 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)14393)), BGl_string5025z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_lenz00_3427); 
FAILURE(BgL_auxz00_10890,BFALSE,BFALSE);} 
BgL_n2z00_5895 = 
(long)CINT(BgL_tmpz00_10887); } 
BgL_test5661z00_10886 = 
(BgL_az00_3437<BgL_n2z00_5895); } 
if(BgL_test5661z00_10886)
{ /* Ieee/input.scm 373 */
BgL_arg2583z00_3436 = 
BINT(BgL_az00_3437); }  else 
{ /* Ieee/input.scm 373 */
BgL_arg2583z00_3436 = BgL_lenz00_3427; } } } 
{ /* Ieee/input.scm 373 */
long BgL_tmpz00_10897;
{ /* Ieee/input.scm 373 */
long BgL_auxz00_10905;obj_t BgL_tmpz00_10898;
{ /* Ieee/input.scm 373 */
obj_t BgL_tmpz00_10907;
if(
INTEGERP(BgL_arg2583z00_3436))
{ /* Ieee/input.scm 373 */
BgL_tmpz00_10907 = BgL_arg2583z00_3436
; }  else 
{ 
obj_t BgL_auxz00_10910;
BgL_auxz00_10910 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)14423)), BGl_string5025z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_arg2583z00_3436); 
FAILURE(BgL_auxz00_10910,BFALSE,BFALSE);} 
BgL_auxz00_10905 = 
(long)CINT(BgL_tmpz00_10907); } 
if(
INPUT_PORTP(BgL_ipz00_47))
{ /* Ieee/input.scm 373 */
BgL_tmpz00_10898 = BgL_ipz00_47
; }  else 
{ 
obj_t BgL_auxz00_10901;
BgL_auxz00_10901 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)14384)), BGl_string5025z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_47); 
FAILURE(BgL_auxz00_10901,BFALSE,BFALSE);} 
BgL_tmpz00_10897 = 
bgl_rgc_blit_string(BgL_tmpz00_10898, 
BSTRING_TO_STRING(BgL_bufz00_45), ((long)0), BgL_auxz00_10905); } 
return 
BINT(BgL_tmpz00_10897);} } } } } 

}



/* _read-fill-string! */
obj_t BGl__readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(obj_t BgL_env1292z00_55, obj_t BgL_opt1291z00_54)
{
{ /* Ieee/input.scm 378 */
{ /* Ieee/input.scm 378 */
obj_t BgL_g1293z00_7653;obj_t BgL_g1294z00_7654;obj_t BgL_g1295z00_7655;
BgL_g1293z00_7653 = 
VECTOR_REF(BgL_opt1291z00_54,((long)0)); 
BgL_g1294z00_7654 = 
VECTOR_REF(BgL_opt1291z00_54,((long)1)); 
BgL_g1295z00_7655 = 
VECTOR_REF(BgL_opt1291z00_54,((long)2)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1291z00_54)) { case ((long)3) : 

{ /* Ieee/input.scm 378 */
obj_t BgL_ipz00_7657;
{ /* Ieee/input.scm 378 */
obj_t BgL_res3949z00_7658;
{ /* Ieee/input.scm 378 */
obj_t BgL_tmpz00_10920;
BgL_tmpz00_10920 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3949z00_7658 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_10920); } 
BgL_ipz00_7657 = BgL_res3949z00_7658; } 
{ /* Ieee/input.scm 378 */

{ /* Ieee/input.scm 378 */
obj_t BgL_sz00_7659;long BgL_oz00_7660;long BgL_lenz00_7661;
if(
STRINGP(BgL_g1293z00_7653))
{ /* Ieee/input.scm 378 */
BgL_sz00_7659 = BgL_g1293z00_7653; }  else 
{ 
obj_t BgL_auxz00_10925;
BgL_auxz00_10925 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)14652)), BGl_string5031z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_g1293z00_7653); 
FAILURE(BgL_auxz00_10925,BFALSE,BFALSE);} 
{ /* Ieee/input.scm 378 */
obj_t BgL_tmpz00_10929;
if(
INTEGERP(BgL_g1294z00_7654))
{ /* Ieee/input.scm 378 */
BgL_tmpz00_10929 = BgL_g1294z00_7654
; }  else 
{ 
obj_t BgL_auxz00_10932;
BgL_auxz00_10932 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)14652)), BGl_string5031z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_g1294z00_7654); 
FAILURE(BgL_auxz00_10932,BFALSE,BFALSE);} 
BgL_oz00_7660 = 
(long)CINT(BgL_tmpz00_10929); } 
{ /* Ieee/input.scm 378 */
obj_t BgL_tmpz00_10937;
if(
INTEGERP(BgL_g1295z00_7655))
{ /* Ieee/input.scm 378 */
BgL_tmpz00_10937 = BgL_g1295z00_7655
; }  else 
{ 
obj_t BgL_auxz00_10940;
BgL_auxz00_10940 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)14652)), BGl_string5031z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_g1295z00_7655); 
FAILURE(BgL_auxz00_10940,BFALSE,BFALSE);} 
BgL_lenz00_7661 = 
(long)CINT(BgL_tmpz00_10937); } 
if(
(BgL_lenz00_7661<=((long)0)))
{ /* Ieee/input.scm 386 */
if(
(BgL_lenz00_7661==((long)0)))
{ /* Ieee/input.scm 387 */
return 
BINT(((long)0));}  else 
{ /* Ieee/input.scm 390 */
BgL_z62iozd2errorzb0_bglt BgL_arg2594z00_7662;
{ /* Ieee/input.scm 390 */
BgL_z62iozd2errorzb0_bglt BgL_new1128z00_7663;
{ /* Ieee/input.scm 390 */
BgL_z62iozd2errorzb0_bglt BgL_new1126z00_7664;
BgL_new1126z00_7664 = 
((BgL_z62iozd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2errorzb0_bgl) ))); 
{ /* Ieee/input.scm 390 */
long BgL_arg2597z00_7665;
{ /* Ieee/input.scm 390 */
long BgL_res3952z00_7666;
BgL_res3952z00_7666 = 
BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00); 
BgL_arg2597z00_7665 = BgL_res3952z00_7666; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1126z00_7664), BgL_arg2597z00_7665); } 
BgL_new1128z00_7663 = BgL_new1126z00_7664; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1128z00_7663)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1128z00_7663)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_10958;
{ /* Ieee/input.scm 390 */
obj_t BgL_arg2595z00_7667;
{ /* Ieee/input.scm 390 */
obj_t BgL_arg2596z00_7668;
{ /* Ieee/input.scm 390 */
obj_t BgL_res3953z00_7669;
{ /* Ieee/input.scm 390 */
obj_t BgL_classz00_7670;
BgL_classz00_7670 = BGl_z62iozd2errorzb0zz__objectz00; 
BgL_res3953z00_7669 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_7670); } 
BgL_arg2596z00_7668 = BgL_res3953z00_7669; } 
BgL_arg2595z00_7667 = 
VECTOR_REF(BgL_arg2596z00_7668,((long)2)); } 
{ /* Ieee/input.scm 390 */
obj_t BgL_auxz00_10962;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2595z00_7667))
{ /* Ieee/input.scm 390 */
BgL_auxz00_10962 = BgL_arg2595z00_7667
; }  else 
{ 
obj_t BgL_auxz00_10965;
BgL_auxz00_10965 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)15052)), BGl_string5031z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg2595z00_7667); 
FAILURE(BgL_auxz00_10965,BFALSE,BFALSE);} 
BgL_auxz00_10958 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_10962); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1128z00_7663)))->BgL_stackz00)=((obj_t)BgL_auxz00_10958),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1128z00_7663)))->BgL_procz00)=((obj_t)BGl_symbol5018z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1128z00_7663)))->BgL_msgz00)=((obj_t)BGl_string5023z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1128z00_7663)))->BgL_objz00)=((obj_t)
BINT(BgL_lenz00_7661)),BUNSPEC); 
BgL_arg2594z00_7662 = BgL_new1128z00_7663; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2594z00_7662));} }  else 
{ /* Ieee/input.scm 394 */
long BgL_nz00_7671;
{ /* Ieee/input.scm 395 */
long BgL_arg2602z00_7672;
{ /* Ieee/input.scm 395 */
long BgL_bz00_7673;
BgL_bz00_7673 = 
(
STRING_LENGTH(BgL_sz00_7659)-BgL_oz00_7660); 
if(
(BgL_lenz00_7661<BgL_bz00_7673))
{ /* Ieee/input.scm 395 */
BgL_arg2602z00_7672 = BgL_lenz00_7661; }  else 
{ /* Ieee/input.scm 395 */
BgL_arg2602z00_7672 = BgL_bz00_7673; } } 
BgL_nz00_7671 = 
bgl_rgc_blit_string(BgL_ipz00_7657, 
BSTRING_TO_STRING(BgL_sz00_7659), BgL_oz00_7660, BgL_arg2602z00_7672); } 
{ /* Ieee/input.scm 396 */
bool_t BgL_test5672z00_10986;
if(
(BgL_nz00_7671==((long)0)))
{ /* Ieee/input.scm 396 */
BgL_test5672z00_10986 = 
rgc_buffer_eof_p(BgL_ipz00_7657)
; }  else 
{ /* Ieee/input.scm 396 */
BgL_test5672z00_10986 = ((bool_t)0)
; } 
if(BgL_test5672z00_10986)
{ /* Ieee/input.scm 396 */
return BEOF;}  else 
{ /* Ieee/input.scm 396 */
return 
BINT(BgL_nz00_7671);} } } } } } break;case ((long)4) : 

{ /* Ieee/input.scm 378 */
obj_t BgL_ipz00_7674;
BgL_ipz00_7674 = 
VECTOR_REF(BgL_opt1291z00_54,((long)3)); 
{ /* Ieee/input.scm 378 */

{ /* Ieee/input.scm 378 */
obj_t BgL_sz00_7675;long BgL_oz00_7676;long BgL_lenz00_7677;
if(
STRINGP(BgL_g1293z00_7653))
{ /* Ieee/input.scm 378 */
BgL_sz00_7675 = BgL_g1293z00_7653; }  else 
{ 
obj_t BgL_auxz00_10994;
BgL_auxz00_10994 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)14652)), BGl_string5031z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_g1293z00_7653); 
FAILURE(BgL_auxz00_10994,BFALSE,BFALSE);} 
{ /* Ieee/input.scm 378 */
obj_t BgL_tmpz00_10998;
if(
INTEGERP(BgL_g1294z00_7654))
{ /* Ieee/input.scm 378 */
BgL_tmpz00_10998 = BgL_g1294z00_7654
; }  else 
{ 
obj_t BgL_auxz00_11001;
BgL_auxz00_11001 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)14652)), BGl_string5031z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_g1294z00_7654); 
FAILURE(BgL_auxz00_11001,BFALSE,BFALSE);} 
BgL_oz00_7676 = 
(long)CINT(BgL_tmpz00_10998); } 
{ /* Ieee/input.scm 378 */
obj_t BgL_tmpz00_11006;
if(
INTEGERP(BgL_g1295z00_7655))
{ /* Ieee/input.scm 378 */
BgL_tmpz00_11006 = BgL_g1295z00_7655
; }  else 
{ 
obj_t BgL_auxz00_11009;
BgL_auxz00_11009 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)14652)), BGl_string5031z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_g1295z00_7655); 
FAILURE(BgL_auxz00_11009,BFALSE,BFALSE);} 
BgL_lenz00_7677 = 
(long)CINT(BgL_tmpz00_11006); } 
if(
(BgL_lenz00_7677<=((long)0)))
{ /* Ieee/input.scm 386 */
if(
(BgL_lenz00_7677==((long)0)))
{ /* Ieee/input.scm 387 */
return 
BINT(((long)0));}  else 
{ /* Ieee/input.scm 390 */
BgL_z62iozd2errorzb0_bglt BgL_arg2594z00_7678;
{ /* Ieee/input.scm 390 */
BgL_z62iozd2errorzb0_bglt BgL_new1128z00_7679;
{ /* Ieee/input.scm 390 */
BgL_z62iozd2errorzb0_bglt BgL_new1126z00_7680;
BgL_new1126z00_7680 = 
((BgL_z62iozd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2errorzb0_bgl) ))); 
{ /* Ieee/input.scm 390 */
long BgL_arg2597z00_7681;
{ /* Ieee/input.scm 390 */
long BgL_res3960z00_7682;
BgL_res3960z00_7682 = 
BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00); 
BgL_arg2597z00_7681 = BgL_res3960z00_7682; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1126z00_7680), BgL_arg2597z00_7681); } 
BgL_new1128z00_7679 = BgL_new1126z00_7680; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1128z00_7679)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1128z00_7679)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_11027;
{ /* Ieee/input.scm 390 */
obj_t BgL_arg2595z00_7683;
{ /* Ieee/input.scm 390 */
obj_t BgL_arg2596z00_7684;
{ /* Ieee/input.scm 390 */
obj_t BgL_res3961z00_7685;
{ /* Ieee/input.scm 390 */
obj_t BgL_classz00_7686;
BgL_classz00_7686 = BGl_z62iozd2errorzb0zz__objectz00; 
BgL_res3961z00_7685 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_7686); } 
BgL_arg2596z00_7684 = BgL_res3961z00_7685; } 
BgL_arg2595z00_7683 = 
VECTOR_REF(BgL_arg2596z00_7684,((long)2)); } 
{ /* Ieee/input.scm 390 */
obj_t BgL_auxz00_11031;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2595z00_7683))
{ /* Ieee/input.scm 390 */
BgL_auxz00_11031 = BgL_arg2595z00_7683
; }  else 
{ 
obj_t BgL_auxz00_11034;
BgL_auxz00_11034 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)15052)), BGl_string5031z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg2595z00_7683); 
FAILURE(BgL_auxz00_11034,BFALSE,BFALSE);} 
BgL_auxz00_11027 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_11031); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1128z00_7679)))->BgL_stackz00)=((obj_t)BgL_auxz00_11027),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1128z00_7679)))->BgL_procz00)=((obj_t)BGl_symbol5018z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1128z00_7679)))->BgL_msgz00)=((obj_t)BGl_string5023z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1128z00_7679)))->BgL_objz00)=((obj_t)
BINT(BgL_lenz00_7677)),BUNSPEC); 
BgL_arg2594z00_7678 = BgL_new1128z00_7679; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2594z00_7678));} }  else 
{ /* Ieee/input.scm 394 */
long BgL_nz00_7687;
{ /* Ieee/input.scm 395 */
long BgL_arg2602z00_7688;
{ /* Ieee/input.scm 395 */
long BgL_bz00_7689;
BgL_bz00_7689 = 
(
STRING_LENGTH(BgL_sz00_7675)-BgL_oz00_7676); 
if(
(BgL_lenz00_7677<BgL_bz00_7689))
{ /* Ieee/input.scm 395 */
BgL_arg2602z00_7688 = BgL_lenz00_7677; }  else 
{ /* Ieee/input.scm 395 */
BgL_arg2602z00_7688 = BgL_bz00_7689; } } 
{ /* Ieee/input.scm 394 */
obj_t BgL_tmpz00_11053;
if(
INPUT_PORTP(BgL_ipz00_7674))
{ /* Ieee/input.scm 394 */
BgL_tmpz00_11053 = BgL_ipz00_7674
; }  else 
{ 
obj_t BgL_auxz00_11056;
BgL_auxz00_11056 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)15193)), BGl_string5031z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_7674); 
FAILURE(BgL_auxz00_11056,BFALSE,BFALSE);} 
BgL_nz00_7687 = 
bgl_rgc_blit_string(BgL_tmpz00_11053, 
BSTRING_TO_STRING(BgL_sz00_7675), BgL_oz00_7676, BgL_arg2602z00_7688); } } 
{ /* Ieee/input.scm 396 */
bool_t BgL_test5682z00_11062;
if(
(BgL_nz00_7687==((long)0)))
{ /* Ieee/input.scm 396 */
obj_t BgL_tmpz00_11065;
if(
INPUT_PORTP(BgL_ipz00_7674))
{ /* Ieee/input.scm 396 */
BgL_tmpz00_11065 = BgL_ipz00_7674
; }  else 
{ 
obj_t BgL_auxz00_11068;
BgL_auxz00_11068 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)15294)), BGl_string5031z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_7674); 
FAILURE(BgL_auxz00_11068,BFALSE,BFALSE);} 
BgL_test5682z00_11062 = 
rgc_buffer_eof_p(BgL_tmpz00_11065); }  else 
{ /* Ieee/input.scm 396 */
BgL_test5682z00_11062 = ((bool_t)0)
; } 
if(BgL_test5682z00_11062)
{ /* Ieee/input.scm 396 */
return BEOF;}  else 
{ /* Ieee/input.scm 396 */
return 
BINT(BgL_nz00_7687);} } } } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol5028z00zz__r4_input_6_10_2z00, BGl_string5030z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1291z00_54)));} } } } 

}



/* read-fill-string! */
BGL_EXPORTED_DEF obj_t BGl_readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(obj_t BgL_sz00_50, long BgL_oz00_51, long BgL_lenz00_52, obj_t BgL_ipz00_53)
{
{ /* Ieee/input.scm 378 */
if(
(BgL_lenz00_52<=((long)0)))
{ /* Ieee/input.scm 386 */
if(
(BgL_lenz00_52==((long)0)))
{ /* Ieee/input.scm 387 */
return 
BINT(((long)0));}  else 
{ /* Ieee/input.scm 390 */
BgL_z62iozd2errorzb0_bglt BgL_arg2594z00_7690;
{ /* Ieee/input.scm 390 */
BgL_z62iozd2errorzb0_bglt BgL_new1128z00_7691;
{ /* Ieee/input.scm 390 */
BgL_z62iozd2errorzb0_bglt BgL_new1126z00_7692;
BgL_new1126z00_7692 = 
((BgL_z62iozd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2errorzb0_bgl) ))); 
{ /* Ieee/input.scm 390 */
long BgL_arg2597z00_7693;
{ /* Ieee/input.scm 390 */
long BgL_res3968z00_7694;
BgL_res3968z00_7694 = 
BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00); 
BgL_arg2597z00_7693 = BgL_res3968z00_7694; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1126z00_7692), BgL_arg2597z00_7693); } 
BgL_new1128z00_7691 = BgL_new1126z00_7692; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1128z00_7691)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1128z00_7691)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_11092;
{ /* Ieee/input.scm 390 */
obj_t BgL_arg2595z00_7695;
{ /* Ieee/input.scm 390 */
obj_t BgL_arg2596z00_7696;
{ /* Ieee/input.scm 390 */
obj_t BgL_res3969z00_7697;
{ /* Ieee/input.scm 390 */
obj_t BgL_classz00_7698;
BgL_classz00_7698 = BGl_z62iozd2errorzb0zz__objectz00; 
BgL_res3969z00_7697 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_7698); } 
BgL_arg2596z00_7696 = BgL_res3969z00_7697; } 
BgL_arg2595z00_7695 = 
VECTOR_REF(BgL_arg2596z00_7696,((long)2)); } 
{ /* Ieee/input.scm 390 */
obj_t BgL_auxz00_11096;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2595z00_7695))
{ /* Ieee/input.scm 390 */
BgL_auxz00_11096 = BgL_arg2595z00_7695
; }  else 
{ 
obj_t BgL_auxz00_11099;
BgL_auxz00_11099 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)15052)), BGl_string5029z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg2595z00_7695); 
FAILURE(BgL_auxz00_11099,BFALSE,BFALSE);} 
BgL_auxz00_11092 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_11096); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1128z00_7691)))->BgL_stackz00)=((obj_t)BgL_auxz00_11092),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1128z00_7691)))->BgL_procz00)=((obj_t)BGl_symbol5018z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1128z00_7691)))->BgL_msgz00)=((obj_t)BGl_string5023z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1128z00_7691)))->BgL_objz00)=((obj_t)
BINT(BgL_lenz00_52)),BUNSPEC); 
BgL_arg2594z00_7690 = BgL_new1128z00_7691; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2594z00_7690));} }  else 
{ /* Ieee/input.scm 394 */
long BgL_nz00_7699;
{ /* Ieee/input.scm 395 */
long BgL_arg2602z00_7700;
{ /* Ieee/input.scm 395 */
long BgL_bz00_7701;
BgL_bz00_7701 = 
(
STRING_LENGTH(BgL_sz00_50)-BgL_oz00_51); 
if(
(BgL_lenz00_52<BgL_bz00_7701))
{ /* Ieee/input.scm 395 */
BgL_arg2602z00_7700 = BgL_lenz00_52; }  else 
{ /* Ieee/input.scm 395 */
BgL_arg2602z00_7700 = BgL_bz00_7701; } } 
{ /* Ieee/input.scm 394 */
obj_t BgL_tmpz00_11118;
if(
INPUT_PORTP(BgL_ipz00_53))
{ /* Ieee/input.scm 394 */
BgL_tmpz00_11118 = BgL_ipz00_53
; }  else 
{ 
obj_t BgL_auxz00_11121;
BgL_auxz00_11121 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)15193)), BGl_string5029z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_53); 
FAILURE(BgL_auxz00_11121,BFALSE,BFALSE);} 
BgL_nz00_7699 = 
bgl_rgc_blit_string(BgL_tmpz00_11118, 
BSTRING_TO_STRING(BgL_sz00_50), BgL_oz00_51, BgL_arg2602z00_7700); } } 
{ /* Ieee/input.scm 396 */
bool_t BgL_test5690z00_11127;
if(
(BgL_nz00_7699==((long)0)))
{ /* Ieee/input.scm 396 */
obj_t BgL_tmpz00_11130;
if(
INPUT_PORTP(BgL_ipz00_53))
{ /* Ieee/input.scm 396 */
BgL_tmpz00_11130 = BgL_ipz00_53
; }  else 
{ 
obj_t BgL_auxz00_11133;
BgL_auxz00_11133 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)15294)), BGl_string5029z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_53); 
FAILURE(BgL_auxz00_11133,BFALSE,BFALSE);} 
BgL_test5690z00_11127 = 
rgc_buffer_eof_p(BgL_tmpz00_11130); }  else 
{ /* Ieee/input.scm 396 */
BgL_test5690z00_11127 = ((bool_t)0)
; } 
if(BgL_test5690z00_11127)
{ /* Ieee/input.scm 396 */
return BEOF;}  else 
{ /* Ieee/input.scm 396 */
return 
BINT(BgL_nz00_7699);} } } } 

}



/* _unread-char! */
obj_t BGl__unreadzd2charz12zc0zz__r4_input_6_10_2z00(obj_t BgL_env1299z00_59, obj_t BgL_opt1298z00_58)
{
{ /* Ieee/input.scm 401 */
{ /* Ieee/input.scm 401 */
obj_t BgL_g1300z00_3470;
BgL_g1300z00_3470 = 
VECTOR_REF(BgL_opt1298z00_58,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1298z00_58)) { case ((long)1) : 

{ /* Ieee/input.scm 401 */
obj_t BgL_ipz00_3474;
{ /* Ieee/input.scm 401 */
obj_t BgL_res3974z00_6026;
{ /* Ieee/input.scm 401 */
obj_t BgL_tmpz00_11140;
BgL_tmpz00_11140 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3974z00_6026 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_11140); } 
BgL_ipz00_3474 = BgL_res3974z00_6026; } 
{ /* Ieee/input.scm 401 */

{ /* Ieee/input.scm 401 */
unsigned char BgL_auxz00_11143;
{ /* Ieee/input.scm 401 */
obj_t BgL_tmpz00_11144;
if(
CHARP(BgL_g1300z00_3470))
{ /* Ieee/input.scm 401 */
BgL_tmpz00_11144 = BgL_g1300z00_3470
; }  else 
{ 
obj_t BgL_auxz00_11147;
BgL_auxz00_11147 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)15535)), BGl_string5034z00zz__r4_input_6_10_2z00, BGl_string5000z00zz__r4_input_6_10_2z00, BgL_g1300z00_3470); 
FAILURE(BgL_auxz00_11147,BFALSE,BFALSE);} 
BgL_auxz00_11143 = 
CCHAR(BgL_tmpz00_11144); } 
return 
BGl_unreadzd2charz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_11143, BgL_ipz00_3474);} } } break;case ((long)2) : 

{ /* Ieee/input.scm 401 */
obj_t BgL_ipz00_3475;
BgL_ipz00_3475 = 
VECTOR_REF(BgL_opt1298z00_58,((long)1)); 
{ /* Ieee/input.scm 401 */

{ /* Ieee/input.scm 401 */
unsigned char BgL_auxz00_11154;
{ /* Ieee/input.scm 401 */
obj_t BgL_tmpz00_11155;
if(
CHARP(BgL_g1300z00_3470))
{ /* Ieee/input.scm 401 */
BgL_tmpz00_11155 = BgL_g1300z00_3470
; }  else 
{ 
obj_t BgL_auxz00_11158;
BgL_auxz00_11158 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)15535)), BGl_string5034z00zz__r4_input_6_10_2z00, BGl_string5000z00zz__r4_input_6_10_2z00, BgL_g1300z00_3470); 
FAILURE(BgL_auxz00_11158,BFALSE,BFALSE);} 
BgL_auxz00_11154 = 
CCHAR(BgL_tmpz00_11155); } 
return 
BGl_unreadzd2charz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_11154, BgL_ipz00_3475);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol5032z00zz__r4_input_6_10_2z00, BGl_string5020z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1298z00_58)));} } } } 

}



/* unread-char! */
BGL_EXPORTED_DEF obj_t BGl_unreadzd2charz12zc0zz__r4_input_6_10_2z00(unsigned char BgL_cz00_56, obj_t BgL_ipz00_57)
{
{ /* Ieee/input.scm 401 */
{ /* Ieee/input.scm 402 */
bool_t BgL_test5695z00_11169;
{ /* Ieee/input.scm 402 */
long BgL_arg2614z00_3485;
BgL_arg2614z00_3485 = 
(
(unsigned char)(BgL_cz00_56)); 
{ /* Ieee/input.scm 402 */
bool_t BgL_res3976z00_6031;
{ /* Ieee/input.scm 402 */
obj_t BgL_inputzd2portzd2_6029;
if(
INPUT_PORTP(BgL_ipz00_57))
{ /* Ieee/input.scm 402 */
BgL_inputzd2portzd2_6029 = BgL_ipz00_57; }  else 
{ 
obj_t BgL_auxz00_11174;
BgL_auxz00_11174 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)15639)), BGl_string5033z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_57); 
FAILURE(BgL_auxz00_11174,BFALSE,BFALSE);} 
BgL_res3976z00_6031 = 
rgc_buffer_insert_char(BgL_inputzd2portzd2_6029, 
(int)(BgL_arg2614z00_3485)); } 
BgL_test5695z00_11169 = BgL_res3976z00_6031; } } 
if(BgL_test5695z00_11169)
{ /* Ieee/input.scm 402 */
return BFALSE;}  else 
{ /* Ieee/input.scm 404 */
BgL_z62iozd2errorzb0_bglt BgL_arg2609z00_3479;
{ /* Ieee/input.scm 404 */
BgL_z62iozd2errorzb0_bglt BgL_new1131z00_3480;
{ /* Ieee/input.scm 404 */
BgL_z62iozd2errorzb0_bglt BgL_new1130z00_3483;
BgL_new1130z00_3483 = 
((BgL_z62iozd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2errorzb0_bgl) ))); 
{ /* Ieee/input.scm 404 */
long BgL_arg2613z00_3484;
{ /* Ieee/input.scm 404 */
long BgL_res3977z00_6033;
BgL_res3977z00_6033 = 
BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00); 
BgL_arg2613z00_3484 = BgL_res3977z00_6033; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1130z00_3483), BgL_arg2613z00_3484); } 
BgL_new1131z00_3480 = BgL_new1130z00_3483; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1131z00_3480)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1131z00_3480)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_11188;
{ /* Ieee/input.scm 404 */
obj_t BgL_arg2611z00_3481;
{ /* Ieee/input.scm 404 */
obj_t BgL_arg2612z00_3482;
{ /* Ieee/input.scm 404 */
obj_t BgL_res3978z00_6037;
{ /* Ieee/input.scm 404 */
obj_t BgL_classz00_6036;
BgL_classz00_6036 = BGl_z62iozd2errorzb0zz__objectz00; 
BgL_res3978z00_6037 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_6036); } 
BgL_arg2612z00_3482 = BgL_res3978z00_6037; } 
BgL_arg2611z00_3481 = 
VECTOR_REF(BgL_arg2612z00_3482,((long)2)); } 
{ /* Ieee/input.scm 404 */
obj_t BgL_auxz00_11192;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2611z00_3481))
{ /* Ieee/input.scm 404 */
BgL_auxz00_11192 = BgL_arg2611z00_3481
; }  else 
{ 
obj_t BgL_auxz00_11195;
BgL_auxz00_11195 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)15676)), BGl_string5033z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg2611z00_3481); 
FAILURE(BgL_auxz00_11195,BFALSE,BFALSE);} 
BgL_auxz00_11188 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_11192); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1131z00_3480)))->BgL_stackz00)=((obj_t)BgL_auxz00_11188),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1131z00_3480)))->BgL_procz00)=((obj_t)BGl_symbol5032z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1131z00_3480)))->BgL_msgz00)=((obj_t)BGl_string5035z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1131z00_3480)))->BgL_objz00)=((obj_t)
BCHAR(BgL_cz00_56)),BUNSPEC); 
BgL_arg2609z00_3479 = BgL_new1131z00_3480; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2609z00_3479));} } } 

}



/* _unread-string! */
obj_t BGl__unreadzd2stringz12zc0zz__r4_input_6_10_2z00(obj_t BgL_env1304z00_63, obj_t BgL_opt1303z00_62)
{
{ /* Ieee/input.scm 412 */
{ /* Ieee/input.scm 412 */
obj_t BgL_g1305z00_3486;
BgL_g1305z00_3486 = 
VECTOR_REF(BgL_opt1303z00_62,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1303z00_62)) { case ((long)1) : 

{ /* Ieee/input.scm 412 */
obj_t BgL_ipz00_3490;
{ /* Ieee/input.scm 412 */
obj_t BgL_res3979z00_6040;
{ /* Ieee/input.scm 412 */
obj_t BgL_tmpz00_11211;
BgL_tmpz00_11211 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3979z00_6040 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_11211); } 
BgL_ipz00_3490 = BgL_res3979z00_6040; } 
{ /* Ieee/input.scm 412 */

{ /* Ieee/input.scm 412 */
obj_t BgL_auxz00_11214;
if(
STRINGP(BgL_g1305z00_3486))
{ /* Ieee/input.scm 412 */
BgL_auxz00_11214 = BgL_g1305z00_3486
; }  else 
{ 
obj_t BgL_auxz00_11217;
BgL_auxz00_11217 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)15998)), BGl_string5038z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_g1305z00_3486); 
FAILURE(BgL_auxz00_11217,BFALSE,BFALSE);} 
return 
BGl_unreadzd2stringz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_11214, BgL_ipz00_3490);} } } break;case ((long)2) : 

{ /* Ieee/input.scm 412 */
obj_t BgL_ipz00_3491;
BgL_ipz00_3491 = 
VECTOR_REF(BgL_opt1303z00_62,((long)1)); 
{ /* Ieee/input.scm 412 */

{ /* Ieee/input.scm 412 */
obj_t BgL_auxz00_11223;
if(
STRINGP(BgL_g1305z00_3486))
{ /* Ieee/input.scm 412 */
BgL_auxz00_11223 = BgL_g1305z00_3486
; }  else 
{ 
obj_t BgL_auxz00_11226;
BgL_auxz00_11226 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)15998)), BGl_string5038z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_g1305z00_3486); 
FAILURE(BgL_auxz00_11226,BFALSE,BFALSE);} 
return 
BGl_unreadzd2stringz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_11223, BgL_ipz00_3491);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol5036z00zz__r4_input_6_10_2z00, BGl_string5020z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1303z00_62)));} } } } 

}



/* unread-string! */
BGL_EXPORTED_DEF obj_t BGl_unreadzd2stringz12zc0zz__r4_input_6_10_2z00(obj_t BgL_strz00_60, obj_t BgL_ipz00_61)
{
{ /* Ieee/input.scm 412 */
{ /* Ieee/input.scm 413 */
bool_t BgL_test5700z00_11236;
{ /* Ieee/input.scm 413 */
long BgL_arg2624z00_3501;
BgL_arg2624z00_3501 = 
STRING_LENGTH(BgL_strz00_60); 
{ /* Ieee/input.scm 413 */
bool_t BgL_res3981z00_6046;
{ /* Ieee/input.scm 413 */
obj_t BgL_inputzd2portzd2_6043;
if(
INPUT_PORTP(BgL_ipz00_61))
{ /* Ieee/input.scm 413 */
BgL_inputzd2portzd2_6043 = BgL_ipz00_61; }  else 
{ 
obj_t BgL_auxz00_11240;
BgL_auxz00_11240 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)16117)), BGl_string5037z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_61); 
FAILURE(BgL_auxz00_11240,BFALSE,BFALSE);} 
BgL_res3981z00_6046 = 
rgc_buffer_insert_substring(BgL_inputzd2portzd2_6043, BgL_strz00_60, ((long)0), BgL_arg2624z00_3501); } 
BgL_test5700z00_11236 = BgL_res3981z00_6046; } } 
if(BgL_test5700z00_11236)
{ /* Ieee/input.scm 413 */
return BFALSE;}  else 
{ /* Ieee/input.scm 415 */
BgL_z62iozd2errorzb0_bglt BgL_arg2620z00_3495;
{ /* Ieee/input.scm 415 */
BgL_z62iozd2errorzb0_bglt BgL_new1134z00_3496;
{ /* Ieee/input.scm 415 */
BgL_z62iozd2errorzb0_bglt BgL_new1133z00_3499;
BgL_new1133z00_3499 = 
((BgL_z62iozd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2errorzb0_bgl) ))); 
{ /* Ieee/input.scm 415 */
long BgL_arg2623z00_3500;
{ /* Ieee/input.scm 415 */
long BgL_res3982z00_6048;
BgL_res3982z00_6048 = 
BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00); 
BgL_arg2623z00_3500 = BgL_res3982z00_6048; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1133z00_3499), BgL_arg2623z00_3500); } 
BgL_new1134z00_3496 = BgL_new1133z00_3499; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1134z00_3496)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1134z00_3496)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_11253;
{ /* Ieee/input.scm 415 */
obj_t BgL_arg2621z00_3497;
{ /* Ieee/input.scm 415 */
obj_t BgL_arg2622z00_3498;
{ /* Ieee/input.scm 415 */
obj_t BgL_res3983z00_6052;
{ /* Ieee/input.scm 415 */
obj_t BgL_classz00_6051;
BgL_classz00_6051 = BGl_z62iozd2errorzb0zz__objectz00; 
BgL_res3983z00_6052 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_6051); } 
BgL_arg2622z00_3498 = BgL_res3983z00_6052; } 
BgL_arg2621z00_3497 = 
VECTOR_REF(BgL_arg2622z00_3498,((long)2)); } 
{ /* Ieee/input.scm 415 */
obj_t BgL_auxz00_11257;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2621z00_3497))
{ /* Ieee/input.scm 415 */
BgL_auxz00_11257 = BgL_arg2621z00_3497
; }  else 
{ 
obj_t BgL_auxz00_11260;
BgL_auxz00_11260 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)16168)), BGl_string5037z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg2621z00_3497); 
FAILURE(BgL_auxz00_11260,BFALSE,BFALSE);} 
BgL_auxz00_11253 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_11257); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1134z00_3496)))->BgL_stackz00)=((obj_t)BgL_auxz00_11253),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1134z00_3496)))->BgL_procz00)=((obj_t)BGl_symbol5036z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1134z00_3496)))->BgL_msgz00)=((obj_t)BGl_string5039z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1134z00_3496)))->BgL_objz00)=((obj_t)BgL_strz00_60),BUNSPEC); 
BgL_arg2620z00_3495 = BgL_new1134z00_3496; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2620z00_3495));} } } 

}



/* _unread-substring! */
obj_t BGl__unreadzd2substringz12zc0zz__r4_input_6_10_2z00(obj_t BgL_env1309z00_69, obj_t BgL_opt1308z00_68)
{
{ /* Ieee/input.scm 423 */
{ /* Ieee/input.scm 423 */
obj_t BgL_g1310z00_3502;obj_t BgL_g1311z00_3503;obj_t BgL_g1312z00_3504;
BgL_g1310z00_3502 = 
VECTOR_REF(BgL_opt1308z00_68,((long)0)); 
BgL_g1311z00_3503 = 
VECTOR_REF(BgL_opt1308z00_68,((long)1)); 
BgL_g1312z00_3504 = 
VECTOR_REF(BgL_opt1308z00_68,((long)2)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1308z00_68)) { case ((long)3) : 

{ /* Ieee/input.scm 424 */
obj_t BgL_ipz00_3508;
{ /* Ieee/input.scm 424 */
obj_t BgL_res3984z00_6055;
{ /* Ieee/input.scm 424 */
obj_t BgL_tmpz00_11277;
BgL_tmpz00_11277 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res3984z00_6055 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_11277); } 
BgL_ipz00_3508 = BgL_res3984z00_6055; } 
{ /* Ieee/input.scm 423 */

{ /* Ieee/input.scm 423 */
long BgL_auxz00_11296;long BgL_auxz00_11287;obj_t BgL_auxz00_11280;
{ /* Ieee/input.scm 423 */
obj_t BgL_tmpz00_11297;
if(
INTEGERP(BgL_g1312z00_3504))
{ /* Ieee/input.scm 423 */
BgL_tmpz00_11297 = BgL_g1312z00_3504
; }  else 
{ 
obj_t BgL_auxz00_11300;
BgL_auxz00_11300 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)16490)), BGl_string5042z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_g1312z00_3504); 
FAILURE(BgL_auxz00_11300,BFALSE,BFALSE);} 
BgL_auxz00_11296 = 
(long)CINT(BgL_tmpz00_11297); } 
{ /* Ieee/input.scm 423 */
obj_t BgL_tmpz00_11288;
if(
INTEGERP(BgL_g1311z00_3503))
{ /* Ieee/input.scm 423 */
BgL_tmpz00_11288 = BgL_g1311z00_3503
; }  else 
{ 
obj_t BgL_auxz00_11291;
BgL_auxz00_11291 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)16490)), BGl_string5042z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_g1311z00_3503); 
FAILURE(BgL_auxz00_11291,BFALSE,BFALSE);} 
BgL_auxz00_11287 = 
(long)CINT(BgL_tmpz00_11288); } 
if(
STRINGP(BgL_g1310z00_3502))
{ /* Ieee/input.scm 423 */
BgL_auxz00_11280 = BgL_g1310z00_3502
; }  else 
{ 
obj_t BgL_auxz00_11283;
BgL_auxz00_11283 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)16490)), BGl_string5042z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_g1310z00_3502); 
FAILURE(BgL_auxz00_11283,BFALSE,BFALSE);} 
return 
BGl_unreadzd2substringz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_11280, BgL_auxz00_11287, BgL_auxz00_11296, BgL_ipz00_3508);} } } break;case ((long)4) : 

{ /* Ieee/input.scm 423 */
obj_t BgL_ipz00_3509;
BgL_ipz00_3509 = 
VECTOR_REF(BgL_opt1308z00_68,((long)3)); 
{ /* Ieee/input.scm 423 */

{ /* Ieee/input.scm 423 */
long BgL_auxz00_11323;long BgL_auxz00_11314;obj_t BgL_auxz00_11307;
{ /* Ieee/input.scm 423 */
obj_t BgL_tmpz00_11324;
if(
INTEGERP(BgL_g1312z00_3504))
{ /* Ieee/input.scm 423 */
BgL_tmpz00_11324 = BgL_g1312z00_3504
; }  else 
{ 
obj_t BgL_auxz00_11327;
BgL_auxz00_11327 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)16490)), BGl_string5042z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_g1312z00_3504); 
FAILURE(BgL_auxz00_11327,BFALSE,BFALSE);} 
BgL_auxz00_11323 = 
(long)CINT(BgL_tmpz00_11324); } 
{ /* Ieee/input.scm 423 */
obj_t BgL_tmpz00_11315;
if(
INTEGERP(BgL_g1311z00_3503))
{ /* Ieee/input.scm 423 */
BgL_tmpz00_11315 = BgL_g1311z00_3503
; }  else 
{ 
obj_t BgL_auxz00_11318;
BgL_auxz00_11318 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)16490)), BGl_string5042z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_g1311z00_3503); 
FAILURE(BgL_auxz00_11318,BFALSE,BFALSE);} 
BgL_auxz00_11314 = 
(long)CINT(BgL_tmpz00_11315); } 
if(
STRINGP(BgL_g1310z00_3502))
{ /* Ieee/input.scm 423 */
BgL_auxz00_11307 = BgL_g1310z00_3502
; }  else 
{ 
obj_t BgL_auxz00_11310;
BgL_auxz00_11310 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)16490)), BGl_string5042z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_g1310z00_3502); 
FAILURE(BgL_auxz00_11310,BFALSE,BFALSE);} 
return 
BGl_unreadzd2substringz12zc0zz__r4_input_6_10_2z00(BgL_auxz00_11307, BgL_auxz00_11314, BgL_auxz00_11323, BgL_ipz00_3509);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol5040z00zz__r4_input_6_10_2z00, BGl_string5030z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1308z00_68)));} } } } 

}



/* unread-substring! */
BGL_EXPORTED_DEF obj_t BGl_unreadzd2substringz12zc0zz__r4_input_6_10_2z00(obj_t BgL_strz00_64, long BgL_fromz00_65, long BgL_toz00_66, obj_t BgL_ipz00_67)
{
{ /* Ieee/input.scm 423 */
{ /* Ieee/input.scm 425 */
bool_t BgL_test5709z00_11338;
if(
(BgL_toz00_66>=BgL_fromz00_65))
{ /* Ieee/input.scm 425 */
if(
(BgL_fromz00_65<((long)0)))
{ /* Ieee/input.scm 426 */
BgL_test5709z00_11338 = ((bool_t)1)
; }  else 
{ /* Ieee/input.scm 426 */
BgL_test5709z00_11338 = 
(BgL_toz00_66>
STRING_LENGTH(BgL_strz00_64))
; } }  else 
{ /* Ieee/input.scm 425 */
BgL_test5709z00_11338 = ((bool_t)1)
; } 
if(BgL_test5709z00_11338)
{ /* Ieee/input.scm 428 */
BgL_z62iozd2errorzb0_bglt BgL_arg2631z00_3515;
{ /* Ieee/input.scm 428 */
BgL_z62iozd2errorzb0_bglt BgL_new1137z00_3516;
{ /* Ieee/input.scm 428 */
BgL_z62iozd2errorzb0_bglt BgL_new1136z00_3523;
BgL_new1136z00_3523 = 
((BgL_z62iozd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2errorzb0_bgl) ))); 
{ /* Ieee/input.scm 428 */
long BgL_arg2641z00_3524;
{ /* Ieee/input.scm 428 */
long BgL_res3989z00_6067;
BgL_res3989z00_6067 = 
BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00); 
BgL_arg2641z00_3524 = BgL_res3989z00_6067; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1136z00_3523), BgL_arg2641z00_3524); } 
BgL_new1137z00_3516 = BgL_new1136z00_3523; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1137z00_3516)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1137z00_3516)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_11353;
{ /* Ieee/input.scm 428 */
obj_t BgL_arg2633z00_3517;
{ /* Ieee/input.scm 428 */
obj_t BgL_arg2635z00_3518;
{ /* Ieee/input.scm 428 */
obj_t BgL_res3990z00_6071;
{ /* Ieee/input.scm 428 */
obj_t BgL_classz00_6070;
BgL_classz00_6070 = BGl_z62iozd2errorzb0zz__objectz00; 
BgL_res3990z00_6071 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_6070); } 
BgL_arg2635z00_3518 = BgL_res3990z00_6071; } 
BgL_arg2633z00_3517 = 
VECTOR_REF(BgL_arg2635z00_3518,((long)2)); } 
{ /* Ieee/input.scm 428 */
obj_t BgL_auxz00_11357;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2633z00_3517))
{ /* Ieee/input.scm 428 */
BgL_auxz00_11357 = BgL_arg2633z00_3517
; }  else 
{ 
obj_t BgL_auxz00_11360;
BgL_auxz00_11360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)16684)), BGl_string5041z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg2633z00_3517); 
FAILURE(BgL_auxz00_11360,BFALSE,BFALSE);} 
BgL_auxz00_11353 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_11357); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1137z00_3516)))->BgL_stackz00)=((obj_t)BgL_auxz00_11353),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1137z00_3516)))->BgL_procz00)=((obj_t)BGl_symbol5040z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1137z00_3516)))->BgL_msgz00)=((obj_t)BGl_string5043z00zz__r4_input_6_10_2z00),BUNSPEC); 
{ 
obj_t BgL_auxz00_11370;
{ /* Ieee/input.scm 431 */
long BgL_arg2636z00_3519;
BgL_arg2636z00_3519 = 
STRING_LENGTH(BgL_strz00_64); 
{ /* Ieee/input.scm 431 */
obj_t BgL_list2637z00_3520;
{ /* Ieee/input.scm 431 */
obj_t BgL_arg2638z00_3521;
{ /* Ieee/input.scm 431 */
obj_t BgL_arg2640z00_3522;
BgL_arg2640z00_3522 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2636z00_3519), BNIL); 
BgL_arg2638z00_3521 = 
MAKE_YOUNG_PAIR(
BINT(BgL_toz00_66), BgL_arg2640z00_3522); } 
BgL_list2637z00_3520 = 
MAKE_YOUNG_PAIR(
BINT(BgL_fromz00_65), BgL_arg2638z00_3521); } 
BgL_auxz00_11370 = BgL_list2637z00_3520; } } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1137z00_3516)))->BgL_objz00)=((obj_t)BgL_auxz00_11370),BUNSPEC); } 
BgL_arg2631z00_3515 = BgL_new1137z00_3516; } 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2631z00_3515)); }  else 
{ /* Ieee/input.scm 425 */BFALSE; } } 
{ /* Ieee/input.scm 432 */
bool_t BgL_test5713z00_11382;
{ /* Ieee/input.scm 432 */
bool_t BgL_res3993z00_6080;
{ /* Ieee/input.scm 432 */
obj_t BgL_inputzd2portzd2_6076;
if(
INPUT_PORTP(BgL_ipz00_67))
{ /* Ieee/input.scm 432 */
BgL_inputzd2portzd2_6076 = BgL_ipz00_67; }  else 
{ 
obj_t BgL_auxz00_11385;
BgL_auxz00_11385 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)16866)), BGl_string5041z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_67); 
FAILURE(BgL_auxz00_11385,BFALSE,BFALSE);} 
BgL_res3993z00_6080 = 
rgc_buffer_insert_substring(BgL_inputzd2portzd2_6076, BgL_strz00_64, BgL_fromz00_65, BgL_toz00_66); } 
BgL_test5713z00_11382 = BgL_res3993z00_6080; } 
if(BgL_test5713z00_11382)
{ /* Ieee/input.scm 432 */
return BFALSE;}  else 
{ /* Ieee/input.scm 433 */
BgL_z62iozd2errorzb0_bglt BgL_arg2645z00_3529;
{ /* Ieee/input.scm 433 */
BgL_z62iozd2errorzb0_bglt BgL_new1139z00_3530;
{ /* Ieee/input.scm 433 */
BgL_z62iozd2errorzb0_bglt BgL_new1138z00_3533;
BgL_new1138z00_3533 = 
((BgL_z62iozd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2errorzb0_bgl) ))); 
{ /* Ieee/input.scm 433 */
long BgL_arg2649z00_3534;
{ /* Ieee/input.scm 433 */
long BgL_res3994z00_6082;
BgL_res3994z00_6082 = 
BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00); 
BgL_arg2649z00_3534 = BgL_res3994z00_6082; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1138z00_3533), BgL_arg2649z00_3534); } 
BgL_new1139z00_3530 = BgL_new1138z00_3533; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1139z00_3530)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1139z00_3530)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_11398;
{ /* Ieee/input.scm 433 */
obj_t BgL_arg2646z00_3531;
{ /* Ieee/input.scm 433 */
obj_t BgL_arg2648z00_3532;
{ /* Ieee/input.scm 433 */
obj_t BgL_res3995z00_6086;
{ /* Ieee/input.scm 433 */
obj_t BgL_classz00_6085;
BgL_classz00_6085 = BGl_z62iozd2errorzb0zz__objectz00; 
BgL_res3995z00_6086 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_6085); } 
BgL_arg2648z00_3532 = BgL_res3995z00_6086; } 
BgL_arg2646z00_3531 = 
VECTOR_REF(BgL_arg2648z00_3532,((long)2)); } 
{ /* Ieee/input.scm 433 */
obj_t BgL_auxz00_11402;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2646z00_3531))
{ /* Ieee/input.scm 433 */
BgL_auxz00_11402 = BgL_arg2646z00_3531
; }  else 
{ 
obj_t BgL_auxz00_11405;
BgL_auxz00_11405 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)16896)), BGl_string5041z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg2646z00_3531); 
FAILURE(BgL_auxz00_11405,BFALSE,BFALSE);} 
BgL_auxz00_11398 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_11402); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1139z00_3530)))->BgL_stackz00)=((obj_t)BgL_auxz00_11398),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1139z00_3530)))->BgL_procz00)=((obj_t)BGl_symbol5044z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1139z00_3530)))->BgL_msgz00)=((obj_t)BGl_string5039z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1139z00_3530)))->BgL_objz00)=((obj_t)BgL_strz00_64),BUNSPEC); 
BgL_arg2645z00_3529 = BgL_new1139z00_3530; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2645z00_3529));} } } 

}



/* port->string-list */
BGL_EXPORTED_DEF obj_t BGl_portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00(obj_t BgL_ipz00_70)
{
{ /* Ieee/input.scm 441 */
{ 
obj_t BgL_resz00_3537;
BgL_resz00_3537 = BNIL; 
BgL_zc3z04anonymousza32650ze3z87_3538:
{ /* Ieee/input.scm 443 */
obj_t BgL_expz00_3539;
BgL_expz00_3539 = 
BGl_z62zc3z04anonymousza31395ze3ze5zz__r4_input_6_10_2z00(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00, BgL_ipz00_70); 
{ /* Ieee/input.scm 444 */
bool_t BgL_test5716z00_11423;
{ /* Ieee/input.scm 444 */
bool_t BgL_res3996z00_6088;
BgL_res3996z00_6088 = 
EOF_OBJECTP(BgL_expz00_3539); 
BgL_test5716z00_11423 = BgL_res3996z00_6088; } 
if(BgL_test5716z00_11423)
{ /* Ieee/input.scm 444 */
return 
bgl_reverse_bang(BgL_resz00_3537);}  else 
{ /* Ieee/input.scm 446 */
obj_t BgL_arg2653z00_3541;
BgL_arg2653z00_3541 = 
MAKE_YOUNG_PAIR(BgL_expz00_3539, BgL_resz00_3537); 
{ 
obj_t BgL_resz00_11427;
BgL_resz00_11427 = BgL_arg2653z00_3541; 
BgL_resz00_3537 = BgL_resz00_11427; 
goto BgL_zc3z04anonymousza32650ze3z87_3538;} } } } } } 

}



/* &port->string-list */
obj_t BGl_z62portzd2ze3stringzd2listz81zz__r4_input_6_10_2z00(obj_t BgL_envz00_6662, obj_t BgL_ipz00_6663)
{
{ /* Ieee/input.scm 441 */
{ /* Ieee/input.scm 443 */
obj_t BgL_auxz00_11428;
if(
INPUT_PORTP(BgL_ipz00_6663))
{ /* Ieee/input.scm 443 */
BgL_auxz00_11428 = BgL_ipz00_6663
; }  else 
{ 
obj_t BgL_auxz00_11431;
BgL_auxz00_11431 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)17279)), BGl_string5046z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_6663); 
FAILURE(BgL_auxz00_11431,BFALSE,BFALSE);} 
return 
BGl_portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00(BgL_auxz00_11428);} } 

}



/* %sendchars */
int BGl_z52sendcharsz52zz__r4_input_6_10_2z00(obj_t BgL_ipz00_71, obj_t BgL_opz00_72, long BgL_sza7za7_73, long BgL_offsetz00_74)
{
{ /* Ieee/input.scm 455 */
if(
(BgL_offsetz00_74>=((long)0)))
{ /* Ieee/input.scm 456 */
BGl_setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(BgL_ipz00_71, BgL_offsetz00_74); }  else 
{ /* Ieee/input.scm 456 */BFALSE; } 
{ /* Ieee/input.scm 457 */
long BgL_bufsiza7eza7_3544;
if(
(BgL_sza7za7_73==((long)-1)))
{ /* Ieee/input.scm 458 */
BgL_bufsiza7eza7_3544 = 
BGL_INPUT_PORT_BUFSIZ(BgL_ipz00_71); }  else 
{ /* Ieee/input.scm 458 */
if(
(default_io_bufsiz<BgL_sza7za7_73))
{ /* Ieee/input.scm 460 */
BgL_bufsiza7eza7_3544 = default_io_bufsiz; }  else 
{ /* Ieee/input.scm 460 */
BgL_bufsiza7eza7_3544 = BgL_sza7za7_73; } } 
{ /* Ieee/input.scm 457 */
obj_t BgL_bufz00_3545;
{ /* Ieee/string.scm 168 */

BgL_bufz00_3545 = 
make_string(BgL_bufsiza7eza7_3544, ((unsigned char)' ')); } 
{ /* Ieee/input.scm 466 */

if(
(BgL_sza7za7_73<((long)0)))
{ 
long BgL_charszd2readzd2_3550;
{ /* Ieee/input.scm 468 */
long BgL_tmpz00_11447;
BgL_charszd2readzd2_3550 = ((long)0); 
BgL_zc3z04anonymousza32656ze3z87_3551:
{ /* Ieee/input.scm 469 */
obj_t BgL_nz00_3552;
BgL_nz00_3552 = 
BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(BgL_bufz00_3545, 
BINT(BgL_bufsiza7eza7_3544), BgL_ipz00_71); 
{ /* Ieee/input.scm 470 */
bool_t BgL_test5722z00_11450;
{ /* Ieee/input.scm 470 */
long BgL_n1z00_6100;
{ /* Ieee/input.scm 470 */
obj_t BgL_tmpz00_11451;
if(
INTEGERP(BgL_nz00_3552))
{ /* Ieee/input.scm 470 */
BgL_tmpz00_11451 = BgL_nz00_3552
; }  else 
{ 
obj_t BgL_auxz00_11454;
BgL_auxz00_11454 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)18414)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_nz00_3552); 
FAILURE(BgL_auxz00_11454,BFALSE,BFALSE);} 
BgL_n1z00_6100 = 
(long)CINT(BgL_tmpz00_11451); } 
BgL_test5722z00_11450 = 
(BgL_n1z00_6100==((long)0)); } 
if(BgL_test5722z00_11450)
{ /* Ieee/input.scm 470 */
bgl_flush_output_port(BgL_opz00_72); 
BgL_tmpz00_11447 = BgL_charszd2readzd2_3550; }  else 
{ /* Ieee/input.scm 474 */
obj_t BgL_sz00_3554;
{ /* Ieee/input.scm 474 */
bool_t BgL_test5724z00_11461;
{ /* Ieee/input.scm 474 */
long BgL_n1z00_6103;
{ /* Ieee/input.scm 474 */
obj_t BgL_tmpz00_11462;
if(
INTEGERP(BgL_nz00_3552))
{ /* Ieee/input.scm 474 */
BgL_tmpz00_11462 = BgL_nz00_3552
; }  else 
{ 
obj_t BgL_auxz00_11465;
BgL_auxz00_11465 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)18509)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_nz00_3552); 
FAILURE(BgL_auxz00_11465,BFALSE,BFALSE);} 
BgL_n1z00_6103 = 
(long)CINT(BgL_tmpz00_11462); } 
BgL_test5724z00_11461 = 
(BgL_n1z00_6103<BgL_bufsiza7eza7_3544); } 
if(BgL_test5724z00_11461)
{ /* Ieee/input.scm 474 */
long BgL_auxz00_11471;
{ /* Ieee/input.scm 474 */
obj_t BgL_tmpz00_11472;
if(
INTEGERP(BgL_nz00_3552))
{ /* Ieee/input.scm 474 */
BgL_tmpz00_11472 = BgL_nz00_3552
; }  else 
{ 
obj_t BgL_auxz00_11475;
BgL_auxz00_11475 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)18520)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_nz00_3552); 
FAILURE(BgL_auxz00_11475,BFALSE,BFALSE);} 
BgL_auxz00_11471 = 
(long)CINT(BgL_tmpz00_11472); } 
BgL_sz00_3554 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_bufz00_3545, ((long)0), BgL_auxz00_11471); }  else 
{ /* Ieee/input.scm 474 */
BgL_sz00_3554 = BgL_bufz00_3545; } } 
bgl_display_obj(BgL_sz00_3554, BgL_opz00_72); 
{ /* Ieee/input.scm 476 */
long BgL_arg2658z00_3555;
{ /* Ieee/input.scm 476 */
long BgL_za72za7_6107;
{ /* Ieee/input.scm 476 */
obj_t BgL_tmpz00_11482;
if(
INTEGERP(BgL_nz00_3552))
{ /* Ieee/input.scm 476 */
BgL_tmpz00_11482 = BgL_nz00_3552
; }  else 
{ 
obj_t BgL_auxz00_11485;
BgL_auxz00_11485 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)18602)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_nz00_3552); 
FAILURE(BgL_auxz00_11485,BFALSE,BFALSE);} 
BgL_za72za7_6107 = 
(long)CINT(BgL_tmpz00_11482); } 
BgL_arg2658z00_3555 = 
(BgL_charszd2readzd2_3550+BgL_za72za7_6107); } 
{ 
long BgL_charszd2readzd2_11491;
BgL_charszd2readzd2_11491 = BgL_arg2658z00_3555; 
BgL_charszd2readzd2_3550 = BgL_charszd2readzd2_11491; 
goto BgL_zc3z04anonymousza32656ze3z87_3551;} } } } } 
return 
(int)(BgL_tmpz00_11447);} }  else 
{ 
long BgL_charszd2readzd2_3559;long BgL_charszd2tozd2readz00_3560;long BgL_sza7za7_3561;
{ /* Ieee/input.scm 477 */
long BgL_tmpz00_11493;
BgL_charszd2readzd2_3559 = ((long)0); 
BgL_charszd2tozd2readz00_3560 = BgL_bufsiza7eza7_3544; 
BgL_sza7za7_3561 = BgL_sza7za7_73; 
BgL_zc3z04anonymousza32660ze3z87_3562:
if(
(BgL_charszd2tozd2readz00_3560==((long)0)))
{ /* Ieee/input.scm 480 */
BgL_tmpz00_11493 = BgL_charszd2readzd2_3559
; }  else 
{ /* Ieee/input.scm 482 */
obj_t BgL_nz00_3564;
BgL_nz00_3564 = 
BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(BgL_bufz00_3545, 
BINT(BgL_charszd2tozd2readz00_3560), BgL_ipz00_71); 
{ /* Ieee/input.scm 483 */
bool_t BgL_test5729z00_11498;
{ /* Ieee/input.scm 483 */
long BgL_n1z00_6111;
{ /* Ieee/input.scm 483 */
obj_t BgL_tmpz00_11499;
if(
INTEGERP(BgL_nz00_3564))
{ /* Ieee/input.scm 483 */
BgL_tmpz00_11499 = BgL_nz00_3564
; }  else 
{ 
obj_t BgL_auxz00_11502;
BgL_auxz00_11502 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)18796)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_nz00_3564); 
FAILURE(BgL_auxz00_11502,BFALSE,BFALSE);} 
BgL_n1z00_6111 = 
(long)CINT(BgL_tmpz00_11499); } 
BgL_test5729z00_11498 = 
(BgL_n1z00_6111==((long)0)); } 
if(BgL_test5729z00_11498)
{ /* Ieee/input.scm 483 */
bgl_flush_output_port(BgL_opz00_72); 
BgL_tmpz00_11493 = BgL_charszd2readzd2_3559; }  else 
{ /* Ieee/input.scm 487 */
obj_t BgL_sz00_3566;
{ /* Ieee/input.scm 487 */
bool_t BgL_test5731z00_11509;
{ /* Ieee/input.scm 487 */
long BgL_n1z00_6114;
{ /* Ieee/input.scm 487 */
obj_t BgL_tmpz00_11510;
if(
INTEGERP(BgL_nz00_3564))
{ /* Ieee/input.scm 487 */
BgL_tmpz00_11510 = BgL_nz00_3564
; }  else 
{ 
obj_t BgL_auxz00_11513;
BgL_auxz00_11513 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)18879)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_nz00_3564); 
FAILURE(BgL_auxz00_11513,BFALSE,BFALSE);} 
BgL_n1z00_6114 = 
(long)CINT(BgL_tmpz00_11510); } 
BgL_test5731z00_11509 = 
(BgL_n1z00_6114<BgL_bufsiza7eza7_3544); } 
if(BgL_test5731z00_11509)
{ /* Ieee/input.scm 487 */
long BgL_auxz00_11519;
{ /* Ieee/input.scm 487 */
obj_t BgL_tmpz00_11520;
if(
INTEGERP(BgL_nz00_3564))
{ /* Ieee/input.scm 487 */
BgL_tmpz00_11520 = BgL_nz00_3564
; }  else 
{ 
obj_t BgL_auxz00_11523;
BgL_auxz00_11523 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)18890)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_nz00_3564); 
FAILURE(BgL_auxz00_11523,BFALSE,BFALSE);} 
BgL_auxz00_11519 = 
(long)CINT(BgL_tmpz00_11520); } 
BgL_sz00_3566 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_bufz00_3545, ((long)0), BgL_auxz00_11519); }  else 
{ /* Ieee/input.scm 487 */
BgL_sz00_3566 = BgL_bufz00_3545; } } 
bgl_display_obj(BgL_sz00_3566, BgL_opz00_72); 
{ /* Ieee/input.scm 489 */
long BgL_sza7za7_3567;
{ /* Ieee/input.scm 489 */
long BgL_za72za7_6118;
{ /* Ieee/input.scm 489 */
obj_t BgL_tmpz00_11530;
if(
INTEGERP(BgL_nz00_3564))
{ /* Ieee/input.scm 489 */
BgL_tmpz00_11530 = BgL_nz00_3564
; }  else 
{ 
obj_t BgL_auxz00_11533;
BgL_auxz00_11533 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)18963)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_nz00_3564); 
FAILURE(BgL_auxz00_11533,BFALSE,BFALSE);} 
BgL_za72za7_6118 = 
(long)CINT(BgL_tmpz00_11530); } 
BgL_sza7za7_3567 = 
(BgL_sza7za7_3561-BgL_za72za7_6118); } 
{ /* Ieee/input.scm 489 */
long BgL_ctrz00_3568;
if(
(BgL_sza7za7_3567<BgL_bufsiza7eza7_3544))
{ /* Ieee/input.scm 490 */
BgL_ctrz00_3568 = BgL_sza7za7_3567; }  else 
{ /* Ieee/input.scm 490 */
BgL_ctrz00_3568 = BgL_bufsiza7eza7_3544; } 
{ /* Ieee/input.scm 490 */

{ /* Ieee/input.scm 491 */
long BgL_arg2663z00_3569;
{ /* Ieee/input.scm 491 */
long BgL_za72za7_6124;
{ /* Ieee/input.scm 491 */
obj_t BgL_tmpz00_11541;
if(
INTEGERP(BgL_nz00_3564))
{ /* Ieee/input.scm 491 */
BgL_tmpz00_11541 = BgL_nz00_3564
; }  else 
{ 
obj_t BgL_auxz00_11544;
BgL_auxz00_11544 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)19044)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_nz00_3564); 
FAILURE(BgL_auxz00_11544,BFALSE,BFALSE);} 
BgL_za72za7_6124 = 
(long)CINT(BgL_tmpz00_11541); } 
BgL_arg2663z00_3569 = 
(BgL_charszd2readzd2_3559+BgL_za72za7_6124); } 
{ 
long BgL_sza7za7_11552;long BgL_charszd2tozd2readz00_11551;long BgL_charszd2readzd2_11550;
BgL_charszd2readzd2_11550 = BgL_arg2663z00_3569; 
BgL_charszd2tozd2readz00_11551 = BgL_ctrz00_3568; 
BgL_sza7za7_11552 = BgL_sza7za7_3567; 
BgL_sza7za7_3561 = BgL_sza7za7_11552; 
BgL_charszd2tozd2readz00_3560 = BgL_charszd2tozd2readz00_11551; 
BgL_charszd2readzd2_3559 = BgL_charszd2readzd2_11550; 
goto BgL_zc3z04anonymousza32660ze3z87_3562;} } } } } } } } 
return 
(int)(BgL_tmpz00_11493);} } } } } } 

}



/* file->string */
BGL_EXPORTED_DEF obj_t BGl_filezd2ze3stringz31zz__r4_input_6_10_2z00(obj_t BgL_pathz00_75)
{
{ /* Ieee/input.scm 496 */
{ /* Ieee/input.scm 499 */
obj_t BgL_iz00_3577;
{ /* Ieee/string.scm 219 */

BgL_iz00_3577 = 
BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL_pathz00_75, 
BCHAR(((unsigned char)':')), 
BINT(((long)0))); } 
if(
CBOOL(BgL_iz00_3577))
{ /* Ieee/input.scm 503 */
bool_t BgL_test5738z00_11559;
{ /* Ieee/input.scm 503 */

BgL_test5738z00_11559 = 
BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(BGl_string5047z00zz__r4_input_6_10_2z00, BgL_pathz00_75, BFALSE, BFALSE, BFALSE, BFALSE); } 
if(BgL_test5738z00_11559)
{ /* Ieee/input.scm 504 */
obj_t BgL_arg2669z00_3585;
BgL_arg2669z00_3585 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_pathz00_75, ((long)5), 
STRING_LENGTH(BgL_pathz00_75)); 
return 
bgl_file_to_string(
BSTRING_TO_STRING(BgL_arg2669z00_3585));}  else 
{ /* Ieee/input.scm 506 */
obj_t BgL_ipz00_3587;
{ /* Ieee/port.scm 440 */

BgL_ipz00_3587 = 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_pathz00_75, BTRUE, 
BINT(((long)5000000))); } 
{ /* Ieee/input.scm 507 */
obj_t BgL_exitd1141z00_3588;
BgL_exitd1141z00_3588 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Ieee/input.scm 509 */
obj_t BgL_zc3z04anonymousza32671ze3z87_6664;
BgL_zc3z04anonymousza32671ze3z87_6664 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32671ze3ze5zz__r4_input_6_10_2z00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza32671ze3z87_6664, 
(int)(((long)0)), BgL_ipz00_3587); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1141z00_3588, BgL_zc3z04anonymousza32671ze3z87_6664); 
{ /* Ieee/input.scm 508 */
obj_t BgL_tmp1143z00_3590;
BgL_tmp1143z00_3590 = 
BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_ipz00_3587); 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1141z00_3588); 
{ /* Ieee/input.scm 509 */
obj_t BgL_portz00_6129;
if(
INPUT_PORTP(BgL_ipz00_3587))
{ /* Ieee/input.scm 509 */
BgL_portz00_6129 = BgL_ipz00_3587; }  else 
{ 
obj_t BgL_auxz00_11578;
BgL_auxz00_11578 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)19663)), BGl_string5048z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_3587); 
FAILURE(BgL_auxz00_11578,BFALSE,BFALSE);} 
bgl_close_input_port(BgL_portz00_6129); } 
return BgL_tmp1143z00_3590;} } } } }  else 
{ /* Ieee/input.scm 501 */
return 
bgl_file_to_string(
BSTRING_TO_STRING(BgL_pathz00_75));} } } 

}



/* &file->string */
obj_t BGl_z62filezd2ze3stringz53zz__r4_input_6_10_2z00(obj_t BgL_envz00_6665, obj_t BgL_pathz00_6666)
{
{ /* Ieee/input.scm 496 */
{ /* Ieee/input.scm 499 */
obj_t BgL_auxz00_11585;
if(
STRINGP(BgL_pathz00_6666))
{ /* Ieee/input.scm 499 */
BgL_auxz00_11585 = BgL_pathz00_6666
; }  else 
{ 
obj_t BgL_auxz00_11588;
BgL_auxz00_11588 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)19354)), BGl_string5049z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_pathz00_6666); 
FAILURE(BgL_auxz00_11588,BFALSE,BFALSE);} 
return 
BGl_filezd2ze3stringz31zz__r4_input_6_10_2z00(BgL_auxz00_11585);} } 

}



/* &<@anonymous:2671> */
obj_t BGl_z62zc3z04anonymousza32671ze3ze5zz__r4_input_6_10_2z00(obj_t BgL_envz00_6667)
{
{ /* Ieee/input.scm 507 */
{ /* Ieee/input.scm 509 */
obj_t BgL_ipz00_6668;
BgL_ipz00_6668 = 
PROCEDURE_REF(BgL_envz00_6667, 
(int)(((long)0))); 
{ /* Ieee/input.scm 509 */
obj_t BgL_portz00_7702;
if(
INPUT_PORTP(BgL_ipz00_6668))
{ /* Ieee/input.scm 509 */
BgL_portz00_7702 = BgL_ipz00_6668; }  else 
{ 
obj_t BgL_auxz00_11597;
BgL_auxz00_11597 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)19663)), BGl_string5050z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_6668); 
FAILURE(BgL_auxz00_11597,BFALSE,BFALSE);} 
return 
bgl_close_input_port(BgL_portz00_7702);} } } 

}



/* send-chars/size */
BGL_EXPORTED_DEF long BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(obj_t BgL_ipz00_76, obj_t BgL_opz00_77, long BgL_siza7eza7_78, long BgL_offsetz00_79)
{
{ /* Ieee/input.scm 519 */
{ /* Ieee/input.scm 521 */
long BgL_sza7za7_3605;long BgL_offz00_3606;
{ /* Ieee/input.scm 521 */
long BgL_res4012z00_6131;
BgL_res4012z00_6131 = 
(long)(BgL_siza7eza7_78); 
BgL_sza7za7_3605 = BgL_res4012z00_6131; } 
{ /* Ieee/input.scm 522 */
long BgL_res4013z00_6133;
BgL_res4013z00_6133 = 
(long)(BgL_offsetz00_79); 
BgL_offz00_3606 = BgL_res4013z00_6133; } 
{ /* Ieee/input.scm 525 */
obj_t BgL__ortest_1144z00_3607;
BgL__ortest_1144z00_3607 = 
bgl_sendchars(BgL_ipz00_76, BgL_opz00_77, BgL_sza7za7_3605, BgL_offz00_3606); 
if(
CBOOL(BgL__ortest_1144z00_3607))
{ /* Ieee/input.scm 525 */
obj_t BgL_tmpz00_11607;
if(
INTEGERP(BgL__ortest_1144z00_3607))
{ /* Ieee/input.scm 525 */
BgL_tmpz00_11607 = BgL__ortest_1144z00_3607
; }  else 
{ 
obj_t BgL_auxz00_11610;
BgL_auxz00_11610 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)20229)), BGl_string5051z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL__ortest_1144z00_3607); 
FAILURE(BgL_auxz00_11610,BFALSE,BFALSE);} 
return 
(long)CINT(BgL_tmpz00_11607);}  else 
{ /* Ieee/input.scm 527 */
bool_t BgL_test5744z00_11615;
if(
INPUT_GZIP_PORTP(BgL_ipz00_76))
{ /* Ieee/input.scm 527 */
if(
(BgL_sza7za7_3605==((long)-1)))
{ /* Ieee/input.scm 527 */
BgL_test5744z00_11615 = 
(BgL_offz00_3606==((long)-1))
; }  else 
{ /* Ieee/input.scm 527 */
BgL_test5744z00_11615 = ((bool_t)0)
; } }  else 
{ /* Ieee/input.scm 527 */
BgL_test5744z00_11615 = ((bool_t)0)
; } 
if(BgL_test5744z00_11615)
{ /* Ieee/input.scm 528 */
obj_t BgL_tmpz00_11621;
{ /* Ieee/input.scm 528 */
obj_t BgL_aux4833z00_7358;
BgL_aux4833z00_7358 = 
BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7(BgL_ipz00_76, BgL_opz00_77); 
if(
INTEGERP(BgL_aux4833z00_7358))
{ /* Ieee/input.scm 528 */
BgL_tmpz00_11621 = BgL_aux4833z00_7358
; }  else 
{ 
obj_t BgL_auxz00_11625;
BgL_auxz00_11625 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)20329)), BGl_string5051z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_aux4833z00_7358); 
FAILURE(BgL_auxz00_11625,BFALSE,BFALSE);} } 
return 
(long)CINT(BgL_tmpz00_11621);}  else 
{ /* Ieee/input.scm 527 */
return 
(long)(
BGl_z52sendcharsz52zz__r4_input_6_10_2z00(BgL_ipz00_76, BgL_opz00_77, BgL_sza7za7_3605, BgL_offz00_3606));} } } } } 

}



/* &send-chars/size */
obj_t BGl_z62sendzd2charszf2siza7eze5zz__r4_input_6_10_2z00(obj_t BgL_envz00_6669, obj_t BgL_ipz00_6670, obj_t BgL_opz00_6671, obj_t BgL_siza7eza7_6672, obj_t BgL_offsetz00_6673)
{
{ /* Ieee/input.scm 519 */
{ /* Ieee/input.scm 521 */
long BgL_tmpz00_11632;
{ /* Ieee/input.scm 521 */
long BgL_auxz00_11656;long BgL_auxz00_11647;obj_t BgL_auxz00_11640;obj_t BgL_auxz00_11633;
{ /* Ieee/input.scm 521 */
obj_t BgL_tmpz00_11657;
if(
ELONGP(BgL_offsetz00_6673))
{ /* Ieee/input.scm 521 */
BgL_tmpz00_11657 = BgL_offsetz00_6673
; }  else 
{ 
obj_t BgL_auxz00_11660;
BgL_auxz00_11660 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)20115)), BGl_string5052z00zz__r4_input_6_10_2z00, BGl_string5054z00zz__r4_input_6_10_2z00, BgL_offsetz00_6673); 
FAILURE(BgL_auxz00_11660,BFALSE,BFALSE);} 
BgL_auxz00_11656 = 
BELONG_TO_LONG(BgL_tmpz00_11657); } 
{ /* Ieee/input.scm 521 */
obj_t BgL_tmpz00_11648;
if(
ELONGP(BgL_siza7eza7_6672))
{ /* Ieee/input.scm 521 */
BgL_tmpz00_11648 = BgL_siza7eza7_6672
; }  else 
{ 
obj_t BgL_auxz00_11651;
BgL_auxz00_11651 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)20115)), BGl_string5052z00zz__r4_input_6_10_2z00, BGl_string5054z00zz__r4_input_6_10_2z00, BgL_siza7eza7_6672); 
FAILURE(BgL_auxz00_11651,BFALSE,BFALSE);} 
BgL_auxz00_11647 = 
BELONG_TO_LONG(BgL_tmpz00_11648); } 
if(
OUTPUT_PORTP(BgL_opz00_6671))
{ /* Ieee/input.scm 521 */
BgL_auxz00_11640 = BgL_opz00_6671
; }  else 
{ 
obj_t BgL_auxz00_11643;
BgL_auxz00_11643 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)20115)), BGl_string5052z00zz__r4_input_6_10_2z00, BGl_string5053z00zz__r4_input_6_10_2z00, BgL_opz00_6671); 
FAILURE(BgL_auxz00_11643,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_ipz00_6670))
{ /* Ieee/input.scm 521 */
BgL_auxz00_11633 = BgL_ipz00_6670
; }  else 
{ 
obj_t BgL_auxz00_11636;
BgL_auxz00_11636 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)20115)), BGl_string5052z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_6670); 
FAILURE(BgL_auxz00_11636,BFALSE,BFALSE);} 
BgL_tmpz00_11632 = 
BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(BgL_auxz00_11633, BgL_auxz00_11640, BgL_auxz00_11647, BgL_auxz00_11656); } 
return 
BINT(BgL_tmpz00_11632);} } 

}



/* _send-chars */
obj_t BGl__sendzd2charszd2zz__r4_input_6_10_2z00(obj_t BgL_env1316z00_85, obj_t BgL_opt1315z00_84)
{
{ /* Ieee/input.scm 541 */
{ /* Ieee/input.scm 541 */
obj_t BgL_g1317z00_3613;obj_t BgL_g1318z00_3614;
BgL_g1317z00_3613 = 
VECTOR_REF(BgL_opt1315z00_84,((long)0)); 
BgL_g1318z00_3614 = 
VECTOR_REF(BgL_opt1315z00_84,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1315z00_84)) { case ((long)2) : 

{ /* Ieee/input.scm 541 */

{ /* Ieee/input.scm 541 */
long BgL_tmpz00_11669;
{ /* Ieee/input.scm 541 */
obj_t BgL_auxz00_11677;obj_t BgL_auxz00_11670;
if(
OUTPUT_PORTP(BgL_g1318z00_3614))
{ /* Ieee/input.scm 541 */
BgL_auxz00_11677 = BgL_g1318z00_3614
; }  else 
{ 
obj_t BgL_auxz00_11680;
BgL_auxz00_11680 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)20782)), BGl_string5058z00zz__r4_input_6_10_2z00, BGl_string5053z00zz__r4_input_6_10_2z00, BgL_g1318z00_3614); 
FAILURE(BgL_auxz00_11680,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_g1317z00_3613))
{ /* Ieee/input.scm 541 */
BgL_auxz00_11670 = BgL_g1317z00_3613
; }  else 
{ 
obj_t BgL_auxz00_11673;
BgL_auxz00_11673 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)20782)), BGl_string5058z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_g1317z00_3613); 
FAILURE(BgL_auxz00_11673,BFALSE,BFALSE);} 
BgL_tmpz00_11669 = 
BGl_sendzd2charszd2zz__r4_input_6_10_2z00(BgL_auxz00_11670, BgL_auxz00_11677, 
BINT(((long)-1)), 
BINT(((long)-1))); } 
return 
BINT(BgL_tmpz00_11669);} } break;case ((long)3) : 

{ /* Ieee/input.scm 541 */
obj_t BgL_siza7eza7_3620;
BgL_siza7eza7_3620 = 
VECTOR_REF(BgL_opt1315z00_84,((long)2)); 
{ /* Ieee/input.scm 541 */

{ /* Ieee/input.scm 541 */
long BgL_tmpz00_11689;
{ /* Ieee/input.scm 541 */
obj_t BgL_auxz00_11697;obj_t BgL_auxz00_11690;
if(
OUTPUT_PORTP(BgL_g1318z00_3614))
{ /* Ieee/input.scm 541 */
BgL_auxz00_11697 = BgL_g1318z00_3614
; }  else 
{ 
obj_t BgL_auxz00_11700;
BgL_auxz00_11700 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)20782)), BGl_string5058z00zz__r4_input_6_10_2z00, BGl_string5053z00zz__r4_input_6_10_2z00, BgL_g1318z00_3614); 
FAILURE(BgL_auxz00_11700,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_g1317z00_3613))
{ /* Ieee/input.scm 541 */
BgL_auxz00_11690 = BgL_g1317z00_3613
; }  else 
{ 
obj_t BgL_auxz00_11693;
BgL_auxz00_11693 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)20782)), BGl_string5058z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_g1317z00_3613); 
FAILURE(BgL_auxz00_11693,BFALSE,BFALSE);} 
BgL_tmpz00_11689 = 
BGl_sendzd2charszd2zz__r4_input_6_10_2z00(BgL_auxz00_11690, BgL_auxz00_11697, BgL_siza7eza7_3620, 
BINT(((long)-1))); } 
return 
BINT(BgL_tmpz00_11689);} } } break;case ((long)4) : 

{ /* Ieee/input.scm 541 */
obj_t BgL_siza7eza7_3622;
BgL_siza7eza7_3622 = 
VECTOR_REF(BgL_opt1315z00_84,((long)2)); 
{ /* Ieee/input.scm 541 */
obj_t BgL_offsetz00_3623;
BgL_offsetz00_3623 = 
VECTOR_REF(BgL_opt1315z00_84,((long)3)); 
{ /* Ieee/input.scm 541 */

{ /* Ieee/input.scm 541 */
long BgL_tmpz00_11709;
{ /* Ieee/input.scm 541 */
obj_t BgL_auxz00_11717;obj_t BgL_auxz00_11710;
if(
OUTPUT_PORTP(BgL_g1318z00_3614))
{ /* Ieee/input.scm 541 */
BgL_auxz00_11717 = BgL_g1318z00_3614
; }  else 
{ 
obj_t BgL_auxz00_11720;
BgL_auxz00_11720 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)20782)), BGl_string5058z00zz__r4_input_6_10_2z00, BGl_string5053z00zz__r4_input_6_10_2z00, BgL_g1318z00_3614); 
FAILURE(BgL_auxz00_11720,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_g1317z00_3613))
{ /* Ieee/input.scm 541 */
BgL_auxz00_11710 = BgL_g1317z00_3613
; }  else 
{ 
obj_t BgL_auxz00_11713;
BgL_auxz00_11713 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)20782)), BGl_string5058z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_g1317z00_3613); 
FAILURE(BgL_auxz00_11713,BFALSE,BFALSE);} 
BgL_tmpz00_11709 = 
BGl_sendzd2charszd2zz__r4_input_6_10_2z00(BgL_auxz00_11710, BgL_auxz00_11717, BgL_siza7eza7_3622, BgL_offsetz00_3623); } 
return 
BINT(BgL_tmpz00_11709);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol5055z00zz__r4_input_6_10_2z00, BGl_string5057z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1315z00_84)));} } } } 

}



/* send-chars */
BGL_EXPORTED_DEF long BGl_sendzd2charszd2zz__r4_input_6_10_2z00(obj_t BgL_ipz00_80, obj_t BgL_opz00_81, obj_t BgL_siza7eza7_82, obj_t BgL_offsetz00_83)
{
{ /* Ieee/input.scm 541 */
{ /* Ieee/input.scm 543 */
long BgL_sza7za7_3625;long BgL_offz00_3626;
if(
INTEGERP(BgL_siza7eza7_82))
{ /* Ieee/input.scm 544 */
long BgL_res4017z00_6140;
{ /* Ieee/input.scm 544 */
long BgL_tmpz00_11733;
BgL_tmpz00_11733 = 
(long)CINT(BgL_siza7eza7_82); 
BgL_res4017z00_6140 = 
(long)(BgL_tmpz00_11733); } 
BgL_sza7za7_3625 = BgL_res4017z00_6140; }  else 
{ /* Ieee/input.scm 544 */
if(
ELONGP(BgL_siza7eza7_82))
{ /* Ieee/input.scm 545 */
BgL_sza7za7_3625 = 
BELONG_TO_LONG(BgL_siza7eza7_82); }  else 
{ /* Ieee/input.scm 546 */
obj_t BgL_tmpz00_11739;
{ /* Ieee/input.scm 546 */
obj_t BgL_aux4855z00_7380;
BgL_aux4855z00_7380 = 
BGl_errorz00zz__errorz00(BGl_symbol5059z00zz__r4_input_6_10_2z00, BGl_string5061z00zz__r4_input_6_10_2z00, BgL_siza7eza7_82); 
if(
ELONGP(BgL_aux4855z00_7380))
{ /* Ieee/input.scm 546 */
BgL_tmpz00_11739 = BgL_aux4855z00_7380
; }  else 
{ 
obj_t BgL_auxz00_11743;
BgL_auxz00_11743 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)20996)), BGl_string5060z00zz__r4_input_6_10_2z00, BGl_string5054z00zz__r4_input_6_10_2z00, BgL_aux4855z00_7380); 
FAILURE(BgL_auxz00_11743,BFALSE,BFALSE);} } 
BgL_sza7za7_3625 = 
BELONG_TO_LONG(BgL_tmpz00_11739); } } 
if(
INTEGERP(BgL_offsetz00_83))
{ /* Ieee/input.scm 548 */
long BgL_res4020z00_6144;
{ /* Ieee/input.scm 548 */
long BgL_tmpz00_11750;
BgL_tmpz00_11750 = 
(long)CINT(BgL_offsetz00_83); 
BgL_res4020z00_6144 = 
(long)(BgL_tmpz00_11750); } 
BgL_offz00_3626 = BgL_res4020z00_6144; }  else 
{ /* Ieee/input.scm 548 */
if(
ELONGP(BgL_offsetz00_83))
{ /* Ieee/input.scm 549 */
BgL_offz00_3626 = 
BELONG_TO_LONG(BgL_offsetz00_83); }  else 
{ /* Ieee/input.scm 550 */
obj_t BgL_tmpz00_11756;
{ /* Ieee/input.scm 550 */
obj_t BgL_aux4857z00_7382;
BgL_aux4857z00_7382 = 
BGl_errorz00zz__errorz00(BGl_symbol5059z00zz__r4_input_6_10_2z00, BGl_string5062z00zz__r4_input_6_10_2z00, BgL_offsetz00_83); 
if(
ELONGP(BgL_aux4857z00_7382))
{ /* Ieee/input.scm 550 */
BgL_tmpz00_11756 = BgL_aux4857z00_7382
; }  else 
{ 
obj_t BgL_auxz00_11760;
BgL_auxz00_11760 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)21141)), BGl_string5060z00zz__r4_input_6_10_2z00, BGl_string5054z00zz__r4_input_6_10_2z00, BgL_aux4857z00_7382); 
FAILURE(BgL_auxz00_11760,BFALSE,BFALSE);} } 
BgL_offz00_3626 = 
BELONG_TO_LONG(BgL_tmpz00_11756); } } 
return 
BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(BgL_ipz00_80, BgL_opz00_81, BgL_sza7za7_3625, BgL_offz00_3626);} } 

}



/* _send-file */
obj_t BGl__sendzd2filezd2zz__r4_input_6_10_2z00(obj_t BgL_env1322z00_91, obj_t BgL_opt1321z00_90)
{
{ /* Ieee/input.scm 556 */
{ /* Ieee/input.scm 556 */
obj_t BgL_filez00_3631;obj_t BgL_opz00_3632;
BgL_filez00_3631 = 
VECTOR_REF(BgL_opt1321z00_90,((long)0)); 
BgL_opz00_3632 = 
VECTOR_REF(BgL_opt1321z00_90,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1321z00_90)) { case ((long)2) : 

{ /* Ieee/input.scm 556 */

{ /* Ieee/input.scm 556 */
long BgL_tmpz00_11768;
{ /* Ieee/input.scm 556 */
obj_t BgL_auxz00_11776;obj_t BgL_auxz00_11769;
if(
OUTPUT_PORTP(BgL_opz00_3632))
{ /* Ieee/input.scm 556 */
BgL_auxz00_11776 = BgL_opz00_3632
; }  else 
{ 
obj_t BgL_auxz00_11779;
BgL_auxz00_11779 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)21451)), BGl_string5065z00zz__r4_input_6_10_2z00, BGl_string5053z00zz__r4_input_6_10_2z00, BgL_opz00_3632); 
FAILURE(BgL_auxz00_11779,BFALSE,BFALSE);} 
if(
STRINGP(BgL_filez00_3631))
{ /* Ieee/input.scm 556 */
BgL_auxz00_11769 = BgL_filez00_3631
; }  else 
{ 
obj_t BgL_auxz00_11772;
BgL_auxz00_11772 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)21451)), BGl_string5065z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_filez00_3631); 
FAILURE(BgL_auxz00_11772,BFALSE,BFALSE);} 
BgL_tmpz00_11768 = 
BGl_sendzd2filezd2zz__r4_input_6_10_2z00(BgL_auxz00_11769, BgL_auxz00_11776, ((long)-1), ((long)-1)); } 
return 
BINT(BgL_tmpz00_11768);} } break;case ((long)3) : 

{ /* Ieee/input.scm 556 */
obj_t BgL_siza7eza7_3638;
BgL_siza7eza7_3638 = 
VECTOR_REF(BgL_opt1321z00_90,((long)2)); 
{ /* Ieee/input.scm 556 */

{ /* Ieee/input.scm 556 */
long BgL_tmpz00_11786;
{ /* Ieee/input.scm 556 */
long BgL_auxz00_11801;obj_t BgL_auxz00_11794;obj_t BgL_auxz00_11787;
{ /* Ieee/input.scm 556 */
obj_t BgL_tmpz00_11802;
if(
ELONGP(BgL_siza7eza7_3638))
{ /* Ieee/input.scm 556 */
BgL_tmpz00_11802 = BgL_siza7eza7_3638
; }  else 
{ 
obj_t BgL_auxz00_11805;
BgL_auxz00_11805 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)21451)), BGl_string5065z00zz__r4_input_6_10_2z00, BGl_string5054z00zz__r4_input_6_10_2z00, BgL_siza7eza7_3638); 
FAILURE(BgL_auxz00_11805,BFALSE,BFALSE);} 
BgL_auxz00_11801 = 
BELONG_TO_LONG(BgL_tmpz00_11802); } 
if(
OUTPUT_PORTP(BgL_opz00_3632))
{ /* Ieee/input.scm 556 */
BgL_auxz00_11794 = BgL_opz00_3632
; }  else 
{ 
obj_t BgL_auxz00_11797;
BgL_auxz00_11797 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)21451)), BGl_string5065z00zz__r4_input_6_10_2z00, BGl_string5053z00zz__r4_input_6_10_2z00, BgL_opz00_3632); 
FAILURE(BgL_auxz00_11797,BFALSE,BFALSE);} 
if(
STRINGP(BgL_filez00_3631))
{ /* Ieee/input.scm 556 */
BgL_auxz00_11787 = BgL_filez00_3631
; }  else 
{ 
obj_t BgL_auxz00_11790;
BgL_auxz00_11790 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)21451)), BGl_string5065z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_filez00_3631); 
FAILURE(BgL_auxz00_11790,BFALSE,BFALSE);} 
BgL_tmpz00_11786 = 
BGl_sendzd2filezd2zz__r4_input_6_10_2z00(BgL_auxz00_11787, BgL_auxz00_11794, BgL_auxz00_11801, ((long)-1)); } 
return 
BINT(BgL_tmpz00_11786);} } } break;case ((long)4) : 

{ /* Ieee/input.scm 556 */
obj_t BgL_siza7eza7_3640;
BgL_siza7eza7_3640 = 
VECTOR_REF(BgL_opt1321z00_90,((long)2)); 
{ /* Ieee/input.scm 556 */
obj_t BgL_offsetz00_3641;
BgL_offsetz00_3641 = 
VECTOR_REF(BgL_opt1321z00_90,((long)3)); 
{ /* Ieee/input.scm 556 */

{ /* Ieee/input.scm 556 */
long BgL_tmpz00_11814;
{ /* Ieee/input.scm 556 */
long BgL_auxz00_11838;long BgL_auxz00_11829;obj_t BgL_auxz00_11822;obj_t BgL_auxz00_11815;
{ /* Ieee/input.scm 556 */
obj_t BgL_tmpz00_11839;
if(
ELONGP(BgL_offsetz00_3641))
{ /* Ieee/input.scm 556 */
BgL_tmpz00_11839 = BgL_offsetz00_3641
; }  else 
{ 
obj_t BgL_auxz00_11842;
BgL_auxz00_11842 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)21451)), BGl_string5065z00zz__r4_input_6_10_2z00, BGl_string5054z00zz__r4_input_6_10_2z00, BgL_offsetz00_3641); 
FAILURE(BgL_auxz00_11842,BFALSE,BFALSE);} 
BgL_auxz00_11838 = 
BELONG_TO_LONG(BgL_tmpz00_11839); } 
{ /* Ieee/input.scm 556 */
obj_t BgL_tmpz00_11830;
if(
ELONGP(BgL_siza7eza7_3640))
{ /* Ieee/input.scm 556 */
BgL_tmpz00_11830 = BgL_siza7eza7_3640
; }  else 
{ 
obj_t BgL_auxz00_11833;
BgL_auxz00_11833 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)21451)), BGl_string5065z00zz__r4_input_6_10_2z00, BGl_string5054z00zz__r4_input_6_10_2z00, BgL_siza7eza7_3640); 
FAILURE(BgL_auxz00_11833,BFALSE,BFALSE);} 
BgL_auxz00_11829 = 
BELONG_TO_LONG(BgL_tmpz00_11830); } 
if(
OUTPUT_PORTP(BgL_opz00_3632))
{ /* Ieee/input.scm 556 */
BgL_auxz00_11822 = BgL_opz00_3632
; }  else 
{ 
obj_t BgL_auxz00_11825;
BgL_auxz00_11825 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)21451)), BGl_string5065z00zz__r4_input_6_10_2z00, BGl_string5053z00zz__r4_input_6_10_2z00, BgL_opz00_3632); 
FAILURE(BgL_auxz00_11825,BFALSE,BFALSE);} 
if(
STRINGP(BgL_filez00_3631))
{ /* Ieee/input.scm 556 */
BgL_auxz00_11815 = BgL_filez00_3631
; }  else 
{ 
obj_t BgL_auxz00_11818;
BgL_auxz00_11818 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)21451)), BGl_string5065z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_filez00_3631); 
FAILURE(BgL_auxz00_11818,BFALSE,BFALSE);} 
BgL_tmpz00_11814 = 
BGl_sendzd2filezd2zz__r4_input_6_10_2z00(BgL_auxz00_11815, BgL_auxz00_11822, BgL_auxz00_11829, BgL_auxz00_11838); } 
return 
BINT(BgL_tmpz00_11814);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol5063z00zz__r4_input_6_10_2z00, BGl_string5057z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1321z00_90)));} } } } 

}



/* send-file */
BGL_EXPORTED_DEF long BGl_sendzd2filezd2zz__r4_input_6_10_2z00(obj_t BgL_filez00_86, obj_t BgL_opz00_87, long BgL_siza7eza7_88, long BgL_offsetz00_89)
{
{ /* Ieee/input.scm 556 */
{ /* Ieee/input.scm 560 */
long BgL_sza7za7_3643;long BgL_offz00_3644;
{ /* Ieee/input.scm 560 */
long BgL_res4022z00_6147;
BgL_res4022z00_6147 = 
(long)(BgL_siza7eza7_88); 
BgL_sza7za7_3643 = BgL_res4022z00_6147; } 
{ /* Ieee/input.scm 561 */
long BgL_res4023z00_6149;
BgL_res4023z00_6149 = 
(long)(BgL_offsetz00_89); 
BgL_offz00_3644 = BgL_res4023z00_6149; } 
{ /* Ieee/input.scm 564 */
obj_t BgL__ortest_1147z00_3645;
BgL__ortest_1147z00_3645 = 
bgl_sendfile(BgL_filez00_86, BgL_opz00_87, 
(long)(BgL_siza7eza7_88), 
(long)(BgL_offsetz00_89)); 
if(
CBOOL(BgL__ortest_1147z00_3645))
{ /* Ieee/input.scm 564 */
obj_t BgL_tmpz00_11861;
if(
INTEGERP(BgL__ortest_1147z00_3645))
{ /* Ieee/input.scm 564 */
BgL_tmpz00_11861 = BgL__ortest_1147z00_3645
; }  else 
{ 
obj_t BgL_auxz00_11864;
BgL_auxz00_11864 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)21690)), BGl_string5066z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL__ortest_1147z00_3645); 
FAILURE(BgL_auxz00_11864,BFALSE,BFALSE);} 
return 
(long)CINT(BgL_tmpz00_11861);}  else 
{ /* Ieee/input.scm 565 */
obj_t BgL_ipz00_3646;
{ /* Ieee/port.scm 440 */

BgL_ipz00_3646 = 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_filez00_86, BTRUE, 
BINT(((long)5000000))); } 
{ /* Ieee/input.scm 566 */
obj_t BgL_exitd1148z00_3647;
BgL_exitd1148z00_3647 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Ieee/input.scm 568 */
obj_t BgL_zc3z04anonymousza32687ze3z87_6674;
BgL_zc3z04anonymousza32687ze3z87_6674 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32687ze3ze5zz__r4_input_6_10_2z00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza32687ze3z87_6674, 
(int)(((long)0)), BgL_ipz00_3646); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1148z00_3647, BgL_zc3z04anonymousza32687ze3z87_6674); 
{ /* Ieee/input.scm 567 */
long BgL_tmp1150z00_3649;
{ /* Ieee/input.scm 567 */
obj_t BgL_auxz00_11878;
if(
INPUT_PORTP(BgL_ipz00_3646))
{ /* Ieee/input.scm 567 */
BgL_auxz00_11878 = BgL_ipz00_3646
; }  else 
{ 
obj_t BgL_auxz00_11881;
BgL_auxz00_11881 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)21806)), BGl_string5066z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_3646); 
FAILURE(BgL_auxz00_11881,BFALSE,BFALSE);} 
BgL_tmp1150z00_3649 = 
BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(BgL_auxz00_11878, BgL_opz00_87, BgL_siza7eza7_88, BgL_offsetz00_89); } 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1148z00_3647); 
{ /* Ieee/input.scm 568 */
obj_t BgL_portz00_6151;
if(
INPUT_PORTP(BgL_ipz00_3646))
{ /* Ieee/input.scm 568 */
BgL_portz00_6151 = BgL_ipz00_3646; }  else 
{ 
obj_t BgL_auxz00_11889;
BgL_auxz00_11889 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)21849)), BGl_string5066z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_3646); 
FAILURE(BgL_auxz00_11889,BFALSE,BFALSE);} 
bgl_close_input_port(BgL_portz00_6151); } 
return BgL_tmp1150z00_3649;} } } } } } } 

}



/* &<@anonymous:2687> */
obj_t BGl_z62zc3z04anonymousza32687ze3ze5zz__r4_input_6_10_2z00(obj_t BgL_envz00_6675)
{
{ /* Ieee/input.scm 566 */
{ /* Ieee/input.scm 568 */
obj_t BgL_ipz00_6676;
BgL_ipz00_6676 = 
PROCEDURE_REF(BgL_envz00_6675, 
(int)(((long)0))); 
{ /* Ieee/input.scm 568 */
obj_t BgL_portz00_7703;
if(
INPUT_PORTP(BgL_ipz00_6676))
{ /* Ieee/input.scm 568 */
BgL_portz00_7703 = BgL_ipz00_6676; }  else 
{ 
obj_t BgL_auxz00_11898;
BgL_auxz00_11898 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)21849)), BGl_string5067z00zz__r4_input_6_10_2z00, BGl_string4907z00zz__r4_input_6_10_2z00, BgL_ipz00_6676); 
FAILURE(BgL_auxz00_11898,BFALSE,BFALSE);} 
return 
bgl_close_input_port(BgL_portz00_7703);} } } 

}



/* file-lines */
BGL_EXPORTED_DEF obj_t BGl_filezd2lineszd2zz__r4_input_6_10_2z00(obj_t BgL_filez00_92)
{
{ /* Ieee/input.scm 580 */
if(
fexists(
BSTRING_TO_STRING(BgL_filez00_92)))
{ /* Ieee/input.scm 605 */
obj_t BgL_zc3z04anonymousza32690ze3z87_6677;
BgL_zc3z04anonymousza32690ze3z87_6677 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32690ze3ze5zz__r4_input_6_10_2z00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza32690ze3z87_6677, 
(int)(((long)0)), BgL_filez00_92); 
return 
BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(BgL_filez00_92, BgL_zc3z04anonymousza32690ze3z87_6677);}  else 
{ /* Ieee/input.scm 601 */
return BFALSE;} } 

}



/* &file-lines */
obj_t BGl_z62filezd2lineszb0zz__r4_input_6_10_2z00(obj_t BgL_envz00_6678, obj_t BgL_filez00_6679)
{
{ /* Ieee/input.scm 580 */
{ /* Ieee/input.scm 583 */
obj_t BgL_auxz00_11912;
if(
STRINGP(BgL_filez00_6679))
{ /* Ieee/input.scm 583 */
BgL_auxz00_11912 = BgL_filez00_6679
; }  else 
{ 
obj_t BgL_auxz00_11915;
BgL_auxz00_11915 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)22416)), BGl_string5068z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_filez00_6679); 
FAILURE(BgL_auxz00_11915,BFALSE,BFALSE);} 
return 
BGl_filezd2lineszd2zz__r4_input_6_10_2z00(BgL_auxz00_11912);} } 

}



/* &<@anonymous:2690> */
obj_t BGl_z62zc3z04anonymousza32690ze3ze5zz__r4_input_6_10_2z00(obj_t BgL_envz00_6680)
{
{ /* Ieee/input.scm 604 */
{ /* Ieee/input.scm 605 */
obj_t BgL_filez00_6681;
BgL_filez00_6681 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_6680, 
(int)(((long)0)))); 
{ 
obj_t BgL_iportz00_7705;long BgL_startz00_7706;obj_t BgL_accz00_7707;
{ /* Ieee/input.scm 605 */
obj_t BgL_arg2691z00_7778;
{ /* Ieee/input.scm 605 */
obj_t BgL_res4069z00_7779;
{ /* Ieee/input.scm 605 */
obj_t BgL_tmpz00_11923;
BgL_tmpz00_11923 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res4069z00_7779 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_11923); } 
BgL_arg2691z00_7778 = BgL_res4069z00_7779; } 
BgL_iportz00_7705 = BgL_arg2691z00_7778; 
BgL_startz00_7706 = ((long)0); 
BgL_accz00_7707 = BNIL; 
{ 
obj_t BgL_iportz00_7756;long BgL_lastzd2matchzd2_7757;long BgL_forwardz00_7758;long BgL_bufposz00_7759;obj_t BgL_iportz00_7744;long BgL_lastzd2matchzd2_7745;long BgL_forwardz00_7746;long BgL_bufposz00_7747;obj_t BgL_iportz00_7731;long BgL_lastzd2matchzd2_7732;long BgL_forwardz00_7733;long BgL_bufposz00_7734;
{ /* Ieee/input.scm 583 */
bool_t BgL_test5780z00_11926;
{ /* Ieee/input.scm 583 */
bool_t BgL_res4064z00_7768;
BgL_res4064z00_7768 = 
INPUT_PORT_CLOSEP(BgL_iportz00_7705); 
BgL_test5780z00_11926 = BgL_res4064z00_7768; } 
if(BgL_test5780z00_11926)
{ /* Ieee/input.scm 583 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg2693z00_7769;
{ /* Ieee/input.scm 583 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1046z00_7770;
{ /* Ieee/input.scm 583 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1045z00_7771;
BgL_new1045z00_7771 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Ieee/input.scm 583 */
long BgL_arg2696z00_7772;
{ /* Ieee/input.scm 583 */
long BgL_res4065z00_7773;
BgL_res4065z00_7773 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg2696z00_7772 = BgL_res4065z00_7773; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1045z00_7771), BgL_arg2696z00_7772); } 
BgL_new1046z00_7770 = BgL_new1045z00_7771; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_7770)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_7770)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_11936;
{ /* Ieee/input.scm 583 */
obj_t BgL_arg2694z00_7774;
{ /* Ieee/input.scm 583 */
obj_t BgL_arg2695z00_7775;
{ /* Ieee/input.scm 583 */
obj_t BgL_res4066z00_7776;
{ /* Ieee/input.scm 583 */
obj_t BgL_classz00_7777;
BgL_classz00_7777 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res4066z00_7776 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_7777); } 
BgL_arg2695z00_7775 = BgL_res4066z00_7776; } 
BgL_arg2694z00_7774 = 
VECTOR_REF(BgL_arg2695z00_7775,((long)2)); } 
{ /* Ieee/input.scm 583 */
obj_t BgL_auxz00_11940;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2694z00_7774))
{ /* Ieee/input.scm 583 */
BgL_auxz00_11940 = BgL_arg2694z00_7774
; }  else 
{ 
obj_t BgL_auxz00_11943;
BgL_auxz00_11943 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)22416)), BGl_string5072z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg2694z00_7774); 
FAILURE(BgL_auxz00_11943,BFALSE,BFALSE);} 
BgL_auxz00_11936 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_11940); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_7770)))->BgL_stackz00)=((obj_t)BgL_auxz00_11936),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_7770)))->BgL_procz00)=((obj_t)BGl_string4908z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_7770)))->BgL_msgz00)=((obj_t)BGl_string4924z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_7770)))->BgL_objz00)=((obj_t)BgL_iportz00_7705),BUNSPEC); 
BgL_arg2693z00_7769 = BgL_new1046z00_7770; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2693z00_7769));}  else 
{ /* Ieee/input.scm 583 */
BgL_ignorez00_7708:
{ /* Ieee/input.scm 583 */
long BgL_res4053z00_7713;
BgL_res4053z00_7713 = 
RGC_START_MATCH(BgL_iportz00_7705); BgL_res4053z00_7713; } 
{ /* Ieee/input.scm 583 */
long BgL_matchz00_7714;
{ /* Ieee/input.scm 583 */
long BgL_arg2849z00_7715;long BgL_arg2850z00_7716;
{ /* Ieee/input.scm 583 */
long BgL_res4054z00_7717;
BgL_res4054z00_7717 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7705); 
BgL_arg2849z00_7715 = BgL_res4054z00_7717; } 
{ /* Ieee/input.scm 583 */
long BgL_res4055z00_7718;
BgL_res4055z00_7718 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7705); 
BgL_arg2850z00_7716 = BgL_res4055z00_7718; } 
BgL_iportz00_7731 = BgL_iportz00_7705; 
BgL_lastzd2matchzd2_7732 = ((long)2); 
BgL_forwardz00_7733 = BgL_arg2849z00_7715; 
BgL_bufposz00_7734 = BgL_arg2850z00_7716; 
BgL_statezd20zd21151z00_7710:
if(
(BgL_forwardz00_7733==BgL_bufposz00_7734))
{ /* Ieee/input.scm 583 */
if(
rgc_fill_buffer(BgL_iportz00_7731))
{ /* Ieee/input.scm 583 */
long BgL_arg2718z00_7735;long BgL_arg2720z00_7736;
{ /* Ieee/input.scm 583 */
long BgL_res4043z00_7737;
BgL_res4043z00_7737 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7731); 
BgL_arg2718z00_7735 = BgL_res4043z00_7737; } 
{ /* Ieee/input.scm 583 */
long BgL_res4044z00_7738;
BgL_res4044z00_7738 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7731); 
BgL_arg2720z00_7736 = BgL_res4044z00_7738; } 
{ 
long BgL_bufposz00_11967;long BgL_forwardz00_11966;
BgL_forwardz00_11966 = BgL_arg2718z00_7735; 
BgL_bufposz00_11967 = BgL_arg2720z00_7736; 
BgL_bufposz00_7734 = BgL_bufposz00_11967; 
BgL_forwardz00_7733 = BgL_forwardz00_11966; 
goto BgL_statezd20zd21151z00_7710;} }  else 
{ /* Ieee/input.scm 583 */
BgL_matchz00_7714 = BgL_lastzd2matchzd2_7732; } }  else 
{ /* Ieee/input.scm 583 */
int BgL_curz00_7739;
{ /* Ieee/input.scm 583 */
int BgL_res4045z00_7740;
BgL_res4045z00_7740 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7731, BgL_forwardz00_7733); 
BgL_curz00_7739 = BgL_res4045z00_7740; } 
{ /* Ieee/input.scm 583 */

if(
(
(long)(BgL_curz00_7739)==((long)10)))
{ /* Ieee/input.scm 583 */
long BgL_arg2722z00_7741;
BgL_arg2722z00_7741 = 
(((long)1)+BgL_forwardz00_7733); 
{ /* Ieee/input.scm 583 */
long BgL_newzd2matchzd2_7742;
{ /* Ieee/input.scm 583 */
long BgL_res4048z00_7743;
BgL_res4048z00_7743 = 
RGC_STOP_MATCH(BgL_iportz00_7731, BgL_arg2722z00_7741); BgL_res4048z00_7743; } 
BgL_newzd2matchzd2_7742 = ((long)0); 
BgL_matchz00_7714 = BgL_newzd2matchzd2_7742; } }  else 
{ /* Ieee/input.scm 583 */
BgL_iportz00_7744 = BgL_iportz00_7731; 
BgL_lastzd2matchzd2_7745 = BgL_lastzd2matchzd2_7732; 
BgL_forwardz00_7746 = 
(((long)1)+BgL_forwardz00_7733); 
BgL_bufposz00_7747 = BgL_bufposz00_7734; 
BgL_statezd21zd21152z00_7711:
{ /* Ieee/input.scm 583 */
long BgL_newzd2matchzd2_7748;
{ /* Ieee/input.scm 583 */
long BgL_res4033z00_7749;
BgL_res4033z00_7749 = 
RGC_STOP_MATCH(BgL_iportz00_7744, BgL_forwardz00_7746); BgL_res4033z00_7749; } 
BgL_newzd2matchzd2_7748 = ((long)1); 
if(
(BgL_forwardz00_7746==BgL_bufposz00_7747))
{ /* Ieee/input.scm 583 */
if(
rgc_fill_buffer(BgL_iportz00_7744))
{ /* Ieee/input.scm 583 */
long BgL_arg2710z00_7750;long BgL_arg2712z00_7751;
{ /* Ieee/input.scm 583 */
long BgL_res4036z00_7752;
BgL_res4036z00_7752 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7744); 
BgL_arg2710z00_7750 = BgL_res4036z00_7752; } 
{ /* Ieee/input.scm 583 */
long BgL_res4037z00_7753;
BgL_res4037z00_7753 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7744); 
BgL_arg2712z00_7751 = BgL_res4037z00_7753; } 
{ 
long BgL_bufposz00_11982;long BgL_forwardz00_11981;
BgL_forwardz00_11981 = BgL_arg2710z00_7750; 
BgL_bufposz00_11982 = BgL_arg2712z00_7751; 
BgL_bufposz00_7747 = BgL_bufposz00_11982; 
BgL_forwardz00_7746 = BgL_forwardz00_11981; 
goto BgL_statezd21zd21152z00_7711;} }  else 
{ /* Ieee/input.scm 583 */
BgL_matchz00_7714 = BgL_newzd2matchzd2_7748; } }  else 
{ /* Ieee/input.scm 583 */
int BgL_curz00_7754;
{ /* Ieee/input.scm 583 */
int BgL_res4038z00_7755;
BgL_res4038z00_7755 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7744, BgL_forwardz00_7746); 
BgL_curz00_7754 = BgL_res4038z00_7755; } 
{ /* Ieee/input.scm 583 */

if(
(
(long)(BgL_curz00_7754)==((long)10)))
{ /* Ieee/input.scm 583 */
BgL_matchz00_7714 = BgL_newzd2matchzd2_7748; }  else 
{ /* Ieee/input.scm 583 */
BgL_iportz00_7756 = BgL_iportz00_7744; 
BgL_lastzd2matchzd2_7757 = BgL_newzd2matchzd2_7748; 
BgL_forwardz00_7758 = 
(((long)1)+BgL_forwardz00_7746); 
BgL_bufposz00_7759 = BgL_bufposz00_7747; 
BgL_statezd24zd21155z00_7712:
{ /* Ieee/input.scm 583 */
long BgL_newzd2matchzd2_7760;
{ /* Ieee/input.scm 583 */
long BgL_res4024z00_7761;
BgL_res4024z00_7761 = 
RGC_STOP_MATCH(BgL_iportz00_7756, BgL_forwardz00_7758); BgL_res4024z00_7761; } 
BgL_newzd2matchzd2_7760 = ((long)1); 
if(
(BgL_forwardz00_7758==BgL_bufposz00_7759))
{ /* Ieee/input.scm 583 */
if(
rgc_fill_buffer(BgL_iportz00_7756))
{ /* Ieee/input.scm 583 */
long BgL_arg2702z00_7762;long BgL_arg2703z00_7763;
{ /* Ieee/input.scm 583 */
long BgL_res4027z00_7764;
BgL_res4027z00_7764 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7756); 
BgL_arg2702z00_7762 = BgL_res4027z00_7764; } 
{ /* Ieee/input.scm 583 */
long BgL_res4028z00_7765;
BgL_res4028z00_7765 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7756); 
BgL_arg2703z00_7763 = BgL_res4028z00_7765; } 
{ 
long BgL_bufposz00_11995;long BgL_forwardz00_11994;
BgL_forwardz00_11994 = BgL_arg2702z00_7762; 
BgL_bufposz00_11995 = BgL_arg2703z00_7763; 
BgL_bufposz00_7759 = BgL_bufposz00_11995; 
BgL_forwardz00_7758 = BgL_forwardz00_11994; 
goto BgL_statezd24zd21155z00_7712;} }  else 
{ /* Ieee/input.scm 583 */
BgL_matchz00_7714 = BgL_newzd2matchzd2_7760; } }  else 
{ /* Ieee/input.scm 583 */
int BgL_curz00_7766;
{ /* Ieee/input.scm 583 */
int BgL_res4029z00_7767;
BgL_res4029z00_7767 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7756, BgL_forwardz00_7758); 
BgL_curz00_7766 = BgL_res4029z00_7767; } 
{ /* Ieee/input.scm 583 */

if(
(
(long)(BgL_curz00_7766)==((long)10)))
{ /* Ieee/input.scm 583 */
BgL_matchz00_7714 = BgL_newzd2matchzd2_7760; }  else 
{ 
long BgL_forwardz00_12001;long BgL_lastzd2matchzd2_12000;
BgL_lastzd2matchzd2_12000 = BgL_newzd2matchzd2_7760; 
BgL_forwardz00_12001 = 
(((long)1)+BgL_forwardz00_7758); 
BgL_forwardz00_7758 = BgL_forwardz00_12001; 
BgL_lastzd2matchzd2_7757 = BgL_lastzd2matchzd2_12000; 
goto BgL_statezd24zd21155z00_7712;} } } } } } } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_7705); 
switch( BgL_matchz00_7714) { case ((long)2) : 

{ /* Ieee/input.scm 593 */
obj_t BgL_cz00_7719;
{ /* Ieee/input.scm 583 */
bool_t BgL_test5791z00_12006;
{ /* Ieee/input.scm 583 */
long BgL_arg2831z00_7728;
{ /* Ieee/input.scm 583 */
long BgL_res4050z00_7729;
BgL_res4050z00_7729 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_7705); 
BgL_arg2831z00_7728 = BgL_res4050z00_7729; } 
BgL_test5791z00_12006 = 
(BgL_arg2831z00_7728==((long)0)); } 
if(BgL_test5791z00_12006)
{ /* Ieee/input.scm 583 */
BgL_cz00_7719 = BEOF; }  else 
{ /* Ieee/input.scm 583 */
unsigned char BgL_res4052z00_7730;
BgL_res4052z00_7730 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_7705); 
BgL_cz00_7719 = 
BCHAR(BgL_res4052z00_7730); } } 
{ /* Ieee/input.scm 594 */
bool_t BgL_test5792z00_12011;
{ /* Ieee/input.scm 594 */
bool_t BgL_res4056z00_7720;
BgL_res4056z00_7720 = 
EOF_OBJECTP(BgL_cz00_7719); 
BgL_test5792z00_12011 = BgL_res4056z00_7720; } 
if(BgL_test5792z00_12011)
{ /* Ieee/input.scm 595 */
long BgL_stopz00_7721;
{ /* Ieee/input.scm 595 */
long BgL_res4058z00_7722;
BgL_res4058z00_7722 = 
INPUT_PORT_FILEPOS(BgL_iportz00_7705); 
BgL_stopz00_7721 = BgL_res4058z00_7722; } 
if(
(BgL_stopz00_7721>BgL_startz00_7706))
{ /* Ieee/input.scm 597 */
obj_t BgL_arg2845z00_7723;
{ /* Ieee/input.scm 597 */
obj_t BgL_arg2846z00_7724;
BgL_arg2846z00_7724 = 
MAKE_YOUNG_PAIR(
BINT(BgL_startz00_7706), 
BINT(BgL_stopz00_7721)); 
BgL_arg2845z00_7723 = 
MAKE_YOUNG_PAIR(BgL_arg2846z00_7724, BgL_accz00_7707); } 
return 
bgl_reverse_bang(BgL_arg2845z00_7723);}  else 
{ /* Ieee/input.scm 596 */
return 
bgl_reverse_bang(BgL_accz00_7707);} }  else 
{ /* Ieee/input.scm 594 */
return 
BGl_errorz00zz__errorz00(BGl_symbol5069z00zz__r4_input_6_10_2z00, BGl_string5071z00zz__r4_input_6_10_2z00, BgL_filez00_6681);} } } break;case ((long)1) : 

goto BgL_ignorez00_7708;break;case ((long)0) : 

{ /* Ieee/input.scm 585 */
long BgL_stopz00_7725;
{ /* Ieee/input.scm 585 */
long BgL_res4061z00_7726;
BgL_res4061z00_7726 = 
INPUT_PORT_FILEPOS(BgL_iportz00_7705); 
BgL_stopz00_7725 = BgL_res4061z00_7726; } 
{ /* Ieee/input.scm 585 */
obj_t BgL_descz00_7727;
BgL_descz00_7727 = 
MAKE_YOUNG_PAIR(
BINT(BgL_startz00_7706), 
BINT(BgL_stopz00_7725)); 
{ /* Ieee/input.scm 586 */

BgL_startz00_7706 = 
(((long)1)+BgL_stopz00_7725); 
BgL_accz00_7707 = 
MAKE_YOUNG_PAIR(BgL_descz00_7727, BgL_accz00_7707); 
goto BgL_ignorez00_7708;} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4908z00zz__r4_input_6_10_2z00, BGl_string4909z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_7714));} } } } } } } } } 

}



/* file-position->line */
BGL_EXPORTED_DEF obj_t BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(int BgL_posz00_93, obj_t BgL_fdescz00_94)
{
{ /* Ieee/input.scm 610 */
if(
PAIRP(BgL_fdescz00_94))
{ 
obj_t BgL_flinesz00_6270;long BgL_linez00_6271;
BgL_flinesz00_6270 = BgL_fdescz00_94; 
BgL_linez00_6271 = ((long)1); 
BgL_loopz00_6269:
if(
NULLP(BgL_flinesz00_6270))
{ /* Ieee/input.scm 616 */
return BFALSE;}  else 
{ /* Ieee/input.scm 618 */
bool_t BgL_test5796z00_12036;
{ /* Ieee/input.scm 618 */
long BgL_n1z00_6281;long BgL_n2z00_6282;
BgL_n1z00_6281 = 
(long)(BgL_posz00_93); 
{ /* Ieee/input.scm 618 */
obj_t BgL_pairz00_6276;
if(
PAIRP(BgL_flinesz00_6270))
{ /* Ieee/input.scm 618 */
BgL_pairz00_6276 = BgL_flinesz00_6270; }  else 
{ 
obj_t BgL_auxz00_12040;
BgL_auxz00_12040 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)23446)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string4970z00zz__r4_input_6_10_2z00, BgL_flinesz00_6270); 
FAILURE(BgL_auxz00_12040,BFALSE,BFALSE);} 
{ /* Ieee/input.scm 618 */
obj_t BgL_pairz00_6279;
{ /* Ieee/input.scm 618 */
obj_t BgL_aux4891z00_7416;
BgL_aux4891z00_7416 = 
CAR(BgL_pairz00_6276); 
if(
PAIRP(BgL_aux4891z00_7416))
{ /* Ieee/input.scm 618 */
BgL_pairz00_6279 = BgL_aux4891z00_7416; }  else 
{ 
obj_t BgL_auxz00_12047;
BgL_auxz00_12047 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)23440)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string4970z00zz__r4_input_6_10_2z00, BgL_aux4891z00_7416); 
FAILURE(BgL_auxz00_12047,BFALSE,BFALSE);} } 
{ /* Ieee/input.scm 618 */
obj_t BgL_tmpz00_12051;
{ /* Ieee/input.scm 618 */
obj_t BgL_aux4893z00_7418;
BgL_aux4893z00_7418 = 
CDR(BgL_pairz00_6279); 
if(
INTEGERP(BgL_aux4893z00_7418))
{ /* Ieee/input.scm 618 */
BgL_tmpz00_12051 = BgL_aux4893z00_7418
; }  else 
{ 
obj_t BgL_auxz00_12055;
BgL_auxz00_12055 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)23440)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_aux4893z00_7418); 
FAILURE(BgL_auxz00_12055,BFALSE,BFALSE);} } 
BgL_n2z00_6282 = 
(long)CINT(BgL_tmpz00_12051); } } } 
BgL_test5796z00_12036 = 
(BgL_n1z00_6281>=BgL_n2z00_6282); } 
if(BgL_test5796z00_12036)
{ /* Ieee/input.scm 619 */
obj_t BgL_arg2859z00_6283;long BgL_arg2860z00_6284;
{ /* Ieee/input.scm 619 */
obj_t BgL_pairz00_6285;
if(
PAIRP(BgL_flinesz00_6270))
{ /* Ieee/input.scm 619 */
BgL_pairz00_6285 = BgL_flinesz00_6270; }  else 
{ 
obj_t BgL_auxz00_12063;
BgL_auxz00_12063 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)23473)), BGl_string4999z00zz__r4_input_6_10_2z00, BGl_string4970z00zz__r4_input_6_10_2z00, BgL_flinesz00_6270); 
FAILURE(BgL_auxz00_12063,BFALSE,BFALSE);} 
BgL_arg2859z00_6283 = 
CDR(BgL_pairz00_6285); } 
BgL_arg2860z00_6284 = 
(BgL_linez00_6271+((long)1)); 
{ 
long BgL_linez00_12070;obj_t BgL_flinesz00_12069;
BgL_flinesz00_12069 = BgL_arg2859z00_6283; 
BgL_linez00_12070 = BgL_arg2860z00_6284; 
BgL_linez00_6271 = BgL_linez00_12070; 
BgL_flinesz00_6270 = BgL_flinesz00_12069; 
goto BgL_loopz00_6269;} }  else 
{ /* Ieee/input.scm 618 */
return 
BINT(BgL_linez00_6271);} } }  else 
{ /* Ieee/input.scm 612 */
if(
STRINGP(BgL_fdescz00_94))
{ /* Ieee/input.scm 622 */
if(
fexists(
BSTRING_TO_STRING(BgL_fdescz00_94)))
{ /* Ieee/input.scm 638 */
obj_t BgL_zc3z04anonymousza32865ze3z87_6682;
BgL_zc3z04anonymousza32865ze3z87_6682 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32865ze3ze5zz__r4_input_6_10_2z00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza32865ze3z87_6682, 
(int)(((long)0)), 
BINT(BgL_posz00_93)); 
return 
BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(BgL_fdescz00_94, BgL_zc3z04anonymousza32865ze3z87_6682);}  else 
{ /* Ieee/input.scm 634 */
return BFALSE;} }  else 
{ /* Ieee/input.scm 622 */
return BFALSE;} } } 

}



/* &file-position->line */
obj_t BGl_z62filezd2positionzd2ze3linez81zz__r4_input_6_10_2z00(obj_t BgL_envz00_6683, obj_t BgL_posz00_6684, obj_t BgL_fdescz00_6685)
{
{ /* Ieee/input.scm 610 */
{ /* Ieee/input.scm 612 */
int BgL_auxz00_12084;
{ /* Ieee/input.scm 612 */
obj_t BgL_tmpz00_12085;
if(
INTEGERP(BgL_posz00_6684))
{ /* Ieee/input.scm 612 */
BgL_tmpz00_12085 = BgL_posz00_6684
; }  else 
{ 
obj_t BgL_auxz00_12088;
BgL_auxz00_12088 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)23319)), BGl_string5073z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_posz00_6684); 
FAILURE(BgL_auxz00_12088,BFALSE,BFALSE);} 
BgL_auxz00_12084 = 
CINT(BgL_tmpz00_12085); } 
return 
BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(BgL_auxz00_12084, BgL_fdescz00_6685);} } 

}



/* &<@anonymous:2865> */
obj_t BGl_z62zc3z04anonymousza32865ze3ze5zz__r4_input_6_10_2z00(obj_t BgL_envz00_6686)
{
{ /* Ieee/input.scm 637 */
{ /* Ieee/input.scm 638 */
int BgL_posz00_6687;
{ /* Ieee/input.scm 638 */
obj_t BgL_tmpz00_12094;
{ /* Ieee/input.scm 638 */
obj_t BgL_aux4899z00_7424;
BgL_aux4899z00_7424 = 
PROCEDURE_REF(BgL_envz00_6686, 
(int)(((long)0))); 
if(
INTEGERP(BgL_aux4899z00_7424))
{ /* Ieee/input.scm 638 */
BgL_tmpz00_12094 = BgL_aux4899z00_7424
; }  else 
{ 
obj_t BgL_auxz00_12099;
BgL_auxz00_12099 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)23928)), BGl_string5074z00zz__r4_input_6_10_2z00, BGl_string5022z00zz__r4_input_6_10_2z00, BgL_aux4899z00_7424); 
FAILURE(BgL_auxz00_12099,BFALSE,BFALSE);} } 
BgL_posz00_6687 = 
CINT(BgL_tmpz00_12094); } 
{ 
obj_t BgL_iportz00_7781;obj_t BgL_posz00_7782;long BgL_linez00_7783;
{ /* Ieee/input.scm 638 */
obj_t BgL_arg2869z00_7843;
{ /* Ieee/input.scm 638 */
obj_t BgL_res4114z00_7844;
{ /* Ieee/input.scm 638 */
obj_t BgL_tmpz00_12104;
BgL_tmpz00_12104 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res4114z00_7844 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_12104); } 
BgL_arg2869z00_7843 = BgL_res4114z00_7844; } 
BgL_iportz00_7781 = BgL_arg2869z00_7843; 
BgL_posz00_7782 = 
BINT(BgL_posz00_6687); 
BgL_linez00_7783 = ((long)1); 
{ 
obj_t BgL_iportz00_7821;long BgL_lastzd2matchzd2_7822;long BgL_forwardz00_7823;long BgL_bufposz00_7824;obj_t BgL_iportz00_7809;long BgL_lastzd2matchzd2_7810;long BgL_forwardz00_7811;long BgL_bufposz00_7812;obj_t BgL_iportz00_7796;long BgL_lastzd2matchzd2_7797;long BgL_forwardz00_7798;long BgL_bufposz00_7799;
{ /* Ieee/input.scm 623 */
bool_t BgL_test5805z00_12107;
{ /* Ieee/input.scm 623 */
bool_t BgL_res4109z00_7833;
BgL_res4109z00_7833 = 
INPUT_PORT_CLOSEP(BgL_iportz00_7781); 
BgL_test5805z00_12107 = BgL_res4109z00_7833; } 
if(BgL_test5805z00_12107)
{ /* Ieee/input.scm 623 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_arg2871z00_7834;
{ /* Ieee/input.scm 623 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1046z00_7835;
{ /* Ieee/input.scm 623 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1045z00_7836;
BgL_new1045z00_7836 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Ieee/input.scm 623 */
long BgL_arg2874z00_7837;
{ /* Ieee/input.scm 623 */
long BgL_res4110z00_7838;
BgL_res4110z00_7838 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg2874z00_7837 = BgL_res4110z00_7838; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1045z00_7836), BgL_arg2874z00_7837); } 
BgL_new1046z00_7835 = BgL_new1045z00_7836; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_7835)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_7835)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_12117;
{ /* Ieee/input.scm 623 */
obj_t BgL_arg2872z00_7839;
{ /* Ieee/input.scm 623 */
obj_t BgL_arg2873z00_7840;
{ /* Ieee/input.scm 623 */
obj_t BgL_res4111z00_7841;
{ /* Ieee/input.scm 623 */
obj_t BgL_classz00_7842;
BgL_classz00_7842 = BGl_z62iozd2closedzd2errorz62zz__objectz00; 
BgL_res4111z00_7841 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_7842); } 
BgL_arg2873z00_7840 = BgL_res4111z00_7841; } 
BgL_arg2872z00_7839 = 
VECTOR_REF(BgL_arg2873z00_7840,((long)2)); } 
{ /* Ieee/input.scm 623 */
obj_t BgL_auxz00_12121;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2872z00_7839))
{ /* Ieee/input.scm 623 */
BgL_auxz00_12121 = BgL_arg2872z00_7839
; }  else 
{ 
obj_t BgL_auxz00_12124;
BgL_auxz00_12124 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)23566)), BGl_string5072z00zz__r4_input_6_10_2z00, BGl_string4923z00zz__r4_input_6_10_2z00, BgL_arg2872z00_7839); 
FAILURE(BgL_auxz00_12124,BFALSE,BFALSE);} 
BgL_auxz00_12117 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_12121); } } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1046z00_7835)))->BgL_stackz00)=((obj_t)BgL_auxz00_12117),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_7835)))->BgL_procz00)=((obj_t)BGl_string4908z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_7835)))->BgL_msgz00)=((obj_t)BGl_string4924z00zz__r4_input_6_10_2z00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1046z00_7835)))->BgL_objz00)=((obj_t)BgL_iportz00_7781),BUNSPEC); 
BgL_arg2871z00_7834 = BgL_new1046z00_7835; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2871z00_7834));}  else 
{ /* Ieee/input.scm 623 */
BgL_ignorez00_7784:
{ /* Ieee/input.scm 623 */
long BgL_res4101z00_7788;
BgL_res4101z00_7788 = 
RGC_START_MATCH(BgL_iportz00_7781); BgL_res4101z00_7788; } 
{ /* Ieee/input.scm 623 */
long BgL_matchz00_7789;
{ /* Ieee/input.scm 623 */
long BgL_arg3030z00_7790;long BgL_arg3032z00_7791;
{ /* Ieee/input.scm 623 */
long BgL_res4102z00_7792;
BgL_res4102z00_7792 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7781); 
BgL_arg3030z00_7790 = BgL_res4102z00_7792; } 
{ /* Ieee/input.scm 623 */
long BgL_res4103z00_7793;
BgL_res4103z00_7793 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7781); 
BgL_arg3032z00_7791 = BgL_res4103z00_7793; } 
BgL_iportz00_7796 = BgL_iportz00_7781; 
BgL_lastzd2matchzd2_7797 = ((long)2); 
BgL_forwardz00_7798 = BgL_arg3030z00_7790; 
BgL_bufposz00_7799 = BgL_arg3032z00_7791; 
BgL_statezd20zd21158z00_7785:
if(
(BgL_forwardz00_7798==BgL_bufposz00_7799))
{ /* Ieee/input.scm 623 */
if(
rgc_fill_buffer(BgL_iportz00_7796))
{ /* Ieee/input.scm 623 */
long BgL_arg2898z00_7800;long BgL_arg2899z00_7801;
{ /* Ieee/input.scm 623 */
long BgL_res4094z00_7802;
BgL_res4094z00_7802 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7796); 
BgL_arg2898z00_7800 = BgL_res4094z00_7802; } 
{ /* Ieee/input.scm 623 */
long BgL_res4095z00_7803;
BgL_res4095z00_7803 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7796); 
BgL_arg2899z00_7801 = BgL_res4095z00_7803; } 
{ 
long BgL_bufposz00_12148;long BgL_forwardz00_12147;
BgL_forwardz00_12147 = BgL_arg2898z00_7800; 
BgL_bufposz00_12148 = BgL_arg2899z00_7801; 
BgL_bufposz00_7799 = BgL_bufposz00_12148; 
BgL_forwardz00_7798 = BgL_forwardz00_12147; 
goto BgL_statezd20zd21158z00_7785;} }  else 
{ /* Ieee/input.scm 623 */
BgL_matchz00_7789 = BgL_lastzd2matchzd2_7797; } }  else 
{ /* Ieee/input.scm 623 */
int BgL_curz00_7804;
{ /* Ieee/input.scm 623 */
int BgL_res4096z00_7805;
BgL_res4096z00_7805 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7796, BgL_forwardz00_7798); 
BgL_curz00_7804 = BgL_res4096z00_7805; } 
{ /* Ieee/input.scm 623 */

if(
(
(long)(BgL_curz00_7804)==((long)10)))
{ /* Ieee/input.scm 623 */
long BgL_arg2901z00_7806;
BgL_arg2901z00_7806 = 
(((long)1)+BgL_forwardz00_7798); 
{ /* Ieee/input.scm 623 */
long BgL_newzd2matchzd2_7807;
{ /* Ieee/input.scm 623 */
long BgL_res4099z00_7808;
BgL_res4099z00_7808 = 
RGC_STOP_MATCH(BgL_iportz00_7796, BgL_arg2901z00_7806); BgL_res4099z00_7808; } 
BgL_newzd2matchzd2_7807 = ((long)0); 
BgL_matchz00_7789 = BgL_newzd2matchzd2_7807; } }  else 
{ /* Ieee/input.scm 623 */
BgL_iportz00_7809 = BgL_iportz00_7796; 
BgL_lastzd2matchzd2_7810 = BgL_lastzd2matchzd2_7797; 
BgL_forwardz00_7811 = 
(((long)1)+BgL_forwardz00_7798); 
BgL_bufposz00_7812 = BgL_bufposz00_7799; 
BgL_statezd21zd21159z00_7786:
{ /* Ieee/input.scm 623 */
long BgL_newzd2matchzd2_7813;
{ /* Ieee/input.scm 623 */
long BgL_res4084z00_7814;
BgL_res4084z00_7814 = 
RGC_STOP_MATCH(BgL_iportz00_7809, BgL_forwardz00_7811); BgL_res4084z00_7814; } 
BgL_newzd2matchzd2_7813 = ((long)1); 
if(
(BgL_forwardz00_7811==BgL_bufposz00_7812))
{ /* Ieee/input.scm 623 */
if(
rgc_fill_buffer(BgL_iportz00_7809))
{ /* Ieee/input.scm 623 */
long BgL_arg2888z00_7815;long BgL_arg2889z00_7816;
{ /* Ieee/input.scm 623 */
long BgL_res4087z00_7817;
BgL_res4087z00_7817 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7809); 
BgL_arg2888z00_7815 = BgL_res4087z00_7817; } 
{ /* Ieee/input.scm 623 */
long BgL_res4088z00_7818;
BgL_res4088z00_7818 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7809); 
BgL_arg2889z00_7816 = BgL_res4088z00_7818; } 
{ 
long BgL_bufposz00_12163;long BgL_forwardz00_12162;
BgL_forwardz00_12162 = BgL_arg2888z00_7815; 
BgL_bufposz00_12163 = BgL_arg2889z00_7816; 
BgL_bufposz00_7812 = BgL_bufposz00_12163; 
BgL_forwardz00_7811 = BgL_forwardz00_12162; 
goto BgL_statezd21zd21159z00_7786;} }  else 
{ /* Ieee/input.scm 623 */
BgL_matchz00_7789 = BgL_newzd2matchzd2_7813; } }  else 
{ /* Ieee/input.scm 623 */
int BgL_curz00_7819;
{ /* Ieee/input.scm 623 */
int BgL_res4089z00_7820;
BgL_res4089z00_7820 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7809, BgL_forwardz00_7811); 
BgL_curz00_7819 = BgL_res4089z00_7820; } 
{ /* Ieee/input.scm 623 */

if(
(
(long)(BgL_curz00_7819)==((long)10)))
{ /* Ieee/input.scm 623 */
BgL_matchz00_7789 = BgL_newzd2matchzd2_7813; }  else 
{ /* Ieee/input.scm 623 */
BgL_iportz00_7821 = BgL_iportz00_7809; 
BgL_lastzd2matchzd2_7822 = BgL_newzd2matchzd2_7813; 
BgL_forwardz00_7823 = 
(((long)1)+BgL_forwardz00_7811); 
BgL_bufposz00_7824 = BgL_bufposz00_7812; 
BgL_statezd24zd21162z00_7787:
{ /* Ieee/input.scm 623 */
long BgL_newzd2matchzd2_7825;
{ /* Ieee/input.scm 623 */
long BgL_res4075z00_7826;
BgL_res4075z00_7826 = 
RGC_STOP_MATCH(BgL_iportz00_7821, BgL_forwardz00_7823); BgL_res4075z00_7826; } 
BgL_newzd2matchzd2_7825 = ((long)1); 
if(
(BgL_forwardz00_7823==BgL_bufposz00_7824))
{ /* Ieee/input.scm 623 */
if(
rgc_fill_buffer(BgL_iportz00_7821))
{ /* Ieee/input.scm 623 */
long BgL_arg2880z00_7827;long BgL_arg2881z00_7828;
{ /* Ieee/input.scm 623 */
long BgL_res4078z00_7829;
BgL_res4078z00_7829 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7821); 
BgL_arg2880z00_7827 = BgL_res4078z00_7829; } 
{ /* Ieee/input.scm 623 */
long BgL_res4079z00_7830;
BgL_res4079z00_7830 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7821); 
BgL_arg2881z00_7828 = BgL_res4079z00_7830; } 
{ 
long BgL_bufposz00_12176;long BgL_forwardz00_12175;
BgL_forwardz00_12175 = BgL_arg2880z00_7827; 
BgL_bufposz00_12176 = BgL_arg2881z00_7828; 
BgL_bufposz00_7824 = BgL_bufposz00_12176; 
BgL_forwardz00_7823 = BgL_forwardz00_12175; 
goto BgL_statezd24zd21162z00_7787;} }  else 
{ /* Ieee/input.scm 623 */
BgL_matchz00_7789 = BgL_newzd2matchzd2_7825; } }  else 
{ /* Ieee/input.scm 623 */
int BgL_curz00_7831;
{ /* Ieee/input.scm 623 */
int BgL_res4080z00_7832;
BgL_res4080z00_7832 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7821, BgL_forwardz00_7823); 
BgL_curz00_7831 = BgL_res4080z00_7832; } 
{ /* Ieee/input.scm 623 */

if(
(
(long)(BgL_curz00_7831)==((long)10)))
{ /* Ieee/input.scm 623 */
BgL_matchz00_7789 = BgL_newzd2matchzd2_7825; }  else 
{ 
long BgL_forwardz00_12182;long BgL_lastzd2matchzd2_12181;
BgL_lastzd2matchzd2_12181 = BgL_newzd2matchzd2_7825; 
BgL_forwardz00_12182 = 
(((long)1)+BgL_forwardz00_7823); 
BgL_forwardz00_7823 = BgL_forwardz00_12182; 
BgL_lastzd2matchzd2_7822 = BgL_lastzd2matchzd2_12181; 
goto BgL_statezd24zd21162z00_7787;} } } } } } } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_7781); 
switch( BgL_matchz00_7789) { case ((long)2) : 

return BFALSE;break;case ((long)1) : 

goto BgL_ignorez00_7784;break;case ((long)0) : 

{ /* Ieee/input.scm 625 */
bool_t BgL_test5816z00_12187;
{ /* Ieee/input.scm 625 */
long BgL_arg3028z00_7794;
{ /* Ieee/input.scm 625 */
long BgL_res4105z00_7795;
BgL_res4105z00_7795 = 
INPUT_PORT_FILEPOS(BgL_iportz00_7781); 
BgL_arg3028z00_7794 = BgL_res4105z00_7795; } 
BgL_test5816z00_12187 = 
(BgL_arg3028z00_7794>=
(long)CINT(BgL_posz00_7782)); } 
if(BgL_test5816z00_12187)
{ /* Ieee/input.scm 625 */
return 
BINT(BgL_linez00_7783);}  else 
{ /* Ieee/input.scm 625 */
BgL_linez00_7783 = 
(BgL_linez00_7783+((long)1)); 
goto BgL_ignorez00_7784;} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string4908z00zz__r4_input_6_10_2z00, BGl_string4909z00zz__r4_input_6_10_2z00, 
BINT(BgL_matchz00_7789));} } } } } } } } } 

}



/* _password */
obj_t BGl__passwordz00zz__r4_input_6_10_2z00(obj_t BgL_env1326z00_97, obj_t BgL_opt1325z00_96)
{
{ /* Ieee/input.scm 645 */
{ /* Ieee/input.scm 645 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1325z00_96)) { case ((long)0) : 

{ /* Ieee/input.scm 645 */

return 
bgl_password(
BSTRING_TO_STRING(BGl_string4998z00zz__r4_input_6_10_2z00));} break;case ((long)1) : 

{ /* Ieee/input.scm 645 */
obj_t BgL_promptz00_7846;
BgL_promptz00_7846 = 
VECTOR_REF(BgL_opt1325z00_96,((long)0)); 
{ /* Ieee/input.scm 645 */

{ /* Ieee/input.scm 645 */
obj_t BgL_res4116z00_7847;
{ /* Ieee/input.scm 645 */
obj_t BgL_promptz00_7848;
if(
STRINGP(BgL_promptz00_7846))
{ /* Ieee/input.scm 645 */
BgL_promptz00_7848 = BgL_promptz00_7846; }  else 
{ 
obj_t BgL_auxz00_12202;
BgL_auxz00_12202 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string4905z00zz__r4_input_6_10_2z00, 
BINT(((long)24216)), BGl_string5077z00zz__r4_input_6_10_2z00, BGl_string4913z00zz__r4_input_6_10_2z00, BgL_promptz00_7846); 
FAILURE(BgL_auxz00_12202,BFALSE,BFALSE);} 
BgL_res4116z00_7847 = 
bgl_password(
BSTRING_TO_STRING(BgL_promptz00_7848)); } 
return BgL_res4116z00_7847;} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol5075z00zz__r4_input_6_10_2z00, BGl_string4977z00zz__r4_input_6_10_2z00, 
BINT(
VECTOR_LENGTH(BgL_opt1325z00_96)));} } } } 

}



/* password */
BGL_EXPORTED_DEF obj_t BGl_passwordz00zz__r4_input_6_10_2z00(obj_t BgL_promptz00_95)
{
{ /* Ieee/input.scm 645 */
return 
bgl_password(
BSTRING_TO_STRING(BgL_promptz00_95));} 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__r4_input_6_10_2z00()
{
{ /* Ieee/input.scm 14 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__r4_input_6_10_2z00()
{
{ /* Ieee/input.scm 14 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__r4_input_6_10_2z00()
{
{ /* Ieee/input.scm 14 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_input_6_10_2z00()
{
{ /* Ieee/input.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string5078z00zz__r4_input_6_10_2z00)); 
BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long)331540733), 
BSTRING_TO_STRING(BGl_string5078z00zz__r4_input_6_10_2z00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string5078z00zz__r4_input_6_10_2z00)); 
return 
BGl_modulezd2initializa7ationz75zz__gunza7ipza7(((long)224363636), 
BSTRING_TO_STRING(BGl_string5078z00zz__r4_input_6_10_2z00));} 

}

#ifdef __cplusplus
}
#endif
