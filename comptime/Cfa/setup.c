/*===========================================================================*/
/*   (Cfa/setup.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/setup.scm) */
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

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

	typedef struct BgL_cvarz00_bgl
	{
		header_t header;
		obj_t widening;
		bool_t BgL_macrozf3zf3;
	}              *BgL_cvarz00_bglt;

	typedef struct BgL_sexitz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_handlerz00;
		bool_t BgL_detachedzf3zf3;
	}               *BgL_sexitz00_bglt;

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

	typedef struct BgL_literalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}                 *BgL_literalz00_bglt;

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

	typedef struct BgL_pragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_formatz00;
	}                *BgL_pragmaz00_bglt;

	typedef struct BgL_genpatchidz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		long BgL_indexz00;
		long BgL_rindexz00;
	}                    *BgL_genpatchidz00_bglt;

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

	typedef struct BgL_setfieldz00_bgl
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
	}                  *BgL_setfieldz00_bglt;

	typedef struct BgL_newz00_bgl
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
		obj_t BgL_argszd2typezd2;
	}             *BgL_newz00_bglt;

	typedef struct BgL_instanceofz00_bgl
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
		struct BgL_typez00_bgl *BgL_classz00;
	}                    *BgL_instanceofz00_bglt;

	typedef struct BgL_castzd2nullzd2_bgl
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
	}                     *BgL_castzd2nullzd2_bglt;

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

	typedef struct BgL_cfunzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                      *BgL_cfunzf2cinfozf2_bglt;

	typedef struct BgL_externzd2sfunzf2cinfoz20_bgl
	{
		bool_t BgL_polymorphiczf3zf3;
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_externzd2sfunzf2cinfoz20_bglt;

	typedef struct BgL_internzd2sfunzf2cinfoz20_bgl
	{
		bool_t BgL_polymorphiczf3zf3;
		struct BgL_approxz00_bgl *BgL_approxz00;
		long BgL_stampz00;
	}                               *BgL_internzd2sfunzf2cinfoz20_bglt;

	typedef struct BgL_scnstzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                       *BgL_scnstzf2cinfozf2_bglt;

	typedef struct BgL_prezd2clozd2envz00_bgl
	{
	}                         *BgL_prezd2clozd2envz00_bglt;

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

	typedef struct BgL_sexitzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                       *BgL_sexitzf2cinfozf2_bglt;

	typedef struct BgL_reshapedzd2localzd2_bgl
	{
		obj_t BgL_bindingzd2valuezd2;
	}                          *BgL_reshapedzd2localzd2_bglt;

	typedef struct BgL_reshapedzd2globalzd2_bgl
	{
	}                           *BgL_reshapedzd2globalzd2_bglt;

	typedef struct BgL_literalzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                         *BgL_literalzf2cinfozf2_bglt;

	typedef struct BgL_genpatchidzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                            *BgL_genpatchidzf2cinfozf2_bglt;

	typedef struct BgL_patchzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                       *BgL_patchzf2cinfozf2_bglt;

	typedef struct BgL_kwotezf2nodezf2_bgl
	{
		struct BgL_nodez00_bgl *BgL_nodez00;
	}                      *BgL_kwotezf2nodezf2_bglt;

	typedef struct BgL_kwotezf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                       *BgL_kwotezf2cinfozf2_bglt;

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

	typedef struct BgL_setqzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                      *BgL_setqzf2cinfozf2_bglt;

	typedef struct BgL_conditionalzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                             *BgL_conditionalzf2cinfozf2_bglt;

	typedef struct BgL_failzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                      *BgL_failzf2cinfozf2_bglt;

	typedef struct BgL_switchzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                        *BgL_switchzf2cinfozf2_bglt;

	typedef struct BgL_setzd2exzd2itzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_setzd2exzd2itzf2cinfozf2_bglt;

	typedef struct BgL_jumpzd2exzd2itzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                                *BgL_jumpzd2exzd2itzf2cinfozf2_bglt;

	typedef struct BgL_makezd2procedurezd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_valueszd2approxzd2;
		long BgL_lostzd2stampzd2;
		bool_t BgL_xzd2tzf3z21;
		bool_t BgL_xz00;
		bool_t BgL_tz00;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
	}                                *BgL_makezd2procedurezd2appz00_bglt;

	typedef struct BgL_pragmazf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                        *BgL_pragmazf2cinfozf2_bglt;

	typedef struct BgL_getfieldzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                          *BgL_getfieldzf2cinfozf2_bglt;

	typedef struct BgL_setfieldzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                          *BgL_setfieldzf2cinfozf2_bglt;

	typedef struct BgL_newzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                     *BgL_newzf2cinfozf2_bglt;

	typedef struct BgL_instanceofzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                            *BgL_instanceofzf2cinfozf2_bglt;

	typedef struct BgL_castzd2nullzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                             *BgL_castzd2nullzf2cinfoz20_bglt;


	static obj_t BGl_z62nodezd2setupz12zd2cast1804z70zzcfa_setupz00(obj_t, obj_t);
	extern obj_t BGl_newzf2Cinfozf2zzcfa_info3z00;
	static obj_t BGl_z62nodezd2setupz12zd2setq1806z70zzcfa_setupz00(obj_t, obj_t);
	static obj_t BGl_z62variablezd2valuezd2setup1755z62zzcfa_setupz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62variablezd2valuezd2setup1758z62zzcfa_setupz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_z62variablezd2valuezd2setup1760z62zzcfa_setupz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62variablezd2valuezd2setup1762z62zzcfa_setupz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62variablezd2valuezd2setup1764z62zzcfa_setupz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62variablezd2valuezd2setup1766z62zzcfa_setupz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_pragmazf2Cinfozf2zzcfa_info3z00;
	static obj_t BGl_z62variablezd2valuezd2setup1768z62zzcfa_setupz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62variablezd2valuezd2setup1770z62zzcfa_setupz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_za2structza2z00zztype_cachez00;
	static obj_t BGl_z62nodezd2setupz12zd2kwote1750z70zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_z62nodezd2setupz12zd2literal1746z70zzcfa_setupz00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2setupz12zd2new1798z70zzcfa_setupz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2setupz12zd2patch1748z70zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_sexitz00zzast_varz00;
	static obj_t BGl_objectzd2initzd2zzcfa_setupz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_genpatchidzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00;
	static obj_t BGl_z62nodezd2setupz12zd2sync1776z70zzcfa_setupz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2setupz12zd2var1754z70zzcfa_setupz00(obj_t, obj_t);
	extern obj_t BGl_reshapedzd2localzd2zzcfa_infoz00;
	extern obj_t BGl_cvarzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_switchzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_methodzd2initzd2zzcfa_setupz00();
	static obj_t BGl_z62nodezd2setupz12zd2setzd2exzd2i1818z70zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_literalzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_z62nodezd2setupz12zd2conditio1808z70zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_prezd2clozd2envz00zzcfa_infoz00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62nodezd2setupz12zd2closure1772z70zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_pragmaz00zzast_nodez00;
	extern obj_t BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00;
	extern obj_t BGl_svarz00zzast_varz00;
	extern obj_t
		BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_failzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_setqzf2Cinfozf2zzcfa_infoz00;
	static bool_t BGl_alloczd2typezf3z21zzcfa_setupz00(BgL_typez00_bglt);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2setupz12zd2castzd2nul1802za2zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_kwotezf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_gczd2rootszd2initz00zzcfa_setupz00();
	extern obj_t BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00;
	extern obj_t BGl_kwotezf2nodezf2zzcfa_infoz00;
	extern BgL_approxz00_bglt BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
	extern obj_t BGl_sexitzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_instanceofzf2Cinfozf2zzcfa_info3z00;
	extern obj_t BGl_za2optimzd2cfazd2applyzd2trackingzf3za2z21zzengine_paramz00;
	extern obj_t BGl_castzd2nullzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2setupz12zd2sequence1774z70zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_svarzf2Cinfozf2zzcfa_infoz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2setupz12zd2letzd2fun1814za2zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62funzd2setupz12zd2sfun1782z70zzcfa_setupz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2setupz12zd2kwotezf2no1752z82zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_funcallzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_cvarz00zzast_varz00;
	extern obj_t BGl_patchz00zzast_nodez00;
	extern obj_t BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_z62nodezd2setupz12zd2switch1812z70zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_getfieldzf2Cinfozf2zzcfa_info3z00;
	BGL_EXPORTED_DECL obj_t BGl_nodezd2setupza2z12z62zzcfa_setupz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_setupz00 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	extern obj_t BGl_newz00zzast_nodez00;
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	static obj_t BGl_z62nodezd2setupz12zd2appzd2ly1786za2zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_patchzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_z62nodezd2setupz12zd2fail1810z70zzcfa_setupz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62setzd2initialzd2approxz12z70zzcfa_setupz00(obj_t, obj_t);
	extern bool_t BGl_pairzd2optimzf3z21zzcfa_pairz00();
	static obj_t BGl_toplevelzd2initzd2zzcfa_setupz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_setupz00();
	extern obj_t BGl_getfieldz00zzast_nodez00;
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_z62nodezd2setupz12zd2letzd2var1816za2zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	static obj_t BGl_z62nodezd2setupz12zd2genpatch1792z70zzcfa_setupz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2setupz12zd2getfield1794z70zzcfa_setupz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_setzd2initialzd2approxz12z12zzcfa_setupz00(obj_t);
	extern obj_t BGl_reshapedzd2globalzd2zzcfa_infoz00;
	static obj_t BGl_z62nodezd2setupz12zd2funcall1788z70zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00;
	static obj_t BGl_z62funzd2setupz12zd2cfun1784z70zzcfa_setupz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_nodezd2setupz12zc0zzcfa_setupz00(BgL_nodez00_bglt);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_z62nodezd2setupz12zd2setfield1796z70zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_za2pairza2z00zztype_cachez00;
	static obj_t BGl_z62nodezd2setupz12zd2instance1800z70zzcfa_setupz00(obj_t,
		obj_t);
	static obj_t BGl_funzd2setupz12zc0zzcfa_setupz00(BgL_funz00_bglt, obj_t);
	extern BgL_typez00_bglt BGl_getzd2typezd2atomz00zztype_typeofz00(obj_t);
	static obj_t BGl_z62nodezd2setupza2z12z00zzcfa_setupz00(obj_t, obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	static obj_t BGl_z62nodezd2setupz12zd2jumpzd2exzd21820z70zzcfa_setupz00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2setupz12zd2app1778z70zzcfa_setupz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2setupz121742za2zzcfa_setupz00(obj_t, obj_t);
	static obj_t BGl_z62funzd2setupz12za2zzcfa_setupz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_setupz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_pairz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
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
	static obj_t BGl_z62nodezd2setupz12zd2pragma1790z70zzcfa_setupz00(obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_z62nodezd2setupz12za2zzcfa_setupz00(obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcfa_setupz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_setupz00();
	extern obj_t BGl_scnstz00zzast_varz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_setupz00();
	static obj_t
		BGl_variablezd2valuezd2setupz12z12zzcfa_setupz00(BgL_valuez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_conditionalzf2Cinfozf2zzcfa_infoz00;
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt);
	extern obj_t BGl_instanceofz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00;
	BGL_IMPORT obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_valuez00zzast_varz00;
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern obj_t BGl_setfieldz00zzast_nodez00;
	extern obj_t BGl_genpatchidz00zzast_nodez00;
	static obj_t BGl_z62variablezd2valuezd2setupz12z70zzcfa_setupz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_scnstzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_literalz00zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00;
	static obj_t BGl_z62funzd2setupz121779za2zzcfa_setupz00(obj_t, obj_t, obj_t);
	extern BgL_typez00_bglt BGl_getzd2typezd2kwotez00zztype_typeofz00(obj_t);
	extern obj_t BGl_setfieldzf2Cinfozf2zzcfa_info3z00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_cfunzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t
		BGl_za2optimzd2cfazd2forcezd2loosezd2localzd2functionzf3za2z21zzengine_paramz00;
	static obj_t __cnst[7];


	   
		 
		DEFINE_STRING(BGl_string2355z00zzcfa_setupz00,
		BgL_bgl_string2355za700za7za7c2406za7, "node-setup!1742", 15);
	      DEFINE_STRING(BGl_string2357z00zzcfa_setupz00,
		BgL_bgl_string2357za700za7za7c2407za7, "variable-value-setup1755", 24);
	      DEFINE_STRING(BGl_string2359z00zzcfa_setupz00,
		BgL_bgl_string2359za700za7za7c2408za7, "fun-setup!1779", 14);
	      DEFINE_STRING(BGl_string2360z00zzcfa_setupz00,
		BgL_bgl_string2360za700za7za7c2409za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2362z00zzcfa_setupz00,
		BgL_bgl_string2362za700za7za7c2410za7, "node-setup!", 11);
	      DEFINE_STRING(BGl_string2368z00zzcfa_setupz00,
		BgL_bgl_string2368za700za7za7c2411za7, "variable-value-setup!", 21);
	      DEFINE_STRING(BGl_string2380z00zzcfa_setupz00,
		BgL_bgl_string2380za700za7za7c2412za7, "fun-setup!", 10);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
		BgL_bgl_za762variableza7d2va2413z00,
		BGl_z62variablezd2valuezd2setupz12z70zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72414za7,
		BGl_z62nodezd2setupz12za2zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2400z00zzcfa_setupz00,
		BgL_bgl_string2400za700za7za7c2415za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string2401z00zzcfa_setupz00,
		BgL_bgl_string2401za700za7za7c2416za7, "cfa_setup", 9);
	      DEFINE_STRING(BGl_string2402z00zzcfa_setupz00,
		BgL_bgl_string2402za700za7za7c2417za7,
		"static already-done (sfun sgfun) import read node-setup!1742 variable-value-setup1755 ",
		86);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2354z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72418za7,
		BGl_z62nodezd2setupz121742za2zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2356z00zzcfa_setupz00,
		BgL_bgl_za762variableza7d2va2419z00,
		BGl_z62variablezd2valuezd2setup1755z62zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2358z00zzcfa_setupz00,
		BgL_bgl_za762funza7d2setupza712420za7,
		BGl_z62funzd2setupz121779za2zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2361z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72421za7,
		BGl_z62nodezd2setupz12zd2literal1746z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2363z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72422za7,
		BGl_z62nodezd2setupz12zd2patch1748z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2364z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72423za7,
		BGl_z62nodezd2setupz12zd2kwote1750z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2365z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72424za7,
		BGl_z62nodezd2setupz12zd2kwotezf2no1752z82zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2366z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72425za7,
		BGl_z62nodezd2setupz12zd2var1754z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2367z00zzcfa_setupz00,
		BgL_bgl_za762variableza7d2va2426z00,
		BGl_z62variablezd2valuezd2setup1758z62zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2369z00zzcfa_setupz00,
		BgL_bgl_za762variableza7d2va2427z00,
		BGl_z62variablezd2valuezd2setup1760z62zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2370z00zzcfa_setupz00,
		BgL_bgl_za762variableza7d2va2428z00,
		BGl_z62variablezd2valuezd2setup1762z62zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2371z00zzcfa_setupz00,
		BgL_bgl_za762variableza7d2va2429z00,
		BGl_z62variablezd2valuezd2setup1764z62zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2372z00zzcfa_setupz00,
		BgL_bgl_za762variableza7d2va2430z00,
		BGl_z62variablezd2valuezd2setup1766z62zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2373z00zzcfa_setupz00,
		BgL_bgl_za762variableza7d2va2431z00,
		BGl_z62variablezd2valuezd2setup1768z62zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2374z00zzcfa_setupz00,
		BgL_bgl_za762variableza7d2va2432z00,
		BGl_z62variablezd2valuezd2setup1770z62zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2375z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72433za7,
		BGl_z62nodezd2setupz12zd2closure1772z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2376z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72434za7,
		BGl_z62nodezd2setupz12zd2sequence1774z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2377z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72435za7,
		BGl_z62nodezd2setupz12zd2sync1776z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2378z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72436za7,
		BGl_z62nodezd2setupz12zd2app1778z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2379z00zzcfa_setupz00,
		BgL_bgl_za762funza7d2setupza712437za7,
		BGl_z62funzd2setupz12zd2sfun1782z70zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2381z00zzcfa_setupz00,
		BgL_bgl_za762funza7d2setupza712438za7,
		BGl_z62funzd2setupz12zd2cfun1784z70zzcfa_setupz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2382z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72439za7,
		BGl_z62nodezd2setupz12zd2appzd2ly1786za2zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2383z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72440za7,
		BGl_z62nodezd2setupz12zd2funcall1788z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2384z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72441za7,
		BGl_z62nodezd2setupz12zd2pragma1790z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2385z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72442za7,
		BGl_z62nodezd2setupz12zd2genpatch1792z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2386z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72443za7,
		BGl_z62nodezd2setupz12zd2getfield1794z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2387z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72444za7,
		BGl_z62nodezd2setupz12zd2setfield1796z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2388z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72445za7,
		BGl_z62nodezd2setupz12zd2new1798z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2389z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72446za7,
		BGl_z62nodezd2setupz12zd2instance1800z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2390z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72447za7,
		BGl_z62nodezd2setupz12zd2castzd2nul1802za2zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2391z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72448za7,
		BGl_z62nodezd2setupz12zd2cast1804z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2392z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72449za7,
		BGl_z62nodezd2setupz12zd2setq1806z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2393z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72450za7,
		BGl_z62nodezd2setupz12zd2conditio1808z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2394z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72451za7,
		BGl_z62nodezd2setupz12zd2fail1810z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2395z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72452za7,
		BGl_z62nodezd2setupz12zd2switch1812z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2396z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72453za7,
		BGl_z62nodezd2setupz12zd2letzd2fun1814za2zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2397z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72454za7,
		BGl_z62nodezd2setupz12zd2letzd2var1816za2zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2398z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72455za7,
		BGl_z62nodezd2setupz12zd2setzd2exzd2i1818z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2399z00zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72456za7,
		BGl_z62nodezd2setupz12zd2jumpzd2exzd21820z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_funzd2setupz12zd2envz12zzcfa_setupz00,
		BgL_bgl_za762funza7d2setupza712457za7,
		BGl_z62funzd2setupz12za2zzcfa_setupz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2initialzd2approxz12zd2envzc0zzcfa_setupz00,
		BgL_bgl_za762setza7d2initial2458z00,
		BGl_z62setzd2initialzd2approxz12z70zzcfa_setupz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_nodezd2setupza2z12zd2envzb0zzcfa_setupz00,
		BgL_bgl_za762nodeza7d2setupza72459za7,
		BGl_z62nodezd2setupza2z12z00zzcfa_setupz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_setupz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_setupz00(long
		BgL_checksumz00_5367, char *BgL_fromz00_5368)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_setupz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_setupz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_setupz00();
					BGl_libraryzd2moduleszd2initz00zzcfa_setupz00();
					BGl_cnstzd2initzd2zzcfa_setupz00();
					BGl_importedzd2moduleszd2initz00zzcfa_setupz00();
					BGl_genericzd2initzd2zzcfa_setupz00();
					BGl_methodzd2initzd2zzcfa_setupz00();
					return BGl_toplevelzd2initzd2zzcfa_setupz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_setupz00()
	{
		{	/* Cfa/setup.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_setup");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_setup");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_setup");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_setup");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_setup");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_setup");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_setup");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "cfa_setup");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_setup");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_setupz00()
	{
		{	/* Cfa/setup.scm 15 */
			{	/* Cfa/setup.scm 15 */
				obj_t BgL_cportz00_5090;

				{	/* Cfa/setup.scm 15 */
					obj_t BgL_stringz00_5098;

					BgL_stringz00_5098 = BGl_string2402z00zzcfa_setupz00;
					{	/* Cfa/setup.scm 15 */
						obj_t BgL_startz00_5099;

						BgL_startz00_5099 = BINT(((long) 0));
						{	/* Cfa/setup.scm 15 */
							obj_t BgL_endz00_5100;

							BgL_endz00_5100 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_5098)));
							{	/* Cfa/setup.scm 15 */

								BgL_cportz00_5090 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_5098, BgL_startz00_5099, BgL_endz00_5100);
				}}}}
				{
					long BgL_iz00_5091;

					BgL_iz00_5091 = ((long) 6);
				BgL_loopz00_5092:
					if ((BgL_iz00_5091 == ((long) -1)))
						{	/* Cfa/setup.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/setup.scm 15 */
							{	/* Cfa/setup.scm 15 */
								obj_t BgL_arg2404z00_5094;

								{	/* Cfa/setup.scm 15 */

									{	/* Cfa/setup.scm 15 */
										obj_t BgL_locationz00_5096;

										BgL_locationz00_5096 = BBOOL(((bool_t) 0));
										{	/* Cfa/setup.scm 15 */

											BgL_arg2404z00_5094 =
												BGl_readz00zz__readerz00(BgL_cportz00_5090,
												BgL_locationz00_5096);
										}
									}
								}
								{	/* Cfa/setup.scm 15 */
									int BgL_tmpz00_5397;

									BgL_tmpz00_5397 = (int) (BgL_iz00_5091);
									CNST_TABLE_SET(BgL_tmpz00_5397, BgL_arg2404z00_5094);
							}}
							{	/* Cfa/setup.scm 15 */
								int BgL_auxz00_5097;

								BgL_auxz00_5097 = (int) ((BgL_iz00_5091 - ((long) 1)));
								{
									long BgL_iz00_5402;

									BgL_iz00_5402 = (long) (BgL_auxz00_5097);
									BgL_iz00_5091 = BgL_iz00_5402;
									goto BgL_loopz00_5092;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_setupz00()
	{
		{	/* Cfa/setup.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_setupz00()
	{
		{	/* Cfa/setup.scm 15 */
			return BUNSPEC;
		}

	}



/* set-initial-approx! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2initialzd2approxz12z12zzcfa_setupz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Cfa/setup.scm 38 */
			{
				obj_t BgL_l1726z00_3291;

				{	/* Cfa/setup.scm 40 */
					bool_t BgL_tmpz00_5405;

					BgL_l1726z00_3291 = BgL_globalsz00_3;
				BgL_zc3z04anonymousza31826ze3z87_3292:
					if (PAIRP(BgL_l1726z00_3291))
						{	/* Cfa/setup.scm 40 */
							{	/* Cfa/setup.scm 42 */
								obj_t BgL_globalz00_3294;

								BgL_globalz00_3294 = CAR(BgL_l1726z00_3291);
								{	/* Cfa/setup.scm 43 */
									BgL_valuez00_bglt BgL_funz00_3295;

									BgL_funz00_3295 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_globalz00_3294))))->
										BgL_valuez00);
									BGl_funzd2setupz12zc0zzcfa_setupz00(((BgL_funz00_bglt)
											BgL_funz00_3295), BgL_globalz00_3294);
									{	/* Cfa/setup.scm 45 */
										obj_t BgL_g1725z00_3296;

										BgL_g1725z00_3296 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_3295)))->BgL_argsz00);
										{
											obj_t BgL_l1723z00_3298;

											BgL_l1723z00_3298 = BgL_g1725z00_3296;
										BgL_zc3z04anonymousza31828ze3z87_3299:
											if (PAIRP(BgL_l1723z00_3298))
												{	/* Cfa/setup.scm 49 */
													{	/* Cfa/setup.scm 46 */
														obj_t BgL_localz00_3301;

														BgL_localz00_3301 = CAR(BgL_l1723z00_3298);
														{	/* Cfa/setup.scm 46 */
															BgL_reshapedzd2localzd2_bglt BgL_wide1172z00_3304;

															BgL_wide1172z00_3304 =
																((BgL_reshapedzd2localzd2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_reshapedzd2localzd2_bgl))));
															{	/* Cfa/setup.scm 46 */
																obj_t BgL_auxz00_5424;
																BgL_objectz00_bglt BgL_tmpz00_5420;

																BgL_auxz00_5424 =
																	((obj_t) BgL_wide1172z00_3304);
																BgL_tmpz00_5420 =
																	((BgL_objectz00_bglt)
																	((BgL_localz00_bglt)
																		((BgL_localz00_bglt) BgL_localz00_3301)));
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5420,
																	BgL_auxz00_5424);
															}
															((BgL_objectz00_bglt)
																((BgL_localz00_bglt)
																	((BgL_localz00_bglt) BgL_localz00_3301)));
															{	/* Cfa/setup.scm 46 */
																long BgL_arg1830z00_3305;

																{	/* Cfa/setup.scm 46 */
																	long BgL_res2259z00_4465;

																	BgL_res2259z00_4465 =
																		BGL_CLASS_INDEX
																		(BGl_reshapedzd2localzd2zzcfa_infoz00);
																	BgL_arg1830z00_3305 = BgL_res2259z00_4465;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt)
																		((BgL_localz00_bglt)
																			((BgL_localz00_bglt) BgL_localz00_3301))),
																	BgL_arg1830z00_3305);
															}
															((BgL_localz00_bglt)
																((BgL_localz00_bglt)
																	((BgL_localz00_bglt) BgL_localz00_3301)));
														}
														{
															BgL_reshapedzd2localzd2_bglt BgL_auxz00_5438;

															{
																obj_t BgL_auxz00_5439;

																{	/* Cfa/setup.scm 46 */
																	BgL_objectz00_bglt BgL_tmpz00_5440;

																	BgL_tmpz00_5440 =
																		((BgL_objectz00_bglt)
																		((BgL_localz00_bglt)
																			((BgL_localz00_bglt) BgL_localz00_3301)));
																	BgL_auxz00_5439 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_5440);
																}
																BgL_auxz00_5438 =
																	((BgL_reshapedzd2localzd2_bglt)
																	BgL_auxz00_5439);
															}
															((((BgL_reshapedzd2localzd2_bglt)
																		COBJECT(BgL_auxz00_5438))->
																	BgL_bindingzd2valuezd2) =
																((obj_t) BFALSE), BUNSPEC);
														}
														((BgL_localz00_bglt)
															((BgL_localz00_bglt) BgL_localz00_3301));
														{	/* Cfa/setup.scm 47 */
															BgL_valuez00_bglt BgL_arg1831z00_3307;

															BgL_arg1831z00_3307 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt)
																				BgL_localz00_3301))))->BgL_valuez00);
															BGl_variablezd2valuezd2setupz12z12zzcfa_setupz00
																(BgL_arg1831z00_3307,
																((BgL_variablez00_bglt) BgL_localz00_3301));
													}}
													{
														obj_t BgL_l1723z00_5454;

														BgL_l1723z00_5454 = CDR(BgL_l1723z00_3298);
														BgL_l1723z00_3298 = BgL_l1723z00_5454;
														goto BgL_zc3z04anonymousza31828ze3z87_3299;
													}
												}
											else
												{	/* Cfa/setup.scm 49 */
													((bool_t) 1);
												}
										}
									}
								}
								{	/* Cfa/setup.scm 50 */
									obj_t BgL_arg1833z00_3310;

									BgL_arg1833z00_3310 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt)
													(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_globalz00_bglt) BgL_globalz00_3294))))->
														BgL_valuez00))))->BgL_bodyz00);
									BGl_nodezd2setupz12zc0zzcfa_setupz00(((BgL_nodez00_bglt)
											BgL_arg1833z00_3310));
								}
							}
							{
								obj_t BgL_l1726z00_5463;

								BgL_l1726z00_5463 = CDR(BgL_l1726z00_3291);
								BgL_l1726z00_3291 = BgL_l1726z00_5463;
								goto BgL_zc3z04anonymousza31826ze3z87_3292;
							}
						}
					else
						{	/* Cfa/setup.scm 40 */
							BgL_tmpz00_5405 = ((bool_t) 1);
						}
					return BBOOL(BgL_tmpz00_5405);
				}
			}
		}

	}



