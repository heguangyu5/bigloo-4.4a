/*===========================================================================*/
/*   (Llib/object.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/object.scm -indent -o objs/obj_u/Llib/object.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_z62conditionz62_bgl
	{
		header_t header;
		obj_t widening;
	}                      *BgL_z62conditionz62_bglt;

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

	typedef struct BgL_z62typezd2errorzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
		obj_t BgL_typez00;
	}                         *BgL_z62typezd2errorzb0_bglt;

	typedef struct BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
		obj_t BgL_indexz00;
	}                                             
		*BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt;

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

	typedef struct BgL_z62iozd2portzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                              *BgL_z62iozd2portzd2errorz62_bglt;

	typedef struct BgL_z62iozd2readzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                              *BgL_z62iozd2readzd2errorz62_bglt;

	typedef struct BgL_z62iozd2writezd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                               *BgL_z62iozd2writezd2errorz62_bglt;

	typedef struct BgL_z62iozd2closedzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                *BgL_z62iozd2closedzd2errorz62_bglt;

	typedef struct BgL_z62iozd2filezd2notzd2foundzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                           
		*BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt;

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

	typedef struct BgL_z62iozd2unknownzd2hostzd2errorzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                       
		*BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt;

	typedef struct BgL_z62iozd2malformedzd2urlzd2errorzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                        
		*BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt;

	typedef struct BgL_z62iozd2sigpipezd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                 *BgL_z62iozd2sigpipezd2errorz62_bglt;

	typedef struct BgL_z62iozd2timeoutzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                 *BgL_z62iozd2timeoutzd2errorz62_bglt;

	typedef struct BgL_z62iozd2connectionzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                    *BgL_z62iozd2connectionzd2errorz62_bglt;

	typedef struct BgL_z62processzd2exceptionzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                *BgL_z62processzd2exceptionzb0_bglt;

	typedef struct BgL_z62stackzd2overflowzd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                                    
		*BgL_z62stackzd2overflowzd2errorz62_bglt;

	typedef struct BgL_z62securityzd2exceptionzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_messagez00;
	}                                 *BgL_z62securityzd2exceptionzb0_bglt;

	typedef struct BgL_z62accesszd2controlzd2exceptionz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_messagez00;
		obj_t BgL_objz00;
		obj_t BgL_permissionz00;
	}                                        
		*BgL_z62accesszd2controlzd2exceptionz62_bglt;

	typedef struct BgL_z62warningz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_argsz00;
	}                    *BgL_z62warningz62_bglt;

	typedef struct BgL_z62evalzd2warningzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_argsz00;
	}                           *BgL_z62evalzd2warningzb0_bglt;


	static BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
		BGl_z62lambda1921z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_z52isazd2objectzf2cdepthzf3z81zz__objectz00(BgL_objectz00_bglt, obj_t,
		long);
	static BgL_z62exceptionz62_bglt BGl_z62lambda1842z62zz__objectz00(obj_t,
		obj_t, obj_t, obj_t);
	static BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
		BGl_z62lambda1924z62zz__objectz00(obj_t);
	BGL_EXPORTED_DECL int
		BGl_objectzd2hashnumberzd2zz__objectz00(BgL_objectz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_procedurezd2ze3genericz31zz__objectz00(obj_t);
	static BgL_z62exceptionz62_bglt BGl_z62lambda1846z62zz__objectz00(obj_t);
	extern obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31926ze3ze5zz__objectz00(obj_t, obj_t);
	static obj_t BGl_symbol3451z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_z62objectzd2classzd2numzd2setz12za2zz__objectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol3291z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_z62objectzd2displayzb0zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol3373z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3293z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3456z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3294z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_z62processzd2exceptionzb0zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3377z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3296z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3298z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_z62classzd2allzd2fieldsz62zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62objectzd2print1394zb0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1930z62zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1931z62zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62findzd2methodzb0zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1854z62zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1855z62zz__objectz00(obj_t, obj_t, obj_t);
	static BgL_z62iozd2errorzb0_bglt BGl_z62lambda1937z62zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t make_vector_uncollectable(long, obj_t);
	BGL_EXPORTED_DECL long bgl_types_number();
	static BgL_z62iozd2errorzb0_bglt BGl_z62lambda1939z62zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_objectzd2wideningzd2zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl_doublezd2nbzd2genericsz12z12zz__objectz00();
	static obj_t BGl_symbol3461z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3381z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_z62objectzd2wideningzb0zz__objectz00(obj_t, obj_t);
	static obj_t BGl_symbol3466z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3388z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32003ze3ze5zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62bigloozd2genericzd2bucketzd2siza7ez17zz__objectz00(obj_t);
	static obj_t BGl_z62classzd2nilzd2initz12z70zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1862z62zz__objectz00(obj_t, obj_t);
	static obj_t BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1863z62zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31952ze3ze5zz__objectz00(obj_t, obj_t);
	static BgL_z62iozd2portzd2errorz62_bglt
		BGl_z62lambda1947z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__objectz00 = BUNSPEC;
	static BgL_z62iozd2portzd2errorz62_bglt
		BGl_z62lambda1949z62zz__objectz00(obj_t);
	static obj_t BGl_symbol3471z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t
		BGl_z52isazd2objectzf2finalzf3z81zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl_symbol3392z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_z62classzd2subclasseszb0zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_classzd2fieldzf3z21zz__objectz00(obj_t);
	static obj_t BGl_symbol3476z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3397z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_z62classzd2fieldzd2mutatorz62zz__objectz00(obj_t, obj_t);
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t bigloo_generic_mutex;
	static obj_t BGl_z62lambda1871z62zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62classzd2numzb0zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1872z62zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31864ze3ze5zz__objectz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31856ze3ze5zz__objectz00(obj_t);
	static BgL_z62iozd2readzd2errorz62_bglt
		BGl_z62lambda1958z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31848ze3ze5zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2classesza2z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL int BGl_bigloozd2genericzd2bucketzd2powzd2zz__objectz00();
	static obj_t BGl_symbol3481z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3483z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3488z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_classzd2virtualzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_classzd2fieldzd2defaultzd2valuezf3z21zz__objectz00(obj_t);
	extern obj_t BGl_warningz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t,
		obj_t, obj_t, obj_t);
	static BgL_z62iozd2readzd2errorz62_bglt
		BGl_z62lambda1960z62zz__objectz00(obj_t);
	static BgL_z62errorz62_bglt BGl_z62lambda1880z62zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2sigpipezd2errorz62zz__objectz00 = BUNSPEC;
	static BgL_z62errorz62_bglt BGl_z62lambda1882z62zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2fieldszd2zz__objectz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31962ze3ze5zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_methodzd2arrayzd2refz00zz__objectz00(obj_t, obj_t,
		int);
	static obj_t BGl_z62zc3z04anonymousza31873ze3ze5zz__objectz00(obj_t);
	static BgL_z62iozd2writezd2errorz62_bglt
		BGl_z62lambda1968z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1888z62zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1889z62zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol3496z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__objectz00();
	static obj_t BGl_z62classzd2modulezb0zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2writezd2errorz62zz__objectz00 = BUNSPEC;
	static obj_t BGl_initializa7ezd2objectsz12z67zz__objectz00();
	BGL_EXPORTED_DECL obj_t
		BGl_findzd2methodzd2fromz00zz__objectz00(BgL_objectz00_bglt, obj_t, obj_t);
	static BgL_z62iozd2writezd2errorz62_bglt
		BGl_z62lambda1970z62zz__objectz00(obj_t);
	static obj_t BGl_z62classzd2superzb0zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1894z62zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1895z62zz__objectz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62typezd2errorzb0zz__objectz00 = BUNSPEC;
	static BgL_z62iozd2closedzd2errorz62_bglt
		BGl_z62lambda1978z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1899z62zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_z62classzd2fieldzd2mutablezf3z91zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62genericzd2memoryzd2statisticsz62zz__objectz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32104ze3ze5zz__objectz00(obj_t);
	static obj_t BGl_z62evalzd2classzf3z43zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32015ze3ze5zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62classzd2fieldzd2defaultzd2valuezf3z43zz__objectz00(obj_t,
		obj_t);
	static BgL_z62iozd2closedzd2errorz62_bglt
		BGl_z62lambda1980z62zz__objectz00(obj_t);
	static obj_t BGl_z62objectzf3z91zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31972ze3ze5zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_objectzd2displayzd2zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl_genericzd2initzd2zz__objectz00();
	static BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
		BGl_z62lambda1988z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2parsezd2errorz62zz__objectz00 = BUNSPEC;
	static obj_t BGl_z62objectzd2classzb0zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2existszd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl_za2nbzd2classeszd2maxza2z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_objectzd2initzd2zz__objectz00();
	static BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
		BGl_z62lambda1990z62zz__objectz00(obj_t);
	extern obj_t BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00(obj_t, long);
	extern obj_t BGl_displayzd2tracezd2stackz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31884ze3ze5zz__objectz00(obj_t, obj_t);
	static BgL_z62iozd2parsezd2errorz62_bglt
		BGl_z62lambda1999z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32130ze3ze5zz__objectz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32122ze3ze5zz__objectz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62exceptionz62zz__objectz00 = BUNSPEC;
	static obj_t BGl_z62isazf3z91zz__objectz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_objectzd2equalzf3z21zz__objectz00(BgL_objectz00_bglt,
		BgL_objectz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31982ze3ze5zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62callzd2virtualzd2setterz62zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_extendzd2vectorzd2zz__objectz00(obj_t, obj_t, long);
	static obj_t
		BGl_makezd2classzd2virtualzd2slotszd2vectorz00zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32050ze3ze5zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32115ze3ze5zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_classzd2abstractzf3z21zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2classzd2fieldz00zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl_z62classzd2abstractzf3z43zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62exceptionzd2notifyzd2z62wa1409z00zz__objectz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_genericzd2memoryzd2statisticsz00zz__objectz00();
	static obj_t BGl_z62exceptionzd2notify1400zb0zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62classzd2fieldzd2virtualzf3z91zz__objectz00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_objectzd2printzd2zz__objectz00(BgL_objectz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_z62widezd2objectzf3z43zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32027ze3ze5zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2evdatazd2zz__objectz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31992ze3ze5zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62methodzd2arrayzd2refz62zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t make_vector(long, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2fieldzd2mutatorz00zz__objectz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32141ze3ze5zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62findzd2methodzd2fromz62zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__objectz00();
	BGL_EXPORTED_DECL bool_t
		BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(obj_t);
	static obj_t BGl_z62genericzd2methodzd2arrayz62zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_objectzd2writezd2zz__objectz00(BgL_objectz00_bglt,
		obj_t);
	static obj_t BGl_z62callzd2virtualzd2getterz62zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62objectzd2display1386zb0zz__objectz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2fieldzd2namez00zz__objectz00(obj_t);
	static obj_t BGl_z62objectzd2hashnumberzb0zz__objectz00(obj_t, obj_t);
	static obj_t BGl_classzd2shrinkzd2zz__objectz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32062ze3ze5zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62classzd2fieldzd2accessorz62zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62objectzd2equalzf31398z43zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62makezd2classzd2fieldz62zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_genericzd2methodzd2arrayz00zz__objectz00(obj_t);
	static obj_t BGl_za2classzd2keyza2zd2zz__objectz00 = BUNSPEC;
	static obj_t BGl_z62objectzd2wideningzd2setz12z70zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2nbzd2genericsza2zd2zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL long BGl_classzd2hashzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_z52isazf2cdepthzf3z53zz__objectz00(obj_t, obj_t,
		long);
	static obj_t BGl_z62findzd2classzd2byzd2hashzb0zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32039ze3ze5zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62findzd2superzd2classzd2methodzb0zz__objectz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_z62nilzf3z91zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2allocatorzd2zz__objectz00(obj_t);
	static BgL_z62iozd2parsezd2errorz62_bglt
		BGl_z62lambda2001z62zz__objectz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_classzd2widezf3z21zz__objectz00(obj_t);
	static obj_t BGl_z62classzd2allocatorzb0zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2fieldzd2accessorz00zz__objectz00(obj_t);
	static obj_t BGl_z62callzd2nextzd2virtualzd2setterzb0zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_objectzd2wideningzd2setz12z12zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl_z62findzd2classzd2fieldz62zz__objectz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62securityzd2exceptionzb0zz__objectz00 = BUNSPEC;
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00 =
		BUNSPEC;
	static BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt
		BGl_z62lambda2011z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt
		BGl_z62lambda2013z62zz__objectz00(obj_t);
	static obj_t BGl_z62classzd2hashzb0zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_nilzf3zf3zz__objectz00(BgL_objectz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2virtualzd2setterz00zz__objectz00(BgL_objectz00_bglt, int, obj_t);
	static obj_t BGl_z62registerzd2genericz12za2zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2closedzd2errorz62zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_classzd2fieldzd2infoz00zz__objectz00(obj_t);
	static obj_t BGl_z62genericzd2addzd2evalzd2methodz12za2zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2102z62zz__objectz00(obj_t, obj_t);
	static BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt
		BGl_z62lambda2022z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda2103z62zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62classzd2fieldzf3z43zz__objectz00(obj_t, obj_t);
	static BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt
		BGl_z62lambda2024z62zz__objectz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62evalzd2warningzb0zz__objectz00 = BUNSPEC;
	static obj_t BGl_z62classzd2creatorzb0zz__objectz00(obj_t, obj_t);
	static BgL_z62accesszd2controlzd2exceptionz62_bglt
		BGl_z62lambda2110z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_z62accesszd2controlzd2exceptionz62_bglt
		BGl_z62lambda2112z62zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2constructorzd2zz__objectz00(obj_t);
	static BgL_z62iozd2sigpipezd2errorz62_bglt
		BGl_z62lambda2035z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_z62iozd2sigpipezd2errorz62_bglt
		BGl_z62lambda2037z62zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_exceptionzd2notifyzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2fieldzd2typez00zz__objectz00(obj_t);
	static obj_t BGl_z62procedurezd2ze3genericz53zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62classzd2fieldzd2namez62zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62classzd2fieldszb0zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_z52objectzd2wideningz80zz__objectz00(BgL_objectz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00 =
		BUNSPEC;
	static obj_t BGl_z62callzd2nextzd2virtualzd2getterzb0zz__objectz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2120z62zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2121z62zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2arrayzd2setz12z12zz__objectz00(obj_t, obj_t, long,
		obj_t);
	BGL_EXPORTED_DECL BgL_objectz00_bglt
		BGl_allocatezd2instancezd2zz__objectz00(obj_t);
	extern obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t);
	static BgL_z62iozd2timeoutzd2errorz62_bglt
		BGl_z62lambda2046z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda2128z62zz__objectz00(obj_t, obj_t);
	static BgL_z62iozd2timeoutzd2errorz62_bglt
		BGl_z62lambda2048z62zz__objectz00(obj_t);
	static obj_t BGl_z62lambda2129z62zz__objectz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00
		= BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_classzd2evdatazd2setz12z12zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32076ze3ze5zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32157ze3ze5zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62exceptionzd2notifyzd2z62er1405z00zz__objectz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long,
		char *);
	BGL_EXPORTED_DEF obj_t BGl_z62errorz62zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_classzf3zf3zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2virtualzd2getterz00zz__objectz00(BgL_objectz00_bglt, int);
	static obj_t BGl_z62genericzd2addzd2methodz12z70zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static bool_t BGl_genericszd2addzd2classz12z12zz__objectz00(long, long);
	static BgL_z62warningz62_bglt BGl_z62lambda2136z62zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_z62warningz62_bglt BGl_z62lambda2138z62zz__objectz00(obj_t);
	static BgL_z62iozd2connectionzd2errorz62_bglt
		BGl_z62lambda2058z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62warningz62zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_z52isazf2finalzf3z53zz__objectz00(obj_t, obj_t);
	static bool_t BGl_doublezd2nbzd2classesz12z12zz__objectz00();
	static obj_t BGl_z62classzd2evfieldszd2setz12z70zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62classzd2existszb0zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_currentzd2threadzd2zz__threadz00();
	static obj_t BGl_z62z52isazd2objectzf2finalzf3ze3zz__objectz00(obj_t, obj_t,
		obj_t);
	static BgL_z62iozd2connectionzd2errorz62_bglt
		BGl_z62lambda2060z62zz__objectz00(obj_t);
	static obj_t BGl_z62objectzd2hashnumber1392zb0zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2145z62zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2146z62zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32086ze3ze5zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62stackzd2overflowzd2errorz62zz__objectz00 =
		BUNSPEC;
	static obj_t BGl_za2genericsza2z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2portzd2errorz62zz__objectz00 = BUNSPEC;
	extern obj_t bgl_make_generic(obj_t);
	static BgL_z62processzd2exceptionzb0_bglt
		BGl_z62lambda2070z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_z62processzd2exceptionzb0_bglt
		BGl_z62lambda2072z62zz__objectz00(obj_t);
	static BgL_z62evalzd2warningzb0_bglt BGl_z62lambda2153z62zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_objectzf3zf3zz__objectz00(obj_t);
	static BgL_z62evalzd2warningzb0_bglt BGl_z62lambda2155z62zz__objectz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__objectz00();
	static obj_t BGl_z62classzd2fieldzd2defaultzd2valuezb0zz__objectz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL int BGl_bigloozd2genericzd2bucketzd2maskzd2zz__objectz00();
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2connectionzd2errorz62zz__objectz00 =
		BUNSPEC;
	static obj_t BGl_z52addzd2methodz12z92zz__objectz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2modulezd2zz__objectz00(obj_t);
	static obj_t BGl_z62classzd2nilzb0zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62classzd2fieldzd2infoz62zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2timeoutzd2errorz62zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_z62accesszd2controlzd2exceptionz62zz__objectz00 =
		BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zz__objectz00();
	static obj_t BGl_z62classzd2widezf3z43zz__objectz00(obj_t, obj_t);
	static BgL_z62stackzd2overflowzd2errorz62_bglt
		BGl_z62lambda2082z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2errorzb0zz__objectz00 = BUNSPEC;
	static obj_t BGl_z62registerzd2classz12za2zz__objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_z62stackzd2overflowzd2errorz62_bglt
		BGl_z62lambda2084z62zz__objectz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32096ze3ze5zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2classzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_objectz00zz__objectz00 = BUNSPEC;
	static obj_t BGl_z62classzd2virtualzb0zz__objectz00(obj_t, obj_t);
	static BgL_z62securityzd2exceptionzb0_bglt
		BGl_z62lambda2092z62zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31910ze3ze5zz__objectz00(obj_t, obj_t);
	static BgL_z62securityzd2exceptionzb0_bglt
		BGl_z62lambda2094z62zz__objectz00(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62objectzd2printzb0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62z52isazd2objectzf2cdepthzf3ze3zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_objectzd2classzd2zz__objectz00(BgL_objectz00_bglt);
	BGL_EXPORTED_DECL long
		BGl_objectzd2classzd2numz00zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl_z62classzd2evdatazb0zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62bigloozd2genericzd2bucketzd2maskzb0zz__objectz00(obj_t);
	static obj_t BGl_z62exceptionzd2notifyzb0zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62classzd2fieldzd2typez62zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00 = BUNSPEC;
	static obj_t BGl_z62z52objectzd2wideningze2zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_writezd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2nextzd2virtualzd2setterzd2zz__objectz00(obj_t,
		BgL_objectz00_bglt, int, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2methodzd2zz__objectz00(BgL_objectz00_bglt,
		obj_t);
	static obj_t BGl_symbol3300z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3302z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_z52objectzd2wideningzd2setz12z40zz__objectz00(BgL_objectz00_bglt,
		obj_t);
	static obj_t BGl_z62bigloozd2typeszd2numberz62zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	static obj_t BGl_z62findzd2classzb0zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_z62conditionz62zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
	static obj_t BGl_z62objectzd2writezb0zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31823ze3ze5zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2nilzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_genericzd2addzd2evalzd2methodz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2allzd2fieldsz00zz__objectz00(obj_t);
	static obj_t BGl_z62objectzd2write1390zb0zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62genericzd2nozd2defaultzd2behaviorzb0zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl_symbol3401z00zz__objectz00 = BUNSPEC;
	extern long bgl_obj_hash_number(obj_t);
	extern obj_t BGl_warningzd2notifyzd2zz__errorz00(obj_t);
	static obj_t BGl_z62exceptionzd2notifyzd2z62io1407z00zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl_symbol3406z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_findzd2classzd2byzd2hashzd2zz__objectz00(int);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62classzd2namezb0zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_widezd2objectzf3z21zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl_z62z52isazf2cdepthzf3z31zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2evfieldszd2setz12z12zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31833ze3ze5zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_objectzd2classzd2numzd2setz12zc0zz__objectz00(BgL_objectz00_bglt, long);
	static obj_t BGl_symbol3411z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_classzd2subclasseszd2zz__objectz00(obj_t);
	static obj_t BGl_z62z52isazf2finalzf3z31zz__objectz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2nextzd2virtualzd2getterzd2zz__objectz00(obj_t,
		BgL_objectz00_bglt, int);
	static obj_t BGl_symbol3416z00zz__objectz00 = BUNSPEC;
	static bool_t BGl_loopze70ze7zz__objectz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62objectzd2equalzf3z43zz__objectz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classzd2creatorzd2zz__objectz00(obj_t);
	static BgL_objectz00_bglt BGl_z62lambda1819z62zz__objectz00(obj_t);
	static obj_t BGl_symbol3501z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3421z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3505z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3426z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3345z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3346z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_z62z52objectzd2wideningzd2setz12z22zz__objectz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_evalzd2classzf3z21zz__objectz00(obj_t);
	static obj_t BGl_z62lambda1900z62zz__objectz00(obj_t, obj_t, obj_t);
	static BgL_objectz00_bglt BGl_z62lambda1821z62zz__objectz00(obj_t);
	static obj_t BGl_z62classzd2constructorzb0zz__objectz00(obj_t, obj_t);
	static BgL_z62typezd2errorzb0_bglt BGl_z62lambda1906z62zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62classzf3z91zz__objectz00(obj_t, obj_t);
	static BgL_z62typezd2errorzb0_bglt BGl_z62lambda1908z62zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_za2nbzd2genericszd2maxza2z00zz__objectz00 = BUNSPEC;
	static BgL_z62conditionz62_bglt BGl_z62lambda1829z62zz__objectz00(obj_t);
	static obj_t BGl_symbol3510z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_makezd2methodzd2arrayz00zz__objectz00(obj_t);
	static obj_t BGl_symbol3431z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_za2nbzd2classesza2zd2zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3351z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3515z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_z62objectzd2classzd2numz62zz__objectz00(obj_t, obj_t);
	static obj_t BGl_symbol3436z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3356z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3358z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_genericzd2defaultzd2zz__objectz00(obj_t);
	static BgL_z62conditionz62_bglt BGl_z62lambda1831z62zz__objectz00(obj_t);
	static BgL_objectz00_bglt BGl_z62allocatezd2instancezb0zz__objectz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1914z62zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1915z62zz__objectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31941ze3ze5zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62genericzd2defaultzb0zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62classzd2evdatazd2setz12z70zz__objectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3441z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_z62iozd2readzd2errorz62zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3363z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_symbol3446z00zz__objectz00 = BUNSPEC;
	BGL_EXPORTED_DECL int
		BGl_bigloozd2genericzd2bucketzd2siza7ez75zz__objectz00();
	static obj_t BGl_symbol3368z00zz__objectz00 = BUNSPEC;
	static obj_t BGl_z62bigloozd2genericzd2bucketzd2powzb0zz__objectz00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2abstractzf3zd2envzf3zz__objectz00,
		BgL_bgl_za762classza7d2abstr3545z00,
		BGl_z62classzd2abstractzf3z43zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2nilzd2initz12zd2envzc0zz__objectz00,
		BgL_bgl_za762classza7d2nilza7d3546za7,
		BGl_z62classzd2nilzd2initz12z70zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2genericzd2bucketzd2siza7ezd2envza7zz__objectz00,
		BgL_bgl_za762biglooza7d2gene3547z00,
		BGl_z62bigloozd2genericzd2bucketzd2siza7ez17zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genericzd2addzd2methodz12zd2envzc0zz__objectz00,
		BgL_bgl_za762genericza7d2add3548z00,
		BGl_z62genericzd2addzd2methodz12z70zz__objectz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_registerzd2genericz12zd2envz12zz__objectz00,
		BgL_bgl_za762registerza7d2ge3549z00,
		BGl_z62registerzd2genericz12za2zz__objectz00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_objectzd2hashnumberzd2envz00zz__objectz00,
		BgL_bgl_za762objectza7d2hash3550z00,
		BGl_z62objectzd2hashnumberzb0zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2ze3genericzd2envze3zz__objectz00,
		BgL_bgl_za762procedureza7d2za73551za7,
		BGl_z62procedurezd2ze3genericz53zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2superzd2envz00zz__objectz00,
		BgL_bgl_za762classza7d2super3552z00, BGl_z62classzd2superzb0zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2methodzd2fromzd2envzd2zz__objectz00,
		BgL_bgl_za762findza7d2method3553z00,
		BGl_z62findzd2methodzd2fromz62zz__objectz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_objectzd2wideningzd2envz00zz__objectz00,
		BgL_bgl_za762objectza7d2wide3554z00,
		BGl_z62objectzd2wideningzb0zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2classzf3zd2envzf3zz__objectz00,
		BgL_bgl_za762evalza7d2classza73555za7,
		BGl_z62evalzd2classzf3z43zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2fieldzd2defaultzd2valuezd2envz00zz__objectz00,
		BgL_bgl_za762classza7d2field3556z00,
		BGl_z62classzd2fieldzd2defaultzd2valuezb0zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_exceptionzd2notifyzd2envz00zz__objectz00,
		BgL_bgl_za762exceptionza7d2n3557z00,
		BGl_z62exceptionzd2notifyzb0zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3301z00zz__objectz00,
		BgL_bgl_string3301za700za7za7_3558za7, "max-class", 9);
	      DEFINE_STRING(BGl_string3303z00zz__objectz00,
		BgL_bgl_string3303za700za7za7_3559za7, "max-generic", 11);
	      DEFINE_STRING(BGl_string3304z00zz__objectz00,
		BgL_bgl_string3304za700za7za7_3560za7, "Illegal super-class for class", 29);
	      DEFINE_STRING(BGl_string3305z00zz__objectz00,
		BgL_bgl_string3305za700za7za7_3561za7, "register-class!", 15);
	      DEFINE_STRING(BGl_string3306z00zz__objectz00,
		BgL_bgl_string3306za700za7za7_3562za7, "Fields not a vector", 19);
	      DEFINE_STRING(BGl_string3307z00zz__objectz00,
		BgL_bgl_string3307za700za7za7_3563za7, ")", 1);
	      DEFINE_STRING(BGl_string3308z00zz__objectz00,
		BgL_bgl_string3308za700za7za7_3564za7, "@", 1);
	      DEFINE_STRING(BGl_string3309z00zz__objectz00,
		BgL_bgl_string3309za700za7za7_3565za7, "\" (", 3);
	      DEFINE_STRING(BGl_string3310z00zz__objectz00,
		BgL_bgl_string3310za700za7za7_3566za7, "Dangerous class redefinition: \"",
		31);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2classzd2envz00zz__objectz00,
		BgL_bgl_za762findza7d2classza73567za7, BGl_z62findzd2classzb0zz__objectz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3311z00zz__objectz00,
		BgL_bgl_string3311za700za7za7_3568za7, "&register-class!", 16);
	      DEFINE_STRING(BGl_string3312z00zz__objectz00,
		BgL_bgl_string3312za700za7za7_3569za7,
		"unoptimal bigloo-generic-bucket-size: ", 38);
	      DEFINE_STRING(BGl_string3313z00zz__objectz00,
		BgL_bgl_string3313za700za7za7_3570za7, "make-method-array", 17);
	      DEFINE_STRING(BGl_string3314z00zz__objectz00,
		BgL_bgl_string3314za700za7za7_3571za7, "No default behavior", 19);
	      DEFINE_STRING(BGl_string3315z00zz__objectz00,
		BgL_bgl_string3315za700za7za7_3572za7, "&procedure->generic", 19);
	      DEFINE_STRING(BGl_string3316z00zz__objectz00,
		BgL_bgl_string3316za700za7za7_3573za7, "&register-generic!", 18);
	      DEFINE_STRING(BGl_string3235z00zz__objectz00,
		BgL_bgl_string3235za700za7za7_3574za7, "/tmp/4.4a/runtime/Llib/object.scm",
		33);
	      DEFINE_STRING(BGl_string3317z00zz__objectz00,
		BgL_bgl_string3317za700za7za7_3575za7, "", 0);
	      DEFINE_STRING(BGl_string3236z00zz__objectz00,
		BgL_bgl_string3236za700za7za7_3576za7, "&class-exists", 13);
	      DEFINE_STRING(BGl_string3318z00zz__objectz00,
		BgL_bgl_string3318za700za7za7_3577za7,
		"method/generic arity mismatch, expecting ~a", 43);
	      DEFINE_STRING(BGl_string3237z00zz__objectz00,
		BgL_bgl_string3237za700za7za7_3578za7, "symbol", 6);
	      DEFINE_STRING(BGl_string3319z00zz__objectz00,
		BgL_bgl_string3319za700za7za7_3579za7, "Illegal class for method", 24);
	      DEFINE_STRING(BGl_string3238z00zz__objectz00,
		BgL_bgl_string3238za700za7za7_3580za7, "find-class", 10);
	      DEFINE_STRING(BGl_string3239z00zz__objectz00,
		BgL_bgl_string3239za700za7za7_3581za7, "Cannot find class", 17);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_objectzd2writezd2envz00zz__objectz00,
		BgL_bgl_za762objectza7d2writ3582z00, va_generic_entry,
		BGl_z62objectzd2writezb0zz__objectz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzf3zd2envz21zz__objectz00,
		BgL_bgl_za762classza7f3za791za7za73583za7, BGl_z62classzf3z91zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2subclasseszd2envz00zz__objectz00,
		BgL_bgl_za762classza7d2subcl3584z00,
		BGl_z62classzd2subclasseszb0zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3320z00zz__objectz00,
		BgL_bgl_string3320za700za7za7_3585za7, "&generic-add-method!", 20);
	      DEFINE_STRING(BGl_string3402z00zz__objectz00,
		BgL_bgl_string3402za700za7za7_3586za7, "index", 5);
	      DEFINE_STRING(BGl_string3321z00zz__objectz00,
		BgL_bgl_string3321za700za7za7_3587za7, "&generic-add-eval-method!", 25);
	      DEFINE_STRING(BGl_string3240z00zz__objectz00,
		BgL_bgl_string3240za700za7za7_3588za7, "&find-class", 11);
	      DEFINE_STRING(BGl_string3322z00zz__objectz00,
		BgL_bgl_string3322za700za7za7_3589za7, "&find-method", 12);
	      DEFINE_STRING(BGl_string3241z00zz__objectz00,
		BgL_bgl_string3241za700za7za7_3590za7, "&find-class-by-hash", 19);
	      DEFINE_STRING(BGl_string3323z00zz__objectz00,
		BgL_bgl_string3323za700za7za7_3591za7, "&find-super-class-method", 24);
	      DEFINE_STRING(BGl_string3242z00zz__objectz00,
		BgL_bgl_string3242za700za7za7_3592za7, "bint", 4);
	      DEFINE_STRING(BGl_string3324z00zz__objectz00,
		BgL_bgl_string3324za700za7za7_3593za7, "&find-method-from", 17);
	      DEFINE_STRING(BGl_string3243z00zz__objectz00,
		BgL_bgl_string3243za700za7za7_3594za7, "&class-name", 11);
	      DEFINE_STRING(BGl_string3325z00zz__objectz00,
		BgL_bgl_string3325za700za7za7_3595za7, "&nil?", 5);
	      DEFINE_STRING(BGl_string3244z00zz__objectz00,
		BgL_bgl_string3244za700za7za7_3596za7, "class", 5);
	      DEFINE_STRING(BGl_string3407z00zz__objectz00,
		BgL_bgl_string3407za700za7za7_3597za7, "&index-out-of-bounds-error", 26);
	      DEFINE_STRING(BGl_string3326z00zz__objectz00,
		BgL_bgl_string3326za700za7za7_3598za7, "&isa?", 5);
	      DEFINE_STRING(BGl_string3245z00zz__objectz00,
		BgL_bgl_string3245za700za7za7_3599za7, "&class-module", 13);
	      DEFINE_STRING(BGl_string3327z00zz__objectz00,
		BgL_bgl_string3327za700za7za7_3600za7, "&%isa/cdepth?", 13);
	      DEFINE_STRING(BGl_string3246z00zz__objectz00,
		BgL_bgl_string3246za700za7za7_3601za7, "&class-num", 10);
	      DEFINE_STRING(BGl_string3328z00zz__objectz00,
		BgL_bgl_string3328za700za7za7_3602za7, "&%isa-object/cdepth?", 20);
	      DEFINE_STRING(BGl_string3247z00zz__objectz00,
		BgL_bgl_string3247za700za7za7_3603za7, "&class-virtual", 14);
	      DEFINE_STRING(BGl_string3329z00zz__objectz00,
		BgL_bgl_string3329za700za7za7_3604za7, "&%isa/final?", 12);
	      DEFINE_STRING(BGl_string3248z00zz__objectz00,
		BgL_bgl_string3248za700za7za7_3605za7, "&class-evdata", 13);
	      DEFINE_STRING(BGl_string3249z00zz__objectz00,
		BgL_bgl_string3249za700za7za7_3606za7, "&class-evdata-set!", 18);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2creatorzd2envz00zz__objectz00,
		BgL_bgl_za762classza7d2creat3607z00, BGl_z62classzd2creatorzb0zz__objectz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3400z00zz__objectz00,
		BgL_bgl_za762lambda1930za7623608z00, BGl_z62lambda1930z62zz__objectz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genericzd2methodzd2arrayzd2envzd2zz__objectz00,
		BgL_bgl_za762genericza7d2met3609z00,
		BGl_z62genericzd2methodzd2arrayz62zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3403z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3610za7,
		BGl_z62zc3z04anonymousza31926ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3404z00zz__objectz00,
		BgL_bgl_za762lambda1924za7623611z00, BGl_z62lambda1924z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3405z00zz__objectz00,
		BgL_bgl_za762lambda1921za7623612z00, BGl_z62lambda1921z62zz__objectz00, 0L,
		BUNSPEC, 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2namezd2envz00zz__objectz00,
		BgL_bgl_za762classza7d2nameza73613za7, BGl_z62classzd2namezb0zz__objectz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3330z00zz__objectz00,
		BgL_bgl_string3330za700za7za7_3614za7, "&%isa-object/final?", 19);
	      DEFINE_STRING(BGl_string3412z00zz__objectz00,
		BgL_bgl_string3412za700za7za7_3615za7, "&io-error", 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3408z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3616za7,
		BGl_z62zc3z04anonymousza31941ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3331z00zz__objectz00,
		BgL_bgl_string3331za700za7za7_3617za7, "allocate-instance", 17);
	      DEFINE_STRING(BGl_string3250z00zz__objectz00,
		BgL_bgl_string3250za700za7za7_3618za7, "class-evfields-set!", 19);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2hashzd2envz00zz__objectz00,
		BgL_bgl_za762classza7d2hashza73619za7, BGl_z62classzd2hashzb0zz__objectz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3409z00zz__objectz00,
		BgL_bgl_za762lambda1939za7623620z00, BGl_z62lambda1939z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3332z00zz__objectz00,
		BgL_bgl_string3332za700za7za7_3621za7, "&allocate-instance", 18);
	      DEFINE_STRING(BGl_string3251z00zz__objectz00,
		BgL_bgl_string3251za700za7za7_3622za7, "Fields already set", 18);
	      DEFINE_STRING(BGl_string3333z00zz__objectz00,
		BgL_bgl_string3333za700za7za7_3623za7, "&wide-object?", 13);
	      DEFINE_STRING(BGl_string3252z00zz__objectz00,
		BgL_bgl_string3252za700za7za7_3624za7, "Not an eval class", 17);
	      DEFINE_STRING(BGl_string3334z00zz__objectz00,
		BgL_bgl_string3334za700za7za7_3625za7, "&call-virtual-getter", 20);
	      DEFINE_STRING(BGl_string3253z00zz__objectz00,
		BgL_bgl_string3253za700za7za7_3626za7, "&class-evfields-set!", 20);
	      DEFINE_STRING(BGl_string3335z00zz__objectz00,
		BgL_bgl_string3335za700za7za7_3627za7, "&call-virtual-setter", 20);
	      DEFINE_STRING(BGl_string3254z00zz__objectz00,
		BgL_bgl_string3254za700za7za7_3628za7, "vector", 6);
	      DEFINE_STRING(BGl_string3417z00zz__objectz00,
		BgL_bgl_string3417za700za7za7_3629za7, "&io-port-error", 14);
	      DEFINE_STRING(BGl_string3336z00zz__objectz00,
		BgL_bgl_string3336za700za7za7_3630za7, "&call-next-virtual-getter", 25);
	      DEFINE_STRING(BGl_string3255z00zz__objectz00,
		BgL_bgl_string3255za700za7za7_3631za7, "&class-fields", 13);
	      DEFINE_STRING(BGl_string3337z00zz__objectz00,
		BgL_bgl_string3337za700za7za7_3632za7, "&call-next-virtual-setter", 25);
	      DEFINE_STRING(BGl_string3256z00zz__objectz00,
		BgL_bgl_string3256za700za7za7_3633za7, "&class-all-fields", 17);
	      DEFINE_STRING(BGl_string3338z00zz__objectz00,
		BgL_bgl_string3338za700za7za7_3634za7, "&object-widening", 16);
	      DEFINE_STRING(BGl_string3257z00zz__objectz00,
		BgL_bgl_string3257za700za7za7_3635za7, "&find-class-field", 17);
	      DEFINE_STRING(BGl_string3339z00zz__objectz00,
		BgL_bgl_string3339za700za7za7_3636za7, "&object-widening-set!", 21);
	      DEFINE_STRING(BGl_string3258z00zz__objectz00,
		BgL_bgl_string3258za700za7za7_3637za7, "&make-class-field", 17);
	      DEFINE_STRING(BGl_string3259z00zz__objectz00,
		BgL_bgl_string3259za700za7za7_3638za7, "&class-field-name", 17);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2evdatazd2envz00zz__objectz00,
		BgL_bgl_za762classza7d2evdat3639z00, BGl_z62classzd2evdatazb0zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2fieldzd2typezd2envzd2zz__objectz00,
		BgL_bgl_za762classza7d2field3640z00,
		BGl_z62classzd2fieldzd2typez62zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3410z00zz__objectz00,
		BgL_bgl_za762lambda1937za7623641z00, BGl_z62lambda1937z62zz__objectz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3413z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3642za7,
		BGl_z62zc3z04anonymousza31952ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3414z00zz__objectz00,
		BgL_bgl_za762lambda1949za7623643z00, BGl_z62lambda1949z62zz__objectz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52objectzd2wideningzd2envz52zz__objectz00,
		BgL_bgl_za762za752objectza7d2w3644za7,
		BGl_z62z52objectzd2wideningze2zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3415z00zz__objectz00,
		BgL_bgl_za762lambda1947za7623645z00, BGl_z62lambda1947z62zz__objectz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STRING(BGl_string3502z00zz__objectz00,
		BgL_bgl_string3502za700za7za7_3646za7, "&access-control-exception", 25);
	      DEFINE_STRING(BGl_string3340z00zz__objectz00,
		BgL_bgl_string3340za700za7za7_3647za7, "&%object-widening", 17);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_genericzd2nozd2defaultzd2behaviorzd2envz00zz__objectz00,
		BgL_bgl_za762genericza7d2noza73648za7, va_generic_entry,
		BGl_z62genericzd2nozd2defaultzd2behaviorzb0zz__objectz00, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string3422z00zz__objectz00,
		BgL_bgl_string3422za700za7za7_3649za7, "&io-read-error", 14);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3418z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3650za7,
		BGl_z62zc3z04anonymousza31962ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3341z00zz__objectz00,
		BgL_bgl_string3341za700za7za7_3651za7, "&%object-widening-set!", 22);
	      DEFINE_STRING(BGl_string3260z00zz__objectz00,
		BgL_bgl_string3260za700za7za7_3652za7, "class-field", 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3419z00zz__objectz00,
		BgL_bgl_za762lambda1960za7623653z00, BGl_z62lambda1960z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3261z00zz__objectz00,
		BgL_bgl_string3261za700za7za7_3654za7, "&class-field-virtual?", 21);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2fieldzd2mutatorzd2envzd2zz__objectz00,
		BgL_bgl_za762classza7d2field3655z00,
		BGl_z62classzd2fieldzd2mutatorz62zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3262z00zz__objectz00,
		BgL_bgl_string3262za700za7za7_3656za7, "&class-field-accessor", 21);
	      DEFINE_STRING(BGl_string3506z00zz__objectz00,
		BgL_bgl_string3506za700za7za7_3657za7, "args", 4);
	      DEFINE_STRING(BGl_string3263z00zz__objectz00,
		BgL_bgl_string3263za700za7za7_3658za7, "&class-field-mutable?", 21);
	      DEFINE_STRING(BGl_string3264z00zz__objectz00,
		BgL_bgl_string3264za700za7za7_3659za7, "&class-field-mutator", 20);
	      DEFINE_STRING(BGl_string3427z00zz__objectz00,
		BgL_bgl_string3427za700za7za7_3660za7, "&io-write-error", 15);
	      DEFINE_STRING(BGl_string3265z00zz__objectz00,
		BgL_bgl_string3265za700za7za7_3661za7, "&class-field-info", 17);
	      DEFINE_STRING(BGl_string3347z00zz__objectz00,
		BgL_bgl_string3347za700za7za7_3662za7, "__object", 8);
	      DEFINE_STRING(BGl_string3266z00zz__objectz00,
		BgL_bgl_string3266za700za7za7_3663za7, "&class-field-default-value?", 27);
	      DEFINE_STRING(BGl_string3267z00zz__objectz00,
		BgL_bgl_string3267za700za7za7_3664za7, "class-field-default-value", 25);
	      DEFINE_STRING(BGl_string3268z00zz__objectz00,
		BgL_bgl_string3268za700za7za7_3665za7, "This field has no default value",
		31);
	      DEFINE_STRING(BGl_string3269z00zz__objectz00,
		BgL_bgl_string3269za700za7za7_3666za7, "&class-field-default-value", 26);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2fieldzd2accessorzd2envzd2zz__objectz00,
		BgL_bgl_za762classza7d2field3667z00,
		BGl_z62classzd2fieldzd2accessorz62zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3500z00zz__objectz00,
		BgL_bgl_za762lambda2110za7623668z00, BGl_z62lambda2110z62zz__objectz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3420z00zz__objectz00,
		BgL_bgl_za762lambda1958za7623669z00, BGl_z62lambda1958z62zz__objectz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3503z00zz__objectz00,
		BgL_bgl_za762lambda2146za7623670z00, BGl_z62lambda2146z62zz__objectz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3504z00zz__objectz00,
		BgL_bgl_za762lambda2145za7623671z00, BGl_z62lambda2145z62zz__objectz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3423z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3672za7,
		BGl_z62zc3z04anonymousza31972ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3342z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3673za7,
		BGl_z62zc3z04anonymousza31823ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3424z00zz__objectz00,
		BgL_bgl_za762lambda1970za7623674z00, BGl_z62lambda1970z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3343z00zz__objectz00,
		BgL_bgl_za762lambda1821za7623675z00, BGl_z62lambda1821z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3425z00zz__objectz00,
		BgL_bgl_za762lambda1968za7623676z00, BGl_z62lambda1968z62zz__objectz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3344z00zz__objectz00,
		BgL_bgl_za762lambda1819za7623677z00, BGl_z62lambda1819z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3511z00zz__objectz00,
		BgL_bgl_string3511za700za7za7_3678za7, "&warning", 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3507z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3679za7,
		BGl_z62zc3z04anonymousza32141ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3508z00zz__objectz00,
		BgL_bgl_za762lambda2138za7623680z00, BGl_z62lambda2138z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3509z00zz__objectz00,
		BgL_bgl_za762lambda2136za7623681z00, BGl_z62lambda2136z62zz__objectz00, 0L,
		BUNSPEC, 4);
	      DEFINE_STRING(BGl_string3432z00zz__objectz00,
		BgL_bgl_string3432za700za7za7_3682za7, "&io-closed-error", 16);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3428z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3683za7,
		BGl_z62zc3z04anonymousza31982ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3270z00zz__objectz00,
		BgL_bgl_string3270za700za7za7_3684za7, "&class-field-type", 17);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3429z00zz__objectz00,
		BgL_bgl_za762lambda1980za7623685z00, BGl_z62lambda1980z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3352z00zz__objectz00,
		BgL_bgl_string3352za700za7za7_3686za7, "&condition", 10);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3348z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3687za7,
		BGl_z62zc3z04anonymousza31833ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3271z00zz__objectz00,
		BgL_bgl_string3271za700za7za7_3688za7, "&class-super", 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3349z00zz__objectz00,
		BgL_bgl_za762lambda1831za7623689z00, BGl_z62lambda1831z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3272z00zz__objectz00,
		BgL_bgl_string3272za700za7za7_3690za7, "class-allocator", 15);
	      DEFINE_STRING(BGl_string3516z00zz__objectz00,
		BgL_bgl_string3516za700za7za7_3691za7, "&eval-warning", 13);
	      DEFINE_STRING(BGl_string3273z00zz__objectz00,
		BgL_bgl_string3273za700za7za7_3692za7, "&class-abstract?", 16);
	      DEFINE_STRING(BGl_string3274z00zz__objectz00,
		BgL_bgl_string3274za700za7za7_3693za7, "class-shrink", 12);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2virtualzd2envz00zz__objectz00,
		BgL_bgl_za762classza7d2virtu3694z00, BGl_z62classzd2virtualzb0zz__objectz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3518z00zz__objectz00,
		BgL_bgl_string3518za700za7za7_3695za7, "object-display1386", 18);
	      DEFINE_STRING(BGl_string3437z00zz__objectz00,
		BgL_bgl_string3437za700za7za7_3696za7, "&io-file-not-found-error", 24);
	      DEFINE_STRING(BGl_string3275z00zz__objectz00,
		BgL_bgl_string3275za700za7za7_3697za7, "&class-wide?", 12);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_widezd2objectzf3zd2envzf3zz__objectz00,
		BgL_bgl_za762wideza7d2object3698z00,
		BGl_z62widezd2objectzf3z43zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3357z00zz__objectz00,
		BgL_bgl_string3357za700za7za7_3699za7, "fname", 5);
	      DEFINE_STRING(BGl_string3276z00zz__objectz00,
		BgL_bgl_string3276za700za7za7_3700za7, "&class-subclasses", 17);
	      DEFINE_STRING(BGl_string3277z00zz__objectz00,
		BgL_bgl_string3277za700za7za7_3701za7, "&class-allocator", 16);
	      DEFINE_STRING(BGl_string3359z00zz__objectz00,
		BgL_bgl_string3359za700za7za7_3702za7, "obj", 3);
	      DEFINE_STRING(BGl_string3278z00zz__objectz00,
		BgL_bgl_string3278za700za7za7_3703za7, "&class-hash", 11);
	      DEFINE_STRING(BGl_string3279z00zz__objectz00,
		BgL_bgl_string3279za700za7za7_3704za7, "&class-constructor", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2fieldzd2defaultzd2valuezf3zd2envzf3zz__objectz00,
		BgL_bgl_za762classza7d2field3705z00,
		BGl_z62classzd2fieldzd2defaultzd2valuezf3z43zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2fieldszd2envz00zz__objectz00,
		BgL_bgl_za762classza7d2field3706z00, BGl_z62classzd2fieldszb0zz__objectz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3430z00zz__objectz00,
		BgL_bgl_za762lambda1978za7623707z00, BGl_z62lambda1978z62zz__objectz00, 0L,
		BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2nextzd2virtualzd2getterzd2envz00zz__objectz00,
		BgL_bgl_za762callza7d2nextza7d3708za7,
		BGl_z62callzd2nextzd2virtualzd2getterzb0zz__objectz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3512z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3709za7,
		BGl_z62zc3z04anonymousza32157ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3350z00zz__objectz00,
		BgL_bgl_za762lambda1829za7623710z00, BGl_z62lambda1829z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3513z00zz__objectz00,
		BgL_bgl_za762lambda2155za7623711z00, BGl_z62lambda2155z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3514z00zz__objectz00,
		BgL_bgl_za762lambda2153za7623712z00, BGl_z62lambda2153z62zz__objectz00, 0L,
		BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3433z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3713za7,
		BGl_z62zc3z04anonymousza31992ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3434z00zz__objectz00,
		BgL_bgl_za762lambda1990za7623714z00, BGl_z62lambda1990z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3353z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3715za7,
		BGl_z62zc3z04anonymousza31856ze3ze5zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3520z00zz__objectz00,
		BgL_bgl_string3520za700za7za7_3716za7, "object-write1390", 16);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3435z00zz__objectz00,
		BgL_bgl_za762lambda1988za7623717z00, BGl_z62lambda1988z62zz__objectz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3354z00zz__objectz00,
		BgL_bgl_za762lambda1855za7623718z00, BGl_z62lambda1855z62zz__objectz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3517z00zz__objectz00,
		BgL_bgl_za762objectza7d2disp3719z00, va_generic_entry,
		BGl_z62objectzd2display1386zb0zz__objectz00, BUNSPEC, -2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3355z00zz__objectz00,
		BgL_bgl_za762lambda1854za7623720z00, BGl_z62lambda1854z62zz__objectz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3522z00zz__objectz00,
		BgL_bgl_string3522za700za7za7_3721za7, "object-hashnumber1392", 21);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3519z00zz__objectz00,
		BgL_bgl_za762objectza7d2writ3722z00, va_generic_entry,
		BGl_z62objectzd2write1390zb0zz__objectz00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string3442z00zz__objectz00,
		BgL_bgl_string3442za700za7za7_3723za7, "&io-parse-error", 15);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3438z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3724za7,
		BGl_z62zc3z04anonymousza32003ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3280z00zz__objectz00,
		BgL_bgl_string3280za700za7za7_3725za7, "&class-creator", 14);
	      DEFINE_STRING(BGl_string3524z00zz__objectz00,
		BgL_bgl_string3524za700za7za7_3726za7, "object-print1394", 16);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3439z00zz__objectz00,
		BgL_bgl_za762lambda2001za7623727z00, BGl_z62lambda2001z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3281z00zz__objectz00,
		BgL_bgl_string3281za700za7za7_3728za7, "&class-nil-init!", 16);
	      DEFINE_STRING(BGl_string3282z00zz__objectz00,
		BgL_bgl_string3282za700za7za7_3729za7, "&class-nil", 10);
	      DEFINE_STRING(BGl_string3526z00zz__objectz00,
		BgL_bgl_string3526za700za7za7_3730za7, "object-equal?1398", 17);
	      DEFINE_STRING(BGl_string3364z00zz__objectz00,
		BgL_bgl_string3364za700za7za7_3731za7, "location", 8);
	      DEFINE_STRING(BGl_string3283z00zz__objectz00,
		BgL_bgl_string3283za700za7za7_3732za7, "&object-class-num", 17);
	      DEFINE_STRING(BGl_string3284z00zz__objectz00,
		BgL_bgl_string3284za700za7za7_3733za7, "object", 6);
	      DEFINE_STRING(BGl_string3528z00zz__objectz00,
		BgL_bgl_string3528za700za7za7_3734za7, "exception-notify1400", 20);
	      DEFINE_STRING(BGl_string3447z00zz__objectz00,
		BgL_bgl_string3447za700za7za7_3735za7, "&io-unknown-host-error", 22);
	      DEFINE_STRING(BGl_string3285z00zz__objectz00,
		BgL_bgl_string3285za700za7za7_3736za7, "&object-class-num-set!", 22);
	      DEFINE_STRING(BGl_string3529z00zz__objectz00,
		BgL_bgl_string3529za700za7za7_3737za7, "*** UNKNOWN EXCEPTION: ", 23);
	      DEFINE_STRING(BGl_string3286z00zz__objectz00,
		BgL_bgl_string3286za700za7za7_3738za7, "&object-class", 13);
	      DEFINE_STRING(BGl_string3287z00zz__objectz00,
		BgL_bgl_string3287za700za7za7_3739za7, "&generic-default", 16);
	      DEFINE_STRING(BGl_string3369z00zz__objectz00,
		BgL_bgl_string3369za700za7za7_3740za7, "stack", 5);
	      DEFINE_STRING(BGl_string3288z00zz__objectz00,
		BgL_bgl_string3288za700za7za7_3741za7, "procedure", 9);
	      DEFINE_STRING(BGl_string3289z00zz__objectz00,
		BgL_bgl_string3289za700za7za7_3742za7, "&generic-method-array", 21);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3521z00zz__objectz00,
		BgL_bgl_za762objectza7d2hash3743z00,
		BGl_z62objectzd2hashnumber1392zb0zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3440z00zz__objectz00,
		BgL_bgl_za762lambda1999za7623744z00, BGl_z62lambda1999z62zz__objectz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3360z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3745za7,
		BGl_z62zc3z04anonymousza31864ze3ze5zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3523z00zz__objectz00,
		BgL_bgl_za762objectza7d2prin3746z00,
		BGl_z62objectzd2print1394zb0zz__objectz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3361z00zz__objectz00,
		BgL_bgl_za762lambda1863za7623747z00, BGl_z62lambda1863z62zz__objectz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3443z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3748za7,
		BGl_z62zc3z04anonymousza32015ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3362z00zz__objectz00,
		BgL_bgl_za762lambda1862za7623749z00, BGl_z62lambda1862z62zz__objectz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3525z00zz__objectz00,
		BgL_bgl_za762objectza7d2equa3750z00,
		BGl_z62objectzd2equalzf31398z43zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3444z00zz__objectz00,
		BgL_bgl_za762lambda2013za7623751z00, BGl_z62lambda2013z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3530z00zz__objectz00,
		BgL_bgl_string3530za700za7za7_3752za7, " [[", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3445z00zz__objectz00,
		BgL_bgl_za762lambda2011za7623753z00, BGl_z62lambda2011z62zz__objectz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STRING(BGl_string3531z00zz__objectz00,
		BgL_bgl_string3531za700za7za7_3754za7, "]]", 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3527z00zz__objectz00,
		BgL_bgl_za762exceptionza7d2n3755z00,
		BGl_z62exceptionzd2notify1400zb0zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3365z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3756za7,
		BGl_z62zc3z04anonymousza31873ze3ze5zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3532z00zz__objectz00,
		BgL_bgl_string3532za700za7za7_3757za7, " [", 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3366z00zz__objectz00,
		BgL_bgl_za762lambda1872za7623758z00, BGl_z62lambda1872z62zz__objectz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52isazf2cdepthzf3zd2envz81zz__objectz00,
		BgL_bgl_za762za752isaza7f2cdep3759za7,
		BGl_z62z52isazf2cdepthzf3z31zz__objectz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string3533z00zz__objectz00,
		BgL_bgl_string3533za700za7za7_3760za7, "#|", 2);
	      DEFINE_STRING(BGl_string3452z00zz__objectz00,
		BgL_bgl_string3452za700za7za7_3761za7, "&io-malformed-url-error", 23);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3448z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3762za7,
		BGl_z62zc3z04anonymousza32027ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3367z00zz__objectz00,
		BgL_bgl_za762lambda1871za7623763z00, BGl_z62lambda1871z62zz__objectz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3290z00zz__objectz00,
		BgL_bgl_string3290za700za7za7_3764za7, "&method-array-ref", 17);
	      DEFINE_STRING(BGl_string3534z00zz__objectz00,
		BgL_bgl_string3534za700za7za7_3765za7, " nil|", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3449z00zz__objectz00,
		BgL_bgl_za762lambda2024za7623766z00, BGl_z62lambda2024z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3535z00zz__objectz00,
		BgL_bgl_string3535za700za7za7_3767za7, "&object-display", 15);
	      DEFINE_STRING(BGl_string3292z00zz__objectz00,
		BgL_bgl_string3292za700za7za7_3768za7, "generic", 7);
	      DEFINE_STRING(BGl_string3536z00zz__objectz00,
		BgL_bgl_string3536za700za7za7_3769za7, "&object-write", 13);
	      DEFINE_STRING(BGl_string3374z00zz__objectz00,
		BgL_bgl_string3374za700za7za7_3770za7, "&exception", 10);
	      DEFINE_STRING(BGl_string3537z00zz__objectz00,
		BgL_bgl_string3537za700za7za7_3771za7, "&object-hashnumber", 18);
	      DEFINE_STRING(BGl_string3538z00zz__objectz00,
		BgL_bgl_string3538za700za7za7_3772za7, "&object-print", 13);
	      DEFINE_STRING(BGl_string3457z00zz__objectz00,
		BgL_bgl_string3457za700za7za7_3773za7, "&io-sigpipe-error", 17);
	      DEFINE_STRING(BGl_string3295z00zz__objectz00,
		BgL_bgl_string3295za700za7za7_3774za7, "mtable-size", 11);
	      DEFINE_STRING(BGl_string3539z00zz__objectz00,
		BgL_bgl_string3539za700za7za7_3775za7, "output-port", 11);
	      DEFINE_STRING(BGl_string3378z00zz__objectz00,
		BgL_bgl_string3378za700za7za7_3776za7, "proc", 4);
	      DEFINE_STRING(BGl_string3297z00zz__objectz00,
		BgL_bgl_string3297za700za7za7_3777za7, "method-array-size", 17);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_objectzd2printzd2envz00zz__objectz00,
		BgL_bgl_za762objectza7d2prin3778z00, BGl_z62objectzd2printzb0zz__objectz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_objectzf3zd2envz21zz__objectz00,
		BgL_bgl_za762objectza7f3za791za73779z00, BGl_z62objectzf3z91zz__objectz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3299z00zz__objectz00,
		BgL_bgl_string3299za700za7za7_3780za7, "generic-bucket-size", 19);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_objectzd2displayzd2envz00zz__objectz00,
		BgL_bgl_za762objectza7d2disp3781z00, va_generic_entry,
		BGl_z62objectzd2displayzb0zz__objectz00, BUNSPEC, -2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3450z00zz__objectz00,
		BgL_bgl_za762lambda2022za7623782z00, BGl_z62lambda2022z62zz__objectz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3370z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3783za7,
		BGl_z62zc3z04anonymousza31848ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3371z00zz__objectz00,
		BgL_bgl_za762lambda1846za7623784z00, BGl_z62lambda1846z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3453z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3785za7,
		BGl_z62zc3z04anonymousza32039ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3372z00zz__objectz00,
		BgL_bgl_za762lambda1842za7623786z00, BGl_z62lambda1842z62zz__objectz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3454z00zz__objectz00,
		BgL_bgl_za762lambda2037za7623787z00, BGl_z62lambda2037z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3540z00zz__objectz00,
		BgL_bgl_string3540za700za7za7_3788za7, "&object-equal?", 14);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3455z00zz__objectz00,
		BgL_bgl_za762lambda2035za7623789z00, BGl_z62lambda2035z62zz__objectz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3375z00zz__objectz00,
		BgL_bgl_za762lambda1889za7623790z00, BGl_z62lambda1889z62zz__objectz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3542z00zz__objectz00,
		BgL_bgl_string3542za700za7za7_3791za7, "exception-notify", 16);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3376z00zz__objectz00,
		BgL_bgl_za762lambda1888za7623792z00, BGl_z62lambda1888z62zz__objectz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3462z00zz__objectz00,
		BgL_bgl_string3462za700za7za7_3793za7, "&io-timeout-error", 17);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3458z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3794za7,
		BGl_z62zc3z04anonymousza32050ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3459z00zz__objectz00,
		BgL_bgl_za762lambda2048za7623795z00, BGl_z62lambda2048z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3382z00zz__objectz00,
		BgL_bgl_string3382za700za7za7_3796za7, "msg", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3379z00zz__objectz00,
		BgL_bgl_za762lambda1895za7623797z00, BGl_z62lambda1895z62zz__objectz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_allocatezd2instancezd2envz00zz__objectz00,
		BgL_bgl_za762allocateza7d2in3798z00,
		BGl_z62allocatezd2instancezb0zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3467z00zz__objectz00,
		BgL_bgl_string3467za700za7za7_3799za7, "&io-connection-error", 20);
	      DEFINE_STRING(BGl_string3389z00zz__objectz00,
		BgL_bgl_string3389za700za7za7_3800za7, "&error", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2classzd2fieldzd2envzd2zz__objectz00,
		BgL_bgl_za762makeza7d2classza73801za7,
		BGl_z62makezd2classzd2fieldz62zz__objectz00, 0L, BUNSPEC, 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3541z00zz__objectz00,
		BgL_bgl_za762exceptionza7d2n3802z00,
		BGl_z62exceptionzd2notifyzd2z62er1405z00zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3460z00zz__objectz00,
		BgL_bgl_za762lambda2046za7623803z00, BGl_z62lambda2046z62zz__objectz00, 0L,
		BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2classzd2byzd2hashzd2envz00zz__objectz00,
		BgL_bgl_za762findza7d2classza73804za7,
		BGl_z62findzd2classzd2byzd2hashzb0zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3380z00zz__objectz00,
		BgL_bgl_za762lambda1894za7623805z00, BGl_z62lambda1894z62zz__objectz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3543z00zz__objectz00,
		BgL_bgl_za762exceptionza7d2n3806z00,
		BGl_z62exceptionzd2notifyzd2z62io1407z00zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3544z00zz__objectz00,
		BgL_bgl_za762exceptionza7d2n3807z00,
		BGl_z62exceptionzd2notifyzd2z62wa1409z00zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3463z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3808za7,
		BGl_z62zc3z04anonymousza32062ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3464z00zz__objectz00,
		BgL_bgl_za762lambda2060za7623809z00, BGl_z62lambda2060z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3383z00zz__objectz00,
		BgL_bgl_za762lambda1900za7623810z00, BGl_z62lambda1900z62zz__objectz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3465z00zz__objectz00,
		BgL_bgl_za762lambda2058za7623811z00, BGl_z62lambda2058z62zz__objectz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3384z00zz__objectz00,
		BgL_bgl_za762lambda1899za7623812z00, BGl_z62lambda1899z62zz__objectz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3385z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3813za7,
		BGl_z62zc3z04anonymousza31884ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3386z00zz__objectz00,
		BgL_bgl_za762lambda1882za7623814z00, BGl_z62lambda1882z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3472z00zz__objectz00,
		BgL_bgl_string3472za700za7za7_3815za7, "&process-exception", 18);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3468z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3816za7,
		BGl_z62zc3z04anonymousza32076ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3387z00zz__objectz00,
		BgL_bgl_za762lambda1880za7623817z00, BGl_z62lambda1880z62zz__objectz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3469z00zz__objectz00,
		BgL_bgl_za762lambda2072za7623818z00, BGl_z62lambda2072z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3393z00zz__objectz00,
		BgL_bgl_string3393za700za7za7_3819za7, "type", 4);
	      DEFINE_STRING(BGl_string3477z00zz__objectz00,
		BgL_bgl_string3477za700za7za7_3820za7, "&stack-overflow-error", 21);
	      DEFINE_STRING(BGl_string3398z00zz__objectz00,
		BgL_bgl_string3398za700za7za7_3821za7, "&type-error", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52isazd2objectzf2cdepthzf3zd2envz53zz__objectz00,
		BgL_bgl_za762za752isaza7d2obje3822za7,
		BGl_z62z52isazd2objectzf2cdepthzf3ze3zz__objectz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3470z00zz__objectz00,
		BgL_bgl_za762lambda2070za7623823z00, BGl_z62lambda2070z62zz__objectz00, 0L,
		BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2fieldzd2infozd2envzd2zz__objectz00,
		BgL_bgl_za762classza7d2field3824z00,
		BGl_z62classzd2fieldzd2infoz62zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3390z00zz__objectz00,
		BgL_bgl_za762lambda1915za7623825z00, BGl_z62lambda1915z62zz__objectz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3391z00zz__objectz00,
		BgL_bgl_za762lambda1914za7623826z00, BGl_z62lambda1914z62zz__objectz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3473z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3827za7,
		BGl_z62zc3z04anonymousza32086ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3474z00zz__objectz00,
		BgL_bgl_za762lambda2084za7623828z00, BGl_z62lambda2084z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3475z00zz__objectz00,
		BgL_bgl_za762lambda2082za7623829z00, BGl_z62lambda2082z62zz__objectz00, 0L,
		BUNSPEC, 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3394z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3830za7,
		BGl_z62zc3z04anonymousza31910ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3395z00zz__objectz00,
		BgL_bgl_za762lambda1908za7623831z00, BGl_z62lambda1908z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3396z00zz__objectz00,
		BgL_bgl_za762lambda1906za7623832z00, BGl_z62lambda1906z62zz__objectz00, 0L,
		BUNSPEC, 7);
	      DEFINE_STRING(BGl_string3482z00zz__objectz00,
		BgL_bgl_string3482za700za7za7_3833za7, "message", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3478z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3834za7,
		BGl_z62zc3z04anonymousza32104ze3ze5zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3479z00zz__objectz00,
		BgL_bgl_za762lambda2103za7623835z00, BGl_z62lambda2103z62zz__objectz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3484z00zz__objectz00,
		BgL_bgl_string3484za700za7za7_3836za7, "bstring", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3399z00zz__objectz00,
		BgL_bgl_za762lambda1931za7623837z00, BGl_z62lambda1931z62zz__objectz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3489z00zz__objectz00,
		BgL_bgl_string3489za700za7za7_3838za7, "&security-exception", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2typeszd2numberzd2envzd2zz__objectz00,
		BgL_bgl_za762biglooza7d2type3839z00,
		BGl_z62bigloozd2typeszd2numberz62zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3480z00zz__objectz00,
		BgL_bgl_za762lambda2102za7623840z00, BGl_z62lambda2102z62zz__objectz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3485z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3841za7,
		BGl_z62zc3z04anonymousza32096ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3486z00zz__objectz00,
		BgL_bgl_za762lambda2094za7623842z00, BGl_z62lambda2094z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3487z00zz__objectz00,
		BgL_bgl_za762lambda2092za7623843z00, BGl_z62lambda2092z62zz__objectz00, 0L,
		BUNSPEC, 4);
	      DEFINE_STRING(BGl_string3497z00zz__objectz00,
		BgL_bgl_string3497za700za7za7_3844za7, "permission", 10);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2nilzd2envz00zz__objectz00,
		BgL_bgl_za762classza7d2nilza7b3845za7, BGl_z62classzd2nilzb0zz__objectz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2existszd2envz00zz__objectz00,
		BgL_bgl_za762classza7d2exist3846z00, BGl_z62classzd2existszb0zz__objectz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3490z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3847za7,
		BGl_z62zc3z04anonymousza32122ze3ze5zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3491z00zz__objectz00,
		BgL_bgl_za762lambda2121za7623848z00, BGl_z62lambda2121z62zz__objectz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3492z00zz__objectz00,
		BgL_bgl_za762lambda2120za7623849z00, BGl_z62lambda2120z62zz__objectz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3493z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3850za7,
		BGl_z62zc3z04anonymousza32130ze3ze5zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3494z00zz__objectz00,
		BgL_bgl_za762lambda2129za7623851z00, BGl_z62lambda2129z62zz__objectz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3495z00zz__objectz00,
		BgL_bgl_za762lambda2128za7623852z00, BGl_z62lambda2128z62zz__objectz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3498z00zz__objectz00,
		BgL_bgl_za762za7c3za704anonymo3853za7,
		BGl_z62zc3z04anonymousza32115ze3ze5zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3499z00zz__objectz00,
		BgL_bgl_za762lambda2112za7623854z00, BGl_z62lambda2112z62zz__objectz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2numzd2envz00zz__objectz00,
		BgL_bgl_za762classza7d2numza7b3855za7, BGl_z62classzd2numzb0zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2genericzd2bucketzd2powzd2envz00zz__objectz00,
		BgL_bgl_za762biglooza7d2gene3856z00,
		BGl_z62bigloozd2genericzd2bucketzd2powzb0zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2fieldzd2virtualzf3zd2envz21zz__objectz00,
		BgL_bgl_za762classza7d2field3857z00,
		BGl_z62classzd2fieldzd2virtualzf3z91zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2virtualzd2getterzd2envzd2zz__objectz00,
		BgL_bgl_za762callza7d2virtua3858z00,
		BGl_z62callzd2virtualzd2getterz62zz__objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_objectzd2classzd2numzd2envzd2zz__objectz00,
		BgL_bgl_za762objectza7d2clas3859z00,
		BGl_z62objectzd2classzd2numz62zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_objectzd2equalzf3zd2envzf3zz__objectz00,
		BgL_bgl_za762objectza7d2equa3860z00,
		BGl_z62objectzd2equalzf3z43zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2methodzd2envz00zz__objectz00,
		BgL_bgl_za762findza7d2method3861z00, BGl_z62findzd2methodzb0zz__objectz00,
		0L, BUNSPEC, 2);
	extern obj_t BGl_displayzd2envzd2zz__r4_output_6_10_3z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genericzd2memoryzd2statisticszd2envzd2zz__objectz00,
		BgL_bgl_za762genericza7d2mem3862z00,
		BGl_z62genericzd2memoryzd2statisticsz62zz__objectz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2constructorzd2envz00zz__objectz00,
		BgL_bgl_za762classza7d2const3863z00,
		BGl_z62classzd2constructorzb0zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2superzd2classzd2methodzd2envz00zz__objectz00,
		BgL_bgl_za762findza7d2superza73864za7,
		BGl_z62findzd2superzd2classzd2methodzb0zz__objectz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genericzd2addzd2evalzd2methodz12zd2envz12zz__objectz00,
		BgL_bgl_za762genericza7d2add3865z00,
		BGl_z62genericzd2addzd2evalzd2methodz12za2zz__objectz00, 0L, BUNSPEC, 4);
	extern obj_t BGl_writezd2envzd2zz__r4_output_6_10_3z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2evfieldszd2setz12zd2envzc0zz__objectz00,
		BgL_bgl_za762classza7d2evfie3866z00,
		BGl_z62classzd2evfieldszd2setz12z70zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nilzf3zd2envz21zz__objectz00,
		BgL_bgl_za762nilza7f3za791za7za7__3867za7, BGl_z62nilzf3z91zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2nextzd2virtualzd2setterzd2envz00zz__objectz00,
		BgL_bgl_za762callza7d2nextza7d3868za7,
		BGl_z62callzd2nextzd2virtualzd2setterzb0zz__objectz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52objectzd2wideningzd2setz12zd2envz92zz__objectz00,
		BgL_bgl_za762za752objectza7d2w3869za7,
		BGl_z62z52objectzd2wideningzd2setz12z22zz__objectz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_isazf3zd2envz21zz__objectz00,
		BgL_bgl_za762isaza7f3za791za7za7__3870za7, BGl_z62isazf3z91zz__objectz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52isazd2objectzf2finalzf3zd2envz53zz__objectz00,
		BgL_bgl_za762za752isaza7d2obje3871za7,
		BGl_z62z52isazd2objectzf2finalzf3ze3zz__objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2allzd2fieldszd2envzd2zz__objectz00,
		BgL_bgl_za762classza7d2allza7d3872za7,
		BGl_z62classzd2allzd2fieldsz62zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2fieldzf3zd2envzf3zz__objectz00,
		BgL_bgl_za762classza7d2field3873z00,
		BGl_z62classzd2fieldzf3z43zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2modulezd2envz00zz__objectz00,
		BgL_bgl_za762classza7d2modul3874z00, BGl_z62classzd2modulezb0zz__objectz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2widezf3zd2envzf3zz__objectz00,
		BgL_bgl_za762classza7d2wideza73875za7,
		BGl_z62classzd2widezf3z43zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_registerzd2classz12zd2envz12zz__objectz00,
		BgL_bgl_za762registerza7d2cl3876z00,
		BGl_z62registerzd2classz12za2zz__objectz00, 0L, BUNSPEC, 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_genericzd2defaultzd2envz00zz__objectz00,
		BgL_bgl_za762genericza7d2def3877z00,
		BGl_z62genericzd2defaultzb0zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2evdatazd2setz12zd2envzc0zz__objectz00,
		BgL_bgl_za762classza7d2evdat3878z00,
		BGl_z62classzd2evdatazd2setz12z70zz__objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_objectzd2wideningzd2setz12zd2envzc0zz__objectz00,
		BgL_bgl_za762objectza7d2wide3879z00,
		BGl_z62objectzd2wideningzd2setz12z70zz__objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2fieldzd2mutablezf3zd2envz21zz__objectz00,
		BgL_bgl_za762classza7d2field3880z00,
		BGl_z62classzd2fieldzd2mutablezf3z91zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52isazf2finalzf3zd2envz81zz__objectz00,
		BgL_bgl_za762za752isaza7f2fina3881za7,
		BGl_z62z52isazf2finalzf3z31zz__objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2classzd2fieldzd2envzd2zz__objectz00,
		BgL_bgl_za762findza7d2classza73882za7,
		BGl_z62findzd2classzd2fieldz62zz__objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2genericzd2bucketzd2maskzd2envz00zz__objectz00,
		BgL_bgl_za762biglooza7d2gene3883z00,
		BGl_z62bigloozd2genericzd2bucketzd2maskzb0zz__objectz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2allocatorzd2envz00zz__objectz00,
		BgL_bgl_za762classza7d2alloc3884z00,
		BGl_z62classzd2allocatorzb0zz__objectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2fieldzd2namezd2envzd2zz__objectz00,
		BgL_bgl_za762classza7d2field3885z00,
		BGl_z62classzd2fieldzd2namez62zz__objectz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_objectzd2classzd2envz00zz__objectz00,
		BgL_bgl_za762objectza7d2clas3886z00, BGl_z62objectzd2classzb0zz__objectz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_objectzd2classzd2numzd2setz12zd2envz12zz__objectz00,
		BgL_bgl_za762objectza7d2clas3887z00,
		BGl_z62objectzd2classzd2numzd2setz12za2zz__objectz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2virtualzd2setterzd2envzd2zz__objectz00,
		BgL_bgl_za762callza7d2virtua3888z00,
		BGl_z62callzd2virtualzd2setterz62zz__objectz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_methodzd2arrayzd2refzd2envzd2zz__objectz00,
		BgL_bgl_za762methodza7d2arra3889z00,
		BGl_z62methodzd2arrayzd2refz62zz__objectz00, 0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol3451z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3291z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3373z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3293z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3456z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3294z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62processzd2exceptionzb0zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3377z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3296z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3298z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3461z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3381z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3466z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3388z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3471z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3392z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3476z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3397z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_za2classesza2z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3481z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3483z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3488z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62iozd2sigpipezd2errorz62zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3496z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62iozd2writezd2errorz62zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62typezd2errorzb0zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62iozd2parsezd2errorz62zz__objectz00));
		     ADD_ROOT((void *) (&BGl_za2nbzd2classeszd2maxza2z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62exceptionz62zz__objectz00));
		     ADD_ROOT((void *) (&BGl_za2classzd2keyza2zd2zz__objectz00));
		     ADD_ROOT((void *) (&BGl_za2nbzd2genericsza2zd2zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62securityzd2exceptionzb0zz__objectz00));
		   
			 ADD_ROOT((void *) (&BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62iozd2closedzd2errorz62zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62evalzd2warningzb0zz__objectz00));
		   
			 ADD_ROOT((void
				*) (&BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00));
		     ADD_ROOT((void
				*) (&BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62errorz62zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62warningz62zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62stackzd2overflowzd2errorz62zz__objectz00));
		     ADD_ROOT((void *) (&BGl_za2genericsza2z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62iozd2portzd2errorz62zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62iozd2connectionzd2errorz62zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62iozd2timeoutzd2errorz62zz__objectz00));
		   
			 ADD_ROOT((void
				*) (&BGl_z62accesszd2controlzd2exceptionz62zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62iozd2errorzb0zz__objectz00));
		     ADD_ROOT((void *) (&BGl_objectz00zz__objectz00));
		   
			 ADD_ROOT((void
				*) (&BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3300z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3302z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62conditionz62zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3401z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3406z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3411z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3416z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3501z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3421z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3505z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3426z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3345z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3346z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_za2nbzd2genericszd2maxza2z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3510z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3431z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_za2nbzd2classesza2zd2zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3351z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3515z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3436z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3356z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3358z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3441z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_z62iozd2readzd2errorz62zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3363z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3446z00zz__objectz00));
		     ADD_ROOT((void *) (&BGl_symbol3368z00zz__objectz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long
		BgL_checksumz00_6391, char *BgL_fromz00_6392)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__objectz00))
				{
					BGl_requirezd2initializa7ationz75zz__objectz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__objectz00();
					BGl_cnstzd2initzd2zz__objectz00();
					BGl_objectzd2initzd2zz__objectz00();
					BGl_genericzd2initzd2zz__objectz00();
					BGl_methodzd2initzd2zz__objectz00();
					return BGl_toplevelzd2initzd2zz__objectz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__objectz00()
	{
		{	/* Llib/object.scm 17 */
			BGl_symbol3291z00zz__objectz00 =
				bstring_to_symbol(BGl_string3292z00zz__objectz00);
			BGl_symbol3293z00zz__objectz00 =
				bstring_to_symbol(BGl_string3244z00zz__objectz00);
			BGl_symbol3294z00zz__objectz00 =
				bstring_to_symbol(BGl_string3295z00zz__objectz00);
			BGl_symbol3296z00zz__objectz00 =
				bstring_to_symbol(BGl_string3297z00zz__objectz00);
			BGl_symbol3298z00zz__objectz00 =
				bstring_to_symbol(BGl_string3299z00zz__objectz00);
			BGl_symbol3300z00zz__objectz00 =
				bstring_to_symbol(BGl_string3301z00zz__objectz00);
			BGl_symbol3302z00zz__objectz00 =
				bstring_to_symbol(BGl_string3303z00zz__objectz00);
			BGl_symbol3345z00zz__objectz00 =
				bstring_to_symbol(BGl_string3284z00zz__objectz00);
			BGl_symbol3346z00zz__objectz00 =
				bstring_to_symbol(BGl_string3347z00zz__objectz00);
			BGl_symbol3351z00zz__objectz00 =
				bstring_to_symbol(BGl_string3352z00zz__objectz00);
			BGl_symbol3356z00zz__objectz00 =
				bstring_to_symbol(BGl_string3357z00zz__objectz00);
			BGl_symbol3358z00zz__objectz00 =
				bstring_to_symbol(BGl_string3359z00zz__objectz00);
			BGl_symbol3363z00zz__objectz00 =
				bstring_to_symbol(BGl_string3364z00zz__objectz00);
			BGl_symbol3368z00zz__objectz00 =
				bstring_to_symbol(BGl_string3369z00zz__objectz00);
			BGl_symbol3373z00zz__objectz00 =
				bstring_to_symbol(BGl_string3374z00zz__objectz00);
			BGl_symbol3377z00zz__objectz00 =
				bstring_to_symbol(BGl_string3378z00zz__objectz00);
			BGl_symbol3381z00zz__objectz00 =
				bstring_to_symbol(BGl_string3382z00zz__objectz00);
			BGl_symbol3388z00zz__objectz00 =
				bstring_to_symbol(BGl_string3389z00zz__objectz00);
			BGl_symbol3392z00zz__objectz00 =
				bstring_to_symbol(BGl_string3393z00zz__objectz00);
			BGl_symbol3397z00zz__objectz00 =
				bstring_to_symbol(BGl_string3398z00zz__objectz00);
			BGl_symbol3401z00zz__objectz00 =
				bstring_to_symbol(BGl_string3402z00zz__objectz00);
			BGl_symbol3406z00zz__objectz00 =
				bstring_to_symbol(BGl_string3407z00zz__objectz00);
			BGl_symbol3411z00zz__objectz00 =
				bstring_to_symbol(BGl_string3412z00zz__objectz00);
			BGl_symbol3416z00zz__objectz00 =
				bstring_to_symbol(BGl_string3417z00zz__objectz00);
			BGl_symbol3421z00zz__objectz00 =
				bstring_to_symbol(BGl_string3422z00zz__objectz00);
			BGl_symbol3426z00zz__objectz00 =
				bstring_to_symbol(BGl_string3427z00zz__objectz00);
			BGl_symbol3431z00zz__objectz00 =
				bstring_to_symbol(BGl_string3432z00zz__objectz00);
			BGl_symbol3436z00zz__objectz00 =
				bstring_to_symbol(BGl_string3437z00zz__objectz00);
			BGl_symbol3441z00zz__objectz00 =
				bstring_to_symbol(BGl_string3442z00zz__objectz00);
			BGl_symbol3446z00zz__objectz00 =
				bstring_to_symbol(BGl_string3447z00zz__objectz00);
			BGl_symbol3451z00zz__objectz00 =
				bstring_to_symbol(BGl_string3452z00zz__objectz00);
			BGl_symbol3456z00zz__objectz00 =
				bstring_to_symbol(BGl_string3457z00zz__objectz00);
			BGl_symbol3461z00zz__objectz00 =
				bstring_to_symbol(BGl_string3462z00zz__objectz00);
			BGl_symbol3466z00zz__objectz00 =
				bstring_to_symbol(BGl_string3467z00zz__objectz00);
			BGl_symbol3471z00zz__objectz00 =
				bstring_to_symbol(BGl_string3472z00zz__objectz00);
			BGl_symbol3476z00zz__objectz00 =
				bstring_to_symbol(BGl_string3477z00zz__objectz00);
			BGl_symbol3481z00zz__objectz00 =
				bstring_to_symbol(BGl_string3482z00zz__objectz00);
			BGl_symbol3483z00zz__objectz00 =
				bstring_to_symbol(BGl_string3484z00zz__objectz00);
			BGl_symbol3488z00zz__objectz00 =
				bstring_to_symbol(BGl_string3489z00zz__objectz00);
			BGl_symbol3496z00zz__objectz00 =
				bstring_to_symbol(BGl_string3497z00zz__objectz00);
			BGl_symbol3501z00zz__objectz00 =
				bstring_to_symbol(BGl_string3502z00zz__objectz00);
			BGl_symbol3505z00zz__objectz00 =
				bstring_to_symbol(BGl_string3506z00zz__objectz00);
			BGl_symbol3510z00zz__objectz00 =
				bstring_to_symbol(BGl_string3511z00zz__objectz00);
			return (BGl_symbol3515z00zz__objectz00 =
				bstring_to_symbol(BGl_string3516z00zz__objectz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__objectz00()
	{
		{	/* Llib/object.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__objectz00()
	{
		{	/* Llib/object.scm 17 */
			BUNSPEC;
			BUNSPEC;
			BUNSPEC;
			BUNSPEC;
			BUNSPEC;
			BUNSPEC;
			BUNSPEC;
			return BUNSPEC;
		}

	}



/* bigloo-generic-bucket-pow */
	BGL_EXPORTED_DEF int BGl_bigloozd2genericzd2bucketzd2powzd2zz__objectz00()
	{
		{	/* Llib/object.scm 393 */
			return (int) (((long) 4));
		}

	}



/* &bigloo-generic-bucket-pow */
	obj_t BGl_z62bigloozd2genericzd2bucketzd2powzb0zz__objectz00(obj_t
		BgL_envz00_5188)
	{
		{	/* Llib/object.scm 393 */
			return BINT(BGl_bigloozd2genericzd2bucketzd2powzd2zz__objectz00());
		}

	}



/* bigloo-generic-bucket-size */
	BGL_EXPORTED_DEF int BGl_bigloozd2genericzd2bucketzd2siza7ez75zz__objectz00()
	{
		{	/* Llib/object.scm 395 */
			return (int) ((((long) 1) << (int) ((long) ((int) (((long) 4))))));
		}

	}



/* &bigloo-generic-bucket-size */
	obj_t BGl_z62bigloozd2genericzd2bucketzd2siza7ez17zz__objectz00(obj_t
		BgL_envz00_5189)
	{
		{	/* Llib/object.scm 395 */
			return BINT(BGl_bigloozd2genericzd2bucketzd2siza7ez75zz__objectz00());
		}

	}



/* bigloo-generic-bucket-mask */
	BGL_EXPORTED_DEF int BGl_bigloozd2genericzd2bucketzd2maskzd2zz__objectz00()
	{
		{	/* Llib/object.scm 397 */
			return
				(int) (
				((long) (
						(int) (
							(((long) 1) <<
								(int) ((long) ((int) (((long) 4))))))) - ((long) 1)));
		}

	}



/* &bigloo-generic-bucket-mask */
	obj_t BGl_z62bigloozd2genericzd2bucketzd2maskzb0zz__objectz00(obj_t
		BgL_envz00_5190)
	{
		{	/* Llib/object.scm 397 */
			return BINT(BGl_bigloozd2genericzd2bucketzd2maskzd2zz__objectz00());
		}

	}



/* bigloo-types-number */
	BGL_EXPORTED_DEF long bgl_types_number()
	{
		{	/* Llib/object.scm 407 */
			if (INTEGERP(BGl_za2nbzd2classesza2zd2zz__objectz00))
				{	/* Llib/object.scm 408 */
					return
						(OBJECT_TYPE + (long) CINT(BGl_za2nbzd2classesza2zd2zz__objectz00));
				}
			else
				{	/* Llib/object.scm 408 */
					return OBJECT_TYPE;
				}
		}

	}



/* &bigloo-types-number */
	obj_t BGl_z62bigloozd2typeszd2numberz62zz__objectz00(obj_t BgL_envz00_5191)
	{
		{	/* Llib/object.scm 407 */
			return BINT(bgl_types_number());
		}

	}



/* class? */
	BGL_EXPORTED_DEF bool_t BGl_classzf3zf3zz__objectz00(obj_t BgL_objz00_19)
	{
		{	/* Llib/object.scm 433 */
			return BGL_CLASSP(BgL_objz00_19);
		}

	}



/* &class? */
	obj_t BGl_z62classzf3z91zz__objectz00(obj_t BgL_envz00_5192,
		obj_t BgL_objz00_5193)
	{
		{	/* Llib/object.scm 433 */
			return BBOOL(BGl_classzf3zf3zz__objectz00(BgL_objz00_5193));
		}

	}



/* class-exists */
	BGL_EXPORTED_DEF obj_t BGl_classzd2existszd2zz__objectz00(obj_t
		BgL_cnamez00_20)
	{
		{	/* Llib/object.scm 439 */
			{
				long BgL_iz00_2902;

				BgL_iz00_2902 = ((long) 0);
			BgL_loopz00_2901:
				if (
					(BgL_iz00_2902 ==
						(long) CINT(BGl_za2nbzd2classesza2zd2zz__objectz00)))
					{	/* Llib/object.scm 441 */
						return BFALSE;
					}
				else
					{	/* Llib/object.scm 442 */
						obj_t BgL_claz00_2907;

						BgL_claz00_2907 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00, BgL_iz00_2902);
						{	/* Llib/object.scm 443 */
							bool_t BgL_test3893z00_6480;

							{	/* Llib/object.scm 443 */
								obj_t BgL_arg1487z00_2911;

								{	/* Llib/object.scm 443 */
									obj_t BgL_res2532z00_2912;

									{	/* Llib/object.scm 475 */
										obj_t BgL_tmpz00_6481;

										BgL_tmpz00_6481 = ((obj_t) BgL_claz00_2907);
										BgL_res2532z00_2912 = BGL_CLASS_NAME(BgL_tmpz00_6481);
									}
									BgL_arg1487z00_2911 = BgL_res2532z00_2912;
								}
								BgL_test3893z00_6480 = (BgL_arg1487z00_2911 == BgL_cnamez00_20);
							}
							if (BgL_test3893z00_6480)
								{	/* Llib/object.scm 443 */
									return BgL_claz00_2907;
								}
							else
								{
									long BgL_iz00_6485;

									BgL_iz00_6485 = (BgL_iz00_2902 + ((long) 1));
									BgL_iz00_2902 = BgL_iz00_6485;
									goto BgL_loopz00_2901;
								}
						}
					}
			}
		}

	}



/* &class-exists */
	obj_t BGl_z62classzd2existszb0zz__objectz00(obj_t BgL_envz00_5194,
		obj_t BgL_cnamez00_5195)
	{
		{	/* Llib/object.scm 439 */
			{	/* Llib/object.scm 440 */
				obj_t BgL_auxz00_6487;

				if (SYMBOLP(BgL_cnamez00_5195))
					{	/* Llib/object.scm 440 */
						BgL_auxz00_6487 = BgL_cnamez00_5195;
					}
				else
					{
						obj_t BgL_auxz00_6490;

						BgL_auxz00_6490 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 18345)), BGl_string3236z00zz__objectz00,
							BGl_string3237z00zz__objectz00, BgL_cnamez00_5195);
						FAILURE(BgL_auxz00_6490, BFALSE, BFALSE);
					}
				return BGl_classzd2existszd2zz__objectz00(BgL_auxz00_6487);
			}
		}

	}



/* find-class */
	BGL_EXPORTED_DEF obj_t BGl_findzd2classzd2zz__objectz00(obj_t BgL_cnamez00_21)
	{
		{	/* Llib/object.scm 450 */
			{	/* Llib/object.scm 451 */
				obj_t BgL__ortest_1215z00_2917;

				BgL__ortest_1215z00_2917 =
					BGl_classzd2existszd2zz__objectz00(BgL_cnamez00_21);
				if (CBOOL(BgL__ortest_1215z00_2917))
					{	/* Llib/object.scm 451 */
						return BgL__ortest_1215z00_2917;
					}
				else
					{	/* Llib/object.scm 451 */
						return
							BGl_errorz00zz__errorz00(BGl_string3238z00zz__objectz00,
							BGl_string3239z00zz__objectz00, BgL_cnamez00_21);
					}
			}
		}

	}



/* &find-class */
	obj_t BGl_z62findzd2classzb0zz__objectz00(obj_t BgL_envz00_5196,
		obj_t BgL_cnamez00_5197)
	{
		{	/* Llib/object.scm 450 */
			{	/* Llib/object.scm 451 */
				obj_t BgL_auxz00_6499;

				if (SYMBOLP(BgL_cnamez00_5197))
					{	/* Llib/object.scm 451 */
						BgL_auxz00_6499 = BgL_cnamez00_5197;
					}
				else
					{
						obj_t BgL_auxz00_6502;

						BgL_auxz00_6502 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 18766)), BGl_string3240z00zz__objectz00,
							BGl_string3237z00zz__objectz00, BgL_cnamez00_5197);
						FAILURE(BgL_auxz00_6502, BFALSE, BFALSE);
					}
				return BGl_findzd2classzd2zz__objectz00(BgL_auxz00_6499);
			}
		}

	}



/* find-class-by-hash */
	BGL_EXPORTED_DEF obj_t BGl_findzd2classzd2byzd2hashzd2zz__objectz00(int
		BgL_hashz00_22)
	{
		{	/* Llib/object.scm 457 */
			{
				long BgL_iz00_2928;

				BgL_iz00_2928 = ((long) 0);
			BgL_loopz00_2927:
				if (
					(BgL_iz00_2928 ==
						(long) CINT(BGl_za2nbzd2classesza2zd2zz__objectz00)))
					{	/* Llib/object.scm 459 */
						return BFALSE;
					}
				else
					{	/* Llib/object.scm 460 */
						obj_t BgL_claz00_2933;

						BgL_claz00_2933 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00, BgL_iz00_2928);
						{	/* Llib/object.scm 461 */
							bool_t BgL_test3898z00_6511;

							{	/* Llib/object.scm 461 */
								long BgL_arg1494z00_2937;

								{	/* Llib/object.scm 461 */
									long BgL_res2535z00_2938;

									{	/* Llib/object.scm 676 */
										obj_t BgL_tmpz00_6512;

										BgL_tmpz00_6512 = ((obj_t) BgL_claz00_2933);
										BgL_res2535z00_2938 = BGL_CLASS_HASH(BgL_tmpz00_6512);
									}
									BgL_arg1494z00_2937 = BgL_res2535z00_2938;
								}
								BgL_test3898z00_6511 =
									(BINT(BgL_arg1494z00_2937) == BINT(BgL_hashz00_22));
							}
							if (BgL_test3898z00_6511)
								{	/* Llib/object.scm 461 */
									return BgL_claz00_2933;
								}
							else
								{
									long BgL_iz00_6518;

									BgL_iz00_6518 = (BgL_iz00_2928 + ((long) 1));
									BgL_iz00_2928 = BgL_iz00_6518;
									goto BgL_loopz00_2927;
								}
						}
					}
			}
		}

	}



/* &find-class-by-hash */
	obj_t BGl_z62findzd2classzd2byzd2hashzb0zz__objectz00(obj_t BgL_envz00_5198,
		obj_t BgL_hashz00_5199)
	{
		{	/* Llib/object.scm 457 */
			{	/* Llib/object.scm 458 */
				int BgL_auxz00_6520;

				{	/* Llib/object.scm 458 */
					obj_t BgL_tmpz00_6521;

					if (INTEGERP(BgL_hashz00_5199))
						{	/* Llib/object.scm 458 */
							BgL_tmpz00_6521 = BgL_hashz00_5199;
						}
					else
						{
							obj_t BgL_auxz00_6524;

							BgL_auxz00_6524 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 19104)), BGl_string3241z00zz__objectz00,
								BGl_string3242z00zz__objectz00, BgL_hashz00_5199);
							FAILURE(BgL_auxz00_6524, BFALSE, BFALSE);
						}
					BgL_auxz00_6520 = CINT(BgL_tmpz00_6521);
				}
				return BGl_findzd2classzd2byzd2hashzd2zz__objectz00(BgL_auxz00_6520);
			}
		}

	}



/* eval-class? */
	BGL_EXPORTED_DEF bool_t BGl_evalzd2classzf3z21zz__objectz00(obj_t
		BgL_objz00_23)
	{
		{	/* Llib/object.scm 468 */
			{	/* Llib/object.scm 469 */
				bool_t BgL_test3900z00_6530;

				{	/* Llib/object.scm 469 */
					bool_t BgL_res2537z00_2944;

					BgL_res2537z00_2944 = BGL_CLASSP(BgL_objz00_23);
					BgL_test3900z00_6530 = BgL_res2537z00_2944;
				}
				if (BgL_test3900z00_6530)
					{	/* Llib/object.scm 499 */
						obj_t BgL_tmpz00_6532;

						{	/* Llib/object.scm 499 */
							obj_t BgL_tmpz00_6533;

							BgL_tmpz00_6533 = ((obj_t) BgL_objz00_23);
							BgL_tmpz00_6532 = BGL_CLASS_EVDATA(BgL_tmpz00_6533);
						}
						return CBOOL(BgL_tmpz00_6532);
					}
				else
					{	/* Llib/object.scm 469 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &eval-class? */
	obj_t BGl_z62evalzd2classzf3z43zz__objectz00(obj_t BgL_envz00_5200,
		obj_t BgL_objz00_5201)
	{
		{	/* Llib/object.scm 468 */
			return BBOOL(BGl_evalzd2classzf3z21zz__objectz00(BgL_objz00_5201));
		}

	}



/* class-name */
	BGL_EXPORTED_DEF obj_t BGl_classzd2namezd2zz__objectz00(obj_t BgL_classz00_24)
	{
		{	/* Llib/object.scm 474 */
			return BGL_CLASS_NAME(BgL_classz00_24);
		}

	}



/* &class-name */
	obj_t BGl_z62classzd2namezb0zz__objectz00(obj_t BgL_envz00_5202,
		obj_t BgL_classz00_5203)
	{
		{	/* Llib/object.scm 474 */
			{	/* Llib/object.scm 475 */
				obj_t BgL_auxz00_6540;

				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5203))
					{	/* Llib/object.scm 475 */
						BgL_auxz00_6540 = BgL_classz00_5203;
					}
				else
					{
						obj_t BgL_auxz00_6543;

						BgL_auxz00_6543 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 19811)), BGl_string3243z00zz__objectz00,
							BGl_string3244z00zz__objectz00, BgL_classz00_5203);
						FAILURE(BgL_auxz00_6543, BFALSE, BFALSE);
					}
				return BGl_classzd2namezd2zz__objectz00(BgL_auxz00_6540);
			}
		}

	}



/* class-module */
	BGL_EXPORTED_DEF obj_t BGl_classzd2modulezd2zz__objectz00(obj_t
		BgL_classz00_25)
	{
		{	/* Llib/object.scm 480 */
			return BGL_CLASS_MODULE(BgL_classz00_25);
		}

	}



/* &class-module */
	obj_t BGl_z62classzd2modulezb0zz__objectz00(obj_t BgL_envz00_5204,
		obj_t BgL_classz00_5205)
	{
		{	/* Llib/object.scm 480 */
			{	/* Llib/object.scm 481 */
				obj_t BgL_auxz00_6549;

				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5205))
					{	/* Llib/object.scm 481 */
						BgL_auxz00_6549 = BgL_classz00_5205;
					}
				else
					{
						obj_t BgL_auxz00_6552;

						BgL_auxz00_6552 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 20087)), BGl_string3245z00zz__objectz00,
							BGl_string3244z00zz__objectz00, BgL_classz00_5205);
						FAILURE(BgL_auxz00_6552, BFALSE, BFALSE);
					}
				return BGl_classzd2modulezd2zz__objectz00(BgL_auxz00_6549);
			}
		}

	}



/* class-num */
	BGL_EXPORTED_DEF long BGl_classzd2numzd2zz__objectz00(obj_t BgL_classz00_26)
	{
		{	/* Llib/object.scm 486 */
			return BGL_CLASS_INDEX(BgL_classz00_26);
		}

	}



/* &class-num */
	obj_t BGl_z62classzd2numzb0zz__objectz00(obj_t BgL_envz00_5206,
		obj_t BgL_classz00_5207)
	{
		{	/* Llib/object.scm 486 */
			{	/* Llib/object.scm 487 */
				long BgL_tmpz00_6558;

				{	/* Llib/object.scm 487 */
					obj_t BgL_auxz00_6559;

					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5207))
						{	/* Llib/object.scm 487 */
							BgL_auxz00_6559 = BgL_classz00_5207;
						}
					else
						{
							obj_t BgL_auxz00_6562;

							BgL_auxz00_6562 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 20369)), BGl_string3246z00zz__objectz00,
								BGl_string3244z00zz__objectz00, BgL_classz00_5207);
							FAILURE(BgL_auxz00_6562, BFALSE, BFALSE);
						}
					BgL_tmpz00_6558 = BGl_classzd2numzd2zz__objectz00(BgL_auxz00_6559);
				}
				return BINT(BgL_tmpz00_6558);
			}
		}

	}



/* class-virtual */
	BGL_EXPORTED_DEF obj_t BGl_classzd2virtualzd2zz__objectz00(obj_t
		BgL_classz00_27)
	{
		{	/* Llib/object.scm 492 */
			return BGL_CLASS_VIRTUAL_FIELDS(BgL_classz00_27);
		}

	}



/* &class-virtual */
	obj_t BGl_z62classzd2virtualzb0zz__objectz00(obj_t BgL_envz00_5208,
		obj_t BgL_classz00_5209)
	{
		{	/* Llib/object.scm 492 */
			{	/* Llib/object.scm 493 */
				obj_t BgL_auxz00_6569;

				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5209))
					{	/* Llib/object.scm 493 */
						BgL_auxz00_6569 = BgL_classz00_5209;
					}
				else
					{
						obj_t BgL_auxz00_6572;

						BgL_auxz00_6572 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 20654)), BGl_string3247z00zz__objectz00,
							BGl_string3244z00zz__objectz00, BgL_classz00_5209);
						FAILURE(BgL_auxz00_6572, BFALSE, BFALSE);
					}
				return BGl_classzd2virtualzd2zz__objectz00(BgL_auxz00_6569);
			}
		}

	}



/* class-evdata */
	BGL_EXPORTED_DEF obj_t BGl_classzd2evdatazd2zz__objectz00(obj_t
		BgL_classz00_28)
	{
		{	/* Llib/object.scm 498 */
			return BGL_CLASS_EVDATA(BgL_classz00_28);
		}

	}



/* &class-evdata */
	obj_t BGl_z62classzd2evdatazb0zz__objectz00(obj_t BgL_envz00_5210,
		obj_t BgL_classz00_5211)
	{
		{	/* Llib/object.scm 498 */
			{	/* Llib/object.scm 499 */
				obj_t BgL_auxz00_6578;

				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5211))
					{	/* Llib/object.scm 499 */
						BgL_auxz00_6578 = BgL_classz00_5211;
					}
				else
					{
						obj_t BgL_auxz00_6581;

						BgL_auxz00_6581 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 20940)), BGl_string3248z00zz__objectz00,
							BGl_string3244z00zz__objectz00, BgL_classz00_5211);
						FAILURE(BgL_auxz00_6581, BFALSE, BFALSE);
					}
				return BGl_classzd2evdatazd2zz__objectz00(BgL_auxz00_6578);
			}
		}

	}



/* class-evdata-set! */
	BGL_EXPORTED_DEF obj_t BGl_classzd2evdatazd2setz12z12zz__objectz00(obj_t
		BgL_classz00_29, obj_t BgL_dataz00_30)
	{
		{	/* Llib/object.scm 504 */
			return BGL_CLASS_EVDATA_SET(BgL_classz00_29, BgL_dataz00_30);
		}

	}



/* &class-evdata-set! */
	obj_t BGl_z62classzd2evdatazd2setz12z70zz__objectz00(obj_t BgL_envz00_5212,
		obj_t BgL_classz00_5213, obj_t BgL_dataz00_5214)
	{
		{	/* Llib/object.scm 504 */
			{	/* Llib/object.scm 505 */
				obj_t BgL_auxz00_6587;

				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5213))
					{	/* Llib/object.scm 505 */
						BgL_auxz00_6587 = BgL_classz00_5213;
					}
				else
					{
						obj_t BgL_auxz00_6590;

						BgL_auxz00_6590 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 21228)), BGl_string3249z00zz__objectz00,
							BGl_string3244z00zz__objectz00, BgL_classz00_5213);
						FAILURE(BgL_auxz00_6590, BFALSE, BFALSE);
					}
				return
					BGl_classzd2evdatazd2setz12z12zz__objectz00(BgL_auxz00_6587,
					BgL_dataz00_5214);
			}
		}

	}



/* class-evfields-set! */
	BGL_EXPORTED_DEF obj_t BGl_classzd2evfieldszd2setz12z12zz__objectz00(obj_t
		BgL_classz00_31, obj_t BgL_fieldsz00_32)
	{
		{	/* Llib/object.scm 510 */
			{	/* Llib/object.scm 512 */
				bool_t BgL_test3907z00_6595;

				{	/* Llib/object.scm 512 */
					bool_t BgL_res2539z00_2949;

					{	/* Llib/object.scm 469 */
						bool_t BgL_test3908z00_6596;

						{	/* Llib/object.scm 469 */
							bool_t BgL_res2538z00_2947;

							BgL_res2538z00_2947 = BGL_CLASSP(BgL_classz00_31);
							BgL_test3908z00_6596 = BgL_res2538z00_2947;
						}
						if (BgL_test3908z00_6596)
							{	/* Llib/object.scm 469 */
								BgL_res2539z00_2949 = CBOOL(BGL_CLASS_EVDATA(BgL_classz00_31));
							}
						else
							{	/* Llib/object.scm 469 */
								BgL_res2539z00_2949 = ((bool_t) 0);
							}
					}
					BgL_test3907z00_6595 = BgL_res2539z00_2949;
				}
				if (BgL_test3907z00_6595)
					{	/* Llib/object.scm 514 */
						bool_t BgL_test3909z00_6600;

						{	/* Llib/object.scm 514 */
							long BgL_arg1505z00_1258;

							{	/* Llib/object.scm 514 */
								obj_t BgL_arg1506z00_1259;

								{	/* Llib/object.scm 514 */
									obj_t BgL_res2540z00_2951;

									BgL_res2540z00_2951 =
										BGL_CLASS_DIRECT_FIELDS(BgL_classz00_31);
									BgL_arg1506z00_1259 = BgL_res2540z00_2951;
								}
								BgL_arg1505z00_1258 = VECTOR_LENGTH(BgL_arg1506z00_1259);
							}
							BgL_test3909z00_6600 = (BgL_arg1505z00_1258 > ((long) 0));
						}
						if (BgL_test3909z00_6600)
							{	/* Llib/object.scm 514 */
								return
									BGl_errorz00zz__errorz00(BGl_string3250z00zz__objectz00,
									BGl_string3251z00zz__objectz00, BgL_classz00_31);
							}
						else
							{	/* Llib/object.scm 517 */
								obj_t BgL_sfieldsz00_1254;

								{	/* Llib/object.scm 517 */
									obj_t BgL_arg1502z00_1257;

									BgL_arg1502z00_1257 = BGL_CLASS_SUPER(BgL_classz00_31);
									{	/* Llib/object.scm 517 */
										obj_t BgL_res2542z00_2957;

										{	/* Llib/object.scm 531 */
											obj_t BgL_tmpz00_6606;

											BgL_tmpz00_6606 = ((obj_t) BgL_arg1502z00_1257);
											BgL_res2542z00_2957 =
												BGL_CLASS_ALL_FIELDS(BgL_tmpz00_6606);
										}
										BgL_sfieldsz00_1254 = BgL_res2542z00_2957;
									}
								}
								BGL_CLASS_DIRECT_FIELDS_SET(BgL_classz00_31, BgL_fieldsz00_32);
								{	/* Llib/object.scm 519 */
									obj_t BgL_arg1500z00_1255;

									{	/* Llib/object.scm 519 */
										obj_t BgL_list1501z00_1256;

										BgL_list1501z00_1256 =
											MAKE_YOUNG_PAIR(BgL_fieldsz00_32, BNIL);
										BgL_arg1500z00_1255 =
											BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00
											(BgL_sfieldsz00_1254, BgL_list1501z00_1256);
									}
									return
										BGL_CLASS_ALL_FIELDS_SET(BgL_classz00_31,
										BgL_arg1500z00_1255);
								}
							}
					}
				else
					{	/* Llib/object.scm 512 */
						return
							BGl_errorz00zz__errorz00(BGl_string3250z00zz__objectz00,
							BGl_string3252z00zz__objectz00, BgL_classz00_31);
					}
			}
		}

	}



/* &class-evfields-set! */
	obj_t BGl_z62classzd2evfieldszd2setz12z70zz__objectz00(obj_t BgL_envz00_5215,
		obj_t BgL_classz00_5216, obj_t BgL_fieldsz00_5217)
	{
		{	/* Llib/object.scm 510 */
			{	/* Llib/object.scm 512 */
				obj_t BgL_auxz00_6621;
				obj_t BgL_auxz00_6614;

				if (VECTORP(BgL_fieldsz00_5217))
					{	/* Llib/object.scm 512 */
						BgL_auxz00_6621 = BgL_fieldsz00_5217;
					}
				else
					{
						obj_t BgL_auxz00_6624;

						BgL_auxz00_6624 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 21542)), BGl_string3253z00zz__objectz00,
							BGl_string3254z00zz__objectz00, BgL_fieldsz00_5217);
						FAILURE(BgL_auxz00_6624, BFALSE, BFALSE);
					}
				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5216))
					{	/* Llib/object.scm 512 */
						BgL_auxz00_6614 = BgL_classz00_5216;
					}
				else
					{
						obj_t BgL_auxz00_6617;

						BgL_auxz00_6617 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 21542)), BGl_string3253z00zz__objectz00,
							BGl_string3244z00zz__objectz00, BgL_classz00_5216);
						FAILURE(BgL_auxz00_6617, BFALSE, BFALSE);
					}
				return
					BGl_classzd2evfieldszd2setz12z12zz__objectz00(BgL_auxz00_6614,
					BgL_auxz00_6621);
			}
		}

	}



/* class-fields */
	BGL_EXPORTED_DEF obj_t BGl_classzd2fieldszd2zz__objectz00(obj_t
		BgL_classz00_33)
	{
		{	/* Llib/object.scm 524 */
			return BGL_CLASS_DIRECT_FIELDS(BgL_classz00_33);
		}

	}



/* &class-fields */
	obj_t BGl_z62classzd2fieldszb0zz__objectz00(obj_t BgL_envz00_5218,
		obj_t BgL_classz00_5219)
	{
		{	/* Llib/object.scm 524 */
			{	/* Llib/object.scm 525 */
				obj_t BgL_auxz00_6630;

				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5219))
					{	/* Llib/object.scm 525 */
						BgL_auxz00_6630 = BgL_classz00_5219;
					}
				else
					{
						obj_t BgL_auxz00_6633;

						BgL_auxz00_6633 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 22193)), BGl_string3255z00zz__objectz00,
							BGl_string3244z00zz__objectz00, BgL_classz00_5219);
						FAILURE(BgL_auxz00_6633, BFALSE, BFALSE);
					}
				return BGl_classzd2fieldszd2zz__objectz00(BgL_auxz00_6630);
			}
		}

	}



/* class-all-fields */
	BGL_EXPORTED_DEF obj_t BGl_classzd2allzd2fieldsz00zz__objectz00(obj_t
		BgL_classz00_34)
	{
		{	/* Llib/object.scm 530 */
			return BGL_CLASS_ALL_FIELDS(BgL_classz00_34);
		}

	}



/* &class-all-fields */
	obj_t BGl_z62classzd2allzd2fieldsz62zz__objectz00(obj_t BgL_envz00_5220,
		obj_t BgL_classz00_5221)
	{
		{	/* Llib/object.scm 530 */
			{	/* Llib/object.scm 531 */
				obj_t BgL_auxz00_6639;

				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5221))
					{	/* Llib/object.scm 531 */
						BgL_auxz00_6639 = BgL_classz00_5221;
					}
				else
					{
						obj_t BgL_auxz00_6642;

						BgL_auxz00_6642 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 22489)), BGl_string3256z00zz__objectz00,
							BGl_string3244z00zz__objectz00, BgL_classz00_5221);
						FAILURE(BgL_auxz00_6642, BFALSE, BFALSE);
					}
				return BGl_classzd2allzd2fieldsz00zz__objectz00(BgL_auxz00_6639);
			}
		}

	}



/* find-class-field */
	BGL_EXPORTED_DEF obj_t BGl_findzd2classzd2fieldz00zz__objectz00(obj_t
		BgL_classz00_35, obj_t BgL_namez00_36)
	{
		{	/* Llib/object.scm 536 */
			{	/* Llib/object.scm 537 */
				obj_t BgL_fieldsz00_1260;

				{	/* Llib/object.scm 537 */
					obj_t BgL_res2543z00_2959;

					BgL_res2543z00_2959 = BGL_CLASS_ALL_FIELDS(BgL_classz00_35);
					BgL_fieldsz00_1260 = BgL_res2543z00_2959;
				}
				{	/* Llib/object.scm 538 */
					long BgL_g1217z00_1261;

					BgL_g1217z00_1261 = (VECTOR_LENGTH(BgL_fieldsz00_1260) - ((long) 1));
					{
						long BgL_iz00_1263;

						BgL_iz00_1263 = BgL_g1217z00_1261;
					BgL_zc3z04anonymousza31507ze3z87_1264:
						if ((BgL_iz00_1263 == ((long) -1)))
							{	/* Llib/object.scm 539 */
								return BFALSE;
							}
						else
							{	/* Llib/object.scm 541 */
								obj_t BgL_fz00_1266;

								BgL_fz00_1266 = VECTOR_REF(BgL_fieldsz00_1260, BgL_iz00_1263);
								{	/* Llib/object.scm 542 */
									bool_t BgL_test3915z00_6653;

									{	/* Llib/object.scm 542 */
										obj_t BgL_arg1512z00_1270;

										{	/* Llib/object.scm 542 */
											obj_t BgL_res2546z00_2969;

											{	/* Llib/object.scm 565 */
												obj_t BgL_vectorz00_2968;

												BgL_vectorz00_2968 = ((obj_t) BgL_fz00_1266);
												BgL_res2546z00_2969 =
													VECTOR_REF(BgL_vectorz00_2968, ((long) 0));
											}
											BgL_arg1512z00_1270 = BgL_res2546z00_2969;
										}
										BgL_test3915z00_6653 =
											(BgL_arg1512z00_1270 == BgL_namez00_36);
									}
									if (BgL_test3915z00_6653)
										{	/* Llib/object.scm 542 */
											return BgL_fz00_1266;
										}
									else
										{
											long BgL_iz00_6657;

											BgL_iz00_6657 = (BgL_iz00_1263 - ((long) 1));
											BgL_iz00_1263 = BgL_iz00_6657;
											goto BgL_zc3z04anonymousza31507ze3z87_1264;
										}
								}
							}
					}
				}
			}
		}

	}



/* &find-class-field */
	obj_t BGl_z62findzd2classzd2fieldz62zz__objectz00(obj_t BgL_envz00_5222,
		obj_t BgL_classz00_5223, obj_t BgL_namez00_5224)
	{
		{	/* Llib/object.scm 536 */
			{	/* Llib/object.scm 537 */
				obj_t BgL_auxz00_6666;
				obj_t BgL_auxz00_6659;

				if (SYMBOLP(BgL_namez00_5224))
					{	/* Llib/object.scm 537 */
						BgL_auxz00_6666 = BgL_namez00_5224;
					}
				else
					{
						obj_t BgL_auxz00_6669;

						BgL_auxz00_6669 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 22788)), BGl_string3257z00zz__objectz00,
							BGl_string3237z00zz__objectz00, BgL_namez00_5224);
						FAILURE(BgL_auxz00_6669, BFALSE, BFALSE);
					}
				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5223))
					{	/* Llib/object.scm 537 */
						BgL_auxz00_6659 = BgL_classz00_5223;
					}
				else
					{
						obj_t BgL_auxz00_6662;

						BgL_auxz00_6662 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 22788)), BGl_string3257z00zz__objectz00,
							BGl_string3244z00zz__objectz00, BgL_classz00_5223);
						FAILURE(BgL_auxz00_6662, BFALSE, BFALSE);
					}
				return
					BGl_findzd2classzd2fieldz00zz__objectz00(BgL_auxz00_6659,
					BgL_auxz00_6666);
			}
		}

	}



/* make-class-field */
	BGL_EXPORTED_DEF obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t
		BgL_namez00_37, obj_t BgL_getterz00_38, obj_t BgL_setterz00_39,
		bool_t BgL_ronlyz00_40, bool_t BgL_virtualz00_41, obj_t BgL_infoz00_42,
		obj_t BgL_defaultz00_43, obj_t BgL_typez00_44)
	{
		{	/* Llib/object.scm 549 */
			{	/* Llib/object.scm 550 */
				obj_t BgL_v1313z00_2972;

				BgL_v1313z00_2972 = create_vector(((long) 9));
				VECTOR_SET(BgL_v1313z00_2972, ((long) 0), BgL_namez00_37);
				VECTOR_SET(BgL_v1313z00_2972, ((long) 1), BgL_getterz00_38);
				VECTOR_SET(BgL_v1313z00_2972, ((long) 2), BgL_setterz00_39);
				VECTOR_SET(BgL_v1313z00_2972, ((long) 3), BBOOL(BgL_virtualz00_41));
				VECTOR_SET(BgL_v1313z00_2972, ((long) 4),
					BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
				VECTOR_SET(BgL_v1313z00_2972, ((long) 5), BgL_infoz00_42);
				VECTOR_SET(BgL_v1313z00_2972, ((long) 6), BgL_defaultz00_43);
				VECTOR_SET(BgL_v1313z00_2972, ((long) 7), BgL_typez00_44);
				{
					obj_t BgL_auxz00_6684;

					{	/* Llib/object.scm 550 */
						bool_t BgL_tmpz00_6685;

						if (BgL_ronlyz00_40)
							{	/* Llib/object.scm 551 */
								BgL_tmpz00_6685 = ((bool_t) 0);
							}
						else
							{	/* Llib/object.scm 551 */
								BgL_tmpz00_6685 = ((bool_t) 1);
							}
						BgL_auxz00_6684 = BBOOL(BgL_tmpz00_6685);
					}
					VECTOR_SET(BgL_v1313z00_2972, ((long) 8), BgL_auxz00_6684);
				}
				return BgL_v1313z00_2972;
			}
		}

	}



/* &make-class-field */
	obj_t BGl_z62makezd2classzd2fieldz62zz__objectz00(obj_t BgL_envz00_5225,
		obj_t BgL_namez00_5226, obj_t BgL_getterz00_5227, obj_t BgL_setterz00_5228,
		obj_t BgL_ronlyz00_5229, obj_t BgL_virtualz00_5230, obj_t BgL_infoz00_5231,
		obj_t BgL_defaultz00_5232, obj_t BgL_typez00_5233)
	{
		{	/* Llib/object.scm 549 */
			{	/* Llib/object.scm 550 */
				obj_t BgL_auxz00_6689;

				if (SYMBOLP(BgL_namez00_5226))
					{	/* Llib/object.scm 550 */
						BgL_auxz00_6689 = BgL_namez00_5226;
					}
				else
					{
						obj_t BgL_auxz00_6692;

						BgL_auxz00_6692 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 23329)), BGl_string3258z00zz__objectz00,
							BGl_string3237z00zz__objectz00, BgL_namez00_5226);
						FAILURE(BgL_auxz00_6692, BFALSE, BFALSE);
					}
				return
					BGl_makezd2classzd2fieldz00zz__objectz00(BgL_auxz00_6689,
					BgL_getterz00_5227, BgL_setterz00_5228, CBOOL(BgL_ronlyz00_5229),
					CBOOL(BgL_virtualz00_5230), BgL_infoz00_5231, BgL_defaultz00_5232,
					BgL_typez00_5233);
			}
		}

	}



/* class-field? */
	BGL_EXPORTED_DEF bool_t BGl_classzd2fieldzf3z21zz__objectz00(obj_t
		BgL_objz00_45)
	{
		{	/* Llib/object.scm 556 */
			if (VECTORP(BgL_objz00_45))
				{	/* Llib/object.scm 557 */
					if ((VECTOR_LENGTH(BgL_objz00_45) == ((long) 9)))
						{	/* Llib/object.scm 558 */
							return
								(VECTOR_REF(BgL_objz00_45,
									((long) 4)) ==
								BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
						}
					else
						{	/* Llib/object.scm 558 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Llib/object.scm 557 */
					return ((bool_t) 0);
				}
		}

	}



/* &class-field? */
	obj_t BGl_z62classzd2fieldzf3z43zz__objectz00(obj_t BgL_envz00_5234,
		obj_t BgL_objz00_5235)
	{
		{	/* Llib/object.scm 556 */
			return BBOOL(BGl_classzd2fieldzf3z21zz__objectz00(BgL_objz00_5235));
		}

	}



/* class-field-name */
	BGL_EXPORTED_DEF obj_t BGl_classzd2fieldzd2namez00zz__objectz00(obj_t
		BgL_fieldz00_46)
	{
		{	/* Llib/object.scm 564 */
			return VECTOR_REF(BgL_fieldz00_46, ((long) 0));
		}

	}



/* &class-field-name */
	obj_t BGl_z62classzd2fieldzd2namez62zz__objectz00(obj_t BgL_envz00_5236,
		obj_t BgL_fieldz00_5237)
	{
		{	/* Llib/object.scm 564 */
			{	/* Llib/object.scm 565 */
				obj_t BgL_auxz00_6709;

				if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_5237))
					{	/* Llib/object.scm 565 */
						BgL_auxz00_6709 = BgL_fieldz00_5237;
					}
				else
					{
						obj_t BgL_auxz00_6712;

						BgL_auxz00_6712 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 24037)), BGl_string3259z00zz__objectz00,
							BGl_string3260z00zz__objectz00, BgL_fieldz00_5237);
						FAILURE(BgL_auxz00_6712, BFALSE, BFALSE);
					}
				return BGl_classzd2fieldzd2namez00zz__objectz00(BgL_auxz00_6709);
			}
		}

	}



/* class-field-virtual? */
	BGL_EXPORTED_DEF bool_t BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(obj_t
		BgL_fieldz00_47)
	{
		{	/* Llib/object.scm 570 */
			{	/* Llib/object.scm 571 */
				obj_t BgL_vectorz00_2989;

				BgL_vectorz00_2989 = BgL_fieldz00_47;
				return CBOOL(VECTOR_REF(BgL_vectorz00_2989, ((long) 3)));
		}}

	}



/* &class-field-virtual? */
	obj_t BGl_z62classzd2fieldzd2virtualzf3z91zz__objectz00(obj_t BgL_envz00_5238,
		obj_t BgL_fieldz00_5239)
	{
		{	/* Llib/object.scm 570 */
			{	/* Llib/object.scm 571 */
				bool_t BgL_tmpz00_6719;

				{	/* Llib/object.scm 571 */
					obj_t BgL_auxz00_6720;

					if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_5239))
						{	/* Llib/object.scm 571 */
							BgL_auxz00_6720 = BgL_fieldz00_5239;
						}
					else
						{
							obj_t BgL_auxz00_6723;

							BgL_auxz00_6723 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 24331)), BGl_string3261z00zz__objectz00,
								BGl_string3260z00zz__objectz00, BgL_fieldz00_5239);
							FAILURE(BgL_auxz00_6723, BFALSE, BFALSE);
						}
					BgL_tmpz00_6719 =
						BGl_classzd2fieldzd2virtualzf3zf3zz__objectz00(BgL_auxz00_6720);
				}
				return BBOOL(BgL_tmpz00_6719);
			}
		}

	}



/* class-field-accessor */
	BGL_EXPORTED_DEF obj_t BGl_classzd2fieldzd2accessorz00zz__objectz00(obj_t
		BgL_fieldz00_48)
	{
		{	/* Llib/object.scm 576 */
			return VECTOR_REF(BgL_fieldz00_48, ((long) 1));
		}

	}



/* &class-field-accessor */
	obj_t BGl_z62classzd2fieldzd2accessorz62zz__objectz00(obj_t BgL_envz00_5240,
		obj_t BgL_fieldz00_5241)
	{
		{	/* Llib/object.scm 576 */
			{	/* Llib/object.scm 577 */
				obj_t BgL_auxz00_6730;

				if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_5241))
					{	/* Llib/object.scm 577 */
						BgL_auxz00_6730 = BgL_fieldz00_5241;
					}
				else
					{
						obj_t BgL_auxz00_6733;

						BgL_auxz00_6733 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 24630)), BGl_string3262z00zz__objectz00,
							BGl_string3260z00zz__objectz00, BgL_fieldz00_5241);
						FAILURE(BgL_auxz00_6733, BFALSE, BFALSE);
					}
				return BGl_classzd2fieldzd2accessorz00zz__objectz00(BgL_auxz00_6730);
			}
		}

	}



/* class-field-mutable? */
	BGL_EXPORTED_DEF bool_t BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00(obj_t
		BgL_fieldz00_49)
	{
		{	/* Llib/object.scm 582 */
			{	/* Llib/object.scm 583 */
				obj_t BgL_vectorz00_2991;

				BgL_vectorz00_2991 = BgL_fieldz00_49;
				return CBOOL(VECTOR_REF(BgL_vectorz00_2991, ((long) 8)));
		}}

	}



/* &class-field-mutable? */
	obj_t BGl_z62classzd2fieldzd2mutablezf3z91zz__objectz00(obj_t BgL_envz00_5242,
		obj_t BgL_fieldz00_5243)
	{
		{	/* Llib/object.scm 582 */
			{	/* Llib/object.scm 583 */
				bool_t BgL_tmpz00_6740;

				{	/* Llib/object.scm 583 */
					obj_t BgL_auxz00_6741;

					if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_5243))
						{	/* Llib/object.scm 583 */
							BgL_auxz00_6741 = BgL_fieldz00_5243;
						}
					else
						{
							obj_t BgL_auxz00_6744;

							BgL_auxz00_6744 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 24924)), BGl_string3263z00zz__objectz00,
								BGl_string3260z00zz__objectz00, BgL_fieldz00_5243);
							FAILURE(BgL_auxz00_6744, BFALSE, BFALSE);
						}
					BgL_tmpz00_6740 =
						BGl_classzd2fieldzd2mutablezf3zf3zz__objectz00(BgL_auxz00_6741);
				}
				return BBOOL(BgL_tmpz00_6740);
			}
		}

	}



/* class-field-mutator */
	BGL_EXPORTED_DEF obj_t BGl_classzd2fieldzd2mutatorz00zz__objectz00(obj_t
		BgL_fieldz00_50)
	{
		{	/* Llib/object.scm 588 */
			return VECTOR_REF(BgL_fieldz00_50, ((long) 2));
		}

	}



/* &class-field-mutator */
	obj_t BGl_z62classzd2fieldzd2mutatorz62zz__objectz00(obj_t BgL_envz00_5244,
		obj_t BgL_fieldz00_5245)
	{
		{	/* Llib/object.scm 588 */
			{	/* Llib/object.scm 589 */
				obj_t BgL_auxz00_6751;

				if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_5245))
					{	/* Llib/object.scm 589 */
						BgL_auxz00_6751 = BgL_fieldz00_5245;
					}
				else
					{
						obj_t BgL_auxz00_6754;

						BgL_auxz00_6754 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 25222)), BGl_string3264z00zz__objectz00,
							BGl_string3260z00zz__objectz00, BgL_fieldz00_5245);
						FAILURE(BgL_auxz00_6754, BFALSE, BFALSE);
					}
				return BGl_classzd2fieldzd2mutatorz00zz__objectz00(BgL_auxz00_6751);
			}
		}

	}



/* class-field-info */
	BGL_EXPORTED_DEF obj_t BGl_classzd2fieldzd2infoz00zz__objectz00(obj_t
		BgL_fieldz00_51)
	{
		{	/* Llib/object.scm 594 */
			return VECTOR_REF(BgL_fieldz00_51, ((long) 5));
		}

	}



/* &class-field-info */
	obj_t BGl_z62classzd2fieldzd2infoz62zz__objectz00(obj_t BgL_envz00_5246,
		obj_t BgL_fieldz00_5247)
	{
		{	/* Llib/object.scm 594 */
			{	/* Llib/object.scm 595 */
				obj_t BgL_auxz00_6760;

				if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_5247))
					{	/* Llib/object.scm 595 */
						BgL_auxz00_6760 = BgL_fieldz00_5247;
					}
				else
					{
						obj_t BgL_auxz00_6763;

						BgL_auxz00_6763 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 25506)), BGl_string3265z00zz__objectz00,
							BGl_string3260z00zz__objectz00, BgL_fieldz00_5247);
						FAILURE(BgL_auxz00_6763, BFALSE, BFALSE);
					}
				return BGl_classzd2fieldzd2infoz00zz__objectz00(BgL_auxz00_6760);
			}
		}

	}



/* class-field-default-value? */
	BGL_EXPORTED_DEF bool_t
		BGl_classzd2fieldzd2defaultzd2valuezf3z21zz__objectz00(obj_t
		BgL_fieldz00_52)
	{
		{	/* Llib/object.scm 600 */
			{	/* Llib/object.scm 601 */
				obj_t BgL_tmpz00_6768;

				BgL_tmpz00_6768 = VECTOR_REF(BgL_fieldz00_52, ((long) 6));
				return PROCEDUREP(BgL_tmpz00_6768);
			}
		}

	}



/* &class-field-default-value? */
	obj_t BGl_z62classzd2fieldzd2defaultzd2valuezf3z43zz__objectz00(obj_t
		BgL_envz00_5248, obj_t BgL_fieldz00_5249)
	{
		{	/* Llib/object.scm 600 */
			{	/* Llib/object.scm 601 */
				bool_t BgL_tmpz00_6771;

				{	/* Llib/object.scm 601 */
					obj_t BgL_auxz00_6772;

					if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_5249))
						{	/* Llib/object.scm 601 */
							BgL_auxz00_6772 = BgL_fieldz00_5249;
						}
					else
						{
							obj_t BgL_auxz00_6775;

							BgL_auxz00_6775 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 25812)), BGl_string3266z00zz__objectz00,
								BGl_string3260z00zz__objectz00, BgL_fieldz00_5249);
							FAILURE(BgL_auxz00_6775, BFALSE, BFALSE);
						}
					BgL_tmpz00_6771 =
						BGl_classzd2fieldzd2defaultzd2valuezf3z21zz__objectz00
						(BgL_auxz00_6772);
				}
				return BBOOL(BgL_tmpz00_6771);
			}
		}

	}



/* class-field-default-value */
	BGL_EXPORTED_DEF obj_t
		BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t BgL_fieldz00_53)
	{
		{	/* Llib/object.scm 606 */
			{	/* Llib/object.scm 609 */
				obj_t BgL_pz00_2997;

				BgL_pz00_2997 = VECTOR_REF(BgL_fieldz00_53, ((long) 6));
				if (PROCEDUREP(BgL_pz00_2997))
					{	/* Llib/object.scm 610 */
						return PROCEDURE_ENTRY(BgL_pz00_2997) (BgL_pz00_2997, BEOA);
					}
				else
					{	/* Llib/object.scm 610 */
						return
							BGl_errorz00zz__errorz00(BGl_string3267z00zz__objectz00,
							BGl_string3268z00zz__objectz00, VECTOR_REF(BgL_fieldz00_53,
								((long) 0)));
		}}}

	}



/* &class-field-default-value */
	obj_t BGl_z62classzd2fieldzd2defaultzd2valuezb0zz__objectz00(obj_t
		BgL_envz00_5250, obj_t BgL_fieldz00_5251)
	{
		{	/* Llib/object.scm 606 */
			{	/* Llib/object.scm 609 */
				obj_t BgL_auxz00_6789;

				if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_5251))
					{	/* Llib/object.scm 609 */
						BgL_auxz00_6789 = BgL_fieldz00_5251;
					}
				else
					{
						obj_t BgL_auxz00_6792;

						BgL_auxz00_6792 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 26198)), BGl_string3269z00zz__objectz00,
							BGl_string3260z00zz__objectz00, BgL_fieldz00_5251);
						FAILURE(BgL_auxz00_6792, BFALSE, BFALSE);
					}
				return
					BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(BgL_auxz00_6789);
			}
		}

	}



/* class-field-type */
	BGL_EXPORTED_DEF obj_t BGl_classzd2fieldzd2typez00zz__objectz00(obj_t
		BgL_fieldz00_54)
	{
		{	/* Llib/object.scm 619 */
			return VECTOR_REF(BgL_fieldz00_54, ((long) 7));
		}

	}



/* &class-field-type */
	obj_t BGl_z62classzd2fieldzd2typez62zz__objectz00(obj_t BgL_envz00_5252,
		obj_t BgL_fieldz00_5253)
	{
		{	/* Llib/object.scm 619 */
			{	/* Llib/object.scm 620 */
				obj_t BgL_auxz00_6798;

				if (BGl_classzd2fieldzf3z21zz__objectz00(BgL_fieldz00_5253))
					{	/* Llib/object.scm 620 */
						BgL_auxz00_6798 = BgL_fieldz00_5253;
					}
				else
					{
						obj_t BgL_auxz00_6801;

						BgL_auxz00_6801 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 26637)), BGl_string3270z00zz__objectz00,
							BGl_string3260z00zz__objectz00, BgL_fieldz00_5253);
						FAILURE(BgL_auxz00_6801, BFALSE, BFALSE);
					}
				return BGl_classzd2fieldzd2typez00zz__objectz00(BgL_auxz00_6798);
			}
		}

	}



/* class-super */
	BGL_EXPORTED_DEF obj_t BGl_classzd2superzd2zz__objectz00(obj_t
		BgL_classz00_55)
	{
		{	/* Llib/object.scm 625 */
			return BGL_CLASS_SUPER(BgL_classz00_55);
		}

	}



/* &class-super */
	obj_t BGl_z62classzd2superzb0zz__objectz00(obj_t BgL_envz00_5254,
		obj_t BgL_classz00_5255)
	{
		{	/* Llib/object.scm 625 */
			{	/* Llib/object.scm 626 */
				obj_t BgL_auxz00_6807;

				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5255))
					{	/* Llib/object.scm 626 */
						BgL_auxz00_6807 = BgL_classz00_5255;
					}
				else
					{
						obj_t BgL_auxz00_6810;

						BgL_auxz00_6810 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 26916)), BGl_string3271z00zz__objectz00,
							BGl_string3244z00zz__objectz00, BgL_classz00_5255);
						FAILURE(BgL_auxz00_6810, BFALSE, BFALSE);
					}
				return BGl_classzd2superzd2zz__objectz00(BgL_auxz00_6807);
			}
		}

	}



/* class-abstract? */
	BGL_EXPORTED_DEF bool_t BGl_classzd2abstractzf3z21zz__objectz00(obj_t
		BgL_classz00_59)
	{
		{	/* Llib/object.scm 643 */
			{	/* Llib/object.scm 644 */
				obj_t BgL_arg1523z00_3007;

				{	/* Llib/object.scm 644 */
					obj_t BgL_res2554z00_3011;

					{	/* Llib/object.scm 668 */
						bool_t BgL_test3933z00_6815;

						{	/* Llib/object.scm 668 */
							bool_t BgL_res2553z00_3010;

							BgL_res2553z00_3010 = BGL_CLASSP(BgL_classz00_59);
							BgL_test3933z00_6815 = BgL_res2553z00_3010;
						}
						if (BgL_test3933z00_6815)
							{	/* Llib/object.scm 668 */
								BgL_res2554z00_3011 = BGL_CLASS_ALLOC_FUN(BgL_classz00_59);
							}
						else
							{	/* Llib/object.scm 668 */
								BgL_res2554z00_3011 =
									BGl_bigloozd2typezd2errorz00zz__errorz00
									(BGl_string3272z00zz__objectz00,
									BGl_string3244z00zz__objectz00, BgL_classz00_59);
							}
					}
					BgL_arg1523z00_3007 = BgL_res2554z00_3011;
				}
				((bool_t) 1);
			}
			return ((bool_t) 0);
		}

	}



/* &class-abstract? */
	obj_t BGl_z62classzd2abstractzf3z43zz__objectz00(obj_t BgL_envz00_5256,
		obj_t BgL_classz00_5257)
	{
		{	/* Llib/object.scm 643 */
			{	/* Llib/object.scm 644 */
				bool_t BgL_tmpz00_6819;

				{	/* Llib/object.scm 644 */
					obj_t BgL_auxz00_6820;

					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5257))
						{	/* Llib/object.scm 644 */
							BgL_auxz00_6820 = BgL_classz00_5257;
						}
					else
						{
							obj_t BgL_auxz00_6823;

							BgL_auxz00_6823 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 27805)), BGl_string3273z00zz__objectz00,
								BGl_string3244z00zz__objectz00, BgL_classz00_5257);
							FAILURE(BgL_auxz00_6823, BFALSE, BFALSE);
						}
					BgL_tmpz00_6819 =
						BGl_classzd2abstractzf3z21zz__objectz00(BgL_auxz00_6820);
				}
				return BBOOL(BgL_tmpz00_6819);
			}
		}

	}



/* class-wide? */
	BGL_EXPORTED_DEF bool_t BGl_classzd2widezf3z21zz__objectz00(obj_t
		BgL_classz00_60)
	{
		{	/* Llib/object.scm 649 */
			{	/* Llib/object.scm 650 */
				obj_t BgL_arg1524z00_3013;

				{	/* Llib/object.scm 724 */
					bool_t BgL_test3935z00_6829;

					{	/* Llib/object.scm 724 */
						bool_t BgL_res2556z00_3015;

						BgL_res2556z00_3015 = BGL_CLASSP(BgL_classz00_60);
						BgL_test3935z00_6829 = BgL_res2556z00_3015;
					}
					if (BgL_test3935z00_6829)
						{	/* Llib/object.scm 724 */
							BgL_arg1524z00_3013 = BGL_CLASS_SHRINK(BgL_classz00_60);
						}
					else
						{	/* Llib/object.scm 724 */
							BgL_arg1524z00_3013 =
								BGl_bigloozd2typezd2errorz00zz__errorz00
								(BGl_string3274z00zz__objectz00, BGl_string3244z00zz__objectz00,
								BgL_classz00_60);
						}
				}
				return PROCEDUREP(BgL_arg1524z00_3013);
			}
		}

	}



/* &class-wide? */
	obj_t BGl_z62classzd2widezf3z43zz__objectz00(obj_t BgL_envz00_5258,
		obj_t BgL_classz00_5259)
	{
		{	/* Llib/object.scm 649 */
			{	/* Llib/object.scm 650 */
				bool_t BgL_tmpz00_6834;

				{	/* Llib/object.scm 650 */
					obj_t BgL_auxz00_6835;

					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5259))
						{	/* Llib/object.scm 650 */
							BgL_auxz00_6835 = BgL_classz00_5259;
						}
					else
						{
							obj_t BgL_auxz00_6838;

							BgL_auxz00_6838 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 28122)), BGl_string3275z00zz__objectz00,
								BGl_string3244z00zz__objectz00, BgL_classz00_5259);
							FAILURE(BgL_auxz00_6838, BFALSE, BFALSE);
						}
					BgL_tmpz00_6834 =
						BGl_classzd2widezf3z21zz__objectz00(BgL_auxz00_6835);
				}
				return BBOOL(BgL_tmpz00_6834);
			}
		}

	}



/* class-subclasses */
	BGL_EXPORTED_DEF obj_t BGl_classzd2subclasseszd2zz__objectz00(obj_t
		BgL_classz00_61)
	{
		{	/* Llib/object.scm 655 */
			return BGL_CLASS_SUBCLASSES(BgL_classz00_61);
		}

	}



/* &class-subclasses */
	obj_t BGl_z62classzd2subclasseszb0zz__objectz00(obj_t BgL_envz00_5260,
		obj_t BgL_classz00_5261)
	{
		{	/* Llib/object.scm 655 */
			{	/* Llib/object.scm 656 */
				obj_t BgL_auxz00_6845;

				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5261))
					{	/* Llib/object.scm 656 */
						BgL_auxz00_6845 = BgL_classz00_5261;
					}
				else
					{
						obj_t BgL_auxz00_6848;

						BgL_auxz00_6848 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 28411)), BGl_string3276z00zz__objectz00,
							BGl_string3244z00zz__objectz00, BgL_classz00_5261);
						FAILURE(BgL_auxz00_6848, BFALSE, BFALSE);
					}
				return BGl_classzd2subclasseszd2zz__objectz00(BgL_auxz00_6845);
			}
		}

	}



/* class-allocator */
	BGL_EXPORTED_DEF obj_t BGl_classzd2allocatorzd2zz__objectz00(obj_t
		BgL_classz00_64)
	{
		{	/* Llib/object.scm 667 */
			{	/* Llib/object.scm 668 */
				bool_t BgL_test3938z00_6853;

				{	/* Llib/object.scm 668 */
					bool_t BgL_res2558z00_3018;

					BgL_res2558z00_3018 = BGL_CLASSP(BgL_classz00_64);
					BgL_test3938z00_6853 = BgL_res2558z00_3018;
				}
				if (BgL_test3938z00_6853)
					{	/* Llib/object.scm 668 */
						return BGL_CLASS_ALLOC_FUN(BgL_classz00_64);
					}
				else
					{	/* Llib/object.scm 668 */
						return
							BGl_bigloozd2typezd2errorz00zz__errorz00
							(BGl_string3272z00zz__objectz00, BGl_string3244z00zz__objectz00,
							BgL_classz00_64);
					}
			}
		}

	}



/* &class-allocator */
	obj_t BGl_z62classzd2allocatorzb0zz__objectz00(obj_t BgL_envz00_5262,
		obj_t BgL_classz00_5263)
	{
		{	/* Llib/object.scm 667 */
			{	/* Llib/object.scm 668 */
				obj_t BgL_auxz00_6857;

				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5263))
					{	/* Llib/object.scm 668 */
						BgL_auxz00_6857 = BgL_classz00_5263;
					}
				else
					{
						obj_t BgL_auxz00_6860;

						BgL_auxz00_6860 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 29007)), BGl_string3277z00zz__objectz00,
							BGl_string3244z00zz__objectz00, BgL_classz00_5263);
						FAILURE(BgL_auxz00_6860, BFALSE, BFALSE);
					}
				return BGl_classzd2allocatorzd2zz__objectz00(BgL_auxz00_6857);
			}
		}

	}



/* class-hash */
	BGL_EXPORTED_DEF long BGl_classzd2hashzd2zz__objectz00(obj_t BgL_classz00_65)
	{
		{	/* Llib/object.scm 675 */
			return BGL_CLASS_HASH(BgL_classz00_65);
		}

	}



/* &class-hash */
	obj_t BGl_z62classzd2hashzb0zz__objectz00(obj_t BgL_envz00_5264,
		obj_t BgL_classz00_5265)
	{
		{	/* Llib/object.scm 675 */
			{	/* Llib/object.scm 676 */
				long BgL_tmpz00_6866;

				{	/* Llib/object.scm 676 */
					obj_t BgL_auxz00_6867;

					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5265))
						{	/* Llib/object.scm 676 */
							BgL_auxz00_6867 = BgL_classz00_5265;
						}
					else
						{
							obj_t BgL_auxz00_6870;

							BgL_auxz00_6870 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 29372)), BGl_string3278z00zz__objectz00,
								BGl_string3244z00zz__objectz00, BgL_classz00_5265);
							FAILURE(BgL_auxz00_6870, BFALSE, BFALSE);
						}
					BgL_tmpz00_6866 = BGl_classzd2hashzd2zz__objectz00(BgL_auxz00_6867);
				}
				return BINT(BgL_tmpz00_6866);
			}
		}

	}



/* class-constructor */
	BGL_EXPORTED_DEF obj_t BGl_classzd2constructorzd2zz__objectz00(obj_t
		BgL_classz00_66)
	{
		{	/* Llib/object.scm 681 */
			return BGL_CLASS_CONSTRUCTOR(BgL_classz00_66);
		}

	}



/* &class-constructor */
	obj_t BGl_z62classzd2constructorzb0zz__objectz00(obj_t BgL_envz00_5266,
		obj_t BgL_classz00_5267)
	{
		{	/* Llib/object.scm 681 */
			{	/* Llib/object.scm 682 */
				obj_t BgL_auxz00_6877;

				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5267))
					{	/* Llib/object.scm 682 */
						BgL_auxz00_6877 = BgL_classz00_5267;
					}
				else
					{
						obj_t BgL_auxz00_6880;

						BgL_auxz00_6880 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 29653)), BGl_string3279z00zz__objectz00,
							BGl_string3244z00zz__objectz00, BgL_classz00_5267);
						FAILURE(BgL_auxz00_6880, BFALSE, BFALSE);
					}
				return BGl_classzd2constructorzd2zz__objectz00(BgL_auxz00_6877);
			}
		}

	}



/* class-creator */
	BGL_EXPORTED_DEF obj_t BGl_classzd2creatorzd2zz__objectz00(obj_t
		BgL_classz00_67)
	{
		{	/* Llib/object.scm 687 */
			return BGL_CLASS_NEW_FUN(BgL_classz00_67);
		}

	}



/* &class-creator */
	obj_t BGl_z62classzd2creatorzb0zz__objectz00(obj_t BgL_envz00_5268,
		obj_t BgL_classz00_5269)
	{
		{	/* Llib/object.scm 687 */
			{	/* Llib/object.scm 688 */
				obj_t BgL_auxz00_6886;

				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5269))
					{	/* Llib/object.scm 688 */
						BgL_auxz00_6886 = BgL_classz00_5269;
					}
				else
					{
						obj_t BgL_auxz00_6889;

						BgL_auxz00_6889 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 29937)), BGl_string3280z00zz__objectz00,
							BGl_string3244z00zz__objectz00, BgL_classz00_5269);
						FAILURE(BgL_auxz00_6889, BFALSE, BFALSE);
					}
				return BGl_classzd2creatorzd2zz__objectz00(BgL_auxz00_6886);
			}
		}

	}



/* class-nil-init! */
	BGL_EXPORTED_DEF obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t
		BgL_classz00_68)
	{
		{	/* Llib/object.scm 693 */
			{	/* Llib/object.scm 694 */
				obj_t BgL_procz00_1288;

				BgL_procz00_1288 = BGL_CLASS_NIL_FUN(BgL_classz00_68);
				{	/* Llib/object.scm 695 */
					bool_t BgL_test3943z00_6895;

					{	/* Llib/object.scm 650 */
						obj_t BgL_tmpz00_6896;

						BgL_tmpz00_6896 =
							BGl_classzd2shrinkzd2zz__objectz00(BgL_classz00_68);
						BgL_test3943z00_6895 = PROCEDUREP(BgL_tmpz00_6896);
					}
					if (BgL_test3943z00_6895)
						{	/* Llib/object.scm 696 */
							obj_t BgL_superz00_1290;

							BgL_superz00_1290 = BGL_CLASS_SUPER(BgL_classz00_68);
							{	/* Llib/object.scm 696 */
								obj_t BgL_oz00_1291;

								{	/* Llib/object.scm 697 */
									obj_t BgL_fun1531z00_1294;

									{	/* Llib/object.scm 697 */
										obj_t BgL_res2562z00_3027;

										{	/* Llib/object.scm 668 */
											bool_t BgL_test3944z00_6900;

											{	/* Llib/object.scm 668 */
												bool_t BgL_res2561z00_3026;

												{	/* Llib/object.scm 434 */
													obj_t BgL_tmpz00_6901;

													BgL_tmpz00_6901 = ((obj_t) BgL_superz00_1290);
													BgL_res2561z00_3026 = BGL_CLASSP(BgL_tmpz00_6901);
												}
												BgL_test3944z00_6900 = BgL_res2561z00_3026;
											}
											if (BgL_test3944z00_6900)
												{	/* Llib/object.scm 669 */
													obj_t BgL_tmpz00_6904;

													BgL_tmpz00_6904 = ((obj_t) BgL_superz00_1290);
													BgL_res2562z00_3027 =
														BGL_CLASS_ALLOC_FUN(BgL_tmpz00_6904);
												}
											else
												{	/* Llib/object.scm 668 */
													BgL_res2562z00_3027 =
														BGl_bigloozd2typezd2errorz00zz__errorz00
														(BGl_string3272z00zz__objectz00,
														BGl_string3244z00zz__objectz00,
														((obj_t) BgL_superz00_1290));
												}
										}
										BgL_fun1531z00_1294 = BgL_res2562z00_3027;
									}
									BgL_oz00_1291 =
										PROCEDURE_ENTRY(BgL_fun1531z00_1294) (BgL_fun1531z00_1294,
										BEOA);
								}
								{	/* Llib/object.scm 697 */
									obj_t BgL_woz00_1292;

									{	/* Llib/object.scm 698 */
										obj_t BgL_fun1530z00_1293;

										{	/* Llib/object.scm 698 */
											obj_t BgL_res2564z00_3031;

											{	/* Llib/object.scm 668 */
												bool_t BgL_test3945z00_6912;

												{	/* Llib/object.scm 668 */
													bool_t BgL_res2563z00_3030;

													BgL_res2563z00_3030 = BGL_CLASSP(BgL_classz00_68);
													BgL_test3945z00_6912 = BgL_res2563z00_3030;
												}
												if (BgL_test3945z00_6912)
													{	/* Llib/object.scm 668 */
														BgL_res2564z00_3031 =
															BGL_CLASS_ALLOC_FUN(BgL_classz00_68);
													}
												else
													{	/* Llib/object.scm 668 */
														BgL_res2564z00_3031 =
															BGl_bigloozd2typezd2errorz00zz__errorz00
															(BGl_string3272z00zz__objectz00,
															BGl_string3244z00zz__objectz00, BgL_classz00_68);
													}
											}
											BgL_fun1530z00_1293 = BgL_res2564z00_3031;
										}
										BgL_woz00_1292 =
											PROCEDURE_ENTRY(BgL_fun1530z00_1293) (BgL_fun1530z00_1293,
											BgL_oz00_1291, BEOA);
									}
									{	/* Llib/object.scm 698 */

										BGL_CLASS_NIL_SET(BgL_classz00_68, BgL_woz00_1292);
										PROCEDURE_ENTRY(BgL_procz00_1288) (BgL_procz00_1288,
											BgL_woz00_1292, BEOA);
										return BgL_woz00_1292;
									}
								}
							}
						}
					else
						{	/* Llib/object.scm 702 */
							obj_t BgL_oz00_1295;

							{	/* Llib/object.scm 702 */
								obj_t BgL_fun1532z00_1296;

								{	/* Llib/object.scm 702 */
									obj_t BgL_res2566z00_3035;

									{	/* Llib/object.scm 668 */
										bool_t BgL_test3946z00_6925;

										{	/* Llib/object.scm 668 */
											bool_t BgL_res2565z00_3034;

											BgL_res2565z00_3034 = BGL_CLASSP(BgL_classz00_68);
											BgL_test3946z00_6925 = BgL_res2565z00_3034;
										}
										if (BgL_test3946z00_6925)
											{	/* Llib/object.scm 668 */
												BgL_res2566z00_3035 =
													BGL_CLASS_ALLOC_FUN(BgL_classz00_68);
											}
										else
											{	/* Llib/object.scm 668 */
												BgL_res2566z00_3035 =
													BGl_bigloozd2typezd2errorz00zz__errorz00
													(BGl_string3272z00zz__objectz00,
													BGl_string3244z00zz__objectz00, BgL_classz00_68);
											}
									}
									BgL_fun1532z00_1296 = BgL_res2566z00_3035;
								}
								BgL_oz00_1295 =
									PROCEDURE_ENTRY(BgL_fun1532z00_1296) (BgL_fun1532z00_1296,
									BEOA);
							}
							BGL_CLASS_NIL_SET(BgL_classz00_68, BgL_oz00_1295);
							PROCEDURE_ENTRY(BgL_procz00_1288) (BgL_procz00_1288,
								BgL_oz00_1295, BEOA);
							return BgL_oz00_1295;
						}
				}
			}
		}

	}



/* &class-nil-init! */
	obj_t BGl_z62classzd2nilzd2initz12z70zz__objectz00(obj_t BgL_envz00_5270,
		obj_t BgL_classz00_5271)
	{
		{	/* Llib/object.scm 693 */
			{	/* Llib/object.scm 694 */
				obj_t BgL_auxz00_6937;

				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5271))
					{	/* Llib/object.scm 694 */
						BgL_auxz00_6937 = BgL_classz00_5271;
					}
				else
					{
						obj_t BgL_auxz00_6940;

						BgL_auxz00_6940 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 30219)), BGl_string3281z00zz__objectz00,
							BGl_string3244z00zz__objectz00, BgL_classz00_5271);
						FAILURE(BgL_auxz00_6940, BFALSE, BFALSE);
					}
				return BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_auxz00_6937);
			}
		}

	}



/* class-nil */
	BGL_EXPORTED_DEF obj_t BGl_classzd2nilzd2zz__objectz00(obj_t BgL_classz00_69)
	{
		{	/* Llib/object.scm 710 */
			{	/* Llib/object.scm 714 */
				obj_t BgL__ortest_1220z00_6070;

				BgL__ortest_1220z00_6070 = BGL_CLASS_NIL(BgL_classz00_69);
				if (CBOOL(BgL__ortest_1220z00_6070))
					{	/* Llib/object.scm 714 */
						return BgL__ortest_1220z00_6070;
					}
				else
					{	/* Llib/object.scm 714 */
						return BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_69);
					}
			}
		}

	}



/* &class-nil */
	obj_t BGl_z62classzd2nilzb0zz__objectz00(obj_t BgL_envz00_5272,
		obj_t BgL_classz00_5273)
	{
		{	/* Llib/object.scm 710 */
			{	/* Llib/object.scm 714 */
				obj_t BgL_auxz00_6949;

				if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5273))
					{	/* Llib/object.scm 714 */
						BgL_auxz00_6949 = BgL_classz00_5273;
					}
				else
					{
						obj_t BgL_auxz00_6952;

						BgL_auxz00_6952 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 30894)), BGl_string3282z00zz__objectz00,
							BGl_string3244z00zz__objectz00, BgL_classz00_5273);
						FAILURE(BgL_auxz00_6952, BFALSE, BFALSE);
					}
				return BGl_classzd2nilzd2zz__objectz00(BgL_auxz00_6949);
			}
		}

	}



/* class-shrink */
	obj_t BGl_classzd2shrinkzd2zz__objectz00(obj_t BgL_classz00_70)
	{
		{	/* Llib/object.scm 723 */
			{	/* Llib/object.scm 724 */
				bool_t BgL_test3950z00_6957;

				{	/* Llib/object.scm 724 */
					bool_t BgL_res2567z00_3038;

					BgL_res2567z00_3038 = BGL_CLASSP(BgL_classz00_70);
					BgL_test3950z00_6957 = BgL_res2567z00_3038;
				}
				if (BgL_test3950z00_6957)
					{	/* Llib/object.scm 724 */
						return BGL_CLASS_SHRINK(BgL_classz00_70);
					}
				else
					{	/* Llib/object.scm 724 */
						return
							BGl_bigloozd2typezd2errorz00zz__errorz00
							(BGl_string3274z00zz__objectz00, BGl_string3244z00zz__objectz00,
							BgL_classz00_70);
					}
			}
		}

	}



/* initialize-objects! */
	obj_t BGl_initializa7ezd2objectsz12z67zz__objectz00()
	{
		{	/* Llib/object.scm 759 */
			if (INTEGERP(BGl_za2nbzd2classesza2zd2zz__objectz00))
				{	/* Llib/object.scm 760 */
					return BFALSE;
				}
			else
				{	/* Llib/object.scm 760 */
					BGl_za2nbzd2classesza2zd2zz__objectz00 = BINT(((long) 0));
					BGl_za2nbzd2classeszd2maxza2z00zz__objectz00 = BINT(((long) 64));
					BGl_za2classesza2z00zz__objectz00 =
						make_vector_uncollectable(
						(long) CINT(BGl_za2nbzd2classeszd2maxza2z00zz__objectz00), BFALSE);
					BGl_za2nbzd2genericszd2maxza2z00zz__objectz00 = BINT(((long) 64));
					BGl_za2nbzd2genericsza2zd2zz__objectz00 = BINT(((long) 0));
					BGl_za2genericsza2z00zz__objectz00 =
						make_vector_uncollectable(
						(long) CINT(BGl_za2nbzd2genericszd2maxza2z00zz__objectz00), BFALSE);
					if (PAIRP(BGl_za2classzd2keyza2zd2zz__objectz00))
						{	/* Llib/object.scm 767 */
							return BFALSE;
						}
					else
						{	/* Llib/object.scm 767 */
							return (BGl_za2classzd2keyza2zd2zz__objectz00 =
								MAKE_YOUNG_PAIR(BINT(((long) 1)), BINT(((long) 2))), BUNSPEC);
		}}}

	}



/* extend-vector */
	obj_t BGl_extendzd2vectorzd2zz__objectz00(obj_t BgL_oldzd2veczd2_71,
		obj_t BgL_fillz00_72, long BgL_extendz00_73)
	{
		{	/* Llib/object.scm 772 */
			{	/* Llib/object.scm 773 */
				long BgL_newzd2lenzd2_3046;

				BgL_newzd2lenzd2_3046 =
					(BgL_extendz00_73 + VECTOR_LENGTH(((obj_t) BgL_oldzd2veczd2_71)));
				{	/* Llib/object.scm 774 */
					obj_t BgL_newzd2veczd2_3047;

					BgL_newzd2veczd2_3047 =
						make_vector_uncollectable(BgL_newzd2lenzd2_3046, BgL_fillz00_72);
					{	/* Llib/object.scm 775 */

						{
							long BgL_iz00_3067;

							BgL_iz00_3067 = ((long) 0);
						BgL_loopz00_3066:
							if (
								(BgL_iz00_3067 == VECTOR_LENGTH(((obj_t) BgL_oldzd2veczd2_71))))
								{	/* Llib/object.scm 777 */
									return BgL_newzd2veczd2_3047;
								}
							else
								{	/* Llib/object.scm 777 */
									{	/* Llib/object.scm 780 */
										obj_t BgL_arg1540z00_3072;

										BgL_arg1540z00_3072 =
											VECTOR_REF(((obj_t) BgL_oldzd2veczd2_71), BgL_iz00_3067);
										VECTOR_SET(BgL_newzd2veczd2_3047, BgL_iz00_3067,
											BgL_arg1540z00_3072);
									}
									{
										long BgL_iz00_6987;

										BgL_iz00_6987 = (BgL_iz00_3067 + ((long) 1));
										BgL_iz00_3067 = BgL_iz00_6987;
										goto BgL_loopz00_3066;
									}
								}
						}
					}
				}
			}
		}

	}



/* double-nb-classes! */
	bool_t BGl_doublezd2nbzd2classesz12z12zz__objectz00()
	{
		{	/* Llib/object.scm 794 */
			{	/* Llib/object.scm 795 */
				long BgL_za72za7_3104;

				BgL_za72za7_3104 =
					(long) CINT(BGl_za2nbzd2classeszd2maxza2z00zz__objectz00);
				BGl_za2nbzd2classeszd2maxza2z00zz__objectz00 =
					BINT((((long) 2) * BgL_za72za7_3104));
			}
			{	/* Llib/object.scm 796 */
				obj_t BgL_oldzd2veczd2_3106;

				BgL_oldzd2veczd2_3106 = BGl_za2classesza2z00zz__objectz00;
				{	/* Llib/object.scm 787 */
					obj_t BgL_newzd2veczd2_3107;

					BgL_newzd2veczd2_3107 =
						BGl_extendzd2vectorzd2zz__objectz00(BgL_oldzd2veczd2_3106, BFALSE,
						VECTOR_LENGTH(((obj_t) BgL_oldzd2veczd2_3106)));
					FREE_VECTOR_UNCOLLECTABLE(BgL_oldzd2veczd2_3106);
					BUNSPEC;
					BGl_za2classesza2z00zz__objectz00 = BgL_newzd2veczd2_3107;
			}}
			{
				long BgL_iz00_1314;

				BgL_iz00_1314 = ((long) 0);
			BgL_zc3z04anonymousza31543ze3z87_1315:
				if (
					(BgL_iz00_1314 <
						(long) CINT(BGl_za2nbzd2genericsza2zd2zz__objectz00)))
					{	/* Llib/object.scm 800 */
						obj_t BgL_genz00_1317;

						BgL_genz00_1317 =
							VECTOR_REF(BGl_za2genericsza2z00zz__objectz00, BgL_iz00_1314);
						{	/* Llib/object.scm 800 */
							obj_t BgL_defaultzd2bucketzd2_1318;

							BgL_defaultzd2bucketzd2_1318 =
								PROCEDURE_REF(BgL_genz00_1317, (int) (((long) 2)));
							{	/* Llib/object.scm 801 */
								obj_t BgL_oldzd2methodzd2arrayz00_1319;

								BgL_oldzd2methodzd2arrayz00_1319 =
									PROCEDURE_REF(((obj_t) BgL_genz00_1317), (int) (((long) 1)));
								{	/* Llib/object.scm 802 */

									{	/* Llib/object.scm 805 */
										obj_t BgL_arg1545z00_1320;

										{	/* Llib/object.scm 787 */
											obj_t BgL_newzd2veczd2_3117;

											BgL_newzd2veczd2_3117 =
												BGl_extendzd2vectorzd2zz__objectz00
												(BgL_oldzd2methodzd2arrayz00_1319,
												BgL_defaultzd2bucketzd2_1318,
												VECTOR_LENGTH(((obj_t)
														BgL_oldzd2methodzd2arrayz00_1319)));
											FREE_VECTOR_UNCOLLECTABLE
												(BgL_oldzd2methodzd2arrayz00_1319);
											BUNSPEC;
											BgL_arg1545z00_1320 = BgL_newzd2veczd2_3117;
										}
										PROCEDURE_SET(
											((obj_t) BgL_genz00_1317),
											(int) (((long) 1)), BgL_arg1545z00_1320);
									}
									{
										long BgL_iz00_7012;

										BgL_iz00_7012 = (BgL_iz00_1314 + ((long) 1));
										BgL_iz00_1314 = BgL_iz00_7012;
										goto BgL_zc3z04anonymousza31543ze3z87_1315;
									}
								}
							}
						}
					}
				else
					{	/* Llib/object.scm 799 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* double-nb-generics! */
	obj_t BGl_doublezd2nbzd2genericsz12z12zz__objectz00()
	{
		{	/* Llib/object.scm 811 */
			{	/* Llib/object.scm 812 */
				long BgL_za72za7_3124;

				BgL_za72za7_3124 =
					(long) CINT(BGl_za2nbzd2genericszd2maxza2z00zz__objectz00);
				BGl_za2nbzd2genericszd2maxza2z00zz__objectz00 =
					BINT((((long) 2) * BgL_za72za7_3124));
			}
			{	/* Llib/object.scm 813 */
				obj_t BgL_oldzd2veczd2_3126;

				BgL_oldzd2veczd2_3126 = BGl_za2genericsza2z00zz__objectz00;
				{	/* Llib/object.scm 787 */
					obj_t BgL_newzd2veczd2_3127;

					BgL_newzd2veczd2_3127 =
						BGl_extendzd2vectorzd2zz__objectz00(BgL_oldzd2veczd2_3126, BFALSE,
						VECTOR_LENGTH(((obj_t) BgL_oldzd2veczd2_3126)));
					FREE_VECTOR_UNCOLLECTABLE(BgL_oldzd2veczd2_3126);
					BUNSPEC;
					return (BGl_za2genericsza2z00zz__objectz00 =
						BgL_newzd2veczd2_3127, BUNSPEC);
				}
			}
		}

	}



/* object? */
	BGL_EXPORTED_DEF bool_t BGl_objectzf3zf3zz__objectz00(obj_t BgL_objz00_76)
	{
		{	/* Llib/object.scm 818 */
			return BGL_OBJECTP(BgL_objz00_76);
		}

	}



/* &object? */
	obj_t BGl_z62objectzf3z91zz__objectz00(obj_t BgL_envz00_5274,
		obj_t BgL_objz00_5275)
	{
		{	/* Llib/object.scm 818 */
			return BBOOL(BGl_objectzf3zf3zz__objectz00(BgL_objz00_5275));
		}

	}



/* object-class-num */
	BGL_EXPORTED_DEF long
		BGl_objectzd2classzd2numz00zz__objectz00(BgL_objectz00_bglt BgL_objz00_77)
	{
		{	/* Llib/object.scm 824 */
			return BGL_OBJECT_CLASS_NUM(BgL_objz00_77);
		}

	}



/* &object-class-num */
	obj_t BGl_z62objectzd2classzd2numz62zz__objectz00(obj_t BgL_envz00_5276,
		obj_t BgL_objz00_5277)
	{
		{	/* Llib/object.scm 824 */
			{	/* Llib/object.scm 825 */
				long BgL_tmpz00_7025;

				{	/* Llib/object.scm 825 */
					BgL_objectz00_bglt BgL_auxz00_7026;

					if (BGl_isazf3zf3zz__objectz00(BgL_objz00_5277,
							BGl_objectz00zz__objectz00))
						{	/* Llib/object.scm 825 */
							BgL_auxz00_7026 = ((BgL_objectz00_bglt) BgL_objz00_5277);
						}
					else
						{
							obj_t BgL_auxz00_7030;

							BgL_auxz00_7030 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 36157)), BGl_string3283z00zz__objectz00,
								BGl_string3284z00zz__objectz00, BgL_objz00_5277);
							FAILURE(BgL_auxz00_7030, BFALSE, BFALSE);
						}
					BgL_tmpz00_7025 =
						BGl_objectzd2classzd2numz00zz__objectz00(BgL_auxz00_7026);
				}
				return BINT(BgL_tmpz00_7025);
			}
		}

	}



/* object-class-num-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_objectzd2classzd2numzd2setz12zc0zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_78, long BgL_numz00_79)
	{
		{	/* Llib/object.scm 830 */
			return BGL_OBJECT_CLASS_NUM_SET(BgL_objz00_78, BgL_numz00_79);
		}

	}



/* &object-class-num-set! */
	obj_t BGl_z62objectzd2classzd2numzd2setz12za2zz__objectz00(obj_t
		BgL_envz00_5278, obj_t BgL_objz00_5279, obj_t BgL_numz00_5280)
	{
		{	/* Llib/object.scm 830 */
			{	/* Llib/object.scm 831 */
				long BgL_auxz00_7045;
				BgL_objectz00_bglt BgL_auxz00_7037;

				{	/* Llib/object.scm 831 */
					obj_t BgL_tmpz00_7046;

					if (INTEGERP(BgL_numz00_5280))
						{	/* Llib/object.scm 831 */
							BgL_tmpz00_7046 = BgL_numz00_5280;
						}
					else
						{
							obj_t BgL_auxz00_7049;

							BgL_auxz00_7049 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 36469)), BGl_string3285z00zz__objectz00,
								BGl_string3242z00zz__objectz00, BgL_numz00_5280);
							FAILURE(BgL_auxz00_7049, BFALSE, BFALSE);
						}
					BgL_auxz00_7045 = (long) CINT(BgL_tmpz00_7046);
				}
				if (BGl_isazf3zf3zz__objectz00(BgL_objz00_5279,
						BGl_objectz00zz__objectz00))
					{	/* Llib/object.scm 831 */
						BgL_auxz00_7037 = ((BgL_objectz00_bglt) BgL_objz00_5279);
					}
				else
					{
						obj_t BgL_auxz00_7041;

						BgL_auxz00_7041 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 36469)), BGl_string3285z00zz__objectz00,
							BGl_string3284z00zz__objectz00, BgL_objz00_5279);
						FAILURE(BgL_auxz00_7041, BFALSE, BFALSE);
					}
				return
					BGl_objectzd2classzd2numzd2setz12zc0zz__objectz00(BgL_auxz00_7037,
					BgL_auxz00_7045);
			}
		}

	}



/* object-class */
	BGL_EXPORTED_DEF obj_t BGl_objectzd2classzd2zz__objectz00(BgL_objectz00_bglt
		BgL_objectz00_80)
	{
		{	/* Llib/object.scm 836 */
			{	/* Llib/object.scm 838 */
				long BgL_arg1547z00_6071;

				{	/* Llib/object.scm 838 */
					long BgL_arg1551z00_6072;

					{	/* Llib/object.scm 838 */
						long BgL_res2582z00_6073;

						BgL_res2582z00_6073 = BGL_OBJECT_CLASS_NUM(BgL_objectz00_80);
						BgL_arg1551z00_6072 = BgL_res2582z00_6073;
					}
					BgL_arg1547z00_6071 = (BgL_arg1551z00_6072 - OBJECT_TYPE);
				}
				return
					VECTOR_REF(BGl_za2classesza2z00zz__objectz00, BgL_arg1547z00_6071);
			}
		}

	}



/* &object-class */
	obj_t BGl_z62objectzd2classzb0zz__objectz00(obj_t BgL_envz00_5281,
		obj_t BgL_objectz00_5282)
	{
		{	/* Llib/object.scm 836 */
			{	/* Llib/object.scm 838 */
				BgL_objectz00_bglt BgL_auxz00_7058;

				if (BGl_isazf3zf3zz__objectz00(BgL_objectz00_5282,
						BGl_objectz00zz__objectz00))
					{	/* Llib/object.scm 838 */
						BgL_auxz00_7058 = ((BgL_objectz00_bglt) BgL_objectz00_5282);
					}
				else
					{
						obj_t BgL_auxz00_7062;

						BgL_auxz00_7062 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 36810)), BGl_string3286z00zz__objectz00,
							BGl_string3284z00zz__objectz00, BgL_objectz00_5282);
						FAILURE(BgL_auxz00_7062, BFALSE, BFALSE);
					}
				return BGl_objectzd2classzd2zz__objectz00(BgL_auxz00_7058);
			}
		}

	}



/* generic-default */
	BGL_EXPORTED_DEF obj_t BGl_genericzd2defaultzd2zz__objectz00(obj_t
		BgL_genericz00_81)
	{
		{	/* Llib/object.scm 843 */
			return PROCEDURE_REF(BgL_genericz00_81, (int) (((long) 0)));
		}

	}



/* &generic-default */
	obj_t BGl_z62genericzd2defaultzb0zz__objectz00(obj_t BgL_envz00_5283,
		obj_t BgL_genericz00_5284)
	{
		{	/* Llib/object.scm 843 */
			{	/* Llib/object.scm 844 */
				obj_t BgL_auxz00_7069;

				if (PROCEDUREP(BgL_genericz00_5284))
					{	/* Llib/object.scm 844 */
						BgL_auxz00_7069 = BgL_genericz00_5284;
					}
				else
					{
						obj_t BgL_auxz00_7072;

						BgL_auxz00_7072 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 37126)), BGl_string3287z00zz__objectz00,
							BGl_string3288z00zz__objectz00, BgL_genericz00_5284);
						FAILURE(BgL_auxz00_7072, BFALSE, BFALSE);
					}
				return BGl_genericzd2defaultzd2zz__objectz00(BgL_auxz00_7069);
			}
		}

	}



/* generic-method-array */
	BGL_EXPORTED_DEF obj_t BGl_genericzd2methodzd2arrayz00zz__objectz00(obj_t
		BgL_genericz00_84)
	{
		{	/* Llib/object.scm 852 */
			return PROCEDURE_REF(BgL_genericz00_84, (int) (((long) 1)));
		}

	}



/* &generic-method-array */
	obj_t BGl_z62genericzd2methodzd2arrayz62zz__objectz00(obj_t BgL_envz00_5285,
		obj_t BgL_genericz00_5286)
	{
		{	/* Llib/object.scm 852 */
			{	/* Llib/object.scm 853 */
				obj_t BgL_auxz00_7079;

				if (PROCEDUREP(BgL_genericz00_5286))
					{	/* Llib/object.scm 853 */
						BgL_auxz00_7079 = BgL_genericz00_5286;
					}
				else
					{
						obj_t BgL_auxz00_7082;

						BgL_auxz00_7082 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 37519)), BGl_string3289z00zz__objectz00,
							BGl_string3288z00zz__objectz00, BgL_genericz00_5286);
						FAILURE(BgL_auxz00_7082, BFALSE, BFALSE);
					}
				return BGl_genericzd2methodzd2arrayz00zz__objectz00(BgL_auxz00_7079);
			}
		}

	}



/* method-array-ref */
	BGL_EXPORTED_DEF obj_t BGl_methodzd2arrayzd2refz00zz__objectz00(obj_t
		BgL_genericz00_90, obj_t BgL_arrayz00_91, int BgL_offsetz00_92)
	{
		{	/* Llib/object.scm 874 */
			{	/* Llib/object.scm 875 */
				long BgL_offsetz00_6074;

				BgL_offsetz00_6074 = ((long) (BgL_offsetz00_92) - OBJECT_TYPE);
				{	/* Llib/object.scm 875 */
					long BgL_modz00_6075;

					BgL_modz00_6075 =
						(BgL_offsetz00_6074 >> (int) ((long) ((int) (((long) 4)))));
					{	/* Llib/object.scm 876 */
						long BgL_restz00_6076;

						BgL_restz00_6076 =
							(BgL_offsetz00_6074 &
							(long) (
								(int) (
									((long) (
											(int) (
												(((long) 1) <<
													(int) (
														(long) ((int) (((long) 4))))))) - ((long) 1)))));
						{	/* Llib/object.scm 877 */

							{	/* Llib/object.scm 878 */
								obj_t BgL_bucketz00_6077;

								BgL_bucketz00_6077 =
									VECTOR_REF(BgL_arrayz00_91, BgL_modz00_6075);
								return
									VECTOR_REF(((obj_t) BgL_bucketz00_6077), BgL_restz00_6076);
							}
						}
					}
				}
			}
		}

	}



/* &method-array-ref */
	obj_t BGl_z62methodzd2arrayzd2refz62zz__objectz00(obj_t BgL_envz00_5287,
		obj_t BgL_genericz00_5288, obj_t BgL_arrayz00_5289,
		obj_t BgL_offsetz00_5290)
	{
		{	/* Llib/object.scm 874 */
			{	/* Llib/object.scm 875 */
				int BgL_auxz00_7120;
				obj_t BgL_auxz00_7113;
				obj_t BgL_auxz00_7106;

				{	/* Llib/object.scm 875 */
					obj_t BgL_tmpz00_7121;

					if (INTEGERP(BgL_offsetz00_5290))
						{	/* Llib/object.scm 875 */
							BgL_tmpz00_7121 = BgL_offsetz00_5290;
						}
					else
						{
							obj_t BgL_auxz00_7124;

							BgL_auxz00_7124 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 38672)), BGl_string3290z00zz__objectz00,
								BGl_string3242z00zz__objectz00, BgL_offsetz00_5290);
							FAILURE(BgL_auxz00_7124, BFALSE, BFALSE);
						}
					BgL_auxz00_7120 = CINT(BgL_tmpz00_7121);
				}
				if (VECTORP(BgL_arrayz00_5289))
					{	/* Llib/object.scm 875 */
						BgL_auxz00_7113 = BgL_arrayz00_5289;
					}
				else
					{
						obj_t BgL_auxz00_7116;

						BgL_auxz00_7116 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 38672)), BGl_string3290z00zz__objectz00,
							BGl_string3254z00zz__objectz00, BgL_arrayz00_5289);
						FAILURE(BgL_auxz00_7116, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_genericz00_5288))
					{	/* Llib/object.scm 875 */
						BgL_auxz00_7106 = BgL_genericz00_5288;
					}
				else
					{
						obj_t BgL_auxz00_7109;

						BgL_auxz00_7109 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 38672)), BGl_string3290z00zz__objectz00,
							BGl_string3288z00zz__objectz00, BgL_genericz00_5288);
						FAILURE(BgL_auxz00_7109, BFALSE, BFALSE);
					}
				return
					BGl_methodzd2arrayzd2refz00zz__objectz00(BgL_auxz00_7106,
					BgL_auxz00_7113, BgL_auxz00_7120);
			}
		}

	}



/* method-array-set! */
	obj_t BGl_methodzd2arrayzd2setz12z12zz__objectz00(obj_t BgL_genericz00_93,
		obj_t BgL_arrayz00_94, long BgL_offsetz00_95, obj_t BgL_methodz00_96)
	{
		{	/* Llib/object.scm 884 */
			{	/* Llib/object.scm 885 */
				long BgL_offsetz00_1331;

				BgL_offsetz00_1331 = (BgL_offsetz00_95 - OBJECT_TYPE);
				{	/* Llib/object.scm 885 */
					long BgL_modz00_1332;

					{	/* Llib/object.scm 888 */
						uint32_t BgL_arg1569z00_1352;

						{	/* Llib/object.scm 888 */
							uint32_t BgL_arg1570z00_1353;
							uint32_t BgL_arg1573z00_1354;

							{	/* Llib/object.scm 888 */
								uint32_t BgL_res2594z00_3172;

								BgL_res2594z00_3172 = (uint32_t) (BgL_offsetz00_1331);
								BgL_arg1570z00_1353 = BgL_res2594z00_3172;
							}
							{	/* Llib/object.scm 889 */
								int BgL_arg1574z00_1355;

								BgL_arg1574z00_1355 =
									(int) ((((long) 1) << (int) ((long) ((int) (((long) 4))))));
								{	/* Llib/object.scm 889 */
									uint32_t BgL_res2598z00_3179;

									{	/* Llib/object.scm 889 */
										long BgL_tmpz00_7137;

										BgL_tmpz00_7137 = (long) (BgL_arg1574z00_1355);
										BgL_res2598z00_3179 = (uint32_t) (BgL_tmpz00_7137);
									}
									BgL_arg1573z00_1354 = BgL_res2598z00_3179;
							}}
							{	/* Llib/object.scm 887 */
								uint32_t BgL_res2599z00_3182;

								{	/* Llib/object.scm 887 */
									int32_t BgL_tmpz00_7140;

									BgL_tmpz00_7140 = (int32_t) (BgL_arg1573z00_1354);
									BgL_res2599z00_3182 = (BgL_arg1570z00_1353 / BgL_tmpz00_7140);
								}
								BgL_arg1569z00_1352 = BgL_res2599z00_3182;
						}}
						{	/* Llib/object.scm 886 */
							long BgL_res2600z00_3184;

							BgL_res2600z00_3184 = (long) (BgL_arg1569z00_1352);
							BgL_modz00_1332 = BgL_res2600z00_3184;
					}}
					{	/* Llib/object.scm 886 */
						long BgL_restz00_1333;

						{	/* Llib/object.scm 892 */
							uint32_t BgL_arg1565z00_1348;

							{	/* Llib/object.scm 892 */
								uint32_t BgL_arg1566z00_1349;
								uint32_t BgL_arg1567z00_1350;

								{	/* Llib/object.scm 892 */
									uint32_t BgL_res2601z00_3186;

									BgL_res2601z00_3186 = (uint32_t) (BgL_offsetz00_1331);
									BgL_arg1566z00_1349 = BgL_res2601z00_3186;
								}
								{	/* Llib/object.scm 893 */
									int BgL_arg1568z00_1351;

									BgL_arg1568z00_1351 =
										(int) ((((long) 1) << (int) ((long) ((int) (((long) 4))))));
									{	/* Llib/object.scm 893 */
										uint32_t BgL_res2605z00_3193;

										{	/* Llib/object.scm 893 */
											long BgL_tmpz00_7150;

											BgL_tmpz00_7150 = (long) (BgL_arg1568z00_1351);
											BgL_res2605z00_3193 = (uint32_t) (BgL_tmpz00_7150);
										}
										BgL_arg1567z00_1350 = BgL_res2605z00_3193;
								}}
								{	/* Llib/object.scm 891 */
									uint32_t BgL_res2606z00_3196;

									{	/* Llib/object.scm 891 */
										int32_t BgL_tmpz00_7153;

										BgL_tmpz00_7153 = (int32_t) (BgL_arg1567z00_1350);
										BgL_res2606z00_3196 =
											(BgL_arg1566z00_1349 % BgL_tmpz00_7153);
									}
									BgL_arg1565z00_1348 = BgL_res2606z00_3196;
							}}
							{	/* Llib/object.scm 890 */
								long BgL_res2607z00_3198;

								BgL_res2607z00_3198 = (long) (BgL_arg1565z00_1348);
								BgL_restz00_1333 = BgL_res2607z00_3198;
						}}
						{	/* Llib/object.scm 890 */

							{	/* Llib/object.scm 894 */
								obj_t BgL_bucketz00_1334;

								BgL_bucketz00_1334 =
									VECTOR_REF(((obj_t) BgL_arrayz00_94), BgL_modz00_1332);
								{	/* Llib/object.scm 895 */
									bool_t BgL_test3964z00_7159;

									{	/* Llib/object.scm 895 */
										bool_t BgL_test3965z00_7160;

										{	/* Llib/object.scm 895 */
											obj_t BgL_tmpz00_7161;

											{	/* Llib/object.scm 895 */
												obj_t BgL_res2608z00_3202;

												BgL_res2608z00_3202 =
													PROCEDURE_REF(
													((obj_t) BgL_genericz00_93), (int) (((long) 0)));
												BgL_tmpz00_7161 = BgL_res2608z00_3202;
											}
											BgL_test3965z00_7160 =
												(BgL_methodz00_96 == BgL_tmpz00_7161);
										}
										if (BgL_test3965z00_7160)
											{	/* Llib/object.scm 895 */
												BgL_test3964z00_7159 = ((bool_t) 1);
											}
										else
											{	/* Llib/object.scm 895 */
												if (
													(BgL_bucketz00_1334 ==
														PROCEDURE_REF(BgL_genericz00_93,
															(int) (((long) 2)))))
													{	/* Llib/object.scm 896 */
														BgL_test3964z00_7159 = ((bool_t) 0);
													}
												else
													{	/* Llib/object.scm 896 */
														BgL_test3964z00_7159 = ((bool_t) 1);
													}
											}
									}
									if (BgL_test3964z00_7159)
										{	/* Llib/object.scm 895 */
											return
												VECTOR_SET(
												((obj_t) BgL_bucketz00_1334), BgL_restz00_1333,
												BgL_methodz00_96);
										}
									else
										{	/* Llib/object.scm 900 */
											obj_t BgL_bucketz00_1342;

											{	/* Llib/object.scm 900 */
												int BgL_arg1562z00_1343;

												BgL_arg1562z00_1343 =
													(int) (
													(((long) 1) << (int) ((long) ((int) (((long) 4))))));
												BgL_bucketz00_1342 =
													BGl_copyzd2vectorzd2zz__r4_vectors_6_8z00
													(BgL_bucketz00_1334, (long) (BgL_arg1562z00_1343));
											}
											VECTOR_SET(BgL_bucketz00_1342, BgL_restz00_1333,
												BgL_methodz00_96);
											return VECTOR_SET(((obj_t) BgL_arrayz00_94),
												BgL_modz00_1332, BgL_bucketz00_1342);
										}
								}
							}
						}
					}
				}
			}
		}

	}



/* generic-memory-statistics */
	BGL_EXPORTED_DEF obj_t BGl_genericzd2memoryzd2statisticsz00zz__objectz00()
	{
		{	/* Llib/object.scm 907 */
			{	/* Llib/object.scm 909 */
				obj_t BgL_top3968z00_7183;

				BgL_top3968z00_7183 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(bigloo_generic_mutex);
				BGL_EXITD_PUSH_PROTECT(BgL_top3968z00_7183, bigloo_generic_mutex);
				BUNSPEC;
				{	/* Llib/object.scm 909 */
					obj_t BgL_tmp3967z00_7182;

					{
						long BgL_gz00_1357;
						long BgL_siza7eza7_1358;

						BgL_gz00_1357 = ((long) 0);
						BgL_siza7eza7_1358 = ((long) 0);
					BgL_zc3z04anonymousza31575ze3z87_1359:
						if (
							(BgL_gz00_1357 ==
								(long) CINT(BGl_za2nbzd2genericsza2zd2zz__objectz00)))
							{	/* Llib/object.scm 913 */
								obj_t BgL_arg1577z00_1361;
								obj_t BgL_arg1578z00_1362;

								{	/* Llib/object.scm 913 */
									obj_t BgL_arg1579z00_1363;

									BgL_arg1579z00_1363 =
										MAKE_YOUNG_PAIR(BGl_za2nbzd2genericsza2zd2zz__objectz00,
										BNIL);
									BgL_arg1577z00_1361 =
										MAKE_YOUNG_PAIR(BGl_symbol3291z00zz__objectz00,
										BgL_arg1579z00_1363);
								}
								{	/* Llib/object.scm 914 */
									obj_t BgL_arg1580z00_1364;
									obj_t BgL_arg1582z00_1365;

									{	/* Llib/object.scm 914 */
										obj_t BgL_arg1583z00_1366;

										BgL_arg1583z00_1366 =
											MAKE_YOUNG_PAIR(BGl_za2nbzd2classesza2zd2zz__objectz00,
											BNIL);
										BgL_arg1580z00_1364 =
											MAKE_YOUNG_PAIR(BGl_symbol3293z00zz__objectz00,
											BgL_arg1583z00_1366);
									}
									{	/* Llib/object.scm 915 */
										obj_t BgL_arg1584z00_1367;
										obj_t BgL_arg1587z00_1368;

										{	/* Llib/object.scm 915 */
											obj_t BgL_arg1588z00_1369;

											BgL_arg1588z00_1369 =
												MAKE_YOUNG_PAIR(BINT(BgL_siza7eza7_1358), BNIL);
											BgL_arg1584z00_1367 =
												MAKE_YOUNG_PAIR(BGl_symbol3294z00zz__objectz00,
												BgL_arg1588z00_1369);
										}
										{	/* Llib/object.scm 918 */
											obj_t BgL_arg1589z00_1370;
											obj_t BgL_arg1592z00_1371;

											{	/* Llib/object.scm 918 */
												obj_t BgL_arg1593z00_1372;

												{	/* Llib/object.scm 918 */
													long BgL_arg1596z00_1373;

													{	/* Llib/object.scm 918 */
														obj_t BgL_arg1597z00_1374;

														{	/* Llib/object.scm 918 */
															obj_t BgL_arg1598z00_1375;

															BgL_arg1598z00_1375 =
																VECTOR_REF(BGl_za2genericsza2z00zz__objectz00,
																((long) 0));
															BgL_arg1597z00_1374 =
																PROCEDURE_REF(((obj_t) BgL_arg1598z00_1375),
																(int) (((long) 1)));
														}
														BgL_arg1596z00_1373 =
															VECTOR_LENGTH(((obj_t) BgL_arg1597z00_1374));
													}
													BgL_arg1593z00_1372 =
														MAKE_YOUNG_PAIR(BINT(BgL_arg1596z00_1373), BNIL);
												}
												BgL_arg1589z00_1370 =
													MAKE_YOUNG_PAIR(BGl_symbol3296z00zz__objectz00,
													BgL_arg1593z00_1372);
											}
											{	/* Llib/object.scm 919 */
												obj_t BgL_arg1599z00_1376;
												obj_t BgL_arg1602z00_1377;

												{	/* Llib/object.scm 919 */
													obj_t BgL_arg1603z00_1378;

													{	/* Llib/object.scm 919 */
														int BgL_arg1604z00_1379;

														BgL_arg1604z00_1379 =
															(int) (
															(((long) 1) <<
																(int) ((long) ((int) (((long) 4))))));
														BgL_arg1603z00_1378 =
															MAKE_YOUNG_PAIR(BINT(BgL_arg1604z00_1379), BNIL);
													}
													BgL_arg1599z00_1376 =
														MAKE_YOUNG_PAIR(BGl_symbol3298z00zz__objectz00,
														BgL_arg1603z00_1378);
												}
												{	/* Llib/object.scm 920 */
													obj_t BgL_arg1605z00_1380;
													obj_t BgL_arg1606z00_1381;

													{	/* Llib/object.scm 920 */
														obj_t BgL_arg1607z00_1382;

														BgL_arg1607z00_1382 =
															MAKE_YOUNG_PAIR
															(BGl_za2nbzd2classeszd2maxza2z00zz__objectz00,
															BNIL);
														BgL_arg1605z00_1380 =
															MAKE_YOUNG_PAIR(BGl_symbol3300z00zz__objectz00,
															BgL_arg1607z00_1382);
													}
													{	/* Llib/object.scm 921 */
														obj_t BgL_arg1608z00_1383;

														{	/* Llib/object.scm 921 */
															obj_t BgL_arg1611z00_1384;

															BgL_arg1611z00_1384 =
																MAKE_YOUNG_PAIR
																(BGl_za2nbzd2genericszd2maxza2z00zz__objectz00,
																BNIL);
															BgL_arg1608z00_1383 =
																MAKE_YOUNG_PAIR(BGl_symbol3302z00zz__objectz00,
																BgL_arg1611z00_1384);
														}
														BgL_arg1606z00_1381 =
															MAKE_YOUNG_PAIR(BgL_arg1608z00_1383, BNIL);
													}
													BgL_arg1602z00_1377 =
														MAKE_YOUNG_PAIR(BgL_arg1605z00_1380,
														BgL_arg1606z00_1381);
												}
												BgL_arg1592z00_1371 =
													MAKE_YOUNG_PAIR(BgL_arg1599z00_1376,
													BgL_arg1602z00_1377);
											}
											BgL_arg1587z00_1368 =
												MAKE_YOUNG_PAIR(BgL_arg1589z00_1370,
												BgL_arg1592z00_1371);
										}
										BgL_arg1582z00_1365 =
											MAKE_YOUNG_PAIR(BgL_arg1584z00_1367, BgL_arg1587z00_1368);
									}
									BgL_arg1578z00_1362 =
										MAKE_YOUNG_PAIR(BgL_arg1580z00_1364, BgL_arg1582z00_1365);
								}
								BgL_tmp3967z00_7182 =
									MAKE_YOUNG_PAIR(BgL_arg1577z00_1361, BgL_arg1578z00_1362);
							}
						else
							{	/* Llib/object.scm 922 */
								obj_t BgL_genz00_1385;

								BgL_genz00_1385 =
									VECTOR_REF(BGl_za2genericsza2z00zz__objectz00, BgL_gz00_1357);
								{	/* Llib/object.scm 922 */
									obj_t BgL_dbuckz00_1386;

									BgL_dbuckz00_1386 =
										PROCEDURE_REF(BgL_genz00_1385, (int) (((long) 2)));
									{	/* Llib/object.scm 923 */
										long BgL_dza7za7_1387;

										BgL_dza7za7_1387 = ((long) 0);
										{	/* Llib/object.scm 924 */
											obj_t BgL_sza7za7_1388;

											{	/* Llib/object.scm 925 */
												obj_t BgL_runner1629z00_1413;

												{	/* Llib/object.scm 925 */
													obj_t BgL_l1314z00_1396;

													{	/* Llib/object.scm 932 */
														obj_t BgL_arg1628z00_1412;

														BgL_arg1628z00_1412 =
															PROCEDURE_REF(
															((obj_t) BgL_genz00_1385), (int) (((long) 1)));
														BgL_l1314z00_1396 =
															BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
															(BgL_arg1628z00_1412);
													}
													if (NULLP(BgL_l1314z00_1396))
														{	/* Llib/object.scm 925 */
															BgL_runner1629z00_1413 = BNIL;
														}
													else
														{	/* Llib/object.scm 925 */
															obj_t BgL_head1316z00_1398;

															{	/* Llib/object.scm 925 */
																obj_t BgL_res2619z00_3231;

																BgL_res2619z00_3231 =
																	MAKE_YOUNG_PAIR(BNIL, BNIL);
																BgL_head1316z00_1398 = BgL_res2619z00_3231;
															}
															{
																obj_t BgL_l1314z00_1400;
																obj_t BgL_tail1317z00_1401;

																BgL_l1314z00_1400 = BgL_l1314z00_1396;
																BgL_tail1317z00_1401 = BgL_head1316z00_1398;
															BgL_zc3z04anonymousza31619ze3z87_1402:
																if (NULLP(BgL_l1314z00_1400))
																	{	/* Llib/object.scm 925 */
																		BgL_runner1629z00_1413 =
																			CDR(BgL_head1316z00_1398);
																	}
																else
																	{	/* Llib/object.scm 925 */
																		obj_t BgL_newtail1318z00_1404;

																		{	/* Llib/object.scm 925 */
																			long BgL_arg1623z00_1406;

																			{	/* Llib/object.scm 925 */
																				obj_t BgL_bz00_1407;

																				BgL_bz00_1407 =
																					CAR(((obj_t) BgL_l1314z00_1400));
																				if (
																					(BgL_bz00_1407 == BgL_dbuckz00_1386))
																					{	/* Llib/object.scm 927 */
																						BgL_dza7za7_1387 =
																							(VECTOR_LENGTH(
																								((obj_t) BgL_bz00_1407)) *
																							((long) 4));
																						BgL_arg1623z00_1406 = ((long) 0);
																					}
																				else
																					{	/* Llib/object.scm 927 */
																						BgL_arg1623z00_1406 =
																							(((long) 4) *
																							VECTOR_LENGTH(
																								((obj_t) BgL_bz00_1407)));
																			}}
																			{	/* Llib/object.scm 925 */
																				obj_t BgL_res2623z00_3241;

																				BgL_res2623z00_3241 =
																					MAKE_YOUNG_PAIR(BINT
																					(BgL_arg1623z00_1406), BNIL);
																				BgL_newtail1318z00_1404 =
																					BgL_res2623z00_3241;
																		}}
																		SET_CDR(BgL_tail1317z00_1401,
																			BgL_newtail1318z00_1404);
																		{	/* Llib/object.scm 925 */
																			obj_t BgL_arg1621z00_1405;

																			BgL_arg1621z00_1405 =
																				CDR(((obj_t) BgL_l1314z00_1400));
																			{
																				obj_t BgL_tail1317z00_7254;
																				obj_t BgL_l1314z00_7253;

																				BgL_l1314z00_7253 = BgL_arg1621z00_1405;
																				BgL_tail1317z00_7254 =
																					BgL_newtail1318z00_1404;
																				BgL_tail1317z00_1401 =
																					BgL_tail1317z00_7254;
																				BgL_l1314z00_1400 = BgL_l1314z00_7253;
																				goto
																					BgL_zc3z04anonymousza31619ze3z87_1402;
																			}
																		}
																	}
															}
														}
												}
												BgL_sza7za7_1388 =
													BGl_zb2zb2zz__r4_numbers_6_5z00
													(BgL_runner1629z00_1413);
											}
											{	/* Llib/object.scm 925 */
												long BgL_bza7za7_1389;

												{	/* Llib/object.scm 933 */
													long BgL_arg1616z00_1394;

													{	/* Llib/object.scm 933 */
														obj_t BgL_arg1617z00_1395;

														BgL_arg1617z00_1395 =
															PROCEDURE_REF(
															((obj_t) BgL_genz00_1385), (int) (((long) 1)));
														BgL_arg1616z00_1394 =
															VECTOR_LENGTH(((obj_t) BgL_arg1617z00_1395));
													}
													BgL_bza7za7_1389 = (((long) 4) * BgL_arg1616z00_1394);
												}
												{	/* Llib/object.scm 933 */

													{	/* Llib/object.scm 934 */
														long BgL_arg1612z00_1390;
														long BgL_arg1613z00_1391;

														BgL_arg1612z00_1390 = (BgL_gz00_1357 + ((long) 1));
														{	/* Llib/object.scm 935 */
															long BgL_arg1614z00_1392;

															{	/* Llib/object.scm 935 */
																long BgL_za72za7_3254;

																BgL_za72za7_3254 =
																	(long) CINT(BgL_sza7za7_1388);
																BgL_arg1614z00_1392 =
																	(
																	(BgL_bza7za7_1389 + BgL_dza7za7_1387) +
																	BgL_za72za7_3254);
															}
															BgL_arg1613z00_1391 =
																(BgL_siza7eza7_1358 + BgL_arg1614z00_1392);
														}
														{
															long BgL_siza7eza7_7268;
															long BgL_gz00_7267;

															BgL_gz00_7267 = BgL_arg1612z00_1390;
															BgL_siza7eza7_7268 = BgL_arg1613z00_1391;
															BgL_siza7eza7_1358 = BgL_siza7eza7_7268;
															BgL_gz00_1357 = BgL_gz00_7267;
															goto BgL_zc3z04anonymousza31575ze3z87_1359;
														}
													}
												}
											}
										}
									}
								}
							}
					}
					BGL_EXITD_POP_PROTECT(BgL_top3968z00_7183);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(bigloo_generic_mutex);
					return BgL_tmp3967z00_7182;
				}
			}
		}

	}



/* &generic-memory-statistics */
	obj_t BGl_z62genericzd2memoryzd2statisticsz62zz__objectz00(obj_t
		BgL_envz00_5291)
	{
		{	/* Llib/object.scm 907 */
			return BGl_genericzd2memoryzd2statisticsz00zz__objectz00();
		}

	}



/* generics-add-class! */
	bool_t BGl_genericszd2addzd2classz12z12zz__objectz00(long
		BgL_classzd2numzd2_97, long BgL_superzd2numzd2_98)
	{
		{	/* Llib/object.scm 942 */
			{
				long BgL_gz00_1416;

				BgL_gz00_1416 = ((long) 0);
			BgL_zc3z04anonymousza31630ze3z87_1417:
				if (
					(BgL_gz00_1416 <
						(long) CINT(BGl_za2nbzd2genericsza2zd2zz__objectz00)))
					{	/* Llib/object.scm 945 */
						obj_t BgL_genz00_1419;

						BgL_genz00_1419 =
							VECTOR_REF(BGl_za2genericsza2z00zz__objectz00, BgL_gz00_1416);
						{	/* Llib/object.scm 945 */
							obj_t BgL_methodzd2arrayzd2_1420;

							BgL_methodzd2arrayzd2_1420 =
								PROCEDURE_REF(((obj_t) BgL_genz00_1419), (int) (((long) 1)));
							{	/* Llib/object.scm 946 */
								obj_t BgL_methodz00_1421;

								{	/* Llib/object.scm 947 */
									int BgL_offsetz00_3267;

									BgL_offsetz00_3267 = (int) (BgL_superzd2numzd2_98);
									{	/* Llib/object.scm 875 */
										long BgL_offsetz00_3268;

										BgL_offsetz00_3268 =
											((long) (BgL_offsetz00_3267) - OBJECT_TYPE);
										{	/* Llib/object.scm 875 */
											long BgL_modz00_3269;

											BgL_modz00_3269 =
												(BgL_offsetz00_3268 >>
												(int) ((long) ((int) (((long) 4)))));
											{	/* Llib/object.scm 876 */
												long BgL_restz00_3271;

												BgL_restz00_3271 =
													(BgL_offsetz00_3268 &
													(long) (
														(int) (
															((long) (
																	(int) (
																		(((long) 1) <<
																			(int) (
																				(long) (
																					(int) (((long) 4))))))) -
																((long) 1)))));
												{	/* Llib/object.scm 877 */

													{	/* Llib/object.scm 878 */
														obj_t BgL_bucketz00_3273;

														BgL_bucketz00_3273 =
															VECTOR_REF(
															((obj_t) BgL_methodzd2arrayzd2_1420),
															BgL_modz00_3269);
														BgL_methodz00_1421 =
															VECTOR_REF(((obj_t) BgL_bucketz00_3273),
															BgL_restz00_3271);
								}}}}}}
								{	/* Llib/object.scm 947 */

									BGl_methodzd2arrayzd2setz12z12zz__objectz00(BgL_genz00_1419,
										BgL_methodzd2arrayzd2_1420, BgL_classzd2numzd2_97,
										BgL_methodz00_1421);
									{
										long BgL_gz00_7301;

										BgL_gz00_7301 = (BgL_gz00_1416 + ((long) 1));
										BgL_gz00_1416 = BgL_gz00_7301;
										goto BgL_zc3z04anonymousza31630ze3z87_1417;
									}
								}
							}
						}
					}
				else
					{	/* Llib/object.scm 944 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* register-class! */
	BGL_EXPORTED_DEF obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t
		BgL_namez00_99, obj_t BgL_modulez00_100, obj_t BgL_superz00_101,
		long BgL_hashz00_102, obj_t BgL_creatorz00_103, obj_t BgL_allocatorz00_104,
		obj_t BgL_constructorz00_105, obj_t BgL_nilz00_106, obj_t BgL_shrinkz00_107,
		obj_t BgL_plainz00_108, obj_t BgL_virtualz00_109)
	{
		{	/* Llib/object.scm 954 */
			{	/* Llib/object.scm 955 */
				obj_t BgL_top3975z00_7304;

				BgL_top3975z00_7304 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(bigloo_generic_mutex);
				BGL_EXITD_PUSH_PROTECT(BgL_top3975z00_7304, bigloo_generic_mutex);
				BUNSPEC;
				{	/* Llib/object.scm 955 */
					obj_t BgL_tmp3974z00_7303;

					BGl_initializa7ezd2objectsz12z67zz__objectz00();
					{	/* Llib/object.scm 957 */
						bool_t BgL_test3976z00_7309;

						if (CBOOL(BgL_superz00_101))
							{	/* Llib/object.scm 957 */
								bool_t BgL_test3978z00_7312;

								{	/* Llib/object.scm 957 */
									bool_t BgL_res2640z00_3299;

									BgL_res2640z00_3299 = BGL_CLASSP(BgL_superz00_101);
									BgL_test3978z00_7312 = BgL_res2640z00_3299;
								}
								if (BgL_test3978z00_7312)
									{	/* Llib/object.scm 957 */
										BgL_test3976z00_7309 = ((bool_t) 0);
									}
								else
									{	/* Llib/object.scm 957 */
										BgL_test3976z00_7309 = ((bool_t) 1);
									}
							}
						else
							{	/* Llib/object.scm 957 */
								BgL_test3976z00_7309 = ((bool_t) 0);
							}
						if (BgL_test3976z00_7309)
							{	/* Llib/object.scm 957 */
								BGl_errorz00zz__errorz00(BgL_namez00_99,
									BGl_string3304z00zz__objectz00, BgL_superz00_101);
							}
						else
							{	/* Llib/object.scm 957 */
								BFALSE;
							}
					}
					if (
						((long) CINT(BGl_za2nbzd2classesza2zd2zz__objectz00) ==
							(long) CINT(BGl_za2nbzd2classeszd2maxza2z00zz__objectz00)))
						{	/* Llib/object.scm 959 */
							BGl_doublezd2nbzd2classesz12z12zz__objectz00();
						}
					else
						{	/* Llib/object.scm 959 */
							((bool_t) 0);
						}
					if (VECTORP(BgL_plainz00_108))
						{	/* Llib/object.scm 961 */
							BFALSE;
						}
					else
						{	/* Llib/object.scm 961 */
							BGl_errorz00zz__errorz00(BGl_string3305z00zz__objectz00,
								BGl_string3306z00zz__objectz00, BgL_plainz00_108);
						}
					{	/* Llib/object.scm 963 */
						obj_t BgL_kz00_1429;

						BgL_kz00_1429 = BGl_classzd2existszd2zz__objectz00(BgL_namez00_99);
						{	/* Llib/object.scm 964 */
							bool_t BgL_test3981z00_7324;

							{	/* Llib/object.scm 964 */
								bool_t BgL_res2643z00_3304;

								BgL_res2643z00_3304 = BGL_CLASSP(BgL_kz00_1429);
								BgL_test3981z00_7324 = BgL_res2643z00_3304;
							}
							if (BgL_test3981z00_7324)
								{	/* Llib/object.scm 967 */
									obj_t BgL_arg1639z00_1431;

									{	/* Llib/object.scm 967 */
										obj_t BgL_res2644z00_3306;

										{	/* Llib/object.scm 481 */
											obj_t BgL_tmpz00_7326;

											BgL_tmpz00_7326 = ((obj_t) BgL_kz00_1429);
											BgL_res2644z00_3306 = BGL_CLASS_MODULE(BgL_tmpz00_7326);
										}
										BgL_arg1639z00_1431 = BgL_res2644z00_3306;
									}
									{	/* Llib/object.scm 965 */
										obj_t BgL_list1640z00_1432;

										{	/* Llib/object.scm 965 */
											obj_t BgL_arg1641z00_1433;

											{	/* Llib/object.scm 965 */
												obj_t BgL_arg1642z00_1434;

												{	/* Llib/object.scm 965 */
													obj_t BgL_arg1643z00_1435;

													{	/* Llib/object.scm 965 */
														obj_t BgL_arg1644z00_1436;

														{	/* Llib/object.scm 965 */
															obj_t BgL_arg1645z00_1437;

															{	/* Llib/object.scm 965 */
																obj_t BgL_arg1648z00_1438;

																{	/* Llib/object.scm 965 */
																	obj_t BgL_arg1649z00_1439;

																	{	/* Llib/object.scm 965 */
																		obj_t BgL_arg1650z00_1440;

																		{	/* Llib/object.scm 965 */
																			obj_t BgL_arg1651z00_1441;

																			BgL_arg1651z00_1441 =
																				MAKE_YOUNG_PAIR
																				(BGl_string3307z00zz__objectz00, BNIL);
																			BgL_arg1650z00_1440 =
																				MAKE_YOUNG_PAIR(BgL_arg1639z00_1431,
																				BgL_arg1651z00_1441);
																		}
																		BgL_arg1649z00_1439 =
																			MAKE_YOUNG_PAIR
																			(BGl_string3308z00zz__objectz00,
																			BgL_arg1650z00_1440);
																	}
																	BgL_arg1648z00_1438 =
																		MAKE_YOUNG_PAIR(BgL_namez00_99,
																		BgL_arg1649z00_1439);
																}
																BgL_arg1645z00_1437 =
																	MAKE_YOUNG_PAIR
																	(BGl_string3309z00zz__objectz00,
																	BgL_arg1648z00_1438);
															}
															BgL_arg1644z00_1436 =
																MAKE_YOUNG_PAIR(BgL_modulez00_100,
																BgL_arg1645z00_1437);
														}
														BgL_arg1643z00_1435 =
															MAKE_YOUNG_PAIR(BGl_string3308z00zz__objectz00,
															BgL_arg1644z00_1436);
													}
													BgL_arg1642z00_1434 =
														MAKE_YOUNG_PAIR(BgL_namez00_99,
														BgL_arg1643z00_1435);
												}
												BgL_arg1641z00_1433 =
													MAKE_YOUNG_PAIR(BGl_string3310z00zz__objectz00,
													BgL_arg1642z00_1434);
											}
											BgL_list1640z00_1432 =
												MAKE_YOUNG_PAIR(BGl_string3305z00zz__objectz00,
												BgL_arg1641z00_1433);
										}
										BGl_warningz00zz__errorz00(BgL_list1640z00_1432);
									}
								}
							else
								{	/* Llib/object.scm 964 */
									BFALSE;
								}
						}
					}
					{	/* Llib/object.scm 968 */
						long BgL_numz00_1442;

						BgL_numz00_1442 =
							(OBJECT_TYPE +
							(long) CINT(BGl_za2nbzd2classesza2zd2zz__objectz00));
						{	/* Llib/object.scm 968 */
							long BgL_depthz00_1443;

							{	/* Llib/object.scm 969 */
								bool_t BgL_test3982z00_7342;

								{	/* Llib/object.scm 969 */
									bool_t BgL_res2646z00_3310;

									BgL_res2646z00_3310 = BGL_CLASSP(BgL_superz00_101);
									BgL_test3982z00_7342 = BgL_res2646z00_3310;
								}
								if (BgL_test3982z00_7342)
									{	/* Llib/object.scm 970 */
										long BgL_arg1665z00_1456;

										BgL_arg1665z00_1456 = BGL_CLASS_DEPTH(BgL_superz00_101);
										BgL_depthz00_1443 = (BgL_arg1665z00_1456 + ((long) 1));
									}
								else
									{	/* Llib/object.scm 969 */
										BgL_depthz00_1443 = ((long) 0);
							}}
							{	/* Llib/object.scm 969 */
								obj_t BgL_classz00_1444;

								{	/* Llib/object.scm 979 */
									obj_t BgL_arg1659z00_1450;
									obj_t BgL_arg1660z00_1451;

									{	/* Llib/object.scm 979 */
										bool_t BgL_test3983z00_7346;

										{	/* Llib/object.scm 979 */
											bool_t BgL_res2648z00_3313;

											BgL_res2648z00_3313 = BGL_CLASSP(BgL_superz00_101);
											BgL_test3983z00_7346 = BgL_res2648z00_3313;
										}
										if (BgL_test3983z00_7346)
											{	/* Llib/object.scm 980 */
												obj_t BgL_arg1662z00_1453;

												{	/* Llib/object.scm 980 */
													obj_t BgL_res2649z00_3315;

													{	/* Llib/object.scm 531 */
														obj_t BgL_tmpz00_7348;

														BgL_tmpz00_7348 = ((obj_t) BgL_superz00_101);
														BgL_res2649z00_3315 =
															BGL_CLASS_ALL_FIELDS(BgL_tmpz00_7348);
													}
													BgL_arg1662z00_1453 = BgL_res2649z00_3315;
												}
												{	/* Llib/object.scm 980 */
													obj_t BgL_list1663z00_1454;

													BgL_list1663z00_1454 =
														MAKE_YOUNG_PAIR(BgL_plainz00_108, BNIL);
													BgL_arg1659z00_1450 =
														BGl_vectorzd2appendzd2zz__r4_vectors_6_8z00
														(BgL_arg1662z00_1453, BgL_list1663z00_1454);
												}
											}
										else
											{	/* Llib/object.scm 979 */
												BgL_arg1659z00_1450 = BgL_plainz00_108;
											}
									}
									BgL_arg1660z00_1451 =
										BGl_makezd2classzd2virtualzd2slotszd2vectorz00zz__objectz00
										(BgL_superz00_101, BgL_virtualz00_109);
									{	/* Llib/object.scm 423 */
										obj_t BgL_auxz00_7358;
										obj_t BgL_auxz00_7356;
										obj_t BgL_tmpz00_7354;

										BgL_auxz00_7358 = ((obj_t) BgL_arg1659z00_1450);
										BgL_auxz00_7356 = ((obj_t) BgL_plainz00_108);
										BgL_tmpz00_7354 = ((obj_t) BgL_allocatorz00_104);
										BgL_classz00_1444 =
											bgl_make_class(BgL_namez00_99, BgL_modulez00_100,
											BgL_numz00_1442, BgL_superz00_101, BNIL, BgL_tmpz00_7354,
											BgL_hashz00_102, BgL_auxz00_7356, BgL_auxz00_7358,
											BgL_constructorz00_105, BgL_arg1660z00_1451,
											BgL_creatorz00_103, BgL_nilz00_106, BgL_shrinkz00_107,
											BgL_depthz00_1443, BFALSE);
									}
								}
								{	/* Llib/object.scm 972 */

									{	/* Llib/object.scm 990 */
										bool_t BgL_test3984z00_7361;

										{	/* Llib/object.scm 990 */
											bool_t BgL_res2650z00_3327;

											BgL_res2650z00_3327 = BGL_CLASSP(BgL_superz00_101);
											BgL_test3984z00_7361 = BgL_res2650z00_3327;
										}
										if (BgL_test3984z00_7361)
											{	/* Llib/object.scm 993 */
												obj_t BgL_arg1654z00_1446;

												{	/* Llib/object.scm 993 */
													obj_t BgL_arg1656z00_1447;

													{	/* Llib/object.scm 993 */
														obj_t BgL_res2651z00_3329;

														{	/* Llib/object.scm 656 */
															obj_t BgL_tmpz00_7363;

															BgL_tmpz00_7363 = ((obj_t) BgL_superz00_101);
															BgL_res2651z00_3329 =
																BGL_CLASS_SUBCLASSES(BgL_tmpz00_7363);
														}
														BgL_arg1656z00_1447 = BgL_res2651z00_3329;
													}
													BgL_arg1654z00_1446 =
														MAKE_YOUNG_PAIR(BgL_classz00_1444,
														BgL_arg1656z00_1447);
												}
												BGL_CLASS_SUBCLASSES_SET(BgL_superz00_101,
													BgL_arg1654z00_1446);
											}
										else
											{	/* Llib/object.scm 990 */
												BFALSE;
											}
									}
									VECTOR_SET(BGl_za2classesza2z00zz__objectz00,
										(long) CINT(BGl_za2nbzd2classesza2zd2zz__objectz00),
										BgL_classz00_1444);
									BGl_za2nbzd2classesza2zd2zz__objectz00 =
										ADDFX(BGl_za2nbzd2classesza2zd2zz__objectz00,
										BINT(((long) 1)));
									{	/* Llib/object.scm 999 */
										long BgL_arg1657z00_1448;

										{	/* Llib/object.scm 999 */
											bool_t BgL_test3985z00_7372;

											{	/* Llib/object.scm 999 */
												bool_t BgL_res2653z00_3334;

												BgL_res2653z00_3334 = BGL_CLASSP(BgL_superz00_101);
												BgL_test3985z00_7372 = BgL_res2653z00_3334;
											}
											if (BgL_test3985z00_7372)
												{	/* Llib/object.scm 999 */
													long BgL_res2654z00_3336;

													{	/* Llib/object.scm 487 */
														obj_t BgL_tmpz00_7374;

														BgL_tmpz00_7374 = ((obj_t) BgL_superz00_101);
														BgL_res2654z00_3336 =
															BGL_CLASS_INDEX(BgL_tmpz00_7374);
													}
													BgL_arg1657z00_1448 = BgL_res2654z00_3336;
												}
											else
												{	/* Llib/object.scm 999 */
													BgL_arg1657z00_1448 = BgL_numz00_1442;
												}
										}
										BGl_genericszd2addzd2classz12z12zz__objectz00
											(BgL_numz00_1442, BgL_arg1657z00_1448);
									}
									BgL_tmp3974z00_7303 = BgL_classz00_1444;
								}
							}
						}
					}
					BGL_EXITD_POP_PROTECT(BgL_top3975z00_7304);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(bigloo_generic_mutex);
					return BgL_tmp3974z00_7303;
				}
			}
		}

	}



/* &register-class! */
	obj_t BGl_z62registerzd2classz12za2zz__objectz00(obj_t BgL_envz00_5292,
		obj_t BgL_namez00_5293, obj_t BgL_modulez00_5294, obj_t BgL_superz00_5295,
		obj_t BgL_hashz00_5296, obj_t BgL_creatorz00_5297,
		obj_t BgL_allocatorz00_5298, obj_t BgL_constructorz00_5299,
		obj_t BgL_nilz00_5300, obj_t BgL_shrinkz00_5301, obj_t BgL_plainz00_5302,
		obj_t BgL_virtualz00_5303)
	{
		{	/* Llib/object.scm 954 */
			{	/* Llib/object.scm 955 */
				obj_t BgL_auxz00_7410;
				obj_t BgL_auxz00_7403;
				long BgL_auxz00_7394;
				obj_t BgL_auxz00_7387;
				obj_t BgL_auxz00_7380;

				if (VECTORP(BgL_virtualz00_5303))
					{	/* Llib/object.scm 955 */
						BgL_auxz00_7410 = BgL_virtualz00_5303;
					}
				else
					{
						obj_t BgL_auxz00_7413;

						BgL_auxz00_7413 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 42213)), BGl_string3311z00zz__objectz00,
							BGl_string3254z00zz__objectz00, BgL_virtualz00_5303);
						FAILURE(BgL_auxz00_7413, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_nilz00_5300))
					{	/* Llib/object.scm 955 */
						BgL_auxz00_7403 = BgL_nilz00_5300;
					}
				else
					{
						obj_t BgL_auxz00_7406;

						BgL_auxz00_7406 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 42213)), BGl_string3311z00zz__objectz00,
							BGl_string3288z00zz__objectz00, BgL_nilz00_5300);
						FAILURE(BgL_auxz00_7406, BFALSE, BFALSE);
					}
				{	/* Llib/object.scm 955 */
					obj_t BgL_tmpz00_7395;

					if (INTEGERP(BgL_hashz00_5296))
						{	/* Llib/object.scm 955 */
							BgL_tmpz00_7395 = BgL_hashz00_5296;
						}
					else
						{
							obj_t BgL_auxz00_7398;

							BgL_auxz00_7398 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 42213)), BGl_string3311z00zz__objectz00,
								BGl_string3242z00zz__objectz00, BgL_hashz00_5296);
							FAILURE(BgL_auxz00_7398, BFALSE, BFALSE);
						}
					BgL_auxz00_7394 = (long) CINT(BgL_tmpz00_7395);
				}
				if (SYMBOLP(BgL_modulez00_5294))
					{	/* Llib/object.scm 955 */
						BgL_auxz00_7387 = BgL_modulez00_5294;
					}
				else
					{
						obj_t BgL_auxz00_7390;

						BgL_auxz00_7390 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 42213)), BGl_string3311z00zz__objectz00,
							BGl_string3237z00zz__objectz00, BgL_modulez00_5294);
						FAILURE(BgL_auxz00_7390, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_namez00_5293))
					{	/* Llib/object.scm 955 */
						BgL_auxz00_7380 = BgL_namez00_5293;
					}
				else
					{
						obj_t BgL_auxz00_7383;

						BgL_auxz00_7383 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 42213)), BGl_string3311z00zz__objectz00,
							BGl_string3237z00zz__objectz00, BgL_namez00_5293);
						FAILURE(BgL_auxz00_7383, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2classz12zc0zz__objectz00(BgL_auxz00_7380,
					BgL_auxz00_7387, BgL_superz00_5295, BgL_auxz00_7394,
					BgL_creatorz00_5297, BgL_allocatorz00_5298, BgL_constructorz00_5299,
					BgL_auxz00_7403, BgL_shrinkz00_5301, BgL_plainz00_5302,
					BgL_auxz00_7410);
			}
		}

	}



/* make-class-virtual-slots-vector */
	obj_t BGl_makezd2classzd2virtualzd2slotszd2vectorz00zz__objectz00(obj_t
		BgL_superz00_110, obj_t BgL_virtualsz00_111)
	{
		{	/* Llib/object.scm 1005 */
			{
				obj_t BgL_vecz00_1475;

				{	/* Llib/object.scm 1014 */
					bool_t BgL_test3991z00_7418;

					{	/* Llib/object.scm 1014 */
						bool_t BgL_res2656z00_3344;

						BgL_res2656z00_3344 = BGL_CLASSP(BgL_superz00_110);
						BgL_test3991z00_7418 = BgL_res2656z00_3344;
					}
					if (BgL_test3991z00_7418)
						{	/* Llib/object.scm 1018 */
							obj_t BgL_ovecz00_1459;

							{	/* Llib/object.scm 1018 */
								obj_t BgL_res2657z00_3346;

								{	/* Llib/object.scm 493 */
									obj_t BgL_tmpz00_7420;

									BgL_tmpz00_7420 = ((obj_t) BgL_superz00_110);
									BgL_res2657z00_3346 =
										BGL_CLASS_VIRTUAL_FIELDS(BgL_tmpz00_7420);
								}
								BgL_ovecz00_1459 = BgL_res2657z00_3346;
							}
							{	/* Llib/object.scm 1020 */
								obj_t BgL_vecz00_1462;

								{	/* Llib/object.scm 1021 */
									long BgL_arg1675z00_1470;

									BgL_arg1675z00_1470 =
										(VECTOR_LENGTH(BgL_ovecz00_1459) +
										VECTOR_LENGTH(((obj_t) BgL_virtualsz00_111)));
									BgL_vecz00_1462 = make_vector(BgL_arg1675z00_1470, BUNSPEC);
								}
								{	/* Llib/object.scm 1021 */

									{
										long BgL_iz00_3363;

										BgL_iz00_3363 = ((long) 0);
									BgL_loopz00_3362:
										if ((BgL_iz00_3363 == VECTOR_LENGTH(BgL_ovecz00_1459)))
											{	/* Llib/object.scm 1023 */
												BgL_vecz00_1475 = BgL_vecz00_1462;
											BgL_lambda1685z00_1476:
												{	/* Llib/object.scm 1008 */
													obj_t BgL_g1321z00_1477;

													BgL_g1321z00_1477 =
														BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
														(BgL_virtualsz00_111);
													{
														obj_t BgL_l1319z00_1479;

														BgL_l1319z00_1479 = BgL_g1321z00_1477;
													BgL_zc3z04anonymousza31686ze3z87_1480:
														if (PAIRP(BgL_l1319z00_1479))
															{	/* Llib/object.scm 1011 */
																{	/* Llib/object.scm 1009 */
																	obj_t BgL_virtualz00_1482;

																	BgL_virtualz00_1482 = CAR(BgL_l1319z00_1479);
																	{	/* Llib/object.scm 1009 */
																		obj_t BgL_numz00_1483;

																		BgL_numz00_1483 =
																			CAR(((obj_t) BgL_virtualz00_1482));
																		{	/* Llib/object.scm 1010 */
																			obj_t BgL_arg1688z00_1484;

																			BgL_arg1688z00_1484 =
																				CDR(((obj_t) BgL_virtualz00_1482));
																			VECTOR_SET(BgL_vecz00_1475,
																				(long) CINT(BgL_numz00_1483),
																				BgL_arg1688z00_1484);
																}}}
																{
																	obj_t BgL_l1319z00_7441;

																	BgL_l1319z00_7441 = CDR(BgL_l1319z00_1479);
																	BgL_l1319z00_1479 = BgL_l1319z00_7441;
																	goto BgL_zc3z04anonymousza31686ze3z87_1480;
																}
															}
														else
															{	/* Llib/object.scm 1011 */
																((bool_t) 1);
															}
													}
												}
												return BgL_vecz00_1475;
											}
										else
											{	/* Llib/object.scm 1023 */
												VECTOR_SET(BgL_vecz00_1462, BgL_iz00_3363,
													VECTOR_REF(BgL_ovecz00_1459, BgL_iz00_3363));
												{
													long BgL_iz00_7445;

													BgL_iz00_7445 = (BgL_iz00_3363 + ((long) 1));
													BgL_iz00_3363 = BgL_iz00_7445;
													goto BgL_loopz00_3362;
												}
											}
									}
								}
							}
						}
					else
						{	/* Llib/object.scm 1015 */
							obj_t BgL_vecz00_1473;

							BgL_vecz00_1473 =
								make_vector(VECTOR_LENGTH(
									((obj_t) BgL_virtualsz00_111)), BUNSPEC);
							{	/* Llib/object.scm 1016 */

								{
									obj_t BgL_vecz00_7450;

									BgL_vecz00_7450 = BgL_vecz00_1473;
									BgL_vecz00_1475 = BgL_vecz00_7450;
									goto BgL_lambda1685z00_1476;
								}
							}
						}
				}
			}
		}

	}



/* make-method-array */
	obj_t BGl_makezd2methodzd2arrayz00zz__objectz00(obj_t BgL_defzd2bucketzd2_113)
	{
		{	/* Llib/object.scm 1038 */
			{	/* Llib/object.scm 1039 */
				long BgL_sz00_1489;
				long BgL_az00_1490;

				{	/* Llib/object.scm 1039 */
					int BgL_arg1700z00_1497;

					BgL_arg1700z00_1497 =
						(int) ((((long) 1) << (int) ((long) ((int) (((long) 4))))));
					{	/* Llib/object.scm 1039 */
						long BgL_res2667z00_3388;

						{	/* Llib/object.scm 1039 */
							long BgL_auxz00_7458;
							long BgL_tmpz00_7456;

							BgL_auxz00_7458 = (long) (BgL_arg1700z00_1497);
							BgL_tmpz00_7456 =
								(long) CINT(BGl_za2nbzd2classeszd2maxza2z00zz__objectz00);
							BgL_res2667z00_3388 = (BgL_tmpz00_7456 / BgL_auxz00_7458);
						}
						BgL_sz00_1489 = BgL_res2667z00_3388;
				}}
				{	/* Llib/object.scm 1040 */
					int BgL_arg1701z00_1498;

					BgL_arg1701z00_1498 =
						(int) ((((long) 1) << (int) ((long) ((int) (((long) 4))))));
					{	/* Llib/object.scm 1040 */
						long BgL_res2676z00_3412;

						{	/* Llib/object.scm 1040 */
							long BgL_n1z00_3394;
							long BgL_n2z00_3395;

							BgL_n1z00_3394 =
								(long) CINT(BGl_za2nbzd2classeszd2maxza2z00zz__objectz00);
							BgL_n2z00_3395 = (long) (BgL_arg1701z00_1498);
							{	/* Llib/object.scm 1040 */
								bool_t BgL_test3994z00_7468;

								{	/* Llib/object.scm 1040 */
									long BgL_arg2379z00_3397;

									BgL_arg2379z00_3397 =
										(((BgL_n1z00_3394) | (BgL_n2z00_3395)) & -2147483648);
									BgL_test3994z00_7468 = (BgL_arg2379z00_3397 == ((long) 0));
								}
								if (BgL_test3994z00_7468)
									{	/* Llib/object.scm 1040 */
										int32_t BgL_arg2374z00_3398;

										{	/* Llib/object.scm 1040 */
											int32_t BgL_arg2376z00_3399;
											int32_t BgL_arg2377z00_3400;

											{	/* Llib/object.scm 1040 */
												int32_t BgL_res2672z00_3404;

												BgL_res2672z00_3404 = (int32_t) (BgL_n1z00_3394);
												BgL_arg2376z00_3399 = BgL_res2672z00_3404;
											}
											{	/* Llib/object.scm 1040 */
												int32_t BgL_res2673z00_3406;

												BgL_res2673z00_3406 = (int32_t) (BgL_n2z00_3395);
												BgL_arg2377z00_3400 = BgL_res2673z00_3406;
											}
											BgL_arg2374z00_3398 =
												(BgL_arg2376z00_3399 % BgL_arg2377z00_3400);
										}
										{	/* Llib/object.scm 1040 */
											long BgL_res2675z00_3411;

											{	/* Llib/object.scm 1040 */
												long BgL_arg2497z00_3408;

												BgL_arg2497z00_3408 = (long) (BgL_arg2374z00_3398);
												{	/* Llib/object.scm 1040 */
													long BgL_res2674z00_3410;

													BgL_res2674z00_3410 = (long) (BgL_arg2497z00_3408);
													BgL_res2675z00_3411 = BgL_res2674z00_3410;
											}}
											BgL_res2676z00_3412 = BgL_res2675z00_3411;
									}}
								else
									{	/* Llib/object.scm 1040 */
										BgL_res2676z00_3412 = (BgL_n1z00_3394 % BgL_n2z00_3395);
									}
							}
						}
						BgL_az00_1490 = BgL_res2676z00_3412;
					}
				}
				if ((BgL_az00_1490 > ((long) 0)))
					{	/* Llib/object.scm 1041 */
						{	/* Llib/object.scm 1045 */
							int BgL_arg1695z00_1492;

							BgL_arg1695z00_1492 =
								(int) ((((long) 1) << (int) ((long) ((int) (((long) 4))))));
							{	/* Llib/object.scm 1043 */
								obj_t BgL_list1696z00_1493;

								{	/* Llib/object.scm 1043 */
									obj_t BgL_arg1697z00_1494;

									{	/* Llib/object.scm 1043 */
										obj_t BgL_arg1698z00_1495;

										BgL_arg1698z00_1495 =
											MAKE_YOUNG_PAIR(BINT(BgL_arg1695z00_1492), BNIL);
										BgL_arg1697z00_1494 =
											MAKE_YOUNG_PAIR(BGl_string3312z00zz__objectz00,
											BgL_arg1698z00_1495);
									}
									BgL_list1696z00_1493 =
										MAKE_YOUNG_PAIR(BGl_string3313z00zz__objectz00,
										BgL_arg1697z00_1494);
								}
								BGl_warningz00zz__errorz00(BgL_list1696z00_1493);
						}}
						return
							make_vector_uncollectable(
							(BgL_sz00_1489 + ((long) 1)), BgL_defzd2bucketzd2_113);
					}
				else
					{	/* Llib/object.scm 1041 */
						return
							make_vector_uncollectable(BgL_sz00_1489, BgL_defzd2bucketzd2_113);
					}
			}
		}

	}



/* &generic-no-default-behavior */
	obj_t BGl_z62genericzd2nozd2defaultzd2behaviorzb0zz__objectz00(obj_t
		BgL_envz00_5304, obj_t BgL_lz00_5305)
	{
		{	/* Llib/object.scm 1052 */
			return
				BGl_errorz00zz__errorz00(BGl_string3292z00zz__objectz00,
				BGl_string3314z00zz__objectz00, BgL_lz00_5305);
		}

	}



/* procedure->generic */
	BGL_EXPORTED_DEF obj_t BGl_procedurezd2ze3genericz31zz__objectz00(obj_t
		BgL_procz00_115)
	{
		{	/* Llib/object.scm 1058 */
			return bgl_make_generic(BgL_procz00_115);
		}

	}



/* &procedure->generic */
	obj_t BGl_z62procedurezd2ze3genericz53zz__objectz00(obj_t BgL_envz00_5306,
		obj_t BgL_procz00_5307)
	{
		{	/* Llib/object.scm 1058 */
			{	/* Llib/object.scm 1059 */
				obj_t BgL_auxz00_7494;

				if (PROCEDUREP(BgL_procz00_5307))
					{	/* Llib/object.scm 1059 */
						BgL_auxz00_7494 = BgL_procz00_5307;
					}
				else
					{
						obj_t BgL_auxz00_7497;

						BgL_auxz00_7497 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 46306)), BGl_string3315z00zz__objectz00,
							BGl_string3288z00zz__objectz00, BgL_procz00_5307);
						FAILURE(BgL_auxz00_7497, BFALSE, BFALSE);
					}
				return BGl_procedurezd2ze3genericz31zz__objectz00(BgL_auxz00_7494);
			}
		}

	}



/* register-generic! */
	BGL_EXPORTED_DEF obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t
		BgL_genericz00_116, obj_t BgL_defaultz00_117, obj_t BgL_classzd2minzd2_118,
		obj_t BgL_namez00_119)
	{
		{	/* Llib/object.scm 1064 */
			{	/* Llib/object.scm 1065 */
				obj_t BgL_top3998z00_7503;

				BgL_top3998z00_7503 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(bigloo_generic_mutex);
				BGL_EXITD_PUSH_PROTECT(BgL_top3998z00_7503, bigloo_generic_mutex);
				BUNSPEC;
				{	/* Llib/object.scm 1065 */
					obj_t BgL_tmp3997z00_7502;

					BgL_tmp3997z00_7502 =
						BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
						(BgL_genericz00_116, BgL_defaultz00_117, BgL_namez00_119);
					BGL_EXITD_POP_PROTECT(BgL_top3998z00_7503);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(bigloo_generic_mutex);
					return BgL_tmp3997z00_7502;
				}
			}
		}

	}



/* &register-generic! */
	obj_t BGl_z62registerzd2genericz12za2zz__objectz00(obj_t BgL_envz00_5308,
		obj_t BgL_genericz00_5309, obj_t BgL_defaultz00_5310,
		obj_t BgL_classzd2minzd2_5311, obj_t BgL_namez00_5312)
	{
		{	/* Llib/object.scm 1064 */
			{	/* Llib/object.scm 1065 */
				obj_t BgL_auxz00_7517;
				obj_t BgL_auxz00_7510;

				if (PROCEDUREP(BgL_defaultz00_5310))
					{	/* Llib/object.scm 1065 */
						BgL_auxz00_7517 = BgL_defaultz00_5310;
					}
				else
					{
						obj_t BgL_auxz00_7520;

						BgL_auxz00_7520 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 46613)), BGl_string3316z00zz__objectz00,
							BGl_string3288z00zz__objectz00, BgL_defaultz00_5310);
						FAILURE(BgL_auxz00_7520, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_genericz00_5309))
					{	/* Llib/object.scm 1065 */
						BgL_auxz00_7510 = BgL_genericz00_5309;
					}
				else
					{
						obj_t BgL_auxz00_7513;

						BgL_auxz00_7513 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 46613)), BGl_string3316z00zz__objectz00,
							BGl_string3288z00zz__objectz00, BgL_genericz00_5309);
						FAILURE(BgL_auxz00_7513, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2genericz12zc0zz__objectz00(BgL_auxz00_7510,
					BgL_auxz00_7517, BgL_classzd2minzd2_5311, BgL_namez00_5312);
			}
		}

	}



/* register-generic-sans-lock! */
	obj_t BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00(obj_t
		BgL_genericz00_120, obj_t BgL_defaultz00_121, obj_t BgL_namez00_122)
	{
		{	/* Llib/object.scm 1078 */
			{	/* Llib/object.scm 1079 */
				bool_t BgL_test4001z00_7525;

				{	/* Llib/object.scm 1033 */
					obj_t BgL_tmpz00_7526;

					BgL_tmpz00_7526 =
						PROCEDURE_REF(((obj_t) BgL_genericz00_120), (int) (((long) 1)));
					BgL_test4001z00_7525 = VECTORP(BgL_tmpz00_7526);
				}
				if (BgL_test4001z00_7525)
					{	/* Llib/object.scm 1079 */
						if (PROCEDUREP(BgL_defaultz00_121))
							{	/* Llib/object.scm 1098 */
								obj_t BgL_oldzd2defzd2bucketz00_1501;
								obj_t BgL_newzd2defzd2bucketz00_1502;
								obj_t BgL_oldzd2defaultzd2_1503;

								BgL_oldzd2defzd2bucketz00_1501 =
									PROCEDURE_REF(BgL_genericz00_120, (int) (((long) 2)));
								{	/* Llib/object.scm 1100 */
									int BgL_arg1721z00_1527;

									BgL_arg1721z00_1527 =
										(int) ((((long) 1) << (int) ((long) ((int) (((long) 4))))));
									BgL_newzd2defzd2bucketz00_1502 =
										make_vector_uncollectable(
										(long) (BgL_arg1721z00_1527), BgL_defaultz00_121);
								}
								{	/* Llib/object.scm 1101 */
									obj_t BgL_res2688z00_3434;

									BgL_res2688z00_3434 =
										PROCEDURE_REF(
										((obj_t) BgL_genericz00_120), (int) (((long) 0)));
									BgL_oldzd2defaultzd2_1503 = BgL_res2688z00_3434;
								}
								{	/* Llib/object.scm 1102 */
									obj_t BgL_marrayz00_1504;

									BgL_marrayz00_1504 =
										PROCEDURE_REF(
										((obj_t) BgL_genericz00_120), (int) (((long) 1)));
									{	/* Llib/object.scm 1103 */

										{
											long BgL_iz00_1507;

											BgL_iz00_1507 = ((long) 0);
										BgL_zc3z04anonymousza31704ze3z87_1508:
											if (
												(BgL_iz00_1507 <
													VECTOR_LENGTH(((obj_t) BgL_marrayz00_1504))))
												{	/* Llib/object.scm 1106 */
													obj_t BgL_bucketz00_1510;

													BgL_bucketz00_1510 =
														VECTOR_REF(
														((obj_t) BgL_marrayz00_1504), BgL_iz00_1507);
													if (
														(BgL_bucketz00_1510 ==
															BgL_oldzd2defzd2bucketz00_1501))
														{	/* Llib/object.scm 1107 */
															VECTOR_SET(
																((obj_t) BgL_marrayz00_1504), BgL_iz00_1507,
																BgL_newzd2defzd2bucketz00_1502);
															{
																long BgL_iz00_7558;

																BgL_iz00_7558 = (BgL_iz00_1507 + ((long) 1));
																BgL_iz00_1507 = BgL_iz00_7558;
																goto BgL_zc3z04anonymousza31704ze3z87_1508;
															}
														}
													else
														{
															long BgL_jz00_1514;

															BgL_jz00_1514 = ((long) 0);
														BgL_zc3z04anonymousza31708ze3z87_1515:
															if (
																(BgL_jz00_1514 ==
																	(long) (
																		(int) (
																			(((long) 1) <<
																				(int) ((long) ((int) (((long) 4)))))))))
																{
																	long BgL_iz00_7568;

																	BgL_iz00_7568 = (BgL_iz00_1507 + ((long) 1));
																	BgL_iz00_1507 = BgL_iz00_7568;
																	goto BgL_zc3z04anonymousza31704ze3z87_1508;
																}
															else
																{	/* Llib/object.scm 1115 */
																	bool_t BgL_test4006z00_7570;

																	{	/* Llib/object.scm 1115 */
																		obj_t BgL_arg1719z00_1523;

																		BgL_arg1719z00_1523 =
																			VECTOR_REF(
																			((obj_t) BgL_bucketz00_1510),
																			BgL_jz00_1514);
																		BgL_test4006z00_7570 =
																			(BgL_arg1719z00_1523 ==
																			BgL_oldzd2defaultzd2_1503);
																	}
																	if (BgL_test4006z00_7570)
																		{	/* Llib/object.scm 1115 */
																			VECTOR_SET(
																				((obj_t) BgL_bucketz00_1510),
																				BgL_jz00_1514, BgL_defaultz00_121);
																			{
																				long BgL_jz00_7576;

																				BgL_jz00_7576 =
																					(BgL_jz00_1514 + ((long) 1));
																				BgL_jz00_1514 = BgL_jz00_7576;
																				goto
																					BgL_zc3z04anonymousza31708ze3z87_1515;
																			}
																		}
																	else
																		{
																			long BgL_jz00_7578;

																			BgL_jz00_7578 =
																				(BgL_jz00_1514 + ((long) 1));
																			BgL_jz00_1514 = BgL_jz00_7578;
																			goto
																				BgL_zc3z04anonymousza31708ze3z87_1515;
																		}
																}
														}
												}
											else
												{	/* Llib/object.scm 1105 */
													PROCEDURE_SET(
														((obj_t) BgL_genericz00_120),
														(int) (((long) 0)),
														((obj_t) ((obj_t) BgL_defaultz00_121)));
													PROCEDURE_SET(BgL_genericz00_120,
														(int) (((long) 2)), BgL_newzd2defzd2bucketz00_1502);
													FREE_VECTOR_UNCOLLECTABLE
														(BgL_oldzd2defzd2bucketz00_1501);
													BUNSPEC;
							}}}}}
						else
							{	/* Llib/object.scm 1094 */
								BFALSE;
							}
						return BUNSPEC;
					}
				else
					{	/* Llib/object.scm 1080 */
						obj_t BgL_defzd2metzd2_1528;

						if (PROCEDUREP(BgL_defaultz00_121))
							{	/* Llib/object.scm 1080 */
								BgL_defzd2metzd2_1528 = BgL_defaultz00_121;
							}
						else
							{	/* Llib/object.scm 1080 */
								BgL_defzd2metzd2_1528 =
									BGl_genericzd2nozd2defaultzd2behaviorzd2envz00zz__objectz00;
							}
						{	/* Llib/object.scm 1080 */
							obj_t BgL_defzd2bucketzd2_1529;

							{	/* Llib/object.scm 1084 */
								int BgL_arg1725z00_1532;

								BgL_arg1725z00_1532 =
									(int) ((((long) 1) << (int) ((long) ((int) (((long) 4))))));
								BgL_defzd2bucketzd2_1529 =
									make_vector_uncollectable(
									(long) (BgL_arg1725z00_1532), BgL_defzd2metzd2_1528);
							}
							{	/* Llib/object.scm 1083 */

								if (
									((long) CINT(BGl_za2nbzd2genericsza2zd2zz__objectz00) ==
										(long) CINT(BGl_za2nbzd2genericszd2maxza2z00zz__objectz00)))
									{	/* Llib/object.scm 1085 */
										BGl_doublezd2nbzd2genericsz12z12zz__objectz00();
									}
								else
									{	/* Llib/object.scm 1085 */
										BFALSE;
									}
								VECTOR_SET(BGl_za2genericsza2z00zz__objectz00,
									(long) CINT(BGl_za2nbzd2genericsza2zd2zz__objectz00),
									BgL_genericz00_120);
								BGl_za2nbzd2genericsza2zd2zz__objectz00 =
									ADDFX(BGl_za2nbzd2genericsza2zd2zz__objectz00,
									BINT(((long) 1)));
								PROCEDURE_SET(((obj_t) BgL_genericz00_120), (int) (((long) 0)),
									((obj_t) ((obj_t) BgL_defzd2metzd2_1528)));
								PROCEDURE_SET(BgL_genericz00_120, (int) (((long) 2)),
									BgL_defzd2bucketzd2_1529);
								{	/* Llib/object.scm 1091 */
									obj_t BgL_arg1723z00_1531;

									BgL_arg1723z00_1531 =
										BGl_makezd2methodzd2arrayz00zz__objectz00
										(BgL_defzd2bucketzd2_1529);
									PROCEDURE_SET(((obj_t) BgL_genericz00_120),
										(int) (((long) 1)), BgL_arg1723z00_1531);
								}
								return BUNSPEC;
							}
						}
					}
			}
		}

	}



/* %add-method! */
	obj_t BGl_z52addzd2methodz12z92zz__objectz00(obj_t BgL_genericz00_123,
		obj_t BgL_classz00_124, obj_t BgL_methodz00_125)
	{
		{	/* Llib/object.scm 1130 */
			{	/* Llib/object.scm 1131 */
				obj_t BgL_top4010z00_7618;

				BgL_top4010z00_7618 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(bigloo_generic_mutex);
				BGL_EXITD_PUSH_PROTECT(BgL_top4010z00_7618, bigloo_generic_mutex);
				BUNSPEC;
				{	/* Llib/object.scm 1131 */
					obj_t BgL_tmp4009z00_7617;

					{	/* Llib/object.scm 1132 */
						bool_t BgL_test4011z00_7622;

						{	/* Llib/object.scm 1033 */
							obj_t BgL_tmpz00_7623;

							BgL_tmpz00_7623 =
								PROCEDURE_REF(((obj_t) BgL_genericz00_123), (int) (((long) 1)));
							BgL_test4011z00_7622 = VECTORP(BgL_tmpz00_7623);
						}
						if (BgL_test4011z00_7622)
							{	/* Llib/object.scm 1132 */
								BFALSE;
							}
						else
							{	/* Llib/object.scm 1132 */
								BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
									(BgL_genericz00_123, BFALSE, BGl_string3317z00zz__objectz00);
							}
					}
					{	/* Llib/object.scm 1136 */
						obj_t BgL_methodzd2arrayzd2_1535;

						BgL_methodzd2arrayzd2_1535 =
							PROCEDURE_REF(((obj_t) BgL_genericz00_123), (int) (((long) 1)));
						{	/* Llib/object.scm 1136 */
							long BgL_cnumz00_1536;

							{	/* Llib/object.scm 1137 */
								long BgL_res2705z00_3491;

								{	/* Llib/object.scm 487 */
									obj_t BgL_tmpz00_7632;

									BgL_tmpz00_7632 = ((obj_t) BgL_classz00_124);
									BgL_res2705z00_3491 = BGL_CLASS_INDEX(BgL_tmpz00_7632);
								}
								BgL_cnumz00_1536 = BgL_res2705z00_3491;
							}
							{	/* Llib/object.scm 1137 */
								obj_t BgL_previousz00_1537;

								{	/* Llib/object.scm 1138 */
									int BgL_offsetz00_3494;

									BgL_offsetz00_3494 = (int) (BgL_cnumz00_1536);
									{	/* Llib/object.scm 875 */
										long BgL_offsetz00_3495;

										BgL_offsetz00_3495 =
											((long) (BgL_offsetz00_3494) - OBJECT_TYPE);
										{	/* Llib/object.scm 875 */
											long BgL_modz00_3496;

											BgL_modz00_3496 =
												(BgL_offsetz00_3495 >>
												(int) ((long) ((int) (((long) 4)))));
											{	/* Llib/object.scm 876 */
												long BgL_restz00_3498;

												BgL_restz00_3498 =
													(BgL_offsetz00_3495 &
													(long) (
														(int) (
															((long) (
																	(int) (
																		(((long) 1) <<
																			(int) (
																				(long) (
																					(int) (((long) 4))))))) -
																((long) 1)))));
												{	/* Llib/object.scm 877 */

													{	/* Llib/object.scm 878 */
														obj_t BgL_bucketz00_3500;

														BgL_bucketz00_3500 =
															VECTOR_REF(
															((obj_t) BgL_methodzd2arrayzd2_1535),
															BgL_modz00_3496);
														BgL_previousz00_1537 =
															VECTOR_REF(((obj_t) BgL_bucketz00_3500),
															BgL_restz00_3498);
								}}}}}}
								{	/* Llib/object.scm 1138 */
									obj_t BgL_defz00_1538;

									{	/* Llib/object.scm 1139 */
										obj_t BgL_res2715z00_3525;

										BgL_res2715z00_3525 =
											PROCEDURE_REF(
											((obj_t) BgL_genericz00_123), (int) (((long) 0)));
										BgL_defz00_1538 = BgL_res2715z00_3525;
									}
									{	/* Llib/object.scm 1139 */

										BGl_loopze70ze7zz__objectz00(BgL_defz00_1538,
											BgL_previousz00_1537, BgL_methodz00_125,
											BgL_genericz00_123, BgL_methodzd2arrayzd2_1535,
											BgL_classz00_124);
					}}}}}
					BgL_tmp4009z00_7617 = BgL_methodz00_125;
					BGL_EXITD_POP_PROTECT(BgL_top4010z00_7618);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(bigloo_generic_mutex);
					return BgL_tmp4009z00_7617;
				}
			}
		}

	}



/* loop~0 */
	bool_t BGl_loopze70ze7zz__objectz00(obj_t BgL_defz00_5831,
		obj_t BgL_previousz00_5830, obj_t BgL_methodz00_5829,
		obj_t BgL_genericz00_5828, obj_t BgL_methodzd2arrayzd2_5827,
		obj_t BgL_claza7za7z00_1540)
	{
		{	/* Llib/object.scm 1140 */
			{	/* Llib/object.scm 1141 */
				long BgL_cnz00_1542;

				{	/* Llib/object.scm 1141 */
					long BgL_res2716z00_3527;

					{	/* Llib/object.scm 487 */
						obj_t BgL_tmpz00_7662;

						BgL_tmpz00_7662 = ((obj_t) BgL_claza7za7z00_1540);
						BgL_res2716z00_3527 = BGL_CLASS_INDEX(BgL_tmpz00_7662);
					}
					BgL_cnz00_1542 = BgL_res2716z00_3527;
				}
				{	/* Llib/object.scm 1141 */
					obj_t BgL_currentz00_1543;

					{	/* Llib/object.scm 1142 */
						int BgL_offsetz00_3530;

						BgL_offsetz00_3530 = (int) (BgL_cnz00_1542);
						{	/* Llib/object.scm 875 */
							long BgL_offsetz00_3531;

							BgL_offsetz00_3531 = ((long) (BgL_offsetz00_3530) - OBJECT_TYPE);
							{	/* Llib/object.scm 875 */
								long BgL_modz00_3532;

								BgL_modz00_3532 =
									(BgL_offsetz00_3531 >> (int) ((long) ((int) (((long) 4)))));
								{	/* Llib/object.scm 876 */
									long BgL_restz00_3534;

									BgL_restz00_3534 =
										(BgL_offsetz00_3531 &
										(long) (
											(int) (
												((long) (
														(int) (
															(((long) 1) <<
																(int) (
																	(long) (
																		(int) (((long) 4))))))) - ((long) 1)))));
									{	/* Llib/object.scm 877 */

										{	/* Llib/object.scm 878 */
											obj_t BgL_bucketz00_3536;

											BgL_bucketz00_3536 =
												VECTOR_REF(
												((obj_t) BgL_methodzd2arrayzd2_5827), BgL_modz00_3532);
											BgL_currentz00_1543 =
												VECTOR_REF(
												((obj_t) BgL_bucketz00_3536), BgL_restz00_3534);
					}}}}}}
					{	/* Llib/object.scm 1142 */

						{	/* Llib/object.scm 1143 */
							bool_t BgL_test4012z00_7686;

							if ((BgL_currentz00_1543 == BgL_defz00_5831))
								{	/* Llib/object.scm 1143 */
									BgL_test4012z00_7686 = ((bool_t) 1);
								}
							else
								{	/* Llib/object.scm 1143 */
									BgL_test4012z00_7686 =
										(BgL_currentz00_1543 == BgL_previousz00_5830);
								}
							if (BgL_test4012z00_7686)
								{	/* Llib/object.scm 1143 */
									BGl_methodzd2arrayzd2setz12z12zz__objectz00
										(BgL_genericz00_5828, BgL_methodzd2arrayzd2_5827,
										BgL_cnz00_1542, BgL_methodz00_5829);
									{	/* Llib/object.scm 1148 */
										obj_t BgL_g1324z00_1546;

										{	/* Llib/object.scm 1148 */
											obj_t BgL_res2726z00_3561;

											{	/* Llib/object.scm 656 */
												obj_t BgL_tmpz00_7691;

												BgL_tmpz00_7691 = ((obj_t) BgL_claza7za7z00_1540);
												BgL_res2726z00_3561 =
													BGL_CLASS_SUBCLASSES(BgL_tmpz00_7691);
											}
											BgL_g1324z00_1546 = BgL_res2726z00_3561;
										}
										{
											obj_t BgL_l1322z00_3575;

											BgL_l1322z00_3575 = BgL_g1324z00_1546;
										BgL_zc3z04anonymousza31731ze3z87_3574:
											if (PAIRP(BgL_l1322z00_3575))
												{	/* Llib/object.scm 1148 */
													BGl_loopze70ze7zz__objectz00(BgL_defz00_5831,
														BgL_previousz00_5830, BgL_methodz00_5829,
														BgL_genericz00_5828, BgL_methodzd2arrayzd2_5827,
														CAR(BgL_l1322z00_3575));
													{
														obj_t BgL_l1322z00_7698;

														BgL_l1322z00_7698 = CDR(BgL_l1322z00_3575);
														BgL_l1322z00_3575 = BgL_l1322z00_7698;
														goto BgL_zc3z04anonymousza31731ze3z87_3574;
													}
												}
											else
												{	/* Llib/object.scm 1148 */
													return ((bool_t) 1);
												}
										}
									}
								}
							else
								{	/* Llib/object.scm 1143 */
									return ((bool_t) 0);
								}
						}
					}
				}
			}
		}

	}



/* generic-add-method! */
	BGL_EXPORTED_DEF obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t
		BgL_genericz00_126, obj_t BgL_classz00_127, obj_t BgL_methodz00_128,
		obj_t BgL_namez00_129)
	{
		{	/* Llib/object.scm 1154 */
			{	/* Llib/object.scm 1156 */
				bool_t BgL_test4015z00_7700;

				{	/* Llib/object.scm 1156 */
					bool_t BgL_res2730z00_3585;

					BgL_res2730z00_3585 = BGL_CLASSP(BgL_classz00_127);
					BgL_test4015z00_7700 = BgL_res2730z00_3585;
				}
				if (BgL_test4015z00_7700)
					{	/* Llib/object.scm 1158 */
						bool_t BgL_test4016z00_7702;

						{	/* Llib/object.scm 1158 */
							bool_t BgL_test4017z00_7703;

							{	/* Llib/object.scm 1158 */
								int BgL_arg1748z00_1570;
								int BgL_arg1750z00_1571;

								BgL_arg1748z00_1570 = PROCEDURE_ARITY(BgL_genericz00_126);
								BgL_arg1750z00_1571 = PROCEDURE_ARITY(BgL_methodz00_128);
								BgL_test4017z00_7703 =
									(
									(long) (BgL_arg1748z00_1570) == (long) (BgL_arg1750z00_1571));
							}
							if (BgL_test4017z00_7703)
								{	/* Llib/object.scm 1158 */
									BgL_test4016z00_7702 = ((bool_t) 0);
								}
							else
								{	/* Llib/object.scm 1159 */
									int BgL_arg1747z00_1569;

									BgL_arg1747z00_1569 = PROCEDURE_ARITY(BgL_genericz00_126);
									BgL_test4016z00_7702 =
										((long) (BgL_arg1747z00_1569) >= ((long) 0));
						}}
						if (BgL_test4016z00_7702)
							{	/* Llib/object.scm 1161 */
								obj_t BgL_arg1743z00_1564;
								int BgL_arg1744z00_1565;

								{	/* Llib/object.scm 1161 */
									int BgL_arg1745z00_1566;

									BgL_arg1745z00_1566 = PROCEDURE_ARITY(BgL_genericz00_126);
									{	/* Llib/object.scm 1160 */
										obj_t BgL_list1746z00_1567;

										BgL_list1746z00_1567 =
											MAKE_YOUNG_PAIR(BINT(BgL_arg1745z00_1566), BNIL);
										BgL_arg1743z00_1564 =
											BGl_formatz00zz__r4_output_6_10_3z00
											(BGl_string3318z00zz__objectz00, BgL_list1746z00_1567);
								}}
								BgL_arg1744z00_1565 = PROCEDURE_ARITY(BgL_methodz00_128);
								return
									BGl_errorz00zz__errorz00(BgL_namez00_129, BgL_arg1743z00_1564,
									BINT(BgL_arg1744z00_1565));
							}
						else
							{	/* Llib/object.scm 1158 */
								return
									BGl_z52addzd2methodz12z92zz__objectz00(BgL_genericz00_126,
									BgL_classz00_127, BgL_methodz00_128);
							}
					}
				else
					{	/* Llib/object.scm 1156 */
						return
							BGl_errorz00zz__errorz00(BgL_namez00_129,
							BGl_string3319z00zz__objectz00, BgL_classz00_127);
					}
			}
		}

	}



/* &generic-add-method! */
	obj_t BGl_z62genericzd2addzd2methodz12z70zz__objectz00(obj_t BgL_envz00_5313,
		obj_t BgL_genericz00_5314, obj_t BgL_classz00_5315,
		obj_t BgL_methodz00_5316, obj_t BgL_namez00_5317)
	{
		{	/* Llib/object.scm 1154 */
			{	/* Llib/object.scm 1156 */
				obj_t BgL_auxz00_7728;
				obj_t BgL_auxz00_7721;

				if (PROCEDUREP(BgL_methodz00_5316))
					{	/* Llib/object.scm 1156 */
						BgL_auxz00_7728 = BgL_methodz00_5316;
					}
				else
					{
						obj_t BgL_auxz00_7731;

						BgL_auxz00_7731 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 50639)), BGl_string3320z00zz__objectz00,
							BGl_string3288z00zz__objectz00, BgL_methodz00_5316);
						FAILURE(BgL_auxz00_7731, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_genericz00_5314))
					{	/* Llib/object.scm 1156 */
						BgL_auxz00_7721 = BgL_genericz00_5314;
					}
				else
					{
						obj_t BgL_auxz00_7724;

						BgL_auxz00_7724 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 50639)), BGl_string3320z00zz__objectz00,
							BGl_string3288z00zz__objectz00, BgL_genericz00_5314);
						FAILURE(BgL_auxz00_7724, BFALSE, BFALSE);
					}
				return
					BGl_genericzd2addzd2methodz12z12zz__objectz00(BgL_auxz00_7721,
					BgL_classz00_5315, BgL_auxz00_7728, BgL_namez00_5317);
			}
		}

	}



/* generic-add-eval-method! */
	BGL_EXPORTED_DEF obj_t
		BGl_genericzd2addzd2evalzd2methodz12zc0zz__objectz00(obj_t
		BgL_genericz00_130, obj_t BgL_classz00_131, obj_t BgL_methodz00_132,
		obj_t BgL_namez00_133)
	{
		{	/* Llib/object.scm 1174 */
			{	/* Llib/object.scm 1176 */
				bool_t BgL_test4020z00_7736;

				{	/* Llib/object.scm 1176 */
					bool_t BgL_res2738z00_3601;

					BgL_res2738z00_3601 = BGL_CLASSP(BgL_classz00_131);
					BgL_test4020z00_7736 = BgL_res2738z00_3601;
				}
				if (BgL_test4020z00_7736)
					{	/* Llib/object.scm 1178 */
						bool_t BgL_test4021z00_7738;

						{	/* Llib/object.scm 1178 */
							bool_t BgL_test4022z00_7739;

							{	/* Llib/object.scm 1178 */
								int BgL_arg1770z00_1591;
								int BgL_arg1771z00_1592;

								BgL_arg1770z00_1591 = PROCEDURE_ARITY(BgL_genericz00_130);
								BgL_arg1771z00_1592 = PROCEDURE_ARITY(BgL_methodz00_132);
								BgL_test4022z00_7739 =
									(
									(long) (BgL_arg1770z00_1591) == (long) (BgL_arg1771z00_1592));
							}
							if (BgL_test4022z00_7739)
								{	/* Llib/object.scm 1178 */
									BgL_test4021z00_7738 = ((bool_t) 0);
								}
							else
								{	/* Llib/object.scm 1179 */
									bool_t BgL_test4023z00_7745;

									{	/* Llib/object.scm 1179 */
										int BgL_arg1769z00_1590;

										BgL_arg1769z00_1590 = PROCEDURE_ARITY(BgL_genericz00_130);
										BgL_test4023z00_7745 =
											((long) (BgL_arg1769z00_1590) > ((long) 4));
									}
									if (BgL_test4023z00_7745)
										{	/* Llib/object.scm 1180 */
											int BgL_arg1768z00_1589;

											BgL_arg1768z00_1589 = PROCEDURE_ARITY(BgL_methodz00_132);
											BgL_test4021z00_7738 =
												((long) (BgL_arg1768z00_1589) >= ((long) 0));
										}
									else
										{	/* Llib/object.scm 1179 */
											BgL_test4021z00_7738 = ((bool_t) 0);
										}
								}
						}
						if (BgL_test4021z00_7738)
							{	/* Llib/object.scm 1182 */
								obj_t BgL_arg1764z00_1583;
								int BgL_arg1765z00_1584;

								{	/* Llib/object.scm 1182 */
									int BgL_arg1766z00_1585;

									BgL_arg1766z00_1585 = PROCEDURE_ARITY(BgL_genericz00_130);
									{	/* Llib/object.scm 1181 */
										obj_t BgL_list1767z00_1586;

										BgL_list1767z00_1586 =
											MAKE_YOUNG_PAIR(BINT(BgL_arg1766z00_1585), BNIL);
										BgL_arg1764z00_1583 =
											BGl_formatz00zz__r4_output_6_10_3z00
											(BGl_string3318z00zz__objectz00, BgL_list1767z00_1586);
								}}
								BgL_arg1765z00_1584 = PROCEDURE_ARITY(BgL_methodz00_132);
								return
									BGl_errorz00zz__errorz00(BgL_namez00_133, BgL_arg1764z00_1583,
									BINT(BgL_arg1765z00_1584));
							}
						else
							{	/* Llib/object.scm 1178 */
								return
									BGl_z52addzd2methodz12z92zz__objectz00(BgL_genericz00_130,
									BgL_classz00_131, BgL_methodz00_132);
							}
					}
				else
					{	/* Llib/object.scm 1176 */
						return
							BGl_errorz00zz__errorz00(BgL_namez00_133,
							BGl_string3319z00zz__objectz00, BgL_classz00_131);
					}
			}
		}

	}



/* &generic-add-eval-method! */
	obj_t BGl_z62genericzd2addzd2evalzd2methodz12za2zz__objectz00(obj_t
		BgL_envz00_5318, obj_t BgL_genericz00_5319, obj_t BgL_classz00_5320,
		obj_t BgL_methodz00_5321, obj_t BgL_namez00_5322)
	{
		{	/* Llib/object.scm 1174 */
			{	/* Llib/object.scm 1176 */
				obj_t BgL_auxz00_7768;
				obj_t BgL_auxz00_7761;

				if (PROCEDUREP(BgL_methodz00_5321))
					{	/* Llib/object.scm 1176 */
						BgL_auxz00_7768 = BgL_methodz00_5321;
					}
				else
					{
						obj_t BgL_auxz00_7771;

						BgL_auxz00_7771 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 51696)), BGl_string3321z00zz__objectz00,
							BGl_string3288z00zz__objectz00, BgL_methodz00_5321);
						FAILURE(BgL_auxz00_7771, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_genericz00_5319))
					{	/* Llib/object.scm 1176 */
						BgL_auxz00_7761 = BgL_genericz00_5319;
					}
				else
					{
						obj_t BgL_auxz00_7764;

						BgL_auxz00_7764 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 51696)), BGl_string3321z00zz__objectz00,
							BGl_string3288z00zz__objectz00, BgL_genericz00_5319);
						FAILURE(BgL_auxz00_7764, BFALSE, BFALSE);
					}
				return
					BGl_genericzd2addzd2evalzd2methodz12zc0zz__objectz00(BgL_auxz00_7761,
					BgL_classz00_5320, BgL_auxz00_7768, BgL_namez00_5322);
			}
		}

	}



/* find-method */
	BGL_EXPORTED_DEF obj_t BGl_findzd2methodzd2zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_134, obj_t BgL_genericz00_135)
	{
		{	/* Llib/object.scm 1192 */
			{	/* Llib/object.scm 1193 */
				long BgL_objzd2classzd2numz00_6078;

				{	/* Llib/object.scm 1193 */
					long BgL_res2748z00_6079;

					BgL_res2748z00_6079 = BGL_OBJECT_CLASS_NUM(BgL_objz00_134);
					BgL_objzd2classzd2numz00_6078 = BgL_res2748z00_6079;
				}
				{	/* Llib/object.scm 1194 */
					obj_t BgL_arg1772z00_6080;

					BgL_arg1772z00_6080 =
						PROCEDURE_REF(BgL_genericz00_135, (int) (((long) 1)));
					{	/* Llib/object.scm 1194 */
						int BgL_offsetz00_6081;

						BgL_offsetz00_6081 = (int) (BgL_objzd2classzd2numz00_6078);
						{	/* Llib/object.scm 875 */
							long BgL_offsetz00_6082;

							BgL_offsetz00_6082 = ((long) (BgL_offsetz00_6081) - OBJECT_TYPE);
							{	/* Llib/object.scm 875 */
								long BgL_modz00_6083;

								BgL_modz00_6083 =
									(BgL_offsetz00_6082 >> (int) ((long) ((int) (((long) 4)))));
								{	/* Llib/object.scm 876 */
									long BgL_restz00_6084;

									BgL_restz00_6084 =
										(BgL_offsetz00_6082 &
										(long) (
											(int) (
												((long) (
														(int) (
															(((long) 1) <<
																(int) (
																	(long) (
																		(int) (((long) 4))))))) - ((long) 1)))));
									{	/* Llib/object.scm 877 */

										{	/* Llib/object.scm 878 */
											obj_t BgL_bucketz00_6085;

											BgL_bucketz00_6085 =
												VECTOR_REF(
												((obj_t) BgL_arg1772z00_6080), BgL_modz00_6083);
											return
												VECTOR_REF(
												((obj_t) BgL_bucketz00_6085), BgL_restz00_6084);
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



/* &find-method */
	obj_t BGl_z62findzd2methodzb0zz__objectz00(obj_t BgL_envz00_5323,
		obj_t BgL_objz00_5324, obj_t BgL_genericz00_5325)
	{
		{	/* Llib/object.scm 1192 */
			{	/* Llib/object.scm 1193 */
				obj_t BgL_auxz00_7808;
				BgL_objectz00_bglt BgL_auxz00_7800;

				if (PROCEDUREP(BgL_genericz00_5325))
					{	/* Llib/object.scm 1193 */
						BgL_auxz00_7808 = BgL_genericz00_5325;
					}
				else
					{
						obj_t BgL_auxz00_7811;

						BgL_auxz00_7811 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 52537)), BGl_string3322z00zz__objectz00,
							BGl_string3288z00zz__objectz00, BgL_genericz00_5325);
						FAILURE(BgL_auxz00_7811, BFALSE, BFALSE);
					}
				if (BGl_isazf3zf3zz__objectz00(BgL_objz00_5324,
						BGl_objectz00zz__objectz00))
					{	/* Llib/object.scm 1193 */
						BgL_auxz00_7800 = ((BgL_objectz00_bglt) BgL_objz00_5324);
					}
				else
					{
						obj_t BgL_auxz00_7804;

						BgL_auxz00_7804 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 52537)), BGl_string3322z00zz__objectz00,
							BGl_string3284z00zz__objectz00, BgL_objz00_5324);
						FAILURE(BgL_auxz00_7804, BFALSE, BFALSE);
					}
				return
					BGl_findzd2methodzd2zz__objectz00(BgL_auxz00_7800, BgL_auxz00_7808);
			}
		}

	}



/* find-super-class-method */
	BGL_EXPORTED_DEF obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_136, obj_t BgL_genericz00_137, obj_t BgL_classz00_138)
	{
		{	/* Llib/object.scm 1201 */
			{	/* Llib/object.scm 1202 */
				obj_t BgL_g1221z00_3658;

				{	/* Llib/object.scm 626 */
					obj_t BgL_tmpz00_7816;

					BgL_tmpz00_7816 = ((obj_t) BgL_classz00_138);
					BgL_g1221z00_3658 = BGL_CLASS_SUPER(BgL_tmpz00_7816);
				}
				{
					obj_t BgL_superz00_3660;

					BgL_superz00_3660 = BgL_g1221z00_3658;
				BgL_loopz00_3659:
					{	/* Llib/object.scm 1203 */
						bool_t BgL_test4028z00_7819;

						{	/* Llib/object.scm 1203 */
							bool_t BgL_res2758z00_3667;

							BgL_res2758z00_3667 = BGL_CLASSP(BgL_superz00_3660);
							BgL_test4028z00_7819 = BgL_res2758z00_3667;
						}
						if (BgL_test4028z00_7819)
							{	/* Llib/object.scm 1205 */
								long BgL_objzd2superzd2classzd2numzd2_3662;

								{	/* Llib/object.scm 1205 */
									long BgL_res2759z00_3669;

									{	/* Llib/object.scm 487 */
										obj_t BgL_tmpz00_7821;

										BgL_tmpz00_7821 = ((obj_t) BgL_superz00_3660);
										BgL_res2759z00_3669 = BGL_CLASS_INDEX(BgL_tmpz00_7821);
									}
									BgL_objzd2superzd2classzd2numzd2_3662 = BgL_res2759z00_3669;
								}
								{	/* Llib/object.scm 1206 */
									obj_t BgL_methodz00_3663;

									{	/* Llib/object.scm 1207 */
										obj_t BgL_arg1775z00_3664;

										BgL_arg1775z00_3664 =
											PROCEDURE_REF(BgL_genericz00_137, (int) (((long) 1)));
										{	/* Llib/object.scm 1206 */
											int BgL_offsetz00_3673;

											BgL_offsetz00_3673 =
												(int) (BgL_objzd2superzd2classzd2numzd2_3662);
											{	/* Llib/object.scm 875 */
												long BgL_offsetz00_3674;

												BgL_offsetz00_3674 =
													((long) (BgL_offsetz00_3673) - OBJECT_TYPE);
												{	/* Llib/object.scm 875 */
													long BgL_modz00_3675;

													BgL_modz00_3675 =
														(BgL_offsetz00_3674 >>
														(int) ((long) ((int) (((long) 4)))));
													{	/* Llib/object.scm 876 */
														long BgL_restz00_3677;

														BgL_restz00_3677 =
															(BgL_offsetz00_3674 &
															(long) (
																(int) (
																	((long) (
																			(int) (
																				(((long) 1) <<
																					(int) (
																						(long) (
																							(int) (((long) 4))))))) -
																		((long) 1)))));
														{	/* Llib/object.scm 877 */

															{	/* Llib/object.scm 878 */
																obj_t BgL_bucketz00_3679;

																BgL_bucketz00_3679 =
																	VECTOR_REF(
																	((obj_t) BgL_arg1775z00_3664),
																	BgL_modz00_3675);
																BgL_methodz00_3663 =
																	VECTOR_REF(((obj_t) BgL_bucketz00_3679),
																	BgL_restz00_3677);
									}}}}}}}
									if (CBOOL(BgL_methodz00_3663))
										{	/* Llib/object.scm 1209 */
											return BgL_methodz00_3663;
										}
									else
										{	/* Llib/object.scm 1211 */
											obj_t BgL_newzd2superzd2_3665;

											{	/* Llib/object.scm 626 */
												obj_t BgL_tmpz00_7849;

												BgL_tmpz00_7849 = ((obj_t) BgL_superz00_3660);
												BgL_newzd2superzd2_3665 =
													BGL_CLASS_SUPER(BgL_tmpz00_7849);
											}
											{
												obj_t BgL_superz00_7852;

												BgL_superz00_7852 = BgL_newzd2superzd2_3665;
												BgL_superz00_3660 = BgL_superz00_7852;
												goto BgL_loopz00_3659;
											}
										}
								}
							}
						else
							{	/* Llib/object.scm 1203 */
								return PROCEDURE_REF(BgL_genericz00_137, (int) (((long) 0)));
		}}}}}

	}



/* &find-super-class-method */
	obj_t BGl_z62findzd2superzd2classzd2methodzb0zz__objectz00(obj_t
		BgL_envz00_5326, obj_t BgL_objz00_5327, obj_t BgL_genericz00_5328,
		obj_t BgL_classz00_5329)
	{
		{	/* Llib/object.scm 1201 */
			{	/* Llib/object.scm 1202 */
				obj_t BgL_auxz00_7863;
				BgL_objectz00_bglt BgL_auxz00_7855;

				if (PROCEDUREP(BgL_genericz00_5328))
					{	/* Llib/object.scm 1202 */
						BgL_auxz00_7863 = BgL_genericz00_5328;
					}
				else
					{
						obj_t BgL_auxz00_7866;

						BgL_auxz00_7866 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 53089)), BGl_string3323z00zz__objectz00,
							BGl_string3288z00zz__objectz00, BgL_genericz00_5328);
						FAILURE(BgL_auxz00_7866, BFALSE, BFALSE);
					}
				if (BGl_isazf3zf3zz__objectz00(BgL_objz00_5327,
						BGl_objectz00zz__objectz00))
					{	/* Llib/object.scm 1202 */
						BgL_auxz00_7855 = ((BgL_objectz00_bglt) BgL_objz00_5327);
					}
				else
					{
						obj_t BgL_auxz00_7859;

						BgL_auxz00_7859 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 53089)), BGl_string3323z00zz__objectz00,
							BGl_string3284z00zz__objectz00, BgL_objz00_5327);
						FAILURE(BgL_auxz00_7859, BFALSE, BFALSE);
					}
				return
					BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_auxz00_7855,
					BgL_auxz00_7863, BgL_classz00_5329);
			}
		}

	}



/* find-method-from */
	BGL_EXPORTED_DEF obj_t
		BGl_findzd2methodzd2fromz00zz__objectz00(BgL_objectz00_bglt BgL_objz00_139,
		obj_t BgL_genericz00_140, obj_t BgL_classz00_141)
	{
		{	/* Llib/object.scm 1217 */
			{
				obj_t BgL_classz00_3707;

				BgL_classz00_3707 = BgL_classz00_141;
			BgL_loopz00_3706:
				{	/* Llib/object.scm 1219 */
					bool_t BgL_test4032z00_7871;

					{	/* Llib/object.scm 1219 */
						bool_t BgL_res2770z00_3713;

						BgL_res2770z00_3713 = BGL_CLASSP(BgL_classz00_3707);
						BgL_test4032z00_7871 = BgL_res2770z00_3713;
					}
					if (BgL_test4032z00_7871)
						{	/* Llib/object.scm 1221 */
							long BgL_objzd2superzd2classzd2numzd2_3709;

							{	/* Llib/object.scm 1221 */
								long BgL_res2771z00_3715;

								{	/* Llib/object.scm 487 */
									obj_t BgL_tmpz00_7873;

									BgL_tmpz00_7873 = ((obj_t) BgL_classz00_3707);
									BgL_res2771z00_3715 = BGL_CLASS_INDEX(BgL_tmpz00_7873);
								}
								BgL_objzd2superzd2classzd2numzd2_3709 = BgL_res2771z00_3715;
							}
							{	/* Llib/object.scm 1222 */
								obj_t BgL_methodz00_3710;

								{	/* Llib/object.scm 1223 */
									obj_t BgL_arg1779z00_3711;

									BgL_arg1779z00_3711 =
										PROCEDURE_REF(BgL_genericz00_140, (int) (((long) 1)));
									{	/* Llib/object.scm 1222 */
										int BgL_offsetz00_3719;

										BgL_offsetz00_3719 =
											(int) (BgL_objzd2superzd2classzd2numzd2_3709);
										{	/* Llib/object.scm 875 */
											long BgL_offsetz00_3720;

											BgL_offsetz00_3720 =
												((long) (BgL_offsetz00_3719) - OBJECT_TYPE);
											{	/* Llib/object.scm 875 */
												long BgL_modz00_3721;

												BgL_modz00_3721 =
													(BgL_offsetz00_3720 >>
													(int) ((long) ((int) (((long) 4)))));
												{	/* Llib/object.scm 876 */
													long BgL_restz00_3723;

													BgL_restz00_3723 =
														(BgL_offsetz00_3720 &
														(long) (
															(int) (
																((long) (
																		(int) (
																			(((long) 1) <<
																				(int) (
																					(long) (
																						(int) (((long) 4))))))) -
																	((long) 1)))));
													{	/* Llib/object.scm 877 */

														{	/* Llib/object.scm 878 */
															obj_t BgL_bucketz00_3725;

															BgL_bucketz00_3725 =
																VECTOR_REF(
																((obj_t) BgL_arg1779z00_3711), BgL_modz00_3721);
															BgL_methodz00_3710 =
																VECTOR_REF(
																((obj_t) BgL_bucketz00_3725), BgL_restz00_3723);
								}}}}}}}
								if (CBOOL(BgL_methodz00_3710))
									{	/* Llib/object.scm 1225 */
										return
											MAKE_YOUNG_PAIR(BgL_classz00_3707, BgL_methodz00_3710);
									}
								else
									{	/* Llib/object.scm 1227 */
										obj_t BgL_arg1778z00_3712;

										{	/* Llib/object.scm 626 */
											obj_t BgL_tmpz00_7902;

											BgL_tmpz00_7902 = ((obj_t) BgL_classz00_3707);
											BgL_arg1778z00_3712 = BGL_CLASS_SUPER(BgL_tmpz00_7902);
										}
										{
											obj_t BgL_classz00_7905;

											BgL_classz00_7905 = BgL_arg1778z00_3712;
											BgL_classz00_3707 = BgL_classz00_7905;
											goto BgL_loopz00_3706;
										}
									}
							}
						}
					else
						{	/* Llib/object.scm 1219 */
							return MAKE_YOUNG_PAIR(BFALSE, BFALSE);
						}
				}
			}
		}

	}



/* &find-method-from */
	obj_t BGl_z62findzd2methodzd2fromz62zz__objectz00(obj_t BgL_envz00_5330,
		obj_t BgL_objz00_5331, obj_t BgL_genericz00_5332, obj_t BgL_classz00_5333)
	{
		{	/* Llib/object.scm 1217 */
			{	/* Llib/object.scm 1219 */
				obj_t BgL_auxz00_7915;
				BgL_objectz00_bglt BgL_auxz00_7907;

				if (PROCEDUREP(BgL_genericz00_5332))
					{	/* Llib/object.scm 1219 */
						BgL_auxz00_7915 = BgL_genericz00_5332;
					}
				else
					{
						obj_t BgL_auxz00_7918;

						BgL_auxz00_7918 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 53764)), BGl_string3324z00zz__objectz00,
							BGl_string3288z00zz__objectz00, BgL_genericz00_5332);
						FAILURE(BgL_auxz00_7918, BFALSE, BFALSE);
					}
				if (BGl_isazf3zf3zz__objectz00(BgL_objz00_5331,
						BGl_objectz00zz__objectz00))
					{	/* Llib/object.scm 1219 */
						BgL_auxz00_7907 = ((BgL_objectz00_bglt) BgL_objz00_5331);
					}
				else
					{
						obj_t BgL_auxz00_7911;

						BgL_auxz00_7911 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 53764)), BGl_string3324z00zz__objectz00,
							BGl_string3284z00zz__objectz00, BgL_objz00_5331);
						FAILURE(BgL_auxz00_7911, BFALSE, BFALSE);
					}
				return
					BGl_findzd2methodzd2fromz00zz__objectz00(BgL_auxz00_7907,
					BgL_auxz00_7915, BgL_classz00_5333);
			}
		}

	}



/* nil? */
	BGL_EXPORTED_DEF bool_t BGl_nilzf3zf3zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_142)
	{
		{	/* Llib/object.scm 1232 */
			{	/* Llib/object.scm 1233 */
				obj_t BgL_klassz00_3750;

				{	/* Llib/object.scm 838 */
					long BgL_arg1547z00_3753;

					{	/* Llib/object.scm 838 */
						long BgL_arg1551z00_3754;

						{	/* Llib/object.scm 838 */
							long BgL_res2781z00_3756;

							BgL_res2781z00_3756 = BGL_OBJECT_CLASS_NUM(BgL_objz00_142);
							BgL_arg1551z00_3754 = BgL_res2781z00_3756;
						}
						BgL_arg1547z00_3753 = (BgL_arg1551z00_3754 - OBJECT_TYPE);
					}
					BgL_klassz00_3750 =
						VECTOR_REF(BGl_za2classesza2z00zz__objectz00, BgL_arg1547z00_3753);
				}
				{	/* Llib/object.scm 1234 */
					obj_t BgL_arg1780z00_3751;

					{	/* Llib/object.scm 714 */
						obj_t BgL__ortest_1220z00_3763;

						{	/* Llib/object.scm 714 */
							obj_t BgL_tmpz00_7926;

							BgL_tmpz00_7926 = ((obj_t) BgL_klassz00_3750);
							BgL__ortest_1220z00_3763 = BGL_CLASS_NIL(BgL_tmpz00_7926);
						}
						if (CBOOL(BgL__ortest_1220z00_3763))
							{	/* Llib/object.scm 714 */
								BgL_arg1780z00_3751 = BgL__ortest_1220z00_3763;
							}
						else
							{	/* Llib/object.scm 714 */
								BgL_arg1780z00_3751 =
									BGl_classzd2nilzd2initz12z12zz__objectz00(
									((obj_t) BgL_klassz00_3750));
							}
					}
					return (BgL_arg1780z00_3751 == ((obj_t) BgL_objz00_142));
				}
			}
		}

	}



/* &nil? */
	obj_t BGl_z62nilzf3z91zz__objectz00(obj_t BgL_envz00_5334,
		obj_t BgL_objz00_5335)
	{
		{	/* Llib/object.scm 1232 */
			{	/* Llib/object.scm 1233 */
				bool_t BgL_tmpz00_7935;

				{	/* Llib/object.scm 1233 */
					BgL_objectz00_bglt BgL_auxz00_7936;

					if (BGl_isazf3zf3zz__objectz00(BgL_objz00_5335,
							BGl_objectz00zz__objectz00))
						{	/* Llib/object.scm 1233 */
							BgL_auxz00_7936 = ((BgL_objectz00_bglt) BgL_objz00_5335);
						}
					else
						{
							obj_t BgL_auxz00_7940;

							BgL_auxz00_7940 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 54307)), BGl_string3325z00zz__objectz00,
								BGl_string3284z00zz__objectz00, BgL_objz00_5335);
							FAILURE(BgL_auxz00_7940, BFALSE, BFALSE);
						}
					BgL_tmpz00_7935 = BGl_nilzf3zf3zz__objectz00(BgL_auxz00_7936);
				}
				return BBOOL(BgL_tmpz00_7935);
			}
		}

	}



/* isa? */
	BGL_EXPORTED_DEF bool_t BGl_isazf3zf3zz__objectz00(obj_t BgL_objz00_143,
		obj_t BgL_classz00_144)
	{
		{	/* Llib/object.scm 1241 */
			if (BGL_OBJECTP(BgL_objz00_143))
				{	/* Llib/object.scm 1243 */
					obj_t BgL_oclassz00_1617;

					{	/* Llib/object.scm 838 */
						long BgL_arg1547z00_3766;

						{	/* Llib/object.scm 838 */
							long BgL_arg1551z00_3767;

							{	/* Llib/object.scm 838 */
								long BgL_res2784z00_3769;

								BgL_res2784z00_3769 =
									BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_objz00_143));
								BgL_arg1551z00_3767 = BgL_res2784z00_3769;
							}
							BgL_arg1547z00_3766 = (BgL_arg1551z00_3767 - OBJECT_TYPE);
						}
						BgL_oclassz00_1617 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
							BgL_arg1547z00_3766);
					}
					if ((BgL_oclassz00_1617 == BgL_classz00_144))
						{	/* Llib/object.scm 1244 */
							return ((bool_t) 1);
						}
					else
						{	/* Llib/object.scm 1246 */
							long BgL_odepthz00_1619;
							long BgL_cdepthz00_1620;

							BgL_odepthz00_1619 = BGL_CLASS_DEPTH(BgL_oclassz00_1617);
							BgL_cdepthz00_1620 = BGL_CLASS_DEPTH(BgL_classz00_144);
							if ((BgL_cdepthz00_1620 < BgL_odepthz00_1619))
								{	/* Llib/object.scm 1249 */
									obj_t BgL_arg1784z00_1622;

									BgL_arg1784z00_1622 =
										BGL_CLASS_ANCESTORS_REF(BgL_oclassz00_1617,
										BgL_cdepthz00_1620);
									return (BgL_arg1784z00_1622 == BgL_classz00_144);
								}
							else
								{	/* Llib/object.scm 1248 */
									return ((bool_t) 0);
								}
						}
				}
			else
				{	/* Llib/object.scm 1242 */
					return ((bool_t) 0);
				}
		}

	}



/* &isa? */
	obj_t BGl_z62isazf3z91zz__objectz00(obj_t BgL_envz00_5336,
		obj_t BgL_objz00_5337, obj_t BgL_classz00_5338)
	{
		{	/* Llib/object.scm 1241 */
			{	/* Llib/object.scm 1242 */
				bool_t BgL_tmpz00_7960;

				{	/* Llib/object.scm 1242 */
					obj_t BgL_auxz00_7961;

					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5338))
						{	/* Llib/object.scm 1242 */
							BgL_auxz00_7961 = BgL_classz00_5338;
						}
					else
						{
							obj_t BgL_auxz00_7964;

							BgL_auxz00_7964 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 54776)), BGl_string3326z00zz__objectz00,
								BGl_string3244z00zz__objectz00, BgL_classz00_5338);
							FAILURE(BgL_auxz00_7964, BFALSE, BFALSE);
						}
					BgL_tmpz00_7960 =
						BGl_isazf3zf3zz__objectz00(BgL_objz00_5337, BgL_auxz00_7961);
				}
				return BBOOL(BgL_tmpz00_7960);
			}
		}

	}



/* %isa/cdepth? */
	BGL_EXPORTED_DEF bool_t BGl_z52isazf2cdepthzf3z53zz__objectz00(obj_t
		BgL_objz00_145, obj_t BgL_classz00_146, long BgL_cdepthz00_147)
	{
		{	/* Llib/object.scm 1256 */
			if (BGL_OBJECTP(BgL_objz00_145))
				{	/* Llib/object.scm 1258 */
					obj_t BgL_oclassz00_6086;

					{	/* Llib/object.scm 838 */
						long BgL_arg1547z00_6087;

						{	/* Llib/object.scm 838 */
							long BgL_arg1551z00_6088;

							{	/* Llib/object.scm 838 */
								long BgL_res2788z00_6089;

								BgL_res2788z00_6089 =
									BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_objz00_145));
								BgL_arg1551z00_6088 = BgL_res2788z00_6089;
							}
							BgL_arg1547z00_6087 = (BgL_arg1551z00_6088 - OBJECT_TYPE);
						}
						BgL_oclassz00_6086 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
							BgL_arg1547z00_6087);
					}
					{	/* Llib/object.scm 1259 */
						obj_t BgL_arg1786z00_6090;

						BgL_arg1786z00_6090 =
							BGL_CLASS_ANCESTORS_REF(BgL_oclassz00_6086, BgL_cdepthz00_147);
						return (BgL_arg1786z00_6090 == BgL_classz00_146);
					}
				}
			else
				{	/* Llib/object.scm 1257 */
					return ((bool_t) 0);
				}
		}

	}



/* &%isa/cdepth? */
	obj_t BGl_z62z52isazf2cdepthzf3z31zz__objectz00(obj_t BgL_envz00_5339,
		obj_t BgL_objz00_5340, obj_t BgL_classz00_5341, obj_t BgL_cdepthz00_5342)
	{
		{	/* Llib/object.scm 1256 */
			{	/* Llib/object.scm 1257 */
				bool_t BgL_tmpz00_7978;

				{	/* Llib/object.scm 1257 */
					long BgL_auxz00_7986;
					obj_t BgL_auxz00_7979;

					{	/* Llib/object.scm 1257 */
						obj_t BgL_tmpz00_7987;

						if (INTEGERP(BgL_cdepthz00_5342))
							{	/* Llib/object.scm 1257 */
								BgL_tmpz00_7987 = BgL_cdepthz00_5342;
							}
						else
							{
								obj_t BgL_auxz00_7990;

								BgL_auxz00_7990 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3235z00zz__objectz00, BINT(((long) 55332)),
									BGl_string3327z00zz__objectz00,
									BGl_string3242z00zz__objectz00, BgL_cdepthz00_5342);
								FAILURE(BgL_auxz00_7990, BFALSE, BFALSE);
							}
						BgL_auxz00_7986 = (long) CINT(BgL_tmpz00_7987);
					}
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5341))
						{	/* Llib/object.scm 1257 */
							BgL_auxz00_7979 = BgL_classz00_5341;
						}
					else
						{
							obj_t BgL_auxz00_7982;

							BgL_auxz00_7982 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 55332)), BGl_string3327z00zz__objectz00,
								BGl_string3244z00zz__objectz00, BgL_classz00_5341);
							FAILURE(BgL_auxz00_7982, BFALSE, BFALSE);
						}
					BgL_tmpz00_7978 =
						BGl_z52isazf2cdepthzf3z53zz__objectz00(BgL_objz00_5340,
						BgL_auxz00_7979, BgL_auxz00_7986);
				}
				return BBOOL(BgL_tmpz00_7978);
			}
		}

	}



/* %isa-object/cdepth? */
	BGL_EXPORTED_DEF bool_t
		BGl_z52isazd2objectzf2cdepthzf3z81zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_148, obj_t BgL_classz00_149, long BgL_cdepthz00_150)
	{
		{	/* Llib/object.scm 1264 */
			{	/* Llib/object.scm 1265 */
				obj_t BgL_oclassz00_6091;

				{	/* Llib/object.scm 838 */
					long BgL_arg1547z00_6092;

					{	/* Llib/object.scm 838 */
						long BgL_arg1551z00_6093;

						{	/* Llib/object.scm 838 */
							long BgL_res2790z00_6094;

							BgL_res2790z00_6094 = BGL_OBJECT_CLASS_NUM(BgL_objz00_148);
							BgL_arg1551z00_6093 = BgL_res2790z00_6094;
						}
						BgL_arg1547z00_6092 = (BgL_arg1551z00_6093 - OBJECT_TYPE);
					}
					BgL_oclassz00_6091 =
						VECTOR_REF(BGl_za2classesza2z00zz__objectz00, BgL_arg1547z00_6092);
				}
				{	/* Llib/object.scm 1266 */
					obj_t BgL_arg1787z00_6095;

					BgL_arg1787z00_6095 =
						BGL_CLASS_ANCESTORS_REF(BgL_oclassz00_6091, BgL_cdepthz00_150);
					return (BgL_arg1787z00_6095 == BgL_classz00_149);
				}
			}
		}

	}



/* &%isa-object/cdepth? */
	obj_t BGl_z62z52isazd2objectzf2cdepthzf3ze3zz__objectz00(obj_t
		BgL_envz00_5343, obj_t BgL_objz00_5344, obj_t BgL_classz00_5345,
		obj_t BgL_cdepthz00_5346)
	{
		{	/* Llib/object.scm 1264 */
			{	/* Llib/object.scm 1265 */
				bool_t BgL_tmpz00_8002;

				{	/* Llib/object.scm 1265 */
					long BgL_auxz00_8018;
					obj_t BgL_auxz00_8011;
					BgL_objectz00_bglt BgL_auxz00_8003;

					{	/* Llib/object.scm 1265 */
						obj_t BgL_tmpz00_8019;

						if (INTEGERP(BgL_cdepthz00_5346))
							{	/* Llib/object.scm 1265 */
								BgL_tmpz00_8019 = BgL_cdepthz00_5346;
							}
						else
							{
								obj_t BgL_auxz00_8022;

								BgL_auxz00_8022 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3235z00zz__objectz00, BINT(((long) 55727)),
									BGl_string3328z00zz__objectz00,
									BGl_string3242z00zz__objectz00, BgL_cdepthz00_5346);
								FAILURE(BgL_auxz00_8022, BFALSE, BFALSE);
							}
						BgL_auxz00_8018 = (long) CINT(BgL_tmpz00_8019);
					}
					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5345))
						{	/* Llib/object.scm 1265 */
							BgL_auxz00_8011 = BgL_classz00_5345;
						}
					else
						{
							obj_t BgL_auxz00_8014;

							BgL_auxz00_8014 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 55727)), BGl_string3328z00zz__objectz00,
								BGl_string3244z00zz__objectz00, BgL_classz00_5345);
							FAILURE(BgL_auxz00_8014, BFALSE, BFALSE);
						}
					if (BGl_isazf3zf3zz__objectz00(BgL_objz00_5344,
							BGl_objectz00zz__objectz00))
						{	/* Llib/object.scm 1265 */
							BgL_auxz00_8003 = ((BgL_objectz00_bglt) BgL_objz00_5344);
						}
					else
						{
							obj_t BgL_auxz00_8007;

							BgL_auxz00_8007 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 55727)), BGl_string3328z00zz__objectz00,
								BGl_string3284z00zz__objectz00, BgL_objz00_5344);
							FAILURE(BgL_auxz00_8007, BFALSE, BFALSE);
						}
					BgL_tmpz00_8002 =
						BGl_z52isazd2objectzf2cdepthzf3z81zz__objectz00(BgL_auxz00_8003,
						BgL_auxz00_8011, BgL_auxz00_8018);
				}
				return BBOOL(BgL_tmpz00_8002);
			}
		}

	}



/* %isa/final? */
	BGL_EXPORTED_DEF bool_t BGl_z52isazf2finalzf3z53zz__objectz00(obj_t
		BgL_objz00_151, obj_t BgL_classz00_152)
	{
		{	/* Llib/object.scm 1271 */
			if (BGL_OBJECTP(BgL_objz00_151))
				{	/* Llib/object.scm 1273 */
					obj_t BgL_oclassz00_6096;

					{	/* Llib/object.scm 838 */
						long BgL_arg1547z00_6097;

						{	/* Llib/object.scm 838 */
							long BgL_arg1551z00_6098;

							{	/* Llib/object.scm 838 */
								long BgL_res2793z00_6099;

								BgL_res2793z00_6099 =
									BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_objz00_151));
								BgL_arg1551z00_6098 = BgL_res2793z00_6099;
							}
							BgL_arg1547z00_6097 = (BgL_arg1551z00_6098 - OBJECT_TYPE);
						}
						BgL_oclassz00_6096 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
							BgL_arg1547z00_6097);
					}
					return (BgL_oclassz00_6096 == BgL_classz00_152);
				}
			else
				{	/* Llib/object.scm 1272 */
					return ((bool_t) 0);
				}
		}

	}



/* &%isa/final? */
	obj_t BGl_z62z52isazf2finalzf3z31zz__objectz00(obj_t BgL_envz00_5347,
		obj_t BgL_objz00_5348, obj_t BgL_classz00_5349)
	{
		{	/* Llib/object.scm 1271 */
			{	/* Llib/object.scm 1272 */
				bool_t BgL_tmpz00_8036;

				{	/* Llib/object.scm 1272 */
					obj_t BgL_auxz00_8037;

					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5349))
						{	/* Llib/object.scm 1272 */
							BgL_auxz00_8037 = BgL_classz00_5349;
						}
					else
						{
							obj_t BgL_auxz00_8040;

							BgL_auxz00_8040 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 56084)), BGl_string3329z00zz__objectz00,
								BGl_string3244z00zz__objectz00, BgL_classz00_5349);
							FAILURE(BgL_auxz00_8040, BFALSE, BFALSE);
						}
					BgL_tmpz00_8036 =
						BGl_z52isazf2finalzf3z53zz__objectz00(BgL_objz00_5348,
						BgL_auxz00_8037);
				}
				return BBOOL(BgL_tmpz00_8036);
			}
		}

	}



/* %isa-object/final? */
	BGL_EXPORTED_DEF bool_t
		BGl_z52isazd2objectzf2finalzf3z81zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_153, obj_t BgL_classz00_154)
	{
		{	/* Llib/object.scm 1279 */
			{	/* Llib/object.scm 1280 */
				obj_t BgL_oclassz00_6100;

				{	/* Llib/object.scm 838 */
					long BgL_arg1547z00_6101;

					{	/* Llib/object.scm 838 */
						long BgL_arg1551z00_6102;

						{	/* Llib/object.scm 838 */
							long BgL_res2795z00_6103;

							BgL_res2795z00_6103 = BGL_OBJECT_CLASS_NUM(BgL_objz00_153);
							BgL_arg1551z00_6102 = BgL_res2795z00_6103;
						}
						BgL_arg1547z00_6101 = (BgL_arg1551z00_6102 - OBJECT_TYPE);
					}
					BgL_oclassz00_6100 =
						VECTOR_REF(BGl_za2classesza2z00zz__objectz00, BgL_arg1547z00_6101);
				}
				return (BgL_oclassz00_6100 == BgL_classz00_154);
			}
		}

	}



/* &%isa-object/final? */
	obj_t BGl_z62z52isazd2objectzf2finalzf3ze3zz__objectz00(obj_t BgL_envz00_5350,
		obj_t BgL_objz00_5351, obj_t BgL_classz00_5352)
	{
		{	/* Llib/object.scm 1279 */
			{	/* Llib/object.scm 1280 */
				bool_t BgL_tmpz00_8050;

				{	/* Llib/object.scm 1280 */
					obj_t BgL_auxz00_8059;
					BgL_objectz00_bglt BgL_auxz00_8051;

					if (BGl_classzf3zf3zz__objectz00(BgL_classz00_5352))
						{	/* Llib/object.scm 1280 */
							BgL_auxz00_8059 = BgL_classz00_5352;
						}
					else
						{
							obj_t BgL_auxz00_8062;

							BgL_auxz00_8062 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 56441)), BGl_string3330z00zz__objectz00,
								BGl_string3244z00zz__objectz00, BgL_classz00_5352);
							FAILURE(BgL_auxz00_8062, BFALSE, BFALSE);
						}
					if (BGl_isazf3zf3zz__objectz00(BgL_objz00_5351,
							BGl_objectz00zz__objectz00))
						{	/* Llib/object.scm 1280 */
							BgL_auxz00_8051 = ((BgL_objectz00_bglt) BgL_objz00_5351);
						}
					else
						{
							obj_t BgL_auxz00_8055;

							BgL_auxz00_8055 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 56441)), BGl_string3330z00zz__objectz00,
								BGl_string3284z00zz__objectz00, BgL_objz00_5351);
							FAILURE(BgL_auxz00_8055, BFALSE, BFALSE);
						}
					BgL_tmpz00_8050 =
						BGl_z52isazd2objectzf2finalzf3z81zz__objectz00(BgL_auxz00_8051,
						BgL_auxz00_8059);
				}
				return BBOOL(BgL_tmpz00_8050);
			}
		}

	}



/* allocate-instance */
	BGL_EXPORTED_DEF BgL_objectz00_bglt
		BGl_allocatezd2instancezd2zz__objectz00(obj_t BgL_cnamez00_160)
	{
		{	/* Llib/object.scm 1306 */
			{
				long BgL_iz00_1632;

				{
					obj_t BgL_auxz00_8068;

					BgL_iz00_1632 = ((long) 0);
				BgL_zc3z04anonymousza31789ze3z87_1633:
					if (
						(BgL_iz00_1632 ==
							(long) CINT(BGl_za2nbzd2classesza2zd2zz__objectz00)))
						{	/* Llib/object.scm 1308 */
							BgL_auxz00_8068 =
								BGl_errorz00zz__errorz00(BGl_string3331z00zz__objectz00,
								BGl_string3239z00zz__objectz00, BgL_cnamez00_160);
						}
					else
						{	/* Llib/object.scm 1310 */
							obj_t BgL_classz00_1635;

							BgL_classz00_1635 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00, BgL_iz00_1632);
							{	/* Llib/object.scm 1311 */
								bool_t BgL_test4053z00_8074;

								{	/* Llib/object.scm 1311 */
									obj_t BgL_arg1799z00_1647;

									{	/* Llib/object.scm 1311 */
										obj_t BgL_res2798z00_3835;

										{	/* Llib/object.scm 475 */
											obj_t BgL_tmpz00_8075;

											BgL_tmpz00_8075 = ((obj_t) BgL_classz00_1635);
											BgL_res2798z00_3835 = BGL_CLASS_NAME(BgL_tmpz00_8075);
										}
										BgL_arg1799z00_1647 = BgL_res2798z00_3835;
									}
									BgL_test4053z00_8074 =
										(BgL_arg1799z00_1647 == BgL_cnamez00_160);
								}
								if (BgL_test4053z00_8074)
									{	/* Llib/object.scm 1312 */
										obj_t BgL_allocz00_1638;

										{	/* Llib/object.scm 1312 */
											obj_t BgL_res2800z00_3839;

											{	/* Llib/object.scm 668 */
												bool_t BgL_test4054z00_8079;

												{	/* Llib/object.scm 668 */
													bool_t BgL_res2799z00_3838;

													{	/* Llib/object.scm 434 */
														obj_t BgL_tmpz00_8080;

														BgL_tmpz00_8080 = ((obj_t) BgL_classz00_1635);
														BgL_res2799z00_3838 = BGL_CLASSP(BgL_tmpz00_8080);
													}
													BgL_test4054z00_8079 = BgL_res2799z00_3838;
												}
												if (BgL_test4054z00_8079)
													{	/* Llib/object.scm 669 */
														obj_t BgL_tmpz00_8083;

														BgL_tmpz00_8083 = ((obj_t) BgL_classz00_1635);
														BgL_res2800z00_3839 =
															BGL_CLASS_ALLOC_FUN(BgL_tmpz00_8083);
													}
												else
													{	/* Llib/object.scm 668 */
														BgL_res2800z00_3839 =
															BGl_bigloozd2typezd2errorz00zz__errorz00
															(BGl_string3272z00zz__objectz00,
															BGl_string3244z00zz__objectz00,
															((obj_t) BgL_classz00_1635));
													}
											}
											BgL_allocz00_1638 = BgL_res2800z00_3839;
										}
										{	/* Llib/object.scm 1313 */
											bool_t BgL_test4055z00_8088;

											{	/* Llib/object.scm 1313 */
												bool_t BgL_res2802z00_3843;

												{	/* Llib/object.scm 650 */
													obj_t BgL_arg1524z00_3841;

													BgL_arg1524z00_3841 =
														BGl_classzd2shrinkzd2zz__objectz00(
														((obj_t) BgL_classz00_1635));
													BgL_res2802z00_3843 = PROCEDUREP(BgL_arg1524z00_3841);
												}
												BgL_test4055z00_8088 = BgL_res2802z00_3843;
											}
											if (BgL_test4055z00_8088)
												{	/* Llib/object.scm 1316 */
													bool_t BgL_test4056z00_8092;

													{	/* Llib/object.scm 1316 */
														int BgL_arg1797z00_1645;

														BgL_arg1797z00_1645 =
															PROCEDURE_ARITY(BgL_allocz00_1638);
														BgL_test4056z00_8092 =
															((long) (BgL_arg1797z00_1645) == ((long) 0));
													}
													if (BgL_test4056z00_8092)
														{	/* Llib/object.scm 1316 */
															BgL_auxz00_8068 =
																PROCEDURE_ENTRY(BgL_allocz00_1638)
																(BgL_allocz00_1638, BEOA);
														}
													else
														{	/* Llib/object.scm 1318 */
															obj_t BgL_superz00_1642;

															{	/* Llib/object.scm 626 */
																obj_t BgL_tmpz00_8099;

																BgL_tmpz00_8099 = ((obj_t) BgL_classz00_1635);
																BgL_superz00_1642 =
																	BGL_CLASS_SUPER(BgL_tmpz00_8099);
															}
															{	/* Llib/object.scm 1318 */
																obj_t BgL_oz00_1643;

																{	/* Llib/object.scm 1319 */
																	obj_t BgL_fun1796z00_1644;

																	{	/* Llib/object.scm 1319 */
																		obj_t BgL_res2806z00_3852;

																		{	/* Llib/object.scm 668 */
																			bool_t BgL_test4057z00_8102;

																			{	/* Llib/object.scm 668 */
																				bool_t BgL_res2805z00_3851;

																				{	/* Llib/object.scm 434 */
																					obj_t BgL_tmpz00_8103;

																					BgL_tmpz00_8103 =
																						((obj_t) BgL_superz00_1642);
																					BgL_res2805z00_3851 =
																						BGL_CLASSP(BgL_tmpz00_8103);
																				}
																				BgL_test4057z00_8102 =
																					BgL_res2805z00_3851;
																			}
																			if (BgL_test4057z00_8102)
																				{	/* Llib/object.scm 669 */
																					obj_t BgL_tmpz00_8106;

																					BgL_tmpz00_8106 =
																						((obj_t) BgL_superz00_1642);
																					BgL_res2806z00_3852 =
																						BGL_CLASS_ALLOC_FUN
																						(BgL_tmpz00_8106);
																				}
																			else
																				{	/* Llib/object.scm 668 */
																					BgL_res2806z00_3852 =
																						BGl_bigloozd2typezd2errorz00zz__errorz00
																						(BGl_string3272z00zz__objectz00,
																						BGl_string3244z00zz__objectz00,
																						((obj_t) BgL_superz00_1642));
																				}
																		}
																		BgL_fun1796z00_1644 = BgL_res2806z00_3852;
																	}
																	BgL_oz00_1643 =
																		PROCEDURE_ENTRY(BgL_fun1796z00_1644)
																		(BgL_fun1796z00_1644, BEOA);
																}
																{	/* Llib/object.scm 1319 */

																	BgL_auxz00_8068 =
																		PROCEDURE_ENTRY(BgL_allocz00_1638)
																		(BgL_allocz00_1638, BgL_oz00_1643, BEOA);
																}
															}
														}
												}
											else
												{	/* Llib/object.scm 1313 */
													BgL_auxz00_8068 =
														PROCEDURE_ENTRY(BgL_allocz00_1638)
														(BgL_allocz00_1638, BEOA);
												}
										}
									}
								else
									{
										long BgL_iz00_8121;

										BgL_iz00_8121 = (BgL_iz00_1632 + ((long) 1));
										BgL_iz00_1632 = BgL_iz00_8121;
										goto BgL_zc3z04anonymousza31789ze3z87_1633;
									}
							}
						}
					return ((BgL_objectz00_bglt) BgL_auxz00_8068);
				}
			}
		}

	}



/* &allocate-instance */
	BgL_objectz00_bglt BGl_z62allocatezd2instancezb0zz__objectz00(obj_t
		BgL_envz00_5353, obj_t BgL_cnamez00_5354)
	{
		{	/* Llib/object.scm 1306 */
			{	/* Llib/object.scm 1308 */
				obj_t BgL_auxz00_8124;

				if (SYMBOLP(BgL_cnamez00_5354))
					{	/* Llib/object.scm 1308 */
						BgL_auxz00_8124 = BgL_cnamez00_5354;
					}
				else
					{
						obj_t BgL_auxz00_8127;

						BgL_auxz00_8127 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 57876)), BGl_string3332z00zz__objectz00,
							BGl_string3237z00zz__objectz00, BgL_cnamez00_5354);
						FAILURE(BgL_auxz00_8127, BFALSE, BFALSE);
					}
				return BGl_allocatezd2instancezd2zz__objectz00(BgL_auxz00_8124);
			}
		}

	}



/* wide-object? */
	BGL_EXPORTED_DEF bool_t
		BGl_widezd2objectzf3z21zz__objectz00(BgL_objectz00_bglt BgL_objectz00_161)
	{
		{	/* Llib/object.scm 1327 */
			return CBOOL(BGL_OBJECT_WIDENING(BgL_objectz00_161));
		}

	}



/* &wide-object? */
	obj_t BGl_z62widezd2objectzf3z43zz__objectz00(obj_t BgL_envz00_5355,
		obj_t BgL_objectz00_5356)
	{
		{	/* Llib/object.scm 1327 */
			{	/* Llib/object.scm 1328 */
				bool_t BgL_tmpz00_8134;

				{	/* Llib/object.scm 1328 */
					BgL_objectz00_bglt BgL_auxz00_8135;

					if (BGl_isazf3zf3zz__objectz00(BgL_objectz00_5356,
							BGl_objectz00zz__objectz00))
						{	/* Llib/object.scm 1328 */
							BgL_auxz00_8135 = ((BgL_objectz00_bglt) BgL_objectz00_5356);
						}
					else
						{
							obj_t BgL_auxz00_8139;

							BgL_auxz00_8139 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 58663)), BGl_string3333z00zz__objectz00,
								BGl_string3284z00zz__objectz00, BgL_objectz00_5356);
							FAILURE(BgL_auxz00_8139, BFALSE, BFALSE);
						}
					BgL_tmpz00_8134 =
						BGl_widezd2objectzf3z21zz__objectz00(BgL_auxz00_8135);
				}
				return BBOOL(BgL_tmpz00_8134);
			}
		}

	}



/* call-virtual-getter */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2virtualzd2getterz00zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_171, int BgL_numz00_172)
	{
		{	/* Llib/object.scm 1426 */
			{	/* Llib/object.scm 1427 */
				obj_t BgL_classz00_3857;

				{	/* Llib/object.scm 838 */
					long BgL_arg1547z00_3862;

					{	/* Llib/object.scm 838 */
						long BgL_arg1551z00_3863;

						{	/* Llib/object.scm 838 */
							long BgL_res2808z00_3865;

							BgL_res2808z00_3865 = BGL_OBJECT_CLASS_NUM(BgL_objz00_171);
							BgL_arg1551z00_3863 = BgL_res2808z00_3865;
						}
						BgL_arg1547z00_3862 = (BgL_arg1551z00_3863 - OBJECT_TYPE);
					}
					BgL_classz00_3857 =
						VECTOR_REF(BGl_za2classesza2z00zz__objectz00, BgL_arg1547z00_3862);
				}
				{	/* Llib/object.scm 1427 */
					obj_t BgL_getterz00_3858;

					{	/* Llib/object.scm 1428 */
						obj_t BgL_arg1801z00_3859;

						{	/* Llib/object.scm 1428 */
							obj_t BgL_arg1803z00_3860;

							{	/* Llib/object.scm 1428 */
								obj_t BgL_res2810z00_3872;

								{	/* Llib/object.scm 493 */
									obj_t BgL_tmpz00_8148;

									BgL_tmpz00_8148 = ((obj_t) BgL_classz00_3857);
									BgL_res2810z00_3872 =
										BGL_CLASS_VIRTUAL_FIELDS(BgL_tmpz00_8148);
								}
								BgL_arg1803z00_3860 = BgL_res2810z00_3872;
							}
							BgL_arg1801z00_3859 =
								VECTOR_REF(BgL_arg1803z00_3860, (long) (BgL_numz00_172));
						}
						BgL_getterz00_3858 = CAR(((obj_t) BgL_arg1801z00_3859));
					}
					{	/* Llib/object.scm 1428 */

						return
							PROCEDURE_ENTRY(BgL_getterz00_3858) (BgL_getterz00_3858,
							((obj_t) BgL_objz00_171), BEOA);
					}
				}
			}
		}

	}



/* &call-virtual-getter */
	obj_t BGl_z62callzd2virtualzd2getterz62zz__objectz00(obj_t BgL_envz00_5357,
		obj_t BgL_objz00_5358, obj_t BgL_numz00_5359)
	{
		{	/* Llib/object.scm 1426 */
			{	/* Llib/object.scm 1427 */
				int BgL_auxz00_8168;
				BgL_objectz00_bglt BgL_auxz00_8160;

				{	/* Llib/object.scm 1427 */
					obj_t BgL_tmpz00_8169;

					if (INTEGERP(BgL_numz00_5359))
						{	/* Llib/object.scm 1427 */
							BgL_tmpz00_8169 = BgL_numz00_5359;
						}
					else
						{
							obj_t BgL_auxz00_8172;

							BgL_auxz00_8172 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 62788)), BGl_string3334z00zz__objectz00,
								BGl_string3242z00zz__objectz00, BgL_numz00_5359);
							FAILURE(BgL_auxz00_8172, BFALSE, BFALSE);
						}
					BgL_auxz00_8168 = CINT(BgL_tmpz00_8169);
				}
				if (BGl_isazf3zf3zz__objectz00(BgL_objz00_5358,
						BGl_objectz00zz__objectz00))
					{	/* Llib/object.scm 1427 */
						BgL_auxz00_8160 = ((BgL_objectz00_bglt) BgL_objz00_5358);
					}
				else
					{
						obj_t BgL_auxz00_8164;

						BgL_auxz00_8164 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 62788)), BGl_string3334z00zz__objectz00,
							BGl_string3284z00zz__objectz00, BgL_objz00_5358);
						FAILURE(BgL_auxz00_8164, BFALSE, BFALSE);
					}
				return
					BGl_callzd2virtualzd2getterz00zz__objectz00(BgL_auxz00_8160,
					BgL_auxz00_8168);
			}
		}

	}



/* call-virtual-setter */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2virtualzd2setterz00zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_173, int BgL_numz00_174, obj_t BgL_valuez00_175)
	{
		{	/* Llib/object.scm 1439 */
			{	/* Llib/object.scm 1440 */
				obj_t BgL_classz00_3876;

				{	/* Llib/object.scm 838 */
					long BgL_arg1547z00_3881;

					{	/* Llib/object.scm 838 */
						long BgL_arg1551z00_3882;

						{	/* Llib/object.scm 838 */
							long BgL_res2811z00_3884;

							BgL_res2811z00_3884 = BGL_OBJECT_CLASS_NUM(BgL_objz00_173);
							BgL_arg1551z00_3882 = BgL_res2811z00_3884;
						}
						BgL_arg1547z00_3881 = (BgL_arg1551z00_3882 - OBJECT_TYPE);
					}
					BgL_classz00_3876 =
						VECTOR_REF(BGl_za2classesza2z00zz__objectz00, BgL_arg1547z00_3881);
				}
				{	/* Llib/object.scm 1440 */
					obj_t BgL_setterz00_3877;

					{	/* Llib/object.scm 1441 */
						obj_t BgL_arg1805z00_3878;

						{	/* Llib/object.scm 1441 */
							obj_t BgL_arg1806z00_3879;

							{	/* Llib/object.scm 1441 */
								obj_t BgL_res2813z00_3891;

								{	/* Llib/object.scm 493 */
									obj_t BgL_tmpz00_8181;

									BgL_tmpz00_8181 = ((obj_t) BgL_classz00_3876);
									BgL_res2813z00_3891 =
										BGL_CLASS_VIRTUAL_FIELDS(BgL_tmpz00_8181);
								}
								BgL_arg1806z00_3879 = BgL_res2813z00_3891;
							}
							BgL_arg1805z00_3878 =
								VECTOR_REF(BgL_arg1806z00_3879, (long) (BgL_numz00_174));
						}
						BgL_setterz00_3877 = CDR(((obj_t) BgL_arg1805z00_3878));
					}
					{	/* Llib/object.scm 1441 */

						return
							PROCEDURE_ENTRY(BgL_setterz00_3877) (BgL_setterz00_3877,
							((obj_t) BgL_objz00_173), BgL_valuez00_175, BEOA);
					}
				}
			}
		}

	}



/* &call-virtual-setter */
	obj_t BGl_z62callzd2virtualzd2setterz62zz__objectz00(obj_t BgL_envz00_5360,
		obj_t BgL_objz00_5361, obj_t BgL_numz00_5362, obj_t BgL_valuez00_5363)
	{
		{	/* Llib/object.scm 1439 */
			{	/* Llib/object.scm 1440 */
				int BgL_auxz00_8202;
				BgL_objectz00_bglt BgL_auxz00_8194;

				{	/* Llib/object.scm 1440 */
					obj_t BgL_tmpz00_8203;

					if (INTEGERP(BgL_numz00_5362))
						{	/* Llib/object.scm 1440 */
							BgL_tmpz00_8203 = BgL_numz00_5362;
						}
					else
						{
							obj_t BgL_auxz00_8206;

							BgL_auxz00_8206 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 63557)), BGl_string3335z00zz__objectz00,
								BGl_string3242z00zz__objectz00, BgL_numz00_5362);
							FAILURE(BgL_auxz00_8206, BFALSE, BFALSE);
						}
					BgL_auxz00_8202 = CINT(BgL_tmpz00_8203);
				}
				if (BGl_isazf3zf3zz__objectz00(BgL_objz00_5361,
						BGl_objectz00zz__objectz00))
					{	/* Llib/object.scm 1440 */
						BgL_auxz00_8194 = ((BgL_objectz00_bglt) BgL_objz00_5361);
					}
				else
					{
						obj_t BgL_auxz00_8198;

						BgL_auxz00_8198 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 63557)), BGl_string3335z00zz__objectz00,
							BGl_string3284z00zz__objectz00, BgL_objz00_5361);
						FAILURE(BgL_auxz00_8198, BFALSE, BFALSE);
					}
				return
					BGl_callzd2virtualzd2setterz00zz__objectz00(BgL_auxz00_8194,
					BgL_auxz00_8202, BgL_valuez00_5363);
			}
		}

	}



/* call-next-virtual-getter */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2nextzd2virtualzd2getterzd2zz__objectz00(obj_t BgL_classz00_176,
		BgL_objectz00_bglt BgL_objz00_177, int BgL_numz00_178)
	{
		{	/* Llib/object.scm 1462 */
			{	/* Llib/object.scm 1463 */
				obj_t BgL_nextzd2classzd2_3895;

				{	/* Llib/object.scm 626 */
					obj_t BgL_tmpz00_8212;

					BgL_tmpz00_8212 = ((obj_t) BgL_classz00_176);
					BgL_nextzd2classzd2_3895 = BGL_CLASS_SUPER(BgL_tmpz00_8212);
				}
				{	/* Llib/object.scm 1464 */
					obj_t BgL_fun1809z00_3896;

					{	/* Llib/object.scm 1464 */
						obj_t BgL_arg1807z00_3897;

						{	/* Llib/object.scm 1464 */
							obj_t BgL_arg1808z00_3898;

							{	/* Llib/object.scm 1464 */
								obj_t BgL_res2814z00_3901;

								{	/* Llib/object.scm 493 */
									obj_t BgL_tmpz00_8215;

									BgL_tmpz00_8215 = ((obj_t) BgL_nextzd2classzd2_3895);
									BgL_res2814z00_3901 =
										BGL_CLASS_VIRTUAL_FIELDS(BgL_tmpz00_8215);
								}
								BgL_arg1808z00_3898 = BgL_res2814z00_3901;
							}
							BgL_arg1807z00_3897 =
								VECTOR_REF(BgL_arg1808z00_3898, (long) (BgL_numz00_178));
						}
						BgL_fun1809z00_3896 = CAR(((obj_t) BgL_arg1807z00_3897));
					}
					return
						PROCEDURE_ENTRY(BgL_fun1809z00_3896) (BgL_fun1809z00_3896,
						((obj_t) BgL_objz00_177), BEOA);
				}
			}
		}

	}



/* &call-next-virtual-getter */
	obj_t BGl_z62callzd2nextzd2virtualzd2getterzb0zz__objectz00(obj_t
		BgL_envz00_5364, obj_t BgL_classz00_5365, obj_t BgL_objz00_5366,
		obj_t BgL_numz00_5367)
	{
		{	/* Llib/object.scm 1462 */
			{	/* Llib/object.scm 1463 */
				int BgL_auxz00_8235;
				BgL_objectz00_bglt BgL_auxz00_8227;

				{	/* Llib/object.scm 1463 */
					obj_t BgL_tmpz00_8236;

					if (INTEGERP(BgL_numz00_5367))
						{	/* Llib/object.scm 1463 */
							BgL_tmpz00_8236 = BgL_numz00_5367;
						}
					else
						{
							obj_t BgL_auxz00_8239;

							BgL_auxz00_8239 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 65077)), BGl_string3336z00zz__objectz00,
								BGl_string3242z00zz__objectz00, BgL_numz00_5367);
							FAILURE(BgL_auxz00_8239, BFALSE, BFALSE);
						}
					BgL_auxz00_8235 = CINT(BgL_tmpz00_8236);
				}
				if (BGl_isazf3zf3zz__objectz00(BgL_objz00_5366,
						BGl_objectz00zz__objectz00))
					{	/* Llib/object.scm 1463 */
						BgL_auxz00_8227 = ((BgL_objectz00_bglt) BgL_objz00_5366);
					}
				else
					{
						obj_t BgL_auxz00_8231;

						BgL_auxz00_8231 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 65077)), BGl_string3336z00zz__objectz00,
							BGl_string3284z00zz__objectz00, BgL_objz00_5366);
						FAILURE(BgL_auxz00_8231, BFALSE, BFALSE);
					}
				return
					BGl_callzd2nextzd2virtualzd2getterzd2zz__objectz00(BgL_classz00_5365,
					BgL_auxz00_8227, BgL_auxz00_8235);
			}
		}

	}



/* call-next-virtual-setter */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2nextzd2virtualzd2setterzd2zz__objectz00(obj_t BgL_classz00_179,
		BgL_objectz00_bglt BgL_objz00_180, int BgL_numz00_181,
		obj_t BgL_valuez00_182)
	{
		{	/* Llib/object.scm 1474 */
			{	/* Llib/object.scm 1475 */
				obj_t BgL_nextzd2classzd2_3905;

				{	/* Llib/object.scm 626 */
					obj_t BgL_tmpz00_8245;

					BgL_tmpz00_8245 = ((obj_t) BgL_classz00_179);
					BgL_nextzd2classzd2_3905 = BGL_CLASS_SUPER(BgL_tmpz00_8245);
				}
				{	/* Llib/object.scm 1476 */
					obj_t BgL_fun1813z00_3906;

					{	/* Llib/object.scm 1476 */
						obj_t BgL_arg1810z00_3907;

						{	/* Llib/object.scm 1476 */
							obj_t BgL_arg1811z00_3908;

							{	/* Llib/object.scm 1476 */
								obj_t BgL_res2815z00_3911;

								{	/* Llib/object.scm 493 */
									obj_t BgL_tmpz00_8248;

									BgL_tmpz00_8248 = ((obj_t) BgL_nextzd2classzd2_3905);
									BgL_res2815z00_3911 =
										BGL_CLASS_VIRTUAL_FIELDS(BgL_tmpz00_8248);
								}
								BgL_arg1811z00_3908 = BgL_res2815z00_3911;
							}
							BgL_arg1810z00_3907 =
								VECTOR_REF(BgL_arg1811z00_3908, (long) (BgL_numz00_181));
						}
						BgL_fun1813z00_3906 = CDR(((obj_t) BgL_arg1810z00_3907));
					}
					return
						PROCEDURE_ENTRY(BgL_fun1813z00_3906) (BgL_fun1813z00_3906,
						((obj_t) BgL_objz00_180), BgL_valuez00_182, BEOA);
				}
			}
		}

	}



/* &call-next-virtual-setter */
	obj_t BGl_z62callzd2nextzd2virtualzd2setterzb0zz__objectz00(obj_t
		BgL_envz00_5368, obj_t BgL_classz00_5369, obj_t BgL_objz00_5370,
		obj_t BgL_numz00_5371, obj_t BgL_valuez00_5372)
	{
		{	/* Llib/object.scm 1474 */
			{	/* Llib/object.scm 1475 */
				int BgL_auxz00_8269;
				BgL_objectz00_bglt BgL_auxz00_8261;

				{	/* Llib/object.scm 1475 */
					obj_t BgL_tmpz00_8270;

					if (INTEGERP(BgL_numz00_5371))
						{	/* Llib/object.scm 1475 */
							BgL_tmpz00_8270 = BgL_numz00_5371;
						}
					else
						{
							obj_t BgL_auxz00_8273;

							BgL_auxz00_8273 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 65848)), BGl_string3337z00zz__objectz00,
								BGl_string3242z00zz__objectz00, BgL_numz00_5371);
							FAILURE(BgL_auxz00_8273, BFALSE, BFALSE);
						}
					BgL_auxz00_8269 = CINT(BgL_tmpz00_8270);
				}
				if (BGl_isazf3zf3zz__objectz00(BgL_objz00_5370,
						BGl_objectz00zz__objectz00))
					{	/* Llib/object.scm 1475 */
						BgL_auxz00_8261 = ((BgL_objectz00_bglt) BgL_objz00_5370);
					}
				else
					{
						obj_t BgL_auxz00_8265;

						BgL_auxz00_8265 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 65848)), BGl_string3337z00zz__objectz00,
							BGl_string3284z00zz__objectz00, BgL_objz00_5370);
						FAILURE(BgL_auxz00_8265, BFALSE, BFALSE);
					}
				return
					BGl_callzd2nextzd2virtualzd2setterzd2zz__objectz00(BgL_classz00_5369,
					BgL_auxz00_8261, BgL_auxz00_8269, BgL_valuez00_5372);
			}
		}

	}



/* object-widening */
	BGL_EXPORTED_DEF obj_t
		BGl_objectzd2wideningzd2zz__objectz00(BgL_objectz00_bglt BgL_oz00_183)
	{
		{	/* Llib/object.scm 1481 */
			return BGL_OBJECT_WIDENING(BgL_oz00_183);
		}

	}



/* &object-widening */
	obj_t BGl_z62objectzd2wideningzb0zz__objectz00(obj_t BgL_envz00_5373,
		obj_t BgL_oz00_5374)
	{
		{	/* Llib/object.scm 1481 */
			{	/* Llib/object.scm 1482 */
				BgL_objectz00_bglt BgL_auxz00_8280;

				if (BGl_isazf3zf3zz__objectz00(BgL_oz00_5374,
						BGl_objectz00zz__objectz00))
					{	/* Llib/object.scm 1482 */
						BgL_auxz00_8280 = ((BgL_objectz00_bglt) BgL_oz00_5374);
					}
				else
					{
						obj_t BgL_auxz00_8284;

						BgL_auxz00_8284 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 66222)), BGl_string3338z00zz__objectz00,
							BGl_string3284z00zz__objectz00, BgL_oz00_5374);
						FAILURE(BgL_auxz00_8284, BFALSE, BFALSE);
					}
				return BGl_objectzd2wideningzd2zz__objectz00(BgL_auxz00_8280);
			}
		}

	}



/* object-widening-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_objectzd2wideningzd2setz12z12zz__objectz00(BgL_objectz00_bglt
		BgL_oz00_184, obj_t BgL_vz00_185)
	{
		{	/* Llib/object.scm 1487 */
			BGL_OBJECT_WIDENING_SET(BgL_oz00_184, BgL_vz00_185);
			return ((obj_t) BgL_oz00_184);
		}

	}



/* &object-widening-set! */
	obj_t BGl_z62objectzd2wideningzd2setz12z70zz__objectz00(obj_t BgL_envz00_5375,
		obj_t BgL_oz00_5376, obj_t BgL_vz00_5377)
	{
		{	/* Llib/object.scm 1487 */
			{	/* Llib/object.scm 1488 */
				BgL_objectz00_bglt BgL_auxz00_8291;

				if (BGl_isazf3zf3zz__objectz00(BgL_oz00_5376,
						BGl_objectz00zz__objectz00))
					{	/* Llib/object.scm 1488 */
						BgL_auxz00_8291 = ((BgL_objectz00_bglt) BgL_oz00_5376);
					}
				else
					{
						obj_t BgL_auxz00_8295;

						BgL_auxz00_8295 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 66538)), BGl_string3339z00zz__objectz00,
							BGl_string3284z00zz__objectz00, BgL_oz00_5376);
						FAILURE(BgL_auxz00_8295, BFALSE, BFALSE);
					}
				return
					BGl_objectzd2wideningzd2setz12z12zz__objectz00(BgL_auxz00_8291,
					BgL_vz00_5377);
			}
		}

	}



/* %object-widening */
	BGL_EXPORTED_DEF obj_t
		BGl_z52objectzd2wideningz80zz__objectz00(BgL_objectz00_bglt BgL_oz00_186)
	{
		{	/* Llib/object.scm 1497 */
			return BGL_OBJECT_WIDENING(BgL_oz00_186);
		}

	}



/* &%object-widening */
	obj_t BGl_z62z52objectzd2wideningze2zz__objectz00(obj_t BgL_envz00_5378,
		obj_t BgL_oz00_5379)
	{
		{	/* Llib/object.scm 1497 */
			{	/* Llib/object.scm 1498 */
				BgL_objectz00_bglt BgL_auxz00_8301;

				if (BGl_isazf3zf3zz__objectz00(BgL_oz00_5379,
						BGl_objectz00zz__objectz00))
					{	/* Llib/object.scm 1498 */
						BgL_auxz00_8301 = ((BgL_objectz00_bglt) BgL_oz00_5379);
					}
				else
					{
						obj_t BgL_auxz00_8305;

						BgL_auxz00_8305 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 67023)), BGl_string3340z00zz__objectz00,
							BGl_string3284z00zz__objectz00, BgL_oz00_5379);
						FAILURE(BgL_auxz00_8305, BFALSE, BFALSE);
					}
				return BGl_z52objectzd2wideningz80zz__objectz00(BgL_auxz00_8301);
			}
		}

	}



/* %object-widening-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_z52objectzd2wideningzd2setz12z40zz__objectz00(BgL_objectz00_bglt
		BgL_oz00_187, obj_t BgL_wz00_188)
	{
		{	/* Llib/object.scm 1506 */
			BGL_OBJECT_WIDENING_SET(BgL_oz00_187, BgL_wz00_188);
			BgL_oz00_187;
			return ((obj_t) BgL_oz00_187);
		}

	}



/* &%object-widening-set! */
	obj_t BGl_z62z52objectzd2wideningzd2setz12z22zz__objectz00(obj_t
		BgL_envz00_5380, obj_t BgL_oz00_5381, obj_t BgL_wz00_5382)
	{
		{	/* Llib/object.scm 1506 */
			{	/* Llib/object.scm 1507 */
				BgL_objectz00_bglt BgL_auxz00_8312;

				if (BGl_isazf3zf3zz__objectz00(BgL_oz00_5381,
						BGl_objectz00zz__objectz00))
					{	/* Llib/object.scm 1507 */
						BgL_auxz00_8312 = ((BgL_objectz00_bglt) BgL_oz00_5381);
					}
				else
					{
						obj_t BgL_auxz00_8316;

						BgL_auxz00_8316 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 67553)), BGl_string3341z00zz__objectz00,
							BGl_string3284z00zz__objectz00, BgL_oz00_5381);
						FAILURE(BgL_auxz00_8316, BFALSE, BFALSE);
					}
				return
					BGl_z52objectzd2wideningzd2setz12z40zz__objectz00(BgL_auxz00_8312,
					BgL_wz00_5382);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__objectz00()
	{
		{	/* Llib/object.scm 17 */
			{	/* Llib/object.scm 212 */
				obj_t BgL_arg1817z00_1669;
				obj_t BgL_arg1818z00_1670;

				{	/* Llib/object.scm 212 */
					obj_t BgL_v1325z00_1680;

					BgL_v1325z00_1680 = create_vector(((long) 0));
					BgL_arg1817z00_1669 = BgL_v1325z00_1680;
				}
				{	/* Llib/object.scm 212 */
					obj_t BgL_v1326z00_1681;

					BgL_v1326z00_1681 = create_vector(((long) 0));
					BgL_arg1818z00_1670 = BgL_v1326z00_1681;
				}
				BGl_objectz00zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3345z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BFALSE, ((long) 43966), BGl_proc3344z00zz__objectz00,
					BGl_proc3343z00zz__objectz00, BFALSE, BGl_proc3342z00zz__objectz00,
					BFALSE, BgL_arg1817z00_1669, BgL_arg1818z00_1670);
			}
			{	/* Llib/object.scm 213 */
				obj_t BgL_arg1827z00_1688;
				obj_t BgL_arg1828z00_1689;

				{	/* Llib/object.scm 213 */
					obj_t BgL_v1327z00_1699;

					BgL_v1327z00_1699 = create_vector(((long) 0));
					BgL_arg1827z00_1688 = BgL_v1327z00_1699;
				}
				{	/* Llib/object.scm 213 */
					obj_t BgL_v1328z00_1700;

					BgL_v1328z00_1700 = create_vector(((long) 0));
					BgL_arg1828z00_1689 = BgL_v1328z00_1700;
				}
				BGl_z62conditionz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3351z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_objectz00zz__objectz00, ((long) 33653),
					BGl_proc3350z00zz__objectz00, BGl_proc3349z00zz__objectz00, BFALSE,
					BGl_proc3348z00zz__objectz00, BFALSE, BgL_arg1827z00_1688,
					BgL_arg1828z00_1689);
			}
			{	/* Llib/object.scm 215 */
				obj_t BgL_arg1840z00_1707;
				obj_t BgL_arg1841z00_1708;

				{	/* Llib/object.scm 215 */
					obj_t BgL_v1329z00_1721;

					BgL_v1329z00_1721 = create_vector(((long) 3));
					{	/* Llib/object.scm 215 */
						obj_t BgL_arg1850z00_1722;

						{	/* Llib/object.scm 215 */
							obj_t BgL_res2820z00_3952;

							{	/* Llib/object.scm 215 */
								obj_t BgL_namez00_3937;
								obj_t BgL_typez00_3940;

								BgL_namez00_3937 = BGl_symbol3356z00zz__objectz00;
								BgL_typez00_3940 = BGl_symbol3358z00zz__objectz00;
								{	/* Llib/object.scm 550 */
									obj_t BgL_v1313z00_3941;

									BgL_v1313z00_3941 = create_vector(((long) 9));
									VECTOR_SET(BgL_v1313z00_3941, ((long) 0), BgL_namez00_3937);
									VECTOR_SET(BgL_v1313z00_3941, ((long) 1),
										BGl_proc3355z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_3941, ((long) 2),
										BGl_proc3354z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_3941, ((long) 3), BFALSE);
									VECTOR_SET(BgL_v1313z00_3941, ((long) 4),
										BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
									VECTOR_SET(BgL_v1313z00_3941, ((long) 5), BFALSE);
									VECTOR_SET(BgL_v1313z00_3941, ((long) 6),
										BGl_proc3353z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_3941, ((long) 7), BgL_typez00_3940);
									VECTOR_SET(BgL_v1313z00_3941, ((long) 8), BTRUE);
									BgL_res2820z00_3952 = BgL_v1313z00_3941;
							}}
							BgL_arg1850z00_1722 = BgL_res2820z00_3952;
						}
						VECTOR_SET(BgL_v1329z00_1721, ((long) 0), BgL_arg1850z00_1722);
					}
					{	/* Llib/object.scm 215 */
						obj_t BgL_arg1857z00_1735;

						{	/* Llib/object.scm 215 */
							obj_t BgL_res2821z00_3969;

							{	/* Llib/object.scm 215 */
								obj_t BgL_namez00_3954;
								obj_t BgL_typez00_3957;

								BgL_namez00_3954 = BGl_symbol3363z00zz__objectz00;
								BgL_typez00_3957 = BGl_symbol3358z00zz__objectz00;
								{	/* Llib/object.scm 550 */
									obj_t BgL_v1313z00_3958;

									BgL_v1313z00_3958 = create_vector(((long) 9));
									VECTOR_SET(BgL_v1313z00_3958, ((long) 0), BgL_namez00_3954);
									VECTOR_SET(BgL_v1313z00_3958, ((long) 1),
										BGl_proc3362z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_3958, ((long) 2),
										BGl_proc3361z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_3958, ((long) 3), BFALSE);
									VECTOR_SET(BgL_v1313z00_3958, ((long) 4),
										BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
									VECTOR_SET(BgL_v1313z00_3958, ((long) 5), BFALSE);
									VECTOR_SET(BgL_v1313z00_3958, ((long) 6),
										BGl_proc3360z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_3958, ((long) 7), BgL_typez00_3957);
									VECTOR_SET(BgL_v1313z00_3958, ((long) 8), BTRUE);
									BgL_res2821z00_3969 = BgL_v1313z00_3958;
							}}
							BgL_arg1857z00_1735 = BgL_res2821z00_3969;
						}
						VECTOR_SET(BgL_v1329z00_1721, ((long) 1), BgL_arg1857z00_1735);
					}
					{	/* Llib/object.scm 215 */
						obj_t BgL_arg1865z00_1748;

						{	/* Llib/object.scm 215 */
							obj_t BgL_res2822z00_3987;

							{	/* Llib/object.scm 215 */
								obj_t BgL_namez00_3972;
								obj_t BgL_typez00_3975;

								BgL_namez00_3972 = BGl_symbol3368z00zz__objectz00;
								BgL_typez00_3975 = BGl_symbol3358z00zz__objectz00;
								{	/* Llib/object.scm 550 */
									obj_t BgL_v1313z00_3976;

									BgL_v1313z00_3976 = create_vector(((long) 9));
									VECTOR_SET(BgL_v1313z00_3976, ((long) 0), BgL_namez00_3972);
									VECTOR_SET(BgL_v1313z00_3976, ((long) 1),
										BGl_proc3367z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_3976, ((long) 2),
										BGl_proc3366z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_3976, ((long) 3), BFALSE);
									VECTOR_SET(BgL_v1313z00_3976, ((long) 4),
										BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
									VECTOR_SET(BgL_v1313z00_3976, ((long) 5), BFALSE);
									VECTOR_SET(BgL_v1313z00_3976, ((long) 6),
										BGl_proc3365z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_3976, ((long) 7), BgL_typez00_3975);
									VECTOR_SET(BgL_v1313z00_3976, ((long) 8), BTRUE);
									BgL_res2822z00_3987 = BgL_v1313z00_3976;
							}}
							BgL_arg1865z00_1748 = BgL_res2822z00_3987;
						}
						VECTOR_SET(BgL_v1329z00_1721, ((long) 2), BgL_arg1865z00_1748);
					}
					BgL_arg1840z00_1707 = BgL_v1329z00_1721;
				}
				{	/* Llib/object.scm 215 */
					obj_t BgL_v1330z00_1762;

					BgL_v1330z00_1762 = create_vector(((long) 0));
					BgL_arg1841z00_1708 = BgL_v1330z00_1762;
				}
				BGl_z62exceptionz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3373z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62conditionz62zz__objectz00, ((long) 42024),
					BGl_proc3372z00zz__objectz00, BGl_proc3371z00zz__objectz00, BFALSE,
					BGl_proc3370z00zz__objectz00, BFALSE, BgL_arg1840z00_1707,
					BgL_arg1841z00_1708);
			}
			{	/* Llib/object.scm 220 */
				obj_t BgL_arg1878z00_1769;
				obj_t BgL_arg1879z00_1770;

				{	/* Llib/object.scm 220 */
					obj_t BgL_v1331z00_1786;

					BgL_v1331z00_1786 = create_vector(((long) 3));
					{	/* Llib/object.scm 220 */
						obj_t BgL_arg1885z00_1787;

						{	/* Llib/object.scm 220 */
							obj_t BgL_res2825z00_4017;

							{	/* Llib/object.scm 220 */
								obj_t BgL_namez00_4002;
								obj_t BgL_typez00_4005;

								BgL_namez00_4002 = BGl_symbol3377z00zz__objectz00;
								BgL_typez00_4005 = BGl_symbol3358z00zz__objectz00;
								{	/* Llib/object.scm 550 */
									obj_t BgL_v1313z00_4006;

									BgL_v1313z00_4006 = create_vector(((long) 9));
									VECTOR_SET(BgL_v1313z00_4006, ((long) 0), BgL_namez00_4002);
									VECTOR_SET(BgL_v1313z00_4006, ((long) 1),
										BGl_proc3376z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4006, ((long) 2),
										BGl_proc3375z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4006, ((long) 3), BFALSE);
									VECTOR_SET(BgL_v1313z00_4006, ((long) 4),
										BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4006, ((long) 5), BFALSE);
									VECTOR_SET(BgL_v1313z00_4006, ((long) 6), BFALSE);
									VECTOR_SET(BgL_v1313z00_4006, ((long) 7), BgL_typez00_4005);
									VECTOR_SET(BgL_v1313z00_4006, ((long) 8), BTRUE);
									BgL_res2825z00_4017 = BgL_v1313z00_4006;
							}}
							BgL_arg1885z00_1787 = BgL_res2825z00_4017;
						}
						VECTOR_SET(BgL_v1331z00_1786, ((long) 0), BgL_arg1885z00_1787);
					}
					{	/* Llib/object.scm 220 */
						obj_t BgL_arg1891z00_1797;

						{	/* Llib/object.scm 220 */
							obj_t BgL_res2826z00_4034;

							{	/* Llib/object.scm 220 */
								obj_t BgL_namez00_4019;
								obj_t BgL_typez00_4022;

								BgL_namez00_4019 = BGl_symbol3381z00zz__objectz00;
								BgL_typez00_4022 = BGl_symbol3358z00zz__objectz00;
								{	/* Llib/object.scm 550 */
									obj_t BgL_v1313z00_4023;

									BgL_v1313z00_4023 = create_vector(((long) 9));
									VECTOR_SET(BgL_v1313z00_4023, ((long) 0), BgL_namez00_4019);
									VECTOR_SET(BgL_v1313z00_4023, ((long) 1),
										BGl_proc3380z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4023, ((long) 2),
										BGl_proc3379z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4023, ((long) 3), BFALSE);
									VECTOR_SET(BgL_v1313z00_4023, ((long) 4),
										BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4023, ((long) 5), BFALSE);
									VECTOR_SET(BgL_v1313z00_4023, ((long) 6), BFALSE);
									VECTOR_SET(BgL_v1313z00_4023, ((long) 7), BgL_typez00_4022);
									VECTOR_SET(BgL_v1313z00_4023, ((long) 8), BFALSE);
									BgL_res2826z00_4034 = BgL_v1313z00_4023;
							}}
							BgL_arg1891z00_1797 = BgL_res2826z00_4034;
						}
						VECTOR_SET(BgL_v1331z00_1786, ((long) 1), BgL_arg1891z00_1797);
					}
					{	/* Llib/object.scm 220 */
						obj_t BgL_arg1896z00_1807;

						{	/* Llib/object.scm 220 */
							obj_t BgL_res2827z00_4051;

							{	/* Llib/object.scm 220 */
								obj_t BgL_namez00_4036;
								obj_t BgL_typez00_4039;

								BgL_namez00_4036 = BGl_symbol3358z00zz__objectz00;
								BgL_typez00_4039 = BGl_symbol3358z00zz__objectz00;
								{	/* Llib/object.scm 550 */
									obj_t BgL_v1313z00_4040;

									BgL_v1313z00_4040 = create_vector(((long) 9));
									VECTOR_SET(BgL_v1313z00_4040, ((long) 0), BgL_namez00_4036);
									VECTOR_SET(BgL_v1313z00_4040, ((long) 1),
										BGl_proc3384z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4040, ((long) 2),
										BGl_proc3383z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4040, ((long) 3), BFALSE);
									VECTOR_SET(BgL_v1313z00_4040, ((long) 4),
										BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4040, ((long) 5), BFALSE);
									VECTOR_SET(BgL_v1313z00_4040, ((long) 6), BFALSE);
									VECTOR_SET(BgL_v1313z00_4040, ((long) 7), BgL_typez00_4039);
									VECTOR_SET(BgL_v1313z00_4040, ((long) 8), BFALSE);
									BgL_res2827z00_4051 = BgL_v1313z00_4040;
							}}
							BgL_arg1896z00_1807 = BgL_res2827z00_4051;
						}
						VECTOR_SET(BgL_v1331z00_1786, ((long) 2), BgL_arg1896z00_1807);
					}
					BgL_arg1878z00_1769 = BgL_v1331z00_1786;
				}
				{	/* Llib/object.scm 220 */
					obj_t BgL_v1332z00_1817;

					BgL_v1332z00_1817 = create_vector(((long) 0));
					BgL_arg1879z00_1770 = BgL_v1332z00_1817;
				}
				BGl_z62errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3388z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62exceptionz62zz__objectz00, ((long) 27645),
					BGl_proc3387z00zz__objectz00, BGl_proc3386z00zz__objectz00, BFALSE,
					BGl_proc3385z00zz__objectz00, BFALSE, BgL_arg1878z00_1769,
					BgL_arg1879z00_1770);
			}
			{	/* Llib/object.scm 224 */
				obj_t BgL_arg1904z00_1824;
				obj_t BgL_arg1905z00_1825;

				{	/* Llib/object.scm 224 */
					obj_t BgL_v1333z00_1842;

					BgL_v1333z00_1842 = create_vector(((long) 1));
					{	/* Llib/object.scm 224 */
						obj_t BgL_arg1911z00_1843;

						{	/* Llib/object.scm 224 */
							obj_t BgL_res2830z00_4081;

							{	/* Llib/object.scm 224 */
								obj_t BgL_namez00_4066;
								obj_t BgL_typez00_4069;

								BgL_namez00_4066 = BGl_symbol3392z00zz__objectz00;
								BgL_typez00_4069 = BGl_symbol3358z00zz__objectz00;
								{	/* Llib/object.scm 550 */
									obj_t BgL_v1313z00_4070;

									BgL_v1313z00_4070 = create_vector(((long) 9));
									VECTOR_SET(BgL_v1313z00_4070, ((long) 0), BgL_namez00_4066);
									VECTOR_SET(BgL_v1313z00_4070, ((long) 1),
										BGl_proc3391z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4070, ((long) 2),
										BGl_proc3390z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4070, ((long) 3), BFALSE);
									VECTOR_SET(BgL_v1313z00_4070, ((long) 4),
										BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4070, ((long) 5), BFALSE);
									VECTOR_SET(BgL_v1313z00_4070, ((long) 6), BFALSE);
									VECTOR_SET(BgL_v1313z00_4070, ((long) 7), BgL_typez00_4069);
									VECTOR_SET(BgL_v1313z00_4070, ((long) 8), BFALSE);
									BgL_res2830z00_4081 = BgL_v1313z00_4070;
							}}
							BgL_arg1911z00_1843 = BgL_res2830z00_4081;
						}
						VECTOR_SET(BgL_v1333z00_1842, ((long) 0), BgL_arg1911z00_1843);
					}
					BgL_arg1904z00_1824 = BgL_v1333z00_1842;
				}
				{	/* Llib/object.scm 224 */
					obj_t BgL_v1334z00_1853;

					BgL_v1334z00_1853 = create_vector(((long) 0));
					BgL_arg1905z00_1825 = BgL_v1334z00_1853;
				}
				BGl_z62typezd2errorzb0zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3397z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62errorz62zz__objectz00, ((long) 59148),
					BGl_proc3396z00zz__objectz00, BGl_proc3395z00zz__objectz00, BFALSE,
					BGl_proc3394z00zz__objectz00, BFALSE, BgL_arg1904z00_1824,
					BgL_arg1905z00_1825);
			}
			{	/* Llib/object.scm 226 */
				obj_t BgL_arg1919z00_1860;
				obj_t BgL_arg1920z00_1861;

				{	/* Llib/object.scm 226 */
					obj_t BgL_v1335z00_1878;

					BgL_v1335z00_1878 = create_vector(((long) 1));
					{	/* Llib/object.scm 226 */
						obj_t BgL_arg1927z00_1879;

						{	/* Llib/object.scm 226 */
							obj_t BgL_res2833z00_4111;

							{	/* Llib/object.scm 226 */
								obj_t BgL_namez00_4096;
								obj_t BgL_typez00_4099;

								BgL_namez00_4096 = BGl_symbol3401z00zz__objectz00;
								BgL_typez00_4099 = BGl_symbol3358z00zz__objectz00;
								{	/* Llib/object.scm 550 */
									obj_t BgL_v1313z00_4100;

									BgL_v1313z00_4100 = create_vector(((long) 9));
									VECTOR_SET(BgL_v1313z00_4100, ((long) 0), BgL_namez00_4096);
									VECTOR_SET(BgL_v1313z00_4100, ((long) 1),
										BGl_proc3400z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4100, ((long) 2),
										BGl_proc3399z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4100, ((long) 3), BFALSE);
									VECTOR_SET(BgL_v1313z00_4100, ((long) 4),
										BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4100, ((long) 5), BFALSE);
									VECTOR_SET(BgL_v1313z00_4100, ((long) 6), BFALSE);
									VECTOR_SET(BgL_v1313z00_4100, ((long) 7), BgL_typez00_4099);
									VECTOR_SET(BgL_v1313z00_4100, ((long) 8), BFALSE);
									BgL_res2833z00_4111 = BgL_v1313z00_4100;
							}}
							BgL_arg1927z00_1879 = BgL_res2833z00_4111;
						}
						VECTOR_SET(BgL_v1335z00_1878, ((long) 0), BgL_arg1927z00_1879);
					}
					BgL_arg1919z00_1860 = BgL_v1335z00_1878;
				}
				{	/* Llib/object.scm 226 */
					obj_t BgL_v1336z00_1889;

					BgL_v1336z00_1889 = create_vector(((long) 0));
					BgL_arg1920z00_1861 = BgL_v1336z00_1889;
				}
				BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3406z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62errorz62zz__objectz00, ((long) 16959),
					BGl_proc3405z00zz__objectz00, BGl_proc3404z00zz__objectz00, BFALSE,
					BGl_proc3403z00zz__objectz00, BFALSE, BgL_arg1919z00_1860,
					BgL_arg1920z00_1861);
			}
			{	/* Llib/object.scm 228 */
				obj_t BgL_arg1935z00_1896;
				obj_t BgL_arg1936z00_1897;

				{	/* Llib/object.scm 228 */
					obj_t BgL_v1337z00_1913;

					BgL_v1337z00_1913 = create_vector(((long) 0));
					BgL_arg1935z00_1896 = BgL_v1337z00_1913;
				}
				{	/* Llib/object.scm 228 */
					obj_t BgL_v1338z00_1914;

					BgL_v1338z00_1914 = create_vector(((long) 0));
					BgL_arg1936z00_1897 = BgL_v1338z00_1914;
				}
				BGl_z62iozd2errorzb0zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3411z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62errorz62zz__objectz00, ((long) 63768),
					BGl_proc3410z00zz__objectz00, BGl_proc3409z00zz__objectz00, BFALSE,
					BGl_proc3408z00zz__objectz00, BFALSE, BgL_arg1935z00_1896,
					BgL_arg1936z00_1897);
			}
			{	/* Llib/object.scm 229 */
				obj_t BgL_arg1945z00_1921;
				obj_t BgL_arg1946z00_1922;

				{	/* Llib/object.scm 229 */
					obj_t BgL_v1339z00_1938;

					BgL_v1339z00_1938 = create_vector(((long) 0));
					BgL_arg1945z00_1921 = BgL_v1339z00_1938;
				}
				{	/* Llib/object.scm 229 */
					obj_t BgL_v1340z00_1939;

					BgL_v1340z00_1939 = create_vector(((long) 0));
					BgL_arg1946z00_1922 = BgL_v1340z00_1939;
				}
				BGl_z62iozd2portzd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3416z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62iozd2errorzb0zz__objectz00, ((long) 55783),
					BGl_proc3415z00zz__objectz00, BGl_proc3414z00zz__objectz00, BFALSE,
					BGl_proc3413z00zz__objectz00, BFALSE, BgL_arg1945z00_1921,
					BgL_arg1946z00_1922);
			}
			{	/* Llib/object.scm 230 */
				obj_t BgL_arg1956z00_1946;
				obj_t BgL_arg1957z00_1947;

				{	/* Llib/object.scm 230 */
					obj_t BgL_v1341z00_1963;

					BgL_v1341z00_1963 = create_vector(((long) 0));
					BgL_arg1956z00_1946 = BgL_v1341z00_1963;
				}
				{	/* Llib/object.scm 230 */
					obj_t BgL_v1342z00_1964;

					BgL_v1342z00_1964 = create_vector(((long) 0));
					BgL_arg1957z00_1947 = BgL_v1342z00_1964;
				}
				BGl_z62iozd2readzd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3421z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62iozd2portzd2errorz62zz__objectz00, ((long) 15829),
					BGl_proc3420z00zz__objectz00, BGl_proc3419z00zz__objectz00, BFALSE,
					BGl_proc3418z00zz__objectz00, BFALSE, BgL_arg1956z00_1946,
					BgL_arg1957z00_1947);
			}
			{	/* Llib/object.scm 231 */
				obj_t BgL_arg1966z00_1971;
				obj_t BgL_arg1967z00_1972;

				{	/* Llib/object.scm 231 */
					obj_t BgL_v1343z00_1988;

					BgL_v1343z00_1988 = create_vector(((long) 0));
					BgL_arg1966z00_1971 = BgL_v1343z00_1988;
				}
				{	/* Llib/object.scm 231 */
					obj_t BgL_v1344z00_1989;

					BgL_v1344z00_1989 = create_vector(((long) 0));
					BgL_arg1967z00_1972 = BgL_v1344z00_1989;
				}
				BGl_z62iozd2writezd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3426z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62iozd2portzd2errorz62zz__objectz00, ((long) 35845),
					BGl_proc3425z00zz__objectz00, BGl_proc3424z00zz__objectz00, BFALSE,
					BGl_proc3423z00zz__objectz00, BFALSE, BgL_arg1966z00_1971,
					BgL_arg1967z00_1972);
			}
			{	/* Llib/object.scm 232 */
				obj_t BgL_arg1976z00_1996;
				obj_t BgL_arg1977z00_1997;

				{	/* Llib/object.scm 232 */
					obj_t BgL_v1345z00_2013;

					BgL_v1345z00_2013 = create_vector(((long) 0));
					BgL_arg1976z00_1996 = BgL_v1345z00_2013;
				}
				{	/* Llib/object.scm 232 */
					obj_t BgL_v1346z00_2014;

					BgL_v1346z00_2014 = create_vector(((long) 0));
					BgL_arg1977z00_1997 = BgL_v1346z00_2014;
				}
				BGl_z62iozd2closedzd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3431z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62iozd2portzd2errorz62zz__objectz00, ((long) 8181),
					BGl_proc3430z00zz__objectz00, BGl_proc3429z00zz__objectz00, BFALSE,
					BGl_proc3428z00zz__objectz00, BFALSE, BgL_arg1976z00_1996,
					BgL_arg1977z00_1997);
			}
			{	/* Llib/object.scm 233 */
				obj_t BgL_arg1986z00_2021;
				obj_t BgL_arg1987z00_2022;

				{	/* Llib/object.scm 233 */
					obj_t BgL_v1347z00_2038;

					BgL_v1347z00_2038 = create_vector(((long) 0));
					BgL_arg1986z00_2021 = BgL_v1347z00_2038;
				}
				{	/* Llib/object.scm 233 */
					obj_t BgL_v1348z00_2039;

					BgL_v1348z00_2039 = create_vector(((long) 0));
					BgL_arg1987z00_2022 = BgL_v1348z00_2039;
				}
				BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3436z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62iozd2errorzb0zz__objectz00, ((long) 9299),
					BGl_proc3435z00zz__objectz00, BGl_proc3434z00zz__objectz00, BFALSE,
					BGl_proc3433z00zz__objectz00, BFALSE, BgL_arg1986z00_2021,
					BgL_arg1987z00_2022);
			}
			{	/* Llib/object.scm 234 */
				obj_t BgL_arg1997z00_2046;
				obj_t BgL_arg1998z00_2047;

				{	/* Llib/object.scm 234 */
					obj_t BgL_v1349z00_2063;

					BgL_v1349z00_2063 = create_vector(((long) 0));
					BgL_arg1997z00_2046 = BgL_v1349z00_2063;
				}
				{	/* Llib/object.scm 234 */
					obj_t BgL_v1350z00_2064;

					BgL_v1350z00_2064 = create_vector(((long) 0));
					BgL_arg1998z00_2047 = BgL_v1350z00_2064;
				}
				BGl_z62iozd2parsezd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3441z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62iozd2errorzb0zz__objectz00, ((long) 22094),
					BGl_proc3440z00zz__objectz00, BGl_proc3439z00zz__objectz00, BFALSE,
					BGl_proc3438z00zz__objectz00, BFALSE, BgL_arg1997z00_2046,
					BgL_arg1998z00_2047);
			}
			{	/* Llib/object.scm 235 */
				obj_t BgL_arg2008z00_2071;
				obj_t BgL_arg2010z00_2072;

				{	/* Llib/object.scm 235 */
					obj_t BgL_v1351z00_2088;

					BgL_v1351z00_2088 = create_vector(((long) 0));
					BgL_arg2008z00_2071 = BgL_v1351z00_2088;
				}
				{	/* Llib/object.scm 235 */
					obj_t BgL_v1352z00_2089;

					BgL_v1352z00_2089 = create_vector(((long) 0));
					BgL_arg2010z00_2072 = BgL_v1352z00_2089;
				}
				BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3446z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62iozd2errorzb0zz__objectz00, ((long) 40805),
					BGl_proc3445z00zz__objectz00, BGl_proc3444z00zz__objectz00, BFALSE,
					BGl_proc3443z00zz__objectz00, BFALSE, BgL_arg2008z00_2071,
					BgL_arg2010z00_2072);
			}
			{	/* Llib/object.scm 236 */
				obj_t BgL_arg2020z00_2096;
				obj_t BgL_arg2021z00_2097;

				{	/* Llib/object.scm 236 */
					obj_t BgL_v1353z00_2113;

					BgL_v1353z00_2113 = create_vector(((long) 0));
					BgL_arg2020z00_2096 = BgL_v1353z00_2113;
				}
				{	/* Llib/object.scm 236 */
					obj_t BgL_v1354z00_2114;

					BgL_v1354z00_2114 = create_vector(((long) 0));
					BgL_arg2021z00_2097 = BgL_v1354z00_2114;
				}
				BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3451z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62iozd2errorzb0zz__objectz00, ((long) 43586),
					BGl_proc3450z00zz__objectz00, BGl_proc3449z00zz__objectz00, BFALSE,
					BGl_proc3448z00zz__objectz00, BFALSE, BgL_arg2020z00_2096,
					BgL_arg2021z00_2097);
			}
			{	/* Llib/object.scm 237 */
				obj_t BgL_arg2033z00_2121;
				obj_t BgL_arg2034z00_2122;

				{	/* Llib/object.scm 237 */
					obj_t BgL_v1355z00_2138;

					BgL_v1355z00_2138 = create_vector(((long) 0));
					BgL_arg2033z00_2121 = BgL_v1355z00_2138;
				}
				{	/* Llib/object.scm 237 */
					obj_t BgL_v1356z00_2139;

					BgL_v1356z00_2139 = create_vector(((long) 0));
					BgL_arg2034z00_2122 = BgL_v1356z00_2139;
				}
				BGl_z62iozd2sigpipezd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3456z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62iozd2errorzb0zz__objectz00, ((long) 38838),
					BGl_proc3455z00zz__objectz00, BGl_proc3454z00zz__objectz00, BFALSE,
					BGl_proc3453z00zz__objectz00, BFALSE, BgL_arg2033z00_2121,
					BgL_arg2034z00_2122);
			}
			{	/* Llib/object.scm 238 */
				obj_t BgL_arg2044z00_2146;
				obj_t BgL_arg2045z00_2147;

				{	/* Llib/object.scm 238 */
					obj_t BgL_v1357z00_2163;

					BgL_v1357z00_2163 = create_vector(((long) 0));
					BgL_arg2044z00_2146 = BgL_v1357z00_2163;
				}
				{	/* Llib/object.scm 238 */
					obj_t BgL_v1358z00_2164;

					BgL_v1358z00_2164 = create_vector(((long) 0));
					BgL_arg2045z00_2147 = BgL_v1358z00_2164;
				}
				BGl_z62iozd2timeoutzd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3461z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62iozd2errorzb0zz__objectz00, ((long) 220),
					BGl_proc3460z00zz__objectz00, BGl_proc3459z00zz__objectz00, BFALSE,
					BGl_proc3458z00zz__objectz00, BFALSE, BgL_arg2044z00_2146,
					BgL_arg2045z00_2147);
			}
			{	/* Llib/object.scm 239 */
				obj_t BgL_arg2056z00_2171;
				obj_t BgL_arg2057z00_2172;

				{	/* Llib/object.scm 239 */
					obj_t BgL_v1359z00_2188;

					BgL_v1359z00_2188 = create_vector(((long) 0));
					BgL_arg2056z00_2171 = BgL_v1359z00_2188;
				}
				{	/* Llib/object.scm 239 */
					obj_t BgL_v1360z00_2189;

					BgL_v1360z00_2189 = create_vector(((long) 0));
					BgL_arg2057z00_2172 = BgL_v1360z00_2189;
				}
				BGl_z62iozd2connectionzd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3466z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62iozd2errorzb0zz__objectz00, ((long) 37032),
					BGl_proc3465z00zz__objectz00, BGl_proc3464z00zz__objectz00, BFALSE,
					BGl_proc3463z00zz__objectz00, BFALSE, BgL_arg2056z00_2171,
					BgL_arg2057z00_2172);
			}
			{	/* Llib/object.scm 241 */
				obj_t BgL_arg2068z00_2196;
				obj_t BgL_arg2069z00_2197;

				{	/* Llib/object.scm 241 */
					obj_t BgL_v1361z00_2213;

					BgL_v1361z00_2213 = create_vector(((long) 0));
					BgL_arg2068z00_2196 = BgL_v1361z00_2213;
				}
				{	/* Llib/object.scm 241 */
					obj_t BgL_v1362z00_2214;

					BgL_v1362z00_2214 = create_vector(((long) 0));
					BgL_arg2069z00_2197 = BgL_v1362z00_2214;
				}
				BGl_z62processzd2exceptionzb0zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3471z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62errorz62zz__objectz00, ((long) 8909),
					BGl_proc3470z00zz__objectz00, BGl_proc3469z00zz__objectz00, BFALSE,
					BGl_proc3468z00zz__objectz00, BFALSE, BgL_arg2068z00_2196,
					BgL_arg2069z00_2197);
			}
			{	/* Llib/object.scm 243 */
				obj_t BgL_arg2080z00_2221;
				obj_t BgL_arg2081z00_2222;

				{	/* Llib/object.scm 243 */
					obj_t BgL_v1363z00_2238;

					BgL_v1363z00_2238 = create_vector(((long) 0));
					BgL_arg2080z00_2221 = BgL_v1363z00_2238;
				}
				{	/* Llib/object.scm 243 */
					obj_t BgL_v1364z00_2239;

					BgL_v1364z00_2239 = create_vector(((long) 0));
					BgL_arg2081z00_2222 = BgL_v1364z00_2239;
				}
				BGl_z62stackzd2overflowzd2errorz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3476z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62errorz62zz__objectz00, ((long) 12371),
					BGl_proc3475z00zz__objectz00, BGl_proc3474z00zz__objectz00, BFALSE,
					BGl_proc3473z00zz__objectz00, BFALSE, BgL_arg2080z00_2221,
					BgL_arg2081z00_2222);
			}
			{	/* Llib/object.scm 245 */
				obj_t BgL_arg2090z00_2246;
				obj_t BgL_arg2091z00_2247;

				{	/* Llib/object.scm 245 */
					obj_t BgL_v1365z00_2261;

					BgL_v1365z00_2261 = create_vector(((long) 1));
					{	/* Llib/object.scm 245 */
						obj_t BgL_arg2097z00_2262;

						{	/* Llib/object.scm 245 */
							obj_t BgL_res2864z00_4323;

							{	/* Llib/object.scm 245 */
								obj_t BgL_namez00_4308;
								obj_t BgL_typez00_4311;

								BgL_namez00_4308 = BGl_symbol3481z00zz__objectz00;
								BgL_typez00_4311 = BGl_symbol3483z00zz__objectz00;
								{	/* Llib/object.scm 550 */
									obj_t BgL_v1313z00_4312;

									BgL_v1313z00_4312 = create_vector(((long) 9));
									VECTOR_SET(BgL_v1313z00_4312, ((long) 0), BgL_namez00_4308);
									VECTOR_SET(BgL_v1313z00_4312, ((long) 1),
										BGl_proc3480z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4312, ((long) 2),
										BGl_proc3479z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4312, ((long) 3), BFALSE);
									VECTOR_SET(BgL_v1313z00_4312, ((long) 4),
										BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4312, ((long) 5), BFALSE);
									VECTOR_SET(BgL_v1313z00_4312, ((long) 6),
										BGl_proc3478z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4312, ((long) 7), BgL_typez00_4311);
									VECTOR_SET(BgL_v1313z00_4312, ((long) 8), BFALSE);
									BgL_res2864z00_4323 = BgL_v1313z00_4312;
							}}
							BgL_arg2097z00_2262 = BgL_res2864z00_4323;
						}
						VECTOR_SET(BgL_v1365z00_2261, ((long) 0), BgL_arg2097z00_2262);
					}
					BgL_arg2090z00_2246 = BgL_v1365z00_2261;
				}
				{	/* Llib/object.scm 245 */
					obj_t BgL_v1366z00_2275;

					BgL_v1366z00_2275 = create_vector(((long) 0));
					BgL_arg2091z00_2247 = BgL_v1366z00_2275;
				}
				BGl_z62securityzd2exceptionzb0zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3488z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62exceptionz62zz__objectz00, ((long) 17221),
					BGl_proc3487z00zz__objectz00, BGl_proc3486z00zz__objectz00, BFALSE,
					BGl_proc3485z00zz__objectz00, BFALSE, BgL_arg2090z00_2246,
					BgL_arg2091z00_2247);
			}
			{	/* Llib/object.scm 247 */
				obj_t BgL_arg2108z00_2282;
				obj_t BgL_arg2109z00_2283;

				{	/* Llib/object.scm 247 */
					obj_t BgL_v1367z00_2299;

					BgL_v1367z00_2299 = create_vector(((long) 2));
					{	/* Llib/object.scm 247 */
						obj_t BgL_arg2116z00_2300;

						{	/* Llib/object.scm 247 */
							obj_t BgL_res2867z00_4353;

							{	/* Llib/object.scm 247 */
								obj_t BgL_namez00_4338;
								obj_t BgL_typez00_4341;

								BgL_namez00_4338 = BGl_symbol3358z00zz__objectz00;
								BgL_typez00_4341 = BGl_symbol3358z00zz__objectz00;
								{	/* Llib/object.scm 550 */
									obj_t BgL_v1313z00_4342;

									BgL_v1313z00_4342 = create_vector(((long) 9));
									VECTOR_SET(BgL_v1313z00_4342, ((long) 0), BgL_namez00_4338);
									VECTOR_SET(BgL_v1313z00_4342, ((long) 1),
										BGl_proc3492z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4342, ((long) 2),
										BGl_proc3491z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4342, ((long) 3), BFALSE);
									VECTOR_SET(BgL_v1313z00_4342, ((long) 4),
										BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4342, ((long) 5), BFALSE);
									VECTOR_SET(BgL_v1313z00_4342, ((long) 6),
										BGl_proc3490z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4342, ((long) 7), BgL_typez00_4341);
									VECTOR_SET(BgL_v1313z00_4342, ((long) 8), BFALSE);
									BgL_res2867z00_4353 = BgL_v1313z00_4342;
							}}
							BgL_arg2116z00_2300 = BgL_res2867z00_4353;
						}
						VECTOR_SET(BgL_v1367z00_2299, ((long) 0), BgL_arg2116z00_2300);
					}
					{	/* Llib/object.scm 247 */
						obj_t BgL_arg2123z00_2313;

						{	/* Llib/object.scm 247 */
							obj_t BgL_res2868z00_4370;

							{	/* Llib/object.scm 247 */
								obj_t BgL_namez00_4355;
								obj_t BgL_typez00_4358;

								BgL_namez00_4355 = BGl_symbol3496z00zz__objectz00;
								BgL_typez00_4358 = BGl_symbol3358z00zz__objectz00;
								{	/* Llib/object.scm 550 */
									obj_t BgL_v1313z00_4359;

									BgL_v1313z00_4359 = create_vector(((long) 9));
									VECTOR_SET(BgL_v1313z00_4359, ((long) 0), BgL_namez00_4355);
									VECTOR_SET(BgL_v1313z00_4359, ((long) 1),
										BGl_proc3495z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4359, ((long) 2),
										BGl_proc3494z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4359, ((long) 3), BFALSE);
									VECTOR_SET(BgL_v1313z00_4359, ((long) 4),
										BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4359, ((long) 5), BFALSE);
									VECTOR_SET(BgL_v1313z00_4359, ((long) 6),
										BGl_proc3493z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4359, ((long) 7), BgL_typez00_4358);
									VECTOR_SET(BgL_v1313z00_4359, ((long) 8), BFALSE);
									BgL_res2868z00_4370 = BgL_v1313z00_4359;
							}}
							BgL_arg2123z00_2313 = BgL_res2868z00_4370;
						}
						VECTOR_SET(BgL_v1367z00_2299, ((long) 1), BgL_arg2123z00_2313);
					}
					BgL_arg2108z00_2282 = BgL_v1367z00_2299;
				}
				{	/* Llib/object.scm 247 */
					obj_t BgL_v1368z00_2326;

					BgL_v1368z00_2326 = create_vector(((long) 0));
					BgL_arg2109z00_2283 = BgL_v1368z00_2326;
				}
				BGl_z62accesszd2controlzd2exceptionz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3501z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62securityzd2exceptionzb0zz__objectz00, ((long) 64249),
					BGl_proc3500z00zz__objectz00, BGl_proc3499z00zz__objectz00, BFALSE,
					BGl_proc3498z00zz__objectz00, BFALSE, BgL_arg2108z00_2282,
					BgL_arg2109z00_2283);
			}
			{	/* Llib/object.scm 251 */
				obj_t BgL_arg2134z00_2333;
				obj_t BgL_arg2135z00_2334;

				{	/* Llib/object.scm 251 */
					obj_t BgL_v1369z00_2348;

					BgL_v1369z00_2348 = create_vector(((long) 1));
					{	/* Llib/object.scm 251 */
						obj_t BgL_arg2142z00_2349;

						{	/* Llib/object.scm 251 */
							obj_t BgL_res2871z00_4400;

							{	/* Llib/object.scm 251 */
								obj_t BgL_namez00_4385;
								obj_t BgL_typez00_4388;

								BgL_namez00_4385 = BGl_symbol3505z00zz__objectz00;
								BgL_typez00_4388 = BGl_symbol3358z00zz__objectz00;
								{	/* Llib/object.scm 550 */
									obj_t BgL_v1313z00_4389;

									BgL_v1313z00_4389 = create_vector(((long) 9));
									VECTOR_SET(BgL_v1313z00_4389, ((long) 0), BgL_namez00_4385);
									VECTOR_SET(BgL_v1313z00_4389, ((long) 1),
										BGl_proc3504z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4389, ((long) 2),
										BGl_proc3503z00zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4389, ((long) 3), BFALSE);
									VECTOR_SET(BgL_v1313z00_4389, ((long) 4),
										BGl_makezd2classzd2fieldzd2envzd2zz__objectz00);
									VECTOR_SET(BgL_v1313z00_4389, ((long) 5), BFALSE);
									VECTOR_SET(BgL_v1313z00_4389, ((long) 6), BFALSE);
									VECTOR_SET(BgL_v1313z00_4389, ((long) 7), BgL_typez00_4388);
									VECTOR_SET(BgL_v1313z00_4389, ((long) 8), BFALSE);
									BgL_res2871z00_4400 = BgL_v1313z00_4389;
							}}
							BgL_arg2142z00_2349 = BgL_res2871z00_4400;
						}
						VECTOR_SET(BgL_v1369z00_2348, ((long) 0), BgL_arg2142z00_2349);
					}
					BgL_arg2134z00_2333 = BgL_v1369z00_2348;
				}
				{	/* Llib/object.scm 251 */
					obj_t BgL_v1370z00_2359;

					BgL_v1370z00_2359 = create_vector(((long) 0));
					BgL_arg2135z00_2334 = BgL_v1370z00_2359;
				}
				BGl_z62warningz62zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3510z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
					BGl_z62exceptionz62zz__objectz00, ((long) 33684),
					BGl_proc3509z00zz__objectz00, BGl_proc3508z00zz__objectz00, BFALSE,
					BGl_proc3507z00zz__objectz00, BFALSE, BgL_arg2134z00_2333,
					BgL_arg2135z00_2334);
			}
			{	/* Llib/object.scm 253 */
				obj_t BgL_arg2150z00_2366;
				obj_t BgL_arg2152z00_2367;

				{	/* Llib/object.scm 253 */
					obj_t BgL_v1371z00_2381;

					BgL_v1371z00_2381 = create_vector(((long) 0));
					BgL_arg2150z00_2366 = BgL_v1371z00_2381;
				}
				{	/* Llib/object.scm 253 */
					obj_t BgL_v1372z00_2382;

					BgL_v1372z00_2382 = create_vector(((long) 0));
					BgL_arg2152z00_2367 = BgL_v1372z00_2382;
				}
				return (BGl_z62evalzd2warningzb0zz__objectz00 =
					BGl_registerzd2classz12zc0zz__objectz00
					(BGl_symbol3515z00zz__objectz00, BGl_symbol3346z00zz__objectz00,
						BGl_z62warningz62zz__objectz00, ((long) 60822),
						BGl_proc3514z00zz__objectz00, BGl_proc3513z00zz__objectz00, BFALSE,
						BGl_proc3512z00zz__objectz00, BFALSE, BgL_arg2150z00_2366,
						BgL_arg2152z00_2367), BUNSPEC);
		}}

	}



/* &<@anonymous:2157> */
	obj_t BGl_z62zc3z04anonymousza32157ze3ze5zz__objectz00(obj_t BgL_envz00_5485,
		obj_t BgL_new1211z00_5486)
	{
		{	/* Llib/object.scm 253 */
			{
				BgL_z62evalzd2warningzb0_bglt BgL_auxz00_8525;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62evalzd2warningzb0_bglt) BgL_new1211z00_5486))))->
						BgL_fnamez00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62evalzd2warningzb0_bglt) BgL_new1211z00_5486))))->
						BgL_locationz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62evalzd2warningzb0_bglt) BgL_new1211z00_5486))))->
						BgL_stackz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62warningz62_bglt)
							COBJECT(((BgL_z62warningz62_bglt) ((BgL_z62evalzd2warningzb0_bglt)
										BgL_new1211z00_5486))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8525 = ((BgL_z62evalzd2warningzb0_bglt) BgL_new1211z00_5486);
				return ((obj_t) BgL_auxz00_8525);
			}
		}

	}



/* &lambda2155 */
	BgL_z62evalzd2warningzb0_bglt BGl_z62lambda2155z62zz__objectz00(obj_t
		BgL_envz00_5487)
	{
		{	/* Llib/object.scm 253 */
			{	/* Llib/object.scm 253 */
				BgL_z62evalzd2warningzb0_bglt BgL_new1210z00_6105;

				BgL_new1210z00_6105 =
					((BgL_z62evalzd2warningzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62evalzd2warningzb0_bgl))));
				{	/* Llib/object.scm 253 */
					long BgL_arg2156z00_6106;

					{	/* Llib/object.scm 253 */
						long BgL_res2875z00_6107;

						BgL_res2875z00_6107 =
							BGL_CLASS_INDEX(BGl_z62evalzd2warningzb0zz__objectz00);
						BgL_arg2156z00_6106 = BgL_res2875z00_6107;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1210z00_6105), BgL_arg2156z00_6106);
				}
				return BgL_new1210z00_6105;
			}
		}

	}



/* &lambda2153 */
	BgL_z62evalzd2warningzb0_bglt BGl_z62lambda2153z62zz__objectz00(obj_t
		BgL_envz00_5488, obj_t BgL_fname1206z00_5489,
		obj_t BgL_location1207z00_5490, obj_t BgL_stack1208z00_5491,
		obj_t BgL_args1209z00_5492)
	{
		{	/* Llib/object.scm 253 */
			{	/* Llib/object.scm 253 */
				BgL_z62evalzd2warningzb0_bglt BgL_new1274z00_6108;

				{	/* Llib/object.scm 253 */
					BgL_z62evalzd2warningzb0_bglt BgL_new1273z00_6109;

					BgL_new1273z00_6109 =
						((BgL_z62evalzd2warningzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62evalzd2warningzb0_bgl))));
					{	/* Llib/object.scm 253 */
						long BgL_arg2154z00_6110;

						{	/* Llib/object.scm 253 */
							long BgL_res2874z00_6111;

							BgL_res2874z00_6111 =
								BGL_CLASS_INDEX(BGl_z62evalzd2warningzb0zz__objectz00);
							BgL_arg2154z00_6110 = BgL_res2874z00_6111;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1273z00_6109), BgL_arg2154z00_6110);
					}
					BgL_new1274z00_6108 = BgL_new1273z00_6109;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1274z00_6108)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1206z00_5489), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1274z00_6108)))->BgL_locationz00) =
					((obj_t) BgL_location1207z00_5490), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1274z00_6108)))->BgL_stackz00) =
					((obj_t) BgL_stack1208z00_5491), BUNSPEC);
				((((BgL_z62warningz62_bglt) COBJECT(((BgL_z62warningz62_bglt)
									BgL_new1274z00_6108)))->BgL_argsz00) =
					((obj_t) BgL_args1209z00_5492), BUNSPEC);
				return BgL_new1274z00_6108;
			}
		}

	}



/* &<@anonymous:2141> */
	obj_t BGl_z62zc3z04anonymousza32141ze3ze5zz__objectz00(obj_t BgL_envz00_5493,
		obj_t BgL_new1204z00_5494)
	{
		{	/* Llib/object.scm 251 */
			{
				BgL_z62warningz62_bglt BgL_auxz00_8556;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62warningz62_bglt) BgL_new1204z00_5494))))->
						BgL_fnamez00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) ((BgL_z62warningz62_bglt)
										BgL_new1204z00_5494))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) ((BgL_z62warningz62_bglt)
										BgL_new1204z00_5494))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62warningz62_bglt) COBJECT(((BgL_z62warningz62_bglt)
									BgL_new1204z00_5494)))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8556 = ((BgL_z62warningz62_bglt) BgL_new1204z00_5494);
				return ((obj_t) BgL_auxz00_8556);
			}
		}

	}



/* &lambda2138 */
	BgL_z62warningz62_bglt BGl_z62lambda2138z62zz__objectz00(obj_t
		BgL_envz00_5495)
	{
		{	/* Llib/object.scm 251 */
			{	/* Llib/object.scm 251 */
				BgL_z62warningz62_bglt BgL_new1203z00_6113;

				BgL_new1203z00_6113 =
					((BgL_z62warningz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62warningz62_bgl))));
				{	/* Llib/object.scm 251 */
					long BgL_arg2140z00_6114;

					{	/* Llib/object.scm 251 */
						long BgL_res2873z00_6115;

						BgL_res2873z00_6115 =
							BGL_CLASS_INDEX(BGl_z62warningz62zz__objectz00);
						BgL_arg2140z00_6114 = BgL_res2873z00_6115;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1203z00_6113), BgL_arg2140z00_6114);
				}
				return BgL_new1203z00_6113;
			}
		}

	}



/* &lambda2136 */
	BgL_z62warningz62_bglt BGl_z62lambda2136z62zz__objectz00(obj_t
		BgL_envz00_5496, obj_t BgL_fname1199z00_5497,
		obj_t BgL_location1200z00_5498, obj_t BgL_stack1201z00_5499,
		obj_t BgL_args1202z00_5500)
	{
		{	/* Llib/object.scm 251 */
			{	/* Llib/object.scm 251 */
				BgL_z62warningz62_bglt BgL_new1272z00_6116;

				{	/* Llib/object.scm 251 */
					BgL_z62warningz62_bglt BgL_new1271z00_6117;

					BgL_new1271z00_6117 =
						((BgL_z62warningz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62warningz62_bgl))));
					{	/* Llib/object.scm 251 */
						long BgL_arg2137z00_6118;

						{	/* Llib/object.scm 251 */
							long BgL_res2872z00_6119;

							BgL_res2872z00_6119 =
								BGL_CLASS_INDEX(BGl_z62warningz62zz__objectz00);
							BgL_arg2137z00_6118 = BgL_res2872z00_6119;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1271z00_6117), BgL_arg2137z00_6118);
					}
					BgL_new1272z00_6116 = BgL_new1271z00_6117;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1272z00_6116)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1199z00_5497), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1272z00_6116)))->BgL_locationz00) =
					((obj_t) BgL_location1200z00_5498), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1272z00_6116)))->BgL_stackz00) =
					((obj_t) BgL_stack1201z00_5499), BUNSPEC);
				((((BgL_z62warningz62_bglt) COBJECT(BgL_new1272z00_6116))->
						BgL_argsz00) = ((obj_t) BgL_args1202z00_5500), BUNSPEC);
				return BgL_new1272z00_6116;
			}
		}

	}



/* &lambda2146 */
	obj_t BGl_z62lambda2146z62zz__objectz00(obj_t BgL_envz00_5501,
		obj_t BgL_oz00_5502, obj_t BgL_vz00_5503)
	{
		{	/* Llib/object.scm 251 */
			return
				((((BgL_z62warningz62_bglt) COBJECT(
							((BgL_z62warningz62_bglt) BgL_oz00_5502)))->BgL_argsz00) =
				((obj_t) BgL_vz00_5503), BUNSPEC);
		}

	}



/* &lambda2145 */
	obj_t BGl_z62lambda2145z62zz__objectz00(obj_t BgL_envz00_5504,
		obj_t BgL_oz00_5505)
	{
		{	/* Llib/object.scm 251 */
			return
				(((BgL_z62warningz62_bglt) COBJECT(
						((BgL_z62warningz62_bglt) BgL_oz00_5505)))->BgL_argsz00);
		}

	}



/* &<@anonymous:2115> */
	obj_t BGl_z62zc3z04anonymousza32115ze3ze5zz__objectz00(obj_t BgL_envz00_5506,
		obj_t BgL_new1197z00_5507)
	{
		{	/* Llib/object.scm 247 */
			{
				BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_auxz00_8589;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62accesszd2controlzd2exceptionz62_bglt)
										BgL_new1197z00_5507))))->BgL_fnamez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62accesszd2controlzd2exceptionz62_bglt)
										BgL_new1197z00_5507))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62accesszd2controlzd2exceptionz62_bglt)
										BgL_new1197z00_5507))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62securityzd2exceptionzb0_bglt)
							COBJECT(((BgL_z62securityzd2exceptionzb0_bglt) (
										(BgL_z62accesszd2controlzd2exceptionz62_bglt)
										BgL_new1197z00_5507))))->BgL_messagez00) =
					((obj_t) BGl_string3317z00zz__objectz00), BUNSPEC);
				((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
							COBJECT(((BgL_z62accesszd2controlzd2exceptionz62_bglt)
									BgL_new1197z00_5507)))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
							COBJECT(((BgL_z62accesszd2controlzd2exceptionz62_bglt)
									BgL_new1197z00_5507)))->BgL_permissionz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8589 =
					((BgL_z62accesszd2controlzd2exceptionz62_bglt) BgL_new1197z00_5507);
				return ((obj_t) BgL_auxz00_8589);
			}
		}

	}



/* &lambda2112 */
	BgL_z62accesszd2controlzd2exceptionz62_bglt
		BGl_z62lambda2112z62zz__objectz00(obj_t BgL_envz00_5508)
	{
		{	/* Llib/object.scm 247 */
			{	/* Llib/object.scm 247 */
				BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_new1196z00_6123;

				BgL_new1196z00_6123 =
					((BgL_z62accesszd2controlzd2exceptionz62_bglt)
					BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62accesszd2controlzd2exceptionz62_bgl))));
				{	/* Llib/object.scm 247 */
					long BgL_arg2114z00_6124;

					{	/* Llib/object.scm 247 */
						long BgL_res2870z00_6125;

						BgL_res2870z00_6125 =
							BGL_CLASS_INDEX
							(BGl_z62accesszd2controlzd2exceptionz62zz__objectz00);
						BgL_arg2114z00_6124 = BgL_res2870z00_6125;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1196z00_6123), BgL_arg2114z00_6124);
				}
				return BgL_new1196z00_6123;
			}
		}

	}



/* &lambda2110 */
	BgL_z62accesszd2controlzd2exceptionz62_bglt
		BGl_z62lambda2110z62zz__objectz00(obj_t BgL_envz00_5509,
		obj_t BgL_fname1190z00_5510, obj_t BgL_location1191z00_5511,
		obj_t BgL_stack1192z00_5512, obj_t BgL_message1193z00_5513,
		obj_t BgL_obj1194z00_5514, obj_t BgL_permission1195z00_5515)
	{
		{	/* Llib/object.scm 247 */
			{	/* Llib/object.scm 247 */
				BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_new1270z00_6127;

				{	/* Llib/object.scm 247 */
					BgL_z62accesszd2controlzd2exceptionz62_bglt BgL_new1269z00_6128;

					BgL_new1269z00_6128 =
						((BgL_z62accesszd2controlzd2exceptionz62_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62accesszd2controlzd2exceptionz62_bgl))));
					{	/* Llib/object.scm 247 */
						long BgL_arg2111z00_6129;

						{	/* Llib/object.scm 247 */
							long BgL_res2869z00_6130;

							BgL_res2869z00_6130 =
								BGL_CLASS_INDEX
								(BGl_z62accesszd2controlzd2exceptionz62zz__objectz00);
							BgL_arg2111z00_6129 = BgL_res2869z00_6130;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1269z00_6128), BgL_arg2111z00_6129);
					}
					BgL_new1270z00_6127 = BgL_new1269z00_6128;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1270z00_6127)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1190z00_5510), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1270z00_6127)))->BgL_locationz00) =
					((obj_t) BgL_location1191z00_5511), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1270z00_6127)))->BgL_stackz00) =
					((obj_t) BgL_stack1192z00_5512), BUNSPEC);
				((((BgL_z62securityzd2exceptionzb0_bglt)
							COBJECT(((BgL_z62securityzd2exceptionzb0_bglt)
									BgL_new1270z00_6127)))->BgL_messagez00) =
					((obj_t) ((obj_t) BgL_message1193z00_5513)), BUNSPEC);
				((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
							COBJECT(BgL_new1270z00_6127))->BgL_objz00) =
					((obj_t) BgL_obj1194z00_5514), BUNSPEC);
				((((BgL_z62accesszd2controlzd2exceptionz62_bglt)
							COBJECT(BgL_new1270z00_6127))->BgL_permissionz00) =
					((obj_t) BgL_permission1195z00_5515), BUNSPEC);
				return BgL_new1270z00_6127;
			}
		}

	}



/* &<@anonymous:2130> */
	obj_t BGl_z62zc3z04anonymousza32130ze3ze5zz__objectz00(obj_t BgL_envz00_5516)
	{
		{	/* Llib/object.scm 247 */
			return BUNSPEC;
		}

	}



/* &lambda2129 */
	obj_t BGl_z62lambda2129z62zz__objectz00(obj_t BgL_envz00_5517,
		obj_t BgL_oz00_5518, obj_t BgL_vz00_5519)
	{
		{	/* Llib/object.scm 247 */
			return
				((((BgL_z62accesszd2controlzd2exceptionz62_bglt) COBJECT(
							((BgL_z62accesszd2controlzd2exceptionz62_bglt) BgL_oz00_5518)))->
					BgL_permissionz00) = ((obj_t) BgL_vz00_5519), BUNSPEC);
		}

	}



/* &lambda2128 */
	obj_t BGl_z62lambda2128z62zz__objectz00(obj_t BgL_envz00_5520,
		obj_t BgL_oz00_5521)
	{
		{	/* Llib/object.scm 247 */
			return
				(((BgL_z62accesszd2controlzd2exceptionz62_bglt) COBJECT(
						((BgL_z62accesszd2controlzd2exceptionz62_bglt) BgL_oz00_5521)))->
				BgL_permissionz00);
		}

	}



/* &<@anonymous:2122> */
	obj_t BGl_z62zc3z04anonymousza32122ze3ze5zz__objectz00(obj_t BgL_envz00_5522)
	{
		{	/* Llib/object.scm 247 */
			return BUNSPEC;
		}

	}



/* &lambda2121 */
	obj_t BGl_z62lambda2121z62zz__objectz00(obj_t BgL_envz00_5523,
		obj_t BgL_oz00_5524, obj_t BgL_vz00_5525)
	{
		{	/* Llib/object.scm 247 */
			return
				((((BgL_z62accesszd2controlzd2exceptionz62_bglt) COBJECT(
							((BgL_z62accesszd2controlzd2exceptionz62_bglt) BgL_oz00_5524)))->
					BgL_objz00) = ((obj_t) BgL_vz00_5525), BUNSPEC);
		}

	}



/* &lambda2120 */
	obj_t BGl_z62lambda2120z62zz__objectz00(obj_t BgL_envz00_5526,
		obj_t BgL_oz00_5527)
	{
		{	/* Llib/object.scm 247 */
			return
				(((BgL_z62accesszd2controlzd2exceptionz62_bglt) COBJECT(
						((BgL_z62accesszd2controlzd2exceptionz62_bglt) BgL_oz00_5527)))->
				BgL_objz00);
		}

	}



/* &<@anonymous:2096> */
	obj_t BGl_z62zc3z04anonymousza32096ze3ze5zz__objectz00(obj_t BgL_envz00_5528,
		obj_t BgL_new1188z00_5529)
	{
		{	/* Llib/object.scm 245 */
			{
				BgL_z62securityzd2exceptionzb0_bglt BgL_auxz00_8635;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62securityzd2exceptionzb0_bglt)
										BgL_new1188z00_5529))))->BgL_fnamez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62securityzd2exceptionzb0_bglt)
										BgL_new1188z00_5529))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62securityzd2exceptionzb0_bglt)
										BgL_new1188z00_5529))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62securityzd2exceptionzb0_bglt)
							COBJECT(((BgL_z62securityzd2exceptionzb0_bglt)
									BgL_new1188z00_5529)))->BgL_messagez00) =
					((obj_t) BGl_string3317z00zz__objectz00), BUNSPEC);
				BgL_auxz00_8635 =
					((BgL_z62securityzd2exceptionzb0_bglt) BgL_new1188z00_5529);
				return ((obj_t) BgL_auxz00_8635);
			}
		}

	}



/* &lambda2094 */
	BgL_z62securityzd2exceptionzb0_bglt BGl_z62lambda2094z62zz__objectz00(obj_t
		BgL_envz00_5530)
	{
		{	/* Llib/object.scm 245 */
			{	/* Llib/object.scm 245 */
				BgL_z62securityzd2exceptionzb0_bglt BgL_new1187z00_6136;

				BgL_new1187z00_6136 =
					((BgL_z62securityzd2exceptionzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62securityzd2exceptionzb0_bgl))));
				{	/* Llib/object.scm 245 */
					long BgL_arg2095z00_6137;

					{	/* Llib/object.scm 245 */
						long BgL_res2866z00_6138;

						BgL_res2866z00_6138 =
							BGL_CLASS_INDEX(BGl_z62securityzd2exceptionzb0zz__objectz00);
						BgL_arg2095z00_6137 = BgL_res2866z00_6138;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1187z00_6136), BgL_arg2095z00_6137);
				}
				return BgL_new1187z00_6136;
			}
		}

	}



/* &lambda2092 */
	BgL_z62securityzd2exceptionzb0_bglt BGl_z62lambda2092z62zz__objectz00(obj_t
		BgL_envz00_5531, obj_t BgL_fname1183z00_5532,
		obj_t BgL_location1184z00_5533, obj_t BgL_stack1185z00_5534,
		obj_t BgL_message1186z00_5535)
	{
		{	/* Llib/object.scm 245 */
			{	/* Llib/object.scm 245 */
				BgL_z62securityzd2exceptionzb0_bglt BgL_new1268z00_6140;

				{	/* Llib/object.scm 245 */
					BgL_z62securityzd2exceptionzb0_bglt BgL_new1267z00_6141;

					BgL_new1267z00_6141 =
						((BgL_z62securityzd2exceptionzb0_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62securityzd2exceptionzb0_bgl))));
					{	/* Llib/object.scm 245 */
						long BgL_arg2093z00_6142;

						{	/* Llib/object.scm 245 */
							long BgL_res2865z00_6143;

							BgL_res2865z00_6143 =
								BGL_CLASS_INDEX(BGl_z62securityzd2exceptionzb0zz__objectz00);
							BgL_arg2093z00_6142 = BgL_res2865z00_6143;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1267z00_6141), BgL_arg2093z00_6142);
					}
					BgL_new1268z00_6140 = BgL_new1267z00_6141;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1268z00_6140)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1183z00_5532), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1268z00_6140)))->BgL_locationz00) =
					((obj_t) BgL_location1184z00_5533), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1268z00_6140)))->BgL_stackz00) =
					((obj_t) BgL_stack1185z00_5534), BUNSPEC);
				((((BgL_z62securityzd2exceptionzb0_bglt) COBJECT(BgL_new1268z00_6140))->
						BgL_messagez00) =
					((obj_t) ((obj_t) BgL_message1186z00_5535)), BUNSPEC);
				return BgL_new1268z00_6140;
			}
		}

	}



/* &<@anonymous:2104> */
	obj_t BGl_z62zc3z04anonymousza32104ze3ze5zz__objectz00(obj_t BgL_envz00_5536)
	{
		{	/* Llib/object.scm 245 */
			return BGl_string3317z00zz__objectz00;
		}

	}



/* &lambda2103 */
	obj_t BGl_z62lambda2103z62zz__objectz00(obj_t BgL_envz00_5537,
		obj_t BgL_oz00_5538, obj_t BgL_vz00_5539)
	{
		{	/* Llib/object.scm 245 */
			return
				((((BgL_z62securityzd2exceptionzb0_bglt) COBJECT(
							((BgL_z62securityzd2exceptionzb0_bglt) BgL_oz00_5538)))->
					BgL_messagez00) = ((obj_t) ((obj_t) BgL_vz00_5539)), BUNSPEC);
		}

	}



/* &lambda2102 */
	obj_t BGl_z62lambda2102z62zz__objectz00(obj_t BgL_envz00_5540,
		obj_t BgL_oz00_5541)
	{
		{	/* Llib/object.scm 245 */
			return
				(((BgL_z62securityzd2exceptionzb0_bglt) COBJECT(
						((BgL_z62securityzd2exceptionzb0_bglt) BgL_oz00_5541)))->
				BgL_messagez00);
		}

	}



/* &<@anonymous:2086> */
	obj_t BGl_z62zc3z04anonymousza32086ze3ze5zz__objectz00(obj_t BgL_envz00_5542,
		obj_t BgL_new1181z00_5543)
	{
		{	/* Llib/object.scm 243 */
			{
				BgL_z62stackzd2overflowzd2errorz62_bglt BgL_auxz00_8670;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62stackzd2overflowzd2errorz62_bglt)
										BgL_new1181z00_5543))))->BgL_fnamez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62stackzd2overflowzd2errorz62_bglt)
										BgL_new1181z00_5543))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62stackzd2overflowzd2errorz62_bglt)
										BgL_new1181z00_5543))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62stackzd2overflowzd2errorz62_bglt)
										BgL_new1181z00_5543))))->BgL_procz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62stackzd2overflowzd2errorz62_bglt)
										BgL_new1181z00_5543))))->BgL_msgz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62stackzd2overflowzd2errorz62_bglt)
										BgL_new1181z00_5543))))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8670 =
					((BgL_z62stackzd2overflowzd2errorz62_bglt) BgL_new1181z00_5543);
				return ((obj_t) BgL_auxz00_8670);
			}
		}

	}



/* &lambda2084 */
	BgL_z62stackzd2overflowzd2errorz62_bglt
		BGl_z62lambda2084z62zz__objectz00(obj_t BgL_envz00_5544)
	{
		{	/* Llib/object.scm 243 */
			{	/* Llib/object.scm 243 */
				BgL_z62stackzd2overflowzd2errorz62_bglt BgL_new1180z00_6148;

				BgL_new1180z00_6148 =
					((BgL_z62stackzd2overflowzd2errorz62_bglt)
					BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62stackzd2overflowzd2errorz62_bgl))));
				{	/* Llib/object.scm 243 */
					long BgL_arg2085z00_6149;

					{	/* Llib/object.scm 243 */
						long BgL_res2863z00_6150;

						BgL_res2863z00_6150 =
							BGL_CLASS_INDEX(BGl_z62stackzd2overflowzd2errorz62zz__objectz00);
						BgL_arg2085z00_6149 = BgL_res2863z00_6150;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1180z00_6148), BgL_arg2085z00_6149);
				}
				return BgL_new1180z00_6148;
			}
		}

	}



/* &lambda2082 */
	BgL_z62stackzd2overflowzd2errorz62_bglt
		BGl_z62lambda2082z62zz__objectz00(obj_t BgL_envz00_5545,
		obj_t BgL_fname1173z00_5546, obj_t BgL_location1174z00_5547,
		obj_t BgL_stack1175z00_5548, obj_t BgL_proc1176z00_5549,
		obj_t BgL_msg1177z00_5550, obj_t BgL_obj1178z00_5551)
	{
		{	/* Llib/object.scm 243 */
			{	/* Llib/object.scm 243 */
				BgL_z62stackzd2overflowzd2errorz62_bglt BgL_new1266z00_6151;

				{	/* Llib/object.scm 243 */
					BgL_z62stackzd2overflowzd2errorz62_bglt BgL_new1265z00_6152;

					BgL_new1265z00_6152 =
						((BgL_z62stackzd2overflowzd2errorz62_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62stackzd2overflowzd2errorz62_bgl))));
					{	/* Llib/object.scm 243 */
						long BgL_arg2083z00_6153;

						{	/* Llib/object.scm 243 */
							long BgL_res2862z00_6154;

							BgL_res2862z00_6154 =
								BGL_CLASS_INDEX
								(BGl_z62stackzd2overflowzd2errorz62zz__objectz00);
							BgL_arg2083z00_6153 = BgL_res2862z00_6154;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1265z00_6152), BgL_arg2083z00_6153);
					}
					BgL_new1266z00_6151 = BgL_new1265z00_6152;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1266z00_6151)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1173z00_5546), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1266z00_6151)))->BgL_locationz00) =
					((obj_t) BgL_location1174z00_5547), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1266z00_6151)))->BgL_stackz00) =
					((obj_t) BgL_stack1175z00_5548), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1266z00_6151)))->BgL_procz00) =
					((obj_t) BgL_proc1176z00_5549), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1266z00_6151)))->BgL_msgz00) =
					((obj_t) BgL_msg1177z00_5550), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1266z00_6151)))->BgL_objz00) =
					((obj_t) BgL_obj1178z00_5551), BUNSPEC);
				return BgL_new1266z00_6151;
			}
		}

	}



/* &<@anonymous:2076> */
	obj_t BGl_z62zc3z04anonymousza32076ze3ze5zz__objectz00(obj_t BgL_envz00_5552,
		obj_t BgL_new1171z00_5553)
	{
		{	/* Llib/object.scm 241 */
			{
				BgL_z62processzd2exceptionzb0_bglt BgL_auxz00_8711;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62processzd2exceptionzb0_bglt)
										BgL_new1171z00_5553))))->BgL_fnamez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62processzd2exceptionzb0_bglt)
										BgL_new1171z00_5553))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62processzd2exceptionzb0_bglt)
										BgL_new1171z00_5553))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62processzd2exceptionzb0_bglt)
										BgL_new1171z00_5553))))->BgL_procz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62processzd2exceptionzb0_bglt)
										BgL_new1171z00_5553))))->BgL_msgz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62processzd2exceptionzb0_bglt)
										BgL_new1171z00_5553))))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8711 =
					((BgL_z62processzd2exceptionzb0_bglt) BgL_new1171z00_5553);
				return ((obj_t) BgL_auxz00_8711);
			}
		}

	}



/* &lambda2072 */
	BgL_z62processzd2exceptionzb0_bglt BGl_z62lambda2072z62zz__objectz00(obj_t
		BgL_envz00_5554)
	{
		{	/* Llib/object.scm 241 */
			{	/* Llib/object.scm 241 */
				BgL_z62processzd2exceptionzb0_bglt BgL_new1170z00_6156;

				BgL_new1170z00_6156 =
					((BgL_z62processzd2exceptionzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62processzd2exceptionzb0_bgl))));
				{	/* Llib/object.scm 241 */
					long BgL_arg2075z00_6157;

					{	/* Llib/object.scm 241 */
						long BgL_res2861z00_6158;

						BgL_res2861z00_6158 =
							BGL_CLASS_INDEX(BGl_z62processzd2exceptionzb0zz__objectz00);
						BgL_arg2075z00_6157 = BgL_res2861z00_6158;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1170z00_6156), BgL_arg2075z00_6157);
				}
				return BgL_new1170z00_6156;
			}
		}

	}



/* &lambda2070 */
	BgL_z62processzd2exceptionzb0_bglt BGl_z62lambda2070z62zz__objectz00(obj_t
		BgL_envz00_5555, obj_t BgL_fname1164z00_5556,
		obj_t BgL_location1165z00_5557, obj_t BgL_stack1166z00_5558,
		obj_t BgL_proc1167z00_5559, obj_t BgL_msg1168z00_5560,
		obj_t BgL_obj1169z00_5561)
	{
		{	/* Llib/object.scm 241 */
			{	/* Llib/object.scm 241 */
				BgL_z62processzd2exceptionzb0_bglt BgL_new1264z00_6159;

				{	/* Llib/object.scm 241 */
					BgL_z62processzd2exceptionzb0_bglt BgL_new1263z00_6160;

					BgL_new1263z00_6160 =
						((BgL_z62processzd2exceptionzb0_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62processzd2exceptionzb0_bgl))));
					{	/* Llib/object.scm 241 */
						long BgL_arg2071z00_6161;

						{	/* Llib/object.scm 241 */
							long BgL_res2860z00_6162;

							BgL_res2860z00_6162 =
								BGL_CLASS_INDEX(BGl_z62processzd2exceptionzb0zz__objectz00);
							BgL_arg2071z00_6161 = BgL_res2860z00_6162;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1263z00_6160), BgL_arg2071z00_6161);
					}
					BgL_new1264z00_6159 = BgL_new1263z00_6160;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1264z00_6159)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1164z00_5556), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1264z00_6159)))->BgL_locationz00) =
					((obj_t) BgL_location1165z00_5557), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1264z00_6159)))->BgL_stackz00) =
					((obj_t) BgL_stack1166z00_5558), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1264z00_6159)))->BgL_procz00) =
					((obj_t) BgL_proc1167z00_5559), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1264z00_6159)))->BgL_msgz00) =
					((obj_t) BgL_msg1168z00_5560), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1264z00_6159)))->BgL_objz00) =
					((obj_t) BgL_obj1169z00_5561), BUNSPEC);
				return BgL_new1264z00_6159;
			}
		}

	}



/* &<@anonymous:2062> */
	obj_t BGl_z62zc3z04anonymousza32062ze3ze5zz__objectz00(obj_t BgL_envz00_5562,
		obj_t BgL_new1162z00_5563)
	{
		{	/* Llib/object.scm 239 */
			{
				BgL_z62iozd2connectionzd2errorz62_bglt BgL_auxz00_8752;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62iozd2connectionzd2errorz62_bglt)
										BgL_new1162z00_5563))))->BgL_fnamez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2connectionzd2errorz62_bglt)
										BgL_new1162z00_5563))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2connectionzd2errorz62_bglt)
										BgL_new1162z00_5563))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2connectionzd2errorz62_bglt)
										BgL_new1162z00_5563))))->BgL_procz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2connectionzd2errorz62_bglt)
										BgL_new1162z00_5563))))->BgL_msgz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2connectionzd2errorz62_bglt)
										BgL_new1162z00_5563))))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8752 =
					((BgL_z62iozd2connectionzd2errorz62_bglt) BgL_new1162z00_5563);
				return ((obj_t) BgL_auxz00_8752);
			}
		}

	}



/* &lambda2060 */
	BgL_z62iozd2connectionzd2errorz62_bglt BGl_z62lambda2060z62zz__objectz00(obj_t
		BgL_envz00_5564)
	{
		{	/* Llib/object.scm 239 */
			{	/* Llib/object.scm 239 */
				BgL_z62iozd2connectionzd2errorz62_bglt BgL_new1161z00_6164;

				BgL_new1161z00_6164 =
					((BgL_z62iozd2connectionzd2errorz62_bglt)
					BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62iozd2connectionzd2errorz62_bgl))));
				{	/* Llib/object.scm 239 */
					long BgL_arg2061z00_6165;

					{	/* Llib/object.scm 239 */
						long BgL_res2859z00_6166;

						BgL_res2859z00_6166 =
							BGL_CLASS_INDEX(BGl_z62iozd2connectionzd2errorz62zz__objectz00);
						BgL_arg2061z00_6165 = BgL_res2859z00_6166;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1161z00_6164), BgL_arg2061z00_6165);
				}
				return BgL_new1161z00_6164;
			}
		}

	}



/* &lambda2058 */
	BgL_z62iozd2connectionzd2errorz62_bglt BGl_z62lambda2058z62zz__objectz00(obj_t
		BgL_envz00_5565, obj_t BgL_fname1155z00_5566,
		obj_t BgL_location1156z00_5567, obj_t BgL_stack1157z00_5568,
		obj_t BgL_proc1158z00_5569, obj_t BgL_msg1159z00_5570,
		obj_t BgL_obj1160z00_5571)
	{
		{	/* Llib/object.scm 239 */
			{	/* Llib/object.scm 239 */
				BgL_z62iozd2connectionzd2errorz62_bglt BgL_new1262z00_6167;

				{	/* Llib/object.scm 239 */
					BgL_z62iozd2connectionzd2errorz62_bglt BgL_new1261z00_6168;

					BgL_new1261z00_6168 =
						((BgL_z62iozd2connectionzd2errorz62_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62iozd2connectionzd2errorz62_bgl))));
					{	/* Llib/object.scm 239 */
						long BgL_arg2059z00_6169;

						{	/* Llib/object.scm 239 */
							long BgL_res2858z00_6170;

							BgL_res2858z00_6170 =
								BGL_CLASS_INDEX(BGl_z62iozd2connectionzd2errorz62zz__objectz00);
							BgL_arg2059z00_6169 = BgL_res2858z00_6170;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1261z00_6168), BgL_arg2059z00_6169);
					}
					BgL_new1262z00_6167 = BgL_new1261z00_6168;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1262z00_6167)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1155z00_5566), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1262z00_6167)))->BgL_locationz00) =
					((obj_t) BgL_location1156z00_5567), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1262z00_6167)))->BgL_stackz00) =
					((obj_t) BgL_stack1157z00_5568), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1262z00_6167)))->BgL_procz00) =
					((obj_t) BgL_proc1158z00_5569), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1262z00_6167)))->BgL_msgz00) =
					((obj_t) BgL_msg1159z00_5570), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1262z00_6167)))->BgL_objz00) =
					((obj_t) BgL_obj1160z00_5571), BUNSPEC);
				return BgL_new1262z00_6167;
			}
		}

	}



/* &<@anonymous:2050> */
	obj_t BGl_z62zc3z04anonymousza32050ze3ze5zz__objectz00(obj_t BgL_envz00_5572,
		obj_t BgL_new1153z00_5573)
	{
		{	/* Llib/object.scm 238 */
			{
				BgL_z62iozd2timeoutzd2errorz62_bglt BgL_auxz00_8793;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62iozd2timeoutzd2errorz62_bglt)
										BgL_new1153z00_5573))))->BgL_fnamez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2timeoutzd2errorz62_bglt)
										BgL_new1153z00_5573))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2timeoutzd2errorz62_bglt)
										BgL_new1153z00_5573))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2timeoutzd2errorz62_bglt)
										BgL_new1153z00_5573))))->BgL_procz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2timeoutzd2errorz62_bglt)
										BgL_new1153z00_5573))))->BgL_msgz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2timeoutzd2errorz62_bglt)
										BgL_new1153z00_5573))))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8793 =
					((BgL_z62iozd2timeoutzd2errorz62_bglt) BgL_new1153z00_5573);
				return ((obj_t) BgL_auxz00_8793);
			}
		}

	}



/* &lambda2048 */
	BgL_z62iozd2timeoutzd2errorz62_bglt BGl_z62lambda2048z62zz__objectz00(obj_t
		BgL_envz00_5574)
	{
		{	/* Llib/object.scm 238 */
			{	/* Llib/object.scm 238 */
				BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new1152z00_6172;

				BgL_new1152z00_6172 =
					((BgL_z62iozd2timeoutzd2errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62iozd2timeoutzd2errorz62_bgl))));
				{	/* Llib/object.scm 238 */
					long BgL_arg2049z00_6173;

					{	/* Llib/object.scm 238 */
						long BgL_res2857z00_6174;

						BgL_res2857z00_6174 =
							BGL_CLASS_INDEX(BGl_z62iozd2timeoutzd2errorz62zz__objectz00);
						BgL_arg2049z00_6173 = BgL_res2857z00_6174;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1152z00_6172), BgL_arg2049z00_6173);
				}
				return BgL_new1152z00_6172;
			}
		}

	}



/* &lambda2046 */
	BgL_z62iozd2timeoutzd2errorz62_bglt BGl_z62lambda2046z62zz__objectz00(obj_t
		BgL_envz00_5575, obj_t BgL_fname1146z00_5576,
		obj_t BgL_location1147z00_5577, obj_t BgL_stack1148z00_5578,
		obj_t BgL_proc1149z00_5579, obj_t BgL_msg1150z00_5580,
		obj_t BgL_obj1151z00_5581)
	{
		{	/* Llib/object.scm 238 */
			{	/* Llib/object.scm 238 */
				BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new1260z00_6175;

				{	/* Llib/object.scm 238 */
					BgL_z62iozd2timeoutzd2errorz62_bglt BgL_new1259z00_6176;

					BgL_new1259z00_6176 =
						((BgL_z62iozd2timeoutzd2errorz62_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62iozd2timeoutzd2errorz62_bgl))));
					{	/* Llib/object.scm 238 */
						long BgL_arg2047z00_6177;

						{	/* Llib/object.scm 238 */
							long BgL_res2856z00_6178;

							BgL_res2856z00_6178 =
								BGL_CLASS_INDEX(BGl_z62iozd2timeoutzd2errorz62zz__objectz00);
							BgL_arg2047z00_6177 = BgL_res2856z00_6178;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1259z00_6176), BgL_arg2047z00_6177);
					}
					BgL_new1260z00_6175 = BgL_new1259z00_6176;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1260z00_6175)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1146z00_5576), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1260z00_6175)))->BgL_locationz00) =
					((obj_t) BgL_location1147z00_5577), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1260z00_6175)))->BgL_stackz00) =
					((obj_t) BgL_stack1148z00_5578), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1260z00_6175)))->BgL_procz00) =
					((obj_t) BgL_proc1149z00_5579), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1260z00_6175)))->BgL_msgz00) =
					((obj_t) BgL_msg1150z00_5580), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1260z00_6175)))->BgL_objz00) =
					((obj_t) BgL_obj1151z00_5581), BUNSPEC);
				return BgL_new1260z00_6175;
			}
		}

	}



/* &<@anonymous:2039> */
	obj_t BGl_z62zc3z04anonymousza32039ze3ze5zz__objectz00(obj_t BgL_envz00_5582,
		obj_t BgL_new1144z00_5583)
	{
		{	/* Llib/object.scm 237 */
			{
				BgL_z62iozd2sigpipezd2errorz62_bglt BgL_auxz00_8834;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62iozd2sigpipezd2errorz62_bglt)
										BgL_new1144z00_5583))))->BgL_fnamez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2sigpipezd2errorz62_bglt)
										BgL_new1144z00_5583))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2sigpipezd2errorz62_bglt)
										BgL_new1144z00_5583))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2sigpipezd2errorz62_bglt)
										BgL_new1144z00_5583))))->BgL_procz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2sigpipezd2errorz62_bglt)
										BgL_new1144z00_5583))))->BgL_msgz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2sigpipezd2errorz62_bglt)
										BgL_new1144z00_5583))))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8834 =
					((BgL_z62iozd2sigpipezd2errorz62_bglt) BgL_new1144z00_5583);
				return ((obj_t) BgL_auxz00_8834);
			}
		}

	}



/* &lambda2037 */
	BgL_z62iozd2sigpipezd2errorz62_bglt BGl_z62lambda2037z62zz__objectz00(obj_t
		BgL_envz00_5584)
	{
		{	/* Llib/object.scm 237 */
			{	/* Llib/object.scm 237 */
				BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1143z00_6180;

				BgL_new1143z00_6180 =
					((BgL_z62iozd2sigpipezd2errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62iozd2sigpipezd2errorz62_bgl))));
				{	/* Llib/object.scm 237 */
					long BgL_arg2038z00_6181;

					{	/* Llib/object.scm 237 */
						long BgL_res2855z00_6182;

						BgL_res2855z00_6182 =
							BGL_CLASS_INDEX(BGl_z62iozd2sigpipezd2errorz62zz__objectz00);
						BgL_arg2038z00_6181 = BgL_res2855z00_6182;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1143z00_6180), BgL_arg2038z00_6181);
				}
				return BgL_new1143z00_6180;
			}
		}

	}



/* &lambda2035 */
	BgL_z62iozd2sigpipezd2errorz62_bglt BGl_z62lambda2035z62zz__objectz00(obj_t
		BgL_envz00_5585, obj_t BgL_fname1137z00_5586,
		obj_t BgL_location1138z00_5587, obj_t BgL_stack1139z00_5588,
		obj_t BgL_proc1140z00_5589, obj_t BgL_msg1141z00_5590,
		obj_t BgL_obj1142z00_5591)
	{
		{	/* Llib/object.scm 237 */
			{	/* Llib/object.scm 237 */
				BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1258z00_6183;

				{	/* Llib/object.scm 237 */
					BgL_z62iozd2sigpipezd2errorz62_bglt BgL_new1257z00_6184;

					BgL_new1257z00_6184 =
						((BgL_z62iozd2sigpipezd2errorz62_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62iozd2sigpipezd2errorz62_bgl))));
					{	/* Llib/object.scm 237 */
						long BgL_arg2036z00_6185;

						{	/* Llib/object.scm 237 */
							long BgL_res2854z00_6186;

							BgL_res2854z00_6186 =
								BGL_CLASS_INDEX(BGl_z62iozd2sigpipezd2errorz62zz__objectz00);
							BgL_arg2036z00_6185 = BgL_res2854z00_6186;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1257z00_6184), BgL_arg2036z00_6185);
					}
					BgL_new1258z00_6183 = BgL_new1257z00_6184;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1258z00_6183)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1137z00_5586), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1258z00_6183)))->BgL_locationz00) =
					((obj_t) BgL_location1138z00_5587), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1258z00_6183)))->BgL_stackz00) =
					((obj_t) BgL_stack1139z00_5588), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1258z00_6183)))->BgL_procz00) =
					((obj_t) BgL_proc1140z00_5589), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1258z00_6183)))->BgL_msgz00) =
					((obj_t) BgL_msg1141z00_5590), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1258z00_6183)))->BgL_objz00) =
					((obj_t) BgL_obj1142z00_5591), BUNSPEC);
				return BgL_new1258z00_6183;
			}
		}

	}



/* &<@anonymous:2027> */
	obj_t BGl_z62zc3z04anonymousza32027ze3ze5zz__objectz00(obj_t BgL_envz00_5592,
		obj_t BgL_new1135z00_5593)
	{
		{	/* Llib/object.scm 236 */
			{
				BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_auxz00_8875;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										BgL_new1135z00_5593))))->BgL_fnamez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										BgL_new1135z00_5593))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										BgL_new1135z00_5593))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										BgL_new1135z00_5593))))->BgL_procz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										BgL_new1135z00_5593))))->BgL_msgz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
										BgL_new1135z00_5593))))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8875 =
					((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt) BgL_new1135z00_5593);
				return ((obj_t) BgL_auxz00_8875);
			}
		}

	}



/* &lambda2024 */
	BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt
		BGl_z62lambda2024z62zz__objectz00(obj_t BgL_envz00_5594)
	{
		{	/* Llib/object.scm 236 */
			{	/* Llib/object.scm 236 */
				BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1134z00_6188;

				BgL_new1134z00_6188 =
					((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
					BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62iozd2malformedzd2urlzd2errorzb0_bgl))));
				{	/* Llib/object.scm 236 */
					long BgL_arg2026z00_6189;

					{	/* Llib/object.scm 236 */
						long BgL_res2853z00_6190;

						BgL_res2853z00_6190 =
							BGL_CLASS_INDEX
							(BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00);
						BgL_arg2026z00_6189 = BgL_res2853z00_6190;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1134z00_6188), BgL_arg2026z00_6189);
				}
				return BgL_new1134z00_6188;
			}
		}

	}



/* &lambda2022 */
	BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt
		BGl_z62lambda2022z62zz__objectz00(obj_t BgL_envz00_5595,
		obj_t BgL_fname1128z00_5596, obj_t BgL_location1129z00_5597,
		obj_t BgL_stack1130z00_5598, obj_t BgL_proc1131z00_5599,
		obj_t BgL_msg1132z00_5600, obj_t BgL_obj1133z00_5601)
	{
		{	/* Llib/object.scm 236 */
			{	/* Llib/object.scm 236 */
				BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1256z00_6191;

				{	/* Llib/object.scm 236 */
					BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt BgL_new1255z00_6192;

					BgL_new1255z00_6192 =
						((BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62iozd2malformedzd2urlzd2errorzb0_bgl))));
					{	/* Llib/object.scm 236 */
						long BgL_arg2023z00_6193;

						{	/* Llib/object.scm 236 */
							long BgL_res2852z00_6194;

							BgL_res2852z00_6194 =
								BGL_CLASS_INDEX
								(BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00);
							BgL_arg2023z00_6193 = BgL_res2852z00_6194;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1255z00_6192), BgL_arg2023z00_6193);
					}
					BgL_new1256z00_6191 = BgL_new1255z00_6192;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1256z00_6191)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1128z00_5596), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1256z00_6191)))->BgL_locationz00) =
					((obj_t) BgL_location1129z00_5597), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1256z00_6191)))->BgL_stackz00) =
					((obj_t) BgL_stack1130z00_5598), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1256z00_6191)))->BgL_procz00) =
					((obj_t) BgL_proc1131z00_5599), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1256z00_6191)))->BgL_msgz00) =
					((obj_t) BgL_msg1132z00_5600), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1256z00_6191)))->BgL_objz00) =
					((obj_t) BgL_obj1133z00_5601), BUNSPEC);
				return BgL_new1256z00_6191;
			}
		}

	}



/* &<@anonymous:2015> */
	obj_t BGl_z62zc3z04anonymousza32015ze3ze5zz__objectz00(obj_t BgL_envz00_5602,
		obj_t BgL_new1126z00_5603)
	{
		{	/* Llib/object.scm 235 */
			{
				BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_auxz00_8916;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										BgL_new1126z00_5603))))->BgL_fnamez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										BgL_new1126z00_5603))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										BgL_new1126z00_5603))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										BgL_new1126z00_5603))))->BgL_procz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										BgL_new1126z00_5603))))->BgL_msgz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
										BgL_new1126z00_5603))))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8916 =
					((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt) BgL_new1126z00_5603);
				return ((obj_t) BgL_auxz00_8916);
			}
		}

	}



/* &lambda2013 */
	BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt
		BGl_z62lambda2013z62zz__objectz00(obj_t BgL_envz00_5604)
	{
		{	/* Llib/object.scm 235 */
			{	/* Llib/object.scm 235 */
				BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1125z00_6196;

				BgL_new1125z00_6196 =
					((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
					BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62iozd2unknownzd2hostzd2errorzb0_bgl))));
				{	/* Llib/object.scm 235 */
					long BgL_arg2014z00_6197;

					{	/* Llib/object.scm 235 */
						long BgL_res2851z00_6198;

						BgL_res2851z00_6198 =
							BGL_CLASS_INDEX
							(BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00);
						BgL_arg2014z00_6197 = BgL_res2851z00_6198;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1125z00_6196), BgL_arg2014z00_6197);
				}
				return BgL_new1125z00_6196;
			}
		}

	}



/* &lambda2011 */
	BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt
		BGl_z62lambda2011z62zz__objectz00(obj_t BgL_envz00_5605,
		obj_t BgL_fname1119z00_5606, obj_t BgL_location1120z00_5607,
		obj_t BgL_stack1121z00_5608, obj_t BgL_proc1122z00_5609,
		obj_t BgL_msg1123z00_5610, obj_t BgL_obj1124z00_5611)
	{
		{	/* Llib/object.scm 235 */
			{	/* Llib/object.scm 235 */
				BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1254z00_6199;

				{	/* Llib/object.scm 235 */
					BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt BgL_new1253z00_6200;

					BgL_new1253z00_6200 =
						((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62iozd2unknownzd2hostzd2errorzb0_bgl))));
					{	/* Llib/object.scm 235 */
						long BgL_arg2012z00_6201;

						{	/* Llib/object.scm 235 */
							long BgL_res2850z00_6202;

							BgL_res2850z00_6202 =
								BGL_CLASS_INDEX
								(BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00);
							BgL_arg2012z00_6201 = BgL_res2850z00_6202;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1253z00_6200), BgL_arg2012z00_6201);
					}
					BgL_new1254z00_6199 = BgL_new1253z00_6200;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1254z00_6199)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1119z00_5606), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1254z00_6199)))->BgL_locationz00) =
					((obj_t) BgL_location1120z00_5607), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1254z00_6199)))->BgL_stackz00) =
					((obj_t) BgL_stack1121z00_5608), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1254z00_6199)))->BgL_procz00) =
					((obj_t) BgL_proc1122z00_5609), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1254z00_6199)))->BgL_msgz00) =
					((obj_t) BgL_msg1123z00_5610), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1254z00_6199)))->BgL_objz00) =
					((obj_t) BgL_obj1124z00_5611), BUNSPEC);
				return BgL_new1254z00_6199;
			}
		}

	}



/* &<@anonymous:2003> */
	obj_t BGl_z62zc3z04anonymousza32003ze3ze5zz__objectz00(obj_t BgL_envz00_5612,
		obj_t BgL_new1117z00_5613)
	{
		{	/* Llib/object.scm 234 */
			{
				BgL_z62iozd2parsezd2errorz62_bglt BgL_auxz00_8957;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62iozd2parsezd2errorz62_bglt) BgL_new1117z00_5613))))->
						BgL_fnamez00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2parsezd2errorz62_bglt)
										BgL_new1117z00_5613))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2parsezd2errorz62_bglt)
										BgL_new1117z00_5613))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2parsezd2errorz62_bglt)
										BgL_new1117z00_5613))))->BgL_procz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2parsezd2errorz62_bglt)
										BgL_new1117z00_5613))))->BgL_msgz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2parsezd2errorz62_bglt)
										BgL_new1117z00_5613))))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8957 =
					((BgL_z62iozd2parsezd2errorz62_bglt) BgL_new1117z00_5613);
				return ((obj_t) BgL_auxz00_8957);
			}
		}

	}



/* &lambda2001 */
	BgL_z62iozd2parsezd2errorz62_bglt BGl_z62lambda2001z62zz__objectz00(obj_t
		BgL_envz00_5614)
	{
		{	/* Llib/object.scm 234 */
			{	/* Llib/object.scm 234 */
				BgL_z62iozd2parsezd2errorz62_bglt BgL_new1116z00_6204;

				BgL_new1116z00_6204 =
					((BgL_z62iozd2parsezd2errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62iozd2parsezd2errorz62_bgl))));
				{	/* Llib/object.scm 234 */
					long BgL_arg2002z00_6205;

					{	/* Llib/object.scm 234 */
						long BgL_res2849z00_6206;

						BgL_res2849z00_6206 =
							BGL_CLASS_INDEX(BGl_z62iozd2parsezd2errorz62zz__objectz00);
						BgL_arg2002z00_6205 = BgL_res2849z00_6206;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1116z00_6204), BgL_arg2002z00_6205);
				}
				return BgL_new1116z00_6204;
			}
		}

	}



/* &lambda1999 */
	BgL_z62iozd2parsezd2errorz62_bglt BGl_z62lambda1999z62zz__objectz00(obj_t
		BgL_envz00_5615, obj_t BgL_fname1109z00_5616,
		obj_t BgL_location1110z00_5617, obj_t BgL_stack1111z00_5618,
		obj_t BgL_proc1112z00_5619, obj_t BgL_msg1113z00_5620,
		obj_t BgL_obj1114z00_5621)
	{
		{	/* Llib/object.scm 234 */
			{	/* Llib/object.scm 234 */
				BgL_z62iozd2parsezd2errorz62_bglt BgL_new1252z00_6207;

				{	/* Llib/object.scm 234 */
					BgL_z62iozd2parsezd2errorz62_bglt BgL_new1251z00_6208;

					BgL_new1251z00_6208 =
						((BgL_z62iozd2parsezd2errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62iozd2parsezd2errorz62_bgl))));
					{	/* Llib/object.scm 234 */
						long BgL_arg2000z00_6209;

						{	/* Llib/object.scm 234 */
							long BgL_res2848z00_6210;

							BgL_res2848z00_6210 =
								BGL_CLASS_INDEX(BGl_z62iozd2parsezd2errorz62zz__objectz00);
							BgL_arg2000z00_6209 = BgL_res2848z00_6210;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1251z00_6208), BgL_arg2000z00_6209);
					}
					BgL_new1252z00_6207 = BgL_new1251z00_6208;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1252z00_6207)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1109z00_5616), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1252z00_6207)))->BgL_locationz00) =
					((obj_t) BgL_location1110z00_5617), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1252z00_6207)))->BgL_stackz00) =
					((obj_t) BgL_stack1111z00_5618), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1252z00_6207)))->BgL_procz00) =
					((obj_t) BgL_proc1112z00_5619), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1252z00_6207)))->BgL_msgz00) =
					((obj_t) BgL_msg1113z00_5620), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1252z00_6207)))->BgL_objz00) =
					((obj_t) BgL_obj1114z00_5621), BUNSPEC);
				return BgL_new1252z00_6207;
			}
		}

	}



/* &<@anonymous:1992> */
	obj_t BGl_z62zc3z04anonymousza31992ze3ze5zz__objectz00(obj_t BgL_envz00_5622,
		obj_t BgL_new1107z00_5623)
	{
		{	/* Llib/object.scm 233 */
			{
				BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_auxz00_8998;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										BgL_new1107z00_5623))))->BgL_fnamez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										BgL_new1107z00_5623))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										BgL_new1107z00_5623))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										BgL_new1107z00_5623))))->BgL_procz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										BgL_new1107z00_5623))))->BgL_msgz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
										BgL_new1107z00_5623))))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8998 =
					((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
					BgL_new1107z00_5623);
				return ((obj_t) BgL_auxz00_8998);
			}
		}

	}



/* &lambda1990 */
	BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
		BGl_z62lambda1990z62zz__objectz00(obj_t BgL_envz00_5624)
	{
		{	/* Llib/object.scm 233 */
			{	/* Llib/object.scm 233 */
				BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_new1106z00_6212;

				BgL_new1106z00_6212 =
					((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
					BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62iozd2filezd2notzd2foundzd2errorz62_bgl))));
				{	/* Llib/object.scm 233 */
					long BgL_arg1991z00_6213;

					{	/* Llib/object.scm 233 */
						long BgL_res2847z00_6214;

						BgL_res2847z00_6214 =
							BGL_CLASS_INDEX
							(BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00);
						BgL_arg1991z00_6213 = BgL_res2847z00_6214;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1106z00_6212), BgL_arg1991z00_6213);
				}
				return BgL_new1106z00_6212;
			}
		}

	}



/* &lambda1988 */
	BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
		BGl_z62lambda1988z62zz__objectz00(obj_t BgL_envz00_5625,
		obj_t BgL_fname1100z00_5626, obj_t BgL_location1101z00_5627,
		obj_t BgL_stack1102z00_5628, obj_t BgL_proc1103z00_5629,
		obj_t BgL_msg1104z00_5630, obj_t BgL_obj1105z00_5631)
	{
		{	/* Llib/object.scm 233 */
			{	/* Llib/object.scm 233 */
				BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_new1250z00_6215;

				{	/* Llib/object.scm 233 */
					BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt BgL_new1249z00_6216;

					BgL_new1249z00_6216 =
						((BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62iozd2filezd2notzd2foundzd2errorz62_bgl))));
					{	/* Llib/object.scm 233 */
						long BgL_arg1989z00_6217;

						{	/* Llib/object.scm 233 */
							long BgL_res2846z00_6218;

							BgL_res2846z00_6218 =
								BGL_CLASS_INDEX
								(BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00);
							BgL_arg1989z00_6217 = BgL_res2846z00_6218;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1249z00_6216), BgL_arg1989z00_6217);
					}
					BgL_new1250z00_6215 = BgL_new1249z00_6216;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1250z00_6215)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1100z00_5626), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1250z00_6215)))->BgL_locationz00) =
					((obj_t) BgL_location1101z00_5627), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1250z00_6215)))->BgL_stackz00) =
					((obj_t) BgL_stack1102z00_5628), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1250z00_6215)))->BgL_procz00) =
					((obj_t) BgL_proc1103z00_5629), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1250z00_6215)))->BgL_msgz00) =
					((obj_t) BgL_msg1104z00_5630), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1250z00_6215)))->BgL_objz00) =
					((obj_t) BgL_obj1105z00_5631), BUNSPEC);
				return BgL_new1250z00_6215;
			}
		}

	}



/* &<@anonymous:1982> */
	obj_t BGl_z62zc3z04anonymousza31982ze3ze5zz__objectz00(obj_t BgL_envz00_5632,
		obj_t BgL_new1098z00_5633)
	{
		{	/* Llib/object.scm 232 */
			{
				BgL_z62iozd2closedzd2errorz62_bglt BgL_auxz00_9039;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62iozd2closedzd2errorz62_bglt)
										BgL_new1098z00_5633))))->BgL_fnamez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2closedzd2errorz62_bglt)
										BgL_new1098z00_5633))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2closedzd2errorz62_bglt)
										BgL_new1098z00_5633))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2closedzd2errorz62_bglt)
										BgL_new1098z00_5633))))->BgL_procz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2closedzd2errorz62_bglt)
										BgL_new1098z00_5633))))->BgL_msgz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2closedzd2errorz62_bglt)
										BgL_new1098z00_5633))))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_9039 =
					((BgL_z62iozd2closedzd2errorz62_bglt) BgL_new1098z00_5633);
				return ((obj_t) BgL_auxz00_9039);
			}
		}

	}



/* &lambda1980 */
	BgL_z62iozd2closedzd2errorz62_bglt BGl_z62lambda1980z62zz__objectz00(obj_t
		BgL_envz00_5634)
	{
		{	/* Llib/object.scm 232 */
			{	/* Llib/object.scm 232 */
				BgL_z62iozd2closedzd2errorz62_bglt BgL_new1096z00_6220;

				BgL_new1096z00_6220 =
					((BgL_z62iozd2closedzd2errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62iozd2closedzd2errorz62_bgl))));
				{	/* Llib/object.scm 232 */
					long BgL_arg1981z00_6221;

					{	/* Llib/object.scm 232 */
						long BgL_res2845z00_6222;

						BgL_res2845z00_6222 =
							BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00);
						BgL_arg1981z00_6221 = BgL_res2845z00_6222;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1096z00_6220), BgL_arg1981z00_6221);
				}
				return BgL_new1096z00_6220;
			}
		}

	}



/* &lambda1978 */
	BgL_z62iozd2closedzd2errorz62_bglt BGl_z62lambda1978z62zz__objectz00(obj_t
		BgL_envz00_5635, obj_t BgL_fname1090z00_5636,
		obj_t BgL_location1091z00_5637, obj_t BgL_stack1092z00_5638,
		obj_t BgL_proc1093z00_5639, obj_t BgL_msg1094z00_5640,
		obj_t BgL_obj1095z00_5641)
	{
		{	/* Llib/object.scm 232 */
			{	/* Llib/object.scm 232 */
				BgL_z62iozd2closedzd2errorz62_bglt BgL_new1248z00_6223;

				{	/* Llib/object.scm 232 */
					BgL_z62iozd2closedzd2errorz62_bglt BgL_new1247z00_6224;

					BgL_new1247z00_6224 =
						((BgL_z62iozd2closedzd2errorz62_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62iozd2closedzd2errorz62_bgl))));
					{	/* Llib/object.scm 232 */
						long BgL_arg1979z00_6225;

						{	/* Llib/object.scm 232 */
							long BgL_res2844z00_6226;

							BgL_res2844z00_6226 =
								BGL_CLASS_INDEX(BGl_z62iozd2closedzd2errorz62zz__objectz00);
							BgL_arg1979z00_6225 = BgL_res2844z00_6226;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1247z00_6224), BgL_arg1979z00_6225);
					}
					BgL_new1248z00_6223 = BgL_new1247z00_6224;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1248z00_6223)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1090z00_5636), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1248z00_6223)))->BgL_locationz00) =
					((obj_t) BgL_location1091z00_5637), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1248z00_6223)))->BgL_stackz00) =
					((obj_t) BgL_stack1092z00_5638), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1248z00_6223)))->BgL_procz00) =
					((obj_t) BgL_proc1093z00_5639), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1248z00_6223)))->BgL_msgz00) =
					((obj_t) BgL_msg1094z00_5640), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1248z00_6223)))->BgL_objz00) =
					((obj_t) BgL_obj1095z00_5641), BUNSPEC);
				return BgL_new1248z00_6223;
			}
		}

	}



/* &<@anonymous:1972> */
	obj_t BGl_z62zc3z04anonymousza31972ze3ze5zz__objectz00(obj_t BgL_envz00_5642,
		obj_t BgL_new1088z00_5643)
	{
		{	/* Llib/object.scm 231 */
			{
				BgL_z62iozd2writezd2errorz62_bglt BgL_auxz00_9080;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62iozd2writezd2errorz62_bglt) BgL_new1088z00_5643))))->
						BgL_fnamez00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2writezd2errorz62_bglt)
										BgL_new1088z00_5643))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2writezd2errorz62_bglt)
										BgL_new1088z00_5643))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2writezd2errorz62_bglt)
										BgL_new1088z00_5643))))->BgL_procz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2writezd2errorz62_bglt)
										BgL_new1088z00_5643))))->BgL_msgz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2writezd2errorz62_bglt)
										BgL_new1088z00_5643))))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_9080 =
					((BgL_z62iozd2writezd2errorz62_bglt) BgL_new1088z00_5643);
				return ((obj_t) BgL_auxz00_9080);
			}
		}

	}



/* &lambda1970 */
	BgL_z62iozd2writezd2errorz62_bglt BGl_z62lambda1970z62zz__objectz00(obj_t
		BgL_envz00_5644)
	{
		{	/* Llib/object.scm 231 */
			{	/* Llib/object.scm 231 */
				BgL_z62iozd2writezd2errorz62_bglt BgL_new1087z00_6228;

				BgL_new1087z00_6228 =
					((BgL_z62iozd2writezd2errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62iozd2writezd2errorz62_bgl))));
				{	/* Llib/object.scm 231 */
					long BgL_arg1971z00_6229;

					{	/* Llib/object.scm 231 */
						long BgL_res2843z00_6230;

						BgL_res2843z00_6230 =
							BGL_CLASS_INDEX(BGl_z62iozd2writezd2errorz62zz__objectz00);
						BgL_arg1971z00_6229 = BgL_res2843z00_6230;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1087z00_6228), BgL_arg1971z00_6229);
				}
				return BgL_new1087z00_6228;
			}
		}

	}



/* &lambda1968 */
	BgL_z62iozd2writezd2errorz62_bglt BGl_z62lambda1968z62zz__objectz00(obj_t
		BgL_envz00_5645, obj_t BgL_fname1081z00_5646,
		obj_t BgL_location1082z00_5647, obj_t BgL_stack1083z00_5648,
		obj_t BgL_proc1084z00_5649, obj_t BgL_msg1085z00_5650,
		obj_t BgL_obj1086z00_5651)
	{
		{	/* Llib/object.scm 231 */
			{	/* Llib/object.scm 231 */
				BgL_z62iozd2writezd2errorz62_bglt BgL_new1246z00_6231;

				{	/* Llib/object.scm 231 */
					BgL_z62iozd2writezd2errorz62_bglt BgL_new1245z00_6232;

					BgL_new1245z00_6232 =
						((BgL_z62iozd2writezd2errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62iozd2writezd2errorz62_bgl))));
					{	/* Llib/object.scm 231 */
						long BgL_arg1969z00_6233;

						{	/* Llib/object.scm 231 */
							long BgL_res2842z00_6234;

							BgL_res2842z00_6234 =
								BGL_CLASS_INDEX(BGl_z62iozd2writezd2errorz62zz__objectz00);
							BgL_arg1969z00_6233 = BgL_res2842z00_6234;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1245z00_6232), BgL_arg1969z00_6233);
					}
					BgL_new1246z00_6231 = BgL_new1245z00_6232;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1246z00_6231)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1081z00_5646), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1246z00_6231)))->BgL_locationz00) =
					((obj_t) BgL_location1082z00_5647), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1246z00_6231)))->BgL_stackz00) =
					((obj_t) BgL_stack1083z00_5648), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1246z00_6231)))->BgL_procz00) =
					((obj_t) BgL_proc1084z00_5649), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1246z00_6231)))->BgL_msgz00) =
					((obj_t) BgL_msg1085z00_5650), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1246z00_6231)))->BgL_objz00) =
					((obj_t) BgL_obj1086z00_5651), BUNSPEC);
				return BgL_new1246z00_6231;
			}
		}

	}



/* &<@anonymous:1962> */
	obj_t BGl_z62zc3z04anonymousza31962ze3ze5zz__objectz00(obj_t BgL_envz00_5652,
		obj_t BgL_new1079z00_5653)
	{
		{	/* Llib/object.scm 230 */
			{
				BgL_z62iozd2readzd2errorz62_bglt BgL_auxz00_9121;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62iozd2readzd2errorz62_bglt) BgL_new1079z00_5653))))->
						BgL_fnamez00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2readzd2errorz62_bglt) BgL_new1079z00_5653))))->
						BgL_locationz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2readzd2errorz62_bglt) BgL_new1079z00_5653))))->
						BgL_stackz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2readzd2errorz62_bglt) BgL_new1079z00_5653))))->
						BgL_procz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2readzd2errorz62_bglt) BgL_new1079z00_5653))))->
						BgL_msgz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2readzd2errorz62_bglt) BgL_new1079z00_5653))))->
						BgL_objz00) = ((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_9121 =
					((BgL_z62iozd2readzd2errorz62_bglt) BgL_new1079z00_5653);
				return ((obj_t) BgL_auxz00_9121);
			}
		}

	}



/* &lambda1960 */
	BgL_z62iozd2readzd2errorz62_bglt BGl_z62lambda1960z62zz__objectz00(obj_t
		BgL_envz00_5654)
	{
		{	/* Llib/object.scm 230 */
			{	/* Llib/object.scm 230 */
				BgL_z62iozd2readzd2errorz62_bglt BgL_new1078z00_6236;

				BgL_new1078z00_6236 =
					((BgL_z62iozd2readzd2errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62iozd2readzd2errorz62_bgl))));
				{	/* Llib/object.scm 230 */
					long BgL_arg1961z00_6237;

					{	/* Llib/object.scm 230 */
						long BgL_res2841z00_6238;

						BgL_res2841z00_6238 =
							BGL_CLASS_INDEX(BGl_z62iozd2readzd2errorz62zz__objectz00);
						BgL_arg1961z00_6237 = BgL_res2841z00_6238;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1078z00_6236), BgL_arg1961z00_6237);
				}
				return BgL_new1078z00_6236;
			}
		}

	}



/* &lambda1958 */
	BgL_z62iozd2readzd2errorz62_bglt BGl_z62lambda1958z62zz__objectz00(obj_t
		BgL_envz00_5655, obj_t BgL_fname1072z00_5656,
		obj_t BgL_location1073z00_5657, obj_t BgL_stack1074z00_5658,
		obj_t BgL_proc1075z00_5659, obj_t BgL_msg1076z00_5660,
		obj_t BgL_obj1077z00_5661)
	{
		{	/* Llib/object.scm 230 */
			{	/* Llib/object.scm 230 */
				BgL_z62iozd2readzd2errorz62_bglt BgL_new1243z00_6239;

				{	/* Llib/object.scm 230 */
					BgL_z62iozd2readzd2errorz62_bglt BgL_new1242z00_6240;

					BgL_new1242z00_6240 =
						((BgL_z62iozd2readzd2errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62iozd2readzd2errorz62_bgl))));
					{	/* Llib/object.scm 230 */
						long BgL_arg1959z00_6241;

						{	/* Llib/object.scm 230 */
							long BgL_res2840z00_6242;

							BgL_res2840z00_6242 =
								BGL_CLASS_INDEX(BGl_z62iozd2readzd2errorz62zz__objectz00);
							BgL_arg1959z00_6241 = BgL_res2840z00_6242;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1242z00_6240), BgL_arg1959z00_6241);
					}
					BgL_new1243z00_6239 = BgL_new1242z00_6240;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1243z00_6239)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1072z00_5656), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1243z00_6239)))->BgL_locationz00) =
					((obj_t) BgL_location1073z00_5657), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1243z00_6239)))->BgL_stackz00) =
					((obj_t) BgL_stack1074z00_5658), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1243z00_6239)))->BgL_procz00) =
					((obj_t) BgL_proc1075z00_5659), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1243z00_6239)))->BgL_msgz00) =
					((obj_t) BgL_msg1076z00_5660), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1243z00_6239)))->BgL_objz00) =
					((obj_t) BgL_obj1077z00_5661), BUNSPEC);
				return BgL_new1243z00_6239;
			}
		}

	}



/* &<@anonymous:1952> */
	obj_t BGl_z62zc3z04anonymousza31952ze3ze5zz__objectz00(obj_t BgL_envz00_5662,
		obj_t BgL_new1070z00_5663)
	{
		{	/* Llib/object.scm 229 */
			{
				BgL_z62iozd2portzd2errorz62_bglt BgL_auxz00_9162;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62iozd2portzd2errorz62_bglt) BgL_new1070z00_5663))))->
						BgL_fnamez00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2portzd2errorz62_bglt) BgL_new1070z00_5663))))->
						BgL_locationz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62iozd2portzd2errorz62_bglt) BgL_new1070z00_5663))))->
						BgL_stackz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2portzd2errorz62_bglt) BgL_new1070z00_5663))))->
						BgL_procz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2portzd2errorz62_bglt) BgL_new1070z00_5663))))->
						BgL_msgz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62iozd2portzd2errorz62_bglt) BgL_new1070z00_5663))))->
						BgL_objz00) = ((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_9162 =
					((BgL_z62iozd2portzd2errorz62_bglt) BgL_new1070z00_5663);
				return ((obj_t) BgL_auxz00_9162);
			}
		}

	}



/* &lambda1949 */
	BgL_z62iozd2portzd2errorz62_bglt BGl_z62lambda1949z62zz__objectz00(obj_t
		BgL_envz00_5664)
	{
		{	/* Llib/object.scm 229 */
			{	/* Llib/object.scm 229 */
				BgL_z62iozd2portzd2errorz62_bglt BgL_new1069z00_6244;

				BgL_new1069z00_6244 =
					((BgL_z62iozd2portzd2errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62iozd2portzd2errorz62_bgl))));
				{	/* Llib/object.scm 229 */
					long BgL_arg1951z00_6245;

					{	/* Llib/object.scm 229 */
						long BgL_res2839z00_6246;

						BgL_res2839z00_6246 =
							BGL_CLASS_INDEX(BGl_z62iozd2portzd2errorz62zz__objectz00);
						BgL_arg1951z00_6245 = BgL_res2839z00_6246;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1069z00_6244), BgL_arg1951z00_6245);
				}
				return BgL_new1069z00_6244;
			}
		}

	}



/* &lambda1947 */
	BgL_z62iozd2portzd2errorz62_bglt BGl_z62lambda1947z62zz__objectz00(obj_t
		BgL_envz00_5665, obj_t BgL_fname1063z00_5666,
		obj_t BgL_location1064z00_5667, obj_t BgL_stack1065z00_5668,
		obj_t BgL_proc1066z00_5669, obj_t BgL_msg1067z00_5670,
		obj_t BgL_obj1068z00_5671)
	{
		{	/* Llib/object.scm 229 */
			{	/* Llib/object.scm 229 */
				BgL_z62iozd2portzd2errorz62_bglt BgL_new1241z00_6247;

				{	/* Llib/object.scm 229 */
					BgL_z62iozd2portzd2errorz62_bglt BgL_new1240z00_6248;

					BgL_new1240z00_6248 =
						((BgL_z62iozd2portzd2errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62iozd2portzd2errorz62_bgl))));
					{	/* Llib/object.scm 229 */
						long BgL_arg1948z00_6249;

						{	/* Llib/object.scm 229 */
							long BgL_res2838z00_6250;

							BgL_res2838z00_6250 =
								BGL_CLASS_INDEX(BGl_z62iozd2portzd2errorz62zz__objectz00);
							BgL_arg1948z00_6249 = BgL_res2838z00_6250;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1240z00_6248), BgL_arg1948z00_6249);
					}
					BgL_new1241z00_6247 = BgL_new1240z00_6248;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1241z00_6247)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1063z00_5666), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1241z00_6247)))->BgL_locationz00) =
					((obj_t) BgL_location1064z00_5667), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1241z00_6247)))->BgL_stackz00) =
					((obj_t) BgL_stack1065z00_5668), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1241z00_6247)))->BgL_procz00) =
					((obj_t) BgL_proc1066z00_5669), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1241z00_6247)))->BgL_msgz00) =
					((obj_t) BgL_msg1067z00_5670), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1241z00_6247)))->BgL_objz00) =
					((obj_t) BgL_obj1068z00_5671), BUNSPEC);
				return BgL_new1241z00_6247;
			}
		}

	}



/* &<@anonymous:1941> */
	obj_t BGl_z62zc3z04anonymousza31941ze3ze5zz__objectz00(obj_t BgL_envz00_5672,
		obj_t BgL_new1061z00_5673)
	{
		{	/* Llib/object.scm 228 */
			{
				BgL_z62iozd2errorzb0_bglt BgL_auxz00_9203;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62iozd2errorzb0_bglt) BgL_new1061z00_5673))))->
						BgL_fnamez00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) ((BgL_z62iozd2errorzb0_bglt)
										BgL_new1061z00_5673))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) ((BgL_z62iozd2errorzb0_bglt)
										BgL_new1061z00_5673))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) ((BgL_z62iozd2errorzb0_bglt)
										BgL_new1061z00_5673))))->BgL_procz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) ((BgL_z62iozd2errorzb0_bglt)
										BgL_new1061z00_5673))))->BgL_msgz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) ((BgL_z62iozd2errorzb0_bglt)
										BgL_new1061z00_5673))))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_9203 = ((BgL_z62iozd2errorzb0_bglt) BgL_new1061z00_5673);
				return ((obj_t) BgL_auxz00_9203);
			}
		}

	}



/* &lambda1939 */
	BgL_z62iozd2errorzb0_bglt BGl_z62lambda1939z62zz__objectz00(obj_t
		BgL_envz00_5674)
	{
		{	/* Llib/object.scm 228 */
			{	/* Llib/object.scm 228 */
				BgL_z62iozd2errorzb0_bglt BgL_new1060z00_6252;

				BgL_new1060z00_6252 =
					((BgL_z62iozd2errorzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62iozd2errorzb0_bgl))));
				{	/* Llib/object.scm 228 */
					long BgL_arg1940z00_6253;

					{	/* Llib/object.scm 228 */
						long BgL_res2837z00_6254;

						BgL_res2837z00_6254 =
							BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00);
						BgL_arg1940z00_6253 = BgL_res2837z00_6254;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1060z00_6252), BgL_arg1940z00_6253);
				}
				return BgL_new1060z00_6252;
			}
		}

	}



/* &lambda1937 */
	BgL_z62iozd2errorzb0_bglt BGl_z62lambda1937z62zz__objectz00(obj_t
		BgL_envz00_5675, obj_t BgL_fname1054z00_5676,
		obj_t BgL_location1055z00_5677, obj_t BgL_stack1056z00_5678,
		obj_t BgL_proc1057z00_5679, obj_t BgL_msg1058z00_5680,
		obj_t BgL_obj1059z00_5681)
	{
		{	/* Llib/object.scm 228 */
			{	/* Llib/object.scm 228 */
				BgL_z62iozd2errorzb0_bglt BgL_new1239z00_6255;

				{	/* Llib/object.scm 228 */
					BgL_z62iozd2errorzb0_bglt BgL_new1238z00_6256;

					BgL_new1238z00_6256 =
						((BgL_z62iozd2errorzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62iozd2errorzb0_bgl))));
					{	/* Llib/object.scm 228 */
						long BgL_arg1938z00_6257;

						{	/* Llib/object.scm 228 */
							long BgL_res2836z00_6258;

							BgL_res2836z00_6258 =
								BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00);
							BgL_arg1938z00_6257 = BgL_res2836z00_6258;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1238z00_6256), BgL_arg1938z00_6257);
					}
					BgL_new1239z00_6255 = BgL_new1238z00_6256;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1239z00_6255)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1054z00_5676), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1239z00_6255)))->BgL_locationz00) =
					((obj_t) BgL_location1055z00_5677), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1239z00_6255)))->BgL_stackz00) =
					((obj_t) BgL_stack1056z00_5678), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1239z00_6255)))->BgL_procz00) =
					((obj_t) BgL_proc1057z00_5679), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1239z00_6255)))->BgL_msgz00) =
					((obj_t) BgL_msg1058z00_5680), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1239z00_6255)))->BgL_objz00) =
					((obj_t) BgL_obj1059z00_5681), BUNSPEC);
				return BgL_new1239z00_6255;
			}
		}

	}



/* &<@anonymous:1926> */
	obj_t BGl_z62zc3z04anonymousza31926ze3ze5zz__objectz00(obj_t BgL_envz00_5682,
		obj_t BgL_new1052z00_5683)
	{
		{	/* Llib/object.scm 226 */
			{
				BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_auxz00_9244;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										BgL_new1052z00_5683))))->BgL_fnamez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										BgL_new1052z00_5683))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) (
										(BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										BgL_new1052z00_5683))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										BgL_new1052z00_5683))))->BgL_procz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										BgL_new1052z00_5683))))->BgL_msgz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) (
										(BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
										BgL_new1052z00_5683))))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
							COBJECT(((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
									BgL_new1052z00_5683)))->BgL_indexz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_9244 =
					((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
					BgL_new1052z00_5683);
				return ((obj_t) BgL_auxz00_9244);
			}
		}

	}



/* &lambda1924 */
	BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
		BGl_z62lambda1924z62zz__objectz00(obj_t BgL_envz00_5684)
	{
		{	/* Llib/object.scm 226 */
			{	/* Llib/object.scm 226 */
				BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_new1051z00_6260;

				BgL_new1051z00_6260 =
					((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
					BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bgl))));
				{	/* Llib/object.scm 226 */
					long BgL_arg1925z00_6261;

					{	/* Llib/object.scm 226 */
						long BgL_res2835z00_6262;

						BgL_res2835z00_6262 =
							BGL_CLASS_INDEX
							(BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00);
						BgL_arg1925z00_6261 = BgL_res2835z00_6262;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1051z00_6260), BgL_arg1925z00_6261);
				}
				return BgL_new1051z00_6260;
			}
		}

	}



/* &lambda1921 */
	BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
		BGl_z62lambda1921z62zz__objectz00(obj_t BgL_envz00_5685,
		obj_t BgL_fname1044z00_5686, obj_t BgL_location1045z00_5687,
		obj_t BgL_stack1046z00_5688, obj_t BgL_proc1047z00_5689,
		obj_t BgL_msg1048z00_5690, obj_t BgL_obj1049z00_5691,
		obj_t BgL_index1050z00_5692)
	{
		{	/* Llib/object.scm 226 */
			{	/* Llib/object.scm 226 */
				BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_new1237z00_6263;

				{	/* Llib/object.scm 226 */
					BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt BgL_new1236z00_6264;

					BgL_new1236z00_6264 =
						((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bgl))));
					{	/* Llib/object.scm 226 */
						long BgL_arg1923z00_6265;

						{	/* Llib/object.scm 226 */
							long BgL_res2834z00_6266;

							BgL_res2834z00_6266 =
								BGL_CLASS_INDEX
								(BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00);
							BgL_arg1923z00_6265 = BgL_res2834z00_6266;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1236z00_6264), BgL_arg1923z00_6265);
					}
					BgL_new1237z00_6263 = BgL_new1236z00_6264;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1237z00_6263)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1044z00_5686), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1237z00_6263)))->BgL_locationz00) =
					((obj_t) BgL_location1045z00_5687), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1237z00_6263)))->BgL_stackz00) =
					((obj_t) BgL_stack1046z00_5688), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1237z00_6263)))->BgL_procz00) =
					((obj_t) BgL_proc1047z00_5689), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1237z00_6263)))->BgL_msgz00) =
					((obj_t) BgL_msg1048z00_5690), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1237z00_6263)))->BgL_objz00) =
					((obj_t) BgL_obj1049z00_5691), BUNSPEC);
				((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
							COBJECT(BgL_new1237z00_6263))->BgL_indexz00) =
					((obj_t) BgL_index1050z00_5692), BUNSPEC);
				return BgL_new1237z00_6263;
			}
		}

	}



/* &lambda1931 */
	obj_t BGl_z62lambda1931z62zz__objectz00(obj_t BgL_envz00_5693,
		obj_t BgL_oz00_5694, obj_t BgL_vz00_5695)
	{
		{	/* Llib/object.scm 226 */
			return
				((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt) COBJECT(
							((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
								BgL_oz00_5694)))->BgL_indexz00) =
				((obj_t) BgL_vz00_5695), BUNSPEC);
		}

	}



/* &lambda1930 */
	obj_t BGl_z62lambda1930z62zz__objectz00(obj_t BgL_envz00_5696,
		obj_t BgL_oz00_5697)
	{
		{	/* Llib/object.scm 226 */
			return
				(((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt) COBJECT(
						((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
							BgL_oz00_5697)))->BgL_indexz00);
		}

	}



/* &<@anonymous:1910> */
	obj_t BGl_z62zc3z04anonymousza31910ze3ze5zz__objectz00(obj_t BgL_envz00_5698,
		obj_t BgL_new1042z00_5699)
	{
		{	/* Llib/object.scm 224 */
			{
				BgL_z62typezd2errorzb0_bglt BgL_auxz00_9292;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62typezd2errorzb0_bglt) BgL_new1042z00_5699))))->
						BgL_fnamez00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) ((BgL_z62typezd2errorzb0_bglt)
										BgL_new1042z00_5699))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) ((BgL_z62typezd2errorzb0_bglt)
										BgL_new1042z00_5699))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) ((BgL_z62typezd2errorzb0_bglt)
										BgL_new1042z00_5699))))->BgL_procz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) ((BgL_z62typezd2errorzb0_bglt)
										BgL_new1042z00_5699))))->BgL_msgz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt)
							COBJECT(((BgL_z62errorz62_bglt) ((BgL_z62typezd2errorzb0_bglt)
										BgL_new1042z00_5699))))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62typezd2errorzb0_bglt) COBJECT(((BgL_z62typezd2errorzb0_bglt)
									BgL_new1042z00_5699)))->BgL_typez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_9292 = ((BgL_z62typezd2errorzb0_bglt) BgL_new1042z00_5699);
				return ((obj_t) BgL_auxz00_9292);
			}
		}

	}



/* &lambda1908 */
	BgL_z62typezd2errorzb0_bglt BGl_z62lambda1908z62zz__objectz00(obj_t
		BgL_envz00_5700)
	{
		{	/* Llib/object.scm 224 */
			{	/* Llib/object.scm 224 */
				BgL_z62typezd2errorzb0_bglt BgL_new1041z00_6270;

				BgL_new1041z00_6270 =
					((BgL_z62typezd2errorzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62typezd2errorzb0_bgl))));
				{	/* Llib/object.scm 224 */
					long BgL_arg1909z00_6271;

					{	/* Llib/object.scm 224 */
						long BgL_res2832z00_6272;

						BgL_res2832z00_6272 =
							BGL_CLASS_INDEX(BGl_z62typezd2errorzb0zz__objectz00);
						BgL_arg1909z00_6271 = BgL_res2832z00_6272;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1041z00_6270), BgL_arg1909z00_6271);
				}
				return BgL_new1041z00_6270;
			}
		}

	}



/* &lambda1906 */
	BgL_z62typezd2errorzb0_bglt BGl_z62lambda1906z62zz__objectz00(obj_t
		BgL_envz00_5701, obj_t BgL_fname1034z00_5702,
		obj_t BgL_location1035z00_5703, obj_t BgL_stack1036z00_5704,
		obj_t BgL_proc1037z00_5705, obj_t BgL_msg1038z00_5706,
		obj_t BgL_obj1039z00_5707, obj_t BgL_type1040z00_5708)
	{
		{	/* Llib/object.scm 224 */
			{	/* Llib/object.scm 224 */
				BgL_z62typezd2errorzb0_bglt BgL_new1235z00_6273;

				{	/* Llib/object.scm 224 */
					BgL_z62typezd2errorzb0_bglt BgL_new1234z00_6274;

					BgL_new1234z00_6274 =
						((BgL_z62typezd2errorzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62typezd2errorzb0_bgl))));
					{	/* Llib/object.scm 224 */
						long BgL_arg1907z00_6275;

						{	/* Llib/object.scm 224 */
							long BgL_res2831z00_6276;

							BgL_res2831z00_6276 =
								BGL_CLASS_INDEX(BGl_z62typezd2errorzb0zz__objectz00);
							BgL_arg1907z00_6275 = BgL_res2831z00_6276;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1234z00_6274), BgL_arg1907z00_6275);
					}
					BgL_new1235z00_6273 = BgL_new1234z00_6274;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1235z00_6273)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1034z00_5702), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1235z00_6273)))->BgL_locationz00) =
					((obj_t) BgL_location1035z00_5703), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1235z00_6273)))->BgL_stackz00) =
					((obj_t) BgL_stack1036z00_5704), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1235z00_6273)))->BgL_procz00) =
					((obj_t) BgL_proc1037z00_5705), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1235z00_6273)))->BgL_msgz00) =
					((obj_t) BgL_msg1038z00_5706), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1235z00_6273)))->BgL_objz00) =
					((obj_t) BgL_obj1039z00_5707), BUNSPEC);
				((((BgL_z62typezd2errorzb0_bglt) COBJECT(BgL_new1235z00_6273))->
						BgL_typez00) = ((obj_t) BgL_type1040z00_5708), BUNSPEC);
				return BgL_new1235z00_6273;
			}
		}

	}



/* &lambda1915 */
	obj_t BGl_z62lambda1915z62zz__objectz00(obj_t BgL_envz00_5709,
		obj_t BgL_oz00_5710, obj_t BgL_vz00_5711)
	{
		{	/* Llib/object.scm 224 */
			return
				((((BgL_z62typezd2errorzb0_bglt) COBJECT(
							((BgL_z62typezd2errorzb0_bglt) BgL_oz00_5710)))->BgL_typez00) =
				((obj_t) BgL_vz00_5711), BUNSPEC);
		}

	}



/* &lambda1914 */
	obj_t BGl_z62lambda1914z62zz__objectz00(obj_t BgL_envz00_5712,
		obj_t BgL_oz00_5713)
	{
		{	/* Llib/object.scm 224 */
			return
				(((BgL_z62typezd2errorzb0_bglt) COBJECT(
						((BgL_z62typezd2errorzb0_bglt) BgL_oz00_5713)))->BgL_typez00);
		}

	}



/* &<@anonymous:1884> */
	obj_t BGl_z62zc3z04anonymousza31884ze3ze5zz__objectz00(obj_t BgL_envz00_5714,
		obj_t BgL_new1032z00_5715)
	{
		{	/* Llib/object.scm 220 */
			{
				BgL_z62errorz62_bglt BgL_auxz00_9340;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt)
									((BgL_z62errorz62_bglt) BgL_new1032z00_5715))))->
						BgL_fnamez00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) ((BgL_z62errorz62_bglt)
										BgL_new1032z00_5715))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt)
							COBJECT(((BgL_z62exceptionz62_bglt) ((BgL_z62errorz62_bglt)
										BgL_new1032z00_5715))))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1032z00_5715)))->BgL_procz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1032z00_5715)))->BgL_msgz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
									BgL_new1032z00_5715)))->BgL_objz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_9340 = ((BgL_z62errorz62_bglt) BgL_new1032z00_5715);
				return ((obj_t) BgL_auxz00_9340);
			}
		}

	}



/* &lambda1882 */
	BgL_z62errorz62_bglt BGl_z62lambda1882z62zz__objectz00(obj_t BgL_envz00_5716)
	{
		{	/* Llib/object.scm 220 */
			{	/* Llib/object.scm 220 */
				BgL_z62errorz62_bglt BgL_new1031z00_6280;

				BgL_new1031z00_6280 =
					((BgL_z62errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62errorz62_bgl))));
				{	/* Llib/object.scm 220 */
					long BgL_arg1883z00_6281;

					{	/* Llib/object.scm 220 */
						long BgL_res2829z00_6282;

						BgL_res2829z00_6282 = BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00);
						BgL_arg1883z00_6281 = BgL_res2829z00_6282;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1031z00_6280), BgL_arg1883z00_6281);
				}
				return BgL_new1031z00_6280;
			}
		}

	}



/* &lambda1880 */
	BgL_z62errorz62_bglt BGl_z62lambda1880z62zz__objectz00(obj_t BgL_envz00_5717,
		obj_t BgL_fname1025z00_5718, obj_t BgL_location1026z00_5719,
		obj_t BgL_stack1027z00_5720, obj_t BgL_proc1028z00_5721,
		obj_t BgL_msg1029z00_5722, obj_t BgL_obj1030z00_5723)
	{
		{	/* Llib/object.scm 220 */
			{	/* Llib/object.scm 220 */
				BgL_z62errorz62_bglt BgL_new1233z00_6283;

				{	/* Llib/object.scm 220 */
					BgL_z62errorz62_bglt BgL_new1232z00_6284;

					BgL_new1232z00_6284 =
						((BgL_z62errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62errorz62_bgl))));
					{	/* Llib/object.scm 220 */
						long BgL_arg1881z00_6285;

						{	/* Llib/object.scm 220 */
							long BgL_res2828z00_6286;

							BgL_res2828z00_6286 =
								BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00);
							BgL_arg1881z00_6285 = BgL_res2828z00_6286;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1232z00_6284), BgL_arg1881z00_6285);
					}
					BgL_new1233z00_6283 = BgL_new1232z00_6284;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1233z00_6283)))->
						BgL_fnamez00) = ((obj_t) BgL_fname1025z00_5718), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1233z00_6283)))->BgL_locationz00) =
					((obj_t) BgL_location1026z00_5719), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1233z00_6283)))->BgL_stackz00) =
					((obj_t) BgL_stack1027z00_5720), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(BgL_new1233z00_6283))->BgL_procz00) =
					((obj_t) BgL_proc1028z00_5721), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(BgL_new1233z00_6283))->BgL_msgz00) =
					((obj_t) BgL_msg1029z00_5722), BUNSPEC);
				((((BgL_z62errorz62_bglt) COBJECT(BgL_new1233z00_6283))->BgL_objz00) =
					((obj_t) BgL_obj1030z00_5723), BUNSPEC);
				return BgL_new1233z00_6283;
			}
		}

	}



/* &lambda1900 */
	obj_t BGl_z62lambda1900z62zz__objectz00(obj_t BgL_envz00_5724,
		obj_t BgL_oz00_5725, obj_t BgL_vz00_5726)
	{
		{	/* Llib/object.scm 220 */
			return
				((((BgL_z62errorz62_bglt) COBJECT(
							((BgL_z62errorz62_bglt) BgL_oz00_5725)))->BgL_objz00) =
				((obj_t) BgL_vz00_5726), BUNSPEC);
		}

	}



/* &lambda1899 */
	obj_t BGl_z62lambda1899z62zz__objectz00(obj_t BgL_envz00_5727,
		obj_t BgL_oz00_5728)
	{
		{	/* Llib/object.scm 220 */
			return
				(((BgL_z62errorz62_bglt) COBJECT(
						((BgL_z62errorz62_bglt) BgL_oz00_5728)))->BgL_objz00);
		}

	}



/* &lambda1895 */
	obj_t BGl_z62lambda1895z62zz__objectz00(obj_t BgL_envz00_5729,
		obj_t BgL_oz00_5730, obj_t BgL_vz00_5731)
	{
		{	/* Llib/object.scm 220 */
			return
				((((BgL_z62errorz62_bglt) COBJECT(
							((BgL_z62errorz62_bglt) BgL_oz00_5730)))->BgL_msgz00) =
				((obj_t) BgL_vz00_5731), BUNSPEC);
		}

	}



/* &lambda1894 */
	obj_t BGl_z62lambda1894z62zz__objectz00(obj_t BgL_envz00_5732,
		obj_t BgL_oz00_5733)
	{
		{	/* Llib/object.scm 220 */
			return
				(((BgL_z62errorz62_bglt) COBJECT(
						((BgL_z62errorz62_bglt) BgL_oz00_5733)))->BgL_msgz00);
		}

	}



/* &lambda1889 */
	obj_t BGl_z62lambda1889z62zz__objectz00(obj_t BgL_envz00_5734,
		obj_t BgL_oz00_5735, obj_t BgL_vz00_5736)
	{
		{	/* Llib/object.scm 220 */
			return
				((((BgL_z62errorz62_bglt) COBJECT(
							((BgL_z62errorz62_bglt) BgL_oz00_5735)))->BgL_procz00) =
				((obj_t) BgL_vz00_5736), BUNSPEC);
		}

	}



/* &lambda1888 */
	obj_t BGl_z62lambda1888z62zz__objectz00(obj_t BgL_envz00_5737,
		obj_t BgL_oz00_5738)
	{
		{	/* Llib/object.scm 220 */
			return
				(((BgL_z62errorz62_bglt) COBJECT(
						((BgL_z62errorz62_bglt) BgL_oz00_5738)))->BgL_procz00);
		}

	}



/* &<@anonymous:1848> */
	obj_t BGl_z62zc3z04anonymousza31848ze3ze5zz__objectz00(obj_t BgL_envz00_5739,
		obj_t BgL_new1023z00_5740)
	{
		{	/* Llib/object.scm 215 */
			{
				BgL_z62exceptionz62_bglt BgL_auxz00_9387;

				((((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_new1023z00_5740)))->
						BgL_fnamez00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1023z00_5740)))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
									BgL_new1023z00_5740)))->BgL_stackz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_9387 = ((BgL_z62exceptionz62_bglt) BgL_new1023z00_5740);
				return ((obj_t) BgL_auxz00_9387);
			}
		}

	}



/* &lambda1846 */
	BgL_z62exceptionz62_bglt BGl_z62lambda1846z62zz__objectz00(obj_t
		BgL_envz00_5741)
	{
		{	/* Llib/object.scm 215 */
			{	/* Llib/object.scm 215 */
				BgL_z62exceptionz62_bglt BgL_new1022z00_6294;

				BgL_new1022z00_6294 =
					((BgL_z62exceptionz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62exceptionz62_bgl))));
				{	/* Llib/object.scm 215 */
					long BgL_arg1847z00_6295;

					{	/* Llib/object.scm 215 */
						long BgL_res2824z00_6296;

						BgL_res2824z00_6296 =
							BGL_CLASS_INDEX(BGl_z62exceptionz62zz__objectz00);
						BgL_arg1847z00_6295 = BgL_res2824z00_6296;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1022z00_6294), BgL_arg1847z00_6295);
				}
				return BgL_new1022z00_6294;
			}
		}

	}



/* &lambda1842 */
	BgL_z62exceptionz62_bglt BGl_z62lambda1842z62zz__objectz00(obj_t
		BgL_envz00_5742, obj_t BgL_fname1019z00_5743,
		obj_t BgL_location1020z00_5744, obj_t BgL_stack1021z00_5745)
	{
		{	/* Llib/object.scm 215 */
			{	/* Llib/object.scm 215 */
				BgL_z62exceptionz62_bglt BgL_new1231z00_6297;

				{	/* Llib/object.scm 215 */
					BgL_z62exceptionz62_bglt BgL_new1230z00_6298;

					BgL_new1230z00_6298 =
						((BgL_z62exceptionz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62exceptionz62_bgl))));
					{	/* Llib/object.scm 215 */
						long BgL_arg1845z00_6299;

						{	/* Llib/object.scm 215 */
							long BgL_res2823z00_6300;

							BgL_res2823z00_6300 =
								BGL_CLASS_INDEX(BGl_z62exceptionz62zz__objectz00);
							BgL_arg1845z00_6299 = BgL_res2823z00_6300;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1230z00_6298), BgL_arg1845z00_6299);
					}
					BgL_new1231z00_6297 = BgL_new1230z00_6298;
				}
				((((BgL_z62exceptionz62_bglt) COBJECT(BgL_new1231z00_6297))->
						BgL_fnamez00) = ((obj_t) BgL_fname1019z00_5743), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(BgL_new1231z00_6297))->
						BgL_locationz00) = ((obj_t) BgL_location1020z00_5744), BUNSPEC);
				((((BgL_z62exceptionz62_bglt) COBJECT(BgL_new1231z00_6297))->
						BgL_stackz00) = ((obj_t) BgL_stack1021z00_5745), BUNSPEC);
				return BgL_new1231z00_6297;
			}
		}

	}



/* &<@anonymous:1873> */
	obj_t BGl_z62zc3z04anonymousza31873ze3ze5zz__objectz00(obj_t BgL_envz00_5746)
	{
		{	/* Llib/object.scm 215 */
			{	/* Llib/object.scm 218 */

				{	/* Llib/object.scm 218 */

					return BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
				}
			}
		}

	}



/* &lambda1872 */
	obj_t BGl_z62lambda1872z62zz__objectz00(obj_t BgL_envz00_5747,
		obj_t BgL_oz00_5748, obj_t BgL_vz00_5749)
	{
		{	/* Llib/object.scm 215 */
			return
				((((BgL_z62exceptionz62_bglt) COBJECT(
							((BgL_z62exceptionz62_bglt) BgL_oz00_5748)))->BgL_stackz00) =
				((obj_t) BgL_vz00_5749), BUNSPEC);
		}

	}



/* &lambda1871 */
	obj_t BGl_z62lambda1871z62zz__objectz00(obj_t BgL_envz00_5750,
		obj_t BgL_oz00_5751)
	{
		{	/* Llib/object.scm 215 */
			return
				(((BgL_z62exceptionz62_bglt) COBJECT(
						((BgL_z62exceptionz62_bglt) BgL_oz00_5751)))->BgL_stackz00);
		}

	}



/* &<@anonymous:1864> */
	obj_t BGl_z62zc3z04anonymousza31864ze3ze5zz__objectz00(obj_t BgL_envz00_5752)
	{
		{	/* Llib/object.scm 215 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1863 */
	obj_t BGl_z62lambda1863z62zz__objectz00(obj_t BgL_envz00_5753,
		obj_t BgL_oz00_5754, obj_t BgL_vz00_5755)
	{
		{	/* Llib/object.scm 215 */
			return
				((((BgL_z62exceptionz62_bglt) COBJECT(
							((BgL_z62exceptionz62_bglt) BgL_oz00_5754)))->BgL_locationz00) =
				((obj_t) BgL_vz00_5755), BUNSPEC);
		}

	}



/* &lambda1862 */
	obj_t BGl_z62lambda1862z62zz__objectz00(obj_t BgL_envz00_5756,
		obj_t BgL_oz00_5757)
	{
		{	/* Llib/object.scm 215 */
			return
				(((BgL_z62exceptionz62_bglt) COBJECT(
						((BgL_z62exceptionz62_bglt) BgL_oz00_5757)))->BgL_locationz00);
		}

	}



/* &<@anonymous:1856> */
	obj_t BGl_z62zc3z04anonymousza31856ze3ze5zz__objectz00(obj_t BgL_envz00_5758)
	{
		{	/* Llib/object.scm 215 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1855 */
	obj_t BGl_z62lambda1855z62zz__objectz00(obj_t BgL_envz00_5759,
		obj_t BgL_oz00_5760, obj_t BgL_vz00_5761)
	{
		{	/* Llib/object.scm 215 */
			return
				((((BgL_z62exceptionz62_bglt) COBJECT(
							((BgL_z62exceptionz62_bglt) BgL_oz00_5760)))->BgL_fnamez00) =
				((obj_t) BgL_vz00_5761), BUNSPEC);
		}

	}



/* &lambda1854 */
	obj_t BGl_z62lambda1854z62zz__objectz00(obj_t BgL_envz00_5762,
		obj_t BgL_oz00_5763)
	{
		{	/* Llib/object.scm 215 */
			return
				(((BgL_z62exceptionz62_bglt) COBJECT(
						((BgL_z62exceptionz62_bglt) BgL_oz00_5763)))->BgL_fnamez00);
		}

	}



/* &<@anonymous:1833> */
	obj_t BGl_z62zc3z04anonymousza31833ze3ze5zz__objectz00(obj_t BgL_envz00_5764,
		obj_t BgL_new1017z00_5765)
	{
		{	/* Llib/object.scm 213 */
			return ((obj_t) ((BgL_z62conditionz62_bglt) BgL_new1017z00_5765));
		}

	}



/* &lambda1831 */
	BgL_z62conditionz62_bglt BGl_z62lambda1831z62zz__objectz00(obj_t
		BgL_envz00_5766)
	{
		{	/* Llib/object.scm 213 */
			{	/* Llib/object.scm 213 */
				BgL_z62conditionz62_bglt BgL_new1016z00_6308;

				BgL_new1016z00_6308 =
					((BgL_z62conditionz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_z62conditionz62_bgl))));
				{	/* Llib/object.scm 213 */
					long BgL_arg1832z00_6309;

					{	/* Llib/object.scm 213 */
						long BgL_res2819z00_6310;

						BgL_res2819z00_6310 =
							BGL_CLASS_INDEX(BGl_z62conditionz62zz__objectz00);
						BgL_arg1832z00_6309 = BgL_res2819z00_6310;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1016z00_6308), BgL_arg1832z00_6309);
				}
				return BgL_new1016z00_6308;
			}
		}

	}



/* &lambda1829 */
	BgL_z62conditionz62_bglt BGl_z62lambda1829z62zz__objectz00(obj_t
		BgL_envz00_5767)
	{
		{	/* Llib/object.scm 213 */
			{	/* Llib/object.scm 213 */
				BgL_z62conditionz62_bglt BgL_new1229z00_6311;

				{	/* Llib/object.scm 213 */
					BgL_z62conditionz62_bglt BgL_new1228z00_6312;

					BgL_new1228z00_6312 =
						((BgL_z62conditionz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_z62conditionz62_bgl))));
					{	/* Llib/object.scm 213 */
						long BgL_arg1830z00_6313;

						{	/* Llib/object.scm 213 */
							long BgL_res2818z00_6314;

							BgL_res2818z00_6314 =
								BGL_CLASS_INDEX(BGl_z62conditionz62zz__objectz00);
							BgL_arg1830z00_6313 = BgL_res2818z00_6314;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1228z00_6312), BgL_arg1830z00_6313);
					}
					BgL_new1229z00_6311 = BgL_new1228z00_6312;
				}
				return BgL_new1229z00_6311;
			}
		}

	}



/* &<@anonymous:1823> */
	obj_t BGl_z62zc3z04anonymousza31823ze3ze5zz__objectz00(obj_t BgL_envz00_5768,
		obj_t BgL_new1014z00_5769)
	{
		{	/* Llib/object.scm 212 */
			return ((obj_t) ((BgL_objectz00_bglt) BgL_new1014z00_5769));
		}

	}



/* &lambda1821 */
	BgL_objectz00_bglt BGl_z62lambda1821z62zz__objectz00(obj_t BgL_envz00_5770)
	{
		{	/* Llib/object.scm 212 */
			{	/* Llib/object.scm 212 */
				BgL_objectz00_bglt BgL_new1013z00_6316;

				BgL_new1013z00_6316 =
					((BgL_objectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_objectz00_bgl))));
				{	/* Llib/object.scm 212 */
					long BgL_arg1822z00_6317;

					{	/* Llib/object.scm 212 */
						long BgL_res2817z00_6318;

						BgL_res2817z00_6318 = BGL_CLASS_INDEX(BGl_objectz00zz__objectz00);
						BgL_arg1822z00_6317 = BgL_res2817z00_6318;
					}
					BGL_OBJECT_CLASS_NUM_SET(BgL_new1013z00_6316, BgL_arg1822z00_6317);
				}
				return BgL_new1013z00_6316;
			}
		}

	}



/* &lambda1819 */
	BgL_objectz00_bglt BGl_z62lambda1819z62zz__objectz00(obj_t BgL_envz00_5771)
	{
		{	/* Llib/object.scm 212 */
			{	/* Llib/object.scm 212 */
				BgL_objectz00_bglt BgL_new1227z00_6319;

				{	/* Llib/object.scm 212 */
					BgL_objectz00_bglt BgL_new1226z00_6320;

					BgL_new1226z00_6320 =
						((BgL_objectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_objectz00_bgl))));
					{	/* Llib/object.scm 212 */
						long BgL_arg1820z00_6321;

						{	/* Llib/object.scm 212 */
							long BgL_res2816z00_6322;

							BgL_res2816z00_6322 = BGL_CLASS_INDEX(BGl_objectz00zz__objectz00);
							BgL_arg1820z00_6321 = BgL_res2816z00_6322;
						}
						BGL_OBJECT_CLASS_NUM_SET(BgL_new1226z00_6320, BgL_arg1820z00_6321);
					}
					BgL_new1227z00_6319 = BgL_new1226z00_6320;
				}
				return BgL_new1227z00_6319;
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__objectz00()
	{
		{	/* Llib/object.scm 17 */
			{	/* Llib/object.scm 17 */
				obj_t BgL_classzd2minzd2_4434;

				BgL_classzd2minzd2_4434 = BGl_objectz00zz__objectz00;
				{	/* Llib/object.scm 1065 */
					obj_t BgL_top4073z00_9441;

					BgL_top4073z00_9441 = BGL_EXITD_TOP_AS_OBJ();
					BGL_MUTEX_LOCK(bigloo_generic_mutex);
					BGL_EXITD_PUSH_PROTECT(BgL_top4073z00_9441, bigloo_generic_mutex);
					BUNSPEC;
					{	/* Llib/object.scm 1065 */
						obj_t BgL_tmp4072z00_9440;

						BgL_tmp4072z00_9440 =
							BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
							(BGl_objectzd2displayzd2envz00zz__objectz00,
							BGl_proc3517z00zz__objectz00, BGl_string3518z00zz__objectz00);
						BGL_EXITD_POP_PROTECT(BgL_top4073z00_9441);
						BUNSPEC;
						BGL_MUTEX_UNLOCK(bigloo_generic_mutex);
						BgL_tmp4072z00_9440;
					}
				}
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_classzd2minzd2_4441;

				BgL_classzd2minzd2_4441 = BGl_objectz00zz__objectz00;
				{	/* Llib/object.scm 1065 */
					obj_t BgL_top4075z00_9449;

					BgL_top4075z00_9449 = BGL_EXITD_TOP_AS_OBJ();
					BGL_MUTEX_LOCK(bigloo_generic_mutex);
					BGL_EXITD_PUSH_PROTECT(BgL_top4075z00_9449, bigloo_generic_mutex);
					BUNSPEC;
					{	/* Llib/object.scm 1065 */
						obj_t BgL_tmp4074z00_9448;

						BgL_tmp4074z00_9448 =
							BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
							(BGl_objectzd2writezd2envz00zz__objectz00,
							BGl_proc3519z00zz__objectz00, BGl_string3520z00zz__objectz00);
						BGL_EXITD_POP_PROTECT(BgL_top4075z00_9449);
						BUNSPEC;
						BGL_MUTEX_UNLOCK(bigloo_generic_mutex);
						BgL_tmp4074z00_9448;
					}
				}
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_classzd2minzd2_4442;

				BgL_classzd2minzd2_4442 = BGl_objectz00zz__objectz00;
				{	/* Llib/object.scm 1065 */
					obj_t BgL_top4077z00_9457;

					BgL_top4077z00_9457 = BGL_EXITD_TOP_AS_OBJ();
					BGL_MUTEX_LOCK(bigloo_generic_mutex);
					BGL_EXITD_PUSH_PROTECT(BgL_top4077z00_9457, bigloo_generic_mutex);
					BUNSPEC;
					{	/* Llib/object.scm 1065 */
						obj_t BgL_tmp4076z00_9456;

						BgL_tmp4076z00_9456 =
							BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
							(BGl_objectzd2hashnumberzd2envz00zz__objectz00,
							BGl_proc3521z00zz__objectz00, BGl_string3522z00zz__objectz00);
						BGL_EXITD_POP_PROTECT(BgL_top4077z00_9457);
						BUNSPEC;
						BGL_MUTEX_UNLOCK(bigloo_generic_mutex);
						BgL_tmp4076z00_9456;
					}
				}
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_classzd2minzd2_4515;

				BgL_classzd2minzd2_4515 = BGl_objectz00zz__objectz00;
				{	/* Llib/object.scm 1065 */
					obj_t BgL_top4079z00_9465;

					BgL_top4079z00_9465 = BGL_EXITD_TOP_AS_OBJ();
					BGL_MUTEX_LOCK(bigloo_generic_mutex);
					BGL_EXITD_PUSH_PROTECT(BgL_top4079z00_9465, bigloo_generic_mutex);
					BUNSPEC;
					{	/* Llib/object.scm 1065 */
						obj_t BgL_tmp4078z00_9464;

						BgL_tmp4078z00_9464 =
							BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
							(BGl_objectzd2printzd2envz00zz__objectz00,
							BGl_proc3523z00zz__objectz00, BGl_string3524z00zz__objectz00);
						BGL_EXITD_POP_PROTECT(BgL_top4079z00_9465);
						BUNSPEC;
						BGL_MUTEX_UNLOCK(bigloo_generic_mutex);
						BgL_tmp4078z00_9464;
					}
				}
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_classzd2minzd2_4559;

				BgL_classzd2minzd2_4559 = BGl_objectz00zz__objectz00;
				{	/* Llib/object.scm 1065 */
					obj_t BgL_top4081z00_9473;

					BgL_top4081z00_9473 = BGL_EXITD_TOP_AS_OBJ();
					BGL_MUTEX_LOCK(bigloo_generic_mutex);
					BGL_EXITD_PUSH_PROTECT(BgL_top4081z00_9473, bigloo_generic_mutex);
					BUNSPEC;
					{	/* Llib/object.scm 1065 */
						obj_t BgL_tmp4080z00_9472;

						BgL_tmp4080z00_9472 =
							BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
							(BGl_objectzd2equalzf3zd2envzf3zz__objectz00,
							BGl_proc3525z00zz__objectz00, BGl_string3526z00zz__objectz00);
						BGL_EXITD_POP_PROTECT(BgL_top4081z00_9473);
						BUNSPEC;
						BGL_MUTEX_UNLOCK(bigloo_generic_mutex);
						BgL_tmp4080z00_9472;
					}
				}
			}
			{	/* Llib/object.scm 1065 */
				obj_t BgL_top4083z00_9481;

				BgL_top4083z00_9481 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(bigloo_generic_mutex);
				BGL_EXITD_PUSH_PROTECT(BgL_top4083z00_9481, bigloo_generic_mutex);
				BUNSPEC;
				{	/* Llib/object.scm 1065 */
					obj_t BgL_tmp4082z00_9480;

					BgL_tmp4082z00_9480 =
						BGl_registerzd2genericzd2sanszd2lockz12zc0zz__objectz00
						(BGl_exceptionzd2notifyzd2envz00zz__objectz00,
						BGl_proc3527z00zz__objectz00, BGl_string3528z00zz__objectz00);
					BGL_EXITD_POP_PROTECT(BgL_top4083z00_9481);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(bigloo_generic_mutex);
					return BgL_tmp4082z00_9480;
				}
			}
		}

	}



/* &exception-notify1400 */
	obj_t BGl_z62exceptionzd2notify1400zb0zz__objectz00(obj_t BgL_envz00_5784,
		obj_t BgL_excz00_5785)
	{
		{	/* Llib/object.scm 1383 */
			{	/* Llib/object.scm 1384 */
				obj_t BgL_portz00_6323;

				{	/* Llib/object.scm 1384 */
					obj_t BgL_res2901z00_6324;

					{	/* Llib/object.scm 1384 */
						obj_t BgL_tmpz00_9488;

						BgL_tmpz00_9488 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2901z00_6324 = BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_9488);
					}
					BgL_portz00_6323 = BgL_res2901z00_6324;
				}
				bgl_display_string(BGl_string3529z00zz__objectz00, BgL_portz00_6323);
				BGl_writezd2circlezd2zz__pp_circlez00(BgL_excz00_5785,
					BgL_portz00_6323);
				if (CBOOL(BGl_currentzd2threadzd2zz__threadz00()))
					{	/* Llib/object.scm 1387 */
						bgl_display_string(BGl_string3530z00zz__objectz00,
							BgL_portz00_6323);
						bgl_display_obj(BGl_currentzd2threadzd2zz__threadz00(),
							BgL_portz00_6323);
						bgl_display_string(BGl_string3531z00zz__objectz00,
							BgL_portz00_6323);
					}
				else
					{	/* Llib/object.scm 1387 */
						BFALSE;
					}
				bgl_display_char(((unsigned char) 10), BgL_portz00_6323);
				{	/* Llib/object.scm 1392 */
					obj_t BgL_stackz00_6325;

					if (BGl_isazf3zf3zz__objectz00(BgL_excz00_5785,
							BGl_z62exceptionz62zz__objectz00))
						{	/* Llib/object.scm 1394 */
							obj_t BgL__ortest_1224z00_6326;

							BgL__ortest_1224z00_6326 =
								(((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt) BgL_excz00_5785)))->
								BgL_stackz00);
							if (CBOOL(BgL__ortest_1224z00_6326))
								{	/* Llib/object.scm 1394 */
									BgL_stackz00_6325 = BgL__ortest_1224z00_6326;
								}
							else
								{	/* Llib/object.scm 1394 */

									{	/* Llib/object.scm 1394 */

										BgL_stackz00_6325 =
											BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
									}
								}
						}
					else
						{	/* Llib/object.scm 1395 */

							{	/* Llib/object.scm 1395 */

								BgL_stackz00_6325 =
									BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
							}
						}
					{	/* Llib/object.scm 1392 */

						return
							BGl_displayzd2tracezd2stackz00zz__errorz00(BgL_stackz00_6325,
							BgL_portz00_6323, BINT(((long) 1)));
		}}}}

	}



/* &object-equal?1398 */
	obj_t BGl_z62objectzd2equalzf31398z43zz__objectz00(obj_t BgL_envz00_5786,
		obj_t BgL_obj1z00_5787, obj_t BgL_obj2z00_5788)
	{
		{	/* Llib/object.scm 1363 */
			{	/* Llib/object.scm 1367 */
				bool_t BgL_tmpz00_9511;

				{	/* Llib/object.scm 1367 */
					obj_t BgL_class1z00_6329;
					obj_t BgL_class2z00_6330;

					{	/* Llib/object.scm 838 */
						long BgL_arg1547z00_6331;

						{	/* Llib/object.scm 838 */
							long BgL_arg1551z00_6332;

							{	/* Llib/object.scm 838 */
								long BgL_res2892z00_6333;

								BgL_res2892z00_6333 =
									BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_obj1z00_5787));
								BgL_arg1551z00_6332 = BgL_res2892z00_6333;
							}
							BgL_arg1547z00_6331 = (BgL_arg1551z00_6332 - OBJECT_TYPE);
						}
						BgL_class1z00_6329 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
							BgL_arg1547z00_6331);
					}
					{	/* Llib/object.scm 838 */
						long BgL_arg1547z00_6334;

						{	/* Llib/object.scm 838 */
							long BgL_arg1551z00_6335;

							{	/* Llib/object.scm 838 */
								long BgL_res2894z00_6336;

								BgL_res2894z00_6336 =
									BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_obj2z00_5788));
								BgL_arg1551z00_6335 = BgL_res2894z00_6336;
							}
							BgL_arg1547z00_6334 = (BgL_arg1551z00_6335 - OBJECT_TYPE);
						}
						BgL_class2z00_6330 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
							BgL_arg1547z00_6334);
					}
					if ((BgL_class1z00_6329 == BgL_class2z00_6330))
						{	/* Llib/object.scm 1370 */
							obj_t BgL_fieldsz00_6337;

							{	/* Llib/object.scm 1370 */
								obj_t BgL_res2896z00_6338;

								{	/* Llib/object.scm 531 */
									obj_t BgL_tmpz00_9522;

									BgL_tmpz00_9522 = ((obj_t) BgL_class1z00_6329);
									BgL_res2896z00_6338 = BGL_CLASS_ALL_FIELDS(BgL_tmpz00_9522);
								}
								BgL_fieldsz00_6337 = BgL_res2896z00_6338;
							}
							{	/* Llib/object.scm 1371 */
								long BgL_g1222z00_6339;

								BgL_g1222z00_6339 =
									(VECTOR_LENGTH(BgL_fieldsz00_6337) - ((long) 1));
								{
									long BgL_iz00_6341;

									BgL_iz00_6341 = BgL_g1222z00_6339;
								BgL_loopz00_6340:
									if ((BgL_iz00_6341 == ((long) -1)))
										{	/* Llib/object.scm 1373 */
											BgL_tmpz00_9511 = ((bool_t) 1);
										}
									else
										{	/* Llib/object.scm 1375 */
											bool_t BgL_test4089z00_9529;

											{	/* Llib/object.scm 1375 */
												obj_t BgL_arg2179z00_6342;

												BgL_arg2179z00_6342 =
													VECTOR_REF(BgL_fieldsz00_6337, BgL_iz00_6341);
												{	/* Llib/object.scm 1365 */
													obj_t BgL_getzd2valuezd2_6343;

													{	/* Llib/object.scm 1365 */
														obj_t BgL_res2899z00_6344;

														{	/* Llib/object.scm 577 */
															obj_t BgL_vectorz00_6345;

															BgL_vectorz00_6345 =
																((obj_t) BgL_arg2179z00_6342);
															BgL_res2899z00_6344 =
																VECTOR_REF(BgL_vectorz00_6345, ((long) 1));
														}
														BgL_getzd2valuezd2_6343 = BgL_res2899z00_6344;
													}
													{	/* Llib/object.scm 1366 */
														obj_t BgL_arg2182z00_6346;
														obj_t BgL_arg2183z00_6347;

														BgL_arg2182z00_6346 =
															PROCEDURE_ENTRY(BgL_getzd2valuezd2_6343)
															(BgL_getzd2valuezd2_6343,
															((obj_t) ((BgL_objectz00_bglt) BgL_obj1z00_5787)),
															BEOA);
														BgL_arg2183z00_6347 =
															PROCEDURE_ENTRY(BgL_getzd2valuezd2_6343)
															(BgL_getzd2valuezd2_6343,
															((obj_t) ((BgL_objectz00_bglt) BgL_obj2z00_5788)),
															BEOA);
														BgL_test4089z00_9529 =
															BGl_equalzf3zf3zz__r4_equivalence_6_2z00
															(BgL_arg2182z00_6346, BgL_arg2183z00_6347);
											}}}
											if (BgL_test4089z00_9529)
												{
													long BgL_iz00_9546;

													BgL_iz00_9546 = (BgL_iz00_6341 - ((long) 1));
													BgL_iz00_6341 = BgL_iz00_9546;
													goto BgL_loopz00_6340;
												}
											else
												{	/* Llib/object.scm 1375 */
													BgL_tmpz00_9511 = ((bool_t) 0);
												}
										}
								}
							}
						}
					else
						{	/* Llib/object.scm 1369 */
							BgL_tmpz00_9511 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_9511);
			}
		}

	}



/* &object-print1394 */
	obj_t BGl_z62objectzd2print1394zb0zz__objectz00(obj_t BgL_envz00_5789,
		obj_t BgL_objz00_5790, obj_t BgL_portz00_5791,
		obj_t BgL_printzd2slotzd2_5792)
	{
		{	/* Llib/object.scm 1333 */
			{
				obj_t BgL_fieldz00_6352;

				{	/* Llib/object.scm 1345 */
					obj_t BgL_classz00_6360;

					{	/* Llib/object.scm 838 */
						long BgL_arg1547z00_6361;

						{	/* Llib/object.scm 838 */
							long BgL_arg1551z00_6362;

							{	/* Llib/object.scm 838 */
								long BgL_res2882z00_6363;

								BgL_res2882z00_6363 =
									BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_objz00_5790));
								BgL_arg1551z00_6362 = BgL_res2882z00_6363;
							}
							BgL_arg1547z00_6361 = (BgL_arg1551z00_6362 - OBJECT_TYPE);
						}
						BgL_classz00_6360 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
							BgL_arg1547z00_6361);
					}
					{	/* Llib/object.scm 1345 */
						obj_t BgL_classzd2namezd2_6364;

						{	/* Llib/object.scm 1346 */
							obj_t BgL_res2884z00_6365;

							{	/* Llib/object.scm 475 */
								obj_t BgL_tmpz00_9553;

								BgL_tmpz00_9553 = ((obj_t) BgL_classz00_6360);
								BgL_res2884z00_6365 = BGL_CLASS_NAME(BgL_tmpz00_9553);
							}
							BgL_classzd2namezd2_6364 = BgL_res2884z00_6365;
						}
						{	/* Llib/object.scm 1346 */
							obj_t BgL_fieldsz00_6366;

							{	/* Llib/object.scm 1347 */
								obj_t BgL_res2885z00_6367;

								{	/* Llib/object.scm 531 */
									obj_t BgL_tmpz00_9556;

									BgL_tmpz00_9556 = ((obj_t) BgL_classz00_6360);
									BgL_res2885z00_6367 = BGL_CLASS_ALL_FIELDS(BgL_tmpz00_9556);
								}
								BgL_fieldsz00_6366 = BgL_res2885z00_6367;
							}
							{	/* Llib/object.scm 1348 */

								{	/* Llib/object.scm 1349 */
									obj_t BgL_tmpz00_9559;

									BgL_tmpz00_9559 = ((obj_t) BgL_portz00_5791);
									bgl_display_string(BGl_string3533z00zz__objectz00,
										BgL_tmpz00_9559);
								}
								bgl_display_obj(BgL_classzd2namezd2_6364,
									((obj_t) BgL_portz00_5791));
								{	/* Llib/object.scm 1351 */
									bool_t BgL_test4090z00_9564;

									{	/* Llib/object.scm 1351 */
										bool_t BgL_res2888z00_6368;

										{	/* Llib/object.scm 1233 */
											obj_t BgL_klassz00_6369;

											{	/* Llib/object.scm 838 */
												long BgL_arg1547z00_6370;

												{	/* Llib/object.scm 838 */
													long BgL_arg1551z00_6371;

													{	/* Llib/object.scm 838 */
														long BgL_res2886z00_6372;

														BgL_res2886z00_6372 =
															BGL_OBJECT_CLASS_NUM(
															((BgL_objectz00_bglt) BgL_objz00_5790));
														BgL_arg1551z00_6371 = BgL_res2886z00_6372;
													}
													BgL_arg1547z00_6370 =
														(BgL_arg1551z00_6371 - OBJECT_TYPE);
												}
												BgL_klassz00_6369 =
													VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
													BgL_arg1547z00_6370);
											}
											{	/* Llib/object.scm 1234 */
												obj_t BgL_arg1780z00_6373;

												{	/* Llib/object.scm 714 */
													obj_t BgL__ortest_1220z00_6374;

													{	/* Llib/object.scm 714 */
														obj_t BgL_tmpz00_9569;

														BgL_tmpz00_9569 = ((obj_t) BgL_klassz00_6369);
														BgL__ortest_1220z00_6374 =
															BGL_CLASS_NIL(BgL_tmpz00_9569);
													}
													if (CBOOL(BgL__ortest_1220z00_6374))
														{	/* Llib/object.scm 714 */
															BgL_arg1780z00_6373 = BgL__ortest_1220z00_6374;
														}
													else
														{	/* Llib/object.scm 714 */
															BgL_arg1780z00_6373 =
																BGl_classzd2nilzd2initz12z12zz__objectz00(
																((obj_t) BgL_klassz00_6369));
														}
												}
												BgL_res2888z00_6368 =
													(BgL_arg1780z00_6373 ==
													((obj_t) ((BgL_objectz00_bglt) BgL_objz00_5790)));
											}
										}
										BgL_test4090z00_9564 = BgL_res2888z00_6368;
									}
									if (BgL_test4090z00_9564)
										{	/* Llib/object.scm 1352 */
											obj_t BgL_tmpz00_9579;

											BgL_tmpz00_9579 = ((obj_t) BgL_portz00_5791);
											return
												bgl_display_string(BGl_string3534z00zz__objectz00,
												BgL_tmpz00_9579);
										}
									else
										{
											long BgL_iz00_6376;

											BgL_iz00_6376 = ((long) 0);
										BgL_loopz00_6375:
											if ((BgL_iz00_6376 == VECTOR_LENGTH(BgL_fieldsz00_6366)))
												{	/* Llib/object.scm 1355 */
													obj_t BgL_tmpz00_9585;

													BgL_tmpz00_9585 = ((obj_t) BgL_portz00_5791);
													return
														bgl_display_char(((unsigned char) '|'),
														BgL_tmpz00_9585);
												}
											else
												{	/* Llib/object.scm 1354 */
													BgL_fieldz00_6352 =
														VECTOR_REF(BgL_fieldsz00_6366, BgL_iz00_6376);
													{	/* Llib/object.scm 1336 */
														obj_t BgL_namez00_6353;

														{	/* Llib/object.scm 1336 */
															obj_t BgL_res2880z00_6354;

															{	/* Llib/object.scm 565 */
																obj_t BgL_vectorz00_6355;

																BgL_vectorz00_6355 =
																	((obj_t) BgL_fieldz00_6352);
																BgL_res2880z00_6354 =
																	VECTOR_REF(BgL_vectorz00_6355, ((long) 0));
															}
															BgL_namez00_6353 = BgL_res2880z00_6354;
														}
														{	/* Llib/object.scm 1336 */
															obj_t BgL_getzd2valuezd2_6356;

															{	/* Llib/object.scm 1337 */
																obj_t BgL_res2881z00_6357;

																{	/* Llib/object.scm 577 */
																	obj_t BgL_vectorz00_6358;

																	BgL_vectorz00_6358 =
																		((obj_t) BgL_fieldz00_6352);
																	BgL_res2881z00_6357 =
																		VECTOR_REF(BgL_vectorz00_6358, ((long) 1));
																}
																BgL_getzd2valuezd2_6356 = BgL_res2881z00_6357;
															}
															{	/* Llib/object.scm 1337 */

																{	/* Llib/object.scm 1338 */
																	obj_t BgL_tmpz00_9592;

																	BgL_tmpz00_9592 = ((obj_t) BgL_portz00_5791);
																	bgl_display_string
																		(BGl_string3532z00zz__objectz00,
																		BgL_tmpz00_9592);
																}
																bgl_display_obj(BgL_namez00_6353,
																	((obj_t) BgL_portz00_5791));
																{	/* Llib/object.scm 1340 */
																	obj_t BgL_tmpz00_9597;

																	BgL_tmpz00_9597 = ((obj_t) BgL_portz00_5791);
																	bgl_display_char(((unsigned char) ':'),
																		BgL_tmpz00_9597);
																}
																{	/* Llib/object.scm 1341 */
																	obj_t BgL_tmpz00_9600;

																	BgL_tmpz00_9600 = ((obj_t) BgL_portz00_5791);
																	bgl_display_char(((unsigned char) ' '),
																		BgL_tmpz00_9600);
																}
																{	/* Llib/object.scm 1342 */
																	obj_t BgL_arg2170z00_6359;

																	BgL_arg2170z00_6359 =
																		PROCEDURE_ENTRY(BgL_getzd2valuezd2_6356)
																		(BgL_getzd2valuezd2_6356,
																		((obj_t) ((BgL_objectz00_bglt)
																				BgL_objz00_5790)), BEOA);
																	{	/* Llib/object.scm 1342 */
																		obj_t BgL_tmpfunz00_9615;

																		BgL_tmpfunz00_9615 =
																			((obj_t) BgL_printzd2slotzd2_5792);
																		PROCEDURE_ENTRY(BgL_tmpfunz00_9615) (
																			((obj_t) BgL_printzd2slotzd2_5792),
																			BgL_arg2170z00_6359,
																			((obj_t) BgL_portz00_5791), BEOA);
																}}
																{	/* Llib/object.scm 1343 */
																	obj_t BgL_tmpz00_9617;

																	BgL_tmpz00_9617 = ((obj_t) BgL_portz00_5791);
																	bgl_display_char(((unsigned char) ']'),
																		BgL_tmpz00_9617);
													}}}}
													{
														long BgL_iz00_9621;

														BgL_iz00_9621 = (BgL_iz00_6376 + ((long) 1));
														BgL_iz00_6376 = BgL_iz00_9621;
														goto BgL_loopz00_6375;
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



/* &object-hashnumber1392 */
	obj_t BGl_z62objectzd2hashnumber1392zb0zz__objectz00(obj_t BgL_envz00_5793,
		obj_t BgL_objectz00_5794)
	{
		{	/* Llib/object.scm 1300 */
			return
				BINT(bgl_obj_hash_number(
					((obj_t) ((BgL_objectz00_bglt) BgL_objectz00_5794))));
		}

	}



/* &object-write1390 */
	obj_t BGl_z62objectzd2write1390zb0zz__objectz00(obj_t BgL_envz00_5795,
		obj_t BgL_objz00_5796, obj_t BgL_portz00_5797)
	{
		{	/* Llib/object.scm 1293 */
			{	/* Llib/object.scm 1294 */
				obj_t BgL_portz00_6379;

				if (PAIRP(BgL_portz00_5797))
					{	/* Llib/object.scm 1294 */
						BgL_portz00_6379 = CAR(BgL_portz00_5797);
					}
				else
					{	/* Llib/object.scm 1294 */
						obj_t BgL_res2879z00_6380;

						{	/* Llib/object.scm 1294 */
							obj_t BgL_tmpz00_9630;

							BgL_tmpz00_9630 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2879z00_6380 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_9630);
						}
						BgL_portz00_6379 = BgL_res2879z00_6380;
					}
				return
					BGl_objectzd2printzd2zz__objectz00(
					((BgL_objectz00_bglt) BgL_objz00_5796), BgL_portz00_6379,
					BGl_writezd2envzd2zz__r4_output_6_10_3z00);
			}
		}

	}



/* &object-display1386 */
	obj_t BGl_z62objectzd2display1386zb0zz__objectz00(obj_t BgL_envz00_5798,
		obj_t BgL_objz00_5799, obj_t BgL_portz00_5800)
	{
		{	/* Llib/object.scm 1286 */
			{	/* Llib/object.scm 1287 */
				obj_t BgL_portz00_6382;

				if (PAIRP(BgL_portz00_5800))
					{	/* Llib/object.scm 1287 */
						BgL_portz00_6382 = CAR(BgL_portz00_5800);
					}
				else
					{	/* Llib/object.scm 1287 */
						obj_t BgL_res2877z00_6383;

						{	/* Llib/object.scm 1287 */
							obj_t BgL_tmpz00_9638;

							BgL_tmpz00_9638 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2877z00_6383 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_9638);
						}
						BgL_portz00_6382 = BgL_res2877z00_6383;
					}
				return
					BGl_objectzd2printzd2zz__objectz00(
					((BgL_objectz00_bglt) BgL_objz00_5799), BgL_portz00_6382,
					BGl_displayzd2envzd2zz__r4_output_6_10_3z00);
			}
		}

	}



/* object-display */
	BGL_EXPORTED_DEF obj_t BGl_objectzd2displayzd2zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_155, obj_t BgL_portz00_156)
	{
		{	/* Llib/object.scm 1286 */
			{	/* Llib/object.scm 1286 */
				obj_t BgL_method1389z00_2472;

				{	/* Llib/object.scm 1286 */
					obj_t BgL_res2912z00_4605;

					{	/* Llib/object.scm 1193 */
						long BgL_objzd2classzd2numz00_4570;

						{	/* Llib/object.scm 1193 */
							long BgL_res2902z00_4573;

							BgL_res2902z00_4573 = BGL_OBJECT_CLASS_NUM(BgL_objz00_155);
							BgL_objzd2classzd2numz00_4570 = BgL_res2902z00_4573;
						}
						{	/* Llib/object.scm 1194 */
							obj_t BgL_arg1772z00_4571;

							BgL_arg1772z00_4571 =
								PROCEDURE_REF(BGl_objectzd2displayzd2envz00zz__objectz00,
								(int) (((long) 1)));
							{	/* Llib/object.scm 1194 */
								int BgL_offsetz00_4575;

								BgL_offsetz00_4575 = (int) (BgL_objzd2classzd2numz00_4570);
								{	/* Llib/object.scm 875 */
									long BgL_offsetz00_4576;

									BgL_offsetz00_4576 =
										((long) (BgL_offsetz00_4575) - OBJECT_TYPE);
									{	/* Llib/object.scm 875 */
										long BgL_modz00_4577;

										BgL_modz00_4577 =
											(BgL_offsetz00_4576 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/object.scm 876 */
											long BgL_restz00_4579;

											BgL_restz00_4579 =
												(BgL_offsetz00_4576 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/object.scm 877 */

												{	/* Llib/object.scm 878 */
													obj_t BgL_bucketz00_4581;

													BgL_bucketz00_4581 =
														VECTOR_REF(
														((obj_t) BgL_arg1772z00_4571), BgL_modz00_4577);
													BgL_res2912z00_4605 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4581), BgL_restz00_4579);
					}}}}}}}}
					BgL_method1389z00_2472 = BgL_res2912z00_4605;
				}
				{	/* Llib/object.scm 1286 */
					obj_t BgL_auxz00_9667;

					{	/* Llib/object.scm 1286 */
						obj_t BgL_list2192z00_2473;

						BgL_list2192z00_2473 = MAKE_YOUNG_PAIR(BgL_portz00_156, BNIL);
						BgL_auxz00_9667 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
							((obj_t) BgL_objz00_155), BgL_list2192z00_2473);
					}
					return apply(BgL_method1389z00_2472, BgL_auxz00_9667);
				}
			}
		}

	}



/* &object-display */
	obj_t BGl_z62objectzd2displayzb0zz__objectz00(obj_t BgL_envz00_5801,
		obj_t BgL_objz00_5802, obj_t BgL_portz00_5803)
	{
		{	/* Llib/object.scm 1286 */
			{	/* Llib/object.scm 1286 */
				BgL_objectz00_bglt BgL_auxz00_9672;

				if (BGl_isazf3zf3zz__objectz00(BgL_objz00_5802,
						BGl_objectz00zz__objectz00))
					{	/* Llib/object.scm 1286 */
						BgL_auxz00_9672 = ((BgL_objectz00_bglt) BgL_objz00_5802);
					}
				else
					{
						obj_t BgL_auxz00_9676;

						BgL_auxz00_9676 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 56726)), BGl_string3535z00zz__objectz00,
							BGl_string3284z00zz__objectz00, BgL_objz00_5802);
						FAILURE(BgL_auxz00_9676, BFALSE, BFALSE);
					}
				return
					BGl_objectzd2displayzd2zz__objectz00(BgL_auxz00_9672,
					BgL_portz00_5803);
			}
		}

	}



/* object-write */
	BGL_EXPORTED_DEF obj_t BGl_objectzd2writezd2zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_157, obj_t BgL_portz00_158)
	{
		{	/* Llib/object.scm 1293 */
			{	/* Llib/object.scm 1293 */
				obj_t BgL_method1391z00_2474;

				{	/* Llib/object.scm 1293 */
					obj_t BgL_res2923z00_4642;

					{	/* Llib/object.scm 1193 */
						long BgL_objzd2classzd2numz00_4607;

						{	/* Llib/object.scm 1193 */
							long BgL_res2913z00_4610;

							BgL_res2913z00_4610 = BGL_OBJECT_CLASS_NUM(BgL_objz00_157);
							BgL_objzd2classzd2numz00_4607 = BgL_res2913z00_4610;
						}
						{	/* Llib/object.scm 1194 */
							obj_t BgL_arg1772z00_4608;

							BgL_arg1772z00_4608 =
								PROCEDURE_REF(BGl_objectzd2writezd2envz00zz__objectz00,
								(int) (((long) 1)));
							{	/* Llib/object.scm 1194 */
								int BgL_offsetz00_4612;

								BgL_offsetz00_4612 = (int) (BgL_objzd2classzd2numz00_4607);
								{	/* Llib/object.scm 875 */
									long BgL_offsetz00_4613;

									BgL_offsetz00_4613 =
										((long) (BgL_offsetz00_4612) - OBJECT_TYPE);
									{	/* Llib/object.scm 875 */
										long BgL_modz00_4614;

										BgL_modz00_4614 =
											(BgL_offsetz00_4613 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/object.scm 876 */
											long BgL_restz00_4616;

											BgL_restz00_4616 =
												(BgL_offsetz00_4613 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/object.scm 877 */

												{	/* Llib/object.scm 878 */
													obj_t BgL_bucketz00_4618;

													BgL_bucketz00_4618 =
														VECTOR_REF(
														((obj_t) BgL_arg1772z00_4608), BgL_modz00_4614);
													BgL_res2923z00_4642 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4618), BgL_restz00_4616);
					}}}}}}}}
					BgL_method1391z00_2474 = BgL_res2923z00_4642;
				}
				{	/* Llib/object.scm 1293 */
					obj_t BgL_auxz00_9705;

					{	/* Llib/object.scm 1293 */
						obj_t BgL_list2193z00_2475;

						BgL_list2193z00_2475 = MAKE_YOUNG_PAIR(BgL_portz00_158, BNIL);
						BgL_auxz00_9705 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
							((obj_t) BgL_objz00_157), BgL_list2193z00_2475);
					}
					return apply(BgL_method1391z00_2474, BgL_auxz00_9705);
				}
			}
		}

	}



/* &object-write */
	obj_t BGl_z62objectzd2writezb0zz__objectz00(obj_t BgL_envz00_5804,
		obj_t BgL_objz00_5805, obj_t BgL_portz00_5806)
	{
		{	/* Llib/object.scm 1293 */
			{	/* Llib/object.scm 1293 */
				BgL_objectz00_bglt BgL_auxz00_9710;

				if (BGl_isazf3zf3zz__objectz00(BgL_objz00_5805,
						BGl_objectz00zz__objectz00))
					{	/* Llib/object.scm 1293 */
						BgL_auxz00_9710 = ((BgL_objectz00_bglt) BgL_objz00_5805);
					}
				else
					{
						obj_t BgL_auxz00_9714;

						BgL_auxz00_9714 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 57109)), BGl_string3536z00zz__objectz00,
							BGl_string3284z00zz__objectz00, BgL_objz00_5805);
						FAILURE(BgL_auxz00_9714, BFALSE, BFALSE);
					}
				return
					BGl_objectzd2writezd2zz__objectz00(BgL_auxz00_9710, BgL_portz00_5806);
			}
		}

	}



/* object-hashnumber */
	BGL_EXPORTED_DEF int
		BGl_objectzd2hashnumberzd2zz__objectz00(BgL_objectz00_bglt
		BgL_objectz00_159)
	{
		{	/* Llib/object.scm 1300 */
			{	/* Llib/object.scm 1300 */
				obj_t BgL_method1393z00_2476;

				{	/* Llib/object.scm 1300 */
					obj_t BgL_res2934z00_4679;

					{	/* Llib/object.scm 1193 */
						long BgL_objzd2classzd2numz00_4644;

						{	/* Llib/object.scm 1193 */
							long BgL_res2924z00_4647;

							BgL_res2924z00_4647 = BGL_OBJECT_CLASS_NUM(BgL_objectz00_159);
							BgL_objzd2classzd2numz00_4644 = BgL_res2924z00_4647;
						}
						{	/* Llib/object.scm 1194 */
							obj_t BgL_arg1772z00_4645;

							BgL_arg1772z00_4645 =
								PROCEDURE_REF(BGl_objectzd2hashnumberzd2envz00zz__objectz00,
								(int) (((long) 1)));
							{	/* Llib/object.scm 1194 */
								int BgL_offsetz00_4649;

								BgL_offsetz00_4649 = (int) (BgL_objzd2classzd2numz00_4644);
								{	/* Llib/object.scm 875 */
									long BgL_offsetz00_4650;

									BgL_offsetz00_4650 =
										((long) (BgL_offsetz00_4649) - OBJECT_TYPE);
									{	/* Llib/object.scm 875 */
										long BgL_modz00_4651;

										BgL_modz00_4651 =
											(BgL_offsetz00_4650 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/object.scm 876 */
											long BgL_restz00_4653;

											BgL_restz00_4653 =
												(BgL_offsetz00_4650 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/object.scm 877 */

												{	/* Llib/object.scm 878 */
													obj_t BgL_bucketz00_4655;

													BgL_bucketz00_4655 =
														VECTOR_REF(
														((obj_t) BgL_arg1772z00_4645), BgL_modz00_4651);
													BgL_res2934z00_4679 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4655), BgL_restz00_4653);
					}}}}}}}}
					BgL_method1393z00_2476 = BgL_res2934z00_4679;
				}
				return
					CINT(PROCEDURE_ENTRY(BgL_method1393z00_2476) (BgL_method1393z00_2476,
						((obj_t) BgL_objectz00_159), BEOA));
			}
		}

	}



/* &object-hashnumber */
	obj_t BGl_z62objectzd2hashnumberzb0zz__objectz00(obj_t BgL_envz00_5807,
		obj_t BgL_objectz00_5808)
	{
		{	/* Llib/object.scm 1300 */
			{	/* Llib/object.scm 1300 */
				int BgL_tmpz00_9749;

				{	/* Llib/object.scm 1300 */
					BgL_objectz00_bglt BgL_auxz00_9750;

					if (BGl_isazf3zf3zz__objectz00(BgL_objectz00_5808,
							BGl_objectz00zz__objectz00))
						{	/* Llib/object.scm 1300 */
							BgL_auxz00_9750 = ((BgL_objectz00_bglt) BgL_objectz00_5808);
						}
					else
						{
							obj_t BgL_auxz00_9754;

							BgL_auxz00_9754 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 57488)), BGl_string3537z00zz__objectz00,
								BGl_string3284z00zz__objectz00, BgL_objectz00_5808);
							FAILURE(BgL_auxz00_9754, BFALSE, BFALSE);
						}
					BgL_tmpz00_9749 =
						BGl_objectzd2hashnumberzd2zz__objectz00(BgL_auxz00_9750);
				}
				return BINT(BgL_tmpz00_9749);
			}
		}

	}



/* object-print */
	BGL_EXPORTED_DEF obj_t BGl_objectzd2printzd2zz__objectz00(BgL_objectz00_bglt
		BgL_objz00_162, obj_t BgL_portz00_163, obj_t BgL_printzd2slotzd2_164)
	{
		{	/* Llib/object.scm 1333 */
			{	/* Llib/object.scm 1333 */
				obj_t BgL_method1397z00_2477;

				{	/* Llib/object.scm 1333 */
					obj_t BgL_res2945z00_4716;

					{	/* Llib/object.scm 1193 */
						long BgL_objzd2classzd2numz00_4681;

						{	/* Llib/object.scm 1193 */
							long BgL_res2935z00_4684;

							BgL_res2935z00_4684 = BGL_OBJECT_CLASS_NUM(BgL_objz00_162);
							BgL_objzd2classzd2numz00_4681 = BgL_res2935z00_4684;
						}
						{	/* Llib/object.scm 1194 */
							obj_t BgL_arg1772z00_4682;

							BgL_arg1772z00_4682 =
								PROCEDURE_REF(BGl_objectzd2printzd2envz00zz__objectz00,
								(int) (((long) 1)));
							{	/* Llib/object.scm 1194 */
								int BgL_offsetz00_4686;

								BgL_offsetz00_4686 = (int) (BgL_objzd2classzd2numz00_4681);
								{	/* Llib/object.scm 875 */
									long BgL_offsetz00_4687;

									BgL_offsetz00_4687 =
										((long) (BgL_offsetz00_4686) - OBJECT_TYPE);
									{	/* Llib/object.scm 875 */
										long BgL_modz00_4688;

										BgL_modz00_4688 =
											(BgL_offsetz00_4687 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/object.scm 876 */
											long BgL_restz00_4690;

											BgL_restz00_4690 =
												(BgL_offsetz00_4687 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/object.scm 877 */

												{	/* Llib/object.scm 878 */
													obj_t BgL_bucketz00_4692;

													BgL_bucketz00_4692 =
														VECTOR_REF(
														((obj_t) BgL_arg1772z00_4682), BgL_modz00_4688);
													BgL_res2945z00_4716 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4692), BgL_restz00_4690);
					}}}}}}}}
					BgL_method1397z00_2477 = BgL_res2945z00_4716;
				}
				return
					PROCEDURE_ENTRY(BgL_method1397z00_2477) (BgL_method1397z00_2477,
					((obj_t) BgL_objz00_162), BgL_portz00_163, BgL_printzd2slotzd2_164,
					BEOA);
			}
		}

	}



/* &object-print */
	obj_t BGl_z62objectzd2printzb0zz__objectz00(obj_t BgL_envz00_5809,
		obj_t BgL_objz00_5810, obj_t BgL_portz00_5811,
		obj_t BgL_printzd2slotzd2_5812)
	{
		{	/* Llib/object.scm 1333 */
			{	/* Llib/object.scm 1333 */
				obj_t BgL_auxz00_9806;
				obj_t BgL_auxz00_9799;
				BgL_objectz00_bglt BgL_auxz00_9791;

				if (PROCEDUREP(BgL_printzd2slotzd2_5812))
					{	/* Llib/object.scm 1333 */
						BgL_auxz00_9806 = BgL_printzd2slotzd2_5812;
					}
				else
					{
						obj_t BgL_auxz00_9809;

						BgL_auxz00_9809 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 58924)), BGl_string3538z00zz__objectz00,
							BGl_string3288z00zz__objectz00, BgL_printzd2slotzd2_5812);
						FAILURE(BgL_auxz00_9809, BFALSE, BFALSE);
					}
				if (OUTPUT_PORTP(BgL_portz00_5811))
					{	/* Llib/object.scm 1333 */
						BgL_auxz00_9799 = BgL_portz00_5811;
					}
				else
					{
						obj_t BgL_auxz00_9802;

						BgL_auxz00_9802 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 58924)), BGl_string3538z00zz__objectz00,
							BGl_string3539z00zz__objectz00, BgL_portz00_5811);
						FAILURE(BgL_auxz00_9802, BFALSE, BFALSE);
					}
				if (BGl_isazf3zf3zz__objectz00(BgL_objz00_5810,
						BGl_objectz00zz__objectz00))
					{	/* Llib/object.scm 1333 */
						BgL_auxz00_9791 = ((BgL_objectz00_bglt) BgL_objz00_5810);
					}
				else
					{
						obj_t BgL_auxz00_9795;

						BgL_auxz00_9795 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
							BINT(((long) 58924)), BGl_string3538z00zz__objectz00,
							BGl_string3284z00zz__objectz00, BgL_objz00_5810);
						FAILURE(BgL_auxz00_9795, BFALSE, BFALSE);
					}
				return
					BGl_objectzd2printzd2zz__objectz00(BgL_auxz00_9791, BgL_auxz00_9799,
					BgL_auxz00_9806);
			}
		}

	}



/* object-equal? */
	BGL_EXPORTED_DEF bool_t
		BGl_objectzd2equalzf3z21zz__objectz00(BgL_objectz00_bglt BgL_obj1z00_165,
		BgL_objectz00_bglt BgL_obj2z00_166)
	{
		{	/* Llib/object.scm 1363 */
			{	/* Llib/object.scm 1363 */
				obj_t BgL_method1399z00_2478;

				{	/* Llib/object.scm 1363 */
					obj_t BgL_res2956z00_4753;

					{	/* Llib/object.scm 1193 */
						long BgL_objzd2classzd2numz00_4718;

						{	/* Llib/object.scm 1193 */
							long BgL_res2946z00_4721;

							BgL_res2946z00_4721 = BGL_OBJECT_CLASS_NUM(BgL_obj1z00_165);
							BgL_objzd2classzd2numz00_4718 = BgL_res2946z00_4721;
						}
						{	/* Llib/object.scm 1194 */
							obj_t BgL_arg1772z00_4719;

							BgL_arg1772z00_4719 =
								PROCEDURE_REF(BGl_objectzd2equalzf3zd2envzf3zz__objectz00,
								(int) (((long) 1)));
							{	/* Llib/object.scm 1194 */
								int BgL_offsetz00_4723;

								BgL_offsetz00_4723 = (int) (BgL_objzd2classzd2numz00_4718);
								{	/* Llib/object.scm 875 */
									long BgL_offsetz00_4724;

									BgL_offsetz00_4724 =
										((long) (BgL_offsetz00_4723) - OBJECT_TYPE);
									{	/* Llib/object.scm 875 */
										long BgL_modz00_4725;

										BgL_modz00_4725 =
											(BgL_offsetz00_4724 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Llib/object.scm 876 */
											long BgL_restz00_4727;

											BgL_restz00_4727 =
												(BgL_offsetz00_4724 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Llib/object.scm 877 */

												{	/* Llib/object.scm 878 */
													obj_t BgL_bucketz00_4729;

													BgL_bucketz00_4729 =
														VECTOR_REF(
														((obj_t) BgL_arg1772z00_4719), BgL_modz00_4725);
													BgL_res2956z00_4753 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4729), BgL_restz00_4727);
					}}}}}}}}
					BgL_method1399z00_2478 = BgL_res2956z00_4753;
				}
				return
					CBOOL(PROCEDURE_ENTRY(BgL_method1399z00_2478) (BgL_method1399z00_2478,
						((obj_t) BgL_obj1z00_165), ((obj_t) BgL_obj2z00_166), BEOA));
			}
		}

	}



/* &object-equal? */
	obj_t BGl_z62objectzd2equalzf3z43zz__objectz00(obj_t BgL_envz00_5813,
		obj_t BgL_obj1z00_5814, obj_t BgL_obj2z00_5815)
	{
		{	/* Llib/object.scm 1363 */
			{	/* Llib/object.scm 1363 */
				bool_t BgL_tmpz00_9846;

				{	/* Llib/object.scm 1363 */
					BgL_objectz00_bglt BgL_auxz00_9855;
					BgL_objectz00_bglt BgL_auxz00_9847;

					if (BGl_isazf3zf3zz__objectz00(BgL_obj2z00_5815,
							BGl_objectz00zz__objectz00))
						{	/* Llib/object.scm 1363 */
							BgL_auxz00_9855 = ((BgL_objectz00_bglt) BgL_obj2z00_5815);
						}
					else
						{
							obj_t BgL_auxz00_9859;

							BgL_auxz00_9859 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 59919)), BGl_string3540z00zz__objectz00,
								BGl_string3284z00zz__objectz00, BgL_obj2z00_5815);
							FAILURE(BgL_auxz00_9859, BFALSE, BFALSE);
						}
					if (BGl_isazf3zf3zz__objectz00(BgL_obj1z00_5814,
							BGl_objectz00zz__objectz00))
						{	/* Llib/object.scm 1363 */
							BgL_auxz00_9847 = ((BgL_objectz00_bglt) BgL_obj1z00_5814);
						}
					else
						{
							obj_t BgL_auxz00_9851;

							BgL_auxz00_9851 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3235z00zz__objectz00,
								BINT(((long) 59919)), BGl_string3540z00zz__objectz00,
								BGl_string3284z00zz__objectz00, BgL_obj1z00_5814);
							FAILURE(BgL_auxz00_9851, BFALSE, BFALSE);
						}
					BgL_tmpz00_9846 =
						BGl_objectzd2equalzf3z21zz__objectz00(BgL_auxz00_9847,
						BgL_auxz00_9855);
				}
				return BBOOL(BgL_tmpz00_9846);
			}
		}

	}



/* exception-notify */
	BGL_EXPORTED_DEF obj_t BGl_exceptionzd2notifyzd2zz__objectz00(obj_t
		BgL_excz00_167)
	{
		{	/* Llib/object.scm 1383 */
			if (BGL_OBJECTP(BgL_excz00_167))
				{	/* Llib/object.scm 1383 */
					obj_t BgL_method1402z00_2480;

					{	/* Llib/object.scm 1383 */
						obj_t BgL_res2968z00_4791;

						{	/* Llib/object.scm 1193 */
							long BgL_objzd2classzd2numz00_4756;

							{	/* Llib/object.scm 1193 */
								long BgL_res2958z00_4759;

								BgL_res2958z00_4759 =
									BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_excz00_167));
								BgL_objzd2classzd2numz00_4756 = BgL_res2958z00_4759;
							}
							{	/* Llib/object.scm 1194 */
								obj_t BgL_arg1772z00_4757;

								BgL_arg1772z00_4757 =
									PROCEDURE_REF(BGl_exceptionzd2notifyzd2envz00zz__objectz00,
									(int) (((long) 1)));
								{	/* Llib/object.scm 1194 */
									int BgL_offsetz00_4761;

									BgL_offsetz00_4761 = (int) (BgL_objzd2classzd2numz00_4756);
									{	/* Llib/object.scm 875 */
										long BgL_offsetz00_4762;

										BgL_offsetz00_4762 =
											((long) (BgL_offsetz00_4761) - OBJECT_TYPE);
										{	/* Llib/object.scm 875 */
											long BgL_modz00_4763;

											BgL_modz00_4763 =
												(BgL_offsetz00_4762 >>
												(int) ((long) ((int) (((long) 4)))));
											{	/* Llib/object.scm 876 */
												long BgL_restz00_4765;

												BgL_restz00_4765 =
													(BgL_offsetz00_4762 &
													(long) (
														(int) (
															((long) (
																	(int) (
																		(((long) 1) <<
																			(int) (
																				(long) (
																					(int) (((long) 4))))))) -
																((long) 1)))));
												{	/* Llib/object.scm 877 */

													{	/* Llib/object.scm 878 */
														obj_t BgL_bucketz00_4767;

														BgL_bucketz00_4767 =
															VECTOR_REF(
															((obj_t) BgL_arg1772z00_4757), BgL_modz00_4763);
														BgL_res2968z00_4791 =
															VECTOR_REF(
															((obj_t) BgL_bucketz00_4767), BgL_restz00_4765);
						}}}}}}}}
						BgL_method1402z00_2480 = BgL_res2968z00_4791;
					}
					return
						PROCEDURE_ENTRY(BgL_method1402z00_2480) (BgL_method1402z00_2480,
						BgL_excz00_167, BEOA);
				}
			else
				{	/* Llib/object.scm 1383 */
					obj_t BgL_fun2195z00_2481;

					BgL_fun2195z00_2481 =
						PROCEDURE_REF(BGl_exceptionzd2notifyzd2envz00zz__objectz00,
						(int) (((long) 0)));
					return
						PROCEDURE_ENTRY(BgL_fun2195z00_2481) (BgL_fun2195z00_2481,
						BgL_excz00_167, BEOA);
				}
		}

	}



/* &exception-notify */
	obj_t BGl_z62exceptionzd2notifyzb0zz__objectz00(obj_t BgL_envz00_5816,
		obj_t BgL_excz00_5817)
	{
		{	/* Llib/object.scm 1383 */
			return BGl_exceptionzd2notifyzd2zz__objectz00(BgL_excz00_5817);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__objectz00()
	{
		{	/* Llib/object.scm 17 */
			{	/* Llib/object.scm 17 */
				obj_t BgL_res2970z00_4820;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_4793;

					BgL_classz00_4793 = BGl_z62errorz62zz__objectz00;
					{	/* Llib/object.scm 1156 */
						bool_t BgL_test4104z00_9903;

						{	/* Llib/object.scm 1156 */
							bool_t BgL_res2730z00_4795;

							BgL_res2730z00_4795 = BGL_CLASSP(BgL_classz00_4793);
							BgL_test4104z00_9903 = BgL_res2730z00_4795;
						}
						if (BgL_test4104z00_9903)
							{	/* Llib/object.scm 1158 */
								bool_t BgL_test4105z00_9905;

								{	/* Llib/object.scm 1158 */
									bool_t BgL_test4106z00_9906;

									{	/* Llib/object.scm 1158 */
										int BgL_arg1748z00_4798;
										int BgL_arg1750z00_4799;

										BgL_arg1748z00_4798 =
											PROCEDURE_ARITY
											(BGl_exceptionzd2notifyzd2envz00zz__objectz00);
										BgL_arg1750z00_4799 =
											PROCEDURE_ARITY(BGl_proc3541z00zz__objectz00);
										BgL_test4106z00_9906 =
											((long) (BgL_arg1748z00_4798) ==
											(long) (BgL_arg1750z00_4799));
									}
									if (BgL_test4106z00_9906)
										{	/* Llib/object.scm 1158 */
											BgL_test4105z00_9905 = ((bool_t) 0);
										}
									else
										{	/* Llib/object.scm 1159 */
											int BgL_arg1747z00_4807;

											BgL_arg1747z00_4807 =
												PROCEDURE_ARITY
												(BGl_exceptionzd2notifyzd2envz00zz__objectz00);
											BgL_test4105z00_9905 =
												((long) (BgL_arg1747z00_4807) >= ((long) 0));
								}}
								if (BgL_test4105z00_9905)
									{	/* Llib/object.scm 1161 */
										obj_t BgL_arg1743z00_4812;
										int BgL_arg1744z00_4813;

										{	/* Llib/object.scm 1161 */
											int BgL_arg1745z00_4814;

											BgL_arg1745z00_4814 =
												PROCEDURE_ARITY
												(BGl_exceptionzd2notifyzd2envz00zz__objectz00);
											{	/* Llib/object.scm 1160 */
												obj_t BgL_list1746z00_4817;

												BgL_list1746z00_4817 =
													MAKE_YOUNG_PAIR(BINT(BgL_arg1745z00_4814), BNIL);
												BgL_arg1743z00_4812 =
													BGl_formatz00zz__r4_output_6_10_3z00
													(BGl_string3318z00zz__objectz00,
													BgL_list1746z00_4817);
										}}
										BgL_arg1744z00_4813 =
											PROCEDURE_ARITY(BGl_proc3541z00zz__objectz00);
										BgL_res2970z00_4820 =
											BGl_errorz00zz__errorz00(BGl_string3542z00zz__objectz00,
											BgL_arg1743z00_4812, BINT(BgL_arg1744z00_4813));
									}
								else
									{	/* Llib/object.scm 1158 */
										BgL_res2970z00_4820 =
											BGl_z52addzd2methodz12z92zz__objectz00
											(BGl_exceptionzd2notifyzd2envz00zz__objectz00,
											BgL_classz00_4793, BGl_proc3541z00zz__objectz00);
									}
							}
						else
							{	/* Llib/object.scm 1156 */
								BgL_res2970z00_4820 =
									BGl_errorz00zz__errorz00(BGl_string3542z00zz__objectz00,
									BGl_string3319z00zz__objectz00, BgL_classz00_4793);
							}
					}
				}
				BgL_res2970z00_4820;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res2985z00_4900;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_4873;

					BgL_classz00_4873 = BGl_z62iozd2writezd2errorz62zz__objectz00;
					{	/* Llib/object.scm 1156 */
						bool_t BgL_test4107z00_9924;

						{	/* Llib/object.scm 1156 */
							bool_t BgL_res2730z00_4875;

							BgL_res2730z00_4875 = BGL_CLASSP(BgL_classz00_4873);
							BgL_test4107z00_9924 = BgL_res2730z00_4875;
						}
						if (BgL_test4107z00_9924)
							{	/* Llib/object.scm 1158 */
								bool_t BgL_test4108z00_9926;

								{	/* Llib/object.scm 1158 */
									bool_t BgL_test4109z00_9927;

									{	/* Llib/object.scm 1158 */
										int BgL_arg1748z00_4878;
										int BgL_arg1750z00_4879;

										BgL_arg1748z00_4878 =
											PROCEDURE_ARITY
											(BGl_exceptionzd2notifyzd2envz00zz__objectz00);
										BgL_arg1750z00_4879 =
											PROCEDURE_ARITY(BGl_proc3543z00zz__objectz00);
										BgL_test4109z00_9927 =
											((long) (BgL_arg1748z00_4878) ==
											(long) (BgL_arg1750z00_4879));
									}
									if (BgL_test4109z00_9927)
										{	/* Llib/object.scm 1158 */
											BgL_test4108z00_9926 = ((bool_t) 0);
										}
									else
										{	/* Llib/object.scm 1159 */
											int BgL_arg1747z00_4887;

											BgL_arg1747z00_4887 =
												PROCEDURE_ARITY
												(BGl_exceptionzd2notifyzd2envz00zz__objectz00);
											BgL_test4108z00_9926 =
												((long) (BgL_arg1747z00_4887) >= ((long) 0));
								}}
								if (BgL_test4108z00_9926)
									{	/* Llib/object.scm 1161 */
										obj_t BgL_arg1743z00_4892;
										int BgL_arg1744z00_4893;

										{	/* Llib/object.scm 1161 */
											int BgL_arg1745z00_4894;

											BgL_arg1745z00_4894 =
												PROCEDURE_ARITY
												(BGl_exceptionzd2notifyzd2envz00zz__objectz00);
											{	/* Llib/object.scm 1160 */
												obj_t BgL_list1746z00_4897;

												BgL_list1746z00_4897 =
													MAKE_YOUNG_PAIR(BINT(BgL_arg1745z00_4894), BNIL);
												BgL_arg1743z00_4892 =
													BGl_formatz00zz__r4_output_6_10_3z00
													(BGl_string3318z00zz__objectz00,
													BgL_list1746z00_4897);
										}}
										BgL_arg1744z00_4893 =
											PROCEDURE_ARITY(BGl_proc3543z00zz__objectz00);
										BgL_res2985z00_4900 =
											BGl_errorz00zz__errorz00(BGl_string3542z00zz__objectz00,
											BgL_arg1743z00_4892, BINT(BgL_arg1744z00_4893));
									}
								else
									{	/* Llib/object.scm 1158 */
										BgL_res2985z00_4900 =
											BGl_z52addzd2methodz12z92zz__objectz00
											(BGl_exceptionzd2notifyzd2envz00zz__objectz00,
											BgL_classz00_4873, BGl_proc3543z00zz__objectz00);
									}
							}
						else
							{	/* Llib/object.scm 1156 */
								BgL_res2985z00_4900 =
									BGl_errorz00zz__errorz00(BGl_string3542z00zz__objectz00,
									BGl_string3319z00zz__objectz00, BgL_classz00_4873);
							}
					}
				}
				BgL_res2985z00_4900;
			}
			{	/* Llib/object.scm 17 */
				obj_t BgL_res2986z00_4928;

				{	/* Llib/object.scm 17 */
					obj_t BgL_classz00_4901;

					BgL_classz00_4901 = BGl_z62warningz62zz__objectz00;
					{	/* Llib/object.scm 1156 */
						bool_t BgL_test4110z00_9945;

						{	/* Llib/object.scm 1156 */
							bool_t BgL_res2730z00_4903;

							BgL_res2730z00_4903 = BGL_CLASSP(BgL_classz00_4901);
							BgL_test4110z00_9945 = BgL_res2730z00_4903;
						}
						if (BgL_test4110z00_9945)
							{	/* Llib/object.scm 1158 */
								bool_t BgL_test4111z00_9947;

								{	/* Llib/object.scm 1158 */
									bool_t BgL_test4112z00_9948;

									{	/* Llib/object.scm 1158 */
										int BgL_arg1748z00_4906;
										int BgL_arg1750z00_4907;

										BgL_arg1748z00_4906 =
											PROCEDURE_ARITY
											(BGl_exceptionzd2notifyzd2envz00zz__objectz00);
										BgL_arg1750z00_4907 =
											PROCEDURE_ARITY(BGl_proc3544z00zz__objectz00);
										BgL_test4112z00_9948 =
											((long) (BgL_arg1748z00_4906) ==
											(long) (BgL_arg1750z00_4907));
									}
									if (BgL_test4112z00_9948)
										{	/* Llib/object.scm 1158 */
											BgL_test4111z00_9947 = ((bool_t) 0);
										}
									else
										{	/* Llib/object.scm 1159 */
											int BgL_arg1747z00_4915;

											BgL_arg1747z00_4915 =
												PROCEDURE_ARITY
												(BGl_exceptionzd2notifyzd2envz00zz__objectz00);
											BgL_test4111z00_9947 =
												((long) (BgL_arg1747z00_4915) >= ((long) 0));
								}}
								if (BgL_test4111z00_9947)
									{	/* Llib/object.scm 1161 */
										obj_t BgL_arg1743z00_4920;
										int BgL_arg1744z00_4921;

										{	/* Llib/object.scm 1161 */
											int BgL_arg1745z00_4922;

											BgL_arg1745z00_4922 =
												PROCEDURE_ARITY
												(BGl_exceptionzd2notifyzd2envz00zz__objectz00);
											{	/* Llib/object.scm 1160 */
												obj_t BgL_list1746z00_4925;

												BgL_list1746z00_4925 =
													MAKE_YOUNG_PAIR(BINT(BgL_arg1745z00_4922), BNIL);
												BgL_arg1743z00_4920 =
													BGl_formatz00zz__r4_output_6_10_3z00
													(BGl_string3318z00zz__objectz00,
													BgL_list1746z00_4925);
										}}
										BgL_arg1744z00_4921 =
											PROCEDURE_ARITY(BGl_proc3544z00zz__objectz00);
										BgL_res2986z00_4928 =
											BGl_errorz00zz__errorz00(BGl_string3542z00zz__objectz00,
											BgL_arg1743z00_4920, BINT(BgL_arg1744z00_4921));
									}
								else
									{	/* Llib/object.scm 1158 */
										BgL_res2986z00_4928 =
											BGl_z52addzd2methodz12z92zz__objectz00
											(BGl_exceptionzd2notifyzd2envz00zz__objectz00,
											BgL_classz00_4901, BGl_proc3544z00zz__objectz00);
									}
							}
						else
							{	/* Llib/object.scm 1156 */
								BgL_res2986z00_4928 =
									BGl_errorz00zz__errorz00(BGl_string3542z00zz__objectz00,
									BGl_string3319z00zz__objectz00, BgL_classz00_4901);
							}
					}
				}
				return BgL_res2986z00_4928;
			}
		}

	}



/* &exception-notify-&wa1409 */
	obj_t BGl_z62exceptionzd2notifyzd2z62wa1409z00zz__objectz00(obj_t
		BgL_envz00_5821, obj_t BgL_excz00_5822)
	{
		{	/* Llib/object.scm 1415 */
			return
				BGl_warningzd2notifyzd2zz__errorz00(
				((obj_t) ((BgL_z62warningz62_bglt) BgL_excz00_5822)));
		}

	}



/* &exception-notify-&io1407 */
	obj_t BGl_z62exceptionzd2notifyzd2z62io1407z00zz__objectz00(obj_t
		BgL_envz00_5823, obj_t BgL_excz00_5824)
	{
		{	/* Llib/object.scm 1407 */
			{	/* Llib/object.scm 1409 */
				bool_t BgL_test4113z00_9969;

				{	/* Llib/object.scm 1409 */
					obj_t BgL_arg2199z00_6386;
					obj_t BgL_arg2200z00_6387;

					BgL_arg2199z00_6386 =
						(((BgL_z62errorz62_bglt) COBJECT(
								((BgL_z62errorz62_bglt)
									((BgL_z62iozd2writezd2errorz62_bglt) BgL_excz00_5824))))->
						BgL_objz00);
					{	/* Llib/object.scm 1409 */
						obj_t BgL_res2984z00_6388;

						{	/* Llib/object.scm 1409 */
							obj_t BgL_tmpz00_9973;

							BgL_tmpz00_9973 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2984z00_6388 = BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_9973);
						}
						BgL_arg2200z00_6387 = BgL_res2984z00_6388;
					}
					BgL_test4113z00_9969 = (BgL_arg2199z00_6386 == BgL_arg2200z00_6387);
				}
				if (BgL_test4113z00_9969)
					{	/* Llib/object.scm 1409 */
						return BFALSE;
					}
				else
					{	/* Llib/object.scm 1407 */
						obj_t BgL_nextzd2method1406zd2_6389;

						BgL_nextzd2method1406zd2_6389 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_z62iozd2writezd2errorz62_bglt) BgL_excz00_5824)),
							BGl_exceptionzd2notifyzd2envz00zz__objectz00,
							BGl_z62iozd2writezd2errorz62zz__objectz00);
						return
							PROCEDURE_ENTRY(BgL_nextzd2method1406zd2_6389)
							(BgL_nextzd2method1406zd2_6389,
							((obj_t) ((BgL_z62iozd2writezd2errorz62_bglt) BgL_excz00_5824)),
							BEOA);
					}
			}
		}

	}



/* &exception-notify-&er1405 */
	obj_t BGl_z62exceptionzd2notifyzd2z62er1405z00zz__objectz00(obj_t
		BgL_envz00_5825, obj_t BgL_excz00_5826)
	{
		{	/* Llib/object.scm 1401 */
			return
				BGl_errorzd2notifyzd2zz__errorz00(
				((obj_t) ((BgL_z62errorz62_bglt) BgL_excz00_5826)));
		}

	}

#ifdef __cplusplus
}
#endif
