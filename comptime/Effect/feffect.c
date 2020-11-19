/*===========================================================================*/
/*   (Effect/feffect.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Effect/feffect.scm) */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

	typedef struct BgL_patchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
		struct BgL_varz00_bgl *BgL_refz00;
		long BgL_indexz00;
		obj_t BgL_patchidz00;
	}               *BgL_patchz00_bglt;

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

	typedef struct BgL_feffectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_readz00;
		obj_t BgL_writez00;
	}                 *BgL_feffectz00_bglt;

	typedef struct BgL_localzf2fromzf2_bgl
	{
		obj_t BgL_fromz00;
	}                      *BgL_localzf2fromzf2_bglt;

	typedef struct BgL_globalzf2fromzf2_bgl
	{
		obj_t BgL_fromz00;
	}                       *BgL_globalzf2fromzf2_bglt;


	static BgL_feffectz00_bglt BGl_funzd2effectz12zc0zzeffect_feffectz00(obj_t);
	static BgL_feffectz00_bglt
		BGl_za2effectzd2writezd2memza2z00zzeffect_feffectz00;
	extern obj_t BGl_syncz00zzast_nodez00;
	static BgL_feffectz00_bglt BGl_za2effectzd2topza2zd2zzeffect_feffectz00;
	extern obj_t BGl_sfunz00zzast_varz00;
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2makezd2bo1305za2zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_mergez12ze70zf5zzeffect_feffectz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzeffect_feffectz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static bool_t BGl_feffectzd2fixzd2pointz12z12zzeffect_feffectz00(obj_t);
	static obj_t BGl_z62bodyzd2effectz121282za2zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzeffect_feffectz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static BgL_feffectz00_bglt BGl_z62parsezd2effectzb0zzeffect_feffectz00(obj_t,
		obj_t);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2sync1315z70zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_mergezd2callerz12ze70z27zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_bodyzd2effectza2z12z62zzeffect_feffectz00(obj_t, obj_t);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2letzd2fun1325za2zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2setq1293z70zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	static BgL_feffectz00_bglt
		BGl_za2effectzd2readzd2memza2z00zzeffect_feffectz00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_gczd2rootszd2initz00zzeffect_feffectz00();
	static BgL_feffectz00_bglt
		BGl_bodyzd2effectz12zc0zzeffect_feffectz00(BgL_nodez00_bglt,
		BgL_feffectz00_bglt);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2setzd2exzd21301z70zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2boxzd2set1309za2zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_printfz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static BgL_feffectz00_bglt
		BGl_funzd2effectzd2globalz12z12zzeffect_feffectz00(BgL_globalz00_bglt);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2letzd2var1327za2zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_patchz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzeffect_feffectz00 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2conditi1295z70zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2sequenc1313z70zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2atom1285z70zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzeffect_feffectz00();
	static obj_t BGl_z62feffectz12z70zzeffect_feffectz00(obj_t, obj_t);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12za2zzeffect_feffectz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzeffect_feffectz00();
	extern obj_t BGl_castz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2cast1311z70zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2jumpzd2ex1303za2zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	static BgL_feffectz00_bglt
		BGl_funzd2effectzd2modulez12z12zzeffect_feffectz00(BgL_globalz00_bglt);
	extern obj_t BGl_varz00zzast_nodez00;
	static BgL_feffectz00_bglt
		BGl_dozd2funzd2effectz12z12zzeffect_feffectz00(BgL_variablez00_bglt);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_feffectz12z12zzeffect_feffectz00(obj_t);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2appzd2ly1319za2zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzeffect_feffectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_cgraphz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2app1321z70zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2fail1299z70zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2var1291z70zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2extern1323z70zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_localzf2fromzf2zzeffect_cgraphz00;
	extern obj_t BGl_feffectz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzeffect_feffectz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzeffect_feffectz00();
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2kwote1289z70zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzeffect_feffectz00();
	static obj_t BGl_z62zc3z04anonymousza31626ze3ze5zzeffect_feffectz00(obj_t);
	static obj_t BGl_z62objectzd2displayzd2feffe1281z62zzeffect_feffectz00(obj_t,
		obj_t, obj_t);
	static BgL_feffectz00_bglt
		BGl_funzd2effectzd2alienz12z12zzeffect_feffectz00(BgL_globalz00_bglt);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2patch1287z70zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2switch1297z70zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static bool_t BGl_mergezd2effectsz12zc0zzeffect_feffectz00(obj_t, obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_globalzf2fromzf2zzeffect_cgraphz00;
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2funcall1317z70zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2boxzd2ref1307za2zzeffect_feffectz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_EXPORTED_DECL BgL_feffectz00_bglt
		BGl_parsezd2effectzd2zzeffect_feffectz00(obj_t);
	static obj_t __cnst[6];


	BGL_IMPORT obj_t BGl_objectzd2displayzd2envz00zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1955z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect1989z00,
		BGl_z62bodyzd2effectz121282za2zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1958z00zzeffect_feffectz00,
		BgL_bgl_za762objectza7d2disp1990z00, va_generic_entry,
		BGl_z62objectzd2displayzd2feffe1281z62zzeffect_feffectz00, BUNSPEC, -2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1960z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect1991z00,
		BGl_z62bodyzd2effectz12zd2atom1285z70zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1962z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect1992z00,
		BGl_z62bodyzd2effectz12zd2patch1287z70zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1963z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect1993z00,
		BGl_z62bodyzd2effectz12zd2kwote1289z70zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1964z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect1994z00,
		BGl_z62bodyzd2effectz12zd2var1291z70zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1965z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect1995z00,
		BGl_z62bodyzd2effectz12zd2setq1293z70zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1966z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect1996z00,
		BGl_z62bodyzd2effectz12zd2conditi1295z70zzeffect_feffectz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1967z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect1997z00,
		BGl_z62bodyzd2effectz12zd2switch1297z70zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1968z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect1998z00,
		BGl_z62bodyzd2effectz12zd2fail1299z70zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1969z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect1999z00,
		BGl_z62bodyzd2effectz12zd2setzd2exzd21301z70zzeffect_feffectz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1970z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect2000z00,
		BGl_z62bodyzd2effectz12zd2jumpzd2ex1303za2zzeffect_feffectz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1971z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect2001z00,
		BGl_z62bodyzd2effectz12zd2makezd2bo1305za2zzeffect_feffectz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1972z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect2002z00,
		BGl_z62bodyzd2effectz12zd2boxzd2ref1307za2zzeffect_feffectz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1973z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect2003z00,
		BGl_z62bodyzd2effectz12zd2boxzd2set1309za2zzeffect_feffectz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1974z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect2004z00,
		BGl_z62bodyzd2effectz12zd2cast1311z70zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1975z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect2005z00,
		BGl_z62bodyzd2effectz12zd2sequenc1313z70zzeffect_feffectz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1976z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect2006z00,
		BGl_z62bodyzd2effectz12zd2sync1315z70zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1977z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect2007z00,
		BGl_z62bodyzd2effectz12zd2funcall1317z70zzeffect_feffectz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1978z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect2008z00,
		BGl_z62bodyzd2effectz12zd2appzd2ly1319za2zzeffect_feffectz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1979z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect2009z00,
		BGl_z62bodyzd2effectz12zd2app1321z70zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1980z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect2010z00,
		BGl_z62bodyzd2effectz12zd2extern1323z70zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1981z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect2011z00,
		BGl_z62bodyzd2effectz12zd2letzd2fun1325za2zzeffect_feffectz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1982z00zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect2012z00,
		BGl_z62bodyzd2effectz12zd2letzd2var1327za2zzeffect_feffectz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
		BgL_bgl_za762bodyza7d2effect2013z00,
		BGl_z62bodyzd2effectz12za2zzeffect_feffectz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_feffectz12zd2envzc0zzeffect_feffectz00,
		BgL_bgl_za762feffectza712za7702014za7,
		BGl_z62feffectz12z70zzeffect_feffectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1953z00zzeffect_feffectz00,
		BgL_bgl_string1953za700za7za7e2015za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string1954z00zzeffect_feffectz00,
		BgL_bgl_string1954za700za7za7e2016za7, "Illegal `effect' pragma", 23);
	      DEFINE_STRING(BGl_string1956z00zzeffect_feffectz00,
		BgL_bgl_string1956za700za7za7e2017za7, "body-effect!1282", 16);
	      DEFINE_STRING(BGl_string1957z00zzeffect_feffectz00,
		BgL_bgl_string1957za700za7za7e2018za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1959z00zzeffect_feffectz00,
		BgL_bgl_string1959za700za7za7e2019za7, "object-display", 14);
	      DEFINE_STRING(BGl_string1961z00zzeffect_feffectz00,
		BgL_bgl_string1961za700za7za7e2020za7, "body-effect!", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_parsezd2effectzd2envz00zzeffect_feffectz00,
		BgL_bgl_za762parseza7d2effec2021z00,
		BGl_z62parsezd2effectzb0zzeffect_feffectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1983z00zzeffect_feffectz00,
		BgL_bgl_string1983za700za7za7e2022za7, "#|feffect: ~a ~a|", 17);
	      DEFINE_STRING(BGl_string1984z00zzeffect_feffectz00,
		BgL_bgl_string1984za700za7za7e2023za7, "effect_feffect", 14);
	      DEFINE_STRING(BGl_string1985z00zzeffect_feffectz00,
		BgL_bgl_string1985za700za7za7e2024za7,
		"body-effect!1282 (static export) write read (memory) top ", 57);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_za2effectzd2writezd2memza2z00zzeffect_feffectz00));
		     ADD_ROOT((void *) (&BGl_za2effectzd2topza2zd2zzeffect_feffectz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2effectzd2readzd2memza2z00zzeffect_feffectz00));
		     ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzeffect_feffectz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzeffect_feffectz00(long
		BgL_checksumz00_2476, char *BgL_fromz00_2477)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzeffect_feffectz00))
				{
					BGl_requirezd2initializa7ationz75zzeffect_feffectz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzeffect_feffectz00();
					BGl_libraryzd2moduleszd2initz00zzeffect_feffectz00();
					BGl_cnstzd2initzd2zzeffect_feffectz00();
					BGl_importedzd2moduleszd2initz00zzeffect_feffectz00();
					BGl_genericzd2initzd2zzeffect_feffectz00();
					BGl_methodzd2initzd2zzeffect_feffectz00();
					return BGl_toplevelzd2initzd2zzeffect_feffectz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzeffect_feffectz00()
	{
		{	/* Effect/feffect.scm 16 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"effect_feffect");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"effect_feffect");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"effect_feffect");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"effect_feffect");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"effect_feffect");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"effect_feffect");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"effect_feffect");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"effect_feffect");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"effect_feffect");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "effect_feffect");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"effect_feffect");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzeffect_feffectz00()
	{
		{	/* Effect/feffect.scm 16 */
			{	/* Effect/feffect.scm 16 */
				obj_t BgL_cportz00_2388;

				{	/* Effect/feffect.scm 16 */
					obj_t BgL_stringz00_2396;

					BgL_stringz00_2396 = BGl_string1985z00zzeffect_feffectz00;
					{	/* Effect/feffect.scm 16 */
						obj_t BgL_startz00_2397;

						BgL_startz00_2397 = BINT(((long) 0));
						{	/* Effect/feffect.scm 16 */
							obj_t BgL_endz00_2398;

							BgL_endz00_2398 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2396)));
							{	/* Effect/feffect.scm 16 */

								BgL_cportz00_2388 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2396, BgL_startz00_2397, BgL_endz00_2398);
				}}}}
				{
					long BgL_iz00_2389;

					BgL_iz00_2389 = ((long) 5);
				BgL_loopz00_2390:
					if ((BgL_iz00_2389 == ((long) -1)))
						{	/* Effect/feffect.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Effect/feffect.scm 16 */
							{	/* Effect/feffect.scm 16 */
								obj_t BgL_arg1987z00_2392;

								{	/* Effect/feffect.scm 16 */

									{	/* Effect/feffect.scm 16 */
										obj_t BgL_locationz00_2394;

										BgL_locationz00_2394 = BBOOL(((bool_t) 0));
										{	/* Effect/feffect.scm 16 */

											BgL_arg1987z00_2392 =
												BGl_readz00zz__readerz00(BgL_cportz00_2388,
												BgL_locationz00_2394);
										}
									}
								}
								{	/* Effect/feffect.scm 16 */
									int BgL_tmpz00_2508;

									BgL_tmpz00_2508 = (int) (BgL_iz00_2389);
									CNST_TABLE_SET(BgL_tmpz00_2508, BgL_arg1987z00_2392);
							}}
							{	/* Effect/feffect.scm 16 */
								int BgL_auxz00_2395;

								BgL_auxz00_2395 = (int) ((BgL_iz00_2389 - ((long) 1)));
								{
									long BgL_iz00_2513;

									BgL_iz00_2513 = (long) (BgL_auxz00_2395);
									BgL_iz00_2389 = BgL_iz00_2513;
									goto BgL_loopz00_2390;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzeffect_feffectz00()
	{
		{	/* Effect/feffect.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzeffect_feffectz00()
	{
		{	/* Effect/feffect.scm 16 */
			{	/* Effect/feffect.scm 72 */
				BgL_feffectz00_bglt BgL_new1110z00_1505;

				{	/* Effect/feffect.scm 72 */
					BgL_feffectz00_bglt BgL_new1109z00_1506;

					BgL_new1109z00_1506 =
						((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_feffectz00_bgl))));
					{	/* Effect/feffect.scm 72 */
						long BgL_arg1328z00_1507;

						{	/* Effect/feffect.scm 72 */
							long BgL_res1869z00_2074;

							BgL_res1869z00_2074 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
							BgL_arg1328z00_1507 = BgL_res1869z00_2074;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1109z00_1506), BgL_arg1328z00_1507);
					}
					BgL_new1110z00_1505 = BgL_new1109z00_1506;
				}
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1110z00_1505))->BgL_readz00) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1110z00_1505))->BgL_writez00) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				BGl_za2effectzd2topza2zd2zzeffect_feffectz00 = BgL_new1110z00_1505;
			}
			{	/* Effect/feffect.scm 73 */
				BgL_feffectz00_bglt BgL_new1112z00_1508;

				{	/* Effect/feffect.scm 73 */
					BgL_feffectz00_bglt BgL_new1111z00_1509;

					BgL_new1111z00_1509 =
						((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_feffectz00_bgl))));
					{	/* Effect/feffect.scm 73 */
						long BgL_arg1329z00_1510;

						{	/* Effect/feffect.scm 73 */
							long BgL_res1870z00_2078;

							BgL_res1870z00_2078 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
							BgL_arg1329z00_1510 = BgL_res1870z00_2078;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1111z00_1509), BgL_arg1329z00_1510);
					}
					BgL_new1112z00_1508 = BgL_new1111z00_1509;
				}
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1112z00_1508))->BgL_readz00) =
					((obj_t) CNST_TABLE_REF(((long) 1))), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1112z00_1508))->BgL_writez00) =
					((obj_t) BNIL), BUNSPEC);
				BGl_za2effectzd2readzd2memza2z00zzeffect_feffectz00 =
					BgL_new1112z00_1508;
			}
			{	/* Effect/feffect.scm 74 */
				BgL_feffectz00_bglt BgL_new1114z00_1511;

				{	/* Ast/var.scm 170 */
					BgL_feffectz00_bglt BgL_new1113z00_1512;

					BgL_new1113z00_1512 =
						((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_feffectz00_bgl))));
					{	/* Ast/var.scm 170 */
						long BgL_arg1330z00_1513;

						{	/* Ast/var.scm 170 */
							long BgL_res1871z00_2082;

							BgL_res1871z00_2082 = BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
							BgL_arg1330z00_1513 = BgL_res1871z00_2082;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1113z00_1512), BgL_arg1330z00_1513);
					}
					BgL_new1114z00_1511 = BgL_new1113z00_1512;
				}
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1114z00_1511))->BgL_readz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_feffectz00_bglt) COBJECT(BgL_new1114z00_1511))->BgL_writez00) =
					((obj_t) CNST_TABLE_REF(((long) 1))), BUNSPEC);
				BGl_za2effectzd2writezd2memza2z00zzeffect_feffectz00 =
					BgL_new1114z00_1511;
			}
			return BUNSPEC;
		}

	}



