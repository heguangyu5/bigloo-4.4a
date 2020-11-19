/*===========================================================================*/
/*   (Inline/recursion.scm)                                                  */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Inline/recursion.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_typez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_siza7eza7;
		obj_t BgL_classz00;
		obj_t BgL_coercezd2tozd2;
		obj_t BgL_parentsz00;
		bool_t BgL_initzf3zf3;
		bool_t BgL_magiczf3zf3;
		obj_t BgL_z42z42;
		obj_t BgL_aliasz00;
		obj_t BgL_pointedzd2tozd2byz00;
		obj_t BgL_tvectorz00;
		obj_t BgL_locationz00;
		obj_t BgL_importzd2locationzd2;
		int BgL_occurrencez00;
	}              *BgL_typez00_bglt;

	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

	typedef struct BgL_variablez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
	}                  *BgL_variablez00_bglt;

	typedef struct BgL_globalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
		obj_t BgL_modulez00;
		obj_t BgL_importz00;
		bool_t BgL_evaluablezf3zf3;
		bool_t BgL_evalzf3zf3;
		obj_t BgL_libraryz00;
		obj_t BgL_pragmaz00;
		obj_t BgL_srcz00;
		obj_t BgL_jvmzd2typezd2namez00;
		obj_t BgL_initz00;
		obj_t BgL_aliasz00;
	}                *BgL_globalz00_bglt;

	typedef struct BgL_localz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
		long BgL_keyz00;
	}               *BgL_localz00_bglt;

	typedef struct BgL_funz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_failsafez00;
		obj_t BgL_argszd2noescapezd2;
	}             *BgL_funz00_bglt;

	typedef struct BgL_sfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_failsafez00;
		obj_t BgL_argszd2noescapezd2;
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
		obj_t BgL_strengthz00;
		obj_t BgL_stackablez00;
	}              *BgL_sfunz00_bglt;

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_sequencez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_nodesz00;
		bool_t BgL_unsafez00;
		obj_t BgL_metaz00;
	}                  *BgL_sequencez00_bglt;

	typedef struct BgL_appz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_stackablez00;
	}             *BgL_appz00_bglt;

	typedef struct BgL_appzd2lyzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}                  *BgL_appzd2lyzd2_bglt;

	typedef struct BgL_funcallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_strengthz00;
		obj_t BgL_functionsz00;
	}                 *BgL_funcallz00_bglt;

	typedef struct BgL_externz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
	}                *BgL_externz00_bglt;

	typedef struct BgL_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}              *BgL_castz00_bglt;

	typedef struct BgL_setqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}              *BgL_setqz00_bglt;

	typedef struct BgL_conditionalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_testz00;
		struct BgL_nodez00_bgl *BgL_truez00;
		struct BgL_nodez00_bgl *BgL_falsez00;
	}                     *BgL_conditionalz00_bglt;

	typedef struct BgL_failz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_procz00;
		struct BgL_nodez00_bgl *BgL_msgz00;
		struct BgL_nodez00_bgl *BgL_objz00;
	}              *BgL_failz00_bglt;

	typedef struct BgL_switchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_testz00;
		obj_t BgL_clausesz00;
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}                *BgL_switchz00_bglt;

	typedef struct BgL_letzd2funzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_localsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                   *BgL_letzd2funzd2_bglt;

	typedef struct BgL_letzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_bindingsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
		bool_t BgL_removablezf3zf3;
	}                   *BgL_letzd2varzd2_bglt;

	typedef struct BgL_setzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                       *BgL_setzd2exzd2itz00_bglt;

	typedef struct BgL_jumpzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_exitz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                        *BgL_jumpzd2exzd2itz00_bglt;

	typedef struct BgL_makezd2boxzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		obj_t BgL_stackablez00;
	}                    *BgL_makezd2boxzd2_bglt;

	typedef struct BgL_boxzd2refzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                   *BgL_boxzd2refzd2_bglt;

	typedef struct BgL_boxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                      *BgL_boxzd2setz12zc0_bglt;

	typedef struct BgL_syncz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_mutexz00;
		struct BgL_nodez00_bgl *BgL_prelockz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}              *BgL_syncz00_bglt;

	typedef struct BgL_isfunz00_bgl
	{
		struct BgL_nodez00_bgl *BgL_originalzd2bodyzd2;
		obj_t BgL_recursivezd2callszd2;
		bool_t BgL_tailrecz00;
	}               *BgL_isfunz00_bglt;


	BGL_EXPORTED_DECL bool_t
		BGl_iszd2recursivezf3z21zzinline_recursionz00(BgL_variablez00_bglt);
	extern obj_t BGl_nodezd2csez12zc0zzreduce_csez00(BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzinline_recursionz00();
	extern BgL_nodez00_bglt
		BGl_nestzd2loopz12zc0zzinline_loopz00(BgL_nodez00_bglt, BgL_localz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62findzd2recursivezd2callsz62zzinline_recursionz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzinline_recursionz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzinline_recursionz00();
	static obj_t
		BGl_findzd2recursivezd2callsz00zzinline_recursionz00(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_svarz00zzast_varz00;
	extern BgL_appz00_bglt
		BGl_removezd2invariantzd2argsz12z12zzinline_variantz00(BgL_appz00_bglt);
	extern obj_t BGl_za2verboseza2z00zzengine_paramz00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t
		BGl_z62findzd2recursivezd2calls1296z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62iszd2recursivezf3z43zzinline_recursionz00(obj_t, obj_t);
	static obj_t
		BGl_z62findzd2recursivezd2calls1299z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzinline_recursionz00();
	extern obj_t BGl_currentzd2functionzd2zztools_errorz00();
	static obj_t BGl_unrollzd2callzd2zzinline_recursionz00(BgL_variablez00_bglt,
		BgL_nodez00_bglt, BgL_localz00_bglt, obj_t, BgL_appz00_bglt, obj_t);
	static bool_t BGl_tailreczf3zf3zzinline_recursionz00(BgL_variablez00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62zc3z04anonymousza31583ze3ze5zzinline_recursionz00(obj_t,
		obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_invariantzd2argszd2zzinline_variantz00(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_za2optimzd2unrollzd2loopzf3za2zf3zzengine_paramz00;
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzinline_recursionz00 = BUNSPEC;
	extern obj_t BGl_inlinezd2sfunz12zc0zzinline_inlinez00(BgL_variablez00_bglt,
		long, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern BgL_nodez00_bglt BGl_alphatiza7eza7zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t, BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_innerzd2loopzf3z21zzinline_loopz00(BgL_variablez00_bglt);
	static obj_t BGl_toplevelzd2initzd2zzinline_recursionz00();
	extern bool_t BGl_iszd2loopzf3z21zzinline_loopz00(BgL_variablez00_bglt);
	static obj_t BGl_genericzd2initzd2zzinline_recursionz00();
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern BgL_localz00_bglt BGl_clonezd2localzd2zzast_localz00(BgL_localz00_bglt,
		BgL_valuez00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern BgL_localz00_bglt BGl_makezd2localzd2sfunz00zzast_localz00(obj_t,
		BgL_typez00_bglt, BgL_sfunz00_bglt);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern bool_t BGl_inlinezd2appzf3z21zzinline_appz00(BgL_variablez00_bglt,
		long, long, obj_t);
	static obj_t
		BGl_z62findzd2recursivezd2calls1301z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62findzd2recursivezd2calls1303z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62findzd2recursivezd2calls1305z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62findzd2recursivezd2calls1307z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62findzd2recursivezd2calls1309z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern BgL_nodez00_bglt
		BGl_alphatiza7ezd2sanszd2closureza7zzast_alphatiza7eza7(obj_t, obj_t, obj_t,
		BgL_nodez00_bglt, BgL_variablez00_bglt);
	static obj_t
		BGl_z62findzd2recursivezd2calls1311z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62findzd2recursivezd2calls1313z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62findzd2recursivezd2calls1315z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62findzd2recursivezd2calls1317z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62findzd2recursivezd2calls1319z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t
		BGl_z62findzd2recursivezd2calls1321z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62findzd2recursivezd2calls1323z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62findzd2recursivezd2calls1325z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62findzd2recursivezd2calls1327z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62findzd2recursivezd2calls1329z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern BgL_nodez00_bglt
		BGl_inlinezd2appzd2simplez00zzinline_simplez00(BgL_nodez00_bglt, long,
		obj_t, obj_t);
	static obj_t
		BGl_z62findzd2recursivezd2calls1331z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_isfunz00zzinline_inlinez00;
	static obj_t
		BGl_z62findzd2recursivezd2calls1333z62zzinline_recursionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_variantzd2argszd2zzinline_variantz00(BgL_variablez00_bglt);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzinline_recursionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_csez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_loopz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_variantz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_simplez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_shrinkzd2argsz12zc0zzinline_variantz00(BgL_variablez00_bglt);
	static obj_t BGl_findzd2recursivezd2callsza2za2zzinline_recursionz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_inlinezd2appzd2labelsz00zzinline_recursionz00(BgL_nodez00_bglt, long,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzinline_recursionz00();
	static BgL_nodez00_bglt
		BGl_z62inlinezd2appzd2recursivez62zzinline_recursionz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzinline_recursionz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzinline_recursionz00();
	static BgL_letzd2funzd2_bglt
		BGl_plainzd2callzd2zzinline_recursionz00(BgL_variablez00_bglt,
		BgL_nodez00_bglt, BgL_localz00_bglt, BgL_appz00_bglt, obj_t);
	extern obj_t BGl_substitutionsz00zzinline_variantz00(BgL_variablez00_bglt,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_inlinezd2appzd2recursivez00zzinline_recursionz00(BgL_nodez00_bglt, long,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1987z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2013z00,
		BGl_z62findzd2recursivezd2calls1296z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1989z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2014z00,
		BGl_z62findzd2recursivezd2calls1299z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1991z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2015z00,
		BGl_z62findzd2recursivezd2calls1301z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1992z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2016z00,
		BGl_z62findzd2recursivezd2calls1303z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1993z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2017z00,
		BGl_z62findzd2recursivezd2calls1305z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1994z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2018z00,
		BGl_z62findzd2recursivezd2calls1307z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1995z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2019z00,
		BGl_z62findzd2recursivezd2calls1309z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1996z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2020z00,
		BGl_z62findzd2recursivezd2calls1311z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1997z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2021z00,
		BGl_z62findzd2recursivezd2calls1313z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1998z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2022z00,
		BGl_z62findzd2recursivezd2calls1315z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1999z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2023z00,
		BGl_z62findzd2recursivezd2calls1317z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STRING(BGl_string2008z00zzinline_recursionz00,
		BgL_bgl_string2008za700za7za7i2024za7, "inline_recursion", 16);
	      DEFINE_STRING(BGl_string2009z00zzinline_recursionz00,
		BgL_bgl_string2009za700za7za7i2025za7, "(sifun sgfun) sfun ", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2appzd2recursivezd2envzd2zzinline_recursionz00,
		BgL_bgl_za762inlineza7d2appza72026za7,
		BGl_z62inlinezd2appzd2recursivez62zzinline_recursionz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_iszd2recursivezf3zd2envzf3zzinline_recursionz00,
		BgL_bgl_za762isza7d2recursiv2027z00,
		BGl_z62iszd2recursivezf3z43zzinline_recursionz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2028z00,
		BGl_z62findzd2recursivezd2callsz62zzinline_recursionz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string1982z00zzinline_recursionz00,
		BgL_bgl_string1982za700za7za7i2029za7, "simple", 6);
	      DEFINE_STRING(BGl_string1983z00zzinline_recursionz00,
		BgL_bgl_string1983za700za7za7i2030za7, " (recursive)", 12);
	      DEFINE_STRING(BGl_string1984z00zzinline_recursionz00,
		BgL_bgl_string1984za700za7za7i2031za7, " --> ", 5);
	      DEFINE_STRING(BGl_string1985z00zzinline_recursionz00,
		BgL_bgl_string1985za700za7za7i2032za7, "         ", 9);
	      DEFINE_STRING(BGl_string1986z00zzinline_recursionz00,
		BgL_bgl_string1986za700za7za7i2033za7, "unrolling", 9);
	      DEFINE_STRING(BGl_string1988z00zzinline_recursionz00,
		BgL_bgl_string1988za700za7za7i2034za7, "find-recursive-calls1296", 24);
	      DEFINE_STRING(BGl_string1990z00zzinline_recursionz00,
		BgL_bgl_string1990za700za7za7i2035za7, "find-recursive-calls", 20);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2000z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2036z00,
		BGl_z62findzd2recursivezd2calls1319z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2001z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2037z00,
		BGl_z62findzd2recursivezd2calls1321z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2002z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2038z00,
		BGl_z62findzd2recursivezd2calls1323z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2003z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2039z00,
		BGl_z62findzd2recursivezd2calls1325z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2004z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2040z00,
		BGl_z62findzd2recursivezd2calls1327z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2005z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2041z00,
		BGl_z62findzd2recursivezd2calls1329z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2006z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2042z00,
		BGl_z62findzd2recursivezd2calls1331z62zzinline_recursionz00, 0L, BUNSPEC,
		4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2007z00zzinline_recursionz00,
		BgL_bgl_za762findza7d2recurs2043z00,
		BGl_z62findzd2recursivezd2calls1333z62zzinline_recursionz00, 0L, BUNSPEC,
		4);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzinline_recursionz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzinline_recursionz00(long
		BgL_checksumz00_2682, char *BgL_fromz00_2683)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinline_recursionz00))
				{
					BGl_requirezd2initializa7ationz75zzinline_recursionz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzinline_recursionz00();
					BGl_libraryzd2moduleszd2initz00zzinline_recursionz00();
					BGl_cnstzd2initzd2zzinline_recursionz00();
					BGl_importedzd2moduleszd2initz00zzinline_recursionz00();
					BGl_genericzd2initzd2zzinline_recursionz00();
					BGl_methodzd2initzd2zzinline_recursionz00();
					return BGl_toplevelzd2initzd2zzinline_recursionz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinline_recursionz00()
	{
		{	/* Inline/recursion.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"inline_recursion");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"inline_recursion");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"inline_recursion");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"inline_recursion");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"inline_recursion");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"inline_recursion");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"inline_recursion");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0),
				"inline_recursion");
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long) 0),
				"inline_recursion");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"inline_recursion");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"inline_recursion");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinline_recursionz00()
	{
		{	/* Inline/recursion.scm 15 */
			{	/* Inline/recursion.scm 15 */
				obj_t BgL_cportz00_2564;

				{	/* Inline/recursion.scm 15 */
					obj_t BgL_stringz00_2572;

					BgL_stringz00_2572 = BGl_string2009z00zzinline_recursionz00;
					{	/* Inline/recursion.scm 15 */
						obj_t BgL_startz00_2573;

						BgL_startz00_2573 = BINT(((long) 0));
						{	/* Inline/recursion.scm 15 */
							obj_t BgL_endz00_2574;

							BgL_endz00_2574 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2572)));
							{	/* Inline/recursion.scm 15 */

								BgL_cportz00_2564 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2572, BgL_startz00_2573, BgL_endz00_2574);
				}}}}
				{
					long BgL_iz00_2565;

					BgL_iz00_2565 = ((long) 1);
				BgL_loopz00_2566:
					if ((BgL_iz00_2565 == ((long) -1)))
						{	/* Inline/recursion.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Inline/recursion.scm 15 */
							{	/* Inline/recursion.scm 15 */
								obj_t BgL_arg2011z00_2568;

								{	/* Inline/recursion.scm 15 */

									{	/* Inline/recursion.scm 15 */
										obj_t BgL_locationz00_2570;

										BgL_locationz00_2570 = BBOOL(((bool_t) 0));
										{	/* Inline/recursion.scm 15 */

											BgL_arg2011z00_2568 =
												BGl_readz00zz__readerz00(BgL_cportz00_2564,
												BgL_locationz00_2570);
										}
									}
								}
								{	/* Inline/recursion.scm 15 */
									int BgL_tmpz00_2714;

									BgL_tmpz00_2714 = (int) (BgL_iz00_2565);
									CNST_TABLE_SET(BgL_tmpz00_2714, BgL_arg2011z00_2568);
							}}
							{	/* Inline/recursion.scm 15 */
								int BgL_auxz00_2571;

								BgL_auxz00_2571 = (int) ((BgL_iz00_2565 - ((long) 1)));
								{
									long BgL_iz00_2719;

									BgL_iz00_2719 = (long) (BgL_auxz00_2571);
									BgL_iz00_2565 = BgL_iz00_2719;
									goto BgL_loopz00_2566;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzinline_recursionz00()
	{
		{	/* Inline/recursion.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzinline_recursionz00()
	{
		{	/* Inline/recursion.scm 15 */
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzinline_recursionz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1548;

				BgL_headz00_1548 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1549;
					obj_t BgL_tailz00_1550;

					BgL_prevz00_1549 = BgL_headz00_1548;
					BgL_tailz00_1550 = BgL_l1z00_1;
				BgL_loopz00_1551:
					if (PAIRP(BgL_tailz00_1550))
						{
							obj_t BgL_newzd2prevzd2_1553;

							BgL_newzd2prevzd2_1553 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1550), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1549, BgL_newzd2prevzd2_1553);
							{
								obj_t BgL_tailz00_2729;
								obj_t BgL_prevz00_2728;

								BgL_prevz00_2728 = BgL_newzd2prevzd2_1553;
								BgL_tailz00_2729 = CDR(BgL_tailz00_1550);
								BgL_tailz00_1550 = BgL_tailz00_2729;
								BgL_prevz00_1549 = BgL_prevz00_2728;
								goto BgL_loopz00_1551;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1548);
				}
			}
		}

	}



/* inline-app-recursive */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_inlinezd2appzd2recursivez00zzinline_recursionz00(BgL_nodez00_bglt
		BgL_nodez00_3, long BgL_kfactorz00_4, obj_t BgL_stackz00_5)
	{
		{	/* Inline/recursion.scm 41 */
			{	/* Inline/recursion.scm 42 */
				BgL_varz00_bglt BgL_funz00_1556;

				BgL_funz00_1556 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_3)))->BgL_funz00);
				{	/* Inline/recursion.scm 42 */
					BgL_variablez00_bglt BgL_calleez00_1557;

					BgL_calleez00_1557 =
						(((BgL_varz00_bglt) COBJECT(BgL_funz00_1556))->BgL_variablez00);
					{	/* Inline/recursion.scm 43 */

						if (BGl_tailreczf3zf3zzinline_recursionz00(BgL_calleez00_1557))
							{	/* Inline/recursion.scm 45 */
								if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
											((obj_t) BgL_calleez00_1557), BgL_stackz00_5)))
									{	/* Inline/recursion.scm 47 */
										return
											BGl_inlinezd2appzd2simplez00zzinline_simplez00
											(BgL_nodez00_3, BgL_kfactorz00_4, BgL_stackz00_5,
											BGl_string1982z00zzinline_recursionz00);
									}
								else
									{	/* Inline/recursion.scm 47 */
										return
											((BgL_nodez00_bglt)
											BGl_inlinezd2appzd2labelsz00zzinline_recursionz00
											(BgL_nodez00_3, BgL_kfactorz00_4, BgL_stackz00_5));
									}
							}
						else
							{	/* Inline/recursion.scm 45 */
								return BgL_nodez00_3;
							}
					}
				}
			}
		}

	}



/* &inline-app-recursive */
	BgL_nodez00_bglt BGl_z62inlinezd2appzd2recursivez62zzinline_recursionz00(obj_t
		BgL_envz00_2435, obj_t BgL_nodez00_2436, obj_t BgL_kfactorz00_2437,
		obj_t BgL_stackz00_2438)
	{
		{	/* Inline/recursion.scm 41 */
			return
				BGl_inlinezd2appzd2recursivez00zzinline_recursionz00(
				((BgL_nodez00_bglt) BgL_nodez00_2436),
				(long) CINT(BgL_kfactorz00_2437), BgL_stackz00_2438);
		}

	}



/* tailrec? */
	bool_t BGl_tailreczf3zf3zzinline_recursionz00(BgL_variablez00_bglt
		BgL_varz00_6)
	{
		{	/* Inline/recursion.scm 62 */
			{	/* Inline/recursion.scm 63 */
				bool_t BgL_test2049z00_2747;

				{	/* Inline/recursion.scm 63 */
					BgL_valuez00_bglt BgL_arg1351z00_1563;

					BgL_arg1351z00_1563 =
						(((BgL_variablez00_bglt) COBJECT(BgL_varz00_6))->BgL_valuez00);
					{	/* Inline/recursion.scm 63 */
						bool_t BgL_res1922z00_2193;

						BgL_res1922z00_2193 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_arg1351z00_1563), BGl_isfunz00zzinline_inlinez00);
						BgL_test2049z00_2747 = BgL_res1922z00_2193;
				}}
				if (BgL_test2049z00_2747)
					{	/* Inline/recursion.scm 64 */
						BgL_sfunz00_bglt BgL_i1107z00_1562;

						BgL_i1107z00_1562 =
							((BgL_sfunz00_bglt)
							(((BgL_variablez00_bglt) COBJECT(BgL_varz00_6))->BgL_valuez00));
						{
							BgL_isfunz00_bglt BgL_auxz00_2753;

							{
								obj_t BgL_auxz00_2754;

								{	/* Inline/recursion.scm 64 */
									BgL_objectz00_bglt BgL_tmpz00_2755;

									BgL_tmpz00_2755 = ((BgL_objectz00_bglt) BgL_i1107z00_1562);
									BgL_auxz00_2754 = BGL_OBJECT_WIDENING(BgL_tmpz00_2755);
								}
								BgL_auxz00_2753 = ((BgL_isfunz00_bglt) BgL_auxz00_2754);
							}
							return
								(((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_2753))->
								BgL_tailrecz00);
						}
					}
				else
					{	/* Inline/recursion.scm 63 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* inline-app-labels */
	obj_t BGl_inlinezd2appzd2labelsz00zzinline_recursionz00(BgL_nodez00_bglt
		BgL_nodez00_7, long BgL_kfactorz00_8, obj_t BgL_stackz00_9)
	{
		{	/* Inline/recursion.scm 72 */
			{	/* Inline/recursion.scm 73 */
				BgL_variablez00_bglt BgL_variablez00_1564;

				BgL_variablez00_1564 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_7)))->BgL_funz00)))->
					BgL_variablez00);
				{	/* Inline/recursion.scm 73 */
					BgL_localz00_bglt BgL_localz00_1565;

					{	/* Inline/recursion.scm 74 */
						obj_t BgL_arg1540z00_1689;
						BgL_typez00_bglt BgL_arg1552z00_1690;
						BgL_valuez00_bglt BgL_arg1558z00_1691;

						BgL_arg1540z00_1689 =
							(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_1564))->
							BgL_idz00);
						BgL_arg1552z00_1690 =
							(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_1564))->
							BgL_typez00);
						BgL_arg1558z00_1691 =
							(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_1564))->
							BgL_valuez00);
						BgL_localz00_1565 =
							BGl_makezd2localzd2sfunz00zzast_localz00(BgL_arg1540z00_1689,
							BgL_arg1552z00_1690, ((BgL_sfunz00_bglt) BgL_arg1558z00_1691));
					}
					{	/* Inline/recursion.scm 74 */
						BgL_valuez00_bglt BgL_oldzd2sfunzd2_1566;

						BgL_oldzd2sfunzd2_1566 =
							(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_1564))->
							BgL_valuez00);
						{	/* Inline/recursion.scm 77 */
							obj_t BgL_oldzd2bodyzd2_1567;

							{	/* Inline/recursion.scm 78 */
								bool_t BgL_test2050z00_2769;

								{	/* Inline/recursion.scm 78 */
									bool_t BgL_res1923z00_2202;

									BgL_res1923z00_2202 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_oldzd2sfunzd2_1566),
										BGl_isfunz00zzinline_inlinez00);
									BgL_test2050z00_2769 = BgL_res1923z00_2202;
								}
								if (BgL_test2050z00_2769)
									{
										BgL_nodez00_bglt BgL_auxz00_2772;

										{
											BgL_isfunz00_bglt BgL_auxz00_2773;

											{
												obj_t BgL_auxz00_2774;

												{	/* Inline/recursion.scm 79 */
													BgL_objectz00_bglt BgL_tmpz00_2775;

													BgL_tmpz00_2775 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_oldzd2sfunzd2_1566));
													BgL_auxz00_2774 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2775);
												}
												BgL_auxz00_2773 = ((BgL_isfunz00_bglt) BgL_auxz00_2774);
											}
											BgL_auxz00_2772 =
												(((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_2773))->
												BgL_originalzd2bodyzd2);
										}
										BgL_oldzd2bodyzd2_1567 = ((obj_t) BgL_auxz00_2772);
									}
								else
									{	/* Inline/recursion.scm 78 */
										BgL_oldzd2bodyzd2_1567 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_oldzd2sfunzd2_1566)))->
											BgL_bodyz00);
									}
							}
							{	/* Inline/recursion.scm 78 */
								obj_t BgL_reczd2callszd2_1568;

								{	/* Inline/recursion.scm 81 */
									obj_t BgL_arg1537z00_1687;

									{	/* Inline/recursion.scm 81 */
										obj_t BgL_res1924z00_2206;

										BgL_res1924z00_2206 = MAKE_YOUNG_CELL(BTRUE);
										BgL_arg1537z00_1687 = BgL_res1924z00_2206;
									}
									BgL_reczd2callszd2_1568 =
										BGl_findzd2recursivezd2callsz00zzinline_recursionz00(
										((BgL_nodez00_bglt) BgL_oldzd2bodyzd2_1567),
										BgL_variablez00_1564, BTRUE, BgL_arg1537z00_1687);
								}
								{	/* Inline/recursion.scm 81 */
									obj_t BgL_oldzd2argszd2_1569;

									BgL_oldzd2argszd2_1569 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_oldzd2sfunzd2_1566)))->
										BgL_argsz00);
									{	/* Inline/recursion.scm 82 */
										obj_t BgL_invzd2argszd2_1570;

										BgL_invzd2argszd2_1570 =
											BGl_invariantzd2argszd2zzinline_variantz00(BgL_nodez00_7,
											BgL_variablez00_1564, BgL_reczd2callszd2_1568);
										{	/* Inline/recursion.scm 83 */
											obj_t BgL_varzd2argszd2_1571;

											BgL_varzd2argszd2_1571 =
												BGl_variantzd2argszd2zzinline_variantz00
												(BgL_variablez00_1564);
											{	/* Inline/recursion.scm 84 */
												obj_t BgL_newzd2argszd2_1572;

												if (NULLP(BgL_varzd2argszd2_1571))
													{	/* Inline/recursion.scm 85 */
														BgL_newzd2argszd2_1572 = BNIL;
													}
												else
													{	/* Inline/recursion.scm 85 */
														obj_t BgL_head1280z00_1671;

														{	/* Inline/recursion.scm 85 */
															obj_t BgL_res1926z00_2209;

															BgL_res1926z00_2209 = MAKE_YOUNG_PAIR(BNIL, BNIL);
															BgL_head1280z00_1671 = BgL_res1926z00_2209;
														}
														{
															obj_t BgL_l1278z00_1673;
															obj_t BgL_tail1281z00_1674;

															BgL_l1278z00_1673 = BgL_varzd2argszd2_1571;
															BgL_tail1281z00_1674 = BgL_head1280z00_1671;
														BgL_zc3z04anonymousza31497ze3z87_1675:
															if (NULLP(BgL_l1278z00_1673))
																{	/* Inline/recursion.scm 85 */
																	BgL_newzd2argszd2_1572 =
																		CDR(BgL_head1280z00_1671);
																}
															else
																{	/* Inline/recursion.scm 85 */
																	obj_t BgL_newtail1282z00_1677;

																	{	/* Inline/recursion.scm 85 */
																		BgL_localz00_bglt BgL_arg1521z00_1679;

																		{	/* Inline/recursion.scm 85 */
																			obj_t BgL_lz00_1680;

																			BgL_lz00_1680 =
																				CAR(((obj_t) BgL_l1278z00_1673));
																			{	/* Inline/recursion.scm 86 */
																				BgL_svarz00_bglt BgL_arg1528z00_1681;

																				{	/* Inline/recursion.scm 86 */
																					BgL_svarz00_bglt
																						BgL_duplicated1110z00_1682;
																					BgL_svarz00_bglt BgL_new1108z00_1683;

																					BgL_duplicated1110z00_1682 =
																						((BgL_svarz00_bglt)
																						(((BgL_variablez00_bglt) COBJECT(
																									((BgL_variablez00_bglt)
																										((BgL_localz00_bglt)
																											BgL_lz00_1680))))->
																							BgL_valuez00));
																					{	/* Inline/recursion.scm 86 */
																						BgL_svarz00_bglt
																							BgL_new1111z00_1684;
																						BgL_new1111z00_1684 =
																							((BgL_svarz00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_svarz00_bgl))));
																						{	/* Inline/recursion.scm 86 */
																							long BgL_arg1536z00_1685;

																							{	/* Inline/recursion.scm 86 */
																								long BgL_res1928z00_2215;

																								BgL_res1928z00_2215 =
																									BGL_CLASS_INDEX
																									(BGl_svarz00zzast_varz00);
																								BgL_arg1536z00_1685 =
																									BgL_res1928z00_2215;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1111z00_1684),
																								BgL_arg1536z00_1685);
																						}
																						{	/* Inline/recursion.scm 86 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_2807;
																							BgL_tmpz00_2807 =
																								((BgL_objectz00_bglt)
																								BgL_new1111z00_1684);
																							BGL_OBJECT_WIDENING_SET
																								(BgL_tmpz00_2807, BFALSE);
																						}
																						((BgL_objectz00_bglt)
																							BgL_new1111z00_1684);
																						BgL_new1108z00_1683 =
																							BgL_new1111z00_1684;
																					}
																					((((BgL_svarz00_bglt)
																								COBJECT(BgL_new1108z00_1683))->
																							BgL_locz00) =
																						((obj_t) (((BgL_svarz00_bglt)
																									COBJECT
																									(BgL_duplicated1110z00_1682))->
																								BgL_locz00)), BUNSPEC);
																					BgL_arg1528z00_1681 =
																						BgL_new1108z00_1683;
																				}
																				BgL_arg1521z00_1679 =
																					BGl_clonezd2localzd2zzast_localz00(
																					((BgL_localz00_bglt) BgL_lz00_1680),
																					((BgL_valuez00_bglt)
																						BgL_arg1528z00_1681));
																		}}
																		{	/* Inline/recursion.scm 85 */
																			obj_t BgL_res1929z00_2219;

																			BgL_res1929z00_2219 =
																				MAKE_YOUNG_PAIR(
																				((obj_t) BgL_arg1521z00_1679), BNIL);
																			BgL_newtail1282z00_1677 =
																				BgL_res1929z00_2219;
																	}}
																	SET_CDR(BgL_tail1281z00_1674,
																		BgL_newtail1282z00_1677);
																	{	/* Inline/recursion.scm 85 */
																		obj_t BgL_arg1518z00_1678;

																		BgL_arg1518z00_1678 =
																			CDR(((obj_t) BgL_l1278z00_1673));
																		{
																			obj_t BgL_tail1281z00_2822;
																			obj_t BgL_l1278z00_2821;

																			BgL_l1278z00_2821 = BgL_arg1518z00_1678;
																			BgL_tail1281z00_2822 =
																				BgL_newtail1282z00_1677;
																			BgL_tail1281z00_1674 =
																				BgL_tail1281z00_2822;
																			BgL_l1278z00_1673 = BgL_l1278z00_2821;
																			goto
																				BgL_zc3z04anonymousza31497ze3z87_1675;
																		}
																	}
																}
														}
													}
												{	/* Inline/recursion.scm 85 */
													obj_t BgL_substitutez00_1573;

													{	/* Inline/recursion.scm 88 */
														obj_t BgL_arg1495z00_1668;

														BgL_arg1495z00_1668 =
															(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_nodez00_7)))->
															BgL_argsz00);
														BgL_substitutez00_1573 =
															BGl_substitutionsz00zzinline_variantz00
															(BgL_variablez00_1564, BgL_arg1495z00_1668,
															BgL_newzd2argszd2_1572);
													}
													{	/* Inline/recursion.scm 88 */
														obj_t BgL_svgzd2callszd2argsz00_1574;

														if (NULLP(BgL_reczd2callszd2_1568))
															{	/* Inline/recursion.scm 89 */
																BgL_svgzd2callszd2argsz00_1574 = BNIL;
															}
														else
															{	/* Inline/recursion.scm 89 */
																obj_t BgL_head1285z00_1657;

																{	/* Inline/recursion.scm 89 */
																	obj_t BgL_res1931z00_2224;

																	BgL_res1931z00_2224 =
																		MAKE_YOUNG_PAIR(BNIL, BNIL);
																	BgL_head1285z00_1657 = BgL_res1931z00_2224;
																}
																{
																	obj_t BgL_l1283z00_1659;
																	obj_t BgL_tail1286z00_1660;

																	BgL_l1283z00_1659 = BgL_reczd2callszd2_1568;
																	BgL_tail1286z00_1660 = BgL_head1285z00_1657;
																BgL_zc3z04anonymousza31478ze3z87_1661:
																	if (NULLP(BgL_l1283z00_1659))
																		{	/* Inline/recursion.scm 89 */
																			BgL_svgzd2callszd2argsz00_1574 =
																				CDR(BgL_head1285z00_1657);
																		}
																	else
																		{	/* Inline/recursion.scm 89 */
																			obj_t BgL_newtail1287z00_1663;

																			{	/* Inline/recursion.scm 89 */
																				obj_t BgL_arg1493z00_1665;

																				BgL_arg1493z00_1665 =
																					(((BgL_appz00_bglt) COBJECT(
																							((BgL_appz00_bglt)
																								CAR(
																									((obj_t)
																										BgL_l1283z00_1659)))))->
																					BgL_argsz00);
																				{	/* Inline/recursion.scm 89 */
																					obj_t BgL_res1933z00_2229;

																					BgL_res1933z00_2229 =
																						MAKE_YOUNG_PAIR(BgL_arg1493z00_1665,
																						BNIL);
																					BgL_newtail1287z00_1663 =
																						BgL_res1933z00_2229;
																				}
																			}
																			SET_CDR(BgL_tail1286z00_1660,
																				BgL_newtail1287z00_1663);
																			{	/* Inline/recursion.scm 89 */
																				obj_t BgL_arg1489z00_1664;

																				BgL_arg1489z00_1664 =
																					CDR(((obj_t) BgL_l1283z00_1659));
																				{
																					obj_t BgL_tail1286z00_2841;
																					obj_t BgL_l1283z00_2840;

																					BgL_l1283z00_2840 =
																						BgL_arg1489z00_1664;
																					BgL_tail1286z00_2841 =
																						BgL_newtail1287z00_1663;
																					BgL_tail1286z00_1660 =
																						BgL_tail1286z00_2841;
																					BgL_l1283z00_1659 = BgL_l1283z00_2840;
																					goto
																						BgL_zc3z04anonymousza31478ze3z87_1661;
																				}
																			}
																		}
																}
															}
														{	/* Inline/recursion.scm 89 */
															bool_t BgL_removez12z12_1575;

															{
																obj_t BgL_l1288z00_1649;

																BgL_l1288z00_1649 = BgL_reczd2callszd2_1568;
															BgL_zc3z04anonymousza31465ze3z87_1650:
																if (PAIRP(BgL_l1288z00_1649))
																	{	/* Inline/recursion.scm 90 */
																		{	/* Inline/recursion.scm 90 */
																			obj_t BgL_arg1474z00_1652;

																			BgL_arg1474z00_1652 =
																				CAR(BgL_l1288z00_1649);
																			BGl_removezd2invariantzd2argsz12z12zzinline_variantz00
																				(((BgL_appz00_bglt)
																					BgL_arg1474z00_1652));
																		}
																		{
																			obj_t BgL_l1288z00_2847;

																			BgL_l1288z00_2847 =
																				CDR(BgL_l1288z00_1649);
																			BgL_l1288z00_1649 = BgL_l1288z00_2847;
																			goto
																				BgL_zc3z04anonymousza31465ze3z87_1650;
																		}
																	}
																else
																	{	/* Inline/recursion.scm 90 */
																		BgL_removez12z12_1575 = ((bool_t) 1);
																	}
															}
															{	/* Inline/recursion.scm 90 */
																obj_t BgL_ilocz00_1576;

																{	/* Inline/recursion.scm 91 */
																	bool_t BgL_test2056z00_2849;

																	{	/* Inline/recursion.scm 91 */
																		bool_t BgL_res1935z00_2235;

																		BgL_res1935z00_2235 =
																			BGl_isazf3zf3zz__objectz00(
																			((obj_t) BgL_variablez00_1564),
																			BGl_globalz00zzast_varz00);
																		BgL_test2056z00_2849 = BgL_res1935z00_2235;
																	}
																	if (BgL_test2056z00_2849)
																		{	/* Inline/recursion.scm 92 */
																			bool_t BgL_test2057z00_2852;

																			{	/* Inline/recursion.scm 92 */
																				obj_t BgL_arg1464z00_1647;

																				BgL_arg1464z00_1647 =
																					(((BgL_globalz00_bglt) COBJECT(
																							((BgL_globalz00_bglt)
																								BgL_variablez00_1564)))->
																					BgL_modulez00);
																				BgL_test2057z00_2852 =
																					(BgL_arg1464z00_1647 ==
																					BGl_za2moduleza2z00zzmodule_modulez00);
																			}
																			if (BgL_test2057z00_2852)
																				{	/* Inline/recursion.scm 92 */
																					BgL_ilocz00_1576 = BFALSE;
																				}
																			else
																				{	/* Inline/recursion.scm 92 */
																					BgL_ilocz00_1576 =
																						(((BgL_nodez00_bglt)
																							COBJECT(BgL_nodez00_7))->
																						BgL_locz00);
																				}
																		}
																	else
																		{	/* Inline/recursion.scm 91 */
																			BgL_ilocz00_1576 = BFALSE;
																		}
																}
																{	/* Inline/recursion.scm 91 */
																	BgL_nodez00_bglt BgL_newzd2bodyzd2_1577;

																	if (NULLP(BgL_invzd2argszd2_1570))
																		{	/* Inline/recursion.scm 96 */
																			obj_t BgL_arg1448z00_1641;
																			obj_t BgL_arg1449z00_1642;

																			BgL_arg1448z00_1641 =
																				MAKE_YOUNG_PAIR(
																				((obj_t) BgL_variablez00_1564),
																				BgL_oldzd2argszd2_1569);
																			BgL_arg1449z00_1642 =
																				MAKE_YOUNG_PAIR(((obj_t)
																					BgL_localz00_1565),
																				BgL_substitutez00_1573);
																			BgL_newzd2bodyzd2_1577 =
																				BGl_alphatiza7eza7zzast_alphatiza7eza7
																				(BgL_arg1448z00_1641,
																				BgL_arg1449z00_1642, BgL_ilocz00_1576,
																				((BgL_nodez00_bglt)
																					BgL_oldzd2bodyzd2_1567));
																		}
																	else
																		{	/* Inline/recursion.scm 103 */
																			obj_t BgL_arg1461z00_1643;
																			obj_t BgL_arg1462z00_1644;

																			BgL_arg1461z00_1643 =
																				MAKE_YOUNG_PAIR(
																				((obj_t) BgL_variablez00_1564),
																				BgL_oldzd2argszd2_1569);
																			BgL_arg1462z00_1644 =
																				MAKE_YOUNG_PAIR(((obj_t)
																					BgL_localz00_1565),
																				BgL_substitutez00_1573);
																			BgL_newzd2bodyzd2_1577 =
																				BGl_alphatiza7ezd2sanszd2closureza7zzast_alphatiza7eza7
																				(BgL_arg1461z00_1643,
																				BgL_arg1462z00_1644, BgL_ilocz00_1576,
																				((BgL_nodez00_bglt)
																					BgL_oldzd2bodyzd2_1567),
																				BgL_variablez00_1564);
																		}
																	{	/* Inline/recursion.scm 94 */
																		bool_t BgL_restorez12z12_1578;

																		{
																			obj_t BgL_ll1290z00_1631;
																			obj_t BgL_ll1291z00_1632;

																			BgL_ll1290z00_1631 =
																				BgL_reczd2callszd2_1568;
																			BgL_ll1291z00_1632 =
																				BgL_svgzd2callszd2argsz00_1574;
																		BgL_zc3z04anonymousza31422ze3z87_1633:
																			if (NULLP(BgL_ll1290z00_1631))
																				{	/* Inline/recursion.scm 108 */
																					BgL_restorez12z12_1578 = ((bool_t) 1);
																				}
																			else
																				{	/* Inline/recursion.scm 108 */
																					{	/* Inline/recursion.scm 109 */
																						obj_t BgL_appz00_1635;
																						obj_t BgL_argsz00_1636;

																						BgL_appz00_1635 =
																							CAR(((obj_t) BgL_ll1290z00_1631));
																						BgL_argsz00_1636 =
																							CAR(((obj_t) BgL_ll1291z00_1632));
																						((((BgL_appz00_bglt) COBJECT(
																										((BgL_appz00_bglt)
																											BgL_appz00_1635)))->
																								BgL_argsz00) =
																							((obj_t) BgL_argsz00_1636),
																							BUNSPEC);
																					}
																					{	/* Inline/recursion.scm 108 */
																						obj_t BgL_arg1441z00_1637;
																						obj_t BgL_arg1442z00_1638;

																						BgL_arg1441z00_1637 =
																							CDR(((obj_t) BgL_ll1290z00_1631));
																						BgL_arg1442z00_1638 =
																							CDR(((obj_t) BgL_ll1291z00_1632));
																						{
																							obj_t BgL_ll1291z00_2884;
																							obj_t BgL_ll1290z00_2883;

																							BgL_ll1290z00_2883 =
																								BgL_arg1441z00_1637;
																							BgL_ll1291z00_2884 =
																								BgL_arg1442z00_1638;
																							BgL_ll1291z00_1632 =
																								BgL_ll1291z00_2884;
																							BgL_ll1290z00_1631 =
																								BgL_ll1290z00_2883;
																							goto
																								BgL_zc3z04anonymousza31422ze3z87_1633;
																						}
																					}
																				}
																		}
																		{	/* Inline/recursion.scm 108 */
																			BgL_sfunz00_bglt BgL_newzd2sfunzd2_1579;

																			{	/* Inline/recursion.scm 112 */
																				BgL_sfunz00_bglt BgL_new1114z00_1618;

																				{	/* Inline/recursion.scm 112 */
																					BgL_sfunz00_bglt BgL_new1126z00_1628;

																					BgL_new1126z00_1628 =
																						((BgL_sfunz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_sfunz00_bgl))));
																					{	/* Inline/recursion.scm 112 */
																						long BgL_arg1421z00_1629;

																						{	/* Inline/recursion.scm 112 */
																							long BgL_res1938z00_2246;

																							BgL_res1938z00_2246 =
																								BGL_CLASS_INDEX
																								(BGl_sfunz00zzast_varz00);
																							BgL_arg1421z00_1629 =
																								BgL_res1938z00_2246;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1126z00_1628),
																							BgL_arg1421z00_1629);
																					}
																					{	/* Inline/recursion.scm 112 */
																						BgL_objectz00_bglt BgL_tmpz00_2889;

																						BgL_tmpz00_2889 =
																							((BgL_objectz00_bglt)
																							BgL_new1126z00_1628);
																						BGL_OBJECT_WIDENING_SET
																							(BgL_tmpz00_2889, BFALSE);
																					}
																					((BgL_objectz00_bglt)
																						BgL_new1126z00_1628);
																					BgL_new1114z00_1618 =
																						BgL_new1126z00_1628;
																				}
																				((((BgL_funz00_bglt) COBJECT(
																								((BgL_funz00_bglt)
																									BgL_new1114z00_1618)))->
																						BgL_arityz00) =
																					((long) (((BgL_funz00_bglt)
																								COBJECT(((BgL_funz00_bglt)
																										BgL_oldzd2sfunzd2_1566)))->
																							BgL_arityz00)), BUNSPEC);
																				((((BgL_funz00_bglt)
																							COBJECT(((BgL_funz00_bglt)
																									BgL_new1114z00_1618)))->
																						BgL_sidezd2effectzd2) =
																					((obj_t) (((BgL_funz00_bglt)
																								COBJECT(((BgL_funz00_bglt)
																										BgL_oldzd2sfunzd2_1566)))->
																							BgL_sidezd2effectzd2)), BUNSPEC);
																				((((BgL_funz00_bglt)
																							COBJECT(((BgL_funz00_bglt)
																									BgL_new1114z00_1618)))->
																						BgL_predicatezd2ofzd2) =
																					((obj_t) (((BgL_funz00_bglt)
																								COBJECT(((BgL_funz00_bglt)
																										BgL_oldzd2sfunzd2_1566)))->
																							BgL_predicatezd2ofzd2)), BUNSPEC);
																				((((BgL_funz00_bglt)
																							COBJECT(((BgL_funz00_bglt)
																									BgL_new1114z00_1618)))->
																						BgL_stackzd2allocatorzd2) =
																					((obj_t) (((BgL_funz00_bglt)
																								COBJECT(((BgL_funz00_bglt)
																										BgL_oldzd2sfunzd2_1566)))->
																							BgL_stackzd2allocatorzd2)),
																					BUNSPEC);
																				((((BgL_funz00_bglt)
																							COBJECT(((BgL_funz00_bglt)
																									BgL_new1114z00_1618)))->
																						BgL_topzf3zf3) =
																					((bool_t) (((BgL_funz00_bglt)
																								COBJECT(((BgL_funz00_bglt)
																										BgL_oldzd2sfunzd2_1566)))->
																							BgL_topzf3zf3)), BUNSPEC);
																				((((BgL_funz00_bglt)
																							COBJECT(((BgL_funz00_bglt)
																									BgL_new1114z00_1618)))->
																						BgL_thezd2closurezd2) =
																					((obj_t) (((BgL_funz00_bglt)
																								COBJECT(((BgL_funz00_bglt)
																										BgL_oldzd2sfunzd2_1566)))->
																							BgL_thezd2closurezd2)), BUNSPEC);
																				((((BgL_funz00_bglt)
																							COBJECT(((BgL_funz00_bglt)
																									BgL_new1114z00_1618)))->
																						BgL_effectz00) =
																					((obj_t) (((BgL_funz00_bglt)
																								COBJECT(((BgL_funz00_bglt)
																										BgL_oldzd2sfunzd2_1566)))->
																							BgL_effectz00)), BUNSPEC);
																				((((BgL_funz00_bglt)
																							COBJECT(((BgL_funz00_bglt)
																									BgL_new1114z00_1618)))->
																						BgL_failsafez00) =
																					((obj_t) (((BgL_funz00_bglt)
																								COBJECT(((BgL_funz00_bglt)
																										BgL_oldzd2sfunzd2_1566)))->
																							BgL_failsafez00)), BUNSPEC);
																				((((BgL_funz00_bglt)
																							COBJECT(((BgL_funz00_bglt)
																									BgL_new1114z00_1618)))->
																						BgL_argszd2noescapezd2) =
																					((obj_t) (((BgL_funz00_bglt)
																								COBJECT(((BgL_funz00_bglt)
																										BgL_oldzd2sfunzd2_1566)))->
																							BgL_argszd2noescapezd2)),
																					BUNSPEC);
																				((((BgL_sfunz00_bglt)
																							COBJECT(BgL_new1114z00_1618))->
																						BgL_propertyz00) =
																					((obj_t) (((BgL_sfunz00_bglt)
																								COBJECT(((BgL_sfunz00_bglt) (
																											(BgL_funz00_bglt)
																											BgL_oldzd2sfunzd2_1566))))->
																							BgL_propertyz00)), BUNSPEC);
																				((((BgL_sfunz00_bglt)
																							COBJECT(BgL_new1114z00_1618))->
																						BgL_argsz00) =
																					((obj_t) BgL_newzd2argszd2_1572),
																					BUNSPEC);
																				((((BgL_sfunz00_bglt)
																							COBJECT(BgL_new1114z00_1618))->
																						BgL_argszd2namezd2) =
																					((obj_t) (((BgL_sfunz00_bglt)
																								COBJECT(((BgL_sfunz00_bglt) (
																											(BgL_funz00_bglt)
																											BgL_oldzd2sfunzd2_1566))))->
																							BgL_argszd2namezd2)), BUNSPEC);
																				((((BgL_sfunz00_bglt)
																							COBJECT(BgL_new1114z00_1618))->
																						BgL_bodyz00) =
																					((obj_t) ((obj_t)
																							BgL_newzd2bodyzd2_1577)),
																					BUNSPEC);
																				((((BgL_sfunz00_bglt)
																							COBJECT(BgL_new1114z00_1618))->
																						BgL_classz00) =
																					((obj_t) CNST_TABLE_REF(((long) 0))),
																					BUNSPEC);
																				((((BgL_sfunz00_bglt)
																							COBJECT(BgL_new1114z00_1618))->
																						BgL_dssslzd2keywordszd2) =
																					((obj_t) (((BgL_sfunz00_bglt)
																								COBJECT(((BgL_sfunz00_bglt) (
																											(BgL_funz00_bglt)
																											BgL_oldzd2sfunzd2_1566))))->
																							BgL_dssslzd2keywordszd2)),
																					BUNSPEC);
																				((((BgL_sfunz00_bglt)
																							COBJECT(BgL_new1114z00_1618))->
																						BgL_locz00) =
																					((obj_t) (((BgL_sfunz00_bglt)
																								COBJECT(((BgL_sfunz00_bglt) (
																											(BgL_funz00_bglt)
																											BgL_oldzd2sfunzd2_1566))))->
																							BgL_locz00)), BUNSPEC);
																				((((BgL_sfunz00_bglt)
																							COBJECT(BgL_new1114z00_1618))->
																						BgL_optionalsz00) =
																					((obj_t) (((BgL_sfunz00_bglt)
																								COBJECT(((BgL_sfunz00_bglt) (
																											(BgL_funz00_bglt)
																											BgL_oldzd2sfunzd2_1566))))->
																							BgL_optionalsz00)), BUNSPEC);
																				((((BgL_sfunz00_bglt)
																							COBJECT(BgL_new1114z00_1618))->
																						BgL_keysz00) =
																					((obj_t) (((BgL_sfunz00_bglt)
																								COBJECT(((BgL_sfunz00_bglt) (
																											(BgL_funz00_bglt)
																											BgL_oldzd2sfunzd2_1566))))->
																							BgL_keysz00)), BUNSPEC);
																				((((BgL_sfunz00_bglt)
																							COBJECT(BgL_new1114z00_1618))->
																						BgL_thezd2closurezd2globalz00) =
																					((obj_t) (((BgL_sfunz00_bglt)
																								COBJECT(((BgL_sfunz00_bglt) (
																											(BgL_funz00_bglt)
																											BgL_oldzd2sfunzd2_1566))))->
																							BgL_thezd2closurezd2globalz00)),
																					BUNSPEC);
																				((((BgL_sfunz00_bglt)
																							COBJECT(BgL_new1114z00_1618))->
																						BgL_strengthz00) =
																					((obj_t) (((BgL_sfunz00_bglt)
																								COBJECT(((BgL_sfunz00_bglt) (
																											(BgL_funz00_bglt)
																											BgL_oldzd2sfunzd2_1566))))->
																							BgL_strengthz00)), BUNSPEC);
																				((((BgL_sfunz00_bglt)
																							COBJECT(BgL_new1114z00_1618))->
																						BgL_stackablez00) =
																					((obj_t) (((BgL_sfunz00_bglt)
																								COBJECT(((BgL_sfunz00_bglt) (
																											(BgL_funz00_bglt)
																											BgL_oldzd2sfunzd2_1566))))->
																							BgL_stackablez00)), BUNSPEC);
																				BgL_newzd2sfunzd2_1579 =
																					BgL_new1114z00_1618;
																			}
																			{	/* Inline/recursion.scm 112 */
																				obj_t BgL_newzd2kfactorzd2_1580;

																				BgL_newzd2kfactorzd2_1580 =
																					PROCEDURE_ENTRY
																					(BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00)
																					(BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00,
																					BINT(BgL_kfactorz00_8), BEOA);
																				{	/* Inline/recursion.scm 116 */

																					{
																						obj_t BgL_ll1293z00_1582;
																						obj_t BgL_ll1294z00_1583;

																						BgL_ll1293z00_1582 =
																							BgL_newzd2argszd2_1572;
																						BgL_ll1294z00_1583 =
																							BgL_varzd2argszd2_1571;
																					BgL_zc3z04anonymousza31352ze3z87_1584:
																						if (NULLP
																							(BgL_ll1293z00_1582))
																							{	/* Inline/recursion.scm 118 */
																								((bool_t) 1);
																							}
																						else
																							{	/* Inline/recursion.scm 118 */
																								{	/* Inline/recursion.scm 119 */
																									obj_t BgL_newz00_1586;
																									obj_t BgL_oldz00_1587;

																									BgL_newz00_1586 =
																										CAR(
																										((obj_t)
																											BgL_ll1293z00_1582));
																									BgL_oldz00_1587 =
																										CAR(((obj_t)
																											BgL_ll1294z00_1583));
																									{	/* Inline/recursion.scm 119 */
																										bool_t BgL_arg1357z00_1588;

																										BgL_arg1357z00_1588 =
																											(((BgL_variablez00_bglt)
																												COBJECT((
																														(BgL_variablez00_bglt)
																														((BgL_localz00_bglt)
																															BgL_oldz00_1587))))->
																											BgL_userzf3zf3);
																										((((BgL_variablez00_bglt)
																													COBJECT((
																															(BgL_variablez00_bglt)
																															((BgL_localz00_bglt) BgL_newz00_1586))))->BgL_userzf3zf3) = ((bool_t) BgL_arg1357z00_1588), BUNSPEC);
																									}
																								}
																								{	/* Inline/recursion.scm 118 */
																									obj_t BgL_arg1360z00_1589;
																									obj_t BgL_arg1361z00_1590;

																									BgL_arg1360z00_1589 =
																										CDR(
																										((obj_t)
																											BgL_ll1293z00_1582));
																									BgL_arg1361z00_1590 =
																										CDR(((obj_t)
																											BgL_ll1294z00_1583));
																									{
																										obj_t BgL_ll1294z00_2992;
																										obj_t BgL_ll1293z00_2991;

																										BgL_ll1293z00_2991 =
																											BgL_arg1360z00_1589;
																										BgL_ll1294z00_2992 =
																											BgL_arg1361z00_1590;
																										BgL_ll1294z00_1583 =
																											BgL_ll1294z00_2992;
																										BgL_ll1293z00_1582 =
																											BgL_ll1293z00_2991;
																										goto
																											BgL_zc3z04anonymousza31352ze3z87_1584;
																									}
																								}
																							}
																					}
																					{	/* Inline/recursion.scm 124 */
																						bool_t BgL_arg1363z00_1592;

																						{	/* Inline/recursion.scm 124 */
																							bool_t BgL_test2061z00_2993;

																							{	/* Inline/recursion.scm 124 */
																								bool_t BgL_res1940z00_2258;

																								BgL_res1940z00_2258 =
																									BGl_isazf3zf3zz__objectz00(
																									((obj_t)
																										BgL_variablez00_1564),
																									BGl_globalz00zzast_varz00);
																								BgL_test2061z00_2993 =
																									BgL_res1940z00_2258;
																							}
																							if (BgL_test2061z00_2993)
																								{	/* Inline/recursion.scm 124 */
																									BgL_arg1363z00_1592 =
																										(((BgL_variablez00_bglt)
																											COBJECT((
																													(BgL_variablez00_bglt)
																													((BgL_globalz00_bglt)
																														BgL_variablez00_1564))))->
																										BgL_userzf3zf3);
																								}
																							else
																								{	/* Inline/recursion.scm 126 */
																									bool_t BgL_test2062z00_2999;

																									{	/* Inline/recursion.scm 126 */
																										bool_t BgL_res1941z00_2260;

																										BgL_res1941z00_2260 =
																											BGl_isazf3zf3zz__objectz00
																											(((obj_t)
																												BgL_variablez00_1564),
																											BGl_localz00zzast_varz00);
																										BgL_test2062z00_2999 =
																											BgL_res1941z00_2260;
																									}
																									if (BgL_test2062z00_2999)
																										{	/* Inline/recursion.scm 126 */
																											BgL_arg1363z00_1592 =
																												(((BgL_variablez00_bglt)
																													COBJECT((
																															(BgL_variablez00_bglt)
																															((BgL_localz00_bglt) BgL_variablez00_1564))))->BgL_userzf3zf3);
																										}
																									else
																										{	/* Inline/recursion.scm 126 */
																											BgL_arg1363z00_1592 =
																												((bool_t) 0);
																										}
																								}
																						}
																						((((BgL_variablez00_bglt) COBJECT(
																										((BgL_variablez00_bglt)
																											BgL_localz00_1565)))->
																								BgL_userzf3zf3) =
																							((bool_t) BgL_arg1363z00_1592),
																							BUNSPEC);
																					}
																					((((BgL_variablez00_bglt) COBJECT(
																									((BgL_variablez00_bglt)
																										BgL_localz00_1565)))->
																							BgL_valuez00) =
																						((BgL_valuez00_bglt) (
																								(BgL_valuez00_bglt)
																								BgL_newzd2sfunzd2_1579)),
																						BUNSPEC);
																					if (CBOOL
																						(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																							((((BgL_sfunz00_bglt)
																										COBJECT(((BgL_sfunz00_bglt)
																												BgL_oldzd2sfunzd2_1566)))->
																									BgL_classz00),
																								CNST_TABLE_REF(((long) 1)))))
																						{	/* Inline/recursion.scm 139 */
																							BFALSE;
																						}
																					else
																						{	/* Inline/recursion.scm 139 */
																							if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long) 3)), BGl_za2verboseza2z00zzengine_paramz00))
																								{	/* Inline/recursion.scm 141 */
																									obj_t BgL_arg1381z00_1599;
																									obj_t BgL_arg1382z00_1600;

																									BgL_arg1381z00_1599 =
																										BGl_shapez00zztools_shapez00
																										(((obj_t)
																											BgL_variablez00_1564));
																									BgL_arg1382z00_1600 =
																										BGl_currentzd2functionzd2zztools_errorz00
																										();
																									{	/* Inline/recursion.scm 140 */
																										obj_t BgL_list1383z00_1601;

																										{	/* Inline/recursion.scm 140 */
																											obj_t BgL_arg1384z00_1602;

																											{	/* Inline/recursion.scm 140 */
																												obj_t
																													BgL_arg1385z00_1603;
																												{	/* Inline/recursion.scm 140 */
																													obj_t
																														BgL_arg1386z00_1604;
																													{	/* Inline/recursion.scm 140 */
																														obj_t
																															BgL_arg1387z00_1605;
																														{	/* Inline/recursion.scm 140 */
																															obj_t
																																BgL_arg1388z00_1606;
																															BgL_arg1388z00_1606
																																=
																																MAKE_YOUNG_PAIR
																																(BCHAR((
																																		(unsigned
																																			char)
																																		10)), BNIL);
																															BgL_arg1387z00_1605
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_string1983z00zzinline_recursionz00,
																																BgL_arg1388z00_1606);
																														}
																														BgL_arg1386z00_1604
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1382z00_1600,
																															BgL_arg1387z00_1605);
																													}
																													BgL_arg1385z00_1603 =
																														MAKE_YOUNG_PAIR
																														(BGl_string1984z00zzinline_recursionz00,
																														BgL_arg1386z00_1604);
																												}
																												BgL_arg1384z00_1602 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1381z00_1599,
																													BgL_arg1385z00_1603);
																											}
																											BgL_list1383z00_1601 =
																												MAKE_YOUNG_PAIR
																												(BGl_string1985z00zzinline_recursionz00,
																												BgL_arg1384z00_1602);
																										}
																										BGl_verbosez00zztools_speekz00
																											(BINT(((long) 3)),
																											BgL_list1383z00_1601);
																								}}
																							else
																								{	/* Inline/recursion.scm 140 */
																									BUNSPEC;
																								}
																						}
																					BGl_inlinezd2sfunz12zc0zzinline_inlinez00
																						(((BgL_variablez00_bglt)
																							BgL_localz00_1565),
																						(long)
																						CINT(BgL_newzd2kfactorzd2_1580),
																						BgL_stackz00_9);
																					{	/* Inline/recursion.scm 150 */
																						BgL_appz00_bglt
																							BgL_newzd2callzd2_1608;
																						long BgL_callzd2siza7ez75_1609;

																						BgL_newzd2callzd2_1608 =
																							BGl_removezd2invariantzd2argsz12z12zzinline_variantz00
																							(((BgL_appz00_bglt)
																								BgL_nodez00_7));
																						BgL_callzd2siza7ez75_1609 =
																							(((long) 1) +
																							bgl_list_length(((
																										(BgL_appz00_bglt)
																										COBJECT(((BgL_appz00_bglt)
																												BgL_nodez00_7)))->
																									BgL_argsz00)));
																						{	/* Inline/recursion.scm 152 */
																							bool_t BgL_test2065z00_3040;

																							if (CBOOL
																								(BGl_za2optimzd2unrollzd2loopzf3za2zf3zzengine_paramz00))
																								{	/* Inline/recursion.scm 152 */
																									if (BGl_iszd2loopzf3z21zzinline_loopz00(BgL_variablez00_1564))
																										{	/* Inline/recursion.scm 153 */
																											if (BGl_innerzd2loopzf3z21zzinline_loopz00(BgL_variablez00_1564))
																												{	/* Inline/recursion.scm 156 */
																													BgL_test2065z00_3040 =
																														((bool_t) 0);
																												}
																											else
																												{	/* Inline/recursion.scm 156 */
																													BgL_test2065z00_3040 =
																														BGl_inlinezd2appzf3z21zzinline_appz00
																														(((BgL_variablez00_bglt) BgL_localz00_1565), (long) CINT(BgL_newzd2kfactorzd2_1580), BgL_callzd2siza7ez75_1609, BgL_stackz00_9);
																										}}
																									else
																										{	/* Inline/recursion.scm 153 */
																											BgL_test2065z00_3040 =
																												((bool_t) 0);
																										}
																								}
																							else
																								{	/* Inline/recursion.scm 152 */
																									BgL_test2065z00_3040 =
																										((bool_t) 0);
																								}
																							if (BgL_test2065z00_3040)
																								{	/* Inline/recursion.scm 152 */
																									return
																										BGl_unrollzd2callzd2zzinline_recursionz00
																										(BgL_variablez00_1564,
																										BgL_nodez00_7,
																										BgL_localz00_1565,
																										BgL_newzd2kfactorzd2_1580,
																										BgL_newzd2callzd2_1608,
																										BgL_stackz00_9);
																								}
																							else
																								{	/* Inline/recursion.scm 152 */
																									return
																										((obj_t)
																										BGl_plainzd2callzd2zzinline_recursionz00
																										(BgL_variablez00_1564,
																											BgL_nodez00_7,
																											BgL_localz00_1565,
																											BgL_newzd2callzd2_1608,
																											BgL_stackz00_9));
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



/* plain-call */
	BgL_letzd2funzd2_bglt
		BGl_plainzd2callzd2zzinline_recursionz00(BgL_variablez00_bglt
		BgL_variablez00_10, BgL_nodez00_bglt BgL_nodez00_11,
		BgL_localz00_bglt BgL_localz00_12, BgL_appz00_bglt BgL_newzd2callzd2_13,
		obj_t BgL_stackz00_14)
	{
		{	/* Inline/recursion.scm 164 */
			BGl_shrinkzd2argsz12zc0zzinline_variantz00(BgL_variablez00_10);
			{	/* Inline/recursion.scm 174 */
				obj_t BgL_ilocz00_1693;

				{	/* Inline/recursion.scm 174 */
					bool_t BgL_test2069z00_3054;

					{	/* Inline/recursion.scm 174 */
						bool_t BgL_res1943z00_2270;

						BgL_res1943z00_2270 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_variablez00_10), BGl_globalz00zzast_varz00);
						BgL_test2069z00_3054 = BgL_res1943z00_2270;
					}
					if (BgL_test2069z00_3054)
						{	/* Inline/recursion.scm 175 */
							bool_t BgL_test2070z00_3057;

							{	/* Inline/recursion.scm 175 */
								obj_t BgL_arg1575z00_1704;

								BgL_arg1575z00_1704 =
									(((BgL_globalz00_bglt) COBJECT(
											((BgL_globalz00_bglt) BgL_variablez00_10)))->
									BgL_modulez00);
								BgL_test2070z00_3057 =
									(BgL_arg1575z00_1704 ==
									BGl_za2moduleza2z00zzmodule_modulez00);
							}
							if (BgL_test2070z00_3057)
								{	/* Inline/recursion.scm 175 */
									BgL_ilocz00_1693 = BFALSE;
								}
							else
								{	/* Inline/recursion.scm 175 */
									BgL_ilocz00_1693 =
										(((BgL_nodez00_bglt) COBJECT(BgL_nodez00_11))->BgL_locz00);
								}
						}
					else
						{	/* Inline/recursion.scm 174 */
							BgL_ilocz00_1693 = BFALSE;
						}
				}
				{	/* Inline/recursion.scm 177 */
					BgL_letzd2funzd2_bglt BgL_new1131z00_1694;

					{	/* Inline/recursion.scm 178 */
						BgL_letzd2funzd2_bglt BgL_new1130z00_1700;

						BgL_new1130z00_1700 =
							((BgL_letzd2funzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_letzd2funzd2_bgl))));
						{	/* Inline/recursion.scm 178 */
							long BgL_arg1573z00_1701;

							{	/* Inline/recursion.scm 178 */
								long BgL_res1944z00_2274;

								BgL_res1944z00_2274 =
									BGL_CLASS_INDEX(BGl_letzd2funzd2zzast_nodez00);
								BgL_arg1573z00_1701 = BgL_res1944z00_2274;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1130z00_1700),
								BgL_arg1573z00_1701);
						}
						{	/* Inline/recursion.scm 178 */
							BgL_objectz00_bglt BgL_tmpz00_3066;

							BgL_tmpz00_3066 = ((BgL_objectz00_bglt) BgL_new1130z00_1700);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3066, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1130z00_1700);
						BgL_new1131z00_1694 = BgL_new1130z00_1700;
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1131z00_1694)))->BgL_locz00) =
						((obj_t) (((BgL_nodez00_bglt) COBJECT(BgL_nodez00_11))->
								BgL_locz00)), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1131z00_1694)))->BgL_typez00) =
						((BgL_typez00_bglt) (((BgL_nodez00_bglt) COBJECT(BgL_nodez00_11))->
								BgL_typez00)), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1131z00_1694)))->BgL_sidezd2effectzd2) =
						((obj_t) BUNSPEC), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1131z00_1694)))->BgL_keyz00) =
						((obj_t) BINT(((long) -1))), BUNSPEC);
					{
						obj_t BgL_auxz00_3081;

						{	/* Inline/recursion.scm 180 */
							obj_t BgL_list1562z00_1695;

							BgL_list1562z00_1695 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_localz00_12), BNIL);
							BgL_auxz00_3081 = BgL_list1562z00_1695;
						}
						((((BgL_letzd2funzd2_bglt) COBJECT(BgL_new1131z00_1694))->
								BgL_localsz00) = ((obj_t) BgL_auxz00_3081), BUNSPEC);
					}
					{
						BgL_nodez00_bglt BgL_auxz00_3085;

						{	/* Inline/recursion.scm 181 */
							obj_t BgL_arg1564z00_1696;
							obj_t BgL_arg1565z00_1697;

							{	/* Inline/recursion.scm 181 */
								obj_t BgL_list1566z00_1698;

								BgL_list1566z00_1698 =
									MAKE_YOUNG_PAIR(((obj_t) BgL_variablez00_10), BNIL);
								BgL_arg1564z00_1696 = BgL_list1566z00_1698;
							}
							{	/* Inline/recursion.scm 181 */
								obj_t BgL_list1567z00_1699;

								BgL_list1567z00_1699 =
									MAKE_YOUNG_PAIR(((obj_t) BgL_localz00_12), BNIL);
								BgL_arg1565z00_1697 = BgL_list1567z00_1699;
							}
							BgL_auxz00_3085 =
								BGl_alphatiza7eza7zzast_alphatiza7eza7(BgL_arg1564z00_1696,
								BgL_arg1565z00_1697, BgL_ilocz00_1693,
								((BgL_nodez00_bglt) BgL_newzd2callzd2_13));
						}
						((((BgL_letzd2funzd2_bglt) COBJECT(BgL_new1131z00_1694))->
								BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_auxz00_3085), BUNSPEC);
					}
					return BgL_new1131z00_1694;
				}
			}
		}

	}



