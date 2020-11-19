/*===========================================================================*/
/*   (Reduce/sbeta.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/sbeta.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
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

	typedef struct BgL_cfunz00_bgl
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
		obj_t BgL_argszd2typezd2;
		bool_t BgL_macrozf3zf3;
		bool_t BgL_infixzf3zf3;
		obj_t BgL_methodz00;
	}              *BgL_cfunz00_bglt;

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

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

	typedef struct BgL_literalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}                 *BgL_literalz00_bglt;

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

	typedef struct BgL_getfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		obj_t BgL_fnamez00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                  *BgL_getfieldz00_bglt;

	typedef struct BgL_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}              *BgL_vrefz00_bglt;

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


	static bool_t BGl_simplezf3ze70z14zzreduce_betaz00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2appzd2ly1417za2zzreduce_betaz00(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2condition1425z70zzreduce_betaz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzreduce_betaz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_za2czd2stringzd2lengthza2z00zzreduce_betaz00 = BUNSPEC;
	extern obj_t BGl_za2brealza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2boxzd2setz121437zb0zzreduce_betaz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2makezd2box1435za2zzreduce_betaz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzreduce_betaz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_za2czd2fixnumzf3za2z21zzreduce_betaz00 = BUNSPEC;
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2letzd2fun1429za2zzreduce_betaz00(obj_t, obj_t);
	static obj_t BGl_z62reducezd2betaz12za2zzreduce_betaz00(obj_t, obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	static BgL_nodez00_bglt
		BGl_nodezd2betazd2earlyzd2appz12zc0zzreduce_betaz00(BgL_appz00_bglt);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2jumpzd2exzd2i1433z70zzreduce_betaz00(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_za2czd2flonumzf3za2z21zzreduce_betaz00 = BUNSPEC;
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2cast1421z70zzreduce_betaz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2setq1423z70zzreduce_betaz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2app1439z70zzreduce_betaz00(obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t
		BGl_nodezd2betazd2predicatez12z12zzreduce_betaz00(BgL_appz00_bglt);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzreduce_betaz00();
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2letzd2var1411za2zzreduce_betaz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static bool_t BGl_dangerouszf3zf3zzreduce_betaz00(obj_t);
	static obj_t BGl_za2predicatesza2z00zzreduce_betaz00 = BUNSPEC;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_betaz00 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzreduce_betaz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzreduce_betaz00();
	extern obj_t BGl_getfieldz00zzast_nodez00;
	static obj_t BGl_nodezd2betaza2z12z62zzreduce_betaz00(obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_z62nodezd2betaz121408za2zzreduce_betaz00(obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2switch1427z70zzreduce_betaz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_nodez00_bglt);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	static long BGl_za2removedza2z00zzreduce_betaz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62nodezd2betaz12za2zzreduce_betaz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static bool_t BGl_iszd2argumentzf3z21zzreduce_betaz00(BgL_variablez00_bglt,
		obj_t);
	extern obj_t BGl_za2realza2z00zztype_cachez00;
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2setzd2exzd2it1431z70zzreduce_betaz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2sequence1413z70zzreduce_betaz00(obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzreduce_betaz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2sync1415z70zzreduce_betaz00(obj_t, obj_t);
	extern obj_t BGl_vrefz00zzast_nodez00;
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_occurzd2varzd2zzast_occurz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzreduce_betaz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_betaz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_betaz00();
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2funcall1419z70zzreduce_betaz00(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_makezd2argszd2listz00zzreduce_betaz00(obj_t, obj_t);
	static bool_t BGl_sidezd2effectzd2safezf3zf3zzreduce_betaz00(obj_t);
	extern obj_t BGl_za2bintza2z00zztype_cachez00;
	extern obj_t BGl_literalz00zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_predicatezf3zf3zzreduce_betaz00(BgL_appz00_bglt);
	static BgL_nodez00_bglt
		BGl_findzd2actualzd2expressionz00zzreduce_betaz00(BgL_nodez00_bglt);
	static bool_t BGl_argumentzf3zf3zzreduce_betaz00(BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t BGl_reducezd2betaz12zc0zzreduce_betaz00(obj_t);
	static obj_t __cnst[6];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2232z00zzreduce_betaz00,
		BgL_bgl_za762nodeza7d2betaza712255za7,
		BGl_z62nodezd2betaz121408za2zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2234z00zzreduce_betaz00,
		BgL_bgl_za762nodeza7d2betaza712256za7,
		BGl_z62nodezd2betaz12zd2letzd2var1411za2zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2236z00zzreduce_betaz00,
		BgL_bgl_za762nodeza7d2betaza712257za7,
		BGl_z62nodezd2betaz12zd2sequence1413z70zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2237z00zzreduce_betaz00,
		BgL_bgl_za762nodeza7d2betaza712258za7,
		BGl_z62nodezd2betaz12zd2sync1415z70zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2238z00zzreduce_betaz00,
		BgL_bgl_za762nodeza7d2betaza712259za7,
		BGl_z62nodezd2betaz12zd2appzd2ly1417za2zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2239z00zzreduce_betaz00,
		BgL_bgl_za762nodeza7d2betaza712260za7,
		BGl_z62nodezd2betaz12zd2funcall1419z70zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2240z00zzreduce_betaz00,
		BgL_bgl_za762nodeza7d2betaza712261za7,
		BGl_z62nodezd2betaz12zd2cast1421z70zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2241z00zzreduce_betaz00,
		BgL_bgl_za762nodeza7d2betaza712262za7,
		BGl_z62nodezd2betaz12zd2setq1423z70zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2242z00zzreduce_betaz00,
		BgL_bgl_za762nodeza7d2betaza712263za7,
		BGl_z62nodezd2betaz12zd2condition1425z70zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2243z00zzreduce_betaz00,
		BgL_bgl_za762nodeza7d2betaza712264za7,
		BGl_z62nodezd2betaz12zd2switch1427z70zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2244z00zzreduce_betaz00,
		BgL_bgl_za762nodeza7d2betaza712265za7,
		BGl_z62nodezd2betaz12zd2letzd2fun1429za2zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2245z00zzreduce_betaz00,
		BgL_bgl_za762nodeza7d2betaza712266za7,
		BGl_z62nodezd2betaz12zd2setzd2exzd2it1431z70zzreduce_betaz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2246z00zzreduce_betaz00,
		BgL_bgl_za762nodeza7d2betaza712267za7,
		BGl_z62nodezd2betaz12zd2jumpzd2exzd2i1433z70zzreduce_betaz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2247z00zzreduce_betaz00,
		BgL_bgl_za762nodeza7d2betaza712268za7,
		BGl_z62nodezd2betaz12zd2makezd2box1435za2zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2248z00zzreduce_betaz00,
		BgL_bgl_za762nodeza7d2betaza712269za7,
		BGl_z62nodezd2betaz12zd2boxzd2setz121437zb0zzreduce_betaz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2249z00zzreduce_betaz00,
		BgL_bgl_za762nodeza7d2betaza712270za7,
		BGl_z62nodezd2betaz12zd2app1439z70zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
		BgL_bgl_za762nodeza7d2betaza712271za7,
		BGl_z62nodezd2betaz12za2zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2228z00zzreduce_betaz00,
		BgL_bgl_string2228za700za7za7r2272za7, "      simple beta reduction  ", 29);
	      DEFINE_STRING(BGl_string2229z00zzreduce_betaz00,
		BgL_bgl_string2229za700za7za7r2273za7, "(removed: ", 10);
	      DEFINE_STRING(BGl_string2230z00zzreduce_betaz00,
		BgL_bgl_string2230za700za7za7r2274za7, "node-beta-predicate!", 20);
	      DEFINE_STRING(BGl_string2231z00zzreduce_betaz00,
		BgL_bgl_string2231za700za7za7r2275za7, "Illegal predicate", 17);
	      DEFINE_STRING(BGl_string2233z00zzreduce_betaz00,
		BgL_bgl_string2233za700za7za7r2276za7, "node-beta!1408", 14);
	      DEFINE_STRING(BGl_string2235z00zzreduce_betaz00,
		BgL_bgl_string2235za700za7za7r2277za7, "node-beta!", 10);
	      DEFINE_STRING(BGl_string2250z00zzreduce_betaz00,
		BgL_bgl_string2250za700za7za7r2278za7, "reduce_beta", 11);
	      DEFINE_STRING(BGl_string2251z00zzreduce_betaz00,
		BgL_bgl_string2251za700za7za7r2279za7,
		"bdb nesting $string-length c-flonum? c-fixnum? foreign ", 55);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_reducezd2betaz12zd2envz12zzreduce_betaz00,
		BgL_bgl_za762reduceza7d2beta2280z00,
		BGl_z62reducezd2betaz12za2zzreduce_betaz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2czd2stringzd2lengthza2z00zzreduce_betaz00));
		     ADD_ROOT((void *) (&BGl_za2czd2fixnumzf3za2z21zzreduce_betaz00));
		     ADD_ROOT((void *) (&BGl_za2czd2flonumzf3za2z21zzreduce_betaz00));
		     ADD_ROOT((void *) (&BGl_za2predicatesza2z00zzreduce_betaz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzreduce_betaz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzreduce_betaz00(long
		BgL_checksumz00_2954, char *BgL_fromz00_2955)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_betaz00))
				{
					BGl_requirezd2initializa7ationz75zzreduce_betaz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzreduce_betaz00();
					BGl_libraryzd2moduleszd2initz00zzreduce_betaz00();
					BGl_cnstzd2initzd2zzreduce_betaz00();
					BGl_importedzd2moduleszd2initz00zzreduce_betaz00();
					BGl_genericzd2initzd2zzreduce_betaz00();
					BGl_methodzd2initzd2zzreduce_betaz00();
					return BGl_toplevelzd2initzd2zzreduce_betaz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_betaz00()
	{
		{	/* Reduce/sbeta.scm 25 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"reduce_beta");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "reduce_beta");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "reduce_beta");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"reduce_beta");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"reduce_beta");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "reduce_beta");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"reduce_beta");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"reduce_beta");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_betaz00()
	{
		{	/* Reduce/sbeta.scm 25 */
			{	/* Reduce/sbeta.scm 25 */
				obj_t BgL_cportz00_2803;

				{	/* Reduce/sbeta.scm 25 */
					obj_t BgL_stringz00_2811;

					BgL_stringz00_2811 = BGl_string2251z00zzreduce_betaz00;
					{	/* Reduce/sbeta.scm 25 */
						obj_t BgL_startz00_2812;

						BgL_startz00_2812 = BINT(((long) 0));
						{	/* Reduce/sbeta.scm 25 */
							obj_t BgL_endz00_2813;

							BgL_endz00_2813 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2811)));
							{	/* Reduce/sbeta.scm 25 */

								BgL_cportz00_2803 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2811, BgL_startz00_2812, BgL_endz00_2813);
				}}}}
				{
					long BgL_iz00_2804;

					BgL_iz00_2804 = ((long) 5);
				BgL_loopz00_2805:
					if ((BgL_iz00_2804 == ((long) -1)))
						{	/* Reduce/sbeta.scm 25 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/sbeta.scm 25 */
							{	/* Reduce/sbeta.scm 25 */
								obj_t BgL_arg2253z00_2807;

								{	/* Reduce/sbeta.scm 25 */

									{	/* Reduce/sbeta.scm 25 */
										obj_t BgL_locationz00_2809;

										BgL_locationz00_2809 = BBOOL(((bool_t) 0));
										{	/* Reduce/sbeta.scm 25 */

											BgL_arg2253z00_2807 =
												BGl_readz00zz__readerz00(BgL_cportz00_2803,
												BgL_locationz00_2809);
										}
									}
								}
								{	/* Reduce/sbeta.scm 25 */
									int BgL_tmpz00_2983;

									BgL_tmpz00_2983 = (int) (BgL_iz00_2804);
									CNST_TABLE_SET(BgL_tmpz00_2983, BgL_arg2253z00_2807);
							}}
							{	/* Reduce/sbeta.scm 25 */
								int BgL_auxz00_2810;

								BgL_auxz00_2810 = (int) ((BgL_iz00_2804 - ((long) 1)));
								{
									long BgL_iz00_2988;

									BgL_iz00_2988 = (long) (BgL_auxz00_2810);
									BgL_iz00_2804 = BgL_iz00_2988;
									goto BgL_loopz00_2805;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzreduce_betaz00()
	{
		{	/* Reduce/sbeta.scm 25 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzreduce_betaz00()
	{
		{	/* Reduce/sbeta.scm 25 */
			BGl_za2removedza2z00zzreduce_betaz00 = ((long) 0);
			BGl_za2czd2fixnumzf3za2z21zzreduce_betaz00 = BUNSPEC;
			BGl_za2czd2flonumzf3za2z21zzreduce_betaz00 = BUNSPEC;
			BGl_za2czd2stringzd2lengthza2z00zzreduce_betaz00 = BUNSPEC;
			BGl_za2predicatesza2z00zzreduce_betaz00 = BNIL;
			return BUNSPEC;
		}

	}



/* reduce-beta! */
	BGL_EXPORTED_DEF obj_t BGl_reducezd2betaz12zc0zzreduce_betaz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Reduce/sbeta.scm 47 */
			{	/* Reduce/sbeta.scm 48 */
				obj_t BgL_list1443z00_1445;

				BgL_list1443z00_1445 =
					MAKE_YOUNG_PAIR(BGl_string2228z00zzreduce_betaz00, BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1443z00_1445);
			}
			BGl_occurzd2varzd2zzast_occurz00(BgL_globalsz00_3);
			BGl_za2removedza2z00zzreduce_betaz00 = ((long) 0);
			{	/* Reduce/sbeta.scm 55 */
				obj_t BgL_list1444z00_1446;

				BgL_list1444z00_1446 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
				BGl_za2czd2fixnumzf3za2z21zzreduce_betaz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 1)),
					BgL_list1444z00_1446);
			}
			{	/* Reduce/sbeta.scm 56 */
				obj_t BgL_list1445z00_1447;

				BgL_list1445z00_1447 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
				BGl_za2czd2flonumzf3za2z21zzreduce_betaz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 2)),
					BgL_list1445z00_1447);
			}
			{	/* Reduce/sbeta.scm 57 */
				obj_t BgL_list1446z00_1448;

				BgL_list1446z00_1448 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
				BGl_za2czd2stringzd2lengthza2z00zzreduce_betaz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 3)),
					BgL_list1446z00_1448);
			}
			{	/* Reduce/sbeta.scm 58 */
				obj_t BgL_list1447z00_1449;

				{	/* Reduce/sbeta.scm 58 */
					obj_t BgL_arg1448z00_1450;

					BgL_arg1448z00_1450 =
						MAKE_YOUNG_PAIR(BGl_za2czd2flonumzf3za2z21zzreduce_betaz00, BNIL);
					BgL_list1447z00_1449 =
						MAKE_YOUNG_PAIR(BGl_za2czd2fixnumzf3za2z21zzreduce_betaz00,
						BgL_arg1448z00_1450);
				}
				BGl_za2predicatesza2z00zzreduce_betaz00 = BgL_list1447z00_1449;
			}
			{
				obj_t BgL_l1324z00_1452;

				BgL_l1324z00_1452 = BgL_globalsz00_3;
			BgL_zc3z04anonymousza31449ze3z87_1453:
				if (PAIRP(BgL_l1324z00_1452))
					{	/* Reduce/sbeta.scm 60 */
						{	/* Reduce/sbeta.scm 61 */
							obj_t BgL_globalz00_1455;

							BgL_globalz00_1455 = CAR(BgL_l1324z00_1452);
							{	/* Reduce/sbeta.scm 61 */
								BgL_valuez00_bglt BgL_funz00_1456;

								BgL_funz00_1456 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_globalz00_1455))))->
									BgL_valuez00);
								{	/* Reduce/sbeta.scm 61 */
									obj_t BgL_nodez00_1457;

									BgL_nodez00_1457 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_funz00_1456)))->BgL_bodyz00);
									{	/* Reduce/sbeta.scm 62 */

										{	/* Reduce/sbeta.scm 63 */
											BgL_nodez00_bglt BgL_arg1461z00_1458;

											BgL_arg1461z00_1458 =
												BGl_nodezd2betaz12zc0zzreduce_betaz00(
												((BgL_nodez00_bglt) BgL_nodez00_1457));
											((((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_funz00_1456)))->
													BgL_bodyz00) =
												((obj_t) ((obj_t) BgL_arg1461z00_1458)), BUNSPEC);
										}
										BUNSPEC;
									}
								}
							}
						}
						{
							obj_t BgL_l1324z00_3022;

							BgL_l1324z00_3022 = CDR(BgL_l1324z00_1452);
							BgL_l1324z00_1452 = BgL_l1324z00_3022;
							goto BgL_zc3z04anonymousza31449ze3z87_1453;
						}
					}
				else
					{	/* Reduce/sbeta.scm 60 */
						((bool_t) 1);
					}
			}
			BGl_za2czd2fixnumzf3za2z21zzreduce_betaz00 = BUNSPEC;
			BGl_za2czd2flonumzf3za2z21zzreduce_betaz00 = BUNSPEC;
			BGl_za2czd2stringzd2lengthza2z00zzreduce_betaz00 = BUNSPEC;
			BGl_za2predicatesza2z00zzreduce_betaz00 = BNIL;
			{	/* Reduce/sbeta.scm 72 */
				obj_t BgL_list1463z00_1461;

				{	/* Reduce/sbeta.scm 72 */
					obj_t BgL_arg1464z00_1462;

					{	/* Reduce/sbeta.scm 72 */
						obj_t BgL_arg1465z00_1463;

						{	/* Reduce/sbeta.scm 72 */
							obj_t BgL_arg1474z00_1464;

							BgL_arg1474z00_1464 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
							BgL_arg1465z00_1463 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) ')')),
								BgL_arg1474z00_1464);
						}
						BgL_arg1464z00_1462 =
							MAKE_YOUNG_PAIR(BINT(BGl_za2removedza2z00zzreduce_betaz00),
							BgL_arg1465z00_1463);
					}
					BgL_list1463z00_1461 =
						MAKE_YOUNG_PAIR(BGl_string2229z00zzreduce_betaz00,
						BgL_arg1464z00_1462);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1463z00_1461);
			}
			return BgL_globalsz00_3;
		}

	}



/* &reduce-beta! */
	obj_t BGl_z62reducezd2betaz12za2zzreduce_betaz00(obj_t BgL_envz00_2751,
		obj_t BgL_globalsz00_2752)
	{
		{	/* Reduce/sbeta.scm 47 */
			return BGl_reducezd2betaz12zc0zzreduce_betaz00(BgL_globalsz00_2752);
		}

	}



