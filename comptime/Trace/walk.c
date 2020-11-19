/*===========================================================================*/
/*   (Trace/walk.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Trace/walk.scm) */
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


	static obj_t BGl_z62findzd2lastzd2nodez62zztrace_walkz00(obj_t, obj_t);
	static obj_t BGl_z62findzd2lastzd2nodezd2setzd2e1339z62zztrace_walkz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t BGl_z62findzd2lastzd2nodezd2exter1325zb0zztrace_walkz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2sequence1345z62zztrace_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_z62findzd2lastzd2nodezd2condi1329zb0zztrace_walkz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zztrace_walkz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tracezd2walkz12zc0zztrace_walkz00(obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zztrace_walkz00();
	static obj_t BGl_tracezd2funz12zc0zztrace_walkz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2condition1361z62zztrace_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_letzd2varzd2_bglt
		BGl_makezd2tracedzd2nodez00zztrace_walkz00(BgL_nodez00_bglt,
		BgL_typez00_bglt, obj_t, obj_t, obj_t);
	static obj_t BGl_z62findzd2lastzd2nodezd2letzd2f1337z62zztrace_walkz00(obj_t,
		obj_t);
	static obj_t BGl_z62findzd2lastzd2nodezd2letzd2v1335z62zztrace_walkz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt BGl_tracezd2nodezd2zztrace_walkz00(BgL_nodez00_bglt,
		obj_t, obj_t);
	static obj_t BGl_z62findzd2lastzd2nodezd2jumpzd21341z62zztrace_walkz00(obj_t,
		obj_t);
	static obj_t BGl_z62tracezd2walkz12za2zztrace_walkz00(obj_t, obj_t);
	extern obj_t BGl_pragmaz00zzast_nodez00;
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static BgL_nodez00_bglt BGl_z62tracezd2nodezb0zztrace_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62toplevelzd2tracezd2nodez62zztrace_walkz00(obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2jumpzd2exzd2i1375z62zztrace_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62findzd2lastzd2nodezd2setq1327zb0zztrace_walkz00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zztrace_walkz00();
	static obj_t BGl_findzd2lastzd2sexpz00zztrace_walkz00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2switch1365z62zztrace_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62toplevelzd2tracezd2nodezd21385zb0zztrace_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62toplevelzd2tracezd2nodezd21387zb0zztrace_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62toplevelzd2tracezd2nodezd21389zb0zztrace_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2funcall1353z62zztrace_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static BgL_nodez00_bglt
		BGl_toplevelzd2tracezd2nodez00zztrace_walkz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2cast1357z62zztrace_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2makezd2box1377zb0zztrace_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2boxzd2ref1379zb0zztrace_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00;
	static BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2setq1359z62zztrace_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2boxzd2setz121381za2zztrace_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62toplevelzd2tracezd2node1382z62zztrace_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_z62findzd2lastzd2nodezd2appzd2l1321z62zztrace_walkz00(obj_t,
		obj_t);
	extern bool_t BGl_isloopzf3zf3zztrace_isloopz00(BgL_letzd2funzd2_bglt);
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztrace_walkz00 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_tracezd2idzd2zztrace_walkz00(obj_t);
	extern obj_t BGl_atomz00zzast_nodez00;
	static obj_t BGl_z62findzd2lastzd2nodezd2funca1323zb0zztrace_walkz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zztrace_walkz00();
	static bool_t BGl_toplevelzd2tracezd2nodeza2z12zb0zztrace_walkz00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zztrace_walkz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	static obj_t BGl_findzd2lastzd2nodez00zztrace_walkz00(BgL_nodez00_bglt);
	extern obj_t BGl_castz00zzast_nodez00;
	static bool_t BGl_tracezd2nodeza2z12z62zztrace_walkz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62tracezd2nodezd2app1349z62zztrace_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_z62findzd2lastzd2nodezd2app1319zb0zztrace_walkz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2letzd2fun1367zb0zztrace_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62findzd2lastzd2node1312z62zztrace_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	static BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2appzd2ly1351zb0zztrace_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_fqnameze70ze7zztrace_walkz00(obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztrace_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztrace_isloopz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_letz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zztrace_walkz00();
	static obj_t BGl_z62findzd2lastzd2nodezd2sync1317zb0zztrace_walkz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2extern1355z62zztrace_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztrace_walkz00();
	static BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2setzd2exzd2it1372z62zztrace_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztrace_walkz00();
	static obj_t BGl_z62findzd2lastzd2nodezd2fail1331zb0zztrace_walkz00(obj_t,
		obj_t);
	static obj_t BGl_z62findzd2lastzd2nodezd2seque1315zb0zztrace_walkz00(obj_t,
		obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tracezd2node1342zb0zztrace_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern bool_t BGl_userzd2symbolzf3z21zzast_identz00(obj_t);
	static obj_t BGl_z62findzd2lastzd2nodezd2switc1333zb0zztrace_walkz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2letzd2var1369zb0zztrace_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2sync1347z62zztrace_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2fail1363z62zztrace_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t __cnst[21];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2200z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72220za7,
		BGl_z62tracezd2nodezd2setq1359z62zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2201z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72221za7,
		BGl_z62tracezd2nodezd2condition1361z62zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2202z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72222za7,
		BGl_z62tracezd2nodezd2fail1363z62zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2203z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72223za7,
		BGl_z62tracezd2nodezd2switch1365z62zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2204z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72224za7,
		BGl_z62tracezd2nodezd2letzd2fun1367zb0zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2205z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72225za7,
		BGl_z62tracezd2nodezd2letzd2var1369zb0zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2206z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72226za7,
		BGl_z62tracezd2nodezd2setzd2exzd2it1372z62zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2207z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72227za7,
		BGl_z62tracezd2nodezd2jumpzd2exzd2i1375z62zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2208z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72228za7,
		BGl_z62tracezd2nodezd2makezd2box1377zb0zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2209z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72229za7,
		BGl_z62tracezd2nodezd2boxzd2ref1379zb0zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2210z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72230za7,
		BGl_z62tracezd2nodezd2boxzd2setz121381za2zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2211z00zztrace_walkz00,
		BgL_bgl_za762toplevelza7d2tr2231z00,
		BGl_z62toplevelzd2tracezd2nodezd21385zb0zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2213z00zztrace_walkz00,
		BgL_bgl_za762toplevelza7d2tr2232z00,
		BGl_z62toplevelzd2tracezd2nodezd21387zb0zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2214z00zztrace_walkz00,
		BgL_bgl_za762toplevelza7d2tr2233z00,
		BGl_z62toplevelzd2tracezd2nodezd21389zb0zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2161z00zztrace_walkz00,
		BgL_bgl_string2161za700za7za7t2234za7, "Trace", 5);
	      DEFINE_STRING(BGl_string2162z00zztrace_walkz00,
		BgL_bgl_string2162za700za7za7t2235za7, "   . ", 5);
	      DEFINE_STRING(BGl_string2163z00zztrace_walkz00,
		BgL_bgl_string2163za700za7za7t2236za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string2164z00zztrace_walkz00,
		BgL_bgl_string2164za700za7za7t2237za7, " error", 6);
	      DEFINE_STRING(BGl_string2165z00zztrace_walkz00,
		BgL_bgl_string2165za700za7za7t2238za7, "s", 1);
	      DEFINE_STRING(BGl_string2166z00zztrace_walkz00,
		BgL_bgl_string2166za700za7za7t2239za7, "", 0);
	      DEFINE_STRING(BGl_string2167z00zztrace_walkz00,
		BgL_bgl_string2167za700za7za7t2240za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string2168z00zztrace_walkz00,
		BgL_bgl_string2168za700za7za7t2241za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string2169z00zztrace_walkz00,
		BgL_bgl_string2169za700za7za7t2242za7, "%toplevel@", 10);
	      DEFINE_STRING(BGl_string2170z00zztrace_walkz00,
		BgL_bgl_string2170za700za7za7t2243za7, "%import@", 8);
	      DEFINE_STRING(BGl_string2172z00zztrace_walkz00,
		BgL_bgl_string2172za700za7za7t2244za7, "find-last-node1312", 18);
	      DEFINE_STRING(BGl_string2174z00zztrace_walkz00,
		BgL_bgl_string2174za700za7za7t2245za7, "trace-node1342", 14);
	      DEFINE_STRING(BGl_string2176z00zztrace_walkz00,
		BgL_bgl_string2176za700za7za7t2246za7, "toplevel-trace-node1382", 23);
	      DEFINE_STRING(BGl_string2178z00zztrace_walkz00,
		BgL_bgl_string2178za700za7za7t2247za7, "find-last-node", 14);
	      DEFINE_STRING(BGl_string2193z00zztrace_walkz00,
		BgL_bgl_string2193za700za7za7t2248za7, "trace-node", 10);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2walkz12zd2envz12zztrace_walkz00,
		BgL_bgl_za762traceza7d2walkza72249za7,
		BGl_z62tracezd2walkz12za2zztrace_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
		BgL_bgl_za762findza7d2lastza7d2250za7,
		BGl_z62findzd2lastzd2nodez62zztrace_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_toplevelzd2tracezd2nodezd2envzd2zztrace_walkz00,
		BgL_bgl_za762toplevelza7d2tr2251z00,
		BGl_z62toplevelzd2tracezd2nodez62zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2212z00zztrace_walkz00,
		BgL_bgl_string2212za700za7za7t2252za7, "toplevel-trace-node", 19);
	      DEFINE_STRING(BGl_string2215z00zztrace_walkz00,
		BgL_bgl_string2215za700za7za7t2253za7, "trace_walk", 10);
	      DEFINE_STRING(BGl_string2216z00zztrace_walkz00,
		BgL_bgl_string2216za700za7za7t2254za7,
		"|:| value let $env-pop-trace $env-push-trace current-dynamic-env dynamic-env quote at location env loc name aux generic-init method-init no-trace @ imported-modules-init toplevel-init pass-started ",
		197);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2171z00zztrace_walkz00,
		BgL_bgl_za762findza7d2lastza7d2255za7,
		BGl_z62findzd2lastzd2node1312z62zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2173z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2node12256z00,
		BGl_z62tracezd2node1342zb0zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2175z00zztrace_walkz00,
		BgL_bgl_za762toplevelza7d2tr2257z00,
		BGl_z62toplevelzd2tracezd2node1382z62zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2177z00zztrace_walkz00,
		BgL_bgl_za762findza7d2lastza7d2258za7,
		BGl_z62findzd2lastzd2nodezd2seque1315zb0zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2179z00zztrace_walkz00,
		BgL_bgl_za762findza7d2lastza7d2259za7,
		BGl_z62findzd2lastzd2nodezd2sync1317zb0zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2180z00zztrace_walkz00,
		BgL_bgl_za762findza7d2lastza7d2260za7,
		BGl_z62findzd2lastzd2nodezd2app1319zb0zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2181z00zztrace_walkz00,
		BgL_bgl_za762findza7d2lastza7d2261za7,
		BGl_z62findzd2lastzd2nodezd2appzd2l1321z62zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2182z00zztrace_walkz00,
		BgL_bgl_za762findza7d2lastza7d2262za7,
		BGl_z62findzd2lastzd2nodezd2funca1323zb0zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2183z00zztrace_walkz00,
		BgL_bgl_za762findza7d2lastza7d2263za7,
		BGl_z62findzd2lastzd2nodezd2exter1325zb0zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2184z00zztrace_walkz00,
		BgL_bgl_za762findza7d2lastza7d2264za7,
		BGl_z62findzd2lastzd2nodezd2setq1327zb0zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2185z00zztrace_walkz00,
		BgL_bgl_za762findza7d2lastza7d2265za7,
		BGl_z62findzd2lastzd2nodezd2condi1329zb0zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2186z00zztrace_walkz00,
		BgL_bgl_za762findza7d2lastza7d2266za7,
		BGl_z62findzd2lastzd2nodezd2fail1331zb0zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2187z00zztrace_walkz00,
		BgL_bgl_za762findza7d2lastza7d2267za7,
		BGl_z62findzd2lastzd2nodezd2switc1333zb0zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2188z00zztrace_walkz00,
		BgL_bgl_za762findza7d2lastza7d2268za7,
		BGl_z62findzd2lastzd2nodezd2letzd2v1335z62zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2189z00zztrace_walkz00,
		BgL_bgl_za762findza7d2lastza7d2269za7,
		BGl_z62findzd2lastzd2nodezd2letzd2f1337z62zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2190z00zztrace_walkz00,
		BgL_bgl_za762findza7d2lastza7d2270za7,
		BGl_z62findzd2lastzd2nodezd2setzd2e1339z62zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2191z00zztrace_walkz00,
		BgL_bgl_za762findza7d2lastza7d2271za7,
		BGl_z62findzd2lastzd2nodezd2jumpzd21341z62zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2192z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72272za7,
		BGl_z62tracezd2nodezd2sequence1345z62zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2194z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72273za7,
		BGl_z62tracezd2nodezd2sync1347z62zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2195z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72274za7,
		BGl_z62tracezd2nodezd2app1349z62zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2196z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72275za7,
		BGl_z62tracezd2nodezd2appzd2ly1351zb0zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2197z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72276za7,
		BGl_z62tracezd2nodezd2funcall1353z62zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2198z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72277za7,
		BGl_z62tracezd2nodezd2extern1355z62zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2199z00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72278za7,
		BGl_z62tracezd2nodezd2cast1357z62zztrace_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_GENERIC(BGl_tracezd2nodezd2envz00zztrace_walkz00,
		BgL_bgl_za762traceza7d2nodeza72279za7,
		BGl_z62tracezd2nodezb0zztrace_walkz00, 0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztrace_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztrace_walkz00(long
		BgL_checksumz00_2976, char *BgL_fromz00_2977)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztrace_walkz00))
				{
					BGl_requirezd2initializa7ationz75zztrace_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztrace_walkz00();
					BGl_libraryzd2moduleszd2initz00zztrace_walkz00();
					BGl_cnstzd2initzd2zztrace_walkz00();
					BGl_importedzd2moduleszd2initz00zztrace_walkz00();
					BGl_genericzd2initzd2zztrace_walkz00();
					BGl_methodzd2initzd2zztrace_walkz00();
					return BGl_toplevelzd2initzd2zztrace_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztrace_walkz00()
	{
		{	/* Trace/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"trace_walk");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"trace_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"trace_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"trace_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"trace_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "trace_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"trace_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "trace_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"trace_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "trace_walk");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"trace_walk");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "trace_walk");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"trace_walk");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "trace_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztrace_walkz00()
	{
		{	/* Trace/walk.scm 15 */
			{	/* Trace/walk.scm 15 */
				obj_t BgL_cportz00_2858;

				{	/* Trace/walk.scm 15 */
					obj_t BgL_stringz00_2866;

					BgL_stringz00_2866 = BGl_string2216z00zztrace_walkz00;
					{	/* Trace/walk.scm 15 */
						obj_t BgL_startz00_2867;

						BgL_startz00_2867 = BINT(((long) 0));
						{	/* Trace/walk.scm 15 */
							obj_t BgL_endz00_2868;

							BgL_endz00_2868 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2866)));
							{	/* Trace/walk.scm 15 */

								BgL_cportz00_2858 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2866, BgL_startz00_2867, BgL_endz00_2868);
				}}}}
				{
					long BgL_iz00_2859;

					BgL_iz00_2859 = ((long) 20);
				BgL_loopz00_2860:
					if ((BgL_iz00_2859 == ((long) -1)))
						{	/* Trace/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Trace/walk.scm 15 */
							{	/* Trace/walk.scm 15 */
								obj_t BgL_arg2218z00_2862;

								{	/* Trace/walk.scm 15 */

									{	/* Trace/walk.scm 15 */
										obj_t BgL_locationz00_2864;

										BgL_locationz00_2864 = BBOOL(((bool_t) 0));
										{	/* Trace/walk.scm 15 */

											BgL_arg2218z00_2862 =
												BGl_readz00zz__readerz00(BgL_cportz00_2858,
												BgL_locationz00_2864);
										}
									}
								}
								{	/* Trace/walk.scm 15 */
									int BgL_tmpz00_3011;

									BgL_tmpz00_3011 = (int) (BgL_iz00_2859);
									CNST_TABLE_SET(BgL_tmpz00_3011, BgL_arg2218z00_2862);
							}}
							{	/* Trace/walk.scm 15 */
								int BgL_auxz00_2865;

								BgL_auxz00_2865 = (int) ((BgL_iz00_2859 - ((long) 1)));
								{
									long BgL_iz00_3016;

									BgL_iz00_3016 = (long) (BgL_auxz00_2865);
									BgL_iz00_2859 = BgL_iz00_3016;
									goto BgL_loopz00_2860;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztrace_walkz00()
	{
		{	/* Trace/walk.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztrace_walkz00()
	{
		{	/* Trace/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* trace-walk! */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2walkz12zc0zztrace_walkz00(obj_t
		BgL_globalsz00_17)
	{
		{	/* Trace/walk.scm 39 */
			{	/* Trace/walk.scm 40 */
				obj_t BgL_list1449z00_1538;

				{	/* Trace/walk.scm 40 */
					obj_t BgL_arg1461z00_1539;

					{	/* Trace/walk.scm 40 */
						obj_t BgL_arg1462z00_1540;

						BgL_arg1462z00_1540 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1461z00_1539 =
							MAKE_YOUNG_PAIR(BGl_string2161z00zztrace_walkz00,
							BgL_arg1462z00_1540);
					}
					BgL_list1449z00_1538 =
						MAKE_YOUNG_PAIR(BGl_string2162z00zztrace_walkz00,
						BgL_arg1461z00_1539);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1449z00_1538);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string2161z00zztrace_walkz00;
			{	/* Trace/walk.scm 40 */
				obj_t BgL_g1106z00_1541;

				BgL_g1106z00_1541 = BNIL;
				{
					obj_t BgL_hooksz00_1544;
					obj_t BgL_hnamesz00_1545;

					BgL_hooksz00_1544 = BgL_g1106z00_1541;
					BgL_hnamesz00_1545 = BNIL;
				BgL_zc3z04anonymousza31463ze3z87_1546:
					if (NULLP(BgL_hooksz00_1544))
						{	/* Trace/walk.scm 40 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Trace/walk.scm 40 */
							bool_t BgL_test2283z00_3029;

							{	/* Trace/walk.scm 40 */
								obj_t BgL_fun1479z00_1553;

								BgL_fun1479z00_1553 = CAR(((obj_t) BgL_hooksz00_1544));
								BgL_test2283z00_3029 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1479z00_1553)
									(BgL_fun1479z00_1553, BEOA));
							}
							if (BgL_test2283z00_3029)
								{	/* Trace/walk.scm 40 */
									obj_t BgL_arg1474z00_1550;
									obj_t BgL_arg1476z00_1551;

									BgL_arg1474z00_1550 = CDR(((obj_t) BgL_hooksz00_1544));
									BgL_arg1476z00_1551 = CDR(((obj_t) BgL_hnamesz00_1545));
									{
										obj_t BgL_hnamesz00_3041;
										obj_t BgL_hooksz00_3040;

										BgL_hooksz00_3040 = BgL_arg1474z00_1550;
										BgL_hnamesz00_3041 = BgL_arg1476z00_1551;
										BgL_hnamesz00_1545 = BgL_hnamesz00_3041;
										BgL_hooksz00_1544 = BgL_hooksz00_3040;
										goto BgL_zc3z04anonymousza31463ze3z87_1546;
									}
								}
							else
								{	/* Trace/walk.scm 40 */
									obj_t BgL_arg1477z00_1552;

									BgL_arg1477z00_1552 = CAR(((obj_t) BgL_hnamesz00_1545));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string2161z00zztrace_walkz00,
										BGl_string2163z00zztrace_walkz00, BgL_arg1477z00_1552);
								}
						}
				}
			}
			{	/* Trace/walk.scm 46 */
				obj_t BgL_idz00_1556;

				BgL_idz00_1556 = CNST_TABLE_REF(((long) 1));
				{	/* Trace/walk.scm 46 */
					obj_t BgL_gloz00_1557;

					{	/* Trace/walk.scm 47 */
						obj_t BgL_list1490z00_1561;

						BgL_list1490z00_1561 =
							MAKE_YOUNG_PAIR(BGl_za2moduleza2z00zzmodule_modulez00, BNIL);
						BgL_gloz00_1557 =
							BGl_findzd2globalzd2zzast_envz00(BgL_idz00_1556,
							BgL_list1490z00_1561);
					}
					{	/* Trace/walk.scm 47 */

						if (BGl_isazf3zf3zz__objectz00(BgL_gloz00_1557,
								BGl_globalz00zzast_varz00))
							{	/* Trace/walk.scm 49 */
								BgL_sfunz00_bglt BgL_i1108z00_1559;

								BgL_i1108z00_1559 =
									((BgL_sfunz00_bglt)
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_gloz00_1557))))->
										BgL_valuez00));
								{
									obj_t BgL_auxz00_3054;

									{	/* Trace/walk.scm 50 */
										obj_t BgL_arg1489z00_1560;

										BgL_arg1489z00_1560 =
											(((BgL_sfunz00_bglt) COBJECT(BgL_i1108z00_1559))->
											BgL_bodyz00);
										BgL_auxz00_3054 =
											((obj_t)
											BGl_toplevelzd2tracezd2nodez00zztrace_walkz00((
													(BgL_nodez00_bglt) BgL_arg1489z00_1560)));
									}
									((((BgL_sfunz00_bglt) COBJECT(BgL_i1108z00_1559))->
											BgL_bodyz00) = ((obj_t) BgL_auxz00_3054), BUNSPEC);
								}
							}
						else
							{	/* Trace/walk.scm 48 */
								BFALSE;
							}
					}
				}
			}
			{
				obj_t BgL_l1300z00_1563;

				BgL_l1300z00_1563 = BgL_globalsz00_17;
			BgL_zc3z04anonymousza31491ze3z87_1564:
				if (PAIRP(BgL_l1300z00_1563))
					{	/* Trace/walk.scm 52 */
						{	/* Trace/walk.scm 52 */
							obj_t BgL_vz00_1566;

							BgL_vz00_1566 = CAR(BgL_l1300z00_1563);
							BGl_tracezd2funz12zc0zztrace_walkz00(BgL_vz00_1566, BNIL,
								BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00);
						}
						{
							obj_t BgL_l1300z00_3064;

							BgL_l1300z00_3064 = CDR(BgL_l1300z00_1563);
							BgL_l1300z00_1563 = BgL_l1300z00_3064;
							goto BgL_zc3z04anonymousza31491ze3z87_1564;
						}
					}
				else
					{	/* Trace/walk.scm 52 */
						((bool_t) 1);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Trace/walk.scm 53 */
					{	/* Trace/walk.scm 53 */
						obj_t BgL_port1302z00_1571;

						{	/* Trace/walk.scm 53 */
							obj_t BgL_res2079z00_2381;

							{	/* Trace/walk.scm 53 */
								obj_t BgL_tmpz00_3069;

								BgL_tmpz00_3069 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2079z00_2381 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_3069);
							}
							BgL_port1302z00_1571 = BgL_res2079z00_2381;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port1302z00_1571);
						bgl_display_string(BGl_string2164z00zztrace_walkz00,
							BgL_port1302z00_1571);
						{	/* Trace/walk.scm 53 */
							obj_t BgL_arg1495z00_1572;

							{	/* Trace/walk.scm 53 */
								bool_t BgL_test2287z00_3074;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Trace/walk.scm 53 */
										if (INTEGERP
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Trace/walk.scm 53 */
												BgL_test2287z00_3074 =
													(
													(long)
													CINT
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
													> ((long) 1));
											}
										else
											{	/* Trace/walk.scm 53 */
												BgL_test2287z00_3074 =
													BGl_2ze3ze3zz__r4_numbers_6_5z00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BINT(((long) 1)));
									}}
								else
									{	/* Trace/walk.scm 53 */
										BgL_test2287z00_3074 = ((bool_t) 0);
									}
								if (BgL_test2287z00_3074)
									{	/* Trace/walk.scm 53 */
										BgL_arg1495z00_1572 = BGl_string2165z00zztrace_walkz00;
									}
								else
									{	/* Trace/walk.scm 53 */
										BgL_arg1495z00_1572 = BGl_string2166z00zztrace_walkz00;
									}
							}
							bgl_display_obj(BgL_arg1495z00_1572, BgL_port1302z00_1571);
						}
						bgl_display_string(BGl_string2167z00zztrace_walkz00,
							BgL_port1302z00_1571);
						bgl_display_char(((unsigned char) 10), BgL_port1302z00_1571);
					}
					{	/* Trace/walk.scm 53 */
						obj_t BgL_list1499z00_1578;

						BgL_list1499z00_1578 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1499z00_1578);
					}
				}
			else
				{	/* Trace/walk.scm 53 */
					obj_t BgL_g1109z00_1579;

					BgL_g1109z00_1579 = BNIL;
					{
						obj_t BgL_hooksz00_1582;
						obj_t BgL_hnamesz00_1583;

						BgL_hooksz00_1582 = BgL_g1109z00_1579;
						BgL_hnamesz00_1583 = BNIL;
					BgL_zc3z04anonymousza31500ze3z87_1584:
						if (NULLP(BgL_hooksz00_1582))
							{	/* Trace/walk.scm 53 */
								return BgL_globalsz00_17;
							}
						else
							{	/* Trace/walk.scm 53 */
								bool_t BgL_test2291z00_3091;

								{	/* Trace/walk.scm 53 */
									obj_t BgL_fun1530z00_1591;

									BgL_fun1530z00_1591 = CAR(((obj_t) BgL_hooksz00_1582));
									BgL_test2291z00_3091 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun1530z00_1591)
										(BgL_fun1530z00_1591, BEOA));
								}
								if (BgL_test2291z00_3091)
									{	/* Trace/walk.scm 53 */
										obj_t BgL_arg1518z00_1588;
										obj_t BgL_arg1521z00_1589;

										BgL_arg1518z00_1588 = CDR(((obj_t) BgL_hooksz00_1582));
										BgL_arg1521z00_1589 = CDR(((obj_t) BgL_hnamesz00_1583));
										{
											obj_t BgL_hnamesz00_3103;
											obj_t BgL_hooksz00_3102;

											BgL_hooksz00_3102 = BgL_arg1518z00_1588;
											BgL_hnamesz00_3103 = BgL_arg1521z00_1589;
											BgL_hnamesz00_1583 = BgL_hnamesz00_3103;
											BgL_hooksz00_1582 = BgL_hooksz00_3102;
											goto BgL_zc3z04anonymousza31500ze3z87_1584;
										}
									}
								else
									{	/* Trace/walk.scm 53 */
										obj_t BgL_arg1528z00_1590;

										BgL_arg1528z00_1590 = CAR(((obj_t) BgL_hnamesz00_1583));
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string2168z00zztrace_walkz00, BgL_arg1528z00_1590);
									}
							}
					}
				}
		}

	}



