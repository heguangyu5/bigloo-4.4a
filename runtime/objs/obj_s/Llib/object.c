/*===========================================================================*/
/*   (Llib/object.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/object.scm -indent -o objs/obj_s/Llib/object.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif

/* object type definitions */
typedef struct BgL_z62conditionz62_bgl {
   header_t header;
   obj_t widening;
} *BgL_z62conditionz62_bglt;

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

typedef struct BgL_z62typezd2errorzb0_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
   obj_t BgL_typez00;
} *BgL_z62typezd2errorzb0_bglt;

typedef struct BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
   obj_t BgL_indexz00;
} *BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt;

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

typedef struct BgL_z62iozd2portzd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2portzd2errorz62_bglt;

typedef struct BgL_z62iozd2readzd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2readzd2errorz62_bglt;

typedef struct BgL_z62iozd2writezd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2writezd2errorz62_bglt;

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

typedef struct BgL_z62iozd2filezd2notzd2foundzd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt;

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

typedef struct BgL_z62iozd2unknownzd2hostzd2errorzb0_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt;

typedef struct BgL_z62iozd2malformedzd2urlzd2errorzb0_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt;

typedef struct BgL_z62iozd2sigpipezd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2sigpipezd2errorz62_bglt;

typedef struct BgL_z62iozd2timeoutzd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2timeoutzd2errorz62_bglt;

typedef struct BgL_z62iozd2connectionzd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62iozd2connectionzd2errorz62_bglt;

typedef struct BgL_z62processzd2exceptionzb0_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62processzd2exceptionzb0_bglt;

typedef struct BgL_z62stackzd2overflowzd2errorz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_procz00;
   obj_t BgL_msgz00;
   obj_t BgL_objz00;
} *BgL_z62stackzd2overflowzd2errorz62_bglt;

typedef struct BgL_z62securityzd2exceptionzb0_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_messagez00;
} *BgL_z62securityzd2exceptionzb0_bglt;

typedef struct BgL_z62accesszd2controlzd2exceptionz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_messagez00;
   obj_t BgL_objz00;
   obj_t BgL_permissionz00;
} *BgL_z62accesszd2controlzd2exceptionz62_bglt;

typedef struct BgL_z62warningz62_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_argsz00;
} *BgL_z62warningz62_bglt;

typedef struct BgL_z62evalzd2warningzb0_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_fnamez00;
   obj_t BgL_locationz00;
   obj_t BgL_stackz00;
   obj_t BgL_argsz00;
} *BgL_z62evalzd2warningzb0_bglt;


static BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BGl_z62lambda1921z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_objectzd2hashnumberzd2zz__objectz00(BgL_objectz00_bglt);
static BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BGl_z62lambda1924z62zz__objectz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_procedurezd2ze3genericz31zz__objectz00(obj_t);
static obj_t BGl_z62objectzd2classzd2numzd2setz12za2zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol4343z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4182z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4348z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62classzd2allzd2fieldsz62zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62objectzd2print1394zb0zz__objectz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62lambda1930z62zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62lambda1931z62zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62findzd2methodzb0zz__objectz00(obj_t, obj_t, obj_t);
static BgL_z62iozd2errorzb0_bglt BGl_z62lambda1937z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_objectzd2wideningzd2zz__objectz00(BgL_objectz00_bglt);
static BgL_z62iozd2errorzb0_bglt BGl_z62lambda1939z62zz__objectz00(obj_t);
static obj_t BGl_doublezd2nbzd2genericsz12z12zz__objectz00();
static obj_t BGl_symbol4190z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4353z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4195z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4358z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
static obj_t BGl_symbol4199z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62bigloozd2genericzd2bucketzd2siza7ez17zz__objectz00(obj_t);
static obj_t BGl_list3999z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza31952ze3ze5zz__objectz00(obj_t, obj_t);
static BgL_z62iozd2portzd2errorz62_bglt BGl_z62lambda1947z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static BgL_z62iozd2portzd2errorz62_bglt BGl_z62lambda1949z62zz__objectz00(obj_t);
static obj_t BGl_symbol4360z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_z52isazd2objectzf2finalzf3z81zz__objectz00(BgL_objectz00_bglt, obj_t);
static obj_t BGl_symbol4364z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_classzd2fieldzf3z21zz__objectz00(obj_t);
static obj_t BGl_z62classzd2subclasseszb0zz__objectz00(obj_t, obj_t);
extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
extern obj_t bgl_display_obj(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31864ze3ze5zz__objectz00(obj_t);
static BgL_z62iozd2readzd2errorz62_bglt BGl_z62lambda1958z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31848ze3ze5zz__objectz00(obj_t, obj_t);
static obj_t BGl_symbol4372z00zz__objectz00 = BUNSPEC;
extern obj_t BGl_warningz00zz__errorz00(obj_t);
static BgL_z62iozd2readzd2errorz62_bglt BGl_z62lambda1960z62zz__objectz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_classzd2fieldszd2zz__objectz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_methodzd2arrayzd2refz00zz__objectz00(obj_t, obj_t, int);
static BgL_z62iozd2writezd2errorz62_bglt BGl_z62lambda1968z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_z62iozd2writezd2errorz62zz__objectz00 = BUNSPEC;
static obj_t BGl_initializa7ezd2objectsz12z67zz__objectz00();
static BgL_z62iozd2writezd2errorz62_bglt BGl_z62lambda1970z62zz__objectz00(obj_t);
static obj_t BGl_z62classzd2superzb0zz__objectz00(obj_t, obj_t);
static BgL_z62iozd2closedzd2errorz62_bglt BGl_z62lambda1978z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62classzd2fieldzd2mutablezf3z91zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza32104ze3ze5zz__objectz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza32015ze3ze5zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62classzd2fieldzd2defaultzd2valuezf3z43zz__objectz00(obj_t, obj_t);
static BgL_z62iozd2closedzd2errorz62_bglt BGl_z62lambda1980z62zz__objectz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_objectzd2displayzd2zz__objectz00(BgL_objectz00_bglt, obj_t);
static obj_t BGl_z62zc3z04anonymousza31972ze3ze5zz__objectz00(obj_t, obj_t);
static BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BGl_z62lambda1988z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62objectzd2classzb0zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_classzd2existszd2zz__objectz00(obj_t);
static obj_t BGl_za2nbzd2classeszd2maxza2z00zz__objectz00 = BUNSPEC;
static obj_t BGl_objectzd2initzd2zz__objectz00();
static BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BGl_z62lambda1990z62zz__objectz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31884ze3ze5zz__objectz00(obj_t, obj_t);
static BgL_z62iozd2parsezd2errorz62_bglt BGl_z62lambda1999z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza32122ze3ze5zz__objectz00(obj_t);
BGL_EXPORTED_DEF obj_t BGl_z62exceptionz62zz__objectz00 = BUNSPEC;
static obj_t BGl_makezd2classzd2virtualzd2slotszd2vectorz00zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza32050ze3ze5zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_classzd2abstractzf3z21zz__objectz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_genericzd2memoryzd2statisticsz00zz__objectz00();
static obj_t BGl_z62classzd2fieldzd2virtualzf3z91zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62exceptionzd2notify1400zb0zz__objectz00(obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
BGL_EXPORTED_DECL obj_t BGl_objectzd2printzd2zz__objectz00(BgL_objectz00_bglt, obj_t, obj_t);
static obj_t BGl_z62widezd2objectzf3z43zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31992ze3ze5zz__objectz00(obj_t, obj_t);
extern obj_t make_vector(long, obj_t);
static obj_t BGl_symbol3878z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza32141ze3ze5zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62findzd2methodzd2fromz62zz__objectz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__objectz00();
BGL_EXPORTED_DECL bool_t BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(obj_t);
static obj_t BGl_z62genericzd2methodzd2arrayz62zz__objectz00(obj_t, obj_t);
static obj_t BGl_symbol3880z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_classzd2fieldzd2namez00zz__objectz00(obj_t);
static obj_t BGl_z62classzd2fieldzd2accessorz62zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62objectzd2equalzf31398z43zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62makezd2classzd2fieldz62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_genericzd2methodzd2arrayz00zz__objectz00(obj_t);
static obj_t BGl_za2nbzd2genericsza2zd2zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL long BGl_classzd2hashzd2zz__objectz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_z52isazf2cdepthzf3z53zz__objectz00(obj_t, obj_t, long);
static obj_t BGl_z62zc3z04anonymousza32039ze3ze5zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62nilzf3z91zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_classzd2widezf3z21zz__objectz00(obj_t);
static obj_t BGl_z62classzd2allocatorzb0zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_classzd2fieldzd2accessorz00zz__objectz00(obj_t);
static obj_t BGl_z62findzd2classzd2fieldz62zz__objectz00(obj_t, obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_list4306z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DEF obj_t BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00 = BUNSPEC;
static obj_t BGl_z62classzd2hashzb0zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62registerzd2genericz12za2zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list4311z00zz__objectz00 = BUNSPEC;
static obj_t BGl_list4314z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_classzd2fieldzd2infoz00zz__objectz00(obj_t);
static obj_t BGl_list4315z00zz__objectz00 = BUNSPEC;
static obj_t BGl_list4318z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62lambda2102z62zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62lambda2103z62zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62classzd2fieldzf3z43zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_z62evalzd2warningzb0zz__objectz00 = BUNSPEC;
static obj_t BGl_list4321z00zz__objectz00 = BUNSPEC;
static obj_t BGl_list4324z00zz__objectz00 = BUNSPEC;
static BgL_z62accesszd2controlzd2exceptionz62_bglt BGl_z62lambda2110z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static BgL_z62accesszd2controlzd2exceptionz62_bglt BGl_z62lambda2112z62zz__objectz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_exceptionzd2notifyzd2zz__objectz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_classzd2fieldzd2typez00zz__objectz00(obj_t);
static obj_t BGl_z62classzd2fieldszb0zz__objectz00(obj_t, obj_t);
static obj_t BGl_list4330z00zz__objectz00 = BUNSPEC;
static obj_t BGl_list4333z00zz__objectz00 = BUNSPEC;
static obj_t BGl_list4334z00zz__objectz00 = BUNSPEC;
static obj_t BGl_list4335z00zz__objectz00 = BUNSPEC;
static obj_t BGl_list4338z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62lambda2120z62zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62lambda2121z62zz__objectz00(obj_t, obj_t, obj_t);
extern obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t);
static obj_t BGl_z62lambda2128z62zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62lambda2129z62zz__objectz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza32076ze3ze5zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62exceptionzd2notifyzd2z62er1405z00zz__objectz00(obj_t, obj_t);
static obj_t BGl_list4342z00zz__objectz00 = BUNSPEC;
static obj_t BGl_list4347z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_classzf3zf3zz__objectz00(obj_t);
static obj_t BGl_z62genericzd2addzd2methodz12z70zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static bool_t BGl_genericszd2addzd2classz12z12zz__objectz00(long, long);
static BgL_z62warningz62_bglt BGl_z62lambda2136z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static BgL_z62warningz62_bglt BGl_z62lambda2138z62zz__objectz00(obj_t);
static bool_t BGl_doublezd2nbzd2classesz12z12zz__objectz00();
static obj_t BGl_list4352z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62classzd2existszb0zz__objectz00(obj_t, obj_t);
static obj_t BGl_list4357z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62objectzd2hashnumber1392zb0zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62lambda2145z62zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62lambda2146z62zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_list4363z00zz__objectz00 = BUNSPEC;
extern obj_t bgl_make_generic(obj_t);
static BgL_z62evalzd2warningzb0_bglt BGl_z62lambda2153z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static BgL_z62evalzd2warningzb0_bglt BGl_z62lambda2155z62zz__objectz00(obj_t);
static obj_t BGl_z62classzd2fieldzd2defaultzd2valuezb0zz__objectz00(obj_t, obj_t);
static obj_t BGl_symbol4000z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DEF obj_t BGl_z62iozd2connectionzd2errorz62zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4003z00zz__objectz00 = BUNSPEC;
extern long bgl_list_length(obj_t);
extern obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
static obj_t BGl_list4371z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_classzd2modulezd2zz__objectz00(obj_t);
static obj_t BGl_z62classzd2nilzb0zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__objectz00();
static obj_t BGl_z62classzd2widezf3z43zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza32096ze3ze5zz__objectz00(obj_t, obj_t);
static obj_t BGl_symbol4011z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4013z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_findzd2classzd2zz__objectz00(obj_t);
static obj_t BGl_symbol4019z00zz__objectz00 = BUNSPEC;
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_z62objectzd2printzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62z52isazd2objectzf2cdepthzf3ze3zz__objectz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol4021z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62bigloozd2genericzd2bucketzd2maskzb0zz__objectz00(obj_t);
static obj_t BGl_symbol4027z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DEF obj_t BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00 = BUNSPEC;
static obj_t BGl_z62z52objectzd2wideningze2zz__objectz00(obj_t, obj_t);
extern obj_t BGl_writezd2circlezd2zz__pp_circlez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_callzd2nextzd2virtualzd2setterzd2zz__objectz00(obj_t, BgL_objectz00_bglt, int, obj_t);
static obj_t BGl_symbol4033z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_z52objectzd2wideningzd2setz12z40zz__objectz00(BgL_objectz00_bglt, obj_t);
BGL_EXPORTED_DECL obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
static obj_t BGl_z62bigloozd2typeszd2numberz62zz__objectz00(obj_t);
static obj_t BGl_z62findzd2classzb0zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_z62conditionz62zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4204z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4043z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4044z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4209z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_genericzd2addzd2evalzd2methodz12zc0zz__objectz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_classzd2nilzd2zz__objectz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_classzd2allzd2fieldsz00zz__objectz00(obj_t);
static obj_t BGl_symbol4049z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62objectzd2write1390zb0zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62genericzd2nozd2defaultzd2behaviorzb0zz__objectz00(obj_t, obj_t);
extern long bgl_obj_hash_number(obj_t);
extern obj_t BGl_warningzd2notifyzd2zz__errorz00(obj_t);
static obj_t BGl_z62exceptionzd2notifyzd2z62io1407z00zz__objectz00(obj_t, obj_t);
static obj_t BGl_symbol4054z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4059z00zz__objectz00 = BUNSPEC;
extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62classzd2namezb0zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62z52isazf2cdepthzf3z31zz__objectz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31833ze3ze5zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_classzd2subclasseszd2zz__objectz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_callzd2nextzd2virtualzd2getterzd2zz__objectz00(obj_t, BgL_objectz00_bglt, int);
static obj_t BGl_loopze70ze7zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol4064z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4069z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_classzd2creatorzd2zz__objectz00(obj_t);
static BgL_objectz00_bglt BGl_z62lambda1819z62zz__objectz00(obj_t);
static obj_t BGl_symbol4075z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62z52objectzd2wideningzd2setz12z22zz__objectz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_evalzd2classzf3z21zz__objectz00(obj_t);
static obj_t BGl_list3877z00zz__objectz00 = BUNSPEC;
static BgL_objectz00_bglt BGl_z62lambda1821z62zz__objectz00(obj_t);
static obj_t BGl_z62classzd2constructorzb0zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t, obj_t);
static BgL_z62conditionz62_bglt BGl_z62lambda1829z62zz__objectz00(obj_t);
static obj_t BGl_za2nbzd2classesza2zd2zz__objectz00 = BUNSPEC;
static obj_t BGl_z62objectzd2classzd2numz62zz__objectz00(obj_t, obj_t);
static obj_t BGl_symbol4082z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4086z00zz__objectz00 = BUNSPEC;
static BgL_objectz00_bglt BGl_z62allocatezd2instancezb0zz__objectz00(obj_t, obj_t);
static BgL_z62conditionz62_bglt BGl_z62lambda1831z62zz__objectz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31941ze3ze5zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62genericzd2defaultzb0zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62classzd2evdatazd2setz12z70zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol4091z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4095z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL int BGl_bigloozd2genericzd2bucketzd2siza7ez75zz__objectz00();
BGL_EXPORTED_DECL bool_t BGl_z52isazd2objectzf2cdepthzf3z81zz__objectz00(BgL_objectz00_bglt, obj_t, long);
static BgL_z62exceptionz62_bglt BGl_z62lambda1842z62zz__objectz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list3899z00zz__objectz00 = BUNSPEC;
static BgL_z62exceptionz62_bglt BGl_z62lambda1846z62zz__objectz00(obj_t);
extern obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31926ze3ze5zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62objectzd2displayzb0zz__objectz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_z62processzd2exceptionzb0zz__objectz00 = BUNSPEC;
static obj_t BGl_z62lambda1854z62zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62lambda1855z62zz__objectz00(obj_t, obj_t, obj_t);
extern obj_t make_vector_uncollectable(long, obj_t);
BGL_EXPORTED_DECL long bgl_types_number();
static obj_t BGl_z62objectzd2wideningzb0zz__objectz00(obj_t, obj_t);
static obj_t BGl_symbol4277z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4279z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza32003ze3ze5zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62classzd2nilzd2initz12z70zz__objectz00(obj_t, obj_t);
static obj_t BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62lambda1862z62zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62lambda1863z62zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4282z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62classzd2fieldzd2mutatorz62zz__objectz00(obj_t, obj_t);
extern obj_t bigloo_generic_mutex;
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62classzd2numzb0zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62lambda1871z62zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62lambda1872z62zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31856ze3ze5zz__objectz00(obj_t);
BGL_EXPORTED_DEF obj_t BGl_za2classesza2z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL int BGl_bigloozd2genericzd2bucketzd2powzd2zz__objectz00();
static obj_t BGl_symbol4290z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4292z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4294z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_classzd2virtualzd2zz__objectz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_classzd2fieldzd2defaultzd2valuezf3z21zz__objectz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t, obj_t, obj_t);
static BgL_z62errorz62_bglt BGl_z62lambda1880z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_z62iozd2sigpipezd2errorz62zz__objectz00 = BUNSPEC;
static BgL_z62errorz62_bglt BGl_z62lambda1882z62zz__objectz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31962ze3ze5zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31873ze3ze5zz__objectz00(obj_t);
static obj_t BGl_z62lambda1888z62zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62lambda1889z62zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_toplevelzd2initzd2zz__objectz00();
static obj_t BGl_z62classzd2modulezb0zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_findzd2methodzd2fromz00zz__objectz00(BgL_objectz00_bglt, obj_t, obj_t);
static obj_t BGl_z62lambda1894z62zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62lambda1895z62zz__objectz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_z62typezd2errorzb0zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol3900z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62lambda1899z62zz__objectz00(obj_t, obj_t);
extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
static obj_t BGl_symbol3903z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol3905z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol3908z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62genericzd2memoryzd2statisticsz62zz__objectz00(obj_t);
static obj_t BGl_z62evalzd2classzf3z43zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62objectzf3z91zz__objectz00(obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__objectz00();
BGL_EXPORTED_DEF obj_t BGl_z62iozd2parsezd2errorz62zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol3910z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol3913z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL long BGl_classzd2numzd2zz__objectz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t);
extern obj_t BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t, long);
extern obj_t BGl_displayzd2tracezd2stackz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza32130ze3ze5zz__objectz00(obj_t);
static obj_t BGl_z62isazf3z91zz__objectz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_objectzd2equalzf3z21zz__objectz00(BgL_objectz00_bglt, BgL_objectz00_bglt);
static obj_t BGl_z62zc3z04anonymousza31982ze3ze5zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62callzd2virtualzd2setterz62zz__objectz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol3934z00zz__objectz00 = BUNSPEC;
static obj_t BGl_extendzd2vectorzd2zz__objectz00(obj_t, obj_t, long);
static obj_t BGl_symbol3936z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol3937z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol3939z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza32115ze3ze5zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_findzd2classzd2fieldz00zz__objectz00(obj_t, obj_t);
static obj_t BGl_list4002z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62classzd2abstractzf3z43zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62exceptionzd2notifyzd2z62wa1409z00zz__objectz00(obj_t, obj_t);
static obj_t BGl_list4005z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol3941z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol3943z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol3945z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza32027ze3ze5zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_classzd2evdatazd2zz__objectz00(obj_t);
static obj_t BGl_list4010z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62methodzd2arrayzd2refz62zz__objectz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list4018z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_classzd2fieldzd2mutatorz00zz__objectz00(obj_t);
static obj_t BGl_list4026z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_objectzd2writezd2zz__objectz00(BgL_objectz00_bglt, obj_t);
static obj_t BGl_z62callzd2virtualzd2getterz62zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62objectzd2display1386zb0zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62objectzd2hashnumberzb0zz__objectz00(obj_t, obj_t);
static obj_t BGl_list4032z00zz__objectz00 = BUNSPEC;
static obj_t BGl_classzd2shrinkzd2zz__objectz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza32062ze3ze5zz__objectz00(obj_t, obj_t);
extern obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_za2classzd2keyza2zd2zz__objectz00 = BUNSPEC;
static obj_t BGl_z62objectzd2wideningzd2setz12z70zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62findzd2classzd2byzd2hashzb0zz__objectz00(obj_t, obj_t);
extern obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl_z62findzd2superzd2classzd2methodzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_classzd2allocatorzd2zz__objectz00(obj_t);
static BgL_z62iozd2parsezd2errorz62_bglt BGl_z62lambda2001z62zz__objectz00(obj_t);
static obj_t BGl_z62callzd2nextzd2virtualzd2setterzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_objectzd2wideningzd2setz12z12zz__objectz00(BgL_objectz00_bglt, obj_t);
BGL_EXPORTED_DEF obj_t BGl_z62securityzd2exceptionzb0zz__objectz00 = BUNSPEC;
static BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BGl_z62lambda2011z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BGl_z62lambda2013z62zz__objectz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_nilzf3zf3zz__objectz00(BgL_objectz00_bglt);
BGL_EXPORTED_DECL obj_t BGl_callzd2virtualzd2setterz00zz__objectz00(BgL_objectz00_bglt, int, obj_t);
BGL_EXPORTED_DEF obj_t BGl_z62iozd2closedzd2errorz62zz__objectz00 = BUNSPEC;
static obj_t BGl_z62genericzd2addzd2evalzd2methodz12za2zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BGl_z62lambda2022z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BGl_z62lambda2024z62zz__objectz00(obj_t);
static obj_t BGl_z62classzd2creatorzb0zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_classzd2constructorzd2zz__objectz00(obj_t);
static BgL_z62iozd2sigpipezd2errorz62_bglt BGl_z62lambda2035z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static BgL_z62iozd2sigpipezd2errorz62_bglt BGl_z62lambda2037z62zz__objectz00(obj_t);
static obj_t BGl_z62procedurezd2ze3genericz53zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62classzd2fieldzd2namez62zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_z52objectzd2wideningz80zz__objectz00(BgL_objectz00_bglt);
BGL_EXPORTED_DEF obj_t BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00 = BUNSPEC;
static obj_t BGl_z62callzd2nextzd2virtualzd2getterzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL BgL_objectz00_bglt BGl_allocatezd2instancezd2zz__objectz00(obj_t);
static obj_t BGl_methodzd2arrayzd2setz12z12zz__objectz00(obj_t, obj_t, long, obj_t);
static BgL_z62iozd2timeoutzd2errorz62_bglt BGl_z62lambda2046z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static BgL_z62iozd2timeoutzd2errorz62_bglt BGl_z62lambda2048z62zz__objectz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_classzd2evdatazd2setz12z12zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza32157ze3ze5zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
BGL_EXPORTED_DEF obj_t BGl_z62errorz62zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_callzd2virtualzd2getterz00zz__objectz00(BgL_objectz00_bglt, int);
static BgL_z62iozd2connectionzd2errorz62_bglt BGl_z62lambda2058z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_z62warningz62zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_z52isazf2finalzf3z53zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62classzd2evfieldszd2setz12z70zz__objectz00(obj_t, obj_t, obj_t);
extern obj_t BGl_currentzd2threadzd2zz__threadz00();
static obj_t BGl_list4276z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62z52isazd2objectzf2finalzf3ze3zz__objectz00(obj_t, obj_t, obj_t);
static BgL_z62iozd2connectionzd2errorz62_bglt BGl_z62lambda2060z62zz__objectz00(obj_t);
extern obj_t BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza32086ze3ze5zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_z62stackzd2overflowzd2errorz62zz__objectz00 = BUNSPEC;
static obj_t BGl_za2genericsza2z00zz__objectz00 = BUNSPEC;
static obj_t BGl_list4281z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DEF obj_t BGl_z62iozd2portzd2errorz62zz__objectz00 = BUNSPEC;
static obj_t BGl_list4288z00zz__objectz00 = BUNSPEC;
static obj_t BGl_list4289z00zz__objectz00 = BUNSPEC;
static BgL_z62processzd2exceptionzb0_bglt BGl_z62lambda2070z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_objectzf3zf3zz__objectz00(obj_t);
static BgL_z62processzd2exceptionzb0_bglt BGl_z62lambda2072z62zz__objectz00(obj_t);
static obj_t BGl_cnstzd2initzd2zz__objectz00();
BGL_EXPORTED_DECL int BGl_bigloozd2genericzd2bucketzd2maskzd2zz__objectz00();
static obj_t BGl_z52addzd2methodz12z92zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62classzd2fieldzd2infoz62zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DEF obj_t BGl_z62iozd2timeoutzd2errorz62zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DEF obj_t BGl_z62accesszd2controlzd2exceptionz62zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DEF obj_t BGl_z62iozd2errorzb0zz__objectz00 = BUNSPEC;
static BgL_z62stackzd2overflowzd2errorz62_bglt BGl_z62lambda2082z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62registerzd2classz12za2zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static BgL_z62stackzd2overflowzd2errorz62_bglt BGl_z62lambda2084z62zz__objectz00(obj_t);
BGL_EXPORTED_DEF obj_t BGl_objectz00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62classzd2virtualzb0zz__objectz00(obj_t, obj_t);
static BgL_z62securityzd2exceptionzb0_bglt BGl_z62lambda2092z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31910ze3ze5zz__objectz00(obj_t, obj_t);
static BgL_z62securityzd2exceptionzb0_bglt BGl_z62lambda2094z62zz__objectz00(obj_t);
static obj_t BGl_symbol4100z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_objectzd2classzd2zz__objectz00(BgL_objectz00_bglt);
BGL_EXPORTED_DECL long BGl_objectzd2classzd2numz00zz__objectz00(BgL_objectz00_bglt);
static obj_t BGl_symbol4105z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62classzd2evdatazb0zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62exceptionzd2notifyzb0zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62classzd2fieldzd2typez62zz__objectz00(obj_t, obj_t);
static obj_t BGl_list3902z00zz__objectz00 = BUNSPEC;
static obj_t BGl_list3907z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_findzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t);
static obj_t BGl_symbol4110z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4115z00zz__objectz00 = BUNSPEC;
static obj_t BGl_list3912z00zz__objectz00 = BUNSPEC;
static obj_t BGl_list3915z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
static obj_t BGl_z62objectzd2writezb0zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31823ze3ze5zz__objectz00(obj_t, obj_t);
static obj_t BGl_symbol4120z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4125z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4130z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4135z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_findzd2classzd2byzd2hashzd2zz__objectz00(int);
BGL_EXPORTED_DECL bool_t BGl_widezd2objectzf3z21zz__objectz00(BgL_objectz00_bglt);
BGL_EXPORTED_DECL obj_t BGl_classzd2evfieldszd2setz12z12zz__objectz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_objectzd2classzd2numzd2setz12zc0zz__objectz00(BgL_objectz00_bglt, long);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
static obj_t BGl_symbol4140z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4303z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62z52isazf2finalzf3z31zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol4307z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4145z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62objectzd2equalzf3z43zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol4309z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
static obj_t BGl_symbol4312z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4150z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4316z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4155z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4319z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62lambda1900z62zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62classzf3z91zz__objectz00(obj_t, obj_t);
static BgL_z62typezd2errorzb0_bglt BGl_z62lambda1906z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
static BgL_z62typezd2errorzb0_bglt BGl_z62lambda1908z62zz__objectz00(obj_t);
static obj_t BGl_za2nbzd2genericszd2maxza2z00zz__objectz00 = BUNSPEC;
static obj_t BGl_makezd2methodzd2arrayz00zz__objectz00(obj_t);
static obj_t BGl_symbol4322z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4160z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4325z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4165z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4328z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_genericzd2defaultzd2zz__objectz00(obj_t);
static obj_t BGl_z62lambda1914z62zz__objectz00(obj_t, obj_t);
static obj_t BGl_z62lambda1915z62zz__objectz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol4331z00zz__objectz00 = BUNSPEC;
BGL_EXPORTED_DEF obj_t BGl_z62iozd2readzd2errorz62zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4170z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4336z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4175z00zz__objectz00 = BUNSPEC;
static obj_t BGl_symbol4177z00zz__objectz00 = BUNSPEC;
static obj_t BGl_z62bigloozd2genericzd2bucketzd2powzb0zz__objectz00(obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2abstractzf3zd2envzf3zz__objectz00, BgL_bgl_za762classza7d2abstr4376z00, BGl_z62classzd2abstractzf3z43zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2nilzd2initz12zd2envzc0zz__objectz00, BgL_bgl_za762classza7d2nilza7d4377za7, BGl_z62classzd2nilzd2initz12z70zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_genericzd2addzd2methodz12zd2envzc0zz__objectz00, BgL_bgl_za762genericza7d2add4378z00, BGl_z62genericzd2addzd2methodz12z70zz__objectz00, 0L, BUNSPEC, 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_registerzd2genericz12zd2envz12zz__objectz00, BgL_bgl_za762registerza7d2ge4379z00, BGl_z62registerzd2genericz12za2zz__objectz00, 0L, BUNSPEC, 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_findzd2methodzd2fromzd2envzd2zz__objectz00, BgL_bgl_za762findza7d2method4380z00, BGl_z62findzd2methodzd2fromz62zz__objectz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_objectzd2wideningzd2envz00zz__objectz00, BgL_bgl_za762objectza7d2wide4381z00, BGl_z62objectzd2wideningzb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4101z00zz__objectz00, BgL_bgl_string4101za700za7za7_4382za7, "&index-out-of-bounds-error", 26 );
DEFINE_STRING( BGl_string4106z00zz__objectz00, BgL_bgl_string4106za700za7za7_4383za7, "&io-error", 9 );
DEFINE_EXPORT_BGL_GENERIC( BGl_exceptionzd2notifyzd2envz00zz__objectz00, BgL_bgl_za762exceptionza7d2n4384z00, BGl_z62exceptionzd2notifyzb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4111z00zz__objectz00, BgL_bgl_string4111za700za7za7_4385za7, "&io-port-error", 14 );
DEFINE_STRING( BGl_string4116z00zz__objectz00, BgL_bgl_string4116za700za7za7_4386za7, "&io-read-error", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_findzd2classzd2envz00zz__objectz00, BgL_bgl_za762findza7d2classza74387za7, BGl_z62findzd2classzb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4121z00zz__objectz00, BgL_bgl_string4121za700za7za7_4388za7, "&io-write-error", 15 );
DEFINE_STRING( BGl_string4126z00zz__objectz00, BgL_bgl_string4126za700za7za7_4389za7, "&io-closed-error", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzf3zd2envz21zz__objectz00, BgL_bgl_za762classza7f3za791za7za74390za7, BGl_z62classzf3z91zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_GENERIC( BGl_objectzd2writezd2envz00zz__objectz00, BgL_bgl_za762objectza7d2writ4391z00, va_generic_entry, BGl_z62objectzd2writezb0zz__objectz00, BUNSPEC, -2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4201z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4392za7, BGl_z62zc3z04anonymousza32141ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4040z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4393za7, BGl_z62zc3z04anonymousza31823ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4202z00zz__objectz00, BgL_bgl_za762lambda2138za7624394z00, BGl_z62lambda2138z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4041z00zz__objectz00, BgL_bgl_za762lambda1821za7624395z00, BGl_z62lambda1821z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4203z00zz__objectz00, BgL_bgl_za762lambda2136za7624396z00, BGl_z62lambda2136z62zz__objectz00, 0L, BUNSPEC, 4 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4042z00zz__objectz00, BgL_bgl_za762lambda1819za7624397z00, BGl_z62lambda1819z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4206z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4398za7, BGl_z62zc3z04anonymousza32157ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4207z00zz__objectz00, BgL_bgl_za762lambda2155za7624399z00, BGl_z62lambda2155z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4046z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4400za7, BGl_z62zc3z04anonymousza31833ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4131z00zz__objectz00, BgL_bgl_string4131za700za7za7_4401za7, "&io-file-not-found-error", 24 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4208z00zz__objectz00, BgL_bgl_za762lambda2153za7624402z00, BGl_z62lambda2153z62zz__objectz00, 0L, BUNSPEC, 4 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4047z00zz__objectz00, BgL_bgl_za762lambda1831za7624403z00, BGl_z62lambda1831z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4048z00zz__objectz00, BgL_bgl_za762lambda1829za7624404z00, BGl_z62lambda1829z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string4136z00zz__objectz00, BgL_bgl_string4136za700za7za7_4405za7, "&io-parse-error", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2creatorzd2envz00zz__objectz00, BgL_bgl_za762classza7d2creat4406z00, BGl_z62classzd2creatorzb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_genericzd2methodzd2arrayzd2envzd2zz__objectz00, BgL_bgl_za762genericza7d2met4407z00, BGl_z62genericzd2methodzd2arrayz62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4051z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4408za7, BGl_z62zc3z04anonymousza31856ze3ze5zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4052z00zz__objectz00, BgL_bgl_za762lambda1855za7624409z00, BGl_z62lambda1855z62zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4300z00zz__objectz00, BgL_bgl_string4300za700za7za7_4410za7, "&object-hashnumber1392", 22 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2namezd2envz00zz__objectz00, BgL_bgl_za762classza7d2nameza74411za7, BGl_z62classzd2namezb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4053z00zz__objectz00, BgL_bgl_za762lambda1854za7624412z00, BGl_z62lambda1854z62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4301z00zz__objectz00, BgL_bgl_string4301za700za7za7_4413za7, "&object-write1390", 17 );
DEFINE_STRING( BGl_string4302z00zz__objectz00, BgL_bgl_string4302za700za7za7_4414za7, "&object-display1386", 19 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2hashzd2envz00zz__objectz00, BgL_bgl_za762classza7d2hashza74415za7, BGl_z62classzd2hashzb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4056z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4416za7, BGl_z62zc3z04anonymousza31864ze3ze5zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string4141z00zz__objectz00, BgL_bgl_string4141za700za7za7_4417za7, "&io-unknown-host-error", 22 );
DEFINE_STRING( BGl_string4304z00zz__objectz00, BgL_bgl_string4304za700za7za7_4418za7, "object-display", 14 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4057z00zz__objectz00, BgL_bgl_za762lambda1863za7624419z00, BGl_z62lambda1863z62zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4305z00zz__objectz00, BgL_bgl_string4305za700za7za7_4420za7, "Wrong number of arguments", 25 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4058z00zz__objectz00, BgL_bgl_za762lambda1862za7624421z00, BGl_z62lambda1862z62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4308z00zz__objectz00, BgL_bgl_string4308za700za7za7_4422za7, "apply", 5 );
DEFINE_STRING( BGl_string4146z00zz__objectz00, BgL_bgl_string4146za700za7za7_4423za7, "&io-malformed-url-error", 23 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2fieldzd2typezd2envzd2zz__objectz00, BgL_bgl_za762classza7d2field4424z00, BGl_z62classzd2fieldzd2typez62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4061z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4425za7, BGl_z62zc3z04anonymousza31873ze3ze5zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z52objectzd2wideningzd2envz52zz__objectz00, BgL_bgl_za762za752objectza7d2w4426za7, BGl_z62z52objectzd2wideningze2zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4062z00zz__objectz00, BgL_bgl_za762lambda1872za7624427z00, BGl_z62lambda1872z62zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4310z00zz__objectz00, BgL_bgl_string4310za700za7za7_4428za7, "method1389", 10 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4063z00zz__objectz00, BgL_bgl_za762lambda1871za7624429z00, BGl_z62lambda1871z62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4313z00zz__objectz00, BgL_bgl_string4313za700za7za7_4430za7, "let", 3 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4066z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4431za7, BGl_z62zc3z04anonymousza31848ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4151z00zz__objectz00, BgL_bgl_string4151za700za7za7_4432za7, "&io-sigpipe-error", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2fieldzd2mutatorzd2envzd2zz__objectz00, BgL_bgl_za762classza7d2field4433z00, BGl_z62classzd2fieldzd2mutatorz62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4067z00zz__objectz00, BgL_bgl_za762lambda1846za7624434z00, BGl_z62lambda1846z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4068z00zz__objectz00, BgL_bgl_za762lambda1842za7624435z00, BGl_z62lambda1842z62zz__objectz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string4317z00zz__objectz00, BgL_bgl_string4317za700za7za7_4436za7, "list2192", 8 );
DEFINE_STRING( BGl_string4156z00zz__objectz00, BgL_bgl_string4156za700za7za7_4437za7, "&io-timeout-error", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2fieldzd2accessorzd2envzd2zz__objectz00, BgL_bgl_za762classza7d2field4438z00, BGl_z62classzd2fieldzd2accessorz62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4071z00zz__objectz00, BgL_bgl_za762lambda1889za7624439z00, BGl_z62lambda1889z62zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4072z00zz__objectz00, BgL_bgl_za762lambda1888za7624440z00, BGl_z62lambda1888z62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4320z00zz__objectz00, BgL_bgl_string4320za700za7za7_4441za7, "$cons", 5 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4073z00zz__objectz00, BgL_bgl_za762lambda1895za7624442z00, BGl_z62lambda1895z62zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4074z00zz__objectz00, BgL_bgl_za762lambda1894za7624443z00, BGl_z62lambda1894z62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4323z00zz__objectz00, BgL_bgl_string4323za700za7za7_4444za7, "quote", 5 );
DEFINE_STRING( BGl_string4161z00zz__objectz00, BgL_bgl_string4161za700za7za7_4445za7, "&io-connection-error", 20 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4077z00zz__objectz00, BgL_bgl_za762lambda1900za7624446z00, BGl_z62lambda1900z62zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4078z00zz__objectz00, BgL_bgl_za762lambda1899za7624447z00, BGl_z62lambda1899z62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4326z00zz__objectz00, BgL_bgl_string4326za700za7za7_4448za7, "cons*", 5 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4079z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4449za7, BGl_z62zc3z04anonymousza31884ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4327z00zz__objectz00, BgL_bgl_string4327za700za7za7_4450za7, "&object-display", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_widezd2objectzf3zd2envzf3zz__objectz00, BgL_bgl_za762wideza7d2object4451z00, BGl_z62widezd2objectzf3z43zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4166z00zz__objectz00, BgL_bgl_string4166za700za7za7_4452za7, "&process-exception", 18 );
DEFINE_STRING( BGl_string4329z00zz__objectz00, BgL_bgl_string4329za700za7za7_4453za7, "object-write", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2fieldzd2defaultzd2valuezf3zd2envzf3zz__objectz00, BgL_bgl_za762classza7d2field4454z00, BGl_z62classzd2fieldzd2defaultzd2valuezf3z43zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2fieldszd2envz00zz__objectz00, BgL_bgl_za762classza7d2field4455z00, BGl_z62classzd2fieldszb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_callzd2nextzd2virtualzd2getterzd2envz00zz__objectz00, BgL_bgl_za762callza7d2nextza7d4456za7, BGl_z62callzd2nextzd2virtualzd2getterzb0zz__objectz00, 0L, BUNSPEC, 3 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4080z00zz__objectz00, BgL_bgl_za762lambda1882za7624457z00, BGl_z62lambda1882z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4081z00zz__objectz00, BgL_bgl_za762lambda1880za7624458z00, BGl_z62lambda1880z62zz__objectz00, 0L, BUNSPEC, 6 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4084z00zz__objectz00, BgL_bgl_za762lambda1915za7624459z00, BGl_z62lambda1915z62zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4332z00zz__objectz00, BgL_bgl_string4332za700za7za7_4460za7, "method1391", 10 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4085z00zz__objectz00, BgL_bgl_za762lambda1914za7624461z00, BGl_z62lambda1914z62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4171z00zz__objectz00, BgL_bgl_string4171za700za7za7_4462za7, "&stack-overflow-error", 21 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4088z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4463za7, BGl_z62zc3z04anonymousza31910ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4089z00zz__objectz00, BgL_bgl_za762lambda1908za7624464z00, BGl_z62lambda1908z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string4337z00zz__objectz00, BgL_bgl_string4337za700za7za7_4465za7, "list2193", 8 );
DEFINE_STRING( BGl_string4176z00zz__objectz00, BgL_bgl_string4176za700za7za7_4466za7, "message", 7 );
DEFINE_STRING( BGl_string4339z00zz__objectz00, BgL_bgl_string4339za700za7za7_4467za7, "&object-write", 13 );
DEFINE_STRING( BGl_string4178z00zz__objectz00, BgL_bgl_string4178za700za7za7_4468za7, "bstring", 7 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4090z00zz__objectz00, BgL_bgl_za762lambda1906za7624469z00, BGl_z62lambda1906z62zz__objectz00, 0L, BUNSPEC, 7 );
DEFINE_STRING( BGl_string4340z00zz__objectz00, BgL_bgl_string4340za700za7za7_4470za7, "object-hashnumber", 17 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4093z00zz__objectz00, BgL_bgl_za762lambda1931za7624471z00, BGl_z62lambda1931z62zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4341z00zz__objectz00, BgL_bgl_string4341za700za7za7_4472za7, "object-hashnumber:Wrong number of arguments", 43 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4094z00zz__objectz00, BgL_bgl_za762lambda1930za7624473z00, BGl_z62lambda1930z62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z52isazf2cdepthzf3zd2envz81zz__objectz00, BgL_bgl_za762za752isaza7f2cdep4474za7, BGl_z62z52isazf2cdepthzf3z31zz__objectz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string4344z00zz__objectz00, BgL_bgl_string4344za700za7za7_4475za7, "method1393", 10 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4097z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4476za7, BGl_z62zc3z04anonymousza31926ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4345z00zz__objectz00, BgL_bgl_string4345za700za7za7_4477za7, "&object-hashnumber", 18 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4098z00zz__objectz00, BgL_bgl_za762lambda1924za7624478z00, BGl_z62lambda1924z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string4183z00zz__objectz00, BgL_bgl_string4183za700za7za7_4479za7, "&security-exception", 19 );
DEFINE_STRING( BGl_string4346z00zz__objectz00, BgL_bgl_string4346za700za7za7_4480za7, "object-print:Wrong number of arguments", 38 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4099z00zz__objectz00, BgL_bgl_za762lambda1921za7624481z00, BGl_z62lambda1921z62zz__objectz00, 0L, BUNSPEC, 7 );
DEFINE_STRING( BGl_string4349z00zz__objectz00, BgL_bgl_string4349za700za7za7_4482za7, "method1397", 10 );
DEFINE_EXPORT_BGL_GENERIC( BGl_objectzd2displayzd2envz00zz__objectz00, BgL_bgl_za762objectza7d2disp4483z00, va_generic_entry, BGl_z62objectzd2displayzb0zz__objectz00, BUNSPEC, -2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4261z00zz__objectz00, BgL_bgl_za762objectza7d2disp4484z00, va_generic_entry, BGl_z62objectzd2display1386zb0zz__objectz00, BUNSPEC, -2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4263z00zz__objectz00, BgL_bgl_za762objectza7d2writ4485z00, va_generic_entry, BGl_z62objectzd2write1390zb0zz__objectz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string4350z00zz__objectz00, BgL_bgl_string4350za700za7za7_4486za7, "&object-print", 13 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4265z00zz__objectz00, BgL_bgl_za762objectza7d2hash4487z00, BGl_z62objectzd2hashnumber1392zb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4351z00zz__objectz00, BgL_bgl_string4351za700za7za7_4488za7, "object-equal?:Wrong number of arguments", 39 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4267z00zz__objectz00, BgL_bgl_za762objectza7d2prin4489z00, BGl_z62objectzd2print1394zb0zz__objectz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string4191z00zz__objectz00, BgL_bgl_string4191za700za7za7_4490za7, "permission", 10 );
DEFINE_STRING( BGl_string4354z00zz__objectz00, BgL_bgl_string4354za700za7za7_4491za7, "method1399", 10 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4269z00zz__objectz00, BgL_bgl_za762objectza7d2equa4492z00, BGl_z62objectzd2equalzf31398z43zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4355z00zz__objectz00, BgL_bgl_string4355za700za7za7_4493za7, "&object-equal?", 14 );
DEFINE_STRING( BGl_string4356z00zz__objectz00, BgL_bgl_string4356za700za7za7_4494za7, "exception-notify:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string4196z00zz__objectz00, BgL_bgl_string4196za700za7za7_4495za7, "&access-control-exception", 25 );
DEFINE_STRING( BGl_string4359z00zz__objectz00, BgL_bgl_string4359za700za7za7_4496za7, "method1402", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2classzd2fieldzd2envzd2zz__objectz00, BgL_bgl_za762makeza7d2classza74497za7, BGl_z62makezd2classzd2fieldz62zz__objectz00, 0L, BUNSPEC, 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_findzd2classzd2byzd2hashzd2envz00zz__objectz00, BgL_bgl_za762findza7d2classza74498za7, BGl_z62findzd2classzd2byzd2hashzb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4271z00zz__objectz00, BgL_bgl_za762exceptionza7d2n4499z00, BGl_z62exceptionzd2notify1400zb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4361z00zz__objectz00, BgL_bgl_string4361za700za7za7_4500za7, "exc", 3 );
DEFINE_STRING( BGl_string4362z00zz__objectz00, BgL_bgl_string4362za700za7za7_4501za7, "exception-notify", 16 );
DEFINE_STRING( BGl_string4365z00zz__objectz00, BgL_bgl_string4365za700za7za7_4502za7, "fun2195", 7 );
DEFINE_STRING( BGl_string4369z00zz__objectz00, BgL_bgl_string4369za700za7za7_4503za7, "&exception-notify-&wa1409", 25 );
DEFINE_STRING( BGl_string4370z00zz__objectz00, BgL_bgl_string4370za700za7za7_4504za7, "call-next-method:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string4373z00zz__objectz00, BgL_bgl_string4373za700za7za7_4505za7, "next-method1406", 15 );
DEFINE_STRING( BGl_string4374z00zz__objectz00, BgL_bgl_string4374za700za7za7_4506za7, "&exception-notify-&io1407", 25 );
DEFINE_STRING( BGl_string4375z00zz__objectz00, BgL_bgl_string4375za700za7za7_4507za7, "&exception-notify-&er1405", 25 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2typeszd2numberzd2envzd2zz__objectz00, BgL_bgl_za762biglooza7d2type4508z00, BGl_z62bigloozd2typeszd2numberz62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2nilzd2envz00zz__objectz00, BgL_bgl_za762classza7d2nilza7b4509za7, BGl_z62classzd2nilzb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2numzd2envz00zz__objectz00, BgL_bgl_za762classza7d2numza7b4510za7, BGl_z62classzd2numzb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2genericzd2bucketzd2powzd2envz00zz__objectz00, BgL_bgl_za762biglooza7d2gene4511z00, BGl_z62bigloozd2genericzd2bucketzd2powzb0zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2fieldzd2virtualzf3zd2envz21zz__objectz00, BgL_bgl_za762classza7d2field4512z00, BGl_z62classzd2fieldzd2virtualzf3z91zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3838z00zz__objectz00, BgL_bgl_string3838za700za7za7_4513za7, "/tmp/4.4a/runtime/Llib/object.scm", 33 );
DEFINE_STRING( BGl_string3839z00zz__objectz00, BgL_bgl_string3839za700za7za7_4514za7, "loop", 4 );
DEFINE_STRING( BGl_string3840z00zz__objectz00, BgL_bgl_string3840za700za7za7_4515za7, "bint", 4 );
DEFINE_STRING( BGl_string3841z00zz__objectz00, BgL_bgl_string3841za700za7za7_4516za7, "vector", 6 );
DEFINE_STRING( BGl_string3842z00zz__objectz00, BgL_bgl_string3842za700za7za7_4517za7, "class", 5 );
DEFINE_STRING( BGl_string3843z00zz__objectz00, BgL_bgl_string3843za700za7za7_4518za7, "&class-exists", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_findzd2methodzd2envz00zz__objectz00, BgL_bgl_za762findza7d2method4519z00, BGl_z62findzd2methodzb0zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3844z00zz__objectz00, BgL_bgl_string3844za700za7za7_4520za7, "symbol", 6 );
DEFINE_STRING( BGl_string3845z00zz__objectz00, BgL_bgl_string3845za700za7za7_4521za7, "find-class", 10 );
DEFINE_STRING( BGl_string3846z00zz__objectz00, BgL_bgl_string3846za700za7za7_4522za7, "Cannot find class", 17 );
DEFINE_STRING( BGl_string3847z00zz__objectz00, BgL_bgl_string3847za700za7za7_4523za7, "&find-class", 11 );
DEFINE_STRING( BGl_string3848z00zz__objectz00, BgL_bgl_string3848za700za7za7_4524za7, "&find-class-by-hash", 19 );
DEFINE_STRING( BGl_string3849z00zz__objectz00, BgL_bgl_string3849za700za7za7_4525za7, "eval-class?", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_genericzd2memoryzd2statisticszd2envzd2zz__objectz00, BgL_bgl_za762genericza7d2mem4526z00, BGl_z62genericzd2memoryzd2statisticsz62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string3850z00zz__objectz00, BgL_bgl_string3850za700za7za7_4527za7, "&class-name", 11 );
DEFINE_STRING( BGl_string3851z00zz__objectz00, BgL_bgl_string3851za700za7za7_4528za7, "&class-module", 13 );
DEFINE_STRING( BGl_string3852z00zz__objectz00, BgL_bgl_string3852za700za7za7_4529za7, "&class-num", 10 );
DEFINE_STRING( BGl_string3853z00zz__objectz00, BgL_bgl_string3853za700za7za7_4530za7, "&class-virtual", 14 );
DEFINE_STRING( BGl_string3854z00zz__objectz00, BgL_bgl_string3854za700za7za7_4531za7, "&class-evdata", 13 );
DEFINE_STRING( BGl_string3855z00zz__objectz00, BgL_bgl_string3855za700za7za7_4532za7, "&class-evdata-set!", 18 );
DEFINE_STRING( BGl_string3856z00zz__objectz00, BgL_bgl_string3856za700za7za7_4533za7, "class-evfields-set!", 19 );
DEFINE_STRING( BGl_string3857z00zz__objectz00, BgL_bgl_string3857za700za7za7_4534za7, "Fields already set", 18 );
DEFINE_STRING( BGl_string3858z00zz__objectz00, BgL_bgl_string3858za700za7za7_4535za7, "Not an eval class", 17 );
DEFINE_STRING( BGl_string3859z00zz__objectz00, BgL_bgl_string3859za700za7za7_4536za7, "&class-evfields-set!", 20 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_genericzd2addzd2evalzd2methodz12zd2envz12zz__objectz00, BgL_bgl_za762genericza7d2add4537z00, BGl_z62genericzd2addzd2evalzd2methodz12za2zz__objectz00, 0L, BUNSPEC, 4 );
DEFINE_STRING( BGl_string3860z00zz__objectz00, BgL_bgl_string3860za700za7za7_4538za7, "&class-fields", 13 );
DEFINE_STRING( BGl_string3861z00zz__objectz00, BgL_bgl_string3861za700za7za7_4539za7, "&class-all-fields", 17 );
DEFINE_STRING( BGl_string3862z00zz__objectz00, BgL_bgl_string3862za700za7za7_4540za7, "class-field", 11 );
DEFINE_STRING( BGl_string3863z00zz__objectz00, BgL_bgl_string3863za700za7za7_4541za7, "&find-class-field", 17 );
DEFINE_STRING( BGl_string3864z00zz__objectz00, BgL_bgl_string3864za700za7za7_4542za7, "&make-class-field", 17 );
DEFINE_STRING( BGl_string3865z00zz__objectz00, BgL_bgl_string3865za700za7za7_4543za7, "class-field-name", 16 );
DEFINE_STRING( BGl_string3866z00zz__objectz00, BgL_bgl_string3866za700za7za7_4544za7, "&class-field-name", 17 );
DEFINE_STRING( BGl_string3867z00zz__objectz00, BgL_bgl_string3867za700za7za7_4545za7, "&class-field-virtual?", 21 );
DEFINE_STRING( BGl_string3868z00zz__objectz00, BgL_bgl_string3868za700za7za7_4546za7, "class-field-accessor", 20 );
DEFINE_STRING( BGl_string3869z00zz__objectz00, BgL_bgl_string3869za700za7za7_4547za7, "procedure", 9 );
DEFINE_STRING( BGl_string3870z00zz__objectz00, BgL_bgl_string3870za700za7za7_4548za7, "&class-field-accessor", 21 );
DEFINE_STRING( BGl_string3871z00zz__objectz00, BgL_bgl_string3871za700za7za7_4549za7, "&class-field-mutable?", 21 );
DEFINE_STRING( BGl_string3872z00zz__objectz00, BgL_bgl_string3872za700za7za7_4550za7, "class-field-mutator", 19 );
DEFINE_STRING( BGl_string3873z00zz__objectz00, BgL_bgl_string3873za700za7za7_4551za7, "&class-field-mutator", 20 );
DEFINE_STRING( BGl_string3874z00zz__objectz00, BgL_bgl_string3874za700za7za7_4552za7, "&class-field-info", 17 );
DEFINE_STRING( BGl_string3875z00zz__objectz00, BgL_bgl_string3875za700za7za7_4553za7, "&class-field-default-value?", 27 );
DEFINE_STRING( BGl_string3876z00zz__objectz00, BgL_bgl_string3876za700za7za7_4554za7, "class-field-default-value:Wrong number of arguments", 51 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2evfieldszd2setz12zd2envzc0zz__objectz00, BgL_bgl_za762classza7d2evfie4555z00, BGl_z62classzd2evfieldszd2setz12z70zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3879z00zz__objectz00, BgL_bgl_string3879za700za7za7_4556za7, "funcall", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_nilzf3zd2envz21zz__objectz00, BgL_bgl_za762nilza7f3za791za7za7__4557za7, BGl_z62nilzf3z91zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3881z00zz__objectz00, BgL_bgl_string3881za700za7za7_4558za7, "p", 1 );
DEFINE_STRING( BGl_string3882z00zz__objectz00, BgL_bgl_string3882za700za7za7_4559za7, "class-field-default-value", 25 );
DEFINE_STRING( BGl_string3883z00zz__objectz00, BgL_bgl_string3883za700za7za7_4560za7, "This field has no default value", 31 );
DEFINE_STRING( BGl_string3884z00zz__objectz00, BgL_bgl_string3884za700za7za7_4561za7, "&class-field-default-value", 26 );
DEFINE_STRING( BGl_string3885z00zz__objectz00, BgL_bgl_string3885za700za7za7_4562za7, "&class-field-type", 17 );
DEFINE_STRING( BGl_string3886z00zz__objectz00, BgL_bgl_string3886za700za7za7_4563za7, "&class-super", 12 );
DEFINE_STRING( BGl_string3887z00zz__objectz00, BgL_bgl_string3887za700za7za7_4564za7, "class-allocator", 15 );
DEFINE_STRING( BGl_string3888z00zz__objectz00, BgL_bgl_string3888za700za7za7_4565za7, "class-abstract?", 15 );
DEFINE_STRING( BGl_string3889z00zz__objectz00, BgL_bgl_string3889za700za7za7_4566za7, "&class-abstract?", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z52objectzd2wideningzd2setz12zd2envz92zz__objectz00, BgL_bgl_za762za752objectza7d2w4567za7, BGl_z62z52objectzd2wideningzd2setz12z22zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3890z00zz__objectz00, BgL_bgl_string3890za700za7za7_4568za7, "class-shrink", 12 );
DEFINE_STRING( BGl_string3891z00zz__objectz00, BgL_bgl_string3891za700za7za7_4569za7, "&class-wide?", 12 );
DEFINE_STRING( BGl_string3892z00zz__objectz00, BgL_bgl_string3892za700za7za7_4570za7, "&class-subclasses", 17 );
DEFINE_STRING( BGl_string3893z00zz__objectz00, BgL_bgl_string3893za700za7za7_4571za7, "&class-allocator", 16 );
DEFINE_STRING( BGl_string3894z00zz__objectz00, BgL_bgl_string3894za700za7za7_4572za7, "&class-hash", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_isazf3zd2envz21zz__objectz00, BgL_bgl_za762isaza7f3za791za7za7__4573za7, BGl_z62isazf3z91zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3895z00zz__objectz00, BgL_bgl_string3895za700za7za7_4574za7, "&class-constructor", 18 );
DEFINE_STRING( BGl_string3896z00zz__objectz00, BgL_bgl_string3896za700za7za7_4575za7, "&class-creator", 14 );
DEFINE_STRING( BGl_string3897z00zz__objectz00, BgL_bgl_string3897za700za7za7_4576za7, "class-nil-init!", 15 );
DEFINE_STRING( BGl_string3898z00zz__objectz00, BgL_bgl_string3898za700za7za7_4577za7, "class-nil-init!:Wrong number of arguments", 41 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z52isazd2objectzf2finalzf3zd2envz53zz__objectz00, BgL_bgl_za762za752isaza7d2obje4578za7, BGl_z62z52isazd2objectzf2finalzf3ze3zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2modulezd2envz00zz__objectz00, BgL_bgl_za762classza7d2modul4579z00, BGl_z62classzd2modulezb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2widezf3zd2envzf3zz__objectz00, BgL_bgl_za762classza7d2wideza74580za7, BGl_z62classzd2widezf3z43zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_registerzd2classz12zd2envz12zz__objectz00, BgL_bgl_za762registerza7d2cl4581z00, BGl_z62registerzd2classz12za2zz__objectz00, 0L, BUNSPEC, 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_genericzd2defaultzd2envz00zz__objectz00, BgL_bgl_za762genericza7d2def4582z00, BGl_z62genericzd2defaultzb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2evdatazd2setz12zd2envzc0zz__objectz00, BgL_bgl_za762classza7d2evdat4583z00, BGl_z62classzd2evdatazd2setz12z70zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_objectzd2wideningzd2setz12zd2envzc0zz__objectz00, BgL_bgl_za762objectza7d2wide4584z00, BGl_z62objectzd2wideningzd2setz12z70zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2fieldzd2mutablezf3zd2envz21zz__objectz00, BgL_bgl_za762classza7d2field4585z00, BGl_z62classzd2fieldzd2mutablezf3z91zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_findzd2classzd2fieldzd2envzd2zz__objectz00, BgL_bgl_za762findza7d2classza74586za7, BGl_z62findzd2classzd2fieldz62zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2allocatorzd2envz00zz__objectz00, BgL_bgl_za762classza7d2alloc4587z00, BGl_z62classzd2allocatorzb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_objectzd2classzd2numzd2setz12zd2envz12zz__objectz00, BgL_bgl_za762objectza7d2clas4588z00, BGl_z62objectzd2classzd2numzd2setz12za2zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_callzd2virtualzd2setterzd2envzd2zz__objectz00, BgL_bgl_za762callza7d2virtua4589z00, BGl_z62callzd2virtualzd2setterz62zz__objectz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string4001z00zz__objectz00, BgL_bgl_string4001za700za7za7_4590za7, "alloc", 5 );
DEFINE_STRING( BGl_string4004z00zz__objectz00, BgL_bgl_string4004za700za7za7_4591za7, "fun1796", 7 );
DEFINE_STRING( BGl_string4006z00zz__objectz00, BgL_bgl_string4006za700za7za7_4592za7, "&allocate-instance", 18 );
DEFINE_STRING( BGl_string4007z00zz__objectz00, BgL_bgl_string4007za700za7za7_4593za7, "&wide-object?", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2genericzd2bucketzd2siza7ezd2envza7zz__objectz00, BgL_bgl_za762biglooza7d2gene4594z00, BGl_z62bigloozd2genericzd2bucketzd2siza7ez17zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string4008z00zz__objectz00, BgL_bgl_string4008za700za7za7_4595za7, "call-virtual-getter", 19 );
DEFINE_STRING( BGl_string4009z00zz__objectz00, BgL_bgl_string4009za700za7za7_4596za7, "call-virtual-getter:Wrong number of arguments", 45 );
DEFINE_EXPORT_BGL_GENERIC( BGl_objectzd2hashnumberzd2envz00zz__objectz00, BgL_bgl_za762objectza7d2hash4597z00, BGl_z62objectzd2hashnumberzb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_procedurezd2ze3genericzd2envze3zz__objectz00, BgL_bgl_za762procedureza7d2za74598za7, BGl_z62procedurezd2ze3genericz53zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4012z00zz__objectz00, BgL_bgl_string4012za700za7za7_4599za7, "getter", 6 );
DEFINE_STRING( BGl_string4014z00zz__objectz00, BgL_bgl_string4014za700za7za7_4600za7, "obj", 3 );
DEFINE_STRING( BGl_string4015z00zz__objectz00, BgL_bgl_string4015za700za7za7_4601za7, "&call-virtual-getter", 20 );
DEFINE_STRING( BGl_string4016z00zz__objectz00, BgL_bgl_string4016za700za7za7_4602za7, "call-virtual-setter", 19 );
DEFINE_STRING( BGl_string4017z00zz__objectz00, BgL_bgl_string4017za700za7za7_4603za7, "call-virtual-setter:Wrong number of arguments", 45 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2superzd2envz00zz__objectz00, BgL_bgl_za762classza7d2super4604z00, BGl_z62classzd2superzb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4020z00zz__objectz00, BgL_bgl_string4020za700za7za7_4605za7, "setter", 6 );
DEFINE_STRING( BGl_string4022z00zz__objectz00, BgL_bgl_string4022za700za7za7_4606za7, "value", 5 );
DEFINE_STRING( BGl_string4023z00zz__objectz00, BgL_bgl_string4023za700za7za7_4607za7, "&call-virtual-setter", 20 );
DEFINE_STRING( BGl_string4024z00zz__objectz00, BgL_bgl_string4024za700za7za7_4608za7, "call-next-virtual-getter", 24 );
DEFINE_STRING( BGl_string4025z00zz__objectz00, BgL_bgl_string4025za700za7za7_4609za7, "call-next-virtual-getter:Wrong number of arguments", 50 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_evalzd2classzf3zd2envzf3zz__objectz00, BgL_bgl_za762evalza7d2classza74610za7, BGl_z62evalzd2classzf3z43zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4028z00zz__objectz00, BgL_bgl_string4028za700za7za7_4611za7, "fun1809", 7 );
DEFINE_STRING( BGl_string4029z00zz__objectz00, BgL_bgl_string4029za700za7za7_4612za7, "&call-next-virtual-getter", 25 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2fieldzd2defaultzd2valuezd2envz00zz__objectz00, BgL_bgl_za762classza7d2field4613z00, BGl_z62classzd2fieldzd2defaultzd2valuezb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4102z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4614za7, BGl_z62zc3z04anonymousza31941ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4103z00zz__objectz00, BgL_bgl_za762lambda1939za7624615z00, BGl_z62lambda1939z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4104z00zz__objectz00, BgL_bgl_za762lambda1937za7624616z00, BGl_z62lambda1937z62zz__objectz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string4030z00zz__objectz00, BgL_bgl_string4030za700za7za7_4617za7, "call-next-virtual-setter", 24 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4107z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4618za7, BGl_z62zc3z04anonymousza31952ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4031z00zz__objectz00, BgL_bgl_string4031za700za7za7_4619za7, "call-next-virtual-setter:Wrong number of arguments", 50 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4108z00zz__objectz00, BgL_bgl_za762lambda1949za7624620z00, BGl_z62lambda1949z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4109z00zz__objectz00, BgL_bgl_za762lambda1947za7624621z00, BGl_z62lambda1947z62zz__objectz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string4034z00zz__objectz00, BgL_bgl_string4034za700za7za7_4622za7, "fun1813", 7 );
DEFINE_STRING( BGl_string4035z00zz__objectz00, BgL_bgl_string4035za700za7za7_4623za7, "&call-next-virtual-setter", 25 );
DEFINE_STRING( BGl_string4036z00zz__objectz00, BgL_bgl_string4036za700za7za7_4624za7, "&object-widening", 16 );
DEFINE_STRING( BGl_string4037z00zz__objectz00, BgL_bgl_string4037za700za7za7_4625za7, "&object-widening-set!", 21 );
DEFINE_STRING( BGl_string4038z00zz__objectz00, BgL_bgl_string4038za700za7za7_4626za7, "&%object-widening", 17 );
DEFINE_STRING( BGl_string4039z00zz__objectz00, BgL_bgl_string4039za700za7za7_4627za7, "&%object-widening-set!", 22 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4112z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4628za7, BGl_z62zc3z04anonymousza31962ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4113z00zz__objectz00, BgL_bgl_za762lambda1960za7624629z00, BGl_z62lambda1960z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4114z00zz__objectz00, BgL_bgl_za762lambda1958za7624630z00, BGl_z62lambda1958z62zz__objectz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string4200z00zz__objectz00, BgL_bgl_string4200za700za7za7_4631za7, "args", 4 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4117z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4632za7, BGl_z62zc3z04anonymousza31972ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4118z00zz__objectz00, BgL_bgl_za762lambda1970za7624633z00, BGl_z62lambda1970z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4119z00zz__objectz00, BgL_bgl_za762lambda1968za7624634z00, BGl_z62lambda1968z62zz__objectz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string4205z00zz__objectz00, BgL_bgl_string4205za700za7za7_4635za7, "&warning", 8 );
DEFINE_STRING( BGl_string4045z00zz__objectz00, BgL_bgl_string4045za700za7za7_4636za7, "__object", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2subclasseszd2envz00zz__objectz00, BgL_bgl_za762classza7d2subcl4637z00, BGl_z62classzd2subclasseszb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4122z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4638za7, BGl_z62zc3z04anonymousza31982ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4123z00zz__objectz00, BgL_bgl_za762lambda1980za7624639z00, BGl_z62lambda1980z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4124z00zz__objectz00, BgL_bgl_za762lambda1978za7624640z00, BGl_z62lambda1978z62zz__objectz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string4210z00zz__objectz00, BgL_bgl_string4210za700za7za7_4641za7, "&eval-warning", 13 );
DEFINE_STRING( BGl_string4211z00zz__objectz00, BgL_bgl_string4211za700za7za7_4642za7, "&<@anonymous:2157>", 18 );
DEFINE_STRING( BGl_string4212z00zz__objectz00, BgL_bgl_string4212za700za7za7_4643za7, "&<@anonymous:2141>", 18 );
DEFINE_STRING( BGl_string4050z00zz__objectz00, BgL_bgl_string4050za700za7za7_4644za7, "&condition", 10 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4127z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4645za7, BGl_z62zc3z04anonymousza31992ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4213z00zz__objectz00, BgL_bgl_string4213za700za7za7_4646za7, "&lambda2146", 11 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4128z00zz__objectz00, BgL_bgl_za762lambda1990za7624647z00, BGl_z62lambda1990z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string4214z00zz__objectz00, BgL_bgl_string4214za700za7za7_4648za7, "&lambda2145", 11 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4129z00zz__objectz00, BgL_bgl_za762lambda1988za7624649z00, BGl_z62lambda1988z62zz__objectz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string4215z00zz__objectz00, BgL_bgl_string4215za700za7za7_4650za7, "&<@anonymous:2115>", 18 );
DEFINE_STRING( BGl_string4216z00zz__objectz00, BgL_bgl_string4216za700za7za7_4651za7, "&lambda2110", 11 );
DEFINE_STRING( BGl_string4217z00zz__objectz00, BgL_bgl_string4217za700za7za7_4652za7, "&lambda2129", 11 );
DEFINE_STRING( BGl_string4055z00zz__objectz00, BgL_bgl_string4055za700za7za7_4653za7, "fname", 5 );
DEFINE_STRING( BGl_string4218z00zz__objectz00, BgL_bgl_string4218za700za7za7_4654za7, "&lambda2128", 11 );
DEFINE_STRING( BGl_string4219z00zz__objectz00, BgL_bgl_string4219za700za7za7_4655za7, "&lambda2121", 11 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4132z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4656za7, BGl_z62zc3z04anonymousza32003ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4133z00zz__objectz00, BgL_bgl_za762lambda2001za7624657z00, BGl_z62lambda2001z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4134z00zz__objectz00, BgL_bgl_za762lambda1999za7624658z00, BGl_z62lambda1999z62zz__objectz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string4220z00zz__objectz00, BgL_bgl_string4220za700za7za7_4659za7, "&lambda2120", 11 );
DEFINE_STRING( BGl_string4221z00zz__objectz00, BgL_bgl_string4221za700za7za7_4660za7, "&<@anonymous:2096>", 18 );
DEFINE_STRING( BGl_string4222z00zz__objectz00, BgL_bgl_string4222za700za7za7_4661za7, "&lambda2092", 11 );
DEFINE_STRING( BGl_string4060z00zz__objectz00, BgL_bgl_string4060za700za7za7_4662za7, "location", 8 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4137z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4663za7, BGl_z62zc3z04anonymousza32015ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4223z00zz__objectz00, BgL_bgl_string4223za700za7za7_4664za7, "&lambda2103", 11 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4138z00zz__objectz00, BgL_bgl_za762lambda2013za7624665z00, BGl_z62lambda2013z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string4224z00zz__objectz00, BgL_bgl_string4224za700za7za7_4666za7, "&lambda2102", 11 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4139z00zz__objectz00, BgL_bgl_za762lambda2011za7624667z00, BGl_z62lambda2011z62zz__objectz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string4225z00zz__objectz00, BgL_bgl_string4225za700za7za7_4668za7, "&<@anonymous:2086>", 18 );
DEFINE_STRING( BGl_string4226z00zz__objectz00, BgL_bgl_string4226za700za7za7_4669za7, "&<@anonymous:2076>", 18 );
DEFINE_STRING( BGl_string4227z00zz__objectz00, BgL_bgl_string4227za700za7za7_4670za7, "&<@anonymous:2062>", 18 );
DEFINE_STRING( BGl_string4065z00zz__objectz00, BgL_bgl_string4065za700za7za7_4671za7, "stack", 5 );
DEFINE_STRING( BGl_string4228z00zz__objectz00, BgL_bgl_string4228za700za7za7_4672za7, "&<@anonymous:2050>", 18 );
DEFINE_STRING( BGl_string4229z00zz__objectz00, BgL_bgl_string4229za700za7za7_4673za7, "&<@anonymous:2039>", 18 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2evdatazd2envz00zz__objectz00, BgL_bgl_za762classza7d2evdat4674z00, BGl_z62classzd2evdatazb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4142z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4675za7, BGl_z62zc3z04anonymousza32027ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4143z00zz__objectz00, BgL_bgl_za762lambda2024za7624676z00, BGl_z62lambda2024z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4144z00zz__objectz00, BgL_bgl_za762lambda2022za7624677z00, BGl_z62lambda2022z62zz__objectz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string4230z00zz__objectz00, BgL_bgl_string4230za700za7za7_4678za7, "&<@anonymous:2027>", 18 );
DEFINE_STRING( BGl_string4231z00zz__objectz00, BgL_bgl_string4231za700za7za7_4679za7, "&<@anonymous:2015>", 18 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_genericzd2nozd2defaultzd2behaviorzd2envz00zz__objectz00, BgL_bgl_za762genericza7d2noza74680za7, va_generic_entry, BGl_z62genericzd2nozd2defaultzd2behaviorzb0zz__objectz00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string4232z00zz__objectz00, BgL_bgl_string4232za700za7za7_4681za7, "&<@anonymous:2003>", 18 );
DEFINE_STRING( BGl_string4070z00zz__objectz00, BgL_bgl_string4070za700za7za7_4682za7, "&exception", 10 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4147z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4683za7, BGl_z62zc3z04anonymousza32039ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4233z00zz__objectz00, BgL_bgl_string4233za700za7za7_4684za7, "&<@anonymous:1992>", 18 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4148z00zz__objectz00, BgL_bgl_za762lambda2037za7624685z00, BGl_z62lambda2037z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string4234z00zz__objectz00, BgL_bgl_string4234za700za7za7_4686za7, "&<@anonymous:1982>", 18 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4149z00zz__objectz00, BgL_bgl_za762lambda2035za7624687z00, BGl_z62lambda2035z62zz__objectz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string4235z00zz__objectz00, BgL_bgl_string4235za700za7za7_4688za7, "&<@anonymous:1972>", 18 );
DEFINE_STRING( BGl_string4236z00zz__objectz00, BgL_bgl_string4236za700za7za7_4689za7, "&<@anonymous:1962>", 18 );
DEFINE_STRING( BGl_string4237z00zz__objectz00, BgL_bgl_string4237za700za7za7_4690za7, "&<@anonymous:1952>", 18 );
DEFINE_STRING( BGl_string4238z00zz__objectz00, BgL_bgl_string4238za700za7za7_4691za7, "&<@anonymous:1941>", 18 );
DEFINE_STRING( BGl_string4076z00zz__objectz00, BgL_bgl_string4076za700za7za7_4692za7, "msg", 3 );
DEFINE_STRING( BGl_string4239z00zz__objectz00, BgL_bgl_string4239za700za7za7_4693za7, "&<@anonymous:1926>", 18 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4152z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4694za7, BGl_z62zc3z04anonymousza32050ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4153z00zz__objectz00, BgL_bgl_za762lambda2048za7624695z00, BGl_z62lambda2048z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4154z00zz__objectz00, BgL_bgl_za762lambda2046za7624696z00, BGl_z62lambda2046z62zz__objectz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string4240z00zz__objectz00, BgL_bgl_string4240za700za7za7_4697za7, "&lambda1931", 11 );
DEFINE_STRING( BGl_string4241z00zz__objectz00, BgL_bgl_string4241za700za7za7_4698za7, "&lambda1930", 11 );
DEFINE_STRING( BGl_string4242z00zz__objectz00, BgL_bgl_string4242za700za7za7_4699za7, "&<@anonymous:1910>", 18 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4157z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4700za7, BGl_z62zc3z04anonymousza32062ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4243z00zz__objectz00, BgL_bgl_string4243za700za7za7_4701za7, "&lambda1915", 11 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4158z00zz__objectz00, BgL_bgl_za762lambda2060za7624702z00, BGl_z62lambda2060z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string4244z00zz__objectz00, BgL_bgl_string4244za700za7za7_4703za7, "&lambda1914", 11 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4159z00zz__objectz00, BgL_bgl_za762lambda2058za7624704z00, BGl_z62lambda2058z62zz__objectz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string4245z00zz__objectz00, BgL_bgl_string4245za700za7za7_4705za7, "&<@anonymous:1884>", 18 );
DEFINE_STRING( BGl_string4083z00zz__objectz00, BgL_bgl_string4083za700za7za7_4706za7, "&error", 6 );
DEFINE_STRING( BGl_string4246z00zz__objectz00, BgL_bgl_string4246za700za7za7_4707za7, "&lambda1900", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2virtualzd2envz00zz__objectz00, BgL_bgl_za762classza7d2virtu4708z00, BGl_z62classzd2virtualzb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4247z00zz__objectz00, BgL_bgl_string4247za700za7za7_4709za7, "&lambda1899", 11 );
DEFINE_STRING( BGl_string4248z00zz__objectz00, BgL_bgl_string4248za700za7za7_4710za7, "&lambda1895", 11 );
DEFINE_STRING( BGl_string4249z00zz__objectz00, BgL_bgl_string4249za700za7za7_4711za7, "&lambda1894", 11 );
DEFINE_STRING( BGl_string4087z00zz__objectz00, BgL_bgl_string4087za700za7za7_4712za7, "type", 4 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4162z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4713za7, BGl_z62zc3z04anonymousza32076ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4163z00zz__objectz00, BgL_bgl_za762lambda2072za7624714z00, BGl_z62lambda2072z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4164z00zz__objectz00, BgL_bgl_za762lambda2070za7624715z00, BGl_z62lambda2070z62zz__objectz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string4250z00zz__objectz00, BgL_bgl_string4250za700za7za7_4716za7, "&lambda1889", 11 );
DEFINE_STRING( BGl_string4251z00zz__objectz00, BgL_bgl_string4251za700za7za7_4717za7, "&lambda1888", 11 );
DEFINE_STRING( BGl_string4252z00zz__objectz00, BgL_bgl_string4252za700za7za7_4718za7, "&<@anonymous:1848>", 18 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4167z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4719za7, BGl_z62zc3z04anonymousza32086ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4253z00zz__objectz00, BgL_bgl_string4253za700za7za7_4720za7, "&lambda1872", 11 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4168z00zz__objectz00, BgL_bgl_za762lambda2084za7624721z00, BGl_z62lambda2084z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string4254z00zz__objectz00, BgL_bgl_string4254za700za7za7_4722za7, "&lambda1871", 11 );
DEFINE_STRING( BGl_string4092z00zz__objectz00, BgL_bgl_string4092za700za7za7_4723za7, "&type-error", 11 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4169z00zz__objectz00, BgL_bgl_za762lambda2082za7624724z00, BGl_z62lambda2082z62zz__objectz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string4255z00zz__objectz00, BgL_bgl_string4255za700za7za7_4725za7, "&lambda1863", 11 );
DEFINE_STRING( BGl_string4256z00zz__objectz00, BgL_bgl_string4256za700za7za7_4726za7, "&lambda1862", 11 );
DEFINE_STRING( BGl_string4257z00zz__objectz00, BgL_bgl_string4257za700za7za7_4727za7, "&lambda1855", 11 );
DEFINE_STRING( BGl_string4258z00zz__objectz00, BgL_bgl_string4258za700za7za7_4728za7, "&lambda1854", 11 );
DEFINE_STRING( BGl_string4096z00zz__objectz00, BgL_bgl_string4096za700za7za7_4729za7, "index", 5 );
DEFINE_STRING( BGl_string4259z00zz__objectz00, BgL_bgl_string4259za700za7za7_4730za7, "&<@anonymous:1833>", 18 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4172z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4731za7, BGl_z62zc3z04anonymousza32104ze3ze5zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4173z00zz__objectz00, BgL_bgl_za762lambda2103za7624732z00, BGl_z62lambda2103z62zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4174z00zz__objectz00, BgL_bgl_za762lambda2102za7624733z00, BGl_z62lambda2102z62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4260z00zz__objectz00, BgL_bgl_string4260za700za7za7_4734za7, "&<@anonymous:1823>", 18 );
DEFINE_STRING( BGl_string4262z00zz__objectz00, BgL_bgl_string4262za700za7za7_4735za7, "object-display1386", 18 );
DEFINE_STRING( BGl_string4264z00zz__objectz00, BgL_bgl_string4264za700za7za7_4736za7, "object-write1390", 16 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4179z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4737za7, BGl_z62zc3z04anonymousza32096ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4266z00zz__objectz00, BgL_bgl_string4266za700za7za7_4738za7, "object-hashnumber1392", 21 );
DEFINE_STRING( BGl_string4268z00zz__objectz00, BgL_bgl_string4268za700za7za7_4739za7, "object-print1394", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_objectzf3zd2envz21zz__objectz00, BgL_bgl_za762objectza7f3za791za74740z00, BGl_z62objectzf3z91zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_GENERIC( BGl_objectzd2printzd2envz00zz__objectz00, BgL_bgl_za762objectza7d2prin4741z00, BGl_z62objectzd2printzb0zz__objectz00, 0L, BUNSPEC, 3 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4180z00zz__objectz00, BgL_bgl_za762lambda2094za7624742z00, BGl_z62lambda2094z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4181z00zz__objectz00, BgL_bgl_za762lambda2092za7624743z00, BGl_z62lambda2092z62zz__objectz00, 0L, BUNSPEC, 4 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4184z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4744za7, BGl_z62zc3z04anonymousza32122ze3ze5zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string4270z00zz__objectz00, BgL_bgl_string4270za700za7za7_4745za7, "object-equal?1398", 17 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4185z00zz__objectz00, BgL_bgl_za762lambda2121za7624746z00, BGl_z62lambda2121z62zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4186z00zz__objectz00, BgL_bgl_za762lambda2120za7624747z00, BGl_z62lambda2120z62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4272z00zz__objectz00, BgL_bgl_string4272za700za7za7_4748za7, "exception-notify1400", 20 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4187z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4749za7, BGl_z62zc3z04anonymousza32130ze3ze5zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string4273z00zz__objectz00, BgL_bgl_string4273za700za7za7_4750za7, "*** UNKNOWN EXCEPTION: ", 23 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4188z00zz__objectz00, BgL_bgl_za762lambda2129za7624751z00, BGl_z62lambda2129z62zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4274z00zz__objectz00, BgL_bgl_string4274za700za7za7_4752za7, " [[", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_allocatezd2instancezd2envz00zz__objectz00, BgL_bgl_za762allocateza7d2in4753z00, BGl_z62allocatezd2instancezb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4189z00zz__objectz00, BgL_bgl_za762lambda2128za7624754z00, BGl_z62lambda2128z62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4275z00zz__objectz00, BgL_bgl_string4275za700za7za7_4755za7, "]]", 2 );
DEFINE_STRING( BGl_string4278z00zz__objectz00, BgL_bgl_string4278za700za7za7_4756za7, "get-value", 9 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4192z00zz__objectz00, BgL_bgl_za762za7c3za704anonymo4757za7, BGl_z62zc3z04anonymousza32115ze3ze5zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4193z00zz__objectz00, BgL_bgl_za762lambda2112za7624758z00, BGl_z62lambda2112z62zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4194z00zz__objectz00, BgL_bgl_za762lambda2110za7624759z00, BGl_z62lambda2110z62zz__objectz00, 0L, BUNSPEC, 6 );
DEFINE_STRING( BGl_string4280z00zz__objectz00, BgL_bgl_string4280za700za7za7_4760za7, "obj1", 4 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4197z00zz__objectz00, BgL_bgl_za762lambda2146za7624761z00, BGl_z62lambda2146z62zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string4283z00zz__objectz00, BgL_bgl_string4283za700za7za7_4762za7, "obj2", 4 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4198z00zz__objectz00, BgL_bgl_za762lambda2145za7624763z00, BGl_z62lambda2145z62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4284z00zz__objectz00, BgL_bgl_string4284za700za7za7_4764za7, "&object-equal?1398", 18 );
DEFINE_STRING( BGl_string4285z00zz__objectz00, BgL_bgl_string4285za700za7za7_4765za7, "class-field-write/display", 25 );
DEFINE_STRING( BGl_string4286z00zz__objectz00, BgL_bgl_string4286za700za7za7_4766za7, " [", 2 );
DEFINE_STRING( BGl_string4287z00zz__objectz00, BgL_bgl_string4287za700za7za7_4767za7, "class-field-write/display:Wrong number of arguments", 51 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z52isazd2objectzf2cdepthzf3zd2envz53zz__objectz00, BgL_bgl_za762za752isaza7d2obje4768za7, BGl_z62z52isazd2objectzf2cdepthzf3ze3zz__objectz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2fieldzd2infozd2envzd2zz__objectz00, BgL_bgl_za762classza7d2field4769z00, BGl_z62classzd2fieldzd2infoz62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4366z00zz__objectz00, BgL_bgl_za762exceptionza7d2n4770z00, BGl_z62exceptionzd2notifyzd2z62er1405z00zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4367z00zz__objectz00, BgL_bgl_za762exceptionza7d2n4771z00, BGl_z62exceptionzd2notifyzd2z62io1407z00zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc4368z00zz__objectz00, BgL_bgl_za762exceptionza7d2n4772z00, BGl_z62exceptionzd2notifyzd2z62wa1409z00zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string4291z00zz__objectz00, BgL_bgl_string4291za700za7za7_4773za7, "print-slot", 10 );
DEFINE_STRING( BGl_string4293z00zz__objectz00, BgL_bgl_string4293za700za7za7_4774za7, "arg2170", 7 );
DEFINE_STRING( BGl_string4295z00zz__objectz00, BgL_bgl_string4295za700za7za7_4775za7, "port", 4 );
DEFINE_STRING( BGl_string4296z00zz__objectz00, BgL_bgl_string4296za700za7za7_4776za7, "#|", 2 );
DEFINE_STRING( BGl_string4297z00zz__objectz00, BgL_bgl_string4297za700za7za7_4777za7, " nil|", 5 );
DEFINE_STRING( BGl_string4298z00zz__objectz00, BgL_bgl_string4298za700za7za7_4778za7, "&object-print1394", 17 );
DEFINE_STRING( BGl_string4299z00zz__objectz00, BgL_bgl_string4299za700za7za7_4779za7, "output-port", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2existszd2envz00zz__objectz00, BgL_bgl_za762classza7d2exist4780z00, BGl_z62classzd2existszb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3901z00zz__objectz00, BgL_bgl_string3901za700za7za7_4781za7, "fun1531", 7 );
DEFINE_STRING( BGl_string3904z00zz__objectz00, BgL_bgl_string3904za700za7za7_4782za7, "fun1530", 7 );
DEFINE_STRING( BGl_string3906z00zz__objectz00, BgL_bgl_string3906za700za7za7_4783za7, "o", 1 );
DEFINE_STRING( BGl_string3909z00zz__objectz00, BgL_bgl_string3909za700za7za7_4784za7, "proc", 4 );
DEFINE_STRING( BGl_string3911z00zz__objectz00, BgL_bgl_string3911za700za7za7_4785za7, "wo", 2 );
DEFINE_STRING( BGl_string3914z00zz__objectz00, BgL_bgl_string3914za700za7za7_4786za7, "fun1532", 7 );
DEFINE_STRING( BGl_string3916z00zz__objectz00, BgL_bgl_string3916za700za7za7_4787za7, "&class-nil-init!", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_callzd2virtualzd2getterzd2envzd2zz__objectz00, BgL_bgl_za762callza7d2virtua4788z00, BGl_z62callzd2virtualzd2getterz62zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3917z00zz__objectz00, BgL_bgl_string3917za700za7za7_4789za7, "class-nil", 9 );
DEFINE_STRING( BGl_string3918z00zz__objectz00, BgL_bgl_string3918za700za7za7_4790za7, "&class-nil", 10 );
DEFINE_STRING( BGl_string3919z00zz__objectz00, BgL_bgl_string3919za700za7za7_4791za7, "initialize-objects!", 19 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_objectzd2classzd2numzd2envzd2zz__objectz00, BgL_bgl_za762objectza7d2clas4792z00, BGl_z62objectzd2classzd2numz62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_GENERIC( BGl_objectzd2equalzf3zd2envzf3zz__objectz00, BgL_bgl_za762objectza7d2equa4793z00, BGl_z62objectzd2equalzf3z43zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3920z00zz__objectz00, BgL_bgl_string3920za700za7za7_4794za7, "extend-vector", 13 );
DEFINE_STRING( BGl_string3921z00zz__objectz00, BgL_bgl_string3921za700za7za7_4795za7, "double-nb-classes!", 18 );
DEFINE_STRING( BGl_string3922z00zz__objectz00, BgL_bgl_string3922za700za7za7_4796za7, "double-nb-generics!", 19 );
DEFINE_STRING( BGl_string3923z00zz__objectz00, BgL_bgl_string3923za700za7za7_4797za7, "&object-class-num", 17 );
DEFINE_STRING( BGl_string3924z00zz__objectz00, BgL_bgl_string3924za700za7za7_4798za7, "object", 6 );
DEFINE_STRING( BGl_string3925z00zz__objectz00, BgL_bgl_string3925za700za7za7_4799za7, "&object-class-num-set!", 22 );
DEFINE_STRING( BGl_string3926z00zz__objectz00, BgL_bgl_string3926za700za7za7_4800za7, "object-class", 12 );
DEFINE_STRING( BGl_string3927z00zz__objectz00, BgL_bgl_string3927za700za7za7_4801za7, "&object-class", 13 );
extern obj_t BGl_displayzd2envzd2zz__r4_output_6_10_3z00;
DEFINE_STRING( BGl_string3928z00zz__objectz00, BgL_bgl_string3928za700za7za7_4802za7, "generic-default", 15 );
DEFINE_STRING( BGl_string3929z00zz__objectz00, BgL_bgl_string3929za700za7za7_4803za7, "&generic-default", 16 );
DEFINE_STRING( BGl_string3930z00zz__objectz00, BgL_bgl_string3930za700za7za7_4804za7, "&generic-method-array", 21 );
DEFINE_STRING( BGl_string3931z00zz__objectz00, BgL_bgl_string3931za700za7za7_4805za7, "method-array-ref", 16 );
DEFINE_STRING( BGl_string3932z00zz__objectz00, BgL_bgl_string3932za700za7za7_4806za7, "&method-array-ref", 17 );
DEFINE_STRING( BGl_string3933z00zz__objectz00, BgL_bgl_string3933za700za7za7_4807za7, "method-array-set!", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2constructorzd2envz00zz__objectz00, BgL_bgl_za762classza7d2const4808z00, BGl_z62classzd2constructorzb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3935z00zz__objectz00, BgL_bgl_string3935za700za7za7_4809za7, "generic", 7 );
DEFINE_STRING( BGl_string3938z00zz__objectz00, BgL_bgl_string3938za700za7za7_4810za7, "mtable-size", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_findzd2superzd2classzd2methodzd2envz00zz__objectz00, BgL_bgl_za762findza7d2superza74811za7, BGl_z62findzd2superzd2classzd2methodzb0zz__objectz00, 0L, BUNSPEC, 3 );
extern obj_t BGl_writezd2envzd2zz__r4_output_6_10_3z00;
DEFINE_STRING( BGl_string3940z00zz__objectz00, BgL_bgl_string3940za700za7za7_4812za7, "method-array-size", 17 );
DEFINE_STRING( BGl_string3942z00zz__objectz00, BgL_bgl_string3942za700za7za7_4813za7, "generic-bucket-size", 19 );
DEFINE_STRING( BGl_string3944z00zz__objectz00, BgL_bgl_string3944za700za7za7_4814za7, "max-class", 9 );
DEFINE_STRING( BGl_string3946z00zz__objectz00, BgL_bgl_string3946za700za7za7_4815za7, "max-generic", 11 );
DEFINE_STRING( BGl_string3947z00zz__objectz00, BgL_bgl_string3947za700za7za7_4816za7, "<@anonymous:1619>", 17 );
DEFINE_STRING( BGl_string3948z00zz__objectz00, BgL_bgl_string3948za700za7za7_4817za7, "map", 3 );
DEFINE_STRING( BGl_string3949z00zz__objectz00, BgL_bgl_string3949za700za7za7_4818za7, "list", 4 );
DEFINE_STRING( BGl_string3950z00zz__objectz00, BgL_bgl_string3950za700za7za7_4819za7, "Illegal super-class for class", 29 );
DEFINE_STRING( BGl_string3951z00zz__objectz00, BgL_bgl_string3951za700za7za7_4820za7, "register-class!", 15 );
DEFINE_STRING( BGl_string3952z00zz__objectz00, BgL_bgl_string3952za700za7za7_4821za7, "Fields not a vector", 19 );
DEFINE_STRING( BGl_string3953z00zz__objectz00, BgL_bgl_string3953za700za7za7_4822za7, ")", 1 );
DEFINE_STRING( BGl_string3954z00zz__objectz00, BgL_bgl_string3954za700za7za7_4823za7, "@", 1 );
DEFINE_STRING( BGl_string3955z00zz__objectz00, BgL_bgl_string3955za700za7za7_4824za7, "\" (", 3 );
DEFINE_STRING( BGl_string3956z00zz__objectz00, BgL_bgl_string3956za700za7za7_4825za7, "Dangerous class redefinition: \"", 31 );
DEFINE_STRING( BGl_string3957z00zz__objectz00, BgL_bgl_string3957za700za7za7_4826za7, "vector-set!", 11 );
DEFINE_STRING( BGl_string3958z00zz__objectz00, BgL_bgl_string3958za700za7za7_4827za7, "&register-class!", 16 );
DEFINE_STRING( BGl_string3959z00zz__objectz00, BgL_bgl_string3959za700za7za7_4828za7, "fill-vector-with-virtuals!", 26 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_callzd2nextzd2virtualzd2setterzd2envz00zz__objectz00, BgL_bgl_za762callza7d2nextza7d4829za7, BGl_z62callzd2nextzd2virtualzd2setterzb0zz__objectz00, 0L, BUNSPEC, 4 );
DEFINE_STRING( BGl_string3960z00zz__objectz00, BgL_bgl_string3960za700za7za7_4830za7, "<@anonymous:1686>", 17 );
DEFINE_STRING( BGl_string3961z00zz__objectz00, BgL_bgl_string3961za700za7za7_4831za7, "pair", 4 );
DEFINE_STRING( BGl_string3962z00zz__objectz00, BgL_bgl_string3962za700za7za7_4832za7, "for-each", 8 );
DEFINE_STRING( BGl_string3963z00zz__objectz00, BgL_bgl_string3963za700za7za7_4833za7, "make-class-virtual-slots-vector", 31 );
DEFINE_STRING( BGl_string3964z00zz__objectz00, BgL_bgl_string3964za700za7za7_4834za7, "make-method-array", 17 );
DEFINE_STRING( BGl_string3965z00zz__objectz00, BgL_bgl_string3965za700za7za7_4835za7, "unoptimal bigloo-generic-bucket-size: ", 38 );
DEFINE_STRING( BGl_string3966z00zz__objectz00, BgL_bgl_string3966za700za7za7_4836za7, "No default behavior", 19 );
DEFINE_STRING( BGl_string3967z00zz__objectz00, BgL_bgl_string3967za700za7za7_4837za7, "&procedure->generic", 19 );
DEFINE_STRING( BGl_string3968z00zz__objectz00, BgL_bgl_string3968za700za7za7_4838za7, "&register-generic!", 18 );
DEFINE_STRING( BGl_string3969z00zz__objectz00, BgL_bgl_string3969za700za7za7_4839za7, "register-generic-sans-lock!", 27 );
DEFINE_STRING( BGl_string3970z00zz__objectz00, BgL_bgl_string3970za700za7za7_4840za7, "laap", 4 );
DEFINE_STRING( BGl_string3971z00zz__objectz00, BgL_bgl_string3971za700za7za7_4841za7, "%add-method!", 12 );
DEFINE_STRING( BGl_string3972z00zz__objectz00, BgL_bgl_string3972za700za7za7_4842za7, "", 0 );
DEFINE_STRING( BGl_string3973z00zz__objectz00, BgL_bgl_string3973za700za7za7_4843za7, "loop~0", 6 );
DEFINE_STRING( BGl_string3974z00zz__objectz00, BgL_bgl_string3974za700za7za7_4844za7, "method/generic arity mismatch, expecting ~a", 43 );
DEFINE_STRING( BGl_string3975z00zz__objectz00, BgL_bgl_string3975za700za7za7_4845za7, "generic-add-method!", 19 );
DEFINE_STRING( BGl_string3976z00zz__objectz00, BgL_bgl_string3976za700za7za7_4846za7, "Illegal class for method", 24 );
DEFINE_STRING( BGl_string3977z00zz__objectz00, BgL_bgl_string3977za700za7za7_4847za7, "&generic-add-method!", 20 );
DEFINE_STRING( BGl_string3978z00zz__objectz00, BgL_bgl_string3978za700za7za7_4848za7, "generic-add-eval-method!", 24 );
DEFINE_STRING( BGl_string3979z00zz__objectz00, BgL_bgl_string3979za700za7za7_4849za7, "&generic-add-eval-method!", 25 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2allzd2fieldszd2envzd2zz__objectz00, BgL_bgl_za762classza7d2allza7d4850za7, BGl_z62classzd2allzd2fieldsz62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2fieldzf3zd2envzf3zz__objectz00, BgL_bgl_za762classza7d2field4851z00, BGl_z62classzd2fieldzf3z43zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3980z00zz__objectz00, BgL_bgl_string3980za700za7za7_4852za7, "find-method", 11 );
DEFINE_STRING( BGl_string3981z00zz__objectz00, BgL_bgl_string3981za700za7za7_4853za7, "&find-method", 12 );
DEFINE_STRING( BGl_string3982z00zz__objectz00, BgL_bgl_string3982za700za7za7_4854za7, "find-super-class-method", 23 );
DEFINE_STRING( BGl_string3983z00zz__objectz00, BgL_bgl_string3983za700za7za7_4855za7, "&find-super-class-method", 24 );
DEFINE_STRING( BGl_string3984z00zz__objectz00, BgL_bgl_string3984za700za7za7_4856za7, "&find-method-from", 17 );
DEFINE_STRING( BGl_string3985z00zz__objectz00, BgL_bgl_string3985za700za7za7_4857za7, "nil?", 4 );
DEFINE_STRING( BGl_string3986z00zz__objectz00, BgL_bgl_string3986za700za7za7_4858za7, "&nil?", 5 );
DEFINE_STRING( BGl_string3987z00zz__objectz00, BgL_bgl_string3987za700za7za7_4859za7, "isa?", 4 );
DEFINE_STRING( BGl_string3988z00zz__objectz00, BgL_bgl_string3988za700za7za7_4860za7, "&isa?", 5 );
DEFINE_STRING( BGl_string3989z00zz__objectz00, BgL_bgl_string3989za700za7za7_4861za7, "%isa/cdepth?", 12 );
DEFINE_STRING( BGl_string3990z00zz__objectz00, BgL_bgl_string3990za700za7za7_4862za7, "&%isa/cdepth?", 13 );
DEFINE_STRING( BGl_string3991z00zz__objectz00, BgL_bgl_string3991za700za7za7_4863za7, "%isa-object/cdepth?", 19 );
DEFINE_STRING( BGl_string3992z00zz__objectz00, BgL_bgl_string3992za700za7za7_4864za7, "&%isa-object/cdepth?", 20 );
DEFINE_STRING( BGl_string3993z00zz__objectz00, BgL_bgl_string3993za700za7za7_4865za7, "%isa/final?", 11 );
DEFINE_STRING( BGl_string3994z00zz__objectz00, BgL_bgl_string3994za700za7za7_4866za7, "&%isa/final?", 12 );
DEFINE_STRING( BGl_string3995z00zz__objectz00, BgL_bgl_string3995za700za7za7_4867za7, "%isa-object/final?", 18 );
DEFINE_STRING( BGl_string3996z00zz__objectz00, BgL_bgl_string3996za700za7za7_4868za7, "&%isa-object/final?", 19 );
DEFINE_STRING( BGl_string3997z00zz__objectz00, BgL_bgl_string3997za700za7za7_4869za7, "allocate-instance", 17 );
DEFINE_STRING( BGl_string3998z00zz__objectz00, BgL_bgl_string3998za700za7za7_4870za7, "loop:Wrong number of arguments", 30 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z52isazf2finalzf3zd2envz81zz__objectz00, BgL_bgl_za762za752isaza7f2fina4871za7, BGl_z62z52isazf2finalzf3z31zz__objectz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2genericzd2bucketzd2maskzd2envz00zz__objectz00, BgL_bgl_za762biglooza7d2gene4872z00, BGl_z62bigloozd2genericzd2bucketzd2maskzb0zz__objectz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_classzd2fieldzd2namezd2envzd2zz__objectz00, BgL_bgl_za762classza7d2field4873z00, BGl_z62classzd2fieldzd2namez62zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_objectzd2classzd2envz00zz__objectz00, BgL_bgl_za762objectza7d2clas4874z00, BGl_z62objectzd2classzb0zz__objectz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_methodzd2arrayzd2refzd2envzd2zz__objectz00, BgL_bgl_za762methodza7d2arra4875z00, BGl_z62methodzd2arrayzd2refz62zz__objectz00, 0L, BUNSPEC, 3 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol4343z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4182z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4348z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4190z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4353z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4195z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4358z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4199z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list3999z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4360z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4364z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4372z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62iozd2writezd2errorz62zz__objectz00) );
ADD_ROOT( (void *)(&BGl_za2nbzd2classeszd2maxza2z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62exceptionz62zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol3878z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol3880z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_za2nbzd2genericsza2zd2zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4306z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4311z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4314z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4315z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4318z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62evalzd2warningzb0zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4321z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4324z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4330z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4333z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4334z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4335z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4338z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4342z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4347z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4352z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4357z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4363z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4000z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62iozd2connectionzd2errorz62zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4003z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4371z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4011z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4013z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4019z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4021z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4027z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4033z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62conditionz62zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4204z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4043z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4044z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4209z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4049z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4054z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4059z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4064z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4069z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4075z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list3877z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_za2nbzd2classesza2zd2zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4082z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4086z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4091z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4095z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list3899z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62processzd2exceptionzb0zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4277z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4279z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4282z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_za2classesza2z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4290z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4292z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4294z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62iozd2sigpipezd2errorz62zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62typezd2errorzb0zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol3900z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol3903z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol3905z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol3908z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62iozd2parsezd2errorz62zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol3910z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol3913z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol3934z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol3936z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol3937z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol3939z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4002z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4005z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol3941z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol3943z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol3945z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4010z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4018z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4026z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4032z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_za2classzd2keyza2zd2zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62securityzd2exceptionzb0zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62iozd2closedzd2errorz62zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62errorz62zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62warningz62zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4276z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62stackzd2overflowzd2errorz62zz__objectz00) );
ADD_ROOT( (void *)(&BGl_za2genericsza2z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4281z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62iozd2portzd2errorz62zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4288z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list4289z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62iozd2timeoutzd2errorz62zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62accesszd2controlzd2exceptionz62zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62iozd2errorzb0zz__objectz00) );
ADD_ROOT( (void *)(&BGl_objectz00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4100z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4105z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list3902z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list3907z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4110z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4115z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list3912z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_list3915z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4120z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4125z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4130z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4135z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4140z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4303z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4307z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4145z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4309z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4312z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4150z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4316z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4155z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4319z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_za2nbzd2genericszd2maxza2z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4322z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4160z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4325z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4165z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4328z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4331z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_z62iozd2readzd2errorz62zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4170z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4336z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4175z00zz__objectz00) );
ADD_ROOT( (void *)(&BGl_symbol4177z00zz__objectz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long BgL_checksumz00_6889, char * BgL_fromz00_6890)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__objectz00))
{ 
BGl_requirezd2initializa7ationz75zz__objectz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__objectz00(); 
BGl_cnstzd2initzd2zz__objectz00(); 
BGl_objectzd2initzd2zz__objectz00(); 
BGl_genericzd2initzd2zz__objectz00(); 
BGl_methodzd2initzd2zz__objectz00(); 
return 
BGl_toplevelzd2initzd2zz__objectz00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__objectz00()
{
{ /* Llib/object.scm 17 */
BGl_symbol3878z00zz__objectz00 = 
bstring_to_symbol(BGl_string3879z00zz__objectz00); 
BGl_symbol3880z00zz__objectz00 = 
bstring_to_symbol(BGl_string3881z00zz__objectz00); 
BGl_list3877z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol3880z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol3880z00zz__objectz00, BNIL))); 
BGl_symbol3900z00zz__objectz00 = 
bstring_to_symbol(BGl_string3901z00zz__objectz00); 
BGl_list3899z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol3900z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol3900z00zz__objectz00, BNIL))); 
BGl_symbol3903z00zz__objectz00 = 
bstring_to_symbol(BGl_string3904z00zz__objectz00); 
BGl_symbol3905z00zz__objectz00 = 
bstring_to_symbol(BGl_string3906z00zz__objectz00); 
BGl_list3902z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol3903z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol3903z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol3905z00zz__objectz00, BNIL)))); 
BGl_symbol3908z00zz__objectz00 = 
bstring_to_symbol(BGl_string3909z00zz__objectz00); 
BGl_symbol3910z00zz__objectz00 = 
bstring_to_symbol(BGl_string3911z00zz__objectz00); 
BGl_list3907z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol3908z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol3908z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol3910z00zz__objectz00, BNIL)))); 
BGl_symbol3913z00zz__objectz00 = 
bstring_to_symbol(BGl_string3914z00zz__objectz00); 
BGl_list3912z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol3913z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol3913z00zz__objectz00, BNIL))); 
BGl_list3915z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol3908z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol3908z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol3905z00zz__objectz00, BNIL)))); 
BGl_symbol3934z00zz__objectz00 = 
bstring_to_symbol(BGl_string3935z00zz__objectz00); 
BGl_symbol3936z00zz__objectz00 = 
bstring_to_symbol(BGl_string3842z00zz__objectz00); 
BGl_symbol3937z00zz__objectz00 = 
bstring_to_symbol(BGl_string3938z00zz__objectz00); 
BGl_symbol3939z00zz__objectz00 = 
bstring_to_symbol(BGl_string3940z00zz__objectz00); 
BGl_symbol3941z00zz__objectz00 = 
bstring_to_symbol(BGl_string3942z00zz__objectz00); 
BGl_symbol3943z00zz__objectz00 = 
bstring_to_symbol(BGl_string3944z00zz__objectz00); 
BGl_symbol3945z00zz__objectz00 = 
bstring_to_symbol(BGl_string3946z00zz__objectz00); 
BGl_symbol4000z00zz__objectz00 = 
bstring_to_symbol(BGl_string4001z00zz__objectz00); 
BGl_list3999z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4000z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4000z00zz__objectz00, BNIL))); 
BGl_symbol4003z00zz__objectz00 = 
bstring_to_symbol(BGl_string4004z00zz__objectz00); 
BGl_list4002z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4003z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4003z00zz__objectz00, BNIL))); 
BGl_list4005z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4000z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4000z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol3905z00zz__objectz00, BNIL)))); 
BGl_symbol4011z00zz__objectz00 = 
bstring_to_symbol(BGl_string4012z00zz__objectz00); 
BGl_symbol4013z00zz__objectz00 = 
bstring_to_symbol(BGl_string4014z00zz__objectz00); 
BGl_list4010z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4011z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4011z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4013z00zz__objectz00, BNIL)))); 
BGl_symbol4019z00zz__objectz00 = 
bstring_to_symbol(BGl_string4020z00zz__objectz00); 
BGl_symbol4021z00zz__objectz00 = 
bstring_to_symbol(BGl_string4022z00zz__objectz00); 
BGl_list4018z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4019z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4019z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4013z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4021z00zz__objectz00, BNIL))))); 
BGl_symbol4027z00zz__objectz00 = 
bstring_to_symbol(BGl_string4028z00zz__objectz00); 
BGl_list4026z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4027z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4027z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4013z00zz__objectz00, BNIL)))); 
BGl_symbol4033z00zz__objectz00 = 
bstring_to_symbol(BGl_string4034z00zz__objectz00); 
BGl_list4032z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4033z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4033z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4013z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4021z00zz__objectz00, BNIL))))); 
BGl_symbol4043z00zz__objectz00 = 
bstring_to_symbol(BGl_string3924z00zz__objectz00); 
BGl_symbol4044z00zz__objectz00 = 
bstring_to_symbol(BGl_string4045z00zz__objectz00); 
BGl_symbol4049z00zz__objectz00 = 
bstring_to_symbol(BGl_string4050z00zz__objectz00); 
BGl_symbol4054z00zz__objectz00 = 
bstring_to_symbol(BGl_string4055z00zz__objectz00); 
BGl_symbol4059z00zz__objectz00 = 
bstring_to_symbol(BGl_string4060z00zz__objectz00); 
BGl_symbol4064z00zz__objectz00 = 
bstring_to_symbol(BGl_string4065z00zz__objectz00); 
BGl_symbol4069z00zz__objectz00 = 
bstring_to_symbol(BGl_string4070z00zz__objectz00); 
BGl_symbol4075z00zz__objectz00 = 
bstring_to_symbol(BGl_string4076z00zz__objectz00); 
BGl_symbol4082z00zz__objectz00 = 
bstring_to_symbol(BGl_string4083z00zz__objectz00); 
BGl_symbol4086z00zz__objectz00 = 
bstring_to_symbol(BGl_string4087z00zz__objectz00); 
BGl_symbol4091z00zz__objectz00 = 
bstring_to_symbol(BGl_string4092z00zz__objectz00); 
BGl_symbol4095z00zz__objectz00 = 
bstring_to_symbol(BGl_string4096z00zz__objectz00); 
BGl_symbol4100z00zz__objectz00 = 
bstring_to_symbol(BGl_string4101z00zz__objectz00); 
BGl_symbol4105z00zz__objectz00 = 
bstring_to_symbol(BGl_string4106z00zz__objectz00); 
BGl_symbol4110z00zz__objectz00 = 
bstring_to_symbol(BGl_string4111z00zz__objectz00); 
BGl_symbol4115z00zz__objectz00 = 
bstring_to_symbol(BGl_string4116z00zz__objectz00); 
BGl_symbol4120z00zz__objectz00 = 
bstring_to_symbol(BGl_string4121z00zz__objectz00); 
BGl_symbol4125z00zz__objectz00 = 
bstring_to_symbol(BGl_string4126z00zz__objectz00); 
BGl_symbol4130z00zz__objectz00 = 
bstring_to_symbol(BGl_string4131z00zz__objectz00); 
BGl_symbol4135z00zz__objectz00 = 
bstring_to_symbol(BGl_string4136z00zz__objectz00); 
BGl_symbol4140z00zz__objectz00 = 
bstring_to_symbol(BGl_string4141z00zz__objectz00); 
BGl_symbol4145z00zz__objectz00 = 
bstring_to_symbol(BGl_string4146z00zz__objectz00); 
BGl_symbol4150z00zz__objectz00 = 
bstring_to_symbol(BGl_string4151z00zz__objectz00); 
BGl_symbol4155z00zz__objectz00 = 
bstring_to_symbol(BGl_string4156z00zz__objectz00); 
BGl_symbol4160z00zz__objectz00 = 
bstring_to_symbol(BGl_string4161z00zz__objectz00); 
BGl_symbol4165z00zz__objectz00 = 
bstring_to_symbol(BGl_string4166z00zz__objectz00); 
BGl_symbol4170z00zz__objectz00 = 
bstring_to_symbol(BGl_string4171z00zz__objectz00); 
BGl_symbol4175z00zz__objectz00 = 
bstring_to_symbol(BGl_string4176z00zz__objectz00); 
BGl_symbol4177z00zz__objectz00 = 
bstring_to_symbol(BGl_string4178z00zz__objectz00); 
BGl_symbol4182z00zz__objectz00 = 
bstring_to_symbol(BGl_string4183z00zz__objectz00); 
BGl_symbol4190z00zz__objectz00 = 
bstring_to_symbol(BGl_string4191z00zz__objectz00); 
BGl_symbol4195z00zz__objectz00 = 
bstring_to_symbol(BGl_string4196z00zz__objectz00); 
BGl_symbol4199z00zz__objectz00 = 
bstring_to_symbol(BGl_string4200z00zz__objectz00); 
BGl_symbol4204z00zz__objectz00 = 
bstring_to_symbol(BGl_string4205z00zz__objectz00); 
BGl_symbol4209z00zz__objectz00 = 
bstring_to_symbol(BGl_string4210z00zz__objectz00); 
BGl_symbol4277z00zz__objectz00 = 
bstring_to_symbol(BGl_string4278z00zz__objectz00); 
BGl_symbol4279z00zz__objectz00 = 
bstring_to_symbol(BGl_string4280z00zz__objectz00); 
BGl_list4276z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4277z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4277z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4279z00zz__objectz00, BNIL)))); 
BGl_symbol4282z00zz__objectz00 = 
bstring_to_symbol(BGl_string4283z00zz__objectz00); 
BGl_list4281z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4277z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4277z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4282z00zz__objectz00, BNIL)))); 
BGl_list4288z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4277z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4277z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4013z00zz__objectz00, BNIL)))); 
BGl_symbol4290z00zz__objectz00 = 
bstring_to_symbol(BGl_string4291z00zz__objectz00); 
BGl_symbol4292z00zz__objectz00 = 
bstring_to_symbol(BGl_string4293z00zz__objectz00); 
BGl_symbol4294z00zz__objectz00 = 
bstring_to_symbol(BGl_string4295z00zz__objectz00); 
BGl_list4289z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4290z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4290z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4292z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4294z00zz__objectz00, BNIL))))); 
BGl_symbol4303z00zz__objectz00 = 
bstring_to_symbol(BGl_string4304z00zz__objectz00); 
BGl_symbol4307z00zz__objectz00 = 
bstring_to_symbol(BGl_string4308z00zz__objectz00); 
BGl_symbol4309z00zz__objectz00 = 
bstring_to_symbol(BGl_string4310z00zz__objectz00); 
BGl_symbol4312z00zz__objectz00 = 
bstring_to_symbol(BGl_string4313z00zz__objectz00); 
BGl_symbol4316z00zz__objectz00 = 
bstring_to_symbol(BGl_string4317z00zz__objectz00); 
BGl_symbol4319z00zz__objectz00 = 
bstring_to_symbol(BGl_string4320z00zz__objectz00); 
BGl_symbol4322z00zz__objectz00 = 
bstring_to_symbol(BGl_string4323z00zz__objectz00); 
BGl_list4321z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol4322z00zz__objectz00, 
MAKE_YOUNG_PAIR(BNIL, BNIL)); 
BGl_list4318z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol4319z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4294z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_list4321z00zz__objectz00, BNIL))); 
BGl_list4315z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol4316z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_list4318z00zz__objectz00, BNIL)); 
BGl_list4314z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_list4315z00zz__objectz00, BNIL); 
BGl_symbol4325z00zz__objectz00 = 
bstring_to_symbol(BGl_string4326z00zz__objectz00); 
BGl_list4324z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol4325z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4013z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4316z00zz__objectz00, BNIL))); 
BGl_list4311z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol4312z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_list4314z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_list4324z00zz__objectz00, BNIL))); 
BGl_list4306z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol4307z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4309z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_list4311z00zz__objectz00, BNIL))); 
BGl_symbol4328z00zz__objectz00 = 
bstring_to_symbol(BGl_string4329z00zz__objectz00); 
BGl_symbol4331z00zz__objectz00 = 
bstring_to_symbol(BGl_string4332z00zz__objectz00); 
BGl_symbol4336z00zz__objectz00 = 
bstring_to_symbol(BGl_string4337z00zz__objectz00); 
BGl_list4335z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol4336z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_list4318z00zz__objectz00, BNIL)); 
BGl_list4334z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_list4335z00zz__objectz00, BNIL); 
BGl_list4338z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol4325z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4013z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4336z00zz__objectz00, BNIL))); 
BGl_list4333z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol4312z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_list4334z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_list4338z00zz__objectz00, BNIL))); 
BGl_list4330z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol4307z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4331z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_list4333z00zz__objectz00, BNIL))); 
BGl_symbol4343z00zz__objectz00 = 
bstring_to_symbol(BGl_string4344z00zz__objectz00); 
BGl_list4342z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4343z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4343z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4043z00zz__objectz00, BNIL)))); 
BGl_symbol4348z00zz__objectz00 = 
bstring_to_symbol(BGl_string4349z00zz__objectz00); 
BGl_list4347z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4348z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4348z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4013z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4294z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4290z00zz__objectz00, BNIL)))))); 
BGl_symbol4353z00zz__objectz00 = 
bstring_to_symbol(BGl_string4354z00zz__objectz00); 
BGl_list4352z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4353z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4353z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4279z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4282z00zz__objectz00, BNIL))))); 
BGl_symbol4358z00zz__objectz00 = 
bstring_to_symbol(BGl_string4359z00zz__objectz00); 
BGl_symbol4360z00zz__objectz00 = 
bstring_to_symbol(BGl_string4361z00zz__objectz00); 
BGl_list4357z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4358z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4358z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4360z00zz__objectz00, BNIL)))); 
BGl_symbol4364z00zz__objectz00 = 
bstring_to_symbol(BGl_string4365z00zz__objectz00); 
BGl_list4363z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4364z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4364z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4360z00zz__objectz00, BNIL)))); 
BGl_symbol4372z00zz__objectz00 = 
bstring_to_symbol(BGl_string4373z00zz__objectz00); 
return ( 
BGl_list4371z00zz__objectz00 = 
MAKE_YOUNG_PAIR(BGl_symbol3878z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4372z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4372z00zz__objectz00, 
MAKE_YOUNG_PAIR(BGl_symbol4360z00zz__objectz00, BNIL)))), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__objectz00()
{
{ /* Llib/object.scm 17 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__objectz00()
{
{ /* Llib/object.scm 17 */BUNSPEC; BUNSPEC; BUNSPEC; BUNSPEC; BUNSPEC; BUNSPEC; BUNSPEC; 
return BUNSPEC;} 

}



/* bigloo-generic-bucket-pow */
BGL_EXPORTED_DEF int BGl_bigloozd2genericzd2bucketzd2powzd2zz__objectz00()
{
{ /* Llib/object.scm 393 */
return 
(int)(((long)4));} 

}



/* &bigloo-generic-bucket-pow */
obj_t BGl_z62bigloozd2genericzd2bucketzd2powzb0zz__objectz00(obj_t BgL_envz00_4900)
{
{ /* Llib/object.scm 393 */
return 
BINT(
BGl_bigloozd2genericzd2bucketzd2powzd2zz__objectz00());} 

}



/* bigloo-generic-bucket-size */
BGL_EXPORTED_DEF int BGl_bigloozd2genericzd2bucketzd2siza7ez75zz__objectz00()
{
{ /* Llib/object.scm 395 */
return 
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4))))));} 

}



/* &bigloo-generic-bucket-size */
obj_t BGl_z62bigloozd2genericzd2bucketzd2siza7ez17zz__objectz00(obj_t BgL_envz00_4901)
{
{ /* Llib/object.scm 395 */
return 
BINT(
BGl_bigloozd2genericzd2bucketzd2siza7ez75zz__objectz00());} 

}



/* bigloo-generic-bucket-mask */
BGL_EXPORTED_DEF int BGl_bigloozd2genericzd2bucketzd2maskzd2zz__objectz00()
{
{ /* Llib/object.scm 397 */
return 
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1)));} 

}



/* &bigloo-generic-bucket-mask */
obj_t BGl_z62bigloozd2genericzd2bucketzd2maskzb0zz__objectz00(obj_t BgL_envz00_4902)
{
{ /* Llib/object.scm 397 */
return 
BINT(
BGl_bigloozd2genericzd2bucketzd2maskzd2zz__objectz00());} 

}



/* bigloo-types-number */
BGL_EXPORTED_DEF long bgl_types_number()
{
{ /* Llib/object.scm 407 */
if(
INTEGERP(BGl_za2nbzd2classesza2zd2zz__objectz00))
{ /* Llib/object.scm 408 */
return 
(OBJECT_TYPE+
(long)CINT(BGl_za2nbzd2classesza2zd2zz__objectz00));}  else 
{ /* Llib/object.scm 408 */
return OBJECT_TYPE;} } 

}



/* &bigloo-types-number */
obj_t BGl_z62bigloozd2typeszd2numberz62zz__objectz00(obj_t BgL_envz00_4903)
{
{ /* Llib/object.scm 407 */
return 
BINT(
bgl_types_number());} 

}



/* class? */
BGL_EXPORTED_DEF bool_t BGl_classzf3zf3zz__objectz00(obj_t BgL_objz00_19)
{
{ /* Llib/object.scm 433 */
return 
BGL_CLASSP(BgL_objz00_19);} 

}



/* &class? */
obj_t BGl_z62classzf3z91zz__objectz00(obj_t BgL_envz00_4904, obj_t BgL_objz00_4905)
{
{ /* Llib/object.scm 433 */
return 
BBOOL(
BGl_classzf3zf3zz__objectz00(BgL_objz00_4905));} 

}



/* class-exists */
BGL_EXPORTED_DEF obj_t BGl_classzd2existszd2zz__objectz00(obj_t BgL_cnamez00_20)
{
{ /* Llib/object.scm 439 */
{ 
long BgL_iz00_1229;
BgL_iz00_1229 = ((long)0); 
BgL_zc3z04anonymousza31482ze3z87_1230:
{ /* Llib/object.scm 441 */
bool_t BgL_test4878z00_7134;
{ /* Llib/object.scm 441 */
long BgL_n2z00_2908;
{ /* Llib/object.scm 441 */
obj_t BgL_tmpz00_7135;
{ /* Llib/object.scm 441 */
obj_t BgL_aux3068z00_5568;
BgL_aux3068z00_5568 = BGl_za2nbzd2classesza2zd2zz__objectz00; 
if(
INTEGERP(BgL_aux3068z00_5568))
{ /* Llib/object.scm 441 */
BgL_tmpz00_7135 = BgL_aux3068z00_5568
; }  else 
{ 
obj_t BgL_auxz00_7138;
BgL_auxz00_7138 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)18384)), BGl_string3839z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3068z00_5568); 
FAILURE(BgL_auxz00_7138,BFALSE,BFALSE);} } 
BgL_n2z00_2908 = 
(long)CINT(BgL_tmpz00_7135); } 
BgL_test4878z00_7134 = 
(BgL_iz00_1229==BgL_n2z00_2908); } 
if(BgL_test4878z00_7134)
{ /* Llib/object.scm 441 */
return BFALSE;}  else 
{ /* Llib/object.scm 442 */
obj_t BgL_claz00_1232;
{ /* Llib/object.scm 442 */
obj_t BgL_vectorz00_2910;
{ /* Llib/object.scm 442 */
obj_t BgL_aux3070z00_5570;
BgL_aux3070z00_5570 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3070z00_5570))
{ /* Llib/object.scm 442 */
BgL_vectorz00_2910 = BgL_aux3070z00_5570; }  else 
{ 
obj_t BgL_auxz00_7146;
BgL_auxz00_7146 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)18426)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3070z00_5570); 
FAILURE(BgL_auxz00_7146,BFALSE,BFALSE);} } 
BgL_claz00_1232 = 
VECTOR_REF(BgL_vectorz00_2910,BgL_iz00_1229); } 
{ /* Llib/object.scm 443 */
bool_t BgL_test4881z00_7151;
{ /* Llib/object.scm 443 */
obj_t BgL_arg1487z00_1236;
{ /* Llib/object.scm 443 */
obj_t BgL_res2544z00_2913;
{ /* Llib/object.scm 443 */
obj_t BgL_classz00_2912;
if(
BGL_CLASSP(BgL_claz00_1232))
{ /* Llib/object.scm 443 */
BgL_classz00_2912 = BgL_claz00_1232; }  else 
{ 
obj_t BgL_auxz00_7154;
BgL_auxz00_7154 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)18467)), BGl_string3839z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_claz00_1232); 
FAILURE(BgL_auxz00_7154,BFALSE,BFALSE);} 
BgL_res2544z00_2913 = 
BGL_CLASS_NAME(BgL_classz00_2912); } 
BgL_arg1487z00_1236 = BgL_res2544z00_2913; } 
BgL_test4881z00_7151 = 
(BgL_arg1487z00_1236==BgL_cnamez00_20); } 
if(BgL_test4881z00_7151)
{ /* Llib/object.scm 443 */
return BgL_claz00_1232;}  else 
{ 
long BgL_iz00_7160;
BgL_iz00_7160 = 
(BgL_iz00_1229+((long)1)); 
BgL_iz00_1229 = BgL_iz00_7160; 
goto BgL_zc3z04anonymousza31482ze3z87_1230;} } } } } } 

}



/* &class-exists */
obj_t BGl_z62classzd2existszb0zz__objectz00(obj_t BgL_envz00_4906, obj_t BgL_cnamez00_4907)
{
{ /* Llib/object.scm 439 */
{ /* Llib/object.scm 441 */
obj_t BgL_auxz00_7162;
if(
SYMBOLP(BgL_cnamez00_4907))
{ /* Llib/object.scm 441 */
BgL_auxz00_7162 = BgL_cnamez00_4907
; }  else 
{ 
obj_t BgL_auxz00_7165;
BgL_auxz00_7165 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)18369)), BGl_string3843z00zz__objectz00, BGl_string3844z00zz__objectz00, BgL_cnamez00_4907); 
FAILURE(BgL_auxz00_7165,BFALSE,BFALSE);} 
return 
BGl_classzd2existszd2zz__objectz00(BgL_auxz00_7162);} } 

}



/* find-class */
BGL_EXPORTED_DEF obj_t BGl_findzd2classzd2zz__objectz00(obj_t BgL_cnamez00_21)
{
{ /* Llib/object.scm 450 */
{ /* Llib/object.scm 451 */
obj_t BgL__ortest_1215z00_2916;
BgL__ortest_1215z00_2916 = 
BGl_classzd2existszd2zz__objectz00(BgL_cnamez00_21); 
if(
CBOOL(BgL__ortest_1215z00_2916))
{ /* Llib/object.scm 451 */
if(
BGL_CLASSP(BgL__ortest_1215z00_2916))
{ /* Llib/object.scm 451 */
return BgL__ortest_1215z00_2916;}  else 
{ 
obj_t BgL_auxz00_7175;
BgL_auxz00_7175 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)18766)), BGl_string3845z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL__ortest_1215z00_2916); 
FAILURE(BgL_auxz00_7175,BFALSE,BFALSE);} }  else 
{ /* Llib/object.scm 452 */
obj_t BgL_aux3078z00_5578;
BgL_aux3078z00_5578 = 
BGl_errorz00zz__errorz00(BGl_string3845z00zz__objectz00, BGl_string3846z00zz__objectz00, BgL_cnamez00_21); 
if(
BGL_CLASSP(BgL_aux3078z00_5578))
{ /* Llib/object.scm 452 */
return BgL_aux3078z00_5578;}  else 
{ 
obj_t BgL_auxz00_7182;
BgL_auxz00_7182 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)18795)), BGl_string3845z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_aux3078z00_5578); 
FAILURE(BgL_auxz00_7182,BFALSE,BFALSE);} } } } 

}



/* &find-class */
obj_t BGl_z62findzd2classzb0zz__objectz00(obj_t BgL_envz00_4908, obj_t BgL_cnamez00_4909)
{
{ /* Llib/object.scm 450 */
{ /* Llib/object.scm 451 */
obj_t BgL_auxz00_7186;
if(
SYMBOLP(BgL_cnamez00_4909))
{ /* Llib/object.scm 451 */
BgL_auxz00_7186 = BgL_cnamez00_4909
; }  else 
{ 
obj_t BgL_auxz00_7189;
BgL_auxz00_7189 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)18766)), BGl_string3847z00zz__objectz00, BGl_string3844z00zz__objectz00, BgL_cnamez00_4909); 
FAILURE(BgL_auxz00_7189,BFALSE,BFALSE);} 
return 
BGl_findzd2classzd2zz__objectz00(BgL_auxz00_7186);} } 

}



/* find-class-by-hash */
BGL_EXPORTED_DEF obj_t BGl_findzd2classzd2byzd2hashzd2zz__objectz00(int BgL_hashz00_22)
{
{ /* Llib/object.scm 457 */
{ 
long BgL_iz00_1240;
BgL_iz00_1240 = ((long)0); 
BgL_zc3z04anonymousza31488ze3z87_1241:
{ /* Llib/object.scm 459 */
bool_t BgL_test4888z00_7194;
{ /* Llib/object.scm 459 */
long BgL_n2z00_2918;
{ /* Llib/object.scm 459 */
obj_t BgL_tmpz00_7195;
{ /* Llib/object.scm 459 */
obj_t BgL_aux3082z00_5582;
BgL_aux3082z00_5582 = BGl_za2nbzd2classesza2zd2zz__objectz00; 
if(
INTEGERP(BgL_aux3082z00_5582))
{ /* Llib/object.scm 459 */
BgL_tmpz00_7195 = BgL_aux3082z00_5582
; }  else 
{ 
obj_t BgL_auxz00_7198;
BgL_auxz00_7198 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)19143)), BGl_string3839z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3082z00_5582); 
FAILURE(BgL_auxz00_7198,BFALSE,BFALSE);} } 
BgL_n2z00_2918 = 
(long)CINT(BgL_tmpz00_7195); } 
BgL_test4888z00_7194 = 
(BgL_iz00_1240==BgL_n2z00_2918); } 
if(BgL_test4888z00_7194)
{ /* Llib/object.scm 459 */
return BFALSE;}  else 
{ /* Llib/object.scm 460 */
obj_t BgL_claz00_1243;
{ /* Llib/object.scm 460 */
obj_t BgL_vectorz00_2920;
{ /* Llib/object.scm 460 */
obj_t BgL_aux3084z00_5584;
BgL_aux3084z00_5584 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3084z00_5584))
{ /* Llib/object.scm 460 */
BgL_vectorz00_2920 = BgL_aux3084z00_5584; }  else 
{ 
obj_t BgL_auxz00_7206;
BgL_auxz00_7206 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)19185)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3084z00_5584); 
FAILURE(BgL_auxz00_7206,BFALSE,BFALSE);} } 
BgL_claz00_1243 = 
VECTOR_REF(BgL_vectorz00_2920,BgL_iz00_1240); } 
{ /* Llib/object.scm 461 */
bool_t BgL_test4891z00_7211;
{ /* Llib/object.scm 461 */
long BgL_arg1494z00_1247;
{ /* Llib/object.scm 461 */
long BgL_res2547z00_2923;
{ /* Llib/object.scm 461 */
obj_t BgL_classz00_2922;
if(
BGL_CLASSP(BgL_claz00_1243))
{ /* Llib/object.scm 461 */
BgL_classz00_2922 = BgL_claz00_1243; }  else 
{ 
obj_t BgL_auxz00_7214;
BgL_auxz00_7214 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)19226)), BGl_string3839z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_claz00_1243); 
FAILURE(BgL_auxz00_7214,BFALSE,BFALSE);} 
BgL_res2547z00_2923 = 
BGL_CLASS_HASH(BgL_classz00_2922); } 
BgL_arg1494z00_1247 = BgL_res2547z00_2923; } 
BgL_test4891z00_7211 = 
(
BINT(BgL_arg1494z00_1247)==
BINT(BgL_hashz00_22)); } 
if(BgL_test4891z00_7211)
{ /* Llib/object.scm 461 */
return BgL_claz00_1243;}  else 
{ 
long BgL_iz00_7222;
BgL_iz00_7222 = 
(BgL_iz00_1240+((long)1)); 
BgL_iz00_1240 = BgL_iz00_7222; 
goto BgL_zc3z04anonymousza31488ze3z87_1241;} } } } } } 

}



/* &find-class-by-hash */
obj_t BGl_z62findzd2classzd2byzd2hashzb0zz__objectz00(obj_t BgL_envz00_4910, obj_t BgL_hashz00_4911)
{
{ /* Llib/object.scm 457 */
{ /* Llib/object.scm 459 */
int BgL_auxz00_7224;
{ /* Llib/object.scm 459 */
obj_t BgL_tmpz00_7225;
if(
INTEGERP(BgL_hashz00_4911))
{ /* Llib/object.scm 459 */
BgL_tmpz00_7225 = BgL_hashz00_4911
; }  else 
{ 
obj_t BgL_auxz00_7228;
BgL_auxz00_7228 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)19128)), BGl_string3848z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_hashz00_4911); 
FAILURE(BgL_auxz00_7228,BFALSE,BFALSE);} 
BgL_auxz00_7224 = 
CINT(BgL_tmpz00_7225); } 
return 
BGl_findzd2classzd2byzd2hashzd2zz__objectz00(BgL_auxz00_7224);} } 

}



/* eval-class? */
BGL_EXPORTED_DEF bool_t BGl_evalzd2classzf3z21zz__objectz00(obj_t BgL_objz00_23)
{
{ /* Llib/object.scm 468 */
{ /* Llib/object.scm 469 */
bool_t BgL_test4894z00_7234;
{ /* Llib/object.scm 469 */
bool_t BgL_res2549z00_2927;
BgL_res2549z00_2927 = 
BGL_CLASSP(BgL_objz00_23); 
BgL_test4894z00_7234 = BgL_res2549z00_2927; } 
if(BgL_test4894z00_7234)
{ /* Llib/object.scm 469 */
obj_t BgL_classz00_2928;
if(
BGL_CLASSP(BgL_objz00_23))
{ /* Llib/object.scm 469 */
BgL_classz00_2928 = BgL_objz00_23; }  else 
{ 
obj_t BgL_auxz00_7238;
BgL_auxz00_7238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)19551)), BGl_string3849z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_objz00_23); 
FAILURE(BgL_auxz00_7238,BFALSE,BFALSE);} 
return 
CBOOL(
BGL_CLASS_EVDATA(BgL_classz00_2928));}  else 
{ /* Llib/object.scm 469 */
return ((bool_t)0);} } } 

}



/* &eval-class? */
obj_t BGl_z62evalzd2classzf3z43zz__objectz00(obj_t BgL_envz00_4912, obj_t BgL_objz00_4913)
{
{ /* Llib/object.scm 468 */
return 
BBOOL(
BGl_evalzd2classzf3z21zz__objectz00(BgL_objz00_4913));} 

}



/* class-name */
BGL_EXPORTED_DEF obj_t BGl_classzd2namezd2zz__objectz00(obj_t BgL_classz00_24)
{
{ /* Llib/object.scm 474 */
return 
BGL_CLASS_NAME(BgL_classz00_24);} 

}



/* &class-name */
obj_t BGl_z62classzd2namezb0zz__objectz00(obj_t BgL_envz00_4914, obj_t BgL_classz00_4915)
{
{ /* Llib/object.scm 474 */
{ /* Llib/object.scm 475 */
obj_t BgL_auxz00_7247;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4915))
{ /* Llib/object.scm 475 */
BgL_auxz00_7247 = BgL_classz00_4915
; }  else 
{ 
obj_t BgL_auxz00_7250;
BgL_auxz00_7250 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)19811)), BGl_string3850z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4915); 
FAILURE(BgL_auxz00_7250,BFALSE,BFALSE);} 
return 
BGl_classzd2namezd2zz__objectz00(BgL_auxz00_7247);} } 

}



/* class-module */
BGL_EXPORTED_DEF obj_t BGl_classzd2modulezd2zz__objectz00(obj_t BgL_classz00_25)
{
{ /* Llib/object.scm 480 */
return 
BGL_CLASS_MODULE(BgL_classz00_25);} 

}



/* &class-module */
obj_t BGl_z62classzd2modulezb0zz__objectz00(obj_t BgL_envz00_4916, obj_t BgL_classz00_4917)
{
{ /* Llib/object.scm 480 */
{ /* Llib/object.scm 481 */
obj_t BgL_auxz00_7256;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4917))
{ /* Llib/object.scm 481 */
BgL_auxz00_7256 = BgL_classz00_4917
; }  else 
{ 
obj_t BgL_auxz00_7259;
BgL_auxz00_7259 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)20087)), BGl_string3851z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4917); 
FAILURE(BgL_auxz00_7259,BFALSE,BFALSE);} 
return 
BGl_classzd2modulezd2zz__objectz00(BgL_auxz00_7256);} } 

}



/* class-num */
BGL_EXPORTED_DEF long BGl_classzd2numzd2zz__objectz00(obj_t BgL_classz00_26)
{
{ /* Llib/object.scm 486 */
return 
BGL_CLASS_INDEX(BgL_classz00_26);} 

}



/* &class-num */
obj_t BGl_z62classzd2numzb0zz__objectz00(obj_t BgL_envz00_4918, obj_t BgL_classz00_4919)
{
{ /* Llib/object.scm 486 */
{ /* Llib/object.scm 487 */
long BgL_tmpz00_7265;
{ /* Llib/object.scm 487 */
obj_t BgL_auxz00_7266;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4919))
{ /* Llib/object.scm 487 */
BgL_auxz00_7266 = BgL_classz00_4919
; }  else 
{ 
obj_t BgL_auxz00_7269;
BgL_auxz00_7269 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)20369)), BGl_string3852z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4919); 
FAILURE(BgL_auxz00_7269,BFALSE,BFALSE);} 
BgL_tmpz00_7265 = 
BGl_classzd2numzd2zz__objectz00(BgL_auxz00_7266); } 
return 
BINT(BgL_tmpz00_7265);} } 

}



/* class-virtual */
BGL_EXPORTED_DEF obj_t BGl_classzd2virtualzd2zz__objectz00(obj_t BgL_classz00_27)
{
{ /* Llib/object.scm 492 */
return 
BGL_CLASS_VIRTUAL_FIELDS(BgL_classz00_27);} 

}



/* &class-virtual */
obj_t BGl_z62classzd2virtualzb0zz__objectz00(obj_t BgL_envz00_4920, obj_t BgL_classz00_4921)
{
{ /* Llib/object.scm 492 */
{ /* Llib/object.scm 493 */
obj_t BgL_auxz00_7276;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4921))
{ /* Llib/object.scm 493 */
BgL_auxz00_7276 = BgL_classz00_4921
; }  else 
{ 
obj_t BgL_auxz00_7279;
BgL_auxz00_7279 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)20654)), BGl_string3853z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4921); 
FAILURE(BgL_auxz00_7279,BFALSE,BFALSE);} 
return 
BGl_classzd2virtualzd2zz__objectz00(BgL_auxz00_7276);} } 

}



/* class-evdata */
BGL_EXPORTED_DEF obj_t BGl_classzd2evdatazd2zz__objectz00(obj_t BgL_classz00_28)
{
{ /* Llib/object.scm 498 */
return 
BGL_CLASS_EVDATA(BgL_classz00_28);} 

}



/* &class-evdata */
obj_t BGl_z62classzd2evdatazb0zz__objectz00(obj_t BgL_envz00_4922, obj_t BgL_classz00_4923)
{
{ /* Llib/object.scm 498 */
{ /* Llib/object.scm 499 */
obj_t BgL_auxz00_7285;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4923))
{ /* Llib/object.scm 499 */
BgL_auxz00_7285 = BgL_classz00_4923
; }  else 
{ 
obj_t BgL_auxz00_7288;
BgL_auxz00_7288 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)20940)), BGl_string3854z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4923); 
FAILURE(BgL_auxz00_7288,BFALSE,BFALSE);} 
return 
BGl_classzd2evdatazd2zz__objectz00(BgL_auxz00_7285);} } 

}



/* class-evdata-set! */
BGL_EXPORTED_DEF obj_t BGl_classzd2evdatazd2setz12z12zz__objectz00(obj_t BgL_classz00_29, obj_t BgL_dataz00_30)
{
{ /* Llib/object.scm 504 */
return 
BGL_CLASS_EVDATA_SET(BgL_classz00_29, BgL_dataz00_30);} 

}



/* &class-evdata-set! */
obj_t BGl_z62classzd2evdatazd2setz12z70zz__objectz00(obj_t BgL_envz00_4924, obj_t BgL_classz00_4925, obj_t BgL_dataz00_4926)
{
{ /* Llib/object.scm 504 */
{ /* Llib/object.scm 505 */
obj_t BgL_auxz00_7294;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4925))
{ /* Llib/object.scm 505 */
BgL_auxz00_7294 = BgL_classz00_4925
; }  else 
{ 
obj_t BgL_auxz00_7297;
BgL_auxz00_7297 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)21228)), BGl_string3855z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4925); 
FAILURE(BgL_auxz00_7297,BFALSE,BFALSE);} 
return 
BGl_classzd2evdatazd2setz12z12zz__objectz00(BgL_auxz00_7294, BgL_dataz00_4926);} } 

}



/* class-evfields-set! */
BGL_EXPORTED_DEF obj_t BGl_classzd2evfieldszd2setz12z12zz__objectz00(obj_t BgL_classz00_31, obj_t BgL_fieldsz00_32)
{
{ /* Llib/object.scm 510 */
{ /* Llib/object.scm 512 */
bool_t BgL_test4902z00_7302;
{ /* Llib/object.scm 512 */
bool_t BgL_res2551z00_2932;
{ /* Llib/object.scm 469 */
bool_t BgL_test4903z00_7303;
{ /* Llib/object.scm 469 */
bool_t BgL_res2550z00_2930;
BgL_res2550z00_2930 = 
BGL_CLASSP(BgL_classz00_31); 
BgL_test4903z00_7303 = BgL_res2550z00_2930; } 
if(BgL_test4903z00_7303)
{ /* Llib/object.scm 469 */
BgL_res2551z00_2932 = 
CBOOL(
BGL_CLASS_EVDATA(BgL_classz00_31)); }  else 
{ /* Llib/object.scm 469 */
BgL_res2551z00_2932 = ((bool_t)0); } } 
BgL_test4902z00_7302 = BgL_res2551z00_2932; } 
if(BgL_test4902z00_7302)
{ /* Llib/object.scm 514 */
bool_t BgL_test4904z00_7307;
{ /* Llib/object.scm 514 */
long BgL_arg1505z00_1258;
{ /* Llib/object.scm 514 */
obj_t BgL_arg1506z00_1259;
{ /* Llib/object.scm 514 */
obj_t BgL_res2552z00_2934;
BgL_res2552z00_2934 = 
BGL_CLASS_DIRECT_FIELDS(BgL_classz00_31); 
BgL_arg1506z00_1259 = BgL_res2552z00_2934; } 
BgL_arg1505z00_1258 = 
VECTOR_LENGTH(BgL_arg1506z00_1259); } 
BgL_test4904z00_7307 = 
(BgL_arg1505z00_1258>((long)0)); } 
if(BgL_test4904z00_7307)
{ /* Llib/object.scm 514 */
return 
BGl_errorz00zz__errorz00(BGl_string3856z00zz__objectz00, BGl_string3857z00zz__objectz00, BgL_classz00_31);}  else 
{ /* Llib/object.scm 517 */
obj_t BgL_sfieldsz00_1254;
{ /* Llib/object.scm 517 */
obj_t BgL_arg1502z00_1257;
BgL_arg1502z00_1257 = 
BGL_CLASS_SUPER(BgL_classz00_31); 
{ /* Llib/object.scm 517 */
obj_t BgL_res2554z00_2940;
{ /* Llib/object.scm 517 */
obj_t BgL_classz00_2939;
if(
BGL_CLASSP(BgL_arg1502z00_1257))
{ /* Llib/object.scm 517 */
BgL_classz00_2939 = BgL_arg1502z00_1257; }  else 
{ 
obj_t BgL_auxz00_7315;
BgL_auxz00_7315 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)21820)), BGl_string3856z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_arg1502z00_1257); 
FAILURE(BgL_auxz00_7315,BFALSE,BFALSE);} 
BgL_res2554z00_2940 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_2939); } 
BgL_sfieldsz00_1254 = BgL_res2554z00_2940; } } 
BGL_CLASS_DIRECT_FIELDS_SET(BgL_classz00_31, BgL_fieldsz00_32); 
{ /* Llib/object.scm 519 */
obj_t BgL_arg1500z00_1255;
{ /* Llib/object.scm 519 */
obj_t BgL_list1501z00_1256;
BgL_list1501z00_1256 = 
MAKE_YOUNG_PAIR(BgL_fieldsz00_32, BNIL); 
BgL_arg1500z00_1255 = 
BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00(BgL_sfieldsz00_1254, BgL_list1501z00_1256); } 
return 
BGL_CLASS_ALL_FIELDS_SET(BgL_classz00_31, BgL_arg1500z00_1255);} } }  else 
{ /* Llib/object.scm 512 */
return 
BGl_errorz00zz__errorz00(BGl_string3856z00zz__objectz00, BGl_string3858z00zz__objectz00, BgL_classz00_31);} } } 

}



/* &class-evfields-set! */
obj_t BGl_z62classzd2evfieldszd2setz12z70zz__objectz00(obj_t BgL_envz00_4927, obj_t BgL_classz00_4928, obj_t BgL_fieldsz00_4929)
{
{ /* Llib/object.scm 510 */
{ /* Llib/object.scm 512 */
obj_t BgL_auxz00_7332;obj_t BgL_auxz00_7325;
if(
VECTORP(BgL_fieldsz00_4929))
{ /* Llib/object.scm 512 */
BgL_auxz00_7332 = BgL_fieldsz00_4929
; }  else 
{ 
obj_t BgL_auxz00_7335;
BgL_auxz00_7335 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)21542)), BGl_string3859z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_fieldsz00_4929); 
FAILURE(BgL_auxz00_7335,BFALSE,BFALSE);} 
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4928))
{ /* Llib/object.scm 512 */
BgL_auxz00_7325 = BgL_classz00_4928
; }  else 
{ 
obj_t BgL_auxz00_7328;
BgL_auxz00_7328 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)21542)), BGl_string3859z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4928); 
FAILURE(BgL_auxz00_7328,BFALSE,BFALSE);} 
return 
BGl_classzd2evfieldszd2setz12z12zz__objectz00(BgL_auxz00_7325, BgL_auxz00_7332);} } 

}



/* class-fields */
BGL_EXPORTED_DEF obj_t BGl_classzd2fieldszd2zz__objectz00(obj_t BgL_classz00_33)
{
{ /* Llib/object.scm 524 */
return 
BGL_CLASS_DIRECT_FIELDS(BgL_classz00_33);} 

}



/* &class-fields */
obj_t BGl_z62classzd2fieldszb0zz__objectz00(obj_t BgL_envz00_4930, obj_t BgL_classz00_4931)
{
{ /* Llib/object.scm 524 */
{ /* Llib/object.scm 525 */
obj_t BgL_auxz00_7341;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4931))
{ /* Llib/object.scm 525 */
BgL_auxz00_7341 = BgL_classz00_4931
; }  else 
{ 
obj_t BgL_auxz00_7344;
BgL_auxz00_7344 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)22193)), BGl_string3860z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4931); 
FAILURE(BgL_auxz00_7344,BFALSE,BFALSE);} 
return 
BGl_classzd2fieldszd2zz__objectz00(BgL_auxz00_7341);} } 

}



/* class-all-fields */
BGL_EXPORTED_DEF obj_t BGl_classzd2allzd2fieldsz00zz__objectz00(obj_t BgL_classz00_34)
{
{ /* Llib/object.scm 530 */
return 
BGL_CLASS_ALL_FIELDS(BgL_classz00_34);} 

}



/* &class-all-fields */
obj_t BGl_z62classzd2allzd2fieldsz62zz__objectz00(obj_t BgL_envz00_4932, obj_t BgL_classz00_4933)
{
{ /* Llib/object.scm 530 */
{ /* Llib/object.scm 531 */
obj_t BgL_auxz00_7350;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4933))
{ /* Llib/object.scm 531 */
BgL_auxz00_7350 = BgL_classz00_4933
; }  else 
{ 
obj_t BgL_auxz00_7353;
BgL_auxz00_7353 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)22489)), BGl_string3861z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4933); 
FAILURE(BgL_auxz00_7353,BFALSE,BFALSE);} 
return 
BGl_classzd2allzd2fieldsz00zz__objectz00(BgL_auxz00_7350);} } 

}



/* find-class-field */
BGL_EXPORTED_DEF obj_t BGl_findzd2classzd2fieldz00zz__objectz00(obj_t BgL_classz00_35, obj_t BgL_namez00_36)
{
{ /* Llib/object.scm 536 */
{ /* Llib/object.scm 537 */
obj_t BgL_fieldsz00_1260;
{ /* Llib/object.scm 537 */
obj_t BgL_res2555z00_2942;
BgL_res2555z00_2942 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_35); 
BgL_fieldsz00_1260 = BgL_res2555z00_2942; } 
{ /* Llib/object.scm 538 */
long BgL_g1217z00_1261;
BgL_g1217z00_1261 = 
(
VECTOR_LENGTH(BgL_fieldsz00_1260)-((long)1)); 
{ 
long BgL_iz00_1263;
BgL_iz00_1263 = BgL_g1217z00_1261; 
BgL_zc3z04anonymousza31507ze3z87_1264:
if(
(BgL_iz00_1263==((long)-1)))
{ /* Llib/object.scm 539 */
return BFALSE;}  else 
{ /* Llib/object.scm 541 */
obj_t BgL_fz00_1266;
BgL_fz00_1266 = 
VECTOR_REF(BgL_fieldsz00_1260,BgL_iz00_1263); 
{ /* Llib/object.scm 542 */
bool_t BgL_test4911z00_7364;
{ /* Llib/object.scm 542 */
obj_t BgL_arg1512z00_1270;
{ /* Llib/object.scm 542 */
obj_t BgL_res2558z00_2952;
{ /* Llib/object.scm 542 */
obj_t BgL_fieldz00_2950;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_fz00_1266))
{ /* Llib/object.scm 542 */
BgL_fieldz00_2950 = BgL_fz00_1266; }  else 
{ 
obj_t BgL_auxz00_7367;
BgL_auxz00_7367 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)22979)), BGl_string3839z00zz__objectz00, BGl_string3862z00zz__objectz00, BgL_fz00_1266); 
FAILURE(BgL_auxz00_7367,BFALSE,BFALSE);} 
{ /* Llib/object.scm 565 */
obj_t BgL_vectorz00_2951;
BgL_vectorz00_2951 = BgL_fieldz00_2950; 
{ /* Llib/object.scm 565 */
obj_t BgL_aux3116z00_5616;
BgL_aux3116z00_5616 = 
VECTOR_REF(BgL_vectorz00_2951,((long)0)); 
if(
SYMBOLP(BgL_aux3116z00_5616))
{ /* Llib/object.scm 565 */
BgL_res2558z00_2952 = BgL_aux3116z00_5616; }  else 
{ 
obj_t BgL_auxz00_7374;
BgL_auxz00_7374 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)24037)), BGl_string3839z00zz__objectz00, BGl_string3844z00zz__objectz00, BgL_aux3116z00_5616); 
FAILURE(BgL_auxz00_7374,BFALSE,BFALSE);} } } } 
BgL_arg1512z00_1270 = BgL_res2558z00_2952; } 
BgL_test4911z00_7364 = 
(BgL_arg1512z00_1270==BgL_namez00_36); } 
if(BgL_test4911z00_7364)
{ /* Llib/object.scm 542 */
return BgL_fz00_1266;}  else 
{ 
long BgL_iz00_7379;
BgL_iz00_7379 = 
(BgL_iz00_1263-((long)1)); 
BgL_iz00_1263 = BgL_iz00_7379; 
goto BgL_zc3z04anonymousza31507ze3z87_1264;} } } } } } } 

}



/* &find-class-field */
obj_t BGl_z62findzd2classzd2fieldz62zz__objectz00(obj_t BgL_envz00_4934, obj_t BgL_classz00_4935, obj_t BgL_namez00_4936)
{
{ /* Llib/object.scm 536 */
{ /* Llib/object.scm 537 */
obj_t BgL_auxz00_7388;obj_t BgL_auxz00_7381;
if(
SYMBOLP(BgL_namez00_4936))
{ /* Llib/object.scm 537 */
BgL_auxz00_7388 = BgL_namez00_4936
; }  else 
{ 
obj_t BgL_auxz00_7391;
BgL_auxz00_7391 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)22788)), BGl_string3863z00zz__objectz00, BGl_string3844z00zz__objectz00, BgL_namez00_4936); 
FAILURE(BgL_auxz00_7391,BFALSE,BFALSE);} 
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4935))
{ /* Llib/object.scm 537 */
BgL_auxz00_7381 = BgL_classz00_4935
; }  else 
{ 
obj_t BgL_auxz00_7384;
BgL_auxz00_7384 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)22788)), BGl_string3863z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4935); 
FAILURE(BgL_auxz00_7384,BFALSE,BFALSE);} 
return 
BGl_findzd2classzd2fieldz00zz__objectz00(BgL_auxz00_7381, BgL_auxz00_7388);} } 

}



/* make-class-field */
BGL_EXPORTED_DEF obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t BgL_namez00_37, obj_t BgL_getterz00_38, obj_t BgL_setterz00_39, bool_t BgL_ronlyz00_40, bool_t BgL_virtualz00_41, obj_t BgL_infoz00_42, obj_t BgL_defaultz00_43, obj_t BgL_typez00_44)
{
{ /* Llib/object.scm 549 */
{ /* Llib/object.scm 550 */
obj_t BgL_v1313z00_2955;
BgL_v1313z00_2955 = 
create_vector(((long)9)); 
VECTOR_SET(BgL_v1313z00_2955,((long)0),BgL_namez00_37); 
VECTOR_SET(BgL_v1313z00_2955,((long)1),BgL_getterz00_38); 
VECTOR_SET(BgL_v1313z00_2955,((long)2),BgL_setterz00_39); 
VECTOR_SET(BgL_v1313z00_2955,((long)3),
BBOOL(BgL_virtualz00_41)); 
VECTOR_SET(BgL_v1313z00_2955,((long)4),BGl_makezd2classzd2fieldzd2envzd2zz__objectz00); 
VECTOR_SET(BgL_v1313z00_2955,((long)5),BgL_infoz00_42); 
VECTOR_SET(BgL_v1313z00_2955,((long)6),BgL_defaultz00_43); 
VECTOR_SET(BgL_v1313z00_2955,((long)7),BgL_typez00_44); 
{ 
obj_t BgL_auxz00_7406;
{ /* Llib/object.scm 550 */
bool_t BgL_tmpz00_7407;
if(BgL_ronlyz00_40)
{ /* Llib/object.scm 551 */
BgL_tmpz00_7407 = ((bool_t)0)
; }  else 
{ /* Llib/object.scm 551 */
BgL_tmpz00_7407 = ((bool_t)1)
; } 
BgL_auxz00_7406 = 
BBOOL(BgL_tmpz00_7407); } 
VECTOR_SET(BgL_v1313z00_2955,((long)8),BgL_auxz00_7406); } 
return BgL_v1313z00_2955;} } 

}



/* &make-class-field */
obj_t BGl_z62makezd2classzd2fieldz62zz__objectz00(obj_t BgL_envz00_4937, obj_t BgL_namez00_4938, obj_t BgL_getterz00_4939, obj_t BgL_setterz00_4940, obj_t BgL_ronlyz00_4941, obj_t BgL_virtualz00_4942, obj_t BgL_infoz00_4943, obj_t BgL_defaultz00_4944, obj_t BgL_typez00_4945)
{
{ /* Llib/object.scm 549 */
{ /* Llib/object.scm 550 */
obj_t BgL_auxz00_7411;
if(
SYMBOLP(BgL_namez00_4938))
{ /* Llib/object.scm 550 */
BgL_auxz00_7411 = BgL_namez00_4938
; }  else 
{ 
obj_t BgL_auxz00_7414;
BgL_auxz00_7414 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)23329)), BGl_string3864z00zz__objectz00, BGl_string3844z00zz__objectz00, BgL_namez00_4938); 
FAILURE(BgL_auxz00_7414,BFALSE,BFALSE);} 
return 
BGl_makezd2classzd2fieldz00zz__objectz00(BgL_auxz00_7411, BgL_getterz00_4939, BgL_setterz00_4940, 
CBOOL(BgL_ronlyz00_4941), 
CBOOL(BgL_virtualz00_4942), BgL_infoz00_4943, BgL_defaultz00_4944, BgL_typez00_4945);} } 

}



/* class-field? */
BGL_EXPORTED_DEF bool_t BGl_classzd2fieldzf3z21zz__objectz00(obj_t BgL_objz00_45)
{
{ /* Llib/object.scm 556 */
if(
VECTORP(BgL_objz00_45))
{ /* Llib/object.scm 557 */
if(
(
VECTOR_LENGTH(BgL_objz00_45)==((long)9)))
{ /* Llib/object.scm 558 */
return 
(
VECTOR_REF(BgL_objz00_45,((long)4))==BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);}  else 
{ /* Llib/object.scm 558 */
return ((bool_t)0);} }  else 
{ /* Llib/object.scm 557 */
return ((bool_t)0);} } 

}



/* &class-field? */
obj_t BGl_z62classzd2fieldzf3z43zz__objectz00(obj_t BgL_envz00_4946, obj_t BgL_objz00_4947)
{
{ /* Llib/object.scm 556 */
return 
BBOOL(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_objz00_4947));} 

}



/* class-field-name */
BGL_EXPORTED_DEF obj_t BGl_classzd2fieldzd2namez00zz__objectz00(obj_t BgL_fieldz00_46)
{
{ /* Llib/object.scm 564 */
{ /* Llib/object.scm 565 */
obj_t BgL_vectorz00_2971;
BgL_vectorz00_2971 = BgL_fieldz00_46; 
{ /* Llib/object.scm 565 */
obj_t BgL_aux3124z00_5624;
BgL_aux3124z00_5624 = 
VECTOR_REF(BgL_vectorz00_2971,((long)0)); 
if(
SYMBOLP(BgL_aux3124z00_5624))
{ /* Llib/object.scm 565 */
return BgL_aux3124z00_5624;}  else 
{ 
obj_t BgL_auxz00_7433;
BgL_auxz00_7433 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)24037)), BGl_string3865z00zz__objectz00, BGl_string3844z00zz__objectz00, BgL_aux3124z00_5624); 
FAILURE(BgL_auxz00_7433,BFALSE,BFALSE);} } } } 

}



/* &class-field-name */
obj_t BGl_z62classzd2fieldzd2namez62zz__objectz00(obj_t BgL_envz00_4948, obj_t BgL_fieldz00_4949)
{
{ /* Llib/object.scm 564 */
{ /* Llib/object.scm 565 */
obj_t BgL_auxz00_7437;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_4949))
{ /* Llib/object.scm 565 */
BgL_auxz00_7437 = BgL_fieldz00_4949
; }  else 
{ 
obj_t BgL_auxz00_7440;
BgL_auxz00_7440 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)24037)), BGl_string3866z00zz__objectz00, BGl_string3862z00zz__objectz00, BgL_fieldz00_4949); 
FAILURE(BgL_auxz00_7440,BFALSE,BFALSE);} 
return 
BGl_classzd2fieldzd2namez00zz__objectz00(BgL_auxz00_7437);} } 

}



/* class-field-virtual? */
BGL_EXPORTED_DEF bool_t BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(obj_t BgL_fieldz00_47)
{
{ /* Llib/object.scm 570 */
{ /* Llib/object.scm 571 */
obj_t BgL_vectorz00_2972;
BgL_vectorz00_2972 = BgL_fieldz00_47; 
return 
CBOOL(
VECTOR_REF(BgL_vectorz00_2972,((long)3)));} } 

}



/* &class-field-virtual? */
obj_t BGl_z62classzd2fieldzd2virtualzf3z91zz__objectz00(obj_t BgL_envz00_4950, obj_t BgL_fieldz00_4951)
{
{ /* Llib/object.scm 570 */
{ /* Llib/object.scm 571 */
bool_t BgL_tmpz00_7447;
{ /* Llib/object.scm 571 */
obj_t BgL_auxz00_7448;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_4951))
{ /* Llib/object.scm 571 */
BgL_auxz00_7448 = BgL_fieldz00_4951
; }  else 
{ 
obj_t BgL_auxz00_7451;
BgL_auxz00_7451 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)24331)), BGl_string3867z00zz__objectz00, BGl_string3862z00zz__objectz00, BgL_fieldz00_4951); 
FAILURE(BgL_auxz00_7451,BFALSE,BFALSE);} 
BgL_tmpz00_7447 = 
BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(BgL_auxz00_7448); } 
return 
BBOOL(BgL_tmpz00_7447);} } 

}



/* class-field-accessor */
BGL_EXPORTED_DEF obj_t BGl_classzd2fieldzd2accessorz00zz__objectz00(obj_t BgL_fieldz00_48)
{
{ /* Llib/object.scm 576 */
{ /* Llib/object.scm 577 */
obj_t BgL_vectorz00_2973;
BgL_vectorz00_2973 = BgL_fieldz00_48; 
{ /* Llib/object.scm 577 */
obj_t BgL_aux3130z00_5630;
BgL_aux3130z00_5630 = 
VECTOR_REF(BgL_vectorz00_2973,((long)1)); 
if(
PROCEDUREP(BgL_aux3130z00_5630))
{ /* Llib/object.scm 577 */
return BgL_aux3130z00_5630;}  else 
{ 
obj_t BgL_auxz00_7460;
BgL_auxz00_7460 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)24630)), BGl_string3868z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3130z00_5630); 
FAILURE(BgL_auxz00_7460,BFALSE,BFALSE);} } } } 

}



/* &class-field-accessor */
obj_t BGl_z62classzd2fieldzd2accessorz62zz__objectz00(obj_t BgL_envz00_4952, obj_t BgL_fieldz00_4953)
{
{ /* Llib/object.scm 576 */
{ /* Llib/object.scm 577 */
obj_t BgL_auxz00_7464;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_4953))
{ /* Llib/object.scm 577 */
BgL_auxz00_7464 = BgL_fieldz00_4953
; }  else 
{ 
obj_t BgL_auxz00_7467;
BgL_auxz00_7467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)24630)), BGl_string3870z00zz__objectz00, BGl_string3862z00zz__objectz00, BgL_fieldz00_4953); 
FAILURE(BgL_auxz00_7467,BFALSE,BFALSE);} 
return 
BGl_classzd2fieldzd2accessorz00zz__objectz00(BgL_auxz00_7464);} } 

}



/* class-field-mutable? */
BGL_EXPORTED_DEF bool_t BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00(obj_t BgL_fieldz00_49)
{
{ /* Llib/object.scm 582 */
{ /* Llib/object.scm 583 */
obj_t BgL_vectorz00_2974;
BgL_vectorz00_2974 = BgL_fieldz00_49; 
return 
CBOOL(
VECTOR_REF(BgL_vectorz00_2974,((long)8)));} } 

}



/* &class-field-mutable? */
obj_t BGl_z62classzd2fieldzd2mutablezf3z91zz__objectz00(obj_t BgL_envz00_4954, obj_t BgL_fieldz00_4955)
{
{ /* Llib/object.scm 582 */
{ /* Llib/object.scm 583 */
bool_t BgL_tmpz00_7474;
{ /* Llib/object.scm 583 */
obj_t BgL_auxz00_7475;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_4955))
{ /* Llib/object.scm 583 */
BgL_auxz00_7475 = BgL_fieldz00_4955
; }  else 
{ 
obj_t BgL_auxz00_7478;
BgL_auxz00_7478 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)24924)), BGl_string3871z00zz__objectz00, BGl_string3862z00zz__objectz00, BgL_fieldz00_4955); 
FAILURE(BgL_auxz00_7478,BFALSE,BFALSE);} 
BgL_tmpz00_7474 = 
BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00(BgL_auxz00_7475); } 
return 
BBOOL(BgL_tmpz00_7474);} } 

}



/* class-field-mutator */
BGL_EXPORTED_DEF obj_t BGl_classzd2fieldzd2mutatorz00zz__objectz00(obj_t BgL_fieldz00_50)
{
{ /* Llib/object.scm 588 */
{ /* Llib/object.scm 589 */
obj_t BgL_vectorz00_2975;
BgL_vectorz00_2975 = BgL_fieldz00_50; 
{ /* Llib/object.scm 589 */
obj_t BgL_aux3136z00_5636;
BgL_aux3136z00_5636 = 
VECTOR_REF(BgL_vectorz00_2975,((long)2)); 
if(
PROCEDUREP(BgL_aux3136z00_5636))
{ /* Llib/object.scm 589 */
return BgL_aux3136z00_5636;}  else 
{ 
obj_t BgL_auxz00_7487;
BgL_auxz00_7487 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)25222)), BGl_string3872z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3136z00_5636); 
FAILURE(BgL_auxz00_7487,BFALSE,BFALSE);} } } } 

}



/* &class-field-mutator */
obj_t BGl_z62classzd2fieldzd2mutatorz62zz__objectz00(obj_t BgL_envz00_4956, obj_t BgL_fieldz00_4957)
{
{ /* Llib/object.scm 588 */
{ /* Llib/object.scm 589 */
obj_t BgL_auxz00_7491;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_4957))
{ /* Llib/object.scm 589 */
BgL_auxz00_7491 = BgL_fieldz00_4957
; }  else 
{ 
obj_t BgL_auxz00_7494;
BgL_auxz00_7494 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)25222)), BGl_string3873z00zz__objectz00, BGl_string3862z00zz__objectz00, BgL_fieldz00_4957); 
FAILURE(BgL_auxz00_7494,BFALSE,BFALSE);} 
return 
BGl_classzd2fieldzd2mutatorz00zz__objectz00(BgL_auxz00_7491);} } 

}



/* class-field-info */
BGL_EXPORTED_DEF obj_t BGl_classzd2fieldzd2infoz00zz__objectz00(obj_t BgL_fieldz00_51)
{
{ /* Llib/object.scm 594 */
return 
VECTOR_REF(BgL_fieldz00_51,((long)5));} 

}



/* &class-field-info */
obj_t BGl_z62classzd2fieldzd2infoz62zz__objectz00(obj_t BgL_envz00_4958, obj_t BgL_fieldz00_4959)
{
{ /* Llib/object.scm 594 */
{ /* Llib/object.scm 595 */
obj_t BgL_auxz00_7500;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_4959))
{ /* Llib/object.scm 595 */
BgL_auxz00_7500 = BgL_fieldz00_4959
; }  else 
{ 
obj_t BgL_auxz00_7503;
BgL_auxz00_7503 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)25506)), BGl_string3874z00zz__objectz00, BGl_string3862z00zz__objectz00, BgL_fieldz00_4959); 
FAILURE(BgL_auxz00_7503,BFALSE,BFALSE);} 
return 
BGl_classzd2fieldzd2infoz00zz__objectz00(BgL_auxz00_7500);} } 

}



/* class-field-default-value? */
BGL_EXPORTED_DEF bool_t BGl_classzd2fieldzd2defaultzd2valuezf3z21zz__objectz00(obj_t BgL_fieldz00_52)
{
{ /* Llib/object.scm 600 */
{ /* Llib/object.scm 601 */
obj_t BgL_tmpz00_7508;
BgL_tmpz00_7508 = 
VECTOR_REF(BgL_fieldz00_52,((long)6)); 
return 
PROCEDUREP(BgL_tmpz00_7508);} } 

}



/* &class-field-default-value? */
obj_t BGl_z62classzd2fieldzd2defaultzd2valuezf3z43zz__objectz00(obj_t BgL_envz00_4960, obj_t BgL_fieldz00_4961)
{
{ /* Llib/object.scm 600 */
{ /* Llib/object.scm 601 */
bool_t BgL_tmpz00_7511;
{ /* Llib/object.scm 601 */
obj_t BgL_auxz00_7512;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_4961))
{ /* Llib/object.scm 601 */
BgL_auxz00_7512 = BgL_fieldz00_4961
; }  else 
{ 
obj_t BgL_auxz00_7515;
BgL_auxz00_7515 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)25812)), BGl_string3875z00zz__objectz00, BGl_string3862z00zz__objectz00, BgL_fieldz00_4961); 
FAILURE(BgL_auxz00_7515,BFALSE,BFALSE);} 
BgL_tmpz00_7511 = 
BGl_classzd2fieldzd2defaultzd2valuezf3z21zz__objectz00(BgL_auxz00_7512); } 
return 
BBOOL(BgL_tmpz00_7511);} } 

}



/* class-field-default-value */
BGL_EXPORTED_DEF obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t BgL_fieldz00_53)
{
{ /* Llib/object.scm 606 */
{ /* Llib/object.scm 609 */
obj_t BgL_pz00_1280;
BgL_pz00_1280 = 
VECTOR_REF(BgL_fieldz00_53,((long)6)); 
if(
PROCEDUREP(BgL_pz00_1280))
{ /* Llib/object.scm 610 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_pz00_1280, ((long)0)))
{ /* Llib/object.scm 611 */
return 
PROCEDURE_ENTRY(BgL_pz00_1280)(BgL_pz00_1280, BEOA);}  else 
{ /* Llib/object.scm 611 */
FAILURE(BGl_string3876z00zz__objectz00,BGl_list3877z00zz__objectz00,BgL_pz00_1280);} }  else 
{ /* Llib/object.scm 614 */
obj_t BgL_arg1520z00_1282;
{ /* Llib/object.scm 614 */
obj_t BgL_res2564z00_2984;
{ /* Llib/object.scm 565 */
obj_t BgL_vectorz00_2983;
BgL_vectorz00_2983 = BgL_fieldz00_53; 
{ /* Llib/object.scm 565 */
obj_t BgL_aux3146z00_5647;
BgL_aux3146z00_5647 = 
VECTOR_REF(BgL_vectorz00_2983,((long)0)); 
if(
SYMBOLP(BgL_aux3146z00_5647))
{ /* Llib/object.scm 565 */
BgL_res2564z00_2984 = BgL_aux3146z00_5647; }  else 
{ 
obj_t BgL_auxz00_7533;
BgL_auxz00_7533 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)24037)), BGl_string3882z00zz__objectz00, BGl_string3844z00zz__objectz00, BgL_aux3146z00_5647); 
FAILURE(BgL_auxz00_7533,BFALSE,BFALSE);} } } 
BgL_arg1520z00_1282 = BgL_res2564z00_2984; } 
return 
BGl_errorz00zz__errorz00(BGl_string3882z00zz__objectz00, BGl_string3883z00zz__objectz00, BgL_arg1520z00_1282);} } } 

}



/* &class-field-default-value */
obj_t BGl_z62classzd2fieldzd2defaultzd2valuezb0zz__objectz00(obj_t BgL_envz00_4962, obj_t BgL_fieldz00_4963)
{
{ /* Llib/object.scm 606 */
{ /* Llib/object.scm 609 */
obj_t BgL_auxz00_7538;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_4963))
{ /* Llib/object.scm 609 */
BgL_auxz00_7538 = BgL_fieldz00_4963
; }  else 
{ 
obj_t BgL_auxz00_7541;
BgL_auxz00_7541 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)26198)), BGl_string3884z00zz__objectz00, BGl_string3862z00zz__objectz00, BgL_fieldz00_4963); 
FAILURE(BgL_auxz00_7541,BFALSE,BFALSE);} 
return 
BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_7538);} } 

}



/* class-field-type */
BGL_EXPORTED_DEF obj_t BGl_classzd2fieldzd2typez00zz__objectz00(obj_t BgL_fieldz00_54)
{
{ /* Llib/object.scm 619 */
return 
VECTOR_REF(BgL_fieldz00_54,((long)7));} 

}



/* &class-field-type */
obj_t BGl_z62classzd2fieldzd2typez62zz__objectz00(obj_t BgL_envz00_4964, obj_t BgL_fieldz00_4965)
{
{ /* Llib/object.scm 619 */
{ /* Llib/object.scm 620 */
obj_t BgL_auxz00_7547;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_4965))
{ /* Llib/object.scm 620 */
BgL_auxz00_7547 = BgL_fieldz00_4965
; }  else 
{ 
obj_t BgL_auxz00_7550;
BgL_auxz00_7550 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)26637)), BGl_string3885z00zz__objectz00, BGl_string3862z00zz__objectz00, BgL_fieldz00_4965); 
FAILURE(BgL_auxz00_7550,BFALSE,BFALSE);} 
return 
BGl_classzd2fieldzd2typez00zz__objectz00(BgL_auxz00_7547);} } 

}



/* class-super */
BGL_EXPORTED_DEF obj_t BGl_classzd2superzd2zz__objectz00(obj_t BgL_classz00_55)
{
{ /* Llib/object.scm 625 */
return 
BGL_CLASS_SUPER(BgL_classz00_55);} 

}



/* &class-super */
obj_t BGl_z62classzd2superzb0zz__objectz00(obj_t BgL_envz00_4966, obj_t BgL_classz00_4967)
{
{ /* Llib/object.scm 625 */
{ /* Llib/object.scm 626 */
obj_t BgL_auxz00_7556;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4967))
{ /* Llib/object.scm 626 */
BgL_auxz00_7556 = BgL_classz00_4967
; }  else 
{ 
obj_t BgL_auxz00_7559;
BgL_auxz00_7559 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)26916)), BGl_string3886z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4967); 
FAILURE(BgL_auxz00_7559,BFALSE,BFALSE);} 
return 
BGl_classzd2superzd2zz__objectz00(BgL_auxz00_7556);} } 

}



/* class-abstract? */
BGL_EXPORTED_DEF bool_t BGl_classzd2abstractzf3z21zz__objectz00(obj_t BgL_classz00_59)
{
{ /* Llib/object.scm 643 */
{ /* Llib/object.scm 644 */
obj_t BgL_arg1523z00_2987;
{ /* Llib/object.scm 644 */
obj_t BgL_res2566z00_2991;
{ /* Llib/object.scm 668 */
bool_t BgL_test4936z00_7564;
{ /* Llib/object.scm 668 */
bool_t BgL_res2565z00_2990;
BgL_res2565z00_2990 = 
BGL_CLASSP(BgL_classz00_59); 
BgL_test4936z00_7564 = BgL_res2565z00_2990; } 
if(BgL_test4936z00_7564)
{ /* Llib/object.scm 668 */
BgL_res2566z00_2991 = 
BGL_CLASS_ALLOC_FUN(BgL_classz00_59); }  else 
{ /* Llib/object.scm 670 */
obj_t BgL_aux3154z00_5655;
BgL_aux3154z00_5655 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3887z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_59); 
if(
PROCEDUREP(BgL_aux3154z00_5655))
{ /* Llib/object.scm 670 */
BgL_res2566z00_2991 = BgL_aux3154z00_5655; }  else 
{ 
obj_t BgL_auxz00_7570;
BgL_auxz00_7570 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)29065)), BGl_string3888z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3154z00_5655); 
FAILURE(BgL_auxz00_7570,BFALSE,BFALSE);} } } 
BgL_arg1523z00_2987 = BgL_res2566z00_2991; } ((bool_t)1); } 
return ((bool_t)0);} 

}



/* &class-abstract? */
obj_t BGl_z62classzd2abstractzf3z43zz__objectz00(obj_t BgL_envz00_4968, obj_t BgL_classz00_4969)
{
{ /* Llib/object.scm 643 */
{ /* Llib/object.scm 644 */
bool_t BgL_tmpz00_7574;
{ /* Llib/object.scm 644 */
obj_t BgL_auxz00_7575;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4969))
{ /* Llib/object.scm 644 */
BgL_auxz00_7575 = BgL_classz00_4969
; }  else 
{ 
obj_t BgL_auxz00_7578;
BgL_auxz00_7578 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)27805)), BGl_string3889z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4969); 
FAILURE(BgL_auxz00_7578,BFALSE,BFALSE);} 
BgL_tmpz00_7574 = 
BGl_classzd2abstractzf3z21zz__objectz00(BgL_auxz00_7575); } 
return 
BBOOL(BgL_tmpz00_7574);} } 

}



/* class-wide? */
BGL_EXPORTED_DEF bool_t BGl_classzd2widezf3z21zz__objectz00(obj_t BgL_classz00_60)
{
{ /* Llib/object.scm 649 */
{ /* Llib/object.scm 650 */
obj_t BgL_arg1524z00_2993;
{ /* Llib/object.scm 724 */
bool_t BgL_test4939z00_7584;
{ /* Llib/object.scm 724 */
bool_t BgL_res2568z00_2995;
BgL_res2568z00_2995 = 
BGL_CLASSP(BgL_classz00_60); 
BgL_test4939z00_7584 = BgL_res2568z00_2995; } 
if(BgL_test4939z00_7584)
{ /* Llib/object.scm 724 */
BgL_arg1524z00_2993 = 
BGL_CLASS_SHRINK(BgL_classz00_60); }  else 
{ /* Llib/object.scm 724 */
BgL_arg1524z00_2993 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3890z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_60); } } 
return 
PROCEDUREP(BgL_arg1524z00_2993);} } 

}



/* &class-wide? */
obj_t BGl_z62classzd2widezf3z43zz__objectz00(obj_t BgL_envz00_4970, obj_t BgL_classz00_4971)
{
{ /* Llib/object.scm 649 */
{ /* Llib/object.scm 650 */
bool_t BgL_tmpz00_7589;
{ /* Llib/object.scm 650 */
obj_t BgL_auxz00_7590;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4971))
{ /* Llib/object.scm 650 */
BgL_auxz00_7590 = BgL_classz00_4971
; }  else 
{ 
obj_t BgL_auxz00_7593;
BgL_auxz00_7593 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)28122)), BGl_string3891z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4971); 
FAILURE(BgL_auxz00_7593,BFALSE,BFALSE);} 
BgL_tmpz00_7589 = 
BGl_classzd2widezf3z21zz__objectz00(BgL_auxz00_7590); } 
return 
BBOOL(BgL_tmpz00_7589);} } 

}



/* class-subclasses */
BGL_EXPORTED_DEF obj_t BGl_classzd2subclasseszd2zz__objectz00(obj_t BgL_classz00_61)
{
{ /* Llib/object.scm 655 */
return 
BGL_CLASS_SUBCLASSES(BgL_classz00_61);} 

}



/* &class-subclasses */
obj_t BGl_z62classzd2subclasseszb0zz__objectz00(obj_t BgL_envz00_4972, obj_t BgL_classz00_4973)
{
{ /* Llib/object.scm 655 */
{ /* Llib/object.scm 656 */
obj_t BgL_auxz00_7600;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4973))
{ /* Llib/object.scm 656 */
BgL_auxz00_7600 = BgL_classz00_4973
; }  else 
{ 
obj_t BgL_auxz00_7603;
BgL_auxz00_7603 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)28411)), BGl_string3892z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4973); 
FAILURE(BgL_auxz00_7603,BFALSE,BFALSE);} 
return 
BGl_classzd2subclasseszd2zz__objectz00(BgL_auxz00_7600);} } 

}



/* class-allocator */
BGL_EXPORTED_DEF obj_t BGl_classzd2allocatorzd2zz__objectz00(obj_t BgL_classz00_64)
{
{ /* Llib/object.scm 667 */
{ /* Llib/object.scm 668 */
bool_t BgL_test4942z00_7608;
{ /* Llib/object.scm 668 */
bool_t BgL_res2570z00_2998;
BgL_res2570z00_2998 = 
BGL_CLASSP(BgL_classz00_64); 
BgL_test4942z00_7608 = BgL_res2570z00_2998; } 
if(BgL_test4942z00_7608)
{ /* Llib/object.scm 668 */
return 
BGL_CLASS_ALLOC_FUN(BgL_classz00_64);}  else 
{ /* Llib/object.scm 670 */
obj_t BgL_aux3162z00_5663;
BgL_aux3162z00_5663 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3887z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_64); 
if(
PROCEDUREP(BgL_aux3162z00_5663))
{ /* Llib/object.scm 670 */
return BgL_aux3162z00_5663;}  else 
{ 
obj_t BgL_auxz00_7614;
BgL_auxz00_7614 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)29065)), BGl_string3887z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3162z00_5663); 
FAILURE(BgL_auxz00_7614,BFALSE,BFALSE);} } } } 

}



/* &class-allocator */
obj_t BGl_z62classzd2allocatorzb0zz__objectz00(obj_t BgL_envz00_4974, obj_t BgL_classz00_4975)
{
{ /* Llib/object.scm 667 */
{ /* Llib/object.scm 668 */
obj_t BgL_auxz00_7618;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4975))
{ /* Llib/object.scm 668 */
BgL_auxz00_7618 = BgL_classz00_4975
; }  else 
{ 
obj_t BgL_auxz00_7621;
BgL_auxz00_7621 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)29007)), BGl_string3893z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4975); 
FAILURE(BgL_auxz00_7621,BFALSE,BFALSE);} 
return 
BGl_classzd2allocatorzd2zz__objectz00(BgL_auxz00_7618);} } 

}



/* class-hash */
BGL_EXPORTED_DEF long BGl_classzd2hashzd2zz__objectz00(obj_t BgL_classz00_65)
{
{ /* Llib/object.scm 675 */
return 
BGL_CLASS_HASH(BgL_classz00_65);} 

}



/* &class-hash */
obj_t BGl_z62classzd2hashzb0zz__objectz00(obj_t BgL_envz00_4976, obj_t BgL_classz00_4977)
{
{ /* Llib/object.scm 675 */
{ /* Llib/object.scm 676 */
long BgL_tmpz00_7627;
{ /* Llib/object.scm 676 */
obj_t BgL_auxz00_7628;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4977))
{ /* Llib/object.scm 676 */
BgL_auxz00_7628 = BgL_classz00_4977
; }  else 
{ 
obj_t BgL_auxz00_7631;
BgL_auxz00_7631 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)29372)), BGl_string3894z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4977); 
FAILURE(BgL_auxz00_7631,BFALSE,BFALSE);} 
BgL_tmpz00_7627 = 
BGl_classzd2hashzd2zz__objectz00(BgL_auxz00_7628); } 
return 
BINT(BgL_tmpz00_7627);} } 

}



/* class-constructor */
BGL_EXPORTED_DEF obj_t BGl_classzd2constructorzd2zz__objectz00(obj_t BgL_classz00_66)
{
{ /* Llib/object.scm 681 */
return 
BGL_CLASS_CONSTRUCTOR(BgL_classz00_66);} 

}



/* &class-constructor */
obj_t BGl_z62classzd2constructorzb0zz__objectz00(obj_t BgL_envz00_4978, obj_t BgL_classz00_4979)
{
{ /* Llib/object.scm 681 */
{ /* Llib/object.scm 682 */
obj_t BgL_auxz00_7638;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4979))
{ /* Llib/object.scm 682 */
BgL_auxz00_7638 = BgL_classz00_4979
; }  else 
{ 
obj_t BgL_auxz00_7641;
BgL_auxz00_7641 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)29653)), BGl_string3895z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4979); 
FAILURE(BgL_auxz00_7641,BFALSE,BFALSE);} 
return 
BGl_classzd2constructorzd2zz__objectz00(BgL_auxz00_7638);} } 

}



/* class-creator */
BGL_EXPORTED_DEF obj_t BGl_classzd2creatorzd2zz__objectz00(obj_t BgL_classz00_67)
{
{ /* Llib/object.scm 687 */
return 
BGL_CLASS_NEW_FUN(BgL_classz00_67);} 

}



/* &class-creator */
obj_t BGl_z62classzd2creatorzb0zz__objectz00(obj_t BgL_envz00_4980, obj_t BgL_classz00_4981)
{
{ /* Llib/object.scm 687 */
{ /* Llib/object.scm 688 */
obj_t BgL_auxz00_7647;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4981))
{ /* Llib/object.scm 688 */
BgL_auxz00_7647 = BgL_classz00_4981
; }  else 
{ 
obj_t BgL_auxz00_7650;
BgL_auxz00_7650 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)29937)), BGl_string3896z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4981); 
FAILURE(BgL_auxz00_7650,BFALSE,BFALSE);} 
return 
BGl_classzd2creatorzd2zz__objectz00(BgL_auxz00_7647);} } 

}



/* class-nil-init! */
BGL_EXPORTED_DEF obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t BgL_classz00_68)
{
{ /* Llib/object.scm 693 */
{ /* Llib/object.scm 694 */
obj_t BgL_procz00_1288;
BgL_procz00_1288 = 
BGL_CLASS_NIL_FUN(BgL_classz00_68); 
{ /* Llib/object.scm 695 */
bool_t BgL_test4948z00_7656;
{ /* Llib/object.scm 650 */
obj_t BgL_tmpz00_7657;
BgL_tmpz00_7657 = 
BGl_classzd2shrinkzd2zz__objectz00(BgL_classz00_68); 
BgL_test4948z00_7656 = 
PROCEDUREP(BgL_tmpz00_7657); } 
if(BgL_test4948z00_7656)
{ /* Llib/object.scm 696 */
obj_t BgL_superz00_1290;
BgL_superz00_1290 = 
BGL_CLASS_SUPER(BgL_classz00_68); 
{ /* Llib/object.scm 696 */
obj_t BgL_oz00_1291;
{ /* Llib/object.scm 697 */
obj_t BgL_fun1531z00_1294;
{ /* Llib/object.scm 697 */
obj_t BgL_res2574z00_3007;
{ /* Llib/object.scm 697 */
obj_t BgL_classz00_3004;
if(
BGL_CLASSP(BgL_superz00_1290))
{ /* Llib/object.scm 697 */
BgL_classz00_3004 = BgL_superz00_1290; }  else 
{ 
obj_t BgL_auxz00_7663;
BgL_auxz00_7663 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)30348)), BGl_string3897z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_superz00_1290); 
FAILURE(BgL_auxz00_7663,BFALSE,BFALSE);} 
{ /* Llib/object.scm 668 */
bool_t BgL_test4950z00_7667;
{ /* Llib/object.scm 668 */
bool_t BgL_res2573z00_3006;
BgL_res2573z00_3006 = 
BGL_CLASSP(BgL_classz00_3004); 
BgL_test4950z00_7667 = BgL_res2573z00_3006; } 
if(BgL_test4950z00_7667)
{ /* Llib/object.scm 668 */
BgL_res2574z00_3007 = 
BGL_CLASS_ALLOC_FUN(BgL_classz00_3004); }  else 
{ /* Llib/object.scm 670 */
obj_t BgL_aux3174z00_5675;
BgL_aux3174z00_5675 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3887z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_3004); 
if(
PROCEDUREP(BgL_aux3174z00_5675))
{ /* Llib/object.scm 670 */
BgL_res2574z00_3007 = BgL_aux3174z00_5675; }  else 
{ 
obj_t BgL_auxz00_7673;
BgL_auxz00_7673 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)29065)), BGl_string3897z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3174z00_5675); 
FAILURE(BgL_auxz00_7673,BFALSE,BFALSE);} } } } 
BgL_fun1531z00_1294 = BgL_res2574z00_3007; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fun1531z00_1294, ((long)0)))
{ /* Llib/object.scm 697 */
BgL_oz00_1291 = 
PROCEDURE_ENTRY(BgL_fun1531z00_1294)(BgL_fun1531z00_1294, BEOA); }  else 
{ /* Llib/object.scm 697 */
FAILURE(BGl_string3898z00zz__objectz00,BGl_list3899z00zz__objectz00,BgL_fun1531z00_1294);} } 
{ /* Llib/object.scm 697 */
obj_t BgL_woz00_1292;
{ /* Llib/object.scm 698 */
obj_t BgL_fun1530z00_1293;
{ /* Llib/object.scm 698 */
obj_t BgL_res2576z00_3011;
{ /* Llib/object.scm 668 */
bool_t BgL_test4953z00_7683;
{ /* Llib/object.scm 668 */
bool_t BgL_res2575z00_3010;
BgL_res2575z00_3010 = 
BGL_CLASSP(BgL_classz00_68); 
BgL_test4953z00_7683 = BgL_res2575z00_3010; } 
if(BgL_test4953z00_7683)
{ /* Llib/object.scm 668 */
BgL_res2576z00_3011 = 
BGL_CLASS_ALLOC_FUN(BgL_classz00_68); }  else 
{ /* Llib/object.scm 670 */
obj_t BgL_aux3178z00_5680;
BgL_aux3178z00_5680 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3887z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_68); 
if(
PROCEDUREP(BgL_aux3178z00_5680))
{ /* Llib/object.scm 670 */
BgL_res2576z00_3011 = BgL_aux3178z00_5680; }  else 
{ 
obj_t BgL_auxz00_7689;
BgL_auxz00_7689 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)29065)), BGl_string3897z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3178z00_5680); 
FAILURE(BgL_auxz00_7689,BFALSE,BFALSE);} } } 
BgL_fun1530z00_1293 = BgL_res2576z00_3011; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fun1530z00_1293, ((long)1)))
{ /* Llib/object.scm 698 */
BgL_woz00_1292 = 
PROCEDURE_ENTRY(BgL_fun1530z00_1293)(BgL_fun1530z00_1293, BgL_oz00_1291, BEOA); }  else 
{ /* Llib/object.scm 698 */
FAILURE(BGl_string3898z00zz__objectz00,BGl_list3902z00zz__objectz00,BgL_fun1530z00_1293);} } 
{ /* Llib/object.scm 698 */

BGL_CLASS_NIL_SET(BgL_classz00_68, BgL_woz00_1292); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_1288, ((long)1)))
{ /* Llib/object.scm 700 */
PROCEDURE_ENTRY(BgL_procz00_1288)(BgL_procz00_1288, BgL_woz00_1292, BEOA); }  else 
{ /* Llib/object.scm 700 */
FAILURE(BGl_string3898z00zz__objectz00,BGl_list3907z00zz__objectz00,BgL_procz00_1288);} 
return BgL_woz00_1292;} } } }  else 
{ /* Llib/object.scm 702 */
obj_t BgL_oz00_1295;
{ /* Llib/object.scm 702 */
obj_t BgL_fun1532z00_1296;
{ /* Llib/object.scm 702 */
obj_t BgL_res2578z00_3015;
{ /* Llib/object.scm 668 */
bool_t BgL_test4957z00_7708;
{ /* Llib/object.scm 668 */
bool_t BgL_res2577z00_3014;
BgL_res2577z00_3014 = 
BGL_CLASSP(BgL_classz00_68); 
BgL_test4957z00_7708 = BgL_res2577z00_3014; } 
if(BgL_test4957z00_7708)
{ /* Llib/object.scm 668 */
BgL_res2578z00_3015 = 
BGL_CLASS_ALLOC_FUN(BgL_classz00_68); }  else 
{ /* Llib/object.scm 670 */
obj_t BgL_aux3184z00_5688;
BgL_aux3184z00_5688 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3887z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_68); 
if(
PROCEDUREP(BgL_aux3184z00_5688))
{ /* Llib/object.scm 670 */
BgL_res2578z00_3015 = BgL_aux3184z00_5688; }  else 
{ 
obj_t BgL_auxz00_7714;
BgL_auxz00_7714 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)29065)), BGl_string3897z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3184z00_5688); 
FAILURE(BgL_auxz00_7714,BFALSE,BFALSE);} } } 
BgL_fun1532z00_1296 = BgL_res2578z00_3015; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fun1532z00_1296, ((long)0)))
{ /* Llib/object.scm 702 */
BgL_oz00_1295 = 
PROCEDURE_ENTRY(BgL_fun1532z00_1296)(BgL_fun1532z00_1296, BEOA); }  else 
{ /* Llib/object.scm 702 */
FAILURE(BGl_string3898z00zz__objectz00,BGl_list3912z00zz__objectz00,BgL_fun1532z00_1296);} } 
BGL_CLASS_NIL_SET(BgL_classz00_68, BgL_oz00_1295); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_1288, ((long)1)))
{ /* Llib/object.scm 704 */
PROCEDURE_ENTRY(BgL_procz00_1288)(BgL_procz00_1288, BgL_oz00_1295, BEOA); }  else 
{ /* Llib/object.scm 704 */
FAILURE(BGl_string3898z00zz__objectz00,BGl_list3915z00zz__objectz00,BgL_procz00_1288);} 
return BgL_oz00_1295;} } } } 

}



/* &class-nil-init! */
obj_t BGl_z62classzd2nilzd2initz12z70zz__objectz00(obj_t BgL_envz00_4982, obj_t BgL_classz00_4983)
{
{ /* Llib/object.scm 693 */
{ /* Llib/object.scm 694 */
obj_t BgL_auxz00_7732;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4983))
{ /* Llib/object.scm 694 */
BgL_auxz00_7732 = BgL_classz00_4983
; }  else 
{ 
obj_t BgL_auxz00_7735;
BgL_auxz00_7735 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)30219)), BGl_string3916z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4983); 
FAILURE(BgL_auxz00_7735,BFALSE,BFALSE);} 
return 
BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_auxz00_7732);} } 

}



/* class-nil */
BGL_EXPORTED_DEF obj_t BGl_classzd2nilzd2zz__objectz00(obj_t BgL_classz00_69)
{
{ /* Llib/object.scm 710 */
{ /* Llib/object.scm 716 */
bool_t BgL_test4962z00_7740;
{ /* Llib/object.scm 716 */
bool_t BgL_res2579z00_6532;
BgL_res2579z00_6532 = 
BGL_CLASSP(BgL_classz00_69); 
BgL_test4962z00_7740 = BgL_res2579z00_6532; } 
if(BgL_test4962z00_7740)
{ /* Llib/object.scm 717 */
obj_t BgL__ortest_1220z00_6533;
BgL__ortest_1220z00_6533 = 
BGL_CLASS_NIL(BgL_classz00_69); 
if(
CBOOL(BgL__ortest_1220z00_6533))
{ /* Llib/object.scm 717 */
return BgL__ortest_1220z00_6533;}  else 
{ /* Llib/object.scm 717 */
return 
BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_69);} }  else 
{ /* Llib/object.scm 716 */
return 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3917z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_69);} } } 

}



/* &class-nil */
obj_t BGl_z62classzd2nilzb0zz__objectz00(obj_t BgL_envz00_4984, obj_t BgL_classz00_4985)
{
{ /* Llib/object.scm 710 */
{ /* Llib/object.scm 716 */
obj_t BgL_auxz00_7747;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_4985))
{ /* Llib/object.scm 716 */
BgL_auxz00_7747 = BgL_classz00_4985
; }  else 
{ 
obj_t BgL_auxz00_7750;
BgL_auxz00_7750 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)30958)), BGl_string3918z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_4985); 
FAILURE(BgL_auxz00_7750,BFALSE,BFALSE);} 
return 
BGl_classzd2nilzd2zz__objectz00(BgL_auxz00_7747);} } 

}



/* class-shrink */
obj_t BGl_classzd2shrinkzd2zz__objectz00(obj_t BgL_classz00_70)
{
{ /* Llib/object.scm 723 */
{ /* Llib/object.scm 724 */
bool_t BgL_test4965z00_7755;
{ /* Llib/object.scm 724 */
bool_t BgL_res2580z00_3020;
BgL_res2580z00_3020 = 
BGL_CLASSP(BgL_classz00_70); 
BgL_test4965z00_7755 = BgL_res2580z00_3020; } 
if(BgL_test4965z00_7755)
{ /* Llib/object.scm 724 */
return 
BGL_CLASS_SHRINK(BgL_classz00_70);}  else 
{ /* Llib/object.scm 724 */
return 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3890z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_70);} } } 

}



/* initialize-objects! */
obj_t BGl_initializa7ezd2objectsz12z67zz__objectz00()
{
{ /* Llib/object.scm 759 */
if(
INTEGERP(BGl_za2nbzd2classesza2zd2zz__objectz00))
{ /* Llib/object.scm 760 */
return BFALSE;}  else 
{ /* Llib/object.scm 760 */
BGl_za2nbzd2classesza2zd2zz__objectz00 = 
BINT(((long)0)); 
BGl_za2nbzd2classeszd2maxza2z00zz__objectz00 = 
BINT(((long)64)); 
{ /* Llib/object.scm 763 */
long BgL_tmpz00_7763;
{ /* Llib/object.scm 763 */
obj_t BgL_tmpz00_7764;
{ /* Llib/object.scm 763 */
obj_t BgL_aux3194z00_5700;
BgL_aux3194z00_5700 = BGl_za2nbzd2classeszd2maxza2z00zz__objectz00; 
if(
INTEGERP(BgL_aux3194z00_5700))
{ /* Llib/object.scm 763 */
BgL_tmpz00_7764 = BgL_aux3194z00_5700
; }  else 
{ 
obj_t BgL_auxz00_7767;
BgL_auxz00_7767 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)33342)), BGl_string3919z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3194z00_5700); 
FAILURE(BgL_auxz00_7767,BFALSE,BFALSE);} } 
BgL_tmpz00_7763 = 
(long)CINT(BgL_tmpz00_7764); } 
BGl_za2classesza2z00zz__objectz00 = 
make_vector_uncollectable(BgL_tmpz00_7763, BFALSE); } 
BGl_za2nbzd2genericszd2maxza2z00zz__objectz00 = 
BINT(((long)64)); 
BGl_za2nbzd2genericsza2zd2zz__objectz00 = 
BINT(((long)0)); 
{ /* Llib/object.scm 766 */
long BgL_tmpz00_7775;
{ /* Llib/object.scm 766 */
obj_t BgL_tmpz00_7776;
{ /* Llib/object.scm 766 */
obj_t BgL_aux3196z00_5702;
BgL_aux3196z00_5702 = BGl_za2nbzd2genericszd2maxza2z00zz__objectz00; 
if(
INTEGERP(BgL_aux3196z00_5702))
{ /* Llib/object.scm 766 */
BgL_tmpz00_7776 = BgL_aux3196z00_5702
; }  else 
{ 
obj_t BgL_auxz00_7779;
BgL_auxz00_7779 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)33478)), BGl_string3919z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3196z00_5702); 
FAILURE(BgL_auxz00_7779,BFALSE,BFALSE);} } 
BgL_tmpz00_7775 = 
(long)CINT(BgL_tmpz00_7776); } 
BGl_za2genericsza2z00zz__objectz00 = 
make_vector_uncollectable(BgL_tmpz00_7775, BFALSE); } 
if(
PAIRP(BGl_za2classzd2keyza2zd2zz__objectz00))
{ /* Llib/object.scm 767 */
return BFALSE;}  else 
{ /* Llib/object.scm 767 */
return ( 
BGl_za2classzd2keyza2zd2zz__objectz00 = 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
BINT(((long)2))), BUNSPEC) ;} } } 

}



/* extend-vector */
obj_t BGl_extendzd2vectorzd2zz__objectz00(obj_t BgL_oldzd2veczd2_71, obj_t BgL_fillz00_72, long BgL_extendz00_73)
{
{ /* Llib/object.scm 772 */
{ /* Llib/object.scm 773 */
long BgL_oldzd2lenzd2_1302;
{ /* Llib/object.scm 773 */
obj_t BgL_vectorz00_3027;
if(
VECTORP(BgL_oldzd2veczd2_71))
{ /* Llib/object.scm 773 */
BgL_vectorz00_3027 = BgL_oldzd2veczd2_71; }  else 
{ 
obj_t BgL_auxz00_7792;
BgL_auxz00_7792 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)33869)), BGl_string3920z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_oldzd2veczd2_71); 
FAILURE(BgL_auxz00_7792,BFALSE,BFALSE);} 
BgL_oldzd2lenzd2_1302 = 
VECTOR_LENGTH(BgL_vectorz00_3027); } 
{ /* Llib/object.scm 773 */
long BgL_newzd2lenzd2_1303;
BgL_newzd2lenzd2_1303 = 
(BgL_extendz00_73+BgL_oldzd2lenzd2_1302); 
{ /* Llib/object.scm 774 */
obj_t BgL_newzd2veczd2_1304;
BgL_newzd2veczd2_1304 = 
make_vector_uncollectable(BgL_newzd2lenzd2_1303, BgL_fillz00_72); 
{ /* Llib/object.scm 775 */

{ 
long BgL_iz00_1306;
BgL_iz00_1306 = ((long)0); 
BgL_zc3z04anonymousza31537ze3z87_1307:
if(
(BgL_iz00_1306==BgL_oldzd2lenzd2_1302))
{ /* Llib/object.scm 777 */
return BgL_newzd2veczd2_1304;}  else 
{ /* Llib/object.scm 777 */
{ /* Llib/object.scm 780 */
obj_t BgL_arg1540z00_1309;
{ /* Llib/object.scm 780 */
obj_t BgL_vectorz00_3034;
if(
VECTORP(BgL_oldzd2veczd2_71))
{ /* Llib/object.scm 780 */
BgL_vectorz00_3034 = BgL_oldzd2veczd2_71; }  else 
{ 
obj_t BgL_auxz00_7803;
BgL_auxz00_7803 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)34085)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_oldzd2veczd2_71); 
FAILURE(BgL_auxz00_7803,BFALSE,BFALSE);} 
BgL_arg1540z00_1309 = 
VECTOR_REF(BgL_vectorz00_3034,BgL_iz00_1306); } 
VECTOR_SET(BgL_newzd2veczd2_1304,BgL_iz00_1306,BgL_arg1540z00_1309); } 
{ 
long BgL_iz00_7809;
BgL_iz00_7809 = 
(BgL_iz00_1306+((long)1)); 
BgL_iz00_1306 = BgL_iz00_7809; 
goto BgL_zc3z04anonymousza31537ze3z87_1307;} } } } } } } } 

}



/* double-nb-classes! */
bool_t BGl_doublezd2nbzd2classesz12z12zz__objectz00()
{
{ /* Llib/object.scm 794 */
{ /* Llib/object.scm 795 */
long BgL_za72za7_3043;
{ /* Llib/object.scm 795 */
obj_t BgL_tmpz00_7811;
{ /* Llib/object.scm 795 */
obj_t BgL_aux3202z00_5708;
BgL_aux3202z00_5708 = BGl_za2nbzd2classeszd2maxza2z00zz__objectz00; 
if(
INTEGERP(BgL_aux3202z00_5708))
{ /* Llib/object.scm 795 */
BgL_tmpz00_7811 = BgL_aux3202z00_5708
; }  else 
{ 
obj_t BgL_auxz00_7814;
BgL_auxz00_7814 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)34805)), BGl_string3921z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3202z00_5708); 
FAILURE(BgL_auxz00_7814,BFALSE,BFALSE);} } 
BgL_za72za7_3043 = 
(long)CINT(BgL_tmpz00_7811); } 
BGl_za2nbzd2classeszd2maxza2z00zz__objectz00 = 
BINT(
(((long)2)*BgL_za72za7_3043)); } 
{ /* Llib/object.scm 796 */
obj_t BgL_oldzd2veczd2_3045;
BgL_oldzd2veczd2_3045 = BGl_za2classesza2z00zz__objectz00; 
{ /* Llib/object.scm 787 */
obj_t BgL_newzd2veczd2_3046;
{ /* Llib/object.scm 787 */
long BgL_arg1542z00_3047;
{ /* Llib/object.scm 787 */
obj_t BgL_vectorz00_3048;
if(
VECTORP(BgL_oldzd2veczd2_3045))
{ /* Llib/object.scm 787 */
BgL_vectorz00_3048 = BgL_oldzd2veczd2_3045; }  else 
{ 
obj_t BgL_auxz00_7823;
BgL_auxz00_7823 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)34443)), BGl_string3921z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_oldzd2veczd2_3045); 
FAILURE(BgL_auxz00_7823,BFALSE,BFALSE);} 
BgL_arg1542z00_3047 = 
VECTOR_LENGTH(BgL_vectorz00_3048); } 
BgL_newzd2veczd2_3046 = 
BGl_extendzd2vectorzd2zz__objectz00(BgL_oldzd2veczd2_3045, BFALSE, BgL_arg1542z00_3047); } 
{ /* Llib/object.scm 788 */
obj_t BgL_tmpz00_7829;
if(
VECTORP(BgL_oldzd2veczd2_3045))
{ /* Llib/object.scm 788 */
BgL_tmpz00_7829 = BgL_oldzd2veczd2_3045
; }  else 
{ 
obj_t BgL_auxz00_7832;
BgL_auxz00_7832 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)34489)), BGl_string3921z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_oldzd2veczd2_3045); 
FAILURE(BgL_auxz00_7832,BFALSE,BFALSE);} 
FREE_VECTOR_UNCOLLECTABLE(BgL_tmpz00_7829); } BUNSPEC; 
BGl_za2classesza2z00zz__objectz00 = BgL_newzd2veczd2_3046; } } 
{ 
long BgL_iz00_1315;
BgL_iz00_1315 = ((long)0); 
BgL_zc3z04anonymousza31543ze3z87_1316:
{ /* Llib/object.scm 799 */
bool_t BgL_test4976z00_7837;
{ /* Llib/object.scm 799 */
long BgL_n2z00_3050;
{ /* Llib/object.scm 799 */
obj_t BgL_tmpz00_7838;
{ /* Llib/object.scm 799 */
obj_t BgL_aux3208z00_5714;
BgL_aux3208z00_5714 = BGl_za2nbzd2genericsza2zd2zz__objectz00; 
if(
INTEGERP(BgL_aux3208z00_5714))
{ /* Llib/object.scm 799 */
BgL_tmpz00_7838 = BgL_aux3208z00_5714
; }  else 
{ 
obj_t BgL_auxz00_7841;
BgL_auxz00_7841 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)34974)), BGl_string3839z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3208z00_5714); 
FAILURE(BgL_auxz00_7841,BFALSE,BFALSE);} } 
BgL_n2z00_3050 = 
(long)CINT(BgL_tmpz00_7838); } 
BgL_test4976z00_7837 = 
(BgL_iz00_1315<BgL_n2z00_3050); } 
if(BgL_test4976z00_7837)
{ /* Llib/object.scm 800 */
obj_t BgL_genz00_1318;
{ /* Llib/object.scm 800 */
obj_t BgL_vectorz00_3052;
{ /* Llib/object.scm 800 */
obj_t BgL_aux3210z00_5716;
BgL_aux3210z00_5716 = BGl_za2genericsza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3210z00_5716))
{ /* Llib/object.scm 800 */
BgL_vectorz00_3052 = BgL_aux3210z00_5716; }  else 
{ 
obj_t BgL_auxz00_7849;
BgL_auxz00_7849 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)35018)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3210z00_5716); 
FAILURE(BgL_auxz00_7849,BFALSE,BFALSE);} } 
BgL_genz00_1318 = 
VECTOR_REF(BgL_vectorz00_3052,BgL_iz00_1315); } 
{ /* Llib/object.scm 800 */
obj_t BgL_defaultzd2bucketzd2_1319;
{ /* Llib/object.scm 801 */
obj_t BgL_res2589z00_3054;
{ /* Llib/object.scm 862 */
obj_t BgL_aux3214z00_5720;
{ /* Llib/object.scm 862 */
obj_t BgL_tmpz00_7854;
if(
PROCEDUREP(BgL_genz00_1318))
{ /* Llib/object.scm 862 */
BgL_tmpz00_7854 = BgL_genz00_1318
; }  else 
{ 
obj_t BgL_auxz00_7857;
BgL_auxz00_7857 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)37952)), BGl_string3839z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genz00_1318); 
FAILURE(BgL_auxz00_7857,BFALSE,BFALSE);} 
BgL_aux3214z00_5720 = 
PROCEDURE_REF(BgL_tmpz00_7854, 
(int)(((long)2))); } 
if(
VECTORP(BgL_aux3214z00_5720))
{ /* Llib/object.scm 862 */
BgL_res2589z00_3054 = BgL_aux3214z00_5720; }  else 
{ 
obj_t BgL_auxz00_7865;
BgL_auxz00_7865 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)37937)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3214z00_5720); 
FAILURE(BgL_auxz00_7865,BFALSE,BFALSE);} } 
BgL_defaultzd2bucketzd2_1319 = BgL_res2589z00_3054; } 
{ /* Llib/object.scm 801 */
obj_t BgL_oldzd2methodzd2arrayz00_1320;
{ /* Llib/object.scm 802 */
obj_t BgL_genericz00_3055;
if(
PROCEDUREP(BgL_genz00_1318))
{ /* Llib/object.scm 802 */
BgL_genericz00_3055 = BgL_genz00_1318; }  else 
{ 
obj_t BgL_auxz00_7871;
BgL_auxz00_7871 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)35123)), BGl_string3839z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genz00_1318); 
FAILURE(BgL_auxz00_7871,BFALSE,BFALSE);} 
BgL_oldzd2methodzd2arrayz00_1320 = 
PROCEDURE_REF(BgL_genericz00_3055, 
(int)(((long)1))); } 
{ /* Llib/object.scm 802 */

{ /* Llib/object.scm 805 */
obj_t BgL_arg1545z00_1321;
{ /* Llib/object.scm 787 */
obj_t BgL_newzd2veczd2_3056;
{ /* Llib/object.scm 787 */
long BgL_arg1542z00_3057;
{ /* Llib/object.scm 787 */
obj_t BgL_vectorz00_3058;
if(
VECTORP(BgL_oldzd2methodzd2arrayz00_1320))
{ /* Llib/object.scm 787 */
BgL_vectorz00_3058 = BgL_oldzd2methodzd2arrayz00_1320; }  else 
{ 
obj_t BgL_auxz00_7879;
BgL_auxz00_7879 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)34443)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_oldzd2methodzd2arrayz00_1320); 
FAILURE(BgL_auxz00_7879,BFALSE,BFALSE);} 
BgL_arg1542z00_3057 = 
VECTOR_LENGTH(BgL_vectorz00_3058); } 
BgL_newzd2veczd2_3056 = 
BGl_extendzd2vectorzd2zz__objectz00(BgL_oldzd2methodzd2arrayz00_1320, BgL_defaultzd2bucketzd2_1319, BgL_arg1542z00_3057); } 
{ /* Llib/object.scm 788 */
obj_t BgL_tmpz00_7885;
if(
VECTORP(BgL_oldzd2methodzd2arrayz00_1320))
{ /* Llib/object.scm 788 */
BgL_tmpz00_7885 = BgL_oldzd2methodzd2arrayz00_1320
; }  else 
{ 
obj_t BgL_auxz00_7888;
BgL_auxz00_7888 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)34489)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_oldzd2methodzd2arrayz00_1320); 
FAILURE(BgL_auxz00_7888,BFALSE,BFALSE);} 
FREE_VECTOR_UNCOLLECTABLE(BgL_tmpz00_7885); } BUNSPEC; 
BgL_arg1545z00_1321 = BgL_newzd2veczd2_3056; } 
{ /* Llib/object.scm 803 */
obj_t BgL_genericz00_3059;
if(
PROCEDUREP(BgL_genz00_1318))
{ /* Llib/object.scm 804 */
BgL_genericz00_3059 = BgL_genz00_1318; }  else 
{ 
obj_t BgL_auxz00_7895;
BgL_auxz00_7895 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)35168)), BGl_string3839z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genz00_1318); 
FAILURE(BgL_auxz00_7895,BFALSE,BFALSE);} 
PROCEDURE_SET(BgL_genericz00_3059, 
(int)(((long)1)), BgL_arg1545z00_1321); } } 
{ 
long BgL_iz00_7901;
BgL_iz00_7901 = 
(BgL_iz00_1315+((long)1)); 
BgL_iz00_1315 = BgL_iz00_7901; 
goto BgL_zc3z04anonymousza31543ze3z87_1316;} } } } }  else 
{ /* Llib/object.scm 799 */
return ((bool_t)0);} } } } 

}



/* double-nb-generics! */
obj_t BGl_doublezd2nbzd2genericsz12z12zz__objectz00()
{
{ /* Llib/object.scm 811 */
{ /* Llib/object.scm 812 */
long BgL_za72za7_3063;
{ /* Llib/object.scm 812 */
obj_t BgL_tmpz00_7903;
{ /* Llib/object.scm 812 */
obj_t BgL_aux3224z00_5730;
BgL_aux3224z00_5730 = BGl_za2nbzd2genericszd2maxza2z00zz__objectz00; 
if(
INTEGERP(BgL_aux3224z00_5730))
{ /* Llib/object.scm 812 */
BgL_tmpz00_7903 = BgL_aux3224z00_5730
; }  else 
{ 
obj_t BgL_auxz00_7906;
BgL_auxz00_7906 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)35541)), BGl_string3922z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3224z00_5730); 
FAILURE(BgL_auxz00_7906,BFALSE,BFALSE);} } 
BgL_za72za7_3063 = 
(long)CINT(BgL_tmpz00_7903); } 
BGl_za2nbzd2genericszd2maxza2z00zz__objectz00 = 
BINT(
(((long)2)*BgL_za72za7_3063)); } 
{ /* Llib/object.scm 813 */
obj_t BgL_oldzd2veczd2_3065;
BgL_oldzd2veczd2_3065 = BGl_za2genericsza2z00zz__objectz00; 
{ /* Llib/object.scm 787 */
obj_t BgL_newzd2veczd2_3066;
{ /* Llib/object.scm 787 */
long BgL_arg1542z00_3067;
{ /* Llib/object.scm 787 */
obj_t BgL_vectorz00_3068;
if(
VECTORP(BgL_oldzd2veczd2_3065))
{ /* Llib/object.scm 787 */
BgL_vectorz00_3068 = BgL_oldzd2veczd2_3065; }  else 
{ 
obj_t BgL_auxz00_7915;
BgL_auxz00_7915 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)34443)), BGl_string3922z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_oldzd2veczd2_3065); 
FAILURE(BgL_auxz00_7915,BFALSE,BFALSE);} 
BgL_arg1542z00_3067 = 
VECTOR_LENGTH(BgL_vectorz00_3068); } 
BgL_newzd2veczd2_3066 = 
BGl_extendzd2vectorzd2zz__objectz00(BgL_oldzd2veczd2_3065, BFALSE, BgL_arg1542z00_3067); } 
{ /* Llib/object.scm 788 */
obj_t BgL_tmpz00_7921;
if(
VECTORP(BgL_oldzd2veczd2_3065))
{ /* Llib/object.scm 788 */
BgL_tmpz00_7921 = BgL_oldzd2veczd2_3065
; }  else 
{ 
obj_t BgL_auxz00_7924;
BgL_auxz00_7924 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)34489)), BGl_string3922z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_oldzd2veczd2_3065); 
FAILURE(BgL_auxz00_7924,BFALSE,BFALSE);} 
FREE_VECTOR_UNCOLLECTABLE(BgL_tmpz00_7921); } BUNSPEC; 
return ( 
BGl_za2genericsza2z00zz__objectz00 = BgL_newzd2veczd2_3066, BUNSPEC) ;} } } 

}



/* object? */
BGL_EXPORTED_DEF bool_t BGl_objectzf3zf3zz__objectz00(obj_t BgL_objz00_76)
{
{ /* Llib/object.scm 818 */
return 
BGL_OBJECTP(BgL_objz00_76);} 

}



/* &object? */
obj_t BGl_z62objectzf3z91zz__objectz00(obj_t BgL_envz00_4986, obj_t BgL_objz00_4987)
{
{ /* Llib/object.scm 818 */
return 
BBOOL(
BGl_objectzf3zf3zz__objectz00(BgL_objz00_4987));} 

}



/* object-class-num */
BGL_EXPORTED_DEF long BGl_objectzd2classzd2numz00zz__objectz00(BgL_objectz00_bglt BgL_objz00_77)
{
{ /* Llib/object.scm 824 */
return 
BGL_OBJECT_CLASS_NUM(BgL_objz00_77);} 

}



/* &object-class-num */
obj_t BGl_z62objectzd2classzd2numz62zz__objectz00(obj_t BgL_envz00_4988, obj_t BgL_objz00_4989)
{
{ /* Llib/object.scm 824 */
{ /* Llib/object.scm 825 */
long BgL_tmpz00_7933;
{ /* Llib/object.scm 825 */
BgL_objectz00_bglt BgL_auxz00_7934;
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_4989, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 825 */
BgL_auxz00_7934 = 
((BgL_objectz00_bglt)BgL_objz00_4989)
; }  else 
{ 
obj_t BgL_auxz00_7938;
BgL_auxz00_7938 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)36157)), BGl_string3923z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_4989); 
FAILURE(BgL_auxz00_7938,BFALSE,BFALSE);} 
BgL_tmpz00_7933 = 
BGl_objectzd2classzd2numz00zz__objectz00(BgL_auxz00_7934); } 
return 
BINT(BgL_tmpz00_7933);} } 

}



/* object-class-num-set! */
BGL_EXPORTED_DEF obj_t BGl_objectzd2classzd2numzd2setz12zc0zz__objectz00(BgL_objectz00_bglt BgL_objz00_78, long BgL_numz00_79)
{
{ /* Llib/object.scm 830 */
return 
BGL_OBJECT_CLASS_NUM_SET(BgL_objz00_78, BgL_numz00_79);} 

}



/* &object-class-num-set! */
obj_t BGl_z62objectzd2classzd2numzd2setz12za2zz__objectz00(obj_t BgL_envz00_4990, obj_t BgL_objz00_4991, obj_t BgL_numz00_4992)
{
{ /* Llib/object.scm 830 */
{ /* Llib/object.scm 831 */
long BgL_auxz00_7953;BgL_objectz00_bglt BgL_auxz00_7945;
{ /* Llib/object.scm 831 */
obj_t BgL_tmpz00_7954;
if(
INTEGERP(BgL_numz00_4992))
{ /* Llib/object.scm 831 */
BgL_tmpz00_7954 = BgL_numz00_4992
; }  else 
{ 
obj_t BgL_auxz00_7957;
BgL_auxz00_7957 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)36469)), BGl_string3925z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_numz00_4992); 
FAILURE(BgL_auxz00_7957,BFALSE,BFALSE);} 
BgL_auxz00_7953 = 
(long)CINT(BgL_tmpz00_7954); } 
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_4991, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 831 */
BgL_auxz00_7945 = 
((BgL_objectz00_bglt)BgL_objz00_4991)
; }  else 
{ 
obj_t BgL_auxz00_7949;
BgL_auxz00_7949 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)36469)), BGl_string3925z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_4991); 
FAILURE(BgL_auxz00_7949,BFALSE,BFALSE);} 
return 
BGl_objectzd2classzd2numzd2setz12zc0zz__objectz00(BgL_auxz00_7945, BgL_auxz00_7953);} } 

}



/* object-class */
BGL_EXPORTED_DEF obj_t BGl_objectzd2classzd2zz__objectz00(BgL_objectz00_bglt BgL_objectz00_80)
{
{ /* Llib/object.scm 836 */
{ /* Llib/object.scm 838 */
long BgL_arg1547z00_6534;
{ /* Llib/object.scm 838 */
long BgL_arg1551z00_6535;
{ /* Llib/object.scm 838 */
long BgL_res2592z00_6536;
BgL_res2592z00_6536 = 
BGL_OBJECT_CLASS_NUM(BgL_objectz00_80); 
BgL_arg1551z00_6535 = BgL_res2592z00_6536; } 
BgL_arg1547z00_6534 = 
(BgL_arg1551z00_6535-OBJECT_TYPE); } 
{ /* Llib/object.scm 837 */
obj_t BgL_vectorz00_6537;
{ /* Llib/object.scm 837 */
obj_t BgL_aux3236z00_6538;
BgL_aux3236z00_6538 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3236z00_6538))
{ /* Llib/object.scm 837 */
BgL_vectorz00_6537 = BgL_aux3236z00_6538; }  else 
{ 
obj_t BgL_auxz00_7967;
BgL_auxz00_7967 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)36789)), BGl_string3926z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3236z00_6538); 
FAILURE(BgL_auxz00_7967,BFALSE,BFALSE);} } 
return 
VECTOR_REF(BgL_vectorz00_6537,BgL_arg1547z00_6534);} } } 

}



/* &object-class */
obj_t BGl_z62objectzd2classzb0zz__objectz00(obj_t BgL_envz00_4993, obj_t BgL_objectz00_4994)
{
{ /* Llib/object.scm 836 */
{ /* Llib/object.scm 838 */
BgL_objectz00_bglt BgL_auxz00_7972;
if(
BGl_isazf3zf3zz__objectz00(BgL_objectz00_4994, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 838 */
BgL_auxz00_7972 = 
((BgL_objectz00_bglt)BgL_objectz00_4994)
; }  else 
{ 
obj_t BgL_auxz00_7976;
BgL_auxz00_7976 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)36810)), BGl_string3927z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objectz00_4994); 
FAILURE(BgL_auxz00_7976,BFALSE,BFALSE);} 
return 
BGl_objectzd2classzd2zz__objectz00(BgL_auxz00_7972);} } 

}



/* generic-default */
BGL_EXPORTED_DEF obj_t BGl_genericzd2defaultzd2zz__objectz00(obj_t BgL_genericz00_81)
{
{ /* Llib/object.scm 843 */
{ /* Llib/object.scm 844 */
obj_t BgL_aux3240z00_6539;
BgL_aux3240z00_6539 = 
PROCEDURE_REF(BgL_genericz00_81, 
(int)(((long)0))); 
if(
PROCEDUREP(BgL_aux3240z00_6539))
{ /* Llib/object.scm 844 */
return BgL_aux3240z00_6539;}  else 
{ 
obj_t BgL_auxz00_7985;
BgL_auxz00_7985 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)37126)), BGl_string3928z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3240z00_6539); 
FAILURE(BgL_auxz00_7985,BFALSE,BFALSE);} } } 

}



/* &generic-default */
obj_t BGl_z62genericzd2defaultzb0zz__objectz00(obj_t BgL_envz00_4995, obj_t BgL_genericz00_4996)
{
{ /* Llib/object.scm 843 */
{ /* Llib/object.scm 844 */
obj_t BgL_auxz00_7989;
if(
PROCEDUREP(BgL_genericz00_4996))
{ /* Llib/object.scm 844 */
BgL_auxz00_7989 = BgL_genericz00_4996
; }  else 
{ 
obj_t BgL_auxz00_7992;
BgL_auxz00_7992 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)37126)), BGl_string3929z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_4996); 
FAILURE(BgL_auxz00_7992,BFALSE,BFALSE);} 
return 
BGl_genericzd2defaultzd2zz__objectz00(BgL_auxz00_7989);} } 

}



/* generic-method-array */
BGL_EXPORTED_DEF obj_t BGl_genericzd2methodzd2arrayz00zz__objectz00(obj_t BgL_genericz00_84)
{
{ /* Llib/object.scm 852 */
return 
PROCEDURE_REF(BgL_genericz00_84, 
(int)(((long)1)));} 

}



/* &generic-method-array */
obj_t BGl_z62genericzd2methodzd2arrayz62zz__objectz00(obj_t BgL_envz00_4997, obj_t BgL_genericz00_4998)
{
{ /* Llib/object.scm 852 */
{ /* Llib/object.scm 853 */
obj_t BgL_auxz00_7999;
if(
PROCEDUREP(BgL_genericz00_4998))
{ /* Llib/object.scm 853 */
BgL_auxz00_7999 = BgL_genericz00_4998
; }  else 
{ 
obj_t BgL_auxz00_8002;
BgL_auxz00_8002 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)37519)), BGl_string3930z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_4998); 
FAILURE(BgL_auxz00_8002,BFALSE,BFALSE);} 
return 
BGl_genericzd2methodzd2arrayz00zz__objectz00(BgL_auxz00_7999);} } 

}



/* method-array-ref */
BGL_EXPORTED_DEF obj_t BGl_methodzd2arrayzd2refz00zz__objectz00(obj_t BgL_genericz00_90, obj_t BgL_arrayz00_91, int BgL_offsetz00_92)
{
{ /* Llib/object.scm 874 */
{ /* Llib/object.scm 875 */
long BgL_offsetz00_6540;
BgL_offsetz00_6540 = 
(
(long)(BgL_offsetz00_92)-OBJECT_TYPE); 
{ /* Llib/object.scm 875 */
long BgL_modz00_6541;
BgL_modz00_6541 = 
(BgL_offsetz00_6540 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/object.scm 876 */
long BgL_restz00_6542;
BgL_restz00_6542 = 
(BgL_offsetz00_6540 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/object.scm 877 */

{ /* Llib/object.scm 878 */
obj_t BgL_bucketz00_6543;
BgL_bucketz00_6543 = 
VECTOR_REF(BgL_arrayz00_91,BgL_modz00_6541); 
{ /* Llib/object.scm 879 */
obj_t BgL_vectorz00_6544;
if(
VECTORP(BgL_bucketz00_6543))
{ /* Llib/object.scm 879 */
BgL_vectorz00_6544 = BgL_bucketz00_6543; }  else 
{ 
obj_t BgL_auxz00_8026;
BgL_auxz00_8026 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)38897)), BGl_string3931z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_bucketz00_6543); 
FAILURE(BgL_auxz00_8026,BFALSE,BFALSE);} 
return 
VECTOR_REF(BgL_vectorz00_6544,BgL_restz00_6542);} } } } } } } 

}



/* &method-array-ref */
obj_t BGl_z62methodzd2arrayzd2refz62zz__objectz00(obj_t BgL_envz00_4999, obj_t BgL_genericz00_5000, obj_t BgL_arrayz00_5001, obj_t BgL_offsetz00_5002)
{
{ /* Llib/object.scm 874 */
{ /* Llib/object.scm 875 */
int BgL_auxz00_8045;obj_t BgL_auxz00_8038;obj_t BgL_auxz00_8031;
{ /* Llib/object.scm 875 */
obj_t BgL_tmpz00_8046;
if(
INTEGERP(BgL_offsetz00_5002))
{ /* Llib/object.scm 875 */
BgL_tmpz00_8046 = BgL_offsetz00_5002
; }  else 
{ 
obj_t BgL_auxz00_8049;
BgL_auxz00_8049 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)38672)), BGl_string3932z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_offsetz00_5002); 
FAILURE(BgL_auxz00_8049,BFALSE,BFALSE);} 
BgL_auxz00_8045 = 
CINT(BgL_tmpz00_8046); } 
if(
VECTORP(BgL_arrayz00_5001))
{ /* Llib/object.scm 875 */
BgL_auxz00_8038 = BgL_arrayz00_5001
; }  else 
{ 
obj_t BgL_auxz00_8041;
BgL_auxz00_8041 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)38672)), BGl_string3932z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_arrayz00_5001); 
FAILURE(BgL_auxz00_8041,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_genericz00_5000))
{ /* Llib/object.scm 875 */
BgL_auxz00_8031 = BgL_genericz00_5000
; }  else 
{ 
obj_t BgL_auxz00_8034;
BgL_auxz00_8034 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)38672)), BGl_string3932z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_5000); 
FAILURE(BgL_auxz00_8034,BFALSE,BFALSE);} 
return 
BGl_methodzd2arrayzd2refz00zz__objectz00(BgL_auxz00_8031, BgL_auxz00_8038, BgL_auxz00_8045);} } 

}



/* method-array-set! */
obj_t BGl_methodzd2arrayzd2setz12z12zz__objectz00(obj_t BgL_genericz00_93, obj_t BgL_arrayz00_94, long BgL_offsetz00_95, obj_t BgL_methodz00_96)
{
{ /* Llib/object.scm 884 */
{ /* Llib/object.scm 885 */
long BgL_offsetz00_1332;
BgL_offsetz00_1332 = 
(BgL_offsetz00_95-OBJECT_TYPE); 
{ /* Llib/object.scm 885 */
long BgL_modz00_1333;
{ /* Llib/object.scm 888 */
uint32_t BgL_arg1569z00_1353;
{ /* Llib/object.scm 888 */
uint32_t BgL_arg1570z00_1354;uint32_t BgL_arg1573z00_1355;
{ /* Llib/object.scm 888 */
uint32_t BgL_res2604z00_3111;
BgL_res2604z00_3111 = 
(uint32_t)(BgL_offsetz00_1332); 
BgL_arg1570z00_1354 = BgL_res2604z00_3111; } 
{ /* Llib/object.scm 889 */
int BgL_arg1574z00_1356;
BgL_arg1574z00_1356 = 
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))); 
{ /* Llib/object.scm 889 */
uint32_t BgL_res2608z00_3118;
{ /* Llib/object.scm 889 */
long BgL_tmpz00_8062;
BgL_tmpz00_8062 = 
(long)(BgL_arg1574z00_1356); 
BgL_res2608z00_3118 = 
(uint32_t)(BgL_tmpz00_8062); } 
BgL_arg1573z00_1355 = BgL_res2608z00_3118; } } 
{ /* Llib/object.scm 887 */
uint32_t BgL_res2609z00_3121;
{ /* Llib/object.scm 887 */
int32_t BgL_tmpz00_8065;
BgL_tmpz00_8065 = 
(int32_t)(BgL_arg1573z00_1355); 
BgL_res2609z00_3121 = 
(BgL_arg1570z00_1354/BgL_tmpz00_8065); } 
BgL_arg1569z00_1353 = BgL_res2609z00_3121; } } 
{ /* Llib/object.scm 886 */
long BgL_res2610z00_3123;
BgL_res2610z00_3123 = 
(long)(BgL_arg1569z00_1353); 
BgL_modz00_1333 = BgL_res2610z00_3123; } } 
{ /* Llib/object.scm 886 */
long BgL_restz00_1334;
{ /* Llib/object.scm 892 */
uint32_t BgL_arg1565z00_1349;
{ /* Llib/object.scm 892 */
uint32_t BgL_arg1566z00_1350;uint32_t BgL_arg1567z00_1351;
{ /* Llib/object.scm 892 */
uint32_t BgL_res2611z00_3125;
BgL_res2611z00_3125 = 
(uint32_t)(BgL_offsetz00_1332); 
BgL_arg1566z00_1350 = BgL_res2611z00_3125; } 
{ /* Llib/object.scm 893 */
int BgL_arg1568z00_1352;
BgL_arg1568z00_1352 = 
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))); 
{ /* Llib/object.scm 893 */
uint32_t BgL_res2615z00_3132;
{ /* Llib/object.scm 893 */
long BgL_tmpz00_8075;
BgL_tmpz00_8075 = 
(long)(BgL_arg1568z00_1352); 
BgL_res2615z00_3132 = 
(uint32_t)(BgL_tmpz00_8075); } 
BgL_arg1567z00_1351 = BgL_res2615z00_3132; } } 
{ /* Llib/object.scm 891 */
uint32_t BgL_res2616z00_3135;
{ /* Llib/object.scm 891 */
int32_t BgL_tmpz00_8078;
BgL_tmpz00_8078 = 
(int32_t)(BgL_arg1567z00_1351); 
BgL_res2616z00_3135 = 
(BgL_arg1566z00_1350%BgL_tmpz00_8078); } 
BgL_arg1565z00_1349 = BgL_res2616z00_3135; } } 
{ /* Llib/object.scm 890 */
long BgL_res2617z00_3137;
BgL_res2617z00_3137 = 
(long)(BgL_arg1565z00_1349); 
BgL_restz00_1334 = BgL_res2617z00_3137; } } 
{ /* Llib/object.scm 890 */

{ /* Llib/object.scm 894 */
obj_t BgL_bucketz00_1335;
{ /* Llib/object.scm 894 */
obj_t BgL_vectorz00_3138;
if(
VECTORP(BgL_arrayz00_94))
{ /* Llib/object.scm 894 */
BgL_vectorz00_3138 = BgL_arrayz00_94; }  else 
{ 
obj_t BgL_auxz00_8084;
BgL_auxz00_8084 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)39541)), BGl_string3933z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_arrayz00_94); 
FAILURE(BgL_auxz00_8084,BFALSE,BFALSE);} 
BgL_bucketz00_1335 = 
VECTOR_REF(BgL_vectorz00_3138,BgL_modz00_1333); } 
{ /* Llib/object.scm 895 */
bool_t BgL_test5001z00_8089;
{ /* Llib/object.scm 895 */
bool_t BgL_test5002z00_8090;
{ /* Llib/object.scm 895 */
obj_t BgL_tmpz00_8091;
{ /* Llib/object.scm 895 */
obj_t BgL_res2618z00_3141;
{ /* Llib/object.scm 895 */
obj_t BgL_genericz00_3140;
if(
PROCEDUREP(BgL_genericz00_93))
{ /* Llib/object.scm 895 */
BgL_genericz00_3140 = BgL_genericz00_93; }  else 
{ 
obj_t BgL_auxz00_8094;
BgL_auxz00_8094 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)39593)), BGl_string3933z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_93); 
FAILURE(BgL_auxz00_8094,BFALSE,BFALSE);} 
{ /* Llib/object.scm 844 */
obj_t BgL_aux3258z00_5770;
BgL_aux3258z00_5770 = 
PROCEDURE_REF(BgL_genericz00_3140, 
(int)(((long)0))); 
if(
PROCEDUREP(BgL_aux3258z00_5770))
{ /* Llib/object.scm 844 */
BgL_res2618z00_3141 = BgL_aux3258z00_5770; }  else 
{ 
obj_t BgL_auxz00_8102;
BgL_auxz00_8102 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)37126)), BGl_string3933z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3258z00_5770); 
FAILURE(BgL_auxz00_8102,BFALSE,BFALSE);} } } 
BgL_tmpz00_8091 = BgL_res2618z00_3141; } 
BgL_test5002z00_8090 = 
(BgL_methodz00_96==BgL_tmpz00_8091); } 
if(BgL_test5002z00_8090)
{ /* Llib/object.scm 895 */
BgL_test5001z00_8089 = ((bool_t)1)
; }  else 
{ /* Llib/object.scm 896 */
bool_t BgL_test5005z00_8107;
{ /* Llib/object.scm 896 */
obj_t BgL_tmpz00_8108;
{ /* Llib/object.scm 896 */
obj_t BgL_res2619z00_3142;
{ /* Llib/object.scm 862 */
obj_t BgL_aux3262z00_5774;
{ /* Llib/object.scm 862 */
obj_t BgL_tmpz00_8109;
if(
PROCEDUREP(BgL_genericz00_93))
{ /* Llib/object.scm 862 */
BgL_tmpz00_8109 = BgL_genericz00_93
; }  else 
{ 
obj_t BgL_auxz00_8112;
BgL_auxz00_8112 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)37952)), BGl_string3933z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_93); 
FAILURE(BgL_auxz00_8112,BFALSE,BFALSE);} 
BgL_aux3262z00_5774 = 
PROCEDURE_REF(BgL_tmpz00_8109, 
(int)(((long)2))); } 
if(
VECTORP(BgL_aux3262z00_5774))
{ /* Llib/object.scm 862 */
BgL_res2619z00_3142 = BgL_aux3262z00_5774; }  else 
{ 
obj_t BgL_auxz00_8120;
BgL_auxz00_8120 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)37937)), BGl_string3933z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3262z00_5774); 
FAILURE(BgL_auxz00_8120,BFALSE,BFALSE);} } 
BgL_tmpz00_8108 = BgL_res2619z00_3142; } 
BgL_test5005z00_8107 = 
(BgL_bucketz00_1335==BgL_tmpz00_8108); } 
if(BgL_test5005z00_8107)
{ /* Llib/object.scm 896 */
BgL_test5001z00_8089 = ((bool_t)0)
; }  else 
{ /* Llib/object.scm 896 */
BgL_test5001z00_8089 = ((bool_t)1)
; } } } 
if(BgL_test5001z00_8089)
{ /* Llib/object.scm 898 */
obj_t BgL_vectorz00_3143;
if(
VECTORP(BgL_bucketz00_1335))
{ /* Llib/object.scm 898 */
BgL_vectorz00_3143 = BgL_bucketz00_1335; }  else 
{ 
obj_t BgL_auxz00_8127;
BgL_auxz00_8127 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)39723)), BGl_string3933z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_bucketz00_1335); 
FAILURE(BgL_auxz00_8127,BFALSE,BFALSE);} 
return 
VECTOR_SET(BgL_vectorz00_3143,BgL_restz00_1334,BgL_methodz00_96);}  else 
{ /* Llib/object.scm 900 */
obj_t BgL_bucketz00_1343;
{ /* Llib/object.scm 900 */
int BgL_arg1562z00_1344;
BgL_arg1562z00_1344 = 
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))); 
{ /* Llib/object.scm 900 */
obj_t BgL_auxz00_8137;
if(
VECTORP(BgL_bucketz00_1335))
{ /* Llib/object.scm 900 */
BgL_auxz00_8137 = BgL_bucketz00_1335
; }  else 
{ 
obj_t BgL_auxz00_8140;
BgL_auxz00_8140 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)39816)), BGl_string3933z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_bucketz00_1335); 
FAILURE(BgL_auxz00_8140,BFALSE,BFALSE);} 
BgL_bucketz00_1343 = 
BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(BgL_auxz00_8137, 
(long)(BgL_arg1562z00_1344)); } } 
VECTOR_SET(BgL_bucketz00_1343,BgL_restz00_1334,BgL_methodz00_96); 
{ /* Llib/object.scm 902 */
obj_t BgL_vectorz00_3152;
if(
VECTORP(BgL_arrayz00_94))
{ /* Llib/object.scm 902 */
BgL_vectorz00_3152 = BgL_arrayz00_94; }  else 
{ 
obj_t BgL_auxz00_8149;
BgL_auxz00_8149 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)39911)), BGl_string3933z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_arrayz00_94); 
FAILURE(BgL_auxz00_8149,BFALSE,BFALSE);} 
return 
VECTOR_SET(BgL_vectorz00_3152,BgL_modz00_1333,BgL_bucketz00_1343);} } } } } } } } } 

}



/* generic-memory-statistics */
BGL_EXPORTED_DEF obj_t BGl_genericzd2memoryzd2statisticsz00zz__objectz00()
{
{ /* Llib/object.scm 907 */
{ /* Llib/object.scm 909 */
obj_t BgL_top5012z00_8155;
BgL_top5012z00_8155 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(bigloo_generic_mutex); 
BGL_EXITD_PUSH_PROTECT(BgL_top5012z00_8155, bigloo_generic_mutex); BUNSPEC; 
{ /* Llib/object.scm 909 */
obj_t BgL_tmp5011z00_8154;
{ 
long BgL_gz00_1358;long BgL_siza7eza7_1359;
BgL_gz00_1358 = ((long)0); 
BgL_siza7eza7_1359 = ((long)0); 
BgL_zc3z04anonymousza31575ze3z87_1360:
{ /* Llib/object.scm 912 */
bool_t BgL_test5013z00_8159;
{ /* Llib/object.scm 912 */
long BgL_n2z00_3155;
{ /* Llib/object.scm 912 */
obj_t BgL_tmpz00_8160;
{ /* Llib/object.scm 912 */
obj_t BgL_aux3270z00_5782;
BgL_aux3270z00_5782 = BGl_za2nbzd2genericsza2zd2zz__objectz00; 
if(
INTEGERP(BgL_aux3270z00_5782))
{ /* Llib/object.scm 912 */
BgL_tmpz00_8160 = BgL_aux3270z00_5782
; }  else 
{ 
obj_t BgL_auxz00_8163;
BgL_auxz00_8163 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)40348)), BGl_string3839z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3270z00_5782); 
FAILURE(BgL_auxz00_8163,BFALSE,BFALSE);} } 
BgL_n2z00_3155 = 
(long)CINT(BgL_tmpz00_8160); } 
BgL_test5013z00_8159 = 
(BgL_gz00_1358==BgL_n2z00_3155); } 
if(BgL_test5013z00_8159)
{ /* Llib/object.scm 913 */
obj_t BgL_arg1577z00_1362;obj_t BgL_arg1578z00_1363;
{ /* Llib/object.scm 913 */
obj_t BgL_arg1579z00_1364;
BgL_arg1579z00_1364 = 
MAKE_YOUNG_PAIR(BGl_za2nbzd2genericsza2zd2zz__objectz00, BNIL); 
BgL_arg1577z00_1362 = 
MAKE_YOUNG_PAIR(BGl_symbol3934z00zz__objectz00, BgL_arg1579z00_1364); } 
{ /* Llib/object.scm 914 */
obj_t BgL_arg1580z00_1365;obj_t BgL_arg1582z00_1366;
{ /* Llib/object.scm 914 */
obj_t BgL_arg1583z00_1367;
BgL_arg1583z00_1367 = 
MAKE_YOUNG_PAIR(BGl_za2nbzd2classesza2zd2zz__objectz00, BNIL); 
BgL_arg1580z00_1365 = 
MAKE_YOUNG_PAIR(BGl_symbol3936z00zz__objectz00, BgL_arg1583z00_1367); } 
{ /* Llib/object.scm 915 */
obj_t BgL_arg1584z00_1368;obj_t BgL_arg1587z00_1369;
{ /* Llib/object.scm 915 */
obj_t BgL_arg1588z00_1370;
BgL_arg1588z00_1370 = 
MAKE_YOUNG_PAIR(
BINT(BgL_siza7eza7_1359), BNIL); 
BgL_arg1584z00_1368 = 
MAKE_YOUNG_PAIR(BGl_symbol3937z00zz__objectz00, BgL_arg1588z00_1370); } 
{ /* Llib/object.scm 918 */
obj_t BgL_arg1589z00_1371;obj_t BgL_arg1592z00_1372;
{ /* Llib/object.scm 918 */
obj_t BgL_arg1593z00_1373;
{ /* Llib/object.scm 918 */
long BgL_arg1596z00_1374;
{ /* Llib/object.scm 918 */
obj_t BgL_arg1597z00_1375;
{ /* Llib/object.scm 918 */
obj_t BgL_arg1598z00_1376;
{ /* Llib/object.scm 918 */
obj_t BgL_vectorz00_3157;
{ /* Llib/object.scm 918 */
obj_t BgL_aux3272z00_5784;
BgL_aux3272z00_5784 = BGl_za2genericsza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3272z00_5784))
{ /* Llib/object.scm 918 */
BgL_vectorz00_3157 = BgL_aux3272z00_5784; }  else 
{ 
obj_t BgL_auxz00_8178;
BgL_auxz00_8178 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)40550)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3272z00_5784); 
FAILURE(BgL_auxz00_8178,BFALSE,BFALSE);} } 
BgL_arg1598z00_1376 = 
VECTOR_REF(BgL_vectorz00_3157,((long)0)); } 
{ /* Llib/object.scm 917 */
obj_t BgL_genericz00_3158;
if(
PROCEDUREP(BgL_arg1598z00_1376))
{ /* Llib/object.scm 918 */
BgL_genericz00_3158 = BgL_arg1598z00_1376; }  else 
{ 
obj_t BgL_auxz00_8185;
BgL_auxz00_8185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)40562)), BGl_string3839z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_arg1598z00_1376); 
FAILURE(BgL_auxz00_8185,BFALSE,BFALSE);} 
BgL_arg1597z00_1375 = 
PROCEDURE_REF(BgL_genericz00_3158, 
(int)(((long)1))); } } 
{ /* Llib/object.scm 916 */
obj_t BgL_vectorz00_3159;
if(
VECTORP(BgL_arg1597z00_1375))
{ /* Llib/object.scm 918 */
BgL_vectorz00_3159 = BgL_arg1597z00_1375; }  else 
{ 
obj_t BgL_auxz00_8193;
BgL_auxz00_8193 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)40563)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_arg1597z00_1375); 
FAILURE(BgL_auxz00_8193,BFALSE,BFALSE);} 
BgL_arg1596z00_1374 = 
VECTOR_LENGTH(BgL_vectorz00_3159); } } 
BgL_arg1593z00_1373 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg1596z00_1374), BNIL); } 
BgL_arg1589z00_1371 = 
MAKE_YOUNG_PAIR(BGl_symbol3939z00zz__objectz00, BgL_arg1593z00_1373); } 
{ /* Llib/object.scm 919 */
obj_t BgL_arg1599z00_1377;obj_t BgL_arg1602z00_1378;
{ /* Llib/object.scm 919 */
obj_t BgL_arg1603z00_1379;
{ /* Llib/object.scm 919 */
int BgL_arg1604z00_1380;
BgL_arg1604z00_1380 = 
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))); 
BgL_arg1603z00_1379 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg1604z00_1380), BNIL); } 
BgL_arg1599z00_1377 = 
MAKE_YOUNG_PAIR(BGl_symbol3941z00zz__objectz00, BgL_arg1603z00_1379); } 
{ /* Llib/object.scm 920 */
obj_t BgL_arg1605z00_1381;obj_t BgL_arg1606z00_1382;
{ /* Llib/object.scm 920 */
obj_t BgL_arg1607z00_1383;
BgL_arg1607z00_1383 = 
MAKE_YOUNG_PAIR(BGl_za2nbzd2classeszd2maxza2z00zz__objectz00, BNIL); 
BgL_arg1605z00_1381 = 
MAKE_YOUNG_PAIR(BGl_symbol3943z00zz__objectz00, BgL_arg1607z00_1383); } 
{ /* Llib/object.scm 921 */
obj_t BgL_arg1608z00_1384;
{ /* Llib/object.scm 921 */
obj_t BgL_arg1611z00_1385;
BgL_arg1611z00_1385 = 
MAKE_YOUNG_PAIR(BGl_za2nbzd2genericszd2maxza2z00zz__objectz00, BNIL); 
BgL_arg1608z00_1384 = 
MAKE_YOUNG_PAIR(BGl_symbol3945z00zz__objectz00, BgL_arg1611z00_1385); } 
BgL_arg1606z00_1382 = 
MAKE_YOUNG_PAIR(BgL_arg1608z00_1384, BNIL); } 
BgL_arg1602z00_1378 = 
MAKE_YOUNG_PAIR(BgL_arg1605z00_1381, BgL_arg1606z00_1382); } 
BgL_arg1592z00_1372 = 
MAKE_YOUNG_PAIR(BgL_arg1599z00_1377, BgL_arg1602z00_1378); } 
BgL_arg1587z00_1369 = 
MAKE_YOUNG_PAIR(BgL_arg1589z00_1371, BgL_arg1592z00_1372); } 
BgL_arg1582z00_1366 = 
MAKE_YOUNG_PAIR(BgL_arg1584z00_1368, BgL_arg1587z00_1369); } 
BgL_arg1578z00_1363 = 
MAKE_YOUNG_PAIR(BgL_arg1580z00_1365, BgL_arg1582z00_1366); } 
BgL_tmp5011z00_8154 = 
MAKE_YOUNG_PAIR(BgL_arg1577z00_1362, BgL_arg1578z00_1363); }  else 
{ /* Llib/object.scm 922 */
obj_t BgL_genz00_1386;
{ /* Llib/object.scm 922 */
obj_t BgL_vectorz00_3165;
{ /* Llib/object.scm 922 */
obj_t BgL_aux3278z00_5790;
BgL_aux3278z00_5790 = BGl_za2genericsza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3278z00_5790))
{ /* Llib/object.scm 922 */
BgL_vectorz00_3165 = BgL_aux3278z00_5790; }  else 
{ 
obj_t BgL_auxz00_8222;
BgL_auxz00_8222 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)40740)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3278z00_5790); 
FAILURE(BgL_auxz00_8222,BFALSE,BFALSE);} } 
BgL_genz00_1386 = 
VECTOR_REF(BgL_vectorz00_3165,BgL_gz00_1358); } 
{ /* Llib/object.scm 922 */
obj_t BgL_dbuckz00_1387;
{ /* Llib/object.scm 923 */
obj_t BgL_res2627z00_3167;
{ /* Llib/object.scm 862 */
obj_t BgL_aux3282z00_5794;
{ /* Llib/object.scm 862 */
obj_t BgL_tmpz00_8227;
if(
PROCEDUREP(BgL_genz00_1386))
{ /* Llib/object.scm 862 */
BgL_tmpz00_8227 = BgL_genz00_1386
; }  else 
{ 
obj_t BgL_auxz00_8230;
BgL_auxz00_8230 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)37952)), BGl_string3839z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genz00_1386); 
FAILURE(BgL_auxz00_8230,BFALSE,BFALSE);} 
BgL_aux3282z00_5794 = 
PROCEDURE_REF(BgL_tmpz00_8227, 
(int)(((long)2))); } 
if(
VECTORP(BgL_aux3282z00_5794))
{ /* Llib/object.scm 862 */
BgL_res2627z00_3167 = BgL_aux3282z00_5794; }  else 
{ 
obj_t BgL_auxz00_8238;
BgL_auxz00_8238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)37937)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3282z00_5794); 
FAILURE(BgL_auxz00_8238,BFALSE,BFALSE);} } 
BgL_dbuckz00_1387 = BgL_res2627z00_3167; } 
{ /* Llib/object.scm 923 */
long BgL_dza7za7_1388;
BgL_dza7za7_1388 = ((long)0); 
{ /* Llib/object.scm 924 */
obj_t BgL_sza7za7_1389;
{ /* Llib/object.scm 925 */
obj_t BgL_runner1630z00_1415;
{ /* Llib/object.scm 925 */
obj_t BgL_l1314z00_1397;
{ /* Llib/object.scm 932 */
obj_t BgL_arg1629z00_1414;
{ /* Llib/object.scm 932 */
obj_t BgL_genericz00_3168;
if(
PROCEDUREP(BgL_genz00_1386))
{ /* Llib/object.scm 932 */
BgL_genericz00_3168 = BgL_genz00_1386; }  else 
{ 
obj_t BgL_auxz00_8244;
BgL_auxz00_8244 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)41040)), BGl_string3839z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genz00_1386); 
FAILURE(BgL_auxz00_8244,BFALSE,BFALSE);} 
BgL_arg1629z00_1414 = 
PROCEDURE_REF(BgL_genericz00_3168, 
(int)(((long)1))); } 
{ /* Llib/object.scm 932 */
obj_t BgL_auxz00_8250;
if(
VECTORP(BgL_arg1629z00_1414))
{ /* Llib/object.scm 932 */
BgL_auxz00_8250 = BgL_arg1629z00_1414
; }  else 
{ 
obj_t BgL_auxz00_8253;
BgL_auxz00_8253 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)41043)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_arg1629z00_1414); 
FAILURE(BgL_auxz00_8253,BFALSE,BFALSE);} 
BgL_l1314z00_1397 = 
BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(BgL_auxz00_8250); } } 
if(
NULLP(BgL_l1314z00_1397))
{ /* Llib/object.scm 925 */
BgL_runner1630z00_1415 = BNIL; }  else 
{ /* Llib/object.scm 925 */
obj_t BgL_head1316z00_1399;
{ /* Llib/object.scm 925 */
obj_t BgL_res2629z00_3170;
BgL_res2629z00_3170 = 
MAKE_YOUNG_PAIR(BNIL, BNIL); 
BgL_head1316z00_1399 = BgL_res2629z00_3170; } 
{ 
obj_t BgL_l1314z00_1401;obj_t BgL_tail1317z00_1402;
BgL_l1314z00_1401 = BgL_l1314z00_1397; 
BgL_tail1317z00_1402 = BgL_head1316z00_1399; 
BgL_zc3z04anonymousza31619ze3z87_1403:
if(
PAIRP(BgL_l1314z00_1401))
{ /* Llib/object.scm 925 */
obj_t BgL_newtail1318z00_1405;
{ /* Llib/object.scm 925 */
long BgL_arg1623z00_1407;
{ /* Llib/object.scm 925 */
obj_t BgL_bz00_1408;
BgL_bz00_1408 = 
CAR(BgL_l1314z00_1401); 
if(
(BgL_bz00_1408==BgL_dbuckz00_1387))
{ /* Llib/object.scm 927 */
{ /* Llib/object.scm 928 */
long BgL_arg1626z00_1410;
{ /* Llib/object.scm 928 */
obj_t BgL_vectorz00_3173;
if(
VECTORP(BgL_bz00_1408))
{ /* Llib/object.scm 928 */
BgL_vectorz00_3173 = BgL_bz00_1408; }  else 
{ 
obj_t BgL_auxz00_8268;
BgL_auxz00_8268 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)40922)), BGl_string3947z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_bz00_1408); 
FAILURE(BgL_auxz00_8268,BFALSE,BFALSE);} 
BgL_arg1626z00_1410 = 
VECTOR_LENGTH(BgL_vectorz00_3173); } 
BgL_dza7za7_1388 = 
(BgL_arg1626z00_1410*((long)4)); } 
BgL_arg1623z00_1407 = ((long)0); }  else 
{ /* Llib/object.scm 931 */
long BgL_arg1627z00_1411;
{ /* Llib/object.scm 931 */
obj_t BgL_vectorz00_3176;
if(
VECTORP(BgL_bz00_1408))
{ /* Llib/object.scm 931 */
BgL_vectorz00_3176 = BgL_bz00_1408; }  else 
{ 
obj_t BgL_auxz00_8276;
BgL_auxz00_8276 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)40989)), BGl_string3947z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_bz00_1408); 
FAILURE(BgL_auxz00_8276,BFALSE,BFALSE);} 
BgL_arg1627z00_1411 = 
VECTOR_LENGTH(BgL_vectorz00_3176); } 
BgL_arg1623z00_1407 = 
(((long)4)*BgL_arg1627z00_1411); } } 
{ /* Llib/object.scm 925 */
obj_t BgL_res2633z00_3179;
BgL_res2633z00_3179 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg1623z00_1407), BNIL); 
BgL_newtail1318z00_1405 = BgL_res2633z00_3179; } } 
SET_CDR(BgL_tail1317z00_1402, BgL_newtail1318z00_1405); 
{ 
obj_t BgL_tail1317z00_8287;obj_t BgL_l1314z00_8285;
BgL_l1314z00_8285 = 
CDR(BgL_l1314z00_1401); 
BgL_tail1317z00_8287 = BgL_newtail1318z00_1405; 
BgL_tail1317z00_1402 = BgL_tail1317z00_8287; 
BgL_l1314z00_1401 = BgL_l1314z00_8285; 
goto BgL_zc3z04anonymousza31619ze3z87_1403;} }  else 
{ /* Llib/object.scm 925 */
if(
NULLP(BgL_l1314z00_1401))
{ /* Llib/object.scm 925 */
BgL_runner1630z00_1415 = 
CDR(BgL_head1316z00_1399); }  else 
{ /* Llib/object.scm 925 */
BgL_runner1630z00_1415 = 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string3948z00zz__objectz00, BGl_string3949z00zz__objectz00, BgL_l1314z00_1401, BGl_string3838z00zz__objectz00, 
BINT(((long)40830))); } } } } } 
BgL_sza7za7_1389 = 
BGl_zb2zb2zz__r4_numbers_6_5z00(BgL_runner1630z00_1415); } 
{ /* Llib/object.scm 925 */
long BgL_bza7za7_1390;
{ /* Llib/object.scm 933 */
long BgL_arg1616z00_1395;
{ /* Llib/object.scm 933 */
obj_t BgL_arg1617z00_1396;
{ /* Llib/object.scm 933 */
obj_t BgL_genericz00_3184;
if(
PROCEDUREP(BgL_genz00_1386))
{ /* Llib/object.scm 933 */
BgL_genericz00_3184 = BgL_genz00_1386; }  else 
{ 
obj_t BgL_auxz00_8296;
BgL_auxz00_8296 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)41103)), BGl_string3839z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genz00_1386); 
FAILURE(BgL_auxz00_8296,BFALSE,BFALSE);} 
BgL_arg1617z00_1396 = 
PROCEDURE_REF(BgL_genericz00_3184, 
(int)(((long)1))); } 
{ /* Llib/object.scm 933 */
obj_t BgL_vectorz00_3185;
if(
VECTORP(BgL_arg1617z00_1396))
{ /* Llib/object.scm 933 */
BgL_vectorz00_3185 = BgL_arg1617z00_1396; }  else 
{ 
obj_t BgL_auxz00_8304;
BgL_auxz00_8304 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)41106)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_arg1617z00_1396); 
FAILURE(BgL_auxz00_8304,BFALSE,BFALSE);} 
BgL_arg1616z00_1395 = 
VECTOR_LENGTH(BgL_vectorz00_3185); } } 
BgL_bza7za7_1390 = 
(((long)4)*BgL_arg1616z00_1395); } 
{ /* Llib/object.scm 933 */

{ /* Llib/object.scm 934 */
long BgL_arg1612z00_1391;long BgL_arg1613z00_1392;
BgL_arg1612z00_1391 = 
(BgL_gz00_1358+((long)1)); 
{ /* Llib/object.scm 935 */
long BgL_arg1614z00_1393;
{ /* Llib/object.scm 935 */
long BgL_za72za7_3194;
{ /* Llib/object.scm 935 */
obj_t BgL_tmpz00_8311;
if(
INTEGERP(BgL_sza7za7_1389))
{ /* Llib/object.scm 935 */
BgL_tmpz00_8311 = BgL_sza7za7_1389
; }  else 
{ 
obj_t BgL_auxz00_8314;
BgL_auxz00_8314 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)41162)), BGl_string3839z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_sza7za7_1389); 
FAILURE(BgL_auxz00_8314,BFALSE,BFALSE);} 
BgL_za72za7_3194 = 
(long)CINT(BgL_tmpz00_8311); } 
BgL_arg1614z00_1393 = 
(
(BgL_bza7za7_1390+BgL_dza7za7_1388)+BgL_za72za7_3194); } 
BgL_arg1613z00_1392 = 
(BgL_siza7eza7_1359+BgL_arg1614z00_1393); } 
{ 
long BgL_siza7eza7_8323;long BgL_gz00_8322;
BgL_gz00_8322 = BgL_arg1612z00_1391; 
BgL_siza7eza7_8323 = BgL_arg1613z00_1392; 
BgL_siza7eza7_1359 = BgL_siza7eza7_8323; 
BgL_gz00_1358 = BgL_gz00_8322; 
goto BgL_zc3z04anonymousza31575ze3z87_1360;} } } } } } } } } } 
BGL_EXITD_POP_PROTECT(BgL_top5012z00_8155); BUNSPEC; 
BGL_MUTEX_UNLOCK(bigloo_generic_mutex); 
return BgL_tmp5011z00_8154;} } } 

}



/* &generic-memory-statistics */
obj_t BGl_z62genericzd2memoryzd2statisticsz62zz__objectz00(obj_t BgL_envz00_5003)
{
{ /* Llib/object.scm 907 */
return 
BGl_genericzd2memoryzd2statisticsz00zz__objectz00();} 

}



/* generics-add-class! */
bool_t BGl_genericszd2addzd2classz12z12zz__objectz00(long BgL_classzd2numzd2_97, long BgL_superzd2numzd2_98)
{
{ /* Llib/object.scm 942 */
{ 
long BgL_gz00_1418;
BgL_gz00_1418 = ((long)0); 
BgL_zc3z04anonymousza31631ze3z87_1419:
{ /* Llib/object.scm 944 */
bool_t BgL_test5032z00_8327;
{ /* Llib/object.scm 944 */
long BgL_n2z00_3200;
{ /* Llib/object.scm 944 */
obj_t BgL_tmpz00_8328;
{ /* Llib/object.scm 944 */
obj_t BgL_aux3298z00_5810;
BgL_aux3298z00_5810 = BGl_za2nbzd2genericsza2zd2zz__objectz00; 
if(
INTEGERP(BgL_aux3298z00_5810))
{ /* Llib/object.scm 944 */
BgL_tmpz00_8328 = BgL_aux3298z00_5810
; }  else 
{ 
obj_t BgL_auxz00_8331;
BgL_auxz00_8331 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)41637)), BGl_string3839z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3298z00_5810); 
FAILURE(BgL_auxz00_8331,BFALSE,BFALSE);} } 
BgL_n2z00_3200 = 
(long)CINT(BgL_tmpz00_8328); } 
BgL_test5032z00_8327 = 
(BgL_gz00_1418<BgL_n2z00_3200); } 
if(BgL_test5032z00_8327)
{ /* Llib/object.scm 945 */
obj_t BgL_genz00_1421;
{ /* Llib/object.scm 945 */
obj_t BgL_vectorz00_3202;
{ /* Llib/object.scm 945 */
obj_t BgL_aux3300z00_5812;
BgL_aux3300z00_5812 = BGl_za2genericsza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3300z00_5812))
{ /* Llib/object.scm 945 */
BgL_vectorz00_3202 = BgL_aux3300z00_5812; }  else 
{ 
obj_t BgL_auxz00_8339;
BgL_auxz00_8339 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)41681)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3300z00_5812); 
FAILURE(BgL_auxz00_8339,BFALSE,BFALSE);} } 
BgL_genz00_1421 = 
VECTOR_REF(BgL_vectorz00_3202,BgL_gz00_1418); } 
{ /* Llib/object.scm 945 */
obj_t BgL_methodzd2arrayzd2_1422;
{ /* Llib/object.scm 946 */
obj_t BgL_genericz00_3204;
if(
PROCEDUREP(BgL_genz00_1421))
{ /* Llib/object.scm 946 */
BgL_genericz00_3204 = BgL_genz00_1421; }  else 
{ 
obj_t BgL_auxz00_8346;
BgL_auxz00_8346 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)41734)), BGl_string3839z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genz00_1421); 
FAILURE(BgL_auxz00_8346,BFALSE,BFALSE);} 
BgL_methodzd2arrayzd2_1422 = 
PROCEDURE_REF(BgL_genericz00_3204, 
(int)(((long)1))); } 
{ /* Llib/object.scm 946 */
obj_t BgL_methodz00_1423;
{ /* Llib/object.scm 947 */
obj_t BgL_arrayz00_3206;int BgL_offsetz00_3207;
if(
VECTORP(BgL_methodzd2arrayzd2_1422))
{ /* Llib/object.scm 947 */
BgL_arrayz00_3206 = BgL_methodzd2arrayzd2_1422; }  else 
{ 
obj_t BgL_auxz00_8354;
BgL_auxz00_8354 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)41772)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_methodzd2arrayzd2_1422); 
FAILURE(BgL_auxz00_8354,BFALSE,BFALSE);} 
BgL_offsetz00_3207 = 
(int)(BgL_superzd2numzd2_98); 
{ /* Llib/object.scm 875 */
long BgL_offsetz00_3208;
BgL_offsetz00_3208 = 
(
(long)(BgL_offsetz00_3207)-OBJECT_TYPE); 
{ /* Llib/object.scm 875 */
long BgL_modz00_3209;
BgL_modz00_3209 = 
(BgL_offsetz00_3208 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/object.scm 876 */
long BgL_restz00_3211;
BgL_restz00_3211 = 
(BgL_offsetz00_3208 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/object.scm 877 */

{ /* Llib/object.scm 878 */
obj_t BgL_bucketz00_3213;
BgL_bucketz00_3213 = 
VECTOR_REF(BgL_arrayz00_3206,BgL_modz00_3209); 
{ /* Llib/object.scm 879 */
obj_t BgL_vectorz00_3235;
if(
VECTORP(BgL_bucketz00_3213))
{ /* Llib/object.scm 879 */
BgL_vectorz00_3235 = BgL_bucketz00_3213; }  else 
{ 
obj_t BgL_auxz00_8378;
BgL_auxz00_8378 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)38897)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_bucketz00_3213); 
FAILURE(BgL_auxz00_8378,BFALSE,BFALSE);} 
BgL_methodz00_1423 = 
VECTOR_REF(BgL_vectorz00_3235,BgL_restz00_3211); } } } } } } } 
{ /* Llib/object.scm 947 */

BGl_methodzd2arrayzd2setz12z12zz__objectz00(BgL_genz00_1421, BgL_methodzd2arrayzd2_1422, BgL_classzd2numzd2_97, BgL_methodz00_1423); 
{ 
long BgL_gz00_8384;
BgL_gz00_8384 = 
(BgL_gz00_1418+((long)1)); 
BgL_gz00_1418 = BgL_gz00_8384; 
goto BgL_zc3z04anonymousza31631ze3z87_1419;} } } } }  else 
{ /* Llib/object.scm 944 */
return ((bool_t)0);} } } } 

}



/* register-class! */
BGL_EXPORTED_DEF obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t BgL_namez00_99, obj_t BgL_modulez00_100, obj_t BgL_superz00_101, long BgL_hashz00_102, obj_t BgL_creatorz00_103, obj_t BgL_allocatorz00_104, obj_t BgL_constructorz00_105, obj_t BgL_nilz00_106, obj_t BgL_shrinkz00_107, obj_t BgL_plainz00_108, obj_t BgL_virtualz00_109)
{
{ /* Llib/object.scm 954 */
{ /* Llib/object.scm 955 */
obj_t BgL_top5039z00_8387;
BgL_top5039z00_8387 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(bigloo_generic_mutex); 
BGL_EXITD_PUSH_PROTECT(BgL_top5039z00_8387, bigloo_generic_mutex); BUNSPEC; 
{ /* Llib/object.scm 955 */
obj_t BgL_tmp5038z00_8386;
BGl_initializa7ezd2objectsz12z67zz__objectz00(); 
{ /* Llib/object.scm 957 */
bool_t BgL_test5040z00_8392;
if(
CBOOL(BgL_superz00_101))
{ /* Llib/object.scm 957 */
bool_t BgL_test5042z00_8395;
{ /* Llib/object.scm 957 */
bool_t BgL_res2651z00_3239;
BgL_res2651z00_3239 = 
BGL_CLASSP(BgL_superz00_101); 
BgL_test5042z00_8395 = BgL_res2651z00_3239; } 
if(BgL_test5042z00_8395)
{ /* Llib/object.scm 957 */
BgL_test5040z00_8392 = ((bool_t)0)
; }  else 
{ /* Llib/object.scm 957 */
BgL_test5040z00_8392 = ((bool_t)1)
; } }  else 
{ /* Llib/object.scm 957 */
BgL_test5040z00_8392 = ((bool_t)0)
; } 
if(BgL_test5040z00_8392)
{ /* Llib/object.scm 957 */
BGl_errorz00zz__errorz00(BgL_namez00_99, BGl_string3950z00zz__objectz00, BgL_superz00_101); }  else 
{ /* Llib/object.scm 957 */BFALSE; } } 
{ /* Llib/object.scm 959 */
bool_t BgL_test5043z00_8398;
{ /* Llib/object.scm 959 */
long BgL_n1z00_3240;long BgL_n2z00_3241;
{ /* Llib/object.scm 959 */
obj_t BgL_tmpz00_8399;
{ /* Llib/object.scm 959 */
obj_t BgL_aux3308z00_5820;
BgL_aux3308z00_5820 = BGl_za2nbzd2classesza2zd2zz__objectz00; 
if(
INTEGERP(BgL_aux3308z00_5820))
{ /* Llib/object.scm 959 */
BgL_tmpz00_8399 = BgL_aux3308z00_5820
; }  else 
{ 
obj_t BgL_auxz00_8402;
BgL_auxz00_8402 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)42392)), BGl_string3951z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3308z00_5820); 
FAILURE(BgL_auxz00_8402,BFALSE,BFALSE);} } 
BgL_n1z00_3240 = 
(long)CINT(BgL_tmpz00_8399); } 
{ /* Llib/object.scm 959 */
obj_t BgL_tmpz00_8407;
{ /* Llib/object.scm 959 */
obj_t BgL_aux3310z00_5822;
BgL_aux3310z00_5822 = BGl_za2nbzd2classeszd2maxza2z00zz__objectz00; 
if(
INTEGERP(BgL_aux3310z00_5822))
{ /* Llib/object.scm 959 */
BgL_tmpz00_8407 = BgL_aux3310z00_5822
; }  else 
{ 
obj_t BgL_auxz00_8410;
BgL_auxz00_8410 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)42405)), BGl_string3951z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3310z00_5822); 
FAILURE(BgL_auxz00_8410,BFALSE,BFALSE);} } 
BgL_n2z00_3241 = 
(long)CINT(BgL_tmpz00_8407); } 
BgL_test5043z00_8398 = 
(BgL_n1z00_3240==BgL_n2z00_3241); } 
if(BgL_test5043z00_8398)
{ /* Llib/object.scm 959 */
BGl_doublezd2nbzd2classesz12z12zz__objectz00(); }  else 
{ /* Llib/object.scm 959 */((bool_t)0); } } 
if(
VECTORP(BgL_plainz00_108))
{ /* Llib/object.scm 961 */BFALSE; }  else 
{ /* Llib/object.scm 961 */
BGl_errorz00zz__errorz00(BGl_string3951z00zz__objectz00, BGl_string3952z00zz__objectz00, BgL_plainz00_108); } 
{ /* Llib/object.scm 963 */
obj_t BgL_kz00_1431;
BgL_kz00_1431 = 
BGl_classzd2existszd2zz__objectz00(BgL_namez00_99); 
{ /* Llib/object.scm 964 */
bool_t BgL_test5047z00_8421;
{ /* Llib/object.scm 964 */
bool_t BgL_res2654z00_3244;
BgL_res2654z00_3244 = 
BGL_CLASSP(BgL_kz00_1431); 
BgL_test5047z00_8421 = BgL_res2654z00_3244; } 
if(BgL_test5047z00_8421)
{ /* Llib/object.scm 967 */
obj_t BgL_arg1639z00_1433;
{ /* Llib/object.scm 967 */
obj_t BgL_res2655z00_3246;
{ /* Llib/object.scm 967 */
obj_t BgL_classz00_3245;
if(
BGL_CLASSP(BgL_kz00_1431))
{ /* Llib/object.scm 967 */
BgL_classz00_3245 = BgL_kz00_1431; }  else 
{ 
obj_t BgL_auxz00_8425;
BgL_auxz00_8425 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)42719)), BGl_string3951z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_kz00_1431); 
FAILURE(BgL_auxz00_8425,BFALSE,BFALSE);} 
BgL_res2655z00_3246 = 
BGL_CLASS_MODULE(BgL_classz00_3245); } 
BgL_arg1639z00_1433 = BgL_res2655z00_3246; } 
{ /* Llib/object.scm 965 */
obj_t BgL_list1640z00_1434;
{ /* Llib/object.scm 965 */
obj_t BgL_arg1641z00_1435;
{ /* Llib/object.scm 965 */
obj_t BgL_arg1642z00_1436;
{ /* Llib/object.scm 965 */
obj_t BgL_arg1643z00_1437;
{ /* Llib/object.scm 965 */
obj_t BgL_arg1644z00_1438;
{ /* Llib/object.scm 965 */
obj_t BgL_arg1645z00_1439;
{ /* Llib/object.scm 965 */
obj_t BgL_arg1648z00_1440;
{ /* Llib/object.scm 965 */
obj_t BgL_arg1649z00_1441;
{ /* Llib/object.scm 965 */
obj_t BgL_arg1650z00_1442;
{ /* Llib/object.scm 965 */
obj_t BgL_arg1651z00_1443;
BgL_arg1651z00_1443 = 
MAKE_YOUNG_PAIR(BGl_string3953z00zz__objectz00, BNIL); 
BgL_arg1650z00_1442 = 
MAKE_YOUNG_PAIR(BgL_arg1639z00_1433, BgL_arg1651z00_1443); } 
BgL_arg1649z00_1441 = 
MAKE_YOUNG_PAIR(BGl_string3954z00zz__objectz00, BgL_arg1650z00_1442); } 
BgL_arg1648z00_1440 = 
MAKE_YOUNG_PAIR(BgL_namez00_99, BgL_arg1649z00_1441); } 
BgL_arg1645z00_1439 = 
MAKE_YOUNG_PAIR(BGl_string3955z00zz__objectz00, BgL_arg1648z00_1440); } 
BgL_arg1644z00_1438 = 
MAKE_YOUNG_PAIR(BgL_modulez00_100, BgL_arg1645z00_1439); } 
BgL_arg1643z00_1437 = 
MAKE_YOUNG_PAIR(BGl_string3954z00zz__objectz00, BgL_arg1644z00_1438); } 
BgL_arg1642z00_1436 = 
MAKE_YOUNG_PAIR(BgL_namez00_99, BgL_arg1643z00_1437); } 
BgL_arg1641z00_1435 = 
MAKE_YOUNG_PAIR(BGl_string3956z00zz__objectz00, BgL_arg1642z00_1436); } 
BgL_list1640z00_1434 = 
MAKE_YOUNG_PAIR(BGl_string3951z00zz__objectz00, BgL_arg1641z00_1435); } 
BGl_warningz00zz__errorz00(BgL_list1640z00_1434); } }  else 
{ /* Llib/object.scm 964 */BFALSE; } } } 
{ /* Llib/object.scm 968 */
long BgL_numz00_1444;
{ /* Llib/object.scm 968 */
long BgL_za72za7_3248;
{ /* Llib/object.scm 968 */
obj_t BgL_tmpz00_8441;
{ /* Llib/object.scm 968 */
obj_t BgL_aux3314z00_5826;
BgL_aux3314z00_5826 = BGl_za2nbzd2classesza2zd2zz__objectz00; 
if(
INTEGERP(BgL_aux3314z00_5826))
{ /* Llib/object.scm 968 */
BgL_tmpz00_8441 = BgL_aux3314z00_5826
; }  else 
{ 
obj_t BgL_auxz00_8444;
BgL_auxz00_8444 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)42774)), BGl_string3951z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3314z00_5826); 
FAILURE(BgL_auxz00_8444,BFALSE,BFALSE);} } 
BgL_za72za7_3248 = 
(long)CINT(BgL_tmpz00_8441); } 
BgL_numz00_1444 = 
(OBJECT_TYPE+BgL_za72za7_3248); } 
{ /* Llib/object.scm 968 */
long BgL_depthz00_1445;
{ /* Llib/object.scm 969 */
bool_t BgL_test5050z00_8450;
{ /* Llib/object.scm 969 */
bool_t BgL_res2657z00_3250;
BgL_res2657z00_3250 = 
BGL_CLASSP(BgL_superz00_101); 
BgL_test5050z00_8450 = BgL_res2657z00_3250; } 
if(BgL_test5050z00_8450)
{ /* Llib/object.scm 970 */
long BgL_arg1665z00_1458;
{ /* Llib/object.scm 632 */
obj_t BgL_tmpz00_8452;
if(
BGL_CLASSP(BgL_superz00_101))
{ /* Llib/object.scm 632 */
BgL_tmpz00_8452 = BgL_superz00_101
; }  else 
{ 
obj_t BgL_auxz00_8455;
BgL_auxz00_8455 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)27213)), BGl_string3951z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_superz00_101); 
FAILURE(BgL_auxz00_8455,BFALSE,BFALSE);} 
BgL_arg1665z00_1458 = 
BGL_CLASS_DEPTH(BgL_tmpz00_8452); } 
BgL_depthz00_1445 = 
(BgL_arg1665z00_1458+((long)1)); }  else 
{ /* Llib/object.scm 969 */
BgL_depthz00_1445 = ((long)0); } } 
{ /* Llib/object.scm 969 */
obj_t BgL_classz00_1446;
{ /* Llib/object.scm 979 */
obj_t BgL_arg1659z00_1452;obj_t BgL_arg1660z00_1453;
{ /* Llib/object.scm 979 */
bool_t BgL_test5052z00_8461;
{ /* Llib/object.scm 979 */
bool_t BgL_res2659z00_3253;
BgL_res2659z00_3253 = 
BGL_CLASSP(BgL_superz00_101); 
BgL_test5052z00_8461 = BgL_res2659z00_3253; } 
if(BgL_test5052z00_8461)
{ /* Llib/object.scm 980 */
obj_t BgL_arg1662z00_1455;
{ /* Llib/object.scm 980 */
obj_t BgL_res2660z00_3255;
{ /* Llib/object.scm 980 */
obj_t BgL_classz00_3254;
if(
BGL_CLASSP(BgL_superz00_101))
{ /* Llib/object.scm 980 */
BgL_classz00_3254 = BgL_superz00_101; }  else 
{ 
obj_t BgL_auxz00_8465;
BgL_auxz00_8465 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)43052)), BGl_string3951z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_superz00_101); 
FAILURE(BgL_auxz00_8465,BFALSE,BFALSE);} 
BgL_res2660z00_3255 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_3254); } 
BgL_arg1662z00_1455 = BgL_res2660z00_3255; } 
{ /* Llib/object.scm 980 */
obj_t BgL_list1663z00_1456;
BgL_list1663z00_1456 = 
MAKE_YOUNG_PAIR(BgL_plainz00_108, BNIL); 
BgL_arg1659z00_1452 = 
BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00(BgL_arg1662z00_1455, BgL_list1663z00_1456); } }  else 
{ /* Llib/object.scm 979 */
BgL_arg1659z00_1452 = BgL_plainz00_108; } } 
BgL_arg1660z00_1453 = 
BGl_makezd2classzd2virtualzd2slotszd2vectorz00zz__objectz00(BgL_superz00_101, BgL_virtualz00_109); 
{ /* Llib/object.scm 972 */
obj_t BgL_allocz00_3260;obj_t BgL_fdz00_3262;obj_t BgL_allfdz00_3263;
if(
PROCEDUREP(BgL_allocatorz00_104))
{ /* Llib/object.scm 976 */
BgL_allocz00_3260 = BgL_allocatorz00_104; }  else 
{ 
obj_t BgL_auxz00_8475;
BgL_auxz00_8475 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)42946)), BGl_string3951z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_allocatorz00_104); 
FAILURE(BgL_auxz00_8475,BFALSE,BFALSE);} 
if(
VECTORP(BgL_plainz00_108))
{ /* Llib/object.scm 978 */
BgL_fdz00_3262 = BgL_plainz00_108; }  else 
{ 
obj_t BgL_auxz00_8481;
BgL_auxz00_8481 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)42979)), BGl_string3951z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_plainz00_108); 
FAILURE(BgL_auxz00_8481,BFALSE,BFALSE);} 
if(
VECTORP(BgL_arg1659z00_1452))
{ /* Llib/object.scm 981 */
BgL_allfdz00_3263 = BgL_arg1659z00_1452; }  else 
{ 
obj_t BgL_auxz00_8487;
BgL_auxz00_8487 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)43077)), BGl_string3951z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_arg1659z00_1452); 
FAILURE(BgL_auxz00_8487,BFALSE,BFALSE);} 
BgL_classz00_1446 = 
bgl_make_class(BgL_namez00_99, BgL_modulez00_100, BgL_numz00_1444, BgL_superz00_101, BNIL, BgL_allocz00_3260, BgL_hashz00_102, BgL_fdz00_3262, BgL_allfdz00_3263, BgL_constructorz00_105, BgL_arg1660z00_1453, BgL_creatorz00_103, BgL_nilz00_106, BgL_shrinkz00_107, BgL_depthz00_1445, BFALSE); } } 
{ /* Llib/object.scm 972 */

{ /* Llib/object.scm 990 */
bool_t BgL_test5057z00_8492;
{ /* Llib/object.scm 990 */
bool_t BgL_res2661z00_3267;
BgL_res2661z00_3267 = 
BGL_CLASSP(BgL_superz00_101); 
BgL_test5057z00_8492 = BgL_res2661z00_3267; } 
if(BgL_test5057z00_8492)
{ /* Llib/object.scm 993 */
obj_t BgL_arg1654z00_1448;
{ /* Llib/object.scm 993 */
obj_t BgL_arg1656z00_1449;
{ /* Llib/object.scm 993 */
obj_t BgL_res2662z00_3269;
{ /* Llib/object.scm 993 */
obj_t BgL_classz00_3268;
if(
BGL_CLASSP(BgL_superz00_101))
{ /* Llib/object.scm 993 */
BgL_classz00_3268 = BgL_superz00_101; }  else 
{ 
obj_t BgL_auxz00_8496;
BgL_auxz00_8496 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)43424)), BGl_string3951z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_superz00_101); 
FAILURE(BgL_auxz00_8496,BFALSE,BFALSE);} 
BgL_res2662z00_3269 = 
BGL_CLASS_SUBCLASSES(BgL_classz00_3268); } 
BgL_arg1656z00_1449 = BgL_res2662z00_3269; } 
BgL_arg1654z00_1448 = 
MAKE_YOUNG_PAIR(BgL_classz00_1446, BgL_arg1656z00_1449); } 
{ /* Llib/object.scm 662 */
obj_t BgL_tmpz00_8502;
if(
BGL_CLASSP(BgL_superz00_101))
{ /* Llib/object.scm 662 */
BgL_tmpz00_8502 = BgL_superz00_101
; }  else 
{ 
obj_t BgL_auxz00_8505;
BgL_auxz00_8505 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)28737)), BGl_string3951z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_superz00_101); 
FAILURE(BgL_auxz00_8505,BFALSE,BFALSE);} 
BGL_CLASS_SUBCLASSES_SET(BgL_tmpz00_8502, BgL_arg1654z00_1448); } }  else 
{ /* Llib/object.scm 990 */BFALSE; } } 
{ /* Llib/object.scm 995 */
obj_t BgL_vectorz00_3270;long BgL_kz00_3271;
{ /* Llib/object.scm 995 */
obj_t BgL_aux3330z00_5842;
BgL_aux3330z00_5842 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3330z00_5842))
{ /* Llib/object.scm 995 */
BgL_vectorz00_3270 = BgL_aux3330z00_5842; }  else 
{ 
obj_t BgL_auxz00_8512;
BgL_auxz00_8512 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)43518)), BGl_string3951z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3330z00_5842); 
FAILURE(BgL_auxz00_8512,BFALSE,BFALSE);} } 
{ /* Llib/object.scm 995 */
obj_t BgL_tmpz00_8516;
{ /* Llib/object.scm 995 */
obj_t BgL_aux3332z00_5844;
BgL_aux3332z00_5844 = BGl_za2nbzd2classesza2zd2zz__objectz00; 
if(
INTEGERP(BgL_aux3332z00_5844))
{ /* Llib/object.scm 995 */
BgL_tmpz00_8516 = BgL_aux3332z00_5844
; }  else 
{ 
obj_t BgL_auxz00_8519;
BgL_auxz00_8519 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)43528)), BGl_string3951z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3332z00_5844); 
FAILURE(BgL_auxz00_8519,BFALSE,BFALSE);} } 
BgL_kz00_3271 = 
(long)CINT(BgL_tmpz00_8516); } 
{ /* Llib/object.scm 995 */
bool_t BgL_test5062z00_8524;
{ /* Llib/object.scm 995 */
long BgL_tmpz00_8525;
BgL_tmpz00_8525 = 
VECTOR_LENGTH(BgL_vectorz00_3270); 
BgL_test5062z00_8524 = 
BOUND_CHECK(BgL_kz00_3271, BgL_tmpz00_8525); } 
if(BgL_test5062z00_8524)
{ /* Llib/object.scm 995 */
VECTOR_SET(BgL_vectorz00_3270,BgL_kz00_3271,BgL_classz00_1446); }  else 
{ 
obj_t BgL_auxz00_8529;
BgL_auxz00_8529 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)43505)), BGl_string3957z00zz__objectz00, BgL_vectorz00_3270, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_3270)), 
(int)(BgL_kz00_3271)); 
FAILURE(BgL_auxz00_8529,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_tmpz00_8536;
{ /* Llib/object.scm 997 */
obj_t BgL_aux3334z00_5846;
BgL_aux3334z00_5846 = BGl_za2nbzd2classesza2zd2zz__objectz00; 
if(
INTEGERP(BgL_aux3334z00_5846))
{ /* Llib/object.scm 997 */
BgL_tmpz00_8536 = BgL_aux3334z00_5846
; }  else 
{ 
obj_t BgL_auxz00_8539;
BgL_auxz00_8539 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)43616)), BGl_string3951z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3334z00_5846); 
FAILURE(BgL_auxz00_8539,BFALSE,BFALSE);} } 
BGl_za2nbzd2classesza2zd2zz__objectz00 = 
ADDFX(BgL_tmpz00_8536, 
BINT(((long)1))); } 
{ /* Llib/object.scm 999 */
long BgL_arg1657z00_1450;
{ /* Llib/object.scm 999 */
bool_t BgL_test5064z00_8545;
{ /* Llib/object.scm 999 */
bool_t BgL_res2664z00_3274;
BgL_res2664z00_3274 = 
BGL_CLASSP(BgL_superz00_101); 
BgL_test5064z00_8545 = BgL_res2664z00_3274; } 
if(BgL_test5064z00_8545)
{ /* Llib/object.scm 999 */
long BgL_res2665z00_3276;
{ /* Llib/object.scm 999 */
obj_t BgL_classz00_3275;
if(
BGL_CLASSP(BgL_superz00_101))
{ /* Llib/object.scm 999 */
BgL_classz00_3275 = BgL_superz00_101; }  else 
{ 
obj_t BgL_auxz00_8549;
BgL_auxz00_8549 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)43752)), BGl_string3951z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_superz00_101); 
FAILURE(BgL_auxz00_8549,BFALSE,BFALSE);} 
BgL_res2665z00_3276 = 
BGL_CLASS_INDEX(BgL_classz00_3275); } 
BgL_arg1657z00_1450 = BgL_res2665z00_3276; }  else 
{ /* Llib/object.scm 999 */
BgL_arg1657z00_1450 = BgL_numz00_1444; } } 
BGl_genericszd2addzd2classz12z12zz__objectz00(BgL_numz00_1444, BgL_arg1657z00_1450); } 
BgL_tmp5038z00_8386 = BgL_classz00_1446; } } } } 
BGL_EXITD_POP_PROTECT(BgL_top5039z00_8387); BUNSPEC; 
BGL_MUTEX_UNLOCK(bigloo_generic_mutex); 
return BgL_tmp5038z00_8386;} } } 

}



/* &register-class! */
obj_t BGl_z62registerzd2classz12za2zz__objectz00(obj_t BgL_envz00_5004, obj_t BgL_namez00_5005, obj_t BgL_modulez00_5006, obj_t BgL_superz00_5007, obj_t BgL_hashz00_5008, obj_t BgL_creatorz00_5009, obj_t BgL_allocatorz00_5010, obj_t BgL_constructorz00_5011, obj_t BgL_nilz00_5012, obj_t BgL_shrinkz00_5013, obj_t BgL_plainz00_5014, obj_t BgL_virtualz00_5015)
{
{ /* Llib/object.scm 954 */
{ /* Llib/object.scm 955 */
obj_t BgL_auxz00_8587;obj_t BgL_auxz00_8580;long BgL_auxz00_8571;obj_t BgL_auxz00_8564;obj_t BgL_auxz00_8557;
if(
VECTORP(BgL_virtualz00_5015))
{ /* Llib/object.scm 955 */
BgL_auxz00_8587 = BgL_virtualz00_5015
; }  else 
{ 
obj_t BgL_auxz00_8590;
BgL_auxz00_8590 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)42213)), BGl_string3958z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_virtualz00_5015); 
FAILURE(BgL_auxz00_8590,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_nilz00_5012))
{ /* Llib/object.scm 955 */
BgL_auxz00_8580 = BgL_nilz00_5012
; }  else 
{ 
obj_t BgL_auxz00_8583;
BgL_auxz00_8583 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)42213)), BGl_string3958z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_nilz00_5012); 
FAILURE(BgL_auxz00_8583,BFALSE,BFALSE);} 
{ /* Llib/object.scm 955 */
obj_t BgL_tmpz00_8572;
if(
INTEGERP(BgL_hashz00_5008))
{ /* Llib/object.scm 955 */
BgL_tmpz00_8572 = BgL_hashz00_5008
; }  else 
{ 
obj_t BgL_auxz00_8575;
BgL_auxz00_8575 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)42213)), BGl_string3958z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_hashz00_5008); 
FAILURE(BgL_auxz00_8575,BFALSE,BFALSE);} 
BgL_auxz00_8571 = 
(long)CINT(BgL_tmpz00_8572); } 
if(
SYMBOLP(BgL_modulez00_5006))
{ /* Llib/object.scm 955 */
BgL_auxz00_8564 = BgL_modulez00_5006
; }  else 
{ 
obj_t BgL_auxz00_8567;
BgL_auxz00_8567 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)42213)), BGl_string3958z00zz__objectz00, BGl_string3844z00zz__objectz00, BgL_modulez00_5006); 
FAILURE(BgL_auxz00_8567,BFALSE,BFALSE);} 
if(
SYMBOLP(BgL_namez00_5005))
{ /* Llib/object.scm 955 */
BgL_auxz00_8557 = BgL_namez00_5005
; }  else 
{ 
obj_t BgL_auxz00_8560;
BgL_auxz00_8560 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)42213)), BGl_string3958z00zz__objectz00, BGl_string3844z00zz__objectz00, BgL_namez00_5005); 
FAILURE(BgL_auxz00_8560,BFALSE,BFALSE);} 
return 
BGl_registerzd2classz12zc0zz__objectz00(BgL_auxz00_8557, BgL_auxz00_8564, BgL_superz00_5007, BgL_auxz00_8571, BgL_creatorz00_5009, BgL_allocatorz00_5010, BgL_constructorz00_5011, BgL_auxz00_8580, BgL_shrinkz00_5013, BgL_plainz00_5014, BgL_auxz00_8587);} } 

}



/* make-class-virtual-slots-vector */
obj_t BGl_makezd2classzd2virtualzd2slotszd2vectorz00zz__objectz00(obj_t BgL_superz00_110, obj_t BgL_virtualsz00_111)
{
{ /* Llib/object.scm 1005 */
{ 
obj_t BgL_vecz00_1477;
{ /* Llib/object.scm 1014 */
bool_t BgL_test5071z00_8595;
{ /* Llib/object.scm 1014 */
bool_t BgL_res2668z00_3285;
BgL_res2668z00_3285 = 
BGL_CLASSP(BgL_superz00_110); 
BgL_test5071z00_8595 = BgL_res2668z00_3285; } 
if(BgL_test5071z00_8595)
{ /* Llib/object.scm 1018 */
obj_t BgL_ovecz00_1461;
{ /* Llib/object.scm 1018 */
obj_t BgL_res2669z00_3287;
{ /* Llib/object.scm 1018 */
obj_t BgL_classz00_3286;
if(
BGL_CLASSP(BgL_superz00_110))
{ /* Llib/object.scm 1018 */
BgL_classz00_3286 = BgL_superz00_110; }  else 
{ 
obj_t BgL_auxz00_8599;
BgL_auxz00_8599 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)44456)), BGl_string3963z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_superz00_110); 
FAILURE(BgL_auxz00_8599,BFALSE,BFALSE);} 
BgL_res2669z00_3287 = 
BGL_CLASS_VIRTUAL_FIELDS(BgL_classz00_3286); } 
BgL_ovecz00_1461 = BgL_res2669z00_3287; } 
{ /* Llib/object.scm 1019 */
long BgL_lenz00_1463;
{ /* Llib/object.scm 1020 */
obj_t BgL_vectorz00_3289;
if(
VECTORP(BgL_virtualsz00_111))
{ /* Llib/object.scm 1020 */
BgL_vectorz00_3289 = BgL_virtualsz00_111; }  else 
{ 
obj_t BgL_auxz00_8606;
BgL_auxz00_8606 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)44527)), BGl_string3963z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_virtualsz00_111); 
FAILURE(BgL_auxz00_8606,BFALSE,BFALSE);} 
BgL_lenz00_1463 = 
VECTOR_LENGTH(BgL_vectorz00_3289); } 
{ /* Llib/object.scm 1020 */
obj_t BgL_vecz00_1464;
{ /* Llib/object.scm 1021 */
long BgL_arg1675z00_1472;
BgL_arg1675z00_1472 = 
(
VECTOR_LENGTH(BgL_ovecz00_1461)+BgL_lenz00_1463); 
BgL_vecz00_1464 = 
make_vector(BgL_arg1675z00_1472, BUNSPEC); } 
{ /* Llib/object.scm 1021 */

{ 
long BgL_iz00_1466;
BgL_iz00_1466 = ((long)0); 
BgL_zc3z04anonymousza31667ze3z87_1467:
if(
(BgL_iz00_1466==
VECTOR_LENGTH(BgL_ovecz00_1461)))
{ /* Llib/object.scm 1023 */
BgL_vecz00_1477 = BgL_vecz00_1464; 
BgL_lambda1685z00_1478:
{ /* Llib/object.scm 1008 */
obj_t BgL_g1321z00_1479;
{ /* Llib/object.scm 1011 */
obj_t BgL_auxz00_8617;
if(
VECTORP(BgL_virtualsz00_111))
{ /* Llib/object.scm 1011 */
BgL_auxz00_8617 = BgL_virtualsz00_111
; }  else 
{ 
obj_t BgL_auxz00_8620;
BgL_auxz00_8620 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)44256)), BGl_string3959z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_virtualsz00_111); 
FAILURE(BgL_auxz00_8620,BFALSE,BFALSE);} 
BgL_g1321z00_1479 = 
BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(BgL_auxz00_8617); } 
{ 
obj_t BgL_l1319z00_1481;
BgL_l1319z00_1481 = BgL_g1321z00_1479; 
BgL_zc3z04anonymousza31686ze3z87_1482:
if(
PAIRP(BgL_l1319z00_1481))
{ /* Llib/object.scm 1011 */
{ /* Llib/object.scm 1009 */
obj_t BgL_virtualz00_1484;
BgL_virtualz00_1484 = 
CAR(BgL_l1319z00_1481); 
{ /* Llib/object.scm 1009 */
obj_t BgL_numz00_1485;
{ /* Llib/object.scm 1009 */
obj_t BgL_pairz00_3279;
if(
PAIRP(BgL_virtualz00_1484))
{ /* Llib/object.scm 1009 */
BgL_pairz00_3279 = BgL_virtualz00_1484; }  else 
{ 
obj_t BgL_auxz00_8630;
BgL_auxz00_8630 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)44183)), BGl_string3960z00zz__objectz00, BGl_string3961z00zz__objectz00, BgL_virtualz00_1484); 
FAILURE(BgL_auxz00_8630,BFALSE,BFALSE);} 
BgL_numz00_1485 = 
CAR(BgL_pairz00_3279); } 
{ /* Llib/object.scm 1010 */
obj_t BgL_arg1688z00_1486;
{ /* Llib/object.scm 1010 */
obj_t BgL_pairz00_3280;
if(
PAIRP(BgL_virtualz00_1484))
{ /* Llib/object.scm 1010 */
BgL_pairz00_3280 = BgL_virtualz00_1484; }  else 
{ 
obj_t BgL_auxz00_8637;
BgL_auxz00_8637 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)44228)), BGl_string3960z00zz__objectz00, BGl_string3961z00zz__objectz00, BgL_virtualz00_1484); 
FAILURE(BgL_auxz00_8637,BFALSE,BFALSE);} 
BgL_arg1688z00_1486 = 
CDR(BgL_pairz00_3280); } 
{ /* Llib/object.scm 1010 */
long BgL_kz00_3282;
{ /* Llib/object.scm 1010 */
obj_t BgL_tmpz00_8642;
if(
INTEGERP(BgL_numz00_1485))
{ /* Llib/object.scm 1010 */
BgL_tmpz00_8642 = BgL_numz00_1485
; }  else 
{ 
obj_t BgL_auxz00_8645;
BgL_auxz00_8645 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)44219)), BGl_string3960z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_numz00_1485); 
FAILURE(BgL_auxz00_8645,BFALSE,BFALSE);} 
BgL_kz00_3282 = 
(long)CINT(BgL_tmpz00_8642); } 
{ /* Llib/object.scm 1010 */
bool_t BgL_test5080z00_8650;
{ /* Llib/object.scm 1010 */
long BgL_tmpz00_8651;
BgL_tmpz00_8651 = 
VECTOR_LENGTH(BgL_vecz00_1477); 
BgL_test5080z00_8650 = 
BOUND_CHECK(BgL_kz00_3282, BgL_tmpz00_8651); } 
if(BgL_test5080z00_8650)
{ /* Llib/object.scm 1010 */
VECTOR_SET(BgL_vecz00_1477,BgL_kz00_3282,BgL_arg1688z00_1486); }  else 
{ 
obj_t BgL_auxz00_8655;
BgL_auxz00_8655 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)44202)), BGl_string3957z00zz__objectz00, BgL_vecz00_1477, 
(int)(
VECTOR_LENGTH(BgL_vecz00_1477)), 
(int)(BgL_kz00_3282)); 
FAILURE(BgL_auxz00_8655,BFALSE,BFALSE);} } } } } } 
{ 
obj_t BgL_l1319z00_8662;
BgL_l1319z00_8662 = 
CDR(BgL_l1319z00_1481); 
BgL_l1319z00_1481 = BgL_l1319z00_8662; 
goto BgL_zc3z04anonymousza31686ze3z87_1482;} }  else 
{ /* Llib/object.scm 1011 */
if(
NULLP(BgL_l1319z00_1481))
{ /* Llib/object.scm 1011 */BTRUE; }  else 
{ /* Llib/object.scm 1011 */
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string3962z00zz__objectz00, BGl_string3949z00zz__objectz00, BgL_l1319z00_1481, BGl_string3838z00zz__objectz00, 
BINT(((long)44134))); } } } } 
return BgL_vecz00_1477;}  else 
{ /* Llib/object.scm 1023 */
{ /* Llib/object.scm 1026 */
obj_t BgL_arg1669z00_1469;
BgL_arg1669z00_1469 = 
VECTOR_REF(BgL_ovecz00_1461,BgL_iz00_1466); 
{ /* Llib/object.scm 1026 */
bool_t BgL_test5082z00_8669;
{ /* Llib/object.scm 1026 */
long BgL_tmpz00_8670;
BgL_tmpz00_8670 = 
VECTOR_LENGTH(BgL_vecz00_1464); 
BgL_test5082z00_8669 = 
BOUND_CHECK(BgL_iz00_1466, BgL_tmpz00_8670); } 
if(BgL_test5082z00_8669)
{ /* Llib/object.scm 1026 */
VECTOR_SET(BgL_vecz00_1464,BgL_iz00_1466,BgL_arg1669z00_1469); }  else 
{ 
obj_t BgL_auxz00_8674;
BgL_auxz00_8674 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)44678)), BGl_string3957z00zz__objectz00, BgL_vecz00_1464, 
(int)(
VECTOR_LENGTH(BgL_vecz00_1464)), 
(int)(BgL_iz00_1466)); 
FAILURE(BgL_auxz00_8674,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_8681;
BgL_iz00_8681 = 
(BgL_iz00_1466+((long)1)); 
BgL_iz00_1466 = BgL_iz00_8681; 
goto BgL_zc3z04anonymousza31667ze3z87_1467;} } } } } } }  else 
{ /* Llib/object.scm 1015 */
long BgL_lenz00_1474;
{ /* Llib/object.scm 1015 */
obj_t BgL_vectorz00_3303;
if(
VECTORP(BgL_virtualsz00_111))
{ /* Llib/object.scm 1015 */
BgL_vectorz00_3303 = BgL_virtualsz00_111; }  else 
{ 
obj_t BgL_auxz00_8685;
BgL_auxz00_8685 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)44341)), BGl_string3963z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_virtualsz00_111); 
FAILURE(BgL_auxz00_8685,BFALSE,BFALSE);} 
BgL_lenz00_1474 = 
VECTOR_LENGTH(BgL_vectorz00_3303); } 
{ /* Llib/object.scm 1015 */
obj_t BgL_vecz00_1475;
BgL_vecz00_1475 = 
make_vector(BgL_lenz00_1474, BUNSPEC); 
{ /* Llib/object.scm 1016 */

{ 
obj_t BgL_vecz00_8691;
BgL_vecz00_8691 = BgL_vecz00_1475; 
BgL_vecz00_1477 = BgL_vecz00_8691; 
goto BgL_lambda1685z00_1478;} } } } } } } 

}



/* make-method-array */
obj_t BGl_makezd2methodzd2arrayz00zz__objectz00(obj_t BgL_defzd2bucketzd2_113)
{
{ /* Llib/object.scm 1038 */
{ /* Llib/object.scm 1039 */
long BgL_sz00_1492;long BgL_az00_1493;
{ /* Llib/object.scm 1039 */
int BgL_arg1700z00_1500;
BgL_arg1700z00_1500 = 
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))); 
{ /* Llib/object.scm 1039 */
long BgL_res2679z00_3315;
{ /* Llib/object.scm 1039 */
long BgL_n1z00_3313;long BgL_n2z00_3314;
{ /* Llib/object.scm 1039 */
obj_t BgL_tmpz00_8697;
{ /* Llib/object.scm 1039 */
obj_t BgL_aux3362z00_5876;
BgL_aux3362z00_5876 = BGl_za2nbzd2classeszd2maxza2z00zz__objectz00; 
if(
INTEGERP(BgL_aux3362z00_5876))
{ /* Llib/object.scm 1039 */
BgL_tmpz00_8697 = BgL_aux3362z00_5876
; }  else 
{ 
obj_t BgL_auxz00_8700;
BgL_auxz00_8700 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)45363)), BGl_string3964z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3362z00_5876); 
FAILURE(BgL_auxz00_8700,BFALSE,BFALSE);} } 
BgL_n1z00_3313 = 
(long)CINT(BgL_tmpz00_8697); } 
BgL_n2z00_3314 = 
(long)(BgL_arg1700z00_1500); 
BgL_res2679z00_3315 = 
(BgL_n1z00_3313/BgL_n2z00_3314); } 
BgL_sz00_1492 = BgL_res2679z00_3315; } } 
{ /* Llib/object.scm 1040 */
int BgL_arg1701z00_1501;
BgL_arg1701z00_1501 = 
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))); 
{ /* Llib/object.scm 1040 */
long BgL_res2688z00_3339;
{ /* Llib/object.scm 1040 */
long BgL_n1z00_3321;long BgL_n2z00_3322;
{ /* Llib/object.scm 1040 */
obj_t BgL_tmpz00_8712;
{ /* Llib/object.scm 1040 */
obj_t BgL_aux3364z00_5878;
BgL_aux3364z00_5878 = BGl_za2nbzd2classeszd2maxza2z00zz__objectz00; 
if(
INTEGERP(BgL_aux3364z00_5878))
{ /* Llib/object.scm 1040 */
BgL_tmpz00_8712 = BgL_aux3364z00_5878
; }  else 
{ 
obj_t BgL_auxz00_8715;
BgL_auxz00_8715 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)45429)), BGl_string3964z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3364z00_5878); 
FAILURE(BgL_auxz00_8715,BFALSE,BFALSE);} } 
BgL_n1z00_3321 = 
(long)CINT(BgL_tmpz00_8712); } 
BgL_n2z00_3322 = 
(long)(BgL_arg1701z00_1501); 
{ /* Llib/object.scm 1040 */
bool_t BgL_test5086z00_8721;
{ /* Llib/object.scm 1040 */
long BgL_arg2382z00_3324;
BgL_arg2382z00_3324 = 
(((BgL_n1z00_3321) | (BgL_n2z00_3322)) & -2147483648); 
BgL_test5086z00_8721 = 
(BgL_arg2382z00_3324==((long)0)); } 
if(BgL_test5086z00_8721)
{ /* Llib/object.scm 1040 */
int32_t BgL_arg2379z00_3325;
{ /* Llib/object.scm 1040 */
int32_t BgL_arg2380z00_3326;int32_t BgL_arg2381z00_3327;
{ /* Llib/object.scm 1040 */
int32_t BgL_res2684z00_3331;
BgL_res2684z00_3331 = 
(int32_t)(BgL_n1z00_3321); 
BgL_arg2380z00_3326 = BgL_res2684z00_3331; } 
{ /* Llib/object.scm 1040 */
int32_t BgL_res2685z00_3333;
BgL_res2685z00_3333 = 
(int32_t)(BgL_n2z00_3322); 
BgL_arg2381z00_3327 = BgL_res2685z00_3333; } 
BgL_arg2379z00_3325 = 
(BgL_arg2380z00_3326%BgL_arg2381z00_3327); } 
{ /* Llib/object.scm 1040 */
long BgL_res2687z00_3338;
{ /* Llib/object.scm 1040 */
long BgL_arg2502z00_3335;
BgL_arg2502z00_3335 = 
(long)(BgL_arg2379z00_3325); 
{ /* Llib/object.scm 1040 */
long BgL_res2686z00_3337;
BgL_res2686z00_3337 = 
(long)(BgL_arg2502z00_3335); 
BgL_res2687z00_3338 = BgL_res2686z00_3337; } } 
BgL_res2688z00_3339 = BgL_res2687z00_3338; } }  else 
{ /* Llib/object.scm 1040 */
BgL_res2688z00_3339 = 
(BgL_n1z00_3321%BgL_n2z00_3322); } } } 
BgL_az00_1493 = BgL_res2688z00_3339; } } 
if(
(BgL_az00_1493>((long)0)))
{ /* Llib/object.scm 1041 */
{ /* Llib/object.scm 1045 */
int BgL_arg1695z00_1495;
BgL_arg1695z00_1495 = 
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))); 
{ /* Llib/object.scm 1043 */
obj_t BgL_list1696z00_1496;
{ /* Llib/object.scm 1043 */
obj_t BgL_arg1697z00_1497;
{ /* Llib/object.scm 1043 */
obj_t BgL_arg1698z00_1498;
BgL_arg1698z00_1498 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg1695z00_1495), BNIL); 
BgL_arg1697z00_1497 = 
MAKE_YOUNG_PAIR(BGl_string3965z00zz__objectz00, BgL_arg1698z00_1498); } 
BgL_list1696z00_1496 = 
MAKE_YOUNG_PAIR(BGl_string3964z00zz__objectz00, BgL_arg1697z00_1497); } 
BGl_warningz00zz__errorz00(BgL_list1696z00_1496); } } 
return 
make_vector_uncollectable(
(BgL_sz00_1492+((long)1)), BgL_defzd2bucketzd2_113);}  else 
{ /* Llib/object.scm 1041 */
return 
make_vector_uncollectable(BgL_sz00_1492, BgL_defzd2bucketzd2_113);} } } 

}



/* &generic-no-default-behavior */
obj_t BGl_z62genericzd2nozd2defaultzd2behaviorzb0zz__objectz00(obj_t BgL_envz00_5016, obj_t BgL_lz00_5017)
{
{ /* Llib/object.scm 1052 */
return 
BGl_errorz00zz__errorz00(BGl_string3935z00zz__objectz00, BGl_string3966z00zz__objectz00, BgL_lz00_5017);} 

}



/* procedure->generic */
BGL_EXPORTED_DEF obj_t BGl_procedurezd2ze3genericz31zz__objectz00(obj_t BgL_procz00_115)
{
{ /* Llib/object.scm 1058 */
return 
bgl_make_generic(BgL_procz00_115);} 

}



/* &procedure->generic */
obj_t BGl_z62procedurezd2ze3genericz53zz__objectz00(obj_t BgL_envz00_5018, obj_t BgL_procz00_5019)
{
{ /* Llib/object.scm 1058 */
{ /* Llib/object.scm 1059 */
obj_t BgL_auxz00_8747;
if(
PROCEDUREP(BgL_procz00_5019))
{ /* Llib/object.scm 1059 */
BgL_auxz00_8747 = BgL_procz00_5019
; }  else 
{ 
obj_t BgL_auxz00_8750;
BgL_auxz00_8750 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)46306)), BGl_string3967z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_procz00_5019); 
FAILURE(BgL_auxz00_8750,BFALSE,BFALSE);} 
return 
BGl_procedurezd2ze3genericz31zz__objectz00(BgL_auxz00_8747);} } 

}



/* register-generic! */
BGL_EXPORTED_DEF obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t BgL_genericz00_116, obj_t BgL_defaultz00_117, obj_t BgL_classzd2minzd2_118, obj_t BgL_namez00_119)
{
{ /* Llib/object.scm 1064 */
{ /* Llib/object.scm 1065 */
obj_t BgL_top5090z00_8756;
BgL_top5090z00_8756 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(bigloo_generic_mutex); 
BGL_EXITD_PUSH_PROTECT(BgL_top5090z00_8756, bigloo_generic_mutex); BUNSPEC; 
{ /* Llib/object.scm 1065 */
obj_t BgL_tmp5089z00_8755;
BgL_tmp5089z00_8755 = 
BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00(BgL_genericz00_116, BgL_defaultz00_117, BgL_namez00_119); 
BGL_EXITD_POP_PROTECT(BgL_top5090z00_8756); BUNSPEC; 
BGL_MUTEX_UNLOCK(bigloo_generic_mutex); 
return BgL_tmp5089z00_8755;} } } 

}



/* &register-generic! */
obj_t BGl_z62registerzd2genericz12za2zz__objectz00(obj_t BgL_envz00_5020, obj_t BgL_genericz00_5021, obj_t BgL_defaultz00_5022, obj_t BgL_classzd2minzd2_5023, obj_t BgL_namez00_5024)
{
{ /* Llib/object.scm 1064 */
{ /* Llib/object.scm 1065 */
obj_t BgL_auxz00_8770;obj_t BgL_auxz00_8763;
if(
PROCEDUREP(BgL_defaultz00_5022))
{ /* Llib/object.scm 1065 */
BgL_auxz00_8770 = BgL_defaultz00_5022
; }  else 
{ 
obj_t BgL_auxz00_8773;
BgL_auxz00_8773 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)46613)), BGl_string3968z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_defaultz00_5022); 
FAILURE(BgL_auxz00_8773,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_genericz00_5021))
{ /* Llib/object.scm 1065 */
BgL_auxz00_8763 = BgL_genericz00_5021
; }  else 
{ 
obj_t BgL_auxz00_8766;
BgL_auxz00_8766 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)46613)), BGl_string3968z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_5021); 
FAILURE(BgL_auxz00_8766,BFALSE,BFALSE);} 
return 
BGl_registerzd2genericz12zc0zz__objectz00(BgL_auxz00_8763, BgL_auxz00_8770, BgL_classzd2minzd2_5023, BgL_namez00_5024);} } 

}



/* register-generic-sans-lock! */
obj_t BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00(obj_t BgL_genericz00_120, obj_t BgL_defaultz00_121, obj_t BgL_namez00_122)
{
{ /* Llib/object.scm 1078 */
{ /* Llib/object.scm 1079 */
bool_t BgL_test5093z00_8778;
{ /* Llib/object.scm 1079 */
obj_t BgL_genericz00_3349;
if(
PROCEDUREP(BgL_genericz00_120))
{ /* Llib/object.scm 1079 */
BgL_genericz00_3349 = BgL_genericz00_120; }  else 
{ 
obj_t BgL_auxz00_8781;
BgL_auxz00_8781 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)47540)), BGl_string3969z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_120); 
FAILURE(BgL_auxz00_8781,BFALSE,BFALSE);} 
{ /* Llib/object.scm 1033 */
obj_t BgL_tmpz00_8785;
BgL_tmpz00_8785 = 
PROCEDURE_REF(BgL_genericz00_3349, 
(int)(((long)1))); 
BgL_test5093z00_8778 = 
VECTORP(BgL_tmpz00_8785); } } 
if(BgL_test5093z00_8778)
{ /* Llib/object.scm 1079 */
if(
PROCEDUREP(BgL_defaultz00_121))
{ /* Llib/object.scm 1098 */
obj_t BgL_oldzd2defzd2bucketz00_1504;obj_t BgL_newzd2defzd2bucketz00_1505;obj_t BgL_oldzd2defaultzd2_1506;
{ /* Llib/object.scm 1098 */
obj_t BgL_res2696z00_3354;
{ /* Llib/object.scm 862 */
obj_t BgL_aux3376z00_5890;
{ /* Llib/object.scm 862 */
obj_t BgL_tmpz00_8791;
if(
PROCEDUREP(BgL_genericz00_120))
{ /* Llib/object.scm 862 */
BgL_tmpz00_8791 = BgL_genericz00_120
; }  else 
{ 
obj_t BgL_auxz00_8794;
BgL_auxz00_8794 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)37952)), BGl_string3969z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_120); 
FAILURE(BgL_auxz00_8794,BFALSE,BFALSE);} 
BgL_aux3376z00_5890 = 
PROCEDURE_REF(BgL_tmpz00_8791, 
(int)(((long)2))); } 
if(
VECTORP(BgL_aux3376z00_5890))
{ /* Llib/object.scm 862 */
BgL_res2696z00_3354 = BgL_aux3376z00_5890; }  else 
{ 
obj_t BgL_auxz00_8802;
BgL_auxz00_8802 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)37937)), BGl_string3969z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3376z00_5890); 
FAILURE(BgL_auxz00_8802,BFALSE,BFALSE);} } 
BgL_oldzd2defzd2bucketz00_1504 = BgL_res2696z00_3354; } 
{ /* Llib/object.scm 1100 */
int BgL_arg1721z00_1530;
BgL_arg1721z00_1530 = 
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))); 
BgL_newzd2defzd2bucketz00_1505 = 
make_vector_uncollectable(
(long)(BgL_arg1721z00_1530), BgL_defaultz00_121); } 
{ /* Llib/object.scm 1101 */
obj_t BgL_res2700z00_3361;
{ /* Llib/object.scm 1101 */
obj_t BgL_genericz00_3360;
if(
PROCEDUREP(BgL_genericz00_120))
{ /* Llib/object.scm 1101 */
BgL_genericz00_3360 = BgL_genericz00_120; }  else 
{ 
obj_t BgL_auxz00_8815;
BgL_auxz00_8815 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)48474)), BGl_string3969z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_120); 
FAILURE(BgL_auxz00_8815,BFALSE,BFALSE);} 
{ /* Llib/object.scm 844 */
obj_t BgL_aux3380z00_5894;
BgL_aux3380z00_5894 = 
PROCEDURE_REF(BgL_genericz00_3360, 
(int)(((long)0))); 
if(
PROCEDUREP(BgL_aux3380z00_5894))
{ /* Llib/object.scm 844 */
BgL_res2700z00_3361 = BgL_aux3380z00_5894; }  else 
{ 
obj_t BgL_auxz00_8823;
BgL_auxz00_8823 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)37126)), BGl_string3969z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3380z00_5894); 
FAILURE(BgL_auxz00_8823,BFALSE,BFALSE);} } } 
BgL_oldzd2defaultzd2_1506 = BgL_res2700z00_3361; } 
{ /* Llib/object.scm 1102 */
obj_t BgL_marrayz00_1507;
{ /* Llib/object.scm 1102 */
obj_t BgL_genericz00_3362;
if(
PROCEDUREP(BgL_genericz00_120))
{ /* Llib/object.scm 1102 */
BgL_genericz00_3362 = BgL_genericz00_120; }  else 
{ 
obj_t BgL_auxz00_8829;
BgL_auxz00_8829 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)48524)), BGl_string3969z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_120); 
FAILURE(BgL_auxz00_8829,BFALSE,BFALSE);} 
BgL_marrayz00_1507 = 
PROCEDURE_REF(BgL_genericz00_3362, 
(int)(((long)1))); } 
{ /* Llib/object.scm 1102 */
long BgL_alenz00_1508;
{ /* Llib/object.scm 1103 */
obj_t BgL_vectorz00_3363;
if(
VECTORP(BgL_marrayz00_1507))
{ /* Llib/object.scm 1103 */
BgL_vectorz00_3363 = BgL_marrayz00_1507; }  else 
{ 
obj_t BgL_auxz00_8837;
BgL_auxz00_8837 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)48564)), BGl_string3969z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_marrayz00_1507); 
FAILURE(BgL_auxz00_8837,BFALSE,BFALSE);} 
BgL_alenz00_1508 = 
VECTOR_LENGTH(BgL_vectorz00_3363); } 
{ /* Llib/object.scm 1103 */

{ 
long BgL_iz00_1510;
BgL_iz00_1510 = ((long)0); 
BgL_zc3z04anonymousza31704ze3z87_1511:
if(
(BgL_iz00_1510<BgL_alenz00_1508))
{ /* Llib/object.scm 1106 */
obj_t BgL_bucketz00_1513;
{ /* Llib/object.scm 1106 */
obj_t BgL_vectorz00_3367;
if(
VECTORP(BgL_marrayz00_1507))
{ /* Llib/object.scm 1106 */
BgL_vectorz00_3367 = BgL_marrayz00_1507; }  else 
{ 
obj_t BgL_auxz00_8846;
BgL_auxz00_8846 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)48656)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_marrayz00_1507); 
FAILURE(BgL_auxz00_8846,BFALSE,BFALSE);} 
BgL_bucketz00_1513 = 
VECTOR_REF(BgL_vectorz00_3367,BgL_iz00_1510); } 
if(
(BgL_bucketz00_1513==BgL_oldzd2defzd2bucketz00_1504))
{ /* Llib/object.scm 1107 */
{ /* Llib/object.scm 1109 */
obj_t BgL_vectorz00_3369;
if(
VECTORP(BgL_marrayz00_1507))
{ /* Llib/object.scm 1109 */
BgL_vectorz00_3369 = BgL_marrayz00_1507; }  else 
{ 
obj_t BgL_auxz00_8855;
BgL_auxz00_8855 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)48741)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_marrayz00_1507); 
FAILURE(BgL_auxz00_8855,BFALSE,BFALSE);} 
{ /* Llib/object.scm 1109 */
bool_t BgL_test5106z00_8859;
{ /* Llib/object.scm 1109 */
long BgL_tmpz00_8860;
BgL_tmpz00_8860 = 
VECTOR_LENGTH(BgL_vectorz00_3369); 
BgL_test5106z00_8859 = 
BOUND_CHECK(BgL_iz00_1510, BgL_tmpz00_8860); } 
if(BgL_test5106z00_8859)
{ /* Llib/object.scm 1109 */
VECTOR_SET(BgL_vectorz00_3369,BgL_iz00_1510,BgL_newzd2defzd2bucketz00_1505); }  else 
{ 
obj_t BgL_auxz00_8864;
BgL_auxz00_8864 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)48728)), BGl_string3957z00zz__objectz00, BgL_vectorz00_3369, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_3369)), 
(int)(BgL_iz00_1510)); 
FAILURE(BgL_auxz00_8864,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_8871;
BgL_iz00_8871 = 
(BgL_iz00_1510+((long)1)); 
BgL_iz00_1510 = BgL_iz00_8871; 
goto BgL_zc3z04anonymousza31704ze3z87_1511;} }  else 
{ 
long BgL_jz00_1517;
BgL_jz00_1517 = ((long)0); 
BgL_zc3z04anonymousza31708ze3z87_1518:
if(
(BgL_jz00_1517==
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))))
{ 
long BgL_iz00_8881;
BgL_iz00_8881 = 
(BgL_iz00_1510+((long)1)); 
BgL_iz00_1510 = BgL_iz00_8881; 
goto BgL_zc3z04anonymousza31704ze3z87_1511;}  else 
{ /* Llib/object.scm 1115 */
bool_t BgL_test5108z00_8883;
{ /* Llib/object.scm 1115 */
obj_t BgL_arg1719z00_1526;
{ /* Llib/object.scm 1115 */
obj_t BgL_vectorz00_3383;
if(
VECTORP(BgL_bucketz00_1513))
{ /* Llib/object.scm 1115 */
BgL_vectorz00_3383 = BgL_bucketz00_1513; }  else 
{ 
obj_t BgL_auxz00_8886;
BgL_auxz00_8886 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)48933)), BGl_string3970z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_bucketz00_1513); 
FAILURE(BgL_auxz00_8886,BFALSE,BFALSE);} 
BgL_arg1719z00_1526 = 
VECTOR_REF(BgL_vectorz00_3383,BgL_jz00_1517); } 
BgL_test5108z00_8883 = 
(BgL_arg1719z00_1526==BgL_oldzd2defaultzd2_1506); } 
if(BgL_test5108z00_8883)
{ /* Llib/object.scm 1115 */
{ /* Llib/object.scm 1116 */
obj_t BgL_vectorz00_3385;
if(
VECTORP(BgL_bucketz00_1513))
{ /* Llib/object.scm 1116 */
BgL_vectorz00_3385 = BgL_bucketz00_1513; }  else 
{ 
obj_t BgL_auxz00_8894;
BgL_auxz00_8894 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)48974)), BGl_string3970z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_bucketz00_1513); 
FAILURE(BgL_auxz00_8894,BFALSE,BFALSE);} 
{ /* Llib/object.scm 1116 */
bool_t BgL_test5111z00_8898;
{ /* Llib/object.scm 1116 */
long BgL_tmpz00_8899;
BgL_tmpz00_8899 = 
VECTOR_LENGTH(BgL_vectorz00_3385); 
BgL_test5111z00_8898 = 
BOUND_CHECK(BgL_jz00_1517, BgL_tmpz00_8899); } 
if(BgL_test5111z00_8898)
{ /* Llib/object.scm 1116 */
VECTOR_SET(BgL_vectorz00_3385,BgL_jz00_1517,BgL_defaultz00_121); }  else 
{ 
obj_t BgL_auxz00_8903;
BgL_auxz00_8903 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)48961)), BGl_string3957z00zz__objectz00, BgL_vectorz00_3385, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_3385)), 
(int)(BgL_jz00_1517)); 
FAILURE(BgL_auxz00_8903,BFALSE,BFALSE);} } } 
{ 
long BgL_jz00_8910;
BgL_jz00_8910 = 
(BgL_jz00_1517+((long)1)); 
BgL_jz00_1517 = BgL_jz00_8910; 
goto BgL_zc3z04anonymousza31708ze3z87_1518;} }  else 
{ 
long BgL_jz00_8912;
BgL_jz00_8912 = 
(BgL_jz00_1517+((long)1)); 
BgL_jz00_1517 = BgL_jz00_8912; 
goto BgL_zc3z04anonymousza31708ze3z87_1518;} } } }  else 
{ /* Llib/object.scm 1105 */
{ /* Llib/object.scm 1121 */
obj_t BgL_genericz00_3391;
if(
PROCEDUREP(BgL_genericz00_120))
{ /* Llib/object.scm 1121 */
BgL_genericz00_3391 = BgL_genericz00_120; }  else 
{ 
obj_t BgL_auxz00_8916;
BgL_auxz00_8916 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)49101)), BGl_string3839z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_120); 
FAILURE(BgL_auxz00_8916,BFALSE,BFALSE);} 
PROCEDURE_SET(BgL_genericz00_3391, 
(int)(((long)0)), 
((obj_t)
((obj_t)BgL_defaultz00_121))); } 
{ /* Llib/object.scm 865 */
obj_t BgL_tmpz00_8924;
if(
PROCEDUREP(BgL_genericz00_120))
{ /* Llib/object.scm 865 */
BgL_tmpz00_8924 = BgL_genericz00_120
; }  else 
{ 
obj_t BgL_auxz00_8927;
BgL_auxz00_8927 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)38052)), BGl_string3839z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_120); 
FAILURE(BgL_auxz00_8927,BFALSE,BFALSE);} 
PROCEDURE_SET(BgL_tmpz00_8924, 
(int)(((long)2)), BgL_newzd2defzd2bucketz00_1505); } 
FREE_VECTOR_UNCOLLECTABLE(BgL_oldzd2defzd2bucketz00_1504); BUNSPEC; } } } } } }  else 
{ /* Llib/object.scm 1094 */BFALSE; } 
return BUNSPEC;}  else 
{ /* Llib/object.scm 1080 */
obj_t BgL_defzd2metzd2_1531;
if(
PROCEDUREP(BgL_defaultz00_121))
{ /* Llib/object.scm 1080 */
BgL_defzd2metzd2_1531 = BgL_defaultz00_121; }  else 
{ /* Llib/object.scm 1080 */
BgL_defzd2metzd2_1531 = BGl_genericzd2nozd2defaultzd2behaviorzd2envz00zz__objectz00; } 
{ /* Llib/object.scm 1080 */
obj_t BgL_defzd2bucketzd2_1532;
{ /* Llib/object.scm 1084 */
int BgL_arg1725z00_1535;
BgL_arg1725z00_1535 = 
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))); 
BgL_defzd2bucketzd2_1532 = 
make_vector_uncollectable(
(long)(BgL_arg1725z00_1535), BgL_defzd2metzd2_1531); } 
{ /* Llib/object.scm 1083 */

{ /* Llib/object.scm 1085 */
bool_t BgL_test5115z00_8943;
{ /* Llib/object.scm 1085 */
long BgL_n1z00_3400;long BgL_n2z00_3401;
{ /* Llib/object.scm 1085 */
obj_t BgL_tmpz00_8944;
{ /* Llib/object.scm 1085 */
obj_t BgL_aux3400z00_5914;
BgL_aux3400z00_5914 = BGl_za2nbzd2genericsza2zd2zz__objectz00; 
if(
INTEGERP(BgL_aux3400z00_5914))
{ /* Llib/object.scm 1085 */
BgL_tmpz00_8944 = BgL_aux3400z00_5914
; }  else 
{ 
obj_t BgL_auxz00_8947;
BgL_auxz00_8947 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)47755)), BGl_string3969z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3400z00_5914); 
FAILURE(BgL_auxz00_8947,BFALSE,BFALSE);} } 
BgL_n1z00_3400 = 
(long)CINT(BgL_tmpz00_8944); } 
{ /* Llib/object.scm 1085 */
obj_t BgL_tmpz00_8952;
{ /* Llib/object.scm 1085 */
obj_t BgL_aux3402z00_5916;
BgL_aux3402z00_5916 = BGl_za2nbzd2genericszd2maxza2z00zz__objectz00; 
if(
INTEGERP(BgL_aux3402z00_5916))
{ /* Llib/object.scm 1085 */
BgL_tmpz00_8952 = BgL_aux3402z00_5916
; }  else 
{ 
obj_t BgL_auxz00_8955;
BgL_auxz00_8955 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)47769)), BGl_string3969z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3402z00_5916); 
FAILURE(BgL_auxz00_8955,BFALSE,BFALSE);} } 
BgL_n2z00_3401 = 
(long)CINT(BgL_tmpz00_8952); } 
BgL_test5115z00_8943 = 
(BgL_n1z00_3400==BgL_n2z00_3401); } 
if(BgL_test5115z00_8943)
{ /* Llib/object.scm 1085 */
BGl_doublezd2nbzd2genericsz12z12zz__objectz00(); }  else 
{ /* Llib/object.scm 1085 */BFALSE; } } 
{ /* Llib/object.scm 1087 */
obj_t BgL_vectorz00_3403;long BgL_kz00_3404;
{ /* Llib/object.scm 1087 */
obj_t BgL_aux3404z00_5918;
BgL_aux3404z00_5918 = BGl_za2genericsza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3404z00_5918))
{ /* Llib/object.scm 1087 */
BgL_vectorz00_3403 = BgL_aux3404z00_5918; }  else 
{ 
obj_t BgL_auxz00_8964;
BgL_auxz00_8964 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)47833)), BGl_string3969z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3404z00_5918); 
FAILURE(BgL_auxz00_8964,BFALSE,BFALSE);} } 
{ /* Llib/object.scm 1087 */
obj_t BgL_tmpz00_8968;
{ /* Llib/object.scm 1087 */
obj_t BgL_aux3406z00_5920;
BgL_aux3406z00_5920 = BGl_za2nbzd2genericsza2zd2zz__objectz00; 
if(
INTEGERP(BgL_aux3406z00_5920))
{ /* Llib/object.scm 1087 */
BgL_tmpz00_8968 = BgL_aux3406z00_5920
; }  else 
{ 
obj_t BgL_auxz00_8971;
BgL_auxz00_8971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)47844)), BGl_string3969z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3406z00_5920); 
FAILURE(BgL_auxz00_8971,BFALSE,BFALSE);} } 
BgL_kz00_3404 = 
(long)CINT(BgL_tmpz00_8968); } 
{ /* Llib/object.scm 1087 */
bool_t BgL_test5120z00_8976;
{ /* Llib/object.scm 1087 */
long BgL_tmpz00_8977;
BgL_tmpz00_8977 = 
VECTOR_LENGTH(BgL_vectorz00_3403); 
BgL_test5120z00_8976 = 
BOUND_CHECK(BgL_kz00_3404, BgL_tmpz00_8977); } 
if(BgL_test5120z00_8976)
{ /* Llib/object.scm 1087 */
VECTOR_SET(BgL_vectorz00_3403,BgL_kz00_3404,BgL_genericz00_120); }  else 
{ 
obj_t BgL_auxz00_8981;
BgL_auxz00_8981 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)47820)), BGl_string3957z00zz__objectz00, BgL_vectorz00_3403, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_3403)), 
(int)(BgL_kz00_3404)); 
FAILURE(BgL_auxz00_8981,BFALSE,BFALSE);} } } 
{ 
obj_t BgL_tmpz00_8988;
{ /* Llib/object.scm 1088 */
obj_t BgL_aux3408z00_5922;
BgL_aux3408z00_5922 = BGl_za2nbzd2genericsza2zd2zz__objectz00; 
if(
INTEGERP(BgL_aux3408z00_5922))
{ /* Llib/object.scm 1088 */
BgL_tmpz00_8988 = BgL_aux3408z00_5922
; }  else 
{ 
obj_t BgL_auxz00_8991;
BgL_auxz00_8991 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)47895)), BGl_string3969z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3408z00_5922); 
FAILURE(BgL_auxz00_8991,BFALSE,BFALSE);} } 
BGl_za2nbzd2genericsza2zd2zz__objectz00 = 
ADDFX(BgL_tmpz00_8988, 
BINT(((long)1))); } 
{ /* Llib/object.scm 1089 */
obj_t BgL_genericz00_3407;obj_t BgL_defaultz00_3408;
if(
PROCEDUREP(BgL_genericz00_120))
{ /* Llib/object.scm 1089 */
BgL_genericz00_3407 = BgL_genericz00_120; }  else 
{ 
obj_t BgL_auxz00_8999;
BgL_auxz00_8999 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)47938)), BGl_string3969z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_120); 
FAILURE(BgL_auxz00_8999,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_defzd2metzd2_1531))
{ /* Llib/object.scm 1089 */
BgL_defaultz00_3408 = BgL_defzd2metzd2_1531; }  else 
{ 
obj_t BgL_auxz00_9005;
BgL_auxz00_9005 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)47946)), BGl_string3969z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_defzd2metzd2_1531); 
FAILURE(BgL_auxz00_9005,BFALSE,BFALSE);} 
PROCEDURE_SET(BgL_genericz00_3407, 
(int)(((long)0)), 
((obj_t)BgL_defaultz00_3408)); } 
{ /* Llib/object.scm 865 */
obj_t BgL_tmpz00_9012;
if(
PROCEDUREP(BgL_genericz00_120))
{ /* Llib/object.scm 865 */
BgL_tmpz00_9012 = BgL_genericz00_120
; }  else 
{ 
obj_t BgL_auxz00_9015;
BgL_auxz00_9015 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)38052)), BGl_string3969z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_120); 
FAILURE(BgL_auxz00_9015,BFALSE,BFALSE);} 
PROCEDURE_SET(BgL_tmpz00_9012, 
(int)(((long)2)), BgL_defzd2bucketzd2_1532); } 
{ /* Llib/object.scm 1091 */
obj_t BgL_arg1723z00_1534;
BgL_arg1723z00_1534 = 
BGl_makezd2methodzd2arrayz00zz__objectz00(BgL_defzd2bucketzd2_1532); 
{ /* Llib/object.scm 1091 */
obj_t BgL_genericz00_3410;
if(
PROCEDUREP(BgL_genericz00_120))
{ /* Llib/object.scm 1091 */
BgL_genericz00_3410 = BgL_genericz00_120; }  else 
{ 
obj_t BgL_auxz00_9024;
BgL_auxz00_9024 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)48037)), BGl_string3969z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_120); 
FAILURE(BgL_auxz00_9024,BFALSE,BFALSE);} 
PROCEDURE_SET(BgL_genericz00_3410, 
(int)(((long)1)), BgL_arg1723z00_1534); } } 
return BUNSPEC;} } } } } 

}



/* %add-method! */
obj_t BGl_z52addzd2methodz12z92zz__objectz00(obj_t BgL_genericz00_123, obj_t BgL_classz00_124, obj_t BgL_methodz00_125)
{
{ /* Llib/object.scm 1130 */
{ /* Llib/object.scm 1131 */
obj_t BgL_top5127z00_9031;
BgL_top5127z00_9031 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(bigloo_generic_mutex); 
BGL_EXITD_PUSH_PROTECT(BgL_top5127z00_9031, bigloo_generic_mutex); BUNSPEC; 
{ /* Llib/object.scm 1131 */
obj_t BgL_tmp5126z00_9030;
{ /* Llib/object.scm 1132 */
bool_t BgL_test5128z00_9035;
{ /* Llib/object.scm 1132 */
obj_t BgL_genericz00_3412;
if(
PROCEDUREP(BgL_genericz00_123))
{ /* Llib/object.scm 1132 */
BgL_genericz00_3412 = BgL_genericz00_123; }  else 
{ 
obj_t BgL_auxz00_9038;
BgL_auxz00_9038 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)49605)), BGl_string3971z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_123); 
FAILURE(BgL_auxz00_9038,BFALSE,BFALSE);} 
{ /* Llib/object.scm 1033 */
obj_t BgL_tmpz00_9042;
BgL_tmpz00_9042 = 
PROCEDURE_REF(BgL_genericz00_3412, 
(int)(((long)1))); 
BgL_test5128z00_9035 = 
VECTORP(BgL_tmpz00_9042); } } 
if(BgL_test5128z00_9035)
{ /* Llib/object.scm 1132 */BFALSE; }  else 
{ /* Llib/object.scm 1132 */
BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00(BgL_genericz00_123, BFALSE, BGl_string3972z00zz__objectz00); } } 
{ /* Llib/object.scm 1136 */
obj_t BgL_methodzd2arrayzd2_1538;
{ /* Llib/object.scm 1136 */
obj_t BgL_genericz00_3416;
if(
PROCEDUREP(BgL_genericz00_123))
{ /* Llib/object.scm 1136 */
BgL_genericz00_3416 = BgL_genericz00_123; }  else 
{ 
obj_t BgL_auxz00_9049;
BgL_auxz00_9049 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)49802)), BGl_string3971z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_123); 
FAILURE(BgL_auxz00_9049,BFALSE,BFALSE);} 
BgL_methodzd2arrayzd2_1538 = 
PROCEDURE_REF(BgL_genericz00_3416, 
(int)(((long)1))); } 
{ /* Llib/object.scm 1136 */
long BgL_cnumz00_1539;
{ /* Llib/object.scm 1137 */
long BgL_res2717z00_3418;
{ /* Llib/object.scm 1137 */
obj_t BgL_classz00_3417;
if(
BGL_CLASSP(BgL_classz00_124))
{ /* Llib/object.scm 1137 */
BgL_classz00_3417 = BgL_classz00_124; }  else 
{ 
obj_t BgL_auxz00_9057;
BgL_auxz00_9057 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)49835)), BGl_string3971z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_124); 
FAILURE(BgL_auxz00_9057,BFALSE,BFALSE);} 
BgL_res2717z00_3418 = 
BGL_CLASS_INDEX(BgL_classz00_3417); } 
BgL_cnumz00_1539 = BgL_res2717z00_3418; } 
{ /* Llib/object.scm 1137 */
obj_t BgL_previousz00_1540;
{ /* Llib/object.scm 1138 */
obj_t BgL_arrayz00_3420;int BgL_offsetz00_3421;
if(
VECTORP(BgL_methodzd2arrayzd2_1538))
{ /* Llib/object.scm 1138 */
BgL_arrayz00_3420 = BgL_methodzd2arrayzd2_1538; }  else 
{ 
obj_t BgL_auxz00_9064;
BgL_auxz00_9064 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)49885)), BGl_string3971z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_methodzd2arrayzd2_1538); 
FAILURE(BgL_auxz00_9064,BFALSE,BFALSE);} 
BgL_offsetz00_3421 = 
(int)(BgL_cnumz00_1539); 
{ /* Llib/object.scm 875 */
long BgL_offsetz00_3422;
BgL_offsetz00_3422 = 
(
(long)(BgL_offsetz00_3421)-OBJECT_TYPE); 
{ /* Llib/object.scm 875 */
long BgL_modz00_3423;
BgL_modz00_3423 = 
(BgL_offsetz00_3422 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/object.scm 876 */
long BgL_restz00_3425;
BgL_restz00_3425 = 
(BgL_offsetz00_3422 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/object.scm 877 */

{ /* Llib/object.scm 878 */
obj_t BgL_bucketz00_3427;
BgL_bucketz00_3427 = 
VECTOR_REF(BgL_arrayz00_3420,BgL_modz00_3423); 
{ /* Llib/object.scm 879 */
obj_t BgL_vectorz00_3449;
if(
VECTORP(BgL_bucketz00_3427))
{ /* Llib/object.scm 879 */
BgL_vectorz00_3449 = BgL_bucketz00_3427; }  else 
{ 
obj_t BgL_auxz00_9088;
BgL_auxz00_9088 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)38897)), BGl_string3971z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_bucketz00_3427); 
FAILURE(BgL_auxz00_9088,BFALSE,BFALSE);} 
BgL_previousz00_1540 = 
VECTOR_REF(BgL_vectorz00_3449,BgL_restz00_3425); } } } } } } } 
{ /* Llib/object.scm 1138 */
obj_t BgL_defz00_1541;
{ /* Llib/object.scm 1139 */
obj_t BgL_res2727z00_3452;
{ /* Llib/object.scm 1139 */
obj_t BgL_genericz00_3451;
if(
PROCEDUREP(BgL_genericz00_123))
{ /* Llib/object.scm 1139 */
BgL_genericz00_3451 = BgL_genericz00_123; }  else 
{ 
obj_t BgL_auxz00_9095;
BgL_auxz00_9095 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)49933)), BGl_string3971z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_123); 
FAILURE(BgL_auxz00_9095,BFALSE,BFALSE);} 
{ /* Llib/object.scm 844 */
obj_t BgL_aux3430z00_5944;
BgL_aux3430z00_5944 = 
PROCEDURE_REF(BgL_genericz00_3451, 
(int)(((long)0))); 
if(
PROCEDUREP(BgL_aux3430z00_5944))
{ /* Llib/object.scm 844 */
BgL_res2727z00_3452 = BgL_aux3430z00_5944; }  else 
{ 
obj_t BgL_auxz00_9103;
BgL_auxz00_9103 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)37126)), BGl_string3971z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3430z00_5944); 
FAILURE(BgL_auxz00_9103,BFALSE,BFALSE);} } } 
BgL_defz00_1541 = BgL_res2727z00_3452; } 
{ /* Llib/object.scm 1139 */

BGl_loopze70ze7zz__objectz00(BgL_defz00_1541, BgL_previousz00_1540, BgL_methodz00_125, BgL_genericz00_123, BgL_methodzd2arrayzd2_1538, BgL_classz00_124); } } } } } 
BgL_tmp5126z00_9030 = BgL_methodz00_125; 
BGL_EXITD_POP_PROTECT(BgL_top5127z00_9031); BUNSPEC; 
BGL_MUTEX_UNLOCK(bigloo_generic_mutex); 
return BgL_tmp5126z00_9030;} } } 

}



/* loop~0 */
obj_t BGl_loopze70ze7zz__objectz00(obj_t BgL_defz00_5543, obj_t BgL_previousz00_5542, obj_t BgL_methodz00_5541, obj_t BgL_genericz00_5540, obj_t BgL_methodzd2arrayzd2_5539, obj_t BgL_claza7za7z00_1543)
{
{ /* Llib/object.scm 1140 */
{ /* Llib/object.scm 1141 */
long BgL_cnz00_1545;
{ /* Llib/object.scm 1141 */
long BgL_res2728z00_3454;
{ /* Llib/object.scm 1141 */
obj_t BgL_classz00_3453;
if(
BGL_CLASSP(BgL_claza7za7z00_1543))
{ /* Llib/object.scm 1141 */
BgL_classz00_3453 = BgL_claza7za7z00_1543; }  else 
{ 
obj_t BgL_auxz00_9112;
BgL_auxz00_9112 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)49999)), BGl_string3973z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_claza7za7z00_1543); 
FAILURE(BgL_auxz00_9112,BFALSE,BFALSE);} 
BgL_res2728z00_3454 = 
BGL_CLASS_INDEX(BgL_classz00_3453); } 
BgL_cnz00_1545 = BgL_res2728z00_3454; } 
{ /* Llib/object.scm 1141 */
obj_t BgL_currentz00_1546;
{ /* Llib/object.scm 1142 */
obj_t BgL_arrayz00_3456;int BgL_offsetz00_3457;
if(
VECTORP(BgL_methodzd2arrayzd2_5539))
{ /* Llib/object.scm 1142 */
BgL_arrayz00_3456 = BgL_methodzd2arrayzd2_5539; }  else 
{ 
obj_t BgL_auxz00_9119;
BgL_auxz00_9119 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)50047)), BGl_string3973z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_methodzd2arrayzd2_5539); 
FAILURE(BgL_auxz00_9119,BFALSE,BFALSE);} 
BgL_offsetz00_3457 = 
(int)(BgL_cnz00_1545); 
{ /* Llib/object.scm 875 */
long BgL_offsetz00_3458;
BgL_offsetz00_3458 = 
(
(long)(BgL_offsetz00_3457)-OBJECT_TYPE); 
{ /* Llib/object.scm 875 */
long BgL_modz00_3459;
BgL_modz00_3459 = 
(BgL_offsetz00_3458 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/object.scm 876 */
long BgL_restz00_3461;
BgL_restz00_3461 = 
(BgL_offsetz00_3458 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/object.scm 877 */

{ /* Llib/object.scm 878 */
obj_t BgL_bucketz00_3463;
BgL_bucketz00_3463 = 
VECTOR_REF(BgL_arrayz00_3456,BgL_modz00_3459); 
{ /* Llib/object.scm 879 */
obj_t BgL_vectorz00_3485;
if(
VECTORP(BgL_bucketz00_3463))
{ /* Llib/object.scm 879 */
BgL_vectorz00_3485 = BgL_bucketz00_3463; }  else 
{ 
obj_t BgL_auxz00_9143;
BgL_auxz00_9143 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)38897)), BGl_string3973z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_bucketz00_3463); 
FAILURE(BgL_auxz00_9143,BFALSE,BFALSE);} 
BgL_currentz00_1546 = 
VECTOR_REF(BgL_vectorz00_3485,BgL_restz00_3461); } } } } } } } 
{ /* Llib/object.scm 1142 */

{ /* Llib/object.scm 1143 */
bool_t BgL_test5139z00_9148;
if(
(BgL_currentz00_1546==BgL_defz00_5543))
{ /* Llib/object.scm 1143 */
BgL_test5139z00_9148 = ((bool_t)1)
; }  else 
{ /* Llib/object.scm 1143 */
BgL_test5139z00_9148 = 
(BgL_currentz00_1546==BgL_previousz00_5542)
; } 
if(BgL_test5139z00_9148)
{ /* Llib/object.scm 1143 */
BGl_methodzd2arrayzd2setz12z12zz__objectz00(BgL_genericz00_5540, BgL_methodzd2arrayzd2_5539, BgL_cnz00_1545, BgL_methodz00_5541); 
{ /* Llib/object.scm 1148 */
obj_t BgL_g1324z00_1549;
{ /* Llib/object.scm 1148 */
obj_t BgL_res2738z00_3488;
{ /* Llib/object.scm 1148 */
obj_t BgL_classz00_3487;
if(
BGL_CLASSP(BgL_claza7za7z00_1543))
{ /* Llib/object.scm 1148 */
BgL_classz00_3487 = BgL_claza7za7z00_1543; }  else 
{ 
obj_t BgL_auxz00_9155;
BgL_auxz00_9155 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)50317)), BGl_string3973z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_claza7za7z00_1543); 
FAILURE(BgL_auxz00_9155,BFALSE,BFALSE);} 
BgL_res2738z00_3488 = 
BGL_CLASS_SUBCLASSES(BgL_classz00_3487); } 
BgL_g1324z00_1549 = BgL_res2738z00_3488; } 
{ 
obj_t BgL_l1322z00_1551;
BgL_l1322z00_1551 = BgL_g1324z00_1549; 
BgL_zc3z04anonymousza31731ze3z87_1552:
if(
PAIRP(BgL_l1322z00_1551))
{ /* Llib/object.scm 1148 */
BGl_loopze70ze7zz__objectz00(BgL_defz00_5543, BgL_previousz00_5542, BgL_methodz00_5541, BgL_genericz00_5540, BgL_methodzd2arrayzd2_5539, 
CAR(BgL_l1322z00_1551)); 
{ 
obj_t BgL_l1322z00_9164;
BgL_l1322z00_9164 = 
CDR(BgL_l1322z00_1551); 
BgL_l1322z00_1551 = BgL_l1322z00_9164; 
goto BgL_zc3z04anonymousza31731ze3z87_1552;} }  else 
{ /* Llib/object.scm 1148 */
if(
NULLP(BgL_l1322z00_1551))
{ /* Llib/object.scm 1148 */
return BTRUE;}  else 
{ /* Llib/object.scm 1148 */
return 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string3962z00zz__objectz00, BGl_string3949z00zz__objectz00, BgL_l1322z00_1551, BGl_string3838z00zz__objectz00, 
BINT(((long)50284)));} } } } }  else 
{ /* Llib/object.scm 1143 */
return BFALSE;} } } } } } 

}



/* generic-add-method! */
BGL_EXPORTED_DEF obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t BgL_genericz00_126, obj_t BgL_classz00_127, obj_t BgL_methodz00_128, obj_t BgL_namez00_129)
{
{ /* Llib/object.scm 1154 */
{ /* Llib/object.scm 1156 */
bool_t BgL_test5144z00_9170;
{ /* Llib/object.scm 1156 */
bool_t BgL_res2741z00_3493;
BgL_res2741z00_3493 = 
BGL_CLASSP(BgL_classz00_127); 
BgL_test5144z00_9170 = BgL_res2741z00_3493; } 
if(BgL_test5144z00_9170)
{ /* Llib/object.scm 1158 */
bool_t BgL_test5145z00_9172;
{ /* Llib/object.scm 1158 */
bool_t BgL_test5146z00_9173;
{ /* Llib/object.scm 1158 */
int BgL_arg1750z00_1574;int BgL_arg1751z00_1575;
BgL_arg1750z00_1574 = 
PROCEDURE_ARITY(BgL_genericz00_126); 
BgL_arg1751z00_1575 = 
PROCEDURE_ARITY(BgL_methodz00_128); 
BgL_test5146z00_9173 = 
(
(long)(BgL_arg1750z00_1574)==
(long)(BgL_arg1751z00_1575)); } 
if(BgL_test5146z00_9173)
{ /* Llib/object.scm 1158 */
BgL_test5145z00_9172 = ((bool_t)0)
; }  else 
{ /* Llib/object.scm 1159 */
int BgL_arg1748z00_1573;
BgL_arg1748z00_1573 = 
PROCEDURE_ARITY(BgL_genericz00_126); 
BgL_test5145z00_9172 = 
(
(long)(BgL_arg1748z00_1573)>=((long)0)); } } 
if(BgL_test5145z00_9172)
{ /* Llib/object.scm 1161 */
obj_t BgL_arg1744z00_1568;int BgL_arg1745z00_1569;
{ /* Llib/object.scm 1161 */
int BgL_arg1746z00_1570;
BgL_arg1746z00_1570 = 
PROCEDURE_ARITY(BgL_genericz00_126); 
{ /* Llib/object.scm 1160 */
obj_t BgL_list1747z00_1571;
BgL_list1747z00_1571 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg1746z00_1570), BNIL); 
BgL_arg1744z00_1568 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string3974z00zz__objectz00, BgL_list1747z00_1571); } } 
BgL_arg1745z00_1569 = 
PROCEDURE_ARITY(BgL_methodz00_128); 
{ /* Llib/object.scm 1160 */
obj_t BgL_aux3440z00_5954;
BgL_aux3440z00_5954 = 
BGl_errorz00zz__errorz00(BgL_namez00_129, BgL_arg1744z00_1568, 
BINT(BgL_arg1745z00_1569)); 
if(
PROCEDUREP(BgL_aux3440z00_5954))
{ /* Llib/object.scm 1160 */
return BgL_aux3440z00_5954;}  else 
{ 
obj_t BgL_auxz00_9191;
BgL_auxz00_9191 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)50838)), BGl_string3975z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3440z00_5954); 
FAILURE(BgL_auxz00_9191,BFALSE,BFALSE);} } }  else 
{ /* Llib/object.scm 1164 */
obj_t BgL_aux3442z00_5956;
BgL_aux3442z00_5956 = 
BGl_z52addzd2methodz12z92zz__objectz00(BgL_genericz00_126, BgL_classz00_127, BgL_methodz00_128); 
if(
PROCEDUREP(BgL_aux3442z00_5956))
{ /* Llib/object.scm 1164 */
return BgL_aux3442z00_5956;}  else 
{ 
obj_t BgL_auxz00_9198;
BgL_auxz00_9198 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)50988)), BGl_string3975z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3442z00_5956); 
FAILURE(BgL_auxz00_9198,BFALSE,BFALSE);} } }  else 
{ /* Llib/object.scm 1157 */
obj_t BgL_aux3444z00_5958;
BgL_aux3444z00_5958 = 
BGl_errorz00zz__errorz00(BgL_namez00_129, BGl_string3976z00zz__objectz00, BgL_classz00_127); 
if(
PROCEDUREP(BgL_aux3444z00_5958))
{ /* Llib/object.scm 1157 */
return BgL_aux3444z00_5958;}  else 
{ 
obj_t BgL_auxz00_9205;
BgL_auxz00_9205 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)50668)), BGl_string3975z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3444z00_5958); 
FAILURE(BgL_auxz00_9205,BFALSE,BFALSE);} } } } 

}



/* &generic-add-method! */
obj_t BGl_z62genericzd2addzd2methodz12z70zz__objectz00(obj_t BgL_envz00_5025, obj_t BgL_genericz00_5026, obj_t BgL_classz00_5027, obj_t BgL_methodz00_5028, obj_t BgL_namez00_5029)
{
{ /* Llib/object.scm 1154 */
{ /* Llib/object.scm 1156 */
obj_t BgL_auxz00_9216;obj_t BgL_auxz00_9209;
if(
PROCEDUREP(BgL_methodz00_5028))
{ /* Llib/object.scm 1156 */
BgL_auxz00_9216 = BgL_methodz00_5028
; }  else 
{ 
obj_t BgL_auxz00_9219;
BgL_auxz00_9219 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)50639)), BGl_string3977z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_methodz00_5028); 
FAILURE(BgL_auxz00_9219,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_genericz00_5026))
{ /* Llib/object.scm 1156 */
BgL_auxz00_9209 = BgL_genericz00_5026
; }  else 
{ 
obj_t BgL_auxz00_9212;
BgL_auxz00_9212 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)50639)), BGl_string3977z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_5026); 
FAILURE(BgL_auxz00_9212,BFALSE,BFALSE);} 
return 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BgL_auxz00_9209, BgL_classz00_5027, BgL_auxz00_9216, BgL_namez00_5029);} } 

}



/* generic-add-eval-method! */
BGL_EXPORTED_DEF obj_t BGl_genericzd2addzd2evalzd2methodz12zc0zz__objectz00(obj_t BgL_genericz00_130, obj_t BgL_classz00_131, obj_t BgL_methodz00_132, obj_t BgL_namez00_133)
{
{ /* Llib/object.scm 1174 */
{ /* Llib/object.scm 1176 */
bool_t BgL_test5152z00_9224;
{ /* Llib/object.scm 1176 */
bool_t BgL_res2749z00_3509;
BgL_res2749z00_3509 = 
BGL_CLASSP(BgL_classz00_131); 
BgL_test5152z00_9224 = BgL_res2749z00_3509; } 
if(BgL_test5152z00_9224)
{ /* Llib/object.scm 1178 */
bool_t BgL_test5153z00_9226;
{ /* Llib/object.scm 1178 */
bool_t BgL_test5154z00_9227;
{ /* Llib/object.scm 1178 */
int BgL_arg1770z00_1595;int BgL_arg1771z00_1596;
BgL_arg1770z00_1595 = 
PROCEDURE_ARITY(BgL_genericz00_130); 
BgL_arg1771z00_1596 = 
PROCEDURE_ARITY(BgL_methodz00_132); 
BgL_test5154z00_9227 = 
(
(long)(BgL_arg1770z00_1595)==
(long)(BgL_arg1771z00_1596)); } 
if(BgL_test5154z00_9227)
{ /* Llib/object.scm 1178 */
BgL_test5153z00_9226 = ((bool_t)0)
; }  else 
{ /* Llib/object.scm 1179 */
bool_t BgL_test5155z00_9233;
{ /* Llib/object.scm 1179 */
int BgL_arg1769z00_1594;
BgL_arg1769z00_1594 = 
PROCEDURE_ARITY(BgL_genericz00_130); 
BgL_test5155z00_9233 = 
(
(long)(BgL_arg1769z00_1594)>((long)4)); } 
if(BgL_test5155z00_9233)
{ /* Llib/object.scm 1180 */
int BgL_arg1768z00_1593;
BgL_arg1768z00_1593 = 
PROCEDURE_ARITY(BgL_methodz00_132); 
BgL_test5153z00_9226 = 
(
(long)(BgL_arg1768z00_1593)>=((long)0)); }  else 
{ /* Llib/object.scm 1179 */
BgL_test5153z00_9226 = ((bool_t)0)
; } } } 
if(BgL_test5153z00_9226)
{ /* Llib/object.scm 1182 */
obj_t BgL_arg1764z00_1587;int BgL_arg1765z00_1588;
{ /* Llib/object.scm 1182 */
int BgL_arg1766z00_1589;
BgL_arg1766z00_1589 = 
PROCEDURE_ARITY(BgL_genericz00_130); 
{ /* Llib/object.scm 1181 */
obj_t BgL_list1767z00_1590;
BgL_list1767z00_1590 = 
MAKE_YOUNG_PAIR(
BINT(BgL_arg1766z00_1589), BNIL); 
BgL_arg1764z00_1587 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string3974z00zz__objectz00, BgL_list1767z00_1590); } } 
BgL_arg1765z00_1588 = 
PROCEDURE_ARITY(BgL_methodz00_132); 
{ /* Llib/object.scm 1181 */
obj_t BgL_aux3450z00_5964;
BgL_aux3450z00_5964 = 
BGl_errorz00zz__errorz00(BgL_namez00_133, BgL_arg1764z00_1587, 
BINT(BgL_arg1765z00_1588)); 
if(
PROCEDUREP(BgL_aux3450z00_5964))
{ /* Llib/object.scm 1181 */
return BgL_aux3450z00_5964;}  else 
{ 
obj_t BgL_auxz00_9249;
BgL_auxz00_9249 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)51933)), BGl_string3978z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3450z00_5964); 
FAILURE(BgL_auxz00_9249,BFALSE,BFALSE);} } }  else 
{ /* Llib/object.scm 1185 */
obj_t BgL_aux3452z00_5966;
BgL_aux3452z00_5966 = 
BGl_z52addzd2methodz12z92zz__objectz00(BgL_genericz00_130, BgL_classz00_131, BgL_methodz00_132); 
if(
PROCEDUREP(BgL_aux3452z00_5966))
{ /* Llib/object.scm 1185 */
return BgL_aux3452z00_5966;}  else 
{ 
obj_t BgL_auxz00_9256;
BgL_auxz00_9256 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)52083)), BGl_string3978z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3452z00_5966); 
FAILURE(BgL_auxz00_9256,BFALSE,BFALSE);} } }  else 
{ /* Llib/object.scm 1177 */
obj_t BgL_aux3454z00_5968;
BgL_aux3454z00_5968 = 
BGl_errorz00zz__errorz00(BgL_namez00_133, BGl_string3976z00zz__objectz00, BgL_classz00_131); 
if(
PROCEDUREP(BgL_aux3454z00_5968))
{ /* Llib/object.scm 1177 */
return BgL_aux3454z00_5968;}  else 
{ 
obj_t BgL_auxz00_9263;
BgL_auxz00_9263 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)51725)), BGl_string3978z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3454z00_5968); 
FAILURE(BgL_auxz00_9263,BFALSE,BFALSE);} } } } 

}



/* &generic-add-eval-method! */
obj_t BGl_z62genericzd2addzd2evalzd2methodz12za2zz__objectz00(obj_t BgL_envz00_5030, obj_t BgL_genericz00_5031, obj_t BgL_classz00_5032, obj_t BgL_methodz00_5033, obj_t BgL_namez00_5034)
{
{ /* Llib/object.scm 1174 */
{ /* Llib/object.scm 1176 */
obj_t BgL_auxz00_9274;obj_t BgL_auxz00_9267;
if(
PROCEDUREP(BgL_methodz00_5033))
{ /* Llib/object.scm 1176 */
BgL_auxz00_9274 = BgL_methodz00_5033
; }  else 
{ 
obj_t BgL_auxz00_9277;
BgL_auxz00_9277 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)51696)), BGl_string3979z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_methodz00_5033); 
FAILURE(BgL_auxz00_9277,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_genericz00_5031))
{ /* Llib/object.scm 1176 */
BgL_auxz00_9267 = BgL_genericz00_5031
; }  else 
{ 
obj_t BgL_auxz00_9270;
BgL_auxz00_9270 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)51696)), BGl_string3979z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_5031); 
FAILURE(BgL_auxz00_9270,BFALSE,BFALSE);} 
return 
BGl_genericzd2addzd2evalzd2methodz12zc0zz__objectz00(BgL_auxz00_9267, BgL_classz00_5032, BgL_auxz00_9274, BgL_namez00_5034);} } 

}



/* find-method */
BGL_EXPORTED_DEF obj_t BGl_findzd2methodzd2zz__objectz00(BgL_objectz00_bglt BgL_objz00_134, obj_t BgL_genericz00_135)
{
{ /* Llib/object.scm 1192 */
{ /* Llib/object.scm 1193 */
long BgL_objzd2classzd2numz00_6545;
{ /* Llib/object.scm 1193 */
long BgL_res2759z00_6546;
BgL_res2759z00_6546 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_134); 
BgL_objzd2classzd2numz00_6545 = BgL_res2759z00_6546; } 
{ /* Llib/object.scm 1194 */
obj_t BgL_arg1772z00_6547;
BgL_arg1772z00_6547 = 
PROCEDURE_REF(BgL_genericz00_135, 
(int)(((long)1))); 
{ /* Llib/object.scm 1194 */
obj_t BgL_arrayz00_6548;int BgL_offsetz00_6549;
if(
VECTORP(BgL_arg1772z00_6547))
{ /* Llib/object.scm 1194 */
BgL_arrayz00_6548 = BgL_arg1772z00_6547; }  else 
{ 
obj_t BgL_auxz00_9287;
BgL_auxz00_9287 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)52644)), BGl_string3980z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_arg1772z00_6547); 
FAILURE(BgL_auxz00_9287,BFALSE,BFALSE);} 
BgL_offsetz00_6549 = 
(int)(BgL_objzd2classzd2numz00_6545); 
{ /* Llib/object.scm 875 */
long BgL_offsetz00_6550;
BgL_offsetz00_6550 = 
(
(long)(BgL_offsetz00_6549)-OBJECT_TYPE); 
{ /* Llib/object.scm 875 */
long BgL_modz00_6551;
BgL_modz00_6551 = 
(BgL_offsetz00_6550 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/object.scm 876 */
long BgL_restz00_6552;
BgL_restz00_6552 = 
(BgL_offsetz00_6550 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/object.scm 877 */

{ /* Llib/object.scm 878 */
obj_t BgL_bucketz00_6553;
BgL_bucketz00_6553 = 
VECTOR_REF(BgL_arrayz00_6548,BgL_modz00_6551); 
{ /* Llib/object.scm 879 */
obj_t BgL_vectorz00_6554;
if(
VECTORP(BgL_bucketz00_6553))
{ /* Llib/object.scm 879 */
BgL_vectorz00_6554 = BgL_bucketz00_6553; }  else 
{ 
obj_t BgL_auxz00_9311;
BgL_auxz00_9311 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)38897)), BGl_string3980z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_bucketz00_6553); 
FAILURE(BgL_auxz00_9311,BFALSE,BFALSE);} 
{ /* Llib/object.scm 879 */
obj_t BgL_aux3464z00_6555;
BgL_aux3464z00_6555 = 
VECTOR_REF(BgL_vectorz00_6554,BgL_restz00_6552); 
if(
PROCEDUREP(BgL_aux3464z00_6555))
{ /* Llib/object.scm 879 */
return BgL_aux3464z00_6555;}  else 
{ 
obj_t BgL_auxz00_9318;
BgL_auxz00_9318 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)38882)), BGl_string3980z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3464z00_6555); 
FAILURE(BgL_auxz00_9318,BFALSE,BFALSE);} } } } } } } } } } } } 

}



/* &find-method */
obj_t BGl_z62findzd2methodzb0zz__objectz00(obj_t BgL_envz00_5035, obj_t BgL_objz00_5036, obj_t BgL_genericz00_5037)
{
{ /* Llib/object.scm 1192 */
{ /* Llib/object.scm 1193 */
obj_t BgL_auxz00_9330;BgL_objectz00_bglt BgL_auxz00_9322;
if(
PROCEDUREP(BgL_genericz00_5037))
{ /* Llib/object.scm 1193 */
BgL_auxz00_9330 = BgL_genericz00_5037
; }  else 
{ 
obj_t BgL_auxz00_9333;
BgL_auxz00_9333 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)52537)), BGl_string3981z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_5037); 
FAILURE(BgL_auxz00_9333,BFALSE,BFALSE);} 
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_5036, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1193 */
BgL_auxz00_9322 = 
((BgL_objectz00_bglt)BgL_objz00_5036)
; }  else 
{ 
obj_t BgL_auxz00_9326;
BgL_auxz00_9326 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)52537)), BGl_string3981z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_5036); 
FAILURE(BgL_auxz00_9326,BFALSE,BFALSE);} 
return 
BGl_findzd2methodzd2zz__objectz00(BgL_auxz00_9322, BgL_auxz00_9330);} } 

}



/* find-super-class-method */
BGL_EXPORTED_DEF obj_t BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt BgL_objz00_136, obj_t BgL_genericz00_137, obj_t BgL_classz00_138)
{
{ /* Llib/object.scm 1201 */
{ /* Llib/object.scm 1202 */
obj_t BgL_g1221z00_1599;
{ /* Llib/object.scm 1202 */
obj_t BgL_classz00_3566;
if(
BGL_CLASSP(BgL_classz00_138))
{ /* Llib/object.scm 1202 */
BgL_classz00_3566 = BgL_classz00_138; }  else 
{ 
obj_t BgL_auxz00_9340;
BgL_auxz00_9340 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)53120)), BGl_string3982z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_138); 
FAILURE(BgL_auxz00_9340,BFALSE,BFALSE);} 
BgL_g1221z00_1599 = 
BGL_CLASS_SUPER(BgL_classz00_3566); } 
{ 
obj_t BgL_superz00_1601;
{ /* Llib/object.scm 1202 */
obj_t BgL_aux3482z00_5998;
BgL_superz00_1601 = BgL_g1221z00_1599; 
BgL_zc3z04anonymousza31773ze3z87_1602:
{ /* Llib/object.scm 1203 */
bool_t BgL_test5167z00_9345;
{ /* Llib/object.scm 1203 */
bool_t BgL_res2769z00_3567;
BgL_res2769z00_3567 = 
BGL_CLASSP(BgL_superz00_1601); 
BgL_test5167z00_9345 = BgL_res2769z00_3567; } 
if(BgL_test5167z00_9345)
{ /* Llib/object.scm 1205 */
long BgL_objzd2superzd2classzd2numzd2_1604;
{ /* Llib/object.scm 1205 */
long BgL_res2770z00_3569;
{ /* Llib/object.scm 1205 */
obj_t BgL_classz00_3568;
if(
BGL_CLASSP(BgL_superz00_1601))
{ /* Llib/object.scm 1205 */
BgL_classz00_3568 = BgL_superz00_1601; }  else 
{ 
obj_t BgL_auxz00_9349;
BgL_auxz00_9349 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)53230)), BGl_string3839z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_superz00_1601); 
FAILURE(BgL_auxz00_9349,BFALSE,BFALSE);} 
BgL_res2770z00_3569 = 
BGL_CLASS_INDEX(BgL_classz00_3568); } 
BgL_objzd2superzd2classzd2numzd2_1604 = BgL_res2770z00_3569; } 
{ /* Llib/object.scm 1206 */
obj_t BgL_methodz00_1605;
{ /* Llib/object.scm 1207 */
obj_t BgL_arg1775z00_1607;
BgL_arg1775z00_1607 = 
PROCEDURE_REF(BgL_genericz00_137, 
(int)(((long)1))); 
{ /* Llib/object.scm 1206 */
obj_t BgL_arrayz00_3572;int BgL_offsetz00_3573;
if(
VECTORP(BgL_arg1775z00_1607))
{ /* Llib/object.scm 1207 */
BgL_arrayz00_3572 = BgL_arg1775z00_1607; }  else 
{ 
obj_t BgL_auxz00_9358;
BgL_auxz00_9358 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)53323)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_arg1775z00_1607); 
FAILURE(BgL_auxz00_9358,BFALSE,BFALSE);} 
BgL_offsetz00_3573 = 
(int)(BgL_objzd2superzd2classzd2numzd2_1604); 
{ /* Llib/object.scm 875 */
long BgL_offsetz00_3574;
BgL_offsetz00_3574 = 
(
(long)(BgL_offsetz00_3573)-OBJECT_TYPE); 
{ /* Llib/object.scm 875 */
long BgL_modz00_3575;
BgL_modz00_3575 = 
(BgL_offsetz00_3574 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/object.scm 876 */
long BgL_restz00_3577;
BgL_restz00_3577 = 
(BgL_offsetz00_3574 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/object.scm 877 */

{ /* Llib/object.scm 878 */
obj_t BgL_bucketz00_3579;
BgL_bucketz00_3579 = 
VECTOR_REF(BgL_arrayz00_3572,BgL_modz00_3575); 
{ /* Llib/object.scm 879 */
obj_t BgL_vectorz00_3601;
if(
VECTORP(BgL_bucketz00_3579))
{ /* Llib/object.scm 879 */
BgL_vectorz00_3601 = BgL_bucketz00_3579; }  else 
{ 
obj_t BgL_auxz00_9382;
BgL_auxz00_9382 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)38897)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_bucketz00_3579); 
FAILURE(BgL_auxz00_9382,BFALSE,BFALSE);} 
BgL_methodz00_1605 = 
VECTOR_REF(BgL_vectorz00_3601,BgL_restz00_3577); } } } } } } } } 
if(
CBOOL(BgL_methodz00_1605))
{ /* Llib/object.scm 1209 */
BgL_aux3482z00_5998 = BgL_methodz00_1605; }  else 
{ /* Llib/object.scm 1211 */
obj_t BgL_newzd2superzd2_1606;
{ /* Llib/object.scm 1211 */
obj_t BgL_classz00_3603;
if(
BGL_CLASSP(BgL_superz00_1601))
{ /* Llib/object.scm 1211 */
BgL_classz00_3603 = BgL_superz00_1601; }  else 
{ 
obj_t BgL_auxz00_9391;
BgL_auxz00_9391 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)53419)), BGl_string3839z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_superz00_1601); 
FAILURE(BgL_auxz00_9391,BFALSE,BFALSE);} 
BgL_newzd2superzd2_1606 = 
BGL_CLASS_SUPER(BgL_classz00_3603); } 
{ 
obj_t BgL_superz00_9396;
BgL_superz00_9396 = BgL_newzd2superzd2_1606; 
BgL_superz00_1601 = BgL_superz00_9396; 
goto BgL_zc3z04anonymousza31773ze3z87_1602;} } } }  else 
{ /* Llib/object.scm 1204 */
obj_t BgL_res2780z00_3605;
{ /* Llib/object.scm 844 */
obj_t BgL_aux3480z00_5996;
BgL_aux3480z00_5996 = 
PROCEDURE_REF(BgL_genericz00_137, 
(int)(((long)0))); 
if(
PROCEDUREP(BgL_aux3480z00_5996))
{ /* Llib/object.scm 844 */
BgL_res2780z00_3605 = BgL_aux3480z00_5996; }  else 
{ 
obj_t BgL_auxz00_9401;
BgL_auxz00_9401 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)37126)), BGl_string3839z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3480z00_5996); 
FAILURE(BgL_auxz00_9401,BFALSE,BFALSE);} } 
BgL_aux3482z00_5998 = BgL_res2780z00_3605; } } 
if(
PROCEDUREP(BgL_aux3482z00_5998))
{ /* Llib/object.scm 1202 */
return BgL_aux3482z00_5998;}  else 
{ 
obj_t BgL_auxz00_9407;
BgL_auxz00_9407 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)53089)), BGl_string3982z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3482z00_5998); 
FAILURE(BgL_auxz00_9407,BFALSE,BFALSE);} } } } } 

}



/* &find-super-class-method */
obj_t BGl_z62findzd2superzd2classzd2methodzb0zz__objectz00(obj_t BgL_envz00_5038, obj_t BgL_objz00_5039, obj_t BgL_genericz00_5040, obj_t BgL_classz00_5041)
{
{ /* Llib/object.scm 1201 */
{ /* Llib/object.scm 1202 */
obj_t BgL_auxz00_9419;BgL_objectz00_bglt BgL_auxz00_9411;
if(
PROCEDUREP(BgL_genericz00_5040))
{ /* Llib/object.scm 1202 */
BgL_auxz00_9419 = BgL_genericz00_5040
; }  else 
{ 
obj_t BgL_auxz00_9422;
BgL_auxz00_9422 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)53089)), BGl_string3983z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_5040); 
FAILURE(BgL_auxz00_9422,BFALSE,BFALSE);} 
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_5039, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1202 */
BgL_auxz00_9411 = 
((BgL_objectz00_bglt)BgL_objz00_5039)
; }  else 
{ 
obj_t BgL_auxz00_9415;
BgL_auxz00_9415 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)53089)), BGl_string3983z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_5039); 
FAILURE(BgL_auxz00_9415,BFALSE,BFALSE);} 
return 
BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_auxz00_9411, BgL_auxz00_9419, BgL_classz00_5041);} } 

}



/* find-method-from */
BGL_EXPORTED_DEF obj_t BGl_findzd2methodzd2fromz00zz__objectz00(BgL_objectz00_bglt BgL_objz00_139, obj_t BgL_genericz00_140, obj_t BgL_classz00_141)
{
{ /* Llib/object.scm 1217 */
{ 
obj_t BgL_classz00_1610;
BgL_classz00_1610 = BgL_classz00_141; 
BgL_zc3z04anonymousza31776ze3z87_1611:
{ /* Llib/object.scm 1219 */
bool_t BgL_test5177z00_9427;
{ /* Llib/object.scm 1219 */
bool_t BgL_res2781z00_3606;
BgL_res2781z00_3606 = 
BGL_CLASSP(BgL_classz00_1610); 
BgL_test5177z00_9427 = BgL_res2781z00_3606; } 
if(BgL_test5177z00_9427)
{ /* Llib/object.scm 1221 */
long BgL_objzd2superzd2classzd2numzd2_1613;
{ /* Llib/object.scm 1221 */
long BgL_res2782z00_3608;
{ /* Llib/object.scm 1221 */
obj_t BgL_classz00_3607;
if(
BGL_CLASSP(BgL_classz00_1610))
{ /* Llib/object.scm 1221 */
BgL_classz00_3607 = BgL_classz00_1610; }  else 
{ 
obj_t BgL_auxz00_9431;
BgL_auxz00_9431 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)53846)), BGl_string3839z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_1610); 
FAILURE(BgL_auxz00_9431,BFALSE,BFALSE);} 
BgL_res2782z00_3608 = 
BGL_CLASS_INDEX(BgL_classz00_3607); } 
BgL_objzd2superzd2classzd2numzd2_1613 = BgL_res2782z00_3608; } 
{ /* Llib/object.scm 1222 */
obj_t BgL_methodz00_1614;
{ /* Llib/object.scm 1223 */
obj_t BgL_arg1779z00_1616;
BgL_arg1779z00_1616 = 
PROCEDURE_REF(BgL_genericz00_140, 
(int)(((long)1))); 
{ /* Llib/object.scm 1222 */
obj_t BgL_arrayz00_3611;int BgL_offsetz00_3612;
if(
VECTORP(BgL_arg1779z00_1616))
{ /* Llib/object.scm 1223 */
BgL_arrayz00_3611 = BgL_arg1779z00_1616; }  else 
{ 
obj_t BgL_auxz00_9440;
BgL_auxz00_9440 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)53939)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_arg1779z00_1616); 
FAILURE(BgL_auxz00_9440,BFALSE,BFALSE);} 
BgL_offsetz00_3612 = 
(int)(BgL_objzd2superzd2classzd2numzd2_1613); 
{ /* Llib/object.scm 875 */
long BgL_offsetz00_3613;
BgL_offsetz00_3613 = 
(
(long)(BgL_offsetz00_3612)-OBJECT_TYPE); 
{ /* Llib/object.scm 875 */
long BgL_modz00_3614;
BgL_modz00_3614 = 
(BgL_offsetz00_3613 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/object.scm 876 */
long BgL_restz00_3616;
BgL_restz00_3616 = 
(BgL_offsetz00_3613 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/object.scm 877 */

{ /* Llib/object.scm 878 */
obj_t BgL_bucketz00_3618;
BgL_bucketz00_3618 = 
VECTOR_REF(BgL_arrayz00_3611,BgL_modz00_3614); 
{ /* Llib/object.scm 879 */
obj_t BgL_vectorz00_3640;
if(
VECTORP(BgL_bucketz00_3618))
{ /* Llib/object.scm 879 */
BgL_vectorz00_3640 = BgL_bucketz00_3618; }  else 
{ 
obj_t BgL_auxz00_9464;
BgL_auxz00_9464 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)38897)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_bucketz00_3618); 
FAILURE(BgL_auxz00_9464,BFALSE,BFALSE);} 
BgL_methodz00_1614 = 
VECTOR_REF(BgL_vectorz00_3640,BgL_restz00_3616); } } } } } } } } 
if(
CBOOL(BgL_methodz00_1614))
{ /* Llib/object.scm 1225 */
return 
MAKE_YOUNG_PAIR(BgL_classz00_1610, BgL_methodz00_1614);}  else 
{ /* Llib/object.scm 1227 */
obj_t BgL_arg1778z00_1615;
{ /* Llib/object.scm 1227 */
obj_t BgL_classz00_3642;
if(
BGL_CLASSP(BgL_classz00_1610))
{ /* Llib/object.scm 1227 */
BgL_classz00_3642 = BgL_classz00_1610; }  else 
{ 
obj_t BgL_auxz00_9474;
BgL_auxz00_9474 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)54037)), BGl_string3839z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_1610); 
FAILURE(BgL_auxz00_9474,BFALSE,BFALSE);} 
BgL_arg1778z00_1615 = 
BGL_CLASS_SUPER(BgL_classz00_3642); } 
{ 
obj_t BgL_classz00_9479;
BgL_classz00_9479 = BgL_arg1778z00_1615; 
BgL_classz00_1610 = BgL_classz00_9479; 
goto BgL_zc3z04anonymousza31776ze3z87_1611;} } } }  else 
{ /* Llib/object.scm 1219 */
return 
MAKE_YOUNG_PAIR(BFALSE, BFALSE);} } } } 

}



/* &find-method-from */
obj_t BGl_z62findzd2methodzd2fromz62zz__objectz00(obj_t BgL_envz00_5042, obj_t BgL_objz00_5043, obj_t BgL_genericz00_5044, obj_t BgL_classz00_5045)
{
{ /* Llib/object.scm 1217 */
{ /* Llib/object.scm 1219 */
obj_t BgL_auxz00_9489;BgL_objectz00_bglt BgL_auxz00_9481;
if(
PROCEDUREP(BgL_genericz00_5044))
{ /* Llib/object.scm 1219 */
BgL_auxz00_9489 = BgL_genericz00_5044
; }  else 
{ 
obj_t BgL_auxz00_9492;
BgL_auxz00_9492 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)53764)), BGl_string3984z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_genericz00_5044); 
FAILURE(BgL_auxz00_9492,BFALSE,BFALSE);} 
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_5043, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1219 */
BgL_auxz00_9481 = 
((BgL_objectz00_bglt)BgL_objz00_5043)
; }  else 
{ 
obj_t BgL_auxz00_9485;
BgL_auxz00_9485 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)53764)), BGl_string3984z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_5043); 
FAILURE(BgL_auxz00_9485,BFALSE,BFALSE);} 
return 
BGl_findzd2methodzd2fromz00zz__objectz00(BgL_auxz00_9481, BgL_auxz00_9489, BgL_classz00_5045);} } 

}



/* nil? */
BGL_EXPORTED_DEF bool_t BGl_nilzf3zf3zz__objectz00(BgL_objectz00_bglt BgL_objz00_142)
{
{ /* Llib/object.scm 1232 */
{ /* Llib/object.scm 1233 */
obj_t BgL_klassz00_3643;
{ /* Llib/object.scm 838 */
long BgL_arg1547z00_3646;
{ /* Llib/object.scm 838 */
long BgL_arg1551z00_3647;
{ /* Llib/object.scm 838 */
long BgL_res2792z00_3649;
BgL_res2792z00_3649 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_142); 
BgL_arg1551z00_3647 = BgL_res2792z00_3649; } 
BgL_arg1547z00_3646 = 
(BgL_arg1551z00_3647-OBJECT_TYPE); } 
{ /* Llib/object.scm 837 */
obj_t BgL_vectorz00_3653;
{ /* Llib/object.scm 837 */
obj_t BgL_aux3500z00_6020;
BgL_aux3500z00_6020 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3500z00_6020))
{ /* Llib/object.scm 837 */
BgL_vectorz00_3653 = BgL_aux3500z00_6020; }  else 
{ 
obj_t BgL_auxz00_9501;
BgL_auxz00_9501 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)36789)), BGl_string3985z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3500z00_6020); 
FAILURE(BgL_auxz00_9501,BFALSE,BFALSE);} } 
BgL_klassz00_3643 = 
VECTOR_REF(BgL_vectorz00_3653,BgL_arg1547z00_3646); } } 
{ /* Llib/object.scm 1234 */
obj_t BgL_arg1780z00_3644;
{ /* Llib/object.scm 1234 */
obj_t BgL_classz00_3655;
if(
BGL_CLASSP(BgL_klassz00_3643))
{ /* Llib/object.scm 1234 */
BgL_classz00_3655 = BgL_klassz00_3643; }  else 
{ 
obj_t BgL_auxz00_9508;
BgL_auxz00_9508 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)54363)), BGl_string3985z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_klassz00_3643); 
FAILURE(BgL_auxz00_9508,BFALSE,BFALSE);} 
{ /* Llib/object.scm 716 */
bool_t BgL_test5187z00_9512;
{ /* Llib/object.scm 716 */
bool_t BgL_res2794z00_3658;
BgL_res2794z00_3658 = 
BGL_CLASSP(BgL_classz00_3655); 
BgL_test5187z00_9512 = BgL_res2794z00_3658; } 
if(BgL_test5187z00_9512)
{ /* Llib/object.scm 717 */
obj_t BgL__ortest_1220z00_3657;
BgL__ortest_1220z00_3657 = 
BGL_CLASS_NIL(BgL_classz00_3655); 
if(
CBOOL(BgL__ortest_1220z00_3657))
{ /* Llib/object.scm 717 */
BgL_arg1780z00_3644 = BgL__ortest_1220z00_3657; }  else 
{ /* Llib/object.scm 717 */
BgL_arg1780z00_3644 = 
BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3655); } }  else 
{ /* Llib/object.scm 716 */
BgL_arg1780z00_3644 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3917z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_3655); } } } 
return 
(BgL_arg1780z00_3644==
((obj_t)BgL_objz00_142));} } } 

}



/* &nil? */
obj_t BGl_z62nilzf3z91zz__objectz00(obj_t BgL_envz00_5046, obj_t BgL_objz00_5047)
{
{ /* Llib/object.scm 1232 */
{ /* Llib/object.scm 1233 */
bool_t BgL_tmpz00_9521;
{ /* Llib/object.scm 1233 */
BgL_objectz00_bglt BgL_auxz00_9522;
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_5047, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1233 */
BgL_auxz00_9522 = 
((BgL_objectz00_bglt)BgL_objz00_5047)
; }  else 
{ 
obj_t BgL_auxz00_9526;
BgL_auxz00_9526 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)54307)), BGl_string3986z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_5047); 
FAILURE(BgL_auxz00_9526,BFALSE,BFALSE);} 
BgL_tmpz00_9521 = 
BGl_nilzf3zf3zz__objectz00(BgL_auxz00_9522); } 
return 
BBOOL(BgL_tmpz00_9521);} } 

}



/* isa? */
BGL_EXPORTED_DEF bool_t BGl_isazf3zf3zz__objectz00(obj_t BgL_objz00_143, obj_t BgL_classz00_144)
{
{ /* Llib/object.scm 1241 */
if(
BGL_OBJECTP(BgL_objz00_143))
{ /* Llib/object.scm 1243 */
obj_t BgL_oclassz00_1621;
{ /* Llib/object.scm 838 */
long BgL_arg1547z00_3661;
{ /* Llib/object.scm 838 */
long BgL_arg1551z00_3662;
{ /* Llib/object.scm 838 */
long BgL_res2796z00_3664;
BgL_res2796z00_3664 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_objz00_143)); 
BgL_arg1551z00_3662 = BgL_res2796z00_3664; } 
BgL_arg1547z00_3661 = 
(BgL_arg1551z00_3662-OBJECT_TYPE); } 
{ /* Llib/object.scm 837 */
obj_t BgL_vectorz00_3668;
{ /* Llib/object.scm 837 */
obj_t BgL_aux3506z00_6028;
BgL_aux3506z00_6028 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3506z00_6028))
{ /* Llib/object.scm 837 */
BgL_vectorz00_3668 = BgL_aux3506z00_6028; }  else 
{ 
obj_t BgL_auxz00_9539;
BgL_auxz00_9539 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)36789)), BGl_string3987z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3506z00_6028); 
FAILURE(BgL_auxz00_9539,BFALSE,BFALSE);} } 
BgL_oclassz00_1621 = 
VECTOR_REF(BgL_vectorz00_3668,BgL_arg1547z00_3661); } } 
if(
(BgL_oclassz00_1621==BgL_classz00_144))
{ /* Llib/object.scm 1244 */
return ((bool_t)1);}  else 
{ /* Llib/object.scm 1246 */
long BgL_odepthz00_1623;long BgL_cdepthz00_1624;
{ /* Llib/object.scm 632 */
obj_t BgL_tmpz00_9546;
if(
BGL_CLASSP(BgL_oclassz00_1621))
{ /* Llib/object.scm 632 */
BgL_tmpz00_9546 = BgL_oclassz00_1621
; }  else 
{ 
obj_t BgL_auxz00_9549;
BgL_auxz00_9549 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)27213)), BGl_string3987z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_oclassz00_1621); 
FAILURE(BgL_auxz00_9549,BFALSE,BFALSE);} 
BgL_odepthz00_1623 = 
BGL_CLASS_DEPTH(BgL_tmpz00_9546); } 
BgL_cdepthz00_1624 = 
BGL_CLASS_DEPTH(BgL_classz00_144); 
if(
(BgL_cdepthz00_1624<BgL_odepthz00_1623))
{ /* Llib/object.scm 1249 */
obj_t BgL_arg1784z00_1626;
{ /* Llib/object.scm 638 */
obj_t BgL_tmpz00_9557;
if(
BGL_CLASSP(BgL_oclassz00_1621))
{ /* Llib/object.scm 638 */
BgL_tmpz00_9557 = BgL_oclassz00_1621
; }  else 
{ 
obj_t BgL_auxz00_9560;
BgL_auxz00_9560 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)27525)), BGl_string3987z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_oclassz00_1621); 
FAILURE(BgL_auxz00_9560,BFALSE,BFALSE);} 
BgL_arg1784z00_1626 = 
BGL_CLASS_ANCESTORS_REF(BgL_tmpz00_9557, BgL_cdepthz00_1624); } 
return 
(BgL_arg1784z00_1626==BgL_classz00_144);}  else 
{ /* Llib/object.scm 1248 */
return ((bool_t)0);} } }  else 
{ /* Llib/object.scm 1242 */
return ((bool_t)0);} } 

}



/* &isa? */
obj_t BGl_z62isazf3z91zz__objectz00(obj_t BgL_envz00_5048, obj_t BgL_objz00_5049, obj_t BgL_classz00_5050)
{
{ /* Llib/object.scm 1241 */
{ /* Llib/object.scm 1242 */
bool_t BgL_tmpz00_9566;
{ /* Llib/object.scm 1242 */
obj_t BgL_auxz00_9567;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_5050))
{ /* Llib/object.scm 1242 */
BgL_auxz00_9567 = BgL_classz00_5050
; }  else 
{ 
obj_t BgL_auxz00_9570;
BgL_auxz00_9570 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)54776)), BGl_string3988z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_5050); 
FAILURE(BgL_auxz00_9570,BFALSE,BFALSE);} 
BgL_tmpz00_9566 = 
BGl_isazf3zf3zz__objectz00(BgL_objz00_5049, BgL_auxz00_9567); } 
return 
BBOOL(BgL_tmpz00_9566);} } 

}



/* %isa/cdepth? */
BGL_EXPORTED_DEF bool_t BGl_z52isazf2cdepthzf3z53zz__objectz00(obj_t BgL_objz00_145, obj_t BgL_classz00_146, long BgL_cdepthz00_147)
{
{ /* Llib/object.scm 1256 */
if(
BGL_OBJECTP(BgL_objz00_145))
{ /* Llib/object.scm 1258 */
obj_t BgL_oclassz00_6556;
{ /* Llib/object.scm 838 */
long BgL_arg1547z00_6557;
{ /* Llib/object.scm 838 */
long BgL_arg1551z00_6558;
{ /* Llib/object.scm 838 */
long BgL_res2800z00_6559;
BgL_res2800z00_6559 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_objz00_145)); 
BgL_arg1551z00_6558 = BgL_res2800z00_6559; } 
BgL_arg1547z00_6557 = 
(BgL_arg1551z00_6558-OBJECT_TYPE); } 
{ /* Llib/object.scm 837 */
obj_t BgL_vectorz00_6560;
{ /* Llib/object.scm 837 */
obj_t BgL_aux3514z00_6561;
BgL_aux3514z00_6561 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3514z00_6561))
{ /* Llib/object.scm 837 */
BgL_vectorz00_6560 = BgL_aux3514z00_6561; }  else 
{ 
obj_t BgL_auxz00_9583;
BgL_auxz00_9583 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)36789)), BGl_string3989z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3514z00_6561); 
FAILURE(BgL_auxz00_9583,BFALSE,BFALSE);} } 
BgL_oclassz00_6556 = 
VECTOR_REF(BgL_vectorz00_6560,BgL_arg1547z00_6557); } } 
{ /* Llib/object.scm 1259 */
obj_t BgL_arg1786z00_6562;
{ /* Llib/object.scm 1259 */
obj_t BgL_tmpz00_9588;
if(
BGL_CLASSP(BgL_oclassz00_6556))
{ /* Llib/object.scm 1259 */
BgL_tmpz00_9588 = BgL_oclassz00_6556
; }  else 
{ 
obj_t BgL_auxz00_9591;
BgL_auxz00_9591 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)55422)), BGl_string3989z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_oclassz00_6556); 
FAILURE(BgL_auxz00_9591,BFALSE,BFALSE);} 
BgL_arg1786z00_6562 = 
BGL_CLASS_ANCESTORS_REF(BgL_tmpz00_9588, BgL_cdepthz00_147); } 
return 
(BgL_arg1786z00_6562==BgL_classz00_146);} }  else 
{ /* Llib/object.scm 1257 */
return ((bool_t)0);} } 

}



/* &%isa/cdepth? */
obj_t BGl_z62z52isazf2cdepthzf3z31zz__objectz00(obj_t BgL_envz00_5051, obj_t BgL_objz00_5052, obj_t BgL_classz00_5053, obj_t BgL_cdepthz00_5054)
{
{ /* Llib/object.scm 1256 */
{ /* Llib/object.scm 1257 */
bool_t BgL_tmpz00_9597;
{ /* Llib/object.scm 1257 */
long BgL_auxz00_9605;obj_t BgL_auxz00_9598;
{ /* Llib/object.scm 1257 */
obj_t BgL_tmpz00_9606;
if(
INTEGERP(BgL_cdepthz00_5054))
{ /* Llib/object.scm 1257 */
BgL_tmpz00_9606 = BgL_cdepthz00_5054
; }  else 
{ 
obj_t BgL_auxz00_9609;
BgL_auxz00_9609 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)55332)), BGl_string3990z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_cdepthz00_5054); 
FAILURE(BgL_auxz00_9609,BFALSE,BFALSE);} 
BgL_auxz00_9605 = 
(long)CINT(BgL_tmpz00_9606); } 
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_5053))
{ /* Llib/object.scm 1257 */
BgL_auxz00_9598 = BgL_classz00_5053
; }  else 
{ 
obj_t BgL_auxz00_9601;
BgL_auxz00_9601 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)55332)), BGl_string3990z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_5053); 
FAILURE(BgL_auxz00_9601,BFALSE,BFALSE);} 
BgL_tmpz00_9597 = 
BGl_z52isazf2cdepthzf3z53zz__objectz00(BgL_objz00_5052, BgL_auxz00_9598, BgL_auxz00_9605); } 
return 
BBOOL(BgL_tmpz00_9597);} } 

}



/* %isa-object/cdepth? */
BGL_EXPORTED_DEF bool_t BGl_z52isazd2objectzf2cdepthzf3z81zz__objectz00(BgL_objectz00_bglt BgL_objz00_148, obj_t BgL_classz00_149, long BgL_cdepthz00_150)
{
{ /* Llib/object.scm 1264 */
{ /* Llib/object.scm 1265 */
obj_t BgL_oclassz00_6563;
{ /* Llib/object.scm 838 */
long BgL_arg1547z00_6564;
{ /* Llib/object.scm 838 */
long BgL_arg1551z00_6565;
{ /* Llib/object.scm 838 */
long BgL_res2802z00_6566;
BgL_res2802z00_6566 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_148); 
BgL_arg1551z00_6565 = BgL_res2802z00_6566; } 
BgL_arg1547z00_6564 = 
(BgL_arg1551z00_6565-OBJECT_TYPE); } 
{ /* Llib/object.scm 837 */
obj_t BgL_vectorz00_6567;
{ /* Llib/object.scm 837 */
obj_t BgL_aux3522z00_6568;
BgL_aux3522z00_6568 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3522z00_6568))
{ /* Llib/object.scm 837 */
BgL_vectorz00_6567 = BgL_aux3522z00_6568; }  else 
{ 
obj_t BgL_auxz00_9620;
BgL_auxz00_9620 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)36789)), BGl_string3991z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3522z00_6568); 
FAILURE(BgL_auxz00_9620,BFALSE,BFALSE);} } 
BgL_oclassz00_6563 = 
VECTOR_REF(BgL_vectorz00_6567,BgL_arg1547z00_6564); } } 
{ /* Llib/object.scm 1266 */
obj_t BgL_arg1787z00_6569;
{ /* Llib/object.scm 1266 */
obj_t BgL_tmpz00_9625;
if(
BGL_CLASSP(BgL_oclassz00_6563))
{ /* Llib/object.scm 1266 */
BgL_tmpz00_9625 = BgL_oclassz00_6563
; }  else 
{ 
obj_t BgL_auxz00_9628;
BgL_auxz00_9628 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)55795)), BGl_string3991z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_oclassz00_6563); 
FAILURE(BgL_auxz00_9628,BFALSE,BFALSE);} 
BgL_arg1787z00_6569 = 
BGL_CLASS_ANCESTORS_REF(BgL_tmpz00_9625, BgL_cdepthz00_150); } 
return 
(BgL_arg1787z00_6569==BgL_classz00_149);} } } 

}



/* &%isa-object/cdepth? */
obj_t BGl_z62z52isazd2objectzf2cdepthzf3ze3zz__objectz00(obj_t BgL_envz00_5055, obj_t BgL_objz00_5056, obj_t BgL_classz00_5057, obj_t BgL_cdepthz00_5058)
{
{ /* Llib/object.scm 1264 */
{ /* Llib/object.scm 1265 */
bool_t BgL_tmpz00_9634;
{ /* Llib/object.scm 1265 */
long BgL_auxz00_9650;obj_t BgL_auxz00_9643;BgL_objectz00_bglt BgL_auxz00_9635;
{ /* Llib/object.scm 1265 */
obj_t BgL_tmpz00_9651;
if(
INTEGERP(BgL_cdepthz00_5058))
{ /* Llib/object.scm 1265 */
BgL_tmpz00_9651 = BgL_cdepthz00_5058
; }  else 
{ 
obj_t BgL_auxz00_9654;
BgL_auxz00_9654 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)55727)), BGl_string3992z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_cdepthz00_5058); 
FAILURE(BgL_auxz00_9654,BFALSE,BFALSE);} 
BgL_auxz00_9650 = 
(long)CINT(BgL_tmpz00_9651); } 
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_5057))
{ /* Llib/object.scm 1265 */
BgL_auxz00_9643 = BgL_classz00_5057
; }  else 
{ 
obj_t BgL_auxz00_9646;
BgL_auxz00_9646 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)55727)), BGl_string3992z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_5057); 
FAILURE(BgL_auxz00_9646,BFALSE,BFALSE);} 
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_5056, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1265 */
BgL_auxz00_9635 = 
((BgL_objectz00_bglt)BgL_objz00_5056)
; }  else 
{ 
obj_t BgL_auxz00_9639;
BgL_auxz00_9639 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)55727)), BGl_string3992z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_5056); 
FAILURE(BgL_auxz00_9639,BFALSE,BFALSE);} 
BgL_tmpz00_9634 = 
BGl_z52isazd2objectzf2cdepthzf3z81zz__objectz00(BgL_auxz00_9635, BgL_auxz00_9643, BgL_auxz00_9650); } 
return 
BBOOL(BgL_tmpz00_9634);} } 

}



/* %isa/final? */
BGL_EXPORTED_DEF bool_t BGl_z52isazf2finalzf3z53zz__objectz00(obj_t BgL_objz00_151, obj_t BgL_classz00_152)
{
{ /* Llib/object.scm 1271 */
if(
BGL_OBJECTP(BgL_objz00_151))
{ /* Llib/object.scm 1273 */
obj_t BgL_oclassz00_6570;
{ /* Llib/object.scm 838 */
long BgL_arg1547z00_6571;
{ /* Llib/object.scm 838 */
long BgL_arg1551z00_6572;
{ /* Llib/object.scm 838 */
long BgL_res2805z00_6573;
BgL_res2805z00_6573 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_objz00_151)); 
BgL_arg1551z00_6572 = BgL_res2805z00_6573; } 
BgL_arg1547z00_6571 = 
(BgL_arg1551z00_6572-OBJECT_TYPE); } 
{ /* Llib/object.scm 837 */
obj_t BgL_vectorz00_6574;
{ /* Llib/object.scm 837 */
obj_t BgL_aux3532z00_6575;
BgL_aux3532z00_6575 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3532z00_6575))
{ /* Llib/object.scm 837 */
BgL_vectorz00_6574 = BgL_aux3532z00_6575; }  else 
{ 
obj_t BgL_auxz00_9668;
BgL_auxz00_9668 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)36789)), BGl_string3993z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3532z00_6575); 
FAILURE(BgL_auxz00_9668,BFALSE,BFALSE);} } 
BgL_oclassz00_6570 = 
VECTOR_REF(BgL_vectorz00_6574,BgL_arg1547z00_6571); } } 
return 
(BgL_oclassz00_6570==BgL_classz00_152);}  else 
{ /* Llib/object.scm 1272 */
return ((bool_t)0);} } 

}



/* &%isa/final? */
obj_t BGl_z62z52isazf2finalzf3z31zz__objectz00(obj_t BgL_envz00_5059, obj_t BgL_objz00_5060, obj_t BgL_classz00_5061)
{
{ /* Llib/object.scm 1271 */
{ /* Llib/object.scm 1272 */
bool_t BgL_tmpz00_9674;
{ /* Llib/object.scm 1272 */
obj_t BgL_auxz00_9675;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_5061))
{ /* Llib/object.scm 1272 */
BgL_auxz00_9675 = BgL_classz00_5061
; }  else 
{ 
obj_t BgL_auxz00_9678;
BgL_auxz00_9678 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)56084)), BGl_string3994z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_5061); 
FAILURE(BgL_auxz00_9678,BFALSE,BFALSE);} 
BgL_tmpz00_9674 = 
BGl_z52isazf2finalzf3z53zz__objectz00(BgL_objz00_5060, BgL_auxz00_9675); } 
return 
BBOOL(BgL_tmpz00_9674);} } 

}



/* %isa-object/final? */
BGL_EXPORTED_DEF bool_t BGl_z52isazd2objectzf2finalzf3z81zz__objectz00(BgL_objectz00_bglt BgL_objz00_153, obj_t BgL_classz00_154)
{
{ /* Llib/object.scm 1279 */
{ /* Llib/object.scm 1280 */
obj_t BgL_oclassz00_6576;
{ /* Llib/object.scm 838 */
long BgL_arg1547z00_6577;
{ /* Llib/object.scm 838 */
long BgL_arg1551z00_6578;
{ /* Llib/object.scm 838 */
long BgL_res2807z00_6579;
BgL_res2807z00_6579 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_153); 
BgL_arg1551z00_6578 = BgL_res2807z00_6579; } 
BgL_arg1547z00_6577 = 
(BgL_arg1551z00_6578-OBJECT_TYPE); } 
{ /* Llib/object.scm 837 */
obj_t BgL_vectorz00_6580;
{ /* Llib/object.scm 837 */
obj_t BgL_aux3536z00_6581;
BgL_aux3536z00_6581 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3536z00_6581))
{ /* Llib/object.scm 837 */
BgL_vectorz00_6580 = BgL_aux3536z00_6581; }  else 
{ 
obj_t BgL_auxz00_9688;
BgL_auxz00_9688 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)36789)), BGl_string3995z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3536z00_6581); 
FAILURE(BgL_auxz00_9688,BFALSE,BFALSE);} } 
BgL_oclassz00_6576 = 
VECTOR_REF(BgL_vectorz00_6580,BgL_arg1547z00_6577); } } 
return 
(BgL_oclassz00_6576==BgL_classz00_154);} } 

}



/* &%isa-object/final? */
obj_t BGl_z62z52isazd2objectzf2finalzf3ze3zz__objectz00(obj_t BgL_envz00_5062, obj_t BgL_objz00_5063, obj_t BgL_classz00_5064)
{
{ /* Llib/object.scm 1279 */
{ /* Llib/object.scm 1280 */
bool_t BgL_tmpz00_9694;
{ /* Llib/object.scm 1280 */
obj_t BgL_auxz00_9703;BgL_objectz00_bglt BgL_auxz00_9695;
if(
BGl_classzf3zf3zz__objectz00(BgL_classz00_5064))
{ /* Llib/object.scm 1280 */
BgL_auxz00_9703 = BgL_classz00_5064
; }  else 
{ 
obj_t BgL_auxz00_9706;
BgL_auxz00_9706 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)56441)), BGl_string3996z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_5064); 
FAILURE(BgL_auxz00_9706,BFALSE,BFALSE);} 
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_5063, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1280 */
BgL_auxz00_9695 = 
((BgL_objectz00_bglt)BgL_objz00_5063)
; }  else 
{ 
obj_t BgL_auxz00_9699;
BgL_auxz00_9699 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)56441)), BGl_string3996z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_5063); 
FAILURE(BgL_auxz00_9699,BFALSE,BFALSE);} 
BgL_tmpz00_9694 = 
BGl_z52isazd2objectzf2finalzf3z81zz__objectz00(BgL_auxz00_9695, BgL_auxz00_9703); } 
return 
BBOOL(BgL_tmpz00_9694);} } 

}



/* allocate-instance */
BGL_EXPORTED_DEF BgL_objectz00_bglt BGl_allocatezd2instancezd2zz__objectz00(obj_t BgL_cnamez00_160)
{
{ /* Llib/object.scm 1306 */
{ 
long BgL_iz00_1636;
{ /* Llib/object.scm 1307 */
obj_t BgL_aux3568z00_6098;
BgL_iz00_1636 = ((long)0); 
BgL_zc3z04anonymousza31789ze3z87_1637:
{ /* Llib/object.scm 1308 */
bool_t BgL_test5213z00_9712;
{ /* Llib/object.scm 1308 */
long BgL_n2z00_3725;
{ /* Llib/object.scm 1308 */
obj_t BgL_tmpz00_9713;
{ /* Llib/object.scm 1308 */
obj_t BgL_aux3542z00_6068;
BgL_aux3542z00_6068 = BGl_za2nbzd2classesza2zd2zz__objectz00; 
if(
INTEGERP(BgL_aux3542z00_6068))
{ /* Llib/object.scm 1308 */
BgL_tmpz00_9713 = BgL_aux3542z00_6068
; }  else 
{ 
obj_t BgL_auxz00_9716;
BgL_auxz00_9716 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)57887)), BGl_string3839z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3542z00_6068); 
FAILURE(BgL_auxz00_9716,BFALSE,BFALSE);} } 
BgL_n2z00_3725 = 
(long)CINT(BgL_tmpz00_9713); } 
BgL_test5213z00_9712 = 
(BgL_iz00_1636==BgL_n2z00_3725); } 
if(BgL_test5213z00_9712)
{ /* Llib/object.scm 1308 */
BgL_aux3568z00_6098 = 
BGl_errorz00zz__errorz00(BGl_string3997z00zz__objectz00, BGl_string3846z00zz__objectz00, BgL_cnamez00_160); }  else 
{ /* Llib/object.scm 1310 */
obj_t BgL_classz00_1639;
{ /* Llib/object.scm 1310 */
obj_t BgL_vectorz00_3727;
{ /* Llib/object.scm 1310 */
obj_t BgL_aux3544z00_6070;
BgL_aux3544z00_6070 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3544z00_6070))
{ /* Llib/object.scm 1310 */
BgL_vectorz00_3727 = BgL_aux3544z00_6070; }  else 
{ 
obj_t BgL_auxz00_9725;
BgL_auxz00_9725 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)57989)), BGl_string3839z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3544z00_6070); 
FAILURE(BgL_auxz00_9725,BFALSE,BFALSE);} } 
BgL_classz00_1639 = 
VECTOR_REF(BgL_vectorz00_3727,BgL_iz00_1636); } 
{ /* Llib/object.scm 1311 */
bool_t BgL_test5216z00_9730;
{ /* Llib/object.scm 1311 */
obj_t BgL_arg1799z00_1651;
{ /* Llib/object.scm 1311 */
obj_t BgL_res2810z00_3730;
{ /* Llib/object.scm 1311 */
obj_t BgL_classz00_3729;
if(
BGL_CLASSP(BgL_classz00_1639))
{ /* Llib/object.scm 1311 */
BgL_classz00_3729 = BgL_classz00_1639; }  else 
{ 
obj_t BgL_auxz00_9733;
BgL_auxz00_9733 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)58031)), BGl_string3839z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_1639); 
FAILURE(BgL_auxz00_9733,BFALSE,BFALSE);} 
BgL_res2810z00_3730 = 
BGL_CLASS_NAME(BgL_classz00_3729); } 
BgL_arg1799z00_1651 = BgL_res2810z00_3730; } 
BgL_test5216z00_9730 = 
(BgL_arg1799z00_1651==BgL_cnamez00_160); } 
if(BgL_test5216z00_9730)
{ /* Llib/object.scm 1312 */
obj_t BgL_allocz00_1642;
{ /* Llib/object.scm 1312 */
obj_t BgL_res2812z00_3734;
{ /* Llib/object.scm 1312 */
obj_t BgL_classz00_3731;
if(
BGL_CLASSP(BgL_classz00_1639))
{ /* Llib/object.scm 1312 */
BgL_classz00_3731 = BgL_classz00_1639; }  else 
{ 
obj_t BgL_auxz00_9741;
BgL_auxz00_9741 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)58078)), BGl_string3839z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_1639); 
FAILURE(BgL_auxz00_9741,BFALSE,BFALSE);} 
{ /* Llib/object.scm 668 */
bool_t BgL_test5219z00_9745;
{ /* Llib/object.scm 668 */
bool_t BgL_res2811z00_3733;
BgL_res2811z00_3733 = 
BGL_CLASSP(BgL_classz00_3731); 
BgL_test5219z00_9745 = BgL_res2811z00_3733; } 
if(BgL_test5219z00_9745)
{ /* Llib/object.scm 668 */
BgL_res2812z00_3734 = 
BGL_CLASS_ALLOC_FUN(BgL_classz00_3731); }  else 
{ /* Llib/object.scm 670 */
obj_t BgL_aux3550z00_6076;
BgL_aux3550z00_6076 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3887z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_3731); 
if(
PROCEDUREP(BgL_aux3550z00_6076))
{ /* Llib/object.scm 670 */
BgL_res2812z00_3734 = BgL_aux3550z00_6076; }  else 
{ 
obj_t BgL_auxz00_9751;
BgL_auxz00_9751 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)29065)), BGl_string3839z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3550z00_6076); 
FAILURE(BgL_auxz00_9751,BFALSE,BFALSE);} } } } 
BgL_allocz00_1642 = BgL_res2812z00_3734; } 
{ /* Llib/object.scm 1313 */
bool_t BgL_test5221z00_9755;
{ /* Llib/object.scm 1313 */
bool_t BgL_res2814z00_3738;
{ /* Llib/object.scm 1313 */
obj_t BgL_classz00_3735;
if(
BGL_CLASSP(BgL_classz00_1639))
{ /* Llib/object.scm 1313 */
BgL_classz00_3735 = BgL_classz00_1639; }  else 
{ 
obj_t BgL_auxz00_9758;
BgL_auxz00_9758 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)58110)), BGl_string3839z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_1639); 
FAILURE(BgL_auxz00_9758,BFALSE,BFALSE);} 
{ /* Llib/object.scm 650 */
obj_t BgL_tmpz00_9762;
BgL_tmpz00_9762 = 
BGl_classzd2shrinkzd2zz__objectz00(BgL_classz00_3735); 
BgL_res2814z00_3738 = 
PROCEDUREP(BgL_tmpz00_9762); } } 
BgL_test5221z00_9755 = BgL_res2814z00_3738; } 
if(BgL_test5221z00_9755)
{ /* Llib/object.scm 1316 */
bool_t BgL_test5223z00_9765;
{ /* Llib/object.scm 1316 */
int BgL_arg1797z00_1649;
BgL_arg1797z00_1649 = 
PROCEDURE_ARITY(BgL_allocz00_1642); 
BgL_test5223z00_9765 = 
(
(long)(BgL_arg1797z00_1649)==((long)0)); } 
if(BgL_test5223z00_9765)
{ /* Llib/object.scm 1316 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_allocz00_1642, ((long)0)))
{ /* Llib/object.scm 1317 */
BgL_aux3568z00_6098 = 
PROCEDURE_ENTRY(BgL_allocz00_1642)(BgL_allocz00_1642, BEOA); }  else 
{ /* Llib/object.scm 1317 */
FAILURE(BGl_string3998z00zz__objectz00,BGl_list3999z00zz__objectz00,BgL_allocz00_1642);} }  else 
{ /* Llib/object.scm 1318 */
obj_t BgL_superz00_1646;
{ /* Llib/object.scm 1318 */
obj_t BgL_classz00_3743;
if(
BGL_CLASSP(BgL_classz00_1639))
{ /* Llib/object.scm 1318 */
BgL_classz00_3743 = BgL_classz00_1639; }  else 
{ 
obj_t BgL_auxz00_9777;
BgL_auxz00_9777 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)58288)), BGl_string3839z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_1639); 
FAILURE(BgL_auxz00_9777,BFALSE,BFALSE);} 
BgL_superz00_1646 = 
BGL_CLASS_SUPER(BgL_classz00_3743); } 
{ /* Llib/object.scm 1318 */
obj_t BgL_oz00_1647;
{ /* Llib/object.scm 1319 */
obj_t BgL_fun1796z00_1648;
{ /* Llib/object.scm 1319 */
obj_t BgL_res2818z00_3747;
{ /* Llib/object.scm 1319 */
obj_t BgL_classz00_3744;
if(
BGL_CLASSP(BgL_superz00_1646))
{ /* Llib/object.scm 1319 */
BgL_classz00_3744 = BgL_superz00_1646; }  else 
{ 
obj_t BgL_auxz00_9784;
BgL_auxz00_9784 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)58324)), BGl_string3839z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_superz00_1646); 
FAILURE(BgL_auxz00_9784,BFALSE,BFALSE);} 
{ /* Llib/object.scm 668 */
bool_t BgL_test5227z00_9788;
{ /* Llib/object.scm 668 */
bool_t BgL_res2817z00_3746;
BgL_res2817z00_3746 = 
BGL_CLASSP(BgL_classz00_3744); 
BgL_test5227z00_9788 = BgL_res2817z00_3746; } 
if(BgL_test5227z00_9788)
{ /* Llib/object.scm 668 */
BgL_res2818z00_3747 = 
BGL_CLASS_ALLOC_FUN(BgL_classz00_3744); }  else 
{ /* Llib/object.scm 670 */
obj_t BgL_aux3560z00_6087;
BgL_aux3560z00_6087 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3887z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_3744); 
if(
PROCEDUREP(BgL_aux3560z00_6087))
{ /* Llib/object.scm 670 */
BgL_res2818z00_3747 = BgL_aux3560z00_6087; }  else 
{ 
obj_t BgL_auxz00_9794;
BgL_auxz00_9794 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)29065)), BGl_string3839z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3560z00_6087); 
FAILURE(BgL_auxz00_9794,BFALSE,BFALSE);} } } } 
BgL_fun1796z00_1648 = BgL_res2818z00_3747; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fun1796z00_1648, ((long)0)))
{ /* Llib/object.scm 1319 */
BgL_oz00_1647 = 
PROCEDURE_ENTRY(BgL_fun1796z00_1648)(BgL_fun1796z00_1648, BEOA); }  else 
{ /* Llib/object.scm 1319 */
FAILURE(BGl_string3998z00zz__objectz00,BGl_list4002z00zz__objectz00,BgL_fun1796z00_1648);} } 
{ /* Llib/object.scm 1319 */

if(
PROCEDURE_CORRECT_ARITYP(BgL_allocz00_1642, ((long)1)))
{ /* Llib/object.scm 1320 */
BgL_aux3568z00_6098 = 
PROCEDURE_ENTRY(BgL_allocz00_1642)(BgL_allocz00_1642, BgL_oz00_1647, BEOA); }  else 
{ /* Llib/object.scm 1320 */
FAILURE(BGl_string3998z00zz__objectz00,BGl_list4005z00zz__objectz00,BgL_allocz00_1642);} } } } }  else 
{ /* Llib/object.scm 1313 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_allocz00_1642, ((long)0)))
{ /* Llib/object.scm 1321 */
BgL_aux3568z00_6098 = 
PROCEDURE_ENTRY(BgL_allocz00_1642)(BgL_allocz00_1642, BEOA); }  else 
{ /* Llib/object.scm 1321 */
FAILURE(BGl_string3998z00zz__objectz00,BGl_list3999z00zz__objectz00,BgL_allocz00_1642);} } } }  else 
{ 
long BgL_iz00_9817;
BgL_iz00_9817 = 
(BgL_iz00_1636+((long)1)); 
BgL_iz00_1636 = BgL_iz00_9817; 
goto BgL_zc3z04anonymousza31789ze3z87_1637;} } } } 
if(
BGl_isazf3zf3zz__objectz00(BgL_aux3568z00_6098, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1307 */
return 
((BgL_objectz00_bglt)BgL_aux3568z00_6098);}  else 
{ 
obj_t BgL_auxz00_9822;
BgL_auxz00_9822 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)57852)), BGl_string3997z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_aux3568z00_6098); 
FAILURE(BgL_auxz00_9822,BFALSE,BFALSE);} } } } 

}



/* &allocate-instance */
BgL_objectz00_bglt BGl_z62allocatezd2instancezb0zz__objectz00(obj_t BgL_envz00_5065, obj_t BgL_cnamez00_5066)
{
{ /* Llib/object.scm 1306 */
{ /* Llib/object.scm 1308 */
obj_t BgL_auxz00_9826;
if(
SYMBOLP(BgL_cnamez00_5066))
{ /* Llib/object.scm 1308 */
BgL_auxz00_9826 = BgL_cnamez00_5066
; }  else 
{ 
obj_t BgL_auxz00_9829;
BgL_auxz00_9829 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)57876)), BGl_string4006z00zz__objectz00, BGl_string3844z00zz__objectz00, BgL_cnamez00_5066); 
FAILURE(BgL_auxz00_9829,BFALSE,BFALSE);} 
return 
BGl_allocatezd2instancezd2zz__objectz00(BgL_auxz00_9826);} } 

}



/* wide-object? */
BGL_EXPORTED_DEF bool_t BGl_widezd2objectzf3z21zz__objectz00(BgL_objectz00_bglt BgL_objectz00_161)
{
{ /* Llib/object.scm 1327 */
return 
CBOOL(
BGL_OBJECT_WIDENING(BgL_objectz00_161));} 

}



/* &wide-object? */
obj_t BGl_z62widezd2objectzf3z43zz__objectz00(obj_t BgL_envz00_5067, obj_t BgL_objectz00_5068)
{
{ /* Llib/object.scm 1327 */
{ /* Llib/object.scm 1328 */
bool_t BgL_tmpz00_9836;
{ /* Llib/object.scm 1328 */
BgL_objectz00_bglt BgL_auxz00_9837;
if(
BGl_isazf3zf3zz__objectz00(BgL_objectz00_5068, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1328 */
BgL_auxz00_9837 = 
((BgL_objectz00_bglt)BgL_objectz00_5068)
; }  else 
{ 
obj_t BgL_auxz00_9841;
BgL_auxz00_9841 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)58663)), BGl_string4007z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objectz00_5068); 
FAILURE(BgL_auxz00_9841,BFALSE,BFALSE);} 
BgL_tmpz00_9836 = 
BGl_widezd2objectzf3z21zz__objectz00(BgL_auxz00_9837); } 
return 
BBOOL(BgL_tmpz00_9836);} } 

}



/* call-virtual-getter */
BGL_EXPORTED_DEF obj_t BGl_callzd2virtualzd2getterz00zz__objectz00(BgL_objectz00_bglt BgL_objz00_171, int BgL_numz00_172)
{
{ /* Llib/object.scm 1426 */
{ /* Llib/object.scm 1427 */
obj_t BgL_classz00_3752;
{ /* Llib/object.scm 838 */
long BgL_arg1547z00_3757;
{ /* Llib/object.scm 838 */
long BgL_arg1551z00_3758;
{ /* Llib/object.scm 838 */
long BgL_res2820z00_3760;
BgL_res2820z00_3760 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_171); 
BgL_arg1551z00_3758 = BgL_res2820z00_3760; } 
BgL_arg1547z00_3757 = 
(BgL_arg1551z00_3758-OBJECT_TYPE); } 
{ /* Llib/object.scm 837 */
obj_t BgL_vectorz00_3764;
{ /* Llib/object.scm 837 */
obj_t BgL_aux3574z00_6108;
BgL_aux3574z00_6108 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3574z00_6108))
{ /* Llib/object.scm 837 */
BgL_vectorz00_3764 = BgL_aux3574z00_6108; }  else 
{ 
obj_t BgL_auxz00_9851;
BgL_auxz00_9851 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)36789)), BGl_string4008z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3574z00_6108); 
FAILURE(BgL_auxz00_9851,BFALSE,BFALSE);} } 
BgL_classz00_3752 = 
VECTOR_REF(BgL_vectorz00_3764,BgL_arg1547z00_3757); } } 
{ /* Llib/object.scm 1427 */
obj_t BgL_getterz00_3753;
{ /* Llib/object.scm 1428 */
obj_t BgL_arg1801z00_3754;
{ /* Llib/object.scm 1428 */
obj_t BgL_arg1803z00_3755;
{ /* Llib/object.scm 1428 */
obj_t BgL_res2822z00_3767;
{ /* Llib/object.scm 1428 */
obj_t BgL_classz00_3766;
if(
BGL_CLASSP(BgL_classz00_3752))
{ /* Llib/object.scm 1428 */
BgL_classz00_3766 = BgL_classz00_3752; }  else 
{ 
obj_t BgL_auxz00_9858;
BgL_auxz00_9858 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)62868)), BGl_string4008z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_3752); 
FAILURE(BgL_auxz00_9858,BFALSE,BFALSE);} 
BgL_res2822z00_3767 = 
BGL_CLASS_VIRTUAL_FIELDS(BgL_classz00_3766); } 
BgL_arg1803z00_3755 = BgL_res2822z00_3767; } 
BgL_arg1801z00_3754 = 
VECTOR_REF(BgL_arg1803z00_3755,
(long)(BgL_numz00_172)); } 
{ /* Llib/object.scm 1428 */
obj_t BgL_pairz00_3770;
if(
PAIRP(BgL_arg1801z00_3754))
{ /* Llib/object.scm 1428 */
BgL_pairz00_3770 = BgL_arg1801z00_3754; }  else 
{ 
obj_t BgL_auxz00_9867;
BgL_auxz00_9867 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)62878)), BGl_string4008z00zz__objectz00, BGl_string3961z00zz__objectz00, BgL_arg1801z00_3754); 
FAILURE(BgL_auxz00_9867,BFALSE,BFALSE);} 
BgL_getterz00_3753 = 
CAR(BgL_pairz00_3770); } } 
{ /* Llib/object.scm 1428 */

{ /* Llib/object.scm 1429 */
obj_t BgL_funz00_6116;
if(
PROCEDUREP(BgL_getterz00_3753))
{ /* Llib/object.scm 1429 */
BgL_funz00_6116 = BgL_getterz00_3753; }  else 
{ 
obj_t BgL_auxz00_9874;
BgL_auxz00_9874 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)62889)), BGl_string4008z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_getterz00_3753); 
FAILURE(BgL_auxz00_9874,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_6116, ((long)1)))
{ /* Llib/object.scm 1429 */
return 
PROCEDURE_ENTRY(BgL_funz00_6116)(BgL_getterz00_3753, 
((obj_t)BgL_objz00_171), BEOA);}  else 
{ /* Llib/object.scm 1429 */
FAILURE(BGl_string4009z00zz__objectz00,BGl_list4010z00zz__objectz00,BgL_funz00_6116);} } } } } } 

}



/* &call-virtual-getter */
obj_t BGl_z62callzd2virtualzd2getterz62zz__objectz00(obj_t BgL_envz00_5069, obj_t BgL_objz00_5070, obj_t BgL_numz00_5071)
{
{ /* Llib/object.scm 1426 */
{ /* Llib/object.scm 1427 */
int BgL_auxz00_9894;BgL_objectz00_bglt BgL_auxz00_9886;
{ /* Llib/object.scm 1427 */
obj_t BgL_tmpz00_9895;
if(
INTEGERP(BgL_numz00_5071))
{ /* Llib/object.scm 1427 */
BgL_tmpz00_9895 = BgL_numz00_5071
; }  else 
{ 
obj_t BgL_auxz00_9898;
BgL_auxz00_9898 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)62788)), BGl_string4015z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_numz00_5071); 
FAILURE(BgL_auxz00_9898,BFALSE,BFALSE);} 
BgL_auxz00_9894 = 
CINT(BgL_tmpz00_9895); } 
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_5070, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1427 */
BgL_auxz00_9886 = 
((BgL_objectz00_bglt)BgL_objz00_5070)
; }  else 
{ 
obj_t BgL_auxz00_9890;
BgL_auxz00_9890 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)62788)), BGl_string4015z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_5070); 
FAILURE(BgL_auxz00_9890,BFALSE,BFALSE);} 
return 
BGl_callzd2virtualzd2getterz00zz__objectz00(BgL_auxz00_9886, BgL_auxz00_9894);} } 

}



/* call-virtual-setter */
BGL_EXPORTED_DEF obj_t BGl_callzd2virtualzd2setterz00zz__objectz00(BgL_objectz00_bglt BgL_objz00_173, int BgL_numz00_174, obj_t BgL_valuez00_175)
{
{ /* Llib/object.scm 1439 */
{ /* Llib/object.scm 1440 */
obj_t BgL_classz00_3771;
{ /* Llib/object.scm 838 */
long BgL_arg1547z00_3776;
{ /* Llib/object.scm 838 */
long BgL_arg1551z00_3777;
{ /* Llib/object.scm 838 */
long BgL_res2823z00_3779;
BgL_res2823z00_3779 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_173); 
BgL_arg1551z00_3777 = BgL_res2823z00_3779; } 
BgL_arg1547z00_3776 = 
(BgL_arg1551z00_3777-OBJECT_TYPE); } 
{ /* Llib/object.scm 837 */
obj_t BgL_vectorz00_3783;
{ /* Llib/object.scm 837 */
obj_t BgL_aux3588z00_6125;
BgL_aux3588z00_6125 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3588z00_6125))
{ /* Llib/object.scm 837 */
BgL_vectorz00_3783 = BgL_aux3588z00_6125; }  else 
{ 
obj_t BgL_auxz00_9908;
BgL_auxz00_9908 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)36789)), BGl_string4016z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3588z00_6125); 
FAILURE(BgL_auxz00_9908,BFALSE,BFALSE);} } 
BgL_classz00_3771 = 
VECTOR_REF(BgL_vectorz00_3783,BgL_arg1547z00_3776); } } 
{ /* Llib/object.scm 1440 */
obj_t BgL_setterz00_3772;
{ /* Llib/object.scm 1441 */
obj_t BgL_arg1805z00_3773;
{ /* Llib/object.scm 1441 */
obj_t BgL_arg1806z00_3774;
{ /* Llib/object.scm 1441 */
obj_t BgL_res2825z00_3786;
{ /* Llib/object.scm 1441 */
obj_t BgL_classz00_3785;
if(
BGL_CLASSP(BgL_classz00_3771))
{ /* Llib/object.scm 1441 */
BgL_classz00_3785 = BgL_classz00_3771; }  else 
{ 
obj_t BgL_auxz00_9915;
BgL_auxz00_9915 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)63637)), BGl_string4016z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_3771); 
FAILURE(BgL_auxz00_9915,BFALSE,BFALSE);} 
BgL_res2825z00_3786 = 
BGL_CLASS_VIRTUAL_FIELDS(BgL_classz00_3785); } 
BgL_arg1806z00_3774 = BgL_res2825z00_3786; } 
BgL_arg1805z00_3773 = 
VECTOR_REF(BgL_arg1806z00_3774,
(long)(BgL_numz00_174)); } 
{ /* Llib/object.scm 1441 */
obj_t BgL_pairz00_3789;
if(
PAIRP(BgL_arg1805z00_3773))
{ /* Llib/object.scm 1441 */
BgL_pairz00_3789 = BgL_arg1805z00_3773; }  else 
{ 
obj_t BgL_auxz00_9924;
BgL_auxz00_9924 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)63647)), BGl_string4016z00zz__objectz00, BGl_string3961z00zz__objectz00, BgL_arg1805z00_3773); 
FAILURE(BgL_auxz00_9924,BFALSE,BFALSE);} 
BgL_setterz00_3772 = 
CDR(BgL_pairz00_3789); } } 
{ /* Llib/object.scm 1441 */

{ /* Llib/object.scm 1442 */
obj_t BgL_funz00_6133;
if(
PROCEDUREP(BgL_setterz00_3772))
{ /* Llib/object.scm 1442 */
BgL_funz00_6133 = BgL_setterz00_3772; }  else 
{ 
obj_t BgL_auxz00_9931;
BgL_auxz00_9931 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)63658)), BGl_string4016z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_setterz00_3772); 
FAILURE(BgL_auxz00_9931,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_6133, ((long)2)))
{ /* Llib/object.scm 1442 */
return 
PROCEDURE_ENTRY(BgL_funz00_6133)(BgL_setterz00_3772, 
((obj_t)BgL_objz00_173), BgL_valuez00_175, BEOA);}  else 
{ /* Llib/object.scm 1442 */
FAILURE(BGl_string4017z00zz__objectz00,BGl_list4018z00zz__objectz00,BgL_funz00_6133);} } } } } } 

}



/* &call-virtual-setter */
obj_t BGl_z62callzd2virtualzd2setterz62zz__objectz00(obj_t BgL_envz00_5072, obj_t BgL_objz00_5073, obj_t BgL_numz00_5074, obj_t BgL_valuez00_5075)
{
{ /* Llib/object.scm 1439 */
{ /* Llib/object.scm 1440 */
int BgL_auxz00_9952;BgL_objectz00_bglt BgL_auxz00_9944;
{ /* Llib/object.scm 1440 */
obj_t BgL_tmpz00_9953;
if(
INTEGERP(BgL_numz00_5074))
{ /* Llib/object.scm 1440 */
BgL_tmpz00_9953 = BgL_numz00_5074
; }  else 
{ 
obj_t BgL_auxz00_9956;
BgL_auxz00_9956 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)63557)), BGl_string4023z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_numz00_5074); 
FAILURE(BgL_auxz00_9956,BFALSE,BFALSE);} 
BgL_auxz00_9952 = 
CINT(BgL_tmpz00_9953); } 
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_5073, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1440 */
BgL_auxz00_9944 = 
((BgL_objectz00_bglt)BgL_objz00_5073)
; }  else 
{ 
obj_t BgL_auxz00_9948;
BgL_auxz00_9948 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)63557)), BGl_string4023z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_5073); 
FAILURE(BgL_auxz00_9948,BFALSE,BFALSE);} 
return 
BGl_callzd2virtualzd2setterz00zz__objectz00(BgL_auxz00_9944, BgL_auxz00_9952, BgL_valuez00_5075);} } 

}



/* call-next-virtual-getter */
BGL_EXPORTED_DEF obj_t BGl_callzd2nextzd2virtualzd2getterzd2zz__objectz00(obj_t BgL_classz00_176, BgL_objectz00_bglt BgL_objz00_177, int BgL_numz00_178)
{
{ /* Llib/object.scm 1462 */
{ /* Llib/object.scm 1463 */
obj_t BgL_nextzd2classzd2_3790;
{ /* Llib/object.scm 1463 */
obj_t BgL_classz00_3794;
if(
BGL_CLASSP(BgL_classz00_176))
{ /* Llib/object.scm 1463 */
BgL_classz00_3794 = BgL_classz00_176; }  else 
{ 
obj_t BgL_auxz00_9964;
BgL_auxz00_9964 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)65108)), BGl_string4024z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_176); 
FAILURE(BgL_auxz00_9964,BFALSE,BFALSE);} 
BgL_nextzd2classzd2_3790 = 
BGL_CLASS_SUPER(BgL_classz00_3794); } 
{ /* Llib/object.scm 1464 */
obj_t BgL_fun1809z00_3791;
{ /* Llib/object.scm 1464 */
obj_t BgL_arg1807z00_3792;
{ /* Llib/object.scm 1464 */
obj_t BgL_arg1808z00_3793;
{ /* Llib/object.scm 1464 */
obj_t BgL_res2826z00_3796;
{ /* Llib/object.scm 1464 */
obj_t BgL_classz00_3795;
if(
BGL_CLASSP(BgL_nextzd2classzd2_3790))
{ /* Llib/object.scm 1464 */
BgL_classz00_3795 = BgL_nextzd2classzd2_3790; }  else 
{ 
obj_t BgL_auxz00_9971;
BgL_auxz00_9971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)65159)), BGl_string4024z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_nextzd2classzd2_3790); 
FAILURE(BgL_auxz00_9971,BFALSE,BFALSE);} 
BgL_res2826z00_3796 = 
BGL_CLASS_VIRTUAL_FIELDS(BgL_classz00_3795); } 
BgL_arg1808z00_3793 = BgL_res2826z00_3796; } 
BgL_arg1807z00_3792 = 
VECTOR_REF(BgL_arg1808z00_3793,
(long)(BgL_numz00_178)); } 
{ /* Llib/object.scm 1464 */
obj_t BgL_pairz00_3799;
if(
PAIRP(BgL_arg1807z00_3792))
{ /* Llib/object.scm 1464 */
BgL_pairz00_3799 = BgL_arg1807z00_3792; }  else 
{ 
obj_t BgL_auxz00_9980;
BgL_auxz00_9980 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)65174)), BGl_string4024z00zz__objectz00, BGl_string3961z00zz__objectz00, BgL_arg1807z00_3792); 
FAILURE(BgL_auxz00_9980,BFALSE,BFALSE);} 
BgL_fun1809z00_3791 = 
CAR(BgL_pairz00_3799); } } 
{ /* Llib/object.scm 1464 */
obj_t BgL_funz00_6150;
if(
PROCEDUREP(BgL_fun1809z00_3791))
{ /* Llib/object.scm 1464 */
BgL_funz00_6150 = BgL_fun1809z00_3791; }  else 
{ 
obj_t BgL_auxz00_9987;
BgL_auxz00_9987 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)65123)), BGl_string4024z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_fun1809z00_3791); 
FAILURE(BgL_auxz00_9987,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_6150, ((long)1)))
{ /* Llib/object.scm 1464 */
return 
PROCEDURE_ENTRY(BgL_funz00_6150)(BgL_fun1809z00_3791, 
((obj_t)BgL_objz00_177), BEOA);}  else 
{ /* Llib/object.scm 1464 */
FAILURE(BGl_string4025z00zz__objectz00,BGl_list4026z00zz__objectz00,BgL_funz00_6150);} } } } } 

}



/* &call-next-virtual-getter */
obj_t BGl_z62callzd2nextzd2virtualzd2getterzb0zz__objectz00(obj_t BgL_envz00_5076, obj_t BgL_classz00_5077, obj_t BgL_objz00_5078, obj_t BgL_numz00_5079)
{
{ /* Llib/object.scm 1462 */
{ /* Llib/object.scm 1463 */
int BgL_auxz00_10007;BgL_objectz00_bglt BgL_auxz00_9999;
{ /* Llib/object.scm 1463 */
obj_t BgL_tmpz00_10008;
if(
INTEGERP(BgL_numz00_5079))
{ /* Llib/object.scm 1463 */
BgL_tmpz00_10008 = BgL_numz00_5079
; }  else 
{ 
obj_t BgL_auxz00_10011;
BgL_auxz00_10011 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)65077)), BGl_string4029z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_numz00_5079); 
FAILURE(BgL_auxz00_10011,BFALSE,BFALSE);} 
BgL_auxz00_10007 = 
CINT(BgL_tmpz00_10008); } 
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_5078, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1463 */
BgL_auxz00_9999 = 
((BgL_objectz00_bglt)BgL_objz00_5078)
; }  else 
{ 
obj_t BgL_auxz00_10003;
BgL_auxz00_10003 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)65077)), BGl_string4029z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_5078); 
FAILURE(BgL_auxz00_10003,BFALSE,BFALSE);} 
return 
BGl_callzd2nextzd2virtualzd2getterzd2zz__objectz00(BgL_classz00_5077, BgL_auxz00_9999, BgL_auxz00_10007);} } 

}



/* call-next-virtual-setter */
BGL_EXPORTED_DEF obj_t BGl_callzd2nextzd2virtualzd2setterzd2zz__objectz00(obj_t BgL_classz00_179, BgL_objectz00_bglt BgL_objz00_180, int BgL_numz00_181, obj_t BgL_valuez00_182)
{
{ /* Llib/object.scm 1474 */
{ /* Llib/object.scm 1475 */
obj_t BgL_nextzd2classzd2_3800;
{ /* Llib/object.scm 1475 */
obj_t BgL_classz00_3804;
if(
BGL_CLASSP(BgL_classz00_179))
{ /* Llib/object.scm 1475 */
BgL_classz00_3804 = BgL_classz00_179; }  else 
{ 
obj_t BgL_auxz00_10019;
BgL_auxz00_10019 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)65879)), BGl_string4030z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_179); 
FAILURE(BgL_auxz00_10019,BFALSE,BFALSE);} 
BgL_nextzd2classzd2_3800 = 
BGL_CLASS_SUPER(BgL_classz00_3804); } 
{ /* Llib/object.scm 1476 */
obj_t BgL_fun1813z00_3801;
{ /* Llib/object.scm 1476 */
obj_t BgL_arg1810z00_3802;
{ /* Llib/object.scm 1476 */
obj_t BgL_arg1811z00_3803;
{ /* Llib/object.scm 1476 */
obj_t BgL_res2827z00_3806;
{ /* Llib/object.scm 1476 */
obj_t BgL_classz00_3805;
if(
BGL_CLASSP(BgL_nextzd2classzd2_3800))
{ /* Llib/object.scm 1476 */
BgL_classz00_3805 = BgL_nextzd2classzd2_3800; }  else 
{ 
obj_t BgL_auxz00_10026;
BgL_auxz00_10026 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)65930)), BGl_string4030z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_nextzd2classzd2_3800); 
FAILURE(BgL_auxz00_10026,BFALSE,BFALSE);} 
BgL_res2827z00_3806 = 
BGL_CLASS_VIRTUAL_FIELDS(BgL_classz00_3805); } 
BgL_arg1811z00_3803 = BgL_res2827z00_3806; } 
BgL_arg1810z00_3802 = 
VECTOR_REF(BgL_arg1811z00_3803,
(long)(BgL_numz00_181)); } 
{ /* Llib/object.scm 1476 */
obj_t BgL_pairz00_3809;
if(
PAIRP(BgL_arg1810z00_3802))
{ /* Llib/object.scm 1476 */
BgL_pairz00_3809 = BgL_arg1810z00_3802; }  else 
{ 
obj_t BgL_auxz00_10035;
BgL_auxz00_10035 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)65945)), BGl_string4030z00zz__objectz00, BGl_string3961z00zz__objectz00, BgL_arg1810z00_3802); 
FAILURE(BgL_auxz00_10035,BFALSE,BFALSE);} 
BgL_fun1813z00_3801 = 
CDR(BgL_pairz00_3809); } } 
{ /* Llib/object.scm 1476 */
obj_t BgL_funz00_6167;
if(
PROCEDUREP(BgL_fun1813z00_3801))
{ /* Llib/object.scm 1476 */
BgL_funz00_6167 = BgL_fun1813z00_3801; }  else 
{ 
obj_t BgL_auxz00_10042;
BgL_auxz00_10042 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)65894)), BGl_string4030z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_fun1813z00_3801); 
FAILURE(BgL_auxz00_10042,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_6167, ((long)2)))
{ /* Llib/object.scm 1476 */
return 
PROCEDURE_ENTRY(BgL_funz00_6167)(BgL_fun1813z00_3801, 
((obj_t)BgL_objz00_180), BgL_valuez00_182, BEOA);}  else 
{ /* Llib/object.scm 1476 */
FAILURE(BGl_string4031z00zz__objectz00,BGl_list4032z00zz__objectz00,BgL_funz00_6167);} } } } } 

}



/* &call-next-virtual-setter */
obj_t BGl_z62callzd2nextzd2virtualzd2setterzb0zz__objectz00(obj_t BgL_envz00_5080, obj_t BgL_classz00_5081, obj_t BgL_objz00_5082, obj_t BgL_numz00_5083, obj_t BgL_valuez00_5084)
{
{ /* Llib/object.scm 1474 */
{ /* Llib/object.scm 1475 */
int BgL_auxz00_10063;BgL_objectz00_bglt BgL_auxz00_10055;
{ /* Llib/object.scm 1475 */
obj_t BgL_tmpz00_10064;
if(
INTEGERP(BgL_numz00_5083))
{ /* Llib/object.scm 1475 */
BgL_tmpz00_10064 = BgL_numz00_5083
; }  else 
{ 
obj_t BgL_auxz00_10067;
BgL_auxz00_10067 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)65848)), BGl_string4035z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_numz00_5083); 
FAILURE(BgL_auxz00_10067,BFALSE,BFALSE);} 
BgL_auxz00_10063 = 
CINT(BgL_tmpz00_10064); } 
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_5082, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1475 */
BgL_auxz00_10055 = 
((BgL_objectz00_bglt)BgL_objz00_5082)
; }  else 
{ 
obj_t BgL_auxz00_10059;
BgL_auxz00_10059 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)65848)), BGl_string4035z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_5082); 
FAILURE(BgL_auxz00_10059,BFALSE,BFALSE);} 
return 
BGl_callzd2nextzd2virtualzd2setterzd2zz__objectz00(BgL_classz00_5081, BgL_auxz00_10055, BgL_auxz00_10063, BgL_valuez00_5084);} } 

}



/* object-widening */
BGL_EXPORTED_DEF obj_t BGl_objectzd2wideningzd2zz__objectz00(BgL_objectz00_bglt BgL_oz00_183)
{
{ /* Llib/object.scm 1481 */
return 
BGL_OBJECT_WIDENING(BgL_oz00_183);} 

}



/* &object-widening */
obj_t BGl_z62objectzd2wideningzb0zz__objectz00(obj_t BgL_envz00_5085, obj_t BgL_oz00_5086)
{
{ /* Llib/object.scm 1481 */
{ /* Llib/object.scm 1482 */
BgL_objectz00_bglt BgL_auxz00_10074;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5086, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1482 */
BgL_auxz00_10074 = 
((BgL_objectz00_bglt)BgL_oz00_5086)
; }  else 
{ 
obj_t BgL_auxz00_10078;
BgL_auxz00_10078 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)66222)), BGl_string4036z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_oz00_5086); 
FAILURE(BgL_auxz00_10078,BFALSE,BFALSE);} 
return 
BGl_objectzd2wideningzd2zz__objectz00(BgL_auxz00_10074);} } 

}



/* object-widening-set! */
BGL_EXPORTED_DEF obj_t BGl_objectzd2wideningzd2setz12z12zz__objectz00(BgL_objectz00_bglt BgL_oz00_184, obj_t BgL_vz00_185)
{
{ /* Llib/object.scm 1487 */
BGL_OBJECT_WIDENING_SET(BgL_oz00_184, BgL_vz00_185); 
return 
((obj_t)BgL_oz00_184);} 

}



/* &object-widening-set! */
obj_t BGl_z62objectzd2wideningzd2setz12z70zz__objectz00(obj_t BgL_envz00_5087, obj_t BgL_oz00_5088, obj_t BgL_vz00_5089)
{
{ /* Llib/object.scm 1487 */
{ /* Llib/object.scm 1488 */
BgL_objectz00_bglt BgL_auxz00_10085;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5088, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1488 */
BgL_auxz00_10085 = 
((BgL_objectz00_bglt)BgL_oz00_5088)
; }  else 
{ 
obj_t BgL_auxz00_10089;
BgL_auxz00_10089 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)66538)), BGl_string4037z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_oz00_5088); 
FAILURE(BgL_auxz00_10089,BFALSE,BFALSE);} 
return 
BGl_objectzd2wideningzd2setz12z12zz__objectz00(BgL_auxz00_10085, BgL_vz00_5089);} } 

}



/* %object-widening */
BGL_EXPORTED_DEF obj_t BGl_z52objectzd2wideningz80zz__objectz00(BgL_objectz00_bglt BgL_oz00_186)
{
{ /* Llib/object.scm 1497 */
return 
BGL_OBJECT_WIDENING(BgL_oz00_186);} 

}



/* &%object-widening */
obj_t BGl_z62z52objectzd2wideningze2zz__objectz00(obj_t BgL_envz00_5090, obj_t BgL_oz00_5091)
{
{ /* Llib/object.scm 1497 */
{ /* Llib/object.scm 1498 */
BgL_objectz00_bglt BgL_auxz00_10095;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5091, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1498 */
BgL_auxz00_10095 = 
((BgL_objectz00_bglt)BgL_oz00_5091)
; }  else 
{ 
obj_t BgL_auxz00_10099;
BgL_auxz00_10099 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)67023)), BGl_string4038z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_oz00_5091); 
FAILURE(BgL_auxz00_10099,BFALSE,BFALSE);} 
return 
BGl_z52objectzd2wideningz80zz__objectz00(BgL_auxz00_10095);} } 

}



/* %object-widening-set! */
BGL_EXPORTED_DEF obj_t BGl_z52objectzd2wideningzd2setz12z40zz__objectz00(BgL_objectz00_bglt BgL_oz00_187, obj_t BgL_wz00_188)
{
{ /* Llib/object.scm 1506 */
BGL_OBJECT_WIDENING_SET(BgL_oz00_187, BgL_wz00_188); BgL_oz00_187; 
return 
((obj_t)BgL_oz00_187);} 

}



/* &%object-widening-set! */
obj_t BGl_z62z52objectzd2wideningzd2setz12z22zz__objectz00(obj_t BgL_envz00_5092, obj_t BgL_oz00_5093, obj_t BgL_wz00_5094)
{
{ /* Llib/object.scm 1506 */
{ /* Llib/object.scm 1507 */
BgL_objectz00_bglt BgL_auxz00_10106;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5093, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1507 */
BgL_auxz00_10106 = 
((BgL_objectz00_bglt)BgL_oz00_5093)
; }  else 
{ 
obj_t BgL_auxz00_10110;
BgL_auxz00_10110 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)67553)), BGl_string4039z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_oz00_5093); 
FAILURE(BgL_auxz00_10110,BFALSE,BFALSE);} 
return 
BGl_z52objectzd2wideningzd2setz12z40zz__objectz00(BgL_auxz00_10106, BgL_wz00_5094);} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__objectz00()
{
{ /* Llib/object.scm 17 */
{ /* Llib/object.scm 212 */
obj_t BgL_arg1817z00_1673;obj_t BgL_arg1818z00_1674;
{ /* Llib/object.scm 212 */
obj_t BgL_v1325z00_1684;
BgL_v1325z00_1684 = 
create_vector(((long)0)); 
BgL_arg1817z00_1673 = BgL_v1325z00_1684; } 
{ /* Llib/object.scm 212 */
obj_t BgL_v1326z00_1685;
BgL_v1326z00_1685 = 
create_vector(((long)0)); 
BgL_arg1818z00_1674 = BgL_v1326z00_1685; } 
BGl_objectz00zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4043z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BFALSE, ((long)43966), BGl_proc4042z00zz__objectz00, BGl_proc4041z00zz__objectz00, BFALSE, BGl_proc4040z00zz__objectz00, BFALSE, BgL_arg1817z00_1673, BgL_arg1818z00_1674); } 
{ /* Llib/object.scm 213 */
obj_t BgL_arg1827z00_1692;obj_t BgL_arg1828z00_1693;
{ /* Llib/object.scm 213 */
obj_t BgL_v1327z00_1703;
BgL_v1327z00_1703 = 
create_vector(((long)0)); 
BgL_arg1827z00_1692 = BgL_v1327z00_1703; } 
{ /* Llib/object.scm 213 */
obj_t BgL_v1328z00_1704;
BgL_v1328z00_1704 = 
create_vector(((long)0)); 
BgL_arg1828z00_1693 = BgL_v1328z00_1704; } 
BGl_z62conditionz62zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4049z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_objectz00zz__objectz00, ((long)33653), BGl_proc4048z00zz__objectz00, BGl_proc4047z00zz__objectz00, BFALSE, BGl_proc4046z00zz__objectz00, BFALSE, BgL_arg1827z00_1692, BgL_arg1828z00_1693); } 
{ /* Llib/object.scm 215 */
obj_t BgL_arg1840z00_1711;obj_t BgL_arg1841z00_1712;
{ /* Llib/object.scm 215 */
obj_t BgL_v1329z00_1725;
BgL_v1329z00_1725 = 
create_vector(((long)3)); 
{ /* Llib/object.scm 215 */
obj_t BgL_arg1850z00_1726;
{ /* Llib/object.scm 215 */
obj_t BgL_res2832z00_3843;
{ /* Llib/object.scm 215 */
obj_t BgL_namez00_3828;obj_t BgL_typez00_3831;
BgL_namez00_3828 = BGl_symbol4054z00zz__objectz00; 
BgL_typez00_3831 = BGl_symbol4013z00zz__objectz00; 
{ /* Llib/object.scm 550 */
obj_t BgL_v1313z00_3832;
BgL_v1313z00_3832 = 
create_vector(((long)9)); 
VECTOR_SET(BgL_v1313z00_3832,((long)0),BgL_namez00_3828); 
VECTOR_SET(BgL_v1313z00_3832,((long)1),BGl_proc4053z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3832,((long)2),BGl_proc4052z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3832,((long)3),BFALSE); 
VECTOR_SET(BgL_v1313z00_3832,((long)4),BGl_makezd2classzd2fieldzd2envzd2zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3832,((long)5),BFALSE); 
VECTOR_SET(BgL_v1313z00_3832,((long)6),BGl_proc4051z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3832,((long)7),BgL_typez00_3831); 
VECTOR_SET(BgL_v1313z00_3832,((long)8),BTRUE); 
BgL_res2832z00_3843 = BgL_v1313z00_3832; } } 
BgL_arg1850z00_1726 = BgL_res2832z00_3843; } 
VECTOR_SET(BgL_v1329z00_1725,((long)0),BgL_arg1850z00_1726); } 
{ /* Llib/object.scm 215 */
obj_t BgL_arg1857z00_1739;
{ /* Llib/object.scm 215 */
obj_t BgL_res2833z00_3860;
{ /* Llib/object.scm 215 */
obj_t BgL_namez00_3845;obj_t BgL_typez00_3848;
BgL_namez00_3845 = BGl_symbol4059z00zz__objectz00; 
BgL_typez00_3848 = BGl_symbol4013z00zz__objectz00; 
{ /* Llib/object.scm 550 */
obj_t BgL_v1313z00_3849;
BgL_v1313z00_3849 = 
create_vector(((long)9)); 
VECTOR_SET(BgL_v1313z00_3849,((long)0),BgL_namez00_3845); 
VECTOR_SET(BgL_v1313z00_3849,((long)1),BGl_proc4058z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3849,((long)2),BGl_proc4057z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3849,((long)3),BFALSE); 
VECTOR_SET(BgL_v1313z00_3849,((long)4),BGl_makezd2classzd2fieldzd2envzd2zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3849,((long)5),BFALSE); 
VECTOR_SET(BgL_v1313z00_3849,((long)6),BGl_proc4056z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3849,((long)7),BgL_typez00_3848); 
VECTOR_SET(BgL_v1313z00_3849,((long)8),BTRUE); 
BgL_res2833z00_3860 = BgL_v1313z00_3849; } } 
BgL_arg1857z00_1739 = BgL_res2833z00_3860; } 
VECTOR_SET(BgL_v1329z00_1725,((long)1),BgL_arg1857z00_1739); } 
{ /* Llib/object.scm 215 */
obj_t BgL_arg1865z00_1752;
{ /* Llib/object.scm 215 */
obj_t BgL_res2834z00_3878;
{ /* Llib/object.scm 215 */
obj_t BgL_namez00_3863;obj_t BgL_typez00_3866;
BgL_namez00_3863 = BGl_symbol4064z00zz__objectz00; 
BgL_typez00_3866 = BGl_symbol4013z00zz__objectz00; 
{ /* Llib/object.scm 550 */
obj_t BgL_v1313z00_3867;
BgL_v1313z00_3867 = 
create_vector(((long)9)); 
VECTOR_SET(BgL_v1313z00_3867,((long)0),BgL_namez00_3863); 
VECTOR_SET(BgL_v1313z00_3867,((long)1),BGl_proc4063z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3867,((long)2),BGl_proc4062z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3867,((long)3),BFALSE); 
VECTOR_SET(BgL_v1313z00_3867,((long)4),BGl_makezd2classzd2fieldzd2envzd2zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3867,((long)5),BFALSE); 
VECTOR_SET(BgL_v1313z00_3867,((long)6),BGl_proc4061z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3867,((long)7),BgL_typez00_3866); 
VECTOR_SET(BgL_v1313z00_3867,((long)8),BTRUE); 
BgL_res2834z00_3878 = BgL_v1313z00_3867; } } 
BgL_arg1865z00_1752 = BgL_res2834z00_3878; } 
VECTOR_SET(BgL_v1329z00_1725,((long)2),BgL_arg1865z00_1752); } 
BgL_arg1840z00_1711 = BgL_v1329z00_1725; } 
{ /* Llib/object.scm 215 */
obj_t BgL_v1330z00_1766;
BgL_v1330z00_1766 = 
create_vector(((long)0)); 
BgL_arg1841z00_1712 = BgL_v1330z00_1766; } 
BGl_z62exceptionz62zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4069z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62conditionz62zz__objectz00, ((long)42024), BGl_proc4068z00zz__objectz00, BGl_proc4067z00zz__objectz00, BFALSE, BGl_proc4066z00zz__objectz00, BFALSE, BgL_arg1840z00_1711, BgL_arg1841z00_1712); } 
{ /* Llib/object.scm 220 */
obj_t BgL_arg1878z00_1773;obj_t BgL_arg1879z00_1774;
{ /* Llib/object.scm 220 */
obj_t BgL_v1331z00_1790;
BgL_v1331z00_1790 = 
create_vector(((long)3)); 
{ /* Llib/object.scm 220 */
obj_t BgL_arg1885z00_1791;
{ /* Llib/object.scm 220 */
obj_t BgL_res2837z00_3906;
{ /* Llib/object.scm 220 */
obj_t BgL_namez00_3891;obj_t BgL_typez00_3894;
BgL_namez00_3891 = BGl_symbol3908z00zz__objectz00; 
BgL_typez00_3894 = BGl_symbol4013z00zz__objectz00; 
{ /* Llib/object.scm 550 */
obj_t BgL_v1313z00_3895;
BgL_v1313z00_3895 = 
create_vector(((long)9)); 
VECTOR_SET(BgL_v1313z00_3895,((long)0),BgL_namez00_3891); 
VECTOR_SET(BgL_v1313z00_3895,((long)1),BGl_proc4072z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3895,((long)2),BGl_proc4071z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3895,((long)3),BFALSE); 
VECTOR_SET(BgL_v1313z00_3895,((long)4),BGl_makezd2classzd2fieldzd2envzd2zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3895,((long)5),BFALSE); 
VECTOR_SET(BgL_v1313z00_3895,((long)6),BFALSE); 
VECTOR_SET(BgL_v1313z00_3895,((long)7),BgL_typez00_3894); 
VECTOR_SET(BgL_v1313z00_3895,((long)8),BTRUE); 
BgL_res2837z00_3906 = BgL_v1313z00_3895; } } 
BgL_arg1885z00_1791 = BgL_res2837z00_3906; } 
VECTOR_SET(BgL_v1331z00_1790,((long)0),BgL_arg1885z00_1791); } 
{ /* Llib/object.scm 220 */
obj_t BgL_arg1891z00_1801;
{ /* Llib/object.scm 220 */
obj_t BgL_res2838z00_3923;
{ /* Llib/object.scm 220 */
obj_t BgL_namez00_3908;obj_t BgL_typez00_3911;
BgL_namez00_3908 = BGl_symbol4075z00zz__objectz00; 
BgL_typez00_3911 = BGl_symbol4013z00zz__objectz00; 
{ /* Llib/object.scm 550 */
obj_t BgL_v1313z00_3912;
BgL_v1313z00_3912 = 
create_vector(((long)9)); 
VECTOR_SET(BgL_v1313z00_3912,((long)0),BgL_namez00_3908); 
VECTOR_SET(BgL_v1313z00_3912,((long)1),BGl_proc4074z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3912,((long)2),BGl_proc4073z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3912,((long)3),BFALSE); 
VECTOR_SET(BgL_v1313z00_3912,((long)4),BGl_makezd2classzd2fieldzd2envzd2zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3912,((long)5),BFALSE); 
VECTOR_SET(BgL_v1313z00_3912,((long)6),BFALSE); 
VECTOR_SET(BgL_v1313z00_3912,((long)7),BgL_typez00_3911); 
VECTOR_SET(BgL_v1313z00_3912,((long)8),BFALSE); 
BgL_res2838z00_3923 = BgL_v1313z00_3912; } } 
BgL_arg1891z00_1801 = BgL_res2838z00_3923; } 
VECTOR_SET(BgL_v1331z00_1790,((long)1),BgL_arg1891z00_1801); } 
{ /* Llib/object.scm 220 */
obj_t BgL_arg1896z00_1811;
{ /* Llib/object.scm 220 */
obj_t BgL_res2839z00_3940;
{ /* Llib/object.scm 220 */
obj_t BgL_namez00_3925;obj_t BgL_typez00_3928;
BgL_namez00_3925 = BGl_symbol4013z00zz__objectz00; 
BgL_typez00_3928 = BGl_symbol4013z00zz__objectz00; 
{ /* Llib/object.scm 550 */
obj_t BgL_v1313z00_3929;
BgL_v1313z00_3929 = 
create_vector(((long)9)); 
VECTOR_SET(BgL_v1313z00_3929,((long)0),BgL_namez00_3925); 
VECTOR_SET(BgL_v1313z00_3929,((long)1),BGl_proc4078z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3929,((long)2),BGl_proc4077z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3929,((long)3),BFALSE); 
VECTOR_SET(BgL_v1313z00_3929,((long)4),BGl_makezd2classzd2fieldzd2envzd2zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3929,((long)5),BFALSE); 
VECTOR_SET(BgL_v1313z00_3929,((long)6),BFALSE); 
VECTOR_SET(BgL_v1313z00_3929,((long)7),BgL_typez00_3928); 
VECTOR_SET(BgL_v1313z00_3929,((long)8),BFALSE); 
BgL_res2839z00_3940 = BgL_v1313z00_3929; } } 
BgL_arg1896z00_1811 = BgL_res2839z00_3940; } 
VECTOR_SET(BgL_v1331z00_1790,((long)2),BgL_arg1896z00_1811); } 
BgL_arg1878z00_1773 = BgL_v1331z00_1790; } 
{ /* Llib/object.scm 220 */
obj_t BgL_v1332z00_1821;
BgL_v1332z00_1821 = 
create_vector(((long)0)); 
BgL_arg1879z00_1774 = BgL_v1332z00_1821; } 
BGl_z62errorz62zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4082z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62exceptionz62zz__objectz00, ((long)27645), BGl_proc4081z00zz__objectz00, BGl_proc4080z00zz__objectz00, BFALSE, BGl_proc4079z00zz__objectz00, BFALSE, BgL_arg1878z00_1773, BgL_arg1879z00_1774); } 
{ /* Llib/object.scm 224 */
obj_t BgL_arg1904z00_1828;obj_t BgL_arg1905z00_1829;
{ /* Llib/object.scm 224 */
obj_t BgL_v1333z00_1846;
BgL_v1333z00_1846 = 
create_vector(((long)1)); 
{ /* Llib/object.scm 224 */
obj_t BgL_arg1911z00_1847;
{ /* Llib/object.scm 224 */
obj_t BgL_res2842z00_3968;
{ /* Llib/object.scm 224 */
obj_t BgL_namez00_3953;obj_t BgL_typez00_3956;
BgL_namez00_3953 = BGl_symbol4086z00zz__objectz00; 
BgL_typez00_3956 = BGl_symbol4013z00zz__objectz00; 
{ /* Llib/object.scm 550 */
obj_t BgL_v1313z00_3957;
BgL_v1313z00_3957 = 
create_vector(((long)9)); 
VECTOR_SET(BgL_v1313z00_3957,((long)0),BgL_namez00_3953); 
VECTOR_SET(BgL_v1313z00_3957,((long)1),BGl_proc4085z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3957,((long)2),BGl_proc4084z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3957,((long)3),BFALSE); 
VECTOR_SET(BgL_v1313z00_3957,((long)4),BGl_makezd2classzd2fieldzd2envzd2zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3957,((long)5),BFALSE); 
VECTOR_SET(BgL_v1313z00_3957,((long)6),BFALSE); 
VECTOR_SET(BgL_v1313z00_3957,((long)7),BgL_typez00_3956); 
VECTOR_SET(BgL_v1313z00_3957,((long)8),BFALSE); 
BgL_res2842z00_3968 = BgL_v1313z00_3957; } } 
BgL_arg1911z00_1847 = BgL_res2842z00_3968; } 
VECTOR_SET(BgL_v1333z00_1846,((long)0),BgL_arg1911z00_1847); } 
BgL_arg1904z00_1828 = BgL_v1333z00_1846; } 
{ /* Llib/object.scm 224 */
obj_t BgL_v1334z00_1857;
BgL_v1334z00_1857 = 
create_vector(((long)0)); 
BgL_arg1905z00_1829 = BgL_v1334z00_1857; } 
BGl_z62typezd2errorzb0zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4091z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62errorz62zz__objectz00, ((long)59148), BGl_proc4090z00zz__objectz00, BGl_proc4089z00zz__objectz00, BFALSE, BGl_proc4088z00zz__objectz00, BFALSE, BgL_arg1904z00_1828, BgL_arg1905z00_1829); } 
{ /* Llib/object.scm 226 */
obj_t BgL_arg1919z00_1864;obj_t BgL_arg1920z00_1865;
{ /* Llib/object.scm 226 */
obj_t BgL_v1335z00_1882;
BgL_v1335z00_1882 = 
create_vector(((long)1)); 
{ /* Llib/object.scm 226 */
obj_t BgL_arg1927z00_1883;
{ /* Llib/object.scm 226 */
obj_t BgL_res2845z00_3996;
{ /* Llib/object.scm 226 */
obj_t BgL_namez00_3981;obj_t BgL_typez00_3984;
BgL_namez00_3981 = BGl_symbol4095z00zz__objectz00; 
BgL_typez00_3984 = BGl_symbol4013z00zz__objectz00; 
{ /* Llib/object.scm 550 */
obj_t BgL_v1313z00_3985;
BgL_v1313z00_3985 = 
create_vector(((long)9)); 
VECTOR_SET(BgL_v1313z00_3985,((long)0),BgL_namez00_3981); 
VECTOR_SET(BgL_v1313z00_3985,((long)1),BGl_proc4094z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3985,((long)2),BGl_proc4093z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3985,((long)3),BFALSE); 
VECTOR_SET(BgL_v1313z00_3985,((long)4),BGl_makezd2classzd2fieldzd2envzd2zz__objectz00); 
VECTOR_SET(BgL_v1313z00_3985,((long)5),BFALSE); 
VECTOR_SET(BgL_v1313z00_3985,((long)6),BFALSE); 
VECTOR_SET(BgL_v1313z00_3985,((long)7),BgL_typez00_3984); 
VECTOR_SET(BgL_v1313z00_3985,((long)8),BFALSE); 
BgL_res2845z00_3996 = BgL_v1313z00_3985; } } 
BgL_arg1927z00_1883 = BgL_res2845z00_3996; } 
VECTOR_SET(BgL_v1335z00_1882,((long)0),BgL_arg1927z00_1883); } 
BgL_arg1919z00_1864 = BgL_v1335z00_1882; } 
{ /* Llib/object.scm 226 */
obj_t BgL_v1336z00_1893;
BgL_v1336z00_1893 = 
create_vector(((long)0)); 
BgL_arg1920z00_1865 = BgL_v1336z00_1893; } 
BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4100z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62errorz62zz__objectz00, ((long)16959), BGl_proc4099z00zz__objectz00, BGl_proc4098z00zz__objectz00, BFALSE, BGl_proc4097z00zz__objectz00, BFALSE, BgL_arg1919z00_1864, BgL_arg1920z00_1865); } 
{ /* Llib/object.scm 228 */
obj_t BgL_arg1935z00_1900;obj_t BgL_arg1936z00_1901;
{ /* Llib/object.scm 228 */
obj_t BgL_v1337z00_1917;
BgL_v1337z00_1917 = 
create_vector(((long)0)); 
BgL_arg1935z00_1900 = BgL_v1337z00_1917; } 
{ /* Llib/object.scm 228 */
obj_t BgL_v1338z00_1918;
BgL_v1338z00_1918 = 
create_vector(((long)0)); 
BgL_arg1936z00_1901 = BgL_v1338z00_1918; } 
BGl_z62iozd2errorzb0zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4105z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62errorz62zz__objectz00, ((long)63768), BGl_proc4104z00zz__objectz00, BGl_proc4103z00zz__objectz00, BFALSE, BGl_proc4102z00zz__objectz00, BFALSE, BgL_arg1935z00_1900, BgL_arg1936z00_1901); } 
{ /* Llib/object.scm 229 */
obj_t BgL_arg1945z00_1925;obj_t BgL_arg1946z00_1926;
{ /* Llib/object.scm 229 */
obj_t BgL_v1339z00_1942;
BgL_v1339z00_1942 = 
create_vector(((long)0)); 
BgL_arg1945z00_1925 = BgL_v1339z00_1942; } 
{ /* Llib/object.scm 229 */
obj_t BgL_v1340z00_1943;
BgL_v1340z00_1943 = 
create_vector(((long)0)); 
BgL_arg1946z00_1926 = BgL_v1340z00_1943; } 
BGl_z62iozd2portzd2errorz62zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4110z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62iozd2errorzb0zz__objectz00, ((long)55783), BGl_proc4109z00zz__objectz00, BGl_proc4108z00zz__objectz00, BFALSE, BGl_proc4107z00zz__objectz00, BFALSE, BgL_arg1945z00_1925, BgL_arg1946z00_1926); } 
{ /* Llib/object.scm 230 */
obj_t BgL_arg1956z00_1950;obj_t BgL_arg1957z00_1951;
{ /* Llib/object.scm 230 */
obj_t BgL_v1341z00_1967;
BgL_v1341z00_1967 = 
create_vector(((long)0)); 
BgL_arg1956z00_1950 = BgL_v1341z00_1967; } 
{ /* Llib/object.scm 230 */
obj_t BgL_v1342z00_1968;
BgL_v1342z00_1968 = 
create_vector(((long)0)); 
BgL_arg1957z00_1951 = BgL_v1342z00_1968; } 
BGl_z62iozd2readzd2errorz62zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4115z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62iozd2portzd2errorz62zz__objectz00, ((long)15829), BGl_proc4114z00zz__objectz00, BGl_proc4113z00zz__objectz00, BFALSE, BGl_proc4112z00zz__objectz00, BFALSE, BgL_arg1956z00_1950, BgL_arg1957z00_1951); } 
{ /* Llib/object.scm 231 */
obj_t BgL_arg1966z00_1975;obj_t BgL_arg1967z00_1976;
{ /* Llib/object.scm 231 */
obj_t BgL_v1343z00_1992;
BgL_v1343z00_1992 = 
create_vector(((long)0)); 
BgL_arg1966z00_1975 = BgL_v1343z00_1992; } 
{ /* Llib/object.scm 231 */
obj_t BgL_v1344z00_1993;
BgL_v1344z00_1993 = 
create_vector(((long)0)); 
BgL_arg1967z00_1976 = BgL_v1344z00_1993; } 
BGl_z62iozd2writezd2errorz62zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4120z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62iozd2portzd2errorz62zz__objectz00, ((long)35845), BGl_proc4119z00zz__objectz00, BGl_proc4118z00zz__objectz00, BFALSE, BGl_proc4117z00zz__objectz00, BFALSE, BgL_arg1966z00_1975, BgL_arg1967z00_1976); } 
{ /* Llib/object.scm 232 */
obj_t BgL_arg1976z00_2000;obj_t BgL_arg1977z00_2001;
{ /* Llib/object.scm 232 */
obj_t BgL_v1345z00_2017;
BgL_v1345z00_2017 = 
create_vector(((long)0)); 
BgL_arg1976z00_2000 = BgL_v1345z00_2017; } 
{ /* Llib/object.scm 232 */
obj_t BgL_v1346z00_2018;
BgL_v1346z00_2018 = 
create_vector(((long)0)); 
BgL_arg1977z00_2001 = BgL_v1346z00_2018; } 
BGl_z62iozd2closedzd2errorz62zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4125z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62iozd2portzd2errorz62zz__objectz00, ((long)8181), BGl_proc4124z00zz__objectz00, BGl_proc4123z00zz__objectz00, BFALSE, BGl_proc4122z00zz__objectz00, BFALSE, BgL_arg1976z00_2000, BgL_arg1977z00_2001); } 
{ /* Llib/object.scm 233 */
obj_t BgL_arg1986z00_2025;obj_t BgL_arg1987z00_2026;
{ /* Llib/object.scm 233 */
obj_t BgL_v1347z00_2042;
BgL_v1347z00_2042 = 
create_vector(((long)0)); 
BgL_arg1986z00_2025 = BgL_v1347z00_2042; } 
{ /* Llib/object.scm 233 */
obj_t BgL_v1348z00_2043;
BgL_v1348z00_2043 = 
create_vector(((long)0)); 
BgL_arg1987z00_2026 = BgL_v1348z00_2043; } 
BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4130z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62iozd2errorzb0zz__objectz00, ((long)9299), BGl_proc4129z00zz__objectz00, BGl_proc4128z00zz__objectz00, BFALSE, BGl_proc4127z00zz__objectz00, BFALSE, BgL_arg1986z00_2025, BgL_arg1987z00_2026); } 
{ /* Llib/object.scm 234 */
obj_t BgL_arg1997z00_2050;obj_t BgL_arg1998z00_2051;
{ /* Llib/object.scm 234 */
obj_t BgL_v1349z00_2067;
BgL_v1349z00_2067 = 
create_vector(((long)0)); 
BgL_arg1997z00_2050 = BgL_v1349z00_2067; } 
{ /* Llib/object.scm 234 */
obj_t BgL_v1350z00_2068;
BgL_v1350z00_2068 = 
create_vector(((long)0)); 
BgL_arg1998z00_2051 = BgL_v1350z00_2068; } 
BGl_z62iozd2parsezd2errorz62zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4135z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62iozd2errorzb0zz__objectz00, ((long)22094), BGl_proc4134z00zz__objectz00, BGl_proc4133z00zz__objectz00, BFALSE, BGl_proc4132z00zz__objectz00, BFALSE, BgL_arg1997z00_2050, BgL_arg1998z00_2051); } 
{ /* Llib/object.scm 235 */
obj_t BgL_arg2008z00_2075;obj_t BgL_arg2010z00_2076;
{ /* Llib/object.scm 235 */
obj_t BgL_v1351z00_2092;
BgL_v1351z00_2092 = 
create_vector(((long)0)); 
BgL_arg2008z00_2075 = BgL_v1351z00_2092; } 
{ /* Llib/object.scm 235 */
obj_t BgL_v1352z00_2093;
BgL_v1352z00_2093 = 
create_vector(((long)0)); 
BgL_arg2010z00_2076 = BgL_v1352z00_2093; } 
BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4140z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62iozd2errorzb0zz__objectz00, ((long)40805), BGl_proc4139z00zz__objectz00, BGl_proc4138z00zz__objectz00, BFALSE, BGl_proc4137z00zz__objectz00, BFALSE, BgL_arg2008z00_2075, BgL_arg2010z00_2076); } 
{ /* Llib/object.scm 236 */
obj_t BgL_arg2020z00_2100;obj_t BgL_arg2021z00_2101;
{ /* Llib/object.scm 236 */
obj_t BgL_v1353z00_2117;
BgL_v1353z00_2117 = 
create_vector(((long)0)); 
BgL_arg2020z00_2100 = BgL_v1353z00_2117; } 
{ /* Llib/object.scm 236 */
obj_t BgL_v1354z00_2118;
BgL_v1354z00_2118 = 
create_vector(((long)0)); 
BgL_arg2021z00_2101 = BgL_v1354z00_2118; } 
BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4145z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62iozd2errorzb0zz__objectz00, ((long)43586), BGl_proc4144z00zz__objectz00, BGl_proc4143z00zz__objectz00, BFALSE, BGl_proc4142z00zz__objectz00, BFALSE, BgL_arg2020z00_2100, BgL_arg2021z00_2101); } 
{ /* Llib/object.scm 237 */
obj_t BgL_arg2033z00_2125;obj_t BgL_arg2034z00_2126;
{ /* Llib/object.scm 237 */
obj_t BgL_v1355z00_2142;
BgL_v1355z00_2142 = 
create_vector(((long)0)); 
BgL_arg2033z00_2125 = BgL_v1355z00_2142; } 
{ /* Llib/object.scm 237 */
obj_t BgL_v1356z00_2143;
BgL_v1356z00_2143 = 
create_vector(((long)0)); 
BgL_arg2034z00_2126 = BgL_v1356z00_2143; } 
BGl_z62iozd2sigpipezd2errorz62zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4150z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62iozd2errorzb0zz__objectz00, ((long)38838), BGl_proc4149z00zz__objectz00, BGl_proc4148z00zz__objectz00, BFALSE, BGl_proc4147z00zz__objectz00, BFALSE, BgL_arg2033z00_2125, BgL_arg2034z00_2126); } 
{ /* Llib/object.scm 238 */
obj_t BgL_arg2044z00_2150;obj_t BgL_arg2045z00_2151;
{ /* Llib/object.scm 238 */
obj_t BgL_v1357z00_2167;
BgL_v1357z00_2167 = 
create_vector(((long)0)); 
BgL_arg2044z00_2150 = BgL_v1357z00_2167; } 
{ /* Llib/object.scm 238 */
obj_t BgL_v1358z00_2168;
BgL_v1358z00_2168 = 
create_vector(((long)0)); 
BgL_arg2045z00_2151 = BgL_v1358z00_2168; } 
BGl_z62iozd2timeoutzd2errorz62zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4155z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62iozd2errorzb0zz__objectz00, ((long)220), BGl_proc4154z00zz__objectz00, BGl_proc4153z00zz__objectz00, BFALSE, BGl_proc4152z00zz__objectz00, BFALSE, BgL_arg2044z00_2150, BgL_arg2045z00_2151); } 
{ /* Llib/object.scm 239 */
obj_t BgL_arg2056z00_2175;obj_t BgL_arg2057z00_2176;
{ /* Llib/object.scm 239 */
obj_t BgL_v1359z00_2192;
BgL_v1359z00_2192 = 
create_vector(((long)0)); 
BgL_arg2056z00_2175 = BgL_v1359z00_2192; } 
{ /* Llib/object.scm 239 */
obj_t BgL_v1360z00_2193;
BgL_v1360z00_2193 = 
create_vector(((long)0)); 
BgL_arg2057z00_2176 = BgL_v1360z00_2193; } 
BGl_z62iozd2connectionzd2errorz62zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4160z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62iozd2errorzb0zz__objectz00, ((long)37032), BGl_proc4159z00zz__objectz00, BGl_proc4158z00zz__objectz00, BFALSE, BGl_proc4157z00zz__objectz00, BFALSE, BgL_arg2056z00_2175, BgL_arg2057z00_2176); } 
{ /* Llib/object.scm 241 */
obj_t BgL_arg2068z00_2200;obj_t BgL_arg2069z00_2201;
{ /* Llib/object.scm 241 */
obj_t BgL_v1361z00_2217;
BgL_v1361z00_2217 = 
create_vector(((long)0)); 
BgL_arg2068z00_2200 = BgL_v1361z00_2217; } 
{ /* Llib/object.scm 241 */
obj_t BgL_v1362z00_2218;
BgL_v1362z00_2218 = 
create_vector(((long)0)); 
BgL_arg2069z00_2201 = BgL_v1362z00_2218; } 
BGl_z62processzd2exceptionzb0zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4165z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62errorz62zz__objectz00, ((long)8909), BGl_proc4164z00zz__objectz00, BGl_proc4163z00zz__objectz00, BFALSE, BGl_proc4162z00zz__objectz00, BFALSE, BgL_arg2068z00_2200, BgL_arg2069z00_2201); } 
{ /* Llib/object.scm 243 */
obj_t BgL_arg2080z00_2225;obj_t BgL_arg2081z00_2226;
{ /* Llib/object.scm 243 */
obj_t BgL_v1363z00_2242;
BgL_v1363z00_2242 = 
create_vector(((long)0)); 
BgL_arg2080z00_2225 = BgL_v1363z00_2242; } 
{ /* Llib/object.scm 243 */
obj_t BgL_v1364z00_2243;
BgL_v1364z00_2243 = 
create_vector(((long)0)); 
BgL_arg2081z00_2226 = BgL_v1364z00_2243; } 
BGl_z62stackzd2overflowzd2errorz62zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4170z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62errorz62zz__objectz00, ((long)12371), BGl_proc4169z00zz__objectz00, BGl_proc4168z00zz__objectz00, BFALSE, BGl_proc4167z00zz__objectz00, BFALSE, BgL_arg2080z00_2225, BgL_arg2081z00_2226); } 
{ /* Llib/object.scm 245 */
obj_t BgL_arg2090z00_2250;obj_t BgL_arg2091z00_2251;
{ /* Llib/object.scm 245 */
obj_t BgL_v1365z00_2265;
BgL_v1365z00_2265 = 
create_vector(((long)1)); 
{ /* Llib/object.scm 245 */
obj_t BgL_arg2097z00_2266;
{ /* Llib/object.scm 245 */
obj_t BgL_res2876z00_4178;
{ /* Llib/object.scm 245 */
obj_t BgL_namez00_4163;obj_t BgL_typez00_4166;
BgL_namez00_4163 = BGl_symbol4175z00zz__objectz00; 
BgL_typez00_4166 = BGl_symbol4177z00zz__objectz00; 
{ /* Llib/object.scm 550 */
obj_t BgL_v1313z00_4167;
BgL_v1313z00_4167 = 
create_vector(((long)9)); 
VECTOR_SET(BgL_v1313z00_4167,((long)0),BgL_namez00_4163); 
VECTOR_SET(BgL_v1313z00_4167,((long)1),BGl_proc4174z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_4167,((long)2),BGl_proc4173z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_4167,((long)3),BFALSE); 
VECTOR_SET(BgL_v1313z00_4167,((long)4),BGl_makezd2classzd2fieldzd2envzd2zz__objectz00); 
VECTOR_SET(BgL_v1313z00_4167,((long)5),BFALSE); 
VECTOR_SET(BgL_v1313z00_4167,((long)6),BGl_proc4172z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_4167,((long)7),BgL_typez00_4166); 
VECTOR_SET(BgL_v1313z00_4167,((long)8),BFALSE); 
BgL_res2876z00_4178 = BgL_v1313z00_4167; } } 
BgL_arg2097z00_2266 = BgL_res2876z00_4178; } 
VECTOR_SET(BgL_v1365z00_2265,((long)0),BgL_arg2097z00_2266); } 
BgL_arg2090z00_2250 = BgL_v1365z00_2265; } 
{ /* Llib/object.scm 245 */
obj_t BgL_v1366z00_2279;
BgL_v1366z00_2279 = 
create_vector(((long)0)); 
BgL_arg2091z00_2251 = BgL_v1366z00_2279; } 
BGl_z62securityzd2exceptionzb0zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4182z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62exceptionz62zz__objectz00, ((long)17221), BGl_proc4181z00zz__objectz00, BGl_proc4180z00zz__objectz00, BFALSE, BGl_proc4179z00zz__objectz00, BFALSE, BgL_arg2090z00_2250, BgL_arg2091z00_2251); } 
{ /* Llib/object.scm 247 */
obj_t BgL_arg2108z00_2286;obj_t BgL_arg2109z00_2287;
{ /* Llib/object.scm 247 */
obj_t BgL_v1367z00_2303;
BgL_v1367z00_2303 = 
create_vector(((long)2)); 
{ /* Llib/object.scm 247 */
obj_t BgL_arg2116z00_2304;
{ /* Llib/object.scm 247 */
obj_t BgL_res2879z00_4206;
{ /* Llib/object.scm 247 */
obj_t BgL_namez00_4191;obj_t BgL_typez00_4194;
BgL_namez00_4191 = BGl_symbol4013z00zz__objectz00; 
BgL_typez00_4194 = BGl_symbol4013z00zz__objectz00; 
{ /* Llib/object.scm 550 */
obj_t BgL_v1313z00_4195;
BgL_v1313z00_4195 = 
create_vector(((long)9)); 
VECTOR_SET(BgL_v1313z00_4195,((long)0),BgL_namez00_4191); 
VECTOR_SET(BgL_v1313z00_4195,((long)1),BGl_proc4186z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_4195,((long)2),BGl_proc4185z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_4195,((long)3),BFALSE); 
VECTOR_SET(BgL_v1313z00_4195,((long)4),BGl_makezd2classzd2fieldzd2envzd2zz__objectz00); 
VECTOR_SET(BgL_v1313z00_4195,((long)5),BFALSE); 
VECTOR_SET(BgL_v1313z00_4195,((long)6),BGl_proc4184z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_4195,((long)7),BgL_typez00_4194); 
VECTOR_SET(BgL_v1313z00_4195,((long)8),BFALSE); 
BgL_res2879z00_4206 = BgL_v1313z00_4195; } } 
BgL_arg2116z00_2304 = BgL_res2879z00_4206; } 
VECTOR_SET(BgL_v1367z00_2303,((long)0),BgL_arg2116z00_2304); } 
{ /* Llib/object.scm 247 */
obj_t BgL_arg2123z00_2317;
{ /* Llib/object.scm 247 */
obj_t BgL_res2880z00_4223;
{ /* Llib/object.scm 247 */
obj_t BgL_namez00_4208;obj_t BgL_typez00_4211;
BgL_namez00_4208 = BGl_symbol4190z00zz__objectz00; 
BgL_typez00_4211 = BGl_symbol4013z00zz__objectz00; 
{ /* Llib/object.scm 550 */
obj_t BgL_v1313z00_4212;
BgL_v1313z00_4212 = 
create_vector(((long)9)); 
VECTOR_SET(BgL_v1313z00_4212,((long)0),BgL_namez00_4208); 
VECTOR_SET(BgL_v1313z00_4212,((long)1),BGl_proc4189z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_4212,((long)2),BGl_proc4188z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_4212,((long)3),BFALSE); 
VECTOR_SET(BgL_v1313z00_4212,((long)4),BGl_makezd2classzd2fieldzd2envzd2zz__objectz00); 
VECTOR_SET(BgL_v1313z00_4212,((long)5),BFALSE); 
VECTOR_SET(BgL_v1313z00_4212,((long)6),BGl_proc4187z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_4212,((long)7),BgL_typez00_4211); 
VECTOR_SET(BgL_v1313z00_4212,((long)8),BFALSE); 
BgL_res2880z00_4223 = BgL_v1313z00_4212; } } 
BgL_arg2123z00_2317 = BgL_res2880z00_4223; } 
VECTOR_SET(BgL_v1367z00_2303,((long)1),BgL_arg2123z00_2317); } 
BgL_arg2108z00_2286 = BgL_v1367z00_2303; } 
{ /* Llib/object.scm 247 */
obj_t BgL_v1368z00_2330;
BgL_v1368z00_2330 = 
create_vector(((long)0)); 
BgL_arg2109z00_2287 = BgL_v1368z00_2330; } 
BGl_z62accesszd2controlzd2exceptionz62zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4195z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62securityzd2exceptionzb0zz__objectz00, ((long)64249), BGl_proc4194z00zz__objectz00, BGl_proc4193z00zz__objectz00, BFALSE, BGl_proc4192z00zz__objectz00, BFALSE, BgL_arg2108z00_2286, BgL_arg2109z00_2287); } 
{ /* Llib/object.scm 251 */
obj_t BgL_arg2134z00_2337;obj_t BgL_arg2135z00_2338;
{ /* Llib/object.scm 251 */
obj_t BgL_v1369z00_2352;
BgL_v1369z00_2352 = 
create_vector(((long)1)); 
{ /* Llib/object.scm 251 */
obj_t BgL_arg2142z00_2353;
{ /* Llib/object.scm 251 */
obj_t BgL_res2883z00_4251;
{ /* Llib/object.scm 251 */
obj_t BgL_namez00_4236;obj_t BgL_typez00_4239;
BgL_namez00_4236 = BGl_symbol4199z00zz__objectz00; 
BgL_typez00_4239 = BGl_symbol4013z00zz__objectz00; 
{ /* Llib/object.scm 550 */
obj_t BgL_v1313z00_4240;
BgL_v1313z00_4240 = 
create_vector(((long)9)); 
VECTOR_SET(BgL_v1313z00_4240,((long)0),BgL_namez00_4236); 
VECTOR_SET(BgL_v1313z00_4240,((long)1),BGl_proc4198z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_4240,((long)2),BGl_proc4197z00zz__objectz00); 
VECTOR_SET(BgL_v1313z00_4240,((long)3),BFALSE); 
VECTOR_SET(BgL_v1313z00_4240,((long)4),BGl_makezd2classzd2fieldzd2envzd2zz__objectz00); 
VECTOR_SET(BgL_v1313z00_4240,((long)5),BFALSE); 
VECTOR_SET(BgL_v1313z00_4240,((long)6),BFALSE); 
VECTOR_SET(BgL_v1313z00_4240,((long)7),BgL_typez00_4239); 
VECTOR_SET(BgL_v1313z00_4240,((long)8),BFALSE); 
BgL_res2883z00_4251 = BgL_v1313z00_4240; } } 
BgL_arg2142z00_2353 = BgL_res2883z00_4251; } 
VECTOR_SET(BgL_v1369z00_2352,((long)0),BgL_arg2142z00_2353); } 
BgL_arg2134z00_2337 = BgL_v1369z00_2352; } 
{ /* Llib/object.scm 251 */
obj_t BgL_v1370z00_2363;
BgL_v1370z00_2363 = 
create_vector(((long)0)); 
BgL_arg2135z00_2338 = BgL_v1370z00_2363; } 
BGl_z62warningz62zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4204z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62exceptionz62zz__objectz00, ((long)33684), BGl_proc4203z00zz__objectz00, BGl_proc4202z00zz__objectz00, BFALSE, BGl_proc4201z00zz__objectz00, BFALSE, BgL_arg2134z00_2337, BgL_arg2135z00_2338); } 
{ /* Llib/object.scm 253 */
obj_t BgL_arg2150z00_2370;obj_t BgL_arg2152z00_2371;
{ /* Llib/object.scm 253 */
obj_t BgL_v1371z00_2385;
BgL_v1371z00_2385 = 
create_vector(((long)0)); 
BgL_arg2150z00_2370 = BgL_v1371z00_2385; } 
{ /* Llib/object.scm 253 */
obj_t BgL_v1372z00_2386;
BgL_v1372z00_2386 = 
create_vector(((long)0)); 
BgL_arg2152z00_2371 = BgL_v1372z00_2386; } 
return ( 
BGl_z62evalzd2warningzb0zz__objectz00 = 
BGl_registerzd2classz12zc0zz__objectz00(BGl_symbol4209z00zz__objectz00, BGl_symbol4044z00zz__objectz00, BGl_z62warningz62zz__objectz00, ((long)60822), BGl_proc4208z00zz__objectz00, BGl_proc4207z00zz__objectz00, BFALSE, BGl_proc4206z00zz__objectz00, BFALSE, BgL_arg2150z00_2370, BgL_arg2152z00_2371), BUNSPEC) ;} } 

}



/* &<@anonymous:2157> */
obj_t BGl_z62zc3z04anonymousza32157ze3ze5zz__objectz00(obj_t BgL_envz00_5197, obj_t BgL_new1211z00_5198)
{
{ /* Llib/object.scm 253 */
{ 
BgL_z62evalzd2warningzb0_bglt BgL_auxz00_10319;
{ /* Llib/object.scm 253 */
BgL_z62evalzd2warningzb0_bglt BgL_new1211z00_6582;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1211z00_5198, BGl_z62evalzd2warningzb0zz__objectz00))
{ /* Llib/object.scm 253 */
BgL_new1211z00_6582 = 
((BgL_z62evalzd2warningzb0_bglt)BgL_new1211z00_5198); }  else 
{ 
obj_t BgL_auxz00_10323;
BgL_auxz00_10323 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)9124)), BGl_string4211z00zz__objectz00, BGl_string4210z00zz__objectz00, BgL_new1211z00_5198); 
FAILURE(BgL_auxz00_10323,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1211z00_6582)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1211z00_6582)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1211z00_6582)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62warningz62_bglt)COBJECT(
((BgL_z62warningz62_bglt)BgL_new1211z00_6582)))->BgL_argsz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_10319 = BgL_new1211z00_6582; } 
return 
((obj_t)BgL_auxz00_10319);} } 

}



/* &lambda2155 */
BgL_z62evalzd2warningzb0_bglt BGl_z62lambda2155z62zz__objectz00(obj_t BgL_envz00_5199)
{
{ /* Llib/object.scm 253 */
{ /* Llib/object.scm 253 */
BgL_z62evalzd2warningzb0_bglt BgL_new1210z00_6583;
BgL_new1210z00_6583 = 
((BgL_z62evalzd2warningzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62evalzd2warningzb0_bgl) ))); 
{ /* Llib/object.scm 253 */
long BgL_arg2156z00_6584;
{ /* Llib/object.scm 253 */
long BgL_res2887z00_6585;
BgL_res2887z00_6585 = 
BGL_CLASS_INDEX(BGl_z62evalzd2warningzb0zz__objectz00); 
BgL_arg2156z00_6584 = BgL_res2887z00_6585; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1210z00_6583), BgL_arg2156z00_6584); } 
return BgL_new1210z00_6583;} } 

}



/* &lambda2153 */
BgL_z62evalzd2warningzb0_bglt BGl_z62lambda2153z62zz__objectz00(obj_t BgL_envz00_5200, obj_t BgL_fname1206z00_5201, obj_t BgL_location1207z00_5202, obj_t BgL_stack1208z00_5203, obj_t BgL_args1209z00_5204)
{
{ /* Llib/object.scm 253 */
{ /* Llib/object.scm 253 */
BgL_z62evalzd2warningzb0_bglt BgL_new1274z00_6586;
{ /* Llib/object.scm 253 */
BgL_z62evalzd2warningzb0_bglt BgL_new1273z00_6587;
BgL_new1273z00_6587 = 
((BgL_z62evalzd2warningzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62evalzd2warningzb0_bgl) ))); 
{ /* Llib/object.scm 253 */
long BgL_arg2154z00_6588;
{ /* Llib/object.scm 253 */
long BgL_res2886z00_6589;
BgL_res2886z00_6589 = 
BGL_CLASS_INDEX(BGl_z62evalzd2warningzb0zz__objectz00); 
BgL_arg2154z00_6588 = BgL_res2886z00_6589; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1273z00_6587), BgL_arg2154z00_6588); } 
BgL_new1274z00_6586 = BgL_new1273z00_6587; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1274z00_6586)))->BgL_fnamez00)=((obj_t)BgL_fname1206z00_5201),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1274z00_6586)))->BgL_locationz00)=((obj_t)BgL_location1207z00_5202),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1274z00_6586)))->BgL_stackz00)=((obj_t)BgL_stack1208z00_5203),BUNSPEC); 
((((BgL_z62warningz62_bglt)COBJECT(
((BgL_z62warningz62_bglt)BgL_new1274z00_6586)))->BgL_argsz00)=((obj_t)BgL_args1209z00_5204),BUNSPEC); 
return BgL_new1274z00_6586;} } 

}



/* &<@anonymous:2141> */
obj_t BGl_z62zc3z04anonymousza32141ze3ze5zz__objectz00(obj_t BgL_envz00_5205, obj_t BgL_new1204z00_5206)
{
{ /* Llib/object.scm 251 */
{ 
BgL_z62warningz62_bglt BgL_auxz00_10352;
{ /* Llib/object.scm 251 */
BgL_z62warningz62_bglt BgL_new1204z00_6590;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1204z00_5206, BGl_z62warningz62zz__objectz00))
{ /* Llib/object.scm 251 */
BgL_new1204z00_6590 = 
((BgL_z62warningz62_bglt)BgL_new1204z00_5206); }  else 
{ 
obj_t BgL_auxz00_10356;
BgL_auxz00_10356 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)9065)), BGl_string4212z00zz__objectz00, BGl_string4205z00zz__objectz00, BgL_new1204z00_5206); 
FAILURE(BgL_auxz00_10356,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1204z00_6590)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1204z00_6590)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1204z00_6590)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62warningz62_bglt)COBJECT(BgL_new1204z00_6590))->BgL_argsz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_10352 = BgL_new1204z00_6590; } 
return 
((obj_t)BgL_auxz00_10352);} } 

}



/* &lambda2138 */
BgL_z62warningz62_bglt BGl_z62lambda2138z62zz__objectz00(obj_t BgL_envz00_5207)
{
{ /* Llib/object.scm 251 */
{ /* Llib/object.scm 251 */
BgL_z62warningz62_bglt BgL_new1203z00_6591;
BgL_new1203z00_6591 = 
((BgL_z62warningz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62warningz62_bgl) ))); 
{ /* Llib/object.scm 251 */
long BgL_arg2140z00_6592;
{ /* Llib/object.scm 251 */
long BgL_res2885z00_6593;
BgL_res2885z00_6593 = 
BGL_CLASS_INDEX(BGl_z62warningz62zz__objectz00); 
BgL_arg2140z00_6592 = BgL_res2885z00_6593; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1203z00_6591), BgL_arg2140z00_6592); } 
return BgL_new1203z00_6591;} } 

}



/* &lambda2136 */
BgL_z62warningz62_bglt BGl_z62lambda2136z62zz__objectz00(obj_t BgL_envz00_5208, obj_t BgL_fname1199z00_5209, obj_t BgL_location1200z00_5210, obj_t BgL_stack1201z00_5211, obj_t BgL_args1202z00_5212)
{
{ /* Llib/object.scm 251 */
{ /* Llib/object.scm 251 */
BgL_z62warningz62_bglt BgL_new1272z00_6594;
{ /* Llib/object.scm 251 */
BgL_z62warningz62_bglt BgL_new1271z00_6595;
BgL_new1271z00_6595 = 
((BgL_z62warningz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62warningz62_bgl) ))); 
{ /* Llib/object.scm 251 */
long BgL_arg2137z00_6596;
{ /* Llib/object.scm 251 */
long BgL_res2884z00_6597;
BgL_res2884z00_6597 = 
BGL_CLASS_INDEX(BGl_z62warningz62zz__objectz00); 
BgL_arg2137z00_6596 = BgL_res2884z00_6597; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1271z00_6595), BgL_arg2137z00_6596); } 
BgL_new1272z00_6594 = BgL_new1271z00_6595; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1272z00_6594)))->BgL_fnamez00)=((obj_t)BgL_fname1199z00_5209),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1272z00_6594)))->BgL_locationz00)=((obj_t)BgL_location1200z00_5210),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1272z00_6594)))->BgL_stackz00)=((obj_t)BgL_stack1201z00_5211),BUNSPEC); 
((((BgL_z62warningz62_bglt)COBJECT(BgL_new1272z00_6594))->BgL_argsz00)=((obj_t)BgL_args1202z00_5212),BUNSPEC); 
return BgL_new1272z00_6594;} } 

}



/* &lambda2146 */
obj_t BGl_z62lambda2146z62zz__objectz00(obj_t BgL_envz00_5213, obj_t BgL_oz00_5214, obj_t BgL_vz00_5215)
{
{ /* Llib/object.scm 251 */
{ /* Llib/object.scm 251 */
BgL_z62warningz62_bglt BgL_oz00_6598;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5214, BGl_z62warningz62zz__objectz00))
{ /* Llib/object.scm 251 */
BgL_oz00_6598 = 
((BgL_z62warningz62_bglt)BgL_oz00_5214); }  else 
{ 
obj_t BgL_auxz00_10386;
BgL_auxz00_10386 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)9065)), BGl_string4213z00zz__objectz00, BGl_string4205z00zz__objectz00, BgL_oz00_5214); 
FAILURE(BgL_auxz00_10386,BFALSE,BFALSE);} 
return 
((((BgL_z62warningz62_bglt)COBJECT(BgL_oz00_6598))->BgL_argsz00)=((obj_t)BgL_vz00_5215),BUNSPEC);} } 

}



/* &lambda2145 */
obj_t BGl_z62lambda2145z62zz__objectz00(obj_t BgL_envz00_5216, obj_t BgL_oz00_5217)
{
{ /* Llib/object.scm 251 */
{ /* Llib/object.scm 251 */
BgL_z62warningz62_bglt BgL_oz00_6599;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5217, BGl_z62warningz62zz__objectz00))
{ /* Llib/object.scm 251 */
BgL_oz00_6599 = 
((BgL_z62warningz62_bglt)BgL_oz00_5217); }  else 
{ 
obj_t BgL_auxz00_10394;
BgL_auxz00_10394 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)9065)), BGl_string4214z00zz__objectz00, BGl_string4205z00zz__objectz00, BgL_oz00_5217); 
FAILURE(BgL_auxz00_10394,BFALSE,BFALSE);} 
return 
(((BgL_z62warningz62_bglt)COBJECT(BgL_oz00_6599))->BgL_argsz00);} } 

}



/* &<@anonymous:2115> */
obj_t BGl_z62zc3z04anonymousza32115ze3ze5zz__objectz00(obj_t BgL_envz00_5218, obj_t BgL_new1197z00_5219)
{
{ /* Llib/object.scm 247 */
{ 
BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_auxz00_10399;
{ /* Llib/object.scm 247 */
BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_new1197z00_6600;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1197z00_5219, BGl_z62accesszd2controlzd2exceptionz62zz__objectz00))
{ /* Llib/object.scm 247 */
BgL_new1197z00_6600 = 
((BgL_z62accesszd2controlzd2exceptionz62_bglt)BgL_new1197z00_5219); }  else 
{ 
obj_t BgL_auxz00_10403;
BgL_auxz00_10403 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8888)), BGl_string4215z00zz__objectz00, BGl_string4196z00zz__objectz00, BgL_new1197z00_5219); 
FAILURE(BgL_auxz00_10403,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1197z00_6600)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1197z00_6600)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1197z00_6600)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62securityzd2exceptionzb0_bglt)COBJECT(
((BgL_z62securityzd2exceptionzb0_bglt)BgL_new1197z00_6600)))->BgL_messagez00)=((obj_t)BGl_string3972z00zz__objectz00),BUNSPEC); 
((((BgL_z62accesszd2controlzd2exceptionz62_bglt)COBJECT(BgL_new1197z00_6600))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62accesszd2controlzd2exceptionz62_bglt)COBJECT(BgL_new1197z00_6600))->BgL_permissionz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_10399 = BgL_new1197z00_6600; } 
return 
((obj_t)BgL_auxz00_10399);} } 

}



/* &lambda2112 */
BgL_z62accesszd2controlzd2exceptionz62_bglt BGl_z62lambda2112z62zz__objectz00(obj_t BgL_envz00_5220)
{
{ /* Llib/object.scm 247 */
{ /* Llib/object.scm 247 */
BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_new1196z00_6601;
BgL_new1196z00_6601 = 
((BgL_z62accesszd2controlzd2exceptionz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62accesszd2controlzd2exceptionz62_bgl) ))); 
{ /* Llib/object.scm 247 */
long BgL_arg2114z00_6602;
{ /* Llib/object.scm 247 */
long BgL_res2882z00_6603;
BgL_res2882z00_6603 = 
BGL_CLASS_INDEX(BGl_z62accesszd2controlzd2exceptionz62zz__objectz00); 
BgL_arg2114z00_6602 = BgL_res2882z00_6603; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1196z00_6601), BgL_arg2114z00_6602); } 
return BgL_new1196z00_6601;} } 

}



/* &lambda2110 */
BgL_z62accesszd2controlzd2exceptionz62_bglt BGl_z62lambda2110z62zz__objectz00(obj_t BgL_envz00_5221, obj_t BgL_fname1190z00_5222, obj_t BgL_location1191z00_5223, obj_t BgL_stack1192z00_5224, obj_t BgL_message1193z00_5225, obj_t BgL_obj1194z00_5226, obj_t BgL_permission1195z00_5227)
{
{ /* Llib/object.scm 247 */
{ /* Llib/object.scm 247 */
obj_t BgL_message1193z00_6604;
if(
STRINGP(BgL_message1193z00_5225))
{ /* Llib/object.scm 247 */
BgL_message1193z00_6604 = BgL_message1193z00_5225; }  else 
{ 
obj_t BgL_auxz00_10424;
BgL_auxz00_10424 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8888)), BGl_string4216z00zz__objectz00, BGl_string4178z00zz__objectz00, BgL_message1193z00_5225); 
FAILURE(BgL_auxz00_10424,BFALSE,BFALSE);} 
{ /* Llib/object.scm 247 */
BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_new1270z00_6605;
{ /* Llib/object.scm 247 */
BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_new1269z00_6606;
BgL_new1269z00_6606 = 
((BgL_z62accesszd2controlzd2exceptionz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62accesszd2controlzd2exceptionz62_bgl) ))); 
{ /* Llib/object.scm 247 */
long BgL_arg2111z00_6607;
{ /* Llib/object.scm 247 */
long BgL_res2881z00_6608;
BgL_res2881z00_6608 = 
BGL_CLASS_INDEX(BGl_z62accesszd2controlzd2exceptionz62zz__objectz00); 
BgL_arg2111z00_6607 = BgL_res2881z00_6608; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1269z00_6606), BgL_arg2111z00_6607); } 
BgL_new1270z00_6605 = BgL_new1269z00_6606; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1270z00_6605)))->BgL_fnamez00)=((obj_t)BgL_fname1190z00_5222),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1270z00_6605)))->BgL_locationz00)=((obj_t)BgL_location1191z00_5223),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1270z00_6605)))->BgL_stackz00)=((obj_t)BgL_stack1192z00_5224),BUNSPEC); 
((((BgL_z62securityzd2exceptionzb0_bglt)COBJECT(
((BgL_z62securityzd2exceptionzb0_bglt)BgL_new1270z00_6605)))->BgL_messagez00)=((obj_t)BgL_message1193z00_6604),BUNSPEC); 
((((BgL_z62accesszd2controlzd2exceptionz62_bglt)COBJECT(BgL_new1270z00_6605))->BgL_objz00)=((obj_t)BgL_obj1194z00_5226),BUNSPEC); 
((((BgL_z62accesszd2controlzd2exceptionz62_bglt)COBJECT(BgL_new1270z00_6605))->BgL_permissionz00)=((obj_t)BgL_permission1195z00_5227),BUNSPEC); 
return BgL_new1270z00_6605;} } } 

}



/* &<@anonymous:2130> */
obj_t BGl_z62zc3z04anonymousza32130ze3ze5zz__objectz00(obj_t BgL_envz00_5228)
{
{ /* Llib/object.scm 247 */
return BUNSPEC;} 

}



/* &lambda2129 */
obj_t BGl_z62lambda2129z62zz__objectz00(obj_t BgL_envz00_5229, obj_t BgL_oz00_5230, obj_t BgL_vz00_5231)
{
{ /* Llib/object.scm 247 */
{ /* Llib/object.scm 247 */
BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_oz00_6609;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5230, BGl_z62accesszd2controlzd2exceptionz62zz__objectz00))
{ /* Llib/object.scm 247 */
BgL_oz00_6609 = 
((BgL_z62accesszd2controlzd2exceptionz62_bglt)BgL_oz00_5230); }  else 
{ 
obj_t BgL_auxz00_10445;
BgL_auxz00_10445 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8888)), BGl_string4217z00zz__objectz00, BGl_string4196z00zz__objectz00, BgL_oz00_5230); 
FAILURE(BgL_auxz00_10445,BFALSE,BFALSE);} 
return 
((((BgL_z62accesszd2controlzd2exceptionz62_bglt)COBJECT(BgL_oz00_6609))->BgL_permissionz00)=((obj_t)BgL_vz00_5231),BUNSPEC);} } 

}



/* &lambda2128 */
obj_t BGl_z62lambda2128z62zz__objectz00(obj_t BgL_envz00_5232, obj_t BgL_oz00_5233)
{
{ /* Llib/object.scm 247 */
{ /* Llib/object.scm 247 */
BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_oz00_6610;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5233, BGl_z62accesszd2controlzd2exceptionz62zz__objectz00))
{ /* Llib/object.scm 247 */
BgL_oz00_6610 = 
((BgL_z62accesszd2controlzd2exceptionz62_bglt)BgL_oz00_5233); }  else 
{ 
obj_t BgL_auxz00_10453;
BgL_auxz00_10453 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8888)), BGl_string4218z00zz__objectz00, BGl_string4196z00zz__objectz00, BgL_oz00_5233); 
FAILURE(BgL_auxz00_10453,BFALSE,BFALSE);} 
return 
(((BgL_z62accesszd2controlzd2exceptionz62_bglt)COBJECT(BgL_oz00_6610))->BgL_permissionz00);} } 

}



/* &<@anonymous:2122> */
obj_t BGl_z62zc3z04anonymousza32122ze3ze5zz__objectz00(obj_t BgL_envz00_5234)
{
{ /* Llib/object.scm 247 */
return BUNSPEC;} 

}



/* &lambda2121 */
obj_t BGl_z62lambda2121z62zz__objectz00(obj_t BgL_envz00_5235, obj_t BgL_oz00_5236, obj_t BgL_vz00_5237)
{
{ /* Llib/object.scm 247 */
{ /* Llib/object.scm 247 */
BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_oz00_6611;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5236, BGl_z62accesszd2controlzd2exceptionz62zz__objectz00))
{ /* Llib/object.scm 247 */
BgL_oz00_6611 = 
((BgL_z62accesszd2controlzd2exceptionz62_bglt)BgL_oz00_5236); }  else 
{ 
obj_t BgL_auxz00_10461;
BgL_auxz00_10461 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8888)), BGl_string4219z00zz__objectz00, BGl_string4196z00zz__objectz00, BgL_oz00_5236); 
FAILURE(BgL_auxz00_10461,BFALSE,BFALSE);} 
return 
((((BgL_z62accesszd2controlzd2exceptionz62_bglt)COBJECT(BgL_oz00_6611))->BgL_objz00)=((obj_t)BgL_vz00_5237),BUNSPEC);} } 

}



/* &lambda2120 */
obj_t BGl_z62lambda2120z62zz__objectz00(obj_t BgL_envz00_5238, obj_t BgL_oz00_5239)
{
{ /* Llib/object.scm 247 */
{ /* Llib/object.scm 247 */
BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_oz00_6612;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5239, BGl_z62accesszd2controlzd2exceptionz62zz__objectz00))
{ /* Llib/object.scm 247 */
BgL_oz00_6612 = 
((BgL_z62accesszd2controlzd2exceptionz62_bglt)BgL_oz00_5239); }  else 
{ 
obj_t BgL_auxz00_10469;
BgL_auxz00_10469 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8888)), BGl_string4220z00zz__objectz00, BGl_string4196z00zz__objectz00, BgL_oz00_5239); 
FAILURE(BgL_auxz00_10469,BFALSE,BFALSE);} 
return 
(((BgL_z62accesszd2controlzd2exceptionz62_bglt)COBJECT(BgL_oz00_6612))->BgL_objz00);} } 

}



/* &<@anonymous:2096> */
obj_t BGl_z62zc3z04anonymousza32096ze3ze5zz__objectz00(obj_t BgL_envz00_5240, obj_t BgL_new1188z00_5241)
{
{ /* Llib/object.scm 245 */
{ 
BgL_z62securityzd2exceptionzb0_bglt BgL_auxz00_10474;
{ /* Llib/object.scm 245 */
BgL_z62securityzd2exceptionzb0_bglt BgL_new1188z00_6613;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1188z00_5241, BGl_z62securityzd2exceptionzb0zz__objectz00))
{ /* Llib/object.scm 245 */
BgL_new1188z00_6613 = 
((BgL_z62securityzd2exceptionzb0_bglt)BgL_new1188z00_5241); }  else 
{ 
obj_t BgL_auxz00_10478;
BgL_auxz00_10478 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8793)), BGl_string4221z00zz__objectz00, BGl_string4183z00zz__objectz00, BgL_new1188z00_5241); 
FAILURE(BgL_auxz00_10478,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1188z00_6613)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1188z00_6613)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1188z00_6613)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62securityzd2exceptionzb0_bglt)COBJECT(BgL_new1188z00_6613))->BgL_messagez00)=((obj_t)BGl_string3972z00zz__objectz00),BUNSPEC); 
BgL_auxz00_10474 = BgL_new1188z00_6613; } 
return 
((obj_t)BgL_auxz00_10474);} } 

}



/* &lambda2094 */
BgL_z62securityzd2exceptionzb0_bglt BGl_z62lambda2094z62zz__objectz00(obj_t BgL_envz00_5242)
{
{ /* Llib/object.scm 245 */
{ /* Llib/object.scm 245 */
BgL_z62securityzd2exceptionzb0_bglt BgL_new1187z00_6614;
BgL_new1187z00_6614 = 
((BgL_z62securityzd2exceptionzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62securityzd2exceptionzb0_bgl) ))); 
{ /* Llib/object.scm 245 */
long BgL_arg2095z00_6615;
{ /* Llib/object.scm 245 */
long BgL_res2878z00_6616;
BgL_res2878z00_6616 = 
BGL_CLASS_INDEX(BGl_z62securityzd2exceptionzb0zz__objectz00); 
BgL_arg2095z00_6615 = BgL_res2878z00_6616; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1187z00_6614), BgL_arg2095z00_6615); } 
return BgL_new1187z00_6614;} } 

}



/* &lambda2092 */
BgL_z62securityzd2exceptionzb0_bglt BGl_z62lambda2092z62zz__objectz00(obj_t BgL_envz00_5243, obj_t BgL_fname1183z00_5244, obj_t BgL_location1184z00_5245, obj_t BgL_stack1185z00_5246, obj_t BgL_message1186z00_5247)
{
{ /* Llib/object.scm 245 */
{ /* Llib/object.scm 245 */
obj_t BgL_message1186z00_6617;
if(
STRINGP(BgL_message1186z00_5247))
{ /* Llib/object.scm 245 */
BgL_message1186z00_6617 = BgL_message1186z00_5247; }  else 
{ 
obj_t BgL_auxz00_10496;
BgL_auxz00_10496 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8793)), BGl_string4222z00zz__objectz00, BGl_string4178z00zz__objectz00, BgL_message1186z00_5247); 
FAILURE(BgL_auxz00_10496,BFALSE,BFALSE);} 
{ /* Llib/object.scm 245 */
BgL_z62securityzd2exceptionzb0_bglt BgL_new1268z00_6618;
{ /* Llib/object.scm 245 */
BgL_z62securityzd2exceptionzb0_bglt BgL_new1267z00_6619;
BgL_new1267z00_6619 = 
((BgL_z62securityzd2exceptionzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62securityzd2exceptionzb0_bgl) ))); 
{ /* Llib/object.scm 245 */
long BgL_arg2093z00_6620;
{ /* Llib/object.scm 245 */
long BgL_res2877z00_6621;
BgL_res2877z00_6621 = 
BGL_CLASS_INDEX(BGl_z62securityzd2exceptionzb0zz__objectz00); 
BgL_arg2093z00_6620 = BgL_res2877z00_6621; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1267z00_6619), BgL_arg2093z00_6620); } 
BgL_new1268z00_6618 = BgL_new1267z00_6619; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1268z00_6618)))->BgL_fnamez00)=((obj_t)BgL_fname1183z00_5244),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1268z00_6618)))->BgL_locationz00)=((obj_t)BgL_location1184z00_5245),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1268z00_6618)))->BgL_stackz00)=((obj_t)BgL_stack1185z00_5246),BUNSPEC); 
((((BgL_z62securityzd2exceptionzb0_bglt)COBJECT(BgL_new1268z00_6618))->BgL_messagez00)=((obj_t)BgL_message1186z00_6617),BUNSPEC); 
return BgL_new1268z00_6618;} } } 

}



/* &<@anonymous:2104> */
obj_t BGl_z62zc3z04anonymousza32104ze3ze5zz__objectz00(obj_t BgL_envz00_5248)
{
{ /* Llib/object.scm 245 */
return BGl_string3972z00zz__objectz00;} 

}



/* &lambda2103 */
obj_t BGl_z62lambda2103z62zz__objectz00(obj_t BgL_envz00_5249, obj_t BgL_oz00_5250, obj_t BgL_vz00_5251)
{
{ /* Llib/object.scm 245 */
{ /* Llib/object.scm 245 */
BgL_z62securityzd2exceptionzb0_bglt BgL_oz00_6622;obj_t BgL_vz00_6623;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5250, BGl_z62securityzd2exceptionzb0zz__objectz00))
{ /* Llib/object.scm 245 */
BgL_oz00_6622 = 
((BgL_z62securityzd2exceptionzb0_bglt)BgL_oz00_5250); }  else 
{ 
obj_t BgL_auxz00_10514;
BgL_auxz00_10514 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8793)), BGl_string4223z00zz__objectz00, BGl_string4183z00zz__objectz00, BgL_oz00_5250); 
FAILURE(BgL_auxz00_10514,BFALSE,BFALSE);} 
if(
STRINGP(BgL_vz00_5251))
{ /* Llib/object.scm 245 */
BgL_vz00_6623 = BgL_vz00_5251; }  else 
{ 
obj_t BgL_auxz00_10520;
BgL_auxz00_10520 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8793)), BGl_string4223z00zz__objectz00, BGl_string4178z00zz__objectz00, BgL_vz00_5251); 
FAILURE(BgL_auxz00_10520,BFALSE,BFALSE);} 
return 
((((BgL_z62securityzd2exceptionzb0_bglt)COBJECT(BgL_oz00_6622))->BgL_messagez00)=((obj_t)BgL_vz00_6623),BUNSPEC);} } 

}



/* &lambda2102 */
obj_t BGl_z62lambda2102z62zz__objectz00(obj_t BgL_envz00_5252, obj_t BgL_oz00_5253)
{
{ /* Llib/object.scm 245 */
{ /* Llib/object.scm 245 */
BgL_z62securityzd2exceptionzb0_bglt BgL_oz00_6624;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5253, BGl_z62securityzd2exceptionzb0zz__objectz00))
{ /* Llib/object.scm 245 */
BgL_oz00_6624 = 
((BgL_z62securityzd2exceptionzb0_bglt)BgL_oz00_5253); }  else 
{ 
obj_t BgL_auxz00_10528;
BgL_auxz00_10528 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8793)), BGl_string4224z00zz__objectz00, BGl_string4183z00zz__objectz00, BgL_oz00_5253); 
FAILURE(BgL_auxz00_10528,BFALSE,BFALSE);} 
return 
(((BgL_z62securityzd2exceptionzb0_bglt)COBJECT(BgL_oz00_6624))->BgL_messagez00);} } 

}



/* &<@anonymous:2086> */
obj_t BGl_z62zc3z04anonymousza32086ze3ze5zz__objectz00(obj_t BgL_envz00_5254, obj_t BgL_new1181z00_5255)
{
{ /* Llib/object.scm 243 */
{ 
BgL_z62stackzd2overflowzd2errorz62_bglt BgL_auxz00_10533;
{ /* Llib/object.scm 243 */
BgL_z62stackzd2overflowzd2errorz62_bglt BgL_new1181z00_6625;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1181z00_5255, BGl_z62stackzd2overflowzd2errorz62zz__objectz00))
{ /* Llib/object.scm 243 */
BgL_new1181z00_6625 = 
((BgL_z62stackzd2overflowzd2errorz62_bglt)BgL_new1181z00_5255); }  else 
{ 
obj_t BgL_auxz00_10537;
BgL_auxz00_10537 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8744)), BGl_string4225z00zz__objectz00, BGl_string4171z00zz__objectz00, BgL_new1181z00_5255); 
FAILURE(BgL_auxz00_10537,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1181z00_6625)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1181z00_6625)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1181z00_6625)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1181z00_6625)))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1181z00_6625)))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1181z00_6625)))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_10533 = BgL_new1181z00_6625; } 
return 
((obj_t)BgL_auxz00_10533);} } 

}



/* &lambda2084 */
BgL_z62stackzd2overflowzd2errorz62_bglt BGl_z62lambda2084z62zz__objectz00(obj_t BgL_envz00_5256)
{
{ /* Llib/object.scm 243 */
{ /* Llib/object.scm 243 */
BgL_z62stackzd2overflowzd2errorz62_bglt BgL_new1180z00_6626;
BgL_new1180z00_6626 = 
((BgL_z62stackzd2overflowzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62stackzd2overflowzd2errorz62_bgl) ))); 
{ /* Llib/object.scm 243 */
long BgL_arg2085z00_6627;
{ /* Llib/object.scm 243 */
long BgL_res2875z00_6628;
BgL_res2875z00_6628 = 
BGL_CLASS_INDEX(BGl_z62stackzd2overflowzd2errorz62zz__objectz00); 
BgL_arg2085z00_6627 = BgL_res2875z00_6628; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1180z00_6626), BgL_arg2085z00_6627); } 
return BgL_new1180z00_6626;} } 

}



/* &lambda2082 */
BgL_z62stackzd2overflowzd2errorz62_bglt BGl_z62lambda2082z62zz__objectz00(obj_t BgL_envz00_5257, obj_t BgL_fname1173z00_5258, obj_t BgL_location1174z00_5259, obj_t BgL_stack1175z00_5260, obj_t BgL_proc1176z00_5261, obj_t BgL_msg1177z00_5262, obj_t BgL_obj1178z00_5263)
{
{ /* Llib/object.scm 243 */
{ /* Llib/object.scm 243 */
BgL_z62stackzd2overflowzd2errorz62_bglt BgL_new1266z00_6629;
{ /* Llib/object.scm 243 */
BgL_z62stackzd2overflowzd2errorz62_bglt BgL_new1265z00_6630;
BgL_new1265z00_6630 = 
((BgL_z62stackzd2overflowzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62stackzd2overflowzd2errorz62_bgl) ))); 
{ /* Llib/object.scm 243 */
long BgL_arg2083z00_6631;
{ /* Llib/object.scm 243 */
long BgL_res2874z00_6632;
BgL_res2874z00_6632 = 
BGL_CLASS_INDEX(BGl_z62stackzd2overflowzd2errorz62zz__objectz00); 
BgL_arg2083z00_6631 = BgL_res2874z00_6632; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1265z00_6630), BgL_arg2083z00_6631); } 
BgL_new1266z00_6629 = BgL_new1265z00_6630; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1266z00_6629)))->BgL_fnamez00)=((obj_t)BgL_fname1173z00_5258),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1266z00_6629)))->BgL_locationz00)=((obj_t)BgL_location1174z00_5259),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1266z00_6629)))->BgL_stackz00)=((obj_t)BgL_stack1175z00_5260),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1266z00_6629)))->BgL_procz00)=((obj_t)BgL_proc1176z00_5261),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1266z00_6629)))->BgL_msgz00)=((obj_t)BgL_msg1177z00_5262),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1266z00_6629)))->BgL_objz00)=((obj_t)BgL_obj1178z00_5263),BUNSPEC); 
return BgL_new1266z00_6629;} } 

}



/* &<@anonymous:2076> */
obj_t BGl_z62zc3z04anonymousza32076ze3ze5zz__objectz00(obj_t BgL_envz00_5264, obj_t BgL_new1171z00_5265)
{
{ /* Llib/object.scm 241 */
{ 
BgL_z62processzd2exceptionzb0_bglt BgL_auxz00_10574;
{ /* Llib/object.scm 241 */
BgL_z62processzd2exceptionzb0_bglt BgL_new1171z00_6633;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1171z00_5265, BGl_z62processzd2exceptionzb0zz__objectz00))
{ /* Llib/object.scm 241 */
BgL_new1171z00_6633 = 
((BgL_z62processzd2exceptionzb0_bglt)BgL_new1171z00_5265); }  else 
{ 
obj_t BgL_auxz00_10578;
BgL_auxz00_10578 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8698)), BGl_string4226z00zz__objectz00, BGl_string4166z00zz__objectz00, BgL_new1171z00_5265); 
FAILURE(BgL_auxz00_10578,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1171z00_6633)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1171z00_6633)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1171z00_6633)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1171z00_6633)))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1171z00_6633)))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1171z00_6633)))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_10574 = BgL_new1171z00_6633; } 
return 
((obj_t)BgL_auxz00_10574);} } 

}



/* &lambda2072 */
BgL_z62processzd2exceptionzb0_bglt BGl_z62lambda2072z62zz__objectz00(obj_t BgL_envz00_5266)
{
{ /* Llib/object.scm 241 */
{ /* Llib/object.scm 241 */
BgL_z62processzd2exceptionzb0_bglt BgL_new1170z00_6634;
BgL_new1170z00_6634 = 
((BgL_z62processzd2exceptionzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62processzd2exceptionzb0_bgl) ))); 
{ /* Llib/object.scm 241 */
long BgL_arg2075z00_6635;
{ /* Llib/object.scm 241 */
long BgL_res2873z00_6636;
BgL_res2873z00_6636 = 
BGL_CLASS_INDEX(BGl_z62processzd2exceptionzb0zz__objectz00); 
BgL_arg2075z00_6635 = BgL_res2873z00_6636; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1170z00_6634), BgL_arg2075z00_6635); } 
return BgL_new1170z00_6634;} } 

}



/* &lambda2070 */
BgL_z62processzd2exceptionzb0_bglt BGl_z62lambda2070z62zz__objectz00(obj_t BgL_envz00_5267, obj_t BgL_fname1164z00_5268, obj_t BgL_location1165z00_5269, obj_t BgL_stack1166z00_5270, obj_t BgL_proc1167z00_5271, obj_t BgL_msg1168z00_5272, obj_t BgL_obj1169z00_5273)
{
{ /* Llib/object.scm 241 */
{ /* Llib/object.scm 241 */
BgL_z62processzd2exceptionzb0_bglt BgL_new1264z00_6637;
{ /* Llib/object.scm 241 */
BgL_z62processzd2exceptionzb0_bglt BgL_new1263z00_6638;
BgL_new1263z00_6638 = 
((BgL_z62processzd2exceptionzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62processzd2exceptionzb0_bgl) ))); 
{ /* Llib/object.scm 241 */
long BgL_arg2071z00_6639;
{ /* Llib/object.scm 241 */
long BgL_res2872z00_6640;
BgL_res2872z00_6640 = 
BGL_CLASS_INDEX(BGl_z62processzd2exceptionzb0zz__objectz00); 
BgL_arg2071z00_6639 = BgL_res2872z00_6640; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1263z00_6638), BgL_arg2071z00_6639); } 
BgL_new1264z00_6637 = BgL_new1263z00_6638; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1264z00_6637)))->BgL_fnamez00)=((obj_t)BgL_fname1164z00_5268),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1264z00_6637)))->BgL_locationz00)=((obj_t)BgL_location1165z00_5269),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1264z00_6637)))->BgL_stackz00)=((obj_t)BgL_stack1166z00_5270),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1264z00_6637)))->BgL_procz00)=((obj_t)BgL_proc1167z00_5271),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1264z00_6637)))->BgL_msgz00)=((obj_t)BgL_msg1168z00_5272),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1264z00_6637)))->BgL_objz00)=((obj_t)BgL_obj1169z00_5273),BUNSPEC); 
return BgL_new1264z00_6637;} } 

}



/* &<@anonymous:2062> */
obj_t BGl_z62zc3z04anonymousza32062ze3ze5zz__objectz00(obj_t BgL_envz00_5274, obj_t BgL_new1162z00_5275)
{
{ /* Llib/object.scm 239 */
{ 
BgL_z62iozd2connectionzd2errorz62_bglt BgL_auxz00_10615;
{ /* Llib/object.scm 239 */
BgL_z62iozd2connectionzd2errorz62_bglt BgL_new1162z00_6641;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1162z00_5275, BGl_z62iozd2connectionzd2errorz62zz__objectz00))
{ /* Llib/object.scm 239 */
BgL_new1162z00_6641 = 
((BgL_z62iozd2connectionzd2errorz62_bglt)BgL_new1162z00_5275); }  else 
{ 
obj_t BgL_auxz00_10619;
BgL_auxz00_10619 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8647)), BGl_string4227z00zz__objectz00, BGl_string4161z00zz__objectz00, BgL_new1162z00_5275); 
FAILURE(BgL_auxz00_10619,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1162z00_6641)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1162z00_6641)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1162z00_6641)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1162z00_6641)))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1162z00_6641)))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1162z00_6641)))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_10615 = BgL_new1162z00_6641; } 
return 
((obj_t)BgL_auxz00_10615);} } 

}



/* &lambda2060 */
BgL_z62iozd2connectionzd2errorz62_bglt BGl_z62lambda2060z62zz__objectz00(obj_t BgL_envz00_5276)
{
{ /* Llib/object.scm 239 */
{ /* Llib/object.scm 239 */
BgL_z62iozd2connectionzd2errorz62_bglt BgL_new1161z00_6642;
BgL_new1161z00_6642 = 
((BgL_z62iozd2connectionzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2connectionzd2errorz62_bgl) ))); 
{ /* Llib/object.scm 239 */
long BgL_arg2061z00_6643;
{ /* Llib/object.scm 239 */
long BgL_res2871z00_6644;
BgL_res2871z00_6644 = 
BGL_CLASS_INDEX(BGl_z62iozd2connectionzd2errorz62zz__objectz00); 
BgL_arg2061z00_6643 = BgL_res2871z00_6644; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1161z00_6642), BgL_arg2061z00_6643); } 
return BgL_new1161z00_6642;} } 

}



/* &lambda2058 */
BgL_z62iozd2connectionzd2errorz62_bglt BGl_z62lambda2058z62zz__objectz00(obj_t BgL_envz00_5277, obj_t BgL_fname1155z00_5278, obj_t BgL_location1156z00_5279, obj_t BgL_stack1157z00_5280, obj_t BgL_proc1158z00_5281, obj_t BgL_msg1159z00_5282, obj_t BgL_obj1160z00_5283)
{
{ /* Llib/object.scm 239 */
{ /* Llib/object.scm 239 */
BgL_z62iozd2connectionzd2errorz62_bglt BgL_new1262z00_6645;
{ /* Llib/object.scm 239 */
BgL_z62iozd2connectionzd2errorz62_bglt BgL_new1261z00_6646;
BgL_new1261z00_6646 = 
((BgL_z62iozd2connectionzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2connectionzd2errorz62_bgl) ))); 
{ /* Llib/object.scm 239 */
long BgL_arg2059z00_6647;
{ /* Llib/object.scm 239 */
long BgL_res2870z00_6648;
BgL_res2870z00_6648 = 
BGL_CLASS_INDEX(BGl_z62iozd2connectionzd2errorz62zz__objectz00); 
BgL_arg2059z00_6647 = BgL_res2870z00_6648; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1261z00_6646), BgL_arg2059z00_6647); } 
BgL_new1262z00_6645 = BgL_new1261z00_6646; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1262z00_6645)))->BgL_fnamez00)=((obj_t)BgL_fname1155z00_5278),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1262z00_6645)))->BgL_locationz00)=((obj_t)BgL_location1156z00_5279),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1262z00_6645)))->BgL_stackz00)=((obj_t)BgL_stack1157z00_5280),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1262z00_6645)))->BgL_procz00)=((obj_t)BgL_proc1158z00_5281),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1262z00_6645)))->BgL_msgz00)=((obj_t)BgL_msg1159z00_5282),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1262z00_6645)))->BgL_objz00)=((obj_t)BgL_obj1160z00_5283),BUNSPEC); 
return BgL_new1262z00_6645;} } 

}



/* &<@anonymous:2050> */
obj_t BGl_z62zc3z04anonymousza32050ze3ze5zz__objectz00(obj_t BgL_envz00_5284, obj_t BgL_new1153z00_5285)
{
{ /* Llib/object.scm 238 */
{ 
BgL_z62iozd2timeoutzd2errorz62_bglt BgL_auxz00_10656;
{ /* Llib/object.scm 238 */
BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new1153z00_6649;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1153z00_5285, BGl_z62iozd2timeoutzd2errorz62zz__objectz00))
{ /* Llib/object.scm 238 */
BgL_new1153z00_6649 = 
((BgL_z62iozd2timeoutzd2errorz62_bglt)BgL_new1153z00_5285); }  else 
{ 
obj_t BgL_auxz00_10660;
BgL_auxz00_10660 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8605)), BGl_string4228z00zz__objectz00, BGl_string4156z00zz__objectz00, BgL_new1153z00_5285); 
FAILURE(BgL_auxz00_10660,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1153z00_6649)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1153z00_6649)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1153z00_6649)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1153z00_6649)))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1153z00_6649)))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1153z00_6649)))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_10656 = BgL_new1153z00_6649; } 
return 
((obj_t)BgL_auxz00_10656);} } 

}



/* &lambda2048 */
BgL_z62iozd2timeoutzd2errorz62_bglt BGl_z62lambda2048z62zz__objectz00(obj_t BgL_envz00_5286)
{
{ /* Llib/object.scm 238 */
{ /* Llib/object.scm 238 */
BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new1152z00_6650;
BgL_new1152z00_6650 = 
((BgL_z62iozd2timeoutzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2timeoutzd2errorz62_bgl) ))); 
{ /* Llib/object.scm 238 */
long BgL_arg2049z00_6651;
{ /* Llib/object.scm 238 */
long BgL_res2869z00_6652;
BgL_res2869z00_6652 = 
BGL_CLASS_INDEX(BGl_z62iozd2timeoutzd2errorz62zz__objectz00); 
BgL_arg2049z00_6651 = BgL_res2869z00_6652; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1152z00_6650), BgL_arg2049z00_6651); } 
return BgL_new1152z00_6650;} } 

}



/* &lambda2046 */
BgL_z62iozd2timeoutzd2errorz62_bglt BGl_z62lambda2046z62zz__objectz00(obj_t BgL_envz00_5287, obj_t BgL_fname1146z00_5288, obj_t BgL_location1147z00_5289, obj_t BgL_stack1148z00_5290, obj_t BgL_proc1149z00_5291, obj_t BgL_msg1150z00_5292, obj_t BgL_obj1151z00_5293)
{
{ /* Llib/object.scm 238 */
{ /* Llib/object.scm 238 */
BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new1260z00_6653;
{ /* Llib/object.scm 238 */
BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new1259z00_6654;
BgL_new1259z00_6654 = 
((BgL_z62iozd2timeoutzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2timeoutzd2errorz62_bgl) ))); 
{ /* Llib/object.scm 238 */
long BgL_arg2047z00_6655;
{ /* Llib/object.scm 238 */
long BgL_res2868z00_6656;
BgL_res2868z00_6656 = 
BGL_CLASS_INDEX(BGl_z62iozd2timeoutzd2errorz62zz__objectz00); 
BgL_arg2047z00_6655 = BgL_res2868z00_6656; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1259z00_6654), BgL_arg2047z00_6655); } 
BgL_new1260z00_6653 = BgL_new1259z00_6654; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1260z00_6653)))->BgL_fnamez00)=((obj_t)BgL_fname1146z00_5288),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1260z00_6653)))->BgL_locationz00)=((obj_t)BgL_location1147z00_5289),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1260z00_6653)))->BgL_stackz00)=((obj_t)BgL_stack1148z00_5290),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1260z00_6653)))->BgL_procz00)=((obj_t)BgL_proc1149z00_5291),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1260z00_6653)))->BgL_msgz00)=((obj_t)BgL_msg1150z00_5292),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1260z00_6653)))->BgL_objz00)=((obj_t)BgL_obj1151z00_5293),BUNSPEC); 
return BgL_new1260z00_6653;} } 

}



/* &<@anonymous:2039> */
obj_t BGl_z62zc3z04anonymousza32039ze3ze5zz__objectz00(obj_t BgL_envz00_5294, obj_t BgL_new1144z00_5295)
{
{ /* Llib/object.scm 237 */
{ 
BgL_z62iozd2sigpipezd2errorz62_bglt BgL_auxz00_10697;
{ /* Llib/object.scm 237 */
BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1144z00_6657;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1144z00_5295, BGl_z62iozd2sigpipezd2errorz62zz__objectz00))
{ /* Llib/object.scm 237 */
BgL_new1144z00_6657 = 
((BgL_z62iozd2sigpipezd2errorz62_bglt)BgL_new1144z00_5295); }  else 
{ 
obj_t BgL_auxz00_10701;
BgL_auxz00_10701 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8563)), BGl_string4229z00zz__objectz00, BGl_string4151z00zz__objectz00, BgL_new1144z00_5295); 
FAILURE(BgL_auxz00_10701,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1144z00_6657)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1144z00_6657)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1144z00_6657)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1144z00_6657)))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1144z00_6657)))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1144z00_6657)))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_10697 = BgL_new1144z00_6657; } 
return 
((obj_t)BgL_auxz00_10697);} } 

}



/* &lambda2037 */
BgL_z62iozd2sigpipezd2errorz62_bglt BGl_z62lambda2037z62zz__objectz00(obj_t BgL_envz00_5296)
{
{ /* Llib/object.scm 237 */
{ /* Llib/object.scm 237 */
BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1143z00_6658;
BgL_new1143z00_6658 = 
((BgL_z62iozd2sigpipezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2sigpipezd2errorz62_bgl) ))); 
{ /* Llib/object.scm 237 */
long BgL_arg2038z00_6659;
{ /* Llib/object.scm 237 */
long BgL_res2867z00_6660;
BgL_res2867z00_6660 = 
BGL_CLASS_INDEX(BGl_z62iozd2sigpipezd2errorz62zz__objectz00); 
BgL_arg2038z00_6659 = BgL_res2867z00_6660; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1143z00_6658), BgL_arg2038z00_6659); } 
return BgL_new1143z00_6658;} } 

}



/* &lambda2035 */
BgL_z62iozd2sigpipezd2errorz62_bglt BGl_z62lambda2035z62zz__objectz00(obj_t BgL_envz00_5297, obj_t BgL_fname1137z00_5298, obj_t BgL_location1138z00_5299, obj_t BgL_stack1139z00_5300, obj_t BgL_proc1140z00_5301, obj_t BgL_msg1141z00_5302, obj_t BgL_obj1142z00_5303)
{
{ /* Llib/object.scm 237 */
{ /* Llib/object.scm 237 */
BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1258z00_6661;
{ /* Llib/object.scm 237 */
BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1257z00_6662;
BgL_new1257z00_6662 = 
((BgL_z62iozd2sigpipezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2sigpipezd2errorz62_bgl) ))); 
{ /* Llib/object.scm 237 */
long BgL_arg2036z00_6663;
{ /* Llib/object.scm 237 */
long BgL_res2866z00_6664;
BgL_res2866z00_6664 = 
BGL_CLASS_INDEX(BGl_z62iozd2sigpipezd2errorz62zz__objectz00); 
BgL_arg2036z00_6663 = BgL_res2866z00_6664; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1257z00_6662), BgL_arg2036z00_6663); } 
BgL_new1258z00_6661 = BgL_new1257z00_6662; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1258z00_6661)))->BgL_fnamez00)=((obj_t)BgL_fname1137z00_5298),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1258z00_6661)))->BgL_locationz00)=((obj_t)BgL_location1138z00_5299),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1258z00_6661)))->BgL_stackz00)=((obj_t)BgL_stack1139z00_5300),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1258z00_6661)))->BgL_procz00)=((obj_t)BgL_proc1140z00_5301),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1258z00_6661)))->BgL_msgz00)=((obj_t)BgL_msg1141z00_5302),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1258z00_6661)))->BgL_objz00)=((obj_t)BgL_obj1142z00_5303),BUNSPEC); 
return BgL_new1258z00_6661;} } 

}



/* &<@anonymous:2027> */
obj_t BGl_z62zc3z04anonymousza32027ze3ze5zz__objectz00(obj_t BgL_envz00_5304, obj_t BgL_new1135z00_5305)
{
{ /* Llib/object.scm 236 */
{ 
BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_auxz00_10738;
{ /* Llib/object.scm 236 */
BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1135z00_6665;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1135z00_5305, BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00))
{ /* Llib/object.scm 236 */
BgL_new1135z00_6665 = 
((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)BgL_new1135z00_5305); }  else 
{ 
obj_t BgL_auxz00_10742;
BgL_auxz00_10742 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8515)), BGl_string4230z00zz__objectz00, BGl_string4146z00zz__objectz00, BgL_new1135z00_5305); 
FAILURE(BgL_auxz00_10742,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1135z00_6665)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1135z00_6665)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1135z00_6665)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1135z00_6665)))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1135z00_6665)))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1135z00_6665)))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_10738 = BgL_new1135z00_6665; } 
return 
((obj_t)BgL_auxz00_10738);} } 

}



/* &lambda2024 */
BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BGl_z62lambda2024z62zz__objectz00(obj_t BgL_envz00_5306)
{
{ /* Llib/object.scm 236 */
{ /* Llib/object.scm 236 */
BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1134z00_6666;
BgL_new1134z00_6666 = 
((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2malformedzd2urlzd2errorzb0_bgl) ))); 
{ /* Llib/object.scm 236 */
long BgL_arg2026z00_6667;
{ /* Llib/object.scm 236 */
long BgL_res2865z00_6668;
BgL_res2865z00_6668 = 
BGL_CLASS_INDEX(BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00); 
BgL_arg2026z00_6667 = BgL_res2865z00_6668; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1134z00_6666), BgL_arg2026z00_6667); } 
return BgL_new1134z00_6666;} } 

}



/* &lambda2022 */
BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BGl_z62lambda2022z62zz__objectz00(obj_t BgL_envz00_5307, obj_t BgL_fname1128z00_5308, obj_t BgL_location1129z00_5309, obj_t BgL_stack1130z00_5310, obj_t BgL_proc1131z00_5311, obj_t BgL_msg1132z00_5312, obj_t BgL_obj1133z00_5313)
{
{ /* Llib/object.scm 236 */
{ /* Llib/object.scm 236 */
BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1256z00_6669;
{ /* Llib/object.scm 236 */
BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1255z00_6670;
BgL_new1255z00_6670 = 
((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2malformedzd2urlzd2errorzb0_bgl) ))); 
{ /* Llib/object.scm 236 */
long BgL_arg2023z00_6671;
{ /* Llib/object.scm 236 */
long BgL_res2864z00_6672;
BgL_res2864z00_6672 = 
BGL_CLASS_INDEX(BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00); 
BgL_arg2023z00_6671 = BgL_res2864z00_6672; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1255z00_6670), BgL_arg2023z00_6671); } 
BgL_new1256z00_6669 = BgL_new1255z00_6670; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1256z00_6669)))->BgL_fnamez00)=((obj_t)BgL_fname1128z00_5308),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1256z00_6669)))->BgL_locationz00)=((obj_t)BgL_location1129z00_5309),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1256z00_6669)))->BgL_stackz00)=((obj_t)BgL_stack1130z00_5310),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1256z00_6669)))->BgL_procz00)=((obj_t)BgL_proc1131z00_5311),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1256z00_6669)))->BgL_msgz00)=((obj_t)BgL_msg1132z00_5312),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1256z00_6669)))->BgL_objz00)=((obj_t)BgL_obj1133z00_5313),BUNSPEC); 
return BgL_new1256z00_6669;} } 

}



/* &<@anonymous:2015> */
obj_t BGl_z62zc3z04anonymousza32015ze3ze5zz__objectz00(obj_t BgL_envz00_5314, obj_t BgL_new1126z00_5315)
{
{ /* Llib/object.scm 235 */
{ 
BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_auxz00_10779;
{ /* Llib/object.scm 235 */
BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1126z00_6673;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1126z00_5315, BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00))
{ /* Llib/object.scm 235 */
BgL_new1126z00_6673 = 
((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)BgL_new1126z00_5315); }  else 
{ 
obj_t BgL_auxz00_10783;
BgL_auxz00_10783 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8468)), BGl_string4231z00zz__objectz00, BGl_string4141z00zz__objectz00, BgL_new1126z00_5315); 
FAILURE(BgL_auxz00_10783,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1126z00_6673)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1126z00_6673)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1126z00_6673)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1126z00_6673)))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1126z00_6673)))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1126z00_6673)))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_10779 = BgL_new1126z00_6673; } 
return 
((obj_t)BgL_auxz00_10779);} } 

}



/* &lambda2013 */
BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BGl_z62lambda2013z62zz__objectz00(obj_t BgL_envz00_5316)
{
{ /* Llib/object.scm 235 */
{ /* Llib/object.scm 235 */
BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1125z00_6674;
BgL_new1125z00_6674 = 
((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2unknownzd2hostzd2errorzb0_bgl) ))); 
{ /* Llib/object.scm 235 */
long BgL_arg2014z00_6675;
{ /* Llib/object.scm 235 */
long BgL_res2863z00_6676;
BgL_res2863z00_6676 = 
BGL_CLASS_INDEX(BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00); 
BgL_arg2014z00_6675 = BgL_res2863z00_6676; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1125z00_6674), BgL_arg2014z00_6675); } 
return BgL_new1125z00_6674;} } 

}



/* &lambda2011 */
BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BGl_z62lambda2011z62zz__objectz00(obj_t BgL_envz00_5317, obj_t BgL_fname1119z00_5318, obj_t BgL_location1120z00_5319, obj_t BgL_stack1121z00_5320, obj_t BgL_proc1122z00_5321, obj_t BgL_msg1123z00_5322, obj_t BgL_obj1124z00_5323)
{
{ /* Llib/object.scm 235 */
{ /* Llib/object.scm 235 */
BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1254z00_6677;
{ /* Llib/object.scm 235 */
BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1253z00_6678;
BgL_new1253z00_6678 = 
((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2unknownzd2hostzd2errorzb0_bgl) ))); 
{ /* Llib/object.scm 235 */
long BgL_arg2012z00_6679;
{ /* Llib/object.scm 235 */
long BgL_res2862z00_6680;
BgL_res2862z00_6680 = 
BGL_CLASS_INDEX(BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00); 
BgL_arg2012z00_6679 = BgL_res2862z00_6680; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1253z00_6678), BgL_arg2012z00_6679); } 
BgL_new1254z00_6677 = BgL_new1253z00_6678; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1254z00_6677)))->BgL_fnamez00)=((obj_t)BgL_fname1119z00_5318),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1254z00_6677)))->BgL_locationz00)=((obj_t)BgL_location1120z00_5319),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1254z00_6677)))->BgL_stackz00)=((obj_t)BgL_stack1121z00_5320),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1254z00_6677)))->BgL_procz00)=((obj_t)BgL_proc1122z00_5321),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1254z00_6677)))->BgL_msgz00)=((obj_t)BgL_msg1123z00_5322),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1254z00_6677)))->BgL_objz00)=((obj_t)BgL_obj1124z00_5323),BUNSPEC); 
return BgL_new1254z00_6677;} } 

}



/* &<@anonymous:2003> */
obj_t BGl_z62zc3z04anonymousza32003ze3ze5zz__objectz00(obj_t BgL_envz00_5324, obj_t BgL_new1117z00_5325)
{
{ /* Llib/object.scm 234 */
{ 
BgL_z62iozd2parsezd2errorz62_bglt BgL_auxz00_10820;
{ /* Llib/object.scm 234 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1117z00_6681;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1117z00_5325, BGl_z62iozd2parsezd2errorz62zz__objectz00))
{ /* Llib/object.scm 234 */
BgL_new1117z00_6681 = 
((BgL_z62iozd2parsezd2errorz62_bglt)BgL_new1117z00_5325); }  else 
{ 
obj_t BgL_auxz00_10824;
BgL_auxz00_10824 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8428)), BGl_string4232z00zz__objectz00, BGl_string4136z00zz__objectz00, BgL_new1117z00_5325); 
FAILURE(BgL_auxz00_10824,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1117z00_6681)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1117z00_6681)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1117z00_6681)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1117z00_6681)))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1117z00_6681)))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1117z00_6681)))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_10820 = BgL_new1117z00_6681; } 
return 
((obj_t)BgL_auxz00_10820);} } 

}



/* &lambda2001 */
BgL_z62iozd2parsezd2errorz62_bglt BGl_z62lambda2001z62zz__objectz00(obj_t BgL_envz00_5326)
{
{ /* Llib/object.scm 234 */
{ /* Llib/object.scm 234 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1116z00_6682;
BgL_new1116z00_6682 = 
((BgL_z62iozd2parsezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2parsezd2errorz62_bgl) ))); 
{ /* Llib/object.scm 234 */
long BgL_arg2002z00_6683;
{ /* Llib/object.scm 234 */
long BgL_res2861z00_6684;
BgL_res2861z00_6684 = 
BGL_CLASS_INDEX(BGl_z62iozd2parsezd2errorz62zz__objectz00); 
BgL_arg2002z00_6683 = BgL_res2861z00_6684; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1116z00_6682), BgL_arg2002z00_6683); } 
return BgL_new1116z00_6682;} } 

}



/* &lambda1999 */
BgL_z62iozd2parsezd2errorz62_bglt BGl_z62lambda1999z62zz__objectz00(obj_t BgL_envz00_5327, obj_t BgL_fname1109z00_5328, obj_t BgL_location1110z00_5329, obj_t BgL_stack1111z00_5330, obj_t BgL_proc1112z00_5331, obj_t BgL_msg1113z00_5332, obj_t BgL_obj1114z00_5333)
{
{ /* Llib/object.scm 234 */
{ /* Llib/object.scm 234 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1252z00_6685;
{ /* Llib/object.scm 234 */
BgL_z62iozd2parsezd2errorz62_bglt BgL_new1251z00_6686;
BgL_new1251z00_6686 = 
((BgL_z62iozd2parsezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2parsezd2errorz62_bgl) ))); 
{ /* Llib/object.scm 234 */
long BgL_arg2000z00_6687;
{ /* Llib/object.scm 234 */
long BgL_res2860z00_6688;
BgL_res2860z00_6688 = 
BGL_CLASS_INDEX(BGl_z62iozd2parsezd2errorz62zz__objectz00); 
BgL_arg2000z00_6687 = BgL_res2860z00_6688; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1251z00_6686), BgL_arg2000z00_6687); } 
BgL_new1252z00_6685 = BgL_new1251z00_6686; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1252z00_6685)))->BgL_fnamez00)=((obj_t)BgL_fname1109z00_5328),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1252z00_6685)))->BgL_locationz00)=((obj_t)BgL_location1110z00_5329),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1252z00_6685)))->BgL_stackz00)=((obj_t)BgL_stack1111z00_5330),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1252z00_6685)))->BgL_procz00)=((obj_t)BgL_proc1112z00_5331),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1252z00_6685)))->BgL_msgz00)=((obj_t)BgL_msg1113z00_5332),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1252z00_6685)))->BgL_objz00)=((obj_t)BgL_obj1114z00_5333),BUNSPEC); 
return BgL_new1252z00_6685;} } 

}



/* &<@anonymous:1992> */
obj_t BGl_z62zc3z04anonymousza31992ze3ze5zz__objectz00(obj_t BgL_envz00_5334, obj_t BgL_new1107z00_5335)
{
{ /* Llib/object.scm 233 */
{ 
BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_auxz00_10861;
{ /* Llib/object.scm 233 */
BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_new1107z00_6689;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1107z00_5335, BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00))
{ /* Llib/object.scm 233 */
BgL_new1107z00_6689 = 
((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)BgL_new1107z00_5335); }  else 
{ 
obj_t BgL_auxz00_10865;
BgL_auxz00_10865 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8379)), BGl_string4233z00zz__objectz00, BGl_string4131z00zz__objectz00, BgL_new1107z00_5335); 
FAILURE(BgL_auxz00_10865,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1107z00_6689)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1107z00_6689)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1107z00_6689)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1107z00_6689)))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1107z00_6689)))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1107z00_6689)))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_10861 = BgL_new1107z00_6689; } 
return 
((obj_t)BgL_auxz00_10861);} } 

}



/* &lambda1990 */
BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BGl_z62lambda1990z62zz__objectz00(obj_t BgL_envz00_5336)
{
{ /* Llib/object.scm 233 */
{ /* Llib/object.scm 233 */
BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_new1106z00_6690;
BgL_new1106z00_6690 = 
((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2filezd2notzd2foundzd2errorz62_bgl) ))); 
{ /* Llib/object.scm 233 */
long BgL_arg1991z00_6691;
{ /* Llib/object.scm 233 */
long BgL_res2859z00_6692;
BgL_res2859z00_6692 = 
BGL_CLASS_INDEX(BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00); 
BgL_arg1991z00_6691 = BgL_res2859z00_6692; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1106z00_6690), BgL_arg1991z00_6691); } 
return BgL_new1106z00_6690;} } 

}



/* &lambda1988 */
BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BGl_z62lambda1988z62zz__objectz00(obj_t BgL_envz00_5337, obj_t BgL_fname1100z00_5338, obj_t BgL_location1101z00_5339, obj_t BgL_stack1102z00_5340, obj_t BgL_proc1103z00_5341, obj_t BgL_msg1104z00_5342, obj_t BgL_obj1105z00_5343)
{
{ /* Llib/object.scm 233 */
{ /* Llib/object.scm 233 */
BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_new1250z00_6693;
{ /* Llib/object.scm 233 */
BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_new1249z00_6694;
BgL_new1249z00_6694 = 
((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2filezd2notzd2foundzd2errorz62_bgl) ))); 
{ /* Llib/object.scm 233 */
long BgL_arg1989z00_6695;
{ /* Llib/object.scm 233 */
long BgL_res2858z00_6696;
BgL_res2858z00_6696 = 
BGL_CLASS_INDEX(BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00); 
BgL_arg1989z00_6695 = BgL_res2858z00_6696; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1249z00_6694), BgL_arg1989z00_6695); } 
BgL_new1250z00_6693 = BgL_new1249z00_6694; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1250z00_6693)))->BgL_fnamez00)=((obj_t)BgL_fname1100z00_5338),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1250z00_6693)))->BgL_locationz00)=((obj_t)BgL_location1101z00_5339),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1250z00_6693)))->BgL_stackz00)=((obj_t)BgL_stack1102z00_5340),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1250z00_6693)))->BgL_procz00)=((obj_t)BgL_proc1103z00_5341),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1250z00_6693)))->BgL_msgz00)=((obj_t)BgL_msg1104z00_5342),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1250z00_6693)))->BgL_objz00)=((obj_t)BgL_obj1105z00_5343),BUNSPEC); 
return BgL_new1250z00_6693;} } 

}



/* &<@anonymous:1982> */
obj_t BGl_z62zc3z04anonymousza31982ze3ze5zz__objectz00(obj_t BgL_envz00_5344, obj_t BgL_new1098z00_5345)
{
{ /* Llib/object.scm 232 */
{ 
BgL_z62iozd2closedzd2errorz62_bglt BgL_auxz00_10902;
{ /* Llib/object.scm 232 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1098z00_6697;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1098z00_5345, BGl_z62iozd2closedzd2errorz62zz__objectz00))
{ /* Llib/object.scm 232 */
BgL_new1098z00_6697 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BgL_new1098z00_5345); }  else 
{ 
obj_t BgL_auxz00_10906;
BgL_auxz00_10906 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8333)), BGl_string4234z00zz__objectz00, BGl_string4126z00zz__objectz00, BgL_new1098z00_5345); 
FAILURE(BgL_auxz00_10906,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1098z00_6697)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1098z00_6697)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1098z00_6697)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1098z00_6697)))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1098z00_6697)))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1098z00_6697)))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_10902 = BgL_new1098z00_6697; } 
return 
((obj_t)BgL_auxz00_10902);} } 

}



/* &lambda1980 */
BgL_z62iozd2closedzd2errorz62_bglt BGl_z62lambda1980z62zz__objectz00(obj_t BgL_envz00_5346)
{
{ /* Llib/object.scm 232 */
{ /* Llib/object.scm 232 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1096z00_6698;
BgL_new1096z00_6698 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Llib/object.scm 232 */
long BgL_arg1981z00_6699;
{ /* Llib/object.scm 232 */
long BgL_res2857z00_6700;
BgL_res2857z00_6700 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg1981z00_6699 = BgL_res2857z00_6700; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1096z00_6698), BgL_arg1981z00_6699); } 
return BgL_new1096z00_6698;} } 

}



/* &lambda1978 */
BgL_z62iozd2closedzd2errorz62_bglt BGl_z62lambda1978z62zz__objectz00(obj_t BgL_envz00_5347, obj_t BgL_fname1090z00_5348, obj_t BgL_location1091z00_5349, obj_t BgL_stack1092z00_5350, obj_t BgL_proc1093z00_5351, obj_t BgL_msg1094z00_5352, obj_t BgL_obj1095z00_5353)
{
{ /* Llib/object.scm 232 */
{ /* Llib/object.scm 232 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1248z00_6701;
{ /* Llib/object.scm 232 */
BgL_z62iozd2closedzd2errorz62_bglt BgL_new1247z00_6702;
BgL_new1247z00_6702 = 
((BgL_z62iozd2closedzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2closedzd2errorz62_bgl) ))); 
{ /* Llib/object.scm 232 */
long BgL_arg1979z00_6703;
{ /* Llib/object.scm 232 */
long BgL_res2856z00_6704;
BgL_res2856z00_6704 = 
BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00); 
BgL_arg1979z00_6703 = BgL_res2856z00_6704; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1247z00_6702), BgL_arg1979z00_6703); } 
BgL_new1248z00_6701 = BgL_new1247z00_6702; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1248z00_6701)))->BgL_fnamez00)=((obj_t)BgL_fname1090z00_5348),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1248z00_6701)))->BgL_locationz00)=((obj_t)BgL_location1091z00_5349),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1248z00_6701)))->BgL_stackz00)=((obj_t)BgL_stack1092z00_5350),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1248z00_6701)))->BgL_procz00)=((obj_t)BgL_proc1093z00_5351),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1248z00_6701)))->BgL_msgz00)=((obj_t)BgL_msg1094z00_5352),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1248z00_6701)))->BgL_objz00)=((obj_t)BgL_obj1095z00_5353),BUNSPEC); 
return BgL_new1248z00_6701;} } 

}



/* &<@anonymous:1972> */
obj_t BGl_z62zc3z04anonymousza31972ze3ze5zz__objectz00(obj_t BgL_envz00_5354, obj_t BgL_new1088z00_5355)
{
{ /* Llib/object.scm 231 */
{ 
BgL_z62iozd2writezd2errorz62_bglt BgL_auxz00_10943;
{ /* Llib/object.scm 231 */
BgL_z62iozd2writezd2errorz62_bglt BgL_new1088z00_6705;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1088z00_5355, BGl_z62iozd2writezd2errorz62zz__objectz00))
{ /* Llib/object.scm 231 */
BgL_new1088z00_6705 = 
((BgL_z62iozd2writezd2errorz62_bglt)BgL_new1088z00_5355); }  else 
{ 
obj_t BgL_auxz00_10947;
BgL_auxz00_10947 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8288)), BGl_string4235z00zz__objectz00, BGl_string4121z00zz__objectz00, BgL_new1088z00_5355); 
FAILURE(BgL_auxz00_10947,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1088z00_6705)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1088z00_6705)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1088z00_6705)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1088z00_6705)))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1088z00_6705)))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1088z00_6705)))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_10943 = BgL_new1088z00_6705; } 
return 
((obj_t)BgL_auxz00_10943);} } 

}



/* &lambda1970 */
BgL_z62iozd2writezd2errorz62_bglt BGl_z62lambda1970z62zz__objectz00(obj_t BgL_envz00_5356)
{
{ /* Llib/object.scm 231 */
{ /* Llib/object.scm 231 */
BgL_z62iozd2writezd2errorz62_bglt BgL_new1087z00_6706;
BgL_new1087z00_6706 = 
((BgL_z62iozd2writezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2writezd2errorz62_bgl) ))); 
{ /* Llib/object.scm 231 */
long BgL_arg1971z00_6707;
{ /* Llib/object.scm 231 */
long BgL_res2855z00_6708;
BgL_res2855z00_6708 = 
BGL_CLASS_INDEX(BGl_z62iozd2writezd2errorz62zz__objectz00); 
BgL_arg1971z00_6707 = BgL_res2855z00_6708; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1087z00_6706), BgL_arg1971z00_6707); } 
return BgL_new1087z00_6706;} } 

}



/* &lambda1968 */
BgL_z62iozd2writezd2errorz62_bglt BGl_z62lambda1968z62zz__objectz00(obj_t BgL_envz00_5357, obj_t BgL_fname1081z00_5358, obj_t BgL_location1082z00_5359, obj_t BgL_stack1083z00_5360, obj_t BgL_proc1084z00_5361, obj_t BgL_msg1085z00_5362, obj_t BgL_obj1086z00_5363)
{
{ /* Llib/object.scm 231 */
{ /* Llib/object.scm 231 */
BgL_z62iozd2writezd2errorz62_bglt BgL_new1246z00_6709;
{ /* Llib/object.scm 231 */
BgL_z62iozd2writezd2errorz62_bglt BgL_new1245z00_6710;
BgL_new1245z00_6710 = 
((BgL_z62iozd2writezd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2writezd2errorz62_bgl) ))); 
{ /* Llib/object.scm 231 */
long BgL_arg1969z00_6711;
{ /* Llib/object.scm 231 */
long BgL_res2854z00_6712;
BgL_res2854z00_6712 = 
BGL_CLASS_INDEX(BGl_z62iozd2writezd2errorz62zz__objectz00); 
BgL_arg1969z00_6711 = BgL_res2854z00_6712; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1245z00_6710), BgL_arg1969z00_6711); } 
BgL_new1246z00_6709 = BgL_new1245z00_6710; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1246z00_6709)))->BgL_fnamez00)=((obj_t)BgL_fname1081z00_5358),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1246z00_6709)))->BgL_locationz00)=((obj_t)BgL_location1082z00_5359),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1246z00_6709)))->BgL_stackz00)=((obj_t)BgL_stack1083z00_5360),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1246z00_6709)))->BgL_procz00)=((obj_t)BgL_proc1084z00_5361),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1246z00_6709)))->BgL_msgz00)=((obj_t)BgL_msg1085z00_5362),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1246z00_6709)))->BgL_objz00)=((obj_t)BgL_obj1086z00_5363),BUNSPEC); 
return BgL_new1246z00_6709;} } 

}



/* &<@anonymous:1962> */
obj_t BGl_z62zc3z04anonymousza31962ze3ze5zz__objectz00(obj_t BgL_envz00_5364, obj_t BgL_new1079z00_5365)
{
{ /* Llib/object.scm 230 */
{ 
BgL_z62iozd2readzd2errorz62_bglt BgL_auxz00_10984;
{ /* Llib/object.scm 230 */
BgL_z62iozd2readzd2errorz62_bglt BgL_new1079z00_6713;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1079z00_5365, BGl_z62iozd2readzd2errorz62zz__objectz00))
{ /* Llib/object.scm 230 */
BgL_new1079z00_6713 = 
((BgL_z62iozd2readzd2errorz62_bglt)BgL_new1079z00_5365); }  else 
{ 
obj_t BgL_auxz00_10988;
BgL_auxz00_10988 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8244)), BGl_string4236z00zz__objectz00, BGl_string4116z00zz__objectz00, BgL_new1079z00_5365); 
FAILURE(BgL_auxz00_10988,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1079z00_6713)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1079z00_6713)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1079z00_6713)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1079z00_6713)))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1079z00_6713)))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1079z00_6713)))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_10984 = BgL_new1079z00_6713; } 
return 
((obj_t)BgL_auxz00_10984);} } 

}



/* &lambda1960 */
BgL_z62iozd2readzd2errorz62_bglt BGl_z62lambda1960z62zz__objectz00(obj_t BgL_envz00_5366)
{
{ /* Llib/object.scm 230 */
{ /* Llib/object.scm 230 */
BgL_z62iozd2readzd2errorz62_bglt BgL_new1078z00_6714;
BgL_new1078z00_6714 = 
((BgL_z62iozd2readzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2readzd2errorz62_bgl) ))); 
{ /* Llib/object.scm 230 */
long BgL_arg1961z00_6715;
{ /* Llib/object.scm 230 */
long BgL_res2853z00_6716;
BgL_res2853z00_6716 = 
BGL_CLASS_INDEX(BGl_z62iozd2readzd2errorz62zz__objectz00); 
BgL_arg1961z00_6715 = BgL_res2853z00_6716; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1078z00_6714), BgL_arg1961z00_6715); } 
return BgL_new1078z00_6714;} } 

}



/* &lambda1958 */
BgL_z62iozd2readzd2errorz62_bglt BGl_z62lambda1958z62zz__objectz00(obj_t BgL_envz00_5367, obj_t BgL_fname1072z00_5368, obj_t BgL_location1073z00_5369, obj_t BgL_stack1074z00_5370, obj_t BgL_proc1075z00_5371, obj_t BgL_msg1076z00_5372, obj_t BgL_obj1077z00_5373)
{
{ /* Llib/object.scm 230 */
{ /* Llib/object.scm 230 */
BgL_z62iozd2readzd2errorz62_bglt BgL_new1243z00_6717;
{ /* Llib/object.scm 230 */
BgL_z62iozd2readzd2errorz62_bglt BgL_new1242z00_6718;
BgL_new1242z00_6718 = 
((BgL_z62iozd2readzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2readzd2errorz62_bgl) ))); 
{ /* Llib/object.scm 230 */
long BgL_arg1959z00_6719;
{ /* Llib/object.scm 230 */
long BgL_res2852z00_6720;
BgL_res2852z00_6720 = 
BGL_CLASS_INDEX(BGl_z62iozd2readzd2errorz62zz__objectz00); 
BgL_arg1959z00_6719 = BgL_res2852z00_6720; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1242z00_6718), BgL_arg1959z00_6719); } 
BgL_new1243z00_6717 = BgL_new1242z00_6718; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1243z00_6717)))->BgL_fnamez00)=((obj_t)BgL_fname1072z00_5368),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1243z00_6717)))->BgL_locationz00)=((obj_t)BgL_location1073z00_5369),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1243z00_6717)))->BgL_stackz00)=((obj_t)BgL_stack1074z00_5370),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1243z00_6717)))->BgL_procz00)=((obj_t)BgL_proc1075z00_5371),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1243z00_6717)))->BgL_msgz00)=((obj_t)BgL_msg1076z00_5372),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1243z00_6717)))->BgL_objz00)=((obj_t)BgL_obj1077z00_5373),BUNSPEC); 
return BgL_new1243z00_6717;} } 

}



/* &<@anonymous:1952> */
obj_t BGl_z62zc3z04anonymousza31952ze3ze5zz__objectz00(obj_t BgL_envz00_5374, obj_t BgL_new1070z00_5375)
{
{ /* Llib/object.scm 229 */
{ 
BgL_z62iozd2portzd2errorz62_bglt BgL_auxz00_11025;
{ /* Llib/object.scm 229 */
BgL_z62iozd2portzd2errorz62_bglt BgL_new1070z00_6721;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1070z00_5375, BGl_z62iozd2portzd2errorz62zz__objectz00))
{ /* Llib/object.scm 229 */
BgL_new1070z00_6721 = 
((BgL_z62iozd2portzd2errorz62_bglt)BgL_new1070z00_5375); }  else 
{ 
obj_t BgL_auxz00_11029;
BgL_auxz00_11029 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8205)), BGl_string4237z00zz__objectz00, BGl_string4111z00zz__objectz00, BgL_new1070z00_5375); 
FAILURE(BgL_auxz00_11029,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1070z00_6721)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1070z00_6721)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1070z00_6721)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1070z00_6721)))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1070z00_6721)))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1070z00_6721)))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_11025 = BgL_new1070z00_6721; } 
return 
((obj_t)BgL_auxz00_11025);} } 

}



/* &lambda1949 */
BgL_z62iozd2portzd2errorz62_bglt BGl_z62lambda1949z62zz__objectz00(obj_t BgL_envz00_5376)
{
{ /* Llib/object.scm 229 */
{ /* Llib/object.scm 229 */
BgL_z62iozd2portzd2errorz62_bglt BgL_new1069z00_6722;
BgL_new1069z00_6722 = 
((BgL_z62iozd2portzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2portzd2errorz62_bgl) ))); 
{ /* Llib/object.scm 229 */
long BgL_arg1951z00_6723;
{ /* Llib/object.scm 229 */
long BgL_res2851z00_6724;
BgL_res2851z00_6724 = 
BGL_CLASS_INDEX(BGl_z62iozd2portzd2errorz62zz__objectz00); 
BgL_arg1951z00_6723 = BgL_res2851z00_6724; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1069z00_6722), BgL_arg1951z00_6723); } 
return BgL_new1069z00_6722;} } 

}



/* &lambda1947 */
BgL_z62iozd2portzd2errorz62_bglt BGl_z62lambda1947z62zz__objectz00(obj_t BgL_envz00_5377, obj_t BgL_fname1063z00_5378, obj_t BgL_location1064z00_5379, obj_t BgL_stack1065z00_5380, obj_t BgL_proc1066z00_5381, obj_t BgL_msg1067z00_5382, obj_t BgL_obj1068z00_5383)
{
{ /* Llib/object.scm 229 */
{ /* Llib/object.scm 229 */
BgL_z62iozd2portzd2errorz62_bglt BgL_new1241z00_6725;
{ /* Llib/object.scm 229 */
BgL_z62iozd2portzd2errorz62_bglt BgL_new1240z00_6726;
BgL_new1240z00_6726 = 
((BgL_z62iozd2portzd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2portzd2errorz62_bgl) ))); 
{ /* Llib/object.scm 229 */
long BgL_arg1948z00_6727;
{ /* Llib/object.scm 229 */
long BgL_res2850z00_6728;
BgL_res2850z00_6728 = 
BGL_CLASS_INDEX(BGl_z62iozd2portzd2errorz62zz__objectz00); 
BgL_arg1948z00_6727 = BgL_res2850z00_6728; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1240z00_6726), BgL_arg1948z00_6727); } 
BgL_new1241z00_6725 = BgL_new1240z00_6726; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1241z00_6725)))->BgL_fnamez00)=((obj_t)BgL_fname1063z00_5378),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1241z00_6725)))->BgL_locationz00)=((obj_t)BgL_location1064z00_5379),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1241z00_6725)))->BgL_stackz00)=((obj_t)BgL_stack1065z00_5380),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1241z00_6725)))->BgL_procz00)=((obj_t)BgL_proc1066z00_5381),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1241z00_6725)))->BgL_msgz00)=((obj_t)BgL_msg1067z00_5382),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1241z00_6725)))->BgL_objz00)=((obj_t)BgL_obj1068z00_5383),BUNSPEC); 
return BgL_new1241z00_6725;} } 

}



/* &<@anonymous:1941> */
obj_t BGl_z62zc3z04anonymousza31941ze3ze5zz__objectz00(obj_t BgL_envz00_5384, obj_t BgL_new1061z00_5385)
{
{ /* Llib/object.scm 228 */
{ 
BgL_z62iozd2errorzb0_bglt BgL_auxz00_11066;
{ /* Llib/object.scm 228 */
BgL_z62iozd2errorzb0_bglt BgL_new1061z00_6729;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1061z00_5385, BGl_z62iozd2errorzb0zz__objectz00))
{ /* Llib/object.scm 228 */
BgL_new1061z00_6729 = 
((BgL_z62iozd2errorzb0_bglt)BgL_new1061z00_5385); }  else 
{ 
obj_t BgL_auxz00_11070;
BgL_auxz00_11070 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8174)), BGl_string4238z00zz__objectz00, BGl_string4106z00zz__objectz00, BgL_new1061z00_5385); 
FAILURE(BgL_auxz00_11070,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1061z00_6729)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1061z00_6729)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1061z00_6729)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1061z00_6729)))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1061z00_6729)))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1061z00_6729)))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_11066 = BgL_new1061z00_6729; } 
return 
((obj_t)BgL_auxz00_11066);} } 

}



/* &lambda1939 */
BgL_z62iozd2errorzb0_bglt BGl_z62lambda1939z62zz__objectz00(obj_t BgL_envz00_5386)
{
{ /* Llib/object.scm 228 */
{ /* Llib/object.scm 228 */
BgL_z62iozd2errorzb0_bglt BgL_new1060z00_6730;
BgL_new1060z00_6730 = 
((BgL_z62iozd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2errorzb0_bgl) ))); 
{ /* Llib/object.scm 228 */
long BgL_arg1940z00_6731;
{ /* Llib/object.scm 228 */
long BgL_res2849z00_6732;
BgL_res2849z00_6732 = 
BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00); 
BgL_arg1940z00_6731 = BgL_res2849z00_6732; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1060z00_6730), BgL_arg1940z00_6731); } 
return BgL_new1060z00_6730;} } 

}



/* &lambda1937 */
BgL_z62iozd2errorzb0_bglt BGl_z62lambda1937z62zz__objectz00(obj_t BgL_envz00_5387, obj_t BgL_fname1054z00_5388, obj_t BgL_location1055z00_5389, obj_t BgL_stack1056z00_5390, obj_t BgL_proc1057z00_5391, obj_t BgL_msg1058z00_5392, obj_t BgL_obj1059z00_5393)
{
{ /* Llib/object.scm 228 */
{ /* Llib/object.scm 228 */
BgL_z62iozd2errorzb0_bglt BgL_new1239z00_6733;
{ /* Llib/object.scm 228 */
BgL_z62iozd2errorzb0_bglt BgL_new1238z00_6734;
BgL_new1238z00_6734 = 
((BgL_z62iozd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62iozd2errorzb0_bgl) ))); 
{ /* Llib/object.scm 228 */
long BgL_arg1938z00_6735;
{ /* Llib/object.scm 228 */
long BgL_res2848z00_6736;
BgL_res2848z00_6736 = 
BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00); 
BgL_arg1938z00_6735 = BgL_res2848z00_6736; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1238z00_6734), BgL_arg1938z00_6735); } 
BgL_new1239z00_6733 = BgL_new1238z00_6734; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1239z00_6733)))->BgL_fnamez00)=((obj_t)BgL_fname1054z00_5388),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1239z00_6733)))->BgL_locationz00)=((obj_t)BgL_location1055z00_5389),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1239z00_6733)))->BgL_stackz00)=((obj_t)BgL_stack1056z00_5390),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1239z00_6733)))->BgL_procz00)=((obj_t)BgL_proc1057z00_5391),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1239z00_6733)))->BgL_msgz00)=((obj_t)BgL_msg1058z00_5392),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1239z00_6733)))->BgL_objz00)=((obj_t)BgL_obj1059z00_5393),BUNSPEC); 
return BgL_new1239z00_6733;} } 

}



/* &<@anonymous:1926> */
obj_t BGl_z62zc3z04anonymousza31926ze3ze5zz__objectz00(obj_t BgL_envz00_5394, obj_t BgL_new1052z00_5395)
{
{ /* Llib/object.scm 226 */
{ 
BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_auxz00_11107;
{ /* Llib/object.scm 226 */
BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_new1052z00_6737;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1052z00_5395, BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00))
{ /* Llib/object.scm 226 */
BgL_new1052z00_6737 = 
((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)BgL_new1052z00_5395); }  else 
{ 
obj_t BgL_auxz00_11111;
BgL_auxz00_11111 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8100)), BGl_string4239z00zz__objectz00, BGl_string4101z00zz__objectz00, BgL_new1052z00_5395); 
FAILURE(BgL_auxz00_11111,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1052z00_6737)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1052z00_6737)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1052z00_6737)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1052z00_6737)))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1052z00_6737)))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1052z00_6737)))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)COBJECT(BgL_new1052z00_6737))->BgL_indexz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_11107 = BgL_new1052z00_6737; } 
return 
((obj_t)BgL_auxz00_11107);} } 

}



/* &lambda1924 */
BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BGl_z62lambda1924z62zz__objectz00(obj_t BgL_envz00_5396)
{
{ /* Llib/object.scm 226 */
{ /* Llib/object.scm 226 */
BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_new1051z00_6738;
BgL_new1051z00_6738 = 
((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bgl) ))); 
{ /* Llib/object.scm 226 */
long BgL_arg1925z00_6739;
{ /* Llib/object.scm 226 */
long BgL_res2847z00_6740;
BgL_res2847z00_6740 = 
BGL_CLASS_INDEX(BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00); 
BgL_arg1925z00_6739 = BgL_res2847z00_6740; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1051z00_6738), BgL_arg1925z00_6739); } 
return BgL_new1051z00_6738;} } 

}



/* &lambda1921 */
BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BGl_z62lambda1921z62zz__objectz00(obj_t BgL_envz00_5397, obj_t BgL_fname1044z00_5398, obj_t BgL_location1045z00_5399, obj_t BgL_stack1046z00_5400, obj_t BgL_proc1047z00_5401, obj_t BgL_msg1048z00_5402, obj_t BgL_obj1049z00_5403, obj_t BgL_index1050z00_5404)
{
{ /* Llib/object.scm 226 */
{ /* Llib/object.scm 226 */
BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_new1237z00_6741;
{ /* Llib/object.scm 226 */
BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_new1236z00_6742;
BgL_new1236z00_6742 = 
((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bgl) ))); 
{ /* Llib/object.scm 226 */
long BgL_arg1923z00_6743;
{ /* Llib/object.scm 226 */
long BgL_res2846z00_6744;
BgL_res2846z00_6744 = 
BGL_CLASS_INDEX(BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00); 
BgL_arg1923z00_6743 = BgL_res2846z00_6744; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1236z00_6742), BgL_arg1923z00_6743); } 
BgL_new1237z00_6741 = BgL_new1236z00_6742; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1237z00_6741)))->BgL_fnamez00)=((obj_t)BgL_fname1044z00_5398),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1237z00_6741)))->BgL_locationz00)=((obj_t)BgL_location1045z00_5399),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1237z00_6741)))->BgL_stackz00)=((obj_t)BgL_stack1046z00_5400),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1237z00_6741)))->BgL_procz00)=((obj_t)BgL_proc1047z00_5401),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1237z00_6741)))->BgL_msgz00)=((obj_t)BgL_msg1048z00_5402),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1237z00_6741)))->BgL_objz00)=((obj_t)BgL_obj1049z00_5403),BUNSPEC); 
((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)COBJECT(BgL_new1237z00_6741))->BgL_indexz00)=((obj_t)BgL_index1050z00_5404),BUNSPEC); 
return BgL_new1237z00_6741;} } 

}



/* &lambda1931 */
obj_t BGl_z62lambda1931z62zz__objectz00(obj_t BgL_envz00_5405, obj_t BgL_oz00_5406, obj_t BgL_vz00_5407)
{
{ /* Llib/object.scm 226 */
{ /* Llib/object.scm 226 */
BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_oz00_6745;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5406, BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00))
{ /* Llib/object.scm 226 */
BgL_oz00_6745 = 
((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)BgL_oz00_5406); }  else 
{ 
obj_t BgL_auxz00_11153;
BgL_auxz00_11153 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8100)), BGl_string4240z00zz__objectz00, BGl_string4101z00zz__objectz00, BgL_oz00_5406); 
FAILURE(BgL_auxz00_11153,BFALSE,BFALSE);} 
return 
((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)COBJECT(BgL_oz00_6745))->BgL_indexz00)=((obj_t)BgL_vz00_5407),BUNSPEC);} } 

}



/* &lambda1930 */
obj_t BGl_z62lambda1930z62zz__objectz00(obj_t BgL_envz00_5408, obj_t BgL_oz00_5409)
{
{ /* Llib/object.scm 226 */
{ /* Llib/object.scm 226 */
BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_oz00_6746;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5409, BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00))
{ /* Llib/object.scm 226 */
BgL_oz00_6746 = 
((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)BgL_oz00_5409); }  else 
{ 
obj_t BgL_auxz00_11161;
BgL_auxz00_11161 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8100)), BGl_string4241z00zz__objectz00, BGl_string4101z00zz__objectz00, BgL_oz00_5409); 
FAILURE(BgL_auxz00_11161,BFALSE,BFALSE);} 
return 
(((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)COBJECT(BgL_oz00_6746))->BgL_indexz00);} } 

}



/* &<@anonymous:1910> */
obj_t BGl_z62zc3z04anonymousza31910ze3ze5zz__objectz00(obj_t BgL_envz00_5410, obj_t BgL_new1042z00_5411)
{
{ /* Llib/object.scm 224 */
{ 
BgL_z62typezd2errorzb0_bglt BgL_auxz00_11166;
{ /* Llib/object.scm 224 */
BgL_z62typezd2errorzb0_bglt BgL_new1042z00_6747;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1042z00_5411, BGl_z62typezd2errorzb0zz__objectz00))
{ /* Llib/object.scm 224 */
BgL_new1042z00_6747 = 
((BgL_z62typezd2errorzb0_bglt)BgL_new1042z00_5411); }  else 
{ 
obj_t BgL_auxz00_11170;
BgL_auxz00_11170 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8042)), BGl_string4242z00zz__objectz00, BGl_string4092z00zz__objectz00, BgL_new1042z00_5411); 
FAILURE(BgL_auxz00_11170,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1042z00_6747)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1042z00_6747)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1042z00_6747)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1042z00_6747)))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1042z00_6747)))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1042z00_6747)))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62typezd2errorzb0_bglt)COBJECT(BgL_new1042z00_6747))->BgL_typez00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_11166 = BgL_new1042z00_6747; } 
return 
((obj_t)BgL_auxz00_11166);} } 

}



/* &lambda1908 */
BgL_z62typezd2errorzb0_bglt BGl_z62lambda1908z62zz__objectz00(obj_t BgL_envz00_5412)
{
{ /* Llib/object.scm 224 */
{ /* Llib/object.scm 224 */
BgL_z62typezd2errorzb0_bglt BgL_new1041z00_6748;
BgL_new1041z00_6748 = 
((BgL_z62typezd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62typezd2errorzb0_bgl) ))); 
{ /* Llib/object.scm 224 */
long BgL_arg1909z00_6749;
{ /* Llib/object.scm 224 */
long BgL_res2844z00_6750;
BgL_res2844z00_6750 = 
BGL_CLASS_INDEX(BGl_z62typezd2errorzb0zz__objectz00); 
BgL_arg1909z00_6749 = BgL_res2844z00_6750; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1041z00_6748), BgL_arg1909z00_6749); } 
return BgL_new1041z00_6748;} } 

}



/* &lambda1906 */
BgL_z62typezd2errorzb0_bglt BGl_z62lambda1906z62zz__objectz00(obj_t BgL_envz00_5413, obj_t BgL_fname1034z00_5414, obj_t BgL_location1035z00_5415, obj_t BgL_stack1036z00_5416, obj_t BgL_proc1037z00_5417, obj_t BgL_msg1038z00_5418, obj_t BgL_obj1039z00_5419, obj_t BgL_type1040z00_5420)
{
{ /* Llib/object.scm 224 */
{ /* Llib/object.scm 224 */
BgL_z62typezd2errorzb0_bglt BgL_new1235z00_6751;
{ /* Llib/object.scm 224 */
BgL_z62typezd2errorzb0_bglt BgL_new1234z00_6752;
BgL_new1234z00_6752 = 
((BgL_z62typezd2errorzb0_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62typezd2errorzb0_bgl) ))); 
{ /* Llib/object.scm 224 */
long BgL_arg1907z00_6753;
{ /* Llib/object.scm 224 */
long BgL_res2843z00_6754;
BgL_res2843z00_6754 = 
BGL_CLASS_INDEX(BGl_z62typezd2errorzb0zz__objectz00); 
BgL_arg1907z00_6753 = BgL_res2843z00_6754; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1234z00_6752), BgL_arg1907z00_6753); } 
BgL_new1235z00_6751 = BgL_new1234z00_6752; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1235z00_6751)))->BgL_fnamez00)=((obj_t)BgL_fname1034z00_5414),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1235z00_6751)))->BgL_locationz00)=((obj_t)BgL_location1035z00_5415),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1235z00_6751)))->BgL_stackz00)=((obj_t)BgL_stack1036z00_5416),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1235z00_6751)))->BgL_procz00)=((obj_t)BgL_proc1037z00_5417),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1235z00_6751)))->BgL_msgz00)=((obj_t)BgL_msg1038z00_5418),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_new1235z00_6751)))->BgL_objz00)=((obj_t)BgL_obj1039z00_5419),BUNSPEC); 
((((BgL_z62typezd2errorzb0_bglt)COBJECT(BgL_new1235z00_6751))->BgL_typez00)=((obj_t)BgL_type1040z00_5420),BUNSPEC); 
return BgL_new1235z00_6751;} } 

}



/* &lambda1915 */
obj_t BGl_z62lambda1915z62zz__objectz00(obj_t BgL_envz00_5421, obj_t BgL_oz00_5422, obj_t BgL_vz00_5423)
{
{ /* Llib/object.scm 224 */
{ /* Llib/object.scm 224 */
BgL_z62typezd2errorzb0_bglt BgL_oz00_6755;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5422, BGl_z62typezd2errorzb0zz__objectz00))
{ /* Llib/object.scm 224 */
BgL_oz00_6755 = 
((BgL_z62typezd2errorzb0_bglt)BgL_oz00_5422); }  else 
{ 
obj_t BgL_auxz00_11212;
BgL_auxz00_11212 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8042)), BGl_string4243z00zz__objectz00, BGl_string4092z00zz__objectz00, BgL_oz00_5422); 
FAILURE(BgL_auxz00_11212,BFALSE,BFALSE);} 
return 
((((BgL_z62typezd2errorzb0_bglt)COBJECT(BgL_oz00_6755))->BgL_typez00)=((obj_t)BgL_vz00_5423),BUNSPEC);} } 

}



/* &lambda1914 */
obj_t BGl_z62lambda1914z62zz__objectz00(obj_t BgL_envz00_5424, obj_t BgL_oz00_5425)
{
{ /* Llib/object.scm 224 */
{ /* Llib/object.scm 224 */
BgL_z62typezd2errorzb0_bglt BgL_oz00_6756;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5425, BGl_z62typezd2errorzb0zz__objectz00))
{ /* Llib/object.scm 224 */
BgL_oz00_6756 = 
((BgL_z62typezd2errorzb0_bglt)BgL_oz00_5425); }  else 
{ 
obj_t BgL_auxz00_11220;
BgL_auxz00_11220 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)8042)), BGl_string4244z00zz__objectz00, BGl_string4092z00zz__objectz00, BgL_oz00_5425); 
FAILURE(BgL_auxz00_11220,BFALSE,BFALSE);} 
return 
(((BgL_z62typezd2errorzb0_bglt)COBJECT(BgL_oz00_6756))->BgL_typez00);} } 

}



/* &<@anonymous:1884> */
obj_t BGl_z62zc3z04anonymousza31884ze3ze5zz__objectz00(obj_t BgL_envz00_5426, obj_t BgL_new1032z00_5427)
{
{ /* Llib/object.scm 220 */
{ 
BgL_z62errorz62_bglt BgL_auxz00_11225;
{ /* Llib/object.scm 220 */
BgL_z62errorz62_bglt BgL_new1032z00_6757;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1032z00_5427, BGl_z62errorz62zz__objectz00))
{ /* Llib/object.scm 220 */
BgL_new1032z00_6757 = 
((BgL_z62errorz62_bglt)BgL_new1032z00_5427); }  else 
{ 
obj_t BgL_auxz00_11229;
BgL_auxz00_11229 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)7949)), BGl_string4245z00zz__objectz00, BGl_string4083z00zz__objectz00, BgL_new1032z00_5427); 
FAILURE(BgL_auxz00_11229,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1032z00_6757)))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1032z00_6757)))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1032z00_6757)))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1032z00_6757))->BgL_procz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1032z00_6757))->BgL_msgz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1032z00_6757))->BgL_objz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_11225 = BgL_new1032z00_6757; } 
return 
((obj_t)BgL_auxz00_11225);} } 

}



/* &lambda1882 */
BgL_z62errorz62_bglt BGl_z62lambda1882z62zz__objectz00(obj_t BgL_envz00_5428)
{
{ /* Llib/object.scm 220 */
{ /* Llib/object.scm 220 */
BgL_z62errorz62_bglt BgL_new1031z00_6758;
BgL_new1031z00_6758 = 
((BgL_z62errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62errorz62_bgl) ))); 
{ /* Llib/object.scm 220 */
long BgL_arg1883z00_6759;
{ /* Llib/object.scm 220 */
long BgL_res2841z00_6760;
BgL_res2841z00_6760 = 
BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00); 
BgL_arg1883z00_6759 = BgL_res2841z00_6760; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1031z00_6758), BgL_arg1883z00_6759); } 
return BgL_new1031z00_6758;} } 

}



/* &lambda1880 */
BgL_z62errorz62_bglt BGl_z62lambda1880z62zz__objectz00(obj_t BgL_envz00_5429, obj_t BgL_fname1025z00_5430, obj_t BgL_location1026z00_5431, obj_t BgL_stack1027z00_5432, obj_t BgL_proc1028z00_5433, obj_t BgL_msg1029z00_5434, obj_t BgL_obj1030z00_5435)
{
{ /* Llib/object.scm 220 */
{ /* Llib/object.scm 220 */
BgL_z62errorz62_bglt BgL_new1233z00_6761;
{ /* Llib/object.scm 220 */
BgL_z62errorz62_bglt BgL_new1232z00_6762;
BgL_new1232z00_6762 = 
((BgL_z62errorz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62errorz62_bgl) ))); 
{ /* Llib/object.scm 220 */
long BgL_arg1881z00_6763;
{ /* Llib/object.scm 220 */
long BgL_res2840z00_6764;
BgL_res2840z00_6764 = 
BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00); 
BgL_arg1881z00_6763 = BgL_res2840z00_6764; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1232z00_6762), BgL_arg1881z00_6763); } 
BgL_new1233z00_6761 = BgL_new1232z00_6762; } 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1233z00_6761)))->BgL_fnamez00)=((obj_t)BgL_fname1025z00_5430),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1233z00_6761)))->BgL_locationz00)=((obj_t)BgL_location1026z00_5431),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_new1233z00_6761)))->BgL_stackz00)=((obj_t)BgL_stack1027z00_5432),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1233z00_6761))->BgL_procz00)=((obj_t)BgL_proc1028z00_5433),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1233z00_6761))->BgL_msgz00)=((obj_t)BgL_msg1029z00_5434),BUNSPEC); 
((((BgL_z62errorz62_bglt)COBJECT(BgL_new1233z00_6761))->BgL_objz00)=((obj_t)BgL_obj1030z00_5435),BUNSPEC); 
return BgL_new1233z00_6761;} } 

}



/* &lambda1900 */
obj_t BGl_z62lambda1900z62zz__objectz00(obj_t BgL_envz00_5436, obj_t BgL_oz00_5437, obj_t BgL_vz00_5438)
{
{ /* Llib/object.scm 220 */
{ /* Llib/object.scm 220 */
BgL_z62errorz62_bglt BgL_oz00_6765;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5437, BGl_z62errorz62zz__objectz00))
{ /* Llib/object.scm 220 */
BgL_oz00_6765 = 
((BgL_z62errorz62_bglt)BgL_oz00_5437); }  else 
{ 
obj_t BgL_auxz00_11263;
BgL_auxz00_11263 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)7949)), BGl_string4246z00zz__objectz00, BGl_string4083z00zz__objectz00, BgL_oz00_5437); 
FAILURE(BgL_auxz00_11263,BFALSE,BFALSE);} 
return 
((((BgL_z62errorz62_bglt)COBJECT(BgL_oz00_6765))->BgL_objz00)=((obj_t)BgL_vz00_5438),BUNSPEC);} } 

}



/* &lambda1899 */
obj_t BGl_z62lambda1899z62zz__objectz00(obj_t BgL_envz00_5439, obj_t BgL_oz00_5440)
{
{ /* Llib/object.scm 220 */
{ /* Llib/object.scm 220 */
BgL_z62errorz62_bglt BgL_oz00_6766;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5440, BGl_z62errorz62zz__objectz00))
{ /* Llib/object.scm 220 */
BgL_oz00_6766 = 
((BgL_z62errorz62_bglt)BgL_oz00_5440); }  else 
{ 
obj_t BgL_auxz00_11271;
BgL_auxz00_11271 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)7949)), BGl_string4247z00zz__objectz00, BGl_string4083z00zz__objectz00, BgL_oz00_5440); 
FAILURE(BgL_auxz00_11271,BFALSE,BFALSE);} 
return 
(((BgL_z62errorz62_bglt)COBJECT(BgL_oz00_6766))->BgL_objz00);} } 

}



/* &lambda1895 */
obj_t BGl_z62lambda1895z62zz__objectz00(obj_t BgL_envz00_5441, obj_t BgL_oz00_5442, obj_t BgL_vz00_5443)
{
{ /* Llib/object.scm 220 */
{ /* Llib/object.scm 220 */
BgL_z62errorz62_bglt BgL_oz00_6767;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5442, BGl_z62errorz62zz__objectz00))
{ /* Llib/object.scm 220 */
BgL_oz00_6767 = 
((BgL_z62errorz62_bglt)BgL_oz00_5442); }  else 
{ 
obj_t BgL_auxz00_11279;
BgL_auxz00_11279 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)7949)), BGl_string4248z00zz__objectz00, BGl_string4083z00zz__objectz00, BgL_oz00_5442); 
FAILURE(BgL_auxz00_11279,BFALSE,BFALSE);} 
return 
((((BgL_z62errorz62_bglt)COBJECT(BgL_oz00_6767))->BgL_msgz00)=((obj_t)BgL_vz00_5443),BUNSPEC);} } 

}



/* &lambda1894 */
obj_t BGl_z62lambda1894z62zz__objectz00(obj_t BgL_envz00_5444, obj_t BgL_oz00_5445)
{
{ /* Llib/object.scm 220 */
{ /* Llib/object.scm 220 */
BgL_z62errorz62_bglt BgL_oz00_6768;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5445, BGl_z62errorz62zz__objectz00))
{ /* Llib/object.scm 220 */
BgL_oz00_6768 = 
((BgL_z62errorz62_bglt)BgL_oz00_5445); }  else 
{ 
obj_t BgL_auxz00_11287;
BgL_auxz00_11287 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)7949)), BGl_string4249z00zz__objectz00, BGl_string4083z00zz__objectz00, BgL_oz00_5445); 
FAILURE(BgL_auxz00_11287,BFALSE,BFALSE);} 
return 
(((BgL_z62errorz62_bglt)COBJECT(BgL_oz00_6768))->BgL_msgz00);} } 

}



/* &lambda1889 */
obj_t BGl_z62lambda1889z62zz__objectz00(obj_t BgL_envz00_5446, obj_t BgL_oz00_5447, obj_t BgL_vz00_5448)
{
{ /* Llib/object.scm 220 */
{ /* Llib/object.scm 220 */
BgL_z62errorz62_bglt BgL_oz00_6769;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5447, BGl_z62errorz62zz__objectz00))
{ /* Llib/object.scm 220 */
BgL_oz00_6769 = 
((BgL_z62errorz62_bglt)BgL_oz00_5447); }  else 
{ 
obj_t BgL_auxz00_11295;
BgL_auxz00_11295 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)7949)), BGl_string4250z00zz__objectz00, BGl_string4083z00zz__objectz00, BgL_oz00_5447); 
FAILURE(BgL_auxz00_11295,BFALSE,BFALSE);} 
return 
((((BgL_z62errorz62_bglt)COBJECT(BgL_oz00_6769))->BgL_procz00)=((obj_t)BgL_vz00_5448),BUNSPEC);} } 

}



/* &lambda1888 */
obj_t BGl_z62lambda1888z62zz__objectz00(obj_t BgL_envz00_5449, obj_t BgL_oz00_5450)
{
{ /* Llib/object.scm 220 */
{ /* Llib/object.scm 220 */
BgL_z62errorz62_bglt BgL_oz00_6770;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5450, BGl_z62errorz62zz__objectz00))
{ /* Llib/object.scm 220 */
BgL_oz00_6770 = 
((BgL_z62errorz62_bglt)BgL_oz00_5450); }  else 
{ 
obj_t BgL_auxz00_11303;
BgL_auxz00_11303 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)7949)), BGl_string4251z00zz__objectz00, BGl_string4083z00zz__objectz00, BgL_oz00_5450); 
FAILURE(BgL_auxz00_11303,BFALSE,BFALSE);} 
return 
(((BgL_z62errorz62_bglt)COBJECT(BgL_oz00_6770))->BgL_procz00);} } 

}



/* &<@anonymous:1848> */
obj_t BGl_z62zc3z04anonymousza31848ze3ze5zz__objectz00(obj_t BgL_envz00_5451, obj_t BgL_new1023z00_5452)
{
{ /* Llib/object.scm 215 */
{ 
BgL_z62exceptionz62_bglt BgL_auxz00_11308;
{ /* Llib/object.scm 215 */
BgL_z62exceptionz62_bglt BgL_new1023z00_6771;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1023z00_5452, BGl_z62exceptionz62zz__objectz00))
{ /* Llib/object.scm 215 */
BgL_new1023z00_6771 = 
((BgL_z62exceptionz62_bglt)BgL_new1023z00_5452); }  else 
{ 
obj_t BgL_auxz00_11312;
BgL_auxz00_11312 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)7802)), BGl_string4252z00zz__objectz00, BGl_string4070z00zz__objectz00, BgL_new1023z00_5452); 
FAILURE(BgL_auxz00_11312,BFALSE,BFALSE);} 
((((BgL_z62exceptionz62_bglt)COBJECT(BgL_new1023z00_6771))->BgL_fnamez00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(BgL_new1023z00_6771))->BgL_locationz00)=((obj_t)BUNSPEC),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(BgL_new1023z00_6771))->BgL_stackz00)=((obj_t)BUNSPEC),BUNSPEC); 
BgL_auxz00_11308 = BgL_new1023z00_6771; } 
return 
((obj_t)BgL_auxz00_11308);} } 

}



/* &lambda1846 */
BgL_z62exceptionz62_bglt BGl_z62lambda1846z62zz__objectz00(obj_t BgL_envz00_5453)
{
{ /* Llib/object.scm 215 */
{ /* Llib/object.scm 215 */
BgL_z62exceptionz62_bglt BgL_new1022z00_6772;
BgL_new1022z00_6772 = 
((BgL_z62exceptionz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62exceptionz62_bgl) ))); 
{ /* Llib/object.scm 215 */
long BgL_arg1847z00_6773;
{ /* Llib/object.scm 215 */
long BgL_res2836z00_6774;
BgL_res2836z00_6774 = 
BGL_CLASS_INDEX(BGl_z62exceptionz62zz__objectz00); 
BgL_arg1847z00_6773 = BgL_res2836z00_6774; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1022z00_6772), BgL_arg1847z00_6773); } 
return BgL_new1022z00_6772;} } 

}



/* &lambda1842 */
BgL_z62exceptionz62_bglt BGl_z62lambda1842z62zz__objectz00(obj_t BgL_envz00_5454, obj_t BgL_fname1019z00_5455, obj_t BgL_location1020z00_5456, obj_t BgL_stack1021z00_5457)
{
{ /* Llib/object.scm 215 */
{ /* Llib/object.scm 215 */
BgL_z62exceptionz62_bglt BgL_new1231z00_6775;
{ /* Llib/object.scm 215 */
BgL_z62exceptionz62_bglt BgL_new1230z00_6776;
BgL_new1230z00_6776 = 
((BgL_z62exceptionz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62exceptionz62_bgl) ))); 
{ /* Llib/object.scm 215 */
long BgL_arg1845z00_6777;
{ /* Llib/object.scm 215 */
long BgL_res2835z00_6778;
BgL_res2835z00_6778 = 
BGL_CLASS_INDEX(BGl_z62exceptionz62zz__objectz00); 
BgL_arg1845z00_6777 = BgL_res2835z00_6778; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1230z00_6776), BgL_arg1845z00_6777); } 
BgL_new1231z00_6775 = BgL_new1230z00_6776; } 
((((BgL_z62exceptionz62_bglt)COBJECT(BgL_new1231z00_6775))->BgL_fnamez00)=((obj_t)BgL_fname1019z00_5455),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(BgL_new1231z00_6775))->BgL_locationz00)=((obj_t)BgL_location1020z00_5456),BUNSPEC); 
((((BgL_z62exceptionz62_bglt)COBJECT(BgL_new1231z00_6775))->BgL_stackz00)=((obj_t)BgL_stack1021z00_5457),BUNSPEC); 
return BgL_new1231z00_6775;} } 

}



/* &<@anonymous:1873> */
obj_t BGl_z62zc3z04anonymousza31873ze3ze5zz__objectz00(obj_t BgL_envz00_5458)
{
{ /* Llib/object.scm 215 */
{ /* Llib/object.scm 218 */

{ /* Llib/object.scm 218 */

return 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);} } } 

}



/* &lambda1872 */
obj_t BGl_z62lambda1872z62zz__objectz00(obj_t BgL_envz00_5459, obj_t BgL_oz00_5460, obj_t BgL_vz00_5461)
{
{ /* Llib/object.scm 215 */
{ /* Llib/object.scm 215 */
BgL_z62exceptionz62_bglt BgL_oz00_6779;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5460, BGl_z62exceptionz62zz__objectz00))
{ /* Llib/object.scm 215 */
BgL_oz00_6779 = 
((BgL_z62exceptionz62_bglt)BgL_oz00_5460); }  else 
{ 
obj_t BgL_auxz00_11335;
BgL_auxz00_11335 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)7802)), BGl_string4253z00zz__objectz00, BGl_string4070z00zz__objectz00, BgL_oz00_5460); 
FAILURE(BgL_auxz00_11335,BFALSE,BFALSE);} 
return 
((((BgL_z62exceptionz62_bglt)COBJECT(BgL_oz00_6779))->BgL_stackz00)=((obj_t)BgL_vz00_5461),BUNSPEC);} } 

}



/* &lambda1871 */
obj_t BGl_z62lambda1871z62zz__objectz00(obj_t BgL_envz00_5462, obj_t BgL_oz00_5463)
{
{ /* Llib/object.scm 215 */
{ /* Llib/object.scm 215 */
BgL_z62exceptionz62_bglt BgL_oz00_6780;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5463, BGl_z62exceptionz62zz__objectz00))
{ /* Llib/object.scm 215 */
BgL_oz00_6780 = 
((BgL_z62exceptionz62_bglt)BgL_oz00_5463); }  else 
{ 
obj_t BgL_auxz00_11343;
BgL_auxz00_11343 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)7802)), BGl_string4254z00zz__objectz00, BGl_string4070z00zz__objectz00, BgL_oz00_5463); 
FAILURE(BgL_auxz00_11343,BFALSE,BFALSE);} 
return 
(((BgL_z62exceptionz62_bglt)COBJECT(BgL_oz00_6780))->BgL_stackz00);} } 

}



/* &<@anonymous:1864> */
obj_t BGl_z62zc3z04anonymousza31864ze3ze5zz__objectz00(obj_t BgL_envz00_5464)
{
{ /* Llib/object.scm 215 */
return 
BBOOL(((bool_t)0));} 

}



/* &lambda1863 */
obj_t BGl_z62lambda1863z62zz__objectz00(obj_t BgL_envz00_5465, obj_t BgL_oz00_5466, obj_t BgL_vz00_5467)
{
{ /* Llib/object.scm 215 */
{ /* Llib/object.scm 215 */
BgL_z62exceptionz62_bglt BgL_oz00_6781;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5466, BGl_z62exceptionz62zz__objectz00))
{ /* Llib/object.scm 215 */
BgL_oz00_6781 = 
((BgL_z62exceptionz62_bglt)BgL_oz00_5466); }  else 
{ 
obj_t BgL_auxz00_11352;
BgL_auxz00_11352 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)7802)), BGl_string4255z00zz__objectz00, BGl_string4070z00zz__objectz00, BgL_oz00_5466); 
FAILURE(BgL_auxz00_11352,BFALSE,BFALSE);} 
return 
((((BgL_z62exceptionz62_bglt)COBJECT(BgL_oz00_6781))->BgL_locationz00)=((obj_t)BgL_vz00_5467),BUNSPEC);} } 

}



/* &lambda1862 */
obj_t BGl_z62lambda1862z62zz__objectz00(obj_t BgL_envz00_5468, obj_t BgL_oz00_5469)
{
{ /* Llib/object.scm 215 */
{ /* Llib/object.scm 215 */
BgL_z62exceptionz62_bglt BgL_oz00_6782;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5469, BGl_z62exceptionz62zz__objectz00))
{ /* Llib/object.scm 215 */
BgL_oz00_6782 = 
((BgL_z62exceptionz62_bglt)BgL_oz00_5469); }  else 
{ 
obj_t BgL_auxz00_11360;
BgL_auxz00_11360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)7802)), BGl_string4256z00zz__objectz00, BGl_string4070z00zz__objectz00, BgL_oz00_5469); 
FAILURE(BgL_auxz00_11360,BFALSE,BFALSE);} 
return 
(((BgL_z62exceptionz62_bglt)COBJECT(BgL_oz00_6782))->BgL_locationz00);} } 

}



/* &<@anonymous:1856> */
obj_t BGl_z62zc3z04anonymousza31856ze3ze5zz__objectz00(obj_t BgL_envz00_5470)
{
{ /* Llib/object.scm 215 */
return 
BBOOL(((bool_t)0));} 

}



/* &lambda1855 */
obj_t BGl_z62lambda1855z62zz__objectz00(obj_t BgL_envz00_5471, obj_t BgL_oz00_5472, obj_t BgL_vz00_5473)
{
{ /* Llib/object.scm 215 */
{ /* Llib/object.scm 215 */
BgL_z62exceptionz62_bglt BgL_oz00_6783;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5472, BGl_z62exceptionz62zz__objectz00))
{ /* Llib/object.scm 215 */
BgL_oz00_6783 = 
((BgL_z62exceptionz62_bglt)BgL_oz00_5472); }  else 
{ 
obj_t BgL_auxz00_11369;
BgL_auxz00_11369 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)7802)), BGl_string4257z00zz__objectz00, BGl_string4070z00zz__objectz00, BgL_oz00_5472); 
FAILURE(BgL_auxz00_11369,BFALSE,BFALSE);} 
return 
((((BgL_z62exceptionz62_bglt)COBJECT(BgL_oz00_6783))->BgL_fnamez00)=((obj_t)BgL_vz00_5473),BUNSPEC);} } 

}



/* &lambda1854 */
obj_t BGl_z62lambda1854z62zz__objectz00(obj_t BgL_envz00_5474, obj_t BgL_oz00_5475)
{
{ /* Llib/object.scm 215 */
{ /* Llib/object.scm 215 */
BgL_z62exceptionz62_bglt BgL_oz00_6784;
if(
BGl_isazf3zf3zz__objectz00(BgL_oz00_5475, BGl_z62exceptionz62zz__objectz00))
{ /* Llib/object.scm 215 */
BgL_oz00_6784 = 
((BgL_z62exceptionz62_bglt)BgL_oz00_5475); }  else 
{ 
obj_t BgL_auxz00_11377;
BgL_auxz00_11377 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)7802)), BGl_string4258z00zz__objectz00, BGl_string4070z00zz__objectz00, BgL_oz00_5475); 
FAILURE(BgL_auxz00_11377,BFALSE,BFALSE);} 
return 
(((BgL_z62exceptionz62_bglt)COBJECT(BgL_oz00_6784))->BgL_fnamez00);} } 

}



/* &<@anonymous:1833> */
obj_t BGl_z62zc3z04anonymousza31833ze3ze5zz__objectz00(obj_t BgL_envz00_5476, obj_t BgL_new1017z00_5477)
{
{ /* Llib/object.scm 213 */
{ 
BgL_z62conditionz62_bglt BgL_auxz00_11382;
{ /* Llib/object.scm 213 */
BgL_z62conditionz62_bglt BgL_new1017z00_6785;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1017z00_5477, BGl_z62conditionz62zz__objectz00))
{ /* Llib/object.scm 213 */
BgL_new1017z00_6785 = 
((BgL_z62conditionz62_bglt)BgL_new1017z00_5477); }  else 
{ 
obj_t BgL_auxz00_11386;
BgL_auxz00_11386 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)7772)), BGl_string4259z00zz__objectz00, BGl_string4050z00zz__objectz00, BgL_new1017z00_5477); 
FAILURE(BgL_auxz00_11386,BFALSE,BFALSE);} 
BgL_auxz00_11382 = BgL_new1017z00_6785; } 
return 
((obj_t)BgL_auxz00_11382);} } 

}



/* &lambda1831 */
BgL_z62conditionz62_bglt BGl_z62lambda1831z62zz__objectz00(obj_t BgL_envz00_5478)
{
{ /* Llib/object.scm 213 */
{ /* Llib/object.scm 213 */
BgL_z62conditionz62_bglt BgL_new1016z00_6786;
BgL_new1016z00_6786 = 
((BgL_z62conditionz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62conditionz62_bgl) ))); 
{ /* Llib/object.scm 213 */
long BgL_arg1832z00_6787;
{ /* Llib/object.scm 213 */
long BgL_res2831z00_6788;
BgL_res2831z00_6788 = 
BGL_CLASS_INDEX(BGl_z62conditionz62zz__objectz00); 
BgL_arg1832z00_6787 = BgL_res2831z00_6788; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1016z00_6786), BgL_arg1832z00_6787); } 
return BgL_new1016z00_6786;} } 

}



/* &lambda1829 */
BgL_z62conditionz62_bglt BGl_z62lambda1829z62zz__objectz00(obj_t BgL_envz00_5479)
{
{ /* Llib/object.scm 213 */
{ /* Llib/object.scm 213 */
BgL_z62conditionz62_bglt BgL_new1229z00_6789;
{ /* Llib/object.scm 213 */
BgL_z62conditionz62_bglt BgL_new1228z00_6790;
BgL_new1228z00_6790 = 
((BgL_z62conditionz62_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_z62conditionz62_bgl) ))); 
{ /* Llib/object.scm 213 */
long BgL_arg1830z00_6791;
{ /* Llib/object.scm 213 */
long BgL_res2830z00_6792;
BgL_res2830z00_6792 = 
BGL_CLASS_INDEX(BGl_z62conditionz62zz__objectz00); 
BgL_arg1830z00_6791 = BgL_res2830z00_6792; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1228z00_6790), BgL_arg1830z00_6791); } 
BgL_new1229z00_6789 = BgL_new1228z00_6790; } 
return BgL_new1229z00_6789;} } 

}



/* &<@anonymous:1823> */
obj_t BGl_z62zc3z04anonymousza31823ze3ze5zz__objectz00(obj_t BgL_envz00_5480, obj_t BgL_new1014z00_5481)
{
{ /* Llib/object.scm 212 */
{ 
BgL_objectz00_bglt BgL_auxz00_11399;
{ /* Llib/object.scm 212 */
BgL_objectz00_bglt BgL_new1014z00_6793;
if(
BGl_isazf3zf3zz__objectz00(BgL_new1014z00_5481, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 212 */
BgL_new1014z00_6793 = 
((BgL_objectz00_bglt)BgL_new1014z00_5481); }  else 
{ 
obj_t BgL_auxz00_11403;
BgL_auxz00_11403 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)7744)), BGl_string4260z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_new1014z00_5481); 
FAILURE(BgL_auxz00_11403,BFALSE,BFALSE);} 
BgL_auxz00_11399 = BgL_new1014z00_6793; } 
return 
((obj_t)BgL_auxz00_11399);} } 

}



/* &lambda1821 */
BgL_objectz00_bglt BGl_z62lambda1821z62zz__objectz00(obj_t BgL_envz00_5482)
{
{ /* Llib/object.scm 212 */
{ /* Llib/object.scm 212 */
BgL_objectz00_bglt BgL_new1013z00_6794;
BgL_new1013z00_6794 = 
((BgL_objectz00_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_objectz00_bgl) ))); 
{ /* Llib/object.scm 212 */
long BgL_arg1822z00_6795;
{ /* Llib/object.scm 212 */
long BgL_res2829z00_6796;
BgL_res2829z00_6796 = 
BGL_CLASS_INDEX(BGl_objectz00zz__objectz00); 
BgL_arg1822z00_6795 = BgL_res2829z00_6796; } 
BGL_OBJECT_CLASS_NUM_SET(BgL_new1013z00_6794, BgL_arg1822z00_6795); } 
return BgL_new1013z00_6794;} } 

}



/* &lambda1819 */
BgL_objectz00_bglt BGl_z62lambda1819z62zz__objectz00(obj_t BgL_envz00_5483)
{
{ /* Llib/object.scm 212 */
{ /* Llib/object.scm 212 */
BgL_objectz00_bglt BgL_new1227z00_6797;
{ /* Llib/object.scm 212 */
BgL_objectz00_bglt BgL_new1226z00_6798;
BgL_new1226z00_6798 = 
((BgL_objectz00_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_objectz00_bgl) ))); 
{ /* Llib/object.scm 212 */
long BgL_arg1820z00_6799;
{ /* Llib/object.scm 212 */
long BgL_res2828z00_6800;
BgL_res2828z00_6800 = 
BGL_CLASS_INDEX(BGl_objectz00zz__objectz00); 
BgL_arg1820z00_6799 = BgL_res2828z00_6800; } 
BGL_OBJECT_CLASS_NUM_SET(BgL_new1226z00_6798, BgL_arg1820z00_6799); } 
BgL_new1227z00_6797 = BgL_new1226z00_6798; } 
return BgL_new1227z00_6797;} } 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__objectz00()
{
{ /* Llib/object.scm 17 */
{ /* Llib/object.scm 17 */
obj_t BgL_classzd2minzd2_4281;
BgL_classzd2minzd2_4281 = BGl_objectz00zz__objectz00; 
{ /* Llib/object.scm 1065 */
obj_t BgL_top5319z00_11415;
BgL_top5319z00_11415 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(bigloo_generic_mutex); 
BGL_EXITD_PUSH_PROTECT(BgL_top5319z00_11415, bigloo_generic_mutex); BUNSPEC; 
{ /* Llib/object.scm 1065 */
obj_t BgL_tmp5318z00_11414;
BgL_tmp5318z00_11414 = 
BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00(BGl_objectzd2displayzd2envz00zz__objectz00, BGl_proc4261z00zz__objectz00, BGl_string4262z00zz__objectz00); 
BGL_EXITD_POP_PROTECT(BgL_top5319z00_11415); BUNSPEC; 
BGL_MUTEX_UNLOCK(bigloo_generic_mutex); BgL_tmp5318z00_11414; } } } 
{ /* Llib/object.scm 17 */
obj_t BgL_classzd2minzd2_4288;
BgL_classzd2minzd2_4288 = BGl_objectz00zz__objectz00; 
{ /* Llib/object.scm 1065 */
obj_t BgL_top5321z00_11423;
BgL_top5321z00_11423 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(bigloo_generic_mutex); 
BGL_EXITD_PUSH_PROTECT(BgL_top5321z00_11423, bigloo_generic_mutex); BUNSPEC; 
{ /* Llib/object.scm 1065 */
obj_t BgL_tmp5320z00_11422;
BgL_tmp5320z00_11422 = 
BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00(BGl_objectzd2writezd2envz00zz__objectz00, BGl_proc4263z00zz__objectz00, BGl_string4264z00zz__objectz00); 
BGL_EXITD_POP_PROTECT(BgL_top5321z00_11423); BUNSPEC; 
BGL_MUTEX_UNLOCK(bigloo_generic_mutex); BgL_tmp5320z00_11422; } } } 
{ /* Llib/object.scm 17 */
obj_t BgL_classzd2minzd2_4289;
BgL_classzd2minzd2_4289 = BGl_objectz00zz__objectz00; 
{ /* Llib/object.scm 1065 */
obj_t BgL_top5323z00_11431;
BgL_top5323z00_11431 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(bigloo_generic_mutex); 
BGL_EXITD_PUSH_PROTECT(BgL_top5323z00_11431, bigloo_generic_mutex); BUNSPEC; 
{ /* Llib/object.scm 1065 */
obj_t BgL_tmp5322z00_11430;
BgL_tmp5322z00_11430 = 
BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00(BGl_objectzd2hashnumberzd2envz00zz__objectz00, BGl_proc4265z00zz__objectz00, BGl_string4266z00zz__objectz00); 
BGL_EXITD_POP_PROTECT(BgL_top5323z00_11431); BUNSPEC; 
BGL_MUTEX_UNLOCK(bigloo_generic_mutex); BgL_tmp5322z00_11430; } } } 
{ /* Llib/object.scm 17 */
obj_t BgL_classzd2minzd2_4350;
BgL_classzd2minzd2_4350 = BGl_objectz00zz__objectz00; 
{ /* Llib/object.scm 1065 */
obj_t BgL_top5325z00_11439;
BgL_top5325z00_11439 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(bigloo_generic_mutex); 
BGL_EXITD_PUSH_PROTECT(BgL_top5325z00_11439, bigloo_generic_mutex); BUNSPEC; 
{ /* Llib/object.scm 1065 */
obj_t BgL_tmp5324z00_11438;
BgL_tmp5324z00_11438 = 
BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00(BGl_objectzd2printzd2envz00zz__objectz00, BGl_proc4267z00zz__objectz00, BGl_string4268z00zz__objectz00); 
BGL_EXITD_POP_PROTECT(BgL_top5325z00_11439); BUNSPEC; 
BGL_MUTEX_UNLOCK(bigloo_generic_mutex); BgL_tmp5324z00_11438; } } } 
{ /* Llib/object.scm 17 */
obj_t BgL_classzd2minzd2_4394;
BgL_classzd2minzd2_4394 = BGl_objectz00zz__objectz00; 
{ /* Llib/object.scm 1065 */
obj_t BgL_top5327z00_11447;
BgL_top5327z00_11447 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(bigloo_generic_mutex); 
BGL_EXITD_PUSH_PROTECT(BgL_top5327z00_11447, bigloo_generic_mutex); BUNSPEC; 
{ /* Llib/object.scm 1065 */
obj_t BgL_tmp5326z00_11446;
BgL_tmp5326z00_11446 = 
BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00(BGl_objectzd2equalzf3zd2envzf3zz__objectz00, BGl_proc4269z00zz__objectz00, BGl_string4270z00zz__objectz00); 
BGL_EXITD_POP_PROTECT(BgL_top5327z00_11447); BUNSPEC; 
BGL_MUTEX_UNLOCK(bigloo_generic_mutex); BgL_tmp5326z00_11446; } } } 
{ /* Llib/object.scm 1065 */
obj_t BgL_top5329z00_11455;
BgL_top5329z00_11455 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(bigloo_generic_mutex); 
BGL_EXITD_PUSH_PROTECT(BgL_top5329z00_11455, bigloo_generic_mutex); BUNSPEC; 
{ /* Llib/object.scm 1065 */
obj_t BgL_tmp5328z00_11454;
BgL_tmp5328z00_11454 = 
BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00(BGl_exceptionzd2notifyzd2envz00zz__objectz00, BGl_proc4271z00zz__objectz00, BGl_string4272z00zz__objectz00); 
BGL_EXITD_POP_PROTECT(BgL_top5329z00_11455); BUNSPEC; 
BGL_MUTEX_UNLOCK(bigloo_generic_mutex); 
return BgL_tmp5328z00_11454;} } } 

}



/* &exception-notify1400 */
obj_t BGl_z62exceptionzd2notify1400zb0zz__objectz00(obj_t BgL_envz00_5496, obj_t BgL_excz00_5497)
{
{ /* Llib/object.scm 1383 */
{ /* Llib/object.scm 1384 */
obj_t BgL_portz00_6801;
{ /* Llib/object.scm 1384 */
obj_t BgL_res2914z00_6802;
{ /* Llib/object.scm 1384 */
obj_t BgL_tmpz00_11462;
BgL_tmpz00_11462 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2914z00_6802 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_11462); } 
BgL_portz00_6801 = BgL_res2914z00_6802; } 
bgl_display_string(BGl_string4273z00zz__objectz00, BgL_portz00_6801); 
BGl_writezd2circlezd2zz__pp_circlez00(BgL_excz00_5497, BgL_portz00_6801); 
if(
CBOOL(
BGl_currentzd2threadzd2zz__threadz00()))
{ /* Llib/object.scm 1387 */
bgl_display_string(BGl_string4274z00zz__objectz00, BgL_portz00_6801); 
bgl_display_obj(
BGl_currentzd2threadzd2zz__threadz00(), BgL_portz00_6801); 
bgl_display_string(BGl_string4275z00zz__objectz00, BgL_portz00_6801); }  else 
{ /* Llib/object.scm 1387 */BFALSE; } 
bgl_display_char(((unsigned char)10), BgL_portz00_6801); 
{ /* Llib/object.scm 1392 */
obj_t BgL_stackz00_6803;
if(
BGl_isazf3zf3zz__objectz00(BgL_excz00_5497, BGl_z62exceptionz62zz__objectz00))
{ /* Llib/object.scm 1394 */
obj_t BgL__ortest_1224z00_6804;
BgL__ortest_1224z00_6804 = 
(((BgL_z62exceptionz62_bglt)COBJECT(
((BgL_z62exceptionz62_bglt)BgL_excz00_5497)))->BgL_stackz00); 
if(
CBOOL(BgL__ortest_1224z00_6804))
{ /* Llib/object.scm 1394 */
BgL_stackz00_6803 = BgL__ortest_1224z00_6804; }  else 
{ /* Llib/object.scm 1394 */

{ /* Llib/object.scm 1394 */

BgL_stackz00_6803 = 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE); } } }  else 
{ /* Llib/object.scm 1395 */

{ /* Llib/object.scm 1395 */

BgL_stackz00_6803 = 
BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE); } } 
{ /* Llib/object.scm 1392 */

return 
BGl_displayzd2tracezd2stackz00zz__errorz00(BgL_stackz00_6803, BgL_portz00_6801, 
BINT(((long)1)));} } } } 

}



/* &object-equal?1398 */
obj_t BGl_z62objectzd2equalzf31398z43zz__objectz00(obj_t BgL_envz00_5498, obj_t BgL_obj1z00_5499, obj_t BgL_obj2z00_5500)
{
{ /* Llib/object.scm 1363 */
{ /* Llib/object.scm 1367 */
bool_t BgL_tmpz00_11485;
{ /* Llib/object.scm 1367 */
BgL_objectz00_bglt BgL_obj1z00_6805;BgL_objectz00_bglt BgL_obj2z00_6806;
if(
BGl_isazf3zf3zz__objectz00(BgL_obj1z00_5499, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1367 */
BgL_obj1z00_6805 = 
((BgL_objectz00_bglt)BgL_obj1z00_5499); }  else 
{ 
obj_t BgL_auxz00_11489;
BgL_auxz00_11489 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)60125)), BGl_string4284z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_obj1z00_5499); 
FAILURE(BgL_auxz00_11489,BFALSE,BFALSE);} 
if(
BGl_isazf3zf3zz__objectz00(BgL_obj2z00_5500, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1367 */
BgL_obj2z00_6806 = 
((BgL_objectz00_bglt)BgL_obj2z00_5500); }  else 
{ 
obj_t BgL_auxz00_11496;
BgL_auxz00_11496 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)60125)), BGl_string4284z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_obj2z00_5500); 
FAILURE(BgL_auxz00_11496,BFALSE,BFALSE);} 
{ /* Llib/object.scm 1367 */
obj_t BgL_class1z00_6807;obj_t BgL_class2z00_6808;
{ /* Llib/object.scm 838 */
long BgL_arg1547z00_6809;
{ /* Llib/object.scm 838 */
long BgL_arg1551z00_6810;
{ /* Llib/object.scm 838 */
long BgL_res2905z00_6811;
BgL_res2905z00_6811 = 
BGL_OBJECT_CLASS_NUM(BgL_obj1z00_6805); 
BgL_arg1551z00_6810 = BgL_res2905z00_6811; } 
BgL_arg1547z00_6809 = 
(BgL_arg1551z00_6810-OBJECT_TYPE); } 
{ /* Llib/object.scm 837 */
obj_t BgL_vectorz00_6812;
{ /* Llib/object.scm 837 */
obj_t BgL_aux3740z00_6813;
BgL_aux3740z00_6813 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3740z00_6813))
{ /* Llib/object.scm 837 */
BgL_vectorz00_6812 = BgL_aux3740z00_6813; }  else 
{ 
obj_t BgL_auxz00_11504;
BgL_auxz00_11504 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)36789)), BGl_string4270z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3740z00_6813); 
FAILURE(BgL_auxz00_11504,BFALSE,BFALSE);} } 
BgL_class1z00_6807 = 
VECTOR_REF(BgL_vectorz00_6812,BgL_arg1547z00_6809); } } 
{ /* Llib/object.scm 838 */
long BgL_arg1547z00_6814;
{ /* Llib/object.scm 838 */
long BgL_arg1551z00_6815;
{ /* Llib/object.scm 838 */
long BgL_res2907z00_6816;
BgL_res2907z00_6816 = 
BGL_OBJECT_CLASS_NUM(BgL_obj2z00_6806); 
BgL_arg1551z00_6815 = BgL_res2907z00_6816; } 
BgL_arg1547z00_6814 = 
(BgL_arg1551z00_6815-OBJECT_TYPE); } 
{ /* Llib/object.scm 837 */
obj_t BgL_vectorz00_6817;
{ /* Llib/object.scm 837 */
obj_t BgL_aux3742z00_6818;
BgL_aux3742z00_6818 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3742z00_6818))
{ /* Llib/object.scm 837 */
BgL_vectorz00_6817 = BgL_aux3742z00_6818; }  else 
{ 
obj_t BgL_auxz00_11513;
BgL_auxz00_11513 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)36789)), BGl_string4270z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3742z00_6818); 
FAILURE(BgL_auxz00_11513,BFALSE,BFALSE);} } 
BgL_class2z00_6808 = 
VECTOR_REF(BgL_vectorz00_6817,BgL_arg1547z00_6814); } } 
if(
(BgL_class1z00_6807==BgL_class2z00_6808))
{ /* Llib/object.scm 1370 */
obj_t BgL_fieldsz00_6819;
{ /* Llib/object.scm 1370 */
obj_t BgL_res2909z00_6820;
{ /* Llib/object.scm 1370 */
obj_t BgL_classz00_6821;
if(
BGL_CLASSP(BgL_class1z00_6807))
{ /* Llib/object.scm 1370 */
BgL_classz00_6821 = BgL_class1z00_6807; }  else 
{ 
obj_t BgL_auxz00_11522;
BgL_auxz00_11522 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)60258)), BGl_string4270z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_class1z00_6807); 
FAILURE(BgL_auxz00_11522,BFALSE,BFALSE);} 
BgL_res2909z00_6820 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_6821); } 
BgL_fieldsz00_6819 = BgL_res2909z00_6820; } 
{ /* Llib/object.scm 1371 */
long BgL_g1222z00_6822;
BgL_g1222z00_6822 = 
(
VECTOR_LENGTH(BgL_fieldsz00_6819)-((long)1)); 
{ 
long BgL_iz00_6824;
BgL_iz00_6824 = BgL_g1222z00_6822; 
BgL_loopz00_6823:
if(
(BgL_iz00_6824==((long)-1)))
{ /* Llib/object.scm 1373 */
BgL_tmpz00_11485 = ((bool_t)1)
; }  else 
{ /* Llib/object.scm 1375 */
bool_t BgL_test5340z00_11531;
{ /* Llib/object.scm 1375 */
obj_t BgL_arg2179z00_6825;
BgL_arg2179z00_6825 = 
VECTOR_REF(BgL_fieldsz00_6819,BgL_iz00_6824); 
{ /* Llib/object.scm 1365 */
obj_t BgL_getzd2valuezd2_6826;
{ /* Llib/object.scm 1365 */
obj_t BgL_res2912z00_6827;
{ /* Llib/object.scm 1365 */
obj_t BgL_fieldz00_6828;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_arg2179z00_6825))
{ /* Llib/object.scm 1365 */
BgL_fieldz00_6828 = BgL_arg2179z00_6825; }  else 
{ 
obj_t BgL_auxz00_11535;
BgL_auxz00_11535 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)60066)), BGl_string3839z00zz__objectz00, BGl_string3862z00zz__objectz00, BgL_arg2179z00_6825); 
FAILURE(BgL_auxz00_11535,BFALSE,BFALSE);} 
{ /* Llib/object.scm 577 */
obj_t BgL_vectorz00_6829;
BgL_vectorz00_6829 = BgL_fieldz00_6828; 
{ /* Llib/object.scm 577 */
obj_t BgL_aux3748z00_6830;
BgL_aux3748z00_6830 = 
VECTOR_REF(BgL_vectorz00_6829,((long)1)); 
if(
PROCEDUREP(BgL_aux3748z00_6830))
{ /* Llib/object.scm 577 */
BgL_res2912z00_6827 = BgL_aux3748z00_6830; }  else 
{ 
obj_t BgL_auxz00_11542;
BgL_auxz00_11542 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)24630)), BGl_string3839z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3748z00_6830); 
FAILURE(BgL_auxz00_11542,BFALSE,BFALSE);} } } } 
BgL_getzd2valuezd2_6826 = BgL_res2912z00_6827; } 
{ /* Llib/object.scm 1366 */
obj_t BgL_arg2182z00_6831;obj_t BgL_arg2183z00_6832;
if(
PROCEDURE_CORRECT_ARITYP(BgL_getzd2valuezd2_6826, ((long)1)))
{ /* Llib/object.scm 1366 */
BgL_arg2182z00_6831 = 
PROCEDURE_ENTRY(BgL_getzd2valuezd2_6826)(BgL_getzd2valuezd2_6826, 
((obj_t)BgL_obj1z00_6805), BEOA); }  else 
{ /* Llib/object.scm 1366 */
FAILURE(BGl_string3998z00zz__objectz00,BGl_list4276z00zz__objectz00,BgL_getzd2valuezd2_6826);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_getzd2valuezd2_6826, ((long)1)))
{ /* Llib/object.scm 1366 */
BgL_arg2183z00_6832 = 
PROCEDURE_ENTRY(BgL_getzd2valuezd2_6826)(BgL_getzd2valuezd2_6826, 
((obj_t)BgL_obj2z00_6806), BEOA); }  else 
{ /* Llib/object.scm 1366 */
FAILURE(BGl_string3998z00zz__objectz00,BGl_list4281z00zz__objectz00,BgL_getzd2valuezd2_6826);} 
BgL_test5340z00_11531 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_arg2182z00_6831, BgL_arg2183z00_6832); } } } 
if(BgL_test5340z00_11531)
{ 
long BgL_iz00_11563;
BgL_iz00_11563 = 
(BgL_iz00_6824-((long)1)); 
BgL_iz00_6824 = BgL_iz00_11563; 
goto BgL_loopz00_6823;}  else 
{ /* Llib/object.scm 1375 */
BgL_tmpz00_11485 = ((bool_t)0)
; } } } } }  else 
{ /* Llib/object.scm 1369 */
BgL_tmpz00_11485 = ((bool_t)0)
; } } } 
return 
BBOOL(BgL_tmpz00_11485);} } 

}



/* &object-print1394 */
obj_t BGl_z62objectzd2print1394zb0zz__objectz00(obj_t BgL_envz00_5501, obj_t BgL_objz00_5502, obj_t BgL_portz00_5503, obj_t BgL_printzd2slotzd2_5504)
{
{ /* Llib/object.scm 1333 */
{ /* Llib/object.scm 1336 */
BgL_objectz00_bglt BgL_objz00_6833;obj_t BgL_portz00_6834;obj_t BgL_printzd2slotzd2_6835;
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_5502, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1336 */
BgL_objz00_6833 = 
((BgL_objectz00_bglt)BgL_objz00_5502); }  else 
{ 
obj_t BgL_auxz00_11569;
BgL_auxz00_11569 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)59049)), BGl_string4298z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_5502); 
FAILURE(BgL_auxz00_11569,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_portz00_5503))
{ /* Llib/object.scm 1336 */
BgL_portz00_6834 = BgL_portz00_5503; }  else 
{ 
obj_t BgL_auxz00_11575;
BgL_auxz00_11575 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)59049)), BGl_string4298z00zz__objectz00, BGl_string4299z00zz__objectz00, BgL_portz00_5503); 
FAILURE(BgL_auxz00_11575,BFALSE,BFALSE);} 
if(
PROCEDUREP(BgL_printzd2slotzd2_5504))
{ /* Llib/object.scm 1336 */
BgL_printzd2slotzd2_6835 = BgL_printzd2slotzd2_5504; }  else 
{ 
obj_t BgL_auxz00_11581;
BgL_auxz00_11581 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)59049)), BGl_string4298z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_printzd2slotzd2_5504); 
FAILURE(BgL_auxz00_11581,BFALSE,BFALSE);} 
{ 
obj_t BgL_fieldz00_6837;
{ /* Llib/object.scm 1345 */
obj_t BgL_classz00_6849;
{ /* Llib/object.scm 838 */
long BgL_arg1547z00_6850;
{ /* Llib/object.scm 838 */
long BgL_arg1551z00_6851;
{ /* Llib/object.scm 838 */
long BgL_res2894z00_6852;
BgL_res2894z00_6852 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_6833); 
BgL_arg1551z00_6851 = BgL_res2894z00_6852; } 
BgL_arg1547z00_6850 = 
(BgL_arg1551z00_6851-OBJECT_TYPE); } 
{ /* Llib/object.scm 837 */
obj_t BgL_vectorz00_6853;
{ /* Llib/object.scm 837 */
obj_t BgL_aux3770z00_6854;
BgL_aux3770z00_6854 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3770z00_6854))
{ /* Llib/object.scm 837 */
BgL_vectorz00_6853 = BgL_aux3770z00_6854; }  else 
{ 
obj_t BgL_auxz00_11589;
BgL_auxz00_11589 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)36789)), BGl_string4268z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3770z00_6854); 
FAILURE(BgL_auxz00_11589,BFALSE,BFALSE);} } 
BgL_classz00_6849 = 
VECTOR_REF(BgL_vectorz00_6853,BgL_arg1547z00_6850); } } 
{ /* Llib/object.scm 1345 */
obj_t BgL_classzd2namezd2_6855;
{ /* Llib/object.scm 1346 */
obj_t BgL_res2896z00_6856;
{ /* Llib/object.scm 1346 */
obj_t BgL_classz00_6857;
if(
BGL_CLASSP(BgL_classz00_6849))
{ /* Llib/object.scm 1346 */
BgL_classz00_6857 = BgL_classz00_6849; }  else 
{ 
obj_t BgL_auxz00_11596;
BgL_auxz00_11596 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)59350)), BGl_string4268z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_6849); 
FAILURE(BgL_auxz00_11596,BFALSE,BFALSE);} 
BgL_res2896z00_6856 = 
BGL_CLASS_NAME(BgL_classz00_6857); } 
BgL_classzd2namezd2_6855 = BgL_res2896z00_6856; } 
{ /* Llib/object.scm 1346 */
obj_t BgL_fieldsz00_6858;
{ /* Llib/object.scm 1347 */
obj_t BgL_res2897z00_6859;
{ /* Llib/object.scm 1347 */
obj_t BgL_classz00_6860;
if(
BGL_CLASSP(BgL_classz00_6849))
{ /* Llib/object.scm 1347 */
BgL_classz00_6860 = BgL_classz00_6849; }  else 
{ 
obj_t BgL_auxz00_11603;
BgL_auxz00_11603 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)59387)), BGl_string4268z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_6849); 
FAILURE(BgL_auxz00_11603,BFALSE,BFALSE);} 
BgL_res2897z00_6859 = 
BGL_CLASS_ALL_FIELDS(BgL_classz00_6860); } 
BgL_fieldsz00_6858 = BgL_res2897z00_6859; } 
{ /* Llib/object.scm 1348 */

bgl_display_string(BGl_string4296z00zz__objectz00, BgL_portz00_6834); 
bgl_display_obj(BgL_classzd2namezd2_6855, BgL_portz00_6834); 
{ /* Llib/object.scm 1351 */
bool_t BgL_test5351z00_11610;
{ /* Llib/object.scm 1351 */
bool_t BgL_res2901z00_6861;
{ /* Llib/object.scm 1233 */
obj_t BgL_klassz00_6862;
{ /* Llib/object.scm 838 */
long BgL_arg1547z00_6863;
{ /* Llib/object.scm 838 */
long BgL_arg1551z00_6864;
{ /* Llib/object.scm 838 */
long BgL_res2898z00_6865;
BgL_res2898z00_6865 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_6833); 
BgL_arg1551z00_6864 = BgL_res2898z00_6865; } 
BgL_arg1547z00_6863 = 
(BgL_arg1551z00_6864-OBJECT_TYPE); } 
{ /* Llib/object.scm 837 */
obj_t BgL_vectorz00_6866;
{ /* Llib/object.scm 837 */
obj_t BgL_aux3776z00_6867;
BgL_aux3776z00_6867 = BGl_za2classesza2z00zz__objectz00; 
if(
VECTORP(BgL_aux3776z00_6867))
{ /* Llib/object.scm 837 */
BgL_vectorz00_6866 = BgL_aux3776z00_6867; }  else 
{ 
obj_t BgL_auxz00_11615;
BgL_auxz00_11615 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)36789)), BGl_string4268z00zz__objectz00, BGl_string3841z00zz__objectz00, BgL_aux3776z00_6867); 
FAILURE(BgL_auxz00_11615,BFALSE,BFALSE);} } 
BgL_klassz00_6862 = 
VECTOR_REF(BgL_vectorz00_6866,BgL_arg1547z00_6863); } } 
{ /* Llib/object.scm 1234 */
obj_t BgL_arg1780z00_6868;
{ /* Llib/object.scm 1234 */
obj_t BgL_classz00_6869;
if(
BGL_CLASSP(BgL_klassz00_6862))
{ /* Llib/object.scm 1234 */
BgL_classz00_6869 = BgL_klassz00_6862; }  else 
{ 
obj_t BgL_auxz00_11622;
BgL_auxz00_11622 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)54363)), BGl_string4268z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_klassz00_6862); 
FAILURE(BgL_auxz00_11622,BFALSE,BFALSE);} 
{ /* Llib/object.scm 716 */
bool_t BgL_test5354z00_11626;
{ /* Llib/object.scm 716 */
bool_t BgL_res2900z00_6870;
BgL_res2900z00_6870 = 
BGL_CLASSP(BgL_classz00_6869); 
BgL_test5354z00_11626 = BgL_res2900z00_6870; } 
if(BgL_test5354z00_11626)
{ /* Llib/object.scm 717 */
obj_t BgL__ortest_1220z00_6871;
BgL__ortest_1220z00_6871 = 
BGL_CLASS_NIL(BgL_classz00_6869); 
if(
CBOOL(BgL__ortest_1220z00_6871))
{ /* Llib/object.scm 717 */
BgL_arg1780z00_6868 = BgL__ortest_1220z00_6871; }  else 
{ /* Llib/object.scm 717 */
BgL_arg1780z00_6868 = 
BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_6869); } }  else 
{ /* Llib/object.scm 716 */
BgL_arg1780z00_6868 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3917z00zz__objectz00, BGl_string3842z00zz__objectz00, BgL_classz00_6869); } } } 
BgL_res2901z00_6861 = 
(BgL_arg1780z00_6868==
((obj_t)BgL_objz00_6833)); } } 
BgL_test5351z00_11610 = BgL_res2901z00_6861; } 
if(BgL_test5351z00_11610)
{ /* Llib/object.scm 1351 */
return 
bgl_display_string(BGl_string4297z00zz__objectz00, BgL_portz00_6834);}  else 
{ 
long BgL_iz00_6873;
BgL_iz00_6873 = ((long)0); 
BgL_loopz00_6872:
if(
(BgL_iz00_6873==
VECTOR_LENGTH(BgL_fieldsz00_6858)))
{ /* Llib/object.scm 1354 */
return 
bgl_display_char(((unsigned char)'|'), BgL_portz00_6834);}  else 
{ /* Llib/object.scm 1354 */
BgL_fieldz00_6837 = 
VECTOR_REF(BgL_fieldsz00_6858,BgL_iz00_6873); 
{ /* Llib/object.scm 1336 */
obj_t BgL_namez00_6838;
{ /* Llib/object.scm 1336 */
obj_t BgL_res2892z00_6839;
{ /* Llib/object.scm 1336 */
obj_t BgL_fieldz00_6840;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_6837))
{ /* Llib/object.scm 1336 */
BgL_fieldz00_6840 = BgL_fieldz00_6837; }  else 
{ 
obj_t BgL_auxz00_11642;
BgL_auxz00_11642 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)59080)), BGl_string4285z00zz__objectz00, BGl_string3862z00zz__objectz00, BgL_fieldz00_6837); 
FAILURE(BgL_auxz00_11642,BFALSE,BFALSE);} 
{ /* Llib/object.scm 565 */
obj_t BgL_vectorz00_6841;
BgL_vectorz00_6841 = BgL_fieldz00_6840; 
{ /* Llib/object.scm 565 */
obj_t BgL_aux3760z00_6842;
BgL_aux3760z00_6842 = 
VECTOR_REF(BgL_vectorz00_6841,((long)0)); 
if(
SYMBOLP(BgL_aux3760z00_6842))
{ /* Llib/object.scm 565 */
BgL_res2892z00_6839 = BgL_aux3760z00_6842; }  else 
{ 
obj_t BgL_auxz00_11649;
BgL_auxz00_11649 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)24037)), BGl_string4285z00zz__objectz00, BGl_string3844z00zz__objectz00, BgL_aux3760z00_6842); 
FAILURE(BgL_auxz00_11649,BFALSE,BFALSE);} } } } 
BgL_namez00_6838 = BgL_res2892z00_6839; } 
{ /* Llib/object.scm 1336 */
obj_t BgL_getzd2valuezd2_6843;
{ /* Llib/object.scm 1337 */
obj_t BgL_res2893z00_6844;
{ /* Llib/object.scm 1337 */
obj_t BgL_fieldz00_6845;
if(
BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_6837))
{ /* Llib/object.scm 1337 */
BgL_fieldz00_6845 = BgL_fieldz00_6837; }  else 
{ 
obj_t BgL_auxz00_11655;
BgL_auxz00_11655 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)59127)), BGl_string4285z00zz__objectz00, BGl_string3862z00zz__objectz00, BgL_fieldz00_6837); 
FAILURE(BgL_auxz00_11655,BFALSE,BFALSE);} 
{ /* Llib/object.scm 577 */
obj_t BgL_vectorz00_6846;
BgL_vectorz00_6846 = BgL_fieldz00_6845; 
{ /* Llib/object.scm 577 */
obj_t BgL_aux3764z00_6847;
BgL_aux3764z00_6847 = 
VECTOR_REF(BgL_vectorz00_6846,((long)1)); 
if(
PROCEDUREP(BgL_aux3764z00_6847))
{ /* Llib/object.scm 577 */
BgL_res2893z00_6844 = BgL_aux3764z00_6847; }  else 
{ 
obj_t BgL_auxz00_11662;
BgL_auxz00_11662 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)24630)), BGl_string4285z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3764z00_6847); 
FAILURE(BgL_auxz00_11662,BFALSE,BFALSE);} } } } 
BgL_getzd2valuezd2_6843 = BgL_res2893z00_6844; } 
{ /* Llib/object.scm 1337 */

bgl_display_string(BGl_string4286z00zz__objectz00, BgL_portz00_6834); 
bgl_display_obj(BgL_namez00_6838, BgL_portz00_6834); 
bgl_display_char(((unsigned char)':'), BgL_portz00_6834); 
bgl_display_char(((unsigned char)' '), BgL_portz00_6834); 
{ /* Llib/object.scm 1342 */
obj_t BgL_arg2170z00_6848;
if(
PROCEDURE_CORRECT_ARITYP(BgL_getzd2valuezd2_6843, ((long)1)))
{ /* Llib/object.scm 1342 */
BgL_arg2170z00_6848 = 
PROCEDURE_ENTRY(BgL_getzd2valuezd2_6843)(BgL_getzd2valuezd2_6843, 
((obj_t)BgL_objz00_6833), BEOA); }  else 
{ /* Llib/object.scm 1342 */
FAILURE(BGl_string4287z00zz__objectz00,BGl_list4288z00zz__objectz00,BgL_getzd2valuezd2_6843);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_printzd2slotzd2_6835, ((long)2)))
{ /* Llib/object.scm 1342 */
PROCEDURE_ENTRY(BgL_printzd2slotzd2_6835)(BgL_printzd2slotzd2_6835, BgL_arg2170z00_6848, BgL_portz00_6834, BEOA); }  else 
{ /* Llib/object.scm 1342 */
FAILURE(BGl_string4287z00zz__objectz00,BGl_list4289z00zz__objectz00,BgL_printzd2slotzd2_6835);} } 
bgl_display_char(((unsigned char)']'), BgL_portz00_6834); } } } 
{ 
long BgL_iz00_11688;
BgL_iz00_11688 = 
(BgL_iz00_6873+((long)1)); 
BgL_iz00_6873 = BgL_iz00_11688; 
goto BgL_loopz00_6872;} } } } } } } } } } } 

}



/* &object-hashnumber1392 */
obj_t BGl_z62objectzd2hashnumber1392zb0zz__objectz00(obj_t BgL_envz00_5505, obj_t BgL_objectz00_5506)
{
{ /* Llib/object.scm 1300 */
{ /* Llib/object.scm 1301 */
long BgL_tmpz00_11690;
{ /* Llib/object.scm 1301 */
BgL_objectz00_bglt BgL_objectz00_6874;
if(
BGl_isazf3zf3zz__objectz00(BgL_objectz00_5506, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1301 */
BgL_objectz00_6874 = 
((BgL_objectz00_bglt)BgL_objectz00_5506); }  else 
{ 
obj_t BgL_auxz00_11694;
BgL_auxz00_11694 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)57547)), BGl_string4300z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objectz00_5506); 
FAILURE(BgL_auxz00_11694,BFALSE,BFALSE);} 
BgL_tmpz00_11690 = 
bgl_obj_hash_number(
((obj_t)BgL_objectz00_6874)); } 
return 
BINT(BgL_tmpz00_11690);} } 

}



/* &object-write1390 */
obj_t BGl_z62objectzd2write1390zb0zz__objectz00(obj_t BgL_envz00_5507, obj_t BgL_objz00_5508, obj_t BgL_portz00_5509)
{
{ /* Llib/object.scm 1293 */
{ /* Llib/object.scm 1294 */
BgL_objectz00_bglt BgL_objz00_6875;
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_5508, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1294 */
BgL_objz00_6875 = 
((BgL_objectz00_bglt)BgL_objz00_5508); }  else 
{ 
obj_t BgL_auxz00_11704;
BgL_auxz00_11704 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)57162)), BGl_string4301z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_5508); 
FAILURE(BgL_auxz00_11704,BFALSE,BFALSE);} 
{ /* Llib/object.scm 1294 */
obj_t BgL_portz00_6876;
if(
PAIRP(BgL_portz00_5509))
{ /* Llib/object.scm 1294 */
BgL_portz00_6876 = 
CAR(BgL_portz00_5509); }  else 
{ /* Llib/object.scm 1294 */
obj_t BgL_res2891z00_6877;
{ /* Llib/object.scm 1294 */
obj_t BgL_tmpz00_11711;
BgL_tmpz00_11711 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2891z00_6877 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_11711); } 
BgL_portz00_6876 = BgL_res2891z00_6877; } 
{ /* Llib/object.scm 1295 */
obj_t BgL_auxz00_11714;
if(
OUTPUT_PORTP(BgL_portz00_6876))
{ /* Llib/object.scm 1295 */
BgL_auxz00_11714 = BgL_portz00_6876
; }  else 
{ 
obj_t BgL_auxz00_11717;
BgL_auxz00_11717 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)57251)), BGl_string4264z00zz__objectz00, BGl_string4299z00zz__objectz00, BgL_portz00_6876); 
FAILURE(BgL_auxz00_11717,BFALSE,BFALSE);} 
return 
BGl_objectzd2printzd2zz__objectz00(BgL_objz00_6875, BgL_auxz00_11714, BGl_writezd2envzd2zz__r4_output_6_10_3z00);} } } } 

}



/* &object-display1386 */
obj_t BGl_z62objectzd2display1386zb0zz__objectz00(obj_t BgL_envz00_5510, obj_t BgL_objz00_5511, obj_t BgL_portz00_5512)
{
{ /* Llib/object.scm 1286 */
{ /* Llib/object.scm 1287 */
BgL_objectz00_bglt BgL_objz00_6878;
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_5511, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1287 */
BgL_objz00_6878 = 
((BgL_objectz00_bglt)BgL_objz00_5511); }  else 
{ 
obj_t BgL_auxz00_11725;
BgL_auxz00_11725 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)56781)), BGl_string4302z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_5511); 
FAILURE(BgL_auxz00_11725,BFALSE,BFALSE);} 
{ /* Llib/object.scm 1287 */
obj_t BgL_portz00_6879;
if(
PAIRP(BgL_portz00_5512))
{ /* Llib/object.scm 1287 */
BgL_portz00_6879 = 
CAR(BgL_portz00_5512); }  else 
{ /* Llib/object.scm 1287 */
obj_t BgL_res2889z00_6880;
{ /* Llib/object.scm 1287 */
obj_t BgL_tmpz00_11732;
BgL_tmpz00_11732 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2889z00_6880 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_11732); } 
BgL_portz00_6879 = BgL_res2889z00_6880; } 
{ /* Llib/object.scm 1288 */
obj_t BgL_auxz00_11735;
if(
OUTPUT_PORTP(BgL_portz00_6879))
{ /* Llib/object.scm 1288 */
BgL_auxz00_11735 = BgL_portz00_6879
; }  else 
{ 
obj_t BgL_auxz00_11738;
BgL_auxz00_11738 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)56870)), BGl_string4262z00zz__objectz00, BGl_string4299z00zz__objectz00, BgL_portz00_6879); 
FAILURE(BgL_auxz00_11738,BFALSE,BFALSE);} 
return 
BGl_objectzd2printzd2zz__objectz00(BgL_objz00_6878, BgL_auxz00_11735, BGl_displayzd2envzd2zz__r4_output_6_10_3z00);} } } } 

}



/* object-display */
BGL_EXPORTED_DEF obj_t BGl_objectzd2displayzd2zz__objectz00(BgL_objectz00_bglt BgL_objz00_155, obj_t BgL_portz00_156)
{
{ /* Llib/object.scm 1286 */
{ /* Llib/object.scm 1286 */
obj_t BgL_method1389z00_2476;
{ /* Llib/object.scm 1286 */
obj_t BgL_res2925z00_4440;
{ /* Llib/object.scm 1193 */
long BgL_objzd2classzd2numz00_4405;
{ /* Llib/object.scm 1193 */
long BgL_res2915z00_4408;
BgL_res2915z00_4408 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_155); 
BgL_objzd2classzd2numz00_4405 = BgL_res2915z00_4408; } 
{ /* Llib/object.scm 1194 */
obj_t BgL_arg1772z00_4406;
BgL_arg1772z00_4406 = 
PROCEDURE_REF(BGl_objectzd2displayzd2envz00zz__objectz00, 
(int)(((long)1))); 
{ /* Llib/object.scm 1194 */
int BgL_offsetz00_4410;
BgL_offsetz00_4410 = 
(int)(BgL_objzd2classzd2numz00_4405); 
{ /* Llib/object.scm 875 */
long BgL_offsetz00_4411;
BgL_offsetz00_4411 = 
(
(long)(BgL_offsetz00_4410)-OBJECT_TYPE); 
{ /* Llib/object.scm 875 */
long BgL_modz00_4412;
BgL_modz00_4412 = 
(BgL_offsetz00_4411 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/object.scm 876 */
long BgL_restz00_4414;
BgL_restz00_4414 = 
(BgL_offsetz00_4411 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/object.scm 877 */

{ /* Llib/object.scm 878 */
obj_t BgL_bucketz00_4416;
BgL_bucketz00_4416 = 
VECTOR_REF(
((obj_t)BgL_arg1772z00_4406),BgL_modz00_4412); 
BgL_res2925z00_4440 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_4416),BgL_restz00_4414); } } } } } } } } 
BgL_method1389z00_2476 = BgL_res2925z00_4440; } 
{ /* Llib/object.scm 1286 */
obj_t BgL_valz00_6463;
{ /* Llib/object.scm 1286 */
obj_t BgL_list2192z00_2477;
BgL_list2192z00_2477 = 
MAKE_YOUNG_PAIR(BgL_portz00_156, BNIL); 
BgL_valz00_6463 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
((obj_t)BgL_objz00_155), BgL_list2192z00_2477); } 
{ /* Llib/object.scm 1286 */
int BgL_len3796z00_6464;
BgL_len3796z00_6464 = 
(int)(
bgl_list_length(BgL_valz00_6463)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1389z00_2476, BgL_len3796z00_6464))
{ /* Llib/object.scm 1286 */
return 
apply(BgL_method1389z00_2476, BgL_valz00_6463);}  else 
{ /* Llib/object.scm 1286 */
FAILURE(BGl_symbol4303z00zz__objectz00,BGl_string4305z00zz__objectz00,BGl_list4306z00zz__objectz00);} } } } } 

}



/* &object-display */
obj_t BGl_z62objectzd2displayzb0zz__objectz00(obj_t BgL_envz00_5513, obj_t BgL_objz00_5514, obj_t BgL_portz00_5515)
{
{ /* Llib/object.scm 1286 */
{ /* Llib/object.scm 1286 */
BgL_objectz00_bglt BgL_auxz00_11777;
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_5514, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1286 */
BgL_auxz00_11777 = 
((BgL_objectz00_bglt)BgL_objz00_5514)
; }  else 
{ 
obj_t BgL_auxz00_11781;
BgL_auxz00_11781 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)56726)), BGl_string4327z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_5514); 
FAILURE(BgL_auxz00_11781,BFALSE,BFALSE);} 
return 
BGl_objectzd2displayzd2zz__objectz00(BgL_auxz00_11777, BgL_portz00_5515);} } 

}



/* object-write */
BGL_EXPORTED_DEF obj_t BGl_objectzd2writezd2zz__objectz00(BgL_objectz00_bglt BgL_objz00_157, obj_t BgL_portz00_158)
{
{ /* Llib/object.scm 1293 */
{ /* Llib/object.scm 1293 */
obj_t BgL_method1391z00_2478;
{ /* Llib/object.scm 1293 */
obj_t BgL_res2936z00_4477;
{ /* Llib/object.scm 1193 */
long BgL_objzd2classzd2numz00_4442;
{ /* Llib/object.scm 1193 */
long BgL_res2926z00_4445;
BgL_res2926z00_4445 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_157); 
BgL_objzd2classzd2numz00_4442 = BgL_res2926z00_4445; } 
{ /* Llib/object.scm 1194 */
obj_t BgL_arg1772z00_4443;
BgL_arg1772z00_4443 = 
PROCEDURE_REF(BGl_objectzd2writezd2envz00zz__objectz00, 
(int)(((long)1))); 
{ /* Llib/object.scm 1194 */
int BgL_offsetz00_4447;
BgL_offsetz00_4447 = 
(int)(BgL_objzd2classzd2numz00_4442); 
{ /* Llib/object.scm 875 */
long BgL_offsetz00_4448;
BgL_offsetz00_4448 = 
(
(long)(BgL_offsetz00_4447)-OBJECT_TYPE); 
{ /* Llib/object.scm 875 */
long BgL_modz00_4449;
BgL_modz00_4449 = 
(BgL_offsetz00_4448 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/object.scm 876 */
long BgL_restz00_4451;
BgL_restz00_4451 = 
(BgL_offsetz00_4448 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/object.scm 877 */

{ /* Llib/object.scm 878 */
obj_t BgL_bucketz00_4453;
BgL_bucketz00_4453 = 
VECTOR_REF(
((obj_t)BgL_arg1772z00_4443),BgL_modz00_4449); 
BgL_res2936z00_4477 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_4453),BgL_restz00_4451); } } } } } } } } 
BgL_method1391z00_2478 = BgL_res2936z00_4477; } 
{ /* Llib/object.scm 1293 */
obj_t BgL_valz00_6471;
{ /* Llib/object.scm 1293 */
obj_t BgL_list2193z00_2479;
BgL_list2193z00_2479 = 
MAKE_YOUNG_PAIR(BgL_portz00_158, BNIL); 
BgL_valz00_6471 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
((obj_t)BgL_objz00_157), BgL_list2193z00_2479); } 
{ /* Llib/object.scm 1293 */
int BgL_len3800z00_6472;
BgL_len3800z00_6472 = 
(int)(
bgl_list_length(BgL_valz00_6471)); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1391z00_2478, BgL_len3800z00_6472))
{ /* Llib/object.scm 1293 */
return 
apply(BgL_method1391z00_2478, BgL_valz00_6471);}  else 
{ /* Llib/object.scm 1293 */
FAILURE(BGl_symbol4328z00zz__objectz00,BGl_string4305z00zz__objectz00,BGl_list4330z00zz__objectz00);} } } } } 

}



/* &object-write */
obj_t BGl_z62objectzd2writezb0zz__objectz00(obj_t BgL_envz00_5516, obj_t BgL_objz00_5517, obj_t BgL_portz00_5518)
{
{ /* Llib/object.scm 1293 */
{ /* Llib/object.scm 1293 */
BgL_objectz00_bglt BgL_auxz00_11820;
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_5517, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1293 */
BgL_auxz00_11820 = 
((BgL_objectz00_bglt)BgL_objz00_5517)
; }  else 
{ 
obj_t BgL_auxz00_11824;
BgL_auxz00_11824 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)57109)), BGl_string4339z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_5517); 
FAILURE(BgL_auxz00_11824,BFALSE,BFALSE);} 
return 
BGl_objectzd2writezd2zz__objectz00(BgL_auxz00_11820, BgL_portz00_5518);} } 

}



/* object-hashnumber */
BGL_EXPORTED_DEF int BGl_objectzd2hashnumberzd2zz__objectz00(BgL_objectz00_bglt BgL_objectz00_159)
{
{ /* Llib/object.scm 1300 */
{ /* Llib/object.scm 1300 */
obj_t BgL_method1393z00_2480;
{ /* Llib/object.scm 1300 */
obj_t BgL_res2947z00_4514;
{ /* Llib/object.scm 1193 */
long BgL_objzd2classzd2numz00_4479;
{ /* Llib/object.scm 1193 */
long BgL_res2937z00_4482;
BgL_res2937z00_4482 = 
BGL_OBJECT_CLASS_NUM(BgL_objectz00_159); 
BgL_objzd2classzd2numz00_4479 = BgL_res2937z00_4482; } 
{ /* Llib/object.scm 1194 */
obj_t BgL_arg1772z00_4480;
BgL_arg1772z00_4480 = 
PROCEDURE_REF(BGl_objectzd2hashnumberzd2envz00zz__objectz00, 
(int)(((long)1))); 
{ /* Llib/object.scm 1194 */
int BgL_offsetz00_4484;
BgL_offsetz00_4484 = 
(int)(BgL_objzd2classzd2numz00_4479); 
{ /* Llib/object.scm 875 */
long BgL_offsetz00_4485;
BgL_offsetz00_4485 = 
(
(long)(BgL_offsetz00_4484)-OBJECT_TYPE); 
{ /* Llib/object.scm 875 */
long BgL_modz00_4486;
BgL_modz00_4486 = 
(BgL_offsetz00_4485 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/object.scm 876 */
long BgL_restz00_4488;
BgL_restz00_4488 = 
(BgL_offsetz00_4485 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/object.scm 877 */

{ /* Llib/object.scm 878 */
obj_t BgL_bucketz00_4490;
BgL_bucketz00_4490 = 
VECTOR_REF(
((obj_t)BgL_arg1772z00_4480),BgL_modz00_4486); 
BgL_res2947z00_4514 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_4490),BgL_restz00_4488); } } } } } } } } 
BgL_method1393z00_2480 = BgL_res2947z00_4514; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1393z00_2480, ((long)1)))
{ /* Llib/object.scm 1300 */
obj_t BgL_tmpz00_11855;
{ /* Llib/object.scm 1300 */
obj_t BgL_aux3805z00_6479;
BgL_aux3805z00_6479 = 
PROCEDURE_ENTRY(BgL_method1393z00_2480)(BgL_method1393z00_2480, 
((obj_t)BgL_objectz00_159), BEOA); 
if(
INTEGERP(BgL_aux3805z00_6479))
{ /* Llib/object.scm 1300 */
BgL_tmpz00_11855 = BgL_aux3805z00_6479
; }  else 
{ 
obj_t BgL_auxz00_11863;
BgL_auxz00_11863 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)57488)), BGl_string4340z00zz__objectz00, BGl_string3840z00zz__objectz00, BgL_aux3805z00_6479); 
FAILURE(BgL_auxz00_11863,BFALSE,BFALSE);} } 
return 
CINT(BgL_tmpz00_11855);}  else 
{ /* Llib/object.scm 1300 */
FAILURE(BGl_string4341z00zz__objectz00,BGl_list4342z00zz__objectz00,BgL_method1393z00_2480);} } } 

}



/* &object-hashnumber */
obj_t BGl_z62objectzd2hashnumberzb0zz__objectz00(obj_t BgL_envz00_5519, obj_t BgL_objectz00_5520)
{
{ /* Llib/object.scm 1300 */
{ /* Llib/object.scm 1300 */
int BgL_tmpz00_11869;
{ /* Llib/object.scm 1300 */
BgL_objectz00_bglt BgL_auxz00_11870;
if(
BGl_isazf3zf3zz__objectz00(BgL_objectz00_5520, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1300 */
BgL_auxz00_11870 = 
((BgL_objectz00_bglt)BgL_objectz00_5520)
; }  else 
{ 
obj_t BgL_auxz00_11874;
BgL_auxz00_11874 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)57488)), BGl_string4345z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objectz00_5520); 
FAILURE(BgL_auxz00_11874,BFALSE,BFALSE);} 
BgL_tmpz00_11869 = 
BGl_objectzd2hashnumberzd2zz__objectz00(BgL_auxz00_11870); } 
return 
BINT(BgL_tmpz00_11869);} } 

}



/* object-print */
BGL_EXPORTED_DEF obj_t BGl_objectzd2printzd2zz__objectz00(BgL_objectz00_bglt BgL_objz00_162, obj_t BgL_portz00_163, obj_t BgL_printzd2slotzd2_164)
{
{ /* Llib/object.scm 1333 */
{ /* Llib/object.scm 1333 */
obj_t BgL_method1397z00_2481;
{ /* Llib/object.scm 1333 */
obj_t BgL_res2958z00_4551;
{ /* Llib/object.scm 1193 */
long BgL_objzd2classzd2numz00_4516;
{ /* Llib/object.scm 1193 */
long BgL_res2948z00_4519;
BgL_res2948z00_4519 = 
BGL_OBJECT_CLASS_NUM(BgL_objz00_162); 
BgL_objzd2classzd2numz00_4516 = BgL_res2948z00_4519; } 
{ /* Llib/object.scm 1194 */
obj_t BgL_arg1772z00_4517;
BgL_arg1772z00_4517 = 
PROCEDURE_REF(BGl_objectzd2printzd2envz00zz__objectz00, 
(int)(((long)1))); 
{ /* Llib/object.scm 1194 */
int BgL_offsetz00_4521;
BgL_offsetz00_4521 = 
(int)(BgL_objzd2classzd2numz00_4516); 
{ /* Llib/object.scm 875 */
long BgL_offsetz00_4522;
BgL_offsetz00_4522 = 
(
(long)(BgL_offsetz00_4521)-OBJECT_TYPE); 
{ /* Llib/object.scm 875 */
long BgL_modz00_4523;
BgL_modz00_4523 = 
(BgL_offsetz00_4522 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/object.scm 876 */
long BgL_restz00_4525;
BgL_restz00_4525 = 
(BgL_offsetz00_4522 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/object.scm 877 */

{ /* Llib/object.scm 878 */
obj_t BgL_bucketz00_4527;
BgL_bucketz00_4527 = 
VECTOR_REF(
((obj_t)BgL_arg1772z00_4517),BgL_modz00_4523); 
BgL_res2958z00_4551 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_4527),BgL_restz00_4525); } } } } } } } } 
BgL_method1397z00_2481 = BgL_res2958z00_4551; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1397z00_2481, ((long)3)))
{ /* Llib/object.scm 1333 */
return 
PROCEDURE_ENTRY(BgL_method1397z00_2481)(BgL_method1397z00_2481, 
((obj_t)BgL_objz00_162), BgL_portz00_163, BgL_printzd2slotzd2_164, BEOA);}  else 
{ /* Llib/object.scm 1333 */
FAILURE(BGl_string4346z00zz__objectz00,BGl_list4347z00zz__objectz00,BgL_method1397z00_2481);} } } 

}



/* &object-print */
obj_t BGl_z62objectzd2printzb0zz__objectz00(obj_t BgL_envz00_5521, obj_t BgL_objz00_5522, obj_t BgL_portz00_5523, obj_t BgL_printzd2slotzd2_5524)
{
{ /* Llib/object.scm 1333 */
{ /* Llib/object.scm 1333 */
obj_t BgL_auxz00_11929;obj_t BgL_auxz00_11922;BgL_objectz00_bglt BgL_auxz00_11914;
if(
PROCEDUREP(BgL_printzd2slotzd2_5524))
{ /* Llib/object.scm 1333 */
BgL_auxz00_11929 = BgL_printzd2slotzd2_5524
; }  else 
{ 
obj_t BgL_auxz00_11932;
BgL_auxz00_11932 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)58924)), BGl_string4350z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_printzd2slotzd2_5524); 
FAILURE(BgL_auxz00_11932,BFALSE,BFALSE);} 
if(
OUTPUT_PORTP(BgL_portz00_5523))
{ /* Llib/object.scm 1333 */
BgL_auxz00_11922 = BgL_portz00_5523
; }  else 
{ 
obj_t BgL_auxz00_11925;
BgL_auxz00_11925 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)58924)), BGl_string4350z00zz__objectz00, BGl_string4299z00zz__objectz00, BgL_portz00_5523); 
FAILURE(BgL_auxz00_11925,BFALSE,BFALSE);} 
if(
BGl_isazf3zf3zz__objectz00(BgL_objz00_5522, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1333 */
BgL_auxz00_11914 = 
((BgL_objectz00_bglt)BgL_objz00_5522)
; }  else 
{ 
obj_t BgL_auxz00_11918;
BgL_auxz00_11918 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)58924)), BGl_string4350z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_objz00_5522); 
FAILURE(BgL_auxz00_11918,BFALSE,BFALSE);} 
return 
BGl_objectzd2printzd2zz__objectz00(BgL_auxz00_11914, BgL_auxz00_11922, BgL_auxz00_11929);} } 

}



/* object-equal? */
BGL_EXPORTED_DEF bool_t BGl_objectzd2equalzf3z21zz__objectz00(BgL_objectz00_bglt BgL_obj1z00_165, BgL_objectz00_bglt BgL_obj2z00_166)
{
{ /* Llib/object.scm 1363 */
{ /* Llib/object.scm 1363 */
obj_t BgL_method1399z00_2482;
{ /* Llib/object.scm 1363 */
obj_t BgL_res2969z00_4588;
{ /* Llib/object.scm 1193 */
long BgL_objzd2classzd2numz00_4553;
{ /* Llib/object.scm 1193 */
long BgL_res2959z00_4556;
BgL_res2959z00_4556 = 
BGL_OBJECT_CLASS_NUM(BgL_obj1z00_165); 
BgL_objzd2classzd2numz00_4553 = BgL_res2959z00_4556; } 
{ /* Llib/object.scm 1194 */
obj_t BgL_arg1772z00_4554;
BgL_arg1772z00_4554 = 
PROCEDURE_REF(BGl_objectzd2equalzf3zd2envzf3zz__objectz00, 
(int)(((long)1))); 
{ /* Llib/object.scm 1194 */
int BgL_offsetz00_4558;
BgL_offsetz00_4558 = 
(int)(BgL_objzd2classzd2numz00_4553); 
{ /* Llib/object.scm 875 */
long BgL_offsetz00_4559;
BgL_offsetz00_4559 = 
(
(long)(BgL_offsetz00_4558)-OBJECT_TYPE); 
{ /* Llib/object.scm 875 */
long BgL_modz00_4560;
BgL_modz00_4560 = 
(BgL_offsetz00_4559 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/object.scm 876 */
long BgL_restz00_4562;
BgL_restz00_4562 = 
(BgL_offsetz00_4559 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/object.scm 877 */

{ /* Llib/object.scm 878 */
obj_t BgL_bucketz00_4564;
BgL_bucketz00_4564 = 
VECTOR_REF(
((obj_t)BgL_arg1772z00_4554),BgL_modz00_4560); 
BgL_res2969z00_4588 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_4564),BgL_restz00_4562); } } } } } } } } 
BgL_method1399z00_2482 = BgL_res2969z00_4588; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1399z00_2482, ((long)2)))
{ /* Llib/object.scm 1363 */
return 
CBOOL(
PROCEDURE_ENTRY(BgL_method1399z00_2482)(BgL_method1399z00_2482, 
((obj_t)BgL_obj1z00_165), 
((obj_t)BgL_obj2z00_166), BEOA));}  else 
{ /* Llib/object.scm 1363 */
FAILURE(BGl_string4351z00zz__objectz00,BGl_list4352z00zz__objectz00,BgL_method1399z00_2482);} } } 

}



/* &object-equal? */
obj_t BGl_z62objectzd2equalzf3z43zz__objectz00(obj_t BgL_envz00_5525, obj_t BgL_obj1z00_5526, obj_t BgL_obj2z00_5527)
{
{ /* Llib/object.scm 1363 */
{ /* Llib/object.scm 1363 */
bool_t BgL_tmpz00_11972;
{ /* Llib/object.scm 1363 */
BgL_objectz00_bglt BgL_auxz00_11981;BgL_objectz00_bglt BgL_auxz00_11973;
if(
BGl_isazf3zf3zz__objectz00(BgL_obj2z00_5527, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1363 */
BgL_auxz00_11981 = 
((BgL_objectz00_bglt)BgL_obj2z00_5527)
; }  else 
{ 
obj_t BgL_auxz00_11985;
BgL_auxz00_11985 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)59919)), BGl_string4355z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_obj2z00_5527); 
FAILURE(BgL_auxz00_11985,BFALSE,BFALSE);} 
if(
BGl_isazf3zf3zz__objectz00(BgL_obj1z00_5526, BGl_objectz00zz__objectz00))
{ /* Llib/object.scm 1363 */
BgL_auxz00_11973 = 
((BgL_objectz00_bglt)BgL_obj1z00_5526)
; }  else 
{ 
obj_t BgL_auxz00_11977;
BgL_auxz00_11977 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)59919)), BGl_string4355z00zz__objectz00, BGl_string3924z00zz__objectz00, BgL_obj1z00_5526); 
FAILURE(BgL_auxz00_11977,BFALSE,BFALSE);} 
BgL_tmpz00_11972 = 
BGl_objectzd2equalzf3z21zz__objectz00(BgL_auxz00_11973, BgL_auxz00_11981); } 
return 
BBOOL(BgL_tmpz00_11972);} } 

}



/* exception-notify */
BGL_EXPORTED_DEF obj_t BGl_exceptionzd2notifyzd2zz__objectz00(obj_t BgL_excz00_167)
{
{ /* Llib/object.scm 1383 */
if(
BGL_OBJECTP(BgL_excz00_167))
{ /* Llib/object.scm 1383 */
obj_t BgL_method1402z00_2484;
{ /* Llib/object.scm 1383 */
obj_t BgL_res2981z00_4626;
{ /* Llib/object.scm 1193 */
long BgL_objzd2classzd2numz00_4591;
{ /* Llib/object.scm 1193 */
long BgL_res2971z00_4594;
BgL_res2971z00_4594 = 
BGL_OBJECT_CLASS_NUM(
((BgL_objectz00_bglt)BgL_excz00_167)); 
BgL_objzd2classzd2numz00_4591 = BgL_res2971z00_4594; } 
{ /* Llib/object.scm 1194 */
obj_t BgL_arg1772z00_4592;
BgL_arg1772z00_4592 = 
PROCEDURE_REF(BGl_exceptionzd2notifyzd2envz00zz__objectz00, 
(int)(((long)1))); 
{ /* Llib/object.scm 1194 */
int BgL_offsetz00_4596;
BgL_offsetz00_4596 = 
(int)(BgL_objzd2classzd2numz00_4591); 
{ /* Llib/object.scm 875 */
long BgL_offsetz00_4597;
BgL_offsetz00_4597 = 
(
(long)(BgL_offsetz00_4596)-OBJECT_TYPE); 
{ /* Llib/object.scm 875 */
long BgL_modz00_4598;
BgL_modz00_4598 = 
(BgL_offsetz00_4597 >> 
(int)(
(long)(
(int)(((long)4))))); 
{ /* Llib/object.scm 876 */
long BgL_restz00_4600;
BgL_restz00_4600 = 
(BgL_offsetz00_4597 & 
(long)(
(int)(
(
(long)(
(int)(
(((long)1) << 
(int)(
(long)(
(int)(((long)4)))))))-((long)1))))); 
{ /* Llib/object.scm 877 */

{ /* Llib/object.scm 878 */
obj_t BgL_bucketz00_4602;
BgL_bucketz00_4602 = 
VECTOR_REF(
((obj_t)BgL_arg1772z00_4592),BgL_modz00_4598); 
BgL_res2981z00_4626 = 
VECTOR_REF(
((obj_t)BgL_bucketz00_4602),BgL_restz00_4600); } } } } } } } } 
BgL_method1402z00_2484 = BgL_res2981z00_4626; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_method1402z00_2484, ((long)1)))
{ /* Llib/object.scm 1383 */
return 
PROCEDURE_ENTRY(BgL_method1402z00_2484)(BgL_method1402z00_2484, BgL_excz00_167, BEOA);}  else 
{ /* Llib/object.scm 1383 */
FAILURE(BGl_string4356z00zz__objectz00,BGl_list4357z00zz__objectz00,BgL_method1402z00_2484);} }  else 
{ /* Llib/object.scm 1383 */
obj_t BgL_fun2195z00_2485;
{ /* Llib/object.scm 1383 */
obj_t BgL_res2982z00_4627;
{ /* Llib/object.scm 844 */
obj_t BgL_aux3826z00_6512;
BgL_aux3826z00_6512 = 
PROCEDURE_REF(BGl_exceptionzd2notifyzd2envz00zz__objectz00, 
(int)(((long)0))); 
if(
PROCEDUREP(BgL_aux3826z00_6512))
{ /* Llib/object.scm 844 */
BgL_res2982z00_4627 = BgL_aux3826z00_6512; }  else 
{ 
obj_t BgL_auxz00_12029;
BgL_auxz00_12029 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)37126)), BGl_string4362z00zz__objectz00, BGl_string3869z00zz__objectz00, BgL_aux3826z00_6512); 
FAILURE(BgL_auxz00_12029,BFALSE,BFALSE);} } 
BgL_fun2195z00_2485 = BgL_res2982z00_4627; } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_fun2195z00_2485, ((long)1)))
{ /* Llib/object.scm 1383 */
return 
PROCEDURE_ENTRY(BgL_fun2195z00_2485)(BgL_fun2195z00_2485, BgL_excz00_167, BEOA);}  else 
{ /* Llib/object.scm 1383 */
FAILURE(BGl_string4356z00zz__objectz00,BGl_list4363z00zz__objectz00,BgL_fun2195z00_2485);} } } 

}



/* &exception-notify */
obj_t BGl_z62exceptionzd2notifyzb0zz__objectz00(obj_t BgL_envz00_5528, obj_t BgL_excz00_5529)
{
{ /* Llib/object.scm 1383 */
return 
BGl_exceptionzd2notifyzd2zz__objectz00(BgL_excz00_5529);} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__objectz00()
{
{ /* Llib/object.scm 17 */
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_exceptionzd2notifyzd2envz00zz__objectz00, BGl_z62errorz62zz__objectz00, BGl_proc4366z00zz__objectz00, BGl_string4362z00zz__objectz00); 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_exceptionzd2notifyzd2envz00zz__objectz00, BGl_z62iozd2writezd2errorz62zz__objectz00, BGl_proc4367z00zz__objectz00, BGl_string4362z00zz__objectz00); 
return 
BGl_genericzd2addzd2methodz12z12zz__objectz00(BGl_exceptionzd2notifyzd2envz00zz__objectz00, BGl_z62warningz62zz__objectz00, BGl_proc4368z00zz__objectz00, BGl_string4362z00zz__objectz00);} 

}



/* &exception-notify-&wa1409 */
obj_t BGl_z62exceptionzd2notifyzd2z62wa1409z00zz__objectz00(obj_t BgL_envz00_5533, obj_t BgL_excz00_5534)
{
{ /* Llib/object.scm 1415 */
{ /* Llib/object.scm 1416 */
BgL_z62warningz62_bglt BgL_excz00_6881;
if(
BGl_isazf3zf3zz__objectz00(BgL_excz00_5534, BGl_z62warningz62zz__objectz00))
{ /* Llib/object.scm 1416 */
BgL_excz00_6881 = 
((BgL_z62warningz62_bglt)BgL_excz00_5534); }  else 
{ 
obj_t BgL_auxz00_12047;
BgL_auxz00_12047 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)62119)), BGl_string4369z00zz__objectz00, BGl_string4205z00zz__objectz00, BgL_excz00_5534); 
FAILURE(BgL_auxz00_12047,BFALSE,BFALSE);} 
return 
BGl_warningzd2notifyzd2zz__errorz00(
((obj_t)BgL_excz00_6881));} } 

}



/* &exception-notify-&io1407 */
obj_t BGl_z62exceptionzd2notifyzd2z62io1407z00zz__objectz00(obj_t BgL_envz00_5535, obj_t BgL_excz00_5536)
{
{ /* Llib/object.scm 1407 */
{ /* Llib/object.scm 1407 */
BgL_z62iozd2writezd2errorz62_bglt BgL_excz00_6882;
if(
BGl_isazf3zf3zz__objectz00(BgL_excz00_5536, BGl_z62iozd2writezd2errorz62zz__objectz00))
{ /* Llib/object.scm 1407 */
BgL_excz00_6882 = 
((BgL_z62iozd2writezd2errorz62_bglt)BgL_excz00_5536); }  else 
{ 
obj_t BgL_auxz00_12056;
BgL_auxz00_12056 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)61678)), BGl_string4374z00zz__objectz00, BGl_string4121z00zz__objectz00, BgL_excz00_5536); 
FAILURE(BgL_auxz00_12056,BFALSE,BFALSE);} 
{ 

{ /* Llib/object.scm 1409 */
bool_t BgL_test5390z00_12060;
{ /* Llib/object.scm 1409 */
obj_t BgL_arg2199z00_6885;obj_t BgL_arg2200z00_6886;
BgL_arg2199z00_6885 = 
(((BgL_z62errorz62_bglt)COBJECT(
((BgL_z62errorz62_bglt)BgL_excz00_6882)))->BgL_objz00); 
{ /* Llib/object.scm 1409 */
obj_t BgL_res2983z00_6887;
{ /* Llib/object.scm 1409 */
obj_t BgL_tmpz00_12063;
BgL_tmpz00_12063 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2983z00_6887 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_12063); } 
BgL_arg2200z00_6886 = BgL_res2983z00_6887; } 
BgL_test5390z00_12060 = 
(BgL_arg2199z00_6885==BgL_arg2200z00_6886); } 
if(BgL_test5390z00_12060)
{ /* Llib/object.scm 1409 */
return BFALSE;}  else 
{ /* Llib/object.scm 1409 */
{ /* Llib/object.scm 1407 */
obj_t BgL_nextzd2method1406zd2_6884;
BgL_nextzd2method1406zd2_6884 = 
BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
((BgL_objectz00_bglt)BgL_excz00_6882), BGl_exceptionzd2notifyzd2envz00zz__objectz00, BGl_z62iozd2writezd2errorz62zz__objectz00); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_nextzd2method1406zd2_6884, ((long)1)))
{ /* Llib/object.scm 1407 */
return 
PROCEDURE_ENTRY(BgL_nextzd2method1406zd2_6884)(BgL_nextzd2method1406zd2_6884, 
((obj_t)BgL_excz00_6882), BEOA);}  else 
{ /* Llib/object.scm 1407 */
FAILURE(BGl_string4370z00zz__objectz00,BGl_list4371z00zz__objectz00,BgL_nextzd2method1406zd2_6884);} } } } } } } 

}



/* &exception-notify-&er1405 */
obj_t BGl_z62exceptionzd2notifyzd2z62er1405z00zz__objectz00(obj_t BgL_envz00_5537, obj_t BgL_excz00_5538)
{
{ /* Llib/object.scm 1401 */
{ /* Llib/object.scm 1402 */
BgL_z62errorz62_bglt BgL_excz00_6888;
if(
BGl_isazf3zf3zz__objectz00(BgL_excz00_5538, BGl_z62errorz62zz__objectz00))
{ /* Llib/object.scm 1402 */
BgL_excz00_6888 = 
((BgL_z62errorz62_bglt)BgL_excz00_5538); }  else 
{ 
obj_t BgL_auxz00_12080;
BgL_auxz00_12080 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3838z00zz__objectz00, 
BINT(((long)61435)), BGl_string4375z00zz__objectz00, BGl_string4083z00zz__objectz00, BgL_excz00_5538); 
FAILURE(BgL_auxz00_12080,BFALSE,BFALSE);} 
return 
BGl_errorzd2notifyzd2zz__errorz00(
((obj_t)BgL_excz00_6888));} } 

}

#ifdef __cplusplus
}
#endif