/* feffect! */
	BGL_EXPORTED_DEF obj_t BGl_feffectz12z12zzeffect_feffectz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Effect/feffect.scm 32 */
			{
				obj_t BgL_l1253z00_1523;

				BgL_l1253z00_1523 = BgL_globalsz00_3;
			BgL_zc3z04anonymousza31336ze3z87_1524:
				if (PAIRP(BgL_l1253z00_1523))
					{	/* Effect/feffect.scm 33 */
						{	/* Effect/feffect.scm 33 */
							obj_t BgL_arg1344z00_1526;

							BgL_arg1344z00_1526 = CAR(BgL_l1253z00_1523);
							BGl_funzd2effectzd2modulez12z12zzeffect_feffectz00(
								((BgL_globalz00_bglt) BgL_arg1344z00_1526));
						}
						{
							obj_t BgL_l1253z00_2543;

							BgL_l1253z00_2543 = CDR(BgL_l1253z00_1523);
							BgL_l1253z00_1523 = BgL_l1253z00_2543;
							goto BgL_zc3z04anonymousza31336ze3z87_1524;
						}
					}
				else
					{	/* Effect/feffect.scm 33 */
						((bool_t) 1);
					}
			}
			return
				BBOOL(BGl_feffectzd2fixzd2pointz12z12zzeffect_feffectz00
				(BgL_globalsz00_3));
		}

	}



/* &feffect! */
	obj_t BGl_z62feffectz12z70zzeffect_feffectz00(obj_t BgL_envz00_2267,
		obj_t BgL_globalsz00_2268)
	{
		{	/* Effect/feffect.scm 32 */
			return BGl_feffectz12z12zzeffect_feffectz00(BgL_globalsz00_2268);
		}

	}



