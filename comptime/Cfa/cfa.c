/*===========================================================================*/
/*   (Cfa/cfa.scm)                                                           */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/cfa.scm) */
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

	typedef struct BgL_appzd2lyzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}                  *BgL_appzd2lyzd2_bglt;

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

	typedef struct BgL_scnstzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                       *BgL_scnstzf2cinfozf2_bglt;

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

	typedef struct BgL_makezd2boxzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                            *BgL_makezd2boxzf2cinfoz20_bglt;

	typedef struct BgL_boxzd2setz12zf2cinfoz32_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                              *BgL_boxzd2setz12zf2cinfoz32_bglt;

	typedef struct BgL_boxzd2refzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                           *BgL_boxzd2refzf2cinfoz20_bglt;

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


	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2genpatchidzf2Cinf1625z50zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_newzf2Cinfozf2zzcfa_info3z00;
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_approxz00zzcfa_infoz00;
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_pragmazf2Cinfozf2zzcfa_info3z00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static BgL_approxz00_bglt BGl_z62cfaz12zd2sequence1617za2zzcfa_cfaz00(obj_t,
		obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_objectzd2initzd2zzcfa_cfaz00();
	extern obj_t BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00;
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2setfieldzf2Cinfo1629z50zzcfa_cfaz00(obj_t, obj_t);
	static BgL_approxz00_bglt BGl_z62cfaz12zd2letzd2fun1647z70zzcfa_cfaz00(obj_t,
		obj_t);
	extern obj_t BGl_genpatchidzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00;
	extern obj_t BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_globalzd2loosez12zc0zzcfa_loosez00(BgL_globalz00_bglt,
		BgL_approxz00_bglt);
	extern obj_t BGl_cvarzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_switchzf2Cinfozf2zzcfa_infoz00;
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2instanceofzf2Cinf1633z50zzcfa_cfaz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_cfaz00();
	BGL_IMPORT obj_t bgl_typeof(obj_t);
	extern obj_t BGl_literalzf2Cinfozf2zzcfa_infoz00;
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2conditionalzf2Cin1641z50zzcfa_cfaz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00;
	BGL_EXPORTED_DECL obj_t
		BGl_cfazd2variablezd2valuezd2approxzd2zzcfa_cfaz00(BgL_valuez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2setzd2exzd2itzf2Cinfo1651z50zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_failzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_setqzf2Cinfozf2zzcfa_infoz00;
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2kwotezf2node1599z50zzcfa_cfaz00(obj_t, obj_t);
	extern BgL_approxz00_bglt
		BGl_unionzd2approxzd2filterz12z12zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	static BgL_approxz00_bglt BGl_z62cfaz12zd2closure1603za2zzcfa_cfaz00(obj_t,
		obj_t);
	static BgL_approxz00_bglt BGl_z62cfaz12zd2letzd2var1649z70zzcfa_cfaz00(obj_t,
		obj_t);
	extern obj_t BGl_kwotezf2Cinfozf2zzcfa_infoz00;
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2failzf2Cinfo1643z50zzcfa_cfaz00(obj_t, obj_t);
	extern BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_cfaz00();
	extern obj_t BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00;
	extern obj_t BGl_kwotezf2nodezf2zzcfa_infoz00;
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2patchzf2Cinfo1595z50zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_sexitzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_instanceofzf2Cinfozf2zzcfa_info3z00;
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2boxzd2refzf2Cinfo1659z82zzcfa_cfaz00(obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2setqzf2Cinfo1639z50zzcfa_cfaz00(obj_t, obj_t);
	static BgL_approxz00_bglt BGl_z62cfaz12z70zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_svarzf2Cinfozf2zzcfa_infoz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_approxz00_bglt BGl_z62cfaz12zd2sync1619za2zzcfa_cfaz00(obj_t,
		obj_t);
	extern obj_t BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2jumpzd2exzd2itzf2Cinf1653z50zzcfa_cfaz00(obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2boxzd2setz12zf2Cinfo1657z90zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_getfieldzf2Cinfozf2zzcfa_info3z00;
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_cfaz00 = BUNSPEC;
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2appzd2lyzf2Cinfo1621z82zzcfa_cfaz00(obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2switchzf2Cinfo1645z50zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_patchzf2Cinfozf2zzcfa_infoz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2castzd2nullzf2Cinfo1635z82zzcfa_cfaz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_cfaz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_cfaz00();
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2makezd2boxzf2Cinfo1655z82zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cfazd2variablezd2valuezd2approxzb0zzcfa_cfaz00(obj_t,
		obj_t);
	static obj_t BGl_z62cfazd2variablezd2valuezd2a1604zb0zzcfa_cfaz00(obj_t,
		obj_t);
	static obj_t BGl_z62cfazd2variablezd2valuezd2a1607zb0zzcfa_cfaz00(obj_t,
		obj_t);
	static obj_t BGl_z62cfazd2variablezd2valuezd2a1609zb0zzcfa_cfaz00(obj_t,
		obj_t);
	static obj_t BGl_z62cfazd2variablezd2valuezd2a1611zb0zzcfa_cfaz00(obj_t,
		obj_t);
	static obj_t BGl_z62cfazd2variablezd2valuezd2a1613zb0zzcfa_cfaz00(obj_t,
		obj_t);
	static obj_t BGl_z62cfazd2variablezd2valuezd2a1615zb0zzcfa_cfaz00(obj_t,
		obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_z62cfaz121590z70zzcfa_cfaz00(obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2pragmazf2Cinfo1623z50zzcfa_cfaz00(obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2kwotezf2Cinfo1597z50zzcfa_cfaz00(obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2literalzf2Cinfo1593z50zzcfa_cfaz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_funcallz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcfa_cfaz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_cfaz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_cfaz00();
	static BgL_approxz00_bglt BGl_z62cfaz12zd2var1601za2zzcfa_cfaz00(obj_t,
		obj_t);
	extern obj_t BGl_conditionalzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_valuez00zzast_varz00;
	static BgL_approxz00_bglt BGl_z62cfaz12zd2cast1637za2zzcfa_cfaz00(obj_t,
		obj_t);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2getfieldzf2Cinfo1627z50zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_scnstzf2Cinfozf2zzcfa_infoz00;
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	extern obj_t BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00;
	extern obj_t BGl_setfieldzf2Cinfozf2zzcfa_info3z00;
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2newzf2Cinfo1631z50zzcfa_cfaz00(obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string2123z00zzcfa_cfaz00,
		BgL_bgl_string2123za700za7za7c2176za7, "cfa!1590", 8);
	      DEFINE_STRING(BGl_string2125z00zzcfa_cfaz00,
		BgL_bgl_string2125za700za7za7c2177za7, "cfa-variable-value-a1604", 24);
	      DEFINE_STRING(BGl_string2126z00zzcfa_cfaz00,
		BgL_bgl_string2126za700za7za7c2178za7, " ", 1);
	      DEFINE_STRING(BGl_string2127z00zzcfa_cfaz00,
		BgL_bgl_string2127za700za7za7c2179za7, "PAS GLOP ", 9);
	      DEFINE_STRING(BGl_string2128z00zzcfa_cfaz00,
		BgL_bgl_string2128za700za7za7c2180za7, ":", 1);
	      DEFINE_STRING(BGl_string2129z00zzcfa_cfaz00,
		BgL_bgl_string2129za700za7za7c2181za7, ",", 1);
	      DEFINE_STRING(BGl_string2130z00zzcfa_cfaz00,
		BgL_bgl_string2130za700za7za7c2182za7, "Cfa/cfa.scm", 11);
	      DEFINE_STRING(BGl_string2131z00zzcfa_cfaz00,
		BgL_bgl_string2131za700za7za7c2183za7, "pas", 3);
	      DEFINE_STRING(BGl_string2132z00zzcfa_cfaz00,
		BgL_bgl_string2132za700za7za7c2184za7, "glop", 4);
	      DEFINE_STRING(BGl_string2133z00zzcfa_cfaz00,
		BgL_bgl_string2133za700za7za7c2185za7, "glup", 4);
	      DEFINE_STRING(BGl_string2134z00zzcfa_cfaz00,
		BgL_bgl_string2134za700za7za7c2186za7, "cfa!:no method for this ast", 27);
	      DEFINE_STRING(BGl_string2136z00zzcfa_cfaz00,
		BgL_bgl_string2136za700za7za7c2187za7, "cfa!", 4);
	      DEFINE_STRING(BGl_string2143z00zzcfa_cfaz00,
		BgL_bgl_string2143za700za7za7c2188za7, "cfa-variable-value-approx", 25);
	      DEFINE_STRING(BGl_string2170z00zzcfa_cfaz00,
		BgL_bgl_string2170za700za7za7c2189za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string2171z00zzcfa_cfaz00,
		BgL_bgl_string2171za700za7za7c2190za7, "cfa_cfa", 7);
	      DEFINE_STRING(BGl_string2172z00zzcfa_cfaz00,
		BgL_bgl_string2172za700za7za7c2191za7, "static all ", 11);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za770za7za7cf2192za7, BGl_z62cfaz12z70zzcfa_cfaz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2122z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza7121590za7702193za7, BGl_z62cfaz121590z70zzcfa_cfaz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2124z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza7d2variabl2194z00,
		BGl_z62cfazd2variablezd2valuezd2a1604zb0zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2135z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2lite2195za7,
		BGl_z62cfaz12zd2literalzf2Cinfo1593z50zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2137z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2patc2196za7,
		BGl_z62cfaz12zd2patchzf2Cinfo1595z50zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2138z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2kwot2197za7,
		BGl_z62cfaz12zd2kwotezf2Cinfo1597z50zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2139z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2kwot2198za7,
		BGl_z62cfaz12zd2kwotezf2node1599z50zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2140z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2var12199za7,
		BGl_z62cfaz12zd2var1601za2zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2141z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2clos2200za7,
		BGl_z62cfaz12zd2closure1603za2zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2142z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza7d2variabl2201z00,
		BGl_z62cfazd2variablezd2valuezd2a1607zb0zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2144z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza7d2variabl2202z00,
		BGl_z62cfazd2variablezd2valuezd2a1609zb0zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2145z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza7d2variabl2203z00,
		BGl_z62cfazd2variablezd2valuezd2a1611zb0zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2146z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza7d2variabl2204z00,
		BGl_z62cfazd2variablezd2valuezd2a1613zb0zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2147z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza7d2variabl2205z00,
		BGl_z62cfazd2variablezd2valuezd2a1615zb0zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2148z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2sequ2206za7,
		BGl_z62cfaz12zd2sequence1617za2zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2149z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2sync2207za7,
		BGl_z62cfaz12zd2sync1619za2zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2150z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2appza72208z00,
		BGl_z62cfaz12zd2appzd2lyzf2Cinfo1621z82zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2151z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2prag2209za7,
		BGl_z62cfaz12zd2pragmazf2Cinfo1623z50zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2152z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2genp2210za7,
		BGl_z62cfaz12zd2genpatchidzf2Cinf1625z50zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2153z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2getf2211za7,
		BGl_z62cfaz12zd2getfieldzf2Cinfo1627z50zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2154z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2setf2212za7,
		BGl_z62cfaz12zd2setfieldzf2Cinfo1629z50zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2155z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2newza72213z00,
		BGl_z62cfaz12zd2newzf2Cinfo1631z50zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2156z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2inst2214za7,
		BGl_z62cfaz12zd2instanceofzf2Cinf1633z50zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2157z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2cast2215za7,
		BGl_z62cfaz12zd2castzd2nullzf2Cinfo1635z82zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2158z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2cast2216za7,
		BGl_z62cfaz12zd2cast1637za2zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2159z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2setq2217za7,
		BGl_z62cfaz12zd2setqzf2Cinfo1639z50zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2160z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2cond2218za7,
		BGl_z62cfaz12zd2conditionalzf2Cin1641z50zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2161z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2fail2219za7,
		BGl_z62cfaz12zd2failzf2Cinfo1643z50zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2162z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2swit2220za7,
		BGl_z62cfaz12zd2switchzf2Cinfo1645z50zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2163z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2letza72221z00,
		BGl_z62cfaz12zd2letzd2fun1647z70zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2164z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2letza72222z00,
		BGl_z62cfaz12zd2letzd2var1649z70zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2165z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2setza72223z00,
		BGl_z62cfaz12zd2setzd2exzd2itzf2Cinfo1651z50zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2166z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2jump2224za7,
		BGl_z62cfaz12zd2jumpzd2exzd2itzf2Cinf1653z50zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2167z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2make2225za7,
		BGl_z62cfaz12zd2makezd2boxzf2Cinfo1655z82zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2168z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2boxza72226z00,
		BGl_z62cfaz12zd2boxzd2setz12zf2Cinfo1657z90zzcfa_cfaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2169z00zzcfa_cfaz00,
		BgL_bgl_za762cfaza712za7d2boxza72227z00,
		BGl_z62cfaz12zd2boxzd2refzf2Cinfo1659z82zzcfa_cfaz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_cfazd2variablezd2valuezd2approxzd2envz00zzcfa_cfaz00,
		BgL_bgl_za762cfaza7d2variabl2228z00,
		BGl_z62cfazd2variablezd2valuezd2approxzb0zzcfa_cfaz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_cfaz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long
		BgL_checksumz00_4608, char *BgL_fromz00_4609)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_cfaz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_cfaz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_cfaz00();
					BGl_libraryzd2moduleszd2initz00zzcfa_cfaz00();
					BGl_cnstzd2initzd2zzcfa_cfaz00();
					BGl_importedzd2moduleszd2initz00zzcfa_cfaz00();
					BGl_genericzd2initzd2zzcfa_cfaz00();
					BGl_methodzd2initzd2zzcfa_cfaz00();
					return BGl_toplevelzd2initzd2zzcfa_cfaz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_cfaz00()
	{
		{	/* Cfa/cfa.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_cfa");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_cfa");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_cfa");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_cfa");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cfa_cfa");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_cfa");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_cfa");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_cfa");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "cfa_cfa");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_cfa");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_cfaz00()
	{
		{	/* Cfa/cfa.scm 15 */
			{	/* Cfa/cfa.scm 15 */
				obj_t BgL_cportz00_4448;

				{	/* Cfa/cfa.scm 15 */
					obj_t BgL_stringz00_4456;

					BgL_stringz00_4456 = BGl_string2172z00zzcfa_cfaz00;
					{	/* Cfa/cfa.scm 15 */
						obj_t BgL_startz00_4457;

						BgL_startz00_4457 = BINT(((long) 0));
						{	/* Cfa/cfa.scm 15 */
							obj_t BgL_endz00_4458;

							BgL_endz00_4458 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_4456)));
							{	/* Cfa/cfa.scm 15 */

								BgL_cportz00_4448 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_4456, BgL_startz00_4457, BgL_endz00_4458);
				}}}}
				{
					long BgL_iz00_4449;

					BgL_iz00_4449 = ((long) 1);
				BgL_loopz00_4450:
					if ((BgL_iz00_4449 == ((long) -1)))
						{	/* Cfa/cfa.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/cfa.scm 15 */
							{	/* Cfa/cfa.scm 15 */
								obj_t BgL_arg2174z00_4452;

								{	/* Cfa/cfa.scm 15 */

									{	/* Cfa/cfa.scm 15 */
										obj_t BgL_locationz00_4454;

										BgL_locationz00_4454 = BBOOL(((bool_t) 0));
										{	/* Cfa/cfa.scm 15 */

											BgL_arg2174z00_4452 =
												BGl_readz00zz__readerz00(BgL_cportz00_4448,
												BgL_locationz00_4454);
										}
									}
								}
								{	/* Cfa/cfa.scm 15 */
									int BgL_tmpz00_4639;

									BgL_tmpz00_4639 = (int) (BgL_iz00_4449);
									CNST_TABLE_SET(BgL_tmpz00_4639, BgL_arg2174z00_4452);
							}}
							{	/* Cfa/cfa.scm 15 */
								int BgL_auxz00_4455;

								BgL_auxz00_4455 = (int) ((BgL_iz00_4449 - ((long) 1)));
								{
									long BgL_iz00_4644;

									BgL_iz00_4644 = (long) (BgL_auxz00_4455);
									BgL_iz00_4449 = BgL_iz00_4644;
									goto BgL_loopz00_4450;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_cfaz00()
	{
		{	/* Cfa/cfa.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_cfaz00()
	{
		{	/* Cfa/cfa.scm 15 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_cfaz00()
	{
		{	/* Cfa/cfa.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_cfaz00()
	{
		{	/* Cfa/cfa.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_proc2122z00zzcfa_cfaz00, BGl_nodez00zzast_nodez00,
				BGl_string2123z00zzcfa_cfaz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_cfazd2variablezd2valuezd2approxzd2envz00zzcfa_cfaz00,
				BGl_proc2124z00zzcfa_cfaz00, BGl_valuez00zzast_varz00,
				BGl_string2125z00zzcfa_cfaz00);
		}

	}



/* &cfa-variable-value-a1604 */
	obj_t BGl_z62cfazd2variablezd2valuezd2a1604zb0zzcfa_cfaz00(obj_t
		BgL_envz00_4341, obj_t BgL_valuez00_4342)
	{
		{	/* Cfa/cfa.scm 94 */
			{	/* Cfa/cfa.scm 95 */
				obj_t BgL_arg1672z00_4462;
				obj_t BgL_arg1684z00_4463;
				obj_t BgL_arg1685z00_4464;

				{	/* Cfa/cfa.scm 95 */
					obj_t BgL_res2089z00_4465;

					{	/* Cfa/cfa.scm 95 */
						obj_t BgL_tmpz00_4649;

						BgL_tmpz00_4649 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2089z00_4465 = BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_4649);
					}
					BgL_arg1672z00_4462 = BgL_res2089z00_4465;
				}
				BgL_arg1684z00_4463 =
					bgl_typeof(((obj_t) ((BgL_valuez00_bglt) BgL_valuez00_4342)));
				BgL_arg1685z00_4464 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_valuez00_bglt) BgL_valuez00_4342)));
				{	/* Cfa/cfa.scm 95 */
					obj_t BgL_list1686z00_4466;

					{	/* Cfa/cfa.scm 95 */
						obj_t BgL_arg1687z00_4467;

						{	/* Cfa/cfa.scm 95 */
							obj_t BgL_arg1688z00_4468;

							{	/* Cfa/cfa.scm 95 */
								obj_t BgL_arg1692z00_4469;

								{	/* Cfa/cfa.scm 95 */
									obj_t BgL_arg1695z00_4470;

									{	/* Cfa/cfa.scm 95 */
										obj_t BgL_arg1696z00_4471;

										{	/* Cfa/cfa.scm 95 */
											obj_t BgL_arg1697z00_4472;

											{	/* Cfa/cfa.scm 95 */
												obj_t BgL_arg1704z00_4473;

												BgL_arg1704z00_4473 =
													MAKE_YOUNG_PAIR(BgL_arg1685z00_4464, BNIL);
												BgL_arg1697z00_4472 =
													MAKE_YOUNG_PAIR(BGl_string2126z00zzcfa_cfaz00,
													BgL_arg1704z00_4473);
											}
											BgL_arg1696z00_4471 =
												MAKE_YOUNG_PAIR(BgL_arg1684z00_4463,
												BgL_arg1697z00_4472);
										}
										BgL_arg1695z00_4470 =
											MAKE_YOUNG_PAIR(BGl_string2127z00zzcfa_cfaz00,
											BgL_arg1696z00_4471);
									}
									BgL_arg1692z00_4469 =
										MAKE_YOUNG_PAIR(BGl_string2128z00zzcfa_cfaz00,
										BgL_arg1695z00_4470);
								}
								BgL_arg1688z00_4468 =
									MAKE_YOUNG_PAIR(BINT(((long) 95)), BgL_arg1692z00_4469);
							}
							BgL_arg1687z00_4467 =
								MAKE_YOUNG_PAIR(BGl_string2129z00zzcfa_cfaz00,
								BgL_arg1688z00_4468);
						}
						BgL_list1686z00_4466 =
							MAKE_YOUNG_PAIR(BGl_string2130z00zzcfa_cfaz00,
							BgL_arg1687z00_4467);
					}
					BGl_tprintz00zz__r4_output_6_10_3z00(BgL_arg1672z00_4462,
						BgL_list1686z00_4466);
			}}
			return
				BGl_errorz00zz__errorz00(BGl_string2131z00zzcfa_cfaz00,
				BGl_string2132z00zzcfa_cfaz00, BGl_string2133z00zzcfa_cfaz00);
		}

	}



/* &cfa!1590 */
	obj_t BGl_z62cfaz121590z70zzcfa_cfaz00(obj_t BgL_envz00_4343,
		obj_t BgL_nodez00_4344)
	{
		{	/* Cfa/cfa.scm 37 */
			{	/* Cfa/cfa.scm 38 */
				obj_t BgL_arg1667z00_4475;

				BgL_arg1667z00_4475 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_4344)));
				return
					BGl_internalzd2errorzd2zztools_errorz00(BGl_string2134z00zzcfa_cfaz00,
					((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_4344)), BgL_arg1667z00_4475);
			}
		}

	}



/* cfa! */
	BGL_EXPORTED_DEF BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt
		BgL_nodez00_3)
	{
		{	/* Cfa/cfa.scm 37 */
			{	/* Cfa/cfa.scm 37 */
				obj_t BgL_method1591z00_3283;

				{	/* Cfa/cfa.scm 37 */
					obj_t BgL_res2100z00_4202;

					{	/* Cfa/cfa.scm 37 */
						long BgL_objzd2classzd2numz00_4167;

						{	/* Cfa/cfa.scm 37 */
							long BgL_res2090z00_4170;

							BgL_res2090z00_4170 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_3));
							BgL_objzd2classzd2numz00_4167 = BgL_res2090z00_4170;
						}
						{	/* Cfa/cfa.scm 37 */
							obj_t BgL_arg1813z00_4168;

							BgL_arg1813z00_4168 =
								PROCEDURE_REF(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
								(int) (((long) 1)));
							{	/* Cfa/cfa.scm 37 */
								int BgL_offsetz00_4172;

								BgL_offsetz00_4172 = (int) (BgL_objzd2classzd2numz00_4167);
								{	/* Cfa/cfa.scm 37 */
									long BgL_offsetz00_4173;

									BgL_offsetz00_4173 =
										((long) (BgL_offsetz00_4172) - OBJECT_TYPE);
									{	/* Cfa/cfa.scm 37 */
										long BgL_modz00_4174;

										BgL_modz00_4174 =
											(BgL_offsetz00_4173 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/cfa.scm 37 */
											long BgL_restz00_4176;

											BgL_restz00_4176 =
												(BgL_offsetz00_4173 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/cfa.scm 37 */

												{	/* Cfa/cfa.scm 37 */
													obj_t BgL_bucketz00_4178;

													BgL_bucketz00_4178 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4168), BgL_modz00_4174);
													BgL_res2100z00_4202 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4178), BgL_restz00_4176);
					}}}}}}}}
					BgL_method1591z00_3283 = BgL_res2100z00_4202;
				}
				return
					((BgL_approxz00_bglt)
					PROCEDURE_ENTRY(BgL_method1591z00_3283) (BgL_method1591z00_3283,
						((obj_t) BgL_nodez00_3), BEOA));
			}
		}

	}



