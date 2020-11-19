/*===========================================================================*/
/*   (Cfa/type.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/type.scm) */
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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_cvarz00_bgl
	{
		header_t header;
		obj_t widening;
		bool_t BgL_macrozf3zf3;
	}              *BgL_cvarz00_bglt;

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

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_closurez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}                 *BgL_closurez00_bglt;

	typedef struct BgL_kwotez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}               *BgL_kwotez00_bglt;

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

	typedef struct BgL_vallocz00_bgl
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
	}                *BgL_vallocz00_bglt;

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

	typedef struct BgL_vsetz12z12_bgl
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
	}                 *BgL_vsetz12z12_bglt;

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

	typedef struct BgL_approxz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		bool_t BgL_typezd2lockedzf3z21;
		obj_t BgL_allocsz00;
		bool_t BgL_topzf3zf3;
		long BgL_lostzd2stampzd2;
		obj_t BgL_dupz00;
	}                *BgL_approxz00_bglt;

	typedef struct BgL_internzd2sfunzf2cinfoz20_bgl
	{
		bool_t BgL_polymorphiczf3zf3;
		struct BgL_approxz00_bgl *BgL_approxz00;
		long BgL_stampz00;
	}                               *BgL_internzd2sfunzf2cinfoz20_bglt;

	typedef struct BgL_svarzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_clozd2envzf3z21;
		long BgL_stampz00;
	}                      *BgL_svarzf2cinfozf2_bglt;

	typedef struct BgL_cvarzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                      *BgL_cvarzf2cinfozf2_bglt;

	typedef struct BgL_appzd2lyzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                          *BgL_appzd2lyzf2cinfoz20_bglt;

	typedef struct BgL_funcallzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_vazd2approxzd2;
		bool_t BgL_arityzd2errorzd2noticedzf3zf3;
		bool_t BgL_typezd2errorzd2noticedzf3zf3;
	}                         *BgL_funcallzf2cinfozf2_bglt;

	typedef struct BgL_conditionalzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                             *BgL_conditionalzf2cinfozf2_bglt;

	typedef struct BgL_arithmeticzd2appzd2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_speczd2typeszd2;
	}                          *BgL_arithmeticzd2appzd2_bglt;

	typedef struct BgL_procedurezd2refzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_procedurezd2refzd2appz00_bglt;

	typedef struct BgL_procedurezd2setz12zd2appz12_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_vapproxz00;
	}                                  *BgL_procedurezd2setz12zd2appz12_bglt;

	typedef struct BgL_makezd2vectorzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
		bool_t BgL_seenzf3zf3;
	}                             *BgL_makezd2vectorzd2appz00_bglt;

	typedef struct BgL_conszd2refzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_getz00;
	}                          *BgL_conszd2refzd2appz00_bglt;

	typedef struct BgL_valloczf2cinfozb2optimz40_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		bool_t BgL_stackablezf3zf3;
		obj_t BgL_stackzd2stampzd2;
		bool_t BgL_seenzf3zf3;
	}                                *BgL_valloczf2cinfozb2optimz40_bglt;

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;


	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2extern1675z70zzcfa_typez00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2setq1685z70zzcfa_typez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_approxz00_bglt, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t
		BGl_setzd2variablezd2typez12z12zzcfa_typez00(BgL_variablez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62typezd2variablez12zd2sexit1639z70zzcfa_typez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_za2optimzd2cfazf3za2z21zzengine_paramz00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzcfa_typez00();
	static obj_t BGl_z62typezd2variablez12zd2cvarzf21637z82zzcfa_typez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_typezd2settingsz12zc0zzcfa_typez00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62typezd2variablez12zd2svarzf21633z82zzcfa_typez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_typezd2funzd2nodez12z12zzcfa_typez00(BgL_varz00_bglt);
	extern obj_t BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_cvarzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_methodzd2initzd2zzcfa_typez00();
	extern obj_t BGl_externz00zzast_nodez00;
	extern BgL_typez00_bglt
		BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_typez00_bglt);
	extern obj_t BGl_typezd2closuresz12zc0zzcfa_closurez00();
	static obj_t BGl_z62typezd2variablez121630za2zzcfa_typez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_procedurezd2refzd2appz00zzcfa_info2z00;
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2atom1645z70zzcfa_typez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t
		BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2procedure1661z70zzcfa_typez00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2procedure1663z70zzcfa_typez00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2jumpzd2exzd2i1702z70zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern bool_t BGl_typezd2subclasszf3z21zzobject_classz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62typezd2nodez121642za2zzcfa_typez00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62typezd2nodez12zd2app1657z70zzcfa_typez00(obj_t,
		obj_t);
	extern obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
	static obj_t BGl_cleanupzd2typeze70z35zzcfa_typez00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_typez00();
	static obj_t BGl_typezd2variablez12zc0zzcfa_typez00(BgL_valuez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_vallocz00zzast_nodez00;
	extern obj_t BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00;
	extern obj_t BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00();
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2funcall1671z70zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_sexitzf2Cinfozf2zzcfa_infoz00;
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2funcallzf2C1673z82zzcfa_typez00(obj_t, obj_t);
	static obj_t BGl_typezd2nodeza2z12z62zzcfa_typez00(obj_t);
	extern obj_t BGl_za2epairza2z00zztype_cachez00;
	extern obj_t BGl_svarzf2Cinfozf2zzcfa_infoz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2sync1655z70zzcfa_typez00(obj_t, obj_t);
	static obj_t BGl_z62typezd2variablez12zd2inter1641z70zzcfa_typez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_funcallzf2Cinfozf2zzcfa_infoz00;
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2vsetz121681z62zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_z62getzd2approxzd2typez62zzcfa_typez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62typezd2settingsz12za2zzcfa_typez00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2switch1693z70zzcfa_typez00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_typez00 = BUNSPEC;
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2fail1691z70zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_typez00();
	extern obj_t BGl_setzd2ze3listz31zzcfa_setz00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_typez00();
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	extern obj_t BGl_conszd2refzd2appz00zzcfa_info2z00;
	extern obj_t BGl_castz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2boxzd2setz121706zb0zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern BgL_typez00_bglt
		BGl_getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00(BgL_nodez00_bglt);
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2makezd2box1704za2zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_arithmeticzd2appzd2zzcfa_info2z00;
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_makezd2vectorzd2appz00zzcfa_info2z00;
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2arithmeti1659z70zzcfa_typez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2vref1679z70zzcfa_typez00(obj_t, obj_t);
	static obj_t BGl_z62typezd2variablez12zd2scnst1635z70zzcfa_typez00(obj_t,
		obj_t, obj_t);
	extern bool_t
		BGl_approxzd2procedurezd2elzf3zf3zzcfa_closurez00(BgL_approxz00_bglt);
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2letzd2fun1695za2zzcfa_typez00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2kwote1647z70zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern obj_t BGl_za2pairza2z00zztype_cachez00;
	static BgL_nodez00_bglt BGl_z62typezd2nodez12zd2var1649z70zzcfa_typez00(obj_t,
		obj_t);
	static obj_t BGl_z62typezd2variablez12za2zzcfa_typez00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2condition1687z70zzcfa_typez00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2condition1689z70zzcfa_typez00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2appzd2lyzf2Ci1669z50zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t
		BGl_za2optimzd2cfazd2freezd2varzd2trackingzf3za2zf3zzengine_paramz00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_typez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_closurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2boxzd2ref1708za2zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_vrefz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_typezd2nodez12zc0zzcfa_typez00(BgL_nodez00_bglt);
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2sequence1653z70zzcfa_typez00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2setzd2exzd2it1700z70zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcfa_typez00();
	static obj_t BGl_typezd2funz12zc0zzcfa_typez00(BgL_variablez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_typez00();
	extern obj_t BGl_tvecz00zztvector_tvectorz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_typez00();
	static BgL_nodez00_bglt BGl_z62typezd2nodez12za2zzcfa_typez00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2valloc1677z70zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_conditionalzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_procedurezd2setz12zd2appz12zzcfa_info2z00;
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2closure1651z70zzcfa_typez00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2letzd2var1697za2zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_valuez00zzast_varz00;
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2appzd2ly1667za2zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_scnstzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_switchz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2conszd2refzd21665z70zzcfa_typez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	extern obj_t BGl_za2procedurezd2elza2zd2zztype_cachez00;
	extern BgL_typez00_bglt BGl_getzd2typezd2kwotez00zztype_typeofz00(obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2cast1683z70zzcfa_typez00(obj_t, obj_t);
	extern obj_t BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00;
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t __cnst[5];


	   
		 
		DEFINE_STRING(BGl_string2307z00zzcfa_typez00,
		BgL_bgl_string2307za700za7za7c2360za7, "type-fun!", 9);
	      DEFINE_STRING(BGl_string2308z00zzcfa_typez00,
		BgL_bgl_string2308za700za7za7c2361za7, "Unknown value", 13);
	      DEFINE_STRING(BGl_string2310z00zzcfa_typez00,
		BgL_bgl_string2310za700za7za7c2362za7, "type-variable!1630", 18);
	      DEFINE_STRING(BGl_string2312z00zzcfa_typez00,
		BgL_bgl_string2312za700za7za7c2363za7, "type-node!1642", 14);
	      DEFINE_STRING(BGl_string2313z00zzcfa_typez00,
		BgL_bgl_string2313za700za7za7c2364za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2315z00zzcfa_typez00,
		BgL_bgl_string2315za700za7za7c2365za7, "type-variable!", 14);
	      DEFINE_STRING(BGl_string2321z00zzcfa_typez00,
		BgL_bgl_string2321za700za7za7c2366za7, "type-node!", 10);
	      DEFINE_STRING(BGl_string2353z00zzcfa_typez00,
		BgL_bgl_string2353za700za7za7c2367za7, "unexpected node", 15);
	      DEFINE_STRING(BGl_string2354z00zzcfa_typez00,
		BgL_bgl_string2354za700za7za7c2368za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string2355z00zzcfa_typez00,
		BgL_bgl_string2355za700za7za7c2369za7, "cfa_type", 8);
	      DEFINE_STRING(BGl_string2356z00zzcfa_typez00,
		BgL_bgl_string2356za700za7za7c2370za7,
		"nothing static (light elight) type-node!1642 bigloo ", 52);
	      DEFINE_STATIC_BGL_GENERIC(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
		BgL_bgl_za762typeza7d2variab2371z00,
		BGl_z62typezd2variablez12za2zzcfa_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2309z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2variab2372z00,
		BGl_z62typezd2variablez121630za2zzcfa_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2311z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712373za7,
		BGl_z62typezd2nodez121642za2zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2314z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2variab2374z00,
		BGl_z62typezd2variablez12zd2svarzf21633z82zzcfa_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2316z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2variab2375z00,
		BGl_z62typezd2variablez12zd2scnst1635z70zzcfa_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2317z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2variab2376z00,
		BGl_z62typezd2variablez12zd2cvarzf21637z82zzcfa_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2318z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2variab2377z00,
		BGl_z62typezd2variablez12zd2sexit1639z70zzcfa_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2319z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2variab2378z00,
		BGl_z62typezd2variablez12zd2inter1641z70zzcfa_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2320z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712379za7,
		BGl_z62typezd2nodez12zd2atom1645z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2322z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712380za7,
		BGl_z62typezd2nodez12zd2kwote1647z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2323z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712381za7,
		BGl_z62typezd2nodez12zd2var1649z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2324z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712382za7,
		BGl_z62typezd2nodez12zd2closure1651z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2325z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712383za7,
		BGl_z62typezd2nodez12zd2sequence1653z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2326z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712384za7,
		BGl_z62typezd2nodez12zd2sync1655z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2327z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712385za7,
		BGl_z62typezd2nodez12zd2app1657z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2328z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712386za7,
		BGl_z62typezd2nodez12zd2arithmeti1659z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2329z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712387za7,
		BGl_z62typezd2nodez12zd2procedure1661z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2330z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712388za7,
		BGl_z62typezd2nodez12zd2procedure1663z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2331z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712389za7,
		BGl_z62typezd2nodez12zd2conszd2refzd21665z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2332z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712390za7,
		BGl_z62typezd2nodez12zd2appzd2ly1667za2zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2333z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712391za7,
		BGl_z62typezd2nodez12zd2appzd2lyzf2Ci1669z50zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2334z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712392za7,
		BGl_z62typezd2nodez12zd2funcall1671z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2335z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712393za7,
		BGl_z62typezd2nodez12zd2funcallzf2C1673z82zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2336z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712394za7,
		BGl_z62typezd2nodez12zd2extern1675z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2337z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712395za7,
		BGl_z62typezd2nodez12zd2valloc1677z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2338z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712396za7,
		BGl_z62typezd2nodez12zd2vref1679z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2339z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712397za7,
		BGl_z62typezd2nodez12zd2vsetz121681z62zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2340z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712398za7,
		BGl_z62typezd2nodez12zd2cast1683z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2341z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712399za7,
		BGl_z62typezd2nodez12zd2setq1685z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2342z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712400za7,
		BGl_z62typezd2nodez12zd2condition1687z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2343z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712401za7,
		BGl_z62typezd2nodez12zd2condition1689z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2344z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712402za7,
		BGl_z62typezd2nodez12zd2fail1691z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2345z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712403za7,
		BGl_z62typezd2nodez12zd2switch1693z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2346z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712404za7,
		BGl_z62typezd2nodez12zd2letzd2fun1695za2zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2347z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712405za7,
		BGl_z62typezd2nodez12zd2letzd2var1697za2zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2348z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712406za7,
		BGl_z62typezd2nodez12zd2setzd2exzd2it1700z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2349z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712407za7,
		BGl_z62typezd2nodez12zd2jumpzd2exzd2i1702z70zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2350z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712408za7,
		BGl_z62typezd2nodez12zd2makezd2box1704za2zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2351z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712409za7,
		BGl_z62typezd2nodez12zd2boxzd2setz121706zb0zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2352z00zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712410za7,
		BGl_z62typezd2nodez12zd2boxzd2ref1708za2zzcfa_typez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2settingsz12zd2envz12zzcfa_typez00,
		BgL_bgl_za762typeza7d2settin2411z00,
		BGl_z62typezd2settingsz12za2zzcfa_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
		BgL_bgl_za762typeza7d2nodeza712412za7,
		BGl_z62typezd2nodez12za2zzcfa_typez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2approxzd2typezd2envzd2zzcfa_typez00,
		BgL_bgl_za762getza7d2approxza72413za7,
		BGl_z62getzd2approxzd2typez62zzcfa_typez00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_typez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_typez00(long
		BgL_checksumz00_5299, char *BgL_fromz00_5300)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_typez00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_typez00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_typez00();
					BGl_libraryzd2moduleszd2initz00zzcfa_typez00();
					BGl_cnstzd2initzd2zzcfa_typez00();
					BGl_importedzd2moduleszd2initz00zzcfa_typez00();
					BGl_genericzd2initzd2zzcfa_typez00();
					BGl_methodzd2initzd2zzcfa_typez00();
					return BGl_toplevelzd2initzd2zzcfa_typez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_typez00()
	{
		{	/* Cfa/type.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_type");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_type");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_type");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_type");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_type");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_type");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "cfa_type");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_type");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_type");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_typez00()
	{
		{	/* Cfa/type.scm 15 */
			{	/* Cfa/type.scm 15 */
				obj_t BgL_cportz00_5094;

				{	/* Cfa/type.scm 15 */
					obj_t BgL_stringz00_5102;

					BgL_stringz00_5102 = BGl_string2356z00zzcfa_typez00;
					{	/* Cfa/type.scm 15 */
						obj_t BgL_startz00_5103;

						BgL_startz00_5103 = BINT(((long) 0));
						{	/* Cfa/type.scm 15 */
							obj_t BgL_endz00_5104;

							BgL_endz00_5104 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_5102)));
							{	/* Cfa/type.scm 15 */

								BgL_cportz00_5094 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_5102, BgL_startz00_5103, BgL_endz00_5104);
				}}}}
				{
					long BgL_iz00_5095;

					BgL_iz00_5095 = ((long) 4);
				BgL_loopz00_5096:
					if ((BgL_iz00_5095 == ((long) -1)))
						{	/* Cfa/type.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/type.scm 15 */
							{	/* Cfa/type.scm 15 */
								obj_t BgL_arg2358z00_5098;

								{	/* Cfa/type.scm 15 */

									{	/* Cfa/type.scm 15 */
										obj_t BgL_locationz00_5100;

										BgL_locationz00_5100 = BBOOL(((bool_t) 0));
										{	/* Cfa/type.scm 15 */

											BgL_arg2358z00_5098 =
												BGl_readz00zz__readerz00(BgL_cportz00_5094,
												BgL_locationz00_5100);
										}
									}
								}
								{	/* Cfa/type.scm 15 */
									int BgL_tmpz00_5329;

									BgL_tmpz00_5329 = (int) (BgL_iz00_5095);
									CNST_TABLE_SET(BgL_tmpz00_5329, BgL_arg2358z00_5098);
							}}
							{	/* Cfa/type.scm 15 */
								int BgL_auxz00_5101;

								BgL_auxz00_5101 = (int) ((BgL_iz00_5095 - ((long) 1)));
								{
									long BgL_iz00_5334;

									BgL_iz00_5334 = (long) (BgL_auxz00_5101);
									BgL_iz00_5095 = BgL_iz00_5334;
									goto BgL_loopz00_5096;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_typez00()
	{
		{	/* Cfa/type.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_typez00()
	{
		{	/* Cfa/type.scm 15 */
			return BUNSPEC;
		}

	}



/* type-settings! */
	BGL_EXPORTED_DEF obj_t BGl_typezd2settingsz12zc0zzcfa_typez00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Cfa/type.scm 39 */
			BGl_typezd2closuresz12zc0zzcfa_closurez00();
			{
				obj_t BgL_l1601z00_3567;

				{	/* Cfa/type.scm 44 */
					bool_t BgL_tmpz00_5338;

					BgL_l1601z00_3567 = BgL_globalsz00_3;
				BgL_zc3z04anonymousza31713ze3z87_3568:
					if (PAIRP(BgL_l1601z00_3567))
						{	/* Cfa/type.scm 44 */
							{	/* Cfa/type.scm 44 */
								obj_t BgL_arg1719z00_3570;

								BgL_arg1719z00_3570 = CAR(BgL_l1601z00_3567);
								BGl_typezd2funz12zc0zzcfa_typez00(
									((BgL_variablez00_bglt) BgL_arg1719z00_3570));
							}
							{
								obj_t BgL_l1601z00_5344;

								BgL_l1601z00_5344 = CDR(BgL_l1601z00_3567);
								BgL_l1601z00_3567 = BgL_l1601z00_5344;
								goto BgL_zc3z04anonymousza31713ze3z87_3568;
							}
						}
					else
						{	/* Cfa/type.scm 44 */
							BgL_tmpz00_5338 = ((bool_t) 1);
						}
					return BBOOL(BgL_tmpz00_5338);
				}
			}
		}

	}



/* &type-settings! */
	obj_t BGl_z62typezd2settingsz12za2zzcfa_typez00(obj_t BgL_envz00_4961,
		obj_t BgL_globalsz00_4962)
	{
		{	/* Cfa/type.scm 39 */
			return BGl_typezd2settingsz12zc0zzcfa_typez00(BgL_globalsz00_4962);
		}

	}



/* type-fun! */
	obj_t BGl_typezd2funz12zc0zzcfa_typez00(BgL_variablez00_bglt BgL_varz00_4)
	{
		{	/* Cfa/type.scm 49 */
			{	/* Cfa/type.scm 50 */
				BgL_valuez00_bglt BgL_funz00_3573;

				BgL_funz00_3573 =
					(((BgL_variablez00_bglt) COBJECT(BgL_varz00_4))->BgL_valuez00);
				{	/* Cfa/type.scm 54 */
					bool_t BgL_test2417z00_5349;

					{	/* Cfa/type.scm 54 */
						bool_t BgL_res2251z00_4717;

						BgL_res2251z00_4717 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_funz00_3573),
							BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00);
						BgL_test2417z00_5349 = BgL_res2251z00_4717;
					}
					if (BgL_test2417z00_5349)
						{	/* Cfa/type.scm 54 */
							{	/* Cfa/type.scm 59 */
								obj_t BgL_g1605z00_3576;

								BgL_g1605z00_3576 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt)
												((BgL_sfunz00_bglt) BgL_funz00_3573))))->BgL_argsz00);
								{
									obj_t BgL_l1603z00_3578;

									BgL_l1603z00_3578 = BgL_g1605z00_3576;
								BgL_zc3z04anonymousza31727ze3z87_3579:
									if (PAIRP(BgL_l1603z00_3578))
										{	/* Cfa/type.scm 59 */
											{	/* Cfa/type.scm 61 */
												obj_t BgL_varz00_3581;

												BgL_varz00_3581 = CAR(BgL_l1603z00_3578);
												{	/* Cfa/type.scm 62 */
													BgL_valuez00_bglt BgL_arg1729z00_3582;

													BgL_arg1729z00_3582 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_varz00_3581))))->
														BgL_valuez00);
													BGl_typezd2variablez12zc0zzcfa_typez00
														(BgL_arg1729z00_3582,
														((BgL_variablez00_bglt) BgL_varz00_3581));
												}
											}
											{
												obj_t BgL_l1603z00_5363;

												BgL_l1603z00_5363 = CDR(BgL_l1603z00_3578);
												BgL_l1603z00_3578 = BgL_l1603z00_5363;
												goto BgL_zc3z04anonymousza31727ze3z87_3579;
											}
										}
									else
										{	/* Cfa/type.scm 59 */
											((bool_t) 1);
										}
								}
							}
							{	/* Cfa/type.scm 65 */
								obj_t BgL_arg1732z00_3585;

								{	/* Cfa/type.scm 65 */
									BgL_approxz00_bglt BgL_arg1733z00_3586;

									{
										BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_5365;

										{
											obj_t BgL_auxz00_5366;

											{	/* Cfa/type.scm 65 */
												BgL_objectz00_bglt BgL_tmpz00_5367;

												BgL_tmpz00_5367 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_funz00_3573));
												BgL_auxz00_5366 = BGL_OBJECT_WIDENING(BgL_tmpz00_5367);
											}
											BgL_auxz00_5365 =
												((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_5366);
										}
										BgL_arg1733z00_3586 =
											(((BgL_internzd2sfunzf2cinfoz20_bglt)
												COBJECT(BgL_auxz00_5365))->BgL_approxz00);
									}
									BgL_arg1732z00_3585 =
										BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_arg1733z00_3586,
										((obj_t) BgL_varz00_4));
								}
								BGl_setzd2variablezd2typez12z12zzcfa_typez00(BgL_varz00_4,
									((BgL_typez00_bglt) BgL_arg1732z00_3585));
							}
							{	/* Cfa/type.scm 66 */
								long BgL_arg1738z00_3588;

								{	/* Cfa/type.scm 66 */
									obj_t BgL_arg1739z00_3589;

									{	/* Cfa/type.scm 66 */
										obj_t BgL_arg1740z00_3590;

										{	/* Cfa/type.scm 66 */
											long BgL_arg1816z00_4724;

											{	/* Cfa/type.scm 66 */
												long BgL_arg1817z00_4725;

												{	/* Cfa/type.scm 66 */
													long BgL_res2253z00_4727;

													BgL_res2253z00_4727 =
														BGL_OBJECT_CLASS_NUM(
														((BgL_objectz00_bglt)
															((BgL_sfunz00_bglt) BgL_funz00_3573)));
													BgL_arg1817z00_4725 = BgL_res2253z00_4727;
												}
												BgL_arg1816z00_4724 =
													(BgL_arg1817z00_4725 - OBJECT_TYPE);
											}
											BgL_arg1740z00_3590 =
												VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
												BgL_arg1816z00_4724);
										}
										BgL_arg1739z00_3589 =
											BGl_classzd2superzd2zz__objectz00(BgL_arg1740z00_3590);
									}
									{	/* Cfa/type.scm 66 */
										long BgL_res2255z00_4734;

										{	/* Cfa/type.scm 66 */
											obj_t BgL_tmpz00_5383;

											BgL_tmpz00_5383 = ((obj_t) BgL_arg1739z00_3589);
											BgL_res2255z00_4734 = BGL_CLASS_INDEX(BgL_tmpz00_5383);
										}
										BgL_arg1738z00_3588 = BgL_res2255z00_4734;
								}}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt)
										((BgL_sfunz00_bglt) BgL_funz00_3573)), BgL_arg1738z00_3588);
							}
							{	/* Cfa/type.scm 66 */
								BgL_objectz00_bglt BgL_tmpz00_5389;

								BgL_tmpz00_5389 =
									((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_3573));
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5389, BFALSE);
							}
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_3573));
							((BgL_sfunz00_bglt) BgL_funz00_3573);
							{
								obj_t BgL_auxz00_5396;

								{	/* Cfa/type.scm 68 */
									obj_t BgL_arg1741z00_3591;

									BgL_arg1741z00_3591 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt)
													((BgL_sfunz00_bglt) BgL_funz00_3573))))->BgL_bodyz00);
									BgL_auxz00_5396 =
										((obj_t)
										BGl_typezd2nodez12zc0zzcfa_typez00(
											((BgL_nodez00_bglt) BgL_arg1741z00_3591)));
								}
								return
									((((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt)
													((BgL_sfunz00_bglt) BgL_funz00_3573))))->
										BgL_bodyz00) = ((obj_t) BgL_auxz00_5396), BUNSPEC);
							}
						}
					else
						{	/* Cfa/type.scm 69 */
							bool_t BgL_test2419z00_5406;

							{	/* Cfa/type.scm 69 */
								bool_t BgL_res2256z00_4738;

								BgL_res2256z00_4738 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_funz00_3573), BGl_sfunz00zzast_varz00);
								BgL_test2419z00_5406 = BgL_res2256z00_4738;
							}
							if (BgL_test2419z00_5406)
								{
									obj_t BgL_auxz00_5409;

									{	/* Cfa/type.scm 71 */
										obj_t BgL_arg1744z00_3594;

										BgL_arg1744z00_3594 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_3573)))->BgL_bodyz00);
										BgL_auxz00_5409 =
											((obj_t)
											BGl_typezd2nodez12zc0zzcfa_typez00(
												((BgL_nodez00_bglt) BgL_arg1744z00_3594)));
									}
									return
										((((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_3573)))->BgL_bodyz00) =
										((obj_t) BgL_auxz00_5409), BUNSPEC);
								}
							else
								{	/* Cfa/type.scm 73 */
									obj_t BgL_arg1745z00_3595;

									BgL_arg1745z00_3595 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_varz00_4));
									return
										BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string2307z00zzcfa_typez00,
										BGl_string2308z00zzcfa_typez00, BgL_arg1745z00_3595);
								}
						}
				}
			}
		}

	}