/* feffect-fix-point! */
	bool_t BGl_feffectzd2fixzd2pointz12z12zzeffect_feffectz00(obj_t
		BgL_globalsz00_4)
	{
		{	/* Effect/feffect.scm 39 */
			{	/* Effect/feffect.scm 40 */
				struct bgl_cell BgL_box2028_2385z00;
				obj_t BgL_changedz00_2385;

				BgL_changedz00_2385 = MAKE_CELL_STACK(BTRUE, BgL_box2028_2385z00);
				{
					obj_t BgL_varz00_1541;

					{

					BgL_zc3z04anonymousza31346ze3z87_1532:
						if (CBOOL(CELL_REF(BgL_changedz00_2385)))
							{	/* Effect/feffect.scm 54 */
								{	/* Effect/feffect.scm 56 */
									obj_t BgL_auxz00_2386;

									BgL_auxz00_2386 = BFALSE;
									CELL_SET(BgL_changedz00_2385, BgL_auxz00_2386);
								}
								{
									obj_t BgL_l1261z00_1534;

									BgL_l1261z00_1534 = BgL_globalsz00_4;
								BgL_zc3z04anonymousza31347ze3z87_1535:
									if (PAIRP(BgL_l1261z00_1534))
										{	/* Effect/feffect.scm 57 */
											BgL_varz00_1541 = CAR(BgL_l1261z00_1534);
											{	/* Effect/feffect.scm 47 */

												if (BGl_isazf3zf3zz__objectz00(BgL_varz00_1541,
														BGl_localzf2fromzf2zzeffect_cgraphz00))
													{	/* Effect/feffect.scm 50 */
														obj_t BgL_g1257z00_1546;

														{
															BgL_localzf2fromzf2_bglt BgL_auxz00_2554;

															{
																obj_t BgL_auxz00_2555;

																{	/* Effect/feffect.scm 50 */
																	BgL_objectz00_bglt BgL_tmpz00_2556;

																	BgL_tmpz00_2556 =
																		((BgL_objectz00_bglt)
																		((BgL_localz00_bglt) BgL_varz00_1541));
																	BgL_auxz00_2555 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2556);
																}
																BgL_auxz00_2554 =
																	((BgL_localzf2fromzf2_bglt) BgL_auxz00_2555);
															}
															BgL_g1257z00_1546 =
																(((BgL_localzf2fromzf2_bglt)
																	COBJECT(BgL_auxz00_2554))->BgL_fromz00);
														}
														{
															obj_t BgL_l1255z00_1548;

															BgL_l1255z00_1548 = BgL_g1257z00_1546;
														BgL_zc3z04anonymousza31355ze3z87_1549:
															if (PAIRP(BgL_l1255z00_1548))
																{	/* Effect/feffect.scm 50 */
																	BGl_mergezd2callerz12ze70z27zzeffect_feffectz00
																		(BgL_changedz00_2385, BgL_varz00_1541,
																		CAR(BgL_l1255z00_1548));
																	{
																		obj_t BgL_l1255z00_2566;

																		BgL_l1255z00_2566 = CDR(BgL_l1255z00_1548);
																		BgL_l1255z00_1548 = BgL_l1255z00_2566;
																		goto BgL_zc3z04anonymousza31355ze3z87_1549;
																	}
																}
															else
																{	/* Effect/feffect.scm 50 */
																	((bool_t) 1);
																}
														}
													}
												else
													{	/* Effect/feffect.scm 49 */
														if (BGl_isazf3zf3zz__objectz00(BgL_varz00_1541,
																BGl_globalzf2fromzf2zzeffect_cgraphz00))
															{	/* Effect/feffect.scm 52 */
																obj_t BgL_g1260z00_1555;

																{
																	BgL_globalzf2fromzf2_bglt BgL_auxz00_2570;

																	{
																		obj_t BgL_auxz00_2571;

																		{	/* Effect/feffect.scm 52 */
																			BgL_objectz00_bglt BgL_tmpz00_2572;

																			BgL_tmpz00_2572 =
																				((BgL_objectz00_bglt)
																				((BgL_globalz00_bglt) BgL_varz00_1541));
																			BgL_auxz00_2571 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2572);
																		}
																		BgL_auxz00_2570 =
																			((BgL_globalzf2fromzf2_bglt)
																			BgL_auxz00_2571);
																	}
																	BgL_g1260z00_1555 =
																		(((BgL_globalzf2fromzf2_bglt)
																			COBJECT(BgL_auxz00_2570))->BgL_fromz00);
																}
																{
																	obj_t BgL_l1258z00_1557;

																	BgL_l1258z00_1557 = BgL_g1260z00_1555;
																BgL_zc3z04anonymousza31363ze3z87_1558:
																	if (PAIRP(BgL_l1258z00_1557))
																		{	/* Effect/feffect.scm 52 */
																			BGl_mergezd2callerz12ze70z27zzeffect_feffectz00
																				(BgL_changedz00_2385, BgL_varz00_1541,
																				CAR(BgL_l1258z00_1557));
																			{
																				obj_t BgL_l1258z00_2582;

																				BgL_l1258z00_2582 =
																					CDR(BgL_l1258z00_1557);
																				BgL_l1258z00_1557 = BgL_l1258z00_2582;
																				goto
																					BgL_zc3z04anonymousza31363ze3z87_1558;
																			}
																		}
																	else
																		{	/* Effect/feffect.scm 52 */
																			((bool_t) 1);
																		}
																}
															}
														else
															{	/* Effect/feffect.scm 51 */
																((bool_t) 0);
															}
													}
											}
											{
												obj_t BgL_l1261z00_2585;

												BgL_l1261z00_2585 = CDR(BgL_l1261z00_1534);
												BgL_l1261z00_1534 = BgL_l1261z00_2585;
												goto BgL_zc3z04anonymousza31347ze3z87_1535;
											}
										}
									else
										{	/* Effect/feffect.scm 57 */
											((bool_t) 1);
										}
								}
								goto BgL_zc3z04anonymousza31346ze3z87_1532;
							}
						else
							{	/* Effect/feffect.scm 54 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}

	}



/* merge-caller!~0 */
	obj_t BGl_mergezd2callerz12ze70z27zzeffect_feffectz00(obj_t
		BgL_changedz00_2383, obj_t BgL_varz00_2382, obj_t BgL_fz00_1563)
	{
		{	/* Effect/feffect.scm 46 */
			{	/* Effect/feffect.scm 43 */
				obj_t BgL_efz00_1565;
				obj_t BgL_etz00_1566;

				BgL_efz00_1565 =
					(((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_fz00_1563)))->
									BgL_valuez00))))->BgL_effectz00);
				BgL_etz00_1566 =
					(((BgL_funz00_bglt)
						COBJECT(((BgL_funz00_bglt) (((BgL_variablez00_bglt)
										COBJECT(((BgL_variablez00_bglt) BgL_varz00_2382)))->
									BgL_valuez00))))->BgL_effectz00);
				{	/* Effect/feffect.scm 45 */
					bool_t BgL_test2035z00_2595;

					{	/* Effect/feffect.scm 45 */
						bool_t BgL_res1873z00_2093;

						{	/* Effect/feffect.scm 45 */
							obj_t BgL_objz00_2092;

							BgL_objz00_2092 = BgL_efz00_1565;
							BgL_res1873z00_2093 =
								BGl_isazf3zf3zz__objectz00(BgL_objz00_2092,
								BGl_feffectz00zzast_varz00);
						}
						BgL_test2035z00_2595 = BgL_res1873z00_2093;
					}
					if (BgL_test2035z00_2595)
						{	/* Effect/feffect.scm 45 */
							BFALSE;
						}
					else
						{	/* Effect/feffect.scm 45 */
							BgL_efz00_1565 =
								((obj_t) BGl_za2effectzd2topza2zd2zzeffect_feffectz00);
						}
				}
				{	/* Effect/feffect.scm 46 */
					obj_t BgL_auxz00_2384;

					{	/* Effect/feffect.scm 46 */
						bool_t BgL__ortest_1107z00_1568;

						BgL__ortest_1107z00_1568 =
							BGl_mergezd2effectsz12zc0zzeffect_feffectz00(BgL_etz00_1566,
							BgL_efz00_1565);
						if (BgL__ortest_1107z00_1568)
							{	/* Effect/feffect.scm 46 */
								BgL_auxz00_2384 = BBOOL(BgL__ortest_1107z00_1568);
							}
						else
							{	/* Effect/feffect.scm 46 */
								BgL_auxz00_2384 = CELL_REF(BgL_changedz00_2383);
							}
					}
					return CELL_SET(BgL_changedz00_2383, BgL_auxz00_2384);
				}
			}
		}

	}



/* parse-effect */
	BGL_EXPORTED_DEF BgL_feffectz00_bglt
		BGl_parsezd2effectzd2zzeffect_feffectz00(obj_t BgL_propz00_7)
	{
		{	/* Effect/feffect.scm 79 */
			{	/* Effect/feffect.scm 80 */
				BgL_feffectz00_bglt BgL_ez00_1573;

				{	/* Effect/feffect.scm 80 */
					BgL_feffectz00_bglt BgL_new1117z00_1608;

					{	/* Ast/var.scm 170 */
						BgL_feffectz00_bglt BgL_new1116z00_1609;

						BgL_new1116z00_1609 =
							((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_feffectz00_bgl))));
						{	/* Ast/var.scm 170 */
							long BgL_arg1489z00_1610;

							{	/* Ast/var.scm 170 */
								long BgL_res1879z00_2111;

								BgL_res1879z00_2111 =
									BGL_CLASS_INDEX(BGl_feffectz00zzast_varz00);
								BgL_arg1489z00_1610 = BgL_res1879z00_2111;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1116z00_1609),
								BgL_arg1489z00_1610);
						}
						BgL_new1117z00_1608 = BgL_new1116z00_1609;
					}
					((((BgL_feffectz00_bglt) COBJECT(BgL_new1117z00_1608))->BgL_readz00) =
						((obj_t) BNIL), BUNSPEC);
					((((BgL_feffectz00_bglt) COBJECT(BgL_new1117z00_1608))->
							BgL_writez00) = ((obj_t) BNIL), BUNSPEC);
					BgL_ez00_1573 = BgL_new1117z00_1608;
				}
				{	/* Effect/feffect.scm 81 */
					obj_t BgL_g1118z00_1574;

					BgL_g1118z00_1574 = CDR(((obj_t) BgL_propz00_7));
					{
						obj_t BgL_vz00_1576;

						{
							obj_t BgL_auxz00_2609;

							BgL_vz00_1576 = BgL_g1118z00_1574;
						BgL_zc3z04anonymousza31383ze3z87_1577:
							if (NULLP(BgL_vz00_1576))
								{	/* Effect/feffect.scm 82 */
									BgL_auxz00_2609 = ((obj_t) BgL_ez00_1573);
								}
							else
								{

									{	/* Effect/feffect.scm 84 */
										obj_t BgL_ezd2362zd2_1584;

										BgL_ezd2362zd2_1584 = CAR(((obj_t) BgL_vz00_1576));
										if (PAIRP(BgL_ezd2362zd2_1584))
											{	/* Effect/feffect.scm 84 */
												obj_t BgL_cdrzd2367zd2_1586;

												BgL_cdrzd2367zd2_1586 = CDR(BgL_ezd2362zd2_1584);
												if (
													(CAR(BgL_ezd2362zd2_1584) ==
														CNST_TABLE_REF(((long) 2))))
													{	/* Effect/feffect.scm 84 */
														if (PAIRP(BgL_cdrzd2367zd2_1586))
															{	/* Effect/feffect.scm 84 */
																if (NULLP(CDR(BgL_cdrzd2367zd2_1586)))
																	{	/* Effect/feffect.scm 84 */
																		obj_t BgL_arg1421z00_1592;

																		BgL_arg1421z00_1592 =
																			CAR(BgL_cdrzd2367zd2_1586);
																		((((BgL_feffectz00_bglt)
																					COBJECT(BgL_ez00_1573))->
																				BgL_readz00) =
																			((obj_t) BgL_arg1421z00_1592), BUNSPEC);
																		{	/* Effect/feffect.scm 87 */
																			obj_t BgL_arg1474z00_2130;

																			BgL_arg1474z00_2130 =
																				CDR(((obj_t) BgL_vz00_1576));
																			{
																				obj_t BgL_vz00_2631;

																				BgL_vz00_2631 = BgL_arg1474z00_2130;
																				BgL_vz00_1576 = BgL_vz00_2631;
																				goto
																					BgL_zc3z04anonymousza31383ze3z87_1577;
																			}
																		}
																	}
																else
																	{	/* Effect/feffect.scm 84 */
																	BgL_tagzd2361zd2_1583:
																		BgL_auxz00_2609 =
																			BGl_userzd2errorzd2zztools_errorz00
																			(BGl_string1953z00zzeffect_feffectz00,
																			BGl_string1954z00zzeffect_feffectz00,
																			BgL_vz00_1576, BNIL);
																	}
															}
														else
															{	/* Effect/feffect.scm 84 */
																goto BgL_tagzd2361zd2_1583;
															}
													}
												else
													{	/* Effect/feffect.scm 84 */
														if (
															(CAR(BgL_ezd2362zd2_1584) ==
																CNST_TABLE_REF(((long) 3))))
															{	/* Effect/feffect.scm 84 */
																if (PAIRP(BgL_cdrzd2367zd2_1586))
																	{	/* Effect/feffect.scm 84 */
																		if (NULLP(CDR(BgL_cdrzd2367zd2_1586)))
																			{	/* Effect/feffect.scm 84 */
																				obj_t BgL_arg1461z00_1600;

																				BgL_arg1461z00_1600 =
																					CAR(BgL_cdrzd2367zd2_1586);
																				((((BgL_feffectz00_bglt)
																							COBJECT(BgL_ez00_1573))->
																						BgL_writez00) =
																					((obj_t) BgL_arg1461z00_1600),
																					BUNSPEC);
																				{	/* Effect/feffect.scm 90 */
																					obj_t BgL_arg1476z00_2139;

																					BgL_arg1476z00_2139 =
																						CDR(((obj_t) BgL_vz00_1576));
																					{
																						obj_t BgL_vz00_2646;

																						BgL_vz00_2646 = BgL_arg1476z00_2139;
																						BgL_vz00_1576 = BgL_vz00_2646;
																						goto
																							BgL_zc3z04anonymousza31383ze3z87_1577;
																					}
																				}
																			}
																		else
																			{	/* Effect/feffect.scm 84 */
																				goto BgL_tagzd2361zd2_1583;
																			}
																	}
																else
																	{	/* Effect/feffect.scm 84 */
																		goto BgL_tagzd2361zd2_1583;
																	}
															}
														else
															{	/* Effect/feffect.scm 84 */
																goto BgL_tagzd2361zd2_1583;
															}
													}
											}
										else
											{	/* Effect/feffect.scm 84 */
												goto BgL_tagzd2361zd2_1583;
											}
									}
								}
							return ((BgL_feffectz00_bglt) BgL_auxz00_2609);
						}
					}
				}
			}
		}

	}