/* &cfa! */
	BgL_approxz00_bglt BGl_z62cfaz12z70zzcfa_cfaz00(obj_t BgL_envz00_4345,
		obj_t BgL_nodez00_4346)
	{
		{	/* Cfa/cfa.scm 37 */
			return BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_nodez00_4346));
		}

	}



/* cfa-variable-value-approx */
	BGL_EXPORTED_DEF obj_t
		BGl_cfazd2variablezd2valuezd2approxzd2zzcfa_cfaz00(BgL_valuez00_bglt
		BgL_valuez00_10)
	{
		{	/* Cfa/cfa.scm 94 */
			{	/* Cfa/cfa.scm 94 */
				obj_t BgL_method1605z00_3284;

				{	/* Cfa/cfa.scm 94 */
					obj_t BgL_res2111z00_4239;

					{	/* Cfa/cfa.scm 94 */
						long BgL_objzd2classzd2numz00_4204;

						{	/* Cfa/cfa.scm 94 */
							long BgL_res2101z00_4207;

							BgL_res2101z00_4207 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_valuez00_10));
							BgL_objzd2classzd2numz00_4204 = BgL_res2101z00_4207;
						}
						{	/* Cfa/cfa.scm 94 */
							obj_t BgL_arg1813z00_4205;

							BgL_arg1813z00_4205 =
								PROCEDURE_REF
								(BGl_cfazd2variablezd2valuezd2approxzd2envz00zzcfa_cfaz00,
								(int) (((long) 1)));
							{	/* Cfa/cfa.scm 94 */
								int BgL_offsetz00_4209;

								BgL_offsetz00_4209 = (int) (BgL_objzd2classzd2numz00_4204);
								{	/* Cfa/cfa.scm 94 */
									long BgL_offsetz00_4210;

									BgL_offsetz00_4210 =
										((long) (BgL_offsetz00_4209) - OBJECT_TYPE);
									{	/* Cfa/cfa.scm 94 */
										long BgL_modz00_4211;

										BgL_modz00_4211 =
											(BgL_offsetz00_4210 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/cfa.scm 94 */
											long BgL_restz00_4213;

											BgL_restz00_4213 =
												(BgL_offsetz00_4210 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/cfa.scm 94 */

												{	/* Cfa/cfa.scm 94 */
													obj_t BgL_bucketz00_4215;

													BgL_bucketz00_4215 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4205), BgL_modz00_4211);
													BgL_res2111z00_4239 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4215), BgL_restz00_4213);
					}}}}}}}}
					BgL_method1605z00_3284 = BgL_res2111z00_4239;
				}
				return
					PROCEDURE_ENTRY(BgL_method1605z00_3284) (BgL_method1605z00_3284,
					((obj_t) BgL_valuez00_10), BEOA);
			}
		}

	}