/* unroll-call */
	obj_t BGl_unrollzd2callzd2zzinline_recursionz00(BgL_variablez00_bglt
		BgL_variablez00_15, BgL_nodez00_bglt BgL_nodez00_16,
		BgL_localz00_bglt BgL_localz00_17, obj_t BgL_kfactorz00_18,
		BgL_appz00_bglt BgL_callz00_19, obj_t BgL_stackz00_20)
	{
		{	/* Inline/recursion.scm 187 */
			{	/* Inline/recursion.scm 193 */
				obj_t BgL_ilocz00_1705;

				{	/* Inline/recursion.scm 193 */
					bool_t BgL_test2071z00_3093;

					{	/* Inline/recursion.scm 193 */
						bool_t BgL_res1948z00_2283;

						BgL_res1948z00_2283 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_variablez00_15), BGl_globalz00zzast_varz00);
						BgL_test2071z00_3093 = BgL_res1948z00_2283;
					}
					if (BgL_test2071z00_3093)
						{	/* Inline/recursion.scm 194 */
							bool_t BgL_test2072z00_3096;

							{	/* Inline/recursion.scm 194 */
								obj_t BgL_arg1604z00_1728;

								BgL_arg1604z00_1728 =
									(((BgL_globalz00_bglt) COBJECT(
											((BgL_globalz00_bglt) BgL_variablez00_15)))->
									BgL_modulez00);
								BgL_test2072z00_3096 =
									(BgL_arg1604z00_1728 ==
									BGl_za2moduleza2z00zzmodule_modulez00);
							}
							if (BgL_test2072z00_3096)
								{	/* Inline/recursion.scm 194 */
									BgL_ilocz00_1705 = BFALSE;
								}
							else
								{	/* Inline/recursion.scm 194 */
									BgL_ilocz00_1705 =
										(((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt) BgL_callz00_19)))->BgL_locz00);
								}
						}
					else
						{	/* Inline/recursion.scm 193 */
							BgL_ilocz00_1705 = BFALSE;
						}
				}
				{	/* Inline/recursion.scm 193 */
					BgL_nodez00_bglt BgL_newzd2callzd2_1706;

					{	/* Inline/recursion.scm 196 */
						obj_t BgL_arg1593z00_1722;
						obj_t BgL_arg1597z00_1723;

						{	/* Inline/recursion.scm 196 */
							obj_t BgL_list1598z00_1724;

							BgL_list1598z00_1724 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_variablez00_15), BNIL);
							BgL_arg1593z00_1722 = BgL_list1598z00_1724;
						}
						{	/* Inline/recursion.scm 196 */
							obj_t BgL_list1599z00_1725;

							BgL_list1599z00_1725 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_localz00_17), BNIL);
							BgL_arg1597z00_1723 = BgL_list1599z00_1725;
						}
						BgL_newzd2callzd2_1706 =
							BGl_alphatiza7eza7zzast_alphatiza7eza7(BgL_arg1593z00_1722,
							BgL_arg1597z00_1723, BgL_ilocz00_1705,
							((BgL_nodez00_bglt) BgL_callz00_19));
					}
					{	/* Inline/recursion.scm 197 */
						BgL_nodez00_bglt BgL_newzd2bodyzd2_1708;

						{	/* Inline/recursion.scm 200 */
							obj_t BgL_arg1589z00_1720;

							BgL_arg1589z00_1720 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_localz00_17), BgL_stackz00_20);
							BgL_newzd2bodyzd2_1708 =
								BGl_inlinezd2appzd2simplez00zzinline_simplez00
								(BgL_newzd2callzd2_1706, (long) CINT(BgL_kfactorz00_18),
								BgL_arg1589z00_1720, BGl_string1986z00zzinline_recursionz00);
						}
						{	/* Inline/recursion.scm 198 */

							BGl_shrinkzd2argsz12zc0zzinline_variantz00(BgL_variablez00_15);
							{	/* Inline/recursion.scm 209 */
								obj_t BgL__z00_1709;

								{	/* Inline/recursion.scm 213 */
									BgL_nodez00_bglt BgL_arg1578z00_1711;

									{	/* Inline/recursion.scm 213 */
										obj_t BgL_zc3z04anonymousza31583ze3z87_2439;

										BgL_zc3z04anonymousza31583ze3z87_2439 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31583ze3ze5zzinline_recursionz00,
											(int) (((long) 1)), (int) (((long) 1)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31583ze3z87_2439,
											(int) (((long) 0)), ((obj_t) BgL_localz00_17));
										BgL_arg1578z00_1711 =
											BGl_nestzd2loopz12zc0zzinline_loopz00
											(BgL_newzd2bodyzd2_1708, BgL_localz00_17,
											BgL_zc3z04anonymousza31583ze3z87_2439);
									}
									BgL__z00_1709 =
										BGl_nodezd2csez12zc0zzreduce_csez00(BgL_arg1578z00_1711,
										BNIL);
								}
								{	/* Inline/recursion.scm 210 */
									obj_t BgL_nodez00_1710;

									{	/* Inline/recursion.scm 210 */
										int BgL_tmpz00_3121;

										BgL_tmpz00_3121 = (int) (((long) 1));
										BgL_nodez00_1710 = BGL_MVALUES_VAL(BgL_tmpz00_3121);
									}
									return BgL_nodez00_1710;
								}
							}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1583> */
	obj_t BGl_z62zc3z04anonymousza31583ze3ze5zzinline_recursionz00(obj_t
		BgL_envz00_2440, obj_t BgL_nodez00_2442)
	{
		{	/* Inline/recursion.scm 212 */
			{	/* Inline/recursion.scm 213 */
				BgL_localz00_bglt BgL_localz00_2441;

				BgL_localz00_2441 =
					((BgL_localz00_bglt)
					PROCEDURE_REF(BgL_envz00_2440, (int) (((long) 0))));
				{
					BgL_letzd2funzd2_bglt BgL_auxz00_3127;

					{	/* Inline/recursion.scm 213 */
						BgL_letzd2funzd2_bglt BgL_new1135z00_2577;

						{	/* Inline/recursion.scm 214 */
							BgL_letzd2funzd2_bglt BgL_new1134z00_2578;

							BgL_new1134z00_2578 =
								((BgL_letzd2funzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_letzd2funzd2_bgl))));
							{	/* Inline/recursion.scm 214 */
								long BgL_arg1588z00_2579;

								{	/* Inline/recursion.scm 214 */
									long BgL_res1953z00_2580;

									BgL_res1953z00_2580 =
										BGL_CLASS_INDEX(BGl_letzd2funzd2zzast_nodez00);
									BgL_arg1588z00_2579 = BgL_res1953z00_2580;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1134z00_2578),
									BgL_arg1588z00_2579);
							}
							{	/* Inline/recursion.scm 214 */
								BgL_objectz00_bglt BgL_tmpz00_3132;

								BgL_tmpz00_3132 = ((BgL_objectz00_bglt) BgL_new1134z00_2578);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3132, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1134z00_2578);
							BgL_new1135z00_2577 = BgL_new1134z00_2578;
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_new1135z00_2577)))->BgL_locz00) =
							((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_nodez00_2442)))->BgL_locz00)), BUNSPEC);
						((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
											BgL_new1135z00_2577)))->BgL_typez00) =
							((BgL_typez00_bglt) (((BgL_nodez00_bglt)
										COBJECT(((BgL_nodez00_bglt) BgL_nodez00_2442)))->
									BgL_typez00)), BUNSPEC);
						((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
											BgL_new1135z00_2577)))->BgL_sidezd2effectzd2) =
							((obj_t) BUNSPEC), BUNSPEC);
						((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
											BgL_new1135z00_2577)))->BgL_keyz00) =
							((obj_t) BINT(((long) -1))), BUNSPEC);
						{
							obj_t BgL_auxz00_3149;

							{	/* Inline/recursion.scm 217 */
								obj_t BgL_list1584z00_2581;

								BgL_list1584z00_2581 =
									MAKE_YOUNG_PAIR(((obj_t) BgL_localz00_2441), BNIL);
								BgL_auxz00_3149 = BgL_list1584z00_2581;
							}
							((((BgL_letzd2funzd2_bglt) COBJECT(BgL_new1135z00_2577))->
									BgL_localsz00) = ((obj_t) BgL_auxz00_3149), BUNSPEC);
						}
						((((BgL_letzd2funzd2_bglt) COBJECT(BgL_new1135z00_2577))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_nodez00_2442)),
							BUNSPEC);
						BgL_auxz00_3127 = BgL_new1135z00_2577;
					}
					return ((obj_t) BgL_auxz00_3127);
				}
			}
		}

	}