/* &trace-walk! */
	obj_t BGl_z62tracezd2walkz12za2zztrace_walkz00(obj_t BgL_envz00_2695,
		obj_t BgL_globalsz00_2696)
	{
		{	/* Trace/walk.scm 39 */
			return BGl_tracezd2walkz12zc0zztrace_walkz00(BgL_globalsz00_2696);
		}

	}



/* trace-id */
	obj_t BGl_tracezd2idzd2zztrace_walkz00(obj_t BgL_vz00_18)
	{
		{	/* Trace/walk.scm 64 */
			{	/* Trace/walk.scm 66 */
				bool_t BgL_test2292z00_3108;

				if (BGl_isazf3zf3zz__objectz00(BgL_vz00_18, BGl_globalz00zzast_varz00))
					{	/* Trace/walk.scm 66 */
						BgL_test2292z00_3108 =
							(
							(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_globalz00_bglt) BgL_vz00_18))))->BgL_idz00) ==
							CNST_TABLE_REF(((long) 1)));
					}
				else
					{	/* Trace/walk.scm 66 */
						BgL_test2292z00_3108 = ((bool_t) 0);
					}
				if (BgL_test2292z00_3108)
					{	/* Trace/walk.scm 67 */
						obj_t BgL_arg1540z00_1597;

						{	/* Trace/walk.scm 67 */
							obj_t BgL_arg1552z00_1598;
							obj_t BgL_arg1558z00_1599;

							{	/* Trace/walk.scm 67 */
								obj_t BgL_arg1561z00_1600;

								BgL_arg1561z00_1600 =
									bstring_to_symbol(BGl_string2169z00zztrace_walkz00);
								{	/* Trace/walk.scm 67 */
									obj_t BgL_res2086z00_2403;

									{	/* Trace/walk.scm 67 */
										obj_t BgL_arg1466z00_2402;

										BgL_arg1466z00_2402 = SYMBOL_TO_STRING(BgL_arg1561z00_1600);
										BgL_res2086z00_2403 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_2402);
									}
									BgL_arg1552z00_1598 = BgL_res2086z00_2403;
								}
							}
							{	/* Trace/walk.scm 67 */
								obj_t BgL_arg1564z00_1601;

								BgL_arg1564z00_1601 =
									(((BgL_globalz00_bglt) COBJECT(
											((BgL_globalz00_bglt) BgL_vz00_18)))->BgL_modulez00);
								{	/* Trace/walk.scm 67 */
									obj_t BgL_res2087z00_2407;

									{	/* Trace/walk.scm 67 */
										obj_t BgL_arg1466z00_2406;

										BgL_arg1466z00_2406 = SYMBOL_TO_STRING(BgL_arg1564z00_1601);
										BgL_res2087z00_2407 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_2406);
									}
									BgL_arg1558z00_1599 = BgL_res2087z00_2407;
								}
							}
							BgL_arg1540z00_1597 =
								string_append(BgL_arg1552z00_1598, BgL_arg1558z00_1599);
						}
						return bstring_to_symbol(BgL_arg1540z00_1597);
					}
				else
					{	/* Trace/walk.scm 68 */
						bool_t BgL_test2294z00_3125;

						if (BGl_isazf3zf3zz__objectz00(BgL_vz00_18,
								BGl_globalz00zzast_varz00))
							{	/* Trace/walk.scm 68 */
								BgL_test2294z00_3125 =
									(
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_vz00_18))))->BgL_idz00) ==
									CNST_TABLE_REF(((long) 2)));
							}
						else
							{	/* Trace/walk.scm 68 */
								BgL_test2294z00_3125 = ((bool_t) 0);
							}
						if (BgL_test2294z00_3125)
							{	/* Trace/walk.scm 69 */
								obj_t BgL_arg1575z00_1605;

								{	/* Trace/walk.scm 69 */
									obj_t BgL_arg1578z00_1606;
									obj_t BgL_arg1582z00_1607;

									{	/* Trace/walk.scm 69 */
										obj_t BgL_arg1584z00_1608;

										BgL_arg1584z00_1608 =
											bstring_to_symbol(BGl_string2170z00zztrace_walkz00);
										{	/* Trace/walk.scm 69 */
											obj_t BgL_res2091z00_2416;

											{	/* Trace/walk.scm 69 */
												obj_t BgL_arg1466z00_2415;

												BgL_arg1466z00_2415 =
													SYMBOL_TO_STRING(BgL_arg1584z00_1608);
												BgL_res2091z00_2416 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_2415);
											}
											BgL_arg1578z00_1606 = BgL_res2091z00_2416;
										}
									}
									{	/* Trace/walk.scm 69 */
										obj_t BgL_arg1588z00_1609;

										BgL_arg1588z00_1609 =
											(((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt) BgL_vz00_18)))->BgL_modulez00);
										{	/* Trace/walk.scm 69 */
											obj_t BgL_res2092z00_2420;

											{	/* Trace/walk.scm 69 */
												obj_t BgL_arg1466z00_2419;

												BgL_arg1466z00_2419 =
													SYMBOL_TO_STRING(BgL_arg1588z00_1609);
												BgL_res2092z00_2420 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_2419);
											}
											BgL_arg1582z00_1607 = BgL_res2092z00_2420;
										}
									}
									BgL_arg1575z00_1605 =
										string_append(BgL_arg1578z00_1606, BgL_arg1582z00_1607);
								}
								return bstring_to_symbol(BgL_arg1575z00_1605);
							}
						else
							{	/* Trace/walk.scm 68 */
								if (BGl_isazf3zf3zz__objectz00(BgL_vz00_18,
										BGl_globalz00zzast_varz00))
									{	/* Trace/walk.scm 71 */
										obj_t BgL_arg1592z00_1611;
										obj_t BgL_arg1593z00_1612;

										BgL_arg1592z00_1611 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_globalz00_bglt) BgL_vz00_18))))->BgL_idz00);
										BgL_arg1593z00_1612 =
											(((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt) BgL_vz00_18)))->BgL_modulez00);
										{	/* Trace/walk.scm 71 */
											obj_t BgL_list1594z00_1613;

											{	/* Trace/walk.scm 71 */
												obj_t BgL_arg1597z00_1614;

												{	/* Trace/walk.scm 71 */
													obj_t BgL_arg1599z00_1615;

													BgL_arg1599z00_1615 =
														MAKE_YOUNG_PAIR(BgL_arg1593z00_1612, BNIL);
													BgL_arg1597z00_1614 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
														BgL_arg1599z00_1615);
												}
												BgL_list1594z00_1613 =
													MAKE_YOUNG_PAIR(BgL_arg1592z00_1611,
													BgL_arg1597z00_1614);
											}
											return
												BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
												(BgL_list1594z00_1613);
										}
									}
								else
									{	/* Trace/walk.scm 70 */
										return
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_vz00_18)))->BgL_idz00);
									}
							}
					}
			}
		}

	}



