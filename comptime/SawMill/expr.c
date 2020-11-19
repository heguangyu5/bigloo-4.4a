/*===========================================================================*/
/*   (SawMill/expr.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/expr.scm) */
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

	typedef struct BgL_feffectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_readz00;
		obj_t BgL_writez00;
	}                 *BgL_feffectz00_bglt;

	typedef struct BgL_backendz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_languagez00;
		obj_t BgL_srfi0z00;
		obj_t BgL_namez00;
		obj_t BgL_externzd2variableszd2;
		obj_t BgL_externzd2functionszd2;
		obj_t BgL_externzd2typeszd2;
		obj_t BgL_variablesz00;
		obj_t BgL_functionsz00;
		obj_t BgL_typesz00;
		bool_t BgL_typedz00;
		obj_t BgL_heapzd2suffixzd2;
		obj_t BgL_heapzd2compatiblezd2;
		bool_t BgL_callccz00;
		bool_t BgL_qualifiedzd2typeszd2;
		bool_t BgL_effectzb2zb2;
		bool_t BgL_removezd2emptyzd2letz00;
		bool_t BgL_foreignzd2closurezd2;
		bool_t BgL_typedzd2eqzd2;
		bool_t BgL_tracezd2supportzd2;
		obj_t BgL_foreignzd2clausezd2supportz00;
		obj_t BgL_debugzd2supportzd2;
		bool_t BgL_pragmazd2supportzd2;
		bool_t BgL_tvectorzd2descrzd2supportz00;
		bool_t BgL_requirezd2tailczd2;
		obj_t BgL_registersz00;
		obj_t BgL_pregistersz00;
		bool_t BgL_boundzd2checkzd2;
		bool_t BgL_typezd2checkzd2;
		bool_t BgL_typedzd2funcallzd2;
	}                 *BgL_backendz00_bglt;

	typedef struct BgL_rtl_regz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_varz00;
		obj_t BgL_onexprzf3zf3;
		obj_t BgL_namez00;
		obj_t BgL_keyz00;
		obj_t BgL_hardwarez00;
	}                 *BgL_rtl_regz00_bglt;

	typedef struct BgL_rtl_funz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_funz00_bglt;

	typedef struct BgL_rtl_nopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_nopz00_bglt;

	typedef struct BgL_rtl_callz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                  *BgL_rtl_callz00_bglt;

	typedef struct BgL_rtl_insz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_z52spillz52;
		obj_t BgL_destz00;
		struct BgL_rtl_funz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}                 *BgL_rtl_insz00_bglt;

	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_labelz00;
		obj_t BgL_predsz00;
		obj_t BgL_succsz00;
		obj_t BgL_firstz00;
	}               *BgL_blockz00_bglt;

	typedef struct BgL_iregz00_bgl
	{
		obj_t BgL_indexz00;
		obj_t BgL_statusz00;
	}              *BgL_iregz00_bglt;

	typedef struct BgL_pregz00_bgl
	{
		obj_t BgL_indexz00;
		obj_t BgL_statusz00;
	}              *BgL_pregz00_bglt;

	typedef struct BgL_inlinedz00_bgl
	{
	}                 *BgL_inlinedz00_bglt;


	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static BgL_feffectz00_bglt BGl_za2getfza2z00zzsaw_exprz00;
	extern obj_t BGl_rtl_funcallz00zzsaw_defsz00;
	static bool_t BGl_intersectionzf3ze70z14zzsaw_exprz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32011ze3ze5zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_z62effectszd2rtl_getfield1595zb0zzsaw_exprz00(obj_t, obj_t);
	static BgL_rtl_regz00_bglt BGl_z62lambda1953z62zzsaw_exprz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_rtl_regz00_bglt BGl_z62lambda1956z62zzsaw_exprz00(obj_t, obj_t);
	static BgL_rtl_regz00_bglt BGl_z62lambda1959z62zzsaw_exprz00(obj_t, obj_t);
	static BgL_feffectz00_bglt BGl_za2loadgza2z00zzsaw_exprz00;
	static obj_t BGl_z62lambda1966z62zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1967z62zzsaw_exprz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_vrefz00zzsaw_defsz00;
	extern obj_t BGl_rtl_protectz00zzsaw_defsz00;
	static obj_t BGl_z62lambda1971z62zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1972z62zzsaw_exprz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_boxsetz00zzsaw_defsz00;
	static BgL_rtl_regz00_bglt BGl_z62lambda1980z62zzsaw_exprz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_rtl_regz00_bglt BGl_z62lambda1983z62zzsaw_exprz00(obj_t, obj_t);
	static BgL_rtl_regz00_bglt BGl_z62lambda1986z62zzsaw_exprz00(obj_t, obj_t);
	static BgL_feffectz00_bglt BGl_za2vrefza2z00zzsaw_exprz00;
	static BgL_feffectz00_bglt BGl_za2storegza2z00zzsaw_exprz00;
	static obj_t BGl_z62effectszd2rtl_setfield1597zb0zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_exprz00();
	static obj_t BGl_z62lambda1993z62zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1994z62zzsaw_exprz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62effectszd2rtl_protect1607zb0zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1998z62zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1999z62zzsaw_exprz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_buildzd2treezd2zzsaw_exprz00(BgL_backendz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31958ze3ze5zzsaw_exprz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2buildzd2treez00zzsaw_exprz00(BgL_backendz00_bglt, obj_t, obj_t);
	extern obj_t BGl_rtl_lightfuncallz00zzsaw_defsz00;
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	static obj_t BGl_z62buildzd2treezb0zzsaw_exprz00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static BgL_feffectz00_bglt BGl_za2boxrefza2z00zzsaw_exprz00;
	static obj_t BGl_inlinedz00zzsaw_exprz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzsaw_exprz00();
	static obj_t BGl_z62effectszd2rtl_boxset1593zb0zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_z62usefullz62zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_regzd2ze3pregzf2writeze70z24zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_z62effectszd2rtl_pragma1605zb0zzsaw_exprz00(obj_t, obj_t);
	extern obj_t BGl_rtl_setfieldz00zzsaw_defsz00;
	extern obj_t BGl_rtl_storegz00zzsaw_defsz00;
	static obj_t BGl_xxz00zzsaw_exprz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62effectszd2rtl_storeg1585zb0zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_z62effectszd2rtl_funcall1603zb0zzsaw_exprz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_exprz00();
	static obj_t BGl_z62effects1580z62zzsaw_exprz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_filterz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_regzd2ze3pregze70zd6zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_z62effectszd2rtl_vset1589zb0zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_analysez00zzsaw_exprz00(BgL_backendz00_bglt, obj_t, obj_t);
	static obj_t BGl_z62acceptzd2foldingzf3z43zzsaw_exprz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62effectszd2rtl_lightfun1601zb0zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_regzd2ze3iregzf2writeze70z24zzsaw_exprz00(obj_t, obj_t);
	static BgL_feffectz00_bglt BGl_za2psetza2z00zzsaw_exprz00;
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	static obj_t BGl_prezd2analysezd2zzsaw_exprz00(BgL_backendz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_rtl_funz00zzsaw_defsz00;
	extern obj_t BGl_rtl_pragmaz00zzsaw_defsz00;
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_exprz00 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	static obj_t BGl_pregz00zzsaw_exprz00 = BUNSPEC;
	static obj_t BGl_z62prezd2buildzd2treez62zzsaw_exprz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_boxrefz00zzsaw_defsz00;
	static bool_t BGl_matcheffectz00zzsaw_exprz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static BgL_feffectz00_bglt BGl_za2fullza2z00zzsaw_exprz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_exprz00();
	static obj_t BGl_z62effectszd2rtl_call1609zb0zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_exprz00();
	extern obj_t BGl_rtl_vsetz00zzsaw_defsz00;
	static bool_t BGl_markzd2localszd2zzsaw_exprz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static BgL_feffectz00_bglt BGl_za2noeffectza2z00zzsaw_exprz00;
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62effectszd2rtl_apply1599zb0zzsaw_exprz00(obj_t, obj_t);
	extern obj_t BGl_rtl_nopz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31985ze3ze5zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_iregz00zzsaw_exprz00 = BUNSPEC;
	static obj_t BGl_z62effectszd2rtl_boxref1591zb0zzsaw_exprz00(obj_t, obj_t);
	static BgL_feffectz00_bglt
		BGl_manuzd2effectzd2zzsaw_exprz00(BgL_globalz00_bglt);
	static BgL_feffectz00_bglt BGl_za2prefza2z00zzsaw_exprz00;
	static BgL_rtl_insz00_bglt BGl_z62lambda2006z62zzsaw_exprz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_rtl_insz00_bglt BGl_z62lambda2009z62zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_z62effectsz62zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_z62effectszd2rtl_loadg1583zb0zzsaw_exprz00(obj_t, obj_t);
	extern obj_t BGl_rtl_callz00zzsaw_defsz00;
	static BgL_rtl_insz00_bglt BGl_z62lambda2012z62zzsaw_exprz00(obj_t, obj_t);
	static BgL_feffectz00_bglt BGl_za2setfza2z00zzsaw_exprz00;
	extern obj_t BGl_rtl_applyz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_exprz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_rtl_loadgz00zzsaw_defsz00;
	static long BGl_za2countza2z00zzsaw_exprz00;
	extern obj_t BGl_feffectz00zzast_varz00;
	static obj_t BGl_cnstzd2initzd2zzsaw_exprz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_exprz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_exprz00();
	static obj_t BGl_regzd2ze3iregze70zd6zzsaw_exprz00(obj_t, obj_t);
	extern obj_t BGl_backendz00zzbackend_backendz00;
	static BgL_feffectz00_bglt BGl_za2vsetza2z00zzsaw_exprz00;
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern obj_t BGl_rtl_getfieldz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t
		BGl_acceptzd2foldingzf3z21zzsaw_exprz00(BgL_backendz00_bglt, obj_t, obj_t);
	static BgL_feffectz00_bglt BGl_za2boxsetza2z00zzsaw_exprz00;
	static bool_t BGl_prezd2markzd2localsz00zzsaw_exprz00(obj_t, obj_t);
	static obj_t BGl_z62effectszd2rtl_vref1587zb0zzsaw_exprz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_z62acceptzd2foldingzf31578z43zzsaw_exprz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_effectsz00zzsaw_exprz00(BgL_rtl_funz00_bglt);
	static obj_t __cnst[28];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2233z00zzsaw_exprz00,
		BgL_bgl_za762usefullza762za7za7s2278z00, BGl_z62usefullz62zzsaw_exprz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2234z00zzsaw_exprz00,
		BgL_bgl_za762lambda1967za7622279z00, BGl_z62lambda1967z62zzsaw_exprz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2235z00zzsaw_exprz00,
		BgL_bgl_za762lambda1966za7622280z00, BGl_z62lambda1966z62zzsaw_exprz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2236z00zzsaw_exprz00,
		BgL_bgl_za762lambda1972za7622281z00, BGl_z62lambda1972z62zzsaw_exprz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2237z00zzsaw_exprz00,
		BgL_bgl_za762lambda1971za7622282z00, BGl_z62lambda1971z62zzsaw_exprz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2238z00zzsaw_exprz00,
		BgL_bgl_za762lambda1959za7622283z00, BGl_z62lambda1959z62zzsaw_exprz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2239z00zzsaw_exprz00,
		BgL_bgl_za762za7c3za704anonymo2284za7,
		BGl_z62zc3z04anonymousza31958ze3ze5zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2240z00zzsaw_exprz00,
		BgL_bgl_za762lambda1956za7622285z00, BGl_z62lambda1956z62zzsaw_exprz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2241z00zzsaw_exprz00,
		BgL_bgl_za762lambda1953za7622286z00, BGl_z62lambda1953z62zzsaw_exprz00, 0L,
		BUNSPEC, 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2242z00zzsaw_exprz00,
		BgL_bgl_za762lambda1994za7622287z00, BGl_z62lambda1994z62zzsaw_exprz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2243z00zzsaw_exprz00,
		BgL_bgl_za762lambda1993za7622288z00, BGl_z62lambda1993z62zzsaw_exprz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2244z00zzsaw_exprz00,
		BgL_bgl_za762lambda1999za7622289z00, BGl_z62lambda1999z62zzsaw_exprz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2245z00zzsaw_exprz00,
		BgL_bgl_za762lambda1998za7622290z00, BGl_z62lambda1998z62zzsaw_exprz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2246z00zzsaw_exprz00,
		BgL_bgl_za762lambda1986za7622291z00, BGl_z62lambda1986z62zzsaw_exprz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2247z00zzsaw_exprz00,
		BgL_bgl_za762za7c3za704anonymo2292za7,
		BGl_z62zc3z04anonymousza31985ze3ze5zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2248z00zzsaw_exprz00,
		BgL_bgl_za762lambda1983za7622293z00, BGl_z62lambda1983z62zzsaw_exprz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2249z00zzsaw_exprz00,
		BgL_bgl_za762lambda1980za7622294z00, BGl_z62lambda1980z62zzsaw_exprz00, 0L,
		BUNSPEC, 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2250z00zzsaw_exprz00,
		BgL_bgl_za762lambda2012za7622295z00, BGl_z62lambda2012z62zzsaw_exprz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2251z00zzsaw_exprz00,
		BgL_bgl_za762za7c3za704anonymo2296za7,
		BGl_z62zc3z04anonymousza32011ze3ze5zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2252z00zzsaw_exprz00,
		BgL_bgl_za762lambda2009za7622297z00, BGl_z62lambda2009z62zzsaw_exprz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2253z00zzsaw_exprz00,
		BgL_bgl_za762lambda2006za7622298z00, BGl_z62lambda2006z62zzsaw_exprz00, 0L,
		BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2254z00zzsaw_exprz00,
		BgL_bgl_za762acceptza7d2fold2299z00,
		BGl_z62acceptzd2foldingzf31578z43zzsaw_exprz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2256z00zzsaw_exprz00,
		BgL_bgl_za762effects1580za762300z00, BGl_z62effects1580z62zzsaw_exprz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2258z00zzsaw_exprz00,
		BgL_bgl_za762effectsza7d2rtl2301z00,
		BGl_z62effectszd2rtl_loadg1583zb0zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2260z00zzsaw_exprz00,
		BgL_bgl_za762effectsza7d2rtl2302z00,
		BGl_z62effectszd2rtl_storeg1585zb0zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2261z00zzsaw_exprz00,
		BgL_bgl_za762effectsza7d2rtl2303z00,
		BGl_z62effectszd2rtl_vref1587zb0zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2262z00zzsaw_exprz00,
		BgL_bgl_za762effectsza7d2rtl2304z00,
		BGl_z62effectszd2rtl_vset1589zb0zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2263z00zzsaw_exprz00,
		BgL_bgl_za762effectsza7d2rtl2305z00,
		BGl_z62effectszd2rtl_boxref1591zb0zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2264z00zzsaw_exprz00,
		BgL_bgl_za762effectsza7d2rtl2306z00,
		BGl_z62effectszd2rtl_boxset1593zb0zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2265z00zzsaw_exprz00,
		BgL_bgl_za762effectsza7d2rtl2307z00,
		BGl_z62effectszd2rtl_getfield1595zb0zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2266z00zzsaw_exprz00,
		BgL_bgl_za762effectsza7d2rtl2308z00,
		BGl_z62effectszd2rtl_setfield1597zb0zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2267z00zzsaw_exprz00,
		BgL_bgl_za762effectsza7d2rtl2309z00,
		BGl_z62effectszd2rtl_apply1599zb0zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2268z00zzsaw_exprz00,
		BgL_bgl_za762effectsza7d2rtl2310z00,
		BGl_z62effectszd2rtl_lightfun1601zb0zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2269z00zzsaw_exprz00,
		BgL_bgl_za762effectsza7d2rtl2311z00,
		BGl_z62effectszd2rtl_funcall1603zb0zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2270z00zzsaw_exprz00,
		BgL_bgl_za762effectsza7d2rtl2312z00,
		BGl_z62effectszd2rtl_pragma1605zb0zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2271z00zzsaw_exprz00,
		BgL_bgl_za762effectsza7d2rtl2313z00,
		BGl_z62effectszd2rtl_protect1607zb0zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2272z00zzsaw_exprz00,
		BgL_bgl_za762effectsza7d2rtl2314z00,
		BGl_z62effectszd2rtl_call1609zb0zzsaw_exprz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_acceptzd2foldingzf3zd2envzf3zzsaw_exprz00,
		BgL_bgl_za762acceptza7d2fold2315z00,
		BGl_z62acceptzd2foldingzf3z43zzsaw_exprz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_buildzd2treezd2envz00zzsaw_exprz00,
		BgL_bgl_za762buildza7d2treeza72316za7, BGl_z62buildzd2treezb0zzsaw_exprz00,
		0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_GENERIC(BGl_effectszd2envzd2zzsaw_exprz00,
		BgL_bgl_za762effectsza762za7za7s2317z00, BGl_z62effectsz62zzsaw_exprz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2255z00zzsaw_exprz00,
		BgL_bgl_string2255za700za7za7s2318za7, "accept-folding?1578", 19);
	      DEFINE_STRING(BGl_string2257z00zzsaw_exprz00,
		BgL_bgl_string2257za700za7za7s2319za7, "effects1580", 11);
	      DEFINE_STRING(BGl_string2259z00zzsaw_exprz00,
		BgL_bgl_string2259za700za7za7s2320za7, "effects", 7);
	      DEFINE_STRING(BGl_string2273z00zzsaw_exprz00,
		BgL_bgl_string2273za700za7za7s2321za7, "saw_expr", 8);
	      DEFINE_STRING(BGl_string2274z00zzsaw_exprz00,
		BgL_bgl_string2274za700za7za7s2322za7,
		"inlined preg saw_expr ireg status obj index (print (global-id var) \" has no effect\") ko ok written readen reset c-write-char c-current-output-port (output-port) $tvector-descr-set! procedure-set! procedure-ref make-fx-procedure foreign $cons (procedure) top (field) (box) (vector) (memory) ",
		290);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_prezd2buildzd2treezd2envzd2zzsaw_exprz00,
		BgL_bgl_za762preza7d2buildza7d2323za7,
		BGl_z62prezd2buildzd2treez62zzsaw_exprz00, 0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2getfza2z00zzsaw_exprz00));
		     ADD_ROOT((void *) (&BGl_za2loadgza2z00zzsaw_exprz00));
		     ADD_ROOT((void *) (&BGl_za2vrefza2z00zzsaw_exprz00));
		     ADD_ROOT((void *) (&BGl_za2storegza2z00zzsaw_exprz00));
		     ADD_ROOT((void *) (&BGl_za2boxrefza2z00zzsaw_exprz00));
		     ADD_ROOT((void *) (&BGl_inlinedz00zzsaw_exprz00));
		     ADD_ROOT((void *) (&BGl_za2psetza2z00zzsaw_exprz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzsaw_exprz00));
		     ADD_ROOT((void *) (&BGl_pregz00zzsaw_exprz00));
		     ADD_ROOT((void *) (&BGl_za2fullza2z00zzsaw_exprz00));
		     ADD_ROOT((void *) (&BGl_za2noeffectza2z00zzsaw_exprz00));
		     ADD_ROOT((void *) (&BGl_iregz00zzsaw_exprz00));
		     ADD_ROOT((void *) (&BGl_za2prefza2z00zzsaw_exprz00));
		     ADD_ROOT((void *) (&BGl_za2setfza2z00zzsaw_exprz00));
		     ADD_ROOT((void *) (&BGl_za2vsetza2z00zzsaw_exprz00));
		     ADD_ROOT((void *) (&BGl_za2boxsetza2z00zzsaw_exprz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_exprz00(long
		BgL_checksumz00_3730, char *BgL_fromz00_3731)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_exprz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_exprz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_exprz00();
					BGl_libraryzd2moduleszd2initz00zzsaw_exprz00();
					BGl_cnstzd2initzd2zzsaw_exprz00();
					BGl_importedzd2moduleszd2initz00zzsaw_exprz00();
					BGl_objectzd2initzd2zzsaw_exprz00();
					BGl_genericzd2initzd2zzsaw_exprz00();
					BGl_methodzd2initzd2zzsaw_exprz00();
					return BGl_toplevelzd2initzd2zzsaw_exprz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_exprz00()
	{
		{	/* SawMill/expr.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_expr");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_expr");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"saw_expr");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_expr");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_expr");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_expr");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_expr");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "saw_expr");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_expr");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_expr");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_exprz00()
	{
		{	/* SawMill/expr.scm 1 */
			{	/* SawMill/expr.scm 1 */
				obj_t BgL_cportz00_3609;

				{	/* SawMill/expr.scm 1 */
					obj_t BgL_stringz00_3617;

					BgL_stringz00_3617 = BGl_string2274z00zzsaw_exprz00;
					{	/* SawMill/expr.scm 1 */
						obj_t BgL_startz00_3618;

						BgL_startz00_3618 = BINT(((long) 0));
						{	/* SawMill/expr.scm 1 */
							obj_t BgL_endz00_3619;

							BgL_endz00_3619 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3617)));
							{	/* SawMill/expr.scm 1 */

								BgL_cportz00_3609 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3617, BgL_startz00_3618, BgL_endz00_3619);
				}}}}
				{
					long BgL_iz00_3610;

					BgL_iz00_3610 = ((long) 27);
				BgL_loopz00_3611:
					if ((BgL_iz00_3610 == ((long) -1)))
						{	/* SawMill/expr.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/expr.scm 1 */
							{	/* SawMill/expr.scm 1 */
								obj_t BgL_arg2276z00_3613;

								{	/* SawMill/expr.scm 1 */

									{	/* SawMill/expr.scm 1 */
										obj_t BgL_locationz00_3615;

										BgL_locationz00_3615 = BBOOL(((bool_t) 0));
										{	/* SawMill/expr.scm 1 */

											BgL_arg2276z00_3613 =
												BGl_readz00zz__readerz00(BgL_cportz00_3609,
												BgL_locationz00_3615);
										}
									}
								}
								{	/* SawMill/expr.scm 1 */
									int BgL_tmpz00_3762;

									BgL_tmpz00_3762 = (int) (BgL_iz00_3610);
									CNST_TABLE_SET(BgL_tmpz00_3762, BgL_arg2276z00_3613);
							}}
							{	/* SawMill/expr.scm 1 */
								int BgL_auxz00_3616;

								BgL_auxz00_3616 = (int) ((BgL_iz00_3610 - ((long) 1)));
								{
									long BgL_iz00_3767;

									BgL_iz00_3767 = (long) (BgL_auxz00_3616);
									BgL_iz00_3610 = BgL_iz00_3767;
									goto BgL_loopz00_3611;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_exprz00()
	{
		{	/* SawMill/expr.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_exprz00()
	{
		{	/* SawMill/expr.scm 1 */
			BGl_za2countza2z00zzsaw_exprz00 = ((long) 0);
			{	/* SawMill/expr.scm 218 */
				BgL_feffectz00_bglt BgL_new1224z00_1953;

				{	/* Ast/var.scm 170 */
					BgL_feffectz00_bglt BgL_new1223z00_1954;

					BgL_new1223z00_1954 =
						((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_feffectz00_bgl))));
					{	/* Ast/var.scm 170 */
						long BgL_arg1611z00_1955;

						{	/* Ast/var.scm 170 */
							long BgL_res2133z00_2972;

							BgL_res2133z00_2972 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
							BgL_arg1611z00_1955 = BgL_res2133z00_2972;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1223z00_1954), BgL_arg1611z00_1955);
					}
					BgL_new1224z00_1953 = BgL_new1223z00_1954;
				}
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1224z00_1953))->BgL_readz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1224z00_1953))->BgL_writez00) =
					((obj_t) BNIL), BUNSPEC);
				BGl_za2noeffectza2z00zzsaw_exprz00 = BgL_new1224z00_1953;
			}
			{	/* SawMill/expr.scm 219 */
				BgL_feffectz00_bglt BgL_new1226z00_1956;

				{	/* SawMill/expr.scm 219 */
					BgL_feffectz00_bglt BgL_new1225z00_1957;

					BgL_new1225z00_1957 =
						((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_feffectz00_bgl))));
					{	/* SawMill/expr.scm 219 */
						long BgL_arg1612z00_1958;

						{	/* SawMill/expr.scm 219 */
							long BgL_res2134z00_2976;

							BgL_res2134z00_2976 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
							BgL_arg1612z00_1958 = BgL_res2134z00_2976;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1225z00_1957), BgL_arg1612z00_1958);
					}
					BgL_new1226z00_1956 = BgL_new1225z00_1957;
				}
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1226z00_1956))->BgL_readz00) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1226z00_1956))->BgL_writez00) =
					((obj_t) BNIL), BUNSPEC);
				BGl_za2loadgza2z00zzsaw_exprz00 = BgL_new1226z00_1956;
			}
			{	/* SawMill/expr.scm 220 */
				BgL_feffectz00_bglt BgL_new1228z00_1959;

				{	/* Ast/var.scm 170 */
					BgL_feffectz00_bglt BgL_new1227z00_1960;

					BgL_new1227z00_1960 =
						((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_feffectz00_bgl))));
					{	/* Ast/var.scm 170 */
						long BgL_arg1613z00_1961;

						{	/* Ast/var.scm 170 */
							long BgL_res2135z00_2980;

							BgL_res2135z00_2980 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
							BgL_arg1613z00_1961 = BgL_res2135z00_2980;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1227z00_1960), BgL_arg1613z00_1961);
					}
					BgL_new1228z00_1959 = BgL_new1227z00_1960;
				}
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1228z00_1959))->BgL_readz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1228z00_1959))->BgL_writez00) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				BGl_za2storegza2z00zzsaw_exprz00 = BgL_new1228z00_1959;
			}
			{	/* SawMill/expr.scm 221 */
				BgL_feffectz00_bglt BgL_new1230z00_1962;

				{	/* SawMill/expr.scm 221 */
					BgL_feffectz00_bglt BgL_new1229z00_1963;

					BgL_new1229z00_1963 =
						((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_feffectz00_bgl))));
					{	/* SawMill/expr.scm 221 */
						long BgL_arg1624z00_1964;

						{	/* SawMill/expr.scm 221 */
							long BgL_res2136z00_2984;

							BgL_res2136z00_2984 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
							BgL_arg1624z00_1964 = BgL_res2136z00_2984;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1229z00_1963), BgL_arg1624z00_1964);
					}
					BgL_new1230z00_1962 = BgL_new1229z00_1963;
				}
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1230z00_1962))->BgL_readz00) =
					((obj_t) CNST_TABLE_REF(((long) 1))), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1230z00_1962))->BgL_writez00) =
					((obj_t) BNIL), BUNSPEC);
				BGl_za2vrefza2z00zzsaw_exprz00 = BgL_new1230z00_1962;
			}
			{	/* SawMill/expr.scm 222 */
				BgL_feffectz00_bglt BgL_new1232z00_1965;

				{	/* Ast/var.scm 170 */
					BgL_feffectz00_bglt BgL_new1231z00_1966;

					BgL_new1231z00_1966 =
						((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_feffectz00_bgl))));
					{	/* Ast/var.scm 170 */
						long BgL_arg1626z00_1967;

						{	/* Ast/var.scm 170 */
							long BgL_res2137z00_2988;

							BgL_res2137z00_2988 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
							BgL_arg1626z00_1967 = BgL_res2137z00_2988;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1231z00_1966), BgL_arg1626z00_1967);
					}
					BgL_new1232z00_1965 = BgL_new1231z00_1966;
				}
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1232z00_1965))->BgL_readz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1232z00_1965))->BgL_writez00) =
					((obj_t) CNST_TABLE_REF(((long) 1))), BUNSPEC);
				BGl_za2vsetza2z00zzsaw_exprz00 = BgL_new1232z00_1965;
			}
			{	/* SawMill/expr.scm 223 */
				BgL_feffectz00_bglt BgL_new1234z00_1968;

				{	/* SawMill/expr.scm 223 */
					BgL_feffectz00_bglt BgL_new1233z00_1969;

					BgL_new1233z00_1969 =
						((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_feffectz00_bgl))));
					{	/* SawMill/expr.scm 223 */
						long BgL_arg1627z00_1970;

						{	/* SawMill/expr.scm 223 */
							long BgL_res2138z00_2992;

							BgL_res2138z00_2992 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
							BgL_arg1627z00_1970 = BgL_res2138z00_2992;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1233z00_1969), BgL_arg1627z00_1970);
					}
					BgL_new1234z00_1968 = BgL_new1233z00_1969;
				}
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1234z00_1968))->BgL_readz00) =
					((obj_t) CNST_TABLE_REF(((long) 2))), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1234z00_1968))->BgL_writez00) =
					((obj_t) BNIL), BUNSPEC);
				BGl_za2boxrefza2z00zzsaw_exprz00 = BgL_new1234z00_1968;
			}
			{	/* SawMill/expr.scm 224 */
				BgL_feffectz00_bglt BgL_new1236z00_1971;

				{	/* Ast/var.scm 170 */
					BgL_feffectz00_bglt BgL_new1235z00_1972;

					BgL_new1235z00_1972 =
						((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_feffectz00_bgl))));
					{	/* Ast/var.scm 170 */
						long BgL_arg1631z00_1973;

						{	/* Ast/var.scm 170 */
							long BgL_res2139z00_2996;

							BgL_res2139z00_2996 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
							BgL_arg1631z00_1973 = BgL_res2139z00_2996;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1235z00_1972), BgL_arg1631z00_1973);
					}
					BgL_new1236z00_1971 = BgL_new1235z00_1972;
				}
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1236z00_1971))->BgL_readz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1236z00_1971))->BgL_writez00) =
					((obj_t) CNST_TABLE_REF(((long) 2))), BUNSPEC);
				BGl_za2boxsetza2z00zzsaw_exprz00 = BgL_new1236z00_1971;
			}
			{	/* SawMill/expr.scm 225 */
				BgL_feffectz00_bglt BgL_new1238z00_1974;

				{	/* SawMill/expr.scm 225 */
					BgL_feffectz00_bglt BgL_new1237z00_1975;

					BgL_new1237z00_1975 =
						((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_feffectz00_bgl))));
					{	/* SawMill/expr.scm 225 */
						long BgL_arg1634z00_1976;

						{	/* SawMill/expr.scm 225 */
							long BgL_res2140z00_3000;

							BgL_res2140z00_3000 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
							BgL_arg1634z00_1976 = BgL_res2140z00_3000;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1237z00_1975), BgL_arg1634z00_1976);
					}
					BgL_new1238z00_1974 = BgL_new1237z00_1975;
				}
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1238z00_1974))->BgL_readz00) =
					((obj_t) CNST_TABLE_REF(((long) 3))), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1238z00_1974))->BgL_writez00) =
					((obj_t) BNIL), BUNSPEC);
				BGl_za2getfza2z00zzsaw_exprz00 = BgL_new1238z00_1974;
			}
			{	/* SawMill/expr.scm 226 */
				BgL_feffectz00_bglt BgL_new1240z00_1977;

				{	/* Ast/var.scm 170 */
					BgL_feffectz00_bglt BgL_new1239z00_1978;

					BgL_new1239z00_1978 =
						((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_feffectz00_bgl))));
					{	/* Ast/var.scm 170 */
						long BgL_arg1639z00_1979;

						{	/* Ast/var.scm 170 */
							long BgL_res2141z00_3004;

							BgL_res2141z00_3004 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
							BgL_arg1639z00_1979 = BgL_res2141z00_3004;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1239z00_1978), BgL_arg1639z00_1979);
					}
					BgL_new1240z00_1977 = BgL_new1239z00_1978;
				}
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1240z00_1977))->BgL_readz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1240z00_1977))->BgL_writez00) =
					((obj_t) CNST_TABLE_REF(((long) 3))), BUNSPEC);
				BGl_za2setfza2z00zzsaw_exprz00 = BgL_new1240z00_1977;
			}
			{	/* SawMill/expr.scm 227 */
				BgL_feffectz00_bglt BgL_new1242z00_1980;

				{	/* SawMill/expr.scm 227 */
					BgL_feffectz00_bglt BgL_new1241z00_1981;

					BgL_new1241z00_1981 =
						((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_feffectz00_bgl))));
					{	/* SawMill/expr.scm 227 */
						long BgL_arg1640z00_1982;

						{	/* SawMill/expr.scm 227 */
							long BgL_res2142z00_3008;

							BgL_res2142z00_3008 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
							BgL_arg1640z00_1982 = BgL_res2142z00_3008;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1241z00_1981), BgL_arg1640z00_1982);
					}
					BgL_new1242z00_1980 = BgL_new1241z00_1981;
				}
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1242z00_1980))->BgL_readz00) =
					((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1242z00_1980))->BgL_writez00) =
					((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
				BGl_za2fullza2z00zzsaw_exprz00 = BgL_new1242z00_1980;
			}
			{	/* SawMill/expr.scm 266 */
				BgL_feffectz00_bglt BgL_new1248z00_1983;

				{	/* SawMill/expr.scm 266 */
					BgL_feffectz00_bglt BgL_new1247z00_1984;

					BgL_new1247z00_1984 =
						((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_feffectz00_bgl))));
					{	/* SawMill/expr.scm 266 */
						long BgL_arg1641z00_1985;

						{	/* SawMill/expr.scm 266 */
							long BgL_res2143z00_3012;

							BgL_res2143z00_3012 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
							BgL_arg1641z00_1985 = BgL_res2143z00_3012;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1247z00_1984), BgL_arg1641z00_1985);
					}
					BgL_new1248z00_1983 = BgL_new1247z00_1984;
				}
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1248z00_1983))->BgL_readz00) =
					((obj_t) CNST_TABLE_REF(((long) 5))), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1248z00_1983))->BgL_writez00) =
					((obj_t) BNIL), BUNSPEC);
				BGl_za2prefza2z00zzsaw_exprz00 = BgL_new1248z00_1983;
			}
			{	/* SawMill/expr.scm 267 */
				BgL_feffectz00_bglt BgL_new1250z00_1986;

				{	/* Ast/var.scm 170 */
					BgL_feffectz00_bglt BgL_new1249z00_1987;

					BgL_new1249z00_1987 =
						((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_feffectz00_bgl))));
					{	/* Ast/var.scm 170 */
						long BgL_arg1644z00_1988;

						{	/* Ast/var.scm 170 */
							long BgL_res2144z00_3016;

							BgL_res2144z00_3016 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
							BgL_arg1644z00_1988 = BgL_res2144z00_3016;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1249z00_1987), BgL_arg1644z00_1988);
					}
					BgL_new1250z00_1986 = BgL_new1249z00_1987;
				}
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1250z00_1986))->BgL_readz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1250z00_1986))->BgL_writez00) =
					((obj_t) CNST_TABLE_REF(((long) 5))), BUNSPEC);
				BGl_za2psetza2z00zzsaw_exprz00 = BgL_new1250z00_1986;
			}
			{	/* SawMill/expr.scm 269 */
				BgL_feffectz00_bglt BgL_arg1652z00_1989;

				{	/* SawMill/expr.scm 269 */
					BgL_feffectz00_bglt BgL_new1252z00_1990;

					{	/* SawMill/expr.scm 269 */
						BgL_feffectz00_bglt BgL_new1251z00_1991;

						BgL_new1251z00_1991 =
							((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_feffectz00_bgl))));
						{	/* SawMill/expr.scm 269 */
							long BgL_arg1662z00_1992;

							{	/* SawMill/expr.scm 269 */
								long BgL_res2145z00_3020;

								BgL_res2145z00_3020 =
									BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
								BgL_arg1662z00_1992 = BgL_res2145z00_3020;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1251z00_1991),
								BgL_arg1662z00_1992);
						}
						BgL_new1252z00_1990 = BgL_new1251z00_1991;
					}
					((((BgL_feffectz00_bglt) COBJECT(BgL_new1252z00_1990))->BgL_readz00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_feffectz00_bglt) COBJECT(BgL_new1252z00_1990))->
							BgL_writez00) = ((obj_t) BNIL), BUNSPEC);
					BgL_arg1652z00_1989 = BgL_new1252z00_1990;
				}
				BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 6)),
					CNST_TABLE_REF(((long) 7)), ((obj_t) BgL_arg1652z00_1989));
			}
			{	/* SawMill/expr.scm 270 */
				BgL_feffectz00_bglt BgL_arg1663z00_1993;

				{	/* SawMill/expr.scm 270 */
					BgL_feffectz00_bglt BgL_new1254z00_1994;

					{	/* SawMill/expr.scm 270 */
						BgL_feffectz00_bglt BgL_new1253z00_1995;

						BgL_new1253z00_1995 =
							((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_feffectz00_bgl))));
						{	/* SawMill/expr.scm 270 */
							long BgL_arg1664z00_1996;

							{	/* SawMill/expr.scm 270 */
								long BgL_res2146z00_3024;

								BgL_res2146z00_3024 =
									BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
								BgL_arg1664z00_1996 = BgL_res2146z00_3024;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1253z00_1995),
								BgL_arg1664z00_1996);
						}
						BgL_new1254z00_1994 = BgL_new1253z00_1995;
					}
					((((BgL_feffectz00_bglt) COBJECT(BgL_new1254z00_1994))->BgL_readz00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_feffectz00_bglt) COBJECT(BgL_new1254z00_1994))->
							BgL_writez00) = ((obj_t) BNIL), BUNSPEC);
					BgL_arg1663z00_1993 = BgL_new1254z00_1994;
				}
				BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 8)),
					CNST_TABLE_REF(((long) 7)), ((obj_t) BgL_arg1663z00_1993));
			}
			{	/* SawMill/expr.scm 271 */
				BgL_feffectz00_bglt BgL_arg1667z00_1997;

				{	/* SawMill/expr.scm 271 */
					BgL_feffectz00_bglt BgL_new1256z00_1998;

					{	/* SawMill/expr.scm 271 */
						BgL_feffectz00_bglt BgL_new1255z00_1999;

						BgL_new1255z00_1999 =
							((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_feffectz00_bgl))));
						{	/* SawMill/expr.scm 271 */
							long BgL_arg1669z00_2000;

							{	/* SawMill/expr.scm 271 */
								long BgL_res2147z00_3028;

								BgL_res2147z00_3028 =
									BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
								BgL_arg1669z00_2000 = BgL_res2147z00_3028;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1255z00_1999),
								BgL_arg1669z00_2000);
						}
						BgL_new1256z00_1998 = BgL_new1255z00_1999;
					}
					((((BgL_feffectz00_bglt) COBJECT(BgL_new1256z00_1998))->BgL_readz00) =
						((obj_t) CNST_TABLE_REF(((long) 5))), BUNSPEC);
					((((BgL_feffectz00_bglt) COBJECT(BgL_new1256z00_1998))->
							BgL_writez00) = ((obj_t) BNIL), BUNSPEC);
					BgL_arg1667z00_1997 = BgL_new1256z00_1998;
				}
				BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 9)),
					CNST_TABLE_REF(((long) 7)), ((obj_t) BgL_arg1667z00_1997));
			}
			{	/* SawMill/expr.scm 272 */
				BgL_feffectz00_bglt BgL_arg1672z00_2001;

				{	/* SawMill/expr.scm 272 */
					BgL_feffectz00_bglt BgL_new1258z00_2002;

					{	/* SawMill/expr.scm 272 */
						BgL_feffectz00_bglt BgL_new1257z00_2003;

						BgL_new1257z00_2003 =
							((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_feffectz00_bgl))));
						{	/* SawMill/expr.scm 272 */
							long BgL_arg1684z00_2004;

							{	/* SawMill/expr.scm 272 */
								long BgL_res2148z00_3032;

								BgL_res2148z00_3032 =
									BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
								BgL_arg1684z00_2004 = BgL_res2148z00_3032;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1257z00_2003),
								BgL_arg1684z00_2004);
						}
						BgL_new1258z00_2002 = BgL_new1257z00_2003;
					}
					((((BgL_feffectz00_bglt) COBJECT(BgL_new1258z00_2002))->BgL_readz00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_feffectz00_bglt) COBJECT(BgL_new1258z00_2002))->
							BgL_writez00) = ((obj_t) CNST_TABLE_REF(((long) 5))), BUNSPEC);
					BgL_arg1672z00_2001 = BgL_new1258z00_2002;
				}
				BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 10)),
					CNST_TABLE_REF(((long) 7)), ((obj_t) BgL_arg1672z00_2001));
			}
			{	/* SawMill/expr.scm 273 */
				BgL_feffectz00_bglt BgL_arg1685z00_2005;

				{	/* SawMill/expr.scm 273 */
					BgL_feffectz00_bglt BgL_new1260z00_2006;

					{	/* SawMill/expr.scm 273 */
						BgL_feffectz00_bglt BgL_new1259z00_2007;

						BgL_new1259z00_2007 =
							((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_feffectz00_bgl))));
						{	/* SawMill/expr.scm 273 */
							long BgL_arg1686z00_2008;

							{	/* SawMill/expr.scm 273 */
								long BgL_res2149z00_3036;

								BgL_res2149z00_3036 =
									BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
								BgL_arg1686z00_2008 = BgL_res2149z00_3036;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1259z00_2007),
								BgL_arg1686z00_2008);
						}
						BgL_new1260z00_2006 = BgL_new1259z00_2007;
					}
					((((BgL_feffectz00_bglt) COBJECT(BgL_new1260z00_2006))->BgL_readz00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_feffectz00_bglt) COBJECT(BgL_new1260z00_2006))->
							BgL_writez00) = ((obj_t) CNST_TABLE_REF(((long) 1))), BUNSPEC);
					BgL_arg1685z00_2005 = BgL_new1260z00_2006;
				}
				BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 11)),
					CNST_TABLE_REF(((long) 7)), ((obj_t) BgL_arg1685z00_2005));
			}
			{	/* SawMill/expr.scm 274 */
				BgL_feffectz00_bglt BgL_arg1687z00_2009;

				{	/* SawMill/expr.scm 274 */
					BgL_feffectz00_bglt BgL_new1262z00_2010;

					{	/* SawMill/expr.scm 274 */
						BgL_feffectz00_bglt BgL_new1261z00_2011;

						BgL_new1261z00_2011 =
							((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_feffectz00_bgl))));
						{	/* SawMill/expr.scm 274 */
							long BgL_arg1688z00_2012;

							{	/* SawMill/expr.scm 274 */
								long BgL_res2150z00_3040;

								BgL_res2150z00_3040 =
									BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
								BgL_arg1688z00_2012 = BgL_res2150z00_3040;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1261z00_2011),
								BgL_arg1688z00_2012);
						}
						BgL_new1262z00_2010 = BgL_new1261z00_2011;
					}
					((((BgL_feffectz00_bglt) COBJECT(BgL_new1262z00_2010))->BgL_readz00) =
						((obj_t) CNST_TABLE_REF(((long) 12))), BUNSPEC);
					((((BgL_feffectz00_bglt) COBJECT(BgL_new1262z00_2010))->
							BgL_writez00) = ((obj_t) BNIL), BUNSPEC);
					BgL_arg1687z00_2009 = BgL_new1262z00_2010;
				}
				BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 13)),
					CNST_TABLE_REF(((long) 7)), ((obj_t) BgL_arg1687z00_2009));
			}
			{	/* SawMill/expr.scm 275 */
				BgL_feffectz00_bglt BgL_arg1692z00_2013;

				{	/* SawMill/expr.scm 275 */
					BgL_feffectz00_bglt BgL_new1264z00_2014;

					{	/* SawMill/expr.scm 275 */
						BgL_feffectz00_bglt BgL_new1263z00_2015;

						BgL_new1263z00_2015 =
							((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_feffectz00_bgl))));
						{	/* SawMill/expr.scm 275 */
							long BgL_arg1695z00_2016;

							{	/* SawMill/expr.scm 275 */
								long BgL_res2151z00_3044;

								BgL_res2151z00_3044 =
									BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
								BgL_arg1695z00_2016 = BgL_res2151z00_3044;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1263z00_2015),
								BgL_arg1695z00_2016);
						}
						BgL_new1264z00_2014 = BgL_new1263z00_2015;
					}
					((((BgL_feffectz00_bglt) COBJECT(BgL_new1264z00_2014))->BgL_readz00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_feffectz00_bglt) COBJECT(BgL_new1264z00_2014))->
							BgL_writez00) = ((obj_t) CNST_TABLE_REF(((long) 12))), BUNSPEC);
					BgL_arg1692z00_2013 = BgL_new1264z00_2014;
				}
				return
					BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 14)),
					CNST_TABLE_REF(((long) 7)), ((obj_t) BgL_arg1692z00_2013));
		}}

	}