/* &cfa-variable-value-approx */
	obj_t BGl_z62cfazd2variablezd2valuezd2approxzb0zzcfa_cfaz00(obj_t
		BgL_envz00_4347, obj_t BgL_valuez00_4348)
	{
		{	/* Cfa/cfa.scm 94 */
			return
				BGl_cfazd2variablezd2valuezd2approxzd2zzcfa_cfaz00(
				((BgL_valuez00_bglt) BgL_valuez00_4348));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_cfaz00()
	{
		{	/* Cfa/cfa.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_literalzf2Cinfozf2zzcfa_infoz00,
				BGl_proc2135z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_patchzf2Cinfozf2zzcfa_infoz00,
				BGl_proc2137z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_kwotezf2Cinfozf2zzcfa_infoz00,
				BGl_proc2138z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_kwotezf2nodezf2zzcfa_infoz00,
				BGl_proc2139z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_varz00zzast_nodez00,
				BGl_proc2140z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_closurez00zzast_nodez00,
				BGl_proc2141z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfazd2variablezd2valuezd2approxzd2envz00zzcfa_cfaz00,
				BGl_svarzf2Cinfozf2zzcfa_infoz00, BGl_proc2142z00zzcfa_cfaz00,
				BGl_string2143z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfazd2variablezd2valuezd2approxzd2envz00zzcfa_cfaz00,
				BGl_scnstzf2Cinfozf2zzcfa_infoz00, BGl_proc2144z00zzcfa_cfaz00,
				BGl_string2143z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfazd2variablezd2valuezd2approxzd2envz00zzcfa_cfaz00,
				BGl_cvarzf2Cinfozf2zzcfa_infoz00, BGl_proc2145z00zzcfa_cfaz00,
				BGl_string2143z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfazd2variablezd2valuezd2approxzd2envz00zzcfa_cfaz00,
				BGl_sexitzf2Cinfozf2zzcfa_infoz00, BGl_proc2146z00zzcfa_cfaz00,
				BGl_string2143z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfazd2variablezd2valuezd2approxzd2envz00zzcfa_cfaz00,
				BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00, BGl_proc2147z00zzcfa_cfaz00,
				BGl_string2143z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_sequencez00zzast_nodez00,
				BGl_proc2148z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_syncz00zzast_nodez00,
				BGl_proc2149z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_appzd2lyzf2Cinfoz20zzcfa_infoz00,
				BGl_proc2150z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_pragmazf2Cinfozf2zzcfa_info3z00,
				BGl_proc2151z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_genpatchidzf2Cinfozf2zzcfa_infoz00, BGl_proc2152z00zzcfa_cfaz00,
				BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_getfieldzf2Cinfozf2zzcfa_info3z00,
				BGl_proc2153z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_setfieldzf2Cinfozf2zzcfa_info3z00,
				BGl_proc2154z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_newzf2Cinfozf2zzcfa_info3z00,
				BGl_proc2155z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_instanceofzf2Cinfozf2zzcfa_info3z00, BGl_proc2156z00zzcfa_cfaz00,
				BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00, BGl_proc2157z00zzcfa_cfaz00,
				BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_castz00zzast_nodez00,
				BGl_proc2158z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_setqzf2Cinfozf2zzcfa_infoz00,
				BGl_proc2159z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_conditionalzf2Cinfozf2zzcfa_infoz00, BGl_proc2160z00zzcfa_cfaz00,
				BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_failzf2Cinfozf2zzcfa_infoz00,
				BGl_proc2161z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_switchzf2Cinfozf2zzcfa_infoz00,
				BGl_proc2162z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc2163z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc2164z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_setzd2exzd2itzf2Cinfozf2zzcfa_infoz00, BGl_proc2165z00zzcfa_cfaz00,
				BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_jumpzd2exzd2itzf2Cinfozf2zzcfa_infoz00, BGl_proc2166z00zzcfa_cfaz00,
				BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00, BGl_proc2167z00zzcfa_cfaz00,
				BGl_string2136z00zzcfa_cfaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00, BGl_proc2168z00zzcfa_cfaz00,
				BGl_string2136z00zzcfa_cfaz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00,
				BGl_proc2169z00zzcfa_cfaz00, BGl_string2136z00zzcfa_cfaz00);
		}

	}



/* &cfa!-box-ref/Cinfo1659 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2boxzd2refzf2Cinfo1659z82zzcfa_cfaz00(obj_t
		BgL_envz00_4382, obj_t BgL_nodez00_4383)
	{
		{	/* Cfa/cfa.scm 371 */
			{	/* Cfa/cfa.scm 373 */
				BgL_varz00_bglt BgL_arg1881z00_4477;

				BgL_arg1881z00_4477 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt)
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_4383))))->BgL_varz00);
				BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1881z00_4477));
			}
			{
				BgL_boxzd2refzf2cinfoz20_bglt BgL_auxz00_4778;

				{
					obj_t BgL_auxz00_4779;

					{	/* Cfa/cfa.scm 374 */
						BgL_objectz00_bglt BgL_tmpz00_4780;

						BgL_tmpz00_4780 =
							((BgL_objectz00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_4383));
						BgL_auxz00_4779 = BGL_OBJECT_WIDENING(BgL_tmpz00_4780);
					}
					BgL_auxz00_4778 = ((BgL_boxzd2refzf2cinfoz20_bglt) BgL_auxz00_4779);
				}
				return
					(((BgL_boxzd2refzf2cinfoz20_bglt) COBJECT(BgL_auxz00_4778))->
					BgL_approxz00);
			}
		}

	}



/* &cfa!-box-set!/Cinfo1657 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2boxzd2setz12zf2Cinfo1657z90zzcfa_cfaz00(obj_t
		BgL_envz00_4384, obj_t BgL_nodez00_4385)
	{
		{	/* Cfa/cfa.scm 360 */
			{	/* Cfa/cfa.scm 362 */
				BgL_varz00_bglt BgL_arg1874z00_4479;

				BgL_arg1874z00_4479 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt)
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_4385))))->BgL_varz00);
				BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1874z00_4479));
			}
			{	/* Cfa/cfa.scm 363 */
				BgL_approxz00_bglt BgL_valzd2approxzd2_4480;

				{	/* Cfa/cfa.scm 363 */
					BgL_nodez00_bglt BgL_arg1877z00_4481;

					BgL_arg1877z00_4481 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt)
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_4385))))->
						BgL_valuez00);
					BgL_valzd2approxzd2_4480 =
						BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1877z00_4481);
				}
				{	/* Cfa/cfa.scm 364 */
					BgL_approxz00_bglt BgL_arg1876z00_4482;

					{
						BgL_boxzd2setz12zf2cinfoz32_bglt BgL_auxz00_4795;

						{
							obj_t BgL_auxz00_4796;

							{	/* Cfa/cfa.scm 364 */
								BgL_objectz00_bglt BgL_tmpz00_4797;

								BgL_tmpz00_4797 =
									((BgL_objectz00_bglt)
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_4385));
								BgL_auxz00_4796 = BGL_OBJECT_WIDENING(BgL_tmpz00_4797);
							}
							BgL_auxz00_4795 =
								((BgL_boxzd2setz12zf2cinfoz32_bglt) BgL_auxz00_4796);
						}
						BgL_arg1876z00_4482 =
							(((BgL_boxzd2setz12zf2cinfoz32_bglt) COBJECT(BgL_auxz00_4795))->
							BgL_approxz00);
					}
					BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1876z00_4482,
						BgL_valzd2approxzd2_4480);
				}
			}
			{	/* Cfa/cfa.scm 365 */
				BgL_approxz00_bglt BgL_arg1878z00_4483;

				{	/* Cfa/cfa.scm 365 */
					BgL_nodez00_bglt BgL_arg1879z00_4484;

					BgL_arg1879z00_4484 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt)
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_4385))))->
						BgL_valuez00);
					BgL_arg1878z00_4483 = BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1879z00_4484);
				}
				BGl_loosez12z12zzcfa_loosez00(BgL_arg1878z00_4483,
					CNST_TABLE_REF(((long) 0)));
			}
			{
				BgL_boxzd2setz12zf2cinfoz32_bglt BgL_auxz00_4810;

				{
					obj_t BgL_auxz00_4811;

					{	/* Cfa/cfa.scm 366 */
						BgL_objectz00_bglt BgL_tmpz00_4812;

						BgL_tmpz00_4812 =
							((BgL_objectz00_bglt)
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_4385));
						BgL_auxz00_4811 = BGL_OBJECT_WIDENING(BgL_tmpz00_4812);
					}
					BgL_auxz00_4810 =
						((BgL_boxzd2setz12zf2cinfoz32_bglt) BgL_auxz00_4811);
				}
				return
					(((BgL_boxzd2setz12zf2cinfoz32_bglt) COBJECT(BgL_auxz00_4810))->
					BgL_approxz00);
			}
		}

	}



/* &cfa!-make-box/Cinfo1655 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2makezd2boxzf2Cinfo1655z82zzcfa_cfaz00(obj_t
		BgL_envz00_4386, obj_t BgL_nodez00_4387)
	{
		{	/* Cfa/cfa.scm 350 */
			{	/* Cfa/cfa.scm 354 */
				BgL_approxz00_bglt BgL_arg1872z00_4486;

				{	/* Cfa/cfa.scm 354 */
					BgL_nodez00_bglt BgL_arg1873z00_4487;

					BgL_arg1873z00_4487 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt)
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_4387))))->BgL_valuez00);
					BgL_arg1872z00_4486 = BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1873z00_4487);
				}
				BGl_loosez12z12zzcfa_loosez00(BgL_arg1872z00_4486,
					CNST_TABLE_REF(((long) 0)));
			}
			{
				BgL_makezd2boxzf2cinfoz20_bglt BgL_auxz00_4824;

				{
					obj_t BgL_auxz00_4825;

					{	/* Cfa/cfa.scm 355 */
						BgL_objectz00_bglt BgL_tmpz00_4826;

						BgL_tmpz00_4826 =
							((BgL_objectz00_bglt)
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_4387));
						BgL_auxz00_4825 = BGL_OBJECT_WIDENING(BgL_tmpz00_4826);
					}
					BgL_auxz00_4824 = ((BgL_makezd2boxzf2cinfoz20_bglt) BgL_auxz00_4825);
				}
				return
					(((BgL_makezd2boxzf2cinfoz20_bglt) COBJECT(BgL_auxz00_4824))->
					BgL_approxz00);
			}
		}

	}