/* &set-initial-approx! */
	obj_t BGl_z62setzd2initialzd2approxz12z70zzcfa_setupz00(obj_t BgL_envz00_4950,
		obj_t BgL_globalsz00_4951)
	{
		{	/* Cfa/setup.scm 38 */
			return
				BGl_setzd2initialzd2approxz12z12zzcfa_setupz00(BgL_globalsz00_4951);
		}

	}



/* alloc-type? */
	bool_t BGl_alloczd2typezf3z21zzcfa_setupz00(BgL_typez00_bglt BgL_typez00_10)
	{
		{	/* Cfa/setup.scm 111 */
			if ((((obj_t) BgL_typez00_10) == BGl_za2vectorza2z00zztype_cachez00))
				{	/* Cfa/setup.scm 113 */
					return ((bool_t) 1);
				}
			else
				{	/* Cfa/setup.scm 113 */
					if (
						(((obj_t) BgL_typez00_10) == BGl_za2procedureza2z00zztype_cachez00))
						{	/* Cfa/setup.scm 114 */
							return ((bool_t) 1);
						}
					else
						{	/* Cfa/setup.scm 114 */
							if (
								(((obj_t) BgL_typez00_10) ==
									BGl_za2structza2z00zztype_cachez00))
								{	/* Cfa/setup.scm 115 */
									return ((bool_t) 1);
								}
							else
								{	/* Cfa/setup.scm 115 */
									if (
										(((obj_t) BgL_typez00_10) ==
											BGl_za2pairza2z00zztype_cachez00))
										{	/* Cfa/setup.scm 116 */
											return BGl_pairzd2optimzf3z21zzcfa_pairz00();
										}
									else
										{	/* Cfa/setup.scm 116 */
											return ((bool_t) 0);
										}
								}
						}
				}
		}

	}



/* node-setup*! */
	BGL_EXPORTED_DEF obj_t BGl_nodezd2setupza2z12z62zzcfa_setupz00(obj_t
		BgL_nodeza2za2_55)
	{
		{	/* Cfa/setup.scm 486 */
			{
				obj_t BgL_l1740z00_3319;

				{	/* Cfa/setup.scm 487 */
					bool_t BgL_tmpz00_5480;

					BgL_l1740z00_3319 = BgL_nodeza2za2_55;
				BgL_zc3z04anonymousza31841ze3z87_3320:
					if (PAIRP(BgL_l1740z00_3319))
						{	/* Cfa/setup.scm 487 */
							{	/* Cfa/setup.scm 487 */
								obj_t BgL_arg1845z00_3322;

								BgL_arg1845z00_3322 = CAR(BgL_l1740z00_3319);
								BGl_nodezd2setupz12zc0zzcfa_setupz00(
									((BgL_nodez00_bglt) BgL_arg1845z00_3322));
							}
							{
								obj_t BgL_l1740z00_5486;

								BgL_l1740z00_5486 = CDR(BgL_l1740z00_3319);
								BgL_l1740z00_3319 = BgL_l1740z00_5486;
								goto BgL_zc3z04anonymousza31841ze3z87_3320;
							}
						}
					else
						{	/* Cfa/setup.scm 487 */
							BgL_tmpz00_5480 = ((bool_t) 1);
						}
					return BBOOL(BgL_tmpz00_5480);
				}
			}
		}

	}



/* &node-setup*! */
	obj_t BGl_z62nodezd2setupza2z12z00zzcfa_setupz00(obj_t BgL_envz00_4952,
		obj_t BgL_nodeza2za2_4953)
	{
		{	/* Cfa/setup.scm 486 */
			return BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_nodeza2za2_4953);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_setupz00()
	{
		{	/* Cfa/setup.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_setupz00()
	{
		{	/* Cfa/setup.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_proc2354z00zzcfa_setupz00, BGl_nodez00zzast_nodez00,
				BGl_string2355z00zzcfa_setupz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
				BGl_proc2356z00zzcfa_setupz00, BGl_valuez00zzast_varz00,
				BGl_string2357z00zzcfa_setupz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_funzd2setupz12zd2envz12zzcfa_setupz00,
				BGl_proc2358z00zzcfa_setupz00, BGl_funz00zzast_varz00,
				BGl_string2359z00zzcfa_setupz00);
		}

	}



/* &fun-setup!1779 */
	obj_t BGl_z62funzd2setupz121779za2zzcfa_setupz00(obj_t BgL_envz00_4957,
		obj_t BgL_funz00_4958, obj_t BgL_varz00_4959)
	{
		{	/* Cfa/setup.scm 232 */
			{	/* Cfa/setup.scm 233 */
				bool_t BgL_test2469z00_5493;

				if (BGl_isazf3zf3zz__objectz00(BgL_varz00_4959,
						BGl_globalz00zzast_varz00))
					{	/* Cfa/setup.scm 233 */
						if (BGl_isazf3zf3zz__objectz00(BgL_varz00_4959,
								BGl_reshapedzd2globalzd2zzcfa_infoz00))
							{	/* Cfa/setup.scm 233 */
								BgL_test2469z00_5493 = ((bool_t) 0);
							}
						else
							{	/* Cfa/setup.scm 233 */
								BgL_test2469z00_5493 = ((bool_t) 1);
							}
					}
				else
					{	/* Cfa/setup.scm 233 */
						BgL_test2469z00_5493 = ((bool_t) 0);
					}
				if (BgL_test2469z00_5493)
					{	/* Cfa/setup.scm 233 */
						{	/* Cfa/setup.scm 234 */
							BgL_reshapedzd2globalzd2_bglt BgL_wide1232z00_5104;

							BgL_wide1232z00_5104 =
								((BgL_reshapedzd2globalzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_reshapedzd2globalzd2_bgl))));
							{	/* Cfa/setup.scm 234 */
								obj_t BgL_auxz00_5503;
								BgL_objectz00_bglt BgL_tmpz00_5499;

								BgL_auxz00_5503 = ((obj_t) BgL_wide1232z00_5104);
								BgL_tmpz00_5499 =
									((BgL_objectz00_bglt)
									((BgL_globalz00_bglt)
										((BgL_globalz00_bglt) BgL_varz00_4959)));
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5499, BgL_auxz00_5503);
							}
							((BgL_objectz00_bglt)
								((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_varz00_4959)));
							{	/* Cfa/setup.scm 234 */
								long BgL_arg1855z00_5105;

								{	/* Cfa/setup.scm 234 */
									long BgL_res2263z00_5106;

									BgL_res2263z00_5106 =
										BGL_CLASS_INDEX(BGl_reshapedzd2globalzd2zzcfa_infoz00);
									BgL_arg1855z00_5105 = BgL_res2263z00_5106;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt)
										((BgL_globalz00_bglt)
											((BgL_globalz00_bglt) BgL_varz00_4959))),
									BgL_arg1855z00_5105);
							}
							((BgL_globalz00_bglt)
								((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_varz00_4959)));
						}
						((obj_t)
							((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_varz00_4959)));
					}
				else
					{	/* Cfa/setup.scm 233 */
						BFALSE;
					}
			}
			return BUNSPEC;
		}

	}



/* &variable-value-setup1755 */
	obj_t BGl_z62variablezd2valuezd2setup1755z62zzcfa_setupz00(obj_t
		BgL_envz00_4960, obj_t BgL_valuez00_4961, obj_t BgL_variablez00_4962)
	{
		{	/* Cfa/setup.scm 122 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string2360z00zzcfa_setupz00,
				((obj_t) ((BgL_valuez00_bglt) BgL_valuez00_4961)));
		}

	}



/* &node-setup!1742 */
	obj_t BGl_z62nodezd2setupz121742za2zzcfa_setupz00(obj_t BgL_envz00_4963,
		obj_t BgL_nodez00_4964)
	{
		{	/* Cfa/setup.scm 56 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
				BGl_string2360z00zzcfa_setupz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_4964)));
		}

	}



/* node-setup! */
	BGL_EXPORTED_DEF obj_t BGl_nodezd2setupz12zc0zzcfa_setupz00(BgL_nodez00_bglt
		BgL_nodez00_4)
	{
		{	/* Cfa/setup.scm 56 */
			{	/* Cfa/setup.scm 56 */
				obj_t BgL_method1744z00_3349;

				{	/* Cfa/setup.scm 56 */
					obj_t BgL_res2274z00_4520;

					{	/* Cfa/setup.scm 56 */
						long BgL_objzd2classzd2numz00_4485;

						{	/* Cfa/setup.scm 56 */
							long BgL_res2264z00_4488;

							BgL_res2264z00_4488 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_4));
							BgL_objzd2classzd2numz00_4485 = BgL_res2264z00_4488;
						}
						{	/* Cfa/setup.scm 56 */
							obj_t BgL_arg1813z00_4486;

							BgL_arg1813z00_4486 =
								PROCEDURE_REF(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
								(int) (((long) 1)));
							{	/* Cfa/setup.scm 56 */
								int BgL_offsetz00_4490;

								BgL_offsetz00_4490 = (int) (BgL_objzd2classzd2numz00_4485);
								{	/* Cfa/setup.scm 56 */
									long BgL_offsetz00_4491;

									BgL_offsetz00_4491 =
										((long) (BgL_offsetz00_4490) - OBJECT_TYPE);
									{	/* Cfa/setup.scm 56 */
										long BgL_modz00_4492;

										BgL_modz00_4492 =
											(BgL_offsetz00_4491 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/setup.scm 56 */
											long BgL_restz00_4494;

											BgL_restz00_4494 =
												(BgL_offsetz00_4491 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/setup.scm 56 */

												{	/* Cfa/setup.scm 56 */
													obj_t BgL_bucketz00_4496;

													BgL_bucketz00_4496 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4486), BgL_modz00_4492);
													BgL_res2274z00_4520 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4496), BgL_restz00_4494);
					}}}}}}}}
					BgL_method1744z00_3349 = BgL_res2274z00_4520;
				}
				return
					PROCEDURE_ENTRY(BgL_method1744z00_3349) (BgL_method1744z00_3349,
					((obj_t) BgL_nodez00_4), BEOA);
			}
		}

	}



/* &node-setup! */
	obj_t BGl_z62nodezd2setupz12za2zzcfa_setupz00(obj_t BgL_envz00_4965,
		obj_t BgL_nodez00_4966)
	{
		{	/* Cfa/setup.scm 56 */
			return
				BGl_nodezd2setupz12zc0zzcfa_setupz00(
				((BgL_nodez00_bglt) BgL_nodez00_4966));
		}

	}



/* variable-value-setup! */
	obj_t BGl_variablezd2valuezd2setupz12z12zzcfa_setupz00(BgL_valuez00_bglt
		BgL_valuez00_11, BgL_variablez00_bglt BgL_variablez00_12)
	{
		{	/* Cfa/setup.scm 122 */
			{	/* Cfa/setup.scm 122 */
				obj_t BgL_method1756z00_3350;

				{	/* Cfa/setup.scm 122 */
					obj_t BgL_res2285z00_4557;

					{	/* Cfa/setup.scm 122 */
						long BgL_objzd2classzd2numz00_4522;

						{	/* Cfa/setup.scm 122 */
							long BgL_res2275z00_4525;

							BgL_res2275z00_4525 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_valuez00_11));
							BgL_objzd2classzd2numz00_4522 = BgL_res2275z00_4525;
						}
						{	/* Cfa/setup.scm 122 */
							obj_t BgL_arg1813z00_4523;

							BgL_arg1813z00_4523 =
								PROCEDURE_REF
								(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
								(int) (((long) 1)));
							{	/* Cfa/setup.scm 122 */
								int BgL_offsetz00_4527;

								BgL_offsetz00_4527 = (int) (BgL_objzd2classzd2numz00_4522);
								{	/* Cfa/setup.scm 122 */
									long BgL_offsetz00_4528;

									BgL_offsetz00_4528 =
										((long) (BgL_offsetz00_4527) - OBJECT_TYPE);
									{	/* Cfa/setup.scm 122 */
										long BgL_modz00_4529;

										BgL_modz00_4529 =
											(BgL_offsetz00_4528 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/setup.scm 122 */
											long BgL_restz00_4531;

											BgL_restz00_4531 =
												(BgL_offsetz00_4528 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/setup.scm 122 */

												{	/* Cfa/setup.scm 122 */
													obj_t BgL_bucketz00_4533;

													BgL_bucketz00_4533 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4523), BgL_modz00_4529);
													BgL_res2285z00_4557 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4533), BgL_restz00_4531);
					}}}}}}}}
					BgL_method1756z00_3350 = BgL_res2285z00_4557;
				}
				return
					PROCEDURE_ENTRY(BgL_method1756z00_3350) (BgL_method1756z00_3350,
					((obj_t) BgL_valuez00_11), ((obj_t) BgL_variablez00_12), BEOA);
			}
		}

	}



/* &variable-value-setup! */
	obj_t BGl_z62variablezd2valuezd2setupz12z70zzcfa_setupz00(obj_t
		BgL_envz00_4967, obj_t BgL_valuez00_4968, obj_t BgL_variablez00_4969)
	{
		{	/* Cfa/setup.scm 122 */
			return
				BGl_variablezd2valuezd2setupz12z12zzcfa_setupz00(
				((BgL_valuez00_bglt) BgL_valuez00_4968),
				((BgL_variablez00_bglt) BgL_variablez00_4969));
		}

	}



/* fun-setup! */
	obj_t BGl_funzd2setupz12zc0zzcfa_setupz00(BgL_funz00_bglt BgL_funz00_31,
		obj_t BgL_varz00_32)
	{
		{	/* Cfa/setup.scm 232 */
			{	/* Cfa/setup.scm 232 */
				obj_t BgL_method1780z00_3351;

				{	/* Cfa/setup.scm 232 */
					obj_t BgL_res2296z00_4594;

					{	/* Cfa/setup.scm 232 */
						long BgL_objzd2classzd2numz00_4559;

						{	/* Cfa/setup.scm 232 */
							long BgL_res2286z00_4562;

							BgL_res2286z00_4562 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_funz00_31));
							BgL_objzd2classzd2numz00_4559 = BgL_res2286z00_4562;
						}
						{	/* Cfa/setup.scm 232 */
							obj_t BgL_arg1813z00_4560;

							BgL_arg1813z00_4560 =
								PROCEDURE_REF(BGl_funzd2setupz12zd2envz12zzcfa_setupz00,
								(int) (((long) 1)));
							{	/* Cfa/setup.scm 232 */
								int BgL_offsetz00_4564;

								BgL_offsetz00_4564 = (int) (BgL_objzd2classzd2numz00_4559);
								{	/* Cfa/setup.scm 232 */
									long BgL_offsetz00_4565;

									BgL_offsetz00_4565 =
										((long) (BgL_offsetz00_4564) - OBJECT_TYPE);
									{	/* Cfa/setup.scm 232 */
										long BgL_modz00_4566;

										BgL_modz00_4566 =
											(BgL_offsetz00_4565 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/setup.scm 232 */
											long BgL_restz00_4568;

											BgL_restz00_4568 =
												(BgL_offsetz00_4565 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/setup.scm 232 */

												{	/* Cfa/setup.scm 232 */
													obj_t BgL_bucketz00_4570;

													BgL_bucketz00_4570 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4560), BgL_modz00_4566);
													BgL_res2296z00_4594 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4570), BgL_restz00_4568);
					}}}}}}}}
					BgL_method1780z00_3351 = BgL_res2296z00_4594;
				}
				return
					PROCEDURE_ENTRY(BgL_method1780z00_3351) (BgL_method1780z00_3351,
					((obj_t) BgL_funz00_31), BgL_varz00_32, BEOA);
			}
		}

	}



/* &fun-setup! */
	obj_t BGl_z62funzd2setupz12za2zzcfa_setupz00(obj_t BgL_envz00_4970,
		obj_t BgL_funz00_4971, obj_t BgL_varz00_4972)
	{
		{	/* Cfa/setup.scm 232 */
			return
				BGl_funzd2setupz12zc0zzcfa_setupz00(
				((BgL_funz00_bglt) BgL_funz00_4971), BgL_varz00_4972);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_setupz00()
	{
		{	/* Cfa/setup.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_literalz00zzast_nodez00, BGl_proc2361z00zzcfa_setupz00,
				BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_patchz00zzast_nodez00,
				BGl_proc2363z00zzcfa_setupz00, BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_kwotez00zzast_nodez00,
				BGl_proc2364z00zzcfa_setupz00, BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_kwotezf2nodezf2zzcfa_infoz00, BGl_proc2365z00zzcfa_setupz00,
				BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_varz00zzast_nodez00,
				BGl_proc2366z00zzcfa_setupz00, BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
				BGl_sfunz00zzast_varz00, BGl_proc2367z00zzcfa_setupz00,
				BGl_string2368z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
				BGl_svarz00zzast_varz00, BGl_proc2369z00zzcfa_setupz00,
				BGl_string2368z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
				BGl_prezd2clozd2envz00zzcfa_infoz00, BGl_proc2370z00zzcfa_setupz00,
				BGl_string2368z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
				BGl_sexitz00zzast_varz00, BGl_proc2371z00zzcfa_setupz00,
				BGl_string2368z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
				BGl_scnstzf2Cinfozf2zzcfa_infoz00, BGl_proc2372z00zzcfa_setupz00,
				BGl_string2368z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
				BGl_scnstz00zzast_varz00, BGl_proc2373z00zzcfa_setupz00,
				BGl_string2368z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
				BGl_cvarz00zzast_varz00, BGl_proc2374z00zzcfa_setupz00,
				BGl_string2368z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_closurez00zzast_nodez00, BGl_proc2375z00zzcfa_setupz00,
				BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_sequencez00zzast_nodez00, BGl_proc2376z00zzcfa_setupz00,
				BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_syncz00zzast_nodez00,
				BGl_proc2377z00zzcfa_setupz00, BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_appz00zzast_nodez00,
				BGl_proc2378z00zzcfa_setupz00, BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_funzd2setupz12zd2envz12zzcfa_setupz00, BGl_sfunz00zzast_varz00,
				BGl_proc2379z00zzcfa_setupz00, BGl_string2380z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_funzd2setupz12zd2envz12zzcfa_setupz00, BGl_cfunz00zzast_varz00,
				BGl_proc2381z00zzcfa_setupz00, BGl_string2380z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc2382z00zzcfa_setupz00,
				BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_funcallz00zzast_nodez00, BGl_proc2383z00zzcfa_setupz00,
				BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_pragmaz00zzast_nodez00,
				BGl_proc2384z00zzcfa_setupz00, BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_genpatchidz00zzast_nodez00, BGl_proc2385z00zzcfa_setupz00,
				BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_getfieldz00zzast_nodez00, BGl_proc2386z00zzcfa_setupz00,
				BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_setfieldz00zzast_nodez00, BGl_proc2387z00zzcfa_setupz00,
				BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_newz00zzast_nodez00,
				BGl_proc2388z00zzcfa_setupz00, BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_instanceofz00zzast_nodez00, BGl_proc2389z00zzcfa_setupz00,
				BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_castzd2nullzd2zzast_nodez00, BGl_proc2390z00zzcfa_setupz00,
				BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_castz00zzast_nodez00,
				BGl_proc2391z00zzcfa_setupz00, BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_setqz00zzast_nodez00,
				BGl_proc2392z00zzcfa_setupz00, BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc2393z00zzcfa_setupz00,
				BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_failz00zzast_nodez00,
				BGl_proc2394z00zzcfa_setupz00, BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_switchz00zzast_nodez00,
				BGl_proc2395z00zzcfa_setupz00, BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc2396z00zzcfa_setupz00,
				BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc2397z00zzcfa_setupz00,
				BGl_string2362z00zzcfa_setupz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc2398z00zzcfa_setupz00,
				BGl_string2362z00zzcfa_setupz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc2399z00zzcfa_setupz00,
				BGl_string2362z00zzcfa_setupz00);
		}

	}



/* &node-setup!-jump-ex-1820 */
	obj_t BGl_z62nodezd2setupz12zd2jumpzd2exzd21820z70zzcfa_setupz00(obj_t
		BgL_envz00_5009, obj_t BgL_nodez00_5010)
	{
		{	/* Cfa/setup.scm 475 */
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5010)))->BgL_exitz00));
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5010)))->BgL_valuez00));
			{	/* Cfa/setup.scm 479 */
				BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_wide1355z00_5111;

				BgL_wide1355z00_5111 =
					((BgL_jumpzd2exzd2itzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_jumpzd2exzd2itzf2cinfozf2_bgl))));
				{	/* Cfa/setup.scm 479 */
					obj_t BgL_auxz00_5675;
					BgL_objectz00_bglt BgL_tmpz00_5671;

					BgL_auxz00_5675 = ((obj_t) BgL_wide1355z00_5111);
					BgL_tmpz00_5671 =
						((BgL_objectz00_bglt)
						((BgL_jumpzd2exzd2itz00_bglt)
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5010)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5671, BgL_auxz00_5675);
				}
				((BgL_objectz00_bglt)
					((BgL_jumpzd2exzd2itz00_bglt)
						((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5010)));
				{	/* Cfa/setup.scm 479 */
					long BgL_arg2061z00_5112;

					{	/* Cfa/setup.scm 479 */
						long BgL_res2353z00_5113;

						BgL_res2353z00_5113 =
							BGL_CLASS_INDEX(BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00);
						BgL_arg2061z00_5112 = BgL_res2353z00_5113;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_jumpzd2exzd2itz00_bglt)
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5010))),
						BgL_arg2061z00_5112);
				}
				((BgL_jumpzd2exzd2itz00_bglt)
					((BgL_jumpzd2exzd2itz00_bglt)
						((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5010)));
			}
			{
				BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_auxz00_5689;

				{
					obj_t BgL_auxz00_5690;

					{	/* Cfa/setup.scm 480 */
						BgL_objectz00_bglt BgL_tmpz00_5691;

						BgL_tmpz00_5691 =
							((BgL_objectz00_bglt)
							((BgL_jumpzd2exzd2itz00_bglt)
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5010)));
						BgL_auxz00_5690 = BGL_OBJECT_WIDENING(BgL_tmpz00_5691);
					}
					BgL_auxz00_5689 =
						((BgL_jumpzd2exzd2itzf2cinfozf2_bglt) BgL_auxz00_5690);
				}
				((((BgL_jumpzd2exzd2itzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5689))->
						BgL_approxz00) =
					((BgL_approxz00_bglt)
						BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
								BGl_za2objza2z00zztype_cachez00))), BUNSPEC);
			}
			((BgL_jumpzd2exzd2itz00_bglt)
				((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5010));
			{	/* Cfa/setup.scm 481 */
				BgL_approxz00_bglt BgL_arg2062z00_5114;

				{
					BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_auxz00_5702;

					{
						obj_t BgL_auxz00_5703;

						{	/* Cfa/setup.scm 481 */
							BgL_objectz00_bglt BgL_tmpz00_5704;

							BgL_tmpz00_5704 =
								((BgL_objectz00_bglt)
								((BgL_jumpzd2exzd2itz00_bglt)
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_5010)));
							BgL_auxz00_5703 = BGL_OBJECT_WIDENING(BgL_tmpz00_5704);
						}
						BgL_auxz00_5702 =
							((BgL_jumpzd2exzd2itzf2cinfozf2_bglt) BgL_auxz00_5703);
					}
					BgL_arg2062z00_5114 =
						(((BgL_jumpzd2exzd2itzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5702))->
						BgL_approxz00);
				}
				return BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg2062z00_5114);
			}
		}

	}



