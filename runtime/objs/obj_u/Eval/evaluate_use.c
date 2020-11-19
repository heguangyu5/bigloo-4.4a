/*===========================================================================*/
/*   (Eval/evaluate_use.scm)                                                 */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/evaluate_use.scm -indent -o objs/obj_u/Eval/evaluate_use.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_ev_exprz00_bgl
	{
		header_t header;
		obj_t widening;
	}                 *BgL_ev_exprz00_bglt;

	typedef struct BgL_ev_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_namez00;
		obj_t BgL_effz00;
		obj_t BgL_typez00;
	}                *BgL_ev_varz00_bglt;

	typedef struct BgL_ev_ifz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_exprz00_bgl *BgL_pz00;
		struct BgL_ev_exprz00_bgl *BgL_tz00;
		struct BgL_ev_exprz00_bgl *BgL_ez00;
	}               *BgL_ev_ifz00_bglt;

	typedef struct BgL_ev_listz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_argsz00;
	}                 *BgL_ev_listz00_bglt;

	typedef struct BgL_ev_prog2z00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_exprz00_bgl *BgL_e1z00;
		struct BgL_ev_exprz00_bgl *BgL_e2z00;
	}                  *BgL_ev_prog2z00_bglt;

	typedef struct BgL_ev_hookz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_exprz00_bgl *BgL_ez00;
	}                 *BgL_ev_hookz00_bglt;

	typedef struct BgL_ev_setlocalz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_exprz00_bgl *BgL_ez00;
		struct BgL_ev_varz00_bgl *BgL_vz00;
	}                     *BgL_ev_setlocalz00_bglt;

	typedef struct BgL_ev_bindzd2exitzd2_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_varz00_bgl *BgL_varz00;
		struct BgL_ev_exprz00_bgl *BgL_bodyz00;
	}                        *BgL_ev_bindzd2exitzd2_bglt;

	typedef struct BgL_ev_unwindzd2protectzd2_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_exprz00_bgl *BgL_ez00;
		struct BgL_ev_exprz00_bgl *BgL_bodyz00;
	}                             *BgL_ev_unwindzd2protectzd2_bglt;

	typedef struct BgL_ev_withzd2handlerzd2_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_ev_exprz00_bgl *BgL_handlerz00;
		struct BgL_ev_exprz00_bgl *BgL_bodyz00;
	}                           *BgL_ev_withzd2handlerzd2_bglt;

	typedef struct BgL_ev_synchroniza7eza7_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_ev_exprz00_bgl *BgL_mutexz00;
		struct BgL_ev_exprz00_bgl *BgL_prelockz00;
		struct BgL_ev_exprz00_bgl *BgL_bodyz00;
	}                          *BgL_ev_synchroniza7eza7_bglt;

	typedef struct BgL_ev_binderz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_varsz00;
		obj_t BgL_valsz00;
		struct BgL_ev_exprz00_bgl *BgL_bodyz00;
	}                   *BgL_ev_binderz00_bglt;

	typedef struct BgL_ev_labelsz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_varsz00;
		obj_t BgL_valsz00;
		obj_t BgL_envz00;
		obj_t BgL_stkz00;
		struct BgL_ev_exprz00_bgl *BgL_bodyz00;
		obj_t BgL_boxesz00;
	}                   *BgL_ev_labelsz00_bglt;

	typedef struct BgL_ev_gotoz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_ev_varz00_bgl *BgL_labelz00;
		struct BgL_ev_labelsz00_bgl *BgL_labelsz00;
		obj_t BgL_argsz00;
	}                 *BgL_ev_gotoz00_bglt;

	typedef struct BgL_ev_appz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_ev_exprz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_tailzf3zf3;
	}                *BgL_ev_appz00_bglt;

	typedef struct BgL_ev_absz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_wherez00;
		obj_t BgL_arityz00;
		obj_t BgL_varsz00;
		struct BgL_ev_exprz00_bgl *BgL_bodyz00;
		int BgL_siza7eza7;
		obj_t BgL_bindz00;
		obj_t BgL_freez00;
		obj_t BgL_innerz00;
		obj_t BgL_boxesz00;
	}                *BgL_ev_absz00_bglt;


	static obj_t BGl_z62usezd2ev_synchroniza7e1157z17zz__evaluate_usez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62usezd2ev_prog21145zb0zz__evaluate_usez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__evaluate_usez00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__evaluate_usez00();
	static obj_t BGl_z62use1132z62zz__evaluate_usez00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__evaluate_usez00();
	extern obj_t BGl_ev_prog2z00zz__evaluate_typesz00;
	static obj_t BGl_objectzd2initzd2zz__evaluate_usez00();
	static obj_t BGl_z62usezd2ev_hook1147zb0zz__evaluate_usez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_ev_bindzd2exitzd2zz__evaluate_typesz00;
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62usezd2ev_withzd2handler1155z62zz__evaluate_usez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62usezd2ev_unwindzd2protec1153z62zz__evaluate_usez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00;
	extern obj_t bstring_to_symbol(obj_t);
	extern bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62usezd2ev_global1137zb0zz__evaluate_usez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_ev_labelsz00zz__evaluate_typesz00;
	static obj_t BGl_methodzd2initzd2zz__evaluate_usez00();
	static obj_t BGl_z62usezd2ev_goto1165zb0zz__evaluate_usez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_ev_absz00zz__evaluate_typesz00;
	static obj_t BGl_z62usezd2ev_bindzd2exit1151z62zz__evaluate_usez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62usezd2ev_var1135zb0zz__evaluate_usez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62usezd2ev_labels1163zb0zz__evaluate_usez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_ev_ifz00zz__evaluate_typesz00;
	static obj_t BGl_z62usezd2ev_setlocal1149zb0zz__evaluate_usez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_ev_hookz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_gotoz00zz__evaluate_typesz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__evaluate_usez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evaluate_typesz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evmodulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evcompilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__ppz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	extern obj_t BGl_ev_globalz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_binderz00zz__evaluate_typesz00;
	static obj_t BGl_z62usezd2ev_app1167zb0zz__evaluate_usez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_ev_listz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_littz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_varz00zz__evaluate_typesz00;
	static obj_t BGl_cnstzd2initzd2zz__evaluate_usez00();
	static obj_t BGl_z62usez62zz__evaluate_usez00(obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__evaluate_usez00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__evaluate_usez00();
	static obj_t BGl_z62usezd2ev_list1143zb0zz__evaluate_usez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_ev_withzd2handlerzd2zz__evaluate_typesz00;
	static obj_t BGl_z62usezd2ev_binder1159zb0zz__evaluate_usez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62usezd2ev_binder1161zb0zz__evaluate_usez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62usezd2ev_abs1169zb0zz__evaluate_usez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_ev_exprz00zz__evaluate_typesz00;
	extern obj_t BGl_ev_appz00zz__evaluate_typesz00;
	static obj_t BGl_z62usezd2ev_litt1139zb0zz__evaluate_usez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_ev_synchroniza7eza7zz__evaluate_typesz00;
	static obj_t BGl_z62usezd2ev_if1141zb0zz__evaluate_usez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol1735z00zz__evaluate_usez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_usez00zz__evaluate_usez00(BgL_ev_exprz00_bglt,
		obj_t);
	extern obj_t BGl_ev_setlocalz00zz__evaluate_typesz00;
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1734z00zz__evaluate_usez00,
		BgL_bgl_string1734za700za7za7_1760za7, "use1132", 7);
	      DEFINE_STRING(BGl_string1736z00zz__evaluate_usez00,
		BgL_bgl_string1736za700za7za7_1761za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1737z00zz__evaluate_usez00,
		BgL_bgl_string1737za700za7za7_1762za7,
		"/tmp/4.4a/runtime/Eval/evaluate_use.scm", 39);
	      DEFINE_STRING(BGl_string1738z00zz__evaluate_usez00,
		BgL_bgl_string1738za700za7za7_1763za7, "&use", 4);
	      DEFINE_STRING(BGl_string1739z00zz__evaluate_usez00,
		BgL_bgl_string1739za700za7za7_1764za7, "ev_expr", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1733z00zz__evaluate_usez00,
		BgL_bgl_za762use1132za762za7za7_1765z00,
		BGl_z62use1132z62zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1741z00zz__evaluate_usez00,
		BgL_bgl_string1741za700za7za7_1766za7, "use", 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1740z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_var11767z00,
		BGl_z62usezd2ev_var1135zb0zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1742z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_glob1768z00,
		BGl_z62usezd2ev_global1137zb0zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1743z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_litt1769z00,
		BGl_z62usezd2ev_litt1139zb0zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1744z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_if111770z00,
		BGl_z62usezd2ev_if1141zb0zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1745z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_list1771z00,
		BGl_z62usezd2ev_list1143zb0zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1746z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_prog1772z00,
		BGl_z62usezd2ev_prog21145zb0zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1747z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_hook1773z00,
		BGl_z62usezd2ev_hook1147zb0zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1748z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_setl1774z00,
		BGl_z62usezd2ev_setlocal1149zb0zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1749z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_bind1775z00,
		BGl_z62usezd2ev_bindzd2exit1151z62zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1759z00zz__evaluate_usez00,
		BgL_bgl_string1759za700za7za7_1776za7, "__evaluate_use", 14);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1750z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_unwi1777z00,
		BGl_z62usezd2ev_unwindzd2protec1153z62zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1751z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_with1778z00,
		BGl_z62usezd2ev_withzd2handler1155z62zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1752z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_sync1779z00,
		BGl_z62usezd2ev_synchroniza7e1157z17zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1753z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_bind1780z00,
		BGl_z62usezd2ev_binder1159zb0zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1754z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_bind1781z00,
		BGl_z62usezd2ev_binder1161zb0zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1755z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_labe1782z00,
		BGl_z62usezd2ev_labels1163zb0zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1756z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_goto1783z00,
		BGl_z62usezd2ev_goto1165zb0zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1757z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_app11784z00,
		BGl_z62usezd2ev_app1167zb0zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1758z00zz__evaluate_usez00,
		BgL_bgl_za762useza7d2ev_abs11785z00,
		BGl_z62usezd2ev_abs1169zb0zz__evaluate_usez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_usezd2envzd2zz__evaluate_usez00,
		BgL_bgl_za762useza762za7za7__eva1786z00, BGl_z62usez62zz__evaluate_usez00,
		0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__evaluate_usez00));
		     ADD_ROOT((void *) (&BGl_symbol1735z00zz__evaluate_usez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__evaluate_usez00(long
		BgL_checksumz00_2363, char *BgL_fromz00_2364)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evaluate_usez00))
				{
					BGl_requirezd2initializa7ationz75zz__evaluate_usez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__evaluate_usez00();
					BGl_cnstzd2initzd2zz__evaluate_usez00();
					BGl_importedzd2moduleszd2initz00zz__evaluate_usez00();
					BGl_genericzd2initzd2zz__evaluate_usez00();
					BGl_methodzd2initzd2zz__evaluate_usez00();
					return BGl_toplevelzd2initzd2zz__evaluate_usez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evaluate_usez00()
	{
		{	/* Eval/evaluate_use.scm 15 */
			return (BGl_symbol1735z00zz__evaluate_usez00 =
				bstring_to_symbol(BGl_string1734z00zz__evaluate_usez00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__evaluate_usez00()
	{
		{	/* Eval/evaluate_use.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__evaluate_usez00()
	{
		{	/* Eval/evaluate_use.scm 15 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__evaluate_usez00()
	{
		{	/* Eval/evaluate_use.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evaluate_usez00()
	{
		{	/* Eval/evaluate_use.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_proc1733z00zz__evaluate_usez00, BGl_ev_exprz00zz__evaluate_typesz00,
				BGl_string1734z00zz__evaluate_usez00);
		}

	}



/* &use1132 */
	obj_t BGl_z62use1132z62zz__evaluate_usez00(obj_t BgL_envz00_2208,
		obj_t BgL_ez00_2209, obj_t BgL_donez00_2210)
	{
		{	/* Eval/evaluate_use.scm 62 */
			return
				BGl_errorz00zz__errorz00(BGl_symbol1735z00zz__evaluate_usez00,
				BGl_string1736z00zz__evaluate_usez00,
				((obj_t) ((BgL_ev_exprz00_bglt) BgL_ez00_2209)));
		}

	}



/* use */
	BGL_EXPORTED_DEF obj_t BGl_usez00zz__evaluate_usez00(BgL_ev_exprz00_bglt
		BgL_ez00_3, obj_t BgL_donez00_4)
	{
		{	/* Eval/evaluate_use.scm 62 */
			{	/* Eval/evaluate_use.scm 62 */
				obj_t BgL_method1133z00_1121;

				{	/* Eval/evaluate_use.scm 62 */
					obj_t BgL_res1647z00_1724;

					{	/* Eval/evaluate_use.scm 62 */
						long BgL_objzd2classzd2numz00_1689;

						{	/* Eval/evaluate_use.scm 62 */
							long BgL_res1637z00_1692;

							BgL_res1637z00_1692 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_ez00_3));
							BgL_objzd2classzd2numz00_1689 = BgL_res1637z00_1692;
						}
						{	/* Eval/evaluate_use.scm 62 */
							obj_t BgL_arg1627z00_1690;

							BgL_arg1627z00_1690 =
								PROCEDURE_REF(BGl_usezd2envzd2zz__evaluate_usez00,
								(int) (((long) 1)));
							{	/* Eval/evaluate_use.scm 62 */
								int BgL_offsetz00_1694;

								BgL_offsetz00_1694 = (int) (BgL_objzd2classzd2numz00_1689);
								{	/* Eval/evaluate_use.scm 62 */
									long BgL_offsetz00_1695;

									BgL_offsetz00_1695 =
										((long) (BgL_offsetz00_1694) - OBJECT_TYPE);
									{	/* Eval/evaluate_use.scm 62 */
										long BgL_modz00_1696;

										BgL_modz00_1696 =
											(BgL_offsetz00_1695 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Eval/evaluate_use.scm 62 */
											long BgL_restz00_1698;

											BgL_restz00_1698 =
												(BgL_offsetz00_1695 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Eval/evaluate_use.scm 62 */

												{	/* Eval/evaluate_use.scm 62 */
													obj_t BgL_bucketz00_1700;

													BgL_bucketz00_1700 =
														VECTOR_REF(
														((obj_t) BgL_arg1627z00_1690), BgL_modz00_1696);
													BgL_res1647z00_1724 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1700), BgL_restz00_1698);
					}}}}}}}}
					BgL_method1133z00_1121 = BgL_res1647z00_1724;
				}
				return
					PROCEDURE_ENTRY(BgL_method1133z00_1121) (BgL_method1133z00_1121,
					((obj_t) BgL_ez00_3), BgL_donez00_4, BEOA);
			}
		}

	}



/* &use */
	obj_t BGl_z62usez62zz__evaluate_usez00(obj_t BgL_envz00_2211,
		obj_t BgL_ez00_2212, obj_t BgL_donez00_2213)
	{
		{	/* Eval/evaluate_use.scm 62 */
			{	/* Eval/evaluate_use.scm 62 */
				BgL_ev_exprz00_bglt BgL_auxz00_2411;

				if (BGl_isazf3zf3zz__objectz00(BgL_ez00_2212,
						BGl_ev_exprz00zz__evaluate_typesz00))
					{	/* Eval/evaluate_use.scm 62 */
						BgL_auxz00_2411 = ((BgL_ev_exprz00_bglt) BgL_ez00_2212);
					}
				else
					{
						obj_t BgL_auxz00_2415;

						BgL_auxz00_2415 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1737z00zz__evaluate_usez00, BINT(((long) 1786)),
							BGl_string1738z00zz__evaluate_usez00,
							BGl_string1739z00zz__evaluate_usez00, BgL_ez00_2212);
						FAILURE(BgL_auxz00_2415, BFALSE, BFALSE);
					}
				return BGl_usez00zz__evaluate_usez00(BgL_auxz00_2411, BgL_donez00_2213);
			}
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evaluate_usez00()
	{
		{	/* Eval/evaluate_use.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_ev_varz00zz__evaluate_typesz00, BGl_proc1740z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_ev_globalz00zz__evaluate_typesz00,
				BGl_proc1742z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_ev_littz00zz__evaluate_typesz00, BGl_proc1743z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00, BGl_ev_ifz00zz__evaluate_typesz00,
				BGl_proc1744z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_ev_listz00zz__evaluate_typesz00, BGl_proc1745z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_ev_prog2z00zz__evaluate_typesz00,
				BGl_proc1746z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_ev_hookz00zz__evaluate_typesz00, BGl_proc1747z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_ev_setlocalz00zz__evaluate_typesz00,
				BGl_proc1748z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_ev_bindzd2exitzd2zz__evaluate_typesz00,
				BGl_proc1749z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_ev_unwindzd2protectzd2zz__evaluate_typesz00,
				BGl_proc1750z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_ev_withzd2handlerzd2zz__evaluate_typesz00,
				BGl_proc1751z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_ev_synchroniza7eza7zz__evaluate_typesz00,
				BGl_proc1752z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_ev_binderz00zz__evaluate_typesz00,
				BGl_proc1753z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_ev_binderz00zz__evaluate_typesz00,
				BGl_proc1754z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_ev_labelsz00zz__evaluate_typesz00,
				BGl_proc1755z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_ev_gotoz00zz__evaluate_typesz00, BGl_proc1756z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_ev_appz00zz__evaluate_typesz00, BGl_proc1757z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_usezd2envzd2zz__evaluate_usez00,
				BGl_ev_absz00zz__evaluate_typesz00, BGl_proc1758z00zz__evaluate_usez00,
				BGl_string1741z00zz__evaluate_usez00);
		}

	}



/* &use-ev_abs1169 */
	obj_t BGl_z62usezd2ev_abs1169zb0zz__evaluate_usez00(obj_t BgL_envz00_2232,
		obj_t BgL_ez00_2233, obj_t BgL_donez00_2234)
	{
		{	/* Eval/evaluate_use.scm 139 */
			return
				BGl_usez00zz__evaluate_usez00(
				(((BgL_ev_absz00_bglt) COBJECT(
							((BgL_ev_absz00_bglt) BgL_ez00_2233)))->BgL_bodyz00),
				BgL_donez00_2234);
		}

	}



/* &use-ev_app1167 */
	obj_t BGl_z62usezd2ev_app1167zb0zz__evaluate_usez00(obj_t BgL_envz00_2235,
		obj_t BgL_ez00_2236, obj_t BgL_donez00_2237)
	{
		{	/* Eval/evaluate_use.scm 135 */
			{	/* Eval/evaluate_use.scm 137 */
				BgL_ev_exprz00_bglt BgL_arg1311z00_2293;
				obj_t BgL_arg1312z00_2294;

				BgL_arg1311z00_2293 =
					(((BgL_ev_appz00_bglt) COBJECT(
							((BgL_ev_appz00_bglt) BgL_ez00_2236)))->BgL_funz00);
				{	/* Eval/evaluate_use.scm 137 */
					obj_t BgL_arg1313z00_2295;

					BgL_arg1313z00_2295 =
						(((BgL_ev_appz00_bglt) COBJECT(
								((BgL_ev_appz00_bglt) BgL_ez00_2236)))->BgL_argsz00);
					{
						obj_t BgL_lz00_2297;
						obj_t BgL_donez00_2298;

						BgL_lz00_2297 = BgL_arg1313z00_2295;
						BgL_donez00_2298 = BgL_donez00_2237;
					BgL_useza2za2_2296:
						if (NULLP(BgL_lz00_2297))
							{	/* Eval/evaluate_use.scm 65 */
								BgL_arg1312z00_2294 = BgL_donez00_2298;
							}
						else
							{	/* Eval/evaluate_use.scm 67 */
								obj_t BgL_arg1245z00_2299;
								obj_t BgL_arg1246z00_2300;

								BgL_arg1245z00_2299 = CDR(((obj_t) BgL_lz00_2297));
								{	/* Eval/evaluate_use.scm 67 */
									obj_t BgL_arg1247z00_2301;

									BgL_arg1247z00_2301 = CAR(((obj_t) BgL_lz00_2297));
									BgL_arg1246z00_2300 =
										BGl_usez00zz__evaluate_usez00(
										((BgL_ev_exprz00_bglt) BgL_arg1247z00_2301),
										BgL_donez00_2298);
								}
								{
									obj_t BgL_donez00_2454;
									obj_t BgL_lz00_2453;

									BgL_lz00_2453 = BgL_arg1245z00_2299;
									BgL_donez00_2454 = BgL_arg1246z00_2300;
									BgL_donez00_2298 = BgL_donez00_2454;
									BgL_lz00_2297 = BgL_lz00_2453;
									goto BgL_useza2za2_2296;
								}
							}
					}
				}
				return
					BGl_usez00zz__evaluate_usez00(BgL_arg1311z00_2293,
					BgL_arg1312z00_2294);
			}
		}

	}



/* &use-ev_goto1165 */
	obj_t BGl_z62usezd2ev_goto1165zb0zz__evaluate_usez00(obj_t BgL_envz00_2238,
		obj_t BgL_ez00_2239, obj_t BgL_donez00_2240)
	{
		{	/* Eval/evaluate_use.scm 131 */
			{	/* Eval/evaluate_use.scm 133 */
				obj_t BgL_arg1310z00_2303;

				BgL_arg1310z00_2303 =
					(((BgL_ev_gotoz00_bglt) COBJECT(
							((BgL_ev_gotoz00_bglt) BgL_ez00_2239)))->BgL_argsz00);
				{
					obj_t BgL_lz00_2305;
					obj_t BgL_donez00_2306;

					BgL_lz00_2305 = BgL_arg1310z00_2303;
					BgL_donez00_2306 = BgL_donez00_2240;
				BgL_useza2za2_2304:
					if (NULLP(BgL_lz00_2305))
						{	/* Eval/evaluate_use.scm 65 */
							return BgL_donez00_2306;
						}
					else
						{	/* Eval/evaluate_use.scm 67 */
							obj_t BgL_arg1245z00_2307;
							obj_t BgL_arg1246z00_2308;

							BgL_arg1245z00_2307 = CDR(((obj_t) BgL_lz00_2305));
							{	/* Eval/evaluate_use.scm 67 */
								obj_t BgL_arg1247z00_2309;

								BgL_arg1247z00_2309 = CAR(((obj_t) BgL_lz00_2305));
								BgL_arg1246z00_2308 =
									BGl_usez00zz__evaluate_usez00(
									((BgL_ev_exprz00_bglt) BgL_arg1247z00_2309),
									BgL_donez00_2306);
							}
							{
								obj_t BgL_donez00_2467;
								obj_t BgL_lz00_2466;

								BgL_lz00_2466 = BgL_arg1245z00_2307;
								BgL_donez00_2467 = BgL_arg1246z00_2308;
								BgL_donez00_2306 = BgL_donez00_2467;
								BgL_lz00_2305 = BgL_lz00_2466;
								goto BgL_useza2za2_2304;
							}
						}
				}
			}
		}

	}



/* &use-ev_labels1163 */
	obj_t BGl_z62usezd2ev_labels1163zb0zz__evaluate_usez00(obj_t BgL_envz00_2241,
		obj_t BgL_ez00_2242, obj_t BgL_donez00_2243)
	{
		{	/* Eval/evaluate_use.scm 124 */
			{	/* Eval/evaluate_use.scm 126 */
				obj_t BgL_arg1302z00_2311;

				BgL_arg1302z00_2311 =
					(((BgL_ev_labelsz00_bglt) COBJECT(
							((BgL_ev_labelsz00_bglt) BgL_ez00_2242)))->BgL_valsz00);
				{
					obj_t BgL_lz00_2313;
					obj_t BgL_donez00_2314;

					BgL_lz00_2313 = BgL_arg1302z00_2311;
					BgL_donez00_2314 = BgL_donez00_2243;
				BgL_recz00_2312:
					if (NULLP(BgL_lz00_2313))
						{	/* Eval/evaluate_use.scm 127 */
							return
								BGl_usez00zz__evaluate_usez00(
								(((BgL_ev_labelsz00_bglt) COBJECT(
											((BgL_ev_labelsz00_bglt) BgL_ez00_2242)))->BgL_bodyz00),
								BgL_donez00_2314);
						}
					else
						{	/* Eval/evaluate_use.scm 129 */
							obj_t BgL_arg1307z00_2315;
							obj_t BgL_arg1308z00_2316;

							BgL_arg1307z00_2315 = CDR(((obj_t) BgL_lz00_2313));
							{	/* Eval/evaluate_use.scm 129 */
								obj_t BgL_arg1309z00_2317;

								{	/* Eval/evaluate_use.scm 129 */
									obj_t BgL_pairz00_2318;

									BgL_pairz00_2318 = CAR(((obj_t) BgL_lz00_2313));
									BgL_arg1309z00_2317 = CDR(BgL_pairz00_2318);
								}
								BgL_arg1308z00_2316 =
									BGl_usez00zz__evaluate_usez00(
									((BgL_ev_exprz00_bglt) BgL_arg1309z00_2317),
									BgL_donez00_2314);
							}
							{
								obj_t BgL_donez00_2483;
								obj_t BgL_lz00_2482;

								BgL_lz00_2482 = BgL_arg1307z00_2315;
								BgL_donez00_2483 = BgL_arg1308z00_2316;
								BgL_donez00_2314 = BgL_donez00_2483;
								BgL_lz00_2313 = BgL_lz00_2482;
								goto BgL_recz00_2312;
							}
						}
				}
			}
		}

	}



/* &use-ev_binder1161 */
	obj_t BGl_z62usezd2ev_binder1161zb0zz__evaluate_usez00(obj_t BgL_envz00_2244,
		obj_t BgL_ez00_2245, obj_t BgL_donez00_2246)
	{
		{	/* Eval/evaluate_use.scm 120 */
			{	/* Eval/evaluate_use.scm 122 */
				BgL_ev_exprz00_bglt BgL_arg1299z00_2320;
				obj_t BgL_arg1300z00_2321;

				BgL_arg1299z00_2320 =
					(((BgL_ev_binderz00_bglt) COBJECT(
							((BgL_ev_binderz00_bglt) BgL_ez00_2245)))->BgL_bodyz00);
				{	/* Eval/evaluate_use.scm 122 */
					obj_t BgL_arg1301z00_2322;

					BgL_arg1301z00_2322 =
						(((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt) BgL_ez00_2245)))->BgL_valsz00);
					{
						obj_t BgL_lz00_2324;
						obj_t BgL_donez00_2325;

						BgL_lz00_2324 = BgL_arg1301z00_2322;
						BgL_donez00_2325 = BgL_donez00_2246;
					BgL_useza2za2_2323:
						if (NULLP(BgL_lz00_2324))
							{	/* Eval/evaluate_use.scm 65 */
								BgL_arg1300z00_2321 = BgL_donez00_2325;
							}
						else
							{	/* Eval/evaluate_use.scm 67 */
								obj_t BgL_arg1245z00_2326;
								obj_t BgL_arg1246z00_2327;

								BgL_arg1245z00_2326 = CDR(((obj_t) BgL_lz00_2324));
								{	/* Eval/evaluate_use.scm 67 */
									obj_t BgL_arg1247z00_2328;

									BgL_arg1247z00_2328 = CAR(((obj_t) BgL_lz00_2324));
									BgL_arg1246z00_2327 =
										BGl_usez00zz__evaluate_usez00(
										((BgL_ev_exprz00_bglt) BgL_arg1247z00_2328),
										BgL_donez00_2325);
								}
								{
									obj_t BgL_donez00_2497;
									obj_t BgL_lz00_2496;

									BgL_lz00_2496 = BgL_arg1245z00_2326;
									BgL_donez00_2497 = BgL_arg1246z00_2327;
									BgL_donez00_2325 = BgL_donez00_2497;
									BgL_lz00_2324 = BgL_lz00_2496;
									goto BgL_useza2za2_2323;
								}
							}
					}
				}
				return
					BGl_usez00zz__evaluate_usez00(BgL_arg1299z00_2320,
					BgL_arg1300z00_2321);
			}
		}

	}



/* &use-ev_binder1159 */
	obj_t BGl_z62usezd2ev_binder1159zb0zz__evaluate_usez00(obj_t BgL_envz00_2247,
		obj_t BgL_ez00_2248, obj_t BgL_donez00_2249)
	{
		{	/* Eval/evaluate_use.scm 116 */
			{	/* Eval/evaluate_use.scm 118 */
				BgL_ev_exprz00_bglt BgL_arg1296z00_2330;
				obj_t BgL_arg1297z00_2331;

				BgL_arg1296z00_2330 =
					(((BgL_ev_binderz00_bglt) COBJECT(
							((BgL_ev_binderz00_bglt) BgL_ez00_2248)))->BgL_bodyz00);
				{	/* Eval/evaluate_use.scm 118 */
					obj_t BgL_arg1298z00_2332;

					BgL_arg1298z00_2332 =
						(((BgL_ev_binderz00_bglt) COBJECT(
								((BgL_ev_binderz00_bglt) BgL_ez00_2248)))->BgL_valsz00);
					{
						obj_t BgL_lz00_2334;
						obj_t BgL_donez00_2335;

						BgL_lz00_2334 = BgL_arg1298z00_2332;
						BgL_donez00_2335 = BgL_donez00_2249;
					BgL_useza2za2_2333:
						if (NULLP(BgL_lz00_2334))
							{	/* Eval/evaluate_use.scm 65 */
								BgL_arg1297z00_2331 = BgL_donez00_2335;
							}
						else
							{	/* Eval/evaluate_use.scm 67 */
								obj_t BgL_arg1245z00_2336;
								obj_t BgL_arg1246z00_2337;

								BgL_arg1245z00_2336 = CDR(((obj_t) BgL_lz00_2334));
								{	/* Eval/evaluate_use.scm 67 */
									obj_t BgL_arg1247z00_2338;

									BgL_arg1247z00_2338 = CAR(((obj_t) BgL_lz00_2334));
									BgL_arg1246z00_2337 =
										BGl_usez00zz__evaluate_usez00(
										((BgL_ev_exprz00_bglt) BgL_arg1247z00_2338),
										BgL_donez00_2335);
								}
								{
									obj_t BgL_donez00_2512;
									obj_t BgL_lz00_2511;

									BgL_lz00_2511 = BgL_arg1245z00_2336;
									BgL_donez00_2512 = BgL_arg1246z00_2337;
									BgL_donez00_2335 = BgL_donez00_2512;
									BgL_lz00_2334 = BgL_lz00_2511;
									goto BgL_useza2za2_2333;
								}
							}
					}
				}
				return
					BGl_usez00zz__evaluate_usez00(BgL_arg1296z00_2330,
					BgL_arg1297z00_2331);
			}
		}

	}



/* &use-ev_synchronize1157 */
	obj_t BGl_z62usezd2ev_synchroniza7e1157z17zz__evaluate_usez00(obj_t
		BgL_envz00_2250, obj_t BgL_ez00_2251, obj_t BgL_donez00_2252)
	{
		{	/* Eval/evaluate_use.scm 112 */
			return
				BGl_usez00zz__evaluate_usez00(
				(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
							((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_2251)))->BgL_mutexz00),
				BGl_usez00zz__evaluate_usez00(
					(((BgL_ev_synchroniza7eza7_bglt) COBJECT(
								((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_2251)))->
						BgL_prelockz00),
					BGl_usez00zz__evaluate_usez00((((BgL_ev_synchroniza7eza7_bglt)
								COBJECT(((BgL_ev_synchroniza7eza7_bglt) BgL_ez00_2251)))->
							BgL_bodyz00), BgL_donez00_2252)));
		}

	}



/* &use-ev_with-handler1155 */
	obj_t BGl_z62usezd2ev_withzd2handler1155z62zz__evaluate_usez00(obj_t
		BgL_envz00_2253, obj_t BgL_ez00_2254, obj_t BgL_donez00_2255)
	{
		{	/* Eval/evaluate_use.scm 108 */
			return
				BGl_usez00zz__evaluate_usez00(
				(((BgL_ev_withzd2handlerzd2_bglt) COBJECT(
							((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_2254)))->
					BgL_handlerz00),
				BGl_usez00zz__evaluate_usez00((((BgL_ev_withzd2handlerzd2_bglt)
							COBJECT(((BgL_ev_withzd2handlerzd2_bglt) BgL_ez00_2254)))->
						BgL_bodyz00), BgL_donez00_2255));
		}

	}



/* &use-ev_unwind-protec1153 */
	obj_t BGl_z62usezd2ev_unwindzd2protec1153z62zz__evaluate_usez00(obj_t
		BgL_envz00_2256, obj_t BgL_ez00_2257, obj_t BgL_donez00_2258)
	{
		{	/* Eval/evaluate_use.scm 104 */
			return
				BGl_usez00zz__evaluate_usez00(
				(((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
							((BgL_ev_unwindzd2protectzd2_bglt) BgL_ez00_2257)))->BgL_ez00),
				BGl_usez00zz__evaluate_usez00(
					(((BgL_ev_unwindzd2protectzd2_bglt) COBJECT(
								((BgL_ev_unwindzd2protectzd2_bglt) BgL_ez00_2257)))->
						BgL_bodyz00), BgL_donez00_2258));
		}

	}



/* &use-ev_bind-exit1151 */
	obj_t BGl_z62usezd2ev_bindzd2exit1151z62zz__evaluate_usez00(obj_t
		BgL_envz00_2259, obj_t BgL_ez00_2260, obj_t BgL_donez00_2261)
	{
		{	/* Eval/evaluate_use.scm 100 */
			return
				BGl_usez00zz__evaluate_usez00(
				(((BgL_ev_bindzd2exitzd2_bglt) COBJECT(
							((BgL_ev_bindzd2exitzd2_bglt) BgL_ez00_2260)))->BgL_bodyz00),
				BgL_donez00_2261);
		}

	}



/* &use-ev_setlocal1149 */
	obj_t BGl_z62usezd2ev_setlocal1149zb0zz__evaluate_usez00(obj_t
		BgL_envz00_2262, obj_t BgL_ez00_2263, obj_t BgL_donez00_2264)
	{
		{	/* Eval/evaluate_use.scm 95 */
			{	/* Eval/evaluate_use.scm 96 */
				obj_t BgL_donez00_2344;

				BgL_donez00_2344 = BgL_donez00_2264;
				{	/* Eval/evaluate_use.scm 97 */
					bool_t BgL_test1794z00_2538;

					{	/* Eval/evaluate_use.scm 97 */
						BgL_ev_varz00_bglt BgL_arg1277z00_2345;

						BgL_arg1277z00_2345 =
							(((BgL_ev_setlocalz00_bglt) COBJECT(
									((BgL_ev_setlocalz00_bglt) BgL_ez00_2263)))->BgL_vz00);
						BgL_test1794z00_2538 =
							CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
								((obj_t) BgL_arg1277z00_2345), BgL_donez00_2344));
					}
					if (BgL_test1794z00_2538)
						{	/* Eval/evaluate_use.scm 97 */
							BFALSE;
						}
					else
						{	/* Eval/evaluate_use.scm 97 */
							BgL_ev_varz00_bglt BgL_arg1276z00_2346;

							BgL_arg1276z00_2346 =
								(((BgL_ev_setlocalz00_bglt) COBJECT(
										((BgL_ev_setlocalz00_bglt) BgL_ez00_2263)))->BgL_vz00);
							BgL_donez00_2344 =
								MAKE_YOUNG_PAIR(
								((obj_t) BgL_arg1276z00_2346), BgL_donez00_2344);
						}
				}
				{	/* Eval/evaluate_use.scm 98 */
					BgL_ev_exprz00_bglt BgL_arg1280z00_2347;

					BgL_arg1280z00_2347 =
						(((BgL_ev_hookz00_bglt) COBJECT(
								((BgL_ev_hookz00_bglt)
									((BgL_ev_setlocalz00_bglt) BgL_ez00_2263))))->BgL_ez00);
					return
						BGl_usez00zz__evaluate_usez00(BgL_arg1280z00_2347,
						BgL_donez00_2344);
				}
			}
		}

	}



/* &use-ev_hook1147 */
	obj_t BGl_z62usezd2ev_hook1147zb0zz__evaluate_usez00(obj_t BgL_envz00_2265,
		obj_t BgL_ez00_2266, obj_t BgL_donez00_2267)
	{
		{	/* Eval/evaluate_use.scm 91 */
			return
				BGl_usez00zz__evaluate_usez00(
				(((BgL_ev_hookz00_bglt) COBJECT(
							((BgL_ev_hookz00_bglt) BgL_ez00_2266)))->BgL_ez00),
				BgL_donez00_2267);
		}

	}



/* &use-ev_prog21145 */
	obj_t BGl_z62usezd2ev_prog21145zb0zz__evaluate_usez00(obj_t BgL_envz00_2268,
		obj_t BgL_ez00_2269, obj_t BgL_donez00_2270)
	{
		{	/* Eval/evaluate_use.scm 87 */
			return
				BGl_usez00zz__evaluate_usez00(
				(((BgL_ev_prog2z00_bglt) COBJECT(
							((BgL_ev_prog2z00_bglt) BgL_ez00_2269)))->BgL_e1z00),
				BGl_usez00zz__evaluate_usez00(
					(((BgL_ev_prog2z00_bglt) COBJECT(
								((BgL_ev_prog2z00_bglt) BgL_ez00_2269)))->BgL_e2z00),
					BgL_donez00_2270));
		}

	}



/* &use-ev_list1143 */
	obj_t BGl_z62usezd2ev_list1143zb0zz__evaluate_usez00(obj_t BgL_envz00_2271,
		obj_t BgL_ez00_2272, obj_t BgL_donez00_2273)
	{
		{	/* Eval/evaluate_use.scm 83 */
			{	/* Eval/evaluate_use.scm 85 */
				obj_t BgL_arg1263z00_2351;

				BgL_arg1263z00_2351 =
					(((BgL_ev_listz00_bglt) COBJECT(
							((BgL_ev_listz00_bglt) BgL_ez00_2272)))->BgL_argsz00);
				{
					obj_t BgL_lz00_2353;
					obj_t BgL_donez00_2354;

					BgL_lz00_2353 = BgL_arg1263z00_2351;
					BgL_donez00_2354 = BgL_donez00_2273;
				BgL_useza2za2_2352:
					if (NULLP(BgL_lz00_2353))
						{	/* Eval/evaluate_use.scm 65 */
							return BgL_donez00_2354;
						}
					else
						{	/* Eval/evaluate_use.scm 67 */
							obj_t BgL_arg1245z00_2355;
							obj_t BgL_arg1246z00_2356;

							BgL_arg1245z00_2355 = CDR(((obj_t) BgL_lz00_2353));
							{	/* Eval/evaluate_use.scm 67 */
								obj_t BgL_arg1247z00_2357;

								BgL_arg1247z00_2357 = CAR(((obj_t) BgL_lz00_2353));
								BgL_arg1246z00_2356 =
									BGl_usez00zz__evaluate_usez00(
									((BgL_ev_exprz00_bglt) BgL_arg1247z00_2357),
									BgL_donez00_2354);
							}
							{
								obj_t BgL_donez00_2572;
								obj_t BgL_lz00_2571;

								BgL_lz00_2571 = BgL_arg1245z00_2355;
								BgL_donez00_2572 = BgL_arg1246z00_2356;
								BgL_donez00_2354 = BgL_donez00_2572;
								BgL_lz00_2353 = BgL_lz00_2571;
								goto BgL_useza2za2_2352;
							}
						}
				}
			}
		}

	}



/* &use-ev_if1141 */
	obj_t BGl_z62usezd2ev_if1141zb0zz__evaluate_usez00(obj_t BgL_envz00_2274,
		obj_t BgL_ez00_2275, obj_t BgL_donez00_2276)
	{
		{	/* Eval/evaluate_use.scm 79 */
			return
				BGl_usez00zz__evaluate_usez00(
				(((BgL_ev_ifz00_bglt) COBJECT(
							((BgL_ev_ifz00_bglt) BgL_ez00_2275)))->BgL_pz00),
				BGl_usez00zz__evaluate_usez00(
					(((BgL_ev_ifz00_bglt) COBJECT(
								((BgL_ev_ifz00_bglt) BgL_ez00_2275)))->BgL_tz00),
					BGl_usez00zz__evaluate_usez00(
						(((BgL_ev_ifz00_bglt) COBJECT(
									((BgL_ev_ifz00_bglt) BgL_ez00_2275)))->BgL_ez00),
						BgL_donez00_2276)));
		}

	}



/* &use-ev_litt1139 */
	obj_t BGl_z62usezd2ev_litt1139zb0zz__evaluate_usez00(obj_t BgL_envz00_2277,
		obj_t BgL_ez00_2278, obj_t BgL_donez00_2279)
	{
		{	/* Eval/evaluate_use.scm 76 */
			return BgL_donez00_2279;
		}

	}



/* &use-ev_global1137 */
	obj_t BGl_z62usezd2ev_global1137zb0zz__evaluate_usez00(obj_t BgL_envz00_2280,
		obj_t BgL_varz00_2281, obj_t BgL_donez00_2282)
	{
		{	/* Eval/evaluate_use.scm 73 */
			return BgL_donez00_2282;
		}

	}



/* &use-ev_var1135 */
	obj_t BGl_z62usezd2ev_var1135zb0zz__evaluate_usez00(obj_t BgL_envz00_2283,
		obj_t BgL_varz00_2284, obj_t BgL_donez00_2285)
	{
		{	/* Eval/evaluate_use.scm 69 */
			{	/* Eval/evaluate_use.scm 70 */
				obj_t BgL_donez00_2362;

				BgL_donez00_2362 = BgL_donez00_2285;
				if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
							((obj_t)
								((BgL_ev_varz00_bglt) BgL_varz00_2284)), BgL_donez00_2362)))
					{	/* Eval/evaluate_use.scm 70 */
						BFALSE;
					}
				else
					{	/* Eval/evaluate_use.scm 70 */
						BgL_donez00_2362 =
							MAKE_YOUNG_PAIR(
							((obj_t)
								((BgL_ev_varz00_bglt) BgL_varz00_2284)), BgL_donez00_2362);
					}
				return BgL_donez00_2362;
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evaluate_usez00()
	{
		{	/* Eval/evaluate_use.scm 15 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 121046386),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 251315035),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 443936798),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 439352636),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					228151379), BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__ppz00(((long) 233942106),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 220647683),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 528345319),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__evcompilez00(((long) 492753248),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__everrorz00(((long) 375872251),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			BGl_modulezd2initializa7ationz75zz__evmodulez00(((long) 505900559),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
			return BGl_modulezd2initializa7ationz75zz__evaluate_typesz00(((long) 0),
				BSTRING_TO_STRING(BGl_string1759z00zz__evaluate_usez00));
		}

	}

#ifdef __cplusplus
}
#endif