/* type-fun-node! */
	obj_t BGl_typezd2funzd2nodez12z12zzcfa_typez00(BgL_varz00_bglt BgL_vz00_5)
	{
		{	/* Cfa/type.scm 78 */
			{	/* Cfa/type.scm 79 */
				BgL_variablez00_bglt BgL_varz00_3596;

				BgL_varz00_3596 =
					(((BgL_varz00_bglt) COBJECT(BgL_vz00_5))->BgL_variablez00);
				{	/* Cfa/type.scm 79 */
					BgL_valuez00_bglt BgL_funz00_3597;

					BgL_funz00_3597 =
						(((BgL_variablez00_bglt) COBJECT(BgL_varz00_3596))->BgL_valuez00);
					{	/* Cfa/type.scm 80 */

						{	/* Cfa/type.scm 81 */
							bool_t BgL_test2420z00_5422;

							{	/* Cfa/type.scm 81 */
								bool_t BgL_res2257z00_4741;

								BgL_res2257z00_4741 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_funz00_3597),
									BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00);
								BgL_test2420z00_5422 = BgL_res2257z00_4741;
							}
							if (BgL_test2420z00_5422)
								{	/* Cfa/type.scm 83 */
									obj_t BgL_arg1747z00_3600;

									{	/* Cfa/type.scm 83 */
										BgL_approxz00_bglt BgL_arg1754z00_3601;

										{
											BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_5425;

											{
												obj_t BgL_auxz00_5426;

												{	/* Cfa/type.scm 83 */
													BgL_objectz00_bglt BgL_tmpz00_5427;

													BgL_tmpz00_5427 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_funz00_3597));
													BgL_auxz00_5426 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_5427);
												}
												BgL_auxz00_5425 =
													((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_5426);
											}
											BgL_arg1754z00_3601 =
												(((BgL_internzd2sfunzf2cinfoz20_bglt)
													COBJECT(BgL_auxz00_5425))->BgL_approxz00);
										}
										BgL_arg1747z00_3600 =
											BGl_getzd2approxzd2typez00zzcfa_typez00
											(BgL_arg1754z00_3601, ((obj_t) BgL_vz00_5));
									}
									return
										BGl_setzd2variablezd2typez12z12zzcfa_typez00
										(BgL_varz00_3596, ((BgL_typez00_bglt) BgL_arg1747z00_3600));
								}
							else
								{	/* Cfa/type.scm 81 */
									return BFALSE;
								}
						}
					}
				}
			}
		}

	}



/* get-approx-type */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_approxz00_bglt BgL_approxz00_6,
		obj_t BgL_nodez00_7)
	{
		{	/* Cfa/type.scm 88 */
			{	/* Cfa/type.scm 89 */
				BgL_typez00_bglt BgL_typez00_3602;
				obj_t BgL_alloczd2listzd2_3603;

				BgL_typez00_3602 =
					(((BgL_approxz00_bglt) COBJECT(BgL_approxz00_6))->BgL_typez00);
				BgL_alloczd2listzd2_3603 =
					BGl_setzd2ze3listz31zzcfa_setz00(
					(((BgL_approxz00_bglt) COBJECT(BgL_approxz00_6))->BgL_allocsz00));
				if (PAIRP(BgL_alloczd2listzd2_3603))
					{	/* Cfa/type.scm 92 */
						if (
							(((BgL_approxz00_bglt) COBJECT(BgL_approxz00_6))->BgL_topzf3zf3))
							{	/* Cfa/type.scm 94 */
								return BGl_za2objza2z00zztype_cachez00;
							}
						else
							{	/* Cfa/type.scm 96 */
								bool_t BgL_test2423z00_5444;

								{
									obj_t BgL_l1606z00_3652;

									BgL_l1606z00_3652 = BgL_alloczd2listzd2_3603;
								BgL_zc3z04anonymousza31780ze3z87_3653:
									if (NULLP(BgL_l1606z00_3652))
										{	/* Cfa/type.scm 96 */
											BgL_test2423z00_5444 = ((bool_t) 1);
										}
									else
										{	/* Cfa/type.scm 96 */
											bool_t BgL_test2425z00_5447;

											{	/* Cfa/type.scm 96 */
												obj_t BgL_arg1784z00_3658;

												BgL_arg1784z00_3658 = CAR(((obj_t) BgL_l1606z00_3652));
												BgL_test2425z00_5447 =
													BGl_isazf3zf3zz__objectz00(BgL_arg1784z00_3658,
													BGl_makezd2vectorzd2appz00zzcfa_info2z00);
											}
											if (BgL_test2425z00_5447)
												{	/* Cfa/type.scm 96 */
													obj_t BgL_arg1782z00_3657;

													BgL_arg1782z00_3657 =
														CDR(((obj_t) BgL_l1606z00_3652));
													{
														obj_t BgL_l1606z00_5453;

														BgL_l1606z00_5453 = BgL_arg1782z00_3657;
														BgL_l1606z00_3652 = BgL_l1606z00_5453;
														goto BgL_zc3z04anonymousza31780ze3z87_3653;
													}
												}
											else
												{	/* Cfa/type.scm 96 */
													BgL_test2423z00_5444 = ((bool_t) 0);
												}
										}
								}
								if (BgL_test2423z00_5444)
									{	/* Cfa/type.scm 97 */
										obj_t BgL_appz00_3616;

										BgL_appz00_3616 = CAR(BgL_alloczd2listzd2_3603);
										{	/* Cfa/type.scm 97 */
											BgL_typez00_bglt BgL_tvzd2typezd2_3617;

											BgL_tvzd2typezd2_3617 =
												BGl_getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00(
												((BgL_nodez00_bglt) BgL_appz00_3616));
											{	/* Cfa/type.scm 98 */
												BgL_approxz00_bglt BgL_valuezd2approxzd2_3618;

												{
													BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_5457;

													{
														obj_t BgL_auxz00_5458;

														{	/* Cfa/type.scm 99 */
															BgL_objectz00_bglt BgL_tmpz00_5459;

															BgL_tmpz00_5459 =
																((BgL_objectz00_bglt)
																((BgL_appz00_bglt) BgL_appz00_3616));
															BgL_auxz00_5458 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5459);
														}
														BgL_auxz00_5457 =
															((BgL_makezd2vectorzd2appz00_bglt)
															BgL_auxz00_5458);
													}
													BgL_valuezd2approxzd2_3618 =
														(((BgL_makezd2vectorzd2appz00_bglt)
															COBJECT(BgL_auxz00_5457))->BgL_valuezd2approxzd2);
												}
												{	/* Cfa/type.scm 99 */
													BgL_typez00_bglt BgL_itemzd2typezd2_3619;

													BgL_itemzd2typezd2_3619 =
														(((BgL_approxz00_bglt)
															COBJECT(BgL_valuezd2approxzd2_3618))->
														BgL_typez00);
													{	/* Cfa/type.scm 100 */
														obj_t BgL_tvz00_3620;

														BgL_tvz00_3620 =
															(((BgL_typez00_bglt)
																COBJECT(BgL_itemzd2typezd2_3619))->
															BgL_tvectorz00);
														{	/* Cfa/type.scm 101 */

															if (BGl_isazf3zf3zz__objectz00(BgL_tvz00_3620,
																	BGl_typez00zztype_typez00))
																{	/* Cfa/type.scm 103 */
																	return BgL_tvz00_3620;
																}
															else
																{	/* Cfa/type.scm 103 */
																	if (
																		(((obj_t) BgL_typez00_3602) ==
																			BGl_za2_za2z00zztype_cachez00))
																		{	/* Cfa/type.scm 104 */
																			return BGl_za2vectorza2z00zztype_cachez00;
																		}
																	else
																		{	/* Cfa/type.scm 104 */
																			return ((obj_t) BgL_typez00_3602);
																		}
																}
														}
													}
												}
											}
										}
									}
								else
									{	/* Cfa/type.scm 106 */
										bool_t BgL_test2428z00_5473;

										{
											obj_t BgL_l1609z00_3643;

											BgL_l1609z00_3643 = BgL_alloczd2listzd2_3603;
										BgL_zc3z04anonymousza31777ze3z87_3644:
											if (NULLP(BgL_l1609z00_3643))
												{	/* Cfa/type.scm 106 */
													BgL_test2428z00_5473 = ((bool_t) 1);
												}
											else
												{	/* Cfa/type.scm 106 */
													bool_t BgL_test2430z00_5476;

													{	/* Cfa/type.scm 106 */
														obj_t BgL_arg1779z00_3649;

														BgL_arg1779z00_3649 =
															CAR(((obj_t) BgL_l1609z00_3643));
														BgL_test2430z00_5476 =
															BGl_isazf3zf3zz__objectz00(BgL_arg1779z00_3649,
															BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00);
													}
													if (BgL_test2430z00_5476)
														{	/* Cfa/type.scm 106 */
															obj_t BgL_arg1778z00_3648;

															BgL_arg1778z00_3648 =
																CDR(((obj_t) BgL_l1609z00_3643));
															{
																obj_t BgL_l1609z00_5482;

																BgL_l1609z00_5482 = BgL_arg1778z00_3648;
																BgL_l1609z00_3643 = BgL_l1609z00_5482;
																goto BgL_zc3z04anonymousza31777ze3z87_3644;
															}
														}
													else
														{	/* Cfa/type.scm 106 */
															BgL_test2428z00_5473 = ((bool_t) 0);
														}
												}
										}
										if (BgL_test2428z00_5473)
											{	/* Cfa/type.scm 106 */
												if (CBOOL
													(BGl_tvectorzd2optimiza7ationzf3z86zzcfa_tvectorz00
														()))
													{	/* Cfa/type.scm 111 */
														obj_t BgL_appz00_3634;

														BgL_appz00_3634 = CAR(BgL_alloczd2listzd2_3603);
														{	/* Cfa/type.scm 111 */
															BgL_typez00_bglt BgL_tvzd2typezd2_3635;

															BgL_tvzd2typezd2_3635 =
																BGl_getzd2vectorzd2itemzd2typezd2zzcfa_tvectorz00
																(((BgL_nodez00_bglt) BgL_appz00_3634));
															{	/* Cfa/type.scm 112 */
																BgL_approxz00_bglt BgL_valuezd2approxzd2_3636;

																{
																	BgL_valloczf2cinfozb2optimz40_bglt
																		BgL_auxz00_5489;
																	{
																		obj_t BgL_auxz00_5490;

																		{	/* Cfa/type.scm 113 */
																			BgL_objectz00_bglt BgL_tmpz00_5491;

																			BgL_tmpz00_5491 =
																				((BgL_objectz00_bglt)
																				((BgL_vallocz00_bglt) BgL_appz00_3634));
																			BgL_auxz00_5490 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_5491);
																		}
																		BgL_auxz00_5489 =
																			((BgL_valloczf2cinfozb2optimz40_bglt)
																			BgL_auxz00_5490);
																	}
																	BgL_valuezd2approxzd2_3636 =
																		(((BgL_valloczf2cinfozb2optimz40_bglt)
																			COBJECT(BgL_auxz00_5489))->
																		BgL_valuezd2approxzd2);
																}
																{	/* Cfa/type.scm 113 */
																	BgL_typez00_bglt BgL_itemzd2typezd2_3637;

																	BgL_itemzd2typezd2_3637 =
																		(((BgL_approxz00_bglt)
																			COBJECT(BgL_valuezd2approxzd2_3636))->
																		BgL_typez00);
																	{	/* Cfa/type.scm 114 */
																		obj_t BgL_tvz00_3638;

																		BgL_tvz00_3638 =
																			(((BgL_typez00_bglt)
																				COBJECT(BgL_itemzd2typezd2_3637))->
																			BgL_tvectorz00);
																		{	/* Cfa/type.scm 115 */

																			if (BGl_isazf3zf3zz__objectz00
																				(BgL_tvz00_3638,
																					BGl_typez00zztype_typez00))
																				{	/* Cfa/type.scm 117 */
																					return BgL_tvz00_3638;
																				}
																			else
																				{	/* Cfa/type.scm 117 */
																					if (
																						(((obj_t) BgL_typez00_3602) ==
																							BGl_za2_za2z00zztype_cachez00))
																						{	/* Cfa/type.scm 118 */
																							return
																								BGl_za2vectorza2z00zztype_cachez00;
																						}
																					else
																						{	/* Cfa/type.scm 118 */
																							return ((obj_t) BgL_typez00_3602);
																						}
																				}
																		}
																	}
																}
															}
														}
													}
												else
													{	/* Cfa/type.scm 107 */
														if (
															(((obj_t) BgL_typez00_3602) ==
																BGl_za2_za2z00zztype_cachez00))
															{	/* Cfa/type.scm 108 */
																return BGl_za2vectorza2z00zztype_cachez00;
															}
														else
															{	/* Cfa/type.scm 108 */
																return ((obj_t) BgL_typez00_3602);
															}
													}
											}
										else
											{	/* Cfa/type.scm 106 */
												return ((obj_t) BgL_typez00_3602);
											}
									}
							}
					}
				else
					{	/* Cfa/type.scm 92 */
						return ((obj_t) BgL_typez00_3602);
					}
			}
		}

	}