/* trace-fun! */
	obj_t BGl_tracezd2funz12zc0zztrace_walkz00(obj_t BgL_varz00_19,
		obj_t BgL_stackz00_20, obj_t BgL_levelz00_21)
	{
		{	/* Trace/walk.scm 81 */
			{	/* Trace/walk.scm 82 */
				BgL_valuez00_bglt BgL_funz00_1620;

				BgL_funz00_1620 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_19)))->BgL_valuez00);
				{	/* Trace/walk.scm 82 */
					obj_t BgL_bodyz00_1621;

					BgL_bodyz00_1621 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_1620)))->BgL_bodyz00);
					{	/* Trace/walk.scm 83 */
						obj_t BgL_llocz00_1622;

						if (BGl_isazf3zf3zz__objectz00(BgL_varz00_19,
								BGl_globalz00zzast_varz00))
							{	/* Trace/walk.scm 85 */
								obj_t BgL_arg1695z00_1669;

								BgL_arg1695z00_1669 =
									BGl_findzd2lastzd2sexpz00zztrace_walkz00(
									(((BgL_globalz00_bglt) COBJECT(
												((BgL_globalz00_bglt) BgL_varz00_19)))->BgL_srcz00));
								BgL_llocz00_1622 =
									BGl_findzd2locationzd2zztools_locationz00
									(BgL_arg1695z00_1669);
							}
						else
							{	/* Trace/walk.scm 86 */
								obj_t BgL_arg1697z00_1671;

								BgL_arg1697z00_1671 =
									BGl_findzd2lastzd2nodez00zztrace_walkz00(
									((BgL_nodez00_bglt) BgL_bodyz00_1621));
								BgL_llocz00_1622 =
									(((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_arg1697z00_1671)))->BgL_locz00);
							}
						{	/* Trace/walk.scm 84 */

							{	/* Trace/walk.scm 87 */
								bool_t BgL_test2298z00_3170;

								if (CBOOL(
										(((BgL_funz00_bglt) COBJECT(
													((BgL_funz00_bglt) BgL_funz00_1620)))->
											BgL_predicatezd2ofzd2)))
									{	/* Trace/walk.scm 87 */
										BgL_test2298z00_3170 = ((bool_t) 0);
									}
								else
									{	/* Trace/walk.scm 87 */
										if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(CNST_TABLE_REF(((long) 4)),
													(((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
																	BgL_funz00_1620)))->BgL_propertyz00))))
											{	/* Trace/walk.scm 88 */
												BgL_test2298z00_3170 = ((bool_t) 0);
											}
										else
											{	/* Trace/walk.scm 89 */
												obj_t BgL_arg1688z00_1666;

												BgL_arg1688z00_1666 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_varz00_19)))->
													BgL_idz00);
												BgL_test2298z00_3170 =
													BGl_userzd2symbolzf3z21zzast_identz00
													(BgL_arg1688z00_1666);
											}
									}
								if (BgL_test2298z00_3170)
									{	/* Trace/walk.scm 87 */
										BGl_enterzd2functionzd2zztools_errorz00
											(BGl_tracezd2idzd2zztrace_walkz00(BgL_varz00_19));
										{	/* Trace/walk.scm 91 */
											obj_t BgL_bdz00_1630;

											{	/* Trace/walk.scm 91 */
												bool_t BgL_test2301z00_3186;

												if (((long) CINT(BgL_levelz00_21) > ((long) 1)))
													{	/* Trace/walk.scm 91 */
														BgL_test2301z00_3186 = ((bool_t) 1);
													}
												else
													{	/* Trace/walk.scm 91 */
														if (BGl_isazf3zf3zz__objectz00(BgL_varz00_19,
																BGl_globalz00zzast_varz00))
															{	/* Trace/walk.scm 93 */
																bool_t BgL__ortest_1112z00_1659;

																BgL__ortest_1112z00_1659 =
																	(
																	(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_globalz00_bglt)
																						BgL_varz00_19))))->BgL_idz00) ==
																	CNST_TABLE_REF(((long) 1)));
																if (BgL__ortest_1112z00_1659)
																	{	/* Trace/walk.scm 93 */
																		BgL_test2301z00_3186 =
																			BgL__ortest_1112z00_1659;
																	}
																else
																	{	/* Trace/walk.scm 94 */
																		bool_t BgL__ortest_1113z00_1660;

																		BgL__ortest_1113z00_1660 =
																			(
																			(((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							((BgL_globalz00_bglt)
																								BgL_varz00_19))))->BgL_idz00) ==
																			CNST_TABLE_REF(((long) 5)));
																		if (BgL__ortest_1113z00_1660)
																			{	/* Trace/walk.scm 94 */
																				BgL_test2301z00_3186 =
																					BgL__ortest_1113z00_1660;
																			}
																		else
																			{	/* Trace/walk.scm 94 */
																				BgL_test2301z00_3186 =
																					(
																					(((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									((BgL_globalz00_bglt)
																										BgL_varz00_19))))->
																						BgL_idz00) ==
																					CNST_TABLE_REF(((long) 6)));
															}}}
														else
															{	/* Trace/walk.scm 92 */
																BgL_test2301z00_3186 = ((bool_t) 0);
															}
													}
												if (BgL_test2301z00_3186)
													{	/* Trace/walk.scm 103 */
														bool_t BgL_test2306z00_3209;

														if (BGl_isazf3zf3zz__objectz00(BgL_varz00_19,
																BGl_localz00zzast_varz00))
															{	/* Trace/walk.scm 103 */
																BgL_test2306z00_3209 = ((bool_t) 1);
															}
														else
															{	/* Trace/walk.scm 103 */
																if (
																	((((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_globalz00_bglt)
																							BgL_varz00_19))))->BgL_idz00) ==
																		CNST_TABLE_REF(((long) 5))))
																	{	/* Trace/walk.scm 104 */
																		BgL_test2306z00_3209 = ((bool_t) 1);
																	}
																else
																	{	/* Trace/walk.scm 104 */
																		BgL_test2306z00_3209 =
																			(
																			(((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							((BgL_globalz00_bglt)
																								BgL_varz00_19))))->BgL_idz00) ==
																			CNST_TABLE_REF(((long) 6)));
															}}
														if (BgL_test2306z00_3209)
															{	/* Trace/walk.scm 106 */
																long BgL_arg1664z00_1650;

																BgL_arg1664z00_1650 =
																	((long) CINT(BgL_levelz00_21) - ((long) 1));
																BgL_bdz00_1630 =
																	((obj_t)
																	BGl_tracezd2nodezd2zztrace_walkz00(
																		((BgL_nodez00_bglt) BgL_bodyz00_1621),
																		BgL_stackz00_20,
																		BINT(BgL_arg1664z00_1650)));
															}
														else
															{	/* Trace/walk.scm 107 */
																obj_t BgL_arg1667z00_1651;
																long BgL_arg1669z00_1652;

																BgL_arg1667z00_1651 =
																	MAKE_YOUNG_PAIR(BgL_varz00_19,
																	BgL_stackz00_20);
																BgL_arg1669z00_1652 =
																	((long) CINT(BgL_levelz00_21) - ((long) 1));
																BgL_bdz00_1630 =
																	((obj_t)
																	BGl_tracezd2nodezd2zztrace_walkz00((
																			(BgL_nodez00_bglt) BgL_bodyz00_1621),
																		BgL_arg1667z00_1651,
																		BINT(BgL_arg1669z00_1652)));
													}}
												else
													{	/* Trace/walk.scm 91 */
														BgL_bdz00_1630 = BgL_bodyz00_1621;
													}
											}
											{	/* Trace/walk.scm 91 */
												BgL_typez00_bglt BgL_tz00_1631;

												{	/* Trace/walk.scm 109 */
													BgL_typez00_bglt BgL_arg1627z00_1634;
													BgL_typez00_bglt BgL_arg1631z00_1635;

													BgL_arg1627z00_1634 =
														(((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_bodyz00_1621)))->
														BgL_typez00);
													BgL_arg1631z00_1635 =
														(((BgL_variablez00_bglt)
															COBJECT(((BgL_variablez00_bglt) BgL_varz00_19)))->
														BgL_typez00);
													BgL_tz00_1631 =
														BGl_strictzd2nodezd2typez00zzast_nodez00
														(BgL_arg1627z00_1634, BgL_arg1631z00_1635);
												}
												{	/* Trace/walk.scm 109 */
													obj_t BgL_idz00_1632;

													BgL_idz00_1632 =
														BGl_tracezd2idzd2zztrace_walkz00(BgL_varz00_19);
													{	/* Trace/walk.scm 110 */
														BgL_letzd2varzd2_bglt BgL_nbodyz00_1633;

														BgL_nbodyz00_1633 =
															BGl_makezd2tracedzd2nodez00zztrace_walkz00(
															((BgL_nodez00_bglt) BgL_bdz00_1630),
															BgL_tz00_1631, BgL_idz00_1632, BgL_llocz00_1622,
															BgL_stackz00_20);
														{	/* Trace/walk.scm 111 */

															((((BgL_sfunz00_bglt) COBJECT(
																			((BgL_sfunz00_bglt) BgL_funz00_1620)))->
																	BgL_bodyz00) =
																((obj_t) ((obj_t) BgL_nbodyz00_1633)), BUNSPEC);
															return BGl_leavezd2functionzd2zztools_errorz00();
														}
													}
												}
											}
										}
									}
								else
									{	/* Trace/walk.scm 87 */
										return BFALSE;
									}
							}
						}
					}
				}
			}
		}

	}



/* find-last-sexp */
	obj_t BGl_findzd2lastzd2sexpz00zztrace_walkz00(obj_t BgL_sexpz00_22)
	{
		{	/* Trace/walk.scm 122 */
			{
				obj_t BgL_sexpz00_1673;
				obj_t BgL_resz00_1674;

				BgL_sexpz00_1673 = BgL_sexpz00_22;
				BgL_resz00_1674 = BgL_sexpz00_22;
			BgL_zc3z04anonymousza31698ze3z87_1675:
				if (PAIRP(BgL_sexpz00_1673))
					{	/* Trace/walk.scm 128 */
						bool_t BgL_test2310z00_3250;

						{	/* Trace/walk.scm 128 */
							obj_t BgL_tmpz00_3251;

							BgL_tmpz00_3251 = CDR(BgL_sexpz00_1673);
							BgL_test2310z00_3250 = PAIRP(BgL_tmpz00_3251);
						}
						if (BgL_test2310z00_3250)
							{
								obj_t BgL_resz00_3256;
								obj_t BgL_sexpz00_3254;

								BgL_sexpz00_3254 =
									BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
									(BgL_sexpz00_1673);
								BgL_resz00_3256 = BgL_sexpz00_1673;
								BgL_resz00_1674 = BgL_resz00_3256;
								BgL_sexpz00_1673 = BgL_sexpz00_3254;
								goto BgL_zc3z04anonymousza31698ze3z87_1675;
							}
						else
							{
								obj_t BgL_resz00_3259;
								obj_t BgL_sexpz00_3257;

								BgL_sexpz00_3257 = CAR(BgL_sexpz00_1673);
								BgL_resz00_3259 = BgL_sexpz00_1673;
								BgL_resz00_1674 = BgL_resz00_3259;
								BgL_sexpz00_1673 = BgL_sexpz00_3257;
								goto BgL_zc3z04anonymousza31698ze3z87_1675;
							}
					}
				else
					{	/* Trace/walk.scm 126 */
						return BgL_resz00_1674;
					}
			}
		}

	}