/* pre-build-tree */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2buildzd2treez00zzsaw_exprz00(BgL_backendz00_bglt BgL_bez00_90,
		obj_t BgL_paramsz00_91, obj_t BgL_lz00_92)
	{
		{	/* SawMill/expr.scm 17 */
			BGl_prezd2markzd2localsz00zzsaw_exprz00(BgL_paramsz00_91, BgL_lz00_92);
			BGl_za2countza2z00zzsaw_exprz00 = ((long) 0);
			{
				obj_t BgL_l1536z00_2044;

				{	/* SawMill/expr.scm 20 */
					bool_t BgL_tmpz00_3930;

					BgL_l1536z00_2044 = BgL_lz00_92;
				BgL_zc3z04anonymousza31726ze3z87_2045:
					if (PAIRP(BgL_l1536z00_2044))
						{	/* SawMill/expr.scm 20 */
							{	/* SawMill/expr.scm 22 */
								obj_t BgL_bz00_2047;

								BgL_bz00_2047 = CAR(BgL_l1536z00_2044);
								{	/* SawMill/expr.scm 22 */
									obj_t BgL_lz00_2048;
									obj_t BgL_movesz00_2049;

									BgL_lz00_2048 =
										(((BgL_blockz00_bglt) COBJECT(
												((BgL_blockz00_bglt) BgL_bz00_2047)))->BgL_firstz00);
									BgL_movesz00_2049 = BNIL;
									{
										obj_t BgL_l1534z00_2051;

										BgL_l1534z00_2051 = BgL_lz00_2048;
									BgL_zc3z04anonymousza31728ze3z87_2052:
										if (PAIRP(BgL_l1534z00_2051))
											{	/* SawMill/expr.scm 23 */
												{	/* SawMill/expr.scm 23 */
													obj_t BgL_insz00_2054;

													BgL_insz00_2054 = CAR(BgL_l1534z00_2051);
													BgL_movesz00_2049 =
														BGl_prezd2analysezd2zzsaw_exprz00(BgL_bez00_90,
														BgL_movesz00_2049, BgL_insz00_2054);
												}
												{
													obj_t BgL_l1534z00_3940;

													BgL_l1534z00_3940 = CDR(BgL_l1534z00_2051);
													BgL_l1534z00_2051 = BgL_l1534z00_3940;
													goto BgL_zc3z04anonymousza31728ze3z87_2052;
												}
											}
										else
											{	/* SawMill/expr.scm 23 */
												((bool_t) 1);
											}
									}
								}
							}
							{
								obj_t BgL_l1536z00_3942;

								BgL_l1536z00_3942 = CDR(BgL_l1536z00_2044);
								BgL_l1536z00_2044 = BgL_l1536z00_3942;
								goto BgL_zc3z04anonymousza31726ze3z87_2045;
							}
						}
					else
						{	/* SawMill/expr.scm 20 */
							BgL_tmpz00_3930 = ((bool_t) 1);
						}
					return BBOOL(BgL_tmpz00_3930);
				}
			}
		}

	}