/* &get-approx-type */
	obj_t BGl_z62getzd2approxzd2typez62zzcfa_typez00(obj_t BgL_envz00_4963,
		obj_t BgL_approxz00_4964, obj_t BgL_nodez00_4965)
	{
		{	/* Cfa/type.scm 88 */
			return
				BGl_getzd2approxzd2typez00zzcfa_typez00(
				((BgL_approxz00_bglt) BgL_approxz00_4964), BgL_nodez00_4965);
		}

	}



/* set-variable-type! */
	obj_t BGl_setzd2variablezd2typez12z12zzcfa_typez00(BgL_variablez00_bglt
		BgL_variablez00_20, BgL_typez00_bglt BgL_typez00_21)
	{
		{	/* Cfa/type.scm 181 */
			{	/* Cfa/type.scm 182 */
				obj_t BgL_ntypez00_3661;
				BgL_typez00_bglt BgL_otypez00_3662;

				if ((((obj_t) BgL_typez00_21) == BGl_za2_za2z00zztype_cachez00))
					{	/* Cfa/type.scm 182 */
						BgL_ntypez00_3661 = BGl_za2objza2z00zztype_cachez00;
					}
				else
					{	/* Cfa/type.scm 182 */
						BgL_ntypez00_3661 = ((obj_t) BgL_typez00_21);
					}
				BgL_otypez00_3662 =
					(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_20))->BgL_typez00);
				if ((((obj_t) BgL_otypez00_3662) == BGl_za2_za2z00zztype_cachez00))
					{	/* Cfa/type.scm 186 */
						bool_t BgL_test2437z00_5521;

						{	/* Cfa/type.scm 186 */
							bool_t BgL_test2438z00_5522;

							{	/* Cfa/type.scm 186 */
								bool_t BgL_res2265z00_4768;

								BgL_res2265z00_4768 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_variablez00_20), BGl_globalz00zzast_varz00);
								BgL_test2438z00_5522 = BgL_res2265z00_4768;
							}
							if (BgL_test2438z00_5522)
								{	/* Cfa/type.scm 187 */
									bool_t BgL_test2439z00_5525;

									{	/* Cfa/type.scm 187 */
										BgL_valuez00_bglt BgL_arg1822z00_3681;

										BgL_arg1822z00_3681 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_globalz00_bglt) BgL_variablez00_20))))->
											BgL_valuez00);
										{	/* Cfa/type.scm 187 */
											bool_t BgL_res2266z00_4770;

											BgL_res2266z00_4770 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg1822z00_3681), BGl_funz00zzast_varz00);
											BgL_test2439z00_5525 = BgL_res2266z00_4770;
										}
									}
									if (BgL_test2439z00_5525)
										{	/* Cfa/type.scm 187 */
											BgL_test2437z00_5521 = ((bool_t) 0);
										}
									else
										{	/* Cfa/type.scm 188 */
											bool_t BgL_test2440z00_5531;

											if (CBOOL(BGl_za2unsafezd2typeza2zd2zzengine_paramz00))
												{	/* Cfa/type.scm 188 */
													BgL_test2440z00_5531 = ((bool_t) 1);
												}
											else
												{	/* Cfa/type.scm 188 */
													BgL_test2440z00_5531 =
														(
														(((BgL_globalz00_bglt) COBJECT(
																	((BgL_globalz00_bglt) BgL_variablez00_20)))->
															BgL_initz00) == BTRUE);
												}
											if (BgL_test2440z00_5531)
												{	/* Cfa/type.scm 188 */
													BgL_test2437z00_5521 = ((bool_t) 0);
												}
											else
												{	/* Cfa/type.scm 188 */
													if (
														((((BgL_typez00_bglt) COBJECT(
																		((BgL_typez00_bglt) BgL_ntypez00_3661)))->
																BgL_classz00) == CNST_TABLE_REF(((long) 0))))
														{	/* Cfa/type.scm 189 */
															BgL_test2437z00_5521 = ((bool_t) 0);
														}
													else
														{	/* Cfa/type.scm 189 */
															BgL_test2437z00_5521 = ((bool_t) 1);
														}
												}
										}
								}
							else
								{	/* Cfa/type.scm 186 */
									BgL_test2437z00_5521 = ((bool_t) 0);
								}
						}
						if (BgL_test2437z00_5521)
							{	/* Cfa/type.scm 194 */
								BgL_variablez00_bglt BgL_oz00_4773;
								BgL_typez00_bglt BgL_vz00_4774;

								BgL_oz00_4773 = BgL_variablez00_20;
								BgL_vz00_4774 =
									((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
								return
									((((BgL_variablez00_bglt) COBJECT(BgL_oz00_4773))->
										BgL_typez00) = ((BgL_typez00_bglt) BgL_vz00_4774), BUNSPEC);
							}
						else
							{	/* Cfa/type.scm 186 */
								return
									((((BgL_variablez00_bglt) COBJECT(BgL_variablez00_20))->
										BgL_typez00) =
									((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_ntypez00_3661)),
									BUNSPEC);
							}
					}
				else
					{	/* Cfa/type.scm 196 */
						bool_t BgL_test2443z00_5546;

						if (
							(((obj_t) BgL_otypez00_3662) ==
								BGl_za2vectorza2z00zztype_cachez00))
							{	/* Cfa/type.scm 196 */
								BgL_test2443z00_5546 =
									BGl_isazf3zf3zz__objectz00(BgL_ntypez00_3661,
									BGl_tvecz00zztvector_tvectorz00);
							}
						else
							{	/* Cfa/type.scm 196 */
								BgL_test2443z00_5546 = ((bool_t) 0);
							}
						if (BgL_test2443z00_5546)
							{	/* Cfa/type.scm 196 */
								return
									((((BgL_variablez00_bglt) COBJECT(BgL_variablez00_20))->
										BgL_typez00) =
									((BgL_typez00_bglt) ((BgL_typez00_bglt) ((BgL_typez00_bglt)
												BgL_ntypez00_3661))), BUNSPEC);
							}
						else
							{	/* Cfa/type.scm 196 */
								return BFALSE;
							}
					}
			}
		}

	}



/* type-node*! */
	obj_t BGl_typezd2nodeza2z12z62zzcfa_typez00(obj_t BgL_nodeza2za2_57)
	{
		{	/* Cfa/type.scm 615 */
			{
				obj_t BgL_l1628z00_3689;

				BgL_l1628z00_3689 = BgL_nodeza2za2_57;
			BgL_zc3z04anonymousza31827ze3z87_3690:
				if (NULLP(BgL_l1628z00_3689))
					{	/* Cfa/type.scm 616 */
						return BgL_nodeza2za2_57;
					}
				else
					{	/* Cfa/type.scm 616 */
						{	/* Cfa/type.scm 616 */
							BgL_nodez00_bglt BgL_arg1829z00_3692;

							{	/* Cfa/type.scm 616 */
								obj_t BgL_arg1830z00_3693;

								BgL_arg1830z00_3693 = CAR(((obj_t) BgL_l1628z00_3689));
								BgL_arg1829z00_3692 =
									BGl_typezd2nodez12zc0zzcfa_typez00(
									((BgL_nodez00_bglt) BgL_arg1830z00_3693));
							}
							{	/* Cfa/type.scm 616 */
								obj_t BgL_auxz00_5562;
								obj_t BgL_tmpz00_5560;

								BgL_auxz00_5562 = ((obj_t) BgL_arg1829z00_3692);
								BgL_tmpz00_5560 = ((obj_t) BgL_l1628z00_3689);
								SET_CAR(BgL_tmpz00_5560, BgL_auxz00_5562);
							}
						}
						{	/* Cfa/type.scm 616 */
							obj_t BgL_arg1831z00_3694;

							BgL_arg1831z00_3694 = CDR(((obj_t) BgL_l1628z00_3689));
							{
								obj_t BgL_l1628z00_5567;

								BgL_l1628z00_5567 = BgL_arg1831z00_3694;
								BgL_l1628z00_3689 = BgL_l1628z00_5567;
								goto BgL_zc3z04anonymousza31827ze3z87_3690;
							}
						}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_typez00()
	{
		{	/* Cfa/type.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_typez00()
	{
		{	/* Cfa/type.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
				BGl_proc2309z00zzcfa_typez00, BGl_valuez00zzast_varz00,
				BGl_string2310z00zzcfa_typez00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_proc2311z00zzcfa_typez00,
				BGl_nodez00zzast_nodez00, BGl_string2312z00zzcfa_typez00);
		}

	}



/* &type-node!1642 */
	obj_t BGl_z62typezd2nodez121642za2zzcfa_typez00(obj_t BgL_envz00_4968,
		obj_t BgL_nodez00_4969)
	{
		{	/* Cfa/type.scm 202 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
				BGl_string2313z00zzcfa_typez00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_4969)));
		}

	}



/* &type-variable!1630 */
	obj_t BGl_z62typezd2variablez121630za2zzcfa_typez00(obj_t BgL_envz00_4970,
		obj_t BgL_valuez00_4971, obj_t BgL_variablez00_4972)
	{
		{	/* Cfa/type.scm 126 */
			{	/* Cfa/type.scm 127 */
				BgL_typez00_bglt BgL_typez00_5110;

				BgL_typez00_5110 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_variablez00_4972)))->BgL_typez00);
				{	/* Cfa/type.scm 131 */
					bool_t BgL_test2446z00_5576;

					if ((((obj_t) BgL_typez00_5110) == BGl_za2_za2z00zztype_cachez00))
						{	/* Cfa/type.scm 131 */
							if (CBOOL(BGl_za2optimzd2cfazf3za2z21zzengine_paramz00))
								{	/* Cfa/type.scm 131 */
									BgL_test2446z00_5576 = ((bool_t) 0);
								}
							else
								{	/* Cfa/type.scm 131 */
									BgL_test2446z00_5576 = ((bool_t) 1);
								}
						}
					else
						{	/* Cfa/type.scm 131 */
							BgL_test2446z00_5576 = ((bool_t) 0);
						}
					if (BgL_test2446z00_5576)
						{	/* Cfa/type.scm 131 */
							return
								BGl_setzd2variablezd2typez12z12zzcfa_typez00(
								((BgL_variablez00_bglt) BgL_variablez00_4972),
								BGl_getzd2defaultzd2typez00zztype_cachez00());
						}
					else
						{	/* Cfa/type.scm 131 */
							return BFALSE;
						}
				}
			}
		}

	}



/* type-variable! */
	obj_t BGl_typezd2variablez12zc0zzcfa_typez00(BgL_valuez00_bglt BgL_valuez00_8,
		BgL_variablez00_bglt BgL_variablez00_9)
	{
		{	/* Cfa/type.scm 126 */
			{	/* Cfa/type.scm 126 */
				obj_t BgL_method1631z00_3712;

				{	/* Cfa/type.scm 126 */
					obj_t BgL_res2280z00_4823;

					{	/* Cfa/type.scm 126 */
						long BgL_objzd2classzd2numz00_4788;

						{	/* Cfa/type.scm 126 */
							long BgL_res2270z00_4791;

							BgL_res2270z00_4791 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_valuez00_8));
							BgL_objzd2classzd2numz00_4788 = BgL_res2270z00_4791;
						}
						{	/* Cfa/type.scm 126 */
							obj_t BgL_arg1813z00_4789;

							BgL_arg1813z00_4789 =
								PROCEDURE_REF(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
								(int) (((long) 1)));
							{	/* Cfa/type.scm 126 */
								int BgL_offsetz00_4793;

								BgL_offsetz00_4793 = (int) (BgL_objzd2classzd2numz00_4788);
								{	/* Cfa/type.scm 126 */
									long BgL_offsetz00_4794;

									BgL_offsetz00_4794 =
										((long) (BgL_offsetz00_4793) - OBJECT_TYPE);
									{	/* Cfa/type.scm 126 */
										long BgL_modz00_4795;

										BgL_modz00_4795 =
											(BgL_offsetz00_4794 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/type.scm 126 */
											long BgL_restz00_4797;

											BgL_restz00_4797 =
												(BgL_offsetz00_4794 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/type.scm 126 */

												{	/* Cfa/type.scm 126 */
													obj_t BgL_bucketz00_4799;

													BgL_bucketz00_4799 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4789), BgL_modz00_4795);
													BgL_res2280z00_4823 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4799), BgL_restz00_4797);
					}}}}}}}}
					BgL_method1631z00_3712 = BgL_res2280z00_4823;
				}
				return
					PROCEDURE_ENTRY(BgL_method1631z00_3712) (BgL_method1631z00_3712,
					((obj_t) BgL_valuez00_8), ((obj_t) BgL_variablez00_9), BEOA);
			}
		}

	}



/* &type-variable! */
	obj_t BGl_z62typezd2variablez12za2zzcfa_typez00(obj_t BgL_envz00_4973,
		obj_t BgL_valuez00_4974, obj_t BgL_variablez00_4975)
	{
		{	/* Cfa/type.scm 126 */
			return
				BGl_typezd2variablez12zc0zzcfa_typez00(
				((BgL_valuez00_bglt) BgL_valuez00_4974),
				((BgL_variablez00_bglt) BgL_variablez00_4975));
		}

	}