/* &node-setup!-set-ex-i1818 */
	obj_t BGl_z62nodezd2setupz12zd2setzd2exzd2i1818z70zzcfa_setupz00(obj_t
		BgL_envz00_5011, obj_t BgL_nodez00_5012)
	{
		{	/* Cfa/setup.scm 463 */
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5012)))->BgL_bodyz00));
			{	/* Cfa/setup.scm 466 */
				BgL_varz00_bglt BgL_arg2051z00_5116;

				BgL_arg2051z00_5116 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5012)))->BgL_varz00);
				BGl_nodezd2setupz12zc0zzcfa_setupz00(
					((BgL_nodez00_bglt) BgL_arg2051z00_5116));
			}
			{	/* Cfa/setup.scm 467 */
				BgL_localz00_bglt BgL_tmp1344z00_5117;

				BgL_tmp1344z00_5117 =
					((BgL_localz00_bglt)
					(((BgL_varz00_bglt) COBJECT(
								(((BgL_setzd2exzd2itz00_bglt) COBJECT(
											((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5012)))->
									BgL_varz00)))->BgL_variablez00));
				{	/* Cfa/setup.scm 467 */
					BgL_reshapedzd2localzd2_bglt BgL_wide1346z00_5118;

					BgL_wide1346z00_5118 =
						((BgL_reshapedzd2localzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_reshapedzd2localzd2_bgl))));
					{	/* Cfa/setup.scm 467 */
						obj_t BgL_auxz00_5727;
						BgL_objectz00_bglt BgL_tmpz00_5724;

						BgL_auxz00_5727 = ((obj_t) BgL_wide1346z00_5118);
						BgL_tmpz00_5724 =
							((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_tmp1344z00_5117));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5724, BgL_auxz00_5727);
					}
					((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_tmp1344z00_5117));
					{	/* Cfa/setup.scm 467 */
						long BgL_arg2053z00_5119;

						{	/* Cfa/setup.scm 467 */
							long BgL_res2351z00_5120;

							BgL_res2351z00_5120 =
								BGL_CLASS_INDEX(BGl_reshapedzd2localzd2zzcfa_infoz00);
							BgL_arg2053z00_5119 = BgL_res2351z00_5120;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_localz00_bglt) BgL_tmp1344z00_5117)),
							BgL_arg2053z00_5119);
					}
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_tmp1344z00_5117));
				}
				{
					BgL_reshapedzd2localzd2_bglt BgL_auxz00_5738;

					{
						obj_t BgL_auxz00_5739;

						{	/* Cfa/setup.scm 467 */
							BgL_objectz00_bglt BgL_tmpz00_5740;

							BgL_tmpz00_5740 =
								((BgL_objectz00_bglt)
								((BgL_localz00_bglt) BgL_tmp1344z00_5117));
							BgL_auxz00_5739 = BGL_OBJECT_WIDENING(BgL_tmpz00_5740);
						}
						BgL_auxz00_5738 = ((BgL_reshapedzd2localzd2_bglt) BgL_auxz00_5739);
					}
					((((BgL_reshapedzd2localzd2_bglt) COBJECT(BgL_auxz00_5738))->
							BgL_bindingzd2valuezd2) = ((obj_t) BFALSE), BUNSPEC);
				}
				((BgL_localz00_bglt) BgL_tmp1344z00_5117);
			}
			{	/* Cfa/setup.scm 468 */
				BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_wide1350z00_5121;

				BgL_wide1350z00_5121 =
					((BgL_setzd2exzd2itzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_setzd2exzd2itzf2cinfozf2_bgl))));
				{	/* Cfa/setup.scm 468 */
					obj_t BgL_auxz00_5752;
					BgL_objectz00_bglt BgL_tmpz00_5748;

					BgL_auxz00_5752 = ((obj_t) BgL_wide1350z00_5121);
					BgL_tmpz00_5748 =
						((BgL_objectz00_bglt)
						((BgL_setzd2exzd2itz00_bglt)
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5012)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5748, BgL_auxz00_5752);
				}
				((BgL_objectz00_bglt)
					((BgL_setzd2exzd2itz00_bglt)
						((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5012)));
				{	/* Cfa/setup.scm 468 */
					long BgL_arg2056z00_5122;

					{	/* Cfa/setup.scm 468 */
						long BgL_res2352z00_5123;

						BgL_res2352z00_5123 =
							BGL_CLASS_INDEX(BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00);
						BgL_arg2056z00_5122 = BgL_res2352z00_5123;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_setzd2exzd2itz00_bglt)
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5012))),
						BgL_arg2056z00_5122);
				}
				((BgL_setzd2exzd2itz00_bglt)
					((BgL_setzd2exzd2itz00_bglt)
						((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5012)));
			}
			{
				BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_auxz00_5766;

				{
					obj_t BgL_auxz00_5767;

					{	/* Cfa/setup.scm 469 */
						BgL_objectz00_bglt BgL_tmpz00_5768;

						BgL_tmpz00_5768 =
							((BgL_objectz00_bglt)
							((BgL_setzd2exzd2itz00_bglt)
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5012)));
						BgL_auxz00_5767 = BGL_OBJECT_WIDENING(BgL_tmpz00_5768);
					}
					BgL_auxz00_5766 =
						((BgL_setzd2exzd2itzf2cinfozf2_bglt) BgL_auxz00_5767);
				}
				((((BgL_setzd2exzd2itzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5766))->
						BgL_approxz00) =
					((BgL_approxz00_bglt)
						BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
								BGl_za2objza2z00zztype_cachez00))), BUNSPEC);
			}
			((BgL_setzd2exzd2itz00_bglt)
				((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5012));
			{	/* Cfa/setup.scm 470 */
				BgL_approxz00_bglt BgL_arg2057z00_5124;

				{
					BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_auxz00_5779;

					{
						obj_t BgL_auxz00_5780;

						{	/* Cfa/setup.scm 470 */
							BgL_objectz00_bglt BgL_tmpz00_5781;

							BgL_tmpz00_5781 =
								((BgL_objectz00_bglt)
								((BgL_setzd2exzd2itz00_bglt)
									((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_5012)));
							BgL_auxz00_5780 = BGL_OBJECT_WIDENING(BgL_tmpz00_5781);
						}
						BgL_auxz00_5779 =
							((BgL_setzd2exzd2itzf2cinfozf2_bglt) BgL_auxz00_5780);
					}
					BgL_arg2057z00_5124 =
						(((BgL_setzd2exzd2itzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5779))->
						BgL_approxz00);
				}
				return BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg2057z00_5124);
			}
		}

	}



/* &node-setup!-let-var1816 */
	obj_t BGl_z62nodezd2setupz12zd2letzd2var1816za2zzcfa_setupz00(obj_t
		BgL_envz00_5013, obj_t BgL_nodez00_5014)
	{
		{	/* Cfa/setup.scm 436 */
			{	/* Cfa/setup.scm 439 */
				obj_t BgL_g1739z00_5126;

				BgL_g1739z00_5126 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_5014)))->BgL_bindingsz00);
				{
					obj_t BgL_l1737z00_5128;

					BgL_l1737z00_5128 = BgL_g1739z00_5126;
				BgL_zc3z04anonymousza32040ze3z87_5127:
					if (PAIRP(BgL_l1737z00_5128))
						{	/* Cfa/setup.scm 439 */
							{	/* Cfa/setup.scm 440 */
								obj_t BgL_bindingz00_5129;

								BgL_bindingz00_5129 = CAR(BgL_l1737z00_5128);
								{	/* Cfa/setup.scm 440 */
									obj_t BgL_varz00_5130;
									obj_t BgL_valz00_5131;

									BgL_varz00_5130 = CAR(((obj_t) BgL_bindingz00_5129));
									BgL_valz00_5131 = CDR(((obj_t) BgL_bindingz00_5129));
									{	/* Cfa/setup.scm 442 */
										BgL_valuez00_bglt BgL_arg2043z00_5132;

										BgL_arg2043z00_5132 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt) BgL_varz00_5130))))->
											BgL_valuez00);
										BGl_variablezd2valuezd2setupz12z12zzcfa_setupz00
											(BgL_arg2043z00_5132,
											((BgL_variablez00_bglt) BgL_varz00_5130));
									}
									BGl_nodezd2setupz12zc0zzcfa_setupz00(
										((BgL_nodez00_bglt) BgL_valz00_5131));
									{	/* Cfa/setup.scm 447 */
										BgL_reshapedzd2localzd2_bglt BgL_wide1341z00_5133;

										BgL_wide1341z00_5133 =
											((BgL_reshapedzd2localzd2_bglt)
											BOBJECT(GC_MALLOC(sizeof(struct
														BgL_reshapedzd2localzd2_bgl))));
										{	/* Cfa/setup.scm 447 */
											obj_t BgL_auxz00_5810;
											BgL_objectz00_bglt BgL_tmpz00_5806;

											BgL_auxz00_5810 = ((obj_t) BgL_wide1341z00_5133);
											BgL_tmpz00_5806 =
												((BgL_objectz00_bglt)
												((BgL_localz00_bglt)
													((BgL_localz00_bglt) BgL_varz00_5130)));
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5806, BgL_auxz00_5810);
										}
										((BgL_objectz00_bglt)
											((BgL_localz00_bglt)
												((BgL_localz00_bglt) BgL_varz00_5130)));
										{	/* Cfa/setup.scm 447 */
											long BgL_arg2044z00_5134;

											{	/* Cfa/setup.scm 447 */
												long BgL_res2350z00_5135;

												BgL_res2350z00_5135 =
													BGL_CLASS_INDEX(BGl_reshapedzd2localzd2zzcfa_infoz00);
												BgL_arg2044z00_5134 = BgL_res2350z00_5135;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt)
													((BgL_localz00_bglt)
														((BgL_localz00_bglt) BgL_varz00_5130))),
												BgL_arg2044z00_5134);
										}
										((BgL_localz00_bglt)
											((BgL_localz00_bglt)
												((BgL_localz00_bglt) BgL_varz00_5130)));
									}
									{
										obj_t BgL_auxz00_5832;
										BgL_reshapedzd2localzd2_bglt BgL_auxz00_5824;

										if (
											((((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt) BgL_varz00_5130))))->
													BgL_accessz00) == CNST_TABLE_REF(((long) 2))))
											{	/* Cfa/setup.scm 448 */
												BgL_auxz00_5832 = BgL_valz00_5131;
											}
										else
											{	/* Cfa/setup.scm 448 */
												BgL_auxz00_5832 = BFALSE;
											}
										{
											obj_t BgL_auxz00_5825;

											{	/* Cfa/setup.scm 448 */
												BgL_objectz00_bglt BgL_tmpz00_5826;

												BgL_tmpz00_5826 =
													((BgL_objectz00_bglt)
													((BgL_localz00_bglt)
														((BgL_localz00_bglt) BgL_varz00_5130)));
												BgL_auxz00_5825 = BGL_OBJECT_WIDENING(BgL_tmpz00_5826);
											}
											BgL_auxz00_5824 =
												((BgL_reshapedzd2localzd2_bglt) BgL_auxz00_5825);
										}
										((((BgL_reshapedzd2localzd2_bglt)
													COBJECT(BgL_auxz00_5824))->BgL_bindingzd2valuezd2) =
											((obj_t) BgL_auxz00_5832), BUNSPEC);
									}
									((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_varz00_5130));
									BNIL;
								}
							}
							{
								obj_t BgL_l1737z00_5842;

								BgL_l1737z00_5842 = CDR(BgL_l1737z00_5128);
								BgL_l1737z00_5128 = BgL_l1737z00_5842;
								goto BgL_zc3z04anonymousza32040ze3z87_5127;
							}
						}
					else
						{	/* Cfa/setup.scm 439 */
							((bool_t) 1);
						}
				}
			}
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_5014)))->BgL_bodyz00));
			return BNIL;
		}

	}



/* &node-setup!-let-fun1814 */
	obj_t BGl_z62nodezd2setupz12zd2letzd2fun1814za2zzcfa_setupz00(obj_t
		BgL_envz00_5015, obj_t BgL_nodez00_5016)
	{
		{	/* Cfa/setup.scm 419 */
			{	/* Cfa/setup.scm 421 */
				obj_t BgL_g1736z00_5137;

				BgL_g1736z00_5137 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_5016)))->BgL_localsz00);
				{
					obj_t BgL_l1734z00_5139;

					BgL_l1734z00_5139 = BgL_g1736z00_5137;
				BgL_zc3z04anonymousza32029ze3z87_5138:
					if (PAIRP(BgL_l1734z00_5139))
						{	/* Cfa/setup.scm 421 */
							{	/* Cfa/setup.scm 422 */
								obj_t BgL_lz00_5140;

								BgL_lz00_5140 = CAR(BgL_l1734z00_5139);
								{	/* Cfa/setup.scm 422 */
									BgL_reshapedzd2localzd2_bglt BgL_wide1332z00_5141;

									BgL_wide1332z00_5141 =
										((BgL_reshapedzd2localzd2_bglt)
										BOBJECT(GC_MALLOC(sizeof(struct
													BgL_reshapedzd2localzd2_bgl))));
									{	/* Cfa/setup.scm 422 */
										obj_t BgL_auxz00_5857;
										BgL_objectz00_bglt BgL_tmpz00_5853;

										BgL_auxz00_5857 = ((obj_t) BgL_wide1332z00_5141);
										BgL_tmpz00_5853 =
											((BgL_objectz00_bglt)
											((BgL_localz00_bglt)
												((BgL_localz00_bglt) BgL_lz00_5140)));
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5853, BgL_auxz00_5857);
									}
									((BgL_objectz00_bglt)
										((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_lz00_5140)));
									{	/* Cfa/setup.scm 422 */
										long BgL_arg2031z00_5142;

										{	/* Cfa/setup.scm 422 */
											long BgL_res2346z00_5143;

											BgL_res2346z00_5143 =
												BGL_CLASS_INDEX(BGl_reshapedzd2localzd2zzcfa_infoz00);
											BgL_arg2031z00_5142 = BgL_res2346z00_5143;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt)
												((BgL_localz00_bglt)
													((BgL_localz00_bglt) BgL_lz00_5140))),
											BgL_arg2031z00_5142);
									}
									((BgL_localz00_bglt)
										((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_lz00_5140)));
								}
								{
									BgL_reshapedzd2localzd2_bglt BgL_auxz00_5871;

									{
										obj_t BgL_auxz00_5872;

										{	/* Cfa/setup.scm 422 */
											BgL_objectz00_bglt BgL_tmpz00_5873;

											BgL_tmpz00_5873 =
												((BgL_objectz00_bglt)
												((BgL_localz00_bglt)
													((BgL_localz00_bglt) BgL_lz00_5140)));
											BgL_auxz00_5872 = BGL_OBJECT_WIDENING(BgL_tmpz00_5873);
										}
										BgL_auxz00_5871 =
											((BgL_reshapedzd2localzd2_bglt) BgL_auxz00_5872);
									}
									((((BgL_reshapedzd2localzd2_bglt) COBJECT(BgL_auxz00_5871))->
											BgL_bindingzd2valuezd2) = ((obj_t) BFALSE), BUNSPEC);
								}
								((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_lz00_5140));
								{	/* Cfa/setup.scm 423 */
									BgL_valuez00_bglt BgL_funz00_5144;

									BgL_funz00_5144 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_lz00_5140))))->BgL_valuez00);
									{	/* Cfa/setup.scm 424 */
										obj_t BgL_g1733z00_5145;

										BgL_g1733z00_5145 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_5144)))->BgL_argsz00);
										{
											obj_t BgL_l1731z00_5147;

											BgL_l1731z00_5147 = BgL_g1733z00_5145;
										BgL_zc3z04anonymousza32032ze3z87_5146:
											if (PAIRP(BgL_l1731z00_5147))
												{	/* Cfa/setup.scm 428 */
													{	/* Cfa/setup.scm 425 */
														obj_t BgL_localz00_5148;

														BgL_localz00_5148 = CAR(BgL_l1731z00_5147);
														{	/* Cfa/setup.scm 425 */
															BgL_reshapedzd2localzd2_bglt BgL_wide1336z00_5149;

															BgL_wide1336z00_5149 =
																((BgL_reshapedzd2localzd2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_reshapedzd2localzd2_bgl))));
															{	/* Cfa/setup.scm 425 */
																obj_t BgL_auxz00_5895;
																BgL_objectz00_bglt BgL_tmpz00_5891;

																BgL_auxz00_5895 =
																	((obj_t) BgL_wide1336z00_5149);
																BgL_tmpz00_5891 =
																	((BgL_objectz00_bglt)
																	((BgL_localz00_bglt)
																		((BgL_localz00_bglt) BgL_localz00_5148)));
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5891,
																	BgL_auxz00_5895);
															}
															((BgL_objectz00_bglt)
																((BgL_localz00_bglt)
																	((BgL_localz00_bglt) BgL_localz00_5148)));
															{	/* Cfa/setup.scm 425 */
																long BgL_arg2034z00_5150;

																{	/* Cfa/setup.scm 425 */
																	long BgL_res2348z00_5151;

																	BgL_res2348z00_5151 =
																		BGL_CLASS_INDEX
																		(BGl_reshapedzd2localzd2zzcfa_infoz00);
																	BgL_arg2034z00_5150 = BgL_res2348z00_5151;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt)
																		((BgL_localz00_bglt)
																			((BgL_localz00_bglt) BgL_localz00_5148))),
																	BgL_arg2034z00_5150);
															}
															((BgL_localz00_bglt)
																((BgL_localz00_bglt)
																	((BgL_localz00_bglt) BgL_localz00_5148)));
														}
														{
															BgL_reshapedzd2localzd2_bglt BgL_auxz00_5909;

															{
																obj_t BgL_auxz00_5910;

																{	/* Cfa/setup.scm 425 */
																	BgL_objectz00_bglt BgL_tmpz00_5911;

																	BgL_tmpz00_5911 =
																		((BgL_objectz00_bglt)
																		((BgL_localz00_bglt)
																			((BgL_localz00_bglt) BgL_localz00_5148)));
																	BgL_auxz00_5910 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_5911);
																}
																BgL_auxz00_5909 =
																	((BgL_reshapedzd2localzd2_bglt)
																	BgL_auxz00_5910);
															}
															((((BgL_reshapedzd2localzd2_bglt)
																		COBJECT(BgL_auxz00_5909))->
																	BgL_bindingzd2valuezd2) =
																((obj_t) BFALSE), BUNSPEC);
														}
														((BgL_localz00_bglt)
															((BgL_localz00_bglt) BgL_localz00_5148));
														{	/* Cfa/setup.scm 426 */
															BgL_valuez00_bglt BgL_arg2035z00_5152;

															BgL_arg2035z00_5152 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt)
																				BgL_localz00_5148))))->BgL_valuez00);
															BGl_variablezd2valuezd2setupz12z12zzcfa_setupz00
																(BgL_arg2035z00_5152,
																((BgL_variablez00_bglt) BgL_localz00_5148));
													}}
													{
														obj_t BgL_l1731z00_5925;

														BgL_l1731z00_5925 = CDR(BgL_l1731z00_5147);
														BgL_l1731z00_5147 = BgL_l1731z00_5925;
														goto BgL_zc3z04anonymousza32032ze3z87_5146;
													}
												}
											else
												{	/* Cfa/setup.scm 428 */
													((bool_t) 1);
												}
										}
									}
									{	/* Cfa/setup.scm 429 */
										obj_t BgL_arg2037z00_5153;

										BgL_arg2037z00_5153 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_5144)))->BgL_bodyz00);
										BGl_nodezd2setupz12zc0zzcfa_setupz00(
											((BgL_nodez00_bglt) BgL_arg2037z00_5153));
									}
								}
							}
							{
								obj_t BgL_l1734z00_5931;

								BgL_l1734z00_5931 = CDR(BgL_l1734z00_5139);
								BgL_l1734z00_5139 = BgL_l1734z00_5931;
								goto BgL_zc3z04anonymousza32029ze3z87_5138;
							}
						}
					else
						{	/* Cfa/setup.scm 421 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_5016)))->BgL_bodyz00));
		}

	}



/* &node-setup!-switch1812 */
	obj_t BGl_z62nodezd2setupz12zd2switch1812z70zzcfa_setupz00(obj_t
		BgL_envz00_5017, obj_t BgL_nodez00_5018)
	{
		{	/* Cfa/setup.scm 407 */
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_5018)))->BgL_testz00));
			{	/* Cfa/setup.scm 410 */
				obj_t BgL_g1730z00_5155;

				BgL_g1730z00_5155 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_5018)))->BgL_clausesz00);
				{
					obj_t BgL_l1728z00_5157;

					BgL_l1728z00_5157 = BgL_g1730z00_5155;
				BgL_zc3z04anonymousza32021ze3z87_5156:
					if (PAIRP(BgL_l1728z00_5157))
						{	/* Cfa/setup.scm 410 */
							{	/* Cfa/setup.scm 411 */
								obj_t BgL_clausez00_5158;

								BgL_clausez00_5158 = CAR(BgL_l1728z00_5157);
								{	/* Cfa/setup.scm 411 */
									obj_t BgL_arg2023z00_5159;

									BgL_arg2023z00_5159 = CDR(((obj_t) BgL_clausez00_5158));
									BGl_nodezd2setupz12zc0zzcfa_setupz00(
										((BgL_nodez00_bglt) BgL_arg2023z00_5159));
								}
							}
							{
								obj_t BgL_l1728z00_5948;

								BgL_l1728z00_5948 = CDR(BgL_l1728z00_5157);
								BgL_l1728z00_5157 = BgL_l1728z00_5948;
								goto BgL_zc3z04anonymousza32021ze3z87_5156;
							}
						}
					else
						{	/* Cfa/setup.scm 410 */
							((bool_t) 1);
						}
				}
			}
			{	/* Cfa/setup.scm 413 */
				BgL_switchzf2cinfozf2_bglt BgL_wide1327z00_5160;

				BgL_wide1327z00_5160 =
					((BgL_switchzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_switchzf2cinfozf2_bgl))));
				{	/* Cfa/setup.scm 413 */
					obj_t BgL_auxz00_5955;
					BgL_objectz00_bglt BgL_tmpz00_5951;

					BgL_auxz00_5955 = ((obj_t) BgL_wide1327z00_5160);
					BgL_tmpz00_5951 =
						((BgL_objectz00_bglt)
						((BgL_switchz00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_5018)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5951, BgL_auxz00_5955);
				}
				((BgL_objectz00_bglt)
					((BgL_switchz00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_5018)));
				{	/* Cfa/setup.scm 413 */
					long BgL_arg2028z00_5161;

					{	/* Cfa/setup.scm 413 */
						long BgL_res2344z00_5162;

						BgL_res2344z00_5162 =
							BGL_CLASS_INDEX(BGl_switchzf2Cinfozf2zzcfa_infoz00);
						BgL_arg2028z00_5161 = BgL_res2344z00_5162;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_switchz00_bglt)
								((BgL_switchz00_bglt) BgL_nodez00_5018))), BgL_arg2028z00_5161);
				}
				((BgL_switchz00_bglt)
					((BgL_switchz00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_5018)));
			}
			{
				BgL_switchzf2cinfozf2_bglt BgL_auxz00_5969;

				{
					obj_t BgL_auxz00_5970;

					{	/* Cfa/setup.scm 414 */
						BgL_objectz00_bglt BgL_tmpz00_5971;

						BgL_tmpz00_5971 =
							((BgL_objectz00_bglt)
							((BgL_switchz00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_5018)));
						BgL_auxz00_5970 = BGL_OBJECT_WIDENING(BgL_tmpz00_5971);
					}
					BgL_auxz00_5969 = ((BgL_switchzf2cinfozf2_bglt) BgL_auxz00_5970);
				}
				((((BgL_switchzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5969))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BGl_makezd2emptyzd2approxz00zzcfa_approxz00()),
					BUNSPEC);
			}
			return
				((obj_t)
				((BgL_switchz00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_5018)));
		}

	}



/* &node-setup!-fail1810 */
	obj_t BGl_z62nodezd2setupz12zd2fail1810z70zzcfa_setupz00(obj_t
		BgL_envz00_5019, obj_t BgL_nodez00_5020)
	{
		{	/* Cfa/setup.scm 396 */
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_5020)))->BgL_procz00));
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_5020)))->BgL_msgz00));
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_5020)))->BgL_objz00));
			{	/* Cfa/setup.scm 401 */
				BgL_failzf2cinfozf2_bglt BgL_wide1322z00_5164;

				BgL_wide1322z00_5164 =
					((BgL_failzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_failzf2cinfozf2_bgl))));
				{	/* Cfa/setup.scm 401 */
					obj_t BgL_auxz00_5996;
					BgL_objectz00_bglt BgL_tmpz00_5992;

					BgL_auxz00_5996 = ((obj_t) BgL_wide1322z00_5164);
					BgL_tmpz00_5992 =
						((BgL_objectz00_bglt)
						((BgL_failz00_bglt) ((BgL_failz00_bglt) BgL_nodez00_5020)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5992, BgL_auxz00_5996);
				}
				((BgL_objectz00_bglt)
					((BgL_failz00_bglt) ((BgL_failz00_bglt) BgL_nodez00_5020)));
				{	/* Cfa/setup.scm 401 */
					long BgL_arg2018z00_5165;

					{	/* Cfa/setup.scm 401 */
						long BgL_res2342z00_5166;

						BgL_res2342z00_5166 =
							BGL_CLASS_INDEX(BGl_failzf2Cinfozf2zzcfa_infoz00);
						BgL_arg2018z00_5165 = BgL_res2342z00_5166;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_failz00_bglt)
								((BgL_failz00_bglt) BgL_nodez00_5020))), BgL_arg2018z00_5165);
				}
				((BgL_failz00_bglt)
					((BgL_failz00_bglt) ((BgL_failz00_bglt) BgL_nodez00_5020)));
			}
			{
				BgL_failzf2cinfozf2_bglt BgL_auxz00_6010;

				{
					obj_t BgL_auxz00_6011;

					{	/* Cfa/setup.scm 402 */
						BgL_objectz00_bglt BgL_tmpz00_6012;

						BgL_tmpz00_6012 =
							((BgL_objectz00_bglt)
							((BgL_failz00_bglt) ((BgL_failz00_bglt) BgL_nodez00_5020)));
						BgL_auxz00_6011 = BGL_OBJECT_WIDENING(BgL_tmpz00_6012);
					}
					BgL_auxz00_6010 = ((BgL_failzf2cinfozf2_bglt) BgL_auxz00_6011);
				}
				((((BgL_failzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6010))->
						BgL_approxz00) =
					((BgL_approxz00_bglt)
						BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
								BGl_za2objza2z00zztype_cachez00))), BUNSPEC);
			}
			return
				((obj_t) ((BgL_failz00_bglt) ((BgL_failz00_bglt) BgL_nodez00_5020)));
		}

	}