/* &parse-effect */
	BgL_feffectz00_bglt BGl_z62parsezd2effectzb0zzeffect_feffectz00(obj_t
		BgL_envz00_2269, obj_t BgL_propz00_2270)
	{
		{	/* Effect/feffect.scm 79 */
			return BGl_parsezd2effectzd2zzeffect_feffectz00(BgL_propz00_2270);
		}

	}



/* merge-effects! */
	bool_t BGl_mergezd2effectsz12zc0zzeffect_feffectz00(obj_t BgL_f1z00_8,
		obj_t BgL_f2z00_9)
	{
		{	/* Effect/feffect.scm 100 */
			{	/* Effect/feffect.scm 100 */
				struct bgl_cell BgL_box2045_2380z00;
				obj_t BgL_changedz00_2380;

				BgL_changedz00_2380 = MAKE_CELL_STACK(BFALSE, BgL_box2045_2380z00);
				{	/* Effect/feffect.scm 136 */
					obj_t BgL_arg1493z00_1614;

					{	/* Effect/feffect.scm 136 */
						obj_t BgL_arg1495z00_1615;
						obj_t BgL_arg1497z00_1616;

						BgL_arg1495z00_1615 =
							(((BgL_feffectz00_bglt) COBJECT(
									((BgL_feffectz00_bglt) BgL_f1z00_8)))->BgL_readz00);
						BgL_arg1497z00_1616 =
							(((BgL_feffectz00_bglt) COBJECT(
									((BgL_feffectz00_bglt) BgL_f2z00_9)))->BgL_readz00);
						BgL_arg1493z00_1614 =
							BGl_mergez12ze70zf5zzeffect_feffectz00(BgL_changedz00_2380,
							BgL_arg1495z00_1615, BgL_arg1497z00_1616);
					}
					((((BgL_feffectz00_bglt) COBJECT(
									((BgL_feffectz00_bglt) BgL_f1z00_8)))->BgL_readz00) =
						((obj_t) BgL_arg1493z00_1614), BUNSPEC);
				}
				{	/* Effect/feffect.scm 137 */
					obj_t BgL_arg1518z00_1617;

					{	/* Effect/feffect.scm 137 */
						obj_t BgL_arg1521z00_1618;
						obj_t BgL_arg1528z00_1619;

						BgL_arg1521z00_1618 =
							(((BgL_feffectz00_bglt) COBJECT(
									((BgL_feffectz00_bglt) BgL_f1z00_8)))->BgL_writez00);
						BgL_arg1528z00_1619 =
							(((BgL_feffectz00_bglt) COBJECT(
									((BgL_feffectz00_bglt) BgL_f2z00_9)))->BgL_writez00);
						BgL_arg1518z00_1617 =
							BGl_mergez12ze70zf5zzeffect_feffectz00(BgL_changedz00_2380,
							BgL_arg1521z00_1618, BgL_arg1528z00_1619);
					}
					((((BgL_feffectz00_bglt) COBJECT(
									((BgL_feffectz00_bglt) BgL_f1z00_8)))->BgL_writez00) =
						((obj_t) BgL_arg1518z00_1617), BUNSPEC);
				}
				return CBOOL(CELL_REF(BgL_changedz00_2380));
			}
		}

	}



/* merge!~0 */
	obj_t BGl_mergez12ze70zf5zzeffect_feffectz00(obj_t BgL_changedz00_2376,
		obj_t BgL_e1z00_1650, obj_t BgL_e2z00_1651)
	{
		{	/* Effect/feffect.scm 135 */
			{
				obj_t BgL_l1z00_1620;
				obj_t BgL_l2z00_1621;

				if ((BgL_e1z00_1650 == CNST_TABLE_REF(((long) 0))))
					{	/* Effect/feffect.scm 127 */
						return BgL_e1z00_1650;
					}
				else
					{	/* Effect/feffect.scm 127 */
						if (NULLP(BgL_e2z00_1651))
							{	/* Effect/feffect.scm 129 */
								return BgL_e1z00_1650;
							}
						else
							{	/* Effect/feffect.scm 129 */
								if ((BgL_e2z00_1651 == CNST_TABLE_REF(((long) 0))))
									{	/* Effect/feffect.scm 131 */
										{	/* Effect/feffect.scm 132 */
											obj_t BgL_auxz00_2377;

											BgL_auxz00_2377 = BTRUE;
											CELL_SET(BgL_changedz00_2376, BgL_auxz00_2377);
										}
										return CNST_TABLE_REF(((long) 0));
									}
								else
									{	/* Effect/feffect.scm 131 */
										BgL_l1z00_1620 = BgL_e1z00_1650;
										BgL_l2z00_1621 = BgL_e2z00_1651;
										if (NULLP(BgL_l1z00_1620))
											{	/* Effect/feffect.scm 104 */
												if (PAIRP(BgL_l2z00_1621))
													{	/* Effect/feffect.scm 106 */
														obj_t BgL_auxz00_2378;

														BgL_auxz00_2378 = BTRUE;
														CELL_SET(BgL_changedz00_2376, BgL_auxz00_2378);
													}
												else
													{	/* Effect/feffect.scm 105 */
														BFALSE;
													}
												return BgL_l2z00_1621;
											}
										else
											{	/* Effect/feffect.scm 104 */
												if (NULLP(BgL_l2z00_1621))
													{	/* Effect/feffect.scm 108 */
														return BgL_l1z00_1620;
													}
												else
													{	/* Effect/feffect.scm 111 */
														obj_t BgL_kz00_1626;

														{	/* Effect/feffect.scm 111 */

															{	/* Effect/feffect.scm 111 */

																BgL_kz00_1626 =
																	BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
															}
														}
														{
															obj_t BgL_l1263z00_1628;

															BgL_l1263z00_1628 = BgL_l1z00_1620;
														BgL_zc3z04anonymousza31533ze3z87_1629:
															if (PAIRP(BgL_l1263z00_1628))
																{	/* Effect/feffect.scm 112 */
																	BGl_putpropz12z12zz__r4_symbols_6_4z00(CAR
																		(BgL_l1263z00_1628), BgL_kz00_1626, BTRUE);
																	{
																		obj_t BgL_l1263z00_2684;

																		BgL_l1263z00_2684 = CDR(BgL_l1263z00_1628);
																		BgL_l1263z00_1628 = BgL_l1263z00_2684;
																		goto BgL_zc3z04anonymousza31533ze3z87_1629;
																	}
																}
															else
																{	/* Effect/feffect.scm 112 */
																	((bool_t) 1);
																}
														}
														{
															obj_t BgL_l1265z00_1635;

															BgL_l1265z00_1635 = BgL_l2z00_1621;
														BgL_zc3z04anonymousza31537ze3z87_1636:
															if (PAIRP(BgL_l1265z00_1635))
																{	/* Effect/feffect.scm 115 */
																	{	/* Effect/feffect.scm 116 */
																		obj_t BgL_sz00_1638;

																		BgL_sz00_1638 = CAR(BgL_l1265z00_1635);
																		if (CBOOL
																			(BGl_getpropz00zz__r4_symbols_6_4z00
																				(BgL_sz00_1638, BgL_kz00_1626)))
																			{	/* Effect/feffect.scm 116 */
																				BFALSE;
																			}
																		else
																			{	/* Effect/feffect.scm 116 */
																				{	/* Effect/feffect.scm 118 */
																					obj_t BgL_auxz00_2379;

																					BgL_auxz00_2379 = BTRUE;
																					CELL_SET(BgL_changedz00_2376,
																						BgL_auxz00_2379);
																				}
																				BgL_l1z00_1620 =
																					MAKE_YOUNG_PAIR(BgL_sz00_1638,
																					BgL_l1z00_1620);
																			}
																	}
																	{
																		obj_t BgL_l1265z00_2693;

																		BgL_l1265z00_2693 = CDR(BgL_l1265z00_1635);
																		BgL_l1265z00_1635 = BgL_l1265z00_2693;
																		goto BgL_zc3z04anonymousza31537ze3z87_1636;
																	}
																}
															else
																{	/* Effect/feffect.scm 115 */
																	((bool_t) 1);
																}
														}
														{
															obj_t BgL_l1267z00_1643;

															BgL_l1267z00_1643 = BgL_l1z00_1620;
														BgL_zc3z04anonymousza31553ze3z87_1644:
															if (PAIRP(BgL_l1267z00_1643))
																{	/* Effect/feffect.scm 121 */
																	BGl_rempropz12z12zz__r4_symbols_6_4z00(CAR
																		(BgL_l1267z00_1643), BgL_kz00_1626);
																	{
																		obj_t BgL_l1267z00_2699;

																		BgL_l1267z00_2699 = CDR(BgL_l1267z00_1643);
																		BgL_l1267z00_1643 = BgL_l1267z00_2699;
																		goto BgL_zc3z04anonymousza31553ze3z87_1644;
																	}
																}
															else
																{	/* Effect/feffect.scm 121 */
																	((bool_t) 1);
																}
														}
														return BgL_l1z00_1620;
													}
											}
									}
							}
					}
			}
		}

	}