/* type-node! */
	BgL_nodez00_bglt BGl_typezd2nodez12zc0zzcfa_typez00(BgL_nodez00_bglt
		BgL_nodez00_22)
	{
		{	/* Cfa/type.scm 202 */
			{	/* Cfa/type.scm 202 */
				obj_t BgL_method1643z00_3713;

				{	/* Cfa/type.scm 202 */
					obj_t BgL_res2291z00_4860;

					{	/* Cfa/type.scm 202 */
						long BgL_objzd2classzd2numz00_4825;

						{	/* Cfa/type.scm 202 */
							long BgL_res2281z00_4828;

							BgL_res2281z00_4828 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_22));
							BgL_objzd2classzd2numz00_4825 = BgL_res2281z00_4828;
						}
						{	/* Cfa/type.scm 202 */
							obj_t BgL_arg1813z00_4826;

							BgL_arg1813z00_4826 =
								PROCEDURE_REF(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
								(int) (((long) 1)));
							{	/* Cfa/type.scm 202 */
								int BgL_offsetz00_4830;

								BgL_offsetz00_4830 = (int) (BgL_objzd2classzd2numz00_4825);
								{	/* Cfa/type.scm 202 */
									long BgL_offsetz00_4831;

									BgL_offsetz00_4831 =
										((long) (BgL_offsetz00_4830) - OBJECT_TYPE);
									{	/* Cfa/type.scm 202 */
										long BgL_modz00_4832;

										BgL_modz00_4832 =
											(BgL_offsetz00_4831 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/type.scm 202 */
											long BgL_restz00_4834;

											BgL_restz00_4834 =
												(BgL_offsetz00_4831 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/type.scm 202 */

												{	/* Cfa/type.scm 202 */
													obj_t BgL_bucketz00_4836;

													BgL_bucketz00_4836 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4826), BgL_modz00_4832);
													BgL_res2291z00_4860 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4836), BgL_restz00_4834);
					}}}}}}}}
					BgL_method1643z00_3713 = BgL_res2291z00_4860;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1643z00_3713) (BgL_method1643z00_3713,
						((obj_t) BgL_nodez00_22), BEOA));
			}
		}

	}



/* &type-node! */
	BgL_nodez00_bglt BGl_z62typezd2nodez12za2zzcfa_typez00(obj_t BgL_envz00_4976,
		obj_t BgL_nodez00_4977)
	{
		{	/* Cfa/type.scm 202 */
			return
				BGl_typezd2nodez12zc0zzcfa_typez00(
				((BgL_nodez00_bglt) BgL_nodez00_4977));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_typez00()
	{
		{	/* Cfa/type.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
				BGl_svarzf2Cinfozf2zzcfa_infoz00, BGl_proc2314z00zzcfa_typez00,
				BGl_string2315z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
				BGl_scnstzf2Cinfozf2zzcfa_infoz00, BGl_proc2316z00zzcfa_typez00,
				BGl_string2315z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
				BGl_cvarzf2Cinfozf2zzcfa_infoz00, BGl_proc2317z00zzcfa_typez00,
				BGl_string2315z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
				BGl_sexitzf2Cinfozf2zzcfa_infoz00, BGl_proc2318z00zzcfa_typez00,
				BGl_string2315z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2variablez12zd2envz12zzcfa_typez00,
				BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00, BGl_proc2319z00zzcfa_typez00,
				BGl_string2315z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_atomz00zzast_nodez00,
				BGl_proc2320z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_kwotez00zzast_nodez00,
				BGl_proc2322z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_varz00zzast_nodez00,
				BGl_proc2323z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_closurez00zzast_nodez00,
				BGl_proc2324z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_sequencez00zzast_nodez00,
				BGl_proc2325z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_syncz00zzast_nodez00,
				BGl_proc2326z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_appz00zzast_nodez00,
				BGl_proc2327z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_arithmeticzd2appzd2zzcfa_info2z00, BGl_proc2328z00zzcfa_typez00,
				BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_procedurezd2refzd2appz00zzcfa_info2z00,
				BGl_proc2329z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_procedurezd2setz12zd2appz12zzcfa_info2z00,
				BGl_proc2330z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_conszd2refzd2appz00zzcfa_info2z00, BGl_proc2331z00zzcfa_typez00,
				BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc2332z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00, BGl_proc2333z00zzcfa_typez00,
				BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_funcallz00zzast_nodez00,
				BGl_proc2334z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_funcallzf2Cinfozf2zzcfa_infoz00, BGl_proc2335z00zzcfa_typez00,
				BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_externz00zzast_nodez00,
				BGl_proc2336z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_vallocz00zzast_nodez00,
				BGl_proc2337z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_vrefz00zzast_nodez00,
				BGl_proc2338z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_vsetz12z12zzast_nodez00,
				BGl_proc2339z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_castz00zzast_nodez00,
				BGl_proc2340z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_setqz00zzast_nodez00,
				BGl_proc2341z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2342z00zzcfa_typez00,
				BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_conditionalzf2Cinfozf2zzcfa_infoz00, BGl_proc2343z00zzcfa_typez00,
				BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_failz00zzast_nodez00,
				BGl_proc2344z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_switchz00zzast_nodez00,
				BGl_proc2345z00zzcfa_typez00, BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2346z00zzcfa_typez00,
				BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2347z00zzcfa_typez00,
				BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2348z00zzcfa_typez00,
				BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2349z00zzcfa_typez00,
				BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc2350z00zzcfa_typez00,
				BGl_string2321z00zzcfa_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc2351z00zzcfa_typez00,
				BGl_string2321z00zzcfa_typez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2nodez12zd2envz12zzcfa_typez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc2352z00zzcfa_typez00,
				BGl_string2321z00zzcfa_typez00);
		}

	}



/* &type-node!-box-ref1708 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2boxzd2ref1708za2zzcfa_typez00(obj_t
		BgL_envz00_5015, obj_t BgL_nodez00_5016)
	{
		{	/* Cfa/type.scm 605 */
			{
				BgL_varz00_bglt BgL_auxz00_5690;

				{	/* Cfa/type.scm 607 */
					BgL_varz00_bglt BgL_arg2046z00_5112;

					BgL_arg2046z00_5112 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_5016)))->BgL_varz00);
					BgL_auxz00_5690 =
						((BgL_varz00_bglt)
						BGl_typezd2nodez12zc0zzcfa_typez00(
							((BgL_nodez00_bglt) BgL_arg2046z00_5112)));
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_5016)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_5690), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_5016));
		}

	}



/* &type-node!-box-set!1706 */
	BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2boxzd2setz121706zb0zzcfa_typez00(obj_t
		BgL_envz00_5017, obj_t BgL_nodez00_5018)
	{
		{	/* Cfa/type.scm 596 */
			{
				BgL_varz00_bglt BgL_auxz00_5700;

				{	/* Cfa/type.scm 598 */
					BgL_varz00_bglt BgL_arg2044z00_5114;

					BgL_arg2044z00_5114 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_5018)))->BgL_varz00);
					BgL_auxz00_5700 =
						((BgL_varz00_bglt)
						BGl_typezd2nodez12zc0zzcfa_typez00(
							((BgL_nodez00_bglt) BgL_arg2044z00_5114)));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_5018)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_5700), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_5708;

				{	/* Cfa/type.scm 599 */
					BgL_nodez00_bglt BgL_arg2045z00_5115;

					BgL_arg2045z00_5115 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_5018)))->BgL_valuez00);
					BgL_auxz00_5708 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg2045z00_5115);
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_5018)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_5708), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_5018));
		}

	}



/* &type-node!-make-box1704 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2makezd2box1704za2zzcfa_typez00(obj_t
		BgL_envz00_5019, obj_t BgL_nodez00_5020)
	{
		{	/* Cfa/type.scm 588 */
			{
				BgL_nodez00_bglt BgL_auxz00_5716;

				{	/* Cfa/type.scm 590 */
					BgL_nodez00_bglt BgL_arg2043z00_5117;

					BgL_arg2043z00_5117 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_5020)))->BgL_valuez00);
					BgL_auxz00_5716 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg2043z00_5117);
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_5020)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_5716), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_5020));
		}

	}



/* &type-node!-jump-ex-i1702 */
	BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2jumpzd2exzd2i1702z70zzcfa_typez00(obj_t
		BgL_envz00_5021, obj_t BgL_nodez00_5022)
	{
		{	/* Cfa/type.scm 579 */
			{
				BgL_nodez00_bglt BgL_auxz00_5724;

				{	/* Cfa/type.scm 581 */
					BgL_nodez00_bglt BgL_arg2040z00_5119;

					BgL_arg2040z00_5119 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5022)))->BgL_exitz00);
					BgL_auxz00_5724 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg2040z00_5119);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5022)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_5724), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_5730;

				{	/* Cfa/type.scm 582 */
					BgL_nodez00_bglt BgL_arg2041z00_5120;

					BgL_arg2041z00_5120 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5022)))->
						BgL_valuez00);
					BgL_auxz00_5730 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg2041z00_5120);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5022)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_5730), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5022));
		}

	}



/* &type-node!-set-ex-it1700 */
	BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2setzd2exzd2it1700z70zzcfa_typez00(obj_t
		BgL_envz00_5023, obj_t BgL_nodez00_5024)
	{
		{	/* Cfa/type.scm 568 */
			{	/* Cfa/type.scm 570 */
				BgL_variablez00_bglt BgL_vz00_5122;

				BgL_vz00_5122 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_setzd2exzd2itz00_bglt) COBJECT(
										((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5024)))->
								BgL_varz00)))->BgL_variablez00);
				{	/* Cfa/type.scm 571 */
					BgL_valuez00_bglt BgL_arg2036z00_5123;

					BgL_arg2036z00_5123 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_vz00_5122))))->BgL_valuez00);
					BGl_typezd2variablez12zc0zzcfa_typez00(BgL_arg2036z00_5123,
						BgL_vz00_5122);
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_5745;

				{	/* Cfa/type.scm 572 */
					BgL_nodez00_bglt BgL_arg2038z00_5124;

					BgL_arg2038z00_5124 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5024)))->BgL_bodyz00);
					BgL_auxz00_5745 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg2038z00_5124);
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5024)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_5745), BUNSPEC);
			}
			{
				BgL_varz00_bglt BgL_auxz00_5751;

				{	/* Cfa/type.scm 573 */
					BgL_varz00_bglt BgL_arg2039z00_5125;

					BgL_arg2039z00_5125 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5024)))->BgL_varz00);
					BgL_auxz00_5751 =
						((BgL_varz00_bglt)
						BGl_typezd2nodez12zc0zzcfa_typez00(
							((BgL_nodez00_bglt) BgL_arg2039z00_5125)));
				}
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5024)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_5751), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5024));
		}

	}



/* &type-node!-let-var1697 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2letzd2var1697za2zzcfa_typez00(obj_t
		BgL_envz00_5025, obj_t BgL_nodez00_5026)
	{
		{	/* Cfa/type.scm 553 */
			{	/* Cfa/type.scm 555 */
				obj_t BgL_g1626z00_5127;

				BgL_g1626z00_5127 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_5026)))->BgL_bindingsz00);
				{
					obj_t BgL_l1624z00_5129;

					BgL_l1624z00_5129 = BgL_g1626z00_5127;
				BgL_zc3z04anonymousza32027ze3z87_5128:
					if (PAIRP(BgL_l1624z00_5129))
						{	/* Cfa/type.scm 555 */
							{	/* Cfa/type.scm 556 */
								obj_t BgL_bindingz00_5130;

								BgL_bindingz00_5130 = CAR(BgL_l1624z00_5129);
								{	/* Cfa/type.scm 556 */
									obj_t BgL_varz00_5131;
									obj_t BgL_valz00_5132;

									BgL_varz00_5131 = CAR(((obj_t) BgL_bindingz00_5130));
									BgL_valz00_5132 = CDR(((obj_t) BgL_bindingz00_5130));
									{	/* Cfa/type.scm 558 */
										BgL_nodez00_bglt BgL_arg2029z00_5133;

										BgL_arg2029z00_5133 =
											BGl_typezd2nodez12zc0zzcfa_typez00(
											((BgL_nodez00_bglt) BgL_valz00_5132));
										{	/* Cfa/type.scm 558 */
											obj_t BgL_auxz00_5774;
											obj_t BgL_tmpz00_5772;

											BgL_auxz00_5774 = ((obj_t) BgL_arg2029z00_5133);
											BgL_tmpz00_5772 = ((obj_t) BgL_bindingz00_5130);
											SET_CDR(BgL_tmpz00_5772, BgL_auxz00_5774);
										}
									}
									{	/* Cfa/type.scm 559 */
										BgL_valuez00_bglt BgL_arg2031z00_5134;

										BgL_arg2031z00_5134 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt) BgL_varz00_5131))))->
											BgL_valuez00);
										BGl_typezd2variablez12zc0zzcfa_typez00(BgL_arg2031z00_5134,
											((BgL_variablez00_bglt) BgL_varz00_5131));
									}
								}
							}
							{
								obj_t BgL_l1624z00_5782;

								BgL_l1624z00_5782 = CDR(BgL_l1624z00_5129);
								BgL_l1624z00_5129 = BgL_l1624z00_5782;
								goto BgL_zc3z04anonymousza32027ze3z87_5128;
							}
						}
					else
						{	/* Cfa/type.scm 555 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_5784;

				{	/* Cfa/type.scm 561 */
					BgL_nodez00_bglt BgL_arg2034z00_5135;

					BgL_arg2034z00_5135 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_5026)))->BgL_bodyz00);
					BgL_auxz00_5784 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg2034z00_5135);
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_5026)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_5784), BUNSPEC);
			}
			((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_letzd2varzd2_bglt) BgL_nodez00_5026))))->BgL_typez00) =
				((BgL_typez00_bglt) (((BgL_nodez00_bglt)
							COBJECT((((BgL_letzd2varzd2_bglt) COBJECT(((BgL_letzd2varzd2_bglt)
												BgL_nodez00_5026)))->BgL_bodyz00)))->BgL_typez00)),
				BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nodez00_5026));
		}

	}



/* &type-node!-let-fun1695 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2letzd2fun1695za2zzcfa_typez00(obj_t
		BgL_envz00_5027, obj_t BgL_nodez00_5028)
	{
		{	/* Cfa/type.scm 543 */
			{	/* Cfa/type.scm 545 */
				obj_t BgL_g1623z00_5137;

				BgL_g1623z00_5137 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_5028)))->BgL_localsz00);
				{
					obj_t BgL_l1621z00_5139;

					BgL_l1621z00_5139 = BgL_g1623z00_5137;
				BgL_zc3z04anonymousza32019ze3z87_5138:
					if (PAIRP(BgL_l1621z00_5139))
						{	/* Cfa/type.scm 545 */
							{	/* Cfa/type.scm 545 */
								obj_t BgL_arg2021z00_5140;

								BgL_arg2021z00_5140 = CAR(BgL_l1621z00_5139);
								BGl_typezd2funz12zc0zzcfa_typez00(
									((BgL_variablez00_bglt) BgL_arg2021z00_5140));
							}
							{
								obj_t BgL_l1621z00_5805;

								BgL_l1621z00_5805 = CDR(BgL_l1621z00_5139);
								BgL_l1621z00_5139 = BgL_l1621z00_5805;
								goto BgL_zc3z04anonymousza32019ze3z87_5138;
							}
						}
					else
						{	/* Cfa/type.scm 545 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_5807;

				{	/* Cfa/type.scm 546 */
					BgL_nodez00_bglt BgL_arg2023z00_5141;

					BgL_arg2023z00_5141 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_5028)))->BgL_bodyz00);
					BgL_auxz00_5807 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg2023z00_5141);
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_5028)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_5807), BUNSPEC);
			}
			((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_letzd2funzd2_bglt) BgL_nodez00_5028))))->BgL_typez00) =
				((BgL_typez00_bglt) (((BgL_nodez00_bglt)
							COBJECT((((BgL_letzd2funzd2_bglt) COBJECT(((BgL_letzd2funzd2_bglt)
												BgL_nodez00_5028)))->BgL_bodyz00)))->BgL_typez00)),
				BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_5028));
		}

	}



/* &type-node!-switch1693 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2switch1693z70zzcfa_typez00(obj_t
		BgL_envz00_5029, obj_t BgL_nodez00_5030)
	{
		{	/* Cfa/type.scm 518 */
			{
				BgL_nodez00_bglt BgL_auxz00_5821;

				{	/* Cfa/type.scm 520 */
					BgL_nodez00_bglt BgL_arg2013z00_5143;

					BgL_arg2013z00_5143 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_5030)))->BgL_testz00);
					BgL_auxz00_5821 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg2013z00_5143);
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_5030)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_5821), BUNSPEC);
			}
			{	/* Cfa/type.scm 521 */
				obj_t BgL_g1620z00_5144;

				BgL_g1620z00_5144 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_5030)))->BgL_clausesz00);
				{
					obj_t BgL_l1618z00_5146;

					BgL_l1618z00_5146 = BgL_g1620z00_5144;
				BgL_zc3z04anonymousza32014ze3z87_5145:
					if (PAIRP(BgL_l1618z00_5146))
						{	/* Cfa/type.scm 521 */
							{	/* Cfa/type.scm 522 */
								obj_t BgL_clausez00_5147;

								BgL_clausez00_5147 = CAR(BgL_l1618z00_5146);
								{	/* Cfa/type.scm 522 */
									BgL_nodez00_bglt BgL_arg2016z00_5148;

									{	/* Cfa/type.scm 522 */
										obj_t BgL_arg2017z00_5149;

										BgL_arg2017z00_5149 = CDR(((obj_t) BgL_clausez00_5147));
										BgL_arg2016z00_5148 =
											BGl_typezd2nodez12zc0zzcfa_typez00(
											((BgL_nodez00_bglt) BgL_arg2017z00_5149));
									}
									{	/* Cfa/type.scm 522 */
										obj_t BgL_auxz00_5838;
										obj_t BgL_tmpz00_5836;

										BgL_auxz00_5838 = ((obj_t) BgL_arg2016z00_5148);
										BgL_tmpz00_5836 = ((obj_t) BgL_clausez00_5147);
										SET_CDR(BgL_tmpz00_5836, BgL_auxz00_5838);
									}
								}
							}
							{
								obj_t BgL_l1618z00_5841;

								BgL_l1618z00_5841 = CDR(BgL_l1618z00_5146);
								BgL_l1618z00_5146 = BgL_l1618z00_5841;
								goto BgL_zc3z04anonymousza32014ze3z87_5145;
							}
						}
					else
						{	/* Cfa/type.scm 521 */
							((bool_t) 1);
						}
				}
			}
			((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_switchz00_bglt) BgL_nodez00_5030))))->BgL_typez00) =
				((BgL_typez00_bglt)
					BGl_getzd2typezd2zztype_typeofz00(((BgL_nodez00_bglt) (
								(BgL_switchz00_bglt) BgL_nodez00_5030)), ((bool_t) 0))),
				BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_5030));
		}

	}