/* find-actual-expression */
	BgL_nodez00_bglt
		BGl_findzd2actualzd2expressionz00zzreduce_betaz00(BgL_nodez00_bglt
		BgL_bodyz00_5)
	{
		{	/* Reduce/sbeta.scm 97 */
		BGl_findzd2actualzd2expressionz00zzreduce_betaz00:
			{	/* Reduce/sbeta.scm 98 */
				bool_t BgL_test2284z00_3034;

				{	/* Reduce/sbeta.scm 98 */
					bool_t BgL_res2128z00_2431;

					BgL_res2128z00_2431 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_bodyz00_5), BGl_sequencez00zzast_nodez00);
					BgL_test2284z00_3034 = BgL_res2128z00_2431;
				}
				if (BgL_test2284z00_3034)
					{	/* Reduce/sbeta.scm 100 */
						bool_t BgL_test2285z00_3037;

						if (NULLP(
								(((BgL_sequencez00_bglt) COBJECT(
											((BgL_sequencez00_bglt) BgL_bodyz00_5)))->BgL_nodesz00)))
							{	/* Reduce/sbeta.scm 100 */
								BgL_test2285z00_3037 = ((bool_t) 0);
							}
						else
							{	/* Reduce/sbeta.scm 100 */
								bool_t BgL_test2287z00_3042;

								{	/* Reduce/sbeta.scm 100 */
									obj_t BgL_tmpz00_3043;

									{	/* Reduce/sbeta.scm 100 */
										obj_t BgL_pairz00_2433;

										BgL_pairz00_2433 =
											(((BgL_sequencez00_bglt) COBJECT(
													((BgL_sequencez00_bglt) BgL_bodyz00_5)))->
											BgL_nodesz00);
										BgL_tmpz00_3043 = CDR(BgL_pairz00_2433);
									}
									BgL_test2287z00_3042 = NULLP(BgL_tmpz00_3043);
								}
								if (BgL_test2287z00_3042)
									{	/* Reduce/sbeta.scm 100 */
										BgL_test2285z00_3037 =
											NULLP(
											(((BgL_sequencez00_bglt) COBJECT(
														((BgL_sequencez00_bglt) BgL_bodyz00_5)))->
												BgL_metaz00));
									}
								else
									{	/* Reduce/sbeta.scm 100 */
										BgL_test2285z00_3037 = ((bool_t) 0);
									}
							}
						if (BgL_test2285z00_3037)
							{	/* Reduce/sbeta.scm 101 */
								obj_t BgL_arg1528z00_1477;

								{	/* Reduce/sbeta.scm 101 */
									obj_t BgL_pairz00_2436;

									BgL_pairz00_2436 =
										(((BgL_sequencez00_bglt) COBJECT(
												((BgL_sequencez00_bglt) BgL_bodyz00_5)))->BgL_nodesz00);
									BgL_arg1528z00_1477 = CAR(BgL_pairz00_2436);
								}
								{
									BgL_nodez00_bglt BgL_bodyz00_3054;

									BgL_bodyz00_3054 = ((BgL_nodez00_bglt) BgL_arg1528z00_1477);
									BgL_bodyz00_5 = BgL_bodyz00_3054;
									goto BGl_findzd2actualzd2expressionz00zzreduce_betaz00;
								}
							}
						else
							{	/* Reduce/sbeta.scm 100 */
								return BgL_bodyz00_5;
							}
					}
				else
					{	/* Reduce/sbeta.scm 98 */
						return BgL_bodyz00_5;
					}
			}
		}

	}



/* is-argument? */
	bool_t BGl_iszd2argumentzf3z21zzreduce_betaz00(BgL_variablez00_bglt
		BgL_varz00_6, obj_t BgL_bodyz00_7)
	{
		{	/* Reduce/sbeta.scm 108 */
			{	/* Reduce/sbeta.scm 110 */
				bool_t BgL_test2288z00_3056;

				{	/* Reduce/sbeta.scm 110 */
					bool_t BgL_res2133z00_2443;

					{	/* Reduce/sbeta.scm 207 */
						bool_t BgL_test2289z00_3057;

						{	/* Reduce/sbeta.scm 207 */
							bool_t BgL_res2132z00_2441;

							BgL_res2132z00_2441 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t)
									((BgL_nodez00_bglt) BgL_bodyz00_7)), BGl_varz00zzast_nodez00);
							BgL_test2289z00_3057 = BgL_res2132z00_2441;
						}
						if (BgL_test2289z00_3057)
							{	/* Reduce/sbeta.scm 207 */
								BgL_res2133z00_2443 =
									(
									((obj_t)
										(((BgL_varz00_bglt) COBJECT(
													((BgL_varz00_bglt)
														((BgL_nodez00_bglt) BgL_bodyz00_7))))->
											BgL_variablez00)) == ((obj_t) BgL_varz00_6));
							}
						else
							{	/* Reduce/sbeta.scm 207 */
								BgL_res2133z00_2443 = ((bool_t) 0);
							}
					}
					BgL_test2288z00_3056 = BgL_res2133z00_2443;
				}
				if (BgL_test2288z00_3056)
					{	/* Reduce/sbeta.scm 110 */
						return ((bool_t) 1);
					}
				else
					{	/* Reduce/sbeta.scm 110 */
						if (BGl_isazf3zf3zz__objectz00(BgL_bodyz00_7,
								BGl_castz00zzast_nodez00))
							{	/* Reduce/sbeta.scm 114 */
								bool_t BgL_res2136z00_2451;

								{	/* Reduce/sbeta.scm 114 */
									BgL_nodez00_bglt BgL_nodez00_2446;

									BgL_nodez00_2446 =
										(((BgL_castz00_bglt) COBJECT(
												((BgL_castz00_bglt) BgL_bodyz00_7)))->BgL_argz00);
									{	/* Reduce/sbeta.scm 207 */
										bool_t BgL_test2291z00_3071;

										{	/* Reduce/sbeta.scm 207 */
											bool_t BgL_res2135z00_2449;

											BgL_res2135z00_2449 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_nodez00_2446), BGl_varz00zzast_nodez00);
											BgL_test2291z00_3071 = BgL_res2135z00_2449;
										}
										if (BgL_test2291z00_3071)
											{	/* Reduce/sbeta.scm 207 */
												BgL_res2136z00_2451 =
													(
													((obj_t)
														(((BgL_varz00_bglt) COBJECT(
																	((BgL_varz00_bglt) BgL_nodez00_2446)))->
															BgL_variablez00)) == ((obj_t) BgL_varz00_6));
											}
										else
											{	/* Reduce/sbeta.scm 207 */
												BgL_res2136z00_2451 = ((bool_t) 0);
											}
									}
								}
								return BgL_res2136z00_2451;
							}
						else
							{	/* Reduce/sbeta.scm 112 */
								return ((bool_t) 0);
							}
					}
			}
		}

	}



/* argument? */
	bool_t BGl_argumentzf3zf3zzreduce_betaz00(BgL_variablez00_bglt BgL_varz00_8,
		obj_t BgL_argsz00_9)
	{
		{	/* Reduce/sbeta.scm 121 */
			{
				obj_t BgL_argsz00_1490;

				BgL_argsz00_1490 = BgL_argsz00_9;
			BgL_zc3z04anonymousza31562ze3z87_1491:
				if (NULLP(BgL_argsz00_1490))
					{	/* Reduce/sbeta.scm 124 */
						return ((bool_t) 0);
					}
				else
					{	/* Reduce/sbeta.scm 126 */
						bool_t BgL_test2293z00_3081;

						{	/* Reduce/sbeta.scm 126 */
							obj_t BgL_arg1575z00_1496;

							BgL_arg1575z00_1496 = CAR(((obj_t) BgL_argsz00_1490));
							BgL_test2293z00_3081 =
								BGl_iszd2argumentzf3z21zzreduce_betaz00(BgL_varz00_8,
								BgL_arg1575z00_1496);
						}
						if (BgL_test2293z00_3081)
							{	/* Reduce/sbeta.scm 126 */
								return ((bool_t) 1);
							}
						else
							{	/* Reduce/sbeta.scm 129 */
								obj_t BgL_arg1573z00_1495;

								BgL_arg1573z00_1495 = CDR(((obj_t) BgL_argsz00_1490));
								{
									obj_t BgL_argsz00_3087;

									BgL_argsz00_3087 = BgL_arg1573z00_1495;
									BgL_argsz00_1490 = BgL_argsz00_3087;
									goto BgL_zc3z04anonymousza31562ze3z87_1491;
								}
							}
					}
			}
		}

	}



/* make-args-list */
	obj_t BGl_makezd2argszd2listz00zzreduce_betaz00(obj_t BgL_bindingsz00_10,
		obj_t BgL_argsz00_11)
	{
		{	/* Reduce/sbeta.scm 134 */
			if (NULLP(BgL_argsz00_11))
				{	/* Reduce/sbeta.scm 135 */
					return BNIL;
				}
			else
				{	/* Reduce/sbeta.scm 135 */
					obj_t BgL_head1328z00_1500;

					{	/* Reduce/sbeta.scm 135 */
						obj_t BgL_res2139z00_2456;

						BgL_res2139z00_2456 = MAKE_YOUNG_PAIR(BNIL, BNIL);
						BgL_head1328z00_1500 = BgL_res2139z00_2456;
					}
					{
						obj_t BgL_l1326z00_1502;
						obj_t BgL_tail1329z00_1503;

						BgL_l1326z00_1502 = BgL_argsz00_11;
						BgL_tail1329z00_1503 = BgL_head1328z00_1500;
					BgL_zc3z04anonymousza31577ze3z87_1504:
						if (NULLP(BgL_l1326z00_1502))
							{	/* Reduce/sbeta.scm 135 */
								return CDR(BgL_head1328z00_1500);
							}
						else
							{	/* Reduce/sbeta.scm 135 */
								obj_t BgL_newtail1330z00_1506;

								{	/* Reduce/sbeta.scm 135 */
									obj_t BgL_arg1584z00_1508;

									{	/* Reduce/sbeta.scm 135 */
										obj_t BgL_az00_1509;

										BgL_az00_1509 = CAR(((obj_t) BgL_l1326z00_1502));
										{
											obj_t BgL_bindingsz00_1511;

											BgL_bindingsz00_1511 = BgL_bindingsz00_10;
										BgL_zc3z04anonymousza31585ze3z87_1512:
											if (NULLP(BgL_bindingsz00_1511))
												{	/* Reduce/sbeta.scm 138 */
													BgL_arg1584z00_1508 = BgL_az00_1509;
												}
											else
												{	/* Reduce/sbeta.scm 140 */
													bool_t BgL_test2297z00_3098;

													{	/* Reduce/sbeta.scm 140 */
														obj_t BgL_arg1593z00_1517;

														{	/* Reduce/sbeta.scm 140 */
															obj_t BgL_pairz00_2464;

															BgL_pairz00_2464 =
																CAR(((obj_t) BgL_bindingsz00_1511));
															BgL_arg1593z00_1517 = CAR(BgL_pairz00_2464);
														}
														BgL_test2297z00_3098 =
															BGl_iszd2argumentzf3z21zzreduce_betaz00(
															((BgL_variablez00_bglt) BgL_arg1593z00_1517),
															BgL_az00_1509);
													}
													if (BgL_test2297z00_3098)
														{	/* Reduce/sbeta.scm 141 */
															obj_t BgL_pairz00_2468;

															BgL_pairz00_2468 =
																CAR(((obj_t) BgL_bindingsz00_1511));
															BgL_arg1584z00_1508 = CDR(BgL_pairz00_2468);
														}
													else
														{	/* Reduce/sbeta.scm 143 */
															obj_t BgL_arg1592z00_1516;

															BgL_arg1592z00_1516 =
																CDR(((obj_t) BgL_bindingsz00_1511));
															{
																obj_t BgL_bindingsz00_3109;

																BgL_bindingsz00_3109 = BgL_arg1592z00_1516;
																BgL_bindingsz00_1511 = BgL_bindingsz00_3109;
																goto BgL_zc3z04anonymousza31585ze3z87_1512;
															}
														}
												}
										}
									}
									{	/* Reduce/sbeta.scm 135 */
										obj_t BgL_res2142z00_2470;

										BgL_res2142z00_2470 =
											MAKE_YOUNG_PAIR(BgL_arg1584z00_1508, BNIL);
										BgL_newtail1330z00_1506 = BgL_res2142z00_2470;
									}
								}
								SET_CDR(BgL_tail1329z00_1503, BgL_newtail1330z00_1506);
								{	/* Reduce/sbeta.scm 135 */
									obj_t BgL_arg1582z00_1507;

									BgL_arg1582z00_1507 = CDR(((obj_t) BgL_l1326z00_1502));
									{
										obj_t BgL_tail1329z00_3115;
										obj_t BgL_l1326z00_3114;

										BgL_l1326z00_3114 = BgL_arg1582z00_1507;
										BgL_tail1329z00_3115 = BgL_newtail1330z00_1506;
										BgL_tail1329z00_1503 = BgL_tail1329z00_3115;
										BgL_l1326z00_1502 = BgL_l1326z00_3114;
										goto BgL_zc3z04anonymousza31577ze3z87_1504;
									}
								}
							}
					}
				}
		}

	}