/* is-recursive? */
	BGL_EXPORTED_DEF bool_t
		BGl_iszd2recursivezf3z21zzinline_recursionz00(BgL_variablez00_bglt
		BgL_varz00_21)
	{
		{	/* Inline/recursion.scm 224 */
			{	/* Inline/recursion.scm 226 */
				BgL_valuez00_bglt BgL_sfunz00_1729;

				BgL_sfunz00_1729 =
					(((BgL_variablez00_bglt) COBJECT(BgL_varz00_21))->BgL_valuez00);
				{	/* Inline/recursion.scm 227 */
					bool_t BgL_test2073z00_3157;

					{	/* Inline/recursion.scm 227 */
						bool_t BgL_res1955z00_2299;

						BgL_res1955z00_2299 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_sfunz00_1729), BGl_isfunz00zzinline_inlinez00);
						BgL_test2073z00_3157 = BgL_res1955z00_2299;
					}
					if (BgL_test2073z00_3157)
						{	/* Inline/recursion.scm 236 */
							bool_t BgL_test2074z00_3160;

							{	/* Inline/recursion.scm 236 */
								obj_t BgL_arg1627z00_1740;

								{
									BgL_isfunz00_bglt BgL_auxz00_3161;

									{
										obj_t BgL_auxz00_3162;

										{	/* Inline/recursion.scm 236 */
											BgL_objectz00_bglt BgL_tmpz00_3163;

											BgL_tmpz00_3163 =
												((BgL_objectz00_bglt)
												((BgL_sfunz00_bglt) BgL_sfunz00_1729));
											BgL_auxz00_3162 = BGL_OBJECT_WIDENING(BgL_tmpz00_3163);
										}
										BgL_auxz00_3161 = ((BgL_isfunz00_bglt) BgL_auxz00_3162);
									}
									BgL_arg1627z00_1740 =
										(((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3161))->
										BgL_recursivezd2callszd2);
								}
								BgL_test2074z00_3160 = PAIRP(BgL_arg1627z00_1740);
							}
							if (BgL_test2074z00_3160)
								{	/* Inline/recursion.scm 236 */
									return ((bool_t) 1);
								}
							else
								{	/* Inline/recursion.scm 238 */
									bool_t BgL_test2075z00_3170;

									{	/* Inline/recursion.scm 238 */
										obj_t BgL_arg1626z00_1739;

										{
											BgL_isfunz00_bglt BgL_auxz00_3171;

											{
												obj_t BgL_auxz00_3172;

												{	/* Inline/recursion.scm 238 */
													BgL_objectz00_bglt BgL_tmpz00_3173;

													BgL_tmpz00_3173 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_sfunz00_1729));
													BgL_auxz00_3172 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3173);
												}
												BgL_auxz00_3171 = ((BgL_isfunz00_bglt) BgL_auxz00_3172);
											}
											BgL_arg1626z00_1739 =
												(((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3171))->
												BgL_recursivezd2callszd2);
										}
										BgL_test2075z00_3170 = NULLP(BgL_arg1626z00_1739);
									}
									if (BgL_test2075z00_3170)
										{	/* Inline/recursion.scm 238 */
											return ((bool_t) 0);
										}
									else
										{	/* Inline/recursion.scm 241 */
											obj_t BgL_trecz00_1735;

											{	/* Inline/recursion.scm 241 */
												obj_t BgL_res1958z00_2306;

												BgL_res1958z00_2306 = MAKE_YOUNG_CELL(BTRUE);
												BgL_trecz00_1735 = BgL_res1958z00_2306;
											}
											{	/* Inline/recursion.scm 241 */
												obj_t BgL_callsz00_1736;

												{	/* Inline/recursion.scm 243 */
													BgL_nodez00_bglt BgL_arg1624z00_1738;

													{
														BgL_isfunz00_bglt BgL_auxz00_3181;

														{
															obj_t BgL_auxz00_3182;

															{	/* Inline/recursion.scm 243 */
																BgL_objectz00_bglt BgL_tmpz00_3183;

																BgL_tmpz00_3183 =
																	((BgL_objectz00_bglt)
																	((BgL_sfunz00_bglt) BgL_sfunz00_1729));
																BgL_auxz00_3182 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_3183);
															}
															BgL_auxz00_3181 =
																((BgL_isfunz00_bglt) BgL_auxz00_3182);
														}
														BgL_arg1624z00_1738 =
															(((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3181))->
															BgL_originalzd2bodyzd2);
													}
													BgL_callsz00_1736 =
														BGl_findzd2recursivezd2callsz00zzinline_recursionz00
														(BgL_arg1624z00_1738, BgL_varz00_21, BTRUE,
														BgL_trecz00_1735);
												}
												{	/* Inline/recursion.scm 242 */

													{	/* Inline/recursion.scm 244 */
														obj_t BgL_arg1613z00_1737;

														BgL_arg1613z00_1737 = CELL_REF(BgL_trecz00_1735);
														{	/* Inline/recursion.scm 244 */
															bool_t BgL_vz00_2311;

															BgL_vz00_2311 = CBOOL(BgL_arg1613z00_1737);
															{
																BgL_isfunz00_bglt BgL_auxz00_3192;

																{
																	obj_t BgL_auxz00_3193;

																	{	/* Inline/recursion.scm 244 */
																		BgL_objectz00_bglt BgL_tmpz00_3194;

																		BgL_tmpz00_3194 =
																			((BgL_objectz00_bglt)
																			((BgL_sfunz00_bglt) BgL_sfunz00_1729));
																		BgL_auxz00_3193 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3194);
																	}
																	BgL_auxz00_3192 =
																		((BgL_isfunz00_bglt) BgL_auxz00_3193);
																}
																((((BgL_isfunz00_bglt)
																			COBJECT(BgL_auxz00_3192))->
																		BgL_tailrecz00) =
																	((bool_t) BgL_vz00_2311), BUNSPEC);
															}
														}
													}
													{
														BgL_isfunz00_bglt BgL_auxz00_3200;

														{
															obj_t BgL_auxz00_3201;

															{	/* Inline/recursion.scm 245 */
																BgL_objectz00_bglt BgL_tmpz00_3202;

																BgL_tmpz00_3202 =
																	((BgL_objectz00_bglt)
																	((BgL_sfunz00_bglt) BgL_sfunz00_1729));
																BgL_auxz00_3201 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_3202);
															}
															BgL_auxz00_3200 =
																((BgL_isfunz00_bglt) BgL_auxz00_3201);
														}
														((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3200))->
																BgL_recursivezd2callszd2) =
															((obj_t) BgL_callsz00_1736), BUNSPEC);
													}
													return PAIRP(BgL_callsz00_1736);
												}
											}
										}
								}
						}
					else
						{	/* Inline/recursion.scm 228 */
							obj_t BgL_trecz00_1741;

							{	/* Inline/recursion.scm 228 */
								obj_t BgL_res1960z00_2316;

								BgL_res1960z00_2316 = MAKE_YOUNG_CELL(BTRUE);
								BgL_trecz00_1741 = BgL_res1960z00_2316;
							}
							{	/* Inline/recursion.scm 228 */
								obj_t BgL_callsz00_1742;

								{	/* Inline/recursion.scm 229 */
									obj_t BgL_arg1634z00_1748;

									BgL_arg1634z00_1748 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_sfunz00_1729)))->BgL_bodyz00);
									BgL_callsz00_1742 =
										BGl_findzd2recursivezd2callsz00zzinline_recursionz00(
										((BgL_nodez00_bglt) BgL_arg1634z00_1748), BgL_varz00_21,
										BTRUE, BgL_trecz00_1741);
								}
								{	/* Inline/recursion.scm 229 */

									{	/* Inline/recursion.scm 230 */
										BgL_isfunz00_bglt BgL_wide1138z00_1745;

										BgL_wide1138z00_1745 =
											((BgL_isfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_isfunz00_bgl))));
										{	/* Inline/recursion.scm 230 */
											obj_t BgL_auxz00_3219;
											BgL_objectz00_bglt BgL_tmpz00_3215;

											BgL_auxz00_3219 = ((obj_t) BgL_wide1138z00_1745);
											BgL_tmpz00_3215 =
												((BgL_objectz00_bglt)
												((BgL_sfunz00_bglt)
													((BgL_sfunz00_bglt) BgL_sfunz00_1729)));
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3215, BgL_auxz00_3219);
										}
										((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt)
												((BgL_sfunz00_bglt) BgL_sfunz00_1729)));
										{	/* Inline/recursion.scm 230 */
											long BgL_arg1631z00_1746;

											{	/* Inline/recursion.scm 230 */
												long BgL_res1961z00_2320;

												BgL_res1961z00_2320 =
													BGL_CLASS_INDEX(BGl_isfunz00zzinline_inlinez00);
												BgL_arg1631z00_1746 = BgL_res1961z00_2320;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_sfunz00_1729))),
												BgL_arg1631z00_1746);
										}
										((BgL_sfunz00_bglt)
											((BgL_sfunz00_bglt)
												((BgL_sfunz00_bglt) BgL_sfunz00_1729)));
									}
									{
										BgL_isfunz00_bglt BgL_auxz00_3233;

										{
											obj_t BgL_auxz00_3234;

											{	/* Inline/recursion.scm 232 */
												BgL_objectz00_bglt BgL_tmpz00_3235;

												BgL_tmpz00_3235 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_sfunz00_1729)));
												BgL_auxz00_3234 = BGL_OBJECT_WIDENING(BgL_tmpz00_3235);
											}
											BgL_auxz00_3233 = ((BgL_isfunz00_bglt) BgL_auxz00_3234);
										}
										((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3233))->
												BgL_originalzd2bodyzd2) =
											((BgL_nodez00_bglt) ((BgL_nodez00_bglt) ((
															(BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
																	BgL_sfunz00_1729)))->BgL_bodyz00))), BUNSPEC);
									}
									{
										BgL_isfunz00_bglt BgL_auxz00_3245;

										{
											obj_t BgL_auxz00_3246;

											{	/* Inline/recursion.scm 233 */
												BgL_objectz00_bglt BgL_tmpz00_3247;

												BgL_tmpz00_3247 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_sfunz00_1729)));
												BgL_auxz00_3246 = BGL_OBJECT_WIDENING(BgL_tmpz00_3247);
											}
											BgL_auxz00_3245 = ((BgL_isfunz00_bglt) BgL_auxz00_3246);
										}
										((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3245))->
												BgL_recursivezd2callszd2) =
											((obj_t) BgL_callsz00_1742), BUNSPEC);
									}
									{
										BgL_isfunz00_bglt BgL_auxz00_3254;

										{
											obj_t BgL_auxz00_3255;

											{	/* Inline/recursion.scm 231 */
												BgL_objectz00_bglt BgL_tmpz00_3256;

												BgL_tmpz00_3256 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt)
														((BgL_sfunz00_bglt) BgL_sfunz00_1729)));
												BgL_auxz00_3255 = BGL_OBJECT_WIDENING(BgL_tmpz00_3256);
											}
											BgL_auxz00_3254 = ((BgL_isfunz00_bglt) BgL_auxz00_3255);
										}
										((((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_3254))->
												BgL_tailrecz00) =
											((bool_t) CBOOL(CELL_REF(BgL_trecz00_1741))), BUNSPEC);
									}
									((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_sfunz00_1729));
									return PAIRP(BgL_callsz00_1742);
								}
							}
						}
				}
			}
		}

	}