/* &cfa!-jump-ex-it/Cinf1653 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2jumpzd2exzd2itzf2Cinf1653z50zzcfa_cfaz00(obj_t
		BgL_envz00_4388, obj_t BgL_nodez00_4389)
	{
		{	/* Cfa/cfa.scm 340 */
			{	/* Cfa/cfa.scm 342 */
				BgL_nodez00_bglt BgL_arg1870z00_4489;

				BgL_arg1870z00_4489 =
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt)
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_4389))))->
					BgL_exitz00);
				BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1870z00_4489);
			}
			{	/* Cfa/cfa.scm 343 */
				BgL_approxz00_bglt BgL_valzd2approxzd2_4490;

				{	/* Cfa/cfa.scm 343 */
					BgL_nodez00_bglt BgL_arg1871z00_4491;

					BgL_arg1871z00_4491 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt)
									((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_4389))))->
						BgL_valuez00);
					BgL_valzd2approxzd2_4490 =
						BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1871z00_4491);
				}
				BGl_loosez12z12zzcfa_loosez00(BgL_valzd2approxzd2_4490,
					CNST_TABLE_REF(((long) 0)));
				{
					BgL_jumpzd2exzd2itzf2cinfozf2_bglt BgL_auxz00_4842;

					{
						obj_t BgL_auxz00_4843;

						{	/* Cfa/cfa.scm 345 */
							BgL_objectz00_bglt BgL_tmpz00_4844;

							BgL_tmpz00_4844 =
								((BgL_objectz00_bglt)
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_4389));
							BgL_auxz00_4843 = BGL_OBJECT_WIDENING(BgL_tmpz00_4844);
						}
						BgL_auxz00_4842 =
							((BgL_jumpzd2exzd2itzf2cinfozf2_bglt) BgL_auxz00_4843);
					}
					return
						(((BgL_jumpzd2exzd2itzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4842))->
						BgL_approxz00);
				}
			}
		}

	}



/* &cfa!-set-ex-it/Cinfo1651 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2setzd2exzd2itzf2Cinfo1651z50zzcfa_cfaz00(obj_t
		BgL_envz00_4390, obj_t BgL_nodez00_4391)
	{
		{	/* Cfa/cfa.scm 332 */
			{	/* Cfa/cfa.scm 334 */
				BgL_approxz00_bglt BgL_arg1866z00_4493;

				{	/* Cfa/cfa.scm 334 */
					BgL_nodez00_bglt BgL_arg1868z00_4494;

					BgL_arg1868z00_4494 =
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt)
									((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_4391))))->
						BgL_bodyz00);
					BgL_arg1866z00_4493 = BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1868z00_4494);
				}
				BGl_loosez12z12zzcfa_loosez00(BgL_arg1866z00_4493,
					CNST_TABLE_REF(((long) 0)));
			}
			{
				BgL_setzd2exzd2itzf2cinfozf2_bglt BgL_auxz00_4856;

				{
					obj_t BgL_auxz00_4857;

					{	/* Cfa/cfa.scm 335 */
						BgL_objectz00_bglt BgL_tmpz00_4858;

						BgL_tmpz00_4858 =
							((BgL_objectz00_bglt)
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_4391));
						BgL_auxz00_4857 = BGL_OBJECT_WIDENING(BgL_tmpz00_4858);
					}
					BgL_auxz00_4856 =
						((BgL_setzd2exzd2itzf2cinfozf2_bglt) BgL_auxz00_4857);
				}
				return
					(((BgL_setzd2exzd2itzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4856))->
					BgL_approxz00);
			}
		}

	}



/* &cfa!-let-var1649 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2letzd2var1649z70zzcfa_cfaz00(obj_t
		BgL_envz00_4392, obj_t BgL_nodez00_4393)
	{
		{	/* Cfa/cfa.scm 291 */
			{	/* Cfa/cfa.scm 294 */
				obj_t BgL_g1589z00_4496;

				BgL_g1589z00_4496 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_4393)))->BgL_bindingsz00);
				{
					obj_t BgL_l1587z00_4498;

					BgL_l1587z00_4498 = BgL_g1589z00_4496;
				BgL_zc3z04anonymousza31854ze3z87_4497:
					if (PAIRP(BgL_l1587z00_4498))
						{	/* Cfa/cfa.scm 294 */
							{	/* Cfa/cfa.scm 295 */
								obj_t BgL_bindingz00_4499;

								BgL_bindingz00_4499 = CAR(BgL_l1587z00_4498);
								{	/* Cfa/cfa.scm 295 */
									obj_t BgL_varz00_4500;

									BgL_varz00_4500 = CAR(((obj_t) BgL_bindingz00_4499));
									{	/* Cfa/cfa.scm 295 */
										BgL_approxz00_bglt BgL_varzd2approxzd2_4501;

										{	/* Cfa/cfa.scm 296 */
											BgL_svarz00_bglt BgL_oz00_4502;

											BgL_oz00_4502 =
												((BgL_svarz00_bglt)
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_varz00_4500)))->
													BgL_valuez00));
											{
												BgL_svarzf2cinfozf2_bglt BgL_auxz00_4874;

												{
													obj_t BgL_auxz00_4875;

													{	/* Cfa/cfa.scm 296 */
														BgL_objectz00_bglt BgL_tmpz00_4876;

														BgL_tmpz00_4876 =
															((BgL_objectz00_bglt) BgL_oz00_4502);
														BgL_auxz00_4875 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4876);
													}
													BgL_auxz00_4874 =
														((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_4875);
												}
												BgL_varzd2approxzd2_4501 =
													(((BgL_svarzf2cinfozf2_bglt)
														COBJECT(BgL_auxz00_4874))->BgL_approxz00);
											}
										}
										{	/* Cfa/cfa.scm 296 */
											BgL_approxz00_bglt BgL_valzd2approxzd2_4503;

											{	/* Cfa/cfa.scm 297 */
												obj_t BgL_arg1861z00_4504;

												BgL_arg1861z00_4504 =
													CDR(((obj_t) BgL_bindingz00_4499));
												BgL_valzd2approxzd2_4503 =
													BGl_cfaz12z12zzcfa_cfaz00(
													((BgL_nodez00_bglt) BgL_arg1861z00_4504));
											}
											{	/* Cfa/cfa.scm 297 */

												{	/* Cfa/cfa.scm 298 */
													BgL_typez00_bglt BgL_vtypez00_4505;
													BgL_typez00_bglt BgL_atypez00_4506;

													BgL_vtypez00_4505 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt) BgL_varz00_4500)))->
														BgL_typez00);
													BgL_atypez00_4506 =
														(((BgL_approxz00_bglt)
															COBJECT(BgL_valzd2approxzd2_4503))->BgL_typez00);
													BGl_unionzd2approxzd2filterz12z12zzcfa_approxz00
														(BgL_varzd2approxzd2_4501,
														BgL_valzd2approxzd2_4503);
													{	/* Cfa/cfa.scm 314 */
														bool_t BgL_test2232z00_4889;

														if (
															(((obj_t) BgL_vtypez00_4505) ==
																BGl_za2_za2z00zztype_cachez00))
															{	/* Cfa/cfa.scm 314 */
																BgL_test2232z00_4889 = ((bool_t) 0);
															}
														else
															{	/* Cfa/cfa.scm 314 */
																if (
																	(((obj_t) BgL_vtypez00_4505) ==
																		BGl_za2objza2z00zztype_cachez00))
																	{	/* Cfa/cfa.scm 315 */
																		BgL_test2232z00_4889 = ((bool_t) 0);
																	}
																else
																	{	/* Cfa/cfa.scm 315 */
																		if (
																			(((obj_t) BgL_atypez00_4506) ==
																				BGl_za2_za2z00zztype_cachez00))
																			{	/* Cfa/cfa.scm 316 */
																				BgL_test2232z00_4889 = ((bool_t) 0);
																			}
																		else
																			{	/* Cfa/cfa.scm 316 */
																				BgL_test2232z00_4889 =
																					(
																					((obj_t) BgL_atypez00_4506) ==
																					BGl_za2objza2z00zztype_cachez00);
																			}
																	}
															}
														if (BgL_test2232z00_4889)
															{	/* Cfa/cfa.scm 314 */
																BGl_approxzd2setzd2topz12z12zzcfa_approxz00
																	(BgL_valzd2approxzd2_4503);
																((obj_t)
																	BGl_loosez12z12zzcfa_loosez00
																	(BgL_valzd2approxzd2_4503,
																		CNST_TABLE_REF(((long) 0))));
															}
														else
															{	/* Cfa/cfa.scm 314 */
																BFALSE;
															}
													}
												}
											}
										}
									}
								}
							}
							{
								obj_t BgL_l1587z00_4905;

								BgL_l1587z00_4905 = CDR(BgL_l1587z00_4498);
								BgL_l1587z00_4498 = BgL_l1587z00_4905;
								goto BgL_zc3z04anonymousza31854ze3z87_4497;
							}
						}
					else
						{	/* Cfa/cfa.scm 294 */
							((bool_t) 1);
						}
				}
			}
			{	/* Cfa/cfa.scm 324 */
				BgL_approxz00_bglt BgL_approxz00_4507;

				BgL_approxz00_4507 =
					BGl_cfaz12z12zzcfa_cfaz00(
					(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_4393)))->BgL_bodyz00));
				return BgL_approxz00_4507;
			}
		}

	}



/* &cfa!-let-fun1647 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2letzd2fun1647z70zzcfa_cfaz00(obj_t
		BgL_envz00_4394, obj_t BgL_nodez00_4395)
	{
		{	/* Cfa/cfa.scm 284 */
			return
				BGl_cfaz12z12zzcfa_cfaz00(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_4395)))->BgL_bodyz00));
		}

	}



/* &cfa!-switch/Cinfo1645 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2switchzf2Cinfo1645z50zzcfa_cfaz00(obj_t
		BgL_envz00_4396, obj_t BgL_nodez00_4397)
	{
		{	/* Cfa/cfa.scm 270 */
			{	/* Cfa/cfa.scm 272 */
				BgL_nodez00_bglt BgL_arg1845z00_4510;

				BgL_arg1845z00_4510 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt)
								((BgL_switchz00_bglt) BgL_nodez00_4397))))->BgL_testz00);
				BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1845z00_4510);
			}
			{	/* Cfa/cfa.scm 273 */
				BgL_approxz00_bglt BgL_reszd2approxzd2_4511;

				{
					BgL_switchzf2cinfozf2_bglt BgL_auxz00_4917;

					{
						obj_t BgL_auxz00_4918;

						{	/* Cfa/cfa.scm 273 */
							BgL_objectz00_bglt BgL_tmpz00_4919;

							BgL_tmpz00_4919 =
								((BgL_objectz00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_4397));
							BgL_auxz00_4918 = BGL_OBJECT_WIDENING(BgL_tmpz00_4919);
						}
						BgL_auxz00_4917 = ((BgL_switchzf2cinfozf2_bglt) BgL_auxz00_4918);
					}
					BgL_reszd2approxzd2_4511 =
						(((BgL_switchzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4917))->
						BgL_approxz00);
				}
				{
					obj_t BgL_clsz00_4513;

					{	/* Cfa/cfa.scm 274 */
						obj_t BgL_arg1846z00_4518;

						BgL_arg1846z00_4518 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt)
										((BgL_switchz00_bglt) BgL_nodez00_4397))))->BgL_clausesz00);
						BgL_clsz00_4513 = BgL_arg1846z00_4518;
					BgL_loopz00_4512:
						if (NULLP(BgL_clsz00_4513))
							{	/* Cfa/cfa.scm 275 */
								return BgL_reszd2approxzd2_4511;
							}
						else
							{	/* Cfa/cfa.scm 277 */
								BgL_approxz00_bglt BgL_newzd2approxzd2_4514;

								{	/* Cfa/cfa.scm 277 */
									obj_t BgL_arg1851z00_4515;

									{	/* Cfa/cfa.scm 277 */
										obj_t BgL_pairz00_4516;

										BgL_pairz00_4516 = CAR(((obj_t) BgL_clsz00_4513));
										BgL_arg1851z00_4515 = CDR(BgL_pairz00_4516);
									}
									BgL_newzd2approxzd2_4514 =
										BGl_cfaz12z12zzcfa_cfaz00(
										((BgL_nodez00_bglt) BgL_arg1851z00_4515));
								}
								BGl_unionzd2approxz12zc0zzcfa_approxz00
									(BgL_reszd2approxzd2_4511, BgL_newzd2approxzd2_4514);
								{	/* Cfa/cfa.scm 279 */
									obj_t BgL_arg1850z00_4517;

									BgL_arg1850z00_4517 = CDR(((obj_t) BgL_clsz00_4513));
									{
										obj_t BgL_clsz00_4938;

										BgL_clsz00_4938 = BgL_arg1850z00_4517;
										BgL_clsz00_4513 = BgL_clsz00_4938;
										goto BgL_loopz00_4512;
									}
								}
							}
					}
				}
			}
		}

	}