/* &type-node!-fail1691 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2fail1691z70zzcfa_typez00(obj_t
		BgL_envz00_5031, obj_t BgL_nodez00_5032)
	{
		{	/* Cfa/type.scm 508 */
			{
				BgL_nodez00_bglt BgL_auxz00_5851;

				{	/* Cfa/type.scm 510 */
					BgL_nodez00_bglt BgL_arg2010z00_5151;

					BgL_arg2010z00_5151 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_5032)))->BgL_procz00);
					BgL_auxz00_5851 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg2010z00_5151);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_5032)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_5851), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_5857;

				{	/* Cfa/type.scm 511 */
					BgL_nodez00_bglt BgL_arg2011z00_5152;

					BgL_arg2011z00_5152 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_5032)))->BgL_msgz00);
					BgL_auxz00_5857 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg2011z00_5152);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_5032)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_5857), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_5863;

				{	/* Cfa/type.scm 512 */
					BgL_nodez00_bglt BgL_arg2012z00_5153;

					BgL_arg2012z00_5153 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_5032)))->BgL_objz00);
					BgL_auxz00_5863 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg2012z00_5153);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_5032)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_5863), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nodez00_5032));
		}

	}



/* &type-node!-condition1689 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2condition1689z70zzcfa_typez00(obj_t
		BgL_envz00_5033, obj_t BgL_nodez00_5034)
	{
		{	/* Cfa/type.scm 501 */
			{

				{	/* Cfa/type.scm 501 */
					obj_t BgL_nextzd2method1688zd2_5156;

					BgL_nextzd2method1688zd2_5156 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_conditionalz00_bglt) BgL_nodez00_5034)),
						BGl_typezd2nodez12zd2envz12zzcfa_typez00,
						BGl_conditionalzf2Cinfozf2zzcfa_infoz00);
					PROCEDURE_ENTRY(BgL_nextzd2method1688zd2_5156)
						(BgL_nextzd2method1688zd2_5156,
						((obj_t) ((BgL_conditionalz00_bglt) BgL_nodez00_5034)), BEOA);
				}
				return
					((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nodez00_5034));
			}
		}

	}



/* &type-node!-condition1687 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2condition1687z70zzcfa_typez00(obj_t
		BgL_envz00_5035, obj_t BgL_nodez00_5036)
	{
		{	/* Cfa/type.scm 490 */
			{
				BgL_nodez00_bglt BgL_auxz00_5882;

				{	/* Cfa/type.scm 492 */
					BgL_nodez00_bglt BgL_arg2005z00_5158;

					BgL_arg2005z00_5158 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_5036)))->BgL_testz00);
					BgL_auxz00_5882 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg2005z00_5158);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_5036)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_5882), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_5888;

				{	/* Cfa/type.scm 493 */
					BgL_nodez00_bglt BgL_arg2007z00_5159;

					BgL_arg2007z00_5159 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_5036)))->BgL_truez00);
					BgL_auxz00_5888 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg2007z00_5159);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_5036)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_5888), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_5894;

				{	/* Cfa/type.scm 494 */
					BgL_nodez00_bglt BgL_arg2008z00_5160;

					BgL_arg2008z00_5160 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_5036)))->BgL_falsez00);
					BgL_auxz00_5894 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg2008z00_5160);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_5036)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_5894), BUNSPEC);
			}
			((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_conditionalz00_bglt) BgL_nodez00_5036))))->BgL_typez00) =
				((BgL_typez00_bglt)
					BGl_getzd2typezd2zztype_typeofz00(((BgL_nodez00_bglt) (
								(BgL_conditionalz00_bglt) BgL_nodez00_5036)), ((bool_t) 0))),
				BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nodez00_5036));
		}

	}



/* &type-node!-setq1685 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2setq1685z70zzcfa_typez00(obj_t
		BgL_envz00_5037, obj_t BgL_nodez00_5038)
	{
		{	/* Cfa/type.scm 479 */
			{
				BgL_nodez00_bglt BgL_auxz00_5908;

				{	/* Cfa/type.scm 481 */
					BgL_nodez00_bglt BgL_arg2003z00_5162;

					BgL_arg2003z00_5162 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_5038)))->BgL_valuez00);
					BgL_auxz00_5908 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg2003z00_5162);
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_5038)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_5908), BUNSPEC);
			}
			{
				BgL_varz00_bglt BgL_auxz00_5914;

				{	/* Cfa/type.scm 482 */
					BgL_varz00_bglt BgL_arg2004z00_5163;

					BgL_arg2004z00_5163 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_5038)))->BgL_varz00);
					BgL_auxz00_5914 =
						((BgL_varz00_bglt)
						BGl_typezd2nodez12zc0zzcfa_typez00(
							((BgL_nodez00_bglt) BgL_arg2004z00_5163)));
				}
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_5038)))->BgL_varz00) =
					((BgL_varz00_bglt) BgL_auxz00_5914), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_5038));
		}

	}



/* &type-node!-cast1683 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2cast1683z70zzcfa_typez00(obj_t
		BgL_envz00_5039, obj_t BgL_nodez00_5040)
	{
		{	/* Cfa/type.scm 471 */
			{
				BgL_nodez00_bglt BgL_auxz00_5924;

				{	/* Cfa/type.scm 473 */
					BgL_nodez00_bglt BgL_arg2002z00_5165;

					BgL_arg2002z00_5165 =
						(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_5040)))->BgL_argz00);
					BgL_auxz00_5924 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg2002z00_5165);
				}
				((((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_5040)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_5924), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_5040));
		}

	}



/* &type-node!-vset!1681 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2vsetz121681z62zzcfa_typez00(obj_t
		BgL_envz00_5041, obj_t BgL_nodez00_5042)
	{
		{	/* Cfa/type.scm 461 */
			{

				{	/* Cfa/type.scm 461 */
					obj_t BgL_nextzd2method1680zd2_5168;

					BgL_nextzd2method1680zd2_5168 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_vsetz12z12_bglt) BgL_nodez00_5042)),
						BGl_typezd2nodez12zd2envz12zzcfa_typez00,
						BGl_vsetz12z12zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1680zd2_5168)
						(BgL_nextzd2method1680zd2_5168,
						((obj_t) ((BgL_vsetz12z12_bglt) BgL_nodez00_5042)), BEOA);
				}
				{	/* Cfa/type.scm 464 */
					bool_t BgL_test2452z00_5941;

					{	/* Cfa/type.scm 464 */
						BgL_typez00_bglt BgL_arg2001z00_5169;

						BgL_arg2001z00_5169 =
							(((BgL_vsetz12z12_bglt) COBJECT(
									((BgL_vsetz12z12_bglt) BgL_nodez00_5042)))->BgL_ftypez00);
						BgL_test2452z00_5941 =
							(((obj_t) BgL_arg2001z00_5169) == BGl_za2_za2z00zztype_cachez00);
					}
					if (BgL_test2452z00_5941)
						{	/* Cfa/type.scm 464 */
							((((BgL_vsetz12z12_bglt) COBJECT(
											((BgL_vsetz12z12_bglt) BgL_nodez00_5042)))->
									BgL_ftypez00) =
								((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BGl_za2objza2z00zztype_cachez00)), BUNSPEC);
						}
					else
						{	/* Cfa/type.scm 464 */
							BFALSE;
						}
				}
				return ((BgL_nodez00_bglt) ((BgL_vsetz12z12_bglt) BgL_nodez00_5042));
			}
		}

	}



/* &type-node!-vref1679 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2vref1679z70zzcfa_typez00(obj_t
		BgL_envz00_5043, obj_t BgL_nodez00_5044)
	{
		{	/* Cfa/type.scm 450 */
			{

				{	/* Cfa/type.scm 450 */
					obj_t BgL_nextzd2method1678zd2_5172;

					BgL_nextzd2method1678zd2_5172 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_vrefz00_bglt) BgL_nodez00_5044)),
						BGl_typezd2nodez12zd2envz12zzcfa_typez00, BGl_vrefz00zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1678zd2_5172)
						(BgL_nextzd2method1678zd2_5172,
						((obj_t) ((BgL_vrefz00_bglt) BgL_nodez00_5044)), BEOA);
				}
				{	/* Cfa/type.scm 453 */
					bool_t BgL_test2453z00_5960;

					{	/* Cfa/type.scm 453 */
						BgL_typez00_bglt BgL_arg1998z00_5173;

						BgL_arg1998z00_5173 =
							(((BgL_vrefz00_bglt) COBJECT(
									((BgL_vrefz00_bglt) BgL_nodez00_5044)))->BgL_ftypez00);
						BgL_test2453z00_5960 =
							(((obj_t) BgL_arg1998z00_5173) == BGl_za2_za2z00zztype_cachez00);
					}
					if (BgL_test2453z00_5960)
						{	/* Cfa/type.scm 453 */
							((((BgL_vrefz00_bglt) COBJECT(
											((BgL_vrefz00_bglt) BgL_nodez00_5044)))->BgL_ftypez00) =
								((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BGl_za2objza2z00zztype_cachez00)), BUNSPEC);
						}
					else
						{	/* Cfa/type.scm 453 */
							BFALSE;
						}
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_vrefz00_bglt) BgL_nodez00_5044))))->BgL_typez00) =
					((BgL_typez00_bglt) (((BgL_vrefz00_bglt) COBJECT(((BgL_vrefz00_bglt)
										BgL_nodez00_5044)))->BgL_ftypez00)), BUNSPEC);
				return ((BgL_nodez00_bglt) ((BgL_vrefz00_bglt) BgL_nodez00_5044));
			}
		}

	}



/* &type-node!-valloc1677 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2valloc1677z70zzcfa_typez00(obj_t
		BgL_envz00_5045, obj_t BgL_nodez00_5046)
	{
		{	/* Cfa/type.scm 439 */
			{

				{	/* Cfa/type.scm 439 */
					obj_t BgL_nextzd2method1676zd2_5176;

					BgL_nextzd2method1676zd2_5176 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_vallocz00_bglt) BgL_nodez00_5046)),
						BGl_typezd2nodez12zd2envz12zzcfa_typez00,
						BGl_vallocz00zzast_nodez00);
					PROCEDURE_ENTRY(BgL_nextzd2method1676zd2_5176)
						(BgL_nextzd2method1676zd2_5176,
						((obj_t) ((BgL_vallocz00_bglt) BgL_nodez00_5046)), BEOA);
				}
				{	/* Cfa/type.scm 442 */
					obj_t BgL_arg1987z00_5177;

					BgL_arg1987z00_5177 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt)
									((BgL_vallocz00_bglt) BgL_nodez00_5046))))->BgL_exprza2za2);
					BGl_typezd2nodeza2z12z62zzcfa_typez00(BgL_arg1987z00_5177);
				}
				{
					BgL_typez00_bglt BgL_auxz00_5988;

					{	/* Cfa/type.scm 443 */
						obj_t BgL_arg1988z00_5178;
						BgL_typez00_bglt BgL_arg1989z00_5179;

						{	/* Cfa/type.scm 443 */
							bool_t BgL_test2454z00_5991;

							{	/* Cfa/type.scm 443 */
								BgL_typez00_bglt BgL_arg1992z00_5180;

								BgL_arg1992z00_5180 =
									(((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_vallocz00_bglt) BgL_nodez00_5046))))->
									BgL_typez00);
								BgL_test2454z00_5991 =
									(((obj_t) BgL_arg1992z00_5180) ==
									BGl_za2_za2z00zztype_cachez00);
							}
							if (BgL_test2454z00_5991)
								{	/* Cfa/type.scm 443 */
									BgL_arg1988z00_5178 = BGl_za2vectorza2z00zztype_cachez00;
								}
							else
								{	/* Cfa/type.scm 443 */
									BgL_arg1988z00_5178 =
										((obj_t)
										(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_vallocz00_bglt) BgL_nodez00_5046))))->
											BgL_typez00));
								}
						}
						BgL_arg1989z00_5179 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_vallocz00_bglt) BgL_nodez00_5046))))->BgL_typez00);
						BgL_auxz00_5988 =
							BGl_strictzd2nodezd2typez00zzast_nodez00(
							((BgL_typez00_bglt) BgL_arg1988z00_5178), BgL_arg1989z00_5179);
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_vallocz00_bglt) BgL_nodez00_5046))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_5988), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_6007;

					{	/* Cfa/type.scm 444 */
						bool_t BgL_test2455z00_6009;

						{	/* Cfa/type.scm 444 */
							BgL_typez00_bglt BgL_arg1995z00_5181;

							BgL_arg1995z00_5181 =
								(((BgL_vallocz00_bglt) COBJECT(
										((BgL_vallocz00_bglt) BgL_nodez00_5046)))->BgL_ftypez00);
							BgL_test2455z00_6009 =
								(
								((obj_t) BgL_arg1995z00_5181) == BGl_za2_za2z00zztype_cachez00);
						}
						if (BgL_test2455z00_6009)
							{	/* Cfa/type.scm 444 */
								BgL_auxz00_6007 =
									((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
							}
						else
							{	/* Cfa/type.scm 444 */
								BgL_auxz00_6007 =
									(((BgL_vallocz00_bglt) COBJECT(
											((BgL_vallocz00_bglt) BgL_nodez00_5046)))->BgL_ftypez00);
							}
					}
					((((BgL_vallocz00_bglt) COBJECT(
									((BgL_vallocz00_bglt) BgL_nodez00_5046)))->BgL_ftypez00) =
						((BgL_typez00_bglt) BgL_auxz00_6007), BUNSPEC);
				}
				return ((BgL_nodez00_bglt) ((BgL_vallocz00_bglt) BgL_nodez00_5046));
			}
		}

	}



/* &type-node!-extern1675 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2extern1675z70zzcfa_typez00(obj_t
		BgL_envz00_5047, obj_t BgL_nodez00_5048)
	{
		{	/* Cfa/type.scm 431 */
			BGl_typezd2nodeza2z12z62zzcfa_typez00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_5048)))->BgL_exprza2za2));
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_5048));
		}

	}



/* &type-node!-funcall/C1673 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2funcallzf2C1673z82zzcfa_typez00(obj_t
		BgL_envz00_5049, obj_t BgL_nodez00_5050)
	{
		{	/* Cfa/type.scm 405 */
			{
				BgL_nodez00_bglt BgL_auxz00_6025;

				{	/* Cfa/type.scm 407 */
					BgL_nodez00_bglt BgL_arg1979z00_5184;

					BgL_arg1979z00_5184 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt)
									((BgL_funcallz00_bglt) BgL_nodez00_5050))))->BgL_funz00);
					BgL_auxz00_6025 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg1979z00_5184);
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt)
									((BgL_funcallz00_bglt) BgL_nodez00_5050))))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_6025), BUNSPEC);
			}
			{	/* Cfa/type.scm 408 */
				obj_t BgL_arg1980z00_5185;

				BgL_arg1980z00_5185 =
					(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt)
								((BgL_funcallz00_bglt) BgL_nodez00_5050))))->BgL_argsz00);
				BGl_typezd2nodeza2z12z62zzcfa_typez00(BgL_arg1980z00_5185);
			}
			if (CBOOL
				(BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00))
				{	/* Cfa/type.scm 410 */
					obj_t BgL_typz00_5186;

					{	/* Cfa/type.scm 410 */
						BgL_approxz00_bglt BgL_arg1985z00_5187;

						{
							BgL_funcallzf2cinfozf2_bglt BgL_auxz00_6039;

							{
								obj_t BgL_auxz00_6040;

								{	/* Cfa/type.scm 410 */
									BgL_objectz00_bglt BgL_tmpz00_6041;

									BgL_tmpz00_6041 =
										((BgL_objectz00_bglt)
										((BgL_funcallz00_bglt) BgL_nodez00_5050));
									BgL_auxz00_6040 = BGL_OBJECT_WIDENING(BgL_tmpz00_6041);
								}
								BgL_auxz00_6039 =
									((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_6040);
							}
							BgL_arg1985z00_5187 =
								(((BgL_funcallzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6039))->
								BgL_approxz00);
						}
						BgL_typz00_5186 =
							BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_arg1985z00_5187,
							((obj_t) ((BgL_funcallz00_bglt) BgL_nodez00_5050)));
					}
					if ((BgL_typz00_5186 == BGl_za2_za2z00zztype_cachez00))
						{	/* Cfa/type.scm 411 */
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_funcallz00_bglt) BgL_nodez00_5050))))->
									BgL_typez00) =
								((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BGl_za2objza2z00zztype_cachez00)), BUNSPEC);
							return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt)
									BgL_nodez00_5050));
						}
					else
						{	/* Cfa/type.scm 411 */
							if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
										(((BgL_funcallz00_bglt) COBJECT(
													((BgL_funcallz00_bglt)
														((BgL_funcallz00_bglt) BgL_nodez00_5050))))->
											BgL_strengthz00), CNST_TABLE_REF(((long) 2)))))
								{	/* Cfa/type.scm 420 */
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_funcallz00_bglt) BgL_nodez00_5050))))->
											BgL_typez00) =
										((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_typz00_5186)),
										BUNSPEC);
								}
							else
								{	/* Cfa/type.scm 420 */
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_funcallz00_bglt) BgL_nodez00_5050))))->
											BgL_typez00) =
										((BgL_typez00_bglt)
											BGl_getzd2bigloozd2typez00zztype_cachez00((
													(BgL_typez00_bglt) BgL_typz00_5186))), BUNSPEC);
								}
							return
								((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_5050));
						}
				}
			else
				{	/* Cfa/type.scm 409 */
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_funcallz00_bglt) BgL_nodez00_5050))))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt)
								BGl_za2objza2z00zztype_cachez00)), BUNSPEC);
					return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_5050));
				}
		}

	}