/* &is-recursive? */
	obj_t BGl_z62iszd2recursivezf3z43zzinline_recursionz00(obj_t BgL_envz00_2443,
		obj_t BgL_varz00_2444)
	{
		{	/* Inline/recursion.scm 224 */
			return
				BBOOL(BGl_iszd2recursivezf3z21zzinline_recursionz00(
					((BgL_variablez00_bglt) BgL_varz00_2444)));
		}

	}



/* find-recursive-calls* */
	obj_t BGl_findzd2recursivezd2callsza2za2zzinline_recursionz00(obj_t
		BgL_nodeza2za2_98, obj_t BgL_varz00_99, obj_t BgL_tailz00_100,
		obj_t BgL_tresz00_101)
	{
		{	/* Inline/recursion.scm 410 */
			{
				obj_t BgL_nodeza2za2_1751;
				obj_t BgL_callsz00_1752;

				BgL_nodeza2za2_1751 = BgL_nodeza2za2_98;
				BgL_callsz00_1752 = BNIL;
			BgL_zc3z04anonymousza31635ze3z87_1753:
				if (NULLP(BgL_nodeza2za2_1751))
					{	/* Inline/recursion.scm 414 */
						return BgL_callsz00_1752;
					}
				else
					{	/* Inline/recursion.scm 414 */
						if (NULLP(CDR(((obj_t) BgL_nodeza2za2_1751))))
							{	/* Inline/recursion.scm 417 */
								obj_t BgL_arg1644z00_1757;

								{	/* Inline/recursion.scm 417 */
									obj_t BgL_arg1652z00_1758;

									BgL_arg1652z00_1758 = CAR(((obj_t) BgL_nodeza2za2_1751));
									BgL_arg1644z00_1757 =
										BGl_findzd2recursivezd2callsz00zzinline_recursionz00(
										((BgL_nodez00_bglt) BgL_arg1652z00_1758),
										((BgL_variablez00_bglt) BgL_varz00_99), BgL_tailz00_100,
										BgL_tresz00_101);
								}
								return
									BGl_appendzd221011zd2zzinline_recursionz00
									(BgL_arg1644z00_1757, BgL_callsz00_1752);
							}
						else
							{	/* Inline/recursion.scm 419 */
								obj_t BgL_arg1662z00_1759;
								obj_t BgL_arg1663z00_1760;

								BgL_arg1662z00_1759 = CDR(((obj_t) BgL_nodeza2za2_1751));
								{	/* Inline/recursion.scm 420 */
									obj_t BgL_arg1664z00_1761;

									{	/* Inline/recursion.scm 420 */
										obj_t BgL_arg1667z00_1762;

										BgL_arg1667z00_1762 = CAR(((obj_t) BgL_nodeza2za2_1751));
										BgL_arg1664z00_1761 =
											BGl_findzd2recursivezd2callsz00zzinline_recursionz00(
											((BgL_nodez00_bglt) BgL_arg1667z00_1762),
											((BgL_variablez00_bglt) BgL_varz00_99), BFALSE,
											BgL_tresz00_101);
									}
									BgL_arg1663z00_1760 =
										BGl_appendzd221011zd2zzinline_recursionz00
										(BgL_arg1664z00_1761, BgL_callsz00_1752);
								}
								{
									obj_t BgL_callsz00_3292;
									obj_t BgL_nodeza2za2_3291;

									BgL_nodeza2za2_3291 = BgL_arg1662z00_1759;
									BgL_callsz00_3292 = BgL_arg1663z00_1760;
									BgL_callsz00_1752 = BgL_callsz00_3292;
									BgL_nodeza2za2_1751 = BgL_nodeza2za2_3291;
									goto BgL_zc3z04anonymousza31635ze3z87_1753;
								}
							}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzinline_recursionz00()
	{
		{	/* Inline/recursion.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinline_recursionz00()
	{
		{	/* Inline/recursion.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_proc1987z00zzinline_recursionz00, BGl_nodez00zzast_nodez00,
				BGl_string1988z00zzinline_recursionz00);
		}

	}



/* &find-recursive-calls1296 */
	obj_t BGl_z62findzd2recursivezd2calls1296z62zzinline_recursionz00(obj_t
		BgL_envz00_2446, obj_t BgL_nodez00_2447, obj_t BgL_varz00_2448,
		obj_t BgL_tailz00_2449, obj_t BgL_tresz00_2450)
	{
		{	/* Inline/recursion.scm 251 */
			return BNIL;
		}

	}



/* find-recursive-calls */
	obj_t BGl_findzd2recursivezd2callsz00zzinline_recursionz00(BgL_nodez00_bglt
		BgL_nodez00_22, BgL_variablez00_bglt BgL_varz00_23, obj_t BgL_tailz00_24,
		obj_t BgL_tresz00_25)
	{
		{	/* Inline/recursion.scm 251 */
			{	/* Inline/recursion.scm 251 */
				obj_t BgL_method1297z00_1772;

				{	/* Inline/recursion.scm 251 */
					obj_t BgL_res1977z00_2371;

					{	/* Inline/recursion.scm 251 */
						long BgL_objzd2classzd2numz00_2336;

						{	/* Inline/recursion.scm 251 */
							long BgL_res1965z00_2339;

							BgL_res1965z00_2339 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_22));
							BgL_objzd2classzd2numz00_2336 = BgL_res1965z00_2339;
						}
						{	/* Inline/recursion.scm 251 */
							obj_t BgL_arg1813z00_2337;

							BgL_arg1813z00_2337 =
								PROCEDURE_REF
								(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
								(int) (((long) 1)));
							{	/* Inline/recursion.scm 251 */
								int BgL_offsetz00_2341;

								BgL_offsetz00_2341 = (int) (BgL_objzd2classzd2numz00_2336);
								{	/* Inline/recursion.scm 251 */
									long BgL_offsetz00_2342;

									BgL_offsetz00_2342 =
										((long) (BgL_offsetz00_2341) - OBJECT_TYPE);
									{	/* Inline/recursion.scm 251 */
										long BgL_modz00_2343;

										BgL_modz00_2343 =
											(BgL_offsetz00_2342 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Inline/recursion.scm 251 */
											long BgL_restz00_2345;

											BgL_restz00_2345 =
												(BgL_offsetz00_2342 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Inline/recursion.scm 251 */

												{	/* Inline/recursion.scm 251 */
													obj_t BgL_bucketz00_2347;

													BgL_bucketz00_2347 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2337), BgL_modz00_2343);
													BgL_res1977z00_2371 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2347), BgL_restz00_2345);
					}}}}}}}}
					BgL_method1297z00_1772 = BgL_res1977z00_2371;
				}
				return
					PROCEDURE_ENTRY(BgL_method1297z00_1772) (BgL_method1297z00_1772,
					((obj_t) BgL_nodez00_22),
					((obj_t) BgL_varz00_23), BgL_tailz00_24, BgL_tresz00_25, BEOA);
			}
		}

	}



