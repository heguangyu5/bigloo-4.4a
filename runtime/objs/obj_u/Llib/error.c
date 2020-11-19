/*===========================================================================*/
/*   (Llib/error.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/error.scm -indent -o objs/obj_u/Llib/error.c) */
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

	typedef struct BgL_z62warningz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_argsz00;
	}                    *BgL_z62warningz62_bglt;


	extern obj_t BGl_stringzd2replacezd2zz__r4_strings_6_7z00(obj_t,
		unsigned char, unsigned char);
	BGL_EXPORTED_DECL obj_t BGl_raisez00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_errorzd2notifyzf2locationz20zz__errorz00(obj_t,
		obj_t, int);
	static obj_t BGl_z62errorzf2locationz90zz__errorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_system_failure(int, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl_relativezd2filezd2namez00zz__errorz00(obj_t);
	static obj_t BGl_zc3z04exitza32140ze3ze70z60zz__errorz00(obj_t, obj_t);
	static obj_t BGl_z62displayzd2tracezd2stackzd2sourcezb0zz__errorz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_z62iozd2writezd2errorz62zz__objectz00;
	BGL_EXPORTED_DECL obj_t BGl_warningzf2czd2locationz20zz__errorz00(char *,
		long, obj_t);
	extern obj_t unwind_stack_until(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_uncygdrivez00zz__errorz00(obj_t);
	extern obj_t BGl_getenvz00zz__osz00(obj_t);
	extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_notifyzd2interruptzd2zz__errorz00(int);
	static obj_t BGl_z62errorzd2notifyzf2locationz42zz__errorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62warningzd2notifyzf2locationz42zz__errorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__errorz00();
	static obj_t BGl_z62bigloozd2typezd2errorz62zz__errorz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_z62exceptionz62zz__objectz00;
	static obj_t BGl_z62withzd2exceptionzd2handlerz62zz__errorz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_dirnamez00zz__osz00(obj_t);
	static obj_t BGl_dozd2warnzf2locationz20zz__errorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62findzd2runtimezd2typez62zz__errorz00(obj_t, obj_t);
	static obj_t BGl_z62sigfpezd2errorzd2handlerz62zz__errorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_warningzf2locationzf2zz__errorz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_errorzf2sourcezf2zz__errorz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_fprintfz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL char *bgl_show_type(obj_t);
	static obj_t BGl_warningzf2locationzd2filez20zz__errorz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62defaultzd2exceptionzd2handlerz62zz__errorz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__errorz00();
	static obj_t BGl_z62errorzf2errnoz90zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_notifyzd2z62errorzf2locz42zz__errorz00(BgL_z62errorz62_bglt,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_typeof(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32142ze3ze5zz__errorz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31413ze3ze5zz__errorz00(obj_t, obj_t);
	static obj_t BGl_z62typezd2error3077zb0zz__errorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_notifyzd2z62errorzf2locationzd2nozd2locz42zz__errorz00
		(BgL_z62errorz62_bglt);
	BGL_EXPORTED_DECL obj_t BGl_errorzf2czd2locationz20zz__errorz00(obj_t, obj_t,
		obj_t, char *, long);
	extern obj_t make_string(long, unsigned char);
	static obj_t BGl_z62zc3z04anonymousza31415ze3ze5zz__errorz00(obj_t);
	static obj_t BGl_z62czd2debuggingzd2showzd2typezb0zz__errorz00(obj_t, obj_t);
	static obj_t BGl_z62warning3079z62zz__errorz00(obj_t, obj_t);
	static obj_t BGl_z62bigloozd2typezd2errorzf2locationz90zz__errorz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00;
	extern obj_t BGl_newlinez00zz__r4_output_6_10_3z00(obj_t);
	static obj_t BGl_z62exitz62zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_exceptionzd2notifyzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t);
	extern obj_t BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00;
	BGL_EXPORTED_DECL obj_t BGl_errorzf2sourcezd2locationz20zz__errorz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_classzf3zf3zz__objectz00(obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	extern bool_t fexists(char *);
	BGL_EXPORTED_DECL obj_t BGl_z62tryz62zz__errorz00(obj_t, obj_t);
	static obj_t BGl_z62sigsegvzd2errorzd2handlerz62zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_locationzd2linezd2numz00zz__errorz00(obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62escz62zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_z62iozd2connectionzd2errorz62zz__objectz00;
	extern long bgl_list_length(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__errorz00();
	BGL_EXPORTED_DECL obj_t BGl_dumpzd2tracezd2stackz00zz__errorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62errorzf2sourcezd2locationz42zz__errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62errorzf2sourcez90zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	static obj_t BGl_openzd2forzd2errorz00zz__errorz00(obj_t);
	static obj_t BGl_symbol3135z00zz__errorz00 = BUNSPEC;
	extern obj_t BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00;
	extern obj_t bgl_get_trace_stack(int);
	static obj_t BGl_z62modulezd2initzd2errorz62zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_printzd2cursorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	static obj_t BGl_dirnamezd2ze3listz31zz__errorz00(obj_t);
	extern obj_t BGl_z62conditionz62zz__objectz00;
	static obj_t BGl_z62zc3z04anonymousza31815ze3ze5zz__errorz00(obj_t, obj_t);
	static obj_t BGl_displayzd2tracezd2stackzd2frameze70z35zz__errorz00(obj_t,
		obj_t, obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_currentzd2exceptionzd2handlerz00zz__errorz00();
	static obj_t BGl_z62zc3z04anonymousza31727ze3ze5zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_warningzd2notifyzd2zz__errorz00(obj_t);
	static obj_t BGl_z62bigloozd2typezd2errorzd2msgzb0zz__errorz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static obj_t BGl_symbol3174z00zz__errorz00 = BUNSPEC;
	static obj_t BGl_symbol3176z00zz__errorz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t bgl_find_runtime_type(obj_t);
	extern bool_t BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62stackzd2overflowzd2erro3075z62zz__errorz00(obj_t);
	static obj_t BGl_z62error3076z62zz__errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol3194z00zz__errorz00 = BUNSPEC;
	static obj_t BGl_symbol3196z00zz__errorz00 = BUNSPEC;
	static obj_t BGl_notifyzd2z62errorzb0zz__errorz00(BgL_z62errorz62_bglt);
	extern obj_t BGl_z62processzd2exceptionzb0zz__objectz00;
	static obj_t BGl_z62errorzd2notifyzb0zz__errorz00(obj_t, obj_t);
	extern int BGl_bigloozd2warningzd2zz__paramz00();
	BGL_EXPORTED_DECL obj_t the_failure(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__errorz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_displayzd2tracezd2stackzd2sourcezd2zz__errorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31783ze3ze5zz__errorz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31694ze3ze5zz__errorz00(obj_t);
	extern obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_z62iozd2sigpipezd2errorz62zz__objectz00;
	extern obj_t BGl_everyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__errorz00();
	extern obj_t BGl_z62typezd2errorzb0zz__objectz00;
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_filenamezd2forzd2errorz00zz__errorz00(obj_t, long);
	static obj_t BGl_z62raisez62zz__errorz00(obj_t, obj_t);
	extern obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zz__errorz00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_z62iozd2parsezd2errorz62zz__objectz00;
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_displayzd2tracezd2stackz00zz__errorz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62the_failurez62zz__errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_basenamez00zz__osz00(obj_t);
	static obj_t
		BGl_notifyzd2z62errorzf2locationzd2locz90zz__errorz00(BgL_z62errorz62_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62notifyzd2interruptzb0zz__errorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initzd2errorz00zz__errorz00(char *,
		char *);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t bgl_close_input_port(obj_t);
	extern obj_t BGl_forzd2eachzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
	extern obj_t BGl_fprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_signalz00zz__osz00(int, obj_t);
	static obj_t BGl_defaultzd2exceptionzd2handlerz00zz__errorz00(obj_t);
	extern bool_t bigloo_strncmp(obj_t, obj_t, long);
	static obj_t BGl__getzd2tracezd2stackz00zz__errorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_warningzf2loczf2zz__errorz00(obj_t, obj_t);
	static obj_t BGl_z62warningzf2locationz90zz__errorz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
	static obj_t BGl_fixzd2tabulationz12zc0zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_applyz00zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62z62tryz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00;
	static obj_t BGl_z62errorzf2czd2locationz42zz__errorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31428ze3ze5zz__errorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	extern obj_t BGl_z62errorz62zz__objectz00;
	extern obj_t BGl_z62warningz62zz__objectz00;
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	extern obj_t BGl_z62stackzd2overflowzd2errorz62zz__objectz00;
	static obj_t BGl_z62warningzd2notifyzb0zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_z62iozd2portzd2errorz62zz__objectz00;
	static obj_t BGl_cnstzd2initzd2zz__errorz00();
	static obj_t BGl_z62typeofz62zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_z62iozd2timeoutzd2errorz62zz__objectz00;
	BGL_EXPORTED_DECL obj_t BGl_warningzd2notifyzf2locationz20zz__errorz00(obj_t,
		obj_t, int);
	extern obj_t BGl_z62iozd2errorzb0zz__objectz00;
	static obj_t BGl_importedzd2moduleszd2initz00zz__errorz00();
	BGL_EXPORTED_DECL obj_t bgl_stack_overflow_error();
	static obj_t BGl_z62warningzf2czd2locationz42zz__errorz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62currentzd2exceptionzd2handlerz62zz__errorz00(obj_t);
	static obj_t BGl_symbol3207z00zz__errorz00 = BUNSPEC;
	static obj_t BGl_z62warningzf2locz90zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
	static obj_t BGl_z62sigbuszd2errorzd2handlerz62zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_pwdz00zz__osz00();
	extern obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
	static obj_t BGl_z62indexzd2outzd2ofzd2bounds3078zb0zz__errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t,
		obj_t, int, int);
	static obj_t BGl__displayzd2tracezd2stackz00zz__errorz00(obj_t, obj_t);
	extern int BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00();
	extern obj_t BGl_displayz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_z62dumpzd2tracezd2stackz62zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t,
		obj_t);
	extern long BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		long, long);
	static obj_t BGl_z62sigillzd2errorzd2handlerz62zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_z62iozd2readzd2errorz62zz__objectz00;
	extern obj_t BGl_valuesz00zz__r5_control_features_6_4z00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_errorzd2notifyzf2locationzd2envzf2zz__errorz00,
		BgL_bgl_za762errorza7d2notif3270z00,
		BGl_z62errorzd2notifyzf2locationz42zz__errorz00, 0L, BUNSPEC, 3);
	extern obj_t BGl_pairzf3zd2envz21zz__r4_pairs_and_lists_6_3z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2typezd2errorzd2envzd2zz__errorz00,
		BgL_bgl_za762biglooza7d2type3271z00,
		BGl_z62bigloozd2typezd2errorz62zz__errorz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string3200z00zz__errorz00,
		BgL_bgl_string3200za700za7za7_3272za7, ")", 1);
	      DEFINE_STRING(BGl_string3201z00zz__errorz00,
		BgL_bgl_string3201za700za7za7_3273za7, ", ", 2);
	      DEFINE_STRING(BGl_string3202z00zz__errorz00,
		BgL_bgl_string3202za700za7za7_3274za7, ":", 1);
	      DEFINE_STRING(BGl_string3203z00zz__errorz00,
		BgL_bgl_string3203za700za7za7_3275za7, "@", 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_modulezd2initzd2errorzd2envzd2zz__errorz00,
		BgL_bgl_za762moduleza7d2init3276z00,
		BGl_z62modulezd2initzd2errorz62zz__errorz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3204z00zz__errorz00,
		BgL_bgl_string3204za700za7za7_3277za7, "File ~s, line ~d, character ~d\n",
		31);
	      DEFINE_STRING(BGl_string3205z00zz__errorz00,
		BgL_bgl_string3205za700za7za7_3278za7, "File ~s, character ~d\n", 22);
	      DEFINE_STRING(BGl_string3206z00zz__errorz00,
		BgL_bgl_string3206za700za7za7_3279za7, "&display-trace-stack-source", 27);
	      DEFINE_STRING(BGl_string3208z00zz__errorz00,
		BgL_bgl_string3208za700za7za7_3280za7, "done", 4);
	      DEFINE_STRING(BGl_string3209z00zz__errorz00,
		BgL_bgl_string3209za700za7za7_3281za7, "^", 1);
	      DEFINE_STRING(BGl_string3210z00zz__errorz00,
		BgL_bgl_string3210za700za7za7_3282za7, "#", 1);
	      DEFINE_STRING(BGl_string3211z00zz__errorz00,
		BgL_bgl_string3211za700za7za7_3283za7, ", character ", 12);
	      DEFINE_STRING(BGl_string3212z00zz__errorz00,
		BgL_bgl_string3212za700za7za7_3284za7, "\", line ", 8);
	      DEFINE_STRING(BGl_string3213z00zz__errorz00,
		BgL_bgl_string3213za700za7za7_3285za7, ".", 1);
	      DEFINE_STRING(BGl_string3214z00zz__errorz00,
		BgL_bgl_string3214za700za7za7_3286za7, "../", 3);
	      DEFINE_STRING(BGl_string3215z00zz__errorz00,
		BgL_bgl_string3215za700za7za7_3287za7, "/", 1);
	      DEFINE_STRING(BGl_string3216z00zz__errorz00,
		BgL_bgl_string3216za700za7za7_3288za7, "/cygdrive/", 10);
	      DEFINE_STRING(BGl_string3217z00zz__errorz00,
		BgL_bgl_string3217za700za7za7_3289za7, "real", 4);
	      DEFINE_STRING(BGl_string3218z00zz__errorz00,
		BgL_bgl_string3218za700za7za7_3290za7, "symbol", 6);
	      DEFINE_STRING(BGl_string3219z00zz__errorz00,
		BgL_bgl_string3219za700za7za7_3291za7, "keyword", 7);
	      DEFINE_STRING(BGl_string3220z00zz__errorz00,
		BgL_bgl_string3220za700za7za7_3292za7, "bchar", 5);
	      DEFINE_STRING(BGl_string3221z00zz__errorz00,
		BgL_bgl_string3221za700za7za7_3293za7, "bbool", 5);
	      DEFINE_STRING(BGl_string3222z00zz__errorz00,
		BgL_bgl_string3222za700za7za7_3294za7, "bnil", 4);
	      DEFINE_STRING(BGl_string3223z00zz__errorz00,
		BgL_bgl_string3223za700za7za7_3295za7, "unspecified", 11);
	      DEFINE_STRING(BGl_string3224z00zz__errorz00,
		BgL_bgl_string3224za700za7za7_3296za7, "epair", 5);
	      DEFINE_STRING(BGl_string3225z00zz__errorz00,
		BgL_bgl_string3225za700za7za7_3297za7, "pair", 4);
	      DEFINE_STRING(BGl_string3226z00zz__errorz00,
		BgL_bgl_string3226za700za7za7_3298za7, "class", 5);
	      DEFINE_STRING(BGl_string3227z00zz__errorz00,
		BgL_bgl_string3227za700za7za7_3299za7, "vector", 6);
	      DEFINE_STRING(BGl_string3228z00zz__errorz00,
		BgL_bgl_string3228za700za7za7_3300za7, "tvector", 7);
	      DEFINE_STRING(BGl_string3229z00zz__errorz00,
		BgL_bgl_string3229za700za7za7_3301za7, "struct:", 7);
	      DEFINE_STRING(BGl_string3230z00zz__errorz00,
		BgL_bgl_string3230za700za7za7_3302za7, "input-port", 10);
	      DEFINE_STRING(BGl_string3231z00zz__errorz00,
		BgL_bgl_string3231za700za7za7_3303za7, "binary-port", 11);
	      DEFINE_STRING(BGl_string3232z00zz__errorz00,
		BgL_bgl_string3232za700za7za7_3304za7, "cell", 4);
	      DEFINE_STRING(BGl_string3233z00zz__errorz00,
		BgL_bgl_string3233za700za7za7_3305za7, "foreign:", 8);
	      DEFINE_STRING(BGl_string3234z00zz__errorz00,
		BgL_bgl_string3234za700za7za7_3306za7, "socket", 6);
	      DEFINE_STRING(BGl_string3235z00zz__errorz00,
		BgL_bgl_string3235za700za7za7_3307za7, "datagram-socket", 15);
	      DEFINE_STRING(BGl_string3236z00zz__errorz00,
		BgL_bgl_string3236za700za7za7_3308za7, "process", 7);
	      DEFINE_STRING(BGl_string3237z00zz__errorz00,
		BgL_bgl_string3237za700za7za7_3309za7, "custom", 6);
	      DEFINE_STRING(BGl_string3238z00zz__errorz00,
		BgL_bgl_string3238za700za7za7_3310za7, "opaque", 6);
	      DEFINE_STRING(BGl_string3239z00zz__errorz00,
		BgL_bgl_string3239za700za7za7_3311za7, "_", 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typeofzd2envzd2zz__errorz00,
		BgL_bgl_za762typeofza762za7za7__3312z00, BGl_z62typeofz62zz__errorz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z62tryzd2envzb0zz__errorz00,
		BgL_bgl_za762za762tryza700za7za7__3313za7, BGl_z62z62tryz00zz__errorz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3240z00zz__errorz00,
		BgL_bgl_string3240za700za7za7_3314za7, "ucs2string", 10);
	      DEFINE_STRING(BGl_string3241z00zz__errorz00,
		BgL_bgl_string3241za700za7za7_3315za7, "ucs2", 4);
	      DEFINE_STRING(BGl_string3242z00zz__errorz00,
		BgL_bgl_string3242za700za7za7_3316za7, "elong", 5);
	      DEFINE_STRING(BGl_string3243z00zz__errorz00,
		BgL_bgl_string3243za700za7za7_3317za7, "llong", 5);
	      DEFINE_STRING(BGl_string3244z00zz__errorz00,
		BgL_bgl_string3244za700za7za7_3318za7, "mutex", 5);
	      DEFINE_STRING(BGl_string3245z00zz__errorz00,
		BgL_bgl_string3245za700za7za7_3319za7, "condvar", 7);
	      DEFINE_STRING(BGl_string3246z00zz__errorz00,
		BgL_bgl_string3246za700za7za7_3320za7, "date", 4);
	      DEFINE_STRING(BGl_string3247z00zz__errorz00,
		BgL_bgl_string3247za700za7za7_3321za7, "bignum", 6);
	      DEFINE_STRING(BGl_string3248z00zz__errorz00,
		BgL_bgl_string3248za700za7za7_3322za7, "mmap", 4);
	      DEFINE_STRING(BGl_string3249z00zz__errorz00,
		BgL_bgl_string3249za700za7za7_3323za7, "regexp", 6);
	      DEFINE_STRING(BGl_string3250z00zz__errorz00,
		BgL_bgl_string3250za700za7za7_3324za7, "int8", 4);
	      DEFINE_STRING(BGl_string3251z00zz__errorz00,
		BgL_bgl_string3251za700za7za7_3325za7, "uint8", 5);
	      DEFINE_STRING(BGl_string3252z00zz__errorz00,
		BgL_bgl_string3252za700za7za7_3326za7, "int16", 5);
	      DEFINE_STRING(BGl_string3253z00zz__errorz00,
		BgL_bgl_string3253za700za7za7_3327za7, "uint16", 6);
	      DEFINE_STRING(BGl_string3254z00zz__errorz00,
		BgL_bgl_string3254za700za7za7_3328za7, "int32", 5);
	      DEFINE_STRING(BGl_string3255z00zz__errorz00,
		BgL_bgl_string3255za700za7za7_3329za7, "uint32", 6);
	      DEFINE_STRING(BGl_string3256z00zz__errorz00,
		BgL_bgl_string3256za700za7za7_3330za7, "int64", 5);
	      DEFINE_STRING(BGl_string3257z00zz__errorz00,
		BgL_bgl_string3257za700za7za7_3331za7, "uint64", 6);
	      DEFINE_STRING(BGl_string3258z00zz__errorz00,
		BgL_bgl_string3258za700za7za7_3332za7, "bcnst", 5);
	      DEFINE_STRING(BGl_string3259z00zz__errorz00,
		BgL_bgl_string3259za700za7za7_3333za7, "&&try", 5);
	      DEFINE_STRING(BGl_string3260z00zz__errorz00,
		BgL_bgl_string3260za700za7za7_3334za7, "*** INTERRUPT:bigloo:", 21);
	      DEFINE_STRING(BGl_string3261z00zz__errorz00,
		BgL_bgl_string3261za700za7za7_3335za7, "&notify-interrupt", 17);
	      DEFINE_STRING(BGl_string3262z00zz__errorz00,
		BgL_bgl_string3262za700za7za7_3336za7, "arithmetic procedure", 20);
	      DEFINE_STRING(BGl_string3263z00zz__errorz00,
		BgL_bgl_string3263za700za7za7_3337za7, "`floating point' exception", 26);
	      DEFINE_STRING(BGl_string3264z00zz__errorz00,
		BgL_bgl_string3264za700za7za7_3338za7, "raised", 6);
	      DEFINE_STRING(BGl_string3265z00zz__errorz00,
		BgL_bgl_string3265za700za7za7_3339za7, "bigloo", 6);
	      DEFINE_STRING(BGl_string3266z00zz__errorz00,
		BgL_bgl_string3266za700za7za7_3340za7, "`illegal instruction' exception",
		31);
	      DEFINE_STRING(BGl_string3267z00zz__errorz00,
		BgL_bgl_string3267za700za7za7_3341za7, "`bus error' exception", 21);
	      DEFINE_STRING(BGl_string3268z00zz__errorz00,
		BgL_bgl_string3268za700za7za7_3342za7, "`segmentation violation' exception",
		34);
	      DEFINE_STRING(BGl_string3269z00zz__errorz00,
		BgL_bgl_string3269za700za7za7_3343za7, "__error", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dumpzd2tracezd2stackzd2envzd2zz__errorz00,
		BgL_bgl_za762dumpza7d2traceza73344za7,
		BGl_z62dumpzd2tracezd2stackz62zz__errorz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3181z00zz__errorz00,
		BgL_bgl_za762za7c3za704anonymo3345za7,
		BGl_z62zc3z04anonymousza31783ze3ze5zz__errorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3185z00zz__errorz00,
		BgL_bgl_za762za7c3za704anonymo3346za7,
		BGl_z62zc3z04anonymousza31815ze3ze5zz__errorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displayzd2tracezd2stackzd2sourcezd2envz00zz__errorz00,
		BgL_bgl_za762displayza7d2tra3347z00,
		BGl_z62displayzd2tracezd2stackzd2sourcezb0zz__errorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_czd2debuggingzd2showzd2typezd2envz00zz__errorz00,
		BgL_bgl_za762cza7d2debugging3348z00,
		BGl_z62czd2debuggingzd2showzd2typezb0zz__errorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stackzd2overflowzd2errorzd2envzd2zz__errorz00,
		BgL_bgl_za762stackza7d2overf3349z00,
		BGl_z62stackzd2overflowzd2erro3075z62zz__errorz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2typezd2errorzd2msgzd2envz00zz__errorz00,
		BgL_bgl_za762biglooza7d2type3350z00,
		BGl_z62bigloozd2typezd2errorzd2msgzb0zz__errorz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_errorzf2locationzd2envz20zz__errorz00,
		BgL_bgl_za762errorza7f2locat3351z00, BGl_z62errorzf2locationz90zz__errorz00,
		0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_errorzf2sourcezd2envz20zz__errorz00,
		BgL_bgl_za762errorza7f2sourc3352z00, BGl_z62errorzf2sourcez90zz__errorz00,
		0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexzd2outzd2ofzd2boundszd2errorzd2envzd2zz__errorz00,
		BgL_bgl_za762indexza7d2outza7d3353za7,
		BGl_z62indexzd2outzd2ofzd2bounds3078zb0zz__errorz00, 0L, BUNSPEC, 6);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_sigbuszd2errorzd2handlerzd2envzd2zz__errorz00,
		BgL_bgl_za762sigbusza7d2erro3354z00,
		BGl_z62sigbuszd2errorzd2handlerz62zz__errorz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_errorzd2envzd2zz__errorz00,
		BgL_bgl_za762error3076za762za73355za7, BGl_z62error3076z62zz__errorz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_sigsegvzd2errorzd2handlerzd2envzd2zz__errorz00,
		BgL_bgl_za762sigsegvza7d2err3356z00,
		BGl_z62sigsegvzd2errorzd2handlerz62zz__errorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displayzd2tracezd2stackzd2envzd2zz__errorz00,
		BgL_bgl__displayza7d2trace3357za7, opt_generic_entry,
		BGl__displayzd2tracezd2stackz00zz__errorz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_warningzf2loczd2envz20zz__errorz00,
		BgL_bgl_za762warningza7f2loc3358z00, va_generic_entry,
		BGl_z62warningzf2locz90zz__errorz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_warningzf2czd2locationzd2envzf2zz__errorz00,
		BgL_bgl_za762warningza7f2cza7d3359za7, va_generic_entry,
		BGl_z62warningzf2czd2locationz42zz__errorz00, BUNSPEC, -3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_errorzf2errnozd2envz20zz__errorz00,
		BgL_bgl_za762errorza7f2errno3360z00, BGl_z62errorzf2errnoz90zz__errorz00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_warningzf2locationzd2envz20zz__errorz00,
		BgL_bgl_za762warningza7f2loc3361z00, va_generic_entry,
		BGl_z62warningzf2locationz90zz__errorz00, BUNSPEC, -3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_the_failurezd2envzd2zz__errorz00,
		BgL_bgl_za762the_failureza763362z00, BGl_z62the_failurez62zz__errorz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_currentzd2exceptionzd2handlerzd2envzd2zz__errorz00,
		BgL_bgl_za762currentza7d2exc3363z00,
		BGl_z62currentzd2exceptionzd2handlerz62zz__errorz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3128z00zz__errorz00,
		BgL_bgl_string3128za700za7za7_3364za7, "BIGLOOSTACKDEPTH", 16);
	      DEFINE_STRING(BGl_string3129z00zz__errorz00,
		BgL_bgl_string3129za700za7za7_3365za7, "\077\077?", 3);
	      DEFINE_STRING(BGl_string3130z00zz__errorz00,
		BgL_bgl_string3130za700za7za7_3366za7, "Type", 4);
	      DEFINE_STRING(BGl_string3131z00zz__errorz00,
		BgL_bgl_string3131za700za7za7_3367za7, "/tmp/4.4a/runtime/Llib/error.scm",
		32);
	      DEFINE_STRING(BGl_string3132z00zz__errorz00,
		BgL_bgl_string3132za700za7za7_3368za7, "&error/errno", 12);
	      DEFINE_STRING(BGl_string3133z00zz__errorz00,
		BgL_bgl_string3133za700za7za7_3369za7, "bint", 4);
	      DEFINE_STRING(BGl_string3134z00zz__errorz00,
		BgL_bgl_string3134za700za7za7_3370za7, "stack overflow", 14);
	      DEFINE_STRING(BGl_string3136z00zz__errorz00,
		BgL_bgl_string3136za700za7za7_3371za7, "at", 2);
	      DEFINE_STRING(BGl_string3137z00zz__errorz00,
		BgL_bgl_string3137za700za7za7_3372za7, "with-exception-handler", 22);
	      DEFINE_STRING(BGl_string3138z00zz__errorz00,
		BgL_bgl_string3138za700za7za7_3373za7, "Incorrect thunk arity", 21);
	      DEFINE_STRING(BGl_string3139z00zz__errorz00,
		BgL_bgl_string3139za700za7za7_3374za7, "Incorrect handler arity", 23);
	      DEFINE_STRING(BGl_string3140z00zz__errorz00,
		BgL_bgl_string3140za700za7za7_3375za7, "&with-exception-handler", 23);
	      DEFINE_STRING(BGl_string3141z00zz__errorz00,
		BgL_bgl_string3141za700za7za7_3376za7, "procedure", 9);
	      DEFINE_STRING(BGl_string3142z00zz__errorz00,
		BgL_bgl_string3142za700za7za7_3377za7, "raise", 5);
	      DEFINE_STRING(BGl_string3143z00zz__errorz00,
		BgL_bgl_string3143za700za7za7_3378za7, "Handler return from error", 25);
	      DEFINE_STRING(BGl_string3144z00zz__errorz00,
		BgL_bgl_string3144za700za7za7_3379za7, "uncaught exception", 18);
	      DEFINE_STRING(BGl_string3145z00zz__errorz00,
		BgL_bgl_string3145za700za7za7_3380za7,
		"' must be recompiled (see also -unsafev option).", 48);
	      DEFINE_STRING(BGl_string3146z00zz__errorz00,
		BgL_bgl_string3146za700za7za7_3381za7, "At least `", 10);
	      DEFINE_STRING(BGl_string3147z00zz__errorz00,
		BgL_bgl_string3147za700za7za7_3382za7, "'.\n", 3);
	      DEFINE_STRING(BGl_string3148z00zz__errorz00,
		BgL_bgl_string3148za700za7za7_3383za7,
		"' is inconsistently initialized by module `", 43);
	      DEFINE_STRING(BGl_string3149z00zz__errorz00,
		BgL_bgl_string3149za700za7za7_3384za7, "Module `", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_warningzd2notifyzf2locationzd2envzf2zz__errorz00,
		BgL_bgl_za762warningza7d2not3385z00,
		BGl_z62warningzd2notifyzf2locationz42zz__errorz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2errorzd2envz00zz__errorz00,
		BgL_bgl_za762typeza7d2error33386z00, BGl_z62typezd2error3077zb0zz__errorz00,
		0L, BUNSPEC, 5);
	      DEFINE_STRING(BGl_string3150z00zz__errorz00,
		BgL_bgl_string3150za700za7za7_3387za7,
		":Inconsistent module initialization\n", 36);
	      DEFINE_STRING(BGl_string3151z00zz__errorz00,
		BgL_bgl_string3151za700za7za7_3388za7, "*** ERROR:", 10);
	      DEFINE_STRING(BGl_string3152z00zz__errorz00,
		BgL_bgl_string3152za700za7za7_3389za7, "&module-init-error", 18);
	      DEFINE_STRING(BGl_string3153z00zz__errorz00,
		BgL_bgl_string3153za700za7za7_3390za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3154z00zz__errorz00,
		BgL_bgl_string3154za700za7za7_3391za7, "&error/c-location", 17);
	      DEFINE_STRING(BGl_string3155z00zz__errorz00,
		BgL_bgl_string3155za700za7za7_3392za7, "\" provided", 10);
	      DEFINE_STRING(BGl_string3156z00zz__errorz00,
		BgL_bgl_string3156za700za7za7_3393za7, "\" expected, \"", 13);
	      DEFINE_STRING(BGl_string3157z00zz__errorz00,
		BgL_bgl_string3157za700za7za7_3394za7, " \"", 2);
	      DEFINE_STRING(BGl_string3158z00zz__errorz00,
		BgL_bgl_string3158za700za7za7_3395za7, "&bigloo-type-error-msg", 22);
	      DEFINE_STRING(BGl_string3159z00zz__errorz00,
		BgL_bgl_string3159za700za7za7_3396za7, "]", 1);
	      DEFINE_STRING(BGl_string3160z00zz__errorz00,
		BgL_bgl_string3160za700za7za7_3397za7, " out of range [0..", 18);
	      DEFINE_STRING(BGl_string3161z00zz__errorz00,
		BgL_bgl_string3161za700za7za7_3398za7, "index ", 6);
	      DEFINE_STRING(BGl_string3162z00zz__errorz00,
		BgL_bgl_string3162za700za7za7_3399za7, "&index-out-of-bounds3078", 24);
	      DEFINE_STRING(BGl_string3163z00zz__errorz00,
		BgL_bgl_string3163za700za7za7_3400za7, "&warning/c-location", 19);
	      DEFINE_STRING(BGl_string3164z00zz__errorz00,
		BgL_bgl_string3164za700za7za7_3401za7, ":\n", 2);
	      DEFINE_STRING(BGl_string3165z00zz__errorz00,
		BgL_bgl_string3165za700za7za7_3402za7, " -- ", 4);
	      DEFINE_STRING(BGl_string3166z00zz__errorz00,
		BgL_bgl_string3166za700za7za7_3403za7, "\", character ", 13);
	      DEFINE_STRING(BGl_string3167z00zz__errorz00,
		BgL_bgl_string3167za700za7za7_3404za7, "File \"", 6);
	      DEFINE_STRING(BGl_string3168z00zz__errorz00,
		BgL_bgl_string3168za700za7za7_3405za7, "", 0);
	      DEFINE_STRING(BGl_string3169z00zz__errorz00,
		BgL_bgl_string3169za700za7za7_3406za7, "stdin", 5);
	      DEFINE_STRING(BGl_string3170z00zz__errorz00,
		BgL_bgl_string3170za700za7za7_3407za7, "string://", 9);
	      DEFINE_STRING(BGl_string3171z00zz__errorz00,
		BgL_bgl_string3171za700za7za7_3408za7, "...", 3);
	      DEFINE_STRING(BGl_string3172z00zz__errorz00,
		BgL_bgl_string3172za700za7za7_3409za7, "win32", 5);
	      DEFINE_STRING(BGl_string3173z00zz__errorz00,
		BgL_bgl_string3173za700za7za7_3410za7, "<eof>", 5);
	      DEFINE_STRING(BGl_string3175z00zz__errorz00,
		BgL_bgl_string3175za700za7za7_3411za7, "line-col", 8);
	      DEFINE_STRING(BGl_string3177z00zz__errorz00,
		BgL_bgl_string3177za700za7za7_3412za7, "line", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2exceptionzd2handlerzd2envzd2zz__errorz00,
		BgL_bgl_za762withza7d2except3413z00,
		BGl_z62withzd2exceptionzd2handlerz62zz__errorz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3178z00zz__errorz00,
		BgL_bgl_string3178za700za7za7_3414za7, "*** CONDITION: ", 15);
	      DEFINE_STRING(BGl_string3179z00zz__errorz00,
		BgL_bgl_string3179za700za7za7_3415za7, "&error-notify/location", 22);
	      DEFINE_STRING(BGl_string3180z00zz__errorz00,
		BgL_bgl_string3180za700za7za7_3416za7, "*** WARNING:bigloo:", 19);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_sigfpezd2errorzd2handlerzd2envzd2zz__errorz00,
		BgL_bgl_za762sigfpeza7d2erro3417z00,
		BGl_z62sigfpezd2errorzd2handlerz62zz__errorz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3182z00zz__errorz00,
		BgL_bgl_string3182za700za7za7_3418za7, "[string]", 8);
	      DEFINE_STRING(BGl_string3183z00zz__errorz00,
		BgL_bgl_string3183za700za7za7_3419za7, "[stdin]", 7);
	      DEFINE_STRING(BGl_string3184z00zz__errorz00,
		BgL_bgl_string3184za700za7za7_3420za7, "&warning-notify/location", 24);
	      DEFINE_STRING(BGl_string3186z00zz__errorz00,
		BgL_bgl_string3186za700za7za7_3421za7, "_display-trace-stack", 20);
	      DEFINE_STRING(BGl_string3187z00zz__errorz00,
		BgL_bgl_string3187za700za7za7_3422za7, "output-port", 11);
	      DEFINE_STRING(BGl_string3188z00zz__errorz00,
		BgL_bgl_string3188za700za7za7_3423za7,
		"\n*** INTERNAL ERROR: corrupted stack -- ~s\n", 43);
	      DEFINE_STRING(BGl_string3189z00zz__errorz00,
		BgL_bgl_string3189za700za7za7_3424za7, "! ", 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_warningzd2notifyzd2envz00zz__errorz00,
		BgL_bgl_za762warningza7d2not3425z00, BGl_z62warningzd2notifyzb0zz__errorz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3190z00zz__errorz00,
		BgL_bgl_string3190za700za7za7_3426za7, "    ", 4);
	      DEFINE_STRING(BGl_string3191z00zz__errorz00,
		BgL_bgl_string3191za700za7za7_3427za7, "   ", 3);
	      DEFINE_STRING(BGl_string3192z00zz__errorz00,
		BgL_bgl_string3192za700za7za7_3428za7, "  ", 2);
	      DEFINE_STRING(BGl_string3193z00zz__errorz00,
		BgL_bgl_string3193za700za7za7_3429za7, ". ", 2);
	      DEFINE_STRING(BGl_string3195z00zz__errorz00,
		BgL_bgl_string3195za700za7za7_3430za7, "margin", 6);
	      DEFINE_STRING(BGl_string3197z00zz__errorz00,
		BgL_bgl_string3197za700za7za7_3431za7, "format", 6);
	      DEFINE_STRING(BGl_string3198z00zz__errorz00,
		BgL_bgl_string3198za700za7za7_3432za7, " ", 1);
	      DEFINE_STRING(BGl_string3199z00zz__errorz00,
		BgL_bgl_string3199za700za7za7_3433za7, " (* ", 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_raisezd2envzd2zz__errorz00,
		BgL_bgl_za762raiseza762za7za7__e3434z00, BGl_z62raisez62zz__errorz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_notifyzd2interruptzd2envz00zz__errorz00,
		BgL_bgl_za762notifyza7d2inte3435z00,
		BGl_z62notifyzd2interruptzb0zz__errorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2tracezd2stackzd2envzd2zz__errorz00,
		BgL_bgl__getza7d2traceza7d2s3436z00, opt_generic_entry,
		BGl__getzd2tracezd2stackz00zz__errorz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_errorzd2notifyzd2envz00zz__errorz00,
		BgL_bgl_za762errorza7d2notif3437z00, BGl_z62errorzd2notifyzb0zz__errorz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_errorzf2sourcezd2locationzd2envzf2zz__errorz00,
		BgL_bgl_za762errorza7f2sourc3438z00,
		BGl_z62errorzf2sourcezd2locationz42zz__errorz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_errorzf2czd2locationzd2envzf2zz__errorz00,
		BgL_bgl_za762errorza7f2cza7d2l3439za7,
		BGl_z62errorzf2czd2locationz42zz__errorz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2typezd2errorzf2locationzd2envz20zz__errorz00,
		BgL_bgl_za762biglooza7d2type3440z00,
		BGl_z62bigloozd2typezd2errorzf2locationz90zz__errorz00, 0L, BUNSPEC, 5);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_sigillzd2errorzd2handlerzd2envzd2zz__errorz00,
		BgL_bgl_za762sigillza7d2erro3441z00,
		BGl_z62sigillzd2errorzd2handlerz62zz__errorz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_exitzd2envzd2zz__errorz00,
		BgL_bgl_za762exitza762za7za7__er3442z00, va_generic_entry,
		BGl_z62exitz62zz__errorz00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_warningzd2envzd2zz__errorz00,
		BgL_bgl_za762warning3079za763443z00, va_generic_entry,
		BGl_z62warning3079z62zz__errorz00, BUNSPEC, -1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_defaultzd2exceptionzd2handlerzd2envzd2zz__errorz00,
		BgL_bgl_za762defaultza7d2exc3444z00,
		BGl_z62defaultzd2exceptionzd2handlerz62zz__errorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2runtimezd2typezd2envzd2zz__errorz00,
		BgL_bgl_za762findza7d2runtim3445z00,
		BGl_z62findzd2runtimezd2typez62zz__errorz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol3135z00zz__errorz00));
		     ADD_ROOT((void *) (&BGl_symbol3174z00zz__errorz00));
		     ADD_ROOT((void *) (&BGl_symbol3176z00zz__errorz00));
		     ADD_ROOT((void *) (&BGl_symbol3194z00zz__errorz00));
		     ADD_ROOT((void *) (&BGl_symbol3196z00zz__errorz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__errorz00));
		     ADD_ROOT((void *) (&BGl_symbol3207z00zz__errorz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long
		BgL_checksumz00_5167, char *BgL_fromz00_5168)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__errorz00))
				{
					BGl_requirezd2initializa7ationz75zz__errorz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__errorz00();
					BGl_cnstzd2initzd2zz__errorz00();
					BGl_importedzd2moduleszd2initz00zz__errorz00();
					return BGl_toplevelzd2initzd2zz__errorz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__errorz00()
	{
		{	/* Llib/error.scm 18 */
			BGl_symbol3135z00zz__errorz00 =
				bstring_to_symbol(BGl_string3136z00zz__errorz00);
			BGl_symbol3174z00zz__errorz00 =
				bstring_to_symbol(BGl_string3175z00zz__errorz00);
			BGl_symbol3176z00zz__errorz00 =
				bstring_to_symbol(BGl_string3177z00zz__errorz00);
			BGl_symbol3194z00zz__errorz00 =
				bstring_to_symbol(BGl_string3195z00zz__errorz00);
			BGl_symbol3196z00zz__errorz00 =
				bstring_to_symbol(BGl_string3197z00zz__errorz00);
			return (BGl_symbol3207z00zz__errorz00 =
				bstring_to_symbol(BGl_string3208z00zz__errorz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__errorz00()
	{
		{	/* Llib/error.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__errorz00()
	{
		{	/* Llib/error.scm 18 */
			BGl_signalz00zz__osz00(SIGFPE,
				BGl_sigfpezd2errorzd2handlerzd2envzd2zz__errorz00);
			BGl_signalz00zz__osz00(SIGTRAP,
				BGl_sigfpezd2errorzd2handlerzd2envzd2zz__errorz00);
			BGl_signalz00zz__osz00(SIGILL,
				BGl_sigillzd2errorzd2handlerzd2envzd2zz__errorz00);
			BGl_signalz00zz__osz00(SIGBUS,
				BGl_sigbuszd2errorzd2handlerzd2envzd2zz__errorz00);
			return BGl_signalz00zz__osz00(SIGSEGV,
				BGl_sigsegvzd2errorzd2handlerzd2envzd2zz__errorz00);
		}

	}



/* _get-trace-stack */
	obj_t BGl__getzd2tracezd2stackz00zz__errorz00(obj_t BgL_env1176z00_5,
		obj_t BgL_opt1175z00_4)
	{
		{	/* Llib/error.scm 278 */
			{	/* Llib/error.scm 278 */

				switch (VECTOR_LENGTH(BgL_opt1175z00_4))
					{
					case ((long) 0):

						{	/* Llib/error.scm 278 */

							return BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
						}
						break;
					case ((long) 1):

						{	/* Llib/error.scm 278 */
							obj_t BgL_depthz00_1559;

							BgL_depthz00_1559 = VECTOR_REF(BgL_opt1175z00_4, ((long) 0));
							{	/* Llib/error.scm 278 */

								return
									BGl_getzd2tracezd2stackz00zz__errorz00(BgL_depthz00_1559);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* get-trace-stack */
	BGL_EXPORTED_DEF obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t
		BgL_depthz00_3)
	{
		{	/* Llib/error.scm 278 */
			{	/* Llib/error.scm 279 */
				obj_t BgL_dz00_1560;

				if (INTEGERP(BgL_depthz00_3))
					{	/* Llib/error.scm 280 */
						BgL_dz00_1560 = BgL_depthz00_3;
					}
				else
					{	/* Llib/error.scm 281 */
						obj_t BgL_g1040z00_1562;

						BgL_g1040z00_1562 =
							BGl_getenvz00zz__osz00(BGl_string3128z00zz__errorz00);
						if (CBOOL(BgL_g1040z00_1562))
							{	/* Ieee/fixnum.scm 983 */

								BgL_dz00_1560 =
									BINT(BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
									(BgL_g1040z00_1562, ((long) 10), ((long) 0)));
							}
						else
							{	/* Llib/error.scm 281 */
								{	/* Llib/error.scm 282 */
									int BgL_arg1298z00_1570;

									BgL_arg1298z00_1570 =
										BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00();
									((bool_t) 1);
								}
								BgL_dz00_1560 =
									BINT(BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00());
					}}
				return bgl_get_trace_stack(CINT(BgL_dz00_1560));
			}
		}

	}



/* the_failure */
	BGL_EXPORTED_DEF obj_t the_failure(obj_t BgL_procz00_6, obj_t BgL_msgz00_7,
		obj_t BgL_objz00_8)
	{
		{	/* Llib/error.scm 289 */
			if (BGl_isazf3zf3zz__objectz00(BgL_procz00_6,
					BGl_z62exceptionz62zz__objectz00))
				{	/* Llib/error.scm 290 */
					return BGl_raisez00zz__errorz00(BgL_procz00_6);
				}
			else
				{	/* Llib/error.scm 290 */
					return
						BGl_errorz00zz__errorz00(BgL_procz00_6, BgL_msgz00_7, BgL_objz00_8);
				}
		}

	}



/* &the_failure */
	obj_t BGl_z62the_failurez62zz__errorz00(obj_t BgL_envz00_4918,
		obj_t BgL_procz00_4919, obj_t BgL_msgz00_4920, obj_t BgL_objz00_4921)
	{
		{	/* Llib/error.scm 289 */
			return the_failure(BgL_procz00_4919, BgL_msgz00_4920, BgL_objz00_4921);
		}

	}



/* error/errno */
	BGL_EXPORTED_DEF obj_t bgl_system_failure(int BgL_sysnoz00_9,
		obj_t BgL_procz00_10, obj_t BgL_msgz00_11, obj_t BgL_objz00_12)
	{
		{	/* Llib/error.scm 297 */
			if (((long) (BgL_sysnoz00_9) == (long) (BGL_IO_ERROR)))
				{	/* Llib/error.scm 301 */
					BgL_z62iozd2errorzb0_bglt BgL_arg1301z00_1573;

					{	/* Llib/error.scm 301 */
						BgL_z62iozd2errorzb0_bglt BgL_new1043z00_1574;

						{	/* Llib/error.scm 301 */
							BgL_z62iozd2errorzb0_bglt BgL_new1042z00_1577;

							BgL_new1042z00_1577 =
								((BgL_z62iozd2errorzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_z62iozd2errorzb0_bgl))));
							{	/* Llib/error.scm 301 */
								long BgL_arg1304z00_1578;

								{	/* Llib/error.scm 301 */
									long BgL_res2593z00_3270;

									BgL_res2593z00_3270 =
										BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00);
									BgL_arg1304z00_1578 = BgL_res2593z00_3270;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1042z00_1577),
									BgL_arg1304z00_1578);
							}
							BgL_new1043z00_1574 = BgL_new1042z00_1577;
						}
						((((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt) BgL_new1043z00_1574)))->
								BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
						((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
											BgL_new1043z00_1574)))->BgL_locationz00) =
							((obj_t) BFALSE), BUNSPEC);
						{
							obj_t BgL_auxz00_5222;

							{	/* Llib/error.scm 301 */
								obj_t BgL_arg1302z00_1575;

								{	/* Llib/error.scm 301 */
									obj_t BgL_arg1303z00_1576;

									{	/* Llib/error.scm 301 */
										obj_t BgL_res2594z00_3274;

										{	/* Llib/error.scm 301 */
											obj_t BgL_classz00_3273;

											BgL_classz00_3273 = BGl_z62iozd2errorzb0zz__objectz00;
											BgL_res2594z00_3274 =
												BGL_CLASS_ALL_FIELDS(BgL_classz00_3273);
										}
										BgL_arg1303z00_1576 = BgL_res2594z00_3274;
									}
									BgL_arg1302z00_1575 =
										VECTOR_REF(BgL_arg1303z00_1576, ((long) 2));
								}
								BgL_auxz00_5222 =
									BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
									(BgL_arg1302z00_1575);
							}
							((((BgL_z62exceptionz62_bglt) COBJECT(
											((BgL_z62exceptionz62_bglt) BgL_new1043z00_1574)))->
									BgL_stackz00) = ((obj_t) BgL_auxz00_5222), BUNSPEC);
						}
						((((BgL_z62errorz62_bglt) COBJECT(
										((BgL_z62errorz62_bglt) BgL_new1043z00_1574)))->
								BgL_procz00) = ((obj_t) BgL_procz00_10), BUNSPEC);
						((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
											BgL_new1043z00_1574)))->BgL_msgz00) =
							((obj_t) BgL_msgz00_11), BUNSPEC);
						((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
											BgL_new1043z00_1574)))->BgL_objz00) =
							((obj_t) BgL_objz00_12), BUNSPEC);
						BgL_arg1301z00_1573 = BgL_new1043z00_1574;
					}
					return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1301z00_1573));
				}
			else
				{	/* Llib/error.scm 299 */
					if (((long) (BgL_sysnoz00_9) == (long) (BGL_IO_PORT_ERROR)))
						{	/* Llib/error.scm 304 */
							BgL_z62iozd2portzd2errorz62_bglt BgL_arg1306z00_1580;

							{	/* Llib/error.scm 304 */
								BgL_z62iozd2portzd2errorz62_bglt BgL_new1045z00_1581;

								{	/* Llib/error.scm 304 */
									BgL_z62iozd2portzd2errorz62_bglt BgL_new1044z00_1584;

									BgL_new1044z00_1584 =
										((BgL_z62iozd2portzd2errorz62_bglt)
										BOBJECT(GC_MALLOC(sizeof(struct
													BgL_z62iozd2portzd2errorz62_bgl))));
									{	/* Llib/error.scm 304 */
										long BgL_arg1309z00_1585;

										{	/* Llib/error.scm 304 */
											long BgL_res2596z00_3280;

											BgL_res2596z00_3280 =
												BGL_CLASS_INDEX
												(BGl_z62iozd2portzd2errorz62zz__objectz00);
											BgL_arg1309z00_1585 = BgL_res2596z00_3280;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1044z00_1584),
											BgL_arg1309z00_1585);
									}
									BgL_new1045z00_1581 = BgL_new1044z00_1584;
								}
								((((BgL_z62exceptionz62_bglt) COBJECT(
												((BgL_z62exceptionz62_bglt) BgL_new1045z00_1581)))->
										BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
								((((BgL_z62exceptionz62_bglt)
											COBJECT(((BgL_z62exceptionz62_bglt)
													BgL_new1045z00_1581)))->BgL_locationz00) =
									((obj_t) BFALSE), BUNSPEC);
								{
									obj_t BgL_auxz00_5248;

									{	/* Llib/error.scm 304 */
										obj_t BgL_arg1307z00_1582;

										{	/* Llib/error.scm 304 */
											obj_t BgL_arg1308z00_1583;

											{	/* Llib/error.scm 304 */
												obj_t BgL_res2597z00_3284;

												{	/* Llib/error.scm 304 */
													obj_t BgL_classz00_3283;

													BgL_classz00_3283 =
														BGl_z62iozd2portzd2errorz62zz__objectz00;
													BgL_res2597z00_3284 =
														BGL_CLASS_ALL_FIELDS(BgL_classz00_3283);
												}
												BgL_arg1308z00_1583 = BgL_res2597z00_3284;
											}
											BgL_arg1307z00_1582 =
												VECTOR_REF(BgL_arg1308z00_1583, ((long) 2));
										}
										BgL_auxz00_5248 =
											BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
											(BgL_arg1307z00_1582);
									}
									((((BgL_z62exceptionz62_bglt) COBJECT(
													((BgL_z62exceptionz62_bglt) BgL_new1045z00_1581)))->
											BgL_stackz00) = ((obj_t) BgL_auxz00_5248), BUNSPEC);
								}
								((((BgL_z62errorz62_bglt) COBJECT(
												((BgL_z62errorz62_bglt) BgL_new1045z00_1581)))->
										BgL_procz00) = ((obj_t) BgL_procz00_10), BUNSPEC);
								((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
													BgL_new1045z00_1581)))->BgL_msgz00) =
									((obj_t) BgL_msgz00_11), BUNSPEC);
								((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
													BgL_new1045z00_1581)))->BgL_objz00) =
									((obj_t) BgL_objz00_12), BUNSPEC);
								BgL_arg1306z00_1580 = BgL_new1045z00_1581;
							}
							return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1306z00_1580));
						}
					else
						{	/* Llib/error.scm 302 */
							if (((long) (BgL_sysnoz00_9) == (long) (BGL_IO_READ_ERROR)))
								{	/* Llib/error.scm 307 */
									BgL_z62iozd2readzd2errorz62_bglt BgL_arg1311z00_1587;

									{	/* Llib/error.scm 307 */
										BgL_z62iozd2readzd2errorz62_bglt BgL_new1047z00_1588;

										{	/* Llib/error.scm 307 */
											BgL_z62iozd2readzd2errorz62_bglt BgL_new1046z00_1591;

											BgL_new1046z00_1591 =
												((BgL_z62iozd2readzd2errorz62_bglt)
												BOBJECT(GC_MALLOC(sizeof(struct
															BgL_z62iozd2readzd2errorz62_bgl))));
											{	/* Llib/error.scm 307 */
												long BgL_arg1314z00_1592;

												{	/* Llib/error.scm 307 */
													long BgL_res2599z00_3290;

													BgL_res2599z00_3290 =
														BGL_CLASS_INDEX
														(BGl_z62iozd2readzd2errorz62zz__objectz00);
													BgL_arg1314z00_1592 = BgL_res2599z00_3290;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1046z00_1591),
													BgL_arg1314z00_1592);
											}
											BgL_new1047z00_1588 = BgL_new1046z00_1591;
										}
										((((BgL_z62exceptionz62_bglt) COBJECT(
														((BgL_z62exceptionz62_bglt) BgL_new1047z00_1588)))->
												BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
										((((BgL_z62exceptionz62_bglt)
													COBJECT(((BgL_z62exceptionz62_bglt)
															BgL_new1047z00_1588)))->BgL_locationz00) =
											((obj_t) BFALSE), BUNSPEC);
										{
											obj_t BgL_auxz00_5274;

											{	/* Llib/error.scm 307 */
												obj_t BgL_arg1312z00_1589;

												{	/* Llib/error.scm 307 */
													obj_t BgL_arg1313z00_1590;

													{	/* Llib/error.scm 307 */
														obj_t BgL_res2600z00_3294;

														{	/* Llib/error.scm 307 */
															obj_t BgL_classz00_3293;

															BgL_classz00_3293 =
																BGl_z62iozd2readzd2errorz62zz__objectz00;
															BgL_res2600z00_3294 =
																BGL_CLASS_ALL_FIELDS(BgL_classz00_3293);
														}
														BgL_arg1313z00_1590 = BgL_res2600z00_3294;
													}
													BgL_arg1312z00_1589 =
														VECTOR_REF(BgL_arg1313z00_1590, ((long) 2));
												}
												BgL_auxz00_5274 =
													BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
													(BgL_arg1312z00_1589);
											}
											((((BgL_z62exceptionz62_bglt) COBJECT(
															((BgL_z62exceptionz62_bglt)
																BgL_new1047z00_1588)))->BgL_stackz00) =
												((obj_t) BgL_auxz00_5274), BUNSPEC);
										}
										((((BgL_z62errorz62_bglt) COBJECT(
														((BgL_z62errorz62_bglt) BgL_new1047z00_1588)))->
												BgL_procz00) = ((obj_t) BgL_procz00_10), BUNSPEC);
										((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
															BgL_new1047z00_1588)))->BgL_msgz00) =
											((obj_t) BgL_msgz00_11), BUNSPEC);
										((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
															BgL_new1047z00_1588)))->BgL_objz00) =
											((obj_t) BgL_objz00_12), BUNSPEC);
										BgL_arg1311z00_1587 = BgL_new1047z00_1588;
									}
									return
										BGl_raisez00zz__errorz00(((obj_t) BgL_arg1311z00_1587));
								}
							else
								{	/* Llib/error.scm 305 */
									if (((long) (BgL_sysnoz00_9) == (long) (BGL_IO_WRITE_ERROR)))
										{	/* Llib/error.scm 310 */
											BgL_z62iozd2writezd2errorz62_bglt BgL_arg1316z00_1594;

											{	/* Llib/error.scm 310 */
												BgL_z62iozd2writezd2errorz62_bglt BgL_new1049z00_1595;

												{	/* Llib/error.scm 310 */
													BgL_z62iozd2writezd2errorz62_bglt BgL_new1048z00_1598;

													BgL_new1048z00_1598 =
														((BgL_z62iozd2writezd2errorz62_bglt)
														BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_z62iozd2writezd2errorz62_bgl))));
													{	/* Llib/error.scm 310 */
														long BgL_arg1319z00_1599;

														{	/* Llib/error.scm 310 */
															long BgL_res2602z00_3300;

															BgL_res2602z00_3300 =
																BGL_CLASS_INDEX
																(BGl_z62iozd2writezd2errorz62zz__objectz00);
															BgL_arg1319z00_1599 = BgL_res2602z00_3300;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1048z00_1598),
															BgL_arg1319z00_1599);
													}
													BgL_new1049z00_1595 = BgL_new1048z00_1598;
												}
												((((BgL_z62exceptionz62_bglt) COBJECT(
																((BgL_z62exceptionz62_bglt)
																	BgL_new1049z00_1595)))->BgL_fnamez00) =
													((obj_t) BFALSE), BUNSPEC);
												((((BgL_z62exceptionz62_bglt)
															COBJECT(((BgL_z62exceptionz62_bglt)
																	BgL_new1049z00_1595)))->BgL_locationz00) =
													((obj_t) BFALSE), BUNSPEC);
												{
													obj_t BgL_auxz00_5300;

													{	/* Llib/error.scm 310 */
														obj_t BgL_arg1317z00_1596;

														{	/* Llib/error.scm 310 */
															obj_t BgL_arg1318z00_1597;

															{	/* Llib/error.scm 310 */
																obj_t BgL_res2603z00_3304;

																{	/* Llib/error.scm 310 */
																	obj_t BgL_classz00_3303;

																	BgL_classz00_3303 =
																		BGl_z62iozd2writezd2errorz62zz__objectz00;
																	BgL_res2603z00_3304 =
																		BGL_CLASS_ALL_FIELDS(BgL_classz00_3303);
																}
																BgL_arg1318z00_1597 = BgL_res2603z00_3304;
															}
															BgL_arg1317z00_1596 =
																VECTOR_REF(BgL_arg1318z00_1597, ((long) 2));
														}
														BgL_auxz00_5300 =
															BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
															(BgL_arg1317z00_1596);
													}
													((((BgL_z62exceptionz62_bglt) COBJECT(
																	((BgL_z62exceptionz62_bglt)
																		BgL_new1049z00_1595)))->BgL_stackz00) =
														((obj_t) BgL_auxz00_5300), BUNSPEC);
												}
												((((BgL_z62errorz62_bglt) COBJECT(
																((BgL_z62errorz62_bglt) BgL_new1049z00_1595)))->
														BgL_procz00) = ((obj_t) BgL_procz00_10), BUNSPEC);
												((((BgL_z62errorz62_bglt)
															COBJECT(((BgL_z62errorz62_bglt)
																	BgL_new1049z00_1595)))->BgL_msgz00) =
													((obj_t) BgL_msgz00_11), BUNSPEC);
												((((BgL_z62errorz62_bglt)
															COBJECT(((BgL_z62errorz62_bglt)
																	BgL_new1049z00_1595)))->BgL_objz00) =
													((obj_t) BgL_objz00_12), BUNSPEC);
												BgL_arg1316z00_1594 = BgL_new1049z00_1595;
											}
											return
												BGl_raisez00zz__errorz00(((obj_t) BgL_arg1316z00_1594));
										}
									else
										{	/* Llib/error.scm 308 */
											if (
												((long) (BgL_sysnoz00_9) ==
													(long) (BGL_IO_UNKNOWN_HOST_ERROR)))
												{	/* Llib/error.scm 313 */
													BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt
														BgL_arg1322z00_1601;
													{	/* Llib/error.scm 313 */
														BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt
															BgL_new1051z00_1602;
														{	/* Llib/error.scm 313 */
															BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt
																BgL_new1050z00_1605;
															BgL_new1050z00_1605 =
																((BgL_z62iozd2unknownzd2hostzd2errorzb0_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_z62iozd2unknownzd2hostzd2errorzb0_bgl))));
															{	/* Llib/error.scm 313 */
																long BgL_arg1326z00_1606;

																{	/* Llib/error.scm 313 */
																	long BgL_res2605z00_3310;

																	BgL_res2605z00_3310 =
																		BGL_CLASS_INDEX
																		(BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00);
																	BgL_arg1326z00_1606 = BgL_res2605z00_3310;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1050z00_1605),
																	BgL_arg1326z00_1606);
															}
															BgL_new1051z00_1602 = BgL_new1050z00_1605;
														}
														((((BgL_z62exceptionz62_bglt) COBJECT(
																		((BgL_z62exceptionz62_bglt)
																			BgL_new1051z00_1602)))->BgL_fnamez00) =
															((obj_t) BFALSE), BUNSPEC);
														((((BgL_z62exceptionz62_bglt)
																	COBJECT(((BgL_z62exceptionz62_bglt)
																			BgL_new1051z00_1602)))->BgL_locationz00) =
															((obj_t) BFALSE), BUNSPEC);
														{
															obj_t BgL_auxz00_5326;

															{	/* Llib/error.scm 313 */
																obj_t BgL_arg1324z00_1603;

																{	/* Llib/error.scm 313 */
																	obj_t BgL_arg1325z00_1604;

																	{	/* Llib/error.scm 313 */
																		obj_t BgL_res2606z00_3314;

																		{	/* Llib/error.scm 313 */
																			obj_t BgL_classz00_3313;

																			BgL_classz00_3313 =
																				BGl_z62iozd2unknownzd2hostzd2errorzb0zz__objectz00;
																			BgL_res2606z00_3314 =
																				BGL_CLASS_ALL_FIELDS(BgL_classz00_3313);
																		}
																		BgL_arg1325z00_1604 = BgL_res2606z00_3314;
																	}
																	BgL_arg1324z00_1603 =
																		VECTOR_REF(BgL_arg1325z00_1604, ((long) 2));
																}
																BgL_auxz00_5326 =
																	BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																	(BgL_arg1324z00_1603);
															}
															((((BgL_z62exceptionz62_bglt) COBJECT(
																			((BgL_z62exceptionz62_bglt)
																				BgL_new1051z00_1602)))->BgL_stackz00) =
																((obj_t) BgL_auxz00_5326), BUNSPEC);
														}
														((((BgL_z62errorz62_bglt) COBJECT(
																		((BgL_z62errorz62_bglt)
																			BgL_new1051z00_1602)))->BgL_procz00) =
															((obj_t) BgL_procz00_10), BUNSPEC);
														((((BgL_z62errorz62_bglt)
																	COBJECT(((BgL_z62errorz62_bglt)
																			BgL_new1051z00_1602)))->BgL_msgz00) =
															((obj_t) BgL_msgz00_11), BUNSPEC);
														((((BgL_z62errorz62_bglt)
																	COBJECT(((BgL_z62errorz62_bglt)
																			BgL_new1051z00_1602)))->BgL_objz00) =
															((obj_t) BgL_objz00_12), BUNSPEC);
														BgL_arg1322z00_1601 = BgL_new1051z00_1602;
													}
													return
														BGl_raisez00zz__errorz00(
														((obj_t) BgL_arg1322z00_1601));
												}
											else
												{	/* Llib/error.scm 311 */
													if (
														((long) (BgL_sysnoz00_9) ==
															(long) (BGL_IO_FILE_NOT_FOUND_ERROR)))
														{	/* Llib/error.scm 316 */
															BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
																BgL_arg1328z00_1608;
															{	/* Llib/error.scm 316 */
																BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
																	BgL_new1053z00_1609;
																{	/* Llib/error.scm 316 */
																	BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt
																		BgL_new1052z00_1612;
																	BgL_new1052z00_1612 =
																		(
																		(BgL_z62iozd2filezd2notzd2foundzd2errorz62_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_z62iozd2filezd2notzd2foundzd2errorz62_bgl))));
																	{	/* Llib/error.scm 316 */
																		long BgL_arg1331z00_1613;

																		{	/* Llib/error.scm 316 */
																			long BgL_res2608z00_3320;

																			BgL_res2608z00_3320 =
																				BGL_CLASS_INDEX
																				(BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00);
																			BgL_arg1331z00_1613 = BgL_res2608z00_3320;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1052z00_1612),
																			BgL_arg1331z00_1613);
																	}
																	BgL_new1053z00_1609 = BgL_new1052z00_1612;
																}
																((((BgL_z62exceptionz62_bglt) COBJECT(
																				((BgL_z62exceptionz62_bglt)
																					BgL_new1053z00_1609)))->
																		BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
																((((BgL_z62exceptionz62_bglt)
																			COBJECT(((BgL_z62exceptionz62_bglt)
																					BgL_new1053z00_1609)))->
																		BgL_locationz00) =
																	((obj_t) BFALSE), BUNSPEC);
																{
																	obj_t BgL_auxz00_5352;

																	{	/* Llib/error.scm 316 */
																		obj_t BgL_arg1329z00_1610;

																		{	/* Llib/error.scm 316 */
																			obj_t BgL_arg1330z00_1611;

																			{	/* Llib/error.scm 316 */
																				obj_t BgL_res2609z00_3324;

																				{	/* Llib/error.scm 316 */
																					obj_t BgL_classz00_3323;

																					BgL_classz00_3323 =
																						BGl_z62iozd2filezd2notzd2foundzd2errorz62zz__objectz00;
																					BgL_res2609z00_3324 =
																						BGL_CLASS_ALL_FIELDS
																						(BgL_classz00_3323);
																				}
																				BgL_arg1330z00_1611 =
																					BgL_res2609z00_3324;
																			}
																			BgL_arg1329z00_1610 =
																				VECTOR_REF(BgL_arg1330z00_1611,
																				((long) 2));
																		}
																		BgL_auxz00_5352 =
																			BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																			(BgL_arg1329z00_1610);
																	}
																	((((BgL_z62exceptionz62_bglt) COBJECT(
																					((BgL_z62exceptionz62_bglt)
																						BgL_new1053z00_1609)))->
																			BgL_stackz00) =
																		((obj_t) BgL_auxz00_5352), BUNSPEC);
																}
																((((BgL_z62errorz62_bglt) COBJECT(
																				((BgL_z62errorz62_bglt)
																					BgL_new1053z00_1609)))->BgL_procz00) =
																	((obj_t) BgL_procz00_10), BUNSPEC);
																((((BgL_z62errorz62_bglt)
																			COBJECT(((BgL_z62errorz62_bglt)
																					BgL_new1053z00_1609)))->BgL_msgz00) =
																	((obj_t) BgL_msgz00_11), BUNSPEC);
																((((BgL_z62errorz62_bglt)
																			COBJECT(((BgL_z62errorz62_bglt)
																					BgL_new1053z00_1609)))->BgL_objz00) =
																	((obj_t) BgL_objz00_12), BUNSPEC);
																BgL_arg1328z00_1608 = BgL_new1053z00_1609;
															}
															return
																BGl_raisez00zz__errorz00(
																((obj_t) BgL_arg1328z00_1608));
														}
													else
														{	/* Llib/error.scm 314 */
															if (
																((long) (BgL_sysnoz00_9) ==
																	(long) (BGL_IO_PARSE_ERROR)))
																{	/* Llib/error.scm 319 */
																	BgL_z62iozd2parsezd2errorz62_bglt
																		BgL_arg1333z00_1615;
																	{	/* Llib/error.scm 319 */
																		BgL_z62iozd2parsezd2errorz62_bglt
																			BgL_new1055z00_1616;
																		{	/* Llib/error.scm 319 */
																			BgL_z62iozd2parsezd2errorz62_bglt
																				BgL_new1054z00_1619;
																			BgL_new1054z00_1619 =
																				((BgL_z62iozd2parsezd2errorz62_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_z62iozd2parsezd2errorz62_bgl))));
																			{	/* Llib/error.scm 319 */
																				long BgL_arg1337z00_1620;

																				{	/* Llib/error.scm 319 */
																					long BgL_res2611z00_3330;

																					BgL_res2611z00_3330 =
																						BGL_CLASS_INDEX
																						(BGl_z62iozd2parsezd2errorz62zz__objectz00);
																					BgL_arg1337z00_1620 =
																						BgL_res2611z00_3330;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1054z00_1619),
																					BgL_arg1337z00_1620);
																			}
																			BgL_new1055z00_1616 = BgL_new1054z00_1619;
																		}
																		((((BgL_z62exceptionz62_bglt) COBJECT(
																						((BgL_z62exceptionz62_bglt)
																							BgL_new1055z00_1616)))->
																				BgL_fnamez00) =
																			((obj_t) BFALSE), BUNSPEC);
																		((((BgL_z62exceptionz62_bglt)
																					COBJECT(((BgL_z62exceptionz62_bglt)
																							BgL_new1055z00_1616)))->
																				BgL_locationz00) =
																			((obj_t) BFALSE), BUNSPEC);
																		{
																			obj_t BgL_auxz00_5378;

																			{	/* Llib/error.scm 319 */
																				obj_t BgL_arg1334z00_1617;

																				{	/* Llib/error.scm 319 */
																					obj_t BgL_arg1335z00_1618;

																					{	/* Llib/error.scm 319 */
																						obj_t BgL_res2612z00_3334;

																						{	/* Llib/error.scm 319 */
																							obj_t BgL_classz00_3333;

																							BgL_classz00_3333 =
																								BGl_z62iozd2parsezd2errorz62zz__objectz00;
																							BgL_res2612z00_3334 =
																								BGL_CLASS_ALL_FIELDS
																								(BgL_classz00_3333);
																						}
																						BgL_arg1335z00_1618 =
																							BgL_res2612z00_3334;
																					}
																					BgL_arg1334z00_1617 =
																						VECTOR_REF(BgL_arg1335z00_1618,
																						((long) 2));
																				}
																				BgL_auxz00_5378 =
																					BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																					(BgL_arg1334z00_1617);
																			}
																			((((BgL_z62exceptionz62_bglt) COBJECT(
																							((BgL_z62exceptionz62_bglt)
																								BgL_new1055z00_1616)))->
																					BgL_stackz00) =
																				((obj_t) BgL_auxz00_5378), BUNSPEC);
																		}
																		((((BgL_z62errorz62_bglt) COBJECT(
																						((BgL_z62errorz62_bglt)
																							BgL_new1055z00_1616)))->
																				BgL_procz00) =
																			((obj_t) BgL_procz00_10), BUNSPEC);
																		((((BgL_z62errorz62_bglt)
																					COBJECT(((BgL_z62errorz62_bglt)
																							BgL_new1055z00_1616)))->
																				BgL_msgz00) =
																			((obj_t) BgL_msgz00_11), BUNSPEC);
																		((((BgL_z62errorz62_bglt)
																					COBJECT(((BgL_z62errorz62_bglt)
																							BgL_new1055z00_1616)))->
																				BgL_objz00) =
																			((obj_t) BgL_objz00_12), BUNSPEC);
																		BgL_arg1333z00_1615 = BgL_new1055z00_1616;
																	}
																	return
																		BGl_raisez00zz__errorz00(
																		((obj_t) BgL_arg1333z00_1615));
																}
															else
																{	/* Llib/error.scm 317 */
																	if (
																		((long) (BgL_sysnoz00_9) ==
																			(long) (BGL_IO_MALFORMED_URL_ERROR)))
																		{	/* Llib/error.scm 322 */
																			BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt
																				BgL_arg1339z00_1622;
																			{	/* Llib/error.scm 322 */
																				BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt
																					BgL_new1057z00_1623;
																				{	/* Llib/error.scm 322 */
																					BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt
																						BgL_new1056z00_1626;
																					BgL_new1056z00_1626 =
																						(
																						(BgL_z62iozd2malformedzd2urlzd2errorzb0_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_z62iozd2malformedzd2urlzd2errorzb0_bgl))));
																					{	/* Llib/error.scm 322 */
																						long BgL_arg1342z00_1627;

																						{	/* Llib/error.scm 322 */
																							long BgL_res2614z00_3340;

																							BgL_res2614z00_3340 =
																								BGL_CLASS_INDEX
																								(BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00);
																							BgL_arg1342z00_1627 =
																								BgL_res2614z00_3340;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1056z00_1626),
																							BgL_arg1342z00_1627);
																					}
																					BgL_new1057z00_1623 =
																						BgL_new1056z00_1626;
																				}
																				((((BgL_z62exceptionz62_bglt) COBJECT(
																								((BgL_z62exceptionz62_bglt)
																									BgL_new1057z00_1623)))->
																						BgL_fnamez00) =
																					((obj_t) BFALSE), BUNSPEC);
																				((((BgL_z62exceptionz62_bglt)
																							COBJECT((
																									(BgL_z62exceptionz62_bglt)
																									BgL_new1057z00_1623)))->
																						BgL_locationz00) =
																					((obj_t) BFALSE), BUNSPEC);
																				{
																					obj_t BgL_auxz00_5404;

																					{	/* Llib/error.scm 322 */
																						obj_t BgL_arg1340z00_1624;

																						{	/* Llib/error.scm 322 */
																							obj_t BgL_arg1341z00_1625;

																							{	/* Llib/error.scm 322 */
																								obj_t BgL_res2615z00_3344;

																								{	/* Llib/error.scm 322 */
																									obj_t BgL_classz00_3343;

																									BgL_classz00_3343 =
																										BGl_z62iozd2malformedzd2urlzd2errorzb0zz__objectz00;
																									BgL_res2615z00_3344 =
																										BGL_CLASS_ALL_FIELDS
																										(BgL_classz00_3343);
																								}
																								BgL_arg1341z00_1625 =
																									BgL_res2615z00_3344;
																							}
																							BgL_arg1340z00_1624 =
																								VECTOR_REF(BgL_arg1341z00_1625,
																								((long) 2));
																						}
																						BgL_auxz00_5404 =
																							BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																							(BgL_arg1340z00_1624);
																					}
																					((((BgL_z62exceptionz62_bglt) COBJECT(
																									((BgL_z62exceptionz62_bglt)
																										BgL_new1057z00_1623)))->
																							BgL_stackz00) =
																						((obj_t) BgL_auxz00_5404), BUNSPEC);
																				}
																				((((BgL_z62errorz62_bglt) COBJECT(
																								((BgL_z62errorz62_bglt)
																									BgL_new1057z00_1623)))->
																						BgL_procz00) =
																					((obj_t) BgL_procz00_10), BUNSPEC);
																				((((BgL_z62errorz62_bglt)
																							COBJECT(((BgL_z62errorz62_bglt)
																									BgL_new1057z00_1623)))->
																						BgL_msgz00) =
																					((obj_t) BgL_msgz00_11), BUNSPEC);
																				((((BgL_z62errorz62_bglt)
																							COBJECT(((BgL_z62errorz62_bglt)
																									BgL_new1057z00_1623)))->
																						BgL_objz00) =
																					((obj_t) BgL_objz00_12), BUNSPEC);
																				BgL_arg1339z00_1622 =
																					BgL_new1057z00_1623;
																			}
																			return
																				BGl_raisez00zz__errorz00(
																				((obj_t) BgL_arg1339z00_1622));
																		}
																	else
																		{	/* Llib/error.scm 320 */
																			if (
																				((long) (BgL_sysnoz00_9) ==
																					(long) (BGL_IO_SIGPIPE_ERROR)))
																				{	/* Llib/error.scm 325 */
																					BgL_z62iozd2sigpipezd2errorz62_bglt
																						BgL_arg1344z00_1629;
																					{	/* Llib/error.scm 325 */
																						BgL_z62iozd2sigpipezd2errorz62_bglt
																							BgL_new1060z00_1630;
																						{	/* Llib/error.scm 325 */
																							BgL_z62iozd2sigpipezd2errorz62_bglt
																								BgL_new1059z00_1633;
																							BgL_new1059z00_1633 =
																								(
																								(BgL_z62iozd2sigpipezd2errorz62_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_z62iozd2sigpipezd2errorz62_bgl))));
																							{	/* Llib/error.scm 325 */
																								long BgL_arg1347z00_1634;

																								{	/* Llib/error.scm 325 */
																									long BgL_res2617z00_3350;

																									BgL_res2617z00_3350 =
																										BGL_CLASS_INDEX
																										(BGl_z62iozd2sigpipezd2errorz62zz__objectz00);
																									BgL_arg1347z00_1634 =
																										BgL_res2617z00_3350;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1059z00_1633),
																									BgL_arg1347z00_1634);
																							}
																							BgL_new1060z00_1630 =
																								BgL_new1059z00_1633;
																						}
																						((((BgL_z62exceptionz62_bglt)
																									COBJECT((
																											(BgL_z62exceptionz62_bglt)
																											BgL_new1060z00_1630)))->
																								BgL_fnamez00) =
																							((obj_t) BFALSE), BUNSPEC);
																						((((BgL_z62exceptionz62_bglt)
																									COBJECT((
																											(BgL_z62exceptionz62_bglt)
																											BgL_new1060z00_1630)))->
																								BgL_locationz00) =
																							((obj_t) BFALSE), BUNSPEC);
																						{
																							obj_t BgL_auxz00_5430;

																							{	/* Llib/error.scm 325 */
																								obj_t BgL_arg1345z00_1631;

																								{	/* Llib/error.scm 325 */
																									obj_t BgL_arg1346z00_1632;

																									{	/* Llib/error.scm 325 */
																										obj_t BgL_res2618z00_3354;

																										{	/* Llib/error.scm 325 */
																											obj_t BgL_classz00_3353;

																											BgL_classz00_3353 =
																												BGl_z62iozd2sigpipezd2errorz62zz__objectz00;
																											BgL_res2618z00_3354 =
																												BGL_CLASS_ALL_FIELDS
																												(BgL_classz00_3353);
																										}
																										BgL_arg1346z00_1632 =
																											BgL_res2618z00_3354;
																									}
																									BgL_arg1345z00_1631 =
																										VECTOR_REF
																										(BgL_arg1346z00_1632,
																										((long) 2));
																								}
																								BgL_auxz00_5430 =
																									BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																									(BgL_arg1345z00_1631);
																							}
																							((((BgL_z62exceptionz62_bglt)
																										COBJECT((
																												(BgL_z62exceptionz62_bglt)
																												BgL_new1060z00_1630)))->
																									BgL_stackz00) =
																								((obj_t) BgL_auxz00_5430),
																								BUNSPEC);
																						}
																						((((BgL_z62errorz62_bglt) COBJECT(
																										((BgL_z62errorz62_bglt)
																											BgL_new1060z00_1630)))->
																								BgL_procz00) =
																							((obj_t) BgL_procz00_10),
																							BUNSPEC);
																						((((BgL_z62errorz62_bglt)
																									COBJECT((
																											(BgL_z62errorz62_bglt)
																											BgL_new1060z00_1630)))->
																								BgL_msgz00) =
																							((obj_t) BgL_msgz00_11), BUNSPEC);
																						((((BgL_z62errorz62_bglt)
																									COBJECT((
																											(BgL_z62errorz62_bglt)
																											BgL_new1060z00_1630)))->
																								BgL_objz00) =
																							((obj_t) BgL_objz00_12), BUNSPEC);
																						BgL_arg1344z00_1629 =
																							BgL_new1060z00_1630;
																					}
																					return
																						BGl_raisez00zz__errorz00(
																						((obj_t) BgL_arg1344z00_1629));
																				}
																			else
																				{	/* Llib/error.scm 323 */
																					if (
																						((long) (BgL_sysnoz00_9) ==
																							(long) (BGL_IO_TIMEOUT_ERROR)))
																						{	/* Llib/error.scm 328 */
																							BgL_z62iozd2timeoutzd2errorz62_bglt
																								BgL_arg1350z00_1636;
																							{	/* Llib/error.scm 328 */
																								BgL_z62iozd2timeoutzd2errorz62_bglt
																									BgL_new1062z00_1637;
																								{	/* Llib/error.scm 328 */
																									BgL_z62iozd2timeoutzd2errorz62_bglt
																										BgL_new1061z00_1640;
																									BgL_new1061z00_1640 =
																										(
																										(BgL_z62iozd2timeoutzd2errorz62_bglt)
																										BOBJECT(GC_MALLOC(sizeof
																												(struct
																													BgL_z62iozd2timeoutzd2errorz62_bgl))));
																									{	/* Llib/error.scm 328 */
																										long BgL_arg1353z00_1641;

																										{	/* Llib/error.scm 328 */
																											long BgL_res2620z00_3360;

																											BgL_res2620z00_3360 =
																												BGL_CLASS_INDEX
																												(BGl_z62iozd2timeoutzd2errorz62zz__objectz00);
																											BgL_arg1353z00_1641 =
																												BgL_res2620z00_3360;
																										}
																										BGL_OBJECT_CLASS_NUM_SET(
																											((BgL_objectz00_bglt)
																												BgL_new1061z00_1640),
																											BgL_arg1353z00_1641);
																									}
																									BgL_new1062z00_1637 =
																										BgL_new1061z00_1640;
																								}
																								((((BgL_z62exceptionz62_bglt)
																											COBJECT((
																													(BgL_z62exceptionz62_bglt)
																													BgL_new1062z00_1637)))->
																										BgL_fnamez00) =
																									((obj_t) BFALSE), BUNSPEC);
																								((((BgL_z62exceptionz62_bglt)
																											COBJECT((
																													(BgL_z62exceptionz62_bglt)
																													BgL_new1062z00_1637)))->
																										BgL_locationz00) =
																									((obj_t) BFALSE), BUNSPEC);
																								{
																									obj_t BgL_auxz00_5456;

																									{	/* Llib/error.scm 328 */
																										obj_t BgL_arg1351z00_1638;

																										{	/* Llib/error.scm 328 */
																											obj_t BgL_arg1352z00_1639;

																											{	/* Llib/error.scm 328 */
																												obj_t
																													BgL_res2621z00_3364;
																												{	/* Llib/error.scm 328 */
																													obj_t
																														BgL_classz00_3363;
																													BgL_classz00_3363 =
																														BGl_z62iozd2timeoutzd2errorz62zz__objectz00;
																													BgL_res2621z00_3364 =
																														BGL_CLASS_ALL_FIELDS
																														(BgL_classz00_3363);
																												}
																												BgL_arg1352z00_1639 =
																													BgL_res2621z00_3364;
																											}
																											BgL_arg1351z00_1638 =
																												VECTOR_REF
																												(BgL_arg1352z00_1639,
																												((long) 2));
																										}
																										BgL_auxz00_5456 =
																											BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																											(BgL_arg1351z00_1638);
																									}
																									((((BgL_z62exceptionz62_bglt)
																												COBJECT((
																														(BgL_z62exceptionz62_bglt)
																														BgL_new1062z00_1637)))->
																											BgL_stackz00) =
																										((obj_t) BgL_auxz00_5456),
																										BUNSPEC);
																								}
																								((((BgL_z62errorz62_bglt)
																											COBJECT((
																													(BgL_z62errorz62_bglt)
																													BgL_new1062z00_1637)))->
																										BgL_procz00) =
																									((obj_t) BgL_procz00_10),
																									BUNSPEC);
																								((((BgL_z62errorz62_bglt)
																											COBJECT((
																													(BgL_z62errorz62_bglt)
																													BgL_new1062z00_1637)))->
																										BgL_msgz00) =
																									((obj_t) BgL_msgz00_11),
																									BUNSPEC);
																								((((BgL_z62errorz62_bglt)
																											COBJECT((
																													(BgL_z62errorz62_bglt)
																													BgL_new1062z00_1637)))->
																										BgL_objz00) =
																									((obj_t) BgL_objz00_12),
																									BUNSPEC);
																								BgL_arg1350z00_1636 =
																									BgL_new1062z00_1637;
																							}
																							return
																								BGl_raisez00zz__errorz00(
																								((obj_t) BgL_arg1350z00_1636));
																						}
																					else
																						{	/* Llib/error.scm 326 */
																							if (
																								((long) (BgL_sysnoz00_9) ==
																									(long)
																									(BGL_IO_CONNECTION_ERROR)))
																								{	/* Llib/error.scm 331 */
																									BgL_z62iozd2connectionzd2errorz62_bglt
																										BgL_arg1355z00_1643;
																									{	/* Llib/error.scm 331 */
																										BgL_z62iozd2connectionzd2errorz62_bglt
																											BgL_new1064z00_1644;
																										{	/* Llib/error.scm 331 */
																											BgL_z62iozd2connectionzd2errorz62_bglt
																												BgL_new1063z00_1647;
																											BgL_new1063z00_1647 =
																												(
																												(BgL_z62iozd2connectionzd2errorz62_bglt)
																												BOBJECT(GC_MALLOC(sizeof
																														(struct
																															BgL_z62iozd2connectionzd2errorz62_bgl))));
																											{	/* Llib/error.scm 331 */
																												long
																													BgL_arg1359z00_1648;
																												{	/* Llib/error.scm 331 */
																													long
																														BgL_res2623z00_3370;
																													BgL_res2623z00_3370 =
																														BGL_CLASS_INDEX
																														(BGl_z62iozd2connectionzd2errorz62zz__objectz00);
																													BgL_arg1359z00_1648 =
																														BgL_res2623z00_3370;
																												}
																												BGL_OBJECT_CLASS_NUM_SET
																													(((BgL_objectz00_bglt)
																														BgL_new1063z00_1647),
																													BgL_arg1359z00_1648);
																											}
																											BgL_new1064z00_1644 =
																												BgL_new1063z00_1647;
																										}
																										((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1064z00_1644)))->BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
																										((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1064z00_1644)))->BgL_locationz00) = ((obj_t) BFALSE), BUNSPEC);
																										{
																											obj_t BgL_auxz00_5482;

																											{	/* Llib/error.scm 331 */
																												obj_t
																													BgL_arg1356z00_1645;
																												{	/* Llib/error.scm 331 */
																													obj_t
																														BgL_arg1357z00_1646;
																													{	/* Llib/error.scm 331 */
																														obj_t
																															BgL_res2624z00_3374;
																														{	/* Llib/error.scm 331 */
																															obj_t
																																BgL_classz00_3373;
																															BgL_classz00_3373
																																=
																																BGl_z62iozd2connectionzd2errorz62zz__objectz00;
																															BgL_res2624z00_3374
																																=
																																BGL_CLASS_ALL_FIELDS
																																(BgL_classz00_3373);
																														}
																														BgL_arg1357z00_1646
																															=
																															BgL_res2624z00_3374;
																													}
																													BgL_arg1356z00_1645 =
																														VECTOR_REF
																														(BgL_arg1357z00_1646,
																														((long) 2));
																												}
																												BgL_auxz00_5482 =
																													BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																													(BgL_arg1356z00_1645);
																											}
																											((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1064z00_1644)))->BgL_stackz00) = ((obj_t) BgL_auxz00_5482), BUNSPEC);
																										}
																										((((BgL_z62errorz62_bglt)
																													COBJECT((
																															(BgL_z62errorz62_bglt)
																															BgL_new1064z00_1644)))->
																												BgL_procz00) =
																											((obj_t) BgL_procz00_10),
																											BUNSPEC);
																										((((BgL_z62errorz62_bglt)
																													COBJECT((
																															(BgL_z62errorz62_bglt)
																															BgL_new1064z00_1644)))->
																												BgL_msgz00) =
																											((obj_t) BgL_msgz00_11),
																											BUNSPEC);
																										((((BgL_z62errorz62_bglt)
																													COBJECT((
																															(BgL_z62errorz62_bglt)
																															BgL_new1064z00_1644)))->
																												BgL_objz00) =
																											((obj_t) BgL_objz00_12),
																											BUNSPEC);
																										BgL_arg1355z00_1643 =
																											BgL_new1064z00_1644;
																									}
																									return
																										BGl_raisez00zz__errorz00(
																										((obj_t)
																											BgL_arg1355z00_1643));
																								}
																							else
																								{	/* Llib/error.scm 329 */
																									if (
																										((long) (BgL_sysnoz00_9) ==
																											(long)
																											(BGL_PROCESS_EXCEPTION)))
																										{	/* Llib/error.scm 334 */
																											BgL_z62processzd2exceptionzb0_bglt
																												BgL_arg1361z00_1650;
																											{	/* Llib/error.scm 334 */
																												BgL_z62processzd2exceptionzb0_bglt
																													BgL_new1066z00_1651;
																												{	/* Llib/error.scm 334 */
																													BgL_z62processzd2exceptionzb0_bglt
																														BgL_new1065z00_1654;
																													BgL_new1065z00_1654 =
																														(
																														(BgL_z62processzd2exceptionzb0_bglt)
																														BOBJECT(GC_MALLOC
																															(sizeof(struct
																																	BgL_z62processzd2exceptionzb0_bgl))));
																													{	/* Llib/error.scm 334 */
																														long
																															BgL_arg1364z00_1655;
																														{	/* Llib/error.scm 334 */
																															long
																																BgL_res2626z00_3380;
																															BgL_res2626z00_3380
																																=
																																BGL_CLASS_INDEX
																																(BGl_z62processzd2exceptionzb0zz__objectz00);
																															BgL_arg1364z00_1655
																																=
																																BgL_res2626z00_3380;
																														}
																														BGL_OBJECT_CLASS_NUM_SET
																															(((BgL_objectz00_bglt) BgL_new1065z00_1654), BgL_arg1364z00_1655);
																													}
																													BgL_new1066z00_1651 =
																														BgL_new1065z00_1654;
																												}
																												((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1066z00_1651)))->BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
																												((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1066z00_1651)))->BgL_locationz00) = ((obj_t) BFALSE), BUNSPEC);
																												{
																													obj_t BgL_auxz00_5508;

																													{	/* Llib/error.scm 334 */
																														obj_t
																															BgL_arg1362z00_1652;
																														{	/* Llib/error.scm 334 */
																															obj_t
																																BgL_arg1363z00_1653;
																															{	/* Llib/error.scm 334 */
																																obj_t
																																	BgL_res2627z00_3384;
																																{	/* Llib/error.scm 334 */
																																	obj_t
																																		BgL_classz00_3383;
																																	BgL_classz00_3383
																																		=
																																		BGl_z62processzd2exceptionzb0zz__objectz00;
																																	BgL_res2627z00_3384
																																		=
																																		BGL_CLASS_ALL_FIELDS
																																		(BgL_classz00_3383);
																																}
																																BgL_arg1363z00_1653
																																	=
																																	BgL_res2627z00_3384;
																															}
																															BgL_arg1362z00_1652
																																=
																																VECTOR_REF
																																(BgL_arg1363z00_1653,
																																((long) 2));
																														}
																														BgL_auxz00_5508 =
																															BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																															(BgL_arg1362z00_1652);
																													}
																													((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1066z00_1651)))->BgL_stackz00) = ((obj_t) BgL_auxz00_5508), BUNSPEC);
																												}
																												((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt) BgL_new1066z00_1651)))->BgL_procz00) = ((obj_t) BgL_procz00_10), BUNSPEC);
																												((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt) BgL_new1066z00_1651)))->BgL_msgz00) = ((obj_t) BgL_msgz00_11), BUNSPEC);
																												((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt) BgL_new1066z00_1651)))->BgL_objz00) = ((obj_t) BgL_objz00_12), BUNSPEC);
																												BgL_arg1361z00_1650 =
																													BgL_new1066z00_1651;
																											}
																											return
																												BGl_raisez00zz__errorz00
																												(((obj_t)
																													BgL_arg1361z00_1650));
																										}
																									else
																										{	/* Llib/error.scm 332 */
																											if (
																												((long) (BgL_sysnoz00_9)
																													==
																													(long)
																													(BGL_TYPE_ERROR)))
																												{	/* Llib/error.scm 336 */
																													BgL_z62typezd2errorzb0_bglt
																														BgL_arg1367z00_1657;
																													{	/* Llib/error.scm 537 */
																														obj_t
																															BgL_tyz00_3389;
																														if (STRINGP
																															(BgL_msgz00_11))
																															{	/* Llib/error.scm 538 */
																																BgL_tyz00_3389 =
																																	BgL_msgz00_11;
																															}
																														else
																															{	/* Llib/error.scm 538 */
																																if (SYMBOLP
																																	(BgL_msgz00_11))
																																	{	/* Llib/error.scm 539 */
																																		obj_t
																																			BgL_res2631z00_3403;
																																		{	/* Llib/error.scm 539 */
																																			obj_t
																																				BgL_arg2216z00_3402;
																																			BgL_arg2216z00_3402
																																				=
																																				SYMBOL_TO_STRING
																																				(BgL_msgz00_11);
																																			BgL_res2631z00_3403
																																				=
																																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																				(BgL_arg2216z00_3402);
																																		}
																																		BgL_tyz00_3389
																																			=
																																			BgL_res2631z00_3403;
																																	}
																																else
																																	{	/* Llib/error.scm 539 */
																																		BgL_tyz00_3389
																																			=
																																			BGl_string3129z00zz__errorz00;
																																	}
																															}
																														{	/* Llib/error.scm 537 */
																															obj_t
																																BgL_msgz00_3392;
																															BgL_msgz00_3392 =
																																BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00
																																(BGl_string3130z00zz__errorz00,
																																BgL_tyz00_3389,
																																bgl_typeof
																																(BgL_objz00_12));
																															{	/* Llib/error.scm 541 */

																																{	/* Llib/error.scm 542 */
																																	BgL_z62typezd2errorzb0_bglt
																																		BgL_new1084z00_3394;
																																	{	/* Llib/error.scm 543 */
																																		BgL_z62typezd2errorzb0_bglt
																																			BgL_new1083z00_3395;
																																		BgL_new1083z00_3395
																																			=
																																			(
																																			(BgL_z62typezd2errorzb0_bglt)
																																			BOBJECT
																																			(GC_MALLOC
																																				(sizeof
																																					(struct
																																						BgL_z62typezd2errorzb0_bgl))));
																																		{	/* Llib/error.scm 543 */
																																			long
																																				BgL_arg1483z00_3396;
																																			{	/* Llib/error.scm 543 */
																																				long
																																					BgL_res2632z00_3405;
																																				BgL_res2632z00_3405
																																					=
																																					BGL_CLASS_INDEX
																																					(BGl_z62typezd2errorzb0zz__objectz00);
																																				BgL_arg1483z00_3396
																																					=
																																					BgL_res2632z00_3405;
																																			}
																																			BGL_OBJECT_CLASS_NUM_SET
																																				(((BgL_objectz00_bglt) BgL_new1083z00_3395), BgL_arg1483z00_3396);
																																		}
																																		BgL_new1084z00_3394
																																			=
																																			BgL_new1083z00_3395;
																																	}
																																	((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1084z00_3394)))->BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
																																	((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1084z00_3394)))->BgL_locationz00) = ((obj_t) BFALSE), BUNSPEC);
																																	{
																																		obj_t
																																			BgL_auxz00_5542;
																																		{	/* Llib/error.scm 544 */
																																			obj_t
																																				BgL_arg1479z00_3397;
																																			{	/* Llib/error.scm 544 */
																																				obj_t
																																					BgL_arg1480z00_3398;
																																				{	/* Llib/error.scm 544 */
																																					obj_t
																																						BgL_res2633z00_3409;
																																					{	/* Llib/error.scm 544 */
																																						obj_t
																																							BgL_classz00_3408;
																																						BgL_classz00_3408
																																							=
																																							BGl_z62typezd2errorzb0zz__objectz00;
																																						BgL_res2633z00_3409
																																							=
																																							BGL_CLASS_ALL_FIELDS
																																							(BgL_classz00_3408);
																																					}
																																					BgL_arg1480z00_3398
																																						=
																																						BgL_res2633z00_3409;
																																				}
																																				BgL_arg1479z00_3397
																																					=
																																					VECTOR_REF
																																					(BgL_arg1480z00_3398,
																																					((long) 2));
																																			}
																																			BgL_auxz00_5542
																																				=
																																				BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																																				(BgL_arg1479z00_3397);
																																		}
																																		((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1084z00_3394)))->BgL_stackz00) = ((obj_t) BgL_auxz00_5542), BUNSPEC);
																																	}
																																	((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt) BgL_new1084z00_3394)))->BgL_procz00) = ((obj_t) BgL_procz00_10), BUNSPEC);
																																	((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt) BgL_new1084z00_3394)))->BgL_msgz00) = ((obj_t) BgL_msgz00_3392), BUNSPEC);
																																	((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt) BgL_new1084z00_3394)))->BgL_objz00) = ((obj_t) BgL_objz00_12), BUNSPEC);
																																	((((BgL_z62typezd2errorzb0_bglt) COBJECT(BgL_new1084z00_3394))->BgL_typez00) = ((obj_t) BgL_msgz00_11), BUNSPEC);
																																	BgL_arg1367z00_1657
																																		=
																																		BgL_new1084z00_3394;
																													}}}}
																													return
																														BGl_raisez00zz__errorz00
																														(((obj_t)
																															BgL_arg1367z00_1657));
																												}
																											else
																												{	/* Llib/error.scm 335 */
																													if (
																														((long)
																															(BgL_sysnoz00_9)
																															==
																															(long)
																															(BGL_TYPENAME_ERROR)))
																														{	/* Llib/error.scm 338 */
																															BgL_z62typezd2errorzb0_bglt
																																BgL_arg1370z00_1659;
																															{	/* Llib/error.scm 554 */
																																obj_t
																																	BgL_tyz00_3414;
																																if (STRINGP
																																	(BgL_msgz00_11))
																																	{	/* Llib/error.scm 555 */
																																		BgL_tyz00_3414
																																			=
																																			BgL_msgz00_11;
																																	}
																																else
																																	{	/* Llib/error.scm 555 */
																																		if (SYMBOLP
																																			(BgL_msgz00_11))
																																			{	/* Llib/error.scm 556 */
																																				obj_t
																																					BgL_res2637z00_3427;
																																				{	/* Llib/error.scm 556 */
																																					obj_t
																																						BgL_arg2216z00_3426;
																																					BgL_arg2216z00_3426
																																						=
																																						SYMBOL_TO_STRING
																																						(BgL_msgz00_11);
																																					BgL_res2637z00_3427
																																						=
																																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																						(BgL_arg2216z00_3426);
																																				}
																																				BgL_tyz00_3414
																																					=
																																					BgL_res2637z00_3427;
																																			}
																																		else
																																			{	/* Llib/error.scm 556 */
																																				BgL_tyz00_3414
																																					=
																																					BGl_string3129z00zz__errorz00;
																																			}
																																	}
																																{	/* Llib/error.scm 554 */
																																	obj_t
																																		BgL_msgz00_3417;
																																	BgL_msgz00_3417
																																		=
																																		BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00
																																		(BGl_string3130z00zz__errorz00,
																																		BgL_tyz00_3414,
																																		BgL_objz00_12);
																																	{	/* Llib/error.scm 558 */

																																		{	/* Llib/error.scm 559 */
																																			BgL_z62typezd2errorzb0_bglt
																																				BgL_new1086z00_3418;
																																			{	/* Llib/error.scm 560 */
																																				BgL_z62typezd2errorzb0_bglt
																																					BgL_new1085z00_3419;
																																				BgL_new1085z00_3419
																																					=
																																					(
																																					(BgL_z62typezd2errorzb0_bglt)
																																					BOBJECT
																																					(GC_MALLOC
																																						(sizeof
																																							(struct
																																								BgL_z62typezd2errorzb0_bgl))));
																																				{	/* Llib/error.scm 560 */
																																					long
																																						BgL_arg1491z00_3420;
																																					{	/* Llib/error.scm 560 */
																																						long
																																							BgL_res2638z00_3429;
																																						BgL_res2638z00_3429
																																							=
																																							BGL_CLASS_INDEX
																																							(BGl_z62typezd2errorzb0zz__objectz00);
																																						BgL_arg1491z00_3420
																																							=
																																							BgL_res2638z00_3429;
																																					}
																																					BGL_OBJECT_CLASS_NUM_SET
																																						(((BgL_objectz00_bglt) BgL_new1085z00_3419), BgL_arg1491z00_3420);
																																				}
																																				BgL_new1086z00_3418
																																					=
																																					BgL_new1085z00_3419;
																																			}
																																			((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1086z00_3418)))->BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
																																			((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1086z00_3418)))->BgL_locationz00) = ((obj_t) BFALSE), BUNSPEC);
																																			{
																																				obj_t
																																					BgL_auxz00_5576;
																																				{	/* Llib/error.scm 561 */
																																					obj_t
																																						BgL_arg1487z00_3421;
																																					{	/* Llib/error.scm 561 */
																																						obj_t
																																							BgL_arg1489z00_3422;
																																						{	/* Llib/error.scm 561 */
																																							obj_t
																																								BgL_res2639z00_3433;
																																							{	/* Llib/error.scm 561 */
																																								obj_t
																																									BgL_classz00_3432;
																																								BgL_classz00_3432
																																									=
																																									BGl_z62typezd2errorzb0zz__objectz00;
																																								BgL_res2639z00_3433
																																									=
																																									BGL_CLASS_ALL_FIELDS
																																									(BgL_classz00_3432);
																																							}
																																							BgL_arg1489z00_3422
																																								=
																																								BgL_res2639z00_3433;
																																						}
																																						BgL_arg1487z00_3421
																																							=
																																							VECTOR_REF
																																							(BgL_arg1489z00_3422,
																																							((long) 2));
																																					}
																																					BgL_auxz00_5576
																																						=
																																						BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																																						(BgL_arg1487z00_3421);
																																				}
																																				((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt) BgL_new1086z00_3418)))->BgL_stackz00) = ((obj_t) BgL_auxz00_5576), BUNSPEC);
																																			}
																																			((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt) BgL_new1086z00_3418)))->BgL_procz00) = ((obj_t) BgL_procz00_10), BUNSPEC);
																																			((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt) BgL_new1086z00_3418)))->BgL_msgz00) = ((obj_t) BgL_msgz00_3417), BUNSPEC);
																																			((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt) BgL_new1086z00_3418)))->BgL_objz00) = ((obj_t) BUNSPEC), BUNSPEC);
																																			((((BgL_z62typezd2errorzb0_bglt) COBJECT(BgL_new1086z00_3418))->BgL_typez00) = ((obj_t) BgL_msgz00_11), BUNSPEC);
																																			BgL_arg1370z00_1659
																																				=
																																				BgL_new1086z00_3418;
																															}}}}
																															return
																																BGl_raisez00zz__errorz00
																																(((obj_t)
																																	BgL_arg1370z00_1659));
																														}
																													else
																														{	/* Llib/error.scm 337 */
																															if (
																																((long)
																																	(BgL_sysnoz00_9)
																																	==
																																	(long)
																																	(BGL_INDEX_OUT_OF_BOUND_ERROR)))
																																{	/* Llib/error.scm 339 */
																																	return
																																		BGl_raisez00zz__errorz00
																																		(BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00
																																		(BFALSE,
																																			BFALSE,
																																			BgL_procz00_10,
																																			BgL_objz00_12,
																																			CINT
																																			(BgL_msgz00_11),
																																			(int) ((
																																					(long)
																																					-1))));
																																}
																															else
																																{	/* Llib/error.scm 339 */
																																	return
																																		BGl_errorz00zz__errorz00
																																		(BgL_procz00_10,
																																		BgL_msgz00_11,
																																		BgL_objz00_12);
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



/* &error/errno */
	obj_t BGl_z62errorzf2errnoz90zz__errorz00(obj_t BgL_envz00_4922,
		obj_t BgL_sysnoz00_4923, obj_t BgL_procz00_4924, obj_t BgL_msgz00_4925,
		obj_t BgL_objz00_4926)
	{
		{	/* Llib/error.scm 297 */
			{	/* Llib/error.scm 299 */
				int BgL_auxz00_5600;

				{	/* Llib/error.scm 299 */
					obj_t BgL_tmpz00_5601;

					if (INTEGERP(BgL_sysnoz00_4923))
						{	/* Llib/error.scm 299 */
							BgL_tmpz00_5601 = BgL_sysnoz00_4923;
						}
					else
						{
							obj_t BgL_auxz00_5604;

							BgL_auxz00_5604 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
								BINT(((long) 11952)), BGl_string3132z00zz__errorz00,
								BGl_string3133z00zz__errorz00, BgL_sysnoz00_4923);
							FAILURE(BgL_auxz00_5604, BFALSE, BFALSE);
						}
					BgL_auxz00_5600 = CINT(BgL_tmpz00_5601);
				}
				return
					bgl_system_failure(BgL_auxz00_5600, BgL_procz00_4924, BgL_msgz00_4925,
					BgL_objz00_4926);
			}
		}

	}



/* stack-overflow-error */
	BGL_EXPORTED_DEF obj_t bgl_stack_overflow_error()
	{
		{	/* Llib/error.scm 347 */
			{	/* Llib/error.scm 348 */
				obj_t BgL_stkz00_1662;

				{	/* Llib/error.scm 348 */

					{	/* Llib/error.scm 348 */

						BgL_stkz00_1662 = BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
					}
				}
				{
					obj_t BgL_procz00_1667;

					if (PAIRP(BgL_stkz00_1662))
						{	/* Llib/error.scm 349 */
							obj_t BgL_carzd2111zd2_1672;

							BgL_carzd2111zd2_1672 = CAR(BgL_stkz00_1662);
							if (PAIRP(BgL_carzd2111zd2_1672))
								{	/* Llib/error.scm 349 */
									obj_t BgL_cdrzd2117zd2_1674;

									BgL_cdrzd2117zd2_1674 = CDR(BgL_carzd2111zd2_1672);
									if (PAIRP(BgL_cdrzd2117zd2_1674))
										{	/* Llib/error.scm 349 */
											obj_t BgL_carzd2121zd2_1676;

											BgL_carzd2121zd2_1676 = CAR(BgL_cdrzd2117zd2_1674);
											if (PAIRP(BgL_carzd2121zd2_1676))
												{	/* Llib/error.scm 349 */
													obj_t BgL_cdrzd2126zd2_1678;

													BgL_cdrzd2126zd2_1678 = CDR(BgL_carzd2121zd2_1676);
													if (
														(CAR(BgL_carzd2121zd2_1676) ==
															BGl_symbol3135z00zz__errorz00))
														{	/* Llib/error.scm 349 */
															if (PAIRP(BgL_cdrzd2126zd2_1678))
																{	/* Llib/error.scm 349 */
																	obj_t BgL_cdrzd2130zd2_1682;

																	BgL_cdrzd2130zd2_1682 =
																		CDR(BgL_cdrzd2126zd2_1678);
																	if (PAIRP(BgL_cdrzd2130zd2_1682))
																		{	/* Llib/error.scm 349 */
																			if (NULLP(CDR(BgL_cdrzd2130zd2_1682)))
																				{	/* Llib/error.scm 349 */
																					if (NULLP(CDR(BgL_cdrzd2117zd2_1674)))
																						{	/* Llib/error.scm 349 */
																							obj_t BgL_arg1385z00_1688;
																							obj_t BgL_arg1386z00_1689;
																							obj_t BgL_arg1387z00_1690;

																							BgL_arg1385z00_1688 =
																								CAR(BgL_carzd2111zd2_1672);
																							BgL_arg1386z00_1689 =
																								CAR(BgL_cdrzd2126zd2_1678);
																							BgL_arg1387z00_1690 =
																								CAR(BgL_cdrzd2130zd2_1682);
																							{	/* Llib/error.scm 352 */
																								BgL_z62stackzd2overflowzd2errorz62_bglt
																									BgL_arg1399z00_3478;
																								{	/* Llib/error.scm 352 */
																									BgL_z62stackzd2overflowzd2errorz62_bglt
																										BgL_new1068z00_3479;
																									{	/* Llib/error.scm 353 */
																										BgL_z62stackzd2overflowzd2errorz62_bglt
																											BgL_new1067z00_3480;
																										BgL_new1067z00_3480 =
																											(
																											(BgL_z62stackzd2overflowzd2errorz62_bglt)
																											BOBJECT(GC_MALLOC(sizeof
																													(struct
																														BgL_z62stackzd2overflowzd2errorz62_bgl))));
																										{	/* Llib/error.scm 353 */
																											long BgL_arg1400z00_3481;

																											{	/* Llib/error.scm 353 */
																												long
																													BgL_res2656z00_3483;
																												BgL_res2656z00_3483 =
																													BGL_CLASS_INDEX
																													(BGl_z62stackzd2overflowzd2errorz62zz__objectz00);
																												BgL_arg1400z00_3481 =
																													BgL_res2656z00_3483;
																											}
																											BGL_OBJECT_CLASS_NUM_SET(
																												((BgL_objectz00_bglt)
																													BgL_new1067z00_3480),
																												BgL_arg1400z00_3481);
																										}
																										BgL_new1068z00_3479 =
																											BgL_new1067z00_3480;
																									}
																									((((BgL_z62exceptionz62_bglt)
																												COBJECT((
																														(BgL_z62exceptionz62_bglt)
																														BgL_new1068z00_3479)))->
																											BgL_fnamez00) =
																										((obj_t)
																											BgL_arg1386z00_1689),
																										BUNSPEC);
																									((((BgL_z62exceptionz62_bglt)
																												COBJECT((
																														(BgL_z62exceptionz62_bglt)
																														BgL_new1068z00_3479)))->
																											BgL_locationz00) =
																										((obj_t)
																											BgL_arg1387z00_1690),
																										BUNSPEC);
																									((((BgL_z62exceptionz62_bglt)
																												COBJECT((
																														(BgL_z62exceptionz62_bglt)
																														BgL_new1068z00_3479)))->
																											BgL_stackz00) =
																										((obj_t) BgL_stkz00_1662),
																										BUNSPEC);
																									((((BgL_z62errorz62_bglt)
																												COBJECT((
																														(BgL_z62errorz62_bglt)
																														BgL_new1068z00_3479)))->
																											BgL_procz00) =
																										((obj_t)
																											BgL_arg1385z00_1688),
																										BUNSPEC);
																									((((BgL_z62errorz62_bglt)
																												COBJECT((
																														(BgL_z62errorz62_bglt)
																														BgL_new1068z00_3479)))->
																											BgL_msgz00) =
																										((obj_t)
																											BGl_string3134z00zz__errorz00),
																										BUNSPEC);
																									{
																										obj_t BgL_auxz00_5654;

																										{	/* Llib/error.scm 358 */
																											obj_t BgL_res2657z00_3486;

																											BgL_res2657z00_3486 =
																												BGL_CURRENT_DYNAMIC_ENV
																												();
																											BgL_auxz00_5654 =
																												BgL_res2657z00_3486;
																										}
																										((((BgL_z62errorz62_bglt)
																													COBJECT((
																															(BgL_z62errorz62_bglt)
																															BgL_new1068z00_3479)))->
																												BgL_objz00) =
																											((obj_t) BgL_auxz00_5654),
																											BUNSPEC);
																									}
																									BgL_arg1399z00_3478 =
																										BgL_new1068z00_3479;
																								}
																								return
																									BGl_raisez00zz__errorz00(
																									((obj_t)
																										BgL_arg1399z00_3478));
																							}
																						}
																					else
																						{	/* Llib/error.scm 349 */
																							BgL_procz00_1667 =
																								BgL_carzd2111zd2_1672;
																						BgL_tagzd2102zd2_1668:
																							{	/* Llib/error.scm 361 */
																								BgL_z62stackzd2overflowzd2errorz62_bglt
																									BgL_arg1401z00_1706;
																								{	/* Llib/error.scm 361 */
																									BgL_z62stackzd2overflowzd2errorz62_bglt
																										BgL_new1070z00_1707;
																									{	/* Llib/error.scm 361 */
																										BgL_z62stackzd2overflowzd2errorz62_bglt
																											BgL_new1069z00_1708;
																										BgL_new1069z00_1708 =
																											(
																											(BgL_z62stackzd2overflowzd2errorz62_bglt)
																											BOBJECT(GC_MALLOC(sizeof
																													(struct
																														BgL_z62stackzd2overflowzd2errorz62_bgl))));
																										{	/* Llib/error.scm 361 */
																											long BgL_arg1402z00_1709;

																											{	/* Llib/error.scm 361 */
																												long
																													BgL_res2643z00_3448;
																												BgL_res2643z00_3448 =
																													BGL_CLASS_INDEX
																													(BGl_z62stackzd2overflowzd2errorz62zz__objectz00);
																												BgL_arg1402z00_1709 =
																													BgL_res2643z00_3448;
																											}
																											BGL_OBJECT_CLASS_NUM_SET(
																												((BgL_objectz00_bglt)
																													BgL_new1069z00_1708),
																												BgL_arg1402z00_1709);
																										}
																										BgL_new1070z00_1707 =
																											BgL_new1069z00_1708;
																									}
																									((((BgL_z62exceptionz62_bglt)
																												COBJECT((
																														(BgL_z62exceptionz62_bglt)
																														BgL_new1070z00_1707)))->
																											BgL_fnamez00) =
																										((obj_t) BFALSE), BUNSPEC);
																									((((BgL_z62exceptionz62_bglt)
																												COBJECT((
																														(BgL_z62exceptionz62_bglt)
																														BgL_new1070z00_1707)))->
																											BgL_locationz00) =
																										((obj_t) BFALSE), BUNSPEC);
																									((((BgL_z62exceptionz62_bglt)
																												COBJECT((
																														(BgL_z62exceptionz62_bglt)
																														BgL_new1070z00_1707)))->
																											BgL_stackz00) =
																										((obj_t) BgL_stkz00_1662),
																										BUNSPEC);
																									((((BgL_z62errorz62_bglt)
																												COBJECT((
																														(BgL_z62errorz62_bglt)
																														BgL_new1070z00_1707)))->
																											BgL_procz00) =
																										((obj_t) BgL_procz00_1667),
																										BUNSPEC);
																									((((BgL_z62errorz62_bglt)
																												COBJECT((
																														(BgL_z62errorz62_bglt)
																														BgL_new1070z00_1707)))->
																											BgL_msgz00) =
																										((obj_t)
																											BGl_string3134z00zz__errorz00),
																										BUNSPEC);
																									{
																										obj_t BgL_auxz00_5674;

																										{	/* Llib/error.scm 365 */
																											obj_t BgL_res2644z00_3451;

																											BgL_res2644z00_3451 =
																												BGL_CURRENT_DYNAMIC_ENV
																												();
																											BgL_auxz00_5674 =
																												BgL_res2644z00_3451;
																										}
																										((((BgL_z62errorz62_bglt)
																													COBJECT((
																															(BgL_z62errorz62_bglt)
																															BgL_new1070z00_1707)))->
																												BgL_objz00) =
																											((obj_t) BgL_auxz00_5674),
																											BUNSPEC);
																									}
																									BgL_arg1401z00_1706 =
																										BgL_new1070z00_1707;
																								}
																								return
																									BGl_raisez00zz__errorz00(
																									((obj_t)
																										BgL_arg1401z00_1706));
																							}
																						}
																				}
																			else
																				{
																					obj_t BgL_procz00_5680;

																					BgL_procz00_5680 =
																						BgL_carzd2111zd2_1672;
																					BgL_procz00_1667 = BgL_procz00_5680;
																					goto BgL_tagzd2102zd2_1668;
																				}
																		}
																	else
																		{
																			obj_t BgL_procz00_5681;

																			BgL_procz00_5681 = BgL_carzd2111zd2_1672;
																			BgL_procz00_1667 = BgL_procz00_5681;
																			goto BgL_tagzd2102zd2_1668;
																		}
																}
															else
																{
																	obj_t BgL_procz00_5682;

																	BgL_procz00_5682 = BgL_carzd2111zd2_1672;
																	BgL_procz00_1667 = BgL_procz00_5682;
																	goto BgL_tagzd2102zd2_1668;
																}
														}
													else
														{
															obj_t BgL_procz00_5683;

															BgL_procz00_5683 = BgL_carzd2111zd2_1672;
															BgL_procz00_1667 = BgL_procz00_5683;
															goto BgL_tagzd2102zd2_1668;
														}
												}
											else
												{
													obj_t BgL_procz00_5684;

													BgL_procz00_5684 = BgL_carzd2111zd2_1672;
													BgL_procz00_1667 = BgL_procz00_5684;
													goto BgL_tagzd2102zd2_1668;
												}
										}
									else
										{
											obj_t BgL_procz00_5685;

											BgL_procz00_5685 = BgL_carzd2111zd2_1672;
											BgL_procz00_1667 = BgL_procz00_5685;
											goto BgL_tagzd2102zd2_1668;
										}
								}
							else
								{
									obj_t BgL_procz00_5686;

									BgL_procz00_5686 = BgL_carzd2111zd2_1672;
									BgL_procz00_1667 = BgL_procz00_5686;
									goto BgL_tagzd2102zd2_1668;
								}
						}
					else
						{	/* Llib/error.scm 349 */
							{	/* Llib/error.scm 368 */
								BgL_z62stackzd2overflowzd2errorz62_bglt BgL_arg1404z00_1710;

								{	/* Llib/error.scm 368 */
									BgL_z62stackzd2overflowzd2errorz62_bglt BgL_new1072z00_1711;

									{	/* Llib/error.scm 368 */
										BgL_z62stackzd2overflowzd2errorz62_bglt BgL_new1071z00_1712;

										BgL_new1071z00_1712 =
											((BgL_z62stackzd2overflowzd2errorz62_bglt)
											BOBJECT(GC_MALLOC(sizeof(struct
														BgL_z62stackzd2overflowzd2errorz62_bgl))));
										{	/* Llib/error.scm 368 */
											long BgL_arg1405z00_1713;

											{	/* Llib/error.scm 368 */
												long BgL_res2645z00_3453;

												BgL_res2645z00_3453 =
													BGL_CLASS_INDEX
													(BGl_z62stackzd2overflowzd2errorz62zz__objectz00);
												BgL_arg1405z00_1713 = BgL_res2645z00_3453;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1071z00_1712),
												BgL_arg1405z00_1713);
										}
										BgL_new1072z00_1711 = BgL_new1071z00_1712;
									}
									((((BgL_z62exceptionz62_bglt) COBJECT(
													((BgL_z62exceptionz62_bglt) BgL_new1072z00_1711)))->
											BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
									((((BgL_z62exceptionz62_bglt)
												COBJECT(((BgL_z62exceptionz62_bglt)
														BgL_new1072z00_1711)))->BgL_locationz00) =
										((obj_t) BFALSE), BUNSPEC);
									((((BgL_z62exceptionz62_bglt)
												COBJECT(((BgL_z62exceptionz62_bglt)
														BgL_new1072z00_1711)))->BgL_stackz00) =
										((obj_t) BgL_stkz00_1662), BUNSPEC);
									((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
														BgL_new1072z00_1711)))->BgL_procz00) =
										((obj_t) BFALSE), BUNSPEC);
									((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
														BgL_new1072z00_1711)))->BgL_msgz00) =
										((obj_t) BGl_string3134z00zz__errorz00), BUNSPEC);
									{
										obj_t BgL_auxz00_5701;

										{	/* Llib/error.scm 372 */
											obj_t BgL_res2646z00_3456;

											BgL_res2646z00_3456 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_auxz00_5701 = BgL_res2646z00_3456;
										}
										((((BgL_z62errorz62_bglt) COBJECT(
														((BgL_z62errorz62_bglt) BgL_new1072z00_1711)))->
												BgL_objz00) = ((obj_t) BgL_auxz00_5701), BUNSPEC);
									}
									BgL_arg1404z00_1710 = BgL_new1072z00_1711;
								}
								return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1404z00_1710));
							}
						}
				}
			}
		}

	}



/* &stack-overflow-erro3075 */
	obj_t BGl_z62stackzd2overflowzd2erro3075z62zz__errorz00(obj_t BgL_envz00_4927)
	{
		{	/* Llib/error.scm 347 */
			return bgl_stack_overflow_error();
		}

	}



/* exit */
	BGL_EXPORTED_DEF obj_t BGl_exitz00zz__errorz00(obj_t BgL_nz00_13)
	{
		{	/* Llib/error.scm 377 */
			{	/* Llib/error.scm 378 */
				obj_t BgL_valz00_1715;

				if (NULLP(BgL_nz00_13))
					{	/* Llib/error.scm 379 */
						BgL_valz00_1715 = BINT(((long) 0));
					}
				else
					{	/* Llib/error.scm 379 */
						if (INTEGERP(CAR(((obj_t) BgL_nz00_13))))
							{	/* Llib/error.scm 380 */
								BgL_valz00_1715 = CAR(((obj_t) BgL_nz00_13));
							}
						else
							{	/* Llib/error.scm 380 */
								BgL_valz00_1715 = BINT(((long) 0));
					}}
				BIGLOO_EXIT(BgL_valz00_1715);
				return BgL_valz00_1715;
			}
		}

	}



/* &exit */
	obj_t BGl_z62exitz62zz__errorz00(obj_t BgL_envz00_4928, obj_t BgL_nz00_4929)
	{
		{	/* Llib/error.scm 377 */
			return BGl_exitz00zz__errorz00(BgL_nz00_4929);
		}

	}



/* with-exception-handler */
	BGL_EXPORTED_DEF obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t
		BgL_handlerz00_14, obj_t BgL_thunkz00_15)
	{
		{	/* Llib/error.scm 388 */
			if (PROCEDURE_CORRECT_ARITYP(BgL_handlerz00_14, (int) (((long) 1))))
				{	/* Llib/error.scm 390 */
					obj_t BgL_oldzd2handlerszd2_1721;

					BgL_oldzd2handlerszd2_1721 = BGL_ERROR_HANDLER_GET();
					{	/* Llib/error.scm 393 */
						obj_t BgL_arg1411z00_1722;

						{	/* Llib/error.scm 393 */
							obj_t BgL_zc3z04anonymousza31413ze3z87_4931;

							BgL_zc3z04anonymousza31413ze3z87_4931 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31413ze3ze5zz__errorz00,
								(int) (((long) 1)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31413ze3z87_4931,
								(int) (((long) 0)), BgL_oldzd2handlerszd2_1721);
							PROCEDURE_SET(BgL_zc3z04anonymousza31413ze3z87_4931,
								(int) (((long) 1)), ((obj_t) BgL_handlerz00_14));
							{	/* Llib/error.scm 392 */
								obj_t BgL_res2660z00_3499;

								BgL_res2660z00_3499 =
									MAKE_YOUNG_PAIR(BgL_zc3z04anonymousza31413ze3z87_4931,
									BgL_oldzd2handlerszd2_1721);
								BgL_arg1411z00_1722 = BgL_res2660z00_3499;
						}}
						BGL_ERROR_HANDLER_SET(BgL_arg1411z00_1722);
						BUNSPEC;
					}
					{	/* Llib/error.scm 396 */
						obj_t BgL_exitd1073z00_1727;

						BgL_exitd1073z00_1727 = BGL_EXITD_TOP_AS_OBJ();
						{
							obj_t BgL_zc3z04anonymousza31415ze3z87_4930;

							BgL_zc3z04anonymousza31415ze3z87_4930 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31415ze3ze5zz__errorz00,
								(int) (((long) 0)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31415ze3z87_4930,
								(int) (((long) 0)), BgL_oldzd2handlerszd2_1721);
							BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
								(BgL_exitd1073z00_1727, BgL_zc3z04anonymousza31415ze3z87_4930);
							{	/* Llib/error.scm 397 */
								obj_t BgL_tmp1075z00_1729;

								if (PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_15,
										(int) (((long) 0))))
									{	/* Llib/error.scm 397 */
										BgL_tmp1075z00_1729 =
											PROCEDURE_ENTRY(BgL_thunkz00_15) (BgL_thunkz00_15, BEOA);
									}
								else
									{	/* Llib/error.scm 457 */
										BgL_z62errorz62_bglt BgL_arg1442z00_3500;

										{	/* Llib/error.scm 457 */
											BgL_z62errorz62_bglt BgL_new1078z00_3501;

											{	/* Llib/error.scm 457 */
												BgL_z62errorz62_bglt BgL_new1077z00_3502;

												BgL_new1077z00_3502 =
													((BgL_z62errorz62_bglt)
													BOBJECT(GC_MALLOC(sizeof(struct
																BgL_z62errorz62_bgl))));
												{	/* Llib/error.scm 457 */
													long BgL_arg1445z00_3503;

													{	/* Llib/error.scm 457 */
														long BgL_res2661z00_3507;

														BgL_res2661z00_3507 =
															BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00);
														BgL_arg1445z00_3503 = BgL_res2661z00_3507;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1077z00_3502),
														BgL_arg1445z00_3503);
												}
												BgL_new1078z00_3501 = BgL_new1077z00_3502;
											}
											((((BgL_z62exceptionz62_bglt) COBJECT(
															((BgL_z62exceptionz62_bglt)
																BgL_new1078z00_3501)))->BgL_fnamez00) =
												((obj_t) BFALSE), BUNSPEC);
											((((BgL_z62exceptionz62_bglt)
														COBJECT(((BgL_z62exceptionz62_bglt)
																BgL_new1078z00_3501)))->BgL_locationz00) =
												((obj_t) BFALSE), BUNSPEC);
											{
												obj_t BgL_auxz00_5755;

												{	/* Llib/error.scm 457 */
													obj_t BgL_arg1443z00_3504;

													{	/* Llib/error.scm 457 */
														obj_t BgL_arg1444z00_3505;

														{	/* Llib/error.scm 457 */
															obj_t BgL_res2662z00_3511;

															{	/* Llib/error.scm 457 */
																obj_t BgL_classz00_3510;

																BgL_classz00_3510 =
																	BGl_z62errorz62zz__objectz00;
																BgL_res2662z00_3511 =
																	BGL_CLASS_ALL_FIELDS(BgL_classz00_3510);
															}
															BgL_arg1444z00_3505 = BgL_res2662z00_3511;
														}
														BgL_arg1443z00_3504 =
															VECTOR_REF(BgL_arg1444z00_3505, ((long) 2));
													}
													BgL_auxz00_5755 =
														BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
														(BgL_arg1443z00_3504);
												}
												((((BgL_z62exceptionz62_bglt) COBJECT(
																((BgL_z62exceptionz62_bglt)
																	BgL_new1078z00_3501)))->BgL_stackz00) =
													((obj_t) BgL_auxz00_5755), BUNSPEC);
											}
											((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_3501))->
													BgL_procz00) =
												((obj_t) BGl_string3137z00zz__errorz00), BUNSPEC);
											((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_3501))->
													BgL_msgz00) =
												((obj_t) BGl_string3138z00zz__errorz00), BUNSPEC);
											((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_3501))->
													BgL_objz00) = ((obj_t) BgL_thunkz00_15), BUNSPEC);
											BgL_arg1442z00_3500 = BgL_new1078z00_3501;
										}
										BgL_tmp1075z00_1729 =
											BGl_raisez00zz__errorz00(((obj_t) BgL_arg1442z00_3500));
									}
								BGl_exitdzd2popzd2protectz12z12zz__bexitz00
									(BgL_exitd1073z00_1727);
								BGL_ERROR_HANDLER_SET(BgL_oldzd2handlerszd2_1721);
								BUNSPEC;
								return BgL_tmp1075z00_1729;
							}
						}
					}
				}
			else
				{	/* Llib/error.scm 457 */
					BgL_z62errorz62_bglt BgL_arg1442z00_3513;

					{	/* Llib/error.scm 457 */
						BgL_z62errorz62_bglt BgL_new1078z00_3514;

						{	/* Llib/error.scm 457 */
							BgL_z62errorz62_bglt BgL_new1077z00_3515;

							BgL_new1077z00_3515 =
								((BgL_z62errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_z62errorz62_bgl))));
							{	/* Llib/error.scm 457 */
								long BgL_arg1445z00_3516;

								{	/* Llib/error.scm 457 */
									long BgL_res2663z00_3520;

									BgL_res2663z00_3520 =
										BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00);
									BgL_arg1445z00_3516 = BgL_res2663z00_3520;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1077z00_3515),
									BgL_arg1445z00_3516);
							}
							BgL_new1078z00_3514 = BgL_new1077z00_3515;
						}
						((((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt) BgL_new1078z00_3514)))->
								BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
						((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
											BgL_new1078z00_3514)))->BgL_locationz00) =
							((obj_t) BFALSE), BUNSPEC);
						{
							obj_t BgL_auxz00_5776;

							{	/* Llib/error.scm 457 */
								obj_t BgL_arg1443z00_3517;

								{	/* Llib/error.scm 457 */
									obj_t BgL_arg1444z00_3518;

									{	/* Llib/error.scm 457 */
										obj_t BgL_res2664z00_3524;

										{	/* Llib/error.scm 457 */
											obj_t BgL_classz00_3523;

											BgL_classz00_3523 = BGl_z62errorz62zz__objectz00;
											BgL_res2664z00_3524 =
												BGL_CLASS_ALL_FIELDS(BgL_classz00_3523);
										}
										BgL_arg1444z00_3518 = BgL_res2664z00_3524;
									}
									BgL_arg1443z00_3517 =
										VECTOR_REF(BgL_arg1444z00_3518, ((long) 2));
								}
								BgL_auxz00_5776 =
									BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
									(BgL_arg1443z00_3517);
							}
							((((BgL_z62exceptionz62_bglt) COBJECT(
											((BgL_z62exceptionz62_bglt) BgL_new1078z00_3514)))->
									BgL_stackz00) = ((obj_t) BgL_auxz00_5776), BUNSPEC);
						}
						((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_3514))->
								BgL_procz00) =
							((obj_t) BGl_string3137z00zz__errorz00), BUNSPEC);
						((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_3514))->
								BgL_msgz00) = ((obj_t) BGl_string3139z00zz__errorz00), BUNSPEC);
						((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_3514))->
								BgL_objz00) = ((obj_t) BgL_handlerz00_14), BUNSPEC);
						BgL_arg1442z00_3513 = BgL_new1078z00_3514;
					}
					return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1442z00_3513));
				}
		}

	}



/* &with-exception-handler */
	obj_t BGl_z62withzd2exceptionzd2handlerz62zz__errorz00(obj_t BgL_envz00_4932,
		obj_t BgL_handlerz00_4933, obj_t BgL_thunkz00_4934)
	{
		{	/* Llib/error.scm 388 */
			{	/* Llib/error.scm 389 */
				obj_t BgL_auxz00_5794;
				obj_t BgL_auxz00_5787;

				if (PROCEDUREP(BgL_thunkz00_4934))
					{	/* Llib/error.scm 389 */
						BgL_auxz00_5794 = BgL_thunkz00_4934;
					}
				else
					{
						obj_t BgL_auxz00_5797;

						BgL_auxz00_5797 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
							BINT(((long) 15267)), BGl_string3140z00zz__errorz00,
							BGl_string3141z00zz__errorz00, BgL_thunkz00_4934);
						FAILURE(BgL_auxz00_5797, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_handlerz00_4933))
					{	/* Llib/error.scm 389 */
						BgL_auxz00_5787 = BgL_handlerz00_4933;
					}
				else
					{
						obj_t BgL_auxz00_5790;

						BgL_auxz00_5790 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
							BINT(((long) 15267)), BGl_string3140z00zz__errorz00,
							BGl_string3141z00zz__errorz00, BgL_handlerz00_4933);
						FAILURE(BgL_auxz00_5790, BFALSE, BFALSE);
					}
				return
					BGl_withzd2exceptionzd2handlerz00zz__errorz00(BgL_auxz00_5787,
					BgL_auxz00_5794);
			}
		}

	}



/* &<@anonymous:1415> */
	obj_t BGl_z62zc3z04anonymousza31415ze3ze5zz__errorz00(obj_t BgL_envz00_4935)
	{
		{	/* Llib/error.scm 396 */
			{
				obj_t BgL_oldzd2handlerszd2_4936;

				BgL_oldzd2handlerszd2_4936 =
					PROCEDURE_REF(BgL_envz00_4935, (int) (((long) 0)));
				BGL_ERROR_HANDLER_SET(BgL_oldzd2handlerszd2_4936);
				return BUNSPEC;
			}
		}

	}



/* &<@anonymous:1413> */
	obj_t BGl_z62zc3z04anonymousza31413ze3ze5zz__errorz00(obj_t BgL_envz00_4937,
		obj_t BgL_ez00_4940)
	{
		{	/* Llib/error.scm 392 */
			{	/* Llib/error.scm 393 */
				obj_t BgL_oldzd2handlerszd2_4938;
				obj_t BgL_handlerz00_4939;

				BgL_oldzd2handlerszd2_4938 =
					PROCEDURE_REF(BgL_envz00_4937, (int) (((long) 0)));
				BgL_handlerz00_4939 =
					PROCEDURE_REF(BgL_envz00_4937, (int) (((long) 1)));
				BGL_ERROR_HANDLER_SET(BgL_oldzd2handlerszd2_4938);
				BUNSPEC;
				return
					PROCEDURE_ENTRY(BgL_handlerz00_4939) (BgL_handlerz00_4939,
					BgL_ez00_4940, BEOA);
			}
		}

	}



/* current-exception-handler */
	BGL_EXPORTED_DEF obj_t BGl_currentzd2exceptionzd2handlerz00zz__errorz00()
	{
		{	/* Llib/error.scm 406 */
			{	/* Llib/error.scm 407 */
				bool_t BgL_test3485z00_5814;

				{	/* Llib/error.scm 407 */
					obj_t BgL_arg1419z00_1736;

					BgL_arg1419z00_1736 = BGL_ERROR_HANDLER_GET();
					BgL_test3485z00_5814 = PAIRP(BgL_arg1419z00_1736);
				}
				if (BgL_test3485z00_5814)
					{	/* Llib/error.scm 408 */
						obj_t BgL_arg1418z00_1735;

						BgL_arg1418z00_1735 = BGL_ERROR_HANDLER_GET();
						return CAR(((obj_t) BgL_arg1418z00_1735));
					}
				else
					{	/* Llib/error.scm 407 */
						return BGl_defaultzd2exceptionzd2handlerzd2envzd2zz__errorz00;
					}
			}
		}

	}



/* &current-exception-handler */
	obj_t BGl_z62currentzd2exceptionzd2handlerz62zz__errorz00(obj_t
		BgL_envz00_4941)
	{
		{	/* Llib/error.scm 406 */
			return BGl_currentzd2exceptionzd2handlerz00zz__errorz00();
		}

	}



/* raise */
	BGL_EXPORTED_DEF obj_t BGl_raisez00zz__errorz00(obj_t BgL_valz00_16)
	{
		{	/* Llib/error.scm 414 */
			{	/* Llib/error.scm 415 */
				obj_t BgL_handlersz00_1737;

				BgL_handlersz00_1737 = BGL_ERROR_HANDLER_GET();
				if (PAIRP(BgL_handlersz00_1737))
					{	/* Llib/error.scm 419 */
						obj_t BgL_rz00_1740;

						{	/* Llib/error.scm 419 */
							obj_t BgL_fun1425z00_1745;

							BgL_fun1425z00_1745 = CAR(BgL_handlersz00_1737);
							BgL_rz00_1740 =
								PROCEDURE_ENTRY(BgL_fun1425z00_1745) (BgL_fun1425z00_1745,
								BgL_valz00_16, BEOA);
						}
						if (BGl_isazf3zf3zz__objectz00(BgL_valz00_16,
								BGl_z62errorz62zz__objectz00))
							{	/* Llib/error.scm 423 */
								obj_t BgL_arg1422z00_1743;
								obj_t BgL_arg1424z00_1744;

								BgL_arg1422z00_1743 =
									(((BgL_z62exceptionz62_bglt) COBJECT(
											((BgL_z62exceptionz62_bglt)
												((BgL_z62errorz62_bglt) BgL_valz00_16))))->
									BgL_fnamez00);
								BgL_arg1424z00_1744 =
									(((BgL_z62exceptionz62_bglt)
										COBJECT(((BgL_z62exceptionz62_bglt) ((BgL_z62errorz62_bglt)
													BgL_valz00_16))))->BgL_locationz00);
								{	/* Llib/error.scm 467 */
									BgL_z62errorz62_bglt BgL_arg1446z00_3531;

									{	/* Llib/error.scm 467 */
										BgL_z62errorz62_bglt BgL_new1080z00_3532;

										{	/* Llib/error.scm 468 */
											BgL_z62errorz62_bglt BgL_new1079z00_3533;

											BgL_new1079z00_3533 =
												((BgL_z62errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_z62errorz62_bgl))));
											{	/* Llib/error.scm 468 */
												long BgL_arg1451z00_3534;

												{	/* Llib/error.scm 468 */
													long BgL_res2667z00_3538;

													BgL_res2667z00_3538 =
														BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00);
													BgL_arg1451z00_3534 = BgL_res2667z00_3538;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1079z00_3533),
													BgL_arg1451z00_3534);
											}
											BgL_new1080z00_3532 = BgL_new1079z00_3533;
										}
										((((BgL_z62exceptionz62_bglt) COBJECT(
														((BgL_z62exceptionz62_bglt) BgL_new1080z00_3532)))->
												BgL_fnamez00) = ((obj_t) BgL_arg1422z00_1743), BUNSPEC);
										((((BgL_z62exceptionz62_bglt)
													COBJECT(((BgL_z62exceptionz62_bglt)
															BgL_new1080z00_3532)))->BgL_locationz00) =
											((obj_t) BgL_arg1424z00_1744), BUNSPEC);
										{
											obj_t BgL_auxz00_5845;

											{	/* Llib/error.scm 469 */
												obj_t BgL_arg1448z00_3535;

												{	/* Llib/error.scm 469 */
													obj_t BgL_arg1449z00_3536;

													{	/* Llib/error.scm 469 */
														obj_t BgL_res2668z00_3542;

														{	/* Llib/error.scm 469 */
															obj_t BgL_classz00_3541;

															BgL_classz00_3541 = BGl_z62errorz62zz__objectz00;
															BgL_res2668z00_3542 =
																BGL_CLASS_ALL_FIELDS(BgL_classz00_3541);
														}
														BgL_arg1449z00_3536 = BgL_res2668z00_3542;
													}
													BgL_arg1448z00_3535 =
														VECTOR_REF(BgL_arg1449z00_3536, ((long) 2));
												}
												BgL_auxz00_5845 =
													BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
													(BgL_arg1448z00_3535);
											}
											((((BgL_z62exceptionz62_bglt) COBJECT(
															((BgL_z62exceptionz62_bglt)
																BgL_new1080z00_3532)))->BgL_stackz00) =
												((obj_t) BgL_auxz00_5845), BUNSPEC);
										}
										((((BgL_z62errorz62_bglt) COBJECT(BgL_new1080z00_3532))->
												BgL_procz00) =
											((obj_t) BGl_string3142z00zz__errorz00), BUNSPEC);
										((((BgL_z62errorz62_bglt) COBJECT(BgL_new1080z00_3532))->
												BgL_msgz00) =
											((obj_t) BGl_string3143z00zz__errorz00), BUNSPEC);
										((((BgL_z62errorz62_bglt) COBJECT(BgL_new1080z00_3532))->
												BgL_objz00) = ((obj_t) BgL_valz00_16), BUNSPEC);
										BgL_arg1446z00_3531 = BgL_new1080z00_3532;
									}
									BGl_raisez00zz__errorz00(((obj_t) BgL_arg1446z00_3531));
							}}
						else
							{	/* Llib/error.scm 421 */
								BFALSE;
							}
						return BgL_rz00_1740;
					}
				else
					{	/* Llib/error.scm 416 */
						BGl_defaultzd2exceptionzd2handlerz00zz__errorz00(BgL_valz00_16);
						return
							BGl_errorz00zz__errorz00(BGl_string3142z00zz__errorz00,
							BGl_string3144z00zz__errorz00, BgL_valz00_16);
					}
			}
		}

	}



/* &raise */
	obj_t BGl_z62raisez62zz__errorz00(obj_t BgL_envz00_4944,
		obj_t BgL_valz00_4945)
	{
		{	/* Llib/error.scm 414 */
			return BGl_raisez00zz__errorz00(BgL_valz00_4945);
		}

	}



/* default-exception-handler */
	obj_t BGl_defaultzd2exceptionzd2handlerz00zz__errorz00(obj_t BgL_valz00_17)
	{
		{	/* Llib/error.scm 434 */
			BGl_exceptionzd2notifyzd2zz__objectz00(BgL_valz00_17);
			if (BGl_isazf3zf3zz__objectz00(BgL_valz00_17,
					BGl_z62warningz62zz__objectz00))
				{	/* Llib/error.scm 436 */
					BFALSE;
				}
			else
				{	/* Llib/error.scm 437 */
					long BgL_retvalz00_1747;

					if (BGl_isazf3zf3zz__objectz00(BgL_valz00_17,
							BGl_z62errorz62zz__objectz00))
						{	/* Llib/error.scm 437 */
							BgL_retvalz00_1747 = ((long) 1);
						}
					else
						{	/* Llib/error.scm 437 */
							BgL_retvalz00_1747 = ((long) 2);
						}
					{	/* Llib/error.scm 438 */
						obj_t BgL_zc3z04anonymousza31428ze3z87_4946;

						BgL_zc3z04anonymousza31428ze3z87_4946 =
							MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31428ze3ze5zz__errorz00,
							(int) (((long) 1)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31428ze3z87_4946,
							(int) (((long) 0)), BINT(BgL_retvalz00_1747));
						unwind_stack_until(BFALSE, BFALSE,
							BINT(BgL_retvalz00_1747), BgL_zc3z04anonymousza31428ze3z87_4946);
				}}
			return BUNSPEC;
		}

	}



/* &default-exception-handler */
	obj_t BGl_z62defaultzd2exceptionzd2handlerz62zz__errorz00(obj_t
		BgL_envz00_4942, obj_t BgL_valz00_4943)
	{
		{	/* Llib/error.scm 434 */
			return BGl_defaultzd2exceptionzd2handlerz00zz__errorz00(BgL_valz00_4943);
		}

	}



/* &<@anonymous:1428> */
	obj_t BGl_z62zc3z04anonymousza31428ze3ze5zz__errorz00(obj_t BgL_envz00_4947,
		obj_t BgL_xz00_4949)
	{
		{	/* Llib/error.scm 438 */
			{	/* Llib/error.scm 438 */
				long BgL_retvalz00_4948;

				BgL_retvalz00_4948 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4947, (int) (((long) 0))));
				{	/* Llib/error.scm 438 */
					obj_t BgL_tmpz00_5876;

					BgL_tmpz00_5876 = BINT(BgL_retvalz00_4948);
					return BIGLOO_EXIT(BgL_tmpz00_5876);
				}
			}
		}

	}



/* module-init-error */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initzd2errorz00zz__errorz00(char
		*BgL_currentz00_18, char *BgL_fromz00_19)
	{
		{	/* Llib/error.scm 444 */
			{	/* Llib/error.scm 445 */
				obj_t BgL_arg1430z00_1753;

				{	/* Llib/error.scm 445 */
					obj_t BgL_res2670z00_3547;

					{	/* Llib/error.scm 445 */
						obj_t BgL_tmpz00_5879;

						BgL_tmpz00_5879 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2670z00_3547 = BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_5879);
					}
					BgL_arg1430z00_1753 = BgL_res2670z00_3547;
				}
				{	/* Llib/error.scm 445 */
					obj_t BgL_list1431z00_1754;

					{	/* Llib/error.scm 445 */
						obj_t BgL_arg1432z00_1755;

						{	/* Llib/error.scm 445 */
							obj_t BgL_arg1433z00_1756;

							{	/* Llib/error.scm 445 */
								obj_t BgL_arg1434z00_1757;

								{	/* Llib/error.scm 445 */
									obj_t BgL_arg1435z00_1758;

									{	/* Llib/error.scm 445 */
										obj_t BgL_arg1436z00_1759;

										{	/* Llib/error.scm 445 */
											obj_t BgL_arg1437z00_1760;

											{	/* Llib/error.scm 445 */
												obj_t BgL_arg1438z00_1761;

												{	/* Llib/error.scm 445 */
													obj_t BgL_arg1439z00_1762;

													{	/* Llib/error.scm 445 */
														obj_t BgL_arg1440z00_1763;

														{	/* Llib/error.scm 445 */
															obj_t BgL_arg1441z00_1764;

															BgL_arg1441z00_1764 =
																MAKE_YOUNG_PAIR(BGl_string3145z00zz__errorz00,
																BNIL);
															BgL_arg1440z00_1763 =
																MAKE_YOUNG_PAIR(string_to_bstring
																(BgL_fromz00_19), BgL_arg1441z00_1764);
														}
														BgL_arg1439z00_1762 =
															MAKE_YOUNG_PAIR(BGl_string3146z00zz__errorz00,
															BgL_arg1440z00_1763);
													}
													BgL_arg1438z00_1761 =
														MAKE_YOUNG_PAIR(BGl_string3147z00zz__errorz00,
														BgL_arg1439z00_1762);
												}
												BgL_arg1437z00_1760 =
													MAKE_YOUNG_PAIR(string_to_bstring(BgL_fromz00_19),
													BgL_arg1438z00_1761);
											}
											BgL_arg1436z00_1759 =
												MAKE_YOUNG_PAIR(BGl_string3148z00zz__errorz00,
												BgL_arg1437z00_1760);
										}
										BgL_arg1435z00_1758 =
											MAKE_YOUNG_PAIR(string_to_bstring(BgL_currentz00_18),
											BgL_arg1436z00_1759);
									}
									BgL_arg1434z00_1757 =
										MAKE_YOUNG_PAIR(BGl_string3149z00zz__errorz00,
										BgL_arg1435z00_1758);
								}
								BgL_arg1433z00_1756 =
									MAKE_YOUNG_PAIR(BGl_string3150z00zz__errorz00,
									BgL_arg1434z00_1757);
							}
							BgL_arg1432z00_1755 =
								MAKE_YOUNG_PAIR(string_to_bstring(BgL_currentz00_18),
								BgL_arg1433z00_1756);
						}
						BgL_list1431z00_1754 =
							MAKE_YOUNG_PAIR(BGl_string3151z00zz__errorz00,
							BgL_arg1432z00_1755);
					}
					BGl_fprintz00zz__r4_output_6_10_3z00(BgL_arg1430z00_1753,
						BgL_list1431z00_1754);
			}}
			{	/* Llib/error.scm 450 */
				obj_t BgL_tmpz00_5898;

				BgL_tmpz00_5898 = BINT(((long) 1));
				return BIGLOO_EXIT(BgL_tmpz00_5898);
			}
		}

	}



/* &module-init-error */
	obj_t BGl_z62modulezd2initzd2errorz62zz__errorz00(obj_t BgL_envz00_4950,
		obj_t BgL_currentz00_4951, obj_t BgL_fromz00_4952)
	{
		{	/* Llib/error.scm 444 */
			{	/* Llib/error.scm 449 */
				char *BgL_auxz00_5910;
				char *BgL_auxz00_5901;

				{	/* Llib/error.scm 449 */
					obj_t BgL_tmpz00_5911;

					if (STRINGP(BgL_fromz00_4952))
						{	/* Llib/error.scm 449 */
							BgL_tmpz00_5911 = BgL_fromz00_4952;
						}
					else
						{
							obj_t BgL_auxz00_5914;

							BgL_auxz00_5914 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
								BINT(((long) 17806)), BGl_string3152z00zz__errorz00,
								BGl_string3153z00zz__errorz00, BgL_fromz00_4952);
							FAILURE(BgL_auxz00_5914, BFALSE, BFALSE);
						}
					BgL_auxz00_5910 = BSTRING_TO_STRING(BgL_tmpz00_5911);
				}
				{	/* Llib/error.scm 449 */
					obj_t BgL_tmpz00_5902;

					if (STRINGP(BgL_currentz00_4951))
						{	/* Llib/error.scm 449 */
							BgL_tmpz00_5902 = BgL_currentz00_4951;
						}
					else
						{
							obj_t BgL_auxz00_5905;

							BgL_auxz00_5905 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
								BINT(((long) 17806)), BGl_string3152z00zz__errorz00,
								BGl_string3153z00zz__errorz00, BgL_currentz00_4951);
							FAILURE(BgL_auxz00_5905, BFALSE, BFALSE);
						}
					BgL_auxz00_5901 = BSTRING_TO_STRING(BgL_tmpz00_5902);
				}
				return
					BGl_modulezd2initzd2errorz00zz__errorz00(BgL_auxz00_5901,
					BgL_auxz00_5910);
			}
		}

	}



/* error */
	BGL_EXPORTED_DEF obj_t BGl_errorz00zz__errorz00(obj_t BgL_procz00_20,
		obj_t BgL_msgz00_21, obj_t BgL_objz00_22)
	{
		{	/* Llib/error.scm 455 */
			{	/* Llib/error.scm 457 */
				BgL_z62errorz62_bglt BgL_arg1442z00_1765;

				{	/* Llib/error.scm 457 */
					BgL_z62errorz62_bglt BgL_new1078z00_1766;

					{	/* Llib/error.scm 457 */
						BgL_z62errorz62_bglt BgL_new1077z00_1769;

						BgL_new1077z00_1769 =
							((BgL_z62errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_z62errorz62_bgl))));
						{	/* Llib/error.scm 457 */
							long BgL_arg1445z00_1770;

							{	/* Llib/error.scm 457 */
								long BgL_res2671z00_3549;

								BgL_res2671z00_3549 =
									BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00);
								BgL_arg1445z00_1770 = BgL_res2671z00_3549;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1077z00_1769),
								BgL_arg1445z00_1770);
						}
						BgL_new1078z00_1766 = BgL_new1077z00_1769;
					}
					((((BgL_z62exceptionz62_bglt) COBJECT(
									((BgL_z62exceptionz62_bglt) BgL_new1078z00_1766)))->
							BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
					((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
										BgL_new1078z00_1766)))->BgL_locationz00) =
						((obj_t) BFALSE), BUNSPEC);
					{
						obj_t BgL_auxz00_5928;

						{	/* Llib/error.scm 457 */
							obj_t BgL_arg1443z00_1767;

							{	/* Llib/error.scm 457 */
								obj_t BgL_arg1444z00_1768;

								{	/* Llib/error.scm 457 */
									obj_t BgL_res2672z00_3553;

									{	/* Llib/error.scm 457 */
										obj_t BgL_classz00_3552;

										BgL_classz00_3552 = BGl_z62errorz62zz__objectz00;
										BgL_res2672z00_3553 =
											BGL_CLASS_ALL_FIELDS(BgL_classz00_3552);
									}
									BgL_arg1444z00_1768 = BgL_res2672z00_3553;
								}
								BgL_arg1443z00_1767 =
									VECTOR_REF(BgL_arg1444z00_1768, ((long) 2));
							}
							BgL_auxz00_5928 =
								BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
								(BgL_arg1443z00_1767);
						}
						((((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt) BgL_new1078z00_1766)))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_5928), BUNSPEC);
					}
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_1766))->
							BgL_procz00) = ((obj_t) BgL_procz00_20), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_1766))->BgL_msgz00) =
						((obj_t) BgL_msgz00_21), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_1766))->BgL_objz00) =
						((obj_t) BgL_objz00_22), BUNSPEC);
					BgL_arg1442z00_1765 = BgL_new1078z00_1766;
				}
				return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1442z00_1765));
			}
		}

	}



/* &error3076 */
	obj_t BGl_z62error3076z62zz__errorz00(obj_t BgL_envz00_4953,
		obj_t BgL_procz00_4954, obj_t BgL_msgz00_4955, obj_t BgL_objz00_4956)
	{
		{	/* Llib/error.scm 455 */
			return
				BGl_errorz00zz__errorz00(BgL_procz00_4954, BgL_msgz00_4955,
				BgL_objz00_4956);
		}

	}



/* error/location */
	BGL_EXPORTED_DEF obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t
		BgL_procz00_23, obj_t BgL_msgz00_24, obj_t BgL_objz00_25,
		obj_t BgL_fnamez00_26, obj_t BgL_locz00_27)
	{
		{	/* Llib/error.scm 465 */
			{	/* Llib/error.scm 467 */
				BgL_z62errorz62_bglt BgL_arg1446z00_3555;

				{	/* Llib/error.scm 467 */
					BgL_z62errorz62_bglt BgL_new1080z00_3556;

					{	/* Llib/error.scm 468 */
						BgL_z62errorz62_bglt BgL_new1079z00_3557;

						BgL_new1079z00_3557 =
							((BgL_z62errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_z62errorz62_bgl))));
						{	/* Llib/error.scm 468 */
							long BgL_arg1451z00_3558;

							{	/* Llib/error.scm 468 */
								long BgL_res2673z00_3562;

								BgL_res2673z00_3562 =
									BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00);
								BgL_arg1451z00_3558 = BgL_res2673z00_3562;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1079z00_3557),
								BgL_arg1451z00_3558);
						}
						BgL_new1080z00_3556 = BgL_new1079z00_3557;
					}
					((((BgL_z62exceptionz62_bglt) COBJECT(
									((BgL_z62exceptionz62_bglt) BgL_new1080z00_3556)))->
							BgL_fnamez00) = ((obj_t) BgL_fnamez00_26), BUNSPEC);
					((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
										BgL_new1080z00_3556)))->BgL_locationz00) =
						((obj_t) BgL_locz00_27), BUNSPEC);
					{
						obj_t BgL_auxz00_5948;

						{	/* Llib/error.scm 469 */
							obj_t BgL_arg1448z00_3559;

							{	/* Llib/error.scm 469 */
								obj_t BgL_arg1449z00_3560;

								{	/* Llib/error.scm 469 */
									obj_t BgL_res2674z00_3566;

									{	/* Llib/error.scm 469 */
										obj_t BgL_classz00_3565;

										BgL_classz00_3565 = BGl_z62errorz62zz__objectz00;
										BgL_res2674z00_3566 =
											BGL_CLASS_ALL_FIELDS(BgL_classz00_3565);
									}
									BgL_arg1449z00_3560 = BgL_res2674z00_3566;
								}
								BgL_arg1448z00_3559 =
									VECTOR_REF(BgL_arg1449z00_3560, ((long) 2));
							}
							BgL_auxz00_5948 =
								BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
								(BgL_arg1448z00_3559);
						}
						((((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt) BgL_new1080z00_3556)))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_5948), BUNSPEC);
					}
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1080z00_3556))->
							BgL_procz00) = ((obj_t) BgL_procz00_23), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1080z00_3556))->BgL_msgz00) =
						((obj_t) BgL_msgz00_24), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1080z00_3556))->BgL_objz00) =
						((obj_t) BgL_objz00_25), BUNSPEC);
					BgL_arg1446z00_3555 = BgL_new1080z00_3556;
				}
				return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1446z00_3555));
			}
		}

	}



/* &error/location */
	obj_t BGl_z62errorzf2locationz90zz__errorz00(obj_t BgL_envz00_4957,
		obj_t BgL_procz00_4958, obj_t BgL_msgz00_4959, obj_t BgL_objz00_4960,
		obj_t BgL_fnamez00_4961, obj_t BgL_locz00_4962)
	{
		{	/* Llib/error.scm 465 */
			return
				BGl_errorzf2locationzf2zz__errorz00(BgL_procz00_4958, BgL_msgz00_4959,
				BgL_objz00_4960, BgL_fnamez00_4961, BgL_locz00_4962);
		}

	}



/* error/source-location */
	BGL_EXPORTED_DEF obj_t BGl_errorzf2sourcezd2locationz20zz__errorz00(obj_t
		BgL_procz00_28, obj_t BgL_msgz00_29, obj_t BgL_objz00_30,
		obj_t BgL_locz00_31)
	{
		{	/* Llib/error.scm 477 */
			if (PAIRP(BgL_locz00_31))
				{	/* Llib/error.scm 478 */
					obj_t BgL_cdrzd2186zd2_1783;

					BgL_cdrzd2186zd2_1783 = CDR(BgL_locz00_31);
					if ((CAR(BgL_locz00_31) == BGl_symbol3135z00zz__errorz00))
						{	/* Llib/error.scm 478 */
							if (PAIRP(BgL_cdrzd2186zd2_1783))
								{	/* Llib/error.scm 478 */
									obj_t BgL_cdrzd2190zd2_1787;

									BgL_cdrzd2190zd2_1787 = CDR(BgL_cdrzd2186zd2_1783);
									if (PAIRP(BgL_cdrzd2190zd2_1787))
										{	/* Llib/error.scm 478 */
											if (NULLP(CDR(BgL_cdrzd2190zd2_1787)))
												{	/* Llib/error.scm 478 */
													return
														BGl_errorzf2locationzf2zz__errorz00(BgL_procz00_28,
														BgL_msgz00_29, BgL_objz00_30,
														CAR(BgL_cdrzd2186zd2_1783),
														CAR(BgL_cdrzd2190zd2_1787));
												}
											else
												{	/* Llib/error.scm 478 */
													return
														BGl_errorz00zz__errorz00(BgL_procz00_28,
														BgL_msgz00_29, BgL_objz00_30);
												}
										}
									else
										{	/* Llib/error.scm 478 */
											return
												BGl_errorz00zz__errorz00(BgL_procz00_28, BgL_msgz00_29,
												BgL_objz00_30);
										}
								}
							else
								{	/* Llib/error.scm 478 */
									return
										BGl_errorz00zz__errorz00(BgL_procz00_28, BgL_msgz00_29,
										BgL_objz00_30);
								}
						}
					else
						{	/* Llib/error.scm 478 */
							return
								BGl_errorz00zz__errorz00(BgL_procz00_28, BgL_msgz00_29,
								BgL_objz00_30);
						}
				}
			else
				{	/* Llib/error.scm 478 */
					return
						BGl_errorz00zz__errorz00(BgL_procz00_28, BgL_msgz00_29,
						BgL_objz00_30);
				}
		}

	}



/* &error/source-location */
	obj_t BGl_z62errorzf2sourcezd2locationz42zz__errorz00(obj_t BgL_envz00_4963,
		obj_t BgL_procz00_4964, obj_t BgL_msgz00_4965, obj_t BgL_objz00_4966,
		obj_t BgL_locz00_4967)
	{
		{	/* Llib/error.scm 477 */
			return
				BGl_errorzf2sourcezd2locationz20zz__errorz00(BgL_procz00_4964,
				BgL_msgz00_4965, BgL_objz00_4966, BgL_locz00_4967);
		}

	}



/* error/source */
	BGL_EXPORTED_DEF obj_t BGl_errorzf2sourcezf2zz__errorz00(obj_t BgL_procz00_32,
		obj_t BgL_msgz00_33, obj_t BgL_objz00_34, obj_t BgL_sourcez00_35)
	{
		{	/* Llib/error.scm 487 */
			{	/* Llib/error.scm 488 */
				bool_t BgL_test3497z00_5983;

				{	/* Llib/error.scm 488 */
					bool_t BgL_res2682z00_3595;

					BgL_res2682z00_3595 = EPAIRP(BgL_sourcez00_35);
					BgL_test3497z00_5983 = BgL_res2682z00_3595;
				}
				if (BgL_test3497z00_5983)
					{	/* Llib/error.scm 490 */
						obj_t BgL_arg1464z00_3594;

						BgL_arg1464z00_3594 = CER(((obj_t) BgL_sourcez00_35));
						return
							BGl_errorzf2sourcezd2locationz20zz__errorz00(BgL_procz00_32,
							BgL_msgz00_33, BgL_objz00_34, BgL_arg1464z00_3594);
					}
				else
					{	/* Llib/error.scm 488 */
						return
							BGl_errorz00zz__errorz00(BgL_procz00_32, BgL_msgz00_33,
							BgL_objz00_34);
					}
			}
		}

	}



/* &error/source */
	obj_t BGl_z62errorzf2sourcez90zz__errorz00(obj_t BgL_envz00_4968,
		obj_t BgL_procz00_4969, obj_t BgL_msgz00_4970, obj_t BgL_objz00_4971,
		obj_t BgL_sourcez00_4972)
	{
		{	/* Llib/error.scm 487 */
			return
				BGl_errorzf2sourcezf2zz__errorz00(BgL_procz00_4969, BgL_msgz00_4970,
				BgL_objz00_4971, BgL_sourcez00_4972);
		}

	}



/* error/c-location */
	BGL_EXPORTED_DEF obj_t BGl_errorzf2czd2locationz20zz__errorz00(obj_t
		BgL_procz00_36, obj_t BgL_messagez00_37, obj_t BgL_objectz00_38,
		char *BgL_fnamez00_39, long BgL_locz00_40)
	{
		{	/* Llib/error.scm 499 */
			{	/* Llib/error.scm 467 */
				BgL_z62errorz62_bglt BgL_arg1446z00_3597;

				{	/* Llib/error.scm 467 */
					BgL_z62errorz62_bglt BgL_new1080z00_3598;

					{	/* Llib/error.scm 468 */
						BgL_z62errorz62_bglt BgL_new1079z00_3599;

						BgL_new1079z00_3599 =
							((BgL_z62errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_z62errorz62_bgl))));
						{	/* Llib/error.scm 468 */
							long BgL_arg1451z00_3600;

							{	/* Llib/error.scm 468 */
								long BgL_res2683z00_3604;

								BgL_res2683z00_3604 =
									BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00);
								BgL_arg1451z00_3600 = BgL_res2683z00_3604;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1079z00_3599),
								BgL_arg1451z00_3600);
						}
						BgL_new1080z00_3598 = BgL_new1079z00_3599;
					}
					((((BgL_z62exceptionz62_bglt) COBJECT(
									((BgL_z62exceptionz62_bglt) BgL_new1080z00_3598)))->
							BgL_fnamez00) =
						((obj_t) string_to_bstring(BgL_fnamez00_39)), BUNSPEC);
					((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
										BgL_new1080z00_3598)))->BgL_locationz00) =
						((obj_t) BINT(BgL_locz00_40)), BUNSPEC);
					{
						obj_t BgL_auxz00_6000;

						{	/* Llib/error.scm 469 */
							obj_t BgL_arg1448z00_3601;

							{	/* Llib/error.scm 469 */
								obj_t BgL_arg1449z00_3602;

								{	/* Llib/error.scm 469 */
									obj_t BgL_res2684z00_3608;

									{	/* Llib/error.scm 469 */
										obj_t BgL_classz00_3607;

										BgL_classz00_3607 = BGl_z62errorz62zz__objectz00;
										BgL_res2684z00_3608 =
											BGL_CLASS_ALL_FIELDS(BgL_classz00_3607);
									}
									BgL_arg1449z00_3602 = BgL_res2684z00_3608;
								}
								BgL_arg1448z00_3601 =
									VECTOR_REF(BgL_arg1449z00_3602, ((long) 2));
							}
							BgL_auxz00_6000 =
								BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
								(BgL_arg1448z00_3601);
						}
						((((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt) BgL_new1080z00_3598)))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_6000), BUNSPEC);
					}
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1080z00_3598))->
							BgL_procz00) = ((obj_t) BgL_procz00_36), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1080z00_3598))->BgL_msgz00) =
						((obj_t) BgL_messagez00_37), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1080z00_3598))->BgL_objz00) =
						((obj_t) BgL_objectz00_38), BUNSPEC);
					BgL_arg1446z00_3597 = BgL_new1080z00_3598;
				}
				return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1446z00_3597));
			}
		}

	}



/* &error/c-location */
	obj_t BGl_z62errorzf2czd2locationz42zz__errorz00(obj_t BgL_envz00_4973,
		obj_t BgL_procz00_4974, obj_t BgL_messagez00_4975, obj_t BgL_objectz00_4976,
		obj_t BgL_fnamez00_4977, obj_t BgL_locz00_4978)
	{
		{	/* Llib/error.scm 499 */
			{	/* Llib/error.scm 467 */
				long BgL_auxz00_6020;
				char *BgL_auxz00_6011;

				{	/* Llib/error.scm 467 */
					obj_t BgL_tmpz00_6021;

					if (INTEGERP(BgL_locz00_4978))
						{	/* Llib/error.scm 467 */
							BgL_tmpz00_6021 = BgL_locz00_4978;
						}
					else
						{
							obj_t BgL_auxz00_6024;

							BgL_auxz00_6024 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
								BINT(((long) 18439)), BGl_string3154z00zz__errorz00,
								BGl_string3133z00zz__errorz00, BgL_locz00_4978);
							FAILURE(BgL_auxz00_6024, BFALSE, BFALSE);
						}
					BgL_auxz00_6020 = (long) CINT(BgL_tmpz00_6021);
				}
				{	/* Llib/error.scm 467 */
					obj_t BgL_tmpz00_6012;

					if (STRINGP(BgL_fnamez00_4977))
						{	/* Llib/error.scm 467 */
							BgL_tmpz00_6012 = BgL_fnamez00_4977;
						}
					else
						{
							obj_t BgL_auxz00_6015;

							BgL_auxz00_6015 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
								BINT(((long) 18439)), BGl_string3154z00zz__errorz00,
								BGl_string3153z00zz__errorz00, BgL_fnamez00_4977);
							FAILURE(BgL_auxz00_6015, BFALSE, BFALSE);
						}
					BgL_auxz00_6011 = BSTRING_TO_STRING(BgL_tmpz00_6012);
				}
				return
					BGl_errorzf2czd2locationz20zz__errorz00(BgL_procz00_4974,
					BgL_messagez00_4975, BgL_objectz00_4976, BgL_auxz00_6011,
					BgL_auxz00_6020);
			}
		}

	}



/* bigloo-type-error-msg */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00(obj_t
		BgL_prefixz00_41, obj_t BgL_fromz00_42, obj_t BgL_toz00_43)
	{
		{	/* Llib/error.scm 505 */
			{	/* Llib/error.scm 506 */
				obj_t BgL_list1465z00_3610;

				{	/* Llib/error.scm 506 */
					obj_t BgL_arg1466z00_3611;

					{	/* Llib/error.scm 506 */
						obj_t BgL_arg1467z00_3612;

						{	/* Llib/error.scm 506 */
							obj_t BgL_arg1468z00_3613;

							{	/* Llib/error.scm 506 */
								obj_t BgL_arg1469z00_3614;

								{	/* Llib/error.scm 506 */
									obj_t BgL_arg1470z00_3615;

									BgL_arg1470z00_3615 =
										MAKE_YOUNG_PAIR(BGl_string3155z00zz__errorz00, BNIL);
									BgL_arg1469z00_3614 =
										MAKE_YOUNG_PAIR(BgL_toz00_43, BgL_arg1470z00_3615);
								}
								BgL_arg1468z00_3613 =
									MAKE_YOUNG_PAIR(BGl_string3156z00zz__errorz00,
									BgL_arg1469z00_3614);
							}
							BgL_arg1467z00_3612 =
								MAKE_YOUNG_PAIR(BgL_fromz00_42, BgL_arg1468z00_3613);
						}
						BgL_arg1466z00_3611 =
							MAKE_YOUNG_PAIR(BGl_string3157z00zz__errorz00,
							BgL_arg1467z00_3612);
					}
					BgL_list1465z00_3610 =
						MAKE_YOUNG_PAIR(BgL_prefixz00_41, BgL_arg1466z00_3611);
				}
				return
					BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1465z00_3610);
			}
		}

	}



/* &bigloo-type-error-msg */
	obj_t BGl_z62bigloozd2typezd2errorzd2msgzb0zz__errorz00(obj_t BgL_envz00_4979,
		obj_t BgL_prefixz00_4980, obj_t BgL_fromz00_4981, obj_t BgL_toz00_4982)
	{
		{	/* Llib/error.scm 505 */
			{	/* Llib/error.scm 506 */
				obj_t BgL_auxz00_6051;
				obj_t BgL_auxz00_6044;
				obj_t BgL_auxz00_6037;

				if (STRINGP(BgL_toz00_4982))
					{	/* Llib/error.scm 506 */
						BgL_auxz00_6051 = BgL_toz00_4982;
					}
				else
					{
						obj_t BgL_auxz00_6054;

						BgL_auxz00_6054 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
							BINT(((long) 20222)), BGl_string3158z00zz__errorz00,
							BGl_string3153z00zz__errorz00, BgL_toz00_4982);
						FAILURE(BgL_auxz00_6054, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_fromz00_4981))
					{	/* Llib/error.scm 506 */
						BgL_auxz00_6044 = BgL_fromz00_4981;
					}
				else
					{
						obj_t BgL_auxz00_6047;

						BgL_auxz00_6047 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
							BINT(((long) 20222)), BGl_string3158z00zz__errorz00,
							BGl_string3153z00zz__errorz00, BgL_fromz00_4981);
						FAILURE(BgL_auxz00_6047, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_prefixz00_4980))
					{	/* Llib/error.scm 506 */
						BgL_auxz00_6037 = BgL_prefixz00_4980;
					}
				else
					{
						obj_t BgL_auxz00_6040;

						BgL_auxz00_6040 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
							BINT(((long) 20222)), BGl_string3158z00zz__errorz00,
							BGl_string3153z00zz__errorz00, BgL_prefixz00_4980);
						FAILURE(BgL_auxz00_6040, BFALSE, BFALSE);
					}
				return
					BGl_bigloozd2typezd2errorzd2msgzd2zz__errorz00(BgL_auxz00_6037,
					BgL_auxz00_6044, BgL_auxz00_6051);
			}
		}

	}



/* bigloo-type-error */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t
		BgL_procz00_44, obj_t BgL_typez00_45, obj_t BgL_objz00_46)
	{
		{	/* Llib/error.scm 511 */
			{	/* Llib/error.scm 512 */
				obj_t BgL_tyz00_1803;

				if (STRINGP(BgL_typez00_45))
					{	/* Llib/error.scm 513 */
						BgL_tyz00_1803 = BgL_typez00_45;
					}
				else
					{	/* Llib/error.scm 513 */
						if (SYMBOLP(BgL_typez00_45))
							{	/* Llib/error.scm 516 */
								obj_t BgL_res2687z00_3620;

								{	/* Llib/error.scm 516 */
									obj_t BgL_arg2216z00_3619;

									BgL_arg2216z00_3619 = SYMBOL_TO_STRING(BgL_typez00_45);
									BgL_res2687z00_3620 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2216z00_3619);
								}
								BgL_tyz00_1803 = BgL_res2687z00_3620;
							}
						else
							{	/* Llib/error.scm 515 */
								BgL_tyz00_1803 = BGl_string3129z00zz__errorz00;
							}
					}
				{	/* Llib/error.scm 512 */
					obj_t BgL_msgz00_1804;

					{	/* Llib/error.scm 519 */
						obj_t BgL_arg1475z00_1811;

						BgL_arg1475z00_1811 = bgl_typeof(BgL_objz00_46);
						{	/* Llib/error.scm 519 */
							obj_t BgL_res2688z00_3630;

							{	/* Llib/error.scm 506 */
								obj_t BgL_list1465z00_3624;

								{	/* Llib/error.scm 506 */
									obj_t BgL_arg1466z00_3625;

									{	/* Llib/error.scm 506 */
										obj_t BgL_arg1467z00_3626;

										{	/* Llib/error.scm 506 */
											obj_t BgL_arg1468z00_3627;

											{	/* Llib/error.scm 506 */
												obj_t BgL_arg1469z00_3628;

												{	/* Llib/error.scm 506 */
													obj_t BgL_arg1470z00_3629;

													BgL_arg1470z00_3629 =
														MAKE_YOUNG_PAIR(BGl_string3155z00zz__errorz00,
														BNIL);
													BgL_arg1469z00_3628 =
														MAKE_YOUNG_PAIR(BgL_arg1475z00_1811,
														BgL_arg1470z00_3629);
												}
												BgL_arg1468z00_3627 =
													MAKE_YOUNG_PAIR(BGl_string3156z00zz__errorz00,
													BgL_arg1469z00_3628);
											}
											BgL_arg1467z00_3626 =
												MAKE_YOUNG_PAIR(BgL_tyz00_1803, BgL_arg1468z00_3627);
										}
										BgL_arg1466z00_3625 =
											MAKE_YOUNG_PAIR(BGl_string3157z00zz__errorz00,
											BgL_arg1467z00_3626);
									}
									BgL_list1465z00_3624 =
										MAKE_YOUNG_PAIR(BGl_string3130z00zz__errorz00,
										BgL_arg1466z00_3625);
								}
								BgL_res2688z00_3630 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list1465z00_3624);
							}
							BgL_msgz00_1804 = BgL_res2688z00_3630;
						}
					}
					{	/* Llib/error.scm 519 */

						{	/* Llib/error.scm 521 */
							BgL_z62typezd2errorzb0_bglt BgL_arg1471z00_1805;

							{	/* Llib/error.scm 521 */
								BgL_z62typezd2errorzb0_bglt BgL_new1082z00_1806;

								{	/* Llib/error.scm 521 */
									BgL_z62typezd2errorzb0_bglt BgL_new1081z00_1809;

									BgL_new1081z00_1809 =
										((BgL_z62typezd2errorzb0_bglt)
										BOBJECT(GC_MALLOC(sizeof(struct
													BgL_z62typezd2errorzb0_bgl))));
									{	/* Llib/error.scm 521 */
										long BgL_arg1474z00_1810;

										{	/* Llib/error.scm 521 */
											long BgL_res2689z00_3632;

											BgL_res2689z00_3632 =
												BGL_CLASS_INDEX(BGl_z62typezd2errorzb0zz__objectz00);
											BgL_arg1474z00_1810 = BgL_res2689z00_3632;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1081z00_1809),
											BgL_arg1474z00_1810);
									}
									BgL_new1082z00_1806 = BgL_new1081z00_1809;
								}
								((((BgL_z62exceptionz62_bglt) COBJECT(
												((BgL_z62exceptionz62_bglt) BgL_new1082z00_1806)))->
										BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
								((((BgL_z62exceptionz62_bglt)
											COBJECT(((BgL_z62exceptionz62_bglt)
													BgL_new1082z00_1806)))->BgL_locationz00) =
									((obj_t) BFALSE), BUNSPEC);
								{
									obj_t BgL_auxz00_6081;

									{	/* Llib/error.scm 521 */
										obj_t BgL_arg1472z00_1807;

										{	/* Llib/error.scm 521 */
											obj_t BgL_arg1473z00_1808;

											{	/* Llib/error.scm 521 */
												obj_t BgL_res2690z00_3636;

												{	/* Llib/error.scm 521 */
													obj_t BgL_classz00_3635;

													BgL_classz00_3635 =
														BGl_z62typezd2errorzb0zz__objectz00;
													BgL_res2690z00_3636 =
														BGL_CLASS_ALL_FIELDS(BgL_classz00_3635);
												}
												BgL_arg1473z00_1808 = BgL_res2690z00_3636;
											}
											BgL_arg1472z00_1807 =
												VECTOR_REF(BgL_arg1473z00_1808, ((long) 2));
										}
										BgL_auxz00_6081 =
											BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
											(BgL_arg1472z00_1807);
									}
									((((BgL_z62exceptionz62_bglt) COBJECT(
													((BgL_z62exceptionz62_bglt) BgL_new1082z00_1806)))->
											BgL_stackz00) = ((obj_t) BgL_auxz00_6081), BUNSPEC);
								}
								((((BgL_z62errorz62_bglt) COBJECT(
												((BgL_z62errorz62_bglt) BgL_new1082z00_1806)))->
										BgL_procz00) = ((obj_t) BgL_procz00_44), BUNSPEC);
								((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
													BgL_new1082z00_1806)))->BgL_msgz00) =
									((obj_t) BgL_msgz00_1804), BUNSPEC);
								((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
													BgL_new1082z00_1806)))->BgL_objz00) =
									((obj_t) BgL_objz00_46), BUNSPEC);
								((((BgL_z62typezd2errorzb0_bglt) COBJECT(BgL_new1082z00_1806))->
										BgL_typez00) = ((obj_t) BgL_typez00_45), BUNSPEC);
								BgL_arg1471z00_1805 = BgL_new1082z00_1806;
							}
							return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1471z00_1805));
						}
					}
				}
			}
		}

	}



/* &bigloo-type-error */
	obj_t BGl_z62bigloozd2typezd2errorz62zz__errorz00(obj_t BgL_envz00_4983,
		obj_t BgL_procz00_4984, obj_t BgL_typez00_4985, obj_t BgL_objz00_4986)
	{
		{	/* Llib/error.scm 511 */
			return
				BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_procz00_4984,
				BgL_typez00_4985, BgL_objz00_4986);
		}

	}



/* bigloo-type-error/location */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t BgL_procz00_47,
		obj_t BgL_typez00_48, obj_t BgL_objz00_49, obj_t BgL_fnamez00_50,
		obj_t BgL_locz00_51)
	{
		{	/* Llib/error.scm 530 */
			return
				BGl_raisez00zz__errorz00(BGl_typezd2errorzd2zz__errorz00
				(BgL_fnamez00_50, BgL_locz00_51, BgL_procz00_47, BgL_typez00_48,
					BgL_objz00_49));
		}

	}



/* &bigloo-type-error/location */
	obj_t BGl_z62bigloozd2typezd2errorzf2locationz90zz__errorz00(obj_t
		BgL_envz00_4987, obj_t BgL_procz00_4988, obj_t BgL_typez00_4989,
		obj_t BgL_objz00_4990, obj_t BgL_fnamez00_4991, obj_t BgL_locz00_4992)
	{
		{	/* Llib/error.scm 530 */
			return
				BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BgL_procz00_4988,
				BgL_typez00_4989, BgL_objz00_4990, BgL_fnamez00_4991, BgL_locz00_4992);
		}

	}



/* type-error */
	BGL_EXPORTED_DEF obj_t BGl_typezd2errorzd2zz__errorz00(obj_t BgL_fnamez00_52,
		obj_t BgL_locz00_53, obj_t BgL_procz00_54, obj_t BgL_typez00_55,
		obj_t BgL_objz00_56)
	{
		{	/* Llib/error.scm 536 */
			{	/* Llib/error.scm 537 */
				obj_t BgL_tyz00_1815;

				if (STRINGP(BgL_typez00_55))
					{	/* Llib/error.scm 538 */
						BgL_tyz00_1815 = BgL_typez00_55;
					}
				else
					{	/* Llib/error.scm 538 */
						if (SYMBOLP(BgL_typez00_55))
							{	/* Llib/error.scm 539 */
								obj_t BgL_res2693z00_3643;

								{	/* Llib/error.scm 539 */
									obj_t BgL_arg2216z00_3642;

									BgL_arg2216z00_3642 = SYMBOL_TO_STRING(BgL_typez00_55);
									BgL_res2693z00_3643 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2216z00_3642);
								}
								BgL_tyz00_1815 = BgL_res2693z00_3643;
							}
						else
							{	/* Llib/error.scm 539 */
								BgL_tyz00_1815 = BGl_string3129z00zz__errorz00;
							}
					}
				{	/* Llib/error.scm 537 */
					obj_t BgL_msgz00_1816;

					{	/* Llib/error.scm 541 */
						obj_t BgL_arg1484z00_1822;

						BgL_arg1484z00_1822 = bgl_typeof(BgL_objz00_56);
						{	/* Llib/error.scm 541 */
							obj_t BgL_res2694z00_3653;

							{	/* Llib/error.scm 506 */
								obj_t BgL_list1465z00_3647;

								{	/* Llib/error.scm 506 */
									obj_t BgL_arg1466z00_3648;

									{	/* Llib/error.scm 506 */
										obj_t BgL_arg1467z00_3649;

										{	/* Llib/error.scm 506 */
											obj_t BgL_arg1468z00_3650;

											{	/* Llib/error.scm 506 */
												obj_t BgL_arg1469z00_3651;

												{	/* Llib/error.scm 506 */
													obj_t BgL_arg1470z00_3652;

													BgL_arg1470z00_3652 =
														MAKE_YOUNG_PAIR(BGl_string3155z00zz__errorz00,
														BNIL);
													BgL_arg1469z00_3651 =
														MAKE_YOUNG_PAIR(BgL_arg1484z00_1822,
														BgL_arg1470z00_3652);
												}
												BgL_arg1468z00_3650 =
													MAKE_YOUNG_PAIR(BGl_string3156z00zz__errorz00,
													BgL_arg1469z00_3651);
											}
											BgL_arg1467z00_3649 =
												MAKE_YOUNG_PAIR(BgL_tyz00_1815, BgL_arg1468z00_3650);
										}
										BgL_arg1466z00_3648 =
											MAKE_YOUNG_PAIR(BGl_string3157z00zz__errorz00,
											BgL_arg1467z00_3649);
									}
									BgL_list1465z00_3647 =
										MAKE_YOUNG_PAIR(BGl_string3130z00zz__errorz00,
										BgL_arg1466z00_3648);
								}
								BgL_res2694z00_3653 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list1465z00_3647);
							}
							BgL_msgz00_1816 = BgL_res2694z00_3653;
						}
					}
					{	/* Llib/error.scm 541 */

						{	/* Llib/error.scm 542 */
							BgL_z62typezd2errorzb0_bglt BgL_new1084z00_1817;

							{	/* Llib/error.scm 543 */
								BgL_z62typezd2errorzb0_bglt BgL_new1083z00_1820;

								BgL_new1083z00_1820 =
									((BgL_z62typezd2errorzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_z62typezd2errorzb0_bgl))));
								{	/* Llib/error.scm 543 */
									long BgL_arg1483z00_1821;

									{	/* Llib/error.scm 543 */
										long BgL_res2695z00_3655;

										BgL_res2695z00_3655 =
											BGL_CLASS_INDEX(BGl_z62typezd2errorzb0zz__objectz00);
										BgL_arg1483z00_1821 = BgL_res2695z00_3655;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1083z00_1820),
										BgL_arg1483z00_1821);
								}
								BgL_new1084z00_1817 = BgL_new1083z00_1820;
							}
							((((BgL_z62exceptionz62_bglt) COBJECT(
											((BgL_z62exceptionz62_bglt) BgL_new1084z00_1817)))->
									BgL_fnamez00) = ((obj_t) BgL_fnamez00_52), BUNSPEC);
							((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
												BgL_new1084z00_1817)))->BgL_locationz00) =
								((obj_t) BgL_locz00_53), BUNSPEC);
							{
								obj_t BgL_auxz00_6122;

								{	/* Llib/error.scm 544 */
									obj_t BgL_arg1479z00_1818;

									{	/* Llib/error.scm 544 */
										obj_t BgL_arg1480z00_1819;

										{	/* Llib/error.scm 544 */
											obj_t BgL_res2696z00_3659;

											{	/* Llib/error.scm 544 */
												obj_t BgL_classz00_3658;

												BgL_classz00_3658 = BGl_z62typezd2errorzb0zz__objectz00;
												BgL_res2696z00_3659 =
													BGL_CLASS_ALL_FIELDS(BgL_classz00_3658);
											}
											BgL_arg1480z00_1819 = BgL_res2696z00_3659;
										}
										BgL_arg1479z00_1818 =
											VECTOR_REF(BgL_arg1480z00_1819, ((long) 2));
									}
									BgL_auxz00_6122 =
										BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
										(BgL_arg1479z00_1818);
								}
								((((BgL_z62exceptionz62_bglt) COBJECT(
												((BgL_z62exceptionz62_bglt) BgL_new1084z00_1817)))->
										BgL_stackz00) = ((obj_t) BgL_auxz00_6122), BUNSPEC);
							}
							((((BgL_z62errorz62_bglt) COBJECT(
											((BgL_z62errorz62_bglt) BgL_new1084z00_1817)))->
									BgL_procz00) = ((obj_t) BgL_procz00_54), BUNSPEC);
							((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
												BgL_new1084z00_1817)))->BgL_msgz00) =
								((obj_t) BgL_msgz00_1816), BUNSPEC);
							((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
												BgL_new1084z00_1817)))->BgL_objz00) =
								((obj_t) BgL_objz00_56), BUNSPEC);
							((((BgL_z62typezd2errorzb0_bglt) COBJECT(BgL_new1084z00_1817))->
									BgL_typez00) = ((obj_t) BgL_typez00_55), BUNSPEC);
							return ((obj_t) BgL_new1084z00_1817);
						}
					}
				}
			}
		}

	}



/* &type-error3077 */
	obj_t BGl_z62typezd2error3077zb0zz__errorz00(obj_t BgL_envz00_4993,
		obj_t BgL_fnamez00_4994, obj_t BgL_locz00_4995, obj_t BgL_procz00_4996,
		obj_t BgL_typez00_4997, obj_t BgL_objz00_4998)
	{
		{	/* Llib/error.scm 536 */
			return
				BGl_typezd2errorzd2zz__errorz00(BgL_fnamez00_4994, BgL_locz00_4995,
				BgL_procz00_4996, BgL_typez00_4997, BgL_objz00_4998);
		}

	}



/* index-out-of-bounds-error */
	BGL_EXPORTED_DEF obj_t
		BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t BgL_fnamez00_62,
		obj_t BgL_locz00_63, obj_t BgL_procz00_64, obj_t BgL_objz00_65,
		int BgL_lenz00_66, int BgL_iz00_67)
	{
		{	/* Llib/error.scm 570 */
			{	/* Llib/error.scm 571 */
				obj_t BgL_msgz00_1835;

				{	/* Llib/error.scm 576 */
					obj_t BgL_arg1497z00_1841;
					obj_t BgL_arg1498z00_1842;

					{	/* Ieee/fixnum.scm 979 */

						BgL_arg1497z00_1841 =
							BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
							(long) (BgL_iz00_67), ((long) 10));
					}
					{	/* Ieee/fixnum.scm 979 */

						BgL_arg1498z00_1842 =
							BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
							((long) (BgL_lenz00_66) - ((long) 1)), ((long) 10));
					}
					{	/* Llib/error.scm 575 */
						obj_t BgL_list1499z00_1843;

						{	/* Llib/error.scm 575 */
							obj_t BgL_arg1500z00_1844;

							{	/* Llib/error.scm 575 */
								obj_t BgL_arg1502z00_1845;

								{	/* Llib/error.scm 575 */
									obj_t BgL_arg1505z00_1846;

									{	/* Llib/error.scm 575 */
										obj_t BgL_arg1506z00_1847;

										BgL_arg1506z00_1847 =
											MAKE_YOUNG_PAIR(BGl_string3159z00zz__errorz00, BNIL);
										BgL_arg1505z00_1846 =
											MAKE_YOUNG_PAIR(BgL_arg1498z00_1842, BgL_arg1506z00_1847);
									}
									BgL_arg1502z00_1845 =
										MAKE_YOUNG_PAIR(BGl_string3160z00zz__errorz00,
										BgL_arg1505z00_1846);
								}
								BgL_arg1500z00_1844 =
									MAKE_YOUNG_PAIR(BgL_arg1497z00_1841, BgL_arg1502z00_1845);
							}
							BgL_list1499z00_1843 =
								MAKE_YOUNG_PAIR(BGl_string3161z00zz__errorz00,
								BgL_arg1500z00_1844);
						}
						BgL_msgz00_1835 =
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1499z00_1843);
				}}
				{	/* Llib/error.scm 575 */

					{	/* Llib/error.scm 579 */
						BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
							BgL_new1088z00_1836;
						{	/* Llib/error.scm 580 */
							BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt
								BgL_new1087z00_1839;
							BgL_new1087z00_1839 =
								((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
								BOBJECT(GC_MALLOC(sizeof(struct
											BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bgl))));
							{	/* Llib/error.scm 580 */
								long BgL_arg1496z00_1840;

								{	/* Llib/error.scm 580 */
									long BgL_res2706z00_3688;

									BgL_res2706z00_3688 =
										BGL_CLASS_INDEX
										(BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00);
									BgL_arg1496z00_1840 = BgL_res2706z00_3688;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1087z00_1839),
									BgL_arg1496z00_1840);
							}
							BgL_new1088z00_1836 = BgL_new1087z00_1839;
						}
						((((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt) BgL_new1088z00_1836)))->
								BgL_fnamez00) = ((obj_t) BgL_fnamez00_62), BUNSPEC);
						((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
											BgL_new1088z00_1836)))->BgL_locationz00) =
							((obj_t) BgL_locz00_63), BUNSPEC);
						{
							obj_t BgL_auxz00_6156;

							{	/* Llib/error.scm 581 */
								obj_t BgL_arg1494z00_1837;

								{	/* Llib/error.scm 581 */
									obj_t BgL_arg1495z00_1838;

									{	/* Llib/error.scm 581 */
										obj_t BgL_res2707z00_3692;

										{	/* Llib/error.scm 581 */
											obj_t BgL_classz00_3691;

											BgL_classz00_3691 =
												BGl_z62indexzd2outzd2ofzd2boundszd2errorz62zz__objectz00;
											BgL_res2707z00_3692 =
												BGL_CLASS_ALL_FIELDS(BgL_classz00_3691);
										}
										BgL_arg1495z00_1838 = BgL_res2707z00_3692;
									}
									BgL_arg1494z00_1837 =
										VECTOR_REF(BgL_arg1495z00_1838, ((long) 2));
								}
								BgL_auxz00_6156 =
									BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
									(BgL_arg1494z00_1837);
							}
							((((BgL_z62exceptionz62_bglt) COBJECT(
											((BgL_z62exceptionz62_bglt) BgL_new1088z00_1836)))->
									BgL_stackz00) = ((obj_t) BgL_auxz00_6156), BUNSPEC);
						}
						((((BgL_z62errorz62_bglt) COBJECT(
										((BgL_z62errorz62_bglt) BgL_new1088z00_1836)))->
								BgL_procz00) = ((obj_t) BgL_procz00_64), BUNSPEC);
						((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
											BgL_new1088z00_1836)))->BgL_msgz00) =
							((obj_t) BgL_msgz00_1835), BUNSPEC);
						((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
											BgL_new1088z00_1836)))->BgL_objz00) =
							((obj_t) BgL_objz00_65), BUNSPEC);
						((((BgL_z62indexzd2outzd2ofzd2boundszd2errorz62_bglt)
									COBJECT(BgL_new1088z00_1836))->BgL_indexz00) =
							((obj_t) BINT(BgL_lenz00_66)), BUNSPEC);
						return ((obj_t) BgL_new1088z00_1836);
					}
				}
			}
		}

	}



/* &index-out-of-bounds3078 */
	obj_t BGl_z62indexzd2outzd2ofzd2bounds3078zb0zz__errorz00(obj_t
		BgL_envz00_4999, obj_t BgL_fnamez00_5000, obj_t BgL_locz00_5001,
		obj_t BgL_procz00_5002, obj_t BgL_objz00_5003, obj_t BgL_lenz00_5004,
		obj_t BgL_iz00_5005)
	{
		{	/* Llib/error.scm 570 */
			{	/* Llib/error.scm 571 */
				int BgL_auxz00_6180;
				int BgL_auxz00_6171;

				{	/* Llib/error.scm 571 */
					obj_t BgL_tmpz00_6181;

					if (INTEGERP(BgL_iz00_5005))
						{	/* Llib/error.scm 571 */
							BgL_tmpz00_6181 = BgL_iz00_5005;
						}
					else
						{
							obj_t BgL_auxz00_6184;

							BgL_auxz00_6184 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
								BINT(((long) 22564)), BGl_string3162z00zz__errorz00,
								BGl_string3133z00zz__errorz00, BgL_iz00_5005);
							FAILURE(BgL_auxz00_6184, BFALSE, BFALSE);
						}
					BgL_auxz00_6180 = CINT(BgL_tmpz00_6181);
				}
				{	/* Llib/error.scm 571 */
					obj_t BgL_tmpz00_6172;

					if (INTEGERP(BgL_lenz00_5004))
						{	/* Llib/error.scm 571 */
							BgL_tmpz00_6172 = BgL_lenz00_5004;
						}
					else
						{
							obj_t BgL_auxz00_6175;

							BgL_auxz00_6175 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
								BINT(((long) 22564)), BGl_string3162z00zz__errorz00,
								BGl_string3133z00zz__errorz00, BgL_lenz00_5004);
							FAILURE(BgL_auxz00_6175, BFALSE, BFALSE);
						}
					BgL_auxz00_6171 = CINT(BgL_tmpz00_6172);
				}
				return
					BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00
					(BgL_fnamez00_5000, BgL_locz00_5001, BgL_procz00_5002,
					BgL_objz00_5003, BgL_auxz00_6171, BgL_auxz00_6180);
			}
		}

	}



/* warning */
	BGL_EXPORTED_DEF obj_t BGl_warningz00zz__errorz00(obj_t BgL_argsz00_68)
	{
		{	/* Llib/error.scm 590 */
			{	/* Llib/error.scm 592 */
				BgL_z62warningz62_bglt BgL_arg1511z00_1858;

				{	/* Llib/error.scm 592 */
					BgL_z62warningz62_bglt BgL_new1090z00_1859;

					{	/* Llib/error.scm 592 */
						BgL_z62warningz62_bglt BgL_new1089z00_1862;

						BgL_new1089z00_1862 =
							((BgL_z62warningz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_z62warningz62_bgl))));
						{	/* Llib/error.scm 592 */
							long BgL_arg1514z00_1863;

							{	/* Llib/error.scm 592 */
								long BgL_res2708z00_3695;

								BgL_res2708z00_3695 =
									BGL_CLASS_INDEX(BGl_z62warningz62zz__objectz00);
								BgL_arg1514z00_1863 = BgL_res2708z00_3695;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1089z00_1862),
								BgL_arg1514z00_1863);
						}
						BgL_new1090z00_1859 = BgL_new1089z00_1862;
					}
					((((BgL_z62exceptionz62_bglt) COBJECT(
									((BgL_z62exceptionz62_bglt) BgL_new1090z00_1859)))->
							BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
					((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
										BgL_new1090z00_1859)))->BgL_locationz00) =
						((obj_t) BFALSE), BUNSPEC);
					{
						obj_t BgL_auxz00_6198;

						{	/* Llib/error.scm 592 */
							obj_t BgL_arg1512z00_1860;

							{	/* Llib/error.scm 592 */
								obj_t BgL_arg1513z00_1861;

								{	/* Llib/error.scm 592 */
									obj_t BgL_res2709z00_3699;

									{	/* Llib/error.scm 592 */
										obj_t BgL_classz00_3698;

										BgL_classz00_3698 = BGl_z62warningz62zz__objectz00;
										BgL_res2709z00_3699 =
											BGL_CLASS_ALL_FIELDS(BgL_classz00_3698);
									}
									BgL_arg1513z00_1861 = BgL_res2709z00_3699;
								}
								BgL_arg1512z00_1860 =
									VECTOR_REF(BgL_arg1513z00_1861, ((long) 2));
							}
							BgL_auxz00_6198 =
								BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
								(BgL_arg1512z00_1860);
						}
						((((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt) BgL_new1090z00_1859)))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_6198), BUNSPEC);
					}
					((((BgL_z62warningz62_bglt) COBJECT(BgL_new1090z00_1859))->
							BgL_argsz00) = ((obj_t) BgL_argsz00_68), BUNSPEC);
					BgL_arg1511z00_1858 = BgL_new1090z00_1859;
				}
				return
					BGl_warningzd2notifyzd2zz__errorz00(((obj_t) BgL_arg1511z00_1858));
			}
		}

	}



/* &warning3079 */
	obj_t BGl_z62warning3079z62zz__errorz00(obj_t BgL_envz00_5006,
		obj_t BgL_argsz00_5007)
	{
		{	/* Llib/error.scm 590 */
			return BGl_warningz00zz__errorz00(BgL_argsz00_5007);
		}

	}



/* warning/location */
	BGL_EXPORTED_DEF obj_t BGl_warningzf2locationzf2zz__errorz00(obj_t
		BgL_fnamez00_69, obj_t BgL_locz00_70, obj_t BgL_argsz00_71)
	{
		{	/* Llib/error.scm 597 */
			{	/* Llib/error.scm 599 */
				BgL_z62warningz62_bglt BgL_arg1515z00_3701;

				{	/* Llib/error.scm 599 */
					BgL_z62warningz62_bglt BgL_new1092z00_3702;

					{	/* Llib/error.scm 599 */
						BgL_z62warningz62_bglt BgL_new1091z00_3703;

						BgL_new1091z00_3703 =
							((BgL_z62warningz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_z62warningz62_bgl))));
						{	/* Llib/error.scm 599 */
							long BgL_arg1519z00_3704;

							{	/* Llib/error.scm 599 */
								long BgL_res2710z00_3708;

								BgL_res2710z00_3708 =
									BGL_CLASS_INDEX(BGl_z62warningz62zz__objectz00);
								BgL_arg1519z00_3704 = BgL_res2710z00_3708;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1091z00_3703),
								BgL_arg1519z00_3704);
						}
						BgL_new1092z00_3702 = BgL_new1091z00_3703;
					}
					((((BgL_z62exceptionz62_bglt) COBJECT(
									((BgL_z62exceptionz62_bglt) BgL_new1092z00_3702)))->
							BgL_fnamez00) = ((obj_t) BgL_fnamez00_69), BUNSPEC);
					((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
										BgL_new1092z00_3702)))->BgL_locationz00) =
						((obj_t) BgL_locz00_70), BUNSPEC);
					{
						obj_t BgL_auxz00_6216;

						{	/* Llib/error.scm 599 */
							obj_t BgL_arg1516z00_3705;

							{	/* Llib/error.scm 599 */
								obj_t BgL_arg1518z00_3706;

								{	/* Llib/error.scm 599 */
									obj_t BgL_res2711z00_3712;

									{	/* Llib/error.scm 599 */
										obj_t BgL_classz00_3711;

										BgL_classz00_3711 = BGl_z62warningz62zz__objectz00;
										BgL_res2711z00_3712 =
											BGL_CLASS_ALL_FIELDS(BgL_classz00_3711);
									}
									BgL_arg1518z00_3706 = BgL_res2711z00_3712;
								}
								BgL_arg1516z00_3705 =
									VECTOR_REF(BgL_arg1518z00_3706, ((long) 2));
							}
							BgL_auxz00_6216 =
								BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
								(BgL_arg1516z00_3705);
						}
						((((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt) BgL_new1092z00_3702)))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_6216), BUNSPEC);
					}
					((((BgL_z62warningz62_bglt) COBJECT(BgL_new1092z00_3702))->
							BgL_argsz00) = ((obj_t) BgL_argsz00_71), BUNSPEC);
					BgL_arg1515z00_3701 = BgL_new1092z00_3702;
				}
				return
					BGl_warningzd2notifyzd2zz__errorz00(((obj_t) BgL_arg1515z00_3701));
			}
		}

	}



/* &warning/location */
	obj_t BGl_z62warningzf2locationz90zz__errorz00(obj_t BgL_envz00_5008,
		obj_t BgL_fnamez00_5009, obj_t BgL_locz00_5010, obj_t BgL_argsz00_5011)
	{
		{	/* Llib/error.scm 597 */
			return
				BGl_warningzf2locationzf2zz__errorz00(BgL_fnamez00_5009,
				BgL_locz00_5010, BgL_argsz00_5011);
		}

	}



/* warning/loc */
	BGL_EXPORTED_DEF obj_t BGl_warningzf2loczf2zz__errorz00(obj_t BgL_locz00_72,
		obj_t BgL_argsz00_73)
	{
		{	/* Llib/error.scm 604 */
			if (PAIRP(BgL_locz00_72))
				{	/* Llib/error.scm 605 */
					obj_t BgL_cdrzd2204zd2_1876;

					BgL_cdrzd2204zd2_1876 = CDR(BgL_locz00_72);
					if ((CAR(BgL_locz00_72) == BGl_symbol3135z00zz__errorz00))
						{	/* Llib/error.scm 605 */
							if (PAIRP(BgL_cdrzd2204zd2_1876))
								{	/* Llib/error.scm 605 */
									obj_t BgL_cdrzd2208zd2_1880;

									BgL_cdrzd2208zd2_1880 = CDR(BgL_cdrzd2204zd2_1876);
									if (PAIRP(BgL_cdrzd2208zd2_1880))
										{	/* Llib/error.scm 605 */
											if (NULLP(CDR(BgL_cdrzd2208zd2_1880)))
												{	/* Llib/error.scm 605 */
													obj_t BgL_arg1528z00_1884;
													obj_t BgL_arg1530z00_1885;

													BgL_arg1528z00_1884 = CAR(BgL_cdrzd2204zd2_1876);
													BgL_arg1530z00_1885 = CAR(BgL_cdrzd2208zd2_1880);
													{	/* Llib/error.scm 607 */
														obj_t BgL_list1533z00_3729;

														{	/* Llib/error.scm 607 */
															obj_t BgL_arg1534z00_3730;

															BgL_arg1534z00_3730 =
																MAKE_YOUNG_PAIR(BgL_argsz00_73, BNIL);
															BgL_list1533z00_3729 =
																MAKE_YOUNG_PAIR(BgL_arg1530z00_1885,
																BgL_arg1534z00_3730);
														}
														return
															BGl_applyz00zz__r4_control_features_6_9z00
															(BGl_warningzf2locationzd2envz20zz__errorz00,
															BgL_arg1528z00_1884, BgL_list1533z00_3729);
													}
												}
											else
												{	/* Llib/error.scm 605 */
													return BGl_warningz00zz__errorz00(BgL_argsz00_73);
												}
										}
									else
										{	/* Llib/error.scm 605 */
											return BGl_warningz00zz__errorz00(BgL_argsz00_73);
										}
								}
							else
								{	/* Llib/error.scm 605 */
									return BGl_warningz00zz__errorz00(BgL_argsz00_73);
								}
						}
					else
						{	/* Llib/error.scm 605 */
							return BGl_warningz00zz__errorz00(BgL_argsz00_73);
						}
				}
			else
				{	/* Llib/error.scm 605 */
					return BGl_warningz00zz__errorz00(BgL_argsz00_73);
				}
		}

	}



/* &warning/loc */
	obj_t BGl_z62warningzf2locz90zz__errorz00(obj_t BgL_envz00_5012,
		obj_t BgL_locz00_5013, obj_t BgL_argsz00_5014)
	{
		{	/* Llib/error.scm 604 */
			return
				BGl_warningzf2loczf2zz__errorz00(BgL_locz00_5013, BgL_argsz00_5014);
		}

	}



/* warning/c-location */
	BGL_EXPORTED_DEF obj_t BGl_warningzf2czd2locationz20zz__errorz00(char
		*BgL_fnamez00_74, long BgL_locz00_75, obj_t BgL_argsz00_76)
	{
		{	/* Llib/error.scm 618 */
			{	/* Llib/error.scm 619 */
				obj_t BgL_list1536z00_3736;

				{	/* Llib/error.scm 619 */
					obj_t BgL_arg1537z00_3737;

					BgL_arg1537z00_3737 = MAKE_YOUNG_PAIR(BgL_argsz00_76, BNIL);
					BgL_list1536z00_3736 =
						MAKE_YOUNG_PAIR(BINT(BgL_locz00_75), BgL_arg1537z00_3737);
				}
				return
					BGl_applyz00zz__r4_control_features_6_9z00
					(BGl_warningzf2locationzd2envz20zz__errorz00,
					string_to_bstring(BgL_fnamez00_74), BgL_list1536z00_3736);
			}
		}

	}



/* &warning/c-location */
	obj_t BGl_z62warningzf2czd2locationz42zz__errorz00(obj_t BgL_envz00_5015,
		obj_t BgL_fnamez00_5016, obj_t BgL_locz00_5017, obj_t BgL_argsz00_5018)
	{
		{	/* Llib/error.scm 618 */
			{	/* Llib/error.scm 619 */
				long BgL_auxz00_6265;
				char *BgL_auxz00_6256;

				{	/* Llib/error.scm 619 */
					obj_t BgL_tmpz00_6266;

					if (INTEGERP(BgL_locz00_5017))
						{	/* Llib/error.scm 619 */
							BgL_tmpz00_6266 = BgL_locz00_5017;
						}
					else
						{
							obj_t BgL_auxz00_6269;

							BgL_auxz00_6269 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
								BINT(((long) 24551)), BGl_string3163z00zz__errorz00,
								BGl_string3133z00zz__errorz00, BgL_locz00_5017);
							FAILURE(BgL_auxz00_6269, BFALSE, BFALSE);
						}
					BgL_auxz00_6265 = (long) CINT(BgL_tmpz00_6266);
				}
				{	/* Llib/error.scm 619 */
					obj_t BgL_tmpz00_6257;

					if (STRINGP(BgL_fnamez00_5016))
						{	/* Llib/error.scm 619 */
							BgL_tmpz00_6257 = BgL_fnamez00_5016;
						}
					else
						{
							obj_t BgL_auxz00_6260;

							BgL_auxz00_6260 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
								BINT(((long) 24551)), BGl_string3163z00zz__errorz00,
								BGl_string3153z00zz__errorz00, BgL_fnamez00_5016);
							FAILURE(BgL_auxz00_6260, BFALSE, BFALSE);
						}
					BgL_auxz00_6256 = BSTRING_TO_STRING(BgL_tmpz00_6257);
				}
				return
					BGl_warningzf2czd2locationz20zz__errorz00(BgL_auxz00_6256,
					BgL_auxz00_6265, BgL_argsz00_5018);
			}
		}

	}



/* notify-&error */
	obj_t BGl_notifyzd2z62errorzb0zz__errorz00(BgL_z62errorz62_bglt BgL_errz00_77)
	{
		{	/* Llib/error.scm 624 */
			{	/* Llib/error.scm 625 */
				obj_t BgL_portz00_1893;

				{	/* Llib/error.scm 625 */
					obj_t BgL_res2717z00_3739;

					{	/* Llib/error.scm 625 */
						obj_t BgL_tmpz00_6275;

						BgL_tmpz00_6275 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2717z00_3739 = BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6275);
					}
					BgL_portz00_1893 = BgL_res2717z00_3739;
				}
				bgl_flush_output_port(BgL_portz00_1893);
				{	/* Llib/error.scm 628 */
					obj_t BgL_list1538z00_1895;

					BgL_list1538z00_1895 = MAKE_YOUNG_PAIR(BgL_portz00_1893, BNIL);
					BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3151z00zz__errorz00,
						BgL_list1538z00_1895);
				}
				BGl_displayzd2circlezd2zz__pp_circlez00(
					(((BgL_z62errorz62_bglt) COBJECT(BgL_errz00_77))->BgL_procz00),
					BgL_portz00_1893);
				{	/* Llib/error.scm 630 */
					obj_t BgL_list1541z00_1897;

					BgL_list1541z00_1897 = MAKE_YOUNG_PAIR(BgL_portz00_1893, BNIL);
					BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3164z00zz__errorz00,
						BgL_list1541z00_1897);
				}
				BGl_displayzd2circlezd2zz__pp_circlez00(
					(((BgL_z62errorz62_bglt) COBJECT(BgL_errz00_77))->BgL_msgz00),
					BgL_portz00_1893);
				{	/* Llib/error.scm 632 */
					obj_t BgL_list1543z00_1899;

					BgL_list1543z00_1899 = MAKE_YOUNG_PAIR(BgL_portz00_1893, BNIL);
					BGl_displayz00zz__r4_output_6_10_3z00(BGl_string3165z00zz__errorz00,
						BgL_list1543z00_1899);
				}
				BGl_displayzd2circlezd2zz__pp_circlez00(
					(((BgL_z62errorz62_bglt) COBJECT(BgL_errz00_77))->BgL_objz00),
					BgL_portz00_1893);
				{	/* Llib/error.scm 634 */
					obj_t BgL_list1545z00_1901;

					BgL_list1545z00_1901 = MAKE_YOUNG_PAIR(BgL_portz00_1893, BNIL);
					BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1545z00_1901);
				}
				{	/* Llib/error.scm 635 */
					obj_t BgL_arg1546z00_1902;

					{	/* Llib/error.scm 635 */
						obj_t BgL__ortest_1094z00_1906;

						BgL__ortest_1094z00_1906 =
							(((BgL_z62exceptionz62_bglt) COBJECT(
									((BgL_z62exceptionz62_bglt) BgL_errz00_77)))->BgL_stackz00);
						if (CBOOL(BgL__ortest_1094z00_1906))
							{	/* Llib/error.scm 635 */
								BgL_arg1546z00_1902 = BgL__ortest_1094z00_1906;
							}
						else
							{	/* Llib/error.scm 635 */

								{	/* Llib/error.scm 635 */

									BgL_arg1546z00_1902 =
										BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
								}
							}
					}
					{	/* Llib/error.scm 248 */

						BGl_displayzd2tracezd2stackz00zz__errorz00(BgL_arg1546z00_1902,
							BgL_portz00_1893, BINT(((long) 1)));
				}}
				return bgl_flush_output_port(BgL_portz00_1893);
			}
		}

	}



/* notify-&error/location-no-loc */
	obj_t
		BGl_notifyzd2z62errorzf2locationzd2nozd2locz42zz__errorz00
		(BgL_z62errorz62_bglt BgL_errz00_78)
	{
		{	/* Llib/error.scm 641 */
			{	/* Llib/error.scm 642 */
				obj_t BgL_portz00_1908;

				{	/* Llib/error.scm 642 */
					obj_t BgL_res2718z00_3743;

					{	/* Llib/error.scm 642 */
						obj_t BgL_tmpz00_6301;

						BgL_tmpz00_6301 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2718z00_3743 = BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6301);
					}
					BgL_portz00_1908 = BgL_res2718z00_3743;
				}
				bgl_flush_output_port(BgL_portz00_1908);
				{	/* Llib/error.scm 645 */
					obj_t BgL_list1547z00_1910;

					BgL_list1547z00_1910 = MAKE_YOUNG_PAIR(BgL_portz00_1908, BNIL);
					BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1547z00_1910);
				}
				{	/* Llib/error.scm 646 */
					obj_t BgL_arg1551z00_1911;
					obj_t BgL_arg1552z00_1912;

					BgL_arg1551z00_1911 =
						(((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_errz00_78)))->BgL_fnamez00);
					BgL_arg1552z00_1912 =
						(((BgL_z62exceptionz62_bglt) COBJECT(
								((BgL_z62exceptionz62_bglt) BgL_errz00_78)))->BgL_locationz00);
					{	/* Llib/error.scm 646 */
						obj_t BgL_list1553z00_1913;

						{	/* Llib/error.scm 646 */
							obj_t BgL_arg1554z00_1914;

							{	/* Llib/error.scm 646 */
								obj_t BgL_arg1556z00_1915;

								{	/* Llib/error.scm 646 */
									obj_t BgL_arg1557z00_1916;

									{	/* Llib/error.scm 646 */
										obj_t BgL_arg1558z00_1917;

										BgL_arg1558z00_1917 =
											MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ':')), BNIL);
										BgL_arg1557z00_1916 =
											MAKE_YOUNG_PAIR(BgL_arg1552z00_1912, BgL_arg1558z00_1917);
									}
									BgL_arg1556z00_1915 =
										MAKE_YOUNG_PAIR(BGl_string3166z00zz__errorz00,
										BgL_arg1557z00_1916);
								}
								BgL_arg1554z00_1914 =
									MAKE_YOUNG_PAIR(BgL_arg1551z00_1911, BgL_arg1556z00_1915);
							}
							BgL_list1553z00_1913 =
								MAKE_YOUNG_PAIR(BGl_string3167z00zz__errorz00,
								BgL_arg1554z00_1914);
						}
						BGl_fprintz00zz__r4_output_6_10_3z00(BgL_portz00_1908,
							BgL_list1553z00_1913);
				}}
				return BGl_notifyzd2z62errorzb0zz__errorz00(BgL_errz00_78);
			}
		}

	}



/* notify-&error/location-loc */
	obj_t
		BGl_notifyzd2z62errorzf2locationzd2locz90zz__errorz00(BgL_z62errorz62_bglt
		BgL_errz00_79, obj_t BgL_fnamez00_80, obj_t BgL_linez00_81,
		obj_t BgL_locz00_82, obj_t BgL_stringz00_83, obj_t BgL_colz00_84)
	{
		{	/* Llib/error.scm 652 */
			{	/* Llib/error.scm 654 */
				obj_t BgL_portz00_1919;

				{	/* Llib/error.scm 654 */
					obj_t BgL_res2719z00_3746;

					{	/* Llib/error.scm 654 */
						obj_t BgL_tmpz00_6319;

						BgL_tmpz00_6319 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2719z00_3746 = BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6319);
					}
					BgL_portz00_1919 = BgL_res2719z00_3746;
				}
				bgl_flush_output_port(BgL_portz00_1919);
				{	/* Llib/error.scm 657 */
					obj_t BgL_list1559z00_1920;

					BgL_list1559z00_1920 = MAKE_YOUNG_PAIR(BgL_portz00_1919, BNIL);
					BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1559z00_1920);
				}
				{	/* Llib/error.scm 658 */
					obj_t BgL_spacezd2stringzd2_1921;

					if (((long) CINT(BgL_colz00_84) > ((long) 0)))
						{	/* Llib/error.scm 658 */
							BgL_spacezd2stringzd2_1921 =
								make_string((long) CINT(BgL_colz00_84), ((unsigned char) ' '));
						}
					else
						{	/* Llib/error.scm 658 */
							BgL_spacezd2stringzd2_1921 = BGl_string3168z00zz__errorz00;
						}
					{	/* Llib/error.scm 658 */
						long BgL_lz00_1922;

						BgL_lz00_1922 = STRING_LENGTH(((obj_t) BgL_stringz00_83));
						{	/* Llib/error.scm 659 */
							obj_t BgL_nzd2colzd2_1923;

							if (((long) CINT(BgL_colz00_84) >= BgL_lz00_1922))
								{	/* Llib/error.scm 660 */
									BgL_nzd2colzd2_1923 = BINT(BgL_lz00_1922);
								}
							else
								{	/* Llib/error.scm 660 */
									BgL_nzd2colzd2_1923 = BgL_colz00_84;
								}
							{	/* Llib/error.scm 660 */

								BGl_fixzd2tabulationz12zc0zz__errorz00(BgL_nzd2colzd2_1923,
									BgL_stringz00_83, BgL_spacezd2stringzd2_1921);
								BGl_printzd2cursorzd2zz__errorz00(BgL_fnamez00_80,
									BgL_linez00_81, BgL_locz00_82, BgL_stringz00_83,
									BgL_spacezd2stringzd2_1921);
								{	/* Llib/error.scm 666 */
									obj_t BgL_list1560z00_1924;

									BgL_list1560z00_1924 =
										MAKE_YOUNG_PAIR(BgL_portz00_1919, BNIL);
									BGl_displayz00zz__r4_output_6_10_3z00
										(BGl_string3151z00zz__errorz00, BgL_list1560z00_1924);
								}
								BGl_displayzd2circlezd2zz__pp_circlez00(
									(((BgL_z62errorz62_bglt) COBJECT(BgL_errz00_79))->
										BgL_procz00), BgL_portz00_1919);
								{	/* Llib/error.scm 668 */
									obj_t BgL_list1562z00_1926;

									BgL_list1562z00_1926 =
										MAKE_YOUNG_PAIR(BgL_portz00_1919, BNIL);
									BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1562z00_1926);
								}
								BGl_displayzd2circlezd2zz__pp_circlez00(
									(((BgL_z62errorz62_bglt) COBJECT(BgL_errz00_79))->BgL_msgz00),
									BgL_portz00_1919);
								{	/* Llib/error.scm 670 */
									obj_t BgL_list1564z00_1928;

									BgL_list1564z00_1928 =
										MAKE_YOUNG_PAIR(BgL_portz00_1919, BNIL);
									BGl_displayz00zz__r4_output_6_10_3z00
										(BGl_string3165z00zz__errorz00, BgL_list1564z00_1928);
								}
								BGl_displayzd2circlezd2zz__pp_circlez00(
									(((BgL_z62errorz62_bglt) COBJECT(BgL_errz00_79))->BgL_objz00),
									BgL_portz00_1919);
								{	/* Llib/error.scm 672 */
									obj_t BgL_list1566z00_1930;

									BgL_list1566z00_1930 =
										MAKE_YOUNG_PAIR(BgL_portz00_1919, BNIL);
									BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1566z00_1930);
								}
								{	/* Llib/error.scm 673 */
									obj_t BgL_arg1567z00_1931;

									{	/* Llib/error.scm 673 */
										obj_t BgL__ortest_1097z00_1935;

										BgL__ortest_1097z00_1935 =
											(((BgL_z62exceptionz62_bglt) COBJECT(
													((BgL_z62exceptionz62_bglt) BgL_errz00_79)))->
											BgL_stackz00);
										if (CBOOL(BgL__ortest_1097z00_1935))
											{	/* Llib/error.scm 673 */
												BgL_arg1567z00_1931 = BgL__ortest_1097z00_1935;
											}
										else
											{	/* Llib/error.scm 673 */

												{	/* Llib/error.scm 673 */

													BgL_arg1567z00_1931 =
														BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
												}
											}
									}
									{	/* Llib/error.scm 248 */

										BGl_displayzd2tracezd2stackz00zz__errorz00
											(BgL_arg1567z00_1931, BgL_portz00_1919, BINT(((long) 1)));
								}}
								return bgl_flush_output_port(BgL_portz00_1919);
							}
						}
					}
				}
			}
		}

	}



/* notify-&error/loc */
	obj_t BGl_notifyzd2z62errorzf2locz42zz__errorz00(BgL_z62errorz62_bglt
		BgL_errz00_85, obj_t BgL_fnamez00_86, obj_t BgL_locz00_87)
	{
		{	/* Llib/error.scm 680 */
			{	/* Llib/error.scm 681 */
				bool_t BgL_test3520z00_6360;

				if (STRINGP(BgL_fnamez00_86))
					{	/* Llib/error.scm 681 */
						if (INTEGERP(BgL_locz00_87))
							{	/* Llib/error.scm 681 */
								BgL_test3520z00_6360 = ((bool_t) 0);
							}
						else
							{	/* Llib/error.scm 681 */
								BgL_test3520z00_6360 = ((bool_t) 1);
							}
					}
				else
					{	/* Llib/error.scm 681 */
						BgL_test3520z00_6360 = ((bool_t) 1);
					}
				if (BgL_test3520z00_6360)
					{	/* Llib/error.scm 681 */
						return BGl_notifyzd2z62errorzb0zz__errorz00(BgL_errz00_85);
					}
				else
					{	/* Llib/error.scm 683 */
						obj_t BgL_filez00_1942;

						{	/* Llib/error.scm 684 */
							obj_t BgL_arg1573z00_1946;

							{	/* Llib/error.scm 684 */
								obj_t BgL_list1574z00_1947;

								{	/* Llib/error.scm 684 */
									obj_t BgL_arg1575z00_1948;

									{	/* Llib/error.scm 684 */
										obj_t BgL_arg1577z00_1949;

										BgL_arg1577z00_1949 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_arg1575z00_1948 =
											MAKE_YOUNG_PAIR(BgL_locz00_87, BgL_arg1577z00_1949);
									}
									BgL_list1574z00_1947 =
										MAKE_YOUNG_PAIR(BgL_fnamez00_86, BgL_arg1575z00_1948);
								}
								BgL_arg1573z00_1946 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BGl_symbol3135z00zz__errorz00, BgL_list1574z00_1947);
							}
							BgL_filez00_1942 =
								BGl_locationzd2linezd2numz00zz__errorz00(BgL_arg1573z00_1946);
						}
						{	/* Llib/error.scm 684 */
							obj_t BgL_lnumz00_1943;
							obj_t BgL_lpointz00_1944;
							obj_t BgL_lstringz00_1945;

							{	/* Llib/error.scm 685 */
								int BgL_tmpz00_6371;

								BgL_tmpz00_6371 = (int) (((long) 1));
								BgL_lnumz00_1943 = BGL_MVALUES_VAL(BgL_tmpz00_6371);
							}
							{	/* Llib/error.scm 685 */
								int BgL_tmpz00_6374;

								BgL_tmpz00_6374 = (int) (((long) 2));
								BgL_lpointz00_1944 = BGL_MVALUES_VAL(BgL_tmpz00_6374);
							}
							{	/* Llib/error.scm 685 */
								int BgL_tmpz00_6377;

								BgL_tmpz00_6377 = (int) (((long) 3));
								BgL_lstringz00_1945 = BGL_MVALUES_VAL(BgL_tmpz00_6377);
							}
							if (CBOOL(BgL_lnumz00_1943))
								{	/* Llib/error.scm 685 */
									return
										BGl_notifyzd2z62errorzf2locationzd2locz90zz__errorz00
										(BgL_errz00_85, BgL_fnamez00_86, BgL_lnumz00_1943,
										BgL_locz00_87, BgL_lstringz00_1945, BgL_lpointz00_1944);
								}
							else
								{	/* Llib/error.scm 685 */
									return
										BGl_notifyzd2z62errorzf2locationzd2nozd2locz42zz__errorz00
										(BgL_errz00_85);
								}
						}
					}
			}
		}

	}



/* open-for-error */
	obj_t BGl_openzd2forzd2errorz00zz__errorz00(obj_t BgL_fnamez00_88)
	{
		{	/* Llib/error.scm 692 */
			if (fexists(BSTRING_TO_STRING(BgL_fnamez00_88)))
				{	/* Ieee/port.scm 440 */

					return
						BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_fnamez00_88,
						BTRUE, BINT(((long) 5000000)));
				}
			else
				{	/* Llib/error.scm 696 */
					bool_t BgL_test3525z00_6389;

					{	/* Llib/error.scm 696 */
						bool_t BgL_res2731z00_3777;

						{	/* Llib/error.scm 696 */
							long BgL_l1z00_3764;

							BgL_l1z00_3764 = STRING_LENGTH(((obj_t) BgL_fnamez00_88));
							if ((BgL_l1z00_3764 == ((long) 5)))
								{	/* Llib/error.scm 696 */
									int BgL_arg2209z00_3767;

									{	/* Llib/error.scm 696 */
										char *BgL_auxz00_6397;
										char *BgL_tmpz00_6394;

										BgL_auxz00_6397 =
											BSTRING_TO_STRING(BGl_string3169z00zz__errorz00);
										BgL_tmpz00_6394 =
											BSTRING_TO_STRING(((obj_t) BgL_fnamez00_88));
										BgL_arg2209z00_3767 =
											memcmp(BgL_tmpz00_6394, BgL_auxz00_6397, BgL_l1z00_3764);
									}
									BgL_res2731z00_3777 =
										((long) (BgL_arg2209z00_3767) == ((long) 0));
								}
							else
								{	/* Llib/error.scm 696 */
									BgL_res2731z00_3777 = ((bool_t) 0);
								}
						}
						BgL_test3525z00_6389 = BgL_res2731z00_3777;
					}
					if (BgL_test3525z00_6389)
						{	/* Llib/error.scm 697 */
							obj_t BgL_arg1582z00_1957;

							{	/* Llib/error.scm 697 */
								obj_t BgL_arg1583z00_1961;

								{	/* Llib/error.scm 697 */
									obj_t BgL_res2732z00_3779;

									{	/* Llib/error.scm 697 */
										obj_t BgL_tmpz00_6402;

										BgL_tmpz00_6402 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2732z00_3779 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_6402);
									}
									BgL_arg1583z00_1961 = BgL_res2732z00_3779;
								}
								{	/* Llib/error.scm 697 */
									obj_t BgL_res2733z00_3781;

									BgL_res2733z00_3781 =
										BGL_INPUT_PORT_BUFFER(BgL_arg1583z00_1961);
									BgL_arg1582z00_1957 = BgL_res2733z00_3781;
								}
							}
							{	/* Ieee/port.scm 442 */
								long BgL_endz00_1960;

								BgL_endz00_1960 = STRING_LENGTH(BgL_arg1582z00_1957);
								{	/* Ieee/port.scm 442 */

									return
										BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
										(BgL_arg1582z00_1957, BINT(((long) 0)),
										BINT(BgL_endz00_1960));
						}}}
					else
						{	/* Llib/error.scm 698 */
							bool_t BgL_test3527z00_6410;

							{	/* Llib/error.scm 698 */

								BgL_test3527z00_6410 =
									BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00
									(BGl_string3170z00zz__errorz00, BgL_fnamez00_88, BFALSE,
									BFALSE, BFALSE, BFALSE);
							}
							if (BgL_test3527z00_6410)
								{	/* Llib/error.scm 699 */
									obj_t BgL_arg1587z00_1969;

									{	/* Ieee/string.scm 190 */
										long BgL_endz00_1975;

										BgL_endz00_1975 = STRING_LENGTH(((obj_t) BgL_fnamez00_88));
										{	/* Ieee/string.scm 190 */

											BgL_arg1587z00_1969 =
												BGl_substringz00zz__r4_strings_6_7z00(BgL_fnamez00_88,
												((long) 9), BgL_endz00_1975);
									}}
									{	/* Ieee/port.scm 442 */
										long BgL_endz00_1972;

										BgL_endz00_1972 = STRING_LENGTH(BgL_arg1587z00_1969);
										{	/* Ieee/port.scm 442 */

											return
												BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
												(BgL_arg1587z00_1969, BINT(((long) 0)),
												BINT(BgL_endz00_1972));
								}}}
							else
								{	/* Llib/error.scm 698 */
									return BFALSE;
								}
						}
				}
		}

	}



/* filename-for-error */
	obj_t BGl_filenamezd2forzd2errorz00zz__errorz00(obj_t BgL_filez00_89,
		long BgL_sza7za7_90)
	{
		{	/* Llib/error.scm 706 */
			if (fexists(BSTRING_TO_STRING(BgL_filez00_89)))
				{	/* Llib/error.scm 708 */
					return BGl_relativezd2filezd2namez00zz__errorz00(BgL_filez00_89);
				}
			else
				{	/* Llib/error.scm 710 */
					bool_t BgL_test3529z00_6423;

					{	/* Llib/error.scm 710 */

						BgL_test3529z00_6423 =
							BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00
							(BGl_string3170z00zz__errorz00, BgL_filez00_89, BFALSE, BFALSE,
							BFALSE, BFALSE);
					}
					if (BgL_test3529z00_6423)
						{	/* Llib/error.scm 710 */
							if (
								(STRING_LENGTH(
										((obj_t) BgL_filez00_89)) <= (((long) 9) + BgL_sza7za7_90)))
								{	/* Ieee/string.scm 190 */
									long BgL_endz00_2001;

									BgL_endz00_2001 = STRING_LENGTH(((obj_t) BgL_filez00_89));
									{	/* Ieee/string.scm 190 */

										return
											BGl_substringz00zz__r4_strings_6_7z00(BgL_filez00_89,
											((long) 9), BgL_endz00_2001);
								}}
							else
								{	/* Llib/error.scm 713 */
									obj_t BgL_arg1596z00_2002;

									BgL_arg1596z00_2002 =
										BGl_substringz00zz__r4_strings_6_7z00(BgL_filez00_89,
										((long) 9), (BgL_sza7za7_90 + ((long) 6)));
									{	/* Llib/error.scm 713 */
										obj_t BgL_list1598z00_2003;

										{	/* Llib/error.scm 713 */
											obj_t BgL_arg1599z00_2004;

											BgL_arg1599z00_2004 =
												MAKE_YOUNG_PAIR(BGl_string3171z00zz__errorz00, BNIL);
											BgL_list1598z00_2003 =
												MAKE_YOUNG_PAIR(BgL_arg1596z00_2002,
												BgL_arg1599z00_2004);
										}
										return
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list1598z00_2003);
									}
								}
						}
					else
						{	/* Llib/error.scm 710 */
							if ((STRING_LENGTH(((obj_t) BgL_filez00_89)) <= BgL_sza7za7_90))
								{	/* Llib/error.scm 714 */
									return BgL_filez00_89;
								}
							else
								{	/* Llib/error.scm 717 */
									obj_t BgL_arg1607z00_2010;

									BgL_arg1607z00_2010 =
										BGl_substringz00zz__r4_strings_6_7z00(BgL_filez00_89,
										((long) 0), (BgL_sza7za7_90 - ((long) 3)));
									{	/* Llib/error.scm 717 */
										obj_t BgL_list1608z00_2011;

										{	/* Llib/error.scm 717 */
											obj_t BgL_arg1611z00_2012;

											BgL_arg1611z00_2012 =
												MAKE_YOUNG_PAIR(BGl_string3171z00zz__errorz00, BNIL);
											BgL_list1608z00_2011 =
												MAKE_YOUNG_PAIR(BgL_arg1607z00_2010,
												BgL_arg1611z00_2012);
										}
										return
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list1608z00_2011);
									}
								}
						}
				}
		}

	}



/* location-line-num */
	obj_t BGl_locationzd2linezd2numz00zz__errorz00(obj_t BgL_locz00_93)
	{
		{	/* Llib/error.scm 722 */
			{
				obj_t BgL_filez00_2129;
				obj_t BgL_linez00_2130;
				obj_t BgL_colz00_2131;
				obj_t BgL_filez00_2079;
				obj_t BgL_pointz00_2080;

				{

					if (PAIRP(BgL_locz00_93))
						{	/* Llib/error.scm 770 */
							obj_t BgL_cdrzd2226zd2_2036;

							BgL_cdrzd2226zd2_2036 = CDR(BgL_locz00_93);
							if ((CAR(BgL_locz00_93) == BGl_symbol3135z00zz__errorz00))
								{	/* Llib/error.scm 770 */
									if (PAIRP(BgL_cdrzd2226zd2_2036))
										{	/* Llib/error.scm 770 */
											obj_t BgL_cdrzd2230zd2_2040;

											BgL_cdrzd2230zd2_2040 = CDR(BgL_cdrzd2226zd2_2036);
											if (PAIRP(BgL_cdrzd2230zd2_2040))
												{	/* Llib/error.scm 770 */
													if (NULLP(CDR(BgL_cdrzd2230zd2_2040)))
														{	/* Llib/error.scm 770 */
															BgL_filez00_2079 = CAR(BgL_cdrzd2226zd2_2036);
															BgL_pointz00_2080 = CAR(BgL_cdrzd2230zd2_2040);
															{	/* Llib/error.scm 725 */
																bool_t BgL_test3537z00_6461;

																if (STRINGP(BgL_filez00_2079))
																	{	/* Llib/error.scm 725 */
																		BgL_test3537z00_6461 =
																			BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
																			(BgL_pointz00_2080);
																	}
																else
																	{	/* Llib/error.scm 725 */
																		BgL_test3537z00_6461 = ((bool_t) 0);
																	}
																if (BgL_test3537z00_6461)
																	{	/* Llib/error.scm 726 */
																		obj_t BgL_fnamez00_2084;

																		{	/* Llib/error.scm 726 */
																			bool_t BgL_test3539z00_6465;

																			{	/* Llib/error.scm 726 */
																				bool_t BgL_res2751z00_3824;

																				{	/* Llib/error.scm 726 */
																					obj_t BgL_string1z00_3809;

																					BgL_string1z00_3809 =
																						string_to_bstring(OS_CLASS);
																					{	/* Llib/error.scm 726 */
																						long BgL_l1z00_3811;

																						BgL_l1z00_3811 =
																							STRING_LENGTH
																							(BgL_string1z00_3809);
																						if ((BgL_l1z00_3811 == ((long) 5)))
																							{	/* Llib/error.scm 726 */
																								int BgL_arg2209z00_3814;

																								{	/* Llib/error.scm 726 */
																									char *BgL_auxz00_6472;
																									char *BgL_tmpz00_6470;

																									BgL_auxz00_6472 =
																										BSTRING_TO_STRING
																										(BGl_string3172z00zz__errorz00);
																									BgL_tmpz00_6470 =
																										BSTRING_TO_STRING
																										(BgL_string1z00_3809);
																									BgL_arg2209z00_3814 =
																										memcmp(BgL_tmpz00_6470,
																										BgL_auxz00_6472,
																										BgL_l1z00_3811);
																								}
																								BgL_res2751z00_3824 =
																									(
																									(long) (BgL_arg2209z00_3814)
																									== ((long) 0));
																							}
																						else
																							{	/* Llib/error.scm 726 */
																								BgL_res2751z00_3824 =
																									((bool_t) 0);
																							}
																					}
																				}
																				BgL_test3539z00_6465 =
																					BgL_res2751z00_3824;
																			}
																			if (BgL_test3539z00_6465)
																				{	/* Llib/error.scm 726 */
																					BgL_fnamez00_2084 =
																						BGl_stringzd2replacezd2zz__r4_strings_6_7z00
																						(BGl_uncygdrivez00zz__errorz00
																						(BgL_filez00_2079),
																						(char) (((unsigned char) '/')),
																						(char) (((unsigned char) '\\')));
																				}
																			else
																				{	/* Llib/error.scm 726 */
																					BgL_fnamez00_2084 = BgL_filez00_2079;
																				}
																		}
																		{	/* Llib/error.scm 726 */
																			obj_t BgL_portz00_2085;

																			BgL_portz00_2085 =
																				BGl_openzd2forzd2errorz00zz__errorz00
																				(BgL_fnamez00_2084);
																			{	/* Llib/error.scm 729 */

																				if (INPUT_PORTP(BgL_portz00_2085))
																					{	/* Llib/error.scm 731 */
																						obj_t BgL_exitd1099z00_2087;

																						BgL_exitd1099z00_2087 =
																							BGL_EXITD_TOP_AS_OBJ();
																						{	/* Llib/error.scm 745 */
																							obj_t
																								BgL_zc3z04anonymousza31694ze3z87_5020;
																							BgL_zc3z04anonymousza31694ze3z87_5020
																								=
																								MAKE_FX_PROCEDURE
																								(BGl_z62zc3z04anonymousza31694ze3ze5zz__errorz00,
																								(int) (((long) 0)),
																								(int) (((long) 1)));
																							PROCEDURE_SET
																								(BgL_zc3z04anonymousza31694ze3z87_5020,
																								(int) (((long) 0)),
																								BgL_portz00_2085);
																							BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
																								(BgL_exitd1099z00_2087,
																								BgL_zc3z04anonymousza31694ze3z87_5020);
																							{	/* Llib/error.scm 735 */
																								obj_t BgL_tmp1101z00_2089;

																								{
																									obj_t BgL_ostringz00_2091;
																									long BgL_lnumz00_2092;
																									long BgL_oposz00_2093;

																									BgL_ostringz00_2091 = BFALSE;
																									BgL_lnumz00_2092 = ((long) 1);
																									BgL_oposz00_2093 = ((long) 0);
																								BgL_zc3z04anonymousza31662ze3z87_2094:
																									{	/* Llib/error.scm 735 */
																										obj_t BgL_lstringz00_2095;

																										BgL_lstringz00_2095 =
																											BGl_readzd2linezd2zz__r4_input_6_10_2z00
																											(BgL_portz00_2085);
																										{	/* Llib/error.scm 736 */
																											bool_t
																												BgL_test3542z00_6492;
																											{	/* Llib/error.scm 736 */
																												bool_t
																													BgL_res2752z00_3826;
																												BgL_res2752z00_3826 =
																													EOF_OBJECTP
																													(BgL_lstringz00_2095);
																												BgL_test3542z00_6492 =
																													BgL_res2752z00_3826;
																											}
																											if (BgL_test3542z00_6492)
																												{	/* Llib/error.scm 737 */
																													long
																														BgL_arg1664z00_2097;
																													obj_t
																														BgL_arg1665z00_2098;
																													BgL_arg1664z00_2097 =
																														(((long) 1) +
																														((long)
																															CINT
																															(BgL_pointz00_2080)
																															-
																															BgL_oposz00_2093));
																													if (STRINGP
																														(BgL_ostringz00_2091))
																														{	/* Llib/error.scm 739 */
																															obj_t
																																BgL_list1674z00_2105;
																															{	/* Llib/error.scm 739 */
																																obj_t
																																	BgL_arg1675z00_2106;
																																BgL_arg1675z00_2106
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_string3173z00zz__errorz00,
																																	BNIL);
																																BgL_list1674z00_2105
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_ostringz00_2091,
																																	BgL_arg1675z00_2106);
																															}
																															BgL_arg1665z00_2098
																																=
																																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																(BgL_list1674z00_2105);
																														}
																													else
																														{	/* Llib/error.scm 738 */
																															BgL_arg1665z00_2098
																																=
																																BGl_string3173z00zz__errorz00;
																														}
																													{	/* Llib/error.scm 737 */
																														obj_t
																															BgL_list1666z00_2099;
																														{	/* Llib/error.scm 737 */
																															obj_t
																																BgL_arg1667z00_2100;
																															{	/* Llib/error.scm 737 */
																																obj_t
																																	BgL_arg1668z00_2101;
																																{	/* Llib/error.scm 737 */
																																	obj_t
																																		BgL_arg1669z00_2102;
																																	BgL_arg1669z00_2102
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1665z00_2098,
																																		BNIL);
																																	BgL_arg1668z00_2101
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BINT
																																		(BgL_arg1664z00_2097),
																																		BgL_arg1669z00_2102);
																																}
																																BgL_arg1667z00_2100
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BINT
																																	(BgL_lnumz00_2092),
																																	BgL_arg1668z00_2101);
																															}
																															BgL_list1666z00_2099
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_fnamez00_2084,
																																BgL_arg1667z00_2100);
																														}
																														BgL_tmp1101z00_2089
																															=
																															BGl_valuesz00zz__r5_control_features_6_4z00
																															(BgL_list1666z00_2099);
																													}
																												}
																											else
																												{	/* Llib/error.scm 741 */
																													bool_t
																														BgL_test3544z00_6509;
																													{	/* Llib/error.scm 741 */
																														long
																															BgL_arg1693z00_2116;
																														{	/* Llib/error.scm 741 */
																															long
																																BgL_res2756z00_3834;
																															{	/* Llib/error.scm 741 */
																																obj_t
																																	BgL_tmpz00_6510;
																																BgL_tmpz00_6510
																																	=
																																	((obj_t)
																																	BgL_portz00_2085);
																																BgL_res2756z00_3834
																																	=
																																	INPUT_PORT_FILEPOS
																																	(BgL_tmpz00_6510);
																															}
																															BgL_arg1693z00_2116
																																=
																																BgL_res2756z00_3834;
																														}
																														BgL_test3544z00_6509
																															=
																															(BgL_arg1693z00_2116
																															>
																															(long)
																															CINT
																															(BgL_pointz00_2080));
																													}
																													if (BgL_test3544z00_6509)
																														{	/* Llib/error.scm 742 */
																															long
																																BgL_arg1685z00_2109;
																															BgL_arg1685z00_2109
																																=
																																((long)
																																CINT
																																(BgL_pointz00_2080)
																																-
																																BgL_oposz00_2093);
																															{	/* Llib/error.scm 742 */
																																obj_t
																																	BgL_list1686z00_2110;
																																{	/* Llib/error.scm 742 */
																																	obj_t
																																		BgL_arg1687z00_2111;
																																	{	/* Llib/error.scm 742 */
																																		obj_t
																																			BgL_arg1688z00_2112;
																																		{	/* Llib/error.scm 742 */
																																			obj_t
																																				BgL_arg1691z00_2113;
																																			BgL_arg1691z00_2113
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_lstringz00_2095,
																																				BNIL);
																																			BgL_arg1688z00_2112
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BINT
																																				(BgL_arg1685z00_2109),
																																				BgL_arg1691z00_2113);
																																		}
																																		BgL_arg1687z00_2111
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BINT
																																			(BgL_lnumz00_2092),
																																			BgL_arg1688z00_2112);
																																	}
																																	BgL_list1686z00_2110
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_filez00_2079,
																																		BgL_arg1687z00_2111);
																																}
																																BgL_tmp1101z00_2089
																																	=
																																	BGl_valuesz00zz__r5_control_features_6_4z00
																																	(BgL_list1686z00_2110);
																														}}
																													else
																														{	/* Llib/error.scm 743 */
																															long
																																BgL_oposz00_2114;
																															{	/* Llib/error.scm 743 */
																																long
																																	BgL_res2759z00_3842;
																																{	/* Llib/error.scm 743 */
																																	obj_t
																																		BgL_tmpz00_6524;
																																	BgL_tmpz00_6524
																																		=
																																		((obj_t)
																																		BgL_portz00_2085);
																																	BgL_res2759z00_3842
																																		=
																																		INPUT_PORT_FILEPOS
																																		(BgL_tmpz00_6524);
																																}
																																BgL_oposz00_2114
																																	=
																																	BgL_res2759z00_3842;
																															}
																															{
																																long
																																	BgL_oposz00_6530;
																																long
																																	BgL_lnumz00_6528;
																																obj_t
																																	BgL_ostringz00_6527;
																																BgL_ostringz00_6527
																																	=
																																	BgL_lstringz00_2095;
																																BgL_lnumz00_6528
																																	=
																																	(BgL_lnumz00_2092
																																	+ ((long) 1));
																																BgL_oposz00_6530
																																	=
																																	BgL_oposz00_2114;
																																BgL_oposz00_2093
																																	=
																																	BgL_oposz00_6530;
																																BgL_lnumz00_2092
																																	=
																																	BgL_lnumz00_6528;
																																BgL_ostringz00_2091
																																	=
																																	BgL_ostringz00_6527;
																																goto
																																	BgL_zc3z04anonymousza31662ze3z87_2094;
																															}
																														}
																												}
																										}
																									}
																								}
																								BGl_exitdzd2popzd2protectz12z12zz__bexitz00
																									(BgL_exitd1099z00_2087);
																								bgl_close_input_port
																									(BgL_portz00_2085);
																								return BgL_tmp1101z00_2089;
																							}
																						}
																					}
																				else
																					{	/* Llib/error.scm 746 */
																						obj_t BgL_list1695z00_2120;

																						{	/* Llib/error.scm 746 */
																							obj_t BgL_arg1696z00_2121;

																							{	/* Llib/error.scm 746 */
																								obj_t BgL_arg1697z00_2122;

																								{	/* Llib/error.scm 746 */
																									obj_t BgL_arg1698z00_2123;

																									BgL_arg1698z00_2123 =
																										MAKE_YOUNG_PAIR(BFALSE,
																										BNIL);
																									BgL_arg1697z00_2122 =
																										MAKE_YOUNG_PAIR
																										(BgL_pointz00_2080,
																										BgL_arg1698z00_2123);
																								}
																								BgL_arg1696z00_2121 =
																									MAKE_YOUNG_PAIR(BFALSE,
																									BgL_arg1697z00_2122);
																							}
																							BgL_list1695z00_2120 =
																								MAKE_YOUNG_PAIR
																								(BgL_filez00_2079,
																								BgL_arg1696z00_2121);
																						}
																						return
																							BGl_valuesz00zz__r5_control_features_6_4z00
																							(BgL_list1695z00_2120);
																					}
																			}
																		}
																	}
																else
																	{	/* Llib/error.scm 725 */
																		return BFALSE;
																	}
															}
														}
													else
														{	/* Llib/error.scm 770 */
														BgL_tagzd2217zd2_2033:
															{	/* Llib/error.scm 781 */
																obj_t BgL_list1653z00_2075;

																{	/* Llib/error.scm 781 */
																	obj_t BgL_arg1654z00_2076;

																	{	/* Llib/error.scm 781 */
																		obj_t BgL_arg1656z00_2077;

																		{	/* Llib/error.scm 781 */
																			obj_t BgL_arg1657z00_2078;

																			BgL_arg1657z00_2078 =
																				MAKE_YOUNG_PAIR(BFALSE, BNIL);
																			BgL_arg1656z00_2077 =
																				MAKE_YOUNG_PAIR(BFALSE,
																				BgL_arg1657z00_2078);
																		}
																		BgL_arg1654z00_2076 =
																			MAKE_YOUNG_PAIR(BFALSE,
																			BgL_arg1656z00_2077);
																	}
																	BgL_list1653z00_2075 =
																		MAKE_YOUNG_PAIR(BFALSE,
																		BgL_arg1654z00_2076);
																}
																return
																	BGl_valuesz00zz__r5_control_features_6_4z00
																	(BgL_list1653z00_2075);
															}
														}
												}
											else
												{	/* Llib/error.scm 770 */
													goto BgL_tagzd2217zd2_2033;
												}
										}
									else
										{	/* Llib/error.scm 770 */
											goto BgL_tagzd2217zd2_2033;
										}
								}
							else
								{	/* Llib/error.scm 770 */
									if ((CAR(BgL_locz00_93) == BGl_symbol3174z00zz__errorz00))
										{	/* Llib/error.scm 770 */
											if (PAIRP(BgL_cdrzd2226zd2_2036))
												{	/* Llib/error.scm 770 */
													obj_t BgL_cdrzd2282zd2_2051;

													BgL_cdrzd2282zd2_2051 = CDR(BgL_cdrzd2226zd2_2036);
													if (PAIRP(BgL_cdrzd2282zd2_2051))
														{	/* Llib/error.scm 770 */
															obj_t BgL_cdrzd2287zd2_2053;

															BgL_cdrzd2287zd2_2053 =
																CDR(BgL_cdrzd2282zd2_2051);
															if (PAIRP(BgL_cdrzd2287zd2_2053))
																{	/* Llib/error.scm 770 */
																	if (NULLP(CDR(BgL_cdrzd2287zd2_2053)))
																		{	/* Llib/error.scm 770 */
																			BgL_filez00_2129 =
																				CAR(BgL_cdrzd2226zd2_2036);
																			BgL_linez00_2130 =
																				CAR(BgL_cdrzd2282zd2_2051);
																			BgL_colz00_2131 =
																				CAR(BgL_cdrzd2287zd2_2053);
																		BgL_zc3z04anonymousza31703ze3z87_2132:
																			{	/* Llib/error.scm 749 */
																				bool_t BgL_test3550z00_6559;

																				if (
																					((long) CINT(BgL_linez00_2130) >=
																						((long) 0)))
																					{	/* Llib/error.scm 749 */
																						BgL_test3550z00_6559 =
																							(
																							(long) CINT(BgL_colz00_2131) >=
																							((long) 0));
																					}
																				else
																					{	/* Llib/error.scm 749 */
																						BgL_test3550z00_6559 = ((bool_t) 0);
																					}
																				if (BgL_test3550z00_6559)
																					{	/* Llib/error.scm 750 */
																						obj_t BgL_fnamez00_2135;

																						{	/* Llib/error.scm 750 */
																							bool_t BgL_test3552z00_6565;

																							{	/* Llib/error.scm 750 */
																								bool_t BgL_res2767z00_3865;

																								{	/* Llib/error.scm 750 */
																									obj_t BgL_string1z00_3850;

																									BgL_string1z00_3850 =
																										string_to_bstring(OS_CLASS);
																									{	/* Llib/error.scm 750 */
																										long BgL_l1z00_3852;

																										BgL_l1z00_3852 =
																											STRING_LENGTH
																											(BgL_string1z00_3850);
																										if ((BgL_l1z00_3852 ==
																												((long) 5)))
																											{	/* Llib/error.scm 750 */
																												int BgL_arg2209z00_3855;

																												{	/* Llib/error.scm 750 */
																													char *BgL_auxz00_6572;
																													char *BgL_tmpz00_6570;

																													BgL_auxz00_6572 =
																														BSTRING_TO_STRING
																														(BGl_string3172z00zz__errorz00);
																													BgL_tmpz00_6570 =
																														BSTRING_TO_STRING
																														(BgL_string1z00_3850);
																													BgL_arg2209z00_3855 =
																														memcmp
																														(BgL_tmpz00_6570,
																														BgL_auxz00_6572,
																														BgL_l1z00_3852);
																												}
																												BgL_res2767z00_3865 =
																													(
																													(long)
																													(BgL_arg2209z00_3855)
																													== ((long) 0));
																											}
																										else
																											{	/* Llib/error.scm 750 */
																												BgL_res2767z00_3865 =
																													((bool_t) 0);
																											}
																									}
																								}
																								BgL_test3552z00_6565 =
																									BgL_res2767z00_3865;
																							}
																							if (BgL_test3552z00_6565)
																								{	/* Llib/error.scm 750 */
																									BgL_fnamez00_2135 =
																										BGl_stringzd2replacezd2zz__r4_strings_6_7z00
																										(BGl_uncygdrivez00zz__errorz00
																										(BgL_filez00_2129),
																										(char) (((unsigned char)
																												'/')),
																										(char) (((unsigned char)
																												'\\')));
																								}
																							else
																								{	/* Llib/error.scm 750 */
																									BgL_fnamez00_2135 =
																										BgL_filez00_2129;
																								}
																						}
																						{	/* Llib/error.scm 750 */
																							obj_t BgL_portz00_2136;

																							BgL_portz00_2136 =
																								BGl_openzd2forzd2errorz00zz__errorz00
																								(BgL_fnamez00_2135);
																							{	/* Llib/error.scm 753 */

																								if (INPUT_PORTP
																									(BgL_portz00_2136))
																									{	/* Llib/error.scm 755 */
																										obj_t BgL_exitd1102z00_2138;

																										BgL_exitd1102z00_2138 =
																											BGL_EXITD_TOP_AS_OBJ();
																										{	/* Llib/error.scm 766 */
																											obj_t
																												BgL_zc3z04anonymousza31727ze3z87_5019;
																											BgL_zc3z04anonymousza31727ze3z87_5019
																												=
																												MAKE_FX_PROCEDURE
																												(BGl_z62zc3z04anonymousza31727ze3ze5zz__errorz00,
																												(int) (((long) 0)),
																												(int) (((long) 1)));
																											PROCEDURE_SET
																												(BgL_zc3z04anonymousza31727ze3z87_5019,
																												(int) (((long) 0)),
																												BgL_portz00_2136);
																											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
																												(BgL_exitd1102z00_2138,
																												BgL_zc3z04anonymousza31727ze3z87_5019);
																											{	/* Llib/error.scm 758 */
																												obj_t
																													BgL_tmp1104z00_2140;
																												{
																													obj_t
																														BgL_ostringz00_2142;
																													obj_t
																														BgL_lnumz00_2143;
																													BgL_ostringz00_2142 =
																														BFALSE;
																													BgL_lnumz00_2143 =
																														BgL_linez00_2130;
																												BgL_zc3z04anonymousza31707ze3z87_2144:
																													{	/* Llib/error.scm 758 */
																														obj_t
																															BgL_lstringz00_2145;
																														BgL_lstringz00_2145
																															=
																															BGl_readzd2linezd2zz__r4_input_6_10_2z00
																															(BgL_portz00_2136);
																														{	/* Llib/error.scm 759 */
																															bool_t
																																BgL_test3555z00_6592;
																															{	/* Llib/error.scm 759 */
																																bool_t
																																	BgL_res2768z00_3867;
																																BgL_res2768z00_3867
																																	=
																																	EOF_OBJECTP
																																	(BgL_lstringz00_2145);
																																BgL_test3555z00_6592
																																	=
																																	BgL_res2768z00_3867;
																															}
																															if (BgL_test3555z00_6592)
																																{	/* Llib/error.scm 760 */
																																	long
																																		BgL_arg1709z00_2147;
																																	obj_t
																																		BgL_arg1710z00_2148;
																																	BgL_arg1709z00_2147
																																		=
																																		((long)
																																		CINT
																																		(BgL_colz00_2131)
																																		+
																																		((long) 1));
																																	{	/* Llib/error.scm 761 */
																																		obj_t
																																			BgL_list1717z00_2153;
																																		{	/* Llib/error.scm 761 */
																																			obj_t
																																				BgL_arg1719z00_2154;
																																			BgL_arg1719z00_2154
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_string3173z00zz__errorz00,
																																				BNIL);
																																			BgL_list1717z00_2153
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_ostringz00_2142,
																																				BgL_arg1719z00_2154);
																																		}
																																		BgL_arg1710z00_2148
																																			=
																																			BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																			(BgL_list1717z00_2153);
																																	}
																																	{	/* Llib/error.scm 760 */
																																		obj_t
																																			BgL_list1711z00_2149;
																																		{	/* Llib/error.scm 760 */
																																			obj_t
																																				BgL_arg1712z00_2150;
																																			{	/* Llib/error.scm 760 */
																																				obj_t
																																					BgL_arg1713z00_2151;
																																				{	/* Llib/error.scm 760 */
																																					obj_t
																																						BgL_arg1716z00_2152;
																																					BgL_arg1716z00_2152
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1710z00_2148,
																																						BNIL);
																																					BgL_arg1713z00_2151
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BINT
																																						(BgL_arg1709z00_2147),
																																						BgL_arg1716z00_2152);
																																				}
																																				BgL_arg1712z00_2150
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_linez00_2130,
																																					BgL_arg1713z00_2151);
																																			}
																																			BgL_list1711z00_2149
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_filez00_2129,
																																				BgL_arg1712z00_2150);
																																		}
																																		BgL_tmp1104z00_2140
																																			=
																																			BGl_valuesz00zz__r5_control_features_6_4z00
																																			(BgL_list1711z00_2149);
																																}}
																															else
																																{	/* Llib/error.scm 759 */
																																	if (
																																		((long)
																																			CINT
																																			(BgL_lnumz00_2143)
																																			==
																																			((long)
																																				0)))
																																		{	/* Llib/error.scm 763 */
																																			obj_t
																																				BgL_list1721z00_2156;
																																			{	/* Llib/error.scm 763 */
																																				obj_t
																																					BgL_arg1722z00_2157;
																																				{	/* Llib/error.scm 763 */
																																					obj_t
																																						BgL_arg1723z00_2158;
																																					{	/* Llib/error.scm 763 */
																																						obj_t
																																							BgL_arg1725z00_2159;
																																						BgL_arg1725z00_2159
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_lstringz00_2145,
																																							BNIL);
																																						BgL_arg1723z00_2158
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_colz00_2131,
																																							BgL_arg1725z00_2159);
																																					}
																																					BgL_arg1722z00_2157
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_linez00_2130,
																																						BgL_arg1723z00_2158);
																																				}
																																				BgL_list1721z00_2156
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_filez00_2129,
																																					BgL_arg1722z00_2157);
																																			}
																																			BgL_tmp1104z00_2140
																																				=
																																				BGl_valuesz00zz__r5_control_features_6_4z00
																																				(BgL_list1721z00_2156);
																																		}
																																	else
																																		{	/* Llib/error.scm 764 */
																																			long
																																				BgL_oposz00_2160;
																																			{	/* Llib/error.scm 764 */
																																				long
																																					BgL_res2771z00_3873;
																																				{	/* Llib/error.scm 764 */
																																					obj_t
																																						BgL_tmpz00_6613;
																																					BgL_tmpz00_6613
																																						=
																																						(
																																						(obj_t)
																																						BgL_portz00_2136);
																																					BgL_res2771z00_3873
																																						=
																																						INPUT_PORT_FILEPOS
																																						(BgL_tmpz00_6613);
																																				}
																																				BgL_oposz00_2160
																																					=
																																					BgL_res2771z00_3873;
																																			}
																																			{	/* Llib/error.scm 765 */
																																				long
																																					BgL_arg1726z00_2161;
																																				BgL_arg1726z00_2161
																																					=
																																					(
																																					(long)
																																					CINT
																																					(BgL_lnumz00_2143)
																																					-
																																					((long) 1));
																																				{
																																					obj_t
																																						BgL_lnumz00_6619;
																																					obj_t
																																						BgL_ostringz00_6618;
																																					BgL_ostringz00_6618
																																						=
																																						BgL_lstringz00_2145;
																																					BgL_lnumz00_6619
																																						=
																																						BINT
																																						(BgL_arg1726z00_2161);
																																					BgL_lnumz00_2143
																																						=
																																						BgL_lnumz00_6619;
																																					BgL_ostringz00_2142
																																						=
																																						BgL_ostringz00_6618;
																																					goto
																																						BgL_zc3z04anonymousza31707ze3z87_2144;
																																				}
																																			}
																																		}
																																}
																														}
																													}
																												}
																												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
																													(BgL_exitd1102z00_2138);
																												bgl_close_input_port
																													(BgL_portz00_2136);
																												return
																													BgL_tmp1104z00_2140;
																											}
																										}
																									}
																								else
																									{	/* Llib/error.scm 767 */
																										obj_t BgL_list1728z00_2165;

																										{	/* Llib/error.scm 767 */
																											obj_t BgL_arg1729z00_2166;

																											{	/* Llib/error.scm 767 */
																												obj_t
																													BgL_arg1730z00_2167;
																												{	/* Llib/error.scm 767 */
																													obj_t
																														BgL_arg1731z00_2168;
																													BgL_arg1731z00_2168 =
																														MAKE_YOUNG_PAIR
																														(BFALSE, BNIL);
																													BgL_arg1730z00_2167 =
																														MAKE_YOUNG_PAIR
																														(BgL_colz00_2131,
																														BgL_arg1731z00_2168);
																												}
																												BgL_arg1729z00_2166 =
																													MAKE_YOUNG_PAIR
																													(BgL_linez00_2130,
																													BgL_arg1730z00_2167);
																											}
																											BgL_list1728z00_2165 =
																												MAKE_YOUNG_PAIR
																												(BgL_filez00_2129,
																												BgL_arg1729z00_2166);
																										}
																										return
																											BGl_valuesz00zz__r5_control_features_6_4z00
																											(BgL_list1728z00_2165);
																									}
																							}
																						}
																					}
																				else
																					{	/* Llib/error.scm 768 */
																						obj_t BgL_list1737z00_2173;

																						{	/* Llib/error.scm 768 */
																							obj_t BgL_arg1738z00_2174;

																							{	/* Llib/error.scm 768 */
																								obj_t BgL_arg1739z00_2175;

																								{	/* Llib/error.scm 768 */
																									obj_t BgL_arg1740z00_2176;

																									BgL_arg1740z00_2176 =
																										MAKE_YOUNG_PAIR(BFALSE,
																										BNIL);
																									BgL_arg1739z00_2175 =
																										MAKE_YOUNG_PAIR
																										(BgL_colz00_2131,
																										BgL_arg1740z00_2176);
																								}
																								BgL_arg1738z00_2174 =
																									MAKE_YOUNG_PAIR
																									(BgL_linez00_2130,
																									BgL_arg1739z00_2175);
																							}
																							BgL_list1737z00_2173 =
																								MAKE_YOUNG_PAIR
																								(BgL_filez00_2129,
																								BgL_arg1738z00_2174);
																						}
																						return
																							BGl_valuesz00zz__r5_control_features_6_4z00
																							(BgL_list1737z00_2173);
																					}
																			}
																		}
																	else
																		{	/* Llib/error.scm 770 */
																			goto BgL_tagzd2217zd2_2033;
																		}
																}
															else
																{	/* Llib/error.scm 770 */
																	goto BgL_tagzd2217zd2_2033;
																}
														}
													else
														{	/* Llib/error.scm 770 */
															goto BgL_tagzd2217zd2_2033;
														}
												}
											else
												{	/* Llib/error.scm 770 */
													goto BgL_tagzd2217zd2_2033;
												}
										}
									else
										{	/* Llib/error.scm 770 */
											obj_t BgL_cdrzd2314zd2_2061;

											BgL_cdrzd2314zd2_2061 = CDR(BgL_locz00_93);
											if ((CAR(BgL_locz00_93) == BGl_symbol3176z00zz__errorz00))
												{	/* Llib/error.scm 770 */
													if (PAIRP(BgL_cdrzd2314zd2_2061))
														{	/* Llib/error.scm 770 */
															obj_t BgL_cdrzd2318zd2_2065;

															BgL_cdrzd2318zd2_2065 =
																CDR(BgL_cdrzd2314zd2_2061);
															if (PAIRP(BgL_cdrzd2318zd2_2065))
																{	/* Llib/error.scm 770 */
																	if (NULLP(CDR(BgL_cdrzd2318zd2_2065)))
																		{
																			obj_t BgL_colz00_6652;
																			obj_t BgL_linez00_6650;
																			obj_t BgL_filez00_6648;

																			BgL_filez00_6648 =
																				CAR(BgL_cdrzd2314zd2_2061);
																			BgL_linez00_6650 =
																				CAR(BgL_cdrzd2318zd2_2065);
																			BgL_colz00_6652 = BINT(((long) 0));
																			BgL_colz00_2131 = BgL_colz00_6652;
																			BgL_linez00_2130 = BgL_linez00_6650;
																			BgL_filez00_2129 = BgL_filez00_6648;
																			goto
																				BgL_zc3z04anonymousza31703ze3z87_2132;
																		}
																	else
																		{	/* Llib/error.scm 770 */
																			goto BgL_tagzd2217zd2_2033;
																		}
																}
															else
																{	/* Llib/error.scm 770 */
																	goto BgL_tagzd2217zd2_2033;
																}
														}
													else
														{	/* Llib/error.scm 770 */
															goto BgL_tagzd2217zd2_2033;
														}
												}
											else
												{	/* Llib/error.scm 770 */
													goto BgL_tagzd2217zd2_2033;
												}
										}
								}
						}
					else
						{	/* Llib/error.scm 770 */
							goto BgL_tagzd2217zd2_2033;
						}
				}
			}
		}

	}



/* &<@anonymous:1727> */
	obj_t BGl_z62zc3z04anonymousza31727ze3ze5zz__errorz00(obj_t BgL_envz00_5021)
	{
		{	/* Llib/error.scm 755 */
			{	/* Llib/error.scm 766 */
				obj_t BgL_portz00_5022;

				BgL_portz00_5022 = PROCEDURE_REF(BgL_envz00_5021, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_portz00_5022));
			}
		}

	}



/* &<@anonymous:1694> */
	obj_t BGl_z62zc3z04anonymousza31694ze3ze5zz__errorz00(obj_t BgL_envz00_5023)
	{
		{	/* Llib/error.scm 731 */
			{	/* Llib/error.scm 745 */
				obj_t BgL_portz00_5024;

				BgL_portz00_5024 = PROCEDURE_REF(BgL_envz00_5023, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_portz00_5024));
			}
		}

	}



/* error-notify */
	BGL_EXPORTED_DEF obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t BgL_ez00_95)
	{
		{	/* Llib/error.scm 793 */
			if (BGl_isazf3zf3zz__objectz00(BgL_ez00_95, BGl_z62errorz62zz__objectz00))
				{	/* Llib/error.scm 796 */
					bool_t BgL_test3562z00_6664;

					{	/* Llib/error.scm 788 */
						bool_t BgL_test3563z00_6665;

						{	/* Llib/error.scm 788 */
							obj_t BgL_tmpz00_6666;

							BgL_tmpz00_6666 =
								(((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt)
											((BgL_z62errorz62_bglt) BgL_ez00_95))))->BgL_fnamez00);
							BgL_test3563z00_6665 = STRINGP(BgL_tmpz00_6666);
						}
						if (BgL_test3563z00_6665)
							{	/* Llib/error.scm 788 */
								BgL_test3562z00_6664 =
									BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(
									(((BgL_z62exceptionz62_bglt) COBJECT(
												((BgL_z62exceptionz62_bglt)
													((BgL_z62errorz62_bglt) BgL_ez00_95))))->
										BgL_locationz00));
							}
						else
							{	/* Llib/error.scm 788 */
								BgL_test3562z00_6664 = ((bool_t) 0);
							}
					}
					if (BgL_test3562z00_6664)
						{	/* Llib/error.scm 798 */
							obj_t BgL_arg1745z00_2187;
							obj_t BgL_arg1746z00_2188;

							BgL_arg1745z00_2187 =
								(((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt)
											((BgL_z62errorz62_bglt) BgL_ez00_95))))->BgL_fnamez00);
							BgL_arg1746z00_2188 =
								(((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt)
											((BgL_z62errorz62_bglt) BgL_ez00_95))))->BgL_locationz00);
							return
								BGl_notifyzd2z62errorzf2locz42zz__errorz00(
								((BgL_z62errorz62_bglt) BgL_ez00_95), BgL_arg1745z00_2187,
								BgL_arg1746z00_2188);
						}
					else
						{	/* Llib/error.scm 796 */
							return
								BGl_notifyzd2z62errorzb0zz__errorz00(
								((BgL_z62errorz62_bglt) BgL_ez00_95));
						}
				}
			else
				{	/* Llib/error.scm 795 */
					if (BGl_isazf3zf3zz__objectz00(BgL_ez00_95,
							BGl_z62conditionz62zz__objectz00))
						{	/* Llib/error.scm 801 */
							obj_t BgL_arg1748z00_2190;

							{	/* Llib/error.scm 801 */
								obj_t BgL_res2789z00_3925;

								{	/* Llib/error.scm 801 */
									obj_t BgL_tmpz00_6687;

									BgL_tmpz00_6687 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res2789z00_3925 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6687);
								}
								BgL_arg1748z00_2190 = BgL_res2789z00_3925;
							}
							{	/* Llib/error.scm 801 */
								obj_t BgL_list1749z00_2191;

								{	/* Llib/error.scm 801 */
									obj_t BgL_arg1750z00_2192;

									BgL_arg1750z00_2192 = MAKE_YOUNG_PAIR(BgL_ez00_95, BNIL);
									BgL_list1749z00_2191 =
										MAKE_YOUNG_PAIR(BGl_string3178z00zz__errorz00,
										BgL_arg1750z00_2192);
								}
								return
									BGl_fprintz00zz__r4_output_6_10_3z00(BgL_arg1748z00_2190,
									BgL_list1749z00_2191);
							}
						}
					else
						{	/* Llib/error.scm 800 */
							return BFALSE;
						}
				}
		}

	}



/* &error-notify */
	obj_t BGl_z62errorzd2notifyzb0zz__errorz00(obj_t BgL_envz00_5025,
		obj_t BgL_ez00_5026)
	{
		{	/* Llib/error.scm 793 */
			return BGl_errorzd2notifyzd2zz__errorz00(BgL_ez00_5026);
		}

	}



/* error-notify/location */
	BGL_EXPORTED_DEF obj_t BGl_errorzd2notifyzf2locationz20zz__errorz00(obj_t
		BgL_ez00_96, obj_t BgL_fnamez00_97, int BgL_locationz00_98)
	{
		{	/* Llib/error.scm 806 */
			if (BGl_isazf3zf3zz__objectz00(BgL_ez00_96, BGl_z62errorz62zz__objectz00))
				{	/* Llib/error.scm 807 */
					return
						BGl_notifyzd2z62errorzf2locz42zz__errorz00(
						((BgL_z62errorz62_bglt) BgL_ez00_96), BgL_fnamez00_97,
						BINT(BgL_locationz00_98));
				}
			else
				{	/* Llib/error.scm 807 */
					return BFALSE;
				}
		}

	}



/* &error-notify/location */
	obj_t BGl_z62errorzd2notifyzf2locationz42zz__errorz00(obj_t BgL_envz00_5027,
		obj_t BgL_ez00_5028, obj_t BgL_fnamez00_5029, obj_t BgL_locationz00_5030)
	{
		{	/* Llib/error.scm 806 */
			{	/* Llib/error.scm 807 */
				int BgL_auxz00_6706;
				obj_t BgL_auxz00_6699;

				{	/* Llib/error.scm 807 */
					obj_t BgL_tmpz00_6707;

					if (INTEGERP(BgL_locationz00_5030))
						{	/* Llib/error.scm 807 */
							BgL_tmpz00_6707 = BgL_locationz00_5030;
						}
					else
						{
							obj_t BgL_auxz00_6710;

							BgL_auxz00_6710 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
								BINT(((long) 31954)), BGl_string3179z00zz__errorz00,
								BGl_string3133z00zz__errorz00, BgL_locationz00_5030);
							FAILURE(BgL_auxz00_6710, BFALSE, BFALSE);
						}
					BgL_auxz00_6706 = CINT(BgL_tmpz00_6707);
				}
				if (STRINGP(BgL_fnamez00_5029))
					{	/* Llib/error.scm 807 */
						BgL_auxz00_6699 = BgL_fnamez00_5029;
					}
				else
					{
						obj_t BgL_auxz00_6702;

						BgL_auxz00_6702 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
							BINT(((long) 31954)), BGl_string3179z00zz__errorz00,
							BGl_string3153z00zz__errorz00, BgL_fnamez00_5029);
						FAILURE(BgL_auxz00_6702, BFALSE, BFALSE);
					}
				return
					BGl_errorzd2notifyzf2locationz20zz__errorz00(BgL_ez00_5028,
					BgL_auxz00_6699, BgL_auxz00_6706);
			}
		}

	}



/* warning-notify */
	BGL_EXPORTED_DEF obj_t BGl_warningzd2notifyzd2zz__errorz00(obj_t BgL_ez00_99)
	{
		{	/* Llib/error.scm 813 */
			{
				obj_t BgL_ez00_2216;

				{	/* Llib/error.scm 827 */
					bool_t BgL_test3568z00_6716;

					{	/* Llib/error.scm 827 */
						int BgL_arg1768z00_2215;

						BgL_arg1768z00_2215 = BGl_bigloozd2warningzd2zz__paramz00();
						BgL_test3568z00_6716 = ((long) (BgL_arg1768z00_2215) > ((long) 0));
					}
					if (BgL_test3568z00_6716)
						{	/* Llib/error.scm 827 */
							{	/* Llib/error.scm 828 */
								bool_t BgL_test3569z00_6720;

								{	/* Llib/error.scm 788 */
									bool_t BgL_test3570z00_6721;

									{	/* Llib/error.scm 788 */
										obj_t BgL_tmpz00_6722;

										BgL_tmpz00_6722 =
											(((BgL_z62exceptionz62_bglt) COBJECT(
													((BgL_z62exceptionz62_bglt) BgL_ez00_99)))->
											BgL_fnamez00);
										BgL_test3570z00_6721 = STRINGP(BgL_tmpz00_6722);
									}
									if (BgL_test3570z00_6721)
										{	/* Llib/error.scm 788 */
											BgL_test3569z00_6720 =
												BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(
												(((BgL_z62exceptionz62_bglt) COBJECT(
															((BgL_z62exceptionz62_bglt) BgL_ez00_99)))->
													BgL_locationz00));
										}
									else
										{	/* Llib/error.scm 788 */
											BgL_test3569z00_6720 = ((bool_t) 0);
										}
								}
								if (BgL_test3569z00_6720)
									{	/* Llib/error.scm 831 */
										bool_t BgL_test3571z00_6729;

										{	/* Llib/error.scm 831 */
											obj_t BgL_arg1763z00_2207;

											BgL_arg1763z00_2207 =
												(((BgL_z62exceptionz62_bglt) COBJECT(
														((BgL_z62exceptionz62_bglt)
															((BgL_z62warningz62_bglt) BgL_ez00_99))))->
												BgL_fnamez00);
											{	/* Llib/error.scm 831 */
												bool_t BgL_res2804z00_3969;

												{	/* Llib/error.scm 831 */
													long BgL_l1z00_3956;

													BgL_l1z00_3956 =
														STRING_LENGTH(((obj_t) BgL_arg1763z00_2207));
													if ((BgL_l1z00_3956 == ((long) 8)))
														{	/* Llib/error.scm 831 */
															int BgL_arg2209z00_3959;

															{	/* Llib/error.scm 831 */
																char *BgL_auxz00_6740;
																char *BgL_tmpz00_6737;

																BgL_auxz00_6740 =
																	BSTRING_TO_STRING
																	(BGl_string3182z00zz__errorz00);
																BgL_tmpz00_6737 =
																	BSTRING_TO_STRING(((obj_t)
																		BgL_arg1763z00_2207));
																BgL_arg2209z00_3959 =
																	memcmp(BgL_tmpz00_6737, BgL_auxz00_6740,
																	BgL_l1z00_3956);
															}
															BgL_res2804z00_3969 =
																((long) (BgL_arg2209z00_3959) == ((long) 0));
														}
													else
														{	/* Llib/error.scm 831 */
															BgL_res2804z00_3969 = ((bool_t) 0);
														}
												}
												BgL_test3571z00_6729 = BgL_res2804z00_3969;
											}
										}
										if (BgL_test3571z00_6729)
											{	/* Llib/error.scm 831 */
												BgL_ez00_2216 = BgL_ez00_99;
											BgL_zc3z04anonymousza31769ze3z87_2217:
												{	/* Llib/error.scm 815 */
													obj_t BgL_arg1770z00_2218;

													{	/* Llib/error.scm 815 */
														obj_t BgL_res2790z00_3928;

														{	/* Llib/error.scm 815 */
															obj_t BgL_tmpz00_6745;

															BgL_tmpz00_6745 = BGL_CURRENT_DYNAMIC_ENV();
															BgL_res2790z00_3928 =
																BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6745);
														}
														BgL_arg1770z00_2218 = BgL_res2790z00_3928;
													}
													bgl_flush_output_port(BgL_arg1770z00_2218);
												}
												{	/* Llib/error.scm 816 */
													obj_t BgL_arg1771z00_2219;

													{	/* Llib/error.scm 816 */
														obj_t BgL_res2791z00_3931;

														{	/* Llib/error.scm 816 */
															obj_t BgL_tmpz00_6749;

															BgL_tmpz00_6749 = BGL_CURRENT_DYNAMIC_ENV();
															BgL_res2791z00_3931 =
																BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6749);
														}
														BgL_arg1771z00_2219 = BgL_res2791z00_3931;
													}
													{	/* Llib/error.scm 816 */
														obj_t BgL_list1772z00_2220;

														BgL_list1772z00_2220 =
															MAKE_YOUNG_PAIR(BgL_arg1771z00_2219, BNIL);
														BGl_displayz00zz__r4_output_6_10_3z00
															(BGl_string3180z00zz__errorz00,
															BgL_list1772z00_2220);
													}
												}
												if (NULLP(
														(((BgL_z62warningz62_bglt) COBJECT(
																	((BgL_z62warningz62_bglt) BgL_ez00_2216)))->
															BgL_argsz00)))
													{	/* Llib/error.scm 818 */
														BFALSE;
													}
												else
													{	/* Llib/error.scm 818 */
														{	/* Llib/error.scm 820 */
															obj_t BgL_arg1775z00_2224;
															obj_t BgL_arg1776z00_2225;

															{	/* Llib/error.scm 820 */
																obj_t BgL_pairz00_3933;

																BgL_pairz00_3933 =
																	(((BgL_z62warningz62_bglt) COBJECT(
																			((BgL_z62warningz62_bglt)
																				BgL_ez00_2216)))->BgL_argsz00);
																BgL_arg1775z00_2224 = CAR(BgL_pairz00_3933);
															}
															{	/* Llib/error.scm 820 */
																obj_t BgL_res2793z00_3935;

																{	/* Llib/error.scm 820 */
																	obj_t BgL_tmpz00_6761;

																	BgL_tmpz00_6761 = BGL_CURRENT_DYNAMIC_ENV();
																	BgL_res2793z00_3935 =
																		BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6761);
																}
																BgL_arg1776z00_2225 = BgL_res2793z00_3935;
															}
															BGl_displayzd2circlezd2zz__pp_circlez00
																(BgL_arg1775z00_2224, BgL_arg1776z00_2225);
														}
														{	/* Llib/error.scm 821 */
															obj_t BgL_arg1778z00_2227;

															{	/* Llib/error.scm 821 */
																obj_t BgL_res2794z00_3937;

																{	/* Llib/error.scm 821 */
																	obj_t BgL_tmpz00_6765;

																	BgL_tmpz00_6765 = BGL_CURRENT_DYNAMIC_ENV();
																	BgL_res2794z00_3937 =
																		BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6765);
																}
																BgL_arg1778z00_2227 = BgL_res2794z00_3937;
															}
															{	/* Llib/error.scm 821 */
																obj_t BgL_list1779z00_2228;

																BgL_list1779z00_2228 =
																	MAKE_YOUNG_PAIR(BgL_arg1778z00_2227, BNIL);
																BGl_newlinez00zz__r4_output_6_10_3z00
																	(BgL_list1779z00_2228);
															}
														}
														{	/* Llib/error.scm 822 */
															obj_t BgL_arg1781z00_2230;

															{	/* Llib/error.scm 824 */
																obj_t BgL_pairz00_3938;

																BgL_pairz00_3938 =
																	(((BgL_z62warningz62_bglt) COBJECT(
																			((BgL_z62warningz62_bglt)
																				BgL_ez00_2216)))->BgL_argsz00);
																BgL_arg1781z00_2230 = CDR(BgL_pairz00_3938);
															}
															{	/* Llib/error.scm 822 */
																obj_t BgL_list1782z00_2231;

																BgL_list1782z00_2231 =
																	MAKE_YOUNG_PAIR(BgL_arg1781z00_2230, BNIL);
																BGl_forzd2eachzd2zz__r4_control_features_6_9z00
																	(BGl_proc3181z00zz__errorz00,
																	BgL_list1782z00_2231);
															}
														}
													}
												{	/* Llib/error.scm 825 */
													obj_t BgL_arg1788z00_2238;

													{	/* Llib/error.scm 825 */
														obj_t BgL_res2796z00_3943;

														{	/* Llib/error.scm 825 */
															obj_t BgL_tmpz00_6775;

															BgL_tmpz00_6775 = BGL_CURRENT_DYNAMIC_ENV();
															BgL_res2796z00_3943 =
																BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6775);
														}
														BgL_arg1788z00_2238 = BgL_res2796z00_3943;
													}
													{	/* Llib/error.scm 825 */
														obj_t BgL_list1789z00_2239;

														BgL_list1789z00_2239 =
															MAKE_YOUNG_PAIR(BgL_arg1788z00_2238, BNIL);
														BGl_newlinez00zz__r4_output_6_10_3z00
															(BgL_list1789z00_2239);
													}
												}
												{	/* Llib/error.scm 826 */
													obj_t BgL_arg1790z00_2240;

													{	/* Llib/error.scm 826 */
														obj_t BgL_res2797z00_3945;

														{	/* Llib/error.scm 826 */
															obj_t BgL_tmpz00_6780;

															BgL_tmpz00_6780 = BGL_CURRENT_DYNAMIC_ENV();
															BgL_res2797z00_3945 =
																BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6780);
														}
														BgL_arg1790z00_2240 = BgL_res2797z00_3945;
													}
													bgl_flush_output_port(BgL_arg1790z00_2240);
												}
											}
										else
											{	/* Llib/error.scm 833 */
												bool_t BgL_test3574z00_6784;

												{	/* Llib/error.scm 833 */
													obj_t BgL_arg1762z00_2206;

													BgL_arg1762z00_2206 =
														(((BgL_z62exceptionz62_bglt) COBJECT(
																((BgL_z62exceptionz62_bglt)
																	((BgL_z62warningz62_bglt) BgL_ez00_99))))->
														BgL_fnamez00);
													{	/* Llib/error.scm 833 */
														bool_t BgL_res2809z00_3985;

														{	/* Llib/error.scm 833 */
															long BgL_l1z00_3972;

															BgL_l1z00_3972 =
																STRING_LENGTH(((obj_t) BgL_arg1762z00_2206));
															if ((BgL_l1z00_3972 == ((long) 7)))
																{	/* Llib/error.scm 833 */
																	int BgL_arg2209z00_3975;

																	{	/* Llib/error.scm 833 */
																		char *BgL_auxz00_6795;
																		char *BgL_tmpz00_6792;

																		BgL_auxz00_6795 =
																			BSTRING_TO_STRING
																			(BGl_string3183z00zz__errorz00);
																		BgL_tmpz00_6792 =
																			BSTRING_TO_STRING(((obj_t)
																				BgL_arg1762z00_2206));
																		BgL_arg2209z00_3975 =
																			memcmp(BgL_tmpz00_6792, BgL_auxz00_6795,
																			BgL_l1z00_3972);
																	}
																	BgL_res2809z00_3985 =
																		(
																		(long) (BgL_arg2209z00_3975) == ((long) 0));
																}
															else
																{	/* Llib/error.scm 833 */
																	BgL_res2809z00_3985 = ((bool_t) 0);
																}
														}
														BgL_test3574z00_6784 = BgL_res2809z00_3985;
													}
												}
												if (BgL_test3574z00_6784)
													{
														obj_t BgL_ez00_6800;

														BgL_ez00_6800 = BgL_ez00_99;
														BgL_ez00_2216 = BgL_ez00_6800;
														goto BgL_zc3z04anonymousza31769ze3z87_2217;
													}
												else
													{	/* Llib/error.scm 836 */
														obj_t BgL_arg1759z00_2203;
														obj_t BgL_arg1760z00_2204;
														obj_t BgL_arg1761z00_2205;

														BgL_arg1759z00_2203 =
															(((BgL_z62exceptionz62_bglt) COBJECT(
																	((BgL_z62exceptionz62_bglt)
																		((BgL_z62warningz62_bglt) BgL_ez00_99))))->
															BgL_fnamez00);
														BgL_arg1760z00_2204 =
															(((BgL_z62exceptionz62_bglt)
																COBJECT(((BgL_z62exceptionz62_bglt) (
																			(BgL_z62warningz62_bglt) BgL_ez00_99))))->
															BgL_locationz00);
														BgL_arg1761z00_2205 =
															(((BgL_z62warningz62_bglt)
																COBJECT(((BgL_z62warningz62_bglt)
																		BgL_ez00_99)))->BgL_argsz00);
														BGl_warningzf2locationzd2filez20zz__errorz00
															(BgL_arg1759z00_2203, BgL_arg1760z00_2204,
															BgL_arg1761z00_2205);
													}
											}
									}
								else
									{
										obj_t BgL_ez00_6810;

										BgL_ez00_6810 = BgL_ez00_99;
										BgL_ez00_2216 = BgL_ez00_6810;
										goto BgL_zc3z04anonymousza31769ze3z87_2217;
									}
							}
							if (CBOOL(
									(((BgL_z62exceptionz62_bglt) COBJECT(
												((BgL_z62exceptionz62_bglt)
													((BgL_z62warningz62_bglt) BgL_ez00_99))))->
										BgL_stackz00)))
								{	/* Llib/error.scm 841 */
									obj_t BgL_arg1765z00_2210;
									obj_t BgL_arg1766z00_2211;

									BgL_arg1765z00_2210 =
										(((BgL_z62exceptionz62_bglt) COBJECT(
												((BgL_z62exceptionz62_bglt)
													((BgL_z62warningz62_bglt) BgL_ez00_99))))->
										BgL_stackz00);
									{	/* Llib/error.scm 841 */
										obj_t BgL_res2810z00_3987;

										{	/* Llib/error.scm 841 */
											obj_t BgL_tmpz00_6819;

											BgL_tmpz00_6819 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res2810z00_3987 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6819);
										}
										BgL_arg1766z00_2211 = BgL_res2810z00_3987;
									}
									{	/* Llib/error.scm 248 */

										BGl_displayzd2tracezd2stackz00zz__errorz00
											(BgL_arg1765z00_2210, BgL_arg1766z00_2211,
											BINT(((long) 1)));
								}}
							else
								{	/* Llib/error.scm 840 */
									BFALSE;
								}
						}
					else
						{	/* Llib/error.scm 827 */
							BFALSE;
						}
				}
				return BFALSE;
			}
		}

	}



/* &warning-notify */
	obj_t BGl_z62warningzd2notifyzb0zz__errorz00(obj_t BgL_envz00_5032,
		obj_t BgL_ez00_5033)
	{
		{	/* Llib/error.scm 813 */
			return BGl_warningzd2notifyzd2zz__errorz00(BgL_ez00_5033);
		}

	}



/* &<@anonymous:1783> */
	obj_t BGl_z62zc3z04anonymousza31783ze3ze5zz__errorz00(obj_t BgL_envz00_5034,
		obj_t BgL_az00_5035)
	{
		{	/* Llib/error.scm 822 */
			{	/* Llib/error.scm 823 */
				obj_t BgL_arg1784z00_5123;

				{	/* Llib/error.scm 823 */
					obj_t BgL_res2795z00_5124;

					{	/* Llib/error.scm 823 */
						obj_t BgL_tmpz00_6825;

						BgL_tmpz00_6825 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2795z00_5124 = BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6825);
					}
					BgL_arg1784z00_5123 = BgL_res2795z00_5124;
				}
				return
					BGl_displayzd2circlezd2zz__pp_circlez00(BgL_az00_5035,
					BgL_arg1784z00_5123);
			}
		}

	}



/* warning-notify/location */
	BGL_EXPORTED_DEF obj_t BGl_warningzd2notifyzf2locationz20zz__errorz00(obj_t
		BgL_ez00_100, obj_t BgL_fnamez00_101, int BgL_locationz00_102)
	{
		{	/* Llib/error.scm 847 */
			{	/* Llib/error.scm 848 */
				bool_t BgL_test3577z00_6829;

				{	/* Llib/error.scm 848 */
					int BgL_arg1795z00_3989;

					BgL_arg1795z00_3989 = BGl_bigloozd2warningzd2zz__paramz00();
					BgL_test3577z00_6829 = ((long) (BgL_arg1795z00_3989) > ((long) 0));
				}
				if (BgL_test3577z00_6829)
					{	/* Llib/error.scm 850 */
						obj_t BgL_arg1794z00_3991;

						BgL_arg1794z00_3991 =
							(((BgL_z62warningz62_bglt) COBJECT(
									((BgL_z62warningz62_bglt) BgL_ez00_100)))->BgL_argsz00);
						return
							BGl_warningzf2locationzd2filez20zz__errorz00(BgL_fnamez00_101,
							BINT(BgL_locationz00_102), BgL_arg1794z00_3991);
					}
				else
					{	/* Llib/error.scm 848 */
						return BFALSE;
					}
			}
		}

	}



/* &warning-notify/location */
	obj_t BGl_z62warningzd2notifyzf2locationz42zz__errorz00(obj_t BgL_envz00_5036,
		obj_t BgL_ez00_5037, obj_t BgL_fnamez00_5038, obj_t BgL_locationz00_5039)
	{
		{	/* Llib/error.scm 847 */
			{	/* Llib/error.scm 848 */
				int BgL_auxz00_6844;
				obj_t BgL_auxz00_6837;

				{	/* Llib/error.scm 848 */
					obj_t BgL_tmpz00_6845;

					if (INTEGERP(BgL_locationz00_5039))
						{	/* Llib/error.scm 848 */
							BgL_tmpz00_6845 = BgL_locationz00_5039;
						}
					else
						{
							obj_t BgL_auxz00_6848;

							BgL_auxz00_6848 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
								BINT(((long) 33473)), BGl_string3184z00zz__errorz00,
								BGl_string3133z00zz__errorz00, BgL_locationz00_5039);
							FAILURE(BgL_auxz00_6848, BFALSE, BFALSE);
						}
					BgL_auxz00_6844 = CINT(BgL_tmpz00_6845);
				}
				if (STRINGP(BgL_fnamez00_5038))
					{	/* Llib/error.scm 848 */
						BgL_auxz00_6837 = BgL_fnamez00_5038;
					}
				else
					{
						obj_t BgL_auxz00_6840;

						BgL_auxz00_6840 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
							BINT(((long) 33473)), BGl_string3184z00zz__errorz00,
							BGl_string3153z00zz__errorz00, BgL_fnamez00_5038);
						FAILURE(BgL_auxz00_6840, BFALSE, BFALSE);
					}
				return
					BGl_warningzd2notifyzf2locationz20zz__errorz00(BgL_ez00_5037,
					BgL_auxz00_6837, BgL_auxz00_6844);
			}
		}

	}



/* warning/location-file */
	obj_t BGl_warningzf2locationzd2filez20zz__errorz00(obj_t BgL_fnamez00_103,
		obj_t BgL_locz00_104, obj_t BgL_argsz00_105)
	{
		{	/* Llib/error.scm 855 */
			{	/* Llib/error.scm 857 */
				obj_t BgL_portz00_2247;

				BgL_portz00_2247 =
					BGl_openzd2forzd2errorz00zz__errorz00(BgL_fnamez00_103);
				if (INPUT_PORTP(BgL_portz00_2247))
					{	/* Llib/error.scm 863 */
						obj_t BgL_filez00_2249;

						{	/* Llib/error.scm 864 */
							obj_t BgL_arg1798z00_2254;

							{	/* Llib/error.scm 864 */
								obj_t BgL_list1799z00_2255;

								{	/* Llib/error.scm 864 */
									obj_t BgL_arg1800z00_2256;

									{	/* Llib/error.scm 864 */
										obj_t BgL_arg1801z00_2257;

										BgL_arg1801z00_2257 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_arg1800z00_2256 =
											MAKE_YOUNG_PAIR(BgL_locz00_104, BgL_arg1801z00_2257);
									}
									BgL_list1799z00_2255 =
										MAKE_YOUNG_PAIR(BgL_fnamez00_103, BgL_arg1800z00_2256);
								}
								BgL_arg1798z00_2254 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BGl_symbol3135z00zz__errorz00, BgL_list1799z00_2255);
							}
							BgL_filez00_2249 =
								BGl_locationzd2linezd2numz00zz__errorz00(BgL_arg1798z00_2254);
						}
						{	/* Llib/error.scm 864 */
							obj_t BgL_lnumz00_2250;
							obj_t BgL_lpointz00_2251;
							obj_t BgL_lstringz00_2252;

							{	/* Llib/error.scm 865 */
								int BgL_tmpz00_6862;

								BgL_tmpz00_6862 = (int) (((long) 1));
								BgL_lnumz00_2250 = BGL_MVALUES_VAL(BgL_tmpz00_6862);
							}
							{	/* Llib/error.scm 865 */
								int BgL_tmpz00_6865;

								BgL_tmpz00_6865 = (int) (((long) 2));
								BgL_lpointz00_2251 = BGL_MVALUES_VAL(BgL_tmpz00_6865);
							}
							{	/* Llib/error.scm 865 */
								int BgL_tmpz00_6868;

								BgL_tmpz00_6868 = (int) (((long) 3));
								BgL_lstringz00_2252 = BGL_MVALUES_VAL(BgL_tmpz00_6868);
							}
							if (CBOOL(BgL_lnumz00_2250))
								{	/* Llib/error.scm 865 */
									return
										BGl_dozd2warnzf2locationz20zz__errorz00(BgL_fnamez00_103,
										BgL_lnumz00_2250, BgL_locz00_104, BgL_lstringz00_2252,
										BgL_lpointz00_2251, BgL_argsz00_105);
								}
							else
								{	/* Llib/error.scm 865 */
									return BGl_warningz00zz__errorz00(BgL_argsz00_105);
								}
						}
					}
				else
					{	/* Llib/error.scm 858 */
						return BGl_warningz00zz__errorz00(BgL_argsz00_105);
					}
			}
		}

	}



/* do-warn/location */
	obj_t BGl_dozd2warnzf2locationz20zz__errorz00(obj_t BgL_fnamez00_106,
		obj_t BgL_linez00_107, obj_t BgL_charz00_108, obj_t BgL_stringz00_109,
		obj_t BgL_markerz00_110, obj_t BgL_argsz00_111)
	{
		{	/* Llib/error.scm 872 */
			{	/* Llib/error.scm 873 */
				obj_t BgL_arg1803z00_2259;

				{	/* Llib/error.scm 873 */
					obj_t BgL_res2812z00_3995;

					{	/* Llib/error.scm 873 */
						obj_t BgL_tmpz00_6876;

						BgL_tmpz00_6876 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2812z00_3995 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_6876);
					}
					BgL_arg1803z00_2259 = BgL_res2812z00_3995;
				}
				bgl_flush_output_port(BgL_arg1803z00_2259);
			}
			{	/* Llib/error.scm 874 */
				obj_t BgL_arg1805z00_2260;

				{	/* Llib/error.scm 874 */
					obj_t BgL_res2813z00_3998;

					{	/* Llib/error.scm 874 */
						obj_t BgL_tmpz00_6880;

						BgL_tmpz00_6880 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2813z00_3998 = BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6880);
					}
					BgL_arg1805z00_2260 = BgL_res2813z00_3998;
				}
				{	/* Llib/error.scm 874 */
					obj_t BgL_list1806z00_2261;

					BgL_list1806z00_2261 = MAKE_YOUNG_PAIR(BgL_arg1805z00_2260, BNIL);
					BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1806z00_2261);
				}
			}
			{	/* Llib/error.scm 875 */
				obj_t BgL_spacezd2stringzd2_2262;

				if (((long) CINT(BgL_markerz00_110) > ((long) 0)))
					{	/* Llib/error.scm 875 */
						BgL_spacezd2stringzd2_2262 =
							make_string(
							(long) CINT(BgL_markerz00_110), ((unsigned char) ' '));
					}
				else
					{	/* Llib/error.scm 875 */
						BgL_spacezd2stringzd2_2262 = BGl_string3168z00zz__errorz00;
					}
				{	/* Llib/error.scm 875 */
					long BgL_lz00_2263;

					BgL_lz00_2263 = STRING_LENGTH(((obj_t) BgL_stringz00_109));
					{	/* Llib/error.scm 878 */
						obj_t BgL_nzd2markerzd2_2264;

						if (((long) CINT(BgL_markerz00_110) >= BgL_lz00_2263))
							{	/* Llib/error.scm 879 */
								BgL_nzd2markerzd2_2264 = BINT(BgL_lz00_2263);
							}
						else
							{	/* Llib/error.scm 879 */
								BgL_nzd2markerzd2_2264 = BgL_markerz00_110;
							}
						{	/* Llib/error.scm 879 */

							BGl_fixzd2tabulationz12zc0zz__errorz00(BgL_nzd2markerzd2_2264,
								BgL_stringz00_109, BgL_spacezd2stringzd2_2262);
							BGl_printzd2cursorzd2zz__errorz00(BgL_fnamez00_106,
								BgL_linez00_107, BgL_charz00_108, BgL_stringz00_109,
								BgL_spacezd2stringzd2_2262);
							{	/* Llib/error.scm 885 */
								obj_t BgL_arg1807z00_2265;

								{	/* Llib/error.scm 885 */
									obj_t BgL_res2818z00_4009;

									{	/* Llib/error.scm 885 */
										obj_t BgL_tmpz00_6898;

										BgL_tmpz00_6898 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2818z00_4009 =
											BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6898);
									}
									BgL_arg1807z00_2265 = BgL_res2818z00_4009;
								}
								{	/* Llib/error.scm 885 */
									obj_t BgL_list1808z00_2266;

									BgL_list1808z00_2266 =
										MAKE_YOUNG_PAIR(BgL_arg1807z00_2265, BNIL);
									BGl_displayz00zz__r4_output_6_10_3z00
										(BGl_string3180z00zz__errorz00, BgL_list1808z00_2266);
								}
							}
							if (NULLP(BgL_argsz00_111))
								{	/* Llib/error.scm 886 */
									BFALSE;
								}
							else
								{	/* Llib/error.scm 887 */
									obj_t BgL_portz00_2268;

									{	/* Llib/error.scm 887 */
										obj_t BgL_res2820z00_4012;

										{	/* Llib/error.scm 887 */
											obj_t BgL_tmpz00_6905;

											BgL_tmpz00_6905 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res2820z00_4012 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6905);
										}
										BgL_portz00_2268 = BgL_res2820z00_4012;
									}
									{	/* Llib/error.scm 888 */
										obj_t BgL_arg1810z00_2269;

										BgL_arg1810z00_2269 = CAR(((obj_t) BgL_argsz00_111));
										BGl_displayzd2circlezd2zz__pp_circlez00(BgL_arg1810z00_2269,
											BgL_portz00_2268);
									}
									{	/* Llib/error.scm 889 */
										obj_t BgL_list1811z00_2270;

										BgL_list1811z00_2270 =
											MAKE_YOUNG_PAIR(BgL_portz00_2268, BNIL);
										BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1811z00_2270);
									}
									{	/* Llib/error.scm 890 */
										obj_t BgL_arg1813z00_2272;

										BgL_arg1813z00_2272 = CDR(((obj_t) BgL_argsz00_111));
										{	/* Llib/error.scm 890 */
											obj_t BgL_list1814z00_2273;

											BgL_list1814z00_2273 =
												MAKE_YOUNG_PAIR(BgL_arg1813z00_2272, BNIL);
											BGl_forzd2eachzd2zz__r4_control_features_6_9z00
												(BGl_proc3185z00zz__errorz00, BgL_list1814z00_2273);
										}
									}
								}
							{	/* Llib/error.scm 893 */
								obj_t BgL_arg1817z00_2278;

								{	/* Llib/error.scm 893 */
									obj_t BgL_res2822z00_4019;

									{	/* Llib/error.scm 893 */
										obj_t BgL_tmpz00_6917;

										BgL_tmpz00_6917 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2822z00_4019 =
											BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6917);
									}
									BgL_arg1817z00_2278 = BgL_res2822z00_4019;
								}
								{	/* Llib/error.scm 893 */
									obj_t BgL_list1818z00_2279;

									BgL_list1818z00_2279 =
										MAKE_YOUNG_PAIR(BgL_arg1817z00_2278, BNIL);
									BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1818z00_2279);
								}
							}
							{	/* Llib/error.scm 894 */
								obj_t BgL_arg1819z00_2280;

								{	/* Llib/error.scm 894 */
									obj_t BgL_res2823z00_4021;

									{	/* Llib/error.scm 894 */
										obj_t BgL_tmpz00_6922;

										BgL_tmpz00_6922 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2823z00_4021 =
											BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6922);
									}
									BgL_arg1819z00_2280 = BgL_res2823z00_4021;
								}
								return bgl_flush_output_port(BgL_arg1819z00_2280);
							}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1815> */
	obj_t BGl_z62zc3z04anonymousza31815ze3ze5zz__errorz00(obj_t BgL_envz00_5041,
		obj_t BgL_az00_5042)
	{
		{	/* Llib/error.scm 890 */
			{	/* Llib/error.scm 891 */
				obj_t BgL_arg1816z00_5125;

				{	/* Llib/error.scm 891 */
					obj_t BgL_res2821z00_5126;

					{	/* Llib/error.scm 891 */
						obj_t BgL_tmpz00_6926;

						BgL_tmpz00_6926 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2821z00_5126 = BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6926);
					}
					BgL_arg1816z00_5125 = BgL_res2821z00_5126;
				}
				return
					BGl_displayzd2circlezd2zz__pp_circlez00(BgL_az00_5042,
					BgL_arg1816z00_5125);
			}
		}

	}



/* _display-trace-stack */
	obj_t BGl__displayzd2tracezd2stackz00zz__errorz00(obj_t BgL_env1184z00_117,
		obj_t BgL_opt1183z00_116)
	{
		{	/* Llib/error.scm 907 */
			{	/* Llib/error.scm 907 */
				obj_t BgL_g1185z00_2285;
				obj_t BgL_g1186z00_2286;

				BgL_g1185z00_2285 = VECTOR_REF(BgL_opt1183z00_116, ((long) 0));
				BgL_g1186z00_2286 = VECTOR_REF(BgL_opt1183z00_116, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1183z00_116))
					{
					case ((long) 2):

						{	/* Llib/error.scm 907 */

							{	/* Llib/error.scm 907 */
								obj_t BgL_auxz00_6932;

								if (OUTPUT_PORTP(BgL_g1186z00_2286))
									{	/* Llib/error.scm 907 */
										BgL_auxz00_6932 = BgL_g1186z00_2286;
									}
								else
									{
										obj_t BgL_auxz00_6935;

										BgL_auxz00_6935 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3131z00zz__errorz00, BINT(((long) 36115)),
											BGl_string3186z00zz__errorz00,
											BGl_string3187z00zz__errorz00, BgL_g1186z00_2286);
										FAILURE(BgL_auxz00_6935, BFALSE, BFALSE);
									}
								return
									BGl_displayzd2tracezd2stackz00zz__errorz00(BgL_g1185z00_2285,
									BgL_auxz00_6932, BINT(((long) 1)));
						}} break;
					case ((long) 3):

						{	/* Llib/error.scm 907 */
							obj_t BgL_offsetz00_2291;

							BgL_offsetz00_2291 = VECTOR_REF(BgL_opt1183z00_116, ((long) 2));
							{	/* Llib/error.scm 907 */

								{	/* Llib/error.scm 907 */
									obj_t BgL_auxz00_6942;

									if (OUTPUT_PORTP(BgL_g1186z00_2286))
										{	/* Llib/error.scm 907 */
											BgL_auxz00_6942 = BgL_g1186z00_2286;
										}
									else
										{
											obj_t BgL_auxz00_6945;

											BgL_auxz00_6945 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3131z00zz__errorz00, BINT(((long) 36115)),
												BGl_string3186z00zz__errorz00,
												BGl_string3187z00zz__errorz00, BgL_g1186z00_2286);
											FAILURE(BgL_auxz00_6945, BFALSE, BFALSE);
										}
									return
										BGl_displayzd2tracezd2stackz00zz__errorz00
										(BgL_g1185z00_2285, BgL_auxz00_6942, BgL_offsetz00_2291);
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



/* display-trace-stack */
	BGL_EXPORTED_DEF obj_t BGl_displayzd2tracezd2stackz00zz__errorz00(obj_t
		BgL_stackz00_113, obj_t BgL_portz00_114, obj_t BgL_offsetz00_115)
	{
		{	/* Llib/error.scm 907 */
			if (PAIRP(BgL_stackz00_113))
				{	/* Llib/error.scm 984 */
					obj_t BgL_g1114z00_2295;
					obj_t BgL_g1115z00_2296;

					BgL_g1114z00_2295 = CDR(BgL_stackz00_113);
					BgL_g1115z00_2296 = CAR(BgL_stackz00_113);
					{
						obj_t BgL_iz00_2298;
						obj_t BgL_stkz00_2299;
						obj_t BgL_hdsz00_2300;
						long BgL_hdnz00_2301;

						BgL_iz00_2298 = BgL_offsetz00_115;
						BgL_stkz00_2299 = BgL_g1114z00_2295;
						BgL_hdsz00_2300 = BgL_g1115z00_2296;
						BgL_hdnz00_2301 = ((long) 1);
					BgL_zc3z04anonymousza31825ze3z87_2302:
						if (NULLP(BgL_stkz00_2299))
							{	/* Llib/error.scm 989 */
								BGl_displayzd2tracezd2stackzd2frameze70z35zz__errorz00
									(BgL_portz00_114, BgL_hdsz00_2300, BgL_iz00_2298,
									BgL_hdnz00_2301);
								return bgl_flush_output_port(BgL_portz00_114);
							}
						else
							{	/* Llib/error.scm 989 */
								if (PAIRP(BgL_stkz00_2299))
									{	/* Llib/error.scm 992 */
										if ((CAR(BgL_stkz00_2299) == BgL_hdsz00_2300))
											{	/* Llib/error.scm 997 */
												long BgL_arg1830z00_2307;
												obj_t BgL_arg1831z00_2308;
												long BgL_arg1832z00_2309;

												BgL_arg1830z00_2307 =
													((long) CINT(BgL_iz00_2298) + ((long) 1));
												BgL_arg1831z00_2308 = CDR(BgL_stkz00_2299);
												BgL_arg1832z00_2309 = (BgL_hdnz00_2301 + ((long) 1));
												{
													long BgL_hdnz00_6972;
													obj_t BgL_stkz00_6971;
													obj_t BgL_iz00_6969;

													BgL_iz00_6969 = BINT(BgL_arg1830z00_2307);
													BgL_stkz00_6971 = BgL_arg1831z00_2308;
													BgL_hdnz00_6972 = BgL_arg1832z00_2309;
													BgL_hdnz00_2301 = BgL_hdnz00_6972;
													BgL_stkz00_2299 = BgL_stkz00_6971;
													BgL_iz00_2298 = BgL_iz00_6969;
													goto BgL_zc3z04anonymousza31825ze3z87_2302;
												}
											}
										else
											{
												long BgL_hdnz00_6979;
												obj_t BgL_hdsz00_6977;
												obj_t BgL_stkz00_6975;
												obj_t BgL_iz00_6973;

												BgL_iz00_6973 =
													BGl_displayzd2tracezd2stackzd2frameze70z35zz__errorz00
													(BgL_portz00_114, BgL_hdsz00_2300, BgL_iz00_2298,
													BgL_hdnz00_2301);
												BgL_stkz00_6975 = CDR(BgL_stkz00_2299);
												BgL_hdsz00_6977 = CAR(BgL_stkz00_2299);
												BgL_hdnz00_6979 = ((long) 1);
												BgL_hdnz00_2301 = BgL_hdnz00_6979;
												BgL_hdsz00_2300 = BgL_hdsz00_6977;
												BgL_stkz00_2299 = BgL_stkz00_6975;
												BgL_iz00_2298 = BgL_iz00_6973;
												goto BgL_zc3z04anonymousza31825ze3z87_2302;
											}
									}
								else
									{	/* Llib/error.scm 992 */
										{	/* Llib/error.scm 993 */
											obj_t BgL_arg1838z00_2314;

											{	/* Llib/error.scm 993 */
												obj_t BgL_res2856z00_4097;

												{	/* Llib/error.scm 993 */
													obj_t BgL_tmpz00_6980;

													BgL_tmpz00_6980 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res2856z00_4097 =
														BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_6980);
												}
												BgL_arg1838z00_2314 = BgL_res2856z00_4097;
											}
											{	/* Llib/error.scm 993 */
												obj_t BgL_list1839z00_2315;

												BgL_list1839z00_2315 =
													MAKE_YOUNG_PAIR(BgL_stackz00_113, BNIL);
												BGl_fprintfz00zz__r4_output_6_10_3z00
													(BgL_arg1838z00_2314, BGl_string3188z00zz__errorz00,
													BgL_list1839z00_2315);
											}
										}
										return bgl_flush_output_port(BgL_portz00_114);
									}
							}
					}
				}
			else
				{	/* Llib/error.scm 983 */
					return BFALSE;
				}
		}

	}



/* display-trace-stack-frame~0 */
	obj_t BGl_displayzd2tracezd2stackzd2frameze70z35zz__errorz00(obj_t
		BgL_portz00_5074, obj_t BgL_framez00_2322, obj_t BgL_levelz00_2323,
		long BgL_numz00_2324)
	{
		{	/* Llib/error.scm 981 */
			{
				obj_t BgL_namez00_2326;
				obj_t BgL_locz00_2327;
				obj_t BgL_restz00_2328;
				obj_t BgL_namez00_2330;

				if (PAIRP(BgL_framez00_2322))
					{	/* Llib/error.scm 981 */
						obj_t BgL_cdrzd2347zd2_2336;

						BgL_cdrzd2347zd2_2336 = CDR(BgL_framez00_2322);
						if (PAIRP(BgL_cdrzd2347zd2_2336))
							{	/* Llib/error.scm 981 */
								obj_t BgL_cdrzd2352zd2_2338;

								BgL_cdrzd2352zd2_2338 = CDR(BgL_cdrzd2347zd2_2336);
								{	/* Llib/error.scm 981 */
									bool_t BgL_test3593z00_6992;

									if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
										(BgL_cdrzd2352zd2_2338))
										{	/* Llib/error.scm 902 */
											obj_t BgL_list1822z00_4072;

											BgL_list1822z00_4072 =
												MAKE_YOUNG_PAIR(BgL_cdrzd2352zd2_2338, BNIL);
											BgL_test3593z00_6992 =
												CBOOL(BGl_everyz00zz__r4_pairs_and_lists_6_3z00
												(BGl_pairzf3zd2envz21zz__r4_pairs_and_lists_6_3z00,
													BgL_list1822z00_4072));
										}
									else
										{	/* Llib/error.scm 902 */
											BgL_test3593z00_6992 = ((bool_t) 0);
										}
									if (BgL_test3593z00_6992)
										{	/* Llib/error.scm 981 */
											obj_t BgL_arg1847z00_2340;
											obj_t BgL_arg1848z00_2341;

											BgL_arg1847z00_2340 = CAR(BgL_framez00_2322);
											BgL_arg1848z00_2341 = CAR(BgL_cdrzd2347zd2_2336);
											{	/* Llib/error.scm 981 */
												long BgL_tmpz00_7000;

												BgL_namez00_2326 = BgL_arg1847z00_2340;
												BgL_locz00_2327 = BgL_arg1848z00_2341;
												BgL_restz00_2328 = BgL_cdrzd2352zd2_2338;
												{	/* Llib/error.scm 921 */
													obj_t BgL_marginz00_2349;
													obj_t BgL_fmtz00_2350;

													BgL_marginz00_2349 =
														BGl_assqz00zz__r4_pairs_and_lists_6_3z00
														(BGl_symbol3194z00zz__errorz00, BgL_restz00_2328);
													BgL_fmtz00_2350 =
														BGl_assqz00zz__r4_pairs_and_lists_6_3z00
														(BGl_symbol3196z00zz__errorz00, BgL_restz00_2328);
													{	/* Llib/error.scm 924 */
														bool_t BgL_test3595z00_7003;

														if (PAIRP(BgL_marginz00_2349))
															{	/* Llib/error.scm 924 */
																obj_t BgL_tmpz00_7006;

																BgL_tmpz00_7006 = CDR(BgL_marginz00_2349);
																BgL_test3595z00_7003 = CHARP(BgL_tmpz00_7006);
															}
														else
															{	/* Llib/error.scm 924 */
																BgL_test3595z00_7003 = ((bool_t) 0);
															}
														if (BgL_test3595z00_7003)
															{	/* Llib/error.scm 925 */
																obj_t BgL_arg1861z00_2354;

																BgL_arg1861z00_2354 = CDR(BgL_marginz00_2349);
																{	/* Llib/error.scm 925 */
																	obj_t BgL_list1862z00_2355;

																	BgL_list1862z00_2355 =
																		MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
																	BGl_displayz00zz__r4_output_6_10_3z00
																		(BgL_arg1861z00_2354, BgL_list1862z00_2355);
																}
															}
														else
															{	/* Llib/error.scm 926 */
																obj_t BgL_list1863z00_2356;

																BgL_list1863z00_2356 =
																	MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
																BGl_displayz00zz__r4_output_6_10_3z00
																	(BGl_string3198z00zz__errorz00,
																	BgL_list1863z00_2356);
															}
													}
													if (((long) CINT(BgL_levelz00_2323) < ((long) 10)))
														{	/* Llib/error.scm 928 */
															obj_t BgL_list1867z00_2360;

															BgL_list1867z00_2360 =
																MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
															BGl_displayz00zz__r4_output_6_10_3z00
																(BGl_string3191z00zz__errorz00,
																BgL_list1867z00_2360);
														}
													else
														{	/* Llib/error.scm 928 */
															if (
																((long) CINT(BgL_levelz00_2323) < ((long) 100)))
																{	/* Llib/error.scm 929 */
																	obj_t BgL_list1869z00_2362;

																	BgL_list1869z00_2362 =
																		MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
																	BGl_displayz00zz__r4_output_6_10_3z00
																		(BGl_string3192z00zz__errorz00,
																		BgL_list1869z00_2362);
																}
															else
																{	/* Llib/error.scm 929 */
																	if (
																		((long) CINT(BgL_levelz00_2323) <
																			((long) 1000)))
																		{	/* Llib/error.scm 930 */
																			obj_t BgL_list1871z00_2364;

																			BgL_list1871z00_2364 =
																				MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
																			BGl_displayz00zz__r4_output_6_10_3z00
																				(BGl_string3198z00zz__errorz00,
																				BgL_list1871z00_2364);
																		}
																	else
																		{	/* Llib/error.scm 930 */
																			BFALSE;
																		}
																}
														}
													{	/* Llib/error.scm 932 */
														obj_t BgL_list1872z00_2365;

														BgL_list1872z00_2365 =
															MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
														BGl_displayz00zz__r4_output_6_10_3z00
															(BgL_levelz00_2323, BgL_list1872z00_2365);
													}
													{	/* Llib/error.scm 933 */
														obj_t BgL_list1873z00_2366;

														BgL_list1873z00_2366 =
															MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
														BGl_displayz00zz__r4_output_6_10_3z00
															(BGl_string3193z00zz__errorz00,
															BgL_list1873z00_2366);
													}
													{	/* Llib/error.scm 935 */
														bool_t BgL_test3600z00_7033;

														if (PAIRP(BgL_fmtz00_2350))
															{	/* Llib/error.scm 935 */
																obj_t BgL_tmpz00_7036;

																BgL_tmpz00_7036 = CDR(BgL_fmtz00_2350);
																BgL_test3600z00_7033 = STRINGP(BgL_tmpz00_7036);
															}
														else
															{	/* Llib/error.scm 935 */
																BgL_test3600z00_7033 = ((bool_t) 0);
															}
														if (BgL_test3600z00_7033)
															{	/* Llib/error.scm 936 */
																obj_t BgL_arg1878z00_2370;

																{	/* Llib/error.scm 936 */
																	obj_t BgL_arg1881z00_2372;

																	BgL_arg1881z00_2372 = CDR(BgL_fmtz00_2350);
																	{	/* Llib/error.scm 936 */
																		obj_t BgL_list1882z00_2373;

																		BgL_list1882z00_2373 =
																			MAKE_YOUNG_PAIR(BgL_namez00_2326, BNIL);
																		BgL_arg1878z00_2370 =
																			BGl_formatz00zz__r4_output_6_10_3z00
																			(BgL_arg1881z00_2372,
																			BgL_list1882z00_2373);
																	}
																}
																{	/* Llib/error.scm 936 */
																	obj_t BgL_list1879z00_2371;

																	BgL_list1879z00_2371 =
																		MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
																	BGl_displayz00zz__r4_output_6_10_3z00
																		(BgL_arg1878z00_2370, BgL_list1879z00_2371);
																}
															}
														else
															{	/* Llib/error.scm 937 */
																obj_t BgL_list1883z00_2374;

																BgL_list1883z00_2374 =
																	MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
																BGl_displayz00zz__r4_output_6_10_3z00
																	(BgL_namez00_2326, BgL_list1883z00_2374);
															}
													}
													if ((BgL_numz00_2324 > ((long) 1)))
														{	/* Llib/error.scm 939 */
															{	/* Llib/error.scm 940 */
																obj_t BgL_list1886z00_2378;

																BgL_list1886z00_2378 =
																	MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
																BGl_displayz00zz__r4_output_6_10_3z00
																	(BGl_string3199z00zz__errorz00,
																	BgL_list1886z00_2378);
															}
															{	/* Llib/error.scm 941 */
																obj_t BgL_list1887z00_2379;

																BgL_list1887z00_2379 =
																	MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
																BGl_displayz00zz__r4_output_6_10_3z00(BINT
																	(BgL_numz00_2324), BgL_list1887z00_2379);
															}
															{	/* Llib/error.scm 942 */
																obj_t BgL_list1888z00_2380;

																BgL_list1888z00_2380 =
																	MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
																BGl_displayz00zz__r4_output_6_10_3z00
																	(BGl_string3200z00zz__errorz00,
																	BgL_list1888z00_2380);
														}}
													else
														{	/* Llib/error.scm 939 */
															if (CBOOL(BgL_locz00_2327))
																{	/* Llib/error.scm 943 */
																	{	/* Llib/error.scm 944 */
																		obj_t BgL_list1889z00_2381;

																		BgL_list1889z00_2381 =
																			MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
																		BGl_displayz00zz__r4_output_6_10_3z00
																			(BGl_string3201z00zz__errorz00,
																			BgL_list1889z00_2381);
																	}
																	{	/* Llib/error.scm 945 */
																		obj_t BgL_filez00_2382;

																		BgL_filez00_2382 =
																			BGl_locationzd2linezd2numz00zz__errorz00
																			(BgL_locz00_2327);
																		{	/* Llib/error.scm 946 */
																			obj_t BgL_lnumz00_2383;
																			obj_t BgL_lpointz00_2384;
																			obj_t BgL_lstringz00_2385;

																			{	/* Llib/error.scm 949 */
																				int BgL_tmpz00_7060;

																				BgL_tmpz00_7060 = (int) (((long) 1));
																				BgL_lnumz00_2383 =
																					BGL_MVALUES_VAL(BgL_tmpz00_7060);
																			}
																			{	/* Llib/error.scm 949 */
																				int BgL_tmpz00_7063;

																				BgL_tmpz00_7063 = (int) (((long) 2));
																				BgL_lpointz00_2384 =
																					BGL_MVALUES_VAL(BgL_tmpz00_7063);
																			}
																			{	/* Llib/error.scm 949 */
																				int BgL_tmpz00_7066;

																				BgL_tmpz00_7066 = (int) (((long) 3));
																				BgL_lstringz00_2385 =
																					BGL_MVALUES_VAL(BgL_tmpz00_7066);
																			}
																			if (CBOOL(BgL_filez00_2382))
																				{	/* Llib/error.scm 949 */
																					obj_t BgL_arg1891z00_2386;

																					if ((BgL_numz00_2324 == ((long) 1)))
																						{	/* Llib/error.scm 911 */
																							BgL_arg1891z00_2386 =
																								BGl_filenamezd2forzd2errorz00zz__errorz00
																								(BgL_filez00_2382, ((long) 12));
																						}
																					else
																						{	/* Llib/error.scm 911 */
																							if (fexists(BSTRING_TO_STRING
																									(BgL_filez00_2382)))
																								{	/* Llib/error.scm 913 */
																									BgL_arg1891z00_2386 =
																										BgL_filez00_2382;
																								}
																							else
																								{	/* Llib/error.scm 913 */
																									BgL_arg1891z00_2386 =
																										BGl_string3168z00zz__errorz00;
																								}
																						}
																					{	/* Llib/error.scm 949 */
																						obj_t BgL_list1892z00_2387;

																						BgL_list1892z00_2387 =
																							MAKE_YOUNG_PAIR(BgL_portz00_5074,
																							BNIL);
																						BGl_displayz00zz__r4_output_6_10_3z00
																							(BgL_arg1891z00_2386,
																							BgL_list1892z00_2387);
																					}
																				}
																			else
																				{	/* Llib/error.scm 948 */
																					BFALSE;
																				}
																			if (CBOOL(BgL_lnumz00_2383))
																				{	/* Llib/error.scm 952 */
																					{	/* Llib/error.scm 953 */
																						obj_t BgL_list1893z00_2388;

																						BgL_list1893z00_2388 =
																							MAKE_YOUNG_PAIR(BgL_portz00_5074,
																							BNIL);
																						BGl_displayz00zz__r4_output_6_10_3z00
																							(BGl_string3202z00zz__errorz00,
																							BgL_list1893z00_2388);
																					}
																					{	/* Llib/error.scm 954 */
																						obj_t BgL_list1894z00_2389;

																						BgL_list1894z00_2389 =
																							MAKE_YOUNG_PAIR(BgL_portz00_5074,
																							BNIL);
																						BGl_displayz00zz__r4_output_6_10_3z00
																							(BgL_lnumz00_2383,
																							BgL_list1894z00_2389);
																					}
																				}
																			else
																				{	/* Llib/error.scm 952 */
																					if (CBOOL(BgL_lpointz00_2384))
																						{	/* Llib/error.scm 955 */
																							{	/* Llib/error.scm 956 */
																								obj_t BgL_list1895z00_2390;

																								BgL_list1895z00_2390 =
																									MAKE_YOUNG_PAIR
																									(BgL_portz00_5074, BNIL);
																								BGl_displayz00zz__r4_output_6_10_3z00
																									(BGl_string3203z00zz__errorz00,
																									BgL_list1895z00_2390);
																							}
																							{	/* Llib/error.scm 957 */
																								obj_t BgL_list1896z00_2391;

																								BgL_list1896z00_2391 =
																									MAKE_YOUNG_PAIR
																									(BgL_portz00_5074, BNIL);
																								BGl_displayz00zz__r4_output_6_10_3z00
																									(BgL_lpointz00_2384,
																									BgL_list1896z00_2391);
																							}
																						}
																					else
																						{	/* Llib/error.scm 955 */
																							BFALSE;
																						}
																				}
																		}
																	}
																}
															else
																{	/* Llib/error.scm 943 */
																	BFALSE;
																}
														}
													{	/* Llib/error.scm 958 */
														obj_t BgL_list1897z00_2392;

														BgL_list1897z00_2392 =
															MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
														BGl_newlinez00zz__r4_output_6_10_3z00
															(BgL_list1897z00_2392);
													}
												}
												BgL_tmpz00_7000 =
													((long) CINT(BgL_levelz00_2323) + ((long) 1));
												return BINT(BgL_tmpz00_7000);
											}
										}
									else
										{	/* Llib/error.scm 981 */
											long BgL_tmpz00_7096;

										BgL_tagzd2338zd2_2333:
											{	/* Llib/error.scm 978 */
												obj_t BgL_list1913z00_2409;

												BgL_list1913z00_2409 =
													MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
												BGl_displayz00zz__r4_output_6_10_3z00
													(BGl_string3189z00zz__errorz00, BgL_list1913z00_2409);
											}
											{	/* Llib/error.scm 979 */
												obj_t BgL_list1914z00_2410;

												BgL_list1914z00_2410 =
													MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
												BGl_displayz00zz__r4_output_6_10_3z00(BgL_framez00_2322,
													BgL_list1914z00_2410);
											}
											{	/* Llib/error.scm 980 */
												obj_t BgL_list1915z00_2411;

												BgL_list1915z00_2411 =
													MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
												BGl_newlinez00zz__r4_output_6_10_3z00
													(BgL_list1915z00_2411);
											}
											BgL_tmpz00_7096 =
												((long) CINT(BgL_levelz00_2323) + ((long) 1));
											return BINT(BgL_tmpz00_7096);
										}
								}
							}
						else
							{	/* Llib/error.scm 981 */
								if (NULLP(BgL_cdrzd2347zd2_2336))
									{	/* Llib/error.scm 981 */
										obj_t BgL_arg1852z00_2345;

										BgL_arg1852z00_2345 = CAR(BgL_framez00_2322);
										{	/* Llib/error.scm 981 */
											long BgL_tmpz00_7109;

											BgL_namez00_2330 = BgL_arg1852z00_2345;
											if (((long) CINT(BgL_levelz00_2323) < ((long) 10)))
												{	/* Llib/error.scm 962 */
													obj_t BgL_list1899z00_2394;

													BgL_list1899z00_2394 =
														MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
													BGl_displayz00zz__r4_output_6_10_3z00
														(BGl_string3190z00zz__errorz00,
														BgL_list1899z00_2394);
												}
											else
												{	/* Llib/error.scm 962 */
													if (((long) CINT(BgL_levelz00_2323) < ((long) 100)))
														{	/* Llib/error.scm 963 */
															obj_t BgL_list1901z00_2396;

															BgL_list1901z00_2396 =
																MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
															BGl_displayz00zz__r4_output_6_10_3z00
																(BGl_string3191z00zz__errorz00,
																BgL_list1901z00_2396);
														}
													else
														{	/* Llib/error.scm 963 */
															if (
																((long) CINT(BgL_levelz00_2323) <
																	((long) 1000)))
																{	/* Llib/error.scm 964 */
																	obj_t BgL_list1903z00_2398;

																	BgL_list1903z00_2398 =
																		MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
																	BGl_displayz00zz__r4_output_6_10_3z00
																		(BGl_string3192z00zz__errorz00,
																		BgL_list1903z00_2398);
																}
															else
																{	/* Llib/error.scm 964 */
																	BFALSE;
																}
														}
												}
											{	/* Llib/error.scm 966 */
												obj_t BgL_list1904z00_2399;

												BgL_list1904z00_2399 =
													MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
												BGl_displayz00zz__r4_output_6_10_3z00(BgL_levelz00_2323,
													BgL_list1904z00_2399);
											}
											{	/* Llib/error.scm 967 */
												obj_t BgL_arg1905z00_2400;

												{	/* Llib/error.scm 967 */
													bool_t BgL_test3613z00_7127;

													if (SYMBOLP(BgL_namez00_2330))
														{	/* Llib/error.scm 967 */
															BgL_test3613z00_7127 = ((bool_t) 1);
														}
													else
														{	/* Llib/error.scm 967 */
															BgL_test3613z00_7127 = STRINGP(BgL_namez00_2330);
														}
													if (BgL_test3613z00_7127)
														{	/* Llib/error.scm 967 */
															BgL_arg1905z00_2400 =
																BGl_string3193z00zz__errorz00;
														}
													else
														{	/* Llib/error.scm 967 */
															BgL_arg1905z00_2400 =
																BGl_string3189z00zz__errorz00;
														}
												}
												{	/* Llib/error.scm 967 */
													obj_t BgL_list1906z00_2401;

													BgL_list1906z00_2401 =
														MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
													BGl_displayz00zz__r4_output_6_10_3z00
														(BgL_arg1905z00_2400, BgL_list1906z00_2401);
												}
											}
											{	/* Llib/error.scm 968 */
												obj_t BgL_list1909z00_2405;

												BgL_list1909z00_2405 =
													MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
												BGl_displayz00zz__r4_output_6_10_3z00(BgL_namez00_2330,
													BgL_list1909z00_2405);
											}
											{	/* Llib/error.scm 969 */
												obj_t BgL_list1910z00_2406;

												BgL_list1910z00_2406 =
													MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
												BGl_newlinez00zz__r4_output_6_10_3z00
													(BgL_list1910z00_2406);
											}
											BgL_tmpz00_7109 =
												((long) CINT(BgL_levelz00_2323) + ((long) 1));
											return BINT(BgL_tmpz00_7109);
										}
									}
								else
									{	/* Llib/error.scm 981 */
										long BgL_tmpz00_7140;

										goto BgL_tagzd2338zd2_2333;
										return BINT(BgL_tmpz00_7140);
									}
							}
					}
				else
					{	/* Llib/error.scm 981 */
						if (STRINGP(BgL_framez00_2322))
							{	/* Llib/error.scm 981 */
								{	/* Llib/error.scm 973 */
									obj_t BgL_list1911z00_2407;

									BgL_list1911z00_2407 =
										MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
									BGl_displayz00zz__r4_output_6_10_3z00(BgL_framez00_2322,
										BgL_list1911z00_2407);
								}
								{	/* Llib/error.scm 974 */
									obj_t BgL_list1912z00_2408;

									BgL_list1912z00_2408 =
										MAKE_YOUNG_PAIR(BgL_portz00_5074, BNIL);
									BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list1912z00_2408);
								}
								return BgL_levelz00_2323;
							}
						else
							{	/* Llib/error.scm 981 */
								long BgL_tmpz00_7148;

								goto BgL_tagzd2338zd2_2333;
								return BINT(BgL_tmpz00_7148);
							}
					}
			}
		}

	}



/* display-trace-stack-source */
	BGL_EXPORTED_DEF obj_t
		BGl_displayzd2tracezd2stackzd2sourcezd2zz__errorz00(obj_t BgL_stackz00_118,
		obj_t BgL_portz00_119)
	{
		{	/* Llib/error.scm 1008 */
			{
				obj_t BgL_stackz00_2416;

				BgL_stackz00_2416 = BgL_stackz00_118;
			BgL_zc3z04anonymousza31916ze3z87_2417:
				if (PAIRP(BgL_stackz00_2416))
					{
						obj_t BgL_namez00_2419;
						obj_t BgL_locz00_2420;
						obj_t BgL_restz00_2421;

						{	/* Llib/error.scm 1021 */
							obj_t BgL_ezd2371zd2_2424;

							BgL_ezd2371zd2_2424 = CAR(BgL_stackz00_2416);
							if (PAIRP(BgL_ezd2371zd2_2424))
								{	/* Llib/error.scm 1021 */
									obj_t BgL_cdrzd2379zd2_2426;

									BgL_cdrzd2379zd2_2426 = CDR(BgL_ezd2371zd2_2424);
									if (PAIRP(BgL_cdrzd2379zd2_2426))
										{	/* Llib/error.scm 1021 */
											obj_t BgL_cdrzd2384zd2_2428;

											BgL_cdrzd2384zd2_2428 = CDR(BgL_cdrzd2379zd2_2426);
											{	/* Llib/error.scm 1021 */
												bool_t BgL_test3619z00_7159;

												if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
													(BgL_cdrzd2384zd2_2428))
													{	/* Llib/error.scm 902 */
														obj_t BgL_list1822z00_4144;

														BgL_list1822z00_4144 =
															MAKE_YOUNG_PAIR(BgL_cdrzd2384zd2_2428, BNIL);
														BgL_test3619z00_7159 =
															CBOOL(BGl_everyz00zz__r4_pairs_and_lists_6_3z00
															(BGl_pairzf3zd2envz21zz__r4_pairs_and_lists_6_3z00,
																BgL_list1822z00_4144));
													}
												else
													{	/* Llib/error.scm 902 */
														BgL_test3619z00_7159 = ((bool_t) 0);
													}
												if (BgL_test3619z00_7159)
													{	/* Llib/error.scm 1021 */
														BgL_namez00_2419 = CAR(BgL_ezd2371zd2_2424);
														BgL_locz00_2420 = CAR(BgL_cdrzd2379zd2_2426);
														BgL_restz00_2421 = BgL_cdrzd2384zd2_2428;
														{	/* Llib/error.scm 1024 */
															obj_t BgL_filez00_2432;

															BgL_filez00_2432 =
																BGl_locationzd2linezd2numz00zz__errorz00
																(BgL_locz00_2420);
															{	/* Llib/error.scm 1025 */
																obj_t BgL_lnumz00_2433;
																obj_t BgL_lpointz00_2434;
																obj_t BgL_lstringz00_2435;

																{	/* Llib/error.scm 1027 */
																	int BgL_tmpz00_7166;

																	BgL_tmpz00_7166 = (int) (((long) 1));
																	BgL_lnumz00_2433 =
																		BGL_MVALUES_VAL(BgL_tmpz00_7166);
																}
																{	/* Llib/error.scm 1027 */
																	int BgL_tmpz00_7169;

																	BgL_tmpz00_7169 = (int) (((long) 2));
																	BgL_lpointz00_2434 =
																		BGL_MVALUES_VAL(BgL_tmpz00_7169);
																}
																{	/* Llib/error.scm 1027 */
																	int BgL_tmpz00_7172;

																	BgL_tmpz00_7172 = (int) (((long) 3));
																	BgL_lstringz00_2435 =
																		BGL_MVALUES_VAL(BgL_tmpz00_7172);
																}
																{	/* Llib/error.scm 1027 */
																	bool_t BgL_test3621z00_7175;

																	if (STRINGP(BgL_filez00_2432))
																		{	/* Llib/error.scm 1027 */
																			BgL_test3621z00_7175 =
																				STRINGP(BgL_lstringz00_2435);
																		}
																	else
																		{	/* Llib/error.scm 1027 */
																			BgL_test3621z00_7175 = ((bool_t) 0);
																		}
																	if (BgL_test3621z00_7175)
																		{	/* Llib/error.scm 1011 */
																			obj_t BgL_tabsz00_4116;

																			if (
																				((long) CINT(BgL_lpointz00_2434) >
																					((long) 0)))
																				{	/* Llib/error.scm 1011 */
																					BgL_tabsz00_4116 =
																						make_string(
																						(long) CINT(BgL_lpointz00_2434),
																						((unsigned char) ' '));
																				}
																			else
																				{	/* Llib/error.scm 1011 */
																					BgL_tabsz00_4116 =
																						BGl_string3168z00zz__errorz00;
																				}
																			{	/* Llib/error.scm 1011 */
																				long BgL_lz00_4118;

																				BgL_lz00_4118 =
																					STRING_LENGTH(BgL_lstringz00_2435);
																				{	/* Llib/error.scm 1012 */
																					obj_t BgL_ncolz00_4119;

																					if (
																						((long) CINT(BgL_lpointz00_2434) >=
																							BgL_lz00_4118))
																						{	/* Llib/error.scm 1013 */
																							BgL_ncolz00_4119 =
																								BINT(BgL_lz00_4118);
																						}
																					else
																						{	/* Llib/error.scm 1013 */
																							BgL_ncolz00_4119 =
																								BgL_lpointz00_2434;
																						}
																					{	/* Llib/error.scm 1013 */

																						BGl_fixzd2tabulationz12zc0zz__errorz00
																							(BgL_ncolz00_4119,
																							BgL_lstringz00_2435,
																							BgL_tabsz00_4116);
																						return
																							BGl_printzd2cursorzd2zz__errorz00
																							(BgL_filez00_2432,
																							BgL_lnumz00_2433,
																							BgL_lpointz00_2434,
																							BgL_lstringz00_2435,
																							BgL_tabsz00_4116);
																					}
																				}
																			}
																		}
																	else
																		{	/* Llib/error.scm 1029 */
																			bool_t BgL_test3625z00_7191;

																			if (STRINGP(BgL_filez00_2432))
																				{	/* Llib/error.scm 1029 */
																					BgL_test3625z00_7191 =
																						BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
																						(BgL_lpointz00_2434);
																				}
																			else
																				{	/* Llib/error.scm 1029 */
																					BgL_test3625z00_7191 = ((bool_t) 0);
																				}
																			if (BgL_test3625z00_7191)
																				{	/* Llib/error.scm 1029 */
																					if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_lnumz00_2433))
																						{	/* Llib/error.scm 1031 */
																							obj_t BgL_arg1929z00_2441;
																							obj_t BgL_arg1930z00_2442;

																							{	/* Llib/error.scm 1031 */
																								obj_t BgL_res2869z00_4132;

																								{	/* Llib/error.scm 1031 */
																									obj_t BgL_tmpz00_7197;

																									BgL_tmpz00_7197 =
																										BGL_CURRENT_DYNAMIC_ENV();
																									BgL_res2869z00_4132 =
																										BGL_ENV_CURRENT_ERROR_PORT
																										(BgL_tmpz00_7197);
																								}
																								BgL_arg1929z00_2441 =
																									BgL_res2869z00_4132;
																							}
																							{	/* Llib/error.scm 1033 */

																								BgL_arg1930z00_2442 =
																									BGl_filenamezd2forzd2errorz00zz__errorz00
																									(BgL_filez00_2432,
																									((long) 255));
																							}
																							{	/* Llib/error.scm 1031 */
																								obj_t BgL_list1931z00_2443;

																								{	/* Llib/error.scm 1031 */
																									obj_t BgL_arg1932z00_2444;

																									{	/* Llib/error.scm 1031 */
																										obj_t BgL_arg1933z00_2445;

																										BgL_arg1933z00_2445 =
																											MAKE_YOUNG_PAIR
																											(BgL_lpointz00_2434,
																											BNIL);
																										BgL_arg1932z00_2444 =
																											MAKE_YOUNG_PAIR
																											(BgL_lnumz00_2433,
																											BgL_arg1933z00_2445);
																									}
																									BgL_list1931z00_2443 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1930z00_2442,
																										BgL_arg1932z00_2444);
																								}
																								return
																									BGl_fprintfz00zz__r4_output_6_10_3z00
																									(BgL_arg1929z00_2441,
																									BGl_string3204z00zz__errorz00,
																									BgL_list1931z00_2443);
																							}
																						}
																					else
																						{	/* Llib/error.scm 1036 */
																							obj_t BgL_arg1934z00_2448;
																							obj_t BgL_arg1935z00_2449;

																							{	/* Llib/error.scm 1036 */
																								obj_t BgL_res2870z00_4134;

																								{	/* Llib/error.scm 1036 */
																									obj_t BgL_tmpz00_7205;

																									BgL_tmpz00_7205 =
																										BGL_CURRENT_DYNAMIC_ENV();
																									BgL_res2870z00_4134 =
																										BGL_ENV_CURRENT_ERROR_PORT
																										(BgL_tmpz00_7205);
																								}
																								BgL_arg1934z00_2448 =
																									BgL_res2870z00_4134;
																							}
																							{	/* Llib/error.scm 1038 */

																								BgL_arg1935z00_2449 =
																									BGl_filenamezd2forzd2errorz00zz__errorz00
																									(BgL_filez00_2432,
																									((long) 255));
																							}
																							{	/* Llib/error.scm 1036 */
																								obj_t BgL_list1936z00_2450;

																								{	/* Llib/error.scm 1036 */
																									obj_t BgL_arg1937z00_2451;

																									BgL_arg1937z00_2451 =
																										MAKE_YOUNG_PAIR
																										(BgL_lpointz00_2434, BNIL);
																									BgL_list1936z00_2450 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1935z00_2449,
																										BgL_arg1937z00_2451);
																								}
																								return
																									BGl_fprintfz00zz__r4_output_6_10_3z00
																									(BgL_arg1934z00_2448,
																									BGl_string3205z00zz__errorz00,
																									BgL_list1936z00_2450);
																							}
																						}
																				}
																			else
																				{	/* Llib/error.scm 1041 */
																					obj_t BgL_arg1938z00_2454;

																					BgL_arg1938z00_2454 =
																						CDR(((obj_t) BgL_stackz00_2416));
																					{
																						obj_t BgL_stackz00_7214;

																						BgL_stackz00_7214 =
																							BgL_arg1938z00_2454;
																						BgL_stackz00_2416 =
																							BgL_stackz00_7214;
																						goto
																							BgL_zc3z04anonymousza31916ze3z87_2417;
																					}
																				}
																		}
																}
															}
														}
													}
												else
													{
														obj_t BgL_stackz00_7217;

														BgL_stackz00_7217 = CDR(BgL_stackz00_2416);
														BgL_stackz00_2416 = BgL_stackz00_7217;
														goto BgL_zc3z04anonymousza31916ze3z87_2417;
													}
											}
										}
									else
										{
											obj_t BgL_stackz00_7219;

											BgL_stackz00_7219 = CDR(BgL_stackz00_2416);
											BgL_stackz00_2416 = BgL_stackz00_7219;
											goto BgL_zc3z04anonymousza31916ze3z87_2417;
										}
								}
							else
								{
									obj_t BgL_stackz00_7221;

									BgL_stackz00_7221 = CDR(BgL_stackz00_2416);
									BgL_stackz00_2416 = BgL_stackz00_7221;
									goto BgL_zc3z04anonymousza31916ze3z87_2417;
								}
						}
					}
				else
					{	/* Llib/error.scm 1020 */
						return BFALSE;
					}
			}
		}

	}



/* &display-trace-stack-source */
	obj_t BGl_z62displayzd2tracezd2stackzd2sourcezb0zz__errorz00(obj_t
		BgL_envz00_5045, obj_t BgL_stackz00_5046, obj_t BgL_portz00_5047)
	{
		{	/* Llib/error.scm 1008 */
			{	/* Llib/error.scm 1020 */
				obj_t BgL_auxz00_7223;

				if (OUTPUT_PORTP(BgL_portz00_5047))
					{	/* Llib/error.scm 1020 */
						BgL_auxz00_7223 = BgL_portz00_5047;
					}
				else
					{
						obj_t BgL_auxz00_7226;

						BgL_auxz00_7226 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
							BINT(((long) 39440)), BGl_string3206z00zz__errorz00,
							BGl_string3187z00zz__errorz00, BgL_portz00_5047);
						FAILURE(BgL_auxz00_7226, BFALSE, BFALSE);
					}
				return
					BGl_displayzd2tracezd2stackzd2sourcezd2zz__errorz00(BgL_stackz00_5046,
					BgL_auxz00_7223);
			}
		}

	}



/* dump-trace-stack */
	BGL_EXPORTED_DEF obj_t BGl_dumpzd2tracezd2stackz00zz__errorz00(obj_t
		BgL_portz00_120, obj_t BgL_depthz00_121)
	{
		{	/* Llib/error.scm 1048 */
			{	/* Llib/error.scm 1049 */
				obj_t BgL_arg1943z00_4153;

				BgL_arg1943z00_4153 =
					BGl_getzd2tracezd2stackz00zz__errorz00(BgL_depthz00_121);
				{	/* Llib/error.scm 248 */

					return
						BGl_displayzd2tracezd2stackz00zz__errorz00(BgL_arg1943z00_4153,
						BgL_portz00_120, BINT(((long) 1)));
		}}}

	}



/* &dump-trace-stack */
	obj_t BGl_z62dumpzd2tracezd2stackz62zz__errorz00(obj_t BgL_envz00_5048,
		obj_t BgL_portz00_5049, obj_t BgL_depthz00_5050)
	{
		{	/* Llib/error.scm 1048 */
			return
				BGl_dumpzd2tracezd2stackz00zz__errorz00(BgL_portz00_5049,
				BgL_depthz00_5050);
		}

	}



/* fix-tabulation! */
	obj_t BGl_fixzd2tabulationz12zc0zz__errorz00(obj_t BgL_markerz00_122,
		obj_t BgL_srcz00_123, obj_t BgL_dstz00_124)
	{
		{	/* Llib/error.scm 1054 */
			{	/* Llib/error.scm 1055 */
				long BgL_g1116z00_2474;

				BgL_g1116z00_2474 = ((long) CINT(BgL_markerz00_122) - ((long) 1));
				{
					long BgL_readz00_2476;

					BgL_readz00_2476 = BgL_g1116z00_2474;
				BgL_zc3z04anonymousza31944ze3z87_2477:
					if ((BgL_readz00_2476 == ((long) -1)))
						{	/* Llib/error.scm 1057 */
							return BGl_symbol3207z00zz__errorz00;
						}
					else
						{	/* Llib/error.scm 1057 */
							if (
								(STRING_REF(
										((obj_t) BgL_srcz00_123),
										BgL_readz00_2476) == ((unsigned char) 9)))
								{	/* Llib/error.scm 1059 */
									STRING_SET(BgL_dstz00_124, BgL_readz00_2476,
										((unsigned char) 9));
									{
										long BgL_readz00_7244;

										BgL_readz00_7244 = (BgL_readz00_2476 - ((long) 1));
										BgL_readz00_2476 = BgL_readz00_7244;
										goto BgL_zc3z04anonymousza31944ze3z87_2477;
									}
								}
							else
								{
									long BgL_readz00_7246;

									BgL_readz00_7246 = (BgL_readz00_2476 - ((long) 1));
									BgL_readz00_2476 = BgL_readz00_7246;
									goto BgL_zc3z04anonymousza31944ze3z87_2477;
								}
						}
				}
			}
		}

	}



/* print-cursor */
	obj_t BGl_printzd2cursorzd2zz__errorz00(obj_t BgL_fnamez00_125,
		obj_t BgL_linez00_126, obj_t BgL_charz00_127, obj_t BgL_stringz00_128,
		obj_t BgL_spacezd2stringzd2_129)
	{
		{	/* Llib/error.scm 1068 */
			{	/* Llib/error.scm 1069 */
				obj_t BgL_arg1952z00_2485;
				obj_t BgL_arg1953z00_2486;

				{	/* Llib/error.scm 1069 */
					obj_t BgL_res2879z00_4175;

					{	/* Llib/error.scm 1069 */
						obj_t BgL_tmpz00_7248;

						BgL_tmpz00_7248 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2879z00_4175 = BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_7248);
					}
					BgL_arg1952z00_2485 = BgL_res2879z00_4175;
				}
				{	/* Llib/error.scm 1070 */

					BgL_arg1953z00_2486 =
						BGl_filenamezd2forzd2errorz00zz__errorz00(BgL_fnamez00_125,
						((long) 255));
				}
				{	/* Llib/error.scm 1069 */
					obj_t BgL_list1954z00_2487;

					{	/* Llib/error.scm 1069 */
						obj_t BgL_arg1955z00_2488;

						{	/* Llib/error.scm 1069 */
							obj_t BgL_arg1956z00_2489;

							{	/* Llib/error.scm 1069 */
								obj_t BgL_arg1957z00_2490;

								{	/* Llib/error.scm 1069 */
									obj_t BgL_arg1958z00_2491;

									{	/* Llib/error.scm 1069 */
										obj_t BgL_arg1959z00_2492;

										{	/* Llib/error.scm 1069 */
											obj_t BgL_arg1960z00_2493;

											{	/* Llib/error.scm 1069 */
												obj_t BgL_arg1961z00_2494;

												{	/* Llib/error.scm 1069 */
													obj_t BgL_arg1962z00_2495;

													{	/* Llib/error.scm 1069 */
														obj_t BgL_arg1963z00_2496;

														{	/* Llib/error.scm 1069 */
															obj_t BgL_arg1964z00_2497;

															{	/* Llib/error.scm 1069 */
																obj_t BgL_arg1965z00_2498;

																{	/* Llib/error.scm 1069 */
																	obj_t BgL_arg1966z00_2499;

																	{	/* Llib/error.scm 1069 */
																		obj_t BgL_arg1967z00_2500;

																		BgL_arg1967z00_2500 =
																			MAKE_YOUNG_PAIR
																			(BGl_string3209z00zz__errorz00, BNIL);
																		BgL_arg1966z00_2499 =
																			MAKE_YOUNG_PAIR(BgL_spacezd2stringzd2_129,
																			BgL_arg1967z00_2500);
																	}
																	BgL_arg1965z00_2498 =
																		MAKE_YOUNG_PAIR
																		(BGl_string3210z00zz__errorz00,
																		BgL_arg1966z00_2499);
																}
																BgL_arg1964z00_2497 =
																	MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)),
																	BgL_arg1965z00_2498);
															}
															BgL_arg1963z00_2496 =
																MAKE_YOUNG_PAIR(BgL_stringz00_128,
																BgL_arg1964z00_2497);
														}
														BgL_arg1962z00_2495 =
															MAKE_YOUNG_PAIR(BGl_string3210z00zz__errorz00,
															BgL_arg1963z00_2496);
													}
													BgL_arg1961z00_2494 =
														MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)),
														BgL_arg1962z00_2495);
												}
												BgL_arg1960z00_2493 =
													MAKE_YOUNG_PAIR(BGl_string3202z00zz__errorz00,
													BgL_arg1961z00_2494);
											}
											BgL_arg1959z00_2492 =
												MAKE_YOUNG_PAIR(BgL_charz00_127, BgL_arg1960z00_2493);
										}
										BgL_arg1958z00_2491 =
											MAKE_YOUNG_PAIR(BGl_string3211z00zz__errorz00,
											BgL_arg1959z00_2492);
									}
									BgL_arg1957z00_2490 =
										MAKE_YOUNG_PAIR(BgL_linez00_126, BgL_arg1958z00_2491);
								}
								BgL_arg1956z00_2489 =
									MAKE_YOUNG_PAIR(BGl_string3212z00zz__errorz00,
									BgL_arg1957z00_2490);
							}
							BgL_arg1955z00_2488 =
								MAKE_YOUNG_PAIR(BgL_arg1953z00_2486, BgL_arg1956z00_2489);
						}
						BgL_list1954z00_2487 =
							MAKE_YOUNG_PAIR(BGl_string3167z00zz__errorz00,
							BgL_arg1955z00_2488);
					}
					return
						BGl_fprintz00zz__r4_output_6_10_3z00(BgL_arg1952z00_2485,
						BgL_list1954z00_2487);
				}
			}
		}

	}



/* relative-file-name */
	obj_t BGl_relativezd2filezd2namez00zz__errorz00(obj_t BgL_fnamez00_130)
	{
		{	/* Llib/error.scm 1083 */
			{	/* Llib/error.scm 1084 */
				obj_t BgL_pwdz00_2503;
				obj_t BgL_dnamez00_2504;

				BgL_pwdz00_2503 = BGl_pwdz00zz__osz00();
				BgL_dnamez00_2504 = BGl_dirnamez00zz__osz00(BgL_fnamez00_130);
				{	/* Llib/error.scm 1086 */
					bool_t BgL_test3631z00_7271;

					if (STRINGP(BgL_pwdz00_2503))
						{	/* Llib/error.scm 1087 */
							bool_t BgL_test3633z00_7274;

							{	/* Llib/error.scm 1087 */
								bool_t BgL_res2885z00_4192;

								{	/* Llib/error.scm 1087 */
									long BgL_l1z00_4179;

									BgL_l1z00_4179 = STRING_LENGTH(BgL_dnamez00_2504);
									if ((BgL_l1z00_4179 == ((long) 1)))
										{	/* Llib/error.scm 1087 */
											int BgL_arg2209z00_4182;

											{	/* Llib/error.scm 1087 */
												char *BgL_auxz00_7280;
												char *BgL_tmpz00_7278;

												BgL_auxz00_7280 =
													BSTRING_TO_STRING(BGl_string3213z00zz__errorz00);
												BgL_tmpz00_7278 = BSTRING_TO_STRING(BgL_dnamez00_2504);
												BgL_arg2209z00_4182 =
													memcmp(BgL_tmpz00_7278, BgL_auxz00_7280,
													BgL_l1z00_4179);
											}
											BgL_res2885z00_4192 =
												((long) (BgL_arg2209z00_4182) == ((long) 0));
										}
									else
										{	/* Llib/error.scm 1087 */
											BgL_res2885z00_4192 = ((bool_t) 0);
										}
								}
								BgL_test3633z00_7274 = BgL_res2885z00_4192;
							}
							if (BgL_test3633z00_7274)
								{	/* Llib/error.scm 1087 */
									BgL_test3631z00_7271 = ((bool_t) 1);
								}
							else
								{	/* Llib/error.scm 1087 */
									if (
										(STRING_REF(
												((obj_t) BgL_fnamez00_130),
												((long) 0)) == ((unsigned char) '/')))
										{	/* Llib/error.scm 1088 */
											BgL_test3631z00_7271 = ((bool_t) 0);
										}
									else
										{	/* Llib/error.scm 1088 */
											BgL_test3631z00_7271 = ((bool_t) 1);
										}
								}
						}
					else
						{	/* Llib/error.scm 1086 */
							BgL_test3631z00_7271 = ((bool_t) 1);
						}
					if (BgL_test3631z00_7271)
						{	/* Llib/error.scm 1086 */
							return BgL_fnamez00_130;
						}
					else
						{	/* Llib/error.scm 1091 */
							obj_t BgL_originalzd2cmpzd2pathz00_2511;

							BgL_originalzd2cmpzd2pathz00_2511 =
								BGl_dirnamezd2ze3listz31zz__errorz00(BgL_dnamez00_2504);
							{	/* Llib/error.scm 1092 */
								obj_t BgL_g1117z00_2512;

								BgL_g1117z00_2512 =
									BGl_dirnamezd2ze3listz31zz__errorz00(BgL_pwdz00_2503);
								{
									obj_t BgL_cmpzd2pathzd2_2514;
									obj_t BgL_curzd2pathzd2_2515;

									BgL_cmpzd2pathzd2_2514 = BgL_originalzd2cmpzd2pathz00_2511;
									BgL_curzd2pathzd2_2515 = BgL_g1117z00_2512;
								BgL_zc3z04anonymousza31974ze3z87_2516:
									if (NULLP(BgL_cmpzd2pathzd2_2514))
										{	/* Llib/error.scm 1095 */
											if (NULLP(BgL_curzd2pathzd2_2515))
												{	/* Llib/error.scm 1096 */
													return BGl_basenamez00zz__osz00(BgL_fnamez00_130);
												}
											else
												{	/* Llib/error.scm 1099 */
													long BgL_g1118z00_2519;
													obj_t BgL_g1119z00_2520;

													BgL_g1118z00_2519 =
														bgl_list_length(BgL_curzd2pathzd2_2515);
													BgL_g1119z00_2520 =
														BGl_basenamez00zz__osz00(BgL_fnamez00_130);
													{
														long BgL_lenz00_4219;
														obj_t BgL_resz00_4220;

														BgL_lenz00_4219 = BgL_g1118z00_2519;
														BgL_resz00_4220 = BgL_g1119z00_2520;
													BgL_loopz00_4218:
														if ((BgL_lenz00_4219 == ((long) 0)))
															{	/* Llib/error.scm 1101 */
																return BgL_resz00_4220;
															}
														else
															{	/* Llib/error.scm 1103 */
																long BgL_arg1979z00_4227;
																obj_t BgL_arg1980z00_4228;

																BgL_arg1979z00_4227 =
																	(BgL_lenz00_4219 - ((long) 1));
																{	/* Llib/error.scm 1103 */
																	obj_t BgL_list1981z00_4229;

																	{	/* Llib/error.scm 1103 */
																		obj_t BgL_arg1982z00_4230;

																		BgL_arg1982z00_4230 =
																			MAKE_YOUNG_PAIR(BgL_resz00_4220, BNIL);
																		BgL_list1981z00_4229 =
																			MAKE_YOUNG_PAIR
																			(BGl_string3214z00zz__errorz00,
																			BgL_arg1982z00_4230);
																	}
																	BgL_arg1980z00_4228 =
																		BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																		(BgL_list1981z00_4229);
																}
																{
																	obj_t BgL_resz00_7305;
																	long BgL_lenz00_7304;

																	BgL_lenz00_7304 = BgL_arg1979z00_4227;
																	BgL_resz00_7305 = BgL_arg1980z00_4228;
																	BgL_resz00_4220 = BgL_resz00_7305;
																	BgL_lenz00_4219 = BgL_lenz00_7304;
																	goto BgL_loopz00_4218;
																}
															}
													}
												}
										}
									else
										{	/* Llib/error.scm 1095 */
											if (NULLP(BgL_curzd2pathzd2_2515))
												{	/* Llib/error.scm 1105 */
													obj_t BgL_g1120z00_2532;
													obj_t BgL_g1121z00_2533;

													BgL_g1120z00_2532 =
														bgl_reverse_bang(BgL_cmpzd2pathzd2_2514);
													BgL_g1121z00_2533 =
														BGl_basenamez00zz__osz00(BgL_fnamez00_130);
													{
														obj_t BgL_pathz00_4257;
														obj_t BgL_resz00_4258;

														BgL_pathz00_4257 = BgL_g1120z00_2532;
														BgL_resz00_4258 = BgL_g1121z00_2533;
													BgL_loopz00_4256:
														if (NULLP(BgL_pathz00_4257))
															{	/* Llib/error.scm 1107 */
																return BgL_resz00_4258;
															}
														else
															{	/* Llib/error.scm 1109 */
																obj_t BgL_arg1986z00_4267;
																obj_t BgL_arg1987z00_4268;

																BgL_arg1986z00_4267 =
																	CDR(((obj_t) BgL_pathz00_4257));
																{	/* Llib/error.scm 1110 */
																	obj_t BgL_arg1988z00_4269;

																	BgL_arg1988z00_4269 =
																		CAR(((obj_t) BgL_pathz00_4257));
																	{	/* Llib/error.scm 1110 */
																		obj_t BgL_list1989z00_4270;

																		{	/* Llib/error.scm 1110 */
																			obj_t BgL_arg1990z00_4271;

																			{	/* Llib/error.scm 1110 */
																				obj_t BgL_arg1991z00_4272;

																				BgL_arg1991z00_4272 =
																					MAKE_YOUNG_PAIR(BgL_resz00_4258,
																					BNIL);
																				BgL_arg1990z00_4271 =
																					MAKE_YOUNG_PAIR
																					(BGl_string3215z00zz__errorz00,
																					BgL_arg1991z00_4272);
																			}
																			BgL_list1989z00_4270 =
																				MAKE_YOUNG_PAIR(BgL_arg1988z00_4269,
																				BgL_arg1990z00_4271);
																		}
																		BgL_arg1987z00_4268 =
																			BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																			(BgL_list1989z00_4270);
																	}
																}
																{
																	obj_t BgL_resz00_7321;
																	obj_t BgL_pathz00_7320;

																	BgL_pathz00_7320 = BgL_arg1986z00_4267;
																	BgL_resz00_7321 = BgL_arg1987z00_4268;
																	BgL_resz00_4258 = BgL_resz00_7321;
																	BgL_pathz00_4257 = BgL_pathz00_7320;
																	goto BgL_loopz00_4256;
																}
															}
													}
												}
											else
												{	/* Llib/error.scm 1111 */
													bool_t BgL_test3641z00_7322;

													{	/* Llib/error.scm 1111 */
														obj_t BgL_arg2016z00_2579;
														obj_t BgL_arg2017z00_2580;

														BgL_arg2016z00_2579 =
															CAR(((obj_t) BgL_curzd2pathzd2_2515));
														BgL_arg2017z00_2580 =
															CAR(((obj_t) BgL_cmpzd2pathzd2_2514));
														{	/* Llib/error.scm 1111 */
															bool_t BgL_res2904z00_4293;

															{	/* Llib/error.scm 1111 */
																long BgL_l1z00_4280;

																BgL_l1z00_4280 =
																	STRING_LENGTH(((obj_t) BgL_arg2016z00_2579));
																if (
																	(BgL_l1z00_4280 ==
																		STRING_LENGTH(
																			((obj_t) BgL_arg2017z00_2580))))
																	{	/* Llib/error.scm 1111 */
																		int BgL_arg2209z00_4283;

																		{	/* Llib/error.scm 1111 */
																			char *BgL_auxz00_7336;
																			char *BgL_tmpz00_7333;

																			BgL_auxz00_7336 =
																				BSTRING_TO_STRING(
																				((obj_t) BgL_arg2017z00_2580));
																			BgL_tmpz00_7333 =
																				BSTRING_TO_STRING(
																				((obj_t) BgL_arg2016z00_2579));
																			BgL_arg2209z00_4283 =
																				memcmp(BgL_tmpz00_7333, BgL_auxz00_7336,
																				BgL_l1z00_4280);
																		}
																		BgL_res2904z00_4293 =
																			(
																			(long) (BgL_arg2209z00_4283) ==
																			((long) 0));
																	}
																else
																	{	/* Llib/error.scm 1111 */
																		BgL_res2904z00_4293 = ((bool_t) 0);
																	}
															}
															BgL_test3641z00_7322 = BgL_res2904z00_4293;
														}
													}
													if (BgL_test3641z00_7322)
														{	/* Llib/error.scm 1112 */
															obj_t BgL_arg1995z00_2549;
															obj_t BgL_arg1996z00_2550;

															BgL_arg1995z00_2549 =
																CDR(((obj_t) BgL_cmpzd2pathzd2_2514));
															BgL_arg1996z00_2550 =
																CDR(((obj_t) BgL_curzd2pathzd2_2515));
															{
																obj_t BgL_curzd2pathzd2_7347;
																obj_t BgL_cmpzd2pathzd2_7346;

																BgL_cmpzd2pathzd2_7346 = BgL_arg1995z00_2549;
																BgL_curzd2pathzd2_7347 = BgL_arg1996z00_2550;
																BgL_curzd2pathzd2_2515 = BgL_curzd2pathzd2_7347;
																BgL_cmpzd2pathzd2_2514 = BgL_cmpzd2pathzd2_7346;
																goto BgL_zc3z04anonymousza31974ze3z87_2516;
															}
														}
													else
														{	/* Llib/error.scm 1114 */
															obj_t BgL_g1122z00_2551;
															obj_t BgL_g1123z00_2552;

															BgL_g1122z00_2551 =
																bgl_reverse(BgL_cmpzd2pathzd2_2514);
															BgL_g1123z00_2552 =
																BGl_basenamez00zz__osz00(BgL_fnamez00_130);
															{
																obj_t BgL_pathz00_2554;
																obj_t BgL_resz00_2555;

																BgL_pathz00_2554 = BgL_g1122z00_2551;
																BgL_resz00_2555 = BgL_g1123z00_2552;
															BgL_zc3z04anonymousza31997ze3z87_2556:
																if (NULLP(BgL_pathz00_2554))
																	{	/* Llib/error.scm 1116 */
																		if (
																			(BgL_cmpzd2pathzd2_2514 ==
																				BgL_originalzd2cmpzd2pathz00_2511))
																			{	/* Llib/error.scm 1118 */
																				obj_t BgL_list2000z00_2559;

																				{	/* Llib/error.scm 1118 */
																					obj_t BgL_arg2001z00_2560;

																					BgL_arg2001z00_2560 =
																						MAKE_YOUNG_PAIR(BgL_resz00_2555,
																						BNIL);
																					BgL_list2000z00_2559 =
																						MAKE_YOUNG_PAIR
																						(BGl_string3215z00zz__errorz00,
																						BgL_arg2001z00_2560);
																				}
																				return
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list2000z00_2559);
																			}
																		else
																			{	/* Llib/error.scm 1119 */
																				long BgL_g1124z00_2561;

																				BgL_g1124z00_2561 =
																					bgl_list_length
																					(BgL_curzd2pathzd2_2515);
																				{
																					long BgL_lenz00_4317;
																					obj_t BgL_resz00_4318;

																					BgL_lenz00_4317 = BgL_g1124z00_2561;
																					BgL_resz00_4318 = BgL_resz00_2555;
																				BgL_loopz00_4316:
																					if ((BgL_lenz00_4317 == ((long) 0)))
																						{	/* Llib/error.scm 1121 */
																							return BgL_resz00_4318;
																						}
																					else
																						{	/* Llib/error.scm 1123 */
																							long BgL_arg2004z00_4325;
																							obj_t BgL_arg2005z00_4326;

																							BgL_arg2004z00_4325 =
																								(BgL_lenz00_4317 - ((long) 1));
																							{	/* Llib/error.scm 1124 */
																								obj_t BgL_list2006z00_4327;

																								{	/* Llib/error.scm 1124 */
																									obj_t BgL_arg2007z00_4328;

																									BgL_arg2007z00_4328 =
																										MAKE_YOUNG_PAIR
																										(BgL_resz00_4318, BNIL);
																									BgL_list2006z00_4327 =
																										MAKE_YOUNG_PAIR
																										(BGl_string3214z00zz__errorz00,
																										BgL_arg2007z00_4328);
																								}
																								BgL_arg2005z00_4326 =
																									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																									(BgL_list2006z00_4327);
																							}
																							{
																								obj_t BgL_resz00_7365;
																								long BgL_lenz00_7364;

																								BgL_lenz00_7364 =
																									BgL_arg2004z00_4325;
																								BgL_resz00_7365 =
																									BgL_arg2005z00_4326;
																								BgL_resz00_4318 =
																									BgL_resz00_7365;
																								BgL_lenz00_4317 =
																									BgL_lenz00_7364;
																								goto BgL_loopz00_4316;
																							}
																						}
																				}
																			}
																	}
																else
																	{	/* Llib/error.scm 1125 */
																		obj_t BgL_arg2008z00_2572;
																		obj_t BgL_arg2010z00_2573;

																		BgL_arg2008z00_2572 =
																			CDR(((obj_t) BgL_pathz00_2554));
																		{	/* Llib/error.scm 1126 */
																			obj_t BgL_arg2011z00_2574;

																			BgL_arg2011z00_2574 =
																				CAR(((obj_t) BgL_pathz00_2554));
																			{	/* Llib/error.scm 1126 */
																				obj_t BgL_list2012z00_2575;

																				{	/* Llib/error.scm 1126 */
																					obj_t BgL_arg2013z00_2576;

																					{	/* Llib/error.scm 1126 */
																						obj_t BgL_arg2014z00_2577;

																						BgL_arg2014z00_2577 =
																							MAKE_YOUNG_PAIR(BgL_resz00_2555,
																							BNIL);
																						BgL_arg2013z00_2576 =
																							MAKE_YOUNG_PAIR
																							(BGl_string3215z00zz__errorz00,
																							BgL_arg2014z00_2577);
																					}
																					BgL_list2012z00_2575 =
																						MAKE_YOUNG_PAIR(BgL_arg2011z00_2574,
																						BgL_arg2013z00_2576);
																				}
																				BgL_arg2010z00_2573 =
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list2012z00_2575);
																			}
																		}
																		{
																			obj_t BgL_resz00_7375;
																			obj_t BgL_pathz00_7374;

																			BgL_pathz00_7374 = BgL_arg2008z00_2572;
																			BgL_resz00_7375 = BgL_arg2010z00_2573;
																			BgL_resz00_2555 = BgL_resz00_7375;
																			BgL_pathz00_2554 = BgL_pathz00_7374;
																			goto
																				BgL_zc3z04anonymousza31997ze3z87_2556;
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



/* uncygdrive */
	obj_t BGl_uncygdrivez00zz__errorz00(obj_t BgL_strz00_131)
	{
		{	/* Llib/error.scm 1134 */
			if (bigloo_strncmp(BGl_string3216z00zz__errorz00, BgL_strz00_131,
					((long) 10)))
				{	/* Llib/error.scm 1136 */
					bool_t BgL_test3647z00_7378;

					if ((STRING_LENGTH(BgL_strz00_131) > ((long) 12)))
						{	/* Llib/error.scm 1137 */
							bool_t BgL_test3649z00_7382;

							{	/* Llib/error.scm 1137 */
								unsigned char BgL_arg2043z00_2607;

								BgL_arg2043z00_2607 = STRING_REF(BgL_strz00_131, ((long) 10));
								{	/* Llib/error.scm 1137 */
									bool_t BgL_res2917z00_4345;

									BgL_res2917z00_4345 = isalpha(BgL_arg2043z00_2607);
									BgL_test3649z00_7382 = BgL_res2917z00_4345;
							}}
							if (BgL_test3649z00_7382)
								{	/* Llib/error.scm 1137 */
									BgL_test3647z00_7378 =
										(STRING_REF(BgL_strz00_131,
											((long) 11)) == ((unsigned char) '/'));
								}
							else
								{	/* Llib/error.scm 1137 */
									BgL_test3647z00_7378 = ((bool_t) 0);
								}
						}
					else
						{	/* Llib/error.scm 1136 */
							BgL_test3647z00_7378 = ((bool_t) 0);
						}
					if (BgL_test3647z00_7378)
						{	/* Llib/error.scm 1139 */
							obj_t BgL_arg2031z00_2595;
							obj_t BgL_arg2033z00_2596;

							{	/* Llib/error.scm 1139 */
								unsigned char BgL_arg2036z00_2599;

								BgL_arg2036z00_2599 = STRING_REF(BgL_strz00_131, ((long) 10));
								{	/* Llib/error.scm 1139 */
									obj_t BgL_list2037z00_2600;

									{	/* Llib/error.scm 1139 */
										obj_t BgL_arg2038z00_2601;

										{	/* Llib/error.scm 1139 */
											obj_t BgL_arg2039z00_2602;

											BgL_arg2039z00_2602 =
												MAKE_YOUNG_PAIR(BCHAR(((unsigned char) '/')), BNIL);
											BgL_arg2038z00_2601 =
												MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ':')),
												BgL_arg2039z00_2602);
										}
										BgL_list2037z00_2600 =
											MAKE_YOUNG_PAIR(BCHAR(BgL_arg2036z00_2599),
											BgL_arg2038z00_2601);
									}
									BgL_arg2031z00_2595 =
										BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
										(BgL_list2037z00_2600);
							}}
							BgL_arg2033z00_2596 =
								BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_131,
								((long) 12), STRING_LENGTH(BgL_strz00_131));
							{	/* Llib/error.scm 1139 */
								obj_t BgL_list2034z00_2597;

								{	/* Llib/error.scm 1139 */
									obj_t BgL_arg2035z00_2598;

									BgL_arg2035z00_2598 =
										MAKE_YOUNG_PAIR(BgL_arg2033z00_2596, BNIL);
									BgL_list2034z00_2597 =
										MAKE_YOUNG_PAIR(BgL_arg2031z00_2595, BgL_arg2035z00_2598);
								}
								return
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list2034z00_2597);
							}
						}
					else
						{	/* Llib/error.scm 1136 */
							return BgL_strz00_131;
						}
				}
			else
				{	/* Llib/error.scm 1135 */
					return BgL_strz00_131;
				}
		}

	}



/* dirname->list */
	obj_t BGl_dirnamezd2ze3listz31zz__errorz00(obj_t BgL_pathz00_132)
	{
		{	/* Llib/error.scm 1147 */
			{	/* Llib/error.scm 1148 */
				long BgL_lenz00_2609;
				long BgL_initz00_2610;

				{	/* Llib/error.scm 1148 */
					long BgL_lenz00_2632;

					BgL_lenz00_2632 = STRING_LENGTH(((obj_t) BgL_pathz00_132));
					if (
						(STRING_REF(
								((obj_t) BgL_pathz00_132),
								(BgL_lenz00_2632 - ((long) 1))) ==
							(unsigned char) (FILE_SEPARATOR)))
						{	/* Llib/error.scm 1149 */
							BgL_lenz00_2609 = (BgL_lenz00_2632 - ((long) 1));
						}
					else
						{	/* Llib/error.scm 1149 */
							BgL_lenz00_2609 = BgL_lenz00_2632;
						}
				}
				if (
					(STRING_REF(
							((obj_t) BgL_pathz00_132), ((long) 0)) ==
						(unsigned char) (FILE_SEPARATOR)))
					{	/* Llib/error.scm 1152 */
						BgL_initz00_2610 = ((long) 1);
					}
				else
					{	/* Llib/error.scm 1152 */
						BgL_initz00_2610 = ((long) 0);
					}
				{	/* Llib/error.scm 1153 */
					bool_t BgL_test3652z00_7414;

					{	/* Llib/error.scm 1153 */
						bool_t BgL_res2934z00_4388;

						{	/* Llib/error.scm 1153 */
							long BgL_l1z00_4375;

							BgL_l1z00_4375 = STRING_LENGTH(((obj_t) BgL_pathz00_132));
							if ((BgL_l1z00_4375 == ((long) 1)))
								{	/* Llib/error.scm 1153 */
									int BgL_arg2209z00_4378;

									{	/* Llib/error.scm 1153 */
										char *BgL_auxz00_7422;
										char *BgL_tmpz00_7419;

										BgL_auxz00_7422 =
											BSTRING_TO_STRING(BGl_string3215z00zz__errorz00);
										BgL_tmpz00_7419 =
											BSTRING_TO_STRING(((obj_t) BgL_pathz00_132));
										BgL_arg2209z00_4378 =
											memcmp(BgL_tmpz00_7419, BgL_auxz00_7422, BgL_l1z00_4375);
									}
									BgL_res2934z00_4388 =
										((long) (BgL_arg2209z00_4378) == ((long) 0));
								}
							else
								{	/* Llib/error.scm 1153 */
									BgL_res2934z00_4388 = ((bool_t) 0);
								}
						}
						BgL_test3652z00_7414 = BgL_res2934z00_4388;
					}
					if (BgL_test3652z00_7414)
						{	/* Llib/error.scm 1153 */
							return BNIL;
						}
					else
						{
							long BgL_readz00_2614;
							long BgL_prevz00_2615;
							obj_t BgL_listz00_2616;

							BgL_readz00_2614 = BgL_initz00_2610;
							BgL_prevz00_2615 = BgL_initz00_2610;
							BgL_listz00_2616 = BNIL;
						BgL_zc3z04anonymousza32046ze3z87_2617:
							if ((BgL_readz00_2614 == BgL_lenz00_2609))
								{	/* Llib/error.scm 1160 */
									obj_t BgL_arg2048z00_2619;

									{	/* Llib/error.scm 1160 */
										obj_t BgL_arg2049z00_2620;

										BgL_arg2049z00_2620 =
											BGl_substringz00zz__r4_strings_6_7z00(BgL_pathz00_132,
											BgL_prevz00_2615, BgL_readz00_2614);
										{	/* Llib/error.scm 1160 */
											obj_t BgL_res2936z00_4392;

											BgL_res2936z00_4392 =
												MAKE_YOUNG_PAIR(BgL_arg2049z00_2620, BgL_listz00_2616);
											BgL_arg2048z00_2619 = BgL_res2936z00_4392;
										}
									}
									return bgl_reverse_bang(BgL_arg2048z00_2619);
								}
							else
								{	/* Llib/error.scm 1159 */
									if (
										(STRING_REF(
												((obj_t) BgL_pathz00_132), BgL_readz00_2614) ==
											(unsigned char) (FILE_SEPARATOR)))
										{	/* Llib/error.scm 1162 */
											long BgL_arg2053z00_2624;
											long BgL_arg2055z00_2625;
											obj_t BgL_arg2056z00_2626;

											BgL_arg2053z00_2624 = (BgL_readz00_2614 + ((long) 1));
											BgL_arg2055z00_2625 = (BgL_readz00_2614 + ((long) 1));
											{	/* Llib/error.scm 1164 */
												obj_t BgL_arg2057z00_2627;

												BgL_arg2057z00_2627 =
													BGl_substringz00zz__r4_strings_6_7z00(BgL_pathz00_132,
													BgL_prevz00_2615, BgL_readz00_2614);
												{	/* Llib/error.scm 1164 */
													obj_t BgL_res2941z00_4403;

													BgL_res2941z00_4403 =
														MAKE_YOUNG_PAIR(BgL_arg2057z00_2627,
														BgL_listz00_2616);
													BgL_arg2056z00_2626 = BgL_res2941z00_4403;
											}}
											{
												obj_t BgL_listz00_7443;
												long BgL_prevz00_7442;
												long BgL_readz00_7441;

												BgL_readz00_7441 = BgL_arg2053z00_2624;
												BgL_prevz00_7442 = BgL_arg2055z00_2625;
												BgL_listz00_7443 = BgL_arg2056z00_2626;
												BgL_listz00_2616 = BgL_listz00_7443;
												BgL_prevz00_2615 = BgL_prevz00_7442;
												BgL_readz00_2614 = BgL_readz00_7441;
												goto BgL_zc3z04anonymousza32046ze3z87_2617;
											}
										}
									else
										{
											long BgL_readz00_7444;

											BgL_readz00_7444 = (BgL_readz00_2614 + ((long) 1));
											BgL_readz00_2614 = BgL_readz00_7444;
											goto BgL_zc3z04anonymousza32046ze3z87_2617;
										}
								}
						}
				}
			}
		}

	}



/* typeof */
	BGL_EXPORTED_DEF obj_t bgl_typeof(obj_t BgL_objz00_133)
	{
		{	/* Llib/error.scm 1174 */
			if (INTEGERP(BgL_objz00_133))
				{	/* Llib/error.scm 1176 */
					return BGl_string3133z00zz__errorz00;
				}
			else
				{	/* Llib/error.scm 1176 */
					if (REALP(BgL_objz00_133))
						{	/* Llib/error.scm 1178 */
							return BGl_string3217z00zz__errorz00;
						}
					else
						{	/* Llib/error.scm 1178 */
							if (STRINGP(BgL_objz00_133))
								{	/* Llib/error.scm 1180 */
									return BGl_string3153z00zz__errorz00;
								}
							else
								{	/* Llib/error.scm 1180 */
									if (SYMBOLP(BgL_objz00_133))
										{	/* Llib/error.scm 1182 */
											return BGl_string3218z00zz__errorz00;
										}
									else
										{	/* Llib/error.scm 1182 */
											if (KEYWORDP(BgL_objz00_133))
												{	/* Llib/error.scm 1184 */
													return BGl_string3219z00zz__errorz00;
												}
											else
												{	/* Llib/error.scm 1184 */
													if (CHARP(BgL_objz00_133))
														{	/* Llib/error.scm 1186 */
															return BGl_string3220z00zz__errorz00;
														}
													else
														{	/* Llib/error.scm 1186 */
															if (BOOLEANP(BgL_objz00_133))
																{	/* Llib/error.scm 1188 */
																	return BGl_string3221z00zz__errorz00;
																}
															else
																{	/* Llib/error.scm 1188 */
																	if (NULLP(BgL_objz00_133))
																		{	/* Llib/error.scm 1190 */
																			return BGl_string3222z00zz__errorz00;
																		}
																	else
																		{	/* Llib/error.scm 1190 */
																			if ((BgL_objz00_133 == BUNSPEC))
																				{	/* Llib/error.scm 1192 */
																					return BGl_string3223z00zz__errorz00;
																				}
																			else
																				{	/* Llib/error.scm 1194 */
																					bool_t BgL_test3665z00_7464;

																					{	/* Llib/error.scm 1194 */
																						bool_t BgL_res2952z00_4415;

																						BgL_res2952z00_4415 =
																							EPAIRP(BgL_objz00_133);
																						BgL_test3665z00_7464 =
																							BgL_res2952z00_4415;
																					}
																					if (BgL_test3665z00_7464)
																						{	/* Llib/error.scm 1194 */
																							return
																								BGl_string3224z00zz__errorz00;
																						}
																					else
																						{	/* Llib/error.scm 1194 */
																							if (PAIRP(BgL_objz00_133))
																								{	/* Llib/error.scm 1196 */
																									return
																										BGl_string3225z00zz__errorz00;
																								}
																							else
																								{	/* Llib/error.scm 1196 */
																									if (BGl_classzf3zf3zz__objectz00(BgL_objz00_133))
																										{	/* Llib/error.scm 1198 */
																											return
																												BGl_string3226z00zz__errorz00;
																										}
																									else
																										{	/* Llib/error.scm 1198 */
																											if (VECTORP
																												(BgL_objz00_133))
																												{	/* Llib/error.scm 1200 */
																													return
																														BGl_string3227z00zz__errorz00;
																												}
																											else
																												{	/* Llib/error.scm 1200 */
																													if (TVECTORP
																														(BgL_objz00_133))
																														{	/* Llib/error.scm 1202 */
																															return
																																BGl_string3228z00zz__errorz00;
																														}
																													else
																														{	/* Llib/error.scm 1202 */
																															if (STRUCTP
																																(BgL_objz00_133))
																																{	/* Llib/error.scm 1205 */
																																	obj_t
																																		BgL_arg2092z00_2660;
																																	{	/* Llib/error.scm 1205 */
																																		obj_t
																																			BgL_arg2095z00_2663;
																																		BgL_arg2095z00_2663
																																			=
																																			STRUCT_KEY
																																			(BgL_objz00_133);
																																		{	/* Llib/error.scm 1205 */
																																			obj_t
																																				BgL_res2958z00_4423;
																																			BgL_res2958z00_4423
																																				=
																																				SYMBOL_TO_STRING
																																				(BgL_arg2095z00_2663);
																																			BgL_arg2092z00_2660
																																				=
																																				BgL_res2958z00_4423;
																																		}
																																	}
																																	{	/* Llib/error.scm 1205 */
																																		obj_t
																																			BgL_list2093z00_2661;
																																		{	/* Llib/error.scm 1205 */
																																			obj_t
																																				BgL_arg2094z00_2662;
																																			BgL_arg2094z00_2662
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg2092z00_2660,
																																				BNIL);
																																			BgL_list2093z00_2661
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_string3229z00zz__errorz00,
																																				BgL_arg2094z00_2662);
																																		}
																																		return
																																			BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																			(BgL_list2093z00_2661);
																																	}
																																}
																															else
																																{	/* Llib/error.scm 1204 */
																																	if (PROCEDUREP
																																		(BgL_objz00_133))
																																		{	/* Llib/error.scm 1206 */
																																			return
																																				BGl_string3141z00zz__errorz00;
																																		}
																																	else
																																		{	/* Llib/error.scm 1206 */
																																			if (INPUT_PORTP(BgL_objz00_133))
																																				{	/* Llib/error.scm 1208 */
																																					return
																																						BGl_string3230z00zz__errorz00;
																																				}
																																			else
																																				{	/* Llib/error.scm 1208 */
																																					if (OUTPUT_PORTP(BgL_objz00_133))
																																						{	/* Llib/error.scm 1210 */
																																							return
																																								BGl_string3187z00zz__errorz00;
																																						}
																																					else
																																						{	/* Llib/error.scm 1210 */
																																							if (BINARY_PORTP(BgL_objz00_133))
																																								{	/* Llib/error.scm 1212 */
																																									return
																																										BGl_string3231z00zz__errorz00;
																																								}
																																							else
																																								{	/* Llib/error.scm 1212 */
																																									if (CELLP(BgL_objz00_133))
																																										{	/* Llib/error.scm 1214 */
																																											return
																																												BGl_string3232z00zz__errorz00;
																																										}
																																									else
																																										{	/* Llib/error.scm 1214 */
																																											if (FOREIGNP(BgL_objz00_133))
																																												{	/* Llib/error.scm 1217 */
																																													obj_t
																																														BgL_arg2102z00_2670;
																																													{	/* Llib/error.scm 1217 */
																																														obj_t
																																															BgL_arg2105z00_2673;
																																														BgL_arg2105z00_2673
																																															=
																																															FOREIGN_ID
																																															(BgL_objz00_133);
																																														{	/* Llib/error.scm 1217 */
																																															obj_t
																																																BgL_res2962z00_4429;
																																															{	/* Llib/error.scm 1217 */
																																																obj_t
																																																	BgL_arg2216z00_4428;
																																																BgL_arg2216z00_4428
																																																	=
																																																	SYMBOL_TO_STRING
																																																	(BgL_arg2105z00_2673);
																																																BgL_res2962z00_4429
																																																	=
																																																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																																	(BgL_arg2216z00_4428);
																																															}
																																															BgL_arg2102z00_2670
																																																=
																																																BgL_res2962z00_4429;
																																														}
																																													}
																																													{	/* Llib/error.scm 1217 */
																																														obj_t
																																															BgL_list2103z00_2671;
																																														{	/* Llib/error.scm 1217 */
																																															obj_t
																																																BgL_arg2104z00_2672;
																																															BgL_arg2104z00_2672
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BgL_arg2102z00_2670,
																																																BNIL);
																																															BgL_list2103z00_2671
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BGl_string3233z00zz__errorz00,
																																																BgL_arg2104z00_2672);
																																														}
																																														return
																																															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																															(BgL_list2103z00_2671);
																																													}
																																												}
																																											else
																																												{	/* Llib/error.scm 1216 */
																																													if (SOCKETP(BgL_objz00_133))
																																														{	/* Llib/error.scm 1218 */
																																															return
																																																BGl_string3234z00zz__errorz00;
																																														}
																																													else
																																														{	/* Llib/error.scm 1220 */
																																															bool_t
																																																BgL_test3678z00_7501;
																																															{	/* Llib/error.scm 1220 */
																																																bool_t
																																																	BgL_res2964z00_4431;
																																																BgL_res2964z00_4431
																																																	=
																																																	BGL_DATAGRAM_SOCKETP
																																																	(BgL_objz00_133);
																																																BgL_test3678z00_7501
																																																	=
																																																	BgL_res2964z00_4431;
																																															}
																																															if (BgL_test3678z00_7501)
																																																{	/* Llib/error.scm 1220 */
																																																	return
																																																		BGl_string3235z00zz__errorz00;
																																																}
																																															else
																																																{	/* Llib/error.scm 1220 */
																																																	if (PROCESSP(BgL_objz00_133))
																																																		{	/* Llib/error.scm 1222 */
																																																			return
																																																				BGl_string3236z00zz__errorz00;
																																																		}
																																																	else
																																																		{	/* Llib/error.scm 1222 */
																																																			if (CUSTOMP(BgL_objz00_133))
																																																				{	/* Llib/error.scm 1224 */
																																																					return
																																																						BGl_string3237z00zz__errorz00;
																																																				}
																																																			else
																																																				{	/* Llib/error.scm 1224 */
																																																					if (OPAQUEP(BgL_objz00_133))
																																																						{	/* Llib/error.scm 1226 */
																																																							return
																																																								BGl_string3238z00zz__errorz00;
																																																						}
																																																					else
																																																						{	/* Llib/error.scm 1226 */
																																																							if (BGL_OBJECTP(BgL_objz00_133))
																																																								{	/* Llib/error.scm 1229 */
																																																									obj_t
																																																										BgL_classz00_2680;
																																																									{	/* Llib/error.scm 1229 */
																																																										long
																																																											BgL_arg2579z00_4437;
																																																										{	/* Llib/error.scm 1229 */
																																																											long
																																																												BgL_arg2580z00_4438;
																																																											{	/* Llib/error.scm 1229 */
																																																												long
																																																													BgL_res2969z00_4440;
																																																												BgL_res2969z00_4440
																																																													=
																																																													BGL_OBJECT_CLASS_NUM
																																																													(
																																																													((BgL_objectz00_bglt) BgL_objz00_133));
																																																												BgL_arg2580z00_4438
																																																													=
																																																													BgL_res2969z00_4440;
																																																											}
																																																											BgL_arg2579z00_4437
																																																												=
																																																												(BgL_arg2580z00_4438
																																																												-
																																																												OBJECT_TYPE);
																																																										}
																																																										BgL_classz00_2680
																																																											=
																																																											VECTOR_REF
																																																											(BGl_za2classesza2z00zz__objectz00,
																																																											BgL_arg2579z00_4437);
																																																									}
																																																									if (BGl_classzf3zf3zz__objectz00(BgL_classz00_2680))
																																																										{	/* Llib/error.scm 1234 */
																																																											obj_t
																																																												BgL_symz00_2682;
																																																											BgL_symz00_2682
																																																												=
																																																												BGl_classzd2namezd2zz__objectz00
																																																												(BgL_classz00_2680);
																																																											{	/* Llib/error.scm 1236 */
																																																												obj_t
																																																													BgL_res2972z00_4449;
																																																												{	/* Llib/error.scm 1236 */
																																																													obj_t
																																																														BgL_arg2216z00_4448;
																																																													BgL_arg2216z00_4448
																																																														=
																																																														SYMBOL_TO_STRING
																																																														(BgL_symz00_2682);
																																																													BgL_res2972z00_4449
																																																														=
																																																														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																																														(BgL_arg2216z00_4448);
																																																												}
																																																												return
																																																													BgL_res2972z00_4449;
																																																											}
																																																										}
																																																									else
																																																										{	/* Llib/error.scm 1233 */
																																																											return
																																																												BGl_string3239z00zz__errorz00;
																																																										}
																																																								}
																																																							else
																																																								{	/* Llib/error.scm 1228 */
																																																									if (UCS2_STRINGP(BgL_objz00_133))
																																																										{	/* Llib/error.scm 1239 */
																																																											return
																																																												BGl_string3240z00zz__errorz00;
																																																										}
																																																									else
																																																										{	/* Llib/error.scm 1239 */
																																																											if (UCS2P(BgL_objz00_133))
																																																												{	/* Llib/error.scm 1241 */
																																																													return
																																																														BGl_string3241z00zz__errorz00;
																																																												}
																																																											else
																																																												{	/* Llib/error.scm 1241 */
																																																													if (ELONGP(BgL_objz00_133))
																																																														{	/* Llib/error.scm 1243 */
																																																															return
																																																																BGl_string3242z00zz__errorz00;
																																																														}
																																																													else
																																																														{	/* Llib/error.scm 1243 */
																																																															if (LLONGP(BgL_objz00_133))
																																																																{	/* Llib/error.scm 1245 */
																																																																	return
																																																																		BGl_string3243z00zz__errorz00;
																																																																}
																																																															else
																																																																{	/* Llib/error.scm 1247 */
																																																																	bool_t
																																																																		BgL_test3688z00_7528;
																																																																	{	/* Llib/error.scm 1247 */
																																																																		bool_t
																																																																			BgL_res2977z00_4454;
																																																																		BgL_res2977z00_4454
																																																																			=
																																																																			BGL_MUTEXP
																																																																			(BgL_objz00_133);
																																																																		BgL_test3688z00_7528
																																																																			=
																																																																			BgL_res2977z00_4454;
																																																																	}
																																																																	if (BgL_test3688z00_7528)
																																																																		{	/* Llib/error.scm 1247 */
																																																																			return
																																																																				BGl_string3244z00zz__errorz00;
																																																																		}
																																																																	else
																																																																		{	/* Llib/error.scm 1249 */
																																																																			bool_t
																																																																				BgL_test3689z00_7530;
																																																																			{	/* Llib/error.scm 1249 */
																																																																				bool_t
																																																																					BgL_res2978z00_4455;
																																																																				BgL_res2978z00_4455
																																																																					=
																																																																					BGL_CONDVARP
																																																																					(BgL_objz00_133);
																																																																				BgL_test3689z00_7530
																																																																					=
																																																																					BgL_res2978z00_4455;
																																																																			}
																																																																			if (BgL_test3689z00_7530)
																																																																				{	/* Llib/error.scm 1249 */
																																																																					return
																																																																						BGl_string3245z00zz__errorz00;
																																																																				}
																																																																			else
																																																																				{	/* Llib/error.scm 1249 */
																																																																					if (BGL_DATEP(BgL_objz00_133))
																																																																						{	/* Llib/error.scm 1251 */
																																																																							return
																																																																								BGl_string3246z00zz__errorz00;
																																																																						}
																																																																					else
																																																																						{	/* Llib/error.scm 1251 */
																																																																							if (BGL_HVECTORP(BgL_objz00_133))
																																																																								{	/* Llib/error.scm 1254 */
																																																																									obj_t
																																																																										BgL_tagz00_2692;
																																																																									BgL_tagz00_2692
																																																																										=
																																																																										BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00
																																																																										(BgL_objz00_133);
																																																																									{	/* Llib/error.scm 1255 */
																																																																										obj_t
																																																																											BgL__z00_2693;
																																																																										obj_t
																																																																											BgL__z00_2694;
																																																																										obj_t
																																																																											BgL__z00_2695;
																																																																										{	/* Llib/error.scm 1256 */
																																																																											int
																																																																												BgL_tmpz00_7537;
																																																																											BgL_tmpz00_7537
																																																																												=
																																																																												(int)
																																																																												(
																																																																												((long) 1));
																																																																											BgL__z00_2693
																																																																												=
																																																																												BGL_MVALUES_VAL
																																																																												(BgL_tmpz00_7537);
																																																																										}
																																																																										{	/* Llib/error.scm 1256 */
																																																																											int
																																																																												BgL_tmpz00_7540;
																																																																											BgL_tmpz00_7540
																																																																												=
																																																																												(int)
																																																																												(
																																																																												((long) 2));
																																																																											BgL__z00_2694
																																																																												=
																																																																												BGL_MVALUES_VAL
																																																																												(BgL_tmpz00_7540);
																																																																										}
																																																																										{	/* Llib/error.scm 1256 */
																																																																											int
																																																																												BgL_tmpz00_7543;
																																																																											BgL_tmpz00_7543
																																																																												=
																																																																												(int)
																																																																												(
																																																																												((long) 3));
																																																																											BgL__z00_2695
																																																																												=
																																																																												BGL_MVALUES_VAL
																																																																												(BgL_tmpz00_7543);
																																																																										}
																																																																										{	/* Llib/error.scm 1256 */
																																																																											obj_t
																																																																												BgL_arg2122z00_2696;
																																																																											{	/* Llib/error.scm 1256 */
																																																																												obj_t
																																																																													BgL_res2980z00_4459;
																																																																												{	/* Llib/error.scm 1256 */
																																																																													obj_t
																																																																														BgL_arg2216z00_4458;
																																																																													BgL_arg2216z00_4458
																																																																														=
																																																																														SYMBOL_TO_STRING
																																																																														(
																																																																														((obj_t) BgL_tagz00_2692));
																																																																													BgL_res2980z00_4459
																																																																														=
																																																																														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																																																														(BgL_arg2216z00_4458);
																																																																												}
																																																																												BgL_arg2122z00_2696
																																																																													=
																																																																													BgL_res2980z00_4459;
																																																																											}
																																																																											{	/* Llib/error.scm 1256 */
																																																																												obj_t
																																																																													BgL_list2123z00_2697;
																																																																												{	/* Llib/error.scm 1256 */
																																																																													obj_t
																																																																														BgL_arg2125z00_2698;
																																																																													BgL_arg2125z00_2698
																																																																														=
																																																																														MAKE_YOUNG_PAIR
																																																																														(BGl_string3227z00zz__errorz00,
																																																																														BNIL);
																																																																													BgL_list2123z00_2697
																																																																														=
																																																																														MAKE_YOUNG_PAIR
																																																																														(BgL_arg2122z00_2696,
																																																																														BgL_arg2125z00_2698);
																																																																												}
																																																																												return
																																																																													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																																																													(BgL_list2123z00_2697);
																																																																											}
																																																																										}
																																																																									}
																																																																								}
																																																																							else
																																																																								{	/* Llib/error.scm 1253 */
																																																																									if (BIGNUMP(BgL_objz00_133))
																																																																										{	/* Llib/error.scm 1257 */
																																																																											return
																																																																												BGl_string3247z00zz__errorz00;
																																																																										}
																																																																									else
																																																																										{	/* Llib/error.scm 1257 */
																																																																											if (BGL_MMAPP(BgL_objz00_133))
																																																																												{	/* Llib/error.scm 1259 */
																																																																													return
																																																																														BGl_string3248z00zz__errorz00;
																																																																												}
																																																																											else
																																																																												{	/* Llib/error.scm 1261 */
																																																																													bool_t
																																																																														BgL_test3694z00_7556;
																																																																													{	/* Llib/error.scm 1261 */
																																																																														bool_t
																																																																															BgL_res2982z00_4461;
																																																																														BgL_res2982z00_4461
																																																																															=
																																																																															BGL_REGEXPP
																																																																															(BgL_objz00_133);
																																																																														BgL_test3694z00_7556
																																																																															=
																																																																															BgL_res2982z00_4461;
																																																																													}
																																																																													if (BgL_test3694z00_7556)
																																																																														{	/* Llib/error.scm 1261 */
																																																																															return
																																																																																BGl_string3249z00zz__errorz00;
																																																																														}
																																																																													else
																																																																														{	/* Llib/error.scm 1261 */
																																																																															if (BGL_INT8P(BgL_objz00_133))
																																																																																{	/* Llib/error.scm 1263 */
																																																																																	return
																																																																																		BGl_string3250z00zz__errorz00;
																																																																																}
																																																																															else
																																																																																{	/* Llib/error.scm 1263 */
																																																																																	if (BGL_UINT8P(BgL_objz00_133))
																																																																																		{	/* Llib/error.scm 1265 */
																																																																																			return
																																																																																				BGl_string3251z00zz__errorz00;
																																																																																		}
																																																																																	else
																																																																																		{	/* Llib/error.scm 1265 */
																																																																																			if (BGL_INT16P(BgL_objz00_133))
																																																																																				{	/* Llib/error.scm 1267 */
																																																																																					return
																																																																																						BGl_string3252z00zz__errorz00;
																																																																																				}
																																																																																			else
																																																																																				{	/* Llib/error.scm 1267 */
																																																																																					if (BGL_UINT16P(BgL_objz00_133))
																																																																																						{	/* Llib/error.scm 1269 */
																																																																																							return
																																																																																								BGl_string3253z00zz__errorz00;
																																																																																						}
																																																																																					else
																																																																																						{	/* Llib/error.scm 1269 */
																																																																																							if (BGL_INT32P(BgL_objz00_133))
																																																																																								{	/* Llib/error.scm 1271 */
																																																																																									return
																																																																																										BGl_string3254z00zz__errorz00;
																																																																																								}
																																																																																							else
																																																																																								{	/* Llib/error.scm 1271 */
																																																																																									if (BGL_UINT32P(BgL_objz00_133))
																																																																																										{	/* Llib/error.scm 1273 */
																																																																																											return
																																																																																												BGl_string3255z00zz__errorz00;
																																																																																										}
																																																																																									else
																																																																																										{	/* Llib/error.scm 1273 */
																																																																																											if (BGL_INT64P(BgL_objz00_133))
																																																																																												{	/* Llib/error.scm 1275 */
																																																																																													return
																																																																																														BGl_string3256z00zz__errorz00;
																																																																																												}
																																																																																											else
																																																																																												{	/* Llib/error.scm 1275 */
																																																																																													if (BGL_UINT64P(BgL_objz00_133))
																																																																																														{	/* Llib/error.scm 1277 */
																																																																																															return
																																																																																																BGl_string3257z00zz__errorz00;
																																																																																														}
																																																																																													else
																																																																																														{	/* Llib/error.scm 1277 */
																																																																																															if (CNSTP(BgL_objz00_133))
																																																																																																{	/* Llib/error.scm 1279 */
																																																																																																	return
																																																																																																		BGl_string3258z00zz__errorz00;
																																																																																																}
																																																																																															else
																																																																																																{	/* Llib/error.scm 1279 */
																																																																																																	return
																																																																																																		string_to_bstring
																																																																																																		(FOREIGN_TYPE_NAME
																																																																																																		(BgL_objz00_133));
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
								}
						}
				}
		}

	}



/* &typeof */
	obj_t BGl_z62typeofz62zz__errorz00(obj_t BgL_envz00_5051,
		obj_t BgL_objz00_5052)
	{
		{	/* Llib/error.scm 1174 */
			return bgl_typeof(BgL_objz00_5052);
		}

	}



/* find-runtime-type */
	BGL_EXPORTED_DEF obj_t bgl_find_runtime_type(obj_t BgL_oz00_134)
	{
		{	/* Llib/error.scm 1287 */
			return bgl_typeof(BgL_oz00_134);
		}

	}



/* &find-runtime-type */
	obj_t BGl_z62findzd2runtimezd2typez62zz__errorz00(obj_t BgL_envz00_5053,
		obj_t BgL_oz00_5054)
	{
		{	/* Llib/error.scm 1287 */
			return bgl_find_runtime_type(BgL_oz00_5054);
		}

	}



/* c-debugging-show-type */
	BGL_EXPORTED_DEF char *bgl_show_type(obj_t BgL_objz00_135)
	{
		{	/* Llib/error.scm 1295 */
			{	/* Llib/error.scm 1296 */
				obj_t BgL_tz00_4471;

				BgL_tz00_4471 = bgl_typeof(BgL_objz00_135);
				{	/* Llib/error.scm 1297 */
					obj_t BgL_arg2138z00_4472;

					{	/* Llib/error.scm 1297 */
						obj_t BgL_res2992z00_4475;

						{	/* Llib/error.scm 1297 */
							obj_t BgL_tmpz00_7582;

							BgL_tmpz00_7582 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2992z00_4475 = BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_7582);
						}
						BgL_arg2138z00_4472 = BgL_res2992z00_4475;
					}
					{	/* Llib/error.scm 1297 */
						obj_t BgL_list2139z00_4473;

						BgL_list2139z00_4473 = MAKE_YOUNG_PAIR(BgL_tz00_4471, BNIL);
						BGl_fprintz00zz__r4_output_6_10_3z00(BgL_arg2138z00_4472,
							BgL_list2139z00_4473);
				}}
				return BSTRING_TO_STRING(BgL_tz00_4471);
			}
		}

	}



/* &c-debugging-show-type */
	obj_t BGl_z62czd2debuggingzd2showzd2typezb0zz__errorz00(obj_t BgL_envz00_5055,
		obj_t BgL_objz00_5056)
	{
		{	/* Llib/error.scm 1295 */
			return string_to_bstring(bgl_show_type(BgL_objz00_5056));
		}

	}



/* &try */
	BGL_EXPORTED_DEF obj_t BGl_z62tryz62zz__errorz00(obj_t BgL_thunkz00_136,
		obj_t BgL_handlerz00_137)
	{
		{	/* Llib/error.scm 1303 */
			return
				BGl_zc3z04exitza32140ze3ze70z60zz__errorz00(BgL_thunkz00_136,
				BgL_handlerz00_137);
		}

	}



/* <@exit:2140>~0 */
	obj_t BGl_zc3z04exitza32140ze3ze70z60zz__errorz00(obj_t BgL_thunkz00_5073,
		obj_t BgL_handlerz00_5072)
	{
		{	/* Llib/error.scm 1304 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1127z00_2715;

			if (SET_EXIT(BgL_an_exit1127z00_2715))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1127z00_2715 = (void *) jmpbuf;
					{	/* Llib/error.scm 1304 */

						PUSH_EXIT(BgL_an_exit1127z00_2715, ((long) 1));
						{	/* Llib/error.scm 1304 */
							obj_t BgL_an_exitd1128z00_2716;

							BgL_an_exitd1128z00_2716 = ((obj_t) (&exitd));
							{	/* Llib/error.scm 1304 */
								obj_t BgL_escz00_5057;

								BgL_escz00_5057 =
									MAKE_FX_PROCEDURE(BGl_z62escz62zz__errorz00,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_escz00_5057,
									(int) (((long) 0)), BgL_an_exitd1128z00_2716);
								{	/* Llib/error.scm 1304 */
									obj_t BgL_res1130z00_2719;

									{	/* Llib/error.scm 1307 */
										obj_t BgL_zc3z04anonymousza32142ze3z87_5058;

										BgL_zc3z04anonymousza32142ze3z87_5058 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza32142ze3ze5zz__errorz00,
											(int) (((long) 1)), (int) (((long) 3)));
										PROCEDURE_SET(BgL_zc3z04anonymousza32142ze3z87_5058,
											(int) (((long) 0)), BgL_an_exitd1128z00_2716);
										PROCEDURE_SET(BgL_zc3z04anonymousza32142ze3z87_5058,
											(int) (((long) 1)), BgL_handlerz00_5072);
										PROCEDURE_SET(BgL_zc3z04anonymousza32142ze3z87_5058,
											(int) (((long) 2)), BgL_escz00_5057);
										BgL_res1130z00_2719 =
											BGl_withzd2exceptionzd2handlerz00zz__errorz00
											(BgL_zc3z04anonymousza32142ze3z87_5058,
											BgL_thunkz00_5073);
									}
									POP_EXIT();
									return BgL_res1130z00_2719;
								}
							}
						}
					}
				}
		}

	}



/* &&try */
	obj_t BGl_z62z62tryz00zz__errorz00(obj_t BgL_envz00_5059,
		obj_t BgL_thunkz00_5060, obj_t BgL_handlerz00_5061)
	{
		{	/* Llib/error.scm 1303 */
			{	/* Llib/error.scm 1304 */
				obj_t BgL_auxz00_7617;
				obj_t BgL_auxz00_7610;

				if (PROCEDUREP(BgL_handlerz00_5061))
					{	/* Llib/error.scm 1304 */
						BgL_auxz00_7617 = BgL_handlerz00_5061;
					}
				else
					{
						obj_t BgL_auxz00_7620;

						BgL_auxz00_7620 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
							BINT(((long) 48740)), BGl_string3259z00zz__errorz00,
							BGl_string3141z00zz__errorz00, BgL_handlerz00_5061);
						FAILURE(BgL_auxz00_7620, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_thunkz00_5060))
					{	/* Llib/error.scm 1304 */
						BgL_auxz00_7610 = BgL_thunkz00_5060;
					}
				else
					{
						obj_t BgL_auxz00_7613;

						BgL_auxz00_7613 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
							BINT(((long) 48740)), BGl_string3259z00zz__errorz00,
							BGl_string3141z00zz__errorz00, BgL_thunkz00_5060);
						FAILURE(BgL_auxz00_7613, BFALSE, BFALSE);
					}
				return BGl_z62tryz62zz__errorz00(BgL_auxz00_7610, BgL_auxz00_7617);
			}
		}

	}



/* &<@anonymous:2142> */
	obj_t BGl_z62zc3z04anonymousza32142ze3ze5zz__errorz00(obj_t BgL_envz00_5062,
		obj_t BgL_ez00_5066)
	{
		{	/* Llib/error.scm 1306 */
			{	/* Llib/error.scm 1307 */
				obj_t BgL_handlerz00_5064;
				obj_t BgL_escz00_5065;

				BgL_handlerz00_5064 =
					((obj_t) PROCEDURE_REF(BgL_envz00_5062, (int) (((long) 1))));
				BgL_escz00_5065 =
					((obj_t) PROCEDURE_REF(BgL_envz00_5062, (int) (((long) 2))));
				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_5066,
						BGl_z62errorz62zz__objectz00))
					{	/* Llib/error.scm 1307 */
						{	/* Llib/error.scm 1309 */
							obj_t BgL_arg2144z00_5127;
							obj_t BgL_arg2145z00_5128;
							obj_t BgL_arg2146z00_5129;

							BgL_arg2144z00_5127 =
								(((BgL_z62errorz62_bglt) COBJECT(
										((BgL_z62errorz62_bglt) BgL_ez00_5066)))->BgL_procz00);
							BgL_arg2145z00_5128 =
								(((BgL_z62errorz62_bglt) COBJECT(
										((BgL_z62errorz62_bglt) BgL_ez00_5066)))->BgL_msgz00);
							BgL_arg2146z00_5129 =
								(((BgL_z62errorz62_bglt) COBJECT(
										((BgL_z62errorz62_bglt) BgL_ez00_5066)))->BgL_objz00);
							PROCEDURE_ENTRY(BgL_handlerz00_5064) (BgL_handlerz00_5064,
								BgL_escz00_5065, BgL_arg2144z00_5127, BgL_arg2145z00_5128,
								BgL_arg2146z00_5129, BEOA);
						}
						{	/* Llib/error.scm 1310 */
							obj_t BgL_list2147z00_5130;

							BgL_list2147z00_5130 = MAKE_YOUNG_PAIR(BINT(((long) 4)), BNIL);
							return BGl_exitz00zz__errorz00(BgL_list2147z00_5130);
						}
					}
				else
					{	/* Llib/error.scm 1307 */
						return BGl_raisez00zz__errorz00(BgL_ez00_5066);
					}
			}
		}

	}



/* &esc */
	obj_t BGl_z62escz62zz__errorz00(obj_t BgL_envz00_5067,
		obj_t BgL_val1129z00_5069)
	{
		{	/* Llib/error.scm 1304 */
			return
				BGl_unwindzd2untilz12zc0zz__bexitz00(PROCEDURE_REF(BgL_envz00_5067,
					(int) (((long) 0))), BgL_val1129z00_5069);
		}

	}



/* notify-interrupt */
	BGL_EXPORTED_DEF obj_t BGl_notifyzd2interruptzd2zz__errorz00(int
		BgL_sigz00_138)
	{
		{	/* Llib/error.scm 1317 */
			{	/* Llib/error.scm 1318 */
				obj_t BgL_notifyz00_4476;

				BgL_notifyz00_4476 = BGL_INTERRUPT_NOTIFIER_GET();
				if (PROCEDUREP(BgL_notifyz00_4476))
					{	/* Llib/error.scm 1319 */
						return
							PROCEDURE_ENTRY(BgL_notifyz00_4476) (BgL_notifyz00_4476,
							BINT(BgL_sigz00_138), BEOA);
					}
				else
					{	/* Llib/error.scm 1328 */
						obj_t BgL_portz00_4479;

						{	/* Llib/error.scm 1328 */
							obj_t BgL_res2994z00_4483;

							{	/* Llib/error.scm 1328 */
								obj_t BgL_tmpz00_7661;

								BgL_tmpz00_7661 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2994z00_4483 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_7661);
							}
							BgL_portz00_4479 = BgL_res2994z00_4483;
						}
						{	/* Llib/error.scm 1329 */
							obj_t BgL_list2149z00_4480;

							BgL_list2149z00_4480 = MAKE_YOUNG_PAIR(BgL_portz00_4479, BNIL);
							BGl_newlinez00zz__r4_output_6_10_3z00(BgL_list2149z00_4480);
						}
						{	/* Llib/error.scm 1330 */
							obj_t BgL_list2150z00_4481;

							BgL_list2150z00_4481 =
								MAKE_YOUNG_PAIR(BGl_string3260z00zz__errorz00, BNIL);
							BGl_fprintz00zz__r4_output_6_10_3z00(BgL_portz00_4479,
								BgL_list2150z00_4481);
						}
						return bgl_flush_output_port(BgL_portz00_4479);
					}
			}
		}

	}



/* &notify-interrupt */
	obj_t BGl_z62notifyzd2interruptzb0zz__errorz00(obj_t BgL_envz00_5070,
		obj_t BgL_sigz00_5071)
	{
		{	/* Llib/error.scm 1317 */
			{	/* Llib/error.scm 1318 */
				int BgL_auxz00_7669;

				{	/* Llib/error.scm 1318 */
					obj_t BgL_tmpz00_7670;

					if (INTEGERP(BgL_sigz00_5071))
						{	/* Llib/error.scm 1318 */
							BgL_tmpz00_7670 = BgL_sigz00_5071;
						}
					else
						{
							obj_t BgL_auxz00_7673;

							BgL_auxz00_7673 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3131z00zz__errorz00,
								BINT(((long) 49202)), BGl_string3261z00zz__errorz00,
								BGl_string3133z00zz__errorz00, BgL_sigz00_5071);
							FAILURE(BgL_auxz00_7673, BFALSE, BFALSE);
						}
					BgL_auxz00_7669 = CINT(BgL_tmpz00_7670);
				}
				return BGl_notifyzd2interruptzd2zz__errorz00(BgL_auxz00_7669);
			}
		}

	}



/* &sigfpe-error-handler */
	obj_t BGl_z62sigfpezd2errorzd2handlerz62zz__errorz00(obj_t BgL_envz00_4910,
		obj_t BgL_nz00_4911)
	{
		{	/* Llib/error.scm 1336 */
			{	/* Llib/error.scm 457 */
				BgL_z62errorz62_bglt BgL_arg1442z00_5131;

				{	/* Llib/error.scm 457 */
					BgL_z62errorz62_bglt BgL_new1078z00_5132;

					{	/* Llib/error.scm 457 */
						BgL_z62errorz62_bglt BgL_new1077z00_5133;

						BgL_new1077z00_5133 =
							((BgL_z62errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_z62errorz62_bgl))));
						{	/* Llib/error.scm 457 */
							long BgL_arg1445z00_5134;

							{	/* Llib/error.scm 457 */
								long BgL_res2671z00_5135;

								BgL_res2671z00_5135 =
									BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00);
								BgL_arg1445z00_5134 = BgL_res2671z00_5135;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1077z00_5133),
								BgL_arg1445z00_5134);
						}
						BgL_new1078z00_5132 = BgL_new1077z00_5133;
					}
					((((BgL_z62exceptionz62_bglt) COBJECT(
									((BgL_z62exceptionz62_bglt) BgL_new1078z00_5132)))->
							BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
					((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
										BgL_new1078z00_5132)))->BgL_locationz00) =
						((obj_t) BFALSE), BUNSPEC);
					{
						obj_t BgL_auxz00_7687;

						{	/* Llib/error.scm 457 */
							obj_t BgL_arg1443z00_5136;

							{	/* Llib/error.scm 457 */
								obj_t BgL_arg1444z00_5137;

								{	/* Llib/error.scm 457 */
									obj_t BgL_res2672z00_5138;

									{	/* Llib/error.scm 457 */
										obj_t BgL_classz00_5139;

										BgL_classz00_5139 = BGl_z62errorz62zz__objectz00;
										BgL_res2672z00_5138 =
											BGL_CLASS_ALL_FIELDS(BgL_classz00_5139);
									}
									BgL_arg1444z00_5137 = BgL_res2672z00_5138;
								}
								BgL_arg1443z00_5136 =
									VECTOR_REF(BgL_arg1444z00_5137, ((long) 2));
							}
							BgL_auxz00_7687 =
								BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
								(BgL_arg1443z00_5136);
						}
						((((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt) BgL_new1078z00_5132)))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_7687), BUNSPEC);
					}
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_5132))->
							BgL_procz00) = ((obj_t) BGl_string3262z00zz__errorz00), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_5132))->BgL_msgz00) =
						((obj_t) BGl_string3263z00zz__errorz00), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_5132))->BgL_objz00) =
						((obj_t) BGl_string3264z00zz__errorz00), BUNSPEC);
					BgL_arg1442z00_5131 = BgL_new1078z00_5132;
				}
				return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1442z00_5131));
			}
		}

	}



/* &sigill-error-handler */
	obj_t BGl_z62sigillzd2errorzd2handlerz62zz__errorz00(obj_t BgL_envz00_4912,
		obj_t BgL_nz00_4913)
	{
		{	/* Llib/error.scm 1342 */
			{	/* Llib/error.scm 457 */
				BgL_z62errorz62_bglt BgL_arg1442z00_5140;

				{	/* Llib/error.scm 457 */
					BgL_z62errorz62_bglt BgL_new1078z00_5141;

					{	/* Llib/error.scm 457 */
						BgL_z62errorz62_bglt BgL_new1077z00_5142;

						BgL_new1077z00_5142 =
							((BgL_z62errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_z62errorz62_bgl))));
						{	/* Llib/error.scm 457 */
							long BgL_arg1445z00_5143;

							{	/* Llib/error.scm 457 */
								long BgL_res2671z00_5144;

								BgL_res2671z00_5144 =
									BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00);
								BgL_arg1445z00_5143 = BgL_res2671z00_5144;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1077z00_5142),
								BgL_arg1445z00_5143);
						}
						BgL_new1078z00_5141 = BgL_new1077z00_5142;
					}
					((((BgL_z62exceptionz62_bglt) COBJECT(
									((BgL_z62exceptionz62_bglt) BgL_new1078z00_5141)))->
							BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
					((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
										BgL_new1078z00_5141)))->BgL_locationz00) =
						((obj_t) BFALSE), BUNSPEC);
					{
						obj_t BgL_auxz00_7706;

						{	/* Llib/error.scm 457 */
							obj_t BgL_arg1443z00_5145;

							{	/* Llib/error.scm 457 */
								obj_t BgL_arg1444z00_5146;

								{	/* Llib/error.scm 457 */
									obj_t BgL_res2672z00_5147;

									{	/* Llib/error.scm 457 */
										obj_t BgL_classz00_5148;

										BgL_classz00_5148 = BGl_z62errorz62zz__objectz00;
										BgL_res2672z00_5147 =
											BGL_CLASS_ALL_FIELDS(BgL_classz00_5148);
									}
									BgL_arg1444z00_5146 = BgL_res2672z00_5147;
								}
								BgL_arg1443z00_5145 =
									VECTOR_REF(BgL_arg1444z00_5146, ((long) 2));
							}
							BgL_auxz00_7706 =
								BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
								(BgL_arg1443z00_5145);
						}
						((((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt) BgL_new1078z00_5141)))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_7706), BUNSPEC);
					}
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_5141))->
							BgL_procz00) = ((obj_t) BGl_string3265z00zz__errorz00), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_5141))->BgL_msgz00) =
						((obj_t) BGl_string3266z00zz__errorz00), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_5141))->BgL_objz00) =
						((obj_t) BGl_string3264z00zz__errorz00), BUNSPEC);
					BgL_arg1442z00_5140 = BgL_new1078z00_5141;
				}
				return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1442z00_5140));
			}
		}

	}



/* &sigbus-error-handler */
	obj_t BGl_z62sigbuszd2errorzd2handlerz62zz__errorz00(obj_t BgL_envz00_4914,
		obj_t BgL_nz00_4915)
	{
		{	/* Llib/error.scm 1348 */
			{	/* Llib/error.scm 457 */
				BgL_z62errorz62_bglt BgL_arg1442z00_5149;

				{	/* Llib/error.scm 457 */
					BgL_z62errorz62_bglt BgL_new1078z00_5150;

					{	/* Llib/error.scm 457 */
						BgL_z62errorz62_bglt BgL_new1077z00_5151;

						BgL_new1077z00_5151 =
							((BgL_z62errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_z62errorz62_bgl))));
						{	/* Llib/error.scm 457 */
							long BgL_arg1445z00_5152;

							{	/* Llib/error.scm 457 */
								long BgL_res2671z00_5153;

								BgL_res2671z00_5153 =
									BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00);
								BgL_arg1445z00_5152 = BgL_res2671z00_5153;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1077z00_5151),
								BgL_arg1445z00_5152);
						}
						BgL_new1078z00_5150 = BgL_new1077z00_5151;
					}
					((((BgL_z62exceptionz62_bglt) COBJECT(
									((BgL_z62exceptionz62_bglt) BgL_new1078z00_5150)))->
							BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
					((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
										BgL_new1078z00_5150)))->BgL_locationz00) =
						((obj_t) BFALSE), BUNSPEC);
					{
						obj_t BgL_auxz00_7725;

						{	/* Llib/error.scm 457 */
							obj_t BgL_arg1443z00_5154;

							{	/* Llib/error.scm 457 */
								obj_t BgL_arg1444z00_5155;

								{	/* Llib/error.scm 457 */
									obj_t BgL_res2672z00_5156;

									{	/* Llib/error.scm 457 */
										obj_t BgL_classz00_5157;

										BgL_classz00_5157 = BGl_z62errorz62zz__objectz00;
										BgL_res2672z00_5156 =
											BGL_CLASS_ALL_FIELDS(BgL_classz00_5157);
									}
									BgL_arg1444z00_5155 = BgL_res2672z00_5156;
								}
								BgL_arg1443z00_5154 =
									VECTOR_REF(BgL_arg1444z00_5155, ((long) 2));
							}
							BgL_auxz00_7725 =
								BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
								(BgL_arg1443z00_5154);
						}
						((((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt) BgL_new1078z00_5150)))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_7725), BUNSPEC);
					}
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_5150))->
							BgL_procz00) = ((obj_t) BGl_string3265z00zz__errorz00), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_5150))->BgL_msgz00) =
						((obj_t) BGl_string3267z00zz__errorz00), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_5150))->BgL_objz00) =
						((obj_t) BGl_string3264z00zz__errorz00), BUNSPEC);
					BgL_arg1442z00_5149 = BgL_new1078z00_5150;
				}
				return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1442z00_5149));
			}
		}

	}



/* &sigsegv-error-handler */
	obj_t BGl_z62sigsegvzd2errorzd2handlerz62zz__errorz00(obj_t BgL_envz00_4916,
		obj_t BgL_nz00_4917)
	{
		{	/* Llib/error.scm 1354 */
			{	/* Llib/error.scm 457 */
				BgL_z62errorz62_bglt BgL_arg1442z00_5158;

				{	/* Llib/error.scm 457 */
					BgL_z62errorz62_bglt BgL_new1078z00_5159;

					{	/* Llib/error.scm 457 */
						BgL_z62errorz62_bglt BgL_new1077z00_5160;

						BgL_new1077z00_5160 =
							((BgL_z62errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_z62errorz62_bgl))));
						{	/* Llib/error.scm 457 */
							long BgL_arg1445z00_5161;

							{	/* Llib/error.scm 457 */
								long BgL_res2671z00_5162;

								BgL_res2671z00_5162 =
									BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00);
								BgL_arg1445z00_5161 = BgL_res2671z00_5162;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1077z00_5160),
								BgL_arg1445z00_5161);
						}
						BgL_new1078z00_5159 = BgL_new1077z00_5160;
					}
					((((BgL_z62exceptionz62_bglt) COBJECT(
									((BgL_z62exceptionz62_bglt) BgL_new1078z00_5159)))->
							BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
					((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
										BgL_new1078z00_5159)))->BgL_locationz00) =
						((obj_t) BFALSE), BUNSPEC);
					{
						obj_t BgL_auxz00_7744;

						{	/* Llib/error.scm 457 */
							obj_t BgL_arg1443z00_5163;

							{	/* Llib/error.scm 457 */
								obj_t BgL_arg1444z00_5164;

								{	/* Llib/error.scm 457 */
									obj_t BgL_res2672z00_5165;

									{	/* Llib/error.scm 457 */
										obj_t BgL_classz00_5166;

										BgL_classz00_5166 = BGl_z62errorz62zz__objectz00;
										BgL_res2672z00_5165 =
											BGL_CLASS_ALL_FIELDS(BgL_classz00_5166);
									}
									BgL_arg1444z00_5164 = BgL_res2672z00_5165;
								}
								BgL_arg1443z00_5163 =
									VECTOR_REF(BgL_arg1444z00_5164, ((long) 2));
							}
							BgL_auxz00_7744 =
								BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
								(BgL_arg1443z00_5163);
						}
						((((BgL_z62exceptionz62_bglt) COBJECT(
										((BgL_z62exceptionz62_bglt) BgL_new1078z00_5159)))->
								BgL_stackz00) = ((obj_t) BgL_auxz00_7744), BUNSPEC);
					}
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_5159))->
							BgL_procz00) = ((obj_t) BGl_string3265z00zz__errorz00), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_5159))->BgL_msgz00) =
						((obj_t) BGl_string3268z00zz__errorz00), BUNSPEC);
					((((BgL_z62errorz62_bglt) COBJECT(BgL_new1078z00_5159))->BgL_objz00) =
						((obj_t) BGl_string3264z00zz__errorz00), BUNSPEC);
					BgL_arg1442z00_5158 = BgL_new1078z00_5159;
				}
				return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1442z00_5158));
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__errorz00()
	{
		{	/* Llib/error.scm 18 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__errorz00()
	{
		{	/* Llib/error.scm 18 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__errorz00()
	{
		{	/* Llib/error.scm 18 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__errorz00()
	{
		{	/* Llib/error.scm 18 */
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 323064336),
				BSTRING_TO_STRING(BGl_string3269z00zz__errorz00));
			return
				BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string3269z00zz__errorz00));
		}

	}

#ifdef __cplusplus
}
#endif