/* dangerous? */
	bool_t BGl_dangerouszf3zf3zzreduce_betaz00(obj_t BgL_exprz00_12)
	{
		{	/* Reduce/sbeta.scm 149 */
			{	/* Reduce/sbeta.scm 150 */
				BgL_nodez00_bglt BgL_exprz00_1520;

				BgL_exprz00_1520 =
					BGl_findzd2actualzd2expressionz00zzreduce_betaz00(
					((BgL_nodez00_bglt) BgL_exprz00_12));
				{	/* Reduce/sbeta.scm 152 */
					bool_t BgL_test2298z00_3118;

					{	/* Reduce/sbeta.scm 152 */
						bool_t BgL_test2299z00_3119;

						{	/* Reduce/sbeta.scm 152 */
							bool_t BgL_res2143z00_2473;

							BgL_res2143z00_2473 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_exprz00_1520), BGl_varz00zzast_nodez00);
							BgL_test2299z00_3119 = BgL_res2143z00_2473;
						}
						if (BgL_test2299z00_3119)
							{	/* Reduce/sbeta.scm 152 */
								BgL_test2298z00_3118 = ((bool_t) 1);
							}
						else
							{	/* Reduce/sbeta.scm 152 */
								bool_t BgL_test2300z00_3122;

								{	/* Reduce/sbeta.scm 152 */
									bool_t BgL_res2144z00_2474;

									BgL_res2144z00_2474 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_exprz00_1520), BGl_atomz00zzast_nodez00);
									BgL_test2300z00_3122 = BgL_res2144z00_2474;
								}
								if (BgL_test2300z00_3122)
									{	/* Reduce/sbeta.scm 152 */
										BgL_test2298z00_3118 = ((bool_t) 1);
									}
								else
									{	/* Reduce/sbeta.scm 152 */
										bool_t BgL_res2145z00_2475;

										BgL_res2145z00_2475 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_exprz00_1520), BGl_kwotez00zzast_nodez00);
										BgL_test2298z00_3118 = BgL_res2145z00_2475;
									}
							}
					}
					if (BgL_test2298z00_3118)
						{	/* Reduce/sbeta.scm 152 */
							return ((bool_t) 0);
						}
					else
						{	/* Reduce/sbeta.scm 154 */
							bool_t BgL_test2301z00_3127;

							{	/* Reduce/sbeta.scm 154 */
								bool_t BgL_res2146z00_2476;

								BgL_res2146z00_2476 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_exprz00_1520), BGl_vrefz00zzast_nodez00);
								BgL_test2301z00_3127 = BgL_res2146z00_2476;
							}
							if (BgL_test2301z00_3127)
								{	/* Reduce/sbeta.scm 155 */
									obj_t BgL_g1333z00_1525;

									BgL_g1333z00_1525 =
										(((BgL_externz00_bglt) COBJECT(
												((BgL_externz00_bglt)
													((BgL_vrefz00_bglt) BgL_exprz00_1520))))->
										BgL_exprza2za2);
									{
										obj_t BgL_l1331z00_1527;

										BgL_l1331z00_1527 = BgL_g1333z00_1525;
									BgL_zc3z04anonymousza31598ze3z87_1528:
										if (NULLP(BgL_l1331z00_1527))
											{	/* Reduce/sbeta.scm 155 */
												return ((bool_t) 0);
											}
										else
											{	/* Reduce/sbeta.scm 155 */
												bool_t BgL__ortest_1334z00_1530;

												{	/* Reduce/sbeta.scm 155 */
													obj_t BgL_arg1605z00_1532;

													BgL_arg1605z00_1532 =
														CAR(((obj_t) BgL_l1331z00_1527));
													BgL__ortest_1334z00_1530 =
														BGl_dangerouszf3zf3zzreduce_betaz00
														(BgL_arg1605z00_1532);
												}
												if (BgL__ortest_1334z00_1530)
													{	/* Reduce/sbeta.scm 155 */
														return BgL__ortest_1334z00_1530;
													}
												else
													{	/* Reduce/sbeta.scm 155 */
														obj_t BgL_arg1604z00_1531;

														BgL_arg1604z00_1531 =
															CDR(((obj_t) BgL_l1331z00_1527));
														{
															obj_t BgL_l1331z00_3141;

															BgL_l1331z00_3141 = BgL_arg1604z00_1531;
															BgL_l1331z00_1527 = BgL_l1331z00_3141;
															goto BgL_zc3z04anonymousza31598ze3z87_1528;
														}
													}
											}
									}
								}
							else
								{	/* Reduce/sbeta.scm 156 */
									bool_t BgL_test2304z00_3142;

									{	/* Reduce/sbeta.scm 156 */
										bool_t BgL_res2148z00_2481;

										BgL_res2148z00_2481 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_exprz00_1520), BGl_getfieldz00zzast_nodez00);
										BgL_test2304z00_3142 = BgL_res2148z00_2481;
									}
									if (BgL_test2304z00_3142)
										{	/* Reduce/sbeta.scm 157 */
											obj_t BgL_g1337z00_1535;

											BgL_g1337z00_1535 =
												(((BgL_externz00_bglt) COBJECT(
														((BgL_externz00_bglt)
															((BgL_getfieldz00_bglt) BgL_exprz00_1520))))->
												BgL_exprza2za2);
											{
												obj_t BgL_l1335z00_1537;

												BgL_l1335z00_1537 = BgL_g1337z00_1535;
											BgL_zc3z04anonymousza31607ze3z87_1538:
												if (NULLP(BgL_l1335z00_1537))
													{	/* Reduce/sbeta.scm 157 */
														return ((bool_t) 0);
													}
												else
													{	/* Reduce/sbeta.scm 157 */
														bool_t BgL__ortest_1338z00_1540;

														{	/* Reduce/sbeta.scm 157 */
															obj_t BgL_arg1612z00_1542;

															BgL_arg1612z00_1542 =
																CAR(((obj_t) BgL_l1335z00_1537));
															BgL__ortest_1338z00_1540 =
																BGl_dangerouszf3zf3zzreduce_betaz00
																(BgL_arg1612z00_1542);
														}
														if (BgL__ortest_1338z00_1540)
															{	/* Reduce/sbeta.scm 157 */
																return BgL__ortest_1338z00_1540;
															}
														else
															{	/* Reduce/sbeta.scm 157 */
																obj_t BgL_arg1611z00_1541;

																BgL_arg1611z00_1541 =
																	CDR(((obj_t) BgL_l1335z00_1537));
																{
																	obj_t BgL_l1335z00_3156;

																	BgL_l1335z00_3156 = BgL_arg1611z00_1541;
																	BgL_l1335z00_1537 = BgL_l1335z00_3156;
																	goto BgL_zc3z04anonymousza31607ze3z87_1538;
																}
															}
													}
											}
										}
									else
										{	/* Reduce/sbeta.scm 158 */
											bool_t BgL_test2307z00_3157;

											{	/* Reduce/sbeta.scm 158 */
												bool_t BgL_res2150z00_2486;

												BgL_res2150z00_2486 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_exprz00_1520), BGl_appz00zzast_nodez00);
												BgL_test2307z00_3157 = BgL_res2150z00_2486;
											}
											if (BgL_test2307z00_3157)
												{	/* Reduce/sbeta.scm 162 */
													BgL_variablez00_bglt BgL_varz00_1546;

													BgL_varz00_1546 =
														(((BgL_varz00_bglt) COBJECT(
																(((BgL_appz00_bglt) COBJECT(
																			((BgL_appz00_bglt) BgL_exprz00_1520)))->
																	BgL_funz00)))->BgL_variablez00);
													{	/* Reduce/sbeta.scm 162 */
														BgL_valuez00_bglt BgL_valz00_1547;

														BgL_valz00_1547 =
															(((BgL_variablez00_bglt)
																COBJECT(BgL_varz00_1546))->BgL_valuez00);
														{	/* Reduce/sbeta.scm 163 */

															{	/* Reduce/sbeta.scm 164 */
																bool_t BgL_test2308z00_3164;

																{	/* Reduce/sbeta.scm 164 */
																	bool_t BgL_test2309z00_3165;

																	{	/* Reduce/sbeta.scm 164 */
																		bool_t BgL_res2151z00_2489;

																		BgL_res2151z00_2489 =
																			BGl_isazf3zf3zz__objectz00(
																			((obj_t) BgL_varz00_1546),
																			BGl_globalz00zzast_varz00);
																		BgL_test2309z00_3165 = BgL_res2151z00_2489;
																	}
																	if (BgL_test2309z00_3165)
																		{	/* Reduce/sbeta.scm 165 */
																			bool_t BgL_test2310z00_3168;

																			{	/* Reduce/sbeta.scm 165 */
																				bool_t BgL_res2152z00_2490;

																				BgL_res2152z00_2490 =
																					BGl_isazf3zf3zz__objectz00(
																					((obj_t) BgL_valz00_1547),
																					BGl_cfunz00zzast_varz00);
																				BgL_test2310z00_3168 =
																					BgL_res2152z00_2490;
																			}
																			if (BgL_test2310z00_3168)
																				{	/* Reduce/sbeta.scm 165 */
																					if (
																						(((BgL_cfunz00_bglt) COBJECT(
																									((BgL_cfunz00_bglt)
																										BgL_valz00_1547)))->
																							BgL_macrozf3zf3))
																						{	/* Reduce/sbeta.scm 166 */
																							if (CBOOL
																								(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																									(CNST_TABLE_REF(((long) 4)),
																										(((BgL_globalz00_bglt)
																												COBJECT((
																														(BgL_globalz00_bglt)
																														BgL_varz00_1546)))->
																											BgL_pragmaz00))))
																								{	/* Reduce/sbeta.scm 167 */
																									BgL_test2308z00_3164 =
																										((bool_t) 0);
																								}
																							else
																								{	/* Reduce/sbeta.scm 167 */
																									BgL_test2308z00_3164 =
																										((bool_t) 1);
																								}
																						}
																					else
																						{	/* Reduce/sbeta.scm 166 */
																							BgL_test2308z00_3164 =
																								((bool_t) 0);
																						}
																				}
																			else
																				{	/* Reduce/sbeta.scm 165 */
																					BgL_test2308z00_3164 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Reduce/sbeta.scm 164 */
																			BgL_test2308z00_3164 = ((bool_t) 0);
																		}
																}
																if (BgL_test2308z00_3164)
																	{	/* Reduce/sbeta.scm 164 */
																		return ((bool_t) 1);
																	}
																else
																	{	/* Reduce/sbeta.scm 169 */
																		obj_t BgL_g1341z00_1555;

																		BgL_g1341z00_1555 =
																			(((BgL_appz00_bglt) COBJECT(
																					((BgL_appz00_bglt)
																						BgL_exprz00_1520)))->BgL_argsz00);
																		{
																			obj_t BgL_l1339z00_1557;

																			BgL_l1339z00_1557 = BgL_g1341z00_1555;
																		BgL_zc3z04anonymousza31629ze3z87_1558:
																			if (NULLP(BgL_l1339z00_1557))
																				{	/* Reduce/sbeta.scm 169 */
																					return ((bool_t) 0);
																				}
																			else
																				{	/* Reduce/sbeta.scm 169 */
																					bool_t BgL__ortest_1342z00_1560;

																					{	/* Reduce/sbeta.scm 169 */
																						obj_t BgL_arg1634z00_1562;

																						BgL_arg1634z00_1562 =
																							CAR(((obj_t) BgL_l1339z00_1557));
																						BgL__ortest_1342z00_1560 =
																							BGl_dangerouszf3zf3zzreduce_betaz00
																							(BgL_arg1634z00_1562);
																					}
																					if (BgL__ortest_1342z00_1560)
																						{	/* Reduce/sbeta.scm 169 */
																							return BgL__ortest_1342z00_1560;
																						}
																					else
																						{	/* Reduce/sbeta.scm 169 */
																							obj_t BgL_arg1631z00_1561;

																							BgL_arg1631z00_1561 =
																								CDR(
																								((obj_t) BgL_l1339z00_1557));
																							{
																								obj_t BgL_l1339z00_3190;

																								BgL_l1339z00_3190 =
																									BgL_arg1631z00_1561;
																								BgL_l1339z00_1557 =
																									BgL_l1339z00_3190;
																								goto
																									BgL_zc3z04anonymousza31629ze3z87_1558;
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
												{	/* Reduce/sbeta.scm 158 */
													return ((bool_t) 1);
												}
										}
								}
						}
				}
			}
		}

	}



/* side-effect-safe? */
	bool_t BGl_sidezd2effectzd2safezf3zf3zzreduce_betaz00(obj_t BgL_exprz00_13)
	{
		{	/* Reduce/sbeta.scm 180 */
			{	/* Reduce/sbeta.scm 181 */
				BgL_nodez00_bglt BgL_exprz00_1572;

				BgL_exprz00_1572 =
					BGl_findzd2actualzd2expressionz00zzreduce_betaz00(
					((BgL_nodez00_bglt) BgL_exprz00_13));
				{	/* Reduce/sbeta.scm 183 */
					bool_t BgL_test2315z00_3193;

					{	/* Reduce/sbeta.scm 183 */
						bool_t BgL_test2316z00_3194;

						{	/* Reduce/sbeta.scm 183 */
							bool_t BgL_res2154z00_2496;

							BgL_res2154z00_2496 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_exprz00_1572), BGl_varz00zzast_nodez00);
							BgL_test2316z00_3194 = BgL_res2154z00_2496;
						}
						if (BgL_test2316z00_3194)
							{	/* Reduce/sbeta.scm 183 */
								BgL_test2315z00_3193 = ((bool_t) 1);
							}
						else
							{	/* Reduce/sbeta.scm 183 */
								bool_t BgL_test2317z00_3197;

								{	/* Reduce/sbeta.scm 183 */
									bool_t BgL_res2155z00_2497;

									BgL_res2155z00_2497 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_exprz00_1572), BGl_atomz00zzast_nodez00);
									BgL_test2317z00_3197 = BgL_res2155z00_2497;
								}
								if (BgL_test2317z00_3197)
									{	/* Reduce/sbeta.scm 183 */
										BgL_test2315z00_3193 = ((bool_t) 1);
									}
								else
									{	/* Reduce/sbeta.scm 183 */
										bool_t BgL_res2156z00_2498;

										BgL_res2156z00_2498 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_exprz00_1572), BGl_kwotez00zzast_nodez00);
										BgL_test2315z00_3193 = BgL_res2156z00_2498;
									}
							}
					}
					if (BgL_test2315z00_3193)
						{	/* Reduce/sbeta.scm 183 */
							return ((bool_t) 1);
						}
					else
						{	/* Reduce/sbeta.scm 185 */
							bool_t BgL_test2318z00_3202;

							{	/* Reduce/sbeta.scm 185 */
								bool_t BgL_res2157z00_2499;

								BgL_res2157z00_2499 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_exprz00_1572), BGl_vrefz00zzast_nodez00);
								BgL_test2318z00_3202 = BgL_res2157z00_2499;
							}
							if (BgL_test2318z00_3202)
								{	/* Reduce/sbeta.scm 186 */
									obj_t BgL_g1345z00_1577;

									BgL_g1345z00_1577 =
										(((BgL_externz00_bglt) COBJECT(
												((BgL_externz00_bglt)
													((BgL_vrefz00_bglt) BgL_exprz00_1572))))->
										BgL_exprza2za2);
									{
										obj_t BgL_l1343z00_1579;

										BgL_l1343z00_1579 = BgL_g1345z00_1577;
									BgL_zc3z04anonymousza31645ze3z87_1580:
										if (NULLP(BgL_l1343z00_1579))
											{	/* Reduce/sbeta.scm 186 */
												return ((bool_t) 1);
											}
										else
											{	/* Reduce/sbeta.scm 186 */
												bool_t BgL_test2320z00_3210;

												{	/* Reduce/sbeta.scm 186 */
													obj_t BgL_arg1662z00_1585;

													BgL_arg1662z00_1585 =
														CAR(((obj_t) BgL_l1343z00_1579));
													BgL_test2320z00_3210 =
														BGl_sidezd2effectzd2safezf3zf3zzreduce_betaz00
														(BgL_arg1662z00_1585);
												}
												if (BgL_test2320z00_3210)
													{	/* Reduce/sbeta.scm 186 */
														obj_t BgL_arg1652z00_1584;

														BgL_arg1652z00_1584 =
															CDR(((obj_t) BgL_l1343z00_1579));
														{
															obj_t BgL_l1343z00_3216;

															BgL_l1343z00_3216 = BgL_arg1652z00_1584;
															BgL_l1343z00_1579 = BgL_l1343z00_3216;
															goto BgL_zc3z04anonymousza31645ze3z87_1580;
														}
													}
												else
													{	/* Reduce/sbeta.scm 186 */
														return ((bool_t) 0);
													}
											}
									}
								}
							else
								{	/* Reduce/sbeta.scm 187 */
									bool_t BgL_test2321z00_3217;

									{	/* Reduce/sbeta.scm 187 */
										bool_t BgL_res2159z00_2504;

										BgL_res2159z00_2504 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_exprz00_1572), BGl_getfieldz00zzast_nodez00);
										BgL_test2321z00_3217 = BgL_res2159z00_2504;
									}
									if (BgL_test2321z00_3217)
										{	/* Reduce/sbeta.scm 188 */
											obj_t BgL_g1349z00_1588;

											BgL_g1349z00_1588 =
												(((BgL_externz00_bglt) COBJECT(
														((BgL_externz00_bglt)
															((BgL_getfieldz00_bglt) BgL_exprz00_1572))))->
												BgL_exprza2za2);
											{
												obj_t BgL_l1347z00_1590;

												BgL_l1347z00_1590 = BgL_g1349z00_1588;
											BgL_zc3z04anonymousza31664ze3z87_1591:
												if (NULLP(BgL_l1347z00_1590))
													{	/* Reduce/sbeta.scm 188 */
														return ((bool_t) 1);
													}
												else
													{	/* Reduce/sbeta.scm 188 */
														bool_t BgL_test2323z00_3225;

														{	/* Reduce/sbeta.scm 188 */
															obj_t BgL_arg1669z00_1596;

															BgL_arg1669z00_1596 =
																CAR(((obj_t) BgL_l1347z00_1590));
															BgL_test2323z00_3225 =
																BGl_sidezd2effectzd2safezf3zf3zzreduce_betaz00
																(BgL_arg1669z00_1596);
														}
														if (BgL_test2323z00_3225)
															{	/* Reduce/sbeta.scm 188 */
																obj_t BgL_arg1667z00_1595;

																BgL_arg1667z00_1595 =
																	CDR(((obj_t) BgL_l1347z00_1590));
																{
																	obj_t BgL_l1347z00_3231;

																	BgL_l1347z00_3231 = BgL_arg1667z00_1595;
																	BgL_l1347z00_1590 = BgL_l1347z00_3231;
																	goto BgL_zc3z04anonymousza31664ze3z87_1591;
																}
															}
														else
															{	/* Reduce/sbeta.scm 188 */
																return ((bool_t) 0);
															}
													}
											}
										}
									else
										{	/* Reduce/sbeta.scm 189 */
											bool_t BgL_test2324z00_3232;

											{	/* Reduce/sbeta.scm 189 */
												bool_t BgL_res2161z00_2509;

												BgL_res2161z00_2509 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_exprz00_1572), BGl_appz00zzast_nodez00);
												BgL_test2324z00_3232 = BgL_res2161z00_2509;
											}
											if (BgL_test2324z00_3232)
												{	/* Reduce/sbeta.scm 189 */
													if (CBOOL(
															(((BgL_funz00_bglt) COBJECT(
																		((BgL_funz00_bglt)
																			(((BgL_variablez00_bglt) COBJECT(
																						(((BgL_varz00_bglt) COBJECT(
																									(((BgL_appz00_bglt) COBJECT(
																												((BgL_appz00_bglt)
																													BgL_exprz00_1572)))->
																										BgL_funz00)))->
																							BgL_variablez00)))->
																				BgL_valuez00))))->
																BgL_sidezd2effectzd2)))
														{	/* Reduce/sbeta.scm 193 */
															return ((bool_t) 0);
														}
													else
														{	/* Reduce/sbeta.scm 194 */
															obj_t BgL_g1353z00_1604;

															BgL_g1353z00_1604 =
																(((BgL_appz00_bglt) COBJECT(
																		((BgL_appz00_bglt) BgL_exprz00_1572)))->
																BgL_argsz00);
															{
																obj_t BgL_l1351z00_1606;

																BgL_l1351z00_1606 = BgL_g1353z00_1604;
															BgL_zc3z04anonymousza31687ze3z87_1607:
																if (NULLP(BgL_l1351z00_1606))
																	{	/* Reduce/sbeta.scm 194 */
																		return ((bool_t) 1);
																	}
																else
																	{	/* Reduce/sbeta.scm 194 */
																		bool_t BgL_test2327z00_3247;

																		{	/* Reduce/sbeta.scm 194 */
																			obj_t BgL_arg1695z00_1612;

																			BgL_arg1695z00_1612 =
																				CAR(((obj_t) BgL_l1351z00_1606));
																			BgL_test2327z00_3247 =
																				BGl_sidezd2effectzd2safezf3zf3zzreduce_betaz00
																				(BgL_arg1695z00_1612);
																		}
																		if (BgL_test2327z00_3247)
																			{	/* Reduce/sbeta.scm 194 */
																				obj_t BgL_arg1692z00_1611;

																				BgL_arg1692z00_1611 =
																					CDR(((obj_t) BgL_l1351z00_1606));
																				{
																					obj_t BgL_l1351z00_3253;

																					BgL_l1351z00_3253 =
																						BgL_arg1692z00_1611;
																					BgL_l1351z00_1606 = BgL_l1351z00_3253;
																					goto
																						BgL_zc3z04anonymousza31687ze3z87_1607;
																				}
																			}
																		else
																			{	/* Reduce/sbeta.scm 194 */
																				return ((bool_t) 0);
																			}
																	}
															}
														}
												}
											else
												{	/* Reduce/sbeta.scm 189 */
													return ((bool_t) 0);
												}
										}
								}
						}
				}
			}
		}

	}