/* &cfa!-fail/Cinfo1643 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2failzf2Cinfo1643z50zzcfa_cfaz00(obj_t
		BgL_envz00_4398, obj_t BgL_nodez00_4399)
	{
		{	/* Cfa/cfa.scm 260 */
			{	/* Cfa/cfa.scm 262 */
				BgL_approxz00_bglt BgL_arg1835z00_4520;

				{	/* Cfa/cfa.scm 262 */
					BgL_nodez00_bglt BgL_arg1836z00_4521;

					BgL_arg1836z00_4521 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt)
									((BgL_failz00_bglt) BgL_nodez00_4399))))->BgL_procz00);
					BgL_arg1835z00_4520 = BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1836z00_4521);
				}
				BGl_loosez12z12zzcfa_loosez00(BgL_arg1835z00_4520,
					CNST_TABLE_REF(((long) 0)));
			}
			{	/* Cfa/cfa.scm 263 */
				BgL_approxz00_bglt BgL_arg1838z00_4522;

				{	/* Cfa/cfa.scm 263 */
					BgL_nodez00_bglt BgL_arg1840z00_4523;

					BgL_arg1840z00_4523 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt)
									((BgL_failz00_bglt) BgL_nodez00_4399))))->BgL_msgz00);
					BgL_arg1838z00_4522 = BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1840z00_4523);
				}
				BGl_loosez12z12zzcfa_loosez00(BgL_arg1838z00_4522,
					CNST_TABLE_REF(((long) 0)));
			}
			{	/* Cfa/cfa.scm 264 */
				BgL_approxz00_bglt BgL_arg1841z00_4524;

				{	/* Cfa/cfa.scm 264 */
					BgL_nodez00_bglt BgL_arg1842z00_4525;

					BgL_arg1842z00_4525 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt)
									((BgL_failz00_bglt) BgL_nodez00_4399))))->BgL_objz00);
					BgL_arg1841z00_4524 = BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1842z00_4525);
				}
				BGl_loosez12z12zzcfa_loosez00(BgL_arg1841z00_4524,
					CNST_TABLE_REF(((long) 0)));
			}
			{
				BgL_failzf2cinfozf2_bglt BgL_auxz00_4957;

				{
					obj_t BgL_auxz00_4958;

					{	/* Cfa/cfa.scm 265 */
						BgL_objectz00_bglt BgL_tmpz00_4959;

						BgL_tmpz00_4959 =
							((BgL_objectz00_bglt) ((BgL_failz00_bglt) BgL_nodez00_4399));
						BgL_auxz00_4958 = BGL_OBJECT_WIDENING(BgL_tmpz00_4959);
					}
					BgL_auxz00_4957 = ((BgL_failzf2cinfozf2_bglt) BgL_auxz00_4958);
				}
				return
					(((BgL_failzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4957))->
					BgL_approxz00);
			}
		}

	}



/* &cfa!-conditional/Cin1641 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2conditionalzf2Cin1641z50zzcfa_cfaz00(obj_t
		BgL_envz00_4400, obj_t BgL_nodez00_4401)
	{
		{	/* Cfa/cfa.scm 248 */
			{	/* Cfa/cfa.scm 250 */
				BgL_nodez00_bglt BgL_arg1829z00_4527;

				BgL_arg1829z00_4527 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt)
								((BgL_conditionalz00_bglt) BgL_nodez00_4401))))->BgL_testz00);
				BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1829z00_4527);
			}
			{	/* Cfa/cfa.scm 251 */
				BgL_approxz00_bglt BgL_thenzd2approxzd2_4528;
				BgL_approxz00_bglt BgL_elsezd2approxzd2_4529;

				{	/* Cfa/cfa.scm 251 */
					BgL_nodez00_bglt BgL_arg1832z00_4530;

					BgL_arg1832z00_4530 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt)
									((BgL_conditionalz00_bglt) BgL_nodez00_4401))))->BgL_truez00);
					BgL_thenzd2approxzd2_4528 =
						BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1832z00_4530);
				}
				{	/* Cfa/cfa.scm 252 */
					BgL_nodez00_bglt BgL_arg1833z00_4531;

					BgL_arg1833z00_4531 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt)
									((BgL_conditionalz00_bglt) BgL_nodez00_4401))))->
						BgL_falsez00);
					BgL_elsezd2approxzd2_4529 =
						BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1833z00_4531);
				}
				{	/* Cfa/cfa.scm 253 */
					BgL_approxz00_bglt BgL_arg1830z00_4532;

					{
						BgL_conditionalzf2cinfozf2_bglt BgL_auxz00_4977;

						{
							obj_t BgL_auxz00_4978;

							{	/* Cfa/cfa.scm 253 */
								BgL_objectz00_bglt BgL_tmpz00_4979;

								BgL_tmpz00_4979 =
									((BgL_objectz00_bglt)
									((BgL_conditionalz00_bglt) BgL_nodez00_4401));
								BgL_auxz00_4978 = BGL_OBJECT_WIDENING(BgL_tmpz00_4979);
							}
							BgL_auxz00_4977 =
								((BgL_conditionalzf2cinfozf2_bglt) BgL_auxz00_4978);
						}
						BgL_arg1830z00_4532 =
							(((BgL_conditionalzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4977))->
							BgL_approxz00);
					}
					BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1830z00_4532,
						BgL_thenzd2approxzd2_4528);
				}
				{	/* Cfa/cfa.scm 254 */
					BgL_approxz00_bglt BgL_arg1831z00_4533;

					{
						BgL_conditionalzf2cinfozf2_bglt BgL_auxz00_4986;

						{
							obj_t BgL_auxz00_4987;

							{	/* Cfa/cfa.scm 254 */
								BgL_objectz00_bglt BgL_tmpz00_4988;

								BgL_tmpz00_4988 =
									((BgL_objectz00_bglt)
									((BgL_conditionalz00_bglt) BgL_nodez00_4401));
								BgL_auxz00_4987 = BGL_OBJECT_WIDENING(BgL_tmpz00_4988);
							}
							BgL_auxz00_4986 =
								((BgL_conditionalzf2cinfozf2_bglt) BgL_auxz00_4987);
						}
						BgL_arg1831z00_4533 =
							(((BgL_conditionalzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4986))->
							BgL_approxz00);
					}
					BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1831z00_4533,
						BgL_elsezd2approxzd2_4529);
				}
				{
					BgL_conditionalzf2cinfozf2_bglt BgL_auxz00_4995;

					{
						obj_t BgL_auxz00_4996;

						{	/* Cfa/cfa.scm 255 */
							BgL_objectz00_bglt BgL_tmpz00_4997;

							BgL_tmpz00_4997 =
								((BgL_objectz00_bglt)
								((BgL_conditionalz00_bglt) BgL_nodez00_4401));
							BgL_auxz00_4996 = BGL_OBJECT_WIDENING(BgL_tmpz00_4997);
						}
						BgL_auxz00_4995 =
							((BgL_conditionalzf2cinfozf2_bglt) BgL_auxz00_4996);
					}
					return
						(((BgL_conditionalzf2cinfozf2_bglt) COBJECT(BgL_auxz00_4995))->
						BgL_approxz00);
				}
			}
		}

	}



/* &cfa!-setq/Cinfo1639 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2setqzf2Cinfo1639z50zzcfa_cfaz00(obj_t
		BgL_envz00_4402, obj_t BgL_nodez00_4403)
	{
		{	/* Cfa/cfa.scm 230 */
			{	/* Cfa/cfa.scm 232 */
				BgL_approxz00_bglt BgL_varzd2approxzd2_4535;

				{	/* Cfa/cfa.scm 232 */
					BgL_varz00_bglt BgL_arg1828z00_4536;

					BgL_arg1828z00_4536 =
						(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt)
									((BgL_setqz00_bglt) BgL_nodez00_4403))))->BgL_varz00);
					BgL_varzd2approxzd2_4535 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1828z00_4536));
				}
				{	/* Cfa/cfa.scm 232 */
					BgL_approxz00_bglt BgL_valzd2approxzd2_4537;

					{	/* Cfa/cfa.scm 233 */
						BgL_nodez00_bglt BgL_arg1827z00_4538;

						BgL_arg1827z00_4538 =
							(((BgL_setqz00_bglt) COBJECT(
									((BgL_setqz00_bglt)
										((BgL_setqz00_bglt) BgL_nodez00_4403))))->BgL_valuez00);
						BgL_valzd2approxzd2_4537 =
							BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1827z00_4538);
					}
					{	/* Cfa/cfa.scm 233 */
						BgL_variablez00_bglt BgL_vz00_4539;

						BgL_vz00_4539 =
							(((BgL_varz00_bglt) COBJECT(
									(((BgL_setqz00_bglt) COBJECT(
												((BgL_setqz00_bglt)
													((BgL_setqz00_bglt) BgL_nodez00_4403))))->
										BgL_varz00)))->BgL_variablez00);
						{	/* Cfa/cfa.scm 234 */

							BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_varzd2approxzd2_4535,
								BgL_valzd2approxzd2_4537);
							{	/* Cfa/cfa.scm 239 */
								bool_t BgL_test2237z00_5017;

								{	/* Cfa/cfa.scm 239 */
									bool_t BgL_test2238z00_5018;

									{	/* Cfa/cfa.scm 239 */
										bool_t BgL_res2119z00_4540;

										BgL_res2119z00_4540 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_vz00_4539), BGl_globalz00zzast_varz00);
										BgL_test2238z00_5018 = BgL_res2119z00_4540;
									}
									if (BgL_test2238z00_5018)
										{	/* Cfa/cfa.scm 240 */
											bool_t BgL__ortest_1195z00_4541;

											if (CBOOL(
													(((BgL_globalz00_bglt) COBJECT(
																((BgL_globalz00_bglt) BgL_vz00_4539)))->
														BgL_initz00)))
												{	/* Cfa/cfa.scm 240 */
													BgL__ortest_1195z00_4541 = ((bool_t) 0);
												}
											else
												{	/* Cfa/cfa.scm 240 */
													BgL__ortest_1195z00_4541 = ((bool_t) 1);
												}
											if (BgL__ortest_1195z00_4541)
												{	/* Cfa/cfa.scm 240 */
													BgL_test2237z00_5017 = BgL__ortest_1195z00_4541;
												}
											else
												{	/* Cfa/cfa.scm 240 */
													if (
														((((BgL_globalz00_bglt) COBJECT(
																		((BgL_globalz00_bglt) BgL_vz00_4539)))->
																BgL_importz00) == CNST_TABLE_REF(((long) 1))))
														{	/* Cfa/cfa.scm 241 */
															BgL_test2237z00_5017 = ((bool_t) 0);
														}
													else
														{	/* Cfa/cfa.scm 241 */
															BgL_test2237z00_5017 = ((bool_t) 1);
														}
												}
										}
									else
										{	/* Cfa/cfa.scm 239 */
											BgL_test2237z00_5017 = ((bool_t) 0);
										}
								}
								if (BgL_test2237z00_5017)
									{	/* Cfa/cfa.scm 239 */
										BGl_globalzd2loosez12zc0zzcfa_loosez00(
											((BgL_globalz00_bglt) BgL_vz00_4539),
											BgL_varzd2approxzd2_4535);
									}
								else
									{	/* Cfa/cfa.scm 239 */
										BFALSE;
									}
							}
							{
								BgL_setqzf2cinfozf2_bglt BgL_auxz00_5033;

								{
									obj_t BgL_auxz00_5034;

									{	/* Cfa/cfa.scm 243 */
										BgL_objectz00_bglt BgL_tmpz00_5035;

										BgL_tmpz00_5035 =
											((BgL_objectz00_bglt)
											((BgL_setqz00_bglt) BgL_nodez00_4403));
										BgL_auxz00_5034 = BGL_OBJECT_WIDENING(BgL_tmpz00_5035);
									}
									BgL_auxz00_5033 =
										((BgL_setqzf2cinfozf2_bglt) BgL_auxz00_5034);
								}
								return
									(((BgL_setqzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5033))->
									BgL_approxz00);
							}
						}
					}
				}
			}
		}

	}