/* &type-node!-funcall1671 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2funcall1671z70zzcfa_typez00(obj_t
		BgL_envz00_5051, obj_t BgL_nodez00_5052)
	{
		{	/* Cfa/type.scm 394 */
			if (CBOOL(BGl_za2optimzd2cfazf3za2z21zzengine_paramz00))
				{	/* Cfa/type.scm 395 */
					obj_t BgL_arg1975z00_5189;

					BgL_arg1975z00_5189 =
						BGl_shapez00zztools_shapez00(
						((obj_t) ((BgL_funcallz00_bglt) BgL_nodez00_5052)));
					BGl_errorz00zz__errorz00(BGl_string2321z00zzcfa_typez00,
						BGl_string2353z00zzcfa_typez00, BgL_arg1975z00_5189);
				}
			else
				{	/* Cfa/type.scm 395 */
					BFALSE;
				}
			{
				BgL_nodez00_bglt BgL_auxz00_6088;

				{	/* Cfa/type.scm 397 */
					BgL_nodez00_bglt BgL_arg1976z00_5190;

					BgL_arg1976z00_5190 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_5052)))->BgL_funz00);
					BgL_auxz00_6088 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg1976z00_5190);
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_5052)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_6088), BUNSPEC);
			}
			BGl_typezd2nodeza2z12z62zzcfa_typez00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_5052)))->BgL_argsz00));
			((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_funcallz00_bglt) BgL_nodez00_5052))))->BgL_typez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt)
						BGl_za2objza2z00zztype_cachez00)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_5052));
		}

	}



/* &type-node!-app-ly/Ci1669 */
	BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2appzd2lyzf2Ci1669z50zzcfa_typez00(obj_t
		BgL_envz00_5053, obj_t BgL_nodez00_5054)
	{
		{	/* Cfa/type.scm 382 */
			{
				BgL_nodez00_bglt BgL_auxz00_6103;

				{	/* Cfa/type.scm 384 */
					BgL_nodez00_bglt BgL_arg1972z00_5192;

					BgL_arg1972z00_5192 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt)
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_5054))))->BgL_funz00);
					BgL_auxz00_6103 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg1972z00_5192);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt)
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_5054))))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_6103), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_6111;

				{	/* Cfa/type.scm 385 */
					BgL_nodez00_bglt BgL_arg1973z00_5193;

					BgL_arg1973z00_5193 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt)
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_5054))))->BgL_argz00);
					BgL_auxz00_6111 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg1973z00_5193);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt)
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_5054))))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_6111), BUNSPEC);
			}
			if (CBOOL
				(BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00))
				{
					BgL_typez00_bglt BgL_auxz00_6121;

					{	/* Cfa/type.scm 387 */
						BgL_approxz00_bglt BgL_arg1974z00_5194;

						{
							BgL_appzd2lyzf2cinfoz20_bglt BgL_auxz00_6124;

							{
								obj_t BgL_auxz00_6125;

								{	/* Cfa/type.scm 387 */
									BgL_objectz00_bglt BgL_tmpz00_6126;

									BgL_tmpz00_6126 =
										((BgL_objectz00_bglt)
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_5054));
									BgL_auxz00_6125 = BGL_OBJECT_WIDENING(BgL_tmpz00_6126);
								}
								BgL_auxz00_6124 =
									((BgL_appzd2lyzf2cinfoz20_bglt) BgL_auxz00_6125);
							}
							BgL_arg1974z00_5194 =
								(((BgL_appzd2lyzf2cinfoz20_bglt) COBJECT(BgL_auxz00_6124))->
								BgL_approxz00);
						}
						BgL_auxz00_6121 =
							((BgL_typez00_bglt)
							BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_arg1974z00_5194,
								((obj_t) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_5054))));
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_5054))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_6121), BUNSPEC);
				}
			else
				{	/* Cfa/type.scm 386 */
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_5054))))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt)
								BGl_za2objza2z00zztype_cachez00)), BUNSPEC);
				}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_5054));
		}

	}



/* &type-node!-app-ly1667 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2appzd2ly1667za2zzcfa_typez00(obj_t
		BgL_envz00_5055, obj_t BgL_nodez00_5056)
	{
		{	/* Cfa/type.scm 371 */
			if (CBOOL(BGl_za2optimzd2cfazf3za2z21zzengine_paramz00))
				{	/* Cfa/type.scm 372 */
					obj_t BgL_arg1969z00_5196;

					BgL_arg1969z00_5196 =
						BGl_shapez00zztools_shapez00(
						((obj_t) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_5056)));
					BGl_errorz00zz__errorz00(BGl_string2321z00zzcfa_typez00,
						BGl_string2353z00zzcfa_typez00, BgL_arg1969z00_5196);
				}
			else
				{	/* Cfa/type.scm 372 */
					BFALSE;
				}
			{
				BgL_nodez00_bglt BgL_auxz00_6149;

				{	/* Cfa/type.scm 374 */
					BgL_nodez00_bglt BgL_arg1970z00_5197;

					BgL_arg1970z00_5197 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt)
									((BgL_appzd2lyzd2_bglt)
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_5056)))))->BgL_funz00);
					BgL_auxz00_6149 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg1970z00_5197);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt)
									((BgL_appzd2lyzd2_bglt)
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_5056)))))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_6149), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_6159;

				{	/* Cfa/type.scm 375 */
					BgL_nodez00_bglt BgL_arg1971z00_5198;

					BgL_arg1971z00_5198 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt)
									((BgL_appzd2lyzd2_bglt)
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_5056)))))->BgL_argz00);
					BgL_auxz00_6159 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg1971z00_5198);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt)
									((BgL_appzd2lyzd2_bglt)
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_5056)))))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_6159), BUNSPEC);
			}
			((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt)
								((BgL_appzd2lyzd2_bglt)
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_5056)))))->BgL_typez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt)
						BGl_za2objza2z00zztype_cachez00)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_5056));
		}

	}



/* &type-node!-cons-ref-1665 */
	BgL_nodez00_bglt
		BGl_z62typezd2nodez12zd2conszd2refzd21665z70zzcfa_typez00(obj_t
		BgL_envz00_5057, obj_t BgL_nodez00_5058)
	{
		{	/* Cfa/type.scm 360 */
			{

				{	/* Cfa/type.scm 360 */
					obj_t BgL_nextzd2method1664zd2_5201;

					BgL_nextzd2method1664zd2_5201 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt) BgL_nodez00_5058)),
						BGl_typezd2nodez12zd2envz12zzcfa_typez00,
						BGl_conszd2refzd2appz00zzcfa_info2z00);
					PROCEDURE_ENTRY(BgL_nextzd2method1664zd2_5201)
						(BgL_nextzd2method1664zd2_5201,
						((obj_t) ((BgL_appz00_bglt) BgL_nodez00_5058)), BEOA);
				}
				{	/* Cfa/type.scm 363 */
					obj_t BgL_atypez00_5202;

					{	/* Cfa/type.scm 363 */
						BgL_approxz00_bglt BgL_arg1968z00_5203;

						{
							BgL_conszd2refzd2appz00_bglt BgL_auxz00_6185;

							{
								obj_t BgL_auxz00_6186;

								{	/* Cfa/type.scm 363 */
									BgL_objectz00_bglt BgL_tmpz00_6187;

									BgL_tmpz00_6187 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_5058));
									BgL_auxz00_6186 = BGL_OBJECT_WIDENING(BgL_tmpz00_6187);
								}
								BgL_auxz00_6185 =
									((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_6186);
							}
							BgL_arg1968z00_5203 =
								(((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_6185))->
								BgL_approxz00);
						}
						BgL_atypez00_5202 =
							BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_arg1968z00_5203,
							((obj_t) ((BgL_appz00_bglt) BgL_nodez00_5058)));
					}
					if ((BgL_atypez00_5202 == BGl_za2_za2z00zztype_cachez00))
						{	/* Cfa/type.scm 364 */
							BFALSE;
						}
					else
						{	/* Cfa/type.scm 364 */
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_appz00_bglt) BgL_nodez00_5058))))->BgL_typez00) =
								((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_atypez00_5202)),
								BUNSPEC);
						}
				}
				return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_5058));
			}
		}

	}



/* &type-node!-procedure1663 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2procedure1663z70zzcfa_typez00(obj_t
		BgL_envz00_5059, obj_t BgL_nodez00_5060)
	{
		{	/* Cfa/type.scm 343 */
			{

				{	/* Cfa/type.scm 343 */
					obj_t BgL_nextzd2method1662zd2_5206;

					BgL_nextzd2method1662zd2_5206 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt) BgL_nodez00_5060)),
						BGl_typezd2nodez12zd2envz12zzcfa_typez00,
						BGl_procedurezd2setz12zd2appz12zzcfa_info2z00);
					PROCEDURE_ENTRY(BgL_nextzd2method1662zd2_5206)
						(BgL_nextzd2method1662zd2_5206,
						((obj_t) ((BgL_appz00_bglt) BgL_nodez00_5060)), BEOA);
				}
				if (CBOOL
					(BGl_za2optimzd2cfazd2freezd2varzd2trackingzf3za2zf3zzengine_paramz00))
					{	/* Cfa/type.scm 347 */
						obj_t BgL_atypez00_5207;

						{	/* Cfa/type.scm 347 */
							obj_t BgL_arg1966z00_5208;

							{
								BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_6215;

								{
									obj_t BgL_auxz00_6216;

									{	/* Cfa/type.scm 347 */
										BgL_objectz00_bglt BgL_tmpz00_6217;

										BgL_tmpz00_6217 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_nodez00_5060));
										BgL_auxz00_6216 = BGL_OBJECT_WIDENING(BgL_tmpz00_6217);
									}
									BgL_auxz00_6215 =
										((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_6216);
								}
								BgL_arg1966z00_5208 =
									(((BgL_procedurezd2setz12zd2appz12_bglt)
										COBJECT(BgL_auxz00_6215))->BgL_vapproxz00);
							}
							if (BGl_approxzd2procedurezd2elzf3zf3zzcfa_closurez00(
									((BgL_approxz00_bglt) BgL_arg1966z00_5208)))
								{	/* Cfa/type.scm 319 */
									BgL_atypez00_5207 =
										BGl_za2procedurezd2elza2zd2zztype_cachez00;
								}
							else
								{	/* Cfa/type.scm 319 */
									BgL_atypez00_5207 =
										BGl_getzd2approxzd2typez00zzcfa_typez00(
										((BgL_approxz00_bglt) BgL_arg1966z00_5208),
										((obj_t) ((BgL_appz00_bglt) BgL_nodez00_5060)));
								}
						}
						{	/* Cfa/type.scm 348 */
							bool_t BgL_test2465z00_6230;

							if (BGl_bigloozd2typezf3z21zztype_typez00(
									((BgL_typez00_bglt) BgL_atypez00_5207)))
								{	/* Cfa/type.scm 348 */
									if ((BgL_atypez00_5207 == BGl_za2_za2z00zztype_cachez00))
										{	/* Cfa/type.scm 349 */
											BgL_test2465z00_6230 = ((bool_t) 0);
										}
									else
										{	/* Cfa/type.scm 350 */
											bool_t BgL_test2468z00_6236;

											{	/* Cfa/type.scm 350 */
												BgL_typez00_bglt BgL_arg1963z00_5209;

												{	/* Cfa/type.scm 350 */
													obj_t BgL_arg1964z00_5210;

													{	/* Cfa/type.scm 350 */
														obj_t BgL_pairz00_5211;

														BgL_pairz00_5211 =
															(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt)
																		((BgL_appz00_bglt) BgL_nodez00_5060))))->
															BgL_argsz00);
														BgL_arg1964z00_5210 =
															CAR(CDR(CDR(BgL_pairz00_5211)));
													}
													BgL_arg1963z00_5209 =
														BGl_getzd2typezd2zztype_typeofz00(
														((BgL_nodez00_bglt) BgL_arg1964z00_5210),
														((bool_t) 0));
												}
												BgL_test2468z00_6236 =
													(BgL_atypez00_5207 == ((obj_t) BgL_arg1963z00_5209));
											}
											if (BgL_test2468z00_6236)
												{	/* Cfa/type.scm 350 */
													BgL_test2465z00_6230 = ((bool_t) 0);
												}
											else
												{	/* Cfa/type.scm 350 */
													BgL_test2465z00_6230 = ((bool_t) 1);
												}
										}
								}
							else
								{	/* Cfa/type.scm 348 */
									BgL_test2465z00_6230 = ((bool_t) 0);
								}
							if (BgL_test2465z00_6230)
								{	/* Cfa/type.scm 351 */
									obj_t BgL_arg1958z00_5212;
									BgL_castz00_bglt BgL_arg1959z00_5213;

									{	/* Cfa/type.scm 351 */
										obj_t BgL_pairz00_5214;

										BgL_pairz00_5214 =
											(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt)
														((BgL_appz00_bglt) BgL_nodez00_5060))))->
											BgL_argsz00);
										BgL_arg1958z00_5212 = CDR(CDR(BgL_pairz00_5214));
									}
									{	/* Cfa/type.scm 352 */
										BgL_castz00_bglt BgL_new1197z00_5215;

										{	/* Cfa/type.scm 352 */
											BgL_castz00_bglt BgL_new1196z00_5216;

											BgL_new1196z00_5216 =
												((BgL_castz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_castz00_bgl))));
											{	/* Cfa/type.scm 352 */
												long BgL_arg1962z00_5217;

												{	/* Cfa/type.scm 352 */
													long BgL_res2303z00_5218;

													BgL_res2303z00_5218 =
														BGL_CLASS_INDEX(BGl_castz00zzast_nodez00);
													BgL_arg1962z00_5217 = BgL_res2303z00_5218;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1196z00_5216),
													BgL_arg1962z00_5217);
											}
											{	/* Cfa/type.scm 352 */
												BgL_objectz00_bglt BgL_tmpz00_6256;

												BgL_tmpz00_6256 =
													((BgL_objectz00_bglt) BgL_new1196z00_5216);
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6256, BFALSE);
											}
											((BgL_objectz00_bglt) BgL_new1196z00_5216);
											BgL_new1197z00_5215 = BgL_new1196z00_5216;
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1197z00_5215)))->
												BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
										((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
															BgL_new1197z00_5215)))->BgL_typez00) =
											((BgL_typez00_bglt) ((BgL_typez00_bglt)
													BGl_za2objza2z00zztype_cachez00)), BUNSPEC);
										{
											BgL_nodez00_bglt BgL_auxz00_6265;

											{	/* Cfa/type.scm 354 */
												obj_t BgL_pairz00_5219;

												BgL_pairz00_5219 =
													(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt)
																((BgL_appz00_bglt) BgL_nodez00_5060))))->
													BgL_argsz00);
												{	/* Cfa/type.scm 354 */
													obj_t BgL_pairz00_5220;

													{	/* Cfa/type.scm 354 */
														obj_t BgL_pairz00_5221;

														BgL_pairz00_5221 = CDR(BgL_pairz00_5219);
														BgL_pairz00_5220 = CDR(BgL_pairz00_5221);
													}
													BgL_auxz00_6265 =
														((BgL_nodez00_bglt) CAR(BgL_pairz00_5220));
											}}
											((((BgL_castz00_bglt) COBJECT(BgL_new1197z00_5215))->
													BgL_argz00) =
												((BgL_nodez00_bglt) BgL_auxz00_6265), BUNSPEC);
										}
										BgL_arg1959z00_5213 = BgL_new1197z00_5215;
									}
									{	/* Cfa/type.scm 351 */
										obj_t BgL_auxz00_6276;
										obj_t BgL_tmpz00_6274;

										BgL_auxz00_6276 = ((obj_t) BgL_arg1959z00_5213);
										BgL_tmpz00_6274 = ((obj_t) BgL_arg1958z00_5212);
										SET_CAR(BgL_tmpz00_6274, BgL_auxz00_6276);
								}}
							else
								{	/* Cfa/type.scm 348 */
									BFALSE;
								}
						}
					}
				else
					{	/* Cfa/type.scm 346 */
						BFALSE;
					}
				return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_5060));
			}
		}

	}