/* &node-setup!-conditio1808 */
	obj_t BGl_z62nodezd2setupz12zd2conditio1808z70zzcfa_setupz00(obj_t
		BgL_envz00_5021, obj_t BgL_nodez00_5022)
	{
		{	/* Cfa/setup.scm 385 */
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_5022)))->BgL_testz00));
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_5022)))->BgL_truez00));
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_5022)))->BgL_falsez00));
			{	/* Cfa/setup.scm 390 */
				BgL_conditionalzf2cinfozf2_bglt BgL_wide1317z00_5168;

				BgL_wide1317z00_5168 =
					((BgL_conditionalzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_conditionalzf2cinfozf2_bgl))));
				{	/* Cfa/setup.scm 390 */
					obj_t BgL_auxz00_6038;
					BgL_objectz00_bglt BgL_tmpz00_6034;

					BgL_auxz00_6038 = ((obj_t) BgL_wide1317z00_5168);
					BgL_tmpz00_6034 =
						((BgL_objectz00_bglt)
						((BgL_conditionalz00_bglt)
							((BgL_conditionalz00_bglt) BgL_nodez00_5022)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6034, BgL_auxz00_6038);
				}
				((BgL_objectz00_bglt)
					((BgL_conditionalz00_bglt)
						((BgL_conditionalz00_bglt) BgL_nodez00_5022)));
				{	/* Cfa/setup.scm 390 */
					long BgL_arg2013z00_5169;

					{	/* Cfa/setup.scm 390 */
						long BgL_res2341z00_5170;

						BgL_res2341z00_5170 =
							BGL_CLASS_INDEX(BGl_conditionalzf2Cinfozf2zzcfa_infoz00);
						BgL_arg2013z00_5169 = BgL_res2341z00_5170;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_conditionalz00_bglt)
								((BgL_conditionalz00_bglt) BgL_nodez00_5022))),
						BgL_arg2013z00_5169);
				}
				((BgL_conditionalz00_bglt)
					((BgL_conditionalz00_bglt)
						((BgL_conditionalz00_bglt) BgL_nodez00_5022)));
			}
			{
				BgL_conditionalzf2cinfozf2_bglt BgL_auxz00_6052;

				{
					obj_t BgL_auxz00_6053;

					{	/* Cfa/setup.scm 391 */
						BgL_objectz00_bglt BgL_tmpz00_6054;

						BgL_tmpz00_6054 =
							((BgL_objectz00_bglt)
							((BgL_conditionalz00_bglt)
								((BgL_conditionalz00_bglt) BgL_nodez00_5022)));
						BgL_auxz00_6053 = BGL_OBJECT_WIDENING(BgL_tmpz00_6054);
					}
					BgL_auxz00_6052 = ((BgL_conditionalzf2cinfozf2_bglt) BgL_auxz00_6053);
				}
				((((BgL_conditionalzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6052))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) BGl_makezd2emptyzd2approxz00zzcfa_approxz00()),
					BUNSPEC);
			}
			return
				((obj_t)
				((BgL_conditionalz00_bglt)
					((BgL_conditionalz00_bglt) BgL_nodez00_5022)));
		}

	}



/* &node-setup!-setq1806 */
	obj_t BGl_z62nodezd2setupz12zd2setq1806z70zzcfa_setupz00(obj_t
		BgL_envz00_5023, obj_t BgL_nodez00_5024)
	{
		{	/* Cfa/setup.scm 374 */
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_5024)))->BgL_valuez00));
			{	/* Tools/trace.sch 53 */
				BgL_varz00_bglt BgL_arg2007z00_5172;

				BgL_arg2007z00_5172 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_5024)))->BgL_varz00);
				BGl_nodezd2setupz12zc0zzcfa_setupz00(
					((BgL_nodez00_bglt) BgL_arg2007z00_5172));
			}
			{	/* Tools/trace.sch 53 */
				BgL_setqzf2cinfozf2_bglt BgL_wide1312z00_5173;

				BgL_wide1312z00_5173 =
					((BgL_setqzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_setqzf2cinfozf2_bgl))));
				{	/* Tools/trace.sch 53 */
					obj_t BgL_auxz00_6077;
					BgL_objectz00_bglt BgL_tmpz00_6073;

					BgL_auxz00_6077 = ((obj_t) BgL_wide1312z00_5173);
					BgL_tmpz00_6073 =
						((BgL_objectz00_bglt)
						((BgL_setqz00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_5024)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6073, BgL_auxz00_6077);
				}
				((BgL_objectz00_bglt)
					((BgL_setqz00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_5024)));
				{	/* Tools/trace.sch 53 */
					long BgL_arg2008z00_5174;

					{	/* Tools/trace.sch 53 */
						long BgL_res2340z00_5175;

						BgL_res2340z00_5175 =
							BGL_CLASS_INDEX(BGl_setqzf2Cinfozf2zzcfa_infoz00);
						BgL_arg2008z00_5174 = BgL_res2340z00_5175;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_setqz00_bglt)
								((BgL_setqz00_bglt) BgL_nodez00_5024))), BgL_arg2008z00_5174);
				}
				((BgL_setqz00_bglt)
					((BgL_setqz00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_5024)));
			}
			{
				BgL_setqzf2cinfozf2_bglt BgL_auxz00_6091;

				{
					obj_t BgL_auxz00_6092;

					{	/* Tools/trace.sch 53 */
						BgL_objectz00_bglt BgL_tmpz00_6093;

						BgL_tmpz00_6093 =
							((BgL_objectz00_bglt)
							((BgL_setqz00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_5024)));
						BgL_auxz00_6092 = BGL_OBJECT_WIDENING(BgL_tmpz00_6093);
					}
					BgL_auxz00_6091 = ((BgL_setqzf2cinfozf2_bglt) BgL_auxz00_6092);
				}
				((((BgL_setqzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6091))->
						BgL_approxz00) =
					((BgL_approxz00_bglt)
						BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
								BGl_za2unspecza2z00zztype_cachez00))), BUNSPEC);
			}
			return
				((obj_t) ((BgL_setqz00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_5024)));
		}

	}



/* &node-setup!-cast1804 */
	obj_t BGl_z62nodezd2setupz12zd2cast1804z70zzcfa_setupz00(obj_t
		BgL_envz00_5025, obj_t BgL_nodez00_5026)
	{
		{	/* Cfa/setup.scm 367 */
			return
				BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_5026)))->BgL_argz00));
		}

	}



/* &node-setup!-cast-nul1802 */
	obj_t BGl_z62nodezd2setupz12zd2castzd2nul1802za2zzcfa_setupz00(obj_t
		BgL_envz00_5027, obj_t BgL_nodez00_5028)
	{
		{	/* Cfa/setup.scm 359 */
			{	/* Cfa/setup.scm 361 */
				BgL_castzd2nullzf2cinfoz20_bglt BgL_wide1305z00_5178;

				BgL_wide1305z00_5178 =
					((BgL_castzd2nullzf2cinfoz20_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_castzd2nullzf2cinfoz20_bgl))));
				{	/* Cfa/setup.scm 361 */
					obj_t BgL_auxz00_6113;
					BgL_objectz00_bglt BgL_tmpz00_6109;

					BgL_auxz00_6113 = ((obj_t) BgL_wide1305z00_5178);
					BgL_tmpz00_6109 =
						((BgL_objectz00_bglt)
						((BgL_castzd2nullzd2_bglt)
							((BgL_castzd2nullzd2_bglt) BgL_nodez00_5028)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6109, BgL_auxz00_6113);
				}
				((BgL_objectz00_bglt)
					((BgL_castzd2nullzd2_bglt)
						((BgL_castzd2nullzd2_bglt) BgL_nodez00_5028)));
				{	/* Cfa/setup.scm 361 */
					long BgL_arg2002z00_5179;

					{	/* Cfa/setup.scm 361 */
						long BgL_res2339z00_5180;

						BgL_res2339z00_5180 =
							BGL_CLASS_INDEX(BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00);
						BgL_arg2002z00_5179 = BgL_res2339z00_5180;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_castzd2nullzd2_bglt)
								((BgL_castzd2nullzd2_bglt) BgL_nodez00_5028))),
						BgL_arg2002z00_5179);
				}
				((BgL_castzd2nullzd2_bglt)
					((BgL_castzd2nullzd2_bglt)
						((BgL_castzd2nullzd2_bglt) BgL_nodez00_5028)));
			}
			{
				BgL_approxz00_bglt BgL_auxz00_6135;
				BgL_castzd2nullzf2cinfoz20_bglt BgL_auxz00_6127;

				{	/* Cfa/setup.scm 362 */
					BgL_typez00_bglt BgL_arg2003z00_5181;

					BgL_arg2003z00_5181 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_castzd2nullzd2_bglt) BgL_nodez00_5028))))->BgL_typez00);
					BgL_auxz00_6135 =
						BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_arg2003z00_5181);
				}
				{
					obj_t BgL_auxz00_6128;

					{	/* Cfa/setup.scm 362 */
						BgL_objectz00_bglt BgL_tmpz00_6129;

						BgL_tmpz00_6129 =
							((BgL_objectz00_bglt)
							((BgL_castzd2nullzd2_bglt)
								((BgL_castzd2nullzd2_bglt) BgL_nodez00_5028)));
						BgL_auxz00_6128 = BGL_OBJECT_WIDENING(BgL_tmpz00_6129);
					}
					BgL_auxz00_6127 = ((BgL_castzd2nullzf2cinfoz20_bglt) BgL_auxz00_6128);
				}
				((((BgL_castzd2nullzf2cinfoz20_bglt) COBJECT(BgL_auxz00_6127))->
						BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_6135), BUNSPEC);
			}
			return
				((obj_t)
				((BgL_castzd2nullzd2_bglt)
					((BgL_castzd2nullzd2_bglt) BgL_nodez00_5028)));
		}

	}



/* &node-setup!-instance1800 */
	obj_t BGl_z62nodezd2setupz12zd2instance1800z70zzcfa_setupz00(obj_t
		BgL_envz00_5029, obj_t BgL_nodez00_5030)
	{
		{	/* Cfa/setup.scm 349 */
			{	/* Cfa/setup.scm 351 */
				obj_t BgL_arg1998z00_5183;

				BgL_arg1998z00_5183 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_instanceofz00_bglt) BgL_nodez00_5030))))->BgL_exprza2za2);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1998z00_5183);
			}
			{	/* Cfa/setup.scm 352 */
				BgL_instanceofzf2cinfozf2_bglt BgL_wide1300z00_5184;

				BgL_wide1300z00_5184 =
					((BgL_instanceofzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_instanceofzf2cinfozf2_bgl))));
				{	/* Cfa/setup.scm 352 */
					obj_t BgL_auxz00_6153;
					BgL_objectz00_bglt BgL_tmpz00_6149;

					BgL_auxz00_6153 = ((obj_t) BgL_wide1300z00_5184);
					BgL_tmpz00_6149 =
						((BgL_objectz00_bglt)
						((BgL_instanceofz00_bglt)
							((BgL_instanceofz00_bglt) BgL_nodez00_5030)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6149, BgL_auxz00_6153);
				}
				((BgL_objectz00_bglt)
					((BgL_instanceofz00_bglt)
						((BgL_instanceofz00_bglt) BgL_nodez00_5030)));
				{	/* Cfa/setup.scm 352 */
					long BgL_arg1999z00_5185;

					{	/* Cfa/setup.scm 352 */
						long BgL_res2338z00_5186;

						BgL_res2338z00_5186 =
							BGL_CLASS_INDEX(BGl_instanceofzf2Cinfozf2zzcfa_info3z00);
						BgL_arg1999z00_5185 = BgL_res2338z00_5186;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_instanceofz00_bglt)
								((BgL_instanceofz00_bglt) BgL_nodez00_5030))),
						BgL_arg1999z00_5185);
				}
				((BgL_instanceofz00_bglt)
					((BgL_instanceofz00_bglt)
						((BgL_instanceofz00_bglt) BgL_nodez00_5030)));
			}
			{
				BgL_approxz00_bglt BgL_auxz00_6175;
				BgL_instanceofzf2cinfozf2_bglt BgL_auxz00_6167;

				{	/* Cfa/setup.scm 353 */
					BgL_typez00_bglt BgL_arg2000z00_5187;

					BgL_arg2000z00_5187 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_instanceofz00_bglt) BgL_nodez00_5030))))->BgL_typez00);
					BgL_auxz00_6175 =
						BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_arg2000z00_5187);
				}
				{
					obj_t BgL_auxz00_6168;

					{	/* Cfa/setup.scm 353 */
						BgL_objectz00_bglt BgL_tmpz00_6169;

						BgL_tmpz00_6169 =
							((BgL_objectz00_bglt)
							((BgL_instanceofz00_bglt)
								((BgL_instanceofz00_bglt) BgL_nodez00_5030)));
						BgL_auxz00_6168 = BGL_OBJECT_WIDENING(BgL_tmpz00_6169);
					}
					BgL_auxz00_6167 = ((BgL_instanceofzf2cinfozf2_bglt) BgL_auxz00_6168);
				}
				((((BgL_instanceofzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6167))->
						BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_6175), BUNSPEC);
			}
			((BgL_instanceofz00_bglt) ((BgL_instanceofz00_bglt) BgL_nodez00_5030));
			{	/* Cfa/setup.scm 354 */
				BgL_approxz00_bglt BgL_arg2001z00_5188;

				{
					BgL_instanceofzf2cinfozf2_bglt BgL_auxz00_6183;

					{
						obj_t BgL_auxz00_6184;

						{	/* Cfa/setup.scm 354 */
							BgL_objectz00_bglt BgL_tmpz00_6185;

							BgL_tmpz00_6185 =
								((BgL_objectz00_bglt)
								((BgL_instanceofz00_bglt)
									((BgL_instanceofz00_bglt) BgL_nodez00_5030)));
							BgL_auxz00_6184 = BGL_OBJECT_WIDENING(BgL_tmpz00_6185);
						}
						BgL_auxz00_6183 =
							((BgL_instanceofzf2cinfozf2_bglt) BgL_auxz00_6184);
					}
					BgL_arg2001z00_5188 =
						(((BgL_instanceofzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6183))->
						BgL_approxz00);
				}
				return BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg2001z00_5188);
			}
		}

	}



/* &node-setup!-new1798 */
	obj_t BGl_z62nodezd2setupz12zd2new1798z70zzcfa_setupz00(obj_t BgL_envz00_5031,
		obj_t BgL_nodez00_5032)
	{
		{	/* Cfa/setup.scm 339 */
			{	/* Cfa/setup.scm 341 */
				obj_t BgL_arg1993z00_5190;

				BgL_arg1993z00_5190 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_newz00_bglt) BgL_nodez00_5032))))->BgL_exprza2za2);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1993z00_5190);
			}
			{	/* Cfa/setup.scm 342 */
				BgL_newzf2cinfozf2_bglt BgL_wide1295z00_5191;

				BgL_wide1295z00_5191 =
					((BgL_newzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_newzf2cinfozf2_bgl))));
				{	/* Cfa/setup.scm 342 */
					obj_t BgL_auxz00_6202;
					BgL_objectz00_bglt BgL_tmpz00_6198;

					BgL_auxz00_6202 = ((obj_t) BgL_wide1295z00_5191);
					BgL_tmpz00_6198 =
						((BgL_objectz00_bglt)
						((BgL_newz00_bglt) ((BgL_newz00_bglt) BgL_nodez00_5032)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6198, BgL_auxz00_6202);
				}
				((BgL_objectz00_bglt)
					((BgL_newz00_bglt) ((BgL_newz00_bglt) BgL_nodez00_5032)));
				{	/* Cfa/setup.scm 342 */
					long BgL_arg1995z00_5192;

					{	/* Cfa/setup.scm 342 */
						long BgL_res2337z00_5193;

						BgL_res2337z00_5193 =
							BGL_CLASS_INDEX(BGl_newzf2Cinfozf2zzcfa_info3z00);
						BgL_arg1995z00_5192 = BgL_res2337z00_5193;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_newz00_bglt)
								((BgL_newz00_bglt) BgL_nodez00_5032))), BgL_arg1995z00_5192);
				}
				((BgL_newz00_bglt)
					((BgL_newz00_bglt) ((BgL_newz00_bglt) BgL_nodez00_5032)));
			}
			{
				BgL_approxz00_bglt BgL_auxz00_6224;
				BgL_newzf2cinfozf2_bglt BgL_auxz00_6216;

				{	/* Cfa/setup.scm 343 */
					BgL_typez00_bglt BgL_arg1996z00_5194;

					BgL_arg1996z00_5194 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_newz00_bglt) BgL_nodez00_5032))))->BgL_typez00);
					BgL_auxz00_6224 =
						BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_arg1996z00_5194);
				}
				{
					obj_t BgL_auxz00_6217;

					{	/* Cfa/setup.scm 343 */
						BgL_objectz00_bglt BgL_tmpz00_6218;

						BgL_tmpz00_6218 =
							((BgL_objectz00_bglt)
							((BgL_newz00_bglt) ((BgL_newz00_bglt) BgL_nodez00_5032)));
						BgL_auxz00_6217 = BGL_OBJECT_WIDENING(BgL_tmpz00_6218);
					}
					BgL_auxz00_6216 = ((BgL_newzf2cinfozf2_bglt) BgL_auxz00_6217);
				}
				((((BgL_newzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6216))->BgL_approxz00) =
					((BgL_approxz00_bglt) BgL_auxz00_6224), BUNSPEC);
			}
			((BgL_newz00_bglt) ((BgL_newz00_bglt) BgL_nodez00_5032));
			{	/* Cfa/setup.scm 344 */
				BgL_approxz00_bglt BgL_arg1997z00_5195;

				{
					BgL_newzf2cinfozf2_bglt BgL_auxz00_6232;

					{
						obj_t BgL_auxz00_6233;

						{	/* Cfa/setup.scm 344 */
							BgL_objectz00_bglt BgL_tmpz00_6234;

							BgL_tmpz00_6234 =
								((BgL_objectz00_bglt)
								((BgL_newz00_bglt) ((BgL_newz00_bglt) BgL_nodez00_5032)));
							BgL_auxz00_6233 = BGL_OBJECT_WIDENING(BgL_tmpz00_6234);
						}
						BgL_auxz00_6232 = ((BgL_newzf2cinfozf2_bglt) BgL_auxz00_6233);
					}
					BgL_arg1997z00_5195 =
						(((BgL_newzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6232))->
						BgL_approxz00);
				}
				return BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg1997z00_5195);
			}
		}

	}



/* &node-setup!-setfield1796 */
	obj_t BGl_z62nodezd2setupz12zd2setfield1796z70zzcfa_setupz00(obj_t
		BgL_envz00_5033, obj_t BgL_nodez00_5034)
	{
		{	/* Cfa/setup.scm 329 */
			{	/* Cfa/setup.scm 331 */
				obj_t BgL_arg1989z00_5197;

				BgL_arg1989z00_5197 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_setfieldz00_bglt) BgL_nodez00_5034))))->BgL_exprza2za2);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1989z00_5197);
			}
			{	/* Cfa/setup.scm 332 */
				BgL_setfieldzf2cinfozf2_bglt BgL_wide1290z00_5198;

				BgL_wide1290z00_5198 =
					((BgL_setfieldzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_setfieldzf2cinfozf2_bgl))));
				{	/* Cfa/setup.scm 332 */
					obj_t BgL_auxz00_6251;
					BgL_objectz00_bglt BgL_tmpz00_6247;

					BgL_auxz00_6251 = ((obj_t) BgL_wide1290z00_5198);
					BgL_tmpz00_6247 =
						((BgL_objectz00_bglt)
						((BgL_setfieldz00_bglt) ((BgL_setfieldz00_bglt) BgL_nodez00_5034)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6247, BgL_auxz00_6251);
				}
				((BgL_objectz00_bglt)
					((BgL_setfieldz00_bglt) ((BgL_setfieldz00_bglt) BgL_nodez00_5034)));
				{	/* Cfa/setup.scm 332 */
					long BgL_arg1990z00_5199;

					{	/* Cfa/setup.scm 332 */
						long BgL_res2336z00_5200;

						BgL_res2336z00_5200 =
							BGL_CLASS_INDEX(BGl_setfieldzf2Cinfozf2zzcfa_info3z00);
						BgL_arg1990z00_5199 = BgL_res2336z00_5200;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_setfieldz00_bglt)
								((BgL_setfieldz00_bglt) BgL_nodez00_5034))),
						BgL_arg1990z00_5199);
				}
				((BgL_setfieldz00_bglt)
					((BgL_setfieldz00_bglt) ((BgL_setfieldz00_bglt) BgL_nodez00_5034)));
			}
			{
				BgL_approxz00_bglt BgL_auxz00_6273;
				BgL_setfieldzf2cinfozf2_bglt BgL_auxz00_6265;

				{	/* Cfa/setup.scm 333 */
					BgL_typez00_bglt BgL_arg1991z00_5201;

					BgL_arg1991z00_5201 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_setfieldz00_bglt) BgL_nodez00_5034))))->BgL_typez00);
					BgL_auxz00_6273 =
						BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_arg1991z00_5201);
				}
				{
					obj_t BgL_auxz00_6266;

					{	/* Cfa/setup.scm 333 */
						BgL_objectz00_bglt BgL_tmpz00_6267;

						BgL_tmpz00_6267 =
							((BgL_objectz00_bglt)
							((BgL_setfieldz00_bglt)
								((BgL_setfieldz00_bglt) BgL_nodez00_5034)));
						BgL_auxz00_6266 = BGL_OBJECT_WIDENING(BgL_tmpz00_6267);
					}
					BgL_auxz00_6265 = ((BgL_setfieldzf2cinfozf2_bglt) BgL_auxz00_6266);
				}
				((((BgL_setfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6265))->
						BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_6273), BUNSPEC);
			}
			((BgL_setfieldz00_bglt) ((BgL_setfieldz00_bglt) BgL_nodez00_5034));
			{	/* Cfa/setup.scm 334 */
				BgL_approxz00_bglt BgL_arg1992z00_5202;

				{
					BgL_setfieldzf2cinfozf2_bglt BgL_auxz00_6281;

					{
						obj_t BgL_auxz00_6282;

						{	/* Cfa/setup.scm 334 */
							BgL_objectz00_bglt BgL_tmpz00_6283;

							BgL_tmpz00_6283 =
								((BgL_objectz00_bglt)
								((BgL_setfieldz00_bglt)
									((BgL_setfieldz00_bglt) BgL_nodez00_5034)));
							BgL_auxz00_6282 = BGL_OBJECT_WIDENING(BgL_tmpz00_6283);
						}
						BgL_auxz00_6281 = ((BgL_setfieldzf2cinfozf2_bglt) BgL_auxz00_6282);
					}
					BgL_arg1992z00_5202 =
						(((BgL_setfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6281))->
						BgL_approxz00);
				}
				return BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg1992z00_5202);
			}
		}

	}



/* &node-setup!-getfield1794 */
	obj_t BGl_z62nodezd2setupz12zd2getfield1794z70zzcfa_setupz00(obj_t
		BgL_envz00_5035, obj_t BgL_nodez00_5036)
	{
		{	/* Cfa/setup.scm 319 */
			{	/* Cfa/setup.scm 321 */
				obj_t BgL_arg1985z00_5204;

				BgL_arg1985z00_5204 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_getfieldz00_bglt) BgL_nodez00_5036))))->BgL_exprza2za2);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1985z00_5204);
			}
			{	/* Cfa/setup.scm 322 */
				BgL_getfieldzf2cinfozf2_bglt BgL_wide1285z00_5205;

				BgL_wide1285z00_5205 =
					((BgL_getfieldzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_getfieldzf2cinfozf2_bgl))));
				{	/* Cfa/setup.scm 322 */
					obj_t BgL_auxz00_6300;
					BgL_objectz00_bglt BgL_tmpz00_6296;

					BgL_auxz00_6300 = ((obj_t) BgL_wide1285z00_5205);
					BgL_tmpz00_6296 =
						((BgL_objectz00_bglt)
						((BgL_getfieldz00_bglt) ((BgL_getfieldz00_bglt) BgL_nodez00_5036)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6296, BgL_auxz00_6300);
				}
				((BgL_objectz00_bglt)
					((BgL_getfieldz00_bglt) ((BgL_getfieldz00_bglt) BgL_nodez00_5036)));
				{	/* Cfa/setup.scm 322 */
					long BgL_arg1986z00_5206;

					{	/* Cfa/setup.scm 322 */
						long BgL_res2335z00_5207;

						BgL_res2335z00_5207 =
							BGL_CLASS_INDEX(BGl_getfieldzf2Cinfozf2zzcfa_info3z00);
						BgL_arg1986z00_5206 = BgL_res2335z00_5207;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_getfieldz00_bglt)
								((BgL_getfieldz00_bglt) BgL_nodez00_5036))),
						BgL_arg1986z00_5206);
				}
				((BgL_getfieldz00_bglt)
					((BgL_getfieldz00_bglt) ((BgL_getfieldz00_bglt) BgL_nodez00_5036)));
			}
			{
				BgL_approxz00_bglt BgL_auxz00_6322;
				BgL_getfieldzf2cinfozf2_bglt BgL_auxz00_6314;

				{	/* Cfa/setup.scm 323 */
					BgL_typez00_bglt BgL_arg1987z00_5208;

					BgL_arg1987z00_5208 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_getfieldz00_bglt) BgL_nodez00_5036))))->BgL_typez00);
					BgL_auxz00_6322 =
						BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_arg1987z00_5208);
				}
				{
					obj_t BgL_auxz00_6315;

					{	/* Cfa/setup.scm 323 */
						BgL_objectz00_bglt BgL_tmpz00_6316;

						BgL_tmpz00_6316 =
							((BgL_objectz00_bglt)
							((BgL_getfieldz00_bglt)
								((BgL_getfieldz00_bglt) BgL_nodez00_5036)));
						BgL_auxz00_6315 = BGL_OBJECT_WIDENING(BgL_tmpz00_6316);
					}
					BgL_auxz00_6314 = ((BgL_getfieldzf2cinfozf2_bglt) BgL_auxz00_6315);
				}
				((((BgL_getfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6314))->
						BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_6322), BUNSPEC);
			}
			((BgL_getfieldz00_bglt) ((BgL_getfieldz00_bglt) BgL_nodez00_5036));
			{	/* Cfa/setup.scm 324 */
				BgL_approxz00_bglt BgL_arg1988z00_5209;

				{
					BgL_getfieldzf2cinfozf2_bglt BgL_auxz00_6330;

					{
						obj_t BgL_auxz00_6331;

						{	/* Cfa/setup.scm 324 */
							BgL_objectz00_bglt BgL_tmpz00_6332;

							BgL_tmpz00_6332 =
								((BgL_objectz00_bglt)
								((BgL_getfieldz00_bglt)
									((BgL_getfieldz00_bglt) BgL_nodez00_5036)));
							BgL_auxz00_6331 = BGL_OBJECT_WIDENING(BgL_tmpz00_6332);
						}
						BgL_auxz00_6330 = ((BgL_getfieldzf2cinfozf2_bglt) BgL_auxz00_6331);
					}
					BgL_arg1988z00_5209 =
						(((BgL_getfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6330))->
						BgL_approxz00);
				}
				return BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg1988z00_5209);
			}
		}

	}



