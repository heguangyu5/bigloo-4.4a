/*===========================================================================*/
/*   (Ast/let.scm)                                                           */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/let.scm) */
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

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
		obj_t BgL_subclassesz00;
	}                *BgL_tclassz00_bglt;

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


	extern obj_t BGl_normaliza7ezd2prognz75zztools_prognz00(obj_t);
	static obj_t BGl_z62letzd2symzf3z43zzast_letz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_z62letcollapsez62zzast_letz00(obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	static BgL_letzd2varzd2_bglt BGl_makezd2genericzd2letz00zzast_letz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza32997ze3ze70z60zzast_letz00(obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_z62letstarz62zzast_letz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzast_letz00();
	static BgL_nodez00_bglt BGl_z62stage1z62zzast_letz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62stage2z62zzast_letz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62stage3z62zzast_letz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62stage4z62zzast_letz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62stage5z62zzast_letz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62stage7z62zzast_letz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	BGL_EXPORTED_DECL obj_t BGl_letzd2symzf3z21zzast_letz00(obj_t);
	static obj_t BGl_appendzd221011zd2zzast_letz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_letz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static BgL_letzd2varzd2_bglt BGl_letzd2orzd2letrecz00zzast_letz00(obj_t,
		BgL_letzd2varzd2_bglt, obj_t);
	static obj_t BGl__functionzf3zf3zzast_letz00(obj_t, obj_t);
	static obj_t BGl_functionzf3zf3zzast_letz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_z62mutablezd2inzf3z43zzast_letz00(obj_t, obj_t);
	static obj_t BGl_z62usedzd2inzf3z43zzast_letz00(obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_z62splitz62zzast_letz00(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern BgL_nodez00_bglt BGl_substitutez12z12zzast_substitutez00(obj_t, obj_t,
		BgL_nodez00_bglt, obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static bool_t BGl_safezd2reczd2valzf3ze70z14zzast_letz00(obj_t);
	BGL_IMPORT bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_nodezd2removez12zc0zzast_removez00(BgL_nodez00_bglt);
	extern BgL_nodez00_bglt BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_appendza2ze70z45zzast_letz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_letz00();
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	extern BgL_localz00_bglt
		BGl_makezd2userzd2localzd2svarzd2zzast_localz00(obj_t, BgL_typez00_bglt);
	static obj_t BGl_za2letza2z00zzast_letz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_occurzd2nodez12zc0zzast_occurz00(BgL_nodez00_bglt);
	extern obj_t BGl_usezd2variablez12zc0zzast_sexpz00(BgL_variablez00_bglt,
		obj_t, obj_t);
	static bool_t BGl_loopze70ze7zzast_letz00(obj_t);
	static obj_t BGl_loopze71ze7zzast_letz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_loopze72ze7zzast_letz00(obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_letrecza2zd2ze3nodez93zzast_letz00(obj_t, obj_t, obj_t, obj_t);
	static BgL_nodezf2effectzf2_bglt
		BGl_makezd2smartzd2genericzd2letzd2zzast_letz00(obj_t,
		BgL_letzd2varzd2_bglt, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzast_letz00 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	extern obj_t BGl_atomz00zzast_nodez00;
	static obj_t BGl_toplevelzd2initzd2zzast_letz00();
	static obj_t BGl_z62split4038z62zzast_letz00(obj_t, obj_t);
	static obj_t BGl_z62split4039z62zzast_letz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_z62split4040z62zzast_letz00(obj_t, obj_t);
	static bool_t BGl_safezd2letzd2optimzf3ze70z14zzast_letz00(obj_t,
		BgL_letzd2varzd2_bglt);
	static obj_t BGl_z62split4041z62zzast_letz00(obj_t, obj_t);
	static obj_t BGl_z62split4042z62zzast_letz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_letz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_z62letzd2symzb0zzast_letz00(obj_t);
	static bool_t BGl_constantzf3zf3zzast_letz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static bool_t BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62letzd2ze3nodez53zzast_letz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_epairifyzd2propagatezd2locz00zztools_miscz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt BGl_letzd2ze3nodez31zzast_letz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza33004ze3ze70z60zzast_letz00(obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	static BgL_letzd2funzd2_bglt BGl_letzd2ze3labelsz31zzast_letz00(obj_t,
		BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62letrecza2zd2ze3nodezf1zzast_letz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_letz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_substitutez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern BgL_typez00_bglt BGl_typezd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_letrecursiveze70ze7zzast_letz00(obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_letz00();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_letz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_letz00();
	BGL_EXPORTED_DECL obj_t BGl_letzd2symzd2zzast_letz00();
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern bool_t BGl_userzd2symbolzf3z21zzast_identz00(obj_t);
	extern obj_t BGl_za2callzf2cczf3za2z01zzengine_paramz00;
	extern obj_t BGl_switchz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62splitzd2headzd2letrecz62zzast_letz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t __cnst[39];


	   
		 
		DEFINE_UINT64(BGl_uint644057z00zzast_letz00,
		BgL_bgl_uint644057za700za7za7a4066za7, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_functionzf3zd2envz21zzast_letz00,
		BgL_bgl__functionza7f3za7f3za74067za7, opt_generic_entry,
		BGl__functionzf3zf3zzast_letz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_letzd2symzd2envz00zzast_letz00,
		BgL_bgl_za762letza7d2symza7b0za74068z00, BGl_z62letzd2symzb0zzast_letz00,
		0L, BUNSPEC, 0);
	      DEFINE_REAL(BGl_real4058z00zzast_letz00,
		BgL_bgl_real4058za700za7za7ast4069za7, 0.0);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc4046z00zzast_letz00,
		BgL_bgl_za762split4038za762za74070za7, BGl_z62split4038z62zzast_letz00);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc4052z00zzast_letz00,
		BgL_bgl_za762split4039za762za74071za7, BGl_z62split4039z62zzast_letz00);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc4053z00zzast_letz00,
		BgL_bgl_za762split4040za762za74072za7, BGl_z62split4040z62zzast_letz00);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_letzd2symzf3zd2envzf3zzast_letz00,
		BgL_bgl_za762letza7d2symza7f3za74073z00, BGl_z62letzd2symzf3z43zzast_letz00,
		0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_expzd2envzd2zz__r4_numbers_6_5z00;
	   
		 
		DEFINE_INT32(BGl_int324054z00zzast_letz00,
		BgL_bgl_int324054za700za7za7as4074za7, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_letrecza2zd2ze3nodezd2envz41zzast_letz00,
		BgL_bgl_za762letrecza7a2za7d2za74075z00,
		BGl_z62letrecza2zd2ze3nodezf1zzast_letz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string4044z00zzast_letz00,
		BgL_bgl_string4044za700za7za7a4076za7, "Illegal `", 9);
	      DEFINE_STRING(BGl_string4045z00zzast_letz00,
		BgL_bgl_string4045za700za7za7a4077za7, "' form", 6);
	      DEFINE_STRING(BGl_string4047z00zzast_letz00,
		BgL_bgl_string4047za700za7za7a4078za7, "Illegal 'letrec*' form", 22);
	      DEFINE_STRING(BGl_string4048z00zzast_letz00,
		BgL_bgl_string4048za700za7za7a4079za7, "labels collapse val=", 20);
	      DEFINE_STRING(BGl_string4049z00zzast_letz00,
		BgL_bgl_string4049za700za7za7a4080za7, ":", 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_letzd2ze3nodezd2envze3zzast_letz00,
		BgL_bgl_za762letza7d2za7e3node4081za7, BGl_z62letzd2ze3nodez53zzast_letz00,
		0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string4050z00zzast_letz00,
		BgL_bgl_string4050za700za7za7a4082za7, ",", 1);
	      DEFINE_STRING(BGl_string4051z00zzast_letz00,
		BgL_bgl_string4051za700za7za7a4083za7, "Ast/let.scm", 11);
	      DEFINE_STRING(BGl_string4059z00zzast_letz00,
		BgL_bgl_string4059za700za7za7a4084za7, "type-undefined", 14);
	      DEFINE_STRING(BGl_string4060z00zzast_letz00,
		BgL_bgl_string4060za700za7za7a4085za7, "cannot undefined type", 21);
	      DEFINE_STRING(BGl_string4061z00zzast_letz00,
		BgL_bgl_string4061za700za7za7a4086za7, "ast_let", 7);
	      DEFINE_STRING(BGl_string4062z00zzast_letz00,
		BgL_bgl_string4062za700za7za7a4087za7,
		"not if (+ - * +fx -fx *fx +elong -elong *elong +llong -llong *llong +s8 -s8 *s8 +u8 -u8 *u8 +s16 -s16 *s16 +u16 -u16 *u16 +s32 -s32 *s32 +u32 -u32 *u32 +s64 -s64 *s64 +u64 -u64 *u64 +f32 -f32 *f32 +f64 -f64 *f64 > >= < <= = >fx >=fx <fx <=fx =fx >elong >=elong <elong <=elong =elong >llong >=llong <llong <=llong =llong >s8 >=s8 <s8 <=s8 =s8 >u8 >=u8 <u8 <=u8 =u8 >s16 >=s16 <s16 <=s16 =s16 >u16 >=u16 <u16 <=u16 =u16 >s32 >=s32 <s32 <=s32 =s32 >u32 >=u32 <u32 <=u32 =u32 >s64 >=s64 <s64 <=s64 =s64 >u64 >=u64 <u64 <=u64 =u64 >f32 >=f32 <f32 <=f32 =f32 >f64 >=f64 <f64 <=f64 =f64 eq? equal? bit-lsh bit-rsh bit-ursh bit-not bit-xor bit-lshelong bit-rshelong bit-urshelong bit-notelong bit-xorelong bit-lshs8 bit-rshs8 bit-urshs8 bit-nots8 bit-xors8 bit-lshu8 bit-rshu8 bit-urshu8 bit-notu8 bit-xoru8 bit-lshs16 bit-rshs16 bit-urshs16 bit-nots16 bit-xors16 bit-lshu16 bit-rshu16 bit-urshu16 bit-notu16 bit-xoru16 bit-lshs32 bit-rshs32 bit-urshs32 bit-nots32 bit-xors32 bit-lshu32 bit-rshu32 bit-urshu32 bit-notu32 bit-xoru32 "
		"bit-lshs64 bit-rshs64 bit-urshs64 bit-nots64 bit-xors64 bit-lshu64 bit-rshu64 bit-urshu64 bit-notu64 bit-xoru64) (_ obj) char make-cell cell list procedure bool long int real double uint64 int64 uint32 int32 uint16 int16 uint8 int8 _ obj class-nil @ let* quote letrec begin labels lambda read set! letrec* write location value let ",
		1355);
	      DEFINE_UINT32(BGl_uint324055z00zzast_letz00,
		BgL_bgl_uint324055za700za7za7a4088za7, 0);
	      DEFINE_INT64(BGl_int644056z00zzast_letz00,
		BgL_bgl_int644056za700za7za7as4089za7, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2letza2z00zzast_letz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_letz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_letz00(long
		BgL_checksumz00_6698, char *BgL_fromz00_6699)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_letz00))
				{
					BGl_requirezd2initializa7ationz75zzast_letz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_letz00();
					BGl_libraryzd2moduleszd2initz00zzast_letz00();
					BGl_cnstzd2initzd2zzast_letz00();
					BGl_importedzd2moduleszd2initz00zzast_letz00();
					return BGl_toplevelzd2initzd2zzast_letz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_letz00()
	{
		{	/* Ast/let.scm 14 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_let");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_let");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_let");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"ast_let");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_let");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_let");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_let");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_let");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"ast_let");
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 0),
				"ast_let");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"ast_let");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"ast_let");
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long) 0),
				"ast_let");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_let");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0), "ast_let");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "ast_let");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_letz00()
	{
		{	/* Ast/let.scm 14 */
			{	/* Ast/let.scm 14 */
				obj_t BgL_cportz00_6258;

				{	/* Ast/let.scm 14 */
					obj_t BgL_stringz00_6266;

					BgL_stringz00_6266 = BGl_string4062z00zzast_letz00;
					{	/* Ast/let.scm 14 */
						obj_t BgL_startz00_6267;

						BgL_startz00_6267 = BINT(((long) 0));
						{	/* Ast/let.scm 14 */
							obj_t BgL_endz00_6268;

							BgL_endz00_6268 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_6266)));
							{	/* Ast/let.scm 14 */

								BgL_cportz00_6258 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_6266, BgL_startz00_6267, BgL_endz00_6268);
				}}}}
				{
					long BgL_iz00_6259;

					BgL_iz00_6259 = ((long) 38);
				BgL_loopz00_6260:
					if ((BgL_iz00_6259 == ((long) -1)))
						{	/* Ast/let.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/let.scm 14 */
							{	/* Ast/let.scm 14 */
								obj_t BgL_arg4064z00_6262;

								{	/* Ast/let.scm 14 */

									{	/* Ast/let.scm 14 */
										obj_t BgL_locationz00_6264;

										BgL_locationz00_6264 = BBOOL(((bool_t) 0));
										{	/* Ast/let.scm 14 */

											BgL_arg4064z00_6262 =
												BGl_readz00zz__readerz00(BgL_cportz00_6258,
												BgL_locationz00_6264);
										}
									}
								}
								{	/* Ast/let.scm 14 */
									int BgL_tmpz00_6733;

									BgL_tmpz00_6733 = (int) (BgL_iz00_6259);
									CNST_TABLE_SET(BgL_tmpz00_6733, BgL_arg4064z00_6262);
							}}
							{	/* Ast/let.scm 14 */
								int BgL_auxz00_6265;

								BgL_auxz00_6265 = (int) ((BgL_iz00_6259 - ((long) 1)));
								{
									long BgL_iz00_6738;

									BgL_iz00_6738 = (long) (BgL_auxz00_6265);
									BgL_iz00_6259 = BgL_iz00_6738;
									goto BgL_loopz00_6260;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_letz00()
	{
		{	/* Ast/let.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_letz00()
	{
		{	/* Ast/let.scm 14 */
			return (BGl_za2letza2z00zzast_letz00 =
				BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 0))),
				BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzast_letz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1671;

				BgL_headz00_1671 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1672;
					obj_t BgL_tailz00_1673;

					BgL_prevz00_1672 = BgL_headz00_1671;
					BgL_tailz00_1673 = BgL_l1z00_1;
				BgL_loopz00_1674:
					if (PAIRP(BgL_tailz00_1673))
						{
							obj_t BgL_newzd2prevzd2_1676;

							BgL_newzd2prevzd2_1676 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1673), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1672, BgL_newzd2prevzd2_1676);
							{
								obj_t BgL_tailz00_6750;
								obj_t BgL_prevz00_6749;

								BgL_prevz00_6749 = BgL_newzd2prevzd2_1676;
								BgL_tailz00_6750 = CDR(BgL_tailz00_1673);
								BgL_tailz00_1673 = BgL_tailz00_6750;
								BgL_prevz00_1672 = BgL_prevz00_6749;
								goto BgL_loopz00_1674;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1671);
				}
			}
		}

	}



/* let-sym */
	BGL_EXPORTED_DEF obj_t BGl_letzd2symzd2zzast_letz00()
	{
		{	/* Ast/let.scm 46 */
			return BGl_za2letza2z00zzast_letz00;
		}

	}



/* &let-sym */
	obj_t BGl_z62letzd2symzb0zzast_letz00(obj_t BgL_envz00_6155)
	{
		{	/* Ast/let.scm 46 */
			return BGl_letzd2symzd2zzast_letz00();
		}

	}



/* let-sym? */
	BGL_EXPORTED_DEF obj_t BGl_letzd2symzf3z21zzast_letz00(obj_t BgL_symz00_17)
	{
		{	/* Ast/let.scm 52 */
			return BBOOL((BgL_symz00_17 == BGl_za2letza2z00zzast_letz00));
		}

	}



/* &let-sym? */
	obj_t BGl_z62letzd2symzf3z43zzast_letz00(obj_t BgL_envz00_6156,
		obj_t BgL_symz00_6157)
	{
		{	/* Ast/let.scm 52 */
			return BGl_letzd2symzf3z21zzast_letz00(BgL_symz00_6157);
		}

	}



/* let->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt BGl_letzd2ze3nodez31zzast_letz00(obj_t
		BgL_expz00_18, obj_t BgL_stackz00_19, obj_t BgL_olocz00_20,
		obj_t BgL_sitez00_21)
	{
		{	/* Ast/let.scm 58 */
			{
				obj_t BgL_bindingsz00_1693;
				obj_t BgL_bodyz00_1691;

				if (PAIRP(BgL_expz00_18))
					{	/* Ast/let.scm 69 */
						obj_t BgL_cdrzd2367zd2_1698;

						BgL_cdrzd2367zd2_1698 = CDR(BgL_expz00_18);
						if (PAIRP(BgL_cdrzd2367zd2_1698))
							{	/* Ast/let.scm 69 */
								if (NULLP(CAR(BgL_cdrzd2367zd2_1698)))
									{	/* Ast/let.scm 69 */
										obj_t BgL_arg1662z00_1702;

										BgL_arg1662z00_1702 = CDR(BgL_cdrzd2367zd2_1698);
										{
											BgL_letzd2varzd2_bglt BgL_auxz00_6766;

											BgL_bodyz00_1691 = BgL_arg1662z00_1702;
											{	/* Ast/let.scm 72 */
												obj_t BgL_nlocz00_1706;

												BgL_nlocz00_1706 =
													BGl_findzd2locationzf2locz20zztools_locationz00
													(BgL_expz00_18, BgL_olocz00_20);
												{	/* Ast/let.scm 72 */
													obj_t BgL_blocz00_1707;

													if (PAIRP(BgL_bodyz00_1691))
														{	/* Ast/let.scm 73 */
															BgL_blocz00_1707 =
																BGl_findzd2locationzf2locz20zztools_locationz00
																(CAR(BgL_bodyz00_1691), BgL_nlocz00_1706);
														}
													else
														{	/* Ast/let.scm 73 */
															BgL_blocz00_1707 = BgL_nlocz00_1706;
														}
													{	/* Ast/let.scm 73 */
														BgL_nodez00_bglt BgL_bodyz00_1708;

														{	/* Ast/let.scm 76 */
															obj_t BgL_arg1685z00_1714;

															BgL_arg1685z00_1714 =
																BGl_normaliza7ezd2prognz75zztools_prognz00
																(BgL_bodyz00_1691);
															BgL_bodyz00_1708 =
																BGl_sexpzd2ze3nodez31zzast_sexpz00
																(BgL_arg1685z00_1714, BgL_stackz00_19,
																BgL_blocz00_1707, CNST_TABLE_REF(((long) 1)));
														}
														{	/* Ast/let.scm 76 */

															{	/* Ast/let.scm 81 */
																BgL_letzd2varzd2_bglt BgL_new1109z00_1709;

																{	/* Ast/let.scm 82 */
																	BgL_letzd2varzd2_bglt BgL_new1108z00_1712;

																	BgL_new1108z00_1712 =
																		((BgL_letzd2varzd2_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_letzd2varzd2_bgl))));
																	{	/* Ast/let.scm 82 */
																		long BgL_arg1684z00_1713;

																		{	/* Ast/let.scm 82 */
																			long BgL_res3622z00_4654;

																			BgL_res3622z00_4654 =
																				BGL_CLASS_INDEX
																				(BGl_letzd2varzd2zzast_nodez00);
																			BgL_arg1684z00_1713 = BgL_res3622z00_4654;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1108z00_1712),
																			BgL_arg1684z00_1713);
																	}
																	{	/* Ast/let.scm 82 */
																		BgL_objectz00_bglt BgL_tmpz00_6779;

																		BgL_tmpz00_6779 =
																			((BgL_objectz00_bglt)
																			BgL_new1108z00_1712);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6779,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1108z00_1712);
																	BgL_new1109z00_1709 = BgL_new1108z00_1712;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1109z00_1709)))->BgL_locz00) =
																	((obj_t) BgL_nlocz00_1706), BUNSPEC);
																{
																	BgL_typez00_bglt BgL_auxz00_6785;

																	{	/* Ast/let.scm 83 */
																		BgL_typez00_bglt BgL_arg1669z00_1710;

																		BgL_arg1669z00_1710 =
																			(((BgL_nodez00_bglt)
																				COBJECT(BgL_bodyz00_1708))->
																			BgL_typez00);
																		BgL_auxz00_6785 =
																			BGl_strictzd2nodezd2typez00zzast_nodez00((
																				(BgL_typez00_bglt)
																				BGl_za2_za2z00zztype_cachez00),
																			BgL_arg1669z00_1710);
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1109z00_1709)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) BgL_auxz00_6785),
																		BUNSPEC);
																}
																((((BgL_nodezf2effectzf2_bglt) COBJECT(
																				((BgL_nodezf2effectzf2_bglt)
																					BgL_new1109z00_1709)))->
																		BgL_sidezd2effectzd2) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_nodezf2effectzf2_bglt)
																			COBJECT(((BgL_nodezf2effectzf2_bglt)
																					BgL_new1109z00_1709)))->BgL_keyz00) =
																	((obj_t) BINT(((long) -1))), BUNSPEC);
																((((BgL_letzd2varzd2_bglt)
																			COBJECT(BgL_new1109z00_1709))->
																		BgL_bindingsz00) = ((obj_t) BNIL), BUNSPEC);
																((((BgL_letzd2varzd2_bglt)
																			COBJECT(BgL_new1109z00_1709))->
																		BgL_bodyz00) =
																	((BgL_nodez00_bglt) BgL_bodyz00_1708),
																	BUNSPEC);
																{
																	bool_t BgL_auxz00_6798;

																	{	/* Ast/let.scm 86 */
																		obj_t BgL_arg1672z00_1711;

																		BgL_arg1672z00_1711 =
																			BGl_thezd2backendzd2zzbackend_backendz00
																			();
																		BgL_auxz00_6798 =
																			(((BgL_backendz00_bglt)
																				COBJECT(((BgL_backendz00_bglt)
																						BgL_arg1672z00_1711)))->
																			BgL_removezd2emptyzd2letz00);
																	}
																	((((BgL_letzd2varzd2_bglt)
																				COBJECT(BgL_new1109z00_1709))->
																			BgL_removablezf3zf3) =
																		((bool_t) BgL_auxz00_6798), BUNSPEC);
																}
																BgL_auxz00_6766 = BgL_new1109z00_1709;
											}}}}}
											return ((BgL_nodez00_bglt) BgL_auxz00_6766);
										}
									}
								else
									{	/* Ast/let.scm 69 */
										obj_t BgL_arg1663z00_1703;

										BgL_arg1663z00_1703 = CAR(((obj_t) BgL_cdrzd2367zd2_1698));
										BgL_bindingsz00_1693 = BgL_arg1663z00_1703;
										{	/* Ast/let.scm 88 */
											bool_t BgL_test4097z00_6806;

											{	/* Ast/let.scm 88 */
												bool_t BgL_test4098z00_6807;

												if (PAIRP(BgL_bindingsz00_1693))
													{	/* Ast/let.scm 88 */
														BgL_test4098z00_6807 = ((bool_t) 1);
													}
												else
													{	/* Ast/let.scm 88 */
														BgL_test4098z00_6807 = NULLP(BgL_bindingsz00_1693);
													}
												if (BgL_test4098z00_6807)
													{
														obj_t BgL_bindingsz00_1745;

														BgL_bindingsz00_1745 = BgL_bindingsz00_1693;
													BgL_zc3z04anonymousza31726ze3z87_1746:
														if (NULLP(BgL_bindingsz00_1745))
															{	/* Ast/let.scm 90 */
																BgL_test4097z00_6806 = ((bool_t) 0);
															}
														else
															{

																{	/* Ast/let.scm 93 */
																	obj_t BgL_ezd2386zd2_1751;

																	BgL_ezd2386zd2_1751 =
																		CAR(((obj_t) BgL_bindingsz00_1745));
																	if (PAIRP(BgL_ezd2386zd2_1751))
																		{	/* Ast/let.scm 93 */
																			obj_t BgL_cdrzd2388zd2_1753;

																			BgL_cdrzd2388zd2_1753 =
																				CDR(BgL_ezd2386zd2_1751);
																			if (PAIRP(BgL_cdrzd2388zd2_1753))
																				{	/* Ast/let.scm 93 */
																					if (NULLP(CDR(BgL_cdrzd2388zd2_1753)))
																						{	/* Ast/let.scm 93 */
																							{
																								obj_t BgL_bindingsz00_6823;

																								BgL_bindingsz00_6823 =
																									CDR(
																									((obj_t)
																										BgL_bindingsz00_1745));
																								BgL_bindingsz00_1745 =
																									BgL_bindingsz00_6823;
																								goto
																									BgL_zc3z04anonymousza31726ze3z87_1746;
																							}
																						}
																					else
																						{	/* Ast/let.scm 93 */
																							BgL_test4097z00_6806 =
																								((bool_t) 1);
																						}
																				}
																			else
																				{	/* Ast/let.scm 93 */
																					BgL_test4097z00_6806 = ((bool_t) 1);
																				}
																		}
																	else
																		{	/* Ast/let.scm 93 */
																			BgL_test4097z00_6806 = ((bool_t) 1);
																		}
																}
															}
													}
												else
													{	/* Ast/let.scm 88 */
														BgL_test4097z00_6806 = ((bool_t) 1);
													}
											}
											if (BgL_test4097z00_6806)
												{	/* Ast/let.scm 99 */
													obj_t BgL_arg1707z00_1737;
													obj_t BgL_arg1708z00_1738;

													{	/* Ast/let.scm 99 */
														obj_t BgL_arg1711z00_1739;

														{	/* Ast/let.scm 99 */
															obj_t BgL_arg1712z00_1740;

															BgL_arg1712z00_1740 =
																CAR(((obj_t) BgL_expz00_18));
															{	/* Ast/let.scm 99 */
																obj_t BgL_res3630z00_4675;

																{	/* Ast/let.scm 99 */
																	obj_t BgL_arg1466z00_4674;

																	BgL_arg1466z00_4674 =
																		SYMBOL_TO_STRING(
																		((obj_t) BgL_arg1712z00_1740));
																	BgL_res3630z00_4675 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg1466z00_4674);
																}
																BgL_arg1711z00_1739 = BgL_res3630z00_4675;
															}
														}
														BgL_arg1707z00_1737 =
															string_append_3(BGl_string4044z00zzast_letz00,
															BgL_arg1711z00_1739,
															BGl_string4045z00zzast_letz00);
													}
													BgL_arg1708z00_1738 =
														BGl_findzd2locationzf2locz20zztools_locationz00
														(BgL_expz00_18, BgL_olocz00_20);
													return
														BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
														(BgL_arg1707z00_1737, BgL_expz00_18,
														BgL_arg1708z00_1738);
												}
											else
												{	/* Ast/let.scm 103 */
													obj_t BgL_arg1719z00_1741;
													BgL_letzd2varzd2_bglt BgL_arg1725z00_1742;

													BgL_arg1719z00_1741 = CAR(((obj_t) BgL_expz00_18));
													BgL_arg1725z00_1742 =
														BGl_makezd2genericzd2letz00zzast_letz00
														(BgL_expz00_18, BgL_stackz00_19, BgL_olocz00_20,
														BgL_sitez00_21);
													return ((BgL_nodez00_bglt)
														BGl_makezd2smartzd2genericzd2letzd2zzast_letz00
														(BgL_arg1719z00_1741, BgL_arg1725z00_1742,
															BgL_sitez00_21));
												}
										}
									}
							}
						else
							{	/* Ast/let.scm 69 */
							BgL_tagzd2361zd2_1695:
								{	/* Ast/let.scm 108 */
									obj_t BgL_arg1729z00_1760;
									obj_t BgL_arg1731z00_1761;

									{	/* Ast/let.scm 108 */
										obj_t BgL_arg1732z00_1762;

										{	/* Ast/let.scm 108 */
											obj_t BgL_arg1733z00_1763;

											BgL_arg1733z00_1763 = CAR(((obj_t) BgL_expz00_18));
											{	/* Ast/let.scm 108 */
												obj_t BgL_res3631z00_4680;

												{	/* Ast/let.scm 108 */
													obj_t BgL_arg1466z00_4679;

													BgL_arg1466z00_4679 =
														SYMBOL_TO_STRING(((obj_t) BgL_arg1733z00_1763));
													BgL_res3631z00_4680 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_4679);
												}
												BgL_arg1732z00_1762 = BgL_res3631z00_4680;
											}
										}
										BgL_arg1729z00_1760 =
											string_append_3(BGl_string4044z00zzast_letz00,
											BgL_arg1732z00_1762, BGl_string4045z00zzast_letz00);
									}
									BgL_arg1731z00_1761 =
										BGl_findzd2locationzf2locz20zztools_locationz00
										(BgL_expz00_18, BgL_olocz00_20);
									return
										BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
										(BgL_arg1729z00_1760, BgL_expz00_18, BgL_arg1731z00_1761);
								}
							}
					}
				else
					{	/* Ast/let.scm 69 */
						goto BgL_tagzd2361zd2_1695;
					}
			}
		}

	}



/* &let->node */
	BgL_nodez00_bglt BGl_z62letzd2ze3nodez53zzast_letz00(obj_t BgL_envz00_6158,
		obj_t BgL_expz00_6159, obj_t BgL_stackz00_6160, obj_t BgL_olocz00_6161,
		obj_t BgL_sitez00_6162)
	{
		{	/* Ast/let.scm 58 */
			return
				BGl_letzd2ze3nodez31zzast_letz00(BgL_expz00_6159, BgL_stackz00_6160,
				BgL_olocz00_6161, BgL_sitez00_6162);
		}

	}



/* make-generic-let */
	BgL_letzd2varzd2_bglt BGl_makezd2genericzd2letz00zzast_letz00(obj_t
		BgL_expz00_22, obj_t BgL_stackz00_23, obj_t BgL_olocz00_24,
		obj_t BgL_sitez00_25)
	{
		{	/* Ast/let.scm 115 */
			{	/* Ast/let.scm 116 */
				obj_t BgL_bindingsz00_1764;

				{	/* Ast/let.scm 116 */
					obj_t BgL_pairz00_4692;

					BgL_pairz00_4692 = CDR(((obj_t) BgL_expz00_22));
					BgL_bindingsz00_1764 = CAR(BgL_pairz00_4692);
				}
				{	/* Ast/let.scm 116 */
					obj_t BgL_locz00_1765;

					BgL_locz00_1765 =
						BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_22,
						BgL_olocz00_24);
					{	/* Ast/let.scm 117 */
						obj_t BgL_blocz00_1766;

						{	/* Ast/let.scm 118 */
							bool_t BgL_test4104z00_6852;

							{	/* Ast/let.scm 118 */
								obj_t BgL_tmpz00_6853;

								{	/* Ast/let.scm 118 */
									obj_t BgL_pairz00_4696;

									BgL_pairz00_4696 = CDR(((obj_t) BgL_expz00_22));
									BgL_tmpz00_6853 = CDR(BgL_pairz00_4696);
								}
								BgL_test4104z00_6852 = PAIRP(BgL_tmpz00_6853);
							}
							if (BgL_test4104z00_6852)
								{	/* Ast/let.scm 119 */
									obj_t BgL_arg1811z00_1841;

									{	/* Ast/let.scm 119 */
										obj_t BgL_pairz00_4703;

										{	/* Ast/let.scm 119 */
											obj_t BgL_pairz00_4702;

											BgL_pairz00_4702 = CDR(((obj_t) BgL_expz00_22));
											BgL_pairz00_4703 = CDR(BgL_pairz00_4702);
										}
										BgL_arg1811z00_1841 = CAR(BgL_pairz00_4703);
									}
									BgL_blocz00_1766 =
										BGl_findzd2locationzf2locz20zztools_locationz00
										(BgL_arg1811z00_1841, BFALSE);
								}
							else
								{	/* Ast/let.scm 118 */
									BgL_blocz00_1766 = BFALSE;
								}
						}
						{	/* Ast/let.scm 121 */
							obj_t BgL_bodyz00_1768;

							{	/* Ast/let.scm 124 */
								obj_t BgL_arg1798z00_1835;

								{	/* Ast/let.scm 124 */
									obj_t BgL_pairz00_4718;

									BgL_pairz00_4718 = CDR(((obj_t) BgL_expz00_22));
									BgL_arg1798z00_1835 = CDR(BgL_pairz00_4718);
								}
								BgL_bodyz00_1768 =
									BGl_normaliza7ezd2prognz75zztools_prognz00
									(BgL_arg1798z00_1835);
							}
							{	/* Ast/let.scm 124 */
								obj_t BgL_loczd2biszd2_1769;

								BgL_loczd2biszd2_1769 =
									BGl_findzd2locationzf2locz20zztools_locationz00
									(BgL_bodyz00_1768, BgL_locz00_1765);
								{	/* Ast/let.scm 125 */
									obj_t BgL_nlocz00_1770;

									{	/* Ast/let.scm 126 */
										bool_t BgL_test4105z00_6868;

										if (STRUCTP(BgL_blocz00_1766))
											{	/* Ast/let.scm 126 */
												BgL_test4105z00_6868 =
													(STRUCT_KEY(BgL_blocz00_1766) ==
													CNST_TABLE_REF(((long) 2)));
											}
										else
											{	/* Ast/let.scm 126 */
												BgL_test4105z00_6868 = ((bool_t) 0);
											}
										if (BgL_test4105z00_6868)
											{	/* Ast/let.scm 126 */
												BgL_nlocz00_1770 = BgL_blocz00_1766;
											}
										else
											{	/* Ast/let.scm 126 */
												BgL_nlocz00_1770 = BgL_locz00_1765;
											}
									}
									{	/* Ast/let.scm 126 */
										obj_t BgL_framez00_1771;

										if (NULLP(BgL_bindingsz00_1764))
											{	/* Ast/let.scm 129 */
												BgL_framez00_1771 = BNIL;
											}
										else
											{	/* Ast/let.scm 129 */
												obj_t BgL_head1404z00_1818;

												{	/* Ast/let.scm 129 */
													obj_t BgL_res3640z00_4725;

													BgL_res3640z00_4725 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													BgL_head1404z00_1818 = BgL_res3640z00_4725;
												}
												{
													obj_t BgL_l1402z00_1820;
													obj_t BgL_tail1405z00_1821;

													BgL_l1402z00_1820 = BgL_bindingsz00_1764;
													BgL_tail1405z00_1821 = BgL_head1404z00_1818;
												BgL_zc3z04anonymousza31781ze3z87_1822:
													if (NULLP(BgL_l1402z00_1820))
														{	/* Ast/let.scm 129 */
															BgL_framez00_1771 = CDR(BgL_head1404z00_1818);
														}
													else
														{	/* Ast/let.scm 129 */
															obj_t BgL_newtail1406z00_1824;

															{	/* Ast/let.scm 129 */
																BgL_localz00_bglt BgL_arg1790z00_1826;

																{	/* Ast/let.scm 129 */
																	obj_t BgL_bindingz00_1827;

																	BgL_bindingz00_1827 =
																		CAR(((obj_t) BgL_l1402z00_1820));
																	{	/* Ast/let.scm 130 */
																		obj_t BgL_varzd2idzd2_1828;

																		{	/* Ast/let.scm 130 */
																			obj_t BgL_arg1796z00_1832;

																			BgL_arg1796z00_1832 =
																				CAR(((obj_t) BgL_bindingz00_1827));
																			BgL_varzd2idzd2_1828 =
																				BGl_parsezd2idzd2zzast_identz00
																				(BgL_arg1796z00_1832, BgL_nlocz00_1770);
																		}
																		{	/* Ast/let.scm 130 */
																			obj_t BgL_idz00_1829;

																			BgL_idz00_1829 =
																				CAR(BgL_varzd2idzd2_1828);
																			{	/* Ast/let.scm 131 */
																				obj_t BgL_typez00_1830;

																				BgL_typez00_1830 =
																					CDR(BgL_varzd2idzd2_1828);
																				{	/* Ast/let.scm 132 */

																					if (BGl_userzd2symbolzf3z21zzast_identz00(BgL_idz00_1829))
																						{	/* Ast/let.scm 133 */
																							BgL_arg1790z00_1826 =
																								BGl_makezd2userzd2localzd2svarzd2zzast_localz00
																								(BgL_idz00_1829,
																								((BgL_typez00_bglt)
																									BgL_typez00_1830));
																						}
																					else
																						{	/* Ast/let.scm 133 */
																							BgL_arg1790z00_1826 =
																								BGl_makezd2localzd2svarz00zzast_localz00
																								(BgL_idz00_1829,
																								((BgL_typez00_bglt)
																									BgL_typez00_1830));
																						}
																				}
																			}
																		}
																	}
																}
																{	/* Ast/let.scm 129 */
																	obj_t BgL_res3642z00_4732;

																	BgL_res3642z00_4732 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_arg1790z00_1826), BNIL);
																	BgL_newtail1406z00_1824 = BgL_res3642z00_4732;
																}
															}
															SET_CDR(BgL_tail1405z00_1821,
																BgL_newtail1406z00_1824);
															{	/* Ast/let.scm 129 */
																obj_t BgL_arg1784z00_1825;

																BgL_arg1784z00_1825 =
																	CDR(((obj_t) BgL_l1402z00_1820));
																{
																	obj_t BgL_tail1405z00_6899;
																	obj_t BgL_l1402z00_6898;

																	BgL_l1402z00_6898 = BgL_arg1784z00_1825;
																	BgL_tail1405z00_6899 =
																		BgL_newtail1406z00_1824;
																	BgL_tail1405z00_1821 = BgL_tail1405z00_6899;
																	BgL_l1402z00_1820 = BgL_l1402z00_6898;
																	goto BgL_zc3z04anonymousza31781ze3z87_1822;
																}
															}
														}
												}
											}
										{	/* Ast/let.scm 129 */
											obj_t BgL_newzd2stackzd2_1772;

											BgL_newzd2stackzd2_1772 =
												BGl_appendzd221011zd2zzast_letz00(BgL_framez00_1771,
												BgL_stackz00_23);
											{	/* Ast/let.scm 137 */

												{	/* Ast/let.scm 144 */
													BgL_nodez00_bglt BgL_bodyz00_1773;

													BgL_bodyz00_1773 =
														BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_bodyz00_1768,
														BgL_newzd2stackzd2_1772, BgL_nlocz00_1770,
														CNST_TABLE_REF(((long) 1)));
													{	/* Ast/let.scm 144 */
														obj_t BgL_bstackz00_1774;

														{	/* Ast/let.scm 145 */
															bool_t BgL_test4110z00_6903;

															if (
																(CAR(
																		((obj_t) BgL_expz00_22)) ==
																	CNST_TABLE_REF(((long) 0))))
																{	/* Ast/let.scm 145 */
																	BgL_test4110z00_6903 = ((bool_t) 1);
																}
															else
																{	/* Ast/let.scm 145 */
																	obj_t BgL_arg1775z00_1814;

																	BgL_arg1775z00_1814 =
																		CAR(((obj_t) BgL_expz00_22));
																	BgL_test4110z00_6903 =
																		(BgL_arg1775z00_1814 ==
																		BGl_za2letza2z00zzast_letz00);
																}
															if (BgL_test4110z00_6903)
																{	/* Ast/let.scm 145 */
																	BgL_bstackz00_1774 = BgL_stackz00_23;
																}
															else
																{	/* Ast/let.scm 145 */
																	BgL_bstackz00_1774 = BgL_newzd2stackzd2_1772;
																}
														}
														{	/* Ast/let.scm 145 */
															obj_t BgL_bindingsz00_1775;

															if (NULLP(BgL_bindingsz00_1764))
																{	/* Ast/let.scm 148 */
																	BgL_bindingsz00_1775 = BNIL;
																}
															else
																{	/* Ast/let.scm 148 */
																	obj_t BgL_head1409z00_1790;

																	{	/* Ast/let.scm 148 */
																		obj_t BgL_res3644z00_4738;

																		BgL_res3644z00_4738 =
																			MAKE_YOUNG_PAIR(BNIL, BNIL);
																		BgL_head1409z00_1790 = BgL_res3644z00_4738;
																	}
																	{
																		obj_t BgL_ll1407z00_1792;
																		obj_t BgL_ll1408z00_1793;
																		obj_t BgL_tail1410z00_1794;

																		BgL_ll1407z00_1792 = BgL_bindingsz00_1764;
																		BgL_ll1408z00_1793 = BgL_framez00_1771;
																		BgL_tail1410z00_1794 = BgL_head1409z00_1790;
																	BgL_zc3z04anonymousza31745ze3z87_1795:
																		if (NULLP(BgL_ll1407z00_1792))
																			{	/* Ast/let.scm 148 */
																				BgL_bindingsz00_1775 =
																					CDR(BgL_head1409z00_1790);
																			}
																		else
																			{	/* Ast/let.scm 148 */
																				obj_t BgL_newtail1411z00_1797;

																				{	/* Ast/let.scm 148 */
																					obj_t BgL_arg1755z00_1800;

																					{	/* Ast/let.scm 148 */
																						obj_t BgL_bindingz00_1801;
																						obj_t BgL_varz00_1802;

																						BgL_bindingz00_1801 =
																							CAR(((obj_t) BgL_ll1407z00_1792));
																						BgL_varz00_1802 =
																							CAR(((obj_t) BgL_ll1408z00_1793));
																						{	/* Ast/let.scm 151 */
																							BgL_nodez00_bglt
																								BgL_arg1756z00_1803;
																							{	/* Ast/let.scm 151 */
																								obj_t BgL_arg1757z00_1804;
																								obj_t BgL_arg1759z00_1805;

																								{	/* Ast/let.scm 151 */
																									obj_t BgL_arg1760z00_1806;

																									BgL_arg1760z00_1806 =
																										CDR(
																										((obj_t)
																											BgL_bindingz00_1801));
																									BgL_arg1757z00_1804 =
																										BGl_normaliza7ezd2prognz75zztools_prognz00
																										(BgL_arg1760z00_1806);
																								}
																								BgL_arg1759z00_1805 =
																									BGl_findzd2locationzf2locz20zztools_locationz00
																									(BgL_bindingz00_1801,
																									BgL_nlocz00_1770);
																								BgL_arg1756z00_1803 =
																									BGl_sexpzd2ze3nodez31zzast_sexpz00
																									(BgL_arg1757z00_1804,
																									BgL_bstackz00_1774,
																									BgL_arg1759z00_1805,
																									CNST_TABLE_REF(((long) 1)));
																							}
																							BgL_arg1755z00_1800 =
																								MAKE_YOUNG_PAIR(BgL_varz00_1802,
																								((obj_t) BgL_arg1756z00_1803));
																					}}
																					{	/* Ast/let.scm 148 */
																						obj_t BgL_res3646z00_4744;

																						BgL_res3646z00_4744 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1755z00_1800, BNIL);
																						BgL_newtail1411z00_1797 =
																							BgL_res3646z00_4744;
																				}}
																				SET_CDR(BgL_tail1410z00_1794,
																					BgL_newtail1411z00_1797);
																				{	/* Ast/let.scm 148 */
																					obj_t BgL_arg1747z00_1798;
																					obj_t BgL_arg1754z00_1799;

																					BgL_arg1747z00_1798 =
																						CDR(((obj_t) BgL_ll1407z00_1792));
																					BgL_arg1754z00_1799 =
																						CDR(((obj_t) BgL_ll1408z00_1793));
																					{
																						obj_t BgL_tail1410z00_6938;
																						obj_t BgL_ll1408z00_6937;
																						obj_t BgL_ll1407z00_6936;

																						BgL_ll1407z00_6936 =
																							BgL_arg1747z00_1798;
																						BgL_ll1408z00_6937 =
																							BgL_arg1754z00_1799;
																						BgL_tail1410z00_6938 =
																							BgL_newtail1411z00_1797;
																						BgL_tail1410z00_1794 =
																							BgL_tail1410z00_6938;
																						BgL_ll1408z00_1793 =
																							BgL_ll1408z00_6937;
																						BgL_ll1407z00_1792 =
																							BgL_ll1407z00_6936;
																						goto
																							BgL_zc3z04anonymousza31745ze3z87_1795;
																					}
																				}
																			}
																	}
																}
															{	/* Ast/let.scm 148 */
																obj_t BgL_locz00_1776;

																{	/* Ast/let.scm 157 */
																	obj_t BgL_locz00_1781;

																	{	/* Ast/let.scm 159 */
																		obj_t BgL_arg1740z00_1783;

																		if (PAIRP(BgL_bindingsz00_1775))
																			{
																				BgL_nodez00_bglt BgL_auxz00_6941;

																				{	/* Ast/let.scm 160 */
																					obj_t BgL_pairz00_4750;

																					BgL_pairz00_4750 =
																						CAR(BgL_bindingsz00_1775);
																					BgL_auxz00_6941 =
																						((BgL_nodez00_bglt)
																						CDR(BgL_pairz00_4750));
																				}
																				BgL_arg1740z00_1783 =
																					(((BgL_nodez00_bglt)
																						COBJECT(BgL_auxz00_6941))->
																					BgL_locz00);
																			}
																		else
																			{	/* Ast/let.scm 159 */
																				BgL_arg1740z00_1783 =
																					(((BgL_nodez00_bglt)
																						COBJECT(BgL_bodyz00_1773))->
																					BgL_locz00);
																			}
																		BgL_locz00_1781 =
																			BGl_findzd2locationzf2locz20zztools_locationz00
																			(BgL_expz00_22, BgL_arg1740z00_1783);
																	}
																	{	/* Ast/let.scm 162 */
																		bool_t BgL_test4115z00_6948;

																		if (STRUCTP(BgL_locz00_1781))
																			{	/* Ast/let.scm 162 */
																				BgL_test4115z00_6948 =
																					(STRUCT_KEY(BgL_locz00_1781) ==
																					CNST_TABLE_REF(((long) 2)));
																			}
																		else
																			{	/* Ast/let.scm 162 */
																				BgL_test4115z00_6948 = ((bool_t) 0);
																			}
																		if (BgL_test4115z00_6948)
																			{	/* Ast/let.scm 162 */
																				BgL_locz00_1776 = BgL_locz00_1781;
																			}
																		else
																			{	/* Ast/let.scm 162 */
																				BgL_locz00_1776 = BgL_olocz00_24;
																			}
																	}
																}
																{	/* Ast/let.scm 157 */
																	BgL_letzd2varzd2_bglt BgL_nodez00_1777;

																	{	/* Ast/let.scm 165 */
																		BgL_letzd2varzd2_bglt BgL_new1111z00_1778;

																		{	/* Ast/let.scm 166 */
																			BgL_letzd2varzd2_bglt BgL_new1110z00_1779;

																			BgL_new1110z00_1779 =
																				((BgL_letzd2varzd2_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_letzd2varzd2_bgl))));
																			{	/* Ast/let.scm 166 */
																				long BgL_arg1738z00_1780;

																				{	/* Ast/let.scm 166 */
																					long BgL_res3650z00_4759;

																					BgL_res3650z00_4759 =
																						BGL_CLASS_INDEX
																						(BGl_letzd2varzd2zzast_nodez00);
																					BgL_arg1738z00_1780 =
																						BgL_res3650z00_4759;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1110z00_1779),
																					BgL_arg1738z00_1780);
																			}
																			{	/* Ast/let.scm 166 */
																				BgL_objectz00_bglt BgL_tmpz00_6958;

																				BgL_tmpz00_6958 =
																					((BgL_objectz00_bglt)
																					BgL_new1110z00_1779);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6958,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt)
																				BgL_new1110z00_1779);
																			BgL_new1111z00_1778 = BgL_new1110z00_1779;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1111z00_1778)))->
																				BgL_locz00) =
																			((obj_t) BgL_locz00_1776), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1111z00_1778)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) ((BgL_typez00_bglt)
																					BGl_za2_za2z00zztype_cachez00)),
																			BUNSPEC);
																		((((BgL_nodezf2effectzf2_bglt)
																					COBJECT(((BgL_nodezf2effectzf2_bglt)
																							BgL_new1111z00_1778)))->
																				BgL_sidezd2effectzd2) =
																			((obj_t) BUNSPEC), BUNSPEC);
																		((((BgL_nodezf2effectzf2_bglt)
																					COBJECT(((BgL_nodezf2effectzf2_bglt)
																							BgL_new1111z00_1778)))->
																				BgL_keyz00) =
																			((obj_t) BINT(((long) -1))), BUNSPEC);
																		((((BgL_letzd2varzd2_bglt)
																					COBJECT(BgL_new1111z00_1778))->
																				BgL_bindingsz00) =
																			((obj_t) BgL_bindingsz00_1775), BUNSPEC);
																		((((BgL_letzd2varzd2_bglt)
																					COBJECT(BgL_new1111z00_1778))->
																				BgL_bodyz00) =
																			((BgL_nodez00_bglt) BgL_bodyz00_1773),
																			BUNSPEC);
																		((((BgL_letzd2varzd2_bglt)
																					COBJECT(BgL_new1111z00_1778))->
																				BgL_removablezf3zf3) =
																			((bool_t) ((bool_t) 1)), BUNSPEC);
																		BgL_nodez00_1777 = BgL_new1111z00_1778;
																	}
																	{	/* Ast/let.scm 165 */

																		BGl_occurzd2nodez12zc0zzast_occurz00(
																			((BgL_nodez00_bglt) BgL_nodez00_1777));
																		BGl_nodezd2removez12zc0zzast_removez00(
																			((BgL_nodez00_bglt) BgL_nodez00_1777));
																		return BgL_nodez00_1777;
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



/* make-smart-generic-let */
	BgL_nodezf2effectzf2_bglt
		BGl_makezd2smartzd2genericzd2letzd2zzast_letz00(obj_t
		BgL_letzf2letreczf2_26, BgL_letzd2varzd2_bglt BgL_nodezd2letzd2_27,
		obj_t BgL_sitez00_28)
	{
		{	/* Ast/let.scm 186 */
			{	/* Ast/let.scm 189 */
				obj_t BgL_g1112z00_1843;

				BgL_g1112z00_1843 =
					(((BgL_letzd2varzd2_bglt) COBJECT(BgL_nodezd2letzd2_27))->
					BgL_bindingsz00);
				{
					obj_t BgL_bindingsz00_1847;
					obj_t BgL_funz00_1848;
					obj_t BgL_valuez00_1849;

					BgL_bindingsz00_1847 = BgL_g1112z00_1843;
					BgL_funz00_1848 = BNIL;
					BgL_valuez00_1849 = BNIL;
				BgL_zc3z04anonymousza31821ze3z87_1850:
					if (NULLP(BgL_bindingsz00_1847))
						{	/* Ast/let.scm 192 */
							if (NULLP(BgL_funz00_1848))
								{	/* Ast/let.scm 200 */
									obj_t BgL_varsz00_1853;

									{	/* Ast/let.scm 200 */
										obj_t BgL_l1413z00_1854;

										BgL_l1413z00_1854 =
											(((BgL_letzd2varzd2_bglt) COBJECT(BgL_nodezd2letzd2_27))->
											BgL_bindingsz00);
										if (NULLP(BgL_l1413z00_1854))
											{	/* Ast/let.scm 200 */
												BgL_varsz00_1853 = BNIL;
											}
										else
											{	/* Ast/let.scm 200 */
												obj_t BgL_head1415z00_1856;

												{	/* Ast/let.scm 200 */
													obj_t BgL_arg1831z00_1868;

													{	/* Ast/let.scm 200 */
														obj_t BgL_pairz00_4769;

														BgL_pairz00_4769 = CAR(((obj_t) BgL_l1413z00_1854));
														BgL_arg1831z00_1868 = CAR(BgL_pairz00_4769);
													}
													{	/* Ast/let.scm 200 */
														obj_t BgL_res3654z00_4770;

														BgL_res3654z00_4770 =
															MAKE_YOUNG_PAIR(BgL_arg1831z00_1868, BNIL);
														BgL_head1415z00_1856 = BgL_res3654z00_4770;
													}
												}
												{	/* Ast/let.scm 200 */
													obj_t BgL_g1418z00_1857;

													BgL_g1418z00_1857 = CDR(((obj_t) BgL_l1413z00_1854));
													{
														obj_t BgL_l1413z00_1859;
														obj_t BgL_tail1416z00_1860;

														BgL_l1413z00_1859 = BgL_g1418z00_1857;
														BgL_tail1416z00_1860 = BgL_head1415z00_1856;
													BgL_zc3z04anonymousza31826ze3z87_1861:
														if (NULLP(BgL_l1413z00_1859))
															{	/* Ast/let.scm 200 */
																BgL_varsz00_1853 = BgL_head1415z00_1856;
															}
														else
															{	/* Ast/let.scm 200 */
																obj_t BgL_newtail1417z00_1863;

																{	/* Ast/let.scm 200 */
																	obj_t BgL_arg1829z00_1865;

																	{	/* Ast/let.scm 200 */
																		obj_t BgL_pairz00_4774;

																		BgL_pairz00_4774 =
																			CAR(((obj_t) BgL_l1413z00_1859));
																		BgL_arg1829z00_1865 = CAR(BgL_pairz00_4774);
																	}
																	{	/* Ast/let.scm 200 */
																		obj_t BgL_res3656z00_4775;

																		BgL_res3656z00_4775 =
																			MAKE_YOUNG_PAIR(BgL_arg1829z00_1865,
																			BNIL);
																		BgL_newtail1417z00_1863 =
																			BgL_res3656z00_4775;
																	}
																}
																SET_CDR(BgL_tail1416z00_1860,
																	BgL_newtail1417z00_1863);
																{	/* Ast/let.scm 200 */
																	obj_t BgL_arg1828z00_1864;

																	BgL_arg1828z00_1864 =
																		CDR(((obj_t) BgL_l1413z00_1859));
																	{
																		obj_t BgL_tail1416z00_7003;
																		obj_t BgL_l1413z00_7002;

																		BgL_l1413z00_7002 = BgL_arg1828z00_1864;
																		BgL_tail1416z00_7003 =
																			BgL_newtail1417z00_1863;
																		BgL_tail1416z00_1860 = BgL_tail1416z00_7003;
																		BgL_l1413z00_1859 = BgL_l1413z00_7002;
																		goto BgL_zc3z04anonymousza31826ze3z87_1861;
																	}
																}
															}
													}
												}
											}
									}
									return
										((BgL_nodezf2effectzf2_bglt)
										BGl_letzd2orzd2letrecz00zzast_letz00(BgL_letzf2letreczf2_26,
											BgL_nodezd2letzd2_27, BgL_varsz00_1853));
								}
							else
								{	/* Ast/let.scm 199 */
									if (NULLP(BgL_valuez00_1849))
										{	/* Ast/let.scm 203 */
											BgL_nodez00_bglt BgL_arg1835z00_1871;

											BgL_arg1835z00_1871 =
												(((BgL_letzd2varzd2_bglt)
													COBJECT(BgL_nodezd2letzd2_27))->BgL_bodyz00);
											return ((BgL_nodezf2effectzf2_bglt)
												BGl_letzd2ze3labelsz31zzast_letz00(BgL_funz00_1848,
													BgL_arg1835z00_1871, BgL_sitez00_28));
										}
									else
										{	/* Ast/let.scm 205 */
											obj_t BgL_varsz00_1872;

											{	/* Ast/let.scm 205 */
												obj_t BgL_l1419z00_1879;

												BgL_l1419z00_1879 =
													(((BgL_letzd2varzd2_bglt)
														COBJECT(BgL_nodezd2letzd2_27))->BgL_bindingsz00);
												if (NULLP(BgL_l1419z00_1879))
													{	/* Ast/let.scm 205 */
														BgL_varsz00_1872 = BNIL;
													}
												else
													{	/* Ast/let.scm 205 */
														obj_t BgL_head1421z00_1881;

														{	/* Ast/let.scm 205 */
															obj_t BgL_arg1848z00_1893;

															{	/* Ast/let.scm 205 */
																obj_t BgL_pairz00_4783;

																BgL_pairz00_4783 =
																	CAR(((obj_t) BgL_l1419z00_1879));
																BgL_arg1848z00_1893 = CAR(BgL_pairz00_4783);
															}
															{	/* Ast/let.scm 205 */
																obj_t BgL_res3659z00_4784;

																BgL_res3659z00_4784 =
																	MAKE_YOUNG_PAIR(BgL_arg1848z00_1893, BNIL);
																BgL_head1421z00_1881 = BgL_res3659z00_4784;
															}
														}
														{	/* Ast/let.scm 205 */
															obj_t BgL_g1424z00_1882;

															BgL_g1424z00_1882 =
																CDR(((obj_t) BgL_l1419z00_1879));
															{
																obj_t BgL_l1419z00_1884;
																obj_t BgL_tail1422z00_1885;

																BgL_l1419z00_1884 = BgL_g1424z00_1882;
																BgL_tail1422z00_1885 = BgL_head1421z00_1881;
															BgL_zc3z04anonymousza31842ze3z87_1886:
																if (NULLP(BgL_l1419z00_1884))
																	{	/* Ast/let.scm 205 */
																		BgL_varsz00_1872 = BgL_head1421z00_1881;
																	}
																else
																	{	/* Ast/let.scm 205 */
																		obj_t BgL_newtail1423z00_1888;

																		{	/* Ast/let.scm 205 */
																			obj_t BgL_arg1846z00_1890;

																			{	/* Ast/let.scm 205 */
																				obj_t BgL_pairz00_4788;

																				BgL_pairz00_4788 =
																					CAR(((obj_t) BgL_l1419z00_1884));
																				BgL_arg1846z00_1890 =
																					CAR(BgL_pairz00_4788);
																			}
																			{	/* Ast/let.scm 205 */
																				obj_t BgL_res3661z00_4789;

																				BgL_res3661z00_4789 =
																					MAKE_YOUNG_PAIR(BgL_arg1846z00_1890,
																					BNIL);
																				BgL_newtail1423z00_1888 =
																					BgL_res3661z00_4789;
																			}
																		}
																		SET_CDR(BgL_tail1422z00_1885,
																			BgL_newtail1423z00_1888);
																		{	/* Ast/let.scm 205 */
																			obj_t BgL_arg1845z00_1889;

																			BgL_arg1845z00_1889 =
																				CDR(((obj_t) BgL_l1419z00_1884));
																			{
																				obj_t BgL_tail1422z00_7030;
																				obj_t BgL_l1419z00_7029;

																				BgL_l1419z00_7029 = BgL_arg1845z00_1889;
																				BgL_tail1422z00_7030 =
																					BgL_newtail1423z00_1888;
																				BgL_tail1422z00_1885 =
																					BgL_tail1422z00_7030;
																				BgL_l1419z00_1884 = BgL_l1419z00_7029;
																				goto
																					BgL_zc3z04anonymousza31842ze3z87_1886;
																			}
																		}
																	}
															}
														}
													}
											}
											((((BgL_letzd2varzd2_bglt)
														COBJECT(BgL_nodezd2letzd2_27))->BgL_bindingsz00) =
												((obj_t) bgl_reverse_bang(BgL_valuez00_1849)), BUNSPEC);
											{	/* Ast/let.scm 210 */
												BgL_letzd2varzd2_bglt BgL_nletz00_1874;

												BgL_nletz00_1874 =
													BGl_letzd2orzd2letrecz00zzast_letz00
													(BgL_letzf2letreczf2_26, BgL_nodezd2letzd2_27,
													BgL_varsz00_1872);
												{	/* Ast/let.scm 210 */
													BgL_letzd2funzd2_bglt BgL_nbodyz00_1875;

													BgL_nbodyz00_1875 =
														BGl_letzd2ze3labelsz31zzast_letz00(BgL_funz00_1848,
														(((BgL_letzd2varzd2_bglt)
																COBJECT(BgL_nletz00_1874))->BgL_bodyz00),
														BgL_sitez00_28);
													{	/* Ast/let.scm 211 */

														((((BgL_letzd2varzd2_bglt)
																	COBJECT(BgL_nletz00_1874))->BgL_bodyz00) =
															((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
																	BgL_nbodyz00_1875)), BUNSPEC);
														{
															BgL_typez00_bglt BgL_auxz00_7038;

															{	/* Ast/let.scm 214 */
																BgL_typez00_bglt BgL_arg1838z00_1877;

																BgL_arg1838z00_1877 =
																	(((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt) BgL_nletz00_1874)))->
																	BgL_typez00);
																BgL_auxz00_7038 =
																	BGl_strictzd2nodezd2typez00zzast_nodez00((
																		(BgL_typez00_bglt)
																		BGl_za2_za2z00zztype_cachez00),
																	BgL_arg1838z00_1877);
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt) BgL_nletz00_1874)))->
																	BgL_typez00) =
																((BgL_typez00_bglt) BgL_auxz00_7038), BUNSPEC);
														}
														return
															((BgL_nodezf2effectzf2_bglt) BgL_nletz00_1874);
													}
												}
											}
										}
								}
						}
					else
						{	/* Ast/let.scm 216 */
							obj_t BgL_bindingz00_1895;

							BgL_bindingz00_1895 = CAR(((obj_t) BgL_bindingsz00_1847));
							{	/* Ast/let.scm 216 */
								obj_t BgL_varz00_1896;

								BgL_varz00_1896 = CAR(((obj_t) BgL_bindingz00_1895));
								{	/* Ast/let.scm 217 */
									obj_t BgL_sexpz00_1897;

									BgL_sexpz00_1897 = CDR(((obj_t) BgL_bindingz00_1895));
									{	/* Ast/let.scm 218 */

										if (BGl_isazf3zf3zz__objectz00(BgL_sexpz00_1897,
												BGl_letzd2funzd2zzast_nodez00))
											{	/* Ast/let.scm 220 */
												obj_t BgL_localsz00_1899;

												BgL_localsz00_1899 =
													(((BgL_letzd2funzd2_bglt) COBJECT(
															((BgL_letzd2funzd2_bglt) BgL_sexpz00_1897)))->
													BgL_localsz00);
												{	/* Ast/let.scm 220 */
													BgL_nodez00_bglt BgL_bodyz00_1900;

													BgL_bodyz00_1900 =
														(((BgL_letzd2funzd2_bglt) COBJECT(
																((BgL_letzd2funzd2_bglt) BgL_sexpz00_1897)))->
														BgL_bodyz00);
													{	/* Ast/let.scm 221 */

														{	/* Ast/let.scm 222 */
															bool_t BgL_test4125z00_7058;

															if (NULLP(BgL_localsz00_1899))
																{	/* Ast/let.scm 222 */
																	BgL_test4125z00_7058 = ((bool_t) 1);
																}
															else
																{	/* Ast/let.scm 222 */
																	if (NULLP(CDR(((obj_t) BgL_localsz00_1899))))
																		{	/* Ast/let.scm 222 */
																			BgL_test4125z00_7058 = ((bool_t) 0);
																		}
																	else
																		{	/* Ast/let.scm 222 */
																			BgL_test4125z00_7058 = ((bool_t) 1);
																		}
																}
															if (BgL_test4125z00_7058)
																{	/* Ast/let.scm 226 */
																	obj_t BgL_arg1857z00_1906;
																	obj_t BgL_arg1858z00_1907;

																	BgL_arg1857z00_1906 =
																		CDR(((obj_t) BgL_bindingsz00_1847));
																	{	/* Ast/let.scm 228 */
																		obj_t BgL_arg1859z00_1908;

																		BgL_arg1859z00_1908 =
																			CAR(((obj_t) BgL_bindingsz00_1847));
																		BgL_arg1858z00_1907 =
																			MAKE_YOUNG_PAIR(BgL_arg1859z00_1908,
																			BgL_valuez00_1849);
																	}
																	{
																		obj_t BgL_valuez00_7071;
																		obj_t BgL_bindingsz00_7070;

																		BgL_bindingsz00_7070 = BgL_arg1857z00_1906;
																		BgL_valuez00_7071 = BgL_arg1858z00_1907;
																		BgL_valuez00_1849 = BgL_valuez00_7071;
																		BgL_bindingsz00_1847 = BgL_bindingsz00_7070;
																		goto BgL_zc3z04anonymousza31821ze3z87_1850;
																	}
																}
															else
																{	/* Ast/let.scm 229 */
																	bool_t BgL_test4128z00_7072;

																	{	/* Ast/let.scm 229 */
																		bool_t BgL_res3665z00_4805;

																		BgL_res3665z00_4805 =
																			BGl_isazf3zf3zz__objectz00(
																			((obj_t) BgL_bodyz00_1900),
																			BGl_varz00zzast_nodez00);
																		BgL_test4128z00_7072 = BgL_res3665z00_4805;
																	}
																	if (BgL_test4128z00_7072)
																		{	/* Ast/let.scm 230 */
																			BgL_variablez00_bglt BgL_resz00_1910;
																			obj_t BgL_auxz00_1911;

																			BgL_resz00_1910 =
																				(((BgL_varz00_bglt) COBJECT(
																						((BgL_varz00_bglt)
																							BgL_bodyz00_1900)))->
																				BgL_variablez00);
																			BgL_auxz00_1911 =
																				CAR(((obj_t) BgL_localsz00_1899));
																			{	/* Ast/let.scm 232 */
																				bool_t BgL_test4129z00_7079;

																				if (
																					(((obj_t) BgL_resz00_1910) ==
																						BgL_auxz00_1911))
																					{	/* Ast/let.scm 232 */
																						if (
																							((((BgL_variablez00_bglt) COBJECT(
																											((BgL_variablez00_bglt)
																												((BgL_localz00_bglt)
																													BgL_varz00_1896))))->
																									BgL_accessz00) ==
																								CNST_TABLE_REF(((long) 3))))
																							{	/* Ast/let.scm 236 */
																								BgL_test4129z00_7079 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Ast/let.scm 237 */
																								bool_t BgL_test4132z00_7089;

																								{	/* Ast/let.scm 238 */
																									bool_t BgL_test4133z00_7090;

																									{	/* Ast/let.scm 238 */
																										BgL_typez00_bglt
																											BgL_arg1889z00_1943;
																										BgL_arg1889z00_1943 =
																											(((BgL_variablez00_bglt)
																												COBJECT((
																														(BgL_variablez00_bglt)
																														((BgL_localz00_bglt)
																															BgL_varz00_1896))))->
																											BgL_typez00);
																										BgL_test4133z00_7090 =
																											(((obj_t)
																												BgL_arg1889z00_1943) ==
																											BGl_za2procedureza2z00zztype_cachez00);
																									}
																									if (BgL_test4133z00_7090)
																										{	/* Ast/let.scm 238 */
																											BgL_test4132z00_7089 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Ast/let.scm 239 */
																											bool_t
																												BgL_test4134z00_7096;
																											{	/* Ast/let.scm 239 */
																												BgL_typez00_bglt
																													BgL_arg1888z00_1942;
																												BgL_arg1888z00_1942 =
																													(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt) BgL_varz00_1896))))->BgL_typez00);
																												BgL_test4134z00_7096 =
																													(((obj_t)
																														BgL_arg1888z00_1942)
																													==
																													BGl_za2_za2z00zztype_cachez00);
																											}
																											if (BgL_test4134z00_7096)
																												{	/* Ast/let.scm 239 */
																													BgL_test4132z00_7089 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Ast/let.scm 240 */
																													BgL_typez00_bglt
																														BgL_arg1887z00_1941;
																													BgL_arg1887z00_1941 =
																														(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt) BgL_varz00_1896))))->BgL_typez00);
																													BgL_test4132z00_7089 =
																														(((obj_t)
																															BgL_arg1887z00_1941)
																														==
																														BGl_za2objza2z00zztype_cachez00);
																												}
																										}
																								}
																								if (BgL_test4132z00_7089)
																									{	/* Ast/let.scm 237 */
																										BgL_test4129z00_7079 =
																											((bool_t) 0);
																									}
																								else
																									{	/* Ast/let.scm 237 */
																										BgL_test4129z00_7079 =
																											((bool_t) 1);
																									}
																							}
																					}
																				else
																					{	/* Ast/let.scm 232 */
																						BgL_test4129z00_7079 = ((bool_t) 1);
																					}
																				if (BgL_test4129z00_7079)
																					{	/* Ast/let.scm 242 */
																						obj_t BgL_arg1881z00_1930;
																						obj_t BgL_arg1882z00_1931;

																						BgL_arg1881z00_1930 =
																							CDR(
																							((obj_t) BgL_bindingsz00_1847));
																						{	/* Ast/let.scm 244 */
																							obj_t BgL_arg1883z00_1932;

																							BgL_arg1883z00_1932 =
																								CAR(
																								((obj_t) BgL_bindingsz00_1847));
																							BgL_arg1882z00_1931 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1883z00_1932,
																								BgL_valuez00_1849);
																						}
																						{
																							obj_t BgL_valuez00_7113;
																							obj_t BgL_bindingsz00_7112;

																							BgL_bindingsz00_7112 =
																								BgL_arg1881z00_1930;
																							BgL_valuez00_7113 =
																								BgL_arg1882z00_1931;
																							BgL_valuez00_1849 =
																								BgL_valuez00_7113;
																							BgL_bindingsz00_1847 =
																								BgL_bindingsz00_7112;
																							goto
																								BgL_zc3z04anonymousza31821ze3z87_1850;
																						}
																					}
																				else
																					{	/* Ast/let.scm 246 */
																						obj_t BgL_arg1884z00_1933;
																						obj_t BgL_arg1885z00_1934;

																						BgL_arg1884z00_1933 =
																							CDR(
																							((obj_t) BgL_bindingsz00_1847));
																						{	/* Ast/let.scm 247 */
																							obj_t BgL_arg1886z00_1935;

																							BgL_arg1886z00_1935 =
																								CAR(
																								((obj_t) BgL_bindingsz00_1847));
																							BgL_arg1885z00_1934 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1886z00_1935,
																								BgL_funz00_1848);
																						}
																						{
																							obj_t BgL_funz00_7120;
																							obj_t BgL_bindingsz00_7119;

																							BgL_bindingsz00_7119 =
																								BgL_arg1884z00_1933;
																							BgL_funz00_7120 =
																								BgL_arg1885z00_1934;
																							BgL_funz00_1848 = BgL_funz00_7120;
																							BgL_bindingsz00_1847 =
																								BgL_bindingsz00_7119;
																							goto
																								BgL_zc3z04anonymousza31821ze3z87_1850;
																						}
																					}
																			}
																		}
																	else
																		{	/* Ast/let.scm 249 */
																			obj_t BgL_arg1892z00_1945;
																			obj_t BgL_arg1893z00_1946;

																			BgL_arg1892z00_1945 =
																				CDR(((obj_t) BgL_bindingsz00_1847));
																			{	/* Ast/let.scm 251 */
																				obj_t BgL_arg1895z00_1947;

																				BgL_arg1895z00_1947 =
																					CAR(((obj_t) BgL_bindingsz00_1847));
																				BgL_arg1893z00_1946 =
																					MAKE_YOUNG_PAIR(BgL_arg1895z00_1947,
																					BgL_valuez00_1849);
																			}
																			{
																				obj_t BgL_valuez00_7127;
																				obj_t BgL_bindingsz00_7126;

																				BgL_bindingsz00_7126 =
																					BgL_arg1892z00_1945;
																				BgL_valuez00_7127 = BgL_arg1893z00_1946;
																				BgL_valuez00_1849 = BgL_valuez00_7127;
																				BgL_bindingsz00_1847 =
																					BgL_bindingsz00_7126;
																				goto
																					BgL_zc3z04anonymousza31821ze3z87_1850;
																			}
																		}
																}
														}
													}
												}
											}
										else
											{	/* Ast/let.scm 252 */
												obj_t BgL_arg1897z00_1951;
												obj_t BgL_arg1898z00_1952;

												BgL_arg1897z00_1951 =
													CDR(((obj_t) BgL_bindingsz00_1847));
												{	/* Ast/let.scm 254 */
													obj_t BgL_arg1901z00_1953;

													BgL_arg1901z00_1953 =
														CAR(((obj_t) BgL_bindingsz00_1847));
													BgL_arg1898z00_1952 =
														MAKE_YOUNG_PAIR(BgL_arg1901z00_1953,
														BgL_valuez00_1849);
												}
												{
													obj_t BgL_valuez00_7134;
													obj_t BgL_bindingsz00_7133;

													BgL_bindingsz00_7133 = BgL_arg1897z00_1951;
													BgL_valuez00_7134 = BgL_arg1898z00_1952;
													BgL_valuez00_1849 = BgL_valuez00_7134;
													BgL_bindingsz00_1847 = BgL_bindingsz00_7133;
													goto BgL_zc3z04anonymousza31821ze3z87_1850;
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



/* let-or-letrec */
	BgL_letzd2varzd2_bglt BGl_letzd2orzd2letrecz00zzast_letz00(obj_t
		BgL_letzf2letreczf2_29, BgL_letzd2varzd2_bglt BgL_nodezd2letzd2_30,
		obj_t BgL_varsz00_31)
	{
		{	/* Ast/let.scm 266 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_2205;

				{	/* Ast/let.scm 374 */
					bool_t BgL_test4135z00_7135;

					if ((BgL_letzf2letreczf2_29 == CNST_TABLE_REF(((long) 0))))
						{	/* Ast/let.scm 374 */
							BgL_test4135z00_7135 = ((bool_t) 1);
						}
					else
						{	/* Ast/let.scm 374 */
							BgL_test4135z00_7135 =
								(BgL_letzf2letreczf2_29 == BGl_za2letza2z00zzast_letz00);
						}
					if (BgL_test4135z00_7135)
						{	/* Ast/let.scm 374 */
							return BgL_nodezd2letzd2_30;
						}
					else
						{	/* Ast/let.scm 376 */
							bool_t BgL_test4137z00_7140;

							BgL_nodez00_2205 = BgL_nodezd2letzd2_30;
							{	/* Ast/let.scm 358 */
								obj_t BgL_g1450z00_2208;

								BgL_g1450z00_2208 =
									(((BgL_letzd2varzd2_bglt) COBJECT(BgL_nodez00_2205))->
									BgL_bindingsz00);
								{
									obj_t BgL_l1448z00_2210;

									BgL_l1448z00_2210 = BgL_g1450z00_2208;
								BgL_zc3z04anonymousza32022ze3z87_2211:
									if (NULLP(BgL_l1448z00_2210))
										{	/* Ast/let.scm 358 */
											BgL_test4137z00_7140 = ((bool_t) 1);
										}
									else
										{	/* Ast/let.scm 358 */
											bool_t BgL_test4139z00_7144;

											{	/* Ast/let.scm 358 */
												obj_t BgL_bz00_2216;

												BgL_bz00_2216 = CAR(((obj_t) BgL_l1448z00_2210));
												{	/* Ast/let.scm 358 */
													obj_t BgL_arg2028z00_2217;

													BgL_arg2028z00_2217 = CDR(((obj_t) BgL_bz00_2216));
													BgL_test4139z00_7144 =
														BGl_safezd2reczd2valzf3ze70z14zzast_letz00
														(BgL_arg2028z00_2217);
												}
											}
											if (BgL_test4139z00_7144)
												{	/* Ast/let.scm 358 */
													obj_t BgL_arg2026z00_2215;

													BgL_arg2026z00_2215 =
														CDR(((obj_t) BgL_l1448z00_2210));
													{
														obj_t BgL_l1448z00_7152;

														BgL_l1448z00_7152 = BgL_arg2026z00_2215;
														BgL_l1448z00_2210 = BgL_l1448z00_7152;
														goto BgL_zc3z04anonymousza32022ze3z87_2211;
													}
												}
											else
												{	/* Ast/let.scm 358 */
													BgL_test4137z00_7140 = ((bool_t) 0);
												}
										}
								}
							}
							if (BgL_test4137z00_7140)
								{	/* Ast/let.scm 376 */
									return BgL_nodezd2letzd2_30;
								}
							else
								{	/* Ast/let.scm 378 */
									bool_t BgL_test4140z00_7153;

									if (
										((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
											((long) 1)))
										{	/* Ast/let.scm 378 */
											if (CBOOL(BGl_za2callzf2cczf3za2z01zzengine_paramz00))
												{	/* Ast/let.scm 378 */
													BgL_test4140z00_7153 = ((bool_t) 0);
												}
											else
												{	/* Ast/let.scm 378 */
													BgL_test4140z00_7153 =
														BGl_safezd2letzd2optimzf3ze70z14zzast_letz00
														(BgL_varsz00_31, BgL_nodezd2letzd2_30);
												}
										}
									else
										{	/* Ast/let.scm 378 */
											BgL_test4140z00_7153 = ((bool_t) 0);
										}
									if (BgL_test4140z00_7153)
										{	/* Ast/let.scm 378 */
											return BgL_nodezd2letzd2_30;
										}
									else
										{	/* Ast/let.scm 378 */
											if (
												(BgL_letzf2letreczf2_29 == CNST_TABLE_REF(((long) 4))))
												{	/* Ast/let.scm 381 */
													obj_t BgL_bindingsz00_1965;

													BgL_bindingsz00_1965 =
														(((BgL_letzd2varzd2_bglt)
															COBJECT(BgL_nodezd2letzd2_30))->BgL_bindingsz00);
													{	/* Ast/let.scm 381 */
														BgL_nodez00_bglt BgL_bodyz00_1966;

														BgL_bodyz00_1966 =
															(((BgL_letzd2varzd2_bglt)
																COBJECT(BgL_nodezd2letzd2_30))->BgL_bodyz00);
														{	/* Ast/let.scm 382 */
															BgL_sequencez00_bglt BgL_seqz00_1967;

															{	/* Ast/let.scm 383 */
																bool_t BgL_test4144z00_7165;

																{	/* Ast/let.scm 383 */
																	bool_t BgL_res3701z00_4890;

																	BgL_res3701z00_4890 =
																		BGl_isazf3zf3zz__objectz00(
																		((obj_t) BgL_bodyz00_1966),
																		BGl_sequencez00zzast_nodez00);
																	BgL_test4144z00_7165 = BgL_res3701z00_4890;
																}
																if (BgL_test4144z00_7165)
																	{	/* Ast/let.scm 383 */
																		BgL_seqz00_1967 =
																			((BgL_sequencez00_bglt) BgL_bodyz00_1966);
																	}
																else
																	{	/* Ast/let.scm 385 */
																		BgL_sequencez00_bglt BgL_new1157z00_1996;

																		{	/* Ast/let.scm 386 */
																			BgL_sequencez00_bglt BgL_new1156z00_1998;

																			BgL_new1156z00_1998 =
																				((BgL_sequencez00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_sequencez00_bgl))));
																			{	/* Ast/let.scm 386 */
																				long BgL_arg1921z00_1999;

																				{	/* Ast/let.scm 386 */
																					long BgL_res3702z00_4892;

																					BgL_res3702z00_4892 =
																						BGL_CLASS_INDEX
																						(BGl_sequencez00zzast_nodez00);
																					BgL_arg1921z00_1999 =
																						BgL_res3702z00_4892;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1156z00_1998),
																					BgL_arg1921z00_1999);
																			}
																			{	/* Ast/let.scm 386 */
																				BgL_objectz00_bglt BgL_tmpz00_7173;

																				BgL_tmpz00_7173 =
																					((BgL_objectz00_bglt)
																					BgL_new1156z00_1998);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7173,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt)
																				BgL_new1156z00_1998);
																			BgL_new1157z00_1996 = BgL_new1156z00_1998;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1157z00_1996)))->
																				BgL_locz00) =
																			((obj_t) (((BgL_nodez00_bglt)
																						COBJECT(BgL_bodyz00_1966))->
																					BgL_locz00)), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1157z00_1996)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) ((BgL_typez00_bglt)
																					BGl_za2_za2z00zztype_cachez00)),
																			BUNSPEC);
																		((((BgL_nodezf2effectzf2_bglt)
																					COBJECT(((BgL_nodezf2effectzf2_bglt)
																							BgL_new1157z00_1996)))->
																				BgL_sidezd2effectzd2) =
																			((obj_t) BUNSPEC), BUNSPEC);
																		((((BgL_nodezf2effectzf2_bglt)
																					COBJECT(((BgL_nodezf2effectzf2_bglt)
																							BgL_new1157z00_1996)))->
																				BgL_keyz00) =
																			((obj_t) BINT(((long) -1))), BUNSPEC);
																		{
																			obj_t BgL_auxz00_7188;

																			{	/* Ast/let.scm 388 */
																				obj_t BgL_list1920z00_1997;

																				BgL_list1920z00_1997 =
																					MAKE_YOUNG_PAIR(
																					((obj_t) BgL_bodyz00_1966), BNIL);
																				BgL_auxz00_7188 = BgL_list1920z00_1997;
																			}
																			((((BgL_sequencez00_bglt)
																						COBJECT(BgL_new1157z00_1996))->
																					BgL_nodesz00) =
																				((obj_t) BgL_auxz00_7188), BUNSPEC);
																		}
																		((((BgL_sequencez00_bglt)
																					COBJECT(BgL_new1157z00_1996))->
																				BgL_unsafez00) =
																			((bool_t) ((bool_t) 0)), BUNSPEC);
																		((((BgL_sequencez00_bglt)
																					COBJECT(BgL_new1157z00_1996))->
																				BgL_metaz00) = ((obj_t) BNIL), BUNSPEC);
																		BgL_seqz00_1967 = BgL_new1157z00_1996;
															}}
															{	/* Ast/let.scm 383 */

																((((BgL_letzd2varzd2_bglt)
																			COBJECT(BgL_nodezd2letzd2_30))->
																		BgL_bodyz00) =
																	((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
																			BgL_seqz00_1967)), BUNSPEC);
																{
																	obj_t BgL_bindingsz00_1970;
																	obj_t BgL_nsequencez00_1971;

																	BgL_bindingsz00_1970 = BgL_bindingsz00_1965;
																	BgL_nsequencez00_1971 = BNIL;
																BgL_zc3z04anonymousza31908ze3z87_1972:
																	if (NULLP(BgL_bindingsz00_1970))
																		{	/* Ast/let.scm 392 */
																			{	/* Ast/let.scm 396 */
																				BgL_sequencez00_bglt
																					BgL_arg1910z00_1974;
																				{	/* Ast/let.scm 396 */
																					BgL_sequencez00_bglt
																						BgL_new1160z00_1975;
																					{	/* Ast/let.scm 397 */
																						BgL_sequencez00_bglt
																							BgL_new1159z00_1978;
																						BgL_new1159z00_1978 =
																							((BgL_sequencez00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_sequencez00_bgl))));
																						{	/* Ast/let.scm 397 */
																							long BgL_arg1913z00_1979;

																							{	/* Ast/let.scm 397 */
																								long BgL_res3705z00_4902;

																								BgL_res3705z00_4902 =
																									BGL_CLASS_INDEX
																									(BGl_sequencez00zzast_nodez00);
																								BgL_arg1913z00_1979 =
																									BgL_res3705z00_4902;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1159z00_1978),
																								BgL_arg1913z00_1979);
																						}
																						{	/* Ast/let.scm 397 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_7202;
																							BgL_tmpz00_7202 =
																								((BgL_objectz00_bglt)
																								BgL_new1159z00_1978);
																							BGL_OBJECT_WIDENING_SET
																								(BgL_tmpz00_7202, BFALSE);
																						}
																						((BgL_objectz00_bglt)
																							BgL_new1159z00_1978);
																						BgL_new1160z00_1975 =
																							BgL_new1159z00_1978;
																					}
																					((((BgL_nodez00_bglt) COBJECT(
																									((BgL_nodez00_bglt)
																										BgL_new1160z00_1975)))->
																							BgL_locz00) =
																						((obj_t) (((BgL_nodez00_bglt)
																									COBJECT(((BgL_nodez00_bglt)
																											BgL_seqz00_1967)))->
																								BgL_locz00)), BUNSPEC);
																					((((BgL_nodez00_bglt)
																								COBJECT(((BgL_nodez00_bglt)
																										BgL_new1160z00_1975)))->
																							BgL_typez00) =
																						((BgL_typez00_bglt) (
																								(BgL_typez00_bglt)
																								BGl_za2_za2z00zztype_cachez00)),
																						BUNSPEC);
																					((((BgL_nodezf2effectzf2_bglt)
																								COBJECT((
																										(BgL_nodezf2effectzf2_bglt)
																										BgL_new1160z00_1975)))->
																							BgL_sidezd2effectzd2) =
																						((obj_t) BUNSPEC), BUNSPEC);
																					((((BgL_nodezf2effectzf2_bglt)
																								COBJECT((
																										(BgL_nodezf2effectzf2_bglt)
																										BgL_new1160z00_1975)))->
																							BgL_keyz00) =
																						((obj_t) BINT(((long) -1))),
																						BUNSPEC);
																					{
																						obj_t BgL_auxz00_7218;

																						{	/* Ast/let.scm 399 */
																							obj_t BgL_arg1911z00_1976;
																							obj_t BgL_arg1912z00_1977;

																							BgL_arg1911z00_1976 =
																								bgl_reverse_bang
																								(BgL_nsequencez00_1971);
																							BgL_arg1912z00_1977 =
																								(((BgL_sequencez00_bglt)
																									COBJECT(BgL_seqz00_1967))->
																								BgL_nodesz00);
																							BgL_auxz00_7218 =
																								BGl_appendzd221011zd2zzast_letz00
																								(BgL_arg1911z00_1976,
																								BgL_arg1912z00_1977);
																						}
																						((((BgL_sequencez00_bglt)
																									COBJECT
																									(BgL_new1160z00_1975))->
																								BgL_nodesz00) =
																							((obj_t) BgL_auxz00_7218),
																							BUNSPEC);
																					}
																					((((BgL_sequencez00_bglt)
																								COBJECT(BgL_new1160z00_1975))->
																							BgL_unsafez00) =
																						((bool_t) ((bool_t) 0)), BUNSPEC);
																					((((BgL_sequencez00_bglt)
																								COBJECT(BgL_new1160z00_1975))->
																							BgL_metaz00) =
																						((obj_t) BNIL), BUNSPEC);
																					BgL_arg1910z00_1974 =
																						BgL_new1160z00_1975;
																				}
																				((((BgL_letzd2varzd2_bglt)
																							COBJECT(BgL_nodezd2letzd2_30))->
																						BgL_bodyz00) =
																					((BgL_nodez00_bglt) (
																							(BgL_nodez00_bglt)
																							BgL_arg1910z00_1974)), BUNSPEC);
																			}
																			return BgL_nodezd2letzd2_30;
																		}
																	else
																		{	/* Ast/let.scm 402 */
																			obj_t BgL_bindingz00_1980;

																			BgL_bindingz00_1980 =
																				CAR(((obj_t) BgL_bindingsz00_1970));
																			{	/* Ast/let.scm 402 */
																				obj_t BgL_varz00_1981;

																				BgL_varz00_1981 =
																					CAR(((obj_t) BgL_bindingz00_1980));
																				{	/* Ast/let.scm 403 */
																					obj_t BgL_valz00_1982;

																					BgL_valz00_1982 =
																						CDR(((obj_t) BgL_bindingz00_1980));
																					{	/* Ast/let.scm 404 */
																						obj_t BgL_locz00_1983;

																						BgL_locz00_1983 =
																							(((BgL_nodez00_bglt) COBJECT(
																									((BgL_nodez00_bglt)
																										BgL_valz00_1982)))->
																							BgL_locz00);
																						{	/* Ast/let.scm 405 */

																							{	/* Ast/let.scm 406 */
																								BgL_setqz00_bglt
																									BgL_initz00_1984;
																								{	/* Ast/let.scm 406 */
																									BgL_setqz00_bglt
																										BgL_new1162z00_1988;
																									{	/* Ast/let.scm 407 */
																										BgL_setqz00_bglt
																											BgL_new1161z00_1992;
																										BgL_new1161z00_1992 =
																											((BgL_setqz00_bglt)
																											BOBJECT(GC_MALLOC(sizeof
																													(struct
																														BgL_setqz00_bgl))));
																										{	/* Ast/let.scm 407 */
																											long BgL_arg1918z00_1993;

																											{	/* Ast/let.scm 407 */
																												long
																													BgL_res3706z00_4915;
																												BgL_res3706z00_4915 =
																													BGL_CLASS_INDEX
																													(BGl_setqz00zzast_nodez00);
																												BgL_arg1918z00_1993 =
																													BgL_res3706z00_4915;
																											}
																											BGL_OBJECT_CLASS_NUM_SET(
																												((BgL_objectz00_bglt)
																													BgL_new1161z00_1992),
																												BgL_arg1918z00_1993);
																										}
																										{	/* Ast/let.scm 407 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_7239;
																											BgL_tmpz00_7239 =
																												((BgL_objectz00_bglt)
																												BgL_new1161z00_1992);
																											BGL_OBJECT_WIDENING_SET
																												(BgL_tmpz00_7239,
																												BFALSE);
																										}
																										((BgL_objectz00_bglt)
																											BgL_new1161z00_1992);
																										BgL_new1162z00_1988 =
																											BgL_new1161z00_1992;
																									}
																									((((BgL_nodez00_bglt) COBJECT(
																													((BgL_nodez00_bglt)
																														BgL_new1162z00_1988)))->
																											BgL_locz00) =
																										((obj_t) BgL_locz00_1983),
																										BUNSPEC);
																									((((BgL_nodez00_bglt)
																												COBJECT((
																														(BgL_nodez00_bglt)
																														BgL_new1162z00_1988)))->
																											BgL_typez00) =
																										((BgL_typez00_bglt) (
																												(BgL_typez00_bglt)
																												BGl_za2unspecza2z00zztype_cachez00)),
																										BUNSPEC);
																									{
																										BgL_varz00_bglt
																											BgL_auxz00_7248;
																										{	/* Ast/let.scm 409 */
																											BgL_varz00_bglt
																												BgL_new1164z00_1989;
																											{	/* Ast/let.scm 411 */
																												BgL_varz00_bglt
																													BgL_new1163z00_1990;
																												BgL_new1163z00_1990 =
																													((BgL_varz00_bglt)
																													BOBJECT(GC_MALLOC
																														(sizeof(struct
																																BgL_varz00_bgl))));
																												{	/* Ast/let.scm 411 */
																													long
																														BgL_arg1917z00_1991;
																													{	/* Ast/let.scm 411 */
																														long
																															BgL_res3707z00_4920;
																														{	/* Ast/let.scm 411 */
																															obj_t
																																BgL_classz00_4919;
																															BgL_classz00_4919
																																=
																																BGl_varz00zzast_nodez00;
																															BgL_res3707z00_4920
																																=
																																BGL_CLASS_INDEX
																																(BgL_classz00_4919);
																														}
																														BgL_arg1917z00_1991
																															=
																															BgL_res3707z00_4920;
																													}
																													BGL_OBJECT_CLASS_NUM_SET
																														(((BgL_objectz00_bglt) BgL_new1163z00_1990), BgL_arg1917z00_1991);
																												}
																												BgL_new1164z00_1989 =
																													BgL_new1163z00_1990;
																											}
																											((((BgL_nodez00_bglt)
																														COBJECT((
																																(BgL_nodez00_bglt)
																																BgL_new1164z00_1989)))->
																													BgL_locz00) =
																												((obj_t)
																													BgL_locz00_1983),
																												BUNSPEC);
																											((((BgL_nodez00_bglt)
																														COBJECT((
																																(BgL_nodez00_bglt)
																																BgL_new1164z00_1989)))->
																													BgL_typez00) =
																												((BgL_typez00_bglt) (
																														(BgL_typez00_bglt)
																														BGl_za2_za2z00zztype_cachez00)),
																												BUNSPEC);
																											((((BgL_varz00_bglt)
																														COBJECT
																														(BgL_new1164z00_1989))->
																													BgL_variablez00) =
																												((BgL_variablez00_bglt)
																													((BgL_variablez00_bglt) BgL_varz00_1981)), BUNSPEC);
																											BgL_auxz00_7248 =
																												BgL_new1164z00_1989;
																										}
																										((((BgL_setqz00_bglt)
																													COBJECT
																													(BgL_new1162z00_1988))->
																												BgL_varz00) =
																											((BgL_varz00_bglt)
																												BgL_auxz00_7248),
																											BUNSPEC);
																									}
																									((((BgL_setqz00_bglt)
																												COBJECT
																												(BgL_new1162z00_1988))->
																											BgL_valuez00) =
																										((BgL_nodez00_bglt) (
																												(BgL_nodez00_bglt)
																												BgL_valz00_1982)),
																										BUNSPEC);
																									BgL_initz00_1984 =
																										BgL_new1162z00_1988;
																								}
																								BGl_usezd2variablez12zc0zzast_sexpz00
																									(((BgL_variablez00_bglt)
																										BgL_varz00_1981),
																									BgL_locz00_1983,
																									CNST_TABLE_REF(((long) 5)));
																								{	/* Ast/let.scm 416 */
																									BgL_nodez00_bglt
																										BgL_arg1914z00_1985;
																									BgL_arg1914z00_1985 =
																										BGl_sexpzd2ze3nodez31zzast_sexpz00
																										(BUNSPEC, BNIL,
																										BgL_locz00_1983,
																										CNST_TABLE_REF(((long) 1)));
																									{	/* Ast/let.scm 415 */
																										obj_t BgL_auxz00_7270;
																										obj_t BgL_tmpz00_7268;

																										BgL_auxz00_7270 =
																											((obj_t)
																											BgL_arg1914z00_1985);
																										BgL_tmpz00_7268 =
																											((obj_t)
																											BgL_bindingz00_1980);
																										SET_CDR(BgL_tmpz00_7268,
																											BgL_auxz00_7270);
																								}}
																								{	/* Ast/let.scm 417 */
																									obj_t BgL_arg1915z00_1986;
																									obj_t BgL_arg1916z00_1987;

																									BgL_arg1915z00_1986 =
																										CDR(
																										((obj_t)
																											BgL_bindingsz00_1970));
																									BgL_arg1916z00_1987 =
																										MAKE_YOUNG_PAIR(((obj_t)
																											BgL_initz00_1984),
																										BgL_nsequencez00_1971);
																									{
																										obj_t BgL_nsequencez00_7278;
																										obj_t BgL_bindingsz00_7277;

																										BgL_bindingsz00_7277 =
																											BgL_arg1915z00_1986;
																										BgL_nsequencez00_7278 =
																											BgL_arg1916z00_1987;
																										BgL_nsequencez00_1971 =
																											BgL_nsequencez00_7278;
																										BgL_bindingsz00_1970 =
																											BgL_bindingsz00_7277;
																										goto
																											BgL_zc3z04anonymousza31908ze3z87_1972;
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
											else
												{	/* Ast/let.scm 420 */
													obj_t BgL_bindingsz00_2000;

													BgL_bindingsz00_2000 =
														(((BgL_letzd2varzd2_bglt)
															COBJECT(BgL_nodezd2letzd2_30))->BgL_bindingsz00);
													{	/* Ast/let.scm 420 */
														BgL_nodez00_bglt BgL_bodyz00_2001;

														BgL_bodyz00_2001 =
															(((BgL_letzd2varzd2_bglt)
																COBJECT(BgL_nodezd2letzd2_30))->BgL_bodyz00);
														{	/* Ast/let.scm 421 */
															BgL_sequencez00_bglt BgL_seqz00_2002;

															{	/* Ast/let.scm 422 */
																bool_t BgL_test4146z00_7281;

																{	/* Ast/let.scm 422 */
																	bool_t BgL_res3708z00_4927;

																	BgL_res3708z00_4927 =
																		BGl_isazf3zf3zz__objectz00(
																		((obj_t) BgL_bodyz00_2001),
																		BGl_sequencez00zzast_nodez00);
																	BgL_test4146z00_7281 = BgL_res3708z00_4927;
																}
																if (BgL_test4146z00_7281)
																	{	/* Ast/let.scm 422 */
																		BgL_seqz00_2002 =
																			((BgL_sequencez00_bglt) BgL_bodyz00_2001);
																	}
																else
																	{	/* Ast/let.scm 424 */
																		BgL_sequencez00_bglt BgL_new1166z00_2048;

																		{	/* Ast/let.scm 425 */
																			BgL_sequencez00_bglt BgL_new1165z00_2050;

																			BgL_new1165z00_2050 =
																				((BgL_sequencez00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_sequencez00_bgl))));
																			{	/* Ast/let.scm 425 */
																				long BgL_arg1941z00_2051;

																				{	/* Ast/let.scm 425 */
																					long BgL_res3709z00_4929;

																					BgL_res3709z00_4929 =
																						BGL_CLASS_INDEX
																						(BGl_sequencez00zzast_nodez00);
																					BgL_arg1941z00_2051 =
																						BgL_res3709z00_4929;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1165z00_2050),
																					BgL_arg1941z00_2051);
																			}
																			{	/* Ast/let.scm 425 */
																				BgL_objectz00_bglt BgL_tmpz00_7289;

																				BgL_tmpz00_7289 =
																					((BgL_objectz00_bglt)
																					BgL_new1165z00_2050);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7289,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt)
																				BgL_new1165z00_2050);
																			BgL_new1166z00_2048 = BgL_new1165z00_2050;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1166z00_2048)))->
																				BgL_locz00) =
																			((obj_t) (((BgL_nodez00_bglt)
																						COBJECT(BgL_bodyz00_2001))->
																					BgL_locz00)), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1166z00_2048)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) ((BgL_typez00_bglt)
																					BGl_za2_za2z00zztype_cachez00)),
																			BUNSPEC);
																		((((BgL_nodezf2effectzf2_bglt)
																					COBJECT(((BgL_nodezf2effectzf2_bglt)
																							BgL_new1166z00_2048)))->
																				BgL_sidezd2effectzd2) =
																			((obj_t) BUNSPEC), BUNSPEC);
																		((((BgL_nodezf2effectzf2_bglt)
																					COBJECT(((BgL_nodezf2effectzf2_bglt)
																							BgL_new1166z00_2048)))->
																				BgL_keyz00) =
																			((obj_t) BINT(((long) -1))), BUNSPEC);
																		{
																			obj_t BgL_auxz00_7304;

																			{	/* Ast/let.scm 427 */
																				obj_t BgL_list1940z00_2049;

																				BgL_list1940z00_2049 =
																					MAKE_YOUNG_PAIR(
																					((obj_t) BgL_bodyz00_2001), BNIL);
																				BgL_auxz00_7304 = BgL_list1940z00_2049;
																			}
																			((((BgL_sequencez00_bglt)
																						COBJECT(BgL_new1166z00_2048))->
																					BgL_nodesz00) =
																				((obj_t) BgL_auxz00_7304), BUNSPEC);
																		}
																		((((BgL_sequencez00_bglt)
																					COBJECT(BgL_new1166z00_2048))->
																				BgL_unsafez00) =
																			((bool_t) ((bool_t) 0)), BUNSPEC);
																		((((BgL_sequencez00_bglt)
																					COBJECT(BgL_new1166z00_2048))->
																				BgL_metaz00) = ((obj_t) BNIL), BUNSPEC);
																		BgL_seqz00_2002 = BgL_new1166z00_2048;
															}}
															{	/* Ast/let.scm 422 */

																((((BgL_letzd2varzd2_bglt)
																			COBJECT(BgL_nodezd2letzd2_30))->
																		BgL_bodyz00) =
																	((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
																			BgL_seqz00_2002)), BUNSPEC);
																{	/* Ast/let.scm 429 */
																	obj_t BgL_g1168z00_2004;

																	BgL_g1168z00_2004 =
																		(((BgL_sequencez00_bglt)
																			COBJECT(BgL_seqz00_2002))->BgL_nodesz00);
																	{
																		obj_t BgL_bindingsz00_2006;
																		obj_t BgL_nbindingsz00_2007;
																		obj_t BgL_nsequencez00_2008;

																		BgL_bindingsz00_2006 = BgL_bindingsz00_2000;
																		BgL_nbindingsz00_2007 = BNIL;
																		BgL_nsequencez00_2008 = BgL_g1168z00_2004;
																	BgL_zc3z04anonymousza31922ze3z87_2009:
																		if (NULLP(BgL_bindingsz00_2006))
																			{	/* Ast/let.scm 433 */
																				obj_t BgL_typz00_2011;

																				if (NULLP(BgL_nsequencez00_2008))
																					{	/* Ast/let.scm 433 */
																						BgL_typz00_2011 =
																							BGl_za2unspecza2z00zztype_cachez00;
																					}
																				else
																					{	/* Ast/let.scm 433 */
																						BgL_typz00_2011 =
																							((obj_t)
																							(((BgL_nodez00_bglt) COBJECT(
																										((BgL_nodez00_bglt)
																											CAR
																											(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
																												(BgL_nsequencez00_2008)))))->
																								BgL_typez00));
																					}
																				{	/* Ast/let.scm 433 */
																					BgL_sequencez00_bglt BgL_seqz00_2012;

																					{	/* Ast/let.scm 436 */
																						BgL_sequencez00_bglt
																							BgL_new1170z00_2018;
																						{	/* Ast/let.scm 437 */
																							BgL_sequencez00_bglt
																								BgL_new1169z00_2019;
																							BgL_new1169z00_2019 =
																								((BgL_sequencez00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_sequencez00_bgl))));
																							{	/* Ast/let.scm 437 */
																								long BgL_arg1926z00_2020;

																								{	/* Ast/let.scm 437 */
																									long BgL_res3713z00_4943;

																									BgL_res3713z00_4943 =
																										BGL_CLASS_INDEX
																										(BGl_sequencez00zzast_nodez00);
																									BgL_arg1926z00_2020 =
																										BgL_res3713z00_4943;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1169z00_2019),
																									BgL_arg1926z00_2020);
																							}
																							{	/* Ast/let.scm 437 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_7326;
																								BgL_tmpz00_7326 =
																									((BgL_objectz00_bglt)
																									BgL_new1169z00_2019);
																								BGL_OBJECT_WIDENING_SET
																									(BgL_tmpz00_7326, BFALSE);
																							}
																							((BgL_objectz00_bglt)
																								BgL_new1169z00_2019);
																							BgL_new1170z00_2018 =
																								BgL_new1169z00_2019;
																						}
																						((((BgL_nodez00_bglt) COBJECT(
																										((BgL_nodez00_bglt)
																											BgL_new1170z00_2018)))->
																								BgL_locz00) =
																							((obj_t) (((BgL_nodez00_bglt)
																										COBJECT(((BgL_nodez00_bglt)
																												BgL_seqz00_2002)))->
																									BgL_locz00)), BUNSPEC);
																						((((BgL_nodez00_bglt)
																									COBJECT(((BgL_nodez00_bglt)
																											BgL_new1170z00_2018)))->
																								BgL_typez00) =
																							((BgL_typez00_bglt) (
																									(BgL_typez00_bglt)
																									BGl_za2_za2z00zztype_cachez00)),
																							BUNSPEC);
																						((((BgL_nodezf2effectzf2_bglt)
																									COBJECT((
																											(BgL_nodezf2effectzf2_bglt)
																											BgL_new1170z00_2018)))->
																								BgL_sidezd2effectzd2) =
																							((obj_t) BUNSPEC), BUNSPEC);
																						((((BgL_nodezf2effectzf2_bglt)
																									COBJECT((
																											(BgL_nodezf2effectzf2_bglt)
																											BgL_new1170z00_2018)))->
																								BgL_keyz00) =
																							((obj_t) BINT(((long) -1))),
																							BUNSPEC);
																						((((BgL_sequencez00_bglt)
																									COBJECT
																									(BgL_new1170z00_2018))->
																								BgL_nodesz00) =
																							((obj_t) BgL_nsequencez00_2008),
																							BUNSPEC);
																						((((BgL_sequencez00_bglt)
																									COBJECT
																									(BgL_new1170z00_2018))->
																								BgL_unsafez00) =
																							((bool_t) ((bool_t) 0)), BUNSPEC);
																						((((BgL_sequencez00_bglt)
																									COBJECT
																									(BgL_new1170z00_2018))->
																								BgL_metaz00) =
																							((obj_t) BNIL), BUNSPEC);
																						BgL_seqz00_2012 =
																							BgL_new1170z00_2018;
																					}
																					{	/* Ast/let.scm 436 */
																						BgL_letzd2varzd2_bglt
																							BgL_letbz00_2013;
																						{	/* Ast/let.scm 440 */
																							BgL_letzd2varzd2_bglt
																								BgL_new1172z00_2014;
																							{	/* Ast/let.scm 441 */
																								BgL_letzd2varzd2_bglt
																									BgL_new1171z00_2016;
																								BgL_new1171z00_2016 =
																									((BgL_letzd2varzd2_bglt)
																									BOBJECT(GC_MALLOC(sizeof
																											(struct
																												BgL_letzd2varzd2_bgl))));
																								{	/* Ast/let.scm 441 */
																									long BgL_arg1925z00_2017;

																									{	/* Ast/let.scm 441 */
																										long BgL_res3714z00_4949;

																										BgL_res3714z00_4949 =
																											BGL_CLASS_INDEX
																											(BGl_letzd2varzd2zzast_nodez00);
																										BgL_arg1925z00_2017 =
																											BgL_res3714z00_4949;
																									}
																									BGL_OBJECT_CLASS_NUM_SET(
																										((BgL_objectz00_bglt)
																											BgL_new1171z00_2016),
																										BgL_arg1925z00_2017);
																								}
																								{	/* Ast/let.scm 441 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_7349;
																									BgL_tmpz00_7349 =
																										((BgL_objectz00_bglt)
																										BgL_new1171z00_2016);
																									BGL_OBJECT_WIDENING_SET
																										(BgL_tmpz00_7349, BFALSE);
																								}
																								((BgL_objectz00_bglt)
																									BgL_new1171z00_2016);
																								BgL_new1172z00_2014 =
																									BgL_new1171z00_2016;
																							}
																							((((BgL_nodez00_bglt) COBJECT(
																											((BgL_nodez00_bglt)
																												BgL_new1172z00_2014)))->
																									BgL_locz00) =
																								((obj_t) (((BgL_nodez00_bglt)
																											COBJECT((
																													(BgL_nodez00_bglt)
																													BgL_nodezd2letzd2_30)))->
																										BgL_locz00)), BUNSPEC);
																							{
																								BgL_typez00_bglt
																									BgL_auxz00_7357;
																								{	/* Ast/let.scm 442 */
																									BgL_typez00_bglt
																										BgL_arg1924z00_2015;
																									BgL_arg1924z00_2015 =
																										(((BgL_nodez00_bglt)
																											COBJECT((
																													(BgL_nodez00_bglt)
																													BgL_nodezd2letzd2_30)))->
																										BgL_typez00);
																									BgL_auxz00_7357 =
																										BGl_strictzd2nodezd2typez00zzast_nodez00
																										(((BgL_typez00_bglt)
																											BGl_za2_za2z00zztype_cachez00),
																										BgL_arg1924z00_2015);
																								}
																								((((BgL_nodez00_bglt) COBJECT(
																												((BgL_nodez00_bglt)
																													BgL_new1172z00_2014)))->
																										BgL_typez00) =
																									((BgL_typez00_bglt)
																										BgL_auxz00_7357), BUNSPEC);
																							}
																							((((BgL_nodezf2effectzf2_bglt)
																										COBJECT((
																												(BgL_nodezf2effectzf2_bglt)
																												BgL_new1172z00_2014)))->
																									BgL_sidezd2effectzd2) =
																								((obj_t) BUNSPEC), BUNSPEC);
																							((((BgL_nodezf2effectzf2_bglt)
																										COBJECT((
																												(BgL_nodezf2effectzf2_bglt)
																												BgL_new1172z00_2014)))->
																									BgL_keyz00) =
																								((obj_t) BINT(((long) -1))),
																								BUNSPEC);
																							((((BgL_letzd2varzd2_bglt)
																										COBJECT
																										(BgL_new1172z00_2014))->
																									BgL_bindingsz00) =
																								((obj_t) BgL_nbindingsz00_2007),
																								BUNSPEC);
																							((((BgL_letzd2varzd2_bglt)
																										COBJECT
																										(BgL_new1172z00_2014))->
																									BgL_bodyz00) =
																								((BgL_nodez00_bglt) (
																										(BgL_nodez00_bglt)
																										BgL_seqz00_2012)), BUNSPEC);
																							((((BgL_letzd2varzd2_bglt)
																										COBJECT
																										(BgL_new1172z00_2014))->
																									BgL_removablezf3zf3) =
																								((bool_t) ((bool_t) 1)),
																								BUNSPEC);
																							BgL_letbz00_2013 =
																								BgL_new1172z00_2014;
																						}
																						{	/* Ast/let.scm 440 */

																							((((BgL_letzd2varzd2_bglt)
																										COBJECT
																										(BgL_nodezd2letzd2_30))->
																									BgL_bodyz00) =
																								((BgL_nodez00_bglt) (
																										(BgL_nodez00_bglt)
																										BgL_letbz00_2013)),
																								BUNSPEC);
																							return BgL_nodezd2letzd2_30;
																						}
																					}
																				}
																			}
																		else
																			{	/* Ast/let.scm 448 */
																				obj_t BgL_bindingz00_2024;

																				BgL_bindingz00_2024 =
																					CAR(((obj_t) BgL_bindingsz00_2006));
																				{	/* Ast/let.scm 448 */
																					obj_t BgL_varz00_2025;

																					BgL_varz00_2025 =
																						CAR(((obj_t) BgL_bindingz00_2024));
																					{	/* Ast/let.scm 449 */
																						obj_t BgL_valz00_2026;

																						BgL_valz00_2026 =
																							CDR(
																							((obj_t) BgL_bindingz00_2024));
																						{	/* Ast/let.scm 450 */
																							obj_t BgL_locz00_2027;

																							BgL_locz00_2027 =
																								(((BgL_nodez00_bglt) COBJECT(
																										((BgL_nodez00_bglt)
																											BgL_valz00_2026)))->
																								BgL_locz00);
																							{	/* Ast/let.scm 451 */
																								BgL_localz00_bglt
																									BgL_nvarz00_2028;
																								{	/* Ast/let.scm 452 */
																									obj_t BgL_arg1938z00_2044;

																									{	/* Ast/let.scm 452 */

																										{	/* Ast/let.scm 452 */

																											BgL_arg1938z00_2044 =
																												BGl_gensymz00zz__r4_symbols_6_4z00
																												(BFALSE);
																										}
																									}
																									BgL_nvarz00_2028 =
																										BGl_makezd2localzd2svarz00zzast_localz00
																										(BgL_arg1938z00_2044,
																										((BgL_typez00_bglt)
																											BGl_za2_za2z00zztype_cachez00));
																								}
																								{	/* Ast/let.scm 452 */

																									{	/* Ast/let.scm 453 */
																										BgL_setqz00_bglt
																											BgL_initz00_2029;
																										{	/* Ast/let.scm 453 */
																											BgL_setqz00_bglt
																												BgL_new1174z00_2035;
																											{	/* Ast/let.scm 454 */
																												BgL_setqz00_bglt
																													BgL_new1173z00_2042;
																												BgL_new1173z00_2042 =
																													((BgL_setqz00_bglt)
																													BOBJECT(GC_MALLOC
																														(sizeof(struct
																																BgL_setqz00_bgl))));
																												{	/* Ast/let.scm 454 */
																													long
																														BgL_arg1937z00_2043;
																													{	/* Ast/let.scm 454 */
																														long
																															BgL_res3715z00_4962;
																														BgL_res3715z00_4962
																															=
																															BGL_CLASS_INDEX
																															(BGl_setqz00zzast_nodez00);
																														BgL_arg1937z00_2043
																															=
																															BgL_res3715z00_4962;
																													}
																													BGL_OBJECT_CLASS_NUM_SET
																														(((BgL_objectz00_bglt) BgL_new1173z00_2042), BgL_arg1937z00_2043);
																												}
																												{	/* Ast/let.scm 454 */
																													BgL_objectz00_bglt
																														BgL_tmpz00_7390;
																													BgL_tmpz00_7390 =
																														(
																														(BgL_objectz00_bglt)
																														BgL_new1173z00_2042);
																													BGL_OBJECT_WIDENING_SET
																														(BgL_tmpz00_7390,
																														BFALSE);
																												}
																												((BgL_objectz00_bglt)
																													BgL_new1173z00_2042);
																												BgL_new1174z00_2035 =
																													BgL_new1173z00_2042;
																											}
																											((((BgL_nodez00_bglt)
																														COBJECT((
																																(BgL_nodez00_bglt)
																																BgL_new1174z00_2035)))->
																													BgL_locz00) =
																												((obj_t)
																													BgL_locz00_2027),
																												BUNSPEC);
																											((((BgL_nodez00_bglt)
																														COBJECT((
																																(BgL_nodez00_bglt)
																																BgL_new1174z00_2035)))->
																													BgL_typez00) =
																												((BgL_typez00_bglt) (
																														(BgL_typez00_bglt)
																														BGl_za2unspecza2z00zztype_cachez00)),
																												BUNSPEC);
																											{
																												BgL_varz00_bglt
																													BgL_auxz00_7399;
																												{	/* Ast/let.scm 456 */
																													BgL_varz00_bglt
																														BgL_new1176z00_2036;
																													{	/* Ast/let.scm 458 */
																														BgL_varz00_bglt
																															BgL_new1175z00_2037;
																														BgL_new1175z00_2037
																															=
																															((BgL_varz00_bglt)
																															BOBJECT(GC_MALLOC
																																(sizeof(struct
																																		BgL_varz00_bgl))));
																														{	/* Ast/let.scm 458 */
																															long
																																BgL_arg1935z00_2038;
																															{	/* Ast/let.scm 458 */
																																long
																																	BgL_res3716z00_4967;
																																{	/* Ast/let.scm 458 */
																																	obj_t
																																		BgL_classz00_4966;
																																	BgL_classz00_4966
																																		=
																																		BGl_varz00zzast_nodez00;
																																	BgL_res3716z00_4967
																																		=
																																		BGL_CLASS_INDEX
																																		(BgL_classz00_4966);
																																}
																																BgL_arg1935z00_2038
																																	=
																																	BgL_res3716z00_4967;
																															}
																															BGL_OBJECT_CLASS_NUM_SET
																																(((BgL_objectz00_bglt) BgL_new1175z00_2037), BgL_arg1935z00_2038);
																														}
																														BgL_new1176z00_2036
																															=
																															BgL_new1175z00_2037;
																													}
																													((((BgL_nodez00_bglt)
																																COBJECT((
																																		(BgL_nodez00_bglt)
																																		BgL_new1176z00_2036)))->
																															BgL_locz00) =
																														((obj_t)
																															BgL_locz00_2027),
																														BUNSPEC);
																													((((BgL_nodez00_bglt)
																																COBJECT((
																																		(BgL_nodez00_bglt)
																																		BgL_new1176z00_2036)))->
																															BgL_typez00) =
																														((BgL_typez00_bglt)
																															((BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00)), BUNSPEC);
																													((((BgL_varz00_bglt)
																																COBJECT
																																(BgL_new1176z00_2036))->
																															BgL_variablez00) =
																														((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_varz00_2025)), BUNSPEC);
																													BgL_auxz00_7399 =
																														BgL_new1176z00_2036;
																												}
																												((((BgL_setqz00_bglt)
																															COBJECT
																															(BgL_new1174z00_2035))->
																														BgL_varz00) =
																													((BgL_varz00_bglt)
																														BgL_auxz00_7399),
																													BUNSPEC);
																											}
																											{
																												BgL_nodez00_bglt
																													BgL_auxz00_7412;
																												{	/* Ast/let.scm 460 */
																													BgL_varz00_bglt
																														BgL_new1178z00_2039;
																													{	/* Ast/let.scm 462 */
																														BgL_varz00_bglt
																															BgL_new1177z00_2040;
																														BgL_new1177z00_2040
																															=
																															((BgL_varz00_bglt)
																															BOBJECT(GC_MALLOC
																																(sizeof(struct
																																		BgL_varz00_bgl))));
																														{	/* Ast/let.scm 462 */
																															long
																																BgL_arg1936z00_2041;
																															{	/* Ast/let.scm 462 */
																																long
																																	BgL_res3717z00_4971;
																																{	/* Ast/let.scm 462 */
																																	obj_t
																																		BgL_classz00_4970;
																																	BgL_classz00_4970
																																		=
																																		BGl_varz00zzast_nodez00;
																																	BgL_res3717z00_4971
																																		=
																																		BGL_CLASS_INDEX
																																		(BgL_classz00_4970);
																																}
																																BgL_arg1936z00_2041
																																	=
																																	BgL_res3717z00_4971;
																															}
																															BGL_OBJECT_CLASS_NUM_SET
																																(((BgL_objectz00_bglt) BgL_new1177z00_2040), BgL_arg1936z00_2041);
																														}
																														BgL_new1178z00_2039
																															=
																															BgL_new1177z00_2040;
																													}
																													((((BgL_nodez00_bglt)
																																COBJECT((
																																		(BgL_nodez00_bglt)
																																		BgL_new1178z00_2039)))->
																															BgL_locz00) =
																														((obj_t)
																															BgL_locz00_2027),
																														BUNSPEC);
																													((((BgL_nodez00_bglt)
																																COBJECT((
																																		(BgL_nodez00_bglt)
																																		BgL_new1178z00_2039)))->
																															BgL_typez00) =
																														((BgL_typez00_bglt)
																															((BgL_typez00_bglt) BGl_za2_za2z00zztype_cachez00)), BUNSPEC);
																													((((BgL_varz00_bglt)
																																COBJECT
																																(BgL_new1178z00_2039))->
																															BgL_variablez00) =
																														((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_nvarz00_2028)), BUNSPEC);
																													BgL_auxz00_7412 =
																														((BgL_nodez00_bglt)
																														BgL_new1178z00_2039);
																												}
																												((((BgL_setqz00_bglt)
																															COBJECT
																															(BgL_new1174z00_2035))->
																														BgL_valuez00) =
																													((BgL_nodez00_bglt)
																														BgL_auxz00_7412),
																													BUNSPEC);
																											}
																											BgL_initz00_2029 =
																												BgL_new1174z00_2035;
																										}
																										BGl_usezd2variablez12zc0zzast_sexpz00
																											(((BgL_variablez00_bglt)
																												BgL_varz00_2025),
																											BgL_locz00_2027,
																											CNST_TABLE_REF(((long)
																													5)));
																										BGl_usezd2variablez12zc0zzast_sexpz00
																											(((BgL_variablez00_bglt)
																												BgL_nvarz00_2028),
																											BgL_locz00_2027,
																											CNST_TABLE_REF(((long)
																													5)));
																										{	/* Ast/let.scm 467 */
																											BgL_nodez00_bglt
																												BgL_arg1930z00_2030;
																											BgL_arg1930z00_2030 =
																												BGl_sexpzd2ze3nodez31zzast_sexpz00
																												(BUNSPEC, BNIL,
																												BgL_locz00_2027,
																												CNST_TABLE_REF(((long)
																														1)));
																											{	/* Ast/let.scm 466 */
																												obj_t BgL_auxz00_7436;
																												obj_t BgL_tmpz00_7434;

																												BgL_auxz00_7436 =
																													((obj_t)
																													BgL_arg1930z00_2030);
																												BgL_tmpz00_7434 =
																													((obj_t)
																													BgL_bindingz00_2024);
																												SET_CDR(BgL_tmpz00_7434,
																													BgL_auxz00_7436);
																										}}
																										{	/* Ast/let.scm 468 */
																											obj_t BgL_arg1931z00_2031;
																											obj_t BgL_arg1932z00_2032;
																											obj_t BgL_arg1933z00_2033;

																											BgL_arg1931z00_2031 =
																												CDR(
																												((obj_t)
																													BgL_bindingsz00_2006));
																											{	/* Ast/let.scm 469 */
																												obj_t
																													BgL_arg1934z00_2034;
																												BgL_arg1934z00_2034 =
																													MAKE_YOUNG_PAIR((
																														(obj_t)
																														BgL_nvarz00_2028),
																													BgL_valz00_2026);
																												BgL_arg1932z00_2032 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1934z00_2034,
																													BgL_nbindingsz00_2007);
																											}
																											BgL_arg1933z00_2033 =
																												MAKE_YOUNG_PAIR(
																												((obj_t)
																													BgL_initz00_2029),
																												BgL_nsequencez00_2008);
																											{
																												obj_t
																													BgL_nsequencez00_7448;
																												obj_t
																													BgL_nbindingsz00_7447;
																												obj_t
																													BgL_bindingsz00_7446;
																												BgL_bindingsz00_7446 =
																													BgL_arg1931z00_2031;
																												BgL_nbindingsz00_7447 =
																													BgL_arg1932z00_2032;
																												BgL_nsequencez00_7448 =
																													BgL_arg1933z00_2033;
																												BgL_nsequencez00_2008 =
																													BgL_nsequencez00_7448;
																												BgL_nbindingsz00_2007 =
																													BgL_nbindingsz00_7447;
																												BgL_bindingsz00_2006 =
																													BgL_bindingsz00_7446;
																												goto
																													BgL_zc3z04anonymousza31922ze3z87_2009;
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



/* safe-rec-val?~0 */
	bool_t BGl_safezd2reczd2valzf3ze70z14zzast_letz00(obj_t BgL_valz00_2054)
	{
		{	/* Ast/let.scm 270 */
			{	/* Ast/let.scm 269 */
				bool_t BgL__ortest_1119z00_2056;

				BgL__ortest_1119z00_2056 =
					BGl_isazf3zf3zz__objectz00(BgL_valz00_2054, BGl_atomz00zzast_nodez00);
				if (BgL__ortest_1119z00_2056)
					{	/* Ast/let.scm 269 */
						return BgL__ortest_1119z00_2056;
					}
				else
					{	/* Ast/let.scm 269 */
						bool_t BgL__ortest_1120z00_2057;

						BgL__ortest_1120z00_2057 =
							BGl_isazf3zf3zz__objectz00(BgL_valz00_2054,
							BGl_closurez00zzast_nodez00);
						if (BgL__ortest_1120z00_2057)
							{	/* Ast/let.scm 269 */
								return BgL__ortest_1120z00_2057;
							}
						else
							{	/* Ast/let.scm 269 */
								bool_t BgL__ortest_1121z00_2058;

								BgL__ortest_1121z00_2058 =
									BGl_isazf3zf3zz__objectz00(BgL_valz00_2054,
									BGl_kwotez00zzast_nodez00);
								if (BgL__ortest_1121z00_2058)
									{	/* Ast/let.scm 269 */
										return BgL__ortest_1121z00_2058;
									}
								else
									{	/* Ast/let.scm 269 */
										if (BGl_isazf3zf3zz__objectz00(BgL_valz00_2054,
												BGl_sequencez00zzast_nodez00))
											{	/* Ast/let.scm 270 */
												obj_t BgL_g1427z00_2060;

												BgL_g1427z00_2060 =
													(((BgL_sequencez00_bglt) COBJECT(
															((BgL_sequencez00_bglt) BgL_valz00_2054)))->
													BgL_nodesz00);
												{
													obj_t BgL_l1425z00_2062;

													BgL_l1425z00_2062 = BgL_g1427z00_2060;
												BgL_zc3z04anonymousza31943ze3z87_2063:
													if (NULLP(BgL_l1425z00_2062))
														{	/* Ast/let.scm 270 */
															return ((bool_t) 1);
														}
													else
														{	/* Ast/let.scm 270 */
															bool_t BgL_test4154z00_7461;

															{	/* Ast/let.scm 270 */
																obj_t BgL_arg1946z00_2068;

																BgL_arg1946z00_2068 =
																	CAR(((obj_t) BgL_l1425z00_2062));
																BgL_test4154z00_7461 =
																	BGl_safezd2reczd2valzf3ze70z14zzast_letz00
																	(BgL_arg1946z00_2068);
															}
															if (BgL_test4154z00_7461)
																{	/* Ast/let.scm 270 */
																	obj_t BgL_arg1945z00_2067;

																	BgL_arg1945z00_2067 =
																		CDR(((obj_t) BgL_l1425z00_2062));
																	{
																		obj_t BgL_l1425z00_7467;

																		BgL_l1425z00_7467 = BgL_arg1945z00_2067;
																		BgL_l1425z00_2062 = BgL_l1425z00_7467;
																		goto BgL_zc3z04anonymousza31943ze3z87_2063;
																	}
																}
															else
																{	/* Ast/let.scm 270 */
																	return ((bool_t) 0);
																}
														}
												}
											}
										else
											{	/* Ast/let.scm 270 */
												return ((bool_t) 0);
											}
									}
							}
					}
			}
		}

	}



/* safe-rec-val-optim?~0 */
	bool_t BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00(obj_t
		BgL_valz00_2070, obj_t BgL_varsz00_2071)
	{
		{	/* Ast/let.scm 354 */
		BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00:
			{	/* Ast/let.scm 273 */
				bool_t BgL__ortest_1123z00_2073;

				BgL__ortest_1123z00_2073 =
					BGl_safezd2reczd2valzf3ze70z14zzast_letz00(BgL_valz00_2070);
				if (BgL__ortest_1123z00_2073)
					{	/* Ast/let.scm 273 */
						return BgL__ortest_1123z00_2073;
					}
				else
					{	/* Ast/let.scm 273 */
						if (NULLP(BgL_valz00_2070))
							{	/* Ast/let.scm 275 */
								return ((bool_t) 1);
							}
						else
							{	/* Ast/let.scm 275 */
								if (BGl_isazf3zf3zz__objectz00(BgL_valz00_2070,
										BGl_atomz00zzast_nodez00))
									{	/* Ast/let.scm 277 */
										return ((bool_t) 1);
									}
								else
									{	/* Ast/let.scm 277 */
										if (BGl_isazf3zf3zz__objectz00(BgL_valz00_2070,
												BGl_varz00zzast_nodez00))
											{	/* Ast/let.scm 279 */
												if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
															((obj_t)
																(((BgL_varz00_bglt) COBJECT(
																			((BgL_varz00_bglt) BgL_valz00_2070)))->
																	BgL_variablez00)), BgL_varsz00_2071)))
													{	/* Ast/let.scm 280 */
														return ((bool_t) 0);
													}
												else
													{	/* Ast/let.scm 280 */
														return ((bool_t) 1);
													}
											}
										else
											{	/* Ast/let.scm 279 */
												if (BGl_isazf3zf3zz__objectz00(BgL_valz00_2070,
														BGl_sequencez00zzast_nodez00))
													{	/* Ast/let.scm 282 */
														obj_t BgL_arg1955z00_2081;

														BgL_arg1955z00_2081 =
															(((BgL_sequencez00_bglt) COBJECT(
																	((BgL_sequencez00_bglt) BgL_valz00_2070)))->
															BgL_nodesz00);
														{
															obj_t BgL_valz00_7486;

															BgL_valz00_7486 = BgL_arg1955z00_2081;
															BgL_valz00_2070 = BgL_valz00_7486;
															goto
																BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00;
														}
													}
												else
													{	/* Ast/let.scm 281 */
														if (BGl_isazf3zf3zz__objectz00(BgL_valz00_2070,
																BGl_appz00zzast_nodez00))
															{	/* Ast/let.scm 285 */
																bool_t BgL_test4162z00_7489;

																{	/* Ast/let.scm 285 */
																	BgL_varz00_bglt BgL_arg1958z00_2086;

																	BgL_arg1958z00_2086 =
																		(((BgL_appz00_bglt) COBJECT(
																				((BgL_appz00_bglt) BgL_valz00_2070)))->
																		BgL_funz00);
																	BgL_test4162z00_7489 =
																		BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																		(((obj_t) BgL_arg1958z00_2086),
																		BgL_varsz00_2071);
																}
																if (BgL_test4162z00_7489)
																	{	/* Ast/let.scm 286 */
																		obj_t BgL_arg1957z00_2085;

																		BgL_arg1957z00_2085 =
																			(((BgL_appz00_bglt) COBJECT(
																					((BgL_appz00_bglt)
																						BgL_valz00_2070)))->BgL_argsz00);
																		{
																			obj_t BgL_valz00_7496;

																			BgL_valz00_7496 = BgL_arg1957z00_2085;
																			BgL_valz00_2070 = BgL_valz00_7496;
																			goto
																				BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00;
																		}
																	}
																else
																	{	/* Ast/let.scm 285 */
																		return ((bool_t) 0);
																	}
															}
														else
															{	/* Ast/let.scm 283 */
																if (PAIRP(BgL_valz00_2070))
																	{
																		obj_t BgL_l1429z00_2089;

																		BgL_l1429z00_2089 = BgL_valz00_2070;
																	BgL_zc3z04anonymousza31960ze3z87_2090:
																		if (NULLP(BgL_l1429z00_2089))
																			{	/* Ast/let.scm 288 */
																				return ((bool_t) 1);
																			}
																		else
																			{	/* Ast/let.scm 288 */
																				bool_t BgL_test4165z00_7501;

																				{	/* Ast/let.scm 288 */
																					obj_t BgL_vz00_2095;

																					BgL_vz00_2095 =
																						CAR(((obj_t) BgL_l1429z00_2089));
																					BgL_test4165z00_7501 =
																						BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																						(BgL_vz00_2095, BgL_varsz00_2071);
																				}
																				if (BgL_test4165z00_7501)
																					{	/* Ast/let.scm 288 */
																						obj_t BgL_arg1962z00_2094;

																						BgL_arg1962z00_2094 =
																							CDR(((obj_t) BgL_l1429z00_2089));
																						{
																							obj_t BgL_l1429z00_7507;

																							BgL_l1429z00_7507 =
																								BgL_arg1962z00_2094;
																							BgL_l1429z00_2089 =
																								BgL_l1429z00_7507;
																							goto
																								BgL_zc3z04anonymousza31960ze3z87_2090;
																						}
																					}
																				else
																					{	/* Ast/let.scm 288 */
																						return ((bool_t) 0);
																					}
																			}
																	}
																else
																	{	/* Ast/let.scm 287 */
																		if (BGl_isazf3zf3zz__objectz00
																			(BgL_valz00_2070,
																				BGl_appzd2lyzd2zzast_nodez00))
																			{	/* Ast/let.scm 291 */
																				bool_t BgL_test4167z00_7510;

																				{	/* Ast/let.scm 291 */
																					BgL_nodez00_bglt BgL_arg1965z00_2101;

																					BgL_arg1965z00_2101 =
																						(((BgL_appzd2lyzd2_bglt) COBJECT(
																								((BgL_appzd2lyzd2_bglt)
																									BgL_valz00_2070)))->
																						BgL_funz00);
																					BgL_test4167z00_7510 =
																						BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																						(((obj_t) BgL_arg1965z00_2101),
																						BgL_varsz00_2071);
																				}
																				if (BgL_test4167z00_7510)
																					{	/* Ast/let.scm 292 */
																						BgL_nodez00_bglt
																							BgL_arg1964z00_2100;
																						BgL_arg1964z00_2100 =
																							(((BgL_appzd2lyzd2_bglt)
																								COBJECT(((BgL_appzd2lyzd2_bglt)
																										BgL_valz00_2070)))->
																							BgL_argz00);
																						{
																							obj_t BgL_valz00_7517;

																							BgL_valz00_7517 =
																								((obj_t) BgL_arg1964z00_2100);
																							BgL_valz00_2070 = BgL_valz00_7517;
																							goto
																								BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00;
																						}
																					}
																				else
																					{	/* Ast/let.scm 291 */
																						return ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Ast/let.scm 289 */
																				if (BGl_isazf3zf3zz__objectz00
																					(BgL_valz00_2070,
																						BGl_funcallz00zzast_nodez00))
																					{	/* Ast/let.scm 295 */
																						bool_t BgL_test4169z00_7521;

																						{	/* Ast/let.scm 295 */
																							BgL_nodez00_bglt
																								BgL_arg1968z00_2106;
																							BgL_arg1968z00_2106 =
																								(((BgL_funcallz00_bglt)
																									COBJECT(((BgL_funcallz00_bglt)
																											BgL_valz00_2070)))->
																								BgL_funz00);
																							BgL_test4169z00_7521 =
																								BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																								(((obj_t) BgL_arg1968z00_2106),
																								BgL_varsz00_2071);
																						}
																						if (BgL_test4169z00_7521)
																							{	/* Ast/let.scm 296 */
																								obj_t BgL_arg1967z00_2105;

																								BgL_arg1967z00_2105 =
																									(((BgL_funcallz00_bglt)
																										COBJECT((
																												(BgL_funcallz00_bglt)
																												BgL_valz00_2070)))->
																									BgL_argsz00);
																								{
																									obj_t BgL_valz00_7528;

																									BgL_valz00_7528 =
																										BgL_arg1967z00_2105;
																									BgL_valz00_2070 =
																										BgL_valz00_7528;
																									goto
																										BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00;
																								}
																							}
																						else
																							{	/* Ast/let.scm 295 */
																								return ((bool_t) 0);
																							}
																					}
																				else
																					{	/* Ast/let.scm 293 */
																						if (BGl_isazf3zf3zz__objectz00
																							(BgL_valz00_2070,
																								BGl_externz00zzast_nodez00))
																							{	/* Ast/let.scm 299 */
																								obj_t BgL_g1434z00_2109;

																								BgL_g1434z00_2109 =
																									(((BgL_externz00_bglt)
																										COBJECT((
																												(BgL_externz00_bglt)
																												BgL_valz00_2070)))->
																									BgL_exprza2za2);
																								{
																									obj_t BgL_l1432z00_2111;

																									BgL_l1432z00_2111 =
																										BgL_g1434z00_2109;
																								BgL_zc3z04anonymousza31970ze3z87_2112:
																									if (NULLP
																										(BgL_l1432z00_2111))
																										{	/* Ast/let.scm 299 */
																											return ((bool_t) 1);
																										}
																									else
																										{	/* Ast/let.scm 299 */
																											bool_t
																												BgL_test4172z00_7535;
																											{	/* Ast/let.scm 300 */
																												obj_t BgL_ez00_2117;

																												BgL_ez00_2117 =
																													CAR(
																													((obj_t)
																														BgL_l1432z00_2111));
																												BgL_test4172z00_7535 =
																													BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																													(BgL_ez00_2117,
																													BgL_varsz00_2071);
																											}
																											if (BgL_test4172z00_7535)
																												{	/* Ast/let.scm 299 */
																													obj_t
																														BgL_arg1972z00_2116;
																													BgL_arg1972z00_2116 =
																														CDR(((obj_t)
																															BgL_l1432z00_2111));
																													{
																														obj_t
																															BgL_l1432z00_7541;
																														BgL_l1432z00_7541 =
																															BgL_arg1972z00_2116;
																														BgL_l1432z00_2111 =
																															BgL_l1432z00_7541;
																														goto
																															BgL_zc3z04anonymousza31970ze3z87_2112;
																													}
																												}
																											else
																												{	/* Ast/let.scm 299 */
																													return ((bool_t) 0);
																												}
																										}
																								}
																							}
																						else
																							{	/* Ast/let.scm 297 */
																								if (BGl_isazf3zf3zz__objectz00
																									(BgL_valz00_2070,
																										BGl_conditionalz00zzast_nodez00))
																									{	/* Ast/let.scm 304 */
																										bool_t BgL_test4174z00_7544;

																										{	/* Ast/let.scm 304 */
																											BgL_nodez00_bglt
																												BgL_arg1976z00_2125;
																											BgL_arg1976z00_2125 =
																												(((BgL_conditionalz00_bglt) COBJECT(((BgL_conditionalz00_bglt) BgL_valz00_2070)))->BgL_testz00);
																											BgL_test4174z00_7544 =
																												BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																												(((obj_t)
																													BgL_arg1976z00_2125),
																												BgL_varsz00_2071);
																										}
																										if (BgL_test4174z00_7544)
																											{	/* Ast/let.scm 305 */
																												bool_t
																													BgL_test4175z00_7549;
																												{	/* Ast/let.scm 305 */
																													BgL_nodez00_bglt
																														BgL_arg1975z00_2124;
																													BgL_arg1975z00_2124 =
																														(((BgL_conditionalz00_bglt) COBJECT(((BgL_conditionalz00_bglt) BgL_valz00_2070)))->BgL_truez00);
																													BgL_test4175z00_7549 =
																														BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																														(((obj_t)
																															BgL_arg1975z00_2124),
																														BgL_varsz00_2071);
																												}
																												if (BgL_test4175z00_7549)
																													{	/* Ast/let.scm 306 */
																														BgL_nodez00_bglt
																															BgL_arg1974z00_2123;
																														BgL_arg1974z00_2123
																															=
																															(((BgL_conditionalz00_bglt) COBJECT(((BgL_conditionalz00_bglt) BgL_valz00_2070)))->BgL_falsez00);
																														{
																															obj_t
																																BgL_valz00_7556;
																															BgL_valz00_7556 =
																																((obj_t)
																																BgL_arg1974z00_2123);
																															BgL_valz00_2070 =
																																BgL_valz00_7556;
																															goto
																																BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00;
																														}
																													}
																												else
																													{	/* Ast/let.scm 305 */
																														return ((bool_t) 0);
																													}
																											}
																										else
																											{	/* Ast/let.scm 304 */
																												return ((bool_t) 0);
																											}
																									}
																								else
																									{	/* Ast/let.scm 302 */
																										if (BGl_isazf3zf3zz__objectz00(BgL_valz00_2070, BGl_setqz00zzast_nodez00))
																											{	/* Ast/let.scm 309 */
																												bool_t
																													BgL_test4177z00_7560;
																												{	/* Ast/let.scm 309 */
																													BgL_varz00_bglt
																														BgL_arg1980z00_2130;
																													BgL_arg1980z00_2130 =
																														(((BgL_setqz00_bglt)
																															COBJECT((
																																	(BgL_setqz00_bglt)
																																	BgL_valz00_2070)))->
																														BgL_varz00);
																													BgL_test4177z00_7560 =
																														BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																														(((obj_t)
																															BgL_arg1980z00_2130),
																														BgL_varsz00_2071);
																												}
																												if (BgL_test4177z00_7560)
																													{	/* Ast/let.scm 310 */
																														BgL_nodez00_bglt
																															BgL_arg1979z00_2129;
																														BgL_arg1979z00_2129
																															=
																															(((BgL_setqz00_bglt) COBJECT(((BgL_setqz00_bglt) BgL_valz00_2070)))->BgL_valuez00);
																														{
																															obj_t
																																BgL_valz00_7567;
																															BgL_valz00_7567 =
																																((obj_t)
																																BgL_arg1979z00_2129);
																															BgL_valz00_2070 =
																																BgL_valz00_7567;
																															goto
																																BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00;
																														}
																													}
																												else
																													{	/* Ast/let.scm 309 */
																														return ((bool_t) 0);
																													}
																											}
																										else
																											{	/* Ast/let.scm 307 */
																												if (BGl_isazf3zf3zz__objectz00(BgL_valz00_2070, BGl_failz00zzast_nodez00))
																													{	/* Ast/let.scm 313 */
																														bool_t
																															BgL_test4179z00_7571;
																														{	/* Ast/let.scm 313 */
																															BgL_nodez00_bglt
																																BgL_arg1984z00_2137;
																															BgL_arg1984z00_2137
																																=
																																(((BgL_failz00_bglt) COBJECT(((BgL_failz00_bglt) BgL_valz00_2070)))->BgL_procz00);
																															BgL_test4179z00_7571
																																=
																																BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																																(((obj_t)
																																	BgL_arg1984z00_2137),
																																BgL_varsz00_2071);
																														}
																														if (BgL_test4179z00_7571)
																															{	/* Ast/let.scm 314 */
																																bool_t
																																	BgL_test4180z00_7576;
																																{	/* Ast/let.scm 314 */
																																	BgL_nodez00_bglt
																																		BgL_arg1983z00_2136;
																																	BgL_arg1983z00_2136
																																		=
																																		(((BgL_failz00_bglt) COBJECT(((BgL_failz00_bglt) BgL_valz00_2070)))->BgL_msgz00);
																																	BgL_test4180z00_7576
																																		=
																																		BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																																		(((obj_t)
																																			BgL_arg1983z00_2136),
																																		BgL_varsz00_2071);
																																}
																																if (BgL_test4180z00_7576)
																																	{	/* Ast/let.scm 315 */
																																		BgL_nodez00_bglt
																																			BgL_arg1982z00_2135;
																																		BgL_arg1982z00_2135
																																			=
																																			(((BgL_failz00_bglt) COBJECT(((BgL_failz00_bglt) BgL_valz00_2070)))->BgL_objz00);
																																		{
																																			obj_t
																																				BgL_valz00_7583;
																																			BgL_valz00_7583
																																				=
																																				((obj_t)
																																				BgL_arg1982z00_2135);
																																			BgL_valz00_2070
																																				=
																																				BgL_valz00_7583;
																																			goto
																																				BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00;
																																		}
																																	}
																																else
																																	{	/* Ast/let.scm 314 */
																																		return (
																																			(bool_t)
																																			0);
																																	}
																															}
																														else
																															{	/* Ast/let.scm 313 */
																																return ((bool_t)
																																	0);
																															}
																													}
																												else
																													{	/* Ast/let.scm 311 */
																														if (BGl_isazf3zf3zz__objectz00(BgL_valz00_2070, BGl_switchz00zzast_nodez00))
																															{	/* Ast/let.scm 318 */
																																bool_t
																																	BgL_test4182z00_7587;
																																{	/* Ast/let.scm 318 */
																																	BgL_nodez00_bglt
																																		BgL_arg1990z00_2152;
																																	BgL_arg1990z00_2152
																																		=
																																		(((BgL_switchz00_bglt) COBJECT(((BgL_switchz00_bglt) BgL_valz00_2070)))->BgL_testz00);
																																	BgL_test4182z00_7587
																																		=
																																		BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																																		(((obj_t)
																																			BgL_arg1990z00_2152),
																																		BgL_varsz00_2071);
																																}
																																if (BgL_test4182z00_7587)
																																	{	/* Ast/let.scm 319 */
																																		obj_t
																																			BgL_g1438z00_2141;
																																		BgL_g1438z00_2141
																																			=
																																			(((BgL_switchz00_bglt) COBJECT(((BgL_switchz00_bglt) BgL_valz00_2070)))->BgL_clausesz00);
																																		{
																																			obj_t
																																				BgL_l1436z00_2143;
																																			BgL_l1436z00_2143
																																				=
																																				BgL_g1438z00_2141;
																																		BgL_zc3z04anonymousza31986ze3z87_2144:
																																			if (NULLP
																																				(BgL_l1436z00_2143))
																																				{	/* Ast/let.scm 319 */
																																					return
																																						(
																																						(bool_t)
																																						1);
																																				}
																																			else
																																				{	/* Ast/let.scm 319 */
																																					bool_t
																																						BgL_test4184z00_7596;
																																					{	/* Ast/let.scm 320 */
																																						obj_t
																																							BgL_clausez00_2149;
																																						BgL_clausez00_2149
																																							=
																																							CAR
																																							(((obj_t) BgL_l1436z00_2143));
																																						{	/* Ast/let.scm 320 */
																																							obj_t
																																								BgL_arg1989z00_2150;
																																							BgL_arg1989z00_2150
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_clausez00_2149));
																																							BgL_test4184z00_7596
																																								=
																																								BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																																								(BgL_arg1989z00_2150,
																																								BgL_varsz00_2071);
																																						}
																																					}
																																					if (BgL_test4184z00_7596)
																																						{	/* Ast/let.scm 319 */
																																							obj_t
																																								BgL_arg1988z00_2148;
																																							BgL_arg1988z00_2148
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_l1436z00_2143));
																																							{
																																								obj_t
																																									BgL_l1436z00_7604;
																																								BgL_l1436z00_7604
																																									=
																																									BgL_arg1988z00_2148;
																																								BgL_l1436z00_2143
																																									=
																																									BgL_l1436z00_7604;
																																								goto
																																									BgL_zc3z04anonymousza31986ze3z87_2144;
																																							}
																																						}
																																					else
																																						{	/* Ast/let.scm 319 */
																																							return
																																								(
																																								(bool_t)
																																								0);
																																						}
																																				}
																																		}
																																	}
																																else
																																	{	/* Ast/let.scm 318 */
																																		return (
																																			(bool_t)
																																			0);
																																	}
																															}
																														else
																															{	/* Ast/let.scm 316 */
																																if (BGl_isazf3zf3zz__objectz00(BgL_valz00_2070, BGl_letzd2funzd2zzast_nodez00))
																																	{	/* Ast/let.scm 324 */
																																		bool_t
																																			BgL_test4186z00_7607;
																																		{	/* Ast/let.scm 324 */
																																			BgL_nodez00_bglt
																																				BgL_arg1998z00_2168;
																																			BgL_arg1998z00_2168
																																				=
																																				(((BgL_letzd2funzd2_bglt) COBJECT(((BgL_letzd2funzd2_bglt) BgL_valz00_2070)))->BgL_bodyz00);
																																			BgL_test4186z00_7607
																																				=
																																				BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																																				(((obj_t) BgL_arg1998z00_2168), BgL_varsz00_2071);
																																		}
																																		if (BgL_test4186z00_7607)
																																			{	/* Ast/let.scm 325 */
																																				obj_t
																																					BgL_g1442z00_2156;
																																				BgL_g1442z00_2156
																																					=
																																					(((BgL_letzd2funzd2_bglt) COBJECT(((BgL_letzd2funzd2_bglt) BgL_valz00_2070)))->BgL_localsz00);
																																				{
																																					obj_t
																																						BgL_l1440z00_2158;
																																					BgL_l1440z00_2158
																																						=
																																						BgL_g1442z00_2156;
																																				BgL_zc3z04anonymousza31992ze3z87_2159:
																																					if (NULLP(BgL_l1440z00_2158))
																																						{	/* Ast/let.scm 325 */
																																							return
																																								(
																																								(bool_t)
																																								1);
																																						}
																																					else
																																						{	/* Ast/let.scm 325 */
																																							bool_t
																																								BgL_test4188z00_7616;
																																							{	/* Ast/let.scm 326 */
																																								obj_t
																																									BgL_fz00_2164;
																																								BgL_fz00_2164
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_l1440z00_2158));
																																								{	/* Ast/let.scm 327 */
																																									obj_t
																																										BgL_arg1996z00_2165;
																																									BgL_arg1996z00_2165
																																										=
																																										(
																																										((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) (((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt) BgL_fz00_2164))))->BgL_valuez00))))->BgL_bodyz00);
																																									BgL_test4188z00_7616
																																										=
																																										BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																																										(BgL_arg1996z00_2165,
																																										BgL_varsz00_2071);
																																								}
																																							}
																																							if (BgL_test4188z00_7616)
																																								{	/* Ast/let.scm 325 */
																																									obj_t
																																										BgL_arg1995z00_2163;
																																									BgL_arg1995z00_2163
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_l1440z00_2158));
																																									{
																																										obj_t
																																											BgL_l1440z00_7627;
																																										BgL_l1440z00_7627
																																											=
																																											BgL_arg1995z00_2163;
																																										BgL_l1440z00_2158
																																											=
																																											BgL_l1440z00_7627;
																																										goto
																																											BgL_zc3z04anonymousza31992ze3z87_2159;
																																									}
																																								}
																																							else
																																								{	/* Ast/let.scm 325 */
																																									return
																																										(
																																										(bool_t)
																																										0);
																																								}
																																						}
																																				}
																																			}
																																		else
																																			{	/* Ast/let.scm 324 */
																																				return (
																																					(bool_t)
																																					0);
																																			}
																																	}
																																else
																																	{	/* Ast/let.scm 322 */
																																		if (BGl_isazf3zf3zz__objectz00(BgL_valz00_2070, BGl_letzd2varzd2zzast_nodez00))
																																			{	/* Ast/let.scm 331 */
																																				bool_t
																																					BgL_test4190z00_7630;
																																				{	/* Ast/let.scm 331 */
																																					BgL_nodez00_bglt
																																						BgL_arg2004z00_2183;
																																					BgL_arg2004z00_2183
																																						=
																																						(((BgL_letzd2varzd2_bglt) COBJECT(((BgL_letzd2varzd2_bglt) BgL_valz00_2070)))->BgL_bodyz00);
																																					BgL_test4190z00_7630
																																						=
																																						BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																																						(((obj_t) BgL_arg2004z00_2183), BgL_varsz00_2071);
																																				}
																																				if (BgL_test4190z00_7630)
																																					{	/* Ast/let.scm 332 */
																																						obj_t
																																							BgL_g1446z00_2172;
																																						BgL_g1446z00_2172
																																							=
																																							(((BgL_letzd2varzd2_bglt) COBJECT(((BgL_letzd2varzd2_bglt) BgL_valz00_2070)))->BgL_bindingsz00);
																																						{
																																							obj_t
																																								BgL_l1444z00_2174;
																																							BgL_l1444z00_2174
																																								=
																																								BgL_g1446z00_2172;
																																						BgL_zc3z04anonymousza32000ze3z87_2175:
																																							if (NULLP(BgL_l1444z00_2174))
																																								{	/* Ast/let.scm 332 */
																																									return
																																										(
																																										(bool_t)
																																										1);
																																								}
																																							else
																																								{	/* Ast/let.scm 332 */
																																									bool_t
																																										BgL_test4192z00_7639;
																																									{	/* Ast/let.scm 333 */
																																										obj_t
																																											BgL_bindingz00_2180;
																																										BgL_bindingz00_2180
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_l1444z00_2174));
																																										{	/* Ast/let.scm 333 */
																																											obj_t
																																												BgL_arg2003z00_2181;
																																											BgL_arg2003z00_2181
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_bindingz00_2180));
																																											BgL_test4192z00_7639
																																												=
																																												BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																																												(BgL_arg2003z00_2181,
																																												BgL_varsz00_2071);
																																										}
																																									}
																																									if (BgL_test4192z00_7639)
																																										{	/* Ast/let.scm 332 */
																																											obj_t
																																												BgL_arg2002z00_2179;
																																											BgL_arg2002z00_2179
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_l1444z00_2174));
																																											{
																																												obj_t
																																													BgL_l1444z00_7647;
																																												BgL_l1444z00_7647
																																													=
																																													BgL_arg2002z00_2179;
																																												BgL_l1444z00_2174
																																													=
																																													BgL_l1444z00_7647;
																																												goto
																																													BgL_zc3z04anonymousza32000ze3z87_2175;
																																											}
																																										}
																																									else
																																										{	/* Ast/let.scm 332 */
																																											return
																																												(
																																												(bool_t)
																																												0);
																																										}
																																								}
																																						}
																																					}
																																				else
																																					{	/* Ast/let.scm 331 */
																																						return
																																							(
																																							(bool_t)
																																							0);
																																					}
																																			}
																																		else
																																			{	/* Ast/let.scm 329 */
																																				if (BGl_isazf3zf3zz__objectz00(BgL_valz00_2070, BGl_setzd2exzd2itz00zzast_nodez00))
																																					{	/* Ast/let.scm 337 */
																																						bool_t
																																							BgL_test4194z00_7650;
																																						{	/* Ast/let.scm 337 */
																																							BgL_varz00_bglt
																																								BgL_arg2008z00_2188;
																																							BgL_arg2008z00_2188
																																								=
																																								(
																																								((BgL_setzd2exzd2itz00_bglt) COBJECT(((BgL_setzd2exzd2itz00_bglt) BgL_valz00_2070)))->BgL_varz00);
																																							BgL_test4194z00_7650
																																								=
																																								BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																																								(
																																								((obj_t) BgL_arg2008z00_2188), BgL_varsz00_2071);
																																						}
																																						if (BgL_test4194z00_7650)
																																							{	/* Ast/let.scm 338 */
																																								BgL_nodez00_bglt
																																									BgL_arg2007z00_2187;
																																								BgL_arg2007z00_2187
																																									=
																																									(
																																									((BgL_setzd2exzd2itz00_bglt) COBJECT(((BgL_setzd2exzd2itz00_bglt) BgL_valz00_2070)))->BgL_bodyz00);
																																								{
																																									obj_t
																																										BgL_valz00_7657;
																																									BgL_valz00_7657
																																										=
																																										(
																																										(obj_t)
																																										BgL_arg2007z00_2187);
																																									BgL_valz00_2070
																																										=
																																										BgL_valz00_7657;
																																									goto
																																										BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00;
																																								}
																																							}
																																						else
																																							{	/* Ast/let.scm 337 */
																																								return
																																									(
																																									(bool_t)
																																									0);
																																							}
																																					}
																																				else
																																					{	/* Ast/let.scm 335 */
																																						if (BGl_isazf3zf3zz__objectz00(BgL_valz00_2070, BGl_jumpzd2exzd2itz00zzast_nodez00))
																																							{	/* Ast/let.scm 341 */
																																								bool_t
																																									BgL_test4196z00_7661;
																																								{	/* Ast/let.scm 341 */
																																									BgL_nodez00_bglt
																																										BgL_arg2011z00_2193;
																																									BgL_arg2011z00_2193
																																										=
																																										(
																																										((BgL_jumpzd2exzd2itz00_bglt) COBJECT(((BgL_jumpzd2exzd2itz00_bglt) BgL_valz00_2070)))->BgL_exitz00);
																																									BgL_test4196z00_7661
																																										=
																																										BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																																										(
																																										((obj_t) BgL_arg2011z00_2193), BgL_varsz00_2071);
																																								}
																																								if (BgL_test4196z00_7661)
																																									{	/* Ast/let.scm 342 */
																																										BgL_nodez00_bglt
																																											BgL_arg2010z00_2192;
																																										BgL_arg2010z00_2192
																																											=
																																											(
																																											((BgL_jumpzd2exzd2itz00_bglt) COBJECT(((BgL_jumpzd2exzd2itz00_bglt) BgL_valz00_2070)))->BgL_valuez00);
																																										{
																																											obj_t
																																												BgL_valz00_7668;
																																											BgL_valz00_7668
																																												=
																																												(
																																												(obj_t)
																																												BgL_arg2010z00_2192);
																																											BgL_valz00_2070
																																												=
																																												BgL_valz00_7668;
																																											goto
																																												BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00;
																																										}
																																									}
																																								else
																																									{	/* Ast/let.scm 341 */
																																										return
																																											(
																																											(bool_t)
																																											0);
																																									}
																																							}
																																						else
																																							{	/* Ast/let.scm 339 */
																																								if (BGl_isazf3zf3zz__objectz00(BgL_valz00_2070, BGl_makezd2boxzd2zzast_nodez00))
																																									{	/* Ast/let.scm 345 */
																																										BgL_nodez00_bglt
																																											BgL_arg2013z00_2196;
																																										BgL_arg2013z00_2196
																																											=
																																											(
																																											((BgL_makezd2boxzd2_bglt) COBJECT(((BgL_makezd2boxzd2_bglt) BgL_valz00_2070)))->BgL_valuez00);
																																										{
																																											obj_t
																																												BgL_valz00_7674;
																																											BgL_valz00_7674
																																												=
																																												(
																																												(obj_t)
																																												BgL_arg2013z00_2196);
																																											BgL_valz00_2070
																																												=
																																												BgL_valz00_7674;
																																											goto
																																												BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00;
																																										}
																																									}
																																								else
																																									{	/* Ast/let.scm 343 */
																																										if (BGl_isazf3zf3zz__objectz00(BgL_valz00_2070, BGl_boxzd2refzd2zzast_nodez00))
																																											{	/* Ast/let.scm 348 */
																																												BgL_varz00_bglt
																																													BgL_arg2016z00_2199;
																																												BgL_arg2016z00_2199
																																													=
																																													(
																																													((BgL_boxzd2refzd2_bglt) COBJECT(((BgL_boxzd2refzd2_bglt) BgL_valz00_2070)))->BgL_varz00);
																																												{
																																													obj_t
																																														BgL_valz00_7680;
																																													BgL_valz00_7680
																																														=
																																														(
																																														(obj_t)
																																														BgL_arg2016z00_2199);
																																													BgL_valz00_2070
																																														=
																																														BgL_valz00_7680;
																																													goto
																																														BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00;
																																												}
																																											}
																																										else
																																											{	/* Ast/let.scm 346 */
																																												if (BGl_isazf3zf3zz__objectz00(BgL_valz00_2070, BGl_boxzd2setz12zc0zzast_nodez00))
																																													{	/* Ast/let.scm 351 */
																																														bool_t
																																															BgL_test4200z00_7684;
																																														{	/* Ast/let.scm 351 */
																																															BgL_varz00_bglt
																																																BgL_arg2020z00_2204;
																																															BgL_arg2020z00_2204
																																																=
																																																(
																																																((BgL_boxzd2setz12zc0_bglt) COBJECT(((BgL_boxzd2setz12zc0_bglt) BgL_valz00_2070)))->BgL_varz00);
																																															BgL_test4200z00_7684
																																																=
																																																BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
																																																(
																																																((obj_t) BgL_arg2020z00_2204), BgL_varsz00_2071);
																																														}
																																														if (BgL_test4200z00_7684)
																																															{	/* Ast/let.scm 352 */
																																																BgL_nodez00_bglt
																																																	BgL_arg2018z00_2203;
																																																BgL_arg2018z00_2203
																																																	=
																																																	(
																																																	((BgL_boxzd2setz12zc0_bglt) COBJECT(((BgL_boxzd2setz12zc0_bglt) BgL_valz00_2070)))->BgL_valuez00);
																																																{
																																																	obj_t
																																																		BgL_valz00_7691;
																																																	BgL_valz00_7691
																																																		=
																																																		(
																																																		(obj_t)
																																																		BgL_arg2018z00_2203);
																																																	BgL_valz00_2070
																																																		=
																																																		BgL_valz00_7691;
																																																	goto
																																																		BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00;
																																																}
																																															}
																																														else
																																															{	/* Ast/let.scm 351 */
																																																return
																																																	(
																																																	(bool_t)
																																																	0);
																																															}
																																													}
																																												else
																																													{	/* Ast/let.scm 349 */
																																														return
																																															(
																																															(bool_t)
																																															0);
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



/* safe-let-optim?~0 */
	bool_t BGl_safezd2letzd2optimzf3ze70z14zzast_letz00(obj_t BgL_varsz00_6256,
		BgL_letzd2varzd2_bglt BgL_nodez00_2219)
	{
		{	/* Ast/let.scm 371 */
			if (NULLP(
					(((BgL_letzd2varzd2_bglt) COBJECT(BgL_nodez00_2219))->
						BgL_bindingsz00)))
				{	/* Ast/let.scm 363 */
					return ((bool_t) 1);
				}
			else
				{	/* Ast/let.scm 363 */
					if (NULLP(CDR(
								(((BgL_letzd2varzd2_bglt) COBJECT(BgL_nodez00_2219))->
									BgL_bindingsz00))))
						{	/* Ast/let.scm 366 */
							obj_t BgL_arg2036z00_2227;

							{	/* Ast/let.scm 366 */
								obj_t BgL_pairz00_4876;

								BgL_pairz00_4876 =
									(((BgL_letzd2varzd2_bglt) COBJECT(BgL_nodez00_2219))->
									BgL_bindingsz00);
								BgL_arg2036z00_2227 = CDR(CAR(BgL_pairz00_4876));
							}
							return
								BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
								(BgL_arg2036z00_2227, BgL_varsz00_6256);
						}
					else
						{	/* Ast/let.scm 368 */
							obj_t BgL_g1454z00_2229;

							BgL_g1454z00_2229 =
								(((BgL_letzd2varzd2_bglt) COBJECT(BgL_nodez00_2219))->
								BgL_bindingsz00);
							{
								obj_t BgL_l1452z00_2231;

								BgL_l1452z00_2231 = BgL_g1454z00_2229;
							BgL_zc3z04anonymousza32038ze3z87_2232:
								if (NULLP(BgL_l1452z00_2231))
									{	/* Ast/let.scm 368 */
										return ((bool_t) 1);
									}
								else
									{	/* Ast/let.scm 368 */
										bool_t BgL_test4204z00_7707;

										{	/* Ast/let.scm 369 */
											obj_t BgL_bz00_2237;

											BgL_bz00_2237 = CAR(((obj_t) BgL_l1452z00_2231));
											if (
												((((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	CAR(
																		((obj_t) BgL_bz00_2237)))))->
														BgL_accessz00) == CNST_TABLE_REF(((long) 6))))
												{	/* Ast/let.scm 370 */
													obj_t BgL_arg2045z00_2241;

													BgL_arg2045z00_2241 = CDR(((obj_t) BgL_bz00_2237));
													BgL_test4204z00_7707 =
														BGl_safezd2reczd2valzd2optimzf3ze70zc6zzast_letz00
														(BgL_arg2045z00_2241, BgL_varsz00_6256);
												}
											else
												{	/* Ast/let.scm 369 */
													BgL_test4204z00_7707 = ((bool_t) 0);
												}
										}
										if (BgL_test4204z00_7707)
											{	/* Ast/let.scm 368 */
												obj_t BgL_arg2040z00_2236;

												BgL_arg2040z00_2236 = CDR(((obj_t) BgL_l1452z00_2231));
												{
													obj_t BgL_l1452z00_7722;

													BgL_l1452z00_7722 = BgL_arg2040z00_2236;
													BgL_l1452z00_2231 = BgL_l1452z00_7722;
													goto BgL_zc3z04anonymousza32038ze3z87_2232;
												}
											}
										else
											{	/* Ast/let.scm 368 */
												return ((bool_t) 0);
											}
									}
							}
						}
				}
		}

	}



/* let->labels */
	BgL_letzd2funzd2_bglt BGl_letzd2ze3labelsz31zzast_letz00(obj_t
		BgL_valuezd2bindingszd2_32, BgL_nodez00_bglt BgL_nodez00_33,
		obj_t BgL_sitez00_34)
	{
		{	/* Ast/let.scm 479 */
			{	/* Ast/let.scm 481 */
				obj_t BgL_oldzd2funszd2_2252;
				obj_t BgL_newzd2funszd2_2253;

				if (NULLP(BgL_valuezd2bindingszd2_32))
					{	/* Ast/let.scm 481 */
						BgL_oldzd2funszd2_2252 = BNIL;
					}
				else
					{	/* Ast/let.scm 481 */
						obj_t BgL_head1458z00_2290;

						{	/* Ast/let.scm 481 */
							obj_t BgL_arg2078z00_2302;

							BgL_arg2078z00_2302 = CAR(CAR(BgL_valuezd2bindingszd2_32));
							{	/* Ast/let.scm 481 */
								obj_t BgL_res3719z00_4979;

								BgL_res3719z00_4979 =
									MAKE_YOUNG_PAIR(BgL_arg2078z00_2302, BNIL);
								BgL_head1458z00_2290 = BgL_res3719z00_4979;
							}
						}
						{	/* Ast/let.scm 481 */
							obj_t BgL_g1461z00_2291;

							BgL_g1461z00_2291 = CDR(BgL_valuezd2bindingszd2_32);
							{
								obj_t BgL_l1456z00_2293;
								obj_t BgL_tail1459z00_2294;

								BgL_l1456z00_2293 = BgL_g1461z00_2291;
								BgL_tail1459z00_2294 = BgL_head1458z00_2290;
							BgL_zc3z04anonymousza32073ze3z87_2295:
								if (NULLP(BgL_l1456z00_2293))
									{	/* Ast/let.scm 481 */
										BgL_oldzd2funszd2_2252 = BgL_head1458z00_2290;
									}
								else
									{	/* Ast/let.scm 481 */
										obj_t BgL_newtail1460z00_2297;

										{	/* Ast/let.scm 481 */
											obj_t BgL_arg2076z00_2299;

											{	/* Ast/let.scm 481 */
												obj_t BgL_pairz00_4983;

												BgL_pairz00_4983 = CAR(((obj_t) BgL_l1456z00_2293));
												BgL_arg2076z00_2299 = CAR(BgL_pairz00_4983);
											}
											{	/* Ast/let.scm 481 */
												obj_t BgL_res3721z00_4984;

												BgL_res3721z00_4984 =
													MAKE_YOUNG_PAIR(BgL_arg2076z00_2299, BNIL);
												BgL_newtail1460z00_2297 = BgL_res3721z00_4984;
											}
										}
										SET_CDR(BgL_tail1459z00_2294, BgL_newtail1460z00_2297);
										{	/* Ast/let.scm 481 */
											obj_t BgL_arg2075z00_2298;

											BgL_arg2075z00_2298 = CDR(((obj_t) BgL_l1456z00_2293));
											{
												obj_t BgL_tail1459z00_7739;
												obj_t BgL_l1456z00_7738;

												BgL_l1456z00_7738 = BgL_arg2075z00_2298;
												BgL_tail1459z00_7739 = BgL_newtail1460z00_2297;
												BgL_tail1459z00_2294 = BgL_tail1459z00_7739;
												BgL_l1456z00_2293 = BgL_l1456z00_7738;
												goto BgL_zc3z04anonymousza32073ze3z87_2295;
											}
										}
									}
							}
						}
					}
				if (NULLP(BgL_valuezd2bindingszd2_32))
					{	/* Ast/let.scm 482 */
						BgL_newzd2funszd2_2253 = BNIL;
					}
				else
					{	/* Ast/let.scm 482 */
						obj_t BgL_head1464z00_2306;

						{	/* Ast/let.scm 482 */
							obj_t BgL_res3723z00_4988;

							BgL_res3723z00_4988 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							BgL_head1464z00_2306 = BgL_res3723z00_4988;
						}
						{
							obj_t BgL_l1462z00_2308;
							obj_t BgL_tail1465z00_2309;

							BgL_l1462z00_2308 = BgL_valuezd2bindingszd2_32;
							BgL_tail1465z00_2309 = BgL_head1464z00_2306;
						BgL_zc3z04anonymousza32081ze3z87_2310:
							if (NULLP(BgL_l1462z00_2308))
								{	/* Ast/let.scm 482 */
									BgL_newzd2funszd2_2253 = CDR(BgL_head1464z00_2306);
								}
							else
								{	/* Ast/let.scm 482 */
									obj_t BgL_newtail1466z00_2312;

									{	/* Ast/let.scm 482 */
										BgL_localz00_bglt BgL_arg2084z00_2314;

										{	/* Ast/let.scm 482 */
											obj_t BgL_bindingz00_2315;

											BgL_bindingz00_2315 = CAR(((obj_t) BgL_l1462z00_2308));
											{	/* Ast/let.scm 483 */
												obj_t BgL_ovarz00_2316;

												BgL_ovarz00_2316 = CAR(((obj_t) BgL_bindingz00_2315));
												{	/* Ast/let.scm 483 */
													obj_t BgL_valz00_2317;

													BgL_valz00_2317 = CDR(((obj_t) BgL_bindingz00_2315));
													{	/* Ast/let.scm 484 */
														obj_t BgL_auxz00_2318;

														{	/* Ast/let.scm 485 */
															obj_t BgL_pairz00_4995;

															BgL_pairz00_4995 =
																(((BgL_letzd2funzd2_bglt) COBJECT(
																		((BgL_letzd2funzd2_bglt)
																			BgL_valz00_2317)))->BgL_localsz00);
															BgL_auxz00_2318 = CAR(BgL_pairz00_4995);
														}
														{	/* Ast/let.scm 485 */
															obj_t BgL_idz00_2319;

															if (
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					BgL_ovarz00_2316))))->BgL_userzf3zf3))
																{	/* Ast/let.scm 486 */
																	BgL_idz00_2319 =
																		(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_localz00_bglt)
																						BgL_ovarz00_2316))))->BgL_idz00);
																}
															else
																{	/* Ast/let.scm 486 */
																	BgL_idz00_2319 =
																		(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_localz00_bglt)
																						BgL_auxz00_2318))))->BgL_idz00);
																}
															{	/* Ast/let.scm 486 */
																BgL_localz00_bglt BgL_newz00_2320;

																{	/* Ast/let.scm 489 */
																	BgL_typez00_bglt BgL_arg2088z00_2325;

																	BgL_arg2088z00_2325 =
																		(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_localz00_bglt)
																						BgL_auxz00_2318))))->BgL_typez00);
																	BgL_newz00_2320 =
																		BGl_makezd2localzd2svarz00zzast_localz00
																		(BgL_idz00_2319, BgL_arg2088z00_2325);
																}
																{	/* Ast/let.scm 489 */

																	{	/* Ast/let.scm 490 */
																		BgL_valuez00_bglt BgL_arg2085z00_2321;

																		BgL_arg2085z00_2321 =
																			(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_localz00_bglt)
																							BgL_auxz00_2318))))->
																			BgL_valuez00);
																		((((BgL_variablez00_bglt)
																					COBJECT(((BgL_variablez00_bglt)
																							BgL_newz00_2320)))->
																				BgL_valuez00) =
																			((BgL_valuez00_bglt) BgL_arg2085z00_2321),
																			BUNSPEC);
																	}
																	{	/* Ast/let.scm 491 */
																		bool_t BgL_arg2086z00_2322;

																		{	/* Ast/let.scm 491 */
																			bool_t BgL__ortest_1179z00_2323;

																			BgL__ortest_1179z00_2323 =
																				(((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							((BgL_localz00_bglt)
																								BgL_auxz00_2318))))->
																				BgL_userzf3zf3);
																			if (BgL__ortest_1179z00_2323)
																				{	/* Ast/let.scm 491 */
																					BgL_arg2086z00_2322 =
																						BgL__ortest_1179z00_2323;
																				}
																			else
																				{	/* Ast/let.scm 491 */
																					BgL_arg2086z00_2322 =
																						(((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									((BgL_localz00_bglt)
																										BgL_ovarz00_2316))))->
																						BgL_userzf3zf3);
																				}
																		}
																		((((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							BgL_newz00_2320)))->
																				BgL_userzf3zf3) =
																			((bool_t) BgL_arg2086z00_2322), BUNSPEC);
																	}
																	{	/* Ast/let.scm 493 */
																		obj_t BgL_arg2087z00_2324;

																		BgL_arg2087z00_2324 =
																			(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_localz00_bglt)
																							BgL_auxz00_2318))))->BgL_namez00);
																		((((BgL_variablez00_bglt)
																					COBJECT(((BgL_variablez00_bglt)
																							BgL_newz00_2320)))->BgL_namez00) =
																			((obj_t) BgL_arg2087z00_2324), BUNSPEC);
																	}
																	BgL_arg2084z00_2314 = BgL_newz00_2320;
																}
															}
														}
													}
												}
											}
										}
										{	/* Ast/let.scm 482 */
											obj_t BgL_res3725z00_5009;

											BgL_res3725z00_5009 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg2084z00_2314), BNIL);
											BgL_newtail1466z00_2312 = BgL_res3725z00_5009;
										}
									}
									SET_CDR(BgL_tail1465z00_2309, BgL_newtail1466z00_2312);
									{	/* Ast/let.scm 482 */
										obj_t BgL_arg2083z00_2313;

										BgL_arg2083z00_2313 = CDR(((obj_t) BgL_l1462z00_2308));
										{
											obj_t BgL_tail1465z00_7794;
											obj_t BgL_l1462z00_7793;

											BgL_l1462z00_7793 = BgL_arg2083z00_2313;
											BgL_tail1465z00_7794 = BgL_newtail1466z00_2312;
											BgL_tail1465z00_2309 = BgL_tail1465z00_7794;
											BgL_l1462z00_2308 = BgL_l1462z00_7793;
											goto BgL_zc3z04anonymousza32081ze3z87_2310;
										}
									}
								}
						}
					}
				{
					obj_t BgL_vbindingsz00_2255;
					obj_t BgL_nvarsz00_2256;

					BgL_vbindingsz00_2255 = BgL_valuezd2bindingszd2_32;
					BgL_nvarsz00_2256 = BgL_newzd2funszd2_2253;
				BgL_zc3z04anonymousza32051ze3z87_2257:
					if (NULLP(BgL_vbindingsz00_2255))
						{	/* Ast/let.scm 501 */
							BgL_nodez00_bglt BgL_bodyz00_2259;

							BgL_bodyz00_2259 =
								BGl_substitutez12z12zzast_substitutez00(BgL_oldzd2funszd2_2252,
								BgL_newzd2funszd2_2253, BgL_nodez00_33, BgL_sitez00_34);
							{	/* Ast/let.scm 501 */
								obj_t BgL_funsz00_2260;

								BgL_funsz00_2260 = bgl_reverse_bang(BgL_newzd2funszd2_2253);
								{	/* Ast/let.scm 502 */
									obj_t BgL_locz00_2261;

									{	/* Ast/let.scm 503 */
										bool_t BgL_test4213z00_7799;

										if (NULLP(BgL_funsz00_2260))
											{	/* Ast/let.scm 503 */
												BgL_test4213z00_7799 = ((bool_t) 0);
											}
										else
											{	/* Ast/let.scm 504 */
												BgL_valuez00_bglt BgL_arg2062z00_2273;

												BgL_arg2062z00_2273 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt)
																	CAR(BgL_funsz00_2260)))))->BgL_valuez00);
												{	/* Ast/let.scm 504 */
													bool_t BgL_res3728z00_5016;

													BgL_res3728z00_5016 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_arg2062z00_2273),
														BGl_sfunz00zzast_varz00);
													BgL_test4213z00_7799 = BgL_res3728z00_5016;
												}
											}
										if (BgL_test4213z00_7799)
											{	/* Ast/let.scm 503 */
												BgL_locz00_2261 =
													(((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt)
																(((BgL_sfunz00_bglt) COBJECT(
																			((BgL_sfunz00_bglt)
																				(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								((BgL_localz00_bglt)
																									CAR(BgL_funsz00_2260)))))->
																					BgL_valuez00))))->BgL_bodyz00))))->
													BgL_locz00);
											}
										else
											{	/* Ast/let.scm 503 */
												BgL_locz00_2261 =
													(((BgL_nodez00_bglt) COBJECT(BgL_nodez00_33))->
													BgL_locz00);
											}
									}
									{	/* Ast/let.scm 503 */

										{	/* Ast/let.scm 507 */
											BgL_letzd2funzd2_bglt BgL_new1181z00_2262;

											{	/* Ast/let.scm 508 */
												BgL_letzd2funzd2_bglt BgL_new1180z00_2263;

												BgL_new1180z00_2263 =
													((BgL_letzd2funzd2_bglt)
													BOBJECT(GC_MALLOC(sizeof(struct
																BgL_letzd2funzd2_bgl))));
												{	/* Ast/let.scm 508 */
													long BgL_arg2053z00_2264;

													{	/* Ast/let.scm 508 */
														long BgL_res3729z00_5023;

														BgL_res3729z00_5023 =
															BGL_CLASS_INDEX(BGl_letzd2funzd2zzast_nodez00);
														BgL_arg2053z00_2264 = BgL_res3729z00_5023;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1180z00_2263),
														BgL_arg2053z00_2264);
												}
												{	/* Ast/let.scm 508 */
													BgL_objectz00_bglt BgL_tmpz00_7821;

													BgL_tmpz00_7821 =
														((BgL_objectz00_bglt) BgL_new1180z00_2263);
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7821, BFALSE);
												}
												((BgL_objectz00_bglt) BgL_new1180z00_2263);
												BgL_new1181z00_2262 = BgL_new1180z00_2263;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1181z00_2262)))->
													BgL_locz00) = ((obj_t) BgL_locz00_2261), BUNSPEC);
											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_new1181z00_2262)))->BgL_typez00) =
												((BgL_typez00_bglt) (((BgL_nodez00_bglt)
															COBJECT(BgL_nodez00_33))->BgL_typez00)), BUNSPEC);
											((((BgL_nodezf2effectzf2_bglt)
														COBJECT(((BgL_nodezf2effectzf2_bglt)
																BgL_new1181z00_2262)))->BgL_sidezd2effectzd2) =
												((obj_t) BUNSPEC), BUNSPEC);
											((((BgL_nodezf2effectzf2_bglt)
														COBJECT(((BgL_nodezf2effectzf2_bglt)
																BgL_new1181z00_2262)))->BgL_keyz00) =
												((obj_t) BINT(((long) -1))), BUNSPEC);
											((((BgL_letzd2funzd2_bglt) COBJECT(BgL_new1181z00_2262))->
													BgL_localsz00) = ((obj_t) BgL_funsz00_2260), BUNSPEC);
											((((BgL_letzd2funzd2_bglt) COBJECT(BgL_new1181z00_2262))->
													BgL_bodyz00) =
												((BgL_nodez00_bglt) BgL_bodyz00_2259), BUNSPEC);
											return BgL_new1181z00_2262;
										}
									}
								}
							}
						}
					else
						{	/* Ast/let.scm 513 */
							obj_t BgL_bindingz00_2275;

							BgL_bindingz00_2275 = CAR(((obj_t) BgL_vbindingsz00_2255));
							{	/* Ast/let.scm 513 */
								obj_t BgL_nvarz00_2276;

								BgL_nvarz00_2276 = CAR(((obj_t) BgL_nvarsz00_2256));
								{	/* Ast/let.scm 514 */
									BgL_valuez00_bglt BgL_sfunz00_2277;

									BgL_sfunz00_2277 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_nvarz00_2276))))->
										BgL_valuez00);
									{	/* Ast/let.scm 515 */
										obj_t BgL_bodyz00_2278;

										BgL_bodyz00_2278 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_sfunz00_2277)))->BgL_bodyz00);
										{	/* Ast/let.scm 516 */
											obj_t BgL_valz00_2279;

											BgL_valz00_2279 = CDR(((obj_t) BgL_bindingz00_2275));
											{	/* Ast/let.scm 517 */
												obj_t BgL_auxz00_2280;

												{	/* Ast/let.scm 518 */
													obj_t BgL_pairz00_5034;

													BgL_pairz00_5034 =
														(((BgL_letzd2funzd2_bglt) COBJECT(
																((BgL_letzd2funzd2_bglt) BgL_valz00_2279)))->
														BgL_localsz00);
													BgL_auxz00_2280 = CAR(BgL_pairz00_5034);
												}
												{	/* Ast/let.scm 518 */

													{	/* Ast/let.scm 520 */
														BgL_nodez00_bglt BgL_arg2065z00_2281;

														{	/* Ast/let.scm 520 */
															obj_t BgL_arg2066z00_2282;
															obj_t BgL_arg2068z00_2283;

															BgL_arg2066z00_2282 =
																MAKE_YOUNG_PAIR(BgL_auxz00_2280,
																BgL_oldzd2funszd2_2252);
															BgL_arg2068z00_2283 =
																MAKE_YOUNG_PAIR(BgL_nvarz00_2276,
																BgL_newzd2funszd2_2253);
															BgL_arg2065z00_2281 =
																BGl_substitutez12z12zzast_substitutez00
																(BgL_arg2066z00_2282, BgL_arg2068z00_2283,
																((BgL_nodez00_bglt) BgL_bodyz00_2278),
																CNST_TABLE_REF(((long) 1)));
														}
														((((BgL_sfunz00_bglt) COBJECT(
																		((BgL_sfunz00_bglt) BgL_sfunz00_2277)))->
																BgL_bodyz00) =
															((obj_t) ((obj_t) BgL_arg2065z00_2281)), BUNSPEC);
													}
													{	/* Ast/let.scm 525 */
														obj_t BgL_arg2069z00_2284;
														obj_t BgL_arg2070z00_2285;

														BgL_arg2069z00_2284 =
															CDR(((obj_t) BgL_vbindingsz00_2255));
														BgL_arg2070z00_2285 =
															CDR(((obj_t) BgL_nvarsz00_2256));
														{
															obj_t BgL_nvarsz00_7864;
															obj_t BgL_vbindingsz00_7863;

															BgL_vbindingsz00_7863 = BgL_arg2069z00_2284;
															BgL_nvarsz00_7864 = BgL_arg2070z00_2285;
															BgL_nvarsz00_2256 = BgL_nvarsz00_7864;
															BgL_vbindingsz00_2255 = BgL_vbindingsz00_7863;
															goto BgL_zc3z04anonymousza32051ze3z87_2257;
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



/* letrec*->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt BGl_letrecza2zd2ze3nodez93zzast_letz00(obj_t
		BgL_sexpz00_35, obj_t BgL_stackz00_36, obj_t BgL_locz00_37,
		obj_t BgL_sitez00_38)
	{
		{	/* Ast/let.scm 548 */
			{	/* Ast/let.scm 551 */
				obj_t BgL_stage1z00_6178;
				obj_t BgL_stage2z00_6177;
				obj_t BgL_stage3z00_6175;
				obj_t BgL_stage4z00_6173;
				obj_t BgL_stage5z00_6172;
				obj_t BgL_stage7z00_6171;

				{
					int BgL_tmpz00_7865;

					BgL_tmpz00_7865 = (int) (((long) 8));
					BgL_stage1z00_6178 =
						MAKE_L_PROCEDURE(BGl_z62stage1z62zzast_letz00, BgL_tmpz00_7865);
				}
				{
					int BgL_tmpz00_7868;

					BgL_tmpz00_7868 = (int) (((long) 7));
					BgL_stage2z00_6177 = MAKE_EL_PROCEDURE(BgL_tmpz00_7868);
				}
				{
					int BgL_tmpz00_7871;

					BgL_tmpz00_7871 = (int) (((long) 6));
					BgL_stage3z00_6175 =
						MAKE_L_PROCEDURE(BGl_z62stage3z62zzast_letz00, BgL_tmpz00_7871);
				}
				{
					int BgL_tmpz00_7874;

					BgL_tmpz00_7874 = (int) (((long) 5));
					BgL_stage4z00_6173 =
						MAKE_L_PROCEDURE(BGl_z62stage4z62zzast_letz00, BgL_tmpz00_7874);
				}
				{
					int BgL_tmpz00_7877;

					BgL_tmpz00_7877 = (int) (((long) 4));
					BgL_stage5z00_6172 = MAKE_EL_PROCEDURE(BgL_tmpz00_7877);
				}
				{
					int BgL_tmpz00_7880;

					BgL_tmpz00_7880 = (int) (((long) 3));
					BgL_stage7z00_6171 = MAKE_EL_PROCEDURE(BgL_tmpz00_7880);
				}
				PROCEDURE_L_SET(BgL_stage1z00_6178,
					(int) (((long) 0)), BgL_stage7z00_6171);
				PROCEDURE_L_SET(BgL_stage1z00_6178,
					(int) (((long) 1)), BgL_stage5z00_6172);
				PROCEDURE_L_SET(BgL_stage1z00_6178,
					(int) (((long) 2)), BgL_stage4z00_6173);
				PROCEDURE_L_SET(BgL_stage1z00_6178,
					(int) (((long) 3)), BgL_stage3z00_6175);
				PROCEDURE_L_SET(BgL_stage1z00_6178,
					(int) (((long) 4)), BgL_stackz00_36);
				PROCEDURE_L_SET(BgL_stage1z00_6178, (int) (((long) 5)), BgL_locz00_37);
				PROCEDURE_L_SET(BgL_stage1z00_6178, (int) (((long) 6)), BgL_sitez00_38);
				PROCEDURE_L_SET(BgL_stage1z00_6178,
					(int) (((long) 7)), BgL_stage2z00_6177);
				PROCEDURE_EL_SET(BgL_stage2z00_6177,
					(int) (((long) 0)), BgL_stage7z00_6171);
				PROCEDURE_EL_SET(BgL_stage2z00_6177,
					(int) (((long) 1)), BgL_stackz00_36);
				PROCEDURE_EL_SET(BgL_stage2z00_6177, (int) (((long) 2)), BgL_locz00_37);
				PROCEDURE_EL_SET(BgL_stage2z00_6177,
					(int) (((long) 3)), BgL_sitez00_38);
				PROCEDURE_EL_SET(BgL_stage2z00_6177,
					(int) (((long) 4)), BgL_stage5z00_6172);
				PROCEDURE_EL_SET(BgL_stage2z00_6177,
					(int) (((long) 5)), BgL_stage4z00_6173);
				PROCEDURE_EL_SET(BgL_stage2z00_6177,
					(int) (((long) 6)), BgL_stage3z00_6175);
				PROCEDURE_L_SET(BgL_stage3z00_6175,
					(int) (((long) 0)), BgL_stage7z00_6171);
				PROCEDURE_L_SET(BgL_stage3z00_6175,
					(int) (((long) 1)), BgL_stackz00_36);
				PROCEDURE_L_SET(BgL_stage3z00_6175, (int) (((long) 2)), BgL_locz00_37);
				PROCEDURE_L_SET(BgL_stage3z00_6175, (int) (((long) 3)), BgL_sitez00_38);
				PROCEDURE_L_SET(BgL_stage3z00_6175,
					(int) (((long) 4)), BgL_stage5z00_6172);
				PROCEDURE_L_SET(BgL_stage3z00_6175,
					(int) (((long) 5)), BgL_stage4z00_6173);
				PROCEDURE_L_SET(BgL_stage4z00_6173,
					(int) (((long) 0)), BgL_stage7z00_6171);
				PROCEDURE_L_SET(BgL_stage4z00_6173,
					(int) (((long) 1)), BgL_stackz00_36);
				PROCEDURE_L_SET(BgL_stage4z00_6173, (int) (((long) 2)), BgL_locz00_37);
				PROCEDURE_L_SET(BgL_stage4z00_6173, (int) (((long) 3)), BgL_sitez00_38);
				PROCEDURE_L_SET(BgL_stage4z00_6173,
					(int) (((long) 4)), BgL_stage5z00_6172);
				PROCEDURE_EL_SET(BgL_stage5z00_6172,
					(int) (((long) 0)), BgL_stage7z00_6171);
				PROCEDURE_EL_SET(BgL_stage5z00_6172,
					(int) (((long) 1)), BgL_stackz00_36);
				PROCEDURE_EL_SET(BgL_stage5z00_6172, (int) (((long) 2)), BgL_locz00_37);
				PROCEDURE_EL_SET(BgL_stage5z00_6172,
					(int) (((long) 3)), BgL_sitez00_38);
				PROCEDURE_EL_SET(BgL_stage7z00_6171, (int) (((long) 0)), BgL_locz00_37);
				PROCEDURE_EL_SET(BgL_stage7z00_6171,
					(int) (((long) 1)), BgL_stackz00_36);
				PROCEDURE_EL_SET(BgL_stage7z00_6171,
					(int) (((long) 2)), BgL_sitez00_38);
				{
					obj_t BgL_bz00_2434;
					obj_t BgL_vz00_2435;
					obj_t BgL_varsz00_2436;
					obj_t BgL_ebindingsz00_4014;
					obj_t BgL_bodyz00_4015;
					obj_t BgL_bindingsz00_4049;
					obj_t BgL_bodyz00_4050;
					obj_t BgL_expz00_4100;

					{
						obj_t BgL_bodyz00_2366;
						obj_t BgL_bindingsz00_2368;
						obj_t BgL_bindingz00_2369;
						obj_t BgL_bodyz00_2370;
						obj_t BgL_bindingsz00_2372;
						obj_t BgL_bodyz00_2373;

						if (PAIRP(BgL_sexpz00_35))
							{	/* Ast/let.scm 1134 */
								obj_t BgL_cdrzd22809zd2_2378;

								BgL_cdrzd22809zd2_2378 = CDR(BgL_sexpz00_35);
								if ((CAR(BgL_sexpz00_35) == CNST_TABLE_REF(((long) 4))))
									{	/* Ast/let.scm 1134 */
										if (PAIRP(BgL_cdrzd22809zd2_2378))
											{	/* Ast/let.scm 1134 */
												if (NULLP(CAR(BgL_cdrzd22809zd2_2378)))
													{	/* Ast/let.scm 1134 */
														BgL_bodyz00_2366 = CDR(BgL_cdrzd22809zd2_2378);
														{	/* Ast/let.scm 1138 */
															obj_t BgL_arg2111z00_2403;

															{	/* Ast/let.scm 1138 */
																obj_t BgL_arg2112z00_2404;

																{	/* Ast/let.scm 1138 */
																	obj_t BgL_arg2114z00_2405;

																	BgL_arg2114z00_2405 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_bodyz00_2366, BNIL);
																	BgL_arg2112z00_2404 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
																		BgL_arg2114z00_2405);
																}
																BgL_arg2111z00_2403 =
																	BGl_epairifyzd2propagatezd2locz00zztools_miscz00
																	(BgL_arg2112z00_2404, BgL_locz00_37);
															}
															return
																BGl_sexpzd2ze3nodez31zzast_sexpz00
																(BgL_arg2111z00_2403, BgL_stackz00_36,
																BgL_locz00_37, BgL_sitez00_38);
														}
													}
												else
													{	/* Ast/let.scm 1134 */
														obj_t BgL_carzd22825zd2_2386;

														BgL_carzd22825zd2_2386 =
															CAR(((obj_t) BgL_cdrzd22809zd2_2378));
														if (PAIRP(BgL_carzd22825zd2_2386))
															{	/* Ast/let.scm 1134 */
																if (NULLP(CDR(BgL_carzd22825zd2_2386)))
																	{	/* Ast/let.scm 1134 */
																		obj_t BgL_arg2102z00_2390;
																		obj_t BgL_arg2103z00_2391;

																		BgL_arg2102z00_2390 =
																			CAR(BgL_carzd22825zd2_2386);
																		BgL_arg2103z00_2391 =
																			CDR(((obj_t) BgL_cdrzd22809zd2_2378));
																		BgL_bindingsz00_2368 =
																			BgL_carzd22825zd2_2386;
																		BgL_bindingz00_2369 = BgL_arg2102z00_2390;
																		BgL_bodyz00_2370 = BgL_arg2103z00_2391;
																		{	/* Ast/let.scm 1142 */
																			obj_t BgL_arg2115z00_2406;

																			{	/* Ast/let.scm 1142 */
																				obj_t BgL_arg2116z00_2407;

																				{	/* Ast/let.scm 1142 */
																					obj_t BgL_arg2117z00_2408;

																					BgL_arg2117z00_2408 =
																						MAKE_YOUNG_PAIR
																						(BgL_bindingsz00_2368,
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_bodyz00_2370, BNIL));
																					BgL_arg2116z00_2407 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 10)),
																						BgL_arg2117z00_2408);
																				}
																				BgL_arg2115z00_2406 =
																					BGl_epairifyzd2propagatezd2locz00zztools_miscz00
																					(BgL_arg2116z00_2407, BgL_locz00_37);
																			}
																			return
																				BGl_sexpzd2ze3nodez31zzast_sexpz00
																				(BgL_arg2115z00_2406, BgL_stackz00_36,
																				BgL_locz00_37, BgL_sitez00_38);
																		}
																	}
																else
																	{	/* Ast/let.scm 1134 */
																		obj_t BgL_cdrzd22841zd2_2392;

																		BgL_cdrzd22841zd2_2392 =
																			CDR(BgL_sexpz00_35);
																		{	/* Ast/let.scm 1134 */
																			obj_t BgL_carzd22844zd2_2393;

																			BgL_carzd22844zd2_2393 =
																				CAR(((obj_t) BgL_cdrzd22841zd2_2392));
																			if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd22844zd2_2393))
																				{	/* Ast/let.scm 1134 */
																					obj_t BgL_arg2105z00_2395;

																					BgL_arg2105z00_2395 =
																						CDR(
																						((obj_t) BgL_cdrzd22841zd2_2392));
																					BgL_bindingsz00_2372 =
																						BgL_carzd22844zd2_2393;
																					BgL_bodyz00_2373 =
																						BgL_arg2105z00_2395;
																				BgL_tagzd22801zd2_2374:
																					{	/* Ast/let.scm 1145 */
																						bool_t BgL_test4222z00_7990;

																						{
																							obj_t BgL_l1614z00_2421;

																							BgL_l1614z00_2421 =
																								BgL_bindingsz00_2372;
																						BgL_zc3z04anonymousza32124ze3z87_2422:
																							if (NULLP
																								(BgL_l1614z00_2421))
																								{	/* Ast/let.scm 1145 */
																									BgL_test4222z00_7990 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Ast/let.scm 1145 */
																									bool_t BgL_test4224z00_7993;

																									{	/* Ast/let.scm 1145 */
																										obj_t BgL_arg2126z00_2427;

																										BgL_arg2126z00_2427 =
																											CAR(
																											((obj_t)
																												BgL_l1614z00_2421));
																										BgL_expz00_4100 =
																											BgL_arg2126z00_2427;
																										if (PAIRP(BgL_expz00_4100))
																											{	/* Ast/let.scm 1131 */
																												obj_t
																													BgL_cdrzd22636zd2_4111;
																												BgL_cdrzd22636zd2_4111 =
																													CDR(BgL_expz00_4100);
																												if (PAIRP
																													(BgL_cdrzd22636zd2_4111))
																													{	/* Ast/let.scm 1131 */
																														obj_t
																															BgL_carzd22637zd2_4113;
																														BgL_carzd22637zd2_4113
																															=
																															CAR
																															(BgL_cdrzd22636zd2_4111);
																														if (PAIRP
																															(BgL_carzd22637zd2_4113))
																															{	/* Ast/let.scm 1131 */
																																if (
																																	(CAR
																																		(BgL_carzd22637zd2_4113)
																																		==
																																		CNST_TABLE_REF
																																		(((long)
																																				7))))
																																	{	/* Ast/let.scm 1131 */
																																		bool_t
																																			BgL_test4229z00_8008;
																																		{	/* Ast/let.scm 1131 */
																																			obj_t
																																				BgL_tmpz00_8009;
																																			BgL_tmpz00_8009
																																				=
																																				CDR
																																				(BgL_carzd22637zd2_4113);
																																			BgL_test4229z00_8008
																																				=
																																				PAIRP
																																				(BgL_tmpz00_8009);
																																		}
																																		if (BgL_test4229z00_8008)
																																			{	/* Ast/let.scm 1131 */
																																				BgL_test4224z00_7993
																																					=
																																					NULLP
																																					(CDR
																																					(BgL_cdrzd22636zd2_4111));
																																			}
																																		else
																																			{	/* Ast/let.scm 1131 */
																																				BgL_test4224z00_7993
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																	}
																																else
																																	{	/* Ast/let.scm 1131 */
																																		obj_t
																																			BgL_carzd22663zd2_4124;
																																		BgL_carzd22663zd2_4124
																																			=
																																			CAR((
																																				(obj_t)
																																				BgL_cdrzd22636zd2_4111));
																																		{	/* Ast/let.scm 1131 */
																																			obj_t
																																				BgL_cdrzd22668zd2_4125;
																																			BgL_cdrzd22668zd2_4125
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_carzd22663zd2_4124));
																																			if ((CAR((
																																							(obj_t)
																																							BgL_carzd22663zd2_4124))
																																					==
																																					CNST_TABLE_REF
																																					(((long) 8))))
																																				{	/* Ast/let.scm 1131 */
																																					if (PAIRP(BgL_cdrzd22668zd2_4125))
																																						{	/* Ast/let.scm 1131 */
																																							obj_t
																																								BgL_carzd22671zd2_4129;
																																							obj_t
																																								BgL_cdrzd22672zd2_4130;
																																							BgL_carzd22671zd2_4129
																																								=
																																								CAR
																																								(BgL_cdrzd22668zd2_4125);
																																							BgL_cdrzd22672zd2_4130
																																								=
																																								CDR
																																								(BgL_cdrzd22668zd2_4125);
																																							if (PAIRP(BgL_carzd22671zd2_4129))
																																								{	/* Ast/let.scm 1131 */
																																									obj_t
																																										BgL_carzd22674zd2_4132;
																																									BgL_carzd22674zd2_4132
																																										=
																																										CAR
																																										(BgL_carzd22671zd2_4129);
																																									if (PAIRP(BgL_carzd22674zd2_4132))
																																										{	/* Ast/let.scm 1131 */
																																											if (NULLP(CDR(BgL_carzd22671zd2_4129)))
																																												{	/* Ast/let.scm 1131 */
																																													if (PAIRP(BgL_cdrzd22672zd2_4130))
																																														{	/* Ast/let.scm 1131 */
																																															obj_t
																																																BgL_carzd22681zd2_4137;
																																															BgL_carzd22681zd2_4137
																																																=
																																																CAR
																																																(BgL_cdrzd22672zd2_4130);
																																															if (SYMBOLP(BgL_carzd22681zd2_4137))
																																																{	/* Ast/let.scm 1131 */
																																																	if (NULLP(CDR(BgL_cdrzd22672zd2_4130)))
																																																		{	/* Ast/let.scm 1131 */
																																																			if (NULLP(CDR(((obj_t) BgL_cdrzd22636zd2_4111))))
																																																				{	/* Ast/let.scm 1131 */
																																																					obj_t
																																																						BgL_arg3387z00_4143;
																																																					BgL_arg3387z00_4143
																																																						=
																																																						CAR
																																																						(BgL_carzd22674zd2_4132);
																																																					BgL_test4224z00_7993
																																																						=
																																																						(BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																																						(BgL_arg3387z00_4143,
																																																							BFALSE)
																																																						==
																																																						BgL_carzd22681zd2_4137);
																																																				}
																																																			else
																																																				{	/* Ast/let.scm 1131 */
																																																					BgL_test4224z00_7993
																																																						=
																																																						(
																																																						(bool_t)
																																																						0);
																																																				}
																																																		}
																																																	else
																																																		{	/* Ast/let.scm 1131 */
																																																			obj_t
																																																				BgL_cdrzd22690zd2_4145;
																																																			BgL_cdrzd22690zd2_4145
																																																				=
																																																				CDR
																																																				(BgL_expz00_4100);
																																																			{	/* Ast/let.scm 1131 */
																																																				obj_t
																																																					BgL_carzd22695zd2_4146;
																																																				{	/* Ast/let.scm 1131 */
																																																					obj_t
																																																						BgL_pairz00_5983;
																																																					BgL_pairz00_5983
																																																						=
																																																						CAR
																																																						(
																																																						((obj_t) BgL_cdrzd22690zd2_4145));
																																																					BgL_carzd22695zd2_4146
																																																						=
																																																						CAR
																																																						(BgL_pairz00_5983);
																																																				}
																																																				if (SYMBOLP(BgL_carzd22695zd2_4146))
																																																					{	/* Ast/let.scm 1131 */
																																																						if (NULLP(CDR(((obj_t) BgL_cdrzd22690zd2_4145))))
																																																							{	/* Ast/let.scm 1129 */
																																																								obj_t
																																																									BgL_arg3438z00_5987;
																																																								BgL_arg3438z00_5987
																																																									=
																																																									BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																																									(BgL_carzd22695zd2_4146,
																																																									BFALSE);
																																																								BgL_test4224z00_7993
																																																									=
																																																									(BgL_arg3438z00_5987
																																																									==
																																																									CNST_TABLE_REF
																																																									(((long) 7)));
																																																							}
																																																						else
																																																							{	/* Ast/let.scm 1131 */
																																																								BgL_test4224z00_7993
																																																									=
																																																									(
																																																									(bool_t)
																																																									0);
																																																							}
																																																					}
																																																				else
																																																					{	/* Ast/let.scm 1131 */
																																																						BgL_test4224z00_7993
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																			}
																																																		}
																																																}
																																															else
																																																{	/* Ast/let.scm 1131 */
																																																	obj_t
																																																		BgL_cdrzd22702zd2_4153;
																																																	BgL_cdrzd22702zd2_4153
																																																		=
																																																		CDR
																																																		(BgL_expz00_4100);
																																																	{	/* Ast/let.scm 1131 */
																																																		obj_t
																																																			BgL_carzd22707zd2_4154;
																																																		{	/* Ast/let.scm 1131 */
																																																			obj_t
																																																				BgL_pairz00_5990;
																																																			BgL_pairz00_5990
																																																				=
																																																				CAR
																																																				(
																																																				((obj_t) BgL_cdrzd22702zd2_4153));
																																																			BgL_carzd22707zd2_4154
																																																				=
																																																				CAR
																																																				(BgL_pairz00_5990);
																																																		}
																																																		if (SYMBOLP(BgL_carzd22707zd2_4154))
																																																			{	/* Ast/let.scm 1131 */
																																																				if (NULLP(CDR(((obj_t) BgL_cdrzd22702zd2_4153))))
																																																					{	/* Ast/let.scm 1129 */
																																																						obj_t
																																																							BgL_arg3438z00_5994;
																																																						BgL_arg3438z00_5994
																																																							=
																																																							BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																																							(BgL_carzd22707zd2_4154,
																																																							BFALSE);
																																																						BgL_test4224z00_7993
																																																							=
																																																							(BgL_arg3438z00_5994
																																																							==
																																																							CNST_TABLE_REF
																																																							(((long) 7)));
																																																					}
																																																				else
																																																					{	/* Ast/let.scm 1131 */
																																																						BgL_test4224z00_7993
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																			}
																																																		else
																																																			{	/* Ast/let.scm 1131 */
																																																				BgL_test4224z00_7993
																																																					=
																																																					(
																																																					(bool_t)
																																																					0);
																																																			}
																																																	}
																																																}
																																														}
																																													else
																																														{	/* Ast/let.scm 1131 */
																																															obj_t
																																																BgL_cdrzd22714zd2_4160;
																																															BgL_cdrzd22714zd2_4160
																																																=
																																																CDR
																																																(BgL_expz00_4100);
																																															{	/* Ast/let.scm 1131 */
																																																obj_t
																																																	BgL_carzd22719zd2_4161;
																																																{	/* Ast/let.scm 1131 */
																																																	obj_t
																																																		BgL_pairz00_5997;
																																																	BgL_pairz00_5997
																																																		=
																																																		CAR
																																																		(
																																																		((obj_t) BgL_cdrzd22714zd2_4160));
																																																	BgL_carzd22719zd2_4161
																																																		=
																																																		CAR
																																																		(BgL_pairz00_5997);
																																																}
																																																if (SYMBOLP(BgL_carzd22719zd2_4161))
																																																	{	/* Ast/let.scm 1131 */
																																																		if (NULLP(CDR(((obj_t) BgL_cdrzd22714zd2_4160))))
																																																			{	/* Ast/let.scm 1129 */
																																																				obj_t
																																																					BgL_arg3438z00_6001;
																																																				BgL_arg3438z00_6001
																																																					=
																																																					BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																																					(BgL_carzd22719zd2_4161,
																																																					BFALSE);
																																																				BgL_test4224z00_7993
																																																					=
																																																					(BgL_arg3438z00_6001
																																																					==
																																																					CNST_TABLE_REF
																																																					(((long) 7)));
																																																			}
																																																		else
																																																			{	/* Ast/let.scm 1131 */
																																																				BgL_test4224z00_7993
																																																					=
																																																					(
																																																					(bool_t)
																																																					0);
																																																			}
																																																	}
																																																else
																																																	{	/* Ast/let.scm 1131 */
																																																		BgL_test4224z00_7993
																																																			=
																																																			(
																																																			(bool_t)
																																																			0);
																																																	}
																																															}
																																														}
																																												}
																																											else
																																												{	/* Ast/let.scm 1131 */
																																													obj_t
																																														BgL_cdrzd22726zd2_4167;
																																													BgL_cdrzd22726zd2_4167
																																														=
																																														CDR
																																														(BgL_expz00_4100);
																																													{	/* Ast/let.scm 1131 */
																																														obj_t
																																															BgL_carzd22731zd2_4168;
																																														{	/* Ast/let.scm 1131 */
																																															obj_t
																																																BgL_pairz00_6004;
																																															BgL_pairz00_6004
																																																=
																																																CAR
																																																(
																																																((obj_t) BgL_cdrzd22726zd2_4167));
																																															BgL_carzd22731zd2_4168
																																																=
																																																CAR
																																																(BgL_pairz00_6004);
																																														}
																																														if (SYMBOLP(BgL_carzd22731zd2_4168))
																																															{	/* Ast/let.scm 1131 */
																																																if (NULLP(CDR(((obj_t) BgL_cdrzd22726zd2_4167))))
																																																	{	/* Ast/let.scm 1129 */
																																																		obj_t
																																																			BgL_arg3438z00_6008;
																																																		BgL_arg3438z00_6008
																																																			=
																																																			BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																																			(BgL_carzd22731zd2_4168,
																																																			BFALSE);
																																																		BgL_test4224z00_7993
																																																			=
																																																			(BgL_arg3438z00_6008
																																																			==
																																																			CNST_TABLE_REF
																																																			(((long) 7)));
																																																	}
																																																else
																																																	{	/* Ast/let.scm 1131 */
																																																		BgL_test4224z00_7993
																																																			=
																																																			(
																																																			(bool_t)
																																																			0);
																																																	}
																																															}
																																														else
																																															{	/* Ast/let.scm 1131 */
																																																BgL_test4224z00_7993
																																																	=
																																																	(
																																																	(bool_t)
																																																	0);
																																															}
																																													}
																																												}
																																										}
																																									else
																																										{	/* Ast/let.scm 1131 */
																																											obj_t
																																												BgL_cdrzd22740zd2_4175;
																																											BgL_cdrzd22740zd2_4175
																																												=
																																												CDR
																																												(BgL_expz00_4100);
																																											{	/* Ast/let.scm 1131 */
																																												obj_t
																																													BgL_carzd22745zd2_4176;
																																												{	/* Ast/let.scm 1131 */
																																													obj_t
																																														BgL_pairz00_6011;
																																													BgL_pairz00_6011
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_cdrzd22740zd2_4175));
																																													BgL_carzd22745zd2_4176
																																														=
																																														CAR
																																														(BgL_pairz00_6011);
																																												}
																																												if (SYMBOLP(BgL_carzd22745zd2_4176))
																																													{	/* Ast/let.scm 1131 */
																																														if (NULLP(CDR(((obj_t) BgL_cdrzd22740zd2_4175))))
																																															{	/* Ast/let.scm 1129 */
																																																obj_t
																																																	BgL_arg3438z00_6015;
																																																BgL_arg3438z00_6015
																																																	=
																																																	BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																																	(BgL_carzd22745zd2_4176,
																																																	BFALSE);
																																																BgL_test4224z00_7993
																																																	=
																																																	(BgL_arg3438z00_6015
																																																	==
																																																	CNST_TABLE_REF
																																																	(((long) 7)));
																																															}
																																														else
																																															{	/* Ast/let.scm 1131 */
																																																BgL_test4224z00_7993
																																																	=
																																																	(
																																																	(bool_t)
																																																	0);
																																															}
																																													}
																																												else
																																													{	/* Ast/let.scm 1131 */
																																														BgL_test4224z00_7993
																																															=
																																															(
																																															(bool_t)
																																															0);
																																													}
																																											}
																																										}
																																								}
																																							else
																																								{	/* Ast/let.scm 1131 */
																																									obj_t
																																										BgL_cdrzd22754zd2_4182;
																																									BgL_cdrzd22754zd2_4182
																																										=
																																										CDR
																																										(BgL_expz00_4100);
																																									{	/* Ast/let.scm 1131 */
																																										obj_t
																																											BgL_carzd22759zd2_4183;
																																										{	/* Ast/let.scm 1131 */
																																											obj_t
																																												BgL_pairz00_6018;
																																											BgL_pairz00_6018
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd22754zd2_4182));
																																											BgL_carzd22759zd2_4183
																																												=
																																												CAR
																																												(BgL_pairz00_6018);
																																										}
																																										if (SYMBOLP(BgL_carzd22759zd2_4183))
																																											{	/* Ast/let.scm 1131 */
																																												if (NULLP(CDR(((obj_t) BgL_cdrzd22754zd2_4182))))
																																													{	/* Ast/let.scm 1129 */
																																														obj_t
																																															BgL_arg3438z00_6022;
																																														BgL_arg3438z00_6022
																																															=
																																															BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																															(BgL_carzd22759zd2_4183,
																																															BFALSE);
																																														BgL_test4224z00_7993
																																															=
																																															(BgL_arg3438z00_6022
																																															==
																																															CNST_TABLE_REF
																																															(((long) 7)));
																																													}
																																												else
																																													{	/* Ast/let.scm 1131 */
																																														BgL_test4224z00_7993
																																															=
																																															(
																																															(bool_t)
																																															0);
																																													}
																																											}
																																										else
																																											{	/* Ast/let.scm 1131 */
																																												BgL_test4224z00_7993
																																													=
																																													(
																																													(bool_t)
																																													0);
																																											}
																																									}
																																								}
																																						}
																																					else
																																						{	/* Ast/let.scm 1131 */
																																							BgL_test4224z00_7993
																																								=
																																								(
																																								(bool_t)
																																								0);
																																						}
																																				}
																																			else
																																				{	/* Ast/let.scm 1131 */
																																					obj_t
																																						BgL_cdrzd22770zd2_4189;
																																					BgL_cdrzd22770zd2_4189
																																						=
																																						CDR
																																						(BgL_expz00_4100);
																																					{	/* Ast/let.scm 1131 */
																																						obj_t
																																							BgL_carzd22772zd2_4190;
																																						BgL_carzd22772zd2_4190
																																							=
																																							CAR
																																							(((obj_t) BgL_cdrzd22770zd2_4189));
																																						{	/* Ast/let.scm 1131 */
																																							obj_t
																																								BgL_carzd22775zd2_4191;
																																							BgL_carzd22775zd2_4191
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_carzd22772zd2_4190));
																																							if (SYMBOLP(BgL_carzd22775zd2_4191))
																																								{	/* Ast/let.scm 1131 */
																																									bool_t
																																										BgL_test4252z00_8135;
																																									{	/* Ast/let.scm 1131 */
																																										obj_t
																																											BgL_tmpz00_8136;
																																										BgL_tmpz00_8136
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_carzd22772zd2_4190));
																																										BgL_test4252z00_8135
																																											=
																																											PAIRP
																																											(BgL_tmpz00_8136);
																																									}
																																									if (BgL_test4252z00_8135)
																																										{	/* Ast/let.scm 1131 */
																																											if (NULLP(CDR(((obj_t) BgL_cdrzd22770zd2_4189))))
																																												{	/* Ast/let.scm 1129 */
																																													obj_t
																																														BgL_arg3438z00_6031;
																																													BgL_arg3438z00_6031
																																														=
																																														BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																														(BgL_carzd22775zd2_4191,
																																														BFALSE);
																																													BgL_test4224z00_7993
																																														=
																																														(BgL_arg3438z00_6031
																																														==
																																														CNST_TABLE_REF
																																														(((long) 7)));
																																												}
																																											else
																																												{	/* Ast/let.scm 1131 */
																																													BgL_test4224z00_7993
																																														=
																																														(
																																														(bool_t)
																																														0);
																																												}
																																										}
																																									else
																																										{	/* Ast/let.scm 1131 */
																																											BgL_test4224z00_7993
																																												=
																																												(
																																												(bool_t)
																																												0);
																																										}
																																								}
																																							else
																																								{	/* Ast/let.scm 1131 */
																																									BgL_test4224z00_7993
																																										=
																																										(
																																										(bool_t)
																																										0);
																																								}
																																						}
																																					}
																																				}
																																		}
																																	}
																															}
																														else
																															{	/* Ast/let.scm 1131 */
																																BgL_test4224z00_7993
																																	=
																																	((bool_t) 0);
																															}
																													}
																												else
																													{	/* Ast/let.scm 1131 */
																														BgL_test4224z00_7993
																															= ((bool_t) 0);
																													}
																											}
																										else
																											{	/* Ast/let.scm 1131 */
																												BgL_test4224z00_7993 =
																													((bool_t) 0);
																											}
																									}
																									if (BgL_test4224z00_7993)
																										{	/* Ast/let.scm 1145 */
																											obj_t BgL_arg2125z00_2426;

																											BgL_arg2125z00_2426 =
																												CDR(
																												((obj_t)
																													BgL_l1614z00_2421));
																											{
																												obj_t BgL_l1614z00_8149;

																												BgL_l1614z00_8149 =
																													BgL_arg2125z00_2426;
																												BgL_l1614z00_2421 =
																													BgL_l1614z00_8149;
																												goto
																													BgL_zc3z04anonymousza32124ze3z87_2422;
																											}
																										}
																									else
																										{	/* Ast/let.scm 1145 */
																											BgL_test4222z00_7990 =
																												((bool_t) 0);
																										}
																								}
																						}
																						if (BgL_test4222z00_7990)
																							{	/* Ast/let.scm 1145 */
																								{	/* Ast/let.scm 1119 */
																									obj_t BgL_objz00_6036;

																									BgL_objz00_6036 =
																										CNST_TABLE_REF(((long) 10));
																									{	/* Ast/let.scm 1119 */
																										obj_t BgL_tmpz00_8151;

																										BgL_tmpz00_8151 =
																											((obj_t) BgL_sexpz00_35);
																										SET_CAR(BgL_tmpz00_8151,
																											BgL_objz00_6036);
																								}}
																								return
																									BGl_sexpzd2ze3nodez31zzast_sexpz00
																									(BgL_sexpz00_35,
																									BgL_stackz00_36,
																									BgL_locz00_37,
																									BgL_sitez00_38);
																							}
																						else
																							{	/* Ast/let.scm 1145 */
																								BgL_bindingsz00_4049 =
																									BgL_bindingsz00_2372;
																								BgL_bodyz00_4050 =
																									BgL_bodyz00_2373;
																								{	/* Ast/let.scm 1104 */
																									obj_t BgL_varsz00_4052;

																									if (NULLP
																										(BgL_bindingsz00_4049))
																										{	/* Ast/let.scm 1104 */
																											BgL_varsz00_4052 = BNIL;
																										}
																									else
																										{	/* Ast/let.scm 1104 */
																											obj_t
																												BgL_head1603z00_4083;
																											{	/* Ast/let.scm 1104 */
																												obj_t
																													BgL_res3967z00_5925;
																												BgL_res3967z00_5925 =
																													MAKE_YOUNG_PAIR(BNIL,
																													BNIL);
																												BgL_head1603z00_4083 =
																													BgL_res3967z00_5925;
																											}
																											{
																												obj_t BgL_l1601z00_4085;
																												obj_t
																													BgL_tail1604z00_4086;
																												BgL_l1601z00_4085 =
																													BgL_bindingsz00_4049;
																												BgL_tail1604z00_4086 =
																													BgL_head1603z00_4083;
																											BgL_zc3z04anonymousza33345ze3z87_4087:
																												if (NULLP
																													(BgL_l1601z00_4085))
																													{	/* Ast/let.scm 1104 */
																														BgL_varsz00_4052 =
																															CDR
																															(BgL_head1603z00_4083);
																													}
																												else
																													{	/* Ast/let.scm 1104 */
																														obj_t
																															BgL_newtail1605z00_4089;
																														{	/* Ast/let.scm 1104 */
																															obj_t
																																BgL_arg3353z00_4091;
																															{	/* Ast/let.scm 1104 */
																																obj_t
																																	BgL_bz00_4092;
																																BgL_bz00_4092 =
																																	CAR(((obj_t)
																																		BgL_l1601z00_4085));
																																{	/* Ast/let.scm 1104 */
																																	obj_t
																																		BgL_arg3354z00_4093;
																																	BgL_arg3354z00_4093
																																		=
																																		CAR(((obj_t)
																																			BgL_bz00_4092));
																																	BgL_arg3353z00_4091
																																		=
																																		BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																		(BgL_arg3354z00_4093,
																																		BgL_locz00_37);
																																}
																															}
																															{	/* Ast/let.scm 1104 */
																																obj_t
																																	BgL_res3969z00_5930;
																																BgL_res3969z00_5930
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg3353z00_4091,
																																	BNIL);
																																BgL_newtail1605z00_4089
																																	=
																																	BgL_res3969z00_5930;
																															}
																														}
																														SET_CDR
																															(BgL_tail1604z00_4086,
																															BgL_newtail1605z00_4089);
																														{	/* Ast/let.scm 1104 */
																															obj_t
																																BgL_arg3347z00_4090;
																															BgL_arg3347z00_4090
																																=
																																CDR(((obj_t)
																																	BgL_l1601z00_4085));
																															{
																																obj_t
																																	BgL_tail1604z00_8171;
																																obj_t
																																	BgL_l1601z00_8170;
																																BgL_l1601z00_8170
																																	=
																																	BgL_arg3347z00_4090;
																																BgL_tail1604z00_8171
																																	=
																																	BgL_newtail1605z00_4089;
																																BgL_tail1604z00_4086
																																	=
																																	BgL_tail1604z00_8171;
																																BgL_l1601z00_4085
																																	=
																																	BgL_l1601z00_8170;
																																goto
																																	BgL_zc3z04anonymousza33345ze3z87_4087;
																															}
																														}
																													}
																											}
																										}
																									{	/* Ast/let.scm 1104 */
																										obj_t BgL_ebindingsz00_4053;

																										if (NULLP
																											(BgL_bindingsz00_4049))
																											{	/* Ast/let.scm 1105 */
																												BgL_ebindingsz00_4053 =
																													BNIL;
																											}
																										else
																											{	/* Ast/let.scm 1105 */
																												obj_t
																													BgL_head1608z00_4067;
																												{	/* Ast/let.scm 1105 */
																													obj_t
																														BgL_res3971z00_5934;
																													BgL_res3971z00_5934 =
																														MAKE_YOUNG_PAIR
																														(BNIL, BNIL);
																													BgL_head1608z00_4067 =
																														BgL_res3971z00_5934;
																												}
																												{
																													obj_t
																														BgL_ll1606z00_4069;
																													obj_t
																														BgL_ll1607z00_4070;
																													obj_t
																														BgL_tail1609z00_4071;
																													BgL_ll1606z00_4069 =
																														BgL_bindingsz00_4049;
																													BgL_ll1607z00_4070 =
																														BgL_varsz00_4052;
																													BgL_tail1609z00_4071 =
																														BgL_head1608z00_4067;
																												BgL_zc3z04anonymousza33339ze3z87_4072:
																													if (NULLP
																														(BgL_ll1606z00_4069))
																														{	/* Ast/let.scm 1105 */
																															BgL_ebindingsz00_4053
																																=
																																CDR
																																(BgL_head1608z00_4067);
																														}
																													else
																														{	/* Ast/let.scm 1105 */
																															obj_t
																																BgL_newtail1610z00_4074;
																															{	/* Ast/let.scm 1105 */
																																obj_t
																																	BgL_arg3343z00_4077;
																																{	/* Ast/let.scm 1105 */
																																	obj_t
																																		BgL_bz00_4078;
																																	obj_t
																																		BgL_vz00_4079;
																																	BgL_bz00_4078
																																		=
																																		CAR(((obj_t)
																																			BgL_ll1606z00_4069));
																																	BgL_vz00_4079
																																		=
																																		CAR(((obj_t)
																																			BgL_ll1607z00_4070));
																																	BgL_bz00_2434
																																		=
																																		BgL_bz00_4078;
																																	BgL_vz00_2435
																																		=
																																		BgL_vz00_4079;
																																	BgL_varsz00_2436
																																		=
																																		BgL_varsz00_4052;
																																	{	/* Ast/let.scm 556 */
																																		obj_t
																																			BgL_arg2130z00_2438;
																																		obj_t
																																			BgL_arg2131z00_2439;
																																		{	/* Ast/let.scm 556 */
																																			obj_t
																																				BgL_arg2136z00_2444;
																																			{	/* Ast/let.scm 556 */
																																				obj_t
																																					BgL_pairz00_5041;
																																				BgL_pairz00_5041
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_bz00_2434));
																																				BgL_arg2136z00_2444
																																					=
																																					CAR
																																					(BgL_pairz00_5041);
																																			}
																																			BgL_arg2130z00_2438
																																				=
																																				BGl_loopze71ze7zzast_letz00
																																				(BgL_varsz00_2436,
																																				BgL_arg2136z00_2444,
																																				BNIL,
																																				BNIL);
																																		}
																																		{	/* Ast/let.scm 557 */
																																			obj_t
																																				BgL_arg2137z00_2445;
																																			{	/* Ast/let.scm 557 */
																																				obj_t
																																					BgL_pairz00_5045;
																																				BgL_pairz00_5045
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_bz00_2434));
																																				BgL_arg2137z00_2445
																																					=
																																					CAR
																																					(BgL_pairz00_5045);
																																			}
																																			BgL_arg2131z00_2439
																																				=
																																				BGl_loopze72ze7zzast_letz00
																																				(BgL_vz00_2435,
																																				BgL_varsz00_2436,
																																				BgL_arg2137z00_2445,
																																				BNIL,
																																				BNIL);
																																		}
																																		{	/* Ast/let.scm 555 */
																																			obj_t
																																				BgL_list2132z00_2440;
																																			{	/* Ast/let.scm 555 */
																																				obj_t
																																					BgL_arg2133z00_2441;
																																				{	/* Ast/let.scm 555 */
																																					obj_t
																																						BgL_arg2134z00_2442;
																																					{	/* Ast/let.scm 555 */
																																						obj_t
																																							BgL_arg2135z00_2443;
																																						BgL_arg2135z00_2443
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg2131z00_2439,
																																							BNIL);
																																						BgL_arg2134z00_2442
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg2130z00_2438,
																																							BgL_arg2135z00_2443);
																																					}
																																					BgL_arg2133z00_2441
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_vz00_2435,
																																						BgL_arg2134z00_2442);
																																				}
																																				BgL_list2132z00_2440
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_bz00_2434,
																																					BgL_arg2133z00_2441);
																																			}
																																			BgL_arg3343z00_4077
																																				=
																																				BgL_list2132z00_2440;
																																		}
																																	}
																																}
																																{	/* Ast/let.scm 1105 */
																																	obj_t
																																		BgL_res3973z00_5939;
																																	BgL_res3973z00_5939
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg3343z00_4077,
																																		BNIL);
																																	BgL_newtail1610z00_4074
																																		=
																																		BgL_res3973z00_5939;
																																}
																															}
																															SET_CDR
																																(BgL_tail1609z00_4071,
																																BgL_newtail1610z00_4074);
																															{	/* Ast/let.scm 1105 */
																																obj_t
																																	BgL_arg3341z00_4075;
																																obj_t
																																	BgL_arg3342z00_4076;
																																BgL_arg3341z00_4075
																																	=
																																	CDR(((obj_t)
																																		BgL_ll1606z00_4069));
																																BgL_arg3342z00_4076
																																	=
																																	CDR(((obj_t)
																																		BgL_ll1607z00_4070));
																																{
																																	obj_t
																																		BgL_tail1609z00_8202;
																																	obj_t
																																		BgL_ll1607z00_8201;
																																	obj_t
																																		BgL_ll1606z00_8200;
																																	BgL_ll1606z00_8200
																																		=
																																		BgL_arg3341z00_4075;
																																	BgL_ll1607z00_8201
																																		=
																																		BgL_arg3342z00_4076;
																																	BgL_tail1609z00_8202
																																		=
																																		BgL_newtail1610z00_4074;
																																	BgL_tail1609z00_4071
																																		=
																																		BgL_tail1609z00_8202;
																																	BgL_ll1607z00_4070
																																		=
																																		BgL_ll1607z00_8201;
																																	BgL_ll1606z00_4069
																																		=
																																		BgL_ll1606z00_8200;
																																	goto
																																		BgL_zc3z04anonymousza33339ze3z87_4072;
																																}
																															}
																														}
																												}
																											}
																										{	/* Ast/let.scm 1105 */

																											{	/* Ast/let.scm 1116 */
																												obj_t
																													BgL_arg3333z00_4061;
																												{	/* Ast/let.scm 1116 */
																													obj_t
																														BgL_arg3336z00_4062;
																													{	/* Ast/let.scm 1116 */
																														obj_t
																															BgL_arg3337z00_4063;
																														BgL_arg3337z00_4063
																															=
																															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																															(BgL_bodyz00_4050,
																															BNIL);
																														BgL_arg3336z00_4062
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 9)),
																															BgL_arg3337z00_4063);
																													}
																													BgL_arg3333z00_4061 =
																														BGl_epairifyzd2propagatezd2locz00zztools_miscz00
																														(BgL_arg3336z00_4062,
																														BgL_locz00_37);
																												}
																												BgL_ebindingsz00_4014 =
																													BgL_ebindingsz00_4053;
																												BgL_bodyz00_4015 =
																													BgL_arg3333z00_4061;
																												return
																													BGl_z62splitzd2headzd2letrecz62zzast_letz00
																													(BgL_sitez00_38,
																													BgL_locz00_37,
																													BgL_stackz00_36,
																													BgL_ebindingsz00_4014,
																													BgL_bodyz00_4015,
																													BGl_proc4046z00zzast_letz00,
																													BgL_stage1z00_6178);
																											}
																										}
																									}
																								}
																							}
																					}
																				}
																			else
																				{	/* Ast/let.scm 1134 */
																				BgL_tagzd22802zd2_2375:
																					return
																						BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																						(BGl_string4047z00zzast_letz00,
																						BGl_expzd2envzd2zz__r4_numbers_6_5z00,
																						BGl_findzd2locationzf2locz20zztools_locationz00
																						(BGl_expzd2envzd2zz__r4_numbers_6_5z00,
																							BgL_locz00_37));
																				}
																		}
																	}
															}
														else
															{	/* Ast/let.scm 1134 */
																obj_t BgL_cdrzd22856zd2_2397;

																BgL_cdrzd22856zd2_2397 = CDR(BgL_sexpz00_35);
																{	/* Ast/let.scm 1134 */
																	obj_t BgL_carzd22860zd2_2398;

																	BgL_carzd22860zd2_2398 =
																		CAR(((obj_t) BgL_cdrzd22856zd2_2397));
																	if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd22860zd2_2398))
																		{	/* Ast/let.scm 1134 */
																			obj_t BgL_arg2108z00_2400;

																			BgL_arg2108z00_2400 =
																				CDR(((obj_t) BgL_cdrzd22856zd2_2397));
																			{
																				obj_t BgL_bodyz00_8218;
																				obj_t BgL_bindingsz00_8217;

																				BgL_bindingsz00_8217 =
																					BgL_carzd22860zd2_2398;
																				BgL_bodyz00_8218 = BgL_arg2108z00_2400;
																				BgL_bodyz00_2373 = BgL_bodyz00_8218;
																				BgL_bindingsz00_2372 =
																					BgL_bindingsz00_8217;
																				goto BgL_tagzd22801zd2_2374;
																			}
																		}
																	else
																		{	/* Ast/let.scm 1134 */
																			goto BgL_tagzd22802zd2_2375;
																		}
																}
															}
													}
											}
										else
											{	/* Ast/let.scm 1134 */
												goto BgL_tagzd22802zd2_2375;
											}
									}
								else
									{	/* Ast/let.scm 1134 */
										goto BgL_tagzd22802zd2_2375;
									}
							}
						else
							{	/* Ast/let.scm 1134 */
								goto BgL_tagzd22802zd2_2375;
							}
					}
				}
			}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zzast_letz00(obj_t BgL_varsz00_6253,
		obj_t BgL_sexpz00_2899, obj_t BgL_resz00_2900, obj_t BgL_envz00_2901)
	{
		{	/* Ast/let.scm 770 */
		BGl_loopze71ze7zzast_letz00:
			{

				if (SYMBOLP(BgL_sexpz00_2899))
					{	/* Ast/let.scm 770 */
						if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_sexpz00_2899,
									BgL_varsz00_6253)))
							{	/* Ast/let.scm 776 */
								if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
										(BgL_sexpz00_2899, BgL_envz00_2901)))
									{	/* Ast/let.scm 777 */
										return BgL_resz00_2900;
									}
								else
									{	/* Ast/let.scm 777 */
										if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(BgL_sexpz00_2899, BgL_resz00_2900)))
											{	/* Ast/let.scm 778 */
												return BgL_resz00_2900;
											}
										else
											{	/* Ast/let.scm 778 */
												return
													MAKE_YOUNG_PAIR(BgL_sexpz00_2899, BgL_resz00_2900);
											}
									}
							}
						else
							{	/* Ast/let.scm 776 */
								return BgL_resz00_2900;
							}
					}
				else
					{	/* Ast/let.scm 770 */
						if (PAIRP(BgL_sexpz00_2899))
							{	/* Ast/let.scm 770 */
								obj_t BgL_cdrzd2498zd2_2932;

								BgL_cdrzd2498zd2_2932 = CDR(BgL_sexpz00_2899);
								if ((CAR(BgL_sexpz00_2899) == CNST_TABLE_REF(((long) 11))))
									{	/* Ast/let.scm 770 */
										if (PAIRP(BgL_cdrzd2498zd2_2932))
											{	/* Ast/let.scm 770 */
												if (NULLP(CDR(BgL_cdrzd2498zd2_2932)))
													{	/* Ast/let.scm 770 */
														return BgL_resz00_2900;
													}
												else
													{	/* Ast/let.scm 770 */
													BgL_tagzd2480zd2_2927:
														{	/* Ast/let.scm 797 */
															obj_t BgL_arg2606z00_3088;
															obj_t BgL_arg2607z00_3089;

															BgL_arg2606z00_3088 =
																CAR(((obj_t) BgL_sexpz00_2899));
															{	/* Ast/let.scm 797 */
																obj_t BgL_arg2608z00_3090;

																BgL_arg2608z00_3090 =
																	CDR(((obj_t) BgL_sexpz00_2899));
																BgL_arg2607z00_3089 =
																	BGl_loopze71ze7zzast_letz00(BgL_varsz00_6253,
																	BgL_arg2608z00_3090, BgL_resz00_2900,
																	BgL_envz00_2901);
															}
															{
																obj_t BgL_resz00_8249;
																obj_t BgL_sexpz00_8248;

																BgL_sexpz00_8248 = BgL_arg2606z00_3088;
																BgL_resz00_8249 = BgL_arg2607z00_3089;
																BgL_resz00_2900 = BgL_resz00_8249;
																BgL_sexpz00_2899 = BgL_sexpz00_8248;
																goto BGl_loopze71ze7zzast_letz00;
															}
														}
													}
											}
										else
											{	/* Ast/let.scm 770 */
												goto BgL_tagzd2480zd2_2927;
											}
									}
								else
									{	/* Ast/let.scm 770 */
										if ((CAR(BgL_sexpz00_2899) == CNST_TABLE_REF(((long) 0))))
											{	/* Ast/let.scm 770 */
												if (PAIRP(BgL_cdrzd2498zd2_2932))
													{	/* Ast/let.scm 770 */
														obj_t BgL_carzd2594zd2_2943;
														obj_t BgL_cdrzd2595zd2_2944;

														BgL_carzd2594zd2_2943 = CAR(BgL_cdrzd2498zd2_2932);
														BgL_cdrzd2595zd2_2944 = CDR(BgL_cdrzd2498zd2_2932);
														if (PAIRP(BgL_carzd2594zd2_2943))
															{	/* Ast/let.scm 770 */
																obj_t BgL_carzd2598zd2_2946;

																BgL_carzd2598zd2_2946 =
																	CAR(BgL_carzd2594zd2_2943);
																if (PAIRP(BgL_carzd2598zd2_2946))
																	{	/* Ast/let.scm 770 */
																		obj_t BgL_cdrzd2603zd2_2948;

																		BgL_cdrzd2603zd2_2948 =
																			CDR(BgL_carzd2598zd2_2946);
																		if (PAIRP(BgL_cdrzd2603zd2_2948))
																			{	/* Ast/let.scm 770 */
																				if (NULLP(CDR(BgL_cdrzd2603zd2_2948)))
																					{	/* Ast/let.scm 770 */
																						if (NULLP(CDR
																								(BgL_carzd2594zd2_2943)))
																							{	/* Ast/let.scm 770 */
																								if (PAIRP
																									(BgL_cdrzd2595zd2_2944))
																									{	/* Ast/let.scm 770 */
																										if (NULLP(CDR
																												(BgL_cdrzd2595zd2_2944)))
																											{	/* Ast/let.scm 770 */
																												obj_t
																													BgL_arg2469z00_2957;
																												obj_t
																													BgL_arg2470z00_2958;
																												obj_t
																													BgL_arg2471z00_2959;
																												BgL_arg2469z00_2957 =
																													CAR
																													(BgL_carzd2598zd2_2946);
																												BgL_arg2470z00_2958 =
																													CAR
																													(BgL_cdrzd2603zd2_2948);
																												BgL_arg2471z00_2959 =
																													CAR
																													(BgL_cdrzd2595zd2_2944);
																												{	/* Ast/let.scm 784 */
																													obj_t
																														BgL_arg2588z00_5325;
																													obj_t
																														BgL_arg2589z00_5326;
																													BgL_arg2588z00_5325 =
																														BGl_loopze71ze7zzast_letz00
																														(BgL_varsz00_6253,
																														BgL_arg2470z00_2958,
																														BgL_resz00_2900,
																														BgL_envz00_2901);
																													BgL_arg2589z00_5326 =
																														MAKE_YOUNG_PAIR
																														(BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																														(BgL_arg2469z00_2957,
																															BFALSE),
																														BgL_envz00_2901);
																													{
																														obj_t
																															BgL_envz00_8285;
																														obj_t
																															BgL_resz00_8284;
																														obj_t
																															BgL_sexpz00_8283;
																														BgL_sexpz00_8283 =
																															BgL_arg2471z00_2959;
																														BgL_resz00_8284 =
																															BgL_arg2588z00_5325;
																														BgL_envz00_8285 =
																															BgL_arg2589z00_5326;
																														BgL_envz00_2901 =
																															BgL_envz00_8285;
																														BgL_resz00_2900 =
																															BgL_resz00_8284;
																														BgL_sexpz00_2899 =
																															BgL_sexpz00_8283;
																														goto
																															BGl_loopze71ze7zzast_letz00;
																													}
																												}
																											}
																										else
																											{	/* Ast/let.scm 770 */
																												goto
																													BgL_tagzd2480zd2_2927;
																											}
																									}
																								else
																									{	/* Ast/let.scm 770 */
																										goto BgL_tagzd2480zd2_2927;
																									}
																							}
																						else
																							{	/* Ast/let.scm 770 */
																								goto BgL_tagzd2480zd2_2927;
																							}
																					}
																				else
																					{	/* Ast/let.scm 770 */
																						goto BgL_tagzd2480zd2_2927;
																					}
																			}
																		else
																			{	/* Ast/let.scm 770 */
																				goto BgL_tagzd2480zd2_2927;
																			}
																	}
																else
																	{	/* Ast/let.scm 770 */
																		goto BgL_tagzd2480zd2_2927;
																	}
															}
														else
															{	/* Ast/let.scm 770 */
																goto BgL_tagzd2480zd2_2927;
															}
													}
												else
													{	/* Ast/let.scm 770 */
														goto BgL_tagzd2480zd2_2927;
													}
											}
										else
											{	/* Ast/let.scm 770 */
												obj_t BgL_cdrzd2878zd2_2963;

												BgL_cdrzd2878zd2_2963 = CDR(BgL_sexpz00_2899);
												if (
													(CAR(BgL_sexpz00_2899) ==
														CNST_TABLE_REF(((long) 12))))
													{	/* Ast/let.scm 770 */
														if (PAIRP(BgL_cdrzd2878zd2_2963))
															{	/* Ast/let.scm 770 */
																obj_t BgL_carzd2882zd2_2967;
																obj_t BgL_cdrzd2883zd2_2968;

																BgL_carzd2882zd2_2967 =
																	CAR(BgL_cdrzd2878zd2_2963);
																BgL_cdrzd2883zd2_2968 =
																	CDR(BgL_cdrzd2878zd2_2963);
																if (PAIRP(BgL_carzd2882zd2_2967))
																	{	/* Ast/let.scm 770 */
																		obj_t BgL_carzd2886zd2_2970;

																		BgL_carzd2886zd2_2970 =
																			CAR(BgL_carzd2882zd2_2967);
																		if (PAIRP(BgL_carzd2886zd2_2970))
																			{	/* Ast/let.scm 770 */
																				obj_t BgL_cdrzd2891zd2_2972;

																				BgL_cdrzd2891zd2_2972 =
																					CDR(BgL_carzd2886zd2_2970);
																				if (PAIRP(BgL_cdrzd2891zd2_2972))
																					{	/* Ast/let.scm 770 */
																						if (NULLP(CDR
																								(BgL_cdrzd2891zd2_2972)))
																							{	/* Ast/let.scm 770 */
																								if (NULLP(CDR
																										(BgL_carzd2882zd2_2967)))
																									{	/* Ast/let.scm 770 */
																										if (PAIRP
																											(BgL_cdrzd2883zd2_2968))
																											{	/* Ast/let.scm 770 */
																												if (NULLP(CDR
																														(BgL_cdrzd2883zd2_2968)))
																													{	/* Ast/let.scm 770 */
																														obj_t
																															BgL_arg2491z00_2981;
																														obj_t
																															BgL_arg2494z00_2982;
																														obj_t
																															BgL_arg2496z00_2983;
																														BgL_arg2491z00_2981
																															=
																															CAR
																															(BgL_carzd2886zd2_2970);
																														BgL_arg2494z00_2982
																															=
																															CAR
																															(BgL_cdrzd2891zd2_2972);
																														BgL_arg2496z00_2983
																															=
																															CAR
																															(BgL_cdrzd2883zd2_2968);
																														{	/* Ast/let.scm 786 */
																															obj_t
																																BgL_arg2592z00_5348;
																															obj_t
																																BgL_arg2594z00_5349;
																															BgL_arg2592z00_5348
																																=
																																BGl_loopze71ze7zzast_letz00
																																(BgL_varsz00_6253,
																																BgL_arg2494z00_2982,
																																BgL_resz00_2900,
																																BgL_envz00_2901);
																															BgL_arg2594z00_5349
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																(BgL_arg2491z00_2981,
																																	BFALSE),
																																BgL_envz00_2901);
																															{
																																obj_t
																																	BgL_envz00_8322;
																																obj_t
																																	BgL_resz00_8321;
																																obj_t
																																	BgL_sexpz00_8320;
																																BgL_sexpz00_8320
																																	=
																																	BgL_arg2496z00_2983;
																																BgL_resz00_8321
																																	=
																																	BgL_arg2592z00_5348;
																																BgL_envz00_8322
																																	=
																																	BgL_arg2594z00_5349;
																																BgL_envz00_2901
																																	=
																																	BgL_envz00_8322;
																																BgL_resz00_2900
																																	=
																																	BgL_resz00_8321;
																																BgL_sexpz00_2899
																																	=
																																	BgL_sexpz00_8320;
																																goto
																																	BGl_loopze71ze7zzast_letz00;
																															}
																														}
																													}
																												else
																													{	/* Ast/let.scm 770 */
																														goto
																															BgL_tagzd2480zd2_2927;
																													}
																											}
																										else
																											{	/* Ast/let.scm 770 */
																												goto
																													BgL_tagzd2480zd2_2927;
																											}
																									}
																								else
																									{	/* Ast/let.scm 770 */
																										goto BgL_tagzd2480zd2_2927;
																									}
																							}
																						else
																							{	/* Ast/let.scm 770 */
																								goto BgL_tagzd2480zd2_2927;
																							}
																					}
																				else
																					{	/* Ast/let.scm 770 */
																						goto BgL_tagzd2480zd2_2927;
																					}
																			}
																		else
																			{	/* Ast/let.scm 770 */
																				goto BgL_tagzd2480zd2_2927;
																			}
																	}
																else
																	{	/* Ast/let.scm 770 */
																		goto BgL_tagzd2480zd2_2927;
																	}
															}
														else
															{	/* Ast/let.scm 770 */
																goto BgL_tagzd2480zd2_2927;
															}
													}
												else
													{	/* Ast/let.scm 770 */
														if (
															(CAR(BgL_sexpz00_2899) ==
																CNST_TABLE_REF(((long) 10))))
															{	/* Ast/let.scm 770 */
																if (PAIRP(BgL_cdrzd2878zd2_2963))
																	{	/* Ast/let.scm 770 */
																		obj_t BgL_carzd21106zd2_2991;
																		obj_t BgL_cdrzd21107zd2_2992;

																		BgL_carzd21106zd2_2991 =
																			CAR(BgL_cdrzd2878zd2_2963);
																		BgL_cdrzd21107zd2_2992 =
																			CDR(BgL_cdrzd2878zd2_2963);
																		if (PAIRP(BgL_carzd21106zd2_2991))
																			{	/* Ast/let.scm 770 */
																				obj_t BgL_carzd21110zd2_2994;

																				BgL_carzd21110zd2_2994 =
																					CAR(BgL_carzd21106zd2_2991);
																				if (PAIRP(BgL_carzd21110zd2_2994))
																					{	/* Ast/let.scm 770 */
																						obj_t BgL_cdrzd21115zd2_2996;

																						BgL_cdrzd21115zd2_2996 =
																							CDR(BgL_carzd21110zd2_2994);
																						if (PAIRP(BgL_cdrzd21115zd2_2996))
																							{	/* Ast/let.scm 770 */
																								if (NULLP(CDR
																										(BgL_cdrzd21115zd2_2996)))
																									{	/* Ast/let.scm 770 */
																										if (NULLP(CDR
																												(BgL_carzd21106zd2_2991)))
																											{	/* Ast/let.scm 770 */
																												if (PAIRP
																													(BgL_cdrzd21107zd2_2992))
																													{	/* Ast/let.scm 770 */
																														if (NULLP(CDR
																																(BgL_cdrzd21107zd2_2992)))
																															{	/* Ast/let.scm 770 */
																																obj_t
																																	BgL_arg2518z00_3005;
																																obj_t
																																	BgL_arg2519z00_3006;
																																obj_t
																																	BgL_arg2520z00_3007;
																																BgL_arg2518z00_3005
																																	=
																																	CAR
																																	(BgL_carzd21110zd2_2994);
																																BgL_arg2519z00_3006
																																	=
																																	CAR
																																	(BgL_cdrzd21115zd2_2996);
																																BgL_arg2520z00_3007
																																	=
																																	CAR
																																	(BgL_cdrzd21107zd2_2992);
																																{	/* Ast/let.scm 788 */
																																	obj_t
																																		BgL_nenvz00_5371;
																																	BgL_nenvz00_5371
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																		(BgL_arg2518z00_3005,
																																			BFALSE),
																																		BgL_envz00_2901);
																																	{
																																		obj_t
																																			BgL_envz00_8358;
																																		obj_t
																																			BgL_resz00_8356;
																																		obj_t
																																			BgL_sexpz00_8355;
																																		BgL_sexpz00_8355
																																			=
																																			BgL_arg2520z00_3007;
																																		BgL_resz00_8356
																																			=
																																			BGl_loopze71ze7zzast_letz00
																																			(BgL_varsz00_6253,
																																			BgL_arg2519z00_3006,
																																			BgL_resz00_2900,
																																			BgL_nenvz00_5371);
																																		BgL_envz00_8358
																																			=
																																			BgL_nenvz00_5371;
																																		BgL_envz00_2901
																																			=
																																			BgL_envz00_8358;
																																		BgL_resz00_2900
																																			=
																																			BgL_resz00_8356;
																																		BgL_sexpz00_2899
																																			=
																																			BgL_sexpz00_8355;
																																		goto
																																			BGl_loopze71ze7zzast_letz00;
																																	}
																																}
																															}
																														else
																															{	/* Ast/let.scm 770 */
																																goto
																																	BgL_tagzd2480zd2_2927;
																															}
																													}
																												else
																													{	/* Ast/let.scm 770 */
																														goto
																															BgL_tagzd2480zd2_2927;
																													}
																											}
																										else
																											{	/* Ast/let.scm 770 */
																												goto
																													BgL_tagzd2480zd2_2927;
																											}
																									}
																								else
																									{	/* Ast/let.scm 770 */
																										goto BgL_tagzd2480zd2_2927;
																									}
																							}
																						else
																							{	/* Ast/let.scm 770 */
																								goto BgL_tagzd2480zd2_2927;
																							}
																					}
																				else
																					{	/* Ast/let.scm 770 */
																						goto BgL_tagzd2480zd2_2927;
																					}
																			}
																		else
																			{	/* Ast/let.scm 770 */
																				goto BgL_tagzd2480zd2_2927;
																			}
																	}
																else
																	{	/* Ast/let.scm 770 */
																		goto BgL_tagzd2480zd2_2927;
																	}
															}
														else
															{	/* Ast/let.scm 770 */
																obj_t BgL_cdrzd21262zd2_3011;

																BgL_cdrzd21262zd2_3011 = CDR(BgL_sexpz00_2899);
																if (
																	(CAR(BgL_sexpz00_2899) ==
																		CNST_TABLE_REF(((long) 4))))
																	{	/* Ast/let.scm 770 */
																		if (PAIRP(BgL_cdrzd21262zd2_3011))
																			{	/* Ast/let.scm 770 */
																				obj_t BgL_carzd21266zd2_3015;
																				obj_t BgL_cdrzd21267zd2_3016;

																				BgL_carzd21266zd2_3015 =
																					CAR(BgL_cdrzd21262zd2_3011);
																				BgL_cdrzd21267zd2_3016 =
																					CDR(BgL_cdrzd21262zd2_3011);
																				if (PAIRP(BgL_carzd21266zd2_3015))
																					{	/* Ast/let.scm 770 */
																						obj_t BgL_carzd21270zd2_3018;

																						BgL_carzd21270zd2_3018 =
																							CAR(BgL_carzd21266zd2_3015);
																						if (PAIRP(BgL_carzd21270zd2_3018))
																							{	/* Ast/let.scm 770 */
																								obj_t BgL_cdrzd21275zd2_3020;

																								BgL_cdrzd21275zd2_3020 =
																									CDR(BgL_carzd21270zd2_3018);
																								if (PAIRP
																									(BgL_cdrzd21275zd2_3020))
																									{	/* Ast/let.scm 770 */
																										if (NULLP(CDR
																												(BgL_cdrzd21275zd2_3020)))
																											{	/* Ast/let.scm 770 */
																												if (NULLP(CDR
																														(BgL_carzd21266zd2_3015)))
																													{	/* Ast/let.scm 770 */
																														if (PAIRP
																															(BgL_cdrzd21267zd2_3016))
																															{	/* Ast/let.scm 770 */
																																if (NULLP(CDR
																																		(BgL_cdrzd21267zd2_3016)))
																																	{	/* Ast/let.scm 770 */
																																		obj_t
																																			BgL_arg2541z00_3029;
																																		obj_t
																																			BgL_arg2542z00_3030;
																																		obj_t
																																			BgL_arg2544z00_3031;
																																		BgL_arg2541z00_3029
																																			=
																																			CAR
																																			(BgL_carzd21270zd2_3018);
																																		BgL_arg2542z00_3030
																																			=
																																			CAR
																																			(BgL_cdrzd21275zd2_3020);
																																		BgL_arg2544z00_3031
																																			=
																																			CAR
																																			(BgL_cdrzd21267zd2_3016);
																																		{	/* Ast/let.scm 791 */
																																			obj_t
																																				BgL_nenvz00_5394;
																																			BgL_nenvz00_5394
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																				(BgL_arg2541z00_3029,
																																					BFALSE),
																																				BgL_envz00_2901);
																																			{
																																				obj_t
																																					BgL_envz00_8395;
																																				obj_t
																																					BgL_resz00_8393;
																																				obj_t
																																					BgL_sexpz00_8392;
																																				BgL_sexpz00_8392
																																					=
																																					BgL_arg2544z00_3031;
																																				BgL_resz00_8393
																																					=
																																					BGl_loopze71ze7zzast_letz00
																																					(BgL_varsz00_6253,
																																					BgL_arg2542z00_3030,
																																					BgL_resz00_2900,
																																					BgL_nenvz00_5394);
																																				BgL_envz00_8395
																																					=
																																					BgL_nenvz00_5394;
																																				BgL_envz00_2901
																																					=
																																					BgL_envz00_8395;
																																				BgL_resz00_2900
																																					=
																																					BgL_resz00_8393;
																																				BgL_sexpz00_2899
																																					=
																																					BgL_sexpz00_8392;
																																				goto
																																					BGl_loopze71ze7zzast_letz00;
																																			}
																																		}
																																	}
																																else
																																	{	/* Ast/let.scm 770 */
																																		goto
																																			BgL_tagzd2480zd2_2927;
																																	}
																															}
																														else
																															{	/* Ast/let.scm 770 */
																																goto
																																	BgL_tagzd2480zd2_2927;
																															}
																													}
																												else
																													{	/* Ast/let.scm 770 */
																														goto
																															BgL_tagzd2480zd2_2927;
																													}
																											}
																										else
																											{	/* Ast/let.scm 770 */
																												goto
																													BgL_tagzd2480zd2_2927;
																											}
																									}
																								else
																									{	/* Ast/let.scm 770 */
																										goto BgL_tagzd2480zd2_2927;
																									}
																							}
																						else
																							{	/* Ast/let.scm 770 */
																								goto BgL_tagzd2480zd2_2927;
																							}
																					}
																				else
																					{	/* Ast/let.scm 770 */
																						goto BgL_tagzd2480zd2_2927;
																					}
																			}
																		else
																			{	/* Ast/let.scm 770 */
																				goto BgL_tagzd2480zd2_2927;
																			}
																	}
																else
																	{	/* Ast/let.scm 770 */
																		if (
																			(CAR(BgL_sexpz00_2899) ==
																				CNST_TABLE_REF(((long) 8))))
																			{	/* Ast/let.scm 770 */
																				if (PAIRP(BgL_cdrzd21262zd2_3011))
																					{	/* Ast/let.scm 770 */
																						obj_t BgL_carzd21363zd2_3039;
																						obj_t BgL_cdrzd21364zd2_3040;

																						BgL_carzd21363zd2_3039 =
																							CAR(BgL_cdrzd21262zd2_3011);
																						BgL_cdrzd21364zd2_3040 =
																							CDR(BgL_cdrzd21262zd2_3011);
																						if (PAIRP(BgL_carzd21363zd2_3039))
																							{	/* Ast/let.scm 770 */
																								obj_t BgL_carzd21368zd2_3042;

																								BgL_carzd21368zd2_3042 =
																									CAR(BgL_carzd21363zd2_3039);
																								if (PAIRP
																									(BgL_carzd21368zd2_3042))
																									{	/* Ast/let.scm 770 */
																										obj_t
																											BgL_cdrzd21374zd2_3044;
																										BgL_cdrzd21374zd2_3044 =
																											CDR
																											(BgL_carzd21368zd2_3042);
																										if (PAIRP
																											(BgL_cdrzd21374zd2_3044))
																											{	/* Ast/let.scm 770 */
																												obj_t
																													BgL_cdrzd21379zd2_3046;
																												BgL_cdrzd21379zd2_3046 =
																													CDR
																													(BgL_cdrzd21374zd2_3044);
																												if (PAIRP
																													(BgL_cdrzd21379zd2_3046))
																													{	/* Ast/let.scm 770 */
																														if (NULLP(CDR
																																(BgL_cdrzd21379zd2_3046)))
																															{	/* Ast/let.scm 770 */
																																if (NULLP(CDR
																																		(BgL_carzd21363zd2_3039)))
																																	{	/* Ast/let.scm 770 */
																																		if (PAIRP
																																			(BgL_cdrzd21364zd2_3040))
																																			{	/* Ast/let.scm 770 */
																																				if (NULLP(CDR(BgL_cdrzd21364zd2_3040)))
																																					{	/* Ast/let.scm 770 */
																																						obj_t
																																							BgL_arg2569z00_3055;
																																						obj_t
																																							BgL_arg2571z00_3056;
																																						obj_t
																																							BgL_arg2572z00_3057;
																																						obj_t
																																							BgL_arg2573z00_3058;
																																						BgL_arg2569z00_3055
																																							=
																																							CAR
																																							(BgL_carzd21368zd2_3042);
																																						BgL_arg2571z00_3056
																																							=
																																							CAR
																																							(BgL_cdrzd21374zd2_3044);
																																						BgL_arg2572z00_3057
																																							=
																																							CAR
																																							(BgL_cdrzd21379zd2_3046);
																																						BgL_arg2573z00_3058
																																							=
																																							CAR
																																							(BgL_cdrzd21364zd2_3040);
																																						{	/* Ast/let.scm 794 */
																																							obj_t
																																								BgL_fenvz00_5420;
																																							BgL_fenvz00_5420
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																								(BgL_arg2569z00_3055,
																																									BFALSE),
																																								BGl_appendza2ze70z45zzast_letz00
																																								(BgL_arg2571z00_3056,
																																									BgL_envz00_2901));
																																							{	/* Ast/let.scm 795 */
																																								obj_t
																																									BgL_arg2602z00_5423;
																																								obj_t
																																									BgL_arg2603z00_5424;
																																								BgL_arg2602z00_5423
																																									=
																																									BGl_loopze71ze7zzast_letz00
																																									(BgL_varsz00_6253,
																																									BgL_arg2572z00_3057,
																																									BgL_resz00_2900,
																																									BgL_fenvz00_5420);
																																								BgL_arg2603z00_5424
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg2569z00_3055,
																																									BgL_envz00_2901);
																																								{
																																									obj_t
																																										BgL_envz00_8437;
																																									obj_t
																																										BgL_resz00_8436;
																																									obj_t
																																										BgL_sexpz00_8435;
																																									BgL_sexpz00_8435
																																										=
																																										BgL_arg2573z00_3058;
																																									BgL_resz00_8436
																																										=
																																										BgL_arg2602z00_5423;
																																									BgL_envz00_8437
																																										=
																																										BgL_arg2603z00_5424;
																																									BgL_envz00_2901
																																										=
																																										BgL_envz00_8437;
																																									BgL_resz00_2900
																																										=
																																										BgL_resz00_8436;
																																									BgL_sexpz00_2899
																																										=
																																										BgL_sexpz00_8435;
																																									goto
																																										BGl_loopze71ze7zzast_letz00;
																																								}
																																							}
																																						}
																																					}
																																				else
																																					{	/* Ast/let.scm 770 */
																																						goto
																																							BgL_tagzd2480zd2_2927;
																																					}
																																			}
																																		else
																																			{	/* Ast/let.scm 770 */
																																				goto
																																					BgL_tagzd2480zd2_2927;
																																			}
																																	}
																																else
																																	{	/* Ast/let.scm 770 */
																																		goto
																																			BgL_tagzd2480zd2_2927;
																																	}
																															}
																														else
																															{	/* Ast/let.scm 770 */
																																goto
																																	BgL_tagzd2480zd2_2927;
																															}
																													}
																												else
																													{	/* Ast/let.scm 770 */
																														goto
																															BgL_tagzd2480zd2_2927;
																													}
																											}
																										else
																											{	/* Ast/let.scm 770 */
																												goto
																													BgL_tagzd2480zd2_2927;
																											}
																									}
																								else
																									{	/* Ast/let.scm 770 */
																										goto BgL_tagzd2480zd2_2927;
																									}
																							}
																						else
																							{	/* Ast/let.scm 770 */
																								goto BgL_tagzd2480zd2_2927;
																							}
																					}
																				else
																					{	/* Ast/let.scm 770 */
																						goto BgL_tagzd2480zd2_2927;
																					}
																			}
																		else
																			{	/* Ast/let.scm 770 */
																				goto BgL_tagzd2480zd2_2927;
																			}
																	}
															}
													}
											}
									}
							}
						else
							{	/* Ast/let.scm 770 */
								return BgL_resz00_2900;
							}
					}
			}
		}

	}



/* append*~0 */
	obj_t BGl_appendza2ze70z45zzast_letz00(obj_t BgL_pairz00_2882,
		obj_t BgL_lstz00_2883)
	{
		{	/* Ast/let.scm 765 */
			if (NULLP(BgL_pairz00_2882))
				{	/* Ast/let.scm 760 */
					return BgL_lstz00_2883;
				}
			else
				{	/* Ast/let.scm 760 */
					if (PAIRP(BgL_pairz00_2882))
						{	/* Ast/let.scm 762 */
							return
								MAKE_YOUNG_PAIR(BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(CAR
									(BgL_pairz00_2882), BFALSE),
								BGl_appendza2ze70z45zzast_letz00(CDR(BgL_pairz00_2882),
									BgL_lstz00_2883));
						}
					else
						{	/* Ast/let.scm 762 */
							return
								MAKE_YOUNG_PAIR(BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
								(BgL_pairz00_2882, BFALSE), BgL_lstz00_2883);
						}
				}
		}

	}



/* loop~2 */
	obj_t BGl_loopze72ze7zzast_letz00(obj_t BgL_vz00_6255, obj_t BgL_varsz00_6254,
		obj_t BgL_sexpz00_3099, obj_t BgL_resz00_3100, obj_t BgL_envz00_3101)
	{
		{	/* Ast/let.scm 802 */
		BGl_loopze72ze7zzast_letz00:
			{
				obj_t BgL_varz00_3105;
				obj_t BgL_valz00_3106;

				if (PAIRP(BgL_sexpz00_3099))
					{	/* Ast/let.scm 802 */
						obj_t BgL_cdrzd21453zd2_3134;

						BgL_cdrzd21453zd2_3134 = CDR(BgL_sexpz00_3099);
						if ((CAR(BgL_sexpz00_3099) == CNST_TABLE_REF(((long) 11))))
							{	/* Ast/let.scm 802 */
								if (PAIRP(BgL_cdrzd21453zd2_3134))
									{	/* Ast/let.scm 802 */
										if (NULLP(CDR(BgL_cdrzd21453zd2_3134)))
											{	/* Ast/let.scm 802 */
												return BgL_resz00_3100;
											}
										else
											{	/* Ast/let.scm 802 */
											BgL_tagzd21438zd2_3130:
												{	/* Ast/let.scm 830 */
													obj_t BgL_arg2782z00_3308;
													obj_t BgL_arg2783z00_3309;

													BgL_arg2782z00_3308 = CAR(((obj_t) BgL_sexpz00_3099));
													{	/* Ast/let.scm 830 */
														obj_t BgL_arg2784z00_3310;

														BgL_arg2784z00_3310 =
															CDR(((obj_t) BgL_sexpz00_3099));
														BgL_arg2783z00_3309 =
															BGl_loopze72ze7zzast_letz00(BgL_vz00_6255,
															BgL_varsz00_6254, BgL_arg2784z00_3310,
															BgL_resz00_3100, BgL_envz00_3101);
													}
													{
														obj_t BgL_resz00_8467;
														obj_t BgL_sexpz00_8466;

														BgL_sexpz00_8466 = BgL_arg2782z00_3308;
														BgL_resz00_8467 = BgL_arg2783z00_3309;
														BgL_resz00_3100 = BgL_resz00_8467;
														BgL_sexpz00_3099 = BgL_sexpz00_8466;
														goto BGl_loopze72ze7zzast_letz00;
													}
												}
											}
									}
								else
									{	/* Ast/let.scm 802 */
										goto BgL_tagzd21438zd2_3130;
									}
							}
						else
							{	/* Ast/let.scm 802 */
								if ((CAR(BgL_sexpz00_3099) == CNST_TABLE_REF(((long) 5))))
									{	/* Ast/let.scm 802 */
										if (PAIRP(BgL_cdrzd21453zd2_3134))
											{	/* Ast/let.scm 802 */
												obj_t BgL_carzd21574zd2_3145;
												obj_t BgL_cdrzd21575zd2_3146;

												BgL_carzd21574zd2_3145 = CAR(BgL_cdrzd21453zd2_3134);
												BgL_cdrzd21575zd2_3146 = CDR(BgL_cdrzd21453zd2_3134);
												if (SYMBOLP(BgL_carzd21574zd2_3145))
													{	/* Ast/let.scm 802 */
														if (PAIRP(BgL_cdrzd21575zd2_3146))
															{	/* Ast/let.scm 802 */
																if (NULLP(CDR(BgL_cdrzd21575zd2_3146)))
																	{	/* Ast/let.scm 802 */
																		BgL_varz00_3105 = BgL_carzd21574zd2_3145;
																		BgL_valz00_3106 =
																			CAR(BgL_cdrzd21575zd2_3146);
																		{	/* Ast/let.scm 811 */
																			bool_t BgL_test4324z00_8483;

																			if ((BgL_sexpz00_3099 == BgL_vz00_6255))
																				{	/* Ast/let.scm 811 */
																					BgL_test4324z00_8483 = ((bool_t) 1);
																				}
																			else
																				{	/* Ast/let.scm 811 */
																					if (CBOOL
																						(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																							(BgL_varz00_3105,
																								BgL_varsz00_6254)))
																						{	/* Ast/let.scm 811 */
																							BgL_test4324z00_8483 =
																								((bool_t) 0);
																						}
																					else
																						{	/* Ast/let.scm 811 */
																							BgL_test4324z00_8483 =
																								((bool_t) 1);
																						}
																				}
																			if (BgL_test4324z00_8483)
																				{
																					obj_t BgL_sexpz00_8489;

																					BgL_sexpz00_8489 = BgL_varz00_3105;
																					BgL_sexpz00_3099 = BgL_sexpz00_8489;
																					goto BGl_loopze72ze7zzast_letz00;
																				}
																			else
																				{	/* Ast/let.scm 811 */
																					if (CBOOL
																						(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																							(BgL_varz00_3105,
																								BgL_resz00_3100)))
																						{
																							obj_t BgL_sexpz00_8493;

																							BgL_sexpz00_8493 =
																								BgL_valz00_3106;
																							BgL_sexpz00_3099 =
																								BgL_sexpz00_8493;
																							goto BGl_loopze72ze7zzast_letz00;
																						}
																					else
																						{	/* Ast/let.scm 812 */
																							if (CBOOL
																								(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																									(BgL_varz00_3105,
																										BgL_envz00_3101)))
																								{
																									obj_t BgL_sexpz00_8497;

																									BgL_sexpz00_8497 =
																										BgL_valz00_3106;
																									BgL_sexpz00_3099 =
																										BgL_sexpz00_8497;
																									goto
																										BGl_loopze72ze7zzast_letz00;
																								}
																							else
																								{	/* Ast/let.scm 814 */
																									obj_t BgL_arg2756z00_3288;

																									BgL_arg2756z00_3288 =
																										MAKE_YOUNG_PAIR
																										(BgL_varz00_3105,
																										BgL_resz00_3100);
																									{
																										obj_t BgL_resz00_8500;
																										obj_t BgL_sexpz00_8499;

																										BgL_sexpz00_8499 =
																											BgL_valz00_3106;
																										BgL_resz00_8500 =
																											BgL_arg2756z00_3288;
																										BgL_resz00_3100 =
																											BgL_resz00_8500;
																										BgL_sexpz00_3099 =
																											BgL_sexpz00_8499;
																										goto
																											BGl_loopze72ze7zzast_letz00;
																									}
																								}
																						}
																				}
																		}
																	}
																else
																	{	/* Ast/let.scm 802 */
																		goto BgL_tagzd21438zd2_3130;
																	}
															}
														else
															{	/* Ast/let.scm 802 */
																goto BgL_tagzd21438zd2_3130;
															}
													}
												else
													{	/* Ast/let.scm 802 */
														goto BgL_tagzd21438zd2_3130;
													}
											}
										else
											{	/* Ast/let.scm 802 */
												goto BgL_tagzd21438zd2_3130;
											}
									}
								else
									{	/* Ast/let.scm 802 */
										obj_t BgL_cdrzd21776zd2_3153;

										BgL_cdrzd21776zd2_3153 = CDR(BgL_sexpz00_3099);
										if ((CAR(BgL_sexpz00_3099) == CNST_TABLE_REF(((long) 0))))
											{	/* Ast/let.scm 802 */
												if (PAIRP(BgL_cdrzd21776zd2_3153))
													{	/* Ast/let.scm 802 */
														obj_t BgL_carzd21780zd2_3157;
														obj_t BgL_cdrzd21781zd2_3158;

														BgL_carzd21780zd2_3157 =
															CAR(BgL_cdrzd21776zd2_3153);
														BgL_cdrzd21781zd2_3158 =
															CDR(BgL_cdrzd21776zd2_3153);
														if (PAIRP(BgL_carzd21780zd2_3157))
															{	/* Ast/let.scm 802 */
																obj_t BgL_carzd21784zd2_3160;

																BgL_carzd21784zd2_3160 =
																	CAR(BgL_carzd21780zd2_3157);
																if (PAIRP(BgL_carzd21784zd2_3160))
																	{	/* Ast/let.scm 802 */
																		obj_t BgL_cdrzd21789zd2_3162;

																		BgL_cdrzd21789zd2_3162 =
																			CDR(BgL_carzd21784zd2_3160);
																		if (PAIRP(BgL_cdrzd21789zd2_3162))
																			{	/* Ast/let.scm 802 */
																				if (NULLP(CDR(BgL_cdrzd21789zd2_3162)))
																					{	/* Ast/let.scm 802 */
																						if (NULLP(CDR
																								(BgL_carzd21780zd2_3157)))
																							{	/* Ast/let.scm 802 */
																								if (PAIRP
																									(BgL_cdrzd21781zd2_3158))
																									{	/* Ast/let.scm 802 */
																										if (NULLP(CDR
																												(BgL_cdrzd21781zd2_3158)))
																											{	/* Ast/let.scm 802 */
																												obj_t
																													BgL_arg2645z00_3171;
																												obj_t
																													BgL_arg2646z00_3172;
																												obj_t
																													BgL_arg2648z00_3173;
																												BgL_arg2645z00_3171 =
																													CAR
																													(BgL_carzd21784zd2_3160);
																												BgL_arg2646z00_3172 =
																													CAR
																													(BgL_cdrzd21789zd2_3162);
																												BgL_arg2648z00_3173 =
																													CAR
																													(BgL_cdrzd21781zd2_3158);
																												{	/* Ast/let.scm 817 */
																													obj_t
																														BgL_arg2759z00_5481;
																													obj_t
																														BgL_arg2760z00_5482;
																													BgL_arg2759z00_5481 =
																														BGl_loopze72ze7zzast_letz00
																														(BgL_vz00_6255,
																														BgL_varsz00_6254,
																														BgL_arg2646z00_3172,
																														BgL_resz00_3100,
																														BgL_envz00_3101);
																													BgL_arg2760z00_5482 =
																														MAKE_YOUNG_PAIR
																														(BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																														(BgL_arg2645z00_3171,
																															BFALSE),
																														BgL_envz00_3101);
																													{
																														obj_t
																															BgL_envz00_8538;
																														obj_t
																															BgL_resz00_8537;
																														obj_t
																															BgL_sexpz00_8536;
																														BgL_sexpz00_8536 =
																															BgL_arg2648z00_3173;
																														BgL_resz00_8537 =
																															BgL_arg2759z00_5481;
																														BgL_envz00_8538 =
																															BgL_arg2760z00_5482;
																														BgL_envz00_3101 =
																															BgL_envz00_8538;
																														BgL_resz00_3100 =
																															BgL_resz00_8537;
																														BgL_sexpz00_3099 =
																															BgL_sexpz00_8536;
																														goto
																															BGl_loopze72ze7zzast_letz00;
																													}
																												}
																											}
																										else
																											{	/* Ast/let.scm 802 */
																												goto
																													BgL_tagzd21438zd2_3130;
																											}
																									}
																								else
																									{	/* Ast/let.scm 802 */
																										goto BgL_tagzd21438zd2_3130;
																									}
																							}
																						else
																							{	/* Ast/let.scm 802 */
																								goto BgL_tagzd21438zd2_3130;
																							}
																					}
																				else
																					{	/* Ast/let.scm 802 */
																						goto BgL_tagzd21438zd2_3130;
																					}
																			}
																		else
																			{	/* Ast/let.scm 802 */
																				goto BgL_tagzd21438zd2_3130;
																			}
																	}
																else
																	{	/* Ast/let.scm 802 */
																		goto BgL_tagzd21438zd2_3130;
																	}
															}
														else
															{	/* Ast/let.scm 802 */
																goto BgL_tagzd21438zd2_3130;
															}
													}
												else
													{	/* Ast/let.scm 802 */
														goto BgL_tagzd21438zd2_3130;
													}
											}
										else
											{	/* Ast/let.scm 802 */
												if (
													(CAR(BgL_sexpz00_3099) ==
														CNST_TABLE_REF(((long) 12))))
													{	/* Ast/let.scm 802 */
														if (PAIRP(BgL_cdrzd21776zd2_3153))
															{	/* Ast/let.scm 802 */
																obj_t BgL_carzd22068zd2_3181;
																obj_t BgL_cdrzd22069zd2_3182;

																BgL_carzd22068zd2_3181 =
																	CAR(BgL_cdrzd21776zd2_3153);
																BgL_cdrzd22069zd2_3182 =
																	CDR(BgL_cdrzd21776zd2_3153);
																if (PAIRP(BgL_carzd22068zd2_3181))
																	{	/* Ast/let.scm 802 */
																		obj_t BgL_carzd22072zd2_3184;

																		BgL_carzd22072zd2_3184 =
																			CAR(BgL_carzd22068zd2_3181);
																		if (PAIRP(BgL_carzd22072zd2_3184))
																			{	/* Ast/let.scm 802 */
																				obj_t BgL_cdrzd22077zd2_3186;

																				BgL_cdrzd22077zd2_3186 =
																					CDR(BgL_carzd22072zd2_3184);
																				if (PAIRP(BgL_cdrzd22077zd2_3186))
																					{	/* Ast/let.scm 802 */
																						if (NULLP(CDR
																								(BgL_cdrzd22077zd2_3186)))
																							{	/* Ast/let.scm 802 */
																								if (NULLP(CDR
																										(BgL_carzd22068zd2_3181)))
																									{	/* Ast/let.scm 802 */
																										if (PAIRP
																											(BgL_cdrzd22069zd2_3182))
																											{	/* Ast/let.scm 802 */
																												if (NULLP(CDR
																														(BgL_cdrzd22069zd2_3182)))
																													{	/* Ast/let.scm 802 */
																														obj_t
																															BgL_arg2666z00_3195;
																														obj_t
																															BgL_arg2667z00_3196;
																														obj_t
																															BgL_arg2669z00_3197;
																														BgL_arg2666z00_3195
																															=
																															CAR
																															(BgL_carzd22072zd2_3184);
																														BgL_arg2667z00_3196
																															=
																															CAR
																															(BgL_cdrzd22077zd2_3186);
																														BgL_arg2669z00_3197
																															=
																															CAR
																															(BgL_cdrzd22069zd2_3182);
																														{	/* Ast/let.scm 819 */
																															obj_t
																																BgL_arg2763z00_5504;
																															obj_t
																																BgL_arg2764z00_5505;
																															BgL_arg2763z00_5504
																																=
																																BGl_loopze72ze7zzast_letz00
																																(BgL_vz00_6255,
																																BgL_varsz00_6254,
																																BgL_arg2667z00_3196,
																																BgL_resz00_3100,
																																BgL_envz00_3101);
																															BgL_arg2764z00_5505
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																(BgL_arg2666z00_3195,
																																	BFALSE),
																																BgL_envz00_3101);
																															{
																																obj_t
																																	BgL_envz00_8574;
																																obj_t
																																	BgL_resz00_8573;
																																obj_t
																																	BgL_sexpz00_8572;
																																BgL_sexpz00_8572
																																	=
																																	BgL_arg2669z00_3197;
																																BgL_resz00_8573
																																	=
																																	BgL_arg2763z00_5504;
																																BgL_envz00_8574
																																	=
																																	BgL_arg2764z00_5505;
																																BgL_envz00_3101
																																	=
																																	BgL_envz00_8574;
																																BgL_resz00_3100
																																	=
																																	BgL_resz00_8573;
																																BgL_sexpz00_3099
																																	=
																																	BgL_sexpz00_8572;
																																goto
																																	BGl_loopze72ze7zzast_letz00;
																															}
																														}
																													}
																												else
																													{	/* Ast/let.scm 802 */
																														goto
																															BgL_tagzd21438zd2_3130;
																													}
																											}
																										else
																											{	/* Ast/let.scm 802 */
																												goto
																													BgL_tagzd21438zd2_3130;
																											}
																									}
																								else
																									{	/* Ast/let.scm 802 */
																										goto BgL_tagzd21438zd2_3130;
																									}
																							}
																						else
																							{	/* Ast/let.scm 802 */
																								goto BgL_tagzd21438zd2_3130;
																							}
																					}
																				else
																					{	/* Ast/let.scm 802 */
																						goto BgL_tagzd21438zd2_3130;
																					}
																			}
																		else
																			{	/* Ast/let.scm 802 */
																				goto BgL_tagzd21438zd2_3130;
																			}
																	}
																else
																	{	/* Ast/let.scm 802 */
																		goto BgL_tagzd21438zd2_3130;
																	}
															}
														else
															{	/* Ast/let.scm 802 */
																goto BgL_tagzd21438zd2_3130;
															}
													}
												else
													{	/* Ast/let.scm 802 */
														obj_t BgL_cdrzd22288zd2_3201;

														BgL_cdrzd22288zd2_3201 = CDR(BgL_sexpz00_3099);
														if (
															(CAR(BgL_sexpz00_3099) ==
																CNST_TABLE_REF(((long) 10))))
															{	/* Ast/let.scm 802 */
																if (PAIRP(BgL_cdrzd22288zd2_3201))
																	{	/* Ast/let.scm 802 */
																		obj_t BgL_carzd22292zd2_3205;
																		obj_t BgL_cdrzd22293zd2_3206;

																		BgL_carzd22292zd2_3205 =
																			CAR(BgL_cdrzd22288zd2_3201);
																		BgL_cdrzd22293zd2_3206 =
																			CDR(BgL_cdrzd22288zd2_3201);
																		if (PAIRP(BgL_carzd22292zd2_3205))
																			{	/* Ast/let.scm 802 */
																				obj_t BgL_carzd22296zd2_3208;

																				BgL_carzd22296zd2_3208 =
																					CAR(BgL_carzd22292zd2_3205);
																				if (PAIRP(BgL_carzd22296zd2_3208))
																					{	/* Ast/let.scm 802 */
																						obj_t BgL_cdrzd22301zd2_3210;

																						BgL_cdrzd22301zd2_3210 =
																							CDR(BgL_carzd22296zd2_3208);
																						if (PAIRP(BgL_cdrzd22301zd2_3210))
																							{	/* Ast/let.scm 802 */
																								if (NULLP(CDR
																										(BgL_cdrzd22301zd2_3210)))
																									{	/* Ast/let.scm 802 */
																										if (NULLP(CDR
																												(BgL_carzd22292zd2_3205)))
																											{	/* Ast/let.scm 802 */
																												if (PAIRP
																													(BgL_cdrzd22293zd2_3206))
																													{	/* Ast/let.scm 802 */
																														if (NULLP(CDR
																																(BgL_cdrzd22293zd2_3206)))
																															{	/* Ast/let.scm 802 */
																																obj_t
																																	BgL_arg2688z00_3219;
																																obj_t
																																	BgL_arg2689z00_3220;
																																obj_t
																																	BgL_arg2690z00_3221;
																																BgL_arg2688z00_3219
																																	=
																																	CAR
																																	(BgL_carzd22296zd2_3208);
																																BgL_arg2689z00_3220
																																	=
																																	CAR
																																	(BgL_cdrzd22301zd2_3210);
																																BgL_arg2690z00_3221
																																	=
																																	CAR
																																	(BgL_cdrzd22293zd2_3206);
																																{	/* Ast/let.scm 821 */
																																	obj_t
																																		BgL_nenvz00_5527;
																																	BgL_nenvz00_5527
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																		(BgL_arg2688z00_3219,
																																			BFALSE),
																																		BgL_envz00_3101);
																																	{
																																		obj_t
																																			BgL_envz00_8611;
																																		obj_t
																																			BgL_resz00_8609;
																																		obj_t
																																			BgL_sexpz00_8608;
																																		BgL_sexpz00_8608
																																			=
																																			BgL_arg2690z00_3221;
																																		BgL_resz00_8609
																																			=
																																			BGl_loopze72ze7zzast_letz00
																																			(BgL_vz00_6255,
																																			BgL_varsz00_6254,
																																			BgL_arg2689z00_3220,
																																			BgL_resz00_3100,
																																			BgL_nenvz00_5527);
																																		BgL_envz00_8611
																																			=
																																			BgL_nenvz00_5527;
																																		BgL_envz00_3101
																																			=
																																			BgL_envz00_8611;
																																		BgL_resz00_3100
																																			=
																																			BgL_resz00_8609;
																																		BgL_sexpz00_3099
																																			=
																																			BgL_sexpz00_8608;
																																		goto
																																			BGl_loopze72ze7zzast_letz00;
																																	}
																																}
																															}
																														else
																															{	/* Ast/let.scm 802 */
																																goto
																																	BgL_tagzd21438zd2_3130;
																															}
																													}
																												else
																													{	/* Ast/let.scm 802 */
																														goto
																															BgL_tagzd21438zd2_3130;
																													}
																											}
																										else
																											{	/* Ast/let.scm 802 */
																												goto
																													BgL_tagzd21438zd2_3130;
																											}
																									}
																								else
																									{	/* Ast/let.scm 802 */
																										goto BgL_tagzd21438zd2_3130;
																									}
																							}
																						else
																							{	/* Ast/let.scm 802 */
																								goto BgL_tagzd21438zd2_3130;
																							}
																					}
																				else
																					{	/* Ast/let.scm 802 */
																						goto BgL_tagzd21438zd2_3130;
																					}
																			}
																		else
																			{	/* Ast/let.scm 802 */
																				goto BgL_tagzd21438zd2_3130;
																			}
																	}
																else
																	{	/* Ast/let.scm 802 */
																		goto BgL_tagzd21438zd2_3130;
																	}
															}
														else
															{	/* Ast/let.scm 802 */
																if (
																	(CAR(BgL_sexpz00_3099) ==
																		CNST_TABLE_REF(((long) 4))))
																	{	/* Ast/let.scm 802 */
																		if (PAIRP(BgL_cdrzd22288zd2_3201))
																			{	/* Ast/let.scm 802 */
																				obj_t BgL_carzd22452zd2_3229;
																				obj_t BgL_cdrzd22453zd2_3230;

																				BgL_carzd22452zd2_3229 =
																					CAR(BgL_cdrzd22288zd2_3201);
																				BgL_cdrzd22453zd2_3230 =
																					CDR(BgL_cdrzd22288zd2_3201);
																				if (PAIRP(BgL_carzd22452zd2_3229))
																					{	/* Ast/let.scm 802 */
																						obj_t BgL_carzd22456zd2_3232;

																						BgL_carzd22456zd2_3232 =
																							CAR(BgL_carzd22452zd2_3229);
																						if (PAIRP(BgL_carzd22456zd2_3232))
																							{	/* Ast/let.scm 802 */
																								obj_t BgL_cdrzd22461zd2_3234;

																								BgL_cdrzd22461zd2_3234 =
																									CDR(BgL_carzd22456zd2_3232);
																								if (PAIRP
																									(BgL_cdrzd22461zd2_3234))
																									{	/* Ast/let.scm 802 */
																										if (NULLP(CDR
																												(BgL_cdrzd22461zd2_3234)))
																											{	/* Ast/let.scm 802 */
																												if (NULLP(CDR
																														(BgL_carzd22452zd2_3229)))
																													{	/* Ast/let.scm 802 */
																														if (PAIRP
																															(BgL_cdrzd22453zd2_3230))
																															{	/* Ast/let.scm 802 */
																																if (NULLP(CDR
																																		(BgL_cdrzd22453zd2_3230)))
																																	{	/* Ast/let.scm 802 */
																																		obj_t
																																			BgL_arg2707z00_3243;
																																		obj_t
																																			BgL_arg2708z00_3244;
																																		obj_t
																																			BgL_arg2709z00_3245;
																																		BgL_arg2707z00_3243
																																			=
																																			CAR
																																			(BgL_carzd22456zd2_3232);
																																		BgL_arg2708z00_3244
																																			=
																																			CAR
																																			(BgL_cdrzd22461zd2_3234);
																																		BgL_arg2709z00_3245
																																			=
																																			CAR
																																			(BgL_cdrzd22453zd2_3230);
																																		{	/* Ast/let.scm 824 */
																																			obj_t
																																				BgL_nenvz00_5550;
																																			BgL_nenvz00_5550
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																				(BgL_arg2707z00_3243,
																																					BFALSE),
																																				BgL_envz00_3101);
																																			{
																																				obj_t
																																					BgL_envz00_8647;
																																				obj_t
																																					BgL_resz00_8645;
																																				obj_t
																																					BgL_sexpz00_8644;
																																				BgL_sexpz00_8644
																																					=
																																					BgL_arg2709z00_3245;
																																				BgL_resz00_8645
																																					=
																																					BGl_loopze72ze7zzast_letz00
																																					(BgL_vz00_6255,
																																					BgL_varsz00_6254,
																																					BgL_arg2708z00_3244,
																																					BgL_resz00_3100,
																																					BgL_nenvz00_5550);
																																				BgL_envz00_8647
																																					=
																																					BgL_nenvz00_5550;
																																				BgL_envz00_3101
																																					=
																																					BgL_envz00_8647;
																																				BgL_resz00_3100
																																					=
																																					BgL_resz00_8645;
																																				BgL_sexpz00_3099
																																					=
																																					BgL_sexpz00_8644;
																																				goto
																																					BGl_loopze72ze7zzast_letz00;
																																			}
																																		}
																																	}
																																else
																																	{	/* Ast/let.scm 802 */
																																		goto
																																			BgL_tagzd21438zd2_3130;
																																	}
																															}
																														else
																															{	/* Ast/let.scm 802 */
																																goto
																																	BgL_tagzd21438zd2_3130;
																															}
																													}
																												else
																													{	/* Ast/let.scm 802 */
																														goto
																															BgL_tagzd21438zd2_3130;
																													}
																											}
																										else
																											{	/* Ast/let.scm 802 */
																												goto
																													BgL_tagzd21438zd2_3130;
																											}
																									}
																								else
																									{	/* Ast/let.scm 802 */
																										goto BgL_tagzd21438zd2_3130;
																									}
																							}
																						else
																							{	/* Ast/let.scm 802 */
																								goto BgL_tagzd21438zd2_3130;
																							}
																					}
																				else
																					{	/* Ast/let.scm 802 */
																						goto BgL_tagzd21438zd2_3130;
																					}
																			}
																		else
																			{	/* Ast/let.scm 802 */
																				goto BgL_tagzd21438zd2_3130;
																			}
																	}
																else
																	{	/* Ast/let.scm 802 */
																		obj_t BgL_cdrzd22544zd2_3249;

																		BgL_cdrzd22544zd2_3249 =
																			CDR(BgL_sexpz00_3099);
																		if (
																			(CAR(BgL_sexpz00_3099) ==
																				CNST_TABLE_REF(((long) 8))))
																			{	/* Ast/let.scm 802 */
																				if (PAIRP(BgL_cdrzd22544zd2_3249))
																					{	/* Ast/let.scm 802 */
																						obj_t BgL_carzd22549zd2_3253;
																						obj_t BgL_cdrzd22550zd2_3254;

																						BgL_carzd22549zd2_3253 =
																							CAR(BgL_cdrzd22544zd2_3249);
																						BgL_cdrzd22550zd2_3254 =
																							CDR(BgL_cdrzd22544zd2_3249);
																						if (PAIRP(BgL_carzd22549zd2_3253))
																							{	/* Ast/let.scm 802 */
																								obj_t BgL_carzd22554zd2_3256;

																								BgL_carzd22554zd2_3256 =
																									CAR(BgL_carzd22549zd2_3253);
																								if (PAIRP
																									(BgL_carzd22554zd2_3256))
																									{	/* Ast/let.scm 802 */
																										obj_t
																											BgL_cdrzd22560zd2_3258;
																										BgL_cdrzd22560zd2_3258 =
																											CDR
																											(BgL_carzd22554zd2_3256);
																										if (PAIRP
																											(BgL_cdrzd22560zd2_3258))
																											{	/* Ast/let.scm 802 */
																												obj_t
																													BgL_cdrzd22565zd2_3260;
																												BgL_cdrzd22565zd2_3260 =
																													CDR
																													(BgL_cdrzd22560zd2_3258);
																												if (PAIRP
																													(BgL_cdrzd22565zd2_3260))
																													{	/* Ast/let.scm 802 */
																														if (NULLP(CDR
																																(BgL_cdrzd22565zd2_3260)))
																															{	/* Ast/let.scm 802 */
																																if (NULLP(CDR
																																		(BgL_carzd22549zd2_3253)))
																																	{	/* Ast/let.scm 802 */
																																		if (PAIRP
																																			(BgL_cdrzd22550zd2_3254))
																																			{	/* Ast/let.scm 802 */
																																				if (NULLP(CDR(BgL_cdrzd22550zd2_3254)))
																																					{	/* Ast/let.scm 802 */
																																						obj_t
																																							BgL_arg2729z00_3269;
																																						obj_t
																																							BgL_arg2730z00_3270;
																																						obj_t
																																							BgL_arg2731z00_3271;
																																						obj_t
																																							BgL_arg2732z00_3272;
																																						BgL_arg2729z00_3269
																																							=
																																							CAR
																																							(BgL_carzd22554zd2_3256);
																																						BgL_arg2730z00_3270
																																							=
																																							CAR
																																							(BgL_cdrzd22560zd2_3258);
																																						BgL_arg2731z00_3271
																																							=
																																							CAR
																																							(BgL_cdrzd22565zd2_3260);
																																						BgL_arg2732z00_3272
																																							=
																																							CAR
																																							(BgL_cdrzd22550zd2_3254);
																																						{	/* Ast/let.scm 827 */
																																							obj_t
																																								BgL_fenvz00_5576;
																																							BgL_fenvz00_5576
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																								(BgL_arg2729z00_3269,
																																									BFALSE),
																																								BGl_appendza2ze70z45zzast_letz00
																																								(BgL_arg2730z00_3270,
																																									BgL_envz00_3101));
																																							{	/* Ast/let.scm 828 */
																																								obj_t
																																									BgL_arg2771z00_5579;
																																								obj_t
																																									BgL_arg2774z00_5580;
																																								BgL_arg2771z00_5579
																																									=
																																									BGl_loopze72ze7zzast_letz00
																																									(BgL_vz00_6255,
																																									BgL_varsz00_6254,
																																									BgL_arg2731z00_3271,
																																									BgL_resz00_3100,
																																									BgL_fenvz00_5576);
																																								BgL_arg2774z00_5580
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg2729z00_3269,
																																									BgL_envz00_3101);
																																								{
																																									obj_t
																																										BgL_envz00_8690;
																																									obj_t
																																										BgL_resz00_8689;
																																									obj_t
																																										BgL_sexpz00_8688;
																																									BgL_sexpz00_8688
																																										=
																																										BgL_arg2732z00_3272;
																																									BgL_resz00_8689
																																										=
																																										BgL_arg2771z00_5579;
																																									BgL_envz00_8690
																																										=
																																										BgL_arg2774z00_5580;
																																									BgL_envz00_3101
																																										=
																																										BgL_envz00_8690;
																																									BgL_resz00_3100
																																										=
																																										BgL_resz00_8689;
																																									BgL_sexpz00_3099
																																										=
																																										BgL_sexpz00_8688;
																																									goto
																																										BGl_loopze72ze7zzast_letz00;
																																								}
																																							}
																																						}
																																					}
																																				else
																																					{	/* Ast/let.scm 802 */
																																						goto
																																							BgL_tagzd21438zd2_3130;
																																					}
																																			}
																																		else
																																			{	/* Ast/let.scm 802 */
																																				goto
																																					BgL_tagzd21438zd2_3130;
																																			}
																																	}
																																else
																																	{	/* Ast/let.scm 802 */
																																		goto
																																			BgL_tagzd21438zd2_3130;
																																	}
																															}
																														else
																															{	/* Ast/let.scm 802 */
																																goto
																																	BgL_tagzd21438zd2_3130;
																															}
																													}
																												else
																													{	/* Ast/let.scm 802 */
																														goto
																															BgL_tagzd21438zd2_3130;
																													}
																											}
																										else
																											{	/* Ast/let.scm 802 */
																												goto
																													BgL_tagzd21438zd2_3130;
																											}
																									}
																								else
																									{	/* Ast/let.scm 802 */
																										goto BgL_tagzd21438zd2_3130;
																									}
																							}
																						else
																							{	/* Ast/let.scm 802 */
																								goto BgL_tagzd21438zd2_3130;
																							}
																					}
																				else
																					{	/* Ast/let.scm 802 */
																						goto BgL_tagzd21438zd2_3130;
																					}
																			}
																		else
																			{	/* Ast/let.scm 802 */
																				goto BgL_tagzd21438zd2_3130;
																			}
																	}
															}
													}
											}
									}
							}
					}
				else
					{	/* Ast/let.scm 802 */
						return BgL_resz00_3100;
					}
			}
		}

	}



/* &letrec*->node */
	BgL_nodez00_bglt BGl_z62letrecza2zd2ze3nodezf1zzast_letz00(obj_t
		BgL_envz00_6180, obj_t BgL_sexpz00_6181, obj_t BgL_stackz00_6182,
		obj_t BgL_locz00_6183, obj_t BgL_sitez00_6184)
	{
		{	/* Ast/let.scm 548 */
			return
				BGl_letrecza2zd2ze3nodez93zzast_letz00(BgL_sexpz00_6181,
				BgL_stackz00_6182, BgL_locz00_6183, BgL_sitez00_6184);
		}

	}



/* &letstar */
	obj_t BGl_z62letstarz62zzast_letz00(obj_t BgL_ebindingsz00_2491,
		obj_t BgL_bodyz00_2492)
	{
		{	/* Ast/let.scm 590 */
			if (NULLP(BgL_ebindingsz00_2491))
				{	/* Ast/let.scm 583 */
					return BgL_bodyz00_2492;
				}
			else
				{	/* Ast/let.scm 585 */
					bool_t BgL_test4376z00_8694;

					{	/* Ast/let.scm 585 */
						obj_t BgL_arg2182z00_2514;
						obj_t BgL_arg2183z00_2515;

						BgL_arg2182z00_2514 = CAR(((obj_t) BgL_ebindingsz00_2491));
						{	/* Ast/let.scm 585 */
							obj_t BgL_arg2184z00_2516;

							BgL_arg2184z00_2516 = CAR(((obj_t) BgL_ebindingsz00_2491));
							{	/* Ast/let.scm 585 */
								obj_t BgL_list2185z00_2517;

								BgL_list2185z00_2517 =
									MAKE_YOUNG_PAIR(BgL_arg2184z00_2516, BNIL);
								BgL_arg2183z00_2515 = BgL_list2185z00_2517;
							}
						}
						BgL_test4376z00_8694 =
							CBOOL(BGl_z62usedzd2inzf3z43zzast_letz00(BgL_arg2182z00_2514,
								BgL_arg2183z00_2515));
					}
					if (BgL_test4376z00_8694)
						{	/* Ast/let.scm 586 */
							obj_t BgL_arg2167z00_2500;

							{	/* Ast/let.scm 586 */
								obj_t BgL_arg2168z00_2501;
								obj_t BgL_arg2169z00_2502;

								{	/* Ast/let.scm 586 */
									obj_t BgL_arg2170z00_2503;

									{	/* Ast/let.scm 559 */
										obj_t BgL_pairz00_5108;

										BgL_pairz00_5108 = CAR(((obj_t) BgL_ebindingsz00_2491));
										BgL_arg2170z00_2503 = CAR(BgL_pairz00_5108);
									}
									BgL_arg2168z00_2501 =
										MAKE_YOUNG_PAIR(BgL_arg2170z00_2503, BNIL);
								}
								{	/* Ast/let.scm 587 */
									obj_t BgL_arg2173z00_2505;

									{	/* Ast/let.scm 587 */
										obj_t BgL_arg2174z00_2506;

										BgL_arg2174z00_2506 = CDR(((obj_t) BgL_ebindingsz00_2491));
										BgL_arg2173z00_2505 =
											BGl_z62letstarz62zzast_letz00(BgL_arg2174z00_2506,
											BgL_bodyz00_2492);
									}
									BgL_arg2169z00_2502 =
										MAKE_YOUNG_PAIR(BgL_arg2173z00_2505, BNIL);
								}
								BgL_arg2167z00_2500 =
									MAKE_YOUNG_PAIR(BgL_arg2168z00_2501, BgL_arg2169z00_2502);
							}
							return
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
								BgL_arg2167z00_2500);
						}
					else
						{	/* Ast/let.scm 589 */
							obj_t BgL_arg2175z00_2507;

							{	/* Ast/let.scm 589 */
								obj_t BgL_arg2176z00_2508;
								obj_t BgL_arg2177z00_2509;

								{	/* Ast/let.scm 589 */
									obj_t BgL_arg2178z00_2510;

									{	/* Ast/let.scm 559 */
										obj_t BgL_pairz00_5111;

										BgL_pairz00_5111 = CAR(((obj_t) BgL_ebindingsz00_2491));
										BgL_arg2178z00_2510 = CAR(BgL_pairz00_5111);
									}
									BgL_arg2176z00_2508 =
										MAKE_YOUNG_PAIR(BgL_arg2178z00_2510, BNIL);
								}
								{	/* Ast/let.scm 590 */
									obj_t BgL_arg2180z00_2512;

									{	/* Ast/let.scm 590 */
										obj_t BgL_arg2181z00_2513;

										BgL_arg2181z00_2513 = CDR(((obj_t) BgL_ebindingsz00_2491));
										BgL_arg2180z00_2512 =
											BGl_z62letstarz62zzast_letz00(BgL_arg2181z00_2513,
											BgL_bodyz00_2492);
									}
									BgL_arg2177z00_2509 =
										MAKE_YOUNG_PAIR(BgL_arg2180z00_2512, BNIL);
								}
								BgL_arg2175z00_2507 =
									MAKE_YOUNG_PAIR(BgL_arg2176z00_2508, BgL_arg2177z00_2509);
							}
							return
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
								BgL_arg2175z00_2507);
		}}}

	}



/* &used-in? */
	obj_t BGl_z62usedzd2inzf3z43zzast_letz00(obj_t BgL_bz00_2476,
		obj_t BgL_ebindingsz00_2477)
	{
		{	/* Ast/let.scm 579 */
			{	/* Ast/let.scm 576 */
				obj_t BgL_varz00_2479;

				{	/* Ast/let.scm 561 */
					obj_t BgL_pairz00_5092;

					BgL_pairz00_5092 = CDR(((obj_t) BgL_bz00_2476));
					BgL_varz00_2479 = CAR(BgL_pairz00_5092);
				}
				{
					obj_t BgL_list1470z00_2481;

					BgL_list1470z00_2481 = BgL_ebindingsz00_2477;
				BgL_zc3z04anonymousza32154ze3z87_2482:
					if (PAIRP(BgL_list1470z00_2481))
						{	/* Ast/let.scm 577 */
							bool_t BgL_test4378z00_8729;

							{	/* Ast/let.scm 578 */
								obj_t BgL_tmpz00_8730;

								{	/* Ast/let.scm 578 */
									obj_t BgL_auxz00_8731;

									{	/* Ast/let.scm 562 */
										obj_t BgL_pairz00_5100;

										{	/* Ast/let.scm 562 */
											obj_t BgL_pairz00_5099;

											BgL_pairz00_5099 =
												CDR(((obj_t) CAR(BgL_list1470z00_2481)));
											BgL_pairz00_5100 = CDR(BgL_pairz00_5099);
										}
										BgL_auxz00_8731 = CAR(BgL_pairz00_5100);
									}
									BgL_tmpz00_8730 =
										BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_varz00_2479,
										BgL_auxz00_8731);
								}
								BgL_test4378z00_8729 = CBOOL(BgL_tmpz00_8730);
							}
							if (BgL_test4378z00_8729)
								{	/* Ast/let.scm 577 */
									return CAR(BgL_list1470z00_2481);
								}
							else
								{
									obj_t BgL_list1470z00_8740;

									BgL_list1470z00_8740 = CDR(BgL_list1470z00_2481);
									BgL_list1470z00_2481 = BgL_list1470z00_8740;
									goto BgL_zc3z04anonymousza32154ze3z87_2482;
								}
						}
					else
						{	/* Ast/let.scm 577 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &mutable-in? */
	obj_t BGl_z62mutablezd2inzf3z43zzast_letz00(obj_t BgL_bz00_2457,
		obj_t BgL_ebindingsz00_2458)
	{
		{	/* Ast/let.scm 570 */
			{	/* Ast/let.scm 567 */
				obj_t BgL_varz00_2460;

				{	/* Ast/let.scm 561 */
					obj_t BgL_pairz00_5075;

					BgL_pairz00_5075 = CDR(((obj_t) BgL_bz00_2457));
					BgL_varz00_2460 = CAR(BgL_pairz00_5075);
				}
				{
					obj_t BgL_list1468z00_2462;

					BgL_list1468z00_2462 = BgL_ebindingsz00_2458;
				BgL_zc3z04anonymousza32145ze3z87_2463:
					if (PAIRP(BgL_list1468z00_2462))
						{	/* Ast/let.scm 568 */
							bool_t BgL_test4380z00_8747;

							{	/* Ast/let.scm 569 */
								obj_t BgL_tmpz00_8748;

								{	/* Ast/let.scm 569 */
									obj_t BgL_auxz00_8749;

									{	/* Ast/let.scm 563 */
										obj_t BgL_pairz00_5085;

										{	/* Ast/let.scm 563 */
											obj_t BgL_pairz00_5084;

											{	/* Ast/let.scm 563 */
												obj_t BgL_pairz00_5083;

												BgL_pairz00_5083 =
													CDR(((obj_t) CAR(BgL_list1468z00_2462)));
												BgL_pairz00_5084 = CDR(BgL_pairz00_5083);
											}
											BgL_pairz00_5085 = CDR(BgL_pairz00_5084);
										}
										BgL_auxz00_8749 = CAR(BgL_pairz00_5085);
									}
									BgL_tmpz00_8748 =
										BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_varz00_2460,
										BgL_auxz00_8749);
								}
								BgL_test4380z00_8747 = CBOOL(BgL_tmpz00_8748);
							}
							if (BgL_test4380z00_8747)
								{	/* Ast/let.scm 568 */
									return CAR(BgL_list1468z00_2462);
								}
							else
								{
									obj_t BgL_list1468z00_8759;

									BgL_list1468z00_8759 = CDR(BgL_list1468z00_2462);
									BgL_list1468z00_2462 = BgL_list1468z00_8759;
									goto BgL_zc3z04anonymousza32145ze3z87_2463;
								}
						}
					else
						{	/* Ast/let.scm 568 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &split-head-letrec */
	BgL_nodez00_bglt BGl_z62splitzd2headzd2letrecz62zzast_letz00(obj_t
		BgL_sitez00_6187, obj_t BgL_locz00_6186, obj_t BgL_stackz00_6185,
		obj_t BgL_ebindingsz00_2703, obj_t BgL_bodyz00_2704,
		obj_t BgL_splitz00_2705, obj_t BgL_kontz00_2706)
	{
		{	/* Ast/let.scm 668 */
			if (NULLP(BgL_ebindingsz00_2703))
				{	/* Ast/let.scm 652 */
					return
						BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_bodyz00_2704,
						BgL_stackz00_6185, BgL_locz00_6186, BgL_sitez00_6187);
				}
			else
				{	/* Ast/let.scm 655 */
					obj_t BgL_reczd2bindingszd2_2709;

					BgL_reczd2bindingszd2_2709 =
						((obj_t(*)())PROCEDURE_L_ENTRY(BgL_splitz00_2705))
						(BgL_splitz00_2705, BgL_ebindingsz00_2703);
					{	/* Ast/let.scm 656 */
						obj_t BgL_recza2zd2bindingsz70_2710;

						{	/* Ast/let.scm 661 */
							int BgL_tmpz00_8768;

							BgL_tmpz00_8768 = (int) (((long) 1));
							BgL_recza2zd2bindingsz70_2710 = BGL_MVALUES_VAL(BgL_tmpz00_8768);
						}
						if (NULLP(BgL_reczd2bindingszd2_2709))
							{	/* Ast/let.scm 661 */
								return
									((BgL_nodez00_bglt(*)())PROCEDURE_L_ENTRY(BgL_kontz00_2706))
									(BgL_kontz00_2706, BgL_ebindingsz00_2703, BgL_bodyz00_2704);
							}
						else
							{	/* Ast/let.scm 665 */
								obj_t BgL_arg2320z00_2712;

								{	/* Ast/let.scm 665 */
									obj_t BgL_arg2321z00_2713;

									{	/* Ast/let.scm 665 */
										obj_t BgL_arg2322z00_2714;

										{	/* Ast/let.scm 665 */
											obj_t BgL_arg2323z00_2715;

											{	/* Ast/let.scm 665 */
												obj_t BgL_arg2324z00_2716;
												obj_t BgL_arg2325z00_2717;

												if (NULLP(BgL_recza2zd2bindingsz70_2710))
													{	/* Ast/let.scm 665 */
														BgL_arg2324z00_2716 = BNIL;
													}
												else
													{	/* Ast/let.scm 665 */
														obj_t BgL_head1479z00_2720;

														{	/* Ast/let.scm 665 */
															obj_t BgL_arg2334z00_2732;

															{	/* Ast/let.scm 559 */
																obj_t BgL_pairz00_5183;

																BgL_pairz00_5183 =
																	CAR(((obj_t) BgL_recza2zd2bindingsz70_2710));
																BgL_arg2334z00_2732 = CAR(BgL_pairz00_5183);
															}
															{	/* Ast/let.scm 665 */
																obj_t BgL_res3767z00_5184;

																BgL_res3767z00_5184 =
																	MAKE_YOUNG_PAIR(BgL_arg2334z00_2732, BNIL);
																BgL_head1479z00_2720 = BgL_res3767z00_5184;
															}
														}
														{	/* Ast/let.scm 665 */
															obj_t BgL_g1482z00_2721;

															BgL_g1482z00_2721 =
																CDR(((obj_t) BgL_recza2zd2bindingsz70_2710));
															{
																obj_t BgL_l1477z00_2723;
																obj_t BgL_tail1480z00_2724;

																BgL_l1477z00_2723 = BgL_g1482z00_2721;
																BgL_tail1480z00_2724 = BgL_head1479z00_2720;
															BgL_zc3z04anonymousza32327ze3z87_2725:
																if (NULLP(BgL_l1477z00_2723))
																	{	/* Ast/let.scm 665 */
																		BgL_arg2324z00_2716 = BgL_head1479z00_2720;
																	}
																else
																	{	/* Ast/let.scm 665 */
																		obj_t BgL_newtail1481z00_2727;

																		{	/* Ast/let.scm 665 */
																			obj_t BgL_arg2331z00_2729;

																			{	/* Ast/let.scm 559 */
																				obj_t BgL_pairz00_5188;

																				BgL_pairz00_5188 =
																					CAR(((obj_t) BgL_l1477z00_2723));
																				BgL_arg2331z00_2729 =
																					CAR(BgL_pairz00_5188);
																			}
																			{	/* Ast/let.scm 665 */
																				obj_t BgL_res3769z00_5189;

																				BgL_res3769z00_5189 =
																					MAKE_YOUNG_PAIR(BgL_arg2331z00_2729,
																					BNIL);
																				BgL_newtail1481z00_2727 =
																					BgL_res3769z00_5189;
																			}
																		}
																		SET_CDR(BgL_tail1480z00_2724,
																			BgL_newtail1481z00_2727);
																		{	/* Ast/let.scm 665 */
																			obj_t BgL_arg2329z00_2728;

																			BgL_arg2329z00_2728 =
																				CDR(((obj_t) BgL_l1477z00_2723));
																			{
																				obj_t BgL_tail1480z00_8796;
																				obj_t BgL_l1477z00_8795;

																				BgL_l1477z00_8795 = BgL_arg2329z00_2728;
																				BgL_tail1480z00_8796 =
																					BgL_newtail1481z00_2727;
																				BgL_tail1480z00_2724 =
																					BgL_tail1480z00_8796;
																				BgL_l1477z00_2723 = BgL_l1477z00_8795;
																				goto
																					BgL_zc3z04anonymousza32327ze3z87_2725;
																			}
																		}
																	}
															}
														}
													}
												BgL_arg2325z00_2717 =
													MAKE_YOUNG_PAIR(BgL_bodyz00_2704, BNIL);
												BgL_arg2323z00_2715 =
													MAKE_YOUNG_PAIR(BgL_arg2324z00_2716,
													BgL_arg2325z00_2717);
											}
											BgL_arg2322z00_2714 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
												BgL_arg2323z00_2715);
										}
										BgL_arg2321z00_2713 =
											BGl_letrecursiveze70ze7zzast_letz00
											(BgL_reczd2bindingszd2_2709, BgL_arg2322z00_2714);
									}
									BgL_arg2320z00_2712 =
										BGl_z62letcollapsez62zzast_letz00(BgL_arg2321z00_2713);
								}
								return
									BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg2320z00_2712,
									BgL_stackz00_6185, BgL_locz00_6186, BgL_sitez00_6187);
							}
					}
				}
		}

	}



/* letrecursive~0 */
	obj_t BGl_letrecursiveze70ze7zzast_letz00(obj_t BgL_ebindingsz00_2670,
		obj_t BgL_bodyz00_2671)
	{
		{	/* Ast/let.scm 648 */
			if (NULLP(BgL_ebindingsz00_2670))
				{	/* Ast/let.scm 641 */
					return BgL_bodyz00_2671;
				}
			else
				{	/* Ast/let.scm 643 */
					bool_t BgL_test4386z00_8806;

					{	/* Ast/let.scm 643 */
						obj_t BgL_arg2316z00_2702;

						BgL_arg2316z00_2702 = CAR(((obj_t) BgL_ebindingsz00_2670));
						BgL_test4386z00_8806 =
							CBOOL(BGl_z62usedzd2inzf3z43zzast_letz00(BgL_arg2316z00_2702,
								BgL_ebindingsz00_2670));
					}
					if (BgL_test4386z00_8806)
						{	/* Ast/let.scm 644 */
							obj_t BgL_arg2296z00_2676;

							{	/* Ast/let.scm 644 */
								obj_t BgL_arg2297z00_2677;
								obj_t BgL_arg2298z00_2678;

								{	/* Ast/let.scm 644 */
									obj_t BgL_head1473z00_2681;

									{	/* Ast/let.scm 644 */
										obj_t BgL_arg2306z00_2693;

										{	/* Ast/let.scm 559 */
											obj_t BgL_pairz00_5167;

											BgL_pairz00_5167 = CAR(((obj_t) BgL_ebindingsz00_2670));
											BgL_arg2306z00_2693 = CAR(BgL_pairz00_5167);
										}
										{	/* Ast/let.scm 644 */
											obj_t BgL_res3761z00_5168;

											BgL_res3761z00_5168 =
												MAKE_YOUNG_PAIR(BgL_arg2306z00_2693, BNIL);
											BgL_head1473z00_2681 = BgL_res3761z00_5168;
										}
									}
									{	/* Ast/let.scm 644 */
										obj_t BgL_g1476z00_2682;

										BgL_g1476z00_2682 = CDR(((obj_t) BgL_ebindingsz00_2670));
										{
											obj_t BgL_l1471z00_2684;
											obj_t BgL_tail1474z00_2685;

											BgL_l1471z00_2684 = BgL_g1476z00_2682;
											BgL_tail1474z00_2685 = BgL_head1473z00_2681;
										BgL_zc3z04anonymousza32300ze3z87_2686:
											if (NULLP(BgL_l1471z00_2684))
												{	/* Ast/let.scm 644 */
													BgL_arg2297z00_2677 = BgL_head1473z00_2681;
												}
											else
												{	/* Ast/let.scm 644 */
													obj_t BgL_newtail1475z00_2688;

													{	/* Ast/let.scm 644 */
														obj_t BgL_arg2303z00_2690;

														{	/* Ast/let.scm 559 */
															obj_t BgL_pairz00_5172;

															BgL_pairz00_5172 =
																CAR(((obj_t) BgL_l1471z00_2684));
															BgL_arg2303z00_2690 = CAR(BgL_pairz00_5172);
														}
														{	/* Ast/let.scm 644 */
															obj_t BgL_res3763z00_5173;

															BgL_res3763z00_5173 =
																MAKE_YOUNG_PAIR(BgL_arg2303z00_2690, BNIL);
															BgL_newtail1475z00_2688 = BgL_res3763z00_5173;
														}
													}
													SET_CDR(BgL_tail1474z00_2685,
														BgL_newtail1475z00_2688);
													{	/* Ast/let.scm 644 */
														obj_t BgL_arg2302z00_2689;

														BgL_arg2302z00_2689 =
															CDR(((obj_t) BgL_l1471z00_2684));
														{
															obj_t BgL_tail1474z00_8827;
															obj_t BgL_l1471z00_8826;

															BgL_l1471z00_8826 = BgL_arg2302z00_2689;
															BgL_tail1474z00_8827 = BgL_newtail1475z00_2688;
															BgL_tail1474z00_2685 = BgL_tail1474z00_8827;
															BgL_l1471z00_2684 = BgL_l1471z00_8826;
															goto BgL_zc3z04anonymousza32300ze3z87_2686;
														}
													}
												}
										}
									}
								}
								BgL_arg2298z00_2678 = MAKE_YOUNG_PAIR(BgL_bodyz00_2671, BNIL);
								BgL_arg2296z00_2676 =
									MAKE_YOUNG_PAIR(BgL_arg2297z00_2677, BgL_arg2298z00_2678);
							}
							return
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
								BgL_arg2296z00_2676);
						}
					else
						{	/* Ast/let.scm 647 */
							obj_t BgL_arg2308z00_2695;

							{	/* Ast/let.scm 647 */
								obj_t BgL_arg2309z00_2696;
								obj_t BgL_arg2310z00_2697;

								{	/* Ast/let.scm 647 */
									obj_t BgL_arg2311z00_2698;

									{	/* Ast/let.scm 559 */
										obj_t BgL_pairz00_5177;

										BgL_pairz00_5177 = CAR(((obj_t) BgL_ebindingsz00_2670));
										BgL_arg2311z00_2698 = CAR(BgL_pairz00_5177);
									}
									BgL_arg2309z00_2696 =
										MAKE_YOUNG_PAIR(BgL_arg2311z00_2698, BNIL);
								}
								{	/* Ast/let.scm 648 */
									obj_t BgL_arg2313z00_2700;

									{	/* Ast/let.scm 648 */
										obj_t BgL_arg2314z00_2701;

										BgL_arg2314z00_2701 = CDR(((obj_t) BgL_ebindingsz00_2670));
										BgL_arg2313z00_2700 =
											BGl_letrecursiveze70ze7zzast_letz00(BgL_arg2314z00_2701,
											BgL_bodyz00_2671);
									}
									BgL_arg2310z00_2697 =
										MAKE_YOUNG_PAIR(BgL_arg2313z00_2700, BNIL);
								}
								BgL_arg2308z00_2695 =
									MAKE_YOUNG_PAIR(BgL_arg2309z00_2696, BgL_arg2310z00_2697);
							}
							return
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
								BgL_arg2308z00_2695);
		}}}

	}



/* &letcollapse */
	obj_t BGl_z62letcollapsez62zzast_letz00(obj_t BgL_exprz00_2653)
	{
		{	/* Ast/let.scm 637 */
			{
				obj_t BgL_exprz00_2518;
				obj_t BgL_exprz00_2582;
				obj_t BgL_exprz00_2644;

				if (PAIRP(BgL_exprz00_2653))
					{	/* Ast/let.scm 637 */
						if ((CAR(BgL_exprz00_2653) == CNST_TABLE_REF(((long) 0))))
							{	/* Ast/let.scm 637 */
								BgL_exprz00_2518 = BgL_exprz00_2653;
								{
									obj_t BgL_exprz00_2522;
									obj_t BgL_bindingsz00_2523;

									BgL_exprz00_2522 = BgL_exprz00_2518;
									BgL_bindingsz00_2523 = BNIL;
								BgL_zc3z04anonymousza32187ze3z87_2524:
									{
										obj_t BgL_bindingz00_2525;
										obj_t BgL_valz00_2526;
										obj_t BgL_subexprz00_2527;

										if (PAIRP(BgL_exprz00_2522))
											{	/* Ast/let.scm 593 */
												obj_t BgL_cdrzd2401zd2_2532;

												BgL_cdrzd2401zd2_2532 = CDR(BgL_exprz00_2522);
												if (
													(CAR(BgL_exprz00_2522) == CNST_TABLE_REF(((long) 0))))
													{	/* Ast/let.scm 593 */
														if (PAIRP(BgL_cdrzd2401zd2_2532))
															{	/* Ast/let.scm 593 */
																obj_t BgL_carzd2405zd2_2536;
																obj_t BgL_cdrzd2406zd2_2537;

																BgL_carzd2405zd2_2536 =
																	CAR(BgL_cdrzd2401zd2_2532);
																BgL_cdrzd2406zd2_2537 =
																	CDR(BgL_cdrzd2401zd2_2532);
																if (PAIRP(BgL_carzd2405zd2_2536))
																	{	/* Ast/let.scm 593 */
																		obj_t BgL_carzd2409zd2_2539;

																		BgL_carzd2409zd2_2539 =
																			CAR(BgL_carzd2405zd2_2536);
																		if (PAIRP(BgL_carzd2409zd2_2539))
																			{	/* Ast/let.scm 593 */
																				obj_t BgL_cdrzd2417zd2_2541;

																				BgL_cdrzd2417zd2_2541 =
																					CDR(BgL_carzd2409zd2_2539);
																				if (PAIRP(BgL_cdrzd2417zd2_2541))
																					{	/* Ast/let.scm 593 */
																						if (NULLP(CDR
																								(BgL_cdrzd2417zd2_2541)))
																							{	/* Ast/let.scm 593 */
																								if (NULLP(CDR
																										(BgL_carzd2405zd2_2536)))
																									{	/* Ast/let.scm 593 */
																										if (PAIRP
																											(BgL_cdrzd2406zd2_2537))
																											{	/* Ast/let.scm 593 */
																												if (NULLP(CDR
																														(BgL_cdrzd2406zd2_2537)))
																													{	/* Ast/let.scm 593 */
																														BgL_bindingz00_2525
																															=
																															BgL_carzd2409zd2_2539;
																														BgL_valz00_2526 =
																															CAR
																															(BgL_cdrzd2417zd2_2541);
																														BgL_subexprz00_2527
																															=
																															CAR
																															(BgL_cdrzd2406zd2_2537);
																														{	/* Ast/let.scm 598 */
																															bool_t
																																BgL_test4400z00_8879;
																															if (BGl_constantzf3zf3zzast_letz00(BgL_valz00_2526))
																																{	/* Ast/let.scm 598 */
																																	BgL_test4400z00_8879
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Ast/let.scm 598 */

																																	BgL_test4400z00_8879
																																		=
																																		CBOOL
																																		(BGl_functionzf3zf3zzast_letz00
																																		(BgL_valz00_2526,
																																			BFALSE));
																																}
																															if (BgL_test4400z00_8879)
																																{	/* Ast/let.scm 599 */
																																	obj_t
																																		BgL_arg2210z00_2560;
																																	BgL_arg2210z00_2560
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_bindingz00_2525,
																																		BgL_bindingsz00_2523);
																																	{
																																		obj_t
																																			BgL_bindingsz00_8886;
																																		obj_t
																																			BgL_exprz00_8885;
																																		BgL_exprz00_8885
																																			=
																																			BgL_subexprz00_2527;
																																		BgL_bindingsz00_8886
																																			=
																																			BgL_arg2210z00_2560;
																																		BgL_bindingsz00_2523
																																			=
																																			BgL_bindingsz00_8886;
																																		BgL_exprz00_2522
																																			=
																																			BgL_exprz00_8885;
																																		goto
																																			BgL_zc3z04anonymousza32187ze3z87_2524;
																																	}
																																}
																															else
																																{	/* Ast/let.scm 598 */
																																	if (NULLP
																																		(BgL_bindingsz00_2523))
																																		{	/* Ast/let.scm 601 */
																																			obj_t
																																				BgL_arg2212z00_2562;
																																			{	/* Ast/let.scm 601 */
																																				obj_t
																																					BgL_arg2213z00_2563;
																																				obj_t
																																					BgL_arg2214z00_2564;
																																				BgL_arg2213z00_2563
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_bindingz00_2525,
																																					BNIL);
																																				BgL_arg2214z00_2564
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_z62letcollapsez62zzast_letz00
																																					(BgL_subexprz00_2527),
																																					BNIL);
																																				BgL_arg2212z00_2562
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg2213z00_2563,
																																					BgL_arg2214z00_2564);
																																			}
																																			return
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						0)),
																																				BgL_arg2212z00_2562);
																																		}
																																	else
																																		{	/* Ast/let.scm 603 */
																																			obj_t
																																				BgL_arg2216z00_2566;
																																			{	/* Ast/let.scm 603 */
																																				obj_t
																																					BgL_arg2217z00_2567;
																																				obj_t
																																					BgL_arg2218z00_2568;
																																				BgL_arg2217z00_2567
																																					=
																																					bgl_reverse
																																					(BgL_bindingsz00_2523);
																																				{	/* Ast/let.scm 604 */
																																					obj_t
																																						BgL_arg2219z00_2569;
																																					{	/* Ast/let.scm 604 */
																																						obj_t
																																							BgL_arg2220z00_2570;
																																						{	/* Ast/let.scm 604 */
																																							obj_t
																																								BgL_arg2221z00_2571;
																																							obj_t
																																								BgL_arg2222z00_2572;
																																							BgL_arg2221z00_2571
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_bindingz00_2525,
																																								BNIL);
																																							BgL_arg2222z00_2572
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_z62letcollapsez62zzast_letz00
																																								(BgL_subexprz00_2527),
																																								BNIL);
																																							BgL_arg2220z00_2570
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg2221z00_2571,
																																								BgL_arg2222z00_2572);
																																						}
																																						BgL_arg2219z00_2569
																																							=
																																							MAKE_YOUNG_PAIR
																																							(CNST_TABLE_REF
																																							(((long) 0)), BgL_arg2220z00_2570);
																																					}
																																					BgL_arg2218z00_2568
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg2219z00_2569,
																																						BNIL);
																																				}
																																				BgL_arg2216z00_2566
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg2217z00_2567,
																																					BgL_arg2218z00_2568);
																																			}
																																			return
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						0)),
																																				BgL_arg2216z00_2566);
																													}}}}
																												else
																													{	/* Ast/let.scm 593 */
																													BgL_tagzd2392zd2_2529:
																														if (NULLP
																															(BgL_bindingsz00_2523))
																															{	/* Ast/let.scm 606 */
																																return
																																	BgL_exprz00_2522;
																															}
																														else
																															{	/* Ast/let.scm 607 */
																																obj_t
																																	BgL_arg2225z00_2578;
																																{	/* Ast/let.scm 607 */
																																	obj_t
																																		BgL_arg2226z00_2579;
																																	obj_t
																																		BgL_arg2227z00_2580;
																																	BgL_arg2226z00_2579
																																		=
																																		bgl_reverse
																																		(BgL_bindingsz00_2523);
																																	BgL_arg2227z00_2580
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_exprz00_2522,
																																		BNIL);
																																	BgL_arg2225z00_2578
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg2226z00_2579,
																																		BgL_arg2227z00_2580);
																																}
																																return
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 0)),
																																	BgL_arg2225z00_2578);
																											}}}
																										else
																											{	/* Ast/let.scm 593 */
																												goto
																													BgL_tagzd2392zd2_2529;
																											}
																									}
																								else
																									{	/* Ast/let.scm 593 */
																										goto BgL_tagzd2392zd2_2529;
																									}
																							}
																						else
																							{	/* Ast/let.scm 593 */
																								goto BgL_tagzd2392zd2_2529;
																							}
																					}
																				else
																					{	/* Ast/let.scm 593 */
																						goto BgL_tagzd2392zd2_2529;
																					}
																			}
																		else
																			{	/* Ast/let.scm 593 */
																				goto BgL_tagzd2392zd2_2529;
																			}
																	}
																else
																	{	/* Ast/let.scm 593 */
																		goto BgL_tagzd2392zd2_2529;
																	}
															}
														else
															{	/* Ast/let.scm 593 */
																goto BgL_tagzd2392zd2_2529;
															}
													}
												else
													{	/* Ast/let.scm 593 */
														goto BgL_tagzd2392zd2_2529;
													}
											}
										else
											{	/* Ast/let.scm 593 */
												goto BgL_tagzd2392zd2_2529;
											}
									}
								}
							}
						else
							{	/* Ast/let.scm 637 */
								if ((CAR(BgL_exprz00_2653) == CNST_TABLE_REF(((long) 10))))
									{	/* Ast/let.scm 637 */
										BgL_exprz00_2582 = BgL_exprz00_2653;
										{
											obj_t BgL_exprz00_2586;
											obj_t BgL_bindingsz00_2587;

											BgL_exprz00_2586 = BgL_exprz00_2582;
											BgL_bindingsz00_2587 = BNIL;
										BgL_zc3z04anonymousza32229ze3z87_2588:
											{
												obj_t BgL_bindingz00_2589;
												obj_t BgL_valz00_2590;
												obj_t BgL_subexprz00_2591;

												if (PAIRP(BgL_exprz00_2586))
													{	/* Ast/let.scm 611 */
														obj_t BgL_cdrzd2436zd2_2596;

														BgL_cdrzd2436zd2_2596 = CDR(BgL_exprz00_2586);
														if (
															(CAR(BgL_exprz00_2586) ==
																CNST_TABLE_REF(((long) 10))))
															{	/* Ast/let.scm 611 */
																if (PAIRP(BgL_cdrzd2436zd2_2596))
																	{	/* Ast/let.scm 611 */
																		obj_t BgL_carzd2440zd2_2600;
																		obj_t BgL_cdrzd2441zd2_2601;

																		BgL_carzd2440zd2_2600 =
																			CAR(BgL_cdrzd2436zd2_2596);
																		BgL_cdrzd2441zd2_2601 =
																			CDR(BgL_cdrzd2436zd2_2596);
																		if (PAIRP(BgL_carzd2440zd2_2600))
																			{	/* Ast/let.scm 611 */
																				obj_t BgL_carzd2444zd2_2603;

																				BgL_carzd2444zd2_2603 =
																					CAR(BgL_carzd2440zd2_2600);
																				if (PAIRP(BgL_carzd2444zd2_2603))
																					{	/* Ast/let.scm 611 */
																						obj_t BgL_cdrzd2452zd2_2605;

																						BgL_cdrzd2452zd2_2605 =
																							CDR(BgL_carzd2444zd2_2603);
																						if (PAIRP(BgL_cdrzd2452zd2_2605))
																							{	/* Ast/let.scm 611 */
																								if (NULLP(CDR
																										(BgL_cdrzd2452zd2_2605)))
																									{	/* Ast/let.scm 611 */
																										if (NULLP(CDR
																												(BgL_carzd2440zd2_2600)))
																											{	/* Ast/let.scm 611 */
																												if (PAIRP
																													(BgL_cdrzd2441zd2_2601))
																													{	/* Ast/let.scm 611 */
																														if (NULLP(CDR
																																(BgL_cdrzd2441zd2_2601)))
																															{	/* Ast/let.scm 611 */
																																BgL_bindingz00_2589
																																	=
																																	BgL_carzd2444zd2_2603;
																																BgL_valz00_2590
																																	=
																																	CAR
																																	(BgL_cdrzd2452zd2_2605);
																																BgL_subexprz00_2591
																																	=
																																	CAR
																																	(BgL_cdrzd2441zd2_2601);
																																{	/* Ast/let.scm 616 */
																																	bool_t
																																		BgL_test4415z00_8949;
																																	{	/* Ast/let.scm 616 */

																																		BgL_test4415z00_8949
																																			=
																																			CBOOL
																																			(BGl_functionzf3zf3zzast_letz00
																																			(BgL_valz00_2590,
																																				BFALSE));
																																	}
																																	if (BgL_test4415z00_8949)
																																		{	/* Ast/let.scm 617 */
																																			obj_t
																																				BgL_arg2251z00_2623;
																																			BgL_arg2251z00_2623
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_bindingz00_2589,
																																				BgL_bindingsz00_2587);
																																			{
																																				obj_t
																																					BgL_bindingsz00_8954;
																																				obj_t
																																					BgL_exprz00_8953;
																																				BgL_exprz00_8953
																																					=
																																					BgL_subexprz00_2591;
																																				BgL_bindingsz00_8954
																																					=
																																					BgL_arg2251z00_2623;
																																				BgL_bindingsz00_2587
																																					=
																																					BgL_bindingsz00_8954;
																																				BgL_exprz00_2586
																																					=
																																					BgL_exprz00_8953;
																																				goto
																																					BgL_zc3z04anonymousza32229ze3z87_2588;
																																			}
																																		}
																																	else
																																		{	/* Ast/let.scm 616 */
																																			if (NULLP
																																				(BgL_bindingsz00_2587))
																																				{	/* Ast/let.scm 619 */
																																					obj_t
																																						BgL_arg2253z00_2625;
																																					{	/* Ast/let.scm 619 */
																																						obj_t
																																							BgL_arg2254z00_2626;
																																						obj_t
																																							BgL_arg2256z00_2627;
																																						BgL_arg2254z00_2626
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_bindingz00_2589,
																																							BNIL);
																																						BgL_arg2256z00_2627
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_z62letcollapsez62zzast_letz00
																																							(BgL_subexprz00_2591),
																																							BNIL);
																																						BgL_arg2253z00_2625
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg2254z00_2626,
																																							BgL_arg2256z00_2627);
																																					}
																																					return
																																						MAKE_YOUNG_PAIR
																																						(CNST_TABLE_REF
																																						(((long) 10)), BgL_arg2253z00_2625);
																																				}
																																			else
																																				{	/* Ast/let.scm 621 */
																																					obj_t
																																						BgL_arg2258z00_2629;
																																					{	/* Ast/let.scm 621 */
																																						obj_t
																																							BgL_arg2259z00_2630;
																																						obj_t
																																							BgL_arg2260z00_2631;
																																						BgL_arg2259z00_2630
																																							=
																																							bgl_reverse
																																							(BgL_bindingsz00_2587);
																																						{	/* Ast/let.scm 622 */
																																							obj_t
																																								BgL_arg2261z00_2632;
																																							{	/* Ast/let.scm 622 */
																																								obj_t
																																									BgL_arg2262z00_2633;
																																								{	/* Ast/let.scm 622 */
																																									obj_t
																																										BgL_arg2263z00_2634;
																																									obj_t
																																										BgL_arg2264z00_2635;
																																									BgL_arg2263z00_2634
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_bindingz00_2589,
																																										BNIL);
																																									BgL_arg2264z00_2635
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_z62letcollapsez62zzast_letz00
																																										(BgL_subexprz00_2591),
																																										BNIL);
																																									BgL_arg2262z00_2633
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg2263z00_2634,
																																										BgL_arg2264z00_2635);
																																								}
																																								BgL_arg2261z00_2632
																																									=
																																									MAKE_YOUNG_PAIR
																																									(CNST_TABLE_REF
																																									(((long) 10)), BgL_arg2262z00_2633);
																																							}
																																							BgL_arg2260z00_2631
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg2261z00_2632,
																																								BNIL);
																																						}
																																						BgL_arg2258z00_2629
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg2259z00_2630,
																																							BgL_arg2260z00_2631);
																																					}
																																					return
																																						MAKE_YOUNG_PAIR
																																						(CNST_TABLE_REF
																																						(((long) 10)), BgL_arg2258z00_2629);
																															}}}}
																														else
																															{	/* Ast/let.scm 611 */
																															BgL_tagzd2427zd2_2593:
																																if (NULLP
																																	(BgL_bindingsz00_2587))
																																	{	/* Ast/let.scm 624 */
																																		return
																																			BgL_exprz00_2586;
																																	}
																																else
																																	{	/* Ast/let.scm 625 */
																																		obj_t
																																			BgL_arg2267z00_2640;
																																		{	/* Ast/let.scm 625 */
																																			obj_t
																																				BgL_arg2268z00_2641;
																																			obj_t
																																				BgL_arg2269z00_2642;
																																			BgL_arg2268z00_2641
																																				=
																																				bgl_reverse
																																				(BgL_bindingsz00_2587);
																																			BgL_arg2269z00_2642
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_exprz00_2586,
																																				BNIL);
																																			BgL_arg2267z00_2640
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg2268z00_2641,
																																				BgL_arg2269z00_2642);
																																		}
																																		return
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					10)),
																																			BgL_arg2267z00_2640);
																													}}}
																												else
																													{	/* Ast/let.scm 611 */
																														goto
																															BgL_tagzd2427zd2_2593;
																													}
																											}
																										else
																											{	/* Ast/let.scm 611 */
																												goto
																													BgL_tagzd2427zd2_2593;
																											}
																									}
																								else
																									{	/* Ast/let.scm 611 */
																										goto BgL_tagzd2427zd2_2593;
																									}
																							}
																						else
																							{	/* Ast/let.scm 611 */
																								goto BgL_tagzd2427zd2_2593;
																							}
																					}
																				else
																					{	/* Ast/let.scm 611 */
																						goto BgL_tagzd2427zd2_2593;
																					}
																			}
																		else
																			{	/* Ast/let.scm 611 */
																				goto BgL_tagzd2427zd2_2593;
																			}
																	}
																else
																	{	/* Ast/let.scm 611 */
																		goto BgL_tagzd2427zd2_2593;
																	}
															}
														else
															{	/* Ast/let.scm 611 */
																goto BgL_tagzd2427zd2_2593;
															}
													}
												else
													{	/* Ast/let.scm 611 */
														goto BgL_tagzd2427zd2_2593;
													}
											}
										}
									}
								else
									{	/* Ast/let.scm 637 */
										if ((CAR(BgL_exprz00_2653) == CNST_TABLE_REF(((long) 8))))
											{	/* Ast/let.scm 637 */
												BgL_exprz00_2644 = BgL_exprz00_2653;
												{	/* Ast/let.scm 629 */
													obj_t BgL_arg2272z00_2646;

													{	/* Ast/let.scm 629 */
														obj_t BgL_res3757z00_5158;

														{	/* Ast/let.scm 629 */
															obj_t BgL_tmpz00_8987;

															BgL_tmpz00_8987 = BGL_CURRENT_DYNAMIC_ENV();
															BgL_res3757z00_5158 =
																BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_8987);
														}
														BgL_arg2272z00_2646 = BgL_res3757z00_5158;
													}
													{	/* Ast/let.scm 629 */
														obj_t BgL_list2273z00_2647;

														{	/* Ast/let.scm 629 */
															obj_t BgL_arg2275z00_2648;

															{	/* Ast/let.scm 629 */
																obj_t BgL_arg2276z00_2649;

																{	/* Ast/let.scm 629 */
																	obj_t BgL_arg2277z00_2650;

																	{	/* Ast/let.scm 629 */
																		obj_t BgL_arg2278z00_2651;

																		{	/* Ast/let.scm 629 */
																			obj_t BgL_arg2280z00_2652;

																			BgL_arg2280z00_2652 =
																				MAKE_YOUNG_PAIR(BgL_exprz00_2644, BNIL);
																			BgL_arg2278z00_2651 =
																				MAKE_YOUNG_PAIR
																				(BGl_string4048z00zzast_letz00,
																				BgL_arg2280z00_2652);
																		}
																		BgL_arg2277z00_2650 =
																			MAKE_YOUNG_PAIR
																			(BGl_string4049z00zzast_letz00,
																			BgL_arg2278z00_2651);
																	}
																	BgL_arg2276z00_2649 =
																		MAKE_YOUNG_PAIR(BINT(((long) 629)),
																		BgL_arg2277z00_2650);
																}
																BgL_arg2275z00_2648 =
																	MAKE_YOUNG_PAIR(BGl_string4050z00zzast_letz00,
																	BgL_arg2276z00_2649);
															}
															BgL_list2273z00_2647 =
																MAKE_YOUNG_PAIR(BGl_string4051z00zzast_letz00,
																BgL_arg2275z00_2648);
														}
														BGl_tprintz00zz__r4_output_6_10_3z00
															(BgL_arg2272z00_2646, BgL_list2273z00_2647);
												}}
												return BgL_exprz00_2644;
											}
										else
											{	/* Ast/let.scm 637 */
												return BgL_exprz00_2653;
											}
									}
							}
					}
				else
					{	/* Ast/let.scm 637 */
						return BgL_exprz00_2653;
					}
			}
		}

	}



/* &stage1 */
	BgL_nodez00_bglt BGl_z62stage1z62zzast_letz00(obj_t BgL_envz00_6188,
		obj_t BgL_ebindingsz00_6197, obj_t BgL_bodyz00_6198)
	{
		{	/* Ast/let.scm 1072 */
			{	/* Ast/let.scm 1054 */
				obj_t BgL_stage7z00_6189;
				obj_t BgL_stage5z00_6190;
				obj_t BgL_stage4z00_6191;
				obj_t BgL_stage3z00_6192;
				obj_t BgL_stackz00_6193;
				obj_t BgL_locz00_6194;
				obj_t BgL_sitez00_6195;
				obj_t BgL_stage2z00_6196;

				BgL_stage7z00_6189 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_6188, (int) (((long) 0))));
				BgL_stage5z00_6190 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_6188, (int) (((long) 1))));
				BgL_stage4z00_6191 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_6188, (int) (((long) 2))));
				BgL_stage3z00_6192 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_6188, (int) (((long) 3))));
				BgL_stackz00_6193 =
					PROCEDURE_L_REF(BgL_envz00_6188, (int) (((long) 4)));
				BgL_locz00_6194 = PROCEDURE_L_REF(BgL_envz00_6188, (int) (((long) 5)));
				BgL_sitez00_6195 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_6188, (int) (((long) 6))));
				BgL_stage2z00_6196 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_6188, (int) (((long) 7))));
				{
					obj_t BgL_ebindingsz00_6274;
					obj_t BgL_bodyz00_6275;
					obj_t BgL_splitz00_6276;
					obj_t BgL_kontz00_6277;

					{	/* Ast/let.scm 1054 */
						obj_t BgL_splitz00_6296;

						{	/* Ast/let.scm 1054 */
							int BgL_tmpz00_9020;

							BgL_tmpz00_9020 = (int) (((long) 0));
							BgL_splitz00_6296 = MAKE_EL_PROCEDURE(BgL_tmpz00_9020);
						}
						BgL_ebindingsz00_6274 = BgL_ebindingsz00_6197;
						BgL_bodyz00_6275 = BgL_bodyz00_6198;
						BgL_splitz00_6276 = BgL_splitz00_6296;
						BgL_kontz00_6277 = BgL_stage2z00_6196;
						if (NULLP(BgL_ebindingsz00_6274))
							{	/* Ast/let.scm 711 */
								return
									BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_bodyz00_6275,
									BgL_stackz00_6193, BgL_locz00_6194, BgL_sitez00_6195);
							}
						else
							{	/* Ast/let.scm 714 */
								obj_t BgL_recza2zd2bindingsz70_6278;

								BgL_recza2zd2bindingsz70_6278 =
									BGl_z62splitz62zzast_letz00(BgL_splitz00_6276,
									BgL_ebindingsz00_6274);
								{	/* Ast/let.scm 715 */
									obj_t BgL_tailzd2bindingszd2_6279;

									{	/* Ast/let.scm 721 */
										int BgL_tmpz00_9030;

										BgL_tmpz00_9030 = (int) (((long) 1));
										BgL_tailzd2bindingszd2_6279 =
											BGL_MVALUES_VAL(BgL_tmpz00_9030);
									}
									if (NULLP(BgL_tailzd2bindingszd2_6279))
										{	/* Ast/let.scm 721 */
											return
												BGl_z62stage2z62zzast_letz00(BgL_kontz00_6277,
												BgL_ebindingsz00_6274, BgL_bodyz00_6275);
										}
									else
										{	/* Ast/let.scm 721 */
											if (NULLP(BgL_recza2zd2bindingsz70_6278))
												{	/* Ast/let.scm 723 */
													return
														BGl_sexpzd2ze3nodez31zzast_sexpz00
														(BGl_z62letstarz62zzast_letz00
														(BgL_tailzd2bindingszd2_6279, BgL_bodyz00_6275),
														BgL_stackz00_6193, BgL_locz00_6194,
														BgL_sitez00_6195);
												}
											else
												{	/* Ast/let.scm 725 */
													obj_t BgL_arg2388z00_6280;

													{	/* Ast/let.scm 725 */
														obj_t BgL_arg2389z00_6281;

														{	/* Ast/let.scm 725 */
															obj_t BgL_arg2390z00_6282;
															obj_t BgL_arg2391z00_6283;

															{	/* Ast/let.scm 725 */
																obj_t BgL_head1503z00_6284;

																{	/* Ast/let.scm 725 */
																	obj_t BgL_arg2398z00_6285;

																	BgL_arg2398z00_6285 =
																		CAR(CAR(BgL_recza2zd2bindingsz70_6278));
																	{	/* Ast/let.scm 725 */
																		obj_t BgL_res3790z00_6286;

																		BgL_res3790z00_6286 =
																			MAKE_YOUNG_PAIR(BgL_arg2398z00_6285,
																			BNIL);
																		BgL_head1503z00_6284 = BgL_res3790z00_6286;
																	}
																}
																{	/* Ast/let.scm 725 */
																	obj_t BgL_g1506z00_6287;

																	BgL_g1506z00_6287 =
																		CDR(BgL_recza2zd2bindingsz70_6278);
																	{
																		obj_t BgL_l1501z00_6289;
																		obj_t BgL_tail1504z00_6290;

																		BgL_l1501z00_6289 = BgL_g1506z00_6287;
																		BgL_tail1504z00_6290 = BgL_head1503z00_6284;
																	BgL_zc3z04anonymousza32393ze3z87_6288:
																		if (NULLP(BgL_l1501z00_6289))
																			{	/* Ast/let.scm 725 */
																				BgL_arg2390z00_6282 =
																					BgL_head1503z00_6284;
																			}
																		else
																			{	/* Ast/let.scm 725 */
																				obj_t BgL_newtail1505z00_6291;

																				{	/* Ast/let.scm 725 */
																					obj_t BgL_arg2396z00_6292;

																					{	/* Ast/let.scm 559 */
																						obj_t BgL_pairz00_6293;

																						BgL_pairz00_6293 =
																							CAR(((obj_t) BgL_l1501z00_6289));
																						BgL_arg2396z00_6292 =
																							CAR(BgL_pairz00_6293);
																					}
																					{	/* Ast/let.scm 725 */
																						obj_t BgL_res3792z00_6294;

																						BgL_res3792z00_6294 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2396z00_6292, BNIL);
																						BgL_newtail1505z00_6291 =
																							BgL_res3792z00_6294;
																					}
																				}
																				SET_CDR(BgL_tail1504z00_6290,
																					BgL_newtail1505z00_6291);
																				{	/* Ast/let.scm 725 */
																					obj_t BgL_arg2395z00_6295;

																					BgL_arg2395z00_6295 =
																						CDR(((obj_t) BgL_l1501z00_6289));
																					{
																						obj_t BgL_tail1504z00_9058;
																						obj_t BgL_l1501z00_9057;

																						BgL_l1501z00_9057 =
																							BgL_arg2395z00_6295;
																						BgL_tail1504z00_9058 =
																							BgL_newtail1505z00_6291;
																						BgL_tail1504z00_6290 =
																							BgL_tail1504z00_9058;
																						BgL_l1501z00_6289 =
																							BgL_l1501z00_9057;
																						goto
																							BgL_zc3z04anonymousza32393ze3z87_6288;
																					}
																				}
																			}
																	}
																}
															}
															BgL_arg2391z00_6283 =
																MAKE_YOUNG_PAIR(BGl_z62letstarz62zzast_letz00
																(BgL_tailzd2bindingszd2_6279, BgL_bodyz00_6275),
																BNIL);
															BgL_arg2389z00_6281 =
																MAKE_YOUNG_PAIR(BgL_arg2390z00_6282,
																BgL_arg2391z00_6283);
														}
														BgL_arg2388z00_6280 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
															BgL_arg2389z00_6281);
													}
													return
														BGl_sexpzd2ze3nodez31zzast_sexpz00
														(BgL_arg2388z00_6280, BgL_stackz00_6193,
														BgL_locz00_6194, BgL_sitez00_6195);
												}
										}
								}
							}
					}
				}
			}
		}

	}



/* &split4038 */
	obj_t BGl_z62split4038z62zzast_letz00(obj_t BgL_envz00_6199,
		obj_t BgL_ebindingsz00_6200)
	{
		{	/* Ast/let.scm 1096 */
			{
				obj_t BgL_ebindingsz00_6298;
				obj_t BgL_reczd2bindingszd2_6299;
				obj_t BgL_recza2zd2bindingsz70_6300;

				BgL_ebindingsz00_6298 = BgL_ebindingsz00_6200;
				BgL_reczd2bindingszd2_6299 = BNIL;
				BgL_recza2zd2bindingsz70_6300 = BNIL;
			BgL_loopz00_6297:
				if (NULLP(BgL_ebindingsz00_6298))
					{	/* Ast/let.scm 1086 */
						obj_t BgL_val0_1599z00_6301;
						obj_t BgL_val1_1600z00_6302;

						BgL_val0_1599z00_6301 =
							bgl_reverse_bang(BgL_reczd2bindingszd2_6299);
						BgL_val1_1600z00_6302 =
							bgl_reverse_bang(BgL_recza2zd2bindingsz70_6300);
						{	/* Ast/let.scm 1086 */
							int BgL_res3965z00_6303;

							{	/* Ast/let.scm 1086 */
								int BgL_tmpz00_9069;

								BgL_tmpz00_9069 = (int) (((long) 2));
								BgL_res3965z00_6303 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_9069);
							} BgL_res3965z00_6303;
						}
						{	/* Ast/let.scm 1086 */
							int BgL_tmpz00_9072;

							BgL_tmpz00_9072 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_9072, BgL_val1_1600z00_6302);
						}
						return BgL_val0_1599z00_6301;
					}
				else
					{	/* Ast/let.scm 1087 */
						bool_t BgL_test4424z00_9075;

						{	/* Ast/let.scm 1087 */
							bool_t BgL_test4425z00_9076;

							{	/* Ast/let.scm 1087 */
								obj_t BgL_arg3325z00_6304;

								{	/* Ast/let.scm 560 */
									obj_t BgL_pairz00_6305;

									BgL_pairz00_6305 =
										CAR(((obj_t) CAR(((obj_t) BgL_ebindingsz00_6298))));
									BgL_arg3325z00_6304 = CAR(CDR(BgL_pairz00_6305));
								}
								BgL_test4425z00_9076 =
									BGl_loopze70ze7zzast_letz00(BgL_arg3325z00_6304);
							}
							if (BgL_test4425z00_9076)
								{	/* Ast/let.scm 1087 */
									BgL_test4424z00_9075 = ((bool_t) 0);
								}
							else
								{	/* Ast/let.scm 1088 */
									obj_t BgL_arg3322z00_6306;

									BgL_arg3322z00_6306 = CAR(((obj_t) BgL_ebindingsz00_6298));
									if (CBOOL(BGl_z62mutablezd2inzf3z43zzast_letz00
											(BgL_arg3322z00_6306, BgL_recza2zd2bindingsz70_6300)))
										{	/* Ast/let.scm 573 */
											BgL_test4424z00_9075 = ((bool_t) 0);
										}
									else
										{	/* Ast/let.scm 573 */
											BgL_test4424z00_9075 = ((bool_t) 1);
										}
								}
						}
						if (BgL_test4424z00_9075)
							{	/* Ast/let.scm 1090 */
								obj_t BgL_arg3312z00_6307;
								obj_t BgL_arg3316z00_6308;

								BgL_arg3312z00_6307 = CDR(((obj_t) BgL_ebindingsz00_6298));
								{	/* Ast/let.scm 1091 */
									obj_t BgL_arg3317z00_6309;

									BgL_arg3317z00_6309 = CAR(((obj_t) BgL_ebindingsz00_6298));
									BgL_arg3316z00_6308 =
										MAKE_YOUNG_PAIR(BgL_arg3317z00_6309,
										BgL_reczd2bindingszd2_6299);
								}
								{
									obj_t BgL_reczd2bindingszd2_9095;
									obj_t BgL_ebindingsz00_9094;

									BgL_ebindingsz00_9094 = BgL_arg3312z00_6307;
									BgL_reczd2bindingszd2_9095 = BgL_arg3316z00_6308;
									BgL_reczd2bindingszd2_6299 = BgL_reczd2bindingszd2_9095;
									BgL_ebindingsz00_6298 = BgL_ebindingsz00_9094;
									goto BgL_loopz00_6297;
								}
							}
						else
							{	/* Ast/let.scm 1094 */
								obj_t BgL_arg3318z00_6310;
								obj_t BgL_arg3319z00_6311;

								BgL_arg3318z00_6310 = CDR(((obj_t) BgL_ebindingsz00_6298));
								{	/* Ast/let.scm 1096 */
									obj_t BgL_arg3320z00_6312;

									BgL_arg3320z00_6312 = CAR(((obj_t) BgL_ebindingsz00_6298));
									BgL_arg3319z00_6311 =
										MAKE_YOUNG_PAIR(BgL_arg3320z00_6312,
										BgL_recza2zd2bindingsz70_6300);
								}
								{
									obj_t BgL_recza2zd2bindingsz70_9102;
									obj_t BgL_ebindingsz00_9101;

									BgL_ebindingsz00_9101 = BgL_arg3318z00_6310;
									BgL_recza2zd2bindingsz70_9102 = BgL_arg3319z00_6311;
									BgL_recza2zd2bindingsz70_6300 = BgL_recza2zd2bindingsz70_9102;
									BgL_ebindingsz00_6298 = BgL_ebindingsz00_9101;
									goto BgL_loopz00_6297;
								}
							}
					}
			}
		}

	}



/* &stage2 */
	BgL_nodez00_bglt BGl_z62stage2z62zzast_letz00(obj_t BgL_envz00_6201,
		obj_t BgL_ebindingsz00_6209, obj_t BgL_bodyz00_6210)
	{
		{	/* Ast/let.scm 1043 */
			{	/* Ast/let.scm 1017 */
				obj_t BgL_stage7z00_6202;
				obj_t BgL_stackz00_6203;
				obj_t BgL_locz00_6204;
				obj_t BgL_sitez00_6205;
				obj_t BgL_stage5z00_6206;
				obj_t BgL_stage4z00_6207;
				obj_t BgL_stage3z00_6208;

				BgL_stage7z00_6202 =
					((obj_t) PROCEDURE_EL_REF(BgL_envz00_6201, (int) (((long) 0))));
				BgL_stackz00_6203 =
					PROCEDURE_EL_REF(BgL_envz00_6201, (int) (((long) 1)));
				BgL_locz00_6204 = PROCEDURE_EL_REF(BgL_envz00_6201, (int) (((long) 2)));
				BgL_sitez00_6205 =
					((obj_t) PROCEDURE_EL_REF(BgL_envz00_6201, (int) (((long) 3))));
				BgL_stage5z00_6206 =
					((obj_t) PROCEDURE_EL_REF(BgL_envz00_6201, (int) (((long) 4))));
				BgL_stage4z00_6207 =
					((obj_t) PROCEDURE_EL_REF(BgL_envz00_6201, (int) (((long) 5))));
				BgL_stage3z00_6208 =
					((obj_t) PROCEDURE_EL_REF(BgL_envz00_6201, (int) (((long) 6))));
				return
					BGl_z62splitzd2headzd2letrecz62zzast_letz00(BgL_sitez00_6205,
					BgL_locz00_6204, BgL_stackz00_6203, BgL_ebindingsz00_6209,
					BgL_bodyz00_6210, BGl_proc4052z00zzast_letz00, BgL_stage3z00_6208);
			}
		}

	}



/* &split */
	obj_t BGl_z62splitz62zzast_letz00(obj_t BgL_envz00_6211,
		obj_t BgL_ebindingsz00_6212)
	{
		{	/* Ast/let.scm 1072 */
			{	/* Ast/let.scm 1054 */
				obj_t BgL_g1201z00_6314;

				BgL_g1201z00_6314 = bgl_reverse(BgL_ebindingsz00_6212);
				{
					obj_t BgL_ebindingsz00_6316;
					obj_t BgL_letza2zd2bindingsz70_6317;

					BgL_ebindingsz00_6316 = BgL_g1201z00_6314;
					BgL_letza2zd2bindingsz70_6317 = BNIL;
				BgL_loopz00_6315:
					if (NULLP(BgL_ebindingsz00_6316))
						{	/* Ast/let.scm 1057 */
							{	/* Ast/let.scm 1058 */
								int BgL_res3960z00_6318;

								{	/* Ast/let.scm 1058 */
									int BgL_tmpz00_9126;

									BgL_tmpz00_9126 = (int) (((long) 2));
									BgL_res3960z00_6318 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_9126);
								} BgL_res3960z00_6318;
							}
							{	/* Ast/let.scm 1058 */
								int BgL_tmpz00_9129;

								BgL_tmpz00_9129 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_9129,
									BgL_letza2zd2bindingsz70_6317);
							}
							return BNIL;
						}
					else
						{	/* Ast/let.scm 1059 */
							bool_t BgL_test4428z00_9132;

							{	/* Ast/let.scm 1059 */
								bool_t BgL_test4429z00_9133;

								{	/* Ast/let.scm 1059 */
									obj_t BgL_g1595z00_6319;

									{	/* Ast/let.scm 562 */
										obj_t BgL_pairz00_6320;

										BgL_pairz00_6320 = CAR(((obj_t) BgL_ebindingsz00_6316));
										BgL_g1595z00_6319 = CAR(CDR(CDR(BgL_pairz00_6320)));
									}
									{
										obj_t BgL_l1593z00_6322;

										BgL_l1593z00_6322 = BgL_g1595z00_6319;
									BgL_zc3z04anonymousza33281ze3z87_6321:
										if (NULLP(BgL_l1593z00_6322))
											{	/* Ast/let.scm 1063 */
												BgL_test4429z00_9133 = ((bool_t) 1);
											}
										else
											{	/* Ast/let.scm 1060 */
												obj_t BgL_nvz00_6323;

												{	/* Ast/let.scm 1060 */
													obj_t BgL_varz00_6324;

													BgL_varz00_6324 = CAR(((obj_t) BgL_l1593z00_6322));
													{	/* Ast/let.scm 1060 */
														obj_t BgL_g1592z00_6325;

														BgL_g1592z00_6325 =
															CDR(((obj_t) BgL_ebindingsz00_6316));
														{
															obj_t BgL_list1591z00_6327;

															BgL_list1591z00_6327 = BgL_g1592z00_6325;
														BgL_zc3z04anonymousza33285ze3z87_6326:
															if (PAIRP(BgL_list1591z00_6327))
																{	/* Ast/let.scm 1062 */
																	bool_t BgL_test4432z00_9147;

																	{	/* Ast/let.scm 1061 */
																		obj_t BgL_tmpz00_9148;

																		{	/* Ast/let.scm 561 */
																			obj_t BgL_pairz00_6328;

																			BgL_pairz00_6328 =
																				CDR(
																				((obj_t) CAR(BgL_list1591z00_6327)));
																			BgL_tmpz00_9148 = CAR(BgL_pairz00_6328);
																		}
																		BgL_test4432z00_9147 =
																			(BgL_varz00_6324 == BgL_tmpz00_9148);
																	}
																	if (BgL_test4432z00_9147)
																		{	/* Ast/let.scm 1062 */
																			BgL_nvz00_6323 =
																				CAR(BgL_list1591z00_6327);
																		}
																	else
																		{
																			obj_t BgL_list1591z00_9155;

																			BgL_list1591z00_9155 =
																				CDR(BgL_list1591z00_6327);
																			BgL_list1591z00_6327 =
																				BgL_list1591z00_9155;
																			goto
																				BgL_zc3z04anonymousza33285ze3z87_6326;
																		}
																}
															else
																{	/* Ast/let.scm 1062 */
																	BgL_nvz00_6323 = BFALSE;
																}
														}
													}
												}
												if (CBOOL(BgL_nvz00_6323))
													{	/* Ast/let.scm 1063 */
														obj_t BgL_arg3284z00_6329;

														BgL_arg3284z00_6329 =
															CDR(((obj_t) BgL_l1593z00_6322));
														{
															obj_t BgL_l1593z00_9161;

															BgL_l1593z00_9161 = BgL_arg3284z00_6329;
															BgL_l1593z00_6322 = BgL_l1593z00_9161;
															goto BgL_zc3z04anonymousza33281ze3z87_6321;
														}
													}
												else
													{	/* Ast/let.scm 1063 */
														BgL_test4429z00_9133 = ((bool_t) 0);
													}
											}
									}
								}
								if (BgL_test4429z00_9133)
									{	/* Ast/let.scm 1066 */
										bool_t BgL_test4434z00_9162;

										{	/* Ast/let.scm 1066 */
											obj_t BgL_arg3277z00_6330;
											obj_t BgL_arg3280z00_6331;

											BgL_arg3277z00_6330 =
												CAR(((obj_t) BgL_ebindingsz00_6316));
											BgL_arg3280z00_6331 =
												CDR(((obj_t) BgL_ebindingsz00_6316));
											BgL_test4434z00_9162 =
												CBOOL(BGl_z62usedzd2inzf3z43zzast_letz00
												(BgL_arg3277z00_6330, BgL_arg3280z00_6331));
										}
										if (BgL_test4434z00_9162)
											{	/* Ast/let.scm 1066 */
												BgL_test4428z00_9132 = ((bool_t) 0);
											}
										else
											{	/* Ast/let.scm 1066 */
												BgL_test4428z00_9132 = ((bool_t) 1);
											}
									}
								else
									{	/* Ast/let.scm 1059 */
										BgL_test4428z00_9132 = ((bool_t) 0);
									}
							}
							if (BgL_test4428z00_9132)
								{	/* Ast/let.scm 1067 */
									obj_t BgL_arg3272z00_6332;
									obj_t BgL_arg3273z00_6333;

									BgL_arg3272z00_6332 = CDR(((obj_t) BgL_ebindingsz00_6316));
									{	/* Ast/let.scm 1067 */
										obj_t BgL_arg3276z00_6334;

										BgL_arg3276z00_6334 = CAR(((obj_t) BgL_ebindingsz00_6316));
										BgL_arg3273z00_6333 =
											MAKE_YOUNG_PAIR(BgL_arg3276z00_6334,
											BgL_letza2zd2bindingsz70_6317);
									}
									{
										obj_t BgL_letza2zd2bindingsz70_9175;
										obj_t BgL_ebindingsz00_9174;

										BgL_ebindingsz00_9174 = BgL_arg3272z00_6332;
										BgL_letza2zd2bindingsz70_9175 = BgL_arg3273z00_6333;
										BgL_letza2zd2bindingsz70_6317 =
											BgL_letza2zd2bindingsz70_9175;
										BgL_ebindingsz00_6316 = BgL_ebindingsz00_9174;
										goto BgL_loopz00_6315;
									}
								}
							else
								{	/* Ast/let.scm 1072 */
									obj_t BgL_val0_1597z00_6335;

									BgL_val0_1597z00_6335 = bgl_reverse(BgL_ebindingsz00_6316);
									{	/* Ast/let.scm 1072 */
										int BgL_res3963z00_6336;

										{	/* Ast/let.scm 1072 */
											int BgL_tmpz00_9177;

											BgL_tmpz00_9177 = (int) (((long) 2));
											BgL_res3963z00_6336 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_9177);
										} BgL_res3963z00_6336;
									}
									{	/* Ast/let.scm 1072 */
										int BgL_tmpz00_9180;

										BgL_tmpz00_9180 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_9180,
											BgL_letza2zd2bindingsz70_6317);
									}
									return BgL_val0_1597z00_6335;
								}
						}
				}
			}
		}

	}



/* &stage3 */
	BgL_nodez00_bglt BGl_z62stage3z62zzast_letz00(obj_t BgL_envz00_6213,
		obj_t BgL_ebindingsz00_6220, obj_t BgL_bodyz00_6221)
	{
		{	/* Ast/let.scm 1007 */
			{	/* Ast/let.scm 985 */
				obj_t BgL_stage7z00_6214;
				obj_t BgL_stackz00_6215;
				obj_t BgL_locz00_6216;
				obj_t BgL_sitez00_6217;
				obj_t BgL_stage5z00_6218;
				obj_t BgL_stage4z00_6219;

				BgL_stage7z00_6214 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_6213, (int) (((long) 0))));
				BgL_stackz00_6215 =
					PROCEDURE_L_REF(BgL_envz00_6213, (int) (((long) 1)));
				BgL_locz00_6216 = PROCEDURE_L_REF(BgL_envz00_6213, (int) (((long) 2)));
				BgL_sitez00_6217 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_6213, (int) (((long) 3))));
				BgL_stage5z00_6218 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_6213, (int) (((long) 4))));
				BgL_stage4z00_6219 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_6213, (int) (((long) 5))));
				return
					BGl_z62splitzd2headzd2letrecz62zzast_letz00(BgL_sitez00_6217,
					BgL_locz00_6216, BgL_stackz00_6215, BgL_ebindingsz00_6220,
					BgL_bodyz00_6221, BGl_proc4053z00zzast_letz00, BgL_stage4z00_6219);
			}
		}

	}



/* &split4039 */
	obj_t BGl_z62split4039z62zzast_letz00(obj_t BgL_envz00_6222,
		obj_t BgL_ebindingsz00_6223)
	{
		{	/* Ast/let.scm 1043 */
			{
				obj_t BgL_ebindingsz00_6339;
				obj_t BgL_valzd2bindingszd2_6340;
				obj_t BgL_recza2zd2bindingsz70_6341;

				BgL_ebindingsz00_6339 = BgL_ebindingsz00_6223;
				BgL_valzd2bindingszd2_6340 = BNIL;
				BgL_recza2zd2bindingsz70_6341 = BNIL;
			BgL_loopz00_6338:
				if (NULLP(BgL_ebindingsz00_6339))
					{	/* Ast/let.scm 1022 */
						obj_t BgL_val0_1578z00_6342;
						obj_t BgL_val1_1579z00_6343;

						BgL_val0_1578z00_6342 =
							bgl_reverse_bang(BgL_valzd2bindingszd2_6340);
						BgL_val1_1579z00_6343 =
							bgl_reverse_bang(BgL_recza2zd2bindingsz70_6341);
						{	/* Ast/let.scm 1022 */
							int BgL_res3955z00_6344;

							{	/* Ast/let.scm 1022 */
								int BgL_tmpz00_9204;

								BgL_tmpz00_9204 = (int) (((long) 2));
								BgL_res3955z00_6344 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_9204);
							} BgL_res3955z00_6344;
						}
						{	/* Ast/let.scm 1022 */
							int BgL_tmpz00_9207;

							BgL_tmpz00_9207 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_9207, BgL_val1_1579z00_6343);
						}
						return BgL_val0_1578z00_6342;
					}
				else
					{	/* Ast/let.scm 1023 */
						bool_t BgL_test4436z00_9210;

						{	/* Ast/let.scm 1023 */
							bool_t BgL_test4437z00_9211;

							{	/* Ast/let.scm 1023 */
								obj_t BgL_arg3234z00_6345;

								{	/* Ast/let.scm 560 */
									obj_t BgL_pairz00_6346;

									BgL_pairz00_6346 =
										CAR(((obj_t) CAR(((obj_t) BgL_ebindingsz00_6339))));
									BgL_arg3234z00_6345 = CAR(CDR(BgL_pairz00_6346));
								}
								{	/* Ast/let.scm 1023 */

									BgL_test4437z00_9211 =
										CBOOL(BGl_functionzf3zf3zzast_letz00(BgL_arg3234z00_6345,
											BFALSE));
								}
							}
							if (BgL_test4437z00_9211)
								{	/* Ast/let.scm 1024 */
									obj_t BgL_arg3231z00_6347;
									obj_t BgL_arg3233z00_6348;

									BgL_arg3231z00_6347 = CAR(((obj_t) BgL_ebindingsz00_6339));
									BgL_arg3233z00_6348 = CDR(((obj_t) BgL_ebindingsz00_6339));
									if (CBOOL(BGl_z62mutablezd2inzf3z43zzast_letz00
											(BgL_arg3231z00_6347, ((obj_t) BgL_arg3233z00_6348))))
										{	/* Ast/let.scm 573 */
											BgL_test4436z00_9210 = ((bool_t) 0);
										}
									else
										{	/* Ast/let.scm 573 */
											BgL_test4436z00_9210 = ((bool_t) 1);
										}
								}
							else
								{	/* Ast/let.scm 1023 */
									BgL_test4436z00_9210 = ((bool_t) 0);
								}
						}
						if (BgL_test4436z00_9210)
							{	/* Ast/let.scm 1025 */
								obj_t BgL_arg3164z00_6349;
								obj_t BgL_arg3166z00_6350;

								BgL_arg3164z00_6349 = CDR(((obj_t) BgL_ebindingsz00_6339));
								{	/* Ast/let.scm 1027 */
									obj_t BgL_arg3167z00_6351;

									BgL_arg3167z00_6351 = CAR(((obj_t) BgL_ebindingsz00_6339));
									BgL_arg3166z00_6350 =
										MAKE_YOUNG_PAIR(BgL_arg3167z00_6351,
										BgL_recza2zd2bindingsz70_6341);
								}
								{
									obj_t BgL_recza2zd2bindingsz70_9234;
									obj_t BgL_ebindingsz00_9233;

									BgL_ebindingsz00_9233 = BgL_arg3164z00_6349;
									BgL_recza2zd2bindingsz70_9234 = BgL_arg3166z00_6350;
									BgL_recza2zd2bindingsz70_6341 = BgL_recza2zd2bindingsz70_9234;
									BgL_ebindingsz00_6339 = BgL_ebindingsz00_9233;
									goto BgL_loopz00_6338;
								}
							}
						else
							{	/* Ast/let.scm 1028 */
								bool_t BgL_test4439z00_9235;

								{	/* Ast/let.scm 1028 */
									bool_t BgL_test4440z00_9236;

									{	/* Ast/let.scm 1028 */
										obj_t BgL_arg3229z00_6352;

										{	/* Ast/let.scm 560 */
											obj_t BgL_pairz00_6353;

											BgL_pairz00_6353 =
												CAR(((obj_t) CAR(((obj_t) BgL_ebindingsz00_6339))));
											BgL_arg3229z00_6352 = CAR(CDR(BgL_pairz00_6353));
										}
										{	/* Ast/let.scm 1028 */

											BgL_test4440z00_9236 =
												CBOOL(BGl_functionzf3zf3zzast_letz00
												(BgL_arg3229z00_6352, BFALSE));
										}
									}
									if (BgL_test4440z00_9236)
										{	/* Ast/let.scm 1028 */
											BgL_test4439z00_9235 = ((bool_t) 0);
										}
									else
										{	/* Ast/let.scm 1029 */
											bool_t BgL_test4441z00_9245;

											{	/* Ast/let.scm 1029 */
												obj_t BgL_g1585z00_6354;

												{	/* Ast/let.scm 562 */
													obj_t BgL_pairz00_6355;

													BgL_pairz00_6355 =
														CAR(((obj_t) BgL_ebindingsz00_6339));
													BgL_g1585z00_6354 = CAR(CDR(CDR(BgL_pairz00_6355)));
												}
												{
													obj_t BgL_list1584z00_6357;

													{	/* Ast/let.scm 1033 */
														obj_t BgL_tmpz00_9251;

														BgL_list1584z00_6357 = BgL_g1585z00_6354;
													BgL_zc3z04anonymousza33220ze3z87_6356:
														if (PAIRP(BgL_list1584z00_6357))
															{	/* Ast/let.scm 1033 */
																bool_t BgL_test4443z00_9254;

																{	/* Ast/let.scm 1030 */
																	obj_t BgL_varz00_6358;

																	BgL_varz00_6358 = CAR(BgL_list1584z00_6357);
																	{	/* Ast/let.scm 1030 */
																		bool_t BgL_test4444z00_9256;

																		{	/* Ast/let.scm 1030 */
																			obj_t BgL_g1582z00_6359;

																			BgL_g1582z00_6359 =
																				CDR(((obj_t) BgL_ebindingsz00_6339));
																			{
																				obj_t BgL_list1581z00_6361;

																				{	/* Ast/let.scm 1032 */
																					obj_t BgL_tmpz00_9259;

																					BgL_list1581z00_6361 =
																						BgL_g1582z00_6359;
																				BgL_zc3z04anonymousza33223ze3z87_6360:
																					if (PAIRP(BgL_list1581z00_6361))
																						{	/* Ast/let.scm 1032 */
																							bool_t BgL_test4446z00_9262;

																							{	/* Ast/let.scm 1031 */
																								obj_t BgL_tmpz00_9263;

																								{	/* Ast/let.scm 561 */
																									obj_t BgL_pairz00_6362;

																									BgL_pairz00_6362 =
																										CDR(
																										((obj_t)
																											CAR
																											(BgL_list1581z00_6361)));
																									BgL_tmpz00_9263 =
																										CAR(BgL_pairz00_6362);
																								}
																								BgL_test4446z00_9262 =
																									(BgL_tmpz00_9263 ==
																									BgL_varz00_6358);
																							}
																							if (BgL_test4446z00_9262)
																								{	/* Ast/let.scm 1032 */
																									BgL_tmpz00_9259 =
																										CAR(BgL_list1581z00_6361);
																								}
																							else
																								{
																									obj_t BgL_list1581z00_9270;

																									BgL_list1581z00_9270 =
																										CDR(BgL_list1581z00_6361);
																									BgL_list1581z00_6361 =
																										BgL_list1581z00_9270;
																									goto
																										BgL_zc3z04anonymousza33223ze3z87_6360;
																								}
																						}
																					else
																						{	/* Ast/let.scm 1032 */
																							BgL_tmpz00_9259 = BFALSE;
																						}
																					BgL_test4444z00_9256 =
																						CBOOL(BgL_tmpz00_9259);
																				}
																			}
																		}
																		if (BgL_test4444z00_9256)
																			{	/* Ast/let.scm 1030 */
																				BgL_test4443z00_9254 = ((bool_t) 0);
																			}
																		else
																			{	/* Ast/let.scm 1030 */
																				BgL_test4443z00_9254 = ((bool_t) 1);
																			}
																	}
																}
																if (BgL_test4443z00_9254)
																	{	/* Ast/let.scm 1033 */
																		BgL_tmpz00_9251 = CAR(BgL_list1584z00_6357);
																	}
																else
																	{
																		obj_t BgL_list1584z00_9274;

																		BgL_list1584z00_9274 =
																			CDR(BgL_list1584z00_6357);
																		BgL_list1584z00_6357 = BgL_list1584z00_9274;
																		goto BgL_zc3z04anonymousza33220ze3z87_6356;
																	}
															}
														else
															{	/* Ast/let.scm 1033 */
																BgL_tmpz00_9251 = BFALSE;
															}
														BgL_test4441z00_9245 = CBOOL(BgL_tmpz00_9251);
													}
												}
											}
											if (BgL_test4441z00_9245)
												{	/* Ast/let.scm 1029 */
													BgL_test4439z00_9235 = ((bool_t) 0);
												}
											else
												{	/* Ast/let.scm 1034 */
													obj_t BgL_arg3219z00_6363;

													BgL_arg3219z00_6363 =
														CAR(((obj_t) BgL_ebindingsz00_6339));
													if (CBOOL(BGl_z62mutablezd2inzf3z43zzast_letz00
															(BgL_arg3219z00_6363,
																BgL_recza2zd2bindingsz70_6341)))
														{	/* Ast/let.scm 573 */
															BgL_test4439z00_9235 = ((bool_t) 0);
														}
													else
														{	/* Ast/let.scm 573 */
															BgL_test4439z00_9235 = ((bool_t) 1);
														}
												}
										}
								}
								if (BgL_test4439z00_9235)
									{	/* Ast/let.scm 1037 */
										obj_t BgL_arg3212z00_6364;
										obj_t BgL_arg3214z00_6365;

										BgL_arg3212z00_6364 = CDR(((obj_t) BgL_ebindingsz00_6339));
										{	/* Ast/let.scm 1038 */
											obj_t BgL_arg3215z00_6366;

											BgL_arg3215z00_6366 =
												CAR(((obj_t) BgL_ebindingsz00_6339));
											BgL_arg3214z00_6365 =
												MAKE_YOUNG_PAIR(BgL_arg3215z00_6366,
												BgL_valzd2bindingszd2_6340);
										}
										{
											obj_t BgL_valzd2bindingszd2_9288;
											obj_t BgL_ebindingsz00_9287;

											BgL_ebindingsz00_9287 = BgL_arg3212z00_6364;
											BgL_valzd2bindingszd2_9288 = BgL_arg3214z00_6365;
											BgL_valzd2bindingszd2_6340 = BgL_valzd2bindingszd2_9288;
											BgL_ebindingsz00_6339 = BgL_ebindingsz00_9287;
											goto BgL_loopz00_6338;
										}
									}
								else
									{	/* Ast/let.scm 1042 */
										obj_t BgL_val0_1586z00_6367;
										obj_t BgL_val1_1587z00_6368;

										BgL_val0_1586z00_6367 =
											bgl_reverse_bang(BgL_valzd2bindingszd2_6340);
										BgL_val1_1587z00_6368 =
											BGl_appendzd221011zd2zzast_letz00(bgl_reverse_bang
											(BgL_recza2zd2bindingsz70_6341), BgL_ebindingsz00_6339);
										{	/* Ast/let.scm 1042 */
											int BgL_res3958z00_6369;

											{	/* Ast/let.scm 1042 */
												int BgL_tmpz00_9292;

												BgL_tmpz00_9292 = (int) (((long) 2));
												BgL_res3958z00_6369 =
													BGL_MVALUES_NUMBER_SET(BgL_tmpz00_9292);
											} BgL_res3958z00_6369;
										}
										{	/* Ast/let.scm 1042 */
											int BgL_tmpz00_9295;

											BgL_tmpz00_9295 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_tmpz00_9295,
												BgL_val1_1587z00_6368);
										}
										return BgL_val0_1586z00_6367;
									}
							}
					}
			}
		}

	}



/* &stage4 */
	BgL_nodez00_bglt BGl_z62stage4z62zzast_letz00(obj_t BgL_envz00_6224,
		obj_t BgL_ebindingsz00_6230, obj_t BgL_bodyz00_6231)
	{
		{	/* Ast/let.scm 975 */
			{	/* Ast/let.scm 961 */
				obj_t BgL_stage7z00_6225;
				obj_t BgL_stackz00_6226;
				obj_t BgL_locz00_6227;
				obj_t BgL_sitez00_6228;
				obj_t BgL_stage5z00_6229;

				BgL_stage7z00_6225 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_6224, (int) (((long) 0))));
				BgL_stackz00_6226 =
					PROCEDURE_L_REF(BgL_envz00_6224, (int) (((long) 1)));
				BgL_locz00_6227 = PROCEDURE_L_REF(BgL_envz00_6224, (int) (((long) 2)));
				BgL_sitez00_6228 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_6224, (int) (((long) 3))));
				BgL_stage5z00_6229 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_6224, (int) (((long) 4))));
				{
					obj_t BgL_ebindingsz00_6371;
					obj_t BgL_bodyz00_6372;
					obj_t BgL_splitz00_6373;
					obj_t BgL_kontz00_6374;

					{	/* Ast/let.scm 961 */
						obj_t BgL_splitz00_6396;

						{	/* Ast/let.scm 961 */
							int BgL_tmpz00_9311;

							BgL_tmpz00_9311 = (int) (((long) 0));
							BgL_splitz00_6396 = MAKE_EL_PROCEDURE(BgL_tmpz00_9311);
						}
						BgL_ebindingsz00_6371 = BgL_ebindingsz00_6230;
						BgL_bodyz00_6372 = BgL_bodyz00_6231;
						BgL_splitz00_6373 = BgL_splitz00_6396;
						BgL_kontz00_6374 = BgL_stage5z00_6229;
						if (NULLP(BgL_ebindingsz00_6371))
							{	/* Ast/let.scm 672 */
								return
									BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_bodyz00_6372,
									BgL_stackz00_6226, BgL_locz00_6227, BgL_sitez00_6228);
							}
						else
							{	/* Ast/let.scm 675 */
								obj_t BgL_letzd2bindingszd2_6375;

								BgL_letzd2bindingszd2_6375 =
									BGl_z62split4041z62zzast_letz00(BgL_splitz00_6373,
									BgL_ebindingsz00_6371);
								{	/* Ast/let.scm 676 */
									obj_t BgL_recza2zd2bindingsz70_6376;

									{	/* Ast/let.scm 681 */
										int BgL_tmpz00_9321;

										BgL_tmpz00_9321 = (int) (((long) 1));
										BgL_recza2zd2bindingsz70_6376 =
											BGL_MVALUES_VAL(BgL_tmpz00_9321);
									}
									if (NULLP(BgL_letzd2bindingszd2_6375))
										{	/* Ast/let.scm 681 */
											return
												BGl_z62stage5z62zzast_letz00(BgL_kontz00_6374,
												BgL_ebindingsz00_6371, BgL_bodyz00_6372);
										}
									else
										{	/* Ast/let.scm 685 */
											obj_t BgL_arg2339z00_6377;

											{	/* Ast/let.scm 685 */
												obj_t BgL_arg2340z00_6378;

												{	/* Ast/let.scm 685 */
													obj_t BgL_arg2341z00_6379;

													{	/* Ast/let.scm 685 */
														obj_t BgL_arg2342z00_6380;

														{	/* Ast/let.scm 685 */
															obj_t BgL_arg2343z00_6381;
															obj_t BgL_arg2345z00_6382;

															if (NULLP(BgL_recza2zd2bindingsz70_6376))
																{	/* Ast/let.scm 685 */
																	BgL_arg2343z00_6381 = BNIL;
																}
															else
																{	/* Ast/let.scm 685 */
																	obj_t BgL_head1485z00_6383;

																	{	/* Ast/let.scm 685 */
																		obj_t BgL_arg2352z00_6384;

																		{	/* Ast/let.scm 559 */
																			obj_t BgL_pairz00_6385;

																			BgL_pairz00_6385 =
																				CAR(
																				((obj_t)
																					BgL_recza2zd2bindingsz70_6376));
																			BgL_arg2352z00_6384 =
																				CAR(BgL_pairz00_6385);
																		}
																		{	/* Ast/let.scm 685 */
																			obj_t BgL_res3773z00_6386;

																			BgL_res3773z00_6386 =
																				MAKE_YOUNG_PAIR(BgL_arg2352z00_6384,
																				BNIL);
																			BgL_head1485z00_6383 =
																				BgL_res3773z00_6386;
																		}
																	}
																	{	/* Ast/let.scm 685 */
																		obj_t BgL_g1488z00_6387;

																		BgL_g1488z00_6387 =
																			CDR(
																			((obj_t) BgL_recza2zd2bindingsz70_6376));
																		{
																			obj_t BgL_l1483z00_6389;
																			obj_t BgL_tail1486z00_6390;

																			BgL_l1483z00_6389 = BgL_g1488z00_6387;
																			BgL_tail1486z00_6390 =
																				BgL_head1485z00_6383;
																		BgL_zc3z04anonymousza32347ze3z87_6388:
																			if (NULLP(BgL_l1483z00_6389))
																				{	/* Ast/let.scm 685 */
																					BgL_arg2343z00_6381 =
																						BgL_head1485z00_6383;
																				}
																			else
																				{	/* Ast/let.scm 685 */
																					obj_t BgL_newtail1487z00_6391;

																					{	/* Ast/let.scm 685 */
																						obj_t BgL_arg2350z00_6392;

																						{	/* Ast/let.scm 559 */
																							obj_t BgL_pairz00_6393;

																							BgL_pairz00_6393 =
																								CAR(
																								((obj_t) BgL_l1483z00_6389));
																							BgL_arg2350z00_6392 =
																								CAR(BgL_pairz00_6393);
																						}
																						{	/* Ast/let.scm 685 */
																							obj_t BgL_res3775z00_6394;

																							BgL_res3775z00_6394 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg2350z00_6392, BNIL);
																							BgL_newtail1487z00_6391 =
																								BgL_res3775z00_6394;
																						}
																					}
																					SET_CDR(BgL_tail1486z00_6390,
																						BgL_newtail1487z00_6391);
																					{	/* Ast/let.scm 685 */
																						obj_t BgL_arg2349z00_6395;

																						BgL_arg2349z00_6395 =
																							CDR(((obj_t) BgL_l1483z00_6389));
																						{
																							obj_t BgL_tail1486z00_9349;
																							obj_t BgL_l1483z00_9348;

																							BgL_l1483z00_9348 =
																								BgL_arg2349z00_6395;
																							BgL_tail1486z00_9349 =
																								BgL_newtail1487z00_6391;
																							BgL_tail1486z00_6390 =
																								BgL_tail1486z00_9349;
																							BgL_l1483z00_6389 =
																								BgL_l1483z00_9348;
																							goto
																								BgL_zc3z04anonymousza32347ze3z87_6388;
																						}
																					}
																				}
																		}
																	}
																}
															BgL_arg2345z00_6382 =
																MAKE_YOUNG_PAIR(BgL_bodyz00_6372, BNIL);
															BgL_arg2342z00_6380 =
																MAKE_YOUNG_PAIR(BgL_arg2343z00_6381,
																BgL_arg2345z00_6382);
														}
														BgL_arg2341z00_6379 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
															BgL_arg2342z00_6380);
													}
													BgL_arg2340z00_6378 =
														BGl_z62letstarz62zzast_letz00
														(BgL_letzd2bindingszd2_6375, BgL_arg2341z00_6379);
												}
												BgL_arg2339z00_6377 =
													BGl_z62letcollapsez62zzast_letz00
													(BgL_arg2340z00_6378);
											}
											return
												BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg2339z00_6377,
												BgL_stackz00_6226, BgL_locz00_6227, BgL_sitez00_6228);
										}
								}
							}
					}
				}
			}
		}

	}



/* &split4040 */
	obj_t BGl_z62split4040z62zzast_letz00(obj_t BgL_envz00_6232,
		obj_t BgL_ebindingsz00_6233)
	{
		{	/* Ast/let.scm 1007 */
			{
				obj_t BgL_ebindingsz00_6398;
				obj_t BgL_funzd2bindingszd2_6399;
				obj_t BgL_recza2zd2bindingsz70_6400;

				BgL_ebindingsz00_6398 = BgL_ebindingsz00_6233;
				BgL_funzd2bindingszd2_6399 = BNIL;
				BgL_recza2zd2bindingsz70_6400 = BNIL;
			BgL_loopz00_6397:
				if (NULLP(BgL_ebindingsz00_6398))
					{	/* Ast/let.scm 990 */
						obj_t BgL_val0_1572z00_6401;
						obj_t BgL_val1_1573z00_6402;

						BgL_val0_1572z00_6401 =
							bgl_reverse_bang(BgL_funzd2bindingszd2_6399);
						BgL_val1_1573z00_6402 =
							bgl_reverse_bang(BgL_recza2zd2bindingsz70_6400);
						{	/* Ast/let.scm 990 */
							int BgL_res3950z00_6403;

							{	/* Ast/let.scm 990 */
								int BgL_tmpz00_9361;

								BgL_tmpz00_9361 = (int) (((long) 2));
								BgL_res3950z00_6403 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_9361);
							} BgL_res3950z00_6403;
						}
						{	/* Ast/let.scm 990 */
							int BgL_tmpz00_9364;

							BgL_tmpz00_9364 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_9364, BgL_val1_1573z00_6402);
						}
						return BgL_val0_1572z00_6401;
					}
				else
					{	/* Ast/let.scm 991 */
						bool_t BgL_test4453z00_9367;

						{	/* Ast/let.scm 991 */
							bool_t BgL_test4454z00_9368;

							{	/* Ast/let.scm 991 */
								obj_t BgL_arg3146z00_6404;

								{	/* Ast/let.scm 560 */
									obj_t BgL_pairz00_6405;

									BgL_pairz00_6405 =
										CAR(((obj_t) CAR(((obj_t) BgL_ebindingsz00_6398))));
									BgL_arg3146z00_6404 = CAR(CDR(BgL_pairz00_6405));
								}
								{	/* Ast/let.scm 991 */

									BgL_test4454z00_9368 =
										CBOOL(BGl_functionzf3zf3zzast_letz00(BgL_arg3146z00_6404,
											BFALSE));
								}
							}
							if (BgL_test4454z00_9368)
								{	/* Ast/let.scm 992 */
									bool_t BgL_test4455z00_9377;

									{
										obj_t BgL_list1575z00_6407;

										{	/* Ast/let.scm 992 */
											obj_t BgL_tmpz00_9378;

											BgL_list1575z00_6407 = BgL_ebindingsz00_6398;
										BgL_zc3z04anonymousza33139ze3z87_6406:
											if (PAIRP(BgL_list1575z00_6407))
												{	/* Ast/let.scm 992 */
													bool_t BgL_test4457z00_9381;

													{	/* Ast/let.scm 993 */
														obj_t BgL_tmpz00_9382;

														{	/* Ast/let.scm 993 */
															obj_t BgL_auxz00_9388;
															obj_t BgL_auxz00_9383;

															{	/* Ast/let.scm 563 */
																obj_t BgL_pairz00_6409;

																{	/* Ast/let.scm 563 */
																	obj_t BgL_pairz00_6410;

																	{	/* Ast/let.scm 563 */
																		obj_t BgL_pairz00_6411;

																		BgL_pairz00_6411 =
																			CDR(((obj_t) CAR(BgL_list1575z00_6407)));
																		BgL_pairz00_6410 = CDR(BgL_pairz00_6411);
																	}
																	BgL_pairz00_6409 = CDR(BgL_pairz00_6410);
																}
																BgL_auxz00_9388 = CAR(BgL_pairz00_6409);
															}
															{	/* Ast/let.scm 561 */
																obj_t BgL_pairz00_6408;

																BgL_pairz00_6408 =
																	CAR(((obj_t) BgL_ebindingsz00_6398));
																BgL_auxz00_9383 = CAR(CDR(BgL_pairz00_6408));
															}
															BgL_tmpz00_9382 =
																BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																(BgL_auxz00_9383, BgL_auxz00_9388);
														}
														BgL_test4457z00_9381 = CBOOL(BgL_tmpz00_9382);
													}
													if (BgL_test4457z00_9381)
														{	/* Ast/let.scm 992 */
															BgL_tmpz00_9378 = CAR(BgL_list1575z00_6407);
														}
													else
														{
															obj_t BgL_list1575z00_9398;

															BgL_list1575z00_9398 = CDR(BgL_list1575z00_6407);
															BgL_list1575z00_6407 = BgL_list1575z00_9398;
															goto BgL_zc3z04anonymousza33139ze3z87_6406;
														}
												}
											else
												{	/* Ast/let.scm 992 */
													BgL_tmpz00_9378 = BFALSE;
												}
											BgL_test4455z00_9377 = CBOOL(BgL_tmpz00_9378);
										}
									}
									if (BgL_test4455z00_9377)
										{	/* Ast/let.scm 992 */
											BgL_test4453z00_9367 = ((bool_t) 0);
										}
									else
										{	/* Ast/let.scm 992 */
											BgL_test4453z00_9367 = ((bool_t) 1);
										}
								}
							else
								{	/* Ast/let.scm 991 */
									BgL_test4453z00_9367 = ((bool_t) 0);
								}
						}
						if (BgL_test4453z00_9367)
							{	/* Ast/let.scm 997 */
								bool_t BgL_test4458z00_9401;

								{	/* Ast/let.scm 997 */
									obj_t BgL_tmpz00_9402;

									{	/* Ast/let.scm 562 */
										obj_t BgL_pairz00_6412;

										BgL_pairz00_6412 = CAR(((obj_t) BgL_ebindingsz00_6398));
										BgL_tmpz00_9402 = CAR(CDR(CDR(BgL_pairz00_6412)));
									}
									BgL_test4458z00_9401 = NULLP(BgL_tmpz00_9402);
								}
								if (BgL_test4458z00_9401)
									{	/* Ast/let.scm 998 */
										obj_t BgL_arg3128z00_6413;
										obj_t BgL_arg3129z00_6414;

										BgL_arg3128z00_6413 = CDR(((obj_t) BgL_ebindingsz00_6398));
										{	/* Ast/let.scm 999 */
											obj_t BgL_arg3130z00_6415;

											BgL_arg3130z00_6415 =
												CAR(((obj_t) BgL_ebindingsz00_6398));
											BgL_arg3129z00_6414 =
												MAKE_YOUNG_PAIR(BgL_arg3130z00_6415,
												BgL_funzd2bindingszd2_6399);
										}
										{
											obj_t BgL_funzd2bindingszd2_9415;
											obj_t BgL_ebindingsz00_9414;

											BgL_ebindingsz00_9414 = BgL_arg3128z00_6413;
											BgL_funzd2bindingszd2_9415 = BgL_arg3129z00_6414;
											BgL_funzd2bindingszd2_6399 = BgL_funzd2bindingszd2_9415;
											BgL_ebindingsz00_6398 = BgL_ebindingsz00_9414;
											goto BgL_loopz00_6397;
										}
									}
								else
									{	/* Ast/let.scm 1001 */
										obj_t BgL_arg3132z00_6416;
										obj_t BgL_arg3133z00_6417;

										BgL_arg3132z00_6416 = CDR(((obj_t) BgL_ebindingsz00_6398));
										{	/* Ast/let.scm 1003 */
											obj_t BgL_arg3135z00_6418;

											BgL_arg3135z00_6418 =
												CAR(((obj_t) BgL_ebindingsz00_6398));
											BgL_arg3133z00_6417 =
												MAKE_YOUNG_PAIR(BgL_arg3135z00_6418,
												BgL_recza2zd2bindingsz70_6400);
										}
										{
											obj_t BgL_recza2zd2bindingsz70_9422;
											obj_t BgL_ebindingsz00_9421;

											BgL_ebindingsz00_9421 = BgL_arg3132z00_6416;
											BgL_recza2zd2bindingsz70_9422 = BgL_arg3133z00_6417;
											BgL_recza2zd2bindingsz70_6400 =
												BgL_recza2zd2bindingsz70_9422;
											BgL_ebindingsz00_6398 = BgL_ebindingsz00_9421;
											goto BgL_loopz00_6397;
										}
									}
							}
						else
							{	/* Ast/let.scm 1006 */
								obj_t BgL_val0_1576z00_6419;
								obj_t BgL_val1_1577z00_6420;

								BgL_val0_1576z00_6419 =
									bgl_reverse_bang(BgL_funzd2bindingszd2_6399);
								BgL_val1_1577z00_6420 =
									BGl_appendzd221011zd2zzast_letz00(bgl_reverse_bang
									(BgL_recza2zd2bindingsz70_6400), BgL_ebindingsz00_6398);
								{	/* Ast/let.scm 1006 */
									int BgL_res3953z00_6421;

									{	/* Ast/let.scm 1006 */
										int BgL_tmpz00_9426;

										BgL_tmpz00_9426 = (int) (((long) 2));
										BgL_res3953z00_6421 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_9426);
									} BgL_res3953z00_6421;
								}
								{	/* Ast/let.scm 1006 */
									int BgL_tmpz00_9429;

									BgL_tmpz00_9429 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_9429, BgL_val1_1577z00_6420);
								}
								return BgL_val0_1576z00_6419;
							}
					}
			}
		}

	}



/* &stage5 */
	BgL_nodez00_bglt BGl_z62stage5z62zzast_letz00(obj_t BgL_envz00_6234,
		obj_t BgL_ebindingsz00_6239, obj_t BgL_bodyz00_6240)
	{
		{	/* Ast/let.scm 932 */
			{	/* Ast/let.scm 914 */
				obj_t BgL_stage7z00_6235;
				obj_t BgL_stackz00_6236;
				obj_t BgL_locz00_6237;
				obj_t BgL_sitez00_6238;

				BgL_stage7z00_6235 =
					((obj_t) PROCEDURE_EL_REF(BgL_envz00_6234, (int) (((long) 0))));
				BgL_stackz00_6236 =
					PROCEDURE_EL_REF(BgL_envz00_6234, (int) (((long) 1)));
				BgL_locz00_6237 = PROCEDURE_EL_REF(BgL_envz00_6234, (int) (((long) 2)));
				BgL_sitez00_6238 =
					((obj_t) PROCEDURE_EL_REF(BgL_envz00_6234, (int) (((long) 3))));
				{
					obj_t BgL_ebindingsz00_6427;
					obj_t BgL_bodyz00_6428;
					obj_t BgL_splitz00_6429;
					obj_t BgL_kontz00_6430;
					obj_t BgL_ebindingsz00_6424;
					obj_t BgL_bodyz00_6425;

					{
						obj_t BgL_ebindingsz00_6467;

						if (NULLP(BgL_ebindingsz00_6239))
							{	/* Ast/let.scm 936 */
								return
									BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_bodyz00_6240,
									BgL_stackz00_6236, BgL_locz00_6237, BgL_sitez00_6238);
							}
						else
							{	/* Ast/let.scm 939 */
								obj_t BgL_vbindingsz00_6519;

								BgL_ebindingsz00_6467 = BgL_ebindingsz00_6239;
								{
									obj_t BgL_lz00_6469;
									obj_t BgL_vbindingsz00_6470;
									obj_t BgL_fbindingsz00_6471;

									BgL_lz00_6469 = BgL_ebindingsz00_6467;
									BgL_vbindingsz00_6470 = BNIL;
									BgL_fbindingsz00_6471 = BNIL;
								BgL_loopz00_6468:
									if (NULLP(BgL_lz00_6469))
										{	/* Ast/let.scm 920 */
											obj_t BgL_funsz00_6472;
											obj_t BgL_varsz00_6473;

											if (NULLP(BgL_fbindingsz00_6471))
												{	/* Ast/let.scm 920 */
													BgL_funsz00_6472 = BNIL;
												}
											else
												{	/* Ast/let.scm 920 */
													obj_t BgL_head1531z00_6474;

													{	/* Ast/let.scm 920 */
														obj_t BgL_arg3026z00_6475;

														{	/* Ast/let.scm 920 */
															obj_t BgL_pairz00_6476;

															BgL_pairz00_6476 = CAR(BgL_fbindingsz00_6471);
															BgL_arg3026z00_6475 = CAR(CDR(BgL_pairz00_6476));
														}
														{	/* Ast/let.scm 920 */
															obj_t BgL_res3922z00_6477;

															BgL_res3922z00_6477 =
																MAKE_YOUNG_PAIR(BgL_arg3026z00_6475, BNIL);
															BgL_head1531z00_6474 = BgL_res3922z00_6477;
														}
													}
													{	/* Ast/let.scm 920 */
														obj_t BgL_g1534z00_6478;

														BgL_g1534z00_6478 = CDR(BgL_fbindingsz00_6471);
														{
															obj_t BgL_l1529z00_6480;
															obj_t BgL_tail1532z00_6481;

															BgL_l1529z00_6480 = BgL_g1534z00_6478;
															BgL_tail1532z00_6481 = BgL_head1531z00_6474;
														BgL_zc3z04anonymousza33014ze3z87_6479:
															if (NULLP(BgL_l1529z00_6480))
																{	/* Ast/let.scm 920 */
																	BgL_funsz00_6472 = BgL_head1531z00_6474;
																}
															else
																{	/* Ast/let.scm 920 */
																	obj_t BgL_newtail1533z00_6482;

																	{	/* Ast/let.scm 920 */
																		obj_t BgL_arg3021z00_6483;

																		{	/* Ast/let.scm 920 */
																			obj_t BgL_pairz00_6484;

																			BgL_pairz00_6484 =
																				CAR(((obj_t) BgL_l1529z00_6480));
																			BgL_arg3021z00_6483 =
																				CAR(CDR(BgL_pairz00_6484));
																		}
																		{	/* Ast/let.scm 920 */
																			obj_t BgL_res3924z00_6485;

																			BgL_res3924z00_6485 =
																				MAKE_YOUNG_PAIR(BgL_arg3021z00_6483,
																				BNIL);
																			BgL_newtail1533z00_6482 =
																				BgL_res3924z00_6485;
																		}
																	}
																	SET_CDR(BgL_tail1532z00_6481,
																		BgL_newtail1533z00_6482);
																	{	/* Ast/let.scm 920 */
																		obj_t BgL_arg3017z00_6486;

																		BgL_arg3017z00_6486 =
																			CDR(((obj_t) BgL_l1529z00_6480));
																		{
																			obj_t BgL_tail1532z00_9465;
																			obj_t BgL_l1529z00_9464;

																			BgL_l1529z00_9464 = BgL_arg3017z00_6486;
																			BgL_tail1532z00_9465 =
																				BgL_newtail1533z00_6482;
																			BgL_tail1532z00_6481 =
																				BgL_tail1532z00_9465;
																			BgL_l1529z00_6480 = BgL_l1529z00_9464;
																			goto
																				BgL_zc3z04anonymousza33014ze3z87_6479;
																		}
																	}
																}
														}
													}
												}
											if (NULLP(BgL_vbindingsz00_6470))
												{	/* Ast/let.scm 921 */
													BgL_varsz00_6473 = BNIL;
												}
											else
												{	/* Ast/let.scm 921 */
													obj_t BgL_head1537z00_6487;

													{	/* Ast/let.scm 921 */
														obj_t BgL_arg3036z00_6488;

														{	/* Ast/let.scm 921 */
															obj_t BgL_pairz00_6489;

															BgL_pairz00_6489 = CAR(BgL_vbindingsz00_6470);
															BgL_arg3036z00_6488 = CAR(CDR(BgL_pairz00_6489));
														}
														{	/* Ast/let.scm 921 */
															obj_t BgL_res3926z00_6490;

															BgL_res3926z00_6490 =
																MAKE_YOUNG_PAIR(BgL_arg3036z00_6488, BNIL);
															BgL_head1537z00_6487 = BgL_res3926z00_6490;
														}
													}
													{	/* Ast/let.scm 921 */
														obj_t BgL_g1540z00_6491;

														BgL_g1540z00_6491 = CDR(BgL_vbindingsz00_6470);
														{
															obj_t BgL_l1535z00_6493;
															obj_t BgL_tail1538z00_6494;

															BgL_l1535z00_6493 = BgL_g1540z00_6491;
															BgL_tail1538z00_6494 = BgL_head1537z00_6487;
														BgL_zc3z04anonymousza33030ze3z87_6492:
															if (NULLP(BgL_l1535z00_6493))
																{	/* Ast/let.scm 921 */
																	BgL_varsz00_6473 = BgL_head1537z00_6487;
																}
															else
																{	/* Ast/let.scm 921 */
																	obj_t BgL_newtail1539z00_6495;

																	{	/* Ast/let.scm 921 */
																		obj_t BgL_arg3033z00_6496;

																		{	/* Ast/let.scm 921 */
																			obj_t BgL_pairz00_6497;

																			BgL_pairz00_6497 =
																				CAR(((obj_t) BgL_l1535z00_6493));
																			BgL_arg3033z00_6496 =
																				CAR(CDR(BgL_pairz00_6497));
																		}
																		{	/* Ast/let.scm 921 */
																			obj_t BgL_res3928z00_6498;

																			BgL_res3928z00_6498 =
																				MAKE_YOUNG_PAIR(BgL_arg3033z00_6496,
																				BNIL);
																			BgL_newtail1539z00_6495 =
																				BgL_res3928z00_6498;
																		}
																	}
																	SET_CDR(BgL_tail1538z00_6494,
																		BgL_newtail1539z00_6495);
																	{	/* Ast/let.scm 921 */
																		obj_t BgL_arg3032z00_6499;

																		BgL_arg3032z00_6499 =
																			CDR(((obj_t) BgL_l1535z00_6493));
																		{
																			obj_t BgL_tail1538z00_9484;
																			obj_t BgL_l1535z00_9483;

																			BgL_l1535z00_9483 = BgL_arg3032z00_6499;
																			BgL_tail1538z00_9484 =
																				BgL_newtail1539z00_6495;
																			BgL_tail1538z00_6494 =
																				BgL_tail1538z00_9484;
																			BgL_l1535z00_6493 = BgL_l1535z00_9483;
																			goto
																				BgL_zc3z04anonymousza33030ze3z87_6492;
																		}
																	}
																}
														}
													}
												}
											{	/* Ast/let.scm 922 */
												obj_t BgL_freesz00_6500;
												obj_t BgL_setsz00_6501;

												BgL_freesz00_6500 =
													BGl_zc3z04anonymousza32997ze3ze70z60zzast_letz00
													(BgL_vbindingsz00_6470);
												BgL_setsz00_6501 =
													BGl_zc3z04anonymousza33004ze3ze70z60zzast_letz00
													(BgL_fbindingsz00_6471);
												{	/* Ast/let.scm 924 */
													bool_t BgL_test4465z00_9487;

													{
														obj_t BgL_l1545z00_6503;

														{	/* Ast/let.scm 924 */
															obj_t BgL_tmpz00_9488;

															BgL_l1545z00_6503 = BgL_fbindingsz00_6471;
														BgL_zc3z04anonymousza32994ze3z87_6502:
															if (NULLP(BgL_l1545z00_6503))
																{	/* Ast/let.scm 924 */
																	BgL_tmpz00_9488 = BFALSE;
																}
															else
																{	/* Ast/let.scm 924 */
																	obj_t BgL__ortest_1547z00_6504;

																	{	/* Ast/let.scm 924 */
																		obj_t BgL_auxz00_9491;

																		{	/* Ast/let.scm 561 */
																			obj_t BgL_pairz00_6505;

																			BgL_pairz00_6505 =
																				CDR(
																				((obj_t)
																					CAR(((obj_t) BgL_l1545z00_6503))));
																			BgL_auxz00_9491 = CAR(BgL_pairz00_6505);
																		}
																		BgL__ortest_1547z00_6504 =
																			BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																			(BgL_auxz00_9491, BgL_freesz00_6500);
																	}
																	if (CBOOL(BgL__ortest_1547z00_6504))
																		{	/* Ast/let.scm 924 */
																			BgL_tmpz00_9488 =
																				BgL__ortest_1547z00_6504;
																		}
																	else
																		{	/* Ast/let.scm 924 */
																			obj_t BgL_arg2995z00_6506;

																			BgL_arg2995z00_6506 =
																				CDR(((obj_t) BgL_l1545z00_6503));
																			{
																				obj_t BgL_l1545z00_9502;

																				BgL_l1545z00_9502 = BgL_arg2995z00_6506;
																				BgL_l1545z00_6503 = BgL_l1545z00_9502;
																				goto
																					BgL_zc3z04anonymousza32994ze3z87_6502;
																			}
																		}
																}
															BgL_test4465z00_9487 = CBOOL(BgL_tmpz00_9488);
														}
													}
													if (BgL_test4465z00_9487)
														{	/* Ast/let.scm 924 */
															{	/* Ast/let.scm 926 */
																int BgL_res3932z00_6507;

																{	/* Ast/let.scm 926 */
																	int BgL_tmpz00_9504;

																	BgL_tmpz00_9504 = (int) (((long) 2));
																	BgL_res3932z00_6507 =
																		BGL_MVALUES_NUMBER_SET(BgL_tmpz00_9504);
																} BgL_res3932z00_6507;
															}
															{	/* Ast/let.scm 926 */
																int BgL_tmpz00_9507;

																BgL_tmpz00_9507 = (int) (((long) 1));
																BGL_MVALUES_VAL_SET(BgL_tmpz00_9507,
																	BgL_ebindingsz00_6467);
															}
															BgL_vbindingsz00_6519 = BNIL;
														}
													else
														{	/* Ast/let.scm 927 */
															obj_t BgL_val0_1550z00_6508;
															obj_t BgL_val1_1551z00_6509;

															BgL_val0_1550z00_6508 =
																bgl_reverse_bang(BgL_vbindingsz00_6470);
															BgL_val1_1551z00_6509 =
																bgl_reverse_bang(BgL_fbindingsz00_6471);
															{	/* Ast/let.scm 927 */
																int BgL_res3933z00_6510;

																{	/* Ast/let.scm 927 */
																	int BgL_tmpz00_9512;

																	BgL_tmpz00_9512 = (int) (((long) 2));
																	BgL_res3933z00_6510 =
																		BGL_MVALUES_NUMBER_SET(BgL_tmpz00_9512);
																} BgL_res3933z00_6510;
															}
															{	/* Ast/let.scm 927 */
																int BgL_tmpz00_9515;

																BgL_tmpz00_9515 = (int) (((long) 1));
																BGL_MVALUES_VAL_SET(BgL_tmpz00_9515,
																	BgL_val1_1551z00_6509);
															}
															BgL_vbindingsz00_6519 = BgL_val0_1550z00_6508;
										}}}}
									else
										{	/* Ast/let.scm 929 */
											bool_t BgL_test4468z00_9518;

											{	/* Ast/let.scm 929 */
												obj_t BgL_arg3053z00_6511;

												{	/* Ast/let.scm 560 */
													obj_t BgL_pairz00_6512;

													BgL_pairz00_6512 =
														CAR(((obj_t) CAR(((obj_t) BgL_lz00_6469))));
													BgL_arg3053z00_6511 = CAR(CDR(BgL_pairz00_6512));
												}
												BgL_test4468z00_9518 =
													CBOOL(BGl_functionzf3zf3zzast_letz00
													(BgL_arg3053z00_6511, BTRUE));
											}
											if (BgL_test4468z00_9518)
												{	/* Ast/let.scm 930 */
													obj_t BgL_arg3045z00_6513;
													obj_t BgL_arg3046z00_6514;

													BgL_arg3045z00_6513 = CDR(((obj_t) BgL_lz00_6469));
													{	/* Ast/let.scm 930 */
														obj_t BgL_arg3047z00_6515;

														BgL_arg3047z00_6515 = CAR(((obj_t) BgL_lz00_6469));
														BgL_arg3046z00_6514 =
															MAKE_YOUNG_PAIR(BgL_arg3047z00_6515,
															BgL_fbindingsz00_6471);
													}
													{
														obj_t BgL_fbindingsz00_9533;
														obj_t BgL_lz00_9532;

														BgL_lz00_9532 = BgL_arg3045z00_6513;
														BgL_fbindingsz00_9533 = BgL_arg3046z00_6514;
														BgL_fbindingsz00_6471 = BgL_fbindingsz00_9533;
														BgL_lz00_6469 = BgL_lz00_9532;
														goto BgL_loopz00_6468;
													}
												}
											else
												{	/* Ast/let.scm 932 */
													obj_t BgL_arg3049z00_6516;
													obj_t BgL_arg3050z00_6517;

													BgL_arg3049z00_6516 = CDR(((obj_t) BgL_lz00_6469));
													{	/* Ast/let.scm 932 */
														obj_t BgL_arg3052z00_6518;

														BgL_arg3052z00_6518 = CAR(((obj_t) BgL_lz00_6469));
														BgL_arg3050z00_6517 =
															MAKE_YOUNG_PAIR(BgL_arg3052z00_6518,
															BgL_vbindingsz00_6470);
													}
													{
														obj_t BgL_vbindingsz00_9540;
														obj_t BgL_lz00_9539;

														BgL_lz00_9539 = BgL_arg3049z00_6516;
														BgL_vbindingsz00_9540 = BgL_arg3050z00_6517;
														BgL_vbindingsz00_6470 = BgL_vbindingsz00_9540;
														BgL_lz00_6469 = BgL_lz00_9539;
														goto BgL_loopz00_6468;
													}
												}
										}
								}
								{	/* Ast/let.scm 941 */
									obj_t BgL_fbindingsz00_6520;

									{	/* Ast/let.scm 946 */
										int BgL_tmpz00_9541;

										BgL_tmpz00_9541 = (int) (((long) 1));
										BgL_fbindingsz00_6520 = BGL_MVALUES_VAL(BgL_tmpz00_9541);
									}
									{	/* Ast/let.scm 946 */
										bool_t BgL_test4469z00_9544;

										if (NULLP(BgL_vbindingsz00_6519))
											{	/* Ast/let.scm 946 */
												BgL_test4469z00_9544 = ((bool_t) 0);
											}
										else
											{	/* Ast/let.scm 946 */
												BgL_test4469z00_9544 = PAIRP(BgL_fbindingsz00_6520);
											}
										if (BgL_test4469z00_9544)
											{	/* Ast/let.scm 948 */
												obj_t BgL_arg2953z00_6521;

												{	/* Ast/let.scm 948 */
													obj_t BgL_arg2954z00_6522;

													{	/* Ast/let.scm 948 */
														obj_t BgL_arg2955z00_6523;
														obj_t BgL_arg2956z00_6524;

														{	/* Ast/let.scm 948 */
															obj_t BgL_head1554z00_6525;

															{	/* Ast/let.scm 948 */
																obj_t BgL_arg2965z00_6526;

																{	/* Ast/let.scm 559 */
																	obj_t BgL_pairz00_6527;

																	BgL_pairz00_6527 =
																		CAR(((obj_t) BgL_vbindingsz00_6519));
																	BgL_arg2965z00_6526 = CAR(BgL_pairz00_6527);
																}
																{	/* Ast/let.scm 948 */
																	obj_t BgL_res3938z00_6528;

																	BgL_res3938z00_6528 =
																		MAKE_YOUNG_PAIR(BgL_arg2965z00_6526, BNIL);
																	BgL_head1554z00_6525 = BgL_res3938z00_6528;
																}
															}
															{	/* Ast/let.scm 948 */
																obj_t BgL_g1557z00_6529;

																BgL_g1557z00_6529 =
																	CDR(((obj_t) BgL_vbindingsz00_6519));
																{
																	obj_t BgL_l1552z00_6531;
																	obj_t BgL_tail1555z00_6532;

																	BgL_l1552z00_6531 = BgL_g1557z00_6529;
																	BgL_tail1555z00_6532 = BgL_head1554z00_6525;
																BgL_zc3z04anonymousza32958ze3z87_6530:
																	if (NULLP(BgL_l1552z00_6531))
																		{	/* Ast/let.scm 948 */
																			BgL_arg2955z00_6523 =
																				BgL_head1554z00_6525;
																		}
																	else
																		{	/* Ast/let.scm 948 */
																			obj_t BgL_newtail1556z00_6533;

																			{	/* Ast/let.scm 948 */
																				obj_t BgL_arg2962z00_6534;

																				{	/* Ast/let.scm 559 */
																					obj_t BgL_pairz00_6535;

																					BgL_pairz00_6535 =
																						CAR(((obj_t) BgL_l1552z00_6531));
																					BgL_arg2962z00_6534 =
																						CAR(BgL_pairz00_6535);
																				}
																				{	/* Ast/let.scm 948 */
																					obj_t BgL_res3940z00_6536;

																					BgL_res3940z00_6536 =
																						MAKE_YOUNG_PAIR(BgL_arg2962z00_6534,
																						BNIL);
																					BgL_newtail1556z00_6533 =
																						BgL_res3940z00_6536;
																				}
																			}
																			SET_CDR(BgL_tail1555z00_6532,
																				BgL_newtail1556z00_6533);
																			{	/* Ast/let.scm 948 */
																				obj_t BgL_arg2960z00_6537;

																				BgL_arg2960z00_6537 =
																					CDR(((obj_t) BgL_l1552z00_6531));
																				{
																					obj_t BgL_tail1555z00_9564;
																					obj_t BgL_l1552z00_9563;

																					BgL_l1552z00_9563 =
																						BgL_arg2960z00_6537;
																					BgL_tail1555z00_9564 =
																						BgL_newtail1556z00_6533;
																					BgL_tail1555z00_6532 =
																						BgL_tail1555z00_9564;
																					BgL_l1552z00_6531 = BgL_l1552z00_9563;
																					goto
																						BgL_zc3z04anonymousza32958ze3z87_6530;
																				}
																			}
																		}
																}
															}
														}
														{	/* Ast/let.scm 949 */
															obj_t BgL_arg2967z00_6538;

															{	/* Ast/let.scm 949 */
																obj_t BgL_arg2968z00_6539;

																{	/* Ast/let.scm 949 */
																	obj_t BgL_arg2969z00_6540;
																	obj_t BgL_arg2972z00_6541;

																	{	/* Ast/let.scm 949 */
																		obj_t BgL_head1560z00_6542;

																		{	/* Ast/let.scm 949 */
																			obj_t BgL_arg2980z00_6543;

																			{	/* Ast/let.scm 559 */
																				obj_t BgL_pairz00_6544;

																				BgL_pairz00_6544 =
																					CAR(((obj_t) BgL_fbindingsz00_6520));
																				BgL_arg2980z00_6543 =
																					CAR(BgL_pairz00_6544);
																			}
																			{	/* Ast/let.scm 949 */
																				obj_t BgL_res3942z00_6545;

																				BgL_res3942z00_6545 =
																					MAKE_YOUNG_PAIR(BgL_arg2980z00_6543,
																					BNIL);
																				BgL_head1560z00_6542 =
																					BgL_res3942z00_6545;
																			}
																		}
																		{	/* Ast/let.scm 949 */
																			obj_t BgL_g1563z00_6546;

																			BgL_g1563z00_6546 =
																				CDR(((obj_t) BgL_fbindingsz00_6520));
																			{
																				obj_t BgL_l1558z00_6548;
																				obj_t BgL_tail1561z00_6549;

																				BgL_l1558z00_6548 = BgL_g1563z00_6546;
																				BgL_tail1561z00_6549 =
																					BgL_head1560z00_6542;
																			BgL_zc3z04anonymousza32974ze3z87_6547:
																				if (NULLP(BgL_l1558z00_6548))
																					{	/* Ast/let.scm 949 */
																						BgL_arg2969z00_6540 =
																							BgL_head1560z00_6542;
																					}
																				else
																					{	/* Ast/let.scm 949 */
																						obj_t BgL_newtail1562z00_6550;

																						{	/* Ast/let.scm 949 */
																							obj_t BgL_arg2978z00_6551;

																							{	/* Ast/let.scm 559 */
																								obj_t BgL_pairz00_6552;

																								BgL_pairz00_6552 =
																									CAR(
																									((obj_t) BgL_l1558z00_6548));
																								BgL_arg2978z00_6551 =
																									CAR(BgL_pairz00_6552);
																							}
																							{	/* Ast/let.scm 949 */
																								obj_t BgL_res3944z00_6553;

																								BgL_res3944z00_6553 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2978z00_6551, BNIL);
																								BgL_newtail1562z00_6550 =
																									BgL_res3944z00_6553;
																							}
																						}
																						SET_CDR(BgL_tail1561z00_6549,
																							BgL_newtail1562z00_6550);
																						{	/* Ast/let.scm 949 */
																							obj_t BgL_arg2976z00_6554;

																							BgL_arg2976z00_6554 =
																								CDR(
																								((obj_t) BgL_l1558z00_6548));
																							{
																								obj_t BgL_tail1561z00_9581;
																								obj_t BgL_l1558z00_9580;

																								BgL_l1558z00_9580 =
																									BgL_arg2976z00_6554;
																								BgL_tail1561z00_9581 =
																									BgL_newtail1562z00_6550;
																								BgL_tail1561z00_6549 =
																									BgL_tail1561z00_9581;
																								BgL_l1558z00_6548 =
																									BgL_l1558z00_9580;
																								goto
																									BgL_zc3z04anonymousza32974ze3z87_6547;
																							}
																						}
																					}
																			}
																		}
																	}
																	BgL_arg2972z00_6541 =
																		MAKE_YOUNG_PAIR(BgL_bodyz00_6240, BNIL);
																	BgL_arg2968z00_6539 =
																		MAKE_YOUNG_PAIR(BgL_arg2969z00_6540,
																		BgL_arg2972z00_6541);
																}
																BgL_arg2967z00_6538 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
																	BgL_arg2968z00_6539);
															}
															BgL_arg2956z00_6524 =
																MAKE_YOUNG_PAIR(BgL_arg2967z00_6538, BNIL);
														}
														BgL_arg2954z00_6522 =
															MAKE_YOUNG_PAIR(BgL_arg2955z00_6523,
															BgL_arg2956z00_6524);
													}
													BgL_arg2953z00_6521 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
														BgL_arg2954z00_6522);
												}
												return
													BGl_sexpzd2ze3nodez31zzast_sexpz00
													(BgL_arg2953z00_6521, BgL_stackz00_6236,
													BgL_locz00_6237, BgL_sitez00_6238);
											}
										else
											{	/* Ast/let.scm 946 */
												BgL_ebindingsz00_6424 = BgL_ebindingsz00_6239;
												BgL_bodyz00_6425 = BgL_bodyz00_6240;
												{	/* Ast/let.scm 876 */
													obj_t BgL_splitz00_6426;

													{	/* Ast/let.scm 914 */
														int BgL_tmpz00_9591;

														BgL_tmpz00_9591 = (int) (((long) 0));
														BgL_splitz00_6426 =
															MAKE_EL_PROCEDURE(BgL_tmpz00_9591);
													}
													BgL_ebindingsz00_6427 = BgL_ebindingsz00_6424;
													BgL_bodyz00_6428 = BgL_bodyz00_6425;
													BgL_splitz00_6429 = BgL_splitz00_6426;
													BgL_kontz00_6430 = BgL_stage7z00_6235;
													if (NULLP(BgL_ebindingsz00_6427))
														{	/* Ast/let.scm 692 */
															return
																BGl_sexpzd2ze3nodez31zzast_sexpz00
																(BgL_bodyz00_6428, BgL_stackz00_6236,
																BgL_locz00_6237, BgL_sitez00_6238);
														}
													else
														{	/* Ast/let.scm 695 */
															obj_t BgL_recza2zd2bindingsz70_6431;

															BgL_recza2zd2bindingsz70_6431 =
																BGl_z62split4042z62zzast_letz00
																(BgL_splitz00_6429, BgL_ebindingsz00_6427);
															{	/* Ast/let.scm 696 */
																obj_t BgL_tailzd2bindingszd2_6432;

																{	/* Ast/let.scm 701 */
																	int BgL_tmpz00_9601;

																	BgL_tmpz00_9601 = (int) (((long) 1));
																	BgL_tailzd2bindingszd2_6432 =
																		BGL_MVALUES_VAL(BgL_tmpz00_9601);
																}
																if (PAIRP(BgL_tailzd2bindingszd2_6432))
																	{	/* Ast/let.scm 703 */
																		obj_t BgL_arg2357z00_6433;

																		{	/* Ast/let.scm 703 */
																			obj_t BgL_arg2358z00_6434;

																			{	/* Ast/let.scm 703 */
																				obj_t BgL_arg2359z00_6435;
																				obj_t BgL_arg2360z00_6436;

																				if (NULLP
																					(BgL_recza2zd2bindingsz70_6431))
																					{	/* Ast/let.scm 703 */
																						BgL_arg2359z00_6435 = BNIL;
																					}
																				else
																					{	/* Ast/let.scm 703 */
																						obj_t BgL_head1491z00_6437;

																						{	/* Ast/let.scm 703 */
																							obj_t BgL_arg2367z00_6438;

																							{	/* Ast/let.scm 559 */
																								obj_t BgL_pairz00_6439;

																								BgL_pairz00_6439 =
																									CAR(
																									((obj_t)
																										BgL_recza2zd2bindingsz70_6431));
																								BgL_arg2367z00_6438 =
																									CAR(BgL_pairz00_6439);
																							}
																							{	/* Ast/let.scm 703 */
																								obj_t BgL_res3779z00_6440;

																								BgL_res3779z00_6440 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2367z00_6438, BNIL);
																								BgL_head1491z00_6437 =
																									BgL_res3779z00_6440;
																							}
																						}
																						{	/* Ast/let.scm 703 */
																							obj_t BgL_g1494z00_6441;

																							BgL_g1494z00_6441 =
																								CDR(
																								((obj_t)
																									BgL_recza2zd2bindingsz70_6431));
																							{
																								obj_t BgL_l1489z00_6443;
																								obj_t BgL_tail1492z00_6444;

																								BgL_l1489z00_6443 =
																									BgL_g1494z00_6441;
																								BgL_tail1492z00_6444 =
																									BgL_head1491z00_6437;
																							BgL_zc3z04anonymousza32362ze3z87_6442:
																								if (NULLP
																									(BgL_l1489z00_6443))
																									{	/* Ast/let.scm 703 */
																										BgL_arg2359z00_6435 =
																											BgL_head1491z00_6437;
																									}
																								else
																									{	/* Ast/let.scm 703 */
																										obj_t
																											BgL_newtail1493z00_6445;
																										{	/* Ast/let.scm 703 */
																											obj_t BgL_arg2365z00_6446;

																											{	/* Ast/let.scm 559 */
																												obj_t BgL_pairz00_6447;

																												BgL_pairz00_6447 =
																													CAR(
																													((obj_t)
																														BgL_l1489z00_6443));
																												BgL_arg2365z00_6446 =
																													CAR(BgL_pairz00_6447);
																											}
																											{	/* Ast/let.scm 703 */
																												obj_t
																													BgL_res3781z00_6448;
																												BgL_res3781z00_6448 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg2365z00_6446,
																													BNIL);
																												BgL_newtail1493z00_6445
																													= BgL_res3781z00_6448;
																											}
																										}
																										SET_CDR
																											(BgL_tail1492z00_6444,
																											BgL_newtail1493z00_6445);
																										{	/* Ast/let.scm 703 */
																											obj_t BgL_arg2364z00_6449;

																											BgL_arg2364z00_6449 =
																												CDR(
																												((obj_t)
																													BgL_l1489z00_6443));
																											{
																												obj_t
																													BgL_tail1492z00_9624;
																												obj_t BgL_l1489z00_9623;

																												BgL_l1489z00_9623 =
																													BgL_arg2364z00_6449;
																												BgL_tail1492z00_9624 =
																													BgL_newtail1493z00_6445;
																												BgL_tail1492z00_6444 =
																													BgL_tail1492z00_9624;
																												BgL_l1489z00_6443 =
																													BgL_l1489z00_9623;
																												goto
																													BgL_zc3z04anonymousza32362ze3z87_6442;
																											}
																										}
																									}
																							}
																						}
																					}
																				{	/* Ast/let.scm 704 */
																					obj_t BgL_arg2369z00_6450;

																					{	/* Ast/let.scm 704 */
																						obj_t BgL_arg2370z00_6451;

																						{	/* Ast/let.scm 704 */
																							obj_t BgL_arg2371z00_6452;
																							obj_t BgL_arg2372z00_6453;

																							{	/* Ast/let.scm 704 */
																								obj_t BgL_head1497z00_6454;

																								{	/* Ast/let.scm 704 */
																									obj_t BgL_arg2380z00_6455;

																									BgL_arg2380z00_6455 =
																										CAR(CAR
																										(BgL_tailzd2bindingszd2_6432));
																									{	/* Ast/let.scm 704 */
																										obj_t BgL_res3783z00_6456;

																										BgL_res3783z00_6456 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg2380z00_6455,
																											BNIL);
																										BgL_head1497z00_6454 =
																											BgL_res3783z00_6456;
																									}
																								}
																								{	/* Ast/let.scm 704 */
																									obj_t BgL_g1500z00_6457;

																									BgL_g1500z00_6457 =
																										CDR
																										(BgL_tailzd2bindingszd2_6432);
																									{
																										obj_t BgL_l1495z00_6459;
																										obj_t BgL_tail1498z00_6460;

																										BgL_l1495z00_6459 =
																											BgL_g1500z00_6457;
																										BgL_tail1498z00_6460 =
																											BgL_head1497z00_6454;
																									BgL_zc3z04anonymousza32374ze3z87_6458:
																										if (NULLP
																											(BgL_l1495z00_6459))
																											{	/* Ast/let.scm 704 */
																												BgL_arg2371z00_6452 =
																													BgL_head1497z00_6454;
																											}
																										else
																											{	/* Ast/let.scm 704 */
																												obj_t
																													BgL_newtail1499z00_6461;
																												{	/* Ast/let.scm 704 */
																													obj_t
																														BgL_arg2377z00_6462;
																													{	/* Ast/let.scm 559 */
																														obj_t
																															BgL_pairz00_6463;
																														BgL_pairz00_6463 =
																															CAR(((obj_t)
																																BgL_l1495z00_6459));
																														BgL_arg2377z00_6462
																															=
																															CAR
																															(BgL_pairz00_6463);
																													}
																													{	/* Ast/let.scm 704 */
																														obj_t
																															BgL_res3785z00_6464;
																														BgL_res3785z00_6464
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg2377z00_6462,
																															BNIL);
																														BgL_newtail1499z00_6461
																															=
																															BgL_res3785z00_6464;
																													}
																												}
																												SET_CDR
																													(BgL_tail1498z00_6460,
																													BgL_newtail1499z00_6461);
																												{	/* Ast/let.scm 704 */
																													obj_t
																														BgL_arg2376z00_6465;
																													BgL_arg2376z00_6465 =
																														CDR(((obj_t)
																															BgL_l1495z00_6459));
																													{
																														obj_t
																															BgL_tail1498z00_9639;
																														obj_t
																															BgL_l1495z00_9638;
																														BgL_l1495z00_9638 =
																															BgL_arg2376z00_6465;
																														BgL_tail1498z00_9639
																															=
																															BgL_newtail1499z00_6461;
																														BgL_tail1498z00_6460
																															=
																															BgL_tail1498z00_9639;
																														BgL_l1495z00_6459 =
																															BgL_l1495z00_9638;
																														goto
																															BgL_zc3z04anonymousza32374ze3z87_6458;
																													}
																												}
																											}
																									}
																								}
																							}
																							BgL_arg2372z00_6453 =
																								MAKE_YOUNG_PAIR
																								(BgL_bodyz00_6428, BNIL);
																							BgL_arg2370z00_6451 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg2371z00_6452,
																								BgL_arg2372z00_6453);
																						}
																						BgL_arg2369z00_6450 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 4)),
																							BgL_arg2370z00_6451);
																					}
																					BgL_arg2360z00_6436 =
																						MAKE_YOUNG_PAIR(BgL_arg2369z00_6450,
																						BNIL);
																				}
																				BgL_arg2358z00_6434 =
																					MAKE_YOUNG_PAIR(BgL_arg2359z00_6435,
																					BgL_arg2360z00_6436);
																			}
																			BgL_arg2357z00_6433 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						4)), BgL_arg2358z00_6434);
																		}
																		return
																			BGl_sexpzd2ze3nodez31zzast_sexpz00
																			(BgL_arg2357z00_6433, BgL_stackz00_6236,
																			BgL_locz00_6237, BgL_sitez00_6238);
																	}
																else
																	{	/* Ast/let.scm 701 */
																		return
																			BGl_z62stage7z62zzast_letz00
																			(BgL_kontz00_6430, BgL_ebindingsz00_6427,
																			BgL_bodyz00_6428);
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



/* <@anonymous:2997>~0 */
	obj_t BGl_zc3z04anonymousza32997ze3ze70z60zzast_letz00(obj_t
		BgL_l1542z00_3570)
	{
		{	/* Ast/let.scm 922 */
			if (NULLP(BgL_l1542z00_3570))
				{	/* Ast/let.scm 922 */
					return BNIL;
				}
			else
				{	/* Ast/let.scm 922 */
					obj_t BgL_arg3000z00_3573;
					obj_t BgL_arg3001z00_3574;

					{	/* Ast/let.scm 562 */
						obj_t BgL_pairz00_5712;

						BgL_pairz00_5712 = CAR(((obj_t) BgL_l1542z00_3570));
						BgL_arg3000z00_3573 = CAR(CDR(CDR(BgL_pairz00_5712)));
					}
					{	/* Ast/let.scm 922 */
						obj_t BgL_arg3003z00_3576;

						BgL_arg3003z00_3576 = CDR(((obj_t) BgL_l1542z00_3570));
						BgL_arg3001z00_3574 =
							BGl_zc3z04anonymousza32997ze3ze70z60zzast_letz00
							(BgL_arg3003z00_3576);
					}
					return bgl_append2(BgL_arg3000z00_3573, BgL_arg3001z00_3574);
				}
		}

	}



/* <@anonymous:3004>~0 */
	obj_t BGl_zc3z04anonymousza33004ze3ze70z60zzast_letz00(obj_t
		BgL_l1544z00_3579)
	{
		{	/* Ast/let.scm 923 */
			if (NULLP(BgL_l1544z00_3579))
				{	/* Ast/let.scm 923 */
					return BNIL;
				}
			else
				{	/* Ast/let.scm 923 */
					obj_t BgL_arg3006z00_3582;
					obj_t BgL_arg3007z00_3583;

					{	/* Ast/let.scm 563 */
						obj_t BgL_pairz00_5721;

						BgL_pairz00_5721 = CAR(((obj_t) BgL_l1544z00_3579));
						BgL_arg3006z00_3582 = CAR(CDR(CDR(CDR(BgL_pairz00_5721))));
					}
					{	/* Ast/let.scm 923 */
						obj_t BgL_arg3012z00_3585;

						BgL_arg3012z00_3585 = CDR(((obj_t) BgL_l1544z00_3579));
						BgL_arg3007z00_3583 =
							BGl_zc3z04anonymousza33004ze3ze70z60zzast_letz00
							(BgL_arg3012z00_3585);
					}
					return bgl_append2(BgL_arg3006z00_3582, BgL_arg3007z00_3583);
				}
		}

	}



/* &split4041 */
	obj_t BGl_z62split4041z62zzast_letz00(obj_t BgL_envz00_6241,
		obj_t BgL_ebindingsz00_6242)
	{
		{	/* Ast/let.scm 975 */
			{
				obj_t BgL_ebindingsz00_6556;
				obj_t BgL_letza2zd2bindingsz70_6557;

				BgL_ebindingsz00_6556 = BgL_ebindingsz00_6242;
				BgL_letza2zd2bindingsz70_6557 = BNIL;
			BgL_loopz00_6555:
				if (NULLP(BgL_ebindingsz00_6556))
					{	/* Ast/let.scm 965 */
						obj_t BgL_val0_1564z00_6558;

						BgL_val0_1564z00_6558 =
							bgl_reverse_bang(BgL_letza2zd2bindingsz70_6557);
						{	/* Ast/let.scm 965 */
							int BgL_res3946z00_6559;

							{	/* Ast/let.scm 965 */
								int BgL_tmpz00_9680;

								BgL_tmpz00_9680 = (int) (((long) 2));
								BgL_res3946z00_6559 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_9680);
							} BgL_res3946z00_6559;
						}
						{	/* Ast/let.scm 965 */
							int BgL_tmpz00_9683;

							BgL_tmpz00_9683 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_9683, BNIL);
						}
						return BgL_val0_1564z00_6558;
					}
				else
					{	/* Ast/let.scm 966 */
						bool_t BgL_test4481z00_9686;

						{	/* Ast/let.scm 966 */
							obj_t BgL_g1568z00_6560;

							BgL_g1568z00_6560 = CDR(((obj_t) BgL_ebindingsz00_6556));
							{
								obj_t BgL_l1566z00_6562;

								{	/* Ast/let.scm 969 */
									obj_t BgL_tmpz00_9689;

									BgL_l1566z00_6562 = BgL_g1568z00_6560;
								BgL_zc3z04anonymousza33073ze3z87_6561:
									if (NULLP(BgL_l1566z00_6562))
										{	/* Ast/let.scm 969 */
											BgL_tmpz00_9689 = BFALSE;
										}
									else
										{	/* Ast/let.scm 967 */
											obj_t BgL__ortest_1569z00_6563;

											{	/* Ast/let.scm 967 */
												obj_t BgL_auxz00_9698;
												obj_t BgL_auxz00_9692;

												{	/* Ast/let.scm 562 */
													obj_t BgL_pairz00_6565;

													BgL_pairz00_6565 =
														CAR(((obj_t) BgL_ebindingsz00_6556));
													BgL_auxz00_9698 = CAR(CDR(CDR(BgL_pairz00_6565)));
												}
												{	/* Ast/let.scm 561 */
													obj_t BgL_pairz00_6564;

													BgL_pairz00_6564 =
														CDR(((obj_t) CAR(((obj_t) BgL_l1566z00_6562))));
													BgL_auxz00_9692 = CAR(BgL_pairz00_6564);
												}
												BgL__ortest_1569z00_6563 =
													BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_auxz00_9692, BgL_auxz00_9698);
											}
											if (CBOOL(BgL__ortest_1569z00_6563))
												{	/* Ast/let.scm 969 */
													BgL_tmpz00_9689 = BgL__ortest_1569z00_6563;
												}
											else
												{	/* Ast/let.scm 969 */
													obj_t BgL_arg3076z00_6566;

													BgL_arg3076z00_6566 =
														CDR(((obj_t) BgL_l1566z00_6562));
													{
														obj_t BgL_l1566z00_9709;

														BgL_l1566z00_9709 = BgL_arg3076z00_6566;
														BgL_l1566z00_6562 = BgL_l1566z00_9709;
														goto BgL_zc3z04anonymousza33073ze3z87_6561;
													}
												}
										}
									BgL_test4481z00_9686 = CBOOL(BgL_tmpz00_9689);
								}
							}
						}
						if (BgL_test4481z00_9686)
							{	/* Ast/let.scm 973 */
								obj_t BgL_val0_1570z00_6567;

								BgL_val0_1570z00_6567 =
									bgl_reverse_bang(BgL_letza2zd2bindingsz70_6557);
								{	/* Ast/let.scm 973 */
									int BgL_res3948z00_6568;

									{	/* Ast/let.scm 973 */
										int BgL_tmpz00_9712;

										BgL_tmpz00_9712 = (int) (((long) 2));
										BgL_res3948z00_6568 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_9712);
									} BgL_res3948z00_6568;
								}
								{	/* Ast/let.scm 973 */
									int BgL_tmpz00_9715;

									BgL_tmpz00_9715 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_9715, BgL_ebindingsz00_6556);
								}
								return BgL_val0_1570z00_6567;
							}
						else
							{	/* Ast/let.scm 975 */
								obj_t BgL_arg3070z00_6569;
								obj_t BgL_arg3071z00_6570;

								BgL_arg3070z00_6569 = CDR(((obj_t) BgL_ebindingsz00_6556));
								{	/* Ast/let.scm 975 */
									obj_t BgL_arg3072z00_6571;

									BgL_arg3072z00_6571 = CAR(((obj_t) BgL_ebindingsz00_6556));
									BgL_arg3071z00_6570 =
										MAKE_YOUNG_PAIR(BgL_arg3072z00_6571,
										BgL_letza2zd2bindingsz70_6557);
								}
								{
									obj_t BgL_letza2zd2bindingsz70_9724;
									obj_t BgL_ebindingsz00_9723;

									BgL_ebindingsz00_9723 = BgL_arg3070z00_6569;
									BgL_letza2zd2bindingsz70_9724 = BgL_arg3071z00_6570;
									BgL_letza2zd2bindingsz70_6557 = BgL_letza2zd2bindingsz70_9724;
									BgL_ebindingsz00_6556 = BgL_ebindingsz00_9723;
									goto BgL_loopz00_6555;
								}
							}
					}
			}
		}

	}



/* &stage7 */
	BgL_nodez00_bglt BGl_z62stage7z62zzast_letz00(obj_t BgL_envz00_6243,
		obj_t BgL_ebindingsz00_6247, obj_t BgL_bodyz00_6248)
	{
		{	/* Ast/let.scm 869 */
			{	/* Ast/let.scm 852 */
				obj_t BgL_locz00_6244;
				obj_t BgL_stackz00_6245;
				obj_t BgL_sitez00_6246;

				BgL_locz00_6244 = PROCEDURE_EL_REF(BgL_envz00_6243, (int) (((long) 0)));
				BgL_stackz00_6245 =
					PROCEDURE_EL_REF(BgL_envz00_6243, (int) (((long) 1)));
				BgL_sitez00_6246 =
					((obj_t) PROCEDURE_EL_REF(BgL_envz00_6243, (int) (((long) 2))));
				{
					obj_t BgL_ebindingsz00_6587;
					obj_t BgL_bodyz00_6588;
					BgL_typez00_bglt BgL_typez00_6574;

					{	/* Ast/let.scm 852 */
						obj_t BgL_lastz00_6632;

						BgL_lastz00_6632 =
							CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
							(BgL_ebindingsz00_6247));
						{	/* Ast/let.scm 852 */
							BgL_typez00_bglt BgL_tz00_6633;

							{	/* Ast/let.scm 853 */
								obj_t BgL_arg2885z00_6634;
								obj_t BgL_arg2886z00_6635;

								{	/* Ast/let.scm 853 */
									obj_t BgL_pairz00_6636;

									BgL_pairz00_6636 = CAR(((obj_t) BgL_lastz00_6632));
									BgL_arg2885z00_6634 = CAR(BgL_pairz00_6636);
								}
								{	/* Ast/let.scm 854 */
									obj_t BgL_arg2888z00_6637;

									BgL_arg2888z00_6637 = CAR(((obj_t) BgL_lastz00_6632));
									BgL_arg2886z00_6635 =
										BGl_findzd2locationzd2zztools_locationz00
										(BgL_arg2888z00_6637);
								}
								BgL_tz00_6633 =
									BGl_typezd2ofzd2idz00zzast_identz00(BgL_arg2885z00_6634,
									BgL_arg2886z00_6635);
							}
							{	/* Ast/let.scm 853 */

								{	/* Ast/let.scm 855 */
									bool_t BgL_test4484z00_9741;

									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
												(((BgL_typez00_bglt) COBJECT(BgL_tz00_6633))->
													BgL_idz00), CNST_TABLE_REF(((long) 35)))))
										{	/* Ast/let.scm 856 */
											bool_t BgL_test4486z00_9747;

											{	/* Ast/let.scm 856 */
												obj_t BgL_arg2883z00_6638;

												{	/* Ast/let.scm 560 */
													obj_t BgL_pairz00_6639;

													BgL_pairz00_6639 = CAR(((obj_t) BgL_lastz00_6632));
													BgL_arg2883z00_6638 = CAR(CDR(BgL_pairz00_6639));
												}
												{	/* Ast/let.scm 856 */

													BgL_test4486z00_9747 =
														CBOOL(BGl_functionzf3zf3zzast_letz00
														(BgL_arg2883z00_6638, BFALSE));
											}}
											if (BgL_test4486z00_9747)
												{	/* Ast/let.scm 856 */
													BgL_test4484z00_9741 = ((bool_t) 0);
												}
											else
												{	/* Ast/let.scm 856 */
													BgL_test4484z00_9741 = ((bool_t) 1);
												}
										}
									else
										{	/* Ast/let.scm 855 */
											BgL_test4484z00_9741 = ((bool_t) 0);
										}
									if (BgL_test4484z00_9741)
										{	/* Ast/let.scm 860 */
											obj_t BgL_arg2848z00_6640;

											{	/* Ast/let.scm 860 */
												obj_t BgL_arg2849z00_6641;

												{	/* Ast/let.scm 860 */
													obj_t BgL_arg2850z00_6642;
													obj_t BgL_arg2851z00_6643;

													{	/* Ast/let.scm 860 */
														obj_t BgL_arg2852z00_6644;

														{	/* Ast/let.scm 860 */
															obj_t BgL_arg2853z00_6645;
															obj_t BgL_arg2857z00_6646;

															{	/* Ast/let.scm 561 */
																obj_t BgL_pairz00_6647;

																BgL_pairz00_6647 =
																	CDR(((obj_t) BgL_lastz00_6632));
																BgL_arg2853z00_6645 = CAR(BgL_pairz00_6647);
															}
															BgL_arg2857z00_6646 =
																MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
															BgL_arg2852z00_6644 =
																MAKE_YOUNG_PAIR(BgL_arg2853z00_6645,
																BgL_arg2857z00_6646);
														}
														BgL_arg2850z00_6642 =
															MAKE_YOUNG_PAIR(BgL_arg2852z00_6644, BNIL);
													}
													{	/* Ast/let.scm 862 */
														obj_t BgL_arg2858z00_6648;

														{	/* Ast/let.scm 862 */
															obj_t BgL_arg2859z00_6649;

															{	/* Ast/let.scm 862 */
																obj_t BgL_arg2860z00_6650;
																obj_t BgL_arg2861z00_6651;

																{	/* Ast/let.scm 862 */
																	obj_t BgL_arg2862z00_6652;

																	{	/* Ast/let.scm 862 */
																		obj_t BgL_arg2863z00_6653;

																		{	/* Ast/let.scm 862 */
																			obj_t BgL_l1517z00_6654;

																			BgL_l1517z00_6654 =
																				bgl_reverse(BgL_ebindingsz00_6247);
																			if (NULLP(BgL_l1517z00_6654))
																				{	/* Ast/let.scm 862 */
																					BgL_arg2863z00_6653 = BNIL;
																				}
																			else
																				{	/* Ast/let.scm 862 */
																					obj_t BgL_head1519z00_6655;

																					{	/* Ast/let.scm 862 */
																						obj_t BgL_arg2872z00_6656;

																						BgL_arg2872z00_6656 =
																							CAR(CAR(BgL_l1517z00_6654));
																						{	/* Ast/let.scm 862 */
																							obj_t BgL_res3913z00_6657;

																							BgL_res3913z00_6657 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg2872z00_6656, BNIL);
																							BgL_head1519z00_6655 =
																								BgL_res3913z00_6657;
																						}
																					}
																					{	/* Ast/let.scm 862 */
																						obj_t BgL_g1522z00_6658;

																						BgL_g1522z00_6658 =
																							CDR(BgL_l1517z00_6654);
																						{
																							obj_t BgL_l1517z00_6660;
																							obj_t BgL_tail1520z00_6661;

																							BgL_l1517z00_6660 =
																								BgL_g1522z00_6658;
																							BgL_tail1520z00_6661 =
																								BgL_head1519z00_6655;
																						BgL_zc3z04anonymousza32865ze3z87_6659:
																							if (NULLP
																								(BgL_l1517z00_6660))
																								{	/* Ast/let.scm 862 */
																									BgL_arg2863z00_6653 =
																										BgL_head1519z00_6655;
																								}
																							else
																								{	/* Ast/let.scm 862 */
																									obj_t BgL_newtail1521z00_6662;

																									{	/* Ast/let.scm 862 */
																										obj_t BgL_arg2870z00_6663;

																										{	/* Ast/let.scm 559 */
																											obj_t BgL_pairz00_6664;

																											BgL_pairz00_6664 =
																												CAR(
																												((obj_t)
																													BgL_l1517z00_6660));
																											BgL_arg2870z00_6663 =
																												CAR(BgL_pairz00_6664);
																										}
																										{	/* Ast/let.scm 862 */
																											obj_t BgL_res3915z00_6665;

																											BgL_res3915z00_6665 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg2870z00_6663,
																												BNIL);
																											BgL_newtail1521z00_6662 =
																												BgL_res3915z00_6665;
																										}
																									}
																									SET_CDR(BgL_tail1520z00_6661,
																										BgL_newtail1521z00_6662);
																									{	/* Ast/let.scm 862 */
																										obj_t BgL_arg2869z00_6666;

																										BgL_arg2869z00_6666 =
																											CDR(
																											((obj_t)
																												BgL_l1517z00_6660));
																										{
																											obj_t
																												BgL_tail1520z00_9777;
																											obj_t BgL_l1517z00_9776;

																											BgL_l1517z00_9776 =
																												BgL_arg2869z00_6666;
																											BgL_tail1520z00_9777 =
																												BgL_newtail1521z00_6662;
																											BgL_tail1520z00_6661 =
																												BgL_tail1520z00_9777;
																											BgL_l1517z00_6660 =
																												BgL_l1517z00_9776;
																											goto
																												BgL_zc3z04anonymousza32865ze3z87_6659;
																										}
																									}
																								}
																						}
																					}
																				}
																		}
																		BgL_arg2862z00_6652 =
																			CDR(((obj_t) BgL_arg2863z00_6653));
																	}
																	BgL_arg2860z00_6650 =
																		bgl_reverse(BgL_arg2862z00_6652);
																}
																{	/* Ast/let.scm 864 */
																	obj_t BgL_arg2874z00_6667;
																	obj_t BgL_arg2876z00_6668;

																	{	/* Ast/let.scm 864 */
																		obj_t BgL_arg2877z00_6669;

																		{	/* Ast/let.scm 864 */
																			obj_t BgL_arg2880z00_6670;
																			obj_t BgL_arg2881z00_6671;

																			{	/* Ast/let.scm 561 */
																				obj_t BgL_pairz00_6672;

																				BgL_pairz00_6672 =
																					CDR(((obj_t) BgL_lastz00_6632));
																				BgL_arg2880z00_6670 =
																					CAR(BgL_pairz00_6672);
																			}
																			{	/* Ast/let.scm 864 */
																				obj_t BgL_arg2882z00_6673;

																				{	/* Ast/let.scm 560 */
																					obj_t BgL_pairz00_6674;

																					BgL_pairz00_6674 =
																						CAR(((obj_t) BgL_lastz00_6632));
																					BgL_arg2882z00_6673 =
																						CAR(CDR(BgL_pairz00_6674));
																				}
																				BgL_arg2881z00_6671 =
																					MAKE_YOUNG_PAIR(BgL_arg2882z00_6673,
																					BNIL);
																			}
																			BgL_arg2877z00_6669 =
																				MAKE_YOUNG_PAIR(BgL_arg2880z00_6670,
																				BgL_arg2881z00_6671);
																		}
																		BgL_arg2874z00_6667 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					5)), BgL_arg2877z00_6669);
																	}
																	BgL_arg2876z00_6668 =
																		MAKE_YOUNG_PAIR(BgL_bodyz00_6248, BNIL);
																	BgL_arg2861z00_6651 =
																		MAKE_YOUNG_PAIR(BgL_arg2874z00_6667,
																		BgL_arg2876z00_6668);
																}
																BgL_arg2859z00_6649 =
																	MAKE_YOUNG_PAIR(BgL_arg2860z00_6650,
																	BgL_arg2861z00_6651);
															}
															BgL_arg2858z00_6648 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
																BgL_arg2859z00_6649);
														}
														BgL_arg2851z00_6643 =
															MAKE_YOUNG_PAIR(BgL_arg2858z00_6648, BNIL);
													}
													BgL_arg2849z00_6641 =
														MAKE_YOUNG_PAIR(BgL_arg2850z00_6642,
														BgL_arg2851z00_6643);
												}
												BgL_arg2848z00_6640 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
													BgL_arg2849z00_6641);
											}
											return
												BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg2848z00_6640,
												BgL_stackz00_6245, BgL_locz00_6244, BgL_sitez00_6246);
										}
									else
										{	/* Ast/let.scm 855 */
											BgL_ebindingsz00_6587 = BgL_ebindingsz00_6247;
											BgL_bodyz00_6588 = BgL_bodyz00_6248;
											{	/* Ast/let.scm 837 */
												obj_t BgL_sexpz00_6589;

												{	/* Ast/let.scm 837 */
													obj_t BgL_arg2787z00_6590;

													{	/* Ast/let.scm 837 */
														obj_t BgL_arg2788z00_6591;
														obj_t BgL_arg2789z00_6592;

														if (NULLP(BgL_ebindingsz00_6587))
															{	/* Ast/let.scm 837 */
																BgL_arg2788z00_6591 = BNIL;
															}
														else
															{	/* Ast/let.scm 837 */
																obj_t BgL_head1509z00_6593;

																{	/* Ast/let.scm 837 */
																	obj_t BgL_res3904z00_6594;

																	BgL_res3904z00_6594 =
																		MAKE_YOUNG_PAIR(BNIL, BNIL);
																	BgL_head1509z00_6593 = BgL_res3904z00_6594;
																}
																{
																	obj_t BgL_l1507z00_6596;
																	obj_t BgL_tail1510z00_6597;

																	BgL_l1507z00_6596 = BgL_ebindingsz00_6587;
																	BgL_tail1510z00_6597 = BgL_head1509z00_6593;
																BgL_zc3z04anonymousza32791ze3z87_6595:
																	if (NULLP(BgL_l1507z00_6596))
																		{	/* Ast/let.scm 837 */
																			BgL_arg2788z00_6591 =
																				CDR(BgL_head1509z00_6593);
																		}
																	else
																		{	/* Ast/let.scm 837 */
																			obj_t BgL_newtail1511z00_6598;

																			{	/* Ast/let.scm 837 */
																				obj_t BgL_arg2799z00_6599;

																				{	/* Ast/let.scm 837 */
																					obj_t BgL_bz00_6600;

																					BgL_bz00_6600 =
																						CAR(((obj_t) BgL_l1507z00_6596));
																					{	/* Ast/let.scm 838 */
																						BgL_typez00_bglt BgL_tyz00_6601;

																						{	/* Ast/let.scm 838 */
																							obj_t BgL_arg2806z00_6602;
																							obj_t BgL_arg2807z00_6603;

																							{	/* Ast/let.scm 838 */
																								obj_t BgL_pairz00_6604;

																								BgL_pairz00_6604 =
																									CAR(((obj_t) BgL_bz00_6600));
																								BgL_arg2806z00_6602 =
																									CAR(BgL_pairz00_6604);
																							}
																							{	/* Ast/let.scm 838 */
																								obj_t BgL_arg2808z00_6605;

																								BgL_arg2808z00_6605 =
																									CAR(((obj_t) BgL_bz00_6600));
																								BgL_arg2807z00_6603 =
																									BGl_findzd2locationzd2zztools_locationz00
																									(BgL_arg2808z00_6605);
																							}
																							BgL_tyz00_6601 =
																								BGl_typezd2ofzd2idz00zzast_identz00
																								(BgL_arg2806z00_6602,
																								BgL_arg2807z00_6603);
																						}
																						{	/* Ast/let.scm 839 */
																							obj_t BgL_arg2800z00_6606;
																							obj_t BgL_arg2801z00_6607;

																							{	/* Ast/let.scm 839 */
																								obj_t BgL_pairz00_6608;

																								BgL_pairz00_6608 =
																									CAR(((obj_t) BgL_bz00_6600));
																								BgL_arg2800z00_6606 =
																									CAR(BgL_pairz00_6608);
																							}
																							BgL_typez00_6574 = BgL_tyz00_6601;
																							{	/* Ast/let.scm 734 */
																								bool_t BgL_test4491z00_9820;

																								{	/* Ast/let.scm 734 */
																									bool_t BgL_res3793z00_6575;

																									BgL_res3793z00_6575 =
																										BGl_isazf3zf3zz__objectz00(
																										((obj_t) BgL_typez00_6574),
																										BGl_tclassz00zzobject_classz00);
																									BgL_test4491z00_9820 =
																										BgL_res3793z00_6575;
																								}
																								if (BgL_test4491z00_9820)
																									{	/* Ast/let.scm 735 */
																										BgL_globalz00_bglt
																											BgL_vz00_6576;
																										{
																											BgL_tclassz00_bglt
																												BgL_auxz00_9823;
																											{
																												obj_t BgL_auxz00_9824;

																												{	/* Ast/let.scm 735 */
																													BgL_objectz00_bglt
																														BgL_tmpz00_9825;
																													BgL_tmpz00_9825 =
																														(
																														(BgL_objectz00_bglt)
																														((BgL_typez00_bglt)
																															BgL_typez00_6574));
																													BgL_auxz00_9824 =
																														BGL_OBJECT_WIDENING
																														(BgL_tmpz00_9825);
																												}
																												BgL_auxz00_9823 =
																													((BgL_tclassz00_bglt)
																													BgL_auxz00_9824);
																											}
																											BgL_vz00_6576 =
																												(((BgL_tclassz00_bglt)
																													COBJECT
																													(BgL_auxz00_9823))->
																												BgL_holderz00);
																										}
																										{	/* Ast/let.scm 736 */
																											obj_t BgL_arg2407z00_6577;

																											{	/* Ast/let.scm 736 */
																												obj_t
																													BgL_arg2409z00_6578;
																												{	/* Ast/let.scm 736 */
																													obj_t
																														BgL_arg2411z00_6579;
																													{	/* Ast/let.scm 736 */
																														obj_t
																															BgL_arg2412z00_6580;
																														obj_t
																															BgL_arg2413z00_6581;
																														BgL_arg2412z00_6580
																															=
																															(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_vz00_6576)))->BgL_idz00);
																														BgL_arg2413z00_6581
																															=
																															MAKE_YOUNG_PAIR(((
																																	(BgL_globalz00_bglt)
																																	COBJECT
																																	(BgL_vz00_6576))->
																																BgL_modulez00),
																															BNIL);
																														BgL_arg2411z00_6579
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg2412z00_6580,
																															BgL_arg2413z00_6581);
																													}
																													BgL_arg2409z00_6578 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 13)),
																														BgL_arg2411z00_6579);
																												}
																												BgL_arg2407z00_6577 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg2409z00_6578,
																													BNIL);
																											}
																											BgL_arg2801z00_6607 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														14)),
																												BgL_arg2407z00_6577);
																									}}
																								else
																									{	/* Ast/let.scm 737 */
																										obj_t
																											BgL_casezd2valuezd2_6582;
																										BgL_casezd2valuezd2_6582 =
																											(((BgL_typez00_bglt)
																												COBJECT
																												(BgL_typez00_6574))->
																											BgL_idz00);
																										{	/* Ast/let.scm 737 */
																											bool_t
																												BgL_test4492z00_9842;
																											{	/* Ast/let.scm 737 */
																												bool_t
																													BgL__ortest_1184z00_6583;
																												BgL__ortest_1184z00_6583
																													=
																													(BgL_casezd2valuezd2_6582
																													==
																													CNST_TABLE_REF(((long)
																															15)));
																												if (BgL__ortest_1184z00_6583)
																													{	/* Ast/let.scm 737 */
																														BgL_test4492z00_9842
																															=
																															BgL__ortest_1184z00_6583;
																													}
																												else
																													{	/* Ast/let.scm 737 */
																														BgL_test4492z00_9842
																															=
																															(BgL_casezd2valuezd2_6582
																															==
																															CNST_TABLE_REF((
																																	(long) 16)));
																											}}
																											if (BgL_test4492z00_9842)
																												{	/* Ast/let.scm 737 */
																													BgL_arg2801z00_6607 =
																														BUNSPEC;
																												}
																											else
																												{	/* Ast/let.scm 737 */
																													if (
																														(BgL_casezd2valuezd2_6582
																															==
																															CNST_TABLE_REF((
																																	(long) 17))))
																														{	/* Ast/let.scm 737 */
																															BgL_arg2801z00_6607
																																=
																																BGL_INT8_TO_BINT8
																																((int8_t) (0));
																														}
																													else
																														{	/* Ast/let.scm 737 */
																															if (
																																(BgL_casezd2valuezd2_6582
																																	==
																																	CNST_TABLE_REF
																																	(((long)
																																			18))))
																																{	/* Ast/let.scm 737 */
																																	BgL_arg2801z00_6607
																																		=
																																		BGL_UINT8_TO_BUINT8
																																		((uint8_t)
																																		(0));
																																}
																															else
																																{	/* Ast/let.scm 737 */
																																	if (
																																		(BgL_casezd2valuezd2_6582
																																			==
																																			CNST_TABLE_REF
																																			(((long)
																																					19))))
																																		{	/* Ast/let.scm 737 */
																																			BgL_arg2801z00_6607
																																				=
																																				BGL_INT16_TO_BINT16
																																				(
																																				(int16_t)
																																				(0));
																																		}
																																	else
																																		{	/* Ast/let.scm 737 */
																																			if (
																																				(BgL_casezd2valuezd2_6582
																																					==
																																					CNST_TABLE_REF
																																					(((long) 20))))
																																				{	/* Ast/let.scm 737 */
																																					BgL_arg2801z00_6607
																																						=
																																						BGL_UINT16_TO_BUINT16
																																						(
																																						(uint16_t)
																																						(0));
																																				}
																																			else
																																				{	/* Ast/let.scm 737 */
																																					if (
																																						(BgL_casezd2valuezd2_6582
																																							==
																																							CNST_TABLE_REF
																																							(((long) 21))))
																																						{	/* Ast/let.scm 737 */
																																							BgL_arg2801z00_6607
																																								=
																																								BGl_int324054z00zzast_letz00;
																																						}
																																					else
																																						{	/* Ast/let.scm 737 */
																																							if ((BgL_casezd2valuezd2_6582 == CNST_TABLE_REF(((long) 22))))
																																								{	/* Ast/let.scm 737 */
																																									BgL_arg2801z00_6607
																																										=
																																										BGl_uint324055z00zzast_letz00;
																																								}
																																							else
																																								{	/* Ast/let.scm 737 */
																																									if ((BgL_casezd2valuezd2_6582 == CNST_TABLE_REF(((long) 23))))
																																										{	/* Ast/let.scm 737 */
																																											BgL_arg2801z00_6607
																																												=
																																												BGl_int644056z00zzast_letz00;
																																										}
																																									else
																																										{	/* Ast/let.scm 737 */
																																											if ((BgL_casezd2valuezd2_6582 == CNST_TABLE_REF(((long) 24))))
																																												{	/* Ast/let.scm 737 */
																																													BgL_arg2801z00_6607
																																														=
																																														BGl_uint644057z00zzast_letz00;
																																												}
																																											else
																																												{	/* Ast/let.scm 737 */
																																													bool_t
																																														BgL_test4502z00_9876;
																																													{	/* Ast/let.scm 737 */
																																														bool_t
																																															BgL__ortest_1185z00_6584;
																																														BgL__ortest_1185z00_6584
																																															=
																																															(BgL_casezd2valuezd2_6582
																																															==
																																															CNST_TABLE_REF
																																															(((long) 25)));
																																														if (BgL__ortest_1185z00_6584)
																																															{	/* Ast/let.scm 737 */
																																																BgL_test4502z00_9876
																																																	=
																																																	BgL__ortest_1185z00_6584;
																																															}
																																														else
																																															{	/* Ast/let.scm 737 */
																																																BgL_test4502z00_9876
																																																	=
																																																	(BgL_casezd2valuezd2_6582
																																																	==
																																																	CNST_TABLE_REF
																																																	(((long) 26)));
																																													}}
																																													if (BgL_test4502z00_9876)
																																														{	/* Ast/let.scm 737 */
																																															BgL_arg2801z00_6607
																																																=
																																																BGL_REAL_CNST
																																																(BGl_real4058z00zzast_letz00);
																																														}
																																													else
																																														{	/* Ast/let.scm 737 */
																																															bool_t
																																																BgL_test4504z00_9882;
																																															{	/* Ast/let.scm 737 */
																																																bool_t
																																																	BgL__ortest_1186z00_6585;
																																																BgL__ortest_1186z00_6585
																																																	=
																																																	(BgL_casezd2valuezd2_6582
																																																	==
																																																	CNST_TABLE_REF
																																																	(((long) 27)));
																																																if (BgL__ortest_1186z00_6585)
																																																	{	/* Ast/let.scm 737 */
																																																		BgL_test4504z00_9882
																																																			=
																																																			BgL__ortest_1186z00_6585;
																																																	}
																																																else
																																																	{	/* Ast/let.scm 737 */
																																																		BgL_test4504z00_9882
																																																			=
																																																			(BgL_casezd2valuezd2_6582
																																																			==
																																																			CNST_TABLE_REF
																																																			(((long) 28)));
																																															}}
																																															if (BgL_test4504z00_9882)
																																																{	/* Ast/let.scm 737 */
																																																	BgL_arg2801z00_6607
																																																		=
																																																		BINT
																																																		(
																																																		((long) 0));
																																																}
																																															else
																																																{	/* Ast/let.scm 737 */
																																																	if ((BgL_casezd2valuezd2_6582 == CNST_TABLE_REF(((long) 29))))
																																																		{	/* Ast/let.scm 737 */
																																																			BgL_arg2801z00_6607
																																																				=
																																																				BFALSE;
																																																		}
																																																	else
																																																		{	/* Ast/let.scm 737 */
																																																			if ((BgL_casezd2valuezd2_6582 == CNST_TABLE_REF(((long) 30))))
																																																				{	/* Ast/let.scm 737 */
																																																					BgL_arg2801z00_6607
																																																						=
																																																						CNST_TABLE_REF
																																																						(
																																																						((long) 31));
																																																				}
																																																			else
																																																				{	/* Ast/let.scm 737 */
																																																					if ((BgL_casezd2valuezd2_6582 == CNST_TABLE_REF(((long) 32))))
																																																						{	/* Ast/let.scm 751 */
																																																							obj_t
																																																								BgL_arg2430z00_6586;
																																																							BgL_arg2430z00_6586
																																																								=
																																																								MAKE_YOUNG_PAIR
																																																								(BFALSE,
																																																								BNIL);
																																																							BgL_arg2801z00_6607
																																																								=
																																																								MAKE_YOUNG_PAIR
																																																								(CNST_TABLE_REF
																																																								(((long) 33)), BgL_arg2430z00_6586);
																																																						}
																																																					else
																																																						{	/* Ast/let.scm 737 */
																																																							if ((BgL_casezd2valuezd2_6582 == CNST_TABLE_REF(((long) 34))))
																																																								{	/* Ast/let.scm 737 */
																																																									BgL_arg2801z00_6607
																																																										=
																																																										BCHAR
																																																										(
																																																										((unsigned char) '\000'));
																																																								}
																																																							else
																																																								{	/* Ast/let.scm 737 */
																																																									BgL_arg2801z00_6607
																																																										=
																																																										BGl_errorz00zz__errorz00
																																																										(BGl_string4059z00zzast_letz00,
																																																										BGl_string4060z00zzast_letz00,
																																																										(((BgL_typez00_bglt) COBJECT(BgL_typez00_6574))->BgL_idz00));
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
																							{	/* Ast/let.scm 839 */
																								obj_t BgL_list2802z00_6609;

																								{	/* Ast/let.scm 839 */
																									obj_t BgL_arg2805z00_6610;

																									BgL_arg2805z00_6610 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg2801z00_6607, BNIL);
																									BgL_list2802z00_6609 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg2800z00_6606,
																										BgL_arg2805z00_6610);
																								}
																								BgL_arg2799z00_6599 =
																									BgL_list2802z00_6609;
																							}
																						}
																					}
																				}
																				{	/* Ast/let.scm 837 */
																					obj_t BgL_res3907z00_6611;

																					BgL_res3907z00_6611 =
																						MAKE_YOUNG_PAIR(BgL_arg2799z00_6599,
																						BNIL);
																					BgL_newtail1511z00_6598 =
																						BgL_res3907z00_6611;
																				}
																			}
																			SET_CDR(BgL_tail1510z00_6597,
																				BgL_newtail1511z00_6598);
																			{	/* Ast/let.scm 837 */
																				obj_t BgL_arg2795z00_6612;

																				BgL_arg2795z00_6612 =
																					CDR(((obj_t) BgL_l1507z00_6596));
																				{
																					obj_t BgL_tail1510z00_9915;
																					obj_t BgL_l1507z00_9914;

																					BgL_l1507z00_9914 =
																						BgL_arg2795z00_6612;
																					BgL_tail1510z00_9915 =
																						BgL_newtail1511z00_6598;
																					BgL_tail1510z00_6597 =
																						BgL_tail1510z00_9915;
																					BgL_l1507z00_6596 = BgL_l1507z00_9914;
																					goto
																						BgL_zc3z04anonymousza32791ze3z87_6595;
																				}
																			}
																		}
																}
															}
														{	/* Ast/let.scm 841 */
															obj_t BgL_arg2809z00_6613;
															obj_t BgL_arg2810z00_6614;

															if (NULLP(BgL_ebindingsz00_6587))
																{	/* Ast/let.scm 841 */
																	BgL_arg2809z00_6613 = BNIL;
																}
															else
																{	/* Ast/let.scm 841 */
																	obj_t BgL_head1514z00_6615;

																	{	/* Ast/let.scm 841 */
																		obj_t BgL_res3909z00_6616;

																		BgL_res3909z00_6616 =
																			MAKE_YOUNG_PAIR(BNIL, BNIL);
																		BgL_head1514z00_6615 = BgL_res3909z00_6616;
																	}
																	{
																		obj_t BgL_l1512z00_6618;
																		obj_t BgL_tail1515z00_6619;

																		BgL_l1512z00_6618 = BgL_ebindingsz00_6587;
																		BgL_tail1515z00_6619 = BgL_head1514z00_6615;
																	BgL_zc3z04anonymousza32812ze3z87_6617:
																		if (NULLP(BgL_l1512z00_6618))
																			{	/* Ast/let.scm 841 */
																				BgL_arg2809z00_6613 =
																					CDR(BgL_head1514z00_6615);
																			}
																		else
																			{	/* Ast/let.scm 841 */
																				obj_t BgL_newtail1516z00_6620;

																				{	/* Ast/let.scm 841 */
																					obj_t BgL_arg2815z00_6621;

																					{	/* Ast/let.scm 841 */
																						obj_t BgL_bz00_6622;

																						BgL_bz00_6622 =
																							CAR(((obj_t) BgL_l1512z00_6618));
																						{	/* Ast/let.scm 842 */
																							obj_t BgL_arg2816z00_6623;

																							{	/* Ast/let.scm 842 */
																								obj_t BgL_arg2817z00_6624;
																								obj_t BgL_arg2819z00_6625;

																								{	/* Ast/let.scm 842 */
																									obj_t BgL_arg2820z00_6626;

																									{	/* Ast/let.scm 842 */
																										obj_t BgL_pairz00_6627;

																										BgL_pairz00_6627 =
																											CAR(
																											((obj_t) BgL_bz00_6622));
																										BgL_arg2820z00_6626 =
																											CAR(BgL_pairz00_6627);
																									}
																									BgL_arg2817z00_6624 =
																										BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																										(BgL_arg2820z00_6626,
																										BgL_locz00_6244);
																								}
																								{	/* Ast/let.scm 843 */
																									obj_t BgL_arg2821z00_6628;

																									{	/* Ast/let.scm 843 */
																										obj_t BgL_pairz00_6629;

																										BgL_pairz00_6629 =
																											CAR(
																											((obj_t) BgL_bz00_6622));
																										BgL_arg2821z00_6628 =
																											CAR(CDR
																											(BgL_pairz00_6629));
																									}
																									BgL_arg2819z00_6625 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg2821z00_6628, BNIL);
																								}
																								BgL_arg2816z00_6623 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2817z00_6624,
																									BgL_arg2819z00_6625);
																							}
																							BgL_arg2815z00_6621 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 5)),
																								BgL_arg2816z00_6623);
																					}}
																					{	/* Ast/let.scm 841 */
																						obj_t BgL_res3911z00_6630;

																						BgL_res3911z00_6630 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2815z00_6621, BNIL);
																						BgL_newtail1516z00_6620 =
																							BgL_res3911z00_6630;
																				}}
																				SET_CDR(BgL_tail1515z00_6619,
																					BgL_newtail1516z00_6620);
																				{	/* Ast/let.scm 841 */
																					obj_t BgL_arg2814z00_6631;

																					BgL_arg2814z00_6631 =
																						CDR(((obj_t) BgL_l1512z00_6618));
																					{
																						obj_t BgL_tail1515z00_9941;
																						obj_t BgL_l1512z00_9940;

																						BgL_l1512z00_9940 =
																							BgL_arg2814z00_6631;
																						BgL_tail1515z00_9941 =
																							BgL_newtail1516z00_6620;
																						BgL_tail1515z00_6619 =
																							BgL_tail1515z00_9941;
																						BgL_l1512z00_6618 =
																							BgL_l1512z00_9940;
																						goto
																							BgL_zc3z04anonymousza32812ze3z87_6617;
																					}
																				}
																			}
																	}
																}
															BgL_arg2810z00_6614 =
																MAKE_YOUNG_PAIR(BgL_bodyz00_6588, BNIL);
															BgL_arg2789z00_6592 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2809z00_6613, BgL_arg2810z00_6614);
														}
														BgL_arg2787z00_6590 =
															MAKE_YOUNG_PAIR(BgL_arg2788z00_6591,
															BgL_arg2789z00_6592);
													}
													BgL_sexpz00_6589 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
														BgL_arg2787z00_6590);
												}
												return
													BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_sexpz00_6589,
													BgL_stackz00_6245, BgL_locz00_6244, BgL_sitez00_6246);
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



/* &split4042 */
	obj_t BGl_z62split4042z62zzast_letz00(obj_t BgL_envz00_6249,
		obj_t BgL_ebindingsz00_6250)
	{
		{	/* Ast/let.scm 902 */
			{	/* Ast/let.scm 876 */
				obj_t BgL_g1189z00_6675;

				BgL_g1189z00_6675 = bgl_reverse(BgL_ebindingsz00_6250);
				{
					obj_t BgL_ebindingsz00_6677;
					obj_t BgL_recza2zd2bindingsz70_6678;
					obj_t BgL_letzd2bindingszd2_6679;

					BgL_ebindingsz00_6677 = BgL_g1189z00_6675;
					BgL_recza2zd2bindingsz70_6678 = BNIL;
					BgL_letzd2bindingszd2_6679 = BNIL;
				BgL_loopz00_6676:
					if (NULLP(BgL_ebindingsz00_6677))
						{	/* Ast/let.scm 880 */
							{	/* Ast/let.scm 881 */
								int BgL_res3917z00_6680;

								{	/* Ast/let.scm 881 */
									int BgL_tmpz00_9951;

									BgL_tmpz00_9951 = (int) (((long) 2));
									BgL_res3917z00_6680 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_9951);
								} BgL_res3917z00_6680;
							}
							{	/* Ast/let.scm 881 */
								int BgL_tmpz00_9954;

								BgL_tmpz00_9954 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_9954,
									BgL_letzd2bindingszd2_6679);
							}
							return BgL_recza2zd2bindingsz70_6678;
						}
					else
						{	/* Ast/let.scm 882 */
							bool_t BgL_test4513z00_9957;

							{	/* Ast/let.scm 882 */
								obj_t BgL_arg2945z00_6681;
								obj_t BgL_arg2946z00_6682;

								BgL_arg2945z00_6681 = CAR(((obj_t) BgL_ebindingsz00_6677));
								BgL_arg2946z00_6682 = CDR(((obj_t) BgL_ebindingsz00_6677));
								if (CBOOL(BGl_z62mutablezd2inzf3z43zzast_letz00
										(BgL_arg2945z00_6681, ((obj_t) BgL_arg2946z00_6682))))
									{	/* Ast/let.scm 573 */
										BgL_test4513z00_9957 = ((bool_t) 0);
									}
								else
									{	/* Ast/let.scm 573 */
										BgL_test4513z00_9957 = ((bool_t) 1);
									}
							}
							if (BgL_test4513z00_9957)
								{	/* Ast/let.scm 884 */
									bool_t BgL_test4515z00_9966;

									{	/* Ast/let.scm 884 */
										obj_t BgL_arg2942z00_6683;

										{	/* Ast/let.scm 560 */
											obj_t BgL_pairz00_6684;

											BgL_pairz00_6684 =
												CAR(((obj_t) CAR(((obj_t) BgL_ebindingsz00_6677))));
											BgL_arg2942z00_6683 = CAR(CDR(BgL_pairz00_6684));
										}
										{	/* Ast/let.scm 884 */

											BgL_test4515z00_9966 =
												CBOOL(BGl_functionzf3zf3zzast_letz00
												(BgL_arg2942z00_6683, BFALSE));
										}
									}
									if (BgL_test4515z00_9966)
										{	/* Ast/let.scm 885 */
											obj_t BgL_arg2900z00_6685;
											obj_t BgL_arg2901z00_6686;

											BgL_arg2900z00_6685 =
												CDR(((obj_t) BgL_ebindingsz00_6677));
											{	/* Ast/let.scm 886 */
												obj_t BgL_arg2902z00_6687;

												BgL_arg2902z00_6687 =
													CAR(((obj_t) BgL_ebindingsz00_6677));
												BgL_arg2901z00_6686 =
													MAKE_YOUNG_PAIR(BgL_arg2902z00_6687,
													BgL_recza2zd2bindingsz70_6678);
											}
											{
												obj_t BgL_recza2zd2bindingsz70_9981;
												obj_t BgL_ebindingsz00_9980;

												BgL_ebindingsz00_9980 = BgL_arg2900z00_6685;
												BgL_recza2zd2bindingsz70_9981 = BgL_arg2901z00_6686;
												BgL_recza2zd2bindingsz70_6678 =
													BgL_recza2zd2bindingsz70_9981;
												BgL_ebindingsz00_6677 = BgL_ebindingsz00_9980;
												goto BgL_loopz00_6676;
											}
										}
									else
										{	/* Ast/let.scm 888 */
											bool_t BgL_test4516z00_9982;

											{	/* Ast/let.scm 888 */
												bool_t BgL_test4517z00_9983;

												{	/* Ast/let.scm 888 */
													obj_t BgL_arg2941z00_6688;

													BgL_arg2941z00_6688 =
														CAR(((obj_t) BgL_ebindingsz00_6677));
													BgL_test4517z00_9983 =
														CBOOL(BGl_z62usedzd2inzf3z43zzast_letz00
														(BgL_arg2941z00_6688,
															BgL_recza2zd2bindingsz70_6678));
												}
												if (BgL_test4517z00_9983)
													{	/* Ast/let.scm 888 */
														BgL_test4516z00_9982 = ((bool_t) 0);
													}
												else
													{	/* Ast/let.scm 889 */
														bool_t BgL_test4518z00_9988;

														{	/* Ast/let.scm 889 */
															obj_t BgL_arg2925z00_6689;
															obj_t BgL_arg2926z00_6690;

															BgL_arg2925z00_6689 =
																CAR(((obj_t) BgL_ebindingsz00_6677));
															BgL_arg2926z00_6690 =
																CDR(((obj_t) BgL_ebindingsz00_6677));
															BgL_test4518z00_9988 =
																CBOOL(BGl_z62usedzd2inzf3z43zzast_letz00
																(BgL_arg2925z00_6689, BgL_arg2926z00_6690));
														}
														if (BgL_test4518z00_9988)
															{	/* Ast/let.scm 889 */
																BgL_test4516z00_9982 = ((bool_t) 0);
															}
														else
															{	/* Ast/let.scm 889 */
																BgL_test4516z00_9982 = ((bool_t) 1);
															}
													}
											}
											if (BgL_test4516z00_9982)
												{	/* Ast/let.scm 890 */
													obj_t BgL_arg2914z00_6691;
													obj_t BgL_arg2915z00_6692;

													BgL_arg2914z00_6691 =
														CDR(((obj_t) BgL_ebindingsz00_6677));
													{	/* Ast/let.scm 892 */
														obj_t BgL_arg2916z00_6693;

														BgL_arg2916z00_6693 =
															CAR(((obj_t) BgL_ebindingsz00_6677));
														BgL_arg2915z00_6692 =
															MAKE_YOUNG_PAIR(BgL_arg2916z00_6693,
															BgL_letzd2bindingszd2_6679);
													}
													{
														obj_t BgL_letzd2bindingszd2_10001;
														obj_t BgL_ebindingsz00_10000;

														BgL_ebindingsz00_10000 = BgL_arg2914z00_6691;
														BgL_letzd2bindingszd2_10001 = BgL_arg2915z00_6692;
														BgL_letzd2bindingszd2_6679 =
															BgL_letzd2bindingszd2_10001;
														BgL_ebindingsz00_6677 = BgL_ebindingsz00_10000;
														goto BgL_loopz00_6676;
													}
												}
											else
												{	/* Ast/let.scm 895 */
													obj_t BgL_val0_1525z00_6694;

													BgL_val0_1525z00_6694 =
														BGl_appendzd221011zd2zzast_letz00(bgl_reverse
														(BgL_ebindingsz00_6677),
														BgL_recza2zd2bindingsz70_6678);
													{	/* Ast/let.scm 895 */
														int BgL_res3918z00_6695;

														{	/* Ast/let.scm 895 */
															int BgL_tmpz00_10004;

															BgL_tmpz00_10004 = (int) (((long) 2));
															BgL_res3918z00_6695 =
																BGL_MVALUES_NUMBER_SET(BgL_tmpz00_10004);
														} BgL_res3918z00_6695;
													}
													{	/* Ast/let.scm 895 */
														int BgL_tmpz00_10007;

														BgL_tmpz00_10007 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_tmpz00_10007,
															BgL_letzd2bindingszd2_6679);
													}
													return BgL_val0_1525z00_6694;
												}
										}
								}
							else
								{	/* Ast/let.scm 901 */
									obj_t BgL_val0_1527z00_6696;

									BgL_val0_1527z00_6696 =
										BGl_appendzd221011zd2zzast_letz00(bgl_reverse
										(BgL_ebindingsz00_6677), BgL_recza2zd2bindingsz70_6678);
									{	/* Ast/let.scm 901 */
										int BgL_res3919z00_6697;

										{	/* Ast/let.scm 901 */
											int BgL_tmpz00_10012;

											BgL_tmpz00_10012 = (int) (((long) 2));
											BgL_res3919z00_6697 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_10012);
										} BgL_res3919z00_6697;
									}
									{	/* Ast/let.scm 901 */
										int BgL_tmpz00_10015;

										BgL_tmpz00_10015 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_10015,
											BgL_letzd2bindingszd2_6679);
									}
									return BgL_val0_1527z00_6696;
								}
						}
				}
			}
		}

	}



/* _function? */
	obj_t BGl__functionzf3zf3zzast_letz00(obj_t BgL_env1619z00_42,
		obj_t BgL_opt1618z00_41)
	{
		{	/* Ast/let.scm 1159 */
			{	/* Ast/let.scm 1159 */
				obj_t BgL_expz00_4240;

				BgL_expz00_4240 = VECTOR_REF(BgL_opt1618z00_41, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1618z00_41))
					{
					case ((long) 1):

						{	/* Ast/let.scm 1159 */

							return BGl_functionzf3zf3zzast_letz00(BgL_expz00_4240, BFALSE);
						}
						break;
					case ((long) 2):

						{	/* Ast/let.scm 1159 */
							obj_t BgL_directpz00_4245;

							BgL_directpz00_4245 = VECTOR_REF(BgL_opt1618z00_41, ((long) 1));
							{	/* Ast/let.scm 1159 */

								return
									BGl_functionzf3zf3zzast_letz00(BgL_expz00_4240,
									BgL_directpz00_4245);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* function? */
	obj_t BGl_functionzf3zf3zzast_letz00(obj_t BgL_expz00_39,
		obj_t BgL_directpz00_40)
	{
		{	/* Ast/let.scm 1159 */
			{
				obj_t BgL_predz00_4303;
				obj_t BgL_lstz00_4304;

				{
					obj_t BgL_varz00_4251;
					obj_t BgL_argsz00_4252;
					obj_t BgL_zf3zd2z21_4253;

					if (PAIRP(BgL_expz00_39))
						{	/* Ast/let.scm 1165 */
							if ((CAR(BgL_expz00_39) == CNST_TABLE_REF(((long) 11))))
								{	/* Ast/let.scm 1165 */
									return BFALSE;
								}
							else
								{	/* Ast/let.scm 1165 */
									obj_t BgL_cdrzd22918zd2_4260;

									BgL_cdrzd22918zd2_4260 = CDR(BgL_expz00_39);
									if ((CAR(BgL_expz00_39) == CNST_TABLE_REF(((long) 8))))
										{	/* Ast/let.scm 1165 */
											if (PAIRP(BgL_cdrzd22918zd2_4260))
												{	/* Ast/let.scm 1165 */
													obj_t BgL_carzd22921zd2_4264;
													obj_t BgL_cdrzd22922zd2_4265;

													BgL_carzd22921zd2_4264 = CAR(BgL_cdrzd22918zd2_4260);
													BgL_cdrzd22922zd2_4265 = CDR(BgL_cdrzd22918zd2_4260);
													if (PAIRP(BgL_carzd22921zd2_4264))
														{	/* Ast/let.scm 1165 */
															obj_t BgL_carzd22924zd2_4267;

															BgL_carzd22924zd2_4267 =
																CAR(BgL_carzd22921zd2_4264);
															if (PAIRP(BgL_carzd22924zd2_4267))
																{	/* Ast/let.scm 1165 */
																	if (NULLP(CDR(BgL_carzd22921zd2_4264)))
																		{	/* Ast/let.scm 1165 */
																			if (PAIRP(BgL_cdrzd22922zd2_4265))
																				{	/* Ast/let.scm 1165 */
																					if (NULLP(CDR
																							(BgL_cdrzd22922zd2_4265)))
																						{	/* Ast/let.scm 1165 */
																							obj_t BgL_arg3455z00_4274;
																							obj_t BgL_arg3456z00_4275;

																							BgL_arg3455z00_4274 =
																								CAR(BgL_carzd22924zd2_4267);
																							BgL_arg3456z00_4275 =
																								CAR(BgL_cdrzd22922zd2_4265);
																							{	/* Ast/let.scm 1169 */
																								obj_t BgL_arg3470z00_6079;

																								BgL_arg3470z00_6079 =
																									BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																									(BgL_arg3455z00_4274, BFALSE);
																								return
																									BBOOL((BgL_arg3470z00_6079 ==
																										BgL_arg3456z00_4275));
																							}
																						}
																					else
																						{	/* Ast/let.scm 1165 */
																							BgL_varz00_4251 =
																								CAR(BgL_expz00_39);
																							BgL_argsz00_4252 =
																								BgL_cdrzd22918zd2_4260;
																							BgL_zf3zd2z21_4253 =
																								BgL_cdrzd22918zd2_4260;
																						BgL_tagzd22900zd2_4254:
																							{	/* Ast/let.scm 1171 */
																								bool_t BgL__ortest_1208z00_4295;

																								BgL__ortest_1208z00_4295 =
																									(BgL_varz00_4251 ==
																									CNST_TABLE_REF(((long) 7)));
																								if (BgL__ortest_1208z00_4295)
																									{	/* Ast/let.scm 1171 */
																										return
																											BBOOL
																											(BgL__ortest_1208z00_4295);
																									}
																								else
																									{	/* Ast/let.scm 1172 */
																										bool_t
																											BgL__ortest_1209z00_4296;
																										if (SYMBOLP
																											(BgL_varz00_4251))
																											{	/* Ast/let.scm 1172 */
																												obj_t
																													BgL_arg3471z00_4302;
																												BgL_arg3471z00_4302 =
																													BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																													(BgL_varz00_4251,
																													BFALSE);
																												BgL__ortest_1209z00_4296
																													=
																													(BgL_arg3471z00_4302
																													==
																													CNST_TABLE_REF(((long)
																															7)));
																											}
																										else
																											{	/* Ast/let.scm 1172 */
																												BgL__ortest_1209z00_4296
																													= ((bool_t) 0);
																											}
																										if (BgL__ortest_1209z00_4296)
																											{	/* Ast/let.scm 1172 */
																												return
																													BBOOL
																													(BgL__ortest_1209z00_4296);
																											}
																										else
																											{	/* Ast/let.scm 1173 */
																												obj_t
																													BgL__ortest_1210z00_4297;
																												{	/* Ast/let.scm 1173 */

																													BgL__ortest_1210z00_4297
																														=
																														BGl_functionzf3zf3zzast_letz00
																														(BgL_varz00_4251,
																														BFALSE);
																												}
																												if (CBOOL
																													(BgL__ortest_1210z00_4297))
																													{	/* Ast/let.scm 1173 */
																														return
																															BgL__ortest_1210z00_4297;
																													}
																												else
																													{	/* Ast/let.scm 1173 */
																														if (CBOOL
																															(BgL_directpz00_40))
																															{	/* Ast/let.scm 1174 */
																																return BFALSE;
																															}
																														else
																															{	/* Ast/let.scm 1174 */
																																BgL_predz00_4303
																																	=
																																	BGl_functionzf3zd2envz21zzast_letz00;
																																BgL_lstz00_4304
																																	=
																																	BgL_argsz00_4252;
																															BgL_zc3z04anonymousza33472ze3z87_4305:
																																if (PAIRP
																																	(BgL_lstz00_4304))
																																	{	/* Ast/let.scm 1163 */
																																		obj_t
																																			BgL__ortest_1207z00_4307;
																																		{	/* Ast/let.scm 1163 */
																																			obj_t
																																				BgL_arg3476z00_4309;
																																			BgL_arg3476z00_4309
																																				=
																																				CAR
																																				(BgL_lstz00_4304);
																																			BgL__ortest_1207z00_4307
																																				=
																																				PROCEDURE_ENTRY
																																				(BgL_predz00_4303)
																																				(BgL_predz00_4303,
																																				BgL_arg3476z00_4309,
																																				BEOA);
																																		}
																																		if (CBOOL
																																			(BgL__ortest_1207z00_4307))
																																			{	/* Ast/let.scm 1163 */
																																				return
																																					BgL__ortest_1207z00_4307;
																																			}
																																		else
																																			{
																																				obj_t
																																					BgL_lstz00_10082;
																																				BgL_lstz00_10082
																																					=
																																					CDR
																																					(BgL_lstz00_4304);
																																				BgL_lstz00_4304
																																					=
																																					BgL_lstz00_10082;
																																				goto
																																					BgL_zc3z04anonymousza33472ze3z87_4305;
																																			}
																																	}
																																else
																																	{	/* Ast/let.scm 1162 */
																																		return
																																			BFALSE;
																																	}
																															}
																													}
																											}
																									}
																							}
																						}
																				}
																			else
																				{
																					obj_t BgL_zf3zd2z21_10088;
																					obj_t BgL_argsz00_10087;
																					obj_t BgL_varz00_10085;

																					BgL_varz00_10085 = CAR(BgL_expz00_39);
																					BgL_argsz00_10087 =
																						BgL_cdrzd22918zd2_4260;
																					BgL_zf3zd2z21_10088 =
																						BgL_cdrzd22918zd2_4260;
																					BgL_zf3zd2z21_4253 =
																						BgL_zf3zd2z21_10088;
																					BgL_argsz00_4252 = BgL_argsz00_10087;
																					BgL_varz00_4251 = BgL_varz00_10085;
																					goto BgL_tagzd22900zd2_4254;
																				}
																		}
																	else
																		{
																			obj_t BgL_zf3zd2z21_10092;
																			obj_t BgL_argsz00_10091;
																			obj_t BgL_varz00_10089;

																			BgL_varz00_10089 = CAR(BgL_expz00_39);
																			BgL_argsz00_10091 =
																				BgL_cdrzd22918zd2_4260;
																			BgL_zf3zd2z21_10092 =
																				BgL_cdrzd22918zd2_4260;
																			BgL_zf3zd2z21_4253 = BgL_zf3zd2z21_10092;
																			BgL_argsz00_4252 = BgL_argsz00_10091;
																			BgL_varz00_4251 = BgL_varz00_10089;
																			goto BgL_tagzd22900zd2_4254;
																		}
																}
															else
																{
																	obj_t BgL_zf3zd2z21_10096;
																	obj_t BgL_argsz00_10095;
																	obj_t BgL_varz00_10093;

																	BgL_varz00_10093 = CAR(BgL_expz00_39);
																	BgL_argsz00_10095 = BgL_cdrzd22918zd2_4260;
																	BgL_zf3zd2z21_10096 = BgL_cdrzd22918zd2_4260;
																	BgL_zf3zd2z21_4253 = BgL_zf3zd2z21_10096;
																	BgL_argsz00_4252 = BgL_argsz00_10095;
																	BgL_varz00_4251 = BgL_varz00_10093;
																	goto BgL_tagzd22900zd2_4254;
																}
														}
													else
														{
															obj_t BgL_zf3zd2z21_10100;
															obj_t BgL_argsz00_10099;
															obj_t BgL_varz00_10097;

															BgL_varz00_10097 = CAR(BgL_expz00_39);
															BgL_argsz00_10099 = BgL_cdrzd22918zd2_4260;
															BgL_zf3zd2z21_10100 = BgL_cdrzd22918zd2_4260;
															BgL_zf3zd2z21_4253 = BgL_zf3zd2z21_10100;
															BgL_argsz00_4252 = BgL_argsz00_10099;
															BgL_varz00_4251 = BgL_varz00_10097;
															goto BgL_tagzd22900zd2_4254;
														}
												}
											else
												{
													obj_t BgL_zf3zd2z21_10104;
													obj_t BgL_argsz00_10103;
													obj_t BgL_varz00_10101;

													BgL_varz00_10101 = CAR(BgL_expz00_39);
													BgL_argsz00_10103 = BgL_cdrzd22918zd2_4260;
													BgL_zf3zd2z21_10104 = BgL_cdrzd22918zd2_4260;
													BgL_zf3zd2z21_4253 = BgL_zf3zd2z21_10104;
													BgL_argsz00_4252 = BgL_argsz00_10103;
													BgL_varz00_4251 = BgL_varz00_10101;
													goto BgL_tagzd22900zd2_4254;
												}
										}
									else
										{
											obj_t BgL_zf3zd2z21_10108;
											obj_t BgL_argsz00_10107;
											obj_t BgL_varz00_10105;

											BgL_varz00_10105 = CAR(BgL_expz00_39);
											BgL_argsz00_10107 = BgL_cdrzd22918zd2_4260;
											BgL_zf3zd2z21_10108 = BgL_cdrzd22918zd2_4260;
											BgL_zf3zd2z21_4253 = BgL_zf3zd2z21_10108;
											BgL_argsz00_4252 = BgL_argsz00_10107;
											BgL_varz00_4251 = BgL_varz00_10105;
											goto BgL_tagzd22900zd2_4254;
										}
								}
						}
					else
						{	/* Ast/let.scm 1165 */
							return BFALSE;
						}
				}
			}
		}

	}



/* constant? */
	bool_t BGl_constantzf3zf3zzast_letz00(obj_t BgL_valz00_43)
	{
		{	/* Ast/let.scm 1181 */
			{	/* Ast/let.scm 1182 */
				bool_t BgL__ortest_1213z00_4311;

				BgL__ortest_1213z00_4311 =
					BGl_isazf3zf3zz__objectz00(BgL_valz00_43, BGl_atomz00zzast_nodez00);
				if (BgL__ortest_1213z00_4311)
					{	/* Ast/let.scm 1182 */
						return BgL__ortest_1213z00_4311;
					}
				else
					{	/* Ast/let.scm 1182 */
						bool_t BgL__ortest_1214z00_4312;

						BgL__ortest_1214z00_4312 =
							BGl_isazf3zf3zz__objectz00(BgL_valz00_43,
							BGl_kwotez00zzast_nodez00);
						if (BgL__ortest_1214z00_4312)
							{	/* Ast/let.scm 1182 */
								return BgL__ortest_1214z00_4312;
							}
						else
							{	/* Ast/let.scm 1182 */
								bool_t BgL__ortest_1215z00_4313;

								BgL__ortest_1215z00_4313 = NULLP(BgL_valz00_43);
								if (BgL__ortest_1215z00_4313)
									{	/* Ast/let.scm 1182 */
										return BgL__ortest_1215z00_4313;
									}
								else
									{	/* Ast/let.scm 1182 */
										bool_t BgL__ortest_1216z00_4314;

										BgL__ortest_1216z00_4314 =
											BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_valz00_43);
										if (BgL__ortest_1216z00_4314)
											{	/* Ast/let.scm 1182 */
												return BgL__ortest_1216z00_4314;
											}
										else
											{	/* Ast/let.scm 1183 */
												bool_t BgL__ortest_1217z00_4315;

												BgL__ortest_1217z00_4315 = CNSTP(BgL_valz00_43);
												if (BgL__ortest_1217z00_4315)
													{	/* Ast/let.scm 1183 */
														return BgL__ortest_1217z00_4315;
													}
												else
													{	/* Ast/let.scm 1183 */
														bool_t BgL__ortest_1218z00_4316;

														BgL__ortest_1218z00_4316 = STRINGP(BgL_valz00_43);
														if (BgL__ortest_1218z00_4316)
															{	/* Ast/let.scm 1183 */
																return BgL__ortest_1218z00_4316;
															}
														else
															{	/* Ast/let.scm 1183 */
																bool_t BgL__ortest_1219z00_4317;

																BgL__ortest_1219z00_4317 = CHARP(BgL_valz00_43);
																if (BgL__ortest_1219z00_4317)
																	{	/* Ast/let.scm 1183 */
																		return BgL__ortest_1219z00_4317;
																	}
																else
																	{	/* Ast/let.scm 1183 */
																		bool_t BgL__ortest_1220z00_4318;

																		BgL__ortest_1220z00_4318 =
																			BOOLEANP(BgL_valz00_43);
																		if (BgL__ortest_1220z00_4318)
																			{	/* Ast/let.scm 1183 */
																				return BgL__ortest_1220z00_4318;
																			}
																		else
																			{	/* Ast/let.scm 1183 */
																				return
																					BGl_numberzf3zf3zz__r4_numbers_6_5z00
																					(BgL_valz00_43);
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



/* loop~0 */
	bool_t BGl_loopze70ze7zzast_letz00(obj_t BgL_valz00_4321)
	{
		{	/* Ast/let.scm 1235 */
		BGl_loopze70ze7zzast_letz00:
			if (BGl_constantzf3zf3zzast_letz00(BgL_valz00_4321))
				{	/* Ast/let.scm 1235 */
					return ((bool_t) 0);
				}
			else
				{	/* Ast/let.scm 1235 */
					if (PAIRP(BgL_valz00_4321))
						{	/* Ast/let.scm 1235 */
							if ((CAR(BgL_valz00_4321) == CNST_TABLE_REF(((long) 11))))
								{	/* Ast/let.scm 1235 */
									return ((bool_t) 0);
								}
							else
								{	/* Ast/let.scm 1235 */
									obj_t BgL_cdrzd23084zd2_4340;

									BgL_cdrzd23084zd2_4340 = CDR(BgL_valz00_4321);
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
												(BgL_valz00_4321), CNST_TABLE_REF(((long) 36)))))
										{	/* Ast/let.scm 1235 */
											if (PAIRP(BgL_cdrzd23084zd2_4340))
												{	/* Ast/let.scm 1235 */
													obj_t BgL_cdrzd23088zd2_4344;

													BgL_cdrzd23088zd2_4344 = CDR(BgL_cdrzd23084zd2_4340);
													if (PAIRP(BgL_cdrzd23088zd2_4344))
														{	/* Ast/let.scm 1235 */
															if (NULLP(CDR(BgL_cdrzd23088zd2_4344)))
																{	/* Ast/let.scm 1235 */
																	obj_t BgL_arg3489z00_4348;
																	obj_t BgL_arg3490z00_4349;

																	BgL_arg3489z00_4348 =
																		CAR(BgL_cdrzd23084zd2_4340);
																	BgL_arg3490z00_4349 =
																		CAR(BgL_cdrzd23088zd2_4344);
																	{	/* Ast/let.scm 1239 */
																		bool_t BgL__ortest_1221z00_6115;

																		BgL__ortest_1221z00_6115 =
																			BGl_loopze70ze7zzast_letz00
																			(BgL_arg3489z00_4348);
																		if (BgL__ortest_1221z00_6115)
																			{	/* Ast/let.scm 1239 */
																				return BgL__ortest_1221z00_6115;
																			}
																		else
																			{
																				obj_t BgL_valz00_10152;

																				BgL_valz00_10152 = BgL_arg3490z00_4349;
																				BgL_valz00_4321 = BgL_valz00_10152;
																				goto BGl_loopze70ze7zzast_letz00;
																			}
																	}
																}
															else
																{	/* Ast/let.scm 1235 */
																	if (
																		(CAR(BgL_valz00_4321) ==
																			CNST_TABLE_REF(((long) 37))))
																		{	/* Ast/let.scm 1235 */
																			obj_t BgL_cdrzd23116zd2_4353;

																			BgL_cdrzd23116zd2_4353 =
																				CDR(((obj_t) BgL_cdrzd23084zd2_4340));
																			{	/* Ast/let.scm 1235 */
																				obj_t BgL_cdrzd23123zd2_4354;

																				BgL_cdrzd23123zd2_4354 =
																					CDR(((obj_t) BgL_cdrzd23116zd2_4353));
																				if (PAIRP(BgL_cdrzd23123zd2_4354))
																					{	/* Ast/let.scm 1235 */
																						if (NULLP(CDR
																								(BgL_cdrzd23123zd2_4354)))
																							{	/* Ast/let.scm 1235 */
																								obj_t BgL_arg3496z00_4358;
																								obj_t BgL_arg3498z00_4359;
																								obj_t BgL_arg3499z00_4360;

																								BgL_arg3496z00_4358 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd23084zd2_4340));
																								BgL_arg3498z00_4359 =
																									CAR(((obj_t)
																										BgL_cdrzd23116zd2_4353));
																								BgL_arg3499z00_4360 =
																									CAR(BgL_cdrzd23123zd2_4354);
																								{	/* Ast/let.scm 1241 */
																									bool_t
																										BgL__ortest_1222z00_6126;
																									BgL__ortest_1222z00_6126 =
																										BGl_loopze70ze7zzast_letz00
																										(BgL_arg3496z00_4358);
																									if (BgL__ortest_1222z00_6126)
																										{	/* Ast/let.scm 1241 */
																											return
																												BgL__ortest_1222z00_6126;
																										}
																									else
																										{	/* Ast/let.scm 1241 */
																											bool_t
																												BgL__ortest_1223z00_6127;
																											BgL__ortest_1223z00_6127 =
																												BGl_loopze70ze7zzast_letz00
																												(BgL_arg3498z00_4359);
																											if (BgL__ortest_1223z00_6127)
																												{	/* Ast/let.scm 1241 */
																													return
																														BgL__ortest_1223z00_6127;
																												}
																											else
																												{
																													obj_t
																														BgL_valz00_10175;
																													BgL_valz00_10175 =
																														BgL_arg3499z00_4360;
																													BgL_valz00_4321 =
																														BgL_valz00_10175;
																													goto
																														BGl_loopze70ze7zzast_letz00;
																												}
																										}
																								}
																							}
																						else
																							{	/* Ast/let.scm 1235 */
																								return ((bool_t) 1);
																							}
																					}
																				else
																					{	/* Ast/let.scm 1235 */
																						return ((bool_t) 1);
																					}
																			}
																		}
																	else
																		{	/* Ast/let.scm 1235 */
																			return ((bool_t) 1);
																		}
																}
														}
													else
														{	/* Ast/let.scm 1235 */
															if (
																(CAR(BgL_valz00_4321) ==
																	CNST_TABLE_REF(((long) 38))))
																{	/* Ast/let.scm 1235 */
																	if (NULLP(CDR(
																				((obj_t) BgL_cdrzd23084zd2_4340))))
																		{	/* Ast/let.scm 1235 */
																			obj_t BgL_arg3509z00_4369;

																			BgL_arg3509z00_4369 =
																				CAR(((obj_t) BgL_cdrzd23084zd2_4340));
																			{
																				obj_t BgL_valz00_10186;

																				BgL_valz00_10186 = BgL_arg3509z00_4369;
																				BgL_valz00_4321 = BgL_valz00_10186;
																				goto BGl_loopze70ze7zzast_letz00;
																			}
																		}
																	else
																		{	/* Ast/let.scm 1235 */
																			return ((bool_t) 1);
																		}
																}
															else
																{	/* Ast/let.scm 1235 */
																	return ((bool_t) 1);
																}
														}
												}
											else
												{	/* Ast/let.scm 1235 */
													return ((bool_t) 1);
												}
										}
									else
										{	/* Ast/let.scm 1235 */
											if ((CAR(BgL_valz00_4321) == CNST_TABLE_REF(((long) 38))))
												{	/* Ast/let.scm 1235 */
													if (PAIRP(BgL_cdrzd23084zd2_4340))
														{	/* Ast/let.scm 1235 */
															if (NULLP(CDR(BgL_cdrzd23084zd2_4340)))
																{
																	obj_t BgL_valz00_10196;

																	BgL_valz00_10196 =
																		CAR(BgL_cdrzd23084zd2_4340);
																	BgL_valz00_4321 = BgL_valz00_10196;
																	goto BGl_loopze70ze7zzast_letz00;
																}
															else
																{	/* Ast/let.scm 1235 */
																	return ((bool_t) 1);
																}
														}
													else
														{	/* Ast/let.scm 1235 */
															return ((bool_t) 1);
														}
												}
											else
												{	/* Ast/let.scm 1235 */
													obj_t BgL_cdrzd23198zd2_4380;

													BgL_cdrzd23198zd2_4380 = CDR(BgL_valz00_4321);
													if (
														(CAR(BgL_valz00_4321) ==
															CNST_TABLE_REF(((long) 37))))
														{	/* Ast/let.scm 1235 */
															if (PAIRP(BgL_cdrzd23198zd2_4380))
																{	/* Ast/let.scm 1235 */
																	obj_t BgL_cdrzd23203zd2_4384;

																	BgL_cdrzd23203zd2_4384 =
																		CDR(BgL_cdrzd23198zd2_4380);
																	if (PAIRP(BgL_cdrzd23203zd2_4384))
																		{	/* Ast/let.scm 1235 */
																			obj_t BgL_cdrzd23208zd2_4386;

																			BgL_cdrzd23208zd2_4386 =
																				CDR(BgL_cdrzd23203zd2_4384);
																			if (PAIRP(BgL_cdrzd23208zd2_4386))
																				{	/* Ast/let.scm 1235 */
																					if (NULLP(CDR
																							(BgL_cdrzd23208zd2_4386)))
																						{	/* Ast/let.scm 1235 */
																							obj_t BgL_arg3529z00_4390;
																							obj_t BgL_arg3530z00_4391;
																							obj_t BgL_arg3531z00_4392;

																							BgL_arg3529z00_4390 =
																								CAR(BgL_cdrzd23198zd2_4380);
																							BgL_arg3530z00_4391 =
																								CAR(BgL_cdrzd23203zd2_4384);
																							BgL_arg3531z00_4392 =
																								CAR(BgL_cdrzd23208zd2_4386);
																							{	/* Ast/let.scm 1241 */
																								bool_t BgL__ortest_1222z00_6151;

																								BgL__ortest_1222z00_6151 =
																									BGl_loopze70ze7zzast_letz00
																									(BgL_arg3529z00_4390);
																								if (BgL__ortest_1222z00_6151)
																									{	/* Ast/let.scm 1241 */
																										return
																											BgL__ortest_1222z00_6151;
																									}
																								else
																									{	/* Ast/let.scm 1241 */
																										bool_t
																											BgL__ortest_1223z00_6152;
																										BgL__ortest_1223z00_6152 =
																											BGl_loopze70ze7zzast_letz00
																											(BgL_arg3530z00_4391);
																										if (BgL__ortest_1223z00_6152)
																											{	/* Ast/let.scm 1241 */
																												return
																													BgL__ortest_1223z00_6152;
																											}
																										else
																											{
																												obj_t BgL_valz00_10221;

																												BgL_valz00_10221 =
																													BgL_arg3531z00_4392;
																												BgL_valz00_4321 =
																													BgL_valz00_10221;
																												goto
																													BGl_loopze70ze7zzast_letz00;
																											}
																									}
																							}
																						}
																					else
																						{	/* Ast/let.scm 1235 */
																							return ((bool_t) 1);
																						}
																				}
																			else
																				{	/* Ast/let.scm 1235 */
																					return ((bool_t) 1);
																				}
																		}
																	else
																		{	/* Ast/let.scm 1235 */
																			return ((bool_t) 1);
																		}
																}
															else
																{	/* Ast/let.scm 1235 */
																	return ((bool_t) 1);
																}
														}
													else
														{	/* Ast/let.scm 1235 */
															return ((bool_t) 1);
														}
												}
										}
								}
						}
					else
						{	/* Ast/let.scm 1235 */
							return ((bool_t) 1);
						}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_letz00()
	{
		{	/* Ast/let.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_letz00()
	{
		{	/* Ast/let.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_letz00()
	{
		{	/* Ast/let.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_letz00()
	{
		{	/* Ast/let.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 302006061),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzast_substitutez00(((long) 280730348),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 535161241),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 383247839),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string4061z00zzast_letz00));
		}

	}

#ifdef __cplusplus
}
#endif