/* &cfa!-cast1637 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2cast1637za2zzcfa_cfaz00(obj_t
		BgL_envz00_4404, obj_t BgL_nodez00_4405)
	{
		{	/* Cfa/cfa.scm 223 */
			return
				BGl_cfaz12z12zzcfa_cfaz00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_4405)))->BgL_argz00));
		}

	}



/* &cfa!-cast-null/Cinfo1635 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2castzd2nullzf2Cinfo1635z82zzcfa_cfaz00(obj_t
		BgL_envz00_4406, obj_t BgL_nodez00_4407)
	{
		{	/* Cfa/cfa.scm 216 */
			{
				BgL_castzd2nullzf2cinfoz20_bglt BgL_auxz00_5044;

				{
					obj_t BgL_auxz00_5045;

					{	/* Cfa/cfa.scm 217 */
						BgL_objectz00_bglt BgL_tmpz00_5046;

						BgL_tmpz00_5046 =
							((BgL_objectz00_bglt)
							((BgL_castzd2nullzd2_bglt) BgL_nodez00_4407));
						BgL_auxz00_5045 = BGL_OBJECT_WIDENING(BgL_tmpz00_5046);
					}
					BgL_auxz00_5044 = ((BgL_castzd2nullzf2cinfoz20_bglt) BgL_auxz00_5045);
				}
				return
					(((BgL_castzd2nullzf2cinfoz20_bglt) COBJECT(BgL_auxz00_5044))->
					BgL_approxz00);
			}
		}

	}



/* &cfa!-instanceof/Cinf1633 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2instanceofzf2Cinf1633z50zzcfa_cfaz00(obj_t
		BgL_envz00_4408, obj_t BgL_nodez00_4409)
	{
		{	/* Cfa/cfa.scm 209 */
			{
				BgL_instanceofzf2cinfozf2_bglt BgL_auxz00_5052;

				{
					obj_t BgL_auxz00_5053;

					{	/* Cfa/cfa.scm 210 */
						BgL_objectz00_bglt BgL_tmpz00_5054;

						BgL_tmpz00_5054 =
							((BgL_objectz00_bglt)
							((BgL_instanceofz00_bglt) BgL_nodez00_4409));
						BgL_auxz00_5053 = BGL_OBJECT_WIDENING(BgL_tmpz00_5054);
					}
					BgL_auxz00_5052 = ((BgL_instanceofzf2cinfozf2_bglt) BgL_auxz00_5053);
				}
				return
					(((BgL_instanceofzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5052))->
					BgL_approxz00);
			}
		}

	}



/* &cfa!-new/Cinfo1631 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2newzf2Cinfo1631z50zzcfa_cfaz00(obj_t
		BgL_envz00_4410, obj_t BgL_nodez00_4411)
	{
		{	/* Cfa/cfa.scm 201 */
			{	/* Cfa/cfa.scm 203 */
				obj_t BgL_g1586z00_4546;

				BgL_g1586z00_4546 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_newz00_bglt) BgL_nodez00_4411))))->BgL_exprza2za2);
				{
					obj_t BgL_l1584z00_4548;

					BgL_l1584z00_4548 = BgL_g1586z00_4546;
				BgL_zc3z04anonymousza31797ze3z87_4547:
					if (PAIRP(BgL_l1584z00_4548))
						{	/* Cfa/cfa.scm 203 */
							{	/* Cfa/cfa.scm 203 */
								obj_t BgL_az00_4549;

								BgL_az00_4549 = CAR(BgL_l1584z00_4548);
								{	/* Cfa/cfa.scm 203 */
									BgL_approxz00_bglt BgL_arg1801z00_4550;

									BgL_arg1801z00_4550 =
										BGl_cfaz12z12zzcfa_cfaz00(
										((BgL_nodez00_bglt) BgL_az00_4549));
									BGl_loosez12z12zzcfa_loosez00(BgL_arg1801z00_4550,
										CNST_TABLE_REF(((long) 0)));
							}}
							{
								obj_t BgL_l1584z00_5070;

								BgL_l1584z00_5070 = CDR(BgL_l1584z00_4548);
								BgL_l1584z00_4548 = BgL_l1584z00_5070;
								goto BgL_zc3z04anonymousza31797ze3z87_4547;
							}
						}
					else
						{	/* Cfa/cfa.scm 203 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_newzf2cinfozf2_bglt BgL_auxz00_5072;

				{
					obj_t BgL_auxz00_5073;

					{	/* Cfa/cfa.scm 204 */
						BgL_objectz00_bglt BgL_tmpz00_5074;

						BgL_tmpz00_5074 =
							((BgL_objectz00_bglt) ((BgL_newz00_bglt) BgL_nodez00_4411));
						BgL_auxz00_5073 = BGL_OBJECT_WIDENING(BgL_tmpz00_5074);
					}
					BgL_auxz00_5072 = ((BgL_newzf2cinfozf2_bglt) BgL_auxz00_5073);
				}
				return
					(((BgL_newzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5072))->BgL_approxz00);
			}
		}

	}



/* &cfa!-setfield/Cinfo1629 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2setfieldzf2Cinfo1629z50zzcfa_cfaz00(obj_t
		BgL_envz00_4412, obj_t BgL_nodez00_4413)
	{
		{	/* Cfa/cfa.scm 193 */
			{	/* Cfa/cfa.scm 195 */
				obj_t BgL_g1583z00_4552;

				BgL_g1583z00_4552 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_setfieldz00_bglt) BgL_nodez00_4413))))->BgL_exprza2za2);
				{
					obj_t BgL_l1581z00_4554;

					BgL_l1581z00_4554 = BgL_g1583z00_4552;
				BgL_zc3z04anonymousza31785ze3z87_4553:
					if (PAIRP(BgL_l1581z00_4554))
						{	/* Cfa/cfa.scm 195 */
							{	/* Cfa/cfa.scm 195 */
								obj_t BgL_az00_4555;

								BgL_az00_4555 = CAR(BgL_l1581z00_4554);
								{	/* Cfa/cfa.scm 195 */
									BgL_approxz00_bglt BgL_arg1790z00_4556;

									BgL_arg1790z00_4556 =
										BGl_cfaz12z12zzcfa_cfaz00(
										((BgL_nodez00_bglt) BgL_az00_4555));
									BGl_loosez12z12zzcfa_loosez00(BgL_arg1790z00_4556,
										CNST_TABLE_REF(((long) 0)));
							}}
							{
								obj_t BgL_l1581z00_5090;

								BgL_l1581z00_5090 = CDR(BgL_l1581z00_4554);
								BgL_l1581z00_4554 = BgL_l1581z00_5090;
								goto BgL_zc3z04anonymousza31785ze3z87_4553;
							}
						}
					else
						{	/* Cfa/cfa.scm 195 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_setfieldzf2cinfozf2_bglt BgL_auxz00_5092;

				{
					obj_t BgL_auxz00_5093;

					{	/* Cfa/cfa.scm 196 */
						BgL_objectz00_bglt BgL_tmpz00_5094;

						BgL_tmpz00_5094 =
							((BgL_objectz00_bglt) ((BgL_setfieldz00_bglt) BgL_nodez00_4413));
						BgL_auxz00_5093 = BGL_OBJECT_WIDENING(BgL_tmpz00_5094);
					}
					BgL_auxz00_5092 = ((BgL_setfieldzf2cinfozf2_bglt) BgL_auxz00_5093);
				}
				return
					(((BgL_setfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5092))->
					BgL_approxz00);
			}
		}

	}



/* &cfa!-getfield/Cinfo1627 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2getfieldzf2Cinfo1627z50zzcfa_cfaz00(obj_t
		BgL_envz00_4414, obj_t BgL_nodez00_4415)
	{
		{	/* Cfa/cfa.scm 185 */
			{	/* Cfa/cfa.scm 187 */
				obj_t BgL_g1580z00_4558;

				BgL_g1580z00_4558 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_getfieldz00_bglt) BgL_nodez00_4415))))->BgL_exprza2za2);
				{
					obj_t BgL_l1578z00_4560;

					BgL_l1578z00_4560 = BgL_g1580z00_4558;
				BgL_zc3z04anonymousza31779ze3z87_4559:
					if (PAIRP(BgL_l1578z00_4560))
						{	/* Cfa/cfa.scm 187 */
							{	/* Cfa/cfa.scm 187 */
								obj_t BgL_az00_4561;

								BgL_az00_4561 = CAR(BgL_l1578z00_4560);
								{	/* Cfa/cfa.scm 187 */
									BgL_approxz00_bglt BgL_arg1782z00_4562;

									BgL_arg1782z00_4562 =
										BGl_cfaz12z12zzcfa_cfaz00(
										((BgL_nodez00_bglt) BgL_az00_4561));
									BGl_loosez12z12zzcfa_loosez00(BgL_arg1782z00_4562,
										CNST_TABLE_REF(((long) 0)));
							}}
							{
								obj_t BgL_l1578z00_5110;

								BgL_l1578z00_5110 = CDR(BgL_l1578z00_4560);
								BgL_l1578z00_4560 = BgL_l1578z00_5110;
								goto BgL_zc3z04anonymousza31779ze3z87_4559;
							}
						}
					else
						{	/* Cfa/cfa.scm 187 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_getfieldzf2cinfozf2_bglt BgL_auxz00_5112;

				{
					obj_t BgL_auxz00_5113;

					{	/* Cfa/cfa.scm 188 */
						BgL_objectz00_bglt BgL_tmpz00_5114;

						BgL_tmpz00_5114 =
							((BgL_objectz00_bglt) ((BgL_getfieldz00_bglt) BgL_nodez00_4415));
						BgL_auxz00_5113 = BGL_OBJECT_WIDENING(BgL_tmpz00_5114);
					}
					BgL_auxz00_5112 = ((BgL_getfieldzf2cinfozf2_bglt) BgL_auxz00_5113);
				}
				return
					(((BgL_getfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5112))->
					BgL_approxz00);
			}
		}

	}



/* &cfa!-genpatchid/Cinf1625 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2genpatchidzf2Cinf1625z50zzcfa_cfaz00(obj_t
		BgL_envz00_4416, obj_t BgL_nodez00_4417)
	{
		{	/* Cfa/cfa.scm 177 */
			{	/* Cfa/cfa.scm 179 */
				obj_t BgL_g1577z00_4564;

				BgL_g1577z00_4564 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_genpatchidz00_bglt) BgL_nodez00_4417))))->BgL_exprza2za2);
				{
					obj_t BgL_l1575z00_4566;

					BgL_l1575z00_4566 = BgL_g1577z00_4564;
				BgL_zc3z04anonymousza31772ze3z87_4565:
					if (PAIRP(BgL_l1575z00_4566))
						{	/* Cfa/cfa.scm 179 */
							{	/* Cfa/cfa.scm 179 */
								obj_t BgL_az00_4567;

								BgL_az00_4567 = CAR(BgL_l1575z00_4566);
								{	/* Cfa/cfa.scm 179 */
									BgL_approxz00_bglt BgL_arg1775z00_4568;

									BgL_arg1775z00_4568 =
										BGl_cfaz12z12zzcfa_cfaz00(
										((BgL_nodez00_bglt) BgL_az00_4567));
									BGl_loosez12z12zzcfa_loosez00(BgL_arg1775z00_4568,
										CNST_TABLE_REF(((long) 0)));
							}}
							{
								obj_t BgL_l1575z00_5130;

								BgL_l1575z00_5130 = CDR(BgL_l1575z00_4566);
								BgL_l1575z00_4566 = BgL_l1575z00_5130;
								goto BgL_zc3z04anonymousza31772ze3z87_4565;
							}
						}
					else
						{	/* Cfa/cfa.scm 179 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_genpatchidzf2cinfozf2_bglt BgL_auxz00_5132;

				{
					obj_t BgL_auxz00_5133;

					{	/* Cfa/cfa.scm 180 */
						BgL_objectz00_bglt BgL_tmpz00_5134;

						BgL_tmpz00_5134 =
							((BgL_objectz00_bglt)
							((BgL_genpatchidz00_bglt) BgL_nodez00_4417));
						BgL_auxz00_5133 = BGL_OBJECT_WIDENING(BgL_tmpz00_5134);
					}
					BgL_auxz00_5132 = ((BgL_genpatchidzf2cinfozf2_bglt) BgL_auxz00_5133);
				}
				return
					(((BgL_genpatchidzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5132))->
					BgL_approxz00);
			}
		}

	}