/* fun-effect! */
	BgL_feffectz00_bglt BGl_funzd2effectz12zc0zzeffect_feffectz00(obj_t
		BgL_vz00_10)
	{
		{	/* Effect/feffect.scm 143 */
			if (BGl_isazf3zf3zz__objectz00(BgL_vz00_10, BGl_globalz00zzast_varz00))
				{	/* Effect/feffect.scm 144 */
					return
						BGl_funzd2effectzd2globalz12z12zzeffect_feffectz00(
						((BgL_globalz00_bglt) BgL_vz00_10));
				}
			else
				{	/* Effect/feffect.scm 146 */
					BgL_feffectz00_bglt BgL_res1894z00_2164;

					BgL_res1894z00_2164 =
						BGl_dozd2funzd2effectz12z12zzeffect_feffectz00(
						((BgL_variablez00_bglt) ((BgL_localz00_bglt) BgL_vz00_10)));
					return BgL_res1894z00_2164;
				}
		}

	}



/* fun-effect-global! */
	BgL_feffectz00_bglt
		BGl_funzd2effectzd2globalz12z12zzeffect_feffectz00(BgL_globalz00_bglt
		BgL_vz00_11)
	{
		{	/* Effect/feffect.scm 151 */
			{	/* Effect/feffect.scm 152 */
				bool_t BgL_test2057z00_2708;

				if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
							(((BgL_globalz00_bglt) COBJECT(BgL_vz00_11))->BgL_importz00),
							CNST_TABLE_REF(((long) 4)))))
					{	/* Effect/feffect.scm 153 */
						bool_t BgL_test2059z00_2714;

						{	/* Effect/feffect.scm 153 */
							BgL_valuez00_bglt BgL_arg1582z00_1668;

							BgL_arg1582z00_1668 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_vz00_11)))->BgL_valuez00);
							{	/* Effect/feffect.scm 153 */
								bool_t BgL_res1895z00_2167;

								BgL_res1895z00_2167 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg1582z00_1668), BGl_sfunz00zzast_varz00);
								BgL_test2059z00_2714 = BgL_res1895z00_2167;
						}}
						if (BgL_test2059z00_2714)
							{	/* Effect/feffect.scm 153 */
								BgL_test2057z00_2708 = ((bool_t) 0);
							}
						else
							{	/* Effect/feffect.scm 153 */
								BgL_test2057z00_2708 = ((bool_t) 1);
							}
					}
				else
					{	/* Effect/feffect.scm 152 */
						BgL_test2057z00_2708 = ((bool_t) 1);
					}
				if (BgL_test2057z00_2708)
					{	/* Effect/feffect.scm 152 */
						return
							BGl_funzd2effectzd2alienz12z12zzeffect_feffectz00(BgL_vz00_11);
					}
				else
					{	/* Effect/feffect.scm 152 */
						return
							BGl_funzd2effectzd2modulez12z12zzeffect_feffectz00(BgL_vz00_11);
					}
			}
		}

	}



/* fun-effect-alien! */
	BgL_feffectz00_bglt
		BGl_funzd2effectzd2alienz12z12zzeffect_feffectz00(BgL_globalz00_bglt
		BgL_gz00_12)
	{
		{	/* Effect/feffect.scm 162 */
			{	/* Effect/feffect.scm 163 */
				BgL_funz00_bglt BgL_i1119z00_1670;

				BgL_i1119z00_1670 =
					((BgL_funz00_bglt)
					(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_gz00_12)))->BgL_valuez00));
				{	/* Effect/feffect.scm 164 */
					bool_t BgL_test2060z00_2724;

					{	/* Effect/feffect.scm 164 */
						obj_t BgL_arg1592z00_1673;

						BgL_arg1592z00_1673 =
							(((BgL_funz00_bglt) COBJECT(BgL_i1119z00_1670))->BgL_effectz00);
						BgL_test2060z00_2724 =
							BGl_isazf3zf3zz__objectz00(BgL_arg1592z00_1673,
							BGl_feffectz00zzast_varz00);
					}
					if (BgL_test2060z00_2724)
						{	/* Effect/feffect.scm 164 */
							BFALSE;
						}
					else
						{	/* Effect/feffect.scm 164 */
							((((BgL_funz00_bglt) COBJECT(BgL_i1119z00_1670))->BgL_effectz00) =
								((obj_t) ((obj_t)
										BGl_za2effectzd2topza2zd2zzeffect_feffectz00)), BUNSPEC);
						}
				}
				return
					((BgL_feffectz00_bglt)
					(((BgL_funz00_bglt) COBJECT(BgL_i1119z00_1670))->BgL_effectz00));
			}
		}

	}



/* fun-effect-module! */
	BgL_feffectz00_bglt
		BGl_funzd2effectzd2modulez12z12zzeffect_feffectz00(BgL_globalz00_bglt
		BgL_vz00_13)
	{
		{	/* Effect/feffect.scm 171 */
			{	/* Effect/feffect.scm 173 */

				return
					BGl_dozd2funzd2effectz12z12zzeffect_feffectz00(
					((BgL_variablez00_bglt) BgL_vz00_13));
			}
		}

	}



/* do-fun-effect! */
	BgL_feffectz00_bglt
		BGl_dozd2funzd2effectz12z12zzeffect_feffectz00(BgL_variablez00_bglt
		BgL_vz00_15)
	{
		{	/* Effect/feffect.scm 195 */
			{	/* Effect/feffect.scm 196 */
				BgL_sfunz00_bglt BgL_i1120z00_1677;

				BgL_i1120z00_1677 =
					((BgL_sfunz00_bglt)
					(((BgL_variablez00_bglt) COBJECT(BgL_vz00_15))->BgL_valuez00));
				{	/* Effect/feffect.scm 197 */
					bool_t BgL_test2061z00_2735;

					{	/* Effect/feffect.scm 197 */
						obj_t BgL_arg1606z00_1685;

						BgL_arg1606z00_1685 =
							(((BgL_funz00_bglt) COBJECT(
									((BgL_funz00_bglt) BgL_i1120z00_1677)))->BgL_effectz00);
						BgL_test2061z00_2735 =
							BGl_isazf3zf3zz__objectz00(BgL_arg1606z00_1685,
							BGl_feffectz00zzast_varz00);
					}
					if (BgL_test2061z00_2735)
						{	/* Effect/feffect.scm 197 */
							return
								((BgL_feffectz00_bglt)
								(((BgL_funz00_bglt) COBJECT(
											((BgL_funz00_bglt) BgL_i1120z00_1677)))->BgL_effectz00));
						}
					else
						{	/* Effect/feffect.scm 197 */
							{
								obj_t BgL_auxz00_2742;

								{	/* Effect/feffect.scm 200 */
									BgL_feffectz00_bglt BgL_new1122z00_1680;

									{	/* Ast/var.scm 171 */
										BgL_feffectz00_bglt BgL_new1121z00_1681;

										BgL_new1121z00_1681 =
											((BgL_feffectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_feffectz00_bgl))));
										{	/* Ast/var.scm 171 */
											long BgL_arg1599z00_1682;

											{	/* Ast/var.scm 171 */
												long BgL_res1899z00_2176;

												{	/* Ast/var.scm 171 */
													obj_t BgL_classz00_2175;

													BgL_classz00_2175 = BGl_feffectz00zzast_varz00;
													BgL_res1899z00_2176 =
														BGL_CLASS_INDEX(BgL_classz00_2175);
												}
												BgL_arg1599z00_1682 = BgL_res1899z00_2176;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1121z00_1681),
												BgL_arg1599z00_1682);
										}
										BgL_new1122z00_1680 = BgL_new1121z00_1681;
									}
									((((BgL_feffectz00_bglt) COBJECT(BgL_new1122z00_1680))->
											BgL_readz00) = ((obj_t) BNIL), BUNSPEC);
									((((BgL_feffectz00_bglt) COBJECT(BgL_new1122z00_1680))->
											BgL_writez00) = ((obj_t) BNIL), BUNSPEC);
									BgL_auxz00_2742 = ((obj_t) BgL_new1122z00_1680);
								}
								((((BgL_funz00_bglt) COBJECT(
												((BgL_funz00_bglt) BgL_i1120z00_1677)))->
										BgL_effectz00) = ((obj_t) BgL_auxz00_2742), BUNSPEC);
							}
							{	/* Effect/feffect.scm 201 */
								obj_t BgL_arg1604z00_1683;
								obj_t BgL_arg1605z00_1684;

								BgL_arg1604z00_1683 =
									(((BgL_sfunz00_bglt) COBJECT(BgL_i1120z00_1677))->
									BgL_bodyz00);
								BgL_arg1605z00_1684 =
									(((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
												BgL_i1120z00_1677)))->BgL_effectz00);
								return
									BGl_bodyzd2effectz12zc0zzeffect_feffectz00(((BgL_nodez00_bglt)
										BgL_arg1604z00_1683),
									((BgL_feffectz00_bglt) BgL_arg1605z00_1684));
							}
						}
				}
			}
		}

	}