/* make-traced-node */
	BgL_letzd2varzd2_bglt
		BGl_makezd2tracedzd2nodez00zztrace_walkz00(BgL_nodez00_bglt BgL_nodez00_38,
		BgL_typez00_bglt BgL_typez00_39, obj_t BgL_symbolz00_40,
		obj_t BgL_llocz00_41, obj_t BgL_stackz00_42)
	{
		{	/* Trace/walk.scm 245 */
			{	/* Trace/walk.scm 252 */
				obj_t BgL_locz00_1684;

				BgL_locz00_1684 =
					(((BgL_nodez00_bglt) COBJECT(BgL_nodez00_38))->BgL_locz00);
				{	/* Trace/walk.scm 252 */
					obj_t BgL_auxz00_1685;

					BgL_auxz00_1685 =
						BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
						(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 7))));
					{	/* Trace/walk.scm 253 */
						obj_t BgL_tauxz00_1686;

						BgL_tauxz00_1686 =
							BGl_makezd2typedzd2identz00zzast_identz00(BgL_auxz00_1685,
							(((BgL_typez00_bglt) COBJECT(BgL_typez00_39))->BgL_idz00));
						{	/* Trace/walk.scm 254 */
							obj_t BgL_tmp1z00_1687;

							BgL_tmp1z00_1687 =
								BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
								(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											8))));
							{	/* Trace/walk.scm 255 */
								obj_t BgL_tmp2z00_1688;

								BgL_tmp2z00_1688 =
									BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
									(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
												9))));
								{	/* Trace/walk.scm 256 */
									obj_t BgL_tmp3z00_1689;

									BgL_tmp3z00_1689 =
										BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
										(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													10))));
									{	/* Trace/walk.scm 257 */
										obj_t BgL_symz00_1690;

										{	/* Trace/walk.scm 258 */
											bool_t BgL_test2311z00_3275;

											if (PAIRP(BgL_stackz00_42))
												{	/* Trace/walk.scm 258 */
													obj_t BgL_arg1824z00_1741;

													BgL_arg1824z00_1741 = CAR(BgL_stackz00_42);
													BgL_test2311z00_3275 =
														BGl_isazf3zf3zz__objectz00(BgL_arg1824z00_1741,
														BGl_variablez00zzast_varz00);
												}
											else
												{	/* Trace/walk.scm 258 */
													BgL_test2311z00_3275 = ((bool_t) 0);
												}
											if (BgL_test2311z00_3275)
												{	/* Trace/walk.scm 258 */
													BgL_symz00_1690 =
														BGl_fqnameze70ze7zztrace_walkz00(BgL_symbolz00_40,
														BgL_stackz00_42);
												}
											else
												{	/* Trace/walk.scm 258 */
													BgL_symz00_1690 = BgL_symbolz00_40;
												}
										}
										{	/* Trace/walk.scm 258 */
											obj_t BgL_lz00_1691;

											{	/* Trace/walk.scm 262 */
												bool_t BgL_test2313z00_3281;

												if (STRUCTP(BgL_locz00_1684))
													{	/* Trace/walk.scm 262 */
														BgL_test2313z00_3281 =
															(STRUCT_KEY(BgL_locz00_1684) ==
															CNST_TABLE_REF(((long) 11)));
													}
												else
													{	/* Trace/walk.scm 262 */
														BgL_test2313z00_3281 = ((bool_t) 0);
													}
												if (BgL_test2313z00_3281)
													{	/* Trace/walk.scm 263 */
														obj_t BgL_arg1801z00_1733;

														{	/* Trace/walk.scm 263 */
															obj_t BgL_arg1808z00_1734;
															obj_t BgL_arg1809z00_1735;

															BgL_arg1808z00_1734 =
																BGl_locationzd2fullzd2fnamez00zztools_locationz00
																(BgL_locz00_1684);
															BgL_arg1809z00_1735 =
																MAKE_YOUNG_PAIR(STRUCT_REF(BgL_locz00_1684,
																	(int) (((long) 1))), BNIL);
															BgL_arg1801z00_1733 =
																MAKE_YOUNG_PAIR(BgL_arg1808z00_1734,
																BgL_arg1809z00_1735);
														}
														BgL_lz00_1691 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
															BgL_arg1801z00_1733);
													}
												else
													{	/* Trace/walk.scm 262 */
														BgL_lz00_1691 = BFALSE;
													}
											}
											{	/* Trace/walk.scm 262 */
												obj_t BgL_expz00_1692;

												{	/* Trace/walk.scm 264 */
													obj_t BgL_arg1725z00_1696;

													{	/* Trace/walk.scm 264 */
														obj_t BgL_arg1726z00_1697;
														obj_t BgL_arg1727z00_1698;

														{	/* Trace/walk.scm 264 */
															obj_t BgL_arg1728z00_1699;
															obj_t BgL_arg1729z00_1700;

															{	/* Trace/walk.scm 264 */
																obj_t BgL_arg1731z00_1701;

																{	/* Trace/walk.scm 264 */
																	obj_t BgL_arg1732z00_1702;

																	{	/* Trace/walk.scm 264 */
																		obj_t BgL_arg1733z00_1703;

																		BgL_arg1733z00_1703 =
																			MAKE_YOUNG_PAIR(BgL_symz00_1690, BNIL);
																		BgL_arg1732z00_1702 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					13)), BgL_arg1733z00_1703);
																	}
																	BgL_arg1731z00_1701 =
																		MAKE_YOUNG_PAIR(BgL_arg1732z00_1702, BNIL);
																}
																BgL_arg1728z00_1699 =
																	MAKE_YOUNG_PAIR(BgL_tmp1z00_1687,
																	BgL_arg1731z00_1701);
															}
															{	/* Trace/walk.scm 265 */
																obj_t BgL_arg1738z00_1704;
																obj_t BgL_arg1739z00_1705;

																{	/* Trace/walk.scm 265 */
																	obj_t BgL_arg1740z00_1706;

																	{	/* Trace/walk.scm 265 */
																		obj_t BgL_arg1741z00_1707;

																		{	/* Trace/walk.scm 265 */
																			obj_t BgL_arg1742z00_1708;

																			BgL_arg1742z00_1708 =
																				MAKE_YOUNG_PAIR(BgL_lz00_1691, BNIL);
																			BgL_arg1741z00_1707 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						13)), BgL_arg1742z00_1708);
																		}
																		BgL_arg1740z00_1706 =
																			MAKE_YOUNG_PAIR(BgL_arg1741z00_1707,
																			BNIL);
																	}
																	BgL_arg1738z00_1704 =
																		MAKE_YOUNG_PAIR(BgL_tmp2z00_1688,
																		BgL_arg1740z00_1706);
																}
																{	/* Trace/walk.scm 266 */
																	obj_t BgL_arg1743z00_1709;

																	{	/* Trace/walk.scm 266 */
																		obj_t BgL_arg1744z00_1710;
																		obj_t BgL_arg1745z00_1711;

																		BgL_arg1744z00_1710 =
																			BGl_makezd2typedzd2identz00zzast_identz00
																			(BgL_tmp3z00_1689,
																			CNST_TABLE_REF(((long) 14)));
																		{	/* Trace/walk.scm 266 */
																			obj_t BgL_arg1746z00_1712;

																			BgL_arg1746z00_1712 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						15)), BNIL);
																			BgL_arg1745z00_1711 =
																				MAKE_YOUNG_PAIR(BgL_arg1746z00_1712,
																				BNIL);
																		}
																		BgL_arg1743z00_1709 =
																			MAKE_YOUNG_PAIR(BgL_arg1744z00_1710,
																			BgL_arg1745z00_1711);
																	}
																	BgL_arg1739z00_1705 =
																		MAKE_YOUNG_PAIR(BgL_arg1743z00_1709, BNIL);
																}
																BgL_arg1729z00_1700 =
																	MAKE_YOUNG_PAIR(BgL_arg1738z00_1704,
																	BgL_arg1739z00_1705);
															}
															BgL_arg1726z00_1697 =
																MAKE_YOUNG_PAIR(BgL_arg1728z00_1699,
																BgL_arg1729z00_1700);
														}
														{	/* Trace/walk.scm 268 */
															obj_t BgL_arg1747z00_1713;

															{	/* Trace/walk.scm 268 */
																obj_t BgL_arg1754z00_1714;

																{	/* Trace/walk.scm 268 */
																	obj_t BgL_arg1755z00_1715;

																	{	/* Trace/walk.scm 268 */
																		obj_t BgL_arg1756z00_1716;
																		obj_t BgL_arg1757z00_1717;

																		{	/* Trace/walk.scm 268 */
																			obj_t BgL_arg1759z00_1718;

																			{	/* Trace/walk.scm 268 */
																				obj_t BgL_arg1760z00_1719;

																				{	/* Trace/walk.scm 268 */
																					obj_t BgL_arg1761z00_1720;

																					BgL_arg1761z00_1720 =
																						MAKE_YOUNG_PAIR(BgL_tmp2z00_1688,
																						BNIL);
																					BgL_arg1760z00_1719 =
																						MAKE_YOUNG_PAIR(BgL_tmp1z00_1687,
																						BgL_arg1761z00_1720);
																				}
																				BgL_arg1759z00_1718 =
																					MAKE_YOUNG_PAIR(BgL_tmp3z00_1689,
																					BgL_arg1760z00_1719);
																			}
																			BgL_arg1756z00_1716 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						16)), BgL_arg1759z00_1718);
																		}
																		{	/* Trace/walk.scm 269 */
																			obj_t BgL_arg1768z00_1721;

																			{	/* Trace/walk.scm 269 */
																				obj_t BgL_arg1771z00_1722;

																				{	/* Trace/walk.scm 269 */
																					obj_t BgL_arg1775z00_1723;
																					obj_t BgL_arg1778z00_1724;

																					{	/* Trace/walk.scm 269 */
																						obj_t BgL_arg1779z00_1725;

																						{	/* Trace/walk.scm 269 */
																							obj_t BgL_arg1782z00_1726;

																							BgL_arg1782z00_1726 =
																								MAKE_YOUNG_PAIR(
																								((obj_t) BgL_nodez00_38), BNIL);
																							BgL_arg1779z00_1725 =
																								MAKE_YOUNG_PAIR
																								(BgL_tauxz00_1686,
																								BgL_arg1782z00_1726);
																						}
																						BgL_arg1775z00_1723 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1779z00_1725, BNIL);
																					}
																					{	/* Trace/walk.scm 270 */
																						obj_t BgL_arg1784z00_1727;
																						obj_t BgL_arg1790z00_1728;

																						{	/* Trace/walk.scm 270 */
																							bool_t BgL_test2315z00_3322;

																							if (STRUCTP(BgL_llocz00_41))
																								{	/* Trace/walk.scm 270 */
																									BgL_test2315z00_3322 =
																										(STRUCT_KEY(BgL_llocz00_41)
																										==
																										CNST_TABLE_REF(((long)
																												11)));
																								}
																							else
																								{	/* Trace/walk.scm 270 */
																									BgL_test2315z00_3322 =
																										((bool_t) 0);
																								}
																							if (BgL_test2315z00_3322)
																								{	/* Trace/walk.scm 272 */
																									obj_t BgL_arg1796z00_1730;

																									{	/* Trace/walk.scm 272 */
																										obj_t BgL_res2110z00_2474;

																										BgL_res2110z00_2474 =
																											MAKE_YOUNG_EPAIR
																											(BgL_tmp3z00_1689, BNIL,
																											BgL_llocz00_41);
																										BgL_arg1796z00_1730 =
																											BgL_res2110z00_2474;
																									}
																									{	/* Trace/walk.scm 271 */
																										obj_t BgL_res2111z00_2476;

																										{	/* Trace/walk.scm 271 */
																											obj_t BgL_obj1z00_2475;

																											BgL_obj1z00_2475 =
																												CNST_TABLE_REF(((long)
																													17));
																											BgL_res2111z00_2476 =
																												MAKE_YOUNG_EPAIR
																												(BgL_obj1z00_2475,
																												BgL_arg1796z00_1730,
																												BgL_llocz00_41);
																										}
																										BgL_arg1784z00_1727 =
																											BgL_res2111z00_2476;
																								}}
																							else
																								{	/* Trace/walk.scm 274 */
																									obj_t BgL_arg1798z00_1731;

																									BgL_arg1798z00_1731 =
																										MAKE_YOUNG_PAIR
																										(BgL_tmp3z00_1689, BNIL);
																									BgL_arg1784z00_1727 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												17)),
																										BgL_arg1798z00_1731);
																						}}
																						BgL_arg1790z00_1728 =
																							MAKE_YOUNG_PAIR(BgL_auxz00_1685,
																							BNIL);
																						BgL_arg1778z00_1724 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1784z00_1727,
																							BgL_arg1790z00_1728);
																					}
																					BgL_arg1771z00_1722 =
																						MAKE_YOUNG_PAIR(BgL_arg1775z00_1723,
																						BgL_arg1778z00_1724);
																				}
																				BgL_arg1768z00_1721 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							18)), BgL_arg1771z00_1722);
																			}
																			BgL_arg1757z00_1717 =
																				MAKE_YOUNG_PAIR(BgL_arg1768z00_1721,
																				BNIL);
																		}
																		BgL_arg1755z00_1715 =
																			MAKE_YOUNG_PAIR(BgL_arg1756z00_1716,
																			BgL_arg1757z00_1717);
																	}
																	BgL_arg1754z00_1714 =
																		MAKE_YOUNG_PAIR(BNIL, BgL_arg1755z00_1715);
																}
																BgL_arg1747z00_1713 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
																	BgL_arg1754z00_1714);
															}
															BgL_arg1727z00_1698 =
																MAKE_YOUNG_PAIR(BgL_arg1747z00_1713, BNIL);
														}
														BgL_arg1725z00_1696 =
															MAKE_YOUNG_PAIR(BgL_arg1726z00_1697,
															BgL_arg1727z00_1698);
													}
													BgL_expz00_1692 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
														BgL_arg1725z00_1696);
												}
												{	/* Trace/walk.scm 264 */
													BgL_nodez00_bglt BgL_nnodez00_1693;

													BgL_nnodez00_1693 =
														BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_expz00_1692,
														BNIL, BgL_locz00_1684, CNST_TABLE_REF(((long) 19)));
													{	/* Trace/walk.scm 276 */

														{	/* Trace/walk.scm 277 */
															bool_t BgL_arg1712z00_1694;

															{	/* Trace/walk.scm 277 */
																obj_t BgL_arg1719z00_1695;

																BgL_arg1719z00_1695 =
																	BGl_thezd2backendzd2zzbackend_backendz00();
																BgL_arg1712z00_1694 =
																	(((BgL_backendz00_bglt) COBJECT(
																			((BgL_backendz00_bglt)
																				BgL_arg1719z00_1695)))->
																	BgL_removezd2emptyzd2letz00);
															}
															((((BgL_letzd2varzd2_bglt) COBJECT(
																			((BgL_letzd2varzd2_bglt)
																				BgL_nnodez00_1693)))->
																	BgL_removablezf3zf3) =
																((bool_t) BgL_arg1712z00_1694), BUNSPEC);
														}
														return ((BgL_letzd2varzd2_bglt) BgL_nnodez00_1693);
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



/* fqname~0 */
	obj_t BGl_fqnameze70ze7zztrace_walkz00(obj_t BgL_symz00_1747,
		obj_t BgL_stackz00_1748)
	{
		{	/* Trace/walk.scm 250 */
			if (NULLP(BgL_stackz00_1748))
				{	/* Trace/walk.scm 248 */
					return BgL_symz00_1747;
				}
			else
				{	/* Trace/walk.scm 250 */
					obj_t BgL_arg1832z00_1751;

					{	/* Trace/walk.scm 250 */
						obj_t BgL_arg1838z00_1755;
						obj_t BgL_arg1840z00_1756;

						{	/* Trace/walk.scm 250 */
							obj_t BgL_arg1841z00_1757;

							BgL_arg1841z00_1757 = CAR(((obj_t) BgL_stackz00_1748));
							BgL_arg1838z00_1755 =
								BGl_tracezd2idzd2zztrace_walkz00(BgL_arg1841z00_1757);
						}
						BgL_arg1840z00_1756 = CDR(((obj_t) BgL_stackz00_1748));
						BgL_arg1832z00_1751 =
							BGl_fqnameze70ze7zztrace_walkz00(BgL_arg1838z00_1755,
							BgL_arg1840z00_1756);
					}
					{	/* Trace/walk.scm 250 */
						obj_t BgL_list1833z00_1752;

						{	/* Trace/walk.scm 250 */
							obj_t BgL_arg1835z00_1753;

							{	/* Trace/walk.scm 250 */
								obj_t BgL_arg1836z00_1754;

								BgL_arg1836z00_1754 =
									MAKE_YOUNG_PAIR(BgL_arg1832z00_1751, BNIL);
								BgL_arg1835z00_1753 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)),
									BgL_arg1836z00_1754);
							}
							BgL_list1833z00_1752 =
								MAKE_YOUNG_PAIR(BgL_symz00_1747, BgL_arg1835z00_1753);
						}
						return
							BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list1833z00_1752);
					}
				}
		}

	}