/* &cfa!-pragma/Cinfo1623 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2pragmazf2Cinfo1623z50zzcfa_cfaz00(obj_t
		BgL_envz00_4418, obj_t BgL_nodez00_4419)
	{
		{	/* Cfa/cfa.scm 169 */
			{	/* Cfa/cfa.scm 171 */
				obj_t BgL_g1574z00_4570;

				BgL_g1574z00_4570 =
					(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt)
								((BgL_pragmaz00_bglt) BgL_nodez00_4419))))->BgL_exprza2za2);
				{
					obj_t BgL_l1572z00_4572;

					BgL_l1572z00_4572 = BgL_g1574z00_4570;
				BgL_zc3z04anonymousza31762ze3z87_4571:
					if (PAIRP(BgL_l1572z00_4572))
						{	/* Cfa/cfa.scm 171 */
							{	/* Cfa/cfa.scm 171 */
								obj_t BgL_az00_4573;

								BgL_az00_4573 = CAR(BgL_l1572z00_4572);
								{	/* Cfa/cfa.scm 171 */
									BgL_approxz00_bglt BgL_arg1768z00_4574;

									BgL_arg1768z00_4574 =
										BGl_cfaz12z12zzcfa_cfaz00(
										((BgL_nodez00_bglt) BgL_az00_4573));
									BGl_loosez12z12zzcfa_loosez00(BgL_arg1768z00_4574,
										CNST_TABLE_REF(((long) 0)));
							}}
							{
								obj_t BgL_l1572z00_5150;

								BgL_l1572z00_5150 = CDR(BgL_l1572z00_4572);
								BgL_l1572z00_4572 = BgL_l1572z00_5150;
								goto BgL_zc3z04anonymousza31762ze3z87_4571;
							}
						}
					else
						{	/* Cfa/cfa.scm 171 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_pragmazf2cinfozf2_bglt BgL_auxz00_5152;

				{
					obj_t BgL_auxz00_5153;

					{	/* Cfa/cfa.scm 172 */
						BgL_objectz00_bglt BgL_tmpz00_5154;

						BgL_tmpz00_5154 =
							((BgL_objectz00_bglt) ((BgL_pragmaz00_bglt) BgL_nodez00_4419));
						BgL_auxz00_5153 = BGL_OBJECT_WIDENING(BgL_tmpz00_5154);
					}
					BgL_auxz00_5152 = ((BgL_pragmazf2cinfozf2_bglt) BgL_auxz00_5153);
				}
				return
					(((BgL_pragmazf2cinfozf2_bglt) COBJECT(BgL_auxz00_5152))->
					BgL_approxz00);
			}
		}

	}



/* &cfa!-app-ly/Cinfo1621 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2appzd2lyzf2Cinfo1621z82zzcfa_cfaz00(obj_t
		BgL_envz00_4420, obj_t BgL_nodez00_4421)
	{
		{	/* Cfa/cfa.scm 160 */
			{	/* Cfa/cfa.scm 162 */
				BgL_approxz00_bglt BgL_arg1757z00_4576;

				{	/* Cfa/cfa.scm 162 */
					BgL_nodez00_bglt BgL_arg1759z00_4577;

					BgL_arg1759z00_4577 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt)
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_4421))))->BgL_argz00);
					BgL_arg1757z00_4576 = BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1759z00_4577);
				}
				BGl_loosez12z12zzcfa_loosez00(BgL_arg1757z00_4576,
					CNST_TABLE_REF(((long) 0)));
			}
			{	/* Cfa/cfa.scm 163 */
				BgL_approxz00_bglt BgL_arg1760z00_4578;

				{	/* Cfa/cfa.scm 163 */
					BgL_nodez00_bglt BgL_arg1761z00_4579;

					BgL_arg1761z00_4579 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt)
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_4421))))->BgL_funz00);
					BgL_arg1760z00_4578 = BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1761z00_4579);
				}
				BGl_loosez12z12zzcfa_loosez00(BgL_arg1760z00_4578,
					CNST_TABLE_REF(((long) 0)));
			}
			{
				BgL_appzd2lyzf2cinfoz20_bglt BgL_auxz00_5172;

				{
					obj_t BgL_auxz00_5173;

					{	/* Cfa/cfa.scm 164 */
						BgL_objectz00_bglt BgL_tmpz00_5174;

						BgL_tmpz00_5174 =
							((BgL_objectz00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_4421));
						BgL_auxz00_5173 = BGL_OBJECT_WIDENING(BgL_tmpz00_5174);
					}
					BgL_auxz00_5172 = ((BgL_appzd2lyzf2cinfoz20_bglt) BgL_auxz00_5173);
				}
				return
					(((BgL_appzd2lyzf2cinfoz20_bglt) COBJECT(BgL_auxz00_5172))->
					BgL_approxz00);
			}
		}

	}



/* &cfa!-sync1619 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2sync1619za2zzcfa_cfaz00(obj_t
		BgL_envz00_4422, obj_t BgL_nodez00_4423)
	{
		{	/* Cfa/cfa.scm 151 */
			BGl_cfaz12z12zzcfa_cfaz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_4423)))->BgL_prelockz00));
			BGl_cfaz12z12zzcfa_cfaz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_4423)))->BgL_mutexz00));
			return
				BGl_cfaz12z12zzcfa_cfaz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_4423)))->BgL_bodyz00));
		}

	}



/* &cfa!-sequence1617 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2sequence1617za2zzcfa_cfaz00(obj_t
		BgL_envz00_4424, obj_t BgL_nodez00_4425)
	{
		{	/* Cfa/cfa.scm 140 */
			{	/* Cfa/cfa.scm 142 */
				obj_t BgL_arg1742z00_4582;

				BgL_arg1742z00_4582 =
					(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_4425)))->BgL_nodesz00);
				{
					obj_t BgL_nz00_4584;
					obj_t BgL_approxz00_4585;

					{
						obj_t BgL_auxz00_5191;

						BgL_nz00_4584 = BgL_arg1742z00_4582;
						BgL_approxz00_4585 = BUNSPEC;
					BgL_loopz00_4583:
						if (NULLP(BgL_nz00_4584))
							{	/* Cfa/cfa.scm 144 */
								BgL_auxz00_5191 = BgL_approxz00_4585;
							}
						else
							{	/* Cfa/cfa.scm 146 */
								obj_t BgL_arg1745z00_4586;
								BgL_approxz00_bglt BgL_arg1746z00_4587;

								BgL_arg1745z00_4586 = CDR(((obj_t) BgL_nz00_4584));
								{	/* Cfa/cfa.scm 146 */
									obj_t BgL_arg1747z00_4588;

									BgL_arg1747z00_4588 = CAR(((obj_t) BgL_nz00_4584));
									BgL_arg1746z00_4587 =
										BGl_cfaz12z12zzcfa_cfaz00(
										((BgL_nodez00_bglt) BgL_arg1747z00_4588));
								}
								{
									obj_t BgL_approxz00_5201;
									obj_t BgL_nz00_5200;

									BgL_nz00_5200 = BgL_arg1745z00_4586;
									BgL_approxz00_5201 = ((obj_t) BgL_arg1746z00_4587);
									BgL_approxz00_4585 = BgL_approxz00_5201;
									BgL_nz00_4584 = BgL_nz00_5200;
									goto BgL_loopz00_4583;
								}
							}
						return ((BgL_approxz00_bglt) BgL_auxz00_5191);
					}
				}
			}
		}

	}



/* &cfa-variable-value-a1615 */
	obj_t BGl_z62cfazd2variablezd2valuezd2a1615zb0zzcfa_cfaz00(obj_t
		BgL_envz00_4426, obj_t BgL_valuez00_4427)
	{
		{	/* Cfa/cfa.scm 133 */
			{
				BgL_approxz00_bglt BgL_auxz00_5204;

				{
					BgL_internzd2sfunzf2cinfoz20_bglt BgL_auxz00_5205;

					{
						obj_t BgL_auxz00_5206;

						{	/* Cfa/cfa.scm 134 */
							BgL_objectz00_bglt BgL_tmpz00_5207;

							BgL_tmpz00_5207 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_valuez00_4427));
							BgL_auxz00_5206 = BGL_OBJECT_WIDENING(BgL_tmpz00_5207);
						}
						BgL_auxz00_5205 =
							((BgL_internzd2sfunzf2cinfoz20_bglt) BgL_auxz00_5206);
					}
					BgL_auxz00_5204 =
						(((BgL_internzd2sfunzf2cinfoz20_bglt) COBJECT(BgL_auxz00_5205))->
						BgL_approxz00);
				}
				return ((obj_t) BgL_auxz00_5204);
			}
		}

	}



/* &cfa-variable-value-a1613 */
	obj_t BGl_z62cfazd2variablezd2valuezd2a1613zb0zzcfa_cfaz00(obj_t
		BgL_envz00_4428, obj_t BgL_valuez00_4429)
	{
		{	/* Cfa/cfa.scm 122 */
			{
				BgL_approxz00_bglt BgL_auxz00_5214;

				{
					BgL_sexitzf2cinfozf2_bglt BgL_auxz00_5215;

					{
						obj_t BgL_auxz00_5216;

						{	/* Cfa/cfa.scm 123 */
							BgL_objectz00_bglt BgL_tmpz00_5217;

							BgL_tmpz00_5217 =
								((BgL_objectz00_bglt) ((BgL_sexitz00_bglt) BgL_valuez00_4429));
							BgL_auxz00_5216 = BGL_OBJECT_WIDENING(BgL_tmpz00_5217);
						}
						BgL_auxz00_5215 = ((BgL_sexitzf2cinfozf2_bglt) BgL_auxz00_5216);
					}
					BgL_auxz00_5214 =
						(((BgL_sexitzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5215))->
						BgL_approxz00);
				}
				return ((obj_t) BgL_auxz00_5214);
			}
		}

	}



/* &cfa-variable-value-a1611 */
	obj_t BGl_z62cfazd2variablezd2valuezd2a1611zb0zzcfa_cfaz00(obj_t
		BgL_envz00_4430, obj_t BgL_valuez00_4431)
	{
		{	/* Cfa/cfa.scm 115 */
			{
				BgL_approxz00_bglt BgL_auxz00_5224;

				{
					BgL_cvarzf2cinfozf2_bglt BgL_auxz00_5225;

					{
						obj_t BgL_auxz00_5226;

						{	/* Cfa/cfa.scm 116 */
							BgL_objectz00_bglt BgL_tmpz00_5227;

							BgL_tmpz00_5227 =
								((BgL_objectz00_bglt) ((BgL_cvarz00_bglt) BgL_valuez00_4431));
							BgL_auxz00_5226 = BGL_OBJECT_WIDENING(BgL_tmpz00_5227);
						}
						BgL_auxz00_5225 = ((BgL_cvarzf2cinfozf2_bglt) BgL_auxz00_5226);
					}
					BgL_auxz00_5224 =
						(((BgL_cvarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5225))->
						BgL_approxz00);
				}
				return ((obj_t) BgL_auxz00_5224);
			}
		}

	}



/* &cfa-variable-value-a1609 */
	obj_t BGl_z62cfazd2variablezd2valuezd2a1609zb0zzcfa_cfaz00(obj_t
		BgL_envz00_4432, obj_t BgL_valuez00_4433)
	{
		{	/* Cfa/cfa.scm 108 */
			{
				BgL_approxz00_bglt BgL_auxz00_5234;

				{
					BgL_scnstzf2cinfozf2_bglt BgL_auxz00_5235;

					{
						obj_t BgL_auxz00_5236;

						{	/* Cfa/cfa.scm 109 */
							BgL_objectz00_bglt BgL_tmpz00_5237;

							BgL_tmpz00_5237 =
								((BgL_objectz00_bglt) ((BgL_scnstz00_bglt) BgL_valuez00_4433));
							BgL_auxz00_5236 = BGL_OBJECT_WIDENING(BgL_tmpz00_5237);
						}
						BgL_auxz00_5235 = ((BgL_scnstzf2cinfozf2_bglt) BgL_auxz00_5236);
					}
					BgL_auxz00_5234 =
						(((BgL_scnstzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5235))->
						BgL_approxz00);
				}
				return ((obj_t) BgL_auxz00_5234);
			}
		}

	}