/* &node-setup!-genpatch1792 */
	obj_t BGl_z62nodezd2setupz12zd2genpatch1792z70zzcfa_setupz00(obj_t
		BgL_envz00_5037, obj_t BgL_nodez00_5038)
	{
		{	/* Cfa/setup.scm 310 */
			{	/* Cfa/setup.scm 312 */
				obj_t BgL_arg1983z00_5211;

				BgL_arg1983z00_5211 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_genpatchidz00_bglt) BgL_nodez00_5038))))->BgL_exprza2za2);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1983z00_5211);
			}
			{	/* Cfa/setup.scm 313 */
				BgL_genpatchidzf2cinfozf2_bglt BgL_wide1280z00_5212;

				BgL_wide1280z00_5212 =
					((BgL_genpatchidzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_genpatchidzf2cinfozf2_bgl))));
				{	/* Cfa/setup.scm 313 */
					obj_t BgL_auxz00_6349;
					BgL_objectz00_bglt BgL_tmpz00_6345;

					BgL_auxz00_6349 = ((obj_t) BgL_wide1280z00_5212);
					BgL_tmpz00_6345 =
						((BgL_objectz00_bglt)
						((BgL_genpatchidz00_bglt)
							((BgL_genpatchidz00_bglt) BgL_nodez00_5038)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6345, BgL_auxz00_6349);
				}
				((BgL_objectz00_bglt)
					((BgL_genpatchidz00_bglt)
						((BgL_genpatchidz00_bglt) BgL_nodez00_5038)));
				{	/* Cfa/setup.scm 313 */
					long BgL_arg1984z00_5213;

					{	/* Cfa/setup.scm 313 */
						long BgL_res2334z00_5214;

						BgL_res2334z00_5214 =
							BGL_CLASS_INDEX(BGl_genpatchidzf2Cinfozf2zzcfa_infoz00);
						BgL_arg1984z00_5213 = BgL_res2334z00_5214;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_genpatchidz00_bglt)
								((BgL_genpatchidz00_bglt) BgL_nodez00_5038))),
						BgL_arg1984z00_5213);
				}
				((BgL_genpatchidz00_bglt)
					((BgL_genpatchidz00_bglt)
						((BgL_genpatchidz00_bglt) BgL_nodez00_5038)));
			}
			{
				BgL_genpatchidzf2cinfozf2_bglt BgL_auxz00_6363;

				{
					obj_t BgL_auxz00_6364;

					{	/* Cfa/setup.scm 314 */
						BgL_objectz00_bglt BgL_tmpz00_6365;

						BgL_tmpz00_6365 =
							((BgL_objectz00_bglt)
							((BgL_genpatchidz00_bglt)
								((BgL_genpatchidz00_bglt) BgL_nodez00_5038)));
						BgL_auxz00_6364 = BGL_OBJECT_WIDENING(BgL_tmpz00_6365);
					}
					BgL_auxz00_6363 = ((BgL_genpatchidzf2cinfozf2_bglt) BgL_auxz00_6364);
				}
				((((BgL_genpatchidzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6363))->
						BgL_approxz00) =
					((BgL_approxz00_bglt)
						BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
								BGl_za2longza2z00zztype_cachez00))), BUNSPEC);
			}
			return
				((obj_t)
				((BgL_genpatchidz00_bglt) ((BgL_genpatchidz00_bglt) BgL_nodez00_5038)));
		}

	}



/* &node-setup!-pragma1790 */
	obj_t BGl_z62nodezd2setupz12zd2pragma1790z70zzcfa_setupz00(obj_t
		BgL_envz00_5039, obj_t BgL_nodez00_5040)
	{
		{	/* Cfa/setup.scm 300 */
			{	/* Cfa/setup.scm 302 */
				obj_t BgL_arg1979z00_5216;

				BgL_arg1979z00_5216 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_pragmaz00_bglt) BgL_nodez00_5040))))->BgL_exprza2za2);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1979z00_5216);
			}
			{	/* Cfa/setup.scm 303 */
				BgL_pragmazf2cinfozf2_bglt BgL_wide1275z00_5217;

				BgL_wide1275z00_5217 =
					((BgL_pragmazf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_pragmazf2cinfozf2_bgl))));
				{	/* Cfa/setup.scm 303 */
					obj_t BgL_auxz00_6386;
					BgL_objectz00_bglt BgL_tmpz00_6382;

					BgL_auxz00_6386 = ((obj_t) BgL_wide1275z00_5217);
					BgL_tmpz00_6382 =
						((BgL_objectz00_bglt)
						((BgL_pragmaz00_bglt) ((BgL_pragmaz00_bglt) BgL_nodez00_5040)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6382, BgL_auxz00_6386);
				}
				((BgL_objectz00_bglt)
					((BgL_pragmaz00_bglt) ((BgL_pragmaz00_bglt) BgL_nodez00_5040)));
				{	/* Cfa/setup.scm 303 */
					long BgL_arg1980z00_5218;

					{	/* Cfa/setup.scm 303 */
						long BgL_res2333z00_5219;

						BgL_res2333z00_5219 =
							BGL_CLASS_INDEX(BGl_pragmazf2Cinfozf2zzcfa_info3z00);
						BgL_arg1980z00_5218 = BgL_res2333z00_5219;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_pragmaz00_bglt)
								((BgL_pragmaz00_bglt) BgL_nodez00_5040))), BgL_arg1980z00_5218);
				}
				((BgL_pragmaz00_bglt)
					((BgL_pragmaz00_bglt) ((BgL_pragmaz00_bglt) BgL_nodez00_5040)));
			}
			{
				BgL_approxz00_bglt BgL_auxz00_6408;
				BgL_pragmazf2cinfozf2_bglt BgL_auxz00_6400;

				{	/* Cfa/setup.scm 304 */
					BgL_typez00_bglt BgL_arg1981z00_5220;

					BgL_arg1981z00_5220 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_pragmaz00_bglt) BgL_nodez00_5040))))->BgL_typez00);
					BgL_auxz00_6408 =
						BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_arg1981z00_5220);
				}
				{
					obj_t BgL_auxz00_6401;

					{	/* Cfa/setup.scm 304 */
						BgL_objectz00_bglt BgL_tmpz00_6402;

						BgL_tmpz00_6402 =
							((BgL_objectz00_bglt)
							((BgL_pragmaz00_bglt) ((BgL_pragmaz00_bglt) BgL_nodez00_5040)));
						BgL_auxz00_6401 = BGL_OBJECT_WIDENING(BgL_tmpz00_6402);
					}
					BgL_auxz00_6400 = ((BgL_pragmazf2cinfozf2_bglt) BgL_auxz00_6401);
				}
				((((BgL_pragmazf2cinfozf2_bglt) COBJECT(BgL_auxz00_6400))->
						BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_6408), BUNSPEC);
			}
			((BgL_pragmaz00_bglt) ((BgL_pragmaz00_bglt) BgL_nodez00_5040));
			{	/* Cfa/setup.scm 305 */
				BgL_approxz00_bglt BgL_arg1982z00_5221;

				{
					BgL_pragmazf2cinfozf2_bglt BgL_auxz00_6416;

					{
						obj_t BgL_auxz00_6417;

						{	/* Cfa/setup.scm 305 */
							BgL_objectz00_bglt BgL_tmpz00_6418;

							BgL_tmpz00_6418 =
								((BgL_objectz00_bglt)
								((BgL_pragmaz00_bglt) ((BgL_pragmaz00_bglt) BgL_nodez00_5040)));
							BgL_auxz00_6417 = BGL_OBJECT_WIDENING(BgL_tmpz00_6418);
						}
						BgL_auxz00_6416 = ((BgL_pragmazf2cinfozf2_bglt) BgL_auxz00_6417);
					}
					BgL_arg1982z00_5221 =
						(((BgL_pragmazf2cinfozf2_bglt) COBJECT(BgL_auxz00_6416))->
						BgL_approxz00);
				}
				return BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg1982z00_5221);
			}
		}

	}



/* &node-setup!-funcall1788 */
	obj_t BGl_z62nodezd2setupz12zd2funcall1788z70zzcfa_setupz00(obj_t
		BgL_envz00_5041, obj_t BgL_nodez00_5042)
	{
		{	/* Cfa/setup.scm 283 */
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_5042)))->BgL_funz00));
			BGl_nodezd2setupza2z12z62zzcfa_setupz00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_5042)))->BgL_argsz00));
			if (CBOOL
				(BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00))
				{	/* Cfa/setup.scm 287 */
					{	/* Cfa/setup.scm 288 */
						BgL_funcallzf2cinfozf2_bglt BgL_wide1266z00_5223;

						BgL_wide1266z00_5223 =
							((BgL_funcallzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_funcallzf2cinfozf2_bgl))));
						{	/* Cfa/setup.scm 288 */
							obj_t BgL_auxz00_6439;
							BgL_objectz00_bglt BgL_tmpz00_6435;

							BgL_auxz00_6439 = ((obj_t) BgL_wide1266z00_5223);
							BgL_tmpz00_6435 =
								((BgL_objectz00_bglt)
								((BgL_funcallz00_bglt)
									((BgL_funcallz00_bglt) BgL_nodez00_5042)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6435, BgL_auxz00_6439);
						}
						((BgL_objectz00_bglt)
							((BgL_funcallz00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_5042)));
						{	/* Cfa/setup.scm 288 */
							long BgL_arg1967z00_5224;

							{	/* Cfa/setup.scm 288 */
								long BgL_res2327z00_5225;

								BgL_res2327z00_5225 =
									BGL_CLASS_INDEX(BGl_funcallzf2Cinfozf2zzcfa_infoz00);
								BgL_arg1967z00_5224 = BgL_res2327z00_5225;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_funcallz00_bglt)
										((BgL_funcallz00_bglt) BgL_nodez00_5042))),
								BgL_arg1967z00_5224);
						}
						((BgL_funcallz00_bglt)
							((BgL_funcallz00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_5042)));
					}
					{
						BgL_funcallzf2cinfozf2_bglt BgL_auxz00_6453;

						{
							obj_t BgL_auxz00_6454;

							{	/* Cfa/setup.scm 289 */
								BgL_objectz00_bglt BgL_tmpz00_6455;

								BgL_tmpz00_6455 =
									((BgL_objectz00_bglt)
									((BgL_funcallz00_bglt)
										((BgL_funcallz00_bglt) BgL_nodez00_5042)));
								BgL_auxz00_6454 = BGL_OBJECT_WIDENING(BgL_tmpz00_6455);
							}
							BgL_auxz00_6453 = ((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_6454);
						}
						((((BgL_funcallzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6453))->
								BgL_approxz00) =
							((BgL_approxz00_bglt)
								BGl_makezd2emptyzd2approxz00zzcfa_approxz00()), BUNSPEC);
					}
					{
						BgL_funcallzf2cinfozf2_bglt BgL_auxz00_6463;

						{
							obj_t BgL_auxz00_6464;

							{	/* Cfa/setup.scm 290 */
								BgL_objectz00_bglt BgL_tmpz00_6465;

								BgL_tmpz00_6465 =
									((BgL_objectz00_bglt)
									((BgL_funcallz00_bglt)
										((BgL_funcallz00_bglt) BgL_nodez00_5042)));
								BgL_auxz00_6464 = BGL_OBJECT_WIDENING(BgL_tmpz00_6465);
							}
							BgL_auxz00_6463 = ((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_6464);
						}
						((((BgL_funcallzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6463))->
								BgL_vazd2approxzd2) =
							((BgL_approxz00_bglt)
								BGl_makezd2emptyzd2approxz00zzcfa_approxz00()), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_6481;
						BgL_funcallzf2cinfozf2_bglt BgL_auxz00_6473;

						{	/* Cfa/setup.scm 290 */
							obj_t BgL_arg1968z00_5226;

							{	/* Cfa/setup.scm 290 */
								obj_t BgL_arg1969z00_5227;

								{	/* Cfa/setup.scm 290 */
									obj_t BgL_res2328z00_5228;

									{	/* Cfa/setup.scm 290 */
										obj_t BgL_classz00_5229;

										BgL_classz00_5229 = BGl_funcallzf2Cinfozf2zzcfa_infoz00;
										BgL_res2328z00_5228 =
											BGL_CLASS_ALL_FIELDS(BgL_classz00_5229);
									}
									BgL_arg1969z00_5227 = BgL_res2328z00_5228;
								}
								BgL_arg1968z00_5226 =
									VECTOR_REF(BgL_arg1969z00_5227, ((long) 8));
							}
							BgL_auxz00_6481 =
								CBOOL(BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
								(BgL_arg1968z00_5226));
						}
						{
							obj_t BgL_auxz00_6474;

							{	/* Cfa/setup.scm 290 */
								BgL_objectz00_bglt BgL_tmpz00_6475;

								BgL_tmpz00_6475 =
									((BgL_objectz00_bglt)
									((BgL_funcallz00_bglt)
										((BgL_funcallz00_bglt) BgL_nodez00_5042)));
								BgL_auxz00_6474 = BGL_OBJECT_WIDENING(BgL_tmpz00_6475);
							}
							BgL_auxz00_6473 = ((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_6474);
						}
						((((BgL_funcallzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6473))->
								BgL_arityzd2errorzd2noticedzf3zf3) =
							((bool_t) BgL_auxz00_6481), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_6495;
						BgL_funcallzf2cinfozf2_bglt BgL_auxz00_6487;

						{	/* Cfa/setup.scm 290 */
							obj_t BgL_arg1970z00_5230;

							{	/* Cfa/setup.scm 290 */
								obj_t BgL_arg1971z00_5231;

								{	/* Cfa/setup.scm 290 */
									obj_t BgL_res2329z00_5232;

									{	/* Cfa/setup.scm 290 */
										obj_t BgL_classz00_5233;

										BgL_classz00_5233 = BGl_funcallzf2Cinfozf2zzcfa_infoz00;
										BgL_res2329z00_5232 =
											BGL_CLASS_ALL_FIELDS(BgL_classz00_5233);
									}
									BgL_arg1971z00_5231 = BgL_res2329z00_5232;
								}
								BgL_arg1970z00_5230 =
									VECTOR_REF(BgL_arg1971z00_5231, ((long) 9));
							}
							BgL_auxz00_6495 =
								CBOOL(BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
								(BgL_arg1970z00_5230));
						}
						{
							obj_t BgL_auxz00_6488;

							{	/* Cfa/setup.scm 290 */
								BgL_objectz00_bglt BgL_tmpz00_6489;

								BgL_tmpz00_6489 =
									((BgL_objectz00_bglt)
									((BgL_funcallz00_bglt)
										((BgL_funcallz00_bglt) BgL_nodez00_5042)));
								BgL_auxz00_6488 = BGL_OBJECT_WIDENING(BgL_tmpz00_6489);
							}
							BgL_auxz00_6487 = ((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_6488);
						}
						((((BgL_funcallzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6487))->
								BgL_typezd2errorzd2noticedzf3zf3) =
							((bool_t) BgL_auxz00_6495), BUNSPEC);
					}
					return
						((obj_t)
						((BgL_funcallz00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_5042)));
				}
			else
				{	/* Cfa/setup.scm 287 */
					{	/* Cfa/setup.scm 292 */
						BgL_funcallzf2cinfozf2_bglt BgL_wide1270z00_5234;

						BgL_wide1270z00_5234 =
							((BgL_funcallzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_funcallzf2cinfozf2_bgl))));
						{	/* Cfa/setup.scm 292 */
							obj_t BgL_auxz00_6509;
							BgL_objectz00_bglt BgL_tmpz00_6505;

							BgL_auxz00_6509 = ((obj_t) BgL_wide1270z00_5234);
							BgL_tmpz00_6505 =
								((BgL_objectz00_bglt)
								((BgL_funcallz00_bglt)
									((BgL_funcallz00_bglt) BgL_nodez00_5042)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6505, BgL_auxz00_6509);
						}
						((BgL_objectz00_bglt)
							((BgL_funcallz00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_5042)));
						{	/* Cfa/setup.scm 292 */
							long BgL_arg1972z00_5235;

							{	/* Cfa/setup.scm 292 */
								long BgL_res2330z00_5236;

								BgL_res2330z00_5236 =
									BGL_CLASS_INDEX(BGl_funcallzf2Cinfozf2zzcfa_infoz00);
								BgL_arg1972z00_5235 = BgL_res2330z00_5236;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_funcallz00_bglt)
										((BgL_funcallz00_bglt) BgL_nodez00_5042))),
								BgL_arg1972z00_5235);
						}
						((BgL_funcallz00_bglt)
							((BgL_funcallz00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_5042)));
					}
					{
						BgL_funcallzf2cinfozf2_bglt BgL_auxz00_6523;

						{
							obj_t BgL_auxz00_6524;

							{	/* Cfa/setup.scm 293 */
								BgL_objectz00_bglt BgL_tmpz00_6525;

								BgL_tmpz00_6525 =
									((BgL_objectz00_bglt)
									((BgL_funcallz00_bglt)
										((BgL_funcallz00_bglt) BgL_nodez00_5042)));
								BgL_auxz00_6524 = BGL_OBJECT_WIDENING(BgL_tmpz00_6525);
							}
							BgL_auxz00_6523 = ((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_6524);
						}
						((((BgL_funcallzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6523))->
								BgL_approxz00) =
							((BgL_approxz00_bglt)
								BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
										BGl_za2objza2z00zztype_cachez00))), BUNSPEC);
					}
					{
						BgL_funcallzf2cinfozf2_bglt BgL_auxz00_6534;

						{
							obj_t BgL_auxz00_6535;

							{	/* Cfa/setup.scm 294 */
								BgL_objectz00_bglt BgL_tmpz00_6536;

								BgL_tmpz00_6536 =
									((BgL_objectz00_bglt)
									((BgL_funcallz00_bglt)
										((BgL_funcallz00_bglt) BgL_nodez00_5042)));
								BgL_auxz00_6535 = BGL_OBJECT_WIDENING(BgL_tmpz00_6536);
							}
							BgL_auxz00_6534 = ((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_6535);
						}
						((((BgL_funcallzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6534))->
								BgL_vazd2approxzd2) =
							((BgL_approxz00_bglt)
								BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
										BGl_za2objza2z00zztype_cachez00))), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_6553;
						BgL_funcallzf2cinfozf2_bglt BgL_auxz00_6545;

						{	/* Cfa/setup.scm 294 */
							obj_t BgL_arg1973z00_5237;

							{	/* Cfa/setup.scm 294 */
								obj_t BgL_arg1974z00_5238;

								{	/* Cfa/setup.scm 294 */
									obj_t BgL_res2331z00_5239;

									{	/* Cfa/setup.scm 294 */
										obj_t BgL_classz00_5240;

										BgL_classz00_5240 = BGl_funcallzf2Cinfozf2zzcfa_infoz00;
										BgL_res2331z00_5239 =
											BGL_CLASS_ALL_FIELDS(BgL_classz00_5240);
									}
									BgL_arg1974z00_5238 = BgL_res2331z00_5239;
								}
								BgL_arg1973z00_5237 =
									VECTOR_REF(BgL_arg1974z00_5238, ((long) 8));
							}
							BgL_auxz00_6553 =
								CBOOL(BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
								(BgL_arg1973z00_5237));
						}
						{
							obj_t BgL_auxz00_6546;

							{	/* Cfa/setup.scm 294 */
								BgL_objectz00_bglt BgL_tmpz00_6547;

								BgL_tmpz00_6547 =
									((BgL_objectz00_bglt)
									((BgL_funcallz00_bglt)
										((BgL_funcallz00_bglt) BgL_nodez00_5042)));
								BgL_auxz00_6546 = BGL_OBJECT_WIDENING(BgL_tmpz00_6547);
							}
							BgL_auxz00_6545 = ((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_6546);
						}
						((((BgL_funcallzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6545))->
								BgL_arityzd2errorzd2noticedzf3zf3) =
							((bool_t) BgL_auxz00_6553), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_6567;
						BgL_funcallzf2cinfozf2_bglt BgL_auxz00_6559;

						{	/* Cfa/setup.scm 294 */
							obj_t BgL_arg1975z00_5241;

							{	/* Cfa/setup.scm 294 */
								obj_t BgL_arg1976z00_5242;

								{	/* Cfa/setup.scm 294 */
									obj_t BgL_res2332z00_5243;

									{	/* Cfa/setup.scm 294 */
										obj_t BgL_classz00_5244;

										BgL_classz00_5244 = BGl_funcallzf2Cinfozf2zzcfa_infoz00;
										BgL_res2332z00_5243 =
											BGL_CLASS_ALL_FIELDS(BgL_classz00_5244);
									}
									BgL_arg1976z00_5242 = BgL_res2332z00_5243;
								}
								BgL_arg1975z00_5241 =
									VECTOR_REF(BgL_arg1976z00_5242, ((long) 9));
							}
							BgL_auxz00_6567 =
								CBOOL(BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
								(BgL_arg1975z00_5241));
						}
						{
							obj_t BgL_auxz00_6560;

							{	/* Cfa/setup.scm 294 */
								BgL_objectz00_bglt BgL_tmpz00_6561;

								BgL_tmpz00_6561 =
									((BgL_objectz00_bglt)
									((BgL_funcallz00_bglt)
										((BgL_funcallz00_bglt) BgL_nodez00_5042)));
								BgL_auxz00_6560 = BGL_OBJECT_WIDENING(BgL_tmpz00_6561);
							}
							BgL_auxz00_6559 = ((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_6560);
						}
						((((BgL_funcallzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6559))->
								BgL_typezd2errorzd2noticedzf3zf3) =
							((bool_t) BgL_auxz00_6567), BUNSPEC);
					}
					((BgL_funcallz00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_5042));
					{	/* Cfa/setup.scm 295 */
						BgL_approxz00_bglt BgL_arg1977z00_5245;

						{
							BgL_funcallzf2cinfozf2_bglt BgL_auxz00_6575;

							{
								obj_t BgL_auxz00_6576;

								{	/* Cfa/setup.scm 295 */
									BgL_objectz00_bglt BgL_tmpz00_6577;

									BgL_tmpz00_6577 =
										((BgL_objectz00_bglt)
										((BgL_funcallz00_bglt)
											((BgL_funcallz00_bglt) BgL_nodez00_5042)));
									BgL_auxz00_6576 = BGL_OBJECT_WIDENING(BgL_tmpz00_6577);
								}
								BgL_auxz00_6575 =
									((BgL_funcallzf2cinfozf2_bglt) BgL_auxz00_6576);
							}
							BgL_arg1977z00_5245 =
								(((BgL_funcallzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6575))->
								BgL_vazd2approxzd2);
						}
						return
							BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg1977z00_5245);
					}
				}
		}

	}



/* &node-setup!-app-ly1786 */
	obj_t BGl_z62nodezd2setupz12zd2appzd2ly1786za2zzcfa_setupz00(obj_t
		BgL_envz00_5043, obj_t BgL_nodez00_5044)
	{
		{	/* Cfa/setup.scm 268 */
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_5044)))->BgL_funz00));
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_5044)))->BgL_argz00));
			if (CBOOL
				(BGl_za2optimzd2cfazd2applyzd2trackingzf3za2z21zzengine_paramz00))
				{	/* Cfa/setup.scm 272 */
					{	/* Cfa/setup.scm 273 */
						BgL_appzd2lyzf2cinfoz20_bglt BgL_wide1257z00_5247;

						BgL_wide1257z00_5247 =
							((BgL_appzd2lyzf2cinfoz20_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_appzd2lyzf2cinfoz20_bgl))));
						{	/* Cfa/setup.scm 273 */
							obj_t BgL_auxz00_6598;
							BgL_objectz00_bglt BgL_tmpz00_6594;

							BgL_auxz00_6598 = ((obj_t) BgL_wide1257z00_5247);
							BgL_tmpz00_6594 =
								((BgL_objectz00_bglt)
								((BgL_appzd2lyzd2_bglt)
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_5044)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6594, BgL_auxz00_6598);
						}
						((BgL_objectz00_bglt)
							((BgL_appzd2lyzd2_bglt)
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_5044)));
						{	/* Cfa/setup.scm 273 */
							long BgL_arg1962z00_5248;

							{	/* Cfa/setup.scm 273 */
								long BgL_res2325z00_5249;

								BgL_res2325z00_5249 =
									BGL_CLASS_INDEX(BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00);
								BgL_arg1962z00_5248 = BgL_res2325z00_5249;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_appzd2lyzd2_bglt)
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_5044))),
								BgL_arg1962z00_5248);
						}
						((BgL_appzd2lyzd2_bglt)
							((BgL_appzd2lyzd2_bglt)
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_5044)));
					}
					{
						BgL_appzd2lyzf2cinfoz20_bglt BgL_auxz00_6612;

						{
							obj_t BgL_auxz00_6613;

							{	/* Cfa/setup.scm 274 */
								BgL_objectz00_bglt BgL_tmpz00_6614;

								BgL_tmpz00_6614 =
									((BgL_objectz00_bglt)
									((BgL_appzd2lyzd2_bglt)
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_5044)));
								BgL_auxz00_6613 = BGL_OBJECT_WIDENING(BgL_tmpz00_6614);
							}
							BgL_auxz00_6612 =
								((BgL_appzd2lyzf2cinfoz20_bglt) BgL_auxz00_6613);
						}
						((((BgL_appzd2lyzf2cinfoz20_bglt) COBJECT(BgL_auxz00_6612))->
								BgL_approxz00) =
							((BgL_approxz00_bglt)
								BGl_makezd2emptyzd2approxz00zzcfa_approxz00()), BUNSPEC);
					}
					return
						((obj_t)
						((BgL_appzd2lyzd2_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_5044)));
				}
			else
				{	/* Cfa/setup.scm 272 */
					{	/* Cfa/setup.scm 276 */
						BgL_appzd2lyzf2cinfoz20_bglt BgL_wide1261z00_5250;

						BgL_wide1261z00_5250 =
							((BgL_appzd2lyzf2cinfoz20_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_appzd2lyzf2cinfoz20_bgl))));
						{	/* Cfa/setup.scm 276 */
							obj_t BgL_auxz00_6630;
							BgL_objectz00_bglt BgL_tmpz00_6626;

							BgL_auxz00_6630 = ((obj_t) BgL_wide1261z00_5250);
							BgL_tmpz00_6626 =
								((BgL_objectz00_bglt)
								((BgL_appzd2lyzd2_bglt)
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_5044)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6626, BgL_auxz00_6630);
						}
						((BgL_objectz00_bglt)
							((BgL_appzd2lyzd2_bglt)
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_5044)));
						{	/* Cfa/setup.scm 276 */
							long BgL_arg1963z00_5251;

							{	/* Cfa/setup.scm 276 */
								long BgL_res2326z00_5252;

								BgL_res2326z00_5252 =
									BGL_CLASS_INDEX(BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00);
								BgL_arg1963z00_5251 = BgL_res2326z00_5252;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_appzd2lyzd2_bglt)
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_5044))),
								BgL_arg1963z00_5251);
						}
						((BgL_appzd2lyzd2_bglt)
							((BgL_appzd2lyzd2_bglt)
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_5044)));
					}
					{
						BgL_appzd2lyzf2cinfoz20_bglt BgL_auxz00_6644;

						{
							obj_t BgL_auxz00_6645;

							{	/* Cfa/setup.scm 277 */
								BgL_objectz00_bglt BgL_tmpz00_6646;

								BgL_tmpz00_6646 =
									((BgL_objectz00_bglt)
									((BgL_appzd2lyzd2_bglt)
										((BgL_appzd2lyzd2_bglt) BgL_nodez00_5044)));
								BgL_auxz00_6645 = BGL_OBJECT_WIDENING(BgL_tmpz00_6646);
							}
							BgL_auxz00_6644 =
								((BgL_appzd2lyzf2cinfoz20_bglt) BgL_auxz00_6645);
						}
						((((BgL_appzd2lyzf2cinfoz20_bglt) COBJECT(BgL_auxz00_6644))->
								BgL_approxz00) =
							((BgL_approxz00_bglt)
								BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
										BGl_za2objza2z00zztype_cachez00))), BUNSPEC);
					}
					((BgL_appzd2lyzd2_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_5044));
					{	/* Cfa/setup.scm 278 */
						BgL_approxz00_bglt BgL_arg1964z00_5253;

						{
							BgL_appzd2lyzf2cinfoz20_bglt BgL_auxz00_6657;

							{
								obj_t BgL_auxz00_6658;

								{	/* Cfa/setup.scm 278 */
									BgL_objectz00_bglt BgL_tmpz00_6659;

									BgL_tmpz00_6659 =
										((BgL_objectz00_bglt)
										((BgL_appzd2lyzd2_bglt)
											((BgL_appzd2lyzd2_bglt) BgL_nodez00_5044)));
									BgL_auxz00_6658 = BGL_OBJECT_WIDENING(BgL_tmpz00_6659);
								}
								BgL_auxz00_6657 =
									((BgL_appzd2lyzf2cinfoz20_bglt) BgL_auxz00_6658);
							}
							BgL_arg1964z00_5253 =
								(((BgL_appzd2lyzf2cinfoz20_bglt) COBJECT(BgL_auxz00_6657))->
								BgL_approxz00);
						}
						return
							BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg1964z00_5253);
					}
				}
		}

	}