/* &find-recursive-calls */
	obj_t BGl_z62findzd2recursivezd2callsz62zzinline_recursionz00(obj_t
		BgL_envz00_2451, obj_t BgL_nodez00_2452, obj_t BgL_varz00_2453,
		obj_t BgL_tailz00_2454, obj_t BgL_tresz00_2455)
	{
		{	/* Inline/recursion.scm 251 */
			return
				BGl_findzd2recursivezd2callsz00zzinline_recursionz00(
				((BgL_nodez00_bglt) BgL_nodez00_2452),
				((BgL_variablez00_bglt) BgL_varz00_2453), BgL_tailz00_2454,
				BgL_tresz00_2455);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinline_recursionz00()
	{
		{	/* Inline/recursion.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_sequencez00zzast_nodez00, BGl_proc1989z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_syncz00zzast_nodez00, BGl_proc1991z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_appz00zzast_nodez00, BGl_proc1992z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1993z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_funcallz00zzast_nodez00, BGl_proc1994z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_externz00zzast_nodez00, BGl_proc1995z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_castz00zzast_nodez00, BGl_proc1996z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_setqz00zzast_nodez00, BGl_proc1997z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1998z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_failz00zzast_nodez00, BGl_proc1999z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_switchz00zzast_nodez00, BGl_proc2000z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2001z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2002z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2003z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc2004z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2005z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2006z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2recursivezd2callszd2envzd2zzinline_recursionz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2007z00zzinline_recursionz00,
				BGl_string1990z00zzinline_recursionz00);
		}

	}



/* &find-recursive-calls1333 */
	obj_t BGl_z62findzd2recursivezd2calls1333z62zzinline_recursionz00(obj_t
		BgL_envz00_2474, obj_t BgL_nodez00_2475, obj_t BgL_vz00_2476,
		obj_t BgL_tailz00_2477, obj_t BgL_tresz00_2478)
	{
		{	/* Inline/recursion.scm 402 */
			{	/* Inline/recursion.scm 404 */
				obj_t BgL_arg1847z00_2585;
				obj_t BgL_arg1848z00_2586;

				{	/* Inline/recursion.scm 404 */
					BgL_varz00_bglt BgL_arg1850z00_2587;

					BgL_arg1850z00_2587 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2475)))->BgL_varz00);
					BgL_arg1847z00_2585 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00(
						((BgL_nodez00_bglt) BgL_arg1850z00_2587),
						((BgL_variablez00_bglt) BgL_vz00_2476), BFALSE, BgL_tresz00_2478);
				}
				{	/* Inline/recursion.scm 405 */
					BgL_nodez00_bglt BgL_arg1851z00_2588;

					BgL_arg1851z00_2588 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2475)))->BgL_valuez00);
					BgL_arg1848z00_2586 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1851z00_2588, ((BgL_variablez00_bglt) BgL_vz00_2476),
						BFALSE, BgL_tresz00_2478);
				}
				return
					BGl_appendzd221011zd2zzinline_recursionz00(BgL_arg1847z00_2585,
					BgL_arg1848z00_2586);
			}
		}

	}