/* &cfa-variable-value-a1607 */
	obj_t BGl_z62cfazd2variablezd2valuezd2a1607zb0zzcfa_cfaz00(obj_t
		BgL_envz00_4434, obj_t BgL_valuez00_4435)
	{
		{	/* Cfa/cfa.scm 101 */
			{
				BgL_approxz00_bglt BgL_auxz00_5244;

				{
					BgL_svarzf2cinfozf2_bglt BgL_auxz00_5245;

					{
						obj_t BgL_auxz00_5246;

						{	/* Cfa/cfa.scm 102 */
							BgL_objectz00_bglt BgL_tmpz00_5247;

							BgL_tmpz00_5247 =
								((BgL_objectz00_bglt) ((BgL_svarz00_bglt) BgL_valuez00_4435));
							BgL_auxz00_5246 = BGL_OBJECT_WIDENING(BgL_tmpz00_5247);
						}
						BgL_auxz00_5245 = ((BgL_svarzf2cinfozf2_bglt) BgL_auxz00_5246);
					}
					BgL_auxz00_5244 =
						(((BgL_svarzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5245))->
						BgL_approxz00);
				}
				return ((obj_t) BgL_auxz00_5244);
			}
		}

	}



/* &cfa!-closure1603 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2closure1603za2zzcfa_cfaz00(obj_t
		BgL_envz00_4436, obj_t BgL_nodez00_4437)
	{
		{	/* Cfa/cfa.scm 88 */
			{	/* Cfa/cfa.scm 89 */
				obj_t BgL_arg1741z00_4595;

				BgL_arg1741z00_4595 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_4437)));
				return
					((BgL_approxz00_bglt)
					BGl_internalzd2errorzd2zztools_errorz00(BGl_string2136z00zzcfa_cfaz00,
						BGl_string2170z00zzcfa_cfaz00, BgL_arg1741z00_4595));
			}
		}

	}



/* &cfa!-var1601 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2var1601za2zzcfa_cfaz00(obj_t
		BgL_envz00_4438, obj_t BgL_nodez00_4439)
	{
		{	/* Cfa/cfa.scm 74 */
			{	/* Cfa/cfa.scm 78 */
				obj_t BgL_approxz00_4597;

				BgL_approxz00_4597 =
					BGl_cfazd2variablezd2valuezd2approxzd2zzcfa_cfaz00(
					(((BgL_variablez00_bglt) COBJECT(
								(((BgL_varz00_bglt) COBJECT(
											((BgL_varz00_bglt) BgL_nodez00_4439)))->
									BgL_variablez00)))->BgL_valuez00));
				{	/* Cfa/cfa.scm 79 */
					bool_t BgL_test2248z00_5263;

					if (
						(((obj_t)
								(((BgL_variablez00_bglt) COBJECT(
											(((BgL_varz00_bglt) COBJECT(
														((BgL_varz00_bglt) BgL_nodez00_4439)))->
												BgL_variablez00)))->BgL_typez00)) ==
							((obj_t) (((BgL_nodez00_bglt)
										COBJECT(((BgL_nodez00_bglt) ((BgL_varz00_bglt)
													BgL_nodez00_4439))))->BgL_typez00))))
						{	/* Cfa/cfa.scm 79 */
							BgL_test2248z00_5263 = ((bool_t) 1);
						}
					else
						{	/* Cfa/cfa.scm 79 */
							BgL_typez00_bglt BgL_arg1731z00_4598;

							BgL_arg1731z00_4598 =
								(((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt)
											((BgL_varz00_bglt) BgL_nodez00_4439))))->BgL_typez00);
							BgL_test2248z00_5263 =
								(
								((obj_t) BgL_arg1731z00_4598) == BGl_za2_za2z00zztype_cachez00);
						}
					if (BgL_test2248z00_5263)
						{	/* Cfa/cfa.scm 79 */
							return ((BgL_approxz00_bglt) BgL_approxz00_4597);
						}
					else
						{	/* Cfa/cfa.scm 81 */
							BgL_approxz00_bglt BgL_new1174z00_4599;

							{	/* Cfa/cfa.scm 83 */
								BgL_approxz00_bglt BgL_new1177z00_4600;

								BgL_new1177z00_4600 =
									((BgL_approxz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_approxz00_bgl))));
								{	/* Cfa/cfa.scm 83 */
									long BgL_arg1729z00_4601;

									{	/* Cfa/cfa.scm 83 */
										long BgL_res2112z00_4602;

										BgL_res2112z00_4602 =
											BGL_CLASS_INDEX(BGl_approxz00zzcfa_infoz00);
										BgL_arg1729z00_4601 = BgL_res2112z00_4602;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1177z00_4600),
										BgL_arg1729z00_4601);
								}
								BgL_new1174z00_4599 = BgL_new1177z00_4600;
							}
							((((BgL_approxz00_bglt) COBJECT(BgL_new1174z00_4599))->
									BgL_typez00) =
								((BgL_typez00_bglt) (((BgL_nodez00_bglt)
											COBJECT(((BgL_nodez00_bglt) ((BgL_varz00_bglt)
														BgL_nodez00_4439))))->BgL_typez00)), BUNSPEC);
							((((BgL_approxz00_bglt) COBJECT(BgL_new1174z00_4599))->
									BgL_typezd2lockedzf3z21) =
								((bool_t) (((BgL_approxz00_bglt) COBJECT(((BgL_approxz00_bglt)
													BgL_approxz00_4597)))->BgL_typezd2lockedzf3z21)),
								BUNSPEC);
							((((BgL_approxz00_bglt) COBJECT(BgL_new1174z00_4599))->
									BgL_allocsz00) =
								((obj_t) (((BgL_approxz00_bglt) COBJECT(((BgL_approxz00_bglt)
													BgL_approxz00_4597)))->BgL_allocsz00)), BUNSPEC);
							((((BgL_approxz00_bglt) COBJECT(BgL_new1174z00_4599))->
									BgL_topzf3zf3) =
								((bool_t) (((BgL_approxz00_bglt) COBJECT(((BgL_approxz00_bglt)
													BgL_approxz00_4597)))->BgL_topzf3zf3)), BUNSPEC);
							((((BgL_approxz00_bglt) COBJECT(BgL_new1174z00_4599))->
									BgL_lostzd2stampzd2) =
								((long) (((BgL_approxz00_bglt) COBJECT(((BgL_approxz00_bglt)
													BgL_approxz00_4597)))->BgL_lostzd2stampzd2)),
								BUNSPEC);
							((((BgL_approxz00_bglt) COBJECT(BgL_new1174z00_4599))->
									BgL_dupz00) = ((obj_t) BgL_approxz00_4597), BUNSPEC);
							return BgL_new1174z00_4599;
						}
				}
			}
		}

	}



/* &cfa!-kwote/node1599 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2kwotezf2node1599z50zzcfa_cfaz00(obj_t
		BgL_envz00_4440, obj_t BgL_knodez00_4441)
	{
		{	/* Cfa/cfa.scm 64 */
			{	/* Cfa/cfa.scm 69 */
				BgL_nodez00_bglt BgL_arg1707z00_4604;

				{
					BgL_kwotezf2nodezf2_bglt BgL_auxz00_5301;

					{
						obj_t BgL_auxz00_5302;

						{	/* Cfa/cfa.scm 69 */
							BgL_objectz00_bglt BgL_tmpz00_5303;

							BgL_tmpz00_5303 =
								((BgL_objectz00_bglt) ((BgL_kwotez00_bglt) BgL_knodez00_4441));
							BgL_auxz00_5302 = BGL_OBJECT_WIDENING(BgL_tmpz00_5303);
						}
						BgL_auxz00_5301 = ((BgL_kwotezf2nodezf2_bglt) BgL_auxz00_5302);
					}
					BgL_arg1707z00_4604 =
						(((BgL_kwotezf2nodezf2_bglt) COBJECT(BgL_auxz00_5301))->
						BgL_nodez00);
				}
				return BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1707z00_4604);
			}
		}

	}



/* &cfa!-kwote/Cinfo1597 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2kwotezf2Cinfo1597z50zzcfa_cfaz00(obj_t
		BgL_envz00_4442, obj_t BgL_nodez00_4443)
	{
		{	/* Cfa/cfa.scm 57 */
			{
				BgL_kwotezf2cinfozf2_bglt BgL_auxz00_5310;

				{
					obj_t BgL_auxz00_5311;

					{	/* Cfa/cfa.scm 58 */
						BgL_objectz00_bglt BgL_tmpz00_5312;

						BgL_tmpz00_5312 =
							((BgL_objectz00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_4443));
						BgL_auxz00_5311 = BGL_OBJECT_WIDENING(BgL_tmpz00_5312);
					}
					BgL_auxz00_5310 = ((BgL_kwotezf2cinfozf2_bglt) BgL_auxz00_5311);
				}
				return
					(((BgL_kwotezf2cinfozf2_bglt) COBJECT(BgL_auxz00_5310))->
					BgL_approxz00);
			}
		}

	}



/* &cfa!-patch/Cinfo1595 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2patchzf2Cinfo1595z50zzcfa_cfaz00(obj_t
		BgL_envz00_4444, obj_t BgL_nodez00_4445)
	{
		{	/* Cfa/cfa.scm 50 */
			{
				BgL_patchzf2cinfozf2_bglt BgL_auxz00_5318;

				{
					obj_t BgL_auxz00_5319;

					{	/* Cfa/cfa.scm 51 */
						BgL_objectz00_bglt BgL_tmpz00_5320;

						BgL_tmpz00_5320 =
							((BgL_objectz00_bglt) ((BgL_patchz00_bglt) BgL_nodez00_4445));
						BgL_auxz00_5319 = BGL_OBJECT_WIDENING(BgL_tmpz00_5320);
					}
					BgL_auxz00_5318 = ((BgL_patchzf2cinfozf2_bglt) BgL_auxz00_5319);
				}
				return
					(((BgL_patchzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5318))->
					BgL_approxz00);
			}
		}

	}



/* &cfa!-literal/Cinfo1593 */
	BgL_approxz00_bglt BGl_z62cfaz12zd2literalzf2Cinfo1593z50zzcfa_cfaz00(obj_t
		BgL_envz00_4446, obj_t BgL_nodez00_4447)
	{
		{	/* Cfa/cfa.scm 43 */
			{
				BgL_literalzf2cinfozf2_bglt BgL_auxz00_5326;

				{
					obj_t BgL_auxz00_5327;

					{	/* Cfa/cfa.scm 44 */
						BgL_objectz00_bglt BgL_tmpz00_5328;

						BgL_tmpz00_5328 =
							((BgL_objectz00_bglt) ((BgL_literalz00_bglt) BgL_nodez00_4447));
						BgL_auxz00_5327 = BGL_OBJECT_WIDENING(BgL_tmpz00_5328);
					}
					BgL_auxz00_5326 = ((BgL_literalzf2cinfozf2_bglt) BgL_auxz00_5327);
				}
				return
					(((BgL_literalzf2cinfozf2_bglt) COBJECT(BgL_auxz00_5326))->
					BgL_approxz00);
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_cfaz00()
	{
		{	/* Cfa/cfa.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2171z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2171z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2171z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2171z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2171z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2171z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2171z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string2171z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2171z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2171z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 471177483),
				BSTRING_TO_STRING(BGl_string2171z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 468997780),
				BSTRING_TO_STRING(BGl_string2171z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 131412196),
				BSTRING_TO_STRING(BGl_string2171z00zzcfa_cfaz00));
			BGl_modulezd2initializa7ationz75zzcfa_appz00(((long) 102053850),
				BSTRING_TO_STRING(BGl_string2171z00zzcfa_cfaz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_funcallz00(((long) 87791629),
				BSTRING_TO_STRING(BGl_string2171z00zzcfa_cfaz00));
		}

	}

#ifdef __cplusplus
}
#endif