/* predicate? */
	obj_t BGl_predicatezf3zf3zzreduce_betaz00(BgL_appz00_bglt BgL_nodez00_32)
	{
		{	/* Reduce/sbeta.scm 448 */
			{	/* Reduce/sbeta.scm 450 */
				bool_t BgL_test2328z00_3254;

				{	/* Reduce/sbeta.scm 450 */
					obj_t BgL_tmpz00_3255;

					BgL_tmpz00_3255 =
						(((BgL_appz00_bglt) COBJECT(BgL_nodez00_32))->BgL_argsz00);
					BgL_test2328z00_3254 = PAIRP(BgL_tmpz00_3255);
				}
				if (BgL_test2328z00_3254)
					{	/* Reduce/sbeta.scm 450 */
						if (NULLP(CDR(
									(((BgL_appz00_bglt) COBJECT(BgL_nodez00_32))->BgL_argsz00))))
							{	/* Reduce/sbeta.scm 452 */
								bool_t BgL_test2330z00_3262;

								{	/* Reduce/sbeta.scm 452 */
									bool_t BgL__ortest_1144z00_1628;

									{	/* Reduce/sbeta.scm 452 */
										bool_t BgL_test2331z00_3263;

										{	/* Reduce/sbeta.scm 452 */
											obj_t BgL_arg1729z00_1634;

											BgL_arg1729z00_1634 =
												CAR(
												(((BgL_appz00_bglt) COBJECT(BgL_nodez00_32))->
													BgL_argsz00));
											BgL_test2331z00_3263 =
												BGl_sidezd2effectzf3z21zzeffect_effectz00((
													(BgL_nodez00_bglt) BgL_arg1729z00_1634));
										}
										if (BgL_test2331z00_3263)
											{	/* Reduce/sbeta.scm 452 */
												BgL__ortest_1144z00_1628 = ((bool_t) 0);
											}
										else
											{	/* Reduce/sbeta.scm 452 */
												BgL__ortest_1144z00_1628 = ((bool_t) 1);
											}
									}
									if (BgL__ortest_1144z00_1628)
										{	/* Reduce/sbeta.scm 452 */
											BgL_test2330z00_3262 = BgL__ortest_1144z00_1628;
										}
									else
										{	/* Reduce/sbeta.scm 452 */
											BgL_test2330z00_3262 =
												BGl_sidezd2effectzd2safezf3zf3zzreduce_betaz00(CAR(
													(((BgL_appz00_bglt) COBJECT(BgL_nodez00_32))->
														BgL_argsz00)));
										}
								}
								if (BgL_test2330z00_3262)
									{	/* Reduce/sbeta.scm 454 */
										BgL_variablez00_bglt BgL_arg1711z00_1626;

										BgL_arg1711z00_1626 =
											(((BgL_varz00_bglt) COBJECT(
													(((BgL_appz00_bglt) COBJECT(BgL_nodez00_32))->
														BgL_funz00)))->BgL_variablez00);
										return BGl_memqz00zz__r4_pairs_and_lists_6_3z00(((obj_t)
												BgL_arg1711z00_1626),
											BGl_za2predicatesza2z00zzreduce_betaz00);
									}
								else
									{	/* Reduce/sbeta.scm 452 */
										return BFALSE;
									}
							}
						else
							{	/* Reduce/sbeta.scm 451 */
								return BFALSE;
							}
					}
				else
					{	/* Reduce/sbeta.scm 450 */
						return BFALSE;
					}
			}
		}

	}



/* node-beta-predicate! */
	obj_t BGl_nodezd2betazd2predicatez12z12zzreduce_betaz00(BgL_appz00_bglt
		BgL_nodez00_33)
	{
		{	/* Reduce/sbeta.scm 459 */
			{	/* Reduce/sbeta.scm 461 */
				BgL_variablez00_bglt BgL_vfunz00_1640;
				BgL_typez00_bglt BgL_atypez00_1641;

				BgL_vfunz00_1640 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(BgL_nodez00_33))->BgL_funz00)))->
					BgL_variablez00);
				{	/* Reduce/sbeta.scm 462 */
					obj_t BgL_arg1747z00_1656;

					BgL_arg1747z00_1656 =
						CAR((((BgL_appz00_bglt) COBJECT(BgL_nodez00_33))->BgL_argsz00));
					BgL_atypez00_1641 =
						BGl_getzd2typezd2zztype_typeofz00(
						((BgL_nodez00_bglt) BgL_arg1747z00_1656), ((bool_t) 0));
				}
				if ((((obj_t) BgL_atypez00_1641) == BGl_za2objza2z00zztype_cachez00))
					{	/* Reduce/sbeta.scm 464 */
						return ((obj_t) BgL_nodez00_33);
					}
				else
					{	/* Reduce/sbeta.scm 464 */
						if (
							(((obj_t) BgL_vfunz00_1640) ==
								BGl_za2czd2fixnumzf3za2z21zzreduce_betaz00))
							{	/* Reduce/sbeta.scm 466 */
								BGl_za2removedza2z00zzreduce_betaz00 =
									(BGl_za2removedza2z00zzreduce_betaz00 + ((long) 1));
								{	/* Reduce/sbeta.scm 468 */
									BgL_literalz00_bglt BgL_new1147z00_1644;

									{	/* Reduce/sbeta.scm 470 */
										BgL_literalz00_bglt BgL_new1146z00_1647;

										BgL_new1146z00_1647 =
											((BgL_literalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_literalz00_bgl))));
										{	/* Reduce/sbeta.scm 470 */
											long BgL_arg1741z00_1648;

											{	/* Reduce/sbeta.scm 470 */
												long BgL_res2167z00_2533;

												BgL_res2167z00_2533 =
													BGL_CLASS_INDEX(BGl_literalz00zzast_nodez00);
												BgL_arg1741z00_1648 = BgL_res2167z00_2533;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1146z00_1647),
												BgL_arg1741z00_1648);
										}
										{	/* Reduce/sbeta.scm 470 */
											BgL_objectz00_bglt BgL_tmpz00_3294;

											BgL_tmpz00_3294 =
												((BgL_objectz00_bglt) BgL_new1146z00_1647);
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3294, BFALSE);
										}
										((BgL_objectz00_bglt) BgL_new1146z00_1647);
										BgL_new1147z00_1644 = BgL_new1146z00_1647;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1147z00_1644)))->
											BgL_locz00) =
										((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
															BgL_nodez00_33)))->BgL_locz00)), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1147z00_1644)))->BgL_typez00) =
										((BgL_typez00_bglt) (((BgL_nodez00_bglt)
													COBJECT(((BgL_nodez00_bglt) BgL_nodez00_33)))->
												BgL_typez00)), BUNSPEC);
									{
										obj_t BgL_auxz00_3306;

										{	/* Reduce/sbeta.scm 471 */
											bool_t BgL__ortest_1148z00_1645;

											BgL__ortest_1148z00_1645 =
												(
												((obj_t) BgL_atypez00_1641) ==
												BGl_za2bintza2z00zztype_cachez00);
											if (BgL__ortest_1148z00_1645)
												{	/* Reduce/sbeta.scm 471 */
													BgL_auxz00_3306 = BBOOL(BgL__ortest_1148z00_1645);
												}
											else
												{	/* Reduce/sbeta.scm 472 */
													bool_t BgL__ortest_1149z00_1646;

													BgL__ortest_1149z00_1646 =
														(
														((obj_t) BgL_atypez00_1641) ==
														BGl_za2intza2z00zztype_cachez00);
													if (BgL__ortest_1149z00_1646)
														{	/* Reduce/sbeta.scm 472 */
															BgL_auxz00_3306 = BBOOL(BgL__ortest_1149z00_1646);
														}
													else
														{	/* Reduce/sbeta.scm 472 */
															BgL_auxz00_3306 =
																BBOOL(
																(((obj_t) BgL_atypez00_1641) ==
																	BGl_za2longza2z00zztype_cachez00));
														}
												}
										}
										((((BgL_atomz00_bglt) COBJECT(
														((BgL_atomz00_bglt) BgL_new1147z00_1644)))->
												BgL_valuez00) = ((obj_t) BgL_auxz00_3306), BUNSPEC);
									}
									return ((obj_t) BgL_new1147z00_1644);
								}
							}
						else
							{	/* Reduce/sbeta.scm 466 */
								if (
									(((obj_t) BgL_vfunz00_1640) ==
										BGl_za2czd2flonumzf3za2z21zzreduce_betaz00))
									{	/* Reduce/sbeta.scm 474 */
										BGl_za2removedza2z00zzreduce_betaz00 =
											(BGl_za2removedza2z00zzreduce_betaz00 + ((long) 1));
										{	/* Reduce/sbeta.scm 476 */
											BgL_literalz00_bglt BgL_new1151z00_1650;

											{	/* Reduce/sbeta.scm 478 */
												BgL_literalz00_bglt BgL_new1150z00_1652;

												BgL_new1150z00_1652 =
													((BgL_literalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_literalz00_bgl))));
												{	/* Reduce/sbeta.scm 478 */
													long BgL_arg1744z00_1653;

													{	/* Reduce/sbeta.scm 478 */
														long BgL_res2169z00_2540;

														BgL_res2169z00_2540 =
															BGL_CLASS_INDEX(BGl_literalz00zzast_nodez00);
														BgL_arg1744z00_1653 = BgL_res2169z00_2540;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1150z00_1652),
														BgL_arg1744z00_1653);
												}
												{	/* Reduce/sbeta.scm 478 */
													BgL_objectz00_bglt BgL_tmpz00_3329;

													BgL_tmpz00_3329 =
														((BgL_objectz00_bglt) BgL_new1150z00_1652);
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3329, BFALSE);
												}
												((BgL_objectz00_bglt) BgL_new1150z00_1652);
												BgL_new1151z00_1650 = BgL_new1150z00_1652;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1151z00_1650)))->
													BgL_locz00) =
												((obj_t) (((BgL_nodez00_bglt)
															COBJECT(((BgL_nodez00_bglt) BgL_nodez00_33)))->
														BgL_locz00)), BUNSPEC);
											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_new1151z00_1650)))->BgL_typez00) =
												((BgL_typez00_bglt) (((BgL_nodez00_bglt)
															COBJECT(((BgL_nodez00_bglt) BgL_nodez00_33)))->
														BgL_typez00)), BUNSPEC);
											{
												obj_t BgL_auxz00_3341;

												{	/* Reduce/sbeta.scm 479 */
													bool_t BgL__ortest_1152z00_1651;

													BgL__ortest_1152z00_1651 =
														(
														((obj_t) BgL_atypez00_1641) ==
														BGl_za2realza2z00zztype_cachez00);
													if (BgL__ortest_1152z00_1651)
														{	/* Reduce/sbeta.scm 479 */
															BgL_auxz00_3341 = BBOOL(BgL__ortest_1152z00_1651);
														}
													else
														{	/* Reduce/sbeta.scm 479 */
															BgL_auxz00_3341 =
																BBOOL(
																(((obj_t) BgL_atypez00_1641) ==
																	BGl_za2brealza2z00zztype_cachez00));
														}
												}
												((((BgL_atomz00_bglt) COBJECT(
																((BgL_atomz00_bglt) BgL_new1151z00_1650)))->
														BgL_valuez00) = ((obj_t) BgL_auxz00_3341), BUNSPEC);
											}
											return ((obj_t) BgL_new1151z00_1650);
										}
									}
								else
									{	/* Reduce/sbeta.scm 484 */
										obj_t BgL_arg1745z00_1654;

										BgL_arg1745z00_1654 =
											BGl_shapez00zztools_shapez00(((obj_t) BgL_nodez00_33));
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_string2230z00zzreduce_betaz00,
											BGl_string2231z00zzreduce_betaz00, BgL_arg1745z00_1654);
									}
							}
					}
			}
		}

	}



/* node-beta*! */
	obj_t BGl_nodezd2betaza2z12z62zzreduce_betaz00(obj_t BgL_nodesz00_34)
	{
		{	/* Reduce/sbeta.scm 489 */
			{
				obj_t BgL_nodesz00_1659;

				BgL_nodesz00_1659 = BgL_nodesz00_34;
			BgL_zc3z04anonymousza31755ze3z87_1660:
				if (NULLP(BgL_nodesz00_1659))
					{	/* Reduce/sbeta.scm 491 */
						return BUNSPEC;
					}
				else
					{	/* Reduce/sbeta.scm 491 */
						{	/* Reduce/sbeta.scm 494 */
							BgL_nodez00_bglt BgL_arg1759z00_1662;

							{	/* Reduce/sbeta.scm 494 */
								obj_t BgL_arg1760z00_1663;

								BgL_arg1760z00_1663 = CAR(((obj_t) BgL_nodesz00_1659));
								BgL_arg1759z00_1662 =
									BGl_nodezd2betaz12zc0zzreduce_betaz00(
									((BgL_nodez00_bglt) BgL_arg1760z00_1663));
							}
							{	/* Reduce/sbeta.scm 494 */
								obj_t BgL_auxz00_3363;
								obj_t BgL_tmpz00_3361;

								BgL_auxz00_3363 = ((obj_t) BgL_arg1759z00_1662);
								BgL_tmpz00_3361 = ((obj_t) BgL_nodesz00_1659);
								SET_CAR(BgL_tmpz00_3361, BgL_auxz00_3363);
							}
						}
						{	/* Reduce/sbeta.scm 495 */
							obj_t BgL_arg1761z00_1664;

							BgL_arg1761z00_1664 = CDR(((obj_t) BgL_nodesz00_1659));
							{
								obj_t BgL_nodesz00_3368;

								BgL_nodesz00_3368 = BgL_arg1761z00_1664;
								BgL_nodesz00_1659 = BgL_nodesz00_3368;
								goto BgL_zc3z04anonymousza31755ze3z87_1660;
							}
						}
					}
			}
		}

	}



/* node-beta-early-app! */
	BgL_nodez00_bglt
		BGl_nodezd2betazd2earlyzd2appz12zc0zzreduce_betaz00(BgL_appz00_bglt
		BgL_nodez00_35)
	{
		{	/* Reduce/sbeta.scm 503 */
			{	/* Reduce/sbeta.scm 505 */
				bool_t BgL_test2340z00_3369;

				{	/* Reduce/sbeta.scm 505 */
					obj_t BgL_g1406z00_1704;

					BgL_g1406z00_1704 =
						(((BgL_appz00_bglt) COBJECT(BgL_nodez00_35))->BgL_argsz00);
					{
						obj_t BgL_l1404z00_1706;

						BgL_l1404z00_1706 = BgL_g1406z00_1704;
					BgL_zc3z04anonymousza31830ze3z87_1707:
						if (NULLP(BgL_l1404z00_1706))
							{	/* Reduce/sbeta.scm 505 */
								BgL_test2340z00_3369 = ((bool_t) 1);
							}
						else
							{	/* Reduce/sbeta.scm 505 */
								bool_t BgL_test2342z00_3373;

								{	/* Reduce/sbeta.scm 505 */
									obj_t BgL_arg1832z00_1712;

									BgL_arg1832z00_1712 = CAR(((obj_t) BgL_l1404z00_1706));
									BgL_test2342z00_3373 =
										BGl_isazf3zf3zz__objectz00(BgL_arg1832z00_1712,
										BGl_atomz00zzast_nodez00);
								}
								if (BgL_test2342z00_3373)
									{	/* Reduce/sbeta.scm 505 */
										obj_t BgL_arg1831z00_1711;

										BgL_arg1831z00_1711 = CDR(((obj_t) BgL_l1404z00_1706));
										{
											obj_t BgL_l1404z00_3379;

											BgL_l1404z00_3379 = BgL_arg1831z00_1711;
											BgL_l1404z00_1706 = BgL_l1404z00_3379;
											goto BgL_zc3z04anonymousza31830ze3z87_1707;
										}
									}
								else
									{	/* Reduce/sbeta.scm 505 */
										BgL_test2340z00_3369 = ((bool_t) 0);
									}
							}
					}
				}
				if (BgL_test2340z00_3369)
					{	/* Reduce/sbeta.scm 506 */
						bool_t BgL_test2343z00_3380;

						if (
							(bgl_list_length(
									(((BgL_appz00_bglt) COBJECT(BgL_nodez00_35))->BgL_argsz00)) ==
								((long) 1)))
							{	/* Reduce/sbeta.scm 506 */
								obj_t BgL_tmpz00_3385;

								{
									BgL_atomz00_bglt BgL_auxz00_3386;

									{	/* Reduce/sbeta.scm 506 */
										obj_t BgL_pairz00_2554;

										BgL_pairz00_2554 =
											(((BgL_appz00_bglt) COBJECT(BgL_nodez00_35))->
											BgL_argsz00);
										BgL_auxz00_3386 =
											((BgL_atomz00_bglt) CAR(BgL_pairz00_2554));
									}
									BgL_tmpz00_3385 =
										(((BgL_atomz00_bglt) COBJECT(BgL_auxz00_3386))->
										BgL_valuez00);
								}
								BgL_test2343z00_3380 = STRINGP(BgL_tmpz00_3385);
							}
						else
							{	/* Reduce/sbeta.scm 506 */
								BgL_test2343z00_3380 = ((bool_t) 0);
							}
						if (BgL_test2343z00_3380)
							{	/* Reduce/sbeta.scm 507 */
								bool_t BgL_test2345z00_3392;

								{	/* Reduce/sbeta.scm 507 */
									BgL_variablez00_bglt BgL_arg1823z00_1696;

									BgL_arg1823z00_1696 =
										(((BgL_varz00_bglt) COBJECT(
												(((BgL_appz00_bglt) COBJECT(BgL_nodez00_35))->
													BgL_funz00)))->BgL_variablez00);
									BgL_test2345z00_3392 =
										(((obj_t) BgL_arg1823z00_1696) ==
										BGl_za2czd2stringzd2lengthza2z00zzreduce_betaz00);
								}
								if (BgL_test2345z00_3392)
									{	/* Reduce/sbeta.scm 508 */
										BgL_literalz00_bglt BgL_new1156z00_1690;

										{	/* Reduce/sbeta.scm 509 */
											BgL_literalz00_bglt BgL_new1154z00_1694;

											BgL_new1154z00_1694 =
												((BgL_literalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_literalz00_bgl))));
											{	/* Reduce/sbeta.scm 509 */
												long BgL_arg1822z00_1695;

												{	/* Reduce/sbeta.scm 509 */
													long BgL_res2175z00_2559;

													BgL_res2175z00_2559 =
														BGL_CLASS_INDEX(BGl_literalz00zzast_nodez00);
													BgL_arg1822z00_1695 = BgL_res2175z00_2559;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1154z00_1694),
													BgL_arg1822z00_1695);
											}
											{	/* Reduce/sbeta.scm 509 */
												BgL_objectz00_bglt BgL_tmpz00_3401;

												BgL_tmpz00_3401 =
													((BgL_objectz00_bglt) BgL_new1154z00_1694);
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3401, BFALSE);
											}
											((BgL_objectz00_bglt) BgL_new1154z00_1694);
											BgL_new1156z00_1690 = BgL_new1154z00_1694;
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1156z00_1690)))->
												BgL_locz00) =
											((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_nodez00_35)))->BgL_locz00)), BUNSPEC);
										((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
															BgL_new1156z00_1690)))->BgL_typez00) =
											((BgL_typez00_bglt) (((BgL_nodez00_bglt)
														COBJECT(((BgL_nodez00_bglt) BgL_nodez00_35)))->
													BgL_typez00)), BUNSPEC);
										{
											obj_t BgL_auxz00_3413;

											{	/* Reduce/sbeta.scm 511 */
												obj_t BgL_stringz00_2567;

												{
													BgL_atomz00_bglt BgL_auxz00_3415;

													{	/* Reduce/sbeta.scm 511 */
														obj_t BgL_pairz00_2565;

														BgL_pairz00_2565 =
															(((BgL_appz00_bglt) COBJECT(BgL_nodez00_35))->
															BgL_argsz00);
														BgL_auxz00_3415 =
															((BgL_atomz00_bglt) CAR(BgL_pairz00_2565));
													}
													BgL_stringz00_2567 =
														(((BgL_atomz00_bglt) COBJECT(BgL_auxz00_3415))->
														BgL_valuez00);
												}
												BgL_auxz00_3413 =
													BINT(STRING_LENGTH(BgL_stringz00_2567));
											}
											((((BgL_atomz00_bglt) COBJECT(
															((BgL_atomz00_bglt) BgL_new1156z00_1690)))->
													BgL_valuez00) = ((obj_t) BgL_auxz00_3413), BUNSPEC);
										}
										return ((BgL_nodez00_bglt) BgL_new1156z00_1690);
									}
								else
									{	/* Reduce/sbeta.scm 507 */
										return ((BgL_nodez00_bglt) BgL_nodez00_35);
									}
							}
						else
							{	/* Reduce/sbeta.scm 506 */
								return ((BgL_nodez00_bglt) BgL_nodez00_35);
							}
					}
				else
					{	/* Reduce/sbeta.scm 505 */
						return ((BgL_nodez00_bglt) BgL_nodez00_35);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzreduce_betaz00()
	{
		{	/* Reduce/sbeta.scm 25 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_betaz00()
	{
		{	/* Reduce/sbeta.scm 25 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_proc2232z00zzreduce_betaz00, BGl_nodez00zzast_nodez00,
				BGl_string2233z00zzreduce_betaz00);
		}

	}



/* &node-beta!1408 */
	obj_t BGl_z62nodezd2betaz121408za2zzreduce_betaz00(obj_t BgL_envz00_2754,
		obj_t BgL_nodez00_2755)
	{
		{	/* Reduce/sbeta.scm 91 */
			return ((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2755));
		}

	}



/* node-beta! */
	BgL_nodez00_bglt BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_nodez00_bglt
		BgL_nodez00_4)
	{
		{	/* Reduce/sbeta.scm 91 */
			{	/* Reduce/sbeta.scm 91 */
				obj_t BgL_method1409z00_1718;

				{	/* Reduce/sbeta.scm 91 */
					obj_t BgL_res2187z00_2605;

					{	/* Reduce/sbeta.scm 91 */
						long BgL_objzd2classzd2numz00_2570;

						{	/* Reduce/sbeta.scm 91 */
							long BgL_res2177z00_2573;

							BgL_res2177z00_2573 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_4));
							BgL_objzd2classzd2numz00_2570 = BgL_res2177z00_2573;
						}
						{	/* Reduce/sbeta.scm 91 */
							obj_t BgL_arg1813z00_2571;

							BgL_arg1813z00_2571 =
								PROCEDURE_REF(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
								(int) (((long) 1)));
							{	/* Reduce/sbeta.scm 91 */
								int BgL_offsetz00_2575;

								BgL_offsetz00_2575 = (int) (BgL_objzd2classzd2numz00_2570);
								{	/* Reduce/sbeta.scm 91 */
									long BgL_offsetz00_2576;

									BgL_offsetz00_2576 =
										((long) (BgL_offsetz00_2575) - OBJECT_TYPE);
									{	/* Reduce/sbeta.scm 91 */
										long BgL_modz00_2577;

										BgL_modz00_2577 =
											(BgL_offsetz00_2576 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Reduce/sbeta.scm 91 */
											long BgL_restz00_2579;

											BgL_restz00_2579 =
												(BgL_offsetz00_2576 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Reduce/sbeta.scm 91 */

												{	/* Reduce/sbeta.scm 91 */
													obj_t BgL_bucketz00_2581;

													BgL_bucketz00_2581 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2571), BgL_modz00_2577);
													BgL_res2187z00_2605 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2581), BgL_restz00_2579);
					}}}}}}}}
					BgL_method1409z00_1718 = BgL_res2187z00_2605;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1409z00_1718) (BgL_method1409z00_1718,
						((obj_t) BgL_nodez00_4), BEOA));
			}
		}

	}