/* &pre-build-tree */
	obj_t BGl_z62prezd2buildzd2treez62zzsaw_exprz00(obj_t BgL_envz00_3450,
		obj_t BgL_bez00_3451, obj_t BgL_paramsz00_3452, obj_t BgL_lz00_3453)
	{
		{	/* SawMill/expr.scm 17 */
			return
				BGl_prezd2buildzd2treez00zzsaw_exprz00(
				((BgL_backendz00_bglt) BgL_bez00_3451), BgL_paramsz00_3452,
				BgL_lz00_3453);
		}

	}



/* pre-mark-locals */
	bool_t BGl_prezd2markzd2localsz00zzsaw_exprz00(obj_t BgL_paramsz00_93,
		obj_t BgL_lz00_94)
	{
		{	/* SawMill/expr.scm 27 */
			{	/* SawMill/expr.scm 28 */
				struct bgl_cell BgL_box2328_3607z00;
				obj_t BgL_nz00_3607;

				BgL_nz00_3607 = MAKE_CELL_STACK(BINT(((long) 0)), BgL_box2328_3607z00);
				{
					obj_t BgL_rz00_2090;
					BgL_blockz00_bglt BgL_bz00_2100;

					{
						obj_t BgL_l1544z00_2066;

						BgL_l1544z00_2066 = BgL_paramsz00_93;
					BgL_zc3z04anonymousza31733ze3z87_2067:
						if (PAIRP(BgL_l1544z00_2066))
							{	/* SawMill/expr.scm 52 */
								BGl_regzd2ze3pregzf2writeze70z24zzsaw_exprz00(BgL_nz00_3607,
									CAR(BgL_l1544z00_2066));
								{
									obj_t BgL_l1544z00_3952;

									BgL_l1544z00_3952 = CDR(BgL_l1544z00_2066);
									BgL_l1544z00_2066 = BgL_l1544z00_3952;
									goto BgL_zc3z04anonymousza31733ze3z87_2067;
								}
							}
						else
							{	/* SawMill/expr.scm 52 */
								((bool_t) 1);
							}
					}
					{
						obj_t BgL_l1546z00_2073;

						BgL_l1546z00_2073 = BgL_lz00_94;
					BgL_zc3z04anonymousza31740ze3z87_2074:
						if (PAIRP(BgL_l1546z00_2073))
							{	/* SawMill/expr.scm 53 */
								{	/* SawMill/expr.scm 53 */
									obj_t BgL_arg1742z00_2076;

									BgL_arg1742z00_2076 = CAR(BgL_l1546z00_2073);
									BgL_bz00_2100 = ((BgL_blockz00_bglt) BgL_arg1742z00_2076);
									{	/* SawMill/expr.scm 47 */
										obj_t BgL_g1543z00_2102;

										BgL_g1543z00_2102 =
											(((BgL_blockz00_bglt) COBJECT(BgL_bz00_2100))->
											BgL_firstz00);
										{
											obj_t BgL_l1541z00_2104;

											BgL_l1541z00_2104 = BgL_g1543z00_2102;
										BgL_zc3z04anonymousza31756ze3z87_2105:
											if (PAIRP(BgL_l1541z00_2104))
												{	/* SawMill/expr.scm 51 */
													{	/* SawMill/expr.scm 48 */
														obj_t BgL_insz00_2107;

														BgL_insz00_2107 = CAR(BgL_l1541z00_2104);
														if (CBOOL(
																(((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				BgL_insz00_2107)))->BgL_destz00)))
															{	/* SawMill/expr.scm 49 */
																obj_t BgL_arg1759z00_2110;

																BgL_arg1759z00_2110 =
																	(((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				BgL_insz00_2107)))->BgL_destz00);
																BGl_regzd2ze3pregzf2writeze70z24zzsaw_exprz00
																	(BgL_nz00_3607, BgL_arg1759z00_2110);
															}
														else
															{	/* SawMill/expr.scm 49 */
																BFALSE;
															}
														{	/* SawMill/expr.scm 50 */
															obj_t BgL_g1540z00_2111;

															BgL_g1540z00_2111 =
																(((BgL_rtl_insz00_bglt) COBJECT(
																		((BgL_rtl_insz00_bglt) BgL_insz00_2107)))->
																BgL_argsz00);
															{
																obj_t BgL_l1538z00_2113;

																BgL_l1538z00_2113 = BgL_g1540z00_2111;
															BgL_zc3z04anonymousza31760ze3z87_2114:
																if (PAIRP(BgL_l1538z00_2113))
																	{	/* SawMill/expr.scm 50 */
																		BgL_rz00_2090 = CAR(BgL_l1538z00_2113);
																		{	/* SawMill/expr.scm 37 */
																			obj_t BgL_sz00_2092;

																			BgL_sz00_2092 =
																				BGl_regzd2ze3pregze70zd6zzsaw_exprz00
																				(BgL_nz00_3607, BgL_rz00_2090);
																			if ((BgL_sz00_2092 ==
																					CNST_TABLE_REF(((long) 15))))
																				{	/* SawMill/expr.scm 38 */
																					obj_t BgL_nstatz00_3072;

																					BgL_nstatz00_3072 =
																						CNST_TABLE_REF(((long) 16));
																					{
																						BgL_pregz00_bglt BgL_auxz00_3977;

																						{
																							obj_t BgL_auxz00_3978;

																							{	/* SawMill/expr.scm 29 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_3979;
																								BgL_tmpz00_3979 =
																									((BgL_objectz00_bglt) (
																										(BgL_rtl_regz00_bglt)
																										BgL_rz00_2090));
																								BgL_auxz00_3978 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_3979);
																							}
																							BgL_auxz00_3977 =
																								((BgL_pregz00_bglt)
																								BgL_auxz00_3978);
																						}
																						((((BgL_pregz00_bglt)
																									COBJECT(BgL_auxz00_3977))->
																								BgL_statusz00) =
																							((obj_t) BgL_nstatz00_3072),
																							BUNSPEC);
																				}}
																			else
																				{	/* SawMill/expr.scm 38 */
																					if (
																						(BgL_sz00_2092 ==
																							CNST_TABLE_REF(((long) 17))))
																						{	/* SawMill/expr.scm 39 */
																							obj_t BgL_nstatz00_3075;

																							BgL_nstatz00_3075 =
																								CNST_TABLE_REF(((long) 18));
																							{
																								BgL_pregz00_bglt
																									BgL_auxz00_3989;
																								{
																									obj_t BgL_auxz00_3990;

																									{	/* SawMill/expr.scm 29 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_3991;
																										BgL_tmpz00_3991 =
																											((BgL_objectz00_bglt) (
																												(BgL_rtl_regz00_bglt)
																												BgL_rz00_2090));
																										BgL_auxz00_3990 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_3991);
																									}
																									BgL_auxz00_3989 =
																										((BgL_pregz00_bglt)
																										BgL_auxz00_3990);
																								}
																								((((BgL_pregz00_bglt)
																											COBJECT
																											(BgL_auxz00_3989))->
																										BgL_statusz00) =
																									((obj_t) BgL_nstatz00_3075),
																									BUNSPEC);
																						}}
																					else
																						{	/* SawMill/expr.scm 40 */
																							obj_t BgL_nstatz00_3078;

																							BgL_nstatz00_3078 =
																								CNST_TABLE_REF(((long) 19));
																							{
																								BgL_pregz00_bglt
																									BgL_auxz00_3998;
																								{
																									obj_t BgL_auxz00_3999;

																									{	/* SawMill/expr.scm 29 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_4000;
																										BgL_tmpz00_4000 =
																											((BgL_objectz00_bglt) (
																												(BgL_rtl_regz00_bglt)
																												BgL_rz00_2090));
																										BgL_auxz00_3999 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_4000);
																									}
																									BgL_auxz00_3998 =
																										((BgL_pregz00_bglt)
																										BgL_auxz00_3999);
																								}
																								((((BgL_pregz00_bglt)
																											COBJECT
																											(BgL_auxz00_3998))->
																										BgL_statusz00) =
																									((obj_t) BgL_nstatz00_3078),
																									BUNSPEC);
																		}}}}
																		{
																			obj_t BgL_l1538z00_4007;

																			BgL_l1538z00_4007 =
																				CDR(BgL_l1538z00_2113);
																			BgL_l1538z00_2113 = BgL_l1538z00_4007;
																			goto
																				BgL_zc3z04anonymousza31760ze3z87_2114;
																		}
																	}
																else
																	{	/* SawMill/expr.scm 50 */
																		((bool_t) 1);
																	}
															}
														}
													}
													{
														obj_t BgL_l1541z00_4009;

														BgL_l1541z00_4009 = CDR(BgL_l1541z00_2104);
														BgL_l1541z00_2104 = BgL_l1541z00_4009;
														goto BgL_zc3z04anonymousza31756ze3z87_2105;
													}
												}
											else
												{	/* SawMill/expr.scm 51 */
													((bool_t) 1);
												}
										}
									}
								}
								{
									obj_t BgL_l1546z00_4012;

									BgL_l1546z00_4012 = CDR(BgL_l1546z00_2073);
									BgL_l1546z00_2073 = BgL_l1546z00_4012;
									goto BgL_zc3z04anonymousza31740ze3z87_2074;
								}
							}
						else
							{	/* SawMill/expr.scm 53 */
								return ((bool_t) 1);
							}
					}
				}
			}
		}

	}



/* reg->preg~0 */
	obj_t BGl_regzd2ze3pregze70zd6zzsaw_exprz00(obj_t BgL_nz00_3604,
		obj_t BgL_rz00_2082)
	{
		{	/* SawMill/expr.scm 35 */
			if (BGl_isazf3zf3zz__objectz00(BgL_rz00_2082, BGl_pregz00zzsaw_exprz00))
				{
					BgL_pregz00_bglt BgL_auxz00_4016;

					{
						obj_t BgL_auxz00_4017;

						{	/* SawMill/expr.scm 32 */
							BgL_objectz00_bglt BgL_tmpz00_4018;

							BgL_tmpz00_4018 =
								((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2082));
							BgL_auxz00_4017 = BGL_OBJECT_WIDENING(BgL_tmpz00_4018);
						}
						BgL_auxz00_4016 = ((BgL_pregz00_bglt) BgL_auxz00_4017);
					}
					return (((BgL_pregz00_bglt) COBJECT(BgL_auxz00_4016))->BgL_statusz00);
				}
			else
				{	/* SawMill/expr.scm 31 */
					{	/* SawMill/expr.scm 33 */
						BgL_pregz00_bglt BgL_wide1199z00_2087;

						BgL_wide1199z00_2087 =
							((BgL_pregz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_pregz00_bgl))));
						{	/* SawMill/expr.scm 33 */
							obj_t BgL_auxz00_4029;
							BgL_objectz00_bglt BgL_tmpz00_4025;

							BgL_auxz00_4029 = ((obj_t) BgL_wide1199z00_2087);
							BgL_tmpz00_4025 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2082)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4025, BgL_auxz00_4029);
						}
						((BgL_objectz00_bglt)
							((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2082)));
						{	/* SawMill/expr.scm 33 */
							long BgL_arg1747z00_2088;

							{	/* SawMill/expr.scm 33 */
								long BgL_res2155z00_3065;

								BgL_res2155z00_3065 = BGL_CLASS_INDEX(BGl_pregz00zzsaw_exprz00);
								BgL_arg1747z00_2088 = BgL_res2155z00_3065;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_rz00_2082))),
								BgL_arg1747z00_2088);
						}
						((BgL_rtl_regz00_bglt)
							((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2082)));
					}
					{
						BgL_pregz00_bglt BgL_auxz00_4043;

						{
							obj_t BgL_auxz00_4044;

							{	/* SawMill/expr.scm 33 */
								BgL_objectz00_bglt BgL_tmpz00_4045;

								BgL_tmpz00_4045 =
									((BgL_objectz00_bglt)
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_rz00_2082)));
								BgL_auxz00_4044 = BGL_OBJECT_WIDENING(BgL_tmpz00_4045);
							}
							BgL_auxz00_4043 = ((BgL_pregz00_bglt) BgL_auxz00_4044);
						}
						((((BgL_pregz00_bglt) COBJECT(BgL_auxz00_4043))->BgL_indexz00) =
							((obj_t) CELL_REF(BgL_nz00_3604)), BUNSPEC);
					}
					{
						BgL_pregz00_bglt BgL_auxz00_4052;

						{
							obj_t BgL_auxz00_4053;

							{	/* SawMill/expr.scm 33 */
								BgL_objectz00_bglt BgL_tmpz00_4054;

								BgL_tmpz00_4054 =
									((BgL_objectz00_bglt)
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_rz00_2082)));
								BgL_auxz00_4053 = BGL_OBJECT_WIDENING(BgL_tmpz00_4054);
							}
							BgL_auxz00_4052 = ((BgL_pregz00_bglt) BgL_auxz00_4053);
						}
						((((BgL_pregz00_bglt) COBJECT(BgL_auxz00_4052))->BgL_statusz00) =
							((obj_t) CNST_TABLE_REF(((long) 15))), BUNSPEC);
					}
					((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2082));
					{	/* SawMill/expr.scm 34 */
						obj_t BgL_auxz00_3605;

						BgL_auxz00_3605 = ADDFX(CELL_REF(BgL_nz00_3604), BINT(((long) 1)));
						CELL_SET(BgL_nz00_3604, BgL_auxz00_3605);
					}
					return CNST_TABLE_REF(((long) 15));
		}}

	}



/* reg->preg/write~0 */
	obj_t BGl_regzd2ze3pregzf2writeze70z24zzsaw_exprz00(obj_t BgL_nz00_3606,
		obj_t BgL_rz00_2095)
	{
		{	/* SawMill/expr.scm 45 */
			{	/* SawMill/expr.scm 42 */
				obj_t BgL_sz00_2097;

				BgL_sz00_2097 =
					BGl_regzd2ze3pregze70zd6zzsaw_exprz00(BgL_nz00_3606, BgL_rz00_2095);
				if ((BgL_sz00_2097 == CNST_TABLE_REF(((long) 15))))
					{	/* SawMill/expr.scm 43 */
						obj_t BgL_nstatz00_3081;

						BgL_nstatz00_3081 = CNST_TABLE_REF(((long) 17));
						{
							BgL_pregz00_bglt BgL_auxz00_4072;

							{
								obj_t BgL_auxz00_4073;

								{	/* SawMill/expr.scm 29 */
									BgL_objectz00_bglt BgL_tmpz00_4074;

									BgL_tmpz00_4074 =
										((BgL_objectz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_rz00_2095));
									BgL_auxz00_4073 = BGL_OBJECT_WIDENING(BgL_tmpz00_4074);
								}
								BgL_auxz00_4072 = ((BgL_pregz00_bglt) BgL_auxz00_4073);
							}
							return
								((((BgL_pregz00_bglt) COBJECT(BgL_auxz00_4072))->
									BgL_statusz00) = ((obj_t) BgL_nstatz00_3081), BUNSPEC);
						}
					}
				else
					{	/* SawMill/expr.scm 43 */
						if ((BgL_sz00_2097 == CNST_TABLE_REF(((long) 16))))
							{	/* SawMill/expr.scm 44 */
								obj_t BgL_nstatz00_3084;

								BgL_nstatz00_3084 = CNST_TABLE_REF(((long) 18));
								{
									BgL_pregz00_bglt BgL_auxz00_4084;

									{
										obj_t BgL_auxz00_4085;

										{	/* SawMill/expr.scm 29 */
											BgL_objectz00_bglt BgL_tmpz00_4086;

											BgL_tmpz00_4086 =
												((BgL_objectz00_bglt)
												((BgL_rtl_regz00_bglt) BgL_rz00_2095));
											BgL_auxz00_4085 = BGL_OBJECT_WIDENING(BgL_tmpz00_4086);
										}
										BgL_auxz00_4084 = ((BgL_pregz00_bglt) BgL_auxz00_4085);
									}
									return
										((((BgL_pregz00_bglt) COBJECT(BgL_auxz00_4084))->
											BgL_statusz00) = ((obj_t) BgL_nstatz00_3084), BUNSPEC);
								}
							}
						else
							{	/* SawMill/expr.scm 45 */
								obj_t BgL_nstatz00_3087;

								BgL_nstatz00_3087 = CNST_TABLE_REF(((long) 19));
								{
									BgL_pregz00_bglt BgL_auxz00_4093;

									{
										obj_t BgL_auxz00_4094;

										{	/* SawMill/expr.scm 29 */
											BgL_objectz00_bglt BgL_tmpz00_4095;

											BgL_tmpz00_4095 =
												((BgL_objectz00_bglt)
												((BgL_rtl_regz00_bglt) BgL_rz00_2095));
											BgL_auxz00_4094 = BGL_OBJECT_WIDENING(BgL_tmpz00_4095);
										}
										BgL_auxz00_4093 = ((BgL_pregz00_bglt) BgL_auxz00_4094);
									}
									return
										((((BgL_pregz00_bglt) COBJECT(BgL_auxz00_4093))->
											BgL_statusz00) = ((obj_t) BgL_nstatz00_3087), BUNSPEC);
								}
							}
					}
			}
		}

	}



/* build-tree */
	BGL_EXPORTED_DEF obj_t BGl_buildzd2treezd2zzsaw_exprz00(BgL_backendz00_bglt
		BgL_bez00_95, obj_t BgL_paramsz00_96, obj_t BgL_lz00_97)
	{
		{	/* SawMill/expr.scm 58 */
			{

				BGl_markzd2localszd2zzsaw_exprz00(BgL_paramsz00_96, BgL_lz00_97);
				{
					obj_t BgL_l1550z00_2129;

					{	/* SawMill/expr.scm 72 */
						bool_t BgL_tmpz00_4102;

						BgL_l1550z00_2129 = BgL_lz00_97;
					BgL_zc3z04anonymousza31776ze3z87_2130:
						if (PAIRP(BgL_l1550z00_2129))
							{	/* SawMill/expr.scm 72 */
								{	/* SawMill/expr.scm 73 */
									obj_t BgL_bz00_2132;

									BgL_bz00_2132 = CAR(BgL_l1550z00_2129);
									{	/* SawMill/expr.scm 73 */
										obj_t BgL_lz00_2133;
										obj_t BgL_movesz00_2134;

										BgL_lz00_2133 =
											(((BgL_blockz00_bglt) COBJECT(
													((BgL_blockz00_bglt) BgL_bz00_2132)))->BgL_firstz00);
										BgL_movesz00_2134 = BNIL;
										{
											obj_t BgL_l1548z00_2136;

											BgL_l1548z00_2136 = BgL_lz00_2133;
										BgL_zc3z04anonymousza31778ze3z87_2137:
											if (PAIRP(BgL_l1548z00_2136))
												{	/* SawMill/expr.scm 74 */
													{	/* SawMill/expr.scm 74 */
														obj_t BgL_insz00_2139;

														BgL_insz00_2139 = CAR(BgL_l1548z00_2136);
														BgL_movesz00_2134 =
															BGl_analysez00zzsaw_exprz00(BgL_bez00_95,
															BgL_movesz00_2134, BgL_insz00_2139);
													}
													{
														obj_t BgL_l1548z00_4112;

														BgL_l1548z00_4112 = CDR(BgL_l1548z00_2136);
														BgL_l1548z00_2136 = BgL_l1548z00_4112;
														goto BgL_zc3z04anonymousza31778ze3z87_2137;
													}
												}
											else
												{	/* SawMill/expr.scm 74 */
													((bool_t) 1);
												}
										}
										{	/* SawMill/expr.scm 76 */
											obj_t BgL_rz00_2142;

											BgL_rz00_2142 =
												BGl_filterz12z12zz__r4_control_features_6_9z00
												(BGl_proc2233z00zzsaw_exprz00, BgL_lz00_2133);
											{	/* SawMill/expr.scm 77 */
												obj_t BgL_arg1784z00_2143;

												if (NULLP(BgL_rz00_2142))
													{	/* SawMill/expr.scm 77 */
														BgL_rtl_insz00_bglt BgL_arg1790z00_2145;

														{	/* SawMill/expr.scm 60 */
															BgL_rtl_insz00_bglt BgL_new1203z00_2150;

															{	/* SawMill/expr.scm 60 */
																BgL_rtl_insz00_bglt BgL_new1202z00_2154;

																BgL_new1202z00_2154 =
																	((BgL_rtl_insz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_rtl_insz00_bgl))));
																{	/* SawMill/expr.scm 60 */
																	long BgL_arg1801z00_2155;

																	{	/* SawMill/expr.scm 60 */
																		long BgL_res2161z00_3104;

																		BgL_res2161z00_3104 =
																			BGL_CLASS_INDEX
																			(BGl_rtl_insz00zzsaw_defsz00);
																		BgL_arg1801z00_2155 = BgL_res2161z00_3104;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1202z00_2154),
																		BgL_arg1801z00_2155);
																}
																{	/* SawMill/expr.scm 60 */
																	BgL_objectz00_bglt BgL_tmpz00_4121;

																	BgL_tmpz00_4121 =
																		((BgL_objectz00_bglt) BgL_new1202z00_2154);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4121,
																		BFALSE);
																}
																((BgL_objectz00_bglt) BgL_new1202z00_2154);
																BgL_new1203z00_2150 = BgL_new1202z00_2154;
															}
															((((BgL_rtl_insz00_bglt)
																		COBJECT(BgL_new1203z00_2150))->BgL_locz00) =
																((obj_t) BFALSE), BUNSPEC);
															((((BgL_rtl_insz00_bglt)
																		COBJECT(BgL_new1203z00_2150))->
																	BgL_z52spillz52) = ((obj_t) BNIL), BUNSPEC);
															((((BgL_rtl_insz00_bglt)
																		COBJECT(BgL_new1203z00_2150))->
																	BgL_destz00) = ((obj_t) BFALSE), BUNSPEC);
															{
																BgL_rtl_funz00_bglt BgL_auxz00_4128;

																{	/* SawMill/expr.scm 60 */
																	BgL_rtl_nopz00_bglt BgL_new1205z00_2151;

																	{	/* SawMill/expr.scm 60 */
																		BgL_rtl_nopz00_bglt BgL_new1204z00_2152;

																		BgL_new1204z00_2152 =
																			((BgL_rtl_nopz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_rtl_nopz00_bgl))));
																		{	/* SawMill/expr.scm 60 */
																			long BgL_arg1798z00_2153;

																			{	/* SawMill/expr.scm 60 */
																				long BgL_res2162z00_3109;

																				{	/* SawMill/expr.scm 60 */
																					obj_t BgL_classz00_3108;

																					BgL_classz00_3108 =
																						BGl_rtl_nopz00zzsaw_defsz00;
																					BgL_res2162z00_3109 =
																						BGL_CLASS_INDEX(BgL_classz00_3108);
																				}
																				BgL_arg1798z00_2153 =
																					BgL_res2162z00_3109;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1204z00_2152),
																				BgL_arg1798z00_2153);
																		}
																		BgL_new1205z00_2151 = BgL_new1204z00_2152;
																	}
																	((((BgL_rtl_funz00_bglt) COBJECT(
																					((BgL_rtl_funz00_bglt)
																						BgL_new1205z00_2151)))->
																			BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
																	BgL_auxz00_4128 =
																		((BgL_rtl_funz00_bglt) BgL_new1205z00_2151);
																}
																((((BgL_rtl_insz00_bglt)
																			COBJECT(BgL_new1203z00_2150))->
																		BgL_funz00) =
																	((BgL_rtl_funz00_bglt) BgL_auxz00_4128),
																	BUNSPEC);
															}
															((((BgL_rtl_insz00_bglt)
																		COBJECT(BgL_new1203z00_2150))->
																	BgL_argsz00) = ((obj_t) BNIL), BUNSPEC);
															BgL_arg1790z00_2145 = BgL_new1203z00_2150;
														}
														{	/* SawMill/expr.scm 77 */
															obj_t BgL_list1791z00_2146;

															BgL_list1791z00_2146 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg1790z00_2145), BNIL);
															BgL_arg1784z00_2143 = BgL_list1791z00_2146;
													}}
												else
													{	/* SawMill/expr.scm 77 */
														BgL_arg1784z00_2143 = BgL_rz00_2142;
													}
												((((BgL_blockz00_bglt) COBJECT(
																((BgL_blockz00_bglt) BgL_bz00_2132)))->
														BgL_firstz00) =
													((obj_t) ((obj_t) BgL_arg1784z00_2143)), BUNSPEC);
											}
										}
									}
								}
								{
									obj_t BgL_l1550z00_4143;

									BgL_l1550z00_4143 = CDR(BgL_l1550z00_2129);
									BgL_l1550z00_2129 = BgL_l1550z00_4143;
									goto BgL_zc3z04anonymousza31776ze3z87_2130;
								}
							}
						else
							{	/* SawMill/expr.scm 72 */
								BgL_tmpz00_4102 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_4102);
					}
				}
			}
		}

	}