/* &type-node!-procedure1661 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2procedure1661z70zzcfa_typez00(obj_t
		BgL_envz00_5061, obj_t BgL_nodez00_5062)
	{
		{	/* Cfa/type.scm 326 */
			{

				{	/* Cfa/type.scm 326 */
					obj_t BgL_nextzd2method1660zd2_5224;

					BgL_nextzd2method1660zd2_5224 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt) BgL_nodez00_5062)),
						BGl_typezd2nodez12zd2envz12zzcfa_typez00,
						BGl_procedurezd2refzd2appz00zzcfa_info2z00);
					PROCEDURE_ENTRY(BgL_nextzd2method1660zd2_5224)
						(BgL_nextzd2method1660zd2_5224,
						((obj_t) ((BgL_appz00_bglt) BgL_nodez00_5062)), BEOA);
				}
				if (CBOOL
					(BGl_za2optimzd2cfazd2freezd2varzd2trackingzf3za2zf3zzengine_paramz00))
					{	/* Cfa/type.scm 330 */
						obj_t BgL_atypez00_5225;

						{	/* Cfa/type.scm 330 */
							BgL_approxz00_bglt BgL_arg1946z00_5226;

							{
								BgL_procedurezd2refzd2appz00_bglt BgL_auxz00_6292;

								{
									obj_t BgL_auxz00_6293;

									{	/* Cfa/type.scm 330 */
										BgL_objectz00_bglt BgL_tmpz00_6294;

										BgL_tmpz00_6294 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_nodez00_5062));
										BgL_auxz00_6293 = BGL_OBJECT_WIDENING(BgL_tmpz00_6294);
									}
									BgL_auxz00_6292 =
										((BgL_procedurezd2refzd2appz00_bglt) BgL_auxz00_6293);
								}
								BgL_arg1946z00_5226 =
									(((BgL_procedurezd2refzd2appz00_bglt)
										COBJECT(BgL_auxz00_6292))->BgL_approxz00);
							}
							if (BGl_approxzd2procedurezd2elzf3zf3zzcfa_closurez00
								(BgL_arg1946z00_5226))
								{	/* Cfa/type.scm 319 */
									BgL_atypez00_5225 =
										BGl_za2procedurezd2elza2zd2zztype_cachez00;
								}
							else
								{	/* Cfa/type.scm 319 */
									BgL_atypez00_5225 =
										BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_arg1946z00_5226,
										((obj_t) ((BgL_appz00_bglt) BgL_nodez00_5062)));
								}
						}
						{	/* Cfa/type.scm 331 */
							bool_t BgL_test2471z00_6305;

							if (BGl_bigloozd2typezf3z21zztype_typez00(
									((BgL_typez00_bglt) BgL_atypez00_5225)))
								{	/* Cfa/type.scm 331 */
									if ((BgL_atypez00_5225 == BGl_za2_za2z00zztype_cachez00))
										{	/* Cfa/type.scm 332 */
											BgL_test2471z00_6305 = ((bool_t) 0);
										}
									else
										{	/* Cfa/type.scm 333 */
											bool_t BgL_test2474z00_6311;

											{	/* Cfa/type.scm 333 */
												BgL_typez00_bglt BgL_arg1945z00_5227;

												BgL_arg1945z00_5227 =
													BGl_getzd2typezd2zztype_typeofz00(
													((BgL_nodez00_bglt)
														((BgL_appz00_bglt) BgL_nodez00_5062)),
													((bool_t) 0));
												BgL_test2474z00_6311 =
													(BgL_atypez00_5225 == ((obj_t) BgL_arg1945z00_5227));
											}
											if (BgL_test2474z00_6311)
												{	/* Cfa/type.scm 333 */
													BgL_test2471z00_6305 = ((bool_t) 0);
												}
											else
												{	/* Cfa/type.scm 333 */
													BgL_test2471z00_6305 = ((bool_t) 1);
												}
										}
								}
							else
								{	/* Cfa/type.scm 331 */
									BgL_test2471z00_6305 = ((bool_t) 0);
								}
							if (BgL_test2471z00_6305)
								{	/* Cfa/type.scm 334 */
									BgL_castz00_bglt BgL_new1194z00_5228;

									{	/* Cfa/type.scm 334 */
										BgL_castz00_bglt BgL_new1193z00_5229;

										BgL_new1193z00_5229 =
											((BgL_castz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_castz00_bgl))));
										{	/* Cfa/type.scm 334 */
											long BgL_arg1944z00_5230;

											{	/* Cfa/type.scm 334 */
												long BgL_res2302z00_5231;

												BgL_res2302z00_5231 =
													BGL_CLASS_INDEX(BGl_castz00zzast_nodez00);
												BgL_arg1944z00_5230 = BgL_res2302z00_5231;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1193z00_5229),
												BgL_arg1944z00_5230);
										}
										{	/* Cfa/type.scm 334 */
											BgL_objectz00_bglt BgL_tmpz00_6321;

											BgL_tmpz00_6321 =
												((BgL_objectz00_bglt) BgL_new1193z00_5229);
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6321, BFALSE);
										}
										((BgL_objectz00_bglt) BgL_new1193z00_5229);
										BgL_new1194z00_5228 = BgL_new1193z00_5229;
									}
									((((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_new1194z00_5228)))->
											BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
									((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_new1194z00_5228)))->BgL_typez00) =
										((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_atypez00_5225)),
										BUNSPEC);
									((((BgL_castz00_bglt) COBJECT(BgL_new1194z00_5228))->
											BgL_argz00) =
										((BgL_nodez00_bglt) ((BgL_nodez00_bglt) ((BgL_appz00_bglt)
													BgL_nodez00_5062))), BUNSPEC);
									return ((BgL_nodez00_bglt) BgL_new1194z00_5228);
								}
							else
								{	/* Cfa/type.scm 331 */
									return
										((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_5062));
								}
						}
					}
				else
					{	/* Cfa/type.scm 329 */
						return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_5062));
					}
			}
		}

	}



/* &type-node!-arithmeti1659 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2arithmeti1659z70zzcfa_typez00(obj_t
		BgL_envz00_5063, obj_t BgL_nodez00_5064)
	{
		{	/* Cfa/type.scm 282 */
			{

				{	/* Cfa/type.scm 282 */
					obj_t BgL_nextzd2method1658zd2_5234;

					BgL_nextzd2method1658zd2_5234 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt) BgL_nodez00_5064)),
						BGl_typezd2nodez12zd2envz12zzcfa_typez00,
						BGl_arithmeticzd2appzd2zzcfa_info2z00);
					PROCEDURE_ENTRY(BgL_nextzd2method1658zd2_5234)
						(BgL_nextzd2method1658zd2_5234,
						((obj_t) ((BgL_appz00_bglt) BgL_nodez00_5064)), BEOA);
				}
				{	/* Cfa/type.scm 299 */
					BgL_variablez00_bglt BgL_vz00_5235;

					BgL_vz00_5235 =
						(((BgL_varz00_bglt) COBJECT(
								(((BgL_appz00_bglt) COBJECT(
											((BgL_appz00_bglt)
												((BgL_appz00_bglt) BgL_nodez00_5064))))->BgL_funz00)))->
						BgL_variablez00);
					{	/* Cfa/type.scm 299 */
						BgL_valuez00_bglt BgL_valz00_5236;

						BgL_valz00_5236 =
							(((BgL_variablez00_bglt) COBJECT(BgL_vz00_5235))->BgL_valuez00);
						{	/* Cfa/type.scm 300 */

							{	/* Cfa/type.scm 301 */
								bool_t BgL_test2475z00_6352;

								{	/* Cfa/type.scm 301 */
									BgL_typez00_bglt BgL_arg1914z00_5237;

									BgL_arg1914z00_5237 =
										(((BgL_variablez00_bglt) COBJECT(BgL_vz00_5235))->
										BgL_typez00);
									BgL_test2475z00_6352 =
										(((obj_t) BgL_arg1914z00_5237) ==
										BGl_za2_za2z00zztype_cachez00);
								}
								if (BgL_test2475z00_6352)
									{	/* Cfa/type.scm 302 */
										BgL_typez00_bglt BgL_vz00_5238;

										BgL_vz00_5238 =
											((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
										((((BgL_variablez00_bglt) COBJECT(BgL_vz00_5235))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_vz00_5238), BUNSPEC);
									}
								else
									{	/* Cfa/type.scm 301 */
										BFALSE;
									}
							}
							{	/* Cfa/type.scm 305 */
								bool_t BgL_test2476z00_6358;

								{	/* Cfa/type.scm 305 */
									bool_t BgL_res2298z00_5239;

									BgL_res2298z00_5239 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_valz00_5236), BGl_sfunz00zzast_varz00);
									BgL_test2476z00_6358 = BgL_res2298z00_5239;
								}
								if (BgL_test2476z00_6358)
									{	/* Cfa/type.scm 306 */
										obj_t BgL_l01614z00_5240;

										BgL_l01614z00_5240 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_valz00_5236)))->BgL_argsz00);
										{
											obj_t BgL_l1613z00_5242;

											BgL_l1613z00_5242 = BgL_l01614z00_5240;
										BgL_zc3z04anonymousza31916ze3z87_5241:
											if (NULLP(BgL_l1613z00_5242))
												{	/* Cfa/type.scm 306 */
													BgL_l01614z00_5240;
												}
											else
												{	/* Cfa/type.scm 306 */
													{	/* Cfa/type.scm 306 */
														obj_t BgL_arg1918z00_5243;

														{	/* Cfa/type.scm 306 */
															obj_t BgL_arg1919z00_5244;

															BgL_arg1919z00_5244 =
																CAR(((obj_t) BgL_l1613z00_5242));
															BgL_arg1918z00_5243 =
																BGl_cleanupzd2typeze70z35zzcfa_typez00
																(BgL_arg1919z00_5244);
														}
														{	/* Cfa/type.scm 306 */
															obj_t BgL_tmpz00_6368;

															BgL_tmpz00_6368 = ((obj_t) BgL_l1613z00_5242);
															SET_CAR(BgL_tmpz00_6368, BgL_arg1918z00_5243);
														}
													}
													{	/* Cfa/type.scm 306 */
														obj_t BgL_arg1920z00_5245;

														BgL_arg1920z00_5245 =
															CDR(((obj_t) BgL_l1613z00_5242));
														{
															obj_t BgL_l1613z00_6373;

															BgL_l1613z00_6373 = BgL_arg1920z00_5245;
															BgL_l1613z00_5242 = BgL_l1613z00_6373;
															goto BgL_zc3z04anonymousza31916ze3z87_5241;
														}
													}
												}
										}
									}
								else
									{	/* Cfa/type.scm 307 */
										bool_t BgL_test2478z00_6374;

										{	/* Cfa/type.scm 307 */
											bool_t BgL_res2300z00_5246;

											BgL_res2300z00_5246 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_valz00_5236), BGl_cfunz00zzast_varz00);
											BgL_test2478z00_6374 = BgL_res2300z00_5246;
										}
										if (BgL_test2478z00_6374)
											{	/* Cfa/type.scm 308 */
												obj_t BgL_l01617z00_5247;

												BgL_l01617z00_5247 =
													(((BgL_cfunz00_bglt) COBJECT(
															((BgL_cfunz00_bglt) BgL_valz00_5236)))->
													BgL_argszd2typezd2);
												{
													obj_t BgL_l1616z00_5249;

													BgL_l1616z00_5249 = BgL_l01617z00_5247;
												BgL_zc3z04anonymousza31922ze3z87_5248:
													if (NULLP(BgL_l1616z00_5249))
														{	/* Cfa/type.scm 308 */
															BgL_l01617z00_5247;
														}
													else
														{	/* Cfa/type.scm 308 */
															{	/* Cfa/type.scm 308 */
																obj_t BgL_arg1924z00_5250;

																{	/* Cfa/type.scm 308 */
																	obj_t BgL_arg1925z00_5251;

																	BgL_arg1925z00_5251 =
																		CAR(((obj_t) BgL_l1616z00_5249));
																	BgL_arg1924z00_5250 =
																		BGl_cleanupzd2typeze70z35zzcfa_typez00
																		(BgL_arg1925z00_5251);
																}
																{	/* Cfa/type.scm 308 */
																	obj_t BgL_tmpz00_6384;

																	BgL_tmpz00_6384 = ((obj_t) BgL_l1616z00_5249);
																	SET_CAR(BgL_tmpz00_6384, BgL_arg1924z00_5250);
																}
															}
															{	/* Cfa/type.scm 308 */
																obj_t BgL_arg1926z00_5252;

																BgL_arg1926z00_5252 =
																	CDR(((obj_t) BgL_l1616z00_5249));
																{
																	obj_t BgL_l1616z00_6389;

																	BgL_l1616z00_6389 = BgL_arg1926z00_5252;
																	BgL_l1616z00_5249 = BgL_l1616z00_6389;
																	goto BgL_zc3z04anonymousza31922ze3z87_5248;
																}
															}
														}
												}
											}
										else
											{	/* Cfa/type.scm 307 */
												BFALSE;
											}
									}
							}
						}
					}
				}
				{	/* Cfa/type.scm 310 */
					bool_t BgL_test2480z00_6390;

					{	/* Cfa/type.scm 310 */
						BgL_typez00_bglt BgL_arg1930z00_5253;

						BgL_arg1930z00_5253 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt)
											((BgL_appz00_bglt) BgL_nodez00_5064)))))->BgL_typez00);
						BgL_test2480z00_6390 =
							(((obj_t) BgL_arg1930z00_5253) == BGl_za2_za2z00zztype_cachez00);
					}
					if (BgL_test2480z00_6390)
						{	/* Cfa/type.scm 310 */
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_appz00_bglt)
													((BgL_appz00_bglt) BgL_nodez00_5064)))))->
									BgL_typez00) =
								((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BGl_za2objza2z00zztype_cachez00)), BUNSPEC);
						}
					else
						{	/* Cfa/type.scm 310 */
							BFALSE;
						}
				}
				return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_5064));
			}
		}

	}



/* cleanup-type~0 */
	obj_t BGl_cleanupzd2typeze70z35zzcfa_typez00(obj_t BgL_tz00_3883)
	{
		{	/* Cfa/type.scm 293 */
			if (BGl_isazf3zf3zz__objectz00(BgL_tz00_3883, BGl_typez00zztype_typez00))
				{	/* Cfa/type.scm 286 */
					if ((BgL_tz00_3883 == BGl_za2_za2z00zztype_cachez00))
						{	/* Cfa/type.scm 287 */
							return BGl_za2objza2z00zztype_cachez00;
						}
					else
						{	/* Cfa/type.scm 287 */
							return BgL_tz00_3883;
						}
				}
			else
				{	/* Cfa/type.scm 286 */
					if (BGl_isazf3zf3zz__objectz00(BgL_tz00_3883,
							BGl_localz00zzast_varz00))
						{	/* Cfa/type.scm 288 */
							{	/* Cfa/type.scm 289 */
								bool_t BgL_test2484z00_6410;

								{	/* Cfa/type.scm 289 */
									BgL_typez00_bglt BgL_arg1937z00_3890;

									BgL_arg1937z00_3890 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_tz00_3883))))->BgL_typez00);
									BgL_test2484z00_6410 =
										(
										((obj_t) BgL_arg1937z00_3890) ==
										BGl_za2_za2z00zztype_cachez00);
								}
								if (BgL_test2484z00_6410)
									{	/* Cfa/type.scm 290 */
										BgL_typez00_bglt BgL_vz00_4885;

										BgL_vz00_4885 =
											((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
										((((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_tz00_3883))))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_vz00_4885), BUNSPEC);
									}
								else
									{	/* Cfa/type.scm 289 */
										BFALSE;
									}
							}
							return BgL_tz00_3883;
						}
					else
						{	/* Cfa/type.scm 288 */
							return BgL_tz00_3883;
						}
				}
		}

	}



/* &type-node!-app1657 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2app1657z70zzcfa_typez00(obj_t
		BgL_envz00_5065, obj_t BgL_nodez00_5066)
	{
		{	/* Cfa/type.scm 272 */
			BGl_typezd2nodeza2z12z62zzcfa_typez00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_5066)))->BgL_argsz00));
			BGl_typezd2funzd2nodez12z12zzcfa_typez00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_5066)))->BgL_funz00));
			{
				BgL_typez00_bglt BgL_auxz00_6426;

				{	/* Cfa/type.scm 276 */
					BgL_typez00_bglt BgL_arg1908z00_5255;
					BgL_typez00_bglt BgL_arg1909z00_5256;

					BgL_arg1908z00_5255 =
						(((BgL_variablez00_bglt) COBJECT(
								(((BgL_varz00_bglt) COBJECT(
											(((BgL_appz00_bglt) COBJECT(
														((BgL_appz00_bglt) BgL_nodez00_5066)))->
												BgL_funz00)))->BgL_variablez00)))->BgL_typez00);
					BgL_arg1909z00_5256 =
						(((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) ((BgL_appz00_bglt)
										BgL_nodez00_5066))))->BgL_typez00);
					BgL_auxz00_6426 =
						BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_arg1908z00_5255,
						BgL_arg1909z00_5256);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_nodez00_5066))))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_auxz00_6426), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_5066));
		}

	}



/* &type-node!-sync1655 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2sync1655z70zzcfa_typez00(obj_t
		BgL_envz00_5067, obj_t BgL_nodez00_5068)
	{
		{	/* Cfa/type.scm 260 */
			{
				BgL_nodez00_bglt BgL_auxz00_6440;

				{	/* Cfa/type.scm 262 */
					BgL_nodez00_bglt BgL_arg1897z00_5258;

					BgL_arg1897z00_5258 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_5068)))->BgL_mutexz00);
					BgL_auxz00_6440 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg1897z00_5258);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_5068)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_6440), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_6446;

				{	/* Cfa/type.scm 263 */
					BgL_nodez00_bglt BgL_arg1898z00_5259;

					BgL_arg1898z00_5259 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_5068)))->BgL_prelockz00);
					BgL_auxz00_6446 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg1898z00_5259);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_5068)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_6446), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_6452;

				{	/* Cfa/type.scm 264 */
					BgL_nodez00_bglt BgL_arg1901z00_5260;

					BgL_arg1901z00_5260 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_5068)))->BgL_bodyz00);
					BgL_auxz00_6452 =
						BGl_typezd2nodez12zc0zzcfa_typez00(BgL_arg1901z00_5260);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_5068)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_6452), BUNSPEC);
			}
			{	/* Cfa/type.scm 265 */
				bool_t BgL_test2485z00_6458;

				{	/* Cfa/type.scm 265 */
					BgL_typez00_bglt BgL_arg1905z00_5261;

					BgL_arg1905z00_5261 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_syncz00_bglt) BgL_nodez00_5068))))->BgL_typez00);
					BgL_test2485z00_6458 =
						(((obj_t) BgL_arg1905z00_5261) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test2485z00_6458)
					{
						BgL_typez00_bglt BgL_auxz00_6464;

						{	/* Cfa/type.scm 266 */
							BgL_nodez00_bglt BgL_arg1904z00_5262;

							BgL_arg1904z00_5262 =
								(((BgL_syncz00_bglt) COBJECT(
										((BgL_syncz00_bglt) BgL_nodez00_5068)))->BgL_bodyz00);
							BgL_auxz00_6464 =
								BGl_getzd2typezd2zztype_typeofz00(BgL_arg1904z00_5262,
								((bool_t) 0));
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_syncz00_bglt) BgL_nodez00_5068))))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_6464), BUNSPEC);
					}
				else
					{	/* Cfa/type.scm 265 */
						BFALSE;
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_5068));
		}

	}