/* &node-beta! */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12za2zzreduce_betaz00(obj_t
		BgL_envz00_2756, obj_t BgL_nodez00_2757)
	{
		{	/* Reduce/sbeta.scm 91 */
			return
				BGl_nodezd2betaz12zc0zzreduce_betaz00(
				((BgL_nodez00_bglt) BgL_nodez00_2757));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_betaz00()
	{
		{	/* Reduce/sbeta.scm 25 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2234z00zzreduce_betaz00,
				BGl_string2235z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_sequencez00zzast_nodez00, BGl_proc2236z00zzreduce_betaz00,
				BGl_string2235z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00, BGl_syncz00zzast_nodez00,
				BGl_proc2237z00zzreduce_betaz00, BGl_string2235z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc2238z00zzreduce_betaz00,
				BGl_string2235z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_funcallz00zzast_nodez00, BGl_proc2239z00zzreduce_betaz00,
				BGl_string2235z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00, BGl_castz00zzast_nodez00,
				BGl_proc2240z00zzreduce_betaz00, BGl_string2235z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00, BGl_setqz00zzast_nodez00,
				BGl_proc2241z00zzreduce_betaz00, BGl_string2235z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2242z00zzreduce_betaz00,
				BGl_string2235z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_switchz00zzast_nodez00, BGl_proc2243z00zzreduce_betaz00,
				BGl_string2235z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2244z00zzreduce_betaz00,
				BGl_string2235z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2245z00zzreduce_betaz00,
				BGl_string2235z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2246z00zzreduce_betaz00,
				BGl_string2235z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2247z00zzreduce_betaz00,
				BGl_string2235z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2248z00zzreduce_betaz00,
				BGl_string2235z00zzreduce_betaz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00, BGl_appz00zzast_nodez00,
				BGl_proc2249z00zzreduce_betaz00, BGl_string2235z00zzreduce_betaz00);
		}

	}



/* &node-beta!-app1439 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2app1439z70zzreduce_betaz00(obj_t
		BgL_envz00_2773, obj_t BgL_nodez00_2774)
	{
		{	/* Reduce/sbeta.scm 438 */
			BGl_nodezd2betaza2z12z62zzreduce_betaz00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2774)))->BgL_argsz00));
			if (CBOOL(BGl_predicatezf3zf3zzreduce_betaz00(
						((BgL_appz00_bglt) BgL_nodez00_2774))))
				{	/* Reduce/sbeta.scm 441 */
					return
						((BgL_nodez00_bglt)
						BGl_nodezd2betazd2predicatez12z12zzreduce_betaz00(
							((BgL_appz00_bglt) BgL_nodez00_2774)));
				}
			else
				{	/* Reduce/sbeta.scm 441 */
					return
						BGl_nodezd2betazd2earlyzd2appz12zc0zzreduce_betaz00(
						((BgL_appz00_bglt) BgL_nodez00_2774));
				}
		}

	}



/* &node-beta!-box-set!1437 */
	BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2boxzd2setz121437zb0zzreduce_betaz00(obj_t
		BgL_envz00_2775, obj_t BgL_nodez00_2776)
	{
		{	/* Reduce/sbeta.scm 430 */
			{
				BgL_nodez00_bglt BgL_auxz00_3490;

				{	/* Reduce/sbeta.scm 432 */
					BgL_nodez00_bglt BgL_arg2065z00_2819;

					BgL_arg2065z00_2819 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2776)))->BgL_valuez00);
					BgL_auxz00_3490 =
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_arg2065z00_2819);
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2776)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3490), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2776));
		}

	}



/* &node-beta!-make-box1435 */
	BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2makezd2box1435za2zzreduce_betaz00(obj_t
		BgL_envz00_2777, obj_t BgL_nodez00_2778)
	{
		{	/* Reduce/sbeta.scm 422 */
			{
				BgL_nodez00_bglt BgL_auxz00_3498;

				{	/* Reduce/sbeta.scm 424 */
					BgL_nodez00_bglt BgL_arg2063z00_2821;

					BgL_arg2063z00_2821 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2778)))->BgL_valuez00);
					BgL_auxz00_3498 =
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_arg2063z00_2821);
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2778)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3498), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2778));
		}

	}



/* &node-beta!-jump-ex-i1433 */
	BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2jumpzd2exzd2i1433z70zzreduce_betaz00(obj_t
		BgL_envz00_2779, obj_t BgL_nodez00_2780)
	{
		{	/* Reduce/sbeta.scm 413 */
			{
				BgL_nodez00_bglt BgL_auxz00_3506;

				{	/* Reduce/sbeta.scm 415 */
					BgL_nodez00_bglt BgL_arg2061z00_2823;

					BgL_arg2061z00_2823 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2780)))->BgL_exitz00);
					BgL_auxz00_3506 =
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_arg2061z00_2823);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2780)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_3506), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3512;

				{	/* Reduce/sbeta.scm 416 */
					BgL_nodez00_bglt BgL_arg2062z00_2824;

					BgL_arg2062z00_2824 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2780)))->
						BgL_valuez00);
					BgL_auxz00_3512 =
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_arg2062z00_2824);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2780)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_3512), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2780));
		}

	}



/* &node-beta!-set-ex-it1431 */
	BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2setzd2exzd2it1431z70zzreduce_betaz00(obj_t
		BgL_envz00_2781, obj_t BgL_nodez00_2782)
	{
		{	/* Reduce/sbeta.scm 405 */
			{
				BgL_nodez00_bglt BgL_auxz00_3520;

				{	/* Reduce/sbeta.scm 407 */
					BgL_nodez00_bglt BgL_arg2060z00_2826;

					BgL_arg2060z00_2826 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2782)))->BgL_bodyz00);
					BgL_auxz00_3520 =
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_arg2060z00_2826);
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2782)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3520), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2782));
		}

	}



/* &node-beta!-let-fun1429 */
	BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2letzd2fun1429za2zzreduce_betaz00(obj_t
		BgL_envz00_2783, obj_t BgL_nodez00_2784)
	{
		{	/* Reduce/sbeta.scm 391 */
			{
				BgL_nodez00_bglt BgL_auxz00_3528;

				{	/* Reduce/sbeta.scm 393 */
					BgL_nodez00_bglt BgL_arg2051z00_2828;

					BgL_arg2051z00_2828 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2784)))->BgL_bodyz00);
					BgL_auxz00_3528 =
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_arg2051z00_2828);
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2784)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3528), BUNSPEC);
			}
			{
				obj_t BgL_localsz00_2830;

				{	/* Reduce/sbeta.scm 394 */
					obj_t BgL_arg2053z00_2836;

					BgL_arg2053z00_2836 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2784)))->BgL_localsz00);
					{
						BgL_letzd2funzd2_bglt BgL_auxz00_3536;

						BgL_localsz00_2830 = BgL_arg2053z00_2836;
					BgL_loopz00_2829:
						if (NULLP(BgL_localsz00_2830))
							{	/* Reduce/sbeta.scm 395 */
								BgL_auxz00_3536 = ((BgL_letzd2funzd2_bglt) BgL_nodez00_2784);
							}
						else
							{	/* Reduce/sbeta.scm 397 */
								obj_t BgL_localz00_2831;

								BgL_localz00_2831 = CAR(((obj_t) BgL_localsz00_2830));
								{	/* Reduce/sbeta.scm 397 */
									BgL_valuez00_bglt BgL_sfunz00_2832;

									BgL_sfunz00_2832 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2831))))->
										BgL_valuez00);
									{	/* Reduce/sbeta.scm 398 */

										{	/* Reduce/sbeta.scm 399 */
											BgL_nodez00_bglt BgL_arg2056z00_2833;

											{	/* Reduce/sbeta.scm 399 */
												obj_t BgL_arg2057z00_2834;

												BgL_arg2057z00_2834 =
													(((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_sfunz00_2832)))->
													BgL_bodyz00);
												BgL_arg2056z00_2833 =
													BGl_nodezd2betaz12zc0zzreduce_betaz00((
														(BgL_nodez00_bglt) BgL_arg2057z00_2834));
											}
											((((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_sfunz00_2832)))->
													BgL_bodyz00) =
												((obj_t) ((obj_t) BgL_arg2056z00_2833)), BUNSPEC);
										}
										{	/* Reduce/sbeta.scm 400 */
											obj_t BgL_arg2059z00_2835;

											BgL_arg2059z00_2835 = CDR(((obj_t) BgL_localsz00_2830));
											{
												obj_t BgL_localsz00_3554;

												BgL_localsz00_3554 = BgL_arg2059z00_2835;
												BgL_localsz00_2830 = BgL_localsz00_3554;
												goto BgL_loopz00_2829;
											}
										}
									}
								}
							}
						return ((BgL_nodez00_bglt) BgL_auxz00_3536);
					}
				}
			}
		}

	}



/* &node-beta!-switch1427 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2switch1427z70zzreduce_betaz00(obj_t
		BgL_envz00_2785, obj_t BgL_nodez00_2786)
	{
		{	/* Reduce/sbeta.scm 378 */
			{
				BgL_nodez00_bglt BgL_auxz00_3556;

				{	/* Reduce/sbeta.scm 380 */
					BgL_nodez00_bglt BgL_arg2044z00_2838;

					BgL_arg2044z00_2838 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2786)))->BgL_testz00);
					BgL_auxz00_3556 =
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_arg2044z00_2838);
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2786)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3556), BUNSPEC);
			}
			{
				obj_t BgL_clausesz00_2840;

				{	/* Reduce/sbeta.scm 381 */
					obj_t BgL_arg2045z00_2845;

					BgL_arg2045z00_2845 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2786)))->BgL_clausesz00);
					{
						BgL_switchz00_bglt BgL_auxz00_3564;

						BgL_clausesz00_2840 = BgL_arg2045z00_2845;
					BgL_loopz00_2839:
						if (NULLP(BgL_clausesz00_2840))
							{	/* Reduce/sbeta.scm 382 */
								BgL_auxz00_3564 = ((BgL_switchz00_bglt) BgL_nodez00_2786);
							}
						else
							{	/* Reduce/sbeta.scm 384 */
								obj_t BgL_clausez00_2841;

								BgL_clausez00_2841 = CAR(((obj_t) BgL_clausesz00_2840));
								{	/* Reduce/sbeta.scm 385 */
									BgL_nodez00_bglt BgL_arg2048z00_2842;

									{	/* Reduce/sbeta.scm 385 */
										obj_t BgL_arg2049z00_2843;

										BgL_arg2049z00_2843 = CDR(((obj_t) BgL_clausez00_2841));
										BgL_arg2048z00_2842 =
											BGl_nodezd2betaz12zc0zzreduce_betaz00(
											((BgL_nodez00_bglt) BgL_arg2049z00_2843));
									}
									{	/* Reduce/sbeta.scm 385 */
										obj_t BgL_auxz00_3576;
										obj_t BgL_tmpz00_3574;

										BgL_auxz00_3576 = ((obj_t) BgL_arg2048z00_2842);
										BgL_tmpz00_3574 = ((obj_t) BgL_clausez00_2841);
										SET_CDR(BgL_tmpz00_3574, BgL_auxz00_3576);
									}
								}
								{	/* Reduce/sbeta.scm 386 */
									obj_t BgL_arg2050z00_2844;

									BgL_arg2050z00_2844 = CDR(((obj_t) BgL_clausesz00_2840));
									{
										obj_t BgL_clausesz00_3581;

										BgL_clausesz00_3581 = BgL_arg2050z00_2844;
										BgL_clausesz00_2840 = BgL_clausesz00_3581;
										goto BgL_loopz00_2839;
									}
								}
							}
						return ((BgL_nodez00_bglt) BgL_auxz00_3564);
					}
				}
			}
		}

	}



/* &node-beta!-condition1425 */
	BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2condition1425z70zzreduce_betaz00(obj_t
		BgL_envz00_2787, obj_t BgL_nodez00_2788)
	{
		{	/* Reduce/sbeta.scm 368 */
			{
				BgL_nodez00_bglt BgL_auxz00_3583;

				{	/* Reduce/sbeta.scm 370 */
					BgL_nodez00_bglt BgL_arg2040z00_2847;

					BgL_arg2040z00_2847 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2788)))->BgL_testz00);
					BgL_auxz00_3583 =
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_arg2040z00_2847);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2788)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3583), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3589;

				{	/* Reduce/sbeta.scm 371 */
					BgL_nodez00_bglt BgL_arg2041z00_2848;

					BgL_arg2041z00_2848 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2788)))->BgL_truez00);
					BgL_auxz00_3589 =
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_arg2041z00_2848);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2788)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3589), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3595;

				{	/* Reduce/sbeta.scm 372 */
					BgL_nodez00_bglt BgL_arg2043z00_2849;

					BgL_arg2043z00_2849 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2788)))->BgL_falsez00);
					BgL_auxz00_3595 =
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_arg2043z00_2849);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2788)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3595), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nodez00_2788));
		}

	}



/* &node-beta!-setq1423 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2setq1423z70zzreduce_betaz00(obj_t
		BgL_envz00_2789, obj_t BgL_nodez00_2790)
	{
		{	/* Reduce/sbeta.scm 360 */
			{
				BgL_nodez00_bglt BgL_auxz00_3603;

				{	/* Reduce/sbeta.scm 362 */
					BgL_nodez00_bglt BgL_arg2039z00_2851;

					BgL_arg2039z00_2851 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2790)))->BgL_valuez00);
					BgL_auxz00_3603 =
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_arg2039z00_2851);
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2790)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3603), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_2790));
		}

	}



/* &node-beta!-cast1421 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2cast1421z70zzreduce_betaz00(obj_t
		BgL_envz00_2791, obj_t BgL_nodez00_2792)
	{
		{	/* Reduce/sbeta.scm 352 */
			{
				BgL_nodez00_bglt BgL_auxz00_3611;

				{	/* Reduce/sbeta.scm 354 */
					BgL_nodez00_bglt BgL_arg2038z00_2853;

					BgL_arg2038z00_2853 =
						(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_2792)))->BgL_argz00);
					BgL_auxz00_3611 =
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_arg2038z00_2853);
				}
				((((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_2792)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3611), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_2792));
		}

	}



/* &node-beta!-funcall1419 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2funcall1419z70zzreduce_betaz00(obj_t
		BgL_envz00_2793, obj_t BgL_nodez00_2794)
	{
		{	/* Reduce/sbeta.scm 344 */
			BGl_nodezd2betaza2z12z62zzreduce_betaz00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2794)))->BgL_argsz00));
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2794));
		}

	}