/* &fun-setup!-cfun1784 */
	obj_t BGl_z62funzd2setupz12zd2cfun1784z70zzcfa_setupz00(obj_t BgL_envz00_5045,
		obj_t BgL_funz00_5046, obj_t BgL_varz00_5047)
	{
		{	/* Cfa/setup.scm 257 */
			{
				BgL_cfunz00_bglt BgL_auxz00_6667;

				if (BGl_isazf3zf3zz__objectz00(BgL_varz00_5047,
						BGl_reshapedzd2globalzd2zzcfa_infoz00))
					{	/* Cfa/setup.scm 258 */
						BFALSE;
					}
				else
					{	/* Cfa/setup.scm 258 */
						{	/* Cfa/setup.scm 259 */
							BgL_reshapedzd2globalzd2_bglt BgL_wide1248z00_5255;

							BgL_wide1248z00_5255 =
								((BgL_reshapedzd2globalzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_reshapedzd2globalzd2_bgl))));
							{	/* Cfa/setup.scm 259 */
								obj_t BgL_auxz00_6675;
								BgL_objectz00_bglt BgL_tmpz00_6671;

								BgL_auxz00_6675 = ((obj_t) BgL_wide1248z00_5255);
								BgL_tmpz00_6671 =
									((BgL_objectz00_bglt)
									((BgL_globalz00_bglt)
										((BgL_globalz00_bglt) BgL_varz00_5047)));
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6671, BgL_auxz00_6675);
							}
							((BgL_objectz00_bglt)
								((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_varz00_5047)));
							{	/* Cfa/setup.scm 259 */
								long BgL_arg1957z00_5256;

								{	/* Cfa/setup.scm 259 */
									long BgL_res2323z00_5257;

									BgL_res2323z00_5257 =
										BGL_CLASS_INDEX(BGl_reshapedzd2globalzd2zzcfa_infoz00);
									BgL_arg1957z00_5256 = BgL_res2323z00_5257;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt)
										((BgL_globalz00_bglt)
											((BgL_globalz00_bglt) BgL_varz00_5047))),
									BgL_arg1957z00_5256);
							}
							((BgL_globalz00_bglt)
								((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_varz00_5047)));
						}
						((obj_t)
							((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_varz00_5047)));
					}
				{	/* Cfa/setup.scm 260 */
					BgL_approxz00_bglt BgL_approxz00_5258;

					{	/* Cfa/setup.scm 260 */
						BgL_typez00_bglt BgL_arg1959z00_5259;

						BgL_arg1959z00_5259 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_varz00_5047))))->BgL_typez00);
						BgL_approxz00_5258 =
							BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_arg1959z00_5259);
					}
					BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_5258);
					{	/* Cfa/setup.scm 262 */
						BgL_cfunzf2cinfozf2_bglt BgL_wide1252z00_5260;

						BgL_wide1252z00_5260 =
							((BgL_cfunzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_cfunzf2cinfozf2_bgl))));
						{	/* Cfa/setup.scm 262 */
							obj_t BgL_auxz00_6702;
							BgL_objectz00_bglt BgL_tmpz00_6698;

							BgL_auxz00_6702 = ((obj_t) BgL_wide1252z00_5260);
							BgL_tmpz00_6698 =
								((BgL_objectz00_bglt)
								((BgL_cfunz00_bglt) ((BgL_cfunz00_bglt) BgL_funz00_5046)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6698, BgL_auxz00_6702);
						}
						((BgL_objectz00_bglt)
							((BgL_cfunz00_bglt) ((BgL_cfunz00_bglt) BgL_funz00_5046)));
						{	/* Cfa/setup.scm 262 */
							long BgL_arg1958z00_5261;

							{	/* Cfa/setup.scm 262 */
								long BgL_res2324z00_5262;

								BgL_res2324z00_5262 =
									BGL_CLASS_INDEX(BGl_cfunzf2Cinfozf2zzcfa_infoz00);
								BgL_arg1958z00_5261 = BgL_res2324z00_5262;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_cfunz00_bglt)
										((BgL_cfunz00_bglt) BgL_funz00_5046))),
								BgL_arg1958z00_5261);
						}
						((BgL_cfunz00_bglt)
							((BgL_cfunz00_bglt) ((BgL_cfunz00_bglt) BgL_funz00_5046)));
					}
					{
						BgL_cfunzf2cinfozf2_bglt BgL_auxz00_6716;

						{
							obj_t BgL_auxz00_6717;

							{	/* Cfa/setup.scm 263 */
								BgL_objectz00_bglt BgL_tmpz00_6718;

								BgL_tmpz00_6718 =
									((BgL_objectz00_bglt)
									((BgL_cfunz00_bglt) ((BgL_cfunz00_bglt) BgL_funz00_5046)));
								BgL_auxz00_6717 = BGL_OBJECT_WIDENING(BgL_tmpz00_6718);
							}
							BgL_auxz00_6716 = ((BgL_cfunzf2cinfozf2_bglt) BgL_auxz00_6717);
						}
						((((BgL_cfunzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6716))->
								BgL_approxz00) =
							((BgL_approxz00_bglt) BgL_approxz00_5258), BUNSPEC);
					}
					BgL_auxz00_6667 =
						((BgL_cfunz00_bglt) ((BgL_cfunz00_bglt) BgL_funz00_5046));
				}
				return ((obj_t) BgL_auxz00_6667);
			}
		}

	}



/* &fun-setup!-sfun1782 */
	obj_t BGl_z62funzd2setupz12zd2sfun1782z70zzcfa_setupz00(obj_t BgL_envz00_5048,
		obj_t BgL_funz00_5049, obj_t BgL_varz00_5050)
	{
		{	/* Cfa/setup.scm 240 */
			{
				BgL_sfunz00_bglt BgL_auxz00_6728;

				{	/* Cfa/setup.scm 241 */
					bool_t BgL_test2480z00_6729;

					if (BGl_isazf3zf3zz__objectz00(BgL_varz00_5050,
							BGl_globalz00zzast_varz00))
						{	/* Cfa/setup.scm 241 */
							if (BGl_isazf3zf3zz__objectz00(BgL_varz00_5050,
									BGl_reshapedzd2globalzd2zzcfa_infoz00))
								{	/* Cfa/setup.scm 241 */
									BgL_test2480z00_6729 = ((bool_t) 0);
								}
							else
								{	/* Cfa/setup.scm 241 */
									BgL_test2480z00_6729 = ((bool_t) 1);
								}
						}
					else
						{	/* Cfa/setup.scm 241 */
							BgL_test2480z00_6729 = ((bool_t) 0);
						}
					if (BgL_test2480z00_6729)
						{	/* Cfa/setup.scm 241 */
							{	/* Cfa/setup.scm 242 */
								BgL_reshapedzd2globalzd2_bglt BgL_wide1236z00_5264;

								BgL_wide1236z00_5264 =
									((BgL_reshapedzd2globalzd2_bglt)
									BOBJECT(GC_MALLOC(sizeof(struct
												BgL_reshapedzd2globalzd2_bgl))));
								{	/* Cfa/setup.scm 242 */
									obj_t BgL_auxz00_6739;
									BgL_objectz00_bglt BgL_tmpz00_6735;

									BgL_auxz00_6739 = ((obj_t) BgL_wide1236z00_5264);
									BgL_tmpz00_6735 =
										((BgL_objectz00_bglt)
										((BgL_globalz00_bglt)
											((BgL_globalz00_bglt) BgL_varz00_5050)));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6735, BgL_auxz00_6739);
								}
								((BgL_objectz00_bglt)
									((BgL_globalz00_bglt)
										((BgL_globalz00_bglt) BgL_varz00_5050)));
								{	/* Cfa/setup.scm 242 */
									long BgL_arg1946z00_5265;

									{	/* Cfa/setup.scm 242 */
										long BgL_res2318z00_5266;

										BgL_res2318z00_5266 =
											BGL_CLASS_INDEX(BGl_reshapedzd2globalzd2zzcfa_infoz00);
										BgL_arg1946z00_5265 = BgL_res2318z00_5266;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_globalz00_bglt)
												((BgL_globalz00_bglt) BgL_varz00_5050))),
										BgL_arg1946z00_5265);
								}
								((BgL_globalz00_bglt)
									((BgL_globalz00_bglt)
										((BgL_globalz00_bglt) BgL_varz00_5050)));
							}
							((obj_t)
								((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_varz00_5050)));
						}
					else
						{	/* Cfa/setup.scm 241 */
							BFALSE;
						}
				}
				{	/* Cfa/setup.scm 243 */
					bool_t BgL_test2483z00_6756;

					if (BGl_isazf3zf3zz__objectz00(BgL_varz00_5050,
							BGl_globalz00zzast_varz00))
						{	/* Cfa/setup.scm 243 */
							BgL_test2483z00_6756 =
								(
								(((BgL_globalz00_bglt) COBJECT(
											((BgL_globalz00_bglt) BgL_varz00_5050)))->
									BgL_importz00) == CNST_TABLE_REF(((long) 3)));
						}
					else
						{	/* Cfa/setup.scm 243 */
							BgL_test2483z00_6756 = ((bool_t) 0);
						}
					if (BgL_test2483z00_6756)
						{	/* Cfa/setup.scm 244 */
							BgL_approxz00_bglt BgL_approxz00_5267;

							{	/* Cfa/setup.scm 244 */
								BgL_typez00_bglt BgL_arg1952z00_5268;

								BgL_arg1952z00_5268 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_varz00_5050))))->BgL_typez00);
								BgL_approxz00_5267 =
									BGl_makezd2typezd2approxz00zzcfa_approxz00
									(BgL_arg1952z00_5268);
							}
							BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_5267);
							{	/* Cfa/setup.scm 246 */
								BgL_externzd2sfunzf2cinfoz20_bglt BgL_wide1240z00_5269;

								BgL_wide1240z00_5269 =
									((BgL_externzd2sfunzf2cinfoz20_bglt)
									BOBJECT(GC_MALLOC(sizeof(struct
												BgL_externzd2sfunzf2cinfoz20_bgl))));
								{	/* Cfa/setup.scm 246 */
									obj_t BgL_auxz00_6773;
									BgL_objectz00_bglt BgL_tmpz00_6769;

									BgL_auxz00_6773 = ((obj_t) BgL_wide1240z00_5269);
									BgL_tmpz00_6769 =
										((BgL_objectz00_bglt)
										((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_5049)));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6769, BgL_auxz00_6773);
								}
								((BgL_objectz00_bglt)
									((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_5049)));
								{	/* Cfa/setup.scm 246 */
									long BgL_arg1951z00_5270;

									{	/* Cfa/setup.scm 246 */
										long BgL_res2320z00_5271;

										BgL_res2320z00_5271 =
											BGL_CLASS_INDEX
											(BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00);
										BgL_arg1951z00_5270 = BgL_res2320z00_5271;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt)
												((BgL_sfunz00_bglt) BgL_funz00_5049))),
										BgL_arg1951z00_5270);
								}
								((BgL_sfunz00_bglt)
									((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_5049)));
							}
							{
								BgL_externzd2sfunzf2cinfoz20_bglt BgL_auxz00_6787;

								{
									obj_t BgL_auxz00_6788;

									{	/* Cfa/setup.scm 247 */
										BgL_objectz00_bglt BgL_tmpz00_6789;

										BgL_tmpz00_6789 =
											((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt)
												((BgL_sfunz00_bglt) BgL_funz00_5049)));
										BgL_auxz00_6788 = BGL_OBJECT_WIDENING(BgL_tmpz00_6789);
									}
									BgL_auxz00_6787 =
										((BgL_externzd2sfunzf2cinfoz20_bglt) BgL_auxz00_6788);
								}
								((((BgL_externzd2sfunzf2cinfoz20_bglt)
											COBJECT(BgL_auxz00_6787))->BgL_polymorphiczf3zf3) =
									((bool_t) ((bool_t) 0)), BUNSPEC);
							}
							{
								BgL_externzd2sfunzf2cinfoz20_bglt BgL_auxz00_6796;

								{
									obj_t BgL_auxz00_6797;

									{	/* Cfa/setup.scm 247 */
										BgL_objectz00_bglt BgL_tmpz00_6798;

										BgL_tmpz00_6798 =
											((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt)
												((BgL_sfunz00_bglt) BgL_funz00_5049)));
										BgL_auxz00_6797 = BGL_OBJECT_WIDENING(BgL_tmpz00_6798);
									}
									BgL_auxz00_6796 =
										((BgL_externzd2sfunzf2cinfoz20_bglt) BgL_auxz00_6797);
								}
								((((BgL_externzd2sfunzf2cinfoz20_bglt)
											COBJECT(BgL_auxz00_6796))->BgL_approxz00) =
									((BgL_approxz00_bglt) BgL_approxz00_5267), BUNSPEC);
							}
							BgL_auxz00_6728 =
								((BgL_sfunz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_5049)));
						}
					else
						{	/* Cfa/setup.scm 248 */
							BgL_approxz00_bglt BgL_approxz00_5272;

							{	/* Cfa/setup.scm 248 */
								BgL_typez00_bglt BgL_arg1954z00_5273;

								BgL_arg1954z00_5273 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_varz00_5050)))->BgL_typez00);
								BgL_approxz00_5272 =
									BGl_makezd2typezd2approxz00zzcfa_approxz00
									(BgL_arg1954z00_5273);
							}
							if (CBOOL
								(BGl_za2optimzd2cfazd2forcezd2loosezd2localzd2functionzf3za2z21zzengine_paramz00))
								{	/* Cfa/setup.scm 249 */
									BGl_approxzd2setzd2topz12z12zzcfa_approxz00
										(BgL_approxz00_5272);
								}
							else
								{	/* Cfa/setup.scm 249 */
									BFALSE;
								}
							{	/* Cfa/setup.scm 251 */
								BgL_internzd2sfunzf2cinfoz20_bglt BgL_wide1244z00_5274;

								BgL_wide1244z00_5274 =
									((BgL_internzd2sfunzf2cinfoz20_bglt)
									BOBJECT(GC_MALLOC(sizeof(struct
												BgL_internzd2sfunzf2cinfoz20_bgl))));
								{	/* Cfa/setup.scm 251 */
									obj_t BgL_auxz00_6819;
									BgL_objectz00_bglt BgL_tmpz00_6815;

									BgL_auxz00_6819 = ((obj_t) BgL_wide1244z00_5274);
									BgL_tmpz00_6815 =
										((BgL_objectz00_bglt)
										((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_5049)));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6815, BgL_auxz00_6819);
								}
								((BgL_objectz00_bglt)
									((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_5049)));
								{	/* Cfa/setup.scm 251 */
									long BgL_arg1953z00_5275;

									{	/* Cfa/setup.scm 251 */
										long BgL_res2321z00_5276;

										BgL_res2321z00_5276 =
											BGL_CLASS_INDEX
											(BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00);
										BgL_arg1953z00_5275 = BgL_res2321z00_5276;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt)
												((BgL_sfunz00_bglt) BgL_funz00_5049))),
										BgL_arg1953z00_5275);
								}
								((BgL_sfunz00_bglt)
									((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_5049)));
							}
							{
								BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_6833;

								{
									obj_t BgL_auxz00_6834;

									{	/* Cfa/setup.scm 252 */
										BgL_objectz00_bglt BgL_tmpz00_6835;

										BgL_tmpz00_6835 =
											((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt)
												((BgL_sfunz00_bglt) BgL_funz00_5049)));
										BgL_auxz00_6834 = BGL_OBJECT_WIDENING(BgL_tmpz00_6835);
									}
									BgL_auxz00_6833 =
										((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_6834);
								}
								((((BgL_internzd2sfunzf2cinfoz20_bglt)
											COBJECT(BgL_auxz00_6833))->BgL_polymorphiczf3zf3) =
									((bool_t) ((bool_t) 0)), BUNSPEC);
							}
							{
								BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_6842;

								{
									obj_t BgL_auxz00_6843;

									{	/* Cfa/setup.scm 252 */
										BgL_objectz00_bglt BgL_tmpz00_6844;

										BgL_tmpz00_6844 =
											((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt)
												((BgL_sfunz00_bglt) BgL_funz00_5049)));
										BgL_auxz00_6843 = BGL_OBJECT_WIDENING(BgL_tmpz00_6844);
									}
									BgL_auxz00_6842 =
										((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_6843);
								}
								((((BgL_internzd2sfunzf2cinfoz20_bglt)
											COBJECT(BgL_auxz00_6842))->BgL_approxz00) =
									((BgL_approxz00_bglt) BgL_approxz00_5272), BUNSPEC);
							}
							{
								BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_6851;

								{
									obj_t BgL_auxz00_6852;

									{	/* Cfa/setup.scm 252 */
										BgL_objectz00_bglt BgL_tmpz00_6853;

										BgL_tmpz00_6853 =
											((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt)
												((BgL_sfunz00_bglt) BgL_funz00_5049)));
										BgL_auxz00_6852 = BGL_OBJECT_WIDENING(BgL_tmpz00_6853);
									}
									BgL_auxz00_6851 =
										((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_6852);
								}
								((((BgL_internzd2sfunzf2cinfoz20_bglt)
											COBJECT(BgL_auxz00_6851))->BgL_stampz00) =
									((long) ((long) -1)), BUNSPEC);
							}
							BgL_auxz00_6728 =
								((BgL_sfunz00_bglt)
								((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_funz00_5049)));
				}}
				return ((obj_t) BgL_auxz00_6728);
			}
		}

	}



/* &node-setup!-app1778 */
	obj_t BGl_z62nodezd2setupz12zd2app1778z70zzcfa_setupz00(obj_t BgL_envz00_5051,
		obj_t BgL_nodez00_5052)
	{
		{	/* Cfa/setup.scm 222 */
			BGl_nodezd2setupza2z12z62zzcfa_setupz00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_5052)))->BgL_argsz00));
			{	/* Tools/trace.sch 53 */
				BgL_variablez00_bglt BgL_variablez00_5278;

				BgL_variablez00_5278 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_5052)))->BgL_funz00)))->
					BgL_variablez00);
				{	/* Tools/trace.sch 53 */
					BgL_valuez00_bglt BgL_arg1941z00_5279;

					BgL_arg1941z00_5279 =
						(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_5278))->
						BgL_valuez00);
					return BGl_funzd2setupz12zc0zzcfa_setupz00(((BgL_funz00_bglt)
							BgL_arg1941z00_5279), ((obj_t) BgL_variablez00_5278));
				}
			}
		}

	}



/* &node-setup!-sync1776 */
	obj_t BGl_z62nodezd2setupz12zd2sync1776z70zzcfa_setupz00(obj_t
		BgL_envz00_5053, obj_t BgL_nodez00_5054)
	{
		{	/* Cfa/setup.scm 213 */
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_5054)))->BgL_mutexz00));
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_5054)))->BgL_prelockz00));
			return
				BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_5054)))->BgL_bodyz00));
		}

	}



/* &node-setup!-sequence1774 */
	obj_t BGl_z62nodezd2setupz12zd2sequence1774z70zzcfa_setupz00(obj_t
		BgL_envz00_5055, obj_t BgL_nodez00_5056)
	{
		{	/* Cfa/setup.scm 206 */
			return
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_5056)))->BgL_nodesz00));
		}

	}



/* &node-setup!-closure1772 */
	obj_t BGl_z62nodezd2setupz12zd2closure1772z70zzcfa_setupz00(obj_t
		BgL_envz00_5057, obj_t BgL_nodez00_5058)
	{
		{	/* Cfa/setup.scm 200 */
			{	/* Cfa/setup.scm 201 */
				obj_t BgL_arg1935z00_5283;

				BgL_arg1935z00_5283 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_5058)));
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string2362z00zzcfa_setupz00, BGl_string2400z00zzcfa_setupz00,
					BgL_arg1935z00_5283);
			}
		}

	}



/* &variable-value-setup1770 */
	obj_t BGl_z62variablezd2valuezd2setup1770z62zzcfa_setupz00(obj_t
		BgL_envz00_5059, obj_t BgL_valuez00_5060, obj_t BgL_varz00_5061)
	{
		{	/* Cfa/setup.scm 191 */
			{	/* Cfa/setup.scm 192 */
				BgL_cvarzf2cinfozf2_bglt BgL_wide1225z00_5285;

				BgL_wide1225z00_5285 =
					((BgL_cvarzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cvarzf2cinfozf2_bgl))));
				{	/* Cfa/setup.scm 192 */
					obj_t BgL_auxz00_6895;
					BgL_objectz00_bglt BgL_tmpz00_6891;

					BgL_auxz00_6895 = ((obj_t) BgL_wide1225z00_5285);
					BgL_tmpz00_6891 =
						((BgL_objectz00_bglt)
						((BgL_cvarz00_bglt) ((BgL_cvarz00_bglt) BgL_valuez00_5060)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6891, BgL_auxz00_6895);
				}
				((BgL_objectz00_bglt)
					((BgL_cvarz00_bglt) ((BgL_cvarz00_bglt) BgL_valuez00_5060)));
				{	/* Cfa/setup.scm 192 */
					long BgL_arg1929z00_5286;

					{	/* Cfa/setup.scm 192 */
						long BgL_res2315z00_5287;

						BgL_res2315z00_5287 =
							BGL_CLASS_INDEX(BGl_cvarzf2Cinfozf2zzcfa_infoz00);
						BgL_arg1929z00_5286 = BgL_res2315z00_5287;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_cvarz00_bglt)
								((BgL_cvarz00_bglt) BgL_valuez00_5060))), BgL_arg1929z00_5286);
				}
				((BgL_cvarz00_bglt)
					((BgL_cvarz00_bglt) ((BgL_cvarz00_bglt) BgL_valuez00_5060)));
			}
			{
				BgL_approxz00_bglt BgL_auxz00_6917;
				BgL_cvarzf2cinfozf2_bglt BgL_auxz00_6909;

				{	/* Cfa/setup.scm 193 */
					BgL_typez00_bglt BgL_arg1930z00_5288;

					BgL_arg1930z00_5288 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_varz00_5061)))->BgL_typez00);
					BgL_auxz00_6917 =
						BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_arg1930z00_5288);
				}
				{
					obj_t BgL_auxz00_6910;

					{	/* Cfa/setup.scm 193 */
						BgL_objectz00_bglt BgL_tmpz00_6911;

						BgL_tmpz00_6911 =
							((BgL_objectz00_bglt)
							((BgL_cvarz00_bglt) ((BgL_cvarz00_bglt) BgL_valuez00_5060)));
						BgL_auxz00_6910 = BGL_OBJECT_WIDENING(BgL_tmpz00_6911);
					}
					BgL_auxz00_6909 = ((BgL_cvarzf2cinfozf2_bglt) BgL_auxz00_6910);
				}
				((((BgL_cvarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6909))->
						BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_6917), BUNSPEC);
			}
			((BgL_cvarz00_bglt) ((BgL_cvarz00_bglt) BgL_valuez00_5060));
			{	/* Cfa/setup.scm 194 */
				bool_t BgL_test2486z00_6924;

				{	/* Cfa/setup.scm 194 */
					BgL_typez00_bglt BgL_arg1934z00_5289;

					BgL_arg1934z00_5289 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_varz00_5061)))->BgL_typez00);
					BgL_test2486z00_6924 =
						BGl_alloczd2typezf3z21zzcfa_setupz00(BgL_arg1934z00_5289);
				}
				if (BgL_test2486z00_6924)
					{	/* Cfa/setup.scm 195 */
						BgL_approxz00_bglt BgL_arg1933z00_5290;

						{
							BgL_cvarzf2cinfozf2_bglt BgL_auxz00_6928;

							{
								obj_t BgL_auxz00_6929;

								{	/* Cfa/setup.scm 195 */
									BgL_objectz00_bglt BgL_tmpz00_6930;

									BgL_tmpz00_6930 =
										((BgL_objectz00_bglt)
										((BgL_cvarz00_bglt)
											((BgL_cvarz00_bglt) BgL_valuez00_5060)));
									BgL_auxz00_6929 = BGL_OBJECT_WIDENING(BgL_tmpz00_6930);
								}
								BgL_auxz00_6928 = ((BgL_cvarzf2cinfozf2_bglt) BgL_auxz00_6929);
							}
							BgL_arg1933z00_5290 =
								(((BgL_cvarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6928))->
								BgL_approxz00);
						}
						return
							BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg1933z00_5290);
					}
				else
					{	/* Cfa/setup.scm 194 */
						return BFALSE;
					}
			}
		}

	}