/* &find-recursive-calls1331 */
	obj_t BGl_z62findzd2recursivezd2calls1331z62zzinline_recursionz00(obj_t
		BgL_envz00_2479, obj_t BgL_nodez00_2480, obj_t BgL_varz00_2481,
		obj_t BgL_tailz00_2482, obj_t BgL_tresz00_2483)
	{
		{	/* Inline/recursion.scm 396 */
			{	/* Inline/recursion.scm 397 */
				BgL_varz00_bglt BgL_arg1846z00_2590;

				BgL_arg1846z00_2590 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_2480)))->BgL_varz00);
				return
					BGl_findzd2recursivezd2callsz00zzinline_recursionz00(
					((BgL_nodez00_bglt) BgL_arg1846z00_2590),
					((BgL_variablez00_bglt) BgL_varz00_2481), BFALSE, BgL_tresz00_2483);
			}
		}

	}



/* &find-recursive-calls1329 */
	obj_t BGl_z62findzd2recursivezd2calls1329z62zzinline_recursionz00(obj_t
		BgL_envz00_2484, obj_t BgL_nodez00_2485, obj_t BgL_varz00_2486,
		obj_t BgL_tailz00_2487, obj_t BgL_tresz00_2488)
	{
		{	/* Inline/recursion.scm 390 */
			{	/* Inline/recursion.scm 391 */
				BgL_nodez00_bglt BgL_arg1845z00_2592;

				BgL_arg1845z00_2592 =
					(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2485)))->BgL_valuez00);
				return
					BGl_findzd2recursivezd2callsz00zzinline_recursionz00
					(BgL_arg1845z00_2592, ((BgL_variablez00_bglt) BgL_varz00_2486),
					BFALSE, BgL_tresz00_2488);
			}
		}

	}