/* trace-node*! */
	bool_t BGl_tracezd2nodeza2z12z62zztrace_walkz00(obj_t BgL_nodeza2za2_100,
		obj_t BgL_stackz00_101, obj_t BgL_levelz00_102)
	{
		{	/* Trace/walk.scm 449 */
		BGl_tracezd2nodeza2z12z62zztrace_walkz00:
			if (NULLP(BgL_nodeza2za2_100))
				{	/* Trace/walk.scm 450 */
					return ((bool_t) 0);
				}
			else
				{	/* Trace/walk.scm 450 */
					{	/* Trace/walk.scm 451 */
						BgL_nodez00_bglt BgL_arg1845z00_1760;

						{	/* Trace/walk.scm 451 */
							obj_t BgL_arg1846z00_1761;

							BgL_arg1846z00_1761 = CAR(((obj_t) BgL_nodeza2za2_100));
							BgL_arg1845z00_1760 =
								BGl_tracezd2nodezd2zztrace_walkz00(
								((BgL_nodez00_bglt) BgL_arg1846z00_1761), BgL_stackz00_101,
								BgL_levelz00_102);
						}
						{	/* Trace/walk.scm 451 */
							obj_t BgL_auxz00_3377;
							obj_t BgL_tmpz00_3375;

							BgL_auxz00_3377 = ((obj_t) BgL_arg1845z00_1760);
							BgL_tmpz00_3375 = ((obj_t) BgL_nodeza2za2_100);
							SET_CAR(BgL_tmpz00_3375, BgL_auxz00_3377);
						}
					}
					{	/* Trace/walk.scm 452 */
						obj_t BgL_arg1847z00_1762;

						BgL_arg1847z00_1762 = CDR(((obj_t) BgL_nodeza2za2_100));
						{
							obj_t BgL_nodeza2za2_3382;

							BgL_nodeza2za2_3382 = BgL_arg1847z00_1762;
							BgL_nodeza2za2_100 = BgL_nodeza2za2_3382;
							goto BGl_tracezd2nodeza2z12z62zztrace_walkz00;
						}
					}
				}
		}

	}



/* toplevel-trace-node*! */
	bool_t BGl_toplevelzd2tracezd2nodeza2z12zb0zztrace_walkz00(obj_t
		BgL_nodeza2za2_107)
	{
		{	/* Trace/walk.scm 500 */
		BGl_toplevelzd2tracezd2nodeza2z12zb0zztrace_walkz00:
			if (NULLP(BgL_nodeza2za2_107))
				{	/* Trace/walk.scm 501 */
					return ((bool_t) 0);
				}
			else
				{	/* Trace/walk.scm 501 */
					{	/* Trace/walk.scm 502 */
						BgL_nodez00_bglt BgL_arg1850z00_1764;

						{	/* Trace/walk.scm 502 */
							obj_t BgL_arg1851z00_1765;

							BgL_arg1851z00_1765 = CAR(((obj_t) BgL_nodeza2za2_107));
							BgL_arg1850z00_1764 =
								BGl_toplevelzd2tracezd2nodez00zztrace_walkz00(
								((BgL_nodez00_bglt) BgL_arg1851z00_1765));
						}
						{	/* Trace/walk.scm 502 */
							obj_t BgL_auxz00_3391;
							obj_t BgL_tmpz00_3389;

							BgL_auxz00_3391 = ((obj_t) BgL_arg1850z00_1764);
							BgL_tmpz00_3389 = ((obj_t) BgL_nodeza2za2_107);
							SET_CAR(BgL_tmpz00_3389, BgL_auxz00_3391);
						}
					}
					{	/* Trace/walk.scm 503 */
						obj_t BgL_arg1852z00_1766;

						BgL_arg1852z00_1766 = CDR(((obj_t) BgL_nodeza2za2_107));
						{
							obj_t BgL_nodeza2za2_3396;

							BgL_nodeza2za2_3396 = BgL_arg1852z00_1766;
							BgL_nodeza2za2_107 = BgL_nodeza2za2_3396;
							goto BGl_toplevelzd2tracezd2nodeza2z12zb0zztrace_walkz00;
						}
					}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztrace_walkz00()
	{
		{	/* Trace/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztrace_walkz00()
	{
		{	/* Trace/walk.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_proc2171z00zztrace_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string2172z00zztrace_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_proc2173z00zztrace_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string2174z00zztrace_walkz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_toplevelzd2tracezd2nodezd2envzd2zztrace_walkz00,
				BGl_proc2175z00zztrace_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string2176z00zztrace_walkz00);
		}

	}



/* &toplevel-trace-node1382 */
	obj_t BGl_z62toplevelzd2tracezd2node1382z62zztrace_walkz00(obj_t
		BgL_envz00_2700, obj_t BgL_nodez00_2701)
	{
		{	/* Trace/walk.scm 457 */
			return ((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2701));
		}

	}



/* &trace-node1342 */
	obj_t BGl_z62tracezd2node1342zb0zztrace_walkz00(obj_t BgL_envz00_2702,
		obj_t BgL_nodez00_2703, obj_t BgL_stackz00_2704, obj_t BgL_levelz00_2705)
	{
		{	/* Trace/walk.scm 283 */
			return ((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2703));
		}

	}



/* &find-last-node1312 */
	obj_t BGl_z62findzd2lastzd2node1312z62zztrace_walkz00(obj_t BgL_envz00_2706,
		obj_t BgL_nodez00_2707)
	{
		{	/* Trace/walk.scm 139 */
			return ((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2707));
		}

	}



/* find-last-node */
	obj_t BGl_findzd2lastzd2nodez00zztrace_walkz00(BgL_nodez00_bglt
		BgL_nodez00_23)
	{
		{	/* Trace/walk.scm 139 */
			{	/* Trace/walk.scm 139 */
				obj_t BgL_method1313z00_1781;

				{	/* Trace/walk.scm 139 */
					obj_t BgL_res2125z00_2526;

					{	/* Trace/walk.scm 139 */
						long BgL_objzd2classzd2numz00_2491;

						{	/* Trace/walk.scm 139 */
							long BgL_res2115z00_2494;

							BgL_res2115z00_2494 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_23));
							BgL_objzd2classzd2numz00_2491 = BgL_res2115z00_2494;
						}
						{	/* Trace/walk.scm 139 */
							obj_t BgL_arg1813z00_2492;

							BgL_arg1813z00_2492 =
								PROCEDURE_REF(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
								(int) (((long) 1)));
							{	/* Trace/walk.scm 139 */
								int BgL_offsetz00_2496;

								BgL_offsetz00_2496 = (int) (BgL_objzd2classzd2numz00_2491);
								{	/* Trace/walk.scm 139 */
									long BgL_offsetz00_2497;

									BgL_offsetz00_2497 =
										((long) (BgL_offsetz00_2496) - OBJECT_TYPE);
									{	/* Trace/walk.scm 139 */
										long BgL_modz00_2498;

										BgL_modz00_2498 =
											(BgL_offsetz00_2497 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Trace/walk.scm 139 */
											long BgL_restz00_2500;

											BgL_restz00_2500 =
												(BgL_offsetz00_2497 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Trace/walk.scm 139 */

												{	/* Trace/walk.scm 139 */
													obj_t BgL_bucketz00_2502;

													BgL_bucketz00_2502 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2492), BgL_modz00_2498);
													BgL_res2125z00_2526 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2502), BgL_restz00_2500);
					}}}}}}}}
					BgL_method1313z00_1781 = BgL_res2125z00_2526;
				}
				return
					PROCEDURE_ENTRY(BgL_method1313z00_1781) (BgL_method1313z00_1781,
					((obj_t) BgL_nodez00_23), BEOA);
			}
		}

	}



/* &find-last-node */
	obj_t BGl_z62findzd2lastzd2nodez62zztrace_walkz00(obj_t BgL_envz00_2708,
		obj_t BgL_nodez00_2709)
	{
		{	/* Trace/walk.scm 139 */
			return
				BGl_findzd2lastzd2nodez00zztrace_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_2709));
		}

	}



/* trace-node */
	BgL_nodez00_bglt BGl_tracezd2nodezd2zztrace_walkz00(BgL_nodez00_bglt
		BgL_nodez00_43, obj_t BgL_stackz00_44, obj_t BgL_levelz00_45)
	{
		{	/* Trace/walk.scm 283 */
			{	/* Trace/walk.scm 283 */
				obj_t BgL_method1343z00_1782;

				{	/* Trace/walk.scm 283 */
					obj_t BgL_res2136z00_2563;

					{	/* Trace/walk.scm 283 */
						long BgL_objzd2classzd2numz00_2528;

						{	/* Trace/walk.scm 283 */
							long BgL_res2126z00_2531;

							BgL_res2126z00_2531 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_43));
							BgL_objzd2classzd2numz00_2528 = BgL_res2126z00_2531;
						}
						{	/* Trace/walk.scm 283 */
							obj_t BgL_arg1813z00_2529;

							BgL_arg1813z00_2529 =
								PROCEDURE_REF(BGl_tracezd2nodezd2envz00zztrace_walkz00,
								(int) (((long) 1)));
							{	/* Trace/walk.scm 283 */
								int BgL_offsetz00_2533;

								BgL_offsetz00_2533 = (int) (BgL_objzd2classzd2numz00_2528);
								{	/* Trace/walk.scm 283 */
									long BgL_offsetz00_2534;

									BgL_offsetz00_2534 =
										((long) (BgL_offsetz00_2533) - OBJECT_TYPE);
									{	/* Trace/walk.scm 283 */
										long BgL_modz00_2535;

										BgL_modz00_2535 =
											(BgL_offsetz00_2534 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Trace/walk.scm 283 */
											long BgL_restz00_2537;

											BgL_restz00_2537 =
												(BgL_offsetz00_2534 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Trace/walk.scm 283 */

												{	/* Trace/walk.scm 283 */
													obj_t BgL_bucketz00_2539;

													BgL_bucketz00_2539 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2529), BgL_modz00_2535);
													BgL_res2136z00_2563 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2539), BgL_restz00_2537);
					}}}}}}}}
					BgL_method1343z00_1782 = BgL_res2136z00_2563;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1343z00_1782) (BgL_method1343z00_1782,
						((obj_t) BgL_nodez00_43), BgL_stackz00_44, BgL_levelz00_45, BEOA));
			}
		}

	}



/* &trace-node */
	BgL_nodez00_bglt BGl_z62tracezd2nodezb0zztrace_walkz00(obj_t BgL_envz00_2710,
		obj_t BgL_nodez00_2711, obj_t BgL_stackz00_2712, obj_t BgL_levelz00_2713)
	{
		{	/* Trace/walk.scm 283 */
			return
				BGl_tracezd2nodezd2zztrace_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_2711), BgL_stackz00_2712,
				BgL_levelz00_2713);
		}

	}



/* toplevel-trace-node */
	BgL_nodez00_bglt
		BGl_toplevelzd2tracezd2nodez00zztrace_walkz00(BgL_nodez00_bglt
		BgL_nodez00_103)
	{
		{	/* Trace/walk.scm 457 */
			{	/* Trace/walk.scm 457 */
				obj_t BgL_method1383z00_1783;

				{	/* Trace/walk.scm 457 */
					obj_t BgL_res2147z00_2600;

					{	/* Trace/walk.scm 457 */
						long BgL_objzd2classzd2numz00_2565;

						{	/* Trace/walk.scm 457 */
							long BgL_res2137z00_2568;

							BgL_res2137z00_2568 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_103));
							BgL_objzd2classzd2numz00_2565 = BgL_res2137z00_2568;
						}
						{	/* Trace/walk.scm 457 */
							obj_t BgL_arg1813z00_2566;

							BgL_arg1813z00_2566 =
								PROCEDURE_REF
								(BGl_toplevelzd2tracezd2nodezd2envzd2zztrace_walkz00,
								(int) (((long) 1)));
							{	/* Trace/walk.scm 457 */
								int BgL_offsetz00_2570;

								BgL_offsetz00_2570 = (int) (BgL_objzd2classzd2numz00_2565);
								{	/* Trace/walk.scm 457 */
									long BgL_offsetz00_2571;

									BgL_offsetz00_2571 =
										((long) (BgL_offsetz00_2570) - OBJECT_TYPE);
									{	/* Trace/walk.scm 457 */
										long BgL_modz00_2572;

										BgL_modz00_2572 =
											(BgL_offsetz00_2571 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Trace/walk.scm 457 */
											long BgL_restz00_2574;

											BgL_restz00_2574 =
												(BgL_offsetz00_2571 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Trace/walk.scm 457 */

												{	/* Trace/walk.scm 457 */
													obj_t BgL_bucketz00_2576;

													BgL_bucketz00_2576 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2566), BgL_modz00_2572);
													BgL_res2147z00_2600 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2576), BgL_restz00_2574);
					}}}}}}}}
					BgL_method1383z00_1783 = BgL_res2147z00_2600;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1383z00_1783) (BgL_method1383z00_1783,
						((obj_t) BgL_nodez00_103), BEOA));
			}
		}

	}