/* &variable-value-setup1768 */
	obj_t BGl_z62variablezd2valuezd2setup1768z62zzcfa_setupz00(obj_t
		BgL_envz00_5062, obj_t BgL_valuez00_5063, obj_t BgL_varz00_5064)
	{
		{	/* Cfa/setup.scm 169 */
			if (BGl_isazf3zf3zz__objectz00(BgL_varz00_5064,
					BGl_globalz00zzast_varz00))
				{	/* Tools/trace.sch 53 */
					bool_t BgL_test2488z00_6940;

					{	/* Tools/trace.sch 53 */
						bool_t BgL_test2489z00_6941;

						{	/* Tools/trace.sch 53 */
							obj_t BgL_arg1926z00_5292;

							BgL_arg1926z00_5292 =
								(((BgL_globalz00_bglt) COBJECT(
										((BgL_globalz00_bglt) BgL_varz00_5064)))->BgL_modulez00);
							BgL_test2489z00_6941 =
								(BgL_arg1926z00_5292 == BGl_za2moduleza2z00zzmodule_modulez00);
						}
						if (BgL_test2489z00_6941)
							{	/* Tools/trace.sch 53 */
								if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
											(((BgL_scnstz00_bglt) COBJECT(
														((BgL_scnstz00_bglt) BgL_valuez00_5063)))->
												BgL_classz00), CNST_TABLE_REF(((long) 4)))))
									{	/* Tools/trace.sch 53 */
										obj_t BgL_arg1924z00_5293;

										BgL_arg1924z00_5293 =
											(((BgL_scnstz00_bglt) COBJECT(
													((BgL_scnstz00_bglt) BgL_valuez00_5063)))->
											BgL_nodez00);
										BgL_test2488z00_6940 =
											BGl_isazf3zf3zz__objectz00(BgL_arg1924z00_5293,
											BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00);
									}
								else
									{	/* Tools/trace.sch 53 */
										BgL_test2488z00_6940 = ((bool_t) 0);
									}
							}
						else
							{	/* Tools/trace.sch 53 */
								BgL_test2488z00_6940 = ((bool_t) 0);
							}
					}
					if (BgL_test2488z00_6940)
						{	/* Tools/trace.sch 53 */
							obj_t BgL_nodez00_5294;

							BgL_nodez00_5294 =
								(((BgL_scnstz00_bglt) COBJECT(
										((BgL_scnstz00_bglt) BgL_valuez00_5063)))->BgL_nodez00);
							BGl_nodezd2setupz12zc0zzcfa_setupz00(
								((BgL_nodez00_bglt) BgL_nodez00_5294));
							{	/* Tools/trace.sch 53 */
								BgL_scnstzf2cinfozf2_bglt BgL_wide1213z00_5295;

								BgL_wide1213z00_5295 =
									((BgL_scnstzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_scnstzf2cinfozf2_bgl))));
								{	/* Tools/trace.sch 53 */
									obj_t BgL_auxz00_6963;
									BgL_objectz00_bglt BgL_tmpz00_6959;

									BgL_auxz00_6963 = ((obj_t) BgL_wide1213z00_5295);
									BgL_tmpz00_6959 =
										((BgL_objectz00_bglt)
										((BgL_scnstz00_bglt)
											((BgL_scnstz00_bglt) BgL_valuez00_5063)));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6959, BgL_auxz00_6963);
								}
								((BgL_objectz00_bglt)
									((BgL_scnstz00_bglt)
										((BgL_scnstz00_bglt) BgL_valuez00_5063)));
								{	/* Tools/trace.sch 53 */
									long BgL_arg1919z00_5296;

									{	/* Tools/trace.sch 53 */
										long BgL_res2312z00_5297;

										BgL_res2312z00_5297 =
											BGL_CLASS_INDEX(BGl_scnstzf2Cinfozf2zzcfa_infoz00);
										BgL_arg1919z00_5296 = BgL_res2312z00_5297;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_scnstz00_bglt)
												((BgL_scnstz00_bglt) BgL_valuez00_5063))),
										BgL_arg1919z00_5296);
								}
								((BgL_scnstz00_bglt)
									((BgL_scnstz00_bglt)
										((BgL_scnstz00_bglt) BgL_valuez00_5063)));
							}
							{
								BgL_approxz00_bglt BgL_auxz00_6985;
								BgL_scnstzf2cinfozf2_bglt BgL_auxz00_6977;

								{
									BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_6986;

									{
										obj_t BgL_auxz00_6987;

										{	/* Tools/trace.sch 53 */
											BgL_objectz00_bglt BgL_tmpz00_6988;

											BgL_tmpz00_6988 =
												((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_nodez00_5294));
											BgL_auxz00_6987 = BGL_OBJECT_WIDENING(BgL_tmpz00_6988);
										}
										BgL_auxz00_6986 =
											((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_6987);
									}
									BgL_auxz00_6985 =
										(((BgL_makezd2procedurezd2appz00_bglt)
											COBJECT(BgL_auxz00_6986))->BgL_approxz00);
								}
								{
									obj_t BgL_auxz00_6978;

									{	/* Tools/trace.sch 53 */
										BgL_objectz00_bglt BgL_tmpz00_6979;

										BgL_tmpz00_6979 =
											((BgL_objectz00_bglt)
											((BgL_scnstz00_bglt)
												((BgL_scnstz00_bglt) BgL_valuez00_5063)));
										BgL_auxz00_6978 = BGL_OBJECT_WIDENING(BgL_tmpz00_6979);
									}
									BgL_auxz00_6977 =
										((BgL_scnstzf2cinfozf2_bglt) BgL_auxz00_6978);
								}
								((((BgL_scnstzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6977))->
										BgL_approxz00) =
									((BgL_approxz00_bglt) BgL_auxz00_6985), BUNSPEC);
							}
							return
								((obj_t)
								((BgL_scnstz00_bglt) ((BgL_scnstz00_bglt) BgL_valuez00_5063)));
						}
					else
						{	/* Tools/trace.sch 53 */
							BgL_scnstz00_bglt BgL_valuez00_5298;

							{	/* Tools/trace.sch 53 */
								BgL_scnstzf2cinfozf2_bglt BgL_wide1217z00_5299;

								BgL_wide1217z00_5299 =
									((BgL_scnstzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_scnstzf2cinfozf2_bgl))));
								{	/* Tools/trace.sch 53 */
									obj_t BgL_auxz00_7003;
									BgL_objectz00_bglt BgL_tmpz00_6999;

									BgL_auxz00_7003 = ((obj_t) BgL_wide1217z00_5299);
									BgL_tmpz00_6999 =
										((BgL_objectz00_bglt)
										((BgL_scnstz00_bglt)
											((BgL_scnstz00_bglt) BgL_valuez00_5063)));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6999, BgL_auxz00_7003);
								}
								((BgL_objectz00_bglt)
									((BgL_scnstz00_bglt)
										((BgL_scnstz00_bglt) BgL_valuez00_5063)));
								{	/* Tools/trace.sch 53 */
									long BgL_arg1921z00_5300;

									{	/* Tools/trace.sch 53 */
										long BgL_res2313z00_5301;

										BgL_res2313z00_5301 =
											BGL_CLASS_INDEX(BGl_scnstzf2Cinfozf2zzcfa_infoz00);
										BgL_arg1921z00_5300 = BgL_res2313z00_5301;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_scnstz00_bglt)
												((BgL_scnstz00_bglt) BgL_valuez00_5063))),
										BgL_arg1921z00_5300);
								}
								((BgL_scnstz00_bglt)
									((BgL_scnstz00_bglt)
										((BgL_scnstz00_bglt) BgL_valuez00_5063)));
							}
							{
								BgL_approxz00_bglt BgL_auxz00_7025;
								BgL_scnstzf2cinfozf2_bglt BgL_auxz00_7017;

								{	/* Tools/trace.sch 53 */
									BgL_typez00_bglt BgL_arg1923z00_5302;

									BgL_arg1923z00_5302 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_varz00_5064))))->
										BgL_typez00);
									BgL_auxz00_7025 =
										BGl_makezd2typezd2approxz00zzcfa_approxz00
										(BgL_arg1923z00_5302);
								}
								{
									obj_t BgL_auxz00_7018;

									{	/* Tools/trace.sch 53 */
										BgL_objectz00_bglt BgL_tmpz00_7019;

										BgL_tmpz00_7019 =
											((BgL_objectz00_bglt)
											((BgL_scnstz00_bglt)
												((BgL_scnstz00_bglt) BgL_valuez00_5063)));
										BgL_auxz00_7018 = BGL_OBJECT_WIDENING(BgL_tmpz00_7019);
									}
									BgL_auxz00_7017 =
										((BgL_scnstzf2cinfozf2_bglt) BgL_auxz00_7018);
								}
								((((BgL_scnstzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7017))->
										BgL_approxz00) =
									((BgL_approxz00_bglt) BgL_auxz00_7025), BUNSPEC);
							}
							BgL_valuez00_5298 =
								((BgL_scnstz00_bglt) ((BgL_scnstz00_bglt) BgL_valuez00_5063));
							{	/* Tools/trace.sch 53 */
								BgL_approxz00_bglt BgL_arg1920z00_5303;

								{
									BgL_scnstzf2cinfozf2_bglt BgL_auxz00_7033;

									{
										obj_t BgL_auxz00_7034;

										{	/* Tools/trace.sch 53 */
											BgL_objectz00_bglt BgL_tmpz00_7035;

											BgL_tmpz00_7035 =
												((BgL_objectz00_bglt) BgL_valuez00_5298);
											BgL_auxz00_7034 = BGL_OBJECT_WIDENING(BgL_tmpz00_7035);
										}
										BgL_auxz00_7033 =
											((BgL_scnstzf2cinfozf2_bglt) BgL_auxz00_7034);
									}
									BgL_arg1920z00_5303 =
										(((BgL_scnstzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7033))->
										BgL_approxz00);
								}
								return
									BGl_approxzd2setzd2topz12z12zzcfa_approxz00
									(BgL_arg1920z00_5303);
							}
						}
				}
			else
				{	/* Tools/trace.sch 53 */
					{	/* Tools/trace.sch 53 */
						BgL_scnstzf2cinfozf2_bglt BgL_wide1221z00_5304;

						BgL_wide1221z00_5304 =
							((BgL_scnstzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_scnstzf2cinfozf2_bgl))));
						{	/* Tools/trace.sch 53 */
							obj_t BgL_auxz00_7046;
							BgL_objectz00_bglt BgL_tmpz00_7042;

							BgL_auxz00_7046 = ((obj_t) BgL_wide1221z00_5304);
							BgL_tmpz00_7042 =
								((BgL_objectz00_bglt)
								((BgL_scnstz00_bglt) ((BgL_scnstz00_bglt) BgL_valuez00_5063)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7042, BgL_auxz00_7046);
						}
						((BgL_objectz00_bglt)
							((BgL_scnstz00_bglt) ((BgL_scnstz00_bglt) BgL_valuez00_5063)));
						{	/* Tools/trace.sch 53 */
							long BgL_arg1927z00_5305;

							{	/* Tools/trace.sch 53 */
								long BgL_res2314z00_5306;

								BgL_res2314z00_5306 =
									BGL_CLASS_INDEX(BGl_scnstzf2Cinfozf2zzcfa_infoz00);
								BgL_arg1927z00_5305 = BgL_res2314z00_5306;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_scnstz00_bglt)
										((BgL_scnstz00_bglt) BgL_valuez00_5063))),
								BgL_arg1927z00_5305);
						}
						((BgL_scnstz00_bglt)
							((BgL_scnstz00_bglt) ((BgL_scnstz00_bglt) BgL_valuez00_5063)));
					}
					{
						BgL_approxz00_bglt BgL_auxz00_7068;
						BgL_scnstzf2cinfozf2_bglt BgL_auxz00_7060;

						{	/* Tools/trace.sch 53 */
							BgL_typez00_bglt BgL_arg1928z00_5307;

							BgL_arg1928z00_5307 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_varz00_5064)))->BgL_typez00);
							BgL_auxz00_7068 =
								BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_arg1928z00_5307);
						}
						{
							obj_t BgL_auxz00_7061;

							{	/* Tools/trace.sch 53 */
								BgL_objectz00_bglt BgL_tmpz00_7062;

								BgL_tmpz00_7062 =
									((BgL_objectz00_bglt)
									((BgL_scnstz00_bglt)
										((BgL_scnstz00_bglt) BgL_valuez00_5063)));
								BgL_auxz00_7061 = BGL_OBJECT_WIDENING(BgL_tmpz00_7062);
							}
							BgL_auxz00_7060 = ((BgL_scnstzf2cinfozf2_bglt) BgL_auxz00_7061);
						}
						((((BgL_scnstzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7060))->
								BgL_approxz00) =
							((BgL_approxz00_bglt) BgL_auxz00_7068), BUNSPEC);
					}
					return
						((obj_t)
						((BgL_scnstz00_bglt) ((BgL_scnstz00_bglt) BgL_valuez00_5063)));
				}
		}

	}



/* &variable-value-setup1766 */
	obj_t BGl_z62variablezd2valuezd2setup1766z62zzcfa_setupz00(obj_t
		BgL_envz00_5065, obj_t BgL_valuez00_5066, obj_t BgL_varz00_5067)
	{
		{	/* Cfa/setup.scm 163 */
			return CNST_TABLE_REF(((long) 5));
		}

	}



/* &variable-value-setup1764 */
	obj_t BGl_z62variablezd2valuezd2setup1764z62zzcfa_setupz00(obj_t
		BgL_envz00_5068, obj_t BgL_valuez00_5069, obj_t BgL_varz00_5070)
	{
		{	/* Cfa/setup.scm 156 */
			{
				BgL_sexitz00_bglt BgL_auxz00_7077;

				{	/* Cfa/setup.scm 157 */
					BgL_sexitzf2cinfozf2_bglt BgL_wide1209z00_5310;

					BgL_wide1209z00_5310 =
						((BgL_sexitzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_sexitzf2cinfozf2_bgl))));
					{	/* Cfa/setup.scm 157 */
						obj_t BgL_auxz00_7083;
						BgL_objectz00_bglt BgL_tmpz00_7079;

						BgL_auxz00_7083 = ((obj_t) BgL_wide1209z00_5310);
						BgL_tmpz00_7079 =
							((BgL_objectz00_bglt)
							((BgL_sexitz00_bglt) ((BgL_sexitz00_bglt) BgL_valuez00_5069)));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7079, BgL_auxz00_7083);
					}
					((BgL_objectz00_bglt)
						((BgL_sexitz00_bglt) ((BgL_sexitz00_bglt) BgL_valuez00_5069)));
					{	/* Cfa/setup.scm 157 */
						long BgL_arg1908z00_5311;

						{	/* Cfa/setup.scm 157 */
							long BgL_res2309z00_5312;

							BgL_res2309z00_5312 =
								BGL_CLASS_INDEX(BGl_sexitzf2Cinfozf2zzcfa_infoz00);
							BgL_arg1908z00_5311 = BgL_res2309z00_5312;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_sexitz00_bglt)
									((BgL_sexitz00_bglt) BgL_valuez00_5069))),
							BgL_arg1908z00_5311);
					}
					((BgL_sexitz00_bglt)
						((BgL_sexitz00_bglt) ((BgL_sexitz00_bglt) BgL_valuez00_5069)));
				}
				{
					BgL_approxz00_bglt BgL_auxz00_7105;
					BgL_sexitzf2cinfozf2_bglt BgL_auxz00_7097;

					{	/* Cfa/setup.scm 158 */
						BgL_typez00_bglt BgL_arg1909z00_5313;

						BgL_arg1909z00_5313 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_varz00_5070)))->BgL_typez00);
						BgL_auxz00_7105 =
							BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_arg1909z00_5313);
					}
					{
						obj_t BgL_auxz00_7098;

						{	/* Cfa/setup.scm 158 */
							BgL_objectz00_bglt BgL_tmpz00_7099;

							BgL_tmpz00_7099 =
								((BgL_objectz00_bglt)
								((BgL_sexitz00_bglt) ((BgL_sexitz00_bglt) BgL_valuez00_5069)));
							BgL_auxz00_7098 = BGL_OBJECT_WIDENING(BgL_tmpz00_7099);
						}
						BgL_auxz00_7097 = ((BgL_sexitzf2cinfozf2_bglt) BgL_auxz00_7098);
					}
					((((BgL_sexitzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7097))->
							BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_7105), BUNSPEC);
				}
				BgL_auxz00_7077 =
					((BgL_sexitz00_bglt) ((BgL_sexitz00_bglt) BgL_valuez00_5069));
				return ((obj_t) BgL_auxz00_7077);
			}
		}

	}



/* &variable-value-setup1762 */
	obj_t BGl_z62variablezd2valuezd2setup1762z62zzcfa_setupz00(obj_t
		BgL_envz00_5071, obj_t BgL_valuez00_5072, obj_t BgL_varz00_5073)
	{
		{	/* Cfa/setup.scm 148 */
			{

				{	/* Cfa/setup.scm 148 */
					obj_t BgL_nextzd2method1761zd2_5316;

					BgL_nextzd2method1761zd2_5316 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_svarz00_bglt) BgL_valuez00_5072)),
						BGl_variablezd2valuezd2setupz12zd2envzc0zzcfa_setupz00,
						BGl_prezd2clozd2envz00zzcfa_infoz00);
					PROCEDURE_ENTRY(BgL_nextzd2method1761zd2_5316)
						(BgL_nextzd2method1761zd2_5316,
						((obj_t) ((BgL_svarz00_bglt) BgL_valuez00_5072)), BgL_varz00_5073,
						BEOA);
				}
				{	/* Cfa/setup.scm 151 */
					BgL_valuez00_bglt BgL_arg1907z00_5317;

					BgL_arg1907z00_5317 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_varz00_5073))))->BgL_valuez00);
					{
						BgL_svarzf2cinfozf2_bglt BgL_auxz00_7126;

						{
							obj_t BgL_auxz00_7127;

							{	/* Cfa/setup.scm 151 */
								BgL_objectz00_bglt BgL_tmpz00_7128;

								BgL_tmpz00_7128 =
									((BgL_objectz00_bglt)
									((BgL_svarz00_bglt) BgL_arg1907z00_5317));
								BgL_auxz00_7127 = BGL_OBJECT_WIDENING(BgL_tmpz00_7128);
							}
							BgL_auxz00_7126 = ((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_7127);
						}
						return
							((((BgL_svarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7126))->
								BgL_clozd2envzf3z21) = ((bool_t) ((bool_t) 1)), BUNSPEC);
					}
				}
			}
		}

	}



/* &variable-value-setup1760 */
	obj_t BGl_z62variablezd2valuezd2setup1760z62zzcfa_setupz00(obj_t
		BgL_envz00_5074, obj_t BgL_valuez00_5075, obj_t BgL_varz00_5076)
	{
		{	/* Cfa/setup.scm 135 */
			{	/* Cfa/setup.scm 136 */
				BgL_typez00_bglt BgL_typz00_5320;

				BgL_typz00_5320 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_5076)))->BgL_typez00);
				{	/* Cfa/setup.scm 137 */
					bool_t BgL_test2491z00_7136;

					{	/* Cfa/setup.scm 137 */
						bool_t BgL_res2306z00_5321;

						BgL_res2306z00_5321 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_variablez00_bglt) BgL_varz00_5076)),
							BGl_globalz00zzast_varz00);
						BgL_test2491z00_7136 = BgL_res2306z00_5321;
					}
					if (BgL_test2491z00_7136)
						{	/* Cfa/setup.scm 138 */
							BgL_svarz00_bglt BgL_valuez00_5322;

							{	/* Cfa/setup.scm 138 */
								BgL_svarzf2cinfozf2_bglt BgL_wide1201z00_5323;

								BgL_wide1201z00_5323 =
									((BgL_svarzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_svarzf2cinfozf2_bgl))));
								{	/* Cfa/setup.scm 138 */
									obj_t BgL_auxz00_7145;
									BgL_objectz00_bglt BgL_tmpz00_7141;

									BgL_auxz00_7145 = ((obj_t) BgL_wide1201z00_5323);
									BgL_tmpz00_7141 =
										((BgL_objectz00_bglt)
										((BgL_svarz00_bglt)
											((BgL_svarz00_bglt) BgL_valuez00_5075)));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7141, BgL_auxz00_7145);
								}
								((BgL_objectz00_bglt)
									((BgL_svarz00_bglt) ((BgL_svarz00_bglt) BgL_valuez00_5075)));
								{	/* Cfa/setup.scm 138 */
									long BgL_arg1905z00_5324;

									{	/* Cfa/setup.scm 138 */
										long BgL_res2307z00_5325;

										BgL_res2307z00_5325 =
											BGL_CLASS_INDEX(BGl_svarzf2Cinfozf2zzcfa_infoz00);
										BgL_arg1905z00_5324 = BgL_res2307z00_5325;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_svarz00_bglt)
												((BgL_svarz00_bglt) BgL_valuez00_5075))),
										BgL_arg1905z00_5324);
								}
								((BgL_svarz00_bglt)
									((BgL_svarz00_bglt) ((BgL_svarz00_bglt) BgL_valuez00_5075)));
							}
							{
								BgL_svarzf2cinfozf2_bglt BgL_auxz00_7159;

								{
									obj_t BgL_auxz00_7160;

									{	/* Cfa/setup.scm 139 */
										BgL_objectz00_bglt BgL_tmpz00_7161;

										BgL_tmpz00_7161 =
											((BgL_objectz00_bglt)
											((BgL_svarz00_bglt)
												((BgL_svarz00_bglt) BgL_valuez00_5075)));
										BgL_auxz00_7160 = BGL_OBJECT_WIDENING(BgL_tmpz00_7161);
									}
									BgL_auxz00_7159 =
										((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_7160);
								}
								((((BgL_svarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7159))->
										BgL_approxz00) =
									((BgL_approxz00_bglt)
										BGl_makezd2typezd2approxz00zzcfa_approxz00
										(BgL_typz00_5320)), BUNSPEC);
							}
							{
								BgL_svarzf2cinfozf2_bglt BgL_auxz00_7169;

								{
									obj_t BgL_auxz00_7170;

									{	/* Cfa/setup.scm 139 */
										BgL_objectz00_bglt BgL_tmpz00_7171;

										BgL_tmpz00_7171 =
											((BgL_objectz00_bglt)
											((BgL_svarz00_bglt)
												((BgL_svarz00_bglt) BgL_valuez00_5075)));
										BgL_auxz00_7170 = BGL_OBJECT_WIDENING(BgL_tmpz00_7171);
									}
									BgL_auxz00_7169 =
										((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_7170);
								}
								((((BgL_svarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7169))->
										BgL_clozd2envzf3z21) = ((bool_t) ((bool_t) 0)), BUNSPEC);
							}
							{
								BgL_svarzf2cinfozf2_bglt BgL_auxz00_7178;

								{
									obj_t BgL_auxz00_7179;

									{	/* Cfa/setup.scm 139 */
										BgL_objectz00_bglt BgL_tmpz00_7180;

										BgL_tmpz00_7180 =
											((BgL_objectz00_bglt)
											((BgL_svarz00_bglt)
												((BgL_svarz00_bglt) BgL_valuez00_5075)));
										BgL_auxz00_7179 = BGL_OBJECT_WIDENING(BgL_tmpz00_7180);
									}
									BgL_auxz00_7178 =
										((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_7179);
								}
								((((BgL_svarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7178))->
										BgL_stampz00) = ((long) ((long) -1)), BUNSPEC);
							}
							BgL_valuez00_5322 =
								((BgL_svarz00_bglt) ((BgL_svarz00_bglt) BgL_valuez00_5075));
							{	/* Cfa/setup.scm 140 */
								bool_t BgL_test2492z00_7189;

								if (
									((((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt)
														((BgL_variablez00_bglt) BgL_varz00_5076))))->
											BgL_importz00) == CNST_TABLE_REF(((long) 6))))
									{	/* Cfa/setup.scm 140 */
										BgL_test2492z00_7189 = ((bool_t) 0);
									}
								else
									{	/* Cfa/setup.scm 140 */
										BgL_test2492z00_7189 =
											BGl_alloczd2typezf3z21zzcfa_setupz00(BgL_typz00_5320);
									}
								if (BgL_test2492z00_7189)
									{	/* Cfa/setup.scm 141 */
										BgL_approxz00_bglt BgL_arg1903z00_5326;

										{
											BgL_svarzf2cinfozf2_bglt BgL_auxz00_7197;

											{
												obj_t BgL_auxz00_7198;

												{	/* Cfa/setup.scm 141 */
													BgL_objectz00_bglt BgL_tmpz00_7199;

													BgL_tmpz00_7199 =
														((BgL_objectz00_bglt) BgL_valuez00_5322);
													BgL_auxz00_7198 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_7199);
												}
												BgL_auxz00_7197 =
													((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_7198);
											}
											BgL_arg1903z00_5326 =
												(((BgL_svarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7197))->
												BgL_approxz00);
										}
										return
											BGl_approxzd2setzd2topz12z12zzcfa_approxz00
											(BgL_arg1903z00_5326);
									}
								else
									{	/* Cfa/setup.scm 140 */
										return BFALSE;
									}
							}
						}
					else
						{	/* Cfa/setup.scm 137 */
							{	/* Cfa/setup.scm 142 */
								BgL_svarzf2cinfozf2_bglt BgL_wide1205z00_5327;

								BgL_wide1205z00_5327 =
									((BgL_svarzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_svarzf2cinfozf2_bgl))));
								{	/* Cfa/setup.scm 142 */
									obj_t BgL_auxz00_7210;
									BgL_objectz00_bglt BgL_tmpz00_7206;

									BgL_auxz00_7210 = ((obj_t) BgL_wide1205z00_5327);
									BgL_tmpz00_7206 =
										((BgL_objectz00_bglt)
										((BgL_svarz00_bglt)
											((BgL_svarz00_bglt) BgL_valuez00_5075)));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7206, BgL_auxz00_7210);
								}
								((BgL_objectz00_bglt)
									((BgL_svarz00_bglt) ((BgL_svarz00_bglt) BgL_valuez00_5075)));
								{	/* Cfa/setup.scm 142 */
									long BgL_arg1906z00_5328;

									{	/* Cfa/setup.scm 142 */
										long BgL_res2308z00_5329;

										BgL_res2308z00_5329 =
											BGL_CLASS_INDEX(BGl_svarzf2Cinfozf2zzcfa_infoz00);
										BgL_arg1906z00_5328 = BgL_res2308z00_5329;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_svarz00_bglt)
												((BgL_svarz00_bglt) BgL_valuez00_5075))),
										BgL_arg1906z00_5328);
								}
								((BgL_svarz00_bglt)
									((BgL_svarz00_bglt) ((BgL_svarz00_bglt) BgL_valuez00_5075)));
							}
							{
								BgL_svarzf2cinfozf2_bglt BgL_auxz00_7224;

								{
									obj_t BgL_auxz00_7225;

									{	/* Cfa/setup.scm 143 */
										BgL_objectz00_bglt BgL_tmpz00_7226;

										BgL_tmpz00_7226 =
											((BgL_objectz00_bglt)
											((BgL_svarz00_bglt)
												((BgL_svarz00_bglt) BgL_valuez00_5075)));
										BgL_auxz00_7225 = BGL_OBJECT_WIDENING(BgL_tmpz00_7226);
									}
									BgL_auxz00_7224 =
										((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_7225);
								}
								((((BgL_svarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7224))->
										BgL_approxz00) =
									((BgL_approxz00_bglt)
										BGl_makezd2typezd2approxz00zzcfa_approxz00
										(BgL_typz00_5320)), BUNSPEC);
							}
							{
								BgL_svarzf2cinfozf2_bglt BgL_auxz00_7234;

								{
									obj_t BgL_auxz00_7235;

									{	/* Cfa/setup.scm 143 */
										BgL_objectz00_bglt BgL_tmpz00_7236;

										BgL_tmpz00_7236 =
											((BgL_objectz00_bglt)
											((BgL_svarz00_bglt)
												((BgL_svarz00_bglt) BgL_valuez00_5075)));
										BgL_auxz00_7235 = BGL_OBJECT_WIDENING(BgL_tmpz00_7236);
									}
									BgL_auxz00_7234 =
										((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_7235);
								}
								((((BgL_svarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7234))->
										BgL_clozd2envzf3z21) = ((bool_t) ((bool_t) 0)), BUNSPEC);
							}
							{
								BgL_svarzf2cinfozf2_bglt BgL_auxz00_7243;

								{
									obj_t BgL_auxz00_7244;

									{	/* Cfa/setup.scm 143 */
										BgL_objectz00_bglt BgL_tmpz00_7245;

										BgL_tmpz00_7245 =
											((BgL_objectz00_bglt)
											((BgL_svarz00_bglt)
												((BgL_svarz00_bglt) BgL_valuez00_5075)));
										BgL_auxz00_7244 = BGL_OBJECT_WIDENING(BgL_tmpz00_7245);
									}
									BgL_auxz00_7243 =
										((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_7244);
								}
								((((BgL_svarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7243))->
										BgL_stampz00) = ((long) ((long) -1)), BUNSPEC);
							}
							return
								((obj_t)
								((BgL_svarz00_bglt) ((BgL_svarz00_bglt) BgL_valuez00_5075)));
						}
				}
			}
		}

	}