/* body-effect*! */
	obj_t BGl_bodyzd2effectza2z12z62zzeffect_feffectz00(obj_t BgL_nodeza2za2_62,
		obj_t BgL_effectz00_63)
	{
		{	/* Effect/feffect.scm 389 */
			{
				obj_t BgL_l1278z00_1687;

				BgL_l1278z00_1687 = BgL_nodeza2za2_62;
			BgL_zc3z04anonymousza31607ze3z87_1688:
				if (PAIRP(BgL_l1278z00_1687))
					{	/* Effect/feffect.scm 390 */
						{	/* Effect/feffect.scm 390 */
							obj_t BgL_nz00_1690;

							BgL_nz00_1690 = CAR(BgL_l1278z00_1687);
							BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
								((BgL_nodez00_bglt) BgL_nz00_1690),
								((BgL_feffectz00_bglt) BgL_effectz00_63));
						}
						{
							obj_t BgL_l1278z00_2764;

							BgL_l1278z00_2764 = CDR(BgL_l1278z00_1687);
							BgL_l1278z00_1687 = BgL_l1278z00_2764;
							goto BgL_zc3z04anonymousza31607ze3z87_1688;
						}
					}
				else
					{	/* Effect/feffect.scm 390 */
						((bool_t) 1);
					}
			}
			return BgL_effectz00_63;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzeffect_feffectz00()
	{
		{	/* Effect/feffect.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzeffect_feffectz00()
	{
		{	/* Effect/feffect.scm 16 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_proc1955z00zzeffect_feffectz00, BGl_nodez00zzast_nodez00,
				BGl_string1956z00zzeffect_feffectz00);
		}

	}



/* &body-effect!1282 */
	obj_t BGl_z62bodyzd2effectz121282za2zzeffect_feffectz00(obj_t BgL_envz00_2272,
		obj_t BgL_nodez00_2273, obj_t BgL_effectz00_2274)
	{
		{	/* Effect/feffect.scm 210 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 5)),
				BGl_string1957z00zzeffect_feffectz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2273)));
		}

	}



/* body-effect! */
	BgL_feffectz00_bglt
		BGl_bodyzd2effectz12zc0zzeffect_feffectz00(BgL_nodez00_bglt BgL_nodez00_16,
		BgL_feffectz00_bglt BgL_effectz00_17)
	{
		{	/* Effect/feffect.scm 210 */
			{	/* Effect/feffect.scm 210 */
				obj_t BgL_method1283z00_1698;

				{	/* Effect/feffect.scm 210 */
					obj_t BgL_res1911z00_2218;

					{	/* Effect/feffect.scm 210 */
						long BgL_objzd2classzd2numz00_2183;

						{	/* Effect/feffect.scm 210 */
							long BgL_res1901z00_2186;

							BgL_res1901z00_2186 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_16));
							BgL_objzd2classzd2numz00_2183 = BgL_res1901z00_2186;
						}
						{	/* Effect/feffect.scm 210 */
							obj_t BgL_arg1813z00_2184;

							BgL_arg1813z00_2184 =
								PROCEDURE_REF(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
								(int) (((long) 1)));
							{	/* Effect/feffect.scm 210 */
								int BgL_offsetz00_2188;

								BgL_offsetz00_2188 = (int) (BgL_objzd2classzd2numz00_2183);
								{	/* Effect/feffect.scm 210 */
									long BgL_offsetz00_2189;

									BgL_offsetz00_2189 =
										((long) (BgL_offsetz00_2188) - OBJECT_TYPE);
									{	/* Effect/feffect.scm 210 */
										long BgL_modz00_2190;

										BgL_modz00_2190 =
											(BgL_offsetz00_2189 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Effect/feffect.scm 210 */
											long BgL_restz00_2192;

											BgL_restz00_2192 =
												(BgL_offsetz00_2189 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Effect/feffect.scm 210 */

												{	/* Effect/feffect.scm 210 */
													obj_t BgL_bucketz00_2194;

													BgL_bucketz00_2194 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2184), BgL_modz00_2190);
													BgL_res1911z00_2218 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2194), BgL_restz00_2192);
					}}}}}}}}
					BgL_method1283z00_1698 = BgL_res1911z00_2218;
				}
				return
					((BgL_feffectz00_bglt)
					PROCEDURE_ENTRY(BgL_method1283z00_1698) (BgL_method1283z00_1698,
						((obj_t) BgL_nodez00_16), ((obj_t) BgL_effectz00_17), BEOA));
			}
		}

	}



/* &body-effect! */
	BgL_feffectz00_bglt BGl_z62bodyzd2effectz12za2zzeffect_feffectz00(obj_t
		BgL_envz00_2275, obj_t BgL_nodez00_2276, obj_t BgL_effectz00_2277)
	{
		{	/* Effect/feffect.scm 210 */
			return
				BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				((BgL_nodez00_bglt) BgL_nodez00_2276),
				((BgL_feffectz00_bglt) BgL_effectz00_2277));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzeffect_feffectz00()
	{
		{	/* Effect/feffect.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2displayzd2envz00zz__objectz00, BGl_feffectz00zzast_varz00,
				BGl_proc1958z00zzeffect_feffectz00,
				BGl_string1959z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_atomz00zzast_nodez00, BGl_proc1960z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_patchz00zzast_nodez00, BGl_proc1962z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_kwotez00zzast_nodez00, BGl_proc1963z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_varz00zzast_nodez00, BGl_proc1964z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_setqz00zzast_nodez00, BGl_proc1965z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1966z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_switchz00zzast_nodez00, BGl_proc1967z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_failz00zzast_nodez00, BGl_proc1968z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1969z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1970z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1971z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1972z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1973z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_castz00zzast_nodez00, BGl_proc1974z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_sequencez00zzast_nodez00, BGl_proc1975z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_syncz00zzast_nodez00, BGl_proc1976z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_funcallz00zzast_nodez00, BGl_proc1977z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1978z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_appz00zzast_nodez00, BGl_proc1979z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_externz00zzast_nodez00, BGl_proc1980z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1981z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_bodyzd2effectz12zd2envz12zzeffect_feffectz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1982z00zzeffect_feffectz00,
				BGl_string1961z00zzeffect_feffectz00);
		}

	}



/* &body-effect!-let-var1327 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2letzd2var1327za2zzeffect_feffectz00(obj_t
		BgL_envz00_2302, obj_t BgL_nodez00_2303, obj_t BgL_effectz00_2304)
	{
		{	/* Effect/feffect.scm 379 */
			{	/* Effect/feffect.scm 381 */
				obj_t BgL_g1277z00_2405;

				BgL_g1277z00_2405 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2303)))->BgL_bindingsz00);
				{
					obj_t BgL_l1275z00_2407;

					BgL_l1275z00_2407 = BgL_g1277z00_2405;
				BgL_zc3z04anonymousza31748ze3z87_2406:
					if (PAIRP(BgL_l1275z00_2407))
						{	/* Effect/feffect.scm 381 */
							{	/* Effect/feffect.scm 382 */
								obj_t BgL_bindingz00_2408;

								BgL_bindingz00_2408 = CAR(BgL_l1275z00_2407);
								{	/* Effect/feffect.scm 382 */
									obj_t BgL_arg1754z00_2409;

									BgL_arg1754z00_2409 = CDR(((obj_t) BgL_bindingz00_2408));
									BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
										((BgL_nodez00_bglt) BgL_arg1754z00_2409),
										((BgL_feffectz00_bglt) BgL_effectz00_2304));
								}
							}
							{
								obj_t BgL_l1275z00_2840;

								BgL_l1275z00_2840 = CDR(BgL_l1275z00_2407);
								BgL_l1275z00_2407 = BgL_l1275z00_2840;
								goto BgL_zc3z04anonymousza31748ze3z87_2406;
							}
						}
					else
						{	/* Effect/feffect.scm 381 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2303)))->BgL_bodyz00),
				((BgL_feffectz00_bglt) BgL_effectz00_2304));
		}

	}



/* &body-effect!-let-fun1325 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2letzd2fun1325za2zzeffect_feffectz00(obj_t
		BgL_envz00_2305, obj_t BgL_nodez00_2306, obj_t BgL_effectz00_2307)
	{
		{	/* Effect/feffect.scm 371 */
			{	/* Effect/feffect.scm 373 */
				obj_t BgL_g1274z00_2412;

				BgL_g1274z00_2412 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2306)))->BgL_localsz00);
				{
					obj_t BgL_l1272z00_2414;

					BgL_l1272z00_2414 = BgL_g1274z00_2412;
				BgL_zc3z04anonymousza31743ze3z87_2413:
					if (PAIRP(BgL_l1272z00_2414))
						{	/* Effect/feffect.scm 373 */
							BGl_funzd2effectz12zc0zzeffect_feffectz00(CAR(BgL_l1272z00_2414));
							{
								obj_t BgL_l1272z00_2852;

								BgL_l1272z00_2852 = CDR(BgL_l1272z00_2414);
								BgL_l1272z00_2414 = BgL_l1272z00_2852;
								goto BgL_zc3z04anonymousza31743ze3z87_2413;
							}
						}
					else
						{	/* Effect/feffect.scm 373 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2306)))->BgL_bodyz00),
				((BgL_feffectz00_bglt) BgL_effectz00_2307));
		}

	}



/* &body-effect!-extern1323 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2extern1323z70zzeffect_feffectz00(obj_t
		BgL_envz00_2308, obj_t BgL_nodez00_2309, obj_t BgL_effectz00_2310)
	{
		{	/* Effect/feffect.scm 361 */
			{	/* Effect/feffect.scm 362 */
				obj_t BgL_efz00_2416;

				{	/* Effect/feffect.scm 362 */
					bool_t BgL_test2065z00_2858;

					{	/* Effect/feffect.scm 362 */
						obj_t BgL_arg1742z00_2417;

						BgL_arg1742z00_2417 =
							(((BgL_externz00_bglt) COBJECT(
									((BgL_externz00_bglt) BgL_nodez00_2309)))->BgL_effectz00);
						BgL_test2065z00_2858 =
							BGl_isazf3zf3zz__objectz00(BgL_arg1742z00_2417,
							BGl_feffectz00zzast_varz00);
					}
					if (BgL_test2065z00_2858)
						{	/* Effect/feffect.scm 362 */
							BgL_efz00_2416 =
								(((BgL_externz00_bglt) COBJECT(
										((BgL_externz00_bglt) BgL_nodez00_2309)))->BgL_effectz00);
						}
					else
						{	/* Effect/feffect.scm 362 */
							BgL_efz00_2416 =
								((obj_t) BGl_za2effectzd2topza2zd2zzeffect_feffectz00);
						}
				}
				BGl_mergezd2effectsz12zc0zzeffect_feffectz00(BgL_effectz00_2310,
					BgL_efz00_2416);
				return ((BgL_feffectz00_bglt) BgL_effectz00_2310);
			}
		}

	}