/* &toplevel-trace-node */
	BgL_nodez00_bglt BGl_z62toplevelzd2tracezd2nodez62zztrace_walkz00(obj_t
		BgL_envz00_2714, obj_t BgL_nodez00_2715)
	{
		{	/* Trace/walk.scm 457 */
			return
				BGl_toplevelzd2tracezd2nodez00zztrace_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_2715));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztrace_walkz00()
	{
		{	/* Trace/walk.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_sequencez00zzast_nodez00, BGl_proc2177z00zztrace_walkz00,
				BGl_string2178z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_syncz00zzast_nodez00, BGl_proc2179z00zztrace_walkz00,
				BGl_string2178z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_appz00zzast_nodez00, BGl_proc2180z00zztrace_walkz00,
				BGl_string2178z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc2181z00zztrace_walkz00,
				BGl_string2178z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_funcallz00zzast_nodez00, BGl_proc2182z00zztrace_walkz00,
				BGl_string2178z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_externz00zzast_nodez00, BGl_proc2183z00zztrace_walkz00,
				BGl_string2178z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_setqz00zzast_nodez00, BGl_proc2184z00zztrace_walkz00,
				BGl_string2178z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2185z00zztrace_walkz00,
				BGl_string2178z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_failz00zzast_nodez00, BGl_proc2186z00zztrace_walkz00,
				BGl_string2178z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_switchz00zzast_nodez00, BGl_proc2187z00zztrace_walkz00,
				BGl_string2178z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2188z00zztrace_walkz00,
				BGl_string2178z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2189z00zztrace_walkz00,
				BGl_string2178z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2190z00zztrace_walkz00,
				BGl_string2178z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2191z00zztrace_walkz00,
				BGl_string2178z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc2192z00zztrace_walkz00, BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc2194z00zztrace_walkz00, BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc2195z00zztrace_walkz00, BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc2196z00zztrace_walkz00, BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc2197z00zztrace_walkz00, BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc2198z00zztrace_walkz00, BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc2199z00zztrace_walkz00, BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc2200z00zztrace_walkz00, BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2201z00zztrace_walkz00,
				BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc2202z00zztrace_walkz00, BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_switchz00zzast_nodez00,
				BGl_proc2203z00zztrace_walkz00, BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2204z00zztrace_walkz00,
				BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2205z00zztrace_walkz00,
				BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2206z00zztrace_walkz00,
				BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2207z00zztrace_walkz00,
				BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2208z00zztrace_walkz00,
				BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2209z00zztrace_walkz00,
				BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2210z00zztrace_walkz00,
				BGl_string2193z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_toplevelzd2tracezd2nodezd2envzd2zztrace_walkz00,
				BGl_sequencez00zzast_nodez00, BGl_proc2211z00zztrace_walkz00,
				BGl_string2212z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_toplevelzd2tracezd2nodezd2envzd2zztrace_walkz00,
				BGl_syncz00zzast_nodez00, BGl_proc2213z00zztrace_walkz00,
				BGl_string2212z00zztrace_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_toplevelzd2tracezd2nodezd2envzd2zztrace_walkz00,
				BGl_setqz00zzast_nodez00, BGl_proc2214z00zztrace_walkz00,
				BGl_string2212z00zztrace_walkz00);
		}

	}



/* &toplevel-trace-node-1389 */
	BgL_nodez00_bglt BGl_z62toplevelzd2tracezd2nodezd21389zb0zztrace_walkz00(obj_t
		BgL_envz00_2751, obj_t BgL_nodez00_2752)
	{
		{	/* Trace/walk.scm 484 */
			{	/* Trace/walk.scm 486 */
				BgL_varz00_bglt BgL_i1132z00_2875;

				BgL_i1132z00_2875 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2752)))->BgL_varz00);
				{	/* Trace/walk.scm 487 */
					bool_t BgL_test2320z00_3543;

					{	/* Trace/walk.scm 487 */
						bool_t BgL_test2321z00_3544;

						{	/* Trace/walk.scm 487 */
							BgL_variablez00_bglt BgL_arg2001z00_2876;

							BgL_arg2001z00_2876 =
								(((BgL_varz00_bglt) COBJECT(BgL_i1132z00_2875))->
								BgL_variablez00);
							{	/* Trace/walk.scm 487 */
								bool_t BgL_res2156z00_2877;

								BgL_res2156z00_2877 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg2001z00_2876), BGl_globalz00zzast_varz00);
								BgL_test2321z00_3544 = BgL_res2156z00_2877;
							}
						}
						if (BgL_test2321z00_3544)
							{	/* Trace/walk.scm 488 */
								bool_t BgL_test2322z00_3548;

								{	/* Trace/walk.scm 488 */
									bool_t BgL_test2323z00_3549;

									{	/* Trace/walk.scm 488 */
										BgL_nodez00_bglt BgL_arg2000z00_2878;

										BgL_arg2000z00_2878 =
											(((BgL_setqz00_bglt) COBJECT(
													((BgL_setqz00_bglt) BgL_nodez00_2752)))->
											BgL_valuez00);
										{	/* Trace/walk.scm 488 */
											bool_t BgL_res2157z00_2879;

											BgL_res2157z00_2879 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg2000z00_2878),
												BGl_atomz00zzast_nodez00);
											BgL_test2323z00_3549 = BgL_res2157z00_2879;
										}
									}
									if (BgL_test2323z00_3549)
										{	/* Trace/walk.scm 488 */
											BgL_test2322z00_3548 = ((bool_t) 1);
										}
									else
										{	/* Trace/walk.scm 489 */
											bool_t BgL_test2324z00_3554;

											{	/* Trace/walk.scm 489 */
												BgL_nodez00_bglt BgL_arg1999z00_2880;

												BgL_arg1999z00_2880 =
													(((BgL_setqz00_bglt) COBJECT(
															((BgL_setqz00_bglt) BgL_nodez00_2752)))->
													BgL_valuez00);
												{	/* Trace/walk.scm 489 */
													bool_t BgL_res2158z00_2881;

													BgL_res2158z00_2881 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_arg1999z00_2880),
														BGl_varz00zzast_nodez00);
													BgL_test2324z00_3554 = BgL_res2158z00_2881;
												}
											}
											if (BgL_test2324z00_3554)
												{	/* Trace/walk.scm 489 */
													BgL_test2322z00_3548 = ((bool_t) 1);
												}
											else
												{	/* Trace/walk.scm 490 */
													bool_t BgL_test2325z00_3559;

													{	/* Trace/walk.scm 490 */
														BgL_nodez00_bglt BgL_arg1998z00_2882;

														BgL_arg1998z00_2882 =
															(((BgL_setqz00_bglt) COBJECT(
																	((BgL_setqz00_bglt) BgL_nodez00_2752)))->
															BgL_valuez00);
														{	/* Trace/walk.scm 490 */
															bool_t BgL_res2159z00_2883;

															BgL_res2159z00_2883 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_arg1998z00_2882),
																BGl_kwotez00zzast_nodez00);
															BgL_test2325z00_3559 = BgL_res2159z00_2883;
														}
													}
													if (BgL_test2325z00_3559)
														{	/* Trace/walk.scm 490 */
															BgL_test2322z00_3548 = ((bool_t) 1);
														}
													else
														{	/* Trace/walk.scm 491 */
															BgL_nodez00_bglt BgL_arg1997z00_2884;

															BgL_arg1997z00_2884 =
																(((BgL_setqz00_bglt) COBJECT(
																		((BgL_setqz00_bglt) BgL_nodez00_2752)))->
																BgL_valuez00);
															{	/* Trace/walk.scm 491 */
																bool_t BgL_res2160z00_2885;

																BgL_res2160z00_2885 =
																	BGl_isazf3zf3zz__objectz00(
																	((obj_t) BgL_arg1997z00_2884),
																	BGl_pragmaz00zzast_nodez00);
																BgL_test2322z00_3548 = BgL_res2160z00_2885;
															}
														}
												}
										}
								}
								if (BgL_test2322z00_3548)
									{	/* Trace/walk.scm 488 */
										BgL_test2320z00_3543 = ((bool_t) 0);
									}
								else
									{	/* Trace/walk.scm 488 */
										BgL_test2320z00_3543 = ((bool_t) 1);
									}
							}
						else
							{	/* Trace/walk.scm 487 */
								BgL_test2320z00_3543 = ((bool_t) 0);
							}
					}
					if (BgL_test2320z00_3543)
						{	/* Trace/walk.scm 492 */
							BgL_typez00_bglt BgL_tz00_2886;

							{	/* Trace/walk.scm 492 */
								BgL_typez00_bglt BgL_arg1992z00_2887;
								BgL_typez00_bglt BgL_arg1993z00_2888;

								BgL_arg1992z00_2887 =
									(((BgL_nodez00_bglt) COBJECT(
											(((BgL_setqz00_bglt) COBJECT(
														((BgL_setqz00_bglt) BgL_nodez00_2752)))->
												BgL_valuez00)))->BgL_typez00);
								BgL_arg1993z00_2888 =
									(((BgL_variablez00_bglt)
										COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt) ((
															(BgL_varz00_bglt) COBJECT(BgL_i1132z00_2875))->
														BgL_variablez00)))))->BgL_typez00);
								BgL_tz00_2886 =
									BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_arg1992z00_2887,
									BgL_arg1993z00_2888);
							}
							{	/* Trace/walk.scm 492 */
								BgL_letzd2varzd2_bglt BgL_tracez00_2889;

								{	/* Trace/walk.scm 493 */
									BgL_nodez00_bglt BgL_arg1988z00_2890;
									obj_t BgL_arg1989z00_2891;
									obj_t BgL_arg1990z00_2892;

									BgL_arg1988z00_2890 =
										(((BgL_setqz00_bglt) COBJECT(
												((BgL_setqz00_bglt) BgL_nodez00_2752)))->BgL_valuez00);
									{	/* Trace/walk.scm 493 */
										BgL_variablez00_bglt BgL_arg1991z00_2893;

										BgL_arg1991z00_2893 =
											(((BgL_varz00_bglt) COBJECT(BgL_i1132z00_2875))->
											BgL_variablez00);
										BgL_arg1989z00_2891 =
											BGl_tracezd2idzd2zztrace_walkz00(((obj_t)
												BgL_arg1991z00_2893));
									}
									BgL_arg1990z00_2892 =
										(((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt)
													((BgL_setqz00_bglt) BgL_nodez00_2752))))->BgL_locz00);
									BgL_tracez00_2889 =
										BGl_makezd2tracedzd2nodez00zztrace_walkz00
										(BgL_arg1988z00_2890, BgL_tz00_2886, BgL_arg1989z00_2891,
										BgL_arg1990z00_2892, BNIL);
								}
								{	/* Trace/walk.scm 493 */

									((((BgL_setqz00_bglt) COBJECT(
													((BgL_setqz00_bglt) BgL_nodez00_2752)))->
											BgL_valuez00) =
										((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_tracez00_2889)),
										BUNSPEC);
								}
							}
						}
					else
						{	/* Trace/walk.scm 487 */
							BFALSE;
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_2752));
		}

	}



/* &toplevel-trace-node-1387 */
	BgL_nodez00_bglt BGl_z62toplevelzd2tracezd2nodezd21387zb0zztrace_walkz00(obj_t
		BgL_envz00_2753, obj_t BgL_nodez00_2754)
	{
		{	/* Trace/walk.scm 470 */
			((((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2754)))->BgL_mutexz00) =
				((BgL_nodez00_bglt)
					BGl_toplevelzd2tracezd2nodez00zztrace_walkz00((((BgL_syncz00_bglt)
								COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2754)))->
							BgL_mutexz00))), BUNSPEC);
			((((BgL_syncz00_bglt) COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2754)))->
					BgL_prelockz00) =
				((BgL_nodez00_bglt)
					BGl_toplevelzd2tracezd2nodez00zztrace_walkz00((((BgL_syncz00_bglt)
								COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2754)))->
							BgL_prelockz00))), BUNSPEC);
			((((BgL_syncz00_bglt) COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2754)))->
					BgL_bodyz00) =
				((BgL_nodez00_bglt)
					BGl_toplevelzd2tracezd2nodez00zztrace_walkz00((((BgL_syncz00_bglt)
								COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2754)))->BgL_bodyz00))),
				BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2754));
		}

	}



/* &toplevel-trace-node-1385 */
	BgL_nodez00_bglt BGl_z62toplevelzd2tracezd2nodezd21385zb0zztrace_walkz00(obj_t
		BgL_envz00_2755, obj_t BgL_nodez00_2756)
	{
		{	/* Trace/walk.scm 463 */
			BGl_toplevelzd2tracezd2nodeza2z12zb0zztrace_walkz00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2756)))->BgL_nodesz00));
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2756));
		}

	}



/* &trace-node-box-set!1381 */
	BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2boxzd2setz121381za2zztrace_walkz00(obj_t
		BgL_envz00_2757, obj_t BgL_nodez00_2758, obj_t BgL_stackz00_2759,
		obj_t BgL_levelz00_2760)
	{
		{	/* Trace/walk.scm 440 */
			{
				BgL_varz00_bglt BgL_auxz00_3612;

				{	/* Trace/walk.scm 442 */
					BgL_varz00_bglt BgL_arg1959z00_2897;

					BgL_arg1959z00_2897 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2758)))->BgL_varz00);
					BgL_auxz00_3612 =
						((BgL_varz00_bglt)
						BGl_tracezd2nodezd2zztrace_walkz00(
							((BgL_nodez00_bglt) BgL_arg1959z00_2897), BgL_stackz00_2759,
							BgL_levelz00_2760));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2758)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_3612), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3620;

				{	/* Trace/walk.scm 443 */
					BgL_nodez00_bglt BgL_arg1960z00_2898;

					BgL_arg1960z00_2898 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2758)))->BgL_valuez00);
					BgL_auxz00_3620 =
						BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1960z00_2898,
						BgL_stackz00_2759, BgL_levelz00_2760);
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2758)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3620), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2758));
		}

	}



/* &trace-node-box-ref1379 */
	BgL_nodez00_bglt BGl_z62tracezd2nodezd2boxzd2ref1379zb0zztrace_walkz00(obj_t
		BgL_envz00_2761, obj_t BgL_nodez00_2762, obj_t BgL_stackz00_2763,
		obj_t BgL_levelz00_2764)
	{
		{	/* Trace/walk.scm 433 */
			{	/* Trace/walk.scm 434 */
				BgL_nodez00_bglt BgL_arg1957z00_2900;

				{	/* Trace/walk.scm 434 */
					BgL_varz00_bglt BgL_arg1958z00_2901;

					BgL_arg1958z00_2901 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2762)))->BgL_varz00);
					BgL_arg1957z00_2900 =
						BGl_tracezd2nodezd2zztrace_walkz00(
						((BgL_nodez00_bglt) BgL_arg1958z00_2901), BgL_stackz00_2763,
						BgL_levelz00_2764);
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2762)))->BgL_varz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_arg1957z00_2900)), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2762));
		}

	}



/* &trace-node-make-box1377 */
	BgL_nodez00_bglt BGl_z62tracezd2nodezd2makezd2box1377zb0zztrace_walkz00(obj_t
		BgL_envz00_2765, obj_t BgL_nodez00_2766, obj_t BgL_stackz00_2767,
		obj_t BgL_levelz00_2768)
	{
		{	/* Trace/walk.scm 426 */
			((((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2766)))->BgL_valuez00) =
				((BgL_nodez00_bglt)
					BGl_tracezd2nodezd2zztrace_walkz00((((BgL_makezd2boxzd2_bglt)
								COBJECT(((BgL_makezd2boxzd2_bglt) BgL_nodez00_2766)))->
							BgL_valuez00), BgL_stackz00_2767, BgL_levelz00_2768)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2766));
		}

	}



/* &trace-node-jump-ex-i1375 */
	BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2jumpzd2exzd2i1375z62zztrace_walkz00(obj_t
		BgL_envz00_2769, obj_t BgL_nodez00_2770, obj_t BgL_stackz00_2771,
		obj_t BgL_levelz00_2772)
	{
		{	/* Trace/walk.scm 417 */
			{
				BgL_nodez00_bglt BgL_auxz00_3644;

				{	/* Trace/walk.scm 419 */
					BgL_nodez00_bglt BgL_arg1953z00_2904;

					BgL_arg1953z00_2904 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2770)))->BgL_exitz00);
					BgL_auxz00_3644 =
						BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1953z00_2904,
						BgL_stackz00_2771, BgL_levelz00_2772);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2770)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_3644), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3650;

				{	/* Trace/walk.scm 420 */
					BgL_nodez00_bglt BgL_arg1954z00_2905;

					BgL_arg1954z00_2905 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2770)))->
						BgL_valuez00);
					BgL_auxz00_3650 =
						BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1954z00_2905,
						BgL_stackz00_2771, BgL_levelz00_2772);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2770)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_3650), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2770));
		}

	}



/* &trace-node-set-ex-it1372 */
	BgL_nodez00_bglt
		BGl_z62tracezd2nodezd2setzd2exzd2it1372z62zztrace_walkz00(obj_t
		BgL_envz00_2773, obj_t BgL_nodez00_2774, obj_t BgL_stackz00_2775,
		obj_t BgL_levelz00_2776)
	{
		{	/* Trace/walk.scm 410 */
			((((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2774)))->BgL_bodyz00) =
				((BgL_nodez00_bglt)
					BGl_tracezd2nodezd2zztrace_walkz00((((BgL_setzd2exzd2itz00_bglt)
								COBJECT(((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2774)))->
							BgL_bodyz00), BgL_stackz00_2775, BgL_levelz00_2776)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt)
					BgL_nodez00_2774));
		}

	}