/* &find-recursive-calls1327 */
	obj_t BGl_z62findzd2recursivezd2calls1327z62zzinline_recursionz00(obj_t
		BgL_envz00_2489, obj_t BgL_nodez00_2490, obj_t BgL_vz00_2491,
		obj_t BgL_tailz00_2492, obj_t BgL_tresz00_2493)
	{
		{	/* Inline/recursion.scm 382 */
			{	/* Inline/recursion.scm 384 */
				obj_t BgL_arg1838z00_2594;
				obj_t BgL_arg1840z00_2595;

				{	/* Inline/recursion.scm 384 */
					BgL_nodez00_bglt BgL_arg1841z00_2596;

					BgL_arg1841z00_2596 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2490)))->BgL_exitz00);
					BgL_arg1838z00_2594 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1841z00_2596, ((BgL_variablez00_bglt) BgL_vz00_2491),
						BFALSE, BgL_tresz00_2493);
				}
				{	/* Inline/recursion.scm 385 */
					BgL_nodez00_bglt BgL_arg1842z00_2597;

					BgL_arg1842z00_2597 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2490)))->
						BgL_valuez00);
					BgL_arg1840z00_2595 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1842z00_2597, ((BgL_variablez00_bglt) BgL_vz00_2491),
						BFALSE, BgL_tresz00_2493);
				}
				return
					BGl_appendzd221011zd2zzinline_recursionz00(BgL_arg1838z00_2594,
					BgL_arg1840z00_2595);
			}
		}

	}



/* &find-recursive-calls1325 */
	obj_t BGl_z62findzd2recursivezd2calls1325z62zzinline_recursionz00(obj_t
		BgL_envz00_2494, obj_t BgL_nodez00_2495, obj_t BgL_varz00_2496,
		obj_t BgL_tailz00_2497, obj_t BgL_tresz00_2498)
	{
		{	/* Inline/recursion.scm 376 */
			{	/* Inline/recursion.scm 377 */
				BgL_nodez00_bglt BgL_arg1836z00_2599;

				BgL_arg1836z00_2599 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2495)))->BgL_bodyz00);
				return
					BGl_findzd2recursivezd2callsz00zzinline_recursionz00
					(BgL_arg1836z00_2599, ((BgL_variablez00_bglt) BgL_varz00_2496),
					BFALSE, BgL_tresz00_2498);
			}
		}

	}



/* &find-recursive-calls1323 */
	obj_t BGl_z62findzd2recursivezd2calls1323z62zzinline_recursionz00(obj_t
		BgL_envz00_2499, obj_t BgL_nodez00_2500, obj_t BgL_varz00_2501,
		obj_t BgL_tailz00_2502, obj_t BgL_tresz00_2503)
	{
		{	/* Inline/recursion.scm 364 */
			{	/* Inline/recursion.scm 365 */
				obj_t BgL_g1153z00_2601;
				obj_t BgL_g1154z00_2602;

				BgL_g1153z00_2601 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2500)))->BgL_bindingsz00);
				{	/* Inline/recursion.scm 366 */
					BgL_nodez00_bglt BgL_arg1835z00_2603;

					BgL_arg1835z00_2603 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2500)))->BgL_bodyz00);
					BgL_g1154z00_2602 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1835z00_2603, ((BgL_variablez00_bglt) BgL_varz00_2501),
						BgL_tailz00_2502, BgL_tresz00_2503);
				}
				{
					obj_t BgL_bindingsz00_2605;
					obj_t BgL_callsz00_2606;

					BgL_bindingsz00_2605 = BgL_g1153z00_2601;
					BgL_callsz00_2606 = BgL_g1154z00_2602;
				BgL_loopz00_2604:
					if (NULLP(BgL_bindingsz00_2605))
						{	/* Inline/recursion.scm 367 */
							return BgL_callsz00_2606;
						}
					else
						{	/* Inline/recursion.scm 369 */
							obj_t BgL_arg1829z00_2607;
							obj_t BgL_arg1830z00_2608;

							BgL_arg1829z00_2607 = CDR(((obj_t) BgL_bindingsz00_2605));
							{	/* Inline/recursion.scm 371 */
								obj_t BgL_arg1831z00_2609;

								{	/* Inline/recursion.scm 371 */
									obj_t BgL_arg1832z00_2610;

									{	/* Inline/recursion.scm 371 */
										obj_t BgL_pairz00_2611;

										BgL_pairz00_2611 = CAR(((obj_t) BgL_bindingsz00_2605));
										BgL_arg1832z00_2610 = CDR(BgL_pairz00_2611);
									}
									BgL_arg1831z00_2609 =
										BGl_findzd2recursivezd2callsz00zzinline_recursionz00(
										((BgL_nodez00_bglt) BgL_arg1832z00_2610),
										((BgL_variablez00_bglt) BgL_varz00_2501), BFALSE,
										BgL_tresz00_2503);
								}
								BgL_arg1830z00_2608 =
									BGl_appendzd221011zd2zzinline_recursionz00(BgL_callsz00_2606,
									BgL_arg1831z00_2609);
							}
							{
								obj_t BgL_callsz00_3399;
								obj_t BgL_bindingsz00_3398;

								BgL_bindingsz00_3398 = BgL_arg1829z00_2607;
								BgL_callsz00_3399 = BgL_arg1830z00_2608;
								BgL_callsz00_2606 = BgL_callsz00_3399;
								BgL_bindingsz00_2605 = BgL_bindingsz00_3398;
								goto BgL_loopz00_2604;
							}
						}
				}
			}
		}

	}



/* &find-recursive-calls1321 */
	obj_t BGl_z62findzd2recursivezd2calls1321z62zzinline_recursionz00(obj_t
		BgL_envz00_2504, obj_t BgL_nodez00_2505, obj_t BgL_varz00_2506,
		obj_t BgL_tailz00_2507, obj_t BgL_tresz00_2508)
	{
		{	/* Inline/recursion.scm 350 */
			{	/* Inline/recursion.scm 351 */
				obj_t BgL_g1148z00_2613;
				obj_t BgL_g1149z00_2614;

				BgL_g1148z00_2613 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2505)))->BgL_localsz00);
				{	/* Inline/recursion.scm 352 */
					BgL_nodez00_bglt BgL_arg1826z00_2615;

					BgL_arg1826z00_2615 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2505)))->BgL_bodyz00);
					BgL_g1149z00_2614 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1826z00_2615, ((BgL_variablez00_bglt) BgL_varz00_2506),
						BgL_tailz00_2507, BgL_tresz00_2508);
				}
				{
					obj_t BgL_localsz00_2617;
					obj_t BgL_callsz00_2618;

					BgL_localsz00_2617 = BgL_g1148z00_2613;
					BgL_callsz00_2618 = BgL_g1149z00_2614;
				BgL_loopz00_2616:
					if (NULLP(BgL_localsz00_2617))
						{	/* Inline/recursion.scm 353 */
							return BgL_callsz00_2618;
						}
					else
						{	/* Inline/recursion.scm 355 */
							obj_t BgL_arg1820z00_2619;
							obj_t BgL_arg1821z00_2620;

							BgL_arg1820z00_2619 = CDR(((obj_t) BgL_localsz00_2617));
							{	/* Inline/recursion.scm 358 */
								obj_t BgL_arg1822z00_2621;

								{	/* Inline/recursion.scm 358 */
									obj_t BgL_arg1823z00_2622;

									BgL_arg1823z00_2622 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt)
													(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt)
																		CAR(
																			((obj_t) BgL_localsz00_2617))))))->
														BgL_valuez00))))->BgL_bodyz00);
									BgL_arg1822z00_2621 =
										BGl_findzd2recursivezd2callsz00zzinline_recursionz00((
											(BgL_nodez00_bglt) BgL_arg1823z00_2622),
										((BgL_variablez00_bglt) BgL_varz00_2506), BTRUE,
										BgL_tresz00_2508);
								}
								BgL_arg1821z00_2620 =
									BGl_appendzd221011zd2zzinline_recursionz00(BgL_callsz00_2618,
									BgL_arg1822z00_2621);
							}
							{
								obj_t BgL_callsz00_3422;
								obj_t BgL_localsz00_3421;

								BgL_localsz00_3421 = BgL_arg1820z00_2619;
								BgL_callsz00_3422 = BgL_arg1821z00_2620;
								BgL_callsz00_2618 = BgL_callsz00_3422;
								BgL_localsz00_2617 = BgL_localsz00_3421;
								goto BgL_loopz00_2616;
							}
						}
				}
			}
		}

	}



/* &find-recursive-calls1319 */
	obj_t BGl_z62findzd2recursivezd2calls1319z62zzinline_recursionz00(obj_t
		BgL_envz00_2509, obj_t BgL_nodez00_2510, obj_t BgL_varz00_2511,
		obj_t BgL_tailz00_2512, obj_t BgL_tresz00_2513)
	{
		{	/* Inline/recursion.scm 338 */
			{	/* Inline/recursion.scm 339 */
				obj_t BgL_g1146z00_2624;
				obj_t BgL_g1147z00_2625;

				BgL_g1146z00_2624 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2510)))->BgL_clausesz00);
				{	/* Inline/recursion.scm 340 */
					BgL_nodez00_bglt BgL_arg1809z00_2626;

					BgL_arg1809z00_2626 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2510)))->BgL_testz00);
					BgL_g1147z00_2625 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1809z00_2626, ((BgL_variablez00_bglt) BgL_varz00_2511),
						BFALSE, BgL_tresz00_2513);
				}
				{
					obj_t BgL_clausesz00_2628;
					obj_t BgL_callsz00_2629;

					BgL_clausesz00_2628 = BgL_g1146z00_2624;
					BgL_callsz00_2629 = BgL_g1147z00_2625;
				BgL_loopz00_2627:
					if (NULLP(BgL_clausesz00_2628))
						{	/* Inline/recursion.scm 341 */
							return BgL_callsz00_2629;
						}
					else
						{	/* Inline/recursion.scm 343 */
							obj_t BgL_arg1790z00_2630;
							obj_t BgL_arg1796z00_2631;

							BgL_arg1790z00_2630 = CDR(((obj_t) BgL_clausesz00_2628));
							{	/* Inline/recursion.scm 344 */
								obj_t BgL_arg1798z00_2632;

								{	/* Inline/recursion.scm 344 */
									obj_t BgL_arg1801z00_2633;

									{	/* Inline/recursion.scm 344 */
										obj_t BgL_pairz00_2634;

										BgL_pairz00_2634 = CAR(((obj_t) BgL_clausesz00_2628));
										BgL_arg1801z00_2633 = CDR(BgL_pairz00_2634);
									}
									BgL_arg1798z00_2632 =
										BGl_findzd2recursivezd2callsz00zzinline_recursionz00(
										((BgL_nodez00_bglt) BgL_arg1801z00_2633),
										((BgL_variablez00_bglt) BgL_varz00_2511), BgL_tailz00_2512,
										BgL_tresz00_2513);
								}
								BgL_arg1796z00_2631 =
									BGl_appendzd221011zd2zzinline_recursionz00
									(BgL_arg1798z00_2632, BgL_callsz00_2629);
							}
							{
								obj_t BgL_callsz00_3441;
								obj_t BgL_clausesz00_3440;

								BgL_clausesz00_3440 = BgL_arg1790z00_2630;
								BgL_callsz00_3441 = BgL_arg1796z00_2631;
								BgL_callsz00_2629 = BgL_callsz00_3441;
								BgL_clausesz00_2628 = BgL_clausesz00_3440;
								goto BgL_loopz00_2627;
							}
						}
				}
			}
		}

	}