/* &build-tree */
	obj_t BGl_z62buildzd2treezb0zzsaw_exprz00(obj_t BgL_envz00_3455,
		obj_t BgL_bez00_3456, obj_t BgL_paramsz00_3457, obj_t BgL_lz00_3458)
	{
		{	/* SawMill/expr.scm 58 */
			return
				BGl_buildzd2treezd2zzsaw_exprz00(
				((BgL_backendz00_bglt) BgL_bez00_3456), BgL_paramsz00_3457,
				BgL_lz00_3458);
		}

	}



/* &usefull */
	obj_t BGl_z62usefullz62zzsaw_exprz00(obj_t BgL_envz00_3459,
		obj_t BgL_insz00_3460)
	{
		{	/* SawMill/expr.scm 69 */
			{	/* SawMill/expr.scm 63 */
				bool_t BgL_tmpz00_4148;

				{
					obj_t BgL_insz00_3623;
					obj_t BgL_destz00_3624;

					{	/* SawMill/expr.scm 70 */
						bool_t BgL_test2342z00_4149;

						if (BGl_isazf3zf3zz__objectz00(BgL_insz00_3460,
								BGl_inlinedz00zzsaw_exprz00))
							{	/* SawMill/expr.scm 70 */
								BgL_test2342z00_4149 = ((bool_t) 1);
							}
						else
							{	/* SawMill/expr.scm 70 */
								obj_t BgL_arg1811z00_3629;

								BgL_arg1811z00_3629 =
									(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_insz00_3460)))->BgL_destz00);
								BgL_insz00_3623 = BgL_insz00_3460;
								BgL_destz00_3624 = BgL_arg1811z00_3629;
							BgL_xzd3xzd3_3622:
								{	/* SawMill/expr.scm 63 */
									BgL_rtl_funz00_bglt BgL_funz00_3625;

									BgL_funz00_3625 =
										(((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt) BgL_insz00_3623)))->BgL_funz00);
									{	/* SawMill/expr.scm 64 */
										bool_t BgL_test2344z00_4156;

										{	/* SawMill/expr.scm 64 */
											bool_t BgL_res2163z00_3626;

											BgL_res2163z00_3626 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_funz00_3625), BGl_rtl_movz00zzsaw_defsz00);
											BgL_test2344z00_4156 = BgL_res2163z00_3626;
										}
										if (BgL_test2344z00_4156)
											{	/* SawMill/expr.scm 65 */
												obj_t BgL_argz00_3627;

												{	/* SawMill/expr.scm 65 */
													obj_t BgL_pairz00_3628;

													BgL_pairz00_3628 =
														(((BgL_rtl_insz00_bglt) COBJECT(
																((BgL_rtl_insz00_bglt) BgL_insz00_3623)))->
														BgL_argsz00);
													BgL_argz00_3627 = CAR(BgL_pairz00_3628);
												}
												if (BGl_isazf3zf3zz__objectz00(BgL_argz00_3627,
														BGl_rtl_insz00zzsaw_defsz00))
													{
														obj_t BgL_insz00_4164;

														BgL_insz00_4164 = BgL_argz00_3627;
														BgL_insz00_3623 = BgL_insz00_4164;
														goto BgL_xzd3xzd3_3622;
													}
												else
													{	/* SawMill/expr.scm 66 */
														BgL_test2342z00_4149 =
															(BgL_argz00_3627 == BgL_destz00_3624);
													}
											}
										else
											{	/* SawMill/expr.scm 64 */
												BgL_test2342z00_4149 = ((bool_t) 0);
											}
									}
								}
							}
						if (BgL_test2342z00_4149)
							{	/* SawMill/expr.scm 70 */
								BgL_tmpz00_4148 = ((bool_t) 0);
							}
						else
							{	/* SawMill/expr.scm 70 */
								BgL_tmpz00_4148 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_4148);
			}
		}

	}



/* mark-locals */
	bool_t BGl_markzd2localszd2zzsaw_exprz00(obj_t BgL_paramsz00_98,
		obj_t BgL_lz00_99)
	{
		{	/* SawMill/expr.scm 80 */
			{	/* SawMill/expr.scm 81 */
				struct bgl_cell BgL_box2346_3602z00;
				obj_t BgL_nz00_3602;

				BgL_nz00_3602 = MAKE_CELL_STACK(BINT(((long) 0)), BgL_box2346_3602z00);
				{
					obj_t BgL_rz00_2206;
					BgL_blockz00_bglt BgL_bz00_2216;

					{
						obj_t BgL_l1558z00_2182;

						BgL_l1558z00_2182 = BgL_paramsz00_98;
					BgL_zc3z04anonymousza31821ze3z87_2183:
						if (PAIRP(BgL_l1558z00_2182))
							{	/* SawMill/expr.scm 105 */
								BGl_regzd2ze3iregzf2writeze70z24zzsaw_exprz00(BgL_nz00_3602,
									CAR(BgL_l1558z00_2182));
								{
									obj_t BgL_l1558z00_4172;

									BgL_l1558z00_4172 = CDR(BgL_l1558z00_2182);
									BgL_l1558z00_2182 = BgL_l1558z00_4172;
									goto BgL_zc3z04anonymousza31821ze3z87_2183;
								}
							}
						else
							{	/* SawMill/expr.scm 105 */
								((bool_t) 1);
							}
					}
					{
						obj_t BgL_l1560z00_2189;

						BgL_l1560z00_2189 = BgL_lz00_99;
					BgL_zc3z04anonymousza31826ze3z87_2190:
						if (PAIRP(BgL_l1560z00_2189))
							{	/* SawMill/expr.scm 106 */
								{	/* SawMill/expr.scm 106 */
									obj_t BgL_arg1828z00_2192;

									BgL_arg1828z00_2192 = CAR(BgL_l1560z00_2189);
									BgL_bz00_2216 = ((BgL_blockz00_bglt) BgL_arg1828z00_2192);
									{	/* SawMill/expr.scm 100 */
										obj_t BgL_g1557z00_2218;

										BgL_g1557z00_2218 =
											(((BgL_blockz00_bglt) COBJECT(BgL_bz00_2216))->
											BgL_firstz00);
										{
											obj_t BgL_l1555z00_2220;

											BgL_l1555z00_2220 = BgL_g1557z00_2218;
										BgL_zc3z04anonymousza31841ze3z87_2221:
											if (PAIRP(BgL_l1555z00_2220))
												{	/* SawMill/expr.scm 104 */
													{	/* SawMill/expr.scm 101 */
														obj_t BgL_insz00_2223;

														BgL_insz00_2223 = CAR(BgL_l1555z00_2220);
														if (CBOOL(
																(((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				BgL_insz00_2223)))->BgL_destz00)))
															{	/* SawMill/expr.scm 102 */
																obj_t BgL_arg1845z00_2226;

																BgL_arg1845z00_2226 =
																	(((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				BgL_insz00_2223)))->BgL_destz00);
																BGl_regzd2ze3iregzf2writeze70z24zzsaw_exprz00
																	(BgL_nz00_3602, BgL_arg1845z00_2226);
															}
														else
															{	/* SawMill/expr.scm 102 */
																BFALSE;
															}
														{	/* SawMill/expr.scm 103 */
															obj_t BgL_g1554z00_2227;

															BgL_g1554z00_2227 =
																(((BgL_rtl_insz00_bglt) COBJECT(
																		((BgL_rtl_insz00_bglt) BgL_insz00_2223)))->
																BgL_argsz00);
															{
																obj_t BgL_l1552z00_2229;

																BgL_l1552z00_2229 = BgL_g1554z00_2227;
															BgL_zc3z04anonymousza31846ze3z87_2230:
																if (PAIRP(BgL_l1552z00_2229))
																	{	/* SawMill/expr.scm 103 */
																		BgL_rz00_2206 = CAR(BgL_l1552z00_2229);
																		{	/* SawMill/expr.scm 90 */
																			obj_t BgL_sz00_2208;

																			BgL_sz00_2208 =
																				BGl_regzd2ze3iregze70zd6zzsaw_exprz00
																				(BgL_nz00_3602, BgL_rz00_2206);
																			if ((BgL_sz00_2208 ==
																					CNST_TABLE_REF(((long) 15))))
																				{	/* SawMill/expr.scm 91 */
																					obj_t BgL_nstatz00_3144;

																					BgL_nstatz00_3144 =
																						CNST_TABLE_REF(((long) 16));
																					{
																						BgL_iregz00_bglt BgL_auxz00_4197;

																						{
																							obj_t BgL_auxz00_4198;

																							{	/* SawMill/expr.scm 82 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_4199;
																								BgL_tmpz00_4199 =
																									((BgL_objectz00_bglt) (
																										(BgL_rtl_regz00_bglt)
																										BgL_rz00_2206));
																								BgL_auxz00_4198 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_4199);
																							}
																							BgL_auxz00_4197 =
																								((BgL_iregz00_bglt)
																								BgL_auxz00_4198);
																						}
																						((((BgL_iregz00_bglt)
																									COBJECT(BgL_auxz00_4197))->
																								BgL_statusz00) =
																							((obj_t) BgL_nstatz00_3144),
																							BUNSPEC);
																				}}
																			else
																				{	/* SawMill/expr.scm 91 */
																					if (
																						(BgL_sz00_2208 ==
																							CNST_TABLE_REF(((long) 17))))
																						{	/* SawMill/expr.scm 92 */
																							obj_t BgL_nstatz00_3147;

																							BgL_nstatz00_3147 =
																								CNST_TABLE_REF(((long) 18));
																							{
																								BgL_iregz00_bglt
																									BgL_auxz00_4209;
																								{
																									obj_t BgL_auxz00_4210;

																									{	/* SawMill/expr.scm 82 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_4211;
																										BgL_tmpz00_4211 =
																											((BgL_objectz00_bglt) (
																												(BgL_rtl_regz00_bglt)
																												BgL_rz00_2206));
																										BgL_auxz00_4210 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_4211);
																									}
																									BgL_auxz00_4209 =
																										((BgL_iregz00_bglt)
																										BgL_auxz00_4210);
																								}
																								((((BgL_iregz00_bglt)
																											COBJECT
																											(BgL_auxz00_4209))->
																										BgL_statusz00) =
																									((obj_t) BgL_nstatz00_3147),
																									BUNSPEC);
																						}}
																					else
																						{	/* SawMill/expr.scm 93 */
																							obj_t BgL_nstatz00_3150;

																							BgL_nstatz00_3150 =
																								CNST_TABLE_REF(((long) 19));
																							{
																								BgL_iregz00_bglt
																									BgL_auxz00_4218;
																								{
																									obj_t BgL_auxz00_4219;

																									{	/* SawMill/expr.scm 82 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_4220;
																										BgL_tmpz00_4220 =
																											((BgL_objectz00_bglt) (
																												(BgL_rtl_regz00_bglt)
																												BgL_rz00_2206));
																										BgL_auxz00_4219 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_4220);
																									}
																									BgL_auxz00_4218 =
																										((BgL_iregz00_bglt)
																										BgL_auxz00_4219);
																								}
																								((((BgL_iregz00_bglt)
																											COBJECT
																											(BgL_auxz00_4218))->
																										BgL_statusz00) =
																									((obj_t) BgL_nstatz00_3150),
																									BUNSPEC);
																		}}}}
																		{
																			obj_t BgL_l1552z00_4227;

																			BgL_l1552z00_4227 =
																				CDR(BgL_l1552z00_2229);
																			BgL_l1552z00_2229 = BgL_l1552z00_4227;
																			goto
																				BgL_zc3z04anonymousza31846ze3z87_2230;
																		}
																	}
																else
																	{	/* SawMill/expr.scm 103 */
																		((bool_t) 1);
																	}
															}
														}
													}
													{
														obj_t BgL_l1555z00_4229;

														BgL_l1555z00_4229 = CDR(BgL_l1555z00_2220);
														BgL_l1555z00_2220 = BgL_l1555z00_4229;
														goto BgL_zc3z04anonymousza31841ze3z87_2221;
													}
												}
											else
												{	/* SawMill/expr.scm 104 */
													((bool_t) 1);
												}
										}
									}
								}
								{
									obj_t BgL_l1560z00_4232;

									BgL_l1560z00_4232 = CDR(BgL_l1560z00_2189);
									BgL_l1560z00_2189 = BgL_l1560z00_4232;
									goto BgL_zc3z04anonymousza31826ze3z87_2190;
								}
							}
						else
							{	/* SawMill/expr.scm 106 */
								return ((bool_t) 1);
							}
					}
				}
			}
		}

	}



/* reg->ireg~0 */
	obj_t BGl_regzd2ze3iregze70zd6zzsaw_exprz00(obj_t BgL_nz00_3599,
		obj_t BgL_rz00_2198)
	{
		{	/* SawMill/expr.scm 88 */
			if (BGl_isazf3zf3zz__objectz00(BgL_rz00_2198, BGl_iregz00zzsaw_exprz00))
				{
					BgL_iregz00_bglt BgL_auxz00_4236;

					{
						obj_t BgL_auxz00_4237;

						{	/* SawMill/expr.scm 85 */
							BgL_objectz00_bglt BgL_tmpz00_4238;

							BgL_tmpz00_4238 =
								((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2198));
							BgL_auxz00_4237 = BGL_OBJECT_WIDENING(BgL_tmpz00_4238);
						}
						BgL_auxz00_4236 = ((BgL_iregz00_bglt) BgL_auxz00_4237);
					}
					return (((BgL_iregz00_bglt) COBJECT(BgL_auxz00_4236))->BgL_statusz00);
				}
			else
				{	/* SawMill/expr.scm 84 */
					{	/* SawMill/expr.scm 86 */
						BgL_iregz00_bglt BgL_wide1208z00_2203;

						BgL_wide1208z00_2203 =
							((BgL_iregz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_iregz00_bgl))));
						{	/* SawMill/expr.scm 86 */
							obj_t BgL_auxz00_4249;
							BgL_objectz00_bglt BgL_tmpz00_4245;

							BgL_auxz00_4249 = ((obj_t) BgL_wide1208z00_2203);
							BgL_tmpz00_4245 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2198)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4245, BgL_auxz00_4249);
						}
						((BgL_objectz00_bglt)
							((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2198)));
						{	/* SawMill/expr.scm 86 */
							long BgL_arg1833z00_2204;

							{	/* SawMill/expr.scm 86 */
								long BgL_res2171z00_3137;

								BgL_res2171z00_3137 = BGL_CLASS_INDEX(BGl_iregz00zzsaw_exprz00);
								BgL_arg1833z00_2204 = BgL_res2171z00_3137;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_rz00_2198))),
								BgL_arg1833z00_2204);
						}
						((BgL_rtl_regz00_bglt)
							((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2198)));
					}
					{
						BgL_iregz00_bglt BgL_auxz00_4263;

						{
							obj_t BgL_auxz00_4264;

							{	/* SawMill/expr.scm 86 */
								BgL_objectz00_bglt BgL_tmpz00_4265;

								BgL_tmpz00_4265 =
									((BgL_objectz00_bglt)
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_rz00_2198)));
								BgL_auxz00_4264 = BGL_OBJECT_WIDENING(BgL_tmpz00_4265);
							}
							BgL_auxz00_4263 = ((BgL_iregz00_bglt) BgL_auxz00_4264);
						}
						((((BgL_iregz00_bglt) COBJECT(BgL_auxz00_4263))->BgL_indexz00) =
							((obj_t) CELL_REF(BgL_nz00_3599)), BUNSPEC);
					}
					{
						BgL_iregz00_bglt BgL_auxz00_4272;

						{
							obj_t BgL_auxz00_4273;

							{	/* SawMill/expr.scm 86 */
								BgL_objectz00_bglt BgL_tmpz00_4274;

								BgL_tmpz00_4274 =
									((BgL_objectz00_bglt)
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_rz00_2198)));
								BgL_auxz00_4273 = BGL_OBJECT_WIDENING(BgL_tmpz00_4274);
							}
							BgL_auxz00_4272 = ((BgL_iregz00_bglt) BgL_auxz00_4273);
						}
						((((BgL_iregz00_bglt) COBJECT(BgL_auxz00_4272))->BgL_statusz00) =
							((obj_t) CNST_TABLE_REF(((long) 15))), BUNSPEC);
					}
					((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2198));
					{	/* SawMill/expr.scm 87 */
						obj_t BgL_auxz00_3600;

						BgL_auxz00_3600 = ADDFX(CELL_REF(BgL_nz00_3599), BINT(((long) 1)));
						CELL_SET(BgL_nz00_3599, BgL_auxz00_3600);
					}
					return CNST_TABLE_REF(((long) 15));
		}}

	}



/* reg->ireg/write~0 */
	obj_t BGl_regzd2ze3iregzf2writeze70z24zzsaw_exprz00(obj_t BgL_nz00_3601,
		obj_t BgL_rz00_2211)
	{
		{	/* SawMill/expr.scm 98 */
			{	/* SawMill/expr.scm 95 */
				obj_t BgL_sz00_2213;

				BgL_sz00_2213 =
					BGl_regzd2ze3iregze70zd6zzsaw_exprz00(BgL_nz00_3601, BgL_rz00_2211);
				if ((BgL_sz00_2213 == CNST_TABLE_REF(((long) 15))))
					{	/* SawMill/expr.scm 96 */
						obj_t BgL_nstatz00_3153;

						BgL_nstatz00_3153 = CNST_TABLE_REF(((long) 17));
						{
							BgL_iregz00_bglt BgL_auxz00_4292;

							{
								obj_t BgL_auxz00_4293;

								{	/* SawMill/expr.scm 82 */
									BgL_objectz00_bglt BgL_tmpz00_4294;

									BgL_tmpz00_4294 =
										((BgL_objectz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_rz00_2211));
									BgL_auxz00_4293 = BGL_OBJECT_WIDENING(BgL_tmpz00_4294);
								}
								BgL_auxz00_4292 = ((BgL_iregz00_bglt) BgL_auxz00_4293);
							}
							return
								((((BgL_iregz00_bglt) COBJECT(BgL_auxz00_4292))->
									BgL_statusz00) = ((obj_t) BgL_nstatz00_3153), BUNSPEC);
						}
					}
				else
					{	/* SawMill/expr.scm 96 */
						if ((BgL_sz00_2213 == CNST_TABLE_REF(((long) 16))))
							{	/* SawMill/expr.scm 97 */
								obj_t BgL_nstatz00_3156;

								BgL_nstatz00_3156 = CNST_TABLE_REF(((long) 18));
								{
									BgL_iregz00_bglt BgL_auxz00_4304;

									{
										obj_t BgL_auxz00_4305;

										{	/* SawMill/expr.scm 82 */
											BgL_objectz00_bglt BgL_tmpz00_4306;

											BgL_tmpz00_4306 =
												((BgL_objectz00_bglt)
												((BgL_rtl_regz00_bglt) BgL_rz00_2211));
											BgL_auxz00_4305 = BGL_OBJECT_WIDENING(BgL_tmpz00_4306);
										}
										BgL_auxz00_4304 = ((BgL_iregz00_bglt) BgL_auxz00_4305);
									}
									return
										((((BgL_iregz00_bglt) COBJECT(BgL_auxz00_4304))->
											BgL_statusz00) = ((obj_t) BgL_nstatz00_3156), BUNSPEC);
								}
							}
						else
							{	/* SawMill/expr.scm 98 */
								obj_t BgL_nstatz00_3159;

								BgL_nstatz00_3159 = CNST_TABLE_REF(((long) 19));
								{
									BgL_iregz00_bglt BgL_auxz00_4313;

									{
										obj_t BgL_auxz00_4314;

										{	/* SawMill/expr.scm 82 */
											BgL_objectz00_bglt BgL_tmpz00_4315;

											BgL_tmpz00_4315 =
												((BgL_objectz00_bglt)
												((BgL_rtl_regz00_bglt) BgL_rz00_2211));
											BgL_auxz00_4314 = BGL_OBJECT_WIDENING(BgL_tmpz00_4315);
										}
										BgL_auxz00_4313 = ((BgL_iregz00_bglt) BgL_auxz00_4314);
									}
									return
										((((BgL_iregz00_bglt) COBJECT(BgL_auxz00_4313))->
											BgL_statusz00) = ((obj_t) BgL_nstatz00_3159), BUNSPEC);
								}
							}
					}
			}
		}

	}