/* &trace-node-let-var1369 */
	BgL_nodez00_bglt BGl_z62tracezd2nodezd2letzd2var1369zb0zztrace_walkz00(obj_t
		BgL_envz00_2777, obj_t BgL_nodez00_2778, obj_t BgL_stackz00_2779,
		obj_t BgL_levelz00_2780)
	{
		{	/* Trace/walk.scm 399 */
			{	/* Trace/walk.scm 401 */
				obj_t BgL_g1311z00_2908;

				BgL_g1311z00_2908 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2778)))->BgL_bindingsz00);
				{
					obj_t BgL_l1309z00_2910;

					BgL_l1309z00_2910 = BgL_g1311z00_2908;
				BgL_zc3z04anonymousza31944ze3z87_2909:
					if (PAIRP(BgL_l1309z00_2910))
						{	/* Trace/walk.scm 401 */
							{	/* Trace/walk.scm 402 */
								obj_t BgL_bindingz00_2911;

								BgL_bindingz00_2911 = CAR(BgL_l1309z00_2910);
								{	/* Trace/walk.scm 402 */
									BgL_nodez00_bglt BgL_arg1946z00_2912;

									{	/* Trace/walk.scm 402 */
										obj_t BgL_arg1947z00_2913;

										BgL_arg1947z00_2913 = CDR(((obj_t) BgL_bindingz00_2911));
										BgL_arg1946z00_2912 =
											BGl_tracezd2nodezd2zztrace_walkz00(
											((BgL_nodez00_bglt) BgL_arg1947z00_2913),
											BgL_stackz00_2779, BgL_levelz00_2780);
									}
									{	/* Trace/walk.scm 402 */
										obj_t BgL_auxz00_3676;
										obj_t BgL_tmpz00_3674;

										BgL_auxz00_3676 = ((obj_t) BgL_arg1946z00_2912);
										BgL_tmpz00_3674 = ((obj_t) BgL_bindingz00_2911);
										SET_CDR(BgL_tmpz00_3674, BgL_auxz00_3676);
									}
								}
							}
							{
								obj_t BgL_l1309z00_3679;

								BgL_l1309z00_3679 = CDR(BgL_l1309z00_2910);
								BgL_l1309z00_2910 = BgL_l1309z00_3679;
								goto BgL_zc3z04anonymousza31944ze3z87_2909;
							}
						}
					else
						{	/* Trace/walk.scm 401 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3681;

				{	/* Trace/walk.scm 404 */
					BgL_nodez00_bglt BgL_arg1949z00_2914;

					BgL_arg1949z00_2914 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2778)))->BgL_bodyz00);
					BgL_auxz00_3681 =
						BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1949z00_2914,
						BgL_stackz00_2779, BgL_levelz00_2780);
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2778)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3681), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2778));
		}

	}



/* &trace-node-let-fun1367 */
	BgL_nodez00_bglt BGl_z62tracezd2nodezd2letzd2fun1367zb0zztrace_walkz00(obj_t
		BgL_envz00_2781, obj_t BgL_nodez00_2782, obj_t BgL_stackz00_2783,
		obj_t BgL_levelz00_2784)
	{
		{	/* Trace/walk.scm 383 */
			if (BGl_isloopzf3zf3zztrace_isloopz00(
					((BgL_letzd2funzd2_bglt) BgL_nodez00_2782)))
				{	/* Trace/walk.scm 384 */
					{	/* Trace/walk.scm 386 */
						obj_t BgL_varz00_2916;

						BgL_varz00_2916 =
							CAR(
							(((BgL_letzd2funzd2_bglt) COBJECT(
										((BgL_letzd2funzd2_bglt) BgL_nodez00_2782)))->
								BgL_localsz00));
						{	/* Trace/walk.scm 386 */
							BgL_typez00_bglt BgL_tz00_2917;

							{	/* Trace/walk.scm 387 */
								BgL_typez00_bglt BgL_arg1936z00_2918;
								BgL_typez00_bglt BgL_arg1937z00_2919;

								BgL_arg1936z00_2918 =
									(((BgL_nodez00_bglt) COBJECT(
											(((BgL_letzd2funzd2_bglt) COBJECT(
														((BgL_letzd2funzd2_bglt) BgL_nodez00_2782)))->
												BgL_bodyz00)))->BgL_typez00);
								BgL_arg1937z00_2919 =
									(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
												BgL_varz00_2916)))->BgL_typez00);
								BgL_tz00_2917 =
									BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_arg1936z00_2918,
									BgL_arg1937z00_2919);
							}
							{	/* Trace/walk.scm 387 */
								obj_t BgL_idz00_2920;

								BgL_idz00_2920 =
									BGl_tracezd2idzd2zztrace_walkz00(BgL_varz00_2916);
								{	/* Trace/walk.scm 388 */

									{
										BgL_nodez00_bglt BgL_auxz00_3702;

										{	/* Trace/walk.scm 389 */
											BgL_nodez00_bglt BgL_arg1934z00_2921;
											obj_t BgL_arg1935z00_2922;

											BgL_arg1934z00_2921 =
												(((BgL_letzd2funzd2_bglt) COBJECT(
														((BgL_letzd2funzd2_bglt) BgL_nodez00_2782)))->
												BgL_bodyz00);
											BgL_arg1935z00_2922 =
												(((BgL_nodez00_bglt)
													COBJECT(((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt)
																BgL_nodez00_2782))))->BgL_locz00);
											BgL_auxz00_3702 =
												((BgL_nodez00_bglt)
												BGl_makezd2tracedzd2nodez00zztrace_walkz00
												(BgL_arg1934z00_2921, BgL_tz00_2917, BgL_idz00_2920,
													BgL_arg1935z00_2922, BNIL));
										}
										((((BgL_letzd2funzd2_bglt) COBJECT(
														((BgL_letzd2funzd2_bglt) BgL_nodez00_2782)))->
												BgL_bodyz00) =
											((BgL_nodez00_bglt) BgL_auxz00_3702), BUNSPEC);
									}
								}
							}
						}
					}
					return
						((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2782));
				}
			else
				{	/* Trace/walk.scm 384 */
					{	/* Trace/walk.scm 392 */
						obj_t BgL_g1308z00_2923;

						BgL_g1308z00_2923 =
							(((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nodez00_2782)))->BgL_localsz00);
						{
							obj_t BgL_l1306z00_2925;

							BgL_l1306z00_2925 = BgL_g1308z00_2923;
						BgL_zc3z04anonymousza31940ze3z87_2924:
							if (PAIRP(BgL_l1306z00_2925))
								{	/* Trace/walk.scm 392 */
									BGl_tracezd2funz12zc0zztrace_walkz00(CAR(BgL_l1306z00_2925),
										BgL_stackz00_2783, BgL_levelz00_2784);
									{
										obj_t BgL_l1306z00_3720;

										BgL_l1306z00_3720 = CDR(BgL_l1306z00_2925);
										BgL_l1306z00_2925 = BgL_l1306z00_3720;
										goto BgL_zc3z04anonymousza31940ze3z87_2924;
									}
								}
							else
								{	/* Trace/walk.scm 392 */
									((bool_t) 1);
								}
						}
					}
					{
						BgL_nodez00_bglt BgL_auxz00_3722;

						{	/* Trace/walk.scm 393 */
							BgL_nodez00_bglt BgL_arg1943z00_2926;

							BgL_arg1943z00_2926 =
								(((BgL_letzd2funzd2_bglt) COBJECT(
										((BgL_letzd2funzd2_bglt) BgL_nodez00_2782)))->BgL_bodyz00);
							BgL_auxz00_3722 =
								BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1943z00_2926,
								BgL_stackz00_2783, BgL_levelz00_2784);
						}
						((((BgL_letzd2funzd2_bglt) COBJECT(
										((BgL_letzd2funzd2_bglt) BgL_nodez00_2782)))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_auxz00_3722), BUNSPEC);
					}
					return
						((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2782));
				}
		}

	}



/* &trace-node-switch1365 */
	BgL_nodez00_bglt BGl_z62tracezd2nodezd2switch1365z62zztrace_walkz00(obj_t
		BgL_envz00_2785, obj_t BgL_nodez00_2786, obj_t BgL_stackz00_2787,
		obj_t BgL_levelz00_2788)
	{
		{	/* Trace/walk.scm 372 */
			{
				BgL_nodez00_bglt BgL_auxz00_3730;

				{	/* Trace/walk.scm 374 */
					BgL_nodez00_bglt BgL_arg1927z00_2928;

					BgL_arg1927z00_2928 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2786)))->BgL_testz00);
					BgL_auxz00_3730 =
						BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1927z00_2928,
						BgL_stackz00_2787, BgL_levelz00_2788);
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2786)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3730), BUNSPEC);
			}
			{	/* Trace/walk.scm 375 */
				obj_t BgL_g1305z00_2929;

				BgL_g1305z00_2929 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2786)))->BgL_clausesz00);
				{
					obj_t BgL_l1303z00_2931;

					BgL_l1303z00_2931 = BgL_g1305z00_2929;
				BgL_zc3z04anonymousza31928ze3z87_2930:
					if (PAIRP(BgL_l1303z00_2931))
						{	/* Trace/walk.scm 375 */
							{	/* Trace/walk.scm 376 */
								obj_t BgL_clausez00_2932;

								BgL_clausez00_2932 = CAR(BgL_l1303z00_2931);
								{	/* Trace/walk.scm 376 */
									BgL_nodez00_bglt BgL_arg1930z00_2933;

									{	/* Trace/walk.scm 376 */
										obj_t BgL_arg1931z00_2934;

										BgL_arg1931z00_2934 = CDR(((obj_t) BgL_clausez00_2932));
										BgL_arg1930z00_2933 =
											BGl_tracezd2nodezd2zztrace_walkz00(
											((BgL_nodez00_bglt) BgL_arg1931z00_2934),
											BgL_stackz00_2787, BgL_levelz00_2788);
									}
									{	/* Trace/walk.scm 376 */
										obj_t BgL_auxz00_3747;
										obj_t BgL_tmpz00_3745;

										BgL_auxz00_3747 = ((obj_t) BgL_arg1930z00_2933);
										BgL_tmpz00_3745 = ((obj_t) BgL_clausez00_2932);
										SET_CDR(BgL_tmpz00_3745, BgL_auxz00_3747);
									}
								}
							}
							{
								obj_t BgL_l1303z00_3750;

								BgL_l1303z00_3750 = CDR(BgL_l1303z00_2931);
								BgL_l1303z00_2931 = BgL_l1303z00_3750;
								goto BgL_zc3z04anonymousza31928ze3z87_2930;
							}
						}
					else
						{	/* Trace/walk.scm 375 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_2786));
		}

	}



/* &trace-node-fail1363 */
	BgL_nodez00_bglt BGl_z62tracezd2nodezd2fail1363z62zztrace_walkz00(obj_t
		BgL_envz00_2789, obj_t BgL_nodez00_2790, obj_t BgL_stackz00_2791,
		obj_t BgL_levelz00_2792)
	{
		{	/* Trace/walk.scm 362 */
			{
				BgL_nodez00_bglt BgL_auxz00_3754;

				{	/* Trace/walk.scm 364 */
					BgL_nodez00_bglt BgL_arg1924z00_2936;

					BgL_arg1924z00_2936 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2790)))->BgL_procz00);
					BgL_auxz00_3754 =
						BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1924z00_2936,
						BgL_stackz00_2791, BgL_levelz00_2792);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2790)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3754), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3760;

				{	/* Trace/walk.scm 365 */
					BgL_nodez00_bglt BgL_arg1925z00_2937;

					BgL_arg1925z00_2937 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2790)))->BgL_msgz00);
					BgL_auxz00_3760 =
						BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1925z00_2937,
						BgL_stackz00_2791, BgL_levelz00_2792);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2790)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3760), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3766;

				{	/* Trace/walk.scm 366 */
					BgL_nodez00_bglt BgL_arg1926z00_2938;

					BgL_arg1926z00_2938 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2790)))->BgL_objz00);
					BgL_auxz00_3766 =
						BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1926z00_2938,
						BgL_stackz00_2791, BgL_levelz00_2792);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2790)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3766), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nodez00_2790));
		}

	}



/* &trace-node-condition1361 */
	BgL_nodez00_bglt BGl_z62tracezd2nodezd2condition1361z62zztrace_walkz00(obj_t
		BgL_envz00_2793, obj_t BgL_nodez00_2794, obj_t BgL_stackz00_2795,
		obj_t BgL_levelz00_2796)
	{
		{	/* Trace/walk.scm 352 */
			{
				BgL_nodez00_bglt BgL_auxz00_3774;

				{	/* Trace/walk.scm 354 */
					BgL_nodez00_bglt BgL_arg1920z00_2940;

					BgL_arg1920z00_2940 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2794)))->BgL_testz00);
					BgL_auxz00_3774 =
						BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1920z00_2940,
						BgL_stackz00_2795, BgL_levelz00_2796);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2794)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3774), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3780;

				{	/* Trace/walk.scm 355 */
					BgL_nodez00_bglt BgL_arg1921z00_2941;

					BgL_arg1921z00_2941 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2794)))->BgL_truez00);
					BgL_auxz00_3780 =
						BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1921z00_2941,
						BgL_stackz00_2795, BgL_levelz00_2796);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2794)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3780), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3786;

				{	/* Trace/walk.scm 356 */
					BgL_nodez00_bglt BgL_arg1923z00_2942;

					BgL_arg1923z00_2942 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2794)))->BgL_falsez00);
					BgL_auxz00_3786 =
						BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1923z00_2942,
						BgL_stackz00_2795, BgL_levelz00_2796);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2794)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3786), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nodez00_2794));
		}

	}



/* &trace-node-setq1359 */
	BgL_nodez00_bglt BGl_z62tracezd2nodezd2setq1359z62zztrace_walkz00(obj_t
		BgL_envz00_2797, obj_t BgL_nodez00_2798, obj_t BgL_stackz00_2799,
		obj_t BgL_levelz00_2800)
	{
		{	/* Trace/walk.scm 345 */
			((((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2798)))->BgL_valuez00) =
				((BgL_nodez00_bglt)
					BGl_tracezd2nodezd2zztrace_walkz00((((BgL_setqz00_bglt)
								COBJECT(((BgL_setqz00_bglt) BgL_nodez00_2798)))->BgL_valuez00),
						BgL_stackz00_2799, BgL_levelz00_2800)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_2798));
		}

	}



/* &trace-node-cast1357 */
	BgL_nodez00_bglt BGl_z62tracezd2nodezd2cast1357z62zztrace_walkz00(obj_t
		BgL_envz00_2801, obj_t BgL_nodez00_2802, obj_t BgL_stackz00_2803,
		obj_t BgL_levelz00_2804)
	{
		{	/* Trace/walk.scm 338 */
			((((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2802)))->BgL_argz00) =
				((BgL_nodez00_bglt)
					BGl_tracezd2nodezd2zztrace_walkz00((((BgL_castz00_bglt)
								COBJECT(((BgL_castz00_bglt) BgL_nodez00_2802)))->BgL_argz00),
						BgL_stackz00_2803, BgL_levelz00_2804)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_2802));
		}

	}