/* &node-beta!-app-ly1417 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2appzd2ly1417za2zzreduce_betaz00(obj_t
		BgL_envz00_2795, obj_t BgL_nodez00_2796)
	{
		{	/* Reduce/sbeta.scm 335 */
			{
				BgL_nodez00_bglt BgL_auxz00_3624;

				{	/* Reduce/sbeta.scm 337 */
					BgL_nodez00_bglt BgL_arg2035z00_2856;

					BgL_arg2035z00_2856 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2796)))->BgL_funz00);
					BgL_auxz00_3624 =
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_arg2035z00_2856);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2796)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3624), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3630;

				{	/* Reduce/sbeta.scm 338 */
					BgL_nodez00_bglt BgL_arg2036z00_2857;

					BgL_arg2036z00_2857 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2796)))->BgL_argz00);
					BgL_auxz00_3630 =
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_arg2036z00_2857);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2796)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3630), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2796));
		}

	}



/* &node-beta!-sync1415 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2sync1415z70zzreduce_betaz00(obj_t
		BgL_envz00_2797, obj_t BgL_nodez00_2798)
	{
		{	/* Reduce/sbeta.scm 325 */
			{
				BgL_nodez00_bglt BgL_auxz00_3638;

				{	/* Reduce/sbeta.scm 327 */
					BgL_nodez00_bglt BgL_arg2031z00_2859;

					BgL_arg2031z00_2859 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2798)))->BgL_mutexz00);
					BgL_auxz00_3638 =
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_arg2031z00_2859);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2798)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3638), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3644;

				{	/* Reduce/sbeta.scm 328 */
					BgL_nodez00_bglt BgL_arg2033z00_2860;

					BgL_arg2033z00_2860 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2798)))->BgL_prelockz00);
					BgL_auxz00_3644 =
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_arg2033z00_2860);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2798)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3644), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3650;

				{	/* Reduce/sbeta.scm 329 */
					BgL_nodez00_bglt BgL_arg2034z00_2861;

					BgL_arg2034z00_2861 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2798)))->BgL_bodyz00);
					BgL_auxz00_3650 =
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_arg2034z00_2861);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2798)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3650), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2798));
		}

	}



/* &node-beta!-sequence1413 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2sequence1413z70zzreduce_betaz00(obj_t
		BgL_envz00_2799, obj_t BgL_nodez00_2800)
	{
		{	/* Reduce/sbeta.scm 317 */
			BGl_nodezd2betaza2z12z62zzreduce_betaz00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2800)))->BgL_nodesz00));
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2800));
		}

	}