/* pre-analyse */
	obj_t BGl_prezd2analysezd2zzsaw_exprz00(BgL_backendz00_bglt BgL_bz00_100,
		obj_t BgL_movingz00_101, obj_t BgL_insz00_102)
	{
		{	/* SawMill/expr.scm 112 */
			{	/* SawMill/expr.scm 113 */
				obj_t BgL_inszd2effectzd2_2242;
				obj_t BgL_argsz00_2243;

				{	/* SawMill/expr.scm 113 */
					BgL_rtl_funz00_bglt BgL_arg1882z00_2284;

					BgL_arg1882z00_2284 =
						(((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_insz00_102)))->BgL_funz00);
					BgL_inszd2effectzd2_2242 =
						BGl_effectsz00zzsaw_exprz00(BgL_arg1882z00_2284);
				}
				BgL_argsz00_2243 =
					(((BgL_rtl_insz00_bglt) COBJECT(
							((BgL_rtl_insz00_bglt) BgL_insz00_102)))->BgL_argsz00);
				{
					obj_t BgL_lz00_2264;
					obj_t BgL_rz00_2265;
					obj_t BgL_treez00_2259;
					obj_t BgL_posz00_2260;

					{	/* SawMill/expr.scm 128 */
						obj_t BgL_rz00_2246;
						obj_t BgL_dz00_2247;

						BgL_lz00_2264 = BgL_movingz00_101;
						BgL_rz00_2265 = BNIL;
					BgL_zc3z04anonymousza31866ze3z87_2266:
						if (NULLP(BgL_lz00_2264))
							{	/* SawMill/expr.scm 119 */
								BgL_rz00_2246 = BgL_rz00_2265;
							}
						else
							{	/* SawMill/expr.scm 120 */
								obj_t BgL_g1211z00_2268;

								BgL_g1211z00_2268 =
									BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
									(((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt)
													CAR(
														((obj_t) BgL_lz00_2264)))))->BgL_destz00),
									BgL_argsz00_2243);
								if (CBOOL(BgL_g1211z00_2268))
									{	/* SawMill/expr.scm 120 */
										{	/* SawMill/expr.scm 122 */
											obj_t BgL_arg1868z00_2271;

											BgL_arg1868z00_2271 = CAR(((obj_t) BgL_lz00_2264));
											BgL_treez00_2259 = BgL_arg1868z00_2271;
											BgL_posz00_2260 = BgL_g1211z00_2268;
											if (CBOOL(BGl_acceptzd2foldingzf3z21zzsaw_exprz00
													(BgL_bz00_100, BgL_insz00_102, BgL_treez00_2259)))
												{	/* SawMill/expr.scm 115 */
													BGl_za2countza2z00zzsaw_exprz00 =
														(((long) 1) + BGl_za2countza2z00zzsaw_exprz00);
													{	/* SawMill/expr.scm 117 */
														obj_t BgL_arg1865z00_2263;

														BgL_arg1865z00_2263 =
															(((BgL_rtl_insz00_bglt) COBJECT(
																	((BgL_rtl_insz00_bglt) BgL_treez00_2259)))->
															BgL_destz00);
														((((BgL_rtl_regz00_bglt)
																	COBJECT(((BgL_rtl_regz00_bglt)
																			BgL_arg1865z00_2263)))->
																BgL_onexprzf3zf3) = ((obj_t) BTRUE), BUNSPEC);
												}}
											else
												{	/* SawMill/expr.scm 115 */
													BFALSE;
												}
										}
										{	/* SawMill/expr.scm 123 */
											obj_t BgL_arg1870z00_2272;

											BgL_arg1870z00_2272 = CDR(((obj_t) BgL_lz00_2264));
											{
												obj_t BgL_lz00_4347;

												BgL_lz00_4347 = BgL_arg1870z00_2272;
												BgL_lz00_2264 = BgL_lz00_4347;
												goto BgL_zc3z04anonymousza31866ze3z87_2266;
											}
										}
									}
								else
									{	/* SawMill/expr.scm 124 */
										bool_t BgL_test2360z00_4348;

										{	/* SawMill/expr.scm 124 */
											obj_t BgL_arg1878z00_2279;

											BgL_arg1878z00_2279 = CAR(((obj_t) BgL_lz00_2264));
											BgL_test2360z00_4348 =
												CBOOL(BGl_xxz00zzsaw_exprz00(BgL_arg1878z00_2279,
													BgL_insz00_102, BgL_inszd2effectzd2_2242));
										}
										if (BgL_test2360z00_4348)
											{	/* SawMill/expr.scm 126 */
												obj_t BgL_arg1873z00_2275;

												BgL_arg1873z00_2275 = CDR(((obj_t) BgL_lz00_2264));
												{
													obj_t BgL_lz00_4355;

													BgL_lz00_4355 = BgL_arg1873z00_2275;
													BgL_lz00_2264 = BgL_lz00_4355;
													goto BgL_zc3z04anonymousza31866ze3z87_2266;
												}
											}
										else
											{	/* SawMill/expr.scm 127 */
												obj_t BgL_arg1874z00_2276;
												obj_t BgL_arg1876z00_2277;

												BgL_arg1874z00_2276 = CDR(((obj_t) BgL_lz00_2264));
												{	/* SawMill/expr.scm 127 */
													obj_t BgL_arg1877z00_2278;

													BgL_arg1877z00_2278 = CAR(((obj_t) BgL_lz00_2264));
													BgL_arg1876z00_2277 =
														MAKE_YOUNG_PAIR(BgL_arg1877z00_2278, BgL_rz00_2265);
												}
												{
													obj_t BgL_rz00_4362;
													obj_t BgL_lz00_4361;

													BgL_lz00_4361 = BgL_arg1874z00_2276;
													BgL_rz00_4362 = BgL_arg1876z00_2277;
													BgL_rz00_2265 = BgL_rz00_4362;
													BgL_lz00_2264 = BgL_lz00_4361;
													goto BgL_zc3z04anonymousza31866ze3z87_2266;
												}
											}
									}
							}
						BgL_dz00_2247 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_insz00_102)))->BgL_destz00);
						{	/* SawMill/expr.scm 130 */
							bool_t BgL_test2361z00_4365;

							if (CBOOL(BgL_dz00_2247))
								{	/* SawMill/expr.scm 131 */
									bool_t BgL_test2363z00_4368;

									{	/* SawMill/expr.scm 131 */
										obj_t BgL_arg1862z00_2258;

										{
											BgL_pregz00_bglt BgL_auxz00_4369;

											{
												obj_t BgL_auxz00_4370;

												{	/* SawMill/expr.scm 131 */
													BgL_objectz00_bglt BgL_tmpz00_4371;

													BgL_tmpz00_4371 =
														((BgL_objectz00_bglt)
														((BgL_rtl_regz00_bglt) BgL_dz00_2247));
													BgL_auxz00_4370 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4371);
												}
												BgL_auxz00_4369 = ((BgL_pregz00_bglt) BgL_auxz00_4370);
											}
											BgL_arg1862z00_2258 =
												(((BgL_pregz00_bglt) COBJECT(BgL_auxz00_4369))->
												BgL_statusz00);
										}
										BgL_test2363z00_4368 =
											(BgL_arg1862z00_2258 == CNST_TABLE_REF(((long) 18)));
									}
									if (BgL_test2363z00_4368)
										{	/* SawMill/expr.scm 132 */
											bool_t BgL_test2364z00_4379;

											{	/* SawMill/expr.scm 132 */
												BgL_rtl_funz00_bglt BgL_arg1861z00_2257;

												BgL_arg1861z00_2257 =
													(((BgL_rtl_insz00_bglt) COBJECT(
															((BgL_rtl_insz00_bglt) BgL_insz00_102)))->
													BgL_funz00);
												{	/* SawMill/expr.scm 132 */
													bool_t BgL_res2179z00_3195;

													BgL_res2179z00_3195 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_arg1861z00_2257),
														BGl_rtl_protectz00zzsaw_defsz00);
													BgL_test2364z00_4379 = BgL_res2179z00_3195;
												}
											}
											if (BgL_test2364z00_4379)
												{	/* SawMill/expr.scm 132 */
													BgL_test2361z00_4365 = ((bool_t) 0);
												}
											else
												{	/* SawMill/expr.scm 132 */
													BgL_test2361z00_4365 = ((bool_t) 1);
												}
										}
									else
										{	/* SawMill/expr.scm 131 */
											BgL_test2361z00_4365 = ((bool_t) 0);
										}
								}
							else
								{	/* SawMill/expr.scm 130 */
									BgL_test2361z00_4365 = ((bool_t) 0);
								}
							if (BgL_test2361z00_4365)
								{	/* SawMill/expr.scm 130 */
									return MAKE_YOUNG_PAIR(BgL_insz00_102, BgL_rz00_2246);
								}
							else
								{	/* SawMill/expr.scm 130 */
									return BgL_rz00_2246;
								}
						}
					}
				}
			}
		}

	}



/* analyse */
	obj_t BGl_analysez00zzsaw_exprz00(BgL_backendz00_bglt BgL_bz00_103,
		obj_t BgL_movingz00_104, obj_t BgL_insz00_105)
	{
		{	/* SawMill/expr.scm 137 */
			{	/* SawMill/expr.scm 139 */
				obj_t BgL_inszd2effectzd2_2285;
				obj_t BgL_argsz00_2286;

				{	/* SawMill/expr.scm 139 */
					BgL_rtl_funz00_bglt BgL_arg1912z00_2332;

					BgL_arg1912z00_2332 =
						(((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_insz00_105)))->BgL_funz00);
					BgL_inszd2effectzd2_2285 =
						BGl_effectsz00zzsaw_exprz00(BgL_arg1912z00_2332);
				}
				BgL_argsz00_2286 =
					(((BgL_rtl_insz00_bglt) COBJECT(
							((BgL_rtl_insz00_bglt) BgL_insz00_105)))->BgL_argsz00);
				{
					obj_t BgL_lz00_2312;
					obj_t BgL_rz00_2313;
					obj_t BgL_treez00_2302;
					obj_t BgL_posz00_2303;

					{	/* SawMill/expr.scm 157 */
						obj_t BgL_rz00_2289;
						obj_t BgL_dz00_2290;

						BgL_lz00_2312 = BgL_movingz00_104;
						BgL_rz00_2313 = BNIL;
					BgL_zc3z04anonymousza31897ze3z87_2314:
						if (NULLP(BgL_lz00_2312))
							{	/* SawMill/expr.scm 147 */
								BgL_rz00_2289 = BgL_rz00_2313;
							}
						else
							{	/* SawMill/expr.scm 148 */
								obj_t BgL_g1217z00_2316;

								BgL_g1217z00_2316 =
									BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
									(((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt)
													CAR(
														((obj_t) BgL_lz00_2312)))))->BgL_destz00),
									BgL_argsz00_2286);
								if (CBOOL(BgL_g1217z00_2316))
									{	/* SawMill/expr.scm 148 */
										{	/* SawMill/expr.scm 150 */
											obj_t BgL_arg1901z00_2319;

											BgL_arg1901z00_2319 = CAR(((obj_t) BgL_lz00_2312));
											BgL_treez00_2302 = BgL_arg1901z00_2319;
											BgL_posz00_2303 = BgL_g1217z00_2316;
											if (CBOOL(BGl_acceptzd2foldingzf3z21zzsaw_exprz00
													(BgL_bz00_103, BgL_insz00_105, BgL_treez00_2302)))
												{	/* SawMill/expr.scm 141 */
													{	/* SawMill/expr.scm 143 */
														obj_t BgL_tmpz00_4404;

														BgL_tmpz00_4404 = ((obj_t) BgL_posz00_2303);
														SET_CAR(BgL_tmpz00_4404, BgL_treez00_2302);
													}
													if (BGl_isazf3zf3zz__objectz00(BgL_treez00_2302,
															BGl_inlinedz00zzsaw_exprz00))
														{	/* SawMill/expr.scm 144 */
															BFALSE;
														}
													else
														{	/* SawMill/expr.scm 144 */
															{	/* SawMill/expr.scm 144 */
																BgL_inlinedz00_bglt BgL_wide1215z00_2309;

																BgL_wide1215z00_2309 =
																	((BgL_inlinedz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_inlinedz00_bgl))));
																{	/* SawMill/expr.scm 144 */
																	obj_t BgL_auxz00_4414;
																	BgL_objectz00_bglt BgL_tmpz00_4410;

																	BgL_auxz00_4414 =
																		((obj_t) BgL_wide1215z00_2309);
																	BgL_tmpz00_4410 =
																		((BgL_objectz00_bglt)
																		((BgL_rtl_insz00_bglt)
																			((BgL_rtl_insz00_bglt)
																				BgL_treez00_2302)));
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4410,
																		BgL_auxz00_4414);
																}
																((BgL_objectz00_bglt)
																	((BgL_rtl_insz00_bglt)
																		((BgL_rtl_insz00_bglt) BgL_treez00_2302)));
																{	/* SawMill/expr.scm 144 */
																	long BgL_arg1896z00_2310;

																	{	/* SawMill/expr.scm 144 */
																		long BgL_res2181z00_3202;

																		BgL_res2181z00_3202 =
																			BGL_CLASS_INDEX
																			(BGl_inlinedz00zzsaw_exprz00);
																		BgL_arg1896z00_2310 = BgL_res2181z00_3202;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt)
																			((BgL_rtl_insz00_bglt)
																				((BgL_rtl_insz00_bglt)
																					BgL_treez00_2302))),
																		BgL_arg1896z00_2310);
																}
																((BgL_rtl_insz00_bglt)
																	((BgL_rtl_insz00_bglt)
																		((BgL_rtl_insz00_bglt) BgL_treez00_2302)));
															}
															((obj_t)
																((BgL_rtl_insz00_bglt)
																	((BgL_rtl_insz00_bglt) BgL_treez00_2302)));
												}}
											else
												{	/* SawMill/expr.scm 141 */
													BFALSE;
												}
										}
										{	/* SawMill/expr.scm 151 */
											obj_t BgL_arg1902z00_2320;

											BgL_arg1902z00_2320 = CDR(((obj_t) BgL_lz00_2312));
											{
												obj_t BgL_lz00_4433;

												BgL_lz00_4433 = BgL_arg1902z00_2320;
												BgL_lz00_2312 = BgL_lz00_4433;
												goto BgL_zc3z04anonymousza31897ze3z87_2314;
											}
										}
									}
								else
									{	/* SawMill/expr.scm 152 */
										bool_t BgL_test2369z00_4434;

										{	/* SawMill/expr.scm 152 */
											obj_t BgL_arg1909z00_2327;

											BgL_arg1909z00_2327 = CAR(((obj_t) BgL_lz00_2312));
											BgL_test2369z00_4434 =
												CBOOL(BGl_xxz00zzsaw_exprz00(BgL_arg1909z00_2327,
													BgL_insz00_105, BgL_inszd2effectzd2_2285));
										}
										if (BgL_test2369z00_4434)
											{	/* SawMill/expr.scm 154 */
												obj_t BgL_arg1905z00_2323;

												BgL_arg1905z00_2323 = CDR(((obj_t) BgL_lz00_2312));
												{
													obj_t BgL_lz00_4441;

													BgL_lz00_4441 = BgL_arg1905z00_2323;
													BgL_lz00_2312 = BgL_lz00_4441;
													goto BgL_zc3z04anonymousza31897ze3z87_2314;
												}
											}
										else
											{	/* SawMill/expr.scm 155 */
												obj_t BgL_arg1906z00_2324;
												obj_t BgL_arg1907z00_2325;

												BgL_arg1906z00_2324 = CDR(((obj_t) BgL_lz00_2312));
												{	/* SawMill/expr.scm 155 */
													obj_t BgL_arg1908z00_2326;

													BgL_arg1908z00_2326 = CAR(((obj_t) BgL_lz00_2312));
													BgL_arg1907z00_2325 =
														MAKE_YOUNG_PAIR(BgL_arg1908z00_2326, BgL_rz00_2313);
												}
												{
													obj_t BgL_rz00_4448;
													obj_t BgL_lz00_4447;

													BgL_lz00_4447 = BgL_arg1906z00_2324;
													BgL_rz00_4448 = BgL_arg1907z00_2325;
													BgL_rz00_2313 = BgL_rz00_4448;
													BgL_lz00_2312 = BgL_lz00_4447;
													goto BgL_zc3z04anonymousza31897ze3z87_2314;
												}
											}
									}
							}
						BgL_dz00_2290 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_insz00_105)))->BgL_destz00);
						{	/* SawMill/expr.scm 159 */
							bool_t BgL_test2370z00_4451;

							if (CBOOL(BgL_dz00_2290))
								{	/* SawMill/expr.scm 160 */
									bool_t BgL_test2372z00_4454;

									{	/* SawMill/expr.scm 160 */
										obj_t BgL_arg1892z00_2301;

										{
											BgL_iregz00_bglt BgL_auxz00_4455;

											{
												obj_t BgL_auxz00_4456;

												{	/* SawMill/expr.scm 160 */
													BgL_objectz00_bglt BgL_tmpz00_4457;

													BgL_tmpz00_4457 =
														((BgL_objectz00_bglt)
														((BgL_rtl_regz00_bglt) BgL_dz00_2290));
													BgL_auxz00_4456 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4457);
												}
												BgL_auxz00_4455 = ((BgL_iregz00_bglt) BgL_auxz00_4456);
											}
											BgL_arg1892z00_2301 =
												(((BgL_iregz00_bglt) COBJECT(BgL_auxz00_4455))->
												BgL_statusz00);
										}
										BgL_test2372z00_4454 =
											(BgL_arg1892z00_2301 == CNST_TABLE_REF(((long) 18)));
									}
									if (BgL_test2372z00_4454)
										{	/* SawMill/expr.scm 161 */
											bool_t BgL_test2373z00_4465;

											{	/* SawMill/expr.scm 161 */
												BgL_rtl_funz00_bglt BgL_arg1891z00_2300;

												BgL_arg1891z00_2300 =
													(((BgL_rtl_insz00_bglt) COBJECT(
															((BgL_rtl_insz00_bglt) BgL_insz00_105)))->
													BgL_funz00);
												{	/* SawMill/expr.scm 161 */
													bool_t BgL_res2183z00_3219;

													BgL_res2183z00_3219 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_arg1891z00_2300),
														BGl_rtl_protectz00zzsaw_defsz00);
													BgL_test2373z00_4465 = BgL_res2183z00_3219;
												}
											}
											if (BgL_test2373z00_4465)
												{	/* SawMill/expr.scm 161 */
													BgL_test2370z00_4451 = ((bool_t) 0);
												}
											else
												{	/* SawMill/expr.scm 161 */
													BgL_test2370z00_4451 = ((bool_t) 1);
												}
										}
									else
										{	/* SawMill/expr.scm 160 */
											BgL_test2370z00_4451 = ((bool_t) 0);
										}
								}
							else
								{	/* SawMill/expr.scm 159 */
									BgL_test2370z00_4451 = ((bool_t) 0);
								}
							if (BgL_test2370z00_4451)
								{	/* SawMill/expr.scm 159 */
									return MAKE_YOUNG_PAIR(BgL_insz00_105, BgL_rz00_2289);
								}
							else
								{	/* SawMill/expr.scm 159 */
									return BgL_rz00_2289;
								}
						}
					}
				}
			}
		}

	}



/* xx */
	obj_t BGl_xxz00zzsaw_exprz00(obj_t BgL_moverz00_112, obj_t BgL_insz00_113,
		obj_t BgL_inszd2effectszd2_114)
	{
		{	/* SawMill/expr.scm 177 */
			{	/* SawMill/expr.scm 178 */
				obj_t BgL__ortest_1219z00_2334;

				BgL__ortest_1219z00_2334 =
					BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
					(((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_insz00_113)))->BgL_destz00),
					(((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_moverz00_112)))->BgL_argsz00));
				if (CBOOL(BgL__ortest_1219z00_2334))
					{	/* SawMill/expr.scm 178 */
						return BgL__ortest_1219z00_2334;
					}
				else
					{	/* SawMill/expr.scm 179 */
						bool_t BgL__ortest_1220z00_2335;

						{	/* SawMill/expr.scm 179 */
							obj_t BgL_arg1925z00_2360;

							{	/* SawMill/expr.scm 179 */
								BgL_rtl_funz00_bglt BgL_arg1926z00_2361;

								BgL_arg1926z00_2361 =
									(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_moverz00_112)))->BgL_funz00);
								BgL_arg1925z00_2360 =
									BGl_effectsz00zzsaw_exprz00(BgL_arg1926z00_2361);
							}
							BgL__ortest_1220z00_2335 =
								BGl_matcheffectz00zzsaw_exprz00(BgL_arg1925z00_2360,
								BgL_inszd2effectszd2_114);
						}
						if (BgL__ortest_1220z00_2335)
							{	/* SawMill/expr.scm 179 */
								return BBOOL(BgL__ortest_1220z00_2335);
							}
						else
							{	/* SawMill/expr.scm 180 */
								obj_t BgL_g1570z00_2336;

								{	/* SawMill/expr.scm 181 */
									obj_t BgL_hook1566z00_2345;

									BgL_hook1566z00_2345 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
									{	/* SawMill/expr.scm 181 */
										obj_t BgL_g1567z00_2346;

										BgL_g1567z00_2346 =
											(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_moverz00_112)))->
											BgL_argsz00);
										{
											obj_t BgL_l1563z00_2348;
											obj_t BgL_h1564z00_2349;

											BgL_l1563z00_2348 = BgL_g1567z00_2346;
											BgL_h1564z00_2349 = BgL_hook1566z00_2345;
										BgL_zc3z04anonymousza31916ze3z87_2350:
											if (NULLP(BgL_l1563z00_2348))
												{	/* SawMill/expr.scm 181 */
													BgL_g1570z00_2336 = CDR(BgL_hook1566z00_2345);
												}
											else
												{	/* SawMill/expr.scm 181 */
													bool_t BgL_test2377z00_4490;

													{	/* SawMill/expr.scm 181 */
														obj_t BgL_arg1924z00_2358;

														BgL_arg1924z00_2358 =
															CAR(((obj_t) BgL_l1563z00_2348));
														BgL_test2377z00_4490 =
															BGl_isazf3zf3zz__objectz00(BgL_arg1924z00_2358,
															BGl_rtl_insz00zzsaw_defsz00);
													}
													if (BgL_test2377z00_4490)
														{	/* SawMill/expr.scm 181 */
															obj_t BgL_nh1565z00_2354;

															{	/* SawMill/expr.scm 181 */
																obj_t BgL_arg1921z00_2356;

																BgL_arg1921z00_2356 =
																	CAR(((obj_t) BgL_l1563z00_2348));
																{	/* SawMill/expr.scm 181 */
																	obj_t BgL_res2186z00_3230;

																	BgL_res2186z00_3230 =
																		MAKE_YOUNG_PAIR(BgL_arg1921z00_2356, BNIL);
																	BgL_nh1565z00_2354 = BgL_res2186z00_3230;
																}
															}
															SET_CDR(BgL_h1564z00_2349, BgL_nh1565z00_2354);
															{	/* SawMill/expr.scm 181 */
																obj_t BgL_arg1920z00_2355;

																BgL_arg1920z00_2355 =
																	CDR(((obj_t) BgL_l1563z00_2348));
																{
																	obj_t BgL_h1564z00_4501;
																	obj_t BgL_l1563z00_4500;

																	BgL_l1563z00_4500 = BgL_arg1920z00_2355;
																	BgL_h1564z00_4501 = BgL_nh1565z00_2354;
																	BgL_h1564z00_2349 = BgL_h1564z00_4501;
																	BgL_l1563z00_2348 = BgL_l1563z00_4500;
																	goto BgL_zc3z04anonymousza31916ze3z87_2350;
																}
															}
														}
													else
														{	/* SawMill/expr.scm 181 */
															obj_t BgL_arg1923z00_2357;

															BgL_arg1923z00_2357 =
																CDR(((obj_t) BgL_l1563z00_2348));
															{
																obj_t BgL_l1563z00_4504;

																BgL_l1563z00_4504 = BgL_arg1923z00_2357;
																BgL_l1563z00_2348 = BgL_l1563z00_4504;
																goto BgL_zc3z04anonymousza31916ze3z87_2350;
															}
														}
												}
										}
									}
								}
								{
									obj_t BgL_l1568z00_2338;

									BgL_l1568z00_2338 = BgL_g1570z00_2336;
								BgL_zc3z04anonymousza31913ze3z87_2339:
									if (NULLP(BgL_l1568z00_2338))
										{	/* SawMill/expr.scm 181 */
											return BFALSE;
										}
									else
										{	/* SawMill/expr.scm 180 */
											obj_t BgL__ortest_1571z00_2341;

											{	/* SawMill/expr.scm 180 */
												obj_t BgL_subz00_2343;

												BgL_subz00_2343 = CAR(((obj_t) BgL_l1568z00_2338));
												BgL__ortest_1571z00_2341 =
													BGl_xxz00zzsaw_exprz00(BgL_subz00_2343,
													BgL_insz00_113, BgL_inszd2effectszd2_114);
											}
											if (CBOOL(BgL__ortest_1571z00_2341))
												{	/* SawMill/expr.scm 181 */
													return BgL__ortest_1571z00_2341;
												}
											else
												{	/* SawMill/expr.scm 181 */
													obj_t BgL_arg1915z00_2342;

													BgL_arg1915z00_2342 =
														CDR(((obj_t) BgL_l1568z00_2338));
													{
														obj_t BgL_l1568z00_4514;

														BgL_l1568z00_4514 = BgL_arg1915z00_2342;
														BgL_l1568z00_2338 = BgL_l1568z00_4514;
														goto BgL_zc3z04anonymousza31913ze3z87_2339;
													}
												}
										}
								}
							}
					}
			}
		}

	}