/* &variable-value-setup1758 */
	obj_t BGl_z62variablezd2valuezd2setup1758z62zzcfa_setupz00(obj_t
		BgL_envz00_5077, obj_t BgL_valuez00_5078, obj_t BgL_varz00_5079)
	{
		{	/* Cfa/setup.scm 127 */
			return BUNSPEC;
		}

	}



/* &node-setup!-var1754 */
	obj_t BGl_z62nodezd2setupz12zd2var1754z70zzcfa_setupz00(obj_t BgL_envz00_5080,
		obj_t BgL_nodez00_5081)
	{
		{	/* Cfa/setup.scm 95 */
			BGl_variablezd2valuezd2setupz12z12zzcfa_setupz00(
				(((BgL_variablez00_bglt) COBJECT(
							(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt) BgL_nodez00_5081)))->BgL_variablez00)))->
					BgL_valuez00),
				(((BgL_varz00_bglt) COBJECT(((BgL_varz00_bglt) BgL_nodez00_5081)))->
					BgL_variablez00));
			{	/* Cfa/setup.scm 100 */
				bool_t BgL_test2494z00_7261;

				{	/* Cfa/setup.scm 100 */
					bool_t BgL_test2495z00_7262;

					{	/* Cfa/setup.scm 100 */
						BgL_variablez00_bglt BgL_arg1895z00_5332;

						BgL_arg1895z00_5332 =
							(((BgL_varz00_bglt) COBJECT(
									((BgL_varz00_bglt) BgL_nodez00_5081)))->BgL_variablez00);
						{	/* Cfa/setup.scm 100 */
							bool_t BgL_res2300z00_5333;

							BgL_res2300z00_5333 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg1895z00_5332), BGl_localz00zzast_varz00);
							BgL_test2495z00_7262 = BgL_res2300z00_5333;
						}
					}
					if (BgL_test2495z00_7262)
						{	/* Cfa/setup.scm 100 */
							bool_t BgL_test2496z00_7267;

							{	/* Cfa/setup.scm 100 */
								BgL_variablez00_bglt BgL_arg1893z00_5334;

								BgL_arg1893z00_5334 =
									(((BgL_varz00_bglt) COBJECT(
											((BgL_varz00_bglt) BgL_nodez00_5081)))->BgL_variablez00);
								{	/* Cfa/setup.scm 100 */
									bool_t BgL_res2301z00_5335;

									BgL_res2301z00_5335 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg1893z00_5334),
										BGl_reshapedzd2localzd2zzcfa_infoz00);
									BgL_test2496z00_7267 = BgL_res2301z00_5335;
								}
							}
							if (BgL_test2496z00_7267)
								{	/* Cfa/setup.scm 100 */
									BgL_test2494z00_7261 = ((bool_t) 0);
								}
							else
								{	/* Cfa/setup.scm 100 */
									BgL_test2494z00_7261 = ((bool_t) 1);
								}
						}
					else
						{	/* Cfa/setup.scm 100 */
							BgL_test2494z00_7261 = ((bool_t) 0);
						}
				}
				if (BgL_test2494z00_7261)
					{	/* Cfa/setup.scm 101 */
						BgL_localz00_bglt BgL_tmp1191z00_5336;

						BgL_tmp1191z00_5336 =
							((BgL_localz00_bglt)
							(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt) BgL_nodez00_5081)))->BgL_variablez00));
						{	/* Cfa/setup.scm 101 */
							BgL_reshapedzd2localzd2_bglt BgL_wide1193z00_5337;

							BgL_wide1193z00_5337 =
								((BgL_reshapedzd2localzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_reshapedzd2localzd2_bgl))));
							{	/* Cfa/setup.scm 101 */
								obj_t BgL_auxz00_7279;
								BgL_objectz00_bglt BgL_tmpz00_7276;

								BgL_auxz00_7279 = ((obj_t) BgL_wide1193z00_5337);
								BgL_tmpz00_7276 =
									((BgL_objectz00_bglt)
									((BgL_localz00_bglt) BgL_tmp1191z00_5336));
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7276, BgL_auxz00_7279);
							}
							((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_tmp1191z00_5336));
							{	/* Cfa/setup.scm 101 */
								long BgL_arg1881z00_5338;

								{	/* Cfa/setup.scm 101 */
									long BgL_res2302z00_5339;

									BgL_res2302z00_5339 =
										BGL_CLASS_INDEX(BGl_reshapedzd2localzd2zzcfa_infoz00);
									BgL_arg1881z00_5338 = BgL_res2302z00_5339;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt)
										((BgL_localz00_bglt) BgL_tmp1191z00_5336)),
									BgL_arg1881z00_5338);
							}
							((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_tmp1191z00_5336));
						}
						{
							BgL_reshapedzd2localzd2_bglt BgL_auxz00_7290;

							{
								obj_t BgL_auxz00_7291;

								{	/* Cfa/setup.scm 101 */
									BgL_objectz00_bglt BgL_tmpz00_7292;

									BgL_tmpz00_7292 =
										((BgL_objectz00_bglt)
										((BgL_localz00_bglt) BgL_tmp1191z00_5336));
									BgL_auxz00_7291 = BGL_OBJECT_WIDENING(BgL_tmpz00_7292);
								}
								BgL_auxz00_7290 =
									((BgL_reshapedzd2localzd2_bglt) BgL_auxz00_7291);
							}
							((((BgL_reshapedzd2localzd2_bglt) COBJECT(BgL_auxz00_7290))->
									BgL_bindingzd2valuezd2) = ((obj_t) BFALSE), BUNSPEC);
						}
						return ((obj_t) ((BgL_localz00_bglt) BgL_tmp1191z00_5336));
					}
				else
					{	/* Cfa/setup.scm 102 */
						bool_t BgL_test2497z00_7300;

						{	/* Cfa/setup.scm 102 */
							bool_t BgL_test2498z00_7301;

							{	/* Cfa/setup.scm 102 */
								BgL_variablez00_bglt BgL_arg1892z00_5340;

								BgL_arg1892z00_5340 =
									(((BgL_varz00_bglt) COBJECT(
											((BgL_varz00_bglt) BgL_nodez00_5081)))->BgL_variablez00);
								{	/* Cfa/setup.scm 102 */
									bool_t BgL_res2303z00_5341;

									BgL_res2303z00_5341 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg1892z00_5340), BGl_globalz00zzast_varz00);
									BgL_test2498z00_7301 = BgL_res2303z00_5341;
								}
							}
							if (BgL_test2498z00_7301)
								{	/* Cfa/setup.scm 102 */
									bool_t BgL_test2499z00_7306;

									{	/* Cfa/setup.scm 102 */
										BgL_variablez00_bglt BgL_arg1891z00_5342;

										BgL_arg1891z00_5342 =
											(((BgL_varz00_bglt) COBJECT(
													((BgL_varz00_bglt) BgL_nodez00_5081)))->
											BgL_variablez00);
										{	/* Cfa/setup.scm 102 */
											bool_t BgL_res2304z00_5343;

											BgL_res2304z00_5343 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg1891z00_5342),
												BGl_reshapedzd2globalzd2zzcfa_infoz00);
											BgL_test2499z00_7306 = BgL_res2304z00_5343;
										}
									}
									if (BgL_test2499z00_7306)
										{	/* Cfa/setup.scm 102 */
											BgL_test2497z00_7300 = ((bool_t) 0);
										}
									else
										{	/* Cfa/setup.scm 102 */
											BgL_test2497z00_7300 = ((bool_t) 1);
										}
								}
							else
								{	/* Cfa/setup.scm 102 */
									BgL_test2497z00_7300 = ((bool_t) 0);
								}
						}
						if (BgL_test2497z00_7300)
							{	/* Cfa/setup.scm 103 */
								BgL_globalz00_bglt BgL_tmp1195z00_5344;

								BgL_tmp1195z00_5344 =
									((BgL_globalz00_bglt)
									(((BgL_varz00_bglt) COBJECT(
												((BgL_varz00_bglt) BgL_nodez00_5081)))->
										BgL_variablez00));
								{	/* Cfa/setup.scm 103 */
									BgL_reshapedzd2globalzd2_bglt BgL_wide1197z00_5345;

									BgL_wide1197z00_5345 =
										((BgL_reshapedzd2globalzd2_bglt)
										BOBJECT(GC_MALLOC(sizeof(struct
													BgL_reshapedzd2globalzd2_bgl))));
									{	/* Cfa/setup.scm 103 */
										obj_t BgL_auxz00_7318;
										BgL_objectz00_bglt BgL_tmpz00_7315;

										BgL_auxz00_7318 = ((obj_t) BgL_wide1197z00_5345);
										BgL_tmpz00_7315 =
											((BgL_objectz00_bglt)
											((BgL_globalz00_bglt) BgL_tmp1195z00_5344));
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7315, BgL_auxz00_7318);
									}
									((BgL_objectz00_bglt)
										((BgL_globalz00_bglt) BgL_tmp1195z00_5344));
									{	/* Cfa/setup.scm 103 */
										long BgL_arg1889z00_5346;

										{	/* Cfa/setup.scm 103 */
											long BgL_res2305z00_5347;

											BgL_res2305z00_5347 =
												BGL_CLASS_INDEX(BGl_reshapedzd2globalzd2zzcfa_infoz00);
											BgL_arg1889z00_5346 = BgL_res2305z00_5347;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt)
												((BgL_globalz00_bglt) BgL_tmp1195z00_5344)),
											BgL_arg1889z00_5346);
									}
									((BgL_globalz00_bglt)
										((BgL_globalz00_bglt) BgL_tmp1195z00_5344));
								}
								return ((obj_t) ((BgL_globalz00_bglt) BgL_tmp1195z00_5344));
							}
						else
							{	/* Cfa/setup.scm 102 */
								return BFALSE;
							}
					}
			}
		}

	}



/* &node-setup!-kwote/no1752 */
	obj_t BGl_z62nodezd2setupz12zd2kwotezf2no1752z82zzcfa_setupz00(obj_t
		BgL_envz00_5082, obj_t BgL_kwotez00_5083)
	{
		{	/* Cfa/setup.scm 88 */
			{	/* Cfa/setup.scm 90 */
				BgL_nodez00_bglt BgL_arg1868z00_5349;

				{
					BgL_kwotezf2nodezf2_bglt BgL_auxz00_7331;

					{
						obj_t BgL_auxz00_7332;

						{	/* Cfa/setup.scm 90 */
							BgL_objectz00_bglt BgL_tmpz00_7333;

							BgL_tmpz00_7333 =
								((BgL_objectz00_bglt) ((BgL_kwotez00_bglt) BgL_kwotez00_5083));
							BgL_auxz00_7332 = BGL_OBJECT_WIDENING(BgL_tmpz00_7333);
						}
						BgL_auxz00_7331 = ((BgL_kwotezf2nodezf2_bglt) BgL_auxz00_7332);
					}
					BgL_arg1868z00_5349 =
						(((BgL_kwotezf2nodezf2_bglt) COBJECT(BgL_auxz00_7331))->
						BgL_nodez00);
				}
				return BGl_nodezd2setupz12zc0zzcfa_setupz00(BgL_arg1868z00_5349);
			}
		}

	}



/* &node-setup!-kwote1750 */
	obj_t BGl_z62nodezd2setupz12zd2kwote1750z70zzcfa_setupz00(obj_t
		BgL_envz00_5084, obj_t BgL_nodez00_5085)
	{
		{	/* Cfa/setup.scm 78 */
			{	/* Cfa/setup.scm 80 */
				BgL_approxz00_bglt BgL_approxz00_5351;

				BgL_approxz00_5351 =
					BGl_makezd2typezd2approxz00zzcfa_approxz00
					(BGl_getzd2typezd2kwotez00zztype_typeofz00((((BgL_kwotez00_bglt)
								COBJECT(((BgL_kwotez00_bglt) BgL_nodez00_5085)))->
							BgL_valuez00)));
				((((BgL_approxz00_bglt) COBJECT(BgL_approxz00_5351))->BgL_topzf3zf3) =
					((bool_t) ((bool_t) 1)), BUNSPEC);
				{	/* Cfa/setup.scm 82 */
					BgL_kwotezf2cinfozf2_bglt BgL_wide1187z00_5352;

					BgL_wide1187z00_5352 =
						((BgL_kwotezf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_kwotezf2cinfozf2_bgl))));
					{	/* Cfa/setup.scm 82 */
						obj_t BgL_auxz00_7350;
						BgL_objectz00_bglt BgL_tmpz00_7346;

						BgL_auxz00_7350 = ((obj_t) BgL_wide1187z00_5352);
						BgL_tmpz00_7346 =
							((BgL_objectz00_bglt)
							((BgL_kwotez00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_5085)));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7346, BgL_auxz00_7350);
					}
					((BgL_objectz00_bglt)
						((BgL_kwotez00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_5085)));
					{	/* Cfa/setup.scm 82 */
						long BgL_arg1863z00_5353;

						{	/* Cfa/setup.scm 82 */
							long BgL_res2299z00_5354;

							BgL_res2299z00_5354 =
								BGL_CLASS_INDEX(BGl_kwotezf2Cinfozf2zzcfa_infoz00);
							BgL_arg1863z00_5353 = BgL_res2299z00_5354;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_kwotez00_bglt)
									((BgL_kwotez00_bglt) BgL_nodez00_5085))),
							BgL_arg1863z00_5353);
					}
					((BgL_kwotez00_bglt)
						((BgL_kwotez00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_5085)));
				}
				{
					BgL_kwotezf2cinfozf2_bglt BgL_auxz00_7364;

					{
						obj_t BgL_auxz00_7365;

						{	/* Cfa/setup.scm 83 */
							BgL_objectz00_bglt BgL_tmpz00_7366;

							BgL_tmpz00_7366 =
								((BgL_objectz00_bglt)
								((BgL_kwotez00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_5085)));
							BgL_auxz00_7365 = BGL_OBJECT_WIDENING(BgL_tmpz00_7366);
						}
						BgL_auxz00_7364 = ((BgL_kwotezf2cinfozf2_bglt) BgL_auxz00_7365);
					}
					((((BgL_kwotezf2cinfozf2_bglt) COBJECT(BgL_auxz00_7364))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approxz00_5351), BUNSPEC);
				}
				return
					((obj_t)
					((BgL_kwotez00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_5085)));
			}
		}

	}



/* &node-setup!-patch1748 */
	obj_t BGl_z62nodezd2setupz12zd2patch1748z70zzcfa_setupz00(obj_t
		BgL_envz00_5086, obj_t BgL_nodez00_5087)
	{
		{	/* Cfa/setup.scm 69 */
			{	/* Cfa/setup.scm 71 */
				obj_t BgL_arg1859z00_5356;

				BgL_arg1859z00_5356 =
					(((BgL_atomz00_bglt) COBJECT(
							((BgL_atomz00_bglt)
								((BgL_patchz00_bglt) BgL_nodez00_5087))))->BgL_valuez00);
				BGl_nodezd2setupz12zc0zzcfa_setupz00(
					((BgL_nodez00_bglt) BgL_arg1859z00_5356));
			}
			{	/* Cfa/setup.scm 72 */
				BgL_patchzf2cinfozf2_bglt BgL_wide1182z00_5357;

				BgL_wide1182z00_5357 =
					((BgL_patchzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_patchzf2cinfozf2_bgl))));
				{	/* Cfa/setup.scm 72 */
					obj_t BgL_auxz00_7386;
					BgL_objectz00_bglt BgL_tmpz00_7382;

					BgL_auxz00_7386 = ((obj_t) BgL_wide1182z00_5357);
					BgL_tmpz00_7382 =
						((BgL_objectz00_bglt)
						((BgL_patchz00_bglt) ((BgL_patchz00_bglt) BgL_nodez00_5087)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7382, BgL_auxz00_7386);
				}
				((BgL_objectz00_bglt)
					((BgL_patchz00_bglt) ((BgL_patchz00_bglt) BgL_nodez00_5087)));
				{	/* Cfa/setup.scm 72 */
					long BgL_arg1861z00_5358;

					{	/* Cfa/setup.scm 72 */
						long BgL_res2298z00_5359;

						BgL_res2298z00_5359 =
							BGL_CLASS_INDEX(BGl_patchzf2Cinfozf2zzcfa_infoz00);
						BgL_arg1861z00_5358 = BgL_res2298z00_5359;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_patchz00_bglt)
								((BgL_patchz00_bglt) BgL_nodez00_5087))), BgL_arg1861z00_5358);
				}
				((BgL_patchz00_bglt)
					((BgL_patchz00_bglt) ((BgL_patchz00_bglt) BgL_nodez00_5087)));
			}
			{
				BgL_approxz00_bglt BgL_auxz00_7408;
				BgL_patchzf2cinfozf2_bglt BgL_auxz00_7400;

				{	/* Cfa/setup.scm 73 */
					BgL_typez00_bglt BgL_arg1862z00_5360;

					BgL_arg1862z00_5360 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_patchz00_bglt) BgL_nodez00_5087))))->BgL_typez00);
					BgL_auxz00_7408 =
						BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_arg1862z00_5360);
				}
				{
					obj_t BgL_auxz00_7401;

					{	/* Cfa/setup.scm 73 */
						BgL_objectz00_bglt BgL_tmpz00_7402;

						BgL_tmpz00_7402 =
							((BgL_objectz00_bglt)
							((BgL_patchz00_bglt) ((BgL_patchz00_bglt) BgL_nodez00_5087)));
						BgL_auxz00_7401 = BGL_OBJECT_WIDENING(BgL_tmpz00_7402);
					}
					BgL_auxz00_7400 = ((BgL_patchzf2cinfozf2_bglt) BgL_auxz00_7401);
				}
				((((BgL_patchzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7400))->
						BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_7408), BUNSPEC);
			}
			return
				((obj_t) ((BgL_patchz00_bglt) ((BgL_patchz00_bglt) BgL_nodez00_5087)));
		}

	}



/* &node-setup!-literal1746 */
	obj_t BGl_z62nodezd2setupz12zd2literal1746z70zzcfa_setupz00(obj_t
		BgL_envz00_5088, obj_t BgL_nodez00_5089)
	{
		{	/* Cfa/setup.scm 61 */
			{	/* Cfa/setup.scm 63 */
				BgL_literalzf2cinfozf2_bglt BgL_wide1177z00_5362;

				BgL_wide1177z00_5362 =
					((BgL_literalzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_literalzf2cinfozf2_bgl))));
				{	/* Cfa/setup.scm 63 */
					obj_t BgL_auxz00_7422;
					BgL_objectz00_bglt BgL_tmpz00_7418;

					BgL_auxz00_7422 = ((obj_t) BgL_wide1177z00_5362);
					BgL_tmpz00_7418 =
						((BgL_objectz00_bglt)
						((BgL_literalz00_bglt) ((BgL_literalz00_bglt) BgL_nodez00_5089)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7418, BgL_auxz00_7422);
				}
				((BgL_objectz00_bglt)
					((BgL_literalz00_bglt) ((BgL_literalz00_bglt) BgL_nodez00_5089)));
				{	/* Cfa/setup.scm 63 */
					long BgL_arg1856z00_5363;

					{	/* Cfa/setup.scm 63 */
						long BgL_res2297z00_5364;

						BgL_res2297z00_5364 =
							BGL_CLASS_INDEX(BGl_literalzf2Cinfozf2zzcfa_infoz00);
						BgL_arg1856z00_5363 = BgL_res2297z00_5364;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_literalz00_bglt)
								((BgL_literalz00_bglt) BgL_nodez00_5089))),
						BgL_arg1856z00_5363);
				}
				((BgL_literalz00_bglt)
					((BgL_literalz00_bglt) ((BgL_literalz00_bglt) BgL_nodez00_5089)));
			}
			{
				BgL_approxz00_bglt BgL_auxz00_7444;
				BgL_literalzf2cinfozf2_bglt BgL_auxz00_7436;

				{	/* Cfa/setup.scm 64 */
					BgL_typez00_bglt BgL_arg1857z00_5365;

					{	/* Cfa/setup.scm 64 */
						obj_t BgL_arg1858z00_5366;

						BgL_arg1858z00_5366 =
							(((BgL_atomz00_bglt) COBJECT(
									((BgL_atomz00_bglt)
										((BgL_literalz00_bglt) BgL_nodez00_5089))))->BgL_valuez00);
						BgL_arg1857z00_5365 =
							BGl_getzd2typezd2atomz00zztype_typeofz00(BgL_arg1858z00_5366);
					}
					BgL_auxz00_7444 =
						BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_arg1857z00_5365);
				}
				{
					obj_t BgL_auxz00_7437;

					{	/* Cfa/setup.scm 64 */
						BgL_objectz00_bglt BgL_tmpz00_7438;

						BgL_tmpz00_7438 =
							((BgL_objectz00_bglt)
							((BgL_literalz00_bglt) ((BgL_literalz00_bglt) BgL_nodez00_5089)));
						BgL_auxz00_7437 = BGL_OBJECT_WIDENING(BgL_tmpz00_7438);
					}
					BgL_auxz00_7436 = ((BgL_literalzf2cinfozf2_bglt) BgL_auxz00_7437);
				}
				((((BgL_literalzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7436))->
						BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_7444), BUNSPEC);
			}
			return
				((obj_t)
				((BgL_literalz00_bglt) ((BgL_literalz00_bglt) BgL_nodez00_5089)));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_setupz00()
	{
		{	/* Cfa/setup.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2401z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2401z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2401z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2401z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string2401z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2401z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2401z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2401z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2401z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2401z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string2401z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2401z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2401z00zzcfa_setupz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 468997780),
				BSTRING_TO_STRING(BGl_string2401z00zzcfa_setupz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_pairz00(((long) 37668580),
				BSTRING_TO_STRING(BGl_string2401z00zzcfa_setupz00));
		}

	}

#ifdef __cplusplus
}
#endif
