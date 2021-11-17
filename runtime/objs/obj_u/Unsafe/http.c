/*===========================================================================*/
/*   (Unsafe/http.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Thu 19 Nov 2020 07:12:46 AM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/hgy/my-github/bigloo-4.4a/bin/bigloo -srfi enable-resolv -srfi enable-unistring -srfi enable-pcre -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/hgy/my-github/bigloo-4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/hgy/my-github/bigloo-4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/http.scm -indent -o objs/obj_u/Unsafe/http.c) */
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

typedef struct BgL_z62iozd2parsezd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2parsezd2errorz62_bglt;

typedef struct BgL_z62httpzd2errorzb0_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62httpzd2errorzb0_bglt;

typedef struct BgL_z62httpzd2redirectionzd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62httpzd2redirectionzd2errorz62_bglt;

typedef struct BgL_z62httpzd2statuszd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
   int BgL_statusz00;
} *BgL_z62httpzd2statuszd2errorz62_bglt;

typedef struct BgL_z62httpzd2redirectionzb0_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_portz00;
   obj_t BgL_urlz00;
} *BgL_z62httpzd2redirectionzb0_bglt;


static obj_t BGl_z62httpzd2responsezd2bodyzd2ze3portz53zz__httpz00(obj_t, obj_t, obj_t);
extern obj_t rgc_buffer_downcase_subsymbol(obj_t, long, long);
static obj_t BGl_keyword7301z00zz__httpz00 = BUNSPEC;
static obj_t BGl_keyword7303z00zz__httpz00 = BUNSPEC;
static obj_t BGl_keyword7305z00zz__httpz00 = BUNSPEC;
static obj_t BGl_keyword7307z00zz__httpz00 = BUNSPEC;
static obj_t BGl_keyword7309z00zz__httpz00 = BUNSPEC;
static obj_t BGl_z62httpzd2readzd2linez62zz__httpz00(obj_t, obj_t);
extern obj_t BGl_raisez00zz__errorz00(obj_t);
static obj_t BGl_keyword7311z00zz__httpz00 = BUNSPEC;
static obj_t BGl_keyword7313z00zz__httpz00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza34900ze3ze5zz__httpz00(obj_t, obj_t);
static obj_t BGl__httpz00zz__httpz00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__httpz00 = BUNSPEC;
extern obj_t BGl_base64zd2encodezd2zz__base64z00(obj_t, obj_t);
extern obj_t bgl_display_obj(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62httpzd2chunkszd2ze3procedurez81zz__httpz00(obj_t, obj_t);
static obj_t BGl_crlfzd2grammarze70z35zz__httpz00(obj_t);
BGL_EXPORTED_DEF obj_t BGl_z62httpzd2redirectionzb0zz__httpz00 = BUNSPEC;
static obj_t BGl_toplevelzd2initzd2zz__httpz00();
static obj_t BGl_z62httpzd2chunkszd2ze3portz81zz__httpz00(obj_t, obj_t);
static obj_t BGl_keyword7264z00zz__httpz00 = BUNSPEC;
extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
extern obj_t rgc_buffer_downcase_keyword(obj_t);
extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_keyword7275z00zz__httpz00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza34823ze3ze5zz__httpz00(obj_t);
static obj_t BGl_keyword7277z00zz__httpz00 = BUNSPEC;
static obj_t BGl_keyword7279z00zz__httpz00 = BUNSPEC;
static obj_t BGl_genericzd2initzd2zz__httpz00();
extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
extern obj_t BGl_z62iozd2parsezd2errorz62zz__objectz00;
static obj_t BGl_keyword7281z00zz__httpz00 = BUNSPEC;
extern obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62lambda4904z62zz__httpz00(obj_t, obj_t);
static obj_t BGl_objectzd2initzd2zz__httpz00();
static obj_t BGl_keyword7283z00zz__httpz00 = BUNSPEC;
static obj_t BGl_z62lambda4905z62zz__httpz00(obj_t, obj_t, obj_t);
static obj_t BGl_keyword7285z00zz__httpz00 = BUNSPEC;
static obj_t BGl_keyword7368z00zz__httpz00 = BUNSPEC;
static obj_t BGl_keyword7287z00zz__httpz00 = BUNSPEC;
static obj_t BGl_z62lambda4909z62zz__httpz00(obj_t, obj_t);
static obj_t BGl_keyword7289z00zz__httpz00 = BUNSPEC;
extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_httpzd2readzd2linez00zz__httpz00(obj_t);
static obj_t BGl_symbol7402z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7405z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7407z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7327z00zz__httpz00 = BUNSPEC;
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern obj_t BGl_z62exceptionz62zz__objectz00;
static obj_t BGl_z62lambda4910z62zz__httpz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_httpzd2sendzd2chunksz00zz__httpz00(obj_t, obj_t, bool_t);
static obj_t BGl_keyword7370z00zz__httpz00 = BUNSPEC;
static obj_t BGl_keyword7372z00zz__httpz00 = BUNSPEC;
static obj_t BGl_keyword7291z00zz__httpz00 = BUNSPEC;
static obj_t BGl_keyword7374z00zz__httpz00 = BUNSPEC;
static obj_t BGl_keyword7293z00zz__httpz00 = BUNSPEC;
static obj_t BGl_barrierzd2portzd2zz__httpz00(obj_t, obj_t);
extern obj_t bgl_reverse_bang(obj_t);
static obj_t BGl_keyword7295z00zz__httpz00 = BUNSPEC;
static obj_t BGl_keyword7297z00zz__httpz00 = BUNSPEC;
static obj_t BGl_keyword7299z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7410z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7250z00zz__httpz00 = BUNSPEC;
extern obj_t string_append_3(obj_t, obj_t, obj_t);
static obj_t BGl_symbol7334z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7417z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7336z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7419z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7338z00zz__httpz00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza34842ze3ze5zz__httpz00(obj_t, obj_t);
static obj_t BGl_keyword7389z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7424z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7344z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7428z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7269z00zz__httpz00 = BUNSPEC;
extern obj_t bstring_to_symbol(obj_t);
BGL_EXPORTED_DECL obj_t BGl_httpzd2responsezd2bodyzd2ze3portz31zz__httpz00(obj_t, obj_t);
static obj_t BGl_thezd2substringze70z35zz__httpz00(obj_t, int, int);
static obj_t BGl_symbol7430z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7272z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7435z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7439z00zz__httpz00 = BUNSPEC;
static BgL_z62httpzd2errorzb0_bglt BGl_z62lambda4861z62zz__httpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static BgL_z62httpzd2errorzb0_bglt BGl_z62lambda4863z62zz__httpz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza34828ze3ze5zz__httpz00(obj_t);
static obj_t BGl_methodzd2initzd2zz__httpz00();
static obj_t BGl_symbol7440z00zz__httpz00 = BUNSPEC;
extern obj_t BGl_readzd2charzd2zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_symbol7443z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7363z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7445z00zz__httpz00 = BUNSPEC;
static obj_t BGl_statuszd2linezd2grammarz00zz__httpz00 = BUNSPEC;
static BgL_z62httpzd2redirectionzd2errorz62_bglt BGl_z62lambda4871z62zz__httpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static BgL_z62httpzd2redirectionzd2errorz62_bglt BGl_z62lambda4873z62zz__httpz00(obj_t);
extern obj_t BGl_xzd2wwwzd2formzd2urlencodezd2zz__urlz00(obj_t);
static obj_t BGl_symbol7450z00zz__httpz00 = BUNSPEC;
static BgL_z62httpzd2statuszd2errorz62_bglt BGl_z62lambda4881z62zz__httpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static BgL_z62httpzd2statuszd2errorz62_bglt BGl_z62lambda4883z62zz__httpz00(obj_t);
static obj_t BGl_z62lambda4889z62zz__httpz00(obj_t, obj_t);
extern obj_t make_string(long, unsigned char);
static obj_t BGl_symbol7384z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7387z00zz__httpz00 = BUNSPEC;
extern obj_t bgl_close_input_port(obj_t);
static obj_t BGl_z62lambda4890z62zz__httpz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62httpzd2sendzd2chunksz62zz__httpz00(obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
static BgL_z62httpzd2redirectionzb0_bglt BGl_z62lambda4896z62zz__httpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza34669ze3ze5zz__httpz00(obj_t, obj_t);
static BgL_z62httpzd2redirectionzb0_bglt BGl_z62lambda4898z62zz__httpz00(obj_t);
extern obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_symbol7391z00zz__httpz00 = BUNSPEC;
static obj_t BGl_symbol7399z00zz__httpz00 = BUNSPEC;
BGL_EXPORTED_DEF obj_t BGl_z62httpzd2errorzb0zz__httpz00 = BUNSPEC;
extern obj_t rgc_buffer_substring(obj_t, long, long);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62zc3z04anonymousza34865ze3ze5zz__httpz00(obj_t, obj_t);
extern long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long, long);
static obj_t BGl_z62zc3z04anonymousza32325ze3ze5zz__httpz00(obj_t, obj_t);
extern obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
static obj_t BGl_makezd2httpzd2postzd2bodyzd2zz__httpz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza34875ze3ze5zz__httpz00(obj_t, obj_t);
static obj_t BGl_z62httpzd2parsezd2responsez62zz__httpz00(obj_t, obj_t, obj_t, obj_t);
extern obj_t string_for_read(obj_t);
BGL_EXPORTED_DECL obj_t BGl_httpzd2parsezd2headerz00zz__httpz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__httpz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__socketz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__base64z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__urlz00(long, char *);
extern obj_t BGl_makezd2clientzd2socketz00zz__socketz00(obj_t, int, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_z62errorz62zz__objectz00;
extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_z62zc3z04anonymousza34885ze3ze5zz__httpz00(obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_z62httpzd2redirectionzd2errorz62zz__httpz00 = BUNSPEC;
extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL obj_t BGl_httpzd2parsezd2statuszd2linezd2zz__httpz00(obj_t);
static long BGl_za2bufferzd2lengthza2zd2zz__httpz00;
BGL_EXPORTED_DEF obj_t BGl_z62httpzd2statuszd2errorz62zz__httpz00 = BUNSPEC;
static obj_t BGl_cnstzd2initzd2zz__httpz00();
extern obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl_makezd2httpzd2socketz00zz__httpz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62httpzd2readzd2crlfz62zz__httpz00(obj_t, obj_t);
extern obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__httpz00();
static obj_t BGl_importedzd2moduleszd2initz00zz__httpz00();
static obj_t BGl_httpzd2skipzd2blankz00zz__httpz00(obj_t);
static obj_t BGl_valuezd2grammarze70z35zz__httpz00(obj_t);
static obj_t BGl_httpzd2parsezd2errorzd2msgzd2zz__httpz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_httpzd2chunkszd2ze3portze3zz__httpz00(obj_t);
extern long rgc_buffer_fixnum(obj_t);
BGL_EXPORTED_DECL obj_t BGl_httpzd2chunkszd2ze3procedureze3zz__httpz00(obj_t);
static obj_t BGl_z62parsezd2bodyzb0zz__httpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
static obj_t BGl_za2chunkzd2siza7ezd2grammarza2za7zz__httpz00 = BUNSPEC;
static obj_t BGl_generatezd2httpzd2boundaryz00zz__httpz00();
static obj_t BGl_authzd2grammarze70z35zz__httpz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31807ze3ze5zz__httpz00(obj_t, obj_t, obj_t);
extern obj_t c_substring(obj_t, long, long);
extern obj_t BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_httpzd2parsezd2responsez00zz__httpz00(obj_t, obj_t, obj_t);
extern obj_t BGl_readzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
extern obj_t BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t);
static obj_t BGl_thezd2failureze70z35zz__httpz00(obj_t);
extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_httpzd2readzd2fixnumz00zz__httpz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_httpzd2readzd2crlfz00zz__httpz00(obj_t);
static obj_t BGl_loopze70ze7zz__httpz00(obj_t, obj_t);
static obj_t BGl_list7262z00zz__httpz00 = BUNSPEC;
static obj_t BGl_list7263z00zz__httpz00 = BUNSPEC;
extern obj_t BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_list7348z00zz__httpz00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza31583ze3ze5zz__httpz00(obj_t, obj_t);
extern bool_t rgc_fill_buffer(obj_t);
extern obj_t bstring_to_keyword(obj_t);
static obj_t BGl_list7274z00zz__httpz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_httpz00zz__httpz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62httpzd2parsezd2statuszd2linezb0zz__httpz00(obj_t, obj_t);
extern long BGl_sendzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62httpzd2parsezd2headerz62zz__httpz00(obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_httpzd2responsezd2bodyzd2ze3portzd2envze3zz__httpz00, BgL_bgl_za762httpza7d2respon7452z00, BGl_z62httpzd2responsezd2bodyzd2ze3portz53zz__httpz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_httpzd2sendzd2chunkszd2envzd2zz__httpz00, BgL_bgl_za762httpza7d2sendza7d7453za7, BGl_z62httpzd2sendzd2chunksz62zz__httpz00, 0L, BUNSPEC, 3 );
DEFINE_ELONG( BGl_elong7382z00zz__httpz00, BgL_bgl_elong7382za700za7za7__7454za7, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_httpzd2parsezd2responsezd2envzd2zz__httpz00, BgL_bgl_za762httpza7d2parseza77455za7, BGl_z62httpzd2parsezd2responsez62zz__httpz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_httpzd2parsezd2headerzd2envzd2zz__httpz00, BgL_bgl_za762httpza7d2parseza77456za7, BGl_z62httpzd2parsezd2headerz62zz__httpz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_httpzd2chunkszd2ze3procedurezd2envz31zz__httpz00, BgL_bgl_za762httpza7d2chunks7457z00, BGl_z62httpzd2chunkszd2ze3procedurez81zz__httpz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_httpzd2parsezd2statuszd2linezd2envz00zz__httpz00, BgL_bgl_za762httpza7d2parseza77458za7, BGl_z62httpzd2parsezd2statuszd2linezb0zz__httpz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_httpzd2readzd2crlfzd2envzd2zz__httpz00, BgL_bgl_za762httpza7d2readza7d7459za7, BGl_z62httpzd2readzd2crlfz62zz__httpz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string7300z00zz__httpz00, BgL_bgl_string7300za700za7za7_7460za7, "password", 8 );
DEFINE_STRING( BGl_string7302z00zz__httpz00, BgL_bgl_string7302za700za7za7_7461za7, "path", 4 );
DEFINE_STRING( BGl_string7304z00zz__httpz00, BgL_bgl_string7304za700za7za7_7462za7, "port", 4 );
DEFINE_STRING( BGl_string7306z00zz__httpz00, BgL_bgl_string7306za700za7za7_7463za7, "protocol", 8 );
DEFINE_STRING( BGl_string7308z00zz__httpz00, BgL_bgl_string7308za700za7za7_7464za7, "proxy", 5 );
DEFINE_STRING( BGl_string7310z00zz__httpz00, BgL_bgl_string7310za700za7za7_7465za7, "socket", 6 );
DEFINE_STRING( BGl_string7312z00zz__httpz00, BgL_bgl_string7312za700za7za7_7466za7, "timeout", 7 );
DEFINE_STRING( BGl_string7314z00zz__httpz00, BgL_bgl_string7314za700za7za7_7467za7, "username", 8 );
DEFINE_STRING( BGl_string7315z00zz__httpz00, BgL_bgl_string7315za700za7za7_7468za7, "Illegal keyword argument", 24 );
DEFINE_STRING( BGl_string7316z00zz__httpz00, BgL_bgl_string7316za700za7za7_7469za7, "wrong number of arguments: [0..20] expected, provided", 53 );
DEFINE_STRING( BGl_string7317z00zz__httpz00, BgL_bgl_string7317za700za7za7_7470za7, "/home/hgy/my-github/bigloo-4.4a/runtime/Unsafe/http.scm", 55 );
DEFINE_STRING( BGl_string7318z00zz__httpz00, BgL_bgl_string7318za700za7za7_7471za7, "_http", 5 );
DEFINE_STRING( BGl_string7319z00zz__httpz00, BgL_bgl_string7319za700za7za7_7472za7, "bint", 4 );
DEFINE_STRING( BGl_string7400z00zz__httpz00, BgL_bgl_string7400za700za7za7_7473za7, "http-read-crlf", 14 );
DEFINE_STRING( BGl_string7401z00zz__httpz00, BgL_bgl_string7401za700za7za7_7474za7, "&http-read-crlf", 15 );
DEFINE_STRING( BGl_string7320z00zz__httpz00, BgL_bgl_string7320za700za7za7_7475za7, "Missing either \"host\" or \"port\" argument", 40 );
DEFINE_STRING( BGl_string7321z00zz__httpz00, BgL_bgl_string7321za700za7za7_7476za7, "Missing \"out\" argument", 22 );
DEFINE_STRING( BGl_string7403z00zz__httpz00, BgL_bgl_string7403za700za7za7_7477za7, "size", 4 );
DEFINE_STRING( BGl_string7322z00zz__httpz00, BgL_bgl_string7322za700za7za7_7478za7, "Missing either \"in\" or \"socket\" argument", 40 );
DEFINE_STRING( BGl_string7404z00zz__httpz00, BgL_bgl_string7404za700za7za7_7479za7, "&http-chunks->procedure", 23 );
DEFINE_STRING( BGl_string7323z00zz__httpz00, BgL_bgl_string7323za700za7za7_7480za7, " http://", 8 );
DEFINE_STRING( BGl_string7324z00zz__httpz00, BgL_bgl_string7324za700za7za7_7481za7, ":", 1 );
DEFINE_STRING( BGl_string7406z00zz__httpz00, BgL_bgl_string7406za700za7za7_7482za7, "eof", 3 );
DEFINE_STRING( BGl_string7325z00zz__httpz00, BgL_bgl_string7325za700za7za7_7483za7, " ", 1 );
DEFINE_STRING( BGl_string7326z00zz__httpz00, BgL_bgl_string7326za700za7za7_7484za7, "\r\n", 2 );
DEFINE_STRING( BGl_string7408z00zz__httpz00, BgL_bgl_string7408za700za7za7_7485za7, "trailer", 7 );
DEFINE_STRING( BGl_string7409z00zz__httpz00, BgL_bgl_string7409za700za7za7_7486za7, "\n", 1 );
DEFINE_STRING( BGl_string7328z00zz__httpz00, BgL_bgl_string7328za700za7za7_7487za7, "https", 5 );
DEFINE_STRING( BGl_string7329z00zz__httpz00, BgL_bgl_string7329za700za7za7_7488za7, "Host: ", 6 );
DEFINE_STRING( BGl_string7411z00zz__httpz00, BgL_bgl_string7411za700za7za7_7489za7, "chunk", 5 );
DEFINE_STRING( BGl_string7330z00zz__httpz00, BgL_bgl_string7330za700za7za7_7490za7, ": ", 2 );
DEFINE_STRING( BGl_string7412z00zz__httpz00, BgL_bgl_string7412za700za7za7_7491za7, "&http-chunks->port", 18 );
DEFINE_STRING( BGl_string7331z00zz__httpz00, BgL_bgl_string7331za700za7za7_7492za7, "Authorization: Basic ", 21 );
DEFINE_STRING( BGl_string7413z00zz__httpz00, BgL_bgl_string7413za700za7za7_7493za7, "&http-send-chunks", 17 );
DEFINE_STRING( BGl_string7332z00zz__httpz00, BgL_bgl_string7332za700za7za7_7494za7, "Authorization: ", 15 );
DEFINE_STRING( BGl_string7251z00zz__httpz00, BgL_bgl_string7251za700za7za7_7495za7, "chunks", 6 );
DEFINE_STRING( BGl_string7333z00zz__httpz00, BgL_bgl_string7333za700za7za7_7496za7, "Connection: ", 12 );
DEFINE_STRING( BGl_string7252z00zz__httpz00, BgL_bgl_string7252za700za7za7_7497za7, "Illegal chunk size", 18 );
DEFINE_STRING( BGl_string7253z00zz__httpz00, BgL_bgl_string7253za700za7za7_7498za7, "#<eof-object>", 13 );
DEFINE_STRING( BGl_string7335z00zz__httpz00, BgL_bgl_string7335za700za7za7_7499za7, "post", 4 );
DEFINE_STRING( BGl_string7254z00zz__httpz00, BgL_bgl_string7254za700za7za7_7500za7, "regular-grammar", 15 );
DEFINE_STRING( BGl_string7255z00zz__httpz00, BgL_bgl_string7255za700za7za7_7501za7, "Illegal match", 13 );
DEFINE_STRING( BGl_string7418z00zz__httpz00, BgL_bgl_string7418za700za7za7_7502za7, "&http-error", 11 );
DEFINE_STRING( BGl_string7337z00zz__httpz00, BgL_bgl_string7337za700za7za7_7503za7, "POST", 4 );
DEFINE_STRING( BGl_string7256z00zz__httpz00, BgL_bgl_string7256za700za7za7_7504za7, "Illegal character", 17 );
DEFINE_STRING( BGl_string7257z00zz__httpz00, BgL_bgl_string7257za700za7za7_7505za7, "Illegal range `~a'", 18 );
DEFINE_STRING( BGl_string7339z00zz__httpz00, BgL_bgl_string7339za700za7za7_7506za7, "multipart/form-data", 19 );
DEFINE_STRING( BGl_string7258z00zz__httpz00, BgL_bgl_string7258za700za7za7_7507za7, "the-substring", 13 );
DEFINE_STRING( BGl_string7259z00zz__httpz00, BgL_bgl_string7259za700za7za7_7508za7, "http-parse-status-line", 22 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7414z00zz__httpz00, BgL_bgl_za762za7c3za704anonymo7509za7, BGl_z62zc3z04anonymousza34865ze3ze5zz__httpz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7415z00zz__httpz00, BgL_bgl_za762lambda4863za7627510z00, BGl_z62lambda4863z62zz__httpz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string7420z00zz__httpz00, BgL_bgl_string7420za700za7za7_7511za7, "__http", 6 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7416z00zz__httpz00, BgL_bgl_za762lambda4861za7627512z00, BGl_z62lambda4861z62zz__httpz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string7340z00zz__httpz00, BgL_bgl_string7340za700za7za7_7513za7, "Content-Length: ", 16 );
DEFINE_STRING( BGl_string7341z00zz__httpz00, BgL_bgl_string7341za700za7za7_7514za7, "Content-Type: multipart/form-data; boundary=", 44 );
DEFINE_STRING( BGl_string7260z00zz__httpz00, BgL_bgl_string7260za700za7za7_7515za7, "Illegal status line, premature end of input", 43 );
DEFINE_STRING( BGl_string7342z00zz__httpz00, BgL_bgl_string7342za700za7za7_7516za7, "application/x-www-form-urlencoded", 33 );
DEFINE_STRING( BGl_string7261z00zz__httpz00, BgL_bgl_string7261za700za7za7_7517za7, "Illegal status line", 19 );
DEFINE_STRING( BGl_string7343z00zz__httpz00, BgL_bgl_string7343za700za7za7_7518za7, "Content-Type: ", 14 );
DEFINE_STRING( BGl_string7425z00zz__httpz00, BgL_bgl_string7425za700za7za7_7519za7, "&http-redirection-error", 23 );
DEFINE_STRING( BGl_string7345z00zz__httpz00, BgL_bgl_string7345za700za7za7_7520za7, "inet", 4 );
DEFINE_STRING( BGl_string7346z00zz__httpz00, BgL_bgl_string7346za700za7za7_7521za7, "integer", 7 );
DEFINE_STRING( BGl_string7265z00zz__httpz00, BgL_bgl_string7265za700za7za7_7522za7, "user-agent", 10 );
DEFINE_STRING( BGl_string7347z00zz__httpz00, BgL_bgl_string7347za700za7za7_7523za7, "string", 6 );
DEFINE_STRING( BGl_string7266z00zz__httpz00, BgL_bgl_string7266za700za7za7_7524za7, "Mozilla/5.0", 11 );
DEFINE_STRING( BGl_string7429z00zz__httpz00, BgL_bgl_string7429za700za7za7_7525za7, "status", 6 );
DEFINE_STRING( BGl_string7267z00zz__httpz00, BgL_bgl_string7267za700za7za7_7526za7, "localhost", 9 );
DEFINE_STRING( BGl_string7349z00zz__httpz00, BgL_bgl_string7349za700za7za7_7527za7, "--", 2 );
DEFINE_STRING( BGl_string7268z00zz__httpz00, BgL_bgl_string7268za700za7za7_7528za7, "HTTP/1.1", 8 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7421z00zz__httpz00, BgL_bgl_za762za7c3za704anonymo7529za7, BGl_z62zc3z04anonymousza34875ze3ze5zz__httpz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7422z00zz__httpz00, BgL_bgl_za762lambda4873za7627530z00, BGl_z62lambda4873z62zz__httpz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7423z00zz__httpz00, BgL_bgl_za762lambda4871za7627531z00, BGl_z62lambda4871z62zz__httpz00, 0L, BUNSPEC, 6 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7426z00zz__httpz00, BgL_bgl_za762lambda4890za7627532z00, BGl_z62lambda4890z62zz__httpz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string7431z00zz__httpz00, BgL_bgl_string7431za700za7za7_7533za7, "int", 3 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7427z00zz__httpz00, BgL_bgl_za762lambda4889za7627534z00, BGl_z62lambda4889z62zz__httpz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string7350z00zz__httpz00, BgL_bgl_string7350za700za7za7_7535za7, "\r\n\r\n", 4 );
DEFINE_STRING( BGl_string7351z00zz__httpz00, BgL_bgl_string7351za700za7za7_7536za7, "\";", 2 );
DEFINE_STRING( BGl_string7270z00zz__httpz00, BgL_bgl_string7270za700za7za7_7537za7, "get", 3 );
DEFINE_STRING( BGl_string7352z00zz__httpz00, BgL_bgl_string7352za700za7za7_7538za7, "Content-Disposition: form-data; name=\"", 38 );
DEFINE_STRING( BGl_string7271z00zz__httpz00, BgL_bgl_string7271za700za7za7_7539za7, "/", 1 );
DEFINE_STRING( BGl_string7353z00zz__httpz00, BgL_bgl_string7353za700za7za7_7540za7, "\"\r\n", 3 );
DEFINE_STRING( BGl_string7354z00zz__httpz00, BgL_bgl_string7354za700za7za7_7541za7, "0123456789abcdef", 16 );
DEFINE_STRING( BGl_string7273z00zz__httpz00, BgL_bgl_string7273za700za7za7_7542za7, "http", 4 );
DEFINE_STRING( BGl_string7436z00zz__httpz00, BgL_bgl_string7436za700za7za7_7543za7, "&http-status-error", 18 );
DEFINE_STRING( BGl_string7355z00zz__httpz00, BgL_bgl_string7355za700za7za7_7544za7, "", 0 );
DEFINE_STRING( BGl_string7356z00zz__httpz00, BgL_bgl_string7356za700za7za7_7545za7, "}", 1 );
DEFINE_STRING( BGl_string7357z00zz__httpz00, BgL_bgl_string7357za700za7za7_7546za7, "{", 1 );
DEFINE_STRING( BGl_string7276z00zz__httpz00, BgL_bgl_string7276za700za7za7_7547za7, "args", 4 );
DEFINE_STRING( BGl_string7358z00zz__httpz00, BgL_bgl_string7358za700za7za7_7548za7, "&http-parse-status-line", 23 );
DEFINE_STRING( BGl_string7359z00zz__httpz00, BgL_bgl_string7359za700za7za7_7549za7, "input-port", 10 );
DEFINE_STRING( BGl_string7278z00zz__httpz00, BgL_bgl_string7278za700za7za7_7550za7, "authorization", 13 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7432z00zz__httpz00, BgL_bgl_za762za7c3za704anonymo7551za7, BGl_z62zc3z04anonymousza34885ze3ze5zz__httpz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7433z00zz__httpz00, BgL_bgl_za762lambda4883za7627552z00, BGl_z62lambda4883z62zz__httpz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7434z00zz__httpz00, BgL_bgl_za762lambda4881za7627553z00, BGl_z62lambda4881z62zz__httpz00, 0L, BUNSPEC, 7 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7437z00zz__httpz00, BgL_bgl_za762lambda4905za7627554z00, BGl_z62lambda4905z62zz__httpz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string7360z00zz__httpz00, BgL_bgl_string7360za700za7za7_7555za7, "&http-read-line", 15 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7438z00zz__httpz00, BgL_bgl_za762lambda4904za7627556z00, BGl_z62lambda4904z62zz__httpz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string7361z00zz__httpz00, BgL_bgl_string7361za700za7za7_7557za7, "Illegal separator", 17 );
DEFINE_STRING( BGl_string7280z00zz__httpz00, BgL_bgl_string7280za700za7za7_7558za7, "body", 4 );
DEFINE_STRING( BGl_string7362z00zz__httpz00, BgL_bgl_string7362za700za7za7_7559za7, "Illegal integer", 15 );
DEFINE_STRING( BGl_string7444z00zz__httpz00, BgL_bgl_string7444za700za7za7_7560za7, "url", 3 );
DEFINE_STRING( BGl_string7282z00zz__httpz00, BgL_bgl_string7282za700za7za7_7561za7, "connection", 10 );
DEFINE_STRING( BGl_string7364z00zz__httpz00, BgL_bgl_string7364za700za7za7_7562za7, "the-downcase-subsymbol", 22 );
DEFINE_STRING( BGl_string7446z00zz__httpz00, BgL_bgl_string7446za700za7za7_7563za7, "bstring", 7 );
DEFINE_STRING( BGl_string7365z00zz__httpz00, BgL_bgl_string7365za700za7za7_7564za7, "Illegal range", 13 );
DEFINE_STRING( BGl_string7284z00zz__httpz00, BgL_bgl_string7284za700za7za7_7565za7, "content-type", 12 );
DEFINE_STRING( BGl_string7366z00zz__httpz00, BgL_bgl_string7366za700za7za7_7566za7, "http-parse-header", 17 );
DEFINE_STRING( BGl_string7367z00zz__httpz00, BgL_bgl_string7367za700za7za7_7567za7, "Illegal characters: ~a", 22 );
DEFINE_STRING( BGl_string7286z00zz__httpz00, BgL_bgl_string7286za700za7za7_7568za7, "header", 6 );
DEFINE_STRING( BGl_string7369z00zz__httpz00, BgL_bgl_string7369za700za7za7_7569za7, "content-length", 14 );
DEFINE_STRING( BGl_string7288z00zz__httpz00, BgL_bgl_string7288za700za7za7_7570za7, "host", 4 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7441z00zz__httpz00, BgL_bgl_za762lambda4910za7627571z00, BGl_z62lambda4910z62zz__httpz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7442z00zz__httpz00, BgL_bgl_za762lambda4909za7627572z00, BGl_z62lambda4909z62zz__httpz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string7451z00zz__httpz00, BgL_bgl_string7451za700za7za7_7573za7, "&http-redirection", 17 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7447z00zz__httpz00, BgL_bgl_za762za7c3za704anonymo7574za7, BGl_z62zc3z04anonymousza34900ze3ze5zz__httpz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7448z00zz__httpz00, BgL_bgl_za762lambda4898za7627575z00, BGl_z62lambda4898z62zz__httpz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string7371z00zz__httpz00, BgL_bgl_string7371za700za7za7_7576za7, "transfer-encoding", 17 );
DEFINE_STRING( BGl_string7290z00zz__httpz00, BgL_bgl_string7290za700za7za7_7577za7, "http-version", 12 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7449z00zz__httpz00, BgL_bgl_za762lambda4896za7627578z00, BGl_z62lambda4896z62zz__httpz00, 0L, BUNSPEC, 5 );
DEFINE_STRING( BGl_string7373z00zz__httpz00, BgL_bgl_string7373za700za7za7_7579za7, "proxy-authorization", 19 );
DEFINE_STRING( BGl_string7292z00zz__httpz00, BgL_bgl_string7292za700za7za7_7580za7, "in", 2 );
DEFINE_STRING( BGl_string7375z00zz__httpz00, BgL_bgl_string7375za700za7za7_7581za7, "expect", 6 );
DEFINE_STRING( BGl_string7294z00zz__httpz00, BgL_bgl_string7294za700za7za7_7582za7, "login", 5 );
DEFINE_STRING( BGl_string7376z00zz__httpz00, BgL_bgl_string7376za700za7za7_7583za7, "100-continue", 12 );
DEFINE_STRING( BGl_string7377z00zz__httpz00, BgL_bgl_string7377za700za7za7_7584za7, "HTTP/1.1 100 Continue\r\n\r\n", 25 );
DEFINE_STRING( BGl_string7296z00zz__httpz00, BgL_bgl_string7296za700za7za7_7585za7, "method", 6 );
DEFINE_STRING( BGl_string7378z00zz__httpz00, BgL_bgl_string7378za700za7za7_7586za7, "HTTP/1.1 417 Expectation Failed\r\n\r\n", 35 );
DEFINE_STRING( BGl_string7379z00zz__httpz00, BgL_bgl_string7379za700za7za7_7587za7, "expect-header", 13 );
DEFINE_STRING( BGl_string7298z00zz__httpz00, BgL_bgl_string7298za700za7za7_7588za7, "out", 3 );
DEFINE_STRING( BGl_string7380z00zz__httpz00, BgL_bgl_string7380za700za7za7_7589za7, "Expectation failed (~a)", 23 );
DEFINE_STRING( BGl_string7381z00zz__httpz00, BgL_bgl_string7381za700za7za7_7590za7, "Cannot honnor message because output-port is #f", 47 );
DEFINE_STRING( BGl_string7383z00zz__httpz00, BgL_bgl_string7383za700za7za7_7591za7, "&http-parse-header", 18 );
DEFINE_STRING( BGl_string7385z00zz__httpz00, BgL_bgl_string7385za700za7za7_7592za7, "http-parse-response", 19 );
DEFINE_STRING( BGl_string7386z00zz__httpz00, BgL_bgl_string7386za700za7za7_7593za7, "Bad status code: ~a", 19 );
DEFINE_STRING( BGl_string7388z00zz__httpz00, BgL_bgl_string7388za700za7za7_7594za7, "chunked", 7 );
DEFINE_STRING( BGl_string7390z00zz__httpz00, BgL_bgl_string7390za700za7za7_7595za7, "location", 8 );
DEFINE_STRING( BGl_string7392z00zz__httpz00, BgL_bgl_string7392za700za7za7_7596za7, "http-parse-body", 15 );
DEFINE_STRING( BGl_string7393z00zz__httpz00, BgL_bgl_string7393za700za7za7_7597za7, "No URL for redirection!", 23 );
DEFINE_STRING( BGl_string7394z00zz__httpz00, BgL_bgl_string7394za700za7za7_7598za7, "&http-parse-response", 20 );
DEFINE_STRING( BGl_string7395z00zz__httpz00, BgL_bgl_string7395za700za7za7_7599za7, "procedure", 9 );
DEFINE_STRING( BGl_string7397z00zz__httpz00, BgL_bgl_string7397za700za7za7_7600za7, "&http-response-body->port", 25 );
DEFINE_STRING( BGl_string7398z00zz__httpz00, BgL_bgl_string7398za700za7za7_7601za7, "output-port", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_httpzd2chunkszd2ze3portzd2envz31zz__httpz00, BgL_bgl_za762httpza7d2chunks7602z00, BGl_z62httpzd2chunkszd2ze3portz81zz__httpz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc7396z00zz__httpz00, BgL_bgl_za762parseza7d2bodyza77603za7, BGl_z62parsezd2bodyzb0zz__httpz00, 0L, BUNSPEC, 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_httpzd2envzd2zz__httpz00, BgL_bgl__httpza700za7za7__http7604za7, opt_generic_entry, BGl__httpz00zz__httpz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_httpzd2readzd2linezd2envzd2zz__httpz00, BgL_bgl_za762httpza7d2readza7d7605za7, BGl_z62httpzd2readzd2linez62zz__httpz00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_keyword7301z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7303z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7305z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7307z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7309z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7311z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7313z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__httpz00) );
ADD_ROOT( (void *)(&BGl_z62httpzd2redirectionzb0zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7264z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7275z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7277z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7279z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7281z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7283z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7285z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7368z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7287z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7289z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7402z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7405z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7407z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7327z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7370z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7372z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7291z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7374z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7293z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7295z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7297z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7299z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7410z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7250z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7334z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7417z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7336z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7419z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7338z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_keyword7389z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7424z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7344z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7428z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7269z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7430z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7272z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7435z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7439z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7440z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7443z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7363z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7445z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_statuszd2linezd2grammarz00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7450z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7384z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7387z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7391z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_symbol7399z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_z62httpzd2errorzb0zz__httpz00) );
ADD_ROOT( (void *)(&BGl_z62httpzd2redirectionzd2errorz62zz__httpz00) );
ADD_ROOT( (void *)(&BGl_z62httpzd2statuszd2errorz62zz__httpz00) );
ADD_ROOT( (void *)(&BGl_za2chunkzd2siza7ezd2grammarza2za7zz__httpz00) );
ADD_ROOT( (void *)(&BGl_list7262z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_list7263z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_list7348z00zz__httpz00) );
ADD_ROOT( (void *)(&BGl_list7274z00zz__httpz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__httpz00(long BgL_checksumz00_15164, char * BgL_fromz00_15165)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__httpz00))
{ 
BGl_requirezd2initializa7ationz75zz__httpz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__httpz00(); 
BGl_cnstzd2initzd2zz__httpz00(); 
BGl_importedzd2moduleszd2initz00zz__httpz00(); 
BGl_objectzd2initzd2zz__httpz00(); 
return 
BGl_toplevelzd2initzd2zz__httpz00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__httpz00()
{
{ /* Unsafe/http.scm 15 */
BGl_symbol7250z00zz__httpz00 = 
bstring_to_symbol(BGl_string7251z00zz__httpz00); 
BGl_keyword7264z00zz__httpz00 = 
bstring_to_keyword(BGl_string7265z00zz__httpz00); 
BGl_list7263z00zz__httpz00 = 
MAKE_YOUNG_PAIR(BGl_keyword7264z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_string7266z00zz__httpz00, BNIL)); 
BGl_list7262z00zz__httpz00 = 
MAKE_YOUNG_PAIR(BGl_list7263z00zz__httpz00, BNIL); 
BGl_symbol7269z00zz__httpz00 = 
bstring_to_symbol(BGl_string7270z00zz__httpz00); 
BGl_symbol7272z00zz__httpz00 = 
bstring_to_symbol(BGl_string7273z00zz__httpz00); 
BGl_keyword7275z00zz__httpz00 = 
bstring_to_keyword(BGl_string7276z00zz__httpz00); 
BGl_keyword7277z00zz__httpz00 = 
bstring_to_keyword(BGl_string7278z00zz__httpz00); 
BGl_keyword7279z00zz__httpz00 = 
bstring_to_keyword(BGl_string7280z00zz__httpz00); 
BGl_keyword7281z00zz__httpz00 = 
bstring_to_keyword(BGl_string7282z00zz__httpz00); 
BGl_keyword7283z00zz__httpz00 = 
bstring_to_keyword(BGl_string7284z00zz__httpz00); 
BGl_keyword7285z00zz__httpz00 = 
bstring_to_keyword(BGl_string7286z00zz__httpz00); 
BGl_keyword7287z00zz__httpz00 = 
bstring_to_keyword(BGl_string7288z00zz__httpz00); 
BGl_keyword7289z00zz__httpz00 = 
bstring_to_keyword(BGl_string7290z00zz__httpz00); 
BGl_keyword7291z00zz__httpz00 = 
bstring_to_keyword(BGl_string7292z00zz__httpz00); 
BGl_keyword7293z00zz__httpz00 = 
bstring_to_keyword(BGl_string7294z00zz__httpz00); 
BGl_keyword7295z00zz__httpz00 = 
bstring_to_keyword(BGl_string7296z00zz__httpz00); 
BGl_keyword7297z00zz__httpz00 = 
bstring_to_keyword(BGl_string7298z00zz__httpz00); 
BGl_keyword7299z00zz__httpz00 = 
bstring_to_keyword(BGl_string7300z00zz__httpz00); 
BGl_keyword7301z00zz__httpz00 = 
bstring_to_keyword(BGl_string7302z00zz__httpz00); 
BGl_keyword7303z00zz__httpz00 = 
bstring_to_keyword(BGl_string7304z00zz__httpz00); 
BGl_keyword7305z00zz__httpz00 = 
bstring_to_keyword(BGl_string7306z00zz__httpz00); 
BGl_keyword7307z00zz__httpz00 = 
bstring_to_keyword(BGl_string7308z00zz__httpz00); 
BGl_keyword7309z00zz__httpz00 = 
bstring_to_keyword(BGl_string7310z00zz__httpz00); 
BGl_keyword7311z00zz__httpz00 = 
bstring_to_keyword(BGl_string7312z00zz__httpz00); 
BGl_keyword7313z00zz__httpz00 = 
bstring_to_keyword(BGl_string7314z00zz__httpz00); 
BGl_list7274z00zz__httpz00 = 
MAKE_YOUNG_PAIR(BGl_keyword7275z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7277z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7279z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7281z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7283z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7285z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7287z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7289z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7291z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7293z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7295z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7297z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7299z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7301z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7303z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7305z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7307z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7309z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7311z00zz__httpz00, 
MAKE_YOUNG_PAIR(BGl_keyword7313z00zz__httpz00, BNIL)))))))))))))))))))); 
BGl_symbol7327z00zz__httpz00 = 
bstring_to_symbol(BGl_string7328z00zz__httpz00); 
BGl_symbol7334z00zz__httpz00 = 
bstring_to_symbol(BGl_string7335z00zz__httpz00); 
BGl_symbol7336z00zz__httpz00 = 
bstring_to_symbol(BGl_string7337z00zz__httpz00); 
BGl_symbol7338z00zz__httpz00 = 
bstring_to_symbol(BGl_string7339z00zz__httpz00); 
BGl_symbol7344z00zz__httpz00 = 
bstring_to_symbol(BGl_string7345z00zz__httpz00); 
BGl_list7348z00zz__httpz00 = 
MAKE_YOUNG_PAIR(BGl_string7326z00zz__httpz00, BNIL); 
BGl_symbol7363z00zz__httpz00 = 
bstring_to_symbol(BGl_string7355z00zz__httpz00); 
BGl_keyword7368z00zz__httpz00 = 
bstring_to_keyword(BGl_string7369z00zz__httpz00); 
BGl_keyword7370z00zz__httpz00 = 
bstring_to_keyword(BGl_string7371z00zz__httpz00); 
BGl_keyword7372z00zz__httpz00 = 
bstring_to_keyword(BGl_string7373z00zz__httpz00); 
BGl_keyword7374z00zz__httpz00 = 
bstring_to_keyword(BGl_string7375z00zz__httpz00); 
BGl_symbol7384z00zz__httpz00 = 
bstring_to_symbol(BGl_string7385z00zz__httpz00); 
BGl_symbol7387z00zz__httpz00 = 
bstring_to_symbol(BGl_string7388z00zz__httpz00); 
BGl_keyword7389z00zz__httpz00 = 
bstring_to_keyword(BGl_string7390z00zz__httpz00); 
BGl_symbol7391z00zz__httpz00 = 
bstring_to_symbol(BGl_string7392z00zz__httpz00); 
BGl_symbol7399z00zz__httpz00 = 
bstring_to_symbol(BGl_string7400z00zz__httpz00); 
BGl_symbol7402z00zz__httpz00 = 
bstring_to_symbol(BGl_string7403z00zz__httpz00); 
BGl_symbol7405z00zz__httpz00 = 
bstring_to_symbol(BGl_string7406z00zz__httpz00); 
BGl_symbol7407z00zz__httpz00 = 
bstring_to_symbol(BGl_string7408z00zz__httpz00); 
BGl_symbol7410z00zz__httpz00 = 
bstring_to_symbol(BGl_string7411z00zz__httpz00); 
BGl_symbol7417z00zz__httpz00 = 
bstring_to_symbol(BGl_string7418z00zz__httpz00); 
BGl_symbol7419z00zz__httpz00 = 
bstring_to_symbol(BGl_string7420z00zz__httpz00); 
BGl_symbol7424z00zz__httpz00 = 
bstring_to_symbol(BGl_string7425z00zz__httpz00); 
BGl_symbol7428z00zz__httpz00 = 
bstring_to_symbol(BGl_string7429z00zz__httpz00); 
BGl_symbol7430z00zz__httpz00 = 
bstring_to_symbol(BGl_string7431z00zz__httpz00); 
BGl_symbol7435z00zz__httpz00 = 
bstring_to_symbol(BGl_string7436z00zz__httpz00); 
BGl_symbol7439z00zz__httpz00 = 
bstring_to_symbol(BGl_string7304z00zz__httpz00); 
BGl_symbol7440z00zz__httpz00 = 
bstring_to_symbol(BGl_string7359z00zz__httpz00); 
BGl_symbol7443z00zz__httpz00 = 
bstring_to_symbol(BGl_string7444z00zz__httpz00); 
BGl_symbol7445z00zz__httpz00 = 
bstring_to_symbol(BGl_string7446z00zz__httpz00); 
return ( 
BGl_symbol7450z00zz__httpz00 = 
bstring_to_symbol(BGl_string7451z00zz__httpz00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__httpz00()
{
{ /* Unsafe/http.scm 15 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__httpz00()
{
{ /* Unsafe/http.scm 15 */
{ /* Unsafe/http.scm 333 */
obj_t BgL_zc3z04anonymousza31583ze3z87_14315;
{ 
int BgL_tmpz00_15253;
BgL_tmpz00_15253 = 
(int)(((long)0)); 
BgL_zc3z04anonymousza31583ze3z87_14315 = 
MAKE_EL_PROCEDURE(BgL_tmpz00_15253); } 
BGl_statuszd2linezd2grammarz00zz__httpz00 = BgL_zc3z04anonymousza31583ze3z87_14315; } 
{ /* Unsafe/http.scm 691 */
obj_t BgL_zc3z04anonymousza31807ze3z87_14314;
{ 
int BgL_tmpz00_15256;
BgL_tmpz00_15256 = 
(int)(((long)0)); 
BgL_zc3z04anonymousza31807ze3z87_14314 = 
MAKE_EL_PROCEDURE(BgL_tmpz00_15256); } 
BGl_za2chunkzd2siza7ezd2grammarza2za7zz__httpz00 = BgL_zc3z04anonymousza31807ze3z87_14314; } 
return ( 
BGl_za2bufferzd2lengthza2zd2zz__httpz00 = ((long)8192), BUNSPEC) ;} 

}



/* &<@anonymous:1807> */
obj_t BGl_z62zc3z04anonymousza31807ze3ze5zz__httpz00(obj_t BgL_envz00_14316, obj_t BgL_iportz00_14317, obj_t BgL_opz00_14318)
{
{ /* Unsafe/http.scm 691 */
{ 
obj_t BgL_iportz00_14644;long BgL_lastzd2matchzd2_14645;long BgL_forwardz00_14646;long BgL_bufposz00_14647;obj_t BgL_iportz00_14631;long BgL_lastzd2matchzd2_14632;long BgL_forwardz00_14633;long BgL_bufposz00_14634;obj_t BgL_iportz00_14605;long BgL_lastzd2matchzd2_14606;long BgL_forwardz00_14607;long BgL_bufposz00_14608;obj_t BgL_iportz00_14577;long BgL_lastzd2matchzd2_14578;long BgL_forwardz00_14579;long BgL_bufposz00_14580;
{ /* Unsafe/http.scm 691 */
long BgL_res5516z00_14673;
BgL_res5516z00_14673 = 
RGC_START_MATCH(BgL_iportz00_14317); BgL_res5516z00_14673; } 
{ /* Unsafe/http.scm 691 */
long BgL_matchz00_14674;
{ /* Unsafe/http.scm 691 */
long BgL_arg2186z00_14675;long BgL_arg2187z00_14676;
{ /* Unsafe/http.scm 691 */
long BgL_res5517z00_14677;
BgL_res5517z00_14677 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14317); 
BgL_arg2186z00_14675 = BgL_res5517z00_14677; } 
{ /* Unsafe/http.scm 691 */
long BgL_res5518z00_14678;
BgL_res5518z00_14678 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14317); 
BgL_arg2187z00_14676 = BgL_res5518z00_14678; } 
BgL_iportz00_14631 = BgL_iportz00_14317; 
BgL_lastzd2matchzd2_14632 = ((long)2); 
BgL_forwardz00_14633 = BgL_arg2186z00_14675; 
BgL_bufposz00_14634 = BgL_arg2187z00_14676; 
BgL_statezd20zd21296z00_14573:
if(
(BgL_forwardz00_14633==BgL_bufposz00_14634))
{ /* Unsafe/http.scm 691 */
if(
rgc_fill_buffer(BgL_iportz00_14631))
{ /* Unsafe/http.scm 691 */
long BgL_arg1847z00_14635;long BgL_arg1848z00_14636;
{ /* Unsafe/http.scm 691 */
long BgL_res5447z00_14637;
BgL_res5447z00_14637 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14631); 
BgL_arg1847z00_14635 = BgL_res5447z00_14637; } 
{ /* Unsafe/http.scm 691 */
long BgL_res5448z00_14638;
BgL_res5448z00_14638 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14631); 
BgL_arg1848z00_14636 = BgL_res5448z00_14638; } 
{ 
long BgL_bufposz00_15269;long BgL_forwardz00_15268;
BgL_forwardz00_15268 = BgL_arg1847z00_14635; 
BgL_bufposz00_15269 = BgL_arg1848z00_14636; 
BgL_bufposz00_14634 = BgL_bufposz00_15269; 
BgL_forwardz00_14633 = BgL_forwardz00_15268; 
goto BgL_statezd20zd21296z00_14573;} }  else 
{ /* Unsafe/http.scm 691 */
BgL_matchz00_14674 = BgL_lastzd2matchzd2_14632; } }  else 
{ /* Unsafe/http.scm 691 */
int BgL_curz00_14639;
{ /* Unsafe/http.scm 691 */
int BgL_res5449z00_14640;
BgL_res5449z00_14640 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14631, BgL_forwardz00_14633); 
BgL_curz00_14639 = BgL_res5449z00_14640; } 
{ /* Unsafe/http.scm 691 */

{ /* Unsafe/http.scm 691 */
bool_t BgL_test7609z00_15271;
{ /* Unsafe/http.scm 691 */
bool_t BgL_test7610z00_15272;
if(
(
(long)(BgL_curz00_14639)>=((long)48)))
{ /* Unsafe/http.scm 691 */
BgL_test7610z00_15272 = 
(
(long)(BgL_curz00_14639)<((long)58))
; }  else 
{ /* Unsafe/http.scm 691 */
BgL_test7610z00_15272 = ((bool_t)0)
; } 
if(BgL_test7610z00_15272)
{ /* Unsafe/http.scm 691 */
BgL_test7609z00_15271 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 691 */
bool_t BgL_test7612z00_15278;
if(
(
(long)(BgL_curz00_14639)>=((long)65)))
{ /* Unsafe/http.scm 691 */
BgL_test7612z00_15278 = 
(
(long)(BgL_curz00_14639)<((long)71))
; }  else 
{ /* Unsafe/http.scm 691 */
BgL_test7612z00_15278 = ((bool_t)0)
; } 
if(BgL_test7612z00_15278)
{ /* Unsafe/http.scm 691 */
BgL_test7609z00_15271 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 691 */
if(
(
(long)(BgL_curz00_14639)>=((long)97)))
{ /* Unsafe/http.scm 691 */
BgL_test7609z00_15271 = 
(
(long)(BgL_curz00_14639)<((long)103))
; }  else 
{ /* Unsafe/http.scm 691 */
BgL_test7609z00_15271 = ((bool_t)0)
; } } } } 
if(BgL_test7609z00_15271)
{ /* Unsafe/http.scm 691 */
BgL_iportz00_14577 = BgL_iportz00_14631; 
BgL_lastzd2matchzd2_14578 = BgL_lastzd2matchzd2_14632; 
BgL_forwardz00_14579 = 
(((long)1)+BgL_forwardz00_14633); 
BgL_bufposz00_14580 = BgL_bufposz00_14634; 
BgL_statezd22zd21298z00_14571:
{ /* Unsafe/http.scm 691 */
long BgL_newzd2matchzd2_14581;
{ /* Unsafe/http.scm 691 */
long BgL_res5388z00_14582;
BgL_res5388z00_14582 = 
RGC_STOP_MATCH(BgL_iportz00_14577, BgL_forwardz00_14579); BgL_res5388z00_14582; } 
BgL_newzd2matchzd2_14581 = ((long)2); 
if(
(BgL_forwardz00_14579==BgL_bufposz00_14580))
{ /* Unsafe/http.scm 691 */
if(
rgc_fill_buffer(BgL_iportz00_14577))
{ /* Unsafe/http.scm 691 */
long BgL_arg1811z00_14583;long BgL_arg1812z00_14584;
{ /* Unsafe/http.scm 691 */
long BgL_res5391z00_14585;
BgL_res5391z00_14585 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14577); 
BgL_arg1811z00_14583 = BgL_res5391z00_14585; } 
{ /* Unsafe/http.scm 691 */
long BgL_res5392z00_14586;
BgL_res5392z00_14586 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14577); 
BgL_arg1812z00_14584 = BgL_res5392z00_14586; } 
{ 
long BgL_bufposz00_15297;long BgL_forwardz00_15296;
BgL_forwardz00_15296 = BgL_arg1811z00_14583; 
BgL_bufposz00_15297 = BgL_arg1812z00_14584; 
BgL_bufposz00_14580 = BgL_bufposz00_15297; 
BgL_forwardz00_14579 = BgL_forwardz00_15296; 
goto BgL_statezd22zd21298z00_14571;} }  else 
{ /* Unsafe/http.scm 691 */
BgL_matchz00_14674 = BgL_newzd2matchzd2_14581; } }  else 
{ /* Unsafe/http.scm 691 */
int BgL_curz00_14587;
{ /* Unsafe/http.scm 691 */
int BgL_res5393z00_14588;
BgL_res5393z00_14588 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14577, BgL_forwardz00_14579); 
BgL_curz00_14587 = BgL_res5393z00_14588; } 
{ /* Unsafe/http.scm 691 */

if(
(
(long)(BgL_curz00_14587)==((long)59)))
{ /* Unsafe/http.scm 691 */
long BgL_arg1814z00_14589;
BgL_arg1814z00_14589 = 
(((long)1)+BgL_forwardz00_14579); 
{ /* Unsafe/http.scm 691 */
long BgL_newzd2matchzd2_14590;
{ /* Unsafe/http.scm 691 */
long BgL_res5396z00_14591;
BgL_res5396z00_14591 = 
RGC_STOP_MATCH(BgL_iportz00_14577, BgL_arg1814z00_14589); BgL_res5396z00_14591; } 
BgL_newzd2matchzd2_14590 = ((long)0); 
BgL_matchz00_14674 = BgL_newzd2matchzd2_14590; } }  else 
{ /* Unsafe/http.scm 691 */
bool_t BgL_test7618z00_15304;
{ /* Unsafe/http.scm 691 */
bool_t BgL_test7619z00_15305;
if(
(
(long)(BgL_curz00_14587)>=((long)48)))
{ /* Unsafe/http.scm 691 */
BgL_test7619z00_15305 = 
(
(long)(BgL_curz00_14587)<((long)58))
; }  else 
{ /* Unsafe/http.scm 691 */
BgL_test7619z00_15305 = ((bool_t)0)
; } 
if(BgL_test7619z00_15305)
{ /* Unsafe/http.scm 691 */
BgL_test7618z00_15304 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 691 */
bool_t BgL_test7621z00_15311;
if(
(
(long)(BgL_curz00_14587)>=((long)65)))
{ /* Unsafe/http.scm 691 */
BgL_test7621z00_15311 = 
(
(long)(BgL_curz00_14587)<((long)71))
; }  else 
{ /* Unsafe/http.scm 691 */
BgL_test7621z00_15311 = ((bool_t)0)
; } 
if(BgL_test7621z00_15311)
{ /* Unsafe/http.scm 691 */
BgL_test7618z00_15304 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 691 */
if(
(
(long)(BgL_curz00_14587)>=((long)97)))
{ /* Unsafe/http.scm 691 */
BgL_test7618z00_15304 = 
(
(long)(BgL_curz00_14587)<((long)103))
; }  else 
{ /* Unsafe/http.scm 691 */
BgL_test7618z00_15304 = ((bool_t)0)
; } } } } 
if(BgL_test7618z00_15304)
{ /* Unsafe/http.scm 691 */
BgL_iportz00_14605 = BgL_iportz00_14577; 
BgL_lastzd2matchzd2_14606 = BgL_newzd2matchzd2_14581; 
BgL_forwardz00_14607 = 
(((long)1)+BgL_forwardz00_14579); 
BgL_bufposz00_14608 = BgL_bufposz00_14580; 
BgL_statezd25zd21301z00_14572:
if(
(BgL_forwardz00_14607==BgL_bufposz00_14608))
{ /* Unsafe/http.scm 691 */
if(
rgc_fill_buffer(BgL_iportz00_14605))
{ /* Unsafe/http.scm 691 */
long BgL_arg1829z00_14609;long BgL_arg1830z00_14610;
{ /* Unsafe/http.scm 691 */
long BgL_res5419z00_14611;
BgL_res5419z00_14611 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14605); 
BgL_arg1829z00_14609 = BgL_res5419z00_14611; } 
{ /* Unsafe/http.scm 691 */
long BgL_res5420z00_14612;
BgL_res5420z00_14612 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14605); 
BgL_arg1830z00_14610 = BgL_res5420z00_14612; } 
{ 
long BgL_bufposz00_15329;long BgL_forwardz00_15328;
BgL_forwardz00_15328 = BgL_arg1829z00_14609; 
BgL_bufposz00_15329 = BgL_arg1830z00_14610; 
BgL_bufposz00_14608 = BgL_bufposz00_15329; 
BgL_forwardz00_14607 = BgL_forwardz00_15328; 
goto BgL_statezd25zd21301z00_14572;} }  else 
{ /* Unsafe/http.scm 691 */
BgL_matchz00_14674 = BgL_lastzd2matchzd2_14606; } }  else 
{ /* Unsafe/http.scm 691 */
int BgL_curz00_14613;
{ /* Unsafe/http.scm 691 */
int BgL_res5421z00_14614;
BgL_res5421z00_14614 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14605, BgL_forwardz00_14607); 
BgL_curz00_14613 = BgL_res5421z00_14614; } 
{ /* Unsafe/http.scm 691 */

if(
(
(long)(BgL_curz00_14613)==((long)59)))
{ /* Unsafe/http.scm 691 */
long BgL_arg1832z00_14615;
BgL_arg1832z00_14615 = 
(((long)1)+BgL_forwardz00_14607); 
{ /* Unsafe/http.scm 691 */
long BgL_newzd2matchzd2_14616;
{ /* Unsafe/http.scm 691 */
long BgL_res5424z00_14617;
BgL_res5424z00_14617 = 
RGC_STOP_MATCH(BgL_iportz00_14605, BgL_arg1832z00_14615); BgL_res5424z00_14617; } 
BgL_newzd2matchzd2_14616 = ((long)0); 
BgL_matchz00_14674 = BgL_newzd2matchzd2_14616; } }  else 
{ /* Unsafe/http.scm 691 */
bool_t BgL_test7627z00_15336;
{ /* Unsafe/http.scm 691 */
bool_t BgL_test7628z00_15337;
if(
(
(long)(BgL_curz00_14613)>=((long)48)))
{ /* Unsafe/http.scm 691 */
BgL_test7628z00_15337 = 
(
(long)(BgL_curz00_14613)<((long)58))
; }  else 
{ /* Unsafe/http.scm 691 */
BgL_test7628z00_15337 = ((bool_t)0)
; } 
if(BgL_test7628z00_15337)
{ /* Unsafe/http.scm 691 */
BgL_test7627z00_15336 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 691 */
bool_t BgL_test7630z00_15343;
if(
(
(long)(BgL_curz00_14613)>=((long)65)))
{ /* Unsafe/http.scm 691 */
BgL_test7630z00_15343 = 
(
(long)(BgL_curz00_14613)<((long)71))
; }  else 
{ /* Unsafe/http.scm 691 */
BgL_test7630z00_15343 = ((bool_t)0)
; } 
if(BgL_test7630z00_15343)
{ /* Unsafe/http.scm 691 */
BgL_test7627z00_15336 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 691 */
if(
(
(long)(BgL_curz00_14613)>=((long)97)))
{ /* Unsafe/http.scm 691 */
BgL_test7627z00_15336 = 
(
(long)(BgL_curz00_14613)<((long)103))
; }  else 
{ /* Unsafe/http.scm 691 */
BgL_test7627z00_15336 = ((bool_t)0)
; } } } } 
if(BgL_test7627z00_15336)
{ 
long BgL_forwardz00_15354;
BgL_forwardz00_15354 = 
(((long)1)+BgL_forwardz00_14607); 
BgL_forwardz00_14607 = BgL_forwardz00_15354; 
goto BgL_statezd25zd21301z00_14572;}  else 
{ /* Unsafe/http.scm 691 */
if(
(
(long)(BgL_curz00_14613)==((long)13)))
{ /* Unsafe/http.scm 691 */
long BgL_arg1840z00_14618;
BgL_arg1840z00_14618 = 
(((long)1)+BgL_forwardz00_14607); 
{ 
long BgL_forwardz00_14620;long BgL_bufposz00_14621;
BgL_forwardz00_14620 = BgL_arg1840z00_14618; 
BgL_bufposz00_14621 = BgL_bufposz00_14608; 
BgL_statezd24zd21300z00_14619:
if(
(BgL_forwardz00_14620==BgL_bufposz00_14621))
{ /* Unsafe/http.scm 691 */
if(
rgc_fill_buffer(BgL_iportz00_14605))
{ /* Unsafe/http.scm 691 */
long BgL_arg1861z00_14622;long BgL_arg1862z00_14623;
{ /* Unsafe/http.scm 691 */
long BgL_res5436z00_14624;
BgL_res5436z00_14624 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14605); 
BgL_arg1861z00_14622 = BgL_res5436z00_14624; } 
{ /* Unsafe/http.scm 691 */
long BgL_res5437z00_14625;
BgL_res5437z00_14625 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14605); 
BgL_arg1862z00_14623 = BgL_res5437z00_14625; } 
{ 
long BgL_bufposz00_15367;long BgL_forwardz00_15366;
BgL_forwardz00_15366 = BgL_arg1861z00_14622; 
BgL_bufposz00_15367 = BgL_arg1862z00_14623; 
BgL_bufposz00_14621 = BgL_bufposz00_15367; 
BgL_forwardz00_14620 = BgL_forwardz00_15366; 
goto BgL_statezd24zd21300z00_14619;} }  else 
{ /* Unsafe/http.scm 691 */
BgL_matchz00_14674 = BgL_lastzd2matchzd2_14606; } }  else 
{ /* Unsafe/http.scm 691 */
int BgL_curz00_14626;
{ /* Unsafe/http.scm 691 */
int BgL_res5438z00_14627;
BgL_res5438z00_14627 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14605, BgL_forwardz00_14620); 
BgL_curz00_14626 = BgL_res5438z00_14627; } 
{ /* Unsafe/http.scm 691 */

if(
(
(long)(BgL_curz00_14626)==((long)10)))
{ /* Unsafe/http.scm 691 */
long BgL_arg1864z00_14628;
BgL_arg1864z00_14628 = 
(((long)1)+BgL_forwardz00_14620); 
{ /* Unsafe/http.scm 691 */
long BgL_newzd2matchzd2_14629;
{ /* Unsafe/http.scm 691 */
long BgL_res5441z00_14630;
BgL_res5441z00_14630 = 
RGC_STOP_MATCH(BgL_iportz00_14605, BgL_arg1864z00_14628); BgL_res5441z00_14630; } 
BgL_newzd2matchzd2_14629 = ((long)1); 
BgL_matchz00_14674 = BgL_newzd2matchzd2_14629; } }  else 
{ /* Unsafe/http.scm 691 */
BgL_matchz00_14674 = BgL_lastzd2matchzd2_14606; } } } } }  else 
{ /* Unsafe/http.scm 691 */
bool_t BgL_test7637z00_15374;
if(
(
(long)(BgL_curz00_14613)==((long)9)))
{ /* Unsafe/http.scm 691 */
BgL_test7637z00_15374 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 691 */
BgL_test7637z00_15374 = 
(
(long)(BgL_curz00_14613)==((long)32))
; } 
if(BgL_test7637z00_15374)
{ /* Unsafe/http.scm 691 */
BgL_iportz00_14644 = BgL_iportz00_14605; 
BgL_lastzd2matchzd2_14645 = BgL_lastzd2matchzd2_14606; 
BgL_forwardz00_14646 = 
(((long)1)+BgL_forwardz00_14607); 
BgL_bufposz00_14647 = BgL_bufposz00_14608; 
BgL_statezd23zd21299z00_14574:
if(
(BgL_forwardz00_14646==BgL_bufposz00_14647))
{ /* Unsafe/http.scm 691 */
if(
rgc_fill_buffer(BgL_iportz00_14644))
{ /* Unsafe/http.scm 691 */
long BgL_arg1868z00_14648;long BgL_arg1869z00_14649;
{ /* Unsafe/http.scm 691 */
long BgL_res5479z00_14650;
BgL_res5479z00_14650 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14644); 
BgL_arg1868z00_14648 = BgL_res5479z00_14650; } 
{ /* Unsafe/http.scm 691 */
long BgL_res5480z00_14651;
BgL_res5480z00_14651 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14644); 
BgL_arg1869z00_14649 = BgL_res5480z00_14651; } 
{ 
long BgL_bufposz00_15387;long BgL_forwardz00_15386;
BgL_forwardz00_15386 = BgL_arg1868z00_14648; 
BgL_bufposz00_15387 = BgL_arg1869z00_14649; 
BgL_bufposz00_14647 = BgL_bufposz00_15387; 
BgL_forwardz00_14646 = BgL_forwardz00_15386; 
goto BgL_statezd23zd21299z00_14574;} }  else 
{ /* Unsafe/http.scm 691 */
BgL_matchz00_14674 = BgL_lastzd2matchzd2_14645; } }  else 
{ /* Unsafe/http.scm 691 */
int BgL_curz00_14652;
{ /* Unsafe/http.scm 691 */
int BgL_res5481z00_14653;
BgL_res5481z00_14653 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14644, BgL_forwardz00_14646); 
BgL_curz00_14652 = BgL_res5481z00_14653; } 
{ /* Unsafe/http.scm 691 */

if(
(
(long)(BgL_curz00_14652)==((long)59)))
{ /* Unsafe/http.scm 691 */
long BgL_arg1871z00_14654;
BgL_arg1871z00_14654 = 
(((long)1)+BgL_forwardz00_14646); 
{ /* Unsafe/http.scm 691 */
long BgL_newzd2matchzd2_14655;
{ /* Unsafe/http.scm 691 */
long BgL_res5484z00_14656;
BgL_res5484z00_14656 = 
RGC_STOP_MATCH(BgL_iportz00_14644, BgL_arg1871z00_14654); BgL_res5484z00_14656; } 
BgL_newzd2matchzd2_14655 = ((long)0); 
BgL_matchz00_14674 = BgL_newzd2matchzd2_14655; } }  else 
{ /* Unsafe/http.scm 691 */
if(
(
(long)(BgL_curz00_14652)==((long)13)))
{ /* Unsafe/http.scm 691 */
long BgL_arg1873z00_14657;
BgL_arg1873z00_14657 = 
(((long)1)+BgL_forwardz00_14646); 
{ 
long BgL_forwardz00_14659;long BgL_bufposz00_14660;
BgL_forwardz00_14659 = BgL_arg1873z00_14657; 
BgL_bufposz00_14660 = BgL_bufposz00_14647; 
BgL_statezd24zd21300z00_14658:
if(
(BgL_forwardz00_14659==BgL_bufposz00_14660))
{ /* Unsafe/http.scm 691 */
if(
rgc_fill_buffer(BgL_iportz00_14644))
{ /* Unsafe/http.scm 691 */
long BgL_arg1861z00_14661;long BgL_arg1862z00_14662;
{ /* Unsafe/http.scm 691 */
long BgL_res5489z00_14663;
BgL_res5489z00_14663 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14644); 
BgL_arg1861z00_14661 = BgL_res5489z00_14663; } 
{ /* Unsafe/http.scm 691 */
long BgL_res5490z00_14664;
BgL_res5490z00_14664 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14644); 
BgL_arg1862z00_14662 = BgL_res5490z00_14664; } 
{ 
long BgL_bufposz00_15405;long BgL_forwardz00_15404;
BgL_forwardz00_15404 = BgL_arg1861z00_14661; 
BgL_bufposz00_15405 = BgL_arg1862z00_14662; 
BgL_bufposz00_14660 = BgL_bufposz00_15405; 
BgL_forwardz00_14659 = BgL_forwardz00_15404; 
goto BgL_statezd24zd21300z00_14658;} }  else 
{ /* Unsafe/http.scm 691 */
BgL_matchz00_14674 = BgL_lastzd2matchzd2_14645; } }  else 
{ /* Unsafe/http.scm 691 */
int BgL_curz00_14665;
{ /* Unsafe/http.scm 691 */
int BgL_res5491z00_14666;
BgL_res5491z00_14666 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14644, BgL_forwardz00_14659); 
BgL_curz00_14665 = BgL_res5491z00_14666; } 
{ /* Unsafe/http.scm 691 */

if(
(
(long)(BgL_curz00_14665)==((long)10)))
{ /* Unsafe/http.scm 691 */
long BgL_arg1864z00_14667;
BgL_arg1864z00_14667 = 
(((long)1)+BgL_forwardz00_14659); 
{ /* Unsafe/http.scm 691 */
long BgL_newzd2matchzd2_14668;
{ /* Unsafe/http.scm 691 */
long BgL_res5494z00_14669;
BgL_res5494z00_14669 = 
RGC_STOP_MATCH(BgL_iportz00_14644, BgL_arg1864z00_14667); BgL_res5494z00_14669; } 
BgL_newzd2matchzd2_14668 = ((long)1); 
BgL_matchz00_14674 = BgL_newzd2matchzd2_14668; } }  else 
{ /* Unsafe/http.scm 691 */
BgL_matchz00_14674 = BgL_lastzd2matchzd2_14645; } } } } }  else 
{ /* Unsafe/http.scm 691 */
bool_t BgL_test7646z00_15412;
if(
(
(long)(BgL_curz00_14652)==((long)9)))
{ /* Unsafe/http.scm 691 */
BgL_test7646z00_15412 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 691 */
BgL_test7646z00_15412 = 
(
(long)(BgL_curz00_14652)==((long)32))
; } 
if(BgL_test7646z00_15412)
{ 
long BgL_forwardz00_15418;
BgL_forwardz00_15418 = 
(((long)1)+BgL_forwardz00_14646); 
BgL_forwardz00_14646 = BgL_forwardz00_15418; 
goto BgL_statezd23zd21299z00_14574;}  else 
{ /* Unsafe/http.scm 691 */
BgL_matchz00_14674 = BgL_lastzd2matchzd2_14645; } } } } } }  else 
{ /* Unsafe/http.scm 691 */
BgL_matchz00_14674 = BgL_lastzd2matchzd2_14606; } } } } } } }  else 
{ /* Unsafe/http.scm 691 */
if(
(
(long)(BgL_curz00_14587)==((long)13)))
{ /* Unsafe/http.scm 691 */
long BgL_arg1822z00_14592;
BgL_arg1822z00_14592 = 
(((long)1)+BgL_forwardz00_14579); 
{ 
long BgL_forwardz00_14594;long BgL_bufposz00_14595;
BgL_forwardz00_14594 = BgL_arg1822z00_14592; 
BgL_bufposz00_14595 = BgL_bufposz00_14580; 
BgL_statezd24zd21300z00_14593:
if(
(BgL_forwardz00_14594==BgL_bufposz00_14595))
{ /* Unsafe/http.scm 691 */
if(
rgc_fill_buffer(BgL_iportz00_14577))
{ /* Unsafe/http.scm 691 */
long BgL_arg1861z00_14596;long BgL_arg1862z00_14597;
{ /* Unsafe/http.scm 691 */
long BgL_res5408z00_14598;
BgL_res5408z00_14598 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14577); 
BgL_arg1861z00_14596 = BgL_res5408z00_14598; } 
{ /* Unsafe/http.scm 691 */
long BgL_res5409z00_14599;
BgL_res5409z00_14599 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14577); 
BgL_arg1862z00_14597 = BgL_res5409z00_14599; } 
{ 
long BgL_bufposz00_15433;long BgL_forwardz00_15432;
BgL_forwardz00_15432 = BgL_arg1861z00_14596; 
BgL_bufposz00_15433 = BgL_arg1862z00_14597; 
BgL_bufposz00_14595 = BgL_bufposz00_15433; 
BgL_forwardz00_14594 = BgL_forwardz00_15432; 
goto BgL_statezd24zd21300z00_14593;} }  else 
{ /* Unsafe/http.scm 691 */
BgL_matchz00_14674 = BgL_newzd2matchzd2_14581; } }  else 
{ /* Unsafe/http.scm 691 */
int BgL_curz00_14600;
{ /* Unsafe/http.scm 691 */
int BgL_res5410z00_14601;
BgL_res5410z00_14601 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14577, BgL_forwardz00_14594); 
BgL_curz00_14600 = BgL_res5410z00_14601; } 
{ /* Unsafe/http.scm 691 */

if(
(
(long)(BgL_curz00_14600)==((long)10)))
{ /* Unsafe/http.scm 691 */
long BgL_arg1864z00_14602;
BgL_arg1864z00_14602 = 
(((long)1)+BgL_forwardz00_14594); 
{ /* Unsafe/http.scm 691 */
long BgL_newzd2matchzd2_14603;
{ /* Unsafe/http.scm 691 */
long BgL_res5413z00_14604;
BgL_res5413z00_14604 = 
RGC_STOP_MATCH(BgL_iportz00_14577, BgL_arg1864z00_14602); BgL_res5413z00_14604; } 
BgL_newzd2matchzd2_14603 = ((long)1); 
BgL_matchz00_14674 = BgL_newzd2matchzd2_14603; } }  else 
{ /* Unsafe/http.scm 691 */
BgL_matchz00_14674 = BgL_newzd2matchzd2_14581; } } } } }  else 
{ /* Unsafe/http.scm 691 */
bool_t BgL_test7652z00_15440;
if(
(
(long)(BgL_curz00_14587)==((long)9)))
{ /* Unsafe/http.scm 691 */
BgL_test7652z00_15440 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 691 */
BgL_test7652z00_15440 = 
(
(long)(BgL_curz00_14587)==((long)32))
; } 
if(BgL_test7652z00_15440)
{ 
long BgL_bufposz00_15450;long BgL_forwardz00_15448;long BgL_lastzd2matchzd2_15447;obj_t BgL_iportz00_15446;
BgL_iportz00_15446 = BgL_iportz00_14577; 
BgL_lastzd2matchzd2_15447 = BgL_newzd2matchzd2_14581; 
BgL_forwardz00_15448 = 
(((long)1)+BgL_forwardz00_14579); 
BgL_bufposz00_15450 = BgL_bufposz00_14580; 
BgL_bufposz00_14647 = BgL_bufposz00_15450; 
BgL_forwardz00_14646 = BgL_forwardz00_15448; 
BgL_lastzd2matchzd2_14645 = BgL_lastzd2matchzd2_15447; 
BgL_iportz00_14644 = BgL_iportz00_15446; 
goto BgL_statezd23zd21299z00_14574;}  else 
{ /* Unsafe/http.scm 691 */
BgL_matchz00_14674 = BgL_newzd2matchzd2_14581; } } } } } } } }  else 
{ /* Unsafe/http.scm 691 */
long BgL_arg1855z00_14641;
BgL_arg1855z00_14641 = 
(((long)1)+BgL_forwardz00_14633); 
{ /* Unsafe/http.scm 691 */
long BgL_newzd2matchzd2_14642;
{ /* Unsafe/http.scm 691 */
long BgL_res5458z00_14643;
BgL_res5458z00_14643 = 
RGC_STOP_MATCH(BgL_iportz00_14631, BgL_arg1855z00_14641); BgL_res5458z00_14643; } 
BgL_newzd2matchzd2_14642 = ((long)2); 
BgL_matchz00_14674 = BgL_newzd2matchzd2_14642; } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_14317); 
switch( BgL_matchz00_14674) { case ((long)2) : 

{ /* Unsafe/http.scm 716 */
obj_t BgL_c1z00_14679;
{ /* Unsafe/http.scm 691 */
bool_t BgL_test7654z00_15455;
{ /* Unsafe/http.scm 691 */
long BgL_arg1958z00_14670;
{ /* Unsafe/http.scm 691 */
long BgL_res5513z00_14671;
BgL_res5513z00_14671 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_14317); 
BgL_arg1958z00_14670 = BgL_res5513z00_14671; } 
BgL_test7654z00_15455 = 
(BgL_arg1958z00_14670==((long)0)); } 
if(BgL_test7654z00_15455)
{ /* Unsafe/http.scm 691 */
BgL_c1z00_14679 = BEOF; }  else 
{ /* Unsafe/http.scm 691 */
unsigned char BgL_res5515z00_14672;
BgL_res5515z00_14672 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_14317); 
BgL_c1z00_14679 = 
BCHAR(BgL_res5515z00_14672); } } 
{ /* Unsafe/http.scm 716 */
obj_t BgL_c2z00_14680;
BgL_c2z00_14680 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_iportz00_14317); 
{ /* Unsafe/http.scm 717 */
obj_t BgL_c3z00_14681;
BgL_c3z00_14681 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_iportz00_14317); 
{ /* Unsafe/http.scm 718 */
obj_t BgL_c4z00_14682;
BgL_c4z00_14682 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_iportz00_14317); 
{ /* Unsafe/http.scm 719 */
obj_t BgL_c5z00_14683;
BgL_c5z00_14683 = 
BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_iportz00_14317); 
{ /* Unsafe/http.scm 720 */

{ /* Unsafe/http.scm 721 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_arg1966z00_14684;
{ /* Unsafe/http.scm 721 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1311z00_14685;
{ /* Unsafe/http.scm 721 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1310z00_14686;
BgL_new1310z00_14686 = 
((BgL_z62iozd2parsezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2parsezd2errorz62_bgl) ))); 
{ /* Unsafe/http.scm 721 */
long BgL_arg1980z00_14687;
{ /* Unsafe/http.scm 721 */
long BgL_res5523z00_14688;
BgL_res5523z00_14688 = 
BGL_CLASS_INDEX(BGl_z62iozd2parsezd2errorz62zz__objectz00); 
BgL_arg1980z00_14687 = BgL_res5523z00_14688; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1310z00_14686), BgL_arg1980z00_14687); } 
BgL_new1311z00_14685 = BgL_new1310z00_14686; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1311z00_14685)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1311z00_14685)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_15472;
{ /* Unsafe/http.scm 721 */
obj_t BgL_arg1967z00_14689;
{ /* Unsafe/http.scm 721 */
obj_t BgL_arg1968z00_14690;
{ /* Unsafe/http.scm 721 */
obj_t BgL_res5524z00_14691;
{ /* Unsafe/http.scm 721 */
obj_t BgL_classz00_14692;
BgL_classz00_14692 = BGl_z62iozd2parsezd2errorz62zz__objectz00; 
BgL_res5524z00_14691 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_14692); } 
BgL_arg1968z00_14690 = BgL_res5524z00_14691; } 
BgL_arg1967z00_14689 = 
VECTOR_REF(BgL_arg1968z00_14690,((long)2)); } 
BgL_auxz00_15472 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1967z00_14689); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1311z00_14685)))->BgL_stackz00)=((obj_t)BgL_auxz00_15472),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1311z00_14685)))->BgL_procz00)=((obj_t)BGl_symbol7250z00zz__httpz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1311z00_14685)))->BgL_msgz00)=((obj_t)BGl_string7252z00zz__httpz00),BUNSPEC); 
{ 
obj_t BgL_auxz00_15482;
{ /* Unsafe/http.scm 724 */
bool_t BgL_test7655z00_15484;
{ /* Unsafe/http.scm 724 */
bool_t BgL_test7656z00_15485;
{ /* Unsafe/http.scm 724 */
bool_t BgL_res5525z00_14693;
BgL_res5525z00_14693 = 
EOF_OBJECTP(BgL_c1z00_14679); 
BgL_test7656z00_15485 = BgL_res5525z00_14693; } 
if(BgL_test7656z00_15485)
{ /* Unsafe/http.scm 724 */
BgL_test7655z00_15484 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 725 */
bool_t BgL_test7657z00_15487;
{ /* Unsafe/http.scm 725 */
bool_t BgL_res5526z00_14694;
BgL_res5526z00_14694 = 
EOF_OBJECTP(BgL_c2z00_14680); 
BgL_test7657z00_15487 = BgL_res5526z00_14694; } 
if(BgL_test7657z00_15487)
{ /* Unsafe/http.scm 725 */
BgL_test7655z00_15484 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 726 */
bool_t BgL_test7658z00_15489;
{ /* Unsafe/http.scm 726 */
bool_t BgL_res5527z00_14695;
BgL_res5527z00_14695 = 
EOF_OBJECTP(BgL_c3z00_14681); 
BgL_test7658z00_15489 = BgL_res5527z00_14695; } 
if(BgL_test7658z00_15489)
{ /* Unsafe/http.scm 726 */
BgL_test7655z00_15484 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 727 */
bool_t BgL_test7659z00_15491;
{ /* Unsafe/http.scm 727 */
bool_t BgL_res5528z00_14696;
BgL_res5528z00_14696 = 
EOF_OBJECTP(BgL_c4z00_14682); 
BgL_test7659z00_15491 = BgL_res5528z00_14696; } 
if(BgL_test7659z00_15491)
{ /* Unsafe/http.scm 727 */
BgL_test7655z00_15484 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 728 */
bool_t BgL_res5529z00_14697;
BgL_res5529z00_14697 = 
EOF_OBJECTP(BgL_c5z00_14683); 
BgL_test7655z00_15484 = BgL_res5529z00_14697; } } } } } 
if(BgL_test7655z00_15484)
{ /* Unsafe/http.scm 724 */
BgL_auxz00_15482 = BGl_string7253z00zz__httpz00
; }  else 
{ /* Unsafe/http.scm 730 */
obj_t BgL_arg1974z00_14698;
{ /* Unsafe/http.scm 730 */
obj_t BgL_list1975z00_14699;
{ /* Unsafe/http.scm 730 */
obj_t BgL_arg1976z00_14700;
{ /* Unsafe/http.scm 730 */
obj_t BgL_arg1977z00_14701;
{ /* Unsafe/http.scm 730 */
obj_t BgL_arg1978z00_14702;
{ /* Unsafe/http.scm 730 */
obj_t BgL_arg1979z00_14703;
BgL_arg1979z00_14703 = 
MAKE_YOUNG_PAIR(BgL_c5z00_14683, BNIL); 
BgL_arg1978z00_14702 = 
MAKE_YOUNG_PAIR(BgL_c4z00_14682, BgL_arg1979z00_14703); } 
BgL_arg1977z00_14701 = 
MAKE_YOUNG_PAIR(BgL_c3z00_14681, BgL_arg1978z00_14702); } 
BgL_arg1976z00_14700 = 
MAKE_YOUNG_PAIR(BgL_c2z00_14680, BgL_arg1977z00_14701); } 
BgL_list1975z00_14699 = 
MAKE_YOUNG_PAIR(BgL_c1z00_14679, BgL_arg1976z00_14700); } 
{ /* Unsafe/http.scm 730 */
obj_t BgL_res5530z00_14704;
BgL_res5530z00_14704 = 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_list1975z00_14699); 
BgL_arg1974z00_14698 = BgL_res5530z00_14704; } } 
{ /* Unsafe/http.scm 730 */
obj_t BgL_res5531z00_14705;
BgL_res5531z00_14705 = 
string_for_read(BgL_arg1974z00_14698); 
BgL_auxz00_15482 = BgL_res5531z00_14705; } } } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1311z00_14685)))->BgL_objz00)=((obj_t)BgL_auxz00_15482),BUNSPEC); } 
BgL_arg1966z00_14684 = BgL_new1311z00_14685; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1966z00_14684));} } } } } } } break;case ((long)1) : 

if(
CBOOL(BgL_opz00_14318))
{ /* Unsafe/http.scm 712 */
obj_t BgL_arg1985z00_14706;
{ /* Unsafe/http.scm 712 */
obj_t BgL_res5534z00_14707;
{ /* Unsafe/http.scm 691 */
long BgL_arg1884z00_14708;
{ /* Unsafe/http.scm 691 */
long BgL_res5532z00_14709;
BgL_res5532z00_14709 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_14317); 
BgL_arg1884z00_14708 = BgL_res5532z00_14709; } 
BgL_res5534z00_14707 = 
rgc_buffer_substring(BgL_iportz00_14317, ((long)0), BgL_arg1884z00_14708); } 
BgL_arg1985z00_14706 = BgL_res5534z00_14707; } 
bgl_display_obj(BgL_arg1985z00_14706, BgL_opz00_14318); }  else 
{ /* Unsafe/http.scm 712 */BFALSE; } 
{ /* Unsafe/http.scm 713 */
long BgL_lz00_14710;
{ /* Unsafe/http.scm 691 */
long BgL_res5535z00_14711;
BgL_res5535z00_14711 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_14317); 
BgL_lz00_14710 = BgL_res5535z00_14711; } 
{ /* Unsafe/http.scm 714 */
obj_t BgL_arg1986z00_14712;
{ /* Unsafe/http.scm 714 */
long BgL_arg1987z00_14713;
BgL_arg1987z00_14713 = 
(BgL_lz00_14710-((long)2)); 
BgL_arg1986z00_14712 = 
BGl_thezd2substringze70z35zz__httpz00(BgL_iportz00_14317, 
(int)(((long)0)), 
(int)(BgL_arg1987z00_14713)); } 
{ /* Unsafe/http.scm 714 */
long BgL_tmpz00_15514;
{ /* Unsafe/http.scm 714 */
char * BgL_tmpz00_15515;
BgL_tmpz00_15515 = 
BSTRING_TO_STRING(BgL_arg1986z00_14712); 
BgL_tmpz00_15514 = 
BGL_STRTOL(BgL_tmpz00_15515, ((long)0), ((long)16)); } 
return 
BINT(BgL_tmpz00_15514);} } } break;case ((long)0) : 

if(
CBOOL(BgL_opz00_14318))
{ /* Unsafe/http.scm 696 */
obj_t BgL_arg1988z00_14714;
{ /* Unsafe/http.scm 696 */
obj_t BgL_res5539z00_14715;
{ /* Unsafe/http.scm 691 */
long BgL_arg1884z00_14716;
{ /* Unsafe/http.scm 691 */
long BgL_res5537z00_14717;
BgL_res5537z00_14717 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_14317); 
BgL_arg1884z00_14716 = BgL_res5537z00_14717; } 
BgL_res5539z00_14715 = 
rgc_buffer_substring(BgL_iportz00_14317, ((long)0), BgL_arg1884z00_14716); } 
BgL_arg1988z00_14714 = BgL_res5539z00_14715; } 
bgl_display_obj(BgL_arg1988z00_14714, BgL_opz00_14318); }  else 
{ /* Unsafe/http.scm 696 */BFALSE; } 
{ /* Unsafe/http.scm 697 */
long BgL_sza7za7_14718;
{ /* Unsafe/http.scm 698 */
obj_t BgL_arg2183z00_14719;
{ /* Unsafe/http.scm 698 */
long BgL_arg2184z00_14720;
{ /* Unsafe/http.scm 698 */
long BgL_arg2185z00_14721;
{ /* Unsafe/http.scm 691 */
long BgL_res5540z00_14722;
BgL_res5540z00_14722 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_14317); 
BgL_arg2185z00_14721 = BgL_res5540z00_14722; } 
BgL_arg2184z00_14720 = 
(BgL_arg2185z00_14721-((long)1)); } 
BgL_arg2183z00_14719 = 
BGl_thezd2substringze70z35zz__httpz00(BgL_iportz00_14317, 
(int)(((long)0)), 
(int)(BgL_arg2184z00_14720)); } 
{ /* Unsafe/http.scm 697 */
char * BgL_tmpz00_15529;
BgL_tmpz00_15529 = 
BSTRING_TO_STRING(BgL_arg2183z00_14719); 
BgL_sza7za7_14718 = 
BGL_STRTOL(BgL_tmpz00_15529, ((long)0), ((long)16)); } } 
{ 
obj_t BgL_iportz00_14884;long BgL_lastzd2matchzd2_14885;long BgL_forwardz00_14886;long BgL_bufposz00_14887;obj_t BgL_iportz00_14874;long BgL_lastzd2matchzd2_14875;long BgL_forwardz00_14876;long BgL_bufposz00_14877;obj_t BgL_iportz00_14861;long BgL_lastzd2matchzd2_14862;long BgL_forwardz00_14863;long BgL_bufposz00_14864;obj_t BgL_iportz00_14851;long BgL_lastzd2matchzd2_14852;long BgL_forwardz00_14853;long BgL_bufposz00_14854;obj_t BgL_iportz00_14838;long BgL_lastzd2matchzd2_14839;long BgL_forwardz00_14840;long BgL_bufposz00_14841;obj_t BgL_iportz00_14828;long BgL_lastzd2matchzd2_14829;long BgL_forwardz00_14830;long BgL_bufposz00_14831;obj_t BgL_iportz00_14815;long BgL_lastzd2matchzd2_14816;long BgL_forwardz00_14817;long BgL_bufposz00_14818;obj_t BgL_iportz00_14805;long BgL_lastzd2matchzd2_14806;long BgL_forwardz00_14807;long BgL_bufposz00_14808;obj_t BgL_iportz00_14792;long BgL_lastzd2matchzd2_14793;long BgL_forwardz00_14794;long BgL_bufposz00_14795;obj_t BgL_iportz00_14782;long BgL_lastzd2matchzd2_14783;long BgL_forwardz00_14784;long BgL_bufposz00_14785;obj_t BgL_iportz00_14770;long BgL_lastzd2matchzd2_14771;long BgL_forwardz00_14772;long BgL_bufposz00_14773;
{ /* Unsafe/http.scm 700 */
long BgL_res5651z00_14736;
BgL_res5651z00_14736 = 
RGC_START_MATCH(BgL_iportz00_14317); BgL_res5651z00_14736; } 
{ /* Unsafe/http.scm 700 */
long BgL_matchz00_14737;
{ /* Unsafe/http.scm 700 */
long BgL_arg2181z00_14738;long BgL_arg2182z00_14739;
{ /* Unsafe/http.scm 700 */
long BgL_res5652z00_14740;
BgL_res5652z00_14740 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14317); 
BgL_arg2181z00_14738 = BgL_res5652z00_14740; } 
{ /* Unsafe/http.scm 700 */
long BgL_res5653z00_14741;
BgL_res5653z00_14741 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14317); 
BgL_arg2182z00_14739 = BgL_res5653z00_14741; } 
{ 
long BgL_forwardz00_14743;long BgL_bufposz00_14744;
BgL_forwardz00_14743 = BgL_arg2181z00_14738; 
BgL_bufposz00_14744 = BgL_arg2182z00_14739; 
BgL_statezd20zd21312z00_14742:
if(
(BgL_forwardz00_14743==BgL_bufposz00_14744))
{ /* Unsafe/http.scm 700 */
if(
rgc_fill_buffer(BgL_iportz00_14317))
{ /* Unsafe/http.scm 700 */
long BgL_arg2039z00_14745;long BgL_arg2040z00_14746;
{ /* Unsafe/http.scm 700 */
long BgL_res5595z00_14747;
BgL_res5595z00_14747 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14317); 
BgL_arg2039z00_14745 = BgL_res5595z00_14747; } 
{ /* Unsafe/http.scm 700 */
long BgL_res5596z00_14748;
BgL_res5596z00_14748 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14317); 
BgL_arg2040z00_14746 = BgL_res5596z00_14748; } 
{ 
long BgL_bufposz00_15542;long BgL_forwardz00_15541;
BgL_forwardz00_15541 = BgL_arg2039z00_14745; 
BgL_bufposz00_15542 = BgL_arg2040z00_14746; 
BgL_bufposz00_14744 = BgL_bufposz00_15542; 
BgL_forwardz00_14743 = BgL_forwardz00_15541; 
goto BgL_statezd20zd21312z00_14742;} }  else 
{ /* Unsafe/http.scm 700 */
BgL_matchz00_14737 = ((long)1); } }  else 
{ /* Unsafe/http.scm 700 */
int BgL_curz00_14749;
{ /* Unsafe/http.scm 700 */
int BgL_res5597z00_14750;
BgL_res5597z00_14750 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14317, BgL_forwardz00_14743); 
BgL_curz00_14749 = BgL_res5597z00_14750; } 
{ /* Unsafe/http.scm 700 */

if(
(
(long)(BgL_curz00_14749)==((long)13)))
{ /* Unsafe/http.scm 700 */
BgL_iportz00_14884 = BgL_iportz00_14317; 
BgL_lastzd2matchzd2_14885 = ((long)1); 
BgL_forwardz00_14886 = 
(((long)1)+BgL_forwardz00_14743); 
BgL_bufposz00_14887 = BgL_bufposz00_14744; 
BgL_statezd22zd21314z00_14735:
{ /* Unsafe/http.scm 700 */
long BgL_newzd2matchzd2_14888;
{ /* Unsafe/http.scm 700 */
long BgL_res5543z00_14889;
BgL_res5543z00_14889 = 
RGC_STOP_MATCH(BgL_iportz00_14884, BgL_forwardz00_14886); BgL_res5543z00_14889; } 
BgL_newzd2matchzd2_14888 = ((long)1); 
if(
(BgL_forwardz00_14886==BgL_bufposz00_14887))
{ /* Unsafe/http.scm 700 */
if(
rgc_fill_buffer(BgL_iportz00_14884))
{ /* Unsafe/http.scm 700 */
long BgL_arg1992z00_14890;long BgL_arg1993z00_14891;
{ /* Unsafe/http.scm 700 */
long BgL_res5546z00_14892;
BgL_res5546z00_14892 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14884); 
BgL_arg1992z00_14890 = BgL_res5546z00_14892; } 
{ /* Unsafe/http.scm 700 */
long BgL_res5547z00_14893;
BgL_res5547z00_14893 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14884); 
BgL_arg1993z00_14891 = BgL_res5547z00_14893; } 
{ 
long BgL_bufposz00_15555;long BgL_forwardz00_15554;
BgL_forwardz00_15554 = BgL_arg1992z00_14890; 
BgL_bufposz00_15555 = BgL_arg1993z00_14891; 
BgL_bufposz00_14887 = BgL_bufposz00_15555; 
BgL_forwardz00_14886 = BgL_forwardz00_15554; 
goto BgL_statezd22zd21314z00_14735;} }  else 
{ /* Unsafe/http.scm 700 */
BgL_matchz00_14737 = BgL_newzd2matchzd2_14888; } }  else 
{ /* Unsafe/http.scm 700 */
int BgL_curz00_14894;
{ /* Unsafe/http.scm 700 */
int BgL_res5548z00_14895;
BgL_res5548z00_14895 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14884, BgL_forwardz00_14886); 
BgL_curz00_14894 = BgL_res5548z00_14895; } 
{ /* Unsafe/http.scm 700 */

if(
(
(long)(BgL_curz00_14894)==((long)10)))
{ /* Unsafe/http.scm 700 */
BgL_matchz00_14737 = BgL_newzd2matchzd2_14888; }  else 
{ /* Unsafe/http.scm 700 */
BgL_iportz00_14782 = BgL_iportz00_14884; 
BgL_lastzd2matchzd2_14783 = BgL_newzd2matchzd2_14888; 
BgL_forwardz00_14784 = 
(((long)1)+BgL_forwardz00_14886); 
BgL_bufposz00_14785 = BgL_bufposz00_14887; 
BgL_statezd23zd21315z00_14726:
if(
(BgL_forwardz00_14784==BgL_bufposz00_14785))
{ /* Unsafe/http.scm 700 */
if(
rgc_fill_buffer(BgL_iportz00_14782))
{ /* Unsafe/http.scm 700 */
long BgL_arg2071z00_14786;long BgL_arg2072z00_14787;
{ /* Unsafe/http.scm 700 */
long BgL_res5629z00_14788;
BgL_res5629z00_14788 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14782); 
BgL_arg2071z00_14786 = BgL_res5629z00_14788; } 
{ /* Unsafe/http.scm 700 */
long BgL_res5630z00_14789;
BgL_res5630z00_14789 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14782); 
BgL_arg2072z00_14787 = BgL_res5630z00_14789; } 
{ 
long BgL_bufposz00_15567;long BgL_forwardz00_15566;
BgL_forwardz00_15566 = BgL_arg2071z00_14786; 
BgL_bufposz00_15567 = BgL_arg2072z00_14787; 
BgL_bufposz00_14785 = BgL_bufposz00_15567; 
BgL_forwardz00_14784 = BgL_forwardz00_15566; 
goto BgL_statezd23zd21315z00_14726;} }  else 
{ /* Unsafe/http.scm 700 */
BgL_matchz00_14737 = BgL_lastzd2matchzd2_14783; } }  else 
{ /* Unsafe/http.scm 700 */
int BgL_curz00_14790;
{ /* Unsafe/http.scm 700 */
int BgL_res5631z00_14791;
BgL_res5631z00_14791 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14782, BgL_forwardz00_14784); 
BgL_curz00_14790 = BgL_res5631z00_14791; } 
{ /* Unsafe/http.scm 700 */

if(
(
(long)(BgL_curz00_14790)==((long)13)))
{ /* Unsafe/http.scm 700 */
BgL_iportz00_14792 = BgL_iportz00_14782; 
BgL_lastzd2matchzd2_14793 = BgL_lastzd2matchzd2_14783; 
BgL_forwardz00_14794 = 
(((long)1)+BgL_forwardz00_14784); 
BgL_bufposz00_14795 = BgL_bufposz00_14785; 
BgL_statezd26zd21318z00_14727:
if(
(BgL_forwardz00_14794==BgL_bufposz00_14795))
{ /* Unsafe/http.scm 700 */
if(
rgc_fill_buffer(BgL_iportz00_14792))
{ /* Unsafe/http.scm 700 */
long BgL_arg2063z00_14796;long BgL_arg2064z00_14797;
{ /* Unsafe/http.scm 700 */
long BgL_res5620z00_14798;
BgL_res5620z00_14798 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14792); 
BgL_arg2063z00_14796 = BgL_res5620z00_14798; } 
{ /* Unsafe/http.scm 700 */
long BgL_res5621z00_14799;
BgL_res5621z00_14799 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14792); 
BgL_arg2064z00_14797 = BgL_res5621z00_14799; } 
{ 
long BgL_bufposz00_15579;long BgL_forwardz00_15578;
BgL_forwardz00_15578 = BgL_arg2063z00_14796; 
BgL_bufposz00_15579 = BgL_arg2064z00_14797; 
BgL_bufposz00_14795 = BgL_bufposz00_15579; 
BgL_forwardz00_14794 = BgL_forwardz00_15578; 
goto BgL_statezd26zd21318z00_14727;} }  else 
{ /* Unsafe/http.scm 700 */
BgL_matchz00_14737 = BgL_lastzd2matchzd2_14793; } }  else 
{ /* Unsafe/http.scm 700 */
int BgL_curz00_14800;
{ /* Unsafe/http.scm 700 */
int BgL_res5622z00_14801;
BgL_res5622z00_14801 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14792, BgL_forwardz00_14794); 
BgL_curz00_14800 = BgL_res5622z00_14801; } 
{ /* Unsafe/http.scm 700 */

if(
(
(long)(BgL_curz00_14800)==((long)10)))
{ /* Unsafe/http.scm 700 */
long BgL_arg2066z00_14802;
BgL_arg2066z00_14802 = 
(((long)1)+BgL_forwardz00_14794); 
{ /* Unsafe/http.scm 700 */
long BgL_newzd2matchzd2_14803;
{ /* Unsafe/http.scm 700 */
long BgL_res5625z00_14804;
BgL_res5625z00_14804 = 
RGC_STOP_MATCH(BgL_iportz00_14792, BgL_arg2066z00_14802); BgL_res5625z00_14804; } 
BgL_newzd2matchzd2_14803 = ((long)0); 
BgL_matchz00_14737 = BgL_newzd2matchzd2_14803; } }  else 
{ /* Unsafe/http.scm 700 */
BgL_iportz00_14805 = BgL_iportz00_14792; 
BgL_lastzd2matchzd2_14806 = BgL_lastzd2matchzd2_14793; 
BgL_forwardz00_14807 = 
(((long)1)+BgL_forwardz00_14794); 
BgL_bufposz00_14808 = BgL_bufposz00_14795; 
BgL_statezd27zd21319z00_14728:
if(
(BgL_forwardz00_14807==BgL_bufposz00_14808))
{ /* Unsafe/http.scm 700 */
if(
rgc_fill_buffer(BgL_iportz00_14805))
{ /* Unsafe/http.scm 700 */
long BgL_arg2055z00_14809;long BgL_arg2056z00_14810;
{ /* Unsafe/http.scm 700 */
long BgL_res5612z00_14811;
BgL_res5612z00_14811 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14805); 
BgL_arg2055z00_14809 = BgL_res5612z00_14811; } 
{ /* Unsafe/http.scm 700 */
long BgL_res5613z00_14812;
BgL_res5613z00_14812 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14805); 
BgL_arg2056z00_14810 = BgL_res5613z00_14812; } 
{ 
long BgL_bufposz00_15593;long BgL_forwardz00_15592;
BgL_forwardz00_15592 = BgL_arg2055z00_14809; 
BgL_bufposz00_15593 = BgL_arg2056z00_14810; 
BgL_bufposz00_14808 = BgL_bufposz00_15593; 
BgL_forwardz00_14807 = BgL_forwardz00_15592; 
goto BgL_statezd27zd21319z00_14728;} }  else 
{ /* Unsafe/http.scm 700 */
BgL_matchz00_14737 = BgL_lastzd2matchzd2_14806; } }  else 
{ /* Unsafe/http.scm 700 */
int BgL_curz00_14813;
{ /* Unsafe/http.scm 700 */
int BgL_res5614z00_14814;
BgL_res5614z00_14814 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14805, BgL_forwardz00_14807); 
BgL_curz00_14813 = BgL_res5614z00_14814; } 
{ /* Unsafe/http.scm 700 */

if(
(
(long)(BgL_curz00_14813)==((long)13)))
{ /* Unsafe/http.scm 700 */
BgL_iportz00_14838 = BgL_iportz00_14805; 
BgL_lastzd2matchzd2_14839 = BgL_lastzd2matchzd2_14806; 
BgL_forwardz00_14840 = 
(((long)1)+BgL_forwardz00_14807); 
BgL_bufposz00_14841 = BgL_bufposz00_14808; 
BgL_statezd29zd21321z00_14731:
if(
(BgL_forwardz00_14840==BgL_bufposz00_14841))
{ /* Unsafe/http.scm 700 */
if(
rgc_fill_buffer(BgL_iportz00_14838))
{ /* Unsafe/http.scm 700 */
long BgL_arg2023z00_14842;long BgL_arg2024z00_14843;
{ /* Unsafe/http.scm 700 */
long BgL_res5578z00_14844;
BgL_res5578z00_14844 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14838); 
BgL_arg2023z00_14842 = BgL_res5578z00_14844; } 
{ /* Unsafe/http.scm 700 */
long BgL_res5579z00_14845;
BgL_res5579z00_14845 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14838); 
BgL_arg2024z00_14843 = BgL_res5579z00_14845; } 
{ 
long BgL_bufposz00_15605;long BgL_forwardz00_15604;
BgL_forwardz00_15604 = BgL_arg2023z00_14842; 
BgL_bufposz00_15605 = BgL_arg2024z00_14843; 
BgL_bufposz00_14841 = BgL_bufposz00_15605; 
BgL_forwardz00_14840 = BgL_forwardz00_15604; 
goto BgL_statezd29zd21321z00_14731;} }  else 
{ /* Unsafe/http.scm 700 */
BgL_matchz00_14737 = BgL_lastzd2matchzd2_14839; } }  else 
{ /* Unsafe/http.scm 700 */
int BgL_curz00_14846;
{ /* Unsafe/http.scm 700 */
int BgL_res5580z00_14847;
BgL_res5580z00_14847 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14838, BgL_forwardz00_14840); 
BgL_curz00_14846 = BgL_res5580z00_14847; } 
{ /* Unsafe/http.scm 700 */

if(
(
(long)(BgL_curz00_14846)==((long)10)))
{ /* Unsafe/http.scm 700 */
long BgL_arg2026z00_14848;
BgL_arg2026z00_14848 = 
(((long)1)+BgL_forwardz00_14840); 
{ /* Unsafe/http.scm 700 */
long BgL_newzd2matchzd2_14849;
{ /* Unsafe/http.scm 700 */
long BgL_res5583z00_14850;
BgL_res5583z00_14850 = 
RGC_STOP_MATCH(BgL_iportz00_14838, BgL_arg2026z00_14848); BgL_res5583z00_14850; } 
BgL_newzd2matchzd2_14849 = ((long)0); 
BgL_matchz00_14737 = BgL_newzd2matchzd2_14849; } }  else 
{ 
long BgL_bufposz00_15616;long BgL_forwardz00_15614;long BgL_lastzd2matchzd2_15613;obj_t BgL_iportz00_15612;
BgL_iportz00_15612 = BgL_iportz00_14838; 
BgL_lastzd2matchzd2_15613 = BgL_lastzd2matchzd2_14839; 
BgL_forwardz00_15614 = 
(((long)1)+BgL_forwardz00_14840); 
BgL_bufposz00_15616 = BgL_bufposz00_14841; 
BgL_bufposz00_14808 = BgL_bufposz00_15616; 
BgL_forwardz00_14807 = BgL_forwardz00_15614; 
BgL_lastzd2matchzd2_14806 = BgL_lastzd2matchzd2_15613; 
BgL_iportz00_14805 = BgL_iportz00_15612; 
goto BgL_statezd27zd21319z00_14728;} } } }  else 
{ /* Unsafe/http.scm 700 */
BgL_iportz00_14851 = BgL_iportz00_14805; 
BgL_lastzd2matchzd2_14852 = BgL_lastzd2matchzd2_14806; 
BgL_forwardz00_14853 = 
(((long)1)+BgL_forwardz00_14807); 
BgL_bufposz00_14854 = BgL_bufposz00_14808; 
BgL_statezd25zd21317z00_14732:
if(
(BgL_forwardz00_14853==BgL_bufposz00_14854))
{ /* Unsafe/http.scm 700 */
if(
rgc_fill_buffer(BgL_iportz00_14851))
{ /* Unsafe/http.scm 700 */
long BgL_arg2015z00_14855;long BgL_arg2016z00_14856;
{ /* Unsafe/http.scm 700 */
long BgL_res5570z00_14857;
BgL_res5570z00_14857 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14851); 
BgL_arg2015z00_14855 = BgL_res5570z00_14857; } 
{ /* Unsafe/http.scm 700 */
long BgL_res5571z00_14858;
BgL_res5571z00_14858 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14851); 
BgL_arg2016z00_14856 = BgL_res5571z00_14858; } 
{ 
long BgL_bufposz00_15625;long BgL_forwardz00_15624;
BgL_forwardz00_15624 = BgL_arg2015z00_14855; 
BgL_bufposz00_15625 = BgL_arg2016z00_14856; 
BgL_bufposz00_14854 = BgL_bufposz00_15625; 
BgL_forwardz00_14853 = BgL_forwardz00_15624; 
goto BgL_statezd25zd21317z00_14732;} }  else 
{ /* Unsafe/http.scm 700 */
BgL_matchz00_14737 = BgL_lastzd2matchzd2_14852; } }  else 
{ /* Unsafe/http.scm 700 */
int BgL_curz00_14859;
{ /* Unsafe/http.scm 700 */
int BgL_res5572z00_14860;
BgL_res5572z00_14860 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14851, BgL_forwardz00_14853); 
BgL_curz00_14859 = BgL_res5572z00_14860; } 
{ /* Unsafe/http.scm 700 */

if(
(
(long)(BgL_curz00_14859)==((long)13)))
{ /* Unsafe/http.scm 700 */
BgL_iportz00_14815 = BgL_iportz00_14851; 
BgL_lastzd2matchzd2_14816 = BgL_lastzd2matchzd2_14852; 
BgL_forwardz00_14817 = 
(((long)1)+BgL_forwardz00_14853); 
BgL_bufposz00_14818 = BgL_bufposz00_14854; 
BgL_statezd210zd21322z00_14729:
if(
(BgL_forwardz00_14817==BgL_bufposz00_14818))
{ /* Unsafe/http.scm 700 */
if(
rgc_fill_buffer(BgL_iportz00_14815))
{ /* Unsafe/http.scm 700 */
long BgL_arg2047z00_14819;long BgL_arg2048z00_14820;
{ /* Unsafe/http.scm 700 */
long BgL_res5603z00_14821;
BgL_res5603z00_14821 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14815); 
BgL_arg2047z00_14819 = BgL_res5603z00_14821; } 
{ /* Unsafe/http.scm 700 */
long BgL_res5604z00_14822;
BgL_res5604z00_14822 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14815); 
BgL_arg2048z00_14820 = BgL_res5604z00_14822; } 
{ 
long BgL_bufposz00_15637;long BgL_forwardz00_15636;
BgL_forwardz00_15636 = BgL_arg2047z00_14819; 
BgL_bufposz00_15637 = BgL_arg2048z00_14820; 
BgL_bufposz00_14818 = BgL_bufposz00_15637; 
BgL_forwardz00_14817 = BgL_forwardz00_15636; 
goto BgL_statezd210zd21322z00_14729;} }  else 
{ /* Unsafe/http.scm 700 */
BgL_matchz00_14737 = BgL_lastzd2matchzd2_14816; } }  else 
{ /* Unsafe/http.scm 700 */
int BgL_curz00_14823;
{ /* Unsafe/http.scm 700 */
int BgL_res5605z00_14824;
BgL_res5605z00_14824 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14815, BgL_forwardz00_14817); 
BgL_curz00_14823 = BgL_res5605z00_14824; } 
{ /* Unsafe/http.scm 700 */

if(
(
(long)(BgL_curz00_14823)==((long)10)))
{ /* Unsafe/http.scm 700 */
long BgL_arg2050z00_14825;
BgL_arg2050z00_14825 = 
(((long)1)+BgL_forwardz00_14817); 
{ /* Unsafe/http.scm 700 */
long BgL_newzd2matchzd2_14826;
{ /* Unsafe/http.scm 700 */
long BgL_res5608z00_14827;
BgL_res5608z00_14827 = 
RGC_STOP_MATCH(BgL_iportz00_14815, BgL_arg2050z00_14825); BgL_res5608z00_14827; } 
BgL_newzd2matchzd2_14826 = ((long)0); 
BgL_matchz00_14737 = BgL_newzd2matchzd2_14826; } }  else 
{ /* Unsafe/http.scm 700 */
BgL_iportz00_14874 = BgL_iportz00_14815; 
BgL_lastzd2matchzd2_14875 = BgL_lastzd2matchzd2_14816; 
BgL_forwardz00_14876 = 
(((long)1)+BgL_forwardz00_14817); 
BgL_bufposz00_14877 = BgL_bufposz00_14818; 
BgL_statezd211zd21323z00_14734:
if(
(BgL_forwardz00_14876==BgL_bufposz00_14877))
{ /* Unsafe/http.scm 700 */
if(
rgc_fill_buffer(BgL_iportz00_14874))
{ /* Unsafe/http.scm 700 */
long BgL_arg1999z00_14878;long BgL_arg2000z00_14879;
{ /* Unsafe/http.scm 700 */
long BgL_res5553z00_14880;
BgL_res5553z00_14880 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14874); 
BgL_arg1999z00_14878 = BgL_res5553z00_14880; } 
{ /* Unsafe/http.scm 700 */
long BgL_res5554z00_14881;
BgL_res5554z00_14881 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14874); 
BgL_arg2000z00_14879 = BgL_res5554z00_14881; } 
{ 
long BgL_bufposz00_15651;long BgL_forwardz00_15650;
BgL_forwardz00_15650 = BgL_arg1999z00_14878; 
BgL_bufposz00_15651 = BgL_arg2000z00_14879; 
BgL_bufposz00_14877 = BgL_bufposz00_15651; 
BgL_forwardz00_14876 = BgL_forwardz00_15650; 
goto BgL_statezd211zd21323z00_14734;} }  else 
{ /* Unsafe/http.scm 700 */
BgL_matchz00_14737 = BgL_lastzd2matchzd2_14875; } }  else 
{ /* Unsafe/http.scm 700 */
int BgL_curz00_14882;
{ /* Unsafe/http.scm 700 */
int BgL_res5555z00_14883;
BgL_res5555z00_14883 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14874, BgL_forwardz00_14876); 
BgL_curz00_14882 = BgL_res5555z00_14883; } 
{ /* Unsafe/http.scm 700 */

if(
(
(long)(BgL_curz00_14882)==((long)13)))
{ /* Unsafe/http.scm 700 */
BgL_iportz00_14861 = BgL_iportz00_14874; 
BgL_lastzd2matchzd2_14862 = BgL_lastzd2matchzd2_14875; 
BgL_forwardz00_14863 = 
(((long)1)+BgL_forwardz00_14876); 
BgL_bufposz00_14864 = BgL_bufposz00_14877; 
BgL_statezd212zd21324z00_14733:
if(
(BgL_forwardz00_14863==BgL_bufposz00_14864))
{ /* Unsafe/http.scm 700 */
if(
rgc_fill_buffer(BgL_iportz00_14861))
{ /* Unsafe/http.scm 700 */
long BgL_arg2007z00_14865;long BgL_arg2008z00_14866;
{ /* Unsafe/http.scm 700 */
long BgL_res5561z00_14867;
BgL_res5561z00_14867 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14861); 
BgL_arg2007z00_14865 = BgL_res5561z00_14867; } 
{ /* Unsafe/http.scm 700 */
long BgL_res5562z00_14868;
BgL_res5562z00_14868 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14861); 
BgL_arg2008z00_14866 = BgL_res5562z00_14868; } 
{ 
long BgL_bufposz00_15663;long BgL_forwardz00_15662;
BgL_forwardz00_15662 = BgL_arg2007z00_14865; 
BgL_bufposz00_15663 = BgL_arg2008z00_14866; 
BgL_bufposz00_14864 = BgL_bufposz00_15663; 
BgL_forwardz00_14863 = BgL_forwardz00_15662; 
goto BgL_statezd212zd21324z00_14733;} }  else 
{ /* Unsafe/http.scm 700 */
BgL_matchz00_14737 = BgL_lastzd2matchzd2_14862; } }  else 
{ /* Unsafe/http.scm 700 */
int BgL_curz00_14869;
{ /* Unsafe/http.scm 700 */
int BgL_res5563z00_14870;
BgL_res5563z00_14870 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14861, BgL_forwardz00_14863); 
BgL_curz00_14869 = BgL_res5563z00_14870; } 
{ /* Unsafe/http.scm 700 */

if(
(
(long)(BgL_curz00_14869)==((long)10)))
{ /* Unsafe/http.scm 700 */
long BgL_arg2010z00_14871;
BgL_arg2010z00_14871 = 
(((long)1)+BgL_forwardz00_14863); 
{ /* Unsafe/http.scm 700 */
long BgL_newzd2matchzd2_14872;
{ /* Unsafe/http.scm 700 */
long BgL_res5566z00_14873;
BgL_res5566z00_14873 = 
RGC_STOP_MATCH(BgL_iportz00_14861, BgL_arg2010z00_14871); BgL_res5566z00_14873; } 
BgL_newzd2matchzd2_14872 = ((long)0); 
BgL_matchz00_14737 = BgL_newzd2matchzd2_14872; } }  else 
{ 
long BgL_bufposz00_15674;long BgL_forwardz00_15672;long BgL_lastzd2matchzd2_15671;obj_t BgL_iportz00_15670;
BgL_iportz00_15670 = BgL_iportz00_14861; 
BgL_lastzd2matchzd2_15671 = BgL_lastzd2matchzd2_14862; 
BgL_forwardz00_15672 = 
(((long)1)+BgL_forwardz00_14863); 
BgL_bufposz00_15674 = BgL_bufposz00_14864; 
BgL_bufposz00_14877 = BgL_bufposz00_15674; 
BgL_forwardz00_14876 = BgL_forwardz00_15672; 
BgL_lastzd2matchzd2_14875 = BgL_lastzd2matchzd2_15671; 
BgL_iportz00_14874 = BgL_iportz00_15670; 
goto BgL_statezd211zd21323z00_14734;} } } }  else 
{ 
long BgL_bufposz00_15680;long BgL_forwardz00_15678;long BgL_lastzd2matchzd2_15677;obj_t BgL_iportz00_15676;
BgL_iportz00_15676 = BgL_iportz00_14874; 
BgL_lastzd2matchzd2_15677 = BgL_lastzd2matchzd2_14875; 
BgL_forwardz00_15678 = 
(((long)1)+BgL_forwardz00_14876); 
BgL_bufposz00_15680 = BgL_bufposz00_14877; 
BgL_bufposz00_14854 = BgL_bufposz00_15680; 
BgL_forwardz00_14853 = BgL_forwardz00_15678; 
BgL_lastzd2matchzd2_14852 = BgL_lastzd2matchzd2_15677; 
BgL_iportz00_14851 = BgL_iportz00_15676; 
goto BgL_statezd25zd21317z00_14732;} } } } } } }  else 
{ 
long BgL_forwardz00_15683;
BgL_forwardz00_15683 = 
(((long)1)+BgL_forwardz00_14853); 
BgL_forwardz00_14853 = BgL_forwardz00_15683; 
goto BgL_statezd25zd21317z00_14732;} } } } } } } } } }  else 
{ 
long BgL_bufposz00_15692;long BgL_forwardz00_15690;long BgL_lastzd2matchzd2_15689;obj_t BgL_iportz00_15688;
BgL_iportz00_15688 = BgL_iportz00_14782; 
BgL_lastzd2matchzd2_15689 = BgL_lastzd2matchzd2_14783; 
BgL_forwardz00_15690 = 
(((long)1)+BgL_forwardz00_14784); 
BgL_bufposz00_15692 = BgL_bufposz00_14785; 
BgL_bufposz00_14854 = BgL_bufposz00_15692; 
BgL_forwardz00_14853 = BgL_forwardz00_15690; 
BgL_lastzd2matchzd2_14852 = BgL_lastzd2matchzd2_15689; 
BgL_iportz00_14851 = BgL_iportz00_15688; 
goto BgL_statezd25zd21317z00_14732;} } } } } } } }  else 
{ /* Unsafe/http.scm 700 */
BgL_iportz00_14770 = BgL_iportz00_14317; 
BgL_lastzd2matchzd2_14771 = ((long)1); 
BgL_forwardz00_14772 = 
(((long)1)+BgL_forwardz00_14743); 
BgL_bufposz00_14773 = BgL_bufposz00_14744; 
BgL_statezd21zd21313z00_14725:
{ /* Unsafe/http.scm 700 */
long BgL_newzd2matchzd2_14774;
{ /* Unsafe/http.scm 700 */
long BgL_res5635z00_14775;
BgL_res5635z00_14775 = 
RGC_STOP_MATCH(BgL_iportz00_14770, BgL_forwardz00_14772); BgL_res5635z00_14775; } 
BgL_newzd2matchzd2_14774 = ((long)1); 
if(
(BgL_forwardz00_14772==BgL_bufposz00_14773))
{ /* Unsafe/http.scm 700 */
if(
rgc_fill_buffer(BgL_iportz00_14770))
{ /* Unsafe/http.scm 700 */
long BgL_arg2079z00_14776;long BgL_arg2080z00_14777;
{ /* Unsafe/http.scm 700 */
long BgL_res5638z00_14778;
BgL_res5638z00_14778 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14770); 
BgL_arg2079z00_14776 = BgL_res5638z00_14778; } 
{ /* Unsafe/http.scm 700 */
long BgL_res5639z00_14779;
BgL_res5639z00_14779 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14770); 
BgL_arg2080z00_14777 = BgL_res5639z00_14779; } 
{ 
long BgL_bufposz00_15703;long BgL_forwardz00_15702;
BgL_forwardz00_15702 = BgL_arg2079z00_14776; 
BgL_bufposz00_15703 = BgL_arg2080z00_14777; 
BgL_bufposz00_14773 = BgL_bufposz00_15703; 
BgL_forwardz00_14772 = BgL_forwardz00_15702; 
goto BgL_statezd21zd21313z00_14725;} }  else 
{ /* Unsafe/http.scm 700 */
BgL_matchz00_14737 = BgL_newzd2matchzd2_14774; } }  else 
{ /* Unsafe/http.scm 700 */
int BgL_curz00_14780;
{ /* Unsafe/http.scm 700 */
int BgL_res5640z00_14781;
BgL_res5640z00_14781 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14770, BgL_forwardz00_14772); 
BgL_curz00_14780 = BgL_res5640z00_14781; } 
{ /* Unsafe/http.scm 700 */

if(
(
(long)(BgL_curz00_14780)==((long)13)))
{ 
long BgL_bufposz00_15712;long BgL_forwardz00_15710;long BgL_lastzd2matchzd2_15709;obj_t BgL_iportz00_15708;
BgL_iportz00_15708 = BgL_iportz00_14770; 
BgL_lastzd2matchzd2_15709 = BgL_newzd2matchzd2_14774; 
BgL_forwardz00_15710 = 
(((long)1)+BgL_forwardz00_14772); 
BgL_bufposz00_15712 = BgL_bufposz00_14773; 
BgL_bufposz00_14818 = BgL_bufposz00_15712; 
BgL_forwardz00_14817 = BgL_forwardz00_15710; 
BgL_lastzd2matchzd2_14816 = BgL_lastzd2matchzd2_15709; 
BgL_iportz00_14815 = BgL_iportz00_15708; 
goto BgL_statezd210zd21322z00_14729;}  else 
{ /* Unsafe/http.scm 700 */
BgL_iportz00_14828 = BgL_iportz00_14770; 
BgL_lastzd2matchzd2_14829 = BgL_newzd2matchzd2_14774; 
BgL_forwardz00_14830 = 
(((long)1)+BgL_forwardz00_14772); 
BgL_bufposz00_14831 = BgL_bufposz00_14773; 
BgL_statezd213zd21325z00_14730:
if(
(BgL_forwardz00_14830==BgL_bufposz00_14831))
{ /* Unsafe/http.scm 700 */
if(
rgc_fill_buffer(BgL_iportz00_14828))
{ /* Unsafe/http.scm 700 */
long BgL_arg2031z00_14832;long BgL_arg2032z00_14833;
{ /* Unsafe/http.scm 700 */
long BgL_res5587z00_14834;
BgL_res5587z00_14834 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14828); 
BgL_arg2031z00_14832 = BgL_res5587z00_14834; } 
{ /* Unsafe/http.scm 700 */
long BgL_res5588z00_14835;
BgL_res5588z00_14835 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14828); 
BgL_arg2032z00_14833 = BgL_res5588z00_14835; } 
{ 
long BgL_bufposz00_15720;long BgL_forwardz00_15719;
BgL_forwardz00_15719 = BgL_arg2031z00_14832; 
BgL_bufposz00_15720 = BgL_arg2032z00_14833; 
BgL_bufposz00_14831 = BgL_bufposz00_15720; 
BgL_forwardz00_14830 = BgL_forwardz00_15719; 
goto BgL_statezd213zd21325z00_14730;} }  else 
{ /* Unsafe/http.scm 700 */
BgL_matchz00_14737 = BgL_lastzd2matchzd2_14829; } }  else 
{ /* Unsafe/http.scm 700 */
int BgL_curz00_14836;
{ /* Unsafe/http.scm 700 */
int BgL_res5589z00_14837;
BgL_res5589z00_14837 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14828, BgL_forwardz00_14830); 
BgL_curz00_14836 = BgL_res5589z00_14837; } 
{ /* Unsafe/http.scm 700 */

if(
(
(long)(BgL_curz00_14836)==((long)13)))
{ 
long BgL_bufposz00_15729;long BgL_forwardz00_15727;long BgL_lastzd2matchzd2_15726;obj_t BgL_iportz00_15725;
BgL_iportz00_15725 = BgL_iportz00_14828; 
BgL_lastzd2matchzd2_15726 = BgL_lastzd2matchzd2_14829; 
BgL_forwardz00_15727 = 
(((long)1)+BgL_forwardz00_14830); 
BgL_bufposz00_15729 = BgL_bufposz00_14831; 
BgL_bufposz00_14818 = BgL_bufposz00_15729; 
BgL_forwardz00_14817 = BgL_forwardz00_15727; 
BgL_lastzd2matchzd2_14816 = BgL_lastzd2matchzd2_15726; 
BgL_iportz00_14815 = BgL_iportz00_15725; 
goto BgL_statezd210zd21322z00_14729;}  else 
{ 
long BgL_forwardz00_15730;
BgL_forwardz00_15730 = 
(((long)1)+BgL_forwardz00_14830); 
BgL_forwardz00_14830 = BgL_forwardz00_15730; 
goto BgL_statezd213zd21325z00_14730;} } } } } } } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_14317); 
{ 

{ /* Unsafe/http.scm 700 */
obj_t BgL_aux1434z00_14752;
BgL_aux1434z00_14752 = 
BINT(BgL_matchz00_14737); 
switch( 
(long)CINT(BgL_aux1434z00_14752)) { case ((long)1) : 

{ /* Unsafe/http.scm 704 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2174z00_14753;
{ /* Unsafe/http.scm 704 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1329z00_14754;
{ /* Unsafe/http.scm 707 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1328z00_14755;
BgL_new1328z00_14755 = 
((BgL_z62iozd2parsezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2parsezd2errorz62_bgl) ))); 
{ /* Unsafe/http.scm 707 */
long BgL_arg2179z00_14756;
{ /* Unsafe/http.scm 707 */
long BgL_res5654z00_14757;
BgL_res5654z00_14757 = 
BGL_CLASS_INDEX(BGl_z62iozd2parsezd2errorz62zz__objectz00); 
BgL_arg2179z00_14756 = BgL_res5654z00_14757; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1328z00_14755), BgL_arg2179z00_14756); } 
BgL_new1329z00_14754 = BgL_new1328z00_14755; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1329z00_14754)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1329z00_14754)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_15744;
{ /* Unsafe/http.scm 707 */
obj_t BgL_arg2175z00_14758;
{ /* Unsafe/http.scm 707 */
obj_t BgL_arg2176z00_14759;
{ /* Unsafe/http.scm 707 */
obj_t BgL_res5655z00_14760;
{ /* Unsafe/http.scm 707 */
obj_t BgL_classz00_14761;
BgL_classz00_14761 = BGl_z62iozd2parsezd2errorz62zz__objectz00; 
BgL_res5655z00_14760 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_14761); } 
BgL_arg2176z00_14759 = BgL_res5655z00_14760; } 
BgL_arg2175z00_14758 = 
VECTOR_REF(BgL_arg2176z00_14759,((long)2)); } 
BgL_auxz00_15744 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg2175z00_14758); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1329z00_14754)))->BgL_stackz00)=((obj_t)BgL_auxz00_15744),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1329z00_14754)))->BgL_procz00)=((obj_t)BGl_symbol7250z00zz__httpz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1329z00_14754)))->BgL_msgz00)=((obj_t)BGl_string7256z00zz__httpz00),BUNSPEC); 
{ 
obj_t BgL_auxz00_15754;
{ /* Unsafe/http.scm 708 */
obj_t BgL_arg2177z00_14762;
{ /* Unsafe/http.scm 700 */
bool_t BgL_test7698z00_15756;
{ /* Unsafe/http.scm 700 */
long BgL_arg2165z00_14767;
{ /* Unsafe/http.scm 700 */
long BgL_res5648z00_14768;
BgL_res5648z00_14768 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_14317); 
BgL_arg2165z00_14767 = BgL_res5648z00_14768; } 
BgL_test7698z00_15756 = 
(BgL_arg2165z00_14767==((long)0)); } 
if(BgL_test7698z00_15756)
{ /* Unsafe/http.scm 700 */
BgL_arg2177z00_14762 = BEOF; }  else 
{ /* Unsafe/http.scm 700 */
unsigned char BgL_res5650z00_14769;
BgL_res5650z00_14769 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_14317); 
BgL_arg2177z00_14762 = 
BCHAR(BgL_res5650z00_14769); } } 
BgL_auxz00_15754 = 
BGl_httpzd2parsezd2errorzd2msgzd2zz__httpz00(BgL_arg2177z00_14762, BgL_iportz00_14317); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1329z00_14754)))->BgL_objz00)=((obj_t)BgL_auxz00_15754),BUNSPEC); } 
BgL_arg2174z00_14753 = BgL_new1329z00_14754; } 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2174z00_14753)); } break;case ((long)0) : 

if(
CBOOL(BgL_opz00_14318))
{ /* Unsafe/http.scm 702 */
obj_t BgL_arg2180z00_14763;
{ /* Unsafe/http.scm 702 */
obj_t BgL_res5659z00_14764;
{ /* Unsafe/http.scm 700 */
long BgL_arg2091z00_14765;
{ /* Unsafe/http.scm 700 */
long BgL_res5657z00_14766;
BgL_res5657z00_14766 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_14317); 
BgL_arg2091z00_14765 = BgL_res5657z00_14766; } 
BgL_res5659z00_14764 = 
rgc_buffer_substring(BgL_iportz00_14317, ((long)0), BgL_arg2091z00_14765); } 
BgL_arg2180z00_14763 = BgL_res5659z00_14764; } 
bgl_display_obj(BgL_arg2180z00_14763, BgL_opz00_14318); }  else 
{ /* Unsafe/http.scm 702 */BFALSE; } break;
default: 
BGl_errorz00zz__errorz00(BGl_string7254z00zz__httpz00, BGl_string7255z00zz__httpz00, 
BINT(BgL_matchz00_14737)); } } } } } 
return 
BINT(BgL_sza7za7_14718);} break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string7254z00zz__httpz00, BGl_string7255z00zz__httpz00, 
BINT(BgL_matchz00_14674));} } } } 

}



/* the-substring~0 */
obj_t BGl_thezd2substringze70z35zz__httpz00(obj_t BgL_iportz00_14465, int BgL_minz00_1877, int BgL_maxz00_1878)
{
{ /* Unsafe/http.scm 691 */
if(
(
(long)(BgL_maxz00_1878)<
(long)(BgL_minz00_1877)))
{ /* Unsafe/http.scm 691 */
long BgL_arg1887z00_1881;
{ /* Unsafe/http.scm 691 */
long BgL_res5502z00_9248;
BgL_res5502z00_9248 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_14465); 
BgL_arg1887z00_1881 = BgL_res5502z00_9248; } 
{ /* Unsafe/http.scm 691 */
long BgL_za72za7_9250;
BgL_za72za7_9250 = 
(long)(BgL_maxz00_1878); 
BgL_maxz00_1878 = 
(int)(
(BgL_arg1887z00_1881+BgL_za72za7_9250)); } }  else 
{ /* Unsafe/http.scm 691 */BFALSE; } 
{ /* Unsafe/http.scm 691 */
bool_t BgL_test7701z00_15786;
if(
(
(long)(BgL_minz00_1877)>=((long)0)))
{ /* Unsafe/http.scm 691 */
if(
(
(long)(BgL_maxz00_1878)>=
(long)(BgL_minz00_1877)))
{ /* Unsafe/http.scm 691 */
long BgL_arg1896z00_1892;
{ /* Unsafe/http.scm 691 */
long BgL_res5506z00_9258;
BgL_res5506z00_9258 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_14465); 
BgL_arg1896z00_1892 = BgL_res5506z00_9258; } 
BgL_test7701z00_15786 = 
(
(long)(BgL_maxz00_1878)<=BgL_arg1896z00_1892); }  else 
{ /* Unsafe/http.scm 691 */
BgL_test7701z00_15786 = ((bool_t)0)
; } }  else 
{ /* Unsafe/http.scm 691 */
BgL_test7701z00_15786 = ((bool_t)0)
; } 
if(BgL_test7701z00_15786)
{ /* Unsafe/http.scm 691 */
return 
rgc_buffer_substring(BgL_iportz00_14465, 
(long)(BgL_minz00_1877), 
(long)(BgL_maxz00_1878));}  else 
{ /* Unsafe/http.scm 691 */
obj_t BgL_arg1892z00_1886;obj_t BgL_arg1893z00_1887;
{ /* Unsafe/http.scm 691 */
obj_t BgL_arg1894z00_1888;
{ /* Unsafe/http.scm 691 */
obj_t BgL_res5511z00_9272;
{ /* Unsafe/http.scm 691 */
long BgL_arg1884z00_9266;
{ /* Unsafe/http.scm 691 */
long BgL_res5509z00_9268;
BgL_res5509z00_9268 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_14465); 
BgL_arg1884z00_9266 = BgL_res5509z00_9268; } 
BgL_res5511z00_9272 = 
rgc_buffer_substring(BgL_iportz00_14465, ((long)0), BgL_arg1884z00_9266); } 
BgL_arg1894z00_1888 = BgL_res5511z00_9272; } 
{ /* Unsafe/http.scm 691 */
obj_t BgL_list1895z00_1889;
BgL_list1895z00_1889 = 
MAKE_YOUNG_PAIR(BgL_arg1894z00_1888, BNIL); 
BgL_arg1892z00_1886 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string7257z00zz__httpz00, BgL_list1895z00_1889); } } 
BgL_arg1893z00_1887 = 
MAKE_YOUNG_PAIR(
BINT(BgL_minz00_1877), 
BINT(BgL_maxz00_1878)); 
return 
BGl_errorz00zz__errorz00(BGl_string7258z00zz__httpz00, BgL_arg1892z00_1886, BgL_arg1893z00_1887);} } } 

}



/* &<@anonymous:1583> */
obj_t BGl_z62zc3z04anonymousza31583ze3ze5zz__httpz00(obj_t BgL_envz00_14319, obj_t BgL_iportz00_14320)
{
{ /* Unsafe/http.scm 333 */
{ 
obj_t BgL_iportz00_15073;long BgL_lastzd2matchzd2_15074;long BgL_forwardz00_15075;long BgL_bufposz00_15076;obj_t BgL_iportz00_15060;long BgL_lastzd2matchzd2_15061;long BgL_forwardz00_15062;long BgL_bufposz00_15063;obj_t BgL_iportz00_15046;long BgL_lastzd2matchzd2_15047;long BgL_forwardz00_15048;long BgL_bufposz00_15049;obj_t BgL_iportz00_15024;long BgL_lastzd2matchzd2_15025;long BgL_forwardz00_15026;long BgL_bufposz00_15027;obj_t BgL_iportz00_15011;long BgL_lastzd2matchzd2_15012;long BgL_forwardz00_15013;long BgL_bufposz00_15014;obj_t BgL_iportz00_15001;long BgL_lastzd2matchzd2_15002;long BgL_forwardz00_15003;long BgL_bufposz00_15004;obj_t BgL_iportz00_14990;long BgL_lastzd2matchzd2_14991;long BgL_forwardz00_14992;long BgL_bufposz00_14993;obj_t BgL_iportz00_14980;long BgL_lastzd2matchzd2_14981;long BgL_forwardz00_14982;long BgL_bufposz00_14983;obj_t BgL_iportz00_14958;long BgL_lastzd2matchzd2_14959;long BgL_forwardz00_14960;long BgL_bufposz00_14961;int BgL_minz00_14944;int BgL_maxz00_14945;
{ /* Unsafe/http.scm 333 */
long BgL_res5372z00_14909;
BgL_res5372z00_14909 = 
RGC_START_MATCH(BgL_iportz00_14320); BgL_res5372z00_14909; } 
{ /* Unsafe/http.scm 333 */
long BgL_matchz00_14910;
{ /* Unsafe/http.scm 333 */
long BgL_arg1805z00_14911;long BgL_arg1806z00_14912;
{ /* Unsafe/http.scm 333 */
long BgL_res5373z00_14913;
BgL_res5373z00_14913 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14320); 
BgL_arg1805z00_14911 = BgL_res5373z00_14913; } 
{ /* Unsafe/http.scm 333 */
long BgL_res5374z00_14914;
BgL_res5374z00_14914 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14320); 
BgL_arg1806z00_14912 = BgL_res5374z00_14914; } 
BgL_iportz00_15046 = BgL_iportz00_14320; 
BgL_lastzd2matchzd2_15047 = ((long)1); 
BgL_forwardz00_15048 = BgL_arg1805z00_14911; 
BgL_bufposz00_15049 = BgL_arg1806z00_14912; 
BgL_statezd20zd21080z00_14906:
if(
(BgL_forwardz00_15048==BgL_bufposz00_15049))
{ /* Unsafe/http.scm 333 */
if(
rgc_fill_buffer(BgL_iportz00_15046))
{ /* Unsafe/http.scm 333 */
long BgL_arg1608z00_15050;long BgL_arg1609z00_15051;
{ /* Unsafe/http.scm 333 */
long BgL_res5233z00_15052;
BgL_res5233z00_15052 = 
RGC_BUFFER_FORWARD(BgL_iportz00_15046); 
BgL_arg1608z00_15050 = BgL_res5233z00_15052; } 
{ /* Unsafe/http.scm 333 */
long BgL_res5234z00_15053;
BgL_res5234z00_15053 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_15046); 
BgL_arg1609z00_15051 = BgL_res5234z00_15053; } 
{ 
long BgL_bufposz00_15818;long BgL_forwardz00_15817;
BgL_forwardz00_15817 = BgL_arg1608z00_15050; 
BgL_bufposz00_15818 = BgL_arg1609z00_15051; 
BgL_bufposz00_15049 = BgL_bufposz00_15818; 
BgL_forwardz00_15048 = BgL_forwardz00_15817; 
goto BgL_statezd20zd21080z00_14906;} }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_lastzd2matchzd2_15047; } }  else 
{ /* Unsafe/http.scm 333 */
int BgL_curz00_15054;
{ /* Unsafe/http.scm 333 */
int BgL_res5235z00_15055;
BgL_res5235z00_15055 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_15046, BgL_forwardz00_15048); 
BgL_curz00_15054 = BgL_res5235z00_15055; } 
{ /* Unsafe/http.scm 333 */

if(
(
(long)(BgL_curz00_15054)==((long)73)))
{ /* Unsafe/http.scm 333 */
BgL_iportz00_15024 = BgL_iportz00_15046; 
BgL_lastzd2matchzd2_15025 = BgL_lastzd2matchzd2_15047; 
BgL_forwardz00_15026 = 
(((long)1)+BgL_forwardz00_15048); 
BgL_bufposz00_15027 = BgL_bufposz00_15049; 
BgL_statezd23zd21083z00_14905:
{ /* Unsafe/http.scm 333 */
long BgL_newzd2matchzd2_15028;
{ /* Unsafe/http.scm 333 */
long BgL_res5249z00_15029;
BgL_res5249z00_15029 = 
RGC_STOP_MATCH(BgL_iportz00_15024, BgL_forwardz00_15026); BgL_res5249z00_15029; } 
BgL_newzd2matchzd2_15028 = ((long)1); 
if(
(BgL_forwardz00_15026==BgL_bufposz00_15027))
{ /* Unsafe/http.scm 333 */
if(
rgc_fill_buffer(BgL_iportz00_15024))
{ /* Unsafe/http.scm 333 */
long BgL_arg1624z00_15030;long BgL_arg1625z00_15031;
{ /* Unsafe/http.scm 333 */
long BgL_res5252z00_15032;
BgL_res5252z00_15032 = 
RGC_BUFFER_FORWARD(BgL_iportz00_15024); 
BgL_arg1624z00_15030 = BgL_res5252z00_15032; } 
{ /* Unsafe/http.scm 333 */
long BgL_res5253z00_15033;
BgL_res5253z00_15033 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_15024); 
BgL_arg1625z00_15031 = BgL_res5253z00_15033; } 
{ 
long BgL_bufposz00_15831;long BgL_forwardz00_15830;
BgL_forwardz00_15830 = BgL_arg1624z00_15030; 
BgL_bufposz00_15831 = BgL_arg1625z00_15031; 
BgL_bufposz00_15027 = BgL_bufposz00_15831; 
BgL_forwardz00_15026 = BgL_forwardz00_15830; 
goto BgL_statezd23zd21083z00_14905;} }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_newzd2matchzd2_15028; } }  else 
{ /* Unsafe/http.scm 333 */
int BgL_curz00_15034;
{ /* Unsafe/http.scm 333 */
int BgL_res5254z00_15035;
BgL_res5254z00_15035 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_15024, BgL_forwardz00_15026); 
BgL_curz00_15034 = BgL_res5254z00_15035; } 
{ /* Unsafe/http.scm 333 */

if(
(
(long)(BgL_curz00_15034)==((long)67)))
{ /* Unsafe/http.scm 333 */
long BgL_arg1627z00_15036;
BgL_arg1627z00_15036 = 
(((long)1)+BgL_forwardz00_15026); 
{ 
long BgL_forwardz00_15038;long BgL_bufposz00_15039;
BgL_forwardz00_15038 = BgL_arg1627z00_15036; 
BgL_bufposz00_15039 = BgL_bufposz00_15027; 
BgL_statezd24zd21084z00_15037:
if(
(BgL_forwardz00_15038==BgL_bufposz00_15039))
{ /* Unsafe/http.scm 333 */
if(
rgc_fill_buffer(BgL_iportz00_15024))
{ /* Unsafe/http.scm 333 */
long BgL_arg1682z00_15040;long BgL_arg1687z00_15041;
{ /* Unsafe/http.scm 333 */
long BgL_res5259z00_15042;
BgL_res5259z00_15042 = 
RGC_BUFFER_FORWARD(BgL_iportz00_15024); 
BgL_arg1682z00_15040 = BgL_res5259z00_15042; } 
{ /* Unsafe/http.scm 333 */
long BgL_res5260z00_15043;
BgL_res5260z00_15043 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_15024); 
BgL_arg1687z00_15041 = BgL_res5260z00_15043; } 
{ 
long BgL_bufposz00_15844;long BgL_forwardz00_15843;
BgL_forwardz00_15843 = BgL_arg1682z00_15040; 
BgL_bufposz00_15844 = BgL_arg1687z00_15041; 
BgL_bufposz00_15039 = BgL_bufposz00_15844; 
BgL_forwardz00_15038 = BgL_forwardz00_15843; 
goto BgL_statezd24zd21084z00_15037;} }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_newzd2matchzd2_15028; } }  else 
{ /* Unsafe/http.scm 333 */
int BgL_curz00_15044;
{ /* Unsafe/http.scm 333 */
int BgL_res5261z00_15045;
BgL_res5261z00_15045 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_15024, BgL_forwardz00_15038); 
BgL_curz00_15044 = BgL_res5261z00_15045; } 
{ /* Unsafe/http.scm 333 */

if(
(
(long)(BgL_curz00_15044)==((long)89)))
{ /* Unsafe/http.scm 333 */
BgL_iportz00_14958 = BgL_iportz00_15024; 
BgL_lastzd2matchzd2_14959 = BgL_newzd2matchzd2_15028; 
BgL_forwardz00_14960 = 
(((long)1)+BgL_forwardz00_15038); 
BgL_bufposz00_14961 = BgL_bufposz00_15039; 
BgL_statezd26zd21086z00_14900:
if(
(BgL_forwardz00_14960==BgL_bufposz00_14961))
{ /* Unsafe/http.scm 333 */
if(
rgc_fill_buffer(BgL_iportz00_14958))
{ /* Unsafe/http.scm 333 */
long BgL_arg1694z00_14962;long BgL_arg1697z00_14963;
{ /* Unsafe/http.scm 333 */
long BgL_res5340z00_14964;
BgL_res5340z00_14964 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14958); 
BgL_arg1694z00_14962 = BgL_res5340z00_14964; } 
{ /* Unsafe/http.scm 333 */
long BgL_res5341z00_14965;
BgL_res5341z00_14965 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14958); 
BgL_arg1697z00_14963 = BgL_res5341z00_14965; } 
if(
(BgL_arg1694z00_14962==BgL_arg1697z00_14963))
{ /* Unsafe/http.scm 333 */
if(
rgc_fill_buffer(BgL_iportz00_14958))
{ /* Unsafe/http.scm 333 */
long BgL_arg1694z00_14966;long BgL_arg1697z00_14967;
{ /* Unsafe/http.scm 333 */
long BgL_res5344z00_14968;
BgL_res5344z00_14968 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14958); 
BgL_arg1694z00_14966 = BgL_res5344z00_14968; } 
{ /* Unsafe/http.scm 333 */
long BgL_res5345z00_14969;
BgL_res5345z00_14969 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14958); 
BgL_arg1697z00_14967 = BgL_res5345z00_14969; } 
{ 
long BgL_bufposz00_15862;long BgL_forwardz00_15861;
BgL_forwardz00_15861 = BgL_arg1694z00_14966; 
BgL_bufposz00_15862 = BgL_arg1697z00_14967; 
BgL_bufposz00_14961 = BgL_bufposz00_15862; 
BgL_forwardz00_14960 = BgL_forwardz00_15861; 
goto BgL_statezd26zd21086z00_14900;} }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_lastzd2matchzd2_14959; } }  else 
{ /* Unsafe/http.scm 333 */
int BgL_curz00_14970;
{ /* Unsafe/http.scm 333 */
int BgL_res5346z00_14971;
BgL_res5346z00_14971 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14958, BgL_arg1694z00_14962); 
BgL_curz00_14970 = BgL_res5346z00_14971; } 
{ /* Unsafe/http.scm 333 */

if(
(
(long)(BgL_curz00_14970)==((long)32)))
{ /* Unsafe/http.scm 333 */
long BgL_arg1699z00_14972;
BgL_arg1699z00_14972 = 
(((long)1)+BgL_arg1694z00_14962); 
{ /* Unsafe/http.scm 333 */
long BgL_newzd2matchzd2_14973;
{ /* Unsafe/http.scm 333 */
long BgL_res5349z00_14974;
BgL_res5349z00_14974 = 
RGC_STOP_MATCH(BgL_iportz00_14958, BgL_arg1699z00_14972); BgL_res5349z00_14974; } 
BgL_newzd2matchzd2_14973 = ((long)0); 
BgL_matchz00_14910 = BgL_newzd2matchzd2_14973; } }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_lastzd2matchzd2_14959; } } } }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_lastzd2matchzd2_14959; } }  else 
{ /* Unsafe/http.scm 333 */
int BgL_curz00_14975;
{ /* Unsafe/http.scm 333 */
int BgL_res5350z00_14976;
BgL_res5350z00_14976 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14958, BgL_forwardz00_14960); 
BgL_curz00_14975 = BgL_res5350z00_14976; } 
{ /* Unsafe/http.scm 333 */

if(
(
(long)(BgL_curz00_14975)==((long)32)))
{ /* Unsafe/http.scm 333 */
long BgL_arg1699z00_14977;
BgL_arg1699z00_14977 = 
(((long)1)+BgL_forwardz00_14960); 
{ /* Unsafe/http.scm 333 */
long BgL_newzd2matchzd2_14978;
{ /* Unsafe/http.scm 333 */
long BgL_res5353z00_14979;
BgL_res5353z00_14979 = 
RGC_STOP_MATCH(BgL_iportz00_14958, BgL_arg1699z00_14977); BgL_res5353z00_14979; } 
BgL_newzd2matchzd2_14978 = ((long)0); 
BgL_matchz00_14910 = BgL_newzd2matchzd2_14978; } }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_lastzd2matchzd2_14959; } } } }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_newzd2matchzd2_15028; } } } } }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_newzd2matchzd2_15028; } } } } }  else 
{ /* Unsafe/http.scm 333 */
bool_t BgL_test7719z00_15877;
if(
(
(long)(BgL_curz00_15054)==((long)72)))
{ /* Unsafe/http.scm 333 */
BgL_test7719z00_15877 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
if(
(
(long)(BgL_curz00_15054)==((long)80)))
{ /* Unsafe/http.scm 333 */
BgL_test7719z00_15877 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
bool_t BgL_test7722z00_15884;
if(
(
(long)(BgL_curz00_15054)==((long)84)))
{ /* Unsafe/http.scm 333 */
BgL_test7722z00_15884 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
BgL_test7722z00_15884 = 
(
(long)(BgL_curz00_15054)==((long)83))
; } 
if(BgL_test7722z00_15884)
{ /* Unsafe/http.scm 333 */
BgL_test7719z00_15877 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
if(
(
(long)(BgL_curz00_15054)==((long)104)))
{ /* Unsafe/http.scm 333 */
BgL_test7719z00_15877 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
if(
(
(long)(BgL_curz00_15054)==((long)112)))
{ /* Unsafe/http.scm 333 */
BgL_test7719z00_15877 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
bool_t BgL__ortest_1093z00_15056;
BgL__ortest_1093z00_15056 = 
(
(long)(BgL_curz00_15054)==((long)116)); 
if(BgL__ortest_1093z00_15056)
{ /* Unsafe/http.scm 333 */
BgL_test7719z00_15877 = BgL__ortest_1093z00_15056
; }  else 
{ /* Unsafe/http.scm 333 */
BgL_test7719z00_15877 = 
(
(long)(BgL_curz00_15054)==((long)115))
; } } } } } } 
if(BgL_test7719z00_15877)
{ /* Unsafe/http.scm 333 */
BgL_iportz00_15011 = BgL_iportz00_15046; 
BgL_lastzd2matchzd2_15012 = BgL_lastzd2matchzd2_15047; 
BgL_forwardz00_15013 = 
(((long)1)+BgL_forwardz00_15048); 
BgL_bufposz00_15014 = BgL_bufposz00_15049; 
BgL_statezd22zd21082z00_14904:
{ /* Unsafe/http.scm 333 */
long BgL_newzd2matchzd2_15015;
{ /* Unsafe/http.scm 333 */
long BgL_res5265z00_15016;
BgL_res5265z00_15016 = 
RGC_STOP_MATCH(BgL_iportz00_15011, BgL_forwardz00_15013); BgL_res5265z00_15016; } 
BgL_newzd2matchzd2_15015 = ((long)1); 
if(
(BgL_forwardz00_15013==BgL_bufposz00_15014))
{ /* Unsafe/http.scm 333 */
if(
rgc_fill_buffer(BgL_iportz00_15011))
{ /* Unsafe/http.scm 333 */
long BgL_arg1632z00_15017;long BgL_arg1633z00_15018;
{ /* Unsafe/http.scm 333 */
long BgL_res5268z00_15019;
BgL_res5268z00_15019 = 
RGC_BUFFER_FORWARD(BgL_iportz00_15011); 
BgL_arg1632z00_15017 = BgL_res5268z00_15019; } 
{ /* Unsafe/http.scm 333 */
long BgL_res5269z00_15020;
BgL_res5269z00_15020 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_15011); 
BgL_arg1633z00_15018 = BgL_res5269z00_15020; } 
{ 
long BgL_bufposz00_15909;long BgL_forwardz00_15908;
BgL_forwardz00_15908 = BgL_arg1632z00_15017; 
BgL_bufposz00_15909 = BgL_arg1633z00_15018; 
BgL_bufposz00_15014 = BgL_bufposz00_15909; 
BgL_forwardz00_15013 = BgL_forwardz00_15908; 
goto BgL_statezd22zd21082z00_14904;} }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_newzd2matchzd2_15015; } }  else 
{ /* Unsafe/http.scm 333 */
int BgL_curz00_15021;
{ /* Unsafe/http.scm 333 */
int BgL_res5270z00_15022;
BgL_res5270z00_15022 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_15011, BgL_forwardz00_15013); 
BgL_curz00_15021 = BgL_res5270z00_15022; } 
{ /* Unsafe/http.scm 333 */

{ /* Unsafe/http.scm 333 */
bool_t BgL_test7729z00_15911;
if(
(
(long)(BgL_curz00_15021)==((long)72)))
{ /* Unsafe/http.scm 333 */
BgL_test7729z00_15911 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
if(
(
(long)(BgL_curz00_15021)==((long)80)))
{ /* Unsafe/http.scm 333 */
BgL_test7729z00_15911 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
bool_t BgL_test7732z00_15918;
if(
(
(long)(BgL_curz00_15021)==((long)84)))
{ /* Unsafe/http.scm 333 */
BgL_test7732z00_15918 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
BgL_test7732z00_15918 = 
(
(long)(BgL_curz00_15021)==((long)83))
; } 
if(BgL_test7732z00_15918)
{ /* Unsafe/http.scm 333 */
BgL_test7729z00_15911 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
if(
(
(long)(BgL_curz00_15021)==((long)104)))
{ /* Unsafe/http.scm 333 */
BgL_test7729z00_15911 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
if(
(
(long)(BgL_curz00_15021)==((long)112)))
{ /* Unsafe/http.scm 333 */
BgL_test7729z00_15911 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
bool_t BgL__ortest_1094z00_15023;
BgL__ortest_1094z00_15023 = 
(
(long)(BgL_curz00_15021)==((long)116)); 
if(BgL__ortest_1094z00_15023)
{ /* Unsafe/http.scm 333 */
BgL_test7729z00_15911 = BgL__ortest_1094z00_15023
; }  else 
{ /* Unsafe/http.scm 333 */
BgL_test7729z00_15911 = 
(
(long)(BgL_curz00_15021)==((long)115))
; } } } } } } 
if(BgL_test7729z00_15911)
{ /* Unsafe/http.scm 333 */
BgL_iportz00_14990 = BgL_iportz00_15011; 
BgL_lastzd2matchzd2_14991 = BgL_newzd2matchzd2_15015; 
BgL_forwardz00_14992 = 
(((long)1)+BgL_forwardz00_15013); 
BgL_bufposz00_14993 = BgL_bufposz00_15014; 
BgL_statezd29zd21089z00_14902:
if(
(BgL_forwardz00_14992==BgL_bufposz00_14993))
{ /* Unsafe/http.scm 333 */
if(
rgc_fill_buffer(BgL_iportz00_14990))
{ /* Unsafe/http.scm 333 */
long BgL_arg1655z00_14994;long BgL_arg1656z00_14995;
{ /* Unsafe/http.scm 333 */
long BgL_res5292z00_14996;
BgL_res5292z00_14996 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14990); 
BgL_arg1655z00_14994 = BgL_res5292z00_14996; } 
{ /* Unsafe/http.scm 333 */
long BgL_res5293z00_14997;
BgL_res5293z00_14997 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14990); 
BgL_arg1656z00_14995 = BgL_res5293z00_14997; } 
{ 
long BgL_bufposz00_15942;long BgL_forwardz00_15941;
BgL_forwardz00_15941 = BgL_arg1655z00_14994; 
BgL_bufposz00_15942 = BgL_arg1656z00_14995; 
BgL_bufposz00_14993 = BgL_bufposz00_15942; 
BgL_forwardz00_14992 = BgL_forwardz00_15941; 
goto BgL_statezd29zd21089z00_14902;} }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_lastzd2matchzd2_14991; } }  else 
{ /* Unsafe/http.scm 333 */
int BgL_curz00_14998;
{ /* Unsafe/http.scm 333 */
int BgL_res5294z00_14999;
BgL_res5294z00_14999 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14990, BgL_forwardz00_14992); 
BgL_curz00_14998 = BgL_res5294z00_14999; } 
{ /* Unsafe/http.scm 333 */

{ /* Unsafe/http.scm 333 */
bool_t BgL_test7739z00_15944;
if(
(
(long)(BgL_curz00_14998)==((long)72)))
{ /* Unsafe/http.scm 333 */
BgL_test7739z00_15944 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
if(
(
(long)(BgL_curz00_14998)==((long)80)))
{ /* Unsafe/http.scm 333 */
BgL_test7739z00_15944 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
bool_t BgL_test7742z00_15951;
if(
(
(long)(BgL_curz00_14998)==((long)84)))
{ /* Unsafe/http.scm 333 */
BgL_test7742z00_15951 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
BgL_test7742z00_15951 = 
(
(long)(BgL_curz00_14998)==((long)83))
; } 
if(BgL_test7742z00_15951)
{ /* Unsafe/http.scm 333 */
BgL_test7739z00_15944 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
if(
(
(long)(BgL_curz00_14998)==((long)104)))
{ /* Unsafe/http.scm 333 */
BgL_test7739z00_15944 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
if(
(
(long)(BgL_curz00_14998)==((long)112)))
{ /* Unsafe/http.scm 333 */
BgL_test7739z00_15944 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 333 */
bool_t BgL__ortest_1095z00_15000;
BgL__ortest_1095z00_15000 = 
(
(long)(BgL_curz00_14998)==((long)116)); 
if(BgL__ortest_1095z00_15000)
{ /* Unsafe/http.scm 333 */
BgL_test7739z00_15944 = BgL__ortest_1095z00_15000
; }  else 
{ /* Unsafe/http.scm 333 */
BgL_test7739z00_15944 = 
(
(long)(BgL_curz00_14998)==((long)115))
; } } } } } } 
if(BgL_test7739z00_15944)
{ 
long BgL_forwardz00_15968;
BgL_forwardz00_15968 = 
(((long)1)+BgL_forwardz00_14992); 
BgL_forwardz00_14992 = BgL_forwardz00_15968; 
goto BgL_statezd29zd21089z00_14902;}  else 
{ /* Unsafe/http.scm 333 */
if(
(
(long)(BgL_curz00_14998)==((long)47)))
{ /* Unsafe/http.scm 333 */
BgL_iportz00_15001 = BgL_iportz00_14990; 
BgL_lastzd2matchzd2_15002 = BgL_lastzd2matchzd2_14991; 
BgL_forwardz00_15003 = 
(((long)1)+BgL_forwardz00_14992); 
BgL_bufposz00_15004 = BgL_bufposz00_14993; 
BgL_statezd28zd21088z00_14903:
if(
(BgL_forwardz00_15003==BgL_bufposz00_15004))
{ /* Unsafe/http.scm 333 */
if(
rgc_fill_buffer(BgL_iportz00_15001))
{ /* Unsafe/http.scm 333 */
long BgL_arg1647z00_15005;long BgL_arg1648z00_15006;
{ /* Unsafe/http.scm 333 */
long BgL_res5284z00_15007;
BgL_res5284z00_15007 = 
RGC_BUFFER_FORWARD(BgL_iportz00_15001); 
BgL_arg1647z00_15005 = BgL_res5284z00_15007; } 
{ /* Unsafe/http.scm 333 */
long BgL_res5285z00_15008;
BgL_res5285z00_15008 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_15001); 
BgL_arg1648z00_15006 = BgL_res5285z00_15008; } 
{ 
long BgL_bufposz00_15980;long BgL_forwardz00_15979;
BgL_forwardz00_15979 = BgL_arg1647z00_15005; 
BgL_bufposz00_15980 = BgL_arg1648z00_15006; 
BgL_bufposz00_15004 = BgL_bufposz00_15980; 
BgL_forwardz00_15003 = BgL_forwardz00_15979; 
goto BgL_statezd28zd21088z00_14903;} }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_lastzd2matchzd2_15002; } }  else 
{ /* Unsafe/http.scm 333 */
int BgL_curz00_15009;
{ /* Unsafe/http.scm 333 */
int BgL_res5286z00_15010;
BgL_res5286z00_15010 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_15001, BgL_forwardz00_15003); 
BgL_curz00_15009 = BgL_res5286z00_15010; } 
{ /* Unsafe/http.scm 333 */

{ /* Unsafe/http.scm 333 */
bool_t BgL_test7750z00_15982;
if(
(
(long)(BgL_curz00_15009)>=((long)48)))
{ /* Unsafe/http.scm 333 */
BgL_test7750z00_15982 = 
(
(long)(BgL_curz00_15009)<((long)58))
; }  else 
{ /* Unsafe/http.scm 333 */
BgL_test7750z00_15982 = ((bool_t)0)
; } 
if(BgL_test7750z00_15982)
{ /* Unsafe/http.scm 333 */
BgL_iportz00_14980 = BgL_iportz00_15001; 
BgL_lastzd2matchzd2_14981 = BgL_lastzd2matchzd2_15002; 
BgL_forwardz00_14982 = 
(((long)1)+BgL_forwardz00_15003); 
BgL_bufposz00_14983 = BgL_bufposz00_15004; 
BgL_statezd210zd21090z00_14901:
if(
(BgL_forwardz00_14982==BgL_bufposz00_14983))
{ /* Unsafe/http.scm 333 */
if(
rgc_fill_buffer(BgL_iportz00_14980))
{ /* Unsafe/http.scm 333 */
long BgL_arg1671z00_14984;long BgL_arg1672z00_14985;
{ /* Unsafe/http.scm 333 */
long BgL_res5308z00_14986;
BgL_res5308z00_14986 = 
RGC_BUFFER_FORWARD(BgL_iportz00_14980); 
BgL_arg1671z00_14984 = BgL_res5308z00_14986; } 
{ /* Unsafe/http.scm 333 */
long BgL_res5309z00_14987;
BgL_res5309z00_14987 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_14980); 
BgL_arg1672z00_14985 = BgL_res5309z00_14987; } 
{ 
long BgL_bufposz00_15995;long BgL_forwardz00_15994;
BgL_forwardz00_15994 = BgL_arg1671z00_14984; 
BgL_bufposz00_15995 = BgL_arg1672z00_14985; 
BgL_bufposz00_14983 = BgL_bufposz00_15995; 
BgL_forwardz00_14982 = BgL_forwardz00_15994; 
goto BgL_statezd210zd21090z00_14901;} }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_lastzd2matchzd2_14981; } }  else 
{ /* Unsafe/http.scm 333 */
int BgL_curz00_14988;
{ /* Unsafe/http.scm 333 */
int BgL_res5310z00_14989;
BgL_res5310z00_14989 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_14980, BgL_forwardz00_14982); 
BgL_curz00_14988 = BgL_res5310z00_14989; } 
{ /* Unsafe/http.scm 333 */

{ /* Unsafe/http.scm 333 */
bool_t BgL_test7754z00_15997;
if(
(
(long)(BgL_curz00_14988)>=((long)48)))
{ /* Unsafe/http.scm 333 */
BgL_test7754z00_15997 = 
(
(long)(BgL_curz00_14988)<((long)58))
; }  else 
{ /* Unsafe/http.scm 333 */
BgL_test7754z00_15997 = ((bool_t)0)
; } 
if(BgL_test7754z00_15997)
{ 
long BgL_forwardz00_16003;
BgL_forwardz00_16003 = 
(((long)1)+BgL_forwardz00_14982); 
BgL_forwardz00_14982 = BgL_forwardz00_16003; 
goto BgL_statezd210zd21090z00_14901;}  else 
{ /* Unsafe/http.scm 333 */
if(
(
(long)(BgL_curz00_14988)==((long)46)))
{ /* Unsafe/http.scm 333 */
BgL_iportz00_15073 = BgL_iportz00_14980; 
BgL_lastzd2matchzd2_15074 = BgL_lastzd2matchzd2_14981; 
BgL_forwardz00_15075 = 
(((long)1)+BgL_forwardz00_14982); 
BgL_bufposz00_15076 = BgL_bufposz00_14983; 
BgL_statezd211zd21091z00_14908:
if(
(BgL_forwardz00_15075==BgL_bufposz00_15076))
{ /* Unsafe/http.scm 333 */
if(
rgc_fill_buffer(BgL_iportz00_15073))
{ /* Unsafe/http.scm 333 */
long BgL_arg1587z00_15077;long BgL_arg1588z00_15078;
{ /* Unsafe/http.scm 333 */
long BgL_res5214z00_15079;
BgL_res5214z00_15079 = 
RGC_BUFFER_FORWARD(BgL_iportz00_15073); 
BgL_arg1587z00_15077 = BgL_res5214z00_15079; } 
{ /* Unsafe/http.scm 333 */
long BgL_res5215z00_15080;
BgL_res5215z00_15080 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_15073); 
BgL_arg1588z00_15078 = BgL_res5215z00_15080; } 
{ 
long BgL_bufposz00_16015;long BgL_forwardz00_16014;
BgL_forwardz00_16014 = BgL_arg1587z00_15077; 
BgL_bufposz00_16015 = BgL_arg1588z00_15078; 
BgL_bufposz00_15076 = BgL_bufposz00_16015; 
BgL_forwardz00_15075 = BgL_forwardz00_16014; 
goto BgL_statezd211zd21091z00_14908;} }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_lastzd2matchzd2_15074; } }  else 
{ /* Unsafe/http.scm 333 */
int BgL_curz00_15081;
{ /* Unsafe/http.scm 333 */
int BgL_res5216z00_15082;
BgL_res5216z00_15082 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_15073, BgL_forwardz00_15075); 
BgL_curz00_15081 = BgL_res5216z00_15082; } 
{ /* Unsafe/http.scm 333 */

{ /* Unsafe/http.scm 333 */
bool_t BgL_test7759z00_16017;
if(
(
(long)(BgL_curz00_15081)>=((long)48)))
{ /* Unsafe/http.scm 333 */
BgL_test7759z00_16017 = 
(
(long)(BgL_curz00_15081)<((long)58))
; }  else 
{ /* Unsafe/http.scm 333 */
BgL_test7759z00_16017 = ((bool_t)0)
; } 
if(BgL_test7759z00_16017)
{ /* Unsafe/http.scm 333 */
BgL_iportz00_15060 = BgL_iportz00_15073; 
BgL_lastzd2matchzd2_15061 = BgL_lastzd2matchzd2_15074; 
BgL_forwardz00_15062 = 
(((long)1)+BgL_forwardz00_15075); 
BgL_bufposz00_15063 = BgL_bufposz00_15076; 
BgL_statezd212zd21092z00_14907:
if(
(BgL_forwardz00_15062==BgL_bufposz00_15063))
{ /* Unsafe/http.scm 333 */
if(
rgc_fill_buffer(BgL_iportz00_15060))
{ /* Unsafe/http.scm 333 */
long BgL_arg1595z00_15064;long BgL_arg1597z00_15065;
{ /* Unsafe/http.scm 333 */
long BgL_res5222z00_15066;
BgL_res5222z00_15066 = 
RGC_BUFFER_FORWARD(BgL_iportz00_15060); 
BgL_arg1595z00_15064 = BgL_res5222z00_15066; } 
{ /* Unsafe/http.scm 333 */
long BgL_res5223z00_15067;
BgL_res5223z00_15067 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_15060); 
BgL_arg1597z00_15065 = BgL_res5223z00_15067; } 
{ 
long BgL_bufposz00_16030;long BgL_forwardz00_16029;
BgL_forwardz00_16029 = BgL_arg1595z00_15064; 
BgL_bufposz00_16030 = BgL_arg1597z00_15065; 
BgL_bufposz00_15063 = BgL_bufposz00_16030; 
BgL_forwardz00_15062 = BgL_forwardz00_16029; 
goto BgL_statezd212zd21092z00_14907;} }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_lastzd2matchzd2_15061; } }  else 
{ /* Unsafe/http.scm 333 */
int BgL_curz00_15068;
{ /* Unsafe/http.scm 333 */
int BgL_res5224z00_15069;
BgL_res5224z00_15069 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_15060, BgL_forwardz00_15062); 
BgL_curz00_15068 = BgL_res5224z00_15069; } 
{ /* Unsafe/http.scm 333 */

{ /* Unsafe/http.scm 333 */
bool_t BgL_test7763z00_16032;
if(
(
(long)(BgL_curz00_15068)>=((long)48)))
{ /* Unsafe/http.scm 333 */
BgL_test7763z00_16032 = 
(
(long)(BgL_curz00_15068)<((long)58))
; }  else 
{ /* Unsafe/http.scm 333 */
BgL_test7763z00_16032 = ((bool_t)0)
; } 
if(BgL_test7763z00_16032)
{ 
long BgL_forwardz00_16038;
BgL_forwardz00_16038 = 
(((long)1)+BgL_forwardz00_15062); 
BgL_forwardz00_15062 = BgL_forwardz00_16038; 
goto BgL_statezd212zd21092z00_14907;}  else 
{ /* Unsafe/http.scm 333 */
if(
(
(long)(BgL_curz00_15068)==((long)32)))
{ /* Unsafe/http.scm 333 */
long BgL_arg1604z00_15070;
BgL_arg1604z00_15070 = 
(((long)1)+BgL_forwardz00_15062); 
{ /* Unsafe/http.scm 333 */
long BgL_newzd2matchzd2_15071;
{ /* Unsafe/http.scm 333 */
long BgL_res5230z00_15072;
BgL_res5230z00_15072 = 
RGC_STOP_MATCH(BgL_iportz00_15060, BgL_arg1604z00_15070); BgL_res5230z00_15072; } 
BgL_newzd2matchzd2_15071 = ((long)0); 
BgL_matchz00_14910 = BgL_newzd2matchzd2_15071; } }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_lastzd2matchzd2_15061; } } } } } }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_lastzd2matchzd2_15074; } } } } }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_lastzd2matchzd2_14981; } } } } } }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_lastzd2matchzd2_15002; } } } } }  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_lastzd2matchzd2_14991; } } } } } }  else 
{ /* Unsafe/http.scm 333 */
if(
(
(long)(BgL_curz00_15021)==((long)47)))
{ 
long BgL_bufposz00_16057;long BgL_forwardz00_16055;long BgL_lastzd2matchzd2_16054;obj_t BgL_iportz00_16053;
BgL_iportz00_16053 = BgL_iportz00_15011; 
BgL_lastzd2matchzd2_16054 = BgL_newzd2matchzd2_15015; 
BgL_forwardz00_16055 = 
(((long)1)+BgL_forwardz00_15013); 
BgL_bufposz00_16057 = BgL_bufposz00_15014; 
BgL_bufposz00_15004 = BgL_bufposz00_16057; 
BgL_forwardz00_15003 = BgL_forwardz00_16055; 
BgL_lastzd2matchzd2_15002 = BgL_lastzd2matchzd2_16054; 
BgL_iportz00_15001 = BgL_iportz00_16053; 
goto BgL_statezd28zd21088z00_14903;}  else 
{ /* Unsafe/http.scm 333 */
BgL_matchz00_14910 = BgL_newzd2matchzd2_15015; } } } } } } }  else 
{ /* Unsafe/http.scm 333 */
long BgL_arg1620z00_15057;
BgL_arg1620z00_15057 = 
(((long)1)+BgL_forwardz00_15048); 
{ /* Unsafe/http.scm 333 */
long BgL_newzd2matchzd2_15058;
{ /* Unsafe/http.scm 333 */
long BgL_res5248z00_15059;
BgL_res5248z00_15059 = 
RGC_STOP_MATCH(BgL_iportz00_15046, BgL_arg1620z00_15057); BgL_res5248z00_15059; } 
BgL_newzd2matchzd2_15058 = ((long)1); 
BgL_matchz00_14910 = BgL_newzd2matchzd2_15058; } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_14320); 
switch( BgL_matchz00_14910) { case ((long)1) : 

{ /* Unsafe/http.scm 345 */
obj_t BgL_cz00_14915;
{ /* Unsafe/http.scm 333 */
bool_t BgL_test7767z00_16062;
{ /* Unsafe/http.scm 333 */
long BgL_arg1783z00_14941;
{ /* Unsafe/http.scm 333 */
long BgL_res5369z00_14942;
BgL_res5369z00_14942 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_14320); 
BgL_arg1783z00_14941 = BgL_res5369z00_14942; } 
BgL_test7767z00_16062 = 
(BgL_arg1783z00_14941==((long)0)); } 
if(BgL_test7767z00_16062)
{ /* Unsafe/http.scm 333 */
BgL_cz00_14915 = BEOF; }  else 
{ /* Unsafe/http.scm 333 */
unsigned char BgL_res5371z00_14943;
BgL_res5371z00_14943 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_14320); 
BgL_cz00_14915 = 
BCHAR(BgL_res5371z00_14943); } } 
{ /* Unsafe/http.scm 347 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_arg1791z00_14916;
{ /* Unsafe/http.scm 347 */
bool_t BgL_test7768z00_16067;
{ /* Unsafe/http.scm 347 */
bool_t BgL_res5375z00_14917;
BgL_res5375z00_14917 = 
EOF_OBJECTP(BgL_cz00_14915); 
BgL_test7768z00_16067 = BgL_res5375z00_14917; } 
if(BgL_test7768z00_16067)
{ /* Unsafe/http.scm 348 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1099z00_14918;
{ /* Unsafe/http.scm 348 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1098z00_14919;
BgL_new1098z00_14919 = 
((BgL_z62iozd2parsezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2parsezd2errorz62_bgl) ))); 
{ /* Unsafe/http.scm 348 */
long BgL_arg1795z00_14920;
{ /* Unsafe/http.scm 348 */
long BgL_res5376z00_14921;
BgL_res5376z00_14921 = 
BGL_CLASS_INDEX(BGl_z62iozd2parsezd2errorz62zz__objectz00); 
BgL_arg1795z00_14920 = BgL_res5376z00_14921; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1098z00_14919), BgL_arg1795z00_14920); } 
BgL_new1099z00_14918 = BgL_new1098z00_14919; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1099z00_14918)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1099z00_14918)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_16077;
{ /* Unsafe/http.scm 348 */
obj_t BgL_arg1793z00_14922;
{ /* Unsafe/http.scm 348 */
obj_t BgL_arg1794z00_14923;
{ /* Unsafe/http.scm 348 */
obj_t BgL_res5377z00_14924;
{ /* Unsafe/http.scm 348 */
obj_t BgL_classz00_14925;
BgL_classz00_14925 = BGl_z62iozd2parsezd2errorz62zz__objectz00; 
BgL_res5377z00_14924 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_14925); } 
BgL_arg1794z00_14923 = BgL_res5377z00_14924; } 
BgL_arg1793z00_14922 = 
VECTOR_REF(BgL_arg1794z00_14923,((long)2)); } 
BgL_auxz00_16077 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1793z00_14922); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1099z00_14918)))->BgL_stackz00)=((obj_t)BgL_auxz00_16077),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1099z00_14918)))->BgL_procz00)=((obj_t)BGl_string7259z00zz__httpz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1099z00_14918)))->BgL_msgz00)=((obj_t)BGl_string7260z00zz__httpz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1099z00_14918)))->BgL_objz00)=((obj_t)BgL_iportz00_14320),BUNSPEC); 
BgL_arg1791z00_14916 = BgL_new1099z00_14918; }  else 
{ /* Unsafe/http.scm 352 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1101z00_14926;
{ /* Unsafe/http.scm 352 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1100z00_14927;
BgL_new1100z00_14927 = 
((BgL_z62iozd2parsezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2parsezd2errorz62_bgl) ))); 
{ /* Unsafe/http.scm 352 */
long BgL_arg1799z00_14928;
{ /* Unsafe/http.scm 352 */
long BgL_res5379z00_14929;
BgL_res5379z00_14929 = 
BGL_CLASS_INDEX(BGl_z62iozd2parsezd2errorz62zz__objectz00); 
BgL_arg1799z00_14928 = BgL_res5379z00_14929; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1100z00_14927), BgL_arg1799z00_14928); } 
BgL_new1101z00_14926 = BgL_new1100z00_14927; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1101z00_14926)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1101z00_14926)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_16097;
{ /* Unsafe/http.scm 352 */
obj_t BgL_arg1796z00_14930;
{ /* Unsafe/http.scm 352 */
obj_t BgL_arg1797z00_14931;
{ /* Unsafe/http.scm 352 */
obj_t BgL_res5380z00_14932;
{ /* Unsafe/http.scm 352 */
obj_t BgL_classz00_14933;
BgL_classz00_14933 = BGl_z62iozd2parsezd2errorz62zz__objectz00; 
BgL_res5380z00_14932 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_14933); } 
BgL_arg1797z00_14931 = BgL_res5380z00_14932; } 
BgL_arg1796z00_14930 = 
VECTOR_REF(BgL_arg1797z00_14931,((long)2)); } 
BgL_auxz00_16097 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg1796z00_14930); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1101z00_14926)))->BgL_stackz00)=((obj_t)BgL_auxz00_16097),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1101z00_14926)))->BgL_procz00)=((obj_t)BGl_string7259z00zz__httpz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1101z00_14926)))->BgL_msgz00)=((obj_t)BGl_string7261z00zz__httpz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1101z00_14926)))->BgL_objz00)=((obj_t)
BGl_httpzd2parsezd2errorzd2msgzd2zz__httpz00(BgL_cz00_14915, BgL_iportz00_14320)),BUNSPEC); 
BgL_arg1791z00_14916 = BgL_new1101z00_14926; } } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg1791z00_14916));} } break;case ((long)0) : 

{ /* Unsafe/http.scm 340 */
obj_t BgL_httpz00_14934;
{ /* Unsafe/http.scm 340 */
long BgL_arg1803z00_14935;
{ /* Unsafe/http.scm 340 */
long BgL_arg1804z00_14936;
{ /* Unsafe/http.scm 333 */
long BgL_res5382z00_14937;
BgL_res5382z00_14937 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_14320); 
BgL_arg1804z00_14936 = BgL_res5382z00_14937; } 
BgL_arg1803z00_14935 = 
(BgL_arg1804z00_14936-((long)1)); } 
BgL_minz00_14944 = 
(int)(((long)0)); 
BgL_maxz00_14945 = 
(int)(BgL_arg1803z00_14935); 
if(
(
(long)(BgL_maxz00_14945)<
(long)(BgL_minz00_14944)))
{ /* Unsafe/http.scm 333 */
long BgL_arg1710z00_14946;
{ /* Unsafe/http.scm 333 */
long BgL_res5358z00_14947;
BgL_res5358z00_14947 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_14320); 
BgL_arg1710z00_14946 = BgL_res5358z00_14947; } 
{ /* Unsafe/http.scm 333 */
long BgL_za72za7_14948;
BgL_za72za7_14948 = 
(long)(BgL_maxz00_14945); 
BgL_maxz00_14945 = 
(int)(
(BgL_arg1710z00_14946+BgL_za72za7_14948)); } }  else 
{ /* Unsafe/http.scm 333 */BFALSE; } 
{ /* Unsafe/http.scm 333 */
bool_t BgL_test7770z00_16122;
if(
(
(long)(BgL_minz00_14944)>=((long)0)))
{ /* Unsafe/http.scm 333 */
if(
(
(long)(BgL_maxz00_14945)>=
(long)(BgL_minz00_14944)))
{ /* Unsafe/http.scm 333 */
long BgL_arg1720z00_14949;
{ /* Unsafe/http.scm 333 */
long BgL_res5362z00_14950;
BgL_res5362z00_14950 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_14320); 
BgL_arg1720z00_14949 = BgL_res5362z00_14950; } 
BgL_test7770z00_16122 = 
(
(long)(BgL_maxz00_14945)<=BgL_arg1720z00_14949); }  else 
{ /* Unsafe/http.scm 333 */
BgL_test7770z00_16122 = ((bool_t)0)
; } }  else 
{ /* Unsafe/http.scm 333 */
BgL_test7770z00_16122 = ((bool_t)0)
; } 
if(BgL_test7770z00_16122)
{ /* Unsafe/http.scm 333 */
BgL_httpz00_14934 = 
rgc_buffer_substring(BgL_iportz00_14320, 
(long)(BgL_minz00_14944), 
(long)(BgL_maxz00_14945)); }  else 
{ /* Unsafe/http.scm 333 */
obj_t BgL_arg1716z00_14951;obj_t BgL_arg1717z00_14952;
{ /* Unsafe/http.scm 333 */
obj_t BgL_arg1718z00_14953;
{ /* Unsafe/http.scm 333 */
obj_t BgL_res5367z00_14954;
{ /* Unsafe/http.scm 333 */
long BgL_arg1707z00_14955;
{ /* Unsafe/http.scm 333 */
long BgL_res5365z00_14956;
BgL_res5365z00_14956 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_14320); 
BgL_arg1707z00_14955 = BgL_res5365z00_14956; } 
BgL_res5367z00_14954 = 
rgc_buffer_substring(BgL_iportz00_14320, ((long)0), BgL_arg1707z00_14955); } 
BgL_arg1718z00_14953 = BgL_res5367z00_14954; } 
{ /* Unsafe/http.scm 333 */
obj_t BgL_list1719z00_14957;
BgL_list1719z00_14957 = 
MAKE_YOUNG_PAIR(BgL_arg1718z00_14953, BNIL); 
BgL_arg1716z00_14951 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string7257z00zz__httpz00, BgL_list1719z00_14957); } } 
BgL_arg1717z00_14952 = 
MAKE_YOUNG_PAIR(
BINT(BgL_minz00_14944), 
BINT(BgL_maxz00_14945)); 
BgL_httpz00_14934 = 
BGl_errorz00zz__errorz00(BGl_string7258z00zz__httpz00, BgL_arg1716z00_14951, BgL_arg1717z00_14952); } } } 
{ /* Unsafe/http.scm 341 */
obj_t BgL_codez00_14938;
BgL_codez00_14938 = 
BGl_httpzd2readzd2fixnumz00zz__httpz00(BgL_iportz00_14320); 
BGl_httpzd2skipzd2blankz00zz__httpz00(BgL_iportz00_14320); 
{ /* Unsafe/http.scm 343 */
obj_t BgL_val2_1402z00_14939;
BgL_val2_1402z00_14939 = 
BGl_httpzd2readzd2linez00zz__httpz00(BgL_iportz00_14320); 
{ /* Unsafe/http.scm 343 */
int BgL_res5387z00_14940;
{ /* Unsafe/http.scm 343 */
int BgL_tmpz00_16149;
BgL_tmpz00_16149 = 
(int)(((long)3)); 
BgL_res5387z00_14940 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_16149); } BgL_res5387z00_14940; } 
{ /* Unsafe/http.scm 343 */
int BgL_tmpz00_16152;
BgL_tmpz00_16152 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_16152, BgL_codez00_14938); } 
{ /* Unsafe/http.scm 343 */
int BgL_tmpz00_16155;
BgL_tmpz00_16155 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_16155, BgL_val2_1402z00_14939); } 
return BgL_httpz00_14934;} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string7254z00zz__httpz00, BGl_string7255z00zz__httpz00, 
BINT(BgL_matchz00_14910));} } } } 

}



/* _http */
obj_t BGl__httpz00zz__httpz00(obj_t BgL_env1463z00_24, obj_t BgL_opt1462z00_23)
{
{ /* Unsafe/http.scm 106 */
{ /* Unsafe/http.scm 106 */

{ /* Unsafe/http.scm 121 */
obj_t BgL_argsz00_2458;
BgL_argsz00_2458 = BNIL; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_authoriza7ationza7_2459;
BgL_authoriza7ationza7_2459 = BFALSE; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_bodyz00_2460;
BgL_bodyz00_2460 = BFALSE; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_connectionz00_2461;
BgL_connectionz00_2461 = BUNSPEC; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_contentzd2typezd2_2462;
BgL_contentzd2typezd2_2462 = BFALSE; 
{ /* Unsafe/http.scm 120 */
obj_t BgL_headerz00_2463;
BgL_headerz00_2463 = BGl_list7262z00zz__httpz00; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_hostz00_2464;
BgL_hostz00_2464 = BGl_string7267z00zz__httpz00; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_httpzd2versionzd2_2465;
BgL_httpzd2versionzd2_2465 = BGl_string7268z00zz__httpz00; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_inz00_2466;
BgL_inz00_2466 = BFALSE; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_loginz00_2467;
BgL_loginz00_2467 = BFALSE; 
{ /* Unsafe/http.scm 111 */
obj_t BgL_methodz00_2468;
BgL_methodz00_2468 = BGl_symbol7269z00zz__httpz00; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_outz00_2469;
BgL_outz00_2469 = BFALSE; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_passwordz00_2470;
BgL_passwordz00_2470 = BFALSE; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_pathz00_2471;
BgL_pathz00_2471 = BGl_string7271z00zz__httpz00; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_portz00_2472;
BgL_portz00_2472 = 
BINT(((long)80)); 
{ /* Unsafe/http.scm 110 */
obj_t BgL_protocolz00_2473;
BgL_protocolz00_2473 = BGl_symbol7272z00zz__httpz00; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_proxyz00_2474;
BgL_proxyz00_2474 = BFALSE; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_socketz00_2475;
BgL_socketz00_2475 = BFALSE; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_timeoutz00_2476;
BgL_timeoutz00_2476 = 
BINT(((long)0)); 
{ /* Unsafe/http.scm 106 */
obj_t BgL_usernamez00_2477;
BgL_usernamez00_2477 = BFALSE; 
{ /* Unsafe/http.scm 106 */

{ 
long BgL_iz00_2478;
BgL_iz00_2478 = ((long)0); 
BgL_check1466z00_2479:
if(
(BgL_iz00_2478==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */BNIL; }  else 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7774z00_16166;
{ /* Unsafe/http.scm 106 */
obj_t BgL_arg2196z00_2485;
BgL_arg2196z00_2485 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_2478); 
BgL_test7774z00_16166 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg2196z00_2485, BGl_list7274z00zz__httpz00)); } 
if(BgL_test7774z00_16166)
{ 
long BgL_iz00_16170;
BgL_iz00_16170 = 
(BgL_iz00_2478+((long)2)); 
BgL_iz00_2478 = BgL_iz00_16170; 
goto BgL_check1466z00_2479;}  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_arg2195z00_2484;
BgL_arg2195z00_2484 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_2478); 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7315z00zz__httpz00, BgL_arg2195z00_2484); } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1468z00_2486;
{ 
long BgL_iz00_9658;
BgL_iz00_9658 = ((long)0); 
BgL_search1465z00_9657:
if(
(BgL_iz00_9658==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1468z00_2486 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_9658==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1468z00_2486 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_9671;
BgL_vz00_9671 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_9658); 
if(
(BgL_vz00_9671==BGl_keyword7275z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1468z00_2486 = 
BINT(
(BgL_iz00_9658+((long)1))); }  else 
{ 
long BgL_iz00_16190;
BgL_iz00_16190 = 
(BgL_iz00_9658+((long)2)); 
BgL_iz00_9658 = BgL_iz00_16190; 
goto BgL_search1465z00_9657;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7778z00_16192;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_9678;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16193;
if(
INTEGERP(BgL_index1468z00_2486))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16193 = BgL_index1468z00_2486
; }  else 
{ 
obj_t BgL_auxz00_16196;
BgL_auxz00_16196 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1468z00_2486); 
FAILURE(BgL_auxz00_16196,BFALSE,BFALSE);} 
BgL_n1z00_9678 = 
(long)CINT(BgL_tmpz00_16193); } 
BgL_test7778z00_16192 = 
(BgL_n1z00_9678>=((long)0)); } 
if(BgL_test7778z00_16192)
{ 
long BgL_auxz00_16202;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16203;
if(
INTEGERP(BgL_index1468z00_2486))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16203 = BgL_index1468z00_2486
; }  else 
{ 
obj_t BgL_auxz00_16206;
BgL_auxz00_16206 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1468z00_2486); 
FAILURE(BgL_auxz00_16206,BFALSE,BFALSE);} 
BgL_auxz00_16202 = 
(long)CINT(BgL_tmpz00_16203); } 
BgL_argsz00_2458 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16202); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1469z00_2488;
{ 
long BgL_iz00_9681;
BgL_iz00_9681 = ((long)0); 
BgL_search1465z00_9680:
if(
(BgL_iz00_9681==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1469z00_2488 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_9681==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1469z00_2488 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_9694;
BgL_vz00_9694 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_9681); 
if(
(BgL_vz00_9694==BGl_keyword7277z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1469z00_2488 = 
BINT(
(BgL_iz00_9681+((long)1))); }  else 
{ 
long BgL_iz00_16228;
BgL_iz00_16228 = 
(BgL_iz00_9681+((long)2)); 
BgL_iz00_9681 = BgL_iz00_16228; 
goto BgL_search1465z00_9680;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7784z00_16230;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_9701;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16231;
if(
INTEGERP(BgL_index1469z00_2488))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16231 = BgL_index1469z00_2488
; }  else 
{ 
obj_t BgL_auxz00_16234;
BgL_auxz00_16234 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1469z00_2488); 
FAILURE(BgL_auxz00_16234,BFALSE,BFALSE);} 
BgL_n1z00_9701 = 
(long)CINT(BgL_tmpz00_16231); } 
BgL_test7784z00_16230 = 
(BgL_n1z00_9701>=((long)0)); } 
if(BgL_test7784z00_16230)
{ 
long BgL_auxz00_16240;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16241;
if(
INTEGERP(BgL_index1469z00_2488))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16241 = BgL_index1469z00_2488
; }  else 
{ 
obj_t BgL_auxz00_16244;
BgL_auxz00_16244 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1469z00_2488); 
FAILURE(BgL_auxz00_16244,BFALSE,BFALSE);} 
BgL_auxz00_16240 = 
(long)CINT(BgL_tmpz00_16241); } 
BgL_authoriza7ationza7_2459 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16240); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1470z00_2490;
{ 
long BgL_iz00_9704;
BgL_iz00_9704 = ((long)0); 
BgL_search1465z00_9703:
if(
(BgL_iz00_9704==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1470z00_2490 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_9704==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1470z00_2490 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_9717;
BgL_vz00_9717 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_9704); 
if(
(BgL_vz00_9717==BGl_keyword7279z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1470z00_2490 = 
BINT(
(BgL_iz00_9704+((long)1))); }  else 
{ 
long BgL_iz00_16266;
BgL_iz00_16266 = 
(BgL_iz00_9704+((long)2)); 
BgL_iz00_9704 = BgL_iz00_16266; 
goto BgL_search1465z00_9703;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7790z00_16268;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_9724;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16269;
if(
INTEGERP(BgL_index1470z00_2490))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16269 = BgL_index1470z00_2490
; }  else 
{ 
obj_t BgL_auxz00_16272;
BgL_auxz00_16272 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1470z00_2490); 
FAILURE(BgL_auxz00_16272,BFALSE,BFALSE);} 
BgL_n1z00_9724 = 
(long)CINT(BgL_tmpz00_16269); } 
BgL_test7790z00_16268 = 
(BgL_n1z00_9724>=((long)0)); } 
if(BgL_test7790z00_16268)
{ 
long BgL_auxz00_16278;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16279;
if(
INTEGERP(BgL_index1470z00_2490))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16279 = BgL_index1470z00_2490
; }  else 
{ 
obj_t BgL_auxz00_16282;
BgL_auxz00_16282 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1470z00_2490); 
FAILURE(BgL_auxz00_16282,BFALSE,BFALSE);} 
BgL_auxz00_16278 = 
(long)CINT(BgL_tmpz00_16279); } 
BgL_bodyz00_2460 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16278); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1471z00_2492;
{ 
long BgL_iz00_9727;
BgL_iz00_9727 = ((long)0); 
BgL_search1465z00_9726:
if(
(BgL_iz00_9727==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1471z00_2492 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_9727==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1471z00_2492 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_9740;
BgL_vz00_9740 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_9727); 
if(
(BgL_vz00_9740==BGl_keyword7281z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1471z00_2492 = 
BINT(
(BgL_iz00_9727+((long)1))); }  else 
{ 
long BgL_iz00_16304;
BgL_iz00_16304 = 
(BgL_iz00_9727+((long)2)); 
BgL_iz00_9727 = BgL_iz00_16304; 
goto BgL_search1465z00_9726;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7796z00_16306;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_9747;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16307;
if(
INTEGERP(BgL_index1471z00_2492))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16307 = BgL_index1471z00_2492
; }  else 
{ 
obj_t BgL_auxz00_16310;
BgL_auxz00_16310 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1471z00_2492); 
FAILURE(BgL_auxz00_16310,BFALSE,BFALSE);} 
BgL_n1z00_9747 = 
(long)CINT(BgL_tmpz00_16307); } 
BgL_test7796z00_16306 = 
(BgL_n1z00_9747>=((long)0)); } 
if(BgL_test7796z00_16306)
{ 
long BgL_auxz00_16316;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16317;
if(
INTEGERP(BgL_index1471z00_2492))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16317 = BgL_index1471z00_2492
; }  else 
{ 
obj_t BgL_auxz00_16320;
BgL_auxz00_16320 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1471z00_2492); 
FAILURE(BgL_auxz00_16320,BFALSE,BFALSE);} 
BgL_auxz00_16316 = 
(long)CINT(BgL_tmpz00_16317); } 
BgL_connectionz00_2461 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16316); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1472z00_2494;
{ 
long BgL_iz00_9750;
BgL_iz00_9750 = ((long)0); 
BgL_search1465z00_9749:
if(
(BgL_iz00_9750==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1472z00_2494 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_9750==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1472z00_2494 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_9763;
BgL_vz00_9763 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_9750); 
if(
(BgL_vz00_9763==BGl_keyword7283z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1472z00_2494 = 
BINT(
(BgL_iz00_9750+((long)1))); }  else 
{ 
long BgL_iz00_16342;
BgL_iz00_16342 = 
(BgL_iz00_9750+((long)2)); 
BgL_iz00_9750 = BgL_iz00_16342; 
goto BgL_search1465z00_9749;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7802z00_16344;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_9770;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16345;
if(
INTEGERP(BgL_index1472z00_2494))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16345 = BgL_index1472z00_2494
; }  else 
{ 
obj_t BgL_auxz00_16348;
BgL_auxz00_16348 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1472z00_2494); 
FAILURE(BgL_auxz00_16348,BFALSE,BFALSE);} 
BgL_n1z00_9770 = 
(long)CINT(BgL_tmpz00_16345); } 
BgL_test7802z00_16344 = 
(BgL_n1z00_9770>=((long)0)); } 
if(BgL_test7802z00_16344)
{ 
long BgL_auxz00_16354;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16355;
if(
INTEGERP(BgL_index1472z00_2494))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16355 = BgL_index1472z00_2494
; }  else 
{ 
obj_t BgL_auxz00_16358;
BgL_auxz00_16358 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1472z00_2494); 
FAILURE(BgL_auxz00_16358,BFALSE,BFALSE);} 
BgL_auxz00_16354 = 
(long)CINT(BgL_tmpz00_16355); } 
BgL_contentzd2typezd2_2462 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16354); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1473z00_2496;
{ 
long BgL_iz00_9773;
BgL_iz00_9773 = ((long)0); 
BgL_search1465z00_9772:
if(
(BgL_iz00_9773==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1473z00_2496 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_9773==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1473z00_2496 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_9786;
BgL_vz00_9786 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_9773); 
if(
(BgL_vz00_9786==BGl_keyword7285z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1473z00_2496 = 
BINT(
(BgL_iz00_9773+((long)1))); }  else 
{ 
long BgL_iz00_16380;
BgL_iz00_16380 = 
(BgL_iz00_9773+((long)2)); 
BgL_iz00_9773 = BgL_iz00_16380; 
goto BgL_search1465z00_9772;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7808z00_16382;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_9793;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16383;
if(
INTEGERP(BgL_index1473z00_2496))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16383 = BgL_index1473z00_2496
; }  else 
{ 
obj_t BgL_auxz00_16386;
BgL_auxz00_16386 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1473z00_2496); 
FAILURE(BgL_auxz00_16386,BFALSE,BFALSE);} 
BgL_n1z00_9793 = 
(long)CINT(BgL_tmpz00_16383); } 
BgL_test7808z00_16382 = 
(BgL_n1z00_9793>=((long)0)); } 
if(BgL_test7808z00_16382)
{ 
long BgL_auxz00_16392;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16393;
if(
INTEGERP(BgL_index1473z00_2496))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16393 = BgL_index1473z00_2496
; }  else 
{ 
obj_t BgL_auxz00_16396;
BgL_auxz00_16396 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1473z00_2496); 
FAILURE(BgL_auxz00_16396,BFALSE,BFALSE);} 
BgL_auxz00_16392 = 
(long)CINT(BgL_tmpz00_16393); } 
BgL_headerz00_2463 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16392); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1474z00_2498;
{ 
long BgL_iz00_9796;
BgL_iz00_9796 = ((long)0); 
BgL_search1465z00_9795:
if(
(BgL_iz00_9796==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1474z00_2498 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_9796==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1474z00_2498 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_9809;
BgL_vz00_9809 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_9796); 
if(
(BgL_vz00_9809==BGl_keyword7287z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1474z00_2498 = 
BINT(
(BgL_iz00_9796+((long)1))); }  else 
{ 
long BgL_iz00_16418;
BgL_iz00_16418 = 
(BgL_iz00_9796+((long)2)); 
BgL_iz00_9796 = BgL_iz00_16418; 
goto BgL_search1465z00_9795;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7814z00_16420;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_9816;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16421;
if(
INTEGERP(BgL_index1474z00_2498))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16421 = BgL_index1474z00_2498
; }  else 
{ 
obj_t BgL_auxz00_16424;
BgL_auxz00_16424 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1474z00_2498); 
FAILURE(BgL_auxz00_16424,BFALSE,BFALSE);} 
BgL_n1z00_9816 = 
(long)CINT(BgL_tmpz00_16421); } 
BgL_test7814z00_16420 = 
(BgL_n1z00_9816>=((long)0)); } 
if(BgL_test7814z00_16420)
{ 
long BgL_auxz00_16430;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16431;
if(
INTEGERP(BgL_index1474z00_2498))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16431 = BgL_index1474z00_2498
; }  else 
{ 
obj_t BgL_auxz00_16434;
BgL_auxz00_16434 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1474z00_2498); 
FAILURE(BgL_auxz00_16434,BFALSE,BFALSE);} 
BgL_auxz00_16430 = 
(long)CINT(BgL_tmpz00_16431); } 
BgL_hostz00_2464 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16430); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1475z00_2500;
{ 
long BgL_iz00_9819;
BgL_iz00_9819 = ((long)0); 
BgL_search1465z00_9818:
if(
(BgL_iz00_9819==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1475z00_2500 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_9819==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1475z00_2500 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_9832;
BgL_vz00_9832 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_9819); 
if(
(BgL_vz00_9832==BGl_keyword7289z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1475z00_2500 = 
BINT(
(BgL_iz00_9819+((long)1))); }  else 
{ 
long BgL_iz00_16456;
BgL_iz00_16456 = 
(BgL_iz00_9819+((long)2)); 
BgL_iz00_9819 = BgL_iz00_16456; 
goto BgL_search1465z00_9818;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7820z00_16458;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_9839;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16459;
if(
INTEGERP(BgL_index1475z00_2500))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16459 = BgL_index1475z00_2500
; }  else 
{ 
obj_t BgL_auxz00_16462;
BgL_auxz00_16462 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1475z00_2500); 
FAILURE(BgL_auxz00_16462,BFALSE,BFALSE);} 
BgL_n1z00_9839 = 
(long)CINT(BgL_tmpz00_16459); } 
BgL_test7820z00_16458 = 
(BgL_n1z00_9839>=((long)0)); } 
if(BgL_test7820z00_16458)
{ 
long BgL_auxz00_16468;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16469;
if(
INTEGERP(BgL_index1475z00_2500))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16469 = BgL_index1475z00_2500
; }  else 
{ 
obj_t BgL_auxz00_16472;
BgL_auxz00_16472 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1475z00_2500); 
FAILURE(BgL_auxz00_16472,BFALSE,BFALSE);} 
BgL_auxz00_16468 = 
(long)CINT(BgL_tmpz00_16469); } 
BgL_httpzd2versionzd2_2465 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16468); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1476z00_2502;
{ 
long BgL_iz00_9842;
BgL_iz00_9842 = ((long)0); 
BgL_search1465z00_9841:
if(
(BgL_iz00_9842==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1476z00_2502 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_9842==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1476z00_2502 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_9855;
BgL_vz00_9855 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_9842); 
if(
(BgL_vz00_9855==BGl_keyword7291z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1476z00_2502 = 
BINT(
(BgL_iz00_9842+((long)1))); }  else 
{ 
long BgL_iz00_16494;
BgL_iz00_16494 = 
(BgL_iz00_9842+((long)2)); 
BgL_iz00_9842 = BgL_iz00_16494; 
goto BgL_search1465z00_9841;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7826z00_16496;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_9862;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16497;
if(
INTEGERP(BgL_index1476z00_2502))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16497 = BgL_index1476z00_2502
; }  else 
{ 
obj_t BgL_auxz00_16500;
BgL_auxz00_16500 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1476z00_2502); 
FAILURE(BgL_auxz00_16500,BFALSE,BFALSE);} 
BgL_n1z00_9862 = 
(long)CINT(BgL_tmpz00_16497); } 
BgL_test7826z00_16496 = 
(BgL_n1z00_9862>=((long)0)); } 
if(BgL_test7826z00_16496)
{ 
long BgL_auxz00_16506;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16507;
if(
INTEGERP(BgL_index1476z00_2502))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16507 = BgL_index1476z00_2502
; }  else 
{ 
obj_t BgL_auxz00_16510;
BgL_auxz00_16510 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1476z00_2502); 
FAILURE(BgL_auxz00_16510,BFALSE,BFALSE);} 
BgL_auxz00_16506 = 
(long)CINT(BgL_tmpz00_16507); } 
BgL_inz00_2466 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16506); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1477z00_2504;
{ 
long BgL_iz00_9865;
BgL_iz00_9865 = ((long)0); 
BgL_search1465z00_9864:
if(
(BgL_iz00_9865==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1477z00_2504 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_9865==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1477z00_2504 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_9878;
BgL_vz00_9878 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_9865); 
if(
(BgL_vz00_9878==BGl_keyword7293z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1477z00_2504 = 
BINT(
(BgL_iz00_9865+((long)1))); }  else 
{ 
long BgL_iz00_16532;
BgL_iz00_16532 = 
(BgL_iz00_9865+((long)2)); 
BgL_iz00_9865 = BgL_iz00_16532; 
goto BgL_search1465z00_9864;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7832z00_16534;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_9885;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16535;
if(
INTEGERP(BgL_index1477z00_2504))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16535 = BgL_index1477z00_2504
; }  else 
{ 
obj_t BgL_auxz00_16538;
BgL_auxz00_16538 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1477z00_2504); 
FAILURE(BgL_auxz00_16538,BFALSE,BFALSE);} 
BgL_n1z00_9885 = 
(long)CINT(BgL_tmpz00_16535); } 
BgL_test7832z00_16534 = 
(BgL_n1z00_9885>=((long)0)); } 
if(BgL_test7832z00_16534)
{ 
long BgL_auxz00_16544;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16545;
if(
INTEGERP(BgL_index1477z00_2504))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16545 = BgL_index1477z00_2504
; }  else 
{ 
obj_t BgL_auxz00_16548;
BgL_auxz00_16548 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1477z00_2504); 
FAILURE(BgL_auxz00_16548,BFALSE,BFALSE);} 
BgL_auxz00_16544 = 
(long)CINT(BgL_tmpz00_16545); } 
BgL_loginz00_2467 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16544); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1478z00_2506;
{ 
long BgL_iz00_9888;
BgL_iz00_9888 = ((long)0); 
BgL_search1465z00_9887:
if(
(BgL_iz00_9888==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1478z00_2506 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_9888==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1478z00_2506 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_9901;
BgL_vz00_9901 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_9888); 
if(
(BgL_vz00_9901==BGl_keyword7295z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1478z00_2506 = 
BINT(
(BgL_iz00_9888+((long)1))); }  else 
{ 
long BgL_iz00_16570;
BgL_iz00_16570 = 
(BgL_iz00_9888+((long)2)); 
BgL_iz00_9888 = BgL_iz00_16570; 
goto BgL_search1465z00_9887;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7838z00_16572;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_9908;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16573;
if(
INTEGERP(BgL_index1478z00_2506))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16573 = BgL_index1478z00_2506
; }  else 
{ 
obj_t BgL_auxz00_16576;
BgL_auxz00_16576 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1478z00_2506); 
FAILURE(BgL_auxz00_16576,BFALSE,BFALSE);} 
BgL_n1z00_9908 = 
(long)CINT(BgL_tmpz00_16573); } 
BgL_test7838z00_16572 = 
(BgL_n1z00_9908>=((long)0)); } 
if(BgL_test7838z00_16572)
{ 
long BgL_auxz00_16582;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16583;
if(
INTEGERP(BgL_index1478z00_2506))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16583 = BgL_index1478z00_2506
; }  else 
{ 
obj_t BgL_auxz00_16586;
BgL_auxz00_16586 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1478z00_2506); 
FAILURE(BgL_auxz00_16586,BFALSE,BFALSE);} 
BgL_auxz00_16582 = 
(long)CINT(BgL_tmpz00_16583); } 
BgL_methodz00_2468 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16582); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1479z00_2508;
{ 
long BgL_iz00_9911;
BgL_iz00_9911 = ((long)0); 
BgL_search1465z00_9910:
if(
(BgL_iz00_9911==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1479z00_2508 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_9911==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1479z00_2508 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_9924;
BgL_vz00_9924 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_9911); 
if(
(BgL_vz00_9924==BGl_keyword7297z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1479z00_2508 = 
BINT(
(BgL_iz00_9911+((long)1))); }  else 
{ 
long BgL_iz00_16608;
BgL_iz00_16608 = 
(BgL_iz00_9911+((long)2)); 
BgL_iz00_9911 = BgL_iz00_16608; 
goto BgL_search1465z00_9910;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7844z00_16610;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_9931;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16611;
if(
INTEGERP(BgL_index1479z00_2508))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16611 = BgL_index1479z00_2508
; }  else 
{ 
obj_t BgL_auxz00_16614;
BgL_auxz00_16614 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1479z00_2508); 
FAILURE(BgL_auxz00_16614,BFALSE,BFALSE);} 
BgL_n1z00_9931 = 
(long)CINT(BgL_tmpz00_16611); } 
BgL_test7844z00_16610 = 
(BgL_n1z00_9931>=((long)0)); } 
if(BgL_test7844z00_16610)
{ 
long BgL_auxz00_16620;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16621;
if(
INTEGERP(BgL_index1479z00_2508))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16621 = BgL_index1479z00_2508
; }  else 
{ 
obj_t BgL_auxz00_16624;
BgL_auxz00_16624 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1479z00_2508); 
FAILURE(BgL_auxz00_16624,BFALSE,BFALSE);} 
BgL_auxz00_16620 = 
(long)CINT(BgL_tmpz00_16621); } 
BgL_outz00_2469 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16620); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1480z00_2510;
{ 
long BgL_iz00_9934;
BgL_iz00_9934 = ((long)0); 
BgL_search1465z00_9933:
if(
(BgL_iz00_9934==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1480z00_2510 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_9934==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1480z00_2510 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_9947;
BgL_vz00_9947 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_9934); 
if(
(BgL_vz00_9947==BGl_keyword7299z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1480z00_2510 = 
BINT(
(BgL_iz00_9934+((long)1))); }  else 
{ 
long BgL_iz00_16646;
BgL_iz00_16646 = 
(BgL_iz00_9934+((long)2)); 
BgL_iz00_9934 = BgL_iz00_16646; 
goto BgL_search1465z00_9933;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7850z00_16648;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_9954;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16649;
if(
INTEGERP(BgL_index1480z00_2510))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16649 = BgL_index1480z00_2510
; }  else 
{ 
obj_t BgL_auxz00_16652;
BgL_auxz00_16652 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1480z00_2510); 
FAILURE(BgL_auxz00_16652,BFALSE,BFALSE);} 
BgL_n1z00_9954 = 
(long)CINT(BgL_tmpz00_16649); } 
BgL_test7850z00_16648 = 
(BgL_n1z00_9954>=((long)0)); } 
if(BgL_test7850z00_16648)
{ 
long BgL_auxz00_16658;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16659;
if(
INTEGERP(BgL_index1480z00_2510))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16659 = BgL_index1480z00_2510
; }  else 
{ 
obj_t BgL_auxz00_16662;
BgL_auxz00_16662 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1480z00_2510); 
FAILURE(BgL_auxz00_16662,BFALSE,BFALSE);} 
BgL_auxz00_16658 = 
(long)CINT(BgL_tmpz00_16659); } 
BgL_passwordz00_2470 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16658); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1481z00_2512;
{ 
long BgL_iz00_9957;
BgL_iz00_9957 = ((long)0); 
BgL_search1465z00_9956:
if(
(BgL_iz00_9957==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1481z00_2512 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_9957==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1481z00_2512 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_9970;
BgL_vz00_9970 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_9957); 
if(
(BgL_vz00_9970==BGl_keyword7301z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1481z00_2512 = 
BINT(
(BgL_iz00_9957+((long)1))); }  else 
{ 
long BgL_iz00_16684;
BgL_iz00_16684 = 
(BgL_iz00_9957+((long)2)); 
BgL_iz00_9957 = BgL_iz00_16684; 
goto BgL_search1465z00_9956;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7856z00_16686;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_9977;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16687;
if(
INTEGERP(BgL_index1481z00_2512))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16687 = BgL_index1481z00_2512
; }  else 
{ 
obj_t BgL_auxz00_16690;
BgL_auxz00_16690 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1481z00_2512); 
FAILURE(BgL_auxz00_16690,BFALSE,BFALSE);} 
BgL_n1z00_9977 = 
(long)CINT(BgL_tmpz00_16687); } 
BgL_test7856z00_16686 = 
(BgL_n1z00_9977>=((long)0)); } 
if(BgL_test7856z00_16686)
{ 
long BgL_auxz00_16696;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16697;
if(
INTEGERP(BgL_index1481z00_2512))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16697 = BgL_index1481z00_2512
; }  else 
{ 
obj_t BgL_auxz00_16700;
BgL_auxz00_16700 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1481z00_2512); 
FAILURE(BgL_auxz00_16700,BFALSE,BFALSE);} 
BgL_auxz00_16696 = 
(long)CINT(BgL_tmpz00_16697); } 
BgL_pathz00_2471 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16696); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1482z00_2514;
{ 
long BgL_iz00_9980;
BgL_iz00_9980 = ((long)0); 
BgL_search1465z00_9979:
if(
(BgL_iz00_9980==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1482z00_2514 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_9980==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1482z00_2514 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_9993;
BgL_vz00_9993 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_9980); 
if(
(BgL_vz00_9993==BGl_keyword7303z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1482z00_2514 = 
BINT(
(BgL_iz00_9980+((long)1))); }  else 
{ 
long BgL_iz00_16722;
BgL_iz00_16722 = 
(BgL_iz00_9980+((long)2)); 
BgL_iz00_9980 = BgL_iz00_16722; 
goto BgL_search1465z00_9979;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7862z00_16724;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_10000;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16725;
if(
INTEGERP(BgL_index1482z00_2514))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16725 = BgL_index1482z00_2514
; }  else 
{ 
obj_t BgL_auxz00_16728;
BgL_auxz00_16728 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1482z00_2514); 
FAILURE(BgL_auxz00_16728,BFALSE,BFALSE);} 
BgL_n1z00_10000 = 
(long)CINT(BgL_tmpz00_16725); } 
BgL_test7862z00_16724 = 
(BgL_n1z00_10000>=((long)0)); } 
if(BgL_test7862z00_16724)
{ 
long BgL_auxz00_16734;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16735;
if(
INTEGERP(BgL_index1482z00_2514))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16735 = BgL_index1482z00_2514
; }  else 
{ 
obj_t BgL_auxz00_16738;
BgL_auxz00_16738 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1482z00_2514); 
FAILURE(BgL_auxz00_16738,BFALSE,BFALSE);} 
BgL_auxz00_16734 = 
(long)CINT(BgL_tmpz00_16735); } 
BgL_portz00_2472 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16734); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1483z00_2516;
{ 
long BgL_iz00_10003;
BgL_iz00_10003 = ((long)0); 
BgL_search1465z00_10002:
if(
(BgL_iz00_10003==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1483z00_2516 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_10003==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1483z00_2516 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_10016;
BgL_vz00_10016 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_10003); 
if(
(BgL_vz00_10016==BGl_keyword7305z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1483z00_2516 = 
BINT(
(BgL_iz00_10003+((long)1))); }  else 
{ 
long BgL_iz00_16760;
BgL_iz00_16760 = 
(BgL_iz00_10003+((long)2)); 
BgL_iz00_10003 = BgL_iz00_16760; 
goto BgL_search1465z00_10002;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7868z00_16762;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_10023;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16763;
if(
INTEGERP(BgL_index1483z00_2516))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16763 = BgL_index1483z00_2516
; }  else 
{ 
obj_t BgL_auxz00_16766;
BgL_auxz00_16766 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1483z00_2516); 
FAILURE(BgL_auxz00_16766,BFALSE,BFALSE);} 
BgL_n1z00_10023 = 
(long)CINT(BgL_tmpz00_16763); } 
BgL_test7868z00_16762 = 
(BgL_n1z00_10023>=((long)0)); } 
if(BgL_test7868z00_16762)
{ 
long BgL_auxz00_16772;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16773;
if(
INTEGERP(BgL_index1483z00_2516))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16773 = BgL_index1483z00_2516
; }  else 
{ 
obj_t BgL_auxz00_16776;
BgL_auxz00_16776 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1483z00_2516); 
FAILURE(BgL_auxz00_16776,BFALSE,BFALSE);} 
BgL_auxz00_16772 = 
(long)CINT(BgL_tmpz00_16773); } 
BgL_protocolz00_2473 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16772); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1484z00_2518;
{ 
long BgL_iz00_10026;
BgL_iz00_10026 = ((long)0); 
BgL_search1465z00_10025:
if(
(BgL_iz00_10026==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1484z00_2518 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_10026==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1484z00_2518 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_10039;
BgL_vz00_10039 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_10026); 
if(
(BgL_vz00_10039==BGl_keyword7307z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1484z00_2518 = 
BINT(
(BgL_iz00_10026+((long)1))); }  else 
{ 
long BgL_iz00_16798;
BgL_iz00_16798 = 
(BgL_iz00_10026+((long)2)); 
BgL_iz00_10026 = BgL_iz00_16798; 
goto BgL_search1465z00_10025;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7874z00_16800;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_10046;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16801;
if(
INTEGERP(BgL_index1484z00_2518))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16801 = BgL_index1484z00_2518
; }  else 
{ 
obj_t BgL_auxz00_16804;
BgL_auxz00_16804 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1484z00_2518); 
FAILURE(BgL_auxz00_16804,BFALSE,BFALSE);} 
BgL_n1z00_10046 = 
(long)CINT(BgL_tmpz00_16801); } 
BgL_test7874z00_16800 = 
(BgL_n1z00_10046>=((long)0)); } 
if(BgL_test7874z00_16800)
{ 
long BgL_auxz00_16810;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16811;
if(
INTEGERP(BgL_index1484z00_2518))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16811 = BgL_index1484z00_2518
; }  else 
{ 
obj_t BgL_auxz00_16814;
BgL_auxz00_16814 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1484z00_2518); 
FAILURE(BgL_auxz00_16814,BFALSE,BFALSE);} 
BgL_auxz00_16810 = 
(long)CINT(BgL_tmpz00_16811); } 
BgL_proxyz00_2474 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16810); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1485z00_2520;
{ 
long BgL_iz00_10049;
BgL_iz00_10049 = ((long)0); 
BgL_search1465z00_10048:
if(
(BgL_iz00_10049==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1485z00_2520 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_10049==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1485z00_2520 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_10062;
BgL_vz00_10062 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_10049); 
if(
(BgL_vz00_10062==BGl_keyword7309z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1485z00_2520 = 
BINT(
(BgL_iz00_10049+((long)1))); }  else 
{ 
long BgL_iz00_16836;
BgL_iz00_16836 = 
(BgL_iz00_10049+((long)2)); 
BgL_iz00_10049 = BgL_iz00_16836; 
goto BgL_search1465z00_10048;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7880z00_16838;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_10069;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16839;
if(
INTEGERP(BgL_index1485z00_2520))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16839 = BgL_index1485z00_2520
; }  else 
{ 
obj_t BgL_auxz00_16842;
BgL_auxz00_16842 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1485z00_2520); 
FAILURE(BgL_auxz00_16842,BFALSE,BFALSE);} 
BgL_n1z00_10069 = 
(long)CINT(BgL_tmpz00_16839); } 
BgL_test7880z00_16838 = 
(BgL_n1z00_10069>=((long)0)); } 
if(BgL_test7880z00_16838)
{ 
long BgL_auxz00_16848;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16849;
if(
INTEGERP(BgL_index1485z00_2520))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16849 = BgL_index1485z00_2520
; }  else 
{ 
obj_t BgL_auxz00_16852;
BgL_auxz00_16852 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1485z00_2520); 
FAILURE(BgL_auxz00_16852,BFALSE,BFALSE);} 
BgL_auxz00_16848 = 
(long)CINT(BgL_tmpz00_16849); } 
BgL_socketz00_2475 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16848); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1486z00_2522;
{ 
long BgL_iz00_10072;
BgL_iz00_10072 = ((long)0); 
BgL_search1465z00_10071:
if(
(BgL_iz00_10072==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1486z00_2522 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_10072==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1486z00_2522 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_10085;
BgL_vz00_10085 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_10072); 
if(
(BgL_vz00_10085==BGl_keyword7311z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1486z00_2522 = 
BINT(
(BgL_iz00_10072+((long)1))); }  else 
{ 
long BgL_iz00_16874;
BgL_iz00_16874 = 
(BgL_iz00_10072+((long)2)); 
BgL_iz00_10072 = BgL_iz00_16874; 
goto BgL_search1465z00_10071;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7886z00_16876;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_10092;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16877;
if(
INTEGERP(BgL_index1486z00_2522))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16877 = BgL_index1486z00_2522
; }  else 
{ 
obj_t BgL_auxz00_16880;
BgL_auxz00_16880 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1486z00_2522); 
FAILURE(BgL_auxz00_16880,BFALSE,BFALSE);} 
BgL_n1z00_10092 = 
(long)CINT(BgL_tmpz00_16877); } 
BgL_test7886z00_16876 = 
(BgL_n1z00_10092>=((long)0)); } 
if(BgL_test7886z00_16876)
{ 
long BgL_auxz00_16886;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16887;
if(
INTEGERP(BgL_index1486z00_2522))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16887 = BgL_index1486z00_2522
; }  else 
{ 
obj_t BgL_auxz00_16890;
BgL_auxz00_16890 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1486z00_2522); 
FAILURE(BgL_auxz00_16890,BFALSE,BFALSE);} 
BgL_auxz00_16886 = 
(long)CINT(BgL_tmpz00_16887); } 
BgL_timeoutz00_2476 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16886); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_index1487z00_2524;
{ 
long BgL_iz00_10095;
BgL_iz00_10095 = ((long)0); 
BgL_search1465z00_10094:
if(
(BgL_iz00_10095==
VECTOR_LENGTH(BgL_opt1462z00_23)))
{ /* Unsafe/http.scm 106 */
BgL_index1487z00_2524 = 
BINT(((long)-1)); }  else 
{ /* Unsafe/http.scm 106 */
if(
(BgL_iz00_10095==
(
VECTOR_LENGTH(BgL_opt1462z00_23)-((long)1))))
{ /* Unsafe/http.scm 106 */
BgL_index1487z00_2524 = 
BGl_errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7316z00zz__httpz00, 
BINT(
VECTOR_LENGTH(BgL_opt1462z00_23))); }  else 
{ /* Unsafe/http.scm 106 */
obj_t BgL_vz00_10108;
BgL_vz00_10108 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_iz00_10095); 
if(
(BgL_vz00_10108==BGl_keyword7313z00zz__httpz00))
{ /* Unsafe/http.scm 106 */
BgL_index1487z00_2524 = 
BINT(
(BgL_iz00_10095+((long)1))); }  else 
{ 
long BgL_iz00_16912;
BgL_iz00_16912 = 
(BgL_iz00_10095+((long)2)); 
BgL_iz00_10095 = BgL_iz00_16912; 
goto BgL_search1465z00_10094;} } } } 
{ /* Unsafe/http.scm 106 */
bool_t BgL_test7892z00_16914;
{ /* Unsafe/http.scm 106 */
long BgL_n1z00_10115;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16915;
if(
INTEGERP(BgL_index1487z00_2524))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16915 = BgL_index1487z00_2524
; }  else 
{ 
obj_t BgL_auxz00_16918;
BgL_auxz00_16918 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1487z00_2524); 
FAILURE(BgL_auxz00_16918,BFALSE,BFALSE);} 
BgL_n1z00_10115 = 
(long)CINT(BgL_tmpz00_16915); } 
BgL_test7892z00_16914 = 
(BgL_n1z00_10115>=((long)0)); } 
if(BgL_test7892z00_16914)
{ 
long BgL_auxz00_16924;
{ /* Unsafe/http.scm 106 */
obj_t BgL_tmpz00_16925;
if(
INTEGERP(BgL_index1487z00_2524))
{ /* Unsafe/http.scm 106 */
BgL_tmpz00_16925 = BgL_index1487z00_2524
; }  else 
{ 
obj_t BgL_auxz00_16928;
BgL_auxz00_16928 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)3541)), BGl_string7318z00zz__httpz00, BGl_string7319z00zz__httpz00, BgL_index1487z00_2524); 
FAILURE(BgL_auxz00_16928,BFALSE,BFALSE);} 
BgL_auxz00_16924 = 
(long)CINT(BgL_tmpz00_16925); } 
BgL_usernamez00_2477 = 
VECTOR_REF(BgL_opt1462z00_23,BgL_auxz00_16924); }  else 
{ /* Unsafe/http.scm 106 */BFALSE; } } } 
{ /* Unsafe/http.scm 106 */
obj_t BgL_argsz00_2526;
BgL_argsz00_2526 = BgL_argsz00_2458; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_authoriza7ationza7_2527;
BgL_authoriza7ationza7_2527 = BgL_authoriza7ationza7_2459; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_bodyz00_2528;
BgL_bodyz00_2528 = BgL_bodyz00_2460; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_connectionz00_2529;
BgL_connectionz00_2529 = BgL_connectionz00_2461; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_contentzd2typezd2_2530;
BgL_contentzd2typezd2_2530 = BgL_contentzd2typezd2_2462; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_headerz00_2531;
BgL_headerz00_2531 = BgL_headerz00_2463; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_hostz00_2532;
BgL_hostz00_2532 = BgL_hostz00_2464; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_httpzd2versionzd2_2533;
BgL_httpzd2versionzd2_2533 = BgL_httpzd2versionzd2_2465; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_inz00_2534;
BgL_inz00_2534 = BgL_inz00_2466; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_loginz00_2535;
BgL_loginz00_2535 = BgL_loginz00_2467; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_methodz00_2536;
BgL_methodz00_2536 = BgL_methodz00_2468; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_outz00_2537;
BgL_outz00_2537 = BgL_outz00_2469; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_passwordz00_2538;
BgL_passwordz00_2538 = BgL_passwordz00_2470; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_pathz00_2539;
BgL_pathz00_2539 = BgL_pathz00_2471; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_portz00_2540;
BgL_portz00_2540 = BgL_portz00_2472; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_protocolz00_2541;
BgL_protocolz00_2541 = BgL_protocolz00_2473; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_proxyz00_2542;
BgL_proxyz00_2542 = BgL_proxyz00_2474; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_socketz00_2543;
BgL_socketz00_2543 = BgL_socketz00_2475; 
{ /* Unsafe/http.scm 106 */
obj_t BgL_timeoutz00_2544;
BgL_timeoutz00_2544 = BgL_timeoutz00_2476; 
return 
BGl_httpz00zz__httpz00(BgL_argsz00_2526, BgL_authoriza7ationza7_2527, BgL_bodyz00_2528, BgL_connectionz00_2529, BgL_contentzd2typezd2_2530, BgL_headerz00_2531, BgL_hostz00_2532, BgL_httpzd2versionzd2_2533, BgL_inz00_2534, BgL_loginz00_2535, BgL_methodz00_2536, BgL_outz00_2537, BgL_passwordz00_2538, BgL_pathz00_2539, BgL_portz00_2540, BgL_protocolz00_2541, BgL_proxyz00_2542, BgL_socketz00_2543, BgL_timeoutz00_2544, BgL_usernamez00_2477);} } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } } 

}



/* http */
BGL_EXPORTED_DEF obj_t BGl_httpz00zz__httpz00(obj_t BgL_argsz00_3, obj_t BgL_authoriza7ationza7_4, obj_t BgL_bodyz00_5, obj_t BgL_connectionz00_6, obj_t BgL_contentzd2typezd2_7, obj_t BgL_headerz00_8, obj_t BgL_hostz00_9, obj_t BgL_httpzd2versionzd2_10, obj_t BgL_inz00_11, obj_t BgL_loginz00_12, obj_t BgL_methodz00_13, obj_t BgL_outz00_14, obj_t BgL_passwordz00_15, obj_t BgL_pathz00_16, obj_t BgL_portz00_17, obj_t BgL_protocolz00_18, obj_t BgL_proxyz00_19, obj_t BgL_socketz00_20, obj_t BgL_timeoutz00_21, obj_t BgL_usernamez00_22)
{
{ /* Unsafe/http.scm 106 */
if(
CBOOL(BgL_socketz00_20))
{ /* Unsafe/http.scm 125 */
BgL_inz00_11 = 
SOCKET_INPUT(BgL_socketz00_20); 
BgL_outz00_14 = 
SOCKET_OUTPUT(BgL_socketz00_20); }  else 
{ /* Unsafe/http.scm 128 */
bool_t BgL_test7896z00_16939;
if(
CBOOL(BgL_inz00_11))
{ /* Unsafe/http.scm 128 */
BgL_test7896z00_16939 = ((bool_t)0)
; }  else 
{ /* Unsafe/http.scm 128 */
if(
CBOOL(BgL_outz00_14))
{ /* Unsafe/http.scm 128 */
BgL_test7896z00_16939 = ((bool_t)0)
; }  else 
{ /* Unsafe/http.scm 128 */
BgL_test7896z00_16939 = ((bool_t)1)
; } } 
if(BgL_test7896z00_16939)
{ /* Unsafe/http.scm 128 */
{ /* Unsafe/http.scm 129 */
bool_t BgL_test7899z00_16944;
if(
CBOOL(BgL_hostz00_9))
{ /* Unsafe/http.scm 129 */
BgL_test7899z00_16944 = 
CBOOL(BgL_portz00_17)
; }  else 
{ /* Unsafe/http.scm 129 */
BgL_test7899z00_16944 = ((bool_t)0)
; } 
if(BgL_test7899z00_16944)
{ /* Unsafe/http.scm 129 */BFALSE; }  else 
{ /* Unsafe/http.scm 129 */
BGl_errorz00zz__errorz00(BGl_string7273z00zz__httpz00, BGl_string7320z00zz__httpz00, BgL_hostz00_9); } } 
BgL_socketz00_20 = 
BGl_makezd2httpzd2socketz00zz__httpz00(BgL_hostz00_9, BgL_portz00_17, BgL_proxyz00_19, BgL_timeoutz00_21); 
BgL_inz00_11 = 
SOCKET_INPUT(BgL_socketz00_20); 
BgL_outz00_14 = 
SOCKET_OUTPUT(BgL_socketz00_20); }  else 
{ /* Unsafe/http.scm 128 */
if(
CBOOL(BgL_inz00_11))
{ /* Unsafe/http.scm 134 */
if(
CBOOL(BgL_outz00_14))
{ /* Unsafe/http.scm 136 */BFALSE; }  else 
{ /* Unsafe/http.scm 136 */
BGl_errorz00zz__errorz00(BGl_string7273z00zz__httpz00, BGl_string7321z00zz__httpz00, BgL_outz00_14); } }  else 
{ /* Unsafe/http.scm 134 */
BGl_errorz00zz__errorz00(BGl_string7273z00zz__httpz00, BGl_string7322z00zz__httpz00, BgL_inz00_11); } } } 
if(
STRINGP(BgL_proxyz00_19))
{ /* Unsafe/http.scm 140 */
obj_t BgL_outz00_10126;
BgL_outz00_10126 = BgL_outz00_14; 
{ /* Unsafe/http.scm 302 */
obj_t BgL_arg2330z00_10127;
{ /* Unsafe/http.scm 302 */
obj_t BgL_arg2331z00_10128;
{ /* Unsafe/http.scm 302 */
obj_t BgL_res5692z00_10130;
BgL_res5692z00_10130 = 
SYMBOL_TO_STRING(
((obj_t)BgL_methodz00_13)); 
BgL_arg2331z00_10128 = BgL_res5692z00_10130; } 
BgL_arg2330z00_10127 = 
BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(BgL_arg2331z00_10128); } 
bgl_display_obj(BgL_arg2330z00_10127, BgL_outz00_10126); } 
{ /* Unsafe/http.scm 303 */
obj_t BgL_tmpz00_16964;
BgL_tmpz00_16964 = 
((obj_t)BgL_outz00_10126); 
bgl_display_string(BGl_string7323z00zz__httpz00, BgL_tmpz00_16964); } 
bgl_display_obj(BgL_hostz00_9, BgL_outz00_10126); 
{ /* Unsafe/http.scm 303 */
obj_t BgL_tmpz00_16968;
BgL_tmpz00_16968 = 
((obj_t)BgL_outz00_10126); 
bgl_display_string(BGl_string7324z00zz__httpz00, BgL_tmpz00_16968); } 
bgl_display_obj(BgL_portz00_17, BgL_outz00_10126); 
bgl_display_obj(BgL_pathz00_16, BgL_outz00_10126); 
{ /* Unsafe/http.scm 303 */
obj_t BgL_tmpz00_16973;
BgL_tmpz00_16973 = 
((obj_t)BgL_outz00_10126); 
bgl_display_string(BGl_string7325z00zz__httpz00, BgL_tmpz00_16973); } 
bgl_display_obj(BgL_httpzd2versionzd2_10, BgL_outz00_10126); 
{ /* Unsafe/http.scm 303 */
obj_t BgL_tmpz00_16977;
BgL_tmpz00_16977 = 
((obj_t)BgL_outz00_10126); 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_tmpz00_16977); } }  else 
{ /* Unsafe/http.scm 141 */
obj_t BgL_outz00_10139;
BgL_outz00_10139 = BgL_outz00_14; 
{ /* Unsafe/http.scm 309 */
obj_t BgL_arg2332z00_10140;
{ /* Unsafe/http.scm 309 */
obj_t BgL_arg2333z00_10141;
{ /* Unsafe/http.scm 309 */
obj_t BgL_res5693z00_10143;
BgL_res5693z00_10143 = 
SYMBOL_TO_STRING(
((obj_t)BgL_methodz00_13)); 
BgL_arg2333z00_10141 = BgL_res5693z00_10143; } 
BgL_arg2332z00_10140 = 
BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(BgL_arg2333z00_10141); } 
bgl_display_obj(BgL_arg2332z00_10140, BgL_outz00_10139); } 
{ /* Unsafe/http.scm 310 */
obj_t BgL_tmpz00_16984;
BgL_tmpz00_16984 = 
((obj_t)BgL_outz00_10139); 
bgl_display_string(BGl_string7325z00zz__httpz00, BgL_tmpz00_16984); } 
bgl_display_obj(BgL_pathz00_16, BgL_outz00_10139); 
{ /* Unsafe/http.scm 310 */
obj_t BgL_tmpz00_16988;
BgL_tmpz00_16988 = 
((obj_t)BgL_outz00_10139); 
bgl_display_string(BGl_string7325z00zz__httpz00, BgL_tmpz00_16988); } 
bgl_display_obj(BgL_httpzd2versionzd2_10, BgL_outz00_10139); 
{ /* Unsafe/http.scm 310 */
obj_t BgL_tmpz00_16992;
BgL_tmpz00_16992 = 
((obj_t)BgL_outz00_10139); 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_tmpz00_16992); } } 
{ /* Unsafe/http.scm 143 */
bool_t BgL_test7904z00_16995;
{ /* Unsafe/http.scm 143 */
bool_t BgL_test7905z00_16996;
if(
(
(long)CINT(BgL_portz00_17)==((long)80)))
{ /* Unsafe/http.scm 143 */
BgL_test7905z00_16996 = 
(BgL_protocolz00_18==BGl_symbol7272z00zz__httpz00)
; }  else 
{ /* Unsafe/http.scm 143 */
BgL_test7905z00_16996 = ((bool_t)0)
; } 
if(BgL_test7905z00_16996)
{ /* Unsafe/http.scm 143 */
BgL_test7904z00_16995 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 143 */
if(
(
(long)CINT(BgL_portz00_17)==((long)443)))
{ /* Unsafe/http.scm 144 */
BgL_test7904z00_16995 = 
(BgL_protocolz00_18==BGl_symbol7327z00zz__httpz00)
; }  else 
{ /* Unsafe/http.scm 144 */
BgL_test7904z00_16995 = ((bool_t)0)
; } } } 
if(BgL_test7904z00_16995)
{ /* Unsafe/http.scm 143 */
bgl_display_string(BGl_string7329z00zz__httpz00, BgL_outz00_14); 
bgl_display_obj(BgL_hostz00_9, BgL_outz00_14); 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_outz00_14); }  else 
{ /* Unsafe/http.scm 143 */
bgl_display_string(BGl_string7329z00zz__httpz00, BgL_outz00_14); 
bgl_display_obj(BgL_hostz00_9, BgL_outz00_14); 
bgl_display_string(BGl_string7324z00zz__httpz00, BgL_outz00_14); 
bgl_display_obj(BgL_portz00_17, BgL_outz00_14); 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_outz00_14); } } 
{ 
obj_t BgL_l1390z00_2566;
BgL_l1390z00_2566 = BgL_headerz00_8; 
BgL_zc3z04anonymousza32230ze3z87_2567:
if(
PAIRP(BgL_l1390z00_2566))
{ /* Unsafe/http.scm 148 */
{ /* Unsafe/http.scm 149 */
obj_t BgL_hz00_2569;
BgL_hz00_2569 = 
CAR(BgL_l1390z00_2566); 
{ /* Unsafe/http.scm 149 */
obj_t BgL_arg2232z00_2570;
{ /* Unsafe/http.scm 149 */
obj_t BgL_arg2233z00_2571;
BgL_arg2233z00_2571 = 
CAR(
((obj_t)BgL_hz00_2569)); 
{ /* Unsafe/http.scm 149 */
obj_t BgL_res5697z00_10169;
{ /* Unsafe/http.scm 149 */
obj_t BgL_arg5067z00_10168;
BgL_arg5067z00_10168 = 
KEYWORD_TO_STRING(
((obj_t)BgL_arg2233z00_2571)); 
BgL_res5697z00_10169 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg5067z00_10168); } 
BgL_arg2232z00_2570 = BgL_res5697z00_10169; } } 
bgl_display_obj(BgL_arg2232z00_2570, BgL_outz00_14); } 
bgl_display_string(BGl_string7330z00zz__httpz00, BgL_outz00_14); 
{ /* Unsafe/http.scm 150 */
obj_t BgL_arg2234z00_2572;
{ /* Unsafe/http.scm 150 */
bool_t BgL_test7909z00_17023;
{ /* Unsafe/http.scm 150 */
obj_t BgL_tmpz00_17024;
BgL_tmpz00_17024 = 
CDR(
((obj_t)BgL_hz00_2569)); 
BgL_test7909z00_17023 = 
PAIRP(BgL_tmpz00_17024); } 
if(BgL_test7909z00_17023)
{ /* Unsafe/http.scm 150 */
obj_t BgL_pairz00_10177;
BgL_pairz00_10177 = 
CDR(
((obj_t)BgL_hz00_2569)); 
BgL_arg2234z00_2572 = 
CAR(BgL_pairz00_10177); }  else 
{ /* Unsafe/http.scm 150 */
BgL_arg2234z00_2572 = 
CDR(
((obj_t)BgL_hz00_2569)); } } 
bgl_display_obj(BgL_arg2234z00_2572, BgL_outz00_14); } 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_outz00_14); } 
{ 
obj_t BgL_l1390z00_17035;
BgL_l1390z00_17035 = 
CDR(BgL_l1390z00_2566); 
BgL_l1390z00_2566 = BgL_l1390z00_17035; 
goto BgL_zc3z04anonymousza32230ze3z87_2567;} }  else 
{ /* Unsafe/http.scm 148 */((bool_t)1); } } 
if(
STRINGP(BgL_loginz00_12))
{ /* Unsafe/http.scm 156 */
obj_t BgL_outz00_10183;
BgL_outz00_10183 = BgL_outz00_14; 
{ /* Unsafe/http.scm 316 */
obj_t BgL_uinfoz00_10184;
BgL_uinfoz00_10184 = 
BGl_base64zd2encodezd2zz__base64z00(BgL_loginz00_12, 
BINT(((long)-1))); 
{ /* Unsafe/http.scm 317 */
obj_t BgL_tmpz00_17041;
BgL_tmpz00_17041 = 
((obj_t)BgL_outz00_10183); 
bgl_display_string(BGl_string7331z00zz__httpz00, BgL_tmpz00_17041); } 
bgl_display_obj(BgL_uinfoz00_10184, BgL_outz00_10183); 
{ /* Unsafe/http.scm 317 */
obj_t BgL_tmpz00_17045;
BgL_tmpz00_17045 = 
((obj_t)BgL_outz00_10183); 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_tmpz00_17045); } } }  else 
{ /* Unsafe/http.scm 155 */
if(
STRINGP(BgL_authoriza7ationza7_4))
{ /* Unsafe/http.scm 157 */
bgl_display_string(BGl_string7332z00zz__httpz00, BgL_outz00_14); 
bgl_display_obj(BgL_authoriza7ationza7_4, BgL_outz00_14); 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_outz00_14); }  else 
{ /* Unsafe/http.scm 159 */
bool_t BgL_test7912z00_17053;
if(
STRINGP(BgL_usernamez00_22))
{ /* Unsafe/http.scm 159 */
BgL_test7912z00_17053 = 
STRINGP(BgL_passwordz00_15)
; }  else 
{ /* Unsafe/http.scm 159 */
BgL_test7912z00_17053 = ((bool_t)0)
; } 
if(BgL_test7912z00_17053)
{ /* Unsafe/http.scm 160 */
obj_t BgL_arg2243z00_2582;
BgL_arg2243z00_2582 = 
string_append_3(BgL_usernamez00_22, BGl_string7324z00zz__httpz00, BgL_passwordz00_15); 
{ /* Unsafe/http.scm 160 */
obj_t BgL_outz00_10196;
BgL_outz00_10196 = BgL_outz00_14; 
{ /* Unsafe/http.scm 316 */
obj_t BgL_uinfoz00_10197;
BgL_uinfoz00_10197 = 
BGl_base64zd2encodezd2zz__base64z00(BgL_arg2243z00_2582, 
BINT(((long)-1))); 
{ /* Unsafe/http.scm 317 */
obj_t BgL_tmpz00_17060;
BgL_tmpz00_17060 = 
((obj_t)BgL_outz00_10196); 
bgl_display_string(BGl_string7331z00zz__httpz00, BgL_tmpz00_17060); } 
bgl_display_obj(BgL_uinfoz00_10197, BgL_outz00_10196); 
{ /* Unsafe/http.scm 317 */
obj_t BgL_tmpz00_17064;
BgL_tmpz00_17064 = 
((obj_t)BgL_outz00_10196); 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_tmpz00_17064); } } } }  else 
{ /* Unsafe/http.scm 159 */BFALSE; } } } 
if(
STRINGP(BgL_connectionz00_6))
{ /* Unsafe/http.scm 162 */
bgl_display_string(BGl_string7333z00zz__httpz00, BgL_outz00_14); 
bgl_display_obj(BgL_connectionz00_6, BgL_outz00_14); 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_outz00_14); }  else 
{ /* Unsafe/http.scm 162 */BFALSE; } 
{ /* Unsafe/http.scm 165 */
bool_t BgL_test7915z00_17072;
{ /* Unsafe/http.scm 165 */
bool_t BgL_test7916z00_17073;
if(
(BgL_methodz00_13==BGl_symbol7334z00zz__httpz00))
{ /* Unsafe/http.scm 165 */
BgL_test7916z00_17073 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 165 */
BgL_test7916z00_17073 = 
(BgL_methodz00_13==BGl_symbol7336z00zz__httpz00)
; } 
if(BgL_test7916z00_17073)
{ /* Unsafe/http.scm 166 */
bool_t BgL__ortest_1078z00_2633;
BgL__ortest_1078z00_2633 = 
(BgL_contentzd2typezd2_7==BGl_symbol7338z00zz__httpz00); 
if(BgL__ortest_1078z00_2633)
{ /* Unsafe/http.scm 166 */
BgL_test7915z00_17072 = BgL__ortest_1078z00_2633
; }  else 
{ /* Unsafe/http.scm 166 */
BgL_test7915z00_17072 = 
PAIRP(BgL_argsz00_3)
; } }  else 
{ /* Unsafe/http.scm 165 */
BgL_test7915z00_17072 = ((bool_t)0)
; } } 
if(BgL_test7915z00_17072)
{ /* Unsafe/http.scm 165 */
if(
(BgL_contentzd2typezd2_7==BGl_symbol7338z00zz__httpz00))
{ /* Unsafe/http.scm 171 */
obj_t BgL_boundaryz00_2591;
BgL_boundaryz00_2591 = 
BGl_generatezd2httpzd2boundaryz00zz__httpz00(); 
{ /* Unsafe/http.scm 171 */
obj_t BgL_contentz00_2592;
BgL_contentz00_2592 = 
BGl_makezd2httpzd2postzd2bodyzd2zz__httpz00(BgL_boundaryz00_2591, BgL_argsz00_3); 
{ /* Unsafe/http.scm 172 */
obj_t BgL_contentzd2lengthzd2_2593;
{ /* Unsafe/http.scm 173 */
obj_t BgL_runner2262z00_2619;
if(
NULLP(BgL_contentz00_2592))
{ /* Unsafe/http.scm 173 */
BgL_runner2262z00_2619 = BNIL; }  else 
{ /* Unsafe/http.scm 173 */
obj_t BgL_head1394z00_2605;
{ /* Unsafe/http.scm 173 */
long BgL_arg2260z00_2617;
BgL_arg2260z00_2617 = 
STRING_LENGTH(
CAR(BgL_contentz00_2592)); 
{ /* Unsafe/http.scm 173 */
obj_t BgL_res5707z00_10212;
BgL_res5707z00_10212 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2260z00_2617), BNIL); 
BgL_head1394z00_2605 = BgL_res5707z00_10212; } } 
{ /* Unsafe/http.scm 173 */
obj_t BgL_g1397z00_2606;
BgL_g1397z00_2606 = 
CDR(BgL_contentz00_2592); 
{ 
obj_t BgL_l1392z00_10239;obj_t BgL_tail1395z00_10240;
BgL_l1392z00_10239 = BgL_g1397z00_2606; 
BgL_tail1395z00_10240 = BgL_head1394z00_2605; 
BgL_zc3z04anonymousza32255ze3z87_10238:
if(
NULLP(BgL_l1392z00_10239))
{ /* Unsafe/http.scm 173 */
BgL_runner2262z00_2619 = BgL_head1394z00_2605; }  else 
{ /* Unsafe/http.scm 173 */
obj_t BgL_newtail1396z00_10247;
{ /* Unsafe/http.scm 173 */
long BgL_arg2258z00_10248;
{ /* Unsafe/http.scm 173 */
obj_t BgL_stringz00_10253;
BgL_stringz00_10253 = 
CAR(
((obj_t)BgL_l1392z00_10239)); 
BgL_arg2258z00_10248 = 
STRING_LENGTH(BgL_stringz00_10253); } 
{ /* Unsafe/http.scm 173 */
obj_t BgL_res5716z00_10255;
BgL_res5716z00_10255 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg2258z00_10248), BNIL); 
BgL_newtail1396z00_10247 = BgL_res5716z00_10255; } } 
SET_CDR(BgL_tail1395z00_10240, BgL_newtail1396z00_10247); 
{ /* Unsafe/http.scm 173 */
obj_t BgL_arg2257z00_10250;
BgL_arg2257z00_10250 = 
CDR(
((obj_t)BgL_l1392z00_10239)); 
{ 
obj_t BgL_tail1395z00_17102;obj_t BgL_l1392z00_17101;
BgL_l1392z00_17101 = BgL_arg2257z00_10250; 
BgL_tail1395z00_17102 = BgL_newtail1396z00_10247; 
BgL_tail1395z00_10240 = BgL_tail1395z00_17102; 
BgL_l1392z00_10239 = BgL_l1392z00_17101; 
goto BgL_zc3z04anonymousza32255ze3z87_10238;} } } } } } 
BgL_contentzd2lengthzd2_2593 = 
BGl_zb2zb2zz__r4_numbers_6_5z00(BgL_runner2262z00_2619); } 
{ /* Unsafe/http.scm 173 */

bgl_display_string(BGl_string7340z00zz__httpz00, BgL_outz00_14); 
bgl_display_obj(BgL_contentzd2lengthzd2_2593, BgL_outz00_14); 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_outz00_14); 
bgl_display_string(BGl_string7341z00zz__httpz00, BgL_outz00_14); 
{ /* Unsafe/http.scm 176 */
obj_t BgL_arg2249z00_2594;
BgL_arg2249z00_2594 = 
c_substring(BgL_boundaryz00_2591, ((long)2), 
STRING_LENGTH(BgL_boundaryz00_2591)); 
bgl_display_obj(BgL_arg2249z00_2594, BgL_outz00_14); } 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_outz00_14); 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_outz00_14); 
{ 
obj_t BgL_l1398z00_10290;
{ /* Unsafe/http.scm 178 */
bool_t BgL_tmpz00_17113;
BgL_l1398z00_10290 = BgL_contentz00_2592; 
BgL_zc3z04anonymousza32251ze3z87_10289:
if(
PAIRP(BgL_l1398z00_10290))
{ /* Unsafe/http.scm 178 */
{ /* Unsafe/http.scm 178 */
obj_t BgL_oz00_10295;
BgL_oz00_10295 = 
CAR(BgL_l1398z00_10290); 
{ /* Unsafe/http.scm 178 */
obj_t BgL_portz00_10300;
BgL_portz00_10300 = BgL_outz00_14; 
{ /* Unsafe/http.scm 178 */
obj_t BgL_tmpz00_17117;
BgL_tmpz00_17117 = 
((obj_t)BgL_oz00_10295); 
bgl_display_string(BgL_tmpz00_17117, BgL_portz00_10300); } } } 
{ 
obj_t BgL_l1398z00_17120;
BgL_l1398z00_17120 = 
CDR(BgL_l1398z00_10290); 
BgL_l1398z00_10290 = BgL_l1398z00_17120; 
goto BgL_zc3z04anonymousza32251ze3z87_10289;} }  else 
{ /* Unsafe/http.scm 178 */
BgL_tmpz00_17113 = ((bool_t)1)
; } 
BBOOL(BgL_tmpz00_17113); } } } } } }  else 
{ /* Unsafe/http.scm 180 */
obj_t BgL_contentz00_2620;obj_t BgL_ctz00_2621;
BgL_contentz00_2620 = 
BGl_xzd2wwwzd2formzd2urlencodezd2zz__urlz00(BgL_argsz00_3); 
if(
CBOOL(BgL_contentzd2typezd2_7))
{ /* Unsafe/http.scm 181 */
BgL_ctz00_2621 = BgL_contentzd2typezd2_7; }  else 
{ /* Unsafe/http.scm 181 */
BgL_ctz00_2621 = BGl_string7342z00zz__httpz00; } 
bgl_display_string(BGl_string7343z00zz__httpz00, BgL_outz00_14); 
bgl_display_obj(BgL_ctz00_2621, BgL_outz00_14); 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_outz00_14); 
bgl_display_string(BGl_string7340z00zz__httpz00, BgL_outz00_14); 
{ /* Unsafe/http.scm 183 */
long BgL_arg2263z00_2622;
BgL_arg2263z00_2622 = 
STRING_LENGTH(BgL_contentz00_2620); 
bgl_display_obj(
BINT(BgL_arg2263z00_2622), BgL_outz00_14); } 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_outz00_14); 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_outz00_14); 
bgl_display_obj(BgL_contentz00_2620, BgL_outz00_14); 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_outz00_14); } }  else 
{ /* Unsafe/http.scm 165 */
if(
STRINGP(BgL_bodyz00_5))
{ /* Unsafe/http.scm 187 */
bgl_display_string(BGl_string7340z00zz__httpz00, BgL_outz00_14); 
{ /* Unsafe/http.scm 189 */
long BgL_arg2265z00_2625;
BgL_arg2265z00_2625 = 
STRING_LENGTH(BgL_bodyz00_5); 
bgl_display_obj(
BINT(BgL_arg2265z00_2625), BgL_outz00_14); } 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_outz00_14); 
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_outz00_14); 
bgl_display_obj(BgL_bodyz00_5, BgL_outz00_14); }  else 
{ /* Unsafe/http.scm 187 */
if(
INPUT_PORTP(BgL_bodyz00_5))
{ /* Unsafe/http.scm 192 */
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_outz00_14); 
{ /* Unsafe/http.scm 195 */
obj_t BgL_g2268z00_2628;
BgL_g2268z00_2628 = BgL_outz00_14; 
{ /* Ieee/input.scm 85 */

BINT(
BGl_sendzd2charszd2zz__r4_input_6_10_2z00(BgL_bodyz00_5, BgL_g2268z00_2628, 
BINT(((long)-1)), 
BINT(((long)-1)))); } } }  else 
{ /* Unsafe/http.scm 192 */
if(
PROCEDUREP(BgL_bodyz00_5))
{ /* Unsafe/http.scm 196 */
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_outz00_14); 
PROCEDURE_ENTRY(BgL_bodyz00_5)(BgL_bodyz00_5, BgL_outz00_14, BEOA); }  else 
{ /* Unsafe/http.scm 196 */
bgl_display_string(BGl_string7326z00zz__httpz00, BgL_outz00_14); } } } } } 
bgl_flush_output_port(BgL_outz00_14); 
return BgL_socketz00_20;} 

}



/* make-http-socket */
obj_t BGl_makezd2httpzd2socketz00zz__httpz00(obj_t BgL_hostz00_25, obj_t BgL_portz00_26, obj_t BgL_proxyz00_27, obj_t BgL_timeoutz00_28)
{
{ /* Unsafe/http.scm 208 */
if(
STRINGP(BgL_proxyz00_27))
{ /* Unsafe/http.scm 210 */
obj_t BgL_iz00_2636;
{ /* Ieee/string.scm 219 */

BgL_iz00_2636 = 
BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL_proxyz00_27, 
BCHAR(((unsigned char)':')), 
BINT(((long)0))); } 
if(
CBOOL(BgL_iz00_2636))
{ /* Unsafe/http.scm 211 */
BgL_hostz00_25 = 
c_substring(BgL_proxyz00_27, ((long)0), 
(long)CINT(BgL_iz00_2636)); 
{ /* Unsafe/http.scm 215 */
obj_t BgL_arg2271z00_2637;
BgL_arg2271z00_2637 = 
c_substring(BgL_proxyz00_27, 
(
(long)CINT(BgL_iz00_2636)+((long)1)), 
STRING_LENGTH(BgL_proxyz00_27)); 
{ /* Unsafe/http.scm 214 */
long BgL_tmpz00_17175;
{ /* Unsafe/http.scm 214 */
char * BgL_tmpz00_17176;
BgL_tmpz00_17176 = 
BSTRING_TO_STRING(BgL_arg2271z00_2637); 
BgL_tmpz00_17175 = 
BGL_STRTOL(BgL_tmpz00_17176, ((long)0), ((long)10)); } 
BgL_portz00_26 = 
BINT(BgL_tmpz00_17175); } } }  else 
{ /* Unsafe/http.scm 211 */
BgL_hostz00_25 = BgL_proxyz00_27; 
BgL_portz00_26 = 
BINT(((long)80)); } }  else 
{ /* Unsafe/http.scm 209 */BFALSE; } 
if(
STRINGP(BgL_hostz00_25))
{ /* Unsafe/http.scm 220 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_portz00_26))
{ /* Unsafe/http.scm 225 */
obj_t BgL_sz00_2645;
{ /* Unsafe/http.scm 225 */
obj_t BgL_domainz00_2646;
BgL_domainz00_2646 = BGl_symbol7344z00zz__httpz00; 
BgL_sz00_2645 = 
BGl_makezd2clientzd2socketz00zz__socketz00(BgL_hostz00_25, 
CINT(BgL_portz00_26), BgL_domainz00_2646, BTRUE, BTRUE, BgL_timeoutz00_28); } 
return BgL_sz00_2645;}  else 
{ /* Unsafe/http.scm 222 */
return 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7346z00zz__httpz00, BgL_portz00_26);} }  else 
{ /* Unsafe/http.scm 220 */
return 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_symbol7272z00zz__httpz00, BGl_string7347z00zz__httpz00, BgL_hostz00_25);} } 

}



/* make-http-post-body */
obj_t BGl_makezd2httpzd2postzd2bodyzd2zz__httpz00(obj_t BgL_boundaryz00_31, obj_t BgL_argsz00_32)
{
{ /* Unsafe/http.scm 258 */
if(
NULLP(BgL_argsz00_32))
{ /* Unsafe/http.scm 265 */
return BGl_list7348z00zz__httpz00;}  else 
{ /* Unsafe/http.scm 265 */
return 
BGl_loopze70ze7zz__httpz00(BgL_boundaryz00_31, BgL_argsz00_32);} } 

}



/* loop~0 */
obj_t BGl_loopze70ze7zz__httpz00(obj_t BgL_boundaryz00_14464, obj_t BgL_argsz00_2674)
{
{ /* Unsafe/http.scm 267 */
if(
NULLP(BgL_argsz00_2674))
{ /* Unsafe/http.scm 269 */
obj_t BgL_list2296z00_2677;
{ /* Unsafe/http.scm 269 */
obj_t BgL_arg2297z00_2678;
{ /* Unsafe/http.scm 269 */
obj_t BgL_arg2298z00_2679;
BgL_arg2298z00_2679 = 
MAKE_YOUNG_PAIR(BGl_string7326z00zz__httpz00, BNIL); 
BgL_arg2297z00_2678 = 
MAKE_YOUNG_PAIR(BGl_string7349z00zz__httpz00, BgL_arg2298z00_2679); } 
BgL_list2296z00_2677 = 
MAKE_YOUNG_PAIR(BgL_boundaryz00_14464, BgL_arg2297z00_2678); } 
return BgL_list2296z00_2677;}  else 
{ /* Unsafe/http.scm 270 */
obj_t BgL_az00_2680;
BgL_az00_2680 = 
CAR(
((obj_t)BgL_argsz00_2674)); 
{ /* Unsafe/http.scm 270 */
obj_t BgL_bodyz00_2681;
{ /* Unsafe/http.scm 271 */
obj_t BgL_arg2317z00_2702;obj_t BgL_arg2318z00_2703;
{ /* Unsafe/http.scm 271 */
obj_t BgL_arg2319z00_2704;
{ /* Unsafe/http.scm 271 */
obj_t BgL_pairz00_10358;
BgL_pairz00_10358 = 
CDR(
((obj_t)BgL_az00_2680)); 
BgL_arg2319z00_2704 = 
CAR(BgL_pairz00_10358); } 
if(
STRINGP(BgL_arg2319z00_2704))
{ /* Unsafe/http.scm 261 */
BgL_arg2317z00_2702 = BgL_arg2319z00_2704; }  else 
{ /* Unsafe/http.scm 263 */
obj_t BgL_zc3z04anonymousza32325ze3z87_14321;
BgL_zc3z04anonymousza32325ze3z87_14321 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza32325ze3ze5zz__httpz00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza32325ze3z87_14321, 
(int)(((long)0)), BgL_arg2319z00_2704); 
BgL_arg2317z00_2702 = 
BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(BgL_zc3z04anonymousza32325ze3z87_14321); } } 
{ /* Unsafe/http.scm 272 */
obj_t BgL_arg2320z00_2705;
{ /* Unsafe/http.scm 272 */
obj_t BgL_arg2321z00_2706;
BgL_arg2321z00_2706 = 
CDR(
((obj_t)BgL_argsz00_2674)); 
BgL_arg2320z00_2705 = 
BGl_loopze70ze7zz__httpz00(BgL_boundaryz00_14464, BgL_arg2321z00_2706); } 
BgL_arg2318z00_2703 = 
MAKE_YOUNG_PAIR(BGl_string7326z00zz__httpz00, BgL_arg2320z00_2705); } 
BgL_bodyz00_2681 = 
MAKE_YOUNG_PAIR(BgL_arg2317z00_2702, BgL_arg2318z00_2703); } 
{ /* Unsafe/http.scm 271 */
obj_t BgL_hdz00_2682;
{ /* Unsafe/http.scm 273 */
bool_t BgL_test7934z00_17215;
{ /* Unsafe/http.scm 273 */
obj_t BgL_tmpz00_17216;
{ /* Unsafe/http.scm 273 */
obj_t BgL_pairz00_10367;
BgL_pairz00_10367 = 
CDR(
((obj_t)BgL_az00_2680)); 
BgL_tmpz00_17216 = 
CDR(BgL_pairz00_10367); } 
BgL_test7934z00_17215 = 
PAIRP(BgL_tmpz00_17216); } 
if(BgL_test7934z00_17215)
{ /* Unsafe/http.scm 274 */
obj_t BgL_arg2314z00_2699;obj_t BgL_arg2315z00_2700;
{ /* Unsafe/http.scm 274 */
obj_t BgL_pairz00_10374;
{ /* Unsafe/http.scm 274 */
obj_t BgL_pairz00_10373;
BgL_pairz00_10373 = 
CDR(
((obj_t)BgL_az00_2680)); 
BgL_pairz00_10374 = 
CDR(BgL_pairz00_10373); } 
BgL_arg2314z00_2699 = 
CAR(BgL_pairz00_10374); } 
BgL_arg2315z00_2700 = 
MAKE_YOUNG_PAIR(BGl_string7350z00zz__httpz00, BgL_bodyz00_2681); 
BgL_hdz00_2682 = 
MAKE_YOUNG_PAIR(BgL_arg2314z00_2699, BgL_arg2315z00_2700); }  else 
{ /* Unsafe/http.scm 273 */
BgL_hdz00_2682 = 
MAKE_YOUNG_PAIR(BGl_string7326z00zz__httpz00, BgL_bodyz00_2681); } } 
{ /* Unsafe/http.scm 273 */
obj_t BgL_dispz00_2683;
{ /* Unsafe/http.scm 276 */
bool_t BgL_test7935z00_17228;
{ /* Unsafe/http.scm 276 */
obj_t BgL_tmpz00_17229;
BgL_tmpz00_17229 = 
CAR(
((obj_t)BgL_az00_2680)); 
BgL_test7935z00_17228 = 
PAIRP(BgL_tmpz00_17229); } 
if(BgL_test7935z00_17228)
{ /* Unsafe/http.scm 278 */
obj_t BgL_arg2302z00_2687;
{ /* Unsafe/http.scm 278 */
obj_t BgL_arg2303z00_2688;obj_t BgL_arg2304z00_2689;
{ /* Unsafe/http.scm 278 */
obj_t BgL_pairz00_10380;
BgL_pairz00_10380 = 
CAR(
((obj_t)BgL_az00_2680)); 
BgL_arg2303z00_2688 = 
CAR(BgL_pairz00_10380); } 
{ /* Unsafe/http.scm 278 */
obj_t BgL_arg2305z00_2690;
{ /* Unsafe/http.scm 278 */
obj_t BgL_arg2306z00_2691;obj_t BgL_arg2307z00_2692;
{ /* Unsafe/http.scm 278 */
obj_t BgL_pairz00_10386;
{ /* Unsafe/http.scm 278 */
obj_t BgL_pairz00_10385;
BgL_pairz00_10385 = 
CAR(
((obj_t)BgL_az00_2680)); 
BgL_pairz00_10386 = 
CDR(BgL_pairz00_10385); } 
BgL_arg2306z00_2691 = 
CAR(BgL_pairz00_10386); } 
BgL_arg2307z00_2692 = 
MAKE_YOUNG_PAIR(BGl_string7326z00zz__httpz00, BgL_hdz00_2682); 
BgL_arg2305z00_2690 = 
MAKE_YOUNG_PAIR(BgL_arg2306z00_2691, BgL_arg2307z00_2692); } 
BgL_arg2304z00_2689 = 
MAKE_YOUNG_PAIR(BGl_string7351z00zz__httpz00, BgL_arg2305z00_2690); } 
BgL_arg2302z00_2687 = 
MAKE_YOUNG_PAIR(BgL_arg2303z00_2688, BgL_arg2304z00_2689); } 
BgL_dispz00_2683 = 
MAKE_YOUNG_PAIR(BGl_string7352z00zz__httpz00, BgL_arg2302z00_2687); }  else 
{ /* Unsafe/http.scm 281 */
obj_t BgL_arg2308z00_2693;
{ /* Unsafe/http.scm 281 */
obj_t BgL_arg2309z00_2694;obj_t BgL_arg2310z00_2695;
BgL_arg2309z00_2694 = 
CAR(
((obj_t)BgL_az00_2680)); 
BgL_arg2310z00_2695 = 
MAKE_YOUNG_PAIR(BGl_string7353z00zz__httpz00, BgL_hdz00_2682); 
BgL_arg2308z00_2693 = 
MAKE_YOUNG_PAIR(BgL_arg2309z00_2694, BgL_arg2310z00_2695); } 
BgL_dispz00_2683 = 
MAKE_YOUNG_PAIR(BGl_string7352z00zz__httpz00, BgL_arg2308z00_2693); } } 
{ /* Unsafe/http.scm 276 */

{ /* Unsafe/http.scm 283 */
obj_t BgL_arg2299z00_2684;
BgL_arg2299z00_2684 = 
MAKE_YOUNG_PAIR(BGl_string7326z00zz__httpz00, BgL_dispz00_2683); 
return 
MAKE_YOUNG_PAIR(BgL_boundaryz00_14464, BgL_arg2299z00_2684);} } } } } } } 

}



/* &<@anonymous:2325> */
obj_t BGl_z62zc3z04anonymousza32325ze3ze5zz__httpz00(obj_t BgL_envz00_14322, obj_t BgL_pz00_14324)
{
{ /* Unsafe/http.scm 263 */
return 
bgl_display_obj(
PROCEDURE_REF(BgL_envz00_14322, 
(int)(((long)0))), BgL_pz00_14324);} 

}



/* generate-http-boundary */
obj_t BGl_generatezd2httpzd2boundaryz00zz__httpz00()
{
{ /* Unsafe/http.scm 288 */
{ /* Unsafe/http.scm 289 */
obj_t BgL_sz00_2716;
BgL_sz00_2716 = 
make_string(((long)22), ((unsigned char)'-')); 
{ 
long BgL_iz00_10404;
BgL_iz00_10404 = ((long)2); 
BgL_loopz00_10403:
if(
(BgL_iz00_10404<((long)22)))
{ /* Unsafe/http.scm 293 */
long BgL_numz00_10408;
{ /* Unsafe/http.scm 293 */
long BgL_res5742z00_10409;
{ /* Unsafe/http.scm 293 */
int BgL_arg5084z00_10412;
BgL_arg5084z00_10412 = 
rand(); 
BgL_res5742z00_10409 = 
BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
(long)(BgL_arg5084z00_10412), ((long)16)); } 
BgL_numz00_10408 = BgL_res5742z00_10409; } 
{ /* Unsafe/http.scm 294 */
unsigned char BgL_tmpz00_17261;
BgL_tmpz00_17261 = 
STRING_REF(BGl_string7354z00zz__httpz00, BgL_numz00_10408); 
STRING_SET(BgL_sz00_2716, BgL_iz00_10404, BgL_tmpz00_17261); } 
{ 
long BgL_iz00_17264;
BgL_iz00_17264 = 
(BgL_iz00_10404+((long)1)); 
BgL_iz00_10404 = BgL_iz00_17264; 
goto BgL_loopz00_10403;} }  else 
{ /* Unsafe/http.scm 292 */((bool_t)0); } } 
return BgL_sz00_2716;} } 

}



/* http-parse-error-msg */
obj_t BGl_httpzd2parsezd2errorzd2msgzd2zz__httpz00(obj_t BgL_cz00_47, obj_t BgL_portz00_48)
{
{ /* Unsafe/http.scm 322 */
if(
CHARP(BgL_cz00_47))
{ /* Unsafe/http.scm 324 */
obj_t BgL_linez00_2732;
BgL_linez00_2732 = 
BGl_httpzd2readzd2linez00zz__httpz00(BgL_portz00_48); 
{ /* Unsafe/http.scm 326 */
obj_t BgL_arg2335z00_2733;
{ /* Unsafe/http.scm 326 */
obj_t BgL_arg2336z00_2734;obj_t BgL_arg2337z00_2735;
{ /* Unsafe/http.scm 326 */
obj_t BgL_list2342z00_2740;
BgL_list2342z00_2740 = 
MAKE_YOUNG_PAIR(BgL_cz00_47, BNIL); 
BgL_arg2336z00_2734 = 
BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_list2342z00_2740); } 
if(
STRINGP(BgL_linez00_2732))
{ /* Unsafe/http.scm 326 */
BgL_arg2337z00_2735 = BgL_linez00_2732; }  else 
{ /* Unsafe/http.scm 326 */
BgL_arg2337z00_2735 = BGl_string7355z00zz__httpz00; } 
{ /* Unsafe/http.scm 326 */
obj_t BgL_list2338z00_2736;
{ /* Unsafe/http.scm 326 */
obj_t BgL_arg2339z00_2737;
{ /* Unsafe/http.scm 326 */
obj_t BgL_arg2340z00_2738;
{ /* Unsafe/http.scm 326 */
obj_t BgL_arg2341z00_2739;
BgL_arg2341z00_2739 = 
MAKE_YOUNG_PAIR(BgL_arg2337z00_2735, BNIL); 
BgL_arg2340z00_2738 = 
MAKE_YOUNG_PAIR(BGl_string7356z00zz__httpz00, BgL_arg2341z00_2739); } 
BgL_arg2339z00_2737 = 
MAKE_YOUNG_PAIR(BgL_arg2336z00_2734, BgL_arg2340z00_2738); } 
BgL_list2338z00_2736 = 
MAKE_YOUNG_PAIR(BGl_string7357z00zz__httpz00, BgL_arg2339z00_2737); } 
BgL_arg2335z00_2733 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list2338z00_2736); } } 
return 
string_for_read(BgL_arg2335z00_2733);} }  else 
{ /* Unsafe/http.scm 323 */
return BgL_cz00_47;} } 

}



/* http-parse-status-line */
BGL_EXPORTED_DEF obj_t BGl_httpzd2parsezd2statuszd2linezd2zz__httpz00(obj_t BgL_ipz00_49)
{
{ /* Unsafe/http.scm 364 */
return 
BGl_z62zc3z04anonymousza31583ze3ze5zz__httpz00(BGl_statuszd2linezd2grammarz00zz__httpz00, BgL_ipz00_49);} 

}



/* &http-parse-status-line */
obj_t BGl_z62httpzd2parsezd2statuszd2linezb0zz__httpz00(obj_t BgL_envz00_14325, obj_t BgL_ipz00_14326)
{
{ /* Unsafe/http.scm 364 */
{ /* Unsafe/http.scm 365 */
obj_t BgL_auxz00_17283;
if(
INPUT_PORTP(BgL_ipz00_14326))
{ /* Unsafe/http.scm 365 */
BgL_auxz00_17283 = BgL_ipz00_14326
; }  else 
{ 
obj_t BgL_auxz00_17286;
BgL_auxz00_17286 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)13486)), BGl_string7358z00zz__httpz00, BGl_string7359z00zz__httpz00, BgL_ipz00_14326); 
FAILURE(BgL_auxz00_17286,BFALSE,BFALSE);} 
return 
BGl_httpzd2parsezd2statuszd2linezd2zz__httpz00(BgL_auxz00_17283);} } 

}



/* http-read-line */
BGL_EXPORTED_DEF obj_t BGl_httpzd2readzd2linez00zz__httpz00(obj_t BgL_pz00_50)
{
{ /* Unsafe/http.scm 370 */
{ 
obj_t BgL_iportz00_2834;long BgL_lastzd2matchzd2_2835;long BgL_forwardz00_2836;long BgL_bufposz00_2837;obj_t BgL_iportz00_2799;long BgL_lastzd2matchzd2_2800;long BgL_forwardz00_2801;long BgL_bufposz00_2802;obj_t BgL_iportz00_2777;long BgL_lastzd2matchzd2_2778;long BgL_forwardz00_2779;long BgL_bufposz00_2780;
{ /* Unsafe/http.scm 371 */
long BgL_res5804z00_10587;
BgL_res5804z00_10587 = 
RGC_START_MATCH(BgL_pz00_50); BgL_res5804z00_10587; } 
{ /* Unsafe/http.scm 371 */
long BgL_matchz00_2969;
{ /* Unsafe/http.scm 371 */
long BgL_arg2474z00_2978;long BgL_arg2475z00_2979;
{ /* Unsafe/http.scm 371 */
long BgL_res5805z00_10589;
BgL_res5805z00_10589 = 
RGC_BUFFER_FORWARD(BgL_pz00_50); 
BgL_arg2474z00_2978 = BgL_res5805z00_10589; } 
{ /* Unsafe/http.scm 371 */
long BgL_res5806z00_10591;
BgL_res5806z00_10591 = 
RGC_BUFFER_BUFPOS(BgL_pz00_50); 
BgL_arg2475z00_2979 = BgL_res5806z00_10591; } 
{ 
long BgL_forwardz00_10593;long BgL_bufposz00_10594;
BgL_forwardz00_10593 = BgL_arg2474z00_2978; 
BgL_bufposz00_10594 = BgL_arg2475z00_2979; 
BgL_statezd20zd21102z00_10592:
if(
(BgL_forwardz00_10593==BgL_bufposz00_10594))
{ /* Unsafe/http.scm 371 */
if(
rgc_fill_buffer(BgL_pz00_50))
{ /* Unsafe/http.scm 371 */
long BgL_arg2368z00_10602;long BgL_arg2369z00_10603;
{ /* Unsafe/http.scm 371 */
long BgL_res5778z00_10604;
BgL_res5778z00_10604 = 
RGC_BUFFER_FORWARD(BgL_pz00_50); 
BgL_arg2368z00_10602 = BgL_res5778z00_10604; } 
{ /* Unsafe/http.scm 371 */
long BgL_res5779z00_10606;
BgL_res5779z00_10606 = 
RGC_BUFFER_BUFPOS(BgL_pz00_50); 
BgL_arg2369z00_10603 = BgL_res5779z00_10606; } 
{ 
long BgL_bufposz00_17301;long BgL_forwardz00_17300;
BgL_forwardz00_17300 = BgL_arg2368z00_10602; 
BgL_bufposz00_17301 = BgL_arg2369z00_10603; 
BgL_bufposz00_10594 = BgL_bufposz00_17301; 
BgL_forwardz00_10593 = BgL_forwardz00_17300; 
goto BgL_statezd20zd21102z00_10592;} }  else 
{ /* Unsafe/http.scm 371 */
BgL_matchz00_2969 = ((long)1); } }  else 
{ /* Unsafe/http.scm 371 */
int BgL_curz00_10608;
{ /* Unsafe/http.scm 371 */
int BgL_res5780z00_10609;
BgL_res5780z00_10609 = 
RGC_BUFFER_GET_CHAR(BgL_pz00_50, BgL_forwardz00_10593); 
BgL_curz00_10608 = BgL_res5780z00_10609; } 
{ /* Unsafe/http.scm 371 */

if(
(
(long)(BgL_curz00_10608)==((long)10)))
{ /* Unsafe/http.scm 371 */
long BgL_arg2371z00_10615;
BgL_arg2371z00_10615 = 
(((long)1)+BgL_forwardz00_10593); 
{ /* Unsafe/http.scm 371 */
long BgL_newzd2matchzd2_10618;
{ /* Unsafe/http.scm 371 */
long BgL_res5783z00_10619;
BgL_res5783z00_10619 = 
RGC_STOP_MATCH(BgL_pz00_50, BgL_arg2371z00_10615); BgL_res5783z00_10619; } 
BgL_newzd2matchzd2_10618 = ((long)1); 
BgL_matchz00_2969 = BgL_newzd2matchzd2_10618; } }  else 
{ /* Unsafe/http.scm 371 */
BgL_iportz00_2799 = BgL_pz00_50; 
BgL_lastzd2matchzd2_2800 = ((long)1); 
BgL_forwardz00_2801 = 
(((long)1)+BgL_forwardz00_10593); 
BgL_bufposz00_2802 = BgL_bufposz00_10594; 
BgL_zc3z04anonymousza32355ze3z87_2803:
{ /* Unsafe/http.scm 371 */
long BgL_newzd2matchzd2_2804;
{ /* Unsafe/http.scm 371 */
long BgL_res5764z00_10490;
BgL_res5764z00_10490 = 
RGC_STOP_MATCH(BgL_iportz00_2799, BgL_forwardz00_2801); BgL_res5764z00_10490; } 
BgL_newzd2matchzd2_2804 = ((long)0); 
if(
(BgL_forwardz00_2801==BgL_bufposz00_2802))
{ /* Unsafe/http.scm 371 */
if(
rgc_fill_buffer(BgL_iportz00_2799))
{ /* Unsafe/http.scm 371 */
long BgL_arg2358z00_2807;long BgL_arg2359z00_2808;
{ /* Unsafe/http.scm 371 */
long BgL_res5767z00_10497;
BgL_res5767z00_10497 = 
RGC_BUFFER_FORWARD(BgL_iportz00_2799); 
BgL_arg2358z00_2807 = BgL_res5767z00_10497; } 
{ /* Unsafe/http.scm 371 */
long BgL_res5768z00_10499;
BgL_res5768z00_10499 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_2799); 
BgL_arg2359z00_2808 = BgL_res5768z00_10499; } 
{ 
long BgL_bufposz00_17316;long BgL_forwardz00_17315;
BgL_forwardz00_17315 = BgL_arg2358z00_2807; 
BgL_bufposz00_17316 = BgL_arg2359z00_2808; 
BgL_bufposz00_2802 = BgL_bufposz00_17316; 
BgL_forwardz00_2801 = BgL_forwardz00_17315; 
goto BgL_zc3z04anonymousza32355ze3z87_2803;} }  else 
{ /* Unsafe/http.scm 371 */
BgL_matchz00_2969 = BgL_newzd2matchzd2_2804; } }  else 
{ /* Unsafe/http.scm 371 */
int BgL_curz00_2809;
{ /* Unsafe/http.scm 371 */
int BgL_res5769z00_10502;
BgL_res5769z00_10502 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_2799, BgL_forwardz00_2801); 
BgL_curz00_2809 = BgL_res5769z00_10502; } 
{ /* Unsafe/http.scm 371 */

if(
(
(long)(BgL_curz00_2809)==((long)13)))
{ /* Unsafe/http.scm 371 */
BgL_iportz00_2777 = BgL_iportz00_2799; 
BgL_lastzd2matchzd2_2778 = BgL_newzd2matchzd2_2804; 
BgL_forwardz00_2779 = 
(((long)1)+BgL_forwardz00_2801); 
BgL_bufposz00_2780 = BgL_bufposz00_2802; 
BgL_zc3z04anonymousza32344ze3z87_2781:
{ /* Unsafe/http.scm 371 */
long BgL_newzd2matchzd2_2782;
{ /* Unsafe/http.scm 371 */
long BgL_res5751z00_10457;
BgL_res5751z00_10457 = 
RGC_STOP_MATCH(BgL_iportz00_2777, BgL_forwardz00_2779); BgL_res5751z00_10457; } 
BgL_newzd2matchzd2_2782 = ((long)0); 
if(
(BgL_forwardz00_2779==BgL_bufposz00_2780))
{ /* Unsafe/http.scm 371 */
if(
rgc_fill_buffer(BgL_iportz00_2777))
{ /* Unsafe/http.scm 371 */
long BgL_arg2347z00_2785;long BgL_arg2348z00_2786;
{ /* Unsafe/http.scm 371 */
long BgL_res5754z00_10464;
BgL_res5754z00_10464 = 
RGC_BUFFER_FORWARD(BgL_iportz00_2777); 
BgL_arg2347z00_2785 = BgL_res5754z00_10464; } 
{ /* Unsafe/http.scm 371 */
long BgL_res5755z00_10466;
BgL_res5755z00_10466 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_2777); 
BgL_arg2348z00_2786 = BgL_res5755z00_10466; } 
{ 
long BgL_bufposz00_17329;long BgL_forwardz00_17328;
BgL_forwardz00_17328 = BgL_arg2347z00_2785; 
BgL_bufposz00_17329 = BgL_arg2348z00_2786; 
BgL_bufposz00_2780 = BgL_bufposz00_17329; 
BgL_forwardz00_2779 = BgL_forwardz00_17328; 
goto BgL_zc3z04anonymousza32344ze3z87_2781;} }  else 
{ /* Unsafe/http.scm 371 */
BgL_matchz00_2969 = BgL_newzd2matchzd2_2782; } }  else 
{ /* Unsafe/http.scm 371 */
int BgL_curz00_2787;
{ /* Unsafe/http.scm 371 */
int BgL_res5756z00_10469;
BgL_res5756z00_10469 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_2777, BgL_forwardz00_2779); 
BgL_curz00_2787 = BgL_res5756z00_10469; } 
{ /* Unsafe/http.scm 371 */

if(
(
(long)(BgL_curz00_2787)==((long)13)))
{ 
long BgL_forwardz00_17335;long BgL_lastzd2matchzd2_17334;
BgL_lastzd2matchzd2_17334 = BgL_newzd2matchzd2_2782; 
BgL_forwardz00_17335 = 
(((long)1)+BgL_forwardz00_2779); 
BgL_forwardz00_2779 = BgL_forwardz00_17335; 
BgL_lastzd2matchzd2_2778 = BgL_lastzd2matchzd2_17334; 
goto BgL_zc3z04anonymousza32344ze3z87_2781;}  else 
{ /* Unsafe/http.scm 371 */
if(
(
(long)(BgL_curz00_2787)==((long)10)))
{ /* Unsafe/http.scm 371 */
long BgL_arg2352z00_2791;
BgL_arg2352z00_2791 = 
(((long)1)+BgL_forwardz00_2779); 
{ /* Unsafe/http.scm 371 */
long BgL_newzd2matchzd2_10478;
{ /* Unsafe/http.scm 371 */
long BgL_res5761z00_10481;
BgL_res5761z00_10481 = 
RGC_STOP_MATCH(BgL_iportz00_2777, BgL_arg2352z00_2791); BgL_res5761z00_10481; } 
BgL_newzd2matchzd2_10478 = ((long)0); 
BgL_matchz00_2969 = BgL_newzd2matchzd2_10478; } }  else 
{ /* Unsafe/http.scm 371 */
BgL_iportz00_2834 = BgL_iportz00_2777; 
BgL_lastzd2matchzd2_2835 = BgL_newzd2matchzd2_2782; 
BgL_forwardz00_2836 = 
(((long)1)+BgL_forwardz00_2779); 
BgL_bufposz00_2837 = BgL_bufposz00_2780; 
BgL_zc3z04anonymousza32374ze3z87_2838:
{ /* Unsafe/http.scm 371 */
long BgL_newzd2matchzd2_2839;
{ /* Unsafe/http.scm 371 */
long BgL_res5786z00_10545;
BgL_res5786z00_10545 = 
RGC_STOP_MATCH(BgL_iportz00_2834, BgL_forwardz00_2836); BgL_res5786z00_10545; } 
BgL_newzd2matchzd2_2839 = ((long)0); 
if(
(BgL_forwardz00_2836==BgL_bufposz00_2837))
{ /* Unsafe/http.scm 371 */
if(
rgc_fill_buffer(BgL_iportz00_2834))
{ /* Unsafe/http.scm 371 */
long BgL_arg2377z00_2842;long BgL_arg2378z00_2843;
{ /* Unsafe/http.scm 371 */
long BgL_res5789z00_10552;
BgL_res5789z00_10552 = 
RGC_BUFFER_FORWARD(BgL_iportz00_2834); 
BgL_arg2377z00_2842 = BgL_res5789z00_10552; } 
{ /* Unsafe/http.scm 371 */
long BgL_res5790z00_10554;
BgL_res5790z00_10554 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_2834); 
BgL_arg2378z00_2843 = BgL_res5790z00_10554; } 
{ 
long BgL_bufposz00_17350;long BgL_forwardz00_17349;
BgL_forwardz00_17349 = BgL_arg2377z00_2842; 
BgL_bufposz00_17350 = BgL_arg2378z00_2843; 
BgL_bufposz00_2837 = BgL_bufposz00_17350; 
BgL_forwardz00_2836 = BgL_forwardz00_17349; 
goto BgL_zc3z04anonymousza32374ze3z87_2838;} }  else 
{ /* Unsafe/http.scm 371 */
BgL_matchz00_2969 = BgL_newzd2matchzd2_2839; } }  else 
{ /* Unsafe/http.scm 371 */
int BgL_curz00_2844;
{ /* Unsafe/http.scm 371 */
int BgL_res5791z00_10557;
BgL_res5791z00_10557 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_2834, BgL_forwardz00_2836); 
BgL_curz00_2844 = BgL_res5791z00_10557; } 
{ /* Unsafe/http.scm 371 */

if(
(
(long)(BgL_curz00_2844)==((long)13)))
{ 
long BgL_bufposz00_17359;long BgL_forwardz00_17357;long BgL_lastzd2matchzd2_17356;obj_t BgL_iportz00_17355;
BgL_iportz00_17355 = BgL_iportz00_2834; 
BgL_lastzd2matchzd2_17356 = BgL_newzd2matchzd2_2839; 
BgL_forwardz00_17357 = 
(((long)1)+BgL_forwardz00_2836); 
BgL_bufposz00_17359 = BgL_bufposz00_2837; 
BgL_bufposz00_2780 = BgL_bufposz00_17359; 
BgL_forwardz00_2779 = BgL_forwardz00_17357; 
BgL_lastzd2matchzd2_2778 = BgL_lastzd2matchzd2_17356; 
BgL_iportz00_2777 = BgL_iportz00_17355; 
goto BgL_zc3z04anonymousza32344ze3z87_2781;}  else 
{ /* Unsafe/http.scm 371 */
if(
(
(long)(BgL_curz00_2844)==((long)10)))
{ /* Unsafe/http.scm 371 */
long BgL_arg2382z00_2848;
BgL_arg2382z00_2848 = 
(((long)1)+BgL_forwardz00_2836); 
{ /* Unsafe/http.scm 371 */
long BgL_newzd2matchzd2_10566;
{ /* Unsafe/http.scm 371 */
long BgL_res5796z00_10569;
BgL_res5796z00_10569 = 
RGC_STOP_MATCH(BgL_iportz00_2834, BgL_arg2382z00_2848); BgL_res5796z00_10569; } 
BgL_newzd2matchzd2_10566 = ((long)0); 
BgL_matchz00_2969 = BgL_newzd2matchzd2_10566; } }  else 
{ 
long BgL_forwardz00_17366;long BgL_lastzd2matchzd2_17365;
BgL_lastzd2matchzd2_17365 = BgL_newzd2matchzd2_2839; 
BgL_forwardz00_17366 = 
(((long)1)+BgL_forwardz00_2836); 
BgL_forwardz00_2836 = BgL_forwardz00_17366; 
BgL_lastzd2matchzd2_2835 = BgL_lastzd2matchzd2_17365; 
goto BgL_zc3z04anonymousza32374ze3z87_2838;} } } } } } } } } } }  else 
{ /* Unsafe/http.scm 371 */
if(
(
(long)(BgL_curz00_2809)==((long)10)))
{ /* Unsafe/http.scm 371 */
long BgL_arg2363z00_2813;
BgL_arg2363z00_2813 = 
(((long)1)+BgL_forwardz00_2801); 
{ /* Unsafe/http.scm 371 */
long BgL_newzd2matchzd2_10511;
{ /* Unsafe/http.scm 371 */
long BgL_res5774z00_10514;
BgL_res5774z00_10514 = 
RGC_STOP_MATCH(BgL_iportz00_2799, BgL_arg2363z00_2813); BgL_res5774z00_10514; } 
BgL_newzd2matchzd2_10511 = ((long)0); 
BgL_matchz00_2969 = BgL_newzd2matchzd2_10511; } }  else 
{ 
long BgL_bufposz00_17379;long BgL_forwardz00_17377;long BgL_lastzd2matchzd2_17376;obj_t BgL_iportz00_17375;
BgL_iportz00_17375 = BgL_iportz00_2799; 
BgL_lastzd2matchzd2_17376 = BgL_newzd2matchzd2_2804; 
BgL_forwardz00_17377 = 
(((long)1)+BgL_forwardz00_2801); 
BgL_bufposz00_17379 = BgL_bufposz00_2802; 
BgL_bufposz00_2837 = BgL_bufposz00_17379; 
BgL_forwardz00_2836 = BgL_forwardz00_17377; 
BgL_lastzd2matchzd2_2835 = BgL_lastzd2matchzd2_17376; 
BgL_iportz00_2834 = BgL_iportz00_17375; 
goto BgL_zc3z04anonymousza32374ze3z87_2838;} } } } } } } } } } 
RGC_SET_FILEPOS(BgL_pz00_50); 
{ 

{ /* Unsafe/http.scm 371 */
obj_t BgL_aux1404z00_2974;
BgL_aux1404z00_2974 = 
BINT(BgL_matchz00_2969); 
switch( 
(long)CINT(BgL_aux1404z00_2974)) { case ((long)1) : 

{ /* Unsafe/http.scm 375 */
obj_t BgL_cz00_2976;
{ /* Unsafe/http.scm 371 */
bool_t BgL_test7955z00_17383;
{ /* Unsafe/http.scm 371 */
long BgL_arg2464z00_2959;
{ /* Unsafe/http.scm 371 */
long BgL_res5801z00_10581;
BgL_res5801z00_10581 = 
RGC_BUFFER_MATCH_LENGTH(BgL_pz00_50); 
BgL_arg2464z00_2959 = BgL_res5801z00_10581; } 
BgL_test7955z00_17383 = 
(BgL_arg2464z00_2959==((long)0)); } 
if(BgL_test7955z00_17383)
{ /* Unsafe/http.scm 371 */
BgL_cz00_2976 = BEOF; }  else 
{ /* Unsafe/http.scm 371 */
unsigned char BgL_res5803z00_10585;
BgL_res5803z00_10585 = 
RGC_BUFFER_CHARACTER(BgL_pz00_50); 
BgL_cz00_2976 = 
BCHAR(BgL_res5803z00_10585); } } 
{ /* Unsafe/http.scm 376 */
bool_t BgL_test7956z00_17388;
{ /* Unsafe/http.scm 376 */
bool_t BgL_res5807z00_10626;
BgL_res5807z00_10626 = 
EOF_OBJECTP(BgL_cz00_2976); 
BgL_test7956z00_17388 = BgL_res5807z00_10626; } 
if(BgL_test7956z00_17388)
{ /* Unsafe/http.scm 376 */
return BgL_cz00_2976;}  else 
{ /* Unsafe/http.scm 378 */
obj_t BgL_res5810z00_10633;
{ /* Unsafe/http.scm 371 */
long BgL_arg2390z00_10627;
{ /* Unsafe/http.scm 371 */
long BgL_res5808z00_10629;
BgL_res5808z00_10629 = 
RGC_BUFFER_MATCH_LENGTH(BgL_pz00_50); 
BgL_arg2390z00_10627 = BgL_res5808z00_10629; } 
BgL_res5810z00_10633 = 
rgc_buffer_substring(BgL_pz00_50, ((long)0), BgL_arg2390z00_10627); } 
return BgL_res5810z00_10633;} } } break;case ((long)0) : 

{ /* Unsafe/http.scm 373 */
obj_t BgL_res5813z00_10640;
{ /* Unsafe/http.scm 371 */
long BgL_arg2390z00_10634;
{ /* Unsafe/http.scm 371 */
long BgL_res5811z00_10636;
BgL_res5811z00_10636 = 
RGC_BUFFER_MATCH_LENGTH(BgL_pz00_50); 
BgL_arg2390z00_10634 = BgL_res5811z00_10636; } 
BgL_res5813z00_10640 = 
rgc_buffer_substring(BgL_pz00_50, ((long)0), BgL_arg2390z00_10634); } 
return BgL_res5813z00_10640;} break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string7254z00zz__httpz00, BGl_string7255z00zz__httpz00, 
BINT(BgL_matchz00_2969));} } } } } } 

}



/* &http-read-line */
obj_t BGl_z62httpzd2readzd2linez62zz__httpz00(obj_t BgL_envz00_14327, obj_t BgL_pz00_14328)
{
{ /* Unsafe/http.scm 370 */
{ /* Unsafe/http.scm 371 */
obj_t BgL_auxz00_17398;
if(
INPUT_PORTP(BgL_pz00_14328))
{ /* Unsafe/http.scm 371 */
BgL_auxz00_17398 = BgL_pz00_14328
; }  else 
{ 
obj_t BgL_auxz00_17401;
BgL_auxz00_17401 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)13773)), BGl_string7360z00zz__httpz00, BGl_string7359z00zz__httpz00, BgL_pz00_14328); 
FAILURE(BgL_auxz00_17401,BFALSE,BFALSE);} 
return 
BGl_httpzd2readzd2linez00zz__httpz00(BgL_auxz00_17398);} } 

}



/* http-skip-blank */
obj_t BGl_httpzd2skipzd2blankz00zz__httpz00(obj_t BgL_pz00_51)
{
{ /* Unsafe/http.scm 384 */
{ 
obj_t BgL_iportz00_3082;long BgL_lastzd2matchzd2_3083;long BgL_forwardz00_3084;long BgL_bufposz00_3085;obj_t BgL_iportz00_3067;long BgL_lastzd2matchzd2_3068;long BgL_forwardz00_3069;long BgL_bufposz00_3070;obj_t BgL_iportz00_3046;long BgL_lastzd2matchzd2_3047;long BgL_forwardz00_3048;long BgL_bufposz00_3049;
{ /* Unsafe/http.scm 385 */
long BgL_res5846z00_10718;
BgL_res5846z00_10718 = 
RGC_START_MATCH(BgL_pz00_51); BgL_res5846z00_10718; } 
{ /* Unsafe/http.scm 385 */
long BgL_matchz00_3216;
{ /* Unsafe/http.scm 385 */
long BgL_arg2597z00_3231;long BgL_arg2598z00_3232;
{ /* Unsafe/http.scm 385 */
long BgL_res5847z00_10720;
BgL_res5847z00_10720 = 
RGC_BUFFER_FORWARD(BgL_pz00_51); 
BgL_arg2597z00_3231 = BgL_res5847z00_10720; } 
{ /* Unsafe/http.scm 385 */
long BgL_res5848z00_10722;
BgL_res5848z00_10722 = 
RGC_BUFFER_BUFPOS(BgL_pz00_51); 
BgL_arg2598z00_3232 = BgL_res5848z00_10722; } 
BgL_iportz00_3046 = BgL_pz00_51; 
BgL_lastzd2matchzd2_3047 = ((long)1); 
BgL_forwardz00_3048 = BgL_arg2597z00_3231; 
BgL_bufposz00_3049 = BgL_arg2598z00_3232; 
BgL_zc3z04anonymousza32476ze3z87_3050:
if(
(BgL_forwardz00_3048==BgL_bufposz00_3049))
{ /* Unsafe/http.scm 385 */
if(
rgc_fill_buffer(BgL_iportz00_3046))
{ /* Unsafe/http.scm 385 */
long BgL_arg2479z00_3053;long BgL_arg2480z00_3054;
{ /* Unsafe/http.scm 385 */
long BgL_res5816z00_10647;
BgL_res5816z00_10647 = 
RGC_BUFFER_FORWARD(BgL_iportz00_3046); 
BgL_arg2479z00_3053 = BgL_res5816z00_10647; } 
{ /* Unsafe/http.scm 385 */
long BgL_res5817z00_10649;
BgL_res5817z00_10649 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_3046); 
BgL_arg2480z00_3054 = BgL_res5817z00_10649; } 
{ 
long BgL_bufposz00_17416;long BgL_forwardz00_17415;
BgL_forwardz00_17415 = BgL_arg2479z00_3053; 
BgL_bufposz00_17416 = BgL_arg2480z00_3054; 
BgL_bufposz00_3049 = BgL_bufposz00_17416; 
BgL_forwardz00_3048 = BgL_forwardz00_17415; 
goto BgL_zc3z04anonymousza32476ze3z87_3050;} }  else 
{ /* Unsafe/http.scm 385 */
BgL_matchz00_3216 = BgL_lastzd2matchzd2_3047; } }  else 
{ /* Unsafe/http.scm 385 */
int BgL_curz00_3055;
{ /* Unsafe/http.scm 385 */
int BgL_res5818z00_10652;
BgL_res5818z00_10652 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_3046, BgL_forwardz00_3048); 
BgL_curz00_3055 = BgL_res5818z00_10652; } 
{ /* Unsafe/http.scm 385 */

{ /* Unsafe/http.scm 385 */
bool_t BgL_test7960z00_17418;
if(
(
(long)(BgL_curz00_3055)==((long)9)))
{ /* Unsafe/http.scm 385 */
BgL_test7960z00_17418 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 385 */
BgL_test7960z00_17418 = 
(
(long)(BgL_curz00_3055)==((long)32))
; } 
if(BgL_test7960z00_17418)
{ /* Unsafe/http.scm 385 */
BgL_iportz00_3067 = BgL_iportz00_3046; 
BgL_lastzd2matchzd2_3068 = BgL_lastzd2matchzd2_3047; 
BgL_forwardz00_3069 = 
(((long)1)+BgL_forwardz00_3048); 
BgL_bufposz00_3070 = BgL_bufposz00_3049; 
BgL_zc3z04anonymousza32486ze3z87_3071:
{ /* Unsafe/http.scm 385 */
long BgL_newzd2matchzd2_3072;
{ /* Unsafe/http.scm 385 */
long BgL_res5825z00_10671;
BgL_res5825z00_10671 = 
RGC_STOP_MATCH(BgL_iportz00_3067, BgL_forwardz00_3069); BgL_res5825z00_10671; } 
BgL_newzd2matchzd2_3072 = ((long)0); 
if(
(BgL_forwardz00_3069==BgL_bufposz00_3070))
{ /* Unsafe/http.scm 385 */
if(
rgc_fill_buffer(BgL_iportz00_3067))
{ /* Unsafe/http.scm 385 */
long BgL_arg2489z00_3075;long BgL_arg2490z00_3076;
{ /* Unsafe/http.scm 385 */
long BgL_res5828z00_10678;
BgL_res5828z00_10678 = 
RGC_BUFFER_FORWARD(BgL_iportz00_3067); 
BgL_arg2489z00_3075 = BgL_res5828z00_10678; } 
{ /* Unsafe/http.scm 385 */
long BgL_res5829z00_10680;
BgL_res5829z00_10680 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_3067); 
BgL_arg2490z00_3076 = BgL_res5829z00_10680; } 
{ 
long BgL_bufposz00_17432;long BgL_forwardz00_17431;
BgL_forwardz00_17431 = BgL_arg2489z00_3075; 
BgL_bufposz00_17432 = BgL_arg2490z00_3076; 
BgL_bufposz00_3070 = BgL_bufposz00_17432; 
BgL_forwardz00_3069 = BgL_forwardz00_17431; 
goto BgL_zc3z04anonymousza32486ze3z87_3071;} }  else 
{ /* Unsafe/http.scm 385 */
BgL_matchz00_3216 = BgL_newzd2matchzd2_3072; } }  else 
{ /* Unsafe/http.scm 385 */
int BgL_curz00_3077;
{ /* Unsafe/http.scm 385 */
int BgL_res5830z00_10683;
BgL_res5830z00_10683 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_3067, BgL_forwardz00_3069); 
BgL_curz00_3077 = BgL_res5830z00_10683; } 
{ /* Unsafe/http.scm 385 */

{ /* Unsafe/http.scm 385 */
bool_t BgL_test7964z00_17434;
if(
(
(long)(BgL_curz00_3077)==((long)9)))
{ /* Unsafe/http.scm 385 */
BgL_test7964z00_17434 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 385 */
BgL_test7964z00_17434 = 
(
(long)(BgL_curz00_3077)==((long)32))
; } 
if(BgL_test7964z00_17434)
{ /* Unsafe/http.scm 385 */
BgL_iportz00_3082 = BgL_iportz00_3067; 
BgL_lastzd2matchzd2_3083 = BgL_newzd2matchzd2_3072; 
BgL_forwardz00_3084 = 
(((long)1)+BgL_forwardz00_3069); 
BgL_bufposz00_3085 = BgL_bufposz00_3070; 
BgL_zc3z04anonymousza32494ze3z87_3086:
{ /* Unsafe/http.scm 385 */
long BgL_newzd2matchzd2_3087;
{ /* Unsafe/http.scm 385 */
long BgL_res5834z00_10692;
BgL_res5834z00_10692 = 
RGC_STOP_MATCH(BgL_iportz00_3082, BgL_forwardz00_3084); BgL_res5834z00_10692; } 
BgL_newzd2matchzd2_3087 = ((long)0); 
if(
(BgL_forwardz00_3084==BgL_bufposz00_3085))
{ /* Unsafe/http.scm 385 */
if(
rgc_fill_buffer(BgL_iportz00_3082))
{ /* Unsafe/http.scm 385 */
long BgL_arg2497z00_3090;long BgL_arg2498z00_3091;
{ /* Unsafe/http.scm 385 */
long BgL_res5837z00_10699;
BgL_res5837z00_10699 = 
RGC_BUFFER_FORWARD(BgL_iportz00_3082); 
BgL_arg2497z00_3090 = BgL_res5837z00_10699; } 
{ /* Unsafe/http.scm 385 */
long BgL_res5838z00_10701;
BgL_res5838z00_10701 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_3082); 
BgL_arg2498z00_3091 = BgL_res5838z00_10701; } 
{ 
long BgL_bufposz00_17448;long BgL_forwardz00_17447;
BgL_forwardz00_17447 = BgL_arg2497z00_3090; 
BgL_bufposz00_17448 = BgL_arg2498z00_3091; 
BgL_bufposz00_3085 = BgL_bufposz00_17448; 
BgL_forwardz00_3084 = BgL_forwardz00_17447; 
goto BgL_zc3z04anonymousza32494ze3z87_3086;} }  else 
{ /* Unsafe/http.scm 385 */
BgL_matchz00_3216 = BgL_newzd2matchzd2_3087; } }  else 
{ /* Unsafe/http.scm 385 */
int BgL_curz00_3092;
{ /* Unsafe/http.scm 385 */
int BgL_res5839z00_10704;
BgL_res5839z00_10704 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_3082, BgL_forwardz00_3084); 
BgL_curz00_3092 = BgL_res5839z00_10704; } 
{ /* Unsafe/http.scm 385 */

{ /* Unsafe/http.scm 385 */
bool_t BgL_test7968z00_17450;
if(
(
(long)(BgL_curz00_3092)==((long)9)))
{ /* Unsafe/http.scm 385 */
BgL_test7968z00_17450 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 385 */
BgL_test7968z00_17450 = 
(
(long)(BgL_curz00_3092)==((long)32))
; } 
if(BgL_test7968z00_17450)
{ 
long BgL_forwardz00_17457;long BgL_lastzd2matchzd2_17456;
BgL_lastzd2matchzd2_17456 = BgL_newzd2matchzd2_3087; 
BgL_forwardz00_17457 = 
(((long)1)+BgL_forwardz00_3084); 
BgL_forwardz00_3084 = BgL_forwardz00_17457; 
BgL_lastzd2matchzd2_3083 = BgL_lastzd2matchzd2_17456; 
goto BgL_zc3z04anonymousza32494ze3z87_3086;}  else 
{ /* Unsafe/http.scm 385 */
BgL_matchz00_3216 = BgL_newzd2matchzd2_3087; } } } } } }  else 
{ /* Unsafe/http.scm 385 */
BgL_matchz00_3216 = BgL_newzd2matchzd2_3072; } } } } } }  else 
{ /* Unsafe/http.scm 385 */
long BgL_arg2484z00_3059;
BgL_arg2484z00_3059 = 
(((long)1)+BgL_forwardz00_3048); 
{ /* Unsafe/http.scm 385 */
long BgL_newzd2matchzd2_10661;
{ /* Unsafe/http.scm 385 */
long BgL_res5823z00_10664;
BgL_res5823z00_10664 = 
RGC_STOP_MATCH(BgL_iportz00_3046, BgL_arg2484z00_3059); BgL_res5823z00_10664; } 
BgL_newzd2matchzd2_10661 = ((long)1); 
BgL_matchz00_3216 = BgL_newzd2matchzd2_10661; } } } } } } 
RGC_SET_FILEPOS(BgL_pz00_51); 
{ 

{ /* Unsafe/http.scm 385 */
obj_t BgL_aux1406z00_3221;
BgL_aux1406z00_3221 = 
BINT(BgL_matchz00_3216); 
switch( 
(long)CINT(BgL_aux1406z00_3221)) { case ((long)1) : 

{ /* Unsafe/http.scm 389 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2591z00_3223;
{ /* Unsafe/http.scm 389 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1119z00_3224;
{ /* Unsafe/http.scm 390 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1118z00_3229;
BgL_new1118z00_3229 = 
((BgL_z62iozd2parsezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2parsezd2errorz62_bgl) ))); 
{ /* Unsafe/http.scm 390 */
long BgL_arg2596z00_3230;
{ /* Unsafe/http.scm 390 */
long BgL_res5849z00_10725;
BgL_res5849z00_10725 = 
BGL_CLASS_INDEX(BGl_z62iozd2parsezd2errorz62zz__objectz00); 
BgL_arg2596z00_3230 = BgL_res5849z00_10725; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1118z00_3229), BgL_arg2596z00_3230); } 
BgL_new1119z00_3224 = BgL_new1118z00_3229; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1119z00_3224)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1119z00_3224)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_17473;
{ /* Unsafe/http.scm 390 */
obj_t BgL_arg2592z00_3225;
{ /* Unsafe/http.scm 390 */
obj_t BgL_arg2593z00_3226;
{ /* Unsafe/http.scm 390 */
obj_t BgL_res5850z00_10729;
{ /* Unsafe/http.scm 390 */
obj_t BgL_classz00_10728;
BgL_classz00_10728 = BGl_z62iozd2parsezd2errorz62zz__objectz00; 
BgL_res5850z00_10729 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_10728); } 
BgL_arg2593z00_3226 = BgL_res5850z00_10729; } 
BgL_arg2592z00_3225 = 
VECTOR_REF(BgL_arg2593z00_3226,((long)2)); } 
BgL_auxz00_17473 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg2592z00_3225); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1119z00_3224)))->BgL_stackz00)=((obj_t)BgL_auxz00_17473),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1119z00_3224)))->BgL_procz00)=((obj_t)BGl_string7273z00zz__httpz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1119z00_3224)))->BgL_msgz00)=((obj_t)BGl_string7361z00zz__httpz00),BUNSPEC); 
{ 
obj_t BgL_auxz00_17483;
{ /* Unsafe/http.scm 390 */
obj_t BgL_arg2594z00_3227;
{ /* Unsafe/http.scm 385 */
bool_t BgL_test7970z00_17485;
{ /* Unsafe/http.scm 385 */
long BgL_arg2582z00_3206;
{ /* Unsafe/http.scm 385 */
long BgL_res5843z00_10712;
BgL_res5843z00_10712 = 
RGC_BUFFER_MATCH_LENGTH(BgL_pz00_51); 
BgL_arg2582z00_3206 = BgL_res5843z00_10712; } 
BgL_test7970z00_17485 = 
(BgL_arg2582z00_3206==((long)0)); } 
if(BgL_test7970z00_17485)
{ /* Unsafe/http.scm 385 */
BgL_arg2594z00_3227 = BEOF; }  else 
{ /* Unsafe/http.scm 385 */
unsigned char BgL_res5845z00_10716;
BgL_res5845z00_10716 = 
RGC_BUFFER_CHARACTER(BgL_pz00_51); 
BgL_arg2594z00_3227 = 
BCHAR(BgL_res5845z00_10716); } } 
BgL_auxz00_17483 = 
BGl_httpzd2parsezd2errorzd2msgzd2zz__httpz00(BgL_arg2594z00_3227, BgL_pz00_51); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1119z00_3224)))->BgL_objz00)=((obj_t)BgL_auxz00_17483),BUNSPEC); } 
BgL_arg2591z00_3223 = BgL_new1119z00_3224; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2591z00_3223));} break;case ((long)0) : 

return BUNSPEC;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string7254z00zz__httpz00, BGl_string7255z00zz__httpz00, 
BINT(BgL_matchz00_3216));} } } } } } 

}



/* http-read-fixnum */
obj_t BGl_httpzd2readzd2fixnumz00zz__httpz00(obj_t BgL_pz00_53)
{
{ /* Unsafe/http.scm 410 */
{ 
obj_t BgL_iportz00_3640;long BgL_lastzd2matchzd2_3641;long BgL_forwardz00_3642;long BgL_bufposz00_3643;obj_t BgL_iportz00_3625;long BgL_lastzd2matchzd2_3626;long BgL_forwardz00_3627;long BgL_bufposz00_3628;obj_t BgL_iportz00_3610;long BgL_lastzd2matchzd2_3611;long BgL_forwardz00_3612;long BgL_bufposz00_3613;obj_t BgL_iportz00_3595;long BgL_lastzd2matchzd2_3596;long BgL_forwardz00_3597;long BgL_bufposz00_3598;obj_t BgL_iportz00_3570;long BgL_lastzd2matchzd2_3571;long BgL_forwardz00_3572;long BgL_bufposz00_3573;
BgL_zc3z04anonymousza32862ze3z87_3773:
{ /* Unsafe/http.scm 411 */
long BgL_res5906z00_10859;
BgL_res5906z00_10859 = 
RGC_START_MATCH(BgL_pz00_53); BgL_res5906z00_10859; } 
{ /* Unsafe/http.scm 411 */
long BgL_matchz00_3774;
{ /* Unsafe/http.scm 411 */
long BgL_arg2871z00_3789;long BgL_arg2872z00_3790;
{ /* Unsafe/http.scm 411 */
long BgL_res5907z00_10861;
BgL_res5907z00_10861 = 
RGC_BUFFER_FORWARD(BgL_pz00_53); 
BgL_arg2871z00_3789 = BgL_res5907z00_10861; } 
{ /* Unsafe/http.scm 411 */
long BgL_res5908z00_10863;
BgL_res5908z00_10863 = 
RGC_BUFFER_BUFPOS(BgL_pz00_53); 
BgL_arg2872z00_3790 = BgL_res5908z00_10863; } 
BgL_iportz00_3570 = BgL_pz00_53; 
BgL_lastzd2matchzd2_3571 = ((long)2); 
BgL_forwardz00_3572 = BgL_arg2871z00_3789; 
BgL_bufposz00_3573 = BgL_arg2872z00_3790; 
BgL_zc3z04anonymousza32731ze3z87_3574:
if(
(BgL_forwardz00_3572==BgL_bufposz00_3573))
{ /* Unsafe/http.scm 411 */
if(
rgc_fill_buffer(BgL_iportz00_3570))
{ /* Unsafe/http.scm 411 */
long BgL_arg2734z00_3577;long BgL_arg2735z00_3578;
{ /* Unsafe/http.scm 411 */
long BgL_res5854z00_10738;
BgL_res5854z00_10738 = 
RGC_BUFFER_FORWARD(BgL_iportz00_3570); 
BgL_arg2734z00_3577 = BgL_res5854z00_10738; } 
{ /* Unsafe/http.scm 411 */
long BgL_res5855z00_10740;
BgL_res5855z00_10740 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_3570); 
BgL_arg2735z00_3578 = BgL_res5855z00_10740; } 
{ 
long BgL_bufposz00_17508;long BgL_forwardz00_17507;
BgL_forwardz00_17507 = BgL_arg2734z00_3577; 
BgL_bufposz00_17508 = BgL_arg2735z00_3578; 
BgL_bufposz00_3573 = BgL_bufposz00_17508; 
BgL_forwardz00_3572 = BgL_forwardz00_17507; 
goto BgL_zc3z04anonymousza32731ze3z87_3574;} }  else 
{ /* Unsafe/http.scm 411 */
BgL_matchz00_3774 = BgL_lastzd2matchzd2_3571; } }  else 
{ /* Unsafe/http.scm 411 */
int BgL_curz00_3579;
{ /* Unsafe/http.scm 411 */
int BgL_res5856z00_10743;
BgL_res5856z00_10743 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_3570, BgL_forwardz00_3572); 
BgL_curz00_3579 = BgL_res5856z00_10743; } 
{ /* Unsafe/http.scm 411 */

{ /* Unsafe/http.scm 411 */
bool_t BgL_test7973z00_17510;
if(
(
(long)(BgL_curz00_3579)>=((long)48)))
{ /* Unsafe/http.scm 411 */
BgL_test7973z00_17510 = 
(
(long)(BgL_curz00_3579)<((long)58))
; }  else 
{ /* Unsafe/http.scm 411 */
BgL_test7973z00_17510 = ((bool_t)0)
; } 
if(BgL_test7973z00_17510)
{ /* Unsafe/http.scm 411 */
BgL_iportz00_3610 = BgL_iportz00_3570; 
BgL_lastzd2matchzd2_3611 = BgL_lastzd2matchzd2_3571; 
BgL_forwardz00_3612 = 
(((long)1)+BgL_forwardz00_3572); 
BgL_bufposz00_3613 = BgL_bufposz00_3573; 
BgL_zc3z04anonymousza32752ze3z87_3614:
{ /* Unsafe/http.scm 411 */
long BgL_newzd2matchzd2_3615;
{ /* Unsafe/http.scm 411 */
long BgL_res5875z00_10789;
BgL_res5875z00_10789 = 
RGC_STOP_MATCH(BgL_iportz00_3610, BgL_forwardz00_3612); BgL_res5875z00_10789; } 
BgL_newzd2matchzd2_3615 = ((long)0); 
if(
(BgL_forwardz00_3612==BgL_bufposz00_3613))
{ /* Unsafe/http.scm 411 */
if(
rgc_fill_buffer(BgL_iportz00_3610))
{ /* Unsafe/http.scm 411 */
long BgL_arg2755z00_3618;long BgL_arg2756z00_3619;
{ /* Unsafe/http.scm 411 */
long BgL_res5878z00_10796;
BgL_res5878z00_10796 = 
RGC_BUFFER_FORWARD(BgL_iportz00_3610); 
BgL_arg2755z00_3618 = BgL_res5878z00_10796; } 
{ /* Unsafe/http.scm 411 */
long BgL_res5879z00_10798;
BgL_res5879z00_10798 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_3610); 
BgL_arg2756z00_3619 = BgL_res5879z00_10798; } 
{ 
long BgL_bufposz00_17524;long BgL_forwardz00_17523;
BgL_forwardz00_17523 = BgL_arg2755z00_3618; 
BgL_bufposz00_17524 = BgL_arg2756z00_3619; 
BgL_bufposz00_3613 = BgL_bufposz00_17524; 
BgL_forwardz00_3612 = BgL_forwardz00_17523; 
goto BgL_zc3z04anonymousza32752ze3z87_3614;} }  else 
{ /* Unsafe/http.scm 411 */
BgL_matchz00_3774 = BgL_newzd2matchzd2_3615; } }  else 
{ /* Unsafe/http.scm 411 */
int BgL_curz00_3620;
{ /* Unsafe/http.scm 411 */
int BgL_res5880z00_10801;
BgL_res5880z00_10801 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_3610, BgL_forwardz00_3612); 
BgL_curz00_3620 = BgL_res5880z00_10801; } 
{ /* Unsafe/http.scm 411 */

{ /* Unsafe/http.scm 411 */
bool_t BgL_test7977z00_17526;
if(
(
(long)(BgL_curz00_3620)>=((long)48)))
{ /* Unsafe/http.scm 411 */
BgL_test7977z00_17526 = 
(
(long)(BgL_curz00_3620)<((long)58))
; }  else 
{ /* Unsafe/http.scm 411 */
BgL_test7977z00_17526 = ((bool_t)0)
; } 
if(BgL_test7977z00_17526)
{ /* Unsafe/http.scm 411 */
BgL_iportz00_3625 = BgL_iportz00_3610; 
BgL_lastzd2matchzd2_3626 = BgL_newzd2matchzd2_3615; 
BgL_forwardz00_3627 = 
(((long)1)+BgL_forwardz00_3612); 
BgL_bufposz00_3628 = BgL_bufposz00_3613; 
BgL_zc3z04anonymousza32760ze3z87_3629:
{ /* Unsafe/http.scm 411 */
long BgL_newzd2matchzd2_3630;
{ /* Unsafe/http.scm 411 */
long BgL_res5884z00_10810;
BgL_res5884z00_10810 = 
RGC_STOP_MATCH(BgL_iportz00_3625, BgL_forwardz00_3627); BgL_res5884z00_10810; } 
BgL_newzd2matchzd2_3630 = ((long)0); 
if(
(BgL_forwardz00_3627==BgL_bufposz00_3628))
{ /* Unsafe/http.scm 411 */
if(
rgc_fill_buffer(BgL_iportz00_3625))
{ /* Unsafe/http.scm 411 */
long BgL_arg2763z00_3633;long BgL_arg2764z00_3634;
{ /* Unsafe/http.scm 411 */
long BgL_res5887z00_10817;
BgL_res5887z00_10817 = 
RGC_BUFFER_FORWARD(BgL_iportz00_3625); 
BgL_arg2763z00_3633 = BgL_res5887z00_10817; } 
{ /* Unsafe/http.scm 411 */
long BgL_res5888z00_10819;
BgL_res5888z00_10819 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_3625); 
BgL_arg2764z00_3634 = BgL_res5888z00_10819; } 
{ 
long BgL_bufposz00_17540;long BgL_forwardz00_17539;
BgL_forwardz00_17539 = BgL_arg2763z00_3633; 
BgL_bufposz00_17540 = BgL_arg2764z00_3634; 
BgL_bufposz00_3628 = BgL_bufposz00_17540; 
BgL_forwardz00_3627 = BgL_forwardz00_17539; 
goto BgL_zc3z04anonymousza32760ze3z87_3629;} }  else 
{ /* Unsafe/http.scm 411 */
BgL_matchz00_3774 = BgL_newzd2matchzd2_3630; } }  else 
{ /* Unsafe/http.scm 411 */
int BgL_curz00_3635;
{ /* Unsafe/http.scm 411 */
int BgL_res5889z00_10822;
BgL_res5889z00_10822 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_3625, BgL_forwardz00_3627); 
BgL_curz00_3635 = BgL_res5889z00_10822; } 
{ /* Unsafe/http.scm 411 */

{ /* Unsafe/http.scm 411 */
bool_t BgL_test7981z00_17542;
if(
(
(long)(BgL_curz00_3635)>=((long)48)))
{ /* Unsafe/http.scm 411 */
BgL_test7981z00_17542 = 
(
(long)(BgL_curz00_3635)<((long)58))
; }  else 
{ /* Unsafe/http.scm 411 */
BgL_test7981z00_17542 = ((bool_t)0)
; } 
if(BgL_test7981z00_17542)
{ 
long BgL_forwardz00_17549;long BgL_lastzd2matchzd2_17548;
BgL_lastzd2matchzd2_17548 = BgL_newzd2matchzd2_3630; 
BgL_forwardz00_17549 = 
(((long)1)+BgL_forwardz00_3627); 
BgL_forwardz00_3627 = BgL_forwardz00_17549; 
BgL_lastzd2matchzd2_3626 = BgL_lastzd2matchzd2_17548; 
goto BgL_zc3z04anonymousza32760ze3z87_3629;}  else 
{ /* Unsafe/http.scm 411 */
BgL_matchz00_3774 = BgL_newzd2matchzd2_3630; } } } } } }  else 
{ /* Unsafe/http.scm 411 */
BgL_matchz00_3774 = BgL_newzd2matchzd2_3615; } } } } } }  else 
{ /* Unsafe/http.scm 411 */
bool_t BgL_test7983z00_17553;
if(
(
(long)(BgL_curz00_3579)==((long)9)))
{ /* Unsafe/http.scm 411 */
BgL_test7983z00_17553 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 411 */
BgL_test7983z00_17553 = 
(
(long)(BgL_curz00_3579)==((long)32))
; } 
if(BgL_test7983z00_17553)
{ /* Unsafe/http.scm 411 */
BgL_iportz00_3595 = BgL_iportz00_3570; 
BgL_lastzd2matchzd2_3596 = BgL_lastzd2matchzd2_3571; 
BgL_forwardz00_3597 = 
(((long)1)+BgL_forwardz00_3572); 
BgL_bufposz00_3598 = BgL_bufposz00_3573; 
BgL_zc3z04anonymousza32744ze3z87_3599:
{ /* Unsafe/http.scm 411 */
long BgL_newzd2matchzd2_3600;
{ /* Unsafe/http.scm 411 */
long BgL_res5866z00_10768;
BgL_res5866z00_10768 = 
RGC_STOP_MATCH(BgL_iportz00_3595, BgL_forwardz00_3597); BgL_res5866z00_10768; } 
BgL_newzd2matchzd2_3600 = ((long)1); 
if(
(BgL_forwardz00_3597==BgL_bufposz00_3598))
{ /* Unsafe/http.scm 411 */
if(
rgc_fill_buffer(BgL_iportz00_3595))
{ /* Unsafe/http.scm 411 */
long BgL_arg2747z00_3603;long BgL_arg2748z00_3604;
{ /* Unsafe/http.scm 411 */
long BgL_res5869z00_10775;
BgL_res5869z00_10775 = 
RGC_BUFFER_FORWARD(BgL_iportz00_3595); 
BgL_arg2747z00_3603 = BgL_res5869z00_10775; } 
{ /* Unsafe/http.scm 411 */
long BgL_res5870z00_10777;
BgL_res5870z00_10777 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_3595); 
BgL_arg2748z00_3604 = BgL_res5870z00_10777; } 
{ 
long BgL_bufposz00_17567;long BgL_forwardz00_17566;
BgL_forwardz00_17566 = BgL_arg2747z00_3603; 
BgL_bufposz00_17567 = BgL_arg2748z00_3604; 
BgL_bufposz00_3598 = BgL_bufposz00_17567; 
BgL_forwardz00_3597 = BgL_forwardz00_17566; 
goto BgL_zc3z04anonymousza32744ze3z87_3599;} }  else 
{ /* Unsafe/http.scm 411 */
BgL_matchz00_3774 = BgL_newzd2matchzd2_3600; } }  else 
{ /* Unsafe/http.scm 411 */
int BgL_curz00_3605;
{ /* Unsafe/http.scm 411 */
int BgL_res5871z00_10780;
BgL_res5871z00_10780 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_3595, BgL_forwardz00_3597); 
BgL_curz00_3605 = BgL_res5871z00_10780; } 
{ /* Unsafe/http.scm 411 */

{ /* Unsafe/http.scm 411 */
bool_t BgL_test7987z00_17569;
if(
(
(long)(BgL_curz00_3605)==((long)9)))
{ /* Unsafe/http.scm 411 */
BgL_test7987z00_17569 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 411 */
BgL_test7987z00_17569 = 
(
(long)(BgL_curz00_3605)==((long)32))
; } 
if(BgL_test7987z00_17569)
{ /* Unsafe/http.scm 411 */
BgL_iportz00_3640 = BgL_iportz00_3595; 
BgL_lastzd2matchzd2_3641 = BgL_newzd2matchzd2_3600; 
BgL_forwardz00_3642 = 
(((long)1)+BgL_forwardz00_3597); 
BgL_bufposz00_3643 = BgL_bufposz00_3598; 
BgL_zc3z04anonymousza32768ze3z87_3644:
{ /* Unsafe/http.scm 411 */
long BgL_newzd2matchzd2_3645;
{ /* Unsafe/http.scm 411 */
long BgL_res5893z00_10831;
BgL_res5893z00_10831 = 
RGC_STOP_MATCH(BgL_iportz00_3640, BgL_forwardz00_3642); BgL_res5893z00_10831; } 
BgL_newzd2matchzd2_3645 = ((long)1); 
if(
(BgL_forwardz00_3642==BgL_bufposz00_3643))
{ /* Unsafe/http.scm 411 */
if(
rgc_fill_buffer(BgL_iportz00_3640))
{ /* Unsafe/http.scm 411 */
long BgL_arg2771z00_3648;long BgL_arg2772z00_3649;
{ /* Unsafe/http.scm 411 */
long BgL_res5896z00_10838;
BgL_res5896z00_10838 = 
RGC_BUFFER_FORWARD(BgL_iportz00_3640); 
BgL_arg2771z00_3648 = BgL_res5896z00_10838; } 
{ /* Unsafe/http.scm 411 */
long BgL_res5897z00_10840;
BgL_res5897z00_10840 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_3640); 
BgL_arg2772z00_3649 = BgL_res5897z00_10840; } 
{ 
long BgL_bufposz00_17583;long BgL_forwardz00_17582;
BgL_forwardz00_17582 = BgL_arg2771z00_3648; 
BgL_bufposz00_17583 = BgL_arg2772z00_3649; 
BgL_bufposz00_3643 = BgL_bufposz00_17583; 
BgL_forwardz00_3642 = BgL_forwardz00_17582; 
goto BgL_zc3z04anonymousza32768ze3z87_3644;} }  else 
{ /* Unsafe/http.scm 411 */
BgL_matchz00_3774 = BgL_newzd2matchzd2_3645; } }  else 
{ /* Unsafe/http.scm 411 */
int BgL_curz00_3650;
{ /* Unsafe/http.scm 411 */
int BgL_res5898z00_10843;
BgL_res5898z00_10843 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_3640, BgL_forwardz00_3642); 
BgL_curz00_3650 = BgL_res5898z00_10843; } 
{ /* Unsafe/http.scm 411 */

{ /* Unsafe/http.scm 411 */
bool_t BgL_test7991z00_17585;
if(
(
(long)(BgL_curz00_3650)==((long)9)))
{ /* Unsafe/http.scm 411 */
BgL_test7991z00_17585 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 411 */
BgL_test7991z00_17585 = 
(
(long)(BgL_curz00_3650)==((long)32))
; } 
if(BgL_test7991z00_17585)
{ 
long BgL_forwardz00_17592;long BgL_lastzd2matchzd2_17591;
BgL_lastzd2matchzd2_17591 = BgL_newzd2matchzd2_3645; 
BgL_forwardz00_17592 = 
(((long)1)+BgL_forwardz00_3642); 
BgL_forwardz00_3642 = BgL_forwardz00_17592; 
BgL_lastzd2matchzd2_3641 = BgL_lastzd2matchzd2_17591; 
goto BgL_zc3z04anonymousza32768ze3z87_3644;}  else 
{ /* Unsafe/http.scm 411 */
BgL_matchz00_3774 = BgL_newzd2matchzd2_3645; } } } } } }  else 
{ /* Unsafe/http.scm 411 */
BgL_matchz00_3774 = BgL_newzd2matchzd2_3600; } } } } } }  else 
{ /* Unsafe/http.scm 411 */
long BgL_arg2742z00_3586;
BgL_arg2742z00_3586 = 
(((long)1)+BgL_forwardz00_3572); 
{ /* Unsafe/http.scm 411 */
long BgL_newzd2matchzd2_10758;
{ /* Unsafe/http.scm 411 */
long BgL_res5864z00_10761;
BgL_res5864z00_10761 = 
RGC_STOP_MATCH(BgL_iportz00_3570, BgL_arg2742z00_3586); BgL_res5864z00_10761; } 
BgL_newzd2matchzd2_10758 = ((long)2); 
BgL_matchz00_3774 = BgL_newzd2matchzd2_10758; } } } } } } } 
RGC_SET_FILEPOS(BgL_pz00_53); 
{ 

{ /* Unsafe/http.scm 411 */
obj_t BgL_aux1410z00_3779;
BgL_aux1410z00_3779 = 
BINT(BgL_matchz00_3774); 
switch( 
(long)CINT(BgL_aux1410z00_3779)) { case ((long)2) : 

{ /* Unsafe/http.scm 416 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_arg2865z00_3781;
{ /* Unsafe/http.scm 416 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1139z00_3782;
{ /* Unsafe/http.scm 417 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1138z00_3787;
BgL_new1138z00_3787 = 
((BgL_z62iozd2parsezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2parsezd2errorz62_bgl) ))); 
{ /* Unsafe/http.scm 417 */
long BgL_arg2870z00_3788;
{ /* Unsafe/http.scm 417 */
long BgL_res5909z00_10866;
BgL_res5909z00_10866 = 
BGL_CLASS_INDEX(BGl_z62iozd2parsezd2errorz62zz__objectz00); 
BgL_arg2870z00_3788 = BgL_res5909z00_10866; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1138z00_3787), BgL_arg2870z00_3788); } 
BgL_new1139z00_3782 = BgL_new1138z00_3787; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1139z00_3782)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1139z00_3782)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_17608;
{ /* Unsafe/http.scm 417 */
obj_t BgL_arg2866z00_3783;
{ /* Unsafe/http.scm 417 */
obj_t BgL_arg2867z00_3784;
{ /* Unsafe/http.scm 417 */
obj_t BgL_res5910z00_10870;
{ /* Unsafe/http.scm 417 */
obj_t BgL_classz00_10869;
BgL_classz00_10869 = BGl_z62iozd2parsezd2errorz62zz__objectz00; 
BgL_res5910z00_10870 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_10869); } 
BgL_arg2867z00_3784 = BgL_res5910z00_10870; } 
BgL_arg2866z00_3783 = 
VECTOR_REF(BgL_arg2867z00_3784,((long)2)); } 
BgL_auxz00_17608 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg2866z00_3783); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1139z00_3782)))->BgL_stackz00)=((obj_t)BgL_auxz00_17608),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1139z00_3782)))->BgL_procz00)=((obj_t)BGl_string7273z00zz__httpz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1139z00_3782)))->BgL_msgz00)=((obj_t)BGl_string7362z00zz__httpz00),BUNSPEC); 
{ 
obj_t BgL_auxz00_17618;
{ /* Unsafe/http.scm 417 */
obj_t BgL_arg2868z00_3785;
{ /* Unsafe/http.scm 411 */
bool_t BgL_test7993z00_17620;
{ /* Unsafe/http.scm 411 */
long BgL_arg2856z00_3764;
{ /* Unsafe/http.scm 411 */
long BgL_res5903z00_10853;
BgL_res5903z00_10853 = 
RGC_BUFFER_MATCH_LENGTH(BgL_pz00_53); 
BgL_arg2856z00_3764 = BgL_res5903z00_10853; } 
BgL_test7993z00_17620 = 
(BgL_arg2856z00_3764==((long)0)); } 
if(BgL_test7993z00_17620)
{ /* Unsafe/http.scm 411 */
BgL_arg2868z00_3785 = BEOF; }  else 
{ /* Unsafe/http.scm 411 */
unsigned char BgL_res5905z00_10857;
BgL_res5905z00_10857 = 
RGC_BUFFER_CHARACTER(BgL_pz00_53); 
BgL_arg2868z00_3785 = 
BCHAR(BgL_res5905z00_10857); } } 
BgL_auxz00_17618 = 
BGl_httpzd2parsezd2errorzd2msgzd2zz__httpz00(BgL_arg2868z00_3785, BgL_pz00_53); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1139z00_3782)))->BgL_objz00)=((obj_t)BgL_auxz00_17618),BUNSPEC); } 
BgL_arg2865z00_3781 = BgL_new1139z00_3782; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg2865z00_3781));} break;case ((long)1) : 

goto BgL_zc3z04anonymousza32862ze3z87_3773;break;case ((long)0) : 

return 
BINT(
rgc_buffer_fixnum(BgL_pz00_53));break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string7254z00zz__httpz00, BGl_string7255z00zz__httpz00, 
BINT(BgL_matchz00_3774));} } } } } } 

}



/* http-parse-header */
BGL_EXPORTED_DEF obj_t BGl_httpzd2parsezd2headerz00zz__httpz00(obj_t BgL_pz00_54, obj_t BgL_poz00_55)
{
{ /* Unsafe/http.scm 425 */
{ 
obj_t BgL_iportz00_6574;
{ 
obj_t BgL_iportz00_6003;
{ 
obj_t BgL_iportz00_5702;
{ 
obj_t BgL_iportz00_5296;
{ 
obj_t BgL_iportz00_4450;
{ 
obj_t BgL_iportz00_3836;obj_t BgL_poz00_3837;obj_t BgL_headerz00_3838;obj_t BgL_hostnamez00_3839;obj_t BgL_portz00_3840;obj_t BgL_contentzd2lengthzd2_3841;obj_t BgL_transferzd2encodingzd2_3842;obj_t BgL_authoriza7ationza7_3843;obj_t BgL_proxyzd2authoriza7ationz75_3844;obj_t BgL_connectionz00_3845;
BgL_iportz00_3836 = BgL_pz00_54; 
BgL_poz00_3837 = BgL_poz00_55; 
BgL_headerz00_3838 = BNIL; 
BgL_hostnamez00_3839 = BFALSE; 
BgL_portz00_3840 = BFALSE; 
BgL_contentzd2lengthzd2_3841 = BGl_elong7382z00zz__httpz00; 
BgL_transferzd2encodingzd2_3842 = BFALSE; 
BgL_authoriza7ationza7_3843 = BFALSE; 
BgL_proxyzd2authoriza7ationz75_3844 = BFALSE; 
BgL_connectionz00_3845 = BFALSE; 
{ 
obj_t BgL_iportz00_3903;long BgL_lastzd2matchzd2_3904;long BgL_forwardz00_3905;long BgL_bufposz00_3906;obj_t BgL_iportz00_3932;long BgL_lastzd2matchzd2_3933;long BgL_forwardz00_3934;long BgL_bufposz00_3935;obj_t BgL_iportz00_3953;long BgL_lastzd2matchzd2_3954;long BgL_forwardz00_3955;long BgL_bufposz00_3956;obj_t BgL_iportz00_3979;long BgL_lastzd2matchzd2_3980;long BgL_forwardz00_3981;long BgL_bufposz00_3982;obj_t BgL_iportz00_4000;long BgL_lastzd2matchzd2_4001;long BgL_forwardz00_4002;long BgL_bufposz00_4003;obj_t BgL_iportz00_4026;long BgL_lastzd2matchzd2_4027;long BgL_forwardz00_4028;long BgL_bufposz00_4029;obj_t BgL_iportz00_4059;long BgL_lastzd2matchzd2_4060;long BgL_forwardz00_4061;long BgL_bufposz00_4062;obj_t BgL_iportz00_4084;long BgL_lastzd2matchzd2_4085;long BgL_forwardz00_4086;long BgL_bufposz00_4087;obj_t BgL_iportz00_4103;long BgL_lastzd2matchzd2_4104;long BgL_forwardz00_4105;long BgL_bufposz00_4106;obj_t BgL_iportz00_4133;long BgL_lastzd2matchzd2_4134;long BgL_forwardz00_4135;long BgL_bufposz00_4136;obj_t BgL_iportz00_4163;long BgL_lastzd2matchzd2_4164;long BgL_forwardz00_4165;long BgL_bufposz00_4166;
BgL_zc3z04anonymousza33139ze3z87_4312:
{ /* Unsafe/http.scm 506 */
long BgL_res6884z00_13412;
BgL_res6884z00_13412 = 
RGC_START_MATCH(BgL_iportz00_3836); BgL_res6884z00_13412; } 
{ /* Unsafe/http.scm 506 */
long BgL_matchz00_4313;
{ /* Unsafe/http.scm 506 */
long BgL_arg3195z00_4402;long BgL_arg3196z00_4403;
{ /* Unsafe/http.scm 506 */
long BgL_res6885z00_13414;
BgL_res6885z00_13414 = 
RGC_BUFFER_FORWARD(BgL_iportz00_3836); 
BgL_arg3195z00_4402 = BgL_res6885z00_13414; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6886z00_13416;
BgL_res6886z00_13416 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_3836); 
BgL_arg3196z00_4403 = BgL_res6886z00_13416; } 
BgL_iportz00_3932 = BgL_iportz00_3836; 
BgL_lastzd2matchzd2_3933 = ((long)2); 
BgL_forwardz00_3934 = BgL_arg3195z00_4402; 
BgL_bufposz00_3935 = BgL_arg3196z00_4403; 
BgL_zc3z04anonymousza32899ze3z87_3936:
if(
(BgL_forwardz00_3934==BgL_bufposz00_3935))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_3932))
{ /* Unsafe/http.scm 506 */
long BgL_arg2902z00_3939;long BgL_arg2903z00_3940;
{ /* Unsafe/http.scm 506 */
long BgL_res6650z00_12776;
BgL_res6650z00_12776 = 
RGC_BUFFER_FORWARD(BgL_iportz00_3932); 
BgL_arg2902z00_3939 = BgL_res6650z00_12776; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6651z00_12778;
BgL_res6651z00_12778 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_3932); 
BgL_arg2903z00_3940 = BgL_res6651z00_12778; } 
{ 
long BgL_bufposz00_17645;long BgL_forwardz00_17644;
BgL_forwardz00_17644 = BgL_arg2902z00_3939; 
BgL_bufposz00_17645 = BgL_arg2903z00_3940; 
BgL_bufposz00_3935 = BgL_bufposz00_17645; 
BgL_forwardz00_3934 = BgL_forwardz00_17644; 
goto BgL_zc3z04anonymousza32899ze3z87_3936;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_3933; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_3941;
{ /* Unsafe/http.scm 506 */
int BgL_res6652z00_12781;
BgL_res6652z00_12781 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_3932, BgL_forwardz00_3934); 
BgL_curz00_3941 = BgL_res6652z00_12781; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_3941)==((long)58)))
{ /* Unsafe/http.scm 506 */
long BgL_arg2905z00_3943;
BgL_arg2905z00_3943 = 
(((long)1)+BgL_forwardz00_3934); 
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_12786;
{ /* Unsafe/http.scm 506 */
long BgL_res6655z00_12789;
BgL_res6655z00_12789 = 
RGC_STOP_MATCH(BgL_iportz00_3932, BgL_arg2905z00_3943); BgL_res6655z00_12789; } 
BgL_newzd2matchzd2_12786 = ((long)2); 
BgL_matchz00_4313 = BgL_newzd2matchzd2_12786; } }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_3941)==((long)32)))
{ /* Unsafe/http.scm 506 */
BgL_iportz00_4133 = BgL_iportz00_3932; 
BgL_lastzd2matchzd2_4134 = BgL_lastzd2matchzd2_3933; 
BgL_forwardz00_4135 = 
(((long)1)+BgL_forwardz00_3934); 
BgL_bufposz00_4136 = BgL_bufposz00_3935; 
BgL_zc3z04anonymousza33019ze3z87_4137:
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_4138;
{ /* Unsafe/http.scm 506 */
long BgL_res6837z00_13298;
BgL_res6837z00_13298 = 
RGC_STOP_MATCH(BgL_iportz00_4133, BgL_forwardz00_4135); BgL_res6837z00_13298; } 
BgL_newzd2matchzd2_4138 = ((long)2); 
if(
(BgL_forwardz00_4135==BgL_bufposz00_4136))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_4133))
{ /* Unsafe/http.scm 506 */
long BgL_arg3022z00_4141;long BgL_arg3023z00_4142;
{ /* Unsafe/http.scm 506 */
long BgL_res6840z00_13305;
BgL_res6840z00_13305 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4133); 
BgL_arg3022z00_4141 = BgL_res6840z00_13305; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6841z00_13307;
BgL_res6841z00_13307 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4133); 
BgL_arg3023z00_4142 = BgL_res6841z00_13307; } 
{ 
long BgL_bufposz00_17663;long BgL_forwardz00_17662;
BgL_forwardz00_17662 = BgL_arg3022z00_4141; 
BgL_bufposz00_17663 = BgL_arg3023z00_4142; 
BgL_bufposz00_4136 = BgL_bufposz00_17663; 
BgL_forwardz00_4135 = BgL_forwardz00_17662; 
goto BgL_zc3z04anonymousza33019ze3z87_4137;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_newzd2matchzd2_4138; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_4143;
{ /* Unsafe/http.scm 506 */
int BgL_res6842z00_13310;
BgL_res6842z00_13310 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4133, BgL_forwardz00_4135); 
BgL_curz00_4143 = BgL_res6842z00_13310; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_4143)==((long)13)))
{ /* Unsafe/http.scm 506 */
BgL_iportz00_4026 = BgL_iportz00_4133; 
BgL_lastzd2matchzd2_4027 = BgL_newzd2matchzd2_4138; 
BgL_forwardz00_4028 = 
(((long)1)+BgL_forwardz00_4135); 
BgL_bufposz00_4029 = BgL_bufposz00_4136; 
BgL_zc3z04anonymousza32961ze3z87_4030:
if(
(BgL_forwardz00_4028==BgL_bufposz00_4029))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_4026))
{ /* Unsafe/http.scm 506 */
long BgL_arg2964z00_4033;long BgL_arg2965z00_4034;
{ /* Unsafe/http.scm 506 */
long BgL_res6742z00_13020;
BgL_res6742z00_13020 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4026); 
BgL_arg2964z00_4033 = BgL_res6742z00_13020; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6743z00_13022;
BgL_res6743z00_13022 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4026); 
BgL_arg2965z00_4034 = BgL_res6743z00_13022; } 
{ 
long BgL_bufposz00_17675;long BgL_forwardz00_17674;
BgL_forwardz00_17674 = BgL_arg2964z00_4033; 
BgL_bufposz00_17675 = BgL_arg2965z00_4034; 
BgL_bufposz00_4029 = BgL_bufposz00_17675; 
BgL_forwardz00_4028 = BgL_forwardz00_17674; 
goto BgL_zc3z04anonymousza32961ze3z87_4030;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_4027; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_4035;
{ /* Unsafe/http.scm 506 */
int BgL_res6744z00_13025;
BgL_res6744z00_13025 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4026, BgL_forwardz00_4028); 
BgL_curz00_4035 = BgL_res6744z00_13025; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_4035)==((long)58)))
{ /* Unsafe/http.scm 506 */
long BgL_arg2967z00_4037;
BgL_arg2967z00_4037 = 
(((long)1)+BgL_forwardz00_4028); 
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_13030;
{ /* Unsafe/http.scm 506 */
long BgL_res6747z00_13033;
BgL_res6747z00_13033 = 
RGC_STOP_MATCH(BgL_iportz00_4026, BgL_arg2967z00_4037); BgL_res6747z00_13033; } 
BgL_newzd2matchzd2_13030 = ((long)0); 
BgL_matchz00_4313 = BgL_newzd2matchzd2_13030; } }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_4035)==((long)32)))
{ /* Unsafe/http.scm 506 */
long BgL_arg2969z00_4039;
BgL_arg2969z00_4039 = 
(((long)1)+BgL_forwardz00_4028); 
{ 
long BgL_forwardz00_13039;long BgL_bufposz00_13040;
BgL_forwardz00_13039 = BgL_arg2969z00_4039; 
BgL_bufposz00_13040 = BgL_bufposz00_4029; 
BgL_statezd213zd21263z00_13038:
if(
(BgL_forwardz00_13039==BgL_bufposz00_13040))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_4026))
{ /* Unsafe/http.scm 506 */
long BgL_arg2877z00_13043;long BgL_arg2878z00_13044;
{ /* Unsafe/http.scm 506 */
long BgL_res6752z00_13054;
BgL_res6752z00_13054 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4026); 
BgL_arg2877z00_13043 = BgL_res6752z00_13054; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6753z00_13056;
BgL_res6753z00_13056 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4026); 
BgL_arg2878z00_13044 = BgL_res6753z00_13056; } 
{ 
long BgL_bufposz00_17693;long BgL_forwardz00_17692;
BgL_forwardz00_17692 = BgL_arg2877z00_13043; 
BgL_bufposz00_17693 = BgL_arg2878z00_13044; 
BgL_bufposz00_13040 = BgL_bufposz00_17693; 
BgL_forwardz00_13039 = BgL_forwardz00_17692; 
goto BgL_statezd213zd21263z00_13038;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_4027; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_13045;
{ /* Unsafe/http.scm 506 */
int BgL_res6754z00_13059;
BgL_res6754z00_13059 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4026, BgL_forwardz00_13039); 
BgL_curz00_13045 = BgL_res6754z00_13059; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_13045)==((long)58)))
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_4027; }  else 
{ /* Unsafe/http.scm 506 */
BgL_iportz00_4163 = BgL_iportz00_4026; 
BgL_lastzd2matchzd2_4164 = BgL_lastzd2matchzd2_4027; 
BgL_forwardz00_4165 = 
(((long)1)+BgL_forwardz00_13039); 
BgL_bufposz00_4166 = BgL_bufposz00_13040; 
BgL_zc3z04anonymousza33037ze3z87_4167:
if(
(BgL_forwardz00_4165==BgL_bufposz00_4166))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_4163))
{ /* Unsafe/http.scm 506 */
long BgL_arg3040z00_4170;long BgL_arg3041z00_4171;
{ /* Unsafe/http.scm 506 */
long BgL_res6858z00_13343;
BgL_res6858z00_13343 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4163); 
BgL_arg3040z00_4170 = BgL_res6858z00_13343; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6859z00_13345;
BgL_res6859z00_13345 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4163); 
BgL_arg3041z00_4171 = BgL_res6859z00_13345; } 
{ 
long BgL_bufposz00_17705;long BgL_forwardz00_17704;
BgL_forwardz00_17704 = BgL_arg3040z00_4170; 
BgL_bufposz00_17705 = BgL_arg3041z00_4171; 
BgL_bufposz00_4166 = BgL_bufposz00_17705; 
BgL_forwardz00_4165 = BgL_forwardz00_17704; 
goto BgL_zc3z04anonymousza33037ze3z87_4167;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_4164; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_4172;
{ /* Unsafe/http.scm 506 */
int BgL_res6860z00_13348;
BgL_res6860z00_13348 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4163, BgL_forwardz00_4165); 
BgL_curz00_4172 = BgL_res6860z00_13348; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_4172)==((long)58)))
{ /* Unsafe/http.scm 506 */
long BgL_arg3043z00_4174;
BgL_arg3043z00_4174 = 
(((long)1)+BgL_forwardz00_4165); 
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_13353;
{ /* Unsafe/http.scm 506 */
long BgL_res6863z00_13356;
BgL_res6863z00_13356 = 
RGC_STOP_MATCH(BgL_iportz00_4163, BgL_arg3043z00_4174); BgL_res6863z00_13356; } 
BgL_newzd2matchzd2_13353 = ((long)0); 
BgL_matchz00_4313 = BgL_newzd2matchzd2_13353; } }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_4172)==((long)32)))
{ /* Unsafe/http.scm 506 */
long BgL_arg3045z00_4176;
BgL_arg3045z00_4176 = 
(((long)1)+BgL_forwardz00_4165); 
{ 
long BgL_forwardz00_13362;long BgL_bufposz00_13363;
BgL_forwardz00_13362 = BgL_arg3045z00_4176; 
BgL_bufposz00_13363 = BgL_bufposz00_4166; 
BgL_statezd213zd21263z00_13361:
if(
(BgL_forwardz00_13362==BgL_bufposz00_13363))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_4163))
{ /* Unsafe/http.scm 506 */
long BgL_arg2877z00_13366;long BgL_arg2878z00_13367;
{ /* Unsafe/http.scm 506 */
long BgL_res6868z00_13377;
BgL_res6868z00_13377 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4163); 
BgL_arg2877z00_13366 = BgL_res6868z00_13377; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6869z00_13379;
BgL_res6869z00_13379 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4163); 
BgL_arg2878z00_13367 = BgL_res6869z00_13379; } 
{ 
long BgL_bufposz00_17723;long BgL_forwardz00_17722;
BgL_forwardz00_17722 = BgL_arg2877z00_13366; 
BgL_bufposz00_17723 = BgL_arg2878z00_13367; 
BgL_bufposz00_13363 = BgL_bufposz00_17723; 
BgL_forwardz00_13362 = BgL_forwardz00_17722; 
goto BgL_statezd213zd21263z00_13361;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_4164; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_13368;
{ /* Unsafe/http.scm 506 */
int BgL_res6870z00_13382;
BgL_res6870z00_13382 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4163, BgL_forwardz00_13362); 
BgL_curz00_13368 = BgL_res6870z00_13382; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_13368)==((long)58)))
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_4164; }  else 
{ 
long BgL_bufposz00_17730;long BgL_forwardz00_17728;
BgL_forwardz00_17728 = 
(((long)1)+BgL_forwardz00_13362); 
BgL_bufposz00_17730 = BgL_bufposz00_13363; 
BgL_bufposz00_4166 = BgL_bufposz00_17730; 
BgL_forwardz00_4165 = BgL_forwardz00_17728; 
goto BgL_zc3z04anonymousza33037ze3z87_4167;} } } } }  else 
{ /* Unsafe/http.scm 506 */
bool_t BgL_test8015z00_17731;
{ /* Unsafe/http.scm 506 */
bool_t BgL_test8016z00_17732;
if(
(
(long)(BgL_curz00_4172)==((long)10)))
{ /* Unsafe/http.scm 506 */
BgL_test8016z00_17732 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
BgL_test8016z00_17732 = 
(
(long)(BgL_curz00_4172)==((long)9))
; } 
if(BgL_test8016z00_17732)
{ /* Unsafe/http.scm 506 */
BgL_test8015z00_17731 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_4172)==((long)13)))
{ /* Unsafe/http.scm 506 */
BgL_test8015z00_17731 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_4172)==((long)32)))
{ /* Unsafe/http.scm 506 */
BgL_test8015z00_17731 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
BgL_test8015z00_17731 = 
(
(long)(BgL_curz00_4172)==((long)58))
; } } } } 
if(BgL_test8015z00_17731)
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_4164; }  else 
{ 
long BgL_forwardz00_17746;
BgL_forwardz00_17746 = 
(((long)1)+BgL_forwardz00_4165); 
BgL_forwardz00_4165 = BgL_forwardz00_17746; 
goto BgL_zc3z04anonymousza33037ze3z87_4167;} } } } } } } } } }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_4035)==((long)10)))
{ /* Unsafe/http.scm 506 */
long BgL_arg2971z00_4041;
BgL_arg2971z00_4041 = 
(((long)1)+BgL_forwardz00_4028); 
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_13068;
{ /* Unsafe/http.scm 506 */
long BgL_res6759z00_13071;
BgL_res6759z00_13071 = 
RGC_STOP_MATCH(BgL_iportz00_4026, BgL_arg2971z00_4041); BgL_res6759z00_13071; } 
BgL_newzd2matchzd2_13068 = ((long)1); 
BgL_matchz00_4313 = BgL_newzd2matchzd2_13068; } }  else 
{ /* Unsafe/http.scm 506 */
bool_t BgL_test8021z00_17754;
{ /* Unsafe/http.scm 506 */
bool_t BgL_test8022z00_17755;
if(
(
(long)(BgL_curz00_4035)==((long)10)))
{ /* Unsafe/http.scm 506 */
BgL_test8022z00_17755 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
BgL_test8022z00_17755 = 
(
(long)(BgL_curz00_4035)==((long)9))
; } 
if(BgL_test8022z00_17755)
{ /* Unsafe/http.scm 506 */
BgL_test8021z00_17754 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_4035)==((long)13)))
{ /* Unsafe/http.scm 506 */
BgL_test8021z00_17754 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_4035)==((long)32)))
{ /* Unsafe/http.scm 506 */
BgL_test8021z00_17754 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
BgL_test8021z00_17754 = 
(
(long)(BgL_curz00_4035)==((long)58))
; } } } } 
if(BgL_test8021z00_17754)
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_4027; }  else 
{ 
long BgL_bufposz00_17773;long BgL_forwardz00_17771;long BgL_lastzd2matchzd2_17770;obj_t BgL_iportz00_17769;
BgL_iportz00_17769 = BgL_iportz00_4026; 
BgL_lastzd2matchzd2_17770 = BgL_lastzd2matchzd2_4027; 
BgL_forwardz00_17771 = 
(((long)1)+BgL_forwardz00_4028); 
BgL_bufposz00_17773 = BgL_bufposz00_4029; 
BgL_bufposz00_4166 = BgL_bufposz00_17773; 
BgL_forwardz00_4165 = BgL_forwardz00_17771; 
BgL_lastzd2matchzd2_4164 = BgL_lastzd2matchzd2_17770; 
BgL_iportz00_4163 = BgL_iportz00_17769; 
goto BgL_zc3z04anonymousza33037ze3z87_4167;} } } } } } }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_4143)==((long)10)))
{ /* Unsafe/http.scm 506 */
BgL_iportz00_4000 = BgL_iportz00_4133; 
BgL_lastzd2matchzd2_4001 = BgL_newzd2matchzd2_4138; 
BgL_forwardz00_4002 = 
(((long)1)+BgL_forwardz00_4135); 
BgL_bufposz00_4003 = BgL_bufposz00_4136; 
BgL_zc3z04anonymousza32946ze3z87_4004:
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_4005;
{ /* Unsafe/http.scm 506 */
long BgL_res6716z00_12951;
BgL_res6716z00_12951 = 
RGC_STOP_MATCH(BgL_iportz00_4000, BgL_forwardz00_4002); BgL_res6716z00_12951; } 
BgL_newzd2matchzd2_4005 = ((long)1); 
if(
(BgL_forwardz00_4002==BgL_bufposz00_4003))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_4000))
{ /* Unsafe/http.scm 506 */
long BgL_arg2949z00_4008;long BgL_arg2950z00_4009;
{ /* Unsafe/http.scm 506 */
long BgL_res6719z00_12958;
BgL_res6719z00_12958 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4000); 
BgL_arg2949z00_4008 = BgL_res6719z00_12958; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6720z00_12960;
BgL_res6720z00_12960 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4000); 
BgL_arg2950z00_4009 = BgL_res6720z00_12960; } 
{ 
long BgL_bufposz00_17786;long BgL_forwardz00_17785;
BgL_forwardz00_17785 = BgL_arg2949z00_4008; 
BgL_bufposz00_17786 = BgL_arg2950z00_4009; 
BgL_bufposz00_4003 = BgL_bufposz00_17786; 
BgL_forwardz00_4002 = BgL_forwardz00_17785; 
goto BgL_zc3z04anonymousza32946ze3z87_4004;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_newzd2matchzd2_4005; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_4010;
{ /* Unsafe/http.scm 506 */
int BgL_res6721z00_12963;
BgL_res6721z00_12963 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4000, BgL_forwardz00_4002); 
BgL_curz00_4010 = BgL_res6721z00_12963; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_4010)==((long)58)))
{ /* Unsafe/http.scm 506 */
long BgL_arg2952z00_4012;
BgL_arg2952z00_4012 = 
(((long)1)+BgL_forwardz00_4002); 
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_12968;
{ /* Unsafe/http.scm 506 */
long BgL_res6724z00_12971;
BgL_res6724z00_12971 = 
RGC_STOP_MATCH(BgL_iportz00_4000, BgL_arg2952z00_4012); BgL_res6724z00_12971; } 
BgL_newzd2matchzd2_12968 = ((long)0); 
BgL_matchz00_4313 = BgL_newzd2matchzd2_12968; } }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_4010)==((long)32)))
{ /* Unsafe/http.scm 506 */
long BgL_arg2954z00_4014;
BgL_arg2954z00_4014 = 
(((long)1)+BgL_forwardz00_4002); 
{ 
long BgL_forwardz00_12977;long BgL_bufposz00_12978;
BgL_forwardz00_12977 = BgL_arg2954z00_4014; 
BgL_bufposz00_12978 = BgL_bufposz00_4003; 
BgL_statezd213zd21263z00_12976:
if(
(BgL_forwardz00_12977==BgL_bufposz00_12978))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_4000))
{ /* Unsafe/http.scm 506 */
long BgL_arg2877z00_12981;long BgL_arg2878z00_12982;
{ /* Unsafe/http.scm 506 */
long BgL_res6729z00_12992;
BgL_res6729z00_12992 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4000); 
BgL_arg2877z00_12981 = BgL_res6729z00_12992; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6730z00_12994;
BgL_res6730z00_12994 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4000); 
BgL_arg2878z00_12982 = BgL_res6730z00_12994; } 
{ 
long BgL_bufposz00_17804;long BgL_forwardz00_17803;
BgL_forwardz00_17803 = BgL_arg2877z00_12981; 
BgL_bufposz00_17804 = BgL_arg2878z00_12982; 
BgL_bufposz00_12978 = BgL_bufposz00_17804; 
BgL_forwardz00_12977 = BgL_forwardz00_17803; 
goto BgL_statezd213zd21263z00_12976;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_newzd2matchzd2_4005; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_12983;
{ /* Unsafe/http.scm 506 */
int BgL_res6731z00_12997;
BgL_res6731z00_12997 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4000, BgL_forwardz00_12977); 
BgL_curz00_12983 = BgL_res6731z00_12997; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_12983)==((long)58)))
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_newzd2matchzd2_4005; }  else 
{ 
long BgL_bufposz00_17813;long BgL_forwardz00_17811;long BgL_lastzd2matchzd2_17810;obj_t BgL_iportz00_17809;
BgL_iportz00_17809 = BgL_iportz00_4000; 
BgL_lastzd2matchzd2_17810 = BgL_newzd2matchzd2_4005; 
BgL_forwardz00_17811 = 
(((long)1)+BgL_forwardz00_12977); 
BgL_bufposz00_17813 = BgL_bufposz00_12978; 
BgL_bufposz00_4166 = BgL_bufposz00_17813; 
BgL_forwardz00_4165 = BgL_forwardz00_17811; 
BgL_lastzd2matchzd2_4164 = BgL_lastzd2matchzd2_17810; 
BgL_iportz00_4163 = BgL_iportz00_17809; 
goto BgL_zc3z04anonymousza33037ze3z87_4167;} } } } }  else 
{ /* Unsafe/http.scm 506 */
bool_t BgL_test8034z00_17814;
{ /* Unsafe/http.scm 506 */
bool_t BgL_test8035z00_17815;
if(
(
(long)(BgL_curz00_4010)==((long)10)))
{ /* Unsafe/http.scm 506 */
BgL_test8035z00_17815 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
BgL_test8035z00_17815 = 
(
(long)(BgL_curz00_4010)==((long)9))
; } 
if(BgL_test8035z00_17815)
{ /* Unsafe/http.scm 506 */
BgL_test8034z00_17814 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_4010)==((long)13)))
{ /* Unsafe/http.scm 506 */
BgL_test8034z00_17814 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_4010)==((long)32)))
{ /* Unsafe/http.scm 506 */
BgL_test8034z00_17814 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
BgL_test8034z00_17814 = 
(
(long)(BgL_curz00_4010)==((long)58))
; } } } } 
if(BgL_test8034z00_17814)
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_newzd2matchzd2_4005; }  else 
{ 
long BgL_bufposz00_17833;long BgL_forwardz00_17831;long BgL_lastzd2matchzd2_17830;obj_t BgL_iportz00_17829;
BgL_iportz00_17829 = BgL_iportz00_4000; 
BgL_lastzd2matchzd2_17830 = BgL_newzd2matchzd2_4005; 
BgL_forwardz00_17831 = 
(((long)1)+BgL_forwardz00_4002); 
BgL_bufposz00_17833 = BgL_bufposz00_4003; 
BgL_bufposz00_4166 = BgL_bufposz00_17833; 
BgL_forwardz00_4165 = BgL_forwardz00_17831; 
BgL_lastzd2matchzd2_4164 = BgL_lastzd2matchzd2_17830; 
BgL_iportz00_4163 = BgL_iportz00_17829; 
goto BgL_zc3z04anonymousza33037ze3z87_4167;} } } } } } }  else 
{ /* Unsafe/http.scm 506 */
bool_t BgL_test8039z00_17835;
if(
(
(long)(BgL_curz00_4143)==((long)9)))
{ /* Unsafe/http.scm 506 */
BgL_test8039z00_17835 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
BgL_test8039z00_17835 = 
(
(long)(BgL_curz00_4143)==((long)32))
; } 
if(BgL_test8039z00_17835)
{ /* Unsafe/http.scm 506 */
BgL_iportz00_3979 = BgL_iportz00_4133; 
BgL_lastzd2matchzd2_3980 = BgL_newzd2matchzd2_4138; 
BgL_forwardz00_3981 = 
(((long)1)+BgL_forwardz00_4135); 
BgL_bufposz00_3982 = BgL_bufposz00_4136; 
BgL_zc3z04anonymousza32930ze3z87_3983:
if(
(BgL_forwardz00_3981==BgL_bufposz00_3982))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_3979))
{ /* Unsafe/http.scm 506 */
long BgL_arg2933z00_3986;long BgL_arg2934z00_3987;
{ /* Unsafe/http.scm 506 */
long BgL_res6692z00_12883;
BgL_res6692z00_12883 = 
RGC_BUFFER_FORWARD(BgL_iportz00_3979); 
BgL_arg2933z00_3986 = BgL_res6692z00_12883; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6693z00_12885;
BgL_res6693z00_12885 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_3979); 
BgL_arg2934z00_3987 = BgL_res6693z00_12885; } 
{ 
long BgL_bufposz00_17848;long BgL_forwardz00_17847;
BgL_forwardz00_17847 = BgL_arg2933z00_3986; 
BgL_bufposz00_17848 = BgL_arg2934z00_3987; 
BgL_bufposz00_3982 = BgL_bufposz00_17848; 
BgL_forwardz00_3981 = BgL_forwardz00_17847; 
goto BgL_zc3z04anonymousza32930ze3z87_3983;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_3980; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_3988;
{ /* Unsafe/http.scm 506 */
int BgL_res6694z00_12888;
BgL_res6694z00_12888 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_3979, BgL_forwardz00_3981); 
BgL_curz00_3988 = BgL_res6694z00_12888; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_3988)==((long)58)))
{ /* Unsafe/http.scm 506 */
long BgL_arg2936z00_3990;
BgL_arg2936z00_3990 = 
(((long)1)+BgL_forwardz00_3981); 
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_12893;
{ /* Unsafe/http.scm 506 */
long BgL_res6697z00_12896;
BgL_res6697z00_12896 = 
RGC_STOP_MATCH(BgL_iportz00_3979, BgL_arg2936z00_3990); BgL_res6697z00_12896; } 
BgL_newzd2matchzd2_12893 = ((long)0); 
BgL_matchz00_4313 = BgL_newzd2matchzd2_12893; } }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_3988)==((long)32)))
{ /* Unsafe/http.scm 506 */
BgL_iportz00_3903 = BgL_iportz00_3979; 
BgL_lastzd2matchzd2_3904 = BgL_lastzd2matchzd2_3980; 
BgL_forwardz00_3905 = 
(((long)1)+BgL_forwardz00_3981); 
BgL_bufposz00_3906 = BgL_bufposz00_3982; 
BgL_zc3z04anonymousza32881ze3z87_3907:
if(
(BgL_forwardz00_3905==BgL_bufposz00_3906))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_3903))
{ /* Unsafe/http.scm 506 */
long BgL_arg2884z00_3910;long BgL_arg2885z00_3911;
{ /* Unsafe/http.scm 506 */
long BgL_res6632z00_12738;
BgL_res6632z00_12738 = 
RGC_BUFFER_FORWARD(BgL_iportz00_3903); 
BgL_arg2884z00_3910 = BgL_res6632z00_12738; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6633z00_12740;
BgL_res6633z00_12740 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_3903); 
BgL_arg2885z00_3911 = BgL_res6633z00_12740; } 
{ 
long BgL_bufposz00_17865;long BgL_forwardz00_17864;
BgL_forwardz00_17864 = BgL_arg2884z00_3910; 
BgL_bufposz00_17865 = BgL_arg2885z00_3911; 
BgL_bufposz00_3906 = BgL_bufposz00_17865; 
BgL_forwardz00_3905 = BgL_forwardz00_17864; 
goto BgL_zc3z04anonymousza32881ze3z87_3907;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_3904; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_3912;
{ /* Unsafe/http.scm 506 */
int BgL_res6634z00_12743;
BgL_res6634z00_12743 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_3903, BgL_forwardz00_3905); 
BgL_curz00_3912 = BgL_res6634z00_12743; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_3912)==((long)13)))
{ 
long BgL_bufposz00_17874;long BgL_forwardz00_17872;long BgL_lastzd2matchzd2_17871;obj_t BgL_iportz00_17870;
BgL_iportz00_17870 = BgL_iportz00_3903; 
BgL_lastzd2matchzd2_17871 = BgL_lastzd2matchzd2_3904; 
BgL_forwardz00_17872 = 
(((long)1)+BgL_forwardz00_3905); 
BgL_bufposz00_17874 = BgL_bufposz00_3906; 
BgL_bufposz00_4029 = BgL_bufposz00_17874; 
BgL_forwardz00_4028 = BgL_forwardz00_17872; 
BgL_lastzd2matchzd2_4027 = BgL_lastzd2matchzd2_17871; 
BgL_iportz00_4026 = BgL_iportz00_17870; 
goto BgL_zc3z04anonymousza32961ze3z87_4030;}  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_3912)==((long)10)))
{ 
long BgL_bufposz00_17882;long BgL_forwardz00_17880;long BgL_lastzd2matchzd2_17879;obj_t BgL_iportz00_17878;
BgL_iportz00_17878 = BgL_iportz00_3903; 
BgL_lastzd2matchzd2_17879 = BgL_lastzd2matchzd2_3904; 
BgL_forwardz00_17880 = 
(((long)1)+BgL_forwardz00_3905); 
BgL_bufposz00_17882 = BgL_bufposz00_3906; 
BgL_bufposz00_4003 = BgL_bufposz00_17882; 
BgL_forwardz00_4002 = BgL_forwardz00_17880; 
BgL_lastzd2matchzd2_4001 = BgL_lastzd2matchzd2_17879; 
BgL_iportz00_4000 = BgL_iportz00_17878; 
goto BgL_zc3z04anonymousza32946ze3z87_4004;}  else 
{ /* Unsafe/http.scm 506 */
bool_t BgL_test8049z00_17883;
if(
(
(long)(BgL_curz00_3912)==((long)9)))
{ /* Unsafe/http.scm 506 */
BgL_test8049z00_17883 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
BgL_test8049z00_17883 = 
(
(long)(BgL_curz00_3912)==((long)32))
; } 
if(BgL_test8049z00_17883)
{ 
long BgL_bufposz00_17893;long BgL_forwardz00_17891;long BgL_lastzd2matchzd2_17890;obj_t BgL_iportz00_17889;
BgL_iportz00_17889 = BgL_iportz00_3903; 
BgL_lastzd2matchzd2_17890 = BgL_lastzd2matchzd2_3904; 
BgL_forwardz00_17891 = 
(((long)1)+BgL_forwardz00_3905); 
BgL_bufposz00_17893 = BgL_bufposz00_3906; 
BgL_bufposz00_3982 = BgL_bufposz00_17893; 
BgL_forwardz00_3981 = BgL_forwardz00_17891; 
BgL_lastzd2matchzd2_3980 = BgL_lastzd2matchzd2_17890; 
BgL_iportz00_3979 = BgL_iportz00_17889; 
goto BgL_zc3z04anonymousza32930ze3z87_3983;}  else 
{ /* Unsafe/http.scm 506 */
bool_t BgL_test8051z00_17894;
{ /* Unsafe/http.scm 506 */
bool_t BgL_test8052z00_17895;
if(
(
(long)(BgL_curz00_3912)==((long)10)))
{ /* Unsafe/http.scm 506 */
BgL_test8052z00_17895 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
BgL_test8052z00_17895 = 
(
(long)(BgL_curz00_3912)==((long)9))
; } 
if(BgL_test8052z00_17895)
{ /* Unsafe/http.scm 506 */
BgL_test8051z00_17894 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_3912)==((long)13)))
{ /* Unsafe/http.scm 506 */
BgL_test8051z00_17894 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_3912)==((long)32)))
{ /* Unsafe/http.scm 506 */
BgL_test8051z00_17894 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
BgL_test8051z00_17894 = 
(
(long)(BgL_curz00_3912)==((long)58))
; } } } } 
if(BgL_test8051z00_17894)
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_3904; }  else 
{ 
long BgL_bufposz00_17913;long BgL_forwardz00_17911;long BgL_lastzd2matchzd2_17910;obj_t BgL_iportz00_17909;
BgL_iportz00_17909 = BgL_iportz00_3903; 
BgL_lastzd2matchzd2_17910 = BgL_lastzd2matchzd2_3904; 
BgL_forwardz00_17911 = 
(((long)1)+BgL_forwardz00_3905); 
BgL_bufposz00_17913 = BgL_bufposz00_3906; 
BgL_bufposz00_4166 = BgL_bufposz00_17913; 
BgL_forwardz00_4165 = BgL_forwardz00_17911; 
BgL_lastzd2matchzd2_4164 = BgL_lastzd2matchzd2_17910; 
BgL_iportz00_4163 = BgL_iportz00_17909; 
goto BgL_zc3z04anonymousza33037ze3z87_4167;} } } } } } }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_3988)==((long)13)))
{ /* Unsafe/http.scm 506 */
long BgL_arg2940z00_3994;
BgL_arg2940z00_3994 = 
(((long)1)+BgL_forwardz00_3981); 
{ 
long BgL_forwardz00_12906;long BgL_bufposz00_12907;
BgL_forwardz00_12906 = BgL_arg2940z00_3994; 
BgL_bufposz00_12907 = BgL_bufposz00_3982; 
BgL_statezd216zd21266z00_12905:
if(
(BgL_forwardz00_12906==BgL_bufposz00_12907))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_3979))
{ /* Unsafe/http.scm 506 */
long BgL_arg3015z00_12910;long BgL_arg3016z00_12911;
{ /* Unsafe/http.scm 506 */
long BgL_res6704z00_12921;
BgL_res6704z00_12921 = 
RGC_BUFFER_FORWARD(BgL_iportz00_3979); 
BgL_arg3015z00_12910 = BgL_res6704z00_12921; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6705z00_12923;
BgL_res6705z00_12923 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_3979); 
BgL_arg3016z00_12911 = BgL_res6705z00_12923; } 
{ 
long BgL_bufposz00_17926;long BgL_forwardz00_17925;
BgL_forwardz00_17925 = BgL_arg3015z00_12910; 
BgL_bufposz00_17926 = BgL_arg3016z00_12911; 
BgL_bufposz00_12907 = BgL_bufposz00_17926; 
BgL_forwardz00_12906 = BgL_forwardz00_17925; 
goto BgL_statezd216zd21266z00_12905;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_3980; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_12912;
{ /* Unsafe/http.scm 506 */
int BgL_res6706z00_12926;
BgL_res6706z00_12926 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_3979, BgL_forwardz00_12906); 
BgL_curz00_12912 = BgL_res6706z00_12926; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_12912)==((long)10)))
{ /* Unsafe/http.scm 506 */
long BgL_arg3018z00_12914;
BgL_arg3018z00_12914 = 
(((long)1)+BgL_forwardz00_12906); 
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_12931;
{ /* Unsafe/http.scm 506 */
long BgL_res6709z00_12934;
BgL_res6709z00_12934 = 
RGC_STOP_MATCH(BgL_iportz00_3979, BgL_arg3018z00_12914); BgL_res6709z00_12934; } 
BgL_newzd2matchzd2_12931 = ((long)1); 
BgL_matchz00_4313 = BgL_newzd2matchzd2_12931; } }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_3980; } } } } }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_3988)==((long)10)))
{ /* Unsafe/http.scm 506 */
long BgL_arg2942z00_3996;
BgL_arg2942z00_3996 = 
(((long)1)+BgL_forwardz00_3981); 
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_12939;
{ /* Unsafe/http.scm 506 */
long BgL_res6712z00_12942;
BgL_res6712z00_12942 = 
RGC_STOP_MATCH(BgL_iportz00_3979, BgL_arg2942z00_3996); BgL_res6712z00_12942; } 
BgL_newzd2matchzd2_12939 = ((long)1); 
BgL_matchz00_4313 = BgL_newzd2matchzd2_12939; } }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_3988)==((long)9)))
{ /* Unsafe/http.scm 506 */
BgL_iportz00_4103 = BgL_iportz00_3979; 
BgL_lastzd2matchzd2_4104 = BgL_lastzd2matchzd2_3980; 
BgL_forwardz00_4105 = 
(((long)1)+BgL_forwardz00_3981); 
BgL_bufposz00_4106 = BgL_bufposz00_3982; 
BgL_zc3z04anonymousza33000ze3z87_4107:
if(
(BgL_forwardz00_4105==BgL_bufposz00_4106))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_4103))
{ /* Unsafe/http.scm 506 */
long BgL_arg3003z00_4110;long BgL_arg3004z00_4111;
{ /* Unsafe/http.scm 506 */
long BgL_res6802z00_13188;
BgL_res6802z00_13188 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4103); 
BgL_arg3003z00_4110 = BgL_res6802z00_13188; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6803z00_13190;
BgL_res6803z00_13190 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4103); 
BgL_arg3004z00_4111 = BgL_res6803z00_13190; } 
{ 
long BgL_bufposz00_17948;long BgL_forwardz00_17947;
BgL_forwardz00_17947 = BgL_arg3003z00_4110; 
BgL_bufposz00_17948 = BgL_arg3004z00_4111; 
BgL_bufposz00_4106 = BgL_bufposz00_17948; 
BgL_forwardz00_4105 = BgL_forwardz00_17947; 
goto BgL_zc3z04anonymousza33000ze3z87_4107;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_4104; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_4112;
{ /* Unsafe/http.scm 506 */
int BgL_res6804z00_13193;
BgL_res6804z00_13193 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4103, BgL_forwardz00_4105); 
BgL_curz00_4112 = BgL_res6804z00_13193; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_4112)==((long)13)))
{ /* Unsafe/http.scm 506 */
long BgL_arg3006z00_4114;
BgL_arg3006z00_4114 = 
(((long)1)+BgL_forwardz00_4105); 
{ 
long BgL_forwardz00_13199;long BgL_bufposz00_13200;
BgL_forwardz00_13199 = BgL_arg3006z00_4114; 
BgL_bufposz00_13200 = BgL_bufposz00_4106; 
BgL_statezd216zd21266z00_13198:
if(
(BgL_forwardz00_13199==BgL_bufposz00_13200))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_4103))
{ /* Unsafe/http.scm 506 */
long BgL_arg3015z00_13203;long BgL_arg3016z00_13204;
{ /* Unsafe/http.scm 506 */
long BgL_res6809z00_13214;
BgL_res6809z00_13214 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4103); 
BgL_arg3015z00_13203 = BgL_res6809z00_13214; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6810z00_13216;
BgL_res6810z00_13216 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4103); 
BgL_arg3016z00_13204 = BgL_res6810z00_13216; } 
{ 
long BgL_bufposz00_17961;long BgL_forwardz00_17960;
BgL_forwardz00_17960 = BgL_arg3015z00_13203; 
BgL_bufposz00_17961 = BgL_arg3016z00_13204; 
BgL_bufposz00_13200 = BgL_bufposz00_17961; 
BgL_forwardz00_13199 = BgL_forwardz00_17960; 
goto BgL_statezd216zd21266z00_13198;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_4104; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_13205;
{ /* Unsafe/http.scm 506 */
int BgL_res6811z00_13219;
BgL_res6811z00_13219 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4103, BgL_forwardz00_13199); 
BgL_curz00_13205 = BgL_res6811z00_13219; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_13205)==((long)10)))
{ /* Unsafe/http.scm 506 */
long BgL_arg3018z00_13207;
BgL_arg3018z00_13207 = 
(((long)1)+BgL_forwardz00_13199); 
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_13224;
{ /* Unsafe/http.scm 506 */
long BgL_res6814z00_13227;
BgL_res6814z00_13227 = 
RGC_STOP_MATCH(BgL_iportz00_4103, BgL_arg3018z00_13207); BgL_res6814z00_13227; } 
BgL_newzd2matchzd2_13224 = ((long)1); 
BgL_matchz00_4313 = BgL_newzd2matchzd2_13224; } }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_4104; } } } } }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_4112)==((long)10)))
{ /* Unsafe/http.scm 506 */
long BgL_arg3008z00_4116;
BgL_arg3008z00_4116 = 
(((long)1)+BgL_forwardz00_4105); 
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_13232;
{ /* Unsafe/http.scm 506 */
long BgL_res6817z00_13235;
BgL_res6817z00_13235 = 
RGC_STOP_MATCH(BgL_iportz00_4103, BgL_arg3008z00_4116); BgL_res6817z00_13235; } 
BgL_newzd2matchzd2_13232 = ((long)1); 
BgL_matchz00_4313 = BgL_newzd2matchzd2_13232; } }  else 
{ /* Unsafe/http.scm 506 */
bool_t BgL_test8069z00_17973;
if(
(
(long)(BgL_curz00_4112)==((long)9)))
{ /* Unsafe/http.scm 506 */
BgL_test8069z00_17973 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
BgL_test8069z00_17973 = 
(
(long)(BgL_curz00_4112)==((long)32))
; } 
if(BgL_test8069z00_17973)
{ 
long BgL_forwardz00_17979;
BgL_forwardz00_17979 = 
(((long)1)+BgL_forwardz00_4105); 
BgL_forwardz00_4105 = BgL_forwardz00_17979; 
goto BgL_zc3z04anonymousza33000ze3z87_4107;}  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_lastzd2matchzd2_4104; } } } } } }  else 
{ 
long BgL_bufposz00_17986;long BgL_forwardz00_17984;long BgL_lastzd2matchzd2_17983;obj_t BgL_iportz00_17982;
BgL_iportz00_17982 = BgL_iportz00_3979; 
BgL_lastzd2matchzd2_17983 = BgL_lastzd2matchzd2_3980; 
BgL_forwardz00_17984 = 
(((long)1)+BgL_forwardz00_3981); 
BgL_bufposz00_17986 = BgL_bufposz00_3982; 
BgL_bufposz00_4166 = BgL_bufposz00_17986; 
BgL_forwardz00_4165 = BgL_forwardz00_17984; 
BgL_lastzd2matchzd2_4164 = BgL_lastzd2matchzd2_17983; 
BgL_iportz00_4163 = BgL_iportz00_17982; 
goto BgL_zc3z04anonymousza33037ze3z87_4167;} } } } } } } }  else 
{ /* Unsafe/http.scm 506 */
bool_t BgL_test8071z00_17988;
{ /* Unsafe/http.scm 506 */
bool_t BgL_test8072z00_17989;
if(
(
(long)(BgL_curz00_4143)==((long)10)))
{ /* Unsafe/http.scm 506 */
BgL_test8072z00_17989 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
BgL_test8072z00_17989 = 
(
(long)(BgL_curz00_4143)==((long)9))
; } 
if(BgL_test8072z00_17989)
{ /* Unsafe/http.scm 506 */
BgL_test8071z00_17988 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_4143)==((long)13)))
{ /* Unsafe/http.scm 506 */
BgL_test8071z00_17988 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_4143)==((long)32)))
{ /* Unsafe/http.scm 506 */
BgL_test8071z00_17988 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
BgL_test8071z00_17988 = 
(
(long)(BgL_curz00_4143)==((long)58))
; } } } } 
if(BgL_test8071z00_17988)
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_newzd2matchzd2_4138; }  else 
{ 
long BgL_bufposz00_18007;long BgL_forwardz00_18005;long BgL_lastzd2matchzd2_18004;obj_t BgL_iportz00_18003;
BgL_iportz00_18003 = BgL_iportz00_4133; 
BgL_lastzd2matchzd2_18004 = BgL_newzd2matchzd2_4138; 
BgL_forwardz00_18005 = 
(((long)1)+BgL_forwardz00_4135); 
BgL_bufposz00_18007 = BgL_bufposz00_4136; 
BgL_bufposz00_4166 = BgL_bufposz00_18007; 
BgL_forwardz00_4165 = BgL_forwardz00_18005; 
BgL_lastzd2matchzd2_4164 = BgL_lastzd2matchzd2_18004; 
BgL_iportz00_4163 = BgL_iportz00_18003; 
goto BgL_zc3z04anonymousza33037ze3z87_4167;} } } } } } } }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_3941)==((long)13)))
{ /* Unsafe/http.scm 506 */
BgL_iportz00_4084 = BgL_iportz00_3932; 
BgL_lastzd2matchzd2_4085 = BgL_lastzd2matchzd2_3933; 
BgL_forwardz00_4086 = 
(((long)1)+BgL_forwardz00_3934); 
BgL_bufposz00_4087 = BgL_bufposz00_3935; 
BgL_zc3z04anonymousza32992ze3z87_4088:
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_4089;
{ /* Unsafe/http.scm 506 */
long BgL_res6790z00_13157;
BgL_res6790z00_13157 = 
RGC_STOP_MATCH(BgL_iportz00_4084, BgL_forwardz00_4086); BgL_res6790z00_13157; } 
BgL_newzd2matchzd2_4089 = ((long)2); 
if(
(BgL_forwardz00_4086==BgL_bufposz00_4087))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_4084))
{ /* Unsafe/http.scm 506 */
long BgL_arg2995z00_4092;long BgL_arg2996z00_4093;
{ /* Unsafe/http.scm 506 */
long BgL_res6793z00_13164;
BgL_res6793z00_13164 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4084); 
BgL_arg2995z00_4092 = BgL_res6793z00_13164; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6794z00_13166;
BgL_res6794z00_13166 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4084); 
BgL_arg2996z00_4093 = BgL_res6794z00_13166; } 
{ 
long BgL_bufposz00_18020;long BgL_forwardz00_18019;
BgL_forwardz00_18019 = BgL_arg2995z00_4092; 
BgL_bufposz00_18020 = BgL_arg2996z00_4093; 
BgL_bufposz00_4087 = BgL_bufposz00_18020; 
BgL_forwardz00_4086 = BgL_forwardz00_18019; 
goto BgL_zc3z04anonymousza32992ze3z87_4088;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_newzd2matchzd2_4089; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_4094;
{ /* Unsafe/http.scm 506 */
int BgL_res6795z00_13169;
BgL_res6795z00_13169 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4084, BgL_forwardz00_4086); 
BgL_curz00_4094 = BgL_res6795z00_13169; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_4094)==((long)10)))
{ /* Unsafe/http.scm 506 */
long BgL_arg2998z00_4096;
BgL_arg2998z00_4096 = 
(((long)1)+BgL_forwardz00_4086); 
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_13174;
{ /* Unsafe/http.scm 506 */
long BgL_res6798z00_13177;
BgL_res6798z00_13177 = 
RGC_STOP_MATCH(BgL_iportz00_4084, BgL_arg2998z00_4096); BgL_res6798z00_13177; } 
BgL_newzd2matchzd2_13174 = ((long)1); 
BgL_matchz00_4313 = BgL_newzd2matchzd2_13174; } }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_newzd2matchzd2_4089; } } } } }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_3941)==((long)10)))
{ /* Unsafe/http.scm 506 */
long BgL_arg2911z00_3949;
BgL_arg2911z00_3949 = 
(((long)1)+BgL_forwardz00_3934); 
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_12802;
{ /* Unsafe/http.scm 506 */
long BgL_res6662z00_12805;
BgL_res6662z00_12805 = 
RGC_STOP_MATCH(BgL_iportz00_3932, BgL_arg2911z00_3949); BgL_res6662z00_12805; } 
BgL_newzd2matchzd2_12802 = ((long)1); 
BgL_matchz00_4313 = BgL_newzd2matchzd2_12802; } }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_3941)==((long)9)))
{ /* Unsafe/http.scm 506 */
BgL_iportz00_4059 = BgL_iportz00_3932; 
BgL_lastzd2matchzd2_4060 = BgL_lastzd2matchzd2_3933; 
BgL_forwardz00_4061 = 
(((long)1)+BgL_forwardz00_3934); 
BgL_bufposz00_4062 = BgL_bufposz00_3935; 
BgL_zc3z04anonymousza32979ze3z87_4063:
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_4064;
{ /* Unsafe/http.scm 506 */
long BgL_res6767z00_13090;
BgL_res6767z00_13090 = 
RGC_STOP_MATCH(BgL_iportz00_4059, BgL_forwardz00_4061); BgL_res6767z00_13090; } 
BgL_newzd2matchzd2_4064 = ((long)2); 
if(
(BgL_forwardz00_4061==BgL_bufposz00_4062))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_4059))
{ /* Unsafe/http.scm 506 */
long BgL_arg2982z00_4067;long BgL_arg2983z00_4068;
{ /* Unsafe/http.scm 506 */
long BgL_res6770z00_13097;
BgL_res6770z00_13097 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4059); 
BgL_arg2982z00_4067 = BgL_res6770z00_13097; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6771z00_13099;
BgL_res6771z00_13099 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4059); 
BgL_arg2983z00_4068 = BgL_res6771z00_13099; } 
{ 
long BgL_bufposz00_18044;long BgL_forwardz00_18043;
BgL_forwardz00_18043 = BgL_arg2982z00_4067; 
BgL_bufposz00_18044 = BgL_arg2983z00_4068; 
BgL_bufposz00_4062 = BgL_bufposz00_18044; 
BgL_forwardz00_4061 = BgL_forwardz00_18043; 
goto BgL_zc3z04anonymousza32979ze3z87_4063;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_newzd2matchzd2_4064; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_4069;
{ /* Unsafe/http.scm 506 */
int BgL_res6772z00_13102;
BgL_res6772z00_13102 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4059, BgL_forwardz00_4061); 
BgL_curz00_4069 = BgL_res6772z00_13102; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_4069)==((long)13)))
{ /* Unsafe/http.scm 506 */
long BgL_arg2985z00_4071;
BgL_arg2985z00_4071 = 
(((long)1)+BgL_forwardz00_4061); 
{ 
long BgL_forwardz00_13108;long BgL_bufposz00_13109;
BgL_forwardz00_13108 = BgL_arg2985z00_4071; 
BgL_bufposz00_13109 = BgL_bufposz00_4062; 
BgL_statezd216zd21266z00_13107:
if(
(BgL_forwardz00_13108==BgL_bufposz00_13109))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_4059))
{ /* Unsafe/http.scm 506 */
long BgL_arg3015z00_13112;long BgL_arg3016z00_13113;
{ /* Unsafe/http.scm 506 */
long BgL_res6777z00_13123;
BgL_res6777z00_13123 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4059); 
BgL_arg3015z00_13112 = BgL_res6777z00_13123; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6778z00_13125;
BgL_res6778z00_13125 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4059); 
BgL_arg3016z00_13113 = BgL_res6778z00_13125; } 
{ 
long BgL_bufposz00_18057;long BgL_forwardz00_18056;
BgL_forwardz00_18056 = BgL_arg3015z00_13112; 
BgL_bufposz00_18057 = BgL_arg3016z00_13113; 
BgL_bufposz00_13109 = BgL_bufposz00_18057; 
BgL_forwardz00_13108 = BgL_forwardz00_18056; 
goto BgL_statezd216zd21266z00_13107;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_newzd2matchzd2_4064; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_13114;
{ /* Unsafe/http.scm 506 */
int BgL_res6779z00_13128;
BgL_res6779z00_13128 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4059, BgL_forwardz00_13108); 
BgL_curz00_13114 = BgL_res6779z00_13128; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_13114)==((long)10)))
{ /* Unsafe/http.scm 506 */
long BgL_arg3018z00_13116;
BgL_arg3018z00_13116 = 
(((long)1)+BgL_forwardz00_13108); 
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_13133;
{ /* Unsafe/http.scm 506 */
long BgL_res6782z00_13136;
BgL_res6782z00_13136 = 
RGC_STOP_MATCH(BgL_iportz00_4059, BgL_arg3018z00_13116); BgL_res6782z00_13136; } 
BgL_newzd2matchzd2_13133 = ((long)1); 
BgL_matchz00_4313 = BgL_newzd2matchzd2_13133; } }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_newzd2matchzd2_4064; } } } } }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_4069)==((long)10)))
{ /* Unsafe/http.scm 506 */
long BgL_arg2987z00_4073;
BgL_arg2987z00_4073 = 
(((long)1)+BgL_forwardz00_4061); 
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_13141;
{ /* Unsafe/http.scm 506 */
long BgL_res6785z00_13144;
BgL_res6785z00_13144 = 
RGC_STOP_MATCH(BgL_iportz00_4059, BgL_arg2987z00_4073); BgL_res6785z00_13144; } 
BgL_newzd2matchzd2_13141 = ((long)1); 
BgL_matchz00_4313 = BgL_newzd2matchzd2_13141; } }  else 
{ /* Unsafe/http.scm 506 */
bool_t BgL_test8089z00_18069;
if(
(
(long)(BgL_curz00_4069)==((long)9)))
{ /* Unsafe/http.scm 506 */
BgL_test8089z00_18069 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
BgL_test8089z00_18069 = 
(
(long)(BgL_curz00_4069)==((long)32))
; } 
if(BgL_test8089z00_18069)
{ 
long BgL_bufposz00_18079;long BgL_forwardz00_18077;long BgL_lastzd2matchzd2_18076;obj_t BgL_iportz00_18075;
BgL_iportz00_18075 = BgL_iportz00_4059; 
BgL_lastzd2matchzd2_18076 = BgL_newzd2matchzd2_4064; 
BgL_forwardz00_18077 = 
(((long)1)+BgL_forwardz00_4061); 
BgL_bufposz00_18079 = BgL_bufposz00_4062; 
BgL_bufposz00_4106 = BgL_bufposz00_18079; 
BgL_forwardz00_4105 = BgL_forwardz00_18077; 
BgL_lastzd2matchzd2_4104 = BgL_lastzd2matchzd2_18076; 
BgL_iportz00_4103 = BgL_iportz00_18075; 
goto BgL_zc3z04anonymousza33000ze3z87_4107;}  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_newzd2matchzd2_4064; } } } } } } }  else 
{ /* Unsafe/http.scm 506 */
BgL_iportz00_3953 = BgL_iportz00_3932; 
BgL_lastzd2matchzd2_3954 = BgL_lastzd2matchzd2_3933; 
BgL_forwardz00_3955 = 
(((long)1)+BgL_forwardz00_3934); 
BgL_bufposz00_3956 = BgL_bufposz00_3935; 
BgL_zc3z04anonymousza32915ze3z87_3957:
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_3958;
{ /* Unsafe/http.scm 506 */
long BgL_res6666z00_12814;
BgL_res6666z00_12814 = 
RGC_STOP_MATCH(BgL_iportz00_3953, BgL_forwardz00_3955); BgL_res6666z00_12814; } 
BgL_newzd2matchzd2_3958 = ((long)2); 
if(
(BgL_forwardz00_3955==BgL_bufposz00_3956))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_3953))
{ /* Unsafe/http.scm 506 */
long BgL_arg2918z00_3961;long BgL_arg2919z00_3962;
{ /* Unsafe/http.scm 506 */
long BgL_res6669z00_12821;
BgL_res6669z00_12821 = 
RGC_BUFFER_FORWARD(BgL_iportz00_3953); 
BgL_arg2918z00_3961 = BgL_res6669z00_12821; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6670z00_12823;
BgL_res6670z00_12823 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_3953); 
BgL_arg2919z00_3962 = BgL_res6670z00_12823; } 
{ 
long BgL_bufposz00_18089;long BgL_forwardz00_18088;
BgL_forwardz00_18088 = BgL_arg2918z00_3961; 
BgL_bufposz00_18089 = BgL_arg2919z00_3962; 
BgL_bufposz00_3956 = BgL_bufposz00_18089; 
BgL_forwardz00_3955 = BgL_forwardz00_18088; 
goto BgL_zc3z04anonymousza32915ze3z87_3957;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_newzd2matchzd2_3958; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_3963;
{ /* Unsafe/http.scm 506 */
int BgL_res6671z00_12826;
BgL_res6671z00_12826 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_3953, BgL_forwardz00_3955); 
BgL_curz00_3963 = BgL_res6671z00_12826; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_3963)==((long)58)))
{ /* Unsafe/http.scm 506 */
long BgL_arg2921z00_3965;
BgL_arg2921z00_3965 = 
(((long)1)+BgL_forwardz00_3955); 
{ /* Unsafe/http.scm 506 */
long BgL_newzd2matchzd2_12831;
{ /* Unsafe/http.scm 506 */
long BgL_res6674z00_12834;
BgL_res6674z00_12834 = 
RGC_STOP_MATCH(BgL_iportz00_3953, BgL_arg2921z00_3965); BgL_res6674z00_12834; } 
BgL_newzd2matchzd2_12831 = ((long)0); 
BgL_matchz00_4313 = BgL_newzd2matchzd2_12831; } }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_3963)==((long)32)))
{ /* Unsafe/http.scm 506 */
long BgL_arg2923z00_3967;
BgL_arg2923z00_3967 = 
(((long)1)+BgL_forwardz00_3955); 
{ 
long BgL_forwardz00_12840;long BgL_bufposz00_12841;
BgL_forwardz00_12840 = BgL_arg2923z00_3967; 
BgL_bufposz00_12841 = BgL_bufposz00_3956; 
BgL_statezd213zd21263z00_12839:
if(
(BgL_forwardz00_12840==BgL_bufposz00_12841))
{ /* Unsafe/http.scm 506 */
if(
rgc_fill_buffer(BgL_iportz00_3953))
{ /* Unsafe/http.scm 506 */
long BgL_arg2877z00_12844;long BgL_arg2878z00_12845;
{ /* Unsafe/http.scm 506 */
long BgL_res6679z00_12855;
BgL_res6679z00_12855 = 
RGC_BUFFER_FORWARD(BgL_iportz00_3953); 
BgL_arg2877z00_12844 = BgL_res6679z00_12855; } 
{ /* Unsafe/http.scm 506 */
long BgL_res6680z00_12857;
BgL_res6680z00_12857 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_3953); 
BgL_arg2878z00_12845 = BgL_res6680z00_12857; } 
{ 
long BgL_bufposz00_18107;long BgL_forwardz00_18106;
BgL_forwardz00_18106 = BgL_arg2877z00_12844; 
BgL_bufposz00_18107 = BgL_arg2878z00_12845; 
BgL_bufposz00_12841 = BgL_bufposz00_18107; 
BgL_forwardz00_12840 = BgL_forwardz00_18106; 
goto BgL_statezd213zd21263z00_12839;} }  else 
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_newzd2matchzd2_3958; } }  else 
{ /* Unsafe/http.scm 506 */
int BgL_curz00_12846;
{ /* Unsafe/http.scm 506 */
int BgL_res6681z00_12860;
BgL_res6681z00_12860 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_3953, BgL_forwardz00_12840); 
BgL_curz00_12846 = BgL_res6681z00_12860; } 
{ /* Unsafe/http.scm 506 */

if(
(
(long)(BgL_curz00_12846)==((long)58)))
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_newzd2matchzd2_3958; }  else 
{ 
long BgL_bufposz00_18116;long BgL_forwardz00_18114;long BgL_lastzd2matchzd2_18113;obj_t BgL_iportz00_18112;
BgL_iportz00_18112 = BgL_iportz00_3953; 
BgL_lastzd2matchzd2_18113 = BgL_newzd2matchzd2_3958; 
BgL_forwardz00_18114 = 
(((long)1)+BgL_forwardz00_12840); 
BgL_bufposz00_18116 = BgL_bufposz00_12841; 
BgL_bufposz00_4166 = BgL_bufposz00_18116; 
BgL_forwardz00_4165 = BgL_forwardz00_18114; 
BgL_lastzd2matchzd2_4164 = BgL_lastzd2matchzd2_18113; 
BgL_iportz00_4163 = BgL_iportz00_18112; 
goto BgL_zc3z04anonymousza33037ze3z87_4167;} } } } }  else 
{ /* Unsafe/http.scm 506 */
bool_t BgL_test8098z00_18117;
{ /* Unsafe/http.scm 506 */
bool_t BgL_test8099z00_18118;
if(
(
(long)(BgL_curz00_3963)==((long)10)))
{ /* Unsafe/http.scm 506 */
BgL_test8099z00_18118 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
BgL_test8099z00_18118 = 
(
(long)(BgL_curz00_3963)==((long)9))
; } 
if(BgL_test8099z00_18118)
{ /* Unsafe/http.scm 506 */
BgL_test8098z00_18117 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_3963)==((long)13)))
{ /* Unsafe/http.scm 506 */
BgL_test8098z00_18117 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
if(
(
(long)(BgL_curz00_3963)==((long)32)))
{ /* Unsafe/http.scm 506 */
BgL_test8098z00_18117 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 506 */
BgL_test8098z00_18117 = 
(
(long)(BgL_curz00_3963)==((long)58))
; } } } } 
if(BgL_test8098z00_18117)
{ /* Unsafe/http.scm 506 */
BgL_matchz00_4313 = BgL_newzd2matchzd2_3958; }  else 
{ 
long BgL_bufposz00_18136;long BgL_forwardz00_18134;long BgL_lastzd2matchzd2_18133;obj_t BgL_iportz00_18132;
BgL_iportz00_18132 = BgL_iportz00_3953; 
BgL_lastzd2matchzd2_18133 = BgL_newzd2matchzd2_3958; 
BgL_forwardz00_18134 = 
(((long)1)+BgL_forwardz00_3955); 
BgL_bufposz00_18136 = BgL_bufposz00_3956; 
BgL_bufposz00_4166 = BgL_bufposz00_18136; 
BgL_forwardz00_4165 = BgL_forwardz00_18134; 
BgL_lastzd2matchzd2_4164 = BgL_lastzd2matchzd2_18133; 
BgL_iportz00_4163 = BgL_iportz00_18132; 
goto BgL_zc3z04anonymousza33037ze3z87_4167;} } } } } } } } } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_3836); 
switch( BgL_matchz00_4313) { case ((long)2) : 

{ /* Unsafe/http.scm 585 */
obj_t BgL_cz00_4317;
BgL_cz00_4317 = 
BGl_thezd2failureze70z35zz__httpz00(BgL_iportz00_3836); 
{ /* Unsafe/http.scm 586 */
bool_t BgL_test8103z00_18140;
{ /* Unsafe/http.scm 586 */
bool_t BgL_res6887z00_13418;
BgL_res6887z00_13418 = 
EOF_OBJECTP(BgL_cz00_4317); 
BgL_test8103z00_18140 = BgL_res6887z00_13418; } 
if(BgL_test8103z00_18140)
{ /* Unsafe/http.scm 589 */
obj_t BgL_val0_1415z00_4319;obj_t BgL_val1_1416z00_4320;obj_t BgL_val2_1417z00_4321;obj_t BgL_val3_1418z00_4322;obj_t BgL_val4_1419z00_4323;obj_t BgL_val5_1420z00_4324;obj_t BgL_val6_1421z00_4325;obj_t BgL_val7_1422z00_4326;
BgL_val0_1415z00_4319 = 
bgl_reverse_bang(BgL_headerz00_3838); 
BgL_val1_1416z00_4320 = BgL_hostnamez00_3839; 
BgL_val2_1417z00_4321 = BgL_portz00_3840; 
BgL_val3_1418z00_4322 = BgL_contentzd2lengthzd2_3841; 
BgL_val4_1419z00_4323 = BgL_transferzd2encodingzd2_3842; 
BgL_val5_1420z00_4324 = BgL_authoriza7ationza7_3843; 
BgL_val6_1421z00_4325 = BgL_proxyzd2authoriza7ationz75_3844; 
BgL_val7_1422z00_4326 = BgL_connectionz00_3845; 
{ /* Unsafe/http.scm 589 */
int BgL_res6888z00_13419;
{ /* Unsafe/http.scm 589 */
int BgL_tmpz00_18143;
BgL_tmpz00_18143 = 
(int)(((long)8)); 
BgL_res6888z00_13419 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_18143); } BgL_res6888z00_13419; } 
{ /* Unsafe/http.scm 589 */
int BgL_tmpz00_18146;
BgL_tmpz00_18146 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_18146, BgL_val1_1416z00_4320); } 
{ /* Unsafe/http.scm 589 */
int BgL_tmpz00_18149;
BgL_tmpz00_18149 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_18149, BgL_val2_1417z00_4321); } 
{ /* Unsafe/http.scm 589 */
int BgL_tmpz00_18152;
BgL_tmpz00_18152 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_18152, BgL_val3_1418z00_4322); } 
{ /* Unsafe/http.scm 589 */
int BgL_tmpz00_18155;
BgL_tmpz00_18155 = 
(int)(((long)4)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_18155, BgL_val4_1419z00_4323); } 
{ /* Unsafe/http.scm 589 */
int BgL_tmpz00_18158;
BgL_tmpz00_18158 = 
(int)(((long)5)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_18158, BgL_val5_1420z00_4324); } 
{ /* Unsafe/http.scm 589 */
int BgL_tmpz00_18161;
BgL_tmpz00_18161 = 
(int)(((long)6)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_18161, BgL_val6_1421z00_4325); } 
{ /* Unsafe/http.scm 589 */
int BgL_tmpz00_18164;
BgL_tmpz00_18164 = 
(int)(((long)7)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_18164, BgL_val7_1422z00_4326); } 
return BgL_val0_1415z00_4319;}  else 
{ /* Unsafe/http.scm 597 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_arg3142z00_4327;
{ /* Unsafe/http.scm 597 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1271z00_4328;
{ /* Unsafe/http.scm 597 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1270z00_4344;
BgL_new1270z00_4344 = 
((BgL_z62iozd2parsezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2parsezd2errorz62_bgl) ))); 
{ /* Unsafe/http.scm 597 */
long BgL_arg3158z00_4345;
{ /* Unsafe/http.scm 597 */
long BgL_res6889z00_13421;
BgL_res6889z00_13421 = 
BGL_CLASS_INDEX(BGl_z62iozd2parsezd2errorz62zz__objectz00); 
BgL_arg3158z00_4345 = BgL_res6889z00_13421; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1270z00_4344), BgL_arg3158z00_4345); } 
BgL_new1271z00_4328 = BgL_new1270z00_4344; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1271z00_4328)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1271z00_4328)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_18175;
{ /* Unsafe/http.scm 597 */
obj_t BgL_arg3143z00_4329;
{ /* Unsafe/http.scm 597 */
obj_t BgL_arg3144z00_4330;
{ /* Unsafe/http.scm 597 */
obj_t BgL_res6890z00_13425;
{ /* Unsafe/http.scm 597 */
obj_t BgL_classz00_13424;
BgL_classz00_13424 = BGl_z62iozd2parsezd2errorz62zz__objectz00; 
BgL_res6890z00_13425 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_13424); } 
BgL_arg3144z00_4330 = BgL_res6890z00_13425; } 
BgL_arg3143z00_4329 = 
VECTOR_REF(BgL_arg3144z00_4330,((long)2)); } 
BgL_auxz00_18175 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg3143z00_4329); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1271z00_4328)))->BgL_stackz00)=((obj_t)BgL_auxz00_18175),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1271z00_4328)))->BgL_procz00)=((obj_t)BGl_string7366z00zz__httpz00),BUNSPEC); 
{ 
obj_t BgL_auxz00_18183;
{ /* Unsafe/http.scm 605 */
obj_t BgL_arg3145z00_4331;
{ /* Unsafe/http.scm 605 */
obj_t BgL_arg3147z00_4333;
BgL_arg3147z00_4333 = 
BGl_thezd2failureze70z35zz__httpz00(BgL_iportz00_3836); 
BgL_arg3145z00_4331 = 
BGl_httpzd2parsezd2errorzd2msgzd2zz__httpz00(BgL_arg3147z00_4333, BgL_iportz00_3836); } 
{ /* Unsafe/http.scm 603 */
obj_t BgL_list3146z00_4332;
BgL_list3146z00_4332 = 
MAKE_YOUNG_PAIR(BgL_arg3145z00_4331, BNIL); 
BgL_auxz00_18183 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string7367z00zz__httpz00, BgL_list3146z00_4332); } } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1271z00_4328)))->BgL_msgz00)=((obj_t)BgL_auxz00_18183),BUNSPEC); } 
{ 
obj_t BgL_auxz00_18190;
{ /* Unsafe/http.scm 598 */
obj_t BgL_arg3149z00_4335;
BgL_arg3149z00_4335 = 
bgl_reverse_bang(BgL_headerz00_3838); 
{ /* Unsafe/http.scm 598 */
obj_t BgL_list3150z00_4336;
{ /* Unsafe/http.scm 598 */
obj_t BgL_arg3151z00_4337;
{ /* Unsafe/http.scm 598 */
obj_t BgL_arg3152z00_4338;
{ /* Unsafe/http.scm 598 */
obj_t BgL_arg3153z00_4339;
{ /* Unsafe/http.scm 598 */
obj_t BgL_arg3154z00_4340;
{ /* Unsafe/http.scm 598 */
obj_t BgL_arg3155z00_4341;
{ /* Unsafe/http.scm 598 */
obj_t BgL_arg3156z00_4342;
{ /* Unsafe/http.scm 598 */
obj_t BgL_arg3157z00_4343;
BgL_arg3157z00_4343 = 
MAKE_YOUNG_PAIR(BgL_connectionz00_3845, BNIL); 
BgL_arg3156z00_4342 = 
MAKE_YOUNG_PAIR(BgL_proxyzd2authoriza7ationz75_3844, BgL_arg3157z00_4343); } 
BgL_arg3155z00_4341 = 
MAKE_YOUNG_PAIR(BgL_authoriza7ationza7_3843, BgL_arg3156z00_4342); } 
BgL_arg3154z00_4340 = 
MAKE_YOUNG_PAIR(BgL_transferzd2encodingzd2_3842, BgL_arg3155z00_4341); } 
BgL_arg3153z00_4339 = 
MAKE_YOUNG_PAIR(BgL_contentzd2lengthzd2_3841, BgL_arg3154z00_4340); } 
BgL_arg3152z00_4338 = 
MAKE_YOUNG_PAIR(BgL_portz00_3840, BgL_arg3153z00_4339); } 
BgL_arg3151z00_4337 = 
MAKE_YOUNG_PAIR(BgL_hostnamez00_3839, BgL_arg3152z00_4338); } 
BgL_list3150z00_4336 = 
MAKE_YOUNG_PAIR(BgL_arg3149z00_4335, BgL_arg3151z00_4337); } 
BgL_auxz00_18190 = BgL_list3150z00_4336; } } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1271z00_4328)))->BgL_objz00)=((obj_t)BgL_auxz00_18190),BUNSPEC); } 
BgL_arg3142z00_4327 = BgL_new1271z00_4328; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg3142z00_4327));} } } break;case ((long)1) : 

{ /* Unsafe/http.scm 576 */
obj_t BgL_val0_1423z00_4346;obj_t BgL_val1_1424z00_4347;obj_t BgL_val2_1425z00_4348;obj_t BgL_val3_1426z00_4349;obj_t BgL_val4_1427z00_4350;obj_t BgL_val5_1428z00_4351;obj_t BgL_val6_1429z00_4352;obj_t BgL_val7_1430z00_4353;
BgL_val0_1423z00_4346 = 
bgl_reverse_bang(BgL_headerz00_3838); 
BgL_val1_1424z00_4347 = BgL_hostnamez00_3839; 
BgL_val2_1425z00_4348 = BgL_portz00_3840; 
BgL_val3_1426z00_4349 = BgL_contentzd2lengthzd2_3841; 
BgL_val4_1427z00_4350 = BgL_transferzd2encodingzd2_3842; 
BgL_val5_1428z00_4351 = BgL_authoriza7ationza7_3843; 
BgL_val6_1429z00_4352 = BgL_proxyzd2authoriza7ationz75_3844; 
BgL_val7_1430z00_4353 = BgL_connectionz00_3845; 
{ /* Unsafe/http.scm 576 */
int BgL_res6893z00_13429;
{ /* Unsafe/http.scm 576 */
int BgL_tmpz00_18205;
BgL_tmpz00_18205 = 
(int)(((long)8)); 
BgL_res6893z00_13429 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_18205); } BgL_res6893z00_13429; } 
{ /* Unsafe/http.scm 576 */
int BgL_tmpz00_18208;
BgL_tmpz00_18208 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_18208, BgL_val1_1424z00_4347); } 
{ /* Unsafe/http.scm 576 */
int BgL_tmpz00_18211;
BgL_tmpz00_18211 = 
(int)(((long)2)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_18211, BgL_val2_1425z00_4348); } 
{ /* Unsafe/http.scm 576 */
int BgL_tmpz00_18214;
BgL_tmpz00_18214 = 
(int)(((long)3)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_18214, BgL_val3_1426z00_4349); } 
{ /* Unsafe/http.scm 576 */
int BgL_tmpz00_18217;
BgL_tmpz00_18217 = 
(int)(((long)4)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_18217, BgL_val4_1427z00_4350); } 
{ /* Unsafe/http.scm 576 */
int BgL_tmpz00_18220;
BgL_tmpz00_18220 = 
(int)(((long)5)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_18220, BgL_val5_1428z00_4351); } 
{ /* Unsafe/http.scm 576 */
int BgL_tmpz00_18223;
BgL_tmpz00_18223 = 
(int)(((long)6)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_18223, BgL_val6_1429z00_4352); } 
{ /* Unsafe/http.scm 576 */
int BgL_tmpz00_18226;
BgL_tmpz00_18226 = 
(int)(((long)7)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_18226, BgL_val7_1430z00_4353); } 
return BgL_val0_1423z00_4346;} break;case ((long)0) : 

{ /* Unsafe/http.scm 511 */
obj_t BgL_kz00_4354;
BgL_kz00_4354 = 
rgc_buffer_downcase_keyword(BgL_iportz00_3836); 
{ /* Unsafe/http.scm 511 */

if(
(BgL_kz00_4354==BGl_keyword7287z00zz__httpz00))
{ /* Unsafe/http.scm 514 */
obj_t BgL_hz00_4357;
BgL_iportz00_6574 = BgL_iportz00_3836; 
{ 
obj_t BgL_iportz00_6610;long BgL_lastzd2matchzd2_6611;long BgL_forwardz00_6612;long BgL_bufposz00_6613;obj_t BgL_iportz00_6631;long BgL_lastzd2matchzd2_6632;long BgL_forwardz00_6633;long BgL_bufposz00_6634;obj_t BgL_iportz00_6661;long BgL_lastzd2matchzd2_6662;long BgL_forwardz00_6663;long BgL_bufposz00_6664;obj_t BgL_iportz00_6676;long BgL_lastzd2matchzd2_6677;long BgL_forwardz00_6678;long BgL_bufposz00_6679;obj_t BgL_iportz00_6697;long BgL_lastzd2matchzd2_6698;long BgL_forwardz00_6699;long BgL_bufposz00_6700;int BgL_minz00_6733;int BgL_maxz00_6734;
BgL_zc3z04anonymousza34367ze3z87_6839:
{ /* Unsafe/http.scm 445 */
long BgL_res6088z00_11305;
BgL_res6088z00_11305 = 
RGC_START_MATCH(BgL_iportz00_6574); BgL_res6088z00_11305; } 
{ /* Unsafe/http.scm 445 */
long BgL_matchz00_6840;
{ /* Unsafe/http.scm 445 */
long BgL_arg4370z00_6851;long BgL_arg4371z00_6852;
{ /* Unsafe/http.scm 445 */
long BgL_res6089z00_11307;
BgL_res6089z00_11307 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6574); 
BgL_arg4370z00_6851 = BgL_res6089z00_11307; } 
{ /* Unsafe/http.scm 445 */
long BgL_res6090z00_11309;
BgL_res6090z00_11309 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6574); 
BgL_arg4371z00_6852 = BgL_res6090z00_11309; } 
BgL_iportz00_6610 = BgL_iportz00_6574; 
BgL_lastzd2matchzd2_6611 = ((long)3); 
BgL_forwardz00_6612 = BgL_arg4370z00_6851; 
BgL_bufposz00_6613 = BgL_arg4371z00_6852; 
BgL_zc3z04anonymousza34224ze3z87_6614:
if(
(BgL_forwardz00_6612==BgL_bufposz00_6613))
{ /* Unsafe/http.scm 445 */
if(
rgc_fill_buffer(BgL_iportz00_6610))
{ /* Unsafe/http.scm 445 */
long BgL_arg4227z00_6617;long BgL_arg4228z00_6618;
{ /* Unsafe/http.scm 445 */
long BgL_res6009z00_11115;
BgL_res6009z00_11115 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6610); 
BgL_arg4227z00_6617 = BgL_res6009z00_11115; } 
{ /* Unsafe/http.scm 445 */
long BgL_res6010z00_11117;
BgL_res6010z00_11117 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6610); 
BgL_arg4228z00_6618 = BgL_res6010z00_11117; } 
{ 
long BgL_bufposz00_18242;long BgL_forwardz00_18241;
BgL_forwardz00_18241 = BgL_arg4227z00_6617; 
BgL_bufposz00_18242 = BgL_arg4228z00_6618; 
BgL_bufposz00_6613 = BgL_bufposz00_18242; 
BgL_forwardz00_6612 = BgL_forwardz00_18241; 
goto BgL_zc3z04anonymousza34224ze3z87_6614;} }  else 
{ /* Unsafe/http.scm 445 */
BgL_matchz00_6840 = BgL_lastzd2matchzd2_6611; } }  else 
{ /* Unsafe/http.scm 445 */
int BgL_curz00_6619;
{ /* Unsafe/http.scm 445 */
int BgL_res6011z00_11120;
BgL_res6011z00_11120 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_6610, BgL_forwardz00_6612); 
BgL_curz00_6619 = BgL_res6011z00_11120; } 
{ /* Unsafe/http.scm 445 */

{ /* Unsafe/http.scm 445 */
bool_t BgL_test8107z00_18244;
if(
(
(long)(BgL_curz00_6619)==((long)10)))
{ /* Unsafe/http.scm 445 */
BgL_test8107z00_18244 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 445 */
if(
(
(long)(BgL_curz00_6619)==((long)13)))
{ /* Unsafe/http.scm 445 */
BgL_test8107z00_18244 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 445 */
BgL_test8107z00_18244 = 
(
(long)(BgL_curz00_6619)==((long)58))
; } } 
if(BgL_test8107z00_18244)
{ /* Unsafe/http.scm 445 */
long BgL_arg4232z00_6623;
BgL_arg4232z00_6623 = 
(((long)1)+BgL_forwardz00_6612); 
{ /* Unsafe/http.scm 445 */
long BgL_newzd2matchzd2_11129;
{ /* Unsafe/http.scm 445 */
long BgL_res6016z00_11132;
BgL_res6016z00_11132 = 
RGC_STOP_MATCH(BgL_iportz00_6610, BgL_arg4232z00_6623); BgL_res6016z00_11132; } 
BgL_newzd2matchzd2_11129 = ((long)3); 
BgL_matchz00_6840 = BgL_newzd2matchzd2_11129; } }  else 
{ /* Unsafe/http.scm 445 */
bool_t BgL_test8110z00_18255;
if(
(
(long)(BgL_curz00_6619)==((long)9)))
{ /* Unsafe/http.scm 445 */
BgL_test8110z00_18255 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 445 */
BgL_test8110z00_18255 = 
(
(long)(BgL_curz00_6619)==((long)32))
; } 
if(BgL_test8110z00_18255)
{ /* Unsafe/http.scm 445 */
BgL_iportz00_6661 = BgL_iportz00_6610; 
BgL_lastzd2matchzd2_6662 = BgL_lastzd2matchzd2_6611; 
BgL_forwardz00_6663 = 
(((long)1)+BgL_forwardz00_6612); 
BgL_bufposz00_6664 = BgL_bufposz00_6613; 
BgL_zc3z04anonymousza34251ze3z87_6665:
{ /* Unsafe/http.scm 445 */
long BgL_newzd2matchzd2_6666;
{ /* Unsafe/http.scm 445 */
long BgL_res6037z00_11182;
BgL_res6037z00_11182 = 
RGC_STOP_MATCH(BgL_iportz00_6661, BgL_forwardz00_6663); BgL_res6037z00_11182; } 
BgL_newzd2matchzd2_6666 = ((long)2); 
if(
(BgL_forwardz00_6663==BgL_bufposz00_6664))
{ /* Unsafe/http.scm 445 */
if(
rgc_fill_buffer(BgL_iportz00_6661))
{ /* Unsafe/http.scm 445 */
long BgL_arg4254z00_6669;long BgL_arg4255z00_6670;
{ /* Unsafe/http.scm 445 */
long BgL_res6040z00_11189;
BgL_res6040z00_11189 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6661); 
BgL_arg4254z00_6669 = BgL_res6040z00_11189; } 
{ /* Unsafe/http.scm 445 */
long BgL_res6041z00_11191;
BgL_res6041z00_11191 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6661); 
BgL_arg4255z00_6670 = BgL_res6041z00_11191; } 
{ 
long BgL_bufposz00_18269;long BgL_forwardz00_18268;
BgL_forwardz00_18268 = BgL_arg4254z00_6669; 
BgL_bufposz00_18269 = BgL_arg4255z00_6670; 
BgL_bufposz00_6664 = BgL_bufposz00_18269; 
BgL_forwardz00_6663 = BgL_forwardz00_18268; 
goto BgL_zc3z04anonymousza34251ze3z87_6665;} }  else 
{ /* Unsafe/http.scm 445 */
BgL_matchz00_6840 = BgL_newzd2matchzd2_6666; } }  else 
{ /* Unsafe/http.scm 445 */
int BgL_curz00_6671;
{ /* Unsafe/http.scm 445 */
int BgL_res6042z00_11194;
BgL_res6042z00_11194 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_6661, BgL_forwardz00_6663); 
BgL_curz00_6671 = BgL_res6042z00_11194; } 
{ /* Unsafe/http.scm 445 */

{ /* Unsafe/http.scm 445 */
bool_t BgL_test8114z00_18271;
if(
(
(long)(BgL_curz00_6671)==((long)9)))
{ /* Unsafe/http.scm 445 */
BgL_test8114z00_18271 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 445 */
BgL_test8114z00_18271 = 
(
(long)(BgL_curz00_6671)==((long)32))
; } 
if(BgL_test8114z00_18271)
{ /* Unsafe/http.scm 445 */
BgL_iportz00_6676 = BgL_iportz00_6661; 
BgL_lastzd2matchzd2_6677 = BgL_newzd2matchzd2_6666; 
BgL_forwardz00_6678 = 
(((long)1)+BgL_forwardz00_6663); 
BgL_bufposz00_6679 = BgL_bufposz00_6664; 
BgL_zc3z04anonymousza34259ze3z87_6680:
{ /* Unsafe/http.scm 445 */
long BgL_newzd2matchzd2_6681;
{ /* Unsafe/http.scm 445 */
long BgL_res6046z00_11203;
BgL_res6046z00_11203 = 
RGC_STOP_MATCH(BgL_iportz00_6676, BgL_forwardz00_6678); BgL_res6046z00_11203; } 
BgL_newzd2matchzd2_6681 = ((long)2); 
if(
(BgL_forwardz00_6678==BgL_bufposz00_6679))
{ /* Unsafe/http.scm 445 */
if(
rgc_fill_buffer(BgL_iportz00_6676))
{ /* Unsafe/http.scm 445 */
long BgL_arg4262z00_6684;long BgL_arg4263z00_6685;
{ /* Unsafe/http.scm 445 */
long BgL_res6049z00_11210;
BgL_res6049z00_11210 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6676); 
BgL_arg4262z00_6684 = BgL_res6049z00_11210; } 
{ /* Unsafe/http.scm 445 */
long BgL_res6050z00_11212;
BgL_res6050z00_11212 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6676); 
BgL_arg4263z00_6685 = BgL_res6050z00_11212; } 
{ 
long BgL_bufposz00_18285;long BgL_forwardz00_18284;
BgL_forwardz00_18284 = BgL_arg4262z00_6684; 
BgL_bufposz00_18285 = BgL_arg4263z00_6685; 
BgL_bufposz00_6679 = BgL_bufposz00_18285; 
BgL_forwardz00_6678 = BgL_forwardz00_18284; 
goto BgL_zc3z04anonymousza34259ze3z87_6680;} }  else 
{ /* Unsafe/http.scm 445 */
BgL_matchz00_6840 = BgL_newzd2matchzd2_6681; } }  else 
{ /* Unsafe/http.scm 445 */
int BgL_curz00_6686;
{ /* Unsafe/http.scm 445 */
int BgL_res6051z00_11215;
BgL_res6051z00_11215 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_6676, BgL_forwardz00_6678); 
BgL_curz00_6686 = BgL_res6051z00_11215; } 
{ /* Unsafe/http.scm 445 */

{ /* Unsafe/http.scm 445 */
bool_t BgL_test8118z00_18287;
if(
(
(long)(BgL_curz00_6686)==((long)9)))
{ /* Unsafe/http.scm 445 */
BgL_test8118z00_18287 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 445 */
BgL_test8118z00_18287 = 
(
(long)(BgL_curz00_6686)==((long)32))
; } 
if(BgL_test8118z00_18287)
{ 
long BgL_forwardz00_18294;long BgL_lastzd2matchzd2_18293;
BgL_lastzd2matchzd2_18293 = BgL_newzd2matchzd2_6681; 
BgL_forwardz00_18294 = 
(((long)1)+BgL_forwardz00_6678); 
BgL_forwardz00_6678 = BgL_forwardz00_18294; 
BgL_lastzd2matchzd2_6677 = BgL_lastzd2matchzd2_18293; 
goto BgL_zc3z04anonymousza34259ze3z87_6680;}  else 
{ /* Unsafe/http.scm 445 */
BgL_matchz00_6840 = BgL_newzd2matchzd2_6681; } } } } } }  else 
{ /* Unsafe/http.scm 445 */
BgL_matchz00_6840 = BgL_newzd2matchzd2_6666; } } } } } }  else 
{ /* Unsafe/http.scm 445 */
BgL_iportz00_6697 = BgL_iportz00_6610; 
BgL_lastzd2matchzd2_6698 = BgL_lastzd2matchzd2_6611; 
BgL_forwardz00_6699 = 
(((long)1)+BgL_forwardz00_6612); 
BgL_bufposz00_6700 = BgL_bufposz00_6613; 
BgL_zc3z04anonymousza34268ze3z87_6701:
{ /* Unsafe/http.scm 445 */
long BgL_newzd2matchzd2_6702;
{ /* Unsafe/http.scm 445 */
long BgL_res6056z00_11228;
BgL_res6056z00_11228 = 
RGC_STOP_MATCH(BgL_iportz00_6697, BgL_forwardz00_6699); BgL_res6056z00_11228; } 
BgL_newzd2matchzd2_6702 = ((long)1); 
if(
(BgL_forwardz00_6699==BgL_bufposz00_6700))
{ /* Unsafe/http.scm 445 */
if(
rgc_fill_buffer(BgL_iportz00_6697))
{ /* Unsafe/http.scm 445 */
long BgL_arg4271z00_6705;long BgL_arg4272z00_6706;
{ /* Unsafe/http.scm 445 */
long BgL_res6059z00_11235;
BgL_res6059z00_11235 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6697); 
BgL_arg4271z00_6705 = BgL_res6059z00_11235; } 
{ /* Unsafe/http.scm 445 */
long BgL_res6060z00_11237;
BgL_res6060z00_11237 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6697); 
BgL_arg4272z00_6706 = BgL_res6060z00_11237; } 
{ 
long BgL_bufposz00_18306;long BgL_forwardz00_18305;
BgL_forwardz00_18305 = BgL_arg4271z00_6705; 
BgL_bufposz00_18306 = BgL_arg4272z00_6706; 
BgL_bufposz00_6700 = BgL_bufposz00_18306; 
BgL_forwardz00_6699 = BgL_forwardz00_18305; 
goto BgL_zc3z04anonymousza34268ze3z87_6701;} }  else 
{ /* Unsafe/http.scm 445 */
BgL_matchz00_6840 = BgL_newzd2matchzd2_6702; } }  else 
{ /* Unsafe/http.scm 445 */
int BgL_curz00_6707;
{ /* Unsafe/http.scm 445 */
int BgL_res6061z00_11240;
BgL_res6061z00_11240 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_6697, BgL_forwardz00_6699); 
BgL_curz00_6707 = BgL_res6061z00_11240; } 
{ /* Unsafe/http.scm 445 */

if(
(
(long)(BgL_curz00_6707)==((long)58)))
{ /* Unsafe/http.scm 445 */
long BgL_arg4274z00_6709;
BgL_arg4274z00_6709 = 
(((long)1)+BgL_forwardz00_6699); 
{ /* Unsafe/http.scm 445 */
long BgL_newzd2matchzd2_11245;
{ /* Unsafe/http.scm 445 */
long BgL_res6064z00_11248;
BgL_res6064z00_11248 = 
RGC_STOP_MATCH(BgL_iportz00_6697, BgL_arg4274z00_6709); BgL_res6064z00_11248; } 
BgL_newzd2matchzd2_11245 = ((long)0); 
BgL_matchz00_6840 = BgL_newzd2matchzd2_11245; } }  else 
{ /* Unsafe/http.scm 445 */
bool_t BgL_test8123z00_18313;
{ /* Unsafe/http.scm 445 */
bool_t BgL_test8124z00_18314;
if(
(
(long)(BgL_curz00_6707)==((long)10)))
{ /* Unsafe/http.scm 445 */
BgL_test8124z00_18314 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 445 */
BgL_test8124z00_18314 = 
(
(long)(BgL_curz00_6707)==((long)9))
; } 
if(BgL_test8124z00_18314)
{ /* Unsafe/http.scm 445 */
BgL_test8123z00_18313 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 445 */
if(
(
(long)(BgL_curz00_6707)==((long)13)))
{ /* Unsafe/http.scm 445 */
BgL_test8123z00_18313 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 445 */
if(
(
(long)(BgL_curz00_6707)==((long)32)))
{ /* Unsafe/http.scm 445 */
BgL_test8123z00_18313 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 445 */
BgL_test8123z00_18313 = 
(
(long)(BgL_curz00_6707)==((long)58))
; } } } } 
if(BgL_test8123z00_18313)
{ /* Unsafe/http.scm 445 */
BgL_matchz00_6840 = BgL_newzd2matchzd2_6702; }  else 
{ /* Unsafe/http.scm 445 */
BgL_iportz00_6631 = BgL_iportz00_6697; 
BgL_lastzd2matchzd2_6632 = BgL_newzd2matchzd2_6702; 
BgL_forwardz00_6633 = 
(((long)1)+BgL_forwardz00_6699); 
BgL_bufposz00_6634 = BgL_bufposz00_6700; 
BgL_zc3z04anonymousza34237ze3z87_6635:
{ /* Unsafe/http.scm 445 */
long BgL_newzd2matchzd2_6636;
{ /* Unsafe/http.scm 445 */
long BgL_res6021z00_11143;
BgL_res6021z00_11143 = 
RGC_STOP_MATCH(BgL_iportz00_6631, BgL_forwardz00_6633); BgL_res6021z00_11143; } 
BgL_newzd2matchzd2_6636 = ((long)1); 
if(
(BgL_forwardz00_6633==BgL_bufposz00_6634))
{ /* Unsafe/http.scm 445 */
if(
rgc_fill_buffer(BgL_iportz00_6631))
{ /* Unsafe/http.scm 445 */
long BgL_arg4240z00_6639;long BgL_arg4241z00_6640;
{ /* Unsafe/http.scm 445 */
long BgL_res6024z00_11150;
BgL_res6024z00_11150 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6631); 
BgL_arg4240z00_6639 = BgL_res6024z00_11150; } 
{ /* Unsafe/http.scm 445 */
long BgL_res6025z00_11152;
BgL_res6025z00_11152 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6631); 
BgL_arg4241z00_6640 = BgL_res6025z00_11152; } 
{ 
long BgL_bufposz00_18336;long BgL_forwardz00_18335;
BgL_forwardz00_18335 = BgL_arg4240z00_6639; 
BgL_bufposz00_18336 = BgL_arg4241z00_6640; 
BgL_bufposz00_6634 = BgL_bufposz00_18336; 
BgL_forwardz00_6633 = BgL_forwardz00_18335; 
goto BgL_zc3z04anonymousza34237ze3z87_6635;} }  else 
{ /* Unsafe/http.scm 445 */
BgL_matchz00_6840 = BgL_newzd2matchzd2_6636; } }  else 
{ /* Unsafe/http.scm 445 */
int BgL_curz00_6641;
{ /* Unsafe/http.scm 445 */
int BgL_res6026z00_11155;
BgL_res6026z00_11155 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_6631, BgL_forwardz00_6633); 
BgL_curz00_6641 = BgL_res6026z00_11155; } 
{ /* Unsafe/http.scm 445 */

if(
(
(long)(BgL_curz00_6641)==((long)58)))
{ /* Unsafe/http.scm 445 */
long BgL_arg4243z00_6643;
BgL_arg4243z00_6643 = 
(((long)1)+BgL_forwardz00_6633); 
{ /* Unsafe/http.scm 445 */
long BgL_newzd2matchzd2_11160;
{ /* Unsafe/http.scm 445 */
long BgL_res6029z00_11163;
BgL_res6029z00_11163 = 
RGC_STOP_MATCH(BgL_iportz00_6631, BgL_arg4243z00_6643); BgL_res6029z00_11163; } 
BgL_newzd2matchzd2_11160 = ((long)0); 
BgL_matchz00_6840 = BgL_newzd2matchzd2_11160; } }  else 
{ /* Unsafe/http.scm 445 */
bool_t BgL_test8131z00_18343;
{ /* Unsafe/http.scm 445 */
bool_t BgL_test8132z00_18344;
if(
(
(long)(BgL_curz00_6641)==((long)10)))
{ /* Unsafe/http.scm 445 */
BgL_test8132z00_18344 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 445 */
BgL_test8132z00_18344 = 
(
(long)(BgL_curz00_6641)==((long)9))
; } 
if(BgL_test8132z00_18344)
{ /* Unsafe/http.scm 445 */
BgL_test8131z00_18343 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 445 */
if(
(
(long)(BgL_curz00_6641)==((long)13)))
{ /* Unsafe/http.scm 445 */
BgL_test8131z00_18343 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 445 */
if(
(
(long)(BgL_curz00_6641)==((long)32)))
{ /* Unsafe/http.scm 445 */
BgL_test8131z00_18343 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 445 */
BgL_test8131z00_18343 = 
(
(long)(BgL_curz00_6641)==((long)58))
; } } } } 
if(BgL_test8131z00_18343)
{ /* Unsafe/http.scm 445 */
BgL_matchz00_6840 = BgL_newzd2matchzd2_6636; }  else 
{ 
long BgL_forwardz00_18359;long BgL_lastzd2matchzd2_18358;
BgL_lastzd2matchzd2_18358 = BgL_newzd2matchzd2_6636; 
BgL_forwardz00_18359 = 
(((long)1)+BgL_forwardz00_6633); 
BgL_forwardz00_6633 = BgL_forwardz00_18359; 
BgL_lastzd2matchzd2_6632 = BgL_lastzd2matchzd2_18358; 
goto BgL_zc3z04anonymousza34237ze3z87_6635;} } } } } } } } } } } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_6574); 
switch( BgL_matchz00_6840) { case ((long)3) : 

{ /* Unsafe/http.scm 445 */
bool_t BgL_test8136z00_18364;
{ /* Unsafe/http.scm 445 */
long BgL_arg4361z00_6830;
{ /* Unsafe/http.scm 445 */
long BgL_res6085z00_11299;
BgL_res6085z00_11299 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_6574); 
BgL_arg4361z00_6830 = BgL_res6085z00_11299; } 
BgL_test8136z00_18364 = 
(BgL_arg4361z00_6830==((long)0)); } 
if(BgL_test8136z00_18364)
{ /* Unsafe/http.scm 445 */
BgL_hz00_4357 = BEOF; }  else 
{ /* Unsafe/http.scm 445 */
unsigned char BgL_res6087z00_11303;
BgL_res6087z00_11303 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_6574); 
BgL_hz00_4357 = 
BCHAR(BgL_res6087z00_11303); } } break;case ((long)2) : 

goto BgL_zc3z04anonymousza34367ze3z87_6839;break;case ((long)1) : 

{ /* Unsafe/http.scm 451 */
obj_t BgL_val0_1411z00_6844;
{ /* Unsafe/http.scm 451 */
obj_t BgL_res6093z00_11317;
{ /* Unsafe/http.scm 445 */
long BgL_arg4287z00_11311;
{ /* Unsafe/http.scm 445 */
long BgL_res6091z00_11313;
BgL_res6091z00_11313 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_6574); 
BgL_arg4287z00_11311 = BgL_res6091z00_11313; } 
BgL_res6093z00_11317 = 
rgc_buffer_substring(BgL_iportz00_6574, ((long)0), BgL_arg4287z00_11311); } 
BgL_val0_1411z00_6844 = BgL_res6093z00_11317; } 
{ /* Unsafe/http.scm 451 */
int BgL_res6094z00_11318;
{ /* Unsafe/http.scm 451 */
int BgL_tmpz00_18371;
BgL_tmpz00_18371 = 
(int)(((long)2)); 
BgL_res6094z00_11318 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_18371); } BgL_res6094z00_11318; } 
{ /* Unsafe/http.scm 451 */
int BgL_tmpz00_18374;
BgL_tmpz00_18374 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_18374, BFALSE); } 
BgL_hz00_4357 = BgL_val0_1411z00_6844; } break;case ((long)0) : 

{ /* Unsafe/http.scm 447 */
obj_t BgL_hz00_6846;
BgL_minz00_6733 = 
(int)(((long)0)); 
BgL_maxz00_6734 = 
(int)(((long)-1)); 
if(
(
(long)(BgL_maxz00_6734)<
(long)(BgL_minz00_6733)))
{ /* Unsafe/http.scm 445 */
long BgL_arg4290z00_6737;
{ /* Unsafe/http.scm 445 */
long BgL_res6074z00_11271;
BgL_res6074z00_11271 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_6574); 
BgL_arg4290z00_6737 = BgL_res6074z00_11271; } 
{ /* Unsafe/http.scm 445 */
long BgL_za72za7_11273;
BgL_za72za7_11273 = 
(long)(BgL_maxz00_6734); 
BgL_maxz00_6734 = 
(int)(
(BgL_arg4290z00_6737+BgL_za72za7_11273)); } }  else 
{ /* Unsafe/http.scm 445 */BFALSE; } 
{ /* Unsafe/http.scm 445 */
bool_t BgL_test8138z00_18385;
if(
(
(long)(BgL_minz00_6733)>=((long)0)))
{ /* Unsafe/http.scm 445 */
if(
(
(long)(BgL_maxz00_6734)>=
(long)(BgL_minz00_6733)))
{ /* Unsafe/http.scm 445 */
long BgL_arg4299z00_6748;
{ /* Unsafe/http.scm 445 */
long BgL_res6078z00_11281;
BgL_res6078z00_11281 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_6574); 
BgL_arg4299z00_6748 = BgL_res6078z00_11281; } 
BgL_test8138z00_18385 = 
(
(long)(BgL_maxz00_6734)<=BgL_arg4299z00_6748); }  else 
{ /* Unsafe/http.scm 445 */
BgL_test8138z00_18385 = ((bool_t)0)
; } }  else 
{ /* Unsafe/http.scm 445 */
BgL_test8138z00_18385 = ((bool_t)0)
; } 
if(BgL_test8138z00_18385)
{ /* Unsafe/http.scm 445 */
BgL_hz00_6846 = 
rgc_buffer_substring(BgL_iportz00_6574, 
(long)(BgL_minz00_6733), 
(long)(BgL_maxz00_6734)); }  else 
{ /* Unsafe/http.scm 445 */
obj_t BgL_arg4295z00_6742;obj_t BgL_arg4296z00_6743;
{ /* Unsafe/http.scm 445 */
obj_t BgL_arg4297z00_6744;
{ /* Unsafe/http.scm 445 */
obj_t BgL_res6083z00_11295;
{ /* Unsafe/http.scm 445 */
long BgL_arg4287z00_11289;
{ /* Unsafe/http.scm 445 */
long BgL_res6081z00_11291;
BgL_res6081z00_11291 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_6574); 
BgL_arg4287z00_11289 = BgL_res6081z00_11291; } 
BgL_res6083z00_11295 = 
rgc_buffer_substring(BgL_iportz00_6574, ((long)0), BgL_arg4287z00_11289); } 
BgL_arg4297z00_6744 = BgL_res6083z00_11295; } 
{ /* Unsafe/http.scm 445 */
obj_t BgL_list4298z00_6745;
BgL_list4298z00_6745 = 
MAKE_YOUNG_PAIR(BgL_arg4297z00_6744, BNIL); 
BgL_arg4295z00_6742 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string7257z00zz__httpz00, BgL_list4298z00_6745); } } 
BgL_arg4296z00_6743 = 
MAKE_YOUNG_PAIR(
BINT(BgL_minz00_6733), 
BINT(BgL_maxz00_6734)); 
BgL_hz00_6846 = 
BGl_errorz00zz__errorz00(BGl_string7258z00zz__httpz00, BgL_arg4295z00_6742, BgL_arg4296z00_6743); } } 
{ /* Unsafe/http.scm 447 */
obj_t BgL_pz00_6847;
BgL_pz00_6847 = 
BGl_httpzd2readzd2fixnumz00zz__httpz00(BgL_iportz00_6574); 
{ /* Unsafe/http.scm 448 */

{ /* Unsafe/http.scm 449 */
int BgL_res6096z00_11320;
{ /* Unsafe/http.scm 449 */
int BgL_tmpz00_18410;
BgL_tmpz00_18410 = 
(int)(((long)2)); 
BgL_res6096z00_11320 = 
BGL_MVALUES_NUMBER_SET(BgL_tmpz00_18410); } BgL_res6096z00_11320; } 
{ /* Unsafe/http.scm 449 */
int BgL_tmpz00_18413;
BgL_tmpz00_18413 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_tmpz00_18413, BgL_pz00_6847); } 
BgL_hz00_4357 = BgL_hz00_6846; } } } break;
default: 
BgL_hz00_4357 = 
BGl_errorz00zz__errorz00(BGl_string7254z00zz__httpz00, BGl_string7255z00zz__httpz00, 
BINT(BgL_matchz00_6840)); } } } 
{ /* Unsafe/http.scm 515 */
obj_t BgL_pz00_4358;
{ /* Unsafe/http.scm 516 */
int BgL_tmpz00_18419;
BgL_tmpz00_18419 = 
(int)(((long)1)); 
BgL_pz00_4358 = 
BGL_MVALUES_VAL(BgL_tmpz00_18419); } 
BgL_hostnamez00_3839 = BgL_hz00_4357; 
BgL_portz00_3840 = BgL_pz00_4358; 
BGl_crlfzd2grammarze70z35zz__httpz00(BgL_iportz00_3836); 
{ /* Unsafe/http.scm 519 */
obj_t BgL_hostz00_4360;
if(
INTEGERP(BgL_pz00_4358))
{ /* Unsafe/http.scm 520 */
obj_t BgL_arg3163z00_4363;
{ /* Ieee/fixnum.scm 979 */

BgL_arg3163z00_4363 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(long)CINT(BgL_pz00_4358), ((long)10)); } 
BgL_hostz00_4360 = 
string_append_3(BgL_hz00_4357, BGl_string7324z00zz__httpz00, BgL_arg3163z00_4363); }  else 
{ /* Unsafe/http.scm 519 */
BgL_hostz00_4360 = BgL_hz00_4357; } 
{ /* Unsafe/http.scm 522 */
obj_t BgL_arg3161z00_4361;
BgL_arg3161z00_4361 = 
MAKE_YOUNG_PAIR(BgL_kz00_4354, BgL_hostz00_4360); 
BgL_headerz00_3838 = 
MAKE_YOUNG_PAIR(BgL_arg3161z00_4361, BgL_headerz00_3838); } 
goto BgL_zc3z04anonymousza33139ze3z87_4312;} } }  else 
{ /* Unsafe/http.scm 512 */
if(
(BgL_kz00_4354==BGl_keyword7368z00zz__httpz00))
{ /* Unsafe/http.scm 512 */
BgL_iportz00_6003 = BgL_iportz00_3836; 
{ 
obj_t BgL_iportz00_6038;long BgL_lastzd2matchzd2_6039;long BgL_forwardz00_6040;long BgL_bufposz00_6041;obj_t BgL_iportz00_6063;long BgL_lastzd2matchzd2_6064;long BgL_forwardz00_6065;long BgL_bufposz00_6066;obj_t BgL_iportz00_6078;long BgL_lastzd2matchzd2_6079;long BgL_forwardz00_6080;long BgL_bufposz00_6081;obj_t BgL_iportz00_6093;long BgL_lastzd2matchzd2_6094;long BgL_forwardz00_6095;long BgL_bufposz00_6096;obj_t BgL_iportz00_6108;long BgL_lastzd2matchzd2_6109;long BgL_forwardz00_6110;long BgL_bufposz00_6111;
BgL_zc3z04anonymousza34078ze3z87_6241:
{ /* Unsafe/http.scm 461 */
long BgL_res6151z00_11448;
BgL_res6151z00_11448 = 
RGC_START_MATCH(BgL_iportz00_6003); BgL_res6151z00_11448; } 
{ /* Unsafe/http.scm 461 */
long BgL_matchz00_6242;
{ /* Unsafe/http.scm 461 */
long BgL_arg4081z00_6247;long BgL_arg4082z00_6248;
{ /* Unsafe/http.scm 461 */
long BgL_res6152z00_11450;
BgL_res6152z00_11450 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6003); 
BgL_arg4081z00_6247 = BgL_res6152z00_11450; } 
{ /* Unsafe/http.scm 461 */
long BgL_res6153z00_11452;
BgL_res6153z00_11452 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6003); 
BgL_arg4082z00_6248 = BgL_res6153z00_11452; } 
BgL_iportz00_6038 = BgL_iportz00_6003; 
BgL_lastzd2matchzd2_6039 = ((long)2); 
BgL_forwardz00_6040 = BgL_arg4081z00_6247; 
BgL_bufposz00_6041 = BgL_arg4082z00_6248; 
BgL_zc3z04anonymousza33947ze3z87_6042:
if(
(BgL_forwardz00_6040==BgL_bufposz00_6041))
{ /* Unsafe/http.scm 461 */
if(
rgc_fill_buffer(BgL_iportz00_6038))
{ /* Unsafe/http.scm 461 */
long BgL_arg3950z00_6045;long BgL_arg3951z00_6046;
{ /* Unsafe/http.scm 461 */
long BgL_res6099z00_11327;
BgL_res6099z00_11327 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6038); 
BgL_arg3950z00_6045 = BgL_res6099z00_11327; } 
{ /* Unsafe/http.scm 461 */
long BgL_res6100z00_11329;
BgL_res6100z00_11329 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6038); 
BgL_arg3951z00_6046 = BgL_res6100z00_11329; } 
{ 
long BgL_bufposz00_18442;long BgL_forwardz00_18441;
BgL_forwardz00_18441 = BgL_arg3950z00_6045; 
BgL_bufposz00_18442 = BgL_arg3951z00_6046; 
BgL_bufposz00_6041 = BgL_bufposz00_18442; 
BgL_forwardz00_6040 = BgL_forwardz00_18441; 
goto BgL_zc3z04anonymousza33947ze3z87_6042;} }  else 
{ /* Unsafe/http.scm 461 */
BgL_matchz00_6242 = BgL_lastzd2matchzd2_6039; } }  else 
{ /* Unsafe/http.scm 461 */
int BgL_curz00_6047;
{ /* Unsafe/http.scm 461 */
int BgL_res6101z00_11332;
BgL_res6101z00_11332 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_6038, BgL_forwardz00_6040); 
BgL_curz00_6047 = BgL_res6101z00_11332; } 
{ /* Unsafe/http.scm 461 */

{ /* Unsafe/http.scm 461 */
bool_t BgL_test8145z00_18444;
if(
(
(long)(BgL_curz00_6047)>=((long)48)))
{ /* Unsafe/http.scm 461 */
BgL_test8145z00_18444 = 
(
(long)(BgL_curz00_6047)<((long)58))
; }  else 
{ /* Unsafe/http.scm 461 */
BgL_test8145z00_18444 = ((bool_t)0)
; } 
if(BgL_test8145z00_18444)
{ /* Unsafe/http.scm 461 */
BgL_iportz00_6078 = BgL_iportz00_6038; 
BgL_lastzd2matchzd2_6079 = BgL_lastzd2matchzd2_6039; 
BgL_forwardz00_6080 = 
(((long)1)+BgL_forwardz00_6040); 
BgL_bufposz00_6081 = BgL_bufposz00_6041; 
BgL_zc3z04anonymousza33968ze3z87_6082:
{ /* Unsafe/http.scm 461 */
long BgL_newzd2matchzd2_6083;
{ /* Unsafe/http.scm 461 */
long BgL_res6120z00_11378;
BgL_res6120z00_11378 = 
RGC_STOP_MATCH(BgL_iportz00_6078, BgL_forwardz00_6080); BgL_res6120z00_11378; } 
BgL_newzd2matchzd2_6083 = ((long)0); 
if(
(BgL_forwardz00_6080==BgL_bufposz00_6081))
{ /* Unsafe/http.scm 461 */
if(
rgc_fill_buffer(BgL_iportz00_6078))
{ /* Unsafe/http.scm 461 */
long BgL_arg3971z00_6086;long BgL_arg3972z00_6087;
{ /* Unsafe/http.scm 461 */
long BgL_res6123z00_11385;
BgL_res6123z00_11385 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6078); 
BgL_arg3971z00_6086 = BgL_res6123z00_11385; } 
{ /* Unsafe/http.scm 461 */
long BgL_res6124z00_11387;
BgL_res6124z00_11387 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6078); 
BgL_arg3972z00_6087 = BgL_res6124z00_11387; } 
{ 
long BgL_bufposz00_18458;long BgL_forwardz00_18457;
BgL_forwardz00_18457 = BgL_arg3971z00_6086; 
BgL_bufposz00_18458 = BgL_arg3972z00_6087; 
BgL_bufposz00_6081 = BgL_bufposz00_18458; 
BgL_forwardz00_6080 = BgL_forwardz00_18457; 
goto BgL_zc3z04anonymousza33968ze3z87_6082;} }  else 
{ /* Unsafe/http.scm 461 */
BgL_matchz00_6242 = BgL_newzd2matchzd2_6083; } }  else 
{ /* Unsafe/http.scm 461 */
int BgL_curz00_6088;
{ /* Unsafe/http.scm 461 */
int BgL_res6125z00_11390;
BgL_res6125z00_11390 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_6078, BgL_forwardz00_6080); 
BgL_curz00_6088 = BgL_res6125z00_11390; } 
{ /* Unsafe/http.scm 461 */

{ /* Unsafe/http.scm 461 */
bool_t BgL_test8149z00_18460;
if(
(
(long)(BgL_curz00_6088)>=((long)48)))
{ /* Unsafe/http.scm 461 */
BgL_test8149z00_18460 = 
(
(long)(BgL_curz00_6088)<((long)58))
; }  else 
{ /* Unsafe/http.scm 461 */
BgL_test8149z00_18460 = ((bool_t)0)
; } 
if(BgL_test8149z00_18460)
{ /* Unsafe/http.scm 461 */
BgL_iportz00_6093 = BgL_iportz00_6078; 
BgL_lastzd2matchzd2_6094 = BgL_newzd2matchzd2_6083; 
BgL_forwardz00_6095 = 
(((long)1)+BgL_forwardz00_6080); 
BgL_bufposz00_6096 = BgL_bufposz00_6081; 
BgL_zc3z04anonymousza33976ze3z87_6097:
{ /* Unsafe/http.scm 461 */
long BgL_newzd2matchzd2_6098;
{ /* Unsafe/http.scm 461 */
long BgL_res6129z00_11399;
BgL_res6129z00_11399 = 
RGC_STOP_MATCH(BgL_iportz00_6093, BgL_forwardz00_6095); BgL_res6129z00_11399; } 
BgL_newzd2matchzd2_6098 = ((long)0); 
if(
(BgL_forwardz00_6095==BgL_bufposz00_6096))
{ /* Unsafe/http.scm 461 */
if(
rgc_fill_buffer(BgL_iportz00_6093))
{ /* Unsafe/http.scm 461 */
long BgL_arg3979z00_6101;long BgL_arg3980z00_6102;
{ /* Unsafe/http.scm 461 */
long BgL_res6132z00_11406;
BgL_res6132z00_11406 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6093); 
BgL_arg3979z00_6101 = BgL_res6132z00_11406; } 
{ /* Unsafe/http.scm 461 */
long BgL_res6133z00_11408;
BgL_res6133z00_11408 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6093); 
BgL_arg3980z00_6102 = BgL_res6133z00_11408; } 
{ 
long BgL_bufposz00_18474;long BgL_forwardz00_18473;
BgL_forwardz00_18473 = BgL_arg3979z00_6101; 
BgL_bufposz00_18474 = BgL_arg3980z00_6102; 
BgL_bufposz00_6096 = BgL_bufposz00_18474; 
BgL_forwardz00_6095 = BgL_forwardz00_18473; 
goto BgL_zc3z04anonymousza33976ze3z87_6097;} }  else 
{ /* Unsafe/http.scm 461 */
BgL_matchz00_6242 = BgL_newzd2matchzd2_6098; } }  else 
{ /* Unsafe/http.scm 461 */
int BgL_curz00_6103;
{ /* Unsafe/http.scm 461 */
int BgL_res6134z00_11411;
BgL_res6134z00_11411 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_6093, BgL_forwardz00_6095); 
BgL_curz00_6103 = BgL_res6134z00_11411; } 
{ /* Unsafe/http.scm 461 */

{ /* Unsafe/http.scm 461 */
bool_t BgL_test8153z00_18476;
if(
(
(long)(BgL_curz00_6103)>=((long)48)))
{ /* Unsafe/http.scm 461 */
BgL_test8153z00_18476 = 
(
(long)(BgL_curz00_6103)<((long)58))
; }  else 
{ /* Unsafe/http.scm 461 */
BgL_test8153z00_18476 = ((bool_t)0)
; } 
if(BgL_test8153z00_18476)
{ 
long BgL_forwardz00_18483;long BgL_lastzd2matchzd2_18482;
BgL_lastzd2matchzd2_18482 = BgL_newzd2matchzd2_6098; 
BgL_forwardz00_18483 = 
(((long)1)+BgL_forwardz00_6095); 
BgL_forwardz00_6095 = BgL_forwardz00_18483; 
BgL_lastzd2matchzd2_6094 = BgL_lastzd2matchzd2_18482; 
goto BgL_zc3z04anonymousza33976ze3z87_6097;}  else 
{ /* Unsafe/http.scm 461 */
BgL_matchz00_6242 = BgL_newzd2matchzd2_6098; } } } } } }  else 
{ /* Unsafe/http.scm 461 */
BgL_matchz00_6242 = BgL_newzd2matchzd2_6083; } } } } } }  else 
{ /* Unsafe/http.scm 461 */
bool_t BgL_test8155z00_18487;
if(
(
(long)(BgL_curz00_6047)==((long)9)))
{ /* Unsafe/http.scm 461 */
BgL_test8155z00_18487 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 461 */
BgL_test8155z00_18487 = 
(
(long)(BgL_curz00_6047)==((long)32))
; } 
if(BgL_test8155z00_18487)
{ /* Unsafe/http.scm 461 */
BgL_iportz00_6063 = BgL_iportz00_6038; 
BgL_lastzd2matchzd2_6064 = BgL_lastzd2matchzd2_6039; 
BgL_forwardz00_6065 = 
(((long)1)+BgL_forwardz00_6040); 
BgL_bufposz00_6066 = BgL_bufposz00_6041; 
BgL_zc3z04anonymousza33960ze3z87_6067:
{ /* Unsafe/http.scm 461 */
long BgL_newzd2matchzd2_6068;
{ /* Unsafe/http.scm 461 */
long BgL_res6111z00_11357;
BgL_res6111z00_11357 = 
RGC_STOP_MATCH(BgL_iportz00_6063, BgL_forwardz00_6065); BgL_res6111z00_11357; } 
BgL_newzd2matchzd2_6068 = ((long)1); 
if(
(BgL_forwardz00_6065==BgL_bufposz00_6066))
{ /* Unsafe/http.scm 461 */
if(
rgc_fill_buffer(BgL_iportz00_6063))
{ /* Unsafe/http.scm 461 */
long BgL_arg3963z00_6071;long BgL_arg3964z00_6072;
{ /* Unsafe/http.scm 461 */
long BgL_res6114z00_11364;
BgL_res6114z00_11364 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6063); 
BgL_arg3963z00_6071 = BgL_res6114z00_11364; } 
{ /* Unsafe/http.scm 461 */
long BgL_res6115z00_11366;
BgL_res6115z00_11366 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6063); 
BgL_arg3964z00_6072 = BgL_res6115z00_11366; } 
{ 
long BgL_bufposz00_18501;long BgL_forwardz00_18500;
BgL_forwardz00_18500 = BgL_arg3963z00_6071; 
BgL_bufposz00_18501 = BgL_arg3964z00_6072; 
BgL_bufposz00_6066 = BgL_bufposz00_18501; 
BgL_forwardz00_6065 = BgL_forwardz00_18500; 
goto BgL_zc3z04anonymousza33960ze3z87_6067;} }  else 
{ /* Unsafe/http.scm 461 */
BgL_matchz00_6242 = BgL_newzd2matchzd2_6068; } }  else 
{ /* Unsafe/http.scm 461 */
int BgL_curz00_6073;
{ /* Unsafe/http.scm 461 */
int BgL_res6116z00_11369;
BgL_res6116z00_11369 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_6063, BgL_forwardz00_6065); 
BgL_curz00_6073 = BgL_res6116z00_11369; } 
{ /* Unsafe/http.scm 461 */

{ /* Unsafe/http.scm 461 */
bool_t BgL_test8159z00_18503;
if(
(
(long)(BgL_curz00_6073)==((long)9)))
{ /* Unsafe/http.scm 461 */
BgL_test8159z00_18503 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 461 */
BgL_test8159z00_18503 = 
(
(long)(BgL_curz00_6073)==((long)32))
; } 
if(BgL_test8159z00_18503)
{ /* Unsafe/http.scm 461 */
BgL_iportz00_6108 = BgL_iportz00_6063; 
BgL_lastzd2matchzd2_6109 = BgL_newzd2matchzd2_6068; 
BgL_forwardz00_6110 = 
(((long)1)+BgL_forwardz00_6065); 
BgL_bufposz00_6111 = BgL_bufposz00_6066; 
BgL_zc3z04anonymousza33984ze3z87_6112:
{ /* Unsafe/http.scm 461 */
long BgL_newzd2matchzd2_6113;
{ /* Unsafe/http.scm 461 */
long BgL_res6138z00_11420;
BgL_res6138z00_11420 = 
RGC_STOP_MATCH(BgL_iportz00_6108, BgL_forwardz00_6110); BgL_res6138z00_11420; } 
BgL_newzd2matchzd2_6113 = ((long)1); 
if(
(BgL_forwardz00_6110==BgL_bufposz00_6111))
{ /* Unsafe/http.scm 461 */
if(
rgc_fill_buffer(BgL_iportz00_6108))
{ /* Unsafe/http.scm 461 */
long BgL_arg3987z00_6116;long BgL_arg3988z00_6117;
{ /* Unsafe/http.scm 461 */
long BgL_res6141z00_11427;
BgL_res6141z00_11427 = 
RGC_BUFFER_FORWARD(BgL_iportz00_6108); 
BgL_arg3987z00_6116 = BgL_res6141z00_11427; } 
{ /* Unsafe/http.scm 461 */
long BgL_res6142z00_11429;
BgL_res6142z00_11429 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_6108); 
BgL_arg3988z00_6117 = BgL_res6142z00_11429; } 
{ 
long BgL_bufposz00_18517;long BgL_forwardz00_18516;
BgL_forwardz00_18516 = BgL_arg3987z00_6116; 
BgL_bufposz00_18517 = BgL_arg3988z00_6117; 
BgL_bufposz00_6111 = BgL_bufposz00_18517; 
BgL_forwardz00_6110 = BgL_forwardz00_18516; 
goto BgL_zc3z04anonymousza33984ze3z87_6112;} }  else 
{ /* Unsafe/http.scm 461 */
BgL_matchz00_6242 = BgL_newzd2matchzd2_6113; } }  else 
{ /* Unsafe/http.scm 461 */
int BgL_curz00_6118;
{ /* Unsafe/http.scm 461 */
int BgL_res6143z00_11432;
BgL_res6143z00_11432 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_6108, BgL_forwardz00_6110); 
BgL_curz00_6118 = BgL_res6143z00_11432; } 
{ /* Unsafe/http.scm 461 */

{ /* Unsafe/http.scm 461 */
bool_t BgL_test8163z00_18519;
if(
(
(long)(BgL_curz00_6118)==((long)9)))
{ /* Unsafe/http.scm 461 */
BgL_test8163z00_18519 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 461 */
BgL_test8163z00_18519 = 
(
(long)(BgL_curz00_6118)==((long)32))
; } 
if(BgL_test8163z00_18519)
{ 
long BgL_forwardz00_18526;long BgL_lastzd2matchzd2_18525;
BgL_lastzd2matchzd2_18525 = BgL_newzd2matchzd2_6113; 
BgL_forwardz00_18526 = 
(((long)1)+BgL_forwardz00_6110); 
BgL_forwardz00_6110 = BgL_forwardz00_18526; 
BgL_lastzd2matchzd2_6109 = BgL_lastzd2matchzd2_18525; 
goto BgL_zc3z04anonymousza33984ze3z87_6112;}  else 
{ /* Unsafe/http.scm 461 */
BgL_matchz00_6242 = BgL_newzd2matchzd2_6113; } } } } } }  else 
{ /* Unsafe/http.scm 461 */
BgL_matchz00_6242 = BgL_newzd2matchzd2_6068; } } } } } }  else 
{ /* Unsafe/http.scm 461 */
long BgL_arg3958z00_6054;
BgL_arg3958z00_6054 = 
(((long)1)+BgL_forwardz00_6040); 
{ /* Unsafe/http.scm 461 */
long BgL_newzd2matchzd2_11347;
{ /* Unsafe/http.scm 461 */
long BgL_res6109z00_11350;
BgL_res6109z00_11350 = 
RGC_STOP_MATCH(BgL_iportz00_6038, BgL_arg3958z00_6054); BgL_res6109z00_11350; } 
BgL_newzd2matchzd2_11347 = ((long)2); 
BgL_matchz00_6242 = BgL_newzd2matchzd2_11347; } } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_6003); 
switch( BgL_matchz00_6242) { case ((long)2) : 

{ /* Unsafe/http.scm 461 */
bool_t BgL_test8165z00_18533;
{ /* Unsafe/http.scm 461 */
long BgL_arg4072z00_6232;
{ /* Unsafe/http.scm 461 */
long BgL_res6148z00_11442;
BgL_res6148z00_11442 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_6003); 
BgL_arg4072z00_6232 = BgL_res6148z00_11442; } 
BgL_test8165z00_18533 = 
(BgL_arg4072z00_6232==((long)0)); } 
if(BgL_test8165z00_18533)
{ /* Unsafe/http.scm 461 */
BgL_contentzd2lengthzd2_3841 = BEOF; }  else 
{ /* Unsafe/http.scm 461 */
unsigned char BgL_res6150z00_11446;
BgL_res6150z00_11446 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_6003); 
BgL_contentzd2lengthzd2_3841 = 
BCHAR(BgL_res6150z00_11446); } } break;case ((long)1) : 

goto BgL_zc3z04anonymousza34078ze3z87_6241;break;case ((long)0) : 

{ /* Unsafe/http.scm 462 */
long BgL_arg4080z00_6246;
BgL_arg4080z00_6246 = 
rgc_buffer_fixnum(BgL_iportz00_6003); 
{ /* Unsafe/http.scm 462 */
long BgL_res6155z00_11457;
BgL_res6155z00_11457 = 
(long)(BgL_arg4080z00_6246); 
BgL_contentzd2lengthzd2_3841 = 
make_belong(BgL_res6155z00_11457); } } break;
default: 
BgL_contentzd2lengthzd2_3841 = 
BGl_errorz00zz__errorz00(BGl_string7254z00zz__httpz00, BGl_string7255z00zz__httpz00, 
BINT(BgL_matchz00_6242)); } } } 
BgL_iportz00_4450 = BgL_iportz00_3836; 
{ 
obj_t BgL_iportz00_4486;long BgL_lastzd2matchzd2_4487;long BgL_forwardz00_4488;long BgL_bufposz00_4489;obj_t BgL_iportz00_4502;long BgL_lastzd2matchzd2_4503;long BgL_forwardz00_4504;long BgL_bufposz00_4505;obj_t BgL_iportz00_4523;long BgL_lastzd2matchzd2_4524;long BgL_forwardz00_4525;long BgL_bufposz00_4526;obj_t BgL_iportz00_4536;long BgL_lastzd2matchzd2_4537;long BgL_forwardz00_4538;long BgL_bufposz00_4539;
{ /* Unsafe/http.scm 499 */
long BgL_res6613z00_12680;
BgL_res6613z00_12680 = 
RGC_START_MATCH(BgL_iportz00_4450); BgL_res6613z00_12680; } 
{ /* Unsafe/http.scm 499 */
long BgL_matchz00_4688;
{ /* Unsafe/http.scm 499 */
long BgL_arg3332z00_4692;long BgL_arg3333z00_4693;
{ /* Unsafe/http.scm 499 */
long BgL_res6614z00_12682;
BgL_res6614z00_12682 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4450); 
BgL_arg3332z00_4692 = BgL_res6614z00_12682; } 
{ /* Unsafe/http.scm 499 */
long BgL_res6615z00_12684;
BgL_res6615z00_12684 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4450); 
BgL_arg3333z00_4693 = BgL_res6615z00_12684; } 
BgL_iportz00_4536 = BgL_iportz00_4450; 
BgL_lastzd2matchzd2_4537 = ((long)1); 
BgL_forwardz00_4538 = BgL_arg3332z00_4692; 
BgL_bufposz00_4539 = BgL_arg3333z00_4693; 
BgL_zc3z04anonymousza33226ze3z87_4540:
if(
(BgL_forwardz00_4538==BgL_bufposz00_4539))
{ /* Unsafe/http.scm 499 */
if(
rgc_fill_buffer(BgL_iportz00_4536))
{ /* Unsafe/http.scm 499 */
long BgL_arg3229z00_4543;long BgL_arg3230z00_4544;
{ /* Unsafe/http.scm 499 */
long BgL_res6587z00_12601;
BgL_res6587z00_12601 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4536); 
BgL_arg3229z00_4543 = BgL_res6587z00_12601; } 
{ /* Unsafe/http.scm 499 */
long BgL_res6588z00_12603;
BgL_res6588z00_12603 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4536); 
BgL_arg3230z00_4544 = BgL_res6588z00_12603; } 
{ 
long BgL_bufposz00_18554;long BgL_forwardz00_18553;
BgL_forwardz00_18553 = BgL_arg3229z00_4543; 
BgL_bufposz00_18554 = BgL_arg3230z00_4544; 
BgL_bufposz00_4539 = BgL_bufposz00_18554; 
BgL_forwardz00_4538 = BgL_forwardz00_18553; 
goto BgL_zc3z04anonymousza33226ze3z87_4540;} }  else 
{ /* Unsafe/http.scm 499 */
BgL_matchz00_4688 = BgL_lastzd2matchzd2_4537; } }  else 
{ /* Unsafe/http.scm 499 */
int BgL_curz00_4545;
{ /* Unsafe/http.scm 499 */
int BgL_res6589z00_12606;
BgL_res6589z00_12606 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4536, BgL_forwardz00_4538); 
BgL_curz00_4545 = BgL_res6589z00_12606; } 
{ /* Unsafe/http.scm 499 */

if(
(
(long)(BgL_curz00_4545)==((long)13)))
{ /* Unsafe/http.scm 499 */
BgL_iportz00_4523 = BgL_iportz00_4536; 
BgL_lastzd2matchzd2_4524 = BgL_lastzd2matchzd2_4537; 
BgL_forwardz00_4525 = 
(((long)1)+BgL_forwardz00_4538); 
BgL_bufposz00_4526 = BgL_bufposz00_4539; 
BgL_zc3z04anonymousza33219ze3z87_4527:
{ /* Unsafe/http.scm 499 */
long BgL_newzd2matchzd2_4528;
{ /* Unsafe/http.scm 499 */
long BgL_res6576z00_12574;
BgL_res6576z00_12574 = 
RGC_STOP_MATCH(BgL_iportz00_4523, BgL_forwardz00_4525); BgL_res6576z00_12574; } 
BgL_newzd2matchzd2_4528 = ((long)1); 
if(
(BgL_forwardz00_4525==BgL_bufposz00_4526))
{ /* Unsafe/http.scm 499 */
if(
rgc_fill_buffer(BgL_iportz00_4523))
{ /* Unsafe/http.scm 499 */
long BgL_arg3222z00_4531;long BgL_arg3223z00_4532;
{ /* Unsafe/http.scm 499 */
long BgL_res6579z00_12581;
BgL_res6579z00_12581 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4523); 
BgL_arg3222z00_4531 = BgL_res6579z00_12581; } 
{ /* Unsafe/http.scm 499 */
long BgL_res6580z00_12583;
BgL_res6580z00_12583 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4523); 
BgL_arg3223z00_4532 = BgL_res6580z00_12583; } 
{ 
long BgL_bufposz00_18567;long BgL_forwardz00_18566;
BgL_forwardz00_18566 = BgL_arg3222z00_4531; 
BgL_bufposz00_18567 = BgL_arg3223z00_4532; 
BgL_bufposz00_4526 = BgL_bufposz00_18567; 
BgL_forwardz00_4525 = BgL_forwardz00_18566; 
goto BgL_zc3z04anonymousza33219ze3z87_4527;} }  else 
{ /* Unsafe/http.scm 499 */
BgL_matchz00_4688 = BgL_newzd2matchzd2_4528; } }  else 
{ /* Unsafe/http.scm 499 */
int BgL_curz00_4533;
{ /* Unsafe/http.scm 499 */
int BgL_res6581z00_12586;
BgL_res6581z00_12586 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4523, BgL_forwardz00_4525); 
BgL_curz00_4533 = BgL_res6581z00_12586; } 
{ /* Unsafe/http.scm 499 */

if(
(
(long)(BgL_curz00_4533)==((long)10)))
{ /* Unsafe/http.scm 499 */
long BgL_arg3225z00_4535;
BgL_arg3225z00_4535 = 
(((long)1)+BgL_forwardz00_4525); 
{ /* Unsafe/http.scm 499 */
long BgL_newzd2matchzd2_12591;
{ /* Unsafe/http.scm 499 */
long BgL_res6584z00_12594;
BgL_res6584z00_12594 = 
RGC_STOP_MATCH(BgL_iportz00_4523, BgL_arg3225z00_4535); BgL_res6584z00_12594; } 
BgL_newzd2matchzd2_12591 = ((long)0); 
BgL_matchz00_4688 = BgL_newzd2matchzd2_12591; } }  else 
{ /* Unsafe/http.scm 499 */
BgL_matchz00_4688 = BgL_newzd2matchzd2_4528; } } } } }  else 
{ /* Unsafe/http.scm 499 */
if(
(
(long)(BgL_curz00_4545)==((long)10)))
{ /* Unsafe/http.scm 499 */
long BgL_arg3234z00_4549;
BgL_arg3234z00_4549 = 
(((long)1)+BgL_forwardz00_4538); 
{ /* Unsafe/http.scm 499 */
long BgL_newzd2matchzd2_12615;
{ /* Unsafe/http.scm 499 */
long BgL_res6594z00_12618;
BgL_res6594z00_12618 = 
RGC_STOP_MATCH(BgL_iportz00_4536, BgL_arg3234z00_4549); BgL_res6594z00_12618; } 
BgL_newzd2matchzd2_12615 = ((long)0); 
BgL_matchz00_4688 = BgL_newzd2matchzd2_12615; } }  else 
{ /* Unsafe/http.scm 499 */
BgL_iportz00_4486 = BgL_iportz00_4536; 
BgL_lastzd2matchzd2_4487 = BgL_lastzd2matchzd2_4537; 
BgL_forwardz00_4488 = 
(((long)1)+BgL_forwardz00_4538); 
BgL_bufposz00_4489 = BgL_bufposz00_4539; 
BgL_zc3z04anonymousza33198ze3z87_4490:
{ /* Unsafe/http.scm 499 */
long BgL_newzd2matchzd2_4491;
{ /* Unsafe/http.scm 499 */
long BgL_res6536z00_12455;
BgL_res6536z00_12455 = 
RGC_STOP_MATCH(BgL_iportz00_4486, BgL_forwardz00_4488); BgL_res6536z00_12455; } 
BgL_newzd2matchzd2_4491 = ((long)1); 
if(
(BgL_forwardz00_4488==BgL_bufposz00_4489))
{ /* Unsafe/http.scm 499 */
if(
rgc_fill_buffer(BgL_iportz00_4486))
{ /* Unsafe/http.scm 499 */
long BgL_arg3201z00_4494;long BgL_arg3202z00_4495;
{ /* Unsafe/http.scm 499 */
long BgL_res6539z00_12462;
BgL_res6539z00_12462 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4486); 
BgL_arg3201z00_4494 = BgL_res6539z00_12462; } 
{ /* Unsafe/http.scm 499 */
long BgL_res6540z00_12464;
BgL_res6540z00_12464 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4486); 
BgL_arg3202z00_4495 = BgL_res6540z00_12464; } 
{ 
long BgL_bufposz00_18588;long BgL_forwardz00_18587;
BgL_forwardz00_18587 = BgL_arg3201z00_4494; 
BgL_bufposz00_18588 = BgL_arg3202z00_4495; 
BgL_bufposz00_4489 = BgL_bufposz00_18588; 
BgL_forwardz00_4488 = BgL_forwardz00_18587; 
goto BgL_zc3z04anonymousza33198ze3z87_4490;} }  else 
{ /* Unsafe/http.scm 499 */
BgL_matchz00_4688 = BgL_newzd2matchzd2_4491; } }  else 
{ /* Unsafe/http.scm 499 */
int BgL_curz00_4496;
{ /* Unsafe/http.scm 499 */
int BgL_res6541z00_12467;
BgL_res6541z00_12467 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4486, BgL_forwardz00_4488); 
BgL_curz00_4496 = BgL_res6541z00_12467; } 
{ /* Unsafe/http.scm 499 */

if(
(
(long)(BgL_curz00_4496)==((long)13)))
{ /* Unsafe/http.scm 499 */
long BgL_arg3204z00_4498;
BgL_arg3204z00_4498 = 
(((long)1)+BgL_forwardz00_4488); 
{ 
long BgL_forwardz00_12473;long BgL_bufposz00_12474;
BgL_forwardz00_12473 = BgL_arg3204z00_4498; 
BgL_bufposz00_12474 = BgL_bufposz00_4489; 
BgL_statezd27zd21247z00_12472:
if(
(BgL_forwardz00_12473==BgL_bufposz00_12474))
{ /* Unsafe/http.scm 499 */
if(
rgc_fill_buffer(BgL_iportz00_4486))
{ /* Unsafe/http.scm 499 */
long BgL_arg3240z00_12477;long BgL_arg3241z00_12478;
{ /* Unsafe/http.scm 499 */
long BgL_res6546z00_12488;
BgL_res6546z00_12488 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4486); 
BgL_arg3240z00_12477 = BgL_res6546z00_12488; } 
{ /* Unsafe/http.scm 499 */
long BgL_res6547z00_12490;
BgL_res6547z00_12490 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4486); 
BgL_arg3241z00_12478 = BgL_res6547z00_12490; } 
{ 
long BgL_bufposz00_18601;long BgL_forwardz00_18600;
BgL_forwardz00_18600 = BgL_arg3240z00_12477; 
BgL_bufposz00_18601 = BgL_arg3241z00_12478; 
BgL_bufposz00_12474 = BgL_bufposz00_18601; 
BgL_forwardz00_12473 = BgL_forwardz00_18600; 
goto BgL_statezd27zd21247z00_12472;} }  else 
{ /* Unsafe/http.scm 499 */
BgL_matchz00_4688 = BgL_newzd2matchzd2_4491; } }  else 
{ /* Unsafe/http.scm 499 */
int BgL_curz00_12479;
{ /* Unsafe/http.scm 499 */
int BgL_res6548z00_12493;
BgL_res6548z00_12493 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4486, BgL_forwardz00_12473); 
BgL_curz00_12479 = BgL_res6548z00_12493; } 
{ /* Unsafe/http.scm 499 */

if(
(
(long)(BgL_curz00_12479)==((long)10)))
{ /* Unsafe/http.scm 499 */
long BgL_arg3243z00_12481;
BgL_arg3243z00_12481 = 
(((long)1)+BgL_forwardz00_12473); 
{ /* Unsafe/http.scm 499 */
long BgL_newzd2matchzd2_12498;
{ /* Unsafe/http.scm 499 */
long BgL_res6551z00_12501;
BgL_res6551z00_12501 = 
RGC_STOP_MATCH(BgL_iportz00_4486, BgL_arg3243z00_12481); BgL_res6551z00_12501; } 
BgL_newzd2matchzd2_12498 = ((long)0); 
BgL_matchz00_4688 = BgL_newzd2matchzd2_12498; } }  else 
{ /* Unsafe/http.scm 499 */
BgL_matchz00_4688 = BgL_newzd2matchzd2_4491; } } } } }  else 
{ /* Unsafe/http.scm 499 */
if(
(
(long)(BgL_curz00_4496)==((long)10)))
{ /* Unsafe/http.scm 499 */
long BgL_arg3206z00_4500;
BgL_arg3206z00_4500 = 
(((long)1)+BgL_forwardz00_4488); 
{ /* Unsafe/http.scm 499 */
long BgL_newzd2matchzd2_12506;
{ /* Unsafe/http.scm 499 */
long BgL_res6554z00_12509;
BgL_res6554z00_12509 = 
RGC_STOP_MATCH(BgL_iportz00_4486, BgL_arg3206z00_4500); BgL_res6554z00_12509; } 
BgL_newzd2matchzd2_12506 = ((long)0); 
BgL_matchz00_4688 = BgL_newzd2matchzd2_12506; } }  else 
{ /* Unsafe/http.scm 499 */
BgL_iportz00_4502 = BgL_iportz00_4486; 
BgL_lastzd2matchzd2_4503 = BgL_newzd2matchzd2_4491; 
BgL_forwardz00_4504 = 
(((long)1)+BgL_forwardz00_4488); 
BgL_bufposz00_4505 = BgL_bufposz00_4489; 
BgL_zc3z04anonymousza33208ze3z87_4506:
if(
(BgL_forwardz00_4504==BgL_bufposz00_4505))
{ /* Unsafe/http.scm 499 */
if(
rgc_fill_buffer(BgL_iportz00_4502))
{ /* Unsafe/http.scm 499 */
long BgL_arg3211z00_4509;long BgL_arg3212z00_4510;
{ /* Unsafe/http.scm 499 */
long BgL_res6558z00_12518;
BgL_res6558z00_12518 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4502); 
BgL_arg3211z00_4509 = BgL_res6558z00_12518; } 
{ /* Unsafe/http.scm 499 */
long BgL_res6559z00_12520;
BgL_res6559z00_12520 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4502); 
BgL_arg3212z00_4510 = BgL_res6559z00_12520; } 
{ 
long BgL_bufposz00_18620;long BgL_forwardz00_18619;
BgL_forwardz00_18619 = BgL_arg3211z00_4509; 
BgL_bufposz00_18620 = BgL_arg3212z00_4510; 
BgL_bufposz00_4505 = BgL_bufposz00_18620; 
BgL_forwardz00_4504 = BgL_forwardz00_18619; 
goto BgL_zc3z04anonymousza33208ze3z87_4506;} }  else 
{ /* Unsafe/http.scm 499 */
BgL_matchz00_4688 = BgL_lastzd2matchzd2_4503; } }  else 
{ /* Unsafe/http.scm 499 */
int BgL_curz00_4511;
{ /* Unsafe/http.scm 499 */
int BgL_res6560z00_12523;
BgL_res6560z00_12523 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4502, BgL_forwardz00_4504); 
BgL_curz00_4511 = BgL_res6560z00_12523; } 
{ /* Unsafe/http.scm 499 */

if(
(
(long)(BgL_curz00_4511)==((long)13)))
{ /* Unsafe/http.scm 499 */
long BgL_arg3214z00_4513;
BgL_arg3214z00_4513 = 
(((long)1)+BgL_forwardz00_4504); 
{ 
long BgL_forwardz00_12529;long BgL_bufposz00_12530;
BgL_forwardz00_12529 = BgL_arg3214z00_4513; 
BgL_bufposz00_12530 = BgL_bufposz00_4505; 
BgL_statezd27zd21247z00_12528:
if(
(BgL_forwardz00_12529==BgL_bufposz00_12530))
{ /* Unsafe/http.scm 499 */
if(
rgc_fill_buffer(BgL_iportz00_4502))
{ /* Unsafe/http.scm 499 */
long BgL_arg3240z00_12533;long BgL_arg3241z00_12534;
{ /* Unsafe/http.scm 499 */
long BgL_res6565z00_12544;
BgL_res6565z00_12544 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4502); 
BgL_arg3240z00_12533 = BgL_res6565z00_12544; } 
{ /* Unsafe/http.scm 499 */
long BgL_res6566z00_12546;
BgL_res6566z00_12546 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4502); 
BgL_arg3241z00_12534 = BgL_res6566z00_12546; } 
{ 
long BgL_bufposz00_18633;long BgL_forwardz00_18632;
BgL_forwardz00_18632 = BgL_arg3240z00_12533; 
BgL_bufposz00_18633 = BgL_arg3241z00_12534; 
BgL_bufposz00_12530 = BgL_bufposz00_18633; 
BgL_forwardz00_12529 = BgL_forwardz00_18632; 
goto BgL_statezd27zd21247z00_12528;} }  else 
{ /* Unsafe/http.scm 499 */
BgL_matchz00_4688 = BgL_lastzd2matchzd2_4503; } }  else 
{ /* Unsafe/http.scm 499 */
int BgL_curz00_12535;
{ /* Unsafe/http.scm 499 */
int BgL_res6567z00_12549;
BgL_res6567z00_12549 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4502, BgL_forwardz00_12529); 
BgL_curz00_12535 = BgL_res6567z00_12549; } 
{ /* Unsafe/http.scm 499 */

if(
(
(long)(BgL_curz00_12535)==((long)10)))
{ /* Unsafe/http.scm 499 */
long BgL_arg3243z00_12537;
BgL_arg3243z00_12537 = 
(((long)1)+BgL_forwardz00_12529); 
{ /* Unsafe/http.scm 499 */
long BgL_newzd2matchzd2_12554;
{ /* Unsafe/http.scm 499 */
long BgL_res6570z00_12557;
BgL_res6570z00_12557 = 
RGC_STOP_MATCH(BgL_iportz00_4502, BgL_arg3243z00_12537); BgL_res6570z00_12557; } 
BgL_newzd2matchzd2_12554 = ((long)0); 
BgL_matchz00_4688 = BgL_newzd2matchzd2_12554; } }  else 
{ /* Unsafe/http.scm 499 */
BgL_matchz00_4688 = BgL_lastzd2matchzd2_4503; } } } } }  else 
{ /* Unsafe/http.scm 499 */
if(
(
(long)(BgL_curz00_4511)==((long)10)))
{ /* Unsafe/http.scm 499 */
long BgL_arg3216z00_4515;
BgL_arg3216z00_4515 = 
(((long)1)+BgL_forwardz00_4504); 
{ /* Unsafe/http.scm 499 */
long BgL_newzd2matchzd2_12562;
{ /* Unsafe/http.scm 499 */
long BgL_res6573z00_12565;
BgL_res6573z00_12565 = 
RGC_STOP_MATCH(BgL_iportz00_4502, BgL_arg3216z00_4515); BgL_res6573z00_12565; } 
BgL_newzd2matchzd2_12562 = ((long)0); 
BgL_matchz00_4688 = BgL_newzd2matchzd2_12562; } }  else 
{ 
long BgL_forwardz00_18645;
BgL_forwardz00_18645 = 
(((long)1)+BgL_forwardz00_4504); 
BgL_forwardz00_4504 = BgL_forwardz00_18645; 
goto BgL_zc3z04anonymousza33208ze3z87_4506;} } } } } } } } } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_4450); 
switch( BgL_matchz00_4688) { case ((long)1) : 
BFALSE; break;case ((long)0) : 
BUNSPEC; break;
default: 
BGl_errorz00zz__errorz00(BGl_string7254z00zz__httpz00, BGl_string7255z00zz__httpz00, 
BINT(BgL_matchz00_4688)); } } } 
{ /* Unsafe/http.scm 531 */
obj_t BgL_arg3169z00_4370;
BgL_arg3169z00_4370 = 
MAKE_YOUNG_PAIR(BgL_kz00_4354, BgL_contentzd2lengthzd2_3841); 
BgL_headerz00_3838 = 
MAKE_YOUNG_PAIR(BgL_arg3169z00_4370, BgL_headerz00_3838); } 
goto BgL_zc3z04anonymousza33139ze3z87_4312;}  else 
{ /* Unsafe/http.scm 512 */
if(
(BgL_kz00_4354==BGl_keyword7370z00zz__httpz00))
{ /* Unsafe/http.scm 512 */
BgL_iportz00_5702 = BgL_iportz00_3836; 
{ 
obj_t BgL_iportz00_5737;long BgL_lastzd2matchzd2_5738;long BgL_forwardz00_5739;long BgL_bufposz00_5740;obj_t BgL_iportz00_5765;long BgL_lastzd2matchzd2_5766;long BgL_forwardz00_5767;long BgL_bufposz00_5768;obj_t BgL_iportz00_5780;long BgL_lastzd2matchzd2_5781;long BgL_forwardz00_5782;long BgL_bufposz00_5783;obj_t BgL_iportz00_5795;long BgL_lastzd2matchzd2_5796;long BgL_forwardz00_5797;long BgL_bufposz00_5798;obj_t BgL_iportz00_5817;long BgL_lastzd2matchzd2_5818;long BgL_forwardz00_5819;long BgL_bufposz00_5820;
BgL_zc3z04anonymousza33942ze3z87_5961:
{ /* Unsafe/http.scm 466 */
long BgL_res6220z00_11606;
BgL_res6220z00_11606 = 
RGC_START_MATCH(BgL_iportz00_5702); BgL_res6220z00_11606; } 
{ /* Unsafe/http.scm 466 */
long BgL_matchz00_5962;
{ /* Unsafe/http.scm 466 */
long BgL_arg3944z00_5966;long BgL_arg3945z00_5967;
{ /* Unsafe/http.scm 466 */
long BgL_res6221z00_11608;
BgL_res6221z00_11608 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5702); 
BgL_arg3944z00_5966 = BgL_res6221z00_11608; } 
{ /* Unsafe/http.scm 466 */
long BgL_res6222z00_11610;
BgL_res6222z00_11610 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5702); 
BgL_arg3945z00_5967 = BgL_res6222z00_11610; } 
BgL_iportz00_5817 = BgL_iportz00_5702; 
BgL_lastzd2matchzd2_5818 = ((long)2); 
BgL_forwardz00_5819 = BgL_arg3944z00_5966; 
BgL_bufposz00_5820 = BgL_arg3945z00_5967; 
BgL_zc3z04anonymousza33842ze3z87_5821:
if(
(BgL_forwardz00_5819==BgL_bufposz00_5820))
{ /* Unsafe/http.scm 466 */
if(
rgc_fill_buffer(BgL_iportz00_5817))
{ /* Unsafe/http.scm 466 */
long BgL_arg3845z00_5824;long BgL_arg3846z00_5825;
{ /* Unsafe/http.scm 466 */
long BgL_res6201z00_11564;
BgL_res6201z00_11564 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5817); 
BgL_arg3845z00_5824 = BgL_res6201z00_11564; } 
{ /* Unsafe/http.scm 466 */
long BgL_res6202z00_11566;
BgL_res6202z00_11566 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5817); 
BgL_arg3846z00_5825 = BgL_res6202z00_11566; } 
{ 
long BgL_bufposz00_18667;long BgL_forwardz00_18666;
BgL_forwardz00_18666 = BgL_arg3845z00_5824; 
BgL_bufposz00_18667 = BgL_arg3846z00_5825; 
BgL_bufposz00_5820 = BgL_bufposz00_18667; 
BgL_forwardz00_5819 = BgL_forwardz00_18666; 
goto BgL_zc3z04anonymousza33842ze3z87_5821;} }  else 
{ /* Unsafe/http.scm 466 */
BgL_matchz00_5962 = BgL_lastzd2matchzd2_5818; } }  else 
{ /* Unsafe/http.scm 466 */
int BgL_curz00_5826;
{ /* Unsafe/http.scm 466 */
int BgL_res6203z00_11569;
BgL_res6203z00_11569 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5817, BgL_forwardz00_5819); 
BgL_curz00_5826 = BgL_res6203z00_11569; } 
{ /* Unsafe/http.scm 466 */

{ /* Unsafe/http.scm 466 */
bool_t BgL_test8190z00_18669;
if(
(
(long)(BgL_curz00_5826)==((long)45)))
{ /* Unsafe/http.scm 466 */
BgL_test8190z00_18669 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 466 */
bool_t BgL_test8192z00_18673;
if(
(
(long)(BgL_curz00_5826)>=((long)65)))
{ /* Unsafe/http.scm 466 */
BgL_test8192z00_18673 = 
(
(long)(BgL_curz00_5826)<((long)91))
; }  else 
{ /* Unsafe/http.scm 466 */
BgL_test8192z00_18673 = ((bool_t)0)
; } 
if(BgL_test8192z00_18673)
{ /* Unsafe/http.scm 466 */
BgL_test8190z00_18669 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 466 */
if(
(
(long)(BgL_curz00_5826)>=((long)97)))
{ /* Unsafe/http.scm 466 */
BgL_test8190z00_18669 = 
(
(long)(BgL_curz00_5826)<((long)123))
; }  else 
{ /* Unsafe/http.scm 466 */
BgL_test8190z00_18669 = ((bool_t)0)
; } } } 
if(BgL_test8190z00_18669)
{ /* Unsafe/http.scm 466 */
BgL_iportz00_5795 = BgL_iportz00_5817; 
BgL_lastzd2matchzd2_5796 = BgL_lastzd2matchzd2_5818; 
BgL_forwardz00_5797 = 
(((long)1)+BgL_forwardz00_5819); 
BgL_bufposz00_5798 = BgL_bufposz00_5820; 
BgL_zc3z04anonymousza33832ze3z87_5799:
{ /* Unsafe/http.scm 466 */
long BgL_newzd2matchzd2_5800;
{ /* Unsafe/http.scm 466 */
long BgL_res6187z00_11533;
BgL_res6187z00_11533 = 
RGC_STOP_MATCH(BgL_iportz00_5795, BgL_forwardz00_5797); BgL_res6187z00_11533; } 
BgL_newzd2matchzd2_5800 = ((long)0); 
if(
(BgL_forwardz00_5797==BgL_bufposz00_5798))
{ /* Unsafe/http.scm 466 */
if(
rgc_fill_buffer(BgL_iportz00_5795))
{ /* Unsafe/http.scm 466 */
long BgL_arg3835z00_5803;long BgL_arg3836z00_5804;
{ /* Unsafe/http.scm 466 */
long BgL_res6190z00_11540;
BgL_res6190z00_11540 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5795); 
BgL_arg3835z00_5803 = BgL_res6190z00_11540; } 
{ /* Unsafe/http.scm 466 */
long BgL_res6191z00_11542;
BgL_res6191z00_11542 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5795); 
BgL_arg3836z00_5804 = BgL_res6191z00_11542; } 
{ 
long BgL_bufposz00_18692;long BgL_forwardz00_18691;
BgL_forwardz00_18691 = BgL_arg3835z00_5803; 
BgL_bufposz00_18692 = BgL_arg3836z00_5804; 
BgL_bufposz00_5798 = BgL_bufposz00_18692; 
BgL_forwardz00_5797 = BgL_forwardz00_18691; 
goto BgL_zc3z04anonymousza33832ze3z87_5799;} }  else 
{ /* Unsafe/http.scm 466 */
BgL_matchz00_5962 = BgL_newzd2matchzd2_5800; } }  else 
{ /* Unsafe/http.scm 466 */
int BgL_curz00_5805;
{ /* Unsafe/http.scm 466 */
int BgL_res6192z00_11545;
BgL_res6192z00_11545 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5795, BgL_forwardz00_5797); 
BgL_curz00_5805 = BgL_res6192z00_11545; } 
{ /* Unsafe/http.scm 466 */

{ /* Unsafe/http.scm 466 */
bool_t BgL_test8197z00_18694;
if(
(
(long)(BgL_curz00_5805)==((long)45)))
{ /* Unsafe/http.scm 466 */
BgL_test8197z00_18694 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 466 */
bool_t BgL_test8199z00_18698;
if(
(
(long)(BgL_curz00_5805)>=((long)65)))
{ /* Unsafe/http.scm 466 */
BgL_test8199z00_18698 = 
(
(long)(BgL_curz00_5805)<((long)91))
; }  else 
{ /* Unsafe/http.scm 466 */
BgL_test8199z00_18698 = ((bool_t)0)
; } 
if(BgL_test8199z00_18698)
{ /* Unsafe/http.scm 466 */
BgL_test8197z00_18694 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 466 */
if(
(
(long)(BgL_curz00_5805)>=((long)97)))
{ /* Unsafe/http.scm 466 */
BgL_test8197z00_18694 = 
(
(long)(BgL_curz00_5805)<((long)123))
; }  else 
{ /* Unsafe/http.scm 466 */
BgL_test8197z00_18694 = ((bool_t)0)
; } } } 
if(BgL_test8197z00_18694)
{ /* Unsafe/http.scm 466 */
BgL_iportz00_5737 = BgL_iportz00_5795; 
BgL_lastzd2matchzd2_5738 = BgL_newzd2matchzd2_5800; 
BgL_forwardz00_5739 = 
(((long)1)+BgL_forwardz00_5797); 
BgL_bufposz00_5740 = BgL_bufposz00_5798; 
BgL_zc3z04anonymousza33805ze3z87_5741:
{ /* Unsafe/http.scm 466 */
long BgL_newzd2matchzd2_5742;
{ /* Unsafe/http.scm 466 */
long BgL_res6156z00_11460;
BgL_res6156z00_11460 = 
RGC_STOP_MATCH(BgL_iportz00_5737, BgL_forwardz00_5739); BgL_res6156z00_11460; } 
BgL_newzd2matchzd2_5742 = ((long)0); 
if(
(BgL_forwardz00_5739==BgL_bufposz00_5740))
{ /* Unsafe/http.scm 466 */
if(
rgc_fill_buffer(BgL_iportz00_5737))
{ /* Unsafe/http.scm 466 */
long BgL_arg3808z00_5745;long BgL_arg3809z00_5746;
{ /* Unsafe/http.scm 466 */
long BgL_res6159z00_11467;
BgL_res6159z00_11467 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5737); 
BgL_arg3808z00_5745 = BgL_res6159z00_11467; } 
{ /* Unsafe/http.scm 466 */
long BgL_res6160z00_11469;
BgL_res6160z00_11469 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5737); 
BgL_arg3809z00_5746 = BgL_res6160z00_11469; } 
{ 
long BgL_bufposz00_18717;long BgL_forwardz00_18716;
BgL_forwardz00_18716 = BgL_arg3808z00_5745; 
BgL_bufposz00_18717 = BgL_arg3809z00_5746; 
BgL_bufposz00_5740 = BgL_bufposz00_18717; 
BgL_forwardz00_5739 = BgL_forwardz00_18716; 
goto BgL_zc3z04anonymousza33805ze3z87_5741;} }  else 
{ /* Unsafe/http.scm 466 */
BgL_matchz00_5962 = BgL_newzd2matchzd2_5742; } }  else 
{ /* Unsafe/http.scm 466 */
int BgL_curz00_5747;
{ /* Unsafe/http.scm 466 */
int BgL_res6161z00_11472;
BgL_res6161z00_11472 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5737, BgL_forwardz00_5739); 
BgL_curz00_5747 = BgL_res6161z00_11472; } 
{ /* Unsafe/http.scm 466 */

{ /* Unsafe/http.scm 466 */
bool_t BgL_test8204z00_18719;
if(
(
(long)(BgL_curz00_5747)==((long)45)))
{ /* Unsafe/http.scm 466 */
BgL_test8204z00_18719 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 466 */
bool_t BgL_test8206z00_18723;
if(
(
(long)(BgL_curz00_5747)>=((long)65)))
{ /* Unsafe/http.scm 466 */
BgL_test8206z00_18723 = 
(
(long)(BgL_curz00_5747)<((long)91))
; }  else 
{ /* Unsafe/http.scm 466 */
BgL_test8206z00_18723 = ((bool_t)0)
; } 
if(BgL_test8206z00_18723)
{ /* Unsafe/http.scm 466 */
BgL_test8204z00_18719 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 466 */
if(
(
(long)(BgL_curz00_5747)>=((long)97)))
{ /* Unsafe/http.scm 466 */
BgL_test8204z00_18719 = 
(
(long)(BgL_curz00_5747)<((long)123))
; }  else 
{ /* Unsafe/http.scm 466 */
BgL_test8204z00_18719 = ((bool_t)0)
; } } } 
if(BgL_test8204z00_18719)
{ 
long BgL_forwardz00_18735;long BgL_lastzd2matchzd2_18734;
BgL_lastzd2matchzd2_18734 = BgL_newzd2matchzd2_5742; 
BgL_forwardz00_18735 = 
(((long)1)+BgL_forwardz00_5739); 
BgL_forwardz00_5739 = BgL_forwardz00_18735; 
BgL_lastzd2matchzd2_5738 = BgL_lastzd2matchzd2_18734; 
goto BgL_zc3z04anonymousza33805ze3z87_5741;}  else 
{ /* Unsafe/http.scm 466 */
BgL_matchz00_5962 = BgL_newzd2matchzd2_5742; } } } } } }  else 
{ /* Unsafe/http.scm 466 */
BgL_matchz00_5962 = BgL_newzd2matchzd2_5800; } } } } } }  else 
{ /* Unsafe/http.scm 466 */
bool_t BgL_test8209z00_18739;
if(
(
(long)(BgL_curz00_5826)==((long)9)))
{ /* Unsafe/http.scm 466 */
BgL_test8209z00_18739 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 466 */
BgL_test8209z00_18739 = 
(
(long)(BgL_curz00_5826)==((long)32))
; } 
if(BgL_test8209z00_18739)
{ /* Unsafe/http.scm 466 */
BgL_iportz00_5765 = BgL_iportz00_5817; 
BgL_lastzd2matchzd2_5766 = BgL_lastzd2matchzd2_5818; 
BgL_forwardz00_5767 = 
(((long)1)+BgL_forwardz00_5819); 
BgL_bufposz00_5768 = BgL_bufposz00_5820; 
BgL_zc3z04anonymousza33816ze3z87_5769:
{ /* Unsafe/http.scm 466 */
long BgL_newzd2matchzd2_5770;
{ /* Unsafe/http.scm 466 */
long BgL_res6169z00_11491;
BgL_res6169z00_11491 = 
RGC_STOP_MATCH(BgL_iportz00_5765, BgL_forwardz00_5767); BgL_res6169z00_11491; } 
BgL_newzd2matchzd2_5770 = ((long)1); 
if(
(BgL_forwardz00_5767==BgL_bufposz00_5768))
{ /* Unsafe/http.scm 466 */
if(
rgc_fill_buffer(BgL_iportz00_5765))
{ /* Unsafe/http.scm 466 */
long BgL_arg3819z00_5773;long BgL_arg3820z00_5774;
{ /* Unsafe/http.scm 466 */
long BgL_res6172z00_11498;
BgL_res6172z00_11498 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5765); 
BgL_arg3819z00_5773 = BgL_res6172z00_11498; } 
{ /* Unsafe/http.scm 466 */
long BgL_res6173z00_11500;
BgL_res6173z00_11500 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5765); 
BgL_arg3820z00_5774 = BgL_res6173z00_11500; } 
{ 
long BgL_bufposz00_18753;long BgL_forwardz00_18752;
BgL_forwardz00_18752 = BgL_arg3819z00_5773; 
BgL_bufposz00_18753 = BgL_arg3820z00_5774; 
BgL_bufposz00_5768 = BgL_bufposz00_18753; 
BgL_forwardz00_5767 = BgL_forwardz00_18752; 
goto BgL_zc3z04anonymousza33816ze3z87_5769;} }  else 
{ /* Unsafe/http.scm 466 */
BgL_matchz00_5962 = BgL_newzd2matchzd2_5770; } }  else 
{ /* Unsafe/http.scm 466 */
int BgL_curz00_5775;
{ /* Unsafe/http.scm 466 */
int BgL_res6174z00_11503;
BgL_res6174z00_11503 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5765, BgL_forwardz00_5767); 
BgL_curz00_5775 = BgL_res6174z00_11503; } 
{ /* Unsafe/http.scm 466 */

{ /* Unsafe/http.scm 466 */
bool_t BgL_test8213z00_18755;
if(
(
(long)(BgL_curz00_5775)==((long)9)))
{ /* Unsafe/http.scm 466 */
BgL_test8213z00_18755 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 466 */
BgL_test8213z00_18755 = 
(
(long)(BgL_curz00_5775)==((long)32))
; } 
if(BgL_test8213z00_18755)
{ /* Unsafe/http.scm 466 */
BgL_iportz00_5780 = BgL_iportz00_5765; 
BgL_lastzd2matchzd2_5781 = BgL_newzd2matchzd2_5770; 
BgL_forwardz00_5782 = 
(((long)1)+BgL_forwardz00_5767); 
BgL_bufposz00_5783 = BgL_bufposz00_5768; 
BgL_zc3z04anonymousza33824ze3z87_5784:
{ /* Unsafe/http.scm 466 */
long BgL_newzd2matchzd2_5785;
{ /* Unsafe/http.scm 466 */
long BgL_res6178z00_11512;
BgL_res6178z00_11512 = 
RGC_STOP_MATCH(BgL_iportz00_5780, BgL_forwardz00_5782); BgL_res6178z00_11512; } 
BgL_newzd2matchzd2_5785 = ((long)1); 
if(
(BgL_forwardz00_5782==BgL_bufposz00_5783))
{ /* Unsafe/http.scm 466 */
if(
rgc_fill_buffer(BgL_iportz00_5780))
{ /* Unsafe/http.scm 466 */
long BgL_arg3827z00_5788;long BgL_arg3828z00_5789;
{ /* Unsafe/http.scm 466 */
long BgL_res6181z00_11519;
BgL_res6181z00_11519 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5780); 
BgL_arg3827z00_5788 = BgL_res6181z00_11519; } 
{ /* Unsafe/http.scm 466 */
long BgL_res6182z00_11521;
BgL_res6182z00_11521 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5780); 
BgL_arg3828z00_5789 = BgL_res6182z00_11521; } 
{ 
long BgL_bufposz00_18769;long BgL_forwardz00_18768;
BgL_forwardz00_18768 = BgL_arg3827z00_5788; 
BgL_bufposz00_18769 = BgL_arg3828z00_5789; 
BgL_bufposz00_5783 = BgL_bufposz00_18769; 
BgL_forwardz00_5782 = BgL_forwardz00_18768; 
goto BgL_zc3z04anonymousza33824ze3z87_5784;} }  else 
{ /* Unsafe/http.scm 466 */
BgL_matchz00_5962 = BgL_newzd2matchzd2_5785; } }  else 
{ /* Unsafe/http.scm 466 */
int BgL_curz00_5790;
{ /* Unsafe/http.scm 466 */
int BgL_res6183z00_11524;
BgL_res6183z00_11524 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5780, BgL_forwardz00_5782); 
BgL_curz00_5790 = BgL_res6183z00_11524; } 
{ /* Unsafe/http.scm 466 */

{ /* Unsafe/http.scm 466 */
bool_t BgL_test8217z00_18771;
if(
(
(long)(BgL_curz00_5790)==((long)9)))
{ /* Unsafe/http.scm 466 */
BgL_test8217z00_18771 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 466 */
BgL_test8217z00_18771 = 
(
(long)(BgL_curz00_5790)==((long)32))
; } 
if(BgL_test8217z00_18771)
{ 
long BgL_forwardz00_18778;long BgL_lastzd2matchzd2_18777;
BgL_lastzd2matchzd2_18777 = BgL_newzd2matchzd2_5785; 
BgL_forwardz00_18778 = 
(((long)1)+BgL_forwardz00_5782); 
BgL_forwardz00_5782 = BgL_forwardz00_18778; 
BgL_lastzd2matchzd2_5781 = BgL_lastzd2matchzd2_18777; 
goto BgL_zc3z04anonymousza33824ze3z87_5784;}  else 
{ /* Unsafe/http.scm 466 */
BgL_matchz00_5962 = BgL_newzd2matchzd2_5785; } } } } } }  else 
{ /* Unsafe/http.scm 466 */
BgL_matchz00_5962 = BgL_newzd2matchzd2_5770; } } } } } }  else 
{ /* Unsafe/http.scm 466 */
long BgL_arg3855z00_5837;
BgL_arg3855z00_5837 = 
(((long)1)+BgL_forwardz00_5819); 
{ /* Unsafe/http.scm 466 */
long BgL_newzd2matchzd2_11590;
{ /* Unsafe/http.scm 466 */
long BgL_res6214z00_11593;
BgL_res6214z00_11593 = 
RGC_STOP_MATCH(BgL_iportz00_5817, BgL_arg3855z00_5837); BgL_res6214z00_11593; } 
BgL_newzd2matchzd2_11590 = ((long)2); 
BgL_matchz00_5962 = BgL_newzd2matchzd2_11590; } } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_5702); 
switch( BgL_matchz00_5962) { case ((long)2) : 

{ /* Unsafe/http.scm 466 */
bool_t BgL_test8219z00_18785;
{ /* Unsafe/http.scm 466 */
long BgL_arg3936z00_5952;
{ /* Unsafe/http.scm 466 */
long BgL_res6217z00_11600;
BgL_res6217z00_11600 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_5702); 
BgL_arg3936z00_5952 = BgL_res6217z00_11600; } 
BgL_test8219z00_18785 = 
(BgL_arg3936z00_5952==((long)0)); } 
if(BgL_test8219z00_18785)
{ /* Unsafe/http.scm 466 */
BgL_transferzd2encodingzd2_3842 = BEOF; }  else 
{ /* Unsafe/http.scm 466 */
unsigned char BgL_res6219z00_11604;
BgL_res6219z00_11604 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_5702); 
BgL_transferzd2encodingzd2_3842 = 
BCHAR(BgL_res6219z00_11604); } } break;case ((long)1) : 

goto BgL_zc3z04anonymousza33942ze3z87_5961;break;case ((long)0) : 

{ /* Unsafe/http.scm 467 */
obj_t BgL_res6225z00_11617;
{ /* Unsafe/http.scm 466 */
obj_t BgL_res6224z00_11616;
{ /* Unsafe/http.scm 466 */
long BgL_arg4921z00_11613;
{ /* Unsafe/http.scm 466 */
long BgL_res6223z00_11615;
BgL_res6223z00_11615 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_5702); 
BgL_arg4921z00_11613 = BgL_res6223z00_11615; } 
BgL_res6224z00_11616 = 
rgc_buffer_downcase_subsymbol(BgL_iportz00_5702, ((long)0), BgL_arg4921z00_11613); } 
BgL_res6225z00_11617 = BgL_res6224z00_11616; } 
BgL_transferzd2encodingzd2_3842 = BgL_res6225z00_11617; } break;
default: 
BgL_transferzd2encodingzd2_3842 = 
BGl_errorz00zz__errorz00(BGl_string7254z00zz__httpz00, BGl_string7255z00zz__httpz00, 
BINT(BgL_matchz00_5962)); } } } 
BGl_crlfzd2grammarze70z35zz__httpz00(BgL_iportz00_3836); 
{ /* Unsafe/http.scm 536 */
obj_t BgL_arg3173z00_4374;
BgL_arg3173z00_4374 = 
MAKE_YOUNG_PAIR(BgL_kz00_4354, BgL_transferzd2encodingzd2_3842); 
BgL_headerz00_3838 = 
MAKE_YOUNG_PAIR(BgL_arg3173z00_4374, BgL_headerz00_3838); } 
goto BgL_zc3z04anonymousza33139ze3z87_4312;}  else 
{ /* Unsafe/http.scm 512 */
if(
(BgL_kz00_4354==BGl_keyword7277z00zz__httpz00))
{ /* Unsafe/http.scm 512 */
BgL_authoriza7ationza7_3843 = 
BGl_authzd2grammarze70z35zz__httpz00(BgL_iportz00_3836); 
BGl_crlfzd2grammarze70z35zz__httpz00(BgL_iportz00_3836); 
{ /* Unsafe/http.scm 541 */
obj_t BgL_arg3177z00_4378;
BgL_arg3177z00_4378 = 
MAKE_YOUNG_PAIR(BgL_kz00_4354, BgL_authoriza7ationza7_3843); 
BgL_headerz00_3838 = 
MAKE_YOUNG_PAIR(BgL_arg3177z00_4378, BgL_headerz00_3838); } 
goto BgL_zc3z04anonymousza33139ze3z87_4312;}  else 
{ /* Unsafe/http.scm 512 */
if(
(BgL_kz00_4354==BGl_keyword7281z00zz__httpz00))
{ /* Unsafe/http.scm 512 */
BgL_iportz00_5296 = BgL_iportz00_3836; 
{ 
obj_t BgL_iportz00_5337;long BgL_lastzd2matchzd2_5338;long BgL_forwardz00_5339;long BgL_bufposz00_5340;obj_t BgL_iportz00_5362;long BgL_lastzd2matchzd2_5363;long BgL_forwardz00_5364;long BgL_bufposz00_5365;obj_t BgL_iportz00_5388;long BgL_lastzd2matchzd2_5389;long BgL_forwardz00_5390;long BgL_bufposz00_5391;obj_t BgL_iportz00_5419;long BgL_lastzd2matchzd2_5420;long BgL_forwardz00_5421;long BgL_bufposz00_5422;obj_t BgL_iportz00_5434;long BgL_lastzd2matchzd2_5435;long BgL_forwardz00_5436;long BgL_bufposz00_5437;obj_t BgL_iportz00_5485;long BgL_lastzd2matchzd2_5486;long BgL_forwardz00_5487;long BgL_bufposz00_5488;obj_t BgL_iportz00_5510;long BgL_lastzd2matchzd2_5511;long BgL_forwardz00_5512;long BgL_bufposz00_5513;long BgL_minz00_5604;long BgL_maxz00_5605;
BgL_zc3z04anonymousza33800ze3z87_5654:
{ /* Unsafe/http.scm 471 */
long BgL_res6390z00_12066;
BgL_res6390z00_12066 = 
RGC_START_MATCH(BgL_iportz00_5296); BgL_res6390z00_12066; } 
{ /* Unsafe/http.scm 471 */
long BgL_matchz00_5655;
{ /* Unsafe/http.scm 471 */
long BgL_arg3802z00_5659;long BgL_arg3803z00_5660;
{ /* Unsafe/http.scm 471 */
long BgL_res6391z00_12068;
BgL_res6391z00_12068 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5296); 
BgL_arg3802z00_5659 = BgL_res6391z00_12068; } 
{ /* Unsafe/http.scm 471 */
long BgL_res6392z00_12070;
BgL_res6392z00_12070 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5296); 
BgL_arg3803z00_5660 = BgL_res6392z00_12070; } 
BgL_iportz00_5362 = BgL_iportz00_5296; 
BgL_lastzd2matchzd2_5363 = ((long)3); 
BgL_forwardz00_5364 = BgL_arg3802z00_5659; 
BgL_bufposz00_5365 = BgL_arg3803z00_5660; 
BgL_zc3z04anonymousza33626ze3z87_5366:
if(
(BgL_forwardz00_5364==BgL_bufposz00_5365))
{ /* Unsafe/http.scm 471 */
if(
rgc_fill_buffer(BgL_iportz00_5362))
{ /* Unsafe/http.scm 471 */
long BgL_arg3629z00_5369;long BgL_arg3630z00_5370;
{ /* Unsafe/http.scm 471 */
long BgL_res6251z00_11686;
BgL_res6251z00_11686 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5362); 
BgL_arg3629z00_5369 = BgL_res6251z00_11686; } 
{ /* Unsafe/http.scm 471 */
long BgL_res6252z00_11688;
BgL_res6252z00_11688 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5362); 
BgL_arg3630z00_5370 = BgL_res6252z00_11688; } 
{ 
long BgL_bufposz00_18816;long BgL_forwardz00_18815;
BgL_forwardz00_18815 = BgL_arg3629z00_5369; 
BgL_bufposz00_18816 = BgL_arg3630z00_5370; 
BgL_bufposz00_5365 = BgL_bufposz00_18816; 
BgL_forwardz00_5364 = BgL_forwardz00_18815; 
goto BgL_zc3z04anonymousza33626ze3z87_5366;} }  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_lastzd2matchzd2_5363; } }  else 
{ /* Unsafe/http.scm 471 */
int BgL_curz00_5371;
{ /* Unsafe/http.scm 471 */
int BgL_res6253z00_11691;
BgL_res6253z00_11691 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5362, BgL_forwardz00_5364); 
BgL_curz00_5371 = BgL_res6253z00_11691; } 
{ /* Unsafe/http.scm 471 */

{ /* Unsafe/http.scm 471 */
bool_t BgL_test8224z00_18818;
if(
(
(long)(BgL_curz00_5371)==((long)45)))
{ /* Unsafe/http.scm 471 */
BgL_test8224z00_18818 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 471 */
bool_t BgL_test8226z00_18822;
if(
(
(long)(BgL_curz00_5371)>=((long)65)))
{ /* Unsafe/http.scm 471 */
BgL_test8226z00_18822 = 
(
(long)(BgL_curz00_5371)<((long)91))
; }  else 
{ /* Unsafe/http.scm 471 */
BgL_test8226z00_18822 = ((bool_t)0)
; } 
if(BgL_test8226z00_18822)
{ /* Unsafe/http.scm 471 */
BgL_test8224z00_18818 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 471 */
if(
(
(long)(BgL_curz00_5371)>=((long)97)))
{ /* Unsafe/http.scm 471 */
BgL_test8224z00_18818 = 
(
(long)(BgL_curz00_5371)<((long)123))
; }  else 
{ /* Unsafe/http.scm 471 */
BgL_test8224z00_18818 = ((bool_t)0)
; } } } 
if(BgL_test8224z00_18818)
{ /* Unsafe/http.scm 471 */
BgL_iportz00_5510 = BgL_iportz00_5362; 
BgL_lastzd2matchzd2_5511 = BgL_lastzd2matchzd2_5363; 
BgL_forwardz00_5512 = 
(((long)1)+BgL_forwardz00_5364); 
BgL_bufposz00_5513 = BgL_bufposz00_5365; 
BgL_zc3z04anonymousza33700ze3z87_5514:
{ /* Unsafe/http.scm 471 */
long BgL_newzd2matchzd2_5515;
{ /* Unsafe/http.scm 471 */
long BgL_res6355z00_11972;
BgL_res6355z00_11972 = 
RGC_STOP_MATCH(BgL_iportz00_5510, BgL_forwardz00_5512); BgL_res6355z00_11972; } 
BgL_newzd2matchzd2_5515 = ((long)3); 
if(
(BgL_forwardz00_5512==BgL_bufposz00_5513))
{ /* Unsafe/http.scm 471 */
if(
rgc_fill_buffer(BgL_iportz00_5510))
{ /* Unsafe/http.scm 471 */
long BgL_arg3703z00_5518;long BgL_arg3704z00_5519;
{ /* Unsafe/http.scm 471 */
long BgL_res6358z00_11979;
BgL_res6358z00_11979 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5510); 
BgL_arg3703z00_5518 = BgL_res6358z00_11979; } 
{ /* Unsafe/http.scm 471 */
long BgL_res6359z00_11981;
BgL_res6359z00_11981 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5510); 
BgL_arg3704z00_5519 = BgL_res6359z00_11981; } 
{ 
long BgL_bufposz00_18841;long BgL_forwardz00_18840;
BgL_forwardz00_18840 = BgL_arg3703z00_5518; 
BgL_bufposz00_18841 = BgL_arg3704z00_5519; 
BgL_bufposz00_5513 = BgL_bufposz00_18841; 
BgL_forwardz00_5512 = BgL_forwardz00_18840; 
goto BgL_zc3z04anonymousza33700ze3z87_5514;} }  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_newzd2matchzd2_5515; } }  else 
{ /* Unsafe/http.scm 471 */
int BgL_curz00_5520;
{ /* Unsafe/http.scm 471 */
int BgL_res6360z00_11984;
BgL_res6360z00_11984 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5510, BgL_forwardz00_5512); 
BgL_curz00_5520 = BgL_res6360z00_11984; } 
{ /* Unsafe/http.scm 471 */

{ /* Unsafe/http.scm 471 */
bool_t BgL_test8231z00_18843;
if(
(
(long)(BgL_curz00_5520)==((long)45)))
{ /* Unsafe/http.scm 471 */
BgL_test8231z00_18843 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 471 */
bool_t BgL_test8233z00_18847;
if(
(
(long)(BgL_curz00_5520)>=((long)65)))
{ /* Unsafe/http.scm 471 */
BgL_test8233z00_18847 = 
(
(long)(BgL_curz00_5520)<((long)91))
; }  else 
{ /* Unsafe/http.scm 471 */
BgL_test8233z00_18847 = ((bool_t)0)
; } 
if(BgL_test8233z00_18847)
{ /* Unsafe/http.scm 471 */
BgL_test8231z00_18843 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 471 */
if(
(
(long)(BgL_curz00_5520)>=((long)97)))
{ /* Unsafe/http.scm 471 */
BgL_test8231z00_18843 = 
(
(long)(BgL_curz00_5520)<((long)123))
; }  else 
{ /* Unsafe/http.scm 471 */
BgL_test8231z00_18843 = ((bool_t)0)
; } } } 
if(BgL_test8231z00_18843)
{ /* Unsafe/http.scm 471 */
BgL_iportz00_5388 = BgL_iportz00_5510; 
BgL_lastzd2matchzd2_5389 = BgL_newzd2matchzd2_5515; 
BgL_forwardz00_5390 = 
(((long)1)+BgL_forwardz00_5512); 
BgL_bufposz00_5391 = BgL_bufposz00_5513; 
BgL_zc3z04anonymousza33640ze3z87_5392:
if(
(BgL_forwardz00_5390==BgL_bufposz00_5391))
{ /* Unsafe/http.scm 471 */
if(
rgc_fill_buffer(BgL_iportz00_5388))
{ /* Unsafe/http.scm 471 */
long BgL_arg3643z00_5395;long BgL_arg3644z00_5396;
{ /* Unsafe/http.scm 471 */
long BgL_res6267z00_11722;
BgL_res6267z00_11722 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5388); 
BgL_arg3643z00_5395 = BgL_res6267z00_11722; } 
{ /* Unsafe/http.scm 471 */
long BgL_res6268z00_11724;
BgL_res6268z00_11724 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5388); 
BgL_arg3644z00_5396 = BgL_res6268z00_11724; } 
{ 
long BgL_bufposz00_18865;long BgL_forwardz00_18864;
BgL_forwardz00_18864 = BgL_arg3643z00_5395; 
BgL_bufposz00_18865 = BgL_arg3644z00_5396; 
BgL_bufposz00_5391 = BgL_bufposz00_18865; 
BgL_forwardz00_5390 = BgL_forwardz00_18864; 
goto BgL_zc3z04anonymousza33640ze3z87_5392;} }  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_lastzd2matchzd2_5389; } }  else 
{ /* Unsafe/http.scm 471 */
int BgL_curz00_5397;
{ /* Unsafe/http.scm 471 */
int BgL_res6269z00_11727;
BgL_res6269z00_11727 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5388, BgL_forwardz00_5390); 
BgL_curz00_5397 = BgL_res6269z00_11727; } 
{ /* Unsafe/http.scm 471 */

{ /* Unsafe/http.scm 471 */
bool_t BgL_test8238z00_18867;
if(
(
(long)(BgL_curz00_5397)==((long)45)))
{ /* Unsafe/http.scm 471 */
BgL_test8238z00_18867 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 471 */
bool_t BgL_test8240z00_18871;
if(
(
(long)(BgL_curz00_5397)>=((long)65)))
{ /* Unsafe/http.scm 471 */
BgL_test8240z00_18871 = 
(
(long)(BgL_curz00_5397)<((long)91))
; }  else 
{ /* Unsafe/http.scm 471 */
BgL_test8240z00_18871 = ((bool_t)0)
; } 
if(BgL_test8240z00_18871)
{ /* Unsafe/http.scm 471 */
BgL_test8238z00_18867 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 471 */
if(
(
(long)(BgL_curz00_5397)>=((long)97)))
{ /* Unsafe/http.scm 471 */
BgL_test8238z00_18867 = 
(
(long)(BgL_curz00_5397)<((long)123))
; }  else 
{ /* Unsafe/http.scm 471 */
BgL_test8238z00_18867 = ((bool_t)0)
; } } } 
if(BgL_test8238z00_18867)
{ 
long BgL_forwardz00_18882;
BgL_forwardz00_18882 = 
(((long)1)+BgL_forwardz00_5390); 
BgL_forwardz00_5390 = BgL_forwardz00_18882; 
goto BgL_zc3z04anonymousza33640ze3z87_5392;}  else 
{ /* Unsafe/http.scm 471 */
if(
(
(long)(BgL_curz00_5397)==((long)44)))
{ /* Unsafe/http.scm 471 */
BgL_iportz00_5485 = BgL_iportz00_5388; 
BgL_lastzd2matchzd2_5486 = BgL_lastzd2matchzd2_5389; 
BgL_forwardz00_5487 = 
(((long)1)+BgL_forwardz00_5390); 
BgL_bufposz00_5488 = BgL_bufposz00_5391; 
BgL_zc3z04anonymousza33687ze3z87_5489:
if(
(BgL_forwardz00_5487==BgL_bufposz00_5488))
{ /* Unsafe/http.scm 471 */
if(
rgc_fill_buffer(BgL_iportz00_5485))
{ /* Unsafe/http.scm 471 */
long BgL_arg3690z00_5492;long BgL_arg3691z00_5493;
{ /* Unsafe/http.scm 471 */
long BgL_res6343z00_11946;
BgL_res6343z00_11946 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5485); 
BgL_arg3690z00_5492 = BgL_res6343z00_11946; } 
{ /* Unsafe/http.scm 471 */
long BgL_res6344z00_11948;
BgL_res6344z00_11948 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5485); 
BgL_arg3691z00_5493 = BgL_res6344z00_11948; } 
{ 
long BgL_bufposz00_18894;long BgL_forwardz00_18893;
BgL_forwardz00_18893 = BgL_arg3690z00_5492; 
BgL_bufposz00_18894 = BgL_arg3691z00_5493; 
BgL_bufposz00_5488 = BgL_bufposz00_18894; 
BgL_forwardz00_5487 = BgL_forwardz00_18893; 
goto BgL_zc3z04anonymousza33687ze3z87_5489;} }  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_lastzd2matchzd2_5486; } }  else 
{ /* Unsafe/http.scm 471 */
int BgL_curz00_5494;
{ /* Unsafe/http.scm 471 */
int BgL_res6345z00_11951;
BgL_res6345z00_11951 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5485, BgL_forwardz00_5487); 
BgL_curz00_5494 = BgL_res6345z00_11951; } 
{ /* Unsafe/http.scm 471 */

{ /* Unsafe/http.scm 471 */
bool_t BgL_test8246z00_18896;
if(
(
(long)(BgL_curz00_5494)==((long)45)))
{ /* Unsafe/http.scm 471 */
BgL_test8246z00_18896 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 471 */
bool_t BgL_test8248z00_18900;
if(
(
(long)(BgL_curz00_5494)>=((long)65)))
{ /* Unsafe/http.scm 471 */
BgL_test8248z00_18900 = 
(
(long)(BgL_curz00_5494)<((long)91))
; }  else 
{ /* Unsafe/http.scm 471 */
BgL_test8248z00_18900 = ((bool_t)0)
; } 
if(BgL_test8248z00_18900)
{ /* Unsafe/http.scm 471 */
BgL_test8246z00_18896 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 471 */
if(
(
(long)(BgL_curz00_5494)>=((long)97)))
{ /* Unsafe/http.scm 471 */
BgL_test8246z00_18896 = 
(
(long)(BgL_curz00_5494)<((long)123))
; }  else 
{ /* Unsafe/http.scm 471 */
BgL_test8246z00_18896 = ((bool_t)0)
; } } } 
if(BgL_test8246z00_18896)
{ /* Unsafe/http.scm 471 */
BgL_iportz00_5337 = BgL_iportz00_5485; 
BgL_lastzd2matchzd2_5338 = BgL_lastzd2matchzd2_5486; 
BgL_forwardz00_5339 = 
(((long)1)+BgL_forwardz00_5487); 
BgL_bufposz00_5340 = BgL_bufposz00_5488; 
BgL_zc3z04anonymousza33612ze3z87_5341:
if(
(BgL_forwardz00_5339==BgL_bufposz00_5340))
{ /* Unsafe/http.scm 471 */
if(
rgc_fill_buffer(BgL_iportz00_5337))
{ /* Unsafe/http.scm 471 */
long BgL_arg3615z00_5344;long BgL_arg3616z00_5345;
{ /* Unsafe/http.scm 471 */
long BgL_res6228z00_11624;
BgL_res6228z00_11624 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5337); 
BgL_arg3615z00_5344 = BgL_res6228z00_11624; } 
{ /* Unsafe/http.scm 471 */
long BgL_res6229z00_11626;
BgL_res6229z00_11626 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5337); 
BgL_arg3616z00_5345 = BgL_res6229z00_11626; } 
{ 
long BgL_bufposz00_18918;long BgL_forwardz00_18917;
BgL_forwardz00_18917 = BgL_arg3615z00_5344; 
BgL_bufposz00_18918 = BgL_arg3616z00_5345; 
BgL_bufposz00_5340 = BgL_bufposz00_18918; 
BgL_forwardz00_5339 = BgL_forwardz00_18917; 
goto BgL_zc3z04anonymousza33612ze3z87_5341;} }  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_lastzd2matchzd2_5338; } }  else 
{ /* Unsafe/http.scm 471 */
int BgL_curz00_5346;
{ /* Unsafe/http.scm 471 */
int BgL_res6230z00_11629;
BgL_res6230z00_11629 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5337, BgL_forwardz00_5339); 
BgL_curz00_5346 = BgL_res6230z00_11629; } 
{ /* Unsafe/http.scm 471 */

{ /* Unsafe/http.scm 471 */
bool_t BgL_test8253z00_18920;
if(
(
(long)(BgL_curz00_5346)==((long)45)))
{ /* Unsafe/http.scm 471 */
BgL_test8253z00_18920 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 471 */
bool_t BgL_test8255z00_18924;
if(
(
(long)(BgL_curz00_5346)>=((long)65)))
{ /* Unsafe/http.scm 471 */
BgL_test8255z00_18924 = 
(
(long)(BgL_curz00_5346)<((long)91))
; }  else 
{ /* Unsafe/http.scm 471 */
BgL_test8255z00_18924 = ((bool_t)0)
; } 
if(BgL_test8255z00_18924)
{ /* Unsafe/http.scm 471 */
BgL_test8253z00_18920 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 471 */
if(
(
(long)(BgL_curz00_5346)>=((long)97)))
{ /* Unsafe/http.scm 471 */
BgL_test8253z00_18920 = 
(
(long)(BgL_curz00_5346)<((long)123))
; }  else 
{ /* Unsafe/http.scm 471 */
BgL_test8253z00_18920 = ((bool_t)0)
; } } } 
if(BgL_test8253z00_18920)
{ 
long BgL_forwardz00_18935;
BgL_forwardz00_18935 = 
(((long)1)+BgL_forwardz00_5339); 
BgL_forwardz00_5339 = BgL_forwardz00_18935; 
goto BgL_zc3z04anonymousza33612ze3z87_5341;}  else 
{ /* Unsafe/http.scm 471 */
if(
(
(long)(BgL_curz00_5346)==((long)44)))
{ 
long BgL_bufposz00_18944;long BgL_forwardz00_18942;long BgL_lastzd2matchzd2_18941;obj_t BgL_iportz00_18940;
BgL_iportz00_18940 = BgL_iportz00_5337; 
BgL_lastzd2matchzd2_18941 = BgL_lastzd2matchzd2_5338; 
BgL_forwardz00_18942 = 
(((long)1)+BgL_forwardz00_5339); 
BgL_bufposz00_18944 = BgL_bufposz00_5340; 
BgL_bufposz00_5488 = BgL_bufposz00_18944; 
BgL_forwardz00_5487 = BgL_forwardz00_18942; 
BgL_lastzd2matchzd2_5486 = BgL_lastzd2matchzd2_18941; 
BgL_iportz00_5485 = BgL_iportz00_18940; 
goto BgL_zc3z04anonymousza33687ze3z87_5489;}  else 
{ /* Unsafe/http.scm 471 */
if(
(
(long)(BgL_curz00_5346)==((long)13)))
{ /* Unsafe/http.scm 471 */
long BgL_arg3625z00_5357;
BgL_arg3625z00_5357 = 
(((long)1)+BgL_forwardz00_5339); 
{ 
long BgL_forwardz00_11651;long BgL_bufposz00_11652;
BgL_forwardz00_11651 = BgL_arg3625z00_5357; 
BgL_bufposz00_11652 = BgL_bufposz00_5340; 
BgL_statezd29zd21210z00_11650:
if(
(BgL_forwardz00_11651==BgL_bufposz00_11652))
{ /* Unsafe/http.scm 471 */
if(
rgc_fill_buffer(BgL_iportz00_5337))
{ /* Unsafe/http.scm 471 */
long BgL_arg3682z00_11655;long BgL_arg3683z00_11656;
{ /* Unsafe/http.scm 471 */
long BgL_res6243z00_11666;
BgL_res6243z00_11666 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5337); 
BgL_arg3682z00_11655 = BgL_res6243z00_11666; } 
{ /* Unsafe/http.scm 471 */
long BgL_res6244z00_11668;
BgL_res6244z00_11668 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5337); 
BgL_arg3683z00_11656 = BgL_res6244z00_11668; } 
{ 
long BgL_bufposz00_18956;long BgL_forwardz00_18955;
BgL_forwardz00_18955 = BgL_arg3682z00_11655; 
BgL_bufposz00_18956 = BgL_arg3683z00_11656; 
BgL_bufposz00_11652 = BgL_bufposz00_18956; 
BgL_forwardz00_11651 = BgL_forwardz00_18955; 
goto BgL_statezd29zd21210z00_11650;} }  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_lastzd2matchzd2_5338; } }  else 
{ /* Unsafe/http.scm 471 */
int BgL_curz00_11657;
{ /* Unsafe/http.scm 471 */
int BgL_res6245z00_11671;
BgL_res6245z00_11671 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5337, BgL_forwardz00_11651); 
BgL_curz00_11657 = BgL_res6245z00_11671; } 
{ /* Unsafe/http.scm 471 */

if(
(
(long)(BgL_curz00_11657)==((long)10)))
{ /* Unsafe/http.scm 471 */
long BgL_arg3685z00_11659;
BgL_arg3685z00_11659 = 
(((long)1)+BgL_forwardz00_11651); 
{ /* Unsafe/http.scm 471 */
long BgL_newzd2matchzd2_11676;
{ /* Unsafe/http.scm 471 */
long BgL_res6248z00_11679;
BgL_res6248z00_11679 = 
RGC_STOP_MATCH(BgL_iportz00_5337, BgL_arg3685z00_11659); BgL_res6248z00_11679; } 
BgL_newzd2matchzd2_11676 = ((long)1); 
BgL_matchz00_5655 = BgL_newzd2matchzd2_11676; } }  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_lastzd2matchzd2_5338; } } } } }  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_lastzd2matchzd2_5338; } } } } } } }  else 
{ /* Unsafe/http.scm 471 */
bool_t BgL_test8263z00_18964;
if(
(
(long)(BgL_curz00_5494)==((long)9)))
{ /* Unsafe/http.scm 471 */
BgL_test8263z00_18964 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 471 */
BgL_test8263z00_18964 = 
(
(long)(BgL_curz00_5494)==((long)32))
; } 
if(BgL_test8263z00_18964)
{ 
long BgL_forwardz00_18970;
BgL_forwardz00_18970 = 
(((long)1)+BgL_forwardz00_5487); 
BgL_forwardz00_5487 = BgL_forwardz00_18970; 
goto BgL_zc3z04anonymousza33687ze3z87_5489;}  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_lastzd2matchzd2_5486; } } } } } }  else 
{ /* Unsafe/http.scm 471 */
if(
(
(long)(BgL_curz00_5397)==((long)13)))
{ /* Unsafe/http.scm 471 */
long BgL_arg3653z00_5408;
BgL_arg3653z00_5408 = 
(((long)1)+BgL_forwardz00_5390); 
{ 
long BgL_forwardz00_11749;long BgL_bufposz00_11750;
BgL_forwardz00_11749 = BgL_arg3653z00_5408; 
BgL_bufposz00_11750 = BgL_bufposz00_5391; 
BgL_statezd24zd21205z00_11748:
if(
(BgL_forwardz00_11749==BgL_bufposz00_11750))
{ /* Unsafe/http.scm 471 */
if(
rgc_fill_buffer(BgL_iportz00_5388))
{ /* Unsafe/http.scm 471 */
long BgL_arg3674z00_11753;long BgL_arg3675z00_11754;
{ /* Unsafe/http.scm 471 */
long BgL_res6282z00_11764;
BgL_res6282z00_11764 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5388); 
BgL_arg3674z00_11753 = BgL_res6282z00_11764; } 
{ /* Unsafe/http.scm 471 */
long BgL_res6283z00_11766;
BgL_res6283z00_11766 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5388); 
BgL_arg3675z00_11754 = BgL_res6283z00_11766; } 
{ 
long BgL_bufposz00_18984;long BgL_forwardz00_18983;
BgL_forwardz00_18983 = BgL_arg3674z00_11753; 
BgL_bufposz00_18984 = BgL_arg3675z00_11754; 
BgL_bufposz00_11750 = BgL_bufposz00_18984; 
BgL_forwardz00_11749 = BgL_forwardz00_18983; 
goto BgL_statezd24zd21205z00_11748;} }  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_lastzd2matchzd2_5389; } }  else 
{ /* Unsafe/http.scm 471 */
int BgL_curz00_11755;
{ /* Unsafe/http.scm 471 */
int BgL_res6284z00_11769;
BgL_res6284z00_11769 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5388, BgL_forwardz00_11749); 
BgL_curz00_11755 = BgL_res6284z00_11769; } 
{ /* Unsafe/http.scm 471 */

if(
(
(long)(BgL_curz00_11755)==((long)10)))
{ /* Unsafe/http.scm 471 */
long BgL_arg3677z00_11757;
BgL_arg3677z00_11757 = 
(((long)1)+BgL_forwardz00_11749); 
{ /* Unsafe/http.scm 471 */
long BgL_newzd2matchzd2_11774;
{ /* Unsafe/http.scm 471 */
long BgL_res6287z00_11777;
BgL_res6287z00_11777 = 
RGC_STOP_MATCH(BgL_iportz00_5388, BgL_arg3677z00_11757); BgL_res6287z00_11777; } 
BgL_newzd2matchzd2_11774 = ((long)0); 
BgL_matchz00_5655 = BgL_newzd2matchzd2_11774; } }  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_lastzd2matchzd2_5389; } } } } }  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_lastzd2matchzd2_5389; } } } } } } }  else 
{ /* Unsafe/http.scm 471 */
if(
(
(long)(BgL_curz00_5520)==((long)44)))
{ 
long BgL_bufposz00_18999;long BgL_forwardz00_18997;long BgL_lastzd2matchzd2_18996;obj_t BgL_iportz00_18995;
BgL_iportz00_18995 = BgL_iportz00_5510; 
BgL_lastzd2matchzd2_18996 = BgL_newzd2matchzd2_5515; 
BgL_forwardz00_18997 = 
(((long)1)+BgL_forwardz00_5512); 
BgL_bufposz00_18999 = BgL_bufposz00_5513; 
BgL_bufposz00_5488 = BgL_bufposz00_18999; 
BgL_forwardz00_5487 = BgL_forwardz00_18997; 
BgL_lastzd2matchzd2_5486 = BgL_lastzd2matchzd2_18996; 
BgL_iportz00_5485 = BgL_iportz00_18995; 
goto BgL_zc3z04anonymousza33687ze3z87_5489;}  else 
{ /* Unsafe/http.scm 471 */
if(
(
(long)(BgL_curz00_5520)==((long)13)))
{ /* Unsafe/http.scm 471 */
long BgL_arg3713z00_5531;
BgL_arg3713z00_5531 = 
(((long)1)+BgL_forwardz00_5512); 
{ 
long BgL_forwardz00_12006;long BgL_bufposz00_12007;
BgL_forwardz00_12006 = BgL_arg3713z00_5531; 
BgL_bufposz00_12007 = BgL_bufposz00_5513; 
BgL_statezd24zd21205z00_12005:
if(
(BgL_forwardz00_12006==BgL_bufposz00_12007))
{ /* Unsafe/http.scm 471 */
if(
rgc_fill_buffer(BgL_iportz00_5510))
{ /* Unsafe/http.scm 471 */
long BgL_arg3674z00_12010;long BgL_arg3675z00_12011;
{ /* Unsafe/http.scm 471 */
long BgL_res6373z00_12021;
BgL_res6373z00_12021 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5510); 
BgL_arg3674z00_12010 = BgL_res6373z00_12021; } 
{ /* Unsafe/http.scm 471 */
long BgL_res6374z00_12023;
BgL_res6374z00_12023 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5510); 
BgL_arg3675z00_12011 = BgL_res6374z00_12023; } 
{ 
long BgL_bufposz00_19011;long BgL_forwardz00_19010;
BgL_forwardz00_19010 = BgL_arg3674z00_12010; 
BgL_bufposz00_19011 = BgL_arg3675z00_12011; 
BgL_bufposz00_12007 = BgL_bufposz00_19011; 
BgL_forwardz00_12006 = BgL_forwardz00_19010; 
goto BgL_statezd24zd21205z00_12005;} }  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_newzd2matchzd2_5515; } }  else 
{ /* Unsafe/http.scm 471 */
int BgL_curz00_12012;
{ /* Unsafe/http.scm 471 */
int BgL_res6375z00_12026;
BgL_res6375z00_12026 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5510, BgL_forwardz00_12006); 
BgL_curz00_12012 = BgL_res6375z00_12026; } 
{ /* Unsafe/http.scm 471 */

if(
(
(long)(BgL_curz00_12012)==((long)10)))
{ /* Unsafe/http.scm 471 */
long BgL_arg3677z00_12014;
BgL_arg3677z00_12014 = 
(((long)1)+BgL_forwardz00_12006); 
{ /* Unsafe/http.scm 471 */
long BgL_newzd2matchzd2_12031;
{ /* Unsafe/http.scm 471 */
long BgL_res6378z00_12034;
BgL_res6378z00_12034 = 
RGC_STOP_MATCH(BgL_iportz00_5510, BgL_arg3677z00_12014); BgL_res6378z00_12034; } 
BgL_newzd2matchzd2_12031 = ((long)0); 
BgL_matchz00_5655 = BgL_newzd2matchzd2_12031; } }  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_newzd2matchzd2_5515; } } } } }  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_newzd2matchzd2_5515; } } } } } } } }  else 
{ /* Unsafe/http.scm 471 */
bool_t BgL_test8274z00_19019;
if(
(
(long)(BgL_curz00_5371)==((long)9)))
{ /* Unsafe/http.scm 471 */
BgL_test8274z00_19019 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 471 */
BgL_test8274z00_19019 = 
(
(long)(BgL_curz00_5371)==((long)32))
; } 
if(BgL_test8274z00_19019)
{ /* Unsafe/http.scm 471 */
BgL_iportz00_5419 = BgL_iportz00_5362; 
BgL_lastzd2matchzd2_5420 = BgL_lastzd2matchzd2_5363; 
BgL_forwardz00_5421 = 
(((long)1)+BgL_forwardz00_5364); 
BgL_bufposz00_5422 = BgL_bufposz00_5365; 
BgL_zc3z04anonymousza33655ze3z87_5423:
{ /* Unsafe/http.scm 471 */
long BgL_newzd2matchzd2_5424;
{ /* Unsafe/http.scm 471 */
long BgL_res6289z00_11784;
BgL_res6289z00_11784 = 
RGC_STOP_MATCH(BgL_iportz00_5419, BgL_forwardz00_5421); BgL_res6289z00_11784; } 
BgL_newzd2matchzd2_5424 = ((long)2); 
if(
(BgL_forwardz00_5421==BgL_bufposz00_5422))
{ /* Unsafe/http.scm 471 */
if(
rgc_fill_buffer(BgL_iportz00_5419))
{ /* Unsafe/http.scm 471 */
long BgL_arg3658z00_5427;long BgL_arg3659z00_5428;
{ /* Unsafe/http.scm 471 */
long BgL_res6292z00_11791;
BgL_res6292z00_11791 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5419); 
BgL_arg3658z00_5427 = BgL_res6292z00_11791; } 
{ /* Unsafe/http.scm 471 */
long BgL_res6293z00_11793;
BgL_res6293z00_11793 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5419); 
BgL_arg3659z00_5428 = BgL_res6293z00_11793; } 
{ 
long BgL_bufposz00_19033;long BgL_forwardz00_19032;
BgL_forwardz00_19032 = BgL_arg3658z00_5427; 
BgL_bufposz00_19033 = BgL_arg3659z00_5428; 
BgL_bufposz00_5422 = BgL_bufposz00_19033; 
BgL_forwardz00_5421 = BgL_forwardz00_19032; 
goto BgL_zc3z04anonymousza33655ze3z87_5423;} }  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_newzd2matchzd2_5424; } }  else 
{ /* Unsafe/http.scm 471 */
int BgL_curz00_5429;
{ /* Unsafe/http.scm 471 */
int BgL_res6294z00_11796;
BgL_res6294z00_11796 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5419, BgL_forwardz00_5421); 
BgL_curz00_5429 = BgL_res6294z00_11796; } 
{ /* Unsafe/http.scm 471 */

{ /* Unsafe/http.scm 471 */
bool_t BgL_test8278z00_19035;
if(
(
(long)(BgL_curz00_5429)==((long)9)))
{ /* Unsafe/http.scm 471 */
BgL_test8278z00_19035 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 471 */
BgL_test8278z00_19035 = 
(
(long)(BgL_curz00_5429)==((long)32))
; } 
if(BgL_test8278z00_19035)
{ /* Unsafe/http.scm 471 */
BgL_iportz00_5434 = BgL_iportz00_5419; 
BgL_lastzd2matchzd2_5435 = BgL_newzd2matchzd2_5424; 
BgL_forwardz00_5436 = 
(((long)1)+BgL_forwardz00_5421); 
BgL_bufposz00_5437 = BgL_bufposz00_5422; 
BgL_zc3z04anonymousza33663ze3z87_5438:
{ /* Unsafe/http.scm 471 */
long BgL_newzd2matchzd2_5439;
{ /* Unsafe/http.scm 471 */
long BgL_res6298z00_11805;
BgL_res6298z00_11805 = 
RGC_STOP_MATCH(BgL_iportz00_5434, BgL_forwardz00_5436); BgL_res6298z00_11805; } 
BgL_newzd2matchzd2_5439 = ((long)2); 
if(
(BgL_forwardz00_5436==BgL_bufposz00_5437))
{ /* Unsafe/http.scm 471 */
if(
rgc_fill_buffer(BgL_iportz00_5434))
{ /* Unsafe/http.scm 471 */
long BgL_arg3666z00_5442;long BgL_arg3667z00_5443;
{ /* Unsafe/http.scm 471 */
long BgL_res6301z00_11812;
BgL_res6301z00_11812 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5434); 
BgL_arg3666z00_5442 = BgL_res6301z00_11812; } 
{ /* Unsafe/http.scm 471 */
long BgL_res6302z00_11814;
BgL_res6302z00_11814 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5434); 
BgL_arg3667z00_5443 = BgL_res6302z00_11814; } 
{ 
long BgL_bufposz00_19049;long BgL_forwardz00_19048;
BgL_forwardz00_19048 = BgL_arg3666z00_5442; 
BgL_bufposz00_19049 = BgL_arg3667z00_5443; 
BgL_bufposz00_5437 = BgL_bufposz00_19049; 
BgL_forwardz00_5436 = BgL_forwardz00_19048; 
goto BgL_zc3z04anonymousza33663ze3z87_5438;} }  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_newzd2matchzd2_5439; } }  else 
{ /* Unsafe/http.scm 471 */
int BgL_curz00_5444;
{ /* Unsafe/http.scm 471 */
int BgL_res6303z00_11817;
BgL_res6303z00_11817 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5434, BgL_forwardz00_5436); 
BgL_curz00_5444 = BgL_res6303z00_11817; } 
{ /* Unsafe/http.scm 471 */

{ /* Unsafe/http.scm 471 */
bool_t BgL_test8282z00_19051;
if(
(
(long)(BgL_curz00_5444)==((long)9)))
{ /* Unsafe/http.scm 471 */
BgL_test8282z00_19051 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 471 */
BgL_test8282z00_19051 = 
(
(long)(BgL_curz00_5444)==((long)32))
; } 
if(BgL_test8282z00_19051)
{ 
long BgL_forwardz00_19058;long BgL_lastzd2matchzd2_19057;
BgL_lastzd2matchzd2_19057 = BgL_newzd2matchzd2_5439; 
BgL_forwardz00_19058 = 
(((long)1)+BgL_forwardz00_5436); 
BgL_forwardz00_5436 = BgL_forwardz00_19058; 
BgL_lastzd2matchzd2_5435 = BgL_lastzd2matchzd2_19057; 
goto BgL_zc3z04anonymousza33663ze3z87_5438;}  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_newzd2matchzd2_5439; } } } } } }  else 
{ /* Unsafe/http.scm 471 */
BgL_matchz00_5655 = BgL_newzd2matchzd2_5424; } } } } } }  else 
{ /* Unsafe/http.scm 471 */
long BgL_arg3639z00_5382;
BgL_arg3639z00_5382 = 
(((long)1)+BgL_forwardz00_5364); 
{ /* Unsafe/http.scm 471 */
long BgL_newzd2matchzd2_11712;
{ /* Unsafe/http.scm 471 */
long BgL_res6264z00_11715;
BgL_res6264z00_11715 = 
RGC_STOP_MATCH(BgL_iportz00_5362, BgL_arg3639z00_5382); BgL_res6264z00_11715; } 
BgL_newzd2matchzd2_11712 = ((long)3); 
BgL_matchz00_5655 = BgL_newzd2matchzd2_11712; } } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_5296); 
switch( BgL_matchz00_5655) { case ((long)3) : 

BgL_connectionz00_3845 = BGl_symbol7363z00zz__httpz00; break;case ((long)2) : 

goto BgL_zc3z04anonymousza33800ze3z87_5654;break;case ((long)1) : 

BgL_minz00_5604 = ((long)0); 
BgL_maxz00_5605 = ((long)-2); 
BgL_lambda3763z00_5606:
if(
(BgL_maxz00_5605<((long)0)))
{ /* Unsafe/http.scm 471 */
long BgL_stopz00_5608;
{ /* Unsafe/http.scm 471 */
long BgL_arg3767z00_5611;
{ /* Unsafe/http.scm 471 */
long BgL_res6381z00_12040;
BgL_res6381z00_12040 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_5296); 
BgL_arg3767z00_5611 = BgL_res6381z00_12040; } 
BgL_stopz00_5608 = 
(BgL_arg3767z00_5611+BgL_maxz00_5605); } 
if(
(BgL_stopz00_5608<=BgL_minz00_5604))
{ /* Unsafe/http.scm 471 */
obj_t BgL_arg3766z00_5610;
BgL_arg3766z00_5610 = 
MAKE_YOUNG_PAIR(
BINT(BgL_minz00_5604), 
BINT(BgL_maxz00_5605)); 
BgL_connectionz00_3845 = 
BGl_errorz00zz__errorz00(BGl_string7364z00zz__httpz00, BGl_string7365z00zz__httpz00, BgL_arg3766z00_5610); }  else 
{ /* Unsafe/http.scm 471 */
BgL_connectionz00_3845 = 
rgc_buffer_downcase_subsymbol(BgL_iportz00_5296, BgL_minz00_5604, BgL_stopz00_5608); } }  else 
{ /* Unsafe/http.scm 471 */
bool_t BgL_test8286z00_19076;
if(
(BgL_minz00_5604>=((long)0)))
{ /* Unsafe/http.scm 471 */
bool_t BgL_test8288z00_19079;
{ /* Unsafe/http.scm 471 */
long BgL_arg3774z00_5620;
{ /* Unsafe/http.scm 471 */
long BgL_res6386z00_12054;
BgL_res6386z00_12054 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_5296); 
BgL_arg3774z00_5620 = BgL_res6386z00_12054; } 
BgL_test8288z00_19079 = 
(BgL_maxz00_5605<=BgL_arg3774z00_5620); } 
if(BgL_test8288z00_19079)
{ /* Unsafe/http.scm 471 */
BgL_test8286z00_19076 = 
(BgL_maxz00_5605>=BgL_minz00_5604)
; }  else 
{ /* Unsafe/http.scm 471 */
BgL_test8286z00_19076 = ((bool_t)0)
; } }  else 
{ /* Unsafe/http.scm 471 */
BgL_test8286z00_19076 = ((bool_t)0)
; } 
if(BgL_test8286z00_19076)
{ /* Unsafe/http.scm 471 */
BgL_connectionz00_3845 = 
rgc_buffer_downcase_subsymbol(BgL_iportz00_5296, BgL_minz00_5604, BgL_maxz00_5605); }  else 
{ /* Unsafe/http.scm 471 */
obj_t BgL_arg3773z00_5617;
BgL_arg3773z00_5617 = 
MAKE_YOUNG_PAIR(
BINT(BgL_minz00_5604), 
BINT(BgL_maxz00_5605)); 
BgL_connectionz00_3845 = 
BGl_errorz00zz__errorz00(BGl_string7364z00zz__httpz00, BGl_string7365z00zz__httpz00, BgL_arg3773z00_5617); } } break;case ((long)0) : 

{ 
long BgL_maxz00_19089;long BgL_minz00_19088;
BgL_minz00_19088 = ((long)0); 
BgL_maxz00_19089 = ((long)-2); 
BgL_maxz00_5605 = BgL_maxz00_19089; 
BgL_minz00_5604 = BgL_minz00_19088; 
goto BgL_lambda3763z00_5606;} break;
default: 
BgL_connectionz00_3845 = 
BGl_errorz00zz__errorz00(BGl_string7254z00zz__httpz00, BGl_string7255z00zz__httpz00, 
BINT(BgL_matchz00_5655)); } } } 
{ /* Unsafe/http.scm 545 */
obj_t BgL_arg3180z00_4381;
BgL_arg3180z00_4381 = 
MAKE_YOUNG_PAIR(BgL_kz00_4354, BgL_connectionz00_3845); 
BgL_headerz00_3838 = 
MAKE_YOUNG_PAIR(BgL_arg3180z00_4381, BgL_headerz00_3838); } 
goto BgL_zc3z04anonymousza33139ze3z87_4312;}  else 
{ /* Unsafe/http.scm 512 */
if(
(BgL_kz00_4354==BGl_keyword7372z00zz__httpz00))
{ /* Unsafe/http.scm 512 */
BgL_proxyzd2authoriza7ationz75_3844 = 
BGl_authzd2grammarze70z35zz__httpz00(BgL_iportz00_3836); 
BGl_crlfzd2grammarze70z35zz__httpz00(BgL_iportz00_3836); 
goto BgL_zc3z04anonymousza33139ze3z87_4312;}  else 
{ /* Unsafe/http.scm 512 */
if(
(BgL_kz00_4354==BGl_keyword7374z00zz__httpz00))
{ /* Unsafe/http.scm 553 */
obj_t BgL_ez00_4386;
BgL_ez00_4386 = 
BGl_valuezd2grammarze70z35zz__httpz00(BgL_iportz00_3836); 
if(
OUTPUT_PORTP(BgL_poz00_3837))
{ /* Unsafe/http.scm 559 */
bool_t BgL_test8292z00_19104;
{ /* Unsafe/http.scm 559 */
bool_t BgL_res6920z00_13475;
{ /* Unsafe/http.scm 559 */
long BgL_l1z00_13462;
BgL_l1z00_13462 = 
STRING_LENGTH(
((obj_t)BgL_ez00_4386)); 
if(
(BgL_l1z00_13462==((long)12)))
{ /* Unsafe/http.scm 559 */
int BgL_arg4983z00_13465;
{ /* Unsafe/http.scm 559 */
char * BgL_auxz00_19112;char * BgL_tmpz00_19109;
BgL_auxz00_19112 = 
BSTRING_TO_STRING(BGl_string7376z00zz__httpz00); 
BgL_tmpz00_19109 = 
BSTRING_TO_STRING(
((obj_t)BgL_ez00_4386)); 
BgL_arg4983z00_13465 = 
memcmp(BgL_tmpz00_19109, BgL_auxz00_19112, BgL_l1z00_13462); } 
BgL_res6920z00_13475 = 
(
(long)(BgL_arg4983z00_13465)==((long)0)); }  else 
{ /* Unsafe/http.scm 559 */
BgL_res6920z00_13475 = ((bool_t)0); } } 
BgL_test8292z00_19104 = BgL_res6920z00_13475; } 
if(BgL_test8292z00_19104)
{ /* Unsafe/http.scm 559 */
bgl_display_string(BGl_string7377z00zz__httpz00, BgL_poz00_3837); 
bgl_display_char(((unsigned char)10), BgL_poz00_3837); 
bgl_flush_output_port(BgL_poz00_3837); 
goto BgL_zc3z04anonymousza33139ze3z87_4312;}  else 
{ /* Unsafe/http.scm 559 */
bgl_display_string(BGl_string7378z00zz__httpz00, BgL_poz00_3837); 
bgl_display_char(((unsigned char)10), BgL_poz00_3837); 
bgl_flush_output_port(BgL_poz00_3837); 
{ /* Unsafe/http.scm 567 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_arg3187z00_4391;
{ /* Unsafe/http.scm 567 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1273z00_4392;
{ /* Unsafe/http.scm 567 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1272z00_4396;
BgL_new1272z00_4396 = 
((BgL_z62iozd2parsezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2parsezd2errorz62_bgl) ))); 
{ /* Unsafe/http.scm 567 */
long BgL_arg3191z00_4397;
{ /* Unsafe/http.scm 567 */
long BgL_res6921z00_13485;
BgL_res6921z00_13485 = 
BGL_CLASS_INDEX(BGl_z62iozd2parsezd2errorz62zz__objectz00); 
BgL_arg3191z00_4397 = BgL_res6921z00_13485; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1272z00_4396), BgL_arg3191z00_4397); } 
BgL_new1273z00_4392 = BgL_new1272z00_4396; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1273z00_4392)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1273z00_4392)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_19131;
{ /* Unsafe/http.scm 567 */
obj_t BgL_arg3188z00_4393;
{ /* Unsafe/http.scm 567 */
obj_t BgL_arg3189z00_4394;
{ /* Unsafe/http.scm 567 */
obj_t BgL_res6922z00_13489;
{ /* Unsafe/http.scm 567 */
obj_t BgL_classz00_13488;
BgL_classz00_13488 = BGl_z62iozd2parsezd2errorz62zz__objectz00; 
BgL_res6922z00_13489 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_13488); } 
BgL_arg3189z00_4394 = BgL_res6922z00_13489; } 
BgL_arg3188z00_4393 = 
VECTOR_REF(BgL_arg3189z00_4394,((long)2)); } 
BgL_auxz00_19131 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg3188z00_4393); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1273z00_4392)))->BgL_stackz00)=((obj_t)BgL_auxz00_19131),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1273z00_4392)))->BgL_procz00)=((obj_t)BGl_string7379z00zz__httpz00),BUNSPEC); 
{ 
obj_t BgL_auxz00_19139;
{ /* Unsafe/http.scm 570 */
obj_t BgL_list3190z00_4395;
BgL_list3190z00_4395 = 
MAKE_YOUNG_PAIR(BgL_ez00_4386, BNIL); 
BgL_auxz00_19139 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string7380z00zz__httpz00, BgL_list3190z00_4395); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1273z00_4392)))->BgL_msgz00)=((obj_t)BgL_auxz00_19139),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1273z00_4392)))->BgL_objz00)=((obj_t)BgL_iportz00_3836),BUNSPEC); 
BgL_arg3187z00_4391 = BgL_new1273z00_4392; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg3187z00_4391));} } }  else 
{ /* Unsafe/http.scm 555 */
return 
BGl_errorz00zz__errorz00(BGl_string7379z00zz__httpz00, BGl_string7381z00zz__httpz00, BgL_poz00_3837);} }  else 
{ /* Unsafe/http.scm 572 */
obj_t BgL_vz00_4399;
BgL_vz00_4399 = 
BGl_valuezd2grammarze70z35zz__httpz00(BgL_iportz00_3836); 
{ /* Unsafe/http.scm 573 */
obj_t BgL_arg3193z00_4400;
BgL_arg3193z00_4400 = 
MAKE_YOUNG_PAIR(BgL_kz00_4354, BgL_vz00_4399); 
BgL_headerz00_3838 = 
MAKE_YOUNG_PAIR(BgL_arg3193z00_4400, BgL_headerz00_3838); } 
goto BgL_zc3z04anonymousza33139ze3z87_4312;} } } } } } } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string7254z00zz__httpz00, BGl_string7255z00zz__httpz00, 
BINT(BgL_matchz00_4313));} } } } } } } } } } 

}



/* the-failure~0 */
obj_t BGl_thezd2failureze70z35zz__httpz00(obj_t BgL_iportz00_14463)
{
{ /* Unsafe/http.scm 506 */
{ /* Unsafe/http.scm 506 */
bool_t BgL_test8294z00_19155;
{ /* Unsafe/http.scm 506 */
long BgL_arg3133z00_4303;
{ /* Unsafe/http.scm 506 */
long BgL_res6881z00_13406;
BgL_res6881z00_13406 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_14463); 
BgL_arg3133z00_4303 = BgL_res6881z00_13406; } 
BgL_test8294z00_19155 = 
(BgL_arg3133z00_4303==((long)0)); } 
if(BgL_test8294z00_19155)
{ /* Unsafe/http.scm 506 */
return BEOF;}  else 
{ /* Unsafe/http.scm 506 */
unsigned char BgL_res6883z00_13410;
BgL_res6883z00_13410 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_14463); 
return 
BCHAR(BgL_res6883z00_13410);} } } 

}



/* value-grammar~0 */
obj_t BGl_valuezd2grammarze70z35zz__httpz00(obj_t BgL_iportz00_7131)
{
{ /* Unsafe/http.scm 428 */
{ 
obj_t BgL_iportz00_7171;long BgL_lastzd2matchzd2_7172;long BgL_forwardz00_7173;long BgL_bufposz00_7174;obj_t BgL_iportz00_7204;long BgL_lastzd2matchzd2_7205;long BgL_forwardz00_7206;long BgL_bufposz00_7207;obj_t BgL_iportz00_7219;long BgL_lastzd2matchzd2_7220;long BgL_forwardz00_7221;long BgL_bufposz00_7222;obj_t BgL_iportz00_7232;long BgL_lastzd2matchzd2_7233;long BgL_forwardz00_7234;long BgL_bufposz00_7235;obj_t BgL_iportz00_7248;long BgL_lastzd2matchzd2_7249;long BgL_forwardz00_7250;long BgL_bufposz00_7251;obj_t BgL_iportz00_7267;long BgL_lastzd2matchzd2_7268;long BgL_forwardz00_7269;long BgL_bufposz00_7270;obj_t BgL_iportz00_7288;long BgL_lastzd2matchzd2_7289;long BgL_forwardz00_7290;long BgL_bufposz00_7291;int BgL_minz00_7313;int BgL_maxz00_7314;
BgL_zc3z04anonymousza34645ze3z87_7419:
{ /* Unsafe/http.scm 428 */
long BgL_res6004z00_11103;
BgL_res6004z00_11103 = 
RGC_START_MATCH(BgL_iportz00_7131); BgL_res6004z00_11103; } 
{ /* Unsafe/http.scm 428 */
long BgL_matchz00_7420;
{ /* Unsafe/http.scm 428 */
long BgL_arg4647z00_7424;long BgL_arg4648z00_7425;
{ /* Unsafe/http.scm 428 */
long BgL_res6005z00_11105;
BgL_res6005z00_11105 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7131); 
BgL_arg4647z00_7424 = BgL_res6005z00_11105; } 
{ /* Unsafe/http.scm 428 */
long BgL_res6006z00_11107;
BgL_res6006z00_11107 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7131); 
BgL_arg4648z00_7425 = BgL_res6006z00_11107; } 
BgL_iportz00_7248 = BgL_iportz00_7131; 
BgL_lastzd2matchzd2_7249 = ((long)4); 
BgL_forwardz00_7250 = BgL_arg4647z00_7424; 
BgL_bufposz00_7251 = BgL_arg4648z00_7425; 
BgL_zc3z04anonymousza34528ze3z87_7252:
if(
(BgL_forwardz00_7250==BgL_bufposz00_7251))
{ /* Unsafe/http.scm 428 */
if(
rgc_fill_buffer(BgL_iportz00_7248))
{ /* Unsafe/http.scm 428 */
long BgL_arg4531z00_7255;long BgL_arg4532z00_7256;
{ /* Unsafe/http.scm 428 */
long BgL_res5959z00_10992;
BgL_res5959z00_10992 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7248); 
BgL_arg4531z00_7255 = BgL_res5959z00_10992; } 
{ /* Unsafe/http.scm 428 */
long BgL_res5960z00_10994;
BgL_res5960z00_10994 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7248); 
BgL_arg4532z00_7256 = BgL_res5960z00_10994; } 
{ 
long BgL_bufposz00_19170;long BgL_forwardz00_19169;
BgL_forwardz00_19169 = BgL_arg4531z00_7255; 
BgL_bufposz00_19170 = BgL_arg4532z00_7256; 
BgL_bufposz00_7251 = BgL_bufposz00_19170; 
BgL_forwardz00_7250 = BgL_forwardz00_19169; 
goto BgL_zc3z04anonymousza34528ze3z87_7252;} }  else 
{ /* Unsafe/http.scm 428 */
BgL_matchz00_7420 = BgL_lastzd2matchzd2_7249; } }  else 
{ /* Unsafe/http.scm 428 */
int BgL_curz00_7257;
{ /* Unsafe/http.scm 428 */
int BgL_res5961z00_10997;
BgL_res5961z00_10997 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7248, BgL_forwardz00_7250); 
BgL_curz00_7257 = BgL_res5961z00_10997; } 
{ /* Unsafe/http.scm 428 */

if(
(
(long)(BgL_curz00_7257)==((long)13)))
{ /* Unsafe/http.scm 428 */
BgL_iportz00_7219 = BgL_iportz00_7248; 
BgL_lastzd2matchzd2_7220 = BgL_lastzd2matchzd2_7249; 
BgL_forwardz00_7221 = 
(((long)1)+BgL_forwardz00_7250); 
BgL_bufposz00_7222 = BgL_bufposz00_7251; 
BgL_zc3z04anonymousza34511ze3z87_7223:
{ /* Unsafe/http.scm 428 */
long BgL_newzd2matchzd2_7224;
{ /* Unsafe/http.scm 428 */
long BgL_res5936z00_10936;
BgL_res5936z00_10936 = 
RGC_STOP_MATCH(BgL_iportz00_7219, BgL_forwardz00_7221); BgL_res5936z00_10936; } 
BgL_newzd2matchzd2_7224 = ((long)4); 
if(
(BgL_forwardz00_7221==BgL_bufposz00_7222))
{ /* Unsafe/http.scm 428 */
if(
rgc_fill_buffer(BgL_iportz00_7219))
{ /* Unsafe/http.scm 428 */
long BgL_arg4514z00_7227;long BgL_arg4515z00_7228;
{ /* Unsafe/http.scm 428 */
long BgL_res5939z00_10943;
BgL_res5939z00_10943 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7219); 
BgL_arg4514z00_7227 = BgL_res5939z00_10943; } 
{ /* Unsafe/http.scm 428 */
long BgL_res5940z00_10945;
BgL_res5940z00_10945 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7219); 
BgL_arg4515z00_7228 = BgL_res5940z00_10945; } 
{ 
long BgL_bufposz00_19183;long BgL_forwardz00_19182;
BgL_forwardz00_19182 = BgL_arg4514z00_7227; 
BgL_bufposz00_19183 = BgL_arg4515z00_7228; 
BgL_bufposz00_7222 = BgL_bufposz00_19183; 
BgL_forwardz00_7221 = BgL_forwardz00_19182; 
goto BgL_zc3z04anonymousza34511ze3z87_7223;} }  else 
{ /* Unsafe/http.scm 428 */
BgL_matchz00_7420 = BgL_newzd2matchzd2_7224; } }  else 
{ /* Unsafe/http.scm 428 */
int BgL_curz00_7229;
{ /* Unsafe/http.scm 428 */
int BgL_res5941z00_10948;
BgL_res5941z00_10948 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7219, BgL_forwardz00_7221); 
BgL_curz00_7229 = BgL_res5941z00_10948; } 
{ /* Unsafe/http.scm 428 */

if(
(
(long)(BgL_curz00_7229)==((long)10)))
{ /* Unsafe/http.scm 428 */
long BgL_arg4517z00_7231;
BgL_arg4517z00_7231 = 
(((long)1)+BgL_forwardz00_7221); 
{ /* Unsafe/http.scm 428 */
long BgL_newzd2matchzd2_10953;
{ /* Unsafe/http.scm 428 */
long BgL_res5944z00_10956;
BgL_res5944z00_10956 = 
RGC_STOP_MATCH(BgL_iportz00_7219, BgL_arg4517z00_7231); BgL_res5944z00_10956; } 
BgL_newzd2matchzd2_10953 = ((long)3); 
BgL_matchz00_7420 = BgL_newzd2matchzd2_10953; } }  else 
{ /* Unsafe/http.scm 428 */
BgL_matchz00_7420 = BgL_newzd2matchzd2_7224; } } } } }  else 
{ /* Unsafe/http.scm 428 */
if(
(
(long)(BgL_curz00_7257)==((long)10)))
{ /* Unsafe/http.scm 428 */
long BgL_arg4536z00_7261;
BgL_arg4536z00_7261 = 
(((long)1)+BgL_forwardz00_7250); 
{ /* Unsafe/http.scm 428 */
long BgL_newzd2matchzd2_11006;
{ /* Unsafe/http.scm 428 */
long BgL_res5966z00_11009;
BgL_res5966z00_11009 = 
RGC_STOP_MATCH(BgL_iportz00_7248, BgL_arg4536z00_7261); BgL_res5966z00_11009; } 
BgL_newzd2matchzd2_11006 = ((long)3); 
BgL_matchz00_7420 = BgL_newzd2matchzd2_11006; } }  else 
{ /* Unsafe/http.scm 428 */
bool_t BgL_test8302z00_19196;
if(
(
(long)(BgL_curz00_7257)==((long)9)))
{ /* Unsafe/http.scm 428 */
BgL_test8302z00_19196 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 428 */
BgL_test8302z00_19196 = 
(
(long)(BgL_curz00_7257)==((long)32))
; } 
if(BgL_test8302z00_19196)
{ /* Unsafe/http.scm 428 */
BgL_iportz00_7171 = BgL_iportz00_7248; 
BgL_lastzd2matchzd2_7172 = BgL_lastzd2matchzd2_7249; 
BgL_forwardz00_7173 = 
(((long)1)+BgL_forwardz00_7250); 
BgL_bufposz00_7174 = BgL_bufposz00_7251; 
BgL_zc3z04anonymousza34490ze3z87_7175:
{ /* Unsafe/http.scm 428 */
long BgL_newzd2matchzd2_7176;
{ /* Unsafe/http.scm 428 */
long BgL_res5913z00_10877;
BgL_res5913z00_10877 = 
RGC_STOP_MATCH(BgL_iportz00_7171, BgL_forwardz00_7173); BgL_res5913z00_10877; } 
BgL_newzd2matchzd2_7176 = ((long)0); 
if(
(BgL_forwardz00_7173==BgL_bufposz00_7174))
{ /* Unsafe/http.scm 428 */
if(
rgc_fill_buffer(BgL_iportz00_7171))
{ /* Unsafe/http.scm 428 */
long BgL_arg4493z00_7179;long BgL_arg4494z00_7180;
{ /* Unsafe/http.scm 428 */
long BgL_res5916z00_10884;
BgL_res5916z00_10884 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7171); 
BgL_arg4493z00_7179 = BgL_res5916z00_10884; } 
{ /* Unsafe/http.scm 428 */
long BgL_res5917z00_10886;
BgL_res5917z00_10886 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7171); 
BgL_arg4494z00_7180 = BgL_res5917z00_10886; } 
{ 
long BgL_bufposz00_19210;long BgL_forwardz00_19209;
BgL_forwardz00_19209 = BgL_arg4493z00_7179; 
BgL_bufposz00_19210 = BgL_arg4494z00_7180; 
BgL_bufposz00_7174 = BgL_bufposz00_19210; 
BgL_forwardz00_7173 = BgL_forwardz00_19209; 
goto BgL_zc3z04anonymousza34490ze3z87_7175;} }  else 
{ /* Unsafe/http.scm 428 */
BgL_matchz00_7420 = BgL_newzd2matchzd2_7176; } }  else 
{ /* Unsafe/http.scm 428 */
int BgL_curz00_7181;
{ /* Unsafe/http.scm 428 */
int BgL_res5918z00_10889;
BgL_res5918z00_10889 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7171, BgL_forwardz00_7173); 
BgL_curz00_7181 = BgL_res5918z00_10889; } 
{ /* Unsafe/http.scm 428 */

{ /* Unsafe/http.scm 428 */
bool_t BgL_test8306z00_19212;
if(
(
(long)(BgL_curz00_7181)==((long)9)))
{ /* Unsafe/http.scm 428 */
BgL_test8306z00_19212 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 428 */
BgL_test8306z00_19212 = 
(
(long)(BgL_curz00_7181)==((long)32))
; } 
if(BgL_test8306z00_19212)
{ /* Unsafe/http.scm 428 */
BgL_iportz00_7267 = BgL_iportz00_7171; 
BgL_lastzd2matchzd2_7268 = BgL_newzd2matchzd2_7176; 
BgL_forwardz00_7269 = 
(((long)1)+BgL_forwardz00_7173); 
BgL_bufposz00_7270 = BgL_bufposz00_7174; 
BgL_zc3z04anonymousza34541ze3z87_7271:
{ /* Unsafe/http.scm 428 */
long BgL_newzd2matchzd2_7272;
{ /* Unsafe/http.scm 428 */
long BgL_res5971z00_11020;
BgL_res5971z00_11020 = 
RGC_STOP_MATCH(BgL_iportz00_7267, BgL_forwardz00_7269); BgL_res5971z00_11020; } 
BgL_newzd2matchzd2_7272 = ((long)0); 
if(
(BgL_forwardz00_7269==BgL_bufposz00_7270))
{ /* Unsafe/http.scm 428 */
if(
rgc_fill_buffer(BgL_iportz00_7267))
{ /* Unsafe/http.scm 428 */
long BgL_arg4544z00_7275;long BgL_arg4545z00_7276;
{ /* Unsafe/http.scm 428 */
long BgL_res5974z00_11027;
BgL_res5974z00_11027 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7267); 
BgL_arg4544z00_7275 = BgL_res5974z00_11027; } 
{ /* Unsafe/http.scm 428 */
long BgL_res5975z00_11029;
BgL_res5975z00_11029 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7267); 
BgL_arg4545z00_7276 = BgL_res5975z00_11029; } 
{ 
long BgL_bufposz00_19226;long BgL_forwardz00_19225;
BgL_forwardz00_19225 = BgL_arg4544z00_7275; 
BgL_bufposz00_19226 = BgL_arg4545z00_7276; 
BgL_bufposz00_7270 = BgL_bufposz00_19226; 
BgL_forwardz00_7269 = BgL_forwardz00_19225; 
goto BgL_zc3z04anonymousza34541ze3z87_7271;} }  else 
{ /* Unsafe/http.scm 428 */
BgL_matchz00_7420 = BgL_newzd2matchzd2_7272; } }  else 
{ /* Unsafe/http.scm 428 */
int BgL_curz00_7277;
{ /* Unsafe/http.scm 428 */
int BgL_res5976z00_11032;
BgL_res5976z00_11032 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7267, BgL_forwardz00_7269); 
BgL_curz00_7277 = BgL_res5976z00_11032; } 
{ /* Unsafe/http.scm 428 */

{ /* Unsafe/http.scm 428 */
bool_t BgL_test8310z00_19228;
if(
(
(long)(BgL_curz00_7277)==((long)9)))
{ /* Unsafe/http.scm 428 */
BgL_test8310z00_19228 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 428 */
BgL_test8310z00_19228 = 
(
(long)(BgL_curz00_7277)==((long)32))
; } 
if(BgL_test8310z00_19228)
{ 
long BgL_forwardz00_19235;long BgL_lastzd2matchzd2_19234;
BgL_lastzd2matchzd2_19234 = BgL_newzd2matchzd2_7272; 
BgL_forwardz00_19235 = 
(((long)1)+BgL_forwardz00_7269); 
BgL_forwardz00_7269 = BgL_forwardz00_19235; 
BgL_lastzd2matchzd2_7268 = BgL_lastzd2matchzd2_19234; 
goto BgL_zc3z04anonymousza34541ze3z87_7271;}  else 
{ /* Unsafe/http.scm 428 */
BgL_matchz00_7420 = BgL_newzd2matchzd2_7272; } } } } } }  else 
{ /* Unsafe/http.scm 428 */
BgL_matchz00_7420 = BgL_newzd2matchzd2_7176; } } } } } }  else 
{ /* Unsafe/http.scm 428 */
BgL_iportz00_7232 = BgL_iportz00_7248; 
BgL_lastzd2matchzd2_7233 = BgL_lastzd2matchzd2_7249; 
BgL_forwardz00_7234 = 
(((long)1)+BgL_forwardz00_7250); 
BgL_bufposz00_7235 = BgL_bufposz00_7251; 
BgL_zc3z04anonymousza34518ze3z87_7236:
{ /* Unsafe/http.scm 428 */
long BgL_newzd2matchzd2_7237;
{ /* Unsafe/http.scm 428 */
long BgL_res5945z00_10959;
BgL_res5945z00_10959 = 
RGC_STOP_MATCH(BgL_iportz00_7232, BgL_forwardz00_7234); BgL_res5945z00_10959; } 
BgL_newzd2matchzd2_7237 = ((long)4); 
if(
(BgL_forwardz00_7234==BgL_bufposz00_7235))
{ /* Unsafe/http.scm 428 */
if(
rgc_fill_buffer(BgL_iportz00_7232))
{ /* Unsafe/http.scm 428 */
long BgL_arg4521z00_7240;long BgL_arg4522z00_7241;
{ /* Unsafe/http.scm 428 */
long BgL_res5948z00_10966;
BgL_res5948z00_10966 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7232); 
BgL_arg4521z00_7240 = BgL_res5948z00_10966; } 
{ /* Unsafe/http.scm 428 */
long BgL_res5949z00_10968;
BgL_res5949z00_10968 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7232); 
BgL_arg4522z00_7241 = BgL_res5949z00_10968; } 
{ 
long BgL_bufposz00_19247;long BgL_forwardz00_19246;
BgL_forwardz00_19246 = BgL_arg4521z00_7240; 
BgL_bufposz00_19247 = BgL_arg4522z00_7241; 
BgL_bufposz00_7235 = BgL_bufposz00_19247; 
BgL_forwardz00_7234 = BgL_forwardz00_19246; 
goto BgL_zc3z04anonymousza34518ze3z87_7236;} }  else 
{ /* Unsafe/http.scm 428 */
BgL_matchz00_7420 = BgL_newzd2matchzd2_7237; } }  else 
{ /* Unsafe/http.scm 428 */
int BgL_curz00_7242;
{ /* Unsafe/http.scm 428 */
int BgL_res5950z00_10971;
BgL_res5950z00_10971 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7232, BgL_forwardz00_7234); 
BgL_curz00_7242 = BgL_res5950z00_10971; } 
{ /* Unsafe/http.scm 428 */

if(
(
(long)(BgL_curz00_7242)==((long)13)))
{ /* Unsafe/http.scm 428 */
BgL_iportz00_7288 = BgL_iportz00_7232; 
BgL_lastzd2matchzd2_7289 = BgL_newzd2matchzd2_7237; 
BgL_forwardz00_7290 = 
(((long)1)+BgL_forwardz00_7234); 
BgL_bufposz00_7291 = BgL_bufposz00_7235; 
BgL_zc3z04anonymousza34550ze3z87_7292:
if(
(BgL_forwardz00_7290==BgL_bufposz00_7291))
{ /* Unsafe/http.scm 428 */
if(
rgc_fill_buffer(BgL_iportz00_7288))
{ /* Unsafe/http.scm 428 */
long BgL_arg4553z00_7295;long BgL_arg4554z00_7296;
{ /* Unsafe/http.scm 428 */
long BgL_res5983z00_11049;
BgL_res5983z00_11049 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7288); 
BgL_arg4553z00_7295 = BgL_res5983z00_11049; } 
{ /* Unsafe/http.scm 428 */
long BgL_res5984z00_11051;
BgL_res5984z00_11051 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7288); 
BgL_arg4554z00_7296 = BgL_res5984z00_11051; } 
{ 
long BgL_bufposz00_19259;long BgL_forwardz00_19258;
BgL_forwardz00_19258 = BgL_arg4553z00_7295; 
BgL_bufposz00_19259 = BgL_arg4554z00_7296; 
BgL_bufposz00_7291 = BgL_bufposz00_19259; 
BgL_forwardz00_7290 = BgL_forwardz00_19258; 
goto BgL_zc3z04anonymousza34550ze3z87_7292;} }  else 
{ /* Unsafe/http.scm 428 */
BgL_matchz00_7420 = BgL_lastzd2matchzd2_7289; } }  else 
{ /* Unsafe/http.scm 428 */
int BgL_curz00_7297;
{ /* Unsafe/http.scm 428 */
int BgL_res5985z00_11054;
BgL_res5985z00_11054 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7288, BgL_forwardz00_7290); 
BgL_curz00_7297 = BgL_res5985z00_11054; } 
{ /* Unsafe/http.scm 428 */

if(
(
(long)(BgL_curz00_7297)==((long)10)))
{ /* Unsafe/http.scm 428 */
long BgL_arg4557z00_7299;
BgL_arg4557z00_7299 = 
(((long)1)+BgL_forwardz00_7290); 
{ /* Unsafe/http.scm 428 */
long BgL_newzd2matchzd2_11059;
{ /* Unsafe/http.scm 428 */
long BgL_res5988z00_11062;
BgL_res5988z00_11062 = 
RGC_STOP_MATCH(BgL_iportz00_7288, BgL_arg4557z00_7299); BgL_res5988z00_11062; } 
BgL_newzd2matchzd2_11059 = ((long)1); 
BgL_matchz00_7420 = BgL_newzd2matchzd2_11059; } }  else 
{ /* Unsafe/http.scm 428 */
BgL_iportz00_7204 = BgL_iportz00_7288; 
BgL_lastzd2matchzd2_7205 = BgL_lastzd2matchzd2_7289; 
BgL_forwardz00_7206 = 
(((long)1)+BgL_forwardz00_7290); 
BgL_bufposz00_7207 = BgL_bufposz00_7291; 
BgL_zc3z04anonymousza34501ze3z87_7208:
if(
(BgL_forwardz00_7206==BgL_bufposz00_7207))
{ /* Unsafe/http.scm 428 */
if(
rgc_fill_buffer(BgL_iportz00_7204))
{ /* Unsafe/http.scm 428 */
long BgL_arg4504z00_7211;long BgL_arg4505z00_7212;
{ /* Unsafe/http.scm 428 */
long BgL_res5927z00_10914;
BgL_res5927z00_10914 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7204); 
BgL_arg4504z00_7211 = BgL_res5927z00_10914; } 
{ /* Unsafe/http.scm 428 */
long BgL_res5928z00_10916;
BgL_res5928z00_10916 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7204); 
BgL_arg4505z00_7212 = BgL_res5928z00_10916; } 
{ 
long BgL_bufposz00_19273;long BgL_forwardz00_19272;
BgL_forwardz00_19272 = BgL_arg4504z00_7211; 
BgL_bufposz00_19273 = BgL_arg4505z00_7212; 
BgL_bufposz00_7207 = BgL_bufposz00_19273; 
BgL_forwardz00_7206 = BgL_forwardz00_19272; 
goto BgL_zc3z04anonymousza34501ze3z87_7208;} }  else 
{ /* Unsafe/http.scm 428 */
BgL_matchz00_7420 = BgL_lastzd2matchzd2_7205; } }  else 
{ /* Unsafe/http.scm 428 */
int BgL_curz00_7213;
{ /* Unsafe/http.scm 428 */
int BgL_res5929z00_10919;
BgL_res5929z00_10919 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7204, BgL_forwardz00_7206); 
BgL_curz00_7213 = BgL_res5929z00_10919; } 
{ /* Unsafe/http.scm 428 */

if(
(
(long)(BgL_curz00_7213)==((long)13)))
{ 
long BgL_bufposz00_19282;long BgL_forwardz00_19280;long BgL_lastzd2matchzd2_19279;obj_t BgL_iportz00_19278;
BgL_iportz00_19278 = BgL_iportz00_7204; 
BgL_lastzd2matchzd2_19279 = BgL_lastzd2matchzd2_7205; 
BgL_forwardz00_19280 = 
(((long)1)+BgL_forwardz00_7206); 
BgL_bufposz00_19282 = BgL_bufposz00_7207; 
BgL_bufposz00_7291 = BgL_bufposz00_19282; 
BgL_forwardz00_7290 = BgL_forwardz00_19280; 
BgL_lastzd2matchzd2_7289 = BgL_lastzd2matchzd2_19279; 
BgL_iportz00_7288 = BgL_iportz00_19278; 
goto BgL_zc3z04anonymousza34550ze3z87_7292;}  else 
{ /* Unsafe/http.scm 428 */
if(
(
(long)(BgL_curz00_7213)==((long)10)))
{ /* Unsafe/http.scm 428 */
long BgL_arg4509z00_7217;
BgL_arg4509z00_7217 = 
(((long)1)+BgL_forwardz00_7206); 
{ /* Unsafe/http.scm 428 */
long BgL_newzd2matchzd2_10928;
{ /* Unsafe/http.scm 428 */
long BgL_res5934z00_10931;
BgL_res5934z00_10931 = 
RGC_STOP_MATCH(BgL_iportz00_7204, BgL_arg4509z00_7217); BgL_res5934z00_10931; } 
BgL_newzd2matchzd2_10928 = ((long)2); 
BgL_matchz00_7420 = BgL_newzd2matchzd2_10928; } }  else 
{ 
long BgL_forwardz00_19288;
BgL_forwardz00_19288 = 
(((long)1)+BgL_forwardz00_7206); 
BgL_forwardz00_7206 = BgL_forwardz00_19288; 
goto BgL_zc3z04anonymousza34501ze3z87_7208;} } } } } } } }  else 
{ /* Unsafe/http.scm 428 */
if(
(
(long)(BgL_curz00_7242)==((long)10)))
{ /* Unsafe/http.scm 428 */
long BgL_arg4526z00_7246;
BgL_arg4526z00_7246 = 
(((long)1)+BgL_forwardz00_7234); 
{ /* Unsafe/http.scm 428 */
long BgL_newzd2matchzd2_10980;
{ /* Unsafe/http.scm 428 */
long BgL_res5955z00_10983;
BgL_res5955z00_10983 = 
RGC_STOP_MATCH(BgL_iportz00_7232, BgL_arg4526z00_7246); BgL_res5955z00_10983; } 
BgL_newzd2matchzd2_10980 = ((long)2); 
BgL_matchz00_7420 = BgL_newzd2matchzd2_10980; } }  else 
{ 
long BgL_bufposz00_19301;long BgL_forwardz00_19299;long BgL_lastzd2matchzd2_19298;obj_t BgL_iportz00_19297;
BgL_iportz00_19297 = BgL_iportz00_7232; 
BgL_lastzd2matchzd2_19298 = BgL_newzd2matchzd2_7237; 
BgL_forwardz00_19299 = 
(((long)1)+BgL_forwardz00_7234); 
BgL_bufposz00_19301 = BgL_bufposz00_7235; 
BgL_bufposz00_7207 = BgL_bufposz00_19301; 
BgL_forwardz00_7206 = BgL_forwardz00_19299; 
BgL_lastzd2matchzd2_7205 = BgL_lastzd2matchzd2_19298; 
BgL_iportz00_7204 = BgL_iportz00_19297; 
goto BgL_zc3z04anonymousza34501ze3z87_7208;} } } } } } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_7131); 
switch( BgL_matchz00_7420) { case ((long)4) : 

return BGl_string7355z00zz__httpz00;break;case ((long)3) : 

return BGl_string7355z00zz__httpz00;break;case ((long)2) : 

BgL_minz00_7313 = 
(int)(((long)0)); 
BgL_maxz00_7314 = 
(int)(((long)-1)); 
BgL_lambda4566z00_7315:
if(
(
(long)(BgL_maxz00_7314)<
(long)(BgL_minz00_7313)))
{ /* Unsafe/http.scm 428 */
long BgL_arg4568z00_7317;
{ /* Unsafe/http.scm 428 */
long BgL_res5993z00_11075;
BgL_res5993z00_11075 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_7131); 
BgL_arg4568z00_7317 = BgL_res5993z00_11075; } 
{ /* Unsafe/http.scm 428 */
long BgL_za72za7_11077;
BgL_za72za7_11077 = 
(long)(BgL_maxz00_7314); 
BgL_maxz00_7314 = 
(int)(
(BgL_arg4568z00_7317+BgL_za72za7_11077)); } }  else 
{ /* Unsafe/http.scm 428 */BFALSE; } 
{ /* Unsafe/http.scm 428 */
bool_t BgL_test8324z00_19312;
if(
(
(long)(BgL_minz00_7313)>=((long)0)))
{ /* Unsafe/http.scm 428 */
if(
(
(long)(BgL_maxz00_7314)>=
(long)(BgL_minz00_7313)))
{ /* Unsafe/http.scm 428 */
long BgL_arg4577z00_7328;
{ /* Unsafe/http.scm 428 */
long BgL_res5997z00_11085;
BgL_res5997z00_11085 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_7131); 
BgL_arg4577z00_7328 = BgL_res5997z00_11085; } 
BgL_test8324z00_19312 = 
(
(long)(BgL_maxz00_7314)<=BgL_arg4577z00_7328); }  else 
{ /* Unsafe/http.scm 428 */
BgL_test8324z00_19312 = ((bool_t)0)
; } }  else 
{ /* Unsafe/http.scm 428 */
BgL_test8324z00_19312 = ((bool_t)0)
; } 
if(BgL_test8324z00_19312)
{ /* Unsafe/http.scm 428 */
return 
rgc_buffer_substring(BgL_iportz00_7131, 
(long)(BgL_minz00_7313), 
(long)(BgL_maxz00_7314));}  else 
{ /* Unsafe/http.scm 428 */
obj_t BgL_arg4573z00_7322;obj_t BgL_arg4574z00_7323;
{ /* Unsafe/http.scm 428 */
obj_t BgL_arg4575z00_7324;
{ /* Unsafe/http.scm 428 */
obj_t BgL_res6002z00_11099;
{ /* Unsafe/http.scm 428 */
long BgL_arg4565z00_11093;
{ /* Unsafe/http.scm 428 */
long BgL_res6000z00_11095;
BgL_res6000z00_11095 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_7131); 
BgL_arg4565z00_11093 = BgL_res6000z00_11095; } 
BgL_res6002z00_11099 = 
rgc_buffer_substring(BgL_iportz00_7131, ((long)0), BgL_arg4565z00_11093); } 
BgL_arg4575z00_7324 = BgL_res6002z00_11099; } 
{ /* Unsafe/http.scm 428 */
obj_t BgL_list4576z00_7325;
BgL_list4576z00_7325 = 
MAKE_YOUNG_PAIR(BgL_arg4575z00_7324, BNIL); 
BgL_arg4573z00_7322 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string7257z00zz__httpz00, BgL_list4576z00_7325); } } 
BgL_arg4574z00_7323 = 
MAKE_YOUNG_PAIR(
BINT(BgL_minz00_7313), 
BINT(BgL_maxz00_7314)); 
return 
BGl_errorz00zz__errorz00(BGl_string7258z00zz__httpz00, BgL_arg4573z00_7322, BgL_arg4574z00_7323);} } break;case ((long)1) : 

{ 
int BgL_maxz00_19338;int BgL_minz00_19336;
BgL_minz00_19336 = 
(int)(((long)0)); 
BgL_maxz00_19338 = 
(int)(((long)-2)); 
BgL_maxz00_7314 = BgL_maxz00_19338; 
BgL_minz00_7313 = BgL_minz00_19336; 
goto BgL_lambda4566z00_7315;} break;case ((long)0) : 

goto BgL_zc3z04anonymousza34645ze3z87_7419;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string7254z00zz__httpz00, BGl_string7255z00zz__httpz00, 
BINT(BgL_matchz00_7420));} } } } 

}



/* auth-grammar~0 */
obj_t BGl_authzd2grammarze70z35zz__httpz00(obj_t BgL_iportz00_5028)
{
{ /* Unsafe/http.scm 483 */
{ 
obj_t BgL_iportz00_5062;long BgL_lastzd2matchzd2_5063;long BgL_forwardz00_5064;long BgL_bufposz00_5065;obj_t BgL_iportz00_5077;long BgL_lastzd2matchzd2_5078;long BgL_forwardz00_5079;long BgL_bufposz00_5080;obj_t BgL_iportz00_5092;long BgL_lastzd2matchzd2_5093;long BgL_forwardz00_5094;long BgL_bufposz00_5095;obj_t BgL_iportz00_5107;long BgL_lastzd2matchzd2_5108;long BgL_forwardz00_5109;long BgL_bufposz00_5110;obj_t BgL_iportz00_5122;long BgL_lastzd2matchzd2_5123;long BgL_forwardz00_5124;long BgL_bufposz00_5125;
BgL_zc3z04anonymousza33607ze3z87_5255:
{ /* Unsafe/http.scm 483 */
long BgL_res6441z00_12185;
BgL_res6441z00_12185 = 
RGC_START_MATCH(BgL_iportz00_5028); BgL_res6441z00_12185; } 
{ /* Unsafe/http.scm 483 */
long BgL_matchz00_5256;
{ /* Unsafe/http.scm 483 */
long BgL_arg3609z00_5260;long BgL_arg3610z00_5261;
{ /* Unsafe/http.scm 483 */
long BgL_res6442z00_12187;
BgL_res6442z00_12187 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5028); 
BgL_arg3609z00_5260 = BgL_res6442z00_12187; } 
{ /* Unsafe/http.scm 483 */
long BgL_res6443z00_12189;
BgL_res6443z00_12189 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5028); 
BgL_arg3610z00_5261 = BgL_res6443z00_12189; } 
BgL_iportz00_5122 = BgL_iportz00_5028; 
BgL_lastzd2matchzd2_5123 = ((long)2); 
BgL_forwardz00_5124 = BgL_arg3609z00_5260; 
BgL_bufposz00_5125 = BgL_arg3610z00_5261; 
BgL_zc3z04anonymousza33512ze3z87_5126:
if(
(BgL_forwardz00_5124==BgL_bufposz00_5125))
{ /* Unsafe/http.scm 483 */
if(
rgc_fill_buffer(BgL_iportz00_5122))
{ /* Unsafe/http.scm 483 */
long BgL_arg3515z00_5129;long BgL_arg3516z00_5130;
{ /* Unsafe/http.scm 483 */
long BgL_res6431z00_12162;
BgL_res6431z00_12162 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5122); 
BgL_arg3515z00_5129 = BgL_res6431z00_12162; } 
{ /* Unsafe/http.scm 483 */
long BgL_res6432z00_12164;
BgL_res6432z00_12164 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5122); 
BgL_arg3516z00_5130 = BgL_res6432z00_12164; } 
{ 
long BgL_bufposz00_19353;long BgL_forwardz00_19352;
BgL_forwardz00_19352 = BgL_arg3515z00_5129; 
BgL_bufposz00_19353 = BgL_arg3516z00_5130; 
BgL_bufposz00_5125 = BgL_bufposz00_19353; 
BgL_forwardz00_5124 = BgL_forwardz00_19352; 
goto BgL_zc3z04anonymousza33512ze3z87_5126;} }  else 
{ /* Unsafe/http.scm 483 */
BgL_matchz00_5256 = BgL_lastzd2matchzd2_5123; } }  else 
{ /* Unsafe/http.scm 483 */
int BgL_curz00_5131;
{ /* Unsafe/http.scm 483 */
int BgL_res6433z00_12167;
BgL_res6433z00_12167 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5122, BgL_forwardz00_5124); 
BgL_curz00_5131 = BgL_res6433z00_12167; } 
{ /* Unsafe/http.scm 483 */

{ /* Unsafe/http.scm 483 */
bool_t BgL_test8329z00_19355;
if(
(
(long)(BgL_curz00_5131)==((long)9)))
{ /* Unsafe/http.scm 483 */
BgL_test8329z00_19355 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 483 */
BgL_test8329z00_19355 = 
(
(long)(BgL_curz00_5131)==((long)32))
; } 
if(BgL_test8329z00_19355)
{ /* Unsafe/http.scm 483 */
BgL_iportz00_5077 = BgL_iportz00_5122; 
BgL_lastzd2matchzd2_5078 = BgL_lastzd2matchzd2_5123; 
BgL_forwardz00_5079 = 
(((long)1)+BgL_forwardz00_5124); 
BgL_bufposz00_5080 = BgL_bufposz00_5125; 
BgL_zc3z04anonymousza33488ze3z87_5081:
{ /* Unsafe/http.scm 483 */
long BgL_newzd2matchzd2_5082;
{ /* Unsafe/http.scm 483 */
long BgL_res6402z00_12095;
BgL_res6402z00_12095 = 
RGC_STOP_MATCH(BgL_iportz00_5077, BgL_forwardz00_5079); BgL_res6402z00_12095; } 
BgL_newzd2matchzd2_5082 = ((long)0); 
if(
(BgL_forwardz00_5079==BgL_bufposz00_5080))
{ /* Unsafe/http.scm 483 */
if(
rgc_fill_buffer(BgL_iportz00_5077))
{ /* Unsafe/http.scm 483 */
long BgL_arg3491z00_5085;long BgL_arg3492z00_5086;
{ /* Unsafe/http.scm 483 */
long BgL_res6405z00_12102;
BgL_res6405z00_12102 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5077); 
BgL_arg3491z00_5085 = BgL_res6405z00_12102; } 
{ /* Unsafe/http.scm 483 */
long BgL_res6406z00_12104;
BgL_res6406z00_12104 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5077); 
BgL_arg3492z00_5086 = BgL_res6406z00_12104; } 
{ 
long BgL_bufposz00_19369;long BgL_forwardz00_19368;
BgL_forwardz00_19368 = BgL_arg3491z00_5085; 
BgL_bufposz00_19369 = BgL_arg3492z00_5086; 
BgL_bufposz00_5080 = BgL_bufposz00_19369; 
BgL_forwardz00_5079 = BgL_forwardz00_19368; 
goto BgL_zc3z04anonymousza33488ze3z87_5081;} }  else 
{ /* Unsafe/http.scm 483 */
BgL_matchz00_5256 = BgL_newzd2matchzd2_5082; } }  else 
{ /* Unsafe/http.scm 483 */
int BgL_curz00_5087;
{ /* Unsafe/http.scm 483 */
int BgL_res6407z00_12107;
BgL_res6407z00_12107 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5077, BgL_forwardz00_5079); 
BgL_curz00_5087 = BgL_res6407z00_12107; } 
{ /* Unsafe/http.scm 483 */

{ /* Unsafe/http.scm 483 */
bool_t BgL_test8333z00_19371;
if(
(
(long)(BgL_curz00_5087)==((long)9)))
{ /* Unsafe/http.scm 483 */
BgL_test8333z00_19371 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 483 */
BgL_test8333z00_19371 = 
(
(long)(BgL_curz00_5087)==((long)32))
; } 
if(BgL_test8333z00_19371)
{ /* Unsafe/http.scm 483 */
BgL_iportz00_5107 = BgL_iportz00_5077; 
BgL_lastzd2matchzd2_5108 = BgL_newzd2matchzd2_5082; 
BgL_forwardz00_5109 = 
(((long)1)+BgL_forwardz00_5079); 
BgL_bufposz00_5110 = BgL_bufposz00_5080; 
BgL_zc3z04anonymousza33504ze3z87_5111:
{ /* Unsafe/http.scm 483 */
long BgL_newzd2matchzd2_5112;
{ /* Unsafe/http.scm 483 */
long BgL_res6420z00_12137;
BgL_res6420z00_12137 = 
RGC_STOP_MATCH(BgL_iportz00_5107, BgL_forwardz00_5109); BgL_res6420z00_12137; } 
BgL_newzd2matchzd2_5112 = ((long)0); 
if(
(BgL_forwardz00_5109==BgL_bufposz00_5110))
{ /* Unsafe/http.scm 483 */
if(
rgc_fill_buffer(BgL_iportz00_5107))
{ /* Unsafe/http.scm 483 */
long BgL_arg3507z00_5115;long BgL_arg3508z00_5116;
{ /* Unsafe/http.scm 483 */
long BgL_res6423z00_12144;
BgL_res6423z00_12144 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5107); 
BgL_arg3507z00_5115 = BgL_res6423z00_12144; } 
{ /* Unsafe/http.scm 483 */
long BgL_res6424z00_12146;
BgL_res6424z00_12146 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5107); 
BgL_arg3508z00_5116 = BgL_res6424z00_12146; } 
{ 
long BgL_bufposz00_19385;long BgL_forwardz00_19384;
BgL_forwardz00_19384 = BgL_arg3507z00_5115; 
BgL_bufposz00_19385 = BgL_arg3508z00_5116; 
BgL_bufposz00_5110 = BgL_bufposz00_19385; 
BgL_forwardz00_5109 = BgL_forwardz00_19384; 
goto BgL_zc3z04anonymousza33504ze3z87_5111;} }  else 
{ /* Unsafe/http.scm 483 */
BgL_matchz00_5256 = BgL_newzd2matchzd2_5112; } }  else 
{ /* Unsafe/http.scm 483 */
int BgL_curz00_5117;
{ /* Unsafe/http.scm 483 */
int BgL_res6425z00_12149;
BgL_res6425z00_12149 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5107, BgL_forwardz00_5109); 
BgL_curz00_5117 = BgL_res6425z00_12149; } 
{ /* Unsafe/http.scm 483 */

{ /* Unsafe/http.scm 483 */
bool_t BgL_test8337z00_19387;
if(
(
(long)(BgL_curz00_5117)==((long)9)))
{ /* Unsafe/http.scm 483 */
BgL_test8337z00_19387 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 483 */
BgL_test8337z00_19387 = 
(
(long)(BgL_curz00_5117)==((long)32))
; } 
if(BgL_test8337z00_19387)
{ 
long BgL_forwardz00_19394;long BgL_lastzd2matchzd2_19393;
BgL_lastzd2matchzd2_19393 = BgL_newzd2matchzd2_5112; 
BgL_forwardz00_19394 = 
(((long)1)+BgL_forwardz00_5109); 
BgL_forwardz00_5109 = BgL_forwardz00_19394; 
BgL_lastzd2matchzd2_5108 = BgL_lastzd2matchzd2_19393; 
goto BgL_zc3z04anonymousza33504ze3z87_5111;}  else 
{ /* Unsafe/http.scm 483 */
BgL_matchz00_5256 = BgL_newzd2matchzd2_5112; } } } } } }  else 
{ /* Unsafe/http.scm 483 */
BgL_matchz00_5256 = BgL_newzd2matchzd2_5082; } } } } } }  else 
{ /* Unsafe/http.scm 483 */
BgL_iportz00_5092 = BgL_iportz00_5122; 
BgL_lastzd2matchzd2_5093 = BgL_lastzd2matchzd2_5123; 
BgL_forwardz00_5094 = 
(((long)1)+BgL_forwardz00_5124); 
BgL_bufposz00_5095 = BgL_bufposz00_5125; 
BgL_zc3z04anonymousza33496ze3z87_5096:
{ /* Unsafe/http.scm 483 */
long BgL_newzd2matchzd2_5097;
{ /* Unsafe/http.scm 483 */
long BgL_res6411z00_12116;
BgL_res6411z00_12116 = 
RGC_STOP_MATCH(BgL_iportz00_5092, BgL_forwardz00_5094); BgL_res6411z00_12116; } 
BgL_newzd2matchzd2_5097 = ((long)1); 
if(
(BgL_forwardz00_5094==BgL_bufposz00_5095))
{ /* Unsafe/http.scm 483 */
if(
rgc_fill_buffer(BgL_iportz00_5092))
{ /* Unsafe/http.scm 483 */
long BgL_arg3499z00_5100;long BgL_arg3500z00_5101;
{ /* Unsafe/http.scm 483 */
long BgL_res6414z00_12123;
BgL_res6414z00_12123 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5092); 
BgL_arg3499z00_5100 = BgL_res6414z00_12123; } 
{ /* Unsafe/http.scm 483 */
long BgL_res6415z00_12125;
BgL_res6415z00_12125 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5092); 
BgL_arg3500z00_5101 = BgL_res6415z00_12125; } 
{ 
long BgL_bufposz00_19406;long BgL_forwardz00_19405;
BgL_forwardz00_19405 = BgL_arg3499z00_5100; 
BgL_bufposz00_19406 = BgL_arg3500z00_5101; 
BgL_bufposz00_5095 = BgL_bufposz00_19406; 
BgL_forwardz00_5094 = BgL_forwardz00_19405; 
goto BgL_zc3z04anonymousza33496ze3z87_5096;} }  else 
{ /* Unsafe/http.scm 483 */
BgL_matchz00_5256 = BgL_newzd2matchzd2_5097; } }  else 
{ /* Unsafe/http.scm 483 */
int BgL_curz00_5102;
{ /* Unsafe/http.scm 483 */
int BgL_res6416z00_12128;
BgL_res6416z00_12128 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5092, BgL_forwardz00_5094); 
BgL_curz00_5102 = BgL_res6416z00_12128; } 
{ /* Unsafe/http.scm 483 */

{ /* Unsafe/http.scm 483 */
bool_t BgL_test8341z00_19408;
if(
(
(long)(BgL_curz00_5102)==((long)10)))
{ /* Unsafe/http.scm 483 */
BgL_test8341z00_19408 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 483 */
BgL_test8341z00_19408 = 
(
(long)(BgL_curz00_5102)==((long)13))
; } 
if(BgL_test8341z00_19408)
{ /* Unsafe/http.scm 483 */
BgL_matchz00_5256 = BgL_newzd2matchzd2_5097; }  else 
{ /* Unsafe/http.scm 483 */
BgL_iportz00_5062 = BgL_iportz00_5092; 
BgL_lastzd2matchzd2_5063 = BgL_newzd2matchzd2_5097; 
BgL_forwardz00_5064 = 
(((long)1)+BgL_forwardz00_5094); 
BgL_bufposz00_5065 = BgL_bufposz00_5095; 
BgL_zc3z04anonymousza33480ze3z87_5066:
{ /* Unsafe/http.scm 483 */
long BgL_newzd2matchzd2_5067;
{ /* Unsafe/http.scm 483 */
long BgL_res6393z00_12074;
BgL_res6393z00_12074 = 
RGC_STOP_MATCH(BgL_iportz00_5062, BgL_forwardz00_5064); BgL_res6393z00_12074; } 
BgL_newzd2matchzd2_5067 = ((long)1); 
if(
(BgL_forwardz00_5064==BgL_bufposz00_5065))
{ /* Unsafe/http.scm 483 */
if(
rgc_fill_buffer(BgL_iportz00_5062))
{ /* Unsafe/http.scm 483 */
long BgL_arg3483z00_5070;long BgL_arg3484z00_5071;
{ /* Unsafe/http.scm 483 */
long BgL_res6396z00_12081;
BgL_res6396z00_12081 = 
RGC_BUFFER_FORWARD(BgL_iportz00_5062); 
BgL_arg3483z00_5070 = BgL_res6396z00_12081; } 
{ /* Unsafe/http.scm 483 */
long BgL_res6397z00_12083;
BgL_res6397z00_12083 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_5062); 
BgL_arg3484z00_5071 = BgL_res6397z00_12083; } 
{ 
long BgL_bufposz00_19422;long BgL_forwardz00_19421;
BgL_forwardz00_19421 = BgL_arg3483z00_5070; 
BgL_bufposz00_19422 = BgL_arg3484z00_5071; 
BgL_bufposz00_5065 = BgL_bufposz00_19422; 
BgL_forwardz00_5064 = BgL_forwardz00_19421; 
goto BgL_zc3z04anonymousza33480ze3z87_5066;} }  else 
{ /* Unsafe/http.scm 483 */
BgL_matchz00_5256 = BgL_newzd2matchzd2_5067; } }  else 
{ /* Unsafe/http.scm 483 */
int BgL_curz00_5072;
{ /* Unsafe/http.scm 483 */
int BgL_res6398z00_12086;
BgL_res6398z00_12086 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_5062, BgL_forwardz00_5064); 
BgL_curz00_5072 = BgL_res6398z00_12086; } 
{ /* Unsafe/http.scm 483 */

{ /* Unsafe/http.scm 483 */
bool_t BgL_test8345z00_19424;
if(
(
(long)(BgL_curz00_5072)==((long)10)))
{ /* Unsafe/http.scm 483 */
BgL_test8345z00_19424 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 483 */
BgL_test8345z00_19424 = 
(
(long)(BgL_curz00_5072)==((long)13))
; } 
if(BgL_test8345z00_19424)
{ /* Unsafe/http.scm 483 */
BgL_matchz00_5256 = BgL_newzd2matchzd2_5067; }  else 
{ 
long BgL_forwardz00_19431;long BgL_lastzd2matchzd2_19430;
BgL_lastzd2matchzd2_19430 = BgL_newzd2matchzd2_5067; 
BgL_forwardz00_19431 = 
(((long)1)+BgL_forwardz00_5064); 
BgL_forwardz00_5064 = BgL_forwardz00_19431; 
BgL_lastzd2matchzd2_5063 = BgL_lastzd2matchzd2_19430; 
goto BgL_zc3z04anonymousza33480ze3z87_5066;} } } } } } } } } } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_5028); 
switch( BgL_matchz00_5256) { case ((long)2) : 

return BFALSE;break;case ((long)1) : 

{ /* Unsafe/http.scm 487 */
obj_t BgL_res6446z00_12197;
{ /* Unsafe/http.scm 483 */
long BgL_arg3527z00_12191;
{ /* Unsafe/http.scm 483 */
long BgL_res6444z00_12193;
BgL_res6444z00_12193 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_5028); 
BgL_arg3527z00_12191 = BgL_res6444z00_12193; } 
BgL_res6446z00_12197 = 
rgc_buffer_substring(BgL_iportz00_5028, ((long)0), BgL_arg3527z00_12191); } 
return BgL_res6446z00_12197;} break;case ((long)0) : 

goto BgL_zc3z04anonymousza33607ze3z87_5255;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string7254z00zz__httpz00, BGl_string7255z00zz__httpz00, 
BINT(BgL_matchz00_5256));} } } } 

}



/* crlf-grammar~0 */
obj_t BGl_crlfzd2grammarze70z35zz__httpz00(obj_t BgL_iportz00_4730)
{
{ /* Unsafe/http.scm 492 */
{ 
obj_t BgL_iportz00_4767;long BgL_lastzd2matchzd2_4768;long BgL_forwardz00_4769;long BgL_bufposz00_4770;obj_t BgL_iportz00_4792;long BgL_lastzd2matchzd2_4793;long BgL_forwardz00_4794;long BgL_bufposz00_4795;obj_t BgL_iportz00_4817;long BgL_lastzd2matchzd2_4818;long BgL_forwardz00_4819;long BgL_bufposz00_4820;obj_t BgL_iportz00_4836;long BgL_lastzd2matchzd2_4837;long BgL_forwardz00_4838;long BgL_bufposz00_4839;
{ /* Unsafe/http.scm 492 */
long BgL_res6533z00_12447;
BgL_res6533z00_12447 = 
RGC_START_MATCH(BgL_iportz00_4730); BgL_res6533z00_12447; } 
{ /* Unsafe/http.scm 492 */
long BgL_matchz00_4985;
{ /* Unsafe/http.scm 492 */
long BgL_arg3477z00_4989;long BgL_arg3478z00_4990;
{ /* Unsafe/http.scm 492 */
long BgL_res6534z00_12449;
BgL_res6534z00_12449 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4730); 
BgL_arg3477z00_4989 = BgL_res6534z00_12449; } 
{ /* Unsafe/http.scm 492 */
long BgL_res6535z00_12451;
BgL_res6535z00_12451 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4730); 
BgL_arg3478z00_4990 = BgL_res6535z00_12451; } 
BgL_iportz00_4767 = BgL_iportz00_4730; 
BgL_lastzd2matchzd2_4768 = ((long)1); 
BgL_forwardz00_4769 = BgL_arg3477z00_4989; 
BgL_bufposz00_4770 = BgL_arg3478z00_4990; 
BgL_zc3z04anonymousza33335ze3z87_4771:
if(
(BgL_forwardz00_4769==BgL_bufposz00_4770))
{ /* Unsafe/http.scm 492 */
if(
rgc_fill_buffer(BgL_iportz00_4767))
{ /* Unsafe/http.scm 492 */
long BgL_arg3338z00_4774;long BgL_arg3339z00_4775;
{ /* Unsafe/http.scm 492 */
long BgL_res6449z00_12204;
BgL_res6449z00_12204 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4767); 
BgL_arg3338z00_4774 = BgL_res6449z00_12204; } 
{ /* Unsafe/http.scm 492 */
long BgL_res6450z00_12206;
BgL_res6450z00_12206 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4767); 
BgL_arg3339z00_4775 = BgL_res6450z00_12206; } 
{ 
long BgL_bufposz00_19451;long BgL_forwardz00_19450;
BgL_forwardz00_19450 = BgL_arg3338z00_4774; 
BgL_bufposz00_19451 = BgL_arg3339z00_4775; 
BgL_bufposz00_4770 = BgL_bufposz00_19451; 
BgL_forwardz00_4769 = BgL_forwardz00_19450; 
goto BgL_zc3z04anonymousza33335ze3z87_4771;} }  else 
{ /* Unsafe/http.scm 492 */
BgL_matchz00_4985 = BgL_lastzd2matchzd2_4768; } }  else 
{ /* Unsafe/http.scm 492 */
int BgL_curz00_4776;
{ /* Unsafe/http.scm 492 */
int BgL_res6451z00_12209;
BgL_res6451z00_12209 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4767, BgL_forwardz00_4769); 
BgL_curz00_4776 = BgL_res6451z00_12209; } 
{ /* Unsafe/http.scm 492 */

if(
(
(long)(BgL_curz00_4776)==((long)13)))
{ /* Unsafe/http.scm 492 */
BgL_iportz00_4817 = BgL_iportz00_4767; 
BgL_lastzd2matchzd2_4818 = BgL_lastzd2matchzd2_4768; 
BgL_forwardz00_4819 = 
(((long)1)+BgL_forwardz00_4769); 
BgL_bufposz00_4820 = BgL_bufposz00_4770; 
BgL_zc3z04anonymousza33362ze3z87_4821:
{ /* Unsafe/http.scm 492 */
long BgL_newzd2matchzd2_4822;
{ /* Unsafe/http.scm 492 */
long BgL_res6486z00_12307;
BgL_res6486z00_12307 = 
RGC_STOP_MATCH(BgL_iportz00_4817, BgL_forwardz00_4819); BgL_res6486z00_12307; } 
BgL_newzd2matchzd2_4822 = ((long)1); 
if(
(BgL_forwardz00_4819==BgL_bufposz00_4820))
{ /* Unsafe/http.scm 492 */
if(
rgc_fill_buffer(BgL_iportz00_4817))
{ /* Unsafe/http.scm 492 */
long BgL_arg3365z00_4825;long BgL_arg3366z00_4826;
{ /* Unsafe/http.scm 492 */
long BgL_res6489z00_12314;
BgL_res6489z00_12314 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4817); 
BgL_arg3365z00_4825 = BgL_res6489z00_12314; } 
{ /* Unsafe/http.scm 492 */
long BgL_res6490z00_12316;
BgL_res6490z00_12316 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4817); 
BgL_arg3366z00_4826 = BgL_res6490z00_12316; } 
{ 
long BgL_bufposz00_19464;long BgL_forwardz00_19463;
BgL_forwardz00_19463 = BgL_arg3365z00_4825; 
BgL_bufposz00_19464 = BgL_arg3366z00_4826; 
BgL_bufposz00_4820 = BgL_bufposz00_19464; 
BgL_forwardz00_4819 = BgL_forwardz00_19463; 
goto BgL_zc3z04anonymousza33362ze3z87_4821;} }  else 
{ /* Unsafe/http.scm 492 */
BgL_matchz00_4985 = BgL_newzd2matchzd2_4822; } }  else 
{ /* Unsafe/http.scm 492 */
int BgL_curz00_4827;
{ /* Unsafe/http.scm 492 */
int BgL_res6491z00_12319;
BgL_res6491z00_12319 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4817, BgL_forwardz00_4819); 
BgL_curz00_4827 = BgL_res6491z00_12319; } 
{ /* Unsafe/http.scm 492 */

if(
(
(long)(BgL_curz00_4827)==((long)10)))
{ /* Unsafe/http.scm 492 */
long BgL_arg3368z00_4829;
BgL_arg3368z00_4829 = 
(((long)1)+BgL_forwardz00_4819); 
{ /* Unsafe/http.scm 492 */
long BgL_newzd2matchzd2_12324;
{ /* Unsafe/http.scm 492 */
long BgL_res6494z00_12327;
BgL_res6494z00_12327 = 
RGC_STOP_MATCH(BgL_iportz00_4817, BgL_arg3368z00_4829); BgL_res6494z00_12327; } 
BgL_newzd2matchzd2_12324 = ((long)0); 
BgL_matchz00_4985 = BgL_newzd2matchzd2_12324; } }  else 
{ /* Unsafe/http.scm 492 */
BgL_matchz00_4985 = BgL_newzd2matchzd2_4822; } } } } }  else 
{ /* Unsafe/http.scm 492 */
if(
(
(long)(BgL_curz00_4776)==((long)10)))
{ /* Unsafe/http.scm 492 */
long BgL_arg3343z00_4780;
BgL_arg3343z00_4780 = 
(((long)1)+BgL_forwardz00_4769); 
{ /* Unsafe/http.scm 492 */
long BgL_newzd2matchzd2_12218;
{ /* Unsafe/http.scm 492 */
long BgL_res6456z00_12221;
BgL_res6456z00_12221 = 
RGC_STOP_MATCH(BgL_iportz00_4767, BgL_arg3343z00_4780); BgL_res6456z00_12221; } 
BgL_newzd2matchzd2_12218 = ((long)0); 
BgL_matchz00_4985 = BgL_newzd2matchzd2_12218; } }  else 
{ /* Unsafe/http.scm 492 */
bool_t BgL_test8354z00_19477;
if(
(
(long)(BgL_curz00_4776)==((long)9)))
{ /* Unsafe/http.scm 492 */
BgL_test8354z00_19477 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 492 */
BgL_test8354z00_19477 = 
(
(long)(BgL_curz00_4776)==((long)32))
; } 
if(BgL_test8354z00_19477)
{ /* Unsafe/http.scm 492 */
BgL_iportz00_4792 = BgL_iportz00_4767; 
BgL_lastzd2matchzd2_4793 = BgL_lastzd2matchzd2_4768; 
BgL_forwardz00_4794 = 
(((long)1)+BgL_forwardz00_4769); 
BgL_bufposz00_4795 = BgL_bufposz00_4770; 
BgL_zc3z04anonymousza33349ze3z87_4796:
{ /* Unsafe/http.scm 492 */
long BgL_newzd2matchzd2_4797;
{ /* Unsafe/http.scm 492 */
long BgL_res6463z00_12240;
BgL_res6463z00_12240 = 
RGC_STOP_MATCH(BgL_iportz00_4792, BgL_forwardz00_4794); BgL_res6463z00_12240; } 
BgL_newzd2matchzd2_4797 = ((long)1); 
if(
(BgL_forwardz00_4794==BgL_bufposz00_4795))
{ /* Unsafe/http.scm 492 */
if(
rgc_fill_buffer(BgL_iportz00_4792))
{ /* Unsafe/http.scm 492 */
long BgL_arg3352z00_4800;long BgL_arg3353z00_4801;
{ /* Unsafe/http.scm 492 */
long BgL_res6466z00_12247;
BgL_res6466z00_12247 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4792); 
BgL_arg3352z00_4800 = BgL_res6466z00_12247; } 
{ /* Unsafe/http.scm 492 */
long BgL_res6467z00_12249;
BgL_res6467z00_12249 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4792); 
BgL_arg3353z00_4801 = BgL_res6467z00_12249; } 
{ 
long BgL_bufposz00_19491;long BgL_forwardz00_19490;
BgL_forwardz00_19490 = BgL_arg3352z00_4800; 
BgL_bufposz00_19491 = BgL_arg3353z00_4801; 
BgL_bufposz00_4795 = BgL_bufposz00_19491; 
BgL_forwardz00_4794 = BgL_forwardz00_19490; 
goto BgL_zc3z04anonymousza33349ze3z87_4796;} }  else 
{ /* Unsafe/http.scm 492 */
BgL_matchz00_4985 = BgL_newzd2matchzd2_4797; } }  else 
{ /* Unsafe/http.scm 492 */
int BgL_curz00_4802;
{ /* Unsafe/http.scm 492 */
int BgL_res6468z00_12252;
BgL_res6468z00_12252 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4792, BgL_forwardz00_4794); 
BgL_curz00_4802 = BgL_res6468z00_12252; } 
{ /* Unsafe/http.scm 492 */

if(
(
(long)(BgL_curz00_4802)==((long)13)))
{ /* Unsafe/http.scm 492 */
long BgL_arg3355z00_4804;
BgL_arg3355z00_4804 = 
(((long)1)+BgL_forwardz00_4794); 
{ 
long BgL_forwardz00_12258;long BgL_bufposz00_12259;
BgL_forwardz00_12258 = BgL_arg3355z00_4804; 
BgL_bufposz00_12259 = BgL_bufposz00_4795; 
BgL_statezd28zd21237z00_12257:
if(
(BgL_forwardz00_12258==BgL_bufposz00_12259))
{ /* Unsafe/http.scm 492 */
if(
rgc_fill_buffer(BgL_iportz00_4792))
{ /* Unsafe/http.scm 492 */
long BgL_arg3385z00_12262;long BgL_arg3386z00_12263;
{ /* Unsafe/http.scm 492 */
long BgL_res6473z00_12273;
BgL_res6473z00_12273 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4792); 
BgL_arg3385z00_12262 = BgL_res6473z00_12273; } 
{ /* Unsafe/http.scm 492 */
long BgL_res6474z00_12275;
BgL_res6474z00_12275 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4792); 
BgL_arg3386z00_12263 = BgL_res6474z00_12275; } 
{ 
long BgL_bufposz00_19504;long BgL_forwardz00_19503;
BgL_forwardz00_19503 = BgL_arg3385z00_12262; 
BgL_bufposz00_19504 = BgL_arg3386z00_12263; 
BgL_bufposz00_12259 = BgL_bufposz00_19504; 
BgL_forwardz00_12258 = BgL_forwardz00_19503; 
goto BgL_statezd28zd21237z00_12257;} }  else 
{ /* Unsafe/http.scm 492 */
BgL_matchz00_4985 = BgL_newzd2matchzd2_4797; } }  else 
{ /* Unsafe/http.scm 492 */
int BgL_curz00_12264;
{ /* Unsafe/http.scm 492 */
int BgL_res6475z00_12278;
BgL_res6475z00_12278 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4792, BgL_forwardz00_12258); 
BgL_curz00_12264 = BgL_res6475z00_12278; } 
{ /* Unsafe/http.scm 492 */

if(
(
(long)(BgL_curz00_12264)==((long)10)))
{ /* Unsafe/http.scm 492 */
long BgL_arg3388z00_12266;
BgL_arg3388z00_12266 = 
(((long)1)+BgL_forwardz00_12258); 
{ /* Unsafe/http.scm 492 */
long BgL_newzd2matchzd2_12283;
{ /* Unsafe/http.scm 492 */
long BgL_res6478z00_12286;
BgL_res6478z00_12286 = 
RGC_STOP_MATCH(BgL_iportz00_4792, BgL_arg3388z00_12266); BgL_res6478z00_12286; } 
BgL_newzd2matchzd2_12283 = ((long)0); 
BgL_matchz00_4985 = BgL_newzd2matchzd2_12283; } }  else 
{ /* Unsafe/http.scm 492 */
BgL_matchz00_4985 = BgL_newzd2matchzd2_4797; } } } } }  else 
{ /* Unsafe/http.scm 492 */
if(
(
(long)(BgL_curz00_4802)==((long)10)))
{ /* Unsafe/http.scm 492 */
long BgL_arg3357z00_4806;
BgL_arg3357z00_4806 = 
(((long)1)+BgL_forwardz00_4794); 
{ /* Unsafe/http.scm 492 */
long BgL_newzd2matchzd2_12291;
{ /* Unsafe/http.scm 492 */
long BgL_res6481z00_12294;
BgL_res6481z00_12294 = 
RGC_STOP_MATCH(BgL_iportz00_4792, BgL_arg3357z00_4806); BgL_res6481z00_12294; } 
BgL_newzd2matchzd2_12291 = ((long)0); 
BgL_matchz00_4985 = BgL_newzd2matchzd2_12291; } }  else 
{ /* Unsafe/http.scm 492 */
bool_t BgL_test8363z00_19516;
if(
(
(long)(BgL_curz00_4802)==((long)9)))
{ /* Unsafe/http.scm 492 */
BgL_test8363z00_19516 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 492 */
BgL_test8363z00_19516 = 
(
(long)(BgL_curz00_4802)==((long)32))
; } 
if(BgL_test8363z00_19516)
{ /* Unsafe/http.scm 492 */
BgL_iportz00_4836 = BgL_iportz00_4792; 
BgL_lastzd2matchzd2_4837 = BgL_newzd2matchzd2_4797; 
BgL_forwardz00_4838 = 
(((long)1)+BgL_forwardz00_4794); 
BgL_bufposz00_4839 = BgL_bufposz00_4795; 
BgL_zc3z04anonymousza33370ze3z87_4840:
if(
(BgL_forwardz00_4838==BgL_bufposz00_4839))
{ /* Unsafe/http.scm 492 */
if(
rgc_fill_buffer(BgL_iportz00_4836))
{ /* Unsafe/http.scm 492 */
long BgL_arg3373z00_4843;long BgL_arg3374z00_4844;
{ /* Unsafe/http.scm 492 */
long BgL_res6498z00_12338;
BgL_res6498z00_12338 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4836); 
BgL_arg3373z00_4843 = BgL_res6498z00_12338; } 
{ /* Unsafe/http.scm 492 */
long BgL_res6499z00_12340;
BgL_res6499z00_12340 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4836); 
BgL_arg3374z00_4844 = BgL_res6499z00_12340; } 
{ 
long BgL_bufposz00_19529;long BgL_forwardz00_19528;
BgL_forwardz00_19528 = BgL_arg3373z00_4843; 
BgL_bufposz00_19529 = BgL_arg3374z00_4844; 
BgL_bufposz00_4839 = BgL_bufposz00_19529; 
BgL_forwardz00_4838 = BgL_forwardz00_19528; 
goto BgL_zc3z04anonymousza33370ze3z87_4840;} }  else 
{ /* Unsafe/http.scm 492 */
BgL_matchz00_4985 = BgL_lastzd2matchzd2_4837; } }  else 
{ /* Unsafe/http.scm 492 */
int BgL_curz00_4845;
{ /* Unsafe/http.scm 492 */
int BgL_res6500z00_12343;
BgL_res6500z00_12343 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4836, BgL_forwardz00_4838); 
BgL_curz00_4845 = BgL_res6500z00_12343; } 
{ /* Unsafe/http.scm 492 */

if(
(
(long)(BgL_curz00_4845)==((long)13)))
{ /* Unsafe/http.scm 492 */
long BgL_arg3376z00_4847;
BgL_arg3376z00_4847 = 
(((long)1)+BgL_forwardz00_4838); 
{ 
long BgL_forwardz00_12349;long BgL_bufposz00_12350;
BgL_forwardz00_12349 = BgL_arg3376z00_4847; 
BgL_bufposz00_12350 = BgL_bufposz00_4839; 
BgL_statezd28zd21237z00_12348:
if(
(BgL_forwardz00_12349==BgL_bufposz00_12350))
{ /* Unsafe/http.scm 492 */
if(
rgc_fill_buffer(BgL_iportz00_4836))
{ /* Unsafe/http.scm 492 */
long BgL_arg3385z00_12353;long BgL_arg3386z00_12354;
{ /* Unsafe/http.scm 492 */
long BgL_res6505z00_12364;
BgL_res6505z00_12364 = 
RGC_BUFFER_FORWARD(BgL_iportz00_4836); 
BgL_arg3385z00_12353 = BgL_res6505z00_12364; } 
{ /* Unsafe/http.scm 492 */
long BgL_res6506z00_12366;
BgL_res6506z00_12366 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_4836); 
BgL_arg3386z00_12354 = BgL_res6506z00_12366; } 
{ 
long BgL_bufposz00_19542;long BgL_forwardz00_19541;
BgL_forwardz00_19541 = BgL_arg3385z00_12353; 
BgL_bufposz00_19542 = BgL_arg3386z00_12354; 
BgL_bufposz00_12350 = BgL_bufposz00_19542; 
BgL_forwardz00_12349 = BgL_forwardz00_19541; 
goto BgL_statezd28zd21237z00_12348;} }  else 
{ /* Unsafe/http.scm 492 */
BgL_matchz00_4985 = BgL_lastzd2matchzd2_4837; } }  else 
{ /* Unsafe/http.scm 492 */
int BgL_curz00_12355;
{ /* Unsafe/http.scm 492 */
int BgL_res6507z00_12369;
BgL_res6507z00_12369 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_4836, BgL_forwardz00_12349); 
BgL_curz00_12355 = BgL_res6507z00_12369; } 
{ /* Unsafe/http.scm 492 */

if(
(
(long)(BgL_curz00_12355)==((long)10)))
{ /* Unsafe/http.scm 492 */
long BgL_arg3388z00_12357;
BgL_arg3388z00_12357 = 
(((long)1)+BgL_forwardz00_12349); 
{ /* Unsafe/http.scm 492 */
long BgL_newzd2matchzd2_12374;
{ /* Unsafe/http.scm 492 */
long BgL_res6510z00_12377;
BgL_res6510z00_12377 = 
RGC_STOP_MATCH(BgL_iportz00_4836, BgL_arg3388z00_12357); BgL_res6510z00_12377; } 
BgL_newzd2matchzd2_12374 = ((long)0); 
BgL_matchz00_4985 = BgL_newzd2matchzd2_12374; } }  else 
{ /* Unsafe/http.scm 492 */
BgL_matchz00_4985 = BgL_lastzd2matchzd2_4837; } } } } }  else 
{ /* Unsafe/http.scm 492 */
if(
(
(long)(BgL_curz00_4845)==((long)10)))
{ /* Unsafe/http.scm 492 */
long BgL_arg3378z00_4849;
BgL_arg3378z00_4849 = 
(((long)1)+BgL_forwardz00_4838); 
{ /* Unsafe/http.scm 492 */
long BgL_newzd2matchzd2_12382;
{ /* Unsafe/http.scm 492 */
long BgL_res6513z00_12385;
BgL_res6513z00_12385 = 
RGC_STOP_MATCH(BgL_iportz00_4836, BgL_arg3378z00_4849); BgL_res6513z00_12385; } 
BgL_newzd2matchzd2_12382 = ((long)0); 
BgL_matchz00_4985 = BgL_newzd2matchzd2_12382; } }  else 
{ /* Unsafe/http.scm 492 */
bool_t BgL_test8372z00_19554;
if(
(
(long)(BgL_curz00_4845)==((long)9)))
{ /* Unsafe/http.scm 492 */
BgL_test8372z00_19554 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 492 */
BgL_test8372z00_19554 = 
(
(long)(BgL_curz00_4845)==((long)32))
; } 
if(BgL_test8372z00_19554)
{ 
long BgL_forwardz00_19560;
BgL_forwardz00_19560 = 
(((long)1)+BgL_forwardz00_4838); 
BgL_forwardz00_4838 = BgL_forwardz00_19560; 
goto BgL_zc3z04anonymousza33370ze3z87_4840;}  else 
{ /* Unsafe/http.scm 492 */
BgL_matchz00_4985 = BgL_lastzd2matchzd2_4837; } } } } } }  else 
{ /* Unsafe/http.scm 492 */
BgL_matchz00_4985 = BgL_newzd2matchzd2_4797; } } } } } } }  else 
{ /* Unsafe/http.scm 492 */
long BgL_arg3347z00_4784;
BgL_arg3347z00_4784 = 
(((long)1)+BgL_forwardz00_4769); 
{ /* Unsafe/http.scm 492 */
long BgL_newzd2matchzd2_12230;
{ /* Unsafe/http.scm 492 */
long BgL_res6461z00_12233;
BgL_res6461z00_12233 = 
RGC_STOP_MATCH(BgL_iportz00_4767, BgL_arg3347z00_4784); BgL_res6461z00_12233; } 
BgL_newzd2matchzd2_12230 = ((long)1); 
BgL_matchz00_4985 = BgL_newzd2matchzd2_12230; } } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_4730); 
switch( BgL_matchz00_4985) { case ((long)1) : 

return BFALSE;break;case ((long)0) : 

return BUNSPEC;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string7254z00zz__httpz00, BGl_string7255z00zz__httpz00, 
BINT(BgL_matchz00_4985));} } } } 

}



/* &http-parse-header */
obj_t BGl_z62httpzd2parsezd2headerz62zz__httpz00(obj_t BgL_envz00_14329, obj_t BgL_pz00_14330, obj_t BgL_poz00_14331)
{
{ /* Unsafe/http.scm 425 */
{ /* Unsafe/http.scm 428 */
obj_t BgL_auxz00_19570;
if(
INPUT_PORTP(BgL_pz00_14330))
{ /* Unsafe/http.scm 428 */
BgL_auxz00_19570 = BgL_pz00_14330
; }  else 
{ 
obj_t BgL_auxz00_19573;
BgL_auxz00_19573 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)15779)), BGl_string7383z00zz__httpz00, BGl_string7359z00zz__httpz00, BgL_pz00_14330); 
FAILURE(BgL_auxz00_19573,BFALSE,BFALSE);} 
return 
BGl_httpzd2parsezd2headerz00zz__httpz00(BgL_auxz00_19570, BgL_poz00_14331);} } 

}



/* http-parse-response */
BGL_EXPORTED_DEF obj_t BGl_httpzd2parsezd2responsez00zz__httpz00(obj_t BgL_ipz00_56, obj_t BgL_opz00_57, obj_t BgL_procz00_58)
{
{ /* Unsafe/http.scm 621 */
{ /* Unsafe/http.scm 622 */
obj_t BgL__1z00_7465;
BgL__1z00_7465 = 
BGl_z62zc3z04anonymousza31583ze3ze5zz__httpz00(BGl_statuszd2linezd2grammarz00zz__httpz00, BgL_ipz00_56); 
{ /* Unsafe/http.scm 623 */
obj_t BgL_statusz00_7466;obj_t BgL__2z00_7467;
{ /* Unsafe/http.scm 624 */
int BgL_tmpz00_19582;
BgL_tmpz00_19582 = 
(int)(((long)1)); 
BgL_statusz00_7466 = 
BGL_MVALUES_VAL(BgL_tmpz00_19582); } 
{ /* Unsafe/http.scm 624 */
int BgL_tmpz00_19585;
BgL_tmpz00_19585 = 
(int)(((long)2)); 
BgL__2z00_7467 = 
BGL_MVALUES_VAL(BgL_tmpz00_19585); } 
{ /* Unsafe/http.scm 624 */
obj_t BgL_headerz00_7468;
BgL_headerz00_7468 = 
BGl_httpzd2parsezd2headerz00zz__httpz00(BgL_ipz00_56, BgL_opz00_57); 
{ /* Unsafe/http.scm 625 */
obj_t BgL__hostz00_7469;obj_t BgL__portz00_7470;obj_t BgL_clenz00_7471;obj_t BgL_tencz00_7472;obj_t BgL__autz00_7473;obj_t BgL__pautz00_7474;obj_t BgL__connz00_7475;
{ /* Unsafe/http.scm 626 */
int BgL_tmpz00_19589;
BgL_tmpz00_19589 = 
(int)(((long)1)); 
BgL__hostz00_7469 = 
BGL_MVALUES_VAL(BgL_tmpz00_19589); } 
{ /* Unsafe/http.scm 626 */
int BgL_tmpz00_19592;
BgL_tmpz00_19592 = 
(int)(((long)2)); 
BgL__portz00_7470 = 
BGL_MVALUES_VAL(BgL_tmpz00_19592); } 
{ /* Unsafe/http.scm 626 */
int BgL_tmpz00_19595;
BgL_tmpz00_19595 = 
(int)(((long)3)); 
BgL_clenz00_7471 = 
BGL_MVALUES_VAL(BgL_tmpz00_19595); } 
{ /* Unsafe/http.scm 626 */
int BgL_tmpz00_19598;
BgL_tmpz00_19598 = 
(int)(((long)4)); 
BgL_tencz00_7472 = 
BGL_MVALUES_VAL(BgL_tmpz00_19598); } 
{ /* Unsafe/http.scm 626 */
int BgL_tmpz00_19601;
BgL_tmpz00_19601 = 
(int)(((long)5)); 
BgL__autz00_7473 = 
BGL_MVALUES_VAL(BgL_tmpz00_19601); } 
{ /* Unsafe/http.scm 626 */
int BgL_tmpz00_19604;
BgL_tmpz00_19604 = 
(int)(((long)6)); 
BgL__pautz00_7474 = 
BGL_MVALUES_VAL(BgL_tmpz00_19604); } 
{ /* Unsafe/http.scm 626 */
int BgL_tmpz00_19607;
BgL_tmpz00_19607 = 
(int)(((long)7)); 
BgL__connz00_7475 = 
BGL_MVALUES_VAL(BgL_tmpz00_19607); } 
{ 

if(
INTEGERP(BgL_statusz00_7466))
{ /* Unsafe/http.scm 626 */
switch( 
(long)CINT(BgL_statusz00_7466)) { case ((long)200) : 
case ((long)207) : 

if(
(BgL_tencz00_7472==BGl_symbol7387z00zz__httpz00))
{ /* Unsafe/http.scm 631 */
obj_t BgL_arg4651z00_7480;
BgL_arg4651z00_7480 = 
BGl_httpzd2chunkszd2ze3portze3zz__httpz00(BgL_ipz00_56); 
return 
PROCEDURE_ENTRY(BgL_procz00_58)(BgL_procz00_58, BgL_arg4651z00_7480, BgL_statusz00_7466, BgL_headerz00_7468, BgL_clenz00_7471, BgL_tencz00_7472, BEOA);}  else 
{ /* Unsafe/http.scm 630 */
return 
PROCEDURE_ENTRY(BgL_procz00_58)(BgL_procz00_58, BgL_ipz00_56, BgL_statusz00_7466, BgL_headerz00_7468, BgL_clenz00_7471, BgL_tencz00_7472, BEOA);} break;case ((long)201) : 
case ((long)204) : 
case ((long)304) : 

return 
PROCEDURE_ENTRY(BgL_procz00_58)(BgL_procz00_58, BFALSE, BgL_statusz00_7466, BgL_headerz00_7468, BgL_clenz00_7471, BgL_tencz00_7472, BEOA);break;case ((long)301) : 
case ((long)302) : 
case ((long)303) : 
case ((long)307) : 

{ /* Unsafe/http.scm 639 */
obj_t BgL_locz00_7481;
BgL_locz00_7481 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BGl_keyword7389z00zz__httpz00, BgL_headerz00_7468); 
if(
PAIRP(BgL_locz00_7481))
{ /* Unsafe/http.scm 645 */
BgL_z62httpzd2redirectionzb0_bglt BgL_arg4653z00_7483;
{ /* Unsafe/http.scm 645 */
BgL_z62httpzd2redirectionzb0_bglt BgL_new1282z00_7484;
{ /* Unsafe/http.scm 645 */
BgL_z62httpzd2redirectionzb0_bglt BgL_new1281z00_7487;
BgL_new1281z00_7487 = 
((BgL_z62httpzd2redirectionzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62httpzd2redirectionzb0_bgl) ))); 
{ /* Unsafe/http.scm 645 */
long BgL_arg4656z00_7488;
{ /* Unsafe/http.scm 645 */
long BgL_res6928z00_13503;
BgL_res6928z00_13503 = 
BGL_CLASS_INDEX(BGl_z62httpzd2redirectionzb0zz__httpz00); 
BgL_arg4656z00_7488 = BgL_res6928z00_13503; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1281z00_7487), BgL_arg4656z00_7488); } 
BgL_new1282z00_7484 = BgL_new1281z00_7487; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1282z00_7484)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1282z00_7484)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_19650;
{ /* Unsafe/http.scm 645 */
obj_t BgL_arg4654z00_7485;
{ /* Unsafe/http.scm 645 */
obj_t BgL_arg4655z00_7486;
{ /* Unsafe/http.scm 645 */
obj_t BgL_res6929z00_13507;
{ /* Unsafe/http.scm 645 */
obj_t BgL_classz00_13506;
BgL_classz00_13506 = BGl_z62httpzd2redirectionzb0zz__httpz00; 
BgL_res6929z00_13507 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_13506); } 
BgL_arg4655z00_7486 = BgL_res6929z00_13507; } 
BgL_arg4654z00_7485 = 
VECTOR_REF(BgL_arg4655z00_7486,((long)2)); } 
BgL_auxz00_19650 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg4654z00_7485); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1282z00_7484)))->BgL_stackz00)=((obj_t)BgL_auxz00_19650),BUNSPEC); } 
((((BgL_z62httpzd2redirectionzb0_bglt)COBJECT(BgL_new1282z00_7484))->BgL_portz00)=((obj_t)BgL_ipz00_56),BUNSPEC); 
((((BgL_z62httpzd2redirectionzb0_bglt)COBJECT(BgL_new1282z00_7484))->BgL_urlz00)=((obj_t)
CDR(BgL_locz00_7481)),BUNSPEC); 
BgL_arg4653z00_7483 = BgL_new1282z00_7484; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg4653z00_7483));}  else 
{ /* Unsafe/http.scm 641 */
BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_arg4657z00_7489;
{ /* Unsafe/http.scm 641 */
BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_new1280z00_7490;
{ /* Unsafe/http.scm 641 */
BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_new1279z00_7493;
BgL_new1279z00_7493 = 
((BgL_z62httpzd2redirectionzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62httpzd2redirectionzd2errorz62_bgl) ))); 
{ /* Unsafe/http.scm 641 */
long BgL_arg4660z00_7494;
{ /* Unsafe/http.scm 641 */
long BgL_res6930z00_13511;
BgL_res6930z00_13511 = 
BGL_CLASS_INDEX(BGl_z62httpzd2redirectionzd2errorz62zz__httpz00); 
BgL_arg4660z00_7494 = BgL_res6930z00_13511; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1279z00_7493), BgL_arg4660z00_7494); } 
BgL_new1280z00_7490 = BgL_new1279z00_7493; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1280z00_7490)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1280z00_7490)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_19669;
{ /* Unsafe/http.scm 641 */
obj_t BgL_arg4658z00_7491;
{ /* Unsafe/http.scm 641 */
obj_t BgL_arg4659z00_7492;
{ /* Unsafe/http.scm 641 */
obj_t BgL_res6931z00_13515;
{ /* Unsafe/http.scm 641 */
obj_t BgL_classz00_13514;
BgL_classz00_13514 = BGl_z62httpzd2redirectionzd2errorz62zz__httpz00; 
BgL_res6931z00_13515 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_13514); } 
BgL_arg4659z00_7492 = BgL_res6931z00_13515; } 
BgL_arg4658z00_7491 = 
VECTOR_REF(BgL_arg4659z00_7492,((long)2)); } 
BgL_auxz00_19669 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg4658z00_7491); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1280z00_7490)))->BgL_stackz00)=((obj_t)BgL_auxz00_19669),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1280z00_7490)))->BgL_procz00)=((obj_t)BGl_symbol7391z00zz__httpz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1280z00_7490)))->BgL_msgz00)=((obj_t)BGl_string7393z00zz__httpz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1280z00_7490)))->BgL_objz00)=((obj_t)BgL_ipz00_56),BUNSPEC); 
BgL_arg4657z00_7489 = BgL_new1280z00_7490; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg4657z00_7489));} } break;
default: 
BgL_case_else1277z00_7476:
{ /* Unsafe/http.scm 649 */
obj_t BgL__ortest_1274z00_7495;
BgL__ortest_1274z00_7495 = 
PROCEDURE_ENTRY(BgL_procz00_58)(BgL_procz00_58, BgL_ipz00_56, BgL_statusz00_7466, BgL_headerz00_7468, BgL_clenz00_7471, BgL_tencz00_7472, BEOA); 
if(
CBOOL(BgL__ortest_1274z00_7495))
{ /* Unsafe/http.scm 649 */
return BgL__ortest_1274z00_7495;}  else 
{ /* Unsafe/http.scm 650 */
BgL_z62httpzd2statuszd2errorz62_bglt BgL_arg4661z00_7496;
{ /* Unsafe/http.scm 650 */
BgL_z62httpzd2statuszd2errorz62_bglt BgL_new1276z00_7497;
{ /* Unsafe/http.scm 650 */
BgL_z62httpzd2statuszd2errorz62_bglt BgL_new1275z00_7501;
BgL_new1275z00_7501 = 
((BgL_z62httpzd2statuszd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62httpzd2statuszd2errorz62_bgl) ))); 
{ /* Unsafe/http.scm 650 */
long BgL_arg4665z00_7502;
{ /* Unsafe/http.scm 650 */
long BgL_res6925z00_13495;
BgL_res6925z00_13495 = 
BGL_CLASS_INDEX(BGl_z62httpzd2statuszd2errorz62zz__httpz00); 
BgL_arg4665z00_7502 = BgL_res6925z00_13495; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1275z00_7501), BgL_arg4665z00_7502); } 
BgL_new1276z00_7497 = BgL_new1275z00_7501; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1276z00_7497)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1276z00_7497)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_19701;
{ /* Unsafe/http.scm 650 */
obj_t BgL_arg4662z00_7498;
{ /* Unsafe/http.scm 650 */
obj_t BgL_arg4663z00_7499;
{ /* Unsafe/http.scm 650 */
obj_t BgL_res6926z00_13499;
{ /* Unsafe/http.scm 650 */
obj_t BgL_classz00_13498;
BgL_classz00_13498 = BGl_z62httpzd2statuszd2errorz62zz__httpz00; 
BgL_res6926z00_13499 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_13498); } 
BgL_arg4663z00_7499 = BgL_res6926z00_13499; } 
BgL_arg4662z00_7498 = 
VECTOR_REF(BgL_arg4663z00_7499,((long)2)); } 
BgL_auxz00_19701 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg4662z00_7498); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1276z00_7497)))->BgL_stackz00)=((obj_t)BgL_auxz00_19701),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1276z00_7497)))->BgL_procz00)=((obj_t)BGl_symbol7384z00zz__httpz00),BUNSPEC); 
{ 
obj_t BgL_auxz00_19709;
{ /* Unsafe/http.scm 652 */
obj_t BgL_list4664z00_7500;
BgL_list4664z00_7500 = 
MAKE_YOUNG_PAIR(BgL_statusz00_7466, BNIL); 
BgL_auxz00_19709 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string7386z00zz__httpz00, BgL_list4664z00_7500); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1276z00_7497)))->BgL_msgz00)=((obj_t)BgL_auxz00_19709),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1276z00_7497)))->BgL_objz00)=((obj_t)BgL_ipz00_56),BUNSPEC); 
((((BgL_z62httpzd2statuszd2errorz62_bglt)COBJECT(BgL_new1276z00_7497))->BgL_statusz00)=((int)
CINT(BgL_statusz00_7466)),BUNSPEC); 
BgL_arg4661z00_7496 = BgL_new1276z00_7497; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg4661z00_7496));} } } }  else 
{ /* Unsafe/http.scm 626 */
goto BgL_case_else1277z00_7476;} } } } } } } 

}



/* &http-parse-response */
obj_t BGl_z62httpzd2parsezd2responsez62zz__httpz00(obj_t BgL_envz00_14332, obj_t BgL_ipz00_14333, obj_t BgL_opz00_14334, obj_t BgL_procz00_14335)
{
{ /* Unsafe/http.scm 621 */
{ /* Unsafe/http.scm 622 */
obj_t BgL_auxz00_19729;obj_t BgL_auxz00_19722;
if(
PROCEDUREP(BgL_procz00_14335))
{ /* Unsafe/http.scm 622 */
BgL_auxz00_19729 = BgL_procz00_14335
; }  else 
{ 
obj_t BgL_auxz00_19732;
BgL_auxz00_19732 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)21476)), BGl_string7394z00zz__httpz00, BGl_string7395z00zz__httpz00, BgL_procz00_14335); 
FAILURE(BgL_auxz00_19732,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_ipz00_14333))
{ /* Unsafe/http.scm 622 */
BgL_auxz00_19722 = BgL_ipz00_14333
; }  else 
{ 
obj_t BgL_auxz00_19725;
BgL_auxz00_19725 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)21476)), BGl_string7394z00zz__httpz00, BGl_string7359z00zz__httpz00, BgL_ipz00_14333); 
FAILURE(BgL_auxz00_19725,BFALSE,BFALSE);} 
return 
BGl_httpzd2parsezd2responsez00zz__httpz00(BgL_auxz00_19722, BgL_opz00_14334, BgL_auxz00_19729);} } 

}



/* http-response-body->port */
BGL_EXPORTED_DEF obj_t BGl_httpzd2responsezd2bodyzd2ze3portz31zz__httpz00(obj_t BgL_ipz00_59, obj_t BgL_opz00_60)
{
{ /* Unsafe/http.scm 659 */
return 
BGl_httpzd2parsezd2responsez00zz__httpz00(BgL_ipz00_59, BgL_opz00_60, BGl_proc7396z00zz__httpz00);} 

}



/* &http-response-body->port */
obj_t BGl_z62httpzd2responsezd2bodyzd2ze3portz53zz__httpz00(obj_t BgL_envz00_14338, obj_t BgL_ipz00_14339, obj_t BgL_opz00_14340)
{
{ /* Unsafe/http.scm 659 */
{ /* Unsafe/http.scm 662 */
obj_t BgL_auxz00_19745;obj_t BgL_auxz00_19738;
if(
OUTPUT_PORTP(BgL_opz00_14340))
{ /* Unsafe/http.scm 662 */
BgL_auxz00_19745 = BgL_opz00_14340
; }  else 
{ 
obj_t BgL_auxz00_19748;
BgL_auxz00_19748 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)22833)), BGl_string7397z00zz__httpz00, BGl_string7398z00zz__httpz00, BgL_opz00_14340); 
FAILURE(BgL_auxz00_19748,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_ipz00_14339))
{ /* Unsafe/http.scm 662 */
BgL_auxz00_19738 = BgL_ipz00_14339
; }  else 
{ 
obj_t BgL_auxz00_19741;
BgL_auxz00_19741 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)22833)), BGl_string7397z00zz__httpz00, BGl_string7359z00zz__httpz00, BgL_ipz00_14339); 
FAILURE(BgL_auxz00_19741,BFALSE,BFALSE);} 
return 
BGl_httpzd2responsezd2bodyzd2ze3portz31zz__httpz00(BgL_auxz00_19738, BgL_auxz00_19745);} } 

}



/* &parse-body */
obj_t BGl_z62parsezd2bodyzb0zz__httpz00(obj_t BgL_envz00_14341, obj_t BgL_ipz00_14342, obj_t BgL_statuszd2codezd2_14343, obj_t BgL_headerz00_14344, obj_t BgL_clenz00_14345, obj_t BgL_tencz00_14346)
{
{ /* Unsafe/http.scm 669 */
if(
INPUT_PORTP(BgL_ipz00_14342))
{ /* Unsafe/http.scm 662 */
if(
CBOOL(BgL_clenz00_14345))
{ /* Unsafe/http.scm 665 */
obj_t BgL_pz00_15083;
{ /* Unsafe/http.scm 665 */
obj_t BgL_arg4670z00_15084;
BgL_arg4670z00_15084 = 
BGl_barrierzd2portzd2zz__httpz00(BgL_ipz00_14342, BgL_clenz00_14345); 
{ /* Unsafe/http.scm 665 */

BgL_pz00_15083 = 
BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(BgL_arg4670z00_15084, BTRUE); } } 
{ /* Unsafe/http.scm 666 */
obj_t BgL_zc3z04anonymousza34669ze3z87_15085;
BgL_zc3z04anonymousza34669ze3z87_15085 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza34669ze3ze5zz__httpz00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza34669ze3z87_15085, 
(int)(((long)0)), BgL_ipz00_14342); 
BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(BgL_pz00_15083, BgL_zc3z04anonymousza34669ze3z87_15085); } 
return BgL_pz00_15083;}  else 
{ /* Unsafe/http.scm 664 */
return BgL_ipz00_14342;} }  else 
{ /* Unsafe/http.scm 663 */

return 
BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BGl_string7355z00zz__httpz00, 
BINT(((long)0)), 
BINT(((long)0)));} } 

}



/* &<@anonymous:4669> */
obj_t BGl_z62zc3z04anonymousza34669ze3ze5zz__httpz00(obj_t BgL_envz00_14347, obj_t BgL_inz00_14349)
{
{ /* Unsafe/http.scm 666 */
{ /* Unsafe/http.scm 666 */
obj_t BgL_ipz00_14348;
BgL_ipz00_14348 = 
PROCEDURE_REF(BgL_envz00_14347, 
(int)(((long)0))); 
return 
bgl_close_input_port(
((obj_t)BgL_ipz00_14348));} } 

}



/* http-read-crlf */
BGL_EXPORTED_DEF obj_t BGl_httpzd2readzd2crlfz00zz__httpz00(obj_t BgL_pz00_61)
{
{ /* Unsafe/http.scm 675 */
{ 
obj_t BgL_iportz00_7525;
BgL_iportz00_7525 = BgL_pz00_61; 
{ 
obj_t BgL_iportz00_7631;long BgL_lastzd2matchzd2_7632;long BgL_forwardz00_7633;long BgL_bufposz00_7634;obj_t BgL_iportz00_7612;long BgL_lastzd2matchzd2_7613;long BgL_forwardz00_7614;long BgL_bufposz00_7615;obj_t BgL_iportz00_7587;long BgL_lastzd2matchzd2_7588;long BgL_forwardz00_7589;long BgL_bufposz00_7590;obj_t BgL_iportz00_7562;long BgL_lastzd2matchzd2_7563;long BgL_forwardz00_7564;long BgL_bufposz00_7565;
{ /* Unsafe/http.scm 677 */
long BgL_res7022z00_13785;
BgL_res7022z00_13785 = 
RGC_START_MATCH(BgL_iportz00_7525); BgL_res7022z00_13785; } 
{ /* Unsafe/http.scm 677 */
long BgL_matchz00_7780;
{ /* Unsafe/http.scm 677 */
long BgL_arg4821z00_7792;long BgL_arg4822z00_7793;
{ /* Unsafe/http.scm 677 */
long BgL_res7023z00_13787;
BgL_res7023z00_13787 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7525); 
BgL_arg4821z00_7792 = BgL_res7023z00_13787; } 
{ /* Unsafe/http.scm 677 */
long BgL_res7024z00_13789;
BgL_res7024z00_13789 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7525); 
BgL_arg4822z00_7793 = BgL_res7024z00_13789; } 
BgL_iportz00_7562 = BgL_iportz00_7525; 
BgL_lastzd2matchzd2_7563 = ((long)1); 
BgL_forwardz00_7564 = BgL_arg4821z00_7792; 
BgL_bufposz00_7565 = BgL_arg4822z00_7793; 
BgL_zc3z04anonymousza34673ze3z87_7566:
if(
(BgL_forwardz00_7564==BgL_bufposz00_7565))
{ /* Unsafe/http.scm 677 */
if(
rgc_fill_buffer(BgL_iportz00_7562))
{ /* Unsafe/http.scm 677 */
long BgL_arg4676z00_7569;long BgL_arg4677z00_7570;
{ /* Unsafe/http.scm 677 */
long BgL_res6935z00_13536;
BgL_res6935z00_13536 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7562); 
BgL_arg4676z00_7569 = BgL_res6935z00_13536; } 
{ /* Unsafe/http.scm 677 */
long BgL_res6936z00_13538;
BgL_res6936z00_13538 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7562); 
BgL_arg4677z00_7570 = BgL_res6936z00_13538; } 
{ 
long BgL_bufposz00_19782;long BgL_forwardz00_19781;
BgL_forwardz00_19781 = BgL_arg4676z00_7569; 
BgL_bufposz00_19782 = BgL_arg4677z00_7570; 
BgL_bufposz00_7565 = BgL_bufposz00_19782; 
BgL_forwardz00_7564 = BgL_forwardz00_19781; 
goto BgL_zc3z04anonymousza34673ze3z87_7566;} }  else 
{ /* Unsafe/http.scm 677 */
BgL_matchz00_7780 = BgL_lastzd2matchzd2_7563; } }  else 
{ /* Unsafe/http.scm 677 */
int BgL_curz00_7571;
{ /* Unsafe/http.scm 677 */
int BgL_res6937z00_13541;
BgL_res6937z00_13541 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7562, BgL_forwardz00_7564); 
BgL_curz00_7571 = BgL_res6937z00_13541; } 
{ /* Unsafe/http.scm 677 */

if(
(
(long)(BgL_curz00_7571)==((long)13)))
{ /* Unsafe/http.scm 677 */
BgL_iportz00_7612 = BgL_iportz00_7562; 
BgL_lastzd2matchzd2_7613 = BgL_lastzd2matchzd2_7563; 
BgL_forwardz00_7614 = 
(((long)1)+BgL_forwardz00_7564); 
BgL_bufposz00_7615 = BgL_bufposz00_7565; 
BgL_zc3z04anonymousza34700ze3z87_7616:
{ /* Unsafe/http.scm 677 */
long BgL_newzd2matchzd2_7617;
{ /* Unsafe/http.scm 677 */
long BgL_res6972z00_13639;
BgL_res6972z00_13639 = 
RGC_STOP_MATCH(BgL_iportz00_7612, BgL_forwardz00_7614); BgL_res6972z00_13639; } 
BgL_newzd2matchzd2_7617 = ((long)1); 
if(
(BgL_forwardz00_7614==BgL_bufposz00_7615))
{ /* Unsafe/http.scm 677 */
if(
rgc_fill_buffer(BgL_iportz00_7612))
{ /* Unsafe/http.scm 677 */
long BgL_arg4703z00_7620;long BgL_arg4704z00_7621;
{ /* Unsafe/http.scm 677 */
long BgL_res6975z00_13646;
BgL_res6975z00_13646 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7612); 
BgL_arg4703z00_7620 = BgL_res6975z00_13646; } 
{ /* Unsafe/http.scm 677 */
long BgL_res6976z00_13648;
BgL_res6976z00_13648 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7612); 
BgL_arg4704z00_7621 = BgL_res6976z00_13648; } 
{ 
long BgL_bufposz00_19795;long BgL_forwardz00_19794;
BgL_forwardz00_19794 = BgL_arg4703z00_7620; 
BgL_bufposz00_19795 = BgL_arg4704z00_7621; 
BgL_bufposz00_7615 = BgL_bufposz00_19795; 
BgL_forwardz00_7614 = BgL_forwardz00_19794; 
goto BgL_zc3z04anonymousza34700ze3z87_7616;} }  else 
{ /* Unsafe/http.scm 677 */
BgL_matchz00_7780 = BgL_newzd2matchzd2_7617; } }  else 
{ /* Unsafe/http.scm 677 */
int BgL_curz00_7622;
{ /* Unsafe/http.scm 677 */
int BgL_res6977z00_13651;
BgL_res6977z00_13651 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7612, BgL_forwardz00_7614); 
BgL_curz00_7622 = BgL_res6977z00_13651; } 
{ /* Unsafe/http.scm 677 */

if(
(
(long)(BgL_curz00_7622)==((long)10)))
{ /* Unsafe/http.scm 677 */
long BgL_arg4706z00_7624;
BgL_arg4706z00_7624 = 
(((long)1)+BgL_forwardz00_7614); 
{ /* Unsafe/http.scm 677 */
long BgL_newzd2matchzd2_13656;
{ /* Unsafe/http.scm 677 */
long BgL_res6980z00_13659;
BgL_res6980z00_13659 = 
RGC_STOP_MATCH(BgL_iportz00_7612, BgL_arg4706z00_7624); BgL_res6980z00_13659; } 
BgL_newzd2matchzd2_13656 = ((long)0); 
BgL_matchz00_7780 = BgL_newzd2matchzd2_13656; } }  else 
{ /* Unsafe/http.scm 677 */
BgL_matchz00_7780 = BgL_newzd2matchzd2_7617; } } } } }  else 
{ /* Unsafe/http.scm 677 */
if(
(
(long)(BgL_curz00_7571)==((long)10)))
{ /* Unsafe/http.scm 677 */
long BgL_arg4681z00_7575;
BgL_arg4681z00_7575 = 
(((long)1)+BgL_forwardz00_7564); 
{ /* Unsafe/http.scm 677 */
long BgL_newzd2matchzd2_13550;
{ /* Unsafe/http.scm 677 */
long BgL_res6942z00_13553;
BgL_res6942z00_13553 = 
RGC_STOP_MATCH(BgL_iportz00_7562, BgL_arg4681z00_7575); BgL_res6942z00_13553; } 
BgL_newzd2matchzd2_13550 = ((long)0); 
BgL_matchz00_7780 = BgL_newzd2matchzd2_13550; } }  else 
{ /* Unsafe/http.scm 677 */
bool_t BgL_test8392z00_19808;
if(
(
(long)(BgL_curz00_7571)==((long)9)))
{ /* Unsafe/http.scm 677 */
BgL_test8392z00_19808 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 677 */
BgL_test8392z00_19808 = 
(
(long)(BgL_curz00_7571)==((long)32))
; } 
if(BgL_test8392z00_19808)
{ /* Unsafe/http.scm 677 */
BgL_iportz00_7587 = BgL_iportz00_7562; 
BgL_lastzd2matchzd2_7588 = BgL_lastzd2matchzd2_7563; 
BgL_forwardz00_7589 = 
(((long)1)+BgL_forwardz00_7564); 
BgL_bufposz00_7590 = BgL_bufposz00_7565; 
BgL_zc3z04anonymousza34687ze3z87_7591:
{ /* Unsafe/http.scm 677 */
long BgL_newzd2matchzd2_7592;
{ /* Unsafe/http.scm 677 */
long BgL_res6949z00_13572;
BgL_res6949z00_13572 = 
RGC_STOP_MATCH(BgL_iportz00_7587, BgL_forwardz00_7589); BgL_res6949z00_13572; } 
BgL_newzd2matchzd2_7592 = ((long)1); 
if(
(BgL_forwardz00_7589==BgL_bufposz00_7590))
{ /* Unsafe/http.scm 677 */
if(
rgc_fill_buffer(BgL_iportz00_7587))
{ /* Unsafe/http.scm 677 */
long BgL_arg4690z00_7595;long BgL_arg4691z00_7596;
{ /* Unsafe/http.scm 677 */
long BgL_res6952z00_13579;
BgL_res6952z00_13579 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7587); 
BgL_arg4690z00_7595 = BgL_res6952z00_13579; } 
{ /* Unsafe/http.scm 677 */
long BgL_res6953z00_13581;
BgL_res6953z00_13581 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7587); 
BgL_arg4691z00_7596 = BgL_res6953z00_13581; } 
{ 
long BgL_bufposz00_19822;long BgL_forwardz00_19821;
BgL_forwardz00_19821 = BgL_arg4690z00_7595; 
BgL_bufposz00_19822 = BgL_arg4691z00_7596; 
BgL_bufposz00_7590 = BgL_bufposz00_19822; 
BgL_forwardz00_7589 = BgL_forwardz00_19821; 
goto BgL_zc3z04anonymousza34687ze3z87_7591;} }  else 
{ /* Unsafe/http.scm 677 */
BgL_matchz00_7780 = BgL_newzd2matchzd2_7592; } }  else 
{ /* Unsafe/http.scm 677 */
int BgL_curz00_7597;
{ /* Unsafe/http.scm 677 */
int BgL_res6954z00_13584;
BgL_res6954z00_13584 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7587, BgL_forwardz00_7589); 
BgL_curz00_7597 = BgL_res6954z00_13584; } 
{ /* Unsafe/http.scm 677 */

if(
(
(long)(BgL_curz00_7597)==((long)13)))
{ /* Unsafe/http.scm 677 */
long BgL_arg4693z00_7599;
BgL_arg4693z00_7599 = 
(((long)1)+BgL_forwardz00_7589); 
{ 
long BgL_forwardz00_13590;long BgL_bufposz00_13591;
BgL_forwardz00_13590 = BgL_arg4693z00_7599; 
BgL_bufposz00_13591 = BgL_bufposz00_7590; 
BgL_statezd28zd21291z00_13589:
if(
(BgL_forwardz00_13590==BgL_bufposz00_13591))
{ /* Unsafe/http.scm 677 */
if(
rgc_fill_buffer(BgL_iportz00_7587))
{ /* Unsafe/http.scm 677 */
long BgL_arg4723z00_13594;long BgL_arg4724z00_13595;
{ /* Unsafe/http.scm 677 */
long BgL_res6959z00_13605;
BgL_res6959z00_13605 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7587); 
BgL_arg4723z00_13594 = BgL_res6959z00_13605; } 
{ /* Unsafe/http.scm 677 */
long BgL_res6960z00_13607;
BgL_res6960z00_13607 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7587); 
BgL_arg4724z00_13595 = BgL_res6960z00_13607; } 
{ 
long BgL_bufposz00_19835;long BgL_forwardz00_19834;
BgL_forwardz00_19834 = BgL_arg4723z00_13594; 
BgL_bufposz00_19835 = BgL_arg4724z00_13595; 
BgL_bufposz00_13591 = BgL_bufposz00_19835; 
BgL_forwardz00_13590 = BgL_forwardz00_19834; 
goto BgL_statezd28zd21291z00_13589;} }  else 
{ /* Unsafe/http.scm 677 */
BgL_matchz00_7780 = BgL_newzd2matchzd2_7592; } }  else 
{ /* Unsafe/http.scm 677 */
int BgL_curz00_13596;
{ /* Unsafe/http.scm 677 */
int BgL_res6961z00_13610;
BgL_res6961z00_13610 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7587, BgL_forwardz00_13590); 
BgL_curz00_13596 = BgL_res6961z00_13610; } 
{ /* Unsafe/http.scm 677 */

if(
(
(long)(BgL_curz00_13596)==((long)10)))
{ /* Unsafe/http.scm 677 */
long BgL_arg4726z00_13598;
BgL_arg4726z00_13598 = 
(((long)1)+BgL_forwardz00_13590); 
{ /* Unsafe/http.scm 677 */
long BgL_newzd2matchzd2_13615;
{ /* Unsafe/http.scm 677 */
long BgL_res6964z00_13618;
BgL_res6964z00_13618 = 
RGC_STOP_MATCH(BgL_iportz00_7587, BgL_arg4726z00_13598); BgL_res6964z00_13618; } 
BgL_newzd2matchzd2_13615 = ((long)0); 
BgL_matchz00_7780 = BgL_newzd2matchzd2_13615; } }  else 
{ /* Unsafe/http.scm 677 */
BgL_matchz00_7780 = BgL_newzd2matchzd2_7592; } } } } }  else 
{ /* Unsafe/http.scm 677 */
if(
(
(long)(BgL_curz00_7597)==((long)10)))
{ /* Unsafe/http.scm 677 */
long BgL_arg4695z00_7601;
BgL_arg4695z00_7601 = 
(((long)1)+BgL_forwardz00_7589); 
{ /* Unsafe/http.scm 677 */
long BgL_newzd2matchzd2_13623;
{ /* Unsafe/http.scm 677 */
long BgL_res6967z00_13626;
BgL_res6967z00_13626 = 
RGC_STOP_MATCH(BgL_iportz00_7587, BgL_arg4695z00_7601); BgL_res6967z00_13626; } 
BgL_newzd2matchzd2_13623 = ((long)0); 
BgL_matchz00_7780 = BgL_newzd2matchzd2_13623; } }  else 
{ /* Unsafe/http.scm 677 */
bool_t BgL_test8401z00_19847;
if(
(
(long)(BgL_curz00_7597)==((long)9)))
{ /* Unsafe/http.scm 677 */
BgL_test8401z00_19847 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 677 */
BgL_test8401z00_19847 = 
(
(long)(BgL_curz00_7597)==((long)32))
; } 
if(BgL_test8401z00_19847)
{ /* Unsafe/http.scm 677 */
BgL_iportz00_7631 = BgL_iportz00_7587; 
BgL_lastzd2matchzd2_7632 = BgL_newzd2matchzd2_7592; 
BgL_forwardz00_7633 = 
(((long)1)+BgL_forwardz00_7589); 
BgL_bufposz00_7634 = BgL_bufposz00_7590; 
BgL_zc3z04anonymousza34708ze3z87_7635:
if(
(BgL_forwardz00_7633==BgL_bufposz00_7634))
{ /* Unsafe/http.scm 677 */
if(
rgc_fill_buffer(BgL_iportz00_7631))
{ /* Unsafe/http.scm 677 */
long BgL_arg4711z00_7638;long BgL_arg4712z00_7639;
{ /* Unsafe/http.scm 677 */
long BgL_res6984z00_13670;
BgL_res6984z00_13670 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7631); 
BgL_arg4711z00_7638 = BgL_res6984z00_13670; } 
{ /* Unsafe/http.scm 677 */
long BgL_res6985z00_13672;
BgL_res6985z00_13672 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7631); 
BgL_arg4712z00_7639 = BgL_res6985z00_13672; } 
{ 
long BgL_bufposz00_19860;long BgL_forwardz00_19859;
BgL_forwardz00_19859 = BgL_arg4711z00_7638; 
BgL_bufposz00_19860 = BgL_arg4712z00_7639; 
BgL_bufposz00_7634 = BgL_bufposz00_19860; 
BgL_forwardz00_7633 = BgL_forwardz00_19859; 
goto BgL_zc3z04anonymousza34708ze3z87_7635;} }  else 
{ /* Unsafe/http.scm 677 */
BgL_matchz00_7780 = BgL_lastzd2matchzd2_7632; } }  else 
{ /* Unsafe/http.scm 677 */
int BgL_curz00_7640;
{ /* Unsafe/http.scm 677 */
int BgL_res6986z00_13675;
BgL_res6986z00_13675 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7631, BgL_forwardz00_7633); 
BgL_curz00_7640 = BgL_res6986z00_13675; } 
{ /* Unsafe/http.scm 677 */

if(
(
(long)(BgL_curz00_7640)==((long)13)))
{ /* Unsafe/http.scm 677 */
long BgL_arg4714z00_7642;
BgL_arg4714z00_7642 = 
(((long)1)+BgL_forwardz00_7633); 
{ 
long BgL_forwardz00_13681;long BgL_bufposz00_13682;
BgL_forwardz00_13681 = BgL_arg4714z00_7642; 
BgL_bufposz00_13682 = BgL_bufposz00_7634; 
BgL_statezd28zd21291z00_13680:
if(
(BgL_forwardz00_13681==BgL_bufposz00_13682))
{ /* Unsafe/http.scm 677 */
if(
rgc_fill_buffer(BgL_iportz00_7631))
{ /* Unsafe/http.scm 677 */
long BgL_arg4723z00_13685;long BgL_arg4724z00_13686;
{ /* Unsafe/http.scm 677 */
long BgL_res6991z00_13696;
BgL_res6991z00_13696 = 
RGC_BUFFER_FORWARD(BgL_iportz00_7631); 
BgL_arg4723z00_13685 = BgL_res6991z00_13696; } 
{ /* Unsafe/http.scm 677 */
long BgL_res6992z00_13698;
BgL_res6992z00_13698 = 
RGC_BUFFER_BUFPOS(BgL_iportz00_7631); 
BgL_arg4724z00_13686 = BgL_res6992z00_13698; } 
{ 
long BgL_bufposz00_19873;long BgL_forwardz00_19872;
BgL_forwardz00_19872 = BgL_arg4723z00_13685; 
BgL_bufposz00_19873 = BgL_arg4724z00_13686; 
BgL_bufposz00_13682 = BgL_bufposz00_19873; 
BgL_forwardz00_13681 = BgL_forwardz00_19872; 
goto BgL_statezd28zd21291z00_13680;} }  else 
{ /* Unsafe/http.scm 677 */
BgL_matchz00_7780 = BgL_lastzd2matchzd2_7632; } }  else 
{ /* Unsafe/http.scm 677 */
int BgL_curz00_13687;
{ /* Unsafe/http.scm 677 */
int BgL_res6993z00_13701;
BgL_res6993z00_13701 = 
RGC_BUFFER_GET_CHAR(BgL_iportz00_7631, BgL_forwardz00_13681); 
BgL_curz00_13687 = BgL_res6993z00_13701; } 
{ /* Unsafe/http.scm 677 */

if(
(
(long)(BgL_curz00_13687)==((long)10)))
{ /* Unsafe/http.scm 677 */
long BgL_arg4726z00_13689;
BgL_arg4726z00_13689 = 
(((long)1)+BgL_forwardz00_13681); 
{ /* Unsafe/http.scm 677 */
long BgL_newzd2matchzd2_13706;
{ /* Unsafe/http.scm 677 */
long BgL_res6996z00_13709;
BgL_res6996z00_13709 = 
RGC_STOP_MATCH(BgL_iportz00_7631, BgL_arg4726z00_13689); BgL_res6996z00_13709; } 
BgL_newzd2matchzd2_13706 = ((long)0); 
BgL_matchz00_7780 = BgL_newzd2matchzd2_13706; } }  else 
{ /* Unsafe/http.scm 677 */
BgL_matchz00_7780 = BgL_lastzd2matchzd2_7632; } } } } }  else 
{ /* Unsafe/http.scm 677 */
if(
(
(long)(BgL_curz00_7640)==((long)10)))
{ /* Unsafe/http.scm 677 */
long BgL_arg4716z00_7644;
BgL_arg4716z00_7644 = 
(((long)1)+BgL_forwardz00_7633); 
{ /* Unsafe/http.scm 677 */
long BgL_newzd2matchzd2_13714;
{ /* Unsafe/http.scm 677 */
long BgL_res6999z00_13717;
BgL_res6999z00_13717 = 
RGC_STOP_MATCH(BgL_iportz00_7631, BgL_arg4716z00_7644); BgL_res6999z00_13717; } 
BgL_newzd2matchzd2_13714 = ((long)0); 
BgL_matchz00_7780 = BgL_newzd2matchzd2_13714; } }  else 
{ /* Unsafe/http.scm 677 */
bool_t BgL_test8410z00_19885;
if(
(
(long)(BgL_curz00_7640)==((long)9)))
{ /* Unsafe/http.scm 677 */
BgL_test8410z00_19885 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 677 */
BgL_test8410z00_19885 = 
(
(long)(BgL_curz00_7640)==((long)32))
; } 
if(BgL_test8410z00_19885)
{ 
long BgL_forwardz00_19891;
BgL_forwardz00_19891 = 
(((long)1)+BgL_forwardz00_7633); 
BgL_forwardz00_7633 = BgL_forwardz00_19891; 
goto BgL_zc3z04anonymousza34708ze3z87_7635;}  else 
{ /* Unsafe/http.scm 677 */
BgL_matchz00_7780 = BgL_lastzd2matchzd2_7632; } } } } } }  else 
{ /* Unsafe/http.scm 677 */
BgL_matchz00_7780 = BgL_newzd2matchzd2_7592; } } } } } } }  else 
{ /* Unsafe/http.scm 677 */
long BgL_arg4685z00_7579;
BgL_arg4685z00_7579 = 
(((long)1)+BgL_forwardz00_7564); 
{ /* Unsafe/http.scm 677 */
long BgL_newzd2matchzd2_13562;
{ /* Unsafe/http.scm 677 */
long BgL_res6947z00_13565;
BgL_res6947z00_13565 = 
RGC_STOP_MATCH(BgL_iportz00_7562, BgL_arg4685z00_7579); BgL_res6947z00_13565; } 
BgL_newzd2matchzd2_13562 = ((long)1); 
BgL_matchz00_7780 = BgL_newzd2matchzd2_13562; } } } } } } } 
RGC_SET_FILEPOS(BgL_iportz00_7525); 
switch( BgL_matchz00_7780) { case ((long)1) : 

{ /* Unsafe/http.scm 681 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_arg4815z00_7784;
{ /* Unsafe/http.scm 681 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1295z00_7785;
{ /* Unsafe/http.scm 681 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1294z00_7790;
BgL_new1294z00_7790 = 
((BgL_z62iozd2parsezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2parsezd2errorz62_bgl) ))); 
{ /* Unsafe/http.scm 681 */
long BgL_arg4820z00_7791;
{ /* Unsafe/http.scm 681 */
long BgL_res7025z00_13792;
BgL_res7025z00_13792 = 
BGL_CLASS_INDEX(BGl_z62iozd2parsezd2errorz62zz__objectz00); 
BgL_arg4820z00_7791 = BgL_res7025z00_13792; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1294z00_7790), BgL_arg4820z00_7791); } 
BgL_new1295z00_7785 = BgL_new1294z00_7790; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1295z00_7785)))->BgL_fnamez00)=((obj_t)BFALSE),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1295z00_7785)))->BgL_locationz00)=((obj_t)BFALSE),BUNSPEC); 
{ 
obj_t BgL_auxz00_19906;
{ /* Unsafe/http.scm 681 */
obj_t BgL_arg4816z00_7786;
{ /* Unsafe/http.scm 681 */
obj_t BgL_arg4817z00_7787;
{ /* Unsafe/http.scm 681 */
obj_t BgL_res7026z00_13796;
{ /* Unsafe/http.scm 681 */
obj_t BgL_classz00_13795;
BgL_classz00_13795 = BGl_z62iozd2parsezd2errorz62zz__objectz00; 
BgL_res7026z00_13796 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_13795); } 
BgL_arg4817z00_7787 = BgL_res7026z00_13796; } 
BgL_arg4816z00_7786 = 
VECTOR_REF(BgL_arg4817z00_7787,((long)2)); } 
BgL_auxz00_19906 = 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_arg4816z00_7786); } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1295z00_7785)))->BgL_stackz00)=((obj_t)BgL_auxz00_19906),BUNSPEC); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1295z00_7785)))->BgL_procz00)=((obj_t)BGl_symbol7399z00zz__httpz00),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1295z00_7785)))->BgL_msgz00)=((obj_t)BGl_string7256z00zz__httpz00),BUNSPEC); 
{ 
obj_t BgL_auxz00_19916;
{ /* Unsafe/http.scm 684 */
obj_t BgL_arg4818z00_7788;
{ /* Unsafe/http.scm 677 */
bool_t BgL_test8412z00_19918;
{ /* Unsafe/http.scm 677 */
long BgL_arg4807z00_7770;
{ /* Unsafe/http.scm 677 */
long BgL_res7019z00_13779;
BgL_res7019z00_13779 = 
RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_7525); 
BgL_arg4807z00_7770 = BgL_res7019z00_13779; } 
BgL_test8412z00_19918 = 
(BgL_arg4807z00_7770==((long)0)); } 
if(BgL_test8412z00_19918)
{ /* Unsafe/http.scm 677 */
BgL_arg4818z00_7788 = BEOF; }  else 
{ /* Unsafe/http.scm 677 */
unsigned char BgL_res7021z00_13783;
BgL_res7021z00_13783 = 
RGC_BUFFER_CHARACTER(BgL_iportz00_7525); 
BgL_arg4818z00_7788 = 
BCHAR(BgL_res7021z00_13783); } } 
BgL_auxz00_19916 = 
BGl_httpzd2parsezd2errorzd2msgzd2zz__httpz00(BgL_arg4818z00_7788, BgL_iportz00_7525); } 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1295z00_7785)))->BgL_objz00)=((obj_t)BgL_auxz00_19916),BUNSPEC); } 
BgL_arg4815z00_7784 = BgL_new1295z00_7785; } 
return 
BGl_raisez00zz__errorz00(
((obj_t)BgL_arg4815z00_7784));} break;case ((long)0) : 

return BGl_string7326z00zz__httpz00;break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_string7254z00zz__httpz00, BGl_string7255z00zz__httpz00, 
BINT(BgL_matchz00_7780));} } } } } 

}



/* &http-read-crlf */
obj_t BGl_z62httpzd2readzd2crlfz62zz__httpz00(obj_t BgL_envz00_14350, obj_t BgL_pz00_14351)
{
{ /* Unsafe/http.scm 675 */
{ /* Unsafe/http.scm 677 */
obj_t BgL_auxz00_19930;
if(
INPUT_PORTP(BgL_pz00_14351))
{ /* Unsafe/http.scm 677 */
BgL_auxz00_19930 = BgL_pz00_14351
; }  else 
{ 
obj_t BgL_auxz00_19933;
BgL_auxz00_19933 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)23375)), BGl_string7401z00zz__httpz00, BGl_string7359z00zz__httpz00, BgL_pz00_14351); 
FAILURE(BgL_auxz00_19933,BFALSE,BFALSE);} 
return 
BGl_httpzd2readzd2crlfz00zz__httpz00(BgL_auxz00_19930);} } 

}



/* barrier-port */
obj_t BGl_barrierzd2portzd2zz__httpz00(obj_t BgL_portz00_62, obj_t BgL_contentzd2lengthzd2_63)
{
{ /* Unsafe/http.scm 740 */
{ /* Unsafe/http.scm 741 */
obj_t BgL_contentzd2lengthzd2_14358;
BgL_contentzd2lengthzd2_14358 = 
MAKE_CELL(BgL_contentzd2lengthzd2_63); 
{ /* Unsafe/http.scm 741 */
obj_t BgL_bufz00_7830;
{ /* Ieee/string.scm 168 */

BgL_bufz00_7830 = 
make_string(((long)8192), ((unsigned char)' ')); } 
{ /* Unsafe/http.scm 742 */
obj_t BgL_zc3z04anonymousza34823ze3z87_14352;
BgL_zc3z04anonymousza34823ze3z87_14352 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza34823ze3ze5zz__httpz00, 
(int)(((long)0)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3z04anonymousza34823ze3z87_14352, 
(int)(((long)0)), 
((obj_t)BgL_contentzd2lengthzd2_14358)); 
PROCEDURE_SET(BgL_zc3z04anonymousza34823ze3z87_14352, 
(int)(((long)1)), BgL_bufz00_7830); 
PROCEDURE_SET(BgL_zc3z04anonymousza34823ze3z87_14352, 
(int)(((long)2)), BgL_portz00_62); 
return BgL_zc3z04anonymousza34823ze3z87_14352;} } } } 

}



/* &<@anonymous:4823> */
obj_t BGl_z62zc3z04anonymousza34823ze3ze5zz__httpz00(obj_t BgL_envz00_14353)
{
{ /* Unsafe/http.scm 742 */
{ /* Unsafe/http.scm 743 */
obj_t BgL_contentzd2lengthzd2_14354;obj_t BgL_bufz00_14355;obj_t BgL_portz00_14356;
BgL_contentzd2lengthzd2_14354 = 
PROCEDURE_REF(BgL_envz00_14353, 
(int)(((long)0))); 
BgL_bufz00_14355 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_14353, 
(int)(((long)1)))); 
BgL_portz00_14356 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_14353, 
(int)(((long)2)))); 
{ /* Unsafe/http.scm 743 */
bool_t BgL_test8414z00_19957;
{ /* Unsafe/http.scm 743 */
long BgL_n1z00_15087;
{ /* Unsafe/http.scm 743 */
obj_t BgL_tmpz00_19958;
BgL_tmpz00_19958 = 
CELL_REF(BgL_contentzd2lengthzd2_14354); 
BgL_n1z00_15087 = 
BELONG_TO_LONG(BgL_tmpz00_19958); } 
BgL_test8414z00_19957 = 
(BgL_n1z00_15087>((long)0)); } 
if(BgL_test8414z00_19957)
{ /* Unsafe/http.scm 744 */
long BgL_nz00_15088;
{ /* Unsafe/http.scm 744 */
long BgL_bz00_15089;
{ /* Unsafe/http.scm 744 */
long BgL_res7030z00_15090;
{ /* Unsafe/http.scm 744 */
long BgL_xz00_15091;
{ /* Unsafe/http.scm 744 */
obj_t BgL_tmpz00_19961;
BgL_tmpz00_19961 = 
CELL_REF(BgL_contentzd2lengthzd2_14354); 
BgL_xz00_15091 = 
BELONG_TO_LONG(BgL_tmpz00_19961); } 
BgL_res7030z00_15090 = 
(long)(BgL_xz00_15091); } 
BgL_bz00_15089 = BgL_res7030z00_15090; } 
if(
(((long)8192)<BgL_bz00_15089))
{ /* Unsafe/http.scm 744 */
BgL_nz00_15088 = ((long)8192); }  else 
{ /* Unsafe/http.scm 744 */
BgL_nz00_15088 = BgL_bz00_15089; } } 
{ /* Unsafe/http.scm 744 */
obj_t BgL_mz00_15092;
BgL_mz00_15092 = 
BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(BgL_bufz00_14355, 
BINT(BgL_nz00_15088), BgL_portz00_14356); 
{ /* Unsafe/http.scm 745 */

{ /* Unsafe/http.scm 746 */
obj_t BgL_auxz00_15093;
{ /* Unsafe/http.scm 746 */
long BgL_arg4825z00_15094;
{ /* Unsafe/http.scm 746 */
long BgL_res7032z00_15095;
{ /* Unsafe/http.scm 746 */
long BgL_tmpz00_19968;
BgL_tmpz00_19968 = 
(long)CINT(BgL_mz00_15092); 
BgL_res7032z00_15095 = 
(long)(BgL_tmpz00_19968); } 
BgL_arg4825z00_15094 = BgL_res7032z00_15095; } 
{ /* Unsafe/http.scm 746 */
long BgL_res7033z00_15096;
{ /* Unsafe/http.scm 746 */
long BgL_za71za7_15097;
{ /* Unsafe/http.scm 746 */
obj_t BgL_tmpz00_19971;
BgL_tmpz00_19971 = 
CELL_REF(BgL_contentzd2lengthzd2_14354); 
BgL_za71za7_15097 = 
BELONG_TO_LONG(BgL_tmpz00_19971); } 
{ /* Unsafe/http.scm 746 */
long BgL_tmpz00_19973;
BgL_tmpz00_19973 = 
(BgL_za71za7_15097-BgL_arg4825z00_15094); 
BgL_res7033z00_15096 = 
(long)(BgL_tmpz00_19973); } } 
BgL_auxz00_15093 = 
make_belong(BgL_res7033z00_15096); } } 
CELL_SET(BgL_contentzd2lengthzd2_14354, BgL_auxz00_15093); } 
if(
(
(long)CINT(BgL_mz00_15092)<((long)8192)))
{ /* Unsafe/http.scm 747 */
return 
c_substring(BgL_bufz00_14355, ((long)0), 
(long)CINT(BgL_mz00_15092));}  else 
{ /* Unsafe/http.scm 747 */
return BgL_bufz00_14355;} } } }  else 
{ /* Unsafe/http.scm 743 */
return BFALSE;} } } } 

}



/* http-chunks->procedure */
BGL_EXPORTED_DEF obj_t BGl_httpzd2chunkszd2ze3procedureze3zz__httpz00(obj_t BgL_ipz00_64)
{
{ /* Unsafe/http.scm 754 */
{ /* Unsafe/http.scm 755 */
obj_t BgL_statez00_14376;
BgL_statez00_14376 = 
MAKE_CELL(BGl_symbol7402z00zz__httpz00); 
{ /* Unsafe/http.scm 755 */
obj_t BgL_sza7za7_14377;
BgL_sza7za7_14377 = 
MAKE_CELL(
BINT(((long)0))); 
{ /* Unsafe/http.scm 757 */
obj_t BgL_bufferz00_7845;
BgL_bufferz00_7845 = 
make_string(((long)512), ((unsigned char)'\000')); 
{ /* Unsafe/http.scm 758 */

{ /* Unsafe/http.scm 759 */
obj_t BgL_zc3z04anonymousza34828ze3z87_14359;
BgL_zc3z04anonymousza34828ze3z87_14359 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza34828ze3ze5zz__httpz00, 
(int)(((long)0)), 
(int)(((long)5))); 
PROCEDURE_SET(BgL_zc3z04anonymousza34828ze3z87_14359, 
(int)(((long)0)), 
((obj_t)BgL_statez00_14376)); 
PROCEDURE_SET(BgL_zc3z04anonymousza34828ze3z87_14359, 
(int)(((long)1)), BgL_ipz00_64); 
PROCEDURE_SET(BgL_zc3z04anonymousza34828ze3z87_14359, 
(int)(((long)2)), 
((obj_t)BgL_sza7za7_14377)); 
PROCEDURE_SET(BgL_zc3z04anonymousza34828ze3z87_14359, 
(int)(((long)3)), BgL_bufferz00_7845); 
PROCEDURE_SET(BgL_zc3z04anonymousza34828ze3z87_14359, 
(int)(((long)4)), 
BINT(((long)512))); 
return BgL_zc3z04anonymousza34828ze3z87_14359;} } } } } } 

}



/* &http-chunks->procedure */
obj_t BGl_z62httpzd2chunkszd2ze3procedurez81zz__httpz00(obj_t BgL_envz00_14360, obj_t BgL_ipz00_14361)
{
{ /* Unsafe/http.scm 754 */
{ /* Unsafe/http.scm 755 */
obj_t BgL_auxz00_20000;
if(
INPUT_PORTP(BgL_ipz00_14361))
{ /* Unsafe/http.scm 755 */
BgL_auxz00_20000 = BgL_ipz00_14361
; }  else 
{ 
obj_t BgL_auxz00_20003;
BgL_auxz00_20003 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)26324)), BGl_string7404z00zz__httpz00, BGl_string7359z00zz__httpz00, BgL_ipz00_14361); 
FAILURE(BgL_auxz00_20003,BFALSE,BFALSE);} 
return 
BGl_httpzd2chunkszd2ze3procedureze3zz__httpz00(BgL_auxz00_20000);} } 

}



/* &<@anonymous:4828> */
obj_t BGl_z62zc3z04anonymousza34828ze3ze5zz__httpz00(obj_t BgL_envz00_14362)
{
{ /* Unsafe/http.scm 759 */
{ /* Unsafe/http.scm 761 */
obj_t BgL_statez00_14363;obj_t BgL_ipz00_14364;obj_t BgL_sza7za7_14365;obj_t BgL_bufferz00_14366;long BgL_bufsza7za7_14367;
BgL_statez00_14363 = 
PROCEDURE_REF(BgL_envz00_14362, 
(int)(((long)0))); 
BgL_ipz00_14364 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_14362, 
(int)(((long)1)))); 
BgL_sza7za7_14365 = 
PROCEDURE_REF(BgL_envz00_14362, 
(int)(((long)2))); 
BgL_bufferz00_14366 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_14362, 
(int)(((long)3)))); 
BgL_bufsza7za7_14367 = 
(long)CINT(
PROCEDURE_REF(BgL_envz00_14362, 
(int)(((long)4)))); 
{ 

BgL_loopz00_15098:
{ /* Unsafe/http.scm 761 */
obj_t BgL_casezd2valuezd2_15099;
BgL_casezd2valuezd2_15099 = 
CELL_REF(BgL_statez00_14363); 
if(
(BgL_casezd2valuezd2_15099==BGl_symbol7405z00zz__httpz00))
{ /* Unsafe/http.scm 761 */
return BFALSE;}  else 
{ /* Unsafe/http.scm 761 */
if(
(BgL_casezd2valuezd2_15099==BGl_symbol7407z00zz__httpz00))
{ /* Unsafe/http.scm 765 */
obj_t BgL_lz00_15100;
BgL_lz00_15100 = 
BGl_httpzd2readzd2linez00zz__httpz00(BgL_ipz00_14364); 
{ /* Unsafe/http.scm 767 */
bool_t BgL_test8420z00_20026;
{ /* Unsafe/http.scm 767 */
bool_t BgL_res7039z00_15101;
BgL_res7039z00_15101 = 
EOF_OBJECTP(BgL_lz00_15100); 
BgL_test8420z00_20026 = BgL_res7039z00_15101; } 
if(BgL_test8420z00_20026)
{ /* Unsafe/http.scm 767 */
{ /* Unsafe/http.scm 768 */
obj_t BgL_auxz00_15102;
BgL_auxz00_15102 = BGl_symbol7405z00zz__httpz00; 
CELL_SET(BgL_statez00_14363, BgL_auxz00_15102); } 
return BGl_string7355z00zz__httpz00;}  else 
{ /* Unsafe/http.scm 770 */
bool_t BgL_test8421z00_20028;
{ /* Unsafe/http.scm 770 */
bool_t BgL_test8422z00_20029;
{ /* Unsafe/http.scm 770 */
bool_t BgL_res7044z00_15103;
{ /* Unsafe/http.scm 770 */
long BgL_l1z00_15104;
BgL_l1z00_15104 = 
STRING_LENGTH(
((obj_t)BgL_lz00_15100)); 
if(
(BgL_l1z00_15104==((long)2)))
{ /* Unsafe/http.scm 770 */
int BgL_arg4983z00_15105;
{ /* Unsafe/http.scm 770 */
char * BgL_auxz00_20037;char * BgL_tmpz00_20034;
BgL_auxz00_20037 = 
BSTRING_TO_STRING(BGl_string7326z00zz__httpz00); 
BgL_tmpz00_20034 = 
BSTRING_TO_STRING(
((obj_t)BgL_lz00_15100)); 
BgL_arg4983z00_15105 = 
memcmp(BgL_tmpz00_20034, BgL_auxz00_20037, BgL_l1z00_15104); } 
BgL_res7044z00_15103 = 
(
(long)(BgL_arg4983z00_15105)==((long)0)); }  else 
{ /* Unsafe/http.scm 770 */
BgL_res7044z00_15103 = ((bool_t)0); } } 
BgL_test8422z00_20029 = BgL_res7044z00_15103; } 
if(BgL_test8422z00_20029)
{ /* Unsafe/http.scm 770 */
BgL_test8421z00_20028 = ((bool_t)1)
; }  else 
{ /* Unsafe/http.scm 770 */
bool_t BgL_res7049z00_15106;
{ /* Unsafe/http.scm 770 */
long BgL_l1z00_15107;
BgL_l1z00_15107 = 
STRING_LENGTH(
((obj_t)BgL_lz00_15100)); 
if(
(BgL_l1z00_15107==((long)1)))
{ /* Unsafe/http.scm 770 */
int BgL_arg4983z00_15108;
{ /* Unsafe/http.scm 770 */
char * BgL_auxz00_20049;char * BgL_tmpz00_20046;
BgL_auxz00_20049 = 
BSTRING_TO_STRING(BGl_string7409z00zz__httpz00); 
BgL_tmpz00_20046 = 
BSTRING_TO_STRING(
((obj_t)BgL_lz00_15100)); 
BgL_arg4983z00_15108 = 
memcmp(BgL_tmpz00_20046, BgL_auxz00_20049, BgL_l1z00_15107); } 
BgL_res7049z00_15106 = 
(
(long)(BgL_arg4983z00_15108)==((long)0)); }  else 
{ /* Unsafe/http.scm 770 */
BgL_res7049z00_15106 = ((bool_t)0); } } 
BgL_test8421z00_20028 = BgL_res7049z00_15106; } } 
if(BgL_test8421z00_20028)
{ /* Unsafe/http.scm 770 */
{ /* Unsafe/http.scm 771 */
obj_t BgL_auxz00_15109;
BgL_auxz00_15109 = BGl_symbol7405z00zz__httpz00; 
CELL_SET(BgL_statez00_14363, BgL_auxz00_15109); } 
return BGl_string7355z00zz__httpz00;}  else 
{ /* Unsafe/http.scm 770 */
return BGl_string7355z00zz__httpz00;} } } }  else 
{ /* Unsafe/http.scm 761 */
if(
(BgL_casezd2valuezd2_15099==BGl_symbol7410z00zz__httpz00))
{ /* Unsafe/http.scm 761 */
if(
(
(long)CINT(
CELL_REF(BgL_sza7za7_14365))==((long)0)))
{ /* Unsafe/http.scm 777 */
BGl_httpzd2readzd2crlfz00zz__httpz00(BgL_ipz00_14364); 
{ /* Unsafe/http.scm 779 */
obj_t BgL_auxz00_15110;
BgL_auxz00_15110 = BGl_symbol7402z00zz__httpz00; 
CELL_SET(BgL_statez00_14363, BgL_auxz00_15110); } 
goto BgL_loopz00_15098;}  else 
{ /* Unsafe/http.scm 777 */
if(
(
(long)CINT(
CELL_REF(BgL_sza7za7_14365))<BgL_bufsza7za7_14367))
{ /* Unsafe/http.scm 782 */
obj_t BgL_sz00_15111;
BgL_sz00_15111 = 
BGl_readzd2charszd2zz__r4_input_6_10_2z00(
CELL_REF(BgL_sza7za7_14365), BgL_ipz00_14364); 
{ /* Unsafe/http.scm 783 */
obj_t BgL_auxz00_15112;
BgL_auxz00_15112 = 
SUBFX(
CELL_REF(BgL_sza7za7_14365), 
BINT(
STRING_LENGTH(
((obj_t)BgL_sz00_15111)))); 
CELL_SET(BgL_sza7za7_14365, BgL_auxz00_15112); } 
return BgL_sz00_15111;}  else 
{ /* Unsafe/http.scm 786 */
obj_t BgL_sz00_15113;
BgL_sz00_15113 = 
BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(BgL_bufferz00_14366, 
BINT(((long)512)), BgL_ipz00_14364); 
{ /* Unsafe/http.scm 787 */
obj_t BgL_auxz00_15114;
BgL_auxz00_15114 = 
SUBFX(
CELL_REF(BgL_sza7za7_14365), BgL_sz00_15113); 
CELL_SET(BgL_sza7za7_14365, BgL_auxz00_15114); } 
if(
(
(long)CINT(BgL_sz00_15113)==BgL_bufsza7za7_14367))
{ /* Unsafe/http.scm 788 */
return BgL_bufferz00_14366;}  else 
{ /* Unsafe/http.scm 788 */
return 
c_substring(BgL_bufferz00_14366, ((long)0), 
(long)CINT(BgL_sz00_15113));} } } }  else 
{ /* Unsafe/http.scm 761 */
{ /* Unsafe/http.scm 792 */
obj_t BgL_auxz00_15115;
BgL_auxz00_15115 = 
BGl_z62zc3z04anonymousza31807ze3ze5zz__httpz00(BGl_za2chunkzd2siza7ezd2grammarza2za7zz__httpz00, BgL_ipz00_14364, BFALSE); 
CELL_SET(BgL_sza7za7_14365, BgL_auxz00_15115); } 
if(
(
(long)CINT(
CELL_REF(BgL_sza7za7_14365))>((long)0)))
{ /* Unsafe/http.scm 793 */
{ /* Unsafe/http.scm 796 */
obj_t BgL_auxz00_15116;
BgL_auxz00_15116 = BGl_symbol7410z00zz__httpz00; 
CELL_SET(BgL_statez00_14363, BgL_auxz00_15116); } 
goto BgL_loopz00_15098;}  else 
{ /* Unsafe/http.scm 793 */
{ /* Unsafe/http.scm 800 */
obj_t BgL_auxz00_15117;
BgL_auxz00_15117 = BGl_symbol7407z00zz__httpz00; 
CELL_SET(BgL_statez00_14363, BgL_auxz00_15117); } 
goto BgL_loopz00_15098;} } } } } } } } 

}



/* http-chunks->port */
BGL_EXPORTED_DEF obj_t BGl_httpzd2chunkszd2ze3portze3zz__httpz00(obj_t BgL_ipz00_65)
{
{ /* Unsafe/http.scm 806 */
{ /* Unsafe/http.scm 807 */
obj_t BgL_ip2z00_7866;
{ /* Unsafe/http.scm 807 */
obj_t BgL_arg4843z00_7871;
BgL_arg4843z00_7871 = 
BGl_httpzd2chunkszd2ze3procedureze3zz__httpz00(BgL_ipz00_65); 
{ /* Ieee/port.scm 445 */

BgL_ip2z00_7866 = 
BGl_openzd2inputzd2procedurez00zz__r4_ports_6_10_1z00(BgL_arg4843z00_7871, BTRUE); } } 
{ /* Unsafe/http.scm 808 */
obj_t BgL_zc3z04anonymousza34842ze3z87_14380;
BgL_zc3z04anonymousza34842ze3z87_14380 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza34842ze3ze5zz__httpz00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza34842ze3z87_14380, 
(int)(((long)0)), BgL_ipz00_65); 
BGl_inputzd2portzd2closezd2hookzd2setz12z12zz__r4_ports_6_10_1z00(BgL_ipz00_65, BgL_zc3z04anonymousza34842ze3z87_14380); } 
return BgL_ip2z00_7866;} } 

}



/* &http-chunks->port */
obj_t BGl_z62httpzd2chunkszd2ze3portz81zz__httpz00(obj_t BgL_envz00_14381, obj_t BgL_ipz00_14382)
{
{ /* Unsafe/http.scm 806 */
{ /* Unsafe/http.scm 807 */
obj_t BgL_auxz00_20092;
if(
INPUT_PORTP(BgL_ipz00_14382))
{ /* Unsafe/http.scm 807 */
BgL_auxz00_20092 = BgL_ipz00_14382
; }  else 
{ 
obj_t BgL_auxz00_20095;
BgL_auxz00_20095 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)27663)), BGl_string7412z00zz__httpz00, BGl_string7359z00zz__httpz00, BgL_ipz00_14382); 
FAILURE(BgL_auxz00_20095,BFALSE,BFALSE);} 
return 
BGl_httpzd2chunkszd2ze3portze3zz__httpz00(BgL_auxz00_20092);} } 

}



/* &<@anonymous:4842> */
obj_t BGl_z62zc3z04anonymousza34842ze3ze5zz__httpz00(obj_t BgL_envz00_14383, obj_t BgL_inz00_14385)
{
{ /* Unsafe/http.scm 808 */
{ /* Unsafe/http.scm 808 */
obj_t BgL_ipz00_14384;
BgL_ipz00_14384 = 
((obj_t)
PROCEDURE_REF(BgL_envz00_14383, 
(int)(((long)0)))); 
return 
bgl_close_input_port(BgL_ipz00_14384);} } 

}



/* http-send-chunks */
BGL_EXPORTED_DEF obj_t BGl_httpzd2sendzd2chunksz00zz__httpz00(obj_t BgL_ipz00_66, obj_t BgL_opz00_67, bool_t BgL_trailerz00_68)
{
{ /* Unsafe/http.scm 814 */
{ 

BgL_zc3z04anonymousza34844ze3z87_7875:
{ /* Unsafe/http.scm 816 */
obj_t BgL_sza7za7_7876;
BgL_sza7za7_7876 = 
BGl_z62zc3z04anonymousza31807ze3ze5zz__httpz00(BGl_za2chunkzd2siza7ezd2grammarza2za7zz__httpz00, BgL_ipz00_66, BgL_opz00_67); 
if(
(
(long)CINT(BgL_sza7za7_7876)>((long)0)))
{ /* Unsafe/http.scm 817 */
{ 
obj_t BgL_sza7za7_7879;
BgL_sza7za7_7879 = BgL_sza7za7_7876; 
BgL_zc3z04anonymousza34846ze3z87_7880:
if(
(
(long)CINT(BgL_sza7za7_7879)>((long)0)))
{ /* Unsafe/http.scm 822 */
long BgL_sz00_7882;
{ /* Ieee/input.scm 85 */

BgL_sz00_7882 = 
BGl_sendzd2charszd2zz__r4_input_6_10_2z00(BgL_ipz00_66, BgL_opz00_67, BgL_sza7za7_7879, 
BINT(((long)-1))); } 
if(
(BgL_sz00_7882>((long)0)))
{ /* Unsafe/http.scm 824 */
long BgL_arg4849z00_7884;
BgL_arg4849z00_7884 = 
(
(long)CINT(BgL_sza7za7_7879)-BgL_sz00_7882); 
{ 
obj_t BgL_sza7za7_20121;
BgL_sza7za7_20121 = 
BINT(BgL_arg4849z00_7884); 
BgL_sza7za7_7879 = BgL_sza7za7_20121; 
goto BgL_zc3z04anonymousza34846ze3z87_7880;} }  else 
{ /* Unsafe/http.scm 823 */((bool_t)0); } }  else 
{ /* Unsafe/http.scm 821 */((bool_t)0); } } 
bgl_flush_output_port(BgL_opz00_67); 
{ /* Unsafe/http.scm 826 */
obj_t BgL_sz00_7890;
BgL_sz00_7890 = 
BGl_httpzd2readzd2crlfz00zz__httpz00(BgL_ipz00_66); 
bgl_display_obj(BgL_sz00_7890, BgL_opz00_67); 
goto BgL_zc3z04anonymousza34844ze3z87_7875;} }  else 
{ /* Unsafe/http.scm 817 */
if(BgL_trailerz00_68)
{ 

BgL_zc3z04anonymousza34850ze3z87_7892:
{ /* Unsafe/http.scm 832 */
obj_t BgL_lz00_7893;
BgL_lz00_7893 = 
BGl_httpzd2readzd2linez00zz__httpz00(BgL_ipz00_66); 
{ /* Unsafe/http.scm 833 */
bool_t BgL_test8435z00_20128;
{ /* Unsafe/http.scm 833 */
bool_t BgL_res7063z00_13892;
BgL_res7063z00_13892 = 
EOF_OBJECTP(BgL_lz00_7893); 
BgL_test8435z00_20128 = BgL_res7063z00_13892; } 
if(BgL_test8435z00_20128)
{ /* Unsafe/http.scm 833 */
return 
bgl_flush_output_port(BgL_opz00_67);}  else 
{ /* Unsafe/http.scm 833 */
bgl_display_obj(BgL_lz00_7893, BgL_opz00_67); 
if(
(
STRING_LENGTH(
((obj_t)BgL_lz00_7893))>((long)2)))
{ /* Unsafe/http.scm 837 */
goto BgL_zc3z04anonymousza34850ze3z87_7892;}  else 
{ /* Unsafe/http.scm 837 */
return 
bgl_flush_output_port(BgL_opz00_67);} } } } }  else 
{ /* Unsafe/http.scm 830 */
bgl_display_obj(
BGl_httpzd2readzd2linez00zz__httpz00(BgL_ipz00_66), BgL_opz00_67); 
return 
bgl_flush_output_port(BgL_opz00_67);} } } } } 

}



/* &http-send-chunks */
obj_t BGl_z62httpzd2sendzd2chunksz62zz__httpz00(obj_t BgL_envz00_14386, obj_t BgL_ipz00_14387, obj_t BgL_opz00_14388, obj_t BgL_trailerz00_14389)
{
{ /* Unsafe/http.scm 814 */
{ /* Unsafe/http.scm 816 */
obj_t BgL_auxz00_20147;obj_t BgL_auxz00_20140;
if(
OUTPUT_PORTP(BgL_opz00_14388))
{ /* Unsafe/http.scm 816 */
BgL_auxz00_20147 = BgL_opz00_14388
; }  else 
{ 
obj_t BgL_auxz00_20150;
BgL_auxz00_20150 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)28130)), BGl_string7413z00zz__httpz00, BGl_string7398z00zz__httpz00, BgL_opz00_14388); 
FAILURE(BgL_auxz00_20150,BFALSE,BFALSE);} 
if(
INPUT_PORTP(BgL_ipz00_14387))
{ /* Unsafe/http.scm 816 */
BgL_auxz00_20140 = BgL_ipz00_14387
; }  else 
{ 
obj_t BgL_auxz00_20143;
BgL_auxz00_20143 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string7317z00zz__httpz00, 
BINT(((long)28130)), BGl_string7413z00zz__httpz00, BGl_string7359z00zz__httpz00, BgL_ipz00_14387); 
FAILURE(BgL_auxz00_20143,BFALSE,BFALSE);} 
return 
BGl_httpzd2sendzd2chunksz00zz__httpz00(BgL_auxz00_20140, BgL_auxz00_20147, 
CBOOL(BgL_trailerz00_14389));} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__httpz00()
{
{ /* Unsafe/http.scm 15 */
{ /* Unsafe/http.scm 54 */
obj_t BgL_arg4859z00_7904;obj_t BgL_arg4860z00_7905;
{ /* Unsafe/http.scm 54 */
obj_t BgL_v1435z00_7921;
BgL_v1435z00_7921 = 
create_vector(((long)0)); 
BgL_arg4859z00_7904 = BgL_v1435z00_7921; } 
{ /* Unsafe/http.scm 54 */
obj_t BgL_v1436z00_7922;
BgL_v1436z00_7922 = 
create_vector(((long)0)); 
BgL_arg4860z00_7905 = BgL_v1436z00_7922; } 
BGl_z62httpzd2errorzb0zz__httpz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol7417z00zz__httpz00, BGl_symbol7419z00zz__httpz00, BGl_z62errorz62zz__objectz00, ((long)19474), BGl_proc7416z00zz__httpz00, BGl_proc7415z00zz__httpz00, BFALSE, BGl_proc7414z00zz__httpz00, BFALSE, BgL_arg4859z00_7904, BgL_arg4860z00_7905); } 
{ /* Unsafe/http.scm 56 */
obj_t BgL_arg4869z00_7929;obj_t BgL_arg4870z00_7930;
{ /* Unsafe/http.scm 56 */
obj_t BgL_v1437z00_7946;
BgL_v1437z00_7946 = 
create_vector(((long)0)); 
BgL_arg4869z00_7929 = BgL_v1437z00_7946; } 
{ /* Unsafe/http.scm 56 */
obj_t BgL_v1438z00_7947;
BgL_v1438z00_7947 = 
create_vector(((long)0)); 
BgL_arg4870z00_7930 = BgL_v1438z00_7947; } 
BGl_z62httpzd2redirectionzd2errorz62zz__httpz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol7424z00zz__httpz00, BGl_symbol7419z00zz__httpz00, BGl_z62httpzd2errorzb0zz__httpz00, ((long)6005), BGl_proc7423z00zz__httpz00, BGl_proc7422z00zz__httpz00, BFALSE, BGl_proc7421z00zz__httpz00, BFALSE, BgL_arg4869z00_7929, BgL_arg4870z00_7930); } 
{ /* Unsafe/http.scm 57 */
obj_t BgL_arg4879z00_7954;obj_t BgL_arg4880z00_7955;
{ /* Unsafe/http.scm 57 */
obj_t BgL_v1439z00_7972;
BgL_v1439z00_7972 = 
create_vector(((long)1)); 
VECTOR_SET(BgL_v1439z00_7972,((long)0),
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol7428z00zz__httpz00, BGl_proc7427z00zz__httpz00, BGl_proc7426z00zz__httpz00, ((bool_t)1), ((bool_t)0), BFALSE, BFALSE, BGl_symbol7430z00zz__httpz00)); 
BgL_arg4879z00_7954 = BgL_v1439z00_7972; } 
{ /* Unsafe/http.scm 57 */
obj_t BgL_v1440z00_7983;
BgL_v1440z00_7983 = 
create_vector(((long)0)); 
BgL_arg4880z00_7955 = BgL_v1440z00_7983; } 
BGl_z62httpzd2statuszd2errorz62zz__httpz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol7435z00zz__httpz00, BGl_symbol7419z00zz__httpz00, BGl_z62httpzd2errorzb0zz__httpz00, ((long)8844), BGl_proc7434z00zz__httpz00, BGl_proc7433z00zz__httpz00, BFALSE, BGl_proc7432z00zz__httpz00, BFALSE, BgL_arg4879z00_7954, BgL_arg4880z00_7955); } 
{ /* Unsafe/http.scm 60 */
obj_t BgL_arg4894z00_7990;obj_t BgL_arg4895z00_7991;
{ /* Unsafe/http.scm 60 */
obj_t BgL_v1441z00_8006;
BgL_v1441z00_8006 = 
create_vector(((long)2)); 
VECTOR_SET(BgL_v1441z00_8006,((long)0),
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol7439z00zz__httpz00, BGl_proc7438z00zz__httpz00, BGl_proc7437z00zz__httpz00, ((bool_t)1), ((bool_t)0), BFALSE, BFALSE, BGl_symbol7440z00zz__httpz00)); 
VECTOR_SET(BgL_v1441z00_8006,((long)1),
BGl_makezd2classzd2fieldz00zz__objectz00(BGl_symbol7443z00zz__httpz00, BGl_proc7442z00zz__httpz00, BGl_proc7441z00zz__httpz00, ((bool_t)1), ((bool_t)0), BFALSE, BFALSE, BGl_symbol7445z00zz__httpz00)); 
BgL_arg4894z00_7990 = BgL_v1441z00_8006; } 
{ /* Unsafe/http.scm 60 */
obj_t BgL_v1442z00_8027;
BgL_v1442z00_8027 = 
create_vector(((long)0)); 
BgL_arg4895z00_7991 = BgL_v1442z00_8027; } 
return ( 
BGl_z62httpzd2redirectionzb0zz__httpz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol7450z00zz__httpz00, BGl_symbol7419z00zz__httpz00, BGl_z62exceptionz62zz__objectz00, ((long)45500), BGl_proc7449z00zz__httpz00, BGl_proc7448z00zz__httpz00, BFALSE, BGl_proc7447z00zz__httpz00, BFALSE, BgL_arg4894z00_7990, BgL_arg4895z00_7991), BUNSPEC) ;} } 

}



/* &<@anonymous:4900> */
obj_t BGl_z62zc3z04anonymousza34900ze3ze5zz__httpz00(obj_t BgL_envz00_14408, obj_t BgL_new1073z00_14409)
{
{ /* Unsafe/http.scm 60 */
{ 
BgL_z62httpzd2redirectionzb0_bglt BgL_auxz00_20174;
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62httpzd2redirectionzb0_bglt)BgL_new1073z00_14409))))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62httpzd2redirectionzb0_bglt)BgL_new1073z00_14409))))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62httpzd2redirectionzb0_bglt)BgL_new1073z00_14409))))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
{ 
obj_t BgL_auxz00_20184;
{ /* Unsafe/http.scm 60 */
obj_t BgL_res7074z00_15119;
{ /* Unsafe/http.scm 60 */
obj_t BgL_arg4971z00_15120;
BgL_arg4971z00_15120 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res7074z00_15119 = 
BGL_ENV_CURRENT_INPUT_PORT(BgL_arg4971z00_15120); } 
BgL_auxz00_20184 = BgL_res7074z00_15119; } 
((((BgL_z62httpzd2redirectionzb0_bglt)COBJECT(
((BgL_z62httpzd2redirectionzb0_bglt)BgL_new1073z00_14409)))->BgL_portz00)=((obj_t)BgL_auxz00_20184),BUNSPEC); } 
((((BgL_z62httpzd2redirectionzb0_bglt)COBJECT(
((BgL_z62httpzd2redirectionzb0_bglt)BgL_new1073z00_14409)))->BgL_urlz00)=((obj_t)BGl_string7355z00zz__httpz00),BUNSPEC); 
BgL_auxz00_20174 = 
((BgL_z62httpzd2redirectionzb0_bglt)BgL_new1073z00_14409); 
return 
((obj_t)BgL_auxz00_20174);} } 

}



/* &lambda4898 */
BgL_z62httpzd2redirectionzb0_bglt BGl_z62lambda4898z62zz__httpz00(obj_t BgL_envz00_14410)
{
{ /* Unsafe/http.scm 60 */
{ /* Unsafe/http.scm 60 */
BgL_z62httpzd2redirectionzb0_bglt BgL_new1072z00_15121;
BgL_new1072z00_15121 = 
((BgL_z62httpzd2redirectionzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62httpzd2redirectionzb0_bgl) ))); 
{ /* Unsafe/http.scm 60 */
long BgL_arg4899z00_15122;
{ /* Unsafe/http.scm 60 */
long BgL_res7073z00_15123;
BgL_res7073z00_15123 = 
BGL_CLASS_INDEX(BGl_z62httpzd2redirectionzb0zz__httpz00); 
BgL_arg4899z00_15122 = BgL_res7073z00_15123; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1072z00_15121), BgL_arg4899z00_15122); } 
return BgL_new1072z00_15121;} } 

}



/* &lambda4896 */
BgL_z62httpzd2redirectionzb0_bglt BGl_z62lambda4896z62zz__httpz00(obj_t BgL_envz00_14411, obj_t BgL_fname1067z00_14412, obj_t BgL_location1068z00_14413, obj_t BgL_stack1069z00_14414, obj_t BgL_port1070z00_14415, obj_t BgL_url1071z00_14416)
{
{ /* Unsafe/http.scm 60 */
{ /* Unsafe/http.scm 60 */
BgL_z62httpzd2redirectionzb0_bglt BgL_new1337z00_15126;
{ /* Unsafe/http.scm 60 */
BgL_z62httpzd2redirectionzb0_bglt BgL_new1336z00_15127;
BgL_new1336z00_15127 = 
((BgL_z62httpzd2redirectionzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62httpzd2redirectionzb0_bgl) ))); 
{ /* Unsafe/http.scm 60 */
long BgL_arg4897z00_15128;
{ /* Unsafe/http.scm 60 */
long BgL_res7072z00_15129;
BgL_res7072z00_15129 = 
BGL_CLASS_INDEX(BGl_z62httpzd2redirectionzb0zz__httpz00); 
BgL_arg4897z00_15128 = BgL_res7072z00_15129; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1336z00_15127), BgL_arg4897z00_15128); } 
BgL_new1337z00_15126 = BgL_new1336z00_15127; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1337z00_15126)))->BgL_fnamez00)=((obj_t)BgL_fname1067z00_14412),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1337z00_15126)))->BgL_locationz00)=((obj_t)BgL_location1068z00_14413),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1337z00_15126)))->BgL_stackz00)=((obj_t)BgL_stack1069z00_14414),BUNSPEC); 
((((BgL_z62httpzd2redirectionzb0_bglt)COBJECT(BgL_new1337z00_15126))->BgL_portz00)=((obj_t)
((obj_t)BgL_port1070z00_14415)),BUNSPEC); 
((((BgL_z62httpzd2redirectionzb0_bglt)COBJECT(BgL_new1337z00_15126))->BgL_urlz00)=((obj_t)
((obj_t)BgL_url1071z00_14416)),BUNSPEC); 
return BgL_new1337z00_15126;} } 

}



/* &lambda4910 */
obj_t BGl_z62lambda4910z62zz__httpz00(obj_t BgL_envz00_14417, obj_t BgL_oz00_14418, obj_t BgL_vz00_14419)
{
{ /* Unsafe/http.scm 60 */
return 
((((BgL_z62httpzd2redirectionzb0_bglt)COBJECT(
((BgL_z62httpzd2redirectionzb0_bglt)BgL_oz00_14418)))->BgL_urlz00)=((obj_t)
((obj_t)BgL_vz00_14419)),BUNSPEC);} 

}



/* &lambda4909 */
obj_t BGl_z62lambda4909z62zz__httpz00(obj_t BgL_envz00_14420, obj_t BgL_oz00_14421)
{
{ /* Unsafe/http.scm 60 */
return 
(((BgL_z62httpzd2redirectionzb0_bglt)COBJECT(
((BgL_z62httpzd2redirectionzb0_bglt)BgL_oz00_14421)))->BgL_urlz00);} 

}



/* &lambda4905 */
obj_t BGl_z62lambda4905z62zz__httpz00(obj_t BgL_envz00_14422, obj_t BgL_oz00_14423, obj_t BgL_vz00_14424)
{
{ /* Unsafe/http.scm 60 */
return 
((((BgL_z62httpzd2redirectionzb0_bglt)COBJECT(
((BgL_z62httpzd2redirectionzb0_bglt)BgL_oz00_14423)))->BgL_portz00)=((obj_t)
((obj_t)BgL_vz00_14424)),BUNSPEC);} 

}



/* &lambda4904 */
obj_t BGl_z62lambda4904z62zz__httpz00(obj_t BgL_envz00_14425, obj_t BgL_oz00_14426)
{
{ /* Unsafe/http.scm 60 */
return 
(((BgL_z62httpzd2redirectionzb0_bglt)COBJECT(
((BgL_z62httpzd2redirectionzb0_bglt)BgL_oz00_14426)))->BgL_portz00);} 

}



/* &<@anonymous:4885> */
obj_t BGl_z62zc3z04anonymousza34885ze3ze5zz__httpz00(obj_t BgL_envz00_14427, obj_t BgL_new1065z00_14428)
{
{ /* Unsafe/http.scm 57 */
{ 
BgL_z62httpzd2statuszd2errorz62_bglt BgL_auxz00_20221;
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62httpzd2statuszd2errorz62_bglt)BgL_new1065z00_14428))))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62httpzd2statuszd2errorz62_bglt)BgL_new1065z00_14428))))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62httpzd2statuszd2errorz62_bglt)BgL_new1065z00_14428))))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)
((BgL_z62httpzd2statuszd2errorz62_bglt)BgL_new1065z00_14428))))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)
((BgL_z62httpzd2statuszd2errorz62_bglt)BgL_new1065z00_14428))))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)
((BgL_z62httpzd2statuszd2errorz62_bglt)BgL_new1065z00_14428))))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62httpzd2statuszd2errorz62_bglt)COBJECT(
((BgL_z62httpzd2statuszd2errorz62_bglt)BgL_new1065z00_14428)))->BgL_statusz00)=((int)
(int)(((long)0))),BUNSPEC); 
BgL_auxz00_20221 = 
((BgL_z62httpzd2statuszd2errorz62_bglt)BgL_new1065z00_14428); 
return 
((obj_t)BgL_auxz00_20221);} } 

}



/* &lambda4883 */
BgL_z62httpzd2statuszd2errorz62_bglt BGl_z62lambda4883z62zz__httpz00(obj_t BgL_envz00_14429)
{
{ /* Unsafe/http.scm 57 */
{ /* Unsafe/http.scm 57 */
BgL_z62httpzd2statuszd2errorz62_bglt BgL_new1064z00_15137;
BgL_new1064z00_15137 = 
((BgL_z62httpzd2statuszd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62httpzd2statuszd2errorz62_bgl) ))); 
{ /* Unsafe/http.scm 57 */
long BgL_arg4884z00_15138;
{ /* Unsafe/http.scm 57 */
long BgL_res7071z00_15139;
BgL_res7071z00_15139 = 
BGL_CLASS_INDEX(BGl_z62httpzd2statuszd2errorz62zz__httpz00); 
BgL_arg4884z00_15138 = BgL_res7071z00_15139; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1064z00_15137), BgL_arg4884z00_15138); } 
return BgL_new1064z00_15137;} } 

}



/* &lambda4881 */
BgL_z62httpzd2statuszd2errorz62_bglt BGl_z62lambda4881z62zz__httpz00(obj_t BgL_envz00_14430, obj_t BgL_fname1057z00_14431, obj_t BgL_location1058z00_14432, obj_t BgL_stack1059z00_14433, obj_t BgL_proc1060z00_14434, obj_t BgL_msg1061z00_14435, obj_t BgL_obj1062z00_14436, obj_t BgL_status1063z00_14437)
{
{ /* Unsafe/http.scm 57 */
{ /* Unsafe/http.scm 57 */
int BgL_status1063z00_15140;
BgL_status1063z00_15140 = 
CINT(BgL_status1063z00_14437); 
{ /* Unsafe/http.scm 57 */
BgL_z62httpzd2statuszd2errorz62_bglt BgL_new1335z00_15141;
{ /* Unsafe/http.scm 57 */
BgL_z62httpzd2statuszd2errorz62_bglt BgL_new1334z00_15142;
BgL_new1334z00_15142 = 
((BgL_z62httpzd2statuszd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62httpzd2statuszd2errorz62_bgl) ))); 
{ /* Unsafe/http.scm 57 */
long BgL_arg4882z00_15143;
{ /* Unsafe/http.scm 57 */
long BgL_res7070z00_15144;
BgL_res7070z00_15144 = 
BGL_CLASS_INDEX(BGl_z62httpzd2statuszd2errorz62zz__httpz00); 
BgL_arg4882z00_15143 = BgL_res7070z00_15144; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1334z00_15142), BgL_arg4882z00_15143); } 
BgL_new1335z00_15141 = BgL_new1334z00_15142; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1335z00_15141)))->BgL_fnamez00)=((obj_t)BgL_fname1057z00_14431),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1335z00_15141)))->BgL_locationz00)=((obj_t)BgL_location1058z00_14432),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1335z00_15141)))->BgL_stackz00)=((obj_t)BgL_stack1059z00_14433),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1335z00_15141)))->BgL_procz00)=((obj_t)BgL_proc1060z00_14434),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1335z00_15141)))->BgL_msgz00)=((obj_t)BgL_msg1061z00_14435),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1335z00_15141)))->BgL_objz00)=((obj_t)BgL_obj1062z00_14436),BUNSPEC); 
((((BgL_z62httpzd2statuszd2errorz62_bglt)COBJECT(BgL_new1335z00_15141))->BgL_statusz00)=((int)BgL_status1063z00_15140),BUNSPEC); 
return BgL_new1335z00_15141;} } } 

}



/* &lambda4890 */
obj_t BGl_z62lambda4890z62zz__httpz00(obj_t BgL_envz00_14438, obj_t BgL_oz00_14439, obj_t BgL_vz00_14440)
{
{ /* Unsafe/http.scm 57 */
{ /* Unsafe/http.scm 57 */
int BgL_vz00_15146;
BgL_vz00_15146 = 
CINT(BgL_vz00_14440); 
return 
((((BgL_z62httpzd2statuszd2errorz62_bglt)COBJECT(
((BgL_z62httpzd2statuszd2errorz62_bglt)BgL_oz00_14439)))->BgL_statusz00)=((int)BgL_vz00_15146),BUNSPEC);} } 

}



/* &lambda4889 */
obj_t BGl_z62lambda4889z62zz__httpz00(obj_t BgL_envz00_14441, obj_t BgL_oz00_14442)
{
{ /* Unsafe/http.scm 57 */
return 
BINT(
(((BgL_z62httpzd2statuszd2errorz62_bglt)COBJECT(
((BgL_z62httpzd2statuszd2errorz62_bglt)BgL_oz00_14442)))->BgL_statusz00));} 

}



/* &<@anonymous:4875> */
obj_t BGl_z62zc3z04anonymousza34875ze3ze5zz__httpz00(obj_t BgL_envz00_14443, obj_t BgL_new1055z00_14444)
{
{ /* Unsafe/http.scm 56 */
{ 
BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_auxz00_20273;
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62httpzd2redirectionzd2errorz62_bglt)BgL_new1055z00_14444))))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62httpzd2redirectionzd2errorz62_bglt)BgL_new1055z00_14444))))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62httpzd2redirectionzd2errorz62_bglt)BgL_new1055z00_14444))))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)
((BgL_z62httpzd2redirectionzd2errorz62_bglt)BgL_new1055z00_14444))))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)
((BgL_z62httpzd2redirectionzd2errorz62_bglt)BgL_new1055z00_14444))))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)
((BgL_z62httpzd2redirectionzd2errorz62_bglt)BgL_new1055z00_14444))))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_20273 = 
((BgL_z62httpzd2redirectionzd2errorz62_bglt)BgL_new1055z00_14444); 
return 
((obj_t)BgL_auxz00_20273);} } 

}



/* &lambda4873 */
BgL_z62httpzd2redirectionzd2errorz62_bglt BGl_z62lambda4873z62zz__httpz00(obj_t BgL_envz00_14445)
{
{ /* Unsafe/http.scm 56 */
{ /* Unsafe/http.scm 56 */
BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_new1054z00_15149;
BgL_new1054z00_15149 = 
((BgL_z62httpzd2redirectionzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62httpzd2redirectionzd2errorz62_bgl) ))); 
{ /* Unsafe/http.scm 56 */
long BgL_arg4874z00_15150;
{ /* Unsafe/http.scm 56 */
long BgL_res7069z00_15151;
BgL_res7069z00_15151 = 
BGL_CLASS_INDEX(BGl_z62httpzd2redirectionzd2errorz62zz__httpz00); 
BgL_arg4874z00_15150 = BgL_res7069z00_15151; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1054z00_15149), BgL_arg4874z00_15150); } 
return BgL_new1054z00_15149;} } 

}



/* &lambda4871 */
BgL_z62httpzd2redirectionzd2errorz62_bglt BGl_z62lambda4871z62zz__httpz00(obj_t BgL_envz00_14446, obj_t BgL_fname1048z00_14447, obj_t BgL_location1049z00_14448, obj_t BgL_stack1050z00_14449, obj_t BgL_proc1051z00_14450, obj_t BgL_msg1052z00_14451, obj_t BgL_obj1053z00_14452)
{
{ /* Unsafe/http.scm 56 */
{ /* Unsafe/http.scm 56 */
BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_new1333z00_15152;
{ /* Unsafe/http.scm 56 */
BgL_z62httpzd2redirectionzd2errorz62_bglt BgL_new1332z00_15153;
BgL_new1332z00_15153 = 
((BgL_z62httpzd2redirectionzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62httpzd2redirectionzd2errorz62_bgl) ))); 
{ /* Unsafe/http.scm 56 */
long BgL_arg4872z00_15154;
{ /* Unsafe/http.scm 56 */
long BgL_res7068z00_15155;
BgL_res7068z00_15155 = 
BGL_CLASS_INDEX(BGl_z62httpzd2redirectionzd2errorz62zz__httpz00); 
BgL_arg4872z00_15154 = BgL_res7068z00_15155; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1332z00_15153), BgL_arg4872z00_15154); } 
BgL_new1333z00_15152 = BgL_new1332z00_15153; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1333z00_15152)))->BgL_fnamez00)=((obj_t)BgL_fname1048z00_14447),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1333z00_15152)))->BgL_locationz00)=((obj_t)BgL_location1049z00_14448),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1333z00_15152)))->BgL_stackz00)=((obj_t)BgL_stack1050z00_14449),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1333z00_15152)))->BgL_procz00)=((obj_t)BgL_proc1051z00_14450),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1333z00_15152)))->BgL_msgz00)=((obj_t)BgL_msg1052z00_14451),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1333z00_15152)))->BgL_objz00)=((obj_t)BgL_obj1053z00_14452),BUNSPEC); 
return BgL_new1333z00_15152;} } 

}



/* &<@anonymous:4865> */
obj_t BGl_z62zc3z04anonymousza34865ze3ze5zz__httpz00(obj_t BgL_envz00_14453, obj_t BgL_new1046z00_14454)
{
{ /* Unsafe/http.scm 54 */
{ 
BgL_z62httpzd2errorzb0_bglt BgL_auxz00_20314;
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62httpzd2errorzb0_bglt)BgL_new1046z00_14454))))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62httpzd2errorzb0_bglt)BgL_new1046z00_14454))))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)
((BgL_z62httpzd2errorzb0_bglt)BgL_new1046z00_14454))))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)
((BgL_z62httpzd2errorzb0_bglt)BgL_new1046z00_14454))))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)
((BgL_z62httpzd2errorzb0_bglt)BgL_new1046z00_14454))))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)
((BgL_z62httpzd2errorzb0_bglt)BgL_new1046z00_14454))))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_20314 = 
((BgL_z62httpzd2errorzb0_bglt)BgL_new1046z00_14454); 
return 
((obj_t)BgL_auxz00_20314);} } 

}



/* &lambda4863 */
BgL_z62httpzd2errorzb0_bglt BGl_z62lambda4863z62zz__httpz00(obj_t BgL_envz00_14455)
{
{ /* Unsafe/http.scm 54 */
{ /* Unsafe/http.scm 54 */
BgL_z62httpzd2errorzb0_bglt BgL_new1045z00_15157;
BgL_new1045z00_15157 = 
((BgL_z62httpzd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62httpzd2errorzb0_bgl) ))); 
{ /* Unsafe/http.scm 54 */
long BgL_arg4864z00_15158;
{ /* Unsafe/http.scm 54 */
long BgL_res7067z00_15159;
BgL_res7067z00_15159 = 
BGL_CLASS_INDEX(BGl_z62httpzd2errorzb0zz__httpz00); 
BgL_arg4864z00_15158 = BgL_res7067z00_15159; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1045z00_15157), BgL_arg4864z00_15158); } 
return BgL_new1045z00_15157;} } 

}



/* &lambda4861 */
BgL_z62httpzd2errorzb0_bglt BGl_z62lambda4861z62zz__httpz00(obj_t BgL_envz00_14456, obj_t BgL_fname1039z00_14457, obj_t BgL_location1040z00_14458, obj_t BgL_stack1041z00_14459, obj_t BgL_proc1042z00_14460, obj_t BgL_msg1043z00_14461, obj_t BgL_obj1044z00_14462)
{
{ /* Unsafe/http.scm 54 */
{ /* Unsafe/http.scm 54 */
BgL_z62httpzd2errorzb0_bglt BgL_new1331z00_15160;
{ /* Unsafe/http.scm 54 */
BgL_z62httpzd2errorzb0_bglt BgL_new1330z00_15161;
BgL_new1330z00_15161 = 
((BgL_z62httpzd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62httpzd2errorzb0_bgl) ))); 
{ /* Unsafe/http.scm 54 */
long BgL_arg4862z00_15162;
{ /* Unsafe/http.scm 54 */
long BgL_res7066z00_15163;
BgL_res7066z00_15163 = 
BGL_CLASS_INDEX(BGl_z62httpzd2errorzb0zz__httpz00); 
BgL_arg4862z00_15162 = BgL_res7066z00_15163; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1330z00_15161), BgL_arg4862z00_15162); } 
BgL_new1331z00_15160 = BgL_new1330z00_15161; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1331z00_15160)))->BgL_fnamez00)=((obj_t)BgL_fname1039z00_14457),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1331z00_15160)))->BgL_locationz00)=((obj_t)BgL_location1040z00_14458),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1331z00_15160)))->BgL_stackz00)=((obj_t)BgL_stack1041z00_14459),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1331z00_15160)))->BgL_procz00)=((obj_t)BgL_proc1042z00_14460),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1331z00_15160)))->BgL_msgz00)=((obj_t)BgL_msg1043z00_14461),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1331z00_15160)))->BgL_objz00)=((obj_t)BgL_obj1044z00_14462),BUNSPEC); 
return BgL_new1331z00_15160;} } 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__httpz00()
{
{ /* Unsafe/http.scm 15 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__httpz00()
{
{ /* Unsafe/http.scm 15 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__httpz00()
{
{ /* Unsafe/http.scm 15 */
BGl_modulezd2initializa7ationz75zz__urlz00(((long)337061965), 
BSTRING_TO_STRING(BGl_string7420z00zz__httpz00)); 
BGl_modulezd2initializa7ationz75zz__rgcz00(((long)352596942), 
BSTRING_TO_STRING(BGl_string7420z00zz__httpz00)); 
BGl_modulezd2initializa7ationz75zz__base64z00(((long)67813499), 
BSTRING_TO_STRING(BGl_string7420z00zz__httpz00)); 
return 
BGl_modulezd2initializa7ationz75zz__socketz00(((long)222102179), 
BSTRING_TO_STRING(BGl_string7420z00zz__httpz00));} 

}

#ifdef __cplusplus
}
#endif