/* &type-node!-sequence1653 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2sequence1653z70zzcfa_typez00(obj_t
		BgL_envz00_5069, obj_t BgL_nodez00_5070)
	{
		{	/* Cfa/type.scm 248 */
			BGl_typezd2nodeza2z12z62zzcfa_typez00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_5070)))->BgL_nodesz00));
			{	/* Cfa/type.scm 251 */
				bool_t BgL_test2486z00_6476;

				{	/* Cfa/type.scm 251 */
					BgL_typez00_bglt BgL_arg1896z00_5264;

					BgL_arg1896z00_5264 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_sequencez00_bglt) BgL_nodez00_5070))))->BgL_typez00);
					BgL_test2486z00_6476 =
						(((obj_t) BgL_arg1896z00_5264) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test2486z00_6476)
					{	/* Cfa/type.scm 251 */
						if (NULLP(
								(((BgL_sequencez00_bglt) COBJECT(
											((BgL_sequencez00_bglt) BgL_nodez00_5070)))->
									BgL_nodesz00)))
							{	/* Cfa/type.scm 252 */
								((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt)
													((BgL_sequencez00_bglt) BgL_nodez00_5070))))->
										BgL_typez00) =
									((BgL_typez00_bglt) ((BgL_typez00_bglt)
											BGl_za2unspecza2z00zztype_cachez00)), BUNSPEC);
							}
						else
							{
								BgL_typez00_bglt BgL_auxz00_6490;

								{	/* Cfa/type.scm 253 */
									obj_t BgL_arg1891z00_5265;

									BgL_arg1891z00_5265 =
										CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
											(((BgL_sequencez00_bglt) COBJECT(
														((BgL_sequencez00_bglt) BgL_nodez00_5070)))->
												BgL_nodesz00)));
									BgL_auxz00_6490 =
										BGl_getzd2typezd2zztype_typeofz00(((BgL_nodez00_bglt)
											BgL_arg1891z00_5265), ((bool_t) 0));
								}
								((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt)
													((BgL_sequencez00_bglt) BgL_nodez00_5070))))->
										BgL_typez00) =
									((BgL_typez00_bglt) BgL_auxz00_6490), BUNSPEC);
							}
					}
				else
					{	/* Cfa/type.scm 251 */
						BFALSE;
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_5070));
		}

	}



/* &type-node!-closure1651 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2closure1651z70zzcfa_typez00(obj_t
		BgL_envz00_5071, obj_t BgL_nodez00_5072)
	{
		{	/* Cfa/type.scm 242 */
			{	/* Cfa/type.scm 243 */
				obj_t BgL_arg1885z00_5267;

				BgL_arg1885z00_5267 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_5072)));
				return
					((BgL_nodez00_bglt)
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string2321z00zzcfa_typez00, BGl_string2354z00zzcfa_typez00,
						BgL_arg1885z00_5267));
			}
		}

	}



/* &type-node!-var1649 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2var1649z70zzcfa_typez00(obj_t
		BgL_envz00_5073, obj_t BgL_nodez00_5074)
	{
		{	/* Cfa/type.scm 222 */
			{
				BgL_typez00_bglt BgL_ntypez00_5270;
				BgL_typez00_bglt BgL_vtypez00_5271;

				{	/* Cfa/type.scm 231 */
					bool_t BgL_test2488z00_6507;

					{	/* Cfa/type.scm 231 */
						bool_t BgL_test2489z00_6508;

						{	/* Cfa/type.scm 231 */
							BgL_variablez00_bglt BgL_arg1865z00_5278;

							BgL_arg1865z00_5278 =
								(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt) BgL_nodez00_5074)))->BgL_variablez00);
							{	/* Cfa/type.scm 231 */
								bool_t BgL_res2294z00_5279;

								BgL_res2294z00_5279 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg1865z00_5278), BGl_globalz00zzast_varz00);
								BgL_test2489z00_6508 = BgL_res2294z00_5279;
							}
						}
						if (BgL_test2489z00_6508)
							{	/* Cfa/type.scm 231 */
								BgL_test2488z00_6507 =
									(
									(((BgL_globalz00_bglt) COBJECT(
												((BgL_globalz00_bglt)
													(((BgL_varz00_bglt) COBJECT(
																((BgL_varz00_bglt) BgL_nodez00_5074)))->
														BgL_variablez00))))->BgL_importz00) ==
									CNST_TABLE_REF(((long) 3)));
							}
						else
							{	/* Cfa/type.scm 231 */
								BgL_test2488z00_6507 = ((bool_t) 0);
							}
					}
					if (BgL_test2488z00_6507)
						{	/* Cfa/type.scm 232 */
							BgL_valuez00_bglt BgL_arg1858z00_5280;
							BgL_variablez00_bglt BgL_arg1859z00_5281;

							BgL_arg1858z00_5280 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_globalz00_bglt)
												(((BgL_varz00_bglt) COBJECT(
															((BgL_varz00_bglt) BgL_nodez00_5074)))->
													BgL_variablez00)))))->BgL_valuez00);
							BgL_arg1859z00_5281 =
								(((BgL_varz00_bglt) COBJECT(((BgL_varz00_bglt)
											BgL_nodez00_5074)))->BgL_variablez00);
							BGl_typezd2variablez12zc0zzcfa_typez00(BgL_arg1858z00_5280,
								BgL_arg1859z00_5281);
						}
					else
						{	/* Cfa/type.scm 231 */
							BFALSE;
						}
				}
				{	/* Cfa/type.scm 233 */
					bool_t BgL_test2490z00_6527;

					{	/* Cfa/type.scm 233 */
						bool_t BgL_test2491z00_6528;

						{	/* Cfa/type.scm 233 */
							BgL_typez00_bglt BgL_arg1882z00_5282;

							BgL_arg1882z00_5282 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_varz00_bglt) BgL_nodez00_5074))))->BgL_typez00);
							BgL_test2491z00_6528 =
								(
								((obj_t) BgL_arg1882z00_5282) == BGl_za2_za2z00zztype_cachez00);
						}
						if (BgL_test2491z00_6528)
							{	/* Cfa/type.scm 233 */
								BgL_test2490z00_6527 = ((bool_t) 1);
							}
						else
							{	/* Cfa/type.scm 234 */
								bool_t BgL_test2492z00_6534;

								{	/* Cfa/type.scm 234 */
									BgL_typez00_bglt BgL_arg1881z00_5283;

									BgL_arg1881z00_5283 =
										(((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt)
													((BgL_varz00_bglt) BgL_nodez00_5074))))->BgL_typez00);
									BgL_test2492z00_6534 =
										(
										((obj_t) BgL_arg1881z00_5283) ==
										BGl_za2vectorza2z00zztype_cachez00);
								}
								if (BgL_test2492z00_6534)
									{	/* Cfa/type.scm 234 */
										BgL_test2490z00_6527 = ((bool_t) 1);
									}
								else
									{	/* Cfa/type.scm 235 */
										BgL_typez00_bglt BgL_arg1877z00_5284;
										BgL_typez00_bglt BgL_arg1878z00_5285;

										BgL_arg1877z00_5284 =
											(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_varz00_bglt) BgL_nodez00_5074))))->
											BgL_typez00);
										BgL_arg1878z00_5285 =
											(((BgL_variablez00_bglt) COBJECT((((BgL_varz00_bglt)
															COBJECT(((BgL_varz00_bglt) BgL_nodez00_5074)))->
														BgL_variablez00)))->BgL_typez00);
										BgL_ntypez00_5270 = BgL_arg1877z00_5284;
										BgL_vtypez00_5271 = BgL_arg1878z00_5285;
										{	/* Cfa/type.scm 225 */
											bool_t BgL__ortest_1181z00_5272;

											if (BGl_bigloozd2typezf3z21zztype_typez00
												(BgL_vtypez00_5271))
												{	/* Cfa/type.scm 225 */
													BgL__ortest_1181z00_5272 = ((bool_t) 0);
												}
											else
												{	/* Cfa/type.scm 225 */
													BgL__ortest_1181z00_5272 = ((bool_t) 1);
												}
											if (BgL__ortest_1181z00_5272)
												{	/* Cfa/type.scm 225 */
													BgL_test2490z00_6527 = BgL__ortest_1181z00_5272;
												}
											else
												{	/* Cfa/type.scm 226 */
													bool_t BgL__ortest_1182z00_5273;

													BgL__ortest_1182z00_5273 =
														(
														((obj_t) BgL_ntypez00_5270) ==
														BGl_za2objza2z00zztype_cachez00);
													if (BgL__ortest_1182z00_5273)
														{	/* Cfa/type.scm 226 */
															BgL_test2490z00_6527 = BgL__ortest_1182z00_5273;
														}
													else
														{	/* Cfa/type.scm 227 */
															bool_t BgL__ortest_1183z00_5274;

															{	/* Cfa/type.scm 227 */
																bool_t BgL__ortest_1184z00_5275;

																BgL__ortest_1184z00_5275 =
																	(
																	((obj_t) BgL_vtypez00_5271) ==
																	BGl_za2pairza2z00zztype_cachez00);
																if (BgL__ortest_1184z00_5275)
																	{	/* Cfa/type.scm 227 */
																		BgL__ortest_1183z00_5274 =
																			BgL__ortest_1184z00_5275;
																	}
																else
																	{	/* Cfa/type.scm 227 */
																		BgL__ortest_1183z00_5274 =
																			(
																			((obj_t) BgL_vtypez00_5271) ==
																			BGl_za2epairza2z00zztype_cachez00);
																	}
															}
															if (BgL__ortest_1183z00_5274)
																{	/* Cfa/type.scm 227 */
																	BgL_test2490z00_6527 =
																		BgL__ortest_1183z00_5274;
																}
															else
																{	/* Cfa/type.scm 228 */
																	bool_t BgL_test2498z00_6558;

																	{	/* Cfa/type.scm 228 */
																		bool_t BgL_res2292z00_5276;

																		BgL_res2292z00_5276 =
																			BGl_isazf3zf3zz__objectz00(
																			((obj_t) BgL_vtypez00_5271),
																			BGl_tclassz00zzobject_classz00);
																		BgL_test2498z00_6558 = BgL_res2292z00_5276;
																	}
																	if (BgL_test2498z00_6558)
																		{	/* Cfa/type.scm 228 */
																			bool_t BgL_test2499z00_6561;

																			{	/* Cfa/type.scm 228 */
																				bool_t BgL_res2293z00_5277;

																				BgL_res2293z00_5277 =
																					BGl_isazf3zf3zz__objectz00(
																					((obj_t) BgL_ntypez00_5270),
																					BGl_tclassz00zzobject_classz00);
																				BgL_test2499z00_6561 =
																					BgL_res2293z00_5277;
																			}
																			if (BgL_test2499z00_6561)
																				{	/* Cfa/type.scm 228 */
																					BgL_test2490z00_6527 =
																						BGl_typezd2subclasszf3z21zzobject_classz00
																						(BgL_vtypez00_5271,
																						BgL_ntypez00_5270);
																				}
																			else
																				{	/* Cfa/type.scm 228 */
																					BgL_test2490z00_6527 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Cfa/type.scm 228 */
																			BgL_test2490z00_6527 = ((bool_t) 0);
																		}
																}
														}
												}
										}
									}
							}
					}
					if (BgL_test2490z00_6527)
						{	/* Cfa/type.scm 233 */
							((((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt)
												((BgL_varz00_bglt) BgL_nodez00_5074))))->BgL_typez00) =
								((BgL_typez00_bglt) (((BgL_variablez00_bglt)
											COBJECT((((BgL_varz00_bglt) COBJECT(((BgL_varz00_bglt)
																BgL_nodez00_5074)))->BgL_variablez00)))->
										BgL_typez00)), BUNSPEC);
						}
					else
						{	/* Cfa/type.scm 233 */
							BFALSE;
						}
				}
				return ((BgL_nodez00_bglt) ((BgL_varz00_bglt) BgL_nodez00_5074));
			}
		}

	}



/* &type-node!-kwote1647 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2kwote1647z70zzcfa_typez00(obj_t
		BgL_envz00_5075, obj_t BgL_nodez00_5076)
	{
		{	/* Cfa/type.scm 213 */
			{	/* Cfa/type.scm 215 */
				bool_t BgL_test2500z00_6573;

				{	/* Cfa/type.scm 215 */
					BgL_typez00_bglt BgL_arg1850z00_5287;

					BgL_arg1850z00_5287 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_kwotez00_bglt) BgL_nodez00_5076))))->BgL_typez00);
					BgL_test2500z00_6573 =
						(((obj_t) BgL_arg1850z00_5287) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test2500z00_6573)
					{
						BgL_typez00_bglt BgL_auxz00_6579;

						{	/* Cfa/type.scm 216 */
							obj_t BgL_arg1848z00_5288;

							BgL_arg1848z00_5288 =
								(((BgL_kwotez00_bglt) COBJECT(
										((BgL_kwotez00_bglt) BgL_nodez00_5076)))->BgL_valuez00);
							BgL_auxz00_6579 =
								BGl_getzd2typezd2kwotez00zztype_typeofz00(BgL_arg1848z00_5288);
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_kwotez00_bglt) BgL_nodez00_5076))))->BgL_typez00) =
							((BgL_typez00_bglt) BgL_auxz00_6579), BUNSPEC);
					}
				else
					{	/* Cfa/type.scm 215 */
						BFALSE;
					}
			}
			return ((BgL_nodez00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_5076));
		}

	}



/* &type-node!-atom1645 */
	BgL_nodez00_bglt BGl_z62typezd2nodez12zd2atom1645z70zzcfa_typez00(obj_t
		BgL_envz00_5077, obj_t BgL_nodez00_5078)
	{
		{	/* Cfa/type.scm 207 */
			return ((BgL_nodez00_bglt) ((BgL_atomz00_bglt) BgL_nodez00_5078));
		}

	}



/* &type-variable!-inter1641 */
	obj_t BGl_z62typezd2variablez12zd2inter1641z70zzcfa_typez00(obj_t
		BgL_envz00_5079, obj_t BgL_valuez00_5080, obj_t BgL_variablez00_5081)
	{
		{	/* Cfa/type.scm 170 */
			return CNST_TABLE_REF(((long) 4));
		}

	}



/* &type-variable!-sexit1639 */
	obj_t BGl_z62typezd2variablez12zd2sexit1639z70zzcfa_typez00(obj_t
		BgL_envz00_5082, obj_t BgL_valuez00_5083, obj_t BgL_variablez00_5084)
	{
		{	/* Cfa/type.scm 160 */
			return CNST_TABLE_REF(((long) 4));
		}

	}



/* &type-variable!-cvar/1637 */
	obj_t BGl_z62typezd2variablez12zd2cvarzf21637z82zzcfa_typez00(obj_t
		BgL_envz00_5085, obj_t BgL_valuez00_5086, obj_t BgL_variablez00_5087)
	{
		{	/* Cfa/type.scm 153 */
			{	/* Cfa/type.scm 155 */
				obj_t BgL_arg1842z00_5293;

				{	/* Cfa/type.scm 155 */
					BgL_approxz00_bglt BgL_arg1845z00_5294;

					{
						BgL_cvarzf2cinfozf2_bglt BgL_auxz00_6592;

						{
							obj_t BgL_auxz00_6593;

							{	/* Cfa/type.scm 155 */
								BgL_objectz00_bglt BgL_tmpz00_6594;

								BgL_tmpz00_6594 =
									((BgL_objectz00_bglt) ((BgL_cvarz00_bglt) BgL_valuez00_5086));
								BgL_auxz00_6593 = BGL_OBJECT_WIDENING(BgL_tmpz00_6594);
							}
							BgL_auxz00_6592 = ((BgL_cvarzf2cinfozf2_bglt) BgL_auxz00_6593);
						}
						BgL_arg1845z00_5294 =
							(((BgL_cvarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6592))->
							BgL_approxz00);
					}
					BgL_arg1842z00_5293 =
						BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_arg1845z00_5294,
						((obj_t) ((BgL_cvarz00_bglt) BgL_valuez00_5086)));
				}
				return
					BGl_setzd2variablezd2typez12z12zzcfa_typez00(
					((BgL_variablez00_bglt) BgL_variablez00_5087),
					((BgL_typez00_bglt) BgL_arg1842z00_5293));
			}
		}

	}



/* &type-variable!-scnst1635 */
	obj_t BGl_z62typezd2variablez12zd2scnst1635z70zzcfa_typez00(obj_t
		BgL_envz00_5088, obj_t BgL_valuez00_5089, obj_t BgL_variablez00_5090)
	{
		{	/* Cfa/type.scm 147 */
			return CNST_TABLE_REF(((long) 4));
		}

	}



/* &type-variable!-svar/1633 */
	obj_t BGl_z62typezd2variablez12zd2svarzf21633z82zzcfa_typez00(obj_t
		BgL_envz00_5091, obj_t BgL_valuez00_5092, obj_t BgL_variablez00_5093)
	{
		{	/* Cfa/type.scm 137 */
			{	/* Cfa/type.scm 139 */
				obj_t BgL_typz00_5297;

				{	/* Cfa/type.scm 139 */
					BgL_approxz00_bglt BgL_arg1841z00_5298;

					{
						BgL_svarzf2cinfozf2_bglt BgL_auxz00_6607;

						{
							obj_t BgL_auxz00_6608;

							{	/* Cfa/type.scm 139 */
								BgL_objectz00_bglt BgL_tmpz00_6609;

								BgL_tmpz00_6609 =
									((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_valuez00_5092));
								BgL_auxz00_6608 = BGL_OBJECT_WIDENING(BgL_tmpz00_6609);
							}
							BgL_auxz00_6607 = ((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_6608);
						}
						BgL_arg1841z00_5298 =
							(((BgL_svarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6607))->
							BgL_approxz00);
					}
					BgL_typz00_5297 =
						BGl_getzd2approxzd2typez00zzcfa_typez00(BgL_arg1841z00_5298,
						((obj_t) ((BgL_svarz00_bglt) BgL_valuez00_5092)));
				}
				return
					BGl_setzd2variablezd2typez12z12zzcfa_typez00(
					((BgL_variablez00_bglt) BgL_variablez00_5093),
					((BgL_typez00_bglt) BgL_typz00_5297));
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_typez00()
	{
		{	/* Cfa/type.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2355z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2355z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2355z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2355z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2355z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2355z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2355z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2355z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2355z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string2355z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2355z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2355z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zzcfa_setz00(((long) 21524494),
				BSTRING_TO_STRING(BGl_string2355z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(((long) 324810621),
				BSTRING_TO_STRING(BGl_string2355z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zzcfa_closurez00(((long) 189402632),
				BSTRING_TO_STRING(BGl_string2355z00zzcfa_typez00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 501518159),
				BSTRING_TO_STRING(BGl_string2355z00zzcfa_typez00));
			return
				BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2355z00zzcfa_typez00));
		}

	}

#ifdef __cplusplus
}
#endif