/* &trace-node-extern1355 */
	BgL_nodez00_bglt BGl_z62tracezd2nodezd2extern1355z62zztrace_walkz00(obj_t
		BgL_envz00_2805, obj_t BgL_nodez00_2806, obj_t BgL_stackz00_2807,
		obj_t BgL_levelz00_2808)
	{
		{	/* Trace/walk.scm 331 */
			BGl_tracezd2nodeza2z12z62zztrace_walkz00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2806)))->BgL_exprza2za2),
				BgL_stackz00_2807, BgL_levelz00_2808);
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2806));
		}

	}



/* &trace-node-funcall1353 */
	BgL_nodez00_bglt BGl_z62tracezd2nodezd2funcall1353z62zztrace_walkz00(obj_t
		BgL_envz00_2809, obj_t BgL_nodez00_2810, obj_t BgL_stackz00_2811,
		obj_t BgL_levelz00_2812)
	{
		{	/* Trace/walk.scm 322 */
			{
				BgL_nodez00_bglt BgL_auxz00_3813;

				{	/* Trace/walk.scm 324 */
					BgL_nodez00_bglt BgL_arg1913z00_2947;

					BgL_arg1913z00_2947 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2810)))->BgL_funz00);
					BgL_auxz00_3813 =
						BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1913z00_2947,
						BgL_stackz00_2811, BgL_levelz00_2812);
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2810)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3813), BUNSPEC);
			}
			BGl_tracezd2nodeza2z12z62zztrace_walkz00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2810)))->BgL_argsz00),
				BgL_stackz00_2811, BgL_levelz00_2812);
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2810));
		}

	}



/* &trace-node-app-ly1351 */
	BgL_nodez00_bglt BGl_z62tracezd2nodezd2appzd2ly1351zb0zztrace_walkz00(obj_t
		BgL_envz00_2813, obj_t BgL_nodez00_2814, obj_t BgL_stackz00_2815,
		obj_t BgL_levelz00_2816)
	{
		{	/* Trace/walk.scm 313 */
			{
				BgL_nodez00_bglt BgL_auxz00_3824;

				{	/* Trace/walk.scm 315 */
					BgL_nodez00_bglt BgL_arg1911z00_2949;

					BgL_arg1911z00_2949 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2814)))->BgL_funz00);
					BgL_auxz00_3824 =
						BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1911z00_2949,
						BgL_stackz00_2815, BgL_levelz00_2816);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2814)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3824), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3830;

				{	/* Trace/walk.scm 316 */
					BgL_nodez00_bglt BgL_arg1912z00_2950;

					BgL_arg1912z00_2950 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2814)))->BgL_argz00);
					BgL_auxz00_3830 =
						BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1912z00_2950,
						BgL_stackz00_2815, BgL_levelz00_2816);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2814)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3830), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2814));
		}

	}



/* &trace-node-app1349 */
	BgL_nodez00_bglt BGl_z62tracezd2nodezd2app1349z62zztrace_walkz00(obj_t
		BgL_envz00_2817, obj_t BgL_nodez00_2818, obj_t BgL_stackz00_2819,
		obj_t BgL_levelz00_2820)
	{
		{	/* Trace/walk.scm 306 */
			BGl_tracezd2nodeza2z12z62zztrace_walkz00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2818)))->BgL_argsz00),
				BgL_stackz00_2819, BgL_levelz00_2820);
			return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2818));
		}

	}



/* &trace-node-sync1347 */
	BgL_nodez00_bglt BGl_z62tracezd2nodezd2sync1347z62zztrace_walkz00(obj_t
		BgL_envz00_2821, obj_t BgL_nodez00_2822, obj_t BgL_stackz00_2823,
		obj_t BgL_levelz00_2824)
	{
		{	/* Trace/walk.scm 296 */
			{
				BgL_nodez00_bglt BgL_auxz00_3843;

				{	/* Trace/walk.scm 298 */
					BgL_nodez00_bglt BgL_arg1907z00_2953;

					BgL_arg1907z00_2953 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2822)))->BgL_mutexz00);
					BgL_auxz00_3843 =
						BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1907z00_2953,
						BgL_stackz00_2823, BgL_levelz00_2824);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2822)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3843), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3849;

				{	/* Trace/walk.scm 299 */
					BgL_nodez00_bglt BgL_arg1908z00_2954;

					BgL_arg1908z00_2954 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2822)))->BgL_prelockz00);
					BgL_auxz00_3849 =
						BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1908z00_2954,
						BgL_stackz00_2823, BgL_levelz00_2824);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2822)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3849), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3855;

				{	/* Trace/walk.scm 300 */
					BgL_nodez00_bglt BgL_arg1909z00_2955;

					BgL_arg1909z00_2955 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2822)))->BgL_bodyz00);
					BgL_auxz00_3855 =
						BGl_tracezd2nodezd2zztrace_walkz00(BgL_arg1909z00_2955,
						BgL_stackz00_2823, BgL_levelz00_2824);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2822)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3855), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2822));
		}

	}



/* &trace-node-sequence1345 */
	BgL_nodez00_bglt BGl_z62tracezd2nodezd2sequence1345z62zztrace_walkz00(obj_t
		BgL_envz00_2825, obj_t BgL_nodez00_2826, obj_t BgL_stackz00_2827,
		obj_t BgL_levelz00_2828)
	{
		{	/* Trace/walk.scm 289 */
			BGl_tracezd2nodeza2z12z62zztrace_walkz00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2826)))->BgL_nodesz00),
				BgL_stackz00_2827, BgL_levelz00_2828);
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2826));
		}

	}



/* &find-last-node-jump-1341 */
	obj_t BGl_z62findzd2lastzd2nodezd2jumpzd21341z62zztrace_walkz00(obj_t
		BgL_envz00_2829, obj_t BgL_nodez00_2830)
	{
		{	/* Trace/walk.scm 239 */
			return
				BGl_findzd2lastzd2nodez00zztrace_walkz00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2830)))->BgL_valuez00));
		}

	}



/* &find-last-node-set-e1339 */
	obj_t BGl_z62findzd2lastzd2nodezd2setzd2e1339z62zztrace_walkz00(obj_t
		BgL_envz00_2831, obj_t BgL_nodez00_2832)
	{
		{	/* Trace/walk.scm 233 */
			return
				BGl_findzd2lastzd2nodez00zztrace_walkz00(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2832)))->BgL_bodyz00));
		}

	}



/* &find-last-node-let-f1337 */
	obj_t BGl_z62findzd2lastzd2nodezd2letzd2f1337z62zztrace_walkz00(obj_t
		BgL_envz00_2833, obj_t BgL_nodez00_2834)
	{
		{	/* Trace/walk.scm 227 */
			return
				BGl_findzd2lastzd2nodez00zztrace_walkz00(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2834)))->BgL_bodyz00));
		}

	}



/* &find-last-node-let-v1335 */
	obj_t BGl_z62findzd2lastzd2nodezd2letzd2v1335z62zztrace_walkz00(obj_t
		BgL_envz00_2835, obj_t BgL_nodez00_2836)
	{
		{	/* Trace/walk.scm 221 */
			return
				BGl_findzd2lastzd2nodez00zztrace_walkz00(
				(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2836)))->BgL_bodyz00));
		}

	}



/* &find-last-node-switc1333 */
	obj_t BGl_z62findzd2lastzd2nodezd2switc1333zb0zztrace_walkz00(obj_t
		BgL_envz00_2837, obj_t BgL_nodez00_2838)
	{
		{	/* Trace/walk.scm 212 */
			{	/* Trace/walk.scm 214 */
				bool_t BgL_test2330z00_3880;

				{	/* Trace/walk.scm 214 */
					obj_t BgL_tmpz00_3881;

					BgL_tmpz00_3881 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2838)))->BgL_clausesz00);
					BgL_test2330z00_3880 = PAIRP(BgL_tmpz00_3881);
				}
				if (BgL_test2330z00_3880)
					{	/* Trace/walk.scm 215 */
						obj_t BgL_arg1895z00_2962;

						BgL_arg1895z00_2962 =
							CDR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
								(((BgL_switchz00_bglt) COBJECT(
											((BgL_switchz00_bglt) BgL_nodez00_2838)))->
									BgL_clausesz00)));
						return BGl_findzd2lastzd2nodez00zztrace_walkz00(((BgL_nodez00_bglt)
								BgL_arg1895z00_2962));
					}
				else
					{	/* Trace/walk.scm 214 */
						return
							BGl_findzd2lastzd2sexpz00zztrace_walkz00(
							((obj_t)
								(((BgL_switchz00_bglt) COBJECT(
											((BgL_switchz00_bglt) BgL_nodez00_2838)))->BgL_testz00)));
					}
			}
		}

	}



/* &find-last-node-fail1331 */
	obj_t BGl_z62findzd2lastzd2nodezd2fail1331zb0zztrace_walkz00(obj_t
		BgL_envz00_2839, obj_t BgL_nodez00_2840)
	{
		{	/* Trace/walk.scm 206 */
			return
				BGl_findzd2lastzd2nodez00zztrace_walkz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2840)))->BgL_objz00));
		}

	}



/* &find-last-node-condi1329 */
	obj_t BGl_z62findzd2lastzd2nodezd2condi1329zb0zztrace_walkz00(obj_t
		BgL_envz00_2841, obj_t BgL_nodez00_2842)
	{
		{	/* Trace/walk.scm 200 */
			return
				BGl_findzd2lastzd2nodez00zztrace_walkz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2842)))->BgL_falsez00));
		}

	}



/* &find-last-node-setq1327 */
	obj_t BGl_z62findzd2lastzd2nodezd2setq1327zb0zztrace_walkz00(obj_t
		BgL_envz00_2843, obj_t BgL_nodez00_2844)
	{
		{	/* Trace/walk.scm 194 */
			return
				BGl_findzd2lastzd2nodez00zztrace_walkz00(
				(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2844)))->BgL_valuez00));
		}

	}



/* &find-last-node-exter1325 */
	obj_t BGl_z62findzd2lastzd2nodezd2exter1325zb0zztrace_walkz00(obj_t
		BgL_envz00_2845, obj_t BgL_nodez00_2846)
	{
		{	/* Trace/walk.scm 185 */
			if (NULLP(
					(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_2846)))->BgL_exprza2za2)))
				{	/* Trace/walk.scm 187 */
					return ((obj_t) ((BgL_externz00_bglt) BgL_nodez00_2846));
				}
			else
				{	/* Trace/walk.scm 188 */
					obj_t BgL_arg1884z00_2967;

					BgL_arg1884z00_2967 =
						CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
							(((BgL_externz00_bglt) COBJECT(
										((BgL_externz00_bglt) BgL_nodez00_2846)))->
								BgL_exprza2za2)));
					return BGl_findzd2lastzd2nodez00zztrace_walkz00(((BgL_nodez00_bglt)
							BgL_arg1884z00_2967));
				}
		}

	}



/* &find-last-node-funca1323 */
	obj_t BGl_z62findzd2lastzd2nodezd2funca1323zb0zztrace_walkz00(obj_t
		BgL_envz00_2847, obj_t BgL_nodez00_2848)
	{
		{	/* Trace/walk.scm 176 */
			{	/* Trace/walk.scm 178 */
				bool_t BgL_test2332z00_3916;

				{	/* Trace/walk.scm 178 */
					obj_t BgL_tmpz00_3917;

					BgL_tmpz00_3917 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2848)))->BgL_argsz00);
					BgL_test2332z00_3916 = PAIRP(BgL_tmpz00_3917);
				}
				if (BgL_test2332z00_3916)
					{	/* Trace/walk.scm 179 */
						obj_t BgL_arg1876z00_2969;

						BgL_arg1876z00_2969 =
							CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
								(((BgL_funcallz00_bglt) COBJECT(
											((BgL_funcallz00_bglt) BgL_nodez00_2848)))->
									BgL_argsz00)));
						return BGl_findzd2lastzd2nodez00zztrace_walkz00(((BgL_nodez00_bglt)
								BgL_arg1876z00_2969));
					}
				else
					{	/* Trace/walk.scm 178 */
						return
							BGl_findzd2lastzd2nodez00zztrace_walkz00(
							(((BgL_funcallz00_bglt) COBJECT(
										((BgL_funcallz00_bglt) BgL_nodez00_2848)))->BgL_funz00));
					}
			}
		}

	}



/* &find-last-node-app-l1321 */
	obj_t BGl_z62findzd2lastzd2nodezd2appzd2l1321z62zztrace_walkz00(obj_t
		BgL_envz00_2849, obj_t BgL_nodez00_2850)
	{
		{	/* Trace/walk.scm 170 */
			return
				BGl_findzd2lastzd2nodez00zztrace_walkz00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2850)))->BgL_argz00));
		}

	}



/* &find-last-node-app1319 */
	obj_t BGl_z62findzd2lastzd2nodezd2app1319zb0zztrace_walkz00(obj_t
		BgL_envz00_2851, obj_t BgL_nodez00_2852)
	{
		{	/* Trace/walk.scm 161 */
			{	/* Trace/walk.scm 163 */
				bool_t BgL_test2333z00_3933;

				{	/* Trace/walk.scm 163 */
					obj_t BgL_tmpz00_3934;

					BgL_tmpz00_3934 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2852)))->BgL_argsz00);
					BgL_test2333z00_3933 = PAIRP(BgL_tmpz00_3934);
				}
				if (BgL_test2333z00_3933)
					{	/* Trace/walk.scm 164 */
						obj_t BgL_arg1868z00_2972;

						BgL_arg1868z00_2972 =
							CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
								(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nodez00_2852)))->BgL_argsz00)));
						return
							BGl_findzd2lastzd2nodez00zztrace_walkz00(
							((BgL_nodez00_bglt) BgL_arg1868z00_2972));
					}
				else
					{	/* Trace/walk.scm 163 */
						return ((obj_t) ((BgL_appz00_bglt) BgL_nodez00_2852));
					}
			}
		}

	}



/* &find-last-node-sync1317 */
	obj_t BGl_z62findzd2lastzd2nodezd2sync1317zb0zztrace_walkz00(obj_t
		BgL_envz00_2853, obj_t BgL_nodez00_2854)
	{
		{	/* Trace/walk.scm 154 */
			return
				BGl_findzd2lastzd2nodez00zztrace_walkz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2854)))->BgL_bodyz00));
		}

	}



/* &find-last-node-seque1315 */
	obj_t BGl_z62findzd2lastzd2nodezd2seque1315zb0zztrace_walkz00(obj_t
		BgL_envz00_2855, obj_t BgL_nodez00_2856)
	{
		{	/* Trace/walk.scm 145 */
			if (NULLP(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2856)))->BgL_nodesz00)))
				{	/* Trace/walk.scm 147 */
					return ((obj_t) ((BgL_sequencez00_bglt) BgL_nodez00_2856));
				}
			else
				{	/* Trace/walk.scm 148 */
					obj_t BgL_arg1859z00_2975;

					BgL_arg1859z00_2975 =
						CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
							(((BgL_sequencez00_bglt) COBJECT(
										((BgL_sequencez00_bglt) BgL_nodez00_2856)))->
								BgL_nodesz00)));
					return BGl_findzd2lastzd2nodez00zztrace_walkz00(((BgL_nodez00_bglt)
							BgL_arg1859z00_2975));
				}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztrace_walkz00()
	{
		{	/* Trace/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zzast_letz00(((long) 469204214),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zztrace_isloopz00(((long) 332486941),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2215z00zztrace_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