/* matcheffect */
	bool_t BGl_matcheffectz00zzsaw_exprz00(obj_t BgL_f1z00_115,
		obj_t BgL_f2z00_116)
	{
		{	/* SawMill/expr.scm 199 */
			{	/* SawMill/expr.scm 210 */
				obj_t BgL_w1z00_2366;
				obj_t BgL_w2z00_2367;

				BgL_w1z00_2366 =
					(((BgL_feffectz00_bglt) COBJECT(
							((BgL_feffectz00_bglt) BgL_f1z00_115)))->BgL_writez00);
				BgL_w2z00_2367 =
					(((BgL_feffectz00_bglt) COBJECT(
							((BgL_feffectz00_bglt) BgL_f2z00_116)))->BgL_writez00);
				{	/* SawMill/expr.scm 211 */
					bool_t BgL__ortest_1221z00_2368;

					BgL__ortest_1221z00_2368 =
						BGl_intersectionzf3ze70z14zzsaw_exprz00(BgL_w1z00_2366,
						BgL_w2z00_2367);
					if (BgL__ortest_1221z00_2368)
						{	/* SawMill/expr.scm 211 */
							return BgL__ortest_1221z00_2368;
						}
					else
						{	/* SawMill/expr.scm 212 */
							bool_t BgL__ortest_1222z00_2369;

							BgL__ortest_1222z00_2369 =
								BGl_intersectionzf3ze70z14zzsaw_exprz00(
								(((BgL_feffectz00_bglt) COBJECT(
											((BgL_feffectz00_bglt) BgL_f1z00_115)))->BgL_readz00),
								BgL_w2z00_2367);
							if (BgL__ortest_1222z00_2369)
								{	/* SawMill/expr.scm 212 */
									return BgL__ortest_1222z00_2369;
								}
							else
								{	/* SawMill/expr.scm 212 */
									return
										BGl_intersectionzf3ze70z14zzsaw_exprz00(
										(((BgL_feffectz00_bglt) COBJECT(
													((BgL_feffectz00_bglt) BgL_f2z00_116)))->BgL_readz00),
										BgL_w1z00_2366);
								}
						}
				}
			}
		}

	}



/* intersection?~0 */
	bool_t BGl_intersectionzf3ze70z14zzsaw_exprz00(obj_t BgL_l1z00_2380,
		obj_t BgL_l2z00_2381)
	{
		{	/* SawMill/expr.scm 209 */
			{
				obj_t BgL_l1z00_2372;
				obj_t BgL_l2z00_2373;

				if (NULLP(BgL_l1z00_2380))
					{	/* SawMill/expr.scm 205 */
						return ((bool_t) 0);
					}
				else
					{	/* SawMill/expr.scm 205 */
						if (NULLP(BgL_l2z00_2381))
							{	/* SawMill/expr.scm 206 */
								return ((bool_t) 0);
							}
						else
							{	/* SawMill/expr.scm 206 */
								if ((BgL_l1z00_2380 == CNST_TABLE_REF(((long) 4))))
									{	/* SawMill/expr.scm 207 */
										return ((bool_t) 1);
									}
								else
									{	/* SawMill/expr.scm 207 */
										if ((BgL_l2z00_2381 == CNST_TABLE_REF(((long) 4))))
											{	/* SawMill/expr.scm 208 */
												return ((bool_t) 1);
											}
										else
											{	/* SawMill/expr.scm 208 */
												BgL_l1z00_2372 = BgL_l1z00_2380;
												BgL_l2z00_2373 = BgL_l2z00_2381;
											BgL_zc3z04anonymousza31931ze3z87_2374:
												if (NULLP(BgL_l1z00_2372))
													{	/* SawMill/expr.scm 201 */
														return ((bool_t) 0);
													}
												else
													{	/* SawMill/expr.scm 201 */
														if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																(CAR(((obj_t) BgL_l1z00_2372)),
																	BgL_l2z00_2373)))
															{	/* SawMill/expr.scm 202 */
																return ((bool_t) 1);
															}
														else
															{
																obj_t BgL_l1z00_4545;

																BgL_l1z00_4545 = CDR(((obj_t) BgL_l1z00_2372));
																BgL_l1z00_2372 = BgL_l1z00_4545;
																goto BgL_zc3z04anonymousza31931ze3z87_2374;
															}
													}
											}
									}
							}
					}
			}
		}

	}



/* manu-effect */
	BgL_feffectz00_bglt BGl_manuzd2effectzd2zzsaw_exprz00(BgL_globalz00_bglt
		BgL_varz00_133)
	{
		{	/* SawMill/expr.scm 252 */
			{	/* SawMill/expr.scm 253 */
				BgL_valuez00_bglt BgL_funz00_2391;

				BgL_funz00_2391 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_133)))->BgL_valuez00);
				{	/* SawMill/expr.scm 254 */
					bool_t BgL_test2388z00_4550;

					{	/* SawMill/expr.scm 254 */
						bool_t BgL_res2191z00_3252;

						BgL_res2191z00_3252 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_funz00_2391), BGl_funz00zzast_varz00);
						BgL_test2388z00_4550 = BgL_res2191z00_3252;
					}
					if (BgL_test2388z00_4550)
						{	/* SawMill/expr.scm 255 */
							obj_t BgL_effectz00_2393;

							BgL_effectz00_2393 =
								(((BgL_funz00_bglt) COBJECT(
										((BgL_funz00_bglt) BgL_funz00_2391)))->BgL_effectz00);
							if (BGl_isazf3zf3zz__objectz00(BgL_effectz00_2393,
									BGl_feffectz00zzast_varz00))
								{	/* SawMill/expr.scm 256 */
									return ((BgL_feffectz00_bglt) BgL_effectz00_2393);
								}
							else
								{	/* SawMill/expr.scm 256 */
									CNST_TABLE_REF(((long) 20));
									return BGl_za2fullza2z00zzsaw_exprz00;
								}
						}
					else
						{	/* SawMill/expr.scm 254 */
							return BGl_za2fullza2z00zzsaw_exprz00;
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_exprz00()
	{
		{	/* SawMill/expr.scm 1 */
			{	/* SawMill/expr.scm 12 */
				obj_t BgL_arg1951z00_2399;
				obj_t BgL_arg1952z00_2400;

				{	/* SawMill/expr.scm 12 */
					obj_t BgL_v1572z00_2429;

					BgL_v1572z00_2429 = create_vector(((long) 2));
					{	/* SawMill/expr.scm 12 */
						obj_t BgL_arg1963z00_2430;

						BgL_arg1963z00_2430 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									21)), BGl_proc2235z00zzsaw_exprz00,
							BGl_proc2234z00zzsaw_exprz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 22)));
						VECTOR_SET(BgL_v1572z00_2429, ((long) 0), BgL_arg1963z00_2430);
					}
					{	/* SawMill/expr.scm 12 */
						obj_t BgL_arg1968z00_2440;

						BgL_arg1968z00_2440 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									23)), BGl_proc2237z00zzsaw_exprz00,
							BGl_proc2236z00zzsaw_exprz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 22)));
						VECTOR_SET(BgL_v1572z00_2429, ((long) 1), BgL_arg1968z00_2440);
					}
					BgL_arg1951z00_2399 = BgL_v1572z00_2429;
				}
				{	/* SawMill/expr.scm 12 */
					obj_t BgL_v1573z00_2450;

					BgL_v1573z00_2450 = create_vector(((long) 0));
					BgL_arg1952z00_2400 = BgL_v1573z00_2450;
				}
				BGl_iregz00zzsaw_exprz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 24)),
					CNST_TABLE_REF(((long) 25)), BGl_rtl_regz00zzsaw_defsz00,
					((long) 43099), BGl_proc2241z00zzsaw_exprz00,
					BGl_proc2240z00zzsaw_exprz00, BFALSE, BGl_proc2239z00zzsaw_exprz00,
					BGl_proc2238z00zzsaw_exprz00, BgL_arg1951z00_2399,
					BgL_arg1952z00_2400);
			}
			{	/* SawMill/expr.scm 13 */
				obj_t BgL_arg1977z00_2459;
				obj_t BgL_arg1979z00_2460;

				{	/* SawMill/expr.scm 13 */
					obj_t BgL_v1574z00_2489;

					BgL_v1574z00_2489 = create_vector(((long) 2));
					{	/* SawMill/expr.scm 13 */
						obj_t BgL_arg1990z00_2490;

						BgL_arg1990z00_2490 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									21)), BGl_proc2243z00zzsaw_exprz00,
							BGl_proc2242z00zzsaw_exprz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 22)));
						VECTOR_SET(BgL_v1574z00_2489, ((long) 0), BgL_arg1990z00_2490);
					}
					{	/* SawMill/expr.scm 13 */
						obj_t BgL_arg1995z00_2500;

						BgL_arg1995z00_2500 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									23)), BGl_proc2245z00zzsaw_exprz00,
							BGl_proc2244z00zzsaw_exprz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 22)));
						VECTOR_SET(BgL_v1574z00_2489, ((long) 1), BgL_arg1995z00_2500);
					}
					BgL_arg1977z00_2459 = BgL_v1574z00_2489;
				}
				{	/* SawMill/expr.scm 13 */
					obj_t BgL_v1575z00_2510;

					BgL_v1575z00_2510 = create_vector(((long) 0));
					BgL_arg1979z00_2460 = BgL_v1575z00_2510;
				}
				BGl_pregz00zzsaw_exprz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 26)),
					CNST_TABLE_REF(((long) 25)), BGl_rtl_regz00zzsaw_defsz00,
					((long) 27362), BGl_proc2249z00zzsaw_exprz00,
					BGl_proc2248z00zzsaw_exprz00, BFALSE, BGl_proc2247z00zzsaw_exprz00,
					BGl_proc2246z00zzsaw_exprz00, BgL_arg1977z00_2459,
					BgL_arg1979z00_2460);
			}
			{	/* SawMill/expr.scm 14 */
				obj_t BgL_arg2004z00_2519;
				obj_t BgL_arg2005z00_2520;

				{	/* SawMill/expr.scm 14 */
					obj_t BgL_v1576z00_2546;

					BgL_v1576z00_2546 = create_vector(((long) 0));
					BgL_arg2004z00_2519 = BgL_v1576z00_2546;
				}
				{	/* SawMill/expr.scm 14 */
					obj_t BgL_v1577z00_2547;

					BgL_v1577z00_2547 = create_vector(((long) 0));
					BgL_arg2005z00_2520 = BgL_v1577z00_2547;
				}
				return (BGl_inlinedz00zzsaw_exprz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 27)),
						CNST_TABLE_REF(((long) 25)), BGl_rtl_insz00zzsaw_defsz00,
						((long) 5789), BGl_proc2253z00zzsaw_exprz00,
						BGl_proc2252z00zzsaw_exprz00, BFALSE, BGl_proc2251z00zzsaw_exprz00,
						BGl_proc2250z00zzsaw_exprz00, BgL_arg2004z00_2519,
						BgL_arg2005z00_2520), BUNSPEC);
		}}

	}



/* &lambda2012 */
	BgL_rtl_insz00_bglt BGl_z62lambda2012z62zzsaw_exprz00(obj_t BgL_envz00_3481,
		obj_t BgL_o1184z00_3482)
	{
		{	/* SawMill/expr.scm 14 */
			{	/* SawMill/expr.scm 14 */
				long BgL_arg2013z00_3631;

				{	/* SawMill/expr.scm 14 */
					obj_t BgL_arg2014z00_3632;

					{	/* SawMill/expr.scm 14 */
						obj_t BgL_arg2016z00_3633;

						{	/* SawMill/expr.scm 14 */
							long BgL_arg1816z00_3634;

							{	/* SawMill/expr.scm 14 */
								long BgL_arg1817z00_3635;

								{	/* SawMill/expr.scm 14 */
									long BgL_res2208z00_3636;

									BgL_res2208z00_3636 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_rtl_insz00_bglt) BgL_o1184z00_3482)));
									BgL_arg1817z00_3635 = BgL_res2208z00_3636;
								}
								BgL_arg1816z00_3634 = (BgL_arg1817z00_3635 - OBJECT_TYPE);
							}
							BgL_arg2016z00_3633 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3634);
						}
						BgL_arg2014z00_3632 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2016z00_3633);
					}
					{	/* SawMill/expr.scm 14 */
						long BgL_res2210z00_3637;

						{	/* SawMill/expr.scm 14 */
							obj_t BgL_tmpz00_4596;

							BgL_tmpz00_4596 = ((obj_t) BgL_arg2014z00_3632);
							BgL_res2210z00_3637 = BGL_CLASS_INDEX(BgL_tmpz00_4596);
						}
						BgL_arg2013z00_3631 = BgL_res2210z00_3637;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_rtl_insz00_bglt) BgL_o1184z00_3482)), BgL_arg2013z00_3631);
			}
			{	/* SawMill/expr.scm 14 */
				BgL_objectz00_bglt BgL_tmpz00_4602;

				BgL_tmpz00_4602 =
					((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1184z00_3482));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4602, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1184z00_3482));
			return ((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1184z00_3482));
		}

	}



/* &<@anonymous:2011> */
	obj_t BGl_z62zc3z04anonymousza32011ze3ze5zzsaw_exprz00(obj_t BgL_envz00_3483,
		obj_t BgL_new1183z00_3484)
	{
		{	/* SawMill/expr.scm 14 */
			{
				BgL_rtl_insz00_bglt BgL_auxz00_4610;

				((((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt)
									((BgL_rtl_insz00_bglt) BgL_new1183z00_3484))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_insz00_bglt)
							COBJECT(((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt)
										BgL_new1183z00_3484))))->BgL_z52spillz52) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_rtl_insz00_bglt)
							COBJECT(((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt)
										BgL_new1183z00_3484))))->BgL_destz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_rtl_funz00_bglt BgL_auxz00_4620;

					{	/* SawMill/expr.scm 14 */
						obj_t BgL_classz00_3639;

						BgL_classz00_3639 = BGl_rtl_funz00zzsaw_defsz00;
						{	/* SawMill/expr.scm 14 */
							obj_t BgL__ortest_1106z00_3640;

							BgL__ortest_1106z00_3640 = BGL_CLASS_NIL(BgL_classz00_3639);
							if (CBOOL(BgL__ortest_1106z00_3640))
								{	/* SawMill/expr.scm 14 */
									BgL_auxz00_4620 =
										((BgL_rtl_funz00_bglt) BgL__ortest_1106z00_3640);
								}
							else
								{	/* SawMill/expr.scm 14 */
									BgL_auxz00_4620 =
										((BgL_rtl_funz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3639));
								}
						}
					}
					((((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt)
										((BgL_rtl_insz00_bglt) BgL_new1183z00_3484))))->
							BgL_funz00) = ((BgL_rtl_funz00_bglt) BgL_auxz00_4620), BUNSPEC);
				}
				((((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt)
									((BgL_rtl_insz00_bglt) BgL_new1183z00_3484))))->BgL_argsz00) =
					((obj_t) BNIL), BUNSPEC);
				BgL_auxz00_4610 = ((BgL_rtl_insz00_bglt) BgL_new1183z00_3484);
				return ((obj_t) BgL_auxz00_4610);
			}
		}

	}



/* &lambda2009 */
	BgL_rtl_insz00_bglt BGl_z62lambda2009z62zzsaw_exprz00(obj_t BgL_envz00_3485,
		obj_t BgL_o1179z00_3486)
	{
		{	/* SawMill/expr.scm 14 */
			{	/* SawMill/expr.scm 14 */
				BgL_inlinedz00_bglt BgL_wide1181z00_3642;

				BgL_wide1181z00_3642 =
					((BgL_inlinedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_inlinedz00_bgl))));
				{	/* SawMill/expr.scm 14 */
					obj_t BgL_auxz00_4640;
					BgL_objectz00_bglt BgL_tmpz00_4636;

					BgL_auxz00_4640 = ((obj_t) BgL_wide1181z00_3642);
					BgL_tmpz00_4636 =
						((BgL_objectz00_bglt)
						((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1179z00_3486)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4636, BgL_auxz00_4640);
				}
				((BgL_objectz00_bglt)
					((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1179z00_3486)));
				{	/* SawMill/expr.scm 14 */
					long BgL_arg2010z00_3643;

					{	/* SawMill/expr.scm 14 */
						long BgL_res2207z00_3644;

						BgL_res2207z00_3644 = BGL_CLASS_INDEX(BGl_inlinedz00zzsaw_exprz00);
						BgL_arg2010z00_3643 = BgL_res2207z00_3644;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_rtl_insz00_bglt)
								((BgL_rtl_insz00_bglt) BgL_o1179z00_3486))),
						BgL_arg2010z00_3643);
				}
				return
					((BgL_rtl_insz00_bglt)
					((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1179z00_3486)));
			}
		}

	}



/* &lambda2006 */
	BgL_rtl_insz00_bglt BGl_z62lambda2006z62zzsaw_exprz00(obj_t BgL_envz00_3487,
		obj_t BgL_loc1174z00_3488, obj_t BgL_z52spill1175z52_3489,
		obj_t BgL_dest1176z00_3490, obj_t BgL_fun1177z00_3491,
		obj_t BgL_args1178z00_3492)
	{
		{	/* SawMill/expr.scm 14 */
			{	/* SawMill/expr.scm 14 */
				BgL_rtl_insz00_bglt BgL_new1278z00_3648;

				{	/* SawMill/expr.scm 14 */
					BgL_rtl_insz00_bglt BgL_tmp1276z00_3649;
					BgL_inlinedz00_bglt BgL_wide1277z00_3650;

					{
						BgL_rtl_insz00_bglt BgL_auxz00_4654;

						{	/* SawMill/expr.scm 14 */
							BgL_rtl_insz00_bglt BgL_new1275z00_3651;

							BgL_new1275z00_3651 =
								((BgL_rtl_insz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_insz00_bgl))));
							{	/* SawMill/expr.scm 14 */
								long BgL_arg2008z00_3652;

								{	/* SawMill/expr.scm 14 */
									long BgL_res2205z00_3653;

									BgL_res2205z00_3653 =
										BGL_CLASS_INDEX(BGl_rtl_insz00zzsaw_defsz00);
									BgL_arg2008z00_3652 = BgL_res2205z00_3653;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1275z00_3651),
									BgL_arg2008z00_3652);
							}
							{	/* SawMill/expr.scm 14 */
								BgL_objectz00_bglt BgL_tmpz00_4659;

								BgL_tmpz00_4659 = ((BgL_objectz00_bglt) BgL_new1275z00_3651);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4659, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1275z00_3651);
							BgL_auxz00_4654 = BgL_new1275z00_3651;
						}
						BgL_tmp1276z00_3649 = ((BgL_rtl_insz00_bglt) BgL_auxz00_4654);
					}
					BgL_wide1277z00_3650 =
						((BgL_inlinedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_inlinedz00_bgl))));
					{	/* SawMill/expr.scm 14 */
						obj_t BgL_auxz00_4667;
						BgL_objectz00_bglt BgL_tmpz00_4665;

						BgL_auxz00_4667 = ((obj_t) BgL_wide1277z00_3650);
						BgL_tmpz00_4665 = ((BgL_objectz00_bglt) BgL_tmp1276z00_3649);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4665, BgL_auxz00_4667);
					}
					((BgL_objectz00_bglt) BgL_tmp1276z00_3649);
					{	/* SawMill/expr.scm 14 */
						long BgL_arg2007z00_3654;

						{	/* SawMill/expr.scm 14 */
							long BgL_res2206z00_3655;

							BgL_res2206z00_3655 =
								BGL_CLASS_INDEX(BGl_inlinedz00zzsaw_exprz00);
							BgL_arg2007z00_3654 = BgL_res2206z00_3655;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1276z00_3649), BgL_arg2007z00_3654);
					}
					BgL_new1278z00_3648 = ((BgL_rtl_insz00_bglt) BgL_tmp1276z00_3649);
				}
				((((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_new1278z00_3648)))->BgL_locz00) =
					((obj_t) BgL_loc1174z00_3488), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1278z00_3648)))->BgL_z52spillz52) =
					((obj_t) ((obj_t) BgL_z52spill1175z52_3489)), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1278z00_3648)))->BgL_destz00) =
					((obj_t) BgL_dest1176z00_3490), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1278z00_3648)))->BgL_funz00) =
					((BgL_rtl_funz00_bglt) ((BgL_rtl_funz00_bglt) BgL_fun1177z00_3491)),
					BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1278z00_3648)))->BgL_argsz00) =
					((obj_t) ((obj_t) BgL_args1178z00_3492)), BUNSPEC);
				return BgL_new1278z00_3648;
			}
		}

	}