/* &node-beta!-let-var1411 */
	BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2letzd2var1411za2zzreduce_betaz00(obj_t
		BgL_envz00_2801, obj_t BgL_nodez00_2802)
	{
		{	/* Reduce/sbeta.scm 224 */
			{	/* Reduce/sbeta.scm 232 */
				BgL_nodez00_bglt BgL_abodyz00_2864;

				BgL_abodyz00_2864 =
					BGl_findzd2actualzd2expressionz00zzreduce_betaz00(
					(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2802)))->BgL_bodyz00));
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2802)))->BgL_bodyz00) =
					((BgL_nodez00_bglt)
						BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_abodyz00_2864)), BUNSPEC);
				{	/* Reduce/sbeta.scm 236 */
					obj_t BgL_g1369z00_2865;

					BgL_g1369z00_2865 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2802)))->BgL_bindingsz00);
					{
						obj_t BgL_l1367z00_2867;

						BgL_l1367z00_2867 = BgL_g1369z00_2865;
					BgL_zc3z04anonymousza31834ze3z87_2866:
						if (PAIRP(BgL_l1367z00_2867))
							{	/* Reduce/sbeta.scm 236 */
								{	/* Reduce/sbeta.scm 237 */
									obj_t BgL_bindingz00_2868;

									BgL_bindingz00_2868 = CAR(BgL_l1367z00_2867);
									{	/* Reduce/sbeta.scm 237 */
										BgL_nodez00_bglt BgL_arg1836z00_2869;

										{	/* Reduce/sbeta.scm 237 */
											obj_t BgL_arg1838z00_2870;

											BgL_arg1838z00_2870 = CDR(((obj_t) BgL_bindingz00_2868));
											BgL_arg1836z00_2869 =
												BGl_nodezd2betaz12zc0zzreduce_betaz00(
												((BgL_nodez00_bglt) BgL_arg1838z00_2870));
										}
										{	/* Reduce/sbeta.scm 237 */
											obj_t BgL_auxz00_3680;
											obj_t BgL_tmpz00_3678;

											BgL_auxz00_3680 = ((obj_t) BgL_arg1836z00_2869);
											BgL_tmpz00_3678 = ((obj_t) BgL_bindingz00_2868);
											SET_CDR(BgL_tmpz00_3678, BgL_auxz00_3680);
										}
									}
								}
								{
									obj_t BgL_l1367z00_3683;

									BgL_l1367z00_3683 = CDR(BgL_l1367z00_2867);
									BgL_l1367z00_2867 = BgL_l1367z00_3683;
									goto BgL_zc3z04anonymousza31834ze3z87_2866;
								}
							}
						else
							{	/* Reduce/sbeta.scm 236 */
								((bool_t) 1);
							}
					}
				}
				if (
					(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2802)))->
						BgL_removablezf3zf3))
					{	/* Reduce/sbeta.scm 241 */
						if (NULLP(
								(((BgL_letzd2varzd2_bglt) COBJECT(
											((BgL_letzd2varzd2_bglt) BgL_nodez00_2802)))->
									BgL_bindingsz00)))
							{	/* Reduce/sbeta.scm 243 */
								return BgL_abodyz00_2864;
							}
						else
							{	/* Reduce/sbeta.scm 245 */
								bool_t BgL_test2352z00_3692;

								{	/* Reduce/sbeta.scm 245 */
									bool_t BgL_test2353z00_3693;

									{	/* Reduce/sbeta.scm 245 */
										obj_t BgL_g1372z00_2871;

										BgL_g1372z00_2871 =
											(((BgL_letzd2varzd2_bglt) COBJECT(
													((BgL_letzd2varzd2_bglt) BgL_nodez00_2802)))->
											BgL_bindingsz00);
										{
											obj_t BgL_l1370z00_2873;

											BgL_l1370z00_2873 = BgL_g1372z00_2871;
										BgL_zc3z04anonymousza32000ze3z87_2872:
											if (NULLP(BgL_l1370z00_2873))
												{	/* Reduce/sbeta.scm 245 */
													BgL_test2353z00_3693 = ((bool_t) 0);
												}
											else
												{	/* Reduce/sbeta.scm 249 */
													bool_t BgL__ortest_1373z00_2874;

													{	/* Reduce/sbeta.scm 249 */
														obj_t BgL_bz00_2875;

														BgL_bz00_2875 = CAR(((obj_t) BgL_l1370z00_2873));
														{	/* Reduce/sbeta.scm 249 */
															bool_t BgL__ortest_1119z00_2876;

															BgL__ortest_1119z00_2876 =
																(
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					CAR(
																						((obj_t) BgL_bz00_2875))))))->
																	BgL_occurrencez00) > ((long) 1));
															if (BgL__ortest_1119z00_2876)
																{	/* Reduce/sbeta.scm 249 */
																	BgL__ortest_1373z00_2874 =
																		BgL__ortest_1119z00_2876;
																}
															else
																{	/* Reduce/sbeta.scm 249 */
																	if (
																		(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_localz00_bglt)
																							CAR(
																								((obj_t) BgL_bz00_2875))))))->
																			BgL_userzf3zf3))
																		{	/* Reduce/sbeta.scm 251 */
																			obj_t BgL__andtest_1121z00_2877;

																			{	/* Reduce/sbeta.scm 252 */
																				obj_t BgL_arg2002z00_2878;

																				{	/* Reduce/sbeta.scm 252 */
																					obj_t BgL_arg2003z00_2879;

																					BgL_arg2003z00_2879 =
																						BGl_thezd2backendzd2zzbackend_backendz00
																						();
																					BgL_arg2002z00_2878 =
																						(((BgL_backendz00_bglt)
																							COBJECT(((BgL_backendz00_bglt)
																									BgL_arg2003z00_2879)))->
																						BgL_debugzd2supportzd2);
																				}
																				BgL__andtest_1121z00_2877 =
																					BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																					(CNST_TABLE_REF(((long) 5)),
																					BgL_arg2002z00_2878);
																			}
																			if (CBOOL(BgL__andtest_1121z00_2877))
																				{	/* Reduce/sbeta.scm 251 */
																					BgL__ortest_1373z00_2874 =
																						(
																						(long)
																						CINT
																						(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
																						> ((long) 0));
																				}
																			else
																				{	/* Reduce/sbeta.scm 251 */
																					BgL__ortest_1373z00_2874 =
																						((bool_t) 0);
																				}
																		}
																	else
																		{	/* Reduce/sbeta.scm 250 */
																			BgL__ortest_1373z00_2874 = ((bool_t) 0);
																		}
																}
														}
													}
													if (BgL__ortest_1373z00_2874)
														{	/* Reduce/sbeta.scm 245 */
															BgL_test2353z00_3693 = BgL__ortest_1373z00_2874;
														}
													else
														{	/* Reduce/sbeta.scm 245 */
															obj_t BgL_arg2001z00_2880;

															BgL_arg2001z00_2880 =
																CDR(((obj_t) BgL_l1370z00_2873));
															{
																obj_t BgL_l1370z00_3725;

																BgL_l1370z00_3725 = BgL_arg2001z00_2880;
																BgL_l1370z00_2873 = BgL_l1370z00_3725;
																goto BgL_zc3z04anonymousza32000ze3z87_2872;
															}
														}
												}
										}
									}
									if (BgL_test2353z00_3693)
										{	/* Reduce/sbeta.scm 245 */
											BgL_test2352z00_3692 = ((bool_t) 1);
										}
									else
										{	/* Reduce/sbeta.scm 255 */
											obj_t BgL_g1376z00_2881;

											BgL_g1376z00_2881 =
												(((BgL_letzd2varzd2_bglt) COBJECT(
														((BgL_letzd2varzd2_bglt) BgL_nodez00_2802)))->
												BgL_bindingsz00);
											{
												obj_t BgL_l1374z00_2883;

												BgL_l1374z00_2883 = BgL_g1376z00_2881;
											BgL_zc3z04anonymousza31997ze3z87_2882:
												if (NULLP(BgL_l1374z00_2883))
													{	/* Reduce/sbeta.scm 255 */
														BgL_test2352z00_3692 = ((bool_t) 0);
													}
												else
													{	/* Reduce/sbeta.scm 255 */
														bool_t BgL__ortest_1377z00_2884;

														{	/* Reduce/sbeta.scm 255 */
															obj_t BgL_arg1999z00_2885;

															BgL_arg1999z00_2885 =
																CAR(((obj_t) BgL_l1374z00_2883));
															{	/* Reduce/sbeta.scm 201 */
																obj_t BgL_arg1707z00_2886;

																BgL_arg1707z00_2886 =
																	CDR(((obj_t) BgL_arg1999z00_2885));
																BgL__ortest_1377z00_2884 =
																	BGl_dangerouszf3zf3zzreduce_betaz00
																	(BgL_arg1707z00_2886);
															}
														}
														if (BgL__ortest_1377z00_2884)
															{	/* Reduce/sbeta.scm 255 */
																BgL_test2352z00_3692 = BgL__ortest_1377z00_2884;
															}
														else
															{	/* Reduce/sbeta.scm 255 */
																obj_t BgL_arg1998z00_2887;

																BgL_arg1998z00_2887 =
																	CDR(((obj_t) BgL_l1374z00_2883));
																{
																	obj_t BgL_l1374z00_3738;

																	BgL_l1374z00_3738 = BgL_arg1998z00_2887;
																	BgL_l1374z00_2883 = BgL_l1374z00_3738;
																	goto BgL_zc3z04anonymousza31997ze3z87_2882;
																}
															}
													}
											}
										}
								}
								if (BgL_test2352z00_3692)
									{	/* Reduce/sbeta.scm 245 */
										return
											((BgL_nodez00_bglt)
											((BgL_letzd2varzd2_bglt) BgL_nodez00_2802));
									}
								else
									{	/* Reduce/sbeta.scm 257 */
										bool_t BgL_test2361z00_3741;

										{	/* Reduce/sbeta.scm 257 */
											bool_t BgL_test2362z00_3742;

											{	/* Reduce/sbeta.scm 257 */
												obj_t BgL_tmpz00_3743;

												BgL_tmpz00_3743 =
													(((BgL_letzd2varzd2_bglt) COBJECT(
															((BgL_letzd2varzd2_bglt) BgL_nodez00_2802)))->
													BgL_bindingsz00);
												BgL_test2362z00_3742 = PAIRP(BgL_tmpz00_3743);
											}
											if (BgL_test2362z00_3742)
												{	/* Reduce/sbeta.scm 257 */
													if (NULLP(CDR(
																(((BgL_letzd2varzd2_bglt) COBJECT(
																			((BgL_letzd2varzd2_bglt)
																				BgL_nodez00_2802)))->BgL_bindingsz00))))
														{	/* Reduce/sbeta.scm 259 */
															bool_t BgL_res2206z00_2888;

															{	/* Reduce/sbeta.scm 259 */
																BgL_variablez00_bglt BgL_varz00_2889;

																{	/* Reduce/sbeta.scm 259 */
																	obj_t BgL_pairz00_2890;

																	BgL_pairz00_2890 =
																		CAR(
																		(((BgL_letzd2varzd2_bglt) COBJECT(
																					((BgL_letzd2varzd2_bglt)
																						BgL_nodez00_2802)))->
																			BgL_bindingsz00));
																	BgL_varz00_2889 =
																		((BgL_variablez00_bglt)
																		CAR(BgL_pairz00_2890));
																}
																{	/* Reduce/sbeta.scm 207 */
																	bool_t BgL_test2364z00_3757;

																	{	/* Reduce/sbeta.scm 207 */
																		bool_t BgL_res2205z00_2891;

																		BgL_res2205z00_2891 =
																			BGl_isazf3zf3zz__objectz00(
																			((obj_t) BgL_abodyz00_2864),
																			BGl_varz00zzast_nodez00);
																		BgL_test2364z00_3757 = BgL_res2205z00_2891;
																	}
																	if (BgL_test2364z00_3757)
																		{	/* Reduce/sbeta.scm 207 */
																			BgL_res2206z00_2888 =
																				(
																				((obj_t)
																					(((BgL_varz00_bglt) COBJECT(
																								((BgL_varz00_bglt)
																									BgL_abodyz00_2864)))->
																						BgL_variablez00)) ==
																				((obj_t) BgL_varz00_2889));
																		}
																	else
																		{	/* Reduce/sbeta.scm 207 */
																			BgL_res2206z00_2888 = ((bool_t) 0);
																		}
																}
															}
															BgL_test2361z00_3741 = BgL_res2206z00_2888;
														}
													else
														{	/* Reduce/sbeta.scm 258 */
															BgL_test2361z00_3741 = ((bool_t) 0);
														}
												}
											else
												{	/* Reduce/sbeta.scm 257 */
													BgL_test2361z00_3741 = ((bool_t) 0);
												}
										}
										if (BgL_test2361z00_3741)
											{	/* Reduce/sbeta.scm 257 */
												BGl_za2removedza2z00zzreduce_betaz00 =
													(BGl_za2removedza2z00zzreduce_betaz00 + ((long) 1));
												{	/* Reduce/sbeta.scm 262 */
													obj_t BgL_arg1881z00_2892;

													{	/* Reduce/sbeta.scm 262 */
														obj_t BgL_pairz00_2893;

														BgL_pairz00_2893 =
															(((BgL_letzd2varzd2_bglt) COBJECT(
																	((BgL_letzd2varzd2_bglt) BgL_nodez00_2802)))->
															BgL_bindingsz00);
														BgL_arg1881z00_2892 = CDR(CAR(BgL_pairz00_2893));
													}
													return
														BGl_nodezd2betaz12zc0zzreduce_betaz00(
														((BgL_nodez00_bglt) BgL_arg1881z00_2892));
												}
											}
										else
											{	/* Reduce/sbeta.scm 263 */
												bool_t BgL_test2365z00_3772;

												{	/* Reduce/sbeta.scm 263 */
													bool_t BgL_test2366z00_3773;

													{	/* Reduce/sbeta.scm 263 */
														bool_t BgL_res2208z00_2894;

														BgL_res2208z00_2894 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_abodyz00_2864),
															BGl_conditionalz00zzast_nodez00);
														BgL_test2366z00_3773 = BgL_res2208z00_2894;
													}
													if (BgL_test2366z00_3773)
														{	/* Reduce/sbeta.scm 263 */
															if (NULLP(CDR(
																		(((BgL_letzd2varzd2_bglt) COBJECT(
																					((BgL_letzd2varzd2_bglt)
																						BgL_nodez00_2802)))->
																			BgL_bindingsz00))))
																{	/* Reduce/sbeta.scm 265 */
																	bool_t BgL_res2211z00_2895;

																	{	/* Reduce/sbeta.scm 265 */
																		BgL_variablez00_bglt BgL_varz00_2896;
																		BgL_nodez00_bglt BgL_nodez00_2897;

																		{	/* Reduce/sbeta.scm 265 */
																			obj_t BgL_pairz00_2898;

																			BgL_pairz00_2898 =
																				CAR(
																				(((BgL_letzd2varzd2_bglt) COBJECT(
																							((BgL_letzd2varzd2_bglt)
																								BgL_nodez00_2802)))->
																					BgL_bindingsz00));
																			BgL_varz00_2896 =
																				((BgL_variablez00_bglt)
																				CAR(BgL_pairz00_2898));
																		}
																		BgL_nodez00_2897 =
																			(((BgL_conditionalz00_bglt) COBJECT(
																					((BgL_conditionalz00_bglt)
																						BgL_abodyz00_2864)))->BgL_testz00);
																		{	/* Reduce/sbeta.scm 207 */
																			bool_t BgL_test2368z00_3788;

																			{	/* Reduce/sbeta.scm 207 */
																				bool_t BgL_res2210z00_2899;

																				BgL_res2210z00_2899 =
																					BGl_isazf3zf3zz__objectz00(
																					((obj_t) BgL_nodez00_2897),
																					BGl_varz00zzast_nodez00);
																				BgL_test2368z00_3788 =
																					BgL_res2210z00_2899;
																			}
																			if (BgL_test2368z00_3788)
																				{	/* Reduce/sbeta.scm 207 */
																					BgL_res2211z00_2895 =
																						(
																						((obj_t)
																							(((BgL_varz00_bglt) COBJECT(
																										((BgL_varz00_bglt)
																											BgL_nodez00_2897)))->
																								BgL_variablez00)) ==
																						((obj_t) BgL_varz00_2896));
																				}
																			else
																				{	/* Reduce/sbeta.scm 207 */
																					BgL_res2211z00_2895 = ((bool_t) 0);
																				}
																		}
																	}
																	BgL_test2365z00_3772 = BgL_res2211z00_2895;
																}
															else
																{	/* Reduce/sbeta.scm 264 */
																	BgL_test2365z00_3772 = ((bool_t) 0);
																}
														}
													else
														{	/* Reduce/sbeta.scm 263 */
															BgL_test2365z00_3772 = ((bool_t) 0);
														}
												}
												if (BgL_test2365z00_3772)
													{	/* Reduce/sbeta.scm 263 */
														BGl_za2removedza2z00zzreduce_betaz00 =
															(BGl_za2removedza2z00zzreduce_betaz00 +
															((long) 1));
														{	/* Reduce/sbeta.scm 269 */
															obj_t BgL_valz00_2900;

															BgL_valz00_2900 =
																CDR(CAR(
																	(((BgL_letzd2varzd2_bglt) COBJECT(
																				((BgL_letzd2varzd2_bglt)
																					BgL_nodez00_2802)))->
																		BgL_bindingsz00)));
															((((BgL_conditionalz00_bglt)
																		COBJECT(((BgL_conditionalz00_bglt)
																				BgL_abodyz00_2864)))->BgL_testz00) =
																((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
																		BgL_valz00_2900)), BUNSPEC);
															if (CBOOL((((BgL_nodezf2effectzf2_bglt)
																			COBJECT(((BgL_nodezf2effectzf2_bglt) (
																						(BgL_conditionalz00_bglt)
																						BgL_abodyz00_2864))))->
																		BgL_sidezd2effectzd2)))
																{	/* Reduce/sbeta.scm 271 */
																	BFALSE;
																}
															else
																{	/* Reduce/sbeta.scm 272 */
																	bool_t BgL_arg1896z00_2901;

																	BgL_arg1896z00_2901 =
																		BGl_sidezd2effectzf3z21zzeffect_effectz00(
																		((BgL_nodez00_bglt) BgL_valz00_2900));
																	((((BgL_nodezf2effectzf2_bglt) COBJECT(
																					((BgL_nodezf2effectzf2_bglt)
																						((BgL_conditionalz00_bglt)
																							BgL_abodyz00_2864))))->
																			BgL_sidezd2effectzd2) =
																		((obj_t) BBOOL(BgL_arg1896z00_2901)),
																		BUNSPEC);
																}
														}
														return BgL_abodyz00_2864;
													}
												else
													{	/* Reduce/sbeta.scm 274 */
														bool_t BgL_test2370z00_3815;

														{	/* Reduce/sbeta.scm 274 */
															bool_t BgL_test2371z00_3816;

															{	/* Reduce/sbeta.scm 274 */
																bool_t BgL_res2213z00_2902;

																BgL_res2213z00_2902 =
																	BGl_isazf3zf3zz__objectz00(
																	((obj_t) BgL_abodyz00_2864),
																	BGl_appz00zzast_nodez00);
																BgL_test2371z00_3816 = BgL_res2213z00_2902;
															}
															if (BgL_test2371z00_3816)
																{	/* Reduce/sbeta.scm 275 */
																	bool_t BgL_test2372z00_3819;

																	{	/* Reduce/sbeta.scm 275 */
																		obj_t BgL_g1380z00_2903;

																		BgL_g1380z00_2903 =
																			(((BgL_appz00_bglt) COBJECT(
																					((BgL_appz00_bglt)
																						BgL_abodyz00_2864)))->BgL_argsz00);
																		{
																			obj_t BgL_l1378z00_2905;

																			BgL_l1378z00_2905 = BgL_g1380z00_2903;
																		BgL_zc3z04anonymousza31981ze3z87_2904:
																			if (NULLP(BgL_l1378z00_2905))
																				{	/* Reduce/sbeta.scm 275 */
																					BgL_test2372z00_3819 = ((bool_t) 1);
																				}
																			else
																				{	/* Reduce/sbeta.scm 275 */
																					bool_t BgL_test2374z00_3824;

																					{	/* Reduce/sbeta.scm 275 */
																						obj_t BgL_arg1983z00_2906;

																						BgL_arg1983z00_2906 =
																							CAR(((obj_t) BgL_l1378z00_2905));
																						BgL_test2374z00_3824 =
																							BGl_simplezf3ze70z14zzreduce_betaz00
																							(BgL_arg1983z00_2906);
																					}
																					if (BgL_test2374z00_3824)
																						{	/* Reduce/sbeta.scm 275 */
																							obj_t BgL_arg1982z00_2907;

																							BgL_arg1982z00_2907 =
																								CDR(
																								((obj_t) BgL_l1378z00_2905));
																							{
																								obj_t BgL_l1378z00_3830;

																								BgL_l1378z00_3830 =
																									BgL_arg1982z00_2907;
																								BgL_l1378z00_2905 =
																									BgL_l1378z00_3830;
																								goto
																									BgL_zc3z04anonymousza31981ze3z87_2904;
																							}
																						}
																					else
																						{	/* Reduce/sbeta.scm 275 */
																							BgL_test2372z00_3819 =
																								((bool_t) 0);
																						}
																				}
																		}
																	}
																	if (BgL_test2372z00_3819)
																		{	/* Reduce/sbeta.scm 276 */
																			bool_t BgL_test2375z00_3831;

																			{	/* Reduce/sbeta.scm 276 */
																				obj_t BgL_g1384z00_2908;

																				BgL_g1384z00_2908 =
																					(((BgL_appz00_bglt) COBJECT(
																							((BgL_appz00_bglt)
																								BgL_abodyz00_2864)))->
																					BgL_argsz00);
																				{
																					obj_t BgL_l1382z00_2910;

																					BgL_l1382z00_2910 = BgL_g1384z00_2908;
																				BgL_zc3z04anonymousza31978ze3z87_2909:
																					if (NULLP(BgL_l1382z00_2910))
																						{	/* Reduce/sbeta.scm 276 */
																							BgL_test2375z00_3831 =
																								((bool_t) 0);
																						}
																					else
																						{	/* Reduce/sbeta.scm 276 */
																							bool_t BgL__ortest_1385z00_2911;

																							{	/* Reduce/sbeta.scm 276 */
																								obj_t BgL_arg1980z00_2912;

																								BgL_arg1980z00_2912 =
																									CAR(
																									((obj_t) BgL_l1382z00_2910));
																								BgL__ortest_1385z00_2911 =
																									BGl_sidezd2effectzf3z21zzeffect_effectz00
																									(((BgL_nodez00_bglt)
																										BgL_arg1980z00_2912));
																							}
																							if (BgL__ortest_1385z00_2911)
																								{	/* Reduce/sbeta.scm 276 */
																									BgL_test2375z00_3831 =
																										BgL__ortest_1385z00_2911;
																								}
																							else
																								{	/* Reduce/sbeta.scm 276 */
																									obj_t BgL_arg1979z00_2913;

																									BgL_arg1979z00_2913 =
																										CDR(
																										((obj_t)
																											BgL_l1382z00_2910));
																									{
																										obj_t BgL_l1382z00_3843;

																										BgL_l1382z00_3843 =
																											BgL_arg1979z00_2913;
																										BgL_l1382z00_2910 =
																											BgL_l1382z00_3843;
																										goto
																											BgL_zc3z04anonymousza31978ze3z87_2909;
																									}
																								}
																						}
																				}
																			}
																			if (BgL_test2375z00_3831)
																				{	/* Reduce/sbeta.scm 276 */
																					BgL_test2370z00_3815 = ((bool_t) 0);
																				}
																			else
																				{	/* Reduce/sbeta.scm 277 */
																					obj_t BgL_g1388z00_2914;

																					BgL_g1388z00_2914 =
																						(((BgL_letzd2varzd2_bglt) COBJECT(
																								((BgL_letzd2varzd2_bglt)
																									BgL_nodez00_2802)))->
																						BgL_bindingsz00);
																					{
																						obj_t BgL_l1386z00_2916;

																						BgL_l1386z00_2916 =
																							BgL_g1388z00_2914;
																					BgL_zc3z04anonymousza31973ze3z87_2915:
																						if (NULLP
																							(BgL_l1386z00_2916))
																							{	/* Reduce/sbeta.scm 277 */
																								BgL_test2370z00_3815 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Reduce/sbeta.scm 277 */
																								bool_t BgL_test2379z00_3848;

																								{	/* Reduce/sbeta.scm 278 */
																									obj_t BgL_bz00_2917;

																									BgL_bz00_2917 =
																										CAR(
																										((obj_t)
																											BgL_l1386z00_2916));
																									{	/* Reduce/sbeta.scm 278 */
																										bool_t BgL_test2380z00_3851;

																										{	/* Reduce/sbeta.scm 278 */
																											obj_t BgL_arg1976z00_2918;
																											obj_t BgL_arg1977z00_2919;

																											BgL_arg1976z00_2918 =
																												CAR(
																												((obj_t)
																													BgL_bz00_2917));
																											BgL_arg1977z00_2919 =
																												(((BgL_appz00_bglt)
																													COBJECT((
																															(BgL_appz00_bglt)
																															BgL_abodyz00_2864)))->
																												BgL_argsz00);
																											BgL_test2380z00_3851 =
																												BGl_argumentzf3zf3zzreduce_betaz00
																												(((BgL_variablez00_bglt)
																													BgL_arg1976z00_2918),
																												BgL_arg1977z00_2919);
																										}
																										if (BgL_test2380z00_3851)
																											{	/* Reduce/sbeta.scm 282 */
																												bool_t
																													BgL_test2381z00_3858;
																												{	/* Reduce/sbeta.scm 282 */
																													obj_t
																														BgL_arg1975z00_2920;
																													BgL_arg1975z00_2920 =
																														CDR(((obj_t)
																															BgL_bz00_2917));
																													BgL_test2381z00_3858 =
																														BGl_isazf3zf3zz__objectz00
																														(BgL_arg1975z00_2920,
																														BGl_kwotez00zzast_nodez00);
																												}
																												if (BgL_test2381z00_3858)
																													{	/* Reduce/sbeta.scm 282 */
																														BgL_test2379z00_3848
																															= ((bool_t) 0);
																													}
																												else
																													{	/* Reduce/sbeta.scm 282 */
																														BgL_test2379z00_3848
																															= ((bool_t) 1);
																													}
																											}
																										else
																											{	/* Reduce/sbeta.scm 278 */
																												BgL_test2379z00_3848 =
																													((bool_t) 0);
																											}
																									}
																								}
																								if (BgL_test2379z00_3848)
																									{	/* Reduce/sbeta.scm 277 */
																										obj_t BgL_arg1974z00_2921;

																										BgL_arg1974z00_2921 =
																											CDR(
																											((obj_t)
																												BgL_l1386z00_2916));
																										{
																											obj_t BgL_l1386z00_3864;

																											BgL_l1386z00_3864 =
																												BgL_arg1974z00_2921;
																											BgL_l1386z00_2916 =
																												BgL_l1386z00_3864;
																											goto
																												BgL_zc3z04anonymousza31973ze3z87_2915;
																										}
																									}
																								else
																									{	/* Reduce/sbeta.scm 277 */
																										BgL_test2370z00_3815 =
																											((bool_t) 0);
																									}
																							}
																					}
																				}
																		}
																	else
																		{	/* Reduce/sbeta.scm 275 */
																			BgL_test2370z00_3815 = ((bool_t) 0);
																		}
																}
															else
																{	/* Reduce/sbeta.scm 274 */
																	BgL_test2370z00_3815 = ((bool_t) 0);
																}
														}
														if (BgL_test2370z00_3815)
															{	/* Reduce/sbeta.scm 274 */
																BGl_za2removedza2z00zzreduce_betaz00 =
																	(BGl_za2removedza2z00zzreduce_betaz00 +
																	bgl_list_length(
																		(((BgL_letzd2varzd2_bglt) COBJECT(
																					((BgL_letzd2varzd2_bglt)
																						BgL_nodez00_2802)))->
																			BgL_bindingsz00)));
																{	/* Reduce/sbeta.scm 288 */
																	obj_t BgL_nargsz00_2922;

																	{	/* Reduce/sbeta.scm 288 */
																		obj_t BgL_arg1934z00_2923;
																		obj_t BgL_arg1935z00_2924;

																		BgL_arg1934z00_2923 =
																			(((BgL_letzd2varzd2_bglt) COBJECT(
																					((BgL_letzd2varzd2_bglt)
																						BgL_nodez00_2802)))->
																			BgL_bindingsz00);
																		BgL_arg1935z00_2924 =
																			(((BgL_appz00_bglt)
																				COBJECT(((BgL_appz00_bglt)
																						BgL_abodyz00_2864)))->BgL_argsz00);
																		BgL_nargsz00_2922 =
																			BGl_makezd2argszd2listz00zzreduce_betaz00
																			(BgL_arg1934z00_2923,
																			BgL_arg1935z00_2924);
																	}
																	((((BgL_appz00_bglt) COBJECT(
																					((BgL_appz00_bglt)
																						BgL_abodyz00_2864)))->BgL_argsz00) =
																		((obj_t) BgL_nargsz00_2922), BUNSPEC);
																	if (CBOOL((((BgL_nodezf2effectzf2_bglt)
																					COBJECT(((BgL_nodezf2effectzf2_bglt) (
																								(BgL_appz00_bglt)
																								BgL_abodyz00_2864))))->
																				BgL_sidezd2effectzd2)))
																		{	/* Reduce/sbeta.scm 290 */
																			BFALSE;
																		}
																	else
																		{	/* Reduce/sbeta.scm 291 */
																			bool_t BgL_arg1929z00_2925;

																			{
																				obj_t BgL_l1390z00_2927;

																				BgL_l1390z00_2927 = BgL_nargsz00_2922;
																			BgL_zc3z04anonymousza31930ze3z87_2926:
																				if (NULLP(BgL_l1390z00_2927))
																					{	/* Reduce/sbeta.scm 291 */
																						BgL_arg1929z00_2925 = ((bool_t) 0);
																					}
																				else
																					{	/* Reduce/sbeta.scm 291 */
																						bool_t BgL__ortest_1392z00_2928;

																						{	/* Reduce/sbeta.scm 291 */
																							obj_t BgL_arg1933z00_2929;

																							BgL_arg1933z00_2929 =
																								CAR(
																								((obj_t) BgL_l1390z00_2927));
																							BgL__ortest_1392z00_2928 =
																								BGl_sidezd2effectzf3z21zzeffect_effectz00
																								(((BgL_nodez00_bglt)
																									BgL_arg1933z00_2929));
																						}
																						if (BgL__ortest_1392z00_2928)
																							{	/* Reduce/sbeta.scm 291 */
																								BgL_arg1929z00_2925 =
																									BgL__ortest_1392z00_2928;
																							}
																						else
																							{	/* Reduce/sbeta.scm 291 */
																								obj_t BgL_arg1932z00_2930;

																								BgL_arg1932z00_2930 =
																									CDR(
																									((obj_t) BgL_l1390z00_2927));
																								{
																									obj_t BgL_l1390z00_3890;

																									BgL_l1390z00_3890 =
																										BgL_arg1932z00_2930;
																									BgL_l1390z00_2927 =
																										BgL_l1390z00_3890;
																									goto
																										BgL_zc3z04anonymousza31930ze3z87_2926;
																								}
																							}
																					}
																			}
																			((((BgL_nodezf2effectzf2_bglt) COBJECT(
																							((BgL_nodezf2effectzf2_bglt)
																								((BgL_appz00_bglt)
																									BgL_abodyz00_2864))))->
																					BgL_sidezd2effectzd2) =
																				((obj_t) BBOOL(BgL_arg1929z00_2925)),
																				BUNSPEC);
																		}
																}
																return BgL_abodyz00_2864;
															}
														else
															{	/* Reduce/sbeta.scm 293 */
																bool_t BgL_test2385z00_3895;

																{	/* Reduce/sbeta.scm 293 */
																	bool_t BgL_test2386z00_3896;

																	{	/* Reduce/sbeta.scm 293 */
																		bool_t BgL_res2220z00_2931;

																		BgL_res2220z00_2931 =
																			BGl_isazf3zf3zz__objectz00(
																			((obj_t) BgL_abodyz00_2864),
																			BGl_externz00zzast_nodez00);
																		BgL_test2386z00_3896 = BgL_res2220z00_2931;
																	}
																	if (BgL_test2386z00_3896)
																		{	/* Reduce/sbeta.scm 294 */
																			bool_t BgL_test2387z00_3899;

																			{	/* Reduce/sbeta.scm 294 */
																				obj_t BgL_g1395z00_2932;

																				BgL_g1395z00_2932 =
																					(((BgL_externz00_bglt) COBJECT(
																							((BgL_externz00_bglt)
																								BgL_abodyz00_2864)))->
																					BgL_exprza2za2);
																				{
																					obj_t BgL_l1393z00_2934;

																					BgL_l1393z00_2934 = BgL_g1395z00_2932;
																				BgL_zc3z04anonymousza31970ze3z87_2933:
																					if (NULLP(BgL_l1393z00_2934))
																						{	/* Reduce/sbeta.scm 294 */
																							BgL_test2387z00_3899 =
																								((bool_t) 1);
																						}
																					else
																						{	/* Reduce/sbeta.scm 294 */
																							bool_t BgL_test2389z00_3904;

																							{	/* Reduce/sbeta.scm 294 */
																								obj_t BgL_arg1972z00_2935;

																								BgL_arg1972z00_2935 =
																									CAR(
																									((obj_t) BgL_l1393z00_2934));
																								BgL_test2389z00_3904 =
																									BGl_simplezf3ze70z14zzreduce_betaz00
																									(BgL_arg1972z00_2935);
																							}
																							if (BgL_test2389z00_3904)
																								{	/* Reduce/sbeta.scm 294 */
																									obj_t BgL_arg1971z00_2936;

																									BgL_arg1971z00_2936 =
																										CDR(
																										((obj_t)
																											BgL_l1393z00_2934));
																									{
																										obj_t BgL_l1393z00_3910;

																										BgL_l1393z00_3910 =
																											BgL_arg1971z00_2936;
																										BgL_l1393z00_2934 =
																											BgL_l1393z00_3910;
																										goto
																											BgL_zc3z04anonymousza31970ze3z87_2933;
																									}
																								}
																							else
																								{	/* Reduce/sbeta.scm 294 */
																									BgL_test2387z00_3899 =
																										((bool_t) 0);
																								}
																						}
																				}
																			}
																			if (BgL_test2387z00_3899)
																				{	/* Reduce/sbeta.scm 295 */
																					obj_t BgL_g1399z00_2937;

																					BgL_g1399z00_2937 =
																						(((BgL_letzd2varzd2_bglt) COBJECT(
																								((BgL_letzd2varzd2_bglt)
																									BgL_nodez00_2802)))->
																						BgL_bindingsz00);
																					{
																						obj_t BgL_l1397z00_2939;

																						BgL_l1397z00_2939 =
																							BgL_g1399z00_2937;
																					BgL_zc3z04anonymousza31965ze3z87_2938:
																						if (NULLP
																							(BgL_l1397z00_2939))
																							{	/* Reduce/sbeta.scm 295 */
																								BgL_test2385z00_3895 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Reduce/sbeta.scm 295 */
																								bool_t BgL_test2391z00_3915;

																								{	/* Reduce/sbeta.scm 296 */
																									obj_t BgL_bz00_2940;

																									BgL_bz00_2940 =
																										CAR(
																										((obj_t)
																											BgL_l1397z00_2939));
																									{	/* Reduce/sbeta.scm 296 */
																										bool_t BgL_test2392z00_3918;

																										{	/* Reduce/sbeta.scm 296 */
																											obj_t BgL_arg1968z00_2941;
																											obj_t BgL_arg1969z00_2942;

																											BgL_arg1968z00_2941 =
																												CAR(
																												((obj_t)
																													BgL_bz00_2940));
																											BgL_arg1969z00_2942 =
																												(((BgL_externz00_bglt)
																													COBJECT((
																															(BgL_externz00_bglt)
																															BgL_abodyz00_2864)))->
																												BgL_exprza2za2);
																											BgL_test2392z00_3918 =
																												BGl_argumentzf3zf3zzreduce_betaz00
																												(((BgL_variablez00_bglt)
																													BgL_arg1968z00_2941),
																												BgL_arg1969z00_2942);
																										}
																										if (BgL_test2392z00_3918)
																											{	/* Reduce/sbeta.scm 300 */
																												bool_t
																													BgL_test2393z00_3925;
																												{	/* Reduce/sbeta.scm 300 */
																													obj_t
																														BgL_arg1967z00_2943;
																													BgL_arg1967z00_2943 =
																														CDR(((obj_t)
																															BgL_bz00_2940));
																													BgL_test2393z00_3925 =
																														BGl_isazf3zf3zz__objectz00
																														(BgL_arg1967z00_2943,
																														BGl_kwotez00zzast_nodez00);
																												}
																												if (BgL_test2393z00_3925)
																													{	/* Reduce/sbeta.scm 300 */
																														BgL_test2391z00_3915
																															= ((bool_t) 0);
																													}
																												else
																													{	/* Reduce/sbeta.scm 300 */
																														BgL_test2391z00_3915
																															= ((bool_t) 1);
																													}
																											}
																										else
																											{	/* Reduce/sbeta.scm 296 */
																												BgL_test2391z00_3915 =
																													((bool_t) 0);
																											}
																									}
																								}
																								if (BgL_test2391z00_3915)
																									{	/* Reduce/sbeta.scm 295 */
																										obj_t BgL_arg1966z00_2944;

																										BgL_arg1966z00_2944 =
																											CDR(
																											((obj_t)
																												BgL_l1397z00_2939));
																										{
																											obj_t BgL_l1397z00_3931;

																											BgL_l1397z00_3931 =
																												BgL_arg1966z00_2944;
																											BgL_l1397z00_2939 =
																												BgL_l1397z00_3931;
																											goto
																												BgL_zc3z04anonymousza31965ze3z87_2938;
																										}
																									}
																								else
																									{	/* Reduce/sbeta.scm 295 */
																										BgL_test2385z00_3895 =
																											((bool_t) 0);
																									}
																							}
																					}
																				}
																			else
																				{	/* Reduce/sbeta.scm 294 */
																					BgL_test2385z00_3895 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Reduce/sbeta.scm 293 */
																			BgL_test2385z00_3895 = ((bool_t) 0);
																		}
																}
																if (BgL_test2385z00_3895)
																	{	/* Reduce/sbeta.scm 293 */
																		BGl_za2removedza2z00zzreduce_betaz00 =
																			(BGl_za2removedza2z00zzreduce_betaz00 +
																			bgl_list_length(
																				(((BgL_letzd2varzd2_bglt) COBJECT(
																							((BgL_letzd2varzd2_bglt)
																								BgL_nodez00_2802)))->
																					BgL_bindingsz00)));
																		{	/* Reduce/sbeta.scm 306 */
																			obj_t BgL_nexprza2za2_2945;

																			{	/* Reduce/sbeta.scm 306 */
																				obj_t BgL_arg1962z00_2946;
																				obj_t BgL_arg1963z00_2947;

																				BgL_arg1962z00_2946 =
																					(((BgL_letzd2varzd2_bglt) COBJECT(
																							((BgL_letzd2varzd2_bglt)
																								BgL_nodez00_2802)))->
																					BgL_bindingsz00);
																				BgL_arg1963z00_2947 =
																					(((BgL_externz00_bglt)
																						COBJECT(((BgL_externz00_bglt) ((
																										(BgL_letzd2varzd2_bglt)
																										COBJECT((
																												(BgL_letzd2varzd2_bglt)
																												BgL_nodez00_2802)))->
																									BgL_bodyz00))))->
																					BgL_exprza2za2);
																				BgL_nexprza2za2_2945 =
																					BGl_makezd2argszd2listz00zzreduce_betaz00
																					(BgL_arg1962z00_2946,
																					BgL_arg1963z00_2947);
																			}
																			((((BgL_externz00_bglt) COBJECT(
																							((BgL_externz00_bglt)
																								BgL_abodyz00_2864)))->
																					BgL_exprza2za2) =
																				((obj_t) ((obj_t)
																						BgL_nexprza2za2_2945)), BUNSPEC);
																			if (CBOOL((((BgL_nodezf2effectzf2_bglt)
																							COBJECT((
																									(BgL_nodezf2effectzf2_bglt) (
																										(BgL_externz00_bglt)
																										BgL_abodyz00_2864))))->
																						BgL_sidezd2effectzd2)))
																				{	/* Reduce/sbeta.scm 308 */
																					BFALSE;
																				}
																			else
																				{	/* Reduce/sbeta.scm 309 */
																					bool_t BgL_arg1957z00_2948;

																					{
																						obj_t BgL_l1401z00_2950;

																						BgL_l1401z00_2950 =
																							BgL_nexprza2za2_2945;
																					BgL_zc3z04anonymousza31958ze3z87_2949:
																						if (NULLP
																							(BgL_l1401z00_2950))
																							{	/* Reduce/sbeta.scm 309 */
																								BgL_arg1957z00_2948 =
																									((bool_t) 0);
																							}
																						else
																							{	/* Reduce/sbeta.scm 309 */
																								bool_t BgL__ortest_1403z00_2951;

																								{	/* Reduce/sbeta.scm 309 */
																									obj_t BgL_arg1961z00_2952;

																									BgL_arg1961z00_2952 =
																										CAR(
																										((obj_t)
																											BgL_l1401z00_2950));
																									BgL__ortest_1403z00_2951 =
																										BGl_sidezd2effectzf3z21zzeffect_effectz00
																										(((BgL_nodez00_bglt)
																											BgL_arg1961z00_2952));
																								}
																								if (BgL__ortest_1403z00_2951)
																									{	/* Reduce/sbeta.scm 309 */
																										BgL_arg1957z00_2948 =
																											BgL__ortest_1403z00_2951;
																									}
																								else
																									{	/* Reduce/sbeta.scm 309 */
																										obj_t BgL_arg1960z00_2953;

																										BgL_arg1960z00_2953 =
																											CDR(
																											((obj_t)
																												BgL_l1401z00_2950));
																										{
																											obj_t BgL_l1401z00_3960;

																											BgL_l1401z00_3960 =
																												BgL_arg1960z00_2953;
																											BgL_l1401z00_2950 =
																												BgL_l1401z00_3960;
																											goto
																												BgL_zc3z04anonymousza31958ze3z87_2949;
																										}
																									}
																							}
																					}
																					((((BgL_nodezf2effectzf2_bglt)
																								COBJECT((
																										(BgL_nodezf2effectzf2_bglt)
																										((BgL_externz00_bglt)
																											BgL_abodyz00_2864))))->
																							BgL_sidezd2effectzd2) =
																						((obj_t)
																							BBOOL(BgL_arg1957z00_2948)),
																						BUNSPEC);
																				}
																		}
																		return BgL_abodyz00_2864;
																	}
																else
																	{	/* Reduce/sbeta.scm 293 */
																		return
																			((BgL_nodez00_bglt)
																			((BgL_letzd2varzd2_bglt)
																				BgL_nodez00_2802));
																	}
															}
													}
											}
									}
							}
					}
				else
					{	/* Reduce/sbeta.scm 241 */
						return
							((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2802));
					}
			}
		}

	}