/* &body-effect!-app1321 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2app1321z70zzeffect_feffectz00(obj_t
		BgL_envz00_2311, obj_t BgL_nodez00_2312, obj_t BgL_effectz00_2313)
	{
		{	/* Effect/feffect.scm 351 */
			BGl_bodyzd2effectza2z12z62zzeffect_feffectz00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2312)))->BgL_argsz00),
				BgL_effectz00_2313);
			{	/* Effect/feffect.scm 354 */
				BgL_feffectz00_bglt BgL_efz00_2419;

				{	/* Effect/feffect.scm 354 */
					BgL_variablez00_bglt BgL_arg1738z00_2420;

					BgL_arg1738z00_2420 =
						(((BgL_varz00_bglt) COBJECT(
								(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt) BgL_nodez00_2312)))->BgL_funz00)))->
						BgL_variablez00);
					BgL_efz00_2419 =
						BGl_funzd2effectz12zc0zzeffect_feffectz00(((obj_t)
							BgL_arg1738z00_2420));
				}
				BGl_mergezd2effectsz12zc0zzeffect_feffectz00(BgL_effectz00_2313,
					((obj_t) BgL_efz00_2419));
			}
			return ((BgL_feffectz00_bglt) BgL_effectz00_2313);
		}

	}



/* &body-effect!-app-ly1319 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2appzd2ly1319za2zzeffect_feffectz00(obj_t
		BgL_envz00_2314, obj_t BgL_nodez00_2315, obj_t BgL_effectz00_2316)
	{
		{	/* Effect/feffect.scm 344 */
			BGl_mergezd2effectsz12zc0zzeffect_feffectz00(
				((obj_t)
					((BgL_feffectz00_bglt) BgL_effectz00_2316)),
				((obj_t) BGl_za2effectzd2topza2zd2zzeffect_feffectz00));
			return ((BgL_feffectz00_bglt) BgL_effectz00_2316);
		}

	}



/* &body-effect!-funcall1317 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2funcall1317z70zzeffect_feffectz00(obj_t
		BgL_envz00_2317, obj_t BgL_nodez00_2318, obj_t BgL_effectz00_2319)
	{
		{	/* Effect/feffect.scm 337 */
			BGl_mergezd2effectsz12zc0zzeffect_feffectz00(
				((obj_t)
					((BgL_feffectz00_bglt) BgL_effectz00_2319)),
				((obj_t) BGl_za2effectzd2topza2zd2zzeffect_feffectz00));
			return ((BgL_feffectz00_bglt) BgL_effectz00_2319);
		}

	}



/* &body-effect!-sync1315 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2sync1315z70zzeffect_feffectz00(obj_t
		BgL_envz00_2320, obj_t BgL_nodez00_2321, obj_t BgL_effectz00_2322)
	{
		{	/* Effect/feffect.scm 329 */
			BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2321)))->BgL_mutexz00),
				((BgL_feffectz00_bglt) BgL_effectz00_2322));
			BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2321)))->BgL_prelockz00),
				((BgL_feffectz00_bglt) BgL_effectz00_2322));
			return
				BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2321)))->BgL_bodyz00),
				((BgL_feffectz00_bglt) BgL_effectz00_2322));
		}

	}



/* &body-effect!-sequenc1313 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2sequenc1313z70zzeffect_feffectz00(obj_t
		BgL_envz00_2323, obj_t BgL_nodez00_2324, obj_t BgL_effectz00_2325)
	{
		{	/* Effect/feffect.scm 323 */
			{	/* Effect/feffect.scm 324 */
				obj_t BgL_arg1728z00_2429;

				BgL_arg1728z00_2429 =
					(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2324)))->BgL_nodesz00);
				return
					((BgL_feffectz00_bglt)
					BGl_bodyzd2effectza2z12z62zzeffect_feffectz00(BgL_arg1728z00_2429,
						((obj_t) ((BgL_feffectz00_bglt) BgL_effectz00_2325))));
			}
		}

	}



/* &body-effect!-cast1311 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2cast1311z70zzeffect_feffectz00(obj_t
		BgL_envz00_2326, obj_t BgL_nodez00_2327, obj_t BgL_effectz00_2328)
	{
		{	/* Effect/feffect.scm 316 */
			return
				BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2327)))->BgL_argz00),
				((BgL_feffectz00_bglt) BgL_effectz00_2328));
		}

	}



/* &body-effect!-box-set1309 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2boxzd2set1309za2zzeffect_feffectz00(obj_t
		BgL_envz00_2329, obj_t BgL_nodez00_2330, obj_t BgL_effectz00_2331)
	{
		{	/* Effect/feffect.scm 308 */
			{	/* Effect/feffect.scm 310 */
				BgL_varz00_bglt BgL_arg1725z00_2434;

				BgL_arg1725z00_2434 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2330)))->BgL_varz00);
				BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
					((BgL_nodez00_bglt) BgL_arg1725z00_2434),
					((BgL_feffectz00_bglt) BgL_effectz00_2331));
			}
			return
				BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2330)))->BgL_valuez00),
				((BgL_feffectz00_bglt) BgL_effectz00_2331));
		}

	}



/* &body-effect!-box-ref1307 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2boxzd2ref1307za2zzeffect_feffectz00(obj_t
		BgL_envz00_2332, obj_t BgL_nodez00_2333, obj_t BgL_effectz00_2334)
	{
		{	/* Effect/feffect.scm 302 */
			{	/* Effect/feffect.scm 303 */
				BgL_varz00_bglt BgL_arg1719z00_2437;

				BgL_arg1719z00_2437 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_2333)))->BgL_varz00);
				return
					BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
					((BgL_nodez00_bglt) BgL_arg1719z00_2437),
					((BgL_feffectz00_bglt) BgL_effectz00_2334));
			}
		}

	}



/* &body-effect!-make-bo1305 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2makezd2bo1305za2zzeffect_feffectz00(obj_t
		BgL_envz00_2335, obj_t BgL_nodez00_2336, obj_t BgL_effectz00_2337)
	{
		{	/* Effect/feffect.scm 296 */
			return
				BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2336)))->BgL_valuez00),
				((BgL_feffectz00_bglt) BgL_effectz00_2337));
		}

	}



/* &body-effect!-jump-ex1303 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2jumpzd2ex1303za2zzeffect_feffectz00(obj_t
		BgL_envz00_2338, obj_t BgL_nodez00_2339, obj_t BgL_effectz00_2340)
	{
		{	/* Effect/feffect.scm 288 */
			BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2339)))->BgL_exitz00),
				((BgL_feffectz00_bglt) BgL_effectz00_2340));
			return
				BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2339)))->BgL_valuez00),
				((BgL_feffectz00_bglt) BgL_effectz00_2340));
		}

	}



/* &body-effect!-set-ex-1301 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2setzd2exzd21301z70zzeffect_feffectz00(obj_t
		BgL_envz00_2341, obj_t BgL_nodez00_2342, obj_t BgL_effectz00_2343)
	{
		{	/* Effect/feffect.scm 281 */
			return
				BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2342)))->BgL_bodyz00),
				((BgL_feffectz00_bglt) BgL_effectz00_2343));
		}

	}



/* &body-effect!-fail1299 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2fail1299z70zzeffect_feffectz00(obj_t
		BgL_envz00_2344, obj_t BgL_nodez00_2345, obj_t BgL_effectz00_2346)
	{
		{	/* Effect/feffect.scm 272 */
			BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2345)))->BgL_procz00),
				((BgL_feffectz00_bglt) BgL_effectz00_2346));
			BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2345)))->BgL_msgz00),
				((BgL_feffectz00_bglt) BgL_effectz00_2346));
			return
				BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2345)))->BgL_objz00),
				((BgL_feffectz00_bglt) BgL_effectz00_2346));
		}

	}