/* &lambda1986 */
	BgL_rtl_regz00_bglt BGl_z62lambda1986z62zzsaw_exprz00(obj_t BgL_envz00_3493,
		obj_t BgL_o1172z00_3494)
	{
		{	/* SawMill/expr.scm 13 */
			{	/* SawMill/expr.scm 13 */
				long BgL_arg1987z00_3657;

				{	/* SawMill/expr.scm 13 */
					obj_t BgL_arg1988z00_3658;

					{	/* SawMill/expr.scm 13 */
						obj_t BgL_arg1989z00_3659;

						{	/* SawMill/expr.scm 13 */
							long BgL_arg1816z00_3660;

							{	/* SawMill/expr.scm 13 */
								long BgL_arg1817z00_3661;

								{	/* SawMill/expr.scm 13 */
									long BgL_res2202z00_3662;

									BgL_res2202z00_3662 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_o1172z00_3494)));
									BgL_arg1817z00_3661 = BgL_res2202z00_3662;
								}
								BgL_arg1816z00_3660 = (BgL_arg1817z00_3661 - OBJECT_TYPE);
							}
							BgL_arg1989z00_3659 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3660);
						}
						BgL_arg1988z00_3658 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1989z00_3659);
					}
					{	/* SawMill/expr.scm 13 */
						long BgL_res2204z00_3663;

						{	/* SawMill/expr.scm 13 */
							obj_t BgL_tmpz00_4694;

							BgL_tmpz00_4694 = ((obj_t) BgL_arg1988z00_3658);
							BgL_res2204z00_3663 = BGL_CLASS_INDEX(BgL_tmpz00_4694);
						}
						BgL_arg1987z00_3657 = BgL_res2204z00_3663;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_rtl_regz00_bglt) BgL_o1172z00_3494)), BgL_arg1987z00_3657);
			}
			{	/* SawMill/expr.scm 13 */
				BgL_objectz00_bglt BgL_tmpz00_4700;

				BgL_tmpz00_4700 =
					((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1172z00_3494));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4700, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1172z00_3494));
			return ((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1172z00_3494));
		}

	}



/* &<@anonymous:1985> */
	obj_t BGl_z62zc3z04anonymousza31985ze3ze5zzsaw_exprz00(obj_t BgL_envz00_3495,
		obj_t BgL_new1171z00_3496)
	{
		{	/* SawMill/expr.scm 13 */
			{
				BgL_rtl_regz00_bglt BgL_auxz00_4708;

				{
					BgL_typez00_bglt BgL_auxz00_4709;

					{	/* SawMill/expr.scm 13 */
						obj_t BgL_classz00_3665;

						BgL_classz00_3665 = BGl_typez00zztype_typez00;
						{	/* SawMill/expr.scm 13 */
							obj_t BgL__ortest_1106z00_3666;

							BgL__ortest_1106z00_3666 = BGL_CLASS_NIL(BgL_classz00_3665);
							if (CBOOL(BgL__ortest_1106z00_3666))
								{	/* SawMill/expr.scm 13 */
									BgL_auxz00_4709 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3666);
								}
							else
								{	/* SawMill/expr.scm 13 */
									BgL_auxz00_4709 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3665));
								}
						}
					}
					((((BgL_rtl_regz00_bglt) COBJECT(
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_new1171z00_3496))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_4709), BUNSPEC);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt)
									((BgL_rtl_regz00_bglt) BgL_new1171z00_3496))))->BgL_varz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1171z00_3496))))->BgL_onexprzf3zf3) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1171z00_3496))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1171z00_3496))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1171z00_3496))))->BgL_hardwarez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_pregz00_bglt BgL_auxz00_4734;

					{
						obj_t BgL_auxz00_4735;

						{	/* SawMill/expr.scm 13 */
							BgL_objectz00_bglt BgL_tmpz00_4736;

							BgL_tmpz00_4736 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_new1171z00_3496));
							BgL_auxz00_4735 = BGL_OBJECT_WIDENING(BgL_tmpz00_4736);
						}
						BgL_auxz00_4734 = ((BgL_pregz00_bglt) BgL_auxz00_4735);
					}
					((((BgL_pregz00_bglt) COBJECT(BgL_auxz00_4734))->BgL_indexz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_pregz00_bglt BgL_auxz00_4742;

					{
						obj_t BgL_auxz00_4743;

						{	/* SawMill/expr.scm 13 */
							BgL_objectz00_bglt BgL_tmpz00_4744;

							BgL_tmpz00_4744 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_new1171z00_3496));
							BgL_auxz00_4743 = BGL_OBJECT_WIDENING(BgL_tmpz00_4744);
						}
						BgL_auxz00_4742 = ((BgL_pregz00_bglt) BgL_auxz00_4743);
					}
					((((BgL_pregz00_bglt) COBJECT(BgL_auxz00_4742))->BgL_statusz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_4708 = ((BgL_rtl_regz00_bglt) BgL_new1171z00_3496);
				return ((obj_t) BgL_auxz00_4708);
			}
		}

	}



/* &lambda1983 */
	BgL_rtl_regz00_bglt BGl_z62lambda1983z62zzsaw_exprz00(obj_t BgL_envz00_3497,
		obj_t BgL_o1168z00_3498)
	{
		{	/* SawMill/expr.scm 13 */
			{	/* SawMill/expr.scm 13 */
				BgL_pregz00_bglt BgL_wide1170z00_3668;

				BgL_wide1170z00_3668 =
					((BgL_pregz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_pregz00_bgl))));
				{	/* SawMill/expr.scm 13 */
					obj_t BgL_auxz00_4757;
					BgL_objectz00_bglt BgL_tmpz00_4753;

					BgL_auxz00_4757 = ((obj_t) BgL_wide1170z00_3668);
					BgL_tmpz00_4753 =
						((BgL_objectz00_bglt)
						((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1168z00_3498)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4753, BgL_auxz00_4757);
				}
				((BgL_objectz00_bglt)
					((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1168z00_3498)));
				{	/* SawMill/expr.scm 13 */
					long BgL_arg1984z00_3669;

					{	/* SawMill/expr.scm 13 */
						long BgL_res2201z00_3670;

						BgL_res2201z00_3670 = BGL_CLASS_INDEX(BGl_pregz00zzsaw_exprz00);
						BgL_arg1984z00_3669 = BgL_res2201z00_3670;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_rtl_regz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_o1168z00_3498))),
						BgL_arg1984z00_3669);
				}
				return
					((BgL_rtl_regz00_bglt)
					((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1168z00_3498)));
			}
		}

	}



/* &lambda1980 */
	BgL_rtl_regz00_bglt BGl_z62lambda1980z62zzsaw_exprz00(obj_t BgL_envz00_3499,
		obj_t BgL_type1160z00_3500, obj_t BgL_var1161z00_3501,
		obj_t BgL_onexprzf31162zf3_3502, obj_t BgL_name1163z00_3503,
		obj_t BgL_key1164z00_3504, obj_t BgL_hardware1165z00_3505,
		obj_t BgL_index1166z00_3506, obj_t BgL_status1167z00_3507)
	{
		{	/* SawMill/expr.scm 13 */
			{	/* SawMill/expr.scm 13 */
				BgL_rtl_regz00_bglt BgL_new1273z00_3672;

				{	/* SawMill/expr.scm 13 */
					BgL_rtl_regz00_bglt BgL_tmp1271z00_3673;
					BgL_pregz00_bglt BgL_wide1272z00_3674;

					{
						BgL_rtl_regz00_bglt BgL_auxz00_4771;

						{	/* SawMill/expr.scm 13 */
							BgL_rtl_regz00_bglt BgL_new1270z00_3675;

							BgL_new1270z00_3675 =
								((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							{	/* SawMill/expr.scm 13 */
								long BgL_arg1982z00_3676;

								{	/* SawMill/expr.scm 13 */
									long BgL_res2199z00_3677;

									BgL_res2199z00_3677 =
										BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
									BgL_arg1982z00_3676 = BgL_res2199z00_3677;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1270z00_3675),
									BgL_arg1982z00_3676);
							}
							{	/* SawMill/expr.scm 13 */
								BgL_objectz00_bglt BgL_tmpz00_4776;

								BgL_tmpz00_4776 = ((BgL_objectz00_bglt) BgL_new1270z00_3675);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4776, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1270z00_3675);
							BgL_auxz00_4771 = BgL_new1270z00_3675;
						}
						BgL_tmp1271z00_3673 = ((BgL_rtl_regz00_bglt) BgL_auxz00_4771);
					}
					BgL_wide1272z00_3674 =
						((BgL_pregz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_pregz00_bgl))));
					{	/* SawMill/expr.scm 13 */
						obj_t BgL_auxz00_4784;
						BgL_objectz00_bglt BgL_tmpz00_4782;

						BgL_auxz00_4784 = ((obj_t) BgL_wide1272z00_3674);
						BgL_tmpz00_4782 = ((BgL_objectz00_bglt) BgL_tmp1271z00_3673);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4782, BgL_auxz00_4784);
					}
					((BgL_objectz00_bglt) BgL_tmp1271z00_3673);
					{	/* SawMill/expr.scm 13 */
						long BgL_arg1981z00_3678;

						{	/* SawMill/expr.scm 13 */
							long BgL_res2200z00_3679;

							BgL_res2200z00_3679 = BGL_CLASS_INDEX(BGl_pregz00zzsaw_exprz00);
							BgL_arg1981z00_3678 = BgL_res2200z00_3679;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1271z00_3673), BgL_arg1981z00_3678);
					}
					BgL_new1273z00_3672 = ((BgL_rtl_regz00_bglt) BgL_tmp1271z00_3673);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt) BgL_new1273z00_3672)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1160z00_3500)),
					BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1273z00_3672)))->BgL_varz00) =
					((obj_t) BgL_var1161z00_3501), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1273z00_3672)))->BgL_onexprzf3zf3) =
					((obj_t) BgL_onexprzf31162zf3_3502), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1273z00_3672)))->BgL_namez00) =
					((obj_t) BgL_name1163z00_3503), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1273z00_3672)))->BgL_keyz00) =
					((obj_t) BgL_key1164z00_3504), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1273z00_3672)))->BgL_hardwarez00) =
					((obj_t) BgL_hardware1165z00_3505), BUNSPEC);
				{
					BgL_pregz00_bglt BgL_auxz00_4805;

					{
						obj_t BgL_auxz00_4806;

						{	/* SawMill/expr.scm 13 */
							BgL_objectz00_bglt BgL_tmpz00_4807;

							BgL_tmpz00_4807 = ((BgL_objectz00_bglt) BgL_new1273z00_3672);
							BgL_auxz00_4806 = BGL_OBJECT_WIDENING(BgL_tmpz00_4807);
						}
						BgL_auxz00_4805 = ((BgL_pregz00_bglt) BgL_auxz00_4806);
					}
					((((BgL_pregz00_bglt) COBJECT(BgL_auxz00_4805))->BgL_indexz00) =
						((obj_t) BgL_index1166z00_3506), BUNSPEC);
				}
				{
					BgL_pregz00_bglt BgL_auxz00_4812;

					{
						obj_t BgL_auxz00_4813;

						{	/* SawMill/expr.scm 13 */
							BgL_objectz00_bglt BgL_tmpz00_4814;

							BgL_tmpz00_4814 = ((BgL_objectz00_bglt) BgL_new1273z00_3672);
							BgL_auxz00_4813 = BGL_OBJECT_WIDENING(BgL_tmpz00_4814);
						}
						BgL_auxz00_4812 = ((BgL_pregz00_bglt) BgL_auxz00_4813);
					}
					((((BgL_pregz00_bglt) COBJECT(BgL_auxz00_4812))->BgL_statusz00) =
						((obj_t) BgL_status1167z00_3507), BUNSPEC);
				}
				return BgL_new1273z00_3672;
			}
		}

	}



/* &lambda1999 */
	obj_t BGl_z62lambda1999z62zzsaw_exprz00(obj_t BgL_envz00_3508,
		obj_t BgL_oz00_3509, obj_t BgL_vz00_3510)
	{
		{	/* SawMill/expr.scm 13 */
			{
				BgL_pregz00_bglt BgL_auxz00_4819;

				{
					obj_t BgL_auxz00_4820;

					{	/* SawMill/expr.scm 13 */
						BgL_objectz00_bglt BgL_tmpz00_4821;

						BgL_tmpz00_4821 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3509));
						BgL_auxz00_4820 = BGL_OBJECT_WIDENING(BgL_tmpz00_4821);
					}
					BgL_auxz00_4819 = ((BgL_pregz00_bglt) BgL_auxz00_4820);
				}
				return
					((((BgL_pregz00_bglt) COBJECT(BgL_auxz00_4819))->BgL_statusz00) =
					((obj_t) BgL_vz00_3510), BUNSPEC);
			}
		}

	}



/* &lambda1998 */
	obj_t BGl_z62lambda1998z62zzsaw_exprz00(obj_t BgL_envz00_3511,
		obj_t BgL_oz00_3512)
	{
		{	/* SawMill/expr.scm 13 */
			{
				BgL_pregz00_bglt BgL_auxz00_4827;

				{
					obj_t BgL_auxz00_4828;

					{	/* SawMill/expr.scm 13 */
						BgL_objectz00_bglt BgL_tmpz00_4829;

						BgL_tmpz00_4829 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3512));
						BgL_auxz00_4828 = BGL_OBJECT_WIDENING(BgL_tmpz00_4829);
					}
					BgL_auxz00_4827 = ((BgL_pregz00_bglt) BgL_auxz00_4828);
				}
				return (((BgL_pregz00_bglt) COBJECT(BgL_auxz00_4827))->BgL_statusz00);
			}
		}

	}



/* &lambda1994 */
	obj_t BGl_z62lambda1994z62zzsaw_exprz00(obj_t BgL_envz00_3513,
		obj_t BgL_oz00_3514, obj_t BgL_vz00_3515)
	{
		{	/* SawMill/expr.scm 13 */
			{
				BgL_pregz00_bglt BgL_auxz00_4835;

				{
					obj_t BgL_auxz00_4836;

					{	/* SawMill/expr.scm 13 */
						BgL_objectz00_bglt BgL_tmpz00_4837;

						BgL_tmpz00_4837 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3514));
						BgL_auxz00_4836 = BGL_OBJECT_WIDENING(BgL_tmpz00_4837);
					}
					BgL_auxz00_4835 = ((BgL_pregz00_bglt) BgL_auxz00_4836);
				}
				return
					((((BgL_pregz00_bglt) COBJECT(BgL_auxz00_4835))->BgL_indexz00) =
					((obj_t) BgL_vz00_3515), BUNSPEC);
			}
		}

	}



/* &lambda1993 */
	obj_t BGl_z62lambda1993z62zzsaw_exprz00(obj_t BgL_envz00_3516,
		obj_t BgL_oz00_3517)
	{
		{	/* SawMill/expr.scm 13 */
			{
				BgL_pregz00_bglt BgL_auxz00_4843;

				{
					obj_t BgL_auxz00_4844;

					{	/* SawMill/expr.scm 13 */
						BgL_objectz00_bglt BgL_tmpz00_4845;

						BgL_tmpz00_4845 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3517));
						BgL_auxz00_4844 = BGL_OBJECT_WIDENING(BgL_tmpz00_4845);
					}
					BgL_auxz00_4843 = ((BgL_pregz00_bglt) BgL_auxz00_4844);
				}
				return (((BgL_pregz00_bglt) COBJECT(BgL_auxz00_4843))->BgL_indexz00);
			}
		}

	}



/* &lambda1959 */
	BgL_rtl_regz00_bglt BGl_z62lambda1959z62zzsaw_exprz00(obj_t BgL_envz00_3518,
		obj_t BgL_o1158z00_3519)
	{
		{	/* SawMill/expr.scm 12 */
			{	/* SawMill/expr.scm 12 */
				long BgL_arg1960z00_3685;

				{	/* SawMill/expr.scm 12 */
					obj_t BgL_arg1961z00_3686;

					{	/* SawMill/expr.scm 12 */
						obj_t BgL_arg1962z00_3687;

						{	/* SawMill/expr.scm 12 */
							long BgL_arg1816z00_3688;

							{	/* SawMill/expr.scm 12 */
								long BgL_arg1817z00_3689;

								{	/* SawMill/expr.scm 12 */
									long BgL_res2196z00_3690;

									BgL_res2196z00_3690 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_o1158z00_3519)));
									BgL_arg1817z00_3689 = BgL_res2196z00_3690;
								}
								BgL_arg1816z00_3688 = (BgL_arg1817z00_3689 - OBJECT_TYPE);
							}
							BgL_arg1962z00_3687 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3688);
						}
						BgL_arg1961z00_3686 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1962z00_3687);
					}
					{	/* SawMill/expr.scm 12 */
						long BgL_res2198z00_3691;

						{	/* SawMill/expr.scm 12 */
							obj_t BgL_tmpz00_4857;

							BgL_tmpz00_4857 = ((obj_t) BgL_arg1961z00_3686);
							BgL_res2198z00_3691 = BGL_CLASS_INDEX(BgL_tmpz00_4857);
						}
						BgL_arg1960z00_3685 = BgL_res2198z00_3691;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_rtl_regz00_bglt) BgL_o1158z00_3519)), BgL_arg1960z00_3685);
			}
			{	/* SawMill/expr.scm 12 */
				BgL_objectz00_bglt BgL_tmpz00_4863;

				BgL_tmpz00_4863 =
					((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1158z00_3519));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4863, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1158z00_3519));
			return ((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1158z00_3519));
		}

	}



/* &<@anonymous:1958> */
	obj_t BGl_z62zc3z04anonymousza31958ze3ze5zzsaw_exprz00(obj_t BgL_envz00_3520,
		obj_t BgL_new1157z00_3521)
	{
		{	/* SawMill/expr.scm 12 */
			{
				BgL_rtl_regz00_bglt BgL_auxz00_4871;

				{
					BgL_typez00_bglt BgL_auxz00_4872;

					{	/* SawMill/expr.scm 12 */
						obj_t BgL_classz00_3693;

						BgL_classz00_3693 = BGl_typez00zztype_typez00;
						{	/* SawMill/expr.scm 12 */
							obj_t BgL__ortest_1106z00_3694;

							BgL__ortest_1106z00_3694 = BGL_CLASS_NIL(BgL_classz00_3693);
							if (CBOOL(BgL__ortest_1106z00_3694))
								{	/* SawMill/expr.scm 12 */
									BgL_auxz00_4872 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3694);
								}
							else
								{	/* SawMill/expr.scm 12 */
									BgL_auxz00_4872 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3693));
								}
						}
					}
					((((BgL_rtl_regz00_bglt) COBJECT(
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_new1157z00_3521))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_4872), BUNSPEC);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt)
									((BgL_rtl_regz00_bglt) BgL_new1157z00_3521))))->BgL_varz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1157z00_3521))))->BgL_onexprzf3zf3) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1157z00_3521))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1157z00_3521))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1157z00_3521))))->BgL_hardwarez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_iregz00_bglt BgL_auxz00_4897;

					{
						obj_t BgL_auxz00_4898;

						{	/* SawMill/expr.scm 12 */
							BgL_objectz00_bglt BgL_tmpz00_4899;

							BgL_tmpz00_4899 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_new1157z00_3521));
							BgL_auxz00_4898 = BGL_OBJECT_WIDENING(BgL_tmpz00_4899);
						}
						BgL_auxz00_4897 = ((BgL_iregz00_bglt) BgL_auxz00_4898);
					}
					((((BgL_iregz00_bglt) COBJECT(BgL_auxz00_4897))->BgL_indexz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_iregz00_bglt BgL_auxz00_4905;

					{
						obj_t BgL_auxz00_4906;

						{	/* SawMill/expr.scm 12 */
							BgL_objectz00_bglt BgL_tmpz00_4907;

							BgL_tmpz00_4907 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_new1157z00_3521));
							BgL_auxz00_4906 = BGL_OBJECT_WIDENING(BgL_tmpz00_4907);
						}
						BgL_auxz00_4905 = ((BgL_iregz00_bglt) BgL_auxz00_4906);
					}
					((((BgL_iregz00_bglt) COBJECT(BgL_auxz00_4905))->BgL_statusz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_4871 = ((BgL_rtl_regz00_bglt) BgL_new1157z00_3521);
				return ((obj_t) BgL_auxz00_4871);
			}
		}

	}



/* &lambda1956 */
	BgL_rtl_regz00_bglt BGl_z62lambda1956z62zzsaw_exprz00(obj_t BgL_envz00_3522,
		obj_t BgL_o1154z00_3523)
	{
		{	/* SawMill/expr.scm 12 */
			{	/* SawMill/expr.scm 12 */
				BgL_iregz00_bglt BgL_wide1156z00_3696;

				BgL_wide1156z00_3696 =
					((BgL_iregz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_iregz00_bgl))));
				{	/* SawMill/expr.scm 12 */
					obj_t BgL_auxz00_4920;
					BgL_objectz00_bglt BgL_tmpz00_4916;

					BgL_auxz00_4920 = ((obj_t) BgL_wide1156z00_3696);
					BgL_tmpz00_4916 =
						((BgL_objectz00_bglt)
						((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1154z00_3523)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4916, BgL_auxz00_4920);
				}
				((BgL_objectz00_bglt)
					((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1154z00_3523)));
				{	/* SawMill/expr.scm 12 */
					long BgL_arg1957z00_3697;

					{	/* SawMill/expr.scm 12 */
						long BgL_res2195z00_3698;

						BgL_res2195z00_3698 = BGL_CLASS_INDEX(BGl_iregz00zzsaw_exprz00);
						BgL_arg1957z00_3697 = BgL_res2195z00_3698;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_rtl_regz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_o1154z00_3523))),
						BgL_arg1957z00_3697);
				}
				return
					((BgL_rtl_regz00_bglt)
					((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1154z00_3523)));
			}
		}

	}