/* simple?~0 */
	bool_t BGl_simplezf3ze70z14zzreduce_betaz00(obj_t BgL_ez00_2052)
	{
		{	/* Reduce/sbeta.scm 230 */
			{	/* Reduce/sbeta.scm 226 */
				bool_t BgL__ortest_1110z00_2054;

				BgL__ortest_1110z00_2054 =
					BGl_isazf3zf3zz__objectz00(BgL_ez00_2052, BGl_atomz00zzast_nodez00);
				if (BgL__ortest_1110z00_2054)
					{	/* Reduce/sbeta.scm 226 */
						return BgL__ortest_1110z00_2054;
					}
				else
					{	/* Reduce/sbeta.scm 227 */
						bool_t BgL__ortest_1111z00_2055;

						BgL__ortest_1111z00_2055 =
							BGl_isazf3zf3zz__objectz00(BgL_ez00_2052,
							BGl_varz00zzast_nodez00);
						if (BgL__ortest_1111z00_2055)
							{	/* Reduce/sbeta.scm 227 */
								return BgL__ortest_1111z00_2055;
							}
						else
							{	/* Reduce/sbeta.scm 228 */
								bool_t BgL__ortest_1112z00_2056;

								if (BGl_isazf3zf3zz__objectz00(BgL_ez00_2052,
										BGl_vrefz00zzast_nodez00))
									{	/* Reduce/sbeta.scm 228 */
										obj_t BgL_g1357z00_2083;

										BgL_g1357z00_2083 =
											(((BgL_externz00_bglt) COBJECT(
													((BgL_externz00_bglt)
														((BgL_vrefz00_bglt) BgL_ez00_2052))))->
											BgL_exprza2za2);
										{
											obj_t BgL_l1355z00_2085;

											BgL_l1355z00_2085 = BgL_g1357z00_2083;
										BgL_zc3z04anonymousza32022ze3z87_2086:
											if (NULLP(BgL_l1355z00_2085))
												{	/* Reduce/sbeta.scm 228 */
													BgL__ortest_1112z00_2056 = ((bool_t) 1);
												}
											else
												{	/* Reduce/sbeta.scm 228 */
													bool_t BgL_test2401z00_3980;

													{	/* Reduce/sbeta.scm 228 */
														obj_t BgL_arg2028z00_2091;

														BgL_arg2028z00_2091 =
															CAR(((obj_t) BgL_l1355z00_2085));
														BgL_test2401z00_3980 =
															BGl_simplezf3ze70z14zzreduce_betaz00
															(BgL_arg2028z00_2091);
													}
													if (BgL_test2401z00_3980)
														{	/* Reduce/sbeta.scm 228 */
															obj_t BgL_arg2026z00_2090;

															BgL_arg2026z00_2090 =
																CDR(((obj_t) BgL_l1355z00_2085));
															{
																obj_t BgL_l1355z00_3986;

																BgL_l1355z00_3986 = BgL_arg2026z00_2090;
																BgL_l1355z00_2085 = BgL_l1355z00_3986;
																goto BgL_zc3z04anonymousza32022ze3z87_2086;
															}
														}
													else
														{	/* Reduce/sbeta.scm 228 */
															BgL__ortest_1112z00_2056 = ((bool_t) 0);
														}
												}
										}
									}
								else
									{	/* Reduce/sbeta.scm 228 */
										BgL__ortest_1112z00_2056 = ((bool_t) 0);
									}
								if (BgL__ortest_1112z00_2056)
									{	/* Reduce/sbeta.scm 228 */
										return BgL__ortest_1112z00_2056;
									}
								else
									{	/* Reduce/sbeta.scm 229 */
										bool_t BgL__ortest_1113z00_2057;

										if (BGl_isazf3zf3zz__objectz00(BgL_ez00_2052,
												BGl_appz00zzast_nodez00))
											{	/* Reduce/sbeta.scm 229 */
												bool_t BgL_test2404z00_3990;

												{	/* Reduce/sbeta.scm 229 */
													obj_t BgL_g1361z00_2072;

													BgL_g1361z00_2072 =
														(((BgL_appz00_bglt) COBJECT(
																((BgL_appz00_bglt) BgL_ez00_2052)))->
														BgL_argsz00);
													{
														obj_t BgL_l1359z00_2074;

														BgL_l1359z00_2074 = BgL_g1361z00_2072;
													BgL_zc3z04anonymousza32018ze3z87_2075:
														if (NULLP(BgL_l1359z00_2074))
															{	/* Reduce/sbeta.scm 229 */
																BgL_test2404z00_3990 = ((bool_t) 1);
															}
														else
															{	/* Reduce/sbeta.scm 229 */
																bool_t BgL_test2406z00_3995;

																{	/* Reduce/sbeta.scm 229 */
																	obj_t BgL_arg2021z00_2080;

																	BgL_arg2021z00_2080 =
																		CAR(((obj_t) BgL_l1359z00_2074));
																	BgL_test2406z00_3995 =
																		BGl_simplezf3ze70z14zzreduce_betaz00
																		(BgL_arg2021z00_2080);
																}
																if (BgL_test2406z00_3995)
																	{	/* Reduce/sbeta.scm 229 */
																		obj_t BgL_arg2020z00_2079;

																		BgL_arg2020z00_2079 =
																			CDR(((obj_t) BgL_l1359z00_2074));
																		{
																			obj_t BgL_l1359z00_4001;

																			BgL_l1359z00_4001 = BgL_arg2020z00_2079;
																			BgL_l1359z00_2074 = BgL_l1359z00_4001;
																			goto
																				BgL_zc3z04anonymousza32018ze3z87_2075;
																		}
																	}
																else
																	{	/* Reduce/sbeta.scm 229 */
																		BgL_test2404z00_3990 = ((bool_t) 0);
																	}
															}
													}
												}
												if (BgL_test2404z00_3990)
													{	/* Reduce/sbeta.scm 229 */
														if (BGl_dangerouszf3zf3zzreduce_betaz00
															(BgL_ez00_2052))
															{	/* Reduce/sbeta.scm 229 */
																BgL__ortest_1113z00_2057 = ((bool_t) 0);
															}
														else
															{	/* Reduce/sbeta.scm 229 */
																BgL__ortest_1113z00_2057 = ((bool_t) 1);
															}
													}
												else
													{	/* Reduce/sbeta.scm 229 */
														BgL__ortest_1113z00_2057 = ((bool_t) 0);
													}
											}
										else
											{	/* Reduce/sbeta.scm 229 */
												BgL__ortest_1113z00_2057 = ((bool_t) 0);
											}
										if (BgL__ortest_1113z00_2057)
											{	/* Reduce/sbeta.scm 229 */
												return BgL__ortest_1113z00_2057;
											}
										else
											{	/* Reduce/sbeta.scm 229 */
												if (BGl_isazf3zf3zz__objectz00(BgL_ez00_2052,
														BGl_getfieldz00zzast_nodez00))
													{	/* Reduce/sbeta.scm 230 */
														obj_t BgL_g1365z00_2059;

														BgL_g1365z00_2059 =
															(((BgL_externz00_bglt) COBJECT(
																	((BgL_externz00_bglt)
																		((BgL_getfieldz00_bglt) BgL_ez00_2052))))->
															BgL_exprza2za2);
														{
															obj_t BgL_l1363z00_2061;

															BgL_l1363z00_2061 = BgL_g1365z00_2059;
														BgL_zc3z04anonymousza32012ze3z87_2062:
															if (NULLP(BgL_l1363z00_2061))
																{	/* Reduce/sbeta.scm 230 */
																	return ((bool_t) 1);
																}
															else
																{	/* Reduce/sbeta.scm 230 */
																	bool_t BgL_test2411z00_4012;

																	{	/* Reduce/sbeta.scm 230 */
																		obj_t BgL_arg2016z00_2067;

																		BgL_arg2016z00_2067 =
																			CAR(((obj_t) BgL_l1363z00_2061));
																		BgL_test2411z00_4012 =
																			BGl_simplezf3ze70z14zzreduce_betaz00
																			(BgL_arg2016z00_2067);
																	}
																	if (BgL_test2411z00_4012)
																		{	/* Reduce/sbeta.scm 230 */
																			obj_t BgL_arg2014z00_2066;

																			BgL_arg2014z00_2066 =
																				CDR(((obj_t) BgL_l1363z00_2061));
																			{
																				obj_t BgL_l1363z00_4018;

																				BgL_l1363z00_4018 = BgL_arg2014z00_2066;
																				BgL_l1363z00_2061 = BgL_l1363z00_4018;
																				goto
																					BgL_zc3z04anonymousza32012ze3z87_2062;
																			}
																		}
																	else
																		{	/* Reduce/sbeta.scm 230 */
																			return ((bool_t) 0);
																		}
																}
														}
													}
												else
													{	/* Reduce/sbeta.scm 230 */
														return ((bool_t) 0);
													}
											}
									}
							}
					}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_betaz00()
	{
		{	/* Reduce/sbeta.scm 25 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2250z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2250z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2250z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2250z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2250z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2250z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2250z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2250z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 361167230),
				BSTRING_TO_STRING(BGl_string2250z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 460136356),
				BSTRING_TO_STRING(BGl_string2250z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2250z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2250z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2250z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2250z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string2250z00zzreduce_betaz00));
			return
				BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 535161241),
				BSTRING_TO_STRING(BGl_string2250z00zzreduce_betaz00));
		}

	}

#ifdef __cplusplus
}
#endif