/* &find-recursive-calls1317 */
	obj_t BGl_z62findzd2recursivezd2calls1317z62zzinline_recursionz00(obj_t
		BgL_envz00_2514, obj_t BgL_nodez00_2515, obj_t BgL_varz00_2516,
		obj_t BgL_tailz00_2517, obj_t BgL_tresz00_2518)
	{
		{	/* Inline/recursion.scm 329 */
			{	/* Inline/recursion.scm 331 */
				obj_t BgL_arg1760z00_2636;
				obj_t BgL_arg1761z00_2637;
				obj_t BgL_arg1768z00_2638;

				{	/* Inline/recursion.scm 331 */
					BgL_nodez00_bglt BgL_arg1778z00_2639;

					BgL_arg1778z00_2639 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2515)))->BgL_procz00);
					BgL_arg1760z00_2636 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1778z00_2639, ((BgL_variablez00_bglt) BgL_varz00_2516),
						BFALSE, BgL_tresz00_2518);
				}
				{	/* Inline/recursion.scm 332 */
					BgL_nodez00_bglt BgL_arg1779z00_2640;

					BgL_arg1779z00_2640 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2515)))->BgL_msgz00);
					BgL_arg1761z00_2637 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1779z00_2640, ((BgL_variablez00_bglt) BgL_varz00_2516),
						BFALSE, BgL_tresz00_2518);
				}
				{	/* Inline/recursion.scm 333 */
					BgL_nodez00_bglt BgL_arg1782z00_2641;

					BgL_arg1782z00_2641 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2515)))->BgL_objz00);
					BgL_arg1768z00_2638 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1782z00_2641, ((BgL_variablez00_bglt) BgL_varz00_2516),
						BFALSE, BgL_tresz00_2518);
				}
				{	/* Inline/recursion.scm 331 */
					obj_t BgL_list1769z00_2642;

					{	/* Inline/recursion.scm 331 */
						obj_t BgL_arg1771z00_2643;

						{	/* Inline/recursion.scm 331 */
							obj_t BgL_arg1775z00_2644;

							BgL_arg1775z00_2644 = MAKE_YOUNG_PAIR(BgL_arg1768z00_2638, BNIL);
							BgL_arg1771z00_2643 =
								MAKE_YOUNG_PAIR(BgL_arg1761z00_2637, BgL_arg1775z00_2644);
						}
						BgL_list1769z00_2642 =
							MAKE_YOUNG_PAIR(BgL_arg1760z00_2636, BgL_arg1771z00_2643);
					}
					return
						BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list1769z00_2642);
				}
			}
		}

	}



/* &find-recursive-calls1315 */
	obj_t BGl_z62findzd2recursivezd2calls1315z62zzinline_recursionz00(obj_t
		BgL_envz00_2519, obj_t BgL_nodez00_2520, obj_t BgL_varz00_2521,
		obj_t BgL_tailz00_2522, obj_t BgL_tresz00_2523)
	{
		{	/* Inline/recursion.scm 320 */
			{	/* Inline/recursion.scm 322 */
				obj_t BgL_arg1745z00_2646;
				obj_t BgL_arg1746z00_2647;
				obj_t BgL_arg1747z00_2648;

				{	/* Inline/recursion.scm 322 */
					BgL_nodez00_bglt BgL_arg1756z00_2649;

					BgL_arg1756z00_2649 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2520)))->BgL_testz00);
					BgL_arg1745z00_2646 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1756z00_2649, ((BgL_variablez00_bglt) BgL_varz00_2521),
						BFALSE, BgL_tresz00_2523);
				}
				{	/* Inline/recursion.scm 323 */
					BgL_nodez00_bglt BgL_arg1757z00_2650;

					BgL_arg1757z00_2650 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2520)))->BgL_truez00);
					BgL_arg1746z00_2647 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1757z00_2650, ((BgL_variablez00_bglt) BgL_varz00_2521),
						BgL_tailz00_2522, BgL_tresz00_2523);
				}
				{	/* Inline/recursion.scm 324 */
					BgL_nodez00_bglt BgL_arg1759z00_2651;

					BgL_arg1759z00_2651 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2520)))->BgL_falsez00);
					BgL_arg1747z00_2648 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1759z00_2651, ((BgL_variablez00_bglt) BgL_varz00_2521),
						BgL_tailz00_2522, BgL_tresz00_2523);
				}
				{	/* Inline/recursion.scm 322 */
					obj_t BgL_list1748z00_2652;

					{	/* Inline/recursion.scm 322 */
						obj_t BgL_arg1754z00_2653;

						{	/* Inline/recursion.scm 322 */
							obj_t BgL_arg1755z00_2654;

							BgL_arg1755z00_2654 = MAKE_YOUNG_PAIR(BgL_arg1747z00_2648, BNIL);
							BgL_arg1754z00_2653 =
								MAKE_YOUNG_PAIR(BgL_arg1746z00_2647, BgL_arg1755z00_2654);
						}
						BgL_list1748z00_2652 =
							MAKE_YOUNG_PAIR(BgL_arg1745z00_2646, BgL_arg1754z00_2653);
					}
					return
						BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list1748z00_2652);
				}
			}
		}

	}



/* &find-recursive-calls1313 */
	obj_t BGl_z62findzd2recursivezd2calls1313z62zzinline_recursionz00(obj_t
		BgL_envz00_2524, obj_t BgL_nodez00_2525, obj_t BgL_varz00_2526,
		obj_t BgL_tailz00_2527, obj_t BgL_tresz00_2528)
	{
		{	/* Inline/recursion.scm 314 */
			{	/* Inline/recursion.scm 315 */
				BgL_nodez00_bglt BgL_arg1744z00_2656;

				BgL_arg1744z00_2656 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2525)))->BgL_valuez00);
				return
					BGl_findzd2recursivezd2callsz00zzinline_recursionz00
					(BgL_arg1744z00_2656, ((BgL_variablez00_bglt) BgL_varz00_2526),
					BFALSE, BgL_tresz00_2528);
			}
		}

	}



/* &find-recursive-calls1311 */
	obj_t BGl_z62findzd2recursivezd2calls1311z62zzinline_recursionz00(obj_t
		BgL_envz00_2529, obj_t BgL_nodez00_2530, obj_t BgL_varz00_2531,
		obj_t BgL_tailz00_2532, obj_t BgL_tresz00_2533)
	{
		{	/* Inline/recursion.scm 308 */
			{	/* Inline/recursion.scm 309 */
				BgL_nodez00_bglt BgL_arg1743z00_2658;

				BgL_arg1743z00_2658 =
					(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2530)))->BgL_argz00);
				return
					BGl_findzd2recursivezd2callsz00zzinline_recursionz00
					(BgL_arg1743z00_2658, ((BgL_variablez00_bglt) BgL_varz00_2531),
					BFALSE, BgL_tresz00_2533);
			}
		}

	}



/* &find-recursive-calls1309 */
	obj_t BGl_z62findzd2recursivezd2calls1309z62zzinline_recursionz00(obj_t
		BgL_envz00_2534, obj_t BgL_nodez00_2535, obj_t BgL_varz00_2536,
		obj_t BgL_tailz00_2537, obj_t BgL_tresz00_2538)
	{
		{	/* Inline/recursion.scm 302 */
			return
				BGl_findzd2recursivezd2callsza2za2zzinline_recursionz00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2535)))->BgL_exprza2za2),
				BgL_varz00_2536, BFALSE, BgL_tresz00_2538);
		}

	}



/* &find-recursive-calls1307 */
	obj_t BGl_z62findzd2recursivezd2calls1307z62zzinline_recursionz00(obj_t
		BgL_envz00_2539, obj_t BgL_nodez00_2540, obj_t BgL_varz00_2541,
		obj_t BgL_tailz00_2542, obj_t BgL_tresz00_2543)
	{
		{	/* Inline/recursion.scm 294 */
			{	/* Inline/recursion.scm 296 */
				obj_t BgL_arg1738z00_2661;
				obj_t BgL_arg1739z00_2662;

				{	/* Inline/recursion.scm 296 */
					BgL_nodez00_bglt BgL_arg1740z00_2663;

					BgL_arg1740z00_2663 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2540)))->BgL_funz00);
					BgL_arg1738z00_2661 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1740z00_2663, ((BgL_variablez00_bglt) BgL_varz00_2541),
						BFALSE, BgL_tresz00_2543);
				}
				BgL_arg1739z00_2662 =
					BGl_findzd2recursivezd2callsza2za2zzinline_recursionz00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2540)))->BgL_argsz00),
					BgL_varz00_2541, BFALSE, BgL_tresz00_2543);
				return BGl_appendzd221011zd2zzinline_recursionz00(BgL_arg1738z00_2661,
					BgL_arg1739z00_2662);
			}
		}

	}



/* &find-recursive-calls1305 */
	obj_t BGl_z62findzd2recursivezd2calls1305z62zzinline_recursionz00(obj_t
		BgL_envz00_2544, obj_t BgL_nodez00_2545, obj_t BgL_varz00_2546,
		obj_t BgL_tailz00_2547, obj_t BgL_tresz00_2548)
	{
		{	/* Inline/recursion.scm 286 */
			{	/* Inline/recursion.scm 288 */
				obj_t BgL_arg1729z00_2665;
				obj_t BgL_arg1731z00_2666;

				{	/* Inline/recursion.scm 288 */
					BgL_nodez00_bglt BgL_arg1732z00_2667;

					BgL_arg1732z00_2667 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2545)))->BgL_funz00);
					BgL_arg1729z00_2665 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1732z00_2667, ((BgL_variablez00_bglt) BgL_varz00_2546),
						BFALSE, BgL_tresz00_2548);
				}
				{	/* Inline/recursion.scm 289 */
					BgL_nodez00_bglt BgL_arg1733z00_2668;

					BgL_arg1733z00_2668 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2545)))->BgL_argz00);
					BgL_arg1731z00_2666 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1733z00_2668, ((BgL_variablez00_bglt) BgL_varz00_2546),
						BFALSE, BgL_tresz00_2548);
				}
				return
					BGl_appendzd221011zd2zzinline_recursionz00(BgL_arg1729z00_2665,
					BgL_arg1731z00_2666);
			}
		}

	}



/* &find-recursive-calls1303 */
	obj_t BGl_z62findzd2recursivezd2calls1303z62zzinline_recursionz00(obj_t
		BgL_envz00_2549, obj_t BgL_nodez00_2550, obj_t BgL_varz00_2551,
		obj_t BgL_tailz00_2552, obj_t BgL_tresz00_2553)
	{
		{	/* Inline/recursion.scm 274 */
			{	/* Inline/recursion.scm 276 */
				obj_t BgL_argszd2callszd2_2670;

				BgL_argszd2callszd2_2670 =
					BGl_findzd2recursivezd2callsza2za2zzinline_recursionz00(
					(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2550)))->BgL_argsz00),
					BgL_varz00_2551, BgL_tailz00_2552, BgL_tresz00_2553);
				if ((((obj_t) (((BgL_varz00_bglt) COBJECT((((BgL_appz00_bglt)
												COBJECT(((BgL_appz00_bglt) BgL_nodez00_2550)))->
											BgL_funz00)))->BgL_variablez00)) == BgL_varz00_2551))
					{	/* Inline/recursion.scm 277 */
						if (CBOOL(BgL_tailz00_2552))
							{	/* Inline/recursion.scm 279 */
								BFALSE;
							}
						else
							{	/* Inline/recursion.scm 279 */
								CELL_SET(((obj_t) BgL_tresz00_2553), BFALSE);
							}
						return
							MAKE_YOUNG_PAIR(
							((obj_t)
								((BgL_appz00_bglt) BgL_nodez00_2550)),
							BgL_argszd2callszd2_2670);
					}
				else
					{	/* Inline/recursion.scm 277 */
						return BgL_argszd2callszd2_2670;
					}
			}
		}

	}



/* &find-recursive-calls1301 */
	obj_t BGl_z62findzd2recursivezd2calls1301z62zzinline_recursionz00(obj_t
		BgL_envz00_2554, obj_t BgL_nodez00_2555, obj_t BgL_varz00_2556,
		obj_t BgL_tailz00_2557, obj_t BgL_tresz00_2558)
	{
		{	/* Inline/recursion.scm 263 */
			{	/* Inline/recursion.scm 264 */
				obj_t BgL_arg1685z00_2672;
				obj_t BgL_arg1686z00_2673;
				obj_t BgL_arg1687z00_2674;

				{	/* Inline/recursion.scm 264 */
					BgL_nodez00_bglt BgL_arg1696z00_2675;

					BgL_arg1696z00_2675 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2555)))->BgL_mutexz00);
					BgL_arg1685z00_2672 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1696z00_2675, ((BgL_variablez00_bglt) BgL_varz00_2556),
						BFALSE, BgL_tresz00_2558);
				}
				{	/* Inline/recursion.scm 265 */
					BgL_nodez00_bglt BgL_arg1697z00_2676;

					BgL_arg1697z00_2676 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2555)))->BgL_prelockz00);
					BgL_arg1686z00_2673 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1697z00_2676, ((BgL_variablez00_bglt) BgL_varz00_2556),
						BFALSE, BgL_tresz00_2558);
				}
				{	/* Inline/recursion.scm 266 */
					BgL_nodez00_bglt BgL_arg1704z00_2677;

					BgL_arg1704z00_2677 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2555)))->BgL_bodyz00);
					BgL_arg1687z00_2674 =
						BGl_findzd2recursivezd2callsz00zzinline_recursionz00
						(BgL_arg1704z00_2677, ((BgL_variablez00_bglt) BgL_varz00_2556),
						BFALSE, BgL_tresz00_2558);
				}
				{	/* Inline/recursion.scm 264 */
					obj_t BgL_list1688z00_2678;

					{	/* Inline/recursion.scm 264 */
						obj_t BgL_arg1692z00_2679;

						{	/* Inline/recursion.scm 264 */
							obj_t BgL_arg1695z00_2680;

							BgL_arg1695z00_2680 = MAKE_YOUNG_PAIR(BgL_arg1687z00_2674, BNIL);
							BgL_arg1692z00_2679 =
								MAKE_YOUNG_PAIR(BgL_arg1686z00_2673, BgL_arg1695z00_2680);
						}
						BgL_list1688z00_2678 =
							MAKE_YOUNG_PAIR(BgL_arg1685z00_2672, BgL_arg1692z00_2679);
					}
					return
						BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list1688z00_2678);
				}
			}
		}

	}



/* &find-recursive-calls1299 */
	obj_t BGl_z62findzd2recursivezd2calls1299z62zzinline_recursionz00(obj_t
		BgL_envz00_2559, obj_t BgL_nodez00_2560, obj_t BgL_varz00_2561,
		obj_t BgL_tailz00_2562, obj_t BgL_tresz00_2563)
	{
		{	/* Inline/recursion.scm 257 */
			return
				BGl_findzd2recursivezd2callsza2za2zzinline_recursionz00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2560)))->BgL_nodesz00),
				BgL_varz00_2561, BgL_tailz00_2562, BgL_tresz00_2563);
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinline_recursionz00()
	{
		{	/* Inline/recursion.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(((long) 53595756),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzinline_inlinez00(((long) 20504998),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzinline_simplez00(((long) 221468920),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzinline_variantz00(((long) 347990379),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzinline_loopz00(((long) 342478658),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
			BGl_modulezd2initializa7ationz75zzinline_appz00(((long) 148760837),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
			return
				BGl_modulezd2initializa7ationz75zzreduce_csez00(((long) 347839299),
				BSTRING_TO_STRING(BGl_string2008z00zzinline_recursionz00));
		}

	}

#ifdef __cplusplus
}
#endif