/* &lambda1953 */
	BgL_rtl_regz00_bglt BGl_z62lambda1953z62zzsaw_exprz00(obj_t BgL_envz00_3524,
		obj_t BgL_type1146z00_3525, obj_t BgL_var1147z00_3526,
		obj_t BgL_onexprzf31148zf3_3527, obj_t BgL_name1149z00_3528,
		obj_t BgL_key1150z00_3529, obj_t BgL_hardware1151z00_3530,
		obj_t BgL_index1152z00_3531, obj_t BgL_status1153z00_3532)
	{
		{	/* SawMill/expr.scm 12 */
			{	/* SawMill/expr.scm 12 */
				BgL_rtl_regz00_bglt BgL_new1268z00_3700;

				{	/* SawMill/expr.scm 12 */
					BgL_rtl_regz00_bglt BgL_tmp1266z00_3701;
					BgL_iregz00_bglt BgL_wide1267z00_3702;

					{
						BgL_rtl_regz00_bglt BgL_auxz00_4934;

						{	/* SawMill/expr.scm 12 */
							BgL_rtl_regz00_bglt BgL_new1265z00_3703;

							BgL_new1265z00_3703 =
								((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							{	/* SawMill/expr.scm 12 */
								long BgL_arg1955z00_3704;

								{	/* SawMill/expr.scm 12 */
									long BgL_res2193z00_3705;

									BgL_res2193z00_3705 =
										BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
									BgL_arg1955z00_3704 = BgL_res2193z00_3705;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1265z00_3703),
									BgL_arg1955z00_3704);
							}
							{	/* SawMill/expr.scm 12 */
								BgL_objectz00_bglt BgL_tmpz00_4939;

								BgL_tmpz00_4939 = ((BgL_objectz00_bglt) BgL_new1265z00_3703);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4939, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1265z00_3703);
							BgL_auxz00_4934 = BgL_new1265z00_3703;
						}
						BgL_tmp1266z00_3701 = ((BgL_rtl_regz00_bglt) BgL_auxz00_4934);
					}
					BgL_wide1267z00_3702 =
						((BgL_iregz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_iregz00_bgl))));
					{	/* SawMill/expr.scm 12 */
						obj_t BgL_auxz00_4947;
						BgL_objectz00_bglt BgL_tmpz00_4945;

						BgL_auxz00_4947 = ((obj_t) BgL_wide1267z00_3702);
						BgL_tmpz00_4945 = ((BgL_objectz00_bglt) BgL_tmp1266z00_3701);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4945, BgL_auxz00_4947);
					}
					((BgL_objectz00_bglt) BgL_tmp1266z00_3701);
					{	/* SawMill/expr.scm 12 */
						long BgL_arg1954z00_3706;

						{	/* SawMill/expr.scm 12 */
							long BgL_res2194z00_3707;

							BgL_res2194z00_3707 = BGL_CLASS_INDEX(BGl_iregz00zzsaw_exprz00);
							BgL_arg1954z00_3706 = BgL_res2194z00_3707;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1266z00_3701), BgL_arg1954z00_3706);
					}
					BgL_new1268z00_3700 = ((BgL_rtl_regz00_bglt) BgL_tmp1266z00_3701);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt) BgL_new1268z00_3700)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1146z00_3525)),
					BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1268z00_3700)))->BgL_varz00) =
					((obj_t) BgL_var1147z00_3526), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1268z00_3700)))->BgL_onexprzf3zf3) =
					((obj_t) BgL_onexprzf31148zf3_3527), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1268z00_3700)))->BgL_namez00) =
					((obj_t) BgL_name1149z00_3528), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1268z00_3700)))->BgL_keyz00) =
					((obj_t) BgL_key1150z00_3529), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1268z00_3700)))->BgL_hardwarez00) =
					((obj_t) BgL_hardware1151z00_3530), BUNSPEC);
				{
					BgL_iregz00_bglt BgL_auxz00_4968;

					{
						obj_t BgL_auxz00_4969;

						{	/* SawMill/expr.scm 12 */
							BgL_objectz00_bglt BgL_tmpz00_4970;

							BgL_tmpz00_4970 = ((BgL_objectz00_bglt) BgL_new1268z00_3700);
							BgL_auxz00_4969 = BGL_OBJECT_WIDENING(BgL_tmpz00_4970);
						}
						BgL_auxz00_4968 = ((BgL_iregz00_bglt) BgL_auxz00_4969);
					}
					((((BgL_iregz00_bglt) COBJECT(BgL_auxz00_4968))->BgL_indexz00) =
						((obj_t) BgL_index1152z00_3531), BUNSPEC);
				}
				{
					BgL_iregz00_bglt BgL_auxz00_4975;

					{
						obj_t BgL_auxz00_4976;

						{	/* SawMill/expr.scm 12 */
							BgL_objectz00_bglt BgL_tmpz00_4977;

							BgL_tmpz00_4977 = ((BgL_objectz00_bglt) BgL_new1268z00_3700);
							BgL_auxz00_4976 = BGL_OBJECT_WIDENING(BgL_tmpz00_4977);
						}
						BgL_auxz00_4975 = ((BgL_iregz00_bglt) BgL_auxz00_4976);
					}
					((((BgL_iregz00_bglt) COBJECT(BgL_auxz00_4975))->BgL_statusz00) =
						((obj_t) BgL_status1153z00_3532), BUNSPEC);
				}
				return BgL_new1268z00_3700;
			}
		}

	}



/* &lambda1972 */
	obj_t BGl_z62lambda1972z62zzsaw_exprz00(obj_t BgL_envz00_3533,
		obj_t BgL_oz00_3534, obj_t BgL_vz00_3535)
	{
		{	/* SawMill/expr.scm 12 */
			{
				BgL_iregz00_bglt BgL_auxz00_4982;

				{
					obj_t BgL_auxz00_4983;

					{	/* SawMill/expr.scm 12 */
						BgL_objectz00_bglt BgL_tmpz00_4984;

						BgL_tmpz00_4984 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3534));
						BgL_auxz00_4983 = BGL_OBJECT_WIDENING(BgL_tmpz00_4984);
					}
					BgL_auxz00_4982 = ((BgL_iregz00_bglt) BgL_auxz00_4983);
				}
				return
					((((BgL_iregz00_bglt) COBJECT(BgL_auxz00_4982))->BgL_statusz00) =
					((obj_t) BgL_vz00_3535), BUNSPEC);
			}
		}

	}



/* &lambda1971 */
	obj_t BGl_z62lambda1971z62zzsaw_exprz00(obj_t BgL_envz00_3536,
		obj_t BgL_oz00_3537)
	{
		{	/* SawMill/expr.scm 12 */
			{
				BgL_iregz00_bglt BgL_auxz00_4990;

				{
					obj_t BgL_auxz00_4991;

					{	/* SawMill/expr.scm 12 */
						BgL_objectz00_bglt BgL_tmpz00_4992;

						BgL_tmpz00_4992 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3537));
						BgL_auxz00_4991 = BGL_OBJECT_WIDENING(BgL_tmpz00_4992);
					}
					BgL_auxz00_4990 = ((BgL_iregz00_bglt) BgL_auxz00_4991);
				}
				return (((BgL_iregz00_bglt) COBJECT(BgL_auxz00_4990))->BgL_statusz00);
			}
		}

	}



/* &lambda1967 */
	obj_t BGl_z62lambda1967z62zzsaw_exprz00(obj_t BgL_envz00_3538,
		obj_t BgL_oz00_3539, obj_t BgL_vz00_3540)
	{
		{	/* SawMill/expr.scm 12 */
			{
				BgL_iregz00_bglt BgL_auxz00_4998;

				{
					obj_t BgL_auxz00_4999;

					{	/* SawMill/expr.scm 12 */
						BgL_objectz00_bglt BgL_tmpz00_5000;

						BgL_tmpz00_5000 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3539));
						BgL_auxz00_4999 = BGL_OBJECT_WIDENING(BgL_tmpz00_5000);
					}
					BgL_auxz00_4998 = ((BgL_iregz00_bglt) BgL_auxz00_4999);
				}
				return
					((((BgL_iregz00_bglt) COBJECT(BgL_auxz00_4998))->BgL_indexz00) =
					((obj_t) BgL_vz00_3540), BUNSPEC);
			}
		}

	}



/* &lambda1966 */
	obj_t BGl_z62lambda1966z62zzsaw_exprz00(obj_t BgL_envz00_3541,
		obj_t BgL_oz00_3542)
	{
		{	/* SawMill/expr.scm 12 */
			{
				BgL_iregz00_bglt BgL_auxz00_5006;

				{
					obj_t BgL_auxz00_5007;

					{	/* SawMill/expr.scm 12 */
						BgL_objectz00_bglt BgL_tmpz00_5008;

						BgL_tmpz00_5008 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3542));
						BgL_auxz00_5007 = BGL_OBJECT_WIDENING(BgL_tmpz00_5008);
					}
					BgL_auxz00_5006 = ((BgL_iregz00_bglt) BgL_auxz00_5007);
				}
				return (((BgL_iregz00_bglt) COBJECT(BgL_auxz00_5006))->BgL_indexz00);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_exprz00()
	{
		{	/* SawMill/expr.scm 1 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_acceptzd2foldingzf3zd2envzf3zzsaw_exprz00,
				BGl_proc2254z00zzsaw_exprz00, BGl_backendz00zzbackend_backendz00,
				BGl_string2255z00zzsaw_exprz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_proc2256z00zzsaw_exprz00,
				BGl_rtl_funz00zzsaw_defsz00, BGl_string2257z00zzsaw_exprz00);
		}

	}



/* &effects1580 */
	obj_t BGl_z62effects1580z62zzsaw_exprz00(obj_t BgL_envz00_3545,
		obj_t BgL_funz00_3546)
	{
		{	/* SawMill/expr.scm 229 */
			return ((obj_t) BGl_za2noeffectza2z00zzsaw_exprz00);
		}

	}



/* &accept-folding?1578 */
	obj_t BGl_z62acceptzd2foldingzf31578z43zzsaw_exprz00(obj_t BgL_envz00_3547,
		obj_t BgL_bz00_3548, obj_t BgL_insz00_3549, obj_t BgL_treez00_3550)
	{
		{	/* SawMill/expr.scm 166 */
			return BBOOL(((bool_t) 1));
		}

	}



/* accept-folding? */
	BGL_EXPORTED_DEF obj_t
		BGl_acceptzd2foldingzf3z21zzsaw_exprz00(BgL_backendz00_bglt BgL_bz00_106,
		obj_t BgL_insz00_107, obj_t BgL_treez00_108)
	{
		{	/* SawMill/expr.scm 166 */
			{	/* SawMill/expr.scm 166 */
				obj_t BgL_method1579z00_2562;

				{	/* SawMill/expr.scm 166 */
					obj_t BgL_res2221z00_3407;

					{	/* SawMill/expr.scm 166 */
						long BgL_objzd2classzd2numz00_3372;

						{	/* SawMill/expr.scm 166 */
							long BgL_res2211z00_3375;

							BgL_res2211z00_3375 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_bz00_106));
							BgL_objzd2classzd2numz00_3372 = BgL_res2211z00_3375;
						}
						{	/* SawMill/expr.scm 166 */
							obj_t BgL_arg1813z00_3373;

							BgL_arg1813z00_3373 =
								PROCEDURE_REF(BGl_acceptzd2foldingzf3zd2envzf3zzsaw_exprz00,
								(int) (((long) 1)));
							{	/* SawMill/expr.scm 166 */
								int BgL_offsetz00_3377;

								BgL_offsetz00_3377 = (int) (BgL_objzd2classzd2numz00_3372);
								{	/* SawMill/expr.scm 166 */
									long BgL_offsetz00_3378;

									BgL_offsetz00_3378 =
										((long) (BgL_offsetz00_3377) - OBJECT_TYPE);
									{	/* SawMill/expr.scm 166 */
										long BgL_modz00_3379;

										BgL_modz00_3379 =
											(BgL_offsetz00_3378 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawMill/expr.scm 166 */
											long BgL_restz00_3381;

											BgL_restz00_3381 =
												(BgL_offsetz00_3378 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawMill/expr.scm 166 */

												{	/* SawMill/expr.scm 166 */
													obj_t BgL_bucketz00_3383;

													BgL_bucketz00_3383 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_3373), BgL_modz00_3379);
													BgL_res2221z00_3407 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_3383), BgL_restz00_3381);
					}}}}}}}}
					BgL_method1579z00_2562 = BgL_res2221z00_3407;
				}
				return
					PROCEDURE_ENTRY(BgL_method1579z00_2562) (BgL_method1579z00_2562,
					((obj_t) BgL_bz00_106), BgL_insz00_107, BgL_treez00_108, BEOA);
			}
		}

	}



/* &accept-folding? */
	obj_t BGl_z62acceptzd2foldingzf3z43zzsaw_exprz00(obj_t BgL_envz00_3551,
		obj_t BgL_bz00_3552, obj_t BgL_insz00_3553, obj_t BgL_treez00_3554)
	{
		{	/* SawMill/expr.scm 166 */
			return
				BGl_acceptzd2foldingzf3z21zzsaw_exprz00(
				((BgL_backendz00_bglt) BgL_bz00_3552), BgL_insz00_3553,
				BgL_treez00_3554);
		}

	}



/* effects */
	obj_t BGl_effectsz00zzsaw_exprz00(BgL_rtl_funz00_bglt BgL_funz00_117)
	{
		{	/* SawMill/expr.scm 229 */
			{	/* SawMill/expr.scm 229 */
				obj_t BgL_method1581z00_2563;

				{	/* SawMill/expr.scm 229 */
					obj_t BgL_res2232z00_3444;

					{	/* SawMill/expr.scm 229 */
						long BgL_objzd2classzd2numz00_3409;

						{	/* SawMill/expr.scm 229 */
							long BgL_res2222z00_3412;

							BgL_res2222z00_3412 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_funz00_117));
							BgL_objzd2classzd2numz00_3409 = BgL_res2222z00_3412;
						}
						{	/* SawMill/expr.scm 229 */
							obj_t BgL_arg1813z00_3410;

							BgL_arg1813z00_3410 =
								PROCEDURE_REF(BGl_effectszd2envzd2zzsaw_exprz00,
								(int) (((long) 1)));
							{	/* SawMill/expr.scm 229 */
								int BgL_offsetz00_3414;

								BgL_offsetz00_3414 = (int) (BgL_objzd2classzd2numz00_3409);
								{	/* SawMill/expr.scm 229 */
									long BgL_offsetz00_3415;

									BgL_offsetz00_3415 =
										((long) (BgL_offsetz00_3414) - OBJECT_TYPE);
									{	/* SawMill/expr.scm 229 */
										long BgL_modz00_3416;

										BgL_modz00_3416 =
											(BgL_offsetz00_3415 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawMill/expr.scm 229 */
											long BgL_restz00_3418;

											BgL_restz00_3418 =
												(BgL_offsetz00_3415 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawMill/expr.scm 229 */

												{	/* SawMill/expr.scm 229 */
													obj_t BgL_bucketz00_3420;

													BgL_bucketz00_3420 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_3410), BgL_modz00_3416);
													BgL_res2232z00_3444 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_3420), BgL_restz00_3418);
					}}}}}}}}
					BgL_method1581z00_2563 = BgL_res2232z00_3444;
				}
				return
					PROCEDURE_ENTRY(BgL_method1581z00_2563) (BgL_method1581z00_2563,
					((obj_t) BgL_funz00_117), BEOA);
			}
		}

	}



/* &effects */
	obj_t BGl_z62effectsz62zzsaw_exprz00(obj_t BgL_envz00_3555,
		obj_t BgL_funz00_3556)
	{
		{	/* SawMill/expr.scm 229 */
			return
				BGl_effectsz00zzsaw_exprz00(((BgL_rtl_funz00_bglt) BgL_funz00_3556));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_exprz00()
	{
		{	/* SawMill/expr.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_loadgz00zzsaw_defsz00,
				BGl_proc2258z00zzsaw_exprz00, BGl_string2259z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_storegz00zzsaw_defsz00,
				BGl_proc2260z00zzsaw_exprz00, BGl_string2259z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_vrefz00zzsaw_defsz00,
				BGl_proc2261z00zzsaw_exprz00, BGl_string2259z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_vsetz00zzsaw_defsz00,
				BGl_proc2262z00zzsaw_exprz00, BGl_string2259z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_boxrefz00zzsaw_defsz00,
				BGl_proc2263z00zzsaw_exprz00, BGl_string2259z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_boxsetz00zzsaw_defsz00,
				BGl_proc2264z00zzsaw_exprz00, BGl_string2259z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_getfieldz00zzsaw_defsz00,
				BGl_proc2265z00zzsaw_exprz00, BGl_string2259z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_setfieldz00zzsaw_defsz00,
				BGl_proc2266z00zzsaw_exprz00, BGl_string2259z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_applyz00zzsaw_defsz00,
				BGl_proc2267z00zzsaw_exprz00, BGl_string2259z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00,
				BGl_rtl_lightfuncallz00zzsaw_defsz00, BGl_proc2268z00zzsaw_exprz00,
				BGl_string2259z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_funcallz00zzsaw_defsz00,
				BGl_proc2269z00zzsaw_exprz00, BGl_string2259z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_pragmaz00zzsaw_defsz00,
				BGl_proc2270z00zzsaw_exprz00, BGl_string2259z00zzsaw_exprz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_protectz00zzsaw_defsz00,
				BGl_proc2271z00zzsaw_exprz00, BGl_string2259z00zzsaw_exprz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_effectszd2envzd2zzsaw_exprz00, BGl_rtl_callz00zzsaw_defsz00,
				BGl_proc2272z00zzsaw_exprz00, BGl_string2259z00zzsaw_exprz00);
		}

	}



/* &effects-rtl_call1609 */
	obj_t BGl_z62effectszd2rtl_call1609zb0zzsaw_exprz00(obj_t BgL_envz00_3571,
		obj_t BgL_funz00_3572)
	{
		{	/* SawMill/expr.scm 244 */
			{	/* SawMill/expr.scm 245 */
				BgL_globalz00_bglt BgL_varz00_3715;

				BgL_varz00_3715 =
					(((BgL_rtl_callz00_bglt) COBJECT(
							((BgL_rtl_callz00_bglt) BgL_funz00_3572)))->BgL_varz00);
				{	/* SawMill/expr.scm 246 */
					obj_t BgL__ortest_1243z00_3716;

					BgL__ortest_1243z00_3716 =
						BGl_getpropz00zz__r4_symbols_6_4z00(
						(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_varz00_3715)))->BgL_idz00),
						(((BgL_globalz00_bglt) COBJECT(BgL_varz00_3715))->BgL_modulez00));
					if (CBOOL(BgL__ortest_1243z00_3716))
						{	/* SawMill/expr.scm 246 */
							return BgL__ortest_1243z00_3716;
						}
					else
						{	/* SawMill/expr.scm 246 */
							return
								((obj_t) BGl_manuzd2effectzd2zzsaw_exprz00(BgL_varz00_3715));
						}
				}
			}
		}

	}



/* &effects-rtl_protect1607 */
	obj_t BGl_z62effectszd2rtl_protect1607zb0zzsaw_exprz00(obj_t BgL_envz00_3573,
		obj_t BgL_funz00_3574)
	{
		{	/* SawMill/expr.scm 242 */
			return ((obj_t) BGl_za2fullza2z00zzsaw_exprz00);
		}

	}



/* &effects-rtl_pragma1605 */
	obj_t BGl_z62effectszd2rtl_pragma1605zb0zzsaw_exprz00(obj_t BgL_envz00_3575,
		obj_t BgL_funz00_3576)
	{
		{	/* SawMill/expr.scm 241 */
			return ((obj_t) BGl_za2fullza2z00zzsaw_exprz00);
		}

	}



/* &effects-rtl_funcall1603 */
	obj_t BGl_z62effectszd2rtl_funcall1603zb0zzsaw_exprz00(obj_t BgL_envz00_3577,
		obj_t BgL_funz00_3578)
	{
		{	/* SawMill/expr.scm 240 */
			return ((obj_t) BGl_za2fullza2z00zzsaw_exprz00);
		}

	}



/* &effects-rtl_lightfun1601 */
	obj_t BGl_z62effectszd2rtl_lightfun1601zb0zzsaw_exprz00(obj_t BgL_envz00_3579,
		obj_t BgL_funz00_3580)
	{
		{	/* SawMill/expr.scm 239 */
			return ((obj_t) BGl_za2fullza2z00zzsaw_exprz00);
		}

	}



/* &effects-rtl_apply1599 */
	obj_t BGl_z62effectszd2rtl_apply1599zb0zzsaw_exprz00(obj_t BgL_envz00_3581,
		obj_t BgL_funz00_3582)
	{
		{	/* SawMill/expr.scm 238 */
			return ((obj_t) BGl_za2fullza2z00zzsaw_exprz00);
		}

	}



/* &effects-rtl_setfield1597 */
	obj_t BGl_z62effectszd2rtl_setfield1597zb0zzsaw_exprz00(obj_t BgL_envz00_3583,
		obj_t BgL_funz00_3584)
	{
		{	/* SawMill/expr.scm 237 */
			return ((obj_t) BGl_za2setfza2z00zzsaw_exprz00);
		}

	}



/* &effects-rtl_getfield1595 */
	obj_t BGl_z62effectszd2rtl_getfield1595zb0zzsaw_exprz00(obj_t BgL_envz00_3585,
		obj_t BgL_funz00_3586)
	{
		{	/* SawMill/expr.scm 236 */
			return ((obj_t) BGl_za2getfza2z00zzsaw_exprz00);
		}

	}



/* &effects-rtl_boxset1593 */
	obj_t BGl_z62effectszd2rtl_boxset1593zb0zzsaw_exprz00(obj_t BgL_envz00_3587,
		obj_t BgL_funz00_3588)
	{
		{	/* SawMill/expr.scm 235 */
			return ((obj_t) BGl_za2boxsetza2z00zzsaw_exprz00);
		}

	}



/* &effects-rtl_boxref1591 */
	obj_t BGl_z62effectszd2rtl_boxref1591zb0zzsaw_exprz00(obj_t BgL_envz00_3589,
		obj_t BgL_funz00_3590)
	{
		{	/* SawMill/expr.scm 234 */
			return ((obj_t) BGl_za2boxrefza2z00zzsaw_exprz00);
		}

	}



/* &effects-rtl_vset1589 */
	obj_t BGl_z62effectszd2rtl_vset1589zb0zzsaw_exprz00(obj_t BgL_envz00_3591,
		obj_t BgL_funz00_3592)
	{
		{	/* SawMill/expr.scm 233 */
			return ((obj_t) BGl_za2vsetza2z00zzsaw_exprz00);
		}

	}



/* &effects-rtl_vref1587 */
	obj_t BGl_z62effectszd2rtl_vref1587zb0zzsaw_exprz00(obj_t BgL_envz00_3593,
		obj_t BgL_funz00_3594)
	{
		{	/* SawMill/expr.scm 232 */
			return ((obj_t) BGl_za2vrefza2z00zzsaw_exprz00);
		}

	}



/* &effects-rtl_storeg1585 */
	obj_t BGl_z62effectszd2rtl_storeg1585zb0zzsaw_exprz00(obj_t BgL_envz00_3595,
		obj_t BgL_funz00_3596)
	{
		{	/* SawMill/expr.scm 231 */
			return ((obj_t) BGl_za2storegza2z00zzsaw_exprz00);
		}

	}



/* &effects-rtl_loadg1583 */
	obj_t BGl_z62effectszd2rtl_loadg1583zb0zzsaw_exprz00(obj_t BgL_envz00_3597,
		obj_t BgL_funz00_3598)
	{
		{	/* SawMill/expr.scm 230 */
			return ((obj_t) BGl_za2loadgza2z00zzsaw_exprz00);
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_exprz00()
	{
		{	/* SawMill/expr.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2273z00zzsaw_exprz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2273z00zzsaw_exprz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2273z00zzsaw_exprz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2273z00zzsaw_exprz00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string2273z00zzsaw_exprz00));
			return
				BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2273z00zzsaw_exprz00));
		}

	}

#ifdef __cplusplus
}
#endif