/* &body-effect!-switch1297 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2switch1297z70zzeffect_feffectz00(obj_t
		BgL_envz00_2347, obj_t BgL_nodez00_2348, obj_t BgL_effectz00_2349)
	{
		{	/* Effect/feffect.scm 261 */
			BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2348)))->BgL_testz00),
				((BgL_feffectz00_bglt) BgL_effectz00_2349));
			{	/* Effect/feffect.scm 264 */
				obj_t BgL_g1271z00_2448;

				BgL_g1271z00_2448 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2348)))->BgL_clausesz00);
				{
					obj_t BgL_l1269z00_2450;

					BgL_l1269z00_2450 = BgL_g1271z00_2448;
				BgL_zc3z04anonymousza31687ze3z87_2449:
					if (PAIRP(BgL_l1269z00_2450))
						{	/* Effect/feffect.scm 264 */
							{	/* Effect/feffect.scm 265 */
								obj_t BgL_clausez00_2451;

								BgL_clausez00_2451 = CAR(BgL_l1269z00_2450);
								{	/* Effect/feffect.scm 265 */
									obj_t BgL_arg1692z00_2452;

									BgL_arg1692z00_2452 = CDR(((obj_t) BgL_clausez00_2451));
									BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
										((BgL_nodez00_bglt) BgL_arg1692z00_2452),
										((BgL_feffectz00_bglt) BgL_effectz00_2349));
								}
							}
							{
								obj_t BgL_l1269z00_2966;

								BgL_l1269z00_2966 = CDR(BgL_l1269z00_2450);
								BgL_l1269z00_2450 = BgL_l1269z00_2966;
								goto BgL_zc3z04anonymousza31687ze3z87_2449;
							}
						}
					else
						{	/* Effect/feffect.scm 264 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_feffectz00_bglt) BgL_effectz00_2349);
		}

	}



/* &body-effect!-conditi1295 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2conditi1295z70zzeffect_feffectz00(obj_t
		BgL_envz00_2350, obj_t BgL_nodez00_2351, obj_t BgL_effectz00_2352)
	{
		{	/* Effect/feffect.scm 252 */
			BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2351)))->BgL_testz00),
				((BgL_feffectz00_bglt) BgL_effectz00_2352));
			BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2351)))->BgL_truez00),
				((BgL_feffectz00_bglt) BgL_effectz00_2352));
			return
				BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2351)))->BgL_falsez00),
				((BgL_feffectz00_bglt) BgL_effectz00_2352));
		}

	}



/* &body-effect!-setq1293 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2setq1293z70zzeffect_feffectz00(obj_t
		BgL_envz00_2353, obj_t BgL_nodez00_2354, obj_t BgL_effectz00_2355)
	{
		{	/* Effect/feffect.scm 243 */
			{	/* Effect/feffect.scm 245 */
				bool_t BgL_test2067z00_2981;

				{	/* Effect/feffect.scm 245 */
					BgL_variablez00_bglt BgL_arg1664z00_2457;

					BgL_arg1664z00_2457 =
						(((BgL_varz00_bglt) COBJECT(
								(((BgL_setqz00_bglt) COBJECT(
											((BgL_setqz00_bglt) BgL_nodez00_2354)))->BgL_varz00)))->
						BgL_variablez00);
					{	/* Effect/feffect.scm 245 */
						bool_t BgL_res1915z00_2458;

						BgL_res1915z00_2458 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_arg1664z00_2457), BGl_globalz00zzast_varz00);
						BgL_test2067z00_2981 = BgL_res1915z00_2458;
					}
				}
				if (BgL_test2067z00_2981)
					{	/* Effect/feffect.scm 245 */
						BGl_mergezd2effectsz12zc0zzeffect_feffectz00(
							((obj_t)
								((BgL_feffectz00_bglt) BgL_effectz00_2355)),
							((obj_t) BGl_za2effectzd2writezd2memza2z00zzeffect_feffectz00));
					}
				else
					{	/* Effect/feffect.scm 245 */
						((bool_t) 0);
					}
			}
			return
				BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
				(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2354)))->BgL_valuez00),
				((BgL_feffectz00_bglt) BgL_effectz00_2355));
		}

	}



/* &body-effect!-var1291 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2var1291z70zzeffect_feffectz00(obj_t
		BgL_envz00_2356, obj_t BgL_nodez00_2357, obj_t BgL_effectz00_2358)
	{
		{	/* Effect/feffect.scm 235 */
			{	/* Effect/feffect.scm 236 */
				bool_t BgL_test2068z00_2995;

				{	/* Effect/feffect.scm 236 */
					BgL_variablez00_bglt BgL_arg1644z00_2461;

					BgL_arg1644z00_2461 =
						(((BgL_varz00_bglt) COBJECT(
								((BgL_varz00_bglt) BgL_nodez00_2357)))->BgL_variablez00);
					{	/* Effect/feffect.scm 236 */
						bool_t BgL_res1914z00_2462;

						BgL_res1914z00_2462 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_arg1644z00_2461), BGl_globalz00zzast_varz00);
						BgL_test2068z00_2995 = BgL_res1914z00_2462;
					}
				}
				if (BgL_test2068z00_2995)
					{	/* Effect/feffect.scm 236 */
						BGl_mergezd2effectsz12zc0zzeffect_feffectz00(
							((obj_t)
								((BgL_feffectz00_bglt) BgL_effectz00_2358)),
							((obj_t) BGl_za2effectzd2readzd2memza2z00zzeffect_feffectz00));
					}
				else
					{	/* Effect/feffect.scm 236 */
						((bool_t) 0);
					}
			}
			return ((BgL_feffectz00_bglt) BgL_effectz00_2358);
		}

	}



/* &body-effect!-kwote1289 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2kwote1289z70zzeffect_feffectz00(obj_t
		BgL_envz00_2359, obj_t BgL_nodez00_2360, obj_t BgL_effectz00_2361)
	{
		{	/* Effect/feffect.scm 229 */
			return ((BgL_feffectz00_bglt) BgL_effectz00_2361);
		}

	}



/* &body-effect!-patch1287 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2patch1287z70zzeffect_feffectz00(obj_t
		BgL_envz00_2362, obj_t BgL_nodez00_2363, obj_t BgL_effectz00_2364)
	{
		{	/* Effect/feffect.scm 221 */
			BGl_mergezd2effectsz12zc0zzeffect_feffectz00(
				((obj_t)
					((BgL_feffectz00_bglt) BgL_effectz00_2364)),
				((obj_t) BGl_za2effectzd2writezd2memza2z00zzeffect_feffectz00));
			{	/* Effect/feffect.scm 224 */
				obj_t BgL_arg1639z00_2466;

				BgL_arg1639z00_2466 =
					(((BgL_atomz00_bglt) COBJECT(
							((BgL_atomz00_bglt)
								((BgL_patchz00_bglt) BgL_nodez00_2363))))->BgL_valuez00);
				return
					BGl_bodyzd2effectz12zc0zzeffect_feffectz00(
					((BgL_nodez00_bglt) BgL_arg1639z00_2466),
					((BgL_feffectz00_bglt) BgL_effectz00_2364));
			}
		}

	}



/* &body-effect!-atom1285 */
	BgL_feffectz00_bglt
		BGl_z62bodyzd2effectz12zd2atom1285z70zzeffect_feffectz00(obj_t
		BgL_envz00_2365, obj_t BgL_nodez00_2366, obj_t BgL_effectz00_2367)
	{
		{	/* Effect/feffect.scm 215 */
			return ((BgL_feffectz00_bglt) BgL_effectz00_2367);
		}

	}



/* &object-display-feffe1281 */
	obj_t BGl_z62objectzd2displayzd2feffe1281z62zzeffect_feffectz00(obj_t
		BgL_envz00_2368, obj_t BgL_fz00_2369, obj_t BgL_pz00_2370)
	{
		{	/* Effect/feffect.scm 63 */
			{	/* Effect/feffect.scm 64 */
				obj_t BgL_arg1613z00_2469;

				if (PAIRP(BgL_pz00_2370))
					{	/* Effect/feffect.scm 64 */
						BgL_arg1613z00_2469 = CAR(BgL_pz00_2370);
					}
				else
					{	/* Effect/feffect.scm 64 */
						obj_t BgL_res1913z00_2470;

						{	/* Effect/feffect.scm 64 */
							obj_t BgL_tmpz00_3020;

							BgL_tmpz00_3020 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1913z00_2470 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_3020);
						}
						BgL_arg1613z00_2469 = BgL_res1913z00_2470;
					}
				{	/* Effect/feffect.scm 66 */
					obj_t BgL_zc3z04anonymousza31626ze3z87_2471;

					BgL_zc3z04anonymousza31626ze3z87_2471 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31626ze3ze5zzeffect_feffectz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31626ze3z87_2471,
						(int) (((long) 0)),
						((obj_t) ((BgL_feffectz00_bglt) BgL_fz00_2369)));
					return
						BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
						(BgL_arg1613z00_2469, BgL_zc3z04anonymousza31626ze3z87_2471);
				}
			}
		}

	}



/* &<@anonymous:1626> */
	obj_t BGl_z62zc3z04anonymousza31626ze3ze5zzeffect_feffectz00(obj_t
		BgL_envz00_2371)
	{
		{	/* Effect/feffect.scm 65 */
			{	/* Effect/feffect.scm 66 */
				BgL_feffectz00_bglt BgL_fz00_2372;

				BgL_fz00_2372 =
					((BgL_feffectz00_bglt)
					PROCEDURE_REF(BgL_envz00_2371, (int) (((long) 0))));
				{	/* Effect/feffect.scm 67 */
					obj_t BgL_arg1627z00_2472;
					obj_t BgL_arg1631z00_2473;

					BgL_arg1627z00_2472 =
						(((BgL_feffectz00_bglt) COBJECT(BgL_fz00_2372))->BgL_readz00);
					BgL_arg1631z00_2473 =
						(((BgL_feffectz00_bglt) COBJECT(BgL_fz00_2372))->BgL_writez00);
					{	/* Effect/feffect.scm 67 */
						obj_t BgL_list1632z00_2474;

						{	/* Effect/feffect.scm 67 */
							obj_t BgL_arg1634z00_2475;

							BgL_arg1634z00_2475 = MAKE_YOUNG_PAIR(BgL_arg1631z00_2473, BNIL);
							BgL_list1632z00_2474 =
								MAKE_YOUNG_PAIR(BgL_arg1627z00_2472, BgL_arg1634z00_2475);
						}
						return
							BGl_printfz00zz__r4_output_6_10_3z00
							(BGl_string1983z00zzeffect_feffectz00, BgL_list1632z00_2474);
					}
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzeffect_feffectz00()
	{
		{	/* Effect/feffect.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1984z00zzeffect_feffectz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1984z00zzeffect_feffectz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1984z00zzeffect_feffectz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1984z00zzeffect_feffectz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1984z00zzeffect_feffectz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1984z00zzeffect_feffectz00));
			return
				BGl_modulezd2initializa7ationz75zzeffect_cgraphz00(((long) 271385030),
				BSTRING_TO_STRING(BGl_string1984z00zzeffect_feffectz00));
		}

	}

#ifdef __cplusplus
}
#endif
